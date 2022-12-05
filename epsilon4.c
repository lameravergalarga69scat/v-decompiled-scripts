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
	var uLocal_35 = 10;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
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
	int iLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	struct<61> Local_81 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	struct<3> Local_83 = { 0, 0, 0 } ;
	float fLocal_84 = 0f;
	struct<3> Local_85 = { 0, 0, 0 } ;
	float fLocal_86 = 0f;
	struct<3> Local_87 = { 0, 0, 0 } ;
	float fLocal_88 = 0f;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	char* sLocal_91 = NULL;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int* iLocal_94 = NULL;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 16;
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
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	bool bLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	bool bLocal_281 = 0;
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
	struct<43> Local_293[4];
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	struct<6> Local_296[11];
	int iLocal_297 = 0;
	struct<8> Local_298[2];
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	struct<15> Local_301 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	float fLocal_302 = 0f;
	int* iLocal_303 = NULL;
	var uLocal_304 = 15;
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
	var uLocal_356 = 15;
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
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	var uLocal_422 = 0;
	int iLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	float fLocal_429 = 0f;
	float fLocal_430 = 0f;
	float fLocal_431 = 0f;
	float fLocal_432 = 0f;
	float fLocal_433 = 0f;
	struct<10> Local_434 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_435 = 0;
	struct<61> Local_436 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	uLocal_78 = __LIB_2__.func_108(60);
	uLocal_79 = __LIB_2__.func_108(14);
	Local_82 = { 1813.2936f, 4698.785f, 38.9553f };
	Local_83 = { 1827.1781f, 4698.114f, 38.1653f };
	fLocal_84 = 187.4554f;
	Local_85 = { 1811.9602f, 4697.071f, 39.1076f };
	fLocal_86 = 330.5137f;
	Local_87 = { 1814.0197f, 4697.051f, 38.9678f };
	fLocal_88 = 24.0044f;
	iLocal_89 = joaat("WEAPON_DIGISCANNER");
	iLocal_90 = WEAPON::GET_WEAPONTYPE_MODEL(iLocal_89);
	sLocal_91 = "empty";
	iLocal_269 = 1;
	iLocal_426 = -1;
	iLocal_427 = -1;
	iLocal_428 = -1;
	fLocal_429 = 30f;
	fLocal_430 = 0.35f;
	fLocal_431 = 0f;
	fLocal_432 = 0.02f;
	fLocal_433 = -0.05f;
	Local_81 = { ScriptParam_436 };
	__LIB_20__.func_264(&Local_81);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__.func_135("Force cleanup [TERMINATING]");
		__LIB_38__.func_39(1);
		func_418();
	}
	if (__LIB_0__.func_294() || __LIB_0__.func_2(0))
	{
		Global_78564 = 1;
		iLocal_77 = 0;
		while (!func_408(&Local_81))
		{
			SYSTEM::WAIT(0);
		}
		Global_78564 = 0;
	}
	iLocal_92 = __LIB_11__.func_795();
	iLocal_93 = __LIB_11__.func_517(1855.08f, 4755.85f, 36.81f, 25f);
	iLocal_426 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1815.39f, 4698f, 38.87f, 3.5f, 3.5f, 3f, 0f, false, 7);
	iLocal_427 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1824.12f, 4701.39f, 38.29f, 2.5f, 2.5f, 2.5f, 0f, false, 7);
	iLocal_428 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1801.28f, 4700.25f, 39.42f, 2f, 2f, 2f, 0f, false, 7);
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("EPSILONISM_04_MIX"))
	{
		__LIB_11__.func_797("Starting dynamic mix EPSILONISM_04_MIX");
		AUDIO::START_AUDIO_SCENE("EPSILONISM_04_MIX");
	}
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), joaat("PLAYER"));
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
	iLocal_290 = GRAPHICS::SET_GRASS_CULL_SPHERE(1751.65f, 4676.77f, 43.03f, 1.5f);
	__LIB_24__.func_930();
	func_385();
	func_384();
	Local_434.f_0 = 0;
	func_383();
	iVar0 = 0;
	while (iVar0 < iLocal_294)
	{
		func_381(&(Local_293[iVar0 /*43*/]));
		iVar0++;
	}
	func_380(&(Local_298[0 /*8*/]), Local_85, fLocal_86, Local_81.f_28[0], 0);
	func_380(&(Local_298[1 /*8*/]), Local_87, fLocal_88, Local_81.f_28[1], 0);
	if (__LIB_0__.func_294())
	{
		if (__LIB_0__.func_315() == 0)
		{
			__LIB_0__.func_370(Local_83, fLocal_84, 1, 0);
			func_377(1);
			__LIB_10__.func_700(&Local_81, 0, 1);
			func_375();
			__LIB_11__.func_797("Done replay setup");
		}
	}
	else if (__LIB_0__.func_2(0))
	{
		__LIB_0__.func_370(Local_83, fLocal_84, 1, 0);
		func_377(0);
		__LIB_10__.func_700(&Local_81, 1, 1);
		func_375();
	}
	__LIB_20__.func_743(60, 0, 0);
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_Epsilon4", 0);
		__LIB_35__.func_898(Local_81.f_9, 0, 0, 0, 0, 0);
		PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
		if (__LIB_4__.func_739())
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 28 /*INPUT_SPECIAL_ABILITY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
		if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) == iLocal_89)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
			}
		}
		switch (Local_434.f_0)
		{
			case 0:
				func_348();
				break;
			case 1:
				func_343();
				break;
			case 2:
				func_306();
				break;
			case 3:
				func_243();
				break;
			case 4:
				func_232();
				break;
			case 5:
				func_11();
				break;
			case 6:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x3FD
{
	char* sVar0;
	switch (Local_434.f_1)
	{
		case 0:
			func_9();
			AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
			sVar0 = sLocal_91;
			switch (Local_434.f_9)
			{
				case 8:
					sVar0 = "EPS4_X1";
					break;
				case 2:
					sVar0 = "EPS4_X2";
					break;
				case 3:
					sVar0 = "EPS4_X3";
					break;
				case 4:
					sVar0 = "EPS4_X4";
					break;
				case 5:
					sVar0 = "EPS4_X5";
					break;
				case 6:
					sVar0 = "EPS4_X7";
					break;
				case 7:
					sVar0 = "EPS4_X8";
					break;
				default:
					break;
			}
			if (MISC::ARE_STRINGS_EQUAL(sVar0, sLocal_91))
			{
				__LIB_38__.func_39(1);
			}
			else
			{
				__LIB_39__.func_861(sVar0, 1);
			}
			Local_434.f_1 = 1;
			break;
		case 1:
			if (__LIB_0__.func_204())
			{
				func_4();
				func_2(&(Local_298[0 /*8*/]));
				func_2(&(Local_298[1 /*8*/]));
				func_418();
			}
			break;
	}
}

void func_2(int* iParam0)//Position - 0x4E3
{
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	__LIB_0__.func_0(iParam0);
}

void func_4()//Position - 0x53C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_294)
	{
		__LIB_0__.func_123(&(Local_293[iVar0 /*43*/].f_1));
		iVar0++;
	}
}

void func_9()//Position - 0x610
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	HUD::CLEAR_PRINTS();
	if (__LIB_0__.func_1("EPS4_T0") || __LIB_0__.func_1("EPS4_T1"))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_11()//Position - 0x651
{
	int iVar0;
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	if (iLocal_279 == 0)
	{
		__LIB_0__.func_498(750);
	}
	func_230();
	func_9();
	__LIB_8__.func_770(0);
	__LIB_20__.func_743(55, 0, 1);
	func_22(76, 1);
	Global_113386.f_18574.f_381 = 0;
	if (!__LIB_0__.func_2(0))
	{
		while (!__LIB_26__.func_490(1357988739, 6, 1, 60, 30000, 10000, -1, 0, -1, 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	STREAMING::REQUEST_ANIM_DICT("weapons@holster_1h");
	while (__LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) == iLocal_89)
	{
		SYSTEM::WAIT(0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		if (STREAMING::HAS_ANIM_DICT_LOADED("weapons@holster_1h"))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "weapons@holster_1h", "holster", 3))
			{
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0f, false, false, false);
			}
			else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "weapons@holster_1h", "holster") >= 0.5f)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
	}
	STATS::STAT_GET_INT(joaat("NUM_EPSILON_STEP"), &iVar0, -1);
	if (iVar0 < 12)
	{
		STATS::STAT_SET_INT(joaat("NUM_EPSILON_STEP"), 12, true);
		__LIB_0__.func_4(23, 12);
	}
	func_418();
}

