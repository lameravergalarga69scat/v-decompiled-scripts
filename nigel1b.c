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
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
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
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	struct<61> Local_57 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_58 = 16;
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
	bool bLocal_223 = 0;
	int iLocal_224 = 0;
	bool bLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	bool bLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	bool bLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247[2] = { 0, 0 };
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	bool bLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	bool bLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	bool bLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	bool bLocal_262 = 0;
	bool bLocal_263 = 0;
	int iLocal_264[2] = { 0, 0 };
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	float fLocal_268[2] = { 0f, 0f };
	float fLocal_269[2] = { 0f, 0f };
	float fLocal_270[2] = { 0f, 0f };
	float fLocal_271 = 0f;
	float fLocal_272 = 0f;
	float fLocal_273 = 0f;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276[6] = { 0, 0, 0, 0, 0, 0 };
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
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_294 = 0;
	float fLocal_295 = 0f;
	struct<14> Local_296 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_297[2];
	struct<9> Local_298 = { 0, 0, 0, 0, 0, 0, 738282662, 0, 0 } ;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	struct<6> Local_301 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	struct<9> Local_305[3];
	struct<9> Local_306[2];
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	char* sLocal_319 = NULL;
	var uLocal_320 = 15;
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
	var uLocal_372 = 15;
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
	struct<6> Local_424 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_425[64] = "";
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	char cLocal_434[64] = "";
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	struct<3> Local_443 = { 0, 0, 0 } ;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	struct<3> Local_447 = { 0, 0, 0 } ;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	char* sLocal_451 = NULL;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	char[] cLocal_457[8] = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	struct<3> Local_463 = { 0, 0, 0 } ;
	struct<3> Local_464[2];
	struct<3> Local_465 = { 0, 0, 0 } ;
	struct<3> Local_466 = { 0, 0, 0 } ;
	struct<3> Local_467 = { 0, 0, 0 } ;
	struct<3> Local_468 = { 0, 0, 0 } ;
	struct<3> Local_469[2];
	struct<3> Local_470[2];
	struct<3> Local_471[2];
	struct<3> Local_472 = { 0, 0, 0 } ;
	struct<3> Local_473 = { 0, 0, 0 } ;
	struct<3> Local_474 = { 0, 0, 0 } ;
	struct<3> Local_475 = { 0, 0, 0 } ;
	struct<3> Local_476 = { 0, 0, 0 } ;
	struct<3> Local_477 = { 0, 0, 0 } ;
	struct<3> Local_478 = { 0, 0, 0 } ;
	struct<3> Local_479 = { 0, 0, 0 } ;
	struct<3> Local_480 = { 0, 0, 0 } ;
	struct<3> Local_481 = { 0, 0, 0 } ;
	struct<3> Local_482 = { 0, 0, 0 } ;
	struct<3> Local_483 = { 0, 0, 0 } ;
	struct<3> Local_484 = { 0, 0, 0 } ;
	struct<3> Local_485 = { 0, 0, 0 } ;
	struct<3> Local_486 = { 0, 0, 0 } ;
	struct<3> Local_487 = { 0, 0, 0 } ;
	struct<3> Local_488 = { 0, 0, 0 } ;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	struct<61> Local_493 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
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
	fLocal_21 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	uLocal_38 = __LIB_2__::func_910(64);
	uLocal_39 = __LIB_2__::func_910(63);
	iLocal_40 = joaat("U_M_M_Aldinapoli");
	iLocal_41 = joaat("premier");
	bLocal_252 = true;
	StringCopy(&Local_424, "", 24);
	StringCopy(&cLocal_425, "rcmnigel1b@reactions", 64);
	StringCopy(&cLocal_434, "rcmnigel1bnmt_1b", 64);
	StringCopy(&Local_443, "", 24);
	StringCopy(&Local_447, "", 24);
	iLocal_492 = joaat("WEAPON_UNARMED");
	Local_57 = { ScriptParam_493 };
	__LIB_14__::func_801(&Local_57);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_57.f_59))
	{
		PED::TAKE_OWNERSHIP_OF_SYNCHRONIZED_SCENE(Local_57.f_59);
	}
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_14__::func_872(1);
		func_616();
	}
	func_597();
	if (__LIB_0__::func_323())
	{
		__LIB_14__::func_865(&iLocal_491, -990.5321f, 342.9136f, 70.4615f, 111.0291f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
		iVar0 = __LIB_0__::func_344();
		if (Global_94618 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				__LIB_0__::func_427(Local_488, fLocal_295, 1, 0);
				func_481(0, 0);
				break;
			case 1:
				__LIB_0__::func_427(-1045.017f, 367.3012f, 68.9128f, 103.701f, 1, 0);
				func_481(1, 0);
				break;
			case 2:
				__LIB_0__::func_427(-462.2575f, -156.7884f, 37.0458f, 112.5754f, 1, 0);
				func_481(4, 0);
				break;
			default:
				break;
		}
	}
	else if (__LIB_0__::func_2(0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_38__::func_620(PLAYER::PLAYER_PED_ID(), Local_488, fLocal_295, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_VST", 0);
		__LIB_14__::func_863(Local_57.f_9, 0, 0, 0, 0, 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_460();
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			switch (iLocal_54)
			{
				case 0:
					func_376();
					break;
				case 1:
					func_375();
					break;
				case 2:
					func_374();
					break;
				case 5:
					func_362();
					break;
				case 3:
					func_276();
					break;
				case 4:
					func_75();
					break;
				case 6:
					func_48();
					break;
				case 7:
					break;
				}
		}
		if (bLocal_252 == 0)
		{
			func_1(iLocal_55);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x2A5
{
	if (iLocal_54 == iParam0)
	{
		if (__LIB_0__::func_324())
		{
			__LIB_0__::func_433(0, -1, 0);
		}
		__LIB_14__::func_879(1, 1, 1);
		bLocal_252 = true;
		iLocal_253 = 0;
		if (iLocal_54 == 4)
		{
			__LIB_0__::func_84(500, 1);
		}
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x2E6
{
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		func_24(1, 0);
		HUD::CLEAR_PRINTS();
		switch (iLocal_54)
		{
			case 0:
				if (iLocal_56 == 1)
				{
					__LIB_0__::func_714(&(Local_298.f_2));
					__LIB_0__::func_733(&Local_298);
					if (__LIB_0__::func_323() && __LIB_0__::func_344() == 1)
					{
						func_21(Global_100441.f_12[1], 1);
						func_17(Global_100441.f_12[0], 1);
						if (iLocal_311 == 2 && iLocal_314 == 2)
						{
							__LIB_38__::func_620(Local_296.f_8, -1050.3589f, 354.0594f, 68.9132f, 38.0338f, 0, 0);
							Local_296.f_9 = 38;
						}
						else if (iLocal_311 == 5)
						{
							Local_296.f_9 = 51;
							__LIB_14__::func_728(&(Local_296.f_8), 1);
						}
					}
					if (!__LIB_0__::func_324())
					{
						__LIB_38__::func_620(PLAYER::PLAYER_PED_ID(), -1045.017f, 367.3012f, 68.9128f, 103.701f, 0, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						if (iLocal_253 == 0)
						{
							if (iLocal_55 == 1)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_253 = 1;
								}
							}
						}
					}
					if (iLocal_314 == 0)
					{
						iLocal_251 = 1;
						iLocal_283 = MISC::GET_GAME_TIMER();
					}
					func_10();
					iLocal_56 = 2;
				}
				break;
			case 1:
				if (iLocal_56 == 1)
				{
					func_10();
					if (!__LIB_0__::func_324())
					{
						__LIB_38__::func_620(PLAYER::PLAYER_PED_ID(), -462.2575f, -156.7884f, 37.0458f, 112.5754f, 0, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						SYSTEM::WAIT(0);
						if (iLocal_253 == 0)
						{
							if (iLocal_55 == 2)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_253 = 1;
								}
							}
						}
					}
				}
				break;
			case 2:
				if (iLocal_56 == 1)
				{
					func_10();
					func_24(0, 0);
					iLocal_243 = 1;
				}
				break;
			case 3:
				if (__LIB_0__::func_77(0))
				{
					__LIB_0__::func_366(0);
				}
				if (!iLocal_257)
				{
					iLocal_56 = 2;
				}
				else
				{
					while (__LIB_0__::func_75())
					{
						func_24(0, 1);
						SYSTEM::WAIT(0);
					}
				}
				break;
			case 5:
				if (iLocal_56 == 1)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				break;
			default:
				break;
			}
	}
}

void func_10()//Position - 0x6E4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_297[iVar0 /*14*/].f_11 = 0;
		Local_297[iVar0 /*14*/].f_12 = 0;
		Local_297[iVar0 /*14*/].f_13 = 0;
		iVar0++;
	}
	Local_296.f_11 = 0;
	Local_296.f_12 = 0;
	Local_296.f_13 = 0;
}

void func_17(int iParam0, bool bParam1)//Position - 0x88F
{
	int iVar0;
	iLocal_314 = iParam0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			switch (iLocal_314)
			{
				case 0:
					Local_297[iVar0 /*14*/].f_9 = 0;
					break;
				case 1:
					break;
				case 2:
					Local_297[iVar0 /*14*/].f_9 = 36;
					break;
				case 3:
					Local_297[iVar0 /*14*/].f_9 = 32;
					break;
				case 4:
					if (iVar0 == 0)
					{
						Local_297[iVar0 /*14*/].f_9 = 26;
					}
					else
					{
						Local_297[iVar0 /*14*/].f_9 = 32;
					}
					break;
				case 5:
					if (Local_297[iVar0 /*14*/].f_9 != 42 || Local_297[iVar0 /*14*/].f_9 != 43)
					{
						Local_297[iVar0 /*14*/].f_9 = 44;
						if (__LIB_0__::func_121(Local_297[iVar0 /*14*/].f_8))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_297[iVar0 /*14*/].f_8);
						}
					}
					break;
				case 6:
					Local_297[iVar0 /*14*/].f_9 = 48;
					break;
			}
			iVar0++;
		}
	}
	if (iLocal_314 == 5)
	{
		iLocal_290 = MISC::GET_GAME_TIMER();
	}
	else if (iLocal_314 == 2 || iLocal_314 == 4)
	{
		iLocal_282 = MISC::GET_GAME_TIMER();
	}
	else if (iLocal_314 == 6)
	{
		if (!iLocal_254)
		{
			func_20(0);
			func_19(5, OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_276[5]), 0, 0);
			func_18(5, 0, 1);
			iLocal_258 = 1;
			iLocal_260 = 1;
			iLocal_254 = 1;
		}
	}
}

int func_18(int iParam0, int iParam1, bool bParam2)//Position - 0x9F4
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_276[iParam0]))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_276[iParam0], iParam1, false, bParam2);
		return 1;
	}
	return 0;
}

int func_19(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0xA1F
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_276[iParam0]))
	{
		OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(iLocal_276[iParam0], bParam2);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_276[iParam0], fParam1, false, bParam3);
		return 1;
	}
	return 0;
}

void func_20(bool bParam0)//Position - 0xA57
{
	int iVar0;
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = 1;
	}
	if (!iLocal_258)
	{
		func_19(0, OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_276[0]), 0, 0);
		func_18(0, iVar0, 1);
		func_19(1, OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_276[1]), 0, 0);
		func_18(1, iVar0, 1);
	}
	if (!iLocal_260)
	{
		func_19(2, OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_276[2]), 0, 0);
		func_18(2, iVar0, 1);
		func_19(3, OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_276[3]), 0, 0);
		func_18(3, iVar0, 1);
	}
}

void func_21(int iParam0, bool bParam1)//Position - 0xAE4
{
	iLocal_311 = iParam0;
	if (bParam1)
	{
		switch (iLocal_311)
		{
			case 0:
				Local_296.f_9 = 0;
				break;
			case 1:
				Local_296.f_9 = 32;
				break;
			case 2:
				Local_296.f_9 = 38;
				break;
			case 3:
				Local_296.f_9 = 44;
				if (__LIB_0__::func_121(Local_296.f_8))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_296.f_8);
				}
				break;
			case 4:
				Local_296.f_9 = 49;
				break;
			case 5:
				Local_296.f_9 = 51;
				break;
			}
	}
}

void func_24(bool bParam0, bool bParam1)//Position - 0xBAB
{
	if (__LIB_0__::func_75())
	{
		if (bParam0)
		{
			__LIB_0__::func_325();
		}
		else
		{
			__LIB_0__::func_429();
		}
	}
	if (bParam1)
	{
		__LIB_16__::func_294();
	}
	func_25(&sLocal_451, &cLocal_457);
}

void func_25(char* sParam0, char* sParam1)//Position - 0xBDD
{
	if (iLocal_316 != 0)
	{
		StringCopy(sParam0, "NULL", 24);
		StringCopy(sParam1, "NULL", 24);
		iLocal_316 = 0;
	}
}

void func_48()//Position - 0x11AB
{
	char* sVar0;
	sVar0 = 0;
	Local_468 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	func_65();
	func_63();
	switch (iLocal_56)
	{
		case 0:
			if (__LIB_38__::func_621("NIGEL1B_MISSION_FAIL", 0))
			{
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				func_24(1, 1);
				func_60();
				if (iLocal_267 == 0)
				{
					__LIB_14__::func_872(1);
				}
				else
				{
					__LIB_14__::func_880(sVar0, 1);
				}
				iLocal_284 = 2;
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
				__LIB_38__::func_621("NIGEL1B_MISSION_FAIL", 0);
				iLocal_56 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				func_49(1);
				MISC::CLEAR_AREA(Local_465, 35f, true, false, false, false);
				MISC::CLEAR_AREA_OF_PEDS(Local_465, 35f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_465, 35f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_465, 35f, 0);
				func_616();
			}
			break;
	}
}

void func_49(bool bParam0)//Position - 0x1286
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (__LIB_0__::func_692(Local_297[iVar0 /*14*/].f_8))
		{
			PED::SET_PED_KEEP_TASK(Local_297[iVar0 /*14*/].f_8, true);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_297[iVar0 /*14*/].f_8, false, 1);
			if (iVar0 == 0)
			{
				PED::SET_PED_LEG_IK_MODE(Local_297[iVar0 /*14*/].f_8, 1);
			}
		}
		__LIB_14__::func_728(&(Local_297[iVar0 /*14*/].f_8), bParam0);
		iVar0++;
	}
	if (__LIB_0__::func_692(Local_296.f_8))
	{
		PED::SET_PED_KEEP_TASK(Local_296.f_8, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_296.f_8, false, 1);
	}
	__LIB_14__::func_728(&(Local_296.f_8), bParam0);
	__LIB_0__::func_733(&Local_298);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_14__::func_727(&(Local_306[iVar0 /*9*/]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_14__::func_727(&(Local_305[iVar0 /*9*/]), bParam0);
		iVar0++;
	}
	__LIB_14__::func_745(&iLocal_489, bParam0);
	if (__LIB_0__::func_695(iLocal_490))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_490, "rcmnigel1b", "idle_speedo", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(iLocal_490, "idle_speedo", "rcmnigel1b", -4f);
		}
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_490, 0f);
	}
	__LIB_14__::func_745(&iLocal_490, bParam0);
	__LIB_14__::func_745(&iLocal_491, bParam0);
}

void func_60()//Position - 0x15D4
{
	int iVar0;
	__LIB_0__::func_714(&(Local_298.f_2));
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		__LIB_0__::func_621(&(Local_297[iVar0 /*14*/]));
		iVar0++;
	}
	__LIB_0__::func_621(&Local_296);
}

void func_63()//Position - 0x16A4
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (iLocal_313 != 0)
		{
			PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
			if (!iLocal_254)
			{
				func_20(0);
				func_19(5, OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_276[5]), 0, 0);
				func_18(5, 0, 1);
				iLocal_258 = 1;
				iLocal_260 = 1;
				iLocal_254 = 1;
			}
		}
		func_64(0);
	}
}

void func_64(int iParam0)//Position - 0x16FE
{
	if (iParam0 == iLocal_284)
	{
		switch (iLocal_284)
		{
			case 0:
				if (__LIB_38__::func_621("NIGEL1B_START", 0))
				{
					iLocal_284++;
				}
				break;
			case 1:
				if (__LIB_38__::func_621("NIGEL1B_WANTED", 0))
				{
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
					iLocal_284++;
				}
				break;
			case 2:
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (__LIB_38__::func_621("NIGEL1B_COPS_LOST", 0))
					{
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
						iLocal_286 = MISC::GET_GAME_TIMER();
						iLocal_284 = 3;
					}
				}
				else if (__LIB_38__::func_621("NIGEL1B_MISSION_FAIL", 0))
				{
					iLocal_284 = 4;
				}
				break;
			default:
				break;
			}
	}
}

void func_65()//Position - 0x179D
{
	if (iLocal_313 == 0)
	{
		if (func_74(PLAYER::PLAYER_PED_ID(), 0))
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
			iLocal_313 = 1;
			return;
		}
	}
	else if (iLocal_313 == 1)
	{
		if (func_72(PLAYER::PLAYER_PED_ID(), 0))
		{
			func_20(0);
			__LIB_15__::func_306(1);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1B_MAIN_MIX"))
			{
				AUDIO::START_AUDIO_SCENE("NIGEL_1B_MAIN_MIX");
			}
			iLocal_313 = 2;
			return;
		}
		else if (func_68(PLAYER::PLAYER_PED_ID(), 0))
		{
			func_20(0);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1B_MAIN_MIX"))
			{
				AUDIO::START_AUDIO_SCENE("NIGEL_1B_MAIN_MIX");
			}
			iLocal_313 = 3;
			return;
		}
		else if (!func_74(PLAYER::PLAYER_PED_ID(), 0))
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.8f);
			iLocal_313 = 0;
			return;
		}
	}
	else if (iLocal_313 == 2)
	{
		if (func_72(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
			{
				EVENT::SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME();
			}
			func_66();
		}
		else
		{
			func_20(1);
			__LIB_15__::func_306(0);
			iLocal_313 = 1;
			return;
		}
	}
	else if (iLocal_313 == 3)
	{
		if (func_68(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
			{
				EVENT::SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME();
			}
			func_66();
		}
		else
		{
			func_20(1);
			iLocal_313 = 1;
			return;
		}
	}
}

void func_66()//Position - 0x18C5
{
	if (!iLocal_258)
	{
		if (func_67(0) || func_67(1))
		{
			iLocal_258 = 1;
		}
	}
	if (!iLocal_260)
	{
		if (func_67(2) || func_67(3))
		{
			iLocal_260 = 1;
		}
	}
}

int func_67(int iParam0)//Position - 0x1909
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_276[iParam0]))
	{
		if (!OBJECT::IS_DOOR_CLOSED(iLocal_276[iParam0]))
		{
			return 1;
		}
	}
	return 0;
}

