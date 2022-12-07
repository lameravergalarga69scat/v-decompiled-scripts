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
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	struct<3> Local_51[16];
	float fLocal_52[16] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_54 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	float fLocal_57 = 0f;
	struct<3> Local_58 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	float fLocal_60 = 0f;
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	float fLocal_63 = 0f;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	float fLocal_66 = 0f;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	float fLocal_69 = 0f;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	float fLocal_72 = 0f;
	struct<3> Local_73 = { 0, 0, 0 } ;
	struct<3> Local_74 = { 0, 0, 0 } ;
	float fLocal_75 = 0f;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	bool bLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97[2] = { 0, 0 };
	int iLocal_98[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102[4] = { 0, 0, 0, 0 };
	int iLocal_103[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_104 = 0;
	var uLocal_105[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int* iLocal_109 = NULL;
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
	var uLocal_132 = 8;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 4;
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
	var uLocal_151 = 4;
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
	var uLocal_166 = 4;
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
	var uLocal_181 = 4;
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
	var uLocal_196 = 4;
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
	var uLocal_211 = 4;
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
	var uLocal_226 = 4;
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
	var uLocal_241 = 4;
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
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	char[] cLocal_261[8] = 0;
	char* sLocal_262 = NULL;
	char* sLocal_263 = NULL;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	char* sLocal_269 = NULL;
	int iLocal_270 = 0;
	var uLocal_271 = 16;
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
	int iLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 5;
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
	var uLocal_454 = 5;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
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
	fLocal_46 = -1f;
	Local_53 = { -1109.213f, 4914.744f, 216.101f };
	Local_54 = { -1034.6f, 4918.6f, 205.9f };
	Local_55 = { -1066.9633f, 4873.13f, 207.32806f };
	Local_56 = { -1112.9463f, 4986.957f, 241.13301f };
	fLocal_57 = 72.3125f;
	Local_58 = { -1138.3865f, 4872.0396f, 207.54884f };
	Local_59 = { -1091.9586f, 4983.27f, 241.16985f };
	fLocal_60 = 57.8125f;
	Local_61 = { -1171.648f, 4888.6577f, 211.07564f };
	Local_62 = { -1137.9072f, 4926.5723f, 240.99902f };
	fLocal_63 = 17.9375f;
	Local_64 = { -1177.9814f, 4903.231f, 212.47699f };
	Local_65 = { -1153.3978f, 4902.6313f, 241.15503f };
	fLocal_66 = 17.9375f;
	Local_67 = { -1175.6934f, 4904.839f, 207.52066f };
	Local_68 = { -1142.0797f, 4985.32f, 241.28865f };
	fLocal_69 = 36.375f;
	Local_70 = { -1106.2119f, 4860.086f, 206.12071f };
	Local_71 = { -1105.016f, 4873.8545f, 241.1453f };
	fLocal_72 = 11.5625f;
	Local_73 = { -1044.2683f, 4916.587f, 209.83649f };
	Local_74 = { -1063.6053f, 4972.88f, 241.12991f };
	fLocal_75 = 12.875f;
	iLocal_96 = 4;
	cLocal_261 = "REPLAY_TMG" /* GXT: ~r~FAILED~s~ */;
	sLocal_262 = "CMN_TDIED" /* GXT: ~s~Trevor died. */;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(26))
	{
		func_194();
	}
	if (MISC::GET_IS_PLAYER_IN_ANIMAL_FORM())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_77)
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			switch (iLocal_50)
			{
				case 0:
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (Global_113386.f_24995.f_5 >= iLocal_96 && !__LIB_30__::func_880())
						{
							iLocal_50 = 2;
						}
						func_190();
						func_187();
					}
					break;
				case 1:
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (SYSTEM::TIMERA() > 2000)
						{
							if (iLocal_91 == 1)
							{
								func_186();
							}
							else if (iLocal_91 == 2)
							{
								func_159();
							}
						}
						if (SYSTEM::TIMERA() > 1300)
						{
							if (iLocal_93 < 3)
							{
								func_158();
							}
							else
							{
								func_157();
							}
						}
						if (iLocal_78)
						{
							__LIB_35__::func_525(26, 1);
							iLocal_78 = 0;
							iLocal_50 = 0;
						}
					}
					break;
				case 2:
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						func_116();
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[9 /*31*/], 0, false, true);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[10 /*31*/], 0, false, true);
					break;
				case 4:
					if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						iLocal_50 = 3;
						break;
					}
					bLocal_79 = false;
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					iVar0 = 0;
					while (iVar0 < iLocal_98)
					{
						if (PED::IS_PED_INJURED(iLocal_98[iVar0]))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_105[iVar0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_105[iVar0]));
							}
						}
						else
						{
							if (TASK::IS_PED_IN_WRITHE(iLocal_98[iVar0]))
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_105[iVar0]))
								{
									HUD::REMOVE_BLIP(&(uLocal_105[iVar0]));
								}
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_98[iVar0], PLAYER::PLAYER_PED_ID(), 30f, 30f, 30f, false, true, 0))
							{
								if (!__LIB_0__::func_75())
								{
									if (iLocal_95 < MISC::GET_GAME_TIMER())
									{
										iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
										if (iVar1 == 0)
										{
											__LIB_37__::func_799(&uLocal_271, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
										}
										else if (iVar1 == 1)
										{
											__LIB_0__::func_203(&uLocal_271, 1, iLocal_98[iVar0], "ACULTMember1", 0, 1);
											__LIB_37__::func_799(&uLocal_271, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
										}
										else if (iVar1 == 2)
										{
											__LIB_0__::func_203(&uLocal_271, 2, iLocal_98[iVar0], "ACULTMember2", 0, 1);
											__LIB_37__::func_799(&uLocal_271, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
										}
										iLocal_95 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6000));
									}
								}
							}
							bLocal_79 = true;
						}
						iVar0++;
					}
					if (!bLocal_79)
					{
						func_63();
					}
					break;
				case 3:
					if (!iLocal_77)
					{
						iLocal_109 = __LIB_0__::func_729();
						if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_109))
						{
							break;
						}
						__LIB_10__::func_842(&uLocal_114, 0);
						iLocal_77 = 1;
					}
					if (func_32(&uLocal_114, &uLocal_120, &iLocal_109, cLocal_261, sLocal_262, &bLocal_76, 78))
					{
						iLocal_94 = 0;
						PED::REMOVE_RELATIONSHIP_GROUP(iLocal_270);
						TASK::REMOVE_COVER_POINT(iLocal_108);
						iVar0 = 0;
						while (iVar0 < iLocal_98)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[iVar0]))
							{
								PED::DELETE_PED(&(iLocal_98[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < iLocal_103)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_103[iVar0]))
							{
								OBJECT::DELETE_OBJECT(&(iLocal_103[iVar0]));
							}
							iVar0++;
						}
						if (CAM::DOES_CAM_EXIST(iLocal_106))
						{
							CAM::SET_CAM_ACTIVE(iLocal_106, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_101))
						{
							OBJECT::DELETE_OBJECT(&iLocal_101);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_101))
						{
							OBJECT::DELETE_OBJECT(&iLocal_101);
						}
						if (bLocal_76)
						{
							func_11();
							__LIB_8__::func_770(0);
							__LIB_1__::func_37(1);
							iLocal_77 = 0;
							iLocal_50 = 2;
						}
						else
						{
							iLocal_77 = 0;
							func_194();
						}
					}
					break;
			}
		}
		else if (bLocal_81)
		{
		}
		else
		{
			func_194();
		}
	}
}

