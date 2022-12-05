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
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	float fLocal_67 = 0f;
	int iLocal_68[5] = { 0, 0, 0, 0, 0 };
	float fLocal_69 = 0f;
	float fLocal_70 = 0f;
	float fLocal_71 = 0f;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	struct<2> Local_79 = { 0, 0 } ;
	struct<2> Local_80[8];
	struct<2> Local_81 = { 0, 0 } ;
	struct<4> Local_82[8];
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	float fLocal_95 = 0f;
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
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	struct<60> Local_124 = { 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	struct<6> Local_125[32];
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	var uLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	struct<3> Local_135 = { 0, 0, 0 } ;
	var uLocal_136 = 0;
	struct<23> Local_137 = { 0, 0, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 1015222895;
	var uLocal_144 = 1021665346;
	var uLocal_145 = 0;
	var uLocal_146 = 255;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = -1;
	var uLocal_156 = 996499522;
	var uLocal_157 = 1002740646;
	var uLocal_158 = 0;
	var uLocal_159 = 60;
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
	var uLocal_220 = 1016296636;
	var uLocal_221 = 220;
	var uLocal_222 = 255;
	var uLocal_223 = 255;
	var uLocal_224 = 255;
	var uLocal_225 = 255;
	var uLocal_226 = 255;
	var uLocal_227 = 255;
	var uLocal_228 = 4096;
	var uLocal_229 = 40;
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
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 4;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 1065353216;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 1056964608;
	var uLocal_408 = 1056964608;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	struct<3> Local_415[20];
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	struct<21> Local_424 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_67 = 0f;
	fLocal_69 = 0f;
	fLocal_70 = 0f;
	fLocal_71 = 0f;
	fLocal_84 = 0.62f;
	fLocal_85 = 0.51f;
	fLocal_86 = 0.55f;
	fLocal_87 = 25f;
	fLocal_95 = ((0.05f + 0.275f) - 0.01f);
	iLocal_409 = -1;
	iLocal_410 = -1;
	iLocal_412 = -1;
	iLocal_413 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_1__.func_264(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_1166(ScriptParam_424);
	}
	else
	{
		func_1112();
	}
	while (true)
	{
		__LIB_0__.func_671();
		if (__LIB_6__.func_949())
		{
			func_1112();
		}
		Global_1943929.f_2 = Local_124.f_58;
		Global_1943929.f_3 = Local_124.f_59;
		switch (func_1105(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (__LIB_29__.func_35() == 1)
				{
					func_1103();
					if (func_1102())
					{
						__LIB_39__.func_271(142, 1, -1, 0);
						PLAYER::SET_MAX_WANTED_LEVEL(3);
						if (!__LIB_1__.func_145())
						{
							OBJECT::SET_PLAYER_PERMITTED_TO_COLLECT_PICKUPS_OF_TYPE(PLAYER::PLAYER_ID(), joaat("PICKUP_PORTABLE_PACKAGE"), false);
						}
					}
					else
					{
						__LIB_39__.func_271(142, 0, -1, 0);
					}
					Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 1;
				}
				else if (__LIB_29__.func_35() == 4)
				{
					Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 3;
				}
				break;
			case 1:
				if (func_1075(1))
				{
					Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 2;
				}
				if (__LIB_29__.func_35() == 1)
				{
					func_432();
					func_422();
					if (func_1102() || func_421())
					{
						func_262(&(Global_1637407.f_534), &Global_1637407, 28, &(Global_1637407.f_1), &(Global_1637407.f_117), -1, 0, 0);
					}
					func_205();
				}
				else if (__LIB_29__.func_35() == 4)
				{
					Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 3;
				}
				func_202();
				break;
			case 3:
				__LIB_1__.func_54(&(Local_124.f_49));
				if (__LIB_1__.func_53(&(Local_124.f_49)))
				{
					Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 4;
				}
				break;
			case 2:
				Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 4;
			case 4:
				func_1112();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (__LIB_29__.func_35())
			{
				case 0:
					if (func_193())
					{
						STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_124.f_58), &(Local_124.f_59));
						Local_124.f_0 = 1;
						Local_124.f_33 = NETWORK::PARTICIPANT_ID_TO_INT();
						Local_124.f_34 = PLAYER::PLAYER_ID();
						__LIB_39__.func_271(142, 1, -1, 0);
					}
					break;
				case 1:
					func_191();
					func_4();
					if (func_2())
					{
						Local_124.f_0 = 4;
					}
					else if (__LIB_10__.func_923())
					{
						Local_124.f_0 = 4;
					}
					break;
				case 4:
					break;
				}
		}
	}
}

int func_2()//Position - 0x2DC
{
	if (__LIB_0__.func_114())
	{
		return 1;
	}
	if (BitTest(Local_124.f_1, 2))
	{
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x306
{
	switch (Local_124.f_32)
	{
		case 0:
			func_12();
			func_10();
			func_5();
			if (BitTest(Local_124.f_1, 1))
			{
				Local_124.f_32 = 2;
			}
			else if (BitTest(Local_124.f_1, 3))
			{
				Local_124.f_32 = 2;
			}
			else if (BitTest(Local_124.f_1, 4))
			{
				Local_124.f_32 = 2;
			}
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

void func_5()//Position - 0x36E
{
	if (Local_124.f_5 == 0)
	{
		if (!BitTest(Local_124.f_1, 6))
		{
			if (!__LIB_0__.func_649(&(Local_124.f_53)))
			{
				__LIB_0__.func_580(&(Local_124.f_53), 0, 0);
			}
			else if (__LIB_2__.func_47(&(Local_124.f_53), __LIB_13__.func_411(), 0))
			{
				MISC::SET_BIT(&(Local_124.f_1), 6);
			}
		}
	}
}

void func_10()//Position - 0x475
{
	if (!__LIB_0__.func_649(&(Local_124.f_51)))
	{
		__LIB_0__.func_580(&(Local_124.f_51), 0, 0);
	}
	else if (__LIB_2__.func_47(&(Local_124.f_51), func_11(), 0))
	{
		MISC::SET_BIT(&(Local_124.f_1), 3);
	}
}

int func_11()//Position - 0x4AF
{
	return Global_262145.f_12974 /* Tunable: GB_SIGHTSEER_TIME_LIMIT */;
}

void func_12()//Position - 0x4BE
{
	bool bVar0;
	if (Local_124.f_33 < 0)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_124.f_33)))
	{
		if (Local_125[Local_124.f_33 /*6*/].f_4 > 0)
		{
			bVar0 = (Local_125[Local_124.f_33 /*6*/].f_4 - 1);
			if (!BitTest(Local_124.f_4, bVar0))
			{
				Local_124.f_36 = bVar0;
				if (func_13())
				{
					MISC::SET_BIT(&(Local_124.f_4), bVar0);
				}
			}
		}
	}
}

int func_13()//Position - 0x51E
{
	int iVar0;
	struct<35> Var1;
	struct<3> Var2;
	iVar0 = joaat("prop_ld_case_01");
	Var1.f_5 = 1115815936;
	Var1.f_13 = 2;
	Var1.f_20 = 2;
	Var1.f_32 = -1082130432;
	Var1.f_34 = 1;
	Var1.f_3 = 0;
	Var1.f_5 = 10f;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_124.f_3))
	{
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				Var2 = { func_190() };
				if (func_14(Var2, 5f, &Local_135, &uLocal_136, &Var1))
				{
					Local_124.f_3 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("PICKUP_PORTABLE_PACKAGE"), Local_135, true, iVar0));
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_124.f_3), Local_135 + Vector(0.5f, 0f, 0f), false, false, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_124.f_3), true);
					OBJECT::SET_OBJECT_FORCE_VEHICLES_TO_AVOID(NETWORK::NET_TO_OBJ(Local_124.f_3), true);
					OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_124.f_3), true);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(Local_124.f_3), false);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_124.f_3));
					__LIB_0__.func_580(&(Local_124.f_55), 0, 0);
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_124.f_3))
	{
		return 1;
	}
	return 0;
}