void func_22(int iParam0, bool bParam1)//Position - 0xBAF
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_18__.func_205();
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
	__LIB_38__.func_136(iVar0, 0);
	MISC::SET_BIT(&Global_78567, 1);
	if (Global_112473[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		__LIB_0__.func_56(&(Global_112473[iVar0 /*10*/].f_9));
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
	__LIB_32__.func_577(iVar0, 1, 0, 0);
	__LIB_0__.func_46(0, 0);
	MemCopy(&sVar1, {__LIB_0__.func_339(iVar0)}, 4);
	__LIB_0__.func_44(&sVar1, __LIB_26__.func_250());
	func_48();
	if (BitTest(Global_113386.f_10016.f_25, 3))
	{
		__LIB_0__.func_18();
	}
	__LIB_35__.func_897();
	if (iParam0 == 210 || iParam0 == 211)
	{
		__LIB_24__.func_943(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		__LIB_24__.func_943(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		__LIB_24__.func_943(iParam0, 0, 0);
	}
	__LIB_0__.func_533();
}

void func_48()//Position - 0x1CE8
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
			iVar3 = __LIB_18__.func_168(iVar1);
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

int func_49(int iParam0, int iParam1, int iParam2)//Position - 0x1DA9
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, iParam2, -1) };
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
		uVar2 = { __LIB_18__.func_180(iVar0, iParam2) };
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
		uVar5 = { __LIB_18__.func_247(iVar0, iParam2) };
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
		uVar6 = { __LIB_18__.func_180(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__.func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
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

int func_50(int iParam0, int iParam1, int iParam2)//Position - 0x1F65
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
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

int func_52(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x202C
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
		Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__.func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_20__.func_322(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_6__.func_795(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_6__.func_795(iParam0, 9);
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
			iVar7 = __LIB_6__.func_788(iParam0, 1);
			if (!__LIB_6__.func_780(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_6__.func_788(iParam0, 0);
			if (!__LIB_6__.func_779(iVar10, 14, iVar8, -1) && !__LIB_6__.func_827(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_6__.func_788(iParam0, 2);
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
			uVar11 = { __LIB_18__.func_180(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, uVar11[iVar0], -1) };
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
							uVar12 = { __LIB_18__.func_247(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_20__.func_322(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_40__.func_943(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
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
							__LIB_0__.func_211(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_20__.func_322(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_40__.func_943(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
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
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, func_58(iParam0, iVar0, -1), -1) };
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
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_52(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_35__.func_896(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_52(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_52(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_52(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_52(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_52(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_18__.func_247(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_20__.func_322(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_943(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
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
		__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_20__.func_322(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__.func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
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
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__.func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_52(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_39__.func_857(iVar10, iParam1, iParam2);
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

int func_58(int iParam0, int iParam1, int iParam2)//Position - 0x3069
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
				return __LIB_6__.func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__.func_795(iParam0, iParam1);
		}
	}
	return -99;
}

int func_92(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x98B3
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
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

int func_166(int iParam0, int iParam1, int iParam2)//Position - 0x1FD97
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_18__.func_180(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_166(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_166(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_166(iParam0, 14, iVar4))
										{
											if (!__LIB_24__.func_955(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__.func_795(iParam0, iVar2);
						Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_24__.func_955(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
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
		uVar8 = { __LIB_18__.func_247(iVar0, iParam2) };
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
	else if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_230()//Position - 0x274E1
{
	AUDIO::STOP_SOUND(Local_301.f_2);
	AUDIO::STOP_SOUND(Local_301.f_3);
	AUDIO::STOP_SOUND(Local_301.f_4);
	AUDIO::STOP_SOUND(Local_301.f_5);
	Local_301.f_6 = 0;
	Local_301.f_7 = 0;
}

void func_232()//Position - 0x2758A
{
	switch (Local_434.f_1)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("weapons@holster_1h");
			while (__LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) == iLocal_89)
			{
				SYSTEM::WAIT(0);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				if (STREAMING::HAS_ANIM_DICT_LOADED("weapons@holster_1h"))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "weapons@holster_1h", "holster", 3))
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0f, false, false, false);
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "weapons@holster_1h", "holster") >= 0.5f)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					}
				}
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), iLocal_89);
			Local_434.f_1 = 1;
			break;
		case 1:
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				func_242(6);
				Local_434.f_9 = 1;
				Local_434.f_1 = 3;
			}
			else if (ENTITY::IS_ENTITY_DEAD(Local_298[0 /*8*/], false))
			{
				func_242(6);
				Local_434.f_9 = 2;
				Local_434.f_1 = 3;
			}
			else if (ENTITY::IS_ENTITY_DEAD(Local_298[1 /*8*/], false))
			{
				func_242(6);
				Local_434.f_9 = 3;
				Local_434.f_1 = 3;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_298[0 /*8*/], PLAYER::PLAYER_PED_ID(), true) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_298[0 /*8*/], 0, 2))
			{
				func_242(6);
				Local_434.f_9 = 4;
				Local_434.f_1 = 3;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_298[1 /*8*/], PLAYER::PLAYER_PED_ID(), true) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_298[1 /*8*/], 0, 2))
			{
				func_242(6);
				Local_434.f_9 = 5;
				Local_434.f_1 = 3;
			}
			else if (func_235(&(Local_298[0 /*8*/])))
			{
				func_242(6);
				Local_434.f_9 = 6;
				Local_434.f_1 = 3;
			}
			else if (func_235(&(Local_298[1 /*8*/])))
			{
				func_242(6);
				Local_434.f_9 = 7;
				Local_434.f_1 = 3;
			}
			else if (__LIB_0__.func_121(Local_298[0 /*8*/]))
			{
				if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_298[0 /*8*/], 1) >= 50f)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					func_242(5);
					Local_434.f_1 = 3;
				}
			}
			break;
		case 3:
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			func_375();
			break;
	}
}

int func_235(var uParam0)//Position - 0x2782C
{
	if (__LIB_36__.func_80(*uParam0, 1090519040, 1097859072))
	{
		return 1;
	}
	return 0;
}

void func_242(int iParam0)//Position - 0x27B14
{
	Local_434.f_8 = iParam0;
}

void func_243()//Position - 0x27B23
{
	int iVar0;
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	if (Local_434.f_3 == 1)
	{
		func_304(1, 1);
		CUTSCENE::REMOVE_CUTSCENE();
		if (iLocal_283 == 0)
		{
			__LIB_32__.func_565("EPS_4_MCS_1");
		}
		else if (iLocal_283 == 1)
		{
			__LIB_32__.func_565("EPS_4_MCS_2");
		}
		else
		{
			__LIB_32__.func_565("EPS_4_MCS_3");
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			__LIB_11__.func_797("Trying to set player component variation");
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_39__.func_905("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
			}
			if (iLocal_283 == 0 || iLocal_283 == 2)
			{
				__LIB_11__.func_797("Trying to set Jimmy prop variation");
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy_Boston", 1, 0, 0, 0);
			}
		}
		__LIB_11__.func_797("SKIP: Doing sync for cutscene skip");
		__LIB_32__.func_751(1, 1, 1);
		Local_434.f_3 = 0;
	}
	if (Local_434.f_1 == 0)
	{
		__LIB_11__.func_796("Doing setup for RockScene:", iLocal_283);
		func_293(1);
		func_292();
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 200, 150);
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			__LIB_11__.func_797("Trying to set player component variation");
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_39__.func_905("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
			}
			if (iLocal_283 == 0 || iLocal_283 == 2)
			{
				__LIB_11__.func_797("Trying to set Jimmy prop variation");
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy_Boston", 1, 0, 0, 0);
			}
		}
		if (!__LIB_1__.func_183(iLocal_292))
		{
			iLocal_292 = VEHICLE::CREATE_VEHICLE(joaat("bison"), 1851.57f, 4772.12f, 39.8f, 31.35f, true, true, false);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_292, 157, 157);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_292, 5, 157);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_292, 5f);
		}
		func_290(&(Local_298[1 /*8*/]), 1);
		func_290(&(Local_298[0 /*8*/]), 1);
		if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
		{
			while (!__LIB_18__.func_170(1, 1093140480, 0))
			{
				__LIB_11__.func_797("Waiting for cutscene to be OK to start...");
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				func_293(1);
				func_292();
				PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 200, 150);
				if (iLocal_283 == 0)
				{
					__LIB_32__.func_565("EPS_4_MCS_1");
				}
				else if (iLocal_283 == 1)
				{
					__LIB_32__.func_565("EPS_4_MCS_2");
				}
				else
				{
					__LIB_32__.func_565("EPS_4_MCS_3");
				}
				SYSTEM::WAIT(0);
			}
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
			iVar0 = MISC::GET_GAME_TIMER();
			while ((MISC::GET_GAME_TIMER() - iVar0) < 500)
			{
				__LIB_11__.func_797("Doing 500ms pause");
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
				func_293(1);
				func_292();
				PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 200, 150);
				SYSTEM::WAIT(0);
			}
			if (iLocal_283 == 0)
			{
				if (__LIB_0__.func_121(Local_298[1 /*8*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_298[1 /*8*/], "Jimmy_Boston", 0, 0, 0);
				}
				if (__LIB_0__.func_121(Local_298[0 /*8*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_298[0 /*8*/], "Marnie", 0, 0, 0);
				}
				if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
				}
				if (__LIB_0__.func_121(Local_301.f_0))
				{
					iLocal_303 = __LIB_18__.func_490(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_DIGISCANNER"), 1, 0, 0, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_303, "Artefact_Detector", 0, 0, 0);
				}
				if (__LIB_0__.func_121(Local_293[iLocal_283 /*43*/].f_1))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_293[iLocal_283 /*43*/].f_1, "EPS_TV", 0, 0, 0);
				}
			}
			else if (iLocal_283 == 1)
			{
				if (__LIB_0__.func_121(Local_298[0 /*8*/]))
				{
					Local_298[0 /*8*/].f_7 = 0;
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_298[0 /*8*/], "Marnie", 0, 0, 0);
				}
				if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
				}
				if (__LIB_0__.func_121(Local_301.f_0))
				{
					iLocal_303 = __LIB_18__.func_490(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_DIGISCANNER"), 1, 0, 0, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_303, "Artefact_Detector", 0, 0, 0);
				}
				if (__LIB_0__.func_121(Local_293[iLocal_283 /*43*/].f_1))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_293[iLocal_283 /*43*/].f_1, "EPS_Battery", 0, 0, 0);
				}
			}
			else
			{
				if (__LIB_0__.func_121(Local_298[1 /*8*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_298[1 /*8*/], "Jimmy_Boston", 0, 0, 0);
				}
				if (__LIB_0__.func_121(Local_298[0 /*8*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_298[0 /*8*/], "Marnie", 0, 0, 0);
				}
				if (__LIB_0__.func_121(Local_301.f_0))
				{
					iLocal_303 = __LIB_18__.func_490(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_DIGISCANNER"), 1, 0, 0, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_303, "Artefact_Detector", 0, 0, 0);
				}
				if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
				}
				if (__LIB_0__.func_121(Local_293[iLocal_283 /*43*/].f_1))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_293[iLocal_283 /*43*/].f_1, "Old_Boot", 0, 0, 0);
				}
			}
			CUTSCENE::START_CUTSCENE(0);
			RECORDING::REPLAY_START_EVENT(1);
			iVar0 = MISC::GET_GAME_TIMER();
			while ((MISC::GET_GAME_TIMER() - iVar0) < 1)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				SYSTEM::WAIT(0);
				RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_Epsilon4", 0);
			}
			if (iLocal_283 >= 2)
			{
				if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), -1, true, true);
				}
			}
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false);
			__LIB_32__.func_755(Local_293[iLocal_283 /*43*/].f_25, Local_293[iLocal_283 /*43*/].f_28, Local_293[iLocal_283 /*43*/].f_31, Local_293[iLocal_283 /*43*/].f_32, Local_293[iLocal_283 /*43*/].f_35, __LIB_9__.func_996(), 1, 1, 1, 0, 0);
			func_260(Local_293[iLocal_283 /*43*/].f_2, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1);
		}
		__LIB_11__.func_796("Finished setup, moving to run loop for RockScene #:", iLocal_283);
		Local_434.f_1 = 1;
	}
	if (Local_434.f_1 == 1)
	{
		if (func_259())
		{
		}
		else if (Local_434.f_6)
		{
			Local_434.f_1 = 3;
		}
		else if (Local_434.f_4)
		{
			if (iLocal_283 < (iLocal_294 - 1))
			{
				func_242(2);
			}
			else
			{
				func_242(5);
			}
			Local_434.f_1 = 3;
			iLocal_283++;
		}
		else if (Local_434.f_5)
		{
			func_242(2);
			Local_434.f_1 = 3;
		}
		else
		{
			if (iLocal_283 >= 2)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 17000)
					{
						if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							STREAMING::NEW_LOAD_SCENE_START(1847.4722f, 4756.157f, 36.6968f, __LIB_2__.func_406(271.4718f), 145f, 0);
						}
					}
				}
			}
			if (Local_434.f_2 == 0)
			{
				func_292();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					Local_434.f_2 = 1;
				}
				func_257();
				if (iLocal_283 >= 2)
				{
					func_256();
					func_255();
				}
				else if (iLocal_283 == 1)
				{
					if (func_254())
					{
						Local_434.f_2 = 1;
					}
					func_256();
				}
				else
				{
					if (func_254())
					{
						Local_434.f_2 = 1;
					}
					func_256();
					func_255();
				}
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					Local_434.f_2 = -1;
					__LIB_11__.func_797("Cutscene not active, setting event -1");
				}
			}
			if (Local_434.f_2 == 1)
			{
				func_253();
				func_254();
				func_257();
				if (iLocal_283 >= 2)
				{
					func_256();
					func_255();
				}
				else if (iLocal_283 == 1)
				{
					func_256();
				}
				else
				{
					func_256();
					func_255();
				}
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				}
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					Local_434.f_2 = -1;
					__LIB_11__.func_797("Cutscene not active, setting event -1");
				}
			}
			if (Local_434.f_2 == -1)
			{
				__LIB_11__.func_797("Doing event -1...");
				if (iLocal_283 < (iLocal_294 - 1))
				{
					func_242(2);
				}
				else
				{
					func_242(4);
				}
				if (iLocal_283 >= 2)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("EPS4_STOP");
					__LIB_0__.func_123(&(Local_293[iLocal_283 /*43*/].f_1));
				}
				Local_434.f_1 = 3;
				iLocal_283++;
				__LIB_11__.func_796("END CUTSCENE: iCurrentRock = ", iLocal_283);
			}
		}
	}
	if (Local_434.f_1 == 3)
	{
		RECORDING::REPLAY_STOP_EVENT();
		__LIB_11__.func_797("Doing cleanup for RockScene");
		__LIB_32__.func_576(1, 0, 1, 1);
		func_375();
	}
}

void func_253()//Position - 0x28591
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_95, "SET_COLOUR");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_95, "SET_DISTANCE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(10f);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	HUD::SET_TEXT_RENDER_ID(iLocal_96);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_95, 0.1f, 0.24f, 0.21f, 0.51f, 100, 100, 100, 255, 0);
}

int func_254()//Position - 0x2861D
{
	if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
		{
			if (iLocal_283 >= 2)
			{
				__LIB_11__.func_797("*** Forcing Michael's move state (end cutscene)");
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), false, 1, false);
				return 1;
			}
			else
			{
				__LIB_11__.func_797("*** Forcing Michael's move state");
				if (__LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) != iLocal_89)
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_89, -1, true, true);
				}
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), false, 1, false);
				return 1;
			}
		}
	}
	return 0;
}

void func_255()//Position - 0x2869B
{
	if (__LIB_0__.func_121(Local_298[1 /*8*/]))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy_Boston", 0))
		{
			if (iLocal_283 >= 2)
			{
				if (__LIB_0__.func_121(Local_81.f_28[1]) && __LIB_1__.func_183(iLocal_292))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_435);
					TASK::TASK_WARP_PED_INTO_VEHICLE(0, iLocal_292, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_435);
					TASK::TASK_PERFORM_SEQUENCE(Local_81.f_28[1], iLocal_435);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_435);
					__LIB_11__.func_797("Did Jimmy pass exit");
				}
			}
			else
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(Local_81.f_28[1], 1764.089f, 4665.8794f, 42.3031f, 1f, 20000, 40000f, 0.5f);
				__LIB_11__.func_797("Did Jimmy regular exit");
			}
			PED::FORCE_PED_MOTION_STATE(Local_298[1 /*8*/], joaat("MotionState_Walk"), false, 1, false);
		}
	}
}

void func_256()//Position - 0x28757
{
	if (__LIB_0__.func_121(Local_298[0 /*8*/]))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Marnie", 0))
		{
			if (iLocal_283 >= 2)
			{
				if (__LIB_0__.func_121(Local_81.f_28[0]) && __LIB_1__.func_183(iLocal_292))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_435);
					TASK::TASK_WARP_PED_INTO_VEHICLE(0, iLocal_292, -1);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_292, 1743.33f, 4962.18f, 45.16f, 20f, 0, joaat("bison"), 786599, 5f, -1f);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_292, 30f, 262275);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_435);
					TASK::TASK_PERFORM_SEQUENCE(Local_81.f_28[0], iLocal_435);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_435);
					__LIB_11__.func_797("Did Marnie pass exit");
				}
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_81.f_28[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_81.f_28[0], 0f, 7f, 0f), 1f, 20000, 0.25f, 5, 40000f);
				__LIB_11__.func_797("Did Marnie regular exit");
			}
			PED::FORCE_PED_MOTION_STATE(Local_298[0 /*8*/], joaat("MotionState_Walk"), false, 1, false);
		}
	}
}

