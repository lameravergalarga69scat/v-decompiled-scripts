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
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = -1;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 1000;
	var uLocal_44 = 1000;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	struct<4> Local_47[10];
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
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
	int iLocal_65 = 0;
	struct<61> Local_66 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 16;
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
	int* iLocal_237 = NULL;
	int* iLocal_238 = NULL;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
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
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	var uLocal_263 = 0;
	bool bLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	bool bLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	struct<3> Local_288 = { 0, 0, 0 } ;
	struct<3> Local_289 = { 0, 0, 0 } ;
	struct<3> Local_290 = { 0, 0, 0 } ;
	struct<3> Local_291 = { 0, 0, 0 } ;
	struct<13> Local_292[4];
	struct<9> Local_293 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	struct<9> Local_298 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	struct<13> Local_303[3];
	struct<13> Local_304[3];
	struct<13> Local_305[6];
	struct<13> Local_306[2];
	int iLocal_307[3] = { 0, 0, 0 };
	int iLocal_308[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_309[2] = { 0, 0 };
	int iLocal_310[3] = { 0, 0, 0 };
	int iLocal_311[4] = { 0, 0, 0, 0 };
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	var uLocal_314 = 0;
	int iLocal_315 = 0;
	struct<6> Local_316[9];
	struct<6> Local_317 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_318[2];
	struct<6> Local_319 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	struct<4> Local_328 = { 0, 0, 0, 0 } ;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	struct<6> Local_331[6];
	struct<6> Local_332 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_333 = 15;
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
	var uLocal_385 = 15;
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
	var uLocal_437 = 15;
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
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
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
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	struct<61> Local_489 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
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
	uLocal_50 = __LIB_2__::func_108(64);
	uLocal_51 = __LIB_2__::func_108(63);
	iLocal_52 = joaat("U_M_M_Aldinapoli");
	iLocal_53 = joaat("premier");
	iLocal_67 = 1;
	iLocal_266 = 1;
	bLocal_267 = true;
	Local_288 = { -1304.7542f, -38.3551f, 47.0814f };
	Local_289 = { -1340.5546f, 17.6527f, 51.7458f };
	Local_290 = { -1388.4355f, 138.2263f, 55.0734f };
	iLocal_326 = -1;
	iLocal_327 = joaat("U_M_M_MarkFost");
	Local_66 = { ScriptParam_489 };
	__LIB_20__::func_264(&Local_66);
	__LIB_26__::func_252();
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_38__::func_39(1);
		func_542(1);
	}
	if (__LIB_0__::func_294())
	{
		Global_78564 = 1;
		iLocal_49 = 0;
		while (!func_535(&Local_66, &uLocal_333))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_10__::func_700(&Local_66, 0, 1);
		Global_78564 = 0;
		__LIB_11__::func_797("Set up script for replay");
	}
	Local_293.f_0 = Local_66.f_28[0];
	Local_298.f_0 = Local_66.f_28[1];
	Local_303[0 /*13*/] = Local_66.f_28[2];
	Local_303[1 /*13*/] = Local_66.f_28[3];
	Local_303[2 /*13*/] = Local_66.f_28[4];
	Local_328.f_1 = Local_66.f_41[0];
	Local_332.f_0 = Local_66.f_41[1];
	iLocal_323 = Local_66.f_41[2];
	Local_317.f_0 = Local_66.f_35[0];
	Local_316[4 /*6*/] = Local_66.f_35[1];
	Local_316[5 /*6*/] = Local_66.f_35[2];
	VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_317.f_0);
	iLocal_252 = 1;
	iLocal_243 = 1;
	iLocal_270 = MISC::GET_GAME_TIMER();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	MISC::CLEAR_BIT(&(Global_113386.f_18574.f_382), 4);
	func_515();
	iVar0 = 0;
	while (iVar0 <= (Local_303.f_0 - 1))
	{
		if (__LIB_0__::func_121(Local_303[iVar0 /*13*/]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_303[iVar0 /*13*/], iLocal_320);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_303[iVar0 /*13*/], false, iLocal_320);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_320, joaat("PLAYER"));
		}
		iVar0++;
	}
	if (MISC::IS_NEXT_WEATHER_TYPE("THUNDER") || MISC::IS_PREV_WEATHER_TYPE("THUNDER"))
	{
		MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("OVERCAST", 25f);
	}
	if (__LIB_0__::func_294() || __LIB_0__::func_2(0))
	{
		if (__LIB_0__::func_2(0) && !__LIB_0__::func_294())
		{
			iVar1 = 0;
			__LIB_10__::func_701(PLAYER::PLAYER_PED_ID(), -1291.5958f, -12.9214f, 48.5137f, 294.7073f, 0, 1);
		}
		else
		{
			iVar1 = __LIB_0__::func_315();
		}
		__LIB_11__::func_796("Replay stage grabbed: ", iVar1);
		if (Global_94618 == 1)
		{
			iVar1++;
		}
		switch (iVar1)
		{
			case 0:
				__LIB_11__::func_796("Replay skipping to stage ", 1);
				__LIB_0__::func_370(-1291.5958f, -12.9214f, 48.5137f, 294.7073f, 1, 0);
				func_501(1, 0);
				break;
			case 1:
				__LIB_11__::func_796("Replay skipping to stage ", 3);
				__LIB_0__::func_370(-1190.22f, 36.83f, 52.03f, 299f, 1, 0);
				func_501(3, 0);
				break;
			case 2:
				__LIB_11__::func_796("Replay skipping to stage ", 7);
				__LIB_0__::func_370(-1324.8539f, 60.2491f, 52.54f, 94.6913f, 1, 0);
				func_501(7, 0);
				break;
			default:
				break;
			}
	}
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_VSM", 0);
		SYSTEM::WAIT(0);
		__LIB_35__::func_898(Local_66.f_9, 0, 0, 0, 0, 0);
		if (__LIB_0__::func_121(Local_293.f_0))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_270) > 2000)
			{
				if (!iLocal_269)
				{
					__LIB_0__::func_477(Local_293.f_0, 0);
					__LIB_11__::func_797("Added Mark to headshot watch");
					iLocal_269 = 1;
				}
			}
		}
		if (iLocal_67 == 8)
		{
			func_477();
		}
		else
		{
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				switch (iLocal_67)
				{
					case 0:
						func_475();
						break;
					case 1:
						func_469();
						break;
					case 2:
						func_393();
						break;
					case 3:
						func_383();
						break;
					case 4:
						func_368();
						break;
					case 5:
						func_333();
						break;
					case 6:
						func_325();
						break;
					case 9:
						func_323();
						break;
					case 10:
						func_300();
						break;
					case 7:
						func_36();
						break;
				}
			}
			else
			{
				func_34(0);
			}
			if (iLocal_71 == 0)
			{
				func_1(iLocal_70);
			}
		}
	}
}

void func_1(int iParam0)//Position - 0x46A
{
	if (iLocal_67 == iParam0)
	{
		iLocal_71 = 1;
		if (iLocal_67 == 3)
		{
			__LIB_0__::func_210("N1D_TAKE", 7500, 5);
		}
		if (__LIB_0__::func_295())
		{
			if (__LIB_0__::func_315() == 1)
			{
				__LIB_6__::func_775(Local_319.f_0, -1, 1);
			}
			else
			{
				__LIB_6__::func_775(0, -1, 1);
			}
		}
		__LIB_40__::func_640(1, 1, 1);
	}
	else
	{
		__LIB_11__::func_797("Still skipping...");
		func_2();
	}
}

void func_2()//Position - 0x4C4
{
	int iVar0;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		__LIB_0__::func_296();
	}
	switch (iLocal_67)
	{
		case 0:
			__LIB_11__::func_797("In INTRO_PHONECALL stage skip");
			if (iLocal_69 == 1)
			{
				if (__LIB_0__::func_75())
				{
					__LIB_6__::func_771();
					__LIB_20__::func_507();
				}
				iLocal_257 = 1;
				iLocal_69 = 2;
			}
			break;
		case 1:
			__LIB_11__::func_797("In GO_TO_THE_GOLF_CLUB stage skip");
			if ((func_9(1) && func_8(1)) && func_7(1))
			{
				if (!__LIB_0__::func_295())
				{
					if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1291.5958f, -12.9214f, 48.5137f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 303.114f);
					}
				}
			}
			break;
		case 2:
			__LIB_11__::func_797("Skipping MS_GO_TO_CELBRITY...");
			iLocal_248 = 0;
			if (__LIB_0__::func_75())
			{
				__LIB_0__::func_296();
			}
			if (!__LIB_0__::func_295())
			{
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1190.22f, 36.83f, 52.03f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 299f);
				}
			}
			break;
		case 3:
			__LIB_11__::func_797("In GO_TO_CELBRITY stage skip");
			if (__LIB_0__::func_75())
			{
				__LIB_0__::func_296();
			}
			if (!__LIB_0__::func_295())
			{
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1102.4547f, 73.615f, 53.2039f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 238f);
				}
				if (__LIB_1__::func_197(Local_293.f_0))
				{
					if (__LIB_1__::func_183(Local_317.f_0))
					{
						if (!PED::IS_PED_IN_VEHICLE(Local_293.f_0, Local_317.f_0, false))
						{
							PED::SET_PED_INTO_VEHICLE(Local_293.f_0, Local_317.f_0, -1);
						}
					}
				}
			}
			break;
		case 4:
			__LIB_11__::func_797("Skipping MS_CHASE_THE_GOLFER...");
			if (__LIB_1__::func_183(Local_317.f_0))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_317.f_0))
				{
					TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Local_317.f_0);
				}
				ENTITY::SET_ENTITY_COORDS(Local_317.f_0, -1246.9563f, -89.9753f, 42.904f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_317.f_0, 238f);
				if (__LIB_1__::func_197(Local_293.f_0))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_293.f_0, Local_317.f_0, false))
					{
						PED::SET_PED_INTO_VEHICLE(Local_293.f_0, Local_317.f_0, -1);
					}
				}
			}
			if (!__LIB_0__::func_295())
			{
				if (__LIB_1__::func_183(Local_316[4 /*6*/]))
				{
					if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_316[4 /*6*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_316[4 /*6*/], -1);
						}
					}
					ENTITY::SET_ENTITY_COORDS(Local_316[4 /*6*/], -1273.7362f, -75.3014f, 44.6289f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_316[4 /*6*/], 242f);
				}
				else
				{
					__LIB_11__::func_797("Skip buggy isn't okay, probably going to fail");
				}
			}
			iLocal_260 = 0;
			iLocal_69 = 2;
			break;
		case 5:
			__LIB_11__::func_797("Skipping MS_CHASE_IN_CITY...");
			if (__LIB_1__::func_183(Local_317.f_0))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_317.f_0, 450, 0);
				__LIB_11__::func_797("SKIPPED CITY CHASE SETTING HEALTH TO 450 ");
			}
			if (__LIB_0__::func_121(iLocal_323))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_323))
				{
					ENTITY::DETACH_ENTITY(iLocal_323, true, true);
				}
			}
			__LIB_0__::func_0(&Local_293);
			iLocal_252 = 0;
			iLocal_260 = 0;
			__LIB_11__::func_32(&Local_317);
			SYSTEM::WAIT(2000);
			iLocal_69 = 2;
			break;
		case 6:
			__LIB_11__::func_797("Skipping MS_COLLECT_GOLF_CLUB...");
			if (!__LIB_0__::func_295())
			{
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_323, true) + Vector(0f, 1.5f, 0f), true, false, false, true);
				}
			}
			iLocal_260 = 1;
			iLocal_69 = 2;
			break;
		case 7:
			if (iLocal_69 == 1)
			{
				if (__LIB_0__::func_75())
				{
					__LIB_6__::func_771();
					__LIB_20__::func_507();
				}
				iLocal_257 = 1;
				iLocal_69 = 2;
			}
			break;
		case 9:
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (__LIB_0__::func_121(Local_303[iVar0 /*13*/]))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_303[iVar0 /*13*/], 0, 0);
				}
				iVar0++;
			}
			break;
		case 10:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			}
			break;
	}
}

int func_7(int iParam0)//Position - 0x9A9
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		STREAMING::REQUEST_MODEL(Local_304[iVar0 /*13*/].f_8);
		iVar0++;
	}
	if (iParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_304[iVar0 /*13*/].f_8))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 == 0)
		{
			SYSTEM::WAIT(0);
			iVar1 = 1;
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_304[iVar0 /*13*/].f_8))
				{
					iVar1 = 0;
				}
				iVar0++;
			}
		}
	}
	return 1;
}

int func_8(int iParam0)//Position - 0xA3B
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		STREAMING::REQUEST_MODEL(Local_303[iVar0 /*13*/].f_8);
		iVar0++;
	}
	if (iParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_303[iVar0 /*13*/].f_8))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 == 0)
		{
			SYSTEM::WAIT(0);
			iVar1 = 1;
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_303[iVar0 /*13*/].f_8))
				{
					iVar1 = 0;
				}
				iVar0++;
			}
		}
	}
	return 1;
}

int func_9(int iParam0)//Position - 0xACD
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		STREAMING::REQUEST_MODEL(Local_292[iVar0 /*13*/].f_8);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		STREAMING::REQUEST_MODEL(Local_316[iVar0 /*6*/].f_5);
		iVar0++;
	}
	if (iParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_292[iVar0 /*13*/].f_8))
			{
				return 0;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_316[iVar0 /*6*/].f_5))
			{
				return 0;
			}
			iVar0++;
		}
		if (((!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DTRANS") || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DGOLF")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DGOLF2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DCRASH"))
		{
			return 0;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 == 0)
		{
			SYSTEM::WAIT(0);
			iVar1 = 1;
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_292[iVar0 /*13*/].f_8))
				{
					iVar1 = 0;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_316[iVar0 /*6*/].f_5))
				{
					iVar1 = 0;
				}
				iVar0++;
			}
			if (((!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DTRANS") || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DGOLF")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DGOLF2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DCRASH"))
			{
				iVar1 = 0;
			}
		}
	}
	return 1;
}

void func_34(int iParam0)//Position - 0x1238
{
	iLocal_275 = iParam0;
	func_35(8);
}

void func_35(int iParam0)//Position - 0x124B
{
	iLocal_67 = iParam0;
	iLocal_69 = 0;
}

void func_36()//Position - 0x125A
{
	int iVar0;
	switch (iLocal_69)
	{
		case 0:
			__LIB_11__::func_797("ENTERING END PHONECALL");
			iLocal_271 = MISC::GET_GAME_TIMER();
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 0;
				while (iVar0 <= 2)
				{
					func_299(Local_303[iVar0 /*13*/], 0);
					__LIB_0__::func_523(&(Local_303[iVar0 /*13*/].f_11));
					iVar0++;
				}
				__LIB_0__::func_523(&iLocal_237);
				__LIB_0__::func_202(&uLocal_72, 2);
				__LIB_0__::func_202(&uLocal_72, 3);
				__LIB_0__::func_202(&uLocal_72, 4);
				__LIB_0__::func_203(&uLocal_72, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				__LIB_0__::func_203(&uLocal_72, 3, 0, "NIGEL", 0, 1);
				__LIB_0__::func_203(&uLocal_72, 4, 0, "MRSTHORNHILL", 0, 1);
				iLocal_69 = 1;
				__LIB_11__::func_797("ENTERING END PHONECALL LOOP");
			}
			break;
		case 1:
			func_257();
			if (!__LIB_0__::func_75())
			{
				if (!iLocal_257)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_271) > 3000)
					{
						if (__LIB_38__::func_30(&uLocal_72, 64, "NIG1DAU", "NIG1D_OUTRO", 9, 1, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 10f, 1);
							iLocal_257 = 1;
						}
					}
				}
				else if (!__LIB_0__::func_75())
				{
					if (__LIB_10__::func_564())
					{
						iLocal_69 = 2;
					}
				}
			}
			break;
		case 2:
			__LIB_11__::func_797("CLEANUP END PHONECALL");
			HUD::CLEAR_PRINTS();
			func_37();
			break;
	}
}

void func_37()//Position - 0x138B
{
	func_240(1);
	if (iLocal_268 == 1)
	{
		func_236(__LIB_6__::func_757(2), 12, 4, 1, 1);
	}
	func_38(99, 1);
	func_542(1);
}