int func_68(int iParam0, bool bParam1)//Position - 0x1933
{
	struct<3> Var0;
	if (bParam1)
	{
		if (!__LIB_0__::func_121(iParam0))
		{
			return 0;
		}
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if (__LIB_16__::func_325(&uLocal_372, Var0))
	{
		if (func_69(Var0.f_2, 66.21f, 11f))
		{
			return 1;
		}
	}
	return 0;
}

int func_69(float fParam0, float fParam1, float fParam2)//Position - 0x1981
{
	float fVar0;
	fVar0 = MISC::ABSF((fParam0 - fParam1));
	if (fVar0 <= fParam2)
	{
		return 1;
	}
	return 0;
}

int func_72(int iParam0, bool bParam1)//Position - 0x1A75
{
	struct<3> Var0;
	if (bParam1)
	{
		if (!__LIB_0__::func_121(iParam0))
		{
			return 0;
		}
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if (__LIB_0__::func_725(iParam0, Local_475, 5.93f, 1))
	{
		if (!ENTITY::IS_ENTITY_AT_COORD(iParam0, -1055.1844f, 382.73236f, 70.68832f, 1f, 2f, 2.75f, false, true, 0))
		{
			if (func_69(Var0.f_2, 66.21f, 11f))
			{
				return 1;
			}
		}
	}
	if ((((ENTITY::IS_ENTITY_IN_AREA(iParam0, Local_476, Local_477, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_478, Local_479, 2.8f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_480, Local_481, 12.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_482, Local_483, 8.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_484, Local_485, 4f, false, true, 0))
	{
		if (func_69(Var0.f_2, 66.21f, 11f))
		{
			return 1;
		}
	}
	return 0;
}

int func_74(int iParam0, bool bParam1)//Position - 0x1BAD
{
	struct<3> Var0;
	if (bParam1)
	{
		if (!__LIB_0__::func_121(iParam0))
		{
			return 0;
		}
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if (__LIB_16__::func_325(&uLocal_320, Var0))
	{
		if (func_69(Var0.f_2, 66.21f, 11f))
		{
			return 1;
		}
	}
	return 0;
}

void func_75()//Position - 0x1BFB
{
	__LIB_0__::func_84(500, 1);
	func_76(97, 1);
	func_616();
}

void func_76(int iParam0, bool bParam1)//Position - 0x1C16
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
	func_101();
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

void func_101()//Position - 0x2D66
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
				if (func_219(iVar1, 14, iVar2))
				{
					func_102(iVar1, 14, iVar2);
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

int func_102(int iParam0, int iParam1, int iParam2)//Position - 0x2E27
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
	if (!func_219(iParam0, iParam1, iParam2))
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
				func_102(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_102(iParam0, 14, uVar5[iVar3]))
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
	if (func_145(iParam0, iVar0, &iVar7, 0))
	{
		func_105(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_103(iParam0, iVar0, &iVar7))
	{
		func_105(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_103(int iParam0, int iParam1, int iParam2)//Position - 0x2FE3
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_219(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_105(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x30AA
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
										func_105(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_105(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_111(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_145(iParam0, iVar10, &iVar4, 1))
							{
								func_105(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_105(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_105(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_105(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_105(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_105(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_105(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_105(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_105(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_105(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_145(iParam0, iVar10, &iVar4, 0))
		{
			func_105(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_103(iParam0, iVar10, &iVar4))
		{
			func_105(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_111(int iParam0, int iParam1, int iParam2)//Position - 0x40E8
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
				if (func_219(iParam0, iParam1, iVar0))
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
				if (func_219(iParam0, iParam1, iVar1))
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

int func_145(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA86A
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_219(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_219(int iParam0, int iParam1, int iParam2)//Position - 0x20C60
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
				if (!func_219(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_219(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_219(iParam0, 14, iVar4))
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
			if (!func_219(iParam0, 14, uVar8[iVar7]))
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

void func_276()//Position - 0x280BD
{
	func_361();
	func_335();
	func_298();
	switch (iLocal_56)
	{
		case 0:
			func_24(0, 1);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_0__::func_222(&uLocal_58, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			}
			__LIB_0__::func_222(&uLocal_58, 3, 0, "NIGEL", 0, 1);
			__LIB_0__::func_222(&uLocal_58, 4, 0, "MRSTHORNHILL", 0, 1);
			iLocal_285 = MISC::GET_GAME_TIMER();
			iLocal_56 = 1;
			break;
		case 1:
			if (!iLocal_257)
			{
				if (__LIB_14__::func_684(iLocal_285, 2500))
				{
					if (__LIB_14__::func_569(&uLocal_58, 64, "NIG1BAU", "NIG1B_OP", 11, 1, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 12f, 1);
						iLocal_257 = 1;
					}
				}
				else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_280(5);
				}
			}
			else if (!__LIB_0__::func_75() && !func_279("NULL"))
			{
				if (__LIB_14__::func_521())
				{
					if (__LIB_16__::func_596())
					{
						iLocal_257 = 0;
					}
					else
					{
						iLocal_56 = 2;
					}
				}
			}
			break;
		case 2:
			func_24(0, 1);
			func_280(4);
			break;
	}
}

int func_279(char* sParam0)//Position - 0x281F3
{
	if (iLocal_316 == 2 || iLocal_316 == 4)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, "NULL") || MISC::ARE_STRINGS_EQUAL(sParam0, ""))
		{
			return 1;
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, &sLocal_451))
		{
			return 1;
		}
	}
	return 0;
}

void func_280(int iParam0)//Position - 0x2823F
{
	iLocal_54 = iParam0;
	iLocal_56 = 0;
}

void func_298()//Position - 0x289F0
{
	int iVar0;
	if (__LIB_0__::func_692(Local_296.f_8))
	{
		func_334(Local_296.f_8, &(Local_296.f_13));
		switch (iLocal_311)
		{
			case 0:
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_278))
				{
					if ((!PED::IS_PED_BEING_STEALTH_KILLED(Local_296.f_8) && !PED::IS_PED_RAGDOLL(Local_296.f_8)) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(Local_296.f_8))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_278, "WHISTLING", Local_296.f_8, "NIGEL_1B_SOUNDSET", false, 0);
					}
				}
				else if ((PED::IS_PED_BEING_STEALTH_KILLED(Local_296.f_8) || PED::IS_PED_RAGDOLL(Local_296.f_8)) || AUDIO::IS_PED_IN_CURRENT_CONVERSATION(Local_296.f_8))
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_278))
					{
						AUDIO::STOP_SOUND(iLocal_278);
					}
				}
				if (func_333() || func_332(Local_296.f_8, 1101004800, 1084227584, 1097859072))
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_278))
					{
						AUDIO::STOP_SOUND(iLocal_278);
					}
					if (__LIB_0__::func_121(Local_296.f_8))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_296.f_8, PLAYER::PLAYER_PED_ID(), true))
						{
							iLocal_231 = 1;
						}
					}
					func_21(3, 1);
				}
				else if (Local_296.f_9 == 0)
				{
					if ((func_330(3) || (func_327(0, Local_296.f_13, 0, 0, 1) && iLocal_313 == 3)) || func_326())
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_278))
						{
							AUDIO::STOP_SOUND(iLocal_278);
						}
						func_21(1, 1);
					}
					else if (iLocal_312 == 2 || iLocal_312 == 3)
					{
						if (__LIB_0__::func_725(Local_296.f_8, Local_468, 4f, 1))
						{
							if (!AUDIO::HAS_SOUND_FINISHED(iLocal_278))
							{
								AUDIO::STOP_SOUND(iLocal_278);
							}
							func_21(1, 1);
						}
					}
					else if (iLocal_312 == 4)
					{
						if (__LIB_0__::func_725(Local_296.f_8, Local_468, 2.5f, 1))
						{
							if (!AUDIO::HAS_SOUND_FINISHED(iLocal_278))
							{
								AUDIO::STOP_SOUND(iLocal_278);
							}
							func_21(1, 1);
						}
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_296.f_8, PLAYER::PLAYER_PED_ID(), true))
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_278))
						{
							AUDIO::STOP_SOUND(iLocal_278);
						}
						func_21(1, 1);
					}
					else if (iLocal_313 == 3)
					{
						if (!__LIB_0__::func_75() && !func_279("NULL"))
						{
							if (__LIB_14__::func_684(iLocal_287, MISC::GET_RANDOM_INT_IN_RANGE(5000, 12000)))
							{
								if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_GBV", 7, 0, 0, 0))
								{
									if (!AUDIO::HAS_SOUND_FINISHED(iLocal_278))
									{
										AUDIO::STOP_SOUND(iLocal_278);
									}
									iLocal_287 = MISC::GET_GAME_TIMER();
								}
							}
						}
						else
						{
							iLocal_287 = MISC::GET_GAME_TIMER();
						}
					}
					else
					{
						iLocal_287 = MISC::GET_GAME_TIMER();
					}
				}
				else if (func_327(1, Local_296.f_13, 1, 1, 1) || func_330(3))
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_278))
					{
						AUDIO::STOP_SOUND(iLocal_278);
					}
					func_21(1, 1);
				}
				break;
			case 1:
				if (!iLocal_230)
				{
					func_24(0, 0);
					if (iLocal_313 == 3)
					{
						if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_GSP", 7, 0, 0, 0))
						{
							iLocal_292 = MISC::GET_GAME_TIMER();
							iLocal_230 = 1;
						}
					}
					else
					{
						iLocal_230 = 1;
					}
				}
				else
				{
					func_64(0);
					if (iLocal_314 == 0 || iLocal_314 == 1)
					{
						if ((!func_322("NIG1B_GSP", 1) || func_319(Local_296.f_8, 1082130432)) || __LIB_14__::func_684(iLocal_292, 1250))
						{
							func_21(2, 1);
						}
					}
					else if (!iLocal_229)
					{
						if (!func_322("NIG1B_GSP", 1))
						{
							if (iLocal_313 == 3)
							{
								if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_GSP2", 7, 0, 0, 0))
								{
									iLocal_229 = 1;
								}
							}
							else
							{
								iLocal_229 = 1;
							}
						}
						else if (iLocal_313 != 3)
						{
							func_24(1, 0);
						}
					}
					else if (!func_322("NIG1B_GSP2", 1))
					{
						func_21(4, 1);
					}
					else if (iLocal_313 != 3)
					{
						func_24(1, 0);
					}
				}
				if (func_333() || func_332(Local_296.f_8, 1101004800, 1084227584, 1097859072))
				{
					func_21(3, 1);
				}
				break;
			case 2:
				if (Local_296.f_9 == 38 || Local_296.f_9 == 39)
				{
					if (bLocal_259 || iLocal_314 == 4)
					{
						Local_296.f_9 = 34;
					}
				}
				if (iLocal_314 == 5 || iLocal_314 == 6)
				{
					if (func_72(Local_296.f_8, 0))
					{
						func_21(3, 1);
					}
				}
				if (func_319(Local_296.f_8, 1082130432))
				{
					if (bLocal_228)
					{
						if (!func_316("NIG1B_GIC", 1))
						{
							func_21(4, 1);
						}
					}
				}
				if (func_333() || func_332(Local_296.f_8, 1101004800, 1084227584, 1097859072))
				{
					func_21(3, 1);
				}
				break;
			case 3:
				func_64(0);
				if (!iLocal_231)
				{
					if ((func_72(Local_296.f_8, 0) && iLocal_314 == 5) || iLocal_314 == 6)
					{
						iLocal_231 = 1;
					}
					else if (iLocal_313 == 3 || __LIB_0__::func_725(Local_296.f_8, Local_468, 5f, 1))
					{
						func_24(0, 0);
						if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_GSU", 7, 0, 0, 0))
						{
							iLocal_279 = MISC::GET_GAME_TIMER();
							iLocal_231 = 1;
						}
					}
				}
				if (__LIB_0__::func_121(Local_296.f_8))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_296.f_8, PLAYER::PLAYER_PED_ID(), true))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_296.f_8);
						func_21(4, 1);
					}
				}
				break;
			case 4:
				if (!iLocal_227)
				{
					if (func_74(Local_296.f_8, 0))
					{
						if (iLocal_313 == 3 || __LIB_17__::func_34(Local_296.f_8, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7))
						{
							if (!__LIB_0__::func_75() && !func_279("NULL"))
							{
								if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_GF", 7, 0, 0, 0))
								{
									iLocal_227 = 1;
								}
							}
						}
					}
				}
				break;
		}
		func_301();
		if (Local_296.f_9 == 49 || Local_296.f_9 == 50)
		{
			__LIB_0__::func_621(&Local_296);
		}
		else if (iLocal_54 == 0)
		{
			__LIB_0__::func_631(Local_296.f_8, &Local_296, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
		}
		else if (!bLocal_263)
		{
			if (iLocal_313 == 0 && !__LIB_0__::func_725(Local_296.f_8, Local_468, 35f, 1))
			{
				__LIB_0__::func_621(&Local_296);
			}
			else
			{
				__LIB_0__::func_631(Local_296.f_8, &Local_296, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
			}
		}
		else
		{
			__LIB_0__::func_631(Local_296.f_8, &Local_296, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
		}
	}
	else
	{
		if (__LIB_0__::func_121(Local_305[0 /*9*/]) && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_305[0 /*9*/]))
		{
			ENTITY::DETACH_ENTITY(Local_305[0 /*9*/], true, true);
		}
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_278))
		{
			AUDIO::STOP_SOUND(iLocal_278);
		}
		if (!iLocal_232)
		{
			if (iLocal_313 == 3 && !PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_311 == 2 || iLocal_230)
				{
					if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_GK", 7, 0, 0, 0))
					{
						iLocal_232 = 1;
					}
				}
				else
				{
					iLocal_232 = 1;
				}
			}
			else
			{
				iLocal_232 = 1;
			}
		}
		if (iLocal_311 != 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_296.f_8))
			{
				if (PED::WAS_PED_KILLED_BY_STEALTH(Local_296.f_8))
				{
					__LIB_0__::func_630(787);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2.5f, 2f, 0);
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_296.f_8, PLAYER::PLAYER_PED_ID(), true))
				{
					__LIB_0__::func_630(787);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2.5f, 2f, 0);
				}
				else
				{
					iVar0 = PED::GET_PED_SOURCE_OF_DEATH(Local_296.f_8);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar0))
						{
							if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == PLAYER::PLAYER_PED_ID())
							{
								__LIB_0__::func_630(787);
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2.5f, 2f, 0);
							}
						}
					}
				}
			}
			if (iLocal_311 != 0)
			{
				bLocal_263 = true;
			}
			Local_296.f_9 = 51;
			__LIB_0__::func_621(&Local_296);
			iLocal_311 = 5;
		}
	}
}

void func_301()//Position - 0x29416
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	float fVar3;
	if (__LIB_0__::func_692(Local_296.f_8))
	{
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			switch (Local_296.f_9)
			{
				case 0:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_296.f_8, "rcmnigel1b", "idle_gardener", 3))
					{
						TASK::TASK_PLAY_ANIM(Local_296.f_8, "rcmnigel1b", "idle_gardener", 4f, -8f, -1, 270337, 0f, false, false, false);
					}
					break;
				case 32:
					if (__LIB_0__::func_121(Local_305[0 /*9*/]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_305[0 /*9*/], Local_296.f_8))
					{
						ENTITY::DETACH_ENTITY(Local_305[0 /*9*/], true, true);
					}
					TASK::CLEAR_PED_SECONDARY_TASK(Local_296.f_8);
					if (!PED::IS_PED_HEADTRACKING_PED(Local_296.f_8, PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_296.f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_296.f_8, "rcmnigel1b", "idle_gardener", 3))
					{
						if (!PED::IS_PED_RAGDOLL(Local_296.f_8) && !TASK::IS_PED_GETTING_UP(Local_296.f_8))
						{
							TASK::TASK_PLAY_ANIM(Local_296.f_8, "rcmnigel1b", "exit_gardener", 8f, -4f, -1, 8192, 0f, false, false, false);
						}
						else if (__LIB_6__::func_572(Local_296.f_8, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_296.f_8, -16f, true);
						}
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_296.f_8, true);
					Local_296.f_9 = 33;
					break;
				case 33:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_296.f_8, "rcmnigel1b", "exit_gardener", 3))
					{
						if (!PED::IS_PED_FACING_PED(Local_296.f_8, PLAYER::PLAYER_PED_ID(), 45f))
						{
							if (!__LIB_6__::func_572(Local_296.f_8, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_296.f_8, PLAYER::PLAYER_PED_ID(), 0);
							}
						}
					}
					else
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(Local_296.f_8, "rcmnigel1b", "exit_gardener", 1.2f);
					}
					break;
				case 34:
					TASK::CLEAR_PED_TASKS(Local_296.f_8);
					if (!PED::IS_PED_HEADTRACKING_PED(Local_296.f_8, PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_296.f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					}
					if (!PED::IS_PED_FACING_PED(Local_296.f_8, PLAYER::PLAYER_PED_ID(), 45f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_296.f_8, PLAYER::PLAYER_PED_ID(), 0);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_296.f_8, true);
					Local_296.f_11 = MISC::GET_GAME_TIMER();
					Local_296.f_9 = 35;
					break;
				case 35:
					if (!__LIB_6__::func_572(Local_296.f_8, joaat("SCRIPT_TASK_PLAY_ANIM")))
					{
						if (!PED::IS_PED_FACING_PED(Local_296.f_8, PLAYER::PLAYER_PED_ID(), 45f))
						{
							if (!__LIB_6__::func_572(Local_296.f_8, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
							{
								Local_296.f_9 = 34;
							}
						}
						else if (__LIB_14__::func_684(Local_296.f_11, MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000)))
						{
							if (func_305(&(Local_296.f_8), "react_small_variations_o", 4f, -4f, -1, 0, 0, 0, 0))
							{
								Local_296.f_11 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else
					{
						if (!PED::IS_PED_FACING_PED(Local_296.f_8, PLAYER::PLAYER_PED_ID(), 170f))
						{
							TASK::CLEAR_PED_TASKS(Local_296.f_8);
						}
						Local_296.f_11 = MISC::GET_GAME_TIMER();
					}
					break;
				case 38:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_296.f_8, "rcmnigel1b", "exit_gardener", 3))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_318);
						if (!__LIB_0__::func_725(Local_296.f_8, -1050.3589f, 354.0594f, 68.9132f, 3f, 1))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1050.3589f, 354.0594f, 68.9132f, 2f, 20000, 0.25f, 0, 38.0338f);
						}
						if (__LIB_0__::func_121(Local_297[0 /*14*/].f_8))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_297[0 /*14*/].f_8, -1);
						}
						TASK::CLOSE_SEQUENCE_TASK(iLocal_318);
						TASK::TASK_PERFORM_SEQUENCE(Local_296.f_8, iLocal_318);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_318);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_296.f_8, true);
						Local_296.f_9 = 39;
					}
					break;
				case 39:
					if (!__LIB_6__::func_572(Local_296.f_8, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						Local_296.f_9 = 38;
					}
					else if (__LIB_0__::func_121(Local_297[0 /*14*/].f_8))
					{
						if (!__LIB_6__::func_572(Local_296.f_8, joaat("SCRIPT_TASK_LOOK_AT_ENTITY")))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_296.f_8, Local_297[0 /*14*/].f_8, -1, 0, 2);
						}
					}
					break;
				case 42:
					if (__LIB_0__::func_121(Local_305[0 /*9*/]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_305[0 /*9*/], Local_296.f_8))
					{
						ENTITY::DETACH_ENTITY(Local_305[0 /*9*/], true, true);
					}
					TASK::CLEAR_PED_SECONDARY_TASK(Local_296.f_8);
					TASK::CLEAR_PED_TASKS(Local_296.f_8);
					PED::SET_PED_CAN_RAGDOLL(Local_296.f_8, true);
					if (!PED::IS_PED_RAGDOLL(Local_296.f_8))
					{
						PED::SET_PED_TO_RAGDOLL(Local_296.f_8, 1000, 1000, 0, true, true, false);
					}
					Local_296.f_9 = 43;
					break;
				case 43:
					if (!PED::IS_PED_RAGDOLL(Local_296.f_8))
					{
						if (!__LIB_6__::func_572(Local_296.f_8, joaat("SCRIPT_TASK_COWER")) && !__LIB_6__::func_572(Local_296.f_8, joaat("SCRIPT_TASK_HANDS_UP")))
						{
							if (((!ENTITY::IS_ENTITY_IN_WATER(Local_296.f_8) && !__LIB_0__::func_725(Local_296.f_8, Local_472, fLocal_272, 1)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_296.f_8, Local_473, Local_474, fLocal_273, false, true, 0)) && !PED::IS_PED_CLIMBING(Local_296.f_8))
							{
								PED::SET_PED_COWER_HASH(Local_296.f_8, "CODE_HUMAN_STAND_COWER");
								TASK::TASK_COWER(Local_296.f_8, -1);
							}
							else if (!__LIB_6__::func_572(Local_296.f_8, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
							{
								TASK::CLEAR_PED_TASKS(Local_296.f_8);
								Var0 = { Local_471[0 /*3*/] };
								fVar1 = 201.7237f;
								if (__LIB_1__::func_504(Local_468, Var0, 1.5f))
								{
									Var0 = { Local_471[1 /*3*/] };
									fVar1 = 325.0476f;
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_296.f_8, Var0, 1f, 20000, 0.25f, 0, fVar1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_296.f_8, true);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_296.f_8, true);
						}
					}
					break;
				case 44:
					if (__LIB_0__::func_121(Local_305[0 /*9*/]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_305[0 /*9*/], Local_296.f_8))
						{
							ENTITY::DETACH_ENTITY(Local_305[0 /*9*/], true, true);
						}
						__LIB_14__::func_727(&(Local_305[0 /*9*/]), 0);
					}
					if (PED::IS_PED_USING_ANY_SCENARIO(Local_296.f_8))
					{
						PED::SET_PED_PANIC_EXIT_SCENARIO(Local_296.f_8, Local_468);
					}
					if (ENTITY::IS_ENTITY_IN_WATER(Local_296.f_8) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_296.f_8, Local_473, Local_474, fLocal_273, false, true, 0))
					{
						if (!__LIB_6__::func_572(Local_296.f_8, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
						{
							if ((!PED::IS_PED_RAGDOLL(Local_296.f_8) && !TASK::IS_PED_GETTING_UP(Local_296.f_8)) && !PED::IS_PED_CLIMBING(Local_296.f_8))
							{
								Var2 = { Local_471[0 /*3*/] };
								fVar3 = 201.7237f;
								if (__LIB_1__::func_504(Local_468, Var2, 1.5f))
								{
									Var2 = { Local_471[1 /*3*/] };
									fVar3 = 325.0476f;
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_296.f_8, Var2, 1f, 20000, 0.25f, 0, fVar3);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_296.f_8, true);
							}
						}
					}
					else
					{
						if (!PED::IS_PED_HEADTRACKING_PED(Local_296.f_8, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_296.f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_296.f_8, "rcmnigel1b", "idle_gardener", 3))
						{
							if (((!PED::IS_PED_RAGDOLL(Local_296.f_8) && !TASK::IS_PED_GETTING_UP(Local_296.f_8)) && !PED::IS_PED_CLIMBING(Local_296.f_8)) && !PED::IS_PED_BEING_STUNNED(Local_296.f_8, 0))
							{
								TASK::TASK_PLAY_ANIM(Local_296.f_8, "rcmnigel1b", "exit_panic_gardener", 8f, -4f, -1, 8192, 0f, false, false, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_296.f_8, true);
							}
							else if (__LIB_6__::func_572(Local_296.f_8, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_296.f_8, -16f, true);
							}
						}
						else
						{
							TASK::TASK_HANDS_UP(Local_296.f_8, -1, PLAYER::PLAYER_PED_ID(), -1, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_296.f_8, true);
						}
						Local_296.f_9 = 45;
					}
					break;
				case 45:
					if (ENTITY::IS_ENTITY_IN_WATER(Local_296.f_8) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_296.f_8, Local_473, Local_474, fLocal_273, false, true, 0))
					{
						Local_296.f_9 = 44;
					}
					else
					{
						if (!PED::IS_PED_HEADTRACKING_PED(Local_296.f_8, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_296.f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_296.f_8, "rcmnigel1b", "exit_panic_gardener", 3))
						{
							if (!__LIB_6__::func_572(Local_296.f_8, joaat("SCRIPT_TASK_HANDS_UP")))
							{
								TASK::TASK_HANDS_UP(Local_296.f_8, -1, PLAYER::PLAYER_PED_ID(), -1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_296.f_8, true);
							}
							if (func_302(Local_296.f_8, 0))
							{
								Local_296.f_9 = 46;
							}
						}
					}
					break;
				case 46:
					if ((((ENTITY::IS_ENTITY_IN_WATER(Local_296.f_8) || __LIB_0__::func_725(Local_296.f_8, Local_472, fLocal_272, 1)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_296.f_8, Local_473, Local_474, fLocal_273, false, true, 0)) || PED::IS_PED_CLIMBING(Local_296.f_8)) || PED::IS_PED_RAGDOLL(Local_296.f_8))
					{
						Local_296.f_9 = 44;
					}
					else
					{
						if (__LIB_0__::func_121(Local_305[0 /*9*/]))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_305[0 /*9*/], Local_296.f_8))
							{
								ENTITY::DETACH_ENTITY(Local_305[0 /*9*/], true, true);
							}
							__LIB_14__::func_727(&(Local_305[0 /*9*/]), 0);
						}
						if (PED::IS_PED_USING_ANY_SCENARIO(Local_296.f_8))
						{
							PED::SET_PED_PANIC_EXIT_SCENARIO(Local_296.f_8, Local_468);
						}
						TASK::CLEAR_PED_SECONDARY_TASK(Local_296.f_8);
						PED::SET_PED_COWER_HASH(Local_296.f_8, "CODE_HUMAN_STAND_COWER");
						TASK::TASK_COWER(Local_296.f_8, -1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_296.f_8, true);
						Local_296.f_9 = 47;
					}
					break;
				case 47:
					if (!PED::IS_PED_RAGDOLL(Local_296.f_8))
					{
						if (!__LIB_6__::func_572(Local_296.f_8, joaat("SCRIPT_TASK_COWER")))
						{
							Local_296.f_9 = 46;
						}
						else if (ENTITY::IS_ENTITY_IN_WATER(Local_296.f_8))
						{
							Local_296.f_9 = 44;
						}
					}
					break;
				case 49:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_296.f_8, "rcmnigel1b", "exit_panic_gardener", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_296.f_8, "rcmnigel1b", "exit_gardener", 3))
					{
						PED::SET_PED_FLEE_ATTRIBUTES(Local_296.f_8, 64, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_296.f_8, 128, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_296.f_8, 2, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_296.f_8, 8, true);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_296.f_8, 1, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_296.f_8, 32, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_296.f_8, 4, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_296.f_8, 5, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_296.f_8, 17, true);
						if (__LIB_0__::func_121(Local_305[0 /*9*/]))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_305[0 /*9*/], Local_296.f_8))
							{
								ENTITY::DETACH_ENTITY(Local_305[0 /*9*/], true, true);
							}
							__LIB_14__::func_727(&(Local_305[0 /*9*/]), 0);
						}
						TASK::CLEAR_PED_SECONDARY_TASK(Local_296.f_8);
						if (PED::IS_PED_USING_ANY_SCENARIO(Local_296.f_8))
						{
							PED::SET_PED_PANIC_EXIT_SCENARIO(Local_296.f_8, Local_468);
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_296.f_8, "rcmnigel1b", "idle_gardener", 3))
						{
							TASK::TASK_PLAY_ANIM(Local_296.f_8, "rcmnigel1b", "exit_panic_gardener", 8f, -4f, -1, 8192, 0f, false, false, false);
						}
						else
						{
							if ((!PED::IS_PED_RAGDOLL(Local_296.f_8) && !PED::IS_PED_SWIMMING(Local_296.f_8)) && !PED::IS_PED_CLIMBING(Local_296.f_8))
							{
								TASK::TASK_REACT_AND_FLEE_PED(Local_296.f_8, PLAYER::PLAYER_PED_ID());
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(Local_296.f_8, PLAYER::PLAYER_PED_ID(), 150f, -1, true, false);
							}
							Local_296.f_9 = 50;
						}
					}
					break;
				case 50:
					if (!__LIB_6__::func_572(Local_296.f_8, joaat("SCRIPT_TASK_SMART_FLEE_PED")) && !__LIB_6__::func_572(Local_296.f_8, joaat("SCRIPT_TASK_REACT_AND_FLEE_PED")))
					{
						Local_296.f_9 = 49;
					}
					break;
				default:
					break;
				}
			}
	}
}