void func_11()//Position - 0x80B
{
	func_22();
	func_14(0, 1);
	func_12(0, 1);
}

void func_12(int iParam0, int iParam1)//Position - 0x823
{
	if (iParam0 == 1)
	{
		func_14(0, 0);
		GRAPHICS::ANIMPOSTFX_PLAY("DeathFailOut", 0, false);
		MISC::SET_BIT(&iLocal_48, 1);
		func_13(1, 2, 0);
		CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(2);
	}
	else
	{
		if (BitTest(iLocal_48, 1) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_STOP("DeathFailOut");
			func_13(0, 2, 1);
			CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(0);
		}
		MISC::CLEAR_BIT(&iLocal_48, 1);
	}
}

void func_13(int iParam0, int iParam1, int iParam2)//Position - 0x87F
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&iLocal_48, 2);
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iParam1 == 1)
			{
				MISC::SET_TIME_SCALE(0.2f);
			}
			else
			{
				MISC::SET_TIME_SCALE(0.075f);
			}
		}
	}
	else
	{
		if (BitTest(iLocal_48, 2) || iParam2)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				MISC::SET_TIME_SCALE(1f);
			}
		}
		MISC::CLEAR_BIT(&iLocal_48, 2);
	}
}

void func_14(int iParam0, int iParam1)//Position - 0x8DD
{
	char* sVar0;
	switch (__LIB_18__::func_173())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!BitTest(iLocal_48, 0) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_PLAY(sVar0, 0, false);
			MISC::SET_BIT(&iLocal_48, 0);
			func_13(1, 1, 0);
			CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(1);
		}
	}
	else
	{
		if (BitTest(iLocal_48, 0) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_STOP(sVar0);
			func_13(0, 1, 1);
			CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(0);
		}
		MISC::CLEAR_BIT(&iLocal_48, 0);
	}
}

void func_22()//Position - 0xB15
{
	iLocal_48 = 0;
	iLocal_49 = 0;
	__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
	__LIB_8__::func_770(1);
}

int func_32(var uParam0, var uParam1, int* iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6)//Position - 0xDCB
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			AUDIO::START_AUDIO_SCENE("DEATH_SCENE");
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "WastedSounds", true);
			__LIB_18__::func_207(&(uParam0->f_1));
			func_22();
			func_59(uParam1, (0.15f * 0.075f), 0.5f);
			SCRIPT::SET_NO_LOADING_SCREEN(true);
			break;
		case 1:
			if (func_57() || CAM::IS_SCREEN_FADED_OUT())
			{
				*uParam0 = 2;
			}
			if (!__LIB_0__::func_517(uParam0->f_4, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", false, -1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Bed", "WastedSounds", true);
					__LIB_6__::func_896(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!__LIB_0__::func_517(uParam0->f_4, 2))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "TextHit", "WastedSounds", true);
					__LIB_6__::func_896(&(uParam0->f_4), 2);
				}
				__LIB_38__::func_113(iParam2, uParam1, sParam3, sParam4, iParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		case 2:
			if (__LIB_38__::func_113(iParam2, uParam1, sParam3, sParam4, iParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_14(0, 1);
				func_12(0, 1);
				func_22();
				if (*iParam5)
				{
					MISC::IGNORE_NEXT_RESTART(true);
				}
				else if (!uParam0->f_5)
				{
					__LIB_10__::func_841(0);
				}
				SCRIPT::SET_NO_LOADING_SCREEN(false);
				MISC::PAUSE_DEATH_ARREST_RESTART(false);
				*uParam0 = 3;
			}
			break;
		case 3:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				MISC::SET_FADE_IN_AFTER_DEATH_ARREST(true);
				func_14(0, 1);
				func_12(0, 1);
				AUDIO::STOP_AUDIO_SCENE("DEATH_SCENE");
				SCRIPT::SET_NO_LOADING_SCREEN(false);
				return 1;
			}
			break;
		case 4:
			SCRIPT::SET_NO_LOADING_SCREEN(false);
			return 1;
			break;
	}
	return 0;
}

int func_57()//Position - 0x19EE
{
	if (!BitTest(iLocal_48, 0) && !BitTest(iLocal_48, 1))
	{
		SYSTEM::SETTIMERA(0);
		func_14(1, 0);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		HUD::CLEAR_PRINTS();
	}
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PED::SUPPRESS_AMBIENT_PED_AGGRESSIVE_CLEANUP_THIS_FRAME();
	if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
	{
		if (!BitTest(iLocal_48, 1))
		{
			func_12(1, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if (IntToFloat(SYSTEM::TIMERB()) > (1500f * 0.075f) || CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1500);
				}
			}
			else if (iLocal_49 == 0)
			{
				iLocal_49 = MISC::GET_GAME_TIMER() + 1000;
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				func_13(0, 2, 1);
				__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
				__LIB_8__::func_770(1);
				HUD::SET_FRONTEND_ACTIVE(false);
				HUD::SET_PAUSE_MENU_ACTIVE(false);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				func_14(0, 0);
				func_58(0);
			}
			else if (MISC::GET_GAME_TIMER() < iLocal_49)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_58(int iParam0)//Position - 0x1B2C
{
	int iVar0;
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!BitTest(iLocal_48, 3))
			{
				MISC::SET_GAME_PAUSED(true);
				MISC::SET_BIT(&iLocal_48, 3);
			}
		}
		else if (BitTest(iLocal_48, 3))
		{
			MISC::SET_GAME_PAUSED(false);
			MISC::CLEAR_BIT(&iLocal_48, 3);
		}
	}
}

void func_59(var uParam0, float fParam1, float fParam2)//Position - 0x1B6D
{
	if (__LIB_0__::func_516(&(uParam0->f_1)))
	{
		__LIB_1__::func_37(&(uParam0->f_1));
	}
	if (__LIB_0__::func_516(&(uParam0->f_4)))
	{
		__LIB_1__::func_37(&(uParam0->f_4));
	}
	__LIB_1__::func_899(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_63()//Position - 0x1C0F
{
	if (!iLocal_80)
	{
		AUDIO::SET_STATIC_EMITTER_ENABLED("COUNTRYSIDE_ALTRUIST_CULT_01", false);
		Global_113386.f_24995.f_5 = 1000;
		AUDIO::UNLOCK_MISSION_NEWS_STORY(64);
		Global_113386.f_20564.f_472 = 54;
		iLocal_259 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
		__LIB_0__::func_518(1);
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_259))
		{
			SYSTEM::WAIT(0);
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_259, "SHOW_SHARD_MIDSIZED_MESSAGE");
		__LIB_0__::func_478("CULT_PASS" /* GXT: ALTRUIST CLEARED */);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		while (!__LIB_0__::func_109())
		{
			SYSTEM::WAIT(0);
		}
		__LIB_30__::func_883();
		SYSTEM::SETTIMERA(0);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", true);
		iLocal_80 = 1;
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_259, 255, 255, 255, 255, 0);
	if (!iLocal_82)
	{
		if (SYSTEM::TIMERA() > 9500)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_259, "SHARD_ANIM_OUT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_82 = 1;
		}
	}
	if (SYSTEM::TIMERA() > 10000)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_259))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_259);
			__LIB_0__::func_518(0);
		}
		while (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_0__::func_85(PLAYER::PLAYER_ID()), Local_53, true) < 209f && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			SYSTEM::WAIT(0);
		}
		func_64(18);
		func_194();
	}
}