void func_38(int iParam0, bool bParam1)//Position - 0x13BA
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_18__::func_205();
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
	__LIB_38__::func_136(iVar0, 0);
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
	__LIB_32__::func_577(iVar0, 1, 0, 0);
	__LIB_0__::func_46(0, 0);
	MemCopy(&sVar1, {__LIB_0__::func_339(iVar0)}, 4);
	__LIB_0__::func_44(&sVar1, __LIB_26__::func_250());
	func_63();
	if (BitTest(Global_113386.f_10016.f_25, 3))
	{
		__LIB_0__::func_18();
	}
	__LIB_35__::func_897();
	if (iParam0 == 210 || iParam0 == 211)
	{
		__LIB_24__::func_943(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		__LIB_24__::func_943(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		__LIB_24__::func_943(iParam0, 0, 0);
	}
	__LIB_0__::func_533();
}

void func_63()//Position - 0x2514
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
			iVar3 = __LIB_18__::func_168(iVar1);
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
				if (func_181(iVar1, 14, iVar2))
				{
					func_64(iVar1, 14, iVar2);
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

int func_64(int iParam0, int iParam1, int iParam2)//Position - 0x25D5
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
	Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_181(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { __LIB_18__::func_180(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_64(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { __LIB_18__::func_247(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_64(iParam0, 14, uVar5[iVar3]))
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
		uVar6 = { __LIB_18__::func_180(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
		}
	}
	if (func_107(iParam0, iVar0, &iVar7, 0))
	{
		func_67(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_65(iParam0, iVar0, &iVar7))
	{
		func_67(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_65(int iParam0, int iParam1, int iParam2)//Position - 0x2791
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_181(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_67(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x2858
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
		Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_20__::func_322(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_6__::func_795(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_6__::func_795(iParam0, 9);
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
			iVar7 = __LIB_6__::func_788(iParam0, 1);
			if (!__LIB_6__::func_780(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_6__::func_788(iParam0, 0);
			if (!__LIB_6__::func_779(iVar10, 14, iVar8, -1) && !__LIB_6__::func_827(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_6__::func_788(iParam0, 2);
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
			uVar11 = { __LIB_18__::func_180(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, uVar11[iVar0], -1) };
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
							uVar12 = { __LIB_18__::func_247(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_20__::func_322(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_40__::func_943(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_67(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
							__LIB_0__::func_211(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_20__::func_322(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_40__::func_943(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_67(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, func_73(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_107(iParam0, iVar10, &iVar4, 1))
							{
								func_67(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_67(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_35__::func_896(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_67(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_67(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_67(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_67(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_67(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_18__::func_247(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_20__::func_322(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__::func_943(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_67(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_20__::func_322(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__::func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_67(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = __LIB_40__::func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_67(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_39__::func_857(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_107(iParam0, iVar10, &iVar4, 0))
		{
			func_67(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_65(iParam0, iVar10, &iVar4))
		{
			func_67(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_73(int iParam0, int iParam1, int iParam2)//Position - 0x3895
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
				if (func_181(iParam0, iParam1, iVar0))
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
				if (func_181(iParam0, iParam1, iVar1))
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

int func_107(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9F6F
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_181(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_181(int iParam0, int iParam1, int iParam2)//Position - 0x205FB
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
	Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_18__::func_180(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_181(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_181(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_181(iParam0, 14, iVar4))
										{
											if (!__LIB_24__::func_955(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__::func_795(iParam0, iVar2);
						Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_24__::func_955(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
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
		uVar8 = { __LIB_18__::func_247(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_181(iParam0, 14, uVar8[iVar7]))
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

int func_236(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x27F83
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_35__::func_896(iParam0, iParam1, iParam2, -1) };
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
					uVar3 = { __LIB_18__::func_180(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_236(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_38__::func_82(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__::func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_236(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_38__::func_82(iParam0, 14, uVar4[iVar2], 1);
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
								func_236(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_236(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_236(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_236(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_236(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_236(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_236(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_236(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_236(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_236(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_236(iParam0, 14, iVar5, 1, 0);
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
								func_236(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_236(iParam0, 14, 17, 1, 0);
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

void func_240(int iParam0)//Position - 0x28431
{
	if (iParam0 == 1)
	{
		HUD::CLEAR_PRINTS();
	}
	HUD::CLEAR_HELP(true);
}

void func_257()//Position - 0x28B58
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_121(Local_293.f_0))
	{
		switch (iLocal_68)
		{
			case 0:
				func_294();
				if (__LIB_42__::func_335(Local_293.f_0, 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_0__::func_75())
						{
							__LIB_6__::func_771();
						}
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_328.f_1, Local_293.f_0, PED::GET_PED_BONE_INDEX(Local_293.f_0, 28422), 0.06f, 0.04f, 0f, -90f, 180f, 0f, false, false, false, false, 2, true, 0);
						if (__LIB_1__::func_183(Local_317.f_0))
						{
							if (__LIB_1__::func_197(Local_293.f_0))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_293.f_0, Local_317.f_0, false))
								{
									TASK::TASK_ENTER_VEHICLE(Local_293.f_0, Local_317.f_0, -1, -1, 2f, 1, 0);
								}
							}
						}
						__LIB_11__::func_797("GS_WAIT_FOR_PLAYER, player threatened Glen; attacking...");
						__LIB_0__::func_203(&uLocal_72, 7, Local_303[0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
						if (func_273())
						{
							__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_6", 7, 0, 0);
						}
						else
						{
							__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_5", 7, 0, 0);
						}
						func_267();
						iLocal_68 = 3;
					}
					else
					{
						__LIB_6__::func_771();
					}
				}
				else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_293.f_0, 11f, 11f, 11f, false, true, 0))
				{
					if (!func_181(PLAYER::PLAYER_PED_ID(), 12, 4))
					{
						if (__LIB_0__::func_75())
						{
							__LIB_6__::func_771();
						}
						__LIB_0__::func_203(&uLocal_72, 6, Local_293.f_0, "FOSTENBURG", 0, 1);
						__LIB_0__::func_203(&uLocal_72, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_FLEE", "NIG1D_FLEE_1", 7, 0, 0);
						if (__LIB_1__::func_183(Local_317.f_0))
						{
							if (__LIB_1__::func_197(Local_293.f_0))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_293.f_0, Local_317.f_0, false))
								{
									TASK::TASK_ENTER_VEHICLE(Local_293.f_0, Local_317.f_0, -1, -1, 2f, 1, 0);
								}
							}
						}
						__LIB_11__::func_797("GS_WAIT_FOR_PLAYER, player got too close to Glen (alert_dis); attacking...");
						func_267();
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_328.f_1, Local_293.f_0, PED::GET_PED_BONE_INDEX(Local_293.f_0, 28422), 0.06f, 0.04f, 0f, -90f, 180f, 0f, false, false, false, false, 2, true, 0);
						iLocal_68 = 3;
					}
					else
					{
						iLocal_286 = MISC::GET_GAME_TIMER();
						iLocal_279 = MISC::GET_GAME_TIMER();
						iLocal_68 = 1;
					}
				}
				break;
			case 1:
				if (__LIB_42__::func_335(Local_293.f_0, 1, 1116471296, 1126825984, 0, 0, 0, 0) || iLocal_248 == 1)
				{
					__LIB_11__::func_797("GS_PLAYER_IN_OUTFIT, player threatened Glen or returned a second time; attacking...");
					func_267();
				}
				else
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_293.f_0, 11f, 11f, 11f, false, true, 0))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_328.f_1, Local_293.f_0, PED::GET_PED_BONE_INDEX(Local_293.f_0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_322);
						TASK::TASK_ACHIEVE_HEADING(0, 112f, 0);
						TASK::TASK_PLAY_ANIM(0, "rcmnigel1d", "swing_a_mark", 8f, -2f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "rcmnigel1d", "swing_b_mark", 8f, -2f, -1, 0, 0f, false, false, false);
						TASK::SET_SEQUENCE_TO_REPEAT(iLocal_322, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_322);
						TASK::TASK_PERFORM_SEQUENCE(Local_293.f_0, iLocal_322);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_322);
						if (__LIB_0__::func_121(Local_298.f_0))
						{
							TASK::TASK_CLEAR_LOOK_AT(Local_298.f_0);
						}
						iLocal_248 = 1;
						iVar0 = 0;
						while (iVar0 <= 2)
						{
							iLocal_307[iVar0] = 0;
							iVar0++;
						}
						iLocal_68 = 0;
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_279) >= 2500)
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_293.f_0, PLAYER::PLAYER_PED_ID()))
						{
							if (!__LIB_0__::func_75())
							{
								__LIB_0__::func_203(&uLocal_72, 6, Local_293.f_0, "FOSTENBURG", 0, 1);
								__LIB_0__::func_203(&uLocal_72, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
								if (__LIB_35__::func_536(&uLocal_72, "NIG1DAU", "NIG1D_BUMPF", 7, 0, 0, 0))
								{
									iLocal_279 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					if ((__LIB_1__::func_183(Local_317.f_0) && __LIB_1__::func_183(Local_316[5 /*6*/])) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_317.f_0, false) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_316[5 /*6*/], false))
						{
							if (__LIB_0__::func_75())
							{
								__LIB_0__::func_296();
							}
							iLocal_285 = MISC::GET_GAME_TIMER();
							__LIB_0__::func_203(&uLocal_72, 6, Local_293.f_0, "FOSTENBURG", 0, 1);
							__LIB_0__::func_203(&uLocal_72, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
							__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_BANK", "NIG1D_BANK_1", 7, 0, 0);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_322);
							TASK::TASK_PLAY_ANIM(0, "rcmnigel1d", "thanks_male_03", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_322);
							TASK::TASK_PERFORM_SEQUENCE(Local_293.f_0, iLocal_322);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_322);
							iLocal_68 = 2;
						}
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_286) >= 15000)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_293.f_0, 11f, 11f, 11f, false, true, 0))
						{
							__LIB_0__::func_203(&uLocal_72, 6, Local_293.f_0, "FOSTENBURG", 0, 1);
							__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_BANK", "NIG1D_BANK_2", 7, 0, 0);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_322);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_322);
							TASK::TASK_PERFORM_SEQUENCE(Local_293.f_0, iLocal_322);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_322);
							if (__LIB_0__::func_121(Local_328.f_1))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_328.f_1, Local_293.f_0, PED::GET_PED_BONE_INDEX(Local_293.f_0, 28422), 0.06f, 0.04f, 0f, -90f, 180f, 0f, false, false, false, false, 2, true, 0);
							}
							iLocal_285 = MISC::GET_GAME_TIMER();
							iLocal_307[0] = 1;
							iLocal_68 = 2;
						}
					}
				}
				break;
			case 2:
				if (__LIB_42__::func_335(Local_293.f_0, 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					__LIB_11__::func_797("GS_ANGRY_AT_PLAYER, player threatened Glen; attacking...");
					func_267();
				}
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_293.f_0, 11f, 11f, 11f, false, true, 0))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_328.f_1, Local_293.f_0, PED::GET_PED_BONE_INDEX(Local_293.f_0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_322);
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, -1094.57f, 60.98f, 52.67f, 0);
					TASK::TASK_PLAY_ANIM(0, "mini@golf", "iron_idle_high_b", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "mini@golf", "iron_swing_intro_high", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "mini@golf", "iron_swing_action_high", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "mini@golf", "swing_outro", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "mini@golf", "swing_react_bad_02", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::SET_SEQUENCE_TO_REPEAT(iLocal_322, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_322);
					TASK::TASK_PERFORM_SEQUENCE(Local_293.f_0, iLocal_322);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_322);
					if (__LIB_0__::func_121(Local_298.f_0))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_298.f_0);
					}
					iLocal_248 = 1;
					iVar1 = 0;
					while (iVar1 <= 2)
					{
						iLocal_307[iVar1] = 0;
						iVar1++;
					}
					iLocal_68 = 0;
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_279) >= 2500)
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_293.f_0, PLAYER::PLAYER_PED_ID()))
					{
						if (!__LIB_0__::func_75())
						{
							__LIB_0__::func_203(&uLocal_72, 6, Local_293.f_0, "FOSTENBURG", 0, 1);
							__LIB_0__::func_203(&uLocal_72, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
							if (__LIB_35__::func_536(&uLocal_72, "NIG1DAU", "NIG1D_BUMPF", 7, 0, 0, 0))
							{
								iLocal_279 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				break;
			case 3:
				if (((__LIB_1__::func_183(Local_317.f_0) && __LIB_0__::func_76(Local_293.f_0, Local_317.f_0, 1) < 10f) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_317.f_0, false)) && !ENTITY::IS_ENTITY_UPSIDEDOWN(Local_317.f_0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_293.f_0, Local_317.f_0))
					{
						__LIB_0__::func_203(&uLocal_72, 6, Local_293.f_0, "FOSTENBURG", 0, 1);
						__LIB_0__::func_203(&uLocal_72, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_FLEE", "NIG1D_FLEE_3", 7, 0, 0);
						if (__LIB_1__::func_197(Local_293.f_0))
						{
							if (!func_263())
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_293.f_0, Local_317.f_0, "NIGEL1DGOLF", 786468, 0, 12, -1, -1f, false, 2f);
							}
							else
							{
								iLocal_261 = 1;
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_293.f_0, Local_317.f_0, "NIGEL1DGOLF2", 786468, 0, 12, -1, -1f, false, 2f);
							}
						}
						iLocal_68 = 4;
					}
				}
				else
				{
					func_299(Local_293.f_0, 1);
					iLocal_68 = 8;
				}
				func_262();
				break;
			case 4:
				func_260();
				func_259();
				if (__LIB_1__::func_183(Local_317.f_0))
				{
					if (PED::IS_PED_IN_VEHICLE(Local_293.f_0, Local_317.f_0, false))
					{
						if (iLocal_67 != 4)
						{
							if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(Local_317.f_0) >= 200)
							{
								func_299(Local_293.f_0, 0);
								iLocal_68 = 6;
							}
							if (func_258())
							{
								iLocal_68 = 7;
							}
						}
					}
					else
					{
						iLocal_68 = 7;
					}
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_317.f_0, true))
					{
						iLocal_68 = 7;
					}
				}
				break;
			case 5:
				if (__LIB_1__::func_183(Local_317.f_0))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_293.f_0, Local_317.f_0, false))
					{
						iLocal_68 = 7;
					}
				}
				break;
			case 6:
				func_260();
				func_259();
				if (__LIB_1__::func_183(Local_317.f_0))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_293.f_0, Local_317.f_0, false) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_317.f_0, true))
					{
						iLocal_68 = 7;
					}
				}
				break;
			case 7:
				__LIB_11__::func_797("Celeb crashed or forced out - quitting chase");
				if (iLocal_67 < 6)
				{
					__LIB_0__::func_210("N1D_COLLECT", 7500, 5);
					func_35(6);
				}
				if (__LIB_1__::func_183(Local_317.f_0))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_317.f_0))
					{
						TASK::REMOVE_WAYPOINT_RECORDING("NIGEL1DGOLF");
						TASK::REMOVE_WAYPOINT_RECORDING("NIGEL1DGOLF2");
					}
				}
				func_299(Local_293.f_0, 1);
				iLocal_68 = 8;
				break;
			case 8:
				break;
		}
	}
	else
	{
		if (!iLocal_272)
		{
			__LIB_11__::func_797("bReplayCelebDeadCheck tripped, recording last 2 seconds");
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 2f, 0);
			iLocal_272 = 1;
		}
		if (!BitTest(Global_113386.f_18574.f_382, 4))
		{
			MISC::SET_BIT(&(Global_113386.f_18574.f_382), 4);
		}
	}
}

int func_258()//Position - 0x294D8
{
	if (ENTITY::GET_ENTITY_SPEED(Local_317.f_0) < 0.15f && PED::IS_PED_IN_VEHICLE(Local_293.f_0, Local_317.f_0, false))
	{
		iLocal_276++;
		if (iLocal_276 > 30)
		{
			TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Local_317.f_0);
			if (__LIB_1__::func_183(Local_317.f_0) && __LIB_0__::func_121(Local_293.f_0))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(Local_317.f_0, 2f, 3, false);
				if (PED::IS_PED_IN_VEHICLE(Local_293.f_0, Local_317.f_0, false))
				{
					TASK::CLEAR_PED_TASKS(Local_293.f_0);
					if (__LIB_0__::func_75())
					{
						__LIB_6__::func_771();
					}
					__LIB_0__::func_203(&uLocal_72, 6, Local_293.f_0, "FOSTENBURG", 0, 1);
					__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_GIVEUP", "NIG1D_GIVEUP_1", 7, 0, 0);
					__LIB_11__::func_797("Celeb vehicle stuck");
				}
			}
			return 1;
		}
	}
	else
	{
		iLocal_276 = 0;
	}
	return 0;
}

void func_259()//Position - 0x29591
{
	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_293.f_0, true), 20f, true))
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (!__LIB_0__::func_75())
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_283) >= 3000)
				{
					switch (iLocal_277)
					{
						case 0:
							__LIB_0__::func_203(&uLocal_72, 6, Local_293.f_0, "FOSTENBURG", 0, 1);
							__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_HIT", "NIG1D_HIT_7", 7, 0, 0);
							break;
						case 1:
							__LIB_0__::func_203(&uLocal_72, 6, Local_293.f_0, "FOSTENBURG", 0, 1);
							__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_HIT", "NIG1D_HIT_8", 7, 0, 0);
							break;
						case 2:
							__LIB_0__::func_203(&uLocal_72, 6, Local_293.f_0, "FOSTENBURG", 0, 1);
							__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_HIT", "NIG1D_HIT_9", 7, 0, 0);
							break;
						case 3:
							__LIB_0__::func_203(&uLocal_72, 6, Local_293.f_0, "FOSTENBURG", 0, 1);
							__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_HIT", "NIG1D_HIT_10", 7, 0, 0);
							break;
					}
					iLocal_277++;
					iLocal_282 = MISC::GET_GAME_TIMER();
					iLocal_283 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

void func_260()//Position - 0x296A6
{
	if (iLocal_67 == 4 || iLocal_67 == 5)
	{
		if (iLocal_278 < 5)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (!__LIB_0__::func_75())
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_284) > 15000)
					{
						if (__LIB_1__::func_197(Local_293.f_0))
						{
							if (__LIB_8__::func_538(Local_293.f_0, PLAYER::PLAYER_PED_ID()) < 40f)
							{
								__LIB_0__::func_203(&uLocal_72, 6, Local_293.f_0, "FOSTENBURG", 0, 1);
								__LIB_0__::func_203(&uLocal_72, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
								switch (iLocal_278)
								{
									case 0:
										if (__LIB_35__::func_536(&uLocal_72, "NIG1DAU", "NIG1D_CHASE1", 8, 0, 0, 0))
										{
											__LIB_11__::func_797("Chase conv 1 started...");
											iLocal_284 = MISC::GET_GAME_TIMER();
											iLocal_278++;
										}
										break;
									case 1:
										if (__LIB_35__::func_536(&uLocal_72, "NIG1DAU", "NIG1D_CHASE2", 8, 0, 0, 0))
										{
											__LIB_11__::func_797("Chase conv 2 started...");
											iLocal_284 = MISC::GET_GAME_TIMER();
											iLocal_278++;
										}
										break;
									case 2:
										if (__LIB_35__::func_536(&uLocal_72, "NIG1DAU", "NIG1D_CHASE3", 8, 0, 0, 0))
										{
											__LIB_11__::func_797("Chase conv 3 started...");
											iLocal_284 = MISC::GET_GAME_TIMER();
											iLocal_278++;
										}
										break;
									case 3:
										if (iLocal_67 == 5)
										{
											if (__LIB_35__::func_536(&uLocal_72, "NIG1DAU", "NIG1D_CHASE4", 8, 0, 0, 0))
											{
												__LIB_11__::func_797("Chase conv 4 started...");
												iLocal_284 = MISC::GET_GAME_TIMER();
												iLocal_278++;
											}
										}
										break;
									case 4:
										if (iLocal_67 == 5)
										{
											if (__LIB_35__::func_536(&uLocal_72, "NIG1DAU", "NIG1D_CHASE5", 8, 0, 0, 0))
											{
												__LIB_11__::func_797("Chase conv 5 started...");
												iLocal_284 = MISC::GET_GAME_TIMER();
												iLocal_278++;
											}
										}
										break;
									}
								}
							}
						}
					}
				}
			}
	}
}

void func_262()//Position - 0x29856
{
	int iVar0;
	__LIB_11__::func_797("RESET COURSE SECURITY");
	iLocal_251 = 1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_0__::func_121(Local_304[iVar0 /*13*/]))
		{
			iLocal_310[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_263()//Position - 0x29892
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_11__::func_325(&uLocal_437, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
		{
			return 1;
		}
	}
	return 0;
}

void func_267()//Position - 0x29A25
{
	int iVar0;
	if (iLocal_255 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (__LIB_0__::func_121(Local_303[iVar0 /*13*/]))
			{
				TASK::CLEAR_PED_TASKS(Local_303[iVar0 /*13*/]);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_321);
				TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(250, 600));
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_321);
				TASK::TASK_PERFORM_SEQUENCE(Local_303[iVar0 /*13*/], iLocal_321);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_321);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_303[iVar0 /*13*/], 25, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_303[iVar0 /*13*/], true, 1);
				PED::SET_PED_KEEP_TASK(Local_303[iVar0 /*13*/], true);
				TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_303[iVar0 /*13*/], true);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_320, joaat("PLAYER"));
				iLocal_307[iVar0] = 4;
				if (!HUD::DOES_BLIP_EXIST(Local_303[iVar0 /*13*/].f_11))
				{
					Local_303[iVar0 /*13*/].f_11 = __LIB_10__::func_711(Local_303[iVar0 /*13*/], 0, 0, 5);
				}
				__LIB_11__::func_796("Attack player, security guard: ", iVar0);
			}
			iVar0++;
		}
		if (__LIB_1__::func_183(Local_317.f_0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_317.f_0, false))
			{
				if (__LIB_1__::func_197(Local_293.f_0))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_293.f_0, Local_317.f_0, false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_321);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 500);
						TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(250, 500));
						TASK::TASK_ENTER_VEHICLE(0, Local_317.f_0, -1, -1, 2f, 1, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_321);
						TASK::TASK_PERFORM_SEQUENCE(Local_293.f_0, iLocal_321);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_321);
						__LIB_11__::func_797("Making Glen get into vehicle through MAKE_SECURITY_ATTACK()");
						iLocal_68 = 3;
					}
				}
			}
			else
			{
				func_299(Local_293.f_0, 1);
				iLocal_68 = 8;
			}
		}
		else
		{
			func_299(Local_293.f_0, 1);
		}
		if (__LIB_0__::func_121(Local_298.f_0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_298.f_0, true, 1);
		}
		func_299(Local_298.f_0, 1);
		func_269();
		if (iLocal_67 <= 3 && __LIB_0__::func_121(Local_293.f_0))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_328.f_1, Local_293.f_0, PED::GET_PED_BONE_INDEX(Local_293.f_0, 28422), 0.06f, 0.04f, 0f, -90f, 180f, 0f, false, false, false, false, 2, true, 0);
			if (__LIB_0__::func_121(Local_298.f_0))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_332.f_0, Local_298.f_0, PED::GET_PED_BONE_INDEX(Local_298.f_0, 28422), 0.06f, 0.04f, 0f, -90f, 180f, 0f, false, false, false, false, 2, true, 0);
			}
		}
		else if (ENTITY::IS_ENTITY_ATTACHED(Local_328.f_1))
		{
			ENTITY::DETACH_ENTITY(Local_328.f_1, true, true);
		}
		__LIB_0__::func_403(790, 0);
		iLocal_255 = 1;
	}
}