int func_302(int iParam0, bool bParam1)//Position - 0x29F55
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	if (bParam1)
	{
		if (!__LIB_0__::func_121(iParam0))
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		if (func_303(1, 0, 1))
		{
			fVar0 = 40f;
			if (__LIB_0__::func_725(iParam0, Local_468, fVar0, 1))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), 4f, true))
	{
		return 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
		return 1;
	}
	fVar1 = 15f;
	Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Var3 = { Var2 };
	Var2.f_0 = (Var2.f_0 - fVar1);
	Var2.f_1 = (Var2.f_1 - fVar1);
	Var2.f_2 = (Var2.f_2 - fVar1);
	Var3.f_0 = (Var3.f_0 + fVar1);
	Var3.f_1 = (Var3.f_1 + fVar1);
	Var3.f_2 = (Var3.f_2 + fVar1);
	if (MISC::IS_PROJECTILE_IN_AREA(Var2, Var3, true))
	{
		return 1;
	}
	return 0;
}

int func_303(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2A053
{
	int iVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
	switch (iVar0)
	{
		case joaat("WEAPON_PISTOL"):
		case joaat("WEAPON_COMBATPISTOL"):
		case joaat("WEAPON_APPISTOL"):
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_SNSPISTOL"):
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_ADVANCEDRIFLE"):
		case joaat("WEAPON_MG"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
		case joaat("WEAPON_SNIPERRIFLE"):
		case joaat("WEAPON_HEAVYSNIPER"):
		case joaat("WEAPON_REMOTESNIPER"):
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_RPG"):
		case joaat("WEAPON_MINIGUN"):
			return 1;
		default:
	}
	if (bParam0)
	{
		switch (iVar0)
		{
			case joaat("WEAPON_GRENADE"):
			case joaat("WEAPON_STICKYBOMB"):
			case joaat("WEAPON_MOLOTOV"):
				return 1;
			}
		default:
	}
	if (bParam1)
	{
		switch (iVar0)
		{
			case joaat("WEAPON_KNIFE"):
			case joaat("WEAPON_HAMMER"):
			case joaat("WEAPON_CROWBAR"):
			case joaat("WEAPON_BOTTLE"):
			case default:
			}
	}
	if (bParam2)
	{
		if (iVar0 == joaat("WEAPON_STUNGUN"))
		{
			return 1;
		}
	}
	return 0;
}

int func_305(var uParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8)//Position - 0x2A164
{
	int iVar0;
	if (__LIB_0__::func_692(*uParam0))
	{
		STREAMING::REQUEST_ANIM_DICT(&cLocal_425);
		if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_425))
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				switch (iVar0)
				{
					case 0:
						sParam1 = "react_small_variations_k";
						break;
					case 1:
						sParam1 = "react_small_variations_m";
						break;
					case 2:
						sParam1 = "react_small_variations_n";
						break;
					case 3:
						sParam1 = "react_small_variations_o";
						break;
					}
			}
			TASK::TASK_PLAY_ANIM(*uParam0, &cLocal_425, sParam1, fParam2, fParam3, iParam4, iParam5, fParam6, bParam7, bParam8, false);
			return 1;
		}
	}
	return 0;
}

int func_316(char* sParam0, bool bParam1)//Position - 0x2A675
{
	struct<6> Var0;
	if (__LIB_0__::func_75())
	{
		Var0 = { __LIB_13__::func_743() };
		if (MISC::ARE_STRINGS_EQUAL(&Var0, sParam0))
		{
			return 1;
		}
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "NULL"))
		{
			return 1;
		}
	}
	if (bParam1)
	{
		if (func_317(sParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_317(char* sParam0)//Position - 0x2A6BD
{
	if (iLocal_316 == 2 || iLocal_316 == 4)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &sLocal_451))
		{
			return 1;
		}
	}
	return 0;
}

int func_319(int iParam0, float fParam1)//Position - 0x2A72F
{
	if (__LIB_0__::func_692(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
			return 1;
		}
		if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iParam0, fParam1, 1))
		{
			if (__LIB_17__::func_37(iParam0, 1126825984))
			{
				if ((PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_322(char* sParam0, bool bParam1)//Position - 0x2A7DF
{
	struct<6> Var0;
	if (__LIB_0__::func_75())
	{
		Var0 = { __LIB_0__::func_486() };
		if (MISC::ARE_STRINGS_EQUAL(&Var0, sParam0))
		{
			return 1;
		}
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "NULL"))
		{
			return 1;
		}
	}
	if (bParam1)
	{
		if (func_279(sParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_324(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2A84B
{
	bool bVar0;
	bVar0 = false;
	if (iParam4 == 0)
	{
		if (MISC::GET_PROFILE_SETTING(203) != 0)
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				bVar0 = true;
				iParam4 = 1;
			}
		}
	}
	if (func_325(uParam0, sParam1, sParam2, iParam3, iParam4, iParam5, iParam6))
	{
		if (bVar0)
		{
			iLocal_316 = 3;
		}
		else
		{
			func_25(&sLocal_451, &cLocal_457);
		}
		return 1;
	}
	return 0;
}

bool func_325(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, var uParam6)//Position - 0x2A8A3
{
	__LIB_0__::func_487(uParam0, 145, sParam1, iParam4, iParam5, uParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return __LIB_0__::func_711(sParam2, iParam3, 0);
}

int func_326()//Position - 0x2A8F1
{
	float fVar0;
	if (iLocal_313 == 3)
	{
		if (__LIB_0__::func_695(iLocal_490))
		{
			fVar0 = VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_490, 2);
			if (fVar0 < 0.49f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_327(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x2A924
{
	int iVar0;
	if (!__LIB_0__::func_121(Local_296.f_8))
	{
		return 0;
	}
	if (bParam4)
	{
		if (PED::IS_PED_BEING_STEALTH_KILLED(Local_296.f_8))
		{
			if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
	}
	if (bParam0)
	{
		if (func_329(Local_296.f_8, 0))
		{
			if (PED::CAN_PED_SEE_HATED_PED(Local_296.f_8, PLAYER::PLAYER_PED_ID()))
			{
				if (!__LIB_14__::func_695(iParam1, 10))
				{
					return 1;
				}
			}
		}
	}
	if (bParam3)
	{
		if (iLocal_312 == 2 || iLocal_312 == 3)
		{
			if (__LIB_0__::func_725(Local_296.f_8, Local_468, 7f, 1))
			{
				return 1;
			}
		}
	}
	if (bParam2)
	{
		if (iLocal_312 == 4)
		{
			if (__LIB_0__::func_725(Local_296.f_8, Local_468, 3.5f, 1))
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_BEING_STUNNED(Local_296.f_8, 0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
		if (iVar0 == joaat("WEAPON_STUNGUN"))
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_296.f_8, PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	return 0;
}

int func_329(int iParam0, bool bParam1)//Position - 0x2AA33
{
	if (bParam1)
	{
		if (!__LIB_0__::func_121(iParam0))
		{
			return 0;
		}
	}
	if (iLocal_312 == 0 || iLocal_312 == 1)
	{
		PED::SET_PED_SEEING_RANGE(iParam0, 15f);
		PED::SET_PED_HEARING_RANGE(iParam0, 0f);
	}
	else if (iLocal_312 == 2 || iLocal_312 == 3)
	{
		PED::SET_PED_SEEING_RANGE(iParam0, 22f);
		PED::SET_PED_HEARING_RANGE(iParam0, 10f);
	}
	else
	{
		PED::SET_PED_SEEING_RANGE(iParam0, 18f);
		PED::SET_PED_HEARING_RANGE(iParam0, 5f);
	}
	return 1;
}

int func_330(int iParam0)//Position - 0x2AAB5
{
	int iVar0;
	if (iLocal_313 == iParam0)
	{
		if (func_331() == 5)
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_0__::func_695(iVar0))
			{
				if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_331()//Position - 0x2AAEF
{
	return iLocal_312;
}

int func_332(int iParam0, float fParam1, float fParam2, float fParam3)//Position - 0x2AAFA
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	if (__LIB_0__::func_692(iParam0))
	{
		if (func_303(1, 1, 1))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			if (MISC::IS_BULLET_IN_AREA(Var0, fParam2, true))
			{
				return 1;
			}
			if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iParam0, fParam1, 1))
			{
				if (func_329(iParam0, 0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()))
					{
						if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
						{
							return 1;
						}
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
						{
							return 1;
						}
					}
				}
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
					return 1;
				}
			}
			Var1 = { Var0 };
			Var2 = { Var1 };
			Var1.f_0 = (Var1.f_0 - fParam3);
			Var1.f_1 = (Var1.f_1 - fParam3);
			Var1.f_2 = (Var1.f_2 - fParam3);
			Var2.f_0 = (Var2.f_0 + fParam3);
			Var2.f_1 = (Var2.f_1 + fParam3);
			Var2.f_2 = (Var2.f_2 + fParam3);
			if (MISC::IS_PROJECTILE_IN_AREA(Var1, Var2, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_333()//Position - 0x2AC0D
{
	int iVar0;
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if ((iLocal_313 == 3 || iLocal_313 == 2) || iLocal_313 == 1)
		{
			if (!WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
				if (iVar0 != joaat("WEAPON_STICKYBOMB"))
				{
					if (func_303(1, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_334(int iParam0, var uParam1)//Position - 0x2AC72
{
	if (__LIB_0__::func_121(iParam0))
	{
		if (__LIB_17__::func_34(iParam0, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7))
		{
			*uParam1 = MISC::GET_FRAME_COUNT();
		}
	}
}

void func_335()//Position - 0x2ACA0
{
	int iVar0;
	struct<6> Var1;
	struct<6> Var2;
	char* sVar3;
	int iVar4;
	struct<3> Var5;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		func_334(Local_297[iVar0 /*14*/].f_8, &(Local_297[iVar0 /*14*/].f_13));
		iVar0++;
	}
	if (iLocal_314 != 6)
	{
		if (func_360())
		{
			func_17(6, 1);
		}
	}
	switch (iLocal_314)
	{
		case 0:
			if ((iLocal_311 == 2 && __LIB_0__::func_692(Local_296.f_8)) && func_72(Local_296.f_8, 1))
			{
				iLocal_282 = MISC::GET_GAME_TIMER();
				func_17(2, 1);
			}
			else
			{
				func_357();
				if (iLocal_313 == 2)
				{
					if (!iLocal_239)
					{
						if (Local_297[0 /*14*/].f_9 != 0)
						{
							if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_P0", 7, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 0);
								iLocal_239 = 1;
							}
						}
					}
					else if (Local_297[0 /*14*/].f_9 == 5)
					{
						if (!func_322("NIG1B_P0", 1))
						{
							Local_297[0 /*14*/].f_9 = 6;
						}
					}
					else if (Local_297[0 /*14*/].f_9 == 10)
					{
						if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_P1", 7, 0, 0, 0))
						{
							Local_297[0 /*14*/].f_9 = 11;
						}
					}
					else if (!iLocal_237)
					{
						if (Local_297[0 /*14*/].f_9 == 12)
						{
							if (!func_322("NIG1B_P1", 1))
							{
								if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_P2", 7, 0, 0, 0))
								{
									iLocal_237 = 1;
								}
							}
						}
					}
					else if (Local_297[0 /*14*/].f_9 == 13 || Local_297[0 /*14*/].f_9 == 12)
					{
						if (!func_322("NIG1B_P2", 1))
						{
							Local_297[0 /*14*/].f_9 = 14;
						}
					}
					else if (!iLocal_235)
					{
						if ((Local_297[0 /*14*/].f_9 == 17 || Local_297[0 /*14*/].f_9 == 18) || Local_297[0 /*14*/].f_9 == 19)
						{
							if (!__LIB_0__::func_75() && !func_279("NULL"))
							{
								if (iLocal_261)
								{
									if (func_355(&uLocal_58, "NIG1BAU", "NIG1B_P3", &Local_424, 7, 1, 0))
									{
										iLocal_261 = 0;
										iLocal_235 = 1;
									}
								}
								else if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_P3", 7, 0, 0, 0))
								{
									iLocal_235 = 1;
								}
							}
						}
					}
					else if (!iLocal_236)
					{
						if (!func_322("NIG1B_P3", 1))
						{
							if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_IDLE", 7, 0, 0, 0))
							{
								iLocal_283 = MISC::GET_GAME_TIMER();
								iLocal_236 = 1;
							}
						}
					}
					else if (!func_322("NIG1B_IDLE", 1))
					{
						if (iLocal_251)
						{
							if (__LIB_14__::func_684(iLocal_283, 150000000))
							{
							}
						}
					}
					else
					{
						iLocal_283 = MISC::GET_GAME_TIMER();
					}
				}
				else if (__LIB_0__::func_75() && !func_279("NULL"))
				{
					Var1 = { __LIB_0__::func_486() };
					if ((((MISC::ARE_STRINGS_EQUAL(&Var1, "NIG1B_P0") || MISC::ARE_STRINGS_EQUAL(&Var1, "NIG1B_P1")) || MISC::ARE_STRINGS_EQUAL(&Var1, "NIG1B_P2")) || MISC::ARE_STRINGS_EQUAL(&Var1, "NIG1B_P3")) || MISC::ARE_STRINGS_EQUAL(&Var1, "NIG1B_IDLE"))
					{
						func_24(1, 0);
					}
					else if (MISC::ARE_STRINGS_EQUAL(&Var1, "NIG1B_P3"))
					{
						Var2 = { __LIB_0__::func_485() };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
						{
							iLocal_261 = 1;
							iLocal_235 = 0;
							Local_424 = { Var2 };
							func_24(1, 0);
						}
					}
				}
				if (!func_352())
				{
					func_17(3, 1);
				}
			}
			if (func_333() || func_351())
			{
				func_17(5, 1);
			}
			break;
		case 1:
			if ((iLocal_311 == 2 && __LIB_0__::func_692(Local_296.f_8)) && func_72(Local_296.f_8, 1))
			{
				func_17(2, 1);
			}
			else
			{
				if (iLocal_313 == 2)
				{
					if (!iLocal_234)
					{
						func_24(1, 0);
						func_25(&sLocal_451, &cLocal_457);
						if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_CPT", 7, 0, 0, 0))
						{
							iLocal_234 = 1;
						}
					}
					else if (iLocal_255)
					{
						if (!iLocal_238)
						{
							func_24(0, 0);
							if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_CSC", 7, 0, 0, 0))
							{
								iLocal_238 = 1;
							}
						}
						else if (!__LIB_0__::func_75() && !func_279("NULL"))
						{
							if (Local_297[0 /*14*/].f_9 == 22 || Local_297[0 /*14*/].f_9 == 23)
							{
								Local_297[0 /*14*/].f_9 = 24;
							}
						}
					}
					if (!func_352())
					{
						func_17(3, 1);
					}
				}
				if (func_333() || func_351())
				{
					func_17(5, 1);
				}
			}
			break;
		case 2:
			if (iLocal_313 == 2)
			{
				if (!iLocal_245)
				{
					if (!__LIB_14__::func_684(iLocal_291, 2000))
					{
						if (__LIB_14__::func_684(iLocal_291, 500))
						{
							func_24(0, 0);
							if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_PUP", 7, 0, 0, 0))
							{
								iLocal_245 = 1;
								iLocal_291 = 0;
							}
						}
					}
					else if ((iLocal_311 == 2 && __LIB_0__::func_692(Local_296.f_8)) && func_72(Local_296.f_8, 1))
					{
						if (!bLocal_228)
						{
							func_24(0, 0);
							if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_GIC", 7, 0, 0, 0))
							{
								iLocal_282 = MISC::GET_GAME_TIMER();
								bLocal_228 = true;
							}
						}
						else if (!bLocal_241)
						{
							if (!__LIB_0__::func_75() && !func_279("NULL"))
							{
								bLocal_241 = func_324(&uLocal_58, "NIG1BAU", "NIG1B_SPO", 7, 0, 0, 0);
								bLocal_241 = true;
							}
						}
						else if (!__LIB_0__::func_75() && !func_279("NULL"))
						{
							func_17(4, 1);
							return;
						}
					}
					else
					{
						func_17(3, 0);
						return;
					}
				}
				else if (!__LIB_0__::func_75() && !func_279("NULL"))
				{
					func_17(4, 1);
					return;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_282) > 10000)
			{
				func_17(4, 1);
				bLocal_228 = true;
				return;
			}
			if ((func_333() || func_351()) || func_350())
			{
				func_17(5, 1);
				return;
			}
			break;
		case 3:
			if (!iLocal_240)
			{
				if (bLocal_241)
				{
					iLocal_240 = 1;
				}
				else if (iLocal_313 == 2)
				{
					if (__LIB_0__::func_75())
					{
						func_24(0, 0);
					}
					else
					{
						if (iLocal_277 == 1)
						{
							sVar3 = "NIG1B_SPI_2";
						}
						else
						{
							sVar3 = "NIG1B_SPI_1";
						}
						if (func_348(&uLocal_58, "NIG1BAU", "NIG1B_SPI", sVar3, 7, 0, 0))
						{
							iLocal_240 = 1;
						}
					}
				}
			}
			else
			{
				func_64(0);
				if (iLocal_313 == 2)
				{
					if (!__LIB_14__::func_684(iLocal_291, 2000))
					{
						if (!iLocal_245)
						{
							if (__LIB_14__::func_684(iLocal_291, 500))
							{
								func_24(0, 0);
								if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_PUP", 7, 0, 0, 0))
								{
									iLocal_245 = 1;
									iLocal_291 = 0;
								}
							}
						}
					}
					else if (!bLocal_241)
					{
						if (!__LIB_0__::func_75() && !func_279("NULL"))
						{
							bLocal_241 = func_324(&uLocal_58, "NIG1BAU", "NIG1B_SPO", 7, 0, 0, 0);
						}
					}
					else if (!__LIB_0__::func_75() && !func_279("NULL"))
					{
						iLocal_282 = MISC::GET_GAME_TIMER();
						func_17(4, 1);
					}
				}
				else
				{
					iLocal_282 = MISC::GET_GAME_TIMER();
					func_17(4, 1);
				}
			}
			if (func_333() || func_351())
			{
				func_17(5, 1);
				return;
			}
			break;
		case 4:
			if (!iLocal_233)
			{
				if (iLocal_224)
				{
					if (iLocal_313 == 2)
					{
						func_24(0, 0);
						if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_CC", 7, 0, 0, 0))
						{
							iLocal_282 = MISC::GET_GAME_TIMER();
							iLocal_233 = 1;
						}
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_282) > 4000)
					{
						iLocal_282 = MISC::GET_GAME_TIMER();
						iLocal_233 = 1;
						iLocal_248 = 0;
					}
				}
			}
			else
			{
				if (!bLocal_259)
				{
					if (!func_322("NIG1B_CC", 1))
					{
						if (Local_297[0 /*14*/].f_9 == 28 || Local_297[0 /*14*/].f_9 == 29)
						{
							Local_297[0 /*14*/].f_9 = 30;
						}
						if (iLocal_54 == 0 || iLocal_54 == 1)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_282) > 500)
							{
								if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
								{
									bLocal_259 = true;
								}
								else
								{
									if (!func_347())
									{
										func_346();
									}
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
									iLocal_289 = MISC::GET_GAME_TIMER();
									bLocal_259 = true;
								}
							}
						}
					}
					else
					{
						iLocal_282 = MISC::GET_GAME_TIMER();
					}
				}
				else if (!iLocal_248)
				{
					if (iLocal_313 == 2)
					{
						if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_CC3", 7, 0, 0, 0))
						{
							iLocal_282 = MISC::GET_GAME_TIMER();
							iLocal_248 = 1;
						}
					}
				}
				else
				{
					if (!func_322(&Local_447, 1))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_297[0 /*14*/].f_8, PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RAGDOLL(Local_297[0 /*14*/].f_8))
						{
							if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_TBUMP", 7, 0, 0, 0))
							{
								StringCopy(&Local_447, "NIG1B_TBUMP", 24);
							}
						}
						else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_297[1 /*14*/].f_8, PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RAGDOLL(Local_297[1 /*14*/].f_8))
						{
							if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_GBUMP", 7, 0, 0, 0))
							{
								StringCopy(&Local_447, "NIG1B_GBUMP", 24);
							}
						}
					}
					if (__LIB_0__::func_75())
					{
						iLocal_289 = MISC::GET_GAME_TIMER();
					}
					else if (iLocal_313 == 2)
					{
						if (__LIB_14__::func_684(iLocal_289, 3000))
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) < 5)
							{
								if (__LIB_0__::func_692(Local_297[0 /*14*/].f_8))
								{
									if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_CC2", 7, 0, 0, 0))
									{
										iLocal_289 = MISC::GET_GAME_TIMER();
									}
								}
							}
							else if (func_345())
							{
								iLocal_289 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				if (Local_297[0 /*14*/].f_9 == 31)
				{
					Local_297[0 /*14*/].f_9 = 32;
				}
			}
			if ((func_333() || func_351()) || func_350())
			{
				if (iLocal_233 && !func_322("NIG1B_CC", 1))
				{
					bLocal_262 = false;
				}
				else
				{
					bLocal_262 = true;
				}
				func_17(5, 1);
				return;
			}
			break;
		case 5:
			func_64(0);
			if (iLocal_313 == 2)
			{
				if (!iLocal_242)
				{
					func_24(0, 0);
					if (bLocal_262)
					{
						StringCopy(&Local_443, "NIG1B_SCC", 24);
						if (func_324(&uLocal_58, "NIG1BAU", &Local_443, 7, 0, 0, 0))
						{
							iLocal_242 = 1;
						}
					}
					else if (func_303(1, 0, 0))
					{
						StringCopy(&Local_443, "NIG1B_SUR", 24);
						if (func_324(&uLocal_58, "NIG1BAU", &Local_443, 7, 0, 0, 0))
						{
							iLocal_242 = 1;
						}
					}
					else
					{
						StringCopy(&Local_443, "NIG1B_SNL", 24);
						if (func_324(&uLocal_58, "NIG1BAU", &Local_443, 7, 0, 0, 0))
						{
							iLocal_242 = 1;
						}
					}
					iLocal_279 = MISC::GET_GAME_TIMER();
				}
				else if (!func_322(&Local_443, 1))
				{
					if (!iLocal_245)
					{
						if (!__LIB_14__::func_684(iLocal_291, 2000))
						{
							if (__LIB_14__::func_684(iLocal_291, 500))
							{
								if (!__LIB_0__::func_75() && !func_279("NULL"))
								{
									if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_PUP", 7, 0, 0, 0))
									{
										iLocal_291 = 0;
										iLocal_245 = 1;
									}
								}
							}
						}
					}
					func_344();
				}
			}
			else
			{
				if (!bLocal_259)
				{
					if (!iLocal_246)
					{
						if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							bLocal_259 = true;
						}
						else if (__LIB_0__::func_692(Local_297[1 /*14*/].f_8) && __LIB_0__::func_725(Local_297[1 /*14*/].f_8, Local_468, 50f, 1))
						{
							if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_C1", 7, 0, 0, 0))
							{
								iLocal_282 = MISC::GET_GAME_TIMER();
								iLocal_246 = 1;
							}
						}
						else
						{
							iLocal_282 = MISC::GET_GAME_TIMER();
							iLocal_246 = 1;
						}
					}
					else if (!func_322("NIG1B_C1", 1))
					{
						if (iLocal_54 == 0 || iLocal_54 == 1)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_282) > 2000)
							{
								if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
								{
									bLocal_259 = true;
								}
								else
								{
									if (!func_347())
									{
										func_346();
									}
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
									bLocal_259 = true;
								}
							}
						}
					}
					else
					{
						iLocal_282 = MISC::GET_GAME_TIMER();
					}
				}
				if (iLocal_313 == 0)
				{
					if (__LIB_14__::func_684(iLocal_290, 5000))
					{
						func_17(6, 1);
					}
				}
				else
				{
					iLocal_290 = MISC::GET_GAME_TIMER();
				}
			}
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				if (__LIB_0__::func_121(Local_297[iVar0 /*14*/].f_8))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_297[iVar0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), true))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_297[iVar0 /*14*/].f_8);
						func_24(0, 0);
						if (iVar0 == 0)
						{
							if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_THIT", 7, 0, 0, 0))
							{
							}
							iLocal_294 = 0;
						}
						else if (iVar0 == 1)
						{
							if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_GHIT", 7, 0, 0, 0))
							{
							}
							iLocal_294 = 1;
						}
						func_17(6, 1);
						return;
					}
				}
				iVar0++;
			}
			break;
		case 6:
			if (__LIB_0__::func_75())
			{
				iLocal_288 = MISC::GET_GAME_TIMER();
			}
			else if (iLocal_294 != -1)
			{
				if (iLocal_294 == 0)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_297[0 /*14*/].f_8, false), Local_468) < (20f * 20f))
					{
						if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_PBU", 7, 0, 0, 0))
						{
							iLocal_294 = -1;
						}
					}
					else
					{
						iLocal_294 = -1;
					}
				}
				else if (iLocal_294 == 1)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_297[1 /*14*/].f_8, false), Local_468) < (20f * 20f))
					{
						if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_BEAT", 7, 0, 0, 0))
						{
							iLocal_294 = -1;
						}
					}
					else
					{
						iLocal_294 = -1;
					}
				}
				else
				{
					iLocal_294 = -1;
				}
			}
			else if (__LIB_14__::func_684(iLocal_288, 3000))
			{
				iVar4 = func_343(Local_468, 20f);
				if (iVar4 != -1)
				{
					if (iVar4 == 0)
					{
						StringCopy(&Var5, "NIG1B_CF1", 24);
					}
					else if (iVar4 == 1)
					{
						StringCopy(&Var5, "NIG1B_CF2", 24);
					}
					if (func_324(&uLocal_58, "NIG1BAU", &Var5, 7, 0, 0, 0))
					{
						iLocal_288 = MISC::GET_GAME_TIMER();
					}
				}
			}
			if (!bLocal_259)
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					bLocal_259 = true;
				}
				else if (!iLocal_246)
				{
					iLocal_282 = MISC::GET_GAME_TIMER();
					iLocal_246 = 1;
				}
				else if (iLocal_54 == 0 || iLocal_54 == 1)
				{
					if (__LIB_14__::func_684(iLocal_282, 8000))
					{
						if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							bLocal_259 = true;
						}
						else
						{
							if (!func_347())
							{
								func_346();
							}
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							bLocal_259 = true;
						}
					}
				}
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		func_336(iVar0);
		iVar0++;
	}
}

