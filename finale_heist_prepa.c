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
	bool bLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	struct<4> Local_38[10];
	bool bLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43[3] = { 0, 0, 0 };
	int iLocal_44[3] = { 0, 0, 0 };
	int iLocal_45 = 0;
	var uLocal_46 = 15;
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
	var uLocal_62 = 0;
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
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 15;
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
	var uLocal_150 = 15;
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
	var uLocal_202 = 15;
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
	struct<4> Local_254[2];
	struct<7> Local_255[6];
	int iLocal_256 = 0;
	char* sLocal_257 = NULL;
	char* sLocal_258 = NULL;
	int iLocal_259 = 0;
	int* iLocal_260 = NULL;
	int* iLocal_261 = NULL;
	int* iLocal_262 = NULL;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	struct<3> Local_265 = { 0, 0, 0 } ;
	struct<3> Local_266 = { 0, 0, 0 } ;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	float fLocal_270 = 0f;
	int iLocal_271 = 0;
	bool bLocal_272 = 0;
	bool bLocal_273 = 0;
	bool bLocal_274 = 0;
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
	bool bLocal_287 = 0;
	bool bLocal_288 = 0;
	struct<22> Local_289[3];
	struct<6> Local_290 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_291[3];
	int iLocal_292 = 0;
	char[] cLocal_293[8] = 0;
	var uLocal_294 = 16;
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
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
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
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	int iLocal_459[3] = { 0, 0, 0 };
	char* sLocal_460[3] = { NULL, NULL, NULL };
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	char cLocal_471[24] = "";
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	char cLocal_475[24] = "";
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	int iLocal_479 = 0;
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
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	sLocal_258 = "FINPRA";
	Local_265 = { 0f, 0f, 0f };
	Local_266 = { 134.6909f, -1255.3782f, 28.4875f };
	fLocal_270 = 0f;
	bLocal_273 = true;
	cLocal_293 = "BSPRAAU";
	iLocal_465 = -1;
	iLocal_467 = 1;
	iLocal_470 = -1;
	StringCopy(&cLocal_471, "NONE" /* GXT: None */, 24);
	StringCopy(&cLocal_475, "NONE" /* GXT: None */, 24);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_413();
		sLocal_257 = 0;
		AUDIO::TRIGGER_MUSIC_EVENT("FHPRA_FAIL");
		func_411();
		func_399();
	}
	func_398();
	func_384();
	iLocal_264 = PED::ADD_SCENARIO_BLOCKING_AREA(402.9022f, -1633.6042f, 25.0472f, 315.6288f, -1558.8143f, 38.7931f, false, true, true, true);
	__LIB_0__::func_681(27, 0);
	if (__LIB_0__::func_323())
	{
		__LIB_0__::func_427(409.6954f, -1567.0455f, 28.2916f, 138.7093f, 1, 0);
	}
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_STS", 0);
		if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
		{
			func_373();
			func_370();
			func_365();
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			switch (iLocal_40)
			{
				case 0:
					func_210();
					break;
				case 1:
					func_209();
					break;
				case 2:
					func_98();
					break;
				case 3:
					func_35();
					break;
				case 4:
					func_1();
					break;
			}
			if (iLocal_40 != 4)
			{
				if (iLocal_40 >= 0 && !bLocal_28)
				{
				}
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1C1
{
	switch (iLocal_41)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			func_33();
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_257))
			{
				func_31(sLocal_257);
			}
			else
			{
				func_15(0);
			}
			iLocal_41 = 1;
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				if (__LIB_16__::func_902())
				{
					func_413();
				}
				else if (__LIB_16__::func_328(&uLocal_150, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
				{
					__LIB_0__::func_507(408.3364f, -1567.4294f, 28.2723f, 128.2512f);
					__LIB_14__::func_555(471.5946f, -1412.737f, 28.1562f, 68.5531f);
				}
				MISC::CLEAR_AREA(372.9868f, -1623.5312f, 28.2928f, 100f, true, false, false, false);
				func_2();
				func_399();
			}
			break;
	}
}

void func_2()//Position - 0x287
{
	int iVar0;
	VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Local_290.f_0);
	__LIB_8__::func_397(&Local_290);
	__LIB_0__::func_123(&iLocal_262);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		__LIB_0__::func_0(&(Local_289[iVar0 /*22*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		__LIB_8__::func_397(&(Local_291[iVar0 /*6*/]));
		iVar0++;
	}
}

void func_15(int iParam0)//Position - 0x5D1
{
	int iVar0;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_16(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_16(int iParam0)//Position - 0x616
{
	int iVar0;
	int iVar1;
	__LIB_14__::func_534();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_17(&(Global_113386.f_2363.f_539), iVar1);
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

void func_17(var uParam0, int iParam1)//Position - 0x726
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
			if (!func_19(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_19(int iParam0, var uParam1, float fParam2)//Position - 0x8FA
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
			return func_19(8, uParam1, fParam2);
			break;
		case 10:
			return func_19(8, uParam1, fParam2);
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

void func_31(char* sParam0)//Position - 0x1589
{
	__LIB_0__::func_381(sParam0);
	func_15(0);
}

void func_33()//Position - 0x15DB
{
	__LIB_0__::func_714(&iLocal_260);
	__LIB_0__::func_714(&iLocal_261);
}

void func_35()//Position - 0x1611
{
	var uVar0;
	func_91(&Local_290, &uVar0, &iLocal_42, &iLocal_261, &iLocal_260, Local_266, 0, 0, 1090519040);
	switch (iLocal_41)
	{
		case 0:
			if (func_71(iLocal_40, bLocal_28))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("FHPRA_STOP"))
				{
					iLocal_285 = 0;
					iLocal_468 = 0;
					iLocal_41 = 1;
					AUDIO::TRIGGER_MUSIC_EVENT("FHPRA_STOP");
				}
			}
			break;
		case 1:
			__LIB_17__::func_767(&iLocal_260, Local_266, &iLocal_45, iLocal_42, &iLocal_259, &iLocal_284);
			if (iLocal_45 == 2)
			{
				if (__LIB_16__::func_328(&uLocal_150, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
				{
					PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
				}
			}
			if (__LIB_17__::func_777(Local_290.f_0, Local_266, &iLocal_260, iLocal_42, iLocal_45, &iLocal_468, &iLocal_285, &iLocal_279, &iLocal_280, &iLocal_259, 1090519040))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 6f, 4);
				func_55();
				func_50();
			}
			break;
		case 3:
			if (__LIB_0__::func_695(Local_290.f_0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_290.f_0, false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_290.f_0, -1);
				}
				else
				{
					__LIB_14__::func_659(Local_290.f_0, Local_266, 126.0705f, 0, 1);
					__LIB_17__::func_401(1, 1, 1);
					iLocal_41 = 1;
				}
			}
			break;
	}
}

void func_50()//Position - 0x1B6B
{
	HUD::CLEAR_PRINTS();
	__LIB_0__::func_325();
	__LIB_0__::func_526(0, 0);
	func_399();
}

void func_55()//Position - 0x1CFA
{
	__LIB_0__::func_498(1, 649);
	__LIB_0__::func_377(0, -1);
}

int func_71(int iParam0, bool bParam1)//Position - 0x22FE
{
	int* iVar0;
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_28 = false;
				__LIB_17__::func_401(1, 1, 1);
			}
			else if (func_82(1, Local_265, 0))
			{
				if (((func_82(2, Local_290.f_1, Local_290.f_4) && func_82(4, Local_265, 0)) && func_82(3, Local_265, 0)) && func_82(5, Local_265, 0))
				{
					iLocal_271 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(400.86282f, -1609.7386f, 28.29278f, 7.5f, 2f, 9.5f, __LIB_12__::func_418(229.3746f), false, 7);
					if (HUD::GET_BLIP_FROM_ENTITY(Local_290.f_0) != 0)
					{
						iVar0 = HUD::GET_BLIP_FROM_ENTITY(Local_290.f_0);
						MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
						__LIB_0__::func_714(&iVar0);
						MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
					}
					__LIB_17__::func_541(&iLocal_260, Local_290.f_0, 1);
					func_77();
					func_75();
					return 1;
				}
			}
			break;
		case 1:
			if (bParam1)
			{
				if (((func_82(2, Local_290.f_1, Local_290.f_4) && func_82(4, Local_265, 0)) && func_82(3, Local_265, 0)) && func_82(5, Local_265, 0))
				{
					__LIB_17__::func_520(PLAYER::PLAYER_PED_ID(), 408.3364f, -1567.4294f, 28.2723f, 128.2512f);
					func_72();
					MISC::CLEAR_AREA_OF_PEDS(369.0115f, -1609.1163f, 28.2928f, 5f, 0);
					MISC::CLEAR_AREA_OF_PEDS(Local_289[0 /*22*/].f_1, 5f, 0);
					func_77();
					func_75();
					bLocal_28 = false;
					__LIB_17__::func_401(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
		case 2:
			if (bParam1)
			{
				if ((func_82(2, Local_290.f_1, Local_290.f_4) && func_82(4, Local_265, 0)) && func_82(3, Local_265, 0))
				{
					func_72();
					MISC::CLEAR_AREA_OF_PEDS(369.0115f, -1609.1163f, 28.2928f, 5f, 0);
					MISC::CLEAR_AREA_OF_PEDS(Local_289[0 /*22*/].f_1, 5f, 0);
					func_77();
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_290.f_0, -1);
					func_75();
					bLocal_28 = false;
					__LIB_17__::func_401(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
		case 3:
			if (bParam1)
			{
				if (func_82(2, Local_266, Local_290.f_4))
				{
					func_72();
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_290.f_0, -1);
					func_75();
					bLocal_28 = false;
					__LIB_17__::func_401(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_72()//Position - 0x2567
{
	int iVar0;
	StringCopy(&cLocal_471, "NONE" /* GXT: None */, 24);
	StringCopy(&cLocal_475, "NONE" /* GXT: None */, 24);
	iLocal_284 = 0;
	iLocal_463 = 0;
	iLocal_285 = 0;
	iLocal_464 = 0;
	iLocal_279 = 0;
	iLocal_280 = 0;
	iLocal_45 = 0;
	func_73();
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Local_289[iVar0 /*22*/].f_18 = 0;
		Local_289[iVar0 /*22*/].f_19 = 0;
		Local_289[iVar0 /*22*/].f_20 = 0;
		iLocal_459[iVar0] = 0;
		iVar0++;
	}
	iLocal_461 = 0;
	iLocal_462 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_43[iVar0] = 0;
		iLocal_44[iVar0] = 0;
		iVar0++;
	}
	iLocal_467 = 1;
	__LIB_0__::func_681(27, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[13 /*31*/], 4, true, false);
	iLocal_468 = 0;
}

void func_73()//Position - 0x261B
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		iVar0 = 0;
		while (iVar0 <= (15 - 1))
		{
			MISC::CLEAR_BIT(&(Local_289[iVar1 /*22*/].f_15), iVar0);
			iVar0++;
		}
		Local_289[iVar1 /*22*/].f_17 = 0;
		Local_289[iVar1 /*22*/].f_16 = 0;
		iVar1++;
	}
	iLocal_277 = 0;
	iLocal_278 = 0;
	iLocal_275 = 0;
	iLocal_465 = -1;
	iLocal_463 = 0;
	bLocal_274 = false;
	iLocal_466 = 0;
}

void func_75()//Position - 0x26AF
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar2 = __LIB_0__::func_683();
	if (iVar2 == 0)
	{
		iVar0 = 0;
		sVar1 = "MICHAEL";
	}
	else if (iVar2 == 1)
	{
		iVar0 = 1;
		sVar1 = "FRANKLIN";
	}
	else if (iVar2 == 2)
	{
		iVar0 = 2;
		sVar1 = "TREVOR";
	}
	__LIB_0__::func_222(&uLocal_294, iVar0, PLAYER::PLAYER_PED_ID(), sVar1, 0, 1);
	__LIB_0__::func_222(&uLocal_294, 6, Local_289[0 /*22*/], "BSPRACopBreak1", 0, 1);
	__LIB_0__::func_222(&uLocal_294, 7, Local_289[1 /*22*/], "BSPRACopBreak2", 0, 1);
	__LIB_0__::func_222(&uLocal_294, 5, Local_289[2 /*22*/], "BSPRACopBreak3", 0, 1);
}

void func_77()//Position - 0x27D8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_289[iVar0 /*22*/], false);
		if (!__LIB_6__::func_572(Local_289[iVar0 /*22*/], joaat("SCRIPT_TASK_START_SCENARIO_AT_POSITION")))
		{
			switch (iVar0)
			{
				case 0:
				case 1:
					TASK::TASK_START_SCENARIO_AT_POSITION(Local_289[iVar0 /*22*/], "WORLD_HUMAN_HANG_OUT_STREET", Local_289[iVar0 /*22*/].f_1, Local_289[iVar0 /*22*/].f_4, 0, false, true);
					break;
				case 2:
					TASK::TASK_USE_MOBILE_PHONE(Local_289[iVar0 /*22*/], true, 1);
					break;
				}
		}
		WEAPON::GIVE_WEAPON_TO_PED(Local_289[iVar0 /*22*/], joaat("WEAPON_PISTOL"), -1, false, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_289[iVar0 /*22*/], iLocal_292);
		Local_289[iVar0 /*22*/].f_18 = 1;
		Local_289[iVar0 /*22*/].f_21 = 0;
		iVar0++;
	}
}

int func_82(int iParam0, struct<3> Param1, float fParam2)//Position - 0x2930
{
	int iVar0;
	int iVar1;
	char cVar2[16];
	int iVar3;
	int iVar4;
	int iVar5;
	switch (iParam0)
	{
		case 0:
			if (__LIB_0__::func_490(Param1, Local_265, 1056964608, 0) && fParam2 == 0f)
			{
				return 1;
			}
			break;
		case 1:
			HUD::REQUEST_ADDITIONAL_TEXT(sLocal_258, 0);
			HUD::REQUEST_ADDITIONAL_TEXT(cLocal_293, 6);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0) && HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				return 1;
			}
			break;
		case 2:
			if (__LIB_0__::func_695(Global_96938[0]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[0], true, true);
				Local_290.f_0 = Global_96938[0];
				if (__LIB_0__::func_695(Local_290.f_0))
				{
					if (!VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(Local_290.f_0))
					{
						VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_290.f_0);
					}
					VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Local_290.f_0, 2, false);
					VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Local_290.f_0, 3, false);
					__LIB_0__::func_679(Local_290.f_0, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_290.f_0, true);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_290.f_0, 1);
					return 1;
				}
			}
			else if (__LIB_17__::func_765(&Local_290, Local_290.f_5, Local_290.f_1, Local_290.f_4, 1))
			{
				if (!VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(Local_290.f_0))
				{
					VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_290.f_0);
				}
				__LIB_0__::func_679(Local_290.f_0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_290.f_0, true);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Local_290.f_0, 2, false);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Local_290.f_0, 3, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_290.f_0, 1);
				return 1;
			}
			break;
		case 3:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar0]))
				{
					if (!PED::IS_PED_DEAD_OR_DYING(Global_96938.f_9[iVar0], true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[iVar0], true, true);
						Local_289[iVar0 /*22*/] = Global_96938.f_9[iVar0];
						if (__LIB_0__::func_692(Local_289[iVar0 /*22*/]))
						{
							PED::SET_PED_TARGET_LOSS_RESPONSE(Local_289[iVar0 /*22*/], 2);
							AUDIO::STOP_PED_SPEAKING(Local_289[iVar0 /*22*/], true);
							func_87(iVar0);
							iVar1++;
						}
					}
					else
					{
						iVar1++;
					}
				}
				else if (func_86(&(Local_289[iVar0 /*22*/]), Local_289[iVar0 /*22*/].f_5, Local_289[iVar0 /*22*/].f_1, Local_289[iVar0 /*22*/].f_4, 0, 0, 0, 1))
				{
					func_87(iVar0);
					AUDIO::STOP_PED_SPEAKING(Local_289[iVar0 /*22*/], true);
					PED::SET_PED_TARGET_LOSS_RESPONSE(Local_289[iVar0 /*22*/], 2);
					StringCopy(&cVar2, "COP ", 16);
					StringIntConCat(&cVar2, iVar0, 16);
					PED::SET_PED_NAME_DEBUG(Local_289[iVar0 /*22*/], &cVar2);
					iVar1++;
				}
				iVar0++;
			}
			if (iVar1 == 3)
			{
				return 1;
			}
			break;
		case 4:
			iVar4 = 0;
			iVar5 = 0;
			iVar3 = 1;
			while (iVar3 <= 3)
			{
				if (__LIB_0__::func_695(Global_96938[iVar3]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[iVar3], true, true);
					Local_291[iVar4 /*6*/] = Global_96938[iVar3];
					if (__LIB_0__::func_695(Local_291[iVar4 /*6*/]))
					{
						iVar5++;
					}
				}
				else if (__LIB_17__::func_765(&(Local_291[iVar4 /*6*/]), Local_291[iVar4 /*6*/].f_5, Local_291[iVar4 /*6*/].f_1, Local_291[iVar4 /*6*/].f_4, 1))
				{
					iVar5++;
				}
				iVar4++;
				iVar3++;
			}
			if (iVar5 == 3)
			{
				return 1;
			}
			break;
		case 5:
			if (func_83(&iLocal_262, joaat("prop_box_guncase_03a"), 354.6938f, -1634.7828f, 22.7849f, 299.1508f, 1))
			{
				if (__LIB_0__::func_695(Local_290.f_0))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_262, Local_290.f_0, 0, 0f, -1.85f, 0.05f, ENTITY::GET_ENTITY_ROTATION(Local_290.f_0, 2), false, false, false, false, 2, true, 0);
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_290.f_0, iLocal_262))
					{
						return 1;
					}
				}
			}
			break;
	}
	return 0;
}