void func_64(int iParam0)//Position - 0x1D43
{
	char cVar0[64];
	if (iParam0 == -1)
	{
		iParam0 = __LIB_35__::func_171();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (__LIB_35__::func_175())
	{
		func_70(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113377 = MISC::GET_GAME_TIMER();
		__LIB_0__::func_50(30000);
		StringCopy(&cVar0, __LIB_30__::func_863(Global_113375, 1), 64);
		if (__LIB_0__::func_534(Global_113375) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113374, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113372, (MISC::GET_GAME_TIMER() - Global_113373), 0);
	}
	else if (BitTest(Global_113382, 0) && Global_113386.f_24995.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113382, 0);
	}
	__LIB_0__::func_56(&Global_32019);
	Global_113376 = 0;
	__LIB_30__::func_862(-1);
}

void func_70(int iParam0)//Position - 0x214C
{
	func_71(iParam0, 0, __LIB_30__::func_864(iParam0));
}

void func_71(int iParam0, int iParam1, int iParam2)//Position - 0x2161
{
	var uVar0;
	struct<16> Var1;
	uVar0 = __LIB_18__::func_240();
	__LIB_38__::func_13(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	__LIB_30__::func_875(iParam0, &uVar0);
	Var1 = { func_72(&uVar0) };
}

struct<16> func_72(var uParam0)//Position - 0x2190
{
	struct<16> Var0;
	int iVar1;
	StringCopy(&Var0, "", 64);
	iVar1 = __LIB_0__::func_196(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = __LIB_0__::func_195(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = __LIB_0__::func_483(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = __LIB_0__::func_482(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = __LIB_0__::func_197(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, __LIB_1__::func_26(*uParam0), 64);
	return Var0;
}

void func_116()//Position - 0x335B
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	switch (iLocal_94)
	{
		case 0:
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("THUNDER", 20f);
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REQUEST_CUTSCENE("ac_ig_3_p3_b", 8);
			}
			STREAMING::REQUEST_MODEL(joaat("A_M_O_ACult_02"));
			STREAMING::REQUEST_MODEL(joaat("A_M_Y_ACult_02"));
			STREAMING::REQUEST_MODEL(joaat("prop_box_wood03a"));
			STREAMING::REQUEST_MODEL(joaat("prop_box_wood04a"));
			STREAMING::REQUEST_MODEL(joaat("prop_box_wood05a"));
			STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
			while ((((((!__LIB_0__::func_90() || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_O_ACult_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_ACult_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_box_wood03a"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_box_wood04a"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_box_wood05a"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_security_case_01")))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_436 = __LIB_18__::func_490(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_ASSAULTRIFLE"), 1, 0, 0, 0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_436))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_436, "Trevors_weapon", 0, 0, 0);
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Rifle_Mag1^1", 3, WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("COMPONENT_ASSAULTRIFLE_CLIP_01")), 0);
			if (__LIB_0__::func_90() && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_98[11], "Cult_Master", 2, joaat("A_M_O_ACult_02"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_98[12], "Rear_Cult", 2, joaat("A_M_O_ACult_02"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_98[13], "Left_Old_Cult", 2, joaat("A_M_O_ACult_02"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_98[14], "Carbine_Cult", 2, joaat("A_M_Y_ACult_02"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_98[15], "Shotgun_Cult", 2, joaat("A_M_Y_ACult_02"), 0);
				CUTSCENE::START_CUTSCENE(0);
			}
			SYSTEM::WAIT(0);
			if (!bLocal_76 && Global_113386.f_24995.f_5 != 1000)
			{
				func_135();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[0]))
			{
				PED::DELETE_PED(&(iLocal_98[0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[1]))
			{
				PED::DELETE_PED(&(iLocal_98[1]));
			}
			if (CAM::DOES_CAM_EXIST(iLocal_106))
			{
				CAM::SET_CAM_ACTIVE(iLocal_106, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_101))
			{
				OBJECT::DELETE_OBJECT(&iLocal_101);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_101))
			{
				OBJECT::DELETE_OBJECT(&iLocal_101);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (HUD::DOES_BLIP_EXIST(iLocal_104))
			{
				HUD::REMOVE_BLIP(&iLocal_104);
			}
			__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			HUD::CLEAR_HELP(true);
			HUD::DISPLAY_HUD(false);
			HUD::DISPLAY_RADAR(false);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
			}
			MISC::CLEAR_AREA(Local_53, 100f, true, false, false, false);
			PED::ADD_SCENARIO_BLOCKING_AREA(Local_53 - Vector(100f, 60f, 80f), Local_53 + Vector(100f, 60f, 80f), false, true, true, true);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			iLocal_108 = TASK::ADD_COVER_POINT(-1173.5094f, 4924.3647f, 222.21f, 277.2293f, 2, 0, 2, true);
			STREAMING::REQUEST_MODEL(joaat("A_M_O_ACult_01"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("A_M_O_ACult_01")))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_94 = 6;
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 6:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CULT_MASTER", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_98[11]))
					{
						iLocal_98[11] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CULT_MASTER", 0));
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("REAR_CULT", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_98[12]))
					{
						iLocal_98[12] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("REAR_CULT", 0));
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LEFT_OLD_CULT", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_98[13]))
					{
						iLocal_98[13] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("LEFT_OLD_CULT", 0));
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CARBINE_CULT", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_98[14]))
					{
						iLocal_98[14] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CARBINE_CULT", 0));
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("SHOTGUN_CULT", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_98[15]))
					{
						iLocal_98[15] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("SHOTGUN_CULT", 0));
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("TREVOR", 0))
				{
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1173.5309f, 4924.357f, 222.2101f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 188.9369f);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), -1173.5094f, 4924.3647f, 222.21f, -1, false, 0f, true, false, iLocal_108, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_weapon", 0))
				{
					WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_436, PLAYER::PLAYER_PED_ID());
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(91.3878f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(4.4337f, 1f);
				__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_HUD(true);
				HUD::DISPLAY_RADAR(true);
				Local_51[0 /*3*/] = { -1044.6324f, 4918.1494f, 211.3315f };
				fLocal_52[0] = 254.8275f;
				Local_51[1 /*3*/] = { -1054.9197f, 4915.155f, 210.8241f };
				fLocal_52[1] = 270.2025f;
				Local_51[2 /*3*/] = { -1051.8595f, 4903.9023f, 209.6199f };
				fLocal_52[2] = 299.8404f;
				Local_51[3 /*3*/] = { -1068.2458f, 4899.5317f, 213.2755f };
				fLocal_52[3] = 298.4257f;
				Local_51[4 /*3*/] = { -1083.3221f, 4899.5317f, 213.2755f };
				fLocal_52[4] = 283.5311f;
				Local_51[5 /*3*/] = { -1084.0582f, 4933.8047f, 228.2246f };
				fLocal_52[5] = 87.5233f;
				Local_51[6 /*3*/] = { -1081.9757f, 4937.3394f, 232.3275f };
				fLocal_52[6] = 109.6546f;
				Local_51[7 /*3*/] = { -1092.075f, 4939.9575f, 217.3385f };
				fLocal_52[7] = 210.2433f;
				Local_51[8 /*3*/] = { -1101.7976f, 4930.33f, 217.3544f };
				fLocal_52[8] = 203.732f;
				Local_51[9 /*3*/] = { -1070.6748f, 4869.3013f, 220.2917f };
				fLocal_52[9] = 39.1109f;
				Local_51[10 /*3*/] = { -1115.7025f, 4878.439f, 225.8085f };
				fLocal_52[10] = 25.8472f;
				PED::ADD_RELATIONSHIP_GROUP("rghCult", &iLocal_270);
				iVar1 = 0;
				while (iVar1 < iLocal_98)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_98[iVar1] = PED::CREATE_PED(26, joaat("A_M_O_ACult_01"), Local_51[iVar1 /*3*/], fLocal_52[iVar1], true, true);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_98[iVar1], 0);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_98[iVar1], joaat("WEAPON_ASSAULTRIFLE"), -1, true, true);
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_98[iVar1], 0);
						PED::SET_PED_COMBAT_ABILITY(iLocal_98[iVar1], 2);
						PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_98[iVar1], 50f, 20);
						PED::SET_PED_ACCURACY(iLocal_98[iVar1], 5);
						PED::SET_PED_HEARING_RANGE(iLocal_98[iVar1], 100f);
						PED::SET_PED_SEEING_RANGE(iLocal_98[iVar1], 100f);
						ENTITY::SET_ENTITY_HEALTH(iLocal_98[iVar1], 150, 0);
						PED::SET_PED_SHOOT_RATE(iLocal_98[iVar1], MISC::GET_RANDOM_INT_IN_RANGE(40, 60));
						TASK::TASK_COMBAT_PED(iLocal_98[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_98[iVar1] = PED::CREATE_PED(26, joaat("A_M_O_ACult_02"), Local_51[iVar1 /*3*/], fLocal_52[iVar1], true, true);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_98[iVar1], 0);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_98[iVar1], joaat("WEAPON_SAWNOFFSHOTGUN"), -1, true, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_98[iVar1], 50, true);
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_98[iVar1], 2);
						PED::SET_PED_COMBAT_ABILITY(iLocal_98[iVar1], 1);
						PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_98[iVar1], 50f, 20);
						PED::SET_PED_ACCURACY(iLocal_98[iVar1], 5);
						PED::SET_PED_HEARING_RANGE(iLocal_98[iVar1], 100f);
						PED::SET_PED_SEEING_RANGE(iLocal_98[iVar1], 100f);
						PED::SET_PED_SHOOT_RATE(iLocal_98[iVar1], MISC::GET_RANDOM_INT_IN_RANGE(40, 60));
						TASK::TASK_COMBAT_PED(iLocal_98[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!PED::IS_PED_INJURED(iLocal_98[iVar1]) && !PED::IS_PED_INJURED(iLocal_98[11])) && !PED::IS_PED_INJURED(iLocal_98[12])) && !PED::IS_PED_INJURED(iLocal_98[13])) && !PED::IS_PED_INJURED(iLocal_98[14])) && !PED::IS_PED_INJURED(iLocal_98[15]))
						{
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_98[11], joaat("WEAPON_PISTOL"), -1, true, true);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_98[12], joaat("WEAPON_ASSAULTRIFLE"), -1, true, true);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_98[13], joaat("WEAPON_ASSAULTRIFLE"), -1, true, true);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_98[14], joaat("WEAPON_CARBINERIFLE"), -1, true, true);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_98[15], joaat("WEAPON_PUMPSHOTGUN"), -1, true, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_98[iVar1], 0, true);
							PED::SET_PED_COMBAT_MOVEMENT(iLocal_98[iVar1], 3);
							PED::SET_PED_COMBAT_ABILITY(iLocal_98[iVar1], 0);
							PED::SET_PED_ACCURACY(iLocal_98[iVar1], 0);
							WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(iLocal_98[iVar1], 1f, 1f);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_107);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1159.3301f, 4924.4116f, 221.6576f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 6000, false);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, false);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_107);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_98[15], iLocal_107);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_107);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_107);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1163.2794f, 4932.933f, 222.541f, PLAYER::PLAYER_PED_ID(), 1f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), 5000, false);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7500, false);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, false);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_107);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_98[14], iLocal_107);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_107);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_107);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2500, false);
							TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), 5000, false);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1156.1754f, 4926.073f, 221.3447f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 6500, false);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, false);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_107);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_98[13], iLocal_107);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_107);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_107);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, false);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1157.9622f, 4922.196f, 221.309f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5500, false);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, false);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_107);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_98[12], iLocal_107);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_107);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_107);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, false);
							TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), 10000, false);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1161.4755f, 4916.061f, 220.5658f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, false);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, false);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_107);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_98[11], iLocal_107);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_107);
							PED::SET_PED_KEEP_TASK(iLocal_98[iVar1], true);
							PED::SET_PED_RESET_FLAG(iLocal_98[iVar1], 156, true);
						}
					}
					else
					{
						iLocal_98[iVar1] = PED::CREATE_PED(26, joaat("A_M_O_ACult_02"), Local_51[iVar1 /*3*/], fLocal_52[iVar1], true, true);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_98[iVar1], 0);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_98[iVar1], joaat("WEAPON_PISTOL"), -1, true, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_98[iVar1], 50, true);
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_98[iVar1], 2);
						PED::SET_PED_COMBAT_ABILITY(iLocal_98[iVar1], 0);
						PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_98[iVar1], 50f, 20);
						PED::SET_PED_COMBAT_RANGE(iLocal_98[iVar1], 1);
						PED::SET_PED_ACCURACY(iLocal_98[iVar1], 5);
						PED::SET_PED_HEARING_RANGE(iLocal_98[iVar1], 100f);
						PED::SET_PED_SEEING_RANGE(iLocal_98[iVar1], 100f);
						PED::SET_PED_SHOOT_RATE(iLocal_98[iVar1], MISC::GET_RANDOM_INT_IN_RANGE(40, 60));
						TASK::TASK_COMBAT_PED(iLocal_98[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_98[iVar1], iLocal_270);
					ENTITY::SET_ENTITY_HEADING(iLocal_98[iVar1], __LIB_0__::func_670(ENTITY::GET_ENTITY_COORDS(iLocal_98[iVar1], true), __LIB_0__::func_85(PLAYER::PLAYER_ID())));
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_98[iVar1], true);
					PED::SET_PED_CONFIG_FLAG(iLocal_98[iVar1], 42, true);
					uLocal_105[iVar1] = __LIB_6__::func_850(iLocal_98[iVar1], 1, 145);
					iVar1++;
				}
				__LIB_0__::func_203(&uLocal_271, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				__LIB_0__::func_203(&uLocal_271, 3, iLocal_98[11], "ACULTMaster", 0, 1);
				__LIB_0__::func_203(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
				MISC::SET_BIT(&iVar0, 1);
				MISC::SET_BIT(&iVar0, 3);
				MISC::SET_BIT(&iVar0, 4);
				if (!bLocal_76)
				{
					iLocal_102[0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_MONEY_CASE"), -1074.165f, 4897.4683f, 213.2754f, -72f, 0f, 42.48f, iVar0, 25000, 2, true, joaat("prop_security_case_01"));
					iLocal_102[1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_MONEY_CASE"), -1094.6711f, 4892.7886f, 215.0707f, -72f, 0f, 42.48f, iVar0, 25000, 2, true, joaat("prop_security_case_01"));
					iLocal_102[2] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_MONEY_CASE"), -1113.9503f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, iVar0, 25000, 2, true, joaat("prop_security_case_01"));
					iLocal_102[3] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_MONEY_CASE"), -1145.2728f, 4907.8936f, 219.9734f, -72f, 0f, 42.48f, iVar0, 25000, 2, true, joaat("prop_security_case_01"));
				}
				iLocal_102[0] = iLocal_102[0];
				iLocal_102[1] = iLocal_102[1];
				iLocal_102[2] = iLocal_102[2];
				iLocal_102[3] = iLocal_102[3];
				iLocal_103[0] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood04a"), -1158.69f, 4915.7095f, 220.26443f, true, true, false);
				iLocal_103[1] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood03a"), -1156.2462f, 4918.5996f, 220.54323f, true, true, false);
				iLocal_103[2] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood04a"), -1145.8025f, 4931.8164f, 219.96826f, true, true, false);
				iLocal_103[3] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood04a"), -1133.369f, 4919.0674f, 218.8385f, true, true, false);
				iLocal_103[4] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood05a"), -1132.0251f, 4921.483f, 218.8244f, true, true, false);
				iLocal_103[5] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood03a"), -1112.6599f, 4929.2676f, 217.17519f, true, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_103[0], 12.242877f, -0.014582f, 27.060556f, 2, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_103[1], 7.733739f, 9.432779f, -2.865618f, 2, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_103[2], 3.735082f, 4.551246f, 86.309166f, 2, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_103[3], 0.240341f, 1.095195f, 36.590313f, 2, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_103[4], 7.6772f, 1.232743f, 93.27483f, 2, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_103[5], 3.367802f, -5.14387f, 97.30567f, 2, true);
				if (__LIB_37__::func_280() < 50)
				{
					PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), 0.5f, true, 0);
				}
				if (func_130() != 18)
				{
					__LIB_35__::func_176(18);
				}
				if (!__LIB_35__::func_175())
				{
					__LIB_40__::func_733(0);
				}
				__LIB_1__::func_37(1);
				bLocal_76 = false;
				iLocal_50 = 4;
			}
			break;
	}
}