void func_257()//Position - 0x2884C
{
	if (__LIB_0__.func_121(iLocal_303))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Artefact_Detector", 0))
		{
			if (iLocal_283 < 2)
			{
				__LIB_11__.func_797("*** Detector exit");
				WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_303, PLAYER::PLAYER_PED_ID());
				__LIB_0__.func_123(&iLocal_303);
				if (!ENTITY::DOES_ENTITY_EXIST(Local_301.f_0))
				{
					__LIB_11__.func_797("*** Recreating gDetector.hObj after cutscene...");
					Local_301.f_0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID(), 1);
				}
			}
			else
			{
				__LIB_11__.func_797("*** Detector exit (end cutscene)");
				__LIB_0__.func_123(&iLocal_303);
			}
		}
	}
}

int func_259()//Position - 0x288D2
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		func_242(6);
		Local_434.f_9 = 1;
		Local_434.f_1 = 3;
		return 1;
	}
	else if (ENTITY::IS_ENTITY_DEAD(Local_298[0 /*8*/], false))
	{
		if (iLocal_283 < 2)
		{
			func_242(6);
			Local_434.f_9 = 2;
			Local_434.f_1 = 3;
			__LIB_11__.func_797("Mission failed: Marnie dead");
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_DEAD(Local_298[1 /*8*/], false))
	{
		if (iLocal_283 < 2)
		{
			func_242(6);
			Local_434.f_9 = 3;
			Local_434.f_1 = 3;
			__LIB_11__.func_797("Mission failed: Jimmy dead");
			return 1;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_298[0 /*8*/], PLAYER::PLAYER_PED_ID(), true) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_298[0 /*8*/], 0, 2))
	{
		func_242(6);
		Local_434.f_9 = 4;
		Local_434.f_1 = 3;
		__LIB_11__.func_797("Mission failed: Marnie injured");
		return 1;
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_298[1 /*8*/], PLAYER::PLAYER_PED_ID(), true) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_298[1 /*8*/], 0, 2))
	{
		func_242(6);
		Local_434.f_9 = 5;
		Local_434.f_1 = 3;
		__LIB_11__.func_797("Mission failed: Jimmy injured");
		return 1;
	}
	return 0;
}

void func_260(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x289EC
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_26__.func_258(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_18__.func_173())
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
			MISC::CLEAR_AREA_OF_PEDS(__LIB_0__.func_85(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
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
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_34 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__.func_84(500, 0);
		}
	}
}

void func_290(var uParam0, bool bParam1)//Position - 0x2AB60
{
	if (__LIB_1__.func_197(*uParam0))
	{
		uParam0->f_1 = 3;
		uParam0->f_2 = 0;
		if (bParam1)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam0);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(*uParam0);
		}
		if (uParam0->f_3 != -1)
		{
			Local_296[uParam0->f_3 /*6*/].f_5 = 0;
			uParam0->f_3 = -1;
		}
		if (PED::IS_PED_IN_GROUP(*uParam0))
		{
			PED::REMOVE_PED_FROM_GROUP(*uParam0);
		}
	}
	else
	{
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
	}
}

void func_292()//Position - 0x2ABF3
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_95, "SET_COLOUR");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(67);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(200);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(209);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(67);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_95, "SET_DISTANCE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(100f);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	HUD::SET_TEXT_RENDER_ID(iLocal_96);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_95, 0.1f, 0.24f, 0.21f, 0.51f, 100, 100, 100, 255, 0);
}

void func_293(int iParam0)//Position - 0x2AC7D
{
	if (iParam0 == 1)
	{
		if (func_294())
		{
			if ((MISC::ARE_STRINGS_EQUAL(Local_301.f_14, "NO_RECENT_ANIM") || !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_301.f_0, "rcm_epsilonism4", Local_301.f_14, 3)) || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_301.f_0, "rcm_epsilonism4", Local_301.f_14) >= 0.98f)
			{
				if (fLocal_302 > 80f)
				{
					Local_301.f_14 = "detector_level3_prop";
				}
				else if (fLocal_302 > 50f)
				{
					Local_301.f_14 = "detector_level2_prop";
				}
				else
				{
					Local_301.f_14 = "detector_level1_prop";
				}
				ENTITY::PLAY_ENTITY_ANIM(Local_301.f_0, Local_301.f_14, "rcm_epsilonism4", 16f, false, false, false, 0f, 0);
			}
		}
	}
	else if (func_294())
	{
		if (!MISC::ARE_STRINGS_EQUAL(Local_301.f_14, "NO_RECENT_ANIM"))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_301.f_0, "rcm_epsilonism4", Local_301.f_14, 1))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_301.f_0, "rcm_epsilonism4", Local_301.f_14) <= 0.05f)
				{
					ENTITY::STOP_ENTITY_ANIM(Local_301.f_0, Local_301.f_14, "rcm_epsilonism4", -4f);
					Local_301.f_14 = "NO_RECENT_ANIM";
				}
			}
		}
	}
}

int func_294()//Position - 0x2AD91
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_301.f_0))
	{
		return 1;
	}
	return 0;
}

