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
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
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
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 1;
	var uLocal_100 = 0;
	var uLocal_101 = 1;
	var uLocal_102 = 0;
	var uLocal_103 = 1;
	var uLocal_104 = 0;
	var uLocal_105 = 1;
	var uLocal_106 = 0;
	var uLocal_107 = 1;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 1;
	var uLocal_114 = 0;
	var uLocal_115 = 1;
	var uLocal_116 = 0;
	var uLocal_117 = 1;
	var uLocal_118 = 0;
	var uLocal_119 = 1;
	var uLocal_120 = 0;
	var uLocal_121 = 1;
	var uLocal_122 = 0;
	var uLocal_123 = 1;
	var uLocal_124 = 0;
	var uLocal_125 = 1;
	var uLocal_126 = 0;
	var uLocal_127 = 1;
	var uLocal_128 = 0;
	var uLocal_129 = 1;
	var uLocal_130 = 0;
	var uLocal_131 = 1;
	var uLocal_132 = 0;
	float fLocal_133 = 0f;
	float fLocal_134 = 0f;
	var uLocal_135 = 0;
	float fLocal_136 = 0f;
	float fLocal_137 = 0f;
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	var uLocal_140 = 0;
	float fLocal_141 = 0f;
	float fLocal_142 = 0f;
	float fLocal_143 = 0f;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	float fLocal_150 = 0f;
	float fLocal_151 = 0f;
	float fLocal_152 = 0f;
	float fLocal_153 = 0f;
	var uLocal_154 = 1;
	var uLocal_155 = 0;
	var uLocal_156 = 1;
	var uLocal_157 = 0;
	var uLocal_158 = 1;
	var uLocal_159 = 0;
	var uLocal_160 = 1;
	var uLocal_161 = 0;
	var uLocal_162 = 1;
	var uLocal_163 = 0;
	var uLocal_164 = 1;
	var uLocal_165 = 0;
	var uLocal_166 = 1;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	int iLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 1;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 1;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 1;
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
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 1;
	var uLocal_242 = 0;
	var uLocal_243 = 1;
	var uLocal_244 = 0;
	var uLocal_245 = 1;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 1;
	var uLocal_251 = 0;
	var uLocal_252 = 1;
	var uLocal_253 = 0;
	var uLocal_254 = 1;
	var uLocal_255 = 0;
	var uLocal_256 = 1;
	var uLocal_257 = 0;
	var uLocal_258 = 1;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 1;
	var uLocal_264 = 0;
	float fLocal_265 = 0f;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	var uLocal_269 = 16;
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
	var uLocal_436 = -1;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 1000;
	var uLocal_444 = 1000;
	var uLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447[4] = { 0, 0, 0, 0 };
	int iLocal_448[4] = { 0, 0, 0, 0 };
	int iLocal_449 = 0;
	int iLocal_450[4] = { 0, 0, 0, 0 };
	int iLocal_451[4] = { 0, 0, 0, 0 };
	struct<3> Local_452[4];
	float fLocal_453[4] = { 0f, 0f, 0f, 0f };
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	struct<3> Local_456 = { 0, 0, 0 } ;
	float fLocal_457 = 0f;
	struct<2> Local_458 = { 0, 0 } ;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	int iLocal_461[4] = { 0, 0, 0, 0 };
	float fLocal_462 = 0f;
	float fLocal_463 = 0f;
	struct<2> Local_464 = { 0, 0 } ;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	struct<2> Local_467 = { 0, 0 } ;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	struct<4> Local_473 = { 0, 0, 0, 0 } ;
	struct<2> Local_474 = { 0, 0 } ;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	int* iLocal_477 = NULL;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	int iLocal_480[4] = { 0, 0, 0, 0 };
	float fLocal_481[4] = { 0f, 0f, 0f, 0f };
	float fLocal_482 = 0f;
	int iLocal_483 = 0;
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
	Local_61 = { 0f, 0f, 0f };
	Local_62 = { 0f, 0f, 0f };
	iLocal_63 = -1;
	iLocal_68 = 1;
	iLocal_75 = 1;
	iLocal_97 = 1;
	fLocal_133 = 120f;
	fLocal_134 = 0f;
	fLocal_136 = 1f;
	fLocal_137 = 0f;
	fLocal_138 = 1f;
	fLocal_139 = 30f;
	fLocal_141 = 1f;
	fLocal_142 = 5f;
	fLocal_143 = 1f;
	fLocal_144 = 1f;
	fLocal_145 = 100f;
	fLocal_146 = 100f;
	fLocal_147 = 0f;
	fLocal_148 = 7000f;
	fLocal_149 = 0f;
	fLocal_150 = 0f;
	fLocal_151 = 0.3f;
	fLocal_152 = 0.5f;
	fLocal_153 = 50f;
	iLocal_171 = -1;
	iLocal_179 = -1;
	iLocal_180 = -1;
	fLocal_265 = 15f;
	iLocal_266 = 786599;
	iLocal_268 = 318;
	iLocal_446 = 1;
	iLocal_449 = 4;
	StringCopy(&Local_458, "null", 16);
	StringCopy(&Local_464, "null", 16);
	StringCopy(&Local_467, "null", 16);
	iLocal_470 = -1;
	iLocal_471 = 5;
	StringCopy(&Local_473, "null", 16);
	StringCopy(&Local_474, "null", 16);
	fLocal_482 = -1f;
	iLocal_483 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_99();
	}
	SYSTEM::WAIT(0);
	func_90();
	func_89();
	__LIB_26__.func_563();
	while (iLocal_446 && __LIB_39__.func_523(4, 0))
	{
		SYSTEM::WAIT(0);
		switch (iLocal_267)
		{
			case 0:
				if (func_80())
				{
					iLocal_267 = 1;
				}
				break;
			case 1:
				if (func_79())
				{
					iLocal_267 = 2;
				}
				break;
			case 2:
				if (func_2())
				{
					iLocal_267 = 3;
				}
				break;
			case 3:
				func_1();
				break;
		}
	}
	func_99();
}

void func_1()//Position - 0x1C8
{
	iLocal_446 = 0;
}

int func_2()//Position - 0x1D4
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_69(iVar0, &iVar1);
		iVar0++;
	}
	if (iVar1 < 0)
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_447[iVar2]))
				{
					if (!PED::IS_PED_INJURED(iLocal_447[iVar2]))
					{
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							__LIB_9__.func_981(&uLocal_434, 0, 0);
							iLocal_483 = iVar1;
						}
						return 0;
					}
				}
				iVar2++;
			}
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				__LIB_9__.func_981(&uLocal_434, 0, 0);
				iLocal_483 = iVar1;
			}
			return 1;
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			__LIB_9__.func_981(&uLocal_434, 0, 0);
			iLocal_483 = iVar1;
		}
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_464))
	{
		if (iLocal_483 != iVar1 || iVar1 < -1)
		{
			__LIB_9__.func_981(&uLocal_434, 0, 0);
			iLocal_483 = iVar1;
			return 0;
		}
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_447[iVar1], false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false));
		if (fVar3 < (150f * 150f) || CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			__LIB_40__.func_938(&uLocal_434, iLocal_447[iVar1], &Local_464, 0, 1, 1, 1);
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				iLocal_483 = iVar1;
			}
		}
	}
	func_3(&Local_467, &iLocal_477, &iVar1);
	return 0;
}

int func_3(char* sParam0, int* iParam1, int iParam2)//Position - 0x317
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	Var0 = { *sParam0 };
	if (__LIB_12__.func_114())
	{
		return 0;
	}
	if (!__LIB_0__.func_516(iParam1))
	{
		__LIB_18__.func_364(iParam1);
		return 0;
	}
	if (iLocal_472 >= iLocal_471)
	{
		return 0;
	}
	fVar1 = (10f + ((SYSTEM::TO_FLOAT(iLocal_472) / SYSTEM::TO_FLOAT(iLocal_471)) * 10f));
	if (!__LIB_34__.func_808(iParam1, fVar1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_447[*iParam2]))
	{
		*iParam2 = -1;
		return 0;
	}
	fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_447[*iParam2], false));
	if (fVar2 > (30f * 30f))
	{
		if (fVar2 > (150f * 150f))
		{
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				__LIB_9__.func_981(&uLocal_434, 0, 0);
			}
			*iParam2 = -1;
		}
		return 0;
	}
	if (iLocal_470 > 0)
	{
		StringIntConCat(&Var0, iLocal_470, 16);
	}
	__LIB_0__.func_203(&uLocal_269, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	if (__LIB_37__.func_799(&uLocal_269, "PRSAUD", &Var0, 3, 0, 0, 0))
	{
		if (iLocal_470 > 0)
		{
			iLocal_470++;
		}
		__LIB_6__.func_892(iParam1);
		iLocal_472++;
		return 1;
	}
	return 0;
}