int func_130()//Position - 0x4915
{
	return Global_113375;
}

void func_135()//Position - 0x4A7E
{
	Global_32198 = 1;
}

void func_157()//Position - 0x5F3D
{
	if (fLocal_87 > 0f)
	{
		fLocal_87 = (fLocal_87 - (0.6f / (1f / MISC::GET_FRAME_TIME())));
	}
	else
	{
		fLocal_87 = 0f;
	}
	if (fLocal_87 >= 0f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41748[10 /*31*/], fLocal_87, false, true);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[10 /*31*/], 4, false, true);
	}
	if (fLocal_86 < 0f)
	{
		fLocal_86 = (fLocal_86 + (0.6f / (1f / MISC::GET_FRAME_TIME())));
	}
	else
	{
		fLocal_86 = 0f;
	}
	if (fLocal_86 <= 0f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41748[9 /*31*/], fLocal_86, false, true);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[9 /*31*/], 4, false, true);
	}
}

void func_158()//Position - 0x5FC9
{
	if (fLocal_87 < 1f)
	{
		fLocal_87 = (fLocal_87 + (0.6f / (1f / MISC::GET_FRAME_TIME())));
	}
	else
	{
		fLocal_87 = 1f;
	}
	if (fLocal_87 <= 1f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41748[10 /*31*/], fLocal_87, false, true);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[10 /*31*/], 4, false, true);
	}
	if (fLocal_86 > -1f)
	{
		fLocal_86 = (fLocal_86 - (0.6f / (1f / MISC::GET_FRAME_TIME())));
	}
	else
	{
		fLocal_86 = -1f;
	}
	if (fLocal_86 >= -1f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41748[9 /*31*/], fLocal_86, false, true);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[9 /*31*/], 4, false, true);
	}
}