void func_304(bool bParam0, bool bParam1)//Position - 0x2BA8C
{
	if (bParam0)
	{
		__LIB_32__.func_752(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_260(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_306()//Position - 0x2BB1E
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (Local_434.f_3 == 1)
	{
		func_304(1, 1);
		SYSTEM::WAIT(0);
		while (!func_339())
		{
			SYSTEM::WAIT(0);
		}
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
			CUTSCENE::REMOVE_CUTSCENE();
		}
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
		if (__LIB_0__.func_295())
		{
			__LIB_6__.func_775(0, -1, 1);
		}
		if (iLocal_283 == 0)
		{
			if (!__LIB_0__.func_295())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_83, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_84);
			}
			func_290(&(Local_298[1 /*8*/]), 1);
			func_290(&(Local_298[0 /*8*/]), 1);
			if (__LIB_1__.func_197(Local_298[1 /*8*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_81.f_28[1], false);
				ENTITY::SET_ENTITY_COORDS(Local_298[1 /*8*/], 1829.75f, 4693.5f, 38.51f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_298[1 /*8*/], 27.46f);
				Var2 = { ENTITY::GET_ENTITY_COORDS(Local_298[1 /*8*/], true) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(1829.75f, 4693.5f, 38.51f, &fVar1, false, false);
				ENTITY::SET_ENTITY_COORDS(Local_298[1 /*8*/], Var2.f_0, Var2.f_1, fVar1, true, false, false, true);
				__LIB_11__.func_797("Setting Jimmy position (0)");
			}
			if (__LIB_1__.func_197(Local_298[0 /*8*/]))
			{
				ENTITY::SET_ENTITY_COORDS(Local_298[0 /*8*/], 1827.32f, 4692.59f, 38.53f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_298[0 /*8*/], 171.22f);
				__LIB_11__.func_797("Setting Marnie position (0)");
			}
		}
		else if (iLocal_283 == 1)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1754.6337f, 4675.7886f, 42.9068f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 293.2275f);
			if (__LIB_1__.func_197(Local_298[1 /*8*/]))
			{
				ENTITY::SET_ENTITY_COORDS(Local_298[1 /*8*/], 1758.5857f, 4670.0854f, 42.6276f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_298[1 /*8*/], 262.4368f);
				__LIB_11__.func_797("Setting Jimmy position (1)");
			}
			if (__LIB_1__.func_197(Local_298[0 /*8*/]))
			{
				ENTITY::SET_ENTITY_COORDS(Local_298[0 /*8*/], 1759.9169f, 4683.584f, 42.7266f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_298[0 /*8*/], 148.3211f);
				__LIB_11__.func_797("Setting Marnie position (1)");
			}
		}
		else if (iLocal_283 == 2)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1758.4542f, 4829.4307f, 39.729f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 168.2012f);
			if (__LIB_1__.func_197(Local_298[0 /*8*/]))
			{
				ENTITY::SET_ENTITY_COORDS(Local_298[0 /*8*/], 1755.0052f, 4827.329f, 40.0736f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_298[0 /*8*/], 169.6486f);
				__LIB_11__.func_797("Setting Marnie position (2)");
			}
		}
		SYSTEM::WAIT(750);
		__LIB_32__.func_751(1, 1, 1);
		Local_434.f_3 = 0;
	}
	if (Local_434.f_1 == 0)
	{
		__LIB_11__.func_796("Doing setup for FindRock section:", iLocal_283);
		func_290(&(Local_298[1 /*8*/]), 0);
		iLocal_280 = 0;
		iLocal_282 = 0;
		iLocal_299 = 0;
		iLocal_289 = -1;
		iLocal_415 = 0;
		iLocal_416 = 0;
		iLocal_417 = MISC::GET_GAME_TIMER();
		iLocal_419 = MISC::GET_GAME_TIMER();
		iLocal_420 = 0;
		if (iLocal_283 == 0)
		{
			if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) != iLocal_89)
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_89, -1, true, true);
				}
				__LIB_8__.func_770(1);
			}
			if (__LIB_1__.func_197(Local_298[1 /*8*/]))
			{
				WEAPON::REMOVE_WEAPON_FROM_PED(Local_298[1 /*8*/], iLocal_89);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_298[1 /*8*/], 1826.2458f, 4696.506f, 38.1187f, 1f, 20000, 0.1f, 0, 40000f);
			}
			func_336(&(Local_298[1 /*8*/]), 1);
			iLocal_410 = 8;
			iLocal_411 = 8;
			iLocal_413 = 0;
			iLocal_412 = 0;
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
		}
		else if (iLocal_283 == 1)
		{
			if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) != iLocal_89)
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_89, -1, true, true);
					__LIB_8__.func_770(1);
				}
			}
			func_336(&(Local_298[0 /*8*/]), 0);
			func_335(&(Local_298[1 /*8*/]), uLocal_422);
			iLocal_410 = 8;
			iLocal_411 = 8;
			iLocal_413 = 0;
			iLocal_412 = 0;
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
		}
		else if (iLocal_283 == 2)
		{
			if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) != iLocal_89)
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_89, -1, true, true);
					__LIB_8__.func_770(1);
				}
			}
			func_335(&(Local_298[0 /*8*/]), uLocal_425);
			func_334(&(Local_298[1 /*8*/]), iLocal_423);
			iLocal_410 = 11;
			iLocal_411 = 12;
			iLocal_413 = 0;
			iLocal_412 = 0;
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
		}
		__LIB_0__.func_203(&uLocal_98, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		__LIB_0__.func_203(&uLocal_98, 5, Local_298[1 /*8*/], "JIMMYBOSTON", 0, 1);
		__LIB_0__.func_203(&uLocal_98, 4, Local_298[0 /*8*/], "MARNIE", 0, 1);
		if (iLocal_283 == 0)
		{
			iLocal_291 = Local_298[1 /*8*/];
		}
		else
		{
			iLocal_291 = Local_298[0 /*8*/];
		}
		func_332(Local_293[iLocal_283 /*43*/].f_18, Local_293[iLocal_283 /*43*/].f_19, Local_293[iLocal_283 /*43*/].f_20, Local_293[iLocal_283 /*43*/].f_21, Local_293[iLocal_283 /*43*/].f_22);
		bLocal_266 = false;
		iLocal_267 = 0;
		iLocal_268 = 0;
		iLocal_269 = 1;
		iLocal_270 = 0;
		iLocal_271 = 0;
		iLocal_272 = 0;
		iLocal_273 = 0;
		iLocal_274 = 0;
		iLocal_275 = 0;
		iLocal_276 = 0;
		iLocal_277 = 0;
		iLocal_278 = 0;
		iLocal_408 = 0;
		iLocal_409 = 0;
		HUD::CLEAR_HELP(true);
		iLocal_288 = MISC::GET_GAME_TIMER();
		iLocal_409 = MISC::GET_GAME_TIMER() + 1000;
		__LIB_11__.func_796("Finished setup, moving to run loop for rock #:", iLocal_283);
		Local_434.f_1 = 1;
	}
	if (Local_434.f_1 == 1)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			func_242(6);
			Local_434.f_9 = 1;
			Local_434.f_1 = 3;
		}
		else if (ENTITY::IS_ENTITY_DEAD(Local_298[0 /*8*/], false))
		{
			func_242(6);
			Local_434.f_9 = 2;
			Local_434.f_1 = 3;
		}
		else if (ENTITY::IS_ENTITY_DEAD(Local_298[1 /*8*/], false))
		{
			func_242(6);
			Local_434.f_9 = 3;
			Local_434.f_1 = 3;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_298[0 /*8*/], PLAYER::PLAYER_PED_ID(), true) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_298[0 /*8*/], 0, 2))
		{
			func_242(6);
			Local_434.f_9 = 4;
			Local_434.f_1 = 3;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_298[1 /*8*/], PLAYER::PLAYER_PED_ID(), true) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_298[1 /*8*/], 0, 2))
		{
			func_242(6);
			Local_434.f_9 = 5;
			Local_434.f_1 = 3;
		}
		else if (func_235(&(Local_298[0 /*8*/])))
		{
			func_242(6);
			Local_434.f_9 = 6;
			Local_434.f_1 = 3;
		}
		else if (func_235(&(Local_298[1 /*8*/])))
		{
			func_242(6);
			Local_434.f_9 = 7;
			Local_434.f_1 = 3;
		}
		else if (!__LIB_11__.func_325(&uLocal_356, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
		{
			func_242(6);
			Local_434.f_9 = 8;
			Local_434.f_1 = 3;
		}
		else if (Local_434.f_6)
		{
			Local_434.f_1 = 3;
		}
		else if (Local_434.f_4)
		{
			func_242(3);
			Local_434.f_1 = 3;
		}
		else if (Local_434.f_5)
		{
			if (iLocal_283 == 0)
			{
				func_242(1);
				__LIB_11__.func_797("P skipping to intro...");
			}
			else
			{
				iLocal_283 = (iLocal_283 - 1);
				func_242(3);
			}
			Local_434.f_1 = 3;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 2)
			{
				func_328(&(Local_298[iVar0 /*8*/]));
				iVar0++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_293[iLocal_283 /*43*/].f_1))
			{
				if (iLocal_283 == 0)
				{
					if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_293[iLocal_283 /*43*/].f_1, 1) < 100f)
					{
						if (!CUTSCENE::HAS_CUTSCENE_LOADED())
						{
							CUTSCENE::REQUEST_CUTSCENE("EPS_4_MCS_1", 8);
							__LIB_11__.func_797("Requesting midtro now");
						}
					}
					else if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_293[iLocal_283 /*43*/].f_1, 1) > 120f)
					{
						if (CUTSCENE::HAS_CUTSCENE_LOADED())
						{
							__LIB_11__.func_797("Player moved away - unloading midtro");
							CUTSCENE::REMOVE_CUTSCENE();
						}
					}
				}
				else if (iLocal_283 == 1)
				{
					if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_293[iLocal_283 /*43*/].f_1, 1) < 100f)
					{
						if (!CUTSCENE::HAS_CUTSCENE_LOADED())
						{
							CUTSCENE::REQUEST_CUTSCENE("EPS_4_MCS_2", 8);
							__LIB_11__.func_797("Requesting midtro now");
						}
					}
					else if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_293[iLocal_283 /*43*/].f_1, 1) > 120f)
					{
						if (CUTSCENE::HAS_CUTSCENE_LOADED())
						{
							__LIB_11__.func_797("Player moved away - unloading midtro");
							CUTSCENE::REMOVE_CUTSCENE();
						}
					}
				}
				else if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_293[iLocal_283 /*43*/].f_1, 1) < 100f)
				{
					if (!CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						CUTSCENE::REQUEST_CUTSCENE("EPS_4_MCS_3", 8);
						__LIB_11__.func_797("Requesting midtro now");
					}
				}
				else if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_293[iLocal_283 /*43*/].f_1, 1) > 120f)
				{
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						__LIB_11__.func_797("Player moved away - unloading midtro");
						CUTSCENE::REMOVE_CUTSCENE();
					}
				}
			}
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_11__.func_797("Trying to set player component variation");
				if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_39__.func_905("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				}
				if (iLocal_283 == 0 || iLocal_283 == 2)
				{
					__LIB_11__.func_797("Trying to set Jimmy prop variation");
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy_Boston", 1, 0, 0, 0);
				}
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
			if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) != iLocal_89)
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_89, -1, true, true);
				}
			}
			func_327(&(Local_293[iLocal_283 /*43*/]));
			if (iLocal_283 == 0)
			{
				if (iLocal_408 == 0)
				{
					if (iLocal_409 < MISC::GET_GAME_TIMER())
					{
						if (!__LIB_4__.func_739())
						{
							__LIB_0__.func_187("EPS4_T0");
							iLocal_409 = MISC::GET_GAME_TIMER() + 7500;
							iLocal_408++;
							iLocal_421 = MISC::GET_GAME_TIMER();
						}
						else
						{
							iLocal_408 = 2;
						}
					}
				}
				else if (iLocal_408 == 1)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || iLocal_409 < MISC::GET_GAME_TIMER())
					{
						HUD::CLEAR_HELP(true);
						iLocal_409 = MISC::GET_GAME_TIMER() + 1000;
						iLocal_408++;
						iLocal_421 = MISC::GET_GAME_TIMER();
					}
				}
				else if (iLocal_408 == 2)
				{
					if (iLocal_409 < MISC::GET_GAME_TIMER())
					{
						__LIB_0__.func_187("EPS4_T1");
						iLocal_409 = MISC::GET_GAME_TIMER() + 7500;
						iLocal_408++;
						iLocal_421 = MISC::GET_GAME_TIMER();
					}
				}
				else if (iLocal_408 == 3)
				{
					if (iLocal_409 < MISC::GET_GAME_TIMER())
					{
						HUD::CLEAR_HELP(true);
						iLocal_409 = MISC::GET_GAME_TIMER() + 1000;
						iLocal_408++;
						iLocal_421 = MISC::GET_GAME_TIMER();
					}
				}
				else if (iLocal_408 == 4)
				{
					if (iLocal_409 < MISC::GET_GAME_TIMER())
					{
						__LIB_0__.func_187("EPS4_T2");
						iLocal_409 = MISC::GET_GAME_TIMER() + 7500;
						iLocal_408++;
						iLocal_421 = MISC::GET_GAME_TIMER();
					}
				}
				else if (iLocal_408 == 5)
				{
					if (iLocal_409 < MISC::GET_GAME_TIMER())
					{
						HUD::CLEAR_HELP(true);
						iLocal_409 = MISC::GET_GAME_TIMER() + 1000;
						iLocal_408++;
					}
				}
			}
			func_293(Local_301.f_1);
			if (iLocal_269 == 1)
			{
				__LIB_0__.func_523(&iLocal_94);
				if (!__LIB_11__.func_325(&uLocal_304, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
				{
					iLocal_269 = 0;
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					HUD::CLEAR_PRINTS();
				}
				else if (iLocal_277 == 0 && iLocal_268)
				{
					if (!__LIB_0__.func_75())
					{
						iLocal_288 = MISC::GET_GAME_TIMER();
						iLocal_277 = 1;
					}
				}
				else if (iLocal_270 == 0)
				{
					if (MISC::ARE_STRINGS_EQUAL(Local_293[iLocal_283 /*43*/].f_36, sLocal_91) || __LIB_37__.func_799(&uLocal_98, "EPS4AUD", Local_293[iLocal_283 /*43*/].f_36, 7, 0, 0, 0))
					{
						if (!MISC::ARE_STRINGS_EQUAL(Local_293[iLocal_283 /*43*/].f_36, sLocal_91))
						{
							if (__LIB_0__.func_121(iLocal_291))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_291, PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
							}
						}
						iLocal_421 = MISC::GET_GAME_TIMER();
						iLocal_270 = 1;
					}
				}
				else if (iLocal_276 == 0)
				{
					if (iLocal_283 == 0)
					{
						if (!__LIB_0__.func_75())
						{
							__LIB_0__.func_210("EPS4_A2", 7500, 0);
							iLocal_288 = MISC::GET_GAME_TIMER();
							iLocal_276 = 1;
						}
					}
					else
					{
						iLocal_276 = 1;
					}
				}
				else if (iLocal_271 == 0)
				{
					if (!__LIB_0__.func_75() && (MISC::GET_GAME_TIMER() - iLocal_288) >= 7500)
					{
						if ((MISC::ARE_STRINGS_EQUAL(Local_293[iLocal_283 /*43*/].f_37, sLocal_91) || !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_291, 30f, 30f, 30f, false, true, 0)) || __LIB_37__.func_799(&uLocal_98, "EPS4AUD", Local_293[iLocal_283 /*43*/].f_37, 7, 0, 0, 0))
						{
							if (!MISC::ARE_STRINGS_EQUAL(Local_293[iLocal_283 /*43*/].f_37, sLocal_91))
							{
								if (__LIB_0__.func_121(iLocal_291))
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_291, PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
								}
							}
							iLocal_271 = 1;
							iLocal_421 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if (iLocal_272 == 0)
				{
					if (!__LIB_0__.func_75())
					{
						iLocal_272 = 1;
						iLocal_286 = MISC::GET_GAME_TIMER();
						iLocal_287 = 0;
					}
				}
				else if (iLocal_268 == 0 && !__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_293[iLocal_283 /*43*/].f_2, 9f, 1))
				{
					if (__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_293[iLocal_283 /*43*/].f_2, 20f, 1))
					{
						if (!iLocal_273)
						{
							if (!__LIB_0__.func_75())
							{
								if (__LIB_37__.func_799(&uLocal_98, "EPS4AUD", Local_293[iLocal_283 /*43*/].f_42, 7, 0, 0, 0))
								{
									if (__LIB_0__.func_121(iLocal_291))
									{
										TASK::TASK_LOOK_AT_ENTITY(iLocal_291, PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
									}
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 0);
									iLocal_273 = 1;
								}
							}
						}
					}
					if (CAM::IS_AIM_CAM_ACTIVE())
					{
						if (__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), iLocal_291, 30f, 1) || iLocal_283 == 2)
						{
							if (!__LIB_0__.func_75() && (MISC::GET_GAME_TIMER() - iLocal_286) > 15000)
							{
								if (bLocal_266)
								{
									if (iLocal_282 == 0)
									{
										if (iLocal_412 < iLocal_410)
										{
											if (MISC::ARE_STRINGS_EQUAL(Local_293[iLocal_283 /*43*/].f_40, sLocal_91) || __LIB_37__.func_799(&uLocal_98, "EPS4AUD", Local_293[iLocal_283 /*43*/].f_40, 7, 0, 0, 0))
											{
												if (__LIB_1__.func_197(iLocal_291))
												{
													TASK::TASK_LOOK_AT_ENTITY(iLocal_291, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
												}
												iLocal_286 = MISC::GET_GAME_TIMER();
												iLocal_412++;
												if (iLocal_283 == 2)
												{
													iLocal_282 = 1;
												}
											}
										}
									}
									else if (iLocal_414 < 12)
									{
										if (MISC::ARE_STRINGS_EQUAL(Local_293[iLocal_283 /*43*/].f_40, sLocal_91) || __LIB_37__.func_799(&uLocal_98, "EPS4AUD", "EPS4_HASSIG", 7, 0, 0, 0))
										{
											iLocal_286 = MISC::GET_GAME_TIMER();
											iLocal_414++;
										}
									}
								}
								else if (iLocal_413 < iLocal_411)
								{
									if (MISC::ARE_STRINGS_EQUAL(Local_293[iLocal_283 /*43*/].f_41, sLocal_91) || __LIB_37__.func_799(&uLocal_98, "EPS4AUD", Local_293[iLocal_283 /*43*/].f_41, 7, 0, 0, 0))
									{
										if (__LIB_1__.func_197(iLocal_291))
										{
											TASK::TASK_LOOK_AT_ENTITY(iLocal_291, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
										}
										iLocal_286 = MISC::GET_GAME_TIMER();
										iLocal_413++;
									}
								}
							}
							else if (bLocal_266 != Local_301.f_1)
							{
								bLocal_266 = Local_301.f_1;
								if (Local_301.f_1 == 0)
								{
									iLocal_282 = 0;
								}
								if (bLocal_266)
								{
									if (iLocal_287 < MISC::GET_GAME_TIMER())
									{
										if (__LIB_0__.func_75())
										{
											AUDIO::STOP_SCRIPTED_CONVERSATION(true);
										}
										iLocal_286 = (MISC::GET_GAME_TIMER() - 7500);
										iLocal_287 = MISC::GET_GAME_TIMER();
									}
								}
								else
								{
									iLocal_286 = (MISC::GET_GAME_TIMER() - 7500);
								}
							}
						}
					}
					else
					{
						iLocal_286 = (MISC::GET_GAME_TIMER() - 5000);
					}
				}
				if (iLocal_283 == 0)
				{
					if (iLocal_415 < 5)
					{
						if (((MISC::GET_GAME_TIMER() - iLocal_417) > 7500 && !__LIB_0__.func_75()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (__LIB_0__.func_121(Local_298[0 /*8*/]))
							{
								if (__LIB_0__.func_76(Local_298[0 /*8*/], PLAYER::PLAYER_PED_ID(), 1) < 4f)
								{
									if (__LIB_37__.func_799(&uLocal_98, "EPS4AUD", "EPS4_NEARM", 6, 0, 0, 0))
									{
										iLocal_415++;
										iLocal_417 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
				else if (iLocal_283 == 1)
				{
					if (iLocal_415 < 4)
					{
						if (((MISC::GET_GAME_TIMER() - iLocal_417) > 7500 && !__LIB_0__.func_75()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (__LIB_0__.func_121(Local_298[1 /*8*/]))
							{
								if (__LIB_0__.func_76(Local_298[1 /*8*/], PLAYER::PLAYER_PED_ID(), 1) < 4f)
								{
									if (__LIB_37__.func_799(&uLocal_98, "EPS4AUD", "EPS4_NEARJ", 6, 0, 0, 0))
									{
										iLocal_415++;
										iLocal_417 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_415 < 3)
					{
						if (((MISC::GET_GAME_TIMER() - iLocal_417) > 7500 && !__LIB_0__.func_75()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (__LIB_0__.func_121(Local_298[1 /*8*/]))
							{
								if (__LIB_0__.func_76(Local_298[1 /*8*/], PLAYER::PLAYER_PED_ID(), 1) < 4f)
								{
									if (__LIB_37__.func_799(&uLocal_98, "EPS4AUD", "EPS4_NEARJP", 6, 0, 0, 0))
									{
										iLocal_415++;
										iLocal_417 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_416 < 4)
					{
						if (((MISC::GET_GAME_TIMER() - iLocal_417) > 7500 && !__LIB_0__.func_75()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (__LIB_0__.func_121(Local_298[0 /*8*/]))
							{
								if (__LIB_0__.func_76(Local_298[0 /*8*/], PLAYER::PLAYER_PED_ID(), 1) < 4f)
								{
									if (__LIB_37__.func_799(&uLocal_98, "EPS4AUD", "EPS4_NEARMP", 6, 0, 0, 0))
									{
										iLocal_416++;
										iLocal_417 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_293[iLocal_283 /*43*/].f_2, 6.2f, 6.2f, 2f, false, false, 1))
				{
					if (iLocal_289 == -1)
					{
						iLocal_289 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_289) >= 1500)
					{
						if (__LIB_0__.func_75())
						{
							__LIB_0__.func_296();
						}
						iLocal_295 = MISC::GET_GAME_TIMER();
						func_242(3);
						Local_434.f_1 = 3;
					}
				}
				else if (iLocal_267 == 0)
				{
					if (Local_301.f_6)
					{
						iLocal_267 = 1;
						iLocal_268 = 1;
					}
				}
				else if (!__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_293[iLocal_283 /*43*/].f_2, (9f + 2f), 1))
				{
					iLocal_267 = 0;
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_94))
				{
					iLocal_94 = __LIB_10__.func_658(Local_82, 5, 0);
				}
				bLocal_266 = Local_301.f_1;
				if (__LIB_11__.func_325(&uLocal_304, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
				{
					iLocal_269 = 1;
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					HUD::CLEAR_PRINTS();
				}
				else if (iLocal_278 == 0)
				{
					if (!__LIB_0__.func_75())
					{
						__LIB_0__.func_210("EPS4_A1", 7500, 0);
						iLocal_288 = MISC::GET_GAME_TIMER();
						iLocal_278 = 1;
					}
				}
				else if (iLocal_274 == 0)
				{
					if (iLocal_283 < 2)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_291, 30f, 30f, 30f, false, true, 0))
						{
							if (!__LIB_0__.func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (MISC::ARE_STRINGS_EQUAL(Local_293[iLocal_283 /*43*/].f_38, sLocal_91) || __LIB_37__.func_799(&uLocal_98, "EPS4AUD", Local_293[iLocal_283 /*43*/].f_38, 7, 0, 0, 0))
								{
									iLocal_274 = 1;
								}
							}
						}
					}
					else if (!__LIB_0__.func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (MISC::ARE_STRINGS_EQUAL(Local_293[iLocal_283 /*43*/].f_38, sLocal_91) || __LIB_37__.func_799(&uLocal_98, "EPS4AUD", Local_293[iLocal_283 /*43*/].f_38, 7, 0, 0, 0))
						{
							iLocal_274 = 1;
						}
					}
				}
				else if (iLocal_275 == 0)
				{
					if (iLocal_283 < 2)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_291, 30f, 30f, 30f, false, true, 0))
						{
							if ((!__LIB_0__.func_75() && (MISC::GET_GAME_TIMER() - iLocal_288) >= 7500) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (MISC::ARE_STRINGS_EQUAL(Local_293[iLocal_283 /*43*/].f_39, sLocal_91) || __LIB_37__.func_799(&uLocal_98, "EPS4AUD", Local_293[iLocal_283 /*43*/].f_39, 7, 0, 0, 0))
								{
									iLocal_275 = 1;
								}
							}
						}
					}
					else if ((!__LIB_0__.func_75() && (MISC::GET_GAME_TIMER() - iLocal_288) >= 7500) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (MISC::ARE_STRINGS_EQUAL(Local_293[iLocal_283 /*43*/].f_39, sLocal_91) || __LIB_37__.func_799(&uLocal_98, "EPS4AUD", Local_293[iLocal_283 /*43*/].f_39, 7, 0, 0, 0))
						{
							iLocal_275 = 1;
						}
					}
				}
			}
		}
	}
	if (Local_434.f_1 == 3)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		__LIB_11__.func_797("In cleanup for FindRock");
		if (__LIB_0__.func_75())
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		}
		func_293(1);
		func_292();
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 200, 150);
		if ((MISC::GET_GAME_TIMER() - iLocal_295) > 750)
		{
			func_230();
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 0);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			func_290(&(Local_298[1 /*8*/]), 0);
			func_290(&(Local_298[0 /*8*/]), 0);
			func_375();
		}
	}
}

void func_327(var uParam0)//Position - 0x2D636
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	float fVar9;
	int iVar10;
	float fVar11;
	fVar0 = SYSTEM::VDIST(uParam0->f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	Var1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
	if (fVar0 > Local_301.f_11)
	{
		fVar3 = 0f;
		if (Local_301.f_8 > 0f)
		{
			fVar3 = (fVar3 + (SYSTEM::SIN(((fVar0 - Local_301.f_11) * (360f / Local_301.f_8))) * Local_301.f_10));
		}
		if (Local_301.f_9 > 0f)
		{
			fVar3 = (fVar3 + (SYSTEM::SIN(((fVar0 - Local_301.f_11) * (360f / Local_301.f_9))) * (Local_301.f_10 * -0.7f)));
		}
		Var2.f_0 = ((Var1.f_0 * SYSTEM::COS(fVar3)) - (Var1.f_1 * SYSTEM::SIN(fVar3)));
		Var2.f_1 = ((Var1.f_1 * SYSTEM::COS(fVar3)) + (Var1.f_0 * SYSTEM::SIN(fVar3)));
	}
	else
	{
		Var2 = { Var1 };
	}
	Var4 = { uParam0->f_2 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var5 = { uParam0->f_2 - ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, -5f, 0f) };
	bVar6 = ((Var4.f_0 * Var2.f_0) + (Var4.f_1 * Var2.f_1)) > 0f;
	fVar7 = (1f - (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var2.f_0, Var2.f_1, Var5.f_0, Var5.f_1) / 180f));
	if (fVar0 >= 10f)
	{
		Local_301.f_12 = 0.92f;
	}
	else
	{
		Local_301.f_12 = 0.95f;
	}
	bVar8 = (fVar7 > Local_301.f_12 && bVar6);
	Local_301.f_1 = bVar8;
	if (Local_301.f_6 == 1)
	{
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 200, 150);
		if (fVar0 > 6.5f || bVar8 == 0)
		{
			AUDIO::STOP_SOUND(Local_301.f_4);
			Local_301.f_6 = 0;
			iLocal_284 = 0;
		}
	}
	else if (iLocal_284 < MISC::GET_GAME_TIMER())
	{
		if (fVar0 <= 6.5f && bVar8)
		{
			AUDIO::STOP_SOUND(Local_301.f_3);
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_301.f_4, "CONTINUAL_BEEP", PLAYER::PLAYER_PED_ID(), "EPSILONISM_04_SOUNDSET", false, 0);
			Local_301.f_6 = 1;
		}
		else
		{
			fVar9 = (fVar0 - (6.5f + 2.5f));
			if (fVar9 < 0f)
			{
				fVar9 = 0f;
			}
			iVar10 = (125 + SYSTEM::ROUND(((fVar9 / 40f) * (1250f - 125f))));
			if (iVar10 > 1250)
			{
				iVar10 = 1250;
			}
			iLocal_284 = (MISC::GET_GAME_TIMER() + iVar10);
			iVar10 = (iVar10 / 3);
			if (iVar10 < 100)
			{
				iVar10 = 100;
			}
			iLocal_285 = (MISC::GET_GAME_TIMER() + iVar10);
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_301.f_3, "IDLE_BEEP", PLAYER::PLAYER_PED_ID(), "EPSILONISM_04_SOUNDSET", false, 0);
			if (bVar8)
			{
				PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 200, 150);
			}
			else
			{
				PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 200, 100);
			}
		}
	}
	if (iLocal_285 > 0 && MISC::GET_GAME_TIMER() > iLocal_285)
	{
		AUDIO::STOP_SOUND(Local_301.f_3);
		iLocal_285 = 0;
	}
	if (CAM::IS_AIM_CAM_ACTIVE())
	{
		if (Local_301.f_7 == 0)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_301.f_5, "SCAN", PLAYER::PLAYER_PED_ID(), "EPSILONISM_04_SOUNDSET", false, 0);
			Local_301.f_7 = 1;
		}
		else if (bVar8)
		{
			AUDIO::SET_VARIABLE_ON_SOUND(Local_301.f_5, "IsOnTarget", 1f);
		}
		else
		{
			AUDIO::SET_VARIABLE_ON_SOUND(Local_301.f_5, "IsOnTarget", 0f);
		}
		iLocal_421 = MISC::GET_GAME_TIMER();
	}
	else if (Local_301.f_7 == 1)
	{
		AUDIO::STOP_SOUND(Local_301.f_5);
		Local_301.f_7 = 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_301.f_0))
	{
		Local_301.f_0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID(), 1);
	}
	else
	{
		fVar11 = ((fVar0 - 6.5f) / (uParam0->f_23 - 6.5f));
		if (fVar11 < 0f)
		{
			fVar11 = 0f;
		}
		else if (fVar11 > 1f)
		{
			fVar11 = 1f;
		}
		if (Local_301.f_1)
		{
			fLocal_302 = (100f - (fVar11 * 100f));
		}
		else
		{
			fLocal_302 = (100f - (fVar11 * 100f));
			fLocal_302 = (fLocal_302 * -1f);
		}
		if (!Local_301.f_1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_95, "SET_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_95, "SET_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(67);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(200);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(209);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(67);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (fLocal_302 >= 95f && fLocal_302 <= 99.8f)
		{
			fLocal_302 = 94.9f;
		}
		else if (fLocal_302 <= -95f && fLocal_302 >= -99.8f)
		{
			fLocal_302 = -94.9f;
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_293[iLocal_283 /*43*/].f_2, 6.2f, 6.2f, 2f, false, false, 1))
		{
			fLocal_302 = 100f;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_95, "SET_DISTANCE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_302);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		HUD::SET_TEXT_RENDER_ID(iLocal_96);
		GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_95, 0.1f, 0.24f, 0.21f, 0.51f, 100, 100, 100, 255, 0);
	}
	if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
		if (bLocal_281)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(15f, 1f);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
		}
		iLocal_279 = 1;
	}
	else if (__LIB_4__.func_739())
	{
		iLocal_279 = 1;
	}
}