int func_69(int iParam0, int iParam1)//Position - 0x2137
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	switch (iLocal_480[iParam0])
	{
		case 0:
			if (!func_78(iLocal_447[iParam0], iLocal_450[iParam0], &(iLocal_480[iParam0]), -1, -2))
			{
				return 0;
			}
			func_77(iParam0, iParam1);
			if (fLocal_463 >= 0f)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_450[iParam0], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_450[iParam0]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_450[iParam0], iLocal_461[iParam0], &Local_458, true);
					}
					else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8 && STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 0)
						{
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_450[iParam0], (fLocal_463 - VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_450[iParam0])));
							iLocal_480[iParam0] = 1;
						}
					}
					else
					{
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_450[iParam0], (fLocal_463 - VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_450[iParam0])));
						iLocal_480[iParam0] = 1;
					}
				}
			}
			break;
		case 1:
			if (!func_78(iLocal_447[iParam0], iLocal_450[iParam0], &(iLocal_480[iParam0]), -1, -2))
			{
				return 0;
			}
			if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_447[iParam0], iLocal_450[iParam0]))
			{
				iLocal_480[iParam0] = 4;
				return 0;
			}
			func_77(iParam0, iParam1);
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_450[iParam0]))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar0))
				{
					fLocal_481[iParam0] = 1f;
				}
				else
				{
					bVar1 = false;
					if (!PED::GET_PED_TYPE(iLocal_447[iParam0]) == 6)
					{
						func_70(iLocal_450[iParam0], PLAYER::PLAYER_PED_ID(), &(fLocal_481[iParam0]), 17.5f, 7.5f, 30f, 0.7f, 1.2f, 1f, bVar1);
					}
					else
					{
						fLocal_481[iParam0] = 1f;
						fVar2 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
						fVar3 = ENTITY::GET_ENTITY_SPEED(iLocal_450[iParam0]);
						fLocal_481[iParam0] = 1f;
						if (fVar3 > fVar2)
						{
							fLocal_481[iParam0] = (fVar2 / fVar3);
						}
					}
				}
				if (fLocal_481[iParam0] <= 0.05f)
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_450[iParam0]);
					return 0;
				}
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_450[iParam0], fLocal_481[iParam0]);
				fVar4 = (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_450[iParam0]) / VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_461[iParam0], &Local_458));
				if (!VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_450[iParam0]))
				{
					if (!PED::GET_PED_TYPE(iLocal_447[iParam0]) == 6)
					{
						if (MISC::IS_AREA_OCCUPIED(ENTITY::GET_ENTITY_COORDS(iLocal_450[iParam0], true) - Vector(1f, 1f, 1f), ENTITY::GET_ENTITY_COORDS(iLocal_450[iParam0], true) + Vector(1f, 1f, 1f), false, true, false, false, false, 0, false))
						{
							VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_450[iParam0], iLocal_266);
						}
					}
					else
					{
						PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
						PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
					}
				}
				if (fVar4 >= fLocal_482)
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_450[iParam0]);
					return 0;
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_447[iParam0], PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_450[iParam0], PLAYER::PLAYER_PED_ID(), true))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_450[iParam0]);
					return 0;
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_450[iParam0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_450[iParam0]);
					return 0;
				}
				if (PED::GET_PED_TYPE(iLocal_447[iParam0]) == 6)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_450[iParam0]);
							return 0;
						}
					}
				}
			}
			else
			{
				TASK::CLEAR_PED_TASKS(iLocal_447[iParam0]);
				if (!PED::GET_PED_TYPE(iLocal_447[iParam0]) == 6)
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_447[iParam0], iLocal_450[iParam0], fLocal_265, iLocal_266);
					PED::SET_PED_KEEP_TASK(iLocal_447[iParam0], true);
					if (iLocal_268 == 281)
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_450[iParam0], 0f);
					}
					iLocal_480[iParam0] = 2;
				}
				else
				{
					TASK::TASK_COMBAT_PED(iLocal_447[iParam0], PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_447[iParam0], 1, true);
					PED::SET_PED_KEEP_TASK(iLocal_447[iParam0], true);
					PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
					PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
					iLocal_480[iParam0] = 3;
				}
				return 0;
			}
			break;
		case 2:
			if (!func_78(iLocal_447[iParam0], iLocal_450[iParam0], &(iLocal_480[iParam0]), -1, -2))
			{
				return 0;
			}
			func_77(iParam0, iParam1);
			if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_447[iParam0], iLocal_450[iParam0]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_447[iParam0], joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 1)
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_447[iParam0], iLocal_450[iParam0], fLocal_265, iLocal_266);
				}
				else
				{
					TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_447[iParam0], fLocal_265);
				}
			}
			else
			{
				iLocal_480[iParam0] = 4;
				return 0;
			}
			break;
		case 3:
			if (!func_78(iLocal_447[iParam0], iLocal_450[iParam0], &(iLocal_480[iParam0]), -1, -2))
			{
				return 0;
			}
			func_77(iParam0, iParam1);
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
				{
					TASK::CLEAR_PED_TASKS(iLocal_447[iParam0]);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_447[iParam0]));
					return 0;
				}
			}
			break;
		case 4:
			if (PED::IS_PED_INJURED(iLocal_447[iParam0]))
			{
				iLocal_480[iParam0] = -1;
				return 0;
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_450[iParam0], false))
			{
				iLocal_480[iParam0] = -2;
				return 0;
			}
			if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_447[iParam0], iLocal_450[iParam0]))
			{
				if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_447[iParam0]))
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_447[iParam0], iLocal_450[iParam0], 20000, -1, 2f, 1, 0);
				}
			}
			else
			{
				iLocal_480[iParam0] = 1;
				return 0;
			}
			break;
		case -1:
			break;
		case -2:
			if (!PED::IS_PED_INJURED(iLocal_447[iParam0]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_447[iParam0], joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 1)
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_447[iParam0], 29, true);
					TASK::TASK_SMART_FLEE_PED(iLocal_447[iParam0], PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
				}
			}
			else
			{
				iLocal_480[iParam0] = -1;
				return 0;
			}
			break;
		default:
			break;
	}
	return 0;
}

void func_70(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, bool bParam9)//Position - 0x276D
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (!fParam4 < fParam3)
	{
		fParam4 = (fParam3 - 0.1f);
	}
	if (fParam6 > fParam8)
	{
		fParam8 = fParam6;
	}
	fVar0 = (fParam7 / fParam8);
	fVar1 = (fParam6 / fParam8);
	fVar2 = (((fParam5 - fParam3) * (1f / 0.4f)) + fParam3);
	func_71(iParam0, iParam1, uParam2, fParam8, fParam4, fParam3, fVar2, fVar0, 1f, fVar1, bParam9);
}

void func_71(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)//Position - 0x27CD
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	if (iLocal_81 == 0)
	{
		if (*uParam2 < fParam3)
		{
			*uParam2 = fParam3;
			iLocal_81 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_144;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = __LIB_12__.func_35(iParam0, iParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (__LIB_11__.func_140(iParam1, iParam0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (__LIB_12__.func_34(iParam0, iParam1) < fParam5)
			{
				fVar1 = __LIB_12__.func_33(iParam0, iParam1);
				fVar1 = (fVar1 + -15f);
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = ((75f - fVar1) / 75f);
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = ((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			iLocal_82 = 1;
		}
		else if (iLocal_82)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_82 = 0;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = (fVar4 - *uParam2);
	if (fVar1 > 0f)
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_151 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	else
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_152 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				iVar9 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
				if (!ENTITY::IS_ENTITY_DEAD(iVar9, false))
				{
					iVar10 = ENTITY::GET_ENTITY_MODEL(iVar9);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar10) || VEHICLE::IS_THIS_MODEL_A_BIKE(iVar10))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar9, false))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_142 - fLocal_143));
							fVar1 = (fVar1 + fLocal_143);
							fLocal_141 = fVar1;
							if (fLocal_141 < fLocal_143)
							{
								fLocal_141 = fLocal_143;
							}
							if (fLocal_141 > fLocal_142)
							{
								fLocal_141 = fLocal_142;
							}
							PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), fLocal_141);
						}
					}
				}
			}
		}
	}
}