int func_83(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x2C9E
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (__LIB_17__::func_533(iParam1, "Loading", 0))
		{
			*iParam0 = OBJECT::CREATE_OBJECT(iParam1, Param2, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				ENTITY::SET_ENTITY_HEADING(*iParam0, fParam3);
				PHYSICS::ACTIVATE_PHYSICS(*iParam0);
				if (bParam4)
				{
					__LIB_17__::func_532(iParam1, 1);
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

int func_86(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x2D55
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (__LIB_17__::func_533(iParam1, "Loading", 0))
		{
			*uParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam3, true, true);
			if (__LIB_0__::func_692(*uParam0))
			{
				if (bParam5)
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
				}
				if (bParam6)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, bParam6);
				}
				if (!bParam7)
				{
					PED::SET_PED_CAN_BE_TARGETTED(*uParam0, bParam7);
				}
				if (bParam4)
				{
					__LIB_17__::func_532(iParam1, 1);
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

void func_87(int iParam0)//Position - 0x2DD5
{
	if (__LIB_0__::func_692(Local_289[iParam0 /*22*/]))
	{
		if (iParam0 == 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_289[iParam0 /*22*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_289[iParam0 /*22*/], 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_289[iParam0 /*22*/], 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_289[iParam0 /*22*/], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_289[iParam0 /*22*/], 9, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_289[iParam0 /*22*/], 10, 0, 0, 0);
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_289[iParam0 /*22*/], 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_289[iParam0 /*22*/], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_289[iParam0 /*22*/], 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_289[iParam0 /*22*/], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_289[iParam0 /*22*/], 9, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_289[iParam0 /*22*/], 10, 0, 1, 0);
		}
	}
}

void func_91(int* iParam0, var uParam1, int iParam2, int* iParam3, int* iParam4, struct<3> Param5, int iParam6, bool bParam7, float fParam8)//Position - 0x2FF0
{
	if (__LIB_0__::func_695(*iParam0))
	{
		switch (*iParam2)
		{
			case 0:
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false))
				{
					__LIB_0__::func_714(iParam3);
					if (__LIB_0__::func_501(__LIB_17__::func_528(__LIB_13__::func_102()), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(__LIB_17__::func_528(__LIB_13__::func_102()));
					}
					if (*iParam0 == iParam6)
					{
						*iParam2 = 1;
					}
					else
					{
						*iParam2 = 2;
					}
				}
				else if (__LIB_16__::func_969(*iParam0) || __LIB_16__::func_975(*iParam0))
				{
					__LIB_0__::func_714(iParam3);
					if (__LIB_0__::func_501(__LIB_17__::func_528(__LIB_13__::func_102()), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(__LIB_17__::func_528(__LIB_13__::func_102()));
					}
					*iParam2 = 3;
				}
				else
				{
					if (__LIB_0__::func_501(__LIB_17__::func_529(__LIB_13__::func_102(), bParam7), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(__LIB_17__::func_529(__LIB_13__::func_102(), bParam7));
					}
					if (__LIB_13__::func_102() != 33)
					{
						__LIB_17__::func_769(iParam0);
					}
					else
					{
						__LIB_17__::func_768(iParam0, uParam1);
					}
				}
				break;
			case 2:
			case 1:
				if ((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false) && !__LIB_16__::func_969(*iParam0)) && !__LIB_16__::func_975(*iParam0))
				{
					__LIB_0__::func_714(iParam4);
					if (!ENTITY::IS_ENTITY_AT_COORD(*iParam0, Param5, fParam8, fParam8, 2f, false, true, 2))
					{
						__LIB_17__::func_541(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
			case 3:
				if (!__LIB_16__::func_969(*iParam0) && !__LIB_16__::func_975(*iParam0))
				{
					__LIB_0__::func_714(iParam4);
					if (!ENTITY::IS_ENTITY_AT_COORD(*iParam0, Param5, fParam8, fParam8, 2f, false, true, 2))
					{
						__LIB_17__::func_541(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
		}
	}
	else if (__LIB_13__::func_102() != 33)
	{
		__LIB_17__::func_769(iParam0);
	}
	else
	{
		__LIB_17__::func_768(iParam0, uParam1);
	}
}

void func_98()//Position - 0x346E
{
	var uVar0;
	func_91(&Local_290, &uVar0, &iLocal_42, &iLocal_261, &iLocal_260, Local_266, 0, 0, 1090519040);
	func_118();
	func_106();
	switch (iLocal_41)
	{
		case 0:
			if (func_71(iLocal_40, bLocal_28))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("FHPRA_VAN"))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (iLocal_42 == 1 || iLocal_42 == 2)
						{
							__LIB_0__::func_638();
							if (!__LIB_0__::func_75())
							{
								__LIB_17__::func_531("PR_TAKBACK" /* GXT: Titanium Infinity Exhaust */, &iLocal_259);
							}
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 6f, 4);
							AUDIO::TRIGGER_MUSIC_EVENT("FHPRA_VAN");
							__LIB_17__::func_540(&iLocal_260, Local_266, 1);
						}
					}
					iLocal_469 = 0;
					iLocal_41 = 1;
				}
			}
			break;
		case 1:
			__LIB_17__::func_767(&iLocal_260, Local_266, &iLocal_45, iLocal_42, &iLocal_259, &iLocal_284);
			if (iLocal_45 == 2)
			{
				if (__LIB_16__::func_328(&uLocal_150, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
				{
					PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
				}
				if (!iLocal_469)
				{
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_BS_PREP_A_01", 0f);
					iLocal_469 = 1;
				}
			}
			if (__LIB_17__::func_770(Local_290.f_0, Local_266, &iLocal_260, iLocal_45, iLocal_42, &iLocal_259, &iLocal_285, 0, 0, 1086324736))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 6f, 4);
				iLocal_41 = 2;
			}
			break;
		case 2:
			__LIB_0__::func_714(&iLocal_260);
			__LIB_17__::func_514(1077936128, 1);
			func_99(0);
			break;
		case 3:
			if (__LIB_0__::func_695(Local_290.f_0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_290.f_0, false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_290.f_0, -1);
				}
				else
				{
					__LIB_14__::func_659(Local_290.f_0, Local_266, 126.0705f, 0, 1);
					__LIB_17__::func_401(1, 1, 1);
					iLocal_41 = 1;
				}
			}
			break;
	}
}

void func_99(bool bParam0)//Position - 0x3609
{
	__LIB_17__::func_527(iLocal_40);
	iLocal_256 = iLocal_40;
	if (!bParam0)
	{
		iLocal_40 = iLocal_256 + 1;
	}
	else if (iLocal_256 > 0)
	{
		iLocal_40 = (iLocal_256 - 1);
	}
	iLocal_259 = 0;
	iLocal_41 = 0;
}

void func_106()//Position - 0x37B3
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = __LIB_16__::func_914(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			switch (iLocal_44[iVar0])
			{
				case 0:
					if (!__LIB_17__::func_550(iVar1))
					{
						if (__LIB_17__::func_524(iVar1, 0))
						{
							if (func_113(iVar0, iVar1) || func_111(iVar0, iVar1))
							{
								if (__LIB_17__::func_551(iVar1, 0))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
									TASK::CLEAR_PED_TASKS(iVar1);
								}
							}
						}
					}
					break;
				case 1:
					if (func_109(iVar0, iVar1) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, true))
					{
						iLocal_44[iVar0] = 0;
						__LIB_17__::func_549(iVar1);
					}
					break;
				case 2:
					if (func_107(iVar0, iVar1) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, true))
					{
						iLocal_44[iVar0] = 0;
						__LIB_17__::func_549(iVar1);
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_107(int iParam0, int iParam1)//Position - 0x389B
{
	switch (iLocal_43[iParam0])
	{
		case 0:
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iParam1, PED::GET_VEHICLE_PED_IS_IN(iParam1, false), Local_266, 4, 20f, 786469, 3.5f, 5f, true);
			iLocal_43[iParam0] = 3;
			break;
		case 3:
			if (!func_111(iParam0, iParam1) || __LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_266, 2f, 1))
			{
				iLocal_43[iParam0] = 4;
			}
			break;
		case 4:
			iLocal_43[iParam0] = 0;
			return 1;
			break;
	}
	return 0;
}