void func_328(var uParam0)//Position - 0x2DB56
{
	int iVar0;
	if (__LIB_1__.func_197(*uParam0) && PED::IS_PED_IN_GROUP(*uParam0))
	{
		if (uParam0->f_1 != 4 && uParam0->f_1 != 5)
		{
			PED::REMOVE_PED_FROM_GROUP(*uParam0);
		}
	}
	func_330(*uParam0);
	switch (uParam0->f_1)
	{
		case 0:
			break;
		case 3:
			break;
		case 1:
			if (!__LIB_1__.func_197(*uParam0))
			{
				uParam0->f_1 = 0;
				uParam0->f_2 = 0;
			}
			else if (uParam0->f_2 == 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iLocal_297);
				while (uParam0->f_3 == -1)
				{
					if (Local_296[iVar0 /*6*/].f_5 == 0)
					{
						if (Local_296[iVar0 /*6*/].f_4 == 0)
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(*uParam0, Local_296[iVar0 /*6*/], 3f, 3f, 3f, false, true, 0))
							{
								__LIB_11__.func_796("Telling ped to go to marker: ", iVar0);
								Local_296[iVar0 /*6*/].f_5 = 1;
								uParam0->f_3 = iVar0;
							}
						}
					}
					iVar0 = (iVar0 + 1 % iLocal_297);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, Local_296[uParam0->f_3 /*6*/], 1f, -1, 0.25f, 5, 40000f);
				uParam0->f_2 = 1;
			}
			else if (uParam0->f_2 == 1)
			{
				if (!uParam0->f_7)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 7)
					{
						__LIB_11__.func_797("Eps reached marker! (follow nav to coord)");
						uParam0->f_1 = 2;
						uParam0->f_2 = 0;
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 7)
				{
					__LIB_11__.func_797("Eps reached marker! (go straight to coord)");
					uParam0->f_7 = 0;
					uParam0->f_1 = 2;
					uParam0->f_2 = 0;
				}
			}
			break;
		case 2:
			if (!__LIB_1__.func_197(*uParam0))
			{
				uParam0->f_1 = 0;
				uParam0->f_2 = 0;
			}
			else if (uParam0->f_2 == 0)
			{
				__LIB_11__.func_796("Telling ped do sequence for marker: ", uParam0->f_3);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
				if (Local_296[uParam0->f_3 /*6*/].f_4 == 0)
				{
					if (*uParam0 == Local_298[1 /*8*/])
					{
						TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_entry_jb", 4f, -4f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_idle_a_jb", 8f, -4f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_exit_jb", 4f, -4f, -1, 0, 0f, false, false, false);
					}
					else
					{
						TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_marnie_lookaround_entry_marnie", 4f, -4f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_marnie_lookaround_idle_a_marnie", 8f, -4f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_marnie_lookaround_exit_marnie", 4f, -4f, -1, 0, 0f, false, false, false);
					}
				}
				else if (Local_296[uParam0->f_3 /*6*/].f_4 == 2)
				{
					TASK::TASK_ACHIEVE_HEADING(0, Local_296[uParam0->f_3 /*6*/].f_3, 0);
					TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "peeing", 8f, -8f, -1, 0, 0f, false, false, false);
				}
				else if (Local_296[uParam0->f_3 /*6*/].f_4 == 3)
				{
					TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "hippy_a", 8f, -8f, -1, 1, 0f, false, false, false);
				}
				else if (Local_296[uParam0->f_3 /*6*/].f_4 == 1)
				{
					TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_entry_jb", 4f, -4f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_idle_a_jb", 8f, -4f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_exit_jb", 4f, -4f, -1, 0, 0f, false, false, false);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, iLocal_97);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
				uParam0->f_2 = 1;
			}
			else if (uParam0->f_2 == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
				{
					Local_296[uParam0->f_3 /*6*/].f_5 = 0;
					uParam0->f_3 = -1;
					uParam0->f_1 = 1;
					uParam0->f_2 = 0;
				}
			}
			break;
		case 4:
			if (!__LIB_1__.func_197(*uParam0))
			{
				uParam0->f_1 = 0;
				uParam0->f_2 = 0;
			}
			else if (uParam0->f_2 == 0)
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_4, 1f, 1f, 1f, false, true, 0) || iLocal_283 > 0)
				{
					if (!PED::IS_PED_IN_GROUP(*uParam0))
					{
						TASK::CLEAR_PED_TASKS(*uParam0);
						PED::SET_PED_AS_GROUP_MEMBER(*uParam0, __LIB_0__.func_399());
						PED::SET_PED_CONFIG_FLAG(*uParam0, 167, true);
					}
					iLocal_418 = MISC::GET_GAME_TIMER();
					if (iLocal_283 == 0)
					{
						PED::SET_GROUP_FORMATION(__LIB_0__.func_399(), 0);
					}
					else
					{
						PED::SET_GROUP_FORMATION(__LIB_0__.func_399(), 0);
					}
					PED::SET_GROUP_FORMATION_SPACING(__LIB_0__.func_399(), 4f, -1f, -1f);
					uParam0->f_2 = 1;
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (!PED::IS_PED_IN_GROUP(*uParam0))
				{
					uParam0->f_1 = 5;
					uParam0->f_2 = 0;
				}
				if (TASK::IS_PED_STILL(*uParam0))
				{
					if (!iLocal_280)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_418) > 6000)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
							if (*uParam0 == Local_298[1 /*8*/])
							{
								TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_entry_jb", 4f, -4f, -1, 0, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_idle_a_jb", 8f, -4f, -1, 0, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_exit_jb", 4f, -4f, -1, 0, 0f, false, false, false);
							}
							else
							{
								TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_marnie_lookaround_entry_marnie", 4f, -4f, -1, 0, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_marnie_lookaround_idle_a_marnie", 8f, -4f, -1, 0, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_marnie_lookaround_exit_marnie", 4f, -4f, -1, 0, 0f, false, false, false);
							}
							TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
							TASK::TASK_PERFORM_SEQUENCE(*uParam0, iLocal_97);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
							if (!__LIB_0__.func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (*uParam0 == Local_298[1 /*8*/])
								{
									__LIB_37__.func_799(&uLocal_98, "EPS4AUD", "EPS4_DAWDJ", 7, 0, 0, 0);
								}
								else
								{
									__LIB_37__.func_799(&uLocal_98, "EPS4AUD", "EPS4_DAWDM", 7, 0, 0, 0);
								}
							}
							iLocal_280 = 1;
						}
					}
					else
					{
						iLocal_418 = MISC::GET_GAME_TIMER();
						if (!__LIB_4__.func_465(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
						{
							iLocal_280 = 0;
						}
					}
				}
				else
				{
					iLocal_418 = MISC::GET_GAME_TIMER();
					iLocal_280 = 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
				{
					if ((((MISC::GET_GAME_TIMER() - iLocal_419) > 7500 && !__LIB_0__.func_75()) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !iLocal_267)
					{
						if (*uParam0 == Local_298[1 /*8*/])
						{
							if (__LIB_37__.func_799(&uLocal_98, "EPS4AUD", "EPS4_MESSJ", 7, 0, 0, 0))
							{
								iLocal_419 = MISC::GET_GAME_TIMER();
							}
						}
						else if (__LIB_37__.func_799(&uLocal_98, "EPS4AUD", "EPS4_MESSM", 7, 0, 0, 0))
						{
							iLocal_419 = MISC::GET_GAME_TIMER();
						}
					}
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_421) > 15000)
				{
					if ((((iLocal_420 < 4 && !__LIB_0__.func_75()) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !iLocal_267) && !__LIB_4__.func_739())
					{
						if (*uParam0 == Local_298[1 /*8*/])
						{
							if (__LIB_37__.func_799(&uLocal_98, "EPS4AUD", "EPS4_PROMPTJ", 7, 0, 0, 0))
							{
								iLocal_421 = MISC::GET_GAME_TIMER();
								iLocal_420++;
							}
						}
						else if (__LIB_37__.func_799(&uLocal_98, "EPS4AUD", "EPS4_PROMPTM", 7, 0, 0, 0))
						{
							iLocal_421 = MISC::GET_GAME_TIMER();
							iLocal_420++;
						}
					}
				}
			}
			break;
		case 5:
			if (!__LIB_1__.func_197(*uParam0))
			{
				uParam0->f_1 = 0;
				uParam0->f_2 = 0;
			}
			else if (uParam0->f_2 == 0)
			{
				TASK::TASK_GO_TO_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), 20000, 4.5f, 2f, 2f, 0);
				uParam0->f_2 = 1;
			}
			else if (uParam0->f_2 == 1)
			{
				PED::SET_PED_AS_GROUP_MEMBER(*uParam0, __LIB_0__.func_399());
				if (PED::IS_PED_IN_GROUP(*uParam0))
				{
					uParam0->f_1 = 4;
					uParam0->f_2 = 0;
				}
			}
			break;
		default:
			break;
	}
}