void func_269()//Position - 0x29CC8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (__LIB_0__::func_121(Local_305[iVar0 /*13*/]))
		{
			func_270(iVar0);
			iLocal_308[iVar0] = 3;
		}
		iVar0++;
	}
}

void func_270(int iParam0)//Position - 0x29CFE
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_331[iParam0 /*6*/]))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(Local_331[iParam0 /*6*/]))
		{
			ENTITY::DETACH_ENTITY(Local_331[iParam0 /*6*/], true, true);
		}
	}
	func_299(Local_305[iParam0 /*13*/], 1);
}

int func_273()//Position - 0x29DE1
{
	if ((__LIB_1__::func_562(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_SNIPERRIFLE") || __LIB_1__::func_562(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_HEAVYSNIPER")) || __LIB_1__::func_562(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_REMOTESNIPER"))
	{
		return 1;
	}
	return 0;
}

void func_294()//Position - 0x2A7AC
{
	switch (iLocal_315)
	{
		case 0:
			if (__LIB_1__::func_197(Local_293.f_0) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				if (((__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), Local_293.f_0, 35f, 1) && iLocal_307[0] != 5) && iLocal_307[1] != 5) && iLocal_307[2] != 5)
				{
					if (!__LIB_0__::func_75())
					{
						__LIB_0__::func_203(&uLocal_72, 6, Local_293.f_0, "FOSTENBURG", 0, 1);
						if (__LIB_35__::func_536(&uLocal_72, "NIG1DAU", "NIG1D_SWING", 8, 0, 0, 0))
						{
							iLocal_315 = 1;
						}
					}
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_75())
			{
				iLocal_279 = MISC::GET_GAME_TIMER();
				iLocal_315 = 2;
			}
			break;
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_279) > 4500)
			{
				iLocal_315 = 0;
			}
			break;
	}
}

void func_299(int iParam0, int iParam1)//Position - 0x2A97A
{
	if (__LIB_1__::func_197(iParam0))
	{
		if (iParam1 == 0)
		{
			TASK::CLEAR_PED_TASKS(iParam0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 17, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 31, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 28, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 2, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 128, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 8, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 1, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 32, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 64, false);
			TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iParam0, true);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(iParam0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 17, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 31, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 28, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 2, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 65536, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 128, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 8, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 1, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 32, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 64, false);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_322);
			TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, true, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_322);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_322);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_322);
			PED::SET_PED_KEEP_TASK(iParam0, true);
		}
	}
}

void func_300()//Position - 0x2AABA
{
	int iVar0;
	switch (iLocal_69)
	{
		case 0:
			if (iLocal_259 == 0)
			{
				__LIB_0__::func_210("N1D_WANTED", 7500, 5);
				iLocal_259 = 1;
			}
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				func_299(Local_303[iVar0 /*13*/], 0);
				__LIB_0__::func_523(&(Local_303[iVar0 /*13*/].f_11));
				iVar0++;
			}
			__LIB_11__::func_797("ENTERING LOSE THE COPS");
			iLocal_69 = 1;
			break;
		case 1:
			func_257();
			func_311();
			func_304();
			func_301();
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_69 = 2;
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			iLocal_257 = 0;
			func_35(7);
			break;
	}
}

void func_301()//Position - 0x2AB5E
{
	if (iLocal_266)
	{
		if (!__LIB_0__::func_121(Local_293.f_0) && func_303())
		{
			__LIB_11__::func_797("Player achieved FOUR!");
			iLocal_266 = 0;
			__LIB_0__::func_498(792);
		}
	}
}

int func_303()//Position - 0x2AC04
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (Local_303[iVar0 /*13*/].f_9 == 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_304()//Position - 0x2AC30
{
	int iVar0;
	if (iLocal_246 == 0)
	{
		if (func_310(0))
		{
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				func_309(&(Local_306[iVar0 /*13*/]), 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_306[iVar0 /*13*/], true);
				PED::SET_PED_CAN_BE_TARGETTED(Local_306[iVar0 /*13*/], false);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				__LIB_30__::func_555(&(Local_318[iVar0 /*6*/]), 0);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_318[iVar0 /*6*/].f_5, true);
				iVar0++;
			}
			iLocal_246 = 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (__LIB_0__::func_121(Local_306[iVar0 /*13*/]))
			{
				func_305(iVar0);
			}
			iVar0++;
		}
	}
}

void func_305(int iParam0)//Position - 0x2ACD6
{
	switch (iLocal_309[iParam0])
	{
		case 0:
			if (__LIB_1__::func_183(Local_317.f_0))
			{
				if (__LIB_0__::func_121(Local_293.f_0))
				{
					if (PED::IS_PED_IN_VEHICLE(Local_293.f_0, Local_317.f_0, false))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(Local_293.f_0, Local_306[iParam0 /*13*/], 62f, 62f, 62f, false, true, 0))
						{
							if (__LIB_1__::func_197(Local_306[iParam0 /*13*/]))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_306[iParam0 /*13*/], Local_293.f_0, -1);
								iLocal_309[iParam0] = 1;
							}
						}
						else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_306[iParam0 /*13*/], true), 15f, true))
						{
							__LIB_0__::func_203(&uLocal_72, 8, Local_306[iParam0 /*13*/], "NIGEL1DAMBIENTGOLFER1", 0, 1);
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_306[iParam0 /*13*/], 1) < 45f)
							{
								__LIB_6__::func_834(Local_305[iParam0 /*13*/], "GENERIC_CURSE_MED", 34);
							}
							func_299(Local_306[iParam0 /*13*/], 0);
							iLocal_309[iParam0] = 3;
						}
					}
					else if (__LIB_42__::func_335(Local_306[iParam0 /*13*/], 1, 1116471296, 1126825984, 0, 0, 0, 0) || ENTITY::IS_ENTITY_AT_ENTITY(Local_293.f_0, Local_306[iParam0 /*13*/], 30f, 30f, 30f, false, true, 0))
					{
						func_299(Local_306[iParam0 /*13*/], 0);
						iLocal_309[iParam0] = 3;
					}
				}
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_AT_ENTITY(Local_293.f_0, Local_306[iParam0 /*13*/], 38f, 38f, 38f, false, true, 0))
			{
				if (__LIB_1__::func_197(Local_306[iParam0 /*13*/]))
				{
					__LIB_0__::func_203(&uLocal_72, 8, Local_306[iParam0 /*13*/], "NIGEL1DAMBIENTGOLFER1", 0, 1);
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_306[iParam0 /*13*/], 1) < 45f)
					{
						__LIB_6__::func_834(Local_305[iParam0 /*13*/], "GENERIC_CURSE_HIGH", 34);
					}
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_306[iParam0 /*13*/]);
					TASK::TASK_GO_STRAIGHT_TO_COORD(Local_306[iParam0 /*13*/], Local_306[iParam0 /*13*/].f_4, 3f, -1, 40000f, 0.5f);
					PED::SET_PED_KEEP_TASK(Local_306[iParam0 /*13*/], true);
					iLocal_309[iParam0] = 2;
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_AT_COORD(Local_306[iParam0 /*13*/], Local_306[iParam0 /*13*/].f_4, 2f, 2f, 2f, false, true, 0))
			{
				func_299(Local_306[iParam0 /*13*/], 0);
				iLocal_309[iParam0] = 3;
			}
			break;
		case 3:
			break;
	}
}

void func_309(int iParam0, int iParam1)//Position - 0x2B183
{
	if (STREAMING::HAS_MODEL_LOADED(iParam0->f_8))
	{
		*iParam0 = PED::CREATE_PED(26, iParam0->f_8, iParam0->f_1, 0f, true, true);
		if (__LIB_0__::func_121(*iParam0))
		{
			ENTITY::SET_ENTITY_HEADING(*iParam0, iParam0->f_7);
		}
		if (iParam1 == 1)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_8);
		}
	}
}

int func_310(int iParam0)//Position - 0x2B1CF
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		STREAMING::REQUEST_MODEL(Local_306[iVar0 /*13*/].f_8);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		STREAMING::REQUEST_MODEL(Local_318[iVar0 /*6*/].f_5);
		iVar0++;
	}
	if (iParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_306[iVar0 /*13*/].f_8))
			{
				return 0;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_318[iVar0 /*6*/].f_5))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 == 0)
		{
			SYSTEM::WAIT(0);
			iVar1 = 1;
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_306[iVar0 /*13*/].f_8))
				{
					iVar1 = 0;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_318[iVar0 /*6*/].f_5))
				{
					iVar1 = 0;
				}
				iVar0++;
			}
		}
	}
	return 1;
}

void func_311()//Position - 0x2B2CD
{
	int iVar0;
	if (iLocal_243 == 0)
	{
		if (func_8(0))
		{
			__LIB_11__::func_797("Celeb security loaded, creating now...");
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				func_309(&(Local_303[iVar0 /*13*/]), 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_303[iVar0 /*13*/], true);
				WEAPON::GIVE_WEAPON_TO_PED(Local_303[iVar0 /*13*/], joaat("WEAPON_PISTOL"), -1, false, true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_303[iVar0 /*13*/], true);
				PED::SET_PED_CAN_BE_TARGETTED(Local_303[iVar0 /*13*/], true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_303[iVar0 /*13*/], iLocal_320);
				PED::SET_PED_DIES_WHEN_INJURED(Local_303[iVar0 /*13*/], true);
				PED::SET_PED_MODEL_IS_SUPPRESSED(Local_303[iVar0 /*13*/].f_8, true);
				iVar0++;
			}
			iLocal_243 = 1;
		}
	}
	else
	{
		func_312();
	}
}