int func_109(int iParam0, int iParam1)//Position - 0x397C
{
	float fVar0;
	switch (iLocal_43[iParam0])
	{
		case 0:
			if (!MISC::IS_POSITION_OCCUPIED(Local_254[iLocal_470 /*4*/], 1.5f, false, false, true, false, false, iParam1, false))
			{
				if (__LIB_0__::func_725(iParam1, Local_254[iLocal_470 /*4*/], 5f, 1))
				{
					fVar0 = 1f;
				}
				else
				{
					fVar0 = 2f;
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, Local_254[iLocal_470 /*4*/], fVar0, 20000, 0.25f, 0, Local_254[iLocal_470 /*4*/].f_3);
				iLocal_43[iParam0] = 1;
			}
			break;
		case 1:
			if (!__LIB_6__::func_572(iParam1, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
			{
				TASK::TASK_CLIMB(iParam1, false);
				iLocal_43[iParam0] = 2;
			}
			break;
		case 2:
			if (!__LIB_6__::func_572(iParam1, joaat("SCRIPT_TASK_CLIMB")))
			{
				iLocal_43[iParam0] = 4;
			}
			break;
		case 4:
			iLocal_43[iParam0] = 0;
			return 1;
			break;
	}
	return 0;
}

int func_111(int iParam0, int iParam1)//Position - 0x3ADC
{
	if (!__LIB_0__::func_201())
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_290.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false)) && !ENTITY::IS_ENTITY_AT_COORD(Local_290.f_0, Local_266, 2f, 2f, 2f, false, true, 0))
		{
			if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_290.f_0, false)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (PED::IS_PED_IN_VEHICLE(iParam1, Local_290.f_0, false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_290.f_0, -1, false) == iParam1)
				{
					iLocal_44[iParam0] = 2;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_113(int iParam0, int iParam1)//Position - 0x3B8D
{
	if (!__LIB_0__::func_201())
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, 344.98444f, -1604.0114f, 28.29278f, 339.72116f, -1599.4835f, 31.29056f, 3.63f, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 345.1542f, -1604.1732f, 28.29278f, 360.88577f, -1617.2299f, 31.29278f, 3.38f, false, true, 0))
		{
			iLocal_470 = 0;
			iLocal_44[iParam0] = 1;
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, 345.1542f, -1604.1732f, 28.29278f, 360.88577f, -1617.2299f, 31.29278f, 3.63f, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 344.98444f, -1604.0114f, 28.29278f, 339.72116f, -1599.4835f, 31.29056f, 3.38f, false, true, 0))
		{
			iLocal_470 = 1;
			iLocal_44[iParam0] = 1;
			return 1;
		}
	}
	return 0;
}

void func_118()//Position - 0x3D8E
{
	int iVar0;
	if (!bLocal_28)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 1)
		{
			bLocal_274 = true;
		}
		else
		{
			PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 38);
			PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 30);
			bLocal_274 = false;
		}
		if (iLocal_40 == 2)
		{
			if (!iLocal_286)
			{
				if (!__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_290.f_1, 180f, 1))
				{
					iVar0 = 0;
					while (iVar0 <= 2)
					{
						__LIB_0__::func_124(&(Local_289[iVar0 /*22*/]), 1, 0, 1);
						iVar0++;
					}
					iLocal_286 = 1;
				}
			}
		}
		func_197();
		func_119();
	}
}

void func_119()//Position - 0x3E19
{
	int iVar0;
	iVar0 = 2;
	if (Local_289[iVar0 /*22*/].f_18 != 3 && Local_289[iVar0 /*22*/].f_20 != 7)
	{
		__LIB_0__::func_631(Local_289[iVar0 /*22*/], &(Local_289[iVar0 /*22*/].f_6), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
	}
	else
	{
		__LIB_0__::func_621(&(Local_289[iVar0 /*22*/].f_6));
	}
	if (__LIB_0__::func_692(Local_289[iVar0 /*22*/]))
	{
		func_152(iVar0);
		switch (Local_289[iVar0 /*22*/].f_18)
		{
			case 0:
				break;
			case 1:
				func_151(iVar0);
				break;
			case 3:
				func_120(iVar0);
				break;
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_289[iVar0 /*22*/]) && !PED::IS_PED_INJURED(Local_289[iVar0 /*22*/]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_289[iVar0 /*22*/], PLAYER::PLAYER_PED_ID(), true))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_289[iVar0 /*22*/]);
				if (((WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_BEING_STEALTH_KILLED(Local_289[iVar0 /*22*/])) || PED::WAS_PED_KILLED_BY_STEALTH(Local_289[iVar0 /*22*/])) || PED::WAS_PED_KILLED_BY_TAKEDOWN(Local_289[iVar0 /*22*/]))
				{
					if (!bLocal_274)
					{
						PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 41);
						PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 33);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					}
				}
			}
			Local_289[iVar0 /*22*/].f_18 = 1;
			Local_289[iVar0 /*22*/].f_21 = 0;
		}
		__LIB_0__::func_714(&(Local_289[iVar0 /*22*/].f_6));
		__LIB_0__::func_124(&(Local_289[iVar0 /*22*/]), 1, 0, 1);
	}
}

void func_120(int iParam0)//Position - 0x3F99
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	switch (Local_289[iParam0 /*22*/].f_20)
	{
		case 1:
			if (func_149(iParam0) && __LIB_0__::func_725(Local_289[iParam0 /*22*/], Local_289[iParam0 /*22*/].f_1, 3f, 1))
			{
				if (MISC::GET_GAME_TIMER() - Local_289[iParam0 /*22*/].f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500)
				{
					if (!__LIB_6__::func_572(Local_289[iParam0 /*22*/], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
					{
						PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_289[iParam0 /*22*/]);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_289[iParam0 /*22*/], PLAYER::PLAYER_PED_ID(), 0);
					}
					Local_289[iParam0 /*22*/].f_14 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				func_134(iParam0);
			}
			break;
		case 2:
			if (MISC::GET_GAME_TIMER() - Local_289[iParam0 /*22*/].f_14) > MISC::GET_RANDOM_INT_IN_RANGE(5000, 6000)
			{
				if (BitTest(Local_289[iParam0 /*22*/].f_15, 2))
				{
					func_127(iParam0);
					func_125();
					return;
				}
				else if (func_124(iParam0, 15))
				{
					func_134(iParam0);
					return;
				}
				else
				{
					Local_289[iParam0 /*22*/].f_17 = 1;
				}
			}
			break;
		case 3:
			if (MISC::GET_GAME_TIMER() - Local_289[iParam0 /*22*/].f_14) > MISC::GET_RANDOM_INT_IN_RANGE(2500, 3000)
			{
				if (BitTest(Local_289[iParam0 /*22*/].f_15, 8))
				{
					Local_289[iParam0 /*22*/].f_17 = 1;
				}
				else
				{
					iLocal_278 = 0;
					func_134(iParam0);
				}
			}
			break;
		case 4:
			if (MISC::GET_GAME_TIMER() - Local_289[iParam0 /*22*/].f_14) > MISC::GET_RANDOM_INT_IN_RANGE(2500, 3000)
			{
				if (BitTest(Local_289[iParam0 /*22*/].f_15, 8))
				{
					if (iLocal_278 >= 3)
					{
						func_127(iParam0);
						func_125();
						return;
					}
					else if (BitTest(Local_289[iParam0 /*22*/].f_15, 9) && !bLocal_272)
					{
						func_127(iParam0);
						func_125();
						return;
					}
					else
					{
						Local_289[iParam0 /*22*/].f_17 = 1;
					}
				}
				else
				{
					iLocal_278 = 0;
					func_134(iParam0);
				}
			}
			break;
		case 6:
			if (iParam0 == 0)
			{
				iVar0 = 350;
			}
			else
			{
				iVar0 = 750;
			}
			if ((MISC::GET_GAME_TIMER() - Local_289[iParam0 /*22*/].f_14) > iVar0)
			{
				if (!PED::IS_PED_BEING_STUNNED(Local_289[iParam0 /*22*/], 0) && !TASK::IS_PED_IN_WRITHE(Local_289[iParam0 /*22*/]))
				{
					Local_289[iParam0 /*22*/].f_14 = MISC::GET_GAME_TIMER();
					func_127(iParam0);
				}
			}
			break;
		case 5:
			if (MISC::GET_GAME_TIMER() - Local_289[iParam0 /*22*/].f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000)
			{
				func_125();
				return;
			}
			break;
		case 7:
			if ((MISC::GET_GAME_TIMER() - Local_289[iParam0 /*22*/].f_14) > 350)
			{
				if (!bLocal_274 && func_124(iParam0, 15))
				{
					func_73();
					func_134(iParam0);
					HUD::REMOVE_COP_BLIP_FROM_PED(Local_289[iParam0 /*22*/]);
					return;
				}
				else
				{
					if (iLocal_465 != -1)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_465) > 12000)
						{
							func_123(-1);
						}
						else if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
						{
							func_123(2);
						}
						else if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
						{
							if (ENTITY::IS_ENTITY_A_PED(iVar1))
							{
								iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
								if ((iVar2 == Local_289[0 /*22*/] || iVar2 == Local_289[1 /*22*/]) || iVar2 == Local_289[2 /*22*/])
								{
									func_123(2);
								}
							}
						}
					}
					if (Local_289[iParam0 /*22*/].f_16)
					{
						PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
					}
					if ((__LIB_6__::func_572(Local_289[iParam0 /*22*/], joaat("SCRIPT_TASK_INVALID")) || __LIB_6__::func_572(Local_289[iParam0 /*22*/], joaat("SCRIPT_TASK_STAND_STILL"))) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
					{
						if (!__LIB_6__::func_572(Local_289[iParam0 /*22*/], joaat("SCRIPT_TASK_ARREST_PED")))
						{
							TASK::TASK_ARREST_PED(Local_289[iParam0 /*22*/], PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
			if (!iLocal_463)
			{
				if (BitTest(Local_289[iParam0 /*22*/].f_15, 1) && BitTest(Local_289[iParam0 /*22*/].f_15, 14))
				{
					if (iParam0 == 0)
					{
						sVar3 = "PRA_COPSHT1";
					}
					else
					{
						sVar3 = "PRA_COPSHT2";
					}
					__LIB_0__::func_325();
					__LIB_14__::func_654(&uLocal_294, cLocal_293, sVar3, 7, 0, 0);
					iLocal_463 = 1;
				}
			}
			break;
	}
}

void func_123(int iParam0)//Position - 0x443D
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	iLocal_465 = -1;
	if (__LIB_0__::func_692(Local_289[0 /*22*/]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_289[0 /*22*/], false);
	}
	if (__LIB_0__::func_692(Local_289[1 /*22*/]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_289[1 /*22*/], false);
	}
	if (__LIB_0__::func_692(Local_289[2 /*22*/]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_289[2 /*22*/], false);
	}
	if (iParam0 != -1)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iParam0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	}
}

int func_124(int iParam0, int iParam1)//Position - 0x44B5
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 <= 14)
	{
		if (bVar0 != iParam1)
		{
			if (BitTest(Local_289[iParam0 /*22*/].f_15, bVar0))
			{
				return 0;
			}
		}
		bVar0++;
	}
	if (bLocal_274)
	{
		return 0;
	}
	return 1;
}

void func_125()//Position - 0x44F5
{
	int iVar0;
	func_126();
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (Local_289[iVar0 /*22*/].f_20 != 6 && Local_289[iVar0 /*22*/].f_20 != 7)
		{
			__LIB_0__::func_621(&(Local_289[iVar0 /*22*/].f_6));
			Local_289[iVar0 /*22*/].f_14 = MISC::GET_GAME_TIMER();
			Local_289[iVar0 /*22*/].f_18 = 3;
			Local_289[iVar0 /*22*/].f_20 = 6;
		}
		iVar0++;
	}
}