int func_14(struct<3> Param0, float fParam1, var uParam2, var uParam3, var uParam4)//Position - 0x641
{
	struct<17> Var0;
	struct<18> Var1;
	struct<3> Var2;
	if (uParam4->f_5 > (fParam1 - 20f))
	{
		uParam4->f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1.f_28 = -1;
	Var1 = { Param0 };
	Var1.f_3 = uParam4->f_11;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	if (func_15(&Var1, uParam4, &Var0))
	{
		if ((uParam4->f_12 > 0f && uParam4->f_7) && uParam4->f_8)
		{
			Var2 = { Param0 - Var0[0 /*3*/] };
			if (Var2.f_2 > uParam4->f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_16[0] = uParam4->f_11;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_15(var uParam0, var uParam1, var uParam2)//Position - 0x747
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
				if (func_181(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
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
					func_152(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
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
			if (func_69(uParam2, uParam0, uParam1, 0))
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
			if (func_69(uParam2, uParam0, uParam1, 1))
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
						func_18(&Var1, 0, 1, 1, 0, uParam0, uParam1);
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
				func_18(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
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

void func_18(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x17AE
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
	if (func_33(*uParam0, &Var0, iVar6, iParam3, 1))
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
		if (__LIB_4__.func_21(PLAYER::PLAYER_ID(), 0))
		{
			Var2.f_9 = 1;
		}
		Var2.f_60 = uParam5->f_30;
		func_152(&Var0, &uVar1, &Var2);
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
			if (func_33(*uParam0, &Var0, iVar6, iParam3, 0))
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
			else if (func_19(uParam0, 1, 1, 1, 1))
			{
				func_18(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
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

int func_19(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1C21
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
							if (func_19(&Var1, 0, 0, 0, 1))
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

int func_33(struct<3> Param0, var* uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2B9C
{
	if (__LIB_1__.func_64(Param0, uParam1))
	{
		if (func_34(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, false, uParam1, iParam2))
	{
		if (func_34(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_34(struct<3> Param0, var* uParam1, int iParam2, bool bParam3)//Position - 0x2BF8
{
	float fVar0;
	var uVar1;
	var uVar2;
	fVar0 = SYSTEM::VDIST(Param0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_50(Global_2667225.f_512, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
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

int func_50(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x369C
{
	int iVar0;
	bool bVar1;
	if (func_57(Param0))
	{
		if (func_19(uParam1, bParam4, 0, 1, 1))
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

int func_57(struct<3> Param0)//Position - 0x38F6
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
				if (!func_19(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_19(&Param0, 0, 1, 0, 1))
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
					if (!func_19(&Var1, 0, 0, 0, 1))
					{
						if (!func_19(&Param0, 0, 0, 0, 1))
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

int func_69(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x3D2C
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
					func_143(uParam1, uParam2);
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
									func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_18(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				case 1:
					func_143(uParam1, uParam2);
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
					func_143(uParam1, uParam2);
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
				func_143(uParam1, uParam2);
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
		func_140(Global_2667225.f_555, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90));
	}
	if (uParam2->f_7 && !Global_2667225.f_2491.f_4)
	{
		Global_2667225.f_2491.f_4 = 1;
		func_77(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
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
					func_77(Var0, fVar1, uParam1, uParam2, 0, iVar3);
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
					func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
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
					func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__.func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
				func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
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
				func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
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
			func_18(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		__LIB_1__.func_67(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_77(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x45F2
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
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
		if (__LIB_37__.func_133(PLAYER::PLAYER_ID()))
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
		if (!func_134(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0))
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
		if (func_128(Param0, fParam1, uParam2->f_15, __LIB_1__.func_84(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2667225.f_3;
		}
	}
	else if (!__LIB_31__.func_939(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!__LIB_8__.func_803(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!__LIB_8__.func_803(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
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
				if (func_57(Var12))
				{
					if (!func_19(&Param0, 0, 0, 0, 1) && !__LIB_24__.func_959(&Param0, 0))
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
				fVar0 = func_96(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_96(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (__LIB_1__.func_62(Global_2667225.f_489) && iVar8 < 4096)
			{
				Var19.f_2 = __LIB_18__.func_320(Param0);
			}
			uVar7 = func_83(Param0, 1, 0, 0, 0, 0);
			Var19.f_4 = { Param0 };
			Var19.f_7 = fParam1;
			Var19.f_0 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = uVar7;
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
							fVar0 = func_96(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_96(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
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
							fVar2 = __LIB_18__.func_320(Param0);
							bVar21 = true;
						}
						if (fVar2 < Global_2667225.f_2491.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { Param0 };
							Var19.f_7 = fParam1;
							Var19.f_0 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_81(Var19, iVar18);
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
						func_81(Var19, iVar18);
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
						fVar6 = func_83(Param0, 1, 1, 1, 1, 0);
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
						func_81(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

void func_81(struct<10> Param0, int iParam1)//Position - 0x5210
{
	struct<10> Var0;
	Var0.f_2 = 1176256410;
	Var0 = { Global_2667225.f_2491.f_6[iParam1 /*10*/] };
	Global_2667225.f_2491.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_81(Var0, iParam1 + 1);
	}
}

float func_83(struct<3> Param0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x5356
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var6;
	bool bVar7;
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar7 = iVar0;
		if (__LIB_1__.func_264(bVar7, 1, 1) || (iParam5 == 1 && __LIB_1__.func_264(bVar7, 0, 0)))
		{
			if (!bVar7 == PLAYER::PLAYER_ID() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_85(bVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (PLAYER::GET_PLAYER_TEAM(bVar7) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(bVar7) == -1 || !__LIB_7__.func_452(PLAYER::PLAYER_ID(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar7) || !bParam4)
					{
						if (__LIB_1__.func_426(bVar7))
						{
							Var5 = { __LIB_1__.func_265(bVar7) };
							if (!bVar7 == PLAYER::PLAYER_ID())
							{
								Var6 = { NETWORK::NETWORK_GET_LAST_ENTITY_POS_RECEIVED_OVER_NETWORK(PLAYER::GET_PLAYER_PED(bVar7)) };
							}
							else
							{
								Var6 = { Var5 };
							}
							if (!bParam4)
							{
								if (Var5.f_2 < -100f)
								{
									Var5.f_2 = Param0.f_2;
								}
								if (Var6.f_2 < -100f)
								{
									Var6.f_2 = Param0.f_2;
								}
							}
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var5, true);
							fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var6, true);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_85(bool bParam0)//Position - 0x54CC
{
	if (__LIB_1__.func_264(bParam0, 0, 1))
	{
		if (!__LIB_7__.func_211(bParam0))
		{
			if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(bParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (__LIB_7__.func_268(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!__LIB_0__.func_610(PLAYER::GET_PLAYER_TEAM(bParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(bParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!__LIB_7__.func_268(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!__LIB_37__.func_131(bParam0))
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
		}
	}
	return 0;
}

float func_96(struct<3> Param0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)//Position - 0x5A1E
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
		fVar0 = __LIB_1__.func_73(SYSTEM::VDIST(Param0, Param1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 10000000f;
	fVar4 = func_83(Param0, 1, 0, 0, 1, 0);
	fVar0 = __LIB_1__.func_73(fVar4, 0f, __LIB_25__.func_135(), __LIB_25__.func_134(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = __LIB_7__.func_96(Param0);
	fVar0 = __LIB_1__.func_73(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !__LIB_7__.func_452(PLAYER::PLAYER_ID(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = __LIB_37__.func_132(Param0, PLAYER::PLAYER_ID(), 0);
	fVar0 = __LIB_1__.func_73(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (__LIB_1__.func_74(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = __LIB_1__.func_73(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + __LIB_1__.func_73(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = __LIB_1__.func_73(SYSTEM::VDIST(Global_2667225.f_512, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_128(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)//Position - 0x6CBB
{
	Global_2667225.f_3 = 0;
	if (!__LIB_31__.func_939(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2667225.f_3++;
		if (bParam3)
		{
			if (func_181(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
				if (!__LIB_25__.func_936(Param0, fParam10))
				{
					Global_2667225.f_3++;
					if (!__LIB_25__.func_373(Param0, 1056964608))
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
			if (func_181(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
				if (!__LIB_25__.func_936(Param0, fParam10))
				{
					Global_2667225.f_3++;
					if (!__LIB_7__.func_183(Param0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_2667225.f_3++;
						if (!__LIB_25__.func_373(Param0, 1056964608))
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
		else if (func_181(Param0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
			if (!__LIB_25__.func_936(Param0, fParam10))
			{
				Global_2667225.f_3++;
				if (!__LIB_7__.func_183(Param0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_2667225.f_3++;
					if (!__LIB_25__.func_373(Param0, 1056964608))
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

int func_134(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8)//Position - 0x717D
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != bVar1) || iParam6 == 0)
		{
			if (__LIB_1__.func_264(bVar1, bParam2, bParam3))
			{
				if (iParam8 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && __LIB_1__.func_426(bVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam7) && bParam4) && __LIB_37__.func_131(bVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_1__.func_265(bVar1), Param0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_140(struct<3> Param0, var uParam1, var uParam2)//Position - 0x7406
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
					func_142(&Var3, uParam1, iVar0);
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
				func_142(&Var3, uParam1, iVar0);
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
					func_142(&Var3, uParam1, iVar0);
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
				func_141(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_141(var uParam0, var uParam1, int iParam2)//Position - 0x7726
{
	Global_2674776 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_141(&Global_2674776, uParam1, iParam2 + 1);
	}
}

void func_142(var uParam0, var uParam1, int iParam2)//Position - 0x7764
{
	Global_2674772 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_142(&Global_2674772, uParam1, iParam2 + 1);
	}
}

void func_143(var uParam0, var uParam1)//Position - 0x779E
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
				func_77(Global_2667225.f_2263[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
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

void func_152(var uParam0, var uParam1, var uParam2)//Position - 0x7AAE
{
	int iVar0;
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_174(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_153(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_153(var uParam0, var uParam1, var uParam2)//Position - 0x7B1D
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
		if (func_50(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
																		if ((uParam2->f_12 && !func_163(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_50(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																							if (func_181(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_181(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_160(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar22 = func_159(Var1, uParam2->f_54, &fVar23);
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
																													func_158(Var1, fVar2, iVar14);
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
							func_156(0, uParam2);
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
						if (func_50(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || __LIB_18__.func_371(&Var27, bVar29))
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
				__LIB_35__.func_676(&Global_1574205, uParam0, uParam1, *uParam0);
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

void func_156(int iParam0, var uParam1)//Position - 0x866D
{
	if (!__LIB_7__.func_119(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		__LIB_0__.func_609(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_156(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_156(iParam0 + 1, uParam1);
	}
}

void func_158(struct<3> Param0, float fParam1, int iParam2)//Position - 0x8713
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
			func_158(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_159(struct<3> Param0, float fParam1, float fParam2)//Position - 0x8780
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar3 = iVar0;
		if (func_85(bVar3))
		{
			Var1 = { __LIB_1__.func_265(bVar3) };
			fVar5 = SYSTEM::VDIST(Param0, Var1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_160(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x87E8
{
	int iVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam7 == 1 && PLAYER::PLAYER_ID() != bVar1) || iParam7 == 0)
		{
			if (__LIB_1__.func_264(bVar1, bParam3, bParam4))
			{
				if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && __LIB_1__.func_426(bVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam8) && bParam5) && __LIB_37__.func_131(bVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bVar1), false))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar1), false);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										Var5 = { ENTITY::GET_ENTITY_COORDS(iVar3, false) };
										fVar6 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (__LIB_25__.func_48(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (__LIB_25__.func_26(__LIB_1__.func_265(bVar1), Param0, fParam1, iParam2, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_163(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x8B05
{
	if (__LIB_40__.func_514(Param0, fParam1, iParam2, bParam3, iParam4) || __LIB_25__.func_133(Param0, fParam1, iParam2, bParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_174(var uParam0, var uParam1, var uParam2)//Position - 0x945C
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
			if (func_50(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
							if ((uParam2->f_12 && !func_163(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_50(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
												if (func_181(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (func_181(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_160(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar11 = func_159(Var3, uParam2->f_54, &fVar12);
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
																		func_158(Var3, fVar4, iVar5);
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
					func_156(0, uParam2);
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

int func_181(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)//Position - 0x9C96
{
	Global_2667225.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam3, bParam16))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (fParam12 > 0f)
	{
		if (func_134(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (__LIB_8__.func_803(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2667225.f_2++;
	return 1;
}

Vector3 func_190()//Position - 0x9F09
{
	return Local_124.f_38[Local_124.f_36 /*3*/];
}

void func_191()//Position - 0x9F1D
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar0 = 0;
	bVar1 = false;
	if (Local_124.f_0 != 4)
	{
		iLocal_128 = 0;
		while (iLocal_128 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_128)))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_128));
				if (__LIB_1__.func_264(iVar2, 1, 1))
				{
				}
				if (!BitTest(Local_124.f_1, 1))
				{
					if (BitTest(Local_125[iLocal_128 /*6*/].f_1, 2))
					{
						if (Local_124.f_37 != iVar2)
						{
							Local_124.f_37 = iVar2;
						}
					}
				}
				if (!BitTest(Local_124.f_1, 1))
				{
					if (Local_125[iLocal_128 /*6*/].f_5 > 0)
					{
						iVar0 = (iVar0 + Local_125[iLocal_128 /*6*/].f_5);
					}
				}
				if (!BitTest(Local_124.f_1, 4))
				{
					if (BitTest(Local_125[iLocal_128 /*6*/].f_1, 5))
					{
						MISC::SET_BIT(&(Local_124.f_1), 4);
						Local_124.f_35 = iVar2;
					}
				}
				if (!BitTest(Local_124.f_1, 2))
				{
					if (!bVar1)
					{
						if (((BitTest(Local_124.f_1, 1) || BitTest(Local_124.f_1, 3)) || BitTest(Local_124.f_1, 4)) || BitTest(Local_124.f_1, 5))
						{
							if (!BitTest(Local_125[iLocal_128 /*6*/].f_1, 4))
							{
								bVar1 = true;
							}
						}
						else
						{
							bVar1 = true;
						}
					}
				}
			}
			else if (!BitTest(Local_124.f_1, 5))
			{
				if (Local_124.f_33 > -1)
				{
					if (iLocal_128 == Local_124.f_33)
					{
						MISC::SET_BIT(&(Local_124.f_1), 5);
					}
				}
			}
			iLocal_128++;
		}
		if (!BitTest(Local_124.f_1, 1))
		{
			iVar0 = (iVar0 + Local_124.f_6);
			if (iVar0 >= func_192())
			{
				MISC::SET_BIT(&(Local_124.f_1), 1);
			}
			if (Local_124.f_5 != iVar0)
			{
				if (Local_124.f_5 < iVar0)
				{
					Local_124.f_5 = iVar0;
				}
				else if (Local_124.f_6 != (Local_124.f_5 - iVar0))
				{
					Local_124.f_6 = (Local_124.f_5 - iVar0);
				}
			}
		}
		if (!BitTest(Local_124.f_1, 2))
		{
			if (!bVar1)
			{
				MISC::SET_BIT(&(Local_124.f_1), 2);
			}
		}
	}
}

int func_192()//Position - 0xA0D2
{
	return Global_262145.f_12976 /* Tunable: GB_SIGHTSEER_NUMBER_OF_PACKAGES */;
}

int func_193()//Position - 0xA0E1
{
	int iVar0;
	int iVar1;
	if (func_197() != -1)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (__LIB_0__.func_78(Local_124.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 20);
				if (func_194(iVar1))
				{
					Local_124.f_38[iVar0 /*3*/] = { Local_415[iVar1 /*3*/] };
					Local_415[iVar1 /*3*/] = { 0f, 0f, 0f };
				}
			}
			iVar0++;
		}
	}
	else
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__.func_78(Local_124.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_194(int iParam0)//Position - 0xA17F
{
	int iVar0;
	float fVar1;
	if (__LIB_0__.func_78(Local_415[iParam0 /*3*/], 0f, 0f, 0f, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 < iParam0)
		{
			if (!__LIB_0__.func_78(Local_124.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_124.f_38[iVar0 /*3*/], Local_415[iParam0 /*3*/], true);
				if (fVar1 < func_195())
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

float func_195()//Position - 0xA1FA
{
	return SYSTEM::TO_FLOAT(Global_262145.f_12977 /* Tunable: GB_SIGHTSEER_MINIMUM_DISTANCE_TO_NEXT_PACKAGE */);
}

int func_197()//Position - 0xA254
{
	int iVar0;
	if (Local_124.f_48 != -1)
	{
		return Local_124.f_48;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	if (!func_199(iVar0))
	{
		Local_124.f_48 = iVar0;
		func_198();
	}
	return Local_124.f_48;
}

void func_198()//Position - 0xA28E
{
	switch (Local_124.f_48)
	{
		case 0:
			Local_415[0 /*3*/] = { 959.4771f, -1673.8391f, 29.0562f };
			Local_415[1 /*3*/] = { 711.3848f, -1230.5692f, 25.5556f };
			Local_415[2 /*3*/] = { 282.5148f, -217.2699f, 62.4801f };
			Local_415[3 /*3*/] = { 388.7341f, -356.1966f, 47.023f };
			Local_415[4 /*3*/] = { 1112.4032f, -645.8195f, 55.8211f };
			Local_415[5 /*3*/] = { 1112.4032f, -645.8195f, 55.8211f };
			Local_415[6 /*3*/] = { 175.7449f, 557.355f, 179.142f };
			Local_415[7 /*3*/] = { 1061.6794f, 214.6577f, 83.9904f };
			Local_415[8 /*3*/] = { 768.462f, 1279.458f, 359.2967f };
			Local_415[9 /*3*/] = { 2590.4685f, 486.6694f, 107.69f };
			Local_415[10 /*3*/] = { 2820.659f, -760.044f, 1.4262f };
			Local_415[11 /*3*/] = { 1169.637f, -1382.508f, 33.7916f };
			Local_415[12 /*3*/] = { 1590.3009f, -1691.7795f, 87.103f };
			Local_415[13 /*3*/] = { 857.6887f, -2497.0981f, 27.3195f };
			Local_415[14 /*3*/] = { 1292.737f, -3097.068f, 4.9066f };
			Local_415[15 /*3*/] = { 590.4111f, -2902.535f, 5.2464f };
			Local_415[16 /*3*/] = { 491.5606f, -2122.3984f, 4.9175f };
			Local_415[17 /*3*/] = { 210.1278f, -937.7384f, 23.1416f };
			Local_415[18 /*3*/] = { 483.4742f, -1480.009f, 28.2904f };
			Local_415[19 /*3*/] = { 2288.8538f, 1727.7062f, 67.0398f };
			break;
		case 1:
			Local_415[0 /*3*/] = { -884.5568f, -2477.5503f, 12.9877f };
			Local_415[1 /*3*/] = { -81.4004f, -2707.4028f, 5.4398f };
			Local_415[2 /*3*/] = { -176.0256f, -633.2856f, 47.9812f };
			Local_415[3 /*3*/] = { -777.4452f, 20.5786f, 39.6541f };
			Local_415[4 /*3*/] = { -2333.4585f, 237.6722f, 168.602f };
			Local_415[5 /*3*/] = { -1096.0421f, -323.1984f, 36.8237f };
			Local_415[6 /*3*/] = { -822.8544f, -1222.8884f, 6.3704f };
			Local_415[7 /*3*/] = { -590.8558f, -911.0305f, 22.8747f };
			Local_415[8 /*3*/] = { -110.7806f, 356.4308f, 111.6961f };
			Local_415[9 /*3*/] = { -330.9974f, -1314.5732f, 30.5497f };
			Local_415[10 /*3*/] = { -330.9974f, -1314.5732f, 30.5497f };
			Local_415[11 /*3*/] = { -255.1383f, -1543.0918f, 30.9032f };
			Local_415[12 /*3*/] = { -1659.014f, 235.419f, 61.391f };
			Local_415[13 /*3*/] = { -3276.446f, 967.604f, 7.3522f };
			Local_415[14 /*3*/] = { -1997.696f, -257.592f, 28.0968f };
			Local_415[15 /*3*/] = { -388.8625f, -2282.671f, 6.6082f };
			Local_415[16 /*3*/] = { -1048.5988f, -1120.1794f, 1.1586f };
			Local_415[17 /*3*/] = { -287.5583f, 11.2136f, 53.7525f };
			Local_415[18 /*3*/] = { -481.1961f, 1101.5277f, 324.8545f };
			Local_415[19 /*3*/] = { -1521.989f, 1493.556f, 110.593f };
			break;
		case 2:
			Local_415[0 /*3*/] = { -1585.6285f, 2084.206f, 71.3231f };
			Local_415[1 /*3*/] = { -2188.0344f, 4249.6064f, 47.9395f };
			Local_415[2 /*3*/] = { -685.67f, 5794.1553f, 16.331f };
			Local_415[3 /*3*/] = { -329.5496f, 6150.002f, 31.3133f };
			Local_415[4 /*3*/] = { -275.9802f, 6637.051f, 6.4552f };
			Local_415[5 /*3*/] = { -800.4709f, 5392.4214f, 33.4985f };
			Local_415[6 /*3*/] = { -59.013f, 4416.5596f, 55.8893f };
			Local_415[7 /*3*/] = { -207.2786f, 3658.0266f, 50.7524f };
			Local_415[8 /*3*/] = { -596.9946f, 2091.172f, 130.4128f };
			Local_415[9 /*3*/] = { -2080.8223f, 2608.6394f, 2.089f };
			Local_415[10 /*3*/] = { -1622.2966f, 3191.9233f, 29.2567f };
			Local_415[11 /*3*/] = { -1098.1659f, 2725.3384f, 17.8007f };
			Local_415[12 /*3*/] = { -31.1729f, 1953.4202f, 189.1861f };
			Local_415[13 /*3*/] = { -281.9674f, 2847.1807f, 52.8867f };
			Local_415[14 /*3*/] = { -1633.186f, 4736.7275f, 52.2963f };
			Local_415[15 /*3*/] = { -520.748f, 5307.1763f, 79.2448f };
			Local_415[16 /*3*/] = { 50.1324f, 7117.7812f, 2.1957f };
			Local_415[17 /*3*/] = { 163.8223f, 6654.26f, 30.5682f };
			Local_415[18 /*3*/] = { 59.0807f, 6310.7725f, 30.3764f };
			Local_415[19 /*3*/] = { -1901.7557f, 1911.1028f, 165.2867f };
			break;
		case 3:
			Local_415[0 /*3*/] = { 721.9799f, 2314.4768f, 49.4146f };
			Local_415[1 /*3*/] = { 376.9765f, 2628.4302f, 43.6444f };
			Local_415[2 /*3*/] = { 1535.214f, 6597.865f, 2.1543f };
			Local_415[3 /*3*/] = { 2446.7566f, 4963.825f, 45.5766f };
			Local_415[4 /*3*/] = { 2467.8208f, 4080.6055f, 37.0648f };
			Local_415[5 /*3*/] = { 1648.7114f, 3811.4292f, 37.6556f };
			Local_415[6 /*3*/] = { 1297.2715f, 4342.019f, 40.3207f };
			Local_415[7 /*3*/] = { 1541.145f, 6335.578f, 23.0751f };
			Local_415[8 /*3*/] = { 2014.1868f, 4721.4053f, 40.609f };
			Local_415[9 /*3*/] = { 3800.8481f, 4475.0537f, 4.9977f };
			Local_415[10 /*3*/] = { 2661.8586f, 3467.0842f, 54.8171f };
			Local_415[11 /*3*/] = { 430.2967f, 6467.513f, 27.7718f };
			Local_415[12 /*3*/] = { 2930.072f, 4623.0176f, 47.7272f };
			Local_415[13 /*3*/] = { 2973.6848f, 3480.1155f, 70.4423f };
			Local_415[14 /*3*/] = { 1989.0813f, 3781.611f, 31.1808f };
			Local_415[15 /*3*/] = { 908.6296f, 3648.458f, 35.1522f };
			Local_415[16 /*3*/] = { 1560.5808f, 2167.0127f, 77.7169f };
			Local_415[17 /*3*/] = { 1230.1204f, 2742.6177f, 37.0054f };
			Local_415[18 /*3*/] = { 2545.2432f, 2588.249f, 36.9449f };
			Local_415[19 /*3*/] = { 260.401f, 3180.3582f, 41.6992f };
			break;
	}
}

int func_199(int iParam0)//Position - 0xAA23
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_12919 /* Tunable: GB_SIGHTSEER_DISABLE_QUADRANT_SOUTHEAST */;
		case 1:
			return Global_262145.f_12920 /* Tunable: GB_SIGHTSEER_DISABLE_QUADRANT_SOUTHWEST */;
		case 2:
			return Global_262145.f_12918 /* Tunable: GB_SIGHTSEER_DISABLE_QUADRANT_NORTHWEST */;
		case 3:
			return Global_262145.f_12917 /* Tunable: GB_SIGHTSEER_DISABLE_QUADRANT_NORTHEAST */;
		default:
	}
	return 0;
}

void func_202()//Position - 0xAABB
{
	func_204();
	if (BitTest(uLocal_127, 9))
	{
		return;
	}
	if (func_1102())
	{
		if (!BitTest(uLocal_127, 0))
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			MISC::SET_BIT(&uLocal_127, 0);
		}
		if (!BitTest(uLocal_127, 1))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_START"))
			{
				MISC::SET_BIT(&uLocal_127, 1);
			}
		}
		if (BitTest(uLocal_127, 1))
		{
			if (!BitTest(uLocal_127, 3))
			{
				if (Local_124.f_5 == 1)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_MID"))
					{
						MISC::SET_BIT(&uLocal_127, 3);
					}
				}
			}
		}
		if (BitTest(uLocal_127, 3))
		{
			if (!BitTest(uLocal_127, 4))
			{
				if (Local_124.f_5 == 2)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_FINAL"))
					{
						MISC::SET_BIT(&uLocal_127, 4);
					}
				}
			}
		}
		if (BitTest(Local_124.f_1, 1) || BitTest(Local_124.f_1, 4))
		{
			if (BitTest(uLocal_127, 4))
			{
				if (!BitTest(uLocal_127, 6))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_STOP"))
					{
						MISC::SET_BIT(&uLocal_127, 6);
						MISC::SET_BIT(&uLocal_127, 2);
						AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
						AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
					}
				}
			}
		}
	}
	if (func_421())
	{
		if (__LIB_0__.func_163(PLAYER::PLAYER_ID(), 20))
		{
			if (!BitTest(uLocal_127, 0))
			{
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
				MISC::SET_BIT(&uLocal_127, 0);
			}
			if (!BitTest(uLocal_127, 7))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_START_ATTACK"))
				{
					MISC::SET_BIT(&uLocal_127, 7);
				}
			}
			if (BitTest(Local_124.f_1, 1) || BitTest(Local_124.f_1, 4))
			{
				if (BitTest(uLocal_127, 7))
				{
					if (!BitTest(uLocal_127, 6))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_STOP"))
						{
							MISC::SET_BIT(&uLocal_127, 6);
							MISC::SET_BIT(&uLocal_127, 2);
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
						}
					}
				}
			}
		}
	}
}

void func_204()//Position - 0xAC82
{
	if (BitTest(uLocal_127, 8))
	{
		if (BitTest(uLocal_127, 9))
		{
			if (!BitTest(uLocal_127, 10))
			{
				if (BitTest(uLocal_127, 11))
				{
					if (!BitTest(uLocal_127, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
					}
				}
				if (!BitTest(uLocal_127, 15))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
					{
						MISC::SET_BIT(&uLocal_127, 15);
					}
				}
				if (BitTest(uLocal_127, 15))
				{
					if (!BitTest(uLocal_127, 13))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							MISC::SET_BIT(&uLocal_127, 13);
						}
					}
					if (BitTest(uLocal_127, 13))
					{
						MISC::SET_BIT(&uLocal_127, 10);
					}
				}
			}
		}
	}
}

void func_205()//Position - 0xAD1B
{
	struct<3> Var0;
	int iVar1;
	if (!func_1102() && !func_421())
	{
		return;
	}
	if (Local_124.f_34 > -1)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), false) };
		}
	}
	if (!__LIB_0__.func_78(Var0, 0f, 0f, 0f, 0))
	{
		__LIB_42__.func_496(142, Var0, &uLocal_423, 1140457472, 1144750080, 0);
	}
}

void func_262(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0xC152
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
	if (__LIB_36__.func_234(iParam2))
	{
		return;
	}
	fVar11 = -1f;
	iVar12 = -1;
	iVar13 = -1;
	iVar15 = 0;
	iVar16 = 0;
	uParam3->f_36 = 0;
	if (__LIB_32__.func_909() || iParam2 == 28)
	{
		if (__LIB_39__.func_186(iParam1, iParam2, uParam3, Global_1836357, 0, __LIB_32__.func_422(), sParam7))
		{
			__LIB_1__.func_512(1);
			if ((!__LIB_1__.func_511() && !__LIB_1__.func_510()) || BitTest(Global_2815059.f_4657, 1))
			{
				if (__LIB_1__.func_509())
				{
					__LIB_6__.func_997();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						__LIB_1__.func_508(1);
						Global_1836357 = 0;
						iVar20 = -1;
						if (Global_1836580 != 1)
						{
							__LIB_1__.func_507(iParam1, 0, 0);
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
								if (__LIB_1__.func_264(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
									if (!__LIB_6__.func_978(bVar4, 0))
									{
										if (__LIB_21__.func_83(bVar4) || __LIB_9__.func_283(bVar4, bVar3))
										{
											bVar10 = bVar4;
											if (__LIB_0__.func_581(bVar4))
											{
												iVar1[bVar10] = iVar21;
												iVar21++;
												iVar0++;
												__LIB_26__.func_808(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
											}
										}
									}
								}
								iVar18++;
							}
						}
						if (!__LIB_18__.func_259(PLAYER::PLAYER_ID(), 0) && __LIB_0__.func_396(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							if (__LIB_13__.func_808())
							{
								if (__LIB_1__.func_264(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
								}
								else
								{
									bVar4 = __LIB_0__.func_160();
								}
							}
							else
							{
								bVar4 = (uParam0[iVar18 /*42*/])->f_1;
							}
							if ((__LIB_19__.func_768(bVar4) && __LIB_26__.func_807(bVar4, iParam2, bVar3)) && __LIB_1__.func_264(bVar4, 0, 1))
							{
								bVar10 = bVar4;
								iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
								Var7 = { __LIB_25__.func_941(bVar4) };
								if (bVar4 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar19;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar4), 64);
								*(uParam4[iVar18 /*13*/]) = { __LIB_1__.func_267(bVar4) };
								iVar6 = __LIB_35__.func_811(bVar4);
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
									if (!__LIB_13__.func_808())
									{
										iVar16 = 1;
									}
								}
								if (iParam5 != -1)
								{
									__LIB_18__.func_268(&iVar9, &fVar11, (uParam0[iVar18 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), __LIB_1__.func_500(iParam5, 1, 0, 0), 16);
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
								iVar17 = __LIB_21__.func_188(bVar4, 0);
								if (bVar2)
								{
									if (__LIB_13__.func_258(bVar4, 1) && iVar1[bVar10] != -1)
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
								if (__LIB_1__.func_499(iParam5))
								{
									__LIB_33__.func_2(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								else
								{
									__LIB_33__.func_2(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
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
							if (__LIB_1__.func_264(bVar4, 0, 1) && !BitTest(iVar15, bVar4))
							{
								bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							}
							else
							{
								bVar4 = __LIB_0__.func_160();
							}
							if (__LIB_19__.func_768(bVar4))
							{
								if (__LIB_1__.func_264(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar10 = bVar4;
									iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
									Var7 = { __LIB_25__.func_941(bVar4) };
									*(uParam4[iVar18 /*13*/]) = { __LIB_1__.func_267(bVar4) };
									iVar6 = __LIB_35__.func_811(bVar4);
									sVar5 = "";
									if (iVar6 != 0)
									{
										sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
									}
									Global_1836357++;
									iVar17 = __LIB_21__.func_188(bVar4, 1);
									if (bVar2)
									{
										if (__LIB_13__.func_258(bVar4, 1))
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
									__LIB_36__.func_233(bVar4, PLAYER::GET_PLAYER_NAME(bVar4), iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
									iVar19++;
								}
							}
							iVar18++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							__LIB_19__.func_767(uParam3, iParam1, iParam2);
						}
						__LIB_0__.func_579(&(uParam3->f_21));
						__LIB_1__.func_492();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							__LIB_1__.func_491(uParam3, iParam1);
							__LIB_1__.func_379(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						__LIB_1__.func_491(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (__LIB_6__.func_993(uParam3))
						{
							Global_1836580 = 1;
						}
						__LIB_6__.func_992(uParam3);
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
			__LIB_1__.func_492();
			__LIB_1__.func_508(0);
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

bool func_421()//Position - 0xFE8B
{
	return BitTest(Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 1);
}

void func_422()//Position - 0xFE9F
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 186:
				func_423(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_423(int iParam0)//Position - 0xFEDC
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		if (Local_124.f_34 > -1)
		{
			if (func_421())
			{
				if (!__LIB_25__.func_938())
				{
					if (!BitTest(Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 5))
					{
						if (!BitTest(Local_124.f_1, 4))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
							{
								if (Var0.f_5)
								{
									if (ENTITY::IS_ENTITY_A_PED(Var0.f_0))
									{
										iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0);
										if (PED::IS_PED_A_PLAYER(iVar2))
										{
											iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
											if (iVar3 == PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34))
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(iVar1))
														{
															iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
															if (iVar4 == PLAYER::PLAYER_ID())
															{
																MISC::SET_BIT(&(Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 5);
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
					}
				}
			}
		}
	}
	if (func_421())
	{
		if (!__LIB_0__.func_163(PLAYER::PLAYER_ID(), 20))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
			{
				if (ENTITY::IS_ENTITY_A_PED(Var0.f_0))
				{
					iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0);
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
							{
								iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
								if (PED::IS_PED_A_PLAYER(iVar1))
								{
									iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
									if (iVar4 == PLAYER::PLAYER_ID())
									{
										if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
										{
											if (__LIB_13__.func_258(iVar3, 1))
											{
												if (Local_124.f_33 > -1)
												{
													iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_124.f_33));
													if (__LIB_6__.func_941(iVar3, iVar5, 1))
													{
														__LIB_41__.func_329(0);
														__LIB_21__.func_123();
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
			}
		}
	}
}

void func_432()//Position - 0x10498
{
	switch (Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2)
	{
		case 0:
			func_933();
			func_433();
			if (Local_124.f_32 == 2)
			{
				Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2 = 2;
			}
			else if (Local_124.f_32 == 3)
			{
				Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2 = 3;
			}
			break;
		case 2:
			func_433();
			if (Local_124.f_32 == 3)
			{
				Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2 = 3;
			}
			break;
		case 3:
			func_1112();
			break;
	}
}

void func_433()//Position - 0x10516
{
	struct<20> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	iVar1 = __LIB_0__.func_160();
	iVar2 = __LIB_0__.func_160();
	iVar3 = __LIB_0__.func_160();
	if (!BitTest(Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 4))
	{
		if (!BitTest(uLocal_126, 9))
		{
			if (BitTest(Local_124.f_1, 1))
			{
				if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_124.f_33 || func_1103() == Local_124.f_33)
				{
					if (__LIB_33__.func_0(PLAYER::PLAYER_ID()) >= 2)
					{
						sVar4 = __LIB_28__.func_434();
						iVar5 = __LIB_21__.func_180(PLAYER::PLAYER_ID());
						func_929(87, "GB_WINNER" /* GXT: WINNER */, "BIGM_SGHTYD" /* GXT: ~a~ ~s~collected all the packages */, sVar4, iVar5, 0, -1, -1, -1, 2, -1);
					}
					if (!BitTest(uLocal_126, 6))
					{
						__LIB_41__.func_882(1, 1, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
						MISC::SET_BIT(&uLocal_126, 6);
					}
					func_518(142, 1, &Var0, 0);
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				}
				else if (func_421())
				{
					if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
					{
						if (__LIB_33__.func_0(PLAYER::PLAYER_ID()) >= 2)
						{
							sVar4 = __LIB_34__.func_329(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34));
							iVar5 = __LIB_21__.func_180(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34));
							func_929(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "BIGM_SGHTFD3" /* GXT: ~a~ ~s~collected all the packages */, sVar4, iVar5, 0, -1, -1, -1, 2, -1);
						}
						if (!BitTest(uLocal_126, 6))
						{
							__LIB_41__.func_882(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
							MISC::SET_BIT(&uLocal_126, 6);
						}
						func_518(142, 0, &Var0, 0);
					}
					else
					{
						if (__LIB_33__.func_0(PLAYER::PLAYER_ID()) >= 2)
						{
							sVar4 = __LIB_34__.func_329(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34));
							iVar5 = __LIB_21__.func_180(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34));
							func_929(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "BIGM_SGHTFD5" /* GXT: ~a~ ~s~collected all the packages */, sVar4, iVar5, 0, -1, -1, -1, 2, -1);
						}
						if (!BitTest(uLocal_126, 6))
						{
							__LIB_41__.func_882(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
							MISC::SET_BIT(&uLocal_126, 6);
						}
						func_518(142, 0, &Var0, 0);
					}
				}
				MISC::SET_BIT(&uLocal_126, 9);
			}
			else if (BitTest(Local_124.f_1, 3))
			{
				func_511(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "BIGM_SGHTFT" /* GXT: Time expired */, 1, -1, 2, 1, 0);
				if (!BitTest(uLocal_126, 6))
				{
					__LIB_41__.func_882(0, 7, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
					MISC::SET_BIT(&uLocal_126, 6);
				}
				func_518(142, 0, &Var0, 0);
				MISC::SET_BIT(&uLocal_126, 9);
			}
			else if (BitTest(Local_124.f_1, 4))
			{
				if (Local_124.f_35 > -1)
				{
					iVar2 = PLAYER::INT_TO_PLAYERINDEX(Local_124.f_35);
				}
				if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_124.f_33)
				{
					if (__LIB_33__.func_0(PLAYER::PLAYER_ID()) >= 2)
					{
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
						{
							if (__LIB_13__.func_258(iVar2, 1))
							{
								sVar4 = __LIB_34__.func_329(iVar2);
								iVar5 = __LIB_21__.func_180(iVar2);
							}
							else
							{
								sVar4 = PLAYER::GET_PLAYER_NAME(iVar2);
								iVar5 = 1;
							}
							func_929(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "BIGM_SGHTFMK" /* GXT: You were killed by ~a~ */, sVar4, iVar5, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_929(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "BIGM_SGHTFD2" /* GXT: ~a~ ~s~failed to collect all the packages */, sVar4, iVar5, 0, -1, -1, -1, 2, -1);
						}
					}
					func_518(142, 0, &Var0, 0);
					if (!BitTest(uLocal_126, 6))
					{
						__LIB_41__.func_882(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
						MISC::SET_BIT(&uLocal_126, 6);
					}
				}
				else if (func_1103() == Local_124.f_33)
				{
					iVar1 = PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34);
					if (iVar1 != __LIB_0__.func_160())
					{
						if (__LIB_33__.func_0(PLAYER::PLAYER_ID()) >= 2)
						{
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
							{
								if (__LIB_13__.func_258(iVar2, 1))
								{
									sVar4 = __LIB_34__.func_329(iVar2);
									iVar5 = __LIB_21__.func_180(iVar2);
								}
								else
								{
									sVar4 = PLAYER::GET_PLAYER_NAME(iVar2);
									iVar5 = 1;
								}
								func_929(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "BIGM_SGHTGK" /* GXT: ~a~ ~s~killed your VIP */, sVar4, iVar5, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_929(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "BIGM_SGHTFD2" /* GXT: ~a~ ~s~failed to collect all the packages */, sVar4, iVar5, 0, -1, -1, -1, 2, -1);
							}
						}
						func_518(142, 0, &Var0, 0);
						if (!BitTest(uLocal_126, 6))
						{
							__LIB_41__.func_882(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
							MISC::SET_BIT(&uLocal_126, 6);
						}
					}
				}
				else if (func_421())
				{
					iVar2 = PLAYER::INT_TO_PLAYERINDEX(Local_124.f_35);
					if (iVar2 != __LIB_0__.func_160())
					{
						if (iVar2 == PLAYER::PLAYER_ID())
						{
							if (__LIB_33__.func_0(PLAYER::PLAYER_ID()) >= 2)
							{
								if (__LIB_19__.func_760(1))
								{
									func_511(87, "GB_WINNER" /* GXT: WINNER */, "BIGM_SGHTYK" /* GXT: You killed the rival VIP */, 1, -1, 2, 1, 0);
								}
								else
								{
									func_511(87, "GB_WINNER" /* GXT: WINNER */, "BIGM_SGHTYK2" /* GXT: You killed the VIP */, 1, -1, 2, 1, 0);
								}
							}
							PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							if (!BitTest(uLocal_126, 6))
							{
								__LIB_41__.func_882(1, 1, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
								MISC::SET_BIT(&uLocal_126, 6);
							}
							func_518(142, 1, &Var0, 0);
						}
						else if (__LIB_19__.func_760(1))
						{
							iVar3 = __LIB_0__.func_582();
							if (__LIB_6__.func_941(iVar2, iVar3, 1))
							{
								if (__LIB_33__.func_0(PLAYER::PLAYER_ID()) >= 2)
								{
									func_468(87, iVar2, -1, "BIGM_SGHTWK" /* GXT: ~a~ ~s~killed the rival VIP */, "GB_WINNER" /* GXT: WINNER */, 1, -1, 2, 0);
								}
								if (!BitTest(uLocal_126, 6))
								{
									__LIB_41__.func_882(1, 1, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
									MISC::SET_BIT(&uLocal_126, 6);
								}
								func_518(142, 0, &Var0, 0);
							}
							else
							{
								if (__LIB_33__.func_0(PLAYER::PLAYER_ID()) >= 2)
								{
									if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
									{
										if (__LIB_13__.func_258(iVar2, 1))
										{
											sVar4 = __LIB_34__.func_329(iVar2);
											iVar5 = __LIB_21__.func_180(iVar2);
										}
										else
										{
											sVar4 = PLAYER::GET_PLAYER_NAME(iVar2);
											iVar5 = 1;
										}
										func_929(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "BIGM_SGHTWK" /* GXT: ~a~ ~s~killed the rival VIP */, sVar4, iVar5, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_511(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "BIGM_SGHTRK" /* GXT: The VIP was killed by a rival Organization */, 1, -1, 2, 1, 0);
									}
								}
								if (!BitTest(uLocal_126, 6))
								{
									__LIB_41__.func_882(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
									MISC::SET_BIT(&uLocal_126, 6);
								}
								func_518(142, 0, &Var0, 0);
							}
						}
						else
						{
							if (__LIB_33__.func_0(PLAYER::PLAYER_ID()) >= 2)
							{
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
								{
									if (__LIB_13__.func_258(iVar2, 1))
									{
										sVar4 = __LIB_34__.func_329(iVar2);
										iVar5 = __LIB_21__.func_180(iVar2);
									}
									else
									{
										sVar4 = PLAYER::GET_PLAYER_NAME(iVar2);
										iVar5 = 1;
									}
									func_929(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "BIGM_SGHTNGK" /* GXT: ~a~ ~s~killed the VIP */, sVar4, iVar5, 0, -1, -1, -1, 2, -1);
								}
								else
								{
									func_511(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "BIGM_SGHTRK" /* GXT: The VIP was killed by a rival Organization */, 1, -1, 2, 1, 0);
								}
							}
							if (!BitTest(uLocal_126, 6))
							{
								__LIB_41__.func_882(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
								MISC::SET_BIT(&uLocal_126, 6);
							}
							func_518(142, 0, &Var0, 0);
						}
					}
				}
				MISC::SET_BIT(&uLocal_126, 9);
			}
			else if (BitTest(Local_124.f_1, 5))
			{
				if (func_467())
				{
					if (func_1102())
					{
						if (__LIB_33__.func_0(PLAYER::PLAYER_ID()) >= 2)
						{
						}
					}
					else if (__LIB_33__.func_0(PLAYER::PLAYER_ID()) >= 2)
					{
						func_511(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "BIGM_SGHTRBQ" /* GXT: The rival VIP quit the session */, 1, -1, 2, 1, 0);
					}
				}
				if (!BitTest(uLocal_126, 6))
				{
					__LIB_41__.func_882(0, 8, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
					MISC::SET_BIT(&uLocal_126, 6);
				}
				func_518(159, 0, &Var0, 0);
				MISC::SET_BIT(&uLocal_126, 9);
			}
		}
		if (BitTest(uLocal_126, 9))
		{
			__LIB_18__.func_455();
			if (!BitTest(uLocal_127, 8))
			{
				MISC::SET_BIT(&uLocal_127, 8);
			}
			if (!BitTest(uLocal_126, 10))
			{
				if (Local_124.f_34 != -1)
				{
					if (BitTest(uLocal_126, 5))
					{
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34)))
						{
							__LIB_19__.func_770(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), 432, 0, 0);
							__LIB_21__.func_85(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), 1, 0, 0);
							__LIB_20__.func_361(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), 0, 0, 0);
							__LIB_2__.func_314(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), 0);
							__LIB_27__.func_81(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), Global_262145.f_12827 /* Tunable: GANGBOSS_JOB_BLIP_SCALE */, 0, 0);
							MISC::SET_BIT(&uLocal_126, 10);
						}
					}
				}
			}
			if (func_434(&uLocal_416, 1, 0))
			{
				MISC::SET_BIT(&(Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 4);
			}
		}
	}
}

int func_434(var uParam0, bool bParam1, int iParam2)//Position - 0x10C60
{
	bool bVar0;
	__LIB_1__.func_484(29);
	if ((*uParam0 > 0 && !__LIB_1__.func_159()) && __LIB_33__.func_0(PLAYER::PLAYER_ID()) != 0)
	{
		if (!func_450())
		{
			__LIB_1__.func_432();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!__LIB_0__.func_649(&(uParam0->f_3)))
			{
				__LIB_0__.func_580(&(uParam0->f_3), 0, 0);
			}
			else if (__LIB_2__.func_47(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1943920.f_3), 2);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2815059.f_4657), 0);
					__LIB_0__.func_580(&(uParam0->f_5), 0, 0);
				}
				__LIB_0__.func_580(&(uParam0->f_1), 0, 0);
				__LIB_1__.func_0(uParam0, 1);
			}
			break;
		case 1:
			if (__LIB_0__.func_649(&(uParam0->f_5)))
			{
				if (__LIB_2__.func_47(&(uParam0->f_5), 3000, 0))
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
				func_441(iParam2);
				__LIB_1__.func_0(uParam0, 2);
			}
			break;
		case 2:
			func_441(0);
			if (__LIB_2__.func_47(&(uParam0->f_1), 15000, 0))
			{
				if (__LIB_0__.func_1(__LIB_34__.func_327(0)))
				{
					HUD::CLEAR_HELP(true);
				}
				__LIB_1__.func_0(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_2__.func_47(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2815059.f_4657), 1);
				MISC::CLEAR_BIT(&(Global_1943920.f_3), 2);
				__LIB_1__.func_0(uParam0, 4);
				return 1;
			}
			break;
		case 4:
			MISC::CLEAR_BIT(&(Global_2815059.f_4657), 1);
			MISC::CLEAR_BIT(&(Global_1943920.f_3), 2);
			return 1;
	}
	return 0;
}

void func_441(int iParam0)//Position - 0x10F62
{
	if (BitTest(Global_2815059.f_4657, 0))
	{
		if (((((((((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2815059.f_836, 2)) && __LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75485) && !Global_60335) && !CAM::IS_SCREEN_FADED_OUT()) && !__LIB_0__.func_163(PLAYER::PLAYER_ID(), 22)) && __LIB_33__.func_0(PLAYER::PLAYER_ID()) != 0) && !__LIB_1__.func_38(__LIB_9__.func_308())) && !__LIB_27__.func_119(PLAYER::PLAYER_ID())) && !__LIB_9__.func_286(__LIB_0__.func_396(PLAYER::PLAYER_ID()))) && !__LIB_2__.func_859(__LIB_0__.func_396(PLAYER::PLAYER_ID())))
		{
			MISC::SET_BIT(&(Global_2815059.f_4657), 1);
			__LIB_1__.func_278(__LIB_34__.func_327(iParam0), -1);
			__LIB_36__.func_794(1);
			MISC::CLEAR_BIT(&(Global_2815059.f_4657), 0);
		}
	}
}

int func_450()//Position - 0x11633
{
	if (((((((__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 170 || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 219) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 221) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 220) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 216) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 215) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 214) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 218)
	{
		return 1;
	}
	if (__LIB_6__.func_448(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_467()//Position - 0x11D5B
{
	if (!Global_2703735.f_4.f_10)
	{
		return 0;
	}
	if (__LIB_25__.func_938())
	{
		return 0;
	}
	return 1;
}

int func_468(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x11D7F
{
	struct<80> Var0;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	__LIB_0__.func_975(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_17 = iParam1;
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		__LIB_6__.func_896(&(Var0.f_69), iParam8);
	}
	return func_469(&Var0);
}

int func_469(var uParam0)//Position - 0x11E00
{
	int iVar0;
	if (uParam0->f_1 == 1)
	{
		if (Global_2703735.f_2722)
		{
			return 0;
		}
	}
	func_480(uParam0, uParam0->f_17);
	__LIB_6__.func_928(uParam0);
	if (__LIB_0__.func_175())
	{
		__LIB_6__.func_928(uParam0);
	}
	if (__LIB_0__.func_968(uParam0->f_1))
	{
		__LIB_24__.func_964();
		if (Global_2703735.f_2400[0 /*80*/].f_2 == 0)
		{
			Global_2703735.f_2400[0 /*80*/] = { *uParam0 };
			if (__LIB_0__.func_517(uParam0->f_69, 8192))
			{
				Global_1931432 = 1;
			}
			return 1;
		}
		if (((Global_2703735.f_2400[0 /*80*/].f_1 == 13 || Global_2703735.f_2400[0 /*80*/].f_1 == 53) || Global_2703735.f_2400[0 /*80*/].f_1 == 54) || Global_2703735.f_2400[0 /*80*/].f_1 == 58)
		{
			Global_2703735.f_2400[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2703735.f_2400[iVar0 + 1 /*80*/] = { Global_2703735.f_2400[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2703735.f_2400[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2703735.f_2400[iVar0 /*80*/].f_2 == 0)
		{
			Global_2703735.f_2400[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				__LIB_24__.func_964();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				__LIB_6__.func_896(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 2);
				Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !__LIB_0__.func_517(uParam0->f_69, 128))
			{
				if (__LIB_0__.func_966(Global_2703735.f_2400[iVar0 /*80*/].f_1))
				{
					Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
					__LIB_6__.func_896(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_480(var uParam0, int iParam1)//Position - 0x12330
{
	if (__LIB_0__.func_970(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == __LIB_0__.func_160() || !__LIB_1__.func_264(iParam1, 0, 1))
	{
		return;
	}
	if (__LIB_0__.func_966(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_481(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_481(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x12387
{
	int iVar0;
	int iVar1;
	if (__LIB_7__.func_211(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_111249[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((__LIB_7__.func_211(PLAYER::PLAYER_ID()) || (__LIB_0__.func_80() && __LIB_0__.func_728())) && !BitTest(Global_2815059.f_4660, 31)) && !bParam4)
	{
		iVar1 = __LIB_0__.func_727();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (__LIB_1__.func_264(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_111249[iParam1] != -1)
							{
								return __LIB_26__.func_850(iParam1, iParam0, 0);
							}
							else
							{
								return func_493(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_493(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_111249[iParam1] != -1)
				{
					return __LIB_26__.func_850(iParam1, iParam0, 0);
				}
				else
				{
					return __LIB_19__.func_520(0, -1, 0);
				}
			}
			else
			{
				return __LIB_19__.func_520(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_111249[iParam1] != -1)
		{
			return __LIB_26__.func_850(iParam1, iParam0, 0);
		}
		else
		{
			return func_493(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_493(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_493(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x12928
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1853348[iVar2 /*834*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (__LIB_7__.func_63())
			{
				iVar3 = __LIB_13__.func_746(iParam0);
				if (!iVar3 == -1)
				{
					return __LIB_6__.func_890(iVar3);
				}
			}
			if ((__LIB_1__.func_423(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((__LIB_0__.func_610(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return __LIB_0__.func_720(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return __LIB_0__.func_722(1);
			}
			else
			{
				return __LIB_8__.func_837(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836584 || Global_1836575) || Global_1853348[iParam0 /*834*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836584 == 1 && Global_1836594 == 0))
			{
				return __LIB_0__.func_720(1);
			}
			else
			{
				return __LIB_8__.func_837(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836579 && Global_1836068.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = __LIB_13__.func_746(iParam0);
	if (!iVar4 == -1)
	{
		return __LIB_6__.func_890(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_511(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x12F2C
{
	struct<80> Var0;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	__LIB_0__.func_975(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		__LIB_6__.func_896(&(Var0.f_69), iParam7);
	}
	return func_469(&Var0);
}

void func_518(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x131A0
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	__LIB_28__.func_389(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + __LIB_28__.func_367(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + __LIB_10__.func_941(iParam0, bParam3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (__LIB_34__.func_259(iParam0))
	{
		if (bParam1)
		{
			if (Global_262145.f_24496 /* Tunable: -76964080 */)
			{
				if (__LIB_10__.func_940(PLAYER::PLAYER_ID()) <= 0)
				{
					__LIB_21__.func_78();
				}
			}
			else if (__LIB_10__.func_940(PLAYER::PLAYER_ID()) > 0)
			{
				__LIB_21__.func_77();
			}
			else
			{
				__LIB_21__.func_78();
			}
		}
		else
		{
			__LIB_19__.func_903();
		}
	}
	func_739(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	__LIB_39__.func_311(iParam0, uParam2, &iVar0, &iVar5);
	func_716(iParam0, uParam2, &iVar0, &iVar5);
	__LIB_39__.func_310(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_706(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2815059.f_5195.f_387 = iVar4;
	}
	else
	{
		Global_2815059.f_5195.f_387 = iVar5;
	}
	iVar8 = __LIB_1__.func_301();
	if (iVar8 != __LIB_0__.func_160() && iParam0 != 148)
	{
		if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 0))
		{
			if (!__LIB_6__.func_941(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				func_695(&iVar0, 1);
			}
		}
	}
	__LIB_36__.func_809(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1943929.f_10 = iVar1;
		__LIB_1__.func_444();
		__LIB_41__.func_868(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_COLLECT_CHECKPOINT"), iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1943929.f_9 = iVar0;
		__LIB_41__.func_927(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		__LIB_26__.func_304(iParam0, iVar0);
		if (__LIB_10__.func_932(iParam0))
		{
			if (__LIB_10__.func_931(iParam0) > -1)
			{
				__LIB_1__.func_445(__LIB_10__.func_931(iParam0), iVar0);
			}
		}
		Global_2727753 = iVar0;
		__LIB_0__.func_495(&Global_2725869, 0, 0);
	}
	if (__LIB_0__.func_286(PLAYER::PLAYER_ID()) || __LIB_0__.func_431(PLAYER::PLAYER_ID()))
	{
		__LIB_34__.func_235(iParam0);
	}
	if ((__LIB_10__.func_929(iParam0) || iParam0 == 293) || iParam0 == 291)
	{
		Global_1943947.f_13 = iVar0;
		Global_1943947.f_14 = iVar1;
	}
	if (__LIB_9__.func_286(iParam0))
	{
		Global_1944003.f_13 = iVar0;
		Global_1944003.f_14 = iVar1;
	}
	if (((__LIB_3__.func_524(iParam0) || iParam0 == 297) || iParam0 == 296) || iParam0 == 298)
	{
		Global_1944066.f_12 = iVar0;
		Global_1944066.f_13 = iVar1;
	}
	if (__LIB_1__.func_204(iParam0))
	{
		Global_1944113.f_12 = iVar0;
		Global_1944113.f_13 = iVar1;
	}
	if (__LIB_0__.func_787(iParam0))
	{
		Global_1944167.f_12 = iVar0;
		Global_1944167.f_13 = iVar1;
	}
	if (__LIB_2__.func_859(iParam0))
	{
		if (__LIB_10__.func_909(iParam0))
		{
			Global_1944249.f_12 = iVar0;
			Global_1944249.f_13 = iVar1;
		}
		else if (((__LIB_29__.func_159(iParam0) || iParam0 == 299) || iParam0 == 300) || iParam0 == 301)
		{
			Global_1944303.f_12 = iVar0;
			Global_1944303.f_13 = iVar1;
		}
	}
	if (__LIB_9__.func_415(iParam0))
	{
		Global_1944390.f_12 = iVar0;
		Global_1944390.f_13 = iVar1;
	}
	if (__LIB_2__.func_965(iParam0))
	{
		Global_1944465.f_16 = iVar0;
		Global_1944465.f_17 = iVar1;
	}
	if (__LIB_9__.func_29(iParam0))
	{
		Global_1944552.f_16 = iVar0;
		Global_1944552.f_17 = iVar1;
	}
	if (__LIB_2__.func_473(iParam0) || __LIB_10__.func_894(iParam0))
	{
		Global_1944685.f_15 = iVar0;
		Global_1944685.f_16 = iVar1;
	}
	func_519(bParam1, iParam0);
}

void func_519(bool bParam0, int iParam1)//Position - 0x13662
{
	int iVar0;
	bool bVar1;
	if (bParam0)
	{
		iVar0 = -1;
		bVar1 = false;
		switch (iParam1)
		{
			case 226:
				iVar0 = 2;
				bVar1 = true;
				break;
			case 190:
				iVar0 = 3;
				bVar1 = true;
				break;
			case 230:
				iVar0 = 4;
				bVar1 = true;
				break;
			case 168:
				iVar0 = 5;
				bVar1 = true;
				break;
			case 188:
				iVar0 = 6;
				bVar1 = true;
				break;
			case 237:
				bVar1 = true;
				break;
		}
		if (iVar0 != -1)
		{
			if (__LIB_19__.func_766(iVar0) && !func_529(iVar0))
			{
				func_520(iVar0);
			}
		}
		if (bVar1)
		{
			if (__LIB_19__.func_766(1) && !func_529(1))
			{
				func_520(1);
			}
		}
	}
}

void func_520(int iParam0)//Position - 0x13714
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 11)
	{
		__LIB_0__.func_521(func_525(__LIB_20__.func_348(iParam0)), 1, -1);
		__LIB_19__.func_765(12, __LIB_9__.func_284(__LIB_20__.func_348(iParam0)), "UNLOCK_DESC_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
	}
}

int func_525(int iParam0)//Position - 0x1836E
{
	switch (iParam0)
	{
		case joaat("MP_Sum2_Tee_000_M"):
		case joaat("MP_Sum2_Tee_000_F"):
			return 34505;
			break;
		case joaat("MP_Sum2_Tee_001_M"):
		case joaat("MP_Sum2_Tee_001_F"):
			return 34375;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_0_0"):
			return 34397;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_0_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_0_1"):
			return 34398;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_1_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_1_0"):
			return 34395;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_1_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_1_1"):
			return 34396;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_4_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_4_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_4_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_4_1"):
			return 34399;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_2_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_2_0"):
			return 34400;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM2_G9EC_M_OUTFIT_MUMMY"):
		case joaat("DLC_MP_SUM2_G9EC_F_OUTFIT_MUMMY"):
			return 34389;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_LEGS_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_LEGS_0_0"):
			return 34410;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_LEGS_0_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_LEGS_0_1"):
			return 34409;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_1_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_1_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_2_0"):
			return 34404;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_0_1"):
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_1_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_1_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_2_1"):
			return 34403;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_2_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_3_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_3_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_4_0"):
			return 34406;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_6_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_8_0"):
			return 34408;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_7_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_5_0"):
			return 34405;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_1_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_1_0"):
			return 34391;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_2_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_2_0"):
			return 34394;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_3_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_4_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_3_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_4_0"):
			return 34390;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_6_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_7_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_6_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_7_0"):
			return 34392;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_0"):
			return 34393;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_1"):
			return 34730;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_2"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_2"):
			return 34731;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_3"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_3"):
			return 34732;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_4"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_4"):
			return 34733;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_7"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_7"):
			return 34736;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_8"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_8"):
			return 34737;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_5"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_5"):
			return 34734;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_6"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_6"):
			return 34735;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PEARS_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PEARS_0_0"):
			return 34401;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_PRIGHT_WRIST_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PRIGHT_WRIST_0_0"):
			return 34402;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_DECL_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_DECL_0_0"):
			return 34407;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM2_M_BERD_5_0"):
		case joaat("DLC_MP_SUM2_F_BERD_5_0"):
			return 34451;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_5_1"):
		case joaat("DLC_MP_SUM2_F_BERD_5_1"):
			return 34452;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_5_2"):
		case joaat("DLC_MP_SUM2_F_BERD_5_2"):
			return 34453;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_5_3"):
		case joaat("DLC_MP_SUM2_F_BERD_5_3"):
			return 34454;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_6_0"):
		case joaat("DLC_MP_SUM2_F_BERD_6_0"):
			return 34418;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_6_1"):
		case joaat("DLC_MP_SUM2_F_BERD_6_1"):
			return 34419;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_6_2"):
		case joaat("DLC_MP_SUM2_F_BERD_6_2"):
			return 34420;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_7_0"):
		case joaat("DLC_MP_SUM2_F_BERD_7_0"):
			return 34372;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_8_0"):
		case joaat("DLC_MP_SUM2_F_BERD_8_0"):
			return 34421;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_9_0"):
		case joaat("DLC_MP_SUM2_F_BERD_9_0"):
			return 34415;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_9_1"):
		case joaat("DLC_MP_SUM2_F_BERD_9_1"):
			return 34416;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_9_2"):
		case joaat("DLC_MP_SUM2_F_BERD_9_2"):
			return 34417;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_0"):
		case joaat("DLC_MP_SUM2_F_BERD_10_0"):
			return 34425;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_1"):
		case joaat("DLC_MP_SUM2_F_BERD_10_1"):
			return 34426;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_2"):
		case joaat("DLC_MP_SUM2_F_BERD_10_2"):
			return 34427;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_3"):
		case joaat("DLC_MP_SUM2_F_BERD_10_3"):
			return 34428;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_4"):
		case joaat("DLC_MP_SUM2_F_BERD_10_4"):
			return 34429;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_5"):
		case joaat("DLC_MP_SUM2_F_BERD_10_5"):
			return 34430;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_6"):
		case joaat("DLC_MP_SUM2_F_BERD_10_6"):
			return 34431;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_7"):
		case joaat("DLC_MP_SUM2_F_BERD_10_7"):
			return 34432;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_8"):
		case joaat("DLC_MP_SUM2_F_BERD_10_8"):
			return 34433;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_9"):
		case joaat("DLC_MP_SUM2_F_BERD_10_9"):
			return 34434;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_10"):
		case joaat("DLC_MP_SUM2_F_BERD_10_10"):
			return 34435;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_11"):
		case joaat("DLC_MP_SUM2_F_BERD_10_11"):
			return 34436;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_12"):
		case joaat("DLC_MP_SUM2_F_BERD_10_12"):
			return 34437;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_13"):
		case joaat("DLC_MP_SUM2_F_BERD_10_13"):
			return 34438;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_14"):
		case joaat("DLC_MP_SUM2_F_BERD_10_14"):
			return 34439;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_15"):
		case joaat("DLC_MP_SUM2_F_BERD_10_15"):
			return 34440;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_16"):
		case joaat("DLC_MP_SUM2_F_BERD_10_16"):
			return 34441;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_17"):
		case joaat("DLC_MP_SUM2_F_BERD_10_17"):
			return 34442;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_18"):
		case joaat("DLC_MP_SUM2_F_BERD_10_18"):
			return 34443;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_19"):
		case joaat("DLC_MP_SUM2_F_BERD_10_19"):
			return 34444;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_20"):
		case joaat("DLC_MP_SUM2_F_BERD_10_20"):
			return 34445;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_21"):
		case joaat("DLC_MP_SUM2_F_BERD_10_21"):
			return 34446;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_22"):
		case joaat("DLC_MP_SUM2_F_BERD_10_22"):
			return 34447;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_23"):
		case joaat("DLC_MP_SUM2_F_BERD_10_23"):
			return 34448;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_24"):
		case joaat("DLC_MP_SUM2_F_BERD_10_24"):
			return 34449;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_25"):
		case joaat("DLC_MP_SUM2_F_BERD_10_25"):
			return 34450;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_0_0"):
		case joaat("DLC_MP_SUM2_F_BERD_0_0"):
			return 34423;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_1_0"):
		case joaat("DLC_MP_SUM2_F_BERD_1_0"):
			return 34703;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_1_1"):
		case joaat("DLC_MP_SUM2_F_BERD_1_1"):
			return 34704;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_1_2"):
		case joaat("DLC_MP_SUM2_F_BERD_1_2"):
			return 34705;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_3_0"):
		case joaat("DLC_MP_SUM2_F_BERD_3_0"):
			return 34424;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_4_0"):
		case joaat("DLC_MP_SUM2_F_BERD_4_0"):
			return 34422;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM2_M_OUTFIT_SASQUATCH"):
		case joaat("DLC_MP_SUM2_F_OUTFIT_SASQUATCH"):
			return 34411;
			break;
		case joaat("DLC_MP_SUM2_M_LEGS_2_0"):
		case joaat("DLC_MP_SUM2_F_LEGS_0_0"):
			return 34506;
			break;
		case joaat("DLC_MP_SUM2_M_LEGS_2_1"):
		case joaat("DLC_MP_SUM2_F_LEGS_0_1"):
			return 34507;
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_13_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_15_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_16_0"):
			return 34380;
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_14_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_19_0"):
			return 34388;
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_15_0"):
		case joaat("DLC_MP_SUM2_M_JBIB_16_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_20_0"):
			return 34383;
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_15_1"):
		case joaat("DLC_MP_SUM2_M_JBIB_16_1"):
		case joaat("DLC_MP_SUM2_F_JBIB_20_1"):
			return 34381;
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_15_2"):
		case joaat("DLC_MP_SUM2_M_JBIB_16_2"):
		case joaat("DLC_MP_SUM2_F_JBIB_20_2"):
			return 34385;
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_17_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_8_0"):
			return 34382;
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_7_0"):
		case joaat("DLC_MP_SUM2_M_JBIB_8_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_24_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_21_0"):
			return 34384;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_0"):
			return 34455;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_1"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_1"):
			return 34456;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_2"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_2"):
			return 34457;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_3"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_3"):
			return 34458;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_4"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_4"):
			return 34459;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_5"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_5"):
			return 34460;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_6"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_6"):
			return 34461;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_7"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_7"):
			return 34462;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_8"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_8"):
			return 34463;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_9"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_9"):
			return 34464;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_10"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_10"):
			return 34465;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_11"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_11"):
			return 34466;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_12"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_12"):
			return 34467;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_13"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_13"):
			return 34468;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_0_0"):
		case joaat("DLC_MP_SUM2_M_PHEAD_1_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_0_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_1_0"):
			return 34375;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_2_0"):
		case joaat("DLC_MP_SUM2_M_PHEAD_4_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_2_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_4_0"):
			return 34508;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_2_1"):
		case joaat("DLC_MP_SUM2_M_PHEAD_4_1"):
		case joaat("DLC_MP_SUM2_F_PHEAD_2_1"):
		case joaat("DLC_MP_SUM2_F_PHEAD_4_1"):
			return 34509;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_3_0"):
		case joaat("DLC_MP_SUM2_M_PHEAD_7_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_3_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_7_0"):
			return 34510;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_8_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_8_0"):
			return 34387;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_0"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_0"):
			return 34469;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_1"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_1"):
			return 34470;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_2"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_2"):
			return 34471;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_3"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_3"):
			return 34472;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_4"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_4"):
			return 34473;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_5"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_5"):
			return 34474;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_6"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_6"):
			return 34475;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_7"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_7"):
			return 34476;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_8"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_8"):
			return 34477;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_9"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_9"):
			return 34478;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_10"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_10"):
			return 34479;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_11"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_11"):
			return 34480;
			break;
		case joaat("DLC_MP_SUM2_M_SPECIAL_1_0"):
		case joaat("DLC_MP_SUM2_F_SPECIAL_1_0"):
			return 34386;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_0"):
		case joaat("DLC_MP_SUM2_F_FEET_5_0"):
			return 34481;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_1"):
		case joaat("DLC_MP_SUM2_F_FEET_5_1"):
			return 34482;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_2"):
		case joaat("DLC_MP_SUM2_F_FEET_5_2"):
			return 34483;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_3"):
		case joaat("DLC_MP_SUM2_F_FEET_5_3"):
			return 34484;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_4"):
		case joaat("DLC_MP_SUM2_F_FEET_5_4"):
			return 34485;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_5"):
		case joaat("DLC_MP_SUM2_F_FEET_5_5"):
			return 34486;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_6"):
		case joaat("DLC_MP_SUM2_F_FEET_5_6"):
			return 34487;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_7"):
		case joaat("DLC_MP_SUM2_F_FEET_5_7"):
			return 34488;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_8"):
		case joaat("DLC_MP_SUM2_F_FEET_5_8"):
			return 34489;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_0"):
		case joaat("DLC_MP_SUM2_F_FEET_6_0"):
			return 34490;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_1"):
		case joaat("DLC_MP_SUM2_F_FEET_6_1"):
			return 34491;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_2"):
		case joaat("DLC_MP_SUM2_F_FEET_6_2"):
			return 34492;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_3"):
		case joaat("DLC_MP_SUM2_F_FEET_6_3"):
			return 34493;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_4"):
		case joaat("DLC_MP_SUM2_F_FEET_6_4"):
			return 34494;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_5"):
		case joaat("DLC_MP_SUM2_F_FEET_6_5"):
			return 34495;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_6"):
		case joaat("DLC_MP_SUM2_F_FEET_6_6"):
			return 34496;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_7"):
		case joaat("DLC_MP_SUM2_F_FEET_6_7"):
			return 34497;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_8"):
		case joaat("DLC_MP_SUM2_F_FEET_6_8"):
			return 34498;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_9"):
		case joaat("DLC_MP_SUM2_F_FEET_6_9"):
			return 34499;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_10"):
		case joaat("DLC_MP_SUM2_F_FEET_6_10"):
			return 34500;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_11"):
		case joaat("DLC_MP_SUM2_F_FEET_6_11"):
			return 34501;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_12"):
		case joaat("DLC_MP_SUM2_F_FEET_6_12"):
			return 34502;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_13"):
		case joaat("DLC_MP_SUM2_F_FEET_6_13"):
			return 34503;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_14"):
		case joaat("DLC_MP_SUM2_F_FEET_6_14"):
			return 34504/*func_157*/;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_FIXER_M_JBIB_10_2"):
		case joaat("DLC_MP_FIXER_F_JBIB_10_2"):
			return 32309;
			break;
		case joaat("DLC_MP_FIXER_M_JBIB_10_3"):
		case joaat("DLC_MP_FIXER_F_JBIB_10_3"):
			return 32310;
			break;
		case joaat("DLC_MP_FIXER_M_JBIB_10_4"):
		case joaat("DLC_MP_FIXER_F_JBIB_10_4"):
			return 32311;
			break;
		case joaat("DLC_MP_FIXER_M_JBIB_10_0"):
		case joaat("DLC_MP_FIXER_F_JBIB_13_0"):
			return 32307;
			break;
		case joaat("DLC_MP_FIXER_M_JBIB_10_1"):
		case joaat("DLC_MP_FIXER_F_JBIB_13_1"):
			return 32308;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_0_0"):
		case joaat("DLC_MP_FIXER_F_BERD_0_0"):
			return 32295;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_0_1"):
		case joaat("DLC_MP_FIXER_F_BERD_0_1"):
			return 32296;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_0_2"):
		case joaat("DLC_MP_FIXER_F_BERD_0_2"):
			return 32297;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_0_3"):
		case joaat("DLC_MP_FIXER_F_BERD_0_3"):
			return 32298;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_1_0"):
		case joaat("DLC_MP_FIXER_F_BERD_1_0"):
			return 32299;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_1_1"):
		case joaat("DLC_MP_FIXER_F_BERD_1_1"):
			return 32300;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_1_2"):
		case joaat("DLC_MP_FIXER_F_BERD_1_2"):
			return 32301;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_1_3"):
		case joaat("DLC_MP_FIXER_F_BERD_1_3"):
			return 32302;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_2_0"):
		case joaat("DLC_MP_FIXER_F_BERD_2_0"):
			return 32303;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_2_1"):
		case joaat("DLC_MP_FIXER_F_BERD_2_1"):
			return 32304;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_2_2"):
		case joaat("DLC_MP_FIXER_F_BERD_2_2"):
			return 32305;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_2_3"):
		case joaat("DLC_MP_FIXER_F_BERD_2_3"):
			return 32306;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_TUNER_M_DECL_30_1"):
		case joaat("DLC_MP_TUNER_F_DECL_29_1"):
			return 32273;
			break;
		case joaat("MP_Tuner_Tee_008_M"):
		case joaat("MP_Tuner_Tee_008_F"):
			return 31768;
			break;
		case joaat("MP_Tuner_Tee_010_M"):
		case joaat("MP_Tuner_Tee_010_F"):
			return 31769;
			break;
		case joaat("DLC_MP_TUNER_M_JBIB_11_0"):
		case joaat("DLC_MP_TUNER_M_JBIB_12_0"):
		case joaat("DLC_MP_TUNER_F_JBIB_11_0"):
		case joaat("DLC_MP_TUNER_F_JBIB_12_0"):
			return 31784;
			break;
		case joaat("MP_Tuner_Tee_011_M"):
		case joaat("MP_Tuner_Tee_011_F"):
			return 31770;
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_BOILER_1"):
		case joaat("DLC_MP_TUNER_M_JBIB_1_3"):
		case joaat("DLC_MP_TUNER_M_LEGS_1_3"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_BOILER_1"):
		case joaat("DLC_MP_TUNER_F_JBIB_1_3"):
		case joaat("DLC_MP_TUNER_F_LEGS_1_3"):
			return 31777;
			break;
		case joaat("DLC_MP_TUNER_M_JBIB_9_15"):
		case joaat("DLC_MP_TUNER_F_JBIB_9_15"):
			return 31788;
			break;
		case joaat("DLC_MP_TUNER_M_JBIB_13_2"):
		case joaat("DLC_MP_TUNER_M_JBIB_14_2"):
		case joaat("DLC_MP_TUNER_F_JBIB_13_2"):
			return 31787;
			break;
		case joaat("DLC_MP_TUNER_M_JBIB_13_0"):
		case joaat("DLC_MP_TUNER_M_JBIB_14_0"):
		case joaat("DLC_MP_TUNER_F_JBIB_13_0"):
			return 31786;
			break;
		case joaat("DLC_MP_TUNER_M_JBIB_13_1"):
		case joaat("DLC_MP_TUNER_M_JBIB_14_1"):
		case joaat("DLC_MP_TUNER_F_JBIB_13_1"):
			return 31785;
			break;
		case joaat("DLC_MP_TUNER_M_PHEAD_1_0"):
		case joaat("DLC_MP_TUNER_M_PHEAD_2_0"):
		case joaat("DLC_MP_TUNER_F_PHEAD_1_0"):
		case joaat("DLC_MP_TUNER_F_PHEAD_2_0"):
			return 31766;
			break;
		case joaat("DLC_MP_TUNER_M_PHEAD_1_1"):
		case joaat("DLC_MP_TUNER_M_PHEAD_2_1"):
		case joaat("DLC_MP_TUNER_F_PHEAD_1_1"):
		case joaat("DLC_MP_TUNER_F_PHEAD_2_1"):
			return 31767;
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_MORPH_0"):
			return 31789;
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_MORPH_1"):
			return 31790;
			break;
		case -1372800957:
			return 31791;
			break;
		case -1125170035:
			return 31792;
			break;
		case 1276052663:
			return 31793;
			break;
		case joaat("MP_Tuner_Tee_012_M"):
		case joaat("MP_Tuner_Tee_012_F"):
			return 31771;
			break;
		case joaat("MP_Tuner_Tee_013_M"):
		case joaat("MP_Tuner_Tee_013_F"):
			return 31772;
			break;
		case joaat("MP_Tuner_Tee_014_M"):
		case joaat("MP_Tuner_Tee_014_F"):
			return 31773;
			break;
		case joaat("MP_Tuner_Tee_015_M"):
		case joaat("MP_Tuner_Tee_015_F"):
			return 31774;
			break;
		case joaat("MP_Tuner_Tee_016_M"):
		case joaat("MP_Tuner_Tee_016_F"):
			return 31775;
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_BOILER_0"):
		case joaat("DLC_MP_TUNER_M_JBIB_1_2"):
		case joaat("DLC_MP_TUNER_M_LEGS_1_2"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_BOILER_0"):
		case joaat("DLC_MP_TUNER_F_JBIB_1_2"):
		case joaat("DLC_MP_TUNER_F_LEGS_1_2"):
			return 31776;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Heist4_Tee_055_M"):
		case joaat("MP_Heist4_Tee_055_F"):
			return 30703;
			break;
		case joaat("MP_Heist4_Tee_057_M"):
		case joaat("MP_Heist4_Tee_057_F"):
			return 30704;
			break;
		case joaat("MP_Heist4_Tee_059_M"):
		case joaat("MP_Heist4_Tee_059_F"):
			return 30700;
			break;
		case joaat("MP_Heist4_Tee_061_M"):
		case joaat("MP_Heist4_Tee_061_F"):
			return 30701;
			break;
		case joaat("MP_Heist4_Tee_063_M"):
		case joaat("MP_Heist4_Tee_063_F"):
			return 30702;
			break;
		case joaat("MP_Heist4_Tee_065_M"):
		case joaat("MP_Heist4_Tee_065_F"):
			return 30699;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Heist4_Tee_030_M"):
		case joaat("MP_Heist4_Tee_030_F"):
			return 30533;
			break;
		case joaat("MP_Heist4_Tee_032_M"):
		case joaat("MP_Heist4_Tee_032_F"):
			return 30534;
			break;
		case joaat("MP_Heist4_Tee_028_M"):
		case joaat("MP_Heist4_Tee_028_F"):
			return 30535;
			break;
		case joaat("MP_Heist4_Tee_029_M"):
		case joaat("MP_Heist4_Tee_029_F"):
			return 30536;
			break;
		case joaat("MP_Heist4_Tee_031_M"):
		case joaat("MP_Heist4_Tee_031_F"):
			return 30537;
			break;
		case joaat("MP_Heist4_Tee_022_M"):
		case joaat("MP_Heist4_Tee_022_F"):
			return 30538;
			break;
		case joaat("MP_Heist4_Tee_023_M"):
		case joaat("MP_Heist4_Tee_023_F"):
			return 30539;
			break;
		case joaat("MP_Heist4_Tee_020_M"):
		case joaat("MP_Heist4_Tee_020_F"):
			return 30540;
			break;
		case joaat("MP_Heist4_Tee_021_M"):
		case joaat("MP_Heist4_Tee_021_F"):
			return 30541;
			break;
		case joaat("MP_Heist4_Tee_003_M"):
		case joaat("MP_Heist4_Tee_003_F"):
			return 30542;
			break;
		case joaat("MP_Heist4_Tee_004_M"):
		case joaat("MP_Heist4_Tee_004_F"):
			return 30543;
			break;
		case joaat("MP_Heist4_Tee_005_M"):
		case joaat("MP_Heist4_Tee_005_F"):
			return 30544;
			break;
		case joaat("MP_Heist4_Tee_006_M"):
		case joaat("MP_Heist4_Tee_006_F"):
			return 30545;
			break;
		case joaat("MP_Heist4_Tee_027_M"):
		case joaat("MP_Heist4_Tee_027_F"):
			return 30546;
			break;
		case joaat("MP_Heist4_Tee_026_M"):
		case joaat("MP_Heist4_Tee_026_F"):
			return 30547;
			break;
		case joaat("MP_Heist4_Tee_025_M"):
		case joaat("MP_Heist4_Tee_025_F"):
			return 30548;
			break;
		case joaat("MP_Heist4_Tee_024_M"):
		case joaat("MP_Heist4_Tee_024_F"):
			return 30549;
			break;
		case joaat("MP_Heist4_Tee_002_M"):
		case joaat("MP_Heist4_Tee_002_F"):
			return 30550;
			break;
		case joaat("MP_Heist4_Tee_001_M"):
		case joaat("MP_Heist4_Tee_001_F"):
			return 30551;
			break;
		case joaat("MP_Heist4_Tee_000_M"):
		case joaat("MP_Heist4_Tee_000_F"):
			return 30552;
			break;
		case joaat("MP_Heist4_Tee_007_M"):
		case joaat("MP_Heist4_Tee_007_F"):
			return 30553;
			break;
		case joaat("MP_Heist4_Tee_008_M"):
		case joaat("MP_Heist4_Tee_008_F"):
			return 30554;
			break;
		case joaat("MP_Heist4_Tee_009_M"):
		case joaat("MP_Heist4_Tee_009_F"):
			return 30555;
			break;
		case joaat("MP_Heist4_Tee_010_M"):
		case joaat("MP_Heist4_Tee_010_F"):
			return 30556;
			break;
		case joaat("MP_Heist4_Tee_011_M"):
		case joaat("MP_Heist4_Tee_011_F"):
			return 30557;
			break;
		case joaat("MP_Heist4_Tee_012_M"):
		case joaat("MP_Heist4_Tee_012_F"):
			return 30524;
			break;
		case joaat("MP_Heist4_Tee_013_M"):
		case joaat("MP_Heist4_Tee_013_F"):
			return 30525;
			break;
		case joaat("MP_Heist4_Tee_014_M"):
		case joaat("MP_Heist4_Tee_014_F"):
			return 30526;
			break;
		case joaat("MP_Heist4_Tee_015_M"):
		case joaat("MP_Heist4_Tee_015_F"):
			return 30527;
			break;
		case joaat("MP_Heist4_Tee_016_M"):
		case joaat("MP_Heist4_Tee_016_F"):
			return 30528;
			break;
		case joaat("MP_Heist4_Tee_017_M"):
		case joaat("MP_Heist4_Tee_017_F"):
			return 30529;
			break;
		case joaat("MP_Heist4_Tee_018_M"):
		case joaat("MP_Heist4_Tee_018_F"):
			return 30530;
			break;
		case joaat("MP_Heist4_Tee_019_M"):
		case joaat("MP_Heist4_Tee_019_F"):
			return 30531;
			break;
		case joaat("MP_Heist4_Tee_033_M"):
		case joaat("MP_Heist4_Tee_033_F"):
			return 30532;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_JBIB_8_0"):
		case joaat("DLC_MP_H4_F_JBIB_9_0"):
		case joaat("DLC_MP_H4_M_JBIB_8_0"):
		case joaat("DLC_MP_H4_M_JBIB_9_0"):
			return 30563;
			break;
		case joaat("DLC_MP_H4_F_JBIB_10_0"):
		case joaat("DLC_MP_H4_M_JBIB_10_0"):
			return 30564;
			break;
		case joaat("DLC_MP_H4_F_JBIB_5_0"):
		case joaat("DLC_MP_H4_M_JBIB_6_0"):
			return 30565;
			break;
		case joaat("DLC_MP_H4_F_JBIB_5_1"):
		case joaat("DLC_MP_H4_M_JBIB_6_1"):
			return 30566;
			break;
		case joaat("DLC_MP_H4_M_JBIB_0_5"):
		case joaat("DLC_MP_H4_F_JBIB_7_1"):
			return 30567;
			break;
		case joaat("MP_Heist4_Tee_048_M"):
		case joaat("MP_Heist4_Tee_048_F"):
			return 30568;
			break;
		case joaat("MP_Heist4_Tee_047_M"):
		case joaat("MP_Heist4_Tee_047_F"):
			return 30569;
			break;
		case joaat("MP_Heist4_Tee_045_M"):
		case joaat("MP_Heist4_Tee_045_F"):
			return 30570;
			break;
		case joaat("MP_Heist4_Tee_046_M"):
		case joaat("MP_Heist4_Tee_046_F"):
			return 30571;
			break;
		case joaat("DLC_MP_H4_F_JBIB_7_5"):
		case joaat("DLC_MP_H4_M_JBIB_0_9"):
			return 30572;
			break;
		case joaat("DLC_MP_H4_F_JBIB_7_4"):
		case joaat("DLC_MP_H4_M_JBIB_0_8"):
			return 30573;
			break;
		case joaat("DLC_MP_H4_M_DECL_0_0"):
		case joaat("DLC_MP_H4_F_DECL_0_0"):
			return 30574;
			break;
		case joaat("DLC_MP_H4_M_JBIB_0_6"):
		case joaat("DLC_MP_H4_F_JBIB_7_2"):
			return 30575;
			break;
		case joaat("DLC_MP_H4_M_JBIB_0_7"):
		case joaat("DLC_MP_H4_F_JBIB_7_3"):
			return 30576;
			break;
		case joaat("DLC_MP_H4_M_JBIB_5_0"):
		case joaat("DLC_MP_H4_F_JBIB_4_0"):
			return 30577;
			break;
		case joaat("DLC_MP_H4_F_JBIB_6_4"):
		case joaat("DLC_MP_H4_M_JBIB_7_4"):
			return 30578;
			break;
		case joaat("DLC_MP_H4_F_JBIB_6_3"):
		case joaat("DLC_MP_H4_M_JBIB_7_3"):
			return 30579;
			break;
		case joaat("DLC_MP_H4_F_JBIB_6_2"):
		case joaat("DLC_MP_H4_M_JBIB_7_2"):
			return 30580;
			break;
		case joaat("DLC_MP_H4_F_JBIB_6_1"):
		case joaat("DLC_MP_H4_M_JBIB_7_1"):
			return 30581;
			break;
		case joaat("DLC_MP_H4_F_JBIB_6_0"):
		case joaat("DLC_MP_H4_M_JBIB_7_0"):
			return 30582;
			break;
		case joaat("DLC_MP_H4_F_LEGS_1_0"):
		case joaat("DLC_MP_H4_M_LEGS_1_0"):
			return 30583;
			break;
		case joaat("DLC_MP_H4_F_LEGS_1_1"):
		case joaat("DLC_MP_H4_M_LEGS_1_1"):
			return 30584;
			break;
		case joaat("DLC_MP_H4_F_LEGS_1_2"):
		case joaat("DLC_MP_H4_M_LEGS_1_2"):
			return 30585;
			break;
		case joaat("DLC_MP_H4_F_LEGS_0_0"):
		case joaat("DLC_MP_H4_M_LEGS_0_0"):
			return 30586;
			break;
		case joaat("DLC_MP_H4_F_PHEAD_1_0"):
		case joaat("DLC_MP_H4_M_PHEAD_1_0"):
		case joaat("DLC_MP_H4_F_PHEAD_2_0"):
		case joaat("DLC_MP_H4_M_PHEAD_2_0"):
			return 30587;
			break;
		case joaat("DLC_MP_H4_F_PHEAD_1_1"):
		case joaat("DLC_MP_H4_M_PHEAD_1_1"):
		case joaat("DLC_MP_H4_F_PHEAD_2_1"):
		case joaat("DLC_MP_H4_M_PHEAD_2_1"):
			return 30588;
			break;
		case joaat("DLC_MP_H4_F_PHEAD_1_2"):
		case joaat("DLC_MP_H4_M_PHEAD_1_2"):
		case joaat("DLC_MP_H4_F_PHEAD_2_2"):
		case joaat("DLC_MP_H4_M_PHEAD_2_2"):
			return 30589;
			break;
		case joaat("DLC_MP_H4_F_PHEAD_1_3"):
		case joaat("DLC_MP_H4_M_PHEAD_1_3"):
		case joaat("DLC_MP_H4_F_PHEAD_2_3"):
		case joaat("DLC_MP_H4_M_PHEAD_2_3"):
			return 30590;
			break;
		case joaat("DLC_MP_H4_F_PHEAD_1_4"):
		case joaat("DLC_MP_H4_M_PHEAD_1_4"):
		case joaat("DLC_MP_H4_F_PHEAD_2_4"):
		case joaat("DLC_MP_H4_M_PHEAD_2_4"):
			return 30591;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_0"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_0"):
			return 30592;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_1"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_1"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_1"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_1"):
			return 30593;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_2"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_2"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_2"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_2"):
			return 30594;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_3"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_3"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_3"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_3"):
			return 30595;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_4"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_4"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_4"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_4"):
			return 30596;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_5"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_5"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_5"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_5"):
			return 30597;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_6"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_6"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_6"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_6"):
			return 30598;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_7"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_7"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_7"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_7"):
			return 30599;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_8"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_8"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_8"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_8"):
			return 30600;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_9"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_9"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_9"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_9"):
			return 30601;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_10"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_10"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_10"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_10"):
			return 30602;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_11"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_11"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_11"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_11"):
			return 30603;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_PEYES_0_0"):
		case joaat("DLC_MP_H4_M_PEYES_0_0"):
			return 30604;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_1"):
		case joaat("DLC_MP_H4_M_PEYES_0_1"):
			return 30605;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_2"):
		case joaat("DLC_MP_H4_M_PEYES_0_2"):
			return 30606;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_3"):
		case joaat("DLC_MP_H4_M_PEYES_0_3"):
			return 30607;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_4"):
		case joaat("DLC_MP_H4_M_PEYES_0_4"):
			return 30608;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_5"):
		case joaat("DLC_MP_H4_M_PEYES_0_5"):
			return 30609;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_6"):
		case joaat("DLC_MP_H4_M_PEYES_0_6"):
			return 30610;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_7"):
		case joaat("DLC_MP_H4_M_PEYES_0_7"):
			return 30611;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_8"):
		case joaat("DLC_MP_H4_M_PEYES_0_8"):
			return 30612;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_9"):
		case joaat("DLC_MP_H4_M_PEYES_0_9"):
			return 30613;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_10"):
		case joaat("DLC_MP_H4_M_PEYES_0_10"):
			return 30614;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_11"):
		case joaat("DLC_MP_H4_M_PEYES_0_11"):
			return 30615;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_TEETH_13_0"):
		case joaat("DLC_MP_H4_M_TEETH_13_0"):
		case joaat("DLC_MP_H4_F_TEETH_14_0"):
		case joaat("DLC_MP_H4_M_TEETH_14_0"):
			return 30616;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_1"):
		case joaat("DLC_MP_H4_M_TEETH_13_1"):
		case joaat("DLC_MP_H4_F_TEETH_14_1"):
		case joaat("DLC_MP_H4_M_TEETH_14_1"):
			return 30617;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_2"):
		case joaat("DLC_MP_H4_M_TEETH_13_2"):
		case joaat("DLC_MP_H4_F_TEETH_14_2"):
		case joaat("DLC_MP_H4_M_TEETH_14_2"):
			return 30618;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_3"):
		case joaat("DLC_MP_H4_M_TEETH_13_3"):
		case joaat("DLC_MP_H4_F_TEETH_14_3"):
		case joaat("DLC_MP_H4_M_TEETH_14_3"):
			return 30619;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_4"):
		case joaat("DLC_MP_H4_M_TEETH_13_4"):
		case joaat("DLC_MP_H4_F_TEETH_14_4"):
		case joaat("DLC_MP_H4_M_TEETH_14_4"):
			return 30620;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_5"):
		case joaat("DLC_MP_H4_M_TEETH_13_5"):
		case joaat("DLC_MP_H4_F_TEETH_14_5"):
		case joaat("DLC_MP_H4_M_TEETH_14_5"):
			return 30621;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_6"):
		case joaat("DLC_MP_H4_M_TEETH_13_6"):
		case joaat("DLC_MP_H4_F_TEETH_14_6"):
		case joaat("DLC_MP_H4_M_TEETH_14_6"):
			return 30622;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_7"):
		case joaat("DLC_MP_H4_M_TEETH_13_7"):
		case joaat("DLC_MP_H4_F_TEETH_14_7"):
		case joaat("DLC_MP_H4_M_TEETH_14_7"):
			return 30623;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_8"):
		case joaat("DLC_MP_H4_M_TEETH_13_8"):
		case joaat("DLC_MP_H4_F_TEETH_14_8"):
		case joaat("DLC_MP_H4_M_TEETH_14_8"):
			return 30624;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_9"):
		case joaat("DLC_MP_H4_M_TEETH_13_9"):
		case joaat("DLC_MP_H4_F_TEETH_14_9"):
		case joaat("DLC_MP_H4_M_TEETH_14_9"):
			return 30625;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_10"):
		case joaat("DLC_MP_H4_M_TEETH_13_10"):
		case joaat("DLC_MP_H4_F_TEETH_14_10"):
		case joaat("DLC_MP_H4_M_TEETH_14_10"):
			return 30626;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_11"):
		case joaat("DLC_MP_H4_M_TEETH_13_11"):
		case joaat("DLC_MP_H4_F_TEETH_14_11"):
		case joaat("DLC_MP_H4_M_TEETH_14_11"):
			return 30627;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_12"):
		case joaat("DLC_MP_H4_M_TEETH_13_12"):
		case joaat("DLC_MP_H4_F_TEETH_14_12"):
		case joaat("DLC_MP_H4_M_TEETH_14_12"):
			return 30628;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_13"):
		case joaat("DLC_MP_H4_M_TEETH_13_13"):
		case joaat("DLC_MP_H4_F_TEETH_14_13"):
		case joaat("DLC_MP_H4_M_TEETH_14_13"):
			return 30629;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_14"):
		case joaat("DLC_MP_H4_M_TEETH_13_14"):
		case joaat("DLC_MP_H4_F_TEETH_14_14"):
		case joaat("DLC_MP_H4_M_TEETH_14_14"):
			return 30630;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_15"):
		case joaat("DLC_MP_H4_M_TEETH_13_15"):
		case joaat("DLC_MP_H4_F_TEETH_14_15"):
		case joaat("DLC_MP_H4_M_TEETH_14_15"):
			return 30631;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_M_BERD_4_0"):
		case joaat("DLC_MP_H4_F_BERD_4_0"):
			return 30674;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_1"):
		case joaat("DLC_MP_H4_F_BERD_4_1"):
			return 30675;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_2"):
		case joaat("DLC_MP_H4_F_BERD_4_2"):
			return 30676;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_3"):
		case joaat("DLC_MP_H4_F_BERD_4_3"):
			return 30677;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_4"):
		case joaat("DLC_MP_H4_F_BERD_4_4"):
			return 30678;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_5"):
		case joaat("DLC_MP_H4_F_BERD_4_5"):
			return 30679;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_6"):
		case joaat("DLC_MP_H4_F_BERD_4_6"):
			return 30680;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_7"):
		case joaat("DLC_MP_H4_F_BERD_4_7"):
			return 30681;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_8"):
		case joaat("DLC_MP_H4_F_BERD_4_8"):
			return 30682;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_9"):
		case joaat("DLC_MP_H4_F_BERD_4_9"):
			return 30683;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_10"):
		case joaat("DLC_MP_H4_F_BERD_4_10"):
			return 30684;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_11"):
		case joaat("DLC_MP_H4_F_BERD_4_11"):
			return 30685;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_12"):
		case joaat("DLC_MP_H4_F_BERD_4_12"):
			return 30686;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_13"):
		case joaat("DLC_MP_H4_F_BERD_4_13"):
			return 30687;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_14"):
		case joaat("DLC_MP_H4_F_BERD_4_14"):
			return 30688;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_15"):
		case joaat("DLC_MP_H4_F_BERD_4_15"):
			return 30689;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_16"):
		case joaat("DLC_MP_H4_F_BERD_4_16"):
			return 30690;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_17"):
		case joaat("DLC_MP_H4_F_BERD_4_17"):
			return 30691;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_18"):
		case joaat("DLC_MP_H4_F_BERD_4_18"):
			return 30692;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_19"):
		case joaat("DLC_MP_H4_F_BERD_4_19"):
			return 30693;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_M_PEYES_1_0"):
		case joaat("DLC_MP_H4_F_PEYES_1_0"):
			return 30638;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_1"):
		case joaat("DLC_MP_H4_F_PEYES_1_1"):
			return 30639;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_2"):
		case joaat("DLC_MP_H4_F_PEYES_1_2"):
			return 30640;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_3"):
		case joaat("DLC_MP_H4_F_PEYES_1_3"):
			return 30641;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_4"):
		case joaat("DLC_MP_H4_F_PEYES_1_4"):
			return 30642;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_5"):
		case joaat("DLC_MP_H4_F_PEYES_1_5"):
			return 30643;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_6"):
		case joaat("DLC_MP_H4_F_PEYES_1_6"):
			return 30644;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_7"):
		case joaat("DLC_MP_H4_F_PEYES_1_7"):
			return 30645;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_8"):
		case joaat("DLC_MP_H4_F_PEYES_1_8"):
			return 30646;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_9"):
		case joaat("DLC_MP_H4_F_PEYES_1_9"):
			return 30647;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_10"):
		case joaat("DLC_MP_H4_F_PEYES_1_10"):
			return 30648;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_11"):
		case joaat("DLC_MP_H4_F_PEYES_1_11"):
			return 30649;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_0"):
		case joaat("DLC_MP_H4_F_PEYES_2_0"):
			return 30650;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_1"):
		case joaat("DLC_MP_H4_F_PEYES_2_1"):
			return 30651;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_2"):
		case joaat("DLC_MP_H4_F_PEYES_2_2"):
			return 30652;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_3"):
		case joaat("DLC_MP_H4_F_PEYES_2_3"):
			return 30653;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_4"):
		case joaat("DLC_MP_H4_F_PEYES_2_4"):
			return 30654;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_5"):
		case joaat("DLC_MP_H4_F_PEYES_2_5"):
			return 30655;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_6"):
		case joaat("DLC_MP_H4_F_PEYES_2_6"):
			return 30656;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_7"):
		case joaat("DLC_MP_H4_F_PEYES_2_7"):
			return 30657;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_8"):
		case joaat("DLC_MP_H4_F_PEYES_2_8"):
			return 30658;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_9"):
		case joaat("DLC_MP_H4_F_PEYES_2_9"):
			return 30659;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_10"):
		case joaat("DLC_MP_H4_F_PEYES_2_10"):
			return 30660;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_11"):
		case joaat("DLC_MP_H4_F_PEYES_2_11"):
			return 30661;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_0"):
		case joaat("DLC_MP_H4_F_PEYES_3_0"):
			return 30662;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_1"):
		case joaat("DLC_MP_H4_F_PEYES_3_1"):
			return 30663;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_2"):
		case joaat("DLC_MP_H4_F_PEYES_3_2"):
			return 30664;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_3"):
		case joaat("DLC_MP_H4_F_PEYES_3_3"):
			return 30665;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_4"):
		case joaat("DLC_MP_H4_F_PEYES_3_4"):
			return 30666;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_5"):
		case joaat("DLC_MP_H4_F_PEYES_3_5"):
			return 30667;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_6"):
		case joaat("DLC_MP_H4_F_PEYES_3_6"):
			return 30668;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_7"):
		case joaat("DLC_MP_H4_F_PEYES_3_7"):
			return 30669;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_8"):
		case joaat("DLC_MP_H4_F_PEYES_3_8"):
			return 30670;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_9"):
		case joaat("DLC_MP_H4_F_PEYES_3_9"):
			return 30671;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_10"):
		case joaat("DLC_MP_H4_F_PEYES_3_10"):
			return 30672;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_11"):
		case joaat("DLC_MP_H4_F_PEYES_3_11"):
			return 30673;
			break;
	}
	switch (iParam0)
	{
		case joaat("mpSum_Tee_000_M"):
		case joaat("mpSum_Tee_000_F"):
			return 30260;
			break;
		case joaat("mpSum_Tee_001_M"):
		case joaat("mpSum_Tee_001_F"):
			return 30261;
			break;
		case joaat("mpSum_Tee_002_M"):
		case joaat("mpSum_Tee_002_F"):
			return 30262;
			break;
		case joaat("mpSum_Tee_003_M"):
		case joaat("mpSum_Tee_003_F"):
			return 30263;
			break;
		case joaat("mpSum_Tee_004_M"):
		case joaat("mpSum_Tee_004_F"):
			return 30264;
			break;
		case joaat("mpSum_Tee_005_M"):
		case joaat("mpSum_Tee_005_F"):
			return 30265;
			break;
		case joaat("mpSum_Tee_006_M"):
		case joaat("mpSum_Tee_006_F"):
			return 30266;
			break;
		case joaat("mpSum_Tee_007_M"):
		case joaat("mpSum_Tee_007_F"):
			return 30267;
			break;
		case joaat("mpSum_Tee_008_M"):
		case joaat("mpSum_Tee_008_F"):
			return 30268;
			break;
		case joaat("mpSum_Tee_009_M"):
		case joaat("mpSum_Tee_009_F"):
			return 30269;
			break;
		case joaat("mpSum_Tee_010_M"):
		case joaat("mpSum_Tee_010_F"):
			return 30270;
			break;
		case joaat("mpSum_Tee_011_M"):
		case joaat("mpSum_Tee_011_F"):
			return 30271;
			break;
		case joaat("mpSum_Tee_012_M"):
		case joaat("mpSum_Tee_012_F"):
			return 30272;
			break;
		case joaat("mpSum_Tee_013_M"):
		case joaat("mpSum_Tee_013_F"):
			return 30273;
			break;
		case joaat("mpSum_Tee_014_M"):
		case joaat("mpSum_Tee_014_F"):
			return 30274;
			break;
		case joaat("mpSum_Tee_015_M"):
		case joaat("mpSum_Tee_015_F"):
			return 30275;
			break;
		case joaat("mpSum_Tee_016_M"):
		case joaat("mpSum_Tee_016_F"):
			return 30276;
			break;
		case joaat("mpSum_Tee_017_M"):
		case joaat("mpSum_Tee_017_F"):
			return 30277;
			break;
		case joaat("mpSum_Tee_018_M"):
		case joaat("mpSum_Tee_018_F"):
			return 30278;
			break;
		case joaat("mpSum_Tee_019_M"):
		case joaat("mpSum_Tee_019_F"):
			return 30279;
			break;
		case joaat("mpSum_Tee_020_M"):
		case joaat("mpSum_Tee_020_F"):
			return 30280;
			break;
		case joaat("mpSum_Tee_021_M"):
		case joaat("mpSum_Tee_021_F"):
			return 30281;
			break;
		case joaat("mpSum_Tee_022_M"):
		case joaat("mpSum_Tee_022_F"):
			return 30282;
			break;
		case joaat("mpSum_Tee_023_M"):
		case joaat("mpSum_Tee_023_F"):
			return 30283;
			break;
		case joaat("mpSum_Tee_024_M"):
		case joaat("mpSum_Tee_024_F"):
			return 30284;
			break;
		case joaat("mpSum_Tee_025_M"):
		case joaat("mpSum_Tee_025_F"):
			return 30285;
			break;
		case joaat("mpSum_Tee_026_M"):
		case joaat("mpSum_Tee_026_F"):
			return 30286;
			break;
		case joaat("mpSum_Tee_027_M"):
		case joaat("mpSum_Tee_027_F"):
			return 30287;
			break;
		case joaat("mpSum_Tee_028_M"):
		case joaat("mpSum_Tee_028_F"):
			return 30288;
			break;
		case joaat("mpSum_Tee_029_M"):
		case joaat("mpSum_Tee_029_F"):
			return 30289;
			break;
		case joaat("DLC_MP_SUM_M_BERD_3_4"):
		case joaat("DLC_MP_SUM_F_BERD_3_4"):
			return 30290;
			break;
		case joaat("DLC_MP_SUM_M_BERD_3_5"):
		case joaat("DLC_MP_SUM_F_BERD_3_5"):
			return 30291;
			break;
		case joaat("DLC_MP_SUM_M_BERD_3_6"):
		case joaat("DLC_MP_SUM_F_BERD_3_6"):
			return 30292;
			break;
		case joaat("DLC_MP_SUM_M_BERD_3_7"):
		case joaat("DLC_MP_SUM_F_BERD_3_7"):
			return 30293;
			break;
		case joaat("DLC_MP_SUM_M_LEGS_1_25"):
		case joaat("DLC_MP_SUM_F_LEGS_2_25"):
			return 30294;
			break;
		case joaat("DLC_MP_SUM_M_JBIB_0_25"):
		case joaat("DLC_MP_SUM_F_JBIB_0_25"):
			return 30295;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_VWD_M_DECL_1_0"):
		case joaat("DLC_MP_VWD_F_DECL_1_0"):
			return 27194;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_6"):
		case joaat("DLC_MP_VWD_F_DECL_1_6"):
			return 27195;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_7"):
		case joaat("DLC_MP_VWD_F_DECL_1_7"):
			return 27196;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_8"):
		case joaat("DLC_MP_VWD_F_DECL_1_8"):
			return 27197;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_5"):
		case joaat("DLC_MP_VWD_F_JBIB_21_5"):
			return 27198;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_8"):
		case joaat("DLC_MP_VWD_F_JBIB_21_8"):
			return 27199;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_9"):
		case joaat("DLC_MP_VWD_F_JBIB_21_9"):
			return 27200;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_10"):
		case joaat("DLC_MP_VWD_F_JBIB_21_10"):
			return 27201;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_11"):
		case joaat("DLC_MP_VWD_F_DECL_1_11"):
			return 27202;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_12"):
		case joaat("DLC_MP_VWD_F_DECL_1_12"):
			return 27203;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_13"):
		case joaat("DLC_MP_VWD_F_DECL_1_13"):
			return 27204;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_14"):
		case joaat("DLC_MP_VWD_F_DECL_1_14"):
			return 27205;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_15"):
		case joaat("DLC_MP_VWD_F_DECL_1_15"):
			return 27206;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_16"):
		case joaat("DLC_MP_VWD_F_DECL_1_16"):
			return 27207;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_17"):
		case joaat("DLC_MP_VWD_F_DECL_1_17"):
			return 27208;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_18"):
		case joaat("DLC_MP_VWD_F_DECL_1_18"):
			return 27209;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_0"):
		case joaat("DLC_MP_VWD_F_JBIB_21_0"):
			return 27210;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_2"):
		case joaat("DLC_MP_VWD_F_JBIB_21_2"):
			return 27211;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_4"):
		case joaat("DLC_MP_VWD_F_JBIB_21_4"):
			return 27212;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_7"):
		case joaat("DLC_MP_VWD_F_JBIB_21_7"):
			return 27213;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Christmas2018_Tee_000_M"):
		case joaat("MP_Christmas2018_Tee_000_F"):
			return 25032;
			break;
		case joaat("MP_Christmas2018_Tee_001_M"):
		case joaat("MP_Christmas2018_Tee_001_F"):
			return 25033;
			break;
		case joaat("MP_Christmas2018_Tee_002_M"):
		case joaat("MP_Christmas2018_Tee_002_F"):
			return 25034;
			break;
		case joaat("MP_Christmas2018_Tee_003_M"):
		case joaat("MP_Christmas2018_Tee_003_F"):
			return 25035;
			break;
		case joaat("MP_Christmas2018_Tee_004_M"):
		case joaat("MP_Christmas2018_Tee_004_F"):
			return 25036;
			break;
		case joaat("MP_Christmas2018_Tee_005_M"):
		case joaat("MP_Christmas2018_Tee_005_F"):
			return 25037;
			break;
		case joaat("MP_Christmas2018_Tee_006_M"):
		case joaat("MP_Christmas2018_Tee_006_F"):
			return 25038;
			break;
		case joaat("MP_Christmas2018_Tee_007_M"):
		case joaat("MP_Christmas2018_Tee_007_F"):
			return 25039;
			break;
		case joaat("MP_Christmas2018_Tee_008_M"):
		case joaat("MP_Christmas2018_Tee_008_F"):
			return 25040;
			break;
		case joaat("MP_Christmas2018_Tee_009_M"):
		case joaat("MP_Christmas2018_Tee_009_F"):
			return 25041;
			break;
		case joaat("MP_Christmas2018_Tee_010_M"):
		case joaat("MP_Christmas2018_Tee_010_F"):
			return 25042;
			break;
		case joaat("MP_Christmas2018_Tee_011_M"):
		case joaat("MP_Christmas2018_Tee_011_F"):
			return 25043;
			break;
		case joaat("MP_Christmas2018_Tee_012_M"):
		case joaat("MP_Christmas2018_Tee_012_F"):
			return 25044;
			break;
		case joaat("MP_Christmas2018_Tee_013_M"):
		case joaat("MP_Christmas2018_Tee_013_F"):
			return 25045;
			break;
		case joaat("MP_Christmas2018_Tee_014_M"):
		case joaat("MP_Christmas2018_Tee_014_F"):
			return 25046;
			break;
		case joaat("MP_Christmas2018_Tee_015_M"):
		case joaat("MP_Christmas2018_Tee_015_F"):
			return 25047;
			break;
		case joaat("MP_Christmas2018_Tee_016_M"):
		case joaat("MP_Christmas2018_Tee_016_F"):
			return 25048;
			break;
		case joaat("MP_Christmas2018_Tee_017_M"):
		case joaat("MP_Christmas2018_Tee_017_F"):
			return 25049;
			break;
		case joaat("MP_Christmas2018_Tee_018_M"):
		case joaat("MP_Christmas2018_Tee_018_F"):
			return 25050;
			break;
		case joaat("MP_Christmas2018_Tee_019_M"):
		case joaat("MP_Christmas2018_Tee_019_F"):
			return 25051;
			break;
		case joaat("MP_Christmas2018_Tee_020_M"):
		case joaat("MP_Christmas2018_Tee_020_F"):
			return 25052;
			break;
		case joaat("MP_Christmas2018_Tee_021_M"):
		case joaat("MP_Christmas2018_Tee_021_F"):
			return 25053;
			break;
		case joaat("MP_Christmas2018_Tee_022_M"):
		case joaat("MP_Christmas2018_Tee_022_F"):
			return 25054;
			break;
		case joaat("MP_Christmas2018_Tee_023_M"):
		case joaat("MP_Christmas2018_Tee_023_F"):
			return 25055;
			break;
		case joaat("MP_Christmas2018_Tee_024_M"):
		case joaat("MP_Christmas2018_Tee_024_F"):
			return 25056;
			break;
		case joaat("MP_Christmas2018_Tee_025_M"):
		case joaat("MP_Christmas2018_Tee_025_F"):
			return 25057;
			break;
		case joaat("MP_Christmas2018_Tee_026_M"):
		case joaat("MP_Christmas2018_Tee_026_F"):
			return 25058;
			break;
		case joaat("MP_Christmas2018_Tee_027_M"):
		case joaat("MP_Christmas2018_Tee_027_F"):
			return 25059;
			break;
		case joaat("MP_Christmas2018_Tee_028_M"):
		case joaat("MP_Christmas2018_Tee_028_F"):
			return 25060;
			break;
		case joaat("MP_Christmas2018_Tee_029_M"):
		case joaat("MP_Christmas2018_Tee_029_F"):
			return 25061;
			break;
		case joaat("MP_Christmas2018_Tee_030_M"):
		case joaat("MP_Christmas2018_Tee_030_F"):
			return 25062;
			break;
		case joaat("MP_Christmas2018_Tee_031_M"):
		case joaat("MP_Christmas2018_Tee_031_F"):
			return 25063;
			break;
		case joaat("MP_Christmas2018_Tee_032_M"):
		case joaat("MP_Christmas2018_Tee_032_F"):
			return 25064;
			break;
		case joaat("MP_Christmas2018_Tee_033_M"):
		case joaat("MP_Christmas2018_Tee_033_F"):
			return 25065;
			break;
		case joaat("MP_Christmas2018_Tee_034_M"):
		case joaat("MP_Christmas2018_Tee_034_F"):
			return 25066;
			break;
		case joaat("MP_Christmas2018_Tee_035_M"):
		case joaat("MP_Christmas2018_Tee_035_F"):
			return 25067;
			break;
		case joaat("MP_Christmas2018_Tee_036_M"):
		case joaat("MP_Christmas2018_Tee_036_F"):
			return 25068;
			break;
		case joaat("MP_Christmas2018_Tee_037_M"):
		case joaat("MP_Christmas2018_Tee_037_F"):
			return 25069;
			break;
		case joaat("MP_Christmas2018_Tee_038_M"):
		case joaat("MP_Christmas2018_Tee_038_F"):
			return 25070;
			break;
		case joaat("MP_Christmas2018_Tee_039_M"):
		case joaat("MP_Christmas2018_Tee_039_F"):
			return 25071;
			break;
		case joaat("MP_Christmas2018_Tee_040_M"):
		case joaat("MP_Christmas2018_Tee_040_F"):
			return 25072;
			break;
		case joaat("MP_Christmas2018_Tee_041_M"):
		case joaat("MP_Christmas2018_Tee_041_F"):
			return 25073;
			break;
		case joaat("MP_Christmas2018_Tee_042_M"):
		case joaat("MP_Christmas2018_Tee_042_F"):
			return 25074;
			break;
		case joaat("MP_Christmas2018_Tee_043_M"):
		case joaat("MP_Christmas2018_Tee_043_F"):
			return 25075;
			break;
		case joaat("MP_Christmas2018_Tee_044_M"):
		case joaat("MP_Christmas2018_Tee_044_F"):
			return 25076;
			break;
		case joaat("MP_Christmas2018_Tee_045_M"):
		case joaat("MP_Christmas2018_Tee_045_F"):
			return 25077;
			break;
		case joaat("MP_Christmas2018_Tee_046_M"):
		case joaat("MP_Christmas2018_Tee_046_F"):
			return 25078;
			break;
		case joaat("MP_Christmas2018_Tee_047_M"):
		case joaat("MP_Christmas2018_Tee_047_F"):
			return 25079;
			break;
		case joaat("MP_Christmas2018_Tee_048_M"):
		case joaat("MP_Christmas2018_Tee_048_F"):
			return 25080;
			break;
		case joaat("MP_Christmas2018_Tee_049_M"):
		case joaat("MP_Christmas2018_Tee_049_F"):
			return 25081;
			break;
		case joaat("MP_Christmas2018_Tee_050_M"):
		case joaat("MP_Christmas2018_Tee_050_F"):
			return 25082;
			break;
		case joaat("MP_Christmas2018_Tee_051_M"):
		case joaat("MP_Christmas2018_Tee_051_F"):
			return 25083;
			break;
		case joaat("MP_Christmas2018_Tee_052_M"):
		case joaat("MP_Christmas2018_Tee_052_F"):
			return 25084;
			break;
		case joaat("MP_Christmas2018_Tee_053_M"):
		case joaat("MP_Christmas2018_Tee_053_F"):
			return 25085;
			break;
		case joaat("MP_Christmas2018_Tee_054_M"):
		case joaat("MP_Christmas2018_Tee_054_F"):
			return 25086;
			break;
		case joaat("MP_Christmas2018_Tee_055_M"):
		case joaat("MP_Christmas2018_Tee_055_F"):
			return 25087;
			break;
		case joaat("MP_Christmas2018_Tee_056_M"):
		case joaat("MP_Christmas2018_Tee_056_F"):
			return 25088;
			break;
		case joaat("MP_Christmas2018_Tee_057_M"):
		case joaat("MP_Christmas2018_Tee_057_F"):
			return 25089;
			break;
		case joaat("MP_Christmas2018_Tee_058_M"):
		case joaat("MP_Christmas2018_Tee_058_F"):
			return 25090;
			break;
		case joaat("MP_Christmas2018_Tee_059_M"):
		case joaat("MP_Christmas2018_Tee_059_F"):
			return 25091;
			break;
		case joaat("MP_Christmas2018_Tee_060_M"):
		case joaat("MP_Christmas2018_Tee_060_F"):
			return 25092;
			break;
		case joaat("MP_Christmas2018_Tee_061_M"):
		case joaat("MP_Christmas2018_Tee_061_F"):
			return 25093;
			break;
		case joaat("MP_Christmas2018_Tee_062_M"):
		case joaat("MP_Christmas2018_Tee_062_F"):
			return 25094;
			break;
		case joaat("MP_Christmas2018_Tee_063_M"):
		case joaat("MP_Christmas2018_Tee_063_F"):
			return 25095;
			break;
		case joaat("MP_Christmas2018_Tee_064_M"):
		case joaat("MP_Christmas2018_Tee_064_F"):
			return 25096;
			break;
		case joaat("MP_Christmas2018_Tee_065_M"):
		case joaat("MP_Christmas2018_Tee_065_F"):
			return 25097;
			break;
		case joaat("MP_Christmas2018_Tee_066_M"):
		case joaat("MP_Christmas2018_Tee_066_F"):
			return 25098;
			break;
		case joaat("MP_Christmas2018_Tee_067_M"):
		case joaat("MP_Christmas2018_Tee_067_F"):
			return 25099;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_ARENA_F_JBIB_16_0"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_0"):
			return 25022;
		case joaat("DLC_MP_ARENA_F_JBIB_16_1"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_1"):
			return 25023;
		case joaat("DLC_MP_ARENA_F_JBIB_16_2"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_2"):
			return 25024;
		case joaat("DLC_MP_ARENA_F_JBIB_16_3"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_3"):
			return 25025;
		case joaat("DLC_MP_ARENA_F_JBIB_16_4"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_4"):
			return 25026;
		case joaat("DLC_MP_ARENA_F_JBIB_16_5"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_5"):
			return 25027;
		case joaat("DLC_MP_ARENA_F_JBIB_16_6"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_6"):
			return 25028;
		case joaat("DLC_MP_ARENA_F_JBIB_16_7"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_7"):
			return 25019;
		case joaat("DLC_MP_ARENA_F_JBIB_16_8"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_8"):
			return 25029;
		case joaat("DLC_MP_ARENA_F_JBIB_16_9"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_9"):
			return 25021;
		case joaat("DLC_MP_ARENA_F_JBIB_16_10"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_10"):
			return 25018;
		case joaat("DLC_MP_ARENA_F_JBIB_16_11"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_11"):
			return 25020;
		case joaat("DLC_MP_ARENA_F_JBIB_16_12"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_12"):
			return 25030;
		case joaat("DLC_MP_ARENA_F_JBIB_16_13"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_13"):
			return 25031;
		default:
	}
	switch (iParam0)
	{
		case joaat("WP_WT_RAYPISTOL_t0_v0"):
			return 25002;
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_000_M"):
		case joaat("MP_Battle_Clothing_000_F"):
			return 22108;
		case joaat("MP_Battle_Clothing_002_M"):
		case joaat("MP_Battle_Clothing_002_F"):
			return 9481;
		case joaat("MP_Battle_Clothing_003_M"):
		case joaat("MP_Battle_Clothing_003_F"):
			return 9470;
		case joaat("MP_Battle_Clothing_004_M"):
		case joaat("MP_Battle_Clothing_004_F"):
			return 9475;
		case joaat("MP_Battle_Clothing_005_M"):
		case joaat("MP_Battle_Clothing_005_F"):
			return 9472;
		case joaat("MP_Battle_Clothing_006_M"):
		case joaat("MP_Battle_Clothing_006_F"):
			return 9465;
		case joaat("MP_Battle_Clothing_007_M"):
		case joaat("MP_Battle_Clothing_007_F"):
			return 9463;
		case joaat("MP_Battle_Clothing_008_M"):
		case joaat("MP_Battle_Clothing_008_F"):
			return 9464;
		case joaat("MP_Battle_Clothing_009_M"):
		case joaat("MP_Battle_Clothing_009_F"):
			return 9468;
		case joaat("MP_Battle_Clothing_010_M"):
		case joaat("MP_Battle_Clothing_010_F"):
			return 9469;
		case joaat("MP_Battle_Clothing_011_M"):
		case joaat("MP_Battle_Clothing_011_F"):
			return 9479;
		case joaat("MP_Battle_Clothing_012_M"):
		case joaat("MP_Battle_Clothing_012_F"):
			return 9473;
		case joaat("MP_Battle_Clothing_013_M"):
		case joaat("MP_Battle_Clothing_013_F"):
			return 9480;
		case joaat("MP_Battle_Clothing_014_M"):
		case joaat("MP_Battle_Clothing_014_F"):
			return 9476;
		case joaat("MP_Battle_Clothing_015_M"):
		case joaat("MP_Battle_Clothing_015_F"):
			return 9477;
		case joaat("MP_Battle_Clothing_016_M"):
		case joaat("MP_Battle_Clothing_016_F"):
			return 9471;
		case joaat("MP_Battle_Clothing_017_M"):
		case joaat("MP_Battle_Clothing_017_F"):
			return 9474;
		case joaat("MP_Battle_Clothing_018_M"):
		case joaat("MP_Battle_Clothing_018_F"):
			return 9467;
		case joaat("MP_Battle_Clothing_019_M"):
		case joaat("MP_Battle_Clothing_019_F"):
			return 9478;
		case joaat("MP_Battle_Clothing_020_M"):
		case joaat("MP_Battle_Clothing_020_F"):
			return 9462;
		case joaat("MP_Battle_Clothing_021_M"):
		case joaat("MP_Battle_Clothing_021_F"):
			return 9466;
		case joaat("MP_Battle_Clothing_022_M"):
		case joaat("MP_Battle_Clothing_022_F"):
			return 22126;
		case joaat("MP_Battle_Clothing_023_M"):
		case joaat("MP_Battle_Clothing_023_F"):
			return 22127;
		case joaat("MP_Battle_Clothing_024_M"):
		case joaat("MP_Battle_Clothing_024_F"):
			return 22128;
		case joaat("MP_Battle_Clothing_025_M"):
		case joaat("MP_Battle_Clothing_025_F"):
			return 22124;
		case joaat("MP_Battle_Clothing_026_M"):
		case joaat("MP_Battle_Clothing_026_F"):
			return 22130;
		case joaat("MP_Battle_Clothing_027_M"):
		case joaat("MP_Battle_Clothing_027_F"):
			return 22125;
		case joaat("MP_Battle_Clothing_028_M"):
		case joaat("MP_Battle_Clothing_028_F"):
			return 22129;
		case joaat("MP_Battle_Clothing_029_M"):
		case joaat("MP_Battle_Clothing_029_F"):
			return 22131;
		case joaat("MP_Battle_Clothing_030_M"):
		case joaat("MP_Battle_Clothing_030_F"):
			return 22132;
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_031_M"):
		case joaat("MP_Battle_Clothing_031_F"):
			return 22147;
		case joaat("MP_Battle_Clothing_032_M"):
		case joaat("MP_Battle_Clothing_032_F"):
			return 22148;
		case joaat("MP_Battle_Clothing_033_M"):
		case joaat("MP_Battle_Clothing_033_F"):
			return 22149;
		case joaat("MP_Battle_Clothing_034_M"):
		case joaat("MP_Battle_Clothing_034_F"):
			return 22150;
		case joaat("MP_Battle_Clothing_035_M"):
		case joaat("MP_Battle_Clothing_035_F"):
			return 22151;
		case joaat("MP_Battle_Clothing_036_M"):
		case joaat("MP_Battle_Clothing_036_F"):
			return 22152;
		case joaat("MP_Battle_Clothing_037_M"):
		case joaat("MP_Battle_Clothing_037_F"):
			return 22153;
		case joaat("MP_Battle_Clothing_038_M"):
		case joaat("MP_Battle_Clothing_038_F"):
			return 22154;
		case joaat("MP_Battle_Clothing_039_M"):
		case joaat("MP_Battle_Clothing_039_F"):
			return 22155;
		case joaat("MP_Battle_Clothing_040_M"):
		case joaat("MP_Battle_Clothing_040_F"):
			return 22156;
		case joaat("MP_Battle_Clothing_041_M"):
		case joaat("MP_Battle_Clothing_041_F"):
			return 22157;
		case joaat("MP_Battle_Clothing_042_M"):
		case joaat("MP_Battle_Clothing_042_F"):
			return 22158;
		case joaat("MP_Battle_Clothing_043_M"):
		case joaat("MP_Battle_Clothing_043_F"):
			return 22159;
		case joaat("MP_Battle_Clothing_044_M"):
		case joaat("MP_Battle_Clothing_044_F"):
			return 22160;
		case joaat("MP_Battle_Clothing_045_M"):
		case joaat("MP_Battle_Clothing_045_F"):
			return 22161;
		case joaat("MP_Battle_Clothing_046_M"):
		case joaat("MP_Battle_Clothing_046_F"):
			return 22162;
		case joaat("MP_Battle_Clothing_047_M"):
		case joaat("MP_Battle_Clothing_047_F"):
			return 22163;
		case joaat("MP_Battle_Clothing_048_M"):
		case joaat("MP_Battle_Clothing_048_F"):
			return 22164;
		case joaat("MP_Battle_Clothing_049_M"):
		case joaat("MP_Battle_Clothing_049_F"):
			return 22165;
		case joaat("MP_Battle_Clothing_050_M"):
		case joaat("MP_Battle_Clothing_050_F"):
			return 22166;
		case joaat("MP_Battle_Clothing_051_M"):
		case joaat("MP_Battle_Clothing_051_F"):
			return 22167;
		case joaat("MP_Battle_Clothing_052_M"):
		case joaat("MP_Battle_Clothing_052_F"):
			return 22168;
		case joaat("MP_Battle_Clothing_053_M"):
		case joaat("MP_Battle_Clothing_053_F"):
			return 22169;
		case joaat("MP_Battle_Clothing_054_M"):
		case joaat("MP_Battle_Clothing_054_F"):
			return 22170;
		case joaat("MP_Battle_Clothing_055_M"):
		case joaat("MP_Battle_Clothing_055_F"):
			return 22171;
		case joaat("MP_Battle_Clothing_056_M"):
		case joaat("MP_Battle_Clothing_056_F"):
			return 22172;
		case joaat("MP_Battle_Clothing_057_M"):
		case joaat("MP_Battle_Clothing_057_F"):
			return 22173;
		case joaat("MP_Battle_Clothing_058_M"):
		case joaat("MP_Battle_Clothing_058_F"):
			return 22174;
		case joaat("MP_Battle_Clothing_059_M"):
		case joaat("MP_Battle_Clothing_059_F"):
			return 22175;
		case joaat("MP_Battle_Clothing_060_M"):
		case joaat("MP_Battle_Clothing_060_F"):
			return 22176;
		case joaat("MP_Battle_Clothing_061_M"):
		case joaat("MP_Battle_Clothing_061_F"):
			return 22177;
		case joaat("MP_Battle_Clothing_062_M"):
		case joaat("MP_Battle_Clothing_062_F"):
			return 22178;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_OUTFIT_14"):
		case joaat("DLC_MP_LTS_F_OUTFIT_14"):
			return 18099;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_M_BERD_2_0"):
		case joaat("DLC_MP_X17_M_LEGS_1_0"):
		case joaat("DLC_MP_X17_M_FEET_1_0"):
		case joaat("DLC_MP_X17_M_JBIB_5_0"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_F_BERD_2_0"):
		case joaat("DLC_MP_X17_F_LEGS_1_0"):
		case joaat("DLC_MP_X17_F_FEET_1_0"):
		case joaat("DLC_MP_X17_F_JBIB_5_0"):
			return 18121;
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_M_BERD_2_1"):
		case joaat("DLC_MP_X17_M_LEGS_1_1"):
		case joaat("DLC_MP_X17_M_FEET_1_1"):
		case joaat("DLC_MP_X17_M_JBIB_5_1"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_F_BERD_2_1"):
		case joaat("DLC_MP_X17_F_LEGS_1_1"):
		case joaat("DLC_MP_X17_F_FEET_1_1"):
		case joaat("DLC_MP_X17_F_JBIB_5_1"):
			return 18122;
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_M_BERD_2_2"):
		case joaat("DLC_MP_X17_M_LEGS_1_2"):
		case joaat("DLC_MP_X17_M_FEET_1_2"):
		case joaat("DLC_MP_X17_M_JBIB_5_2"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_F_BERD_2_2"):
		case joaat("DLC_MP_X17_F_LEGS_1_2"):
		case joaat("DLC_MP_X17_F_FEET_1_2"):
		case joaat("DLC_MP_X17_F_JBIB_5_2"):
			return 18123;
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_M_BERD_2_3"):
		case joaat("DLC_MP_X17_M_LEGS_1_3"):
		case joaat("DLC_MP_X17_M_FEET_1_3"):
		case joaat("DLC_MP_X17_M_JBIB_5_3"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_F_BERD_2_3"):
		case joaat("DLC_MP_X17_F_LEGS_1_3"):
		case joaat("DLC_MP_X17_F_FEET_1_3"):
		case joaat("DLC_MP_X17_F_JBIB_5_3"):
			return 18124;
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_M_BERD_2_4"):
		case joaat("DLC_MP_X17_M_LEGS_1_4"):
		case joaat("DLC_MP_X17_M_FEET_1_4"):
		case joaat("DLC_MP_X17_M_JBIB_5_4"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_F_BERD_2_4"):
		case joaat("DLC_MP_X17_F_LEGS_1_4"):
		case joaat("DLC_MP_X17_F_FEET_1_4"):
		case joaat("DLC_MP_X17_F_JBIB_5_4"):
			return 18125;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_BERD_10_0"):
		case joaat("DLC_MP_X17_F_BERD_10_0"):
			return 18134;
		case joaat("DLC_MP_X17_M_BERD_10_1"):
		case joaat("DLC_MP_X17_F_BERD_10_1"):
			return 18135;
		case joaat("DLC_MP_X17_M_BERD_10_2"):
		case joaat("DLC_MP_X17_F_BERD_10_2"):
			return 18136;
		case joaat("DLC_MP_X17_M_BERD_10_3"):
		case joaat("DLC_MP_X17_F_BERD_10_3"):
			return 18137;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
			return 15417;
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
			return 15418;
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
			return 15425;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
			return 15405;
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
			return 15393;
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
			return 15409;
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
			return 15396;
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
			return 15412;
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
			return 15403;
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
			return 15389;
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
			return 15398;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
			return 15400;
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
			return 15408;
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
			return 15411;
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
			return 15397;
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
			return 15413;
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
			return 15391;
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
			return 15388;
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
			return 15401;
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
			return 15394;
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
			return 15406;
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
			return 15395;
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
			return 15410;
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
			return 15407;
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
			return 15414;
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
			return 15415;
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
			return 15399;
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
			return 15404;
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
			return 15392;
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
			return 15390;
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
			return 15402;
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
			return 15416;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IE_M_BERD_7_0"):
		case joaat("DLC_MP_IE_F_BERD_7_0"):
			return 9443;
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Biker_Tee_022_M"):
		case joaat("MP_Biker_Tee_022_F"):
			return 9366;
		case joaat("MP_Biker_Tee_023_M"):
		case joaat("MP_Biker_Tee_023_F"):
			return 9367;
		case joaat("MP_Biker_Tee_024_M"):
		case joaat("MP_Biker_Tee_024_F"):
			return 9369;
		case joaat("MP_Biker_Tee_025_M"):
		case joaat("MP_Biker_Tee_025_F"):
			return 9368;
		case joaat("MP_Biker_Tee_047_M"):
		case joaat("MP_Biker_Tee_047_F"):
			return 9365;
		case joaat("MP_Biker_Tee_048_M"):
		case joaat("MP_Biker_Tee_048_F"):
			return 9364;
		case joaat("MP_Biker_Tee_049_M"):
		case joaat("MP_Biker_Tee_049_F"):
			return 9363;
		case joaat("MP_Biker_Tee_050_M"):
		case joaat("MP_Biker_Tee_050_F"):
			return 9362;
		case joaat("MP_Biker_Tee_051_M"):
		case joaat("MP_Biker_Tee_051_F"):
			return 9370;
		case joaat("MP_Biker_Tee_052_M"):
		case joaat("MP_Biker_Tee_052_F"):
			return 9371;
		case joaat("MP_Biker_Tee_053_M"):
		case joaat("MP_Biker_Tee_053_F"):
			return 9372;
		case joaat("MP_Biker_Tee_054_M"):
		case joaat("MP_Biker_Tee_054_F"):
			return 9373;
		case joaat("MP_Biker_Tee_055_M"):
		case joaat("MP_Biker_Tee_055_F"):
			return 9374;
		case joaat("MP_Biker_Award_000_M"):
		case joaat("MP_Biker_Award_000_F"):
			return 9384;
		case joaat("MP_Biker_Award_001_M"):
		case joaat("MP_Biker_Award_001_F"):
			return 9385;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_BIKER_M_DECL_0_0"):
		case joaat("DLC_MP_BIKER_F_DECL_0_0"):
			return 9375;
		case joaat("DLC_MP_BIKER_M_DECL_0_1"):
		case joaat("DLC_MP_BIKER_F_DECL_0_1"):
			return 9376;
		case joaat("DLC_MP_BIKER_M_DECL_0_2"):
		case joaat("DLC_MP_BIKER_F_DECL_0_2"):
			return 9377;
		case joaat("DLC_MP_BIKER_M_DECL_0_3"):
		case joaat("DLC_MP_BIKER_F_DECL_0_3"):
			return 9378;
		case joaat("DLC_MP_BIKER_M_DECL_0_4"):
		case joaat("DLC_MP_BIKER_F_DECL_0_4"):
			return 9379;
		case joaat("DLC_MP_BIKER_M_DECL_0_5"):
		case joaat("DLC_MP_BIKER_F_DECL_0_5"):
			return 9380;
		case joaat("DLC_MP_BIKER_M_DECL_0_6"):
		case joaat("DLC_MP_BIKER_F_DECL_0_6"):
			return 9381;
		case joaat("DLC_MP_BIKER_M_DECL_0_7"):
		case joaat("DLC_MP_BIKER_F_DECL_0_7"):
			return 9382;
		case joaat("DLC_MP_BIKER_M_DECL_0_8"):
		case joaat("DLC_MP_BIKER_F_DECL_0_8"):
			return 9383;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_0"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_0"):
			return 7595;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_1"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_1"):
			return 7596;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_2"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_2"):
			return 7597;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_3"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_3"):
			return 7599;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_4"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_4"):
			return 7600;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_0"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_0"):
			return 7598;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_1"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_1"):
			return 7601;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_EXEC_F_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_0"):
			return 7482;
		case joaat("DLC_MP_EXEC_F_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_1"):
			return 7483;
		case joaat("DLC_MP_EXEC_F_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_2"):
			return 7484;
		case joaat("DLC_MP_EXEC_F_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_3"):
			return 7485;
		case joaat("DLC_MP_EXEC_F_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_4"):
			return 7486;
		case joaat("DLC_MP_EXEC_F_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_5"):
			return 7487;
		case joaat("DLC_MP_EXEC_F_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_6"):
			return 7488;
		case joaat("DLC_MP_EXEC_F_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_7"):
			return 7489;
		case joaat("DLC_MP_EXEC_F_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_8"):
			return 7490;
		case joaat("DLC_MP_EXEC_F_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_9"):
			return 7491;
		case joaat("DLC_MP_EXEC_F_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_10"):
			return 7492;
		case joaat("DLC_MP_EXEC_F_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_11"):
			return 7493;
		case joaat("DLC_MP_EXEC_F_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_12"):
			return 7494;
		case joaat("DLC_MP_EXEC_F_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_13"):
			return 7495;
		case joaat("DLC_MP_EXEC_F_JBIB_16_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_0"):
			return 7515;
		case joaat("DLC_MP_EXEC_F_JBIB_16_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_1"):
			return 7516;
		case joaat("DLC_MP_EXEC_F_JBIB_16_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_2"):
			return 7517;
		case joaat("DLC_MP_EXEC_F_JBIB_16_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_3"):
			return 7518;
		case joaat("DLC_MP_EXEC_F_JBIB_16_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_4"):
			return 7519;
		case joaat("DLC_MP_EXEC_F_JBIB_16_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_5"):
			return 7520;
		case joaat("DLC_MP_EXEC_F_JBIB_16_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_6"):
			return 7521;
		case joaat("DLC_MP_EXEC_F_JBIB_16_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_7"):
			return 7522;
		case joaat("DLC_MP_EXEC_F_JBIB_16_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_8"):
			return 7523;
		case joaat("DLC_MP_EXEC_F_JBIB_16_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_9"):
			return 7524;
		case joaat("DLC_MP_EXEC_F_JBIB_16_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_10"):
			return 7525;
		case joaat("DLC_MP_EXEC_F_JBIB_16_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_11"):
			return 7526;
		case joaat("DLC_MP_EXEC_F_JBIB_16_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_12"):
			return 7527;
		case joaat("DLC_MP_EXEC_F_JBIB_16_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_13"):
			return 7528;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LOW_F_PHEAD_1_0"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_0"):
			return 4247;
		case joaat("DLC_MP_LOW_F_PHEAD_1_1"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_1"):
			return 4248;
		case joaat("DLC_MP_LOW_F_PHEAD_1_2"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_2"):
			return 4249;
		case joaat("DLC_MP_LOW_F_PHEAD_1_3"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_3"):
			return 4250;
		case joaat("DLC_MP_LOW_F_PHEAD_1_4"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_4"):
			return 4251;
		case joaat("DLC_MP_LOW_F_PHEAD_1_5"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_5"):
			return 4252;
		case joaat("DLC_MP_LOW_F_PHEAD_1_6"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_6"):
			return 4253;
		case joaat("DLC_MP_LOW_F_PHEAD_1_7"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_7"):
			return 4254;
		case joaat("DLC_MP_LOW_F_PHEAD_1_8"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_8"):
			return 4255;
		case joaat("DLC_MP_LOW_F_PHEAD_1_9"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_9"):
			return 4256;
		case joaat("DLC_MP_XMAS3_F_JBIB_1_0"):
		case joaat("DLC_MP_XMAS3_M_JBIB_1_0"):
			return 110;
		case joaat("DLC_MP_XMAS3_F_JBIB_1_1"):
		case joaat("DLC_MP_XMAS3_M_JBIB_1_1"):
			return 111;
		case joaat("DLC_MP_XMAS3_F_JBIB_1_2"):
		case joaat("DLC_MP_XMAS3_M_JBIB_1_2"):
			return 112;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_XMAS2_F_PHEAD_4_0"):
		case joaat("DLC_MP_XMAS2_F_PHEAD_5_0"):
		case joaat("DLC_MP_XMAS2_M_PHEAD_4_0"):
		case joaat("DLC_MP_XMAS2_M_PHEAD_5_0"):
			return 4333;
		case joaat("DLC_MP_XMAS2_F_PHEAD_4_3"):
		case joaat("DLC_MP_XMAS2_F_PHEAD_5_3"):
		case joaat("DLC_MP_XMAS2_M_PHEAD_4_3"):
		case joaat("DLC_MP_XMAS2_M_PHEAD_5_3"):
			return 4334;
		case joaat("DLC_MP_XMAS3_M_BERD_10_0"):
		case joaat("DLC_MP_XMAS3_F_BERD_10_0"):
			return 4335;
		case joaat("DLC_MP_XMAS2_M_BERD_1_0"):
		case joaat("DLC_MP_XMAS2_F_BERD_1_0"):
			return 3750;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IND_F_PHEAD_6_0"):
		case joaat("DLC_MP_IND_M_PHEAD_6_0"):
			return 3594;
		case joaat("DLC_MP_IND_F_PHEAD_6_1"):
		case joaat("DLC_MP_IND_M_PHEAD_6_1"):
			return 3595;
		case joaat("DLC_MP_IND_F_PHEAD_6_2"):
		case joaat("DLC_MP_IND_M_PHEAD_6_2"):
			return 3596;
		case joaat("DLC_MP_IND_F_PHEAD_6_3"):
		case joaat("DLC_MP_IND_M_PHEAD_6_3"):
			return 3597;
		case joaat("DLC_MP_IND_F_PHEAD_6_4"):
		case joaat("DLC_MP_IND_M_PHEAD_6_4"):
			return 3598;
		case joaat("DLC_MP_IND_F_PHEAD_6_5"):
		case joaat("DLC_MP_IND_M_PHEAD_6_5"):
			return 3599;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_BERD_2_0"):
		case joaat("DLC_MP_LTS_F_BERD_2_0"):
			return 3616;
		case joaat("FM_LTS_M_Tshirt_000"):
		case joaat("FM_LTS_F_Tshirt_000"):
			return 3615;
		case joaat("FM_Hip_M_Retro_010"):
		case joaat("FM_Hip_F_Retro_010"):
			return 9440;
		case joaat("FM_Hip_M_Retro_003"):
		case joaat("FM_Hip_F_Retro_003"):
			return 9430;
		case joaat("FM_Hip_M_Retro_000"):
		case joaat("FM_Hip_F_Retro_000"):
			return 9426;
		case joaat("FM_Hip_M_Retro_001"):
		case joaat("FM_Hip_F_Retro_001"):
			return 9427;
		case joaat("FM_Hip_M_Retro_002"):
		case joaat("FM_Hip_F_Retro_002"):
			return 9428;
		case joaat("FM_Hip_M_Retro_004"):
		case joaat("FM_Hip_F_Retro_004"):
			return 9431;
		case joaat("FM_Hip_M_Retro_005"):
		case joaat("FM_Hip_F_Retro_005"):
			return 9432;
		case joaat("FM_Hip_M_Retro_006"):
		case joaat("FM_Hip_F_Retro_006"):
			return 9433;
		case joaat("FM_Hip_M_Retro_007"):
		case joaat("FM_Hip_F_Retro_007"):
			return 9439;
		case joaat("FM_Hip_M_Retro_008"):
		case joaat("FM_Hip_F_Retro_008"):
			return 9434;
		case joaat("FM_Hip_M_Retro_009"):
		case joaat("FM_Hip_F_Retro_009"):
			return 9435;
		case joaat("FM_Hip_M_Retro_011"):
		case joaat("FM_Hip_F_Retro_011"):
			return 9436;
		case joaat("FM_Hip_M_Retro_012"):
		case joaat("FM_Hip_F_Retro_012"):
			return 9429;
		case joaat("FM_Hip_M_Retro_013"):
		case joaat("FM_Hip_F_Retro_013"):
			return 9437;
		case joaat("FM_Ind_M_Award_000"):
		case joaat("FM_Ind_F_Award_000"):
			return 3593;
		default:
	}
	return -1;
}

int func_529(int iParam0)//Position - 0x1C0DD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar1 = -99;
	iVar2 = -1;
	iVar0 = __LIB_20__.func_348(iParam0);
	if (iVar0 == -1)
	{
		return 1;
	}
	if (__LIB_6__.func_925())
	{
		iVar3 = __LIB_9__.func_285(iVar0);
		if (iVar3 != -1)
		{
			iVar1 = __LIB_6__.func_758(joaat("MP_F_Freemode_01"), iVar0, __LIB_9__.func_285(iVar0), 4);
		}
		iVar2 = __LIB_0__.func_240(iVar0, 4);
		if ((__LIB_0__.func_137(func_525(iVar0), -1) || (iVar2 != -1 && __LIB_37__.func_134(iVar2, -1))) || (iVar1 != -99 && __LIB_42__.func_781(joaat("MP_F_Freemode_01"), __LIB_9__.func_285(iVar0), iVar1)))
		{
			return 1;
		}
	}
	else
	{
		iVar4 = __LIB_9__.func_285(iVar0);
		if (iVar4 != -1)
		{
			iVar1 = __LIB_6__.func_758(joaat("MP_M_Freemode_01"), iVar0, __LIB_9__.func_285(iVar0), 3);
		}
		iVar2 = __LIB_0__.func_240(iVar0, 3);
		if ((__LIB_0__.func_137(func_525(iVar0), -1) || (iVar2 != -1 && __LIB_37__.func_134(iVar2, -1))) || (iVar1 != -99 && __LIB_42__.func_781(joaat("MP_M_Freemode_01"), __LIB_9__.func_285(iVar0), iVar1)))
		{
			return 1;
		}
	}
	return 0;
}

void func_695(int iParam0, int iParam1)//Position - 0x3E1ED
{
	int iVar0;
	if (*iParam0 > 0)
	{
		if (!__LIB_1__.func_145())
		{
			if (__LIB_19__.func_760(0))
			{
				if (!__LIB_18__.func_447(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(__LIB_0__.func_582()))
					{
						if (__LIB_1__.func_449() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * __LIB_1__.func_449());
							*iParam0 = (*iParam0 - iVar0);
						}
						__LIB_6__.func_976(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_700("GB_BCUT_TICK1" /* GXT: You paid ~a~ ~s~a $~1~ ~s~cut. */, __LIB_0__.func_582(), iVar0, 0, 0, 1);
						}
						__LIB_1__.func_447(20);
						__LIB_7__.func_208(__LIB_0__.func_582(), iVar0, 1);
					}
				}
			}
		}
	}
}

int func_700(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x3E33A
{
	int iVar0;
	struct<8> Var1;
	iVar0 = -1;
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_481(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_6__.func_957(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		__LIB_18__.func_263(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_706(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x3E467
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
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	bVar18 = __LIB_18__.func_447(1);
	bVar19 = false;
	if (iParam0 == 237 && !uParam1->f_22)
	{
		if (__LIB_1__.func_145())
		{
			iVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar17 = __LIB_0__.func_582();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1853348[iVar11 /*834*/].f_811.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1853348[iVar11 /*834*/].f_811.f_2;
			}
			else
			{
				iVar2 = __LIB_10__.func_935(Global_1853348[iVar11 /*834*/].f_811.f_4, Global_1853348[iVar11 /*834*/].f_811.f_1, *uParam3, Global_1853348[iVar11 /*834*/].f_811.f_2, Global_1853348[iVar11 /*834*/].f_811.f_3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = __LIB_10__.func_934(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER::PLAYER_ID())
				{
					__LIB_25__.func_828("TICK_TCUT" /* GXT: Tony's laundering cut: $~1~. */, iVar10, 0);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1944249.f_49 = *uParam3;
			if (iVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					__LIB_20__.func_397(iVar2);
				}
				if (*uParam3 > 0)
				{
					__LIB_22__.func_50(*uParam3);
				}
				iVar6 = __LIB_37__.func_135(&uVar5);
				iVar7 = Global_262145.f_24523 /* Tunable: 249027540 */;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_24522 /* Tunable: -540578960 */));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (Global_262145.f_32969 /* Tunable: 2010545334 */)
				{
					if (!__LIB_0__.func_137(32356, -1))
					{
						*iParam2 = (*iParam2 * Global_262145.f_32977 /* Tunable: -492941246 */);
						__LIB_0__.func_521(32356, 1, -1);
					}
				}
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						__LIB_1__.func_447(140);
					}
				}
				Global_2815059.f_5195.f_386 = *iParam2;
			}
			else
			{
				fVar16 = Global_262145.f_24489 /* Tunable: -1073212210 */;
				if (!bVar18)
				{
					fVar16 = Global_262145.f_24490 /* Tunable: -787828473 */;
				}
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_24491 /* Tunable: 390735097 */;
				if (!bVar18)
				{
					iVar4 = Global_262145.f_24492 /* Tunable: -1911840744 */;
				}
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
			}
		}
	}
	else if (uParam1->f_22)
	{
	}
}

void func_716(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x3EA7E
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
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	bVar17 = __LIB_18__.func_447(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (__LIB_1__.func_145())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = __LIB_0__.func_582();
		}
		if (iVar15 != -1)
		{
			iVar16 = __LIB_1__.func_292(iVar15);
			iVar0 = (__LIB_4__.func_473(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = __LIB_25__.func_997(iVar15, iVar16, iVar1, 0);
			if (uParam1->f_14 == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21554 /* Tunable: 1021567941 */));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21553 /* Tunable: 1865029244 */));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				__LIB_20__.func_401(iVar16, iVar2);
				if (__LIB_20__.func_400(iVar16) >= Global_262145.f_21100 /* Tunable: -376544159 */ || iVar2 >= Global_262145.f_21100 /* Tunable: -376544159 */)
				{
					__LIB_33__.func_82(5);
				}
				iVar6 = __LIB_37__.func_135(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_262145.f_21556 /* Tunable: -556480345 */);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_21555 /* Tunable: 1413334331 */));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (Global_262145.f_32970 /* Tunable: 1598011694 */)
				{
					if (!__LIB_0__.func_137(32357, -1))
					{
						*iParam2 = (*iParam2 * Global_262145.f_32978 /* Tunable: -278088930 */);
						__LIB_0__.func_521(32357, 1, -1);
					}
				}
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						__LIB_1__.func_447(108);
					}
					else
					{
						__LIB_1__.func_447(110);
					}
				}
				Global_2815059.f_5195.f_386 = *iParam2;
			}
			else
			{
				fVar14 = Global_262145.f_21557 /* Tunable: 426264033 */;
				if (!bVar17)
				{
					fVar14 = Global_262145.f_21558 /* Tunable: -1471492989 */;
				}
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21559 /* Tunable: -165611423 */;
				if (!bVar17)
				{
					iVar4 = Global_262145.f_21560 /* Tunable: 301168766 */;
				}
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_739(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)//Position - 0x40729
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	bVar0 = __LIB_0__.func_581(PLAYER::PLAYER_ID());
	if (iParam0 == 167)
	{
		if (__LIB_0__.func_581(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				__LIB_11__.func_25();
			}
			__LIB_11__.func_24();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (uParam2->f_5)
			{
				*iParam3 = (*iParam3 + __LIB_32__.func_639(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_183));
			}
			else
			{
				*uParam4 = uParam2->f_7;
				if (uParam2->f_8 > 0)
				{
					*uParam4 = (*uParam4 + uParam2->f_8);
				}
				iVar1 = __LIB_9__.func_858(*uParam4);
				iVar2 = (iVar1 * *uParam4);
				*iParam3 = (*iParam3 + iVar2);
				if (bVar0)
				{
					iVar4 = __LIB_37__.func_135(&uVar3);
					iVar5 = Global_262145.f_16656 /* Tunable: EXEC_CONTRABAND_HIGH_DEMAND_BONUS_CAP */;
					if (iVar4 > iVar5)
					{
						iVar4 = iVar5;
					}
					iVar6 = SYSTEM::CEIL((IntToFloat(iVar4) * Global_262145.f_15864 /* Tunable: EXEC_CONTRABAND_HIGH_DEMAND_BONUS_PERCENTAGE */));
					iVar7 = ((*iParam3 / 100) * iVar6);
					*iParam3 = (*iParam3 + iVar7);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar4 > 0 && uParam2->f_9 != 4)
					{
						__LIB_1__.func_447(44);
					}
				}
			}
			if (bVar0)
			{
				if (Global_262145.f_32963 /* Tunable: -1292749091 */)
				{
					if (!__LIB_0__.func_137(32350, -1))
					{
						*iParam3 = (*iParam3 * Global_262145.f_32971 /* Tunable: -364133001 */);
						__LIB_0__.func_521(32350, 1, -1);
					}
				}
				__LIB_20__.func_403(*iParam3);
				__LIB_11__.func_23();
				Global_2815059.f_5195.f_386 = *iParam3;
			}
			else
			{
				fVar8 = Global_262145.f_24493 /* Tunable: -623310017 */;
				iVar9 = SYSTEM::CEIL((IntToFloat(*iParam3) * fVar8));
				*iParam3 = iVar9;
				iVar10 = Global_262145.f_24494 /* Tunable: -223487172 */;
				if (*iParam3 > iVar10)
				{
					*iParam3 = iVar10;
				}
			}
		}
		if (bVar0)
		{
			__LIB_11__.func_22();
		}
	}
}

int func_929(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x49C6F
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__.func_160();
	iVar1 = __LIB_0__.func_160();
	iVar2 = __LIB_0__.func_160();
	return func_930(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_930(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x49CAA
{
	struct<80> Var0;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	__LIB_0__.func_975(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	__LIB_6__.func_896(&(Var0.f_69), 4);
	return func_469(&Var0);
}

void func_933()//Position - 0x49E2F
{
	func_1074();
	func_1030();
	func_1019();
	func_1008();
	func_955();
	func_950();
	func_937();
	func_934();
}

void func_934()//Position - 0x49E57
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iLocal_414 != Local_124.f_5)
	{
		if (Local_124.f_34 != -1)
		{
			if (func_467())
			{
				if (__LIB_33__.func_0(PLAYER::PLAYER_ID()) >= 1)
				{
					if (Local_124.f_5 > 0)
					{
						if (Local_124.f_37 > -1)
						{
							iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_124.f_37);
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
							{
								if (iVar0 != PLAYER::PLAYER_ID())
								{
									if (__LIB_13__.func_258(iVar0, 1))
									{
										iVar1 = __LIB_13__.func_746(iVar0);
										if (iVar1 > -1)
										{
											iVar2 = __LIB_6__.func_890(iVar1);
											__LIB_27__.func_579("GB_SGHT_TCKC" /* GXT: ~a~ collected a package. */, iVar0, iVar2, 0, 0, 0, 1, 0);
										}
									}
									else
									{
										__LIB_27__.func_579("GB_SGHT_TCKC" /* GXT: ~a~ collected a package. */, iVar0, 1, 0, 0, 0, 1, 0);
									}
								}
							}
						}
					}
				}
			}
			iLocal_414 = Local_124.f_5;
		}
	}
}

void func_937()//Position - 0x4A089
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!func_1102() && !func_421())
	{
		return;
	}
	if (BitTest(Local_137.f_0, 0))
	{
		return;
	}
	if (!func_467())
	{
		return;
	}
	iVar0 = __LIB_33__.func_0(PLAYER::PLAYER_ID());
	if (iVar0 < 3)
	{
		return;
	}
	if (__LIB_0__.func_649(&(Local_124.f_51)))
	{
		iVar1 = (func_11() - __LIB_1__.func_295(&(Local_124.f_51), 0, 0));
		iVar2 = (func_192() - Local_124.f_5);
		func_948(iVar1);
		if (iVar1 > 30000)
		{
			func_938(iVar2, "GB_SGHT_HUD" /* GXT: PACKAGES REMAINING */, iVar1, 1, "GB_WORK_END" /* GXT: VIP WORK END */);
		}
		else if (iVar1 > 0)
		{
			func_938(iVar2, "GB_SGHT_HUD" /* GXT: PACKAGES REMAINING */, iVar1, 6, "GB_WORK_END" /* GXT: VIP WORK END */);
		}
		else
		{
			func_938(iVar2, "GB_SGHT_HUD" /* GXT: PACKAGES REMAINING */, 0, 6, "GB_WORK_END" /* GXT: VIP WORK END */);
		}
	}
}

void func_938(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)//Position - 0x4A142
{
	char* sVar0;
	if (__LIB_6__.func_987(0) == 0)
	{
		return;
	}
	__LIB_1__.func_451();
	__LIB_6__.func_986(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	sVar0 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!__LIB_0__.func_786(sParam4))
	{
		sVar0 = sParam4;
	}
	__LIB_28__.func_420(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0, -1);
}

void func_948(int iParam0)//Position - 0x4A671
{
	if (BitTest(uLocal_127, 8))
	{
		func_204();
		return;
	}
	if (!BitTest(uLocal_127, 15))
	{
		if (iParam0 <= 35000)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("APT_PRE_COUNTDOWN_STOP"))
			{
				MISC::SET_BIT(&uLocal_127, 15);
				MISC::SET_BIT(&uLocal_127, 9);
			}
		}
	}
	if (BitTest(uLocal_127, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!BitTest(uLocal_127, 11))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
				{
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
					AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
					MISC::SET_BIT(&uLocal_127, 11);
				}
			}
			if (!BitTest(uLocal_127, 14))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S"))
				{
					MISC::SET_BIT(&uLocal_127, 14);
				}
			}
			if (BitTest(uLocal_127, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!BitTest(uLocal_127, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
						MISC::SET_BIT(&uLocal_127, 12);
					}
					if (iParam0 <= 500)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
							MISC::CLEAR_BIT(&uLocal_127, 9);
						}
					}
				}
			}
		}
	}
}

void func_950()//Position - 0x4A7B9
{
	int iVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_124.f_3))
		{
			if (!BitTest(Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 2))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_124.f_3), PLAYER::PLAYER_PED_ID()))
				{
					MISC::SET_BIT(&(Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 2);
					iLocal_412 = AUDIO::GET_SOUND_ID();
					if (__LIB_18__.func_447(1))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_412, "Pickup_Briefcase", "GTAO_Biker_Modes_Soundset", false);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_412, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", false);
					}
					Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5++;
				}
			}
		}
	}
	if (iLocal_129 != Local_124.f_5)
	{
		if (BitTest(Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 3))
		{
			MISC::CLEAR_BIT(&(Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 3);
		}
		if (BitTest(Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 2))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_124.f_3))
			{
				iVar0 = NETWORK::NET_TO_ENT(Local_124.f_3);
				ENTITY::DELETE_ENTITY(&iVar0);
				MISC::CLEAR_BIT(&(Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 2);
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_124.f_3);
			}
		}
		else
		{
			iLocal_129 = Local_124.f_5;
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_124.f_3))
	{
		if (__LIB_1__.func_145())
		{
			if (func_1102())
			{
				func_952();
			}
		}
		if (!BitTest(uLocal_126, 13))
		{
			if (!func_1102() || !__LIB_1__.func_145())
			{
				OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_124.f_3), true, true);
				MISC::SET_BIT(&uLocal_126, 13);
			}
		}
		if (!BitTest(uLocal_126, 3))
		{
			ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_124.f_3), 1200);
			MISC::SET_BIT(&uLocal_126, 3);
		}
	}
	else
	{
		if (BitTest(uLocal_126, 13))
		{
			MISC::CLEAR_BIT(&uLocal_126, 13);
		}
		if (BitTest(uLocal_126, 3))
		{
			MISC::CLEAR_BIT(&uLocal_126, 3);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_131))
		{
			HUD::REMOVE_BLIP(&iLocal_131);
		}
	}
	func_951();
}

void func_951()//Position - 0x4A974
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	if (!func_467())
	{
		return;
	}
	if (__LIB_33__.func_0(PLAYER::PLAYER_ID()) >= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_124.f_3) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_124.f_3), false))
		{
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(NETWORK::NET_TO_OBJ(Local_124.f_3)))
			{
				HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
				GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_124.f_3), true) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar0, iVar1, iVar2, 100, true, true, 2, false, 0, 0, false);
			}
		}
	}
}

void func_952()//Position - 0x4AA0D
{
	int iVar0;
	iVar0 = __LIB_33__.func_0(PLAYER::PLAYER_ID());
	if (iVar0 < 2)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_131))
		{
			HUD::REMOVE_BLIP(&iLocal_131);
		}
		return;
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_131))
	{
		return;
	}
	MISC::CLEAR_BIT(&uLocal_126, 11);
	iLocal_131 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_124.f_3));
	HUD::SET_BLIP_PRIORITY(iLocal_131, 12);
	HUD::SET_BLIP_SPRITE(iLocal_131, 459);
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_131, "GB_SGHT_BLP" /* GXT: Package */);
	HUD::SET_BLIP_ROUTE(iLocal_131, true);
	HUD::SET_BLIP_SCALE(iLocal_131, Global_262145.f_12827 /* Tunable: GANGBOSS_JOB_BLIP_SCALE */);
	if (func_1102())
	{
		__LIB_6__.func_919(&iLocal_131, 18);
	}
	HUD::SHOW_HEIGHT_ON_BLIP(iLocal_131, true);
	iLocal_413 = AUDIO::GET_SOUND_ID();
	if (__LIB_18__.func_447(1))
	{
		AUDIO::PLAY_SOUND_FRONTEND(iLocal_413, "Blip_Pickup", "GTAO_Biker_Modes_Soundset", false);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(iLocal_413, "Blip_Pickup", "GTAO_Magnate_Boss_Modes_Soundset", false);
	}
}

void func_955()//Position - 0x4AD6A
{
	if (NETWORK::PARTICIPANT_ID_TO_INT() != Local_124.f_33)
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_124.f_3))
	{
		if (iLocal_409 != -1)
		{
			iLocal_409 = -1;
		}
		if (BitTest(Global_4541229, 20))
		{
			MISC::CLEAR_BIT(&Global_4541229, 20);
		}
		return;
	}
	if (!BitTest(Global_4541229, 20))
	{
		if (!BitTest(Global_4541229, 21))
		{
			if (iLocal_409 < 0)
			{
				MISC::SET_BIT(&Global_4541229, 20);
			}
		}
	}
	if (iLocal_410 == -1)
	{
		iLocal_410 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	}
	if (iLocal_409 < 0)
	{
		if (BitTest(Global_4541229, 21))
		{
			MISC::CLEAR_BIT(&Global_4541229, 21);
			iLocal_409 = 0;
		}
	}
	func_956();
}

void func_956()//Position - 0x4AE07
{
	bool bVar0;
	if (!BitTest(uLocal_126, 4))
	{
		if (iLocal_409 >= 0)
		{
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				MISC::CLEAR_BIT(&Local_137, 0);
				iLocal_409 = -1;
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_24__.func_871(1);
				}
			}
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_1006(&Local_137);
		func_1005(&Local_137);
		MISC::CLEAR_BIT(&uLocal_126, 4);
	}
	switch (iLocal_409)
	{
		case 0:
			func_1004(1);
			HUD::REQUEST_ADDITIONAL_TEXT("HACK", 3);
			iLocal_409++;
			break;
		case 1:
			if (func_1003(1) && HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
			{
				MISC::SET_BIT(&Local_137, 0);
				MISC::SET_BIT(&(Local_137.f_1), 0);
				__LIB_18__.func_455();
				iLocal_411 = 10;
				if (iLocal_410 == 2)
				{
					Local_137.f_22 = 1;
				}
				else if (iLocal_410 == 1)
				{
					Local_137.f_22 = 0;
					iLocal_411 = 77;
				}
				else if (iLocal_410 == 0)
				{
					iLocal_411 = 50;
					Local_137.f_22 = 0;
				}
				__LIB_25__.func_112(PLAYER::PLAYER_ID(), 0, 66048, 0);
				iLocal_409++;
			}
			else
			{
				if (!func_1003(1))
				{
				}
				if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
				{
				}
			}
			break;
		case 2:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
			if (!__LIB_1__.func_302(0))
			{
				__LIB_9__.func_40(0);
			}
			if (iLocal_410 == 0)
			{
				func_972(&Local_137, 5, 5, iLocal_411, 10, 8, 10, 0, 1, 0, 1, 1, 0, 0, 60000, 1, 1, 0, 0, 0, 0, 0);
				if (func_971(&Local_137, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_410 == 1)
			{
				func_972(&Local_137, 5, 5, iLocal_411, 10, 8, 10, 0, 0, 1, 1, 1, 0, 0, 60000, 1, 1, 0, 0, 0, 0, 0);
				if (func_970(&Local_137, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_410 == 2)
			{
				func_972(&Local_137, 5, 5, iLocal_411, 10, 8, 10, 0, 0, 0, 1, 1, 0, 0, 60000, 1, 1, 0, 0, 0, 0, 0);
				if (func_957(&Local_137, 1))
				{
					bVar0 = true;
				}
			}
			if (BitTest(Local_137.f_1, 1))
			{
				MISC::CLEAR_BIT(&Local_137, 0);
				func_1006(&Local_137);
				__LIB_25__.func_112(PLAYER::PLAYER_ID(), 1, 0, 0);
				if (__LIB_1__.func_302(0))
				{
					__LIB_9__.func_32(0);
				}
				iLocal_409 = -1;
			}
			else if (bVar0)
			{
				MISC::CLEAR_BIT(&Local_137, 0);
				func_1006(&Local_137);
				Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4++;
				MISC::SET_BIT(&(Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 3);
				iLocal_410++;
				if (iLocal_410 >= 3)
				{
					iLocal_410 = 0;
				}
				if (__LIB_1__.func_302(0))
				{
					__LIB_9__.func_32(0);
				}
				__LIB_25__.func_112(PLAYER::PLAYER_ID(), 1, 0, 0);
				iLocal_409++;
			}
			break;
	}
}

int func_957(int* iParam0, bool bParam1)//Position - 0x4B0A6
{
	if (BitTest(*iParam0, 26))
	{
		if (bParam1)
		{
			func_958(iParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_958(int* iParam0, bool bParam1, bool bParam2)//Position - 0x4B0D0
{
	MISC::CLEAR_BIT(iParam0, 0);
	MISC::SET_BIT(iParam0, 12);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
	if (bParam2)
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true, true, false);
		}
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		MISC::SET_MINIGAME_IN_PROGRESS(false);
	}
	HUD::CLEAR_HELP(true);
	if (bParam1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	CAM::DESTROY_CAM(iLocal_72, false);
	__LIB_8__.func_770(0);
	__LIB_3__.func_692();
	GRAPHICS::FORCE_POSTFX_BULLET_IMPACTS_AFTER_HUD(false);
	func_960(iParam0, 1, 1, 0);
	__LIB_0__.func_686(0, 1, 1, 0);
}

void func_960(int* iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x4B183
{
	int iVar0;
	iVar0 = 0;
	if (!bParam3)
	{
		iVar0 = 4;
		while (iVar0 <= 0)
		{
			if (iLocal_68[iVar0] != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[iVar0]))
				{
					AUDIO::STOP_SOUND(iLocal_68[iVar0]);
					AUDIO::RELEASE_SOUND_ID(iLocal_68[iVar0]);
					iLocal_68[iVar0] = -1;
				}
			}
			iVar0++;
		}
		if (iParam0->f_20 > -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iParam0->f_20))
			{
				AUDIO::STOP_SOUND(iParam0->f_20);
				AUDIO::RELEASE_SOUND_ID(iParam0->f_20);
				iParam0->f_20 = -1;
			}
		}
	}
	MISC::CLEAR_BIT(iParam0, 25);
	MISC::CLEAR_BIT(iParam0, 5);
	if (iParam2 == 1)
	{
		MISC::CLEAR_BIT(iParam0, 12);
		MISC::CLEAR_BIT(iParam0, 9);
		MISC::CLEAR_BIT(iParam0, 18);
		MISC::CLEAR_BIT(&(iParam0->f_1), 2);
		MISC::CLEAR_BIT(iParam0, 27);
		MISC::CLEAR_BIT(iParam0, 28);
	}
	iParam0->f_1 = 0;
	iParam0->f_7 = iParam0->f_6;
	iLocal_75 = 0;
	if (bParam1)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_74);
	}
	MISC::CLEAR_BIT(iParam0, 29);
	__LIB_0__.func_686(0, 1, 1, 0);
}

int func_970(int* iParam0, bool bParam1)//Position - 0x4B4CF
{
	if (BitTest(*iParam0, 9))
	{
		if (bParam1)
		{
			func_958(iParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_971(int* iParam0, bool bParam1)//Position - 0x4B4F9
{
	if (BitTest(*iParam0, 18))
	{
		if (bParam1)
		{
			func_958(iParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_972(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21)//Position - 0x4B523
{
	if (BitTest(*iParam0, 0))
	{
		func_973(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, iParam14, bParam15, bParam16, bParam17, bParam18, bParam19, bParam20, bParam21);
	}
}

void func_973(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22)//Position - 0x4B564
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11[4];
	int iVar12;
	int iVar13;
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
	if (bParam17)
	{
		__LIB_0__.func_660(1);
	}
	__LIB_0__.func_480(4, -1);
	__LIB_8__.func_611(0);
	if (func_1003(bParam16))
	{
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			if (HUD::GET_PAUSE_MENU_STATE() == 0 && !HUD::IS_PAUSE_MENU_ACTIVE())
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_74, 255, 255, 255, 0, 0);
			}
		}
		if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
		{
			iParam0->f_290 = PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
			iParam0->f_291 = PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
			if (iParam0->f_292 != iParam0->f_290 || iParam0->f_293 != iParam0->f_291)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_CURSOR");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam0->f_290);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam0->f_291);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iParam0->f_292 = iParam0->f_290;
			iParam0->f_293 = iParam0->f_291;
		}
		else
		{
			__LIB_0__.func_471(&iVar2, &iVar3, &iVar4, &iVar5, 0);
			if (iVar4 < 0 || iVar5 < 0)
			{
			}
			fVar6 = ((SYSTEM::TO_FLOAT(iVar2) * 8f) * SYSTEM::TIMESTEP());
			fVar7 = ((SYSTEM::TO_FLOAT(iVar3) * 8f) * SYSTEM::TIMESTEP());
			if (iLocal_75 != 8)
			{
				if (((fVar6 > 1f || fVar7 > 1f) || fVar6 < -1f) || fVar7 < -1f)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "MOVE_CURSOR");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar6);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar7);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		}
		if (iLocal_75 > 4)
		{
			if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
			{
				iParam0->f_290 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
				iParam0->f_291 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
				if (__LIB_0__.func_52())
				{
					if (iParam0->f_292 != iParam0->f_290)
					{
						if (iParam0->f_290 < 0.49f)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						else if (iParam0->f_290 > 0.51f)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
				}
				iParam0->f_292 = iParam0->f_290;
				iParam0->f_293 = iParam0->f_291;
			}
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				fVar8 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 1 /*INPUT_LOOK_LR*/);
				fVar9 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 2 /*INPUT_LOOK_UD*/);
				bVar10 = false;
				fLocal_67 = (fLocal_67 + SYSTEM::TIMESTEP());
				fLocal_69 = (fLocal_69 + fVar8);
				fLocal_70 = (fLocal_70 + fVar9);
				fLocal_71 = (fLocal_71 + 1f);
				if (fLocal_67 > 0.15f)
				{
					fLocal_67 = 0f;
					fLocal_69 = (fLocal_69 / fLocal_71);
					fLocal_70 = (fLocal_70 / fLocal_71);
					if (MISC::ABSF(fLocal_70) < 0.2f)
					{
						if (fLocal_69 < 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						else if (fLocal_69 > 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
					if (MISC::ABSF(fLocal_69) < 0.2f)
					{
						if (fLocal_70 < 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						else if (fLocal_70 > 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
					if (bVar10)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
					}
					fLocal_69 = 0f;
					fLocal_70 = 0f;
					fLocal_71 = 0f;
				}
			}
			__LIB_0__.func_311(&(iVar11[0]), &(iVar11[1]), &(iVar11[2]), &(iVar11[3]), 0, 0);
			iVar12 = 0;
			while (iVar12 < iVar11)
			{
				if (MISC::ABSI(iVar11[iVar12]) > 0)
				{
					if (iVar12 == 0 || iVar12 == 1)
					{
						if (AUDIO::HAS_SOUND_FINISHED(iParam0->f_20))
						{
							if (iLocal_75 != 8)
							{
								AUDIO::PLAY_SOUND_FRONTEND(iParam0->f_20, "HACKING_MOVE_CURSOR", 0, true);
							}
						}
					}
				}
				iVar12++;
			}
			if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/))
			{
			}
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 32 /*INPUT_MOVE_UP_ONLY*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 33 /*INPUT_MOVE_DOWN_ONLY*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 34 /*INPUT_MOVE_LEFT_ONLY*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 35 /*INPUT_MOVE_RIGHT_ONLY*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		if (bParam12)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_SELECT");
				iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			}
			if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
			{
				iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_73);
				if (iVar0 == 6)
				{
					func_988(iParam0);
				}
			}
		}
		func_987();
	}
	if (iLocal_75 == 5 || iLocal_75 == 6)
	{
		if (iLocal_64)
		{
			__LIB_10__.func_884((iParam15 - (MISC::GET_GAME_TIMER() - iLocal_63)), &iLocal_60, &iLocal_61, &iLocal_62);
			if ((iLocal_60 >= 0 && iLocal_61 >= 0) && iLocal_62 >= 0)
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COUNTDOWN", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), -1f, -1f);
			}
			else
			{
				iLocal_60 = 0;
				iLocal_61 = 0;
				iLocal_62 = 0;
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COUNTDOWN", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), -1f, -1f);
			}
		}
	}
	if (iLocal_75 == 5)
	{
		if (__LIB_0__.func_479(&iLocal_76, (10000 / iParam4)))
		{
			if (iParam0->f_9 > 20f)
			{
				iParam0->f_9 = (iParam0->f_9 - 1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_SPEED", iParam0->f_9, -1f, -1f, -1f, -1f);
				iLocal_76 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if (iLocal_75 == 6)
	{
		if (__LIB_0__.func_479(&iLocal_76, (10000 / iParam4)))
		{
			if (iParam0->f_9 > 20f)
			{
				iParam0->f_9 = (iParam0->f_9 - 1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 0f, iParam0->f_9, -1f, -1f, -1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 1f, iParam0->f_9, -1f, -1f, -1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 2f, iParam0->f_9, -1f, -1f, -1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 3f, iParam0->f_9, -1f, -1f, -1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 4f, iParam0->f_9, -1f, -1f, -1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 5f, iParam0->f_9, -1f, -1f, -1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 6f, iParam0->f_9, -1f, -1f, -1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 7f, iParam0->f_9, -1f, -1f, -1f);
				iLocal_76 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if (BitTest(iParam0->f_1, 0))
	{
		if (iLocal_75 == 2)
		{
			iLocal_75 = 3;
		}
		else if (iLocal_75 == 3)
		{
			iVar0 = 81;
		}
		else if (iLocal_75 == 4)
		{
			if (bParam8)
			{
				iVar0 = 82;
			}
			else if (bParam9)
			{
				iVar0 = 83;
			}
		}
	}
	switch (iLocal_75)
	{
		case 0:
			if (!BitTest(*iParam0, 29))
			{
				func_984(iParam0, iParam14, bParam20);
			}
			func_1004(1);
			GRAPHICS::FORCE_POSTFX_BULLET_IMPACTS_AFTER_HUD(true);
			iParam0->f_20 = AUDIO::GET_SOUND_ID();
			iLocal_91 = 0;
			iLocal_92 = 0;
			iParam0->f_23 = 0;
			iLocal_75++;
			break;
		case 1:
			iVar13 = 0;
			while (iVar13 < 5)
			{
				iLocal_68[iVar13] = -1;
				iVar13++;
			}
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), SYSTEM::TO_FLOAT(iParam2), -1f, -1f, -1f);
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_SPEED", SYSTEM::TO_FLOAT(iParam3), -1f, -1f, -1f, -1f);
			if (bParam12 == 1)
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_74, "ADD_PROGRAM", SYSTEM::TO_FLOAT(7), SYSTEM::TO_FLOAT(6), -1f, -1f, -1f, "EXIT", 0, 0, 0, 0);
			}
			uParam5 = uParam5;
			uParam6 = uParam6;
			iParam0->f_7 = iParam1;
			iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
			MISC::CLEAR_BIT(iParam0, 1);
			fLocal_69 = 0f;
			fLocal_70 = 0f;
			fLocal_71 = 0f;
			iLocal_68[0] = AUDIO::GET_SOUND_ID();
			iLocal_68[1] = AUDIO::GET_SOUND_ID();
			__LIB_0__.func_686(1, 1, 1, 0);
			iLocal_65 = 0;
			if (iParam0->f_22)
			{
				iLocal_75 = 8;
			}
			else
			{
				iLocal_75++;
			}
			break;
		case 2:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					if (!__LIB_0__.func_1("H_EXIT_PROMPT"))
					{
						if (!__LIB_0__.func_1("HACKOBJ1"))
						{
							__LIB_0__.func_187("HACKOBJ1");
							iLocal_65 = 1;
						}
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_SELECT");
						iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_SELECT");
					iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				}
			}
			if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
			{
				iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_73);
				if (iVar0 == 4)
				{
					if (iParam7 == 1)
					{
						if (__LIB_0__.func_1("H_EXIT_PROMPT"))
						{
							HUD::CLEAR_HELP(true);
						}
					}
					iLocal_65 = 0;
					iLocal_75++;
				}
			}
			if (iLocal_78 == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_77) > 500)
				{
					if (((MISC::GET_GAME_TIMER() - iLocal_77) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
					{
						func_982(0, "");
					}
				}
			}
			if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
			{
				iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_73);
				if (iVar0 == 80)
				{
					if (iLocal_78 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
						func_982(1, "ACCESSD");
					}
				}
			}
			break;
		case 3:
			if (iParam7 == 1)
			{
				if (iLocal_75 == 3)
				{
					if (iLocal_65 == 0)
					{
						if (!__LIB_0__.func_1("HACKOBJ2"))
						{
							__LIB_0__.func_187("HACKOBJ2");
							iLocal_65 = 1;
						}
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
				{
					if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_SELECT");
							iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_SELECT");
						iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (iLocal_78 == 0)
				{
					if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_BACK");
							iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
							if (iParam7 == 1)
							{
								if (__LIB_0__.func_1("HACKOBJ2"))
								{
									HUD::CLEAR_HELP(true);
								}
								__LIB_0__.func_187("H_EXIT_PROMPT");
								iLocal_65 = 0;
								iLocal_75 = (iLocal_75 - 1);
							}
						}
					}
				}
			}
			if (iLocal_78 == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_77) > 500)
				{
					if (((MISC::GET_GAME_TIMER() - iLocal_77) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
					{
						func_982(0, "");
					}
				}
			}
			if (iLocal_78 == 0)
			{
				if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
				{
					iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_73);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_78 == 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
					func_982(1, "ACCESSD");
				}
			}
			if (iVar0 == 81)
			{
				iLocal_65 = 0;
				iLocal_75++;
			}
			break;
		case 4:
			if (iLocal_68[1] != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
				{
					AUDIO::STOP_SOUND(iLocal_68[1]);
					iLocal_68[1] = -1;
				}
			}
			if (iLocal_68[0] != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
				{
					AUDIO::STOP_SOUND(iLocal_68[0]);
					iLocal_68[0] = -1;
				}
			}
			if (iLocal_68[1] != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
				{
					AUDIO::STOP_SOUND(iLocal_68[1]);
					iLocal_68[1] = -1;
				}
			}
			if (iParam7 == 1)
			{
				if (iLocal_75 == 4)
				{
					if (bParam9 == 1)
					{
						if (!BitTest(*iParam0, 5))
						{
							if (iLocal_65 == 0)
							{
								if (!__LIB_0__.func_1("HACKOBJ5"))
								{
									__LIB_0__.func_187("HACKOBJ5");
									iLocal_65 = 1;
								}
							}
						}
					}
					else if (!BitTest(*iParam0, 18))
					{
						if (iLocal_65 == 0)
						{
							if (!__LIB_0__.func_1("HACKOBJ3"))
							{
								__LIB_0__.func_187("HACKOBJ3");
								iLocal_65 = 1;
							}
						}
					}
					else if (!BitTest(*iParam0, 5))
					{
						if (iLocal_65 == 0)
						{
							if (!__LIB_0__.func_1("HACKOBJ5"))
							{
								__LIB_0__.func_187("HACKOBJ5");
								iLocal_65 = 1;
							}
						}
					}
					else if (iLocal_65 == 1)
					{
						if (__LIB_0__.func_1("HACKOBJ5"))
						{
							HUD::CLEAR_HELP(true);
							iLocal_65 = 0;
						}
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (iLocal_78 == 0)
				{
					if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
					{
						if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
						{
							if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_SELECT");
								iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
							}
						}
						else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_SELECT");
							iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						}
					}
				}
			}
			if (iLocal_78 == 0)
			{
				if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_BACK");
						iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						if (iParam7 == 1)
						{
							if (__LIB_0__.func_1("HACKOBJ5") || __LIB_0__.func_1("HACKOBJ3"))
							{
								HUD::CLEAR_HELP(true);
							}
							iLocal_65 = 0;
							iLocal_75 = (iLocal_75 - 1);
						}
					}
				}
			}
			if (iLocal_78 == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_77) > 500)
				{
					if (((MISC::GET_GAME_TIMER() - iLocal_77) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
					{
						func_982(0, "");
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
				{
					iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_73);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_78 == 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
					func_982(1, "ACCESSD");
				}
			}
			if (iVar0 == 82)
			{
				if (bParam9 == 0)
				{
					if (bParam8 == 1)
					{
						iLocal_76 = MISC::GET_GAME_TIMER();
						iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
						if (!BitTest(iParam0->f_1, 0))
						{
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_SPEED", iParam0->f_9, -1f, -1f, -1f, -1f);
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "OPEN_APP", SYSTEM::TO_FLOAT(0), -1f, -1f, -1f, -1f);
						}
						else
						{
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_SPEED", iParam0->f_9, -1f, -1f, -1f, -1f);
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "RUN_PROGRAM", SYSTEM::TO_FLOAT(4), -1f, -1f, -1f, -1f);
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "OPEN_APP", SYSTEM::TO_FLOAT(0), -1f, -1f, -1f, -1f);
						}
						iLocal_63 = MISC::GET_GAME_TIMER();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[0] = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", 0, true);
						iLocal_75++;
					}
					else if (!BitTest(*iParam0, 18))
					{
						iLocal_76 = MISC::GET_GAME_TIMER();
						iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_SPEED", iParam0->f_9, -1f, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "OPEN_APP", SYSTEM::TO_FLOAT(0), -1f, -1f, -1f, -1f);
						iLocal_63 = MISC::GET_GAME_TIMER();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[0] = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", 0, true);
						iLocal_75++;
					}
					else
					{
						if (iLocal_78 == 1)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_77) > 500)
							{
								if (((MISC::GET_GAME_TIMER() - iLocal_77) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
								{
									func_982(0, "");
								}
							}
						}
						if (iLocal_78 == 0)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
							if (bParam13 && BitTest(*iParam0, 9))
							{
								func_982(1, "TRYDL");
							}
							else
							{
								func_982(1, "TRYBRUTE");
							}
						}
					}
				}
				else
				{
					if (iLocal_78 == 1)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_77) > 500)
						{
							if (((MISC::GET_GAME_TIMER() - iLocal_77) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
							{
								func_982(0, "");
							}
						}
					}
					if (iLocal_78 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
						if (bParam13 && BitTest(*iParam0, 9))
						{
							func_982(1, "TRYDL");
						}
						else
						{
							func_982(1, "TRYBRUTE");
						}
					}
				}
			}
			if (iVar0 == 83)
			{
				if (bParam8 == 0)
				{
					if (bParam9 == 1)
					{
						iLocal_76 = MISC::GET_GAME_TIMER();
						iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_SPEED", SYSTEM::TO_FLOAT(iParam3), -1f, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 0f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 1f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 2f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 3f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 4f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 5f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 6f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 7f, iParam0->f_9, -1f, -1f, -1f);
						if (!BitTest(iParam0->f_1, 0))
						{
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "OPEN_APP", SYSTEM::TO_FLOAT(1), -1f, -1f, -1f, -1f);
						}
						else
						{
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "RUN_PROGRAM", SYSTEM::TO_FLOAT(4), -1f, -1f, -1f, -1f);
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "OPEN_APP", SYSTEM::TO_FLOAT(1), -1f, -1f, -1f, -1f);
						}
						iLocal_63 = MISC::GET_GAME_TIMER();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[1] = AUDIO::GET_SOUND_ID();
						if (bParam10)
						{
							__LIB_10__.func_883(iParam0, bParam18, bParam22);
						}
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(iLocal_74, "SET_ROULETTE_WORD", &(iParam0->f_14), 0, 0, 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, true);
						iLocal_75 = 6;
					}
					else if ((!bParam11 || BitTest(*iParam0, 18)) && !BitTest(*iParam0, 9))
					{
						iLocal_76 = MISC::GET_GAME_TIMER();
						iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_SPEED", SYSTEM::TO_FLOAT(iParam3), -1f, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 0f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 1f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 2f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 3f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 4f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 5f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 6f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_COLUMN_SPEED", 7f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "OPEN_APP", SYSTEM::TO_FLOAT(1), -1f, -1f, -1f, -1f);
						iLocal_63 = MISC::GET_GAME_TIMER();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[1] = AUDIO::GET_SOUND_ID();
						if (bParam10)
						{
							__LIB_10__.func_883(iParam0, bParam18, bParam22);
						}
						if (__LIB_0__.func_1("HACKOBJ5"))
						{
							HUD::CLEAR_HELP(true);
						}
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(iLocal_74, "SET_ROULETTE_WORD", &(iParam0->f_14), 0, 0, 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, true);
						iLocal_75 = 6;
					}
					else
					{
						if (iLocal_78 == 1)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_77) > 500)
							{
								if (((MISC::GET_GAME_TIMER() - iLocal_77) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
								{
									func_982(0, "");
								}
							}
						}
						if (iLocal_78 == 0)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
							if (bParam13 && BitTest(*iParam0, 18))
							{
								func_982(1, "TRYDL");
							}
							else
							{
								func_982(1, "TRYHACK");
							}
						}
					}
				}
				else
				{
					if (iLocal_78 == 1)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_77) > 500)
						{
							if (((MISC::GET_GAME_TIMER() - iLocal_77) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
							{
								func_982(0, "");
							}
						}
					}
					if (iLocal_78 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
						if (bParam13 && BitTest(*iParam0, 18))
						{
							func_982(1, "TRYDL");
						}
						else
						{
							func_982(1, "TRYHACK");
						}
					}
				}
			}
			if (bParam13)
			{
				if (BitTest(*iParam0, 18))
				{
					if (iVar0 == 93)
					{
						if (BitTest(*iParam0, 18) && BitTest(*iParam0, 9))
						{
							if (!BitTest(*iParam0, 28))
							{
								MISC::SET_BIT(iParam0, 28);
								iLocal_75 = 8;
							}
						}
						else
						{
							if (iLocal_78 == 1)
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_77) > 500)
								{
									if (((MISC::GET_GAME_TIMER() - iLocal_77) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
									{
										func_982(0, "");
									}
								}
							}
							if (iLocal_78 == 0)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
								if (BitTest(*iParam0, 18))
								{
									func_982(1, "TRYBRUTE");
								}
								else
								{
									func_982(1, "TRYHACK");
								}
							}
						}
					}
				}
			}
			break;
		case 5:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					__LIB_0__.func_151("H_USE_PC6", -1);
					iLocal_65 = 1;
				}
				else if (iLocal_66 == 1)
				{
					__LIB_0__.func_151("H_USE_PC7", -1);
					iLocal_66 = 0;
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!BitTest(iParam0->f_1, 1))
				{
					if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
						{
							iParam0->f_7 = iParam1;
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_74, "CLOSE_APP");
							if (iLocal_68[1] != -1)
							{
								if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
								{
									AUDIO::STOP_SOUND(iLocal_68[1]);
									iLocal_68[1] = -1;
								}
							}
							if (iLocal_68[0] != -1)
							{
								if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
								{
									AUDIO::STOP_SOUND(iLocal_68[0]);
									iLocal_68[0] = -1;
								}
							}
							if (!BitTest(iParam0->f_1, 0))
							{
								iLocal_75 = 4;
							}
							else
							{
								MISC::SET_BIT(&(iParam0->f_1), 1);
							}
						}
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
				{
					if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_SELECT");
							iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_SELECT");
						iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					}
				}
				if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
				{
					iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_73);
				}
			}
			if (iVar0 == 85)
			{
				if (iParam0->f_7 > 1)
				{
					iParam0->f_7 = (iParam0->f_7 - 1);
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam0->f_7), -1f, -1f, -1f, -1f);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
				}
				else
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
					{
						AUDIO::STOP_SOUND(iLocal_68[0]);
					}
					MISC::SET_BIT(iParam0, 25);
					iLocal_64 = 0;
					iLocal_66 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_FAILURE", 0, true);
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_74, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 90)
			{
				iParam0->f_7 = iParam1;
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
				iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
				iLocal_63 = MISC::GET_GAME_TIMER();
				iLocal_68[0] = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", 0, true);
				MISC::SET_BIT(iParam0, 25);
				iLocal_64 = 1;
			}
			if (iVar0 == 91)
			{
				iParam0->f_7 = iParam1;
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_74, "CLOSE_APP");
				if (iLocal_68[0] != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
					{
						AUDIO::STOP_SOUND(iLocal_68[0]);
						iLocal_68[0] = -1;
					}
				}
				MISC::SET_BIT(iParam0, 25);
				iLocal_75 = 4;
			}
			if (iLocal_64 == 1)
			{
				iVar1 = (60000 - (MISC::GET_GAME_TIMER() - iLocal_63));
				if (iVar1 < 1)
				{
					MISC::SET_BIT(iParam0, 25);
					iParam0->f_7 = iParam1;
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
					iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
					iLocal_63 = MISC::GET_GAME_TIMER();
					iLocal_64 = 0;
					iLocal_66 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_FAILURE", 0, true);
					if (iLocal_68[0] != -1)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
						{
							AUDIO::STOP_SOUND(iLocal_68[0]);
							iLocal_68[0] = -1;
						}
					}
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_74, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 84)
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_74, "SET_IP_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINIP", 0, 0, 0, 0);
				iLocal_76 = MISC::GET_GAME_TIMER();
				MISC::SET_BIT(iParam0, 18);
				iLocal_64 = 0;
				iLocal_65 = 0;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_GOOD", 0, true);
				if (iLocal_68[0] != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
					{
						AUDIO::STOP_SOUND(iLocal_68[0]);
						iLocal_68[0] = -1;
					}
				}
				iLocal_75 = 7;
			}
			break;
		case 6:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					__LIB_0__.func_151("H_USE_PC8", -1);
					iLocal_65 = 1;
				}
				else if (iLocal_66 == 1)
				{
					__LIB_0__.func_151("H_USE_PC9", -1);
					iLocal_66 = 0;
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
				{
					if (!BitTest(iParam0->f_1, 1))
					{
						if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
						{
							if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
							{
								iParam0->f_7 = iParam1;
								GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_74, "CLOSE_APP");
								if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
								{
									AUDIO::STOP_SOUND(iLocal_68[0]);
								}
								if (!BitTest(iParam0->f_1, 0))
								{
									iLocal_75 = 4;
								}
								else
								{
									MISC::SET_BIT(&(iParam0->f_1), 1);
								}
							}
						}
						else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 214 /*INPUT_FRONTEND_DELETE*/) || (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) && bParam22))
						{
							iParam0->f_7 = iParam1;
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_74, "CLOSE_APP");
							if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
							{
								AUDIO::STOP_SOUND(iLocal_68[0]);
							}
							if (!BitTest(iParam0->f_1, 0))
							{
								iLocal_75 = 4;
							}
							else
							{
								MISC::SET_BIT(&(iParam0->f_1), 1);
							}
						}
					}
				}
				if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
				{
					if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_SELECT");
							iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_SELECT");
						iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					}
				}
				if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
				{
					iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_73);
				}
			}
			if (iVar0 == 86)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_GOOD", 0, true);
			}
			if (iVar0 == 92)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK", 0, true);
			}
			if (BitTest(*iParam0, 23))
			{
				if (__LIB_0__.func_479(&(iParam0->f_10), 500))
				{
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_74, "RESET_ROULETTE");
					MISC::CLEAR_BIT(iParam0, 23);
				}
			}
			if (iVar0 == 87)
			{
				if (iParam0->f_7 > 1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_74, "STOP_ROULETTE");
					iParam0->f_10 = MISC::GET_GAME_TIMER();
					MISC::SET_BIT(iParam0, 23);
					MISC::SET_BIT(iParam0, 31);
					if (__LIB_0__.func_3() == 0)
					{
						iParam0->f_7 = (iParam0->f_7 - 1);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam0->f_7), -1f, -1f, -1f, -1f);
					}
				}
				else
				{
					MISC::SET_BIT(iParam0, 25);
					MISC::SET_BIT(iParam0, 31);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_FAILURE", 0, true);
					iParam0->f_7 = iParam1;
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
					iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
					iLocal_63 = MISC::GET_GAME_TIMER();
					if (iLocal_68[1] != -1)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
						{
							AUDIO::STOP_SOUND(iLocal_68[1]);
							iLocal_68[1] = -1;
						}
					}
					if (__LIB_0__.func_3() == 0)
					{
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_74, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
					}
				}
			}
			if (iLocal_64 == 1)
			{
				iVar1 = (60000 - (MISC::GET_GAME_TIMER() - iLocal_63));
				if (iVar1 < 1)
				{
					iParam0->f_7 = iParam1;
					MISC::SET_BIT(iParam0, 25);
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
					iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
					iLocal_63 = MISC::GET_GAME_TIMER();
					iLocal_64 = 0;
					iLocal_66 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_FAILURE", 0, true);
					HUD::CLEAR_HELP(true);
					if (iLocal_68[1] != -1)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
						{
							AUDIO::STOP_SOUND(iLocal_68[1]);
							iLocal_68[1] = -1;
						}
					}
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_74, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 88)
			{
				iParam0->f_7 = iParam1;
				MISC::SET_BIT(iParam0, 25);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
				iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
				iLocal_63 = MISC::GET_GAME_TIMER();
				iLocal_68[1] = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, true);
				iLocal_64 = 1;
			}
			if (iVar0 == 89)
			{
				iParam0->f_7 = iParam1;
				MISC::SET_BIT(iParam0, 25);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_74, "CLOSE_APP");
				if (iLocal_68[1] != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
					{
						AUDIO::STOP_SOUND(iLocal_68[1]);
						iLocal_68[1] = -1;
					}
				}
				iLocal_75 = 4;
			}
			if (iVar0 == 86)
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_74, "SET_ROULETTE_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINBRUTE", 0, 0, 0, 0);
				iLocal_76 = MISC::GET_GAME_TIMER();
				MISC::SET_BIT(iParam0, 9);
				if (bParam19)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hack_Success", "DLC_GR_Steal_Railguns_Sounds", true);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_SUCCESS", 0, true);
				}
				if (iLocal_68[1] != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
					{
						AUDIO::STOP_SOUND(iLocal_68[1]);
						iLocal_68[1] = -1;
					}
				}
				iLocal_75 = 7;
			}
			break;
		case 7:
			if (iParam7 == 1)
			{
				if (BitTest(*iParam0, 9) && BitTest(*iParam0, 18))
				{
					if (iLocal_91 == 0)
					{
						if (!__LIB_0__.func_1("HACKOBJ7"))
						{
							__LIB_0__.func_187("HACKOBJ7");
							iLocal_91 = 1;
						}
					}
				}
				if (((__LIB_0__.func_1("H_USE_PC6") || __LIB_0__.func_1("H_USE_PC7")) || __LIB_0__.func_1("H_USE_PC8")) || __LIB_0__.func_1("H_USE_PC9"))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (((BitTest(*iParam0, 9) && BitTest(*iParam0, 18)) && (!bParam13 || (bParam13 && BitTest(*iParam0, 28)))) && (!bParam21 || (bParam21 && BitTest(iParam0->f_1, 2))))
			{
				if (__LIB_0__.func_1("HACKOBJ7"))
				{
					HUD::CLEAR_HELP(true);
				}
				if (!iLocal_92)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "unlocked_bleep", PLAYER::PLAYER_PED_ID(), "HACKING_DOOR_UNLOCK_SOUNDS", false, 0);
					iLocal_92 = 1;
				}
				if (__LIB_0__.func_479(&iLocal_76, 3000))
				{
					MISC::CLEAR_BIT(iParam0, 0);
					MISC::SET_BIT(iParam0, 12);
					GRAPHICS::FORCE_POSTFX_BULLET_IMPACTS_AFTER_HUD(false);
				}
			}
			else if (bParam21 && BitTest(*iParam0, 9))
			{
				if (!BitTest(iParam0->f_1, 2))
				{
					MISC::SET_BIT(&(iParam0->f_1), 2);
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_74, "SHOW_MAP");
				}
				if (__LIB_0__.func_479(&iLocal_76, 7000))
				{
					MISC::CLEAR_BIT(iParam0, 0);
					MISC::SET_BIT(iParam0, 12);
					GRAPHICS::FORCE_POSTFX_BULLET_IMPACTS_AFTER_HUD(false);
				}
			}
			else
			{
				if (((bParam13 && !BitTest(*iParam0, 27)) && BitTest(*iParam0, 9)) && BitTest(*iParam0, 18))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "OPEN_DOWNLOAD");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					MISC::SET_BIT(iParam0, 27);
				}
				if (__LIB_0__.func_479(&iLocal_76, 2000))
				{
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_74, "CLOSE_APP");
					iLocal_75 = 4;
				}
			}
			break;
		case 8:
			func_974(iParam0);
			break;
	}
}

void func_974(int* iParam0)//Position - 0x4D674
{
	bool bVar0;
	bVar0 = false;
	if (iParam0->f_23 > 0)
	{
		if (BitTest(*iParam0, 22))
		{
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("hackingNG"))
			{
				if (!HUD::IS_PAUSE_MENU_ACTIVE())
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHMain", Local_79.f_0, Local_79.f_1, 0.731f, 1.306f, 0f, 255, 255, 255, 255, false, 0);
				}
			}
		}
	}
	if (((((((Local_82[0 /*4*/] == 1 && Local_82[1 /*4*/] == 1) && Local_82[2 /*4*/] == 1) && Local_82[3 /*4*/] == 1) && Local_82[4 /*4*/] == 1) && Local_82[5 /*4*/] == 1) && Local_82[6 /*4*/] == 1) && Local_82[7 /*4*/] == 1)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hack_Success", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
		if (__LIB_0__.func_1("H1_HNG"))
		{
			HUD::CLEAR_HELP(true);
		}
		if (MISC::IS_PC_VERSION())
		{
			if (__LIB_0__.func_1("H1_HNG_KM"))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		MISC::SET_BIT(iParam0, 26);
	}
	else if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (!__LIB_0__.func_1("H1_HNG_KM"))
		{
			__LIB_0__.func_187("H1_HNG_KM");
		}
	}
	else if (!__LIB_0__.func_1("H1_HNG"))
	{
		__LIB_0__.func_187("H1_HNG");
	}
	switch (iParam0->f_23)
	{
		case 0:
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("hackingNG", false);
			MISC::CLEAR_BIT(iParam0, 22);
			func_979();
			iLocal_88 = MISC::GET_GAME_TIMER();
			Local_81.f_0 = 0;
			MISC::CLEAR_BIT(&uLocal_90, 0);
			MISC::CLEAR_BIT(&uLocal_90, 1);
			MISC::CLEAR_BIT(&uLocal_90, 2);
			MISC::CLEAR_BIT(&uLocal_90, 3);
			MISC::CLEAR_BIT(&uLocal_90, 4);
			MISC::CLEAR_BIT(&uLocal_90, 5);
			MISC::CLEAR_BIT(&uLocal_90, 6);
			MISC::CLEAR_BIT(&uLocal_90, 7);
			iParam0->f_23++;
			break;
		case 1:
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("hackingNG"))
			{
				MISC::SET_BIT(iParam0, 22);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_CURSOR_VISIBILITY");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iParam0->f_23++;
			}
			break;
		case 2:
			bVar0 = false;
			while (bVar0 <= 7)
			{
				if (Local_82[bVar0 /*4*/].f_3 == 1)
				{
					if (Local_82[bVar0 /*4*/].f_2 < 1f)
					{
						Local_82[bVar0 /*4*/].f_2 = (Local_82[bVar0 /*4*/].f_2 + ((Local_82[bVar0 /*4*/].f_1 * SYSTEM::TIMESTEP()) * fLocal_87));
					}
					else
					{
						Local_82[bVar0 /*4*/].f_3 = 0;
					}
				}
				else if (Local_82[bVar0 /*4*/].f_2 > 0f)
				{
					Local_82[bVar0 /*4*/].f_2 = (Local_82[bVar0 /*4*/].f_2 - ((Local_82[bVar0 /*4*/].f_1 * SYSTEM::TIMESTEP()) * fLocal_87));
				}
				else
				{
					Local_82[bVar0 /*4*/].f_3 = 1;
				}
				if (Local_82[bVar0 /*4*/] == 0)
				{
					Local_80[bVar0 /*2*/].f_1 = __LIB_4__.func_223(0.744f, 0.4f, Local_82[bVar0 /*4*/].f_2);
				}
				bVar0++;
			}
			bVar0 = false;
			while (bVar0 <= 7)
			{
				if (Local_82[bVar0 /*4*/] == 0)
				{
					if (Local_81.f_0 == bVar0)
					{
						if (!BitTest(uLocal_90, bVar0))
						{
							iLocal_89[bVar0] = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_89[bVar0], "Pin_Movement", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
							MISC::SET_BIT(&uLocal_90, bVar0);
						}
						else
						{
							if (Local_82[bVar0 /*4*/].f_2 >= 0.5f)
							{
								fLocal_83 = (2f * (1f - Local_82[bVar0 /*4*/].f_2));
							}
							else
							{
								fLocal_83 = (2f * Local_82[bVar0 /*4*/].f_2);
							}
							AUDIO::SET_VARIABLE_ON_SOUND(iLocal_89[bVar0], "PinMovementY", fLocal_83);
						}
					}
				}
				else if (BitTest(uLocal_90, bVar0))
				{
					AUDIO::STOP_SOUND(iLocal_89[bVar0]);
					AUDIO::RELEASE_SOUND_ID(iLocal_89[bVar0]);
					MISC::CLEAR_BIT(&uLocal_90, bVar0);
					iLocal_89[bVar0] = -1;
				}
				bVar0++;
			}
			if (func_976(Local_81.f_0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Pin_Centred", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
			{
				if (__LIB_0__.func_479(&iLocal_88, 300))
				{
					if (func_975(Local_81.f_0))
					{
						Local_82[Local_81.f_0 /*4*/] = 1;
						Local_80[Local_81.f_0 /*2*/].f_1 = 0.572f;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Pin_Good", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
						if (Local_81.f_0 != 7)
						{
							Local_81.f_0++;
						}
					}
					else
					{
						if (Local_81.f_0 != 0)
						{
							if (BitTest(uLocal_90, Local_81.f_0))
							{
								AUDIO::STOP_SOUND(iLocal_89[Local_81.f_0]);
								AUDIO::RELEASE_SOUND_ID(iLocal_89[Local_81.f_0]);
								MISC::CLEAR_BIT(&uLocal_90, Local_81.f_0);
								iLocal_89[Local_81.f_0] = -1;
							}
							Local_82[(Local_81.f_0 - 1) /*4*/] = 0;
							Local_81.f_0 = (Local_81.f_0 - 1);
						}
						if (!HUD::IS_PAUSE_MENU_ACTIVE())
						{
							GRAPHICS::DRAW_RECT(0.5f, 0.5f, 4f, 4f, 255, 0, 0, 100, false);
						}
						iLocal_88 = MISC::GET_GAME_TIMER();
						PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 100, 100);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Pin_Bad", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
						Local_81.f_1 = 1;
					}
				}
				else
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						GRAPHICS::DRAW_SPRITE("hackingNG", "DHMain", Local_79.f_0, Local_79.f_1, 0.731f, 1.306f, 0f, 255, 0, 0, 100, false, 0);
					}
					iLocal_88 = MISC::GET_GAME_TIMER();
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 100, 100);
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (Local_81.f_0 == 0)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_80[0 /*2*/], Local_80[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_80[0 /*2*/], Local_80[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false, 0);
				}
				if (Local_81.f_0 == 1)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_80[1 /*2*/], Local_80[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_80[1 /*2*/], Local_80[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false, 0);
				}
				if (Local_81.f_0 == 2)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_80[2 /*2*/], Local_80[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_80[2 /*2*/], Local_80[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false, 0);
				}
				if (Local_81.f_0 == 3)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_80[3 /*2*/], Local_80[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_80[3 /*2*/], Local_80[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false, 0);
				}
				if (Local_81.f_0 == 4)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_80[4 /*2*/], Local_80[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_80[4 /*2*/], Local_80[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false, 0);
				}
				if (Local_81.f_0 == 5)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_80[5 /*2*/], Local_80[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_80[5 /*2*/], Local_80[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false, 0);
				}
				if (Local_81.f_0 == 6)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_80[6 /*2*/], Local_80[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_80[6 /*2*/], Local_80[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false, 0);
				}
				if (Local_81.f_0 == 7)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_80[7 /*2*/], Local_80[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_80[7 /*2*/], Local_80[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false, 0);
				}
				if (BitTest(iParam0->f_1, 0))
				{
					if (!BitTest(iParam0->f_1, 1))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
						{
							MISC::SET_BIT(&(iParam0->f_1), 1);
							HUD::CLEAR_HELP(true);
						}
					}
				}
			}
			break;
	}
}

int func_975(int iParam0)//Position - 0x4DE28
{
	if (Local_80[iParam0 /*2*/].f_1 >= fLocal_85 && Local_80[iParam0 /*2*/].f_1 <= fLocal_84)
	{
		return 1;
	}
	return 0;
}

int func_976(int iParam0)//Position - 0x4DE53
{
	if (Local_80[iParam0 /*2*/].f_1 == 0.5f)
	{
		return 1;
	}
	return 0;
}

void func_979()//Position - 0x4DEB0
{
	fLocal_84 = 0.6f;
	fLocal_85 = 0.53f;
	Local_82[0 /*4*/].f_1 = (0.02f * fLocal_86);
	Local_82[1 /*4*/].f_1 = (0.025f * fLocal_86);
	Local_82[2 /*4*/].f_1 = (0.03f * fLocal_86);
	Local_82[3 /*4*/].f_1 = (0.035f * fLocal_86);
	Local_82[4 /*4*/].f_1 = (0.04f * fLocal_86);
	Local_82[5 /*4*/].f_1 = (0.045f * fLocal_86);
	Local_82[6 /*4*/].f_1 = (0.048f * fLocal_86);
	Local_82[7 /*4*/].f_1 = (0.05f * fLocal_86);
	Local_82[0 /*4*/] = 0;
	Local_82[1 /*4*/] = 0;
	Local_82[2 /*4*/] = 0;
	Local_82[3 /*4*/] = 0;
	Local_82[4 /*4*/] = 0;
	Local_82[5 /*4*/] = 0;
	Local_82[6 /*4*/] = 0;
	Local_82[7 /*4*/] = 0;
	Local_79.f_0 = 0.5f;
	Local_79.f_1 = 0.5f;
	Local_80[0 /*2*/] = 0.35f;
	Local_80[0 /*2*/].f_1 = 0.4f;
	Local_80[1 /*2*/] = 0.39f;
	Local_80[1 /*2*/].f_1 = 0.4f;
	Local_80[2 /*2*/] = 0.43f;
	Local_80[2 /*2*/].f_1 = 0.4f;
	Local_80[3 /*2*/] = 0.47f;
	Local_80[3 /*2*/].f_1 = 0.4f;
	Local_80[4 /*2*/] = 0.51f;
	Local_80[4 /*2*/].f_1 = 0.74f;
	Local_80[5 /*2*/] = 0.55f;
	Local_80[5 /*2*/].f_1 = 0.74f;
	Local_80[6 /*2*/] = 0.59f;
	Local_80[6 /*2*/].f_1 = 0.74f;
	Local_80[7 /*2*/] = 0.63f;
	Local_80[7 /*2*/].f_1 = 0.74f;
}

void func_982(bool bParam0, char* sParam1)//Position - 0x4E2CC
{
	if (bParam0)
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_74, "OPEN_ERROR_POPUP", SYSTEM::TO_FLOAT(1), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_77 = MISC::GET_GAME_TIMER();
		iLocal_78 = 1;
	}
	else
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_74, "OPEN_ERROR_POPUP", SYSTEM::TO_FLOAT(0), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_78 = 0;
	}
}

void func_984(int* iParam0, int iParam1, bool bParam2)//Position - 0x4E330
{
	if (!BitTest(*iParam0, 29))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_74, "SET_BACKGROUND", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
		if (!bParam2)
		{
			if (GRAPHICS::GET_IS_WIDESCREEN())
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_74, "ADD_PROGRAM", SYSTEM::TO_FLOAT(7), SYSTEM::TO_FLOAT(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
			}
			else
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_74, "ADD_PROGRAM", SYSTEM::TO_FLOAT(8), SYSTEM::TO_FLOAT(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_LABELS");
		__LIB_0__.func_478("H_ICON_1");
		if (iParam1 == 0)
		{
			__LIB_0__.func_478("H_ICON_2a");
		}
		else
		{
			__LIB_0__.func_478("H_ICON_2");
		}
		__LIB_0__.func_478("H_ICON_3");
		__LIB_0__.func_478("H_ICON_4");
		__LIB_0__.func_478("H_ICON_5");
		__LIB_0__.func_478("H_ICON_6");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(iParam0, 29);
	}
}

void func_987()//Position - 0x4E468
{
	if (iLocal_75 < 5)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK", 0, true);
		}
	}
}

void func_988(int* iParam0)//Position - 0x4E498
{
	WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true, true, false);
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		MISC::SET_MINIGAME_IN_PROGRESS(false);
	}
	HUD::CLEAR_HELP(true);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	CAM::DESTROY_CAM(iLocal_72, false);
	__LIB_8__.func_770(0);
	__LIB_3__.func_692();
	MISC::SET_BIT(iParam0, 1);
	GRAPHICS::FORCE_POSTFX_BULLET_IMPACTS_AFTER_HUD(false);
	func_960(iParam0, 1, 0, 0);
	__LIB_0__.func_686(0, 1, 1, 0);
}

int func_1003(bool bParam0)//Position - 0x4EE14
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_74) && (!bParam0 || ((((((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_0") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_1")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_2")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_3")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_4")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_5")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_6"))))
	{
		return 1;
	}
	return 0;
}

void func_1004(bool bParam0)//Position - 0x4EE8E
{
	if (bParam0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_0", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_1", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_2", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_3", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_4", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_5", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_6", false);
	}
	iLocal_74 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_SKIP_RENDER_WHILE_PAUSED("Hacking_PC");
}

void func_1005(int* iParam0)//Position - 0x4EEE4
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true, true, false);
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		MISC::SET_MINIGAME_IN_PROGRESS(false);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
	HUD::CLEAR_HELP(true);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	CAM::DESTROY_CAM(iLocal_72, false);
	MISC::CLEAR_BIT(iParam0, 0);
	MISC::CLEAR_BIT(iParam0, 12);
	__LIB_8__.func_770(0);
	__LIB_3__.func_692();
	GRAPHICS::FORCE_POSTFX_BULLET_IMPACTS_AFTER_HUD(false);
}

void func_1006(int* iParam0)//Position - 0x4EF48
{
	func_960(iParam0, 1, 1, 0);
	*iParam0 = 0;
	iParam0->f_23 = 0;
	Local_81.f_0 = 0;
	Local_81.f_1 = 0;
	MISC::CLEAR_BIT(iParam0, 26);
	Local_82[0 /*4*/] = 0;
	Local_82[1 /*4*/] = 0;
	Local_82[2 /*4*/] = 0;
	Local_82[3 /*4*/] = 0;
	Local_82[4 /*4*/] = 0;
	Local_82[5 /*4*/] = 0;
	Local_82[6 /*4*/] = 0;
	Local_82[7 /*4*/] = 0;
}

void func_1008()//Position - 0x4F087
{
	char* sVar0;
	int iVar1;
	int iVar2;
	if (BitTest(Local_137.f_0, 0))
	{
		return;
	}
	if (!func_467())
	{
		if (__LIB_0__.func_1("GB_SGHT_HLP1" /* GXT: You have started Sightseer. Retrieve all packages using the Sightseer App to earn cash and RP. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (__LIB_0__.func_1("GB_SGHT_HLP2" /* GXT: Your VIP has started Sightseer. Protect your VIP while they collect the packages to earn cash and RP. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (func_421())
		{
			sVar0 = __LIB_34__.func_329(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34));
			iVar1 = __LIB_21__.func_180(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34));
			if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
			{
				if (__LIB_29__.func_34("GB_SGHT_HLP3" /* GXT: ~a~ ~s~have started Sightseer. Take out the VIP ~a~ ~s~to earn cash and RP. */, sVar0, iVar1, "GB_SGHT_TGT" /* GXT: ~BLIP_TEMP_4~ */, iVar1))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			else if (__LIB_29__.func_34("GB_SGHT_HLP4" /* GXT: ~a~ ~s~have started Sightseer. Take out the VIP ~a~ ~s~to earn cash and RP. */, sVar0, iVar1, "GB_SGHT_TGT" /* GXT: ~BLIP_TEMP_4~ */, iVar1))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		if (__LIB_0__.func_1("GB_SGHT_RVL" /* GXT: Other players in the session have been alerted to your activities. These players can now come after your Organization to earn cash and RP. */))
		{
			HUD::CLEAR_HELP(true);
		}
		return;
	}
	iVar2 = __LIB_33__.func_0(PLAYER::PLAYER_ID());
	if (iVar2 < 2)
	{
		if (__LIB_0__.func_1("GB_SGHT_HLP1" /* GXT: You have started Sightseer. Retrieve all packages using the Sightseer App to earn cash and RP. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (__LIB_0__.func_1("GB_SGHT_HLP2" /* GXT: Your VIP has started Sightseer. Protect your VIP while they collect the packages to earn cash and RP. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (func_421())
		{
			sVar0 = __LIB_34__.func_329(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34));
			iVar1 = __LIB_21__.func_180(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34));
			if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
			{
				if (__LIB_29__.func_34("GB_SGHT_HLP3" /* GXT: ~a~ ~s~have started Sightseer. Take out the VIP ~a~ ~s~to earn cash and RP. */, sVar0, iVar1, "GB_SGHT_TGT" /* GXT: ~BLIP_TEMP_4~ */, iVar1))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			else if (__LIB_29__.func_34("GB_SGHT_HLP4" /* GXT: ~a~ ~s~have started Sightseer. Take out the VIP ~a~ ~s~to earn cash and RP. */, sVar0, iVar1, "GB_SGHT_TGT" /* GXT: ~BLIP_TEMP_4~ */, iVar1))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		if (__LIB_0__.func_1("GB_SGHT_RVL" /* GXT: Other players in the session have been alerted to your activities. These players can now come after your Organization to earn cash and RP. */))
		{
			HUD::CLEAR_HELP(true);
		}
		return;
	}
	if (!BitTest(uLocal_126, 2))
	{
		if (!__LIB_1__.func_480(86))
		{
			if (iLocal_409 == -1)
			{
				if (__LIB_18__.func_448(0, 1, 1, 1))
				{
					if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_124.f_33)
					{
						__LIB_1__.func_278("GB_SGHT_HLP1" /* GXT: You have started Sightseer. Retrieve all packages using the Sightseer App to earn cash and RP. */, -1);
						__LIB_36__.func_794(1);
						MISC::SET_BIT(&uLocal_126, 2);
					}
					else if (func_1103() == Local_124.f_33)
					{
						__LIB_1__.func_278("GB_SGHT_HLP2" /* GXT: Your VIP has started Sightseer. Protect your VIP while they collect the packages to earn cash and RP. */, -1);
						__LIB_36__.func_794(1);
						MISC::SET_BIT(&uLocal_126, 2);
					}
					else if (func_421())
					{
						sVar0 = __LIB_34__.func_329(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34));
						iVar1 = __LIB_21__.func_180(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34));
						if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
						{
							__LIB_2__.func_195("GB_SGHT_HLP3" /* GXT: ~a~ ~s~have started Sightseer. Take out the VIP ~a~ ~s~to earn cash and RP. */, sVar0, iVar1, "GB_SGHT_TGT" /* GXT: ~BLIP_TEMP_4~ */, iVar1, -1);
							__LIB_36__.func_794(1);
						}
						else
						{
							__LIB_2__.func_195("GB_SGHT_HLP4" /* GXT: ~a~ ~s~have started Sightseer. Take out the VIP ~a~ ~s~to earn cash and RP. */, sVar0, iVar1, "GB_SGHT_TGT" /* GXT: ~BLIP_TEMP_4~ */, iVar1, -1);
							__LIB_36__.func_794(1);
						}
						MISC::SET_BIT(&uLocal_126, 2);
					}
				}
			}
			else
			{
				MISC::SET_BIT(&uLocal_126, 2);
			}
		}
	}
	if (BitTest(uLocal_126, 2))
	{
		if (!BitTest(uLocal_126, 7))
		{
			if (iLocal_409 == -1)
			{
				if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_124.f_33)
				{
					if (__LIB_18__.func_448(0, 1, 1, 1))
					{
						__LIB_1__.func_278("GB_SGHT_APPH" /* GXT: The Sightseer app can hack and remotely access secure networks. Press ~INPUT_FRONTEND_UP~ to open your phone and select the app. */, -1);
						__LIB_36__.func_794(1);
						MISC::SET_BIT(&uLocal_126, 7);
					}
				}
				else
				{
					MISC::SET_BIT(&uLocal_126, 7);
				}
			}
			else
			{
				MISC::SET_BIT(&uLocal_126, 7);
			}
		}
	}
	if (!BitTest(uLocal_126, 8))
	{
		if (func_1102())
		{
			if (__LIB_1__.func_145())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_124.f_3))
				{
					if (__LIB_18__.func_448(0, 1, 1, 1))
					{
						__LIB_1__.func_278("GB_SGHT_PKGH" /* GXT: The package is shown on the Radar at ~HUD_COLOUR_GREEN~~BLIP_SIGHTSEER~ */, -1);
						__LIB_36__.func_794(1);
						MISC::SET_BIT(&uLocal_126, 8);
					}
				}
			}
		}
	}
	if (!BitTest(uLocal_126, 12))
	{
		if (func_1102())
		{
			if (Local_124.f_5 > 0 || BitTest(Local_124.f_1, 6))
			{
				if (__LIB_18__.func_448(0, 1, 1, 1))
				{
					__LIB_1__.func_278("GB_SGHT_RVL" /* GXT: Other players in the session have been alerted to your activities. These players can now come after your Organization to earn cash and RP. */, -1);
					__LIB_36__.func_794(1);
					MISC::SET_BIT(&uLocal_126, 12);
				}
			}
		}
	}
}

void func_1019()//Position - 0x4F5CA
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (BitTest(Local_137.f_0, 0))
	{
		return;
	}
	if (!func_467())
	{
		if (BitTest(uLocal_126, 5))
		{
			if (Local_124.f_34 != -1)
			{
				iVar0 = __LIB_13__.func_746(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34));
				if (iVar0 > -1)
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34)))
					{
						iVar1 = __LIB_6__.func_890(iVar0);
						iVar2 = __LIB_1__.func_48(iVar1);
						__LIB_19__.func_770(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), 432, 0, 0);
						__LIB_21__.func_85(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), iVar2, 0, 0);
						__LIB_20__.func_361(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), 0, 0, 0);
						__LIB_2__.func_314(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), 0);
						__LIB_27__.func_81(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), Global_262145.f_12827 /* Tunable: GANGBOSS_JOB_BLIP_SCALE */, 0, 0);
						MISC::CLEAR_BIT(&uLocal_126, 5);
					}
					else
					{
						MISC::CLEAR_BIT(&uLocal_126, 5);
					}
				}
			}
			__LIB_18__.func_455();
		}
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_124.f_3))
	{
		if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_124.f_33)
		{
			if (!BitTest(Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 3))
			{
				if (!BitTest(Local_137.f_0, 0))
				{
					if (Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 < 3)
					{
						if (__LIB_33__.func_0(PLAYER::PLAYER_ID()) == 3)
						{
							if (!__LIB_7__.func_260("GB_SGHT_HCK" /* GXT: Use the Sightseer app to find the next package. */))
							{
								__LIB_25__.func_25("GB_SGHT_HCK" /* GXT: Use the Sightseer app to find the next package. */, 0);
							}
						}
						else if (__LIB_7__.func_260("GB_SGHT_HCK" /* GXT: Use the Sightseer app to find the next package. */))
						{
							__LIB_18__.func_455();
						}
					}
					else
					{
						__LIB_18__.func_455();
					}
				}
			}
		}
		else if (func_1103() == Local_124.f_33)
		{
			if (Local_124.f_34 != -1)
			{
				if (__LIB_33__.func_0(PLAYER::PLAYER_ID()) == 3)
				{
					if (!__LIB_7__.func_260("GB_SGHT_PROT" /* GXT: <C>~a~</C> ~s~is the ~a~. ~s~Protect them. */))
					{
						iVar0 = __LIB_13__.func_746(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34));
						if (iVar0 > -1)
						{
							iVar1 = __LIB_6__.func_890(iVar0);
							__LIB_31__.func_919("GB_SGHT_PROT" /* GXT: <C>~a~</C> ~s~is the ~a~. ~s~Protect them. */, PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), "GB_SGHT_BOSS" /* GXT: VIP */, 1, iVar1, 0);
						}
					}
				}
				else if (__LIB_7__.func_260("GB_SGHT_PROT" /* GXT: <C>~a~</C> ~s~is the ~a~. ~s~Protect them. */))
				{
					__LIB_18__.func_455();
				}
			}
		}
		else if (func_421())
		{
			if (Local_124.f_34 != -1)
			{
				if (__LIB_33__.func_0(PLAYER::PLAYER_ID()) == 3)
				{
					if (Local_124.f_34 != -1)
					{
						iVar0 = __LIB_13__.func_746(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34));
						if (iVar0 > -1)
						{
							iVar1 = __LIB_6__.func_890(iVar0);
							if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
							{
								if (!__LIB_7__.func_260("GB_SGHT_STOP" /* GXT: <C>~a~</C> ~s~is the target ~a~. ~s~Take them out. */))
								{
									__LIB_31__.func_919("GB_SGHT_STOP" /* GXT: <C>~a~</C> ~s~is the target ~a~. ~s~Take them out. */, PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), "GB_SGHT_BOSS" /* GXT: VIP */, 1, iVar1, 0);
								}
							}
							else if (!__LIB_7__.func_260("GB_SGHT_STOP" /* GXT: <C>~a~</C> ~s~is the target ~a~. ~s~Take them out. */))
							{
								__LIB_31__.func_919("GB_SGHT_STOP" /* GXT: <C>~a~</C> ~s~is the target ~a~. ~s~Take them out. */, PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), "GB_SGHT_BOSS" /* GXT: VIP */, 1, iVar1, 0);
							}
						}
					}
				}
				else
				{
					if (__LIB_7__.func_260("GB_SGHT_STOP" /* GXT: <C>~a~</C> ~s~is the target ~a~. ~s~Take them out. */))
					{
						__LIB_18__.func_455();
					}
					if (__LIB_7__.func_260("GB_SGHT_STOP2"))
					{
						__LIB_18__.func_455();
					}
				}
				if (__LIB_33__.func_0(PLAYER::PLAYER_ID()) >= 2)
				{
					if (!BitTest(uLocal_126, 5))
					{
						if (Local_124.f_34 != -1)
						{
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34)))
							{
								if (__LIB_1__.func_264(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), 1, 1))
								{
									iVar0 = __LIB_13__.func_746(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34));
									if (iVar0 > -1)
									{
										iVar1 = __LIB_6__.func_890(iVar0);
										iVar2 = __LIB_1__.func_48(iVar1);
										__LIB_19__.func_770(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), 432, 1, 0);
										__LIB_21__.func_85(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), iVar2, 1, 0);
										__LIB_20__.func_361(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), 1, 1, 0);
										__LIB_2__.func_314(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), 1);
										__LIB_27__.func_81(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), Global_262145.f_12827 /* Tunable: GANGBOSS_JOB_BLIP_SCALE */, 1, 0);
										MISC::SET_BIT(&uLocal_126, 5);
									}
								}
							}
						}
					}
				}
				else if (BitTest(uLocal_126, 5))
				{
					if (Local_124.f_34 != -1)
					{
						iVar0 = __LIB_13__.func_746(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34));
						if (iVar0 > -1)
						{
							iVar1 = __LIB_6__.func_890(iVar0);
							iVar2 = __LIB_1__.func_48(iVar1);
							__LIB_19__.func_770(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), 432, 0, 0);
							__LIB_21__.func_85(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), iVar2, 0, 0);
							__LIB_20__.func_361(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), 0, 0, 0);
							__LIB_2__.func_314(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), 0);
							__LIB_27__.func_81(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), Global_262145.f_12827 /* Tunable: GANGBOSS_JOB_BLIP_SCALE */, 0, 0);
							MISC::CLEAR_BIT(&uLocal_126, 5);
						}
					}
				}
			}
		}
	}
	else if (__LIB_33__.func_0(PLAYER::PLAYER_ID()) == 3)
	{
		if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_124.f_33)
		{
			if (!BitTest(Local_137.f_0, 0))
			{
				if (!__LIB_7__.func_260("GB_SGHT_RETP" /* GXT: Retrieve the ~HUD_COLOUR_GREEN~package. */))
				{
					__LIB_25__.func_25("GB_SGHT_RETP" /* GXT: Retrieve the ~HUD_COLOUR_GREEN~package. */, 0);
				}
			}
		}
		else if (func_1103() == Local_124.f_33)
		{
			if (Local_124.f_34 != -1)
			{
				if (!__LIB_7__.func_260("GB_SGHT_PROT" /* GXT: <C>~a~</C> ~s~is the ~a~. ~s~Protect them. */))
				{
					iVar0 = __LIB_13__.func_746(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34));
					if (iVar0 > -1)
					{
						iVar1 = __LIB_6__.func_890(iVar0);
						__LIB_31__.func_919("GB_SGHT_PROT" /* GXT: <C>~a~</C> ~s~is the ~a~. ~s~Protect them. */, PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), "GB_SGHT_BOSS" /* GXT: VIP */, 1, iVar1, 0);
					}
				}
			}
		}
		else if (func_421())
		{
			if (Local_124.f_34 != -1)
			{
				iVar0 = __LIB_13__.func_746(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34));
				if (iVar0 > -1)
				{
					iVar1 = __LIB_6__.func_890(iVar0);
					if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
					{
						if (!__LIB_7__.func_260("GB_SGHT_STOP" /* GXT: <C>~a~</C> ~s~is the target ~a~. ~s~Take them out. */))
						{
							__LIB_31__.func_919("GB_SGHT_STOP" /* GXT: <C>~a~</C> ~s~is the target ~a~. ~s~Take them out. */, PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), "GB_SGHT_BOSS" /* GXT: VIP */, 1, iVar1, 0);
						}
					}
					else if (!__LIB_7__.func_260("GB_SGHT_STOP" /* GXT: <C>~a~</C> ~s~is the target ~a~. ~s~Take them out. */))
					{
						__LIB_31__.func_919("GB_SGHT_STOP" /* GXT: <C>~a~</C> ~s~is the target ~a~. ~s~Take them out. */, PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), "GB_SGHT_BOSS" /* GXT: VIP */, 1, iVar1, 0);
					}
				}
			}
		}
	}
	else
	{
		if (__LIB_7__.func_260("GB_SGHT_PROT" /* GXT: <C>~a~</C> ~s~is the ~a~. ~s~Protect them. */))
		{
			__LIB_18__.func_455();
		}
		if (__LIB_7__.func_260("GB_SGHT_RETP" /* GXT: Retrieve the ~HUD_COLOUR_GREEN~package. */))
		{
			__LIB_18__.func_455();
		}
		if (__LIB_7__.func_260("GB_SGHT_STOP" /* GXT: <C>~a~</C> ~s~is the target ~a~. ~s~Take them out. */))
		{
			__LIB_18__.func_455();
		}
		if (__LIB_7__.func_260("GB_SGHT_STOP2"))
		{
			__LIB_18__.func_455();
		}
	}
}

void func_1030()//Position - 0x4FE03
{
	int iVar0;
	char* sVar1;
	var uVar2;
	if (!func_1102() && !func_421())
	{
		return;
	}
	if (!func_467())
	{
		return;
	}
	if (!BitTest(uLocal_126, 1))
	{
		iVar0 = __LIB_33__.func_0(PLAYER::PLAYER_ID());
		if (iVar0 >= 2)
		{
			if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_124.f_33 || func_1103() == Local_124.f_33)
			{
				if (__LIB_37__.func_818(82, "GB_INTTXT_SS" /* GXT: No time to waste. Find and collect each package before your competition. Each is fitted with a transponder emitting an undisclosed frequency. Hack the network to gain the frequency and find each location. */, 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_511(86, "BIGM_SGHTN" /* GXT: SIGHTSEER */, "BIGM_SGHTBD" /* GXT: Collect the packages hidden around the map */, 1, -1, 2, 1, 0);
					OBJECT::SET_LOCAL_PLAYER_CAN_COLLECT_PORTABLE_PICKUPS(true);
					OBJECT::SET_PLAYER_PERMITTED_TO_COLLECT_PICKUPS_OF_TYPE(PLAYER::PLAYER_ID(), joaat("PICKUP_PORTABLE_PACKAGE"), true);
					__LIB_40__.func_482(1);
					__LIB_38__.func_232(-1, 0, 0, -1, 0, 0);
				}
			}
			else if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
			{
				sVar1 = __LIB_34__.func_329(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34));
				uVar2 = __LIB_21__.func_180(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34));
				func_929(86, "BIGM_SGHTN" /* GXT: SIGHTSEER */, "BIGM_SGHTRD" /* GXT: Stop ~a~ ~s~collecting all the packages */, sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				__LIB_38__.func_232(-1, 0, 0, -1, 0, 0);
			}
			else
			{
				sVar1 = __LIB_34__.func_329(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34));
				uVar2 = __LIB_21__.func_180(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34));
				func_929(86, "BIGM_SGHTN" /* GXT: SIGHTSEER */, "BIGM_SGHTRD" /* GXT: Stop ~a~ ~s~collecting all the packages */, sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				__LIB_38__.func_232(-1, 0, 0, -1, 0, 0);
			}
		}
		MISC::SET_BIT(&uLocal_126, 1);
	}
}

void func_1074()//Position - 0x59F8B
{
	if (!BitTest(Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 1))
	{
		if (!func_1102())
		{
			if (Local_124.f_5 > 0 || BitTest(Local_124.f_1, 6))
			{
				__LIB_6__.func_990(1);
				MISC::SET_BIT(&(Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 1);
			}
		}
	}
}

int func_1075(bool bParam0)//Position - 0x59FD4
{
	if (!__LIB_6__.func_946(PLAYER::PLAYER_ID(), 3) && func_1084(1))
	{
		return 1;
	}
	if (Global_2815059.f_5195.f_43)
	{
		Global_2815059.f_5195.f_43 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (__LIB_1__.func_301() == __LIB_0__.func_160() || !__LIB_1__.func_264(__LIB_1__.func_301(), 0, 1))
		{
			return 1;
		}
	}
	if (__LIB_6__.func_946(PLAYER::PLAYER_ID(), 1) && !__LIB_20__.func_491(PLAYER::PLAYER_ID()))
	{
		if (__LIB_21__.func_140())
		{
			return 1;
		}
	}
	return 0;
}

int func_1084(bool bParam0)//Position - 0x5A170
{
	bool bVar0;
	if (!__LIB_19__.func_760(1) && __LIB_1__.func_301() != PLAYER::PLAYER_ID())
	{
		bVar0 = false;
		if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57 != __LIB_0__.func_160())
		{
			if (__LIB_1__.func_264(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57, 0, 1))
			{
				if ((Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 == 4 || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 == 8) || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (__LIB_1__.func_297(__LIB_0__.func_396(PLAYER::PLAYER_ID())) == 0 || __LIB_1__.func_297(__LIB_0__.func_396(PLAYER::PLAYER_ID())) == 3)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				__LIB_1__.func_447(31);
				if (__LIB_10__.func_929(__LIB_0__.func_396(PLAYER::PLAYER_ID())))
				{
					__LIB_1__.func_447(81);
				}
				if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57 != __LIB_0__.func_160() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57))
				{
					Global_1888322 = func_481(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57, -2, 0, 0, 0);
					if (!__LIB_1__.func_359(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57))
					{
						__LIB_1__.func_447(88);
					}
				}
				else
				{
					Global_1888322 = 1;
				}
				Global_1888306 = { Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_105 };
			}
			return 1;
		}
	}
	return 0;
}

int func_1102()//Position - 0x5A8B0
{
	int iVar0;
	iVar0 = func_1103();
	if (iVar0 > -1)
	{
		if (Local_124.f_33 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1103()//Position - 0x5A8D2
{
	int iVar0;
	if (Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 != -1)
	{
		return Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3;
	}
	if (__LIB_0__.func_581(PLAYER::PLAYER_ID()))
	{
		Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 = NETWORK::PARTICIPANT_ID_TO_INT();
		if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_124.f_33)
		{
			__LIB_40__.func_482(1);
		}
	}
	else if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = __LIB_0__.func_582();
		if (iVar0 != __LIB_0__.func_160())
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
			{
				Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			}
		}
	}
	return Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3;
}

int func_1105(int iParam0)//Position - 0x5A969
{
	return Local_125[iParam0 /*6*/];
}

void func_1112()//Position - 0x5AA49
{
	if (!BitTest(uLocal_126, 6))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_1102() || func_421())
			{
				__LIB_41__.func_882(0, 4, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
				MISC::SET_BIT(&uLocal_126, 6);
			}
		}
	}
	__LIB_22__.func_251(3, 3, -1, -1082130432);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_124.f_33)
		{
			if (iLocal_409 >= 0)
			{
				func_1006(&Local_137);
				func_1005(&Local_137);
			}
		}
	}
	if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_132)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_134);
	}
	if (iLocal_409 > 0)
	{
		if (BitTest(Local_124.f_1, 3))
		{
			__LIB_25__.func_112(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
	}
	func_1163();
	if (Local_124.f_34 != -1)
	{
		if (BitTest(uLocal_126, 5))
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34)))
			{
				__LIB_19__.func_770(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), 432, 0, 0);
				__LIB_21__.func_85(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), 1, 0, 0);
				__LIB_20__.func_361(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), 0, 0, 0);
				__LIB_2__.func_314(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), 0);
				__LIB_27__.func_81(PLAYER::INT_TO_PLAYERINDEX(Local_124.f_34), Global_262145.f_12827 /* Tunable: GANGBOSS_JOB_BLIP_SCALE */, 0, 0);
			}
		}
	}
	if (__LIB_1__.func_302(0))
	{
		__LIB_9__.func_32(0);
	}
	if (BitTest(uLocal_127, 0))
	{
		if (!BitTest(uLocal_127, 2))
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
			AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_STOP");
		}
	}
	MISC::SET_BIT(&uLocal_127, 8);
	func_204();
	OBJECT::SET_LOCAL_PLAYER_CAN_COLLECT_PORTABLE_PICKUPS(true);
	__LIB_40__.func_482(0);
	__LIB_42__.func_263(1, 0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	MISC::CLEAR_BIT(&Global_4541229, 21);
	MISC::CLEAR_BIT(&Global_4541229, 20);
	__LIB_0__.func_199();
}

void func_1163()//Position - 0x5CDB4
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_133);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_132);
}

void func_1166(struct<21> Param0)//Position - 0x5D07C
{
	__LIB_0__.func_673(__LIB_6__.func_875(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(3);
	__LIB_1__.func_569(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_124, 60, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_125, 193, 0);
	if (!__LIB_0__.func_672())
	{
		func_1112();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
		}
		__LIB_0__.func_371();
		__LIB_36__.func_246(0, 0, 0);
		Local_125[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 0;
	}
	else
	{
		func_1112();
	}
}