void func_336(int iParam0)//Position - 0x2BAA0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	float fVar11;
	char[] cVar12[8];
	struct<3> Var13;
	struct<3> Var14;
	float fVar15;
	struct<3> Var16;
	float fVar17;
	if (__LIB_0__::func_692(Local_297[iParam0 /*14*/].f_8))
	{
		PED::SET_PED_RESET_FLAG(Local_297[iParam0 /*14*/].f_8, 187, true);
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			switch (Local_297[iParam0 /*14*/].f_9)
			{
				case 0:
					if (iParam0 == 0)
					{
						if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_STAND_STILL")))
						{
							TASK::TASK_STAND_STILL(Local_297[iParam0 /*14*/].f_8, -1);
						}
					}
					break;
				case 1:
					if (iParam0 == 0)
					{
						if (iLocal_275 == 1)
						{
							iVar0 = 0;
						}
						else if (iLocal_275 == 0)
						{
							iVar0 = 1;
						}
						TASK::OPEN_SEQUENCE_TASK(&iLocal_318);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_464[iVar0 /*3*/], 2f, 20000, fLocal_268[iVar0], 0.5f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_318);
						TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
						TASK::TASK_PERFORM_SEQUENCE(Local_297[iParam0 /*14*/].f_8, iLocal_318);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_318);
						Local_297[iParam0 /*14*/].f_9 = 2;
					}
					break;
				case 2:
					if (iParam0 == 0)
					{
						if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
						{
							Local_297[iParam0 /*14*/].f_9 = 3;
						}
					}
					break;
				case 3:
					if (iParam0 == 0)
					{
						if (iLocal_275 == 1)
						{
							iVar1 = 1;
						}
						else if (iLocal_275 == 0)
						{
							iVar1 = 0;
						}
						TASK::OPEN_SEQUENCE_TASK(&iLocal_318);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_464[iVar1 /*3*/], 2f, 20000, fLocal_268[iVar1], 0.5f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_318);
						TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
						TASK::TASK_PERFORM_SEQUENCE(Local_297[iParam0 /*14*/].f_8, iLocal_318);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_318);
						Local_297[iParam0 /*14*/].f_9 = 4;
					}
					break;
				case 4:
					if (iParam0 == 0)
					{
						if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
						{
							Local_297[iParam0 /*14*/].f_9 = 5;
						}
					}
					break;
				case 5:
					if (iParam0 == 0)
					{
					}
					break;
				case 6:
					if (iParam0 == 0)
					{
						if (__LIB_0__::func_121(Local_297[1 /*14*/].f_8))
						{
							if (iLocal_275 == 1)
							{
								iVar2 = 0;
							}
							else if (iLocal_275 == 0)
							{
								iVar2 = 1;
							}
							TASK::OPEN_SEQUENCE_TASK(&iLocal_318);
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_464[iVar2 /*3*/], 2f, 20000, 40000f, 0.5f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_318);
							TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
							TASK::TASK_PERFORM_SEQUENCE(Local_297[iParam0 /*14*/].f_8, iLocal_318);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_318);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, true);
							Local_297[iParam0 /*14*/].f_9 = 7;
						}
					}
					break;
				case 7:
					if (iParam0 == 0)
					{
						if (iLocal_275 == 1)
						{
							iVar3 = 0;
						}
						else if (iLocal_275 == 0)
						{
							iVar3 = 1;
						}
						if (__LIB_0__::func_121(Local_297[1 /*14*/].f_8))
						{
							if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								if (__LIB_0__::func_725(Local_297[iParam0 /*14*/].f_8, Local_464[iVar3 /*3*/], 2.5f, 1))
								{
									Local_297[iParam0 /*14*/].f_9 = 8;
								}
								else
								{
									Local_297[iParam0 /*14*/].f_9 = 6;
								}
							}
						}
					}
					break;
				case 8:
					if (iParam0 == 0)
					{
						if (iLocal_275 == 1)
						{
							iVar4 = 0;
						}
						else if (iLocal_275 == 0)
						{
							iVar4 = 1;
						}
						TASK::OPEN_SEQUENCE_TASK(&iLocal_318);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_469[iVar4 /*3*/], 1f, 20000, fLocal_270[iVar4], 0.5f);
						TASK::TASK_CLIMB(0, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_318);
						TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
						TASK::TASK_PERFORM_SEQUENCE(Local_297[iParam0 /*14*/].f_8, iLocal_318);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_318);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, true);
						Local_297[iParam0 /*14*/].f_9 = 9;
					}
					break;
				case 9:
					if (iParam0 == 0)
					{
						if (iLocal_275 == 1)
						{
							iVar5 = 0;
						}
						else if (iLocal_275 == 0)
						{
							iVar5 = 1;
						}
						if (__LIB_0__::func_725(Local_297[iParam0 /*14*/].f_8, Local_470[iVar5 /*3*/], fLocal_271, 1))
						{
							if (__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_297[iParam0 /*14*/].f_8);
								Local_297[iParam0 /*14*/].f_9 = 10;
							}
						}
						else if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
						{
							if (((!ENTITY::IS_ENTITY_IN_WATER(Local_297[iParam0 /*14*/].f_8) && !__LIB_0__::func_725(Local_297[iParam0 /*14*/].f_8, Local_472, fLocal_272, 1)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, Local_473, Local_474, fLocal_273, false, true, 0)) && !PED::IS_PED_CLIMBING(Local_297[iParam0 /*14*/].f_8))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_297[iParam0 /*14*/].f_8);
								Local_297[iParam0 /*14*/].f_9 = 10;
							}
							else
							{
								Local_297[iParam0 /*14*/].f_9 = 8;
							}
						}
					}
					break;
				case 10:
					break;
				case 11:
					if (iParam0 == 0)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_318);
						TASK::TASK_PLAY_ANIM(0, &cLocal_434, "that_had_to_be_tyler", 4f, -4f, -1, 0, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_318);
						TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
						TASK::TASK_PERFORM_SEQUENCE(Local_297[iParam0 /*14*/].f_8, iLocal_318);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_318);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, true);
						PED::SET_PED_RESET_FLAG(Local_297[iParam0 /*14*/].f_8, 206, true);
						Local_297[iParam0 /*14*/].f_9 = 12;
					}
					break;
				case 12:
					if (iParam0 == 0)
					{
						if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
						{
							Local_297[iParam0 /*14*/].f_9 = 13;
						}
						else
						{
							PED::SET_PED_RESET_FLAG(Local_297[iParam0 /*14*/].f_8, 206, true);
						}
					}
					break;
				case 13:
					break;
				case 14:
					if (iParam0 == 0)
					{
						if (iLocal_275 == 1)
						{
							iVar6 = 0;
						}
						else if (iLocal_275 == 0)
						{
							iVar6 = 1;
						}
						Var7 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&cLocal_434, "ENTER", Local_486, Local_487, 0f, 2) };
						Var8 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&cLocal_434, "ENTER", Local_486, Local_487, 0f, 2) };
						TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_297[iParam0 /*14*/].f_8, true);
						TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_297[iParam0 /*14*/].f_8, false);
						PED::SET_PED_ALTERNATE_WALK_ANIM(Local_297[iParam0 /*14*/].f_8, &cLocal_434, "walk_tyler", 8f, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_318);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_471[iVar6 /*3*/], 1f, 20000, 0.25f, 1, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var7, 1f, 20000, 0.25f, 512, Var8.f_2);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_318);
						TASK::TASK_PERFORM_SEQUENCE(Local_297[iParam0 /*14*/].f_8, iLocal_318);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_318);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, true);
						Local_297[iParam0 /*14*/].f_9 = 15;
					}
					break;
				case 15:
					if (iParam0 == 0)
					{
						if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
						{
							Var9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&cLocal_434, "ENTER", Local_486, Local_487, 0f, 2) };
							if (__LIB_0__::func_725(Local_297[iParam0 /*14*/].f_8, Var9, 1f, 1))
							{
								PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_297[iParam0 /*14*/].f_8, -8f);
								Local_297[iParam0 /*14*/].f_9 = 16;
							}
							else
							{
								Local_297[iParam0 /*14*/].f_9 = 14;
							}
						}
					}
					break;
				case 16:
					if (iParam0 == 0)
					{
						func_339(1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, true);
						Local_297[iParam0 /*14*/].f_9 = 18;
					}
					break;
				case 17:
					if (iParam0 == 0)
					{
						if (__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_PLAY_ANIM")))
						{
							Local_297[iParam0 /*14*/].f_9 = 18;
						}
						else
						{
							Local_297[iParam0 /*14*/].f_9 = 16;
						}
					}
					break;
				case 18:
					if (iParam0 == 0)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[1]))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293[1]) > 0.999f)
							{
								func_339(2);
								Local_297[iParam0 /*14*/].f_9 = 19;
								Local_297[1 /*14*/].f_9 = 20;
							}
						}
						else
						{
							func_339(2);
							Local_297[iParam0 /*14*/].f_9 = 19;
							Local_297[1 /*14*/].f_9 = 20;
						}
					}
					break;
				case 19:
					if (iParam0 == 0)
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[3]))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[2]))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293[2]) > 0.999f)
								{
									func_339(3);
								}
							}
							else
							{
								func_339(3);
							}
						}
					}
					break;
				case 20:
					break;
				case 21:
					break;
				case 22:
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[3]) && !__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_318);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_471[0 /*3*/], 1f, 20000, 0.25f, 1, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_463, 1f, 20000, 0.25f, 0, 223.4962f);
						TASK::TASK_PLAY_ANIM(0, "rcmnigel1b", "wipehead", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_STAND_STILL(0, -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_318);
						TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
						TASK::TASK_PERFORM_SEQUENCE(Local_297[iParam0 /*14*/].f_8, iLocal_318);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_318);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, true);
						Local_297[iParam0 /*14*/].f_9 = 23;
					}
					break;
				case 23:
					if (__LIB_0__::func_725(Local_297[iParam0 /*14*/].f_8, Local_463, 1.25f, 1))
					{
						iLocal_255 = 1;
					}
					else if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						Local_297[iParam0 /*14*/].f_9 = 22;
					}
					break;
				case 24:
					TASK::OPEN_SEQUENCE_TASK(&iLocal_318);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1049.9147f, 357.2381f, 68.9132f, 1f, 20000, 0.25f, 0, 71.1227f);
					TASK::TASK_STAND_STILL(0, 1000);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1048.4167f, 364.7032f, 68.9129f, 1f, 20000, 0.25f, 0, 6.9753f);
					TASK::TASK_STAND_STILL(0, 2000);
					TASK::SET_SEQUENCE_TO_REPEAT(iLocal_318, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_318);
					TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
					TASK::TASK_PERFORM_SEQUENCE(Local_297[iParam0 /*14*/].f_8, iLocal_318);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_318);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, true);
					Local_297[iParam0 /*14*/].f_9 = 25;
					break;
				case 25:
					if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						Local_297[iParam0 /*14*/].f_9 = 24;
					}
					break;
				case 26:
					if ((ENTITY::IS_ENTITY_IN_WATER(Local_297[iParam0 /*14*/].f_8) || __LIB_0__::func_725(Local_297[iParam0 /*14*/].f_8, Local_472, fLocal_272, 1)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, Local_473, Local_474, fLocal_273, false, true, 0))
					{
						TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
						Var10 = { Local_471[0 /*3*/] };
						fVar11 = 201.7237f;
						if (__LIB_1__::func_504(Local_468, Var10, 2.5f))
						{
							Var10 = { Local_471[1 /*3*/] };
							fVar11 = 325.0476f;
						}
						TASK::TASK_LOOK_AT_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_297[iParam0 /*14*/].f_8, Var10, 1f, 20000, 0.25f, 0, fVar11);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, true);
						Local_297[iParam0 /*14*/].f_9 = 27;
					}
					else
					{
						Local_297[iParam0 /*14*/].f_9 = 28;
					}
					break;
				case 27:
					if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
					{
						Local_297[iParam0 /*14*/].f_9 = 26;
					}
					else if (!ENTITY::IS_ENTITY_IN_WATER(Local_297[iParam0 /*14*/].f_8))
					{
						if (!__LIB_0__::func_725(Local_297[iParam0 /*14*/].f_8, Local_472, fLocal_272, 1))
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, Local_473, Local_474, fLocal_273, false, true, 0))
							{
								if (!PED::IS_PED_CLIMBING(Local_297[iParam0 /*14*/].f_8))
								{
									if (!__LIB_0__::func_725(Local_297[iParam0 /*14*/].f_8, -1057.1364f, 369.17224f, 69.18319f, 1.25f, 1))
									{
										if (!__LIB_0__::func_725(Local_297[iParam0 /*14*/].f_8, -1057.1082f, 354.7688f, 69.19383f, 1.25f, 1))
										{
											if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, -1051.3397f, 358.40454f, 66.91455f, -1051.3618f, 365.51062f, 71.91416f, 2.25f, false, true, 0))
											{
												TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
												Local_297[iParam0 /*14*/].f_9 = 28;
											}
										}
									}
								}
							}
						}
					}
					break;
				case 28:
					if (!__LIB_0__::func_121(Local_301.f_0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_301.f_0))
						{
							OBJECT::DELETE_OBJECT(&Local_301);
						}
						STREAMING::REQUEST_MODEL(Local_301.f_1);
						if (STREAMING::HAS_MODEL_LOADED(Local_301.f_1))
						{
							Local_301.f_0 = OBJECT::CREATE_OBJECT(Local_301.f_1, ENTITY::GET_ENTITY_COORDS(Local_297[iParam0 /*14*/].f_8, true) + Vector(-10f, 0f, 0f), true, true, false);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_301.f_1);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_301.f_0, Local_297[iParam0 /*14*/].f_8))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_301.f_0, Local_297[iParam0 /*14*/].f_8, PED::GET_PED_BONE_INDEX(Local_297[iParam0 /*14*/].f_8, 28422), Local_301.f_2, Local_301.f_5, true, true, false, false, 2, true, 0);
						}
						TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
						TASK::TASK_LOOK_AT_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 768, 2);
						TASK::TASK_USE_MOBILE_PHONE(Local_297[iParam0 /*14*/].f_8, true, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, true);
						iLocal_280 = MISC::GET_GAME_TIMER();
						Local_297[iParam0 /*14*/].f_9 = 29;
					}
					break;
				case 29:
					if (PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(Local_297[iParam0 /*14*/].f_8))
					{
						if (!PED::IS_PED_HEADTRACKING_PED(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 768, 2);
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_280) > 1500)
						{
							iLocal_224 = 1;
						}
					}
					else
					{
						iLocal_224 = 0;
						Local_297[iParam0 /*14*/].f_9 = 28;
					}
					break;
				case 30:
					if (PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(Local_297[iParam0 /*14*/].f_8))
					{
						TASK::TASK_USE_MOBILE_PHONE(Local_297[iParam0 /*14*/].f_8, false, 1);
						TASK::TASK_LOOK_AT_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, true);
					}
					else
					{
						__LIB_14__::func_727(&Local_301, 1);
						TASK::TASK_LOOK_AT_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						Local_297[iParam0 /*14*/].f_9 = 31;
					}
					break;
				case 31:
					break;
				case 32:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_297[iParam0 /*14*/].f_8, "rcmnigel1b", "wipehead", 3))
					{
						TASK::STOP_ANIM_TASK(Local_297[iParam0 /*14*/].f_8, "rcmnigel1b", "wipehead", -4f);
					}
					if (iParam0 == 0)
					{
						PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_297[iParam0 /*14*/].f_8, -8f);
						TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
						TASK::TASK_LOOK_AT_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, true);
						Local_297[iParam0 /*14*/].f_11 = MISC::GET_GAME_TIMER();
						Local_297[iParam0 /*14*/].f_9 = 33;
					}
					else if (iParam0 == 1)
					{
						if (func_338())
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, true);
							Local_297[iParam0 /*14*/].f_11 = MISC::GET_GAME_TIMER();
							Local_297[iParam0 /*14*/].f_9 = 33;
						}
					}
					break;
				case 33:
					if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_PLAY_ANIM")))
					{
						if (!PED::IS_PED_FACING_PED(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), 45f))
						{
							if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
							{
								Local_297[iParam0 /*14*/].f_9 = 32;
							}
						}
						else if ((__LIB_14__::func_684(Local_297[iParam0 /*14*/].f_11, MISC::GET_RANDOM_INT_IN_RANGE(750, 3000)) && !ENTITY::IS_ENTITY_IN_WATER(Local_297[iParam0 /*14*/].f_8)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, Local_473, Local_474, fLocal_273, false, true, 0))
						{
							if (iParam0 == 1)
							{
								cVar12 = "react_small_variations_k";
							}
							else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5)
							{
								cVar12 = "react_small_variations_m";
							}
							else
							{
								cVar12 = "react_small_variations_n";
							}
							if (func_305(&(Local_297[iParam0 /*14*/].f_8), cVar12, 4f, -4f, -1, 0, 0, 0, 0))
							{
								Local_297[iParam0 /*14*/].f_11 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else
					{
						if (!PED::IS_PED_FACING_PED(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), 170f))
						{
							TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
						}
						Local_297[iParam0 /*14*/].f_11 = MISC::GET_GAME_TIMER();
					}
					if (iParam0 == 1)
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), true))
						{
							Local_297[iParam0 /*14*/].f_9 = 42;
						}
					}
					break;
				case 36:
					if (__LIB_0__::func_121(Local_296.f_8) && iLocal_314 == 2)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_297[iParam0 /*14*/].f_8, "rcmnigel1b", "wipehead", 3))
						{
							TASK::STOP_ANIM_TASK(Local_297[iParam0 /*14*/].f_8, "rcmnigel1b", "wipehead", -4f);
						}
						if (iParam0 == 0)
						{
							PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_297[iParam0 /*14*/].f_8, -8f);
						}
						TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
						TASK::TASK_LOOK_AT_ENTITY(Local_297[iParam0 /*14*/].f_8, Local_296.f_8, -1, 0, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_297[iParam0 /*14*/].f_8, Local_296.f_8, -1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, true);
						Local_297[iParam0 /*14*/].f_9 = 37;
					}
					else
					{
						Local_297[iParam0 /*14*/].f_9 = 32;
					}
					break;
				case 37:
					if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
					{
						Local_297[iParam0 /*14*/].f_9 = 36;
					}
					if (!__LIB_0__::func_121(Local_296.f_8) || iLocal_314 != 2)
					{
						Local_297[iParam0 /*14*/].f_9 = 32;
					}
					if (iParam0 == 1)
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), true))
						{
							Local_297[iParam0 /*14*/].f_9 = 42;
						}
					}
					break;
				case 40:
					TASK::OPEN_SEQUENCE_TASK(&iLocal_318);
					if (ENTITY::IS_ENTITY_IN_WATER(Local_297[iParam0 /*14*/].f_8))
					{
						Var13 = { ENTITY::GET_ENTITY_COORDS(Local_297[iParam0 /*14*/].f_8, true) };
						if (PATHFIND::GET_SAFE_COORD_FOR_PED(Var13, true, &Var13, 0))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var13, 2f, 20000, 0.25f, 0, 40000f);
						}
					}
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_318);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_297[iParam0 /*14*/].f_8);
					TASK::TASK_PERFORM_SEQUENCE(Local_297[iParam0 /*14*/].f_8, iLocal_318);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_318);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, true);
					Local_297[iParam0 /*14*/].f_9 = 41;
					break;
				case 41:
					if (ENTITY::GET_ENTITY_HEALTH(Local_297[iParam0 /*14*/].f_8) < 180)
					{
						Local_297[iParam0 /*14*/].f_9 = 42;
					}
					else if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
					}
					else if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						Local_297[iParam0 /*14*/].f_9 = 40;
					}
					break;
				case 42:
					if (iParam0 == 0)
					{
						if (__LIB_0__::func_121(Local_301.f_0))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_301.f_0, Local_297[iParam0 /*14*/].f_8))
							{
								ENTITY::DETACH_ENTITY(Local_301.f_0, true, true);
							}
							__LIB_14__::func_727(&Local_301, 0);
						}
					}
					PED::SET_PED_CAN_RAGDOLL(Local_297[iParam0 /*14*/].f_8, true);
					if (!PED::IS_PED_RAGDOLL(Local_297[iParam0 /*14*/].f_8))
					{
						TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
						PED::SET_PED_TO_RAGDOLL(Local_297[iParam0 /*14*/].f_8, 1000, 1000, 0, true, true, false);
					}
					Local_297[iParam0 /*14*/].f_9 = 43;
					break;
				case 43:
					if (!PED::IS_PED_RAGDOLL(Local_297[iParam0 /*14*/].f_8))
					{
						if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_COWER")) && !__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_HANDS_UP")))
						{
							if ((ENTITY::IS_ENTITY_IN_WATER(Local_297[iParam0 /*14*/].f_8) || __LIB_0__::func_725(Local_297[iParam0 /*14*/].f_8, Local_472, fLocal_272, 1)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, Local_473, Local_474, fLocal_273, false, true, 0))
							{
								if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
								{
									TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
									Var14 = { Local_471[0 /*3*/] };
									fVar15 = 201.7237f;
									if (__LIB_1__::func_504(Local_468, Var14, 1.5f))
									{
										Var14 = { Local_471[1 /*3*/] };
										fVar15 = 325.0476f;
									}
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_297[iParam0 /*14*/].f_8, Var14, 1f, 20000, 0.25f, 0, fVar15);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, true);
								}
							}
							else
							{
								PED::SET_PED_COWER_HASH(Local_297[iParam0 /*14*/].f_8, "CODE_HUMAN_STAND_COWER");
								TASK::TASK_COWER(Local_297[iParam0 /*14*/].f_8, -1);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, true);
						}
					}
					break;
				case 44:
					AUDIO::STOP_PED_SPEAKING(Local_297[iParam0 /*14*/].f_8, false);
					if (iParam0 == 0)
					{
						if (__LIB_0__::func_121(Local_301.f_0))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_301.f_0, Local_297[iParam0 /*14*/].f_8))
							{
								ENTITY::DETACH_ENTITY(Local_301.f_0, true, true);
							}
							__LIB_14__::func_727(&Local_301, 0);
						}
						PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_297[iParam0 /*14*/].f_8, -8f);
					}
					if (func_337(iParam0))
					{
						if ((!PED::IS_PED_RAGDOLL(Local_297[iParam0 /*14*/].f_8) && !TASK::IS_PED_GETTING_UP(Local_297[iParam0 /*14*/].f_8)) && !PED::IS_PED_CLIMBING(Local_297[iParam0 /*14*/].f_8))
						{
							if ((((ENTITY::IS_ENTITY_IN_WATER(Local_297[iParam0 /*14*/].f_8) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, Local_473, Local_474, fLocal_273, false, true, 0)) || __LIB_0__::func_725(Local_297[iParam0 /*14*/].f_8, -1057.1364f, 369.17224f, 69.18319f, 1.25f, 1)) || __LIB_0__::func_725(Local_297[iParam0 /*14*/].f_8, -1057.1082f, 354.7688f, 69.19383f, 1.25f, 1)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, -1051.3397f, 358.40454f, 66.91455f, -1051.3618f, 365.51062f, 71.91416f, 2.25f, false, true, 0))
							{
								if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
								{
									TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
									Var16 = { Local_471[0 /*3*/] };
									fVar17 = 201.7237f;
									if (__LIB_1__::func_504(Local_468, Var16, 1.5f))
									{
										Var16 = { Local_471[1 /*3*/] };
										fVar17 = 325.0476f;
									}
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_297[iParam0 /*14*/].f_8, Var16, 1f, 20000, 0.25f, 0, fVar17);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, true);
								}
							}
							else
							{
								TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
								TASK::TASK_LOOK_AT_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								TASK::TASK_HANDS_UP(Local_297[iParam0 /*14*/].f_8, -1, PLAYER::PLAYER_PED_ID(), -1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, true);
								Local_297[iParam0 /*14*/].f_9 = 45;
							}
						}
					}
					break;
				case 45:
					if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
					{
						if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_HANDS_UP")))
						{
							Local_297[iParam0 /*14*/].f_9 = 44;
						}
						else if (ENTITY::IS_ENTITY_IN_WATER(Local_297[iParam0 /*14*/].f_8) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, Local_473, Local_474, fLocal_273, false, true, 0))
						{
							Local_297[iParam0 /*14*/].f_9 = 44;
						}
					}
					else if (!ENTITY::IS_ENTITY_IN_WATER(Local_297[iParam0 /*14*/].f_8) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, Local_473, Local_474, fLocal_273, false, true, 0))
					{
						if (!__LIB_0__::func_725(Local_297[iParam0 /*14*/].f_8, -1057.1364f, 369.17224f, 69.18319f, 1.25f, 1))
						{
							if (!__LIB_0__::func_725(Local_297[iParam0 /*14*/].f_8, -1057.1082f, 354.7688f, 69.19383f, 1.25f, 1))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, -1051.3397f, 358.40454f, 66.91455f, -1051.3618f, 365.51062f, 71.91416f, 2.25f, false, true, 0))
								{
									Local_297[iParam0 /*14*/].f_9 = 44;
								}
							}
						}
					}
					break;
				case 46:
					if ((((ENTITY::IS_ENTITY_IN_WATER(Local_297[iParam0 /*14*/].f_8) || __LIB_0__::func_725(Local_297[iParam0 /*14*/].f_8, Local_472, fLocal_272, 1)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, Local_473, Local_474, fLocal_273, false, true, 0)) || PED::IS_PED_CLIMBING(Local_297[iParam0 /*14*/].f_8)) || PED::IS_PED_RAGDOLL(Local_297[iParam0 /*14*/].f_8))
					{
						Local_297[iParam0 /*14*/].f_9 = 44;
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
						PED::SET_PED_COWER_HASH(Local_297[iParam0 /*14*/].f_8, "CODE_HUMAN_STAND_COWER");
						TASK::TASK_COWER(Local_297[iParam0 /*14*/].f_8, -1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, true);
						Local_297[iParam0 /*14*/].f_9 = 47;
					}
					break;
				case 47:
					if (!PED::IS_PED_RAGDOLL(Local_297[iParam0 /*14*/].f_8))
					{
						if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_COWER")))
						{
							Local_297[iParam0 /*14*/].f_9 = 46;
						}
						else if (ENTITY::IS_ENTITY_IN_WATER(Local_297[iParam0 /*14*/].f_8))
						{
							Local_297[iParam0 /*14*/].f_9 = 44;
						}
					}
					break;
				case 48:
					if (func_337(iParam0))
					{
						if ((!PED::IS_PED_RAGDOLL(Local_297[iParam0 /*14*/].f_8) && !PED::IS_PED_SWIMMING(Local_297[iParam0 /*14*/].f_8)) && !PED::IS_PED_CLIMBING(Local_297[iParam0 /*14*/].f_8))
						{
							AUDIO::STOP_PED_SPEAKING(Local_297[iParam0 /*14*/].f_8, false);
							if (iParam0 == 0)
							{
								PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_297[iParam0 /*14*/].f_8, -8f);
							}
							PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 64, false);
							PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 128, false);
							PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 2, false);
							PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 8, true);
							PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 1, false);
							PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 32, false);
							PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 4, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 5, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 17, true);
							TASK::TASK_REACT_AND_FLEE_PED(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID());
							Local_297[iParam0 /*14*/].f_9 = 50;
						}
						else
						{
							Local_297[iParam0 /*14*/].f_9 = 49;
						}
					}
					else
					{
						Local_297[iParam0 /*14*/].f_9 = 49;
					}
					break;
				case 49:
					AUDIO::STOP_PED_SPEAKING(Local_297[iParam0 /*14*/].f_8, false);
					if (iParam0 == 0)
					{
						PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_297[iParam0 /*14*/].f_8, -8f);
					}
					PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 64, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 128, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 2, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 8, true);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 1, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 32, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 4, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 5, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 17, true);
					if (func_337(iParam0))
					{
						TASK::TASK_SMART_FLEE_PED(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), 150f, -1, true, false);
						Local_297[iParam0 /*14*/].f_9 = 50;
					}
					break;
				case 50:
					if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_SMART_FLEE_PED")) && !__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_REACT_AND_FLEE_PED")))
					{
						Local_297[iParam0 /*14*/].f_9 = 49;
					}
					break;
				default:
					break;
				}
		}
		if ((Local_297[iParam0 /*14*/].f_9 == 49 || Local_297[iParam0 /*14*/].f_9 == 48) || Local_297[iParam0 /*14*/].f_9 == 50)
		{
			__LIB_0__::func_621(&(Local_297[iParam0 /*14*/]));
		}
		else if (iLocal_54 == 0)
		{
			__LIB_0__::func_631(Local_297[iParam0 /*14*/].f_8, &(Local_297[iParam0 /*14*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
		}
		else if (iLocal_314 == 0 || iLocal_314 == 1)
		{
			if (iLocal_313 == 0 && !__LIB_0__::func_725(Local_297[iParam0 /*14*/].f_8, Local_468, 35f, 1))
			{
				__LIB_0__::func_621(&(Local_297[iParam0 /*14*/]));
			}
			else
			{
				__LIB_0__::func_631(Local_297[iParam0 /*14*/].f_8, &(Local_297[iParam0 /*14*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
			}
		}
		else
		{
			__LIB_0__::func_631(Local_297[iParam0 /*14*/].f_8, &(Local_297[iParam0 /*14*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
		}
	}
	else
	{
		if (Local_297[iParam0 /*14*/].f_9 != 51)
		{
			if (iParam0 == 0)
			{
				if (!BitTest(Global_113386.f_18574.f_382, 3))
				{
					MISC::SET_BIT(&(Global_113386.f_18574.f_382), 3);
				}
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2.5f, 2f, 0);
			}
			Local_297[iParam0 /*14*/].f_9 = 51;
		}
		__LIB_0__::func_621(&(Local_297[iParam0 /*14*/]));
	}
}

int func_337(int iParam0)//Position - 0x2D79E
{
	if (iParam0 == 0)
	{
		if (__LIB_0__::func_692(Local_297[0 /*14*/].f_8))
		{
			if (!iLocal_264[0])
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[1]))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293[1]) > 0.55f)
					{
						func_339(4);
					}
					else
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_297[0 /*14*/].f_8, -4f, true);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_293[1], 1f);
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[3]) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[2]))
				{
					func_339(4);
				}
				iLocal_264[0] = 1;
			}
			else if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[4]))
			{
				if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
				{
					return 1;
				}
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (__LIB_0__::func_692(Local_297[1 /*14*/].f_8))
		{
			if (!iLocal_264[1])
			{
				if (__LIB_6__::func_572(Local_297[1 /*14*/].f_8, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
				{
					func_339(5);
				}
				iLocal_264[1] = 1;
			}
			else if (func_338())
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[4]) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[6]))
				{
					if (!__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_338()//Position - 0x2D8E7
{
	if (__LIB_0__::func_692(Local_297[1 /*14*/].f_8))
	{
		if (!iLocal_265)
		{
			if (__LIB_6__::func_572(Local_297[1 /*14*/].f_8, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[5]))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293[5]) > 0.98f)
					{
						func_339(6);
						iLocal_265 = 1;
					}
				}
				else
				{
					func_339(6);
					iLocal_265 = 1;
				}
			}
			else
			{
				iLocal_265 = 1;
			}
		}
		else if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[6]))
		{
			if (!__LIB_6__::func_572(Local_297[1 /*14*/].f_8, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_339(int iParam0)//Position - 0x2D980
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[iParam0]))
	{
		return;
	}
	bVar1 = false;
	bVar2 = false;
	fVar3 = 8f;
	switch (iParam0)
	{
		case 0:
			bVar1 = true;
			bVar2 = false;
			break;
		case 1:
			bVar1 = false;
			bVar2 = false;
			fVar3 = 4f;
			break;
		case 2:
			bVar1 = false;
			bVar2 = false;
			fVar3 = 4f;
			break;
		case 3:
			bVar1 = true;
			bVar2 = false;
			break;
		case 4:
			bVar1 = false;
			bVar2 = false;
			fVar3 = 4f;
			break;
		case 5:
			bVar1 = false;
			bVar2 = false;
			fVar3 = 4f;
			break;
		case 6:
			bVar1 = false;
			bVar2 = false;
			fVar3 = 4f;
			break;
		default:
			break;
	}
	iLocal_293[iParam0] = PED::CREATE_SYNCHRONIZED_SCENE(Local_486, Local_487, 2);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_293[iParam0], bVar1);
	PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_293[iParam0], bVar2);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if ((iParam0 == 0 || iParam0 == 5) || iParam0 == 6)
		{
			if (iVar0 == 1)
			{
				func_340(iVar0, iLocal_293[iParam0], iParam0, fVar3);
			}
		}
		else if (iParam0 == 1 || iParam0 == 4)
		{
			if (iVar0 == 0)
			{
				func_340(iVar0, iLocal_293[iParam0], iParam0, fVar3);
			}
		}
		else
		{
			func_340(iVar0, iLocal_293[iParam0], iParam0, fVar3);
		}
		iVar0++;
	}
}