void func_126()//Position - 0x455F
{
	if (!iLocal_275)
	{
		iLocal_465 = MISC::GET_GAME_TIMER();
		if (!iLocal_464)
		{
			__LIB_0__::func_638();
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		iLocal_275 = 1;
	}
}

void func_127(int iParam0)//Position - 0x4597
{
	if (Local_289[iParam0 /*22*/].f_20 != 7)
	{
		if (__LIB_0__::func_692(Local_289[iParam0 /*22*/]))
		{
			if (__LIB_6__::func_572(Local_289[iParam0 /*22*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) || PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(Local_289[iParam0 /*22*/]))
			{
				TASK::CLEAR_PED_TASKS(Local_289[iParam0 /*22*/]);
			}
			else if (__LIB_6__::func_572(Local_289[iParam0 /*22*/], joaat("SCRIPT_TASK_START_SCENARIO_AT_POSITION")) || __LIB_6__::func_572(Local_289[iParam0 /*22*/], joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")))
			{
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_289[iParam0 /*22*/]);
			}
			PED::SET_PED_AS_COP(Local_289[iParam0 /*22*/], true);
			TASK::TASK_ARREST_PED(Local_289[iParam0 /*22*/], PLAYER::PLAYER_PED_ID());
			WEAPON::GIVE_WEAPON_TO_PED(Local_289[iParam0 /*22*/], joaat("WEAPON_PISTOL"), -1, false, true);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_289[iParam0 /*22*/]);
			PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
			func_128(iParam0);
			Local_289[iParam0 /*22*/].f_18 = 3;
			Local_289[iParam0 /*22*/].f_20 = 7;
		}
	}
}

void func_128(int iParam0)//Position - 0x467B
{
	char* sVar0;
	if ((iLocal_40 != 2 && !iLocal_464) && !ENTITY::IS_ENTITY_DEAD(Local_289[iParam0 /*22*/], false))
	{
		if (func_133(iParam0) && func_131(Local_289[iParam0 /*22*/], 30f))
		{
			if (iParam0 == 0)
			{
				sVar0 = "S_M_Y_COP_01_WHITE_MINI_03";
			}
			else if (iParam0 == 1)
			{
				sVar0 = "S_M_Y_COP_01_BLACK_MINI_04";
			}
			else if (iParam0 == 2)
			{
				sVar0 = "PRA_COPSARR3";
			}
			if (BitTest(Local_289[iParam0 /*22*/].f_15, 3))
			{
				iLocal_464 = 1;
			}
			else if (!func_124(iParam0, 15) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 362.63586f, -1581.2556f, 31.547737f, 358.10736f, -1586.615f, 34.297737f, 2f, false, true, 0))
			{
				__LIB_0__::func_429();
				iLocal_461 = 0;
				if (iParam0 == 2)
				{
					__LIB_14__::func_654(&uLocal_294, cLocal_293, sVar0, 7, 0, 0);
				}
				else
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_289[iParam0 /*22*/], "ARREST_PLAYER", sVar0, "SPEECH_PARAMS_FORCE", false);
				}
				iLocal_464 = 1;
			}
		}
	}
}

int func_131(int iParam0, float fParam1)//Position - 0x47A9
{
	if (iParam0 == 0)
	{
		return 1;
	}
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_692(iParam0))
	{
		if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iParam0, 0) <= fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_133(int iParam0)//Position - 0x4845
{
	return Local_289[iParam0 /*22*/].f_18 > 1;
}

void func_134(int iParam0)//Position - 0x4858
{
	int iVar0;
	if (Local_289[iParam0 /*22*/].f_18 != 1 && !__LIB_6__::func_572(Local_289[iParam0 /*22*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
	{
		TASK::CLEAR_PED_TASKS(Local_289[iParam0 /*22*/]);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_289[iParam0 /*22*/], iLocal_292);
		if (iParam0 == 2)
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (!__LIB_0__::func_725(Local_289[iParam0 /*22*/], Local_289[iParam0 /*22*/].f_1, 3f, 1))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_289[iParam0 /*22*/].f_1, 1f, 120000, 0.25f, 0, Local_289[iParam0 /*22*/].f_4);
			}
			else
			{
				TASK::TASK_ACHIEVE_HEADING(0, Local_289[iParam0 /*22*/].f_4, 0);
			}
			if (iLocal_459[2] && MISC::IS_STRING_NULL_OR_EMPTY("sResumeRoot"))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, true);
			}
			else
			{
				TASK::TASK_USE_MOBILE_PHONE(0, true, 1);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_289[iParam0 /*22*/], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
			{
				case 0:
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (!__LIB_0__::func_725(Local_289[iParam0 /*22*/], Local_289[iParam0 /*22*/].f_1, 3f, 1))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_289[iParam0 /*22*/].f_1, 1f, 120000, 0.25f, 0, Local_289[iParam0 /*22*/].f_4);
					}
					else
					{
						TASK::TASK_ACHIEVE_HEADING(0, Local_289[iParam0 /*22*/].f_4, 0);
					}
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_289[iParam0 /*22*/], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					break;
				case 1:
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (!__LIB_0__::func_725(Local_289[iParam0 /*22*/], Local_289[iParam0 /*22*/].f_1, 3f, 1))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_289[iParam0 /*22*/].f_1, 1f, 120000, 0.25f, 0, Local_289[iParam0 /*22*/].f_4);
					}
					else
					{
						TASK::TASK_ACHIEVE_HEADING(0, Local_289[iParam0 /*22*/].f_4, 0);
					}
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, true);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_289[iParam0 /*22*/], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					break;
				}
		}
		func_135();
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_289[iParam0 /*22*/], false);
		Local_289[iParam0 /*22*/].f_18 = 1;
		Local_289[iParam0 /*22*/].f_21 = 0;
		Local_289[iParam0 /*22*/].f_19 = 0;
		Local_289[iParam0 /*22*/].f_20 = 0;
	}
}

void func_135()//Position - 0x4A8F
{
	if (__LIB_16__::func_328(&uLocal_46, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
	{
		if (!__LIB_0__::func_75())
		{
			if ((!MISC::ARE_STRINGS_EQUAL(&cLocal_471, "NONE" /* GXT: None */) && !MISC::ARE_STRINGS_EQUAL(&cLocal_475, "NONE" /* GXT: None */)) && !__LIB_0__::func_501("PR_TAKBACK" /* GXT: Titanium Infinity Exhaust */, 0, 0))
			{
				if (__LIB_14__::func_782(&uLocal_294, cLocal_293, &cLocal_471, &cLocal_475, 7, 0, 0))
				{
					StringCopy(&cLocal_471, "NONE" /* GXT: None */, 24);
					StringCopy(&cLocal_475, "NONE" /* GXT: None */, 24);
					iLocal_461 = 1;
				}
			}
		}
	}
}

int func_149(int iParam0)//Position - 0x5185
{
	if (Local_289[func_150(iParam0) /*22*/].f_18 > 1 && Local_289[func_150(iParam0) /*22*/].f_20 != 1)
	{
		return 1;
	}
	return 0;
}

int func_150(int iParam0)//Position - 0x51B8
{
	int iVar0;
	iVar0 = 0;
	if (iParam0 == 0)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_151(int iParam0)//Position - 0x51D4
{
	switch (Local_289[iParam0 /*22*/].f_21)
	{
		case 0:
			if (__LIB_0__::func_75())
			{
				if (PED::IS_PED_BEING_STEALTH_KILLED(Local_289[iParam0 /*22*/]))
				{
					__LIB_0__::func_429();
				}
			}
			else if (iParam0 == 2)
			{
				if (iLocal_459[2] && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(Local_289[iParam0 /*22*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_289[iParam0 /*22*/]);
					TASK::TASK_START_SCENARIO_IN_PLACE(Local_289[iParam0 /*22*/], "WORLD_HUMAN_STAND_MOBILE", 0, true);
				}
			}
			break;
		case 1:
			break;
	}
}

void func_152(int iParam0)//Position - 0x5254
{
	func_174(iParam0);
	if (!func_173(iParam0))
	{
		if (__LIB_38__::func_294(Local_289[iParam0 /*22*/], 1, 50f, 140f, 0, 1, 1, 1) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_289[iParam0 /*22*/], true), 100f))
		{
			if ((!PED::IS_PED_BEING_STEALTH_KILLED(Local_289[iParam0 /*22*/]) && !PED::WAS_PED_KILLED_BY_STEALTH(Local_289[iParam0 /*22*/])) && !PED::WAS_PED_KILLED_BY_TAKEDOWN(Local_289[iParam0 /*22*/]))
			{
				func_125();
			}
			else if (!bLocal_274)
			{
				PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 41);
				PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 33);
				PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 12);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
		}
	}
	else if (__LIB_0__::func_687(Local_289[iParam0 /*22*/], PLAYER::PLAYER_PED_ID(), 5f, 1))
	{
		if (!bLocal_274)
		{
			PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 41);
			PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 33);
		}
	}
}

int func_173(int iParam0)//Position - 0x5CDA
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_289[iParam0 /*22*/], 0f, -2f, 0f), 2f, 3f, 2f, false, true, 0) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
	{
		return 1;
	}
	return 0;
}

void func_174(int iParam0)//Position - 0x5D19
{
	func_194(iParam0);
	func_190(iParam0);
	func_187(iParam0);
	func_184(iParam0);
	if (Local_289[iParam0 /*22*/].f_20 != 7 || Local_289[iParam0 /*22*/].f_20 != 6)
	{
		if (((!bLocal_272 && !PED::IS_PED_BEING_STEALTH_KILLED(Local_289[iParam0 /*22*/])) && !PED::WAS_PED_KILLED_BY_STEALTH(Local_289[iParam0 /*22*/])) && !PED::WAS_PED_KILLED_BY_TAKEDOWN(Local_289[iParam0 /*22*/]))
		{
			func_175(iParam0);
		}
	}
}

void func_175(int iParam0)//Position - 0x5D98
{
	bool bVar0;
	if ((((!func_149(iParam0) && Local_289[iParam0 /*22*/].f_20 != 7) && Local_289[iParam0 /*22*/].f_20 != 6) && !bLocal_274) && Local_289[iParam0 /*22*/].f_17)
	{
		bVar0 = false;
		while (bVar0 <= 11)
		{
			if (BitTest(Local_289[iParam0 /*22*/].f_15, bVar0))
			{
				func_176(iParam0, bVar0);
				Local_289[iParam0 /*22*/].f_17 = 0;
				return;
			}
			bVar0++;
		}
	}
}

void func_176(int iParam0, bool bParam1)//Position - 0x5E18
{
	switch (bParam1)
	{
		case 0:
			func_127(iParam0);
			func_125();
			break;
		case 2:
			func_182(iParam0, 6, 0);
			break;
		case 3:
			func_127(iParam0);
			func_125();
			break;
		case 4:
			func_127(iParam0);
			func_125();
			break;
		case 1:
			func_127(iParam0);
			func_125();
			break;
		case 6:
			func_182(iParam0, 2, 0);
			break;
		case 5:
			func_182(iParam0, 5, 0);
			break;
		case 8:
			if (iLocal_278 < 2)
			{
				func_177(iParam0, 3, 0);
			}
			else
			{
				func_127(iParam0);
				func_125();
			}
			break;
		case 7:
			func_177(iParam0, 4, 0);
			break;
		case 10:
			func_182(iParam0, 1, 0);
			break;
		case 13:
			func_182(iParam0, 4, 0);
			break;
		case 11:
			func_182(iParam0, 7, 0);
			break;
	}
}