void func_312()//Position - 0x2B375
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_0__::func_121(Local_303[iVar0 /*13*/]))
		{
			if (iLocal_255 == 0 && iLocal_249 == 0)
			{
				if (func_321())
				{
					__LIB_11__::func_797("Monitor_Security, player has 'mucked about' with the celeb scene; attacking...");
					if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), -1098.8646f, 69.9792f, 53.6198f, 1) < 45f)
					{
						__LIB_0__::func_203(&uLocal_72, 7, Local_303[iVar0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
						__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 0, 0);
						func_267();
					}
					else
					{
						func_318();
					}
				}
			}
			func_313(iVar0);
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(Local_303[iVar0 /*13*/].f_11))
			{
				HUD::REMOVE_BLIP(&(Local_303[iVar0 /*13*/].f_11));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_303[iVar0 /*13*/]))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_303[iVar0 /*13*/], false))
				{
					Local_303[iVar0 /*13*/].f_9 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_313(int iParam0)//Position - 0x2B463
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(Local_303[iParam0 /*13*/]))
	{
		if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 1) < 20f)
		{
			if (!PED::IS_PED_HEADTRACKING_PED(Local_303[iParam0 /*13*/], PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_303[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), 1000, 0, 2);
			}
		}
	}
	switch (iLocal_307[iParam0])
	{
		case 0:
			if (__LIB_42__::func_335(Local_303[iParam0 /*13*/], 1, 1116471296, 1126825984, 0, 0, 0, 0) || PED::HAS_PED_RECEIVED_EVENT(Local_303[iParam0 /*13*/], 61))
			{
				if (__LIB_40__::func_639(Local_303[iParam0 /*13*/], 110f))
				{
					if (__LIB_0__::func_75())
					{
						__LIB_6__::func_771();
					}
					if (func_273())
					{
						__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
						__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_6", 7, 1, 0);
					}
					__LIB_11__::func_797("SS_GUARD_AREA, player threatened Celeb security; attacking...");
					func_267();
				}
			}
			else if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				if ((ENTITY::IS_ENTITY_ON_SCREEN(Local_303[iParam0 /*13*/]) && __LIB_40__::func_639(Local_303[iParam0 /*13*/], 1126825984)) && __LIB_0__::func_76(Local_303[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), 1) < 50f)
				{
					if (__LIB_0__::func_75())
					{
						__LIB_6__::func_771();
					}
					__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
					__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_6", 7, 1, 0);
					__LIB_11__::func_797("SS_GUARD_AREA, player tried sniping Celeb security but was spotted; attacking...");
					func_267();
				}
			}
			else if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_303[iParam0 /*13*/]))
			{
				if (func_273())
				{
					if (__LIB_40__::func_639(Local_303[iParam0 /*13*/], 1126825984))
					{
						if (__LIB_0__::func_75())
						{
							__LIB_6__::func_771();
						}
						__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
						if (__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_6", 7, 1, 0))
						{
							__LIB_11__::func_797("SS_GUARD_AREA, player aimed Sniper Rifle when security could see them; attacking...");
							func_267();
						}
					}
				}
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 25f, 25f, 25f, false, true, 0))
				{
					if (!func_181(PLAYER::PLAYER_PED_ID(), 12, 4))
					{
						if (!func_317())
						{
							if (__LIB_40__::func_639(Local_303[iParam0 /*13*/], 1126825984) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 18f, 18f, 18f, false, true, 0))
							{
								if (__LIB_0__::func_75())
								{
									__LIB_6__::func_771();
								}
								__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
								if (__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_5", 7, 0, 0))
								{
									__LIB_11__::func_797("SS_GUARD_AREA, player armed, not wearing outfit, guard has LOS or player within 18m; attacking...");
									func_267();
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 18f, 18f, 18f, false, true, 0))
						{
							if (iLocal_247 == 0)
							{
								__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
								{
									if (__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_1", 7, 0, 0))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_321);
										TASK::TASK_PLAY_ANIM(0, "rcmnigel1d", "thanks_male_03", 8f, -8f, -1, 0, 0f, false, false, false);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_321);
										TASK::TASK_PERFORM_SEQUENCE(Local_303[iParam0 /*13*/], iLocal_321);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_321);
										iLocal_285 = MISC::GET_GAME_TIMER();
										iLocal_247 = 1;
										iLocal_307[iParam0] = 1;
									}
								}
								else if (__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_1", 7, 1, 0))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_321);
									TASK::TASK_PLAY_ANIM(0, "rcmnigel1d", "thanks_male_03", 8f, -8f, -1, 0, 0f, false, false, false);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_321);
									TASK::TASK_PERFORM_SEQUENCE(Local_303[iParam0 /*13*/], iLocal_321);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_321);
									iLocal_285 = MISC::GET_GAME_TIMER();
									iLocal_247 = 1;
									iLocal_307[iParam0] = 1;
								}
							}
							else if (iLocal_249 == 1)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 12f, 12f, 12f, false, true, 0))
								{
									if (__LIB_0__::func_75())
									{
										__LIB_6__::func_771();
									}
									__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
									if (__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 0, 0))
									{
										__LIB_11__::func_797("SS_GUARD_AREA, non-outfit, player came back to area after being warned; attacking");
										func_267();
									}
								}
							}
						}
					}
					else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 18f, 18f, 18f, false, true, 0))
					{
						if (iLocal_247 == 0)
						{
							if (!__LIB_0__::func_75() && iLocal_257 == 0)
							{
								if (__LIB_1__::func_197(Local_303[iParam0 /*13*/]))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_303[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), -1);
								}
								if (__LIB_1__::func_197(Local_298.f_0))
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_298.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								}
								if (__LIB_1__::func_197(Local_293.f_0))
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_293.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_322);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1500);
									TASK::TASK_PLAY_ANIM(0, "rcmnigel1d", "idle_c", 2f, -4f, -1, 1, 0f, false, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_322);
									TASK::TASK_PERFORM_SEQUENCE(Local_293.f_0, iLocal_322);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_322);
								}
								__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
								__LIB_0__::func_203(&uLocal_72, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
								__LIB_0__::func_203(&uLocal_72, 6, Local_293.f_0, "FOSTENBURG", 0, 1);
								if (__LIB_35__::func_536(&uLocal_72, "NIG1DAU", "NIG1D_OUTFIT", 7, 0, 0, 0))
								{
									iLocal_247 = 1;
									iVar0 = 0;
									while (iVar0 <= 2)
									{
										iLocal_307[iVar0] = 5;
										iVar0++;
									}
								}
							}
						}
						else if (iLocal_249 == 1)
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 12f, 12f, 12f, false, true, 0))
							{
								if (__LIB_0__::func_75())
								{
									__LIB_6__::func_771();
								}
								__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
								if (__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 1, 0))
								{
									__LIB_11__::func_797("SS_GUARD_AREA, outfit, player came back to area after being warned; attacking");
									func_267();
								}
							}
						}
					}
				}
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 50f, 50f, 50f, false, true, 0))
			{
				if (!VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), Local_317.f_5))
				{
					if (__LIB_40__::func_639(Local_303[iParam0 /*13*/], 1126825984))
					{
						if (__LIB_0__::func_75())
						{
							__LIB_6__::func_771();
						}
						__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
						if (__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 1, 0))
						{
							__LIB_11__::func_797("SS_GUARD_AREA, player 50m away from group in non-buggy vehicle; attacking");
							func_267();
						}
					}
				}
				else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 25f, 25f, 25f, false, true, 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 15f)
					{
						__LIB_11__::func_978("Going too fast, going to trigger aggro: ", ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)));
						if (PED::HAS_PED_RECEIVED_EVENT(Local_303[iParam0 /*13*/], 61) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 6f, 6f, 6f, false, true, 0))
						{
							if (__LIB_40__::func_639(Local_303[iParam0 /*13*/], 1126825984))
							{
								if (__LIB_0__::func_75())
								{
									__LIB_6__::func_771();
								}
								__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
								if (__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 1, 0))
								{
									__LIB_11__::func_797("SS_GUARD_AREA, player went too fast too close to security; attacking");
									func_267();
								}
							}
						}
					}
					else if (__LIB_40__::func_639(Local_303[iParam0 /*13*/], 1126825984))
					{
						__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
						if (iLocal_254 == 0)
						{
							if (__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_7", 7, 0, 0))
							{
								__LIB_11__::func_796("'You can't drive through here buddy said by ped id: ", iParam0);
								if (__LIB_1__::func_197(Local_303[iParam0 /*13*/]))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_303[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), -1);
								}
								iLocal_254 = 1;
								iLocal_285 = MISC::GET_GAME_TIMER();
								iLocal_307[iParam0] = 2;
							}
						}
						else
						{
							if (__LIB_1__::func_197(Local_303[iParam0 /*13*/]))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_303[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), -1);
							}
							iLocal_254 = 1;
							iLocal_285 = MISC::GET_GAME_TIMER();
							iLocal_307[iParam0] = 2;
						}
					}
				}
			}
			break;
		case 1:
			if (!func_317())
			{
				if (__LIB_40__::func_639(Local_303[iParam0 /*13*/], 1126825984))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 1) < 80f)
					{
						__LIB_11__::func_797("SS_GO_TO_PLAYER, player armed, guard has LOS; attacking...");
						func_267();
					}
				}
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 9f, 9f, 9f, false, true, 0) && iLocal_249 == 1)
			{
				__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
				if (__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_3", 7, 0, 0))
				{
					if (__LIB_1__::func_197(Local_303[iParam0 /*13*/]))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_303[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), -1);
					}
					iLocal_285 = MISC::GET_GAME_TIMER();
					iLocal_307[iParam0] = 3;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_285) >= 8000)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 20f, 20f, 20f, false, true, 0))
				{
					__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
					if (__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_2", 7, 0, 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_321);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
						TASK::TASK_PLAY_ANIM(0, "rcmnigel1d", "thanks_male_05", 4f, -4f, -1, 0, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_321);
						TASK::TASK_PERFORM_SEQUENCE(Local_303[iParam0 /*13*/], iLocal_321);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_321);
						iLocal_285 = MISC::GET_GAME_TIMER();
						iLocal_307[iParam0] = 2;
						__LIB_11__::func_797("Guard: going into SS_WARN_PLAYER ");
					}
				}
			}
			break;
		case 2:
			if (!func_317())
			{
				if (__LIB_40__::func_639(Local_303[iParam0 /*13*/], 1126825984))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 1) < 80f)
					{
						__LIB_11__::func_797("SS_WARN_PLAYER, player armed, guard has LOS; attacking...");
						func_267();
					}
				}
			}
			else if (!func_181(PLAYER::PLAYER_PED_ID(), 12, 4))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 4f, 4f, 4f, false, true, 0) || (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_293.f_0, 8f, 8f, 8f, false, true, 0) && iLocal_249 == 1))
				{
					__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
					if (__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_3", 7, 0, 0))
					{
						if (__LIB_1__::func_197(Local_303[iParam0 /*13*/]))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_303[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), -1);
						}
						iLocal_285 = MISC::GET_GAME_TIMER();
						iLocal_307[iParam0] = 3;
					}
					__LIB_11__::func_797("SS_WARN_PLAYER, player got too close, going to aim...");
				}
				else
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 9f, 9f, 9f, false, true, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 15f)
							{
								if (__LIB_0__::func_75())
								{
									__LIB_6__::func_771();
								}
								__LIB_11__::func_978("SS_WARN_PLAYER, going too fast: ", ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)));
								__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
								__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 0, 0);
								__LIB_11__::func_797("SS_WARN_PLAYER, player in vehicle going too fast within 9m of guard; attacking...");
								func_267();
							}
						}
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_285) >= 7000)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 20f, 20f, 20f, false, true, 0))
						{
							__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
							if (__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_3", 7, 0, 0))
							{
								if (__LIB_1__::func_197(Local_303[iParam0 /*13*/]))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_303[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), -1);
								}
								iLocal_285 = MISC::GET_GAME_TIMER();
								iLocal_307[iParam0] = 3;
								__LIB_11__::func_797("SS_WARN_PLAYER, player took too long, going to aim...");
							}
						}
						else if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 1) > 20f)
						{
							TASK::TASK_ACHIEVE_HEADING(Local_303[iParam0 /*13*/], Local_303[iParam0 /*13*/].f_7, 0);
							TASK::TASK_CLEAR_LOOK_AT(Local_303[iParam0 /*13*/]);
							__LIB_11__::func_797("SS_WARN_PLAYER, player >20m away, returning to SS_GUARD_AREA...");
							iLocal_307[iParam0] = 0;
						}
					}
				}
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 18f, 18f, 18f, false, true, 0))
			{
				if (iLocal_247 == 0)
				{
					if (!__LIB_0__::func_75() && iLocal_257 == 0)
					{
						if (__LIB_1__::func_197(Local_303[iParam0 /*13*/]))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_303[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), -1);
						}
						if (__LIB_1__::func_197(Local_293.f_0))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_293.f_0, PLAYER::PLAYER_PED_ID(), -1);
						}
						__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
						__LIB_0__::func_203(&uLocal_72, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						__LIB_0__::func_203(&uLocal_72, 6, Local_293.f_0, "FOSTENBURG", 0, 1);
						if (__LIB_35__::func_536(&uLocal_72, "NIG1DAU", "NIG1D_OUTFIT", 7, 0, 0, 0))
						{
							iLocal_247 = 1;
							iVar1 = 0;
							while (iVar1 <= 2)
							{
								iLocal_307[iVar1] = 5;
								iVar1++;
							}
						}
					}
				}
				else if (iLocal_249 == 1)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 12f, 12f, 12f, false, true, 0))
					{
						if (__LIB_0__::func_75())
						{
							__LIB_6__::func_771();
						}
						__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
						if (__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 1, 0))
						{
							__LIB_11__::func_797("SS_WARN_PLAYER, outfit worn, player came back to area after being warned; attacking");
							func_267();
						}
					}
				}
			}
			break;
		case 3:
			if (!func_317())
			{
				if (__LIB_40__::func_639(Local_303[iParam0 /*13*/], 1126825984))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 1) < 80f)
					{
						if (__LIB_0__::func_75())
						{
							__LIB_6__::func_771();
						}
						__LIB_11__::func_797("SS_AIM_AT_PLAYER, player armed, guard has LOS; attacking...");
						if (iLocal_255 == 0)
						{
							func_267();
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_303[iParam0 /*13*/]);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_321);
							TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(5, 200));
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_321);
							TASK::TASK_PERFORM_SEQUENCE(Local_303[iParam0 /*13*/], iLocal_321);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_321);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_303[iParam0 /*13*/], 25, true);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_303[iParam0 /*13*/], true, 1);
							PED::SET_PED_KEEP_TASK(Local_303[iParam0 /*13*/], true);
							TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_303[iParam0 /*13*/], true);
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_320, joaat("PLAYER"));
							iLocal_307[iParam0] = 4;
							if (!HUD::DOES_BLIP_EXIST(Local_303[iParam0 /*13*/].f_11))
							{
								Local_303[iParam0 /*13*/].f_11 = __LIB_10__::func_711(Local_303[iParam0 /*13*/], 0, 0, 5);
							}
							__LIB_11__::func_796("Attack player, FORCE security guard: ", iParam0);
						}
					}
				}
			}
			else
			{
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_303[iParam0 /*13*/], true), 20f, false) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 20f, 20f, 20f, false, true, 0))
				{
					if (__LIB_0__::func_75())
					{
						__LIB_6__::func_771();
					}
					__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
					__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 0, 0);
					__LIB_11__::func_797("SS_AIM_AT_PLAYER, bullet detected within 20m of a ped, attacking...");
					func_267();
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 7f, 7f, 5f, false, true, 0) || (__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), -1097.28f, 68.05f, 52.99f, 10f, 1) && iLocal_249 == 1))
				{
					if (__LIB_0__::func_75())
					{
						__LIB_6__::func_771();
					}
					__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
					__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 0, 0);
					__LIB_11__::func_797("SS_AIM_AT_PLAYER, player got too close, attacking...");
					func_267();
				}
				else
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 20f, 20f, 20f, false, true, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 15f)
							{
								if (__LIB_0__::func_75())
								{
									__LIB_6__::func_771();
								}
								__LIB_11__::func_978("SS_AIM_AT_PLAYER, going too fast: ", ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)));
								__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
								__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 0, 0);
								__LIB_11__::func_797("SS_AIM_AT_PLAYER, player in vehicle above acceptable speed, within 20m; attacking...");
								func_267();
							}
						}
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_285) >= 10000)
					{
						if (__LIB_0__::func_121(Local_293.f_0))
						{
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 25f, 25f, 25f, false, true, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_293.f_0, 11f, 11f, 11f, false, true, 0))
							{
								if (__LIB_1__::func_197(Local_303[iParam0 /*13*/]))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_303[iParam0 /*13*/]);
									TASK::TASK_GO_STRAIGHT_TO_COORD(Local_303[iParam0 /*13*/], Local_303[iParam0 /*13*/].f_1, 3f, -1, Local_303[iParam0 /*13*/].f_7, 0.5f);
								}
								iLocal_249 = 1;
								iLocal_307[iParam0] = 0;
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 20f, 20f, 20f, false, true, 0))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iParam0 /*13*/], 9f, 9f, 9f, false, true, 0) || (MISC::GET_GAME_TIMER() - iLocal_285) >= 12000)
								{
									if (__LIB_0__::func_75())
									{
										__LIB_6__::func_771();
									}
									__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
									__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 0, 0);
									__LIB_11__::func_797("SS_AIM_AT_PLAYER, player took too long and didn't move away, attacking...");
									func_267();
								}
							}
						}
					}
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_76(Local_303[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), 1) > 120f && (PED::IS_PED_IN_ANY_VEHICLE(Local_293.f_0, false) || __LIB_0__::func_121(Local_293.f_0)))
			{
				if (HUD::DOES_BLIP_EXIST(Local_303[iParam0 /*13*/].f_11))
				{
					HUD::REMOVE_BLIP(&(Local_303[iParam0 /*13*/].f_11));
					func_299(Local_303[iParam0 /*13*/], 1);
					iLocal_307[iParam0] = 6;
				}
			}
			else if (!__LIB_4__::func_465(Local_303[iParam0 /*13*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_321);
				TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(5, 200));
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_321);
				TASK::TASK_PERFORM_SEQUENCE(Local_303[iParam0 /*13*/], iLocal_321);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_321);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_303[iParam0 /*13*/], 25, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_303[iParam0 /*13*/], true, 1);
				PED::SET_PED_KEEP_TASK(Local_303[iParam0 /*13*/], true);
				TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_303[iParam0 /*13*/], true);
			}
			break;
		case 5:
			iLocal_249 = 0;
			if (__LIB_42__::func_335(Local_303[iParam0 /*13*/], 1, 1116471296, 1126825984, 0, 0, 0, 0) || PED::HAS_PED_RECEIVED_EVENT(Local_303[iParam0 /*13*/], 61))
			{
				__LIB_11__::func_797("SS_STANDDOWN, player threatened Glen OR guard thought he'd get run over; attacking...");
				func_267();
			}
			else if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_303[iParam0 /*13*/]))
			{
				if (func_273())
				{
					if (__LIB_40__::func_639(Local_303[iParam0 /*13*/], 1126825984))
					{
						if (__LIB_0__::func_75())
						{
							__LIB_6__::func_771();
						}
						__LIB_0__::func_203(&uLocal_72, 7, Local_303[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
						__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_6", 7, 0, 0);
						__LIB_11__::func_797("SS_STANDDOWN, player aiming Sniper Rifle, guard has LOS; attacking...");
						func_267();
					}
				}
			}
			break;
		case 6:
			break;
	}
}

int func_317()//Position - 0x2C86B
{
	if (__LIB_1__::func_562(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED") && __LIB_1__::func_562(PLAYER::PLAYER_PED_ID()) != joaat("OBJECT"))
	{
		if (__LIB_1__::func_562(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_GOLFCLUB"))
		{
			return 0;
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	return 1;
}

void func_318()//Position - 0x2C8CF
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_293.f_0))
	{
		if (iLocal_67 < 3 || __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_293.f_0, 1) > 100f)
		{
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (__LIB_1__::func_197(Local_303[iVar0 /*13*/]))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_303[iVar0 /*13*/], true, 1);
					if (iVar0 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_293.f_0))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_303[iVar0 /*13*/], Local_293.f_0, 0);
							TASK::TASK_GO_TO_ENTITY(Local_303[iVar0 /*13*/], Local_293.f_0, 20000, 6f, 2f, 2f, 0);
						}
					}
					else
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_303[iVar0 /*13*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(Local_303[iVar0 /*13*/], joaat("WEAPON_PISTOL"), true);
					PED::SET_PED_USING_ACTION_MODE(Local_303[iVar0 /*13*/], true, -1, "DEFAULT_ACTION");
					__LIB_11__::func_796("Alerted, security guard: ", iVar0);
				}
				iLocal_307[iVar0] = 3;
				iVar0++;
			}
			if (__LIB_0__::func_121(Local_293.f_0))
			{
				if (!__LIB_4__::func_465(Local_293.f_0, joaat("SCRIPT_TASK_COWER")))
				{
					TASK::CLEAR_PED_TASKS(Local_293.f_0);
					TASK::TASK_COWER(Local_293.f_0, -1);
				}
			}
			if (__LIB_0__::func_121(Local_298.f_0))
			{
				TASK::CLEAR_PED_TASKS(Local_298.f_0);
				if (ENTITY::IS_ENTITY_ATTACHED(Local_332.f_0))
				{
					ENTITY::DETACH_ENTITY(Local_332.f_0, true, true);
				}
				TASK::TASK_SMART_FLEE_PED(Local_298.f_0, PLAYER::PLAYER_PED_ID(), 300f, -1, true, false);
				__LIB_0__::func_124(&Local_298, 1, 0, 1);
				iLocal_253 = 1;
			}
			iLocal_249 = 1;
			__LIB_0__::func_403(790, 0);
		}
		else
		{
			__LIB_11__::func_797("Alert called, but guards need to attack instead");
			func_267();
		}
	}
}

int func_321()//Position - 0x2CAC8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if ((!__LIB_0__::func_121(Local_303[iVar0 /*13*/]) || __LIB_20__::func_647(PLAYER::PLAYER_PED_ID(), Local_303[iVar0 /*13*/], 1)) || PED::IS_PED_RAGDOLL(Local_303[iVar0 /*13*/]))
		{
			__LIB_11__::func_797("HAS_PLAYER_MUCKED_ABOUT(): Player bumped celeb security with vehicle OR celeb security dead");
			return 1;
		}
		iVar0++;
	}
	if ((!__LIB_0__::func_121(Local_293.f_0) || __LIB_20__::func_647(PLAYER::PLAYER_PED_ID(), Local_293.f_0, 1)) || PED::IS_PED_RAGDOLL(Local_293.f_0))
	{
		__LIB_11__::func_797("HAS_PLAYER_MUCKED_ABOUT(): Celeb ragdoll OR player bumped celeb with vehicle OR celeb isn't alive");
		return 1;
	}
	if ((!__LIB_0__::func_121(Local_298.f_0) || __LIB_20__::func_647(PLAYER::PLAYER_PED_ID(), Local_298.f_0, 1)) || PED::IS_PED_RAGDOLL(Local_298.f_0))
	{
		__LIB_11__::func_797("HAS_PLAYER_MUCKED_ABOUT(): Celeb friend ragdoll OR player bumped friend with vehicle OR friend isn't alive");
		return 1;
	}
	if (__LIB_1__::func_183(Local_317.f_0) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_317.f_0, false))
		{
			__LIB_11__::func_797("HAS_PLAYER_MUCKED_ABOUT(): Player in celeb's golf cart");
			return 1;
		}
	}
	else
	{
		__LIB_11__::func_797("HAS_PLAYER_MUCKED_ABOUT(): Celeb golf cart not OK, player destroyed it?");
		return 1;
	}
	if (__LIB_1__::func_183(Local_316[4 /*6*/]) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_316[4 /*6*/], false))
		{
			__LIB_11__::func_797("HAS_PLAYER_MUCKED_ABOUT(): Player in golf cart behind celeb");
			return 1;
		}
	}
	else
	{
		__LIB_11__::func_797("HAS_PLAYER_MUCKED_ABOUT(): Golf cart behind celeb not OK, player destroyed it?");
		return 1;
	}
	if (__LIB_1__::func_183(Local_316[5 /*6*/]) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_316[5 /*6*/], false))
		{
			__LIB_11__::func_797("HAS_PLAYER_MUCKED_ABOUT(): Player in golf cart next to celeb");
			return 1;
		}
	}
	else
	{
		__LIB_11__::func_797("HAS_PLAYER_MUCKED_ABOUT(): Golf cart next to celeb not OK, player destroyed it?");
		return 1;
	}
	return 0;
}

void func_323()//Position - 0x2CCB4
{
	int iVar0;
	switch (iLocal_69)
	{
		case 0:
			if (iLocal_259 == 0)
			{
				__LIB_0__::func_210("N1D_LOSESEC", 7500, 5);
				iLocal_259 = 1;
			}
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (HUD::DOES_BLIP_EXIST(Local_303[iVar0 /*13*/].f_11))
				{
					HUD::SET_BLIP_SCALE(Local_303[iVar0 /*13*/].f_11, 0.7f);
				}
				iVar0++;
			}
			__LIB_11__::func_797("ENTERING LOSE THE SECURITY ");
			iLocal_69 = 1;
			break;
		case 1:
			if (!func_303() && !func_324())
			{
				func_311();
			}
			else
			{
				iLocal_69 = 2;
			}
			func_257();
			func_304();
			func_301();
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				func_299(Local_303[iVar0 /*13*/], 0);
				__LIB_0__::func_523(&(Local_303[iVar0 /*13*/].f_11));
				iVar0++;
			}
			func_301();
			HUD::CLEAR_PRINTS();
			iLocal_257 = 0;
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_259 = 0;
				func_35(10);
			}
			else
			{
				func_35(7);
			}
			break;
	}
}

int func_324()//Position - 0x2CDB3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_0__::func_121(Local_303[iVar0 /*13*/]))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_303[iVar0 /*13*/], 70f, 70f, 70f, false, true, 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_325()//Position - 0x2CE04
{
	switch (iLocal_69)
	{
		case 0:
			if (__LIB_0__::func_75())
			{
				__LIB_0__::func_296();
			}
			iLocal_256 = 0;
			func_332();
			if (__LIB_0__::func_121(Local_328.f_1))
			{
				if (iLocal_259 == 0)
				{
					if (!__LIB_0__::func_75() || MISC::GET_PROFILE_SETTING(203) == 0)
					{
						__LIB_0__::func_210("N1D_COLLECT", 7500, 5);
						iLocal_259 = 1;
					}
				}
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 10f, 1);
			__LIB_9__::func_981(&uLocal_34, 0, 0);
			__LIB_11__::func_797("ENTERING COLLECT GOLF CLUB ");
			iLocal_69 = 1;
			break;
		case 1:
			func_257();
			func_311();
			func_329();
			func_304();
			func_301();
			if (iLocal_265 == 0)
			{
				if (func_328(PLAYER::PLAYER_PED_ID()))
				{
					func_327();
				}
			}
			PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
			if (__LIB_0__::func_121(Local_328.f_1))
			{
				if (iLocal_259 == 0)
				{
					if (!__LIB_0__::func_75() || MISC::GET_PROFILE_SETTING(203) == 0)
					{
						__LIB_0__::func_210("N1D_COLLECT", 7500, 5);
						iLocal_259 = 1;
					}
				}
			}
			if (!__LIB_1__::func_183(Local_317.f_0))
			{
				if (__LIB_0__::func_121(iLocal_323))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_323))
					{
						ENTITY::DETACH_ENTITY(iLocal_323, true, true);
					}
				}
			}
			if (__LIB_0__::func_121(Local_328.f_1))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_328.f_1, 0.8f, 0.8f, 2f, false, true, 1))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(Local_328.f_1))
					{
						__LIB_11__::func_797("Golf club attached to bag - correct?");
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_287, "COLLECT_IN_BAG", Local_328.f_1, "NIGEL_1D_SOUNDSET", false, 0);
					}
					else
					{
						__LIB_11__::func_797("Golf club NOT attached to bag - correct?");
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_287, "COLLECT_OUT_BAG", Local_328.f_1, "NIGEL_1D_SOUNDSET", false, 0);
					}
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, 128);
					iLocal_260 = 1;
					__LIB_0__::func_402(0, -1);
					iLocal_69 = 2;
				}
			}
			else
			{
				iLocal_69 = 2;
			}
			break;
		case 2:
			if (iLocal_260 == 1)
			{
				HUD::CLEAR_PRINTS();
				iLocal_257 = 0;
				if (ENTITY::DOES_ENTITY_EXIST(Local_328.f_1))
				{
					OBJECT::DELETE_OBJECT(&(Local_328.f_1));
				}
				__LIB_0__::func_523(&iLocal_237);
				if (!func_303() && !func_324())
				{
					iLocal_259 = 0;
					func_35(9);
				}
				else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					iLocal_259 = 0;
					func_35(10);
				}
				else
				{
					func_35(7);
				}
			}
			else
			{
				HUD::CLEAR_PRINTS();
				iLocal_257 = 0;
				if (ENTITY::DOES_ENTITY_EXIST(Local_328.f_1))
				{
					OBJECT::DELETE_OBJECT(&(Local_328.f_1));
				}
				__LIB_0__::func_523(&iLocal_237);
				func_34(4);
			}
			break;
	}
}