void func_340(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x2DADB
{
	struct<6> Var0;
	char* sVar1;
	if (__LIB_0__::func_692(Local_297[iParam0 /*14*/].f_8))
	{
		Var0 = { func_342(iParam0, iParam2) };
		sVar1 = __LIB_1__::func_601(&Var0);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_297[iParam0 /*14*/].f_8, &cLocal_434, sVar1, 3))
		{
		}
		else
		{
			if (__LIB_6__::func_572(Local_297[iParam0 /*14*/].f_8, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_297[iParam0 /*14*/].f_8, -8f, false);
			}
			TASK::TASK_SYNCHRONIZED_SCENE(Local_297[iParam0 /*14*/].f_8, iParam1, &cLocal_434, sVar1, fParam3, -8f, 17, 0, 1000f, 0);
			if (bLocal_252)
			{
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_297[iParam0 /*14*/].f_8, false, false);
			}
		}
	}
}

struct<6> func_342(int iParam0, int iParam1)//Position - 0x2DB8C
{
	struct<6> Var0;
	char cVar1[24];
	StringCopy(&Var0, "", 24);
	switch (iParam1)
	{
		case 0:
			StringCopy(&Var0, "BASE_", 24);
			break;
		case 1:
			StringCopy(&Var0, "ENTER", 24);
			break;
		case 2:
			StringCopy(&Var0, "DANCE_INTRO_", 24);
			break;
		case 3:
			StringCopy(&Var0, "DANCE_LOOP_", 24);
			break;
		case 4:
		case 5:
			StringCopy(&Var0, "REACT_", 24);
			break;
		case 6:
			StringCopy(&Var0, "OUTRO_", 24);
			break;
		default:
			break;
	}
	StringCopy(&cVar1, "", 24);
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar1, "TYLER", 24);
			break;
		case 1:
			StringCopy(&cVar1, "GIRL", 24);
			break;
		default:
			break;
	}
	StringConCat(&Var0, &cVar1, 24);
	if (iParam1 == 1)
	{
		StringCopy(&Var0, "ENTER", 24);
	}
	return Var0;
}