void func_177(int iParam0, int iParam1, int iParam2)//Position - 0x5F0F
{
	char* sVar0;
	char* sVar1;
	if (!func_149(iParam0) || iParam2)
	{
		if (iParam1 == 2)
		{
			if (Local_289[func_150(iParam0) /*22*/].f_20 != 2)
			{
				if (iParam0 == 0)
				{
					sVar0 = "PRA_COPGUNW1";
				}
				else if (iParam0 == 1)
				{
					sVar0 = "PRA_COPGUNW2";
				}
				func_178(iParam0, sVar0, 0, 0);
				iLocal_277++;
			}
		}
		else if (iParam1 == 3)
		{
			if (Local_289[func_150(iParam0) /*22*/].f_20 != 3 || (MISC::GET_GAME_TIMER() - iLocal_276) > 7500)
			{
				if (!BitTest(Local_289[iParam0 /*22*/].f_15, 9))
				{
					if (iParam0 == 0)
					{
						sVar0 = "PRA_CWCAR1";
					}
					else if (iParam0 == 1)
					{
						sVar0 = "PRA_CWCAR2";
					}
				}
				else if (iParam0 == 0)
				{
					sVar0 = "PRA_CCWCAR1";
				}
				else if (iParam0 == 1)
				{
					sVar0 = "PRA_CCWCAR2";
				}
				if (iLocal_278 < 2)
				{
					func_178(iParam0, sVar0, 1, 0);
				}
				iLocal_278++;
			}
		}
		else if (iParam1 == 4)
		{
			if (Local_289[func_150(iParam0) /*22*/].f_20 != 4 || (MISC::GET_GAME_TIMER() - iLocal_276) > 7500)
			{
				if (!bLocal_273)
				{
					if (iParam0 == 0)
					{
						sVar0 = "PRA_CWCARNP1";
					}
					else if (iParam0 == 1)
					{
						sVar0 = "PRA_CWCARNP2";
					}
				}
				else if (!bLocal_272)
				{
					if (iParam0 == 0)
					{
						sVar0 = "PRA_CCWCNP1";
					}
					else if (iParam0 == 1)
					{
						sVar0 = "PRA_CCWCNP2";
					}
				}
				else if (iParam0 == 0)
				{
					sVar0 = "PRA_CWCARNP1";
				}
				else if (iParam0 == 1)
				{
					sVar0 = "PRA_CWCARNP2";
				}
				if (iLocal_278 < 2)
				{
					func_178(iParam0, sVar0, 1, 0);
				}
				iLocal_278++;
			}
		}
		else if (iParam1 == 5)
		{
			if (Local_289[func_150(iParam0) /*22*/].f_20 != 5)
			{
				if (iParam0 == 0)
				{
					sVar1 = "S_M_Y_COP_01_WHITE_MINI_03";
					AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_289[iParam0 /*22*/], "CHALLENGE_THREATEN", sVar1, "SPEECH_PARAMS_FORCE", false);
				}
				else if (iParam0 == 1)
				{
					sVar1 = "S_M_Y_COP_01_BLACK_MINI_04";
					AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_289[iParam0 /*22*/], "CHALLENGE_THREATEN", sVar1, "SPEECH_PARAMS_FORCE", false);
				}
				else if (iParam0 == 2)
				{
					sVar0 = "PRA_COPSARR3";
					func_178(iParam0, sVar0, 0, 0);
				}
			}
		}
		if (!__LIB_6__::func_572(Local_289[iParam0 /*22*/], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
		{
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_289[iParam0 /*22*/]);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_289[iParam0 /*22*/], PLAYER::PLAYER_PED_ID(), 0);
		}
		Local_289[iParam0 /*22*/].f_14 = MISC::GET_GAME_TIMER();
		Local_289[func_150(iParam0) /*22*/].f_14 = MISC::GET_GAME_TIMER();
		Local_289[func_150(iParam0) /*22*/].f_18 = 3;
		Local_289[func_150(iParam0) /*22*/].f_20 = 1;
		Local_289[iParam0 /*22*/].f_18 = 3;
		Local_289[iParam0 /*22*/].f_20 = iParam1;
	}
}

void func_178(int iParam0, char* sParam1, bool bParam2, bool bParam3)//Position - 0x619F
{
	struct<6> Var0;
	if (bParam3)
	{
		if (BitTest(Local_289[iParam0 /*22*/].f_15, 12))
		{
			return;
		}
	}
	Var0 = { __LIB_0__::func_486() };
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1) || MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		__LIB_14__::func_654(&uLocal_294, cLocal_293, sParam1, 7, 0, 0);
		if (bParam2)
		{
			iLocal_276 = MISC::GET_GAME_TIMER();
		}
		return;
	}
	if ((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam1) && !__LIB_0__::func_501("PR_TAKBACK" /* GXT: Titanium Infinity Exhaust */, 0, 0)) && !__LIB_0__::func_501("PR_GOVEH", 0, 0))
	{
		func_179();
		__LIB_14__::func_654(&uLocal_294, cLocal_293, sParam1, 7, 0, 0);
		if (bParam2)
		{
			iLocal_276 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_179()//Position - 0x6243
{
	struct<6> Var0;
	if (__LIB_0__::func_75())
	{
		Var0 = { __LIB_0__::func_486() };
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "PRA_COPTLK1") || MISC::ARE_STRINGS_EQUAL(&Var0, "PRA_COPTLK2"))
		{
			cLocal_471 = { __LIB_0__::func_486() };
			cLocal_475 = { __LIB_13__::func_743() };
		}
		if (iLocal_461)
		{
			__LIB_0__::func_429();
			iLocal_461 = 0;
		}
		else
		{
			__LIB_0__::func_638();
		}
	}
}

void func_182(int iParam0, int iParam1, int iParam2)//Position - 0x6308
{
	char* sVar0;
	char* sVar1;
	if (!func_149(iParam0) || iParam2)
	{
		if (iParam1 == 1)
		{
			if (Local_289[iParam0 /*22*/].f_19 != 1 || (MISC::GET_GAME_TIMER() - iLocal_276) > 7500)
			{
				if (!bLocal_272)
				{
					if (iParam0 == 0)
					{
						sVar0 = "PRA_COPPRT1";
					}
					else if (iParam0 == 1)
					{
						sVar0 = "PRA_COPPRT2";
					}
				}
				else if (iParam0 == 0)
				{
					sVar0 = "PRA_CPLYCOP1";
				}
				else if (iParam0 == 1)
				{
					sVar0 = "PRA_CPLYCOP2";
				}
				else if (iParam0 == 2)
				{
					sVar0 = "PRA_CPLYCOP3";
				}
				func_178(iParam0, sVar0, 1, 1);
				func_183(iParam0, iParam1, 1);
			}
		}
		else if (iParam1 == 2)
		{
			if (Local_289[iParam0 /*22*/].f_19 != 2 || (MISC::GET_GAME_TIMER() - iLocal_276) > 7500)
			{
				if (iParam0 == 0)
				{
					sVar0 = "PRA_COPPLY1";
				}
				else if (iParam0 == 1)
				{
					sVar0 = "PRA_COPPLY2";
				}
				func_178(iParam0, sVar0, 1, 1);
				func_183(iParam0, iParam1, 1);
			}
		}
		else if (iParam1 == 4)
		{
			if (Local_289[iParam0 /*22*/].f_19 != 4 || (MISC::GET_GAME_TIMER() - iLocal_276) > 7500)
			{
				if (iParam0 == 0)
				{
					sVar0 = "PRA_COPST1";
				}
				else if (iParam0 == 1)
				{
					sVar0 = "PRA_COPST2";
				}
				func_178(iParam0, sVar0, 1, 0);
				func_183(iParam0, iParam1, 0);
			}
		}
		else if (iParam1 == 6)
		{
			if (Local_289[iParam0 /*22*/].f_19 != 6)
			{
				if (iParam0 == 0)
				{
					sVar0 = "PRA_COPGUNR1";
				}
				else if (iParam0 == 1)
				{
					sVar0 = "PRA_COPGUNR2";
				}
				func_178(iParam0, sVar0, 0, 1);
				func_183(iParam0, iParam1, 1);
			}
		}
		else if (iParam1 == 5)
		{
			if (Local_289[iParam0 /*22*/].f_19 != 5)
			{
				if (iParam0 == 0)
				{
					sVar1 = "S_M_Y_COP_01_WHITE_MINI_03";
				}
				else if (iParam0 == 1)
				{
					sVar1 = "S_M_Y_COP_01_BLACK_MINI_04";
				}
				AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_289[iParam0 /*22*/], "BUMP", sVar1, "SPEECH_PARAMS_FORCE", false);
				func_183(iParam0, iParam1, 0);
			}
		}
		else if (iParam1 == 7)
		{
			if (Local_289[iParam0 /*22*/].f_19 != 7)
			{
				if (iParam0 == 0)
				{
					sVar0 = "PRA_CHP1";
				}
				else if (iParam0 == 1)
				{
					sVar0 = "PRA_CHP2";
				}
				else if (iParam0 == 2)
				{
					sVar0 = "PRA_CHP3";
				}
				func_178(iParam0, sVar0, 1, 0);
				func_183(iParam0, iParam1, 0);
			}
		}
		if (bLocal_272)
		{
			if (!BitTest(Local_289[iParam0 /*22*/].f_15, 12))
			{
				MISC::SET_BIT(&(Local_289[iParam0 /*22*/].f_15), 12);
			}
		}
	}
}

void func_183(int iParam0, int iParam1, bool bParam2)//Position - 0x6564
{
	if (bParam2)
	{
		if (BitTest(Local_289[iParam0 /*22*/].f_15, 12))
		{
			return;
		}
	}
	if (!__LIB_6__::func_572(Local_289[iParam0 /*22*/], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
	{
		PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_289[iParam0 /*22*/]);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_289[iParam0 /*22*/], PLAYER::PLAYER_PED_ID(), 0);
	}
	Local_289[iParam0 /*22*/].f_14 = MISC::GET_GAME_TIMER();
	Local_289[func_150(iParam0) /*22*/].f_14 = MISC::GET_GAME_TIMER();
	Local_289[func_150(iParam0) /*22*/].f_18 = 3;
	Local_289[func_150(iParam0) /*22*/].f_20 = 1;
	Local_289[iParam0 /*22*/].f_19 = iParam1;
	Local_289[iParam0 /*22*/].f_18 = 2;
}

void func_184(int iParam0)//Position - 0x6601
{
	float fVar0;
	if ((!func_149(iParam0) && Local_289[iParam0 /*22*/].f_20 != 6) && Local_289[iParam0 /*22*/].f_20 != 7)
	{
		fVar0 = PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID());
		if (iParam0 == 0 || iParam0 == 1)
		{
			if (!iLocal_282)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 340.0758f, -1598.2554f, 28.29322f, 346.4939f, -1603.6843f, 38.29278f, 6.22f, false, true, 0))
				{
					if (PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_282 = 1;
						iLocal_281 = MISC::GET_GAME_TIMER();
						return;
					}
					else if (!BitTest(Local_289[iParam0 /*22*/].f_15, 11))
					{
						if ((((fVar0 > 16f && !Local_289[iParam0 /*22*/].f_16) && !BitTest(Local_289[iParam0 /*22*/].f_15, 10)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 344.44824f, -1603.4729f, 28.29278f, 345.62222f, -1604.4784f, 32.29278f, 3.46f, false, true, 0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_289[iParam0 /*22*/], Local_255[1 /*7*/], Local_255[1 /*7*/].f_3, Local_255[1 /*7*/].f_6, false, true, 0))
						{
							func_186(iParam0, 11);
							return;
						}
					}
				}
				if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_255[1 /*7*/], Local_255[1 /*7*/].f_3, Local_255[1 /*7*/].f_6, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_289[iParam0 /*22*/], Local_255[1 /*7*/], Local_255[1 /*7*/].f_3, Local_255[1 /*7*/].f_6, false, true, 0)) && !BitTest(Local_289[iParam0 /*22*/].f_15, 10)) && !BitTest(Local_289[iParam0 /*22*/].f_15, 11))
				{
					if ((fVar0 > 12f && !Local_289[iParam0 /*22*/].f_16) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 344.44824f, -1603.4729f, 28.29278f, 345.62222f, -1604.4784f, 32.29278f, 3.46f, false, true, 0))
					{
						func_186(iParam0, 11);
					}
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_281) > 4000)
			{
				iLocal_282 = 0;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_255[5 /*7*/], Local_255[5 /*7*/].f_3, Local_255[5 /*7*/].f_6, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_289[iParam0 /*22*/], Local_255[5 /*7*/], Local_255[5 /*7*/].f_3, Local_255[5 /*7*/].f_6, false, true, 0))
		{
			if (fVar0 > 10f && !Local_289[iParam0 /*22*/].f_16)
			{
				func_186(iParam0, 11);
			}
			else
			{
				func_185(iParam0, 11);
			}
		}
	}
}

void func_185(int iParam0, bool bParam1)//Position - 0x68C1
{
	if (BitTest(Local_289[iParam0 /*22*/].f_15, bParam1))
	{
		MISC::CLEAR_BIT(&(Local_289[iParam0 /*22*/].f_15), bParam1);
		Local_289[iParam0 /*22*/].f_17 = 1;
	}
}