void func_327()//Position - 0x2D0F2
{
	if (iLocal_265 == 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_NIGEL_1D_01", 0f);
			__LIB_11__::func_797("*** Played special Nigel 1D police report ***");
			iLocal_265 = 1;
		}
	}
}

int func_328(int iParam0)//Position - 0x2D125
{
	if (__LIB_11__::func_325(&uLocal_333, ENTITY::GET_ENTITY_COORDS(iParam0, true)))
	{
		return 1;
	}
	return 0;
}

void func_329()//Position - 0x2D143
{
	if (iLocal_262 == 0)
	{
		if (__LIB_0__::func_121(Local_328.f_1) && iLocal_67 == 6)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_328.f_1, 25f, 25f, 25f, false, true, 0))
			{
				iLocal_262 = 1;
			}
		}
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_256 == 0)
		{
			if (iLocal_68 == 7 || iLocal_67 == 6)
			{
				if (__LIB_0__::func_121(Local_328.f_1))
				{
					if (iLocal_262 == 1)
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_328.f_1, 65f, 65f, 65f, false, true, 0))
						{
							__LIB_0__::func_210("N1D_RETPICKUP", 7500, 5);
							iLocal_256 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_68 == 7 || iLocal_67 == 6)
		{
			if (__LIB_0__::func_121(Local_328.f_1))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_328.f_1, 140f, 140f, 140f, false, true, 0))
				{
					func_34(3);
				}
			}
		}
		if (iLocal_67 < 6)
		{
			if (__LIB_0__::func_121(Local_293.f_0))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_293.f_0, 140f, 140f, 140f, false, true, 0) && !__LIB_37__::func_461(PLAYER::PLAYER_PED_ID(), Local_293.f_0, 1126825984, 1, 250, 7))
				{
					func_34(1);
				}
			}
		}
	}
}

void func_332()//Position - 0x2D383
{
	if (iLocal_242 == 1)
	{
		if (__LIB_0__::func_121(iLocal_323))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_323))
			{
				ENTITY::DETACH_ENTITY(iLocal_323, true, true);
			}
		}
		__LIB_0__::func_203(&uLocal_72, 6, Local_293.f_0, "FOSTENBURG", 0, 1);
		__LIB_0__::func_203(&uLocal_72, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_HIT", "NIG1D_HIT_11", 7, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_293.f_0) && __LIB_0__::func_121(Local_328.f_1))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_328.f_1, Local_293.f_0))
		{
			ENTITY::DETACH_ENTITY(Local_328.f_1, true, true);
		}
	}
	__LIB_0__::func_523(&iLocal_237);
	if (ENTITY::DOES_ENTITY_EXIST(Local_328.f_1))
	{
		iLocal_237 = HUD::ADD_BLIP_FOR_ENTITY(Local_328.f_1);
		HUD::SET_BLIP_COLOUR(iLocal_237, 2);
	}
}

void func_333()//Position - 0x2D440
{
	switch (iLocal_69)
	{
		case 0:
			iLocal_68 = 6;
			func_299(Local_293.f_0, 0);
			if (__LIB_1__::func_183(Local_317.f_0))
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_317.f_0) > 600)
				{
					ENTITY::SET_ENTITY_HEALTH(Local_317.f_0, 600, 0);
				}
			}
			if (__LIB_0__::func_121(iLocal_323))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_323))
				{
					__LIB_11__::func_797("Reattaching bag to buggy!?");
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_323, Local_317.f_0, 0, 0.2f, -1.3f, 0.5f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				}
			}
			if (__LIB_0__::func_121(Local_328.f_1) && __LIB_0__::func_121(Local_293.f_0))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(Local_328.f_1))
				{
					__LIB_11__::func_797("Reattaching club to bag!?");
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_328.f_1, iLocal_323, 0, 0.1f, 0f, -0.25f, -5f, 155f, 0f, false, false, false, false, 2, true, 0);
				}
				else if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_328.f_1, Local_293.f_0))
				{
					__LIB_11__::func_797("Glen still holding club, reattach to bag");
					ENTITY::DETACH_ENTITY(Local_328.f_1, true, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_328.f_1, iLocal_323, 0, 0.1f, 0f, -0.25f, -5f, 155f, 0f, false, false, false, false, 2, true, 0);
				}
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			__LIB_11__::func_797("ENTERING CHASE IN CITY ");
			__LIB_0__::func_523(&iLocal_237);
			iLocal_237 = __LIB_10__::func_727(Local_317.f_0, 0, 5);
			iLocal_69 = 1;
			break;
		case 1:
			func_257();
			func_329();
			__LIB_10__::func_618(iLocal_237, Local_317.f_0, 140f, 1061158912, 0);
			func_301();
			if (bLocal_267)
			{
				if (__LIB_0__::func_121(Local_328.f_1) && __LIB_0__::func_121(iLocal_323))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_328.f_1, iLocal_323))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_328.f_1, 0.8f, 0.8f, 2f, false, true, 1))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_287, "COLLECT_IN_BAG", Local_328.f_1, "NIGEL_1D_SOUNDSET", false, 0);
								PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, 128);
								iLocal_260 = 1;
								iLocal_69 = 2;
							}
						}
					}
				}
			}
			if (func_334())
			{
				iLocal_69 = 2;
			}
			break;
		case 2:
			if (iLocal_260)
			{
				HUD::CLEAR_PRINTS();
				iLocal_257 = 0;
				if (ENTITY::DOES_ENTITY_EXIST(Local_328.f_1))
				{
					OBJECT::DELETE_OBJECT(&(Local_328.f_1));
				}
				__LIB_0__::func_523(&iLocal_237);
				if (!func_303() && !func_324())
				{
					iLocal_259 = 0;
					func_35(9);
				}
				else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					iLocal_259 = 0;
					func_35(10);
				}
				else
				{
					func_35(7);
				}
			}
			else
			{
				HUD::CLEAR_PRINTS();
				iLocal_259 = 0;
				func_35(6);
			}
			break;
	}
}

int func_334()//Position - 0x2D6C8
{
	if (__LIB_1__::func_183(Local_317.f_0))
	{
		if (__LIB_0__::func_121(Local_293.f_0))
		{
			__LIB_39__::func_909(&uLocal_34, Local_317.f_0, 0, 0, 1, 1, 1);
			if (PED::IS_PED_IN_VEHICLE(Local_293.f_0, Local_317.f_0, false))
			{
				func_335();
			}
			if ((func_258() || VEHICLE::IS_VEHICLE_TYRE_BURST(Local_317.f_0, 0, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(Local_317.f_0, 1, false))
			{
				__LIB_11__::func_797("Buggy stuck or front tyres burst in city - returning true");
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_317.f_0))
				{
					TASK::REMOVE_WAYPOINT_RECORDING("NIGEL1DGOLF");
					TASK::REMOVE_WAYPOINT_RECORDING("NIGEL1DGOLF2");
				}
				TASK::CLEAR_PED_TASKS(Local_293.f_0);
				func_299(Local_293.f_0, 1);
				return 1;
			}
			if (ENTITY::GET_ENTITY_HEALTH(Local_317.f_0) < 500)
			{
				__LIB_11__::func_797("Buggy health below threshold - returning true");
				iLocal_242 = 1;
				return 1;
			}
			if (!PED::IS_PED_IN_VEHICLE(Local_293.f_0, Local_317.f_0, false))
			{
				__LIB_11__::func_797("Celeb not in buggy while monitoring chase - returning true");
				return 1;
			}
		}
		else
		{
			__LIB_11__::func_797("Celeb dead - returning true");
			return 1;
		}
	}
	else
	{
		__LIB_11__::func_797("Buggy somehow not ok - returning true");
		return 1;
	}
	return 0;
}

void func_335()//Position - 0x2D7BA
{
	if (__LIB_0__::func_121(Local_293.f_0))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_293.f_0, 20f, 20f, 20f, false, true, 0))
		{
			TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(Local_293.f_0, 0.3f);
		}
		else
		{
			TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(Local_293.f_0, 0f);
		}
	}
}

void func_368()//Position - 0x2EAB6
{
	switch (iLocal_69)
	{
		case 0:
			__LIB_11__::func_797("CHASE THE GOLFER ");
			iLocal_282 = MISC::GET_GAME_TIMER();
			iLocal_283 = MISC::GET_GAME_TIMER();
			iLocal_284 = MISC::GET_GAME_TIMER();
			HUD::SET_BLIP_SCALE(iLocal_237, 1f);
			__LIB_0__::func_106(&(Local_316[3 /*6*/]));
			if (__LIB_0__::func_121(iLocal_323) && __LIB_1__::func_183(Local_317.f_0))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_323))
				{
					__LIB_11__::func_797("Reattaching bag to buggy!?");
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_323, Local_317.f_0, 0, 0.2f, -1.3f, 0.5f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				}
			}
			if ((__LIB_0__::func_121(Local_328.f_1) && __LIB_0__::func_121(Local_293.f_0)) && __LIB_1__::func_183(Local_317.f_0))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(Local_328.f_1))
				{
					__LIB_11__::func_797("Reattaching club to bag!?");
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_328.f_1, iLocal_323, 0, 0.1f, 0f, -0.25f, -5f, 155f, 0f, false, false, false, false, 2, true, 0);
				}
				else if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_328.f_1, Local_293.f_0))
				{
					__LIB_11__::func_797("Glen still holding club, reattach to bag");
					ENTITY::DETACH_ENTITY(Local_328.f_1, true, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_328.f_1, iLocal_323, 0, 0.1f, 0f, -0.25f, -5f, 155f, 0f, false, false, false, false, 2, true, 0);
				}
			}
			iLocal_276 = 0;
			func_381();
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			iLocal_69 = 1;
			break;
		case 1:
			func_380();
			func_257();
			func_311();
			func_329();
			func_372();
			func_304();
			func_301();
			func_327();
			PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
			__LIB_10__::func_618(iLocal_237, Local_293.f_0, 140f, 1061158912, 0);
			if (!__LIB_0__::func_121(Local_328.f_1))
			{
				HUD::CLEAR_PRINTS();
				if (__LIB_0__::func_75())
				{
					__LIB_0__::func_296();
				}
				iLocal_257 = 0;
				__LIB_0__::func_523(&iLocal_237);
				func_34(4);
			}
			if (func_369() || !__LIB_0__::func_121(Local_293.f_0))
			{
				__LIB_0__::func_210("N1D_COLLECT", 7500, 5);
				func_35(6);
			}
			else
			{
				if (bLocal_267)
				{
					if (__LIB_0__::func_121(Local_328.f_1) && __LIB_0__::func_121(iLocal_323))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_328.f_1, iLocal_323))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_328.f_1, 0.8f, 0.8f, 2f, false, true, 1))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_287, "COLLECT_IN_BAG", Local_328.f_1, "NIGEL_1D_SOUNDSET", false, 0);
									PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, 128);
									iLocal_260 = 1;
									iLocal_69 = 2;
								}
							}
						}
					}
				}
				if (TASK::GET_VEHICLE_WAYPOINT_TARGET_POINT(Local_317.f_0) >= 200)
				{
					iLocal_69 = 2;
				}
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			if (iLocal_260)
			{
				iLocal_257 = 0;
				if (ENTITY::DOES_ENTITY_EXIST(Local_328.f_1))
				{
					OBJECT::DELETE_OBJECT(&(Local_328.f_1));
				}
				__LIB_0__::func_523(&iLocal_237);
				if (!func_303() && !func_324())
				{
					iLocal_259 = 0;
					func_35(9);
				}
				else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					iLocal_259 = 0;
					func_35(10);
				}
				else
				{
					func_35(7);
				}
			}
			else
			{
				func_35(5);
			}
			break;
	}
}

int func_369()//Position - 0x2EDB3
{
	if (__LIB_1__::func_183(Local_317.f_0))
	{
		if (__LIB_0__::func_121(Local_293.f_0))
		{
			__LIB_39__::func_909(&uLocal_34, Local_317.f_0, 0, 0, 1, 1, 1);
			if ((func_258() || VEHICLE::IS_VEHICLE_TYRE_BURST(Local_317.f_0, 0, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(Local_317.f_0, 1, false))
			{
				if (__LIB_1__::func_183(Local_317.f_0))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_317.f_0))
					{
						TASK::REMOVE_WAYPOINT_RECORDING("NIGEL1DGOLF");
						TASK::REMOVE_WAYPOINT_RECORDING("NIGEL1DGOLF2");
					}
				}
				TASK::CLEAR_PED_TASKS(Local_293.f_0);
				func_299(Local_293.f_0, 1);
				__LIB_11__::func_797("*** Celeb cart stuck or a front wheel is burst - chase monitor returning True");
				return 1;
			}
			else
			{
				func_371();
			}
			if (ENTITY::GET_ENTITY_HEALTH(Local_317.f_0) < 600)
			{
				iLocal_242 = 1;
				__LIB_11__::func_797("*** Celeb cart below drop club threshold - chase monitor returning True");
				return 1;
			}
			if (!PED::IS_PED_IN_VEHICLE(Local_293.f_0, Local_317.f_0, false))
			{
				__LIB_11__::func_797("*** Celeb no longer in vehicle - chase monitor returning True");
				return 1;
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_317.f_0, PLAYER::PLAYER_PED_ID(), true) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_317.f_0, 0, 2))
			{
				func_370();
				__LIB_11__::func_796("VEHICLE HEALTH IS ", ENTITY::GET_ENTITY_HEALTH(Local_317.f_0));
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_317.f_0);
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_317.f_0, PLAYER::PLAYER_PED_ID(), true))
			{
				__LIB_11__::func_796("VEHICLE HEALTH IS ", ENTITY::GET_ENTITY_HEALTH(Local_317.f_0));
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_317.f_0);
			}
		}
		else
		{
			__LIB_11__::func_797("Celeb dead - returning true");
			return 1;
		}
	}
	else
	{
		__LIB_11__::func_797("*** Celeb cart wrecked/not OK - chase monitor returning True");
		func_299(Local_293.f_0, 1);
		return 1;
	}
	return 0;
}

void func_370()//Position - 0x2EF0E
{
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
	{
		if (!__LIB_0__::func_75())
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_282) >= 6000)
			{
				__LIB_0__::func_203(&uLocal_72, 6, Local_293.f_0, "FOSTENBURG", 0, 1);
				if (__LIB_35__::func_536(&uLocal_72, "NIG1DAU", "NIG1D_HIT", 7, 0, 0, 0))
				{
					iLocal_282 = MISC::GET_GAME_TIMER();
					iLocal_283 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

void func_371()//Position - 0x2EF75
{
	if (iLocal_67 < 6)
	{
		if (__LIB_1__::func_197(Local_293.f_0))
		{
			if (__LIB_1__::func_183(Local_317.f_0))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_293.f_0, Local_317.f_0, false))
				{
					if (iLocal_261 == 0)
					{
						if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_317.f_0))
						{
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_293.f_0, Local_317.f_0, "NIGEL1DGOLF", 786468, 0, 8, -1, -1f, false, 2f);
						}
					}
					else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_317.f_0))
					{
						iLocal_261 = 0;
					}
				}
			}
		}
	}
}

void func_372()//Position - 0x2EFEA
{
	int iVar0;
	if (iLocal_245 == 0)
	{
		if (func_379(0))
		{
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				func_309(&(Local_305[iVar0 /*13*/]), 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_305[iVar0 /*13*/], true);
				PED::SET_PED_CAN_BE_TARGETTED(Local_305[iVar0 /*13*/], true);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				func_378(&(Local_331[iVar0 /*6*/]), 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_331[iVar0 /*6*/], Local_305[iVar0 /*13*/], PED::GET_PED_BONE_INDEX(Local_305[iVar0 /*13*/], 28422), 0.06f, 0.04f, 0f, -90f, 180f, 0f, false, false, false, false, 2, true, 0);
				iVar0++;
			}
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_331[0 /*6*/], Local_305[0 /*13*/], PED::GET_PED_BONE_INDEX(Local_305[0 /*13*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_331[1 /*6*/], Local_305[1 /*13*/], PED::GET_PED_BONE_INDEX(Local_305[1 /*13*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_331[2 /*6*/], Local_305[2 /*13*/], PED::GET_PED_BONE_INDEX(Local_305[2 /*13*/], 28422), 0f, 0f, 0.05f, 0f, -10f, -90f, false, false, false, false, 2, true, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_331[3 /*6*/], Local_305[3 /*13*/], PED::GET_PED_BONE_INDEX(Local_305[3 /*13*/], 28422), -0.01f, 0f, 0f, 10f, 0f, -90f, false, false, false, false, 2, true, 0);
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				if (__LIB_1__::func_197(Local_305[iVar0 /*13*/]))
				{
					TASK::TASK_PLAY_ANIM(Local_305[iVar0 /*13*/], "rcmnigel1d", Local_305[iVar0 /*13*/].f_12, 8f, -8f, -1, 1, 0f, false, false, false);
				}
				iVar0++;
			}
			iVar0 = 2;
			while (iVar0 <= 3)
			{
				if (__LIB_1__::func_197(Local_305[iVar0 /*13*/]))
				{
					TASK::TASK_PLAY_ANIM(Local_305[iVar0 /*13*/], "mini@golf", Local_305[iVar0 /*13*/].f_12, 8f, -8f, -1, 1, 0f, false, false, false);
				}
				iVar0++;
			}
			iLocal_245 = 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (func_377(iVar0))
			{
				if (iLocal_308[iVar0] != 4)
				{
					iLocal_308[iVar0] = 4;
					__LIB_11__::func_796("This Ambient Golfer is now dead: ", iVar0);
					func_375(iVar0);
				}
			}
			if (__LIB_0__::func_121(Local_305[iVar0 /*13*/]))
			{
				func_373(iVar0);
			}
			iVar0++;
		}
	}
}