void func_330(int iParam0)//Position - 0x2E2BC
{
	if (__LIB_1__.func_197(iParam0) && __LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_299 == 0)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0) && PED::IS_PED_RAGDOLL(iParam0))
			{
				__LIB_11__.func_797("Player knocked Eps over!");
				iLocal_299 = 1;
				iLocal_300 = iParam0;
				TASK::CLEAR_PED_TASKS(iParam0);
			}
		}
		else if (__LIB_1__.func_197(iLocal_300))
		{
			if (TASK::IS_PED_GETTING_UP(iLocal_300) || PED::IS_PED_ON_FOOT(iLocal_300))
			{
				if (!__LIB_0__.func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (iLocal_300 == Local_298[1 /*8*/])
					{
						if (__LIB_37__.func_799(&uLocal_98, "EPS4AUD", "EPS4_JKNOCK", 7, 0, 0, 0))
						{
							iLocal_299 = 0;
							iLocal_300 = 0;
						}
					}
					else if (__LIB_37__.func_799(&uLocal_98, "EPS4AUD", "EPS4_MKNOCK", 7, 0, 0, 0))
					{
						iLocal_299 = 0;
						iLocal_300 = 0;
					}
				}
			}
		}
	}
}

void func_332(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x2E44E
{
	AUDIO::PLAY_SOUND_FROM_ENTITY(Local_301.f_2, "DEVICE", PLAYER::PLAYER_PED_ID(), "EPSILONISM_04_SOUNDSET", false, 0);
	if (Local_301.f_13 == 0)
	{
		Local_301.f_8 = uParam0;
		Local_301.f_9 = uParam1;
		Local_301.f_10 = uParam2;
		Local_301.f_11 = uParam3;
		Local_301.f_12 = uParam4;
	}
	Local_301.f_6 = 0;
	Local_301.f_7 = 0;
	Local_301.f_14 = "NO_RECENT_ANIM";
}

void func_334(var uParam0, int iParam1)//Position - 0x2E54A
{
	if (__LIB_1__.func_197(*uParam0))
	{
		if (uParam0->f_1 == 2)
		{
			Local_296[iParam1 /*6*/].f_5 = 0;
		}
		uParam0->f_1 = 2;
		uParam0->f_2 = 0;
		Local_296[iParam1 /*6*/].f_5 = 1;
		uParam0->f_3 = iParam1;
		if (PED::IS_PED_IN_GROUP(*uParam0))
		{
			PED::REMOVE_PED_FROM_GROUP(*uParam0);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam0);
		ENTITY::SET_ENTITY_COORDS(*uParam0, Local_296[iParam1 /*6*/], true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(*uParam0, Local_296[iParam1 /*6*/].f_3);
	}
	else
	{
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
	}
}

void func_335(var uParam0, var uParam1)//Position - 0x2E5D1
{
	if (__LIB_1__.func_197(*uParam0))
	{
		uParam0->f_1 = 1;
		uParam0->f_2 = 0;
		if (uParam0->f_3 != -1)
		{
			Local_296[uParam0->f_3 /*6*/].f_5 = 0;
		}
		uParam0->f_3 = uParam1;
	}
	else
	{
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
	}
}

void func_336(var uParam0, bool bParam1)//Position - 0x2E614
{
	if (__LIB_1__.func_197(*uParam0) && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
	{
		uParam0->f_1 = 4;
		uParam0->f_2 = 0;
		TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		if (bParam1)
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), 0);
		}
		uParam0->f_4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	else
	{
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
	}
}

int func_339()//Position - 0x2E74D
{
	if ((func_342() && func_341()) && func_340())
	{
		return 1;
	}
	return 0;
}

int func_340()//Position - 0x2E773
{
	STREAMING::REQUEST_ANIM_DICT("rcm_epsilonism4");
	STREAMING::REQUEST_ANIM_DICT("rcm_epsilonism4leadinout");
	if (STREAMING::HAS_ANIM_DICT_LOADED("rcm_epsilonism4") && STREAMING::HAS_ANIM_DICT_LOADED("rcm_epsilonism4leadinout"))
	{
		return 1;
	}
	return 0;
}

int func_341()//Position - 0x2E7AA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_294)
	{
		STREAMING::REQUEST_MODEL(Local_293[iVar0 /*43*/]);
		iVar0++;
	}
	STREAMING::REQUEST_MODEL(iLocal_90);
	STREAMING::REQUEST_MODEL(joaat("bison"));
	iVar0 = 0;
	while (iVar0 < iLocal_294)
	{
		if (!STREAMING::HAS_MODEL_LOADED(Local_293[iVar0 /*43*/]))
		{
			return 0;
		}
		iVar0++;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_90) || !STREAMING::HAS_MODEL_LOADED(joaat("bison")))
	{
		return 0;
	}
	return 1;
}

int func_342()//Position - 0x2E826
{
	HUD::REQUEST_ADDITIONAL_TEXT("EPS4", 0);
	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		return 1;
	}
	return 0;
}