int func_343(struct<3> Param0, float fParam1)//Position - 0x2DC5A
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	if (__LIB_0__::func_692(Local_297[iVar0 /*14*/].f_8))
	{
		if (fParam1 == -1f)
		{
			return iVar0;
		}
		else if (__LIB_0__::func_725(Local_297[iVar0 /*14*/].f_8, Param0, fParam1, 1))
		{
			return iVar0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (__LIB_0__::func_692(Local_297[iVar0 /*14*/].f_8))
		{
			if (fParam1 == -1f)
			{
				return iVar0;
			}
			else if (__LIB_0__::func_725(Local_297[iVar0 /*14*/].f_8, Param0, fParam1, 1))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_344()//Position - 0x2DCF3
{
	if (__LIB_0__::func_692(Local_297[0 /*14*/].f_8) && __LIB_0__::func_692(Local_297[1 /*14*/].f_8))
	{
		if (!func_322(&Local_447, 1))
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_297[0 /*14*/].f_8, true), 3f, true))
				{
					if (func_303(0, 0, 1) && (WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RELOADING(PLAYER::PLAYER_PED_ID())))
					{
						if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_TREACT", 7, 0, 0, 0))
						{
							StringCopy(&Local_447, "NIG1B_TREACT", 24);
							return;
						}
					}
					else if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_TSHOCK", 7, 0, 0, 0))
					{
						StringCopy(&Local_447, "NIG1B_TSHOCK", 24);
						return;
					}
				}
				else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_297[1 /*14*/].f_8, true), 3f, true))
				{
					if (func_303(0, 0, 1) || (WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RELOADING(PLAYER::PLAYER_PED_ID())))
					{
						if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_GREACT", 7, 0, 0, 0))
						{
							StringCopy(&Local_447, "NIG1B_GREACT", 24);
							return;
						}
					}
					else if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_GSHOCK", 7, 0, 0, 0))
					{
						StringCopy(&Local_447, "NIG1B_GSHOCK", 24);
						return;
					}
				}
				else if (PED::CAN_PED_SEE_HATED_PED(Local_297[0 /*14*/].f_8, PLAYER::PLAYER_PED_ID()))
				{
					if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_TSHOCK", 7, 0, 0, 0))
					{
						StringCopy(&Local_447, "NIG1B_TSHOCK", 24);
						return;
					}
				}
				else if (PED::CAN_PED_SEE_HATED_PED(Local_297[1 /*14*/].f_8, PLAYER::PLAYER_PED_ID()))
				{
					if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_GSHOCK", 7, 0, 0, 0))
					{
						StringCopy(&Local_447, "NIG1B_GSHOCK", 24);
						return;
					}
				}
			}
			else if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_297[0 /*14*/].f_8) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_297[0 /*14*/].f_8))
				{
					if (PED::CAN_PED_SEE_HATED_PED(Local_297[0 /*14*/].f_8, PLAYER::PLAYER_PED_ID()))
					{
						if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_TTARG", 7, 0, 0, 0))
						{
							StringCopy(&Local_447, "NIG1B_TTARG", 24);
							return;
						}
					}
				}
				else if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_297[1 /*14*/].f_8) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_297[1 /*14*/].f_8))
				{
					if (PED::CAN_PED_SEE_HATED_PED(Local_297[1 /*14*/].f_8, PLAYER::PLAYER_PED_ID()))
					{
						if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_GTARG", 7, 0, 0, 0))
						{
							StringCopy(&Local_447, "NIG1B_GTARG", 24);
							return;
						}
					}
				}
			}
			else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_297[0 /*14*/].f_8, PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RAGDOLL(Local_297[0 /*14*/].f_8))
			{
				if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_TBUMP", 7, 0, 0, 0))
				{
					StringCopy(&Local_447, "NIG1B_TBUMP", 24);
					return;
				}
			}
			else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_297[1 /*14*/].f_8, PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RAGDOLL(Local_297[1 /*14*/].f_8))
			{
				if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_GBUMP", 7, 0, 0, 0))
				{
					StringCopy(&Local_447, "NIG1B_GBUMP", 24);
					return;
				}
			}
			if (__LIB_0__::func_75() && !func_279("NULL"))
			{
				iLocal_279 = MISC::GET_GAME_TIMER();
			}
			else if (__LIB_14__::func_684(iLocal_279, MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000)))
			{
				if (iLocal_313 == 2)
				{
					switch (iLocal_274)
					{
						case 0:
							if (func_303(0, 0, 1) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (func_348(&uLocal_58, "NIG1BAU", "NIG1B_SU1", "NIG1B_SU1_1", 7, 0, 0))
								{
									iLocal_279 = MISC::GET_GAME_TIMER();
									iLocal_274++;
								}
							}
							else
							{
								iLocal_274++;
							}
							break;
						case 1:
							if (func_348(&uLocal_58, "NIG1BAU", "NIG1B_SU1", "NIG1B_SU1_2", 7, 0, 0))
							{
								iLocal_279 = MISC::GET_GAME_TIMER();
								iLocal_274++;
							}
							break;
						case 2:
							if (func_348(&uLocal_58, "NIG1BAU", "NIG1B_SU1", "NIG1B_SU1_3", 7, 0, 0))
							{
								iLocal_279 = MISC::GET_GAME_TIMER();
								iLocal_274++;
							}
							break;
						default:
							if (func_345())
							{
								iLocal_279 = MISC::GET_GAME_TIMER();
							}
							break;
						}
					}
				}
			}
	}
}

int func_345()//Position - 0x2E111
{
	int iVar0;
	if (!__LIB_0__::func_75() && !func_279("NULL"))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		if (iVar0 == 0)
		{
			if (iLocal_245)
			{
				if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_TAMB", 7, 0, 0, 0))
				{
					return 1;
				}
			}
			else if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_TAMB2", 7, 0, 0, 0))
			{
				return 1;
			}
		}
		else if (iLocal_245)
		{
			if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_GAMB", 7, 0, 0, 0))
			{
				return 1;
			}
		}
		else if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_GAMB2", 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_346()//Position - 0x2E1B5
{
	STREAMING::REQUEST_MODEL(iLocal_308);
	STREAMING::REQUEST_MODEL(iLocal_309);
}

int func_347()//Position - 0x2E1CB
{
	STREAMING::REQUEST_MODEL(iLocal_308);
	STREAMING::REQUEST_MODEL(iLocal_309);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_308) && STREAMING::HAS_MODEL_LOADED(iLocal_309))
	{
		return 1;
	}
	return 0;
}

int func_348(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2E1FC
{
	bool bVar0;
	bVar0 = false;
	if (iParam5 == 0)
	{
		if (MISC::GET_PROFILE_SETTING(203) != 0)
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				bVar0 = true;
				iParam5 = 1;
			}
		}
	}
	if (__LIB_14__::func_535(uParam0, sParam1, sParam2, sParam3, iParam4, iParam5, iParam6))
	{
		if (bVar0)
		{
			iLocal_316 = 3;
		}
		else
		{
			func_25(&sLocal_451, &cLocal_457);
		}
		return 1;
	}
	return 0;
}

int func_350()//Position - 0x2E2A8
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_319(Local_297[iVar0 /*14*/].f_8, 1082130432))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_351()//Position - 0x2E2DF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_332(Local_297[iVar0 /*14*/].f_8, 1101004800, 1084227584, 1097859072))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_352()//Position - 0x2E31D
{
	int iVar0;
	float fVar1;
	if (func_330(2))
	{
		return 0;
	}
	if (iLocal_313 == 2)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (iVar0 == 1)
			{
				if (func_353(Local_297[1 /*14*/].f_8, 1, 1, 1, 1, 1))
				{
					iLocal_277 = 1;
					return 0;
				}
			}
			else if (func_353(Local_297[iVar0 /*14*/].f_8, 0, 1, 1, 1, 1))
			{
				if ((Local_297[iVar0 /*14*/].f_9 == 2 || Local_297[iVar0 /*14*/].f_9 == 6) || Local_297[iVar0 /*14*/].f_9 == 7)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_473, Local_474, fLocal_273, false, true, 0))
					{
						iLocal_277 = 0;
						return 0;
					}
					fVar1 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Local_297[iVar0 /*14*/].f_8);
					if (TASK::IS_MOVE_BLEND_RATIO_SPRINTING(fVar1) || ((TASK::IS_MOVE_BLEND_RATIO_RUNNING(fVar1) && PED::IS_PED_SWIMMING(Local_297[iVar0 /*14*/].f_8)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iVar0 /*14*/].f_8, Local_473, Local_474, fLocal_273, false, true, 0)))
					{
					}
					else
					{
						iLocal_277 = 0;
						return 0;
					}
				}
				else
				{
					iLocal_277 = 0;
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_353(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x2E446
{
	int iVar0;
	if (bParam1)
	{
		if (!__LIB_0__::func_121(iParam0))
		{
			return 0;
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		if (func_329(iParam0, 0))
		{
			if (PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (iLocal_312 == 2 || iLocal_312 == 3)
		{
			if (__LIB_0__::func_725(iParam0, Local_468, 7f, 1))
			{
				return 1;
			}
		}
	}
	if (bParam3)
	{
		if (iLocal_312 == 4)
		{
			if (__LIB_0__::func_725(iParam0, Local_468, 3.5f, 1))
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_BEING_STUNNED(iParam0, 0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
		if (iVar0 == joaat("WEAPON_STUNGUN"))
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	return 0;
}

int func_355(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2E5D0
{
	bool bVar0;
	bVar0 = false;
	if (iParam5 == 0)
	{
		if (MISC::GET_PROFILE_SETTING(203) != 0)
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				bVar0 = true;
				iParam5 = 1;
			}
		}
	}
	if (__LIB_14__::func_782(uParam0, sParam1, sParam2, sParam3, iParam4, iParam5, iParam6))
	{
		if (bVar0)
		{
			iLocal_316 = 3;
		}
		else
		{
			func_25(&sLocal_451, &cLocal_457);
		}
		return 1;
	}
	return 0;
}

void func_357()//Position - 0x2E67C
{
	struct<3> Var0;
	float fVar1;
	if (Local_297[0 /*14*/].f_9 == 0)
	{
		if (__LIB_0__::func_692(Local_297[0 /*14*/].f_8))
		{
			if (func_359(Local_297[0 /*14*/].f_8, 0) && iLocal_313 == 2)
			{
				Local_297[0 /*14*/].f_9 = 1;
			}
			else if (iLocal_275 == 1)
			{
				Var0 = { -1056.2944f, 383.01282f, 68.68782f };
				fVar1 = 3f;
				if (__LIB_0__::func_874(Local_468, Var0, fVar1))
				{
					iLocal_275 = 0;
					RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_297[0 /*14*/].f_8, Local_464[iLocal_275 /*3*/], false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_297[0 /*14*/].f_8, fLocal_269[iLocal_275]);
				}
			}
			else if (iLocal_275 == 0)
			{
				Var0 = { -1035.0785f, 347.5178f, 70.36205f };
				fVar1 = 4f;
				if (__LIB_0__::func_874(Local_468, Var0, fVar1))
				{
					iLocal_275 = 1;
					RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_297[0 /*14*/].f_8, Local_464[iLocal_275 /*3*/], false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_297[0 /*14*/].f_8, fLocal_269[iLocal_275]);
				}
			}
		}
	}
}

int func_359(int iParam0, bool bParam1)//Position - 0x2E7BA
{
	if (bParam1)
	{
		if (!__LIB_0__::func_121(iParam0))
		{
			return 0;
		}
	}
	if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_360()//Position - 0x2E7ED
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_297[iVar0 /*14*/].f_8))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_297[iVar0 /*14*/].f_8, false) || PED::IS_PED_INJURED(Local_297[iVar0 /*14*/].f_8))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_361()//Position - 0x2E840
{
	if (iLocal_54 >= 1)
	{
		if (iLocal_284 > 0 && iLocal_284 < 4)
		{
			if (iLocal_284 != 3)
			{
				if (iLocal_284 == 1)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						func_64(1);
					}
				}
				if (iLocal_54 == 1)
				{
					if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						if (bLocal_259)
						{
							iLocal_284 = 2;
							func_64(2);
						}
					}
				}
				else if (iLocal_54 == 3)
				{
					iLocal_284 = 2;
					func_64(2);
				}
			}
			else if (__LIB_14__::func_684(iLocal_286, 5000))
			{
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
				iLocal_284 = 4;
			}
		}
	}
}

void func_362()//Position - 0x2E8CE
{
	struct<3> Var0;
	struct<3> Var1;
	Local_468 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	func_65();
	func_63();
	func_361();
	func_372(0);
	func_335();
	func_298();
	func_370();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1B_MAIN_MIX"))
	{
		if (iLocal_313 != 2 && iLocal_313 != 3)
		{
			AUDIO::STOP_AUDIO_SCENE("NIGEL_1B_MAIN_MIX");
		}
	}
	switch (iLocal_56)
	{
		case 0:
			iLocal_56 = 1;
			iLocal_226 = 0;
			iLocal_281 = MISC::GET_GAME_TIMER();
			break;
		case 1:
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_244 = 1;
				iLocal_56 = 2;
			}
			else if (bLocal_223)
			{
				if (!iLocal_244)
				{
					if (__LIB_14__::func_684(iLocal_281, 1000))
					{
						Var0 = { Local_468 + Vector(-60f, -60f, -60f) };
						Var1 = { Local_468 + Vector(60f, 60f, 60f) };
						if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(Var0, Var1))
						{
							if (func_369())
							{
								iLocal_244 = 1;
							}
							else if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_DC", 7, 0, 0, 0))
							{
								iLocal_244 = 1;
							}
						}
						else if (!bLocal_256)
						{
							if (func_347())
							{
								bLocal_256 = func_368(Local_468, -1038090240, 1109393408);
							}
						}
					}
				}
				else if (!iLocal_226)
				{
					if (!__LIB_0__::func_75() && !func_279("NULL"))
					{
						if (!__LIB_0__::func_501("NIG1B_OBJ_04", 0, 0))
						{
							__LIB_0__::func_229("NIG1B_OBJ_04", 7500, 0);
							func_365();
							iLocal_226 = 1;
						}
					}
				}
			}
			else if (!iLocal_226)
			{
				if (!__LIB_0__::func_501("NIG1B_OBJ_04", 0, 0))
				{
					__LIB_0__::func_229("NIG1B_OBJ_04", 7500, 0);
					func_365();
					iLocal_226 = 1;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_501("NIG1B_OBJ_04", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("NIG1B_OBJ_04");
			}
			__LIB_0__::func_221(&uLocal_58, 4);
			func_280(3);
			break;
	}
	func_363(&uLocal_58, "NIG1BAU", &sLocal_451, &cLocal_457);
}

void func_363(var uParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x2EAB1
{
	switch (iLocal_316)
	{
		case 0:
			break;
		case 1:
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				*sParam2 = { __LIB_0__::func_486() };
				*sParam3 = { __LIB_0__::func_485() };
				if (MISC::ARE_STRINGS_EQUAL(sParam3, "") || MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
				{
				}
				else
				{
					__LIB_0__::func_325();
					iLocal_316 = 2;
				}
			}
			break;
		case 2:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (func_355(uParam0, sParam1, sParam2, sParam3, 8, 1, 0))
					{
						iLocal_316 = 3;
					}
				}
				else
				{
					iLocal_316 = 4;
				}
			}
			break;
		case 3:
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				*sParam2 = { __LIB_0__::func_486() };
				*sParam3 = { __LIB_0__::func_485() };
				if (MISC::ARE_STRINGS_EQUAL(sParam3, "") || MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
				{
				}
				else
				{
					__LIB_0__::func_325();
					iLocal_316 = 4;
				}
			}
			break;
		case 4:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && func_355(uParam0, sParam1, sParam2, sParam3, 8, 0, 0))
			{
				iLocal_316 = 0;
			}
			break;
	}
}

void func_365()//Position - 0x2EBD9
{
	if ((MISC::GET_PROFILE_SETTING(203) != 0 && iLocal_316 != 1) && __LIB_0__::func_75())
	{
		iLocal_316 = 1;
	}
}

int func_368(struct<3> Param0, float fParam1, float fParam2)//Position - 0x2EC3D
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, fParam1, 0f) };
	if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(Var1, Param0, 0, &Var2, &fVar3, 1, 3f, 0f))
	{
		if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(Var2, 7f, 7f, 7f, 0))
		{
			if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(iLocal_308, Var2, true))
			{
				bVar0 = true;
			}
			else
			{
				bVar0 = false;
			}
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, fParam2, 0f) };
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(Var1, Param0, 0, &Var2, &fVar3, 1, 3f, 0f))
		{
			if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(Var2, 7f, 7f, 7f, 0))
			{
				if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(iLocal_308, Var2, true))
				{
					bVar0 = true;
				}
				else
				{
					bVar0 = false;
				}
			}
			else
			{
				bVar0 = false;
			}
		}
		else
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			iVar4 = VEHICLE::CREATE_VEHICLE(iLocal_308, Var2, fVar3, true, true, false);
		}
		if (__LIB_0__::func_121(iVar4))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
			{
				iVar5 = PED::CREATE_PED_INSIDE_VEHICLE(iVar4, 6, iLocal_309, -1, true, true);
			}
			AUDIO::SET_SIREN_WITH_NO_DRIVER(iVar4, true);
			VEHICLE::SET_VEHICLE_SIREN(iVar4, true);
			fVar6 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
			if (fVar6 > 40f)
			{
				fVar6 = 40f;
			}
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar4, fVar6);
			if (__LIB_0__::func_121(iVar5))
			{
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(iVar5, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar5, false);
				WEAPON::GIVE_WEAPON_TO_PED(iVar5, joaat("WEAPON_PISTOL"), -1, true, true);
				WEAPON::SET_CURRENT_PED_WEAPON(iVar5, joaat("WEAPON_PISTOL"), true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar5);
			}
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
			return 1;
		}
	}
	return 0;
}