int func_77(int iParam0, var uParam1)//Position - 0x2CAA
{
	if (*uParam1 < 0)
	{
		*uParam1 = iParam0;
		return 1;
	}
	return 0;
}

int func_78(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)//Position - 0x2CC3
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		*uParam2 = iParam3;
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		if (!__LIB_37__.func_799(&uLocal_269, "PRSAUD", &Local_474, 3, 0, 0, 0))
		{
			return 0;
		}
		else
		{
			*uParam2 = iParam3;
			__LIB_6__.func_892(&iLocal_477);
			return 0;
		}
		Local_473 = { Local_473 };
		*uParam2 = iParam3;
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		TASK::CLEAR_PED_TASKS(iParam0);
		*uParam2 = iParam4;
		return 0;
	}
	return 1;
}

int func_79()//Position - 0x2D41
{
	int iVar0;
	int iVar1;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_69(iVar0, &iVar1);
		iVar0++;
	}
	if (!__LIB_12__.func_114())
	{
		return 1;
	}
	return 0;
}

int func_80()//Position - 0x2D74
{
	int iVar0;
	int iVar1;
	iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar0))
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_450[iVar1], false) && !PED::IS_PED_INJURED(iLocal_447[iVar1]))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_458) && iLocal_461[iVar1] > 0)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_450[iVar1], iLocal_461[iVar1], &Local_458, true);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_450[iVar1], fLocal_462);
						TASK::TASK_VEHICLE_MISSION(iLocal_447[iVar1], iLocal_450[iVar1], 0, 15, 20f, iLocal_266, 0.5f, 2f, true);
						if (PED::GET_PED_TYPE(iLocal_447[iVar1]) == 6)
						{
							VEHICLE::SET_VEHICLE_SIREN(iLocal_450[iVar1], true);
						}
					}
				}
				iVar1++;
			}
			return 1;
		}
	}
	return 0;
}

void func_89()//Position - 0x3001
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 400)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iLocal_448[iVar0] != 0)
			{
				STREAMING::REQUEST_MODEL(iLocal_448[iVar0]);
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_448[iVar0]))
				{
					STREAMING::REQUEST_MODEL(iLocal_448[iVar0]);
					bVar2 = false;
				}
			}
			if (iLocal_451[iVar0] != 0)
			{
				STREAMING::REQUEST_MODEL(iLocal_451[iVar0]);
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_451[iVar0]))
				{
					STREAMING::REQUEST_MODEL(iLocal_451[iVar0]);
					bVar2 = false;
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_458) && iLocal_461[iVar0] > 0)
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_461[iVar0], &Local_458);
				if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_461[iVar0], &Local_458))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_461[iVar0], &Local_458);
					bVar2 = false;
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iVar1++;
		}
		SYSTEM::WAIT(0);
	}
	PED::ADD_RELATIONSHIP_GROUP("chasecar", &iLocal_455);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_455, joaat("PLAYER"));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iLocal_451[iVar0] != 0)
		{
			MISC::CLEAR_AREA(Local_456 + Local_452[iVar0 /*3*/], 20f, true, false, false, false);
			iLocal_450[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_451[iVar0], Local_456 + Local_452[iVar0 /*3*/], (fLocal_457 + fLocal_453[iVar0]), true, true, false);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_450[iVar0], iLocal_454);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_451[iVar0]);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_450[iVar0], true);
		}
		if (iLocal_448[iVar0] != 0)
		{
			iLocal_447[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_450[iVar0], iLocal_449, iLocal_448[iVar0], -1, true, true);
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_447[iVar0], 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_448[iVar0]);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_447[iVar0], iLocal_455);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_447[iVar0], true);
			if (iLocal_448[iVar0] == joaat("A_M_Y_RoadCyc_01"))
			{
				PED::SET_PED_HELMET(iLocal_447[iVar0], true);
			}
			if (iLocal_449 != 6)
			{
				PED::SET_PED_COMBAT_MOVEMENT(iLocal_447[iVar0], 3);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_447[iVar0], 17, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_447[iVar0], 1, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_447[iVar0], 2, true);
			}
		}
		iVar0++;
	}
}