void func_186(int iParam0, bool bParam1)//Position - 0x68F1
{
	if (!BitTest(Local_289[iParam0 /*22*/].f_15, bParam1))
	{
		MISC::SET_BIT(&(Local_289[iParam0 /*22*/].f_15), bParam1);
		Local_289[iParam0 /*22*/].f_17 = 1;
	}
}

void func_187(int iParam0)//Position - 0x6922
{
	bool bVar0;
	if ((Local_289[iParam0 /*22*/].f_19 != 5 && Local_289[iParam0 /*22*/].f_20 != 6) && Local_289[iParam0 /*22*/].f_20 != 7)
	{
		bVar0 = false;
		if (((__LIB_0__::func_687(Local_289[iParam0 /*22*/], PLAYER::PLAYER_PED_ID(), 5f, 1) && !PED::IS_PED_BEING_STEALTH_KILLED(Local_289[iParam0 /*22*/])) && !PED::WAS_PED_KILLED_BY_STEALTH(Local_289[iParam0 /*22*/])) && !PED::WAS_PED_KILLED_BY_TAKEDOWN(Local_289[iParam0 /*22*/]))
		{
			if (func_189(iParam0, &bVar0) || func_188(iParam0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (bVar0)
					{
						func_186(iParam0, 3);
					}
					else if (iParam0 == 2)
					{
						func_186(iParam0, 3);
					}
					else
					{
						func_186(iParam0, 5);
					}
				}
				else
				{
					func_186(iParam0, 3);
				}
			}
		}
	}
	else if (!__LIB_0__::func_687(Local_289[iParam0 /*22*/], PLAYER::PLAYER_PED_ID(), 5.5f, 1))
	{
		func_185(iParam0, 5);
		func_185(iParam0, 3);
	}
}

int func_188(int iParam0)//Position - 0x6A20
{
	if (iParam0 == 2)
	{
		return 0;
	}
	if (Local_289[iParam0 /*22*/].f_20 != 7)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_289[iParam0 /*22*/], 1f, -1f, 0f), 1f, 1f, 2f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_189(int iParam0, int iParam1)//Position - 0x6A63
{
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_289[iParam0 /*22*/], PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_RAGDOLL(Local_289[iParam0 /*22*/]))
		{
			*iParam1 = 1;
		}
		else
		{
			*iParam1 = 0;
		}
		return 1;
	}
	return 0;
}

void func_190(int iParam0)//Position - 0x6A9B
{
	int iVar0;
	if (Local_289[iParam0 /*22*/].f_20 != 6 && Local_289[iParam0 /*22*/].f_20 != 7)
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Local_289[iParam0 /*22*/].f_16)
			{
				if (!BitTest(Local_289[iParam0 /*22*/].f_15, 12))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_255[iVar0 /*7*/], Local_255[iVar0 /*7*/].f_3, Local_255[iVar0 /*7*/].f_6, false, true, 0))
					{
						iLocal_282 = 1;
						iLocal_281 = MISC::GET_GAME_TIMER();
						if (iVar0 == 4)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								func_193(iParam0, 4);
							}
							else
							{
								func_191(iParam0, 4);
							}
						}
						else
						{
							func_193(iParam0, iVar0);
						}
					}
					else
					{
						func_191(iParam0, iVar0);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_255[iVar0 /*7*/], Local_255[iVar0 /*7*/].f_3, Local_255[iVar0 /*7*/].f_6, false, true, 0) || BitTest(Local_289[iParam0 /*22*/].f_15, 12))
			{
				func_191(iParam0, iVar0);
			}
			iVar0++;
		}
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_255[3 /*7*/], Local_255[3 /*7*/].f_3, Local_255[3 /*7*/].f_6, false, true, 0))
	{
		func_193(iParam0, 3);
	}
	else
	{
		func_191(iParam0, 3);
	}
}

void func_191(int iParam0, int iParam1)//Position - 0x6BE3
{
	int iVar0;
	switch (iParam1)
	{
		case 1:
			func_185(iParam0, 10);
			break;
		case 2:
			func_185(iParam0, 6);
			break;
		case 0:
			if (!bLocal_274)
			{
				func_185(iParam0, 1);
			}
			break;
		case 3:
			func_185(iParam0, 14);
			break;
		case 4:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (__LIB_0__::func_695(iVar0))
				{
					if (__LIB_12__::func_390(ENTITY::GET_ENTITY_MODEL(iVar0)))
					{
						bLocal_273 = true;
					}
					else
					{
						bLocal_273 = false;
					}
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Local_255[4 /*7*/], Local_255[4 /*7*/].f_3, Local_255[4 /*7*/].f_6, false, true, 0))
					{
						func_185(iParam0, 8);
						func_185(iParam0, 7);
					}
					else if (!BitTest(Local_289[iParam0 /*22*/].f_15, 7))
					{
						func_186(iParam0, 7);
					}
				}
				else
				{
					func_185(iParam0, 8);
					func_185(iParam0, 7);
				}
			}
			break;
		case 5:
			func_185(iParam0, 4);
			break;
	}
}

void func_193(int iParam0, int iParam1)//Position - 0x6D42
{
	switch (iParam1)
	{
		case 1:
			if ((!BitTest(Local_289[iParam0 /*22*/].f_15, 6) && !BitTest(Local_289[iParam0 /*22*/].f_15, 1)) && !BitTest(Local_289[iParam0 /*22*/].f_15, 9))
			{
				if (!BitTest(Local_289[iParam0 /*22*/].f_15, 10))
				{
					func_186(iParam0, 10);
				}
			}
			break;
		case 2:
			if (!BitTest(Local_289[iParam0 /*22*/].f_15, 1))
			{
				if (!BitTest(Local_289[iParam0 /*22*/].f_15, 6))
				{
					func_186(iParam0, 6);
				}
			}
			break;
		case 0:
			if (!BitTest(Local_289[iParam0 /*22*/].f_15, 1))
			{
				func_186(iParam0, 1);
			}
			break;
		case 3:
			if (!BitTest(Local_289[iParam0 /*22*/].f_15, 14))
			{
				func_186(iParam0, 14);
			}
			break;
		case 4:
			if (!BitTest(Local_289[iParam0 /*22*/].f_15, 8))
			{
				if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					MISC::SET_BIT(&(Local_289[iParam0 /*22*/].f_15), 9);
					func_186(iParam0, 8);
				}
				else
				{
					MISC::CLEAR_BIT(&(Local_289[iParam0 /*22*/].f_15), 9);
					func_186(iParam0, 8);
				}
			}
			break;
		case 5:
			if (!BitTest(Local_289[iParam0 /*22*/].f_15, 4))
			{
				if ((!PED::IS_PED_BEING_STEALTH_KILLED(Local_289[iParam0 /*22*/]) && !PED::WAS_PED_KILLED_BY_STEALTH(Local_289[iParam0 /*22*/])) && !PED::WAS_PED_KILLED_BY_TAKEDOWN(Local_289[iParam0 /*22*/]))
				{
					func_186(iParam0, 4);
				}
			}
			break;
	}
}

void func_194(int iParam0)//Position - 0x6EB7
{
	if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_289[iParam0 /*22*/], 30f, 1))
	{
		if (__LIB_17__::func_771(Local_289[iParam0 /*22*/], PLAYER::PLAYER_PED_ID(), 140f, 1, 250, 7))
		{
			Local_289[iParam0 /*22*/].f_16 = 1;
		}
		else
		{
			Local_289[iParam0 /*22*/].f_16 = 0;
		}
	}
}

void func_197()//Position - 0x7167
{
	int iVar0;
	func_205();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Local_289[iVar0 /*22*/].f_18 != 3 && Local_289[iVar0 /*22*/].f_20 != 7)
		{
			__LIB_0__::func_631(Local_289[iVar0 /*22*/], &(Local_289[iVar0 /*22*/].f_6), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
		}
		else
		{
			__LIB_0__::func_621(&(Local_289[iVar0 /*22*/].f_6));
		}
		if (__LIB_0__::func_692(Local_289[iVar0 /*22*/]))
		{
			func_199(iVar0);
			switch (Local_289[iVar0 /*22*/].f_18)
			{
				case 0:
					break;
				case 1:
					func_151(iVar0);
					break;
				case 2:
					func_198(iVar0);
					break;
				case 3:
					func_120(iVar0);
					break;
			}
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_289[iVar0 /*22*/]))
			{
				if (__LIB_0__::func_695(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_289[iVar0 /*22*/], PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_289[iVar0 /*22*/]);
						func_125();
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_289[iVar0 /*22*/], PLAYER::PLAYER_PED_ID(), true))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_289[iVar0 /*22*/]);
					func_125();
				}
				Local_289[iVar0 /*22*/].f_18 = 1;
				Local_289[iVar0 /*22*/].f_21 = 0;
			}
			__LIB_0__::func_714(&(Local_289[iVar0 /*22*/].f_6));
			__LIB_0__::func_124(&(Local_289[iVar0 /*22*/]), 1, 0, 1);
		}
		iVar0++;
	}
}

void func_198(int iParam0)//Position - 0x72BD
{
	char* sVar0;
	float fVar1;
	switch (Local_289[iParam0 /*22*/].f_19)
	{
		case 1:
			if (MISC::GET_GAME_TIMER() - Local_289[iParam0 /*22*/].f_14) > MISC::GET_RANDOM_INT_IN_RANGE(2500, 3000)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 362.63586f, -1581.2556f, 31.547737f, 358.10736f, -1586.615f, 34.297737f, 2f, false, true, 0))
				{
					func_127(iParam0);
					func_125();
					return;
				}
				if (func_124(iParam0, 12))
				{
					func_134(iParam0);
					return;
				}
				else
				{
					if ((BitTest(Local_289[iParam0 /*22*/].f_15, 13) && (MISC::GET_GAME_TIMER() - iLocal_276) > 2500) && !iLocal_466)
					{
						if (iParam0 == 0)
						{
							sVar0 = "PRA_COPST1";
						}
						else if (iParam0 == 1)
						{
							sVar0 = "PRA_COPST2";
						}
						__LIB_14__::func_654(&uLocal_294, cLocal_293, sVar0, 7, 0, 0);
						MISC::CLEAR_BIT(&(Local_289[iParam0 /*22*/].f_15), 13);
						MISC::CLEAR_BIT(&(Local_289[func_150(iParam0) /*22*/].f_15), 13);
						iLocal_466 = 1;
					}
					Local_289[iParam0 /*22*/].f_17 = 1;
				}
			}
			break;
		case 2:
			if (MISC::GET_GAME_TIMER() - Local_289[iParam0 /*22*/].f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1500, 2000)
			{
				if (func_124(iParam0, 12))
				{
					func_134(iParam0);
					return;
				}
				else
				{
					Local_289[iParam0 /*22*/].f_17 = 1;
				}
			}
			break;
		case 4:
			if (MISC::GET_GAME_TIMER() - Local_289[iParam0 /*22*/].f_14) > MISC::GET_RANDOM_INT_IN_RANGE(2500, 3000)
			{
				if (func_124(iParam0, 12))
				{
					func_134(iParam0);
					return;
				}
				else
				{
					Local_289[iParam0 /*22*/].f_17 = 1;
				}
			}
			break;
		case 5:
			if (MISC::GET_GAME_TIMER() - Local_289[iParam0 /*22*/].f_14) > MISC::GET_RANDOM_INT_IN_RANGE(2500, 3000)
			{
				if (!__LIB_0__::func_687(Local_289[iParam0 /*22*/], PLAYER::PLAYER_PED_ID(), 1.5f, 1))
				{
					MISC::CLEAR_BIT(&(Local_289[iParam0 /*22*/].f_15), 5);
				}
				if (func_124(iParam0, 12))
				{
					func_134(iParam0);
					return;
				}
				else
				{
					Local_289[iParam0 /*22*/].f_17 = 1;
				}
			}
			break;
		case 6:
			if (MISC::GET_GAME_TIMER() - Local_289[iParam0 /*22*/].f_14) > MISC::GET_RANDOM_INT_IN_RANGE(5000, 6000)
			{
				if (func_124(iParam0, 12))
				{
					func_134(iParam0);
					return;
				}
				else if (iLocal_277 > 0)
				{
					func_127(iParam0);
					func_125();
				}
			}
			break;
		case 7:
			if (MISC::GET_GAME_TIMER() - Local_289[iParam0 /*22*/].f_14) > MISC::GET_RANDOM_INT_IN_RANGE(2500, 3000)
			{
				fVar1 = PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID());
				if (((fVar1 < 12f && !Local_289[iParam0 /*22*/].f_16) && !BitTest(Local_289[iParam0 /*22*/].f_15, 10)) && !__LIB_6__::func_572(Local_289[iParam0 /*22*/], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
				{
					MISC::CLEAR_BIT(&(Local_289[iParam0 /*22*/].f_15), 11);
				}
				if (func_124(iParam0, 12))
				{
					func_134(iParam0);
					return;
				}
				else
				{
					Local_289[iParam0 /*22*/].f_17 = 1;
				}
			}
			break;
	}
}