void func_159()//Position - 0x6055
{
	switch (iLocal_93)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("A_M_O_ACult_02"));
			STREAMING::REQUEST_MODEL(joaat("prop_anim_cash_pile_02"));
			STREAMING::REQUEST_ANIM_DICT("random@altruist_cult");
			AUDIO::PREPARE_MUSIC_EVENT("AC_DELIVERED");
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_ASSAULTRIFLE"), 31, 0);
			if ((((STREAMING::HAS_MODEL_LOADED(joaat("A_M_O_ACult_02")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_anim_cash_pile_02"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@altruist_cult")) && AUDIO::PREPARE_MUSIC_EVENT("AC_DELIVERED")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_ASSAULTRIFLE")))
			{
				if (Global_113386.f_24995.f_5 < 2)
				{
					if (Global_113386.f_24995.f_5 == 0)
					{
						sLocal_269 = "ACULT_HI";
					}
					else
					{
						sLocal_269 = "ACULT_LEAVE5";
					}
					sLocal_263 = "cult_p5_guard";
					sLocal_265 = "cult_p5_trv";
					sLocal_266 = "cult_p5_victim_01";
					sLocal_267 = "cult_p5_victim_02";
					sLocal_268 = "cult_p5_cam";
					fLocal_89 = 0.75f;
					fLocal_88 = 0.999f;
				}
				else if (Global_113386.f_24995.f_5 >= 2)
				{
					sLocal_269 = "ACULT_CAPT";
					sLocal_263 = "cult_p7_guard_01";
					sLocal_264 = "cult_p7_guard_02";
					sLocal_265 = "cult_p7_trv";
					sLocal_266 = "cult_p7_victim_01";
					sLocal_267 = "cult_p7_victim_02";
					sLocal_268 = "cult_p7_cam";
					fLocal_89 = 0.98f;
					fLocal_88 = 0.98f;
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood03a"));
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood04a"));
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood05a"));
					STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
					if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						CUTSCENE::REQUEST_CUTSCENE("ac_ig_3_p3_b", 8);
					}
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_104))
				{
					HUD::REMOVE_BLIP(&iLocal_104);
				}
				__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				HUD::CLEAR_HELP(true);
				HUD::DISPLAY_HUD(false);
				HUD::DISPLAY_RADAR(false);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				AUDIO::TRIGGER_MUSIC_EVENT("AC_DELIVERED");
				if (__LIB_0__::func_436())
				{
					__LIB_0__::func_488(0);
				}
				__LIB_6__::func_771();
				SYSTEM::WAIT(0);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_99 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_99, false))
					{
						if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_99))
						{
							iLocal_93++;
						}
					}
				}
				else
				{
					iLocal_99 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (!PED::IS_PED_INJURED(iLocal_97[0]) && !PED::IS_PED_INJURED(iLocal_97[1]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_97[0]);
						PED::REMOVE_PED_FROM_GROUP(iLocal_97[0]);
						TASK::CLEAR_PED_TASKS(iLocal_97[1]);
						PED::REMOVE_PED_FROM_GROUP(iLocal_97[1]);
					}
					iLocal_93++;
				}
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_99))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_99))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_99, true, false);
				}
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_99, Local_54, 13f, 13f, 13f, false, true, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_99, -1028.4147f, 4924.863f, 205.9386f, false, false, false, true);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_99, false))
					{
						ENTITY::SET_ENTITY_HEADING(iLocal_99, 149.8882f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_99, 5f);
					}
				}
			}
			MISC::CLEAR_AREA(Local_54, 12f, true, false, false, false);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1035.6248f, 4915.1523f, 205.5761f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 128.2065f);
			if (!PED::IS_PED_INJURED(iLocal_97[0]) && !PED::IS_PED_INJURED(iLocal_97[1]))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_97[0], Vector(205.5761f, 4915.1523f, -1035.6248f) - Vector(0f, 0f, 1f), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_97[0], 128.2065f);
				ENTITY::SET_ENTITY_COORDS(iLocal_97[1], Vector(205.5761f, 4915.1523f, -1035.6248f) - Vector(0f, 1f, 0f), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_97[1], 128.2065f);
			}
			iLocal_98[0] = PED::CREATE_PED(26, joaat("A_M_O_ACult_02"), -1042.5597f, 4913.516f, 207.0988f, 282.4169f, true, true);
			__LIB_0__::func_203(&uLocal_271, 1, iLocal_98[0], "ACULTMember1", 0, 1);
			if (Global_113386.f_24995.f_5 >= 2)
			{
				iLocal_98[1] = PED::CREATE_PED(26, joaat("A_M_O_ACult_02"), -1041.7574f, 4908.4897f, 207.2777f, 305.3168f, true, true);
				__LIB_0__::func_203(&uLocal_271, 2, iLocal_98[1], "ACULTMember2", 0, 1);
			}
			__LIB_0__::func_203(&uLocal_271, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			__LIB_0__::func_203(&uLocal_271, 3, 0, "ACULTMaster", 0, 1);
			__LIB_0__::func_203(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
			__LIB_37__::func_799(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_98[0], true);
			iLocal_101 = WEAPON::CREATE_WEAPON_OBJECT(joaat("WEAPON_ASSAULTRIFLE"), -1, ENTITY::GET_ENTITY_COORDS(iLocal_98[0], true), true, 1f, 0, 0, 1);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_101, iLocal_98[0], PED::GET_PED_BONE_INDEX(iLocal_98[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, false, false, false, false, 2, true, 0);
			if (Global_113386.f_24995.f_5 < 2)
			{
				iLocal_100 = OBJECT::CREATE_OBJECT(joaat("prop_anim_cash_pile_02"), Local_53, true, true, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_100, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			}
			else if (Global_113386.f_24995.f_5 >= 2)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_98[1], joaat("WEAPON_ASSAULTRIFLE"), -1, true, true);
			}
			iLocal_106 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
			iLocal_92 = PED::CREATE_SYNCHRONIZED_SCENE(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_92, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_98[0], iLocal_92, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1000f, 0);
			if (Global_113386.f_24995.f_5 >= 2)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_98[1], iLocal_92, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1000f, 0);
			}
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_106, iLocal_92, sLocal_268, "random@altruist_cult");
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			if (!PED::IS_PED_INJURED(iLocal_97[0]) && !PED::IS_PED_INJURED(iLocal_97[1]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_97[0], iLocal_92, "random@altruist_cult", sLocal_266, 1000f, -2f, 4, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_97[1], iLocal_92, "random@altruist_cult", sLocal_267, 1000f, -2f, 4, 0, 1000f, 0);
			}
			iLocal_93++;
			break;
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_97[0]))
			{
				if (PED::IS_PED_MALE(iLocal_97[0]))
				{
					__LIB_5__::func_759(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					__LIB_5__::func_759(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_97[1]))
			{
				if (PED::IS_PED_MALE(iLocal_97[1]))
				{
					__LIB_5__::func_759(iLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					__LIB_5__::func_759(iLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_92) > fLocal_89)
			{
				iLocal_93++;
			}
			break;
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_97[0]))
			{
				if (PED::IS_PED_MALE(iLocal_97[0]))
				{
					__LIB_5__::func_759(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					__LIB_5__::func_759(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_97[1]))
			{
				if (PED::IS_PED_MALE(iLocal_97[1]))
				{
					__LIB_5__::func_759(iLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					__LIB_5__::func_759(iLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_92) > fLocal_88)
			{
				iLocal_93++;
			}
			break;
		case 4:
			if (Global_113386.f_24995.f_5 < 2)
			{
				func_135();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[0]))
				{
					PED::DELETE_PED(&(iLocal_98[0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[1]))
				{
					PED::DELETE_PED(&(iLocal_98[1]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_100))
				{
					OBJECT::DELETE_OBJECT(&iLocal_100);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_101))
				{
					OBJECT::DELETE_OBJECT(&iLocal_101);
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
				CAM::SET_CAM_ACTIVE(iLocal_106, false);
				__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_HUD(true);
				HUD::DISPLAY_RADAR(true);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				__LIB_40__::func_942(__LIB_18__::func_173(), 1, 2000, 0, 0);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("AC_DONE");
			Global_113386.f_24995.f_5 += 2;
			iLocal_78 = 1;
			break;
	}
}

void func_186()//Position - 0x7BDE
{
	switch (iLocal_93)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("A_M_O_ACult_02"));
			STREAMING::REQUEST_MODEL(joaat("prop_anim_cash_pile_02"));
			STREAMING::REQUEST_ANIM_DICT("random@altruist_cult");
			AUDIO::PREPARE_MUSIC_EVENT("AC_DELIVERED");
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_ASSAULTRIFLE"), 31, 0);
			if ((((STREAMING::HAS_MODEL_LOADED(joaat("A_M_O_ACult_02")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_anim_cash_pile_02"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@altruist_cult")) && AUDIO::PREPARE_MUSIC_EVENT("AC_DELIVERED")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_ASSAULTRIFLE")))
			{
				if (Global_113386.f_24995.f_5 == 0)
				{
					sLocal_269 = "ACULT_HI";
					sLocal_263 = "cult_p2_guard";
					sLocal_265 = "cult_p2_trv";
					sLocal_266 = "cult_p2_victim";
					sLocal_268 = "cult_p2_cam";
					fLocal_89 = 0.8f;
					fLocal_88 = 0.968f;
				}
				else if (Global_113386.f_24995.f_5 == 1)
				{
					sLocal_269 = "ACULT_LEAVE3";
					sLocal_263 = "cult_p4_guard";
					sLocal_265 = "cult_p4_trv";
					sLocal_266 = "cult_p4_victim";
					sLocal_268 = "cult_p4_cam";
					fLocal_89 = 0.77f;
					fLocal_88 = 0.999f;
				}
				else if (Global_113386.f_24995.f_5 == 2)
				{
					sLocal_269 = "ACULT_LEAVE3";
					sLocal_263 = "cult_p4_guard";
					sLocal_265 = "cult_p4_trv";
					sLocal_266 = "cult_p4_victim";
					sLocal_268 = "cult_p4_cam";
					fLocal_89 = 0.77f;
					fLocal_88 = 0.999f;
				}
				else if (Global_113386.f_24995.f_5 >= 3)
				{
					sLocal_269 = "ACULT_CAPT";
					sLocal_263 = "cult_p7_guard_01";
					sLocal_264 = "cult_p7_guard_02";
					sLocal_265 = "cult_p7_trv";
					sLocal_266 = "cult_p7_victim_01";
					sLocal_268 = "cult_p7_cam";
					fLocal_89 = 0.98f;
					fLocal_88 = 0.98f;
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood03a"));
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood04a"));
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood05a"));
					STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
					if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						CUTSCENE::REQUEST_CUTSCENE("ac_ig_3_p3_b", 8);
					}
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_104))
				{
					HUD::REMOVE_BLIP(&iLocal_104);
				}
				__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				HUD::CLEAR_HELP(true);
				HUD::DISPLAY_HUD(false);
				HUD::DISPLAY_RADAR(false);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				AUDIO::TRIGGER_MUSIC_EVENT("AC_DELIVERED");
				if (__LIB_0__::func_436())
				{
					__LIB_0__::func_488(0);
				}
				__LIB_6__::func_771();
				SYSTEM::WAIT(0);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_99 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_99, false))
					{
						if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_99))
						{
							iLocal_93++;
						}
					}
				}
				else
				{
					iLocal_99 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (!PED::IS_PED_INJURED(iLocal_97[0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_97[0]);
						PED::REMOVE_PED_FROM_GROUP(iLocal_97[0]);
					}
					iLocal_93++;
				}
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_99))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_99))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_99, true, false);
				}
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_99, Local_54, 13f, 13f, 13f, false, true, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_99, -1028.4147f, 4924.863f, 205.9386f, false, false, false, true);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_99, false))
					{
						ENTITY::SET_ENTITY_HEADING(iLocal_99, 149.8882f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_99, 5f);
					}
				}
			}
			MISC::CLEAR_AREA(Local_54, 12f, true, false, false, false);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1035.6248f, 4915.1523f, 205.5761f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 128.2065f);
			if (!PED::IS_PED_INJURED(iLocal_97[0]))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_97[0], Vector(205.5761f, 4915.1523f, -1035.6248f) - Vector(0f, 0f, 1f), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_97[0], 128.2065f);
			}
			iLocal_98[0] = PED::CREATE_PED(26, joaat("A_M_O_ACult_02"), -1042.5597f, 4913.516f, 207.0988f, 282.4169f, true, true);
			__LIB_0__::func_203(&uLocal_271, 1, iLocal_98[0], "ACULTMember1", 0, 1);
			if (Global_113386.f_24995.f_5 >= 3)
			{
				iLocal_98[1] = PED::CREATE_PED(26, joaat("A_M_O_ACult_02"), -1041.7574f, 4908.4897f, 207.2777f, 305.3168f, true, true);
				__LIB_0__::func_203(&uLocal_271, 2, iLocal_98[1], "ACULTMember2", 0, 1);
			}
			__LIB_0__::func_203(&uLocal_271, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			__LIB_0__::func_203(&uLocal_271, 3, 0, "ACULTMaster", 0, 1);
			__LIB_0__::func_203(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
			if (Global_113386.f_24995.f_5 != 1 && Global_113386.f_24995.f_5 != 2)
			{
				__LIB_37__::func_799(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
			}
			SYSTEM::SETTIMERB(0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_98[0], true);
			iLocal_100 = OBJECT::CREATE_OBJECT(joaat("prop_anim_cash_pile_02"), Local_53, true, true, false);
			iLocal_101 = WEAPON::CREATE_WEAPON_OBJECT(joaat("WEAPON_ASSAULTRIFLE"), -1, ENTITY::GET_ENTITY_COORDS(iLocal_98[0], true), true, 1f, 0, 0, 1);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_101, iLocal_98[0], PED::GET_PED_BONE_INDEX(iLocal_98[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, false, false, false, false, 2, true, 0);
			if (Global_113386.f_24995.f_5 < 3)
			{
				if (Global_113386.f_24995.f_5 == 0)
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_100, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				}
				else
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_100, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				}
			}
			else if (Global_113386.f_24995.f_5 >= 3)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_98[1], joaat("WEAPON_ASSAULTRIFLE"), -1, true, true);
			}
			iLocal_106 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
			iLocal_92 = PED::CREATE_SYNCHRONIZED_SCENE(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_92, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_98[0], iLocal_92, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1000f, 0);
			if (Global_113386.f_24995.f_5 >= 3)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_98[1], iLocal_92, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1000f, 0);
			}
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_106, iLocal_92, sLocal_268, "random@altruist_cult");
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			if (!PED::IS_PED_INJURED(iLocal_97[0]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_97[0], iLocal_92, "random@altruist_cult", sLocal_266, 1000f, -2f, 4, 0, 1000f, 0);
			}
			iLocal_93++;
			break;
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_97[0]))
			{
				if (PED::IS_PED_MALE(iLocal_97[0]))
				{
					__LIB_5__::func_759(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					__LIB_5__::func_759(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (SYSTEM::TIMERB() > 2000 && SYSTEM::TIMERB() < 2100)
			{
				if (Global_113386.f_24995.f_5 == 1 || Global_113386.f_24995.f_5 == 2)
				{
					if (!__LIB_0__::func_75())
					{
						__LIB_37__::func_799(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
					}
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_92) > fLocal_89)
			{
				iLocal_93++;
			}
			break;
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_97[0]))
			{
				if (PED::IS_PED_MALE(iLocal_97[0]))
				{
					__LIB_5__::func_759(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					__LIB_5__::func_759(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (Global_113386.f_24995.f_5 == 1 || Global_113386.f_24995.f_5 == 2)
			{
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_92) > 0.9742857f && !iLocal_85) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_85 = 1;
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_92) > fLocal_88)
			{
				iLocal_93++;
			}
			break;
		case 4:
			if (Global_113386.f_24995.f_5 < 3)
			{
				if (Global_113386.f_24995.f_5 != 1 && Global_113386.f_24995.f_5 != 2)
				{
					func_135();
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[0]))
					{
						PED::DELETE_PED(&(iLocal_98[0]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[1]))
					{
						PED::DELETE_PED(&(iLocal_98[1]));
					}
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_98[0], false, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[1]))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_98[1], false, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_97[0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_97[0], false, false);
					}
					iLocal_93++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_100))
				{
					OBJECT::DELETE_OBJECT(&iLocal_100);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_101))
				{
					OBJECT::DELETE_OBJECT(&iLocal_101);
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				if (Global_113386.f_24995.f_5 == 0)
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 750, 0f, true, false);
				}
				if (MISC::ARE_STRINGS_EQUAL(sLocal_268, "cult_p4_cam"))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
				else
				{
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
				}
				CAM::SET_CAM_ACTIVE(iLocal_106, false);
				__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_HUD(true);
				HUD::DISPLAY_RADAR(true);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				__LIB_40__::func_942(__LIB_18__::func_173(), 1, 1000, 0, 0);
			}
			if (Global_113386.f_24995.f_5 != 1 && Global_113386.f_24995.f_5 != 2)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_DONE");
				Global_113386.f_24995.f_5++;
				iLocal_78 = 1;
			}
			break;
		case 5:
			if (!__LIB_0__::func_75() || SYSTEM::TIMERB() > 7000)
			{
				func_135();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[0]))
				{
					PED::DELETE_PED(&(iLocal_98[0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[1]))
				{
					PED::DELETE_PED(&(iLocal_98[1]));
				}
				AUDIO::TRIGGER_MUSIC_EVENT("AC_DONE");
				Global_113386.f_24995.f_5++;
				iLocal_78 = 1;
			}
			break;
	}
}