int func_369()//Position - 0x2EDC0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (__LIB_0__::func_692(Local_297[iVar0 /*14*/].f_8))
		{
			return 0;
		}
		iVar0++;
	}
	if (__LIB_0__::func_692(Local_296.f_8))
	{
		return 0;
	}
	return 1;
}

void func_370()//Position - 0x2EDFF
{
	if (!bLocal_225)
	{
		if (__LIB_0__::func_121(Local_305[0 /*9*/]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_305[0 /*9*/]))
			{
				if (!__LIB_0__::func_121(iLocal_490))
				{
					ENTITY::DETACH_ENTITY(Local_305[0 /*9*/], true, true);
					ENTITY::SET_ENTITY_DYNAMIC(Local_305[0 /*9*/], true);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_305[0 /*9*/], true);
				}
				else if (!__LIB_0__::func_490(ENTITY::GET_ENTITY_VELOCITY(iLocal_490), 0f, 0f, 0f, 5f, 0))
				{
					ENTITY::DETACH_ENTITY(Local_305[0 /*9*/], true, true);
					ENTITY::SET_ENTITY_DYNAMIC(Local_305[0 /*9*/], true);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_305[0 /*9*/], true);
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_305[0 /*9*/], 3, 0f, 1.5f, 0.2f, 0f, 0f, 0f, 0, true, true, true, false, true);
				}
			}
		}
	}
}

void func_372(bool bParam0)//Position - 0x2EF28
{
	iLocal_312 = __LIB_38__::func_618(PLAYER::PLAYER_PED_ID(), bParam0);
}

void func_374()//Position - 0x2EFC3
{
	Local_468 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	func_65();
	func_63();
	func_361();
	func_372(0);
	func_335();
	func_298();
	func_370();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1B_MAIN_MIX"))
	{
		if (iLocal_313 != 2 && iLocal_313 != 3)
		{
			AUDIO::STOP_AUDIO_SCENE("NIGEL_1B_MAIN_MIX");
		}
	}
	switch (iLocal_56)
	{
		case 0:
			if (iLocal_314 != 0 && iLocal_314 != 1)
			{
				sLocal_319 = "NIG1B_DD";
			}
			else if (bLocal_263)
			{
				sLocal_319 = "NIG1B_DDG";
			}
			else
			{
				sLocal_319 = "NIG1B_DS";
				__LIB_0__::func_630(788);
			}
			iLocal_56 = 1;
			break;
		case 1:
			if (!MISC::ARE_STRINGS_EQUAL(sLocal_319, "NIG1B_DS"))
			{
				if (!(MISC::ARE_STRINGS_EQUAL(sLocal_319, "NIG1B_DDG") && !__LIB_0__::func_692(Local_296.f_8)))
				{
					if (!func_347())
					{
						func_346();
					}
				}
			}
			if (iLocal_243)
			{
				if (!func_322(sLocal_319, 1))
				{
					iLocal_56 = 2;
				}
			}
			else
			{
				func_24(0, 0);
				if (func_324(&uLocal_58, "NIG1BAU", sLocal_319, 7, 0, 0, 0))
				{
					iLocal_243 = 1;
				}
			}
			break;
		case 2:
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_244 = 1;
				func_280(5);
			}
			else if (bLocal_259)
			{
				__LIB_0__::func_221(&uLocal_58, 4);
				func_280(3);
			}
			else if (MISC::ARE_STRINGS_EQUAL(sLocal_319, "NIG1B_DS") || (MISC::ARE_STRINGS_EQUAL(sLocal_319, "NIG1B_DDG") && !__LIB_0__::func_692(Local_296.f_8)))
			{
				__LIB_0__::func_221(&uLocal_58, 4);
				func_280(3);
			}
			else
			{
				if (!func_347())
				{
					func_346();
				}
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				bLocal_223 = true;
				func_280(5);
			}
			break;
	}
	func_363(&uLocal_58, "NIG1BAU", &sLocal_451, &cLocal_457);
}

void func_375()//Position - 0x2F189
{
	Local_468 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	func_65();
	func_63();
	func_361();
	func_372(0);
	func_335();
	func_298();
	func_370();
	switch (iLocal_56)
	{
		case 0:
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_56 = 2;
			}
			else
			{
				__LIB_0__::func_229("NIG1B_OBJ_03", 10000, 0);
				func_365();
				iLocal_56 = 1;
			}
			break;
		case 1:
			if (!__LIB_1__::func_504(Local_468, Local_465, 70f) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_56 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_501("NIG1B_OBJ_03", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("NIG1B_OBJ_03");
			}
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_280(5);
			}
			else
			{
				func_280(2);
			}
			break;
	}
	func_363(&uLocal_58, "NIG1BAU", &sLocal_451, &cLocal_457);
}

void func_376()//Position - 0x2F26A
{
	Local_468 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	func_65();
	func_63();
	func_372(0);
	func_335();
	func_298();
	func_370();
	func_456();
	switch (iLocal_56)
	{
		case 0:
			func_453();
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_0__::func_222(&uLocal_58, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			}
			if (__LIB_0__::func_121(Local_296.f_8))
			{
				__LIB_0__::func_222(&uLocal_58, 4, Local_296.f_8, "Nigel1BGardener01", 0, 1);
			}
			if (__LIB_0__::func_121(Local_297[0 /*14*/].f_8))
			{
				__LIB_0__::func_222(&uLocal_58, 5, Local_297[0 /*14*/].f_8, "Nigel1BCelebMale01", 0, 1);
			}
			if (__LIB_0__::func_121(Local_297[1 /*14*/].f_8))
			{
				__LIB_0__::func_222(&uLocal_58, 6, Local_297[1 /*14*/].f_8, "Nigel1BCelebFemale01", 0, 1);
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 1);
			__LIB_0__::func_229("NIG1B_OBJ_01", 7500, 0);
			func_365();
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_1B_CLOTHES", false, -1);
			if (bLocal_252)
			{
				__LIB_0__::func_84(800, 0);
			}
			iLocal_56 = 1;
			break;
		case 1:
			if (!iLocal_266)
			{
				if (__LIB_0__::func_121(iLocal_490))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_490, "rcmnigel1b", "idle_speedo", 3))
					{
						ENTITY::STOP_ENTITY_ANIM(iLocal_490, "idle_speedo", "rcmnigel1b", -2f);
						iLocal_266 = 1;
					}
				}
			}
			if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(Local_298.f_0))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 10f, 1);
				if (iLocal_314 != 0 && iLocal_314 != 1)
				{
					iLocal_291 = MISC::GET_GAME_TIMER();
				}
				if (iLocal_314 == 0)
				{
					iLocal_251 = 1;
					iLocal_283 = MISC::GET_GAME_TIMER();
				}
				__LIB_0__::func_714(&(Local_298.f_2));
				__LIB_0__::func_733(&Local_298);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 0);
				iLocal_56 = 2;
			}
			break;
		case 2:
			__LIB_0__::func_714(&(Local_298.f_2));
			__LIB_0__::func_733(&Local_298);
			if (__LIB_0__::func_501("NIG1B_OBJ_01", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("NIG1B_OBJ_01");
			}
			if (!iLocal_266)
			{
				if (__LIB_0__::func_121(iLocal_490))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_490, "rcmnigel1b", "idle_speedo", 3))
					{
						ENTITY::STOP_ENTITY_ANIM(iLocal_490, "idle_speedo", "rcmnigel1b", -2f);
						iLocal_266 = 1;
					}
				}
			}
			__LIB_14__::func_874(1, "Leave the area", 1, 0, 0, 1);
			Global_100441.f_12[1] = iLocal_311;
			Global_100441.f_12[0] = iLocal_314;
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_244 = 1;
				func_280(5);
			}
			else
			{
				func_280(1);
			}
			break;
	}
	func_363(&uLocal_58, "NIG1BAU", &sLocal_451, &cLocal_457);
}

void func_453()//Position - 0x365CD
{
	if (!HUD::DOES_BLIP_EXIST(Local_298.f_2))
	{
		if (OBJECT::DOES_PICKUP_EXIST(Local_298.f_0))
		{
			Local_298.f_2 = __LIB_16__::func_321(Local_298.f_0);
		}
	}
	if (HUD::DOES_BLIP_EXIST(Local_298.f_2))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_298.f_2, "NIG1B_CP_BLIP");
	}
}

void func_456()//Position - 0x36660
{
	struct<3> Var0;
	if (!__LIB_0__::func_77(0) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (!iLocal_249)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1056.1426f, 382.9233f, 67.74586f, -1054.9651f, 382.89902f, 70.98839f, 1.2f, false, true, 0))
			{
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					if (func_458(5))
					{
						if ((!PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
						{
							if (__LIB_16__::func_437(PLAYER::PLAYER_PED_ID(), 87.9952f, 90f))
							{
								if (!MISC::IS_AREA_OCCUPIED(-1056.1724f, 382.19086f, 68.08848f, -1054.6816f, 383.83936f, 70.969f, false, true, false, false, false, 0, false))
								{
									STREAMING::REQUEST_ANIM_DICT("rcmnigel1b");
									Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("rcmnigel1b", "lockeddoor_tryopen", -1056.171f, 383.577f, 68.688f, 0f, 0f, 97.793f, 0f, 2) };
									if (STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel1b"))
									{
										if (!__LIB_6__::func_572(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
										{
											TASK::OPEN_SEQUENCE_TASK(&iLocal_318);
											TASK::TASK_GO_STRAIGHT_TO_COORD(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION("rcmnigel1b", "lockeddoor_tryopen", -1056.171f, 383.577f, 68.688f, 0f, 0f, 97.793f, 0f, 2), 1f, 20000, Var0.f_2, 0.5f);
											TASK::TASK_PLAY_ANIM_ADVANCED(0, "rcmnigel1b", "lockeddoor_tryopen", -1056.171f, 383.577f, 68.688f, 0f, 0f, 97.793f, 4f, -4f, -1, 7680, 0f, 2, 0);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_318);
											TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_318);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_318);
											WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_492, true);
											WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 3f, 0);
											iLocal_249 = 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (!iLocal_250)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1040.537f, 383.53693f, 67.963135f, -1041.7917f, 383.56137f, 70.99346f, 1.2f, false, true, 0))
			{
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					if (func_458(4))
					{
						if ((!PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
						{
							if (__LIB_16__::func_437(PLAYER::PLAYER_PED_ID(), 277.6446f, 90f))
							{
								if (!MISC::IS_AREA_OCCUPIED(-1042.0995f, 382.6709f, 68.07068f, -1040.5947f, 384.26083f, 71.07093f, false, true, false, false, false, 0, false))
								{
									STREAMING::REQUEST_ANIM_DICT("rcmnigel1b");
									Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("rcmnigel1b", "lockeddoor_tryopen", -1040.55f, 382.85f, 68.85f, 0f, 0f, -90f, 0f, 2) };
									if (STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel1b"))
									{
										if (!__LIB_6__::func_572(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
										{
											TASK::OPEN_SEQUENCE_TASK(&iLocal_318);
											TASK::TASK_GO_STRAIGHT_TO_COORD(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION("rcmnigel1b", "lockeddoor_tryopen", -1040.55f, 382.85f, 68.85f, 0f, 0f, -90f, 0f, 2), 1f, 20000, Var0.f_2, 0.5f);
											TASK::TASK_PLAY_ANIM_ADVANCED(0, "rcmnigel1b", "lockeddoor_tryopen", -1040.55f, 382.85f, 68.85f, 0f, 0f, -90f, 4f, -4f, -1, 7680, 0f, 2, 0);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_318);
											TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_318);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_318);
											WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_492, true);
											WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 3f, 0);
											iLocal_250 = 1;
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
	if (iLocal_247[0] && iLocal_247[1])
	{
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "rcmnigel1b", "lockeddoor_tryopen", 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "rcmnigel1b", "lockeddoor_tryopen") > 0.568f)
		{
			if (!iLocal_247[0])
			{
				if (!__LIB_0__::func_75() && !func_279("NULL"))
				{
					if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_PTLG1", 7, 0, 0, 0))
					{
						iLocal_247[0] = 1;
					}
				}
			}
			else if (!iLocal_247[1])
			{
				if (!__LIB_0__::func_75() && !func_279("NULL"))
				{
					if (func_324(&uLocal_58, "NIG1BAU", "NIG1B_PTLG2", 7, 0, 0, 0))
					{
						iLocal_247[1] = 1;
					}
				}
			}
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("interrupt")))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		if (iLocal_492 != joaat("WEAPON_UNARMED") && iLocal_492 != 0)
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_492, false))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_492, true);
			}
			iLocal_492 = joaat("WEAPON_UNARMED");
		}
	}
}

int func_458(int iParam0)//Position - 0x36B7B
{
	int iVar0;
	iVar0 = func_459(iParam0);
	if (iVar0 == 1 || iVar0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_459(int iParam0)//Position - 0x36BA1
{
	int iVar0;
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_276[iParam0]))
	{
		iVar0 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_276[iParam0]);
	}
	return iVar0;
}

void func_460()//Position - 0x36BC6
{
	if (bLocal_252)
	{
		if (iLocal_54 != 6 && iLocal_54 != 4)
		{
			__LIB_0__::func_467();
			if (iLocal_267 != 0)
			{
				func_280(6);
			}
		}
	}
}

void func_481(int iParam0, bool bParam1)//Position - 0x3769B
{
	func_489(bParam1, 1);
	if (bParam1)
	{
		func_482();
	}
	iLocal_55 = iParam0;
	bLocal_252 = false;
	if (__LIB_0__::func_324())
	{
		iLocal_253 = 1;
	}
	else
	{
		iLocal_253 = 0;
	}
	if (!__LIB_0__::func_324())
	{
		if (iLocal_55 == 0)
		{
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_38__::func_620(PLAYER::PLAYER_PED_ID(), Local_488, fLocal_295, 1, 1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
				iLocal_253 = 1;
			}
		}
	}
	func_1(iLocal_55);
}

void func_482()//Position - 0x3772A
{
	func_483(1, 0);
	while (!__LIB_38__::func_621("NIGEL1B_MISSION_FAIL", 0))
	{
		SYSTEM::WAIT(0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		if (!__LIB_0__::func_324())
		{
			__LIB_38__::func_620(PLAYER::PLAYER_PED_ID(), Local_488, fLocal_295, 1, 1);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
	}
	AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
	__LIB_38__::func_621("NIGEL1B_MISSION_FAIL", 0);
	while (__LIB_0__::func_75())
	{
		func_24(0, 1);
		SYSTEM::WAIT(0);
	}
	func_25(&sLocal_451, &cLocal_457);
	SYSTEM::WAIT(0);
	func_597();
	func_280(0);
}

void func_483(bool bParam0, bool bParam1)//Position - 0x377CB
{
	int iVar0;
	HUD::CLEAR_PRINTS();
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
	func_24(1, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	__LIB_0__::func_671(0);
	__LIB_0__::func_203(0, 0);
	__LIB_15__::func_306(0);
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	__LIB_14__::func_870(1, 1, 1, 1);
	MISC::SET_TIME_SCALE(1f);
	MISC::ENABLE_DISPATCH_SERVICE(2, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	MISC::ENABLE_DISPATCH_SERVICE(4, true);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	PED::SET_CREATE_RANDOM_COPS(true);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_317, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_467, Local_466, true, true);
	if (__LIB_0__::func_323() || !bLocal_252)
	{
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_467, Local_466, 0);
		MISC::CLEAR_AREA(Local_465, 35f, true, false, false, false);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_465, 27f, false, false, false, false, false, false, 0);
		MISC::CLEAR_AREA_OF_PEDS(Local_465, 27f, 0);
	}
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_276[iVar0]))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_276[iVar0], 0);
		}
		iVar0++;
	}
	__LIB_0__::func_221(&uLocal_58, 2);
	__LIB_0__::func_221(&uLocal_58, 3);
	__LIB_0__::func_221(&uLocal_58, 4);
	__LIB_0__::func_221(&uLocal_58, 5);
	__LIB_0__::func_221(&uLocal_58, 6);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE(false);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1B_MAIN_MIX"))
	{
		AUDIO::STOP_AUDIO_SCENE("NIGEL_1B_MAIN_MIX");
	}
	__LIB_38__::func_621("NIGEL1B_MISSION_FAIL", 0);
	AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
	__LIB_17__::func_25(1, 1, 1);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_315);
	func_485();
	func_60();
	func_49(bParam0);
	func_484(bParam1);
}

void func_484(bool bParam0)//Position - 0x3796C
{
	int iVar0;
	STREAMING::REMOVE_ANIM_DICT("rcmnigel1b");
	STREAMING::REMOVE_ANIM_DICT(&cLocal_425);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_434);
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_278))
	{
		AUDIO::STOP_SOUND(iLocal_278);
	}
	AUDIO::RELEASE_SOUND_ID(iLocal_278);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_306[iVar0 /*9*/].f_1);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_305[iVar0 /*9*/].f_1);
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_298.f_1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_297[iVar0 /*14*/].f_10);
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_307);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_310);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_308);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_309);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_296.f_10);
	if (bParam0)
	{
		HUD::CLEAR_ADDITIONAL_TEXT(0, true);
	}
}

void func_485()//Position - 0x37A49
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_35.f_0)
	{
		__LIB_13__::func_439(&(Local_35[iVar0 /*4*/]));
		iVar0++;
	}
}