void func_199(int iParam0)//Position - 0x75AD
{
	func_200(iParam0);
	func_184(iParam0);
	func_175(iParam0);
}

void func_200(int iParam0)//Position - 0x75C7
{
	func_194(iParam0);
	func_203(iParam0);
	func_190(iParam0);
	if (!BitTest(Local_289[iParam0 /*22*/].f_15, 1))
	{
		if ((Local_289[iParam0 /*22*/].f_20 != 6 && Local_289[iParam0 /*22*/].f_20 != 7) && !bLocal_274)
		{
			if (!bLocal_272 && __LIB_0__::func_725(Local_289[iParam0 /*22*/], Local_289[iParam0 /*22*/].f_1, 6f, 1))
			{
				func_202(iParam0);
			}
			func_187(iParam0);
			func_201(iParam0);
		}
	}
}

void func_201(int iParam0)//Position - 0x764D
{
	bool bVar0;
	if (!iLocal_466)
	{
		bVar0 = PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID());
		if (!BitTest(Local_289[iParam0 /*22*/].f_15, 13))
		{
			if (BitTest(Local_289[iParam0 /*22*/].f_15, 10))
			{
				if (Local_289[iParam0 /*22*/].f_16)
				{
					if (bVar0)
					{
						func_186(iParam0, 13);
					}
					else
					{
						func_185(iParam0, 13);
					}
				}
			}
		}
		else if (func_133(iParam0))
		{
			if (bVar0)
			{
				if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_289[iParam0 /*22*/], 10f, 1))
				{
					if (!BitTest(Local_289[iParam0 /*22*/].f_15, 10) && !BitTest(Local_289[iParam0 /*22*/].f_15, 6))
					{
						MISC::CLEAR_BIT(&(Local_289[iParam0 /*22*/].f_15), 13);
					}
				}
			}
			else
			{
				func_185(iParam0, 13);
			}
		}
	}
}

void func_202(int iParam0)//Position - 0x770E
{
	bool bVar0;
	bVar0 = WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4);
	if (Local_289[iParam0 /*22*/].f_20 != 6 && Local_289[iParam0 /*22*/].f_20 != 7)
	{
		if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_289[iParam0 /*22*/], 12f, 1))
		{
			if (bVar0)
			{
				if (Local_289[iParam0 /*22*/].f_16)
				{
					if (!BitTest(Local_289[iParam0 /*22*/].f_15, 2))
					{
						func_186(iParam0, 2);
					}
				}
			}
			else
			{
				func_185(iParam0, 2);
			}
		}
		else if (bVar0)
		{
			if (BitTest(Local_289[iParam0 /*22*/].f_15, 10))
			{
				if (!BitTest(Local_289[iParam0 /*22*/].f_15, 2))
				{
					func_186(iParam0, 2);
				}
			}
			else
			{
				func_185(iParam0, 2);
			}
		}
		else
		{
			func_185(iParam0, 2);
		}
	}
}

void func_203(int iParam0)//Position - 0x77C9
{
	if (!func_173(iParam0))
	{
		if (bLocal_274)
		{
			func_125();
		}
		else if (__LIB_38__::func_294(Local_289[iParam0 /*22*/], 1, 70f, 150f, 0, 1, 0, 1) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_289[iParam0 /*22*/], true), 100f))
		{
			func_125();
		}
		else if (func_204(func_150(iParam0)))
		{
			func_125();
		}
	}
}

int func_204(int iParam0)//Position - 0x7839
{
	float fVar0;
	if (__LIB_0__::func_692(Local_289[iParam0 /*22*/]))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			fVar0 = 20f;
		}
		else
		{
			fVar0 = 3f;
		}
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_289[iParam0 /*22*/], fVar0, fVar0, fVar0, false, true, 0))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_289[iParam0 /*22*/]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_289[iParam0 /*22*/]))
			{
				if (Local_289[iParam0 /*22*/].f_16)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_205()//Position - 0x78BB
{
	if ((Local_289[0 /*22*/].f_18 == 1 && Local_289[1 /*22*/].f_18 == 1) && Local_289[2 /*22*/].f_18 == 1)
	{
		if ((((__LIB_0__::func_692(Local_289[0 /*22*/]) && __LIB_0__::func_692(Local_289[1 /*22*/])) && __LIB_16__::func_328(&uLocal_46, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true))) && __LIB_0__::func_725(Local_289[0 /*22*/], Local_289[0 /*22*/].f_1, 3f, 1)) && __LIB_0__::func_725(Local_289[1 /*22*/], Local_289[1 /*22*/].f_1, 3f, 1))
		{
			if ((func_124(0, 15) && func_124(1, 15)) && !iLocal_459[iLocal_462])
			{
				if (func_206(0, &(iLocal_459[iLocal_462]), sLocal_460[iLocal_462], 10f, 4))
				{
					iLocal_462++;
					if (iLocal_462 == 2)
					{
						iLocal_462 = 0;
					}
					iLocal_461 = 1;
				}
			}
		}
		else if ((__LIB_0__::func_692(Local_289[2 /*22*/]) && __LIB_16__::func_328(&uLocal_98, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true))) && __LIB_0__::func_725(Local_289[2 /*22*/], Local_289[2 /*22*/].f_1, 3f, 1))
		{
			if (!BitTest(Local_289[2 /*22*/].f_15, 2) && !BitTest(Local_289[2 /*22*/].f_15, 4))
			{
				if (func_206(0, &(iLocal_459[2]), "PRA_COPTLK3", 10f, 4))
				{
					iLocal_461 = 1;
				}
			}
		}
		else if (iLocal_461 && __LIB_0__::func_75())
		{
			__LIB_0__::func_325();
			iLocal_461 = 0;
		}
	}
}

bool func_206(int iParam0, var uParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x7A40
{
	if (!*uParam1)
	{
		if (!__LIB_0__::func_75() && CAM::IS_SCREEN_FADED_IN())
		{
			if (func_131(iParam0, fParam3) && !__LIB_0__::func_501("PR_TAKBACK" /* GXT: Titanium Infinity Exhaust */, 0, 0))
			{
				*uParam1 = __LIB_2__::func_859(&uLocal_294, cLocal_293, sParam2, iParam4, 0, 0, 0);
			}
		}
	}
	else if (!func_131(iParam0, fParam3))
	{
		__LIB_0__::func_638();
	}
	return *uParam1;
}

void func_209()//Position - 0x7B42
{
	var uVar0;
	func_91(&Local_290, &uVar0, &iLocal_42, &iLocal_261, &iLocal_260, Local_266, 0, 0, 1090519040);
	func_118();
	func_106();
	switch (iLocal_41)
	{
		case 0:
			if (func_71(iLocal_40, bLocal_28))
			{
				__LIB_17__::func_541(&iLocal_260, Local_290.f_0, 1);
				__LIB_17__::func_531("PR_GOVEH", &iLocal_259);
				AUDIO::TRIGGER_MUSIC_EVENT("FHPRA_START");
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_41748[13 /*31*/]))
				{
					AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(Global_41748[13 /*31*/], true);
				}
				iLocal_479 = 0;
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 10f, 4);
				iLocal_41 = 1;
			}
			break;
		case 1:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
			{
				if (__LIB_0__::func_692(Local_289[2 /*22*/]))
				{
					if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 371.93933f, -1604.2518f, 45.603f, 399.83713f, -1627.0651f, 31.75287f, 32.73f, false, true, 2) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						}
					}
				}
			}
			if ((PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()) && iLocal_479 == 0) && __LIB_0__::func_76(Local_290.f_0, PLAYER::PLAYER_PED_ID(), 1) < 100f)
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(7f, 7f, 4);
				iLocal_479 = 1;
			}
			if (__LIB_0__::func_695(Local_290.f_0))
			{
				if ((iLocal_42 == 1 || iLocal_42 == 2) || iLocal_42 == 3)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 6f, 4);
					iLocal_41 = 2;
				}
				if (bLocal_274)
				{
					if (__LIB_16__::func_328(&uLocal_150, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
					{
						PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
					}
				}
			}
			break;
		case 2:
			__LIB_0__::func_714(&iLocal_260);
			func_99(0);
			break;
		case 3:
			if (__LIB_0__::func_695(Local_290.f_0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_290.f_0, -1);
			}
			__LIB_17__::func_401(1, 1, 1);
			iLocal_41 = 1;
			break;
	}
}

void func_210()//Position - 0x7D1C
{
	switch (iLocal_41)
	{
		case 0:
			if (func_71(iLocal_40, 0))
			{
				__LIB_0__::func_468(78);
				PLAYER::SET_MAX_WANTED_LEVEL(1);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
				MISC::CLEAR_AREA_OF_PEDS(369.0115f, -1609.1163f, 28.2928f, 5f, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_289[0 /*22*/].f_1, 5f, 0);
				if (func_275(PLAYER::PLAYER_PED_ID(), 12, 4) || func_275(PLAYER::PLAYER_PED_ID(), 12, 3))
				{
					bLocal_272 = true;
				}
				__LIB_17__::func_553();
				__LIB_16__::func_916(78);
				if (__LIB_0__::func_323())
				{
					__LIB_0__::func_433(0, -1, 1);
					__LIB_0__::func_84(500, 1);
					iLocal_41 = 2;
				}
				else
				{
					if (__LIB_0__::func_2(0))
					{
						__LIB_17__::func_520(PLAYER::PLAYER_PED_ID(), 408.3364f, -1567.4294f, 28.2723f, 128.2512f);
						__LIB_14__::func_748(408.3364f, -1567.4294f, 28.2723f, 50f, 12, 5000, 0, 0);
						__LIB_0__::func_84(500, 1);
					}
					iLocal_41 = 2;
				}
			}
			break;
		case 2:
			func_99(0);
			break;
	}
}

int func_275(int iParam0, int iParam1, int iParam2)//Position - 0xE892
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
				if (!func_275(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_275(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_275(iParam0, 14, iVar4))
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
			if (!func_275(iParam0, 14, uVar8[iVar7]))
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

void func_365()//Position - 0x29C48
{
	func_367();
	func_366();
}

void func_366()//Position - 0x29C58
{
	if (PED::IS_COP_PED_IN_AREA_3D(385.8528f, -1629.9448f, 35.29278f, 398.8063f, -1640.8654f, 28f))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_269, 0, true, true);
	}
	else
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_269, 1, true, true);
	}
}

void func_367()//Position - 0x29C9C
{
	if (bLocal_274)
	{
		if (PED::IS_COP_PED_IN_AREA_3D(387.00583f, -1641.5375f, 20.489498f, 404.14117f, -1580.3018f, 40.34303f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 390.4927f, -1621.0696f, 28.29278f, 406.0266f, -1604.3584f, 35.2086f, 15f, false, true, 0))
		{
			if (__LIB_16__::func_328(&uLocal_150, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
			{
				func_369(Global_41748[13 /*31*/], &fLocal_270);
				return;
			}
		}
		else
		{
			func_368(Global_41748[13 /*31*/], &fLocal_270);
		}
	}
	else if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()) || iLocal_42 == 1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 390.4927f, -1621.0696f, 28.29278f, 406.0266f, -1604.3584f, 35.2086f, 15f, false, true, 0) || PED::IS_COP_PED_IN_AREA_3D(387.00583f, -1641.5375f, 20.489498f, 404.14117f, -1580.3018f, 40.34303f))
		{
			func_369(Global_41748[13 /*31*/], &fLocal_270);
		}
		else
		{
			func_368(Global_41748[13 /*31*/], &fLocal_270);
		}
	}
	else if (!PED::IS_COP_PED_IN_AREA_3D(387.00583f, -1641.5375f, 20.489498f, 404.14117f, -1580.3018f, 40.34303f))
	{
		func_368(Global_41748[13 /*31*/], &fLocal_270);
	}
	else
	{
		func_369(Global_41748[13 /*31*/], &fLocal_270);
	}
}

void func_368(int iParam0, float fParam1)//Position - 0x29E0F
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if (*fParam1 != 0f)
		{
			if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_271))
			{
				iLocal_271 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(400.86282f, -1609.7386f, 28.29278f, 7.5f, 2f, 9.5f, __LIB_12__::func_418(229.3746f), false, 7);
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, *fParam1, true, true);
			*fParam1 = (*fParam1 - (0.2f * SYSTEM::TIMESTEP()));
			if (*fParam1 <= 0f)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1, true, false);
				PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_271);
				*fParam1 = 0f;
			}
		}
	}
}