void func_90()//Position - 0x324F
{
	char[] cVar0[8];
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	float fVar5;
	iLocal_268 = Global_99844;
	func_92(iLocal_268, &Local_456, &fLocal_457, &cVar0);
	__LIB_12__.func_126(iLocal_268, &Local_458, &uVar1, &fLocal_462, &fLocal_463, &uVar2, &uVar3, &uVar4);
	switch (iLocal_268)
	{
		case 281:
			Local_452[0 /*3*/] = { 5.5437f, 30.4559f, 0f };
			fLocal_453[0] = -4.6273f;
			iLocal_454 = 7;
			iLocal_448[0] = joaat("A_M_Y_GenStreet_01");
			iLocal_448[1] = 0;
			iLocal_448[2] = 0;
			iLocal_448[3] = 0;
			iLocal_449 = 4;
			iLocal_451[0] = joaat("penumbra");
			iLocal_451[1] = 0;
			iLocal_451[2] = 0;
			iLocal_451[3] = 0;
			iLocal_266 = 794660;
			iLocal_461[0] = 2;
			iLocal_461[1] = -1;
			iLocal_461[2] = -1;
			iLocal_461[3] = -1;
			StringCopy(&Local_464, "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, 16);
			StringCopy(&Local_467, "PST_CHSCRaR", 16);
			StringCopy(&Local_473, "PST_CHSCRaG", 16);
			StringCopy(&Local_474, "PST_CHSCRaK", 16);
			iLocal_471 = 4;
			iLocal_470 = 1;
			fLocal_482 = 1f;
			break;
		case 282:
			Local_452[0 /*3*/] = { -21.211f, 7.393f, 0f };
			fLocal_453[0] = 0.7266f;
			iLocal_454 = 0;
			iLocal_448[0] = joaat("A_M_Y_GenStreet_01");
			iLocal_448[1] = 0;
			iLocal_448[2] = 0;
			iLocal_448[2] = 0;
			iLocal_449 = 4;
			iLocal_451[0] = joaat("penumbra");
			iLocal_451[1] = 0;
			iLocal_451[2] = 0;
			iLocal_451[2] = 0;
			iLocal_266 = 786468;
			iLocal_461[0] = 2;
			iLocal_461[1] = -1;
			iLocal_461[2] = -1;
			iLocal_461[3] = -1;
			StringCopy(&Local_464, "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, 16);
			StringCopy(&Local_467, "PST_CHSCRbR", 16);
			StringCopy(&Local_473, "PST_CHSCRbG", 16);
			StringCopy(&Local_474, "PST_CHSCRbK", 16);
			iLocal_471 = 3;
			iLocal_470 = 1;
			fLocal_482 = 1f;
			break;
		case 283:
			Local_452[0 /*3*/] = { -7.9514f, -28.1131f, 1.094f };
			Local_452[1 /*3*/] = { -10.876f, -26.4702f, 1.1106f };
			Local_452[2 /*3*/] = { -13.8006f, -24.8273f, 1.1272f };
			fLocal_453[0] = 10.9603f;
			fLocal_453[1] = -0.8648f;
			fLocal_453[2] = -12.6899f;
			iLocal_454 = 0;
			iLocal_448[0] = joaat("A_M_Y_RoadCyc_01");
			iLocal_448[1] = joaat("A_M_Y_RoadCyc_01");
			iLocal_448[2] = joaat("A_M_Y_RoadCyc_01");
			iLocal_448[3] = 0;
			iLocal_449 = 4;
			iLocal_451[0] = joaat("tribike");
			iLocal_451[1] = joaat("tribike");
			iLocal_451[2] = joaat("tribike");
			iLocal_451[3] = 0;
			iLocal_461[0] = 2;
			iLocal_461[1] = 3;
			iLocal_461[2] = 4;
			iLocal_461[3] = -1;
			StringCopy(&Local_464, "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, 16);
			StringCopy(&Local_467, "PST_CHSCRcR", 16);
			StringCopy(&Local_473, "", 16);
			StringCopy(&Local_474, "PST_CHSCRcK", 16);
			iLocal_471 = 3;
			iLocal_470 = 1;
			fLocal_482 = 1f;
			break;
		case 284:
			Local_452[0 /*3*/] = { 12.7813f, 6.7387f, 0f };
			fLocal_453[0] = -2.6961f;
			iLocal_454 = 0;
			iLocal_448[0] = joaat("A_M_Y_GenStreet_01");
			iLocal_448[1] = 0;
			iLocal_448[2] = 0;
			iLocal_448[3] = 0;
			iLocal_449 = 4;
			iLocal_451[0] = joaat("faggio2");
			iLocal_451[1] = 0;
			iLocal_451[2] = 0;
			iLocal_451[3] = 0;
			iLocal_461[0] = 2;
			iLocal_461[1] = -1;
			iLocal_461[2] = -1;
			iLocal_461[3] = -1;
			StringCopy(&Local_464, "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, 16);
			StringCopy(&Local_467, "PST_CHSCRdR", 16);
			StringCopy(&Local_473, "PST_CHSCRdG", 16);
			StringCopy(&Local_474, "PST_CHSCRdK", 16);
			iLocal_471 = 8;
			iLocal_470 = -1;
			fLocal_482 = 0.95f;
			fLocal_265 = 10f;
			break;
		case 275:
			Local_452[0 /*3*/] = { -9.151f, -1.3167f, 0.9699f };
			Local_452[1 /*3*/] = { -10.4908f, 3.3092f, 0f };
			Local_452[2 /*3*/] = { -23.4117f, -0.3117f, 0f };
			Local_452[3 /*3*/] = { -20.2394f, -5.2394f, 0f };
			fLocal_453[0] = -0.3188f;
			fLocal_453[1] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			fLocal_453[2] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			fLocal_453[3] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			iLocal_448[0] = joaat("S_M_Y_Cop_01");
			iLocal_448[1] = joaat("S_M_Y_Cop_01");
			iLocal_448[2] = joaat("S_M_Y_Cop_01");
			iLocal_448[3] = joaat("S_M_Y_Cop_01");
			iLocal_449 = 6;
			iLocal_451[0] = joaat("police3");
			iLocal_451[1] = joaat("police3");
			iLocal_451[2] = joaat("police3");
			iLocal_451[3] = joaat("police3");
			iLocal_461[0] = 2;
			iLocal_461[1] = 3;
			iLocal_461[2] = 4;
			iLocal_461[3] = 5;
			StringCopy(&Local_464, "", 16);
			StringCopy(&Local_467, "PST_POLaR", 16);
			StringCopy(&Local_473, "", 16);
			StringCopy(&Local_474, "", 16);
			iLocal_471 = 3;
			iLocal_470 = 1;
			fLocal_482 = 1f;
			break;
		case 276:
			Local_452[0 /*3*/] = { 1.5168f, -20.0085f, 0.1667f };
			Local_452[1 /*3*/] = { -4.9822f, -20.365f, 0.1911f };
			Local_452[2 /*3*/] = { -7.8196f, -18.8446f, 0f };
			Local_452[3 /*3*/] = { -4.3313f, -28.5564f, 0f };
			fLocal_453[0] = -3.4484f;
			fLocal_453[1] = -12.2569f;
			fLocal_453[2] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			fLocal_453[3] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			iLocal_448[0] = joaat("S_M_Y_Ranger_01");
			iLocal_448[1] = joaat("S_M_Y_Ranger_01");
			iLocal_448[2] = joaat("S_M_Y_Ranger_01");
			iLocal_448[3] = joaat("S_M_Y_Ranger_01");
			iLocal_449 = 6;
			iLocal_451[0] = joaat("sheriff");
			iLocal_451[1] = joaat("sheriff");
			iLocal_451[2] = joaat("pranger");
			iLocal_451[3] = joaat("pranger");
			iLocal_461[0] = 2;
			iLocal_461[1] = 3;
			iLocal_461[2] = 4;
			iLocal_461[3] = 5;
			StringCopy(&Local_464, "", 16);
			StringCopy(&Local_467, "PST_POLbR", 16);
			StringCopy(&Local_473, "", 16);
			StringCopy(&Local_474, "", 16);
			iLocal_471 = 5;
			iLocal_470 = 1;
			fLocal_482 = 1f;
			break;
		case 277:
			Local_452[0 /*3*/] = { -14.3569f, 0.1057f, 0f };
			Local_452[1 /*3*/] = { -14.8079f, 6.2547f, 0f };
			Local_452[2 /*3*/] = { -25.6028f, 6.8598f, 0f };
			Local_452[3 /*3*/] = { -27.9848f, 0.2778f, 0f };
			fLocal_453[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			fLocal_453[1] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			fLocal_453[2] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			fLocal_453[3] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			iLocal_448[0] = joaat("S_M_Y_Ranger_01");
			iLocal_448[1] = joaat("S_M_Y_Ranger_01");
			iLocal_448[2] = joaat("S_M_Y_Ranger_01");
			iLocal_448[3] = joaat("S_M_Y_Ranger_01");
			iLocal_449 = 6;
			iLocal_451[0] = joaat("sheriff");
			iLocal_451[1] = joaat("sheriff");
			iLocal_451[2] = joaat("pranger");
			iLocal_451[3] = joaat("pranger");
			iLocal_461[0] = 2;
			iLocal_461[1] = 3;
			iLocal_461[2] = 4;
			iLocal_461[3] = 5;
			StringCopy(&Local_464, "", 16);
			StringCopy(&Local_467, "PST_POLcR", 16);
			StringCopy(&Local_473, "", 16);
			StringCopy(&Local_474, "", 16);
			iLocal_471 = 5;
			iLocal_470 = 1;
			fLocal_482 = 1f;
			break;
		default:
			fVar5 = ((fLocal_457 + 90f) + MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			Local_452[0 /*3*/] = { Vector(0f, SYSTEM::COS(fVar5), SYSTEM::SIN(fVar5)) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f)) };
			fLocal_453[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			iLocal_454 = 0;
			iLocal_448[0] = joaat("A_M_Y_GenStreet_01");
			iLocal_448[1] = 0;
			iLocal_448[2] = 0;
			iLocal_448[3] = 0;
			iLocal_451[0] = joaat("penumbra");
			iLocal_451[1] = 0;
			iLocal_451[2] = 0;
			iLocal_451[3] = 0;
			iLocal_449 = 4;
			StringCopy(&Local_458, "null", 16);
			iLocal_461[0] = -1;
			iLocal_461[1] = -1;
			iLocal_461[2] = -1;
			iLocal_461[3] = -1;
			StringCopy(&Local_464, "null", 16);
			StringCopy(&Local_467, "null", 16);
			StringCopy(&Local_473, "null", 16);
			StringCopy(&Local_474, "null", 16);
			iLocal_471 = -1;
			iLocal_470 = -1;
			fLocal_482 = -1f;
			break;
	}
}

int func_92(int iParam0, var uParam1, var uParam2, char* sParam3)//Position - 0x3D3E
{
	int iVar0;
	if (func_94(iParam0, uParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0:
				return 0;
				break;
			case 1:
				__LIB_12__.func_128(&iVar0);
				if (iVar0 < 5)
				{
					*uParam1 = { Global_95644[iVar0 /*9*/].f_3 };
					*uParam2 = Global_95644[iVar0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				else
				{
					*uParam1 = { Global_95644[0 /*9*/].f_3 };
					*uParam2 = Global_95644[0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				break;
			case 2:
				*uParam1 = { Global_98552[0 /*109*/].f_4 };
				*uParam2 = Global_98552[0 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			case 3:
				*uParam1 = { Global_98552[1 /*109*/].f_4 };
				*uParam2 = Global_98552[1 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			case 4:
				*uParam1 = { Global_98552[2 /*109*/].f_4 };
				*uParam2 = Global_98552[2 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			case 5:
				*uParam1 = { Global_113386.f_2363.f_539.f_2300[0 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_113386.f_2363.f_539.f_2310[0];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			case 6:
				*uParam1 = { Global_113386.f_2363.f_539.f_2300[1 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_113386.f_2363.f_539.f_2310[1];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			case 7:
				*uParam1 = { Global_113386.f_2363.f_539.f_2300[2 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_113386.f_2363.f_539.f_2310[2];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
		}
		*uParam1 = { Global_98880[iParam0 /*3*/] };
		return 1;
	}
	return 0;
}

int func_94(int iParam0, var uParam1, char* sParam2)//Position - 0x3FE9
{
	struct<3> Var0;
	int iVar1;
	var uVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 1:
			__LIB_12__.func_128(&iVar1);
			if (iVar1 < 5)
			{
				*uParam1 = Global_95644[iVar1 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			else
			{
				*uParam1 = Global_95644[0 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 2:
			*uParam1 = Global_98552[0 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 3:
			*uParam1 = Global_98552[1 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 4:
			*uParam1 = Global_98552[2 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 5:
			*uParam1 = Global_113386.f_2363.f_539.f_2310[0];
			StringCopy(sParam2, __LIB_12__.func_129(Global_113386.f_2363.f_539.f_2314[0]), 32);
			return 1;
			break;
		case 6:
			*uParam1 = Global_113386.f_2363.f_539.f_2310[1];
			StringCopy(sParam2, __LIB_12__.func_129(Global_113386.f_2363.f_539.f_2314[1]), 32);
			return 1;
			break;
		case 7:
			*uParam1 = Global_113386.f_2363.f_539.f_2310[2];
			StringCopy(sParam2, __LIB_12__.func_129(Global_113386.f_2363.f_539.f_2314[2]), 32);
			return 1;
			break;
		case 11:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return 1;
			}
			break;
		case 8:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 9:
			return func_94(8, uParam1, sParam2);
			break;
		case 10:
			return func_94(8, uParam1, sParam2);
			break;
		case 13:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 14:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 15:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 12:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 16:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 17:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 18:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 19:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 20:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 21:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 22:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 74:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 23:
			return func_94(208, uParam1, sParam2);
			break;
		case 24:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 67:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 25:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 26:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 27:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 28:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 29:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 30:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 31:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 32:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 33:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 34:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 35:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 36:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 37:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 58:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 59:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 60:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 38:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 39:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 40:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return 1;
			}
			break;
		case 41:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 42:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 43:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 44:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 45:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 46:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 47:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 49:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 48:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 124:
			Var0 = { -803.734f, 168.148f, 76.3542f };
			*uParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 50:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 51:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 52:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 66:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 53:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 54:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 55:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 56:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 57:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 61:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 62:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 63:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 68:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 69:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 64:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 65:
			if (func_97(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 70:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 71:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 72:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 73:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 234:
			*uParam1 = 122.69f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 316:
			*uParam1 = -60.31f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 315:
			*uParam1 = (41.654f - 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 75:
			*uParam1 = -172.697f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 76:
			*uParam1 = (181.8927f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 77:
			*uParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 78:
			*uParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 79:
			*uParam1 = 20.353f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 80:
			*uParam1 = (-48.53f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 81:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 82:
			*uParam1 = -113.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 83:
			*uParam1 = -173.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 84:
			*uParam1 = 32.7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 85:
			*uParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 86:
			*uParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 87:
			*uParam1 = 166.32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 88:
			*uParam1 = 21f;
			*uParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 89:
			*uParam1 = -84.8108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 90:
			*uParam1 = -90.5046f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 91:
			*uParam1 = 105.0795f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 92:
			*uParam1 = -54.347f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 93:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 94:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 95:
			*uParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 96:
			*uParam1 = 34.621f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 97:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 98:
			*uParam1 = (-150.6148f + 0.0095f);
			*uParam1 = (*uParam1 + 0.0004f);
			*uParam1 = (*uParam1 + 0.0015f);
			*uParam1 = (*uParam1 + 0.0002f);
			*uParam1 = (*uParam1 + -0.0009f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 99:
			*uParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 100:
			*uParam1 = 84.6073f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 101:
			*uParam1 = 249.0753f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 102:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 103:
			*uParam1 = 143.4931f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 104:
			*uParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 105:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 106:
			*uParam1 = 63.4995f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 107:
			*uParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 108:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 109:
			*uParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 110:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 111:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 112:
			*uParam1 = -162.311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 113:
			*uParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 135:
			*uParam1 = -59.25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 136:
			*uParam1 = 82.254f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 137:
			*uParam1 = -152.965f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 138:
			*uParam1 = -10.099f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 139:
			*uParam1 = 158.5974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 140:
			*uParam1 = 99.18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 141:
			*uParam1 = 218.4774f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 142:
			*uParam1 = 125.6193f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 143:
			*uParam1 = 142.373f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 144:
			*uParam1 = -34.878f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 145:
			*uParam1 = -172.419f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 146:
			*uParam1 = -107.439f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 147:
			*uParam1 = 157.311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 148:
			*uParam1 = -68.812f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 149:
			*uParam1 = 4.693f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 150:
			*uParam1 = 78.65f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 114:
			*uParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 115:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 116:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 117:
			*uParam1 = -74.7818f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 118:
			*uParam1 = -48.36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 119:
			*uParam1 = 144.178f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 120:
			*uParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 121:
			*uParam1 = 101.5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 122:
			*uParam1 = 99.72f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 123:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 125:
			*uParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 126:
			*uParam1 = -158.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 127:
			*uParam1 = -76.3681f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 128:
			*uParam1 = (30f + 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 129:
			*uParam1 = -80.6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 130:
			*uParam1 = -9.1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 131:
			*uParam1 = -86.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 132:
			*uParam1 = -161.0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 133:
			*uParam1 = (226.5579f - 270f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 134:
			*uParam1 = -33.128f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 151:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 152:
			*uParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 153:
			*uParam1 = -176.25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 154:
			*uParam1 = -147.192f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 155:
			*uParam1 = 59.082f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 156:
			*uParam1 = 26.087f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 157:
			*uParam1 = 37.27f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 158:
			*uParam1 = -13.8153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 159:
			*uParam1 = -62.5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 160:
			*uParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 161:
			*uParam1 = 86.3776f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 162:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 163:
			*uParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 164:
			*uParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 165:
			*uParam1 = -144.622f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 166:
			*uParam1 = -61.2262f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 167:
			*uParam1 = -22.32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 168:
			if (func_95(0, 25, &uVar2, &fVar3))
			{
				*uParam1 = (fVar3 + 222.8314f);
				StringCopy(sParam2, "v_michael", 32);
				return 1;
			}
			break;
		case 169:
			*uParam1 = 112.841f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 170:
			*uParam1 = (-103.8158f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 171:
			*uParam1 = -28.0926f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 173:
			*uParam1 = -0.0301f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 172:
			*uParam1 = -30.185f;
			*uParam1 = (*uParam1 + 0.003f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 174:
			*uParam1 = 14.98f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 175:
			*uParam1 = -179.653f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		case 176:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 177:
			*uParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 178:
			*uParam1 = -95.4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 179:
			*uParam1 = (-16.0627f + 180f);
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		case 180:
			*uParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 181:
			*uParam1 = -86.613f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		case 182:
			*uParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 183:
			*uParam1 = 111.688f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 184:
			*uParam1 = 143.7974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 185:
			*uParam1 = 143.792f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 186:
			*uParam1 = 4.6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 187:
			*uParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 188:
			*uParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 189:
			*uParam1 = -172.2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 190:
			*uParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 191:
			*uParam1 = -12.5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 196:
			*uParam1 = -1.5f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		case 197:
			*uParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 192:
			*uParam1 = 107.981f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 193:
			*uParam1 = 172.9187f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 194:
			*uParam1 = -67.608f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 195:
			*uParam1 = 74.1158f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 198:
			*uParam1 = 1.0411f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 199:
			*uParam1 = -152.203f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 200:
			*uParam1 = (310.879f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 201:
			*uParam1 = 130.879f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 202:
			*uParam1 = 35.604f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 203:
			*uParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 204:
			*uParam1 = -119.3944f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 205:
			*uParam1 = 121.9322f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 206:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 207:
			*uParam1 = -95.588f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 208:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 209:
			*uParam1 = 230.78f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 210:
			*uParam1 = 165.7751f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 211:
			*uParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 212:
			*uParam1 = 1.2709f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 213:
			*uParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 214:
			*uParam1 = -117.03f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 215:
			*uParam1 = -49.0324f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 216:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 217:
			*uParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 221:
			*uParam1 = 84.96f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 222:
			*uParam1 = -59.3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		case 223:
			*uParam1 = 43.82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		case 224:
			return func_94(222, uParam1, sParam2);
			break;
		case 226:
			*uParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 227:
			*uParam1 = -14.749f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 228:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 229:
			*uParam1 = 96.0116f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 230:
			*uParam1 = -43.6661f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 218:
			*uParam1 = -70.4124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 219:
			*uParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 220:
			*uParam1 = -117.356f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 225:
			*uParam1 = -83.8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 231:
			*uParam1 = 350.3382f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 232:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 233:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 235:
			*uParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		case 236:
			*uParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		case 237:
			*uParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 238:
			*uParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 239:
			*uParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 240:
			*uParam1 = -4.124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 241:
			*uParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 242:
			*uParam1 = 13.7207f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 245:
			*uParam1 = 27.746f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 243:
			*uParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 244:
			*uParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 246:
			*uParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 247:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 248:
			*uParam1 = 10.77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 249:
			*uParam1 = (138f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 250:
			*uParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 251:
			*uParam1 = -42.8529f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 252:
			*uParam1 = 2.6497f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 253:
			*uParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 254:
			*uParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 255:
			*uParam1 = 30.24f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 264:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 265:
			*uParam1 = -144.274f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 266:
			*uParam1 = 68.8227f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 267:
			*uParam1 = 56.2037f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 268:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 269:
			*uParam1 = -106.6605f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 270:
			*uParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 271:
			*uParam1 = 26.3597f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 272:
			*uParam1 = -83.3175f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 273:
			*uParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 274:
			*uParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 275:
			*uParam1 = (277.613f - 360f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 276:
			*uParam1 = -4.7459f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 277:
			*uParam1 = -98.56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 278:
			*uParam1 = -33.77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 279:
			*uParam1 = 155.68f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 280:
			*uParam1 = -49.56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 281:
			*uParam1 = -5.8739f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 282:
			*uParam1 = 70.1627f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 283:
			*uParam1 = 158.979f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 284:
			*uParam1 = -67.1851f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 285:
			*uParam1 = 47.054f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 256:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 257:
			*uParam1 = 171.253f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 258:
			*uParam1 = 10.247f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 259:
			*uParam1 = -32.488f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 260:
			*uParam1 = -29.093f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 261:
			*uParam1 = 229.6085f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 286:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 287:
			*uParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 288:
			*uParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 262:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 263:
			*uParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 289:
			*uParam1 = -11.5018f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 290:
			*uParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		case 291:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 292:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 293:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 294:
			return func_94(293, uParam1, sParam2);
			break;
		case 295:
			return func_94(292, uParam1, sParam2);
			break;
		case 299:
			*uParam1 = 34.661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 300:
			return func_94(303, uParam1, sParam2);
			break;
		case 301:
			return func_94(303, uParam1, sParam2);
			break;
		case 302:
			return func_94(303, uParam1, sParam2);
			break;
		case 303:
			*uParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 296:
			*uParam1 = 116.742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 297:
			*uParam1 = 100.46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 298:
			*uParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 304:
			*uParam1 = -152.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 305:
			*uParam1 = 122.5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return 1;
			break;
		case 306:
			Var4 = { -7.4998f, 7.4995f, -0.5258f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var4.f_0, -Var4.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 307:
			Var5 = { 10.6345f, 0.7246f, 1.2508f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var5.f_0, -Var5.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 308:
			Var6 = { -3.4271f, -13.6787f, -1.4107f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var6.f_0, -Var6.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 309:
			Var7 = { -19.6582f, 7.896f, 0.1334f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var7.f_0, -Var7.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 310:
			*uParam1 = -87.7215f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 311:
			*uParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 312:
			*uParam1 = ((103.2841f + 88.7571f) / 2f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 313:
			*uParam1 = (-177f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 314:
			*uParam1 = 327.7746f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
	}
	*uParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return 0;
}

int func_95(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x6500
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 13.904f, 1.193f, 0.7f };
					*uParam3 = -144f;
					return 1;
					break;
				case 1:
					if (func_95(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1.1731f, 0.809f) };
						*uParam3 = (*uParam3 + (456.7661f - 360f));
						return 1;
					}
					break;
				case 2:
					*uParam2 = { Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((16f - 222.8314f) + 360f);
					return 1;
					break;
			}
			return 0;
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 10.9793f, -5.9f, 4.6f };
					*uParam3 = 163.0716f;
					return 1;
					break;
				case 1:
					if (func_95(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0.25f, -0.6f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
				case 2:
					if (func_95(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0.5f, -1.2f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { Vector(71.835f, 180.548f, -796.991f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = (((16f + 90f) - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { 6.8878f, -5.5247f, 1.5228f };
					*uParam3 = 160f;
					return 1;
					break;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.1937f, -9.0309f, 4.5877f };
					*uParam3 = 255f;
					return 1;
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.4577f, -9.6399f, 4.5876f };
					*uParam3 = 252f;
					return 1;
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.799f, -9.41f, 4.5877f };
					*uParam3 = 273f;
					return 1;
					break;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_95(0, 5, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 12.552f, 4.373f, (4.6f + 1f) };
					*uParam3 = 318f;
					return 1;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { -0.4395f, -11.0022f, 0.0747f };
					*uParam3 = 306f;
					return 1;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 5.5001f, -12.4406f, 4.6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.5f, -9.1f, 4.6f };
					*uParam3 = 330f;
					return 1;
					break;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 0.849f, 1.575f, 0f };
					*uParam3 = 272.857f;
					return 1;
					break;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 8.183f, -3.0467f, 5.5876f };
					*uParam3 = 158f;
					return 1;
					break;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 9.383f, -3.3887f, 5.73f };
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.488f, -9.098f, 5.4864f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 9.04f, 5.71f, 1.44f };
					*uParam3 = 159.3182f;
					return 1;
					break;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.25f, -9.53f, 4.588f };
					*uParam3 = 333f;
					return 1;
					break;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(0f, -11.0022f, -0.4395f) + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f)) };
					*uParam3 = (306f + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 10f));
					return 1;
					break;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(60.2063f, 141.5129f, -863.5425f) - Vector(71.1531f, 179.5117f, -812.0607f) - Vector(1f, 0f, 0f) };
					*uParam2 = { *uParam2 * Vector(0.95f, 0.95f, 0.95f) };
					*uParam3 = MISC::GET_HEADING_FROM_VECTOR_2D(*uParam2, uParam2->f_1);
					return 1;
					break;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((26.087f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((13f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(72.8447f, 172.4196f, -803.1823f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-28.7112f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 27.9648f, 8.3766f, 0.7f };
					*uParam3 = 319f;
					return 1;
					break;
			}
			break;
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f) };
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { -0.3142f, -10.9926f, 0.0747f };
					*uParam3 = 304.1026f;
					return 1;
					break;
			}
			break;
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.3f, -6.5f, 4.6f };
					*uParam3 = 180f;
					return 1;
					break;
			}
			break;
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_95(1, 32, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		case 38:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.505f, -10.9717f, 4.6019f };
					*uParam3 = 228f;
					return 1;
					break;
			}
			break;
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 12.7165f, 4.7109f, (4.6f + 1f) };
					*uParam3 = 310.6696f;
					return 1;
					break;
			}
			break;
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.0529f, -8.9175f, 1.6907f };
					*uParam3 = 102.156f;
					return 1;
					break;
			}
			break;
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.4799f, -7.5315f, 0.682f };
					*uParam3 = 264f;
					return 1;
					break;
			}
			break;
		case 37:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.352f, -3.356f, 5.7338f };
					*uParam3 = 338f;
					return 1;
					break;
			}
			break;
		case 39:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.3003f, -10.3127f, 4.5874f };
					*uParam3 = 262.789f;
					return 1;
					break;
			}
			break;
		case 40:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.76f, -5.95f, 4.59f };
					*uParam3 = 177.6766f;
					return 1;
					break;
			}
			break;
		case 36:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.6691f, -7.6405f, 0.6817f };
					*uParam3 = 159.156f;
					return 1;
					break;
			}
			break;
		case 28:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 1.228f, 4.044f, 0.7665f };
					*uParam3 = 165f;
					return 1;
					break;
			}
			break;
		case 42:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.2365f, -7.6073f, 6.2761f };
					*uParam3 = 157.0716f;
					return 1;
					break;
			}
			break;
		case 43:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.161f, -7.562f, 2.17f };
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.7668f, -7.8757f, 5.5559f };
					*uParam3 = 144.6939f;
					return 1;
					break;
			}
			break;
		case 45:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.6257f, -9.4927f, 5.5876f };
					*uParam3 = 257.4583f;
					return 1;
					break;
			}
			break;
		case 46:
			return func_95(iParam0, 26, uParam2, uParam3);
			break;
		case 47:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 8.4451f, 3.1568f, 1.47f };
					*uParam3 = 159f;
					return 1;
					break;
			}
			break;
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 9.0477f, -7.9397f, 0.6817f };
					*uParam3 = 88.5686f;
					return 1;
					break;
			}
			break;
		case 49:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
					return 0;
					break;
			}
			break;
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 21.7f, 9f, 1.7029f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		case 51:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 1.3278f, 1.534f, 0f };
					*uParam3 = 159.72f;
					return 1;
					break;
			}
			break;
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -3.0265f, 1.7627f, 0.1273f };
					*uParam3 = 338.5f;
					return 1;
					break;
			}
			break;
		case 53:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 15.2374f, 8.723f, 1.4495f };
					*uParam3 = 205.677f;
					return 1;
					break;
			}
			break;
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 28.7f, 8.8241f, 0.6f };
					*uParam3 = 39f;
					return 1;
					break;
			}
			break;
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(1.1936f, -9.0107f, 9.0567f) + Vector((0.03f - 0.02f), 0f, 0f) };
					*uParam3 = 94.2086f;
					return 1;
					break;
			}
			break;
		case 64:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(5.2891f, 2.0403f, -2.8213f) + Vector((0.03f - 0.05f), 0f, 0f) };
					*uParam3 = 336f;
					return 1;
					break;
			}
			break;
		case 56:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.84f };
					*uParam3 = 311.4f;
					return 1;
					break;
			}
			break;
		case 57:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.8418f };
					*uParam3 = 306.6f;
					return 1;
					break;
			}
			break;
		case 58:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 5.8092f, 5.7965f, 3.85f };
					*uParam3 = 337.4f;
					return 1;
					break;
			}
			break;
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 13.3221f, 0.0684f, 0.6817f };
					*uParam3 = 277.317f;
					return 1;
					break;
			}
			break;
		case 60:
			if (func_95(iParam0, 59, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
				*uParam3 = (*uParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
				return 1;
			}
			break;
		case 61:
		case 62:
		case 63:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -2.235f, 1.725f, 4.5877f };
					*uParam3 = 172.714f;
					return 1;
					break;
			}
			break;
		case 65:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-158f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 66:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-164f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 73:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 7.394f, 5.368f, 1.451f };
					*uParam3 = 235.0656f;
					return 1;
					break;
			}
			break;
		case 74:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 1.0704f, -1.4624f, 0.999f };
					*uParam3 = 157.44f;
					return 1;
					break;
			}
			break;
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 14.8186f, 6.8253f, 0.5f };
					*uParam3 = 87.3368f;
					return 1;
					break;
			}
			break;
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 13.6486f, 6.2253f, 0.45f };
					*uParam3 = 262.32f;
					return 1;
					break;
			}
			break;
		case 77:
			if (func_95(iParam0, 47, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*uParam3 = (*uParam3 + 0f);
				return 1;
			}
			break;
		case 79:
		case 86:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 16.319f, -1.375f, 0.6817f };
					*uParam3 = 334.126f;
					return 1;
					break;
			}
			break;
		case 80:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { -0.39f, 3.27f, 0f };
					*uParam3 = 154.126f;
					return 1;
					break;
			}
			break;
		case 81:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.0213f, 6.9622f, 1.39f };
					*uParam3 = 142.889f;
					return 1;
					break;
			}
			break;
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.128f, 6.842f, 0.4524f };
					*uParam3 = 54f;
					return 1;
					break;
			}
			break;
		case 87:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9019f, -23.8349f, -2.1f };
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		case 88:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9937f, -24.9005f, -2.18f };
					*uParam3 = 314.2132f;
					return 1;
					break;
			}
			break;
		case 89:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 31.7401f, -1.0943f, 0.6822f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		case 90:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -27.1728f, -3.75f, -1.626f };
					*uParam3 = (147f + 90f);
					return 1;
					break;
			}
			break;
		case 91:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 14.7722f, -10.9336f, -0.537f };
					*uParam3 = 110.8505f;
					return 1;
					break;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -17.2536f, 2.451f, -0.6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		case 93:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 23.9716f, -20.3533f, -3.18f };
					*uParam3 = 324f;
					return 1;
					break;
			}
			break;
		case 94:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.1416f, -2.0799f, -0.0145f };
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		case 95:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.2746f, -4.1995f, -0.0144f };
					*uParam3 = 69f;
					return 1;
					break;
			}
			break;
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 2.983f, -4.094f, 0.4629f };
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		case 97:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 5.5235f, 2.9133f, 0.7288f };
					*uParam3 = 71f;
					return 1;
					break;
			}
			break;
		case 99:
			switch (iParam0)
			{
				case 6:
					*uParam2 = { Vector(30.7131f, -1454.6757f, -42.2059f) - Vector(30.116f, -1435.9974f, -14.3064f) };
					*uParam3 = (84.7009f - 188.5817f);
					return 1;
					break;
				case 7:
					*uParam2 = { Vector(30.6803f, -1455.8477f, -40.7478f) - Vector(30.116f, -1435.9974f, -14.3064f) };
					*uParam3 = (90.6417f - 188.5817f);
					return 1;
					break;
			}
			break;
		case 100:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 2.0126f, 0.3422f, -0.0086f };
					*uParam3 = 354f;
					return 1;
					break;
			}
			break;
		case 101:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.2931f, 1.4476f, 1.0127f };
					*uParam3 = 61.7525f;
					return 1;
					break;
			}
			break;
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 0.0158f, 1.4182f, 0.9913f };
					*uParam3 = 119.008f;
					return 1;
					break;
			}
			break;
		case 104:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -3.467f, 0.074f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		case 105:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.1014f, -5.4089f, -0.013f };
					*uParam3 = 123.753f;
					return 1;
					break;
			}
			break;
		case 106:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.802f, -6.3295f, -0.01f };
					*uParam3 = 42.757f;
					return 1;
					break;
			}
			break;
		case 107:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -2.156f, -4.9564f, 1.4886f };
					*uParam3 = 136.309f;
					return 1;
					break;
			}
			break;
		case 108:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 7.2656f, 3.022f, -0.9061f };
					*uParam3 = 92.8891f;
					return 1;
					break;
			}
			break;
		case 109:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 0.5066f, 1.6992f, 0.0168f };
					*uParam3 = 115.77f;
					return 1;
					break;
			}
			break;
		case 110:
		case 111:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -0.2121f, -6.2791f, -0.0089f };
					*uParam3 = 114.3391f;
					return 1;
					break;
			}
			break;
		case 116:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 8.2458f, -0.7136f, -0.2503f };
					*uParam3 = 252.2687f;
					return 1;
					break;
			}
			break;
		case 117:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 2.334f, 1.6889f, 0.586f };
					*uParam3 = 109f;
					return 1;
					break;
			}
			break;
		case 112:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -0.6331f, 1.2093f, -0.0086f };
					*uParam3 = 137.1861f;
					return 1;
					break;
			}
			break;
		case 113:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -3.887f, -0.166f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		case 114:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { 3.5179f, 9.1355f, -1f };
					*uParam3 = 141.79f;
					return 1;
					break;
			}
			break;
		case 115:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f) };
					*uParam3 = 121.6591f;
					return 1;
					break;
			}
			break;
		case 118:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.2823f, 2.2595f, -1.0742f };
					*uParam3 = (170.2796f - 180f);
					return 1;
					break;
			}
			break;
		case 119:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.077f, -5.1446f, 0.9904f };
					*uParam3 = 107.1399f;
					return 1;
					break;
			}
			break;
		case 120:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -12.903f, -6.623f, -0.0406f };
					*uParam3 = 63.48f;
					return 1;
					break;
			}
			break;
		case 121:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.5514f, 5.393f, -0.0998f };
					*uParam3 = 327.483f;
					return 1;
					break;
			}
			break;
		case 122:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 0.9794f, -0.3043f, 0f };
					*uParam3 = 179.7612f;
					return 1;
					break;
			}
			break;
		case 123:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 11.9759f, 1f, -1.0728f };
					*uParam3 = 238.9422f;
					return 1;
					break;
			}
			break;
		case 124:
			switch (iParam0)
			{
				case 11:
				case 8:
					*uParam2 = { -0.576f, 1.671f, 0.601f };
					*uParam3 = 296f;
					return 1;
					break;
			}
			break;
		case 125:
			switch (iParam0)
			{
				case 12:
					*uParam2 = { -0.6532f, 0.9556f, -0.0087f };
					*uParam3 = 121.0556f;
					return 1;
					break;
			}
			break;
		case 126:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -0.18f, -4.173f, 0.9981f };
					*uParam3 = 216.61f;
					return 1;
					break;
			}
			break;
		case 127:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.5937f, 0.3521f, 1f };
					*uParam3 = 119.4f;
					return 1;
					break;
			}
			break;
		case 128:
			switch (iParam0)
			{
				case 13:
					if (Global_113386.f_18533[2] == 299)
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (34.661f - 90.6729f);
						return 1;
					}
					else if (((Global_113386.f_18533[2] == 300 || Global_113386.f_18533[2] == 301) || Global_113386.f_18533[2] == 302) || Global_113386.f_18533[2] == 303)
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (32f - 90.6729f);
						return 1;
					}
					if (__LIB_0__.func_502())
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (34.661f - 90.6729f);
						return 1;
					}
					else
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (32f - 90.6729f);
						return 1;
					}
					break;
			}
			break;
		case 129:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector(10.6327f, -1519.561f, -1156.422f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
					*uParam3 = (102f - 90.6729f);
					return 1;
					break;
			}
			break;
		case 130:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -2.8352f, 0.0552f, 0f };
					*uParam3 = 334.44f;
					return 1;
					break;
			}
			break;
		case 131:
			switch (iParam0)
			{
				case 13:
					if (func_95(iParam0, 130, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
						*uParam3 = (*uParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
						return 1;
					}
					break;
			}
			break;
		case 132:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -7.213f, -1.4536f, 0.9981f };
					*uParam3 = 42.6f;
					return 1;
					break;
			}
			break;
		case 133:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector((9.6327f + 1f), -1518.7363f, -1148.4664f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
					*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					return 1;
					break;
			}
			break;
		case 134:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 5.24f, 6.217f, 0.998f };
					*uParam3 = 315.72f;
					return 1;
					break;
			}
			break;
		case 135:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.6447f, 0.7635f, 1.0507f };
					*uParam3 = 296.683f;
					return 1;
					break;
			}
			break;
		case 136:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 3.968f, -1.04f, 0f };
					*uParam3 = 214.92f;
					return 1;
					break;
				case 14:
					*uParam2 = { 4.617f, -1.1314f, 0f };
					*uParam3 = 39.4085f;
					return 1;
					break;
			}
			break;
		case 137:
		case 138:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		case 140:
		case 141:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		default:
			*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
			return 0;
			break;
	}
	*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
	*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	return 0;
}