void func_343()//Position - 0x2E844
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		__LIB_11__.func_797("Can request assets for cutscene entity in Eps 4");
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy_Boston", 1, 0, 0, 0);
		if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_39__.func_905("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
		}
	}
	if (Local_434.f_3 == 1)
	{
		func_304(1, 1);
		CUTSCENE::REMOVE_CUTSCENE();
		__LIB_11__.func_797("SKIP: Doing sync for intro skip");
		if (!__LIB_0__.func_2(0))
		{
			__LIB_32__.func_751(1, 1, 1);
		}
		Local_434.f_3 = 0;
	}
	if (Local_434.f_1 == 0)
	{
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REQUEST_CUTSCENE("ep_4_rcm_concat", 8);
		}
		__LIB_11__.func_797("In Intro setup, waiting for cutscene to be ready...");
		if (__LIB_18__.func_170(1, 1093140480, 0))
		{
			__LIB_11__.func_797("Starting intro cutscene...");
			if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
			}
			if (__LIB_1__.func_197(Local_81.f_28[0]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_81.f_28[0], "Marnie", 0, 0, 0);
			}
			if (__LIB_1__.func_197(Local_81.f_28[1]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_81.f_28[1], false);
				if (__LIB_0__.func_121(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_81.f_28[1], 1)))
				{
					iLocal_303 = __LIB_18__.func_490(Local_81.f_28[1], joaat("WEAPON_DIGISCANNER"), 1, 0, 0, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_303, "Artefact_Detector", 0, 0, 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_81.f_28[1], "Jimmy_Boston", 0, 0, 0);
			}
			if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("EPS4_START");
			__LIB_26__.func_252();
			RECORDING::REPLAY_START_EVENT(1);
			CUTSCENE::START_CUTSCENE(0);
			SYSTEM::WAIT(0);
			CAM::STOP_GAMEPLAY_HINT(false);
			__LIB_32__.func_751(1, 1, 0);
			__LIB_32__.func_755(1833.3932f, 4703.8486f, 32.50218f, 1819.3683f, 4693.4126f, 43.89163f, 18f, 1816.55f, 4683.33f, 37.75f, 339.76f, __LIB_9__.func_996(), 1, 1, 1, 0, 0);
			func_260(1812f, 4697f, 39.1f, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1);
			while (!func_339())
			{
				SYSTEM::WAIT(0);
			}
			__LIB_11__.func_797("Loaded all assets! Moving to intro run loop...");
			Local_434.f_1 = 1;
		}
	}
	if (Local_434.f_1 == 1)
	{
		func_253();
		if (Local_434.f_4)
		{
			CUTSCENE::STOP_CUTSCENE(false);
			func_242(2);
			Local_434.f_1 = 3;
		}
		else if (Local_434.f_6)
		{
			CUTSCENE::STOP_CUTSCENE(false);
			Local_434.f_1 = 3;
		}
		else if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			func_242(2);
			Local_434.f_1 = 3;
		}
		if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		}
		if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				__LIB_11__.func_797("*** Forcing Michael's move state");
				__LIB_10__.func_701(PLAYER::PLAYER_PED_ID(), 1827.1611f, 4698.6445f, 38.094f, 184.1384f, 0, 1);
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_89, -1, true, true);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
		{
			RECORDING::REPLAY_STOP_EVENT();
			__LIB_11__.func_797("*** Teleport Mike");
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			__LIB_10__.func_701(PLAYER::PLAYER_PED_ID(), 1827.1611f, 4698.6445f, 38.094f, 184.1384f, 0, 1);
		}
		func_345();
		func_344();
		if (__LIB_0__.func_121(iLocal_303))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Artefact_Detector", 0))
			{
				WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_303, PLAYER::PLAYER_PED_ID());
				__LIB_0__.func_123(&iLocal_303);
			}
		}
	}
	if (Local_434.f_1 == 3)
	{
		__LIB_11__.func_797("Doing intro cleanup and progressing");
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			iLocal_283 = 0;
			__LIB_32__.func_576(1, 0, 1, 1);
			__LIB_10__.func_700(&Local_81, 0, 1);
			func_375();
		}
	}
}

void func_344()//Position - 0x2EBB9
{
	float fVar0;
	if (__LIB_0__.func_121(Local_298[1 /*8*/]))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy_Boston", 0))
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(1829.8f, 4693.48f, 38.5f, &fVar0, false, false);
			ENTITY::SET_ENTITY_COORDS(Local_298[1 /*8*/], 1829.8f, 4693.48f, fVar0, true, false, false, true);
		}
	}
}

void func_345()//Position - 0x2EC0C
{
	if (__LIB_0__.func_121(Local_298[0 /*8*/]))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Marnie", 0))
		{
			func_335(&(Local_298[0 /*8*/]), uLocal_424);
			Local_298[0 /*8*/].f_1 = 1;
			Local_298[0 /*8*/].f_2 = 1;
			if (Local_298[0 /*8*/].f_3 != -1)
			{
				Local_296[Local_298[0 /*8*/].f_3 /*6*/].f_5 = 0;
			}
			Local_298[0 /*8*/].f_3 = uLocal_424;
			TASK::TASK_GO_STRAIGHT_TO_COORD(Local_298[0 /*8*/], Local_296[Local_298[0 /*8*/].f_3 /*6*/], 1f, -1, 40000f, 0.5f);
			PED::FORCE_PED_MOTION_STATE(Local_298[0 /*8*/], joaat("MotionState_Walk"), false, 1, true);
			Local_298[0 /*8*/].f_7 = 1;
			__LIB_11__.func_797("Done Marnie intro exit state");
		}
	}
}

void func_348()//Position - 0x2ED39
{
	__LIB_24__.func_930();
	if (Local_434.f_3 == 1)
	{
		func_304(1, 1);
		__LIB_11__.func_797("SKIP: Doing sync for leadin skip");
		__LIB_32__.func_751(1, 1, 1);
		Local_434.f_3 = 0;
	}
	if (Local_434.f_1 == 0)
	{
		iLocal_284 = MISC::GET_GAME_TIMER();
		if (!__LIB_0__.func_2(0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1826.6212f, 4698.7344f, 41.36862f, 1831.1576f, 4680.1914f, 32.426258f, 16.5f, false, true, 0))
		{
			__LIB_11__.func_797("Doing setup for leadin");
			__LIB_0__.func_203(&uLocal_98, 4, Local_81.f_28[0], "MARNIE", 0, 1);
			if (func_340())
			{
				Local_434.f_1 = 1;
			}
		}
		else
		{
			__LIB_11__.func_797("Skipping setup for leadin (repeat play/wrong area)");
			Local_434.f_1 = 1;
		}
	}
	if (Local_434.f_1 == 1)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_284) > 1250)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "IDLE_BEEP_NPC", 1827.06f, 4700.52f, 39.16f, "EPSILONISM_04_SOUNDSET", false, 0, false);
			iLocal_284 = MISC::GET_GAME_TIMER();
		}
		if (!__LIB_0__.func_2(0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1826.6212f, 4698.7344f, 41.36862f, 1831.1576f, 4680.1914f, 32.426258f, 16.5f, false, true, 0))
		{
			if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_81.f_28[0], 1) >= 3f)
			{
				if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					if (!iLocal_263)
					{
						if (__LIB_0__.func_121(Local_81.f_28[0]))
						{
							CAM::SET_GAMEPLAY_ENTITY_HINT(Local_81.f_28[0], 0f, 0f, 0.2f, true, 30000, 2000, 2000, 0);
							CAM::SET_GAMEPLAY_HINT_FOV(fLocal_429);
							CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_430);
							CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_431);
							CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fLocal_432);
							CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(fLocal_433);
							CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
							if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
								TASK::TASK_LOOK_AT_ENTITY(0, Local_81.f_28[0], 15000, 0, 2);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1827.34f, 4697.22f, 38.02f, 1f, 20000, 0.25f, 1, 40000f);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_81.f_28[0], 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_97);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							}
							iLocal_263 = 1;
						}
					}
				}
				else
				{
					CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
				}
			}
			else
			{
				iLocal_263 = 1;
			}
			if (!iLocal_264)
			{
				if (__LIB_1__.func_197(Local_81.f_28[0]) && !__LIB_0__.func_75())
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_81.f_28[0], PLAYER::PLAYER_PED_ID(), -1, 48, 2);
					TASK::TASK_PLAY_ANIM(Local_81.f_28[0], "rcm_epsilonism4leadinout", "ep_4_rcm_leadin_marnie", 8f, -8f, -1, 2, 0f, false, false, false);
					CUTSCENE::REMOVE_CUTSCENE();
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("EP_4_RCM_CONCAT", 2, 8);
					__LIB_11__.func_797("Done Marnie leadin anim - request concat cutscene");
					iLocal_264 = 1;
				}
			}
			else if (__LIB_1__.func_197(Local_81.f_28[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_81.f_28[0], "rcm_epsilonism4leadinout", "ep_4_rcm_leadin_marnie", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_81.f_28[0], "rcm_epsilonism4leadinout", "ep_4_rcm_leadin_marnie") > 0.25f)
					{
						if (!iLocal_265)
						{
							if (__LIB_37__.func_799(&uLocal_98, "EPS4AUD", "ESP4_RCL", 8, 0, 0, 0))
							{
								__LIB_11__.func_797("Leadin convo done");
								iLocal_265 = 1;
							}
						}
					}
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_81.f_28[0], "rcm_epsilonism4leadinout", "ep_4_rcm_leadin_marnie") > 0.95f)
					{
						__LIB_11__.func_797("Leadin done, launch cutscene");
						func_242(1);
						Local_434.f_1 = 3;
					}
					if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_81.f_28[0], 1) <= 1.5f)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
				}
			}
		}
		else
		{
			__LIB_11__.func_797("Replay in progress/wrong area, skipping leadin");
			func_242(1);
			Local_434.f_1 = 3;
		}
	}
	if (Local_434.f_1 == 3)
	{
		__LIB_11__.func_797("Doing leadin cleanup and progressing");
		func_375();
	}
}

void func_375()//Position - 0x2FE47
{
	if ((Local_434.f_4 || Local_434.f_5) || Local_434.f_6)
	{
		Local_434.f_3 = 1;
		if (Local_434.f_8 == 1)
		{
			__LIB_11__.func_797("Sync for skip is TRUE and Intro is queued!");
		}
	}
	else
	{
		Local_434.f_3 = 0;
	}
	if (Local_434.f_6)
	{
		switch (Local_434.f_7)
		{
			case 0:
				Local_434.f_8 = 1;
				break;
			case 1:
				Local_434.f_8 = 2;
				iLocal_283 = 0;
				break;
			case 2:
				Local_434.f_8 = 3;
				iLocal_283 = 0;
				break;
			case 3:
				Local_434.f_8 = 2;
				iLocal_283 = 1;
				break;
			case 4:
				Local_434.f_8 = 3;
				iLocal_283 = 1;
				break;
			case 5:
				Local_434.f_8 = 2;
				iLocal_283 = 2;
				break;
			case 6:
				Local_434.f_8 = 3;
				iLocal_283 = 2;
				break;
			}
	}
	Local_434.f_4 = 0;
	Local_434.f_5 = 0;
	Local_434.f_6 = 0;
	Local_434.f_0 = Local_434.f_8;
	Local_434.f_1 = 0;
	Local_434.f_2 = 0;
}

void func_377(int iParam0)//Position - 0x3003D
{
	Local_434.f_7 = iParam0;
	Local_434.f_6 = 1;
}

int func_380(var uParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4)//Position - 0x30111
{
	if (iParam3 != 0)
	{
		*uParam0 = iParam3;
		__LIB_11__.func_797("*** Epsilonist exists, grabbing ped index");
	}
	else
	{
		*uParam0 = PED::CREATE_PED(5, iParam4, Param1, fParam2, true, true);
		__LIB_11__.func_797("*** Epsilonist does not exist, creating new");
	}
	if (__LIB_1__.func_197(*uParam0))
	{
		PED::SET_PED_CONFIG_FLAG(*uParam0, 132, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, joaat("PLAYER"));
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, true);
		PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*uParam0, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		PED::SET_PED_KEEP_TASK(*uParam0, true);
		uParam0->f_1 = 3;
		uParam0->f_2 = 0;
		uParam0->f_3 = -1;
		return 1;
	}
	return 0;
}

void func_381(var uParam0)//Position - 0x301A7
{
	struct<3> Var0;
	Var0 = { uParam0->f_2 };
	func_382("Rock created at: ", uParam0->f_2);
	uParam0->f_1 = OBJECT::CREATE_OBJECT_NO_OFFSET(*uParam0, Var0, true, true, false);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_1, uParam0->f_5, 0, true);
		func_382("Rock rot vector: ", ENTITY::GET_ENTITY_ROTATION(uParam0->f_1, 0));
		func_382("Rock actual position: ", ENTITY::GET_ENTITY_COORDS(uParam0->f_1, false));
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_1, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_1, true);
	}
}

void func_382(char* sParam0, struct<3> Param1)//Position - 0x3022B
{
	sParam0 = sParam0;
	Param1 = { Param1 };
}

void func_383()//Position - 0x3023F
{
	Local_301.f_2 = AUDIO::GET_SOUND_ID();
	Local_301.f_3 = AUDIO::GET_SOUND_ID();
	Local_301.f_4 = AUDIO::GET_SOUND_ID();
	Local_301.f_5 = AUDIO::GET_SOUND_ID();
	Local_301.f_12 = 0.92f;
	Local_301.f_13 = 0;
	Local_301.f_14 = "NO_RECENT_ANIM";
	iLocal_95 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("digiscanner");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_95))
	{
		SYSTEM::WAIT(0);
	}
	if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("digiscanner"))
	{
		HUD::REGISTER_NAMED_RENDERTARGET("digiscanner", false);
	}
	HUD::LINK_NAMED_RENDERTARGET(iLocal_90);
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("digiscanner"))
	{
		iLocal_96 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("digiscanner");
	}
}

void func_384()//Position - 0x302D6
{
	Local_434.f_4 = 0;
	Local_434.f_5 = 0;
	Local_434.f_6 = 0;
	Local_434.f_3 = 0;
	Local_434.f_8 = -1;
}