void func_187()//Position - 0x85B0
{
	if (__LIB_30__::func_881())
	{
		if (__LIB_18__::func_173() == 2)
		{
			if (PED::DOES_GROUP_EXIST(__LIB_0__::func_399()))
			{
				PED::GET_GROUP_SIZE(__LIB_0__::func_399(), &uLocal_90, &iLocal_91);
				if (iLocal_91 == 1)
				{
					iLocal_97[0] = PED::GET_PED_AS_GROUP_MEMBER(__LIB_0__::func_399(), 0);
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_97[0], Local_54, 5f, 5f, 5f, false, true, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
							{
								VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 5, false);
							}
						}
						SYSTEM::SETTIMERA(0);
						iLocal_50 = 1;
					}
				}
				else if (iLocal_91 == 2)
				{
					iLocal_97[0] = PED::GET_PED_AS_GROUP_MEMBER(__LIB_0__::func_399(), 0);
					iLocal_97[1] = PED::GET_PED_AS_GROUP_MEMBER(__LIB_0__::func_399(), 1);
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_97[0], Local_54, 5f, 5f, 5f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_97[1], Local_54, 5f, 5f, 5f, false, true, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
							{
								VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 5, false);
							}
						}
						SYSTEM::SETTIMERA(0);
						iLocal_50 = 1;
					}
				}
			}
		}
	}
}