int func_97(int iParam0, var uParam1, var uParam2)//Position - 0x846D
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*uParam2 = 111f;
			return 1;
			break;
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*uParam2 = 194.1887f;
			return 1;
			break;
		case 9:
			return func_97(8, uParam1, uParam2);
			break;
		case 10:
			return func_97(8, uParam1, uParam2);
			break;
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*uParam2 = 201.6328f;
			return 1;
			break;
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*uParam2 = 350.0509f;
			return 1;
			break;
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*uParam2 = 0.7896f;
			return 1;
			break;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*uParam2 = 42f;
			return 1;
			break;
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*uParam2 = -129f;
			return 1;
			break;
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*uParam2 = 267.1409f;
			return 1;
			break;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*uParam2 = 340.0526f;
			return 1;
			break;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*uParam2 = 22.9566f;
			return 1;
			break;
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*uParam2 = 152.8118f;
			return 1;
			break;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*uParam2 = (250.4535f - 360f);
			return 1;
			break;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*uParam2 = 119.603f;
			return 1;
			break;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*uParam2 = 168f;
			return 1;
			break;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*uParam2 = 51.7279f;
			return 1;
			break;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*uParam2 = 151.2504f;
			return 1;
			break;
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*uParam2 = 156.8827f;
			return 1;
			break;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*uParam2 = 7.2736f;
			return 1;
			break;
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*uParam2 = 97.2736f;
			return 1;
			break;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*uParam2 = 4f;
			return 1;
			break;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*uParam2 = 162.693f;
			return 1;
			break;
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*uParam2 = 128.9946f;
			return 1;
			break;
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*uParam2 = 32.2721f;
			return 1;
			break;
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*uParam2 = 192.8091f;
			return 1;
			break;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return 1;
			break;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return 1;
			break;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*uParam2 = -3.7534f;
			return 1;
			break;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.3408f, 798.4536f) + Vector(1f, 0f, 0f) };
			*uParam2 = 90f;
			return 1;
			break;
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*uParam2 = 355.326f;
			return 1;
			break;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*uParam2 = 334.1068f;
			return 1;
			break;
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*uParam2 = 46.8853f;
			return 1;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*uParam2 = 165.9421f;
			return 1;
			break;
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*uParam2 = 221.228f;
			return 1;
			break;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*uParam2 = (42f + 180f);
			return 1;
			break;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*uParam2 = 98.9764f;
			return 1;
			break;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*uParam2 = 220.9554f;
			return 1;
			break;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*uParam2 = 83.9922f;
			return 1;
			break;
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*uParam2 = -64.1366f;
			return 1;
			break;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*uParam2 = 127.7547f;
			return 1;
			break;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*uParam2 = -63f;
			return 1;
			break;
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*uParam2 = 90.0339f;
			return 1;
			break;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*uParam2 = 84.6231f;
			return 1;
			break;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*uParam2 = 99.6049f;
			return 1;
			break;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*uParam2 = 120f;
			return 1;
			break;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*uParam2 = 211.8223f;
			return 1;
			break;
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*uParam2 = 136.0867f;
			return 1;
			break;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*uParam2 = 27.0648f;
			return 1;
			break;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*uParam2 = 27.0648f;
			return 1;
			break;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		default:
			break;
	}
	return 0;
}

void func_99()//Position - 0x8E6E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_447[iVar0]));
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_450[iVar0]));
		if (iLocal_448[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_448[iVar0]);
		}
		if (iLocal_451[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_451[iVar0]);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_458) && iLocal_461[iVar0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_461[iVar0], &Local_458);
		}
		iVar0++;
	}
	__LIB_9__.func_981(&uLocal_434, 0, 0);
	MISC::SET_GAME_PAUSED(false);
	SCRIPT::TERMINATE_THIS_THREAD();
}