void func_489(bool bParam0, bool bParam1)//Position - 0x37B59
{
	if (bParam0)
	{
		__LIB_17__::func_25(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_490(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_490(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x37B8C
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
					if (func_219(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_105(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_219(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_105(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_219(PLAYER::PLAYER_PED_ID(), 8, 1) || func_219(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_105(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_219(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_105(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

void func_597()//Position - 0x43866
{
	func_611();
	__LIB_14__::func_841();
	func_609();
	func_606();
	PED::ADD_RELATIONSHIP_GROUP("N1B_PLAYER_HATE_GROUP", &iLocal_315);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_315, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_315);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_315, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_315);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	__LIB_0__::func_712(64, 2, 0);
	MISC::CLEAR_BIT(&(Global_113386.f_18574.f_382), 3);
	func_598();
}

void func_598()//Position - 0x438DF
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(Local_57.f_35[0]))
	{
		iLocal_490 = Local_57.f_35[0];
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_490))
		{
			iLocal_490 = VEHICLE::CREATE_VEHICLE(iLocal_310, -1010.97f, 359.91f, 70.65f, 331.46f, true, true, false);
		}
		if (__LIB_0__::func_121(iLocal_490))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_490, 5f);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_490, 97, 97);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_490, 13.5f);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_490, 2, false);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_490, 2, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_490, 2, 0, 1f);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_490);
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_490, "rcmnigel1b", "idle_speedo", 3))
			{
				STREAMING::REQUEST_ANIM_DICT("rcmnigel1b");
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel1b"))
				{
					TASK::TASK_VEHICLE_PLAY_ANIM(iLocal_490, "rcmnigel1b", "idle_speedo");
				}
			}
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_310);
	__LIB_0__::func_123(&(Local_57.f_41[0]));
	if (!OBJECT::DOES_PICKUP_EXIST(Local_298.f_0))
	{
		Local_298.f_0 = OBJECT::CREATE_PICKUP_ROTATE(Local_298.f_6, Local_298.f_3, Local_298.f_8, Local_298.f_7, -1, 0, true, Local_298.f_1);
	}
	if (OBJECT::DOES_PICKUP_EXIST(Local_298.f_0))
	{
		if (OBJECT::DOES_PICKUP_OBJECT_EXIST(Local_298.f_0))
		{
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_298.f_1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_57.f_28[0]))
	{
		Local_297[0 /*14*/].f_8 = Local_57.f_28[0];
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_297[0 /*14*/].f_8))
		{
			iLocal_275 = 1;
			Local_297[0 /*14*/].f_8 = PED::CREATE_PED(26, Local_297[0 /*14*/].f_10, Local_464[iLocal_275 /*3*/], fLocal_269[iLocal_275], true, true);
		}
		if (__LIB_0__::func_692(Local_297[0 /*14*/].f_8))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_297[0 /*14*/].f_8, Local_464[iLocal_275 /*3*/], false, false, true);
			ENTITY::SET_ENTITY_HEADING(Local_297[0 /*14*/].f_8, fLocal_269[iLocal_275]);
			TASK::TASK_PLAY_ANIM(Local_297[0 /*14*/].f_8, "rcmnigel1b", "Swimming_Idle", 8f, -8f, -1, 0, 0f, false, false, false);
		}
	}
	if (__LIB_0__::func_692(Local_297[0 /*14*/].f_8))
	{
		PED::SET_PED_DIES_IN_WATER(Local_297[0 /*14*/].f_8, false);
		PED::SET_PED_LEG_IK_MODE(Local_297[0 /*14*/].f_8, 2);
		PED::SET_PED_ALTERNATE_WALK_ANIM(Local_297[0 /*14*/].f_8, &cLocal_434, "walk_tyler", 8f, true);
		TASK::TASK_PLAY_ANIM(Local_297[0 /*14*/].f_8, "rcmnigel1b", "Swimming_Idle", 8f, -8f, -1, 0, 0f, false, false, false);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_297[0 /*14*/].f_10);
	if (ENTITY::DOES_ENTITY_EXIST(Local_57.f_28[1]))
	{
		Local_297[1 /*14*/].f_8 = Local_57.f_28[1];
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_297[1 /*14*/].f_8))
		{
			Local_297[1 /*14*/].f_8 = PED::CREATE_PED(26, Local_297[1 /*14*/].f_10, -1058.43f, 362.78f, 69.86f, 130.45f, true, true);
		}
		if (__LIB_0__::func_692(Local_297[1 /*14*/].f_8))
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_297[1 /*14*/].f_8, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_297[1 /*14*/].f_8, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_297[1 /*14*/].f_8, 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_297[1 /*14*/].f_8, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_297[1 /*14*/].f_8, 8, 0, 1, 0);
			func_339(0);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_297[1 /*14*/].f_10);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (__LIB_0__::func_692(Local_297[iVar0 /*14*/].f_8))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_297[iVar0 /*14*/].f_8, true);
			PED::SET_PED_CAN_BE_TARGETTED(Local_297[iVar0 /*14*/].f_8, true);
			PED::SET_PED_DIES_WHEN_INJURED(Local_297[iVar0 /*14*/].f_8, true);
			PED::SET_PED_DIES_IN_WATER(Local_297[iVar0 /*14*/].f_8, false);
			PED::SET_PED_MAX_TIME_UNDERWATER(Local_297[iVar0 /*14*/].f_8, 60f);
			TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_297[iVar0 /*14*/].f_8, false);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_297[iVar0 /*14*/].f_8, true, 1);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_297[iVar0 /*14*/].f_8, true);
			AUDIO::STOP_PED_SPEAKING(Local_297[iVar0 /*14*/].f_8, true);
			if (PED::IS_PED_IN_GROUP(Local_297[iVar0 /*14*/].f_8))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_297[iVar0 /*14*/].f_8);
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_297[iVar0 /*14*/].f_8, iLocal_315);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iVar0 /*14*/].f_8, true);
			Local_297[iVar0 /*14*/].f_9 = 0;
			Local_297[iVar0 /*14*/].f_13 = 0;
			Local_297[iVar0 /*14*/].f_12 = 0;
			Local_297[iVar0 /*14*/].f_11 = 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_306[iVar0 /*9*/]))
		{
			Local_306[iVar0 /*9*/] = OBJECT::CREATE_OBJECT(Local_306[iVar0 /*9*/].f_1, Local_306[iVar0 /*9*/].f_2, true, true, false);
		}
		if (__LIB_0__::func_121(Local_306[iVar0 /*9*/]))
		{
			if (iVar0 == 0 || iVar0 == 1)
			{
				ENTITY::SET_ENTITY_ROTATION(Local_306[iVar0 /*9*/], Local_306[iVar0 /*9*/].f_5, 2, true);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_306[iVar0 /*9*/], Local_306[iVar0 /*9*/].f_2, false, false, true);
			}
			PHYSICS::ACTIVATE_PHYSICS(Local_306[iVar0 /*9*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_306[iVar0 /*9*/].f_1);
		iVar0++;
	}
	if (__LIB_0__::func_121(iLocal_490))
	{
		iVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_490, "chassis");
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_305[iVar0 /*9*/]))
			{
				Local_305[iVar0 /*9*/] = OBJECT::CREATE_OBJECT(Local_305[iVar0 /*9*/].f_1, Local_305[iVar0 /*9*/].f_2, true, true, false);
			}
			if (__LIB_0__::func_121(Local_305[iVar0 /*9*/]))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_305[iVar0 /*9*/], iLocal_490, iVar1, Local_305[iVar0 /*9*/].f_2, Local_305[iVar0 /*9*/].f_5, true, true, false, false, 2, true, 0);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_305[iVar0 /*9*/], false);
				ENTITY::SET_ENTITY_DYNAMIC(Local_305[iVar0 /*9*/], false);
				ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_305[iVar0 /*9*/], false);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_305[iVar0 /*9*/], false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_305[iVar0 /*9*/].f_1);
			}
			iVar0++;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_57.f_35[1]))
	{
		iLocal_489 = Local_57.f_35[1];
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_489))
		{
			iLocal_489 = VEHICLE::CREATE_VEHICLE(iLocal_307, -1018.26f, 357.76f, 70.2f, 339.52f, true, true, false);
		}
		if (__LIB_0__::func_121(iLocal_489))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_489, 5f);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_489, 27, 27);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_307);
	if (ENTITY::DOES_ENTITY_EXIST(Local_57.f_28[2]))
	{
		Local_296.f_8 = Local_57.f_28[2];
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_296.f_8))
		{
			Local_296.f_8 = PED::CREATE_PED(26, Local_296.f_10, -1012.57f, 357.48f, 70.62f, -28.55f, true, true);
		}
		if (__LIB_0__::func_692(Local_296.f_8))
		{
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_296.f_8);
			ENTITY::SET_ENTITY_HEALTH(Local_296.f_8, 160, 0);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_296.f_8, -1012.57f, 357.48f, 70.62f, false, false, true);
			PED::SET_PED_DIES_WHEN_INJURED(Local_296.f_8, true);
			STREAMING::REQUEST_ANIM_DICT("rcmnigel1b");
			if (STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel1b"))
			{
				TASK::TASK_PLAY_ANIM(Local_296.f_8, "rcmnigel1b", "idle_gardener", 1000f, -8f, -1, 270337, 0f, false, false, false);
			}
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_296.f_10);
	if (__LIB_0__::func_692(Local_296.f_8))
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_296.f_8, true);
		PED::SET_PED_CAN_BE_TARGETTED(Local_296.f_8, true);
		PED::SET_PED_DIES_IN_WATER(Local_296.f_8, false);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_296.f_8, true, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_296.f_8, true);
		AUDIO::STOP_PED_SPEAKING(Local_296.f_8, true);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_296.f_8, true);
		PED::BLOCK_PED_FROM_GENERATING_DEAD_BODY_EVENTS_WHEN_DEAD(Local_296.f_8, true);
		if (PED::IS_PED_IN_GROUP(Local_296.f_8))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_296.f_8);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_296.f_8, iLocal_315);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_296.f_8, true);
		Local_296.f_9 = 0;
		Local_296.f_13 = 0;
		Local_296.f_12 = 0;
		Local_296.f_11 = 0;
	}
}

void func_606()//Position - 0x44375
{
	STREAMING::REQUEST_MODEL(Local_298.f_1);
	STREAMING::REQUEST_MODEL(Local_297[0 /*14*/].f_10);
	STREAMING::REQUEST_MODEL(Local_297[1 /*14*/].f_10);
	STREAMING::REQUEST_MODEL(Local_296.f_10);
	STREAMING::REQUEST_MODEL(iLocal_307);
	STREAMING::REQUEST_MODEL(iLocal_310);
	STREAMING::REQUEST_ANIM_DICT("rcmnigel1b");
	STREAMING::REQUEST_ANIM_DICT(&cLocal_434);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_1B_WHISTLES", false, -1);
	HUD::REQUEST_ADDITIONAL_TEXT("NIGEL1B", 0);
	while (((((((((((!func_608() || !func_607()) || !STREAMING::HAS_MODEL_LOADED(Local_298.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_297[0 /*14*/].f_10)) || !STREAMING::HAS_MODEL_LOADED(Local_297[1 /*14*/].f_10)) || !STREAMING::HAS_MODEL_LOADED(Local_296.f_10)) || !STREAMING::HAS_MODEL_LOADED(iLocal_307)) || !STREAMING::HAS_MODEL_LOADED(iLocal_310)) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel1b")) || !STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_434)) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_1B_WHISTLES", false, -1)) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
}

int func_607()//Position - 0x44490
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		STREAMING::REQUEST_MODEL(Local_305[iVar0 /*9*/].f_1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!STREAMING::HAS_MODEL_LOADED(Local_305[iVar0 /*9*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_608()//Position - 0x444DF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		STREAMING::REQUEST_MODEL(Local_306[iVar0 /*9*/].f_1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!STREAMING::HAS_MODEL_LOADED(Local_306[iVar0 /*9*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_609()//Position - 0x4452E
{
	MISC::ENABLE_DISPATCH_SERVICE(2, false);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	MISC::ENABLE_DISPATCH_SERVICE(4, false);
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	PED::SET_CREATE_RANDOM_COPS(false);
	PED::SET_PED_NON_CREATION_AREA(Local_467, Local_466);
	iLocal_317 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_467, Local_466, false, true, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_467, Local_466, false, true);
	if (((__LIB_0__::func_323() || __LIB_0__::func_2(0)) || __LIB_0__::func_324()) || !bLocal_252)
	{
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_467, Local_466, 0);
		MISC::CLEAR_AREA(Local_465, 35f, true, false, false, false);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_465, 27f, false, false, false, false, false, false, 0);
		MISC::CLEAR_AREA_OF_PEDS(Local_465, 27f, 0);
	}
	func_19(0, 0f, 0, 0);
	func_18(0, 4, 1);
	func_19(1, 0f, 0, 0);
	func_18(1, 4, 1);
	func_19(2, 0f, 0, 0);
	func_18(2, 4, 1);
	func_19(3, 0f, 0, 0);
	func_18(3, 4, 1);
	func_19(4, 0f, 0, 0);
	func_18(4, 4, 1);
	func_19(5, 0f, 0, 0);
	func_18(5, 4, 1);
}

void func_611()//Position - 0x44677
{
	int iVar0;
	iVar0 = 0;
	bLocal_223 = false;
	iLocal_226 = 0;
	iLocal_243 = 0;
	iLocal_245 = 0;
	bLocal_241 = false;
	iLocal_240 = 0;
	iLocal_233 = 0;
	iLocal_242 = 0;
	iLocal_239 = 0;
	iLocal_244 = 0;
	bLocal_256 = false;
	iLocal_257 = 0;
	iLocal_258 = 0;
	iLocal_260 = 0;
	bLocal_225 = false;
	iLocal_230 = 0;
	iLocal_229 = 0;
	iLocal_231 = 0;
	bLocal_228 = false;
	iLocal_232 = 0;
	iLocal_234 = 0;
	iLocal_238 = 0;
	iLocal_235 = 0;
	iLocal_236 = 0;
	iLocal_237 = 0;
	iLocal_227 = 0;
	iLocal_246 = 0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iLocal_247[iVar0] = 0;
		iVar0++;
	}
	iLocal_248 = 1;
	iLocal_249 = 0;
	iLocal_250 = 0;
	iLocal_251 = 0;
	iLocal_254 = 0;
	iLocal_255 = 0;
	bLocal_259 = false;
	iLocal_224 = 0;
	bLocal_262 = false;
	bLocal_263 = false;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iLocal_264[iVar0] = 0;
		iVar0++;
	}
	iLocal_265 = 0;
	iLocal_266 = 0;
	iLocal_261 = 0;
	iLocal_267 = 0;
	iLocal_313 = 0;
	iLocal_311 = 0;
	iLocal_312 = 6;
	iLocal_314 = 0;
	fLocal_269[0] = 148.84f;
	fLocal_269[1] = 23.67f;
	fLocal_268[0] = 6.24f;
	fLocal_268[1] = 165.1f;
	fLocal_270[0] = -4.8f;
	fLocal_270[1] = -170.96f;
	fLocal_272 = 2f;
	fLocal_273 = 5.5f;
	fLocal_271 = 2.4f;
	iLocal_274 = 0;
	iLocal_275 = 1;
	iLocal_283 = 0;
	iLocal_282 = -1;
	iLocal_284 = 0;
	iLocal_286 = 0;
	iLocal_285 = 0;
	iLocal_287 = 0;
	iLocal_288 = 0;
	iLocal_289 = 0;
	iLocal_290 = 0;
	iLocal_291 = 0;
	iLocal_292 = 0;
	iVar0 = 0;
	while (iVar0 <= (7 - 1))
	{
		iLocal_293[iVar0] = -1;
		iVar0++;
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_57.f_59))
	{
		iLocal_293[0] = Local_57.f_59;
	}
	iLocal_294 = -1;
	iLocal_277 = 0;
	iLocal_278 = AUDIO::GET_SOUND_ID();
	iLocal_280 = 0;
	iLocal_281 = 0;
	iLocal_279 = 0;
	fLocal_295 = 40.9431f;
	sLocal_319 = "NULL";
	Local_465 = { -1035.73f, 365.44f, 68.91f };
	Local_463 = { -1051.5638f, 369.6159f, 68.9137f };
	Local_467 = { -1073.19f, 342.05f, 63.328316f };
	Local_466 = { -966.24f, 411.05f, 84.820435f };
	Local_475 = { -1058.74f, 378.36f, 68.97f };
	Local_476 = { -1064.68f, 378.42f, 67f };
	Local_477 = { -1039.15f, 351.76f, 75f };
	Local_478 = { -1041.7124f, 348.0622f, 66.91643f };
	Local_479 = { -1036.6644f, 347.7731f, 75.36364f };
	Local_480 = { -1047.452f, 347.56796f, 66.91404f };
	Local_481 = { -1046.7096f, 353.17792f, 73.917915f };
	Local_482 = { -1057.5416f, 348.6674f, 66.91409f };
	Local_483 = { -1057.2825f, 352.61615f, 73.91387f };
	Local_484 = { -1063.3741f, 350.39594f, 66.91391f };
	Local_485 = { -1061.6511f, 352.8345f, 73.815926f };
	Local_464[0 /*3*/] = { -1054.42f, 368.18f, 68.35f };
	Local_464[1 /*3*/] = { -1054.7f, 355.94f, 68.35f };
	Local_469[0 /*3*/] = { -1053.9471f, 370.4447f, 68.6948f };
	Local_469[1 /*3*/] = { -1054.2603f, 353.4767f, 68.6948f };
	Local_470[0 /*3*/] = { -1054.0918f, 373.472f, 68.9138f };
	Local_470[1 /*3*/] = { -1054.13f, 350.572f, 68.913f };
	Local_472 = { -1059.4507f, 361.98215f, 69.78663f };
	Local_473 = { -1054.6334f, 353.72632f, 67.44479f };
	Local_474 = { -1054.807f, 370.00116f, 69.42931f };
	Local_471[0 /*3*/] = { -1059.8446f, 366.60718f, 69.75161f };
	Local_471[1 /*3*/] = { -1059.6418f, 357.37802f, 69.75161f };
	Local_486 = { -1059f, 360.976f, 69f };
	Local_487 = { 0f, 0f, -1.08f };
	Local_488 = { -1011.8854f, 346.9502f, 69.2904f };
	Local_297[0 /*14*/].f_10 = joaat("IG_TylerDix");
	Local_297[1 /*14*/].f_10 = joaat("A_F_Y_Beach_01");
	Local_296.f_10 = joaat("S_M_M_Gardener_01");
	Local_298.f_3 = { -1050.03f, 368.95f, 69.29f };
	Local_298.f_8 = { 0f, 0f, -11.27f };
	Local_298.f_1 = joaat("prop_nigel_bag_pickup");
	Local_298.f_6 = joaat("PICKUP_CUSTOM_SCRIPT");
	Local_298.f_7 = 0;
	MISC::SET_BIT(&(Local_298.f_7), 3);
	MISC::SET_BIT(&(Local_298.f_7), 4);
	MISC::SET_BIT(&(Local_298.f_7), 1);
	MISC::SET_BIT(&(Local_298.f_7), 8);
	iLocal_307 = joaat("comet2");
	iLocal_310 = joaat("speedo");
	Local_306[0 /*9*/].f_1 = joaat("prop_beach_ring_01");
	Local_306[0 /*9*/].f_2 = { -1047.42f, 370.22f, 69.09f };
	Local_306[0 /*9*/].f_8 = 38.2398f;
	Local_306[0 /*9*/].f_5 = { -0.57f, -0.15f, 92.03f };
	Local_306[1 /*9*/].f_1 = joaat("prop_beachball_01");
	Local_306[1 /*9*/].f_2 = { -1051.1575f, 368.6751f, 68.9139f };
	Local_306[1 /*9*/].f_5 = { 0f, 0f, 90f };
	Local_306[1 /*9*/].f_8 = 53.2741f;
	Local_305[0 /*9*/].f_1 = joaat("prop_leaf_blower_01");
	Local_305[0 /*9*/].f_2 = { -0.3f, -2.4f, 0.16f };
	Local_305[0 /*9*/].f_5 = { 0f, 0f, 75f };
	Local_305[1 /*9*/].f_1 = joaat("prop_tool_box_01");
	Local_305[1 /*9*/].f_2 = { 0.3f, -0.8f, -0.15f };
	Local_305[1 /*9*/].f_5 = { 0f, 0f, 325f };
	Local_305[2 /*9*/].f_1 = joaat("prop_tool_rake");
	Local_305[2 /*9*/].f_2 = { -0.2f, -0.9f, -0.1f };
	Local_305[2 /*9*/].f_5 = { 270f, 180f, 20f };
	Local_301.f_1 = joaat("p_amb_phone_01");
	Local_301.f_2 = { 0f, 0f, 0f };
	Local_301.f_5 = { 0f, 0f, 0f };
	iLocal_308 = joaat("police");
	iLocal_309 = joaat("S_M_Y_Cop_01");
	StringCopy(&Local_424, "", 24);
	StringCopy(&cLocal_425, "rcmnigel1b@reactions", 64);
	StringCopy(&cLocal_434, "rcmnigel1bnmt_1b", 64);
	iLocal_492 = joaat("WEAPON_UNARMED");
	func_615(0, joaat("prop_lrggate_01_l"), -1011.63f, 367.21f, 72.24f);
	func_615(1, joaat("prop_lrggate_01_r"), -1006.89f, 364.48f, 72.24f);
	func_615(2, joaat("prop_lrggate_01_l"), -1017.81f, 351.32f, 70.66f);
	func_615(3, joaat("prop_lrggate_01_r"), -1012.49f, 352.58f, 70.66f);
	func_615(4, joaat("prop_lrggate_03b_ld"), -1040.49f, 384.38f, 69.92f);
	func_615(5, joaat("prop_lrggate_03b_ld"), -1056.19f, 382.26f, 69.72f);
	__LIB_16__::func_329(&uLocal_320);
	__LIB_16__::func_328(&uLocal_320, -987.81f, 363.85f, 71.32f);
	__LIB_16__::func_328(&uLocal_320, -988.15f, 352.77f, 71.03f);
	__LIB_16__::func_328(&uLocal_320, -1030.05f, 342.06f, 67.88f);
	__LIB_16__::func_328(&uLocal_320, -1071.7f, 346.33f, 66.21f);
	__LIB_16__::func_328(&uLocal_320, -1070.97f, 379.39f, 67.96f);
	__LIB_16__::func_328(&uLocal_320, -1067.3f, 387.2f, 67.82f);
	__LIB_16__::func_328(&uLocal_320, -1059.75f, 390.57f, 67.96f);
	__LIB_16__::func_328(&uLocal_320, -1030.35f, 392.35f, 69.34f);
	__LIB_16__::func_328(&uLocal_320, -1016.2f, 378.02f, 70.67f);
	__LIB_16__::func_328(&uLocal_320, -1006f, 370.87f, 71.04f);
	__LIB_16__::func_327(&uLocal_320);
	__LIB_16__::func_329(&uLocal_372);
	__LIB_16__::func_328(&uLocal_372, -1025.32f, 380.54f, 70.79f);
	__LIB_16__::func_328(&uLocal_372, -1020.4f, 375.87f, 70.38f);
	__LIB_16__::func_328(&uLocal_372, -1012.08f, 369.8f, 71.1f);
	__LIB_16__::func_328(&uLocal_372, -1011.78f, 367.31f, 71.12f);
	__LIB_16__::func_328(&uLocal_372, -1006.72f, 364.41f, 71.28f);
	__LIB_16__::func_328(&uLocal_372, -1004.07f, 365.51f, 71.78f);
	__LIB_16__::func_328(&uLocal_372, -993.65f, 360.78f, 71.51f);
	__LIB_16__::func_328(&uLocal_372, -993.68f, 355.4f, 71.02f);
	__LIB_16__::func_328(&uLocal_372, -1008.25f, 350.7f, 70f);
	__LIB_16__::func_328(&uLocal_372, -1010.9f, 352.95f, 69.54f);
	__LIB_16__::func_328(&uLocal_372, -1018.94f, 351.08f, 69.9f);
	__LIB_16__::func_328(&uLocal_372, -1020.24f, 349.86f, 69.67f);
	__LIB_16__::func_328(&uLocal_372, -1020.85f, 347.65f, 68.93f);
	__LIB_16__::func_328(&uLocal_372, -1030.98f, 346.06f, 70.4f);
	__LIB_16__::func_328(&uLocal_372, -1036.05f, 346.14f, 70.45f);
	__LIB_16__::func_327(&uLocal_372);
	func_485();
}

void func_615(int iParam0, int iParam1, struct<3> Param2)//Position - 0x45099
{
	char cVar0[24];
	StringCopy(&cVar0, "N1B_", 24);
	StringIntConCat(&cVar0, iParam0, 24);
	iLocal_276[iParam0] = MISC::GET_HASH_KEY(&cVar0);
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_276[iParam0]))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_276[iParam0], iParam1, Param2, false, true, false);
	}
}

void func_616()//Position - 0x450E0
{
	if (__LIB_14__::func_843())
	{
		func_483(0, 1);
	}
	__LIB_14__::func_871(&Local_57, 1, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