void func_373(int iParam0)//Position - 0x2F23C
{
	switch (iLocal_308[iParam0])
	{
		case 0:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_305[iParam0 /*13*/], true), 50f, false))
				{
					func_270(iParam0);
					if (!__LIB_0__::func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						__LIB_6__::func_834(Local_305[iParam0 /*13*/], "GENERIC_SHOCKED_HIGH", 34);
					}
					__LIB_11__::func_797("AS_PLAYGOLF, bullet in area of ambient golfer (no vehicle); alerted...");
					func_318();
					iLocal_308[iParam0] = 1;
				}
				else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_305[iParam0 /*13*/], 20f, 20f, 20f, false, true, 0))
				{
					if (__LIB_42__::func_335(Local_305[iParam0 /*13*/], 1, 1116471296, 1126825984, 0, 0, 0, 0))
					{
						if (!func_317())
						{
							if (!__LIB_0__::func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								__LIB_6__::func_834(Local_305[iParam0 /*13*/], "GENERIC_FRIGHTENED_HIGH", 34);
							}
							func_270(iParam0);
							__LIB_11__::func_797("AS_PLAYGOLF, player threatened ambient golfer; attacking...");
							func_318();
							iLocal_308[iParam0] = 1;
						}
						else
						{
							Local_291 = { ENTITY::GET_ENTITY_COORDS(Local_305[iParam0 /*13*/], true) };
							Local_305[iParam0 /*13*/].f_10 = 1;
							func_374();
							if (!__LIB_0__::func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								__LIB_6__::func_834(Local_305[iParam0 /*13*/], "GENERIC_FUCK_YOU", 34);
								__LIB_11__::func_797("Played aggro line from ambient golfer...");
							}
							PED::SET_PED_CAN_BE_TARGETTED(Local_305[iParam0 /*13*/], true);
							TASK::TASK_COMBAT_PED(Local_305[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							if (ENTITY::DOES_ENTITY_EXIST(Local_331[iParam0 /*6*/]))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(Local_331[iParam0 /*6*/]))
								{
									ENTITY::DETACH_ENTITY(Local_331[iParam0 /*6*/], true, true);
								}
							}
							iLocal_308[iParam0] = 1;
						}
					}
					else if (__LIB_40__::func_639(Local_305[iParam0 /*13*/], 1126825984))
					{
						if (!func_317())
						{
							if (!__LIB_0__::func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								__LIB_6__::func_834(Local_305[iParam0 /*13*/], "GENERIC_SHOCKED_HIGH", 34);
							}
							func_270(iParam0);
							__LIB_11__::func_797("AS_PLAYGOLF, player armed and ambient golfer has LOS; attacking...");
							func_318();
							iLocal_308[iParam0] = 1;
						}
					}
				}
			}
			else if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 10f)
			{
				if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_305[iParam0 /*13*/], 11f, 11f, 11f, false, true, 0) && PED::HAS_PED_RECEIVED_EVENT(Local_305[iParam0 /*13*/], 61)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_305[iParam0 /*13*/]))
				{
					if (!__LIB_0__::func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						__LIB_6__::func_834(Local_305[iParam0 /*13*/], "GENERIC_CURSE_MED", 34);
					}
					__LIB_11__::func_796("This ambient golfer nearly got run over and is now attacking player: ", iParam0);
					PED::SET_PED_CAN_BE_TARGETTED(Local_305[iParam0 /*13*/], true);
					TASK::TASK_COMBAT_PED(Local_305[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					func_374();
					iLocal_308[iParam0] = 1;
				}
			}
			else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_305[iParam0 /*13*/], true), 50f, true))
			{
				func_299(Local_305[iParam0 /*13*/], 1);
				func_375(iParam0);
				if (!__LIB_0__::func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					__LIB_6__::func_834(Local_305[iParam0 /*13*/], "GENERIC_SHOCKED_HIGH", 34);
				}
				__LIB_11__::func_797("AS_PLAYGOLF, bullet in area of ambient golfer (in vehicle); attacking...");
				func_318();
				iLocal_308[iParam0] = 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_305[iParam0 /*13*/]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_305[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), true))
			{
				__LIB_11__::func_797("Player damaged an ambient golfer with their vehicle (or another vehicle damaged them?)");
				if (!__LIB_0__::func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					__LIB_6__::func_834(Local_305[iParam0 /*13*/], "GENERIC_FUCK_YOU", 34);
				}
				func_375(iParam0);
				func_270(iParam0);
				iLocal_308[iParam0] = 3;
			}
			break;
		case 1:
			if (__LIB_42__::func_335(Local_305[iParam0 /*13*/], 1, 1116471296, 1126825984, 0, 0, 0, 0) && !func_317())
			{
				if (!__LIB_0__::func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					__LIB_0__::func_203(&uLocal_72, 8, Local_305[iParam0 /*13*/], "NIGEL1DAMBIENTGOLFER1", 0, 1);
					__LIB_6__::func_834(Local_305[iParam0 /*13*/], "GENERIC_CURSE_MED", 34);
				}
				__LIB_11__::func_797("AS_ALERTED, player threatened ambient golfer and was armed; attacking...");
				func_318();
				func_270(iParam0);
				iLocal_308[iParam0] = 3;
			}
			break;
		case 3:
			if (!__LIB_4__::func_465(Local_305[iParam0 /*13*/], joaat("SCRIPT_TASK_SMART_FLEE_PED")))
			{
				func_270(iParam0);
			}
			__LIB_0__::func_124(&(Local_305[iParam0 /*13*/]), 1, 0, 1);
			break;
		case 4:
			break;
	}
}

void func_374()//Position - 0x2F688
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (__LIB_0__::func_121(Local_305[iVar0 /*13*/]))
		{
			if (Local_305[iVar0 /*13*/].f_10 == 0)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_305[iVar0 /*13*/], Local_291, 20f, 20f, 20f, false, true, 0))
				{
					PED::SET_PED_CAN_BE_TARGETTED(Local_305[iVar0 /*13*/], true);
					TASK::TASK_COMBAT_PED(Local_305[iVar0 /*13*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					if (ENTITY::DOES_ENTITY_EXIST(Local_331[iVar0 /*6*/]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_331[iVar0 /*6*/]))
						{
							ENTITY::DETACH_ENTITY(Local_331[iVar0 /*6*/], true, true);
						}
					}
					iLocal_308[iVar0] = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_375(int iParam0)//Position - 0x2F731
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_305[iParam0 /*13*/]))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (__LIB_0__::func_121(Local_305[iVar0 /*13*/]))
			{
				if (func_376(Local_305[iParam0 /*13*/], Local_305[iVar0 /*13*/], 20f))
				{
					if (iLocal_308[iVar0] != 3)
					{
						__LIB_11__::func_796("Making this Ambient Golfer flee from dead ped: ", iVar0);
						func_270(iVar0);
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_376(int iParam0, int iParam1, float fParam2)//Position - 0x2F79D
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iParam1, true)) <= (fParam2 * fParam2);
}

int func_377(int iParam0)//Position - 0x2F7BD
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_305[iParam0 /*13*/]))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_305[iParam0 /*13*/], false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_331[iParam0 /*6*/]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Local_331[iParam0 /*6*/]))
				{
					ENTITY::DETACH_ENTITY(Local_331[iParam0 /*6*/], true, true);
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_378(var uParam0, int iParam1)//Position - 0x2F810
{
	if (STREAMING::HAS_MODEL_LOADED(uParam0->f_5))
	{
		*uParam0 = OBJECT::CREATE_OBJECT(uParam0->f_5, uParam0->f_1, true, true, false);
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			ENTITY::SET_ENTITY_HEADING(*uParam0, uParam0->f_4);
		}
	}
	if (iParam1 == 1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_5);
	}
}

int func_379(int iParam0)//Position - 0x2F85A
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		STREAMING::REQUEST_MODEL(Local_305[iVar0 /*13*/].f_8);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		STREAMING::REQUEST_MODEL(Local_331[iVar0 /*6*/].f_5);
		iVar0++;
	}
	if (iParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_305[iVar0 /*13*/].f_8))
			{
				return 0;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_331[iVar0 /*6*/].f_5))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 == 0)
		{
			SYSTEM::WAIT(0);
			iVar1 = 1;
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_305[iVar0 /*13*/].f_8))
				{
					iVar1 = 0;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_331[iVar0 /*6*/].f_5))
				{
					iVar1 = 0;
				}
				iVar0++;
			}
		}
	}
	return 1;
}

void func_380()//Position - 0x2F958
{
	if (iLocal_253 == 0)
	{
		if (__LIB_0__::func_121(Local_298.f_0))
		{
			if (__LIB_42__::func_335(Local_298.f_0, 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				if (__LIB_0__::func_121(Local_298.f_0))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_298.f_0, true, 1);
				}
				func_299(Local_298.f_0, 1);
				iLocal_253 = 1;
			}
		}
	}
}

void func_381()//Position - 0x2F9A9
{
	__LIB_0__::func_523(&iLocal_238);
	iLocal_312 = 6;
}

void func_383()//Position - 0x2F9F4
{
	switch (iLocal_69)
	{
		case 0:
			__LIB_11__::func_797("ENTERING GET THE CLUB 1 ");
			if (iLocal_259 == 0)
			{
				__LIB_0__::func_210("N1D_TAKE", 7500, 5);
				iLocal_259 = 1;
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(1);
			__LIB_0__::func_523(&iLocal_237);
			iLocal_237 = __LIB_10__::func_711(Local_293.f_0, 1, 0, 5);
			iLocal_69 = 1;
			break;
		case 1:
			func_391();
			func_380();
			func_372();
			func_311();
			func_387();
			func_257();
			func_384();
			func_301();
			func_327();
			PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
			if (!__LIB_0__::func_121(Local_328.f_1))
			{
				HUD::CLEAR_PRINTS();
				if (__LIB_0__::func_75())
				{
					__LIB_0__::func_296();
				}
				iLocal_257 = 0;
				__LIB_0__::func_523(&iLocal_237);
				func_34(4);
			}
			if (__LIB_0__::func_295())
			{
				iLocal_69 = 2;
			}
			if (__LIB_0__::func_121(Local_293.f_0))
			{
				if (PED::IS_PED_FLEEING(Local_293.f_0))
				{
					bLocal_264 = true;
				}
				if (__LIB_1__::func_183(Local_317.f_0))
				{
					if (PED::IS_PED_IN_VEHICLE(Local_293.f_0, Local_317.f_0, false))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_328.f_1, iLocal_323, 0, 0.1f, 0f, -0.25f, -5f, 155f, 0f, false, false, false, false, 2, true, 0);
						iLocal_69 = 2;
					}
				}
				else if (__LIB_0__::func_121(iLocal_323))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_323))
					{
						ENTITY::DETACH_ENTITY(iLocal_323, true, true);
					}
				}
			}
			else
			{
				iLocal_69 = 2;
			}
			if (bLocal_264 == 1)
			{
				if (__LIB_0__::func_121(Local_293.f_0))
				{
					if (PED::IS_PED_RAGDOLL(Local_293.f_0))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_328.f_1))
						{
							ENTITY::DETACH_ENTITY(Local_328.f_1, true, true);
							iLocal_69 = 2;
						}
					}
				}
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			if (__LIB_0__::func_121(Local_293.f_0) && !bLocal_264)
			{
				func_35(4);
			}
			else
			{
				iLocal_259 = 0;
				func_35(6);
			}
			break;
	}
}

void func_384()//Position - 0x2FB9B
{
	switch (iLocal_312)
	{
		case 0:
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1377.18f, 55.39f, 53.7f, 2f, 2f, 2f, false, true, 1))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1379.1537f, 57.951008f, 52.190113f, -1378.7354f, 53.17284f, 54.94018f, 4f, false, true, 0))
					{
						iLocal_312 = 1;
					}
				}
			}
			break;
		case 1:
			if (!CAM::DOES_CAM_EXIST(iLocal_241))
			{
				iLocal_241 = __LIB_30__::func_623();
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_239))
			{
				iLocal_239 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SPLINE_CAMERA"), -1409.4524f, 53.5135f, 78.0868f, -26.7543f, 0f, -85.6976f, 50f, false, 2);
				CAM::SET_CAM_SPLINE_DURATION(iLocal_239, 4500);
				CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA_FRAME(iLocal_239, iLocal_241, 1500, 3);
				CAM::ADD_CAM_SPLINE_NODE(iLocal_239, -1382.719f, 55.216f, 58.0408f, -15.6873f, 0f, -88.6059f, 1500, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(iLocal_239, -1409.4524f, 53.5135f, 78.0868f, -26.7543f, 0f, -85.6976f, 1500, 3, 2);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			HUD::DISPLAY_RADAR(false);
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1368.3302f, 56.4194f, 52.4637f, 1f, 20000, 0.25f, 0, 40000f);
			}
			iLocal_312 = 2;
			break;
		case 2:
			if (!CAM::IS_CAM_ACTIVE(iLocal_241))
			{
				if (!CAM::IS_CAM_ACTIVE(iLocal_239))
				{
					CAM::SET_CAM_ACTIVE(iLocal_241, true);
					CAM::RENDER_SCRIPT_CAMS(true, true, 3000, true, false, 0);
				}
			}
			else if (!CAM::IS_CAM_ACTIVE(iLocal_239))
			{
				CAM::SET_CAM_ACTIVE(iLocal_239, true);
				CAM::RENDER_SCRIPT_CAMS(true, true, 3000, true, false, 0);
				iLocal_312 = 3;
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1368.3302f, 56.4194f, 52.4637f, 2f, 2f, 2f, false, true, 1))
			{
				SYSTEM::WAIT(2000);
				func_67(PLAYER::PLAYER_PED_ID(), 12, 4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				__LIB_11__::func_837(2);
				iLocal_268 = 1;
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1373.09f, 55.61f, 52.71f, 1f, 20000, 0.25f, 0, 40000f);
				}
				SYSTEM::WAIT(500);
				iLocal_312 = 4;
			}
			break;
		case 4:
			if (!CAM::DOES_CAM_EXIST(iLocal_240))
			{
				iLocal_240 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SPLINE_CAMERA"), -1373.6809f, 57.0584f, 54.9717f, -10.6657f, 0f, 91.5916f, 50f, false, 2);
				CAM::SET_CAM_SPLINE_DURATION(iLocal_240, 4500);
				CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA_FRAME(iLocal_240, iLocal_239, 1500, 3);
				CAM::ADD_CAM_SPLINE_NODE(iLocal_240, -1382.719f, 55.216f, 58.0408f, -15.6873f, 0f, -88.6059f, 1500, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(iLocal_240, -1373.6809f, 57.0584f, 54.9717f, -10.6657f, 0f, 91.5916f, 1500, 3, 2);
			}
			if (!CAM::IS_CAM_ACTIVE(iLocal_240))
			{
				CAM::RENDER_SCRIPT_CAMS(true, true, 3000, true, false, 0);
				CAM::SET_CAM_ACTIVE(iLocal_240, true);
				SYSTEM::WAIT(3500);
				iLocal_312 = 5;
			}
			if (CAM::IS_CAM_ACTIVE(iLocal_241))
			{
				CAM::SET_CAM_ACTIVE(iLocal_241, false);
			}
			if (CAM::IS_CAM_ACTIVE(iLocal_239))
			{
				CAM::SET_CAM_ACTIVE(iLocal_239, false);
			}
			break;
		case 5:
			if (CAM::DOES_CAM_EXIST(iLocal_240))
			{
				if (CAM::IS_CAM_ACTIVE(iLocal_240))
				{
					CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					CAM::SET_CAM_ACTIVE(iLocal_240, false);
					SYSTEM::WAIT(2000);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					HUD::DISPLAY_RADAR(true);
					CAM::DESTROY_CAM(iLocal_241, false);
					CAM::DESTROY_CAM(iLocal_239, false);
					CAM::DESTROY_CAM(iLocal_240, false);
				}
			}
			__LIB_0__::func_523(&iLocal_238);
			break;
		case 6:
			break;
	}
}

void func_387()//Position - 0x2FFA8
{
	int iVar0;
	if (iLocal_258 == 0)
	{
		if (func_9(0))
		{
			__LIB_11__::func_797("Concierge scene loaded, creating now...");
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				func_309(&(Local_292[iVar0 /*13*/]), 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*13*/], true);
				iVar0++;
			}
			__LIB_30__::func_555(&(Local_316[0 /*6*/]), 0);
			PED::SET_PED_INTO_VEHICLE(Local_292[1 /*13*/], Local_316[0 /*6*/], -1);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_292[1 /*13*/], false);
			iLocal_258 = 1;
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_292[iVar0 /*13*/].f_8);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_316[iVar0 /*6*/].f_5);
				iVar0++;
			}
		}
	}
	else
	{
		func_388();
	}
}

void func_388()//Position - 0x30065
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_0__::func_121(Local_292[iVar0 /*13*/]))
		{
			func_389(iVar0);
		}
		iVar0++;
	}
}

void func_389(int iParam0)//Position - 0x30093
{
	switch (iLocal_311[iParam0])
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_292[iParam0 /*13*/], 6f, 6f, 6f, false, true, 1))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_292[iParam0 /*13*/], joaat("SCRIPT_TASK_LOOK_AT_ENTITY")) != 1)
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_292[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), 500, 12, 2);
				}
			}
			if (__LIB_42__::func_335(Local_292[iParam0 /*13*/], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
				{
					if (!__LIB_0__::func_75())
					{
						if (iParam0 == 0)
						{
							__LIB_0__::func_203(&uLocal_72, 7, Local_292[iParam0 /*13*/], "CONCIERGE", 0, 1);
							__LIB_0__::func_203(&uLocal_72, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
							__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_FLEE", "NIG1D_FLEE_9", 7, 0, 0);
						}
					}
				}
				func_381();
				func_390();
				iLocal_311[iParam0] = 1;
			}
			else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_292[iParam0 /*13*/], true), 30f, true))
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
				{
					if (!__LIB_0__::func_75())
					{
						if (iParam0 == 0)
						{
							__LIB_0__::func_203(&uLocal_72, 7, Local_292[iParam0 /*13*/], "CONCIERGE", 0, 1);
							__LIB_0__::func_203(&uLocal_72, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
							__LIB_35__::func_901(&uLocal_72, "NIG1DAU", "NIG1D_FLEE", "NIG1D_FLEE_7", 7, 0, 0);
						}
					}
				}
				func_381();
				func_390();
				iLocal_311[iParam0] = 1;
			}
			break;
		case 1:
			break;
	}
}

void func_390()//Position - 0x30215
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_299(Local_292[iVar0 /*13*/], 1);
		iVar0++;
	}
}

void func_391()//Position - 0x3023B
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (!func_328(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_392(PLAYER::PLAYER_PED_ID()))
			{
				func_34(1);
			}
			else
			{
				HUD::SET_BLIP_FLASHES(iLocal_237, true);
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(iLocal_237))
		{
			__LIB_11__::func_797("Recreated mission blip");
			iLocal_237 = __LIB_10__::func_711(Local_293.f_0, 1, 0, 5);
		}
		else
		{
			HUD::SET_BLIP_FLASHES(iLocal_237, false);
		}
	}
}

int func_392(int iParam0)//Position - 0x302A5
{
	if (__LIB_11__::func_325(&uLocal_385, ENTITY::GET_ENTITY_COORDS(iParam0, false)))
	{
		return 1;
	}
	return 0;
}

void func_393()//Position - 0x302C3
{
	switch (iLocal_69)
	{
		case 0:
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 8f, 1);
			__LIB_11__::func_797("ENTERING GO TO CELEBRITY ");
			if (iLocal_259 == 0)
			{
				__LIB_0__::func_210("N1D_TAKE", 7500, 5);
				iLocal_259 = 1;
			}
			__LIB_0__::func_523(&iLocal_237);
			if (__LIB_0__::func_121(Local_293.f_0))
			{
				iLocal_237 = __LIB_10__::func_711(Local_293.f_0, 1, 0, 5);
			}
			iLocal_69 = 1;
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			break;
		case 1:
			PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
			func_391();
			func_380();
			func_387();
			func_372();
			func_311();
			func_257();
			func_384();
			if (__LIB_0__::func_121(Local_293.f_0) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), Local_293.f_0, 50f, 1) || iLocal_68 == 3)
				{
					iLocal_69 = 2;
				}
				else if (__LIB_0__::func_295())
				{
					iLocal_69 = 2;
				}
				else if (iLocal_71 == 0)
				{
					if (__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), Local_293.f_0, 150f, 1))
					{
						iLocal_69 = 2;
					}
				}
			}
			else
			{
				iLocal_69 = 2;
			}
			break;
		case 2:
			iLocal_257 = 0;
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_42__::func_415(1, "MS_GET_THE_CLUB", 1, 0, 0, 1);
			}
			else
			{
				__LIB_42__::func_415(1, "MS_GET_THE_CLUB", 1, 0, 0, 0);
			}
			if (__LIB_0__::func_121(Local_293.f_0))
			{
				func_35(3);
			}
			else
			{
				ENTITY::DETACH_ENTITY(Local_328.f_1, true, true);
				iLocal_259 = 0;
				func_35(6);
			}
			break;
	}
}