void func_190()//Position - 0x86D6
{
	if (__LIB_30__::func_880())
	{
		if (iLocal_260 == 0)
		{
			iLocal_260 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_53 - Vector(100f, 60f, 80f), Local_53 + Vector(100f, 60f, 80f), false, true, true, true);
		}
		while (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_0__::func_85(PLAYER::PLAYER_ID()), Local_53, true) < 209f)
		{
			SYSTEM::WAIT(0);
		}
	}
	if (__LIB_18__::func_173() == 0 || __LIB_18__::func_173() == 1)
	{
		if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(joaat("AMBIENT_GANG_CULT"), joaat("PLAYER")) != 5)
		{
			if (func_192())
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("AMBIENT_GANG_CULT"), joaat("PLAYER"));
			}
			else if (func_191())
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("AMBIENT_GANG_CULT"), joaat("PLAYER"));
			}
		}
	}
	else if (__LIB_18__::func_173() == 2)
	{
		if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(joaat("AMBIENT_GANG_CULT"), joaat("PLAYER")) != 5)
		{
			if (func_192())
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("AMBIENT_GANG_CULT"), joaat("PLAYER"));
				}
			}
			else if (func_191())
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("AMBIENT_GANG_CULT"), joaat("PLAYER"));
			}
			else if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(joaat("AMBIENT_GANG_CULT"), joaat("PLAYER")) != 1)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_CULT"), joaat("PLAYER"));
			}
		}
	}
	if (func_192())
	{
		if (iLocal_83)
		{
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 3))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_START");
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			AUDIO::SET_STATIC_EMITTER_ENABLED("COUNTRYSIDE_ALTRUIST_CULT_01", true);
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Global_41748[9 /*31*/].f_2, 6f, Global_41748[9 /*31*/].f_5, false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Global_41748[9 /*31*/].f_5, Global_41748[9 /*31*/].f_2, false, 0f, false);
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Global_41748[10 /*31*/].f_2, 6f, Global_41748[10 /*31*/].f_5, false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Global_41748[10 /*31*/].f_5, Global_41748[10 /*31*/].f_2, false, 0f, false);
			}
			bLocal_84 = true;
			iLocal_83 = 0;
		}
	}
	else if (!iLocal_83)
	{
		if (AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING())
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_END");
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		AUDIO::SET_STATIC_EMITTER_ENABLED("COUNTRYSIDE_ALTRUIST_CULT_01", false);
		if (!bLocal_84)
		{
			func_157();
		}
		iLocal_83 = 1;
	}
}