void func_369(int iParam0, float fParam1)//Position - 0x29E9A
{
	if (*fParam1 != 1f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, *fParam1, true, true);
		*fParam1 = (*fParam1 + (0.2f * SYSTEM::TIMESTEP()));
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_271))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_271);
		}
		if (*fParam1 >= 1f)
		{
			*fParam1 = 1f;
		}
	}
}

void func_370()//Position - 0x29EE3
{
	func_371();
	if (iLocal_467)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			__LIB_0__::func_681(27, 1);
			iLocal_467 = 0;
		}
	}
}

void func_371()//Position - 0x29F0C
{
	if (!iLocal_283)
	{
		if (iLocal_42 == 1 || iLocal_42 == 2)
		{
			__LIB_0__::func_377(Local_290.f_0, 650);
			__LIB_0__::func_499(649, 0);
			iLocal_283 = 1;
		}
	}
}

void func_373()//Position - 0x29F8C
{
	if (!bLocal_28 && iLocal_40 != 4)
	{
		if (iLocal_40 > 0)
		{
			func_377();
			func_374();
		}
	}
}

void func_374()//Position - 0x29FB1
{
	if (iLocal_40 != 2 && iLocal_40 != 3)
	{
		if (!__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), 372.0053f, -1604.0758f, 36.7536f, 100f, 1) && !bLocal_287)
		{
			__LIB_17__::func_766("PR_AREAWARN", &bLocal_287);
		}
		else if (!__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), 372.0053f, -1604.0758f, 36.7536f, 170f, 1) && bLocal_287)
		{
			func_375(3);
		}
	}
}

void func_375(int iParam0)//Position - 0x2A02F
{
	HUD::CLEAR_PRINTS();
	__LIB_0__::func_325();
	AUDIO::TRIGGER_MUSIC_EVENT("FHPRA_FAIL");
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			sLocal_257 = "PR_FWRECK";
			break;
		case 2:
			sLocal_257 = "PR_FSTUCK";
			break;
		case 3:
			sLocal_257 = "PR_FLEFT";
			break;
		case 4:
			sLocal_257 = "PR_FLEFTV";
			break;
	}
	iLocal_40 = 4;
	iLocal_41 = 0;
}

void func_377()//Position - 0x2A0BA
{
	if (!__LIB_0__::func_695(Local_290.f_0))
	{
		func_375(1);
	}
	else
	{
		func_378();
		if (iLocal_40 == 2 || iLocal_40 == 3)
		{
			if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_290.f_0, 50f, 1) && !bLocal_288)
			{
				__LIB_17__::func_766("PR_VANWARN", &bLocal_288);
			}
			else if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_290.f_0, 100f, 1) && bLocal_288)
			{
				func_375(4);
			}
		}
	}
}

void func_378()//Position - 0x2A138
{
	if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_290.f_0))
	{
		if (iLocal_268)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_267) > 5000)
			{
				func_375(2);
				return;
			}
		}
		else
		{
			iLocal_267 = MISC::GET_GAME_TIMER();
			iLocal_268 = 1;
		}
	}
	else
	{
		iLocal_268 = 0;
	}
	if (__LIB_17__::func_536(Local_290.f_0))
	{
		func_375(2);
	}
}

void func_384()//Position - 0x2A303
{
	func_396();
	func_394();
	func_389();
	func_388();
	func_387();
	func_385();
}

void func_385()//Position - 0x2A323
{
	Local_255[1 /*7*/] = { __LIB_16__::func_865(359.52383f, -1581.4447f, 28.29278f, 341.13434f, -1603.0525f, 40.37049f, 7.3f) };
	Local_255[2 /*7*/] = { __LIB_16__::func_865(352.2312f, -1590.4707f, 28.29277f, 341.13434f, -1603.0525f, 40.37049f, 6.78f) };
	Local_255[0 /*7*/] = { __LIB_16__::func_865(344.58505f, -1601.5624f, 28.29278f, 342.42746f, -1604.0714f, 40.29278f, 3.79f) };
	Local_255[3 /*7*/] = { __LIB_16__::func_865(345.01022f, -1604.0956f, 40.6735f, 361.0914f, -1617.4596f, 28.29278f, 3.33f) };
	Local_255[4 /*7*/] = { __LIB_16__::func_865(362.79855f, -1577.0809f, 28.29278f, 341.13434f, -1603.0525f, 40.37049f, 6.78f) };
	Local_255[5 /*7*/] = { __LIB_16__::func_865(365.9773f, -1611.556f, 28.29277f, 373.12787f, -1617.8064f, 40.37049f, 19.19f) };
}

void func_387()//Position - 0x2A469
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_43[iVar0] = 0;
		iLocal_44[iVar0] = 0;
		iVar0++;
	}
	Local_254[0 /*4*/] = { 344.4447f, -1603.4282f, 28.2928f };
	Local_254[0 /*4*/].f_3 = 228.9052f;
	Local_254[1 /*4*/] = { 345.9821f, -1604.8014f, 28.2928f };
	Local_254[1 /*4*/].f_3 = 40.2137f;
}

void func_388()//Position - 0x2A4D9
{
	iLocal_269 = -1469527606;
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_269))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_269, joaat("prop_fnclink_03gate5"), 391.8602f, -1636.0702f, 29.9744f, true, true, false);
	}
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[13 /*31*/], 1, true, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_269, 1, true, false);
}

void func_389()//Position - 0x2A52A
{
	struct<3> Var0[8];
	Var0[0 /*3*/] = { 331.7678f, -1596.3956f, 31.53864f };
	Var0[1 /*3*/] = { 348.4934f, -1576.6566f, 31.83304f };
	Var0[2 /*3*/] = { 356.26553f, -1567.3965f, 28.29265f };
	Var0[3 /*3*/] = { 368.48047f, -1576.2739f, 28.26307f };
	Var0[4 /*3*/] = { 364.82422f, -1580.7374f, 28.29278f };
	Var0[5 /*3*/] = { 350.28958f, -1606.6141f, 28.29278f };
	Var0[6 /*3*/] = { 346.13925f, -1608.5228f, 31.53354f };
	func_393(&uLocal_46, &Var0, 7);
	Var0[0 /*3*/] = { 353.657f, -1613.4214f, 28.29278f };
	Var0[1 /*3*/] = { 391.31555f, -1601.6332f, 28.29278f };
	Var0[2 /*3*/] = { 397.66696f, -1607.1677f, 28.29278f };
	Var0[3 /*3*/] = { 376.64902f, -1633.0956f, 26.96452f };
	func_393(&uLocal_98, &Var0, 4);
	Var0[0 /*3*/] = { 344.0985f, -1605.1539f, 28.2928f };
	Var0[1 /*3*/] = { 365.6985f, -1580.435f, 28.2928f };
	Var0[2 /*3*/] = { 407.9943f, -1616.2589f, 28.2928f };
	Var0[3 /*3*/] = { 387.3322f, -1641.2583f, 29.0912f };
	func_393(&uLocal_150, &Var0, 4);
	__LIB_16__::func_332(&uLocal_202);
	__LIB_16__::func_331(&uLocal_202, 408.8245f, -1616.0111f, 31.7537f);
	__LIB_16__::func_331(&uLocal_202, 376.3118f, -1588.0358f, 36.7534f);
	__LIB_16__::func_331(&uLocal_202, 354.1272f, -1614.819f, 31.5335f);
	__LIB_16__::func_331(&uLocal_202, 387.2971f, -1641.9429f, 31.833f);
	__LIB_16__::func_330(&uLocal_202);
}

void func_393(var uParam0, var uParam1, int iParam2)//Position - 0x2A7F5
{
	int iVar0;
	__LIB_16__::func_332(uParam0);
	iVar0 = 0;
	while (iVar0 <= (iParam2 - 1))
	{
		__LIB_16__::func_331(uParam0, *(uParam1[iVar0 /*3*/]));
		iVar0++;
	}
	__LIB_16__::func_330(uParam0);
}

void func_394()//Position - 0x2A82C
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = joaat("S_M_Y_Cop_01");
	Local_289[0 /*22*/] = { func_395(353.1191f, -1589.6061f, 28.2928f, 270.0968f, iVar0) };
	Local_289[1 /*22*/] = { func_395(354.557f, -1590.5488f, 28.2928f, 16.3702f, iVar0) };
	Local_289[2 /*22*/] = { func_395(369.8186f, -1611.0293f, 28.3928f, 9.0837f, iVar0) };
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		Local_289[iVar1 /*22*/].f_18 = 0;
		Local_289[iVar1 /*22*/].f_19 = 0;
		Local_289[iVar1 /*22*/].f_20 = 0;
		Local_289[iVar1 /*22*/].f_17 = 0;
		Local_289[iVar1 /*22*/].f_16 = 0;
		iVar2 = 0;
		while (iVar2 <= (15 - 1))
		{
			MISC::CLEAR_BIT(&(Local_289[iVar1 /*22*/].f_15), iVar2);
			iVar2++;
		}
		iVar1++;
	}
	iLocal_461 = 0;
	iLocal_462 = 0;
	sLocal_460[0] = "PRA_COPTLK1";
	sLocal_460[1] = "PRA_COPTLK2";
}

struct<22> func_395(struct<3> Param0, float fParam1, int iParam2)//Position - 0x2A928
{
	struct<22> Var0;
	Var0.f_14 = -1;
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam1;
	Var0.f_5 = iParam2;
	return Var0;
}

void func_396()//Position - 0x2A954
{
	Local_290 = { __LIB_17__::func_537(372.9868f, -1623.5312f, 28.2928f, 321.7075f, joaat("policet")) };
	Local_291[0 /*6*/] = { __LIB_17__::func_537(400.5771f, -1618.9274f, 28.2928f, 48.8115f, joaat("police3")) };
	Local_291[1 /*6*/] = { __LIB_17__::func_537(396.6843f, -1623.222f, 28.2928f, 231.3392f, joaat("police3")) };
	Local_291[2 /*6*/] = { __LIB_17__::func_537(394.3527f, -1625.3374f, 28.2928f, 49.3732f, joaat("police3")) };
}

void func_398()//Position - 0x2AA0F
{
	PED::ADD_RELATIONSHIP_GROUP("COPS", &iLocal_292);
}

void func_399()//Position - 0x2AA23
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_292);
	__LIB_0__::func_552(1);
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_41748[13 /*31*/]))
	{
		AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(Global_41748[13 /*31*/], false);
	}
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41748[13 /*31*/], 0f, true, true);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[13 /*31*/], 4, true, true);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_269, 0, true, false);
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_269, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_264, false);
	func_55();
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	__LIB_16__::func_911();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	func_400(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_400(bool bParam0)//Position - 0x2AAA6
{
	struct<3> Var0;
	if (bParam0)
	{
		MISC::CLEAR_AREA(372.9868f, -1623.5312f, 28.2928f, 100f, true, false, false, false);
	}
	__LIB_0__::func_638();
	HUD::CLEAR_PRINTS();
	__LIB_17__::func_402(1, 1, 1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	__LIB_17__::func_772();
	func_33();
	func_406();
	__LIB_0__::func_467();
	__LIB_0__::func_467();
	__LIB_0__::func_467();
	if (bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_290.f_0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_290.f_0, false))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
					}
				}
			}
		}
		func_2();
	}
	else
	{
		func_401();
	}
	HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
	if (CAM::DOES_CAM_EXIST(iLocal_263))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_263, false);
	}
}

void func_401()//Position - 0x2AB80
{
	int iVar0;
	VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Local_290.f_0);
	__LIB_0__::func_106(&Local_290);
	__LIB_0__::func_122(&iLocal_262, 0);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		__LIB_0__::func_124(&(Local_289[iVar0 /*22*/]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		__LIB_0__::func_106(&(Local_291[iVar0 /*6*/]));
		iVar0++;
	}
}

void func_406()//Position - 0x2AC2E
{
	int iVar0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_290.f_5);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_291[iVar0 /*6*/].f_5);
		iVar0++;
	}
}

void func_411()//Position - 0x2AD14
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
				if (!func_16(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_14__::func_534();
		}
	}
}

void func_413()//Position - 0x2ADC3
{
	__LIB_0__::func_507(475.3364f, -1409.7823f, 28.3108f, 123.1614f);
	__LIB_14__::func_555(471.5946f, -1412.737f, 28.1562f, 68.5531f);
}