void func_469()//Position - 0x37503
{
	switch (iLocal_69)
	{
		case 0:
			__LIB_11__::func_797("ENTERING GO TO GOLF CLUB ");
			if (iLocal_259 == 0)
			{
				__LIB_0__::func_210("N1D_TAKE", 7500, 5);
				iLocal_259 = 1;
			}
			__LIB_0__::func_523(&iLocal_237);
			if (__LIB_0__::func_121(Local_293.f_0))
			{
				iLocal_237 = __LIB_10__::func_711(Local_293.f_0, 1, 0, 5);
			}
			else
			{
				__LIB_11__::func_797("Glen was not alive when trying to create the blip in GO_TO_THE_GOLF_CLUB() init");
				func_473();
				iLocal_237 = __LIB_10__::func_711(Local_293.f_0, 1, 0, 5);
			}
			func_470(0);
			__LIB_11__::func_797("ENTERING GO TO GOLF CLUB LOOP ");
			if (__LIB_0__::func_2(0) && iLocal_71)
			{
				__LIB_40__::func_640(1, 1, 1);
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			iLocal_69 = 1;
			break;
		case 1:
			if (iLocal_252 == 0)
			{
				__LIB_11__::func_797("Glen created in GO_TO_THE_GOLF_CLUB() SS_UPDATE");
				func_473();
			}
			else
			{
				func_391();
				func_372();
				func_380();
				func_387();
				func_311();
				func_257();
				func_384();
				if (__LIB_0__::func_121(Local_293.f_0))
				{
					if (func_328(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_69 = 2;
					}
				}
				else
				{
					iLocal_69 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_121(Local_293.f_0))
			{
				func_35(2);
			}
			else
			{
				iLocal_259 = 0;
				func_35(6);
			}
			break;
	}
}

void func_470(int iParam0)//Position - 0x3761F
{
	if (iLocal_312 != 5 || iParam0 == 1)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_238))
		{
			iLocal_238 = __LIB_0__::func_392(-1377.18f, 55.39f, 53.7f, 0);
			HUD::SET_BLIP_SPRITE(iLocal_238, 109);
		}
		iLocal_312 = 0;
	}
}

void func_473()//Position - 0x376AB
{
	while (iLocal_252 == 0)
	{
		if (func_474(0))
		{
			func_309(&Local_293, 0);
			PED::SET_PED_PROP_INDEX(Local_293.f_0, 0, 0, 0, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_293.f_0, true);
			PED::SET_PED_CAN_BE_TARGETTED(Local_293.f_0, false);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_293.f_0, true);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_293.f_0, true, 1);
			__LIB_0__::func_477(Local_293.f_0, 0);
			func_309(&Local_298, 0);
			func_378(&Local_332, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_332.f_0, Local_298.f_0, PED::GET_PED_BONE_INDEX(Local_298.f_0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			TASK::TASK_PLAY_ANIM(Local_298.f_0, "rcmnigel1d", "idle_a", 8f, -8f, -1, 1, 0f, false, false, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_298.f_0, true);
			PED::SET_PED_CAN_BE_TARGETTED(Local_298.f_0, false);
			if (__LIB_0__::func_121(Local_293.f_0))
			{
				Local_328.f_3 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(Local_293.f_0, true), 1.2f, 1.5f) };
			}
			iLocal_323 = OBJECT::CREATE_OBJECT(joaat("prop_golf_bag_01"), Local_328.f_3, true, true, false);
			__LIB_30__::func_555(&Local_317, 0);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1D_SCENE"))
			{
				if (__LIB_1__::func_183(Local_317.f_0))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_317.f_0, "NIGEL_1D_GOLF_CART_A", 0f);
				}
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_317.f_0, true, true, false);
			ENTITY::SET_ENTITY_HEALTH(Local_317.f_0, 1200, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_323, Local_317.f_0, 0, 0.2f, -1.3f, 0.5f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_317.f_5, true);
			Local_328.f_1 = OBJECT::CREATE_OBJECT(joaat("prop_golf_wood_01"), Local_328.f_3, true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_328.f_1, Local_293.f_0, PED::GET_PED_BONE_INDEX(Local_293.f_0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_293.f_8);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_322);
			TASK::TASK_ACHIEVE_HEADING(0, 112f, 0);
			TASK::TASK_PLAY_ANIM(0, "rcmnigel1d", "swing_a_mark", 8f, -2f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "rcmnigel1d", "swing_b_mark", 8f, -2f, -1, 0, 0f, false, false, false);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_322, true);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_322);
			TASK::TASK_PERFORM_SEQUENCE(Local_293.f_0, iLocal_322);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_322);
			__LIB_30__::func_555(&(Local_316[4 /*6*/]), 0);
			__LIB_30__::func_555(&(Local_316[5 /*6*/]), 0);
			__LIB_11__::func_797("Celeb created!");
			iLocal_252 = 1;
		}
		else
		{
			__LIB_11__::func_797("Waiting for celeb assets...");
		}
		SYSTEM::WAIT(0);
	}
}

int func_474(int iParam0)//Position - 0x378F1
{
	int iVar0;
	STREAMING::REQUEST_MODEL(iLocal_327);
	STREAMING::REQUEST_MODEL(joaat("A_M_Y_Golfer_01"));
	STREAMING::REQUEST_MODEL(Local_317.f_5);
	STREAMING::REQUEST_MODEL(Local_332.f_5);
	if (iParam0 == 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_327))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_Golfer_01")))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(Local_317.f_5))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(Local_332.f_5))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 == 0)
		{
			SYSTEM::WAIT(0);
			iVar0 = 1;
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_327))
			{
				iVar0 = 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_Golfer_01")))
			{
				iVar0 = 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(Local_317.f_5))
			{
				iVar0 = 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(Local_332.f_5))
			{
				iVar0 = 0;
			}
		}
	}
	return 1;
}

void func_475()//Position - 0x379B9
{
	switch (iLocal_69)
	{
		case 0:
			__LIB_11__::func_797("ENTERING PHONE CALL 3 ");
			__LIB_0__::func_203(&uLocal_72, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			__LIB_0__::func_203(&uLocal_72, 3, 0, "NIGEL", 0, 1);
			__LIB_0__::func_203(&uLocal_72, 4, 0, "MRSTHORNHILL", 0, 1);
			if (iLocal_71 == 1)
			{
				__LIB_0__::func_84(500, 1);
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			iLocal_257 = 0;
			iLocal_69 = 1;
			break;
		case 1:
			if (!iLocal_257)
			{
				if (__LIB_38__::func_30(&uLocal_72, 64, "NIG1DAU", "NIG1D_INTRO", 9, 1, 0, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 8f, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					iLocal_257 = 1;
				}
			}
			else
			{
				if (iLocal_252 == 0)
				{
					func_473();
				}
				else
				{
					func_387();
					func_311();
					func_257();
					func_372();
					func_380();
				}
				if (!__LIB_0__::func_75())
				{
					if (__LIB_10__::func_564())
					{
						if (__LIB_11__::func_506() && iLocal_255 == 0)
						{
							iLocal_257 = 0;
						}
						else
						{
							iLocal_69 = 2;
						}
					}
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_75())
			{
				__LIB_6__::func_771();
				__LIB_20__::func_507();
			}
			__LIB_0__::func_202(&uLocal_72, 3);
			__LIB_0__::func_202(&uLocal_72, 4);
			iLocal_257 = 0;
			if (func_328(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_252 == 0)
				{
					func_473();
				}
				else
				{
					func_35(2);
				}
			}
			else
			{
				func_35(1);
			}
			break;
	}
}

void func_477()//Position - 0x37B1D
{
	char* sVar0;
	switch (iLocal_69)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			__LIB_0__::func_523(&iLocal_237);
			switch (iLocal_275)
			{
				case 0:
					break;
				case 1:
					sVar0 = "N1D_ESCAPE";
					break;
				case 2:
					sVar0 = "N1D_NOLOCATE";
					break;
				case 4:
					sVar0 = "N1D_CLUBDES";
					break;
				case 3:
					sVar0 = "N1D_CLUBLOST";
					break;
			}
			if (iLocal_275 == 0)
			{
				__LIB_38__::func_39(1);
			}
			else
			{
				__LIB_39__::func_861(sVar0, 1);
			}
			iLocal_69 = 1;
			break;
		case 1:
			if (__LIB_0__::func_204())
			{
				func_478();
				if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					__LIB_0__::func_296();
				}
				func_240(1);
				func_542(0);
			}
			break;
	}
}

void func_478()//Position - 0x37BD8
{
	int iVar0;
	__LIB_0__::func_0(&Local_293);
	__LIB_0__::func_0(&Local_298);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		__LIB_0__::func_0(&(Local_292[iVar0 /*13*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		__LIB_0__::func_0(&(Local_305[iVar0 /*13*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		__LIB_0__::func_0(&(Local_306[iVar0 /*13*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		__LIB_0__::func_0(&(Local_303[iVar0 /*13*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		__LIB_0__::func_0(&(Local_304[iVar0 /*13*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		__LIB_11__::func_32(&(Local_316[iVar0 /*6*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		__LIB_11__::func_32(&(Local_318[iVar0 /*6*/]));
		iVar0++;
	}
	__LIB_11__::func_32(&Local_317);
	__LIB_0__::func_123(&(Local_328.f_1));
	__LIB_0__::func_123(&iLocal_323);
	__LIB_0__::func_123(&Local_332);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		__LIB_0__::func_123(&(Local_331[iVar0 /*6*/]));
		iVar0++;
	}
	if (OBJECT::DOES_PICKUP_EXIST(Local_328.f_0))
	{
		OBJECT::REMOVE_PICKUP(Local_328.f_0);
	}
	__LIB_0__::func_523(&iLocal_237);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		__LIB_0__::func_523(&(Local_303[iVar0 /*13*/].f_11));
		iVar0++;
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_320);
	__LIB_20__::func_662(2, uLocal_263);
}

void func_501(int iParam0, int iParam1)//Position - 0x388EC
{
	func_504(1, 1);
	if (iParam1 == 1)
	{
		func_502();
	}
	iLocal_70 = iParam0;
	if (iLocal_70 == 3)
	{
		__LIB_11__::func_797("We are trying to skip to Get The Club...");
	}
	else if (iLocal_70 == 1)
	{
		__LIB_11__::func_797("We are trying to skip to Go to Golf Club...");
	}
	iLocal_71 = 0;
	func_1(iLocal_70);
}

void func_502()//Position - 0x38932
{
	HUD::CLEAR_PRINTS();
	func_478();
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
	iLocal_313 = 0;
	func_503();
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DTRANS"))
	{
		TASK::REMOVE_WAYPOINT_RECORDING("NIGEL1DTRANS");
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DGOLF"))
	{
		TASK::REMOVE_WAYPOINT_RECORDING("NIGEL1DGOLF");
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DGOLF2"))
	{
		TASK::REMOVE_WAYPOINT_RECORDING("NIGEL1DGOLF2");
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DCRASH"))
	{
		TASK::REMOVE_WAYPOINT_RECORDING("NIGEL1DCRASH");
	}
	iLocal_252 = 0;
	iLocal_243 = 0;
	func_515();
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1330.1176f, -72.3159f, 48.1812f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 326f);
	}
	func_35(1);
}

void func_503()//Position - 0x389E4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_292[iVar0 /*13*/].f_8);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_304[iVar0 /*13*/].f_8);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_303[iVar0 /*13*/].f_8);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_305[iVar0 /*13*/].f_8);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_306[iVar0 /*13*/].f_8);
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_327);
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_316[iVar0 /*6*/].f_5);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_318[iVar0 /*6*/].f_5);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_331[iVar0 /*6*/].f_5);
		iVar0++;
	}
}