int func_191()//Position - 0x8907
{
	if ((((((MISC::IS_BULLET_IN_ANGLED_AREA(Local_55, Local_56, fLocal_57, true) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_58, Local_59, fLocal_60, true)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_61, Local_62, fLocal_63, true)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_64, Local_65, fLocal_66, true)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_67, Local_68, fLocal_69, true)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_70, Local_71, fLocal_72, true)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_73, Local_74, fLocal_75, true))
	{
		return 1;
	}
	return 0;
}

int func_192()//Position - 0x89A4
{
	if ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_55, Local_56, fLocal_57, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_58, Local_59, fLocal_60, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_61, Local_62, fLocal_63, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_64, Local_65, fLocal_66, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_67, Local_68, fLocal_69, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_70, Local_71, fLocal_72, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_73, Local_74, fLocal_75, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_194()//Position - 0x8A87
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("AMBIENT_GANG_CULT"), joaat("PLAYER"));
	if (Global_113386.f_24995.f_5 >= iLocal_96 && Global_113386.f_24995.f_5 != 1000)
	{
		if (bLocal_76)
		{
			__LIB_1__::func_37(1);
			func_11();
			__LIB_8__::func_770(0);
			iLocal_50 = 3;
		}
		else
		{
			__LIB_10__::func_840(&iLocal_109);
			Global_95698 = 0;
			Global_95699 = 0;
			Global_95700 = 0;
			func_14(0, 1);
			func_12(0, 1);
			__LIB_10__::func_841(0);
			MISC::SET_FADE_OUT_AFTER_DEATH(true);
			MISC::PAUSE_DEATH_ARREST_RESTART(false);
			MISC::IGNORE_NEXT_RESTART(false);
			__LIB_8__::func_770(0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			MISC::ENABLE_DISPATCH_SERVICE(3, true);
			MISC::ENABLE_DISPATCH_SERVICE(5, true);
			MISC::CLEAR_WEATHER_TYPE_PERSIST();
			iLocal_83 = 0;
			__LIB_30__::func_883();
			Global_113386.f_24995.f_5 = (iLocal_96 - 1);
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	else
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		__LIB_10__::func_840(&iLocal_109);
		Global_95698 = 0;
		Global_95699 = 0;
		Global_95700 = 0;
		func_14(0, 1);
		func_12(0, 1);
		__LIB_10__::func_841(0);
		MISC::SET_FADE_OUT_AFTER_DEATH(true);
		MISC::PAUSE_DEATH_ARREST_RESTART(false);
		MISC::IGNORE_NEXT_RESTART(false);
		__LIB_8__::func_770(0);
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_259))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_259);
			__LIB_0__::func_518(0);
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		iLocal_83 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