void func_385()//Position - 0x302FC
{
	func_401(joaat("prop_tv_test"), 1751.65f, 4676.77f, 43.03f, -2.33f, 0.99f, 91.36f);
	func_400(1755.4631f, 4678.6196f, 44.1477f, -9.5251f, 0f, 122.2955f, 50.832f);
	func_399(3f, -4.5f, 0f);
	func_398(1689.951f, 4762.6133f, 40.9216f, 272.5499f);
	func_397(1779.514f, 4691.4473f, 39.345768f, 1744.225f, 4674.6465f, 46.84829f, 16.5f);
	func_396("EPS4_JCHAT1", sLocal_91);
	func_395("EPS4_JGOOD", "EPS4_JBAD");
	func_394("EPS4_JRET1", "EPS4_JRET2");
	func_393("EPS4_JCLOSE");
	func_392(0f, 0f, 0f);
	func_391(30f, 115f, 0.9f);
	func_401(joaat("prop_battery_01"), 1756.68f, 4832.28f, 39.43f, 90f, 13.21f, 78.57f);
	func_400(1758.0319f, 4826.5605f, 41.459f, -11.6785f, 0f, 6.5381f, 34.3083f);
	func_399(2f, 4f, 0f);
	func_398(1690.2666f, 4769.9937f, 40.9216f, 269.3043f);
	func_397(1750.0653f, 4833.117f, 36.87026f, 1763.2238f, 4831.8223f, 43.542503f, 13.75f);
	func_396("EPS4_MCHAT1", "EPS4_MCHAT2");
	func_395("EPS4_MGOOD", "EPS4_MBAD");
	func_394("EPS4_MRET1", "EPS4_MRET2");
	func_393("EPS4_MCLOSE");
	func_392(0f, 0f, 0f);
	func_391(30f, 195f, 0.9f);
	func_401(joaat("prop_old_boot"), 1847.863f, 4756.059f, 36.71f, -70.53f, 75.48f, 132.44f);
	func_400(1829.3098f, 4756.158f, 42.4876f, -23.5614f, 0f, -92.2873f, 50f);
	func_399(7.5f, -7.5f, 0f);
	func_398(1689.7749f, 4777.7695f, 40.9216f, 267.4597f);
	func_397(1856.2178f, 4755.223f, 34.67169f, 1841.1143f, 4755.489f, 41.434017f, 13.75f);
	func_396("EPS4_PCHAT1", "EPS4_PCHAT2");
	func_395("EPS4_PGOOD", "EPS4_PBAD");
	func_394(sLocal_91, "EPS4_PRET2");
	func_393("EPS4_PCLOSE");
	func_392(0f, 0f, 0f);
	func_391(20.5f, 155f, 0.9f);
	func_390(1820.1013f, 4701.0986f, 38.545f, 280.7432f, 0);
	func_390(1803.0437f, 4700.244f, 39.3123f, 72.1396f, 0);
	func_390(1820.4816f, 4672.5347f, 35.6368f, 253.4126f, 0);
	func_390(1819.8701f, 4694.0303f, 38.408f, 231.2265f, 0);
	func_390(1807.1217f, 4684.4185f, 38.5566f, 150.6129f, 0);
	func_390(1791.058f, 4689.403f, 40.5128f, 103.4073f, 0);
	func_390(1872.6261f, 4718.827f, 37.2889f, 210.8288f, 1);
	uLocal_422 = func_390(1764.089f, 4665.8794f, 42.3031f, 281.6336f, 2);
	uLocal_424 = func_390(1814.27f, 4651.32f, 37.58f, 173.1089f, 0);
	iLocal_423 = func_390(1846.5121f, 4705.6143f, 38.1214f, 25.7591f, 3);
	uLocal_425 = func_390(1790.4141f, 4722.897f, 37.8533f, 221.4777f, 0);
	__LIB_11__.func_329(&uLocal_304);
	__LIB_11__.func_328(&uLocal_304, 1897.42f, 4596.51f, 36.4f);
	__LIB_11__.func_328(&uLocal_304, 1912.2f, 4676.93f, 39.44f);
	__LIB_11__.func_328(&uLocal_304, 1886.09f, 4733.68f, 39.48f);
	__LIB_11__.func_328(&uLocal_304, 1800.24f, 4820.64f, 40.96f);
	__LIB_11__.func_328(&uLocal_304, 1796.556f, 4893.541f, 40.4741f);
	__LIB_11__.func_328(&uLocal_304, 1782.6514f, 4916.3325f, 41.4418f);
	__LIB_11__.func_328(&uLocal_304, 1746.5521f, 4942.362f, 42.8677f);
	__LIB_11__.func_328(&uLocal_304, 1702.5366f, 4893.8237f, 36.7751f);
	__LIB_11__.func_328(&uLocal_304, 1707.2734f, 4814.8096f, 40.9407f);
	__LIB_11__.func_328(&uLocal_304, 1729.46f, 4655.21f, 42.61f);
	__LIB_11__.func_328(&uLocal_304, 1772.0504f, 4602.1426f, 36.457f);
	__LIB_11__.func_327(&uLocal_304);
	__LIB_20__.func_743(&uLocal_356, &uLocal_304, 20f);
}

int func_390(struct<3> Param0, float fParam1, int iParam2)//Position - 0x309DB
{
	int iVar0;
	if (iLocal_297 >= 11)
	{
	}
	iVar0 = iLocal_297;
	iLocal_297++;
	Local_296[iVar0 /*6*/] = { Param0 };
	Local_296[iVar0 /*6*/].f_3 = fParam1;
	Local_296[iVar0 /*6*/].f_4 = iParam2;
	Local_296[iVar0 /*6*/].f_5 = 0;
	return iVar0;
}

void func_391(float fParam0, float fParam1, float fParam2)//Position - 0x30A27
{
	int iVar0;
	iVar0 = (iLocal_294 - 1);
	if (iVar0 < 0)
	{
	}
	Local_293[iVar0 /*43*/].f_21 = fParam0;
	Local_293[iVar0 /*43*/].f_23 = fParam1;
	Local_293[iVar0 /*43*/].f_22 = fParam2;
}

void func_392(float fParam0, float fParam1, float fParam2)//Position - 0x30A5D
{
	int iVar0;
	iVar0 = (iLocal_294 - 1);
	if (iVar0 < 0)
	{
	}
	Local_293[iVar0 /*43*/].f_18 = fParam0;
	Local_293[iVar0 /*43*/].f_19 = fParam1;
	Local_293[iVar0 /*43*/].f_20 = fParam2;
}

void func_393(char* sParam0)//Position - 0x30A93
{
	int iVar0;
	iVar0 = (iLocal_294 - 1);
	if (iVar0 < 0)
	{
	}
	Local_293[iVar0 /*43*/].f_42 = sParam0;
}

void func_394(char* sParam0, char* sParam1)//Position - 0x30AB3
{
	int iVar0;
	iVar0 = (iLocal_294 - 1);
	if (iVar0 < 0)
	{
	}
	Local_293[iVar0 /*43*/].f_38 = sParam0;
	Local_293[iVar0 /*43*/].f_39 = sParam1;
}

void func_395(char* sParam0, char* sParam1)//Position - 0x30ADE
{
	int iVar0;
	iVar0 = (iLocal_294 - 1);
	if (iVar0 < 0)
	{
	}
	Local_293[iVar0 /*43*/].f_40 = sParam0;
	Local_293[iVar0 /*43*/].f_41 = sParam1;
}

void func_396(char* sParam0, char* sParam1)//Position - 0x30B09
{
	int iVar0;
	iVar0 = (iLocal_294 - 1);
	if (iVar0 < 0)
	{
	}
	Local_293[iVar0 /*43*/].f_36 = sParam0;
	Local_293[iVar0 /*43*/].f_37 = sParam1;
}

void func_397(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x30B34
{
	int iVar0;
	iVar0 = (iLocal_294 - 1);
	if (iVar0 < 0)
	{
	}
	Local_293[iVar0 /*43*/].f_25 = { Param0 };
	Local_293[iVar0 /*43*/].f_25 = { Param1 };
	Local_293[iVar0 /*43*/].f_31 = fParam2;
}

void func_398(struct<3> Param0, float fParam1)//Position - 0x30B72
{
	int iVar0;
	iVar0 = (iLocal_294 - 1);
	if (iVar0 < 0)
	{
	}
	Local_293[iVar0 /*43*/].f_32 = { Param0 };
	Local_293[iVar0 /*43*/].f_35 = fParam1;
}

void func_399(struct<3> Param0)//Position - 0x30BA1
{
	int iVar0;
	iVar0 = (iLocal_294 - 1);
	if (iVar0 < 0)
	{
	}
	Local_293[iVar0 /*43*/].f_15 = { Param0 };
}

void func_400(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x30BC5
{
	int iVar0;
	iVar0 = (iLocal_294 - 1);
	if (iVar0 < 0)
	{
	}
	Local_293[iVar0 /*43*/].f_8 = { Param0 };
	Local_293[iVar0 /*43*/].f_11 = { Param1 };
	Local_293[iVar0 /*43*/].f_14 = fParam2;
}

void func_401(int iParam0, struct<3> Param1, struct<3> Param2)//Position - 0x30C03
{
	int iVar0;
	if (iLocal_294 >= 4)
	{
	}
	iVar0 = iLocal_294;
	iLocal_294++;
	Local_293[iVar0 /*43*/] = iParam0;
	Local_293[iVar0 /*43*/].f_2 = { Param1 };
	Local_293[iVar0 /*43*/].f_5 = { Param2 };
	Local_293[iVar0 /*43*/].f_23 = 150f;
	Local_293[iVar0 /*43*/].f_24 = -1f;
	Local_293[iVar0 /*43*/].f_36 = sLocal_91;
	Local_293[iVar0 /*43*/].f_37 = sLocal_91;
	Local_293[iVar0 /*43*/].f_38 = sLocal_91;
	Local_293[iVar0 /*43*/].f_39 = sLocal_91;
	Local_293[iVar0 /*43*/].f_40 = sLocal_91;
	Local_293[iVar0 /*43*/].f_41 = sLocal_91;
}

int func_408(var uParam0)//Position - 0x30DAC
{
	int iVar0[2];
	int iVar1;
	bool bVar2;
	int iVar3;
	iVar0[0] = uLocal_78;
	iVar0[1] = uLocal_79;
	switch (iLocal_77)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 11.5f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "EP_4_RCM_CONCAT", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_10__.func_717(&(uParam0->f_48), "rcm_epsilonism4", "ep_4_rcm_marnie_base_marnie", "ep_4_rcm_marnie_lookaround_marnie");
			iLocal_77 = 1;
			break;
		case 1:
			if (!__LIB_10__.func_716(&iVar0) || !__LIB_20__.func_273(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_77 = 2;
			break;
		case 2:
			bVar2 = true;
			if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
			{
				iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_26__.func_256(&(uParam0->f_28[0]), 60, 1826.13f, 4698.88f, 38.92f, 21.63f, "EPSILON LAUNCHER RC - MARNIE", 1))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], iVar3);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 132, true);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[1]))
			{
				if (__LIB_26__.func_256(&(uParam0->f_28[1]), 55, 1827.24f, 4699.76f, 39.09f, 57.09f, "EPSILON LAUNCHER RC - JIMMY", 1))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[1], iVar3);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[1], 132, true);
					PED::SET_PED_PROP_INDEX(uParam0->f_28[1], 1, 0, 0, false);
					TASK::CLEAR_PED_TASKS(uParam0->f_28[1]);
					WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[1], joaat("WEAPON_DIGISCANNER"), -1, true, true);
					TASK::TASK_PLAY_ANIM(uParam0->f_28[1], "rcm_epsilonism4", "ep_4_rcm_jimmyboston_base_jb", 8f, -8f, -1, 1, 0f, false, false, false);
					__LIB_10__.func_701(uParam0->f_28[1], 1827.24f, 4699.76f, 39.09f, 57.09f, 1, 1);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				iLocal_77 = 3;
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

void func_418()//Position - 0x31210
{
	__LIB_26__.func_252();
	if (__LIB_26__.func_257())
	{
		__LIB_11__.func_797("...Random Character Script was triggered so additional cleanup required");
	}
	if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), iLocal_89);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0f);
	}
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	GRAPHICS::REMOVE_GRASS_CULL_SPHERE(iLocal_290);
	if (__LIB_0__.func_121(Local_298[0 /*8*/]) && __LIB_0__.func_121(Local_298[1 /*8*/]))
	{
		if (PED::IS_PED_IN_GROUP(Local_298[0 /*8*/]))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_298[0 /*8*/]);
		}
		else if (PED::IS_PED_IN_GROUP(Local_298[1 /*8*/]))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_298[1 /*8*/]);
		}
	}
	__LIB_0__.func_124(&(Local_298[0 /*8*/]), 1, 1, 1);
	__LIB_0__.func_124(&(Local_298[1 /*8*/]), 1, 1, 1);
	HUD::RELEASE_NAMED_RENDERTARGET("digiscanner");
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_92, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_93, false);
	PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_426);
	PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_427);
	PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_428);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EPSILONISM_04_MIX"))
	{
		__LIB_11__.func_797("Stopping dynamic mix EPSILONISM_04_MIX");
		AUDIO::STOP_AUDIO_SCENE("EPSILONISM_04_MIX");
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