void func_504(bool bParam0, bool bParam1)//Position - 0x38AEC
{
	if (bParam0)
	{
		__LIB_40__::func_677(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_505(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_505(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x38B1F
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_26__::func_258(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_18__::func_173())
			{
				case 0:
					if (func_181(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_67(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_181(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_67(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_181(PLAYER::PLAYER_PED_ID(), 8, 1) || func_181(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_67(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_181(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_67(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			iLocal_46 = 0;
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_46 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__::func_84(500, 0);
		}
	}
}

void func_515()//Position - 0x38F02
{
	int iVar0;
	func_532();
	iLocal_68 = 0;
	iLocal_313 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_310[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_307[iVar0] = 0;
		iVar0++;
	}
	iLocal_277 = 0;
	iLocal_278 = 0;
	iLocal_287 = AUDIO::GET_SOUND_ID();
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1D_SCENE"))
	{
		AUDIO::START_AUDIO_SCENE("NIGEL_1D_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1D_SCENE"))
	{
		if (__LIB_1__::func_183(Local_317.f_0))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_317.f_0, "NIGEL_1D_GOLF_CART_A", 0f);
		}
	}
	iLocal_242 = 0;
	iLocal_244 = 0;
	iLocal_245 = 0;
	iLocal_247 = 0;
	iLocal_254 = 0;
	iLocal_249 = 0;
	iLocal_250 = 0;
	iLocal_251 = 0;
	iLocal_253 = 0;
	iLocal_256 = 0;
	iLocal_257 = 0;
	iLocal_258 = 0;
	iLocal_259 = 0;
	iLocal_246 = 0;
	iLocal_255 = 0;
	uLocal_263 = __LIB_11__::func_843(2);
	PED::ADD_RELATIONSHIP_GROUP("SecurityGroup", &iLocal_320);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_320, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_320);
	TASK::REQUEST_WAYPOINT_RECORDING("NIGEL1DTRANS");
	TASK::REQUEST_WAYPOINT_RECORDING("NIGEL1DGOLF");
	TASK::REQUEST_WAYPOINT_RECORDING("NIGEL1DGOLF2");
	TASK::REQUEST_WAYPOINT_RECORDING("NIGEL1DCRASH");
	STREAMING::REQUEST_ANIM_DICT("rcmnigel1d");
	STREAMING::REQUEST_ANIM_DICT("mini@golf");
	HUD::REQUEST_ADDITIONAL_TEXT("NIGEL1D", 0);
	STREAMING::REQUEST_MODEL(joaat("caddy"));
	while (((((((!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel1d")) || !STREAMING::HAS_ANIM_DICT_LOADED("mini@golf")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DTRANS")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DGOLF")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DGOLF2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DCRASH")) || !STREAMING::HAS_MODEL_LOADED(joaat("caddy")))
	{
		SYSTEM::WAIT(0);
	}
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.75f);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 256);
	iLocal_324 = PED::ADD_SCENARIO_BLOCKING_AREA(-1122.2018f, 48.5724f, 51.4652f, -1076.2333f, 92.1041f, 60.0617f, false, true, true, true);
	PED::SET_PED_NON_CREATION_AREA(-1073.19f, 342.05f, 63.328316f, -966.24f, 411.05f, 84.820435f);
	iLocal_325 = PED::ADD_SCENARIO_BLOCKING_AREA(-1379.33f, 45.13f, 50.68f, -1368.01f, 69.83f, 55.9f, false, true, true, true);
	if (iLocal_326 == -1)
	{
		iLocal_326 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1375.08f, 55.55f, 52.93f, 4f, 6f, 4f, 355f, false, 7);
	}
	__LIB_24__::func_951(64, 2, 0);
	if (__LIB_0__::func_77(0))
	{
		__LIB_6__::func_849(0);
	}
	__LIB_11__::func_329(&uLocal_333);
	__LIB_11__::func_328(&uLocal_333, -1313.7141f, -27.2202f, 48.0314f);
	__LIB_11__::func_328(&uLocal_333, -1294.0658f, -27.0136f, 47.5724f);
	__LIB_11__::func_328(&uLocal_333, -1069.8435f, -143.769f, 39.7493f);
	__LIB_11__::func_328(&uLocal_333, -925.2529f, -89.9079f, 38.3457f);
	__LIB_11__::func_328(&uLocal_333, -1010.9485f, 40.0643f, 49.9277f);
	__LIB_11__::func_328(&uLocal_333, -1122.8375f, 233.7037f, 64.7587f);
	__LIB_11__::func_328(&uLocal_333, -1282.5781f, 188.8798f, 59.2769f);
	__LIB_11__::func_328(&uLocal_333, -1328.1532f, 192.0178f, 57.8136f);
	__LIB_11__::func_328(&uLocal_333, -1386.75f, 167.32f, 57.11f);
	__LIB_11__::func_328(&uLocal_333, -1411.5f, 109.64f, 51.49f);
	__LIB_11__::func_328(&uLocal_333, -1399.63f, -10.83f, 51.93f);
	__LIB_11__::func_328(&uLocal_333, -1359.54f, 18.93f, 52.52f);
	__LIB_11__::func_328(&uLocal_333, -1342.27f, 16.92f, 52.16f);
	__LIB_11__::func_327(&uLocal_333);
	__LIB_20__::func_743(&uLocal_385, &uLocal_333, 100f);
	__LIB_11__::func_329(&uLocal_437);
	__LIB_11__::func_328(&uLocal_437, -1100.1997f, 77.1233f, 53.2703f);
	__LIB_11__::func_328(&uLocal_437, -1040.6903f, 97.3963f, 51.9067f);
	__LIB_11__::func_328(&uLocal_437, -977.9333f, -5.5166f, 45.6548f);
	__LIB_11__::func_328(&uLocal_437, -1039.687f, -35.872f, 45.4867f);
	__LIB_11__::func_328(&uLocal_437, -1062.1901f, -2.8635f, 49.6013f);
	__LIB_11__::func_327(&uLocal_437);
	iLocal_71 = 1;
}

void func_532()//Position - 0x39969
{
	Local_293.f_1 = { -1096.855f, 67.6858f, 52.952f };
	Local_293.f_7 = 112f;
	Local_293.f_8 = iLocal_327;
	Local_317.f_1 = { -1099.91f, 61.2608f, 52.8124f };
	Local_317.f_4 = 243f;
	Local_317.f_5 = joaat("caddy");
	Local_298.f_1 = { -1096.2576f, 69.723f, 53.0107f };
	Local_298.f_7 = 163f;
	Local_298.f_8 = joaat("A_M_Y_Golfer_01");
	Local_332.f_1 = { Local_298.f_1 };
	Local_332.f_5 = joaat("prop_golf_wood_01");
	Local_316[0 /*6*/].f_1 = { -1370.1924f, 61.6015f, 52.4847f };
	Local_316[0 /*6*/].f_4 = 206f;
	Local_316[0 /*6*/].f_5 = joaat("caddy");
	Local_316[1 /*6*/].f_1 = { -1373.8676f, 65.9104f, 52.5826f };
	Local_316[1 /*6*/].f_4 = 224f;
	Local_316[1 /*6*/].f_5 = joaat("caddy");
	Local_316[2 /*6*/].f_1 = { -1302.4132f, -6.6432f, 48.8636f };
	Local_316[2 /*6*/].f_4 = 20f;
	Local_316[2 /*6*/].f_5 = joaat("caddy");
	Local_316[3 /*6*/].f_1 = { -1328.5121f, 26.7404f, 52.4943f };
	Local_316[3 /*6*/].f_4 = 272f;
	Local_316[3 /*6*/].f_5 = joaat("caddy");
	Local_316[4 /*6*/].f_1 = { -1102.3347f, 75.7757f, 53.2591f };
	Local_316[4 /*6*/].f_4 = 293f;
	Local_316[4 /*6*/].f_5 = joaat("caddy");
	Local_316[5 /*6*/].f_1 = { -1103.0232f, 65.6267f, 53.056f };
	Local_316[5 /*6*/].f_4 = 203f;
	Local_316[5 /*6*/].f_5 = joaat("caddy");
	Local_316[6 /*6*/].f_1 = { -1356.7f, 145.34f, 55.67f };
	Local_316[6 /*6*/].f_4 = 187f;
	Local_316[6 /*6*/].f_5 = joaat("caddy");
	Local_316[7 /*6*/].f_1 = { -1158.52f, 68.38f, 55.97f };
	Local_316[7 /*6*/].f_4 = 226.84f;
	Local_316[7 /*6*/].f_5 = joaat("caddy");
	Local_316[8 /*6*/].f_1 = { -1165.3975f, 72.9072f, 55.6258f };
	Local_316[8 /*6*/].f_4 = 238f;
	Local_316[8 /*6*/].f_5 = joaat("caddy");
	Local_319.f_1 = { -1191.22f, 36.83f, 52.03f };
	Local_319.f_4 = -77.1337f;
	Local_319.f_5 = joaat("caddy");
	Local_303[0 /*13*/].f_1 = { -1105.6224f, 66.4609f, 53.07f };
	Local_303[0 /*13*/].f_7 = 118f;
	Local_303[0 /*13*/].f_8 = joaat("S_M_M_HighSec_01");
	Local_303[1 /*13*/].f_1 = { -1090.0902f, 64.3905f, 52.5607f };
	Local_303[1 /*13*/].f_7 = 238f;
	Local_303[1 /*13*/].f_8 = joaat("S_M_M_HighSec_01");
	Local_303[2 /*13*/].f_1 = { -1093.736f, 73.8568f, 53.0388f };
	Local_303[2 /*13*/].f_7 = 319f;
	Local_303[2 /*13*/].f_8 = joaat("S_M_M_HighSec_01");
	Local_304[0 /*13*/].f_1 = { -1298.49f, -23.89f, 47.99f };
	Local_304[0 /*13*/].f_7 = 126.55f;
	Local_304[0 /*13*/].f_4 = { -1314.059f, -35.6361f, 48.1836f };
	Local_304[0 /*13*/].f_8 = joaat("S_M_M_Security_01");
	Local_304[1 /*13*/].f_1 = { -1344.5045f, 18.8674f, 51.9921f };
	Local_304[1 /*13*/].f_7 = 205f;
	Local_304[1 /*13*/].f_4 = { -1344.4f, 18.11f, 52.19f };
	Local_304[1 /*13*/].f_8 = joaat("S_M_M_Security_01");
	Local_304[2 /*13*/].f_1 = { -1376.71f, 140.2f, 55.25f };
	Local_304[2 /*13*/].f_7 = 99f;
	Local_304[2 /*13*/].f_4 = { -1375.5769f, 131.1931f, 55.3238f };
	Local_304[2 /*13*/].f_8 = joaat("S_M_M_Security_01");
	Local_292[0 /*13*/].f_1 = { -1377.18f, 55.39f, 53.7f };
	Local_292[0 /*13*/].f_7 = 101f;
	Local_292[0 /*13*/].f_8 = joaat("S_M_Y_Valet_01");
	Local_292[1 /*13*/].f_1 = { -1369.3046f, 52.1333f, 52.4768f };
	Local_292[1 /*13*/].f_7 = 20f;
	Local_292[1 /*13*/].f_8 = joaat("S_M_Y_Valet_01");
	Local_292[2 /*13*/].f_1 = { -1366.5809f, 54.04f, 52.4633f };
	Local_292[2 /*13*/].f_7 = 94f;
	Local_292[2 /*13*/].f_8 = joaat("S_M_Y_Valet_01");
	Local_292[3 /*13*/].f_1 = { -1367.6914f, 60.2214f, 52.4635f };
	Local_292[3 /*13*/].f_7 = 126f;
	Local_292[3 /*13*/].f_8 = joaat("S_M_Y_Valet_01");
	Local_305[0 /*13*/].f_1 = { -1161.1089f, 72.2742f, 55.6518f };
	Local_305[0 /*13*/].f_7 = 328.424f;
	Local_305[0 /*13*/].f_8 = joaat("A_M_Y_Golfer_01");
	Local_305[0 /*13*/].f_12 = "idle_b";
	Local_305[1 /*13*/].f_1 = { -1159.8032f, 71.7432f, 55.6988f };
	Local_305[1 /*13*/].f_7 = 344.2791f;
	Local_305[1 /*13*/].f_8 = joaat("A_M_Y_Golfer_01");
	Local_305[1 /*13*/].f_12 = "idle_c";
	Local_305[2 /*13*/].f_1 = { -1143.1727f, 112.0022f, 58.1151f };
	Local_305[2 /*13*/].f_7 = 109f;
	Local_305[2 /*13*/].f_8 = joaat("A_M_Y_Golfer_01");
	Local_305[2 /*13*/].f_12 = "wood_idle_low_b";
	Local_305[3 /*13*/].f_1 = { -1157.1703f, 79.4863f, 56.7109f };
	Local_305[3 /*13*/].f_7 = 159f;
	Local_305[3 /*13*/].f_8 = joaat("A_M_Y_Golfer_01");
	Local_305[3 /*13*/].f_12 = "wedge_idle_high_c";
	Local_305[4 /*13*/].f_1 = { -1060.1726f, 79.7097f, 51.0781f };
	Local_305[4 /*13*/].f_7 = 222f;
	Local_305[4 /*13*/].f_8 = joaat("A_M_Y_Golfer_01");
	Local_305[4 /*13*/].f_12 = "wedge_idle_high_b";
	Local_305[5 /*13*/].f_1 = { -1025.1515f, 8.619f, 48.7672f };
	Local_305[5 /*13*/].f_7 = 133f;
	Local_305[5 /*13*/].f_8 = joaat("A_M_Y_Golfer_01");
	Local_305[5 /*13*/].f_12 = "putt_idle_high_b";
	Local_331[0 /*6*/].f_1 = { Local_305[0 /*13*/].f_1 };
	Local_331[0 /*6*/].f_5 = joaat("prop_golf_putter_01");
	Local_331[1 /*6*/].f_1 = { Local_305[1 /*13*/].f_1 };
	Local_331[1 /*6*/].f_5 = joaat("prop_golf_putter_01");
	Local_331[2 /*6*/].f_1 = { Local_305[2 /*13*/].f_1 };
	Local_331[2 /*6*/].f_5 = joaat("prop_golf_wood_01");
	Local_331[3 /*6*/].f_1 = { Local_305[3 /*13*/].f_1 };
	Local_331[3 /*6*/].f_5 = joaat("prop_golf_wood_01");
	Local_331[4 /*6*/].f_1 = { Local_305[4 /*13*/].f_1 };
	Local_331[4 /*6*/].f_5 = joaat("prop_golf_iron_01");
	Local_331[5 /*6*/].f_1 = { Local_305[5 /*13*/].f_1 };
	Local_331[5 /*6*/].f_5 = joaat("prop_golf_putter_01");
	Local_306[0 /*13*/].f_1 = { -1096.2777f, -117.3159f, 40.537f };
	Local_306[0 /*13*/].f_4 = { -1095.01f, -56.45f, 43.83f };
	Local_306[0 /*13*/].f_7 = 343f;
	Local_306[0 /*13*/].f_8 = joaat("A_M_Y_Golfer_01");
	Local_306[1 /*13*/].f_1 = { -1115.5482f, -104.4307f, 40.8407f };
	Local_306[1 /*13*/].f_4 = { -1139.619f, -114.8868f, 40.0996f };
	Local_306[1 /*13*/].f_7 = 45f;
	Local_306[1 /*13*/].f_8 = joaat("A_M_Y_Golfer_01");
	Local_318[0 /*6*/].f_1 = { -1100.8177f, -103.591f, 40.874f };
	Local_318[0 /*6*/].f_4 = 99f;
	Local_318[0 /*6*/].f_5 = joaat("caddy");
	Local_318[1 /*6*/].f_1 = { -1114.0878f, -97.6378f, 41.0175f };
	Local_318[1 /*6*/].f_4 = 233f;
	Local_318[1 /*6*/].f_5 = joaat("caddy");
}

int func_535(var uParam0, var uParam1)//Position - 0x3A28B
{
	int iVar0[7];
	char* sVar1;
	int iVar2;
	int iVar3;
	sVar1 = "mini@golf";
	iVar0[0] = joaat("S_M_M_HighSec_01");
	iVar0[1] = joaat("prop_golf_wood_01");
	iVar0[2] = joaat("prop_golf_wood_01");
	iVar0[3] = joaat("U_M_M_MarkFost");
	iVar0[4] = joaat("A_M_Y_Golfer_01");
	iVar0[5] = joaat("caddy");
	iVar0[6] = joaat("prop_golf_bag_01");
	switch (iLocal_49)
	{
		case 0:
			uParam0->f_27 = 1;
			uParam0->f_48 = "rcmnigel1d";
			__LIB_11__::func_329(uParam1);
			__LIB_11__::func_328(uParam1, -1313.7141f, -27.2202f, 48.0314f);
			__LIB_11__::func_328(uParam1, -1294.0658f, -27.0136f, 47.5724f);
			__LIB_11__::func_328(uParam1, -1069.8435f, -143.769f, 39.7493f);
			__LIB_11__::func_328(uParam1, -925.2529f, -89.9079f, 38.3457f);
			__LIB_11__::func_328(uParam1, -1010.9485f, 40.0643f, 49.9277f);
			__LIB_11__::func_328(uParam1, -1122.8375f, 233.7037f, 64.7587f);
			__LIB_11__::func_328(uParam1, -1282.5781f, 188.8798f, 59.2769f);
			__LIB_11__::func_328(uParam1, -1328.1532f, 192.0178f, 57.8136f);
			__LIB_11__::func_328(uParam1, -1386.75f, 167.32f, 57.11f);
			__LIB_11__::func_328(uParam1, -1411.5f, 109.64f, 51.49f);
			__LIB_11__::func_328(uParam1, -1379.52f, 111.05f, 54.28f);
			__LIB_11__::func_328(uParam1, -1371.77f, 24.07f, 52.88f);
			__LIB_11__::func_328(uParam1, -1342.27f, 16.92f, 52.16f);
			__LIB_11__::func_327(uParam1);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar2]);
				iVar2++;
			}
			STREAMING::REQUEST_ANIM_DICT(uParam0->f_48);
			STREAMING::REQUEST_ANIM_DICT(sVar1);
			iLocal_49 = 1;
			break;
		case 1:
			if ((!__LIB_10__::func_716(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_48)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
			{
				return 0;
			}
			iLocal_49 = 2;
			break;
		case 2:
			func_536(41, 1);
			uParam0->f_28[0] = PED::CREATE_PED(26, iVar0[3], -1096.855f, 67.6858f, 52.952f, 112f, true, true);
			PED::SET_PED_PROP_INDEX(uParam0->f_28[0], 0, 0, 0, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_28[0], true);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_28[0], true, 1);
			PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_28[0], true);
			uParam0->f_41[0] = OBJECT::CREATE_OBJECT(iVar0[1], -1096.855f, 67.6858f, 52.952f, true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_48, "swing_a_mark", 8f, -2f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_48, "swing_b_mark", 8f, -2f, -1, 0, 0f, false, false, false);
			TASK::SET_SEQUENCE_TO_REPEAT(iVar3, true);
			TASK::CLOSE_SEQUENCE_TASK(iVar3);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], iVar3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
			uParam0->f_28[1] = PED::CREATE_PED(26, iVar0[4], -1096.2576f, 69.723f, 53.0107f, 163f, true, true);
			TASK::TASK_PLAY_ANIM(uParam0->f_28[1], uParam0->f_48, "idle_a_friend_watching", 8f, -8f, -1, 1, 0f, false, false, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[1], true);
			uParam0->f_41[1] = OBJECT::CREATE_OBJECT(iVar0[2], -1096.2576f, 69.723f, 53.0107f, true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[1], PED::GET_PED_BONE_INDEX(uParam0->f_28[1], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			uParam0->f_28[2] = PED::CREATE_PED(26, iVar0[0], -1105.6224f, 66.4609f, 53.07f, 118f, true, true);
			uParam0->f_28[3] = PED::CREATE_PED(26, iVar0[0], -1090.0902f, 64.3905f, 52.5607f, 238f, true, true);
			uParam0->f_28[4] = PED::CREATE_PED(26, iVar0[0], -1093.736f, 73.8568f, 53.0388f, 319f, true, true);
			iVar2 = 2;
			while (iVar2 <= 4)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[iVar2], true);
				WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[iVar2], joaat("WEAPON_PISTOL"), -1, false, true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_28[iVar2], true);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_28[iVar2], true);
				PED::SET_PED_DIES_WHEN_INJURED(uParam0->f_28[iVar2], true);
				TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(uParam0->f_28[iVar2], true);
				PED::SET_PED_MODEL_IS_SUPPRESSED(iVar0[0], true);
				iVar2++;
			}
			uParam0->f_35[0] = VEHICLE::CREATE_VEHICLE(iVar0[5], -1099.91f, 61.2608f, 52.8124f, 243f, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[0], 5f);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_35[0], true, true, false);
			ENTITY::SET_ENTITY_HEALTH(uParam0->f_35[0], 1200, 0);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[5], true);
			uParam0->f_41[2] = OBJECT::CREATE_OBJECT(iVar0[6], -1099.91f, 63.2608f, 52.8124f, true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[2], uParam0->f_35[0], 0, 0.2f, -1.3f, 0.5f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			uParam0->f_35[1] = VEHICLE::CREATE_VEHICLE(iVar0[5], -1102.3347f, 75.7757f, 53.2591f, 293f, true, true, false);
			uParam0->f_35[2] = VEHICLE::CREATE_VEHICLE(iVar0[5], -1103.0232f, 65.6267f, 53.056f, 203f, true, true, false);
			iVar2 = 1;
			while (iVar2 <= 2)
			{
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[iVar2], 5f);
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar2]);
				iVar2++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_536(int iParam0, bool bParam1)//Position - 0x3A87E
{
	switch (iParam0)
	{
		case 37:
			if (bParam1)
			{
				iLocal_65 = __LIB_30__::func_418();
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_GUARD_STAND", false);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_CLIPBOARD", false);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
				__LIB_30__::func_417();
				MISC::CLEAR_AREA_OF_PEDS(-1100.5f, 789.8f, 164.34f, 20f, 0);
				__LIB_30__::func_419(0);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_65, false);
				PED::CLEAR_PED_NON_CREATION_AREA();
				__LIB_30__::func_419(1);
			}
			break;
		case 38:
			if (bParam1)
			{
				iLocal_65 = PED::ADD_SCENARIO_BLOCKING_AREA(-577.27405f, 270.65054f, 77f, -543.17926f, 315.29727f, 94f, false, true, true, true);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_GUARD_STAND", false);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_CLIPBOARD", false);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
				PED::SET_PED_NON_CREATION_AREA(-577.27405f, 270.65054f, 77f, -543.17926f, 315.29727f, 94f);
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_Y_Doorman_01"), true);
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_M_Bouncer_01"), true);
				MISC::CLEAR_AREA_OF_PEDS(-558.2858f, 284.4073f, 81.1764f, 15f, 0);
				MISC::CLEAR_AREA_OF_PEDS(-573.39404f, 289.3696f, 79.06918f, 15f, 0);
				MISC::CLEAR_AREA(-554.17f, 307.68f, 82.84f, 2f, true, false, false, false);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-577.27405f, 270.65054f, 77f, -543.17926f, 315.29727f, 94f, false, true);
				VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-577.27405f, 270.65054f, 77f, -543.17926f, 315.29727f, 94f, 0);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gauntlet"), true);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_65, false);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_GUARD_STAND", true);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_CLIPBOARD", true);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", true);
				PED::CLEAR_PED_NON_CREATION_AREA();
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_Y_Doorman_01"), false);
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_M_Bouncer_01"), false);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-577.27405f, 270.65054f, 77f, -543.17926f, 315.29727f, 94f, true, true);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gauntlet"), false);
			}
			break;
		case 39:
			if (bParam1)
			{
				iLocal_65 = PED::ADD_SCENARIO_BLOCKING_AREA(-1073.19f, 342.05f, 63.328316f, -966.24f, 411.05f, 84.820435f, false, true, true, true);
				PED::SET_PED_NON_CREATION_AREA(-1073.19f, 342.05f, 63.328316f, -966.24f, 411.05f, 84.820435f);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1073.19f, 342.05f, 63.328316f, -966.24f, 411.05f, 84.820435f, false, true);
				VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-1073.19f, 342.05f, 63.328316f, -966.24f, 411.05f, 84.820435f, 0);
				MISC::CLEAR_AREA(-1035.73f, 365.44f, 68.91f, 35f, true, false, false, false);
				MISC::CLEAR_AREA_OF_VEHICLES(-1035.73f, 365.44f, 68.91f, 27f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_PEDS(-1035.73f, 365.44f, 68.91f, 27f, 0);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_65, false);
				PED::CLEAR_PED_NON_CREATION_AREA();
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1073.19f, 342.05f, 63.328316f, -966.24f, 411.05f, 84.820435f, true, true);
			}
			break;
		case 40:
			break;
		case 41:
			if (bParam1)
			{
				iLocal_65 = PED::ADD_SCENARIO_BLOCKING_AREA(-1122.2018f, 48.5724f, 51.4652f, -1076.2333f, 92.1041f, 60.0617f, false, true, true, true);
				PED::SET_PED_NON_CREATION_AREA(-1122.2018f, 48.5724f, 51.4652f, -1076.2333f, 92.1041f, 60.0617f);
				MISC::CLEAR_AREA(-1096.855f, 67.6858f, 52.952f, 15f, true, false, false, false);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_65, false);
				PED::CLEAR_PED_NON_CREATION_AREA();
			}
			break;
		case 42:
			if (bParam1)
			{
				iLocal_65 = PED::ADD_SCENARIO_BLOCKING_AREA(-1319.5663f, -650.07697f, 23.53715f, -1301.7892f, -634.0721f, 38.18122f, false, true, true, true);
				PED::SET_PED_NON_CREATION_AREA(-1319.5663f, -650.07697f, 23.53715f, -1301.7892f, -634.0721f, 38.18122f);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_65, false);
				PED::CLEAR_PED_NON_CREATION_AREA();
			}
			break;
	}
}

void func_542(int iParam0)//Position - 0x3ADDB
{
	int iVar0;
	if (__LIB_26__::func_257())
	{
	}
	func_240(iParam0);
	func_503();
	__LIB_0__::func_555();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1D_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("NIGEL_1D_SCENE");
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		__LIB_0__::func_124(&(Local_292[iVar0 /*13*/]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		__LIB_0__::func_124(&(Local_304[iVar0 /*13*/]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		__LIB_0__::func_124(&(Local_303[iVar0 /*13*/]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		__LIB_0__::func_124(&(Local_305[iVar0 /*13*/]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		__LIB_0__::func_124(&(Local_306[iVar0 /*13*/]), 1, 0, 1);
		iVar0++;
	}
	__LIB_0__::func_124(&Local_298, 1, 0, 1);
	__LIB_0__::func_124(&Local_293, 1, 0, 1);
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		__LIB_0__::func_106(&(Local_316[iVar0 /*6*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		__LIB_0__::func_106(&(Local_318[iVar0 /*6*/]));
		iVar0++;
	}
	__LIB_0__::func_106(&Local_317);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		__LIB_0__::func_122(&(Local_331[iVar0 /*6*/]), 0);
		iVar0++;
	}
	__LIB_18__::func_191(188, 1, 0, 1, 0);
	Global_40787 = 1;
	SYSTEM::WAIT(0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_324, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_325, false);
	if (iLocal_326 > -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_326);
	}
	STREAMING::REMOVE_ANIM_DICT("rcmnigel1d");
	STREAMING::REMOVE_ANIM_DICT("mini@golf");
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	__LIB_32__::func_757(&Local_66, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

