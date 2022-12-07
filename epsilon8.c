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
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	struct<61> Local_41 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	float fLocal_46 = 0f;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	int iLocal_57 = 0;
	struct<3> Local_58[7];
	struct<3> Local_59[7];
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	float fLocal_69[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_70[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
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
	int iLocal_180 = 0;
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
	int iLocal_193 = 0;
	char* sLocal_194 = NULL;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	var uLocal_198 = 16;
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
	var uLocal_365 = -1;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 1000;
	var uLocal_373 = 1000;
	var uLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int* iLocal_379 = NULL;
	int* iLocal_380 = NULL;
	int iLocal_381[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_382[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int* iLocal_383 = NULL;
	int iLocal_384[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	var uLocal_387 = 2;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int* iLocal_392 = NULL;
	int iLocal_393[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_394[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int* iLocal_395 = NULL;
	int* iLocal_396 = NULL;
	int iLocal_397[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_398[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_399[7];
	float fLocal_400[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_401[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_402[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_403[7];
	float fLocal_404[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_405[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_406[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_407[7];
	float fLocal_408[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_409[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_410[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_411[7];
	float fLocal_412[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_413[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_414[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_415[7];
	float fLocal_416[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_417[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_418[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_419[7];
	float fLocal_420[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_421 = 0;
	int* iLocal_422[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int* iLocal_423[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int* iLocal_424[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int* iLocal_425 = NULL;
	int* iLocal_426 = NULL;
	int* iLocal_427 = NULL;
	int* iLocal_428 = NULL;
	int* iLocal_429 = NULL;
	int* iLocal_430 = NULL;
	int* iLocal_431 = NULL;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	struct<61> Local_438 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	uLocal_38 = __LIB_2__::func_108(60);
	uLocal_39 = __LIB_2__::func_108(14);
	fLocal_42 = 400f;
	fLocal_43 = 150f;
	fLocal_44 = 450f;
	fLocal_45 = 0.7f;
	fLocal_46 = 1f;
	fLocal_47 = 0.7f;
	iLocal_48 = 4;
	iLocal_49 = 525000;
	fLocal_50 = 34.75f;
	fLocal_51 = 50f;
	iLocal_52 = 25;
	iLocal_53 = 10;
	iLocal_54 = 25;
	iLocal_55 = 75;
	Local_56 = { -363.3094f, -82.3607f, 44.6577f };
	iLocal_57 = 157;
	iLocal_101 = 1;
	iLocal_121 = -1;
	Local_41 = { ScriptParam_438 };
	__LIB_20__::func_264(&Local_41);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		if (iLocal_133 == 1)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("EPS8_FAIL");
			__LIB_0__::func_135("Force cleanup [TERMINATING]");
			__LIB_38__::func_39(1);
			func_492();
		}
		else
		{
			__LIB_0__::func_135("Force cleanup [TERMINATING]");
			__LIB_38__::func_39(1);
			func_492();
		}
	}
	if (__LIB_0__::func_294())
	{
		Global_78564 = 1;
		iLocal_37 = 0;
		while (!func_487(&Local_41))
		{
			SYSTEM::WAIT(0);
		}
		Global_78564 = 0;
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(__LIB_29__::func_795(), false);
	MISC::CLEAR_BIT(&(Global_113386.f_18574.f_382), 1);
	PED::ADD_RELATIONSHIP_GROUP("Epsilon", &iLocal_196);
	PED::ADD_RELATIONSHIP_GROUP("EpsilonCivilian", &iLocal_197);
	iLocal_435 = PED::ADD_SCENARIO_BLOCKING_AREA(-711.6323f, 42.0868f, 14.5077f, -663.5175f, 118.0403f, 86.0362f, false, true, true, true);
	iLocal_436 = PED::ADD_SCENARIO_BLOCKING_AREA(-657.5416f, 38.5153f, 38.7892f, -665.8512f, 52.9232f, 42.3853f, false, true, true, true);
	iLocal_437 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(45.2982f, -36.1436f, -413.4749f) - Vector(5f, 7f, 7f), Vector(45.2982f, -36.1436f, -413.4749f) + Vector(5f, 7f, 7f), false, true, true, true);
	__LIB_10__::func_700(&Local_41, 0, 1);
	iLocal_378[0] = Local_41.f_28[0];
	iLocal_378[2] = Local_41.f_28[1];
	iLocal_381[0] = Local_41.f_28[2];
	iLocal_382[0] = Local_41.f_28[3];
	Local_41.f_28[0] = 0;
	Local_41.f_28[1] = 0;
	Local_41.f_28[2] = 0;
	Local_41.f_28[3] = 0;
	__LIB_32__::func_762(1);
	while (true)
	{
		VEHICLE::STOP_ALL_GARAGE_ACTIVITY();
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_Epsilon8", 0);
		SYSTEM::WAIT(0);
		__LIB_35__::func_898(Local_41.f_9, 0, 0, 0, 0, 0);
		if ((iLocal_376 != 0 && iLocal_376 != 1) && iLocal_376 != 2)
		{
			if (iLocal_376 != 10)
			{
				func_462();
			}
			func_457();
		}
		switch (iLocal_376)
		{
			case 0:
				func_449();
				break;
			case 1:
				func_369();
				break;
			case 2:
				func_355();
				break;
			case 3:
				func_350();
				break;
			case 4:
				func_319();
				break;
			case 5:
				func_315();
				break;
			case 6:
				func_314();
				break;
			case 7:
				func_303();
				break;
			case 8:
				func_62();
				break;
			case 10:
				func_3();
				break;
		}
		if (iLocal_376 != 10)
		{
			__LIB_0__::func_371();
			__LIB_0__::func_371();
		}
	}
}

void func_3()//Position - 0x363
{
	switch (iLocal_377)
	{
		case 0:
			AUDIO::TRIGGER_MUSIC_EVENT("EPS8_FAIL");
			if (iLocal_183 == 1)
			{
				__LIB_40__::func_942(0, 1, -iLocal_49, 0, 0);
			}
			func_25();
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_194))
			{
				__LIB_39__::func_861(sLocal_194, 1);
			}
			else
			{
				__LIB_38__::func_39(1);
			}
			iLocal_377 = 1;
			break;
		case 1:
			if (__LIB_0__::func_204())
			{
				func_4();
				func_492();
			}
			break;
	}
}

void func_4()//Position - 0x3D9
{
	__LIB_11__::func_833(&uLocal_363, 0);
	iLocal_375 = 0;
	fLocal_51 = 100f;
	HUD::CLEAR_PRINTS();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_393[0]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_393[0], 0f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_393[1]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_393[1], 0f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_393[2]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_393[2], 0f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_393[3]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_393[3], 0f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_393[4]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_393[4], 0f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_393[5]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_393[5], 0f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_393[6]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_393[6], 0f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_394[0]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_394[0], 0f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_394[1]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_394[1], 0f);
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_196);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_197);
	if (iLocal_178 == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				PATHFIND::GET_SAFE_COORD_FOR_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), false, &Local_68, 0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_68, true, false, false, true);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_395))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_395, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
					{
						PATHFIND::GET_SAFE_COORD_FOR_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), false, &Local_68, 0);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_68, true, false, false, true);
					}
				}
			}
		}
	}
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
	__LIB_0__::func_0(&iLocal_383);
	__LIB_0__::func_0(&iLocal_379);
	__LIB_0__::func_0(&iLocal_380);
	__LIB_11__::func_32(&iLocal_392);
	__LIB_11__::func_32(&iLocal_396);
	__LIB_0__::func_123(&(iLocal_384[0]));
	__LIB_0__::func_123(&(iLocal_384[1]));
	__LIB_0__::func_123(&(iLocal_384[2]));
	__LIB_0__::func_123(&(iLocal_384[3]));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_395))
	{
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(iLocal_395);
		__LIB_11__::func_32(&iLocal_395);
	}
	iLocal_78 = 0;
	while (iLocal_78 < 7)
	{
		__LIB_0__::func_0(&(iLocal_381[iLocal_78]));
		__LIB_0__::func_0(&(iLocal_382[iLocal_78]));
		__LIB_0__::func_0(&(iLocal_378[iLocal_78]));
		__LIB_11__::func_32(&(iLocal_393[iLocal_78]));
		SYSTEM::WAIT(0);
		iLocal_78++;
	}
	func_13();
	__LIB_8__::func_770(0);
	iLocal_78 = 0;
	iLocal_133 = 0;
	iLocal_134 = 0;
	iLocal_136 = 0;
	iLocal_135 = 0;
	iLocal_137 = 0;
	iLocal_83 = 0;
	iLocal_79 = 0;
	iLocal_80 = 0;
	iLocal_92 = 0;
	iLocal_83 = 0;
	iLocal_84 = 0;
	iLocal_138[0] = 0;
	iLocal_138[1] = 0;
	iLocal_138[2] = 0;
	iLocal_138[3] = 0;
	iLocal_138[4] = 0;
	iLocal_138[5] = 0;
	iLocal_138[6] = 0;
	iLocal_156[0] = 0;
	iLocal_156[1] = 0;
	iLocal_156[2] = 0;
	iLocal_156[3] = 0;
	iLocal_156[4] = 0;
	iLocal_156[5] = 0;
	iLocal_156[6] = 0;
	iLocal_87 = 0;
	iLocal_139 = 0;
	iLocal_140 = 0;
	iLocal_141 = 0;
	iLocal_143 = 0;
	iLocal_94 = 0;
	iLocal_97 = 0;
	iLocal_145 = 0;
	iLocal_146 = 0;
	iLocal_147 = 0;
	iLocal_148 = 0;
	iLocal_149 = 0;
	iLocal_150 = 0;
	iLocal_151 = 0;
	iLocal_99 = 0;
	iLocal_152 = 0;
	iLocal_153 = 0;
	iLocal_154 = 0;
	iLocal_101 = 1;
	iLocal_155 = 0;
	iLocal_157 = 0;
	iLocal_158 = 0;
	iLocal_159 = 0;
	iLocal_160 = 0;
	iLocal_161 = 0;
	iLocal_102 = 0;
	iLocal_103 = 0;
	iLocal_162 = 0;
	iLocal_163 = 0;
	iLocal_164 = 0;
	iLocal_108 = 0;
	iLocal_105 = 0;
	iLocal_166 = 0;
	fLocal_44 = 450f;
	iLocal_168 = 0;
	iLocal_106 = 0;
	iLocal_169 = 0;
	iLocal_170 = 0;
	iLocal_171 = 0;
	iLocal_172 = 0;
	iLocal_110 = 0;
	iLocal_173 = 0;
	iLocal_174 = 0;
	iLocal_175 = 0;
	iLocal_176 = 0;
	iLocal_177 = 0;
	iLocal_107 = 0;
	iLocal_117 = 0;
	iLocal_119 = 0;
	iLocal_120 = 0;
	iLocal_179 = 0;
	iLocal_181 = 0;
	iLocal_180 = 0;
	iLocal_182 = 0;
	iLocal_121 = -1;
	iLocal_183 = 0;
	iLocal_122 = 0;
	iLocal_184 = 0;
	iLocal_125 = 0;
	iLocal_126 = 0;
	iLocal_185 = 0;
	iLocal_128 = 0;
	iLocal_191 = 0;
	iLocal_130 = 0;
	iLocal_192 = 0;
	iLocal_193 = 0;
	iLocal_195 = 0;
	if (CAM::DOES_CAM_EXIST(iLocal_385))
	{
		CAM::SET_CAM_ACTIVE(iLocal_385, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_385, false);
		if (CAM::DOES_CAM_EXIST(iLocal_386))
		{
			CAM::SET_CAM_ACTIVE(iLocal_386, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::DESTROY_CAM(iLocal_386, false);
		}
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EPSILONISM_08_CHOPPER"))
	{
		AUDIO::STOP_AUDIO_SCENE("EPSILONISM_08_CHOPPER");
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
}

void func_13()//Position - 0xA70
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("taxi"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sadler"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("habanero"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("schafter2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rumpo"));
	__LIB_0__::func_124(&(iLocal_398[0]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_398[1]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_398[2]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_398[3]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_398[4]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_398[5]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_398[6]), 1, 0, 1);
	__LIB_0__::func_106(&(iLocal_397[0]));
	__LIB_0__::func_106(&(iLocal_397[1]));
	__LIB_0__::func_106(&(iLocal_397[2]));
	__LIB_0__::func_106(&(iLocal_397[3]));
	__LIB_0__::func_106(&(iLocal_397[4]));
	__LIB_0__::func_106(&(iLocal_397[5]));
	__LIB_0__::func_106(&(iLocal_397[6]));
	__LIB_0__::func_124(&(iLocal_402[0]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_402[1]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_402[2]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_402[3]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_402[4]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_402[5]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_402[6]), 1, 0, 1);
	__LIB_0__::func_106(&(iLocal_401[0]));
	__LIB_0__::func_106(&(iLocal_401[1]));
	__LIB_0__::func_106(&(iLocal_401[2]));
	__LIB_0__::func_106(&(iLocal_401[3]));
	__LIB_0__::func_106(&(iLocal_401[4]));
	__LIB_0__::func_106(&(iLocal_401[5]));
	__LIB_0__::func_106(&(iLocal_401[6]));
	__LIB_0__::func_124(&(iLocal_406[0]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_406[1]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_406[2]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_406[3]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_406[4]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_406[5]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_406[6]), 1, 0, 1);
	__LIB_0__::func_106(&(iLocal_405[0]));
	__LIB_0__::func_106(&(iLocal_405[1]));
	__LIB_0__::func_106(&(iLocal_405[2]));
	__LIB_0__::func_106(&(iLocal_405[3]));
	__LIB_0__::func_106(&(iLocal_405[4]));
	__LIB_0__::func_106(&(iLocal_405[5]));
	__LIB_0__::func_106(&(iLocal_405[6]));
	__LIB_0__::func_124(&(iLocal_410[0]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_410[1]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_410[2]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_410[3]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_410[4]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_410[5]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_410[6]), 1, 0, 1);
	__LIB_0__::func_106(&(iLocal_409[0]));
	__LIB_0__::func_106(&(iLocal_409[1]));
	__LIB_0__::func_106(&(iLocal_409[2]));
	__LIB_0__::func_106(&(iLocal_409[3]));
	__LIB_0__::func_106(&(iLocal_409[4]));
	__LIB_0__::func_106(&(iLocal_409[5]));
	__LIB_0__::func_106(&(iLocal_409[6]));
	__LIB_0__::func_124(&(iLocal_414[0]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_414[1]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_414[2]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_414[3]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_414[4]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_414[5]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_414[6]), 1, 0, 1);
	__LIB_0__::func_106(&(iLocal_413[0]));
	__LIB_0__::func_106(&(iLocal_413[1]));
	__LIB_0__::func_106(&(iLocal_413[2]));
	__LIB_0__::func_106(&(iLocal_413[3]));
	__LIB_0__::func_106(&(iLocal_413[4]));
	__LIB_0__::func_106(&(iLocal_413[5]));
	__LIB_0__::func_106(&(iLocal_413[6]));
	__LIB_0__::func_124(&(iLocal_418[0]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_418[1]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_418[2]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_418[3]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_418[4]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_418[5]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_418[6]), 1, 0, 1);
	__LIB_0__::func_106(&(iLocal_417[0]));
	__LIB_0__::func_106(&(iLocal_417[1]));
	__LIB_0__::func_106(&(iLocal_417[2]));
	__LIB_0__::func_106(&(iLocal_417[3]));
	__LIB_0__::func_106(&(iLocal_417[4]));
	__LIB_0__::func_106(&(iLocal_417[5]));
	__LIB_0__::func_106(&(iLocal_417[6]));
}

void func_25()//Position - 0x10E3
{
	__LIB_0__::func_523(&(iLocal_422[0]));
	__LIB_0__::func_523(&(iLocal_422[1]));
	__LIB_0__::func_523(&(iLocal_422[2]));
	__LIB_0__::func_523(&(iLocal_422[3]));
	__LIB_0__::func_523(&(iLocal_422[4]));
	__LIB_0__::func_523(&(iLocal_422[5]));
	__LIB_0__::func_523(&(iLocal_422[6]));
	__LIB_0__::func_523(&(iLocal_423[0]));
	__LIB_0__::func_523(&(iLocal_423[1]));
	__LIB_0__::func_523(&(iLocal_423[2]));
	__LIB_0__::func_523(&(iLocal_423[3]));
	__LIB_0__::func_523(&(iLocal_423[4]));
	__LIB_0__::func_523(&(iLocal_423[5]));
	__LIB_0__::func_523(&(iLocal_423[6]));
	__LIB_0__::func_523(&(iLocal_424[0]));
	__LIB_0__::func_523(&(iLocal_424[1]));
	__LIB_0__::func_523(&(iLocal_424[2]));
	__LIB_0__::func_523(&(iLocal_424[3]));
	__LIB_0__::func_523(&(iLocal_424[4]));
	__LIB_0__::func_523(&(iLocal_424[5]));
	__LIB_0__::func_523(&(iLocal_424[6]));
	__LIB_0__::func_523(&iLocal_425);
	__LIB_0__::func_523(&iLocal_426);
	__LIB_0__::func_523(&iLocal_427);
	__LIB_0__::func_523(&iLocal_428);
	__LIB_0__::func_523(&iLocal_429);
	__LIB_0__::func_523(&iLocal_430);
	__LIB_0__::func_523(&iLocal_431);
}

void func_62()//Position - 0x2605
{
	int iVar0;
	struct<3> Var1;
	func_302();
	func_301();
	if (iLocal_125 == 0)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_112 + 5000)
		{
			iLocal_125 = 1;
		}
	}
	else if (iLocal_125 == 1)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_112 + 12000)
		{
			iLocal_125 = 2;
		}
	}
	if (MISC::GET_GAME_TIMER() > iLocal_112 + 9700)
	{
		if (iLocal_103 > 2 || iLocal_151 == 1)
		{
		}
	}
	if ((iLocal_84 == 3 && iLocal_92 == 2) && !__LIB_0__::func_75())
	{
		iLocal_184 = 1;
	}
	if (iLocal_80 > 10000 && iLocal_79 > 10000)
	{
		iLocal_80 = (iLocal_80 - 9000);
		iLocal_79 = (iLocal_79 - 9000);
	}
	if (iLocal_151 == 0)
	{
		if (iLocal_150 == 0)
		{
			if (__LIB_1__::func_183(iLocal_395))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
				{
					if (iLocal_80 != iLocal_79)
					{
						if (iLocal_136 == 0)
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(15f, 4f, 1);
							__LIB_0__::func_210("EPS8_12", 7500, 0);
						}
						iLocal_150 = 1;
					}
				}
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_431))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_384[3], 0) < 1f)
			{
				HUD::REMOVE_BLIP(&iLocal_431);
				OBJECT::DELETE_OBJECT(&(iLocal_384[3]));
				__LIB_40__::func_942(0, 1, iLocal_49, 0, 0);
				iLocal_183 = 1;
				if (iLocal_80 != iLocal_79)
				{
					if (iLocal_150 == 0)
					{
						if (iLocal_136 == 0)
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(15f, 4f, 1);
							__LIB_0__::func_210("EPS8_12", 7500, 0);
						}
						iLocal_150 = 1;
					}
				}
			}
		}
	}
	if (__LIB_0__::func_121(iLocal_392) && __LIB_0__::func_121(iLocal_380))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_392, true) };
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_392, 0f, 0f, (Var1.f_2 - 200f)), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_392, 500f, 0f, (Var1.f_2 + 200f)), 1000f, false, true, 0))
		{
			if (__LIB_1__::func_198(iLocal_380, iLocal_392, 2) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_392, 1, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_380, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 || TASK::GET_SEQUENCE_PROGRESS(iLocal_380) > 0)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, iLocal_392, false);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_380, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				}
			}
		}
		else if (__LIB_1__::func_198(iLocal_380, iLocal_392, 1) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_392, 2, false))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_380, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 || TASK::GET_SEQUENCE_PROGRESS(iLocal_380) > 0)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, iLocal_392, false);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_380, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
		}
	}
	func_295();
	func_293();
	func_291();
	if (iLocal_137 == 1)
	{
		func_288();
	}
	if (iLocal_181 == 0)
	{
		if (__LIB_1__::func_183(iLocal_392))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
			{
				if (WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_STICKYBOMB"))
				{
					if (MISC::GET_GAME_TIMER() > iLocal_112 + 5000)
					{
						if (iLocal_180 == 0)
						{
							iLocal_180 = 1;
						}
					}
				}
				else if (iLocal_180 == 1)
				{
					iLocal_180 = 0;
				}
			}
			else if (iLocal_180 == 1)
			{
				iLocal_180 = 0;
			}
		}
	}
	if (iLocal_80 == iLocal_79 && MISC::GET_GAME_TIMER() > iLocal_112 + 8000)
	{
		iLocal_81 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		if (iLocal_81 == 0)
		{
			iLocal_85 = MISC::GET_GAME_TIMER();
			if (iLocal_85 > iLocal_86 + 1200)
			{
				if (iLocal_87 == 0)
				{
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					iLocal_147 = 0;
					iLocal_88 = MISC::GET_GAME_TIMER();
					iLocal_87 = 1;
				}
				else if (iLocal_87 == 1)
				{
					iLocal_89 = MISC::GET_GAME_TIMER();
					if (iLocal_89 > iLocal_88 + 2000)
					{
						if (!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
						{
							if (iLocal_151 == 0)
							{
								if (iLocal_148 == 0)
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
									{
										AUDIO::TRIGGER_MUSIC_EVENT("EPS8_ESCAPE");
										func_95();
									}
									else if (iLocal_147 == 0)
									{
										__LIB_0__::func_210("EPS8_06", 7500, 0);
										iLocal_147 = 1;
									}
								}
								else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_392, false))
								{
									AUDIO::TRIGGER_MUSIC_EVENT("EPS8_ESCAPE");
									func_95();
								}
								else if (iLocal_147 == 0)
								{
									__LIB_0__::func_210("EPS8_20", 7500, 0);
									iLocal_147 = 1;
								}
							}
							else
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(15f, 4f, 1);
								func_95();
							}
						}
					}
				}
			}
		}
		else if (iLocal_136 == 0)
		{
			__LIB_0__::func_210("EPS8_03", 7500, 0);
			iLocal_136 = 1;
		}
	}
	func_63();
}

void func_63()//Position - 0x2A6D
{
	int iVar0;
	if (((!__LIB_0__::func_405("EPS8_12", 0, 0) && !__LIB_0__::func_405("EPS8_16", 0, 0)) && !__LIB_0__::func_405("EPS8_11", 0, 0)) && !__LIB_0__::func_405("EPS8_25", 0, 0))
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	if (__LIB_1__::func_197(iLocal_379))
	{
		if (iLocal_103 == 0)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_112 + 1800)
			{
				if (!__LIB_0__::func_75())
				{
					if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_CH", "EPS8_CH_1", 6, iVar0, 0))
					{
						iLocal_103 = 1;
					}
				}
			}
		}
		else if (iLocal_103 == 1)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_112 + 3000)
			{
				if (!__LIB_0__::func_75())
				{
					if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_CH", "EPS8_CH_2", 6, iVar0, 0))
					{
						iLocal_103 = 2;
					}
				}
			}
		}
		else if (iLocal_103 == 2)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_112 + 5000)
			{
				if (iLocal_168 == 0)
				{
					if (func_65(iLocal_379))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_CH2", "EPS8_CH2_1", 6, iVar0, 0))
							{
								iLocal_103 = 3;
							}
						}
					}
				}
			}
		}
		else if (iLocal_103 == 3)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_112 + 10000)
			{
				if (iLocal_168 == 0)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_395) > 17f)
						{
							if (func_65(iLocal_379))
							{
								if (!__LIB_0__::func_75())
								{
									fLocal_73 = ENTITY::GET_ENTITY_HEADING(iLocal_395);
									if (fLocal_73 >= 315f || fLocal_73 < 45f)
									{
										if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_CH2", "EPS8_CH2_2", 6, iVar0, 0))
										{
											iLocal_103 = 4;
										}
									}
									if (fLocal_73 >= 45f && fLocal_73 < 135f)
									{
										if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_CH2", "EPS8_CH2_3", 6, iVar0, 0))
										{
											iLocal_103 = 4;
										}
									}
									if (fLocal_73 >= 135f && fLocal_73 < 225f)
									{
										if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_CH2", "EPS8_CH2_4", 6, iVar0, 0))
										{
											iLocal_103 = 4;
										}
									}
									if (fLocal_73 >= 225f && fLocal_73 < 315f)
									{
										if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_CH2", "EPS8_CH2_5", 6, iVar0, 0))
										{
											iLocal_103 = 4;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (MISC::GET_GAME_TIMER() > iLocal_112 + 8000)
		{
			if (iLocal_162 == 0)
			{
				if (!__LIB_0__::func_75())
				{
					iLocal_162 = 1;
				}
			}
			if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
			{
				if (iLocal_163 == 0)
				{
					if (__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_392, 200f, 1))
					{
						if (!__LIB_0__::func_75())
						{
							if (iLocal_168 == 0)
							{
								if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_CH2", "EPS8_CH2_6", 6, iVar0, 0))
								{
									iLocal_163 = 1;
								}
							}
						}
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_380, false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_380, true))
				{
					if (iLocal_164 == 0)
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_CH2", "EPS8_CH2_7", 6, iVar0, 0))
							{
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
								iLocal_164 = 1;
							}
						}
					}
				}
			}
			else if (iLocal_108 == 0)
			{
				iLocal_109 = MISC::GET_GAME_TIMER();
				iLocal_108 = 1;
			}
			else if (iLocal_108 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_109 + 2400)
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_CH2", "EPS8_CH2_8", 6, iVar0, 0))
						{
							iLocal_108 = 2;
						}
					}
				}
			}
		}
	}
	if (iLocal_79 > iLocal_80 + 2)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_112 + 8000)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) == 25)
			{
				if (iLocal_102 == 0)
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_CH3", "EPS8_CH3_1", 6, iVar0, 0))
						{
							iLocal_102 = 1;
						}
					}
				}
				else if (iLocal_102 == 1)
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_CH3", "EPS8_CH3_2", 6, iVar0, 0))
						{
							iLocal_102 = 2;
						}
					}
				}
				else if (iLocal_102 == 2)
				{
					if (!__LIB_0__::func_75())
					{
						iLocal_102 = 3;
					}
				}
				else if (iLocal_102 == 3)
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_CH3", "EPS8_CH3_3", 6, iVar0, 0))
						{
							iLocal_102 = 4;
						}
					}
				}
				else if (iLocal_102 == 4)
				{
					if (!__LIB_0__::func_75())
					{
						iLocal_102 = 5;
					}
				}
				else if (iLocal_102 == 5)
				{
					if (!__LIB_0__::func_75())
					{
						iLocal_102 = 6;
					}
				}
				else if (iLocal_102 == 6)
				{
					if (!__LIB_0__::func_75())
					{
						iLocal_102 = 7;
					}
				}
				else if (iLocal_102 == 7)
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_CH3", "EPS8_CH3_4", 6, iVar0, 0))
						{
							iLocal_102 = 8;
						}
					}
				}
			}
		}
	}
}

bool func_65(int iParam0)//Position - 0x2F2E
{
	return func_66(PED::GET_VEHICLE_PED_IS_IN(iParam0, false), PLAYER::PLAYER_PED_ID(), 250, 7);
}

bool func_66(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2F48
{
	int iVar0;
	var uVar1;
	iVar0 = __LIB_10__::func_724(iParam0, iParam1);
	if (!__LIB_0__::func_121(iParam0) || !__LIB_0__::func_121(iParam1))
	{
		if (iVar0 != -1)
		{
			__LIB_9__::func_801(&(Local_35[iVar0 /*4*/]));
		}
		return 0;
	}
	if (iVar0 == -1)
	{
		iVar0 = __LIB_10__::func_723();
		if (iVar0 == -1)
		{
			return 0;
		}
		Local_35[iVar0 /*4*/].f_1 = iParam0;
		Local_35[iVar0 /*4*/].f_2 = iParam1;
	}
	uVar1 = __LIB_20__::func_272(&(Local_35[iVar0 /*4*/]), ENTITY::GET_ENTITY_COORDS(iParam0, true), iParam1, &(Local_35[iVar0 /*4*/].f_3), iParam0, iParam3);
	return (uVar1 || (MISC::GET_GAME_TIMER() - Local_35[iVar0 /*4*/].f_3) < iParam2);
}

void func_95()//Position - 0x3B78
{
	int iVar0;
	if (iLocal_133 == 1)
	{
		if (iLocal_117 == iLocal_79)
		{
			__LIB_0__::func_498(753);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("EPS8_PASS");
		Global_113386.f_18574.f_388 = 1;
	}
	else
	{
		AUDIO::TRIGGER_MUSIC_EVENT("EPS8_PASS");
		Global_113386.f_18574.f_388 = 0;
	}
	STATS::STAT_GET_INT(joaat("NUM_EPSILON_STEP"), &iVar0, -1);
	if (iVar0 < 20)
	{
		STATS::STAT_SET_INT(joaat("NUM_EPSILON_STEP"), 20, true);
		__LIB_0__::func_4(23, 20);
	}
	__LIB_35__::func_525(23, 1);
	func_96(80, 1);
	iLocal_142 = 1;
	func_492();
}

void func_96(int iParam0, bool bParam1)//Position - 0x3C02
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
	func_121();
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

void func_121()//Position - 0x4D3C
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
				if (func_235(iVar1, 14, iVar2))
				{
					func_122(iVar1, 14, iVar2);
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

int func_122(int iParam0, int iParam1, int iParam2)//Position - 0x4DFD
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
	if (!func_235(iParam0, iParam1, iParam2))
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
				func_122(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_122(iParam0, 14, uVar5[iVar3]))
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
	if (func_162(iParam0, iVar0, &iVar7, 0))
	{
		func_125(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_123(iParam0, iVar0, &iVar7))
	{
		func_125(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_123(int iParam0, int iParam1, int iParam2)//Position - 0x4FB9
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_235(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_125(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x5080
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
										func_125(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_125(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, func_131(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_162(iParam0, iVar10, &iVar4, 1))
							{
								func_125(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_125(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_125(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_125(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_125(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_125(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_125(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_125(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_125(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_125(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_162(iParam0, iVar10, &iVar4, 0))
		{
			func_125(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_123(iParam0, iVar10, &iVar4))
		{
			func_125(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_131(int iParam0, int iParam1, int iParam2)//Position - 0x60BD
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
				if (func_235(iParam0, iParam1, iVar0))
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
				if (func_235(iParam0, iParam1, iVar1))
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

int func_162(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC6F6
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_235(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_235(int iParam0, int iParam1, int iParam2)//Position - 0x22E36
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
				if (!func_235(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_235(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_235(iParam0, 14, iVar4))
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
			if (!func_235(iParam0, 14, uVar8[iVar7]))
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

void func_288()//Position - 0x2A28E
{
	if (__LIB_1__::func_197(iLocal_379))
	{
		if (__LIB_1__::func_183(iLocal_392))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_379, iLocal_392, false))
			{
				if (__LIB_0__::func_121(iLocal_395))
				{
					if (TASK::CONTROL_MOUNTED_WEAPON(iLocal_379))
					{
						TASK::SET_MOUNTED_WEAPON_TARGET(iLocal_379, 0, iLocal_395, 0f, 0f, 0f, 2, false);
					}
				}
				if (iLocal_148 == 0)
				{
					Local_61 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					iLocal_82 = SYSTEM::ROUND((Local_61.f_2 + 20f));
					if (iLocal_82 == 0)
					{
					}
					if (iLocal_92 < 2)
					{
						if (iLocal_94 == 0)
						{
							if (iLocal_168 == 0)
							{
								if (iLocal_172 == 0)
								{
									if (__LIB_0__::func_121(iLocal_395))
									{
										TASK::TASK_HELI_MISSION(iLocal_379, iLocal_392, iLocal_395, 0, 0f, 0f, 0f, 4, fLocal_51, 50f, -1f, -1, 40, -1f, 0);
									}
								}
							}
							else
							{
								TASK::TASK_HELI_MISSION(iLocal_379, iLocal_392, 0, 0, ENTITY::GET_ENTITY_COORDS(iLocal_392, true), 4, 0.1f, -1f, -1f, iLocal_82 + 100, 100, -1f, 0);
							}
							iLocal_95 = MISC::GET_GAME_TIMER();
							iLocal_94 = 1;
						}
						else if (iLocal_94 == 1)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_112 + 10000)
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_392, 0) < 85f)
								{
									if (iLocal_101 < 25)
									{
										PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Local_61, iLocal_101, &Local_65, 1, 3f, 0f);
										if (__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_65, 65f, 1) && !__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_65, 40f, 1))
										{
											if (!ENTITY::IS_ENTITY_DEAD(iLocal_380, false))
											{
												if (iLocal_168 == 0)
												{
												}
											}
											else if (iLocal_168 == 0)
											{
											}
											iLocal_95 = MISC::GET_GAME_TIMER();
											iLocal_94 = 2;
											iLocal_101 = 1;
										}
										else
										{
											iLocal_101++;
										}
									}
									else
									{
										if (!ENTITY::IS_ENTITY_DEAD(iLocal_380, false))
										{
											if (iLocal_168 == 0)
											{
											}
										}
										else if (iLocal_168 == 0)
										{
										}
										iLocal_95 = MISC::GET_GAME_TIMER();
										iLocal_94 = 2;
										iLocal_101 = 1;
									}
								}
							}
						}
						else if (iLocal_94 == 2)
						{
							iLocal_96 = MISC::GET_GAME_TIMER();
							if ((iLocal_96 > iLocal_95 + 20000 || !__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_392, 85f, 1)) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								iLocal_94 = 0;
							}
						}
						if (MISC::GET_GAME_TIMER() > iLocal_112 + 8000)
						{
							if (iLocal_79 == iLocal_80 + 1 || iLocal_172 == 1)
							{
								iLocal_172 = 1;
								if (!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
								{
									if (iLocal_173 == 0)
									{
										if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
										{
											iLocal_173 = 1;
										}
									}
									if (iLocal_175 == 0)
									{
										if (__LIB_35__::func_536(&uLocal_198, "EPS8AU", "EPS8_HEL3", 7, 0, 0, 0))
										{
											iLocal_175 = 1;
										}
									}
									if (fLocal_44 > 300f)
									{
										fLocal_44 = (fLocal_44 - 0.1f);
									}
									if (fLocal_51 > 28f)
									{
										fLocal_51 = (fLocal_51 - 0.02f);
									}
								}
								if (iLocal_122 == 0)
								{
									if (iLocal_168 == 0)
									{
										if (__LIB_0__::func_121(iLocal_395))
										{
											TASK::TASK_HELI_MISSION(iLocal_379, iLocal_392, iLocal_395, 0, 0f, 0f, 0f, 4, fLocal_51, 50f, -1f, -1, 40, -1f, 0);
										}
										TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_379, fLocal_51);
										iLocal_122++;
									}
								}
								else
								{
									iLocal_122++;
									if (iLocal_122 > 30)
									{
										iLocal_122 = 0;
									}
								}
								if (iLocal_103 > 3)
								{
									if (func_65(iLocal_379))
									{
										iLocal_92 = 0;
										if (iLocal_168 == 1)
										{
											TASK::TASK_HELI_MISSION(iLocal_379, iLocal_392, 0, PLAYER::PLAYER_PED_ID(), Local_61, 9, 200f, 2f, -1f, iLocal_82 + 10, 50, -1f, 0);
											if (iLocal_84 > 0)
											{
												if (!__LIB_0__::func_75())
												{
													if (iLocal_106 == 0)
													{
														if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_HEL2", "EPS8_HEL2_1", 5, 0, 0))
														{
															iLocal_106 = 1;
														}
													}
													else if (iLocal_106 == 1)
													{
														if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_HEL2", "EPS8_HEL2_2", 5, 0, 0))
														{
															iLocal_106 = 2;
														}
													}
												}
											}
										}
										iLocal_168 = 0;
										if (__LIB_1__::func_197(iLocal_380))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_380, joaat("SCRIPT_TASK_COMBAT")) != 1)
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_380, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
												{
													TASK::TASK_COMBAT_PED(iLocal_380, PLAYER::PLAYER_PED_ID(), 0, 16);
												}
											}
										}
									}
									else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
									{
										if (iLocal_92 == 0)
										{
											iLocal_90 = MISC::GET_GAME_TIMER();
											iLocal_92 = 1;
										}
										else if (iLocal_92 == 1)
										{
											iLocal_91 = MISC::GET_GAME_TIMER();
											if (iLocal_91 > iLocal_90 + 4000)
											{
												if (__LIB_1__::func_197(iLocal_380))
												{
													TASK::CLEAR_PED_TASKS(iLocal_380);
												}
												if (iLocal_168 == 0)
												{
													TASK::TASK_HELI_MISSION(iLocal_379, iLocal_392, 0, 0, ENTITY::GET_ENTITY_COORDS(iLocal_392, true), 4, 0.1f, -1f, -1f, -1, 100, -1f, 0);
												}
												iLocal_168 = 1;
											}
											if (!__LIB_0__::func_75())
											{
												if (iLocal_91 > iLocal_90 + 10000)
												{
													if (iLocal_84 == 0)
													{
														if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_CH2", "EPS8_CH2_9", 5, 0, 0))
														{
															iLocal_84 = 1;
														}
													}
												}
												if (iLocal_91 > iLocal_90 + 25000)
												{
													if (iLocal_84 == 1)
													{
														if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_CH2", "EPS8_CH2_10", 5, 0, 0))
														{
															iLocal_84 = 2;
														}
													}
												}
												if (iLocal_91 > (iLocal_90 + 40000))
												{
													if (iLocal_84 == 2)
													{
														if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_CH2", "EPS8_CH2_11", 5, 0, 0))
														{
															RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 1);
															iLocal_84 = 3;
															iLocal_92 = 2;
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
					else
					{
						TASK::TASK_HELI_MISSION(iLocal_379, iLocal_392, 0, 0, (Local_61.f_0 + 600f), (Local_61.f_1 + 600f), (Local_61.f_2 + 100f), 4, 200f, -1f, -1f, -1, 100, -1f, 0);
						ENTITY::SET_ENTITY_COLLISION(iLocal_392, false, false);
						iLocal_181 = 1;
					}
				}
			}
		}
	}
}

void func_291()//Position - 0x2A86B
{
	if (iLocal_151 == 0)
	{
		if (iLocal_148 == 0)
		{
			if (iLocal_376 == 8)
			{
				__LIB_0__::func_523(&iLocal_425);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_395, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_428))
					{
						iLocal_428 = __LIB_10__::func_727(iLocal_395, 1, 5);
						if (iLocal_376 == 3)
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_429))
							{
								__LIB_0__::func_523(&iLocal_429);
								if (iLocal_147 == 0)
								{
									__LIB_0__::func_210("EPS8_06", 7500, 0);
									iLocal_147 = 1;
								}
							}
						}
						else if (iLocal_376 == 4)
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_425))
							{
								__LIB_0__::func_523(&iLocal_425);
								if (iLocal_147 == 0)
								{
									__LIB_0__::func_210("EPS8_06", 7500, 0);
									iLocal_147 = 1;
								}
							}
						}
					}
				}
				else
				{
					if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 17f)
					{
						if (iLocal_145 == 1)
						{
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_395, 5, false);
							iLocal_145 = 0;
						}
					}
					__LIB_0__::func_523(&iLocal_428);
					if (iLocal_376 == 3)
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_429))
						{
							iLocal_429 = __LIB_10__::func_727(iLocal_393[0], 1, 5);
							if (iLocal_166 == 0)
							{
								__LIB_0__::func_210("EPS8_05", 7500, 0);
								iLocal_166 = 1;
							}
						}
					}
					else if (iLocal_376 == 4)
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_425))
						{
							iLocal_425 = HUD::ADD_BLIP_FOR_COORD(Local_56);
						}
					}
				}
			}
		}
		else
		{
			if (iLocal_376 == 8)
			{
				__LIB_0__::func_523(&iLocal_428);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_392, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_392, false))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_425))
					{
						iLocal_425 = HUD::ADD_BLIP_FOR_COORD(Local_56);
					}
				}
				else
				{
					__LIB_0__::func_523(&iLocal_425);
				}
			}
		}
	}
	else
	{
		if (iLocal_376 == 8)
		{
			__LIB_0__::func_523(&iLocal_428);
		}
		if (iLocal_376 == 8)
		{
			__LIB_0__::func_523(&iLocal_425);
		}
	}
}

void func_293()//Position - 0x2AA4F
{
	if (__LIB_0__::func_121(iLocal_392))
	{
		if ((((VEHICLE::GET_HELI_MAIN_ROTOR_HEALTH(iLocal_392) < 200f || VEHICLE::GET_HELI_TAIL_BOOM_HEALTH(iLocal_392) < 200f) || VEHICLE::GET_HELI_TAIL_ROTOR_HEALTH(iLocal_392) < 200f) || ENTITY::GET_ENTITY_HEALTH(iLocal_392) < 200) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_392) < 200f)
		{
			VEHICLE::SET_VEHICLE_OUT_OF_CONTROL(iLocal_392, false, true);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_393[iLocal_78], false))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_393[iLocal_78], false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_381[iLocal_78], false))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_381[iLocal_78], 1, false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_382[iLocal_78], false))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_382[iLocal_78], 1, false);
			}
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_393[iLocal_78], false);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_393[iLocal_78]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_381[iLocal_78]))
	{
		if (!__LIB_1__::func_197(iLocal_381[iLocal_78]))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_422[iLocal_78]))
			{
				__LIB_0__::func_523(&(iLocal_422[iLocal_78]));
				iLocal_80++;
				iLocal_117++;
			}
		}
		else if (!__LIB_0__::func_508(iLocal_381[iLocal_78], PLAYER::PLAYER_PED_ID(), fLocal_42, 1))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_422[iLocal_78]))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_381[iLocal_78]))
				{
					__LIB_0__::func_523(&(iLocal_422[iLocal_78]));
					__LIB_0__::func_0(&(iLocal_381[iLocal_78]));
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_393[iLocal_78]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_393[iLocal_78], false))
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_393[iLocal_78]))
							{
								__LIB_11__::func_32(&(iLocal_393[iLocal_78]));
							}
						}
					}
					iLocal_80++;
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(iLocal_422[iLocal_78]))
		{
			if (iLocal_78 != 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -367.5617f, -107.37016f, 32.44559f, -356.05856f, -74.55742f, 50.42249f, 82.25f, false, true, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_381[iLocal_78], -361.79773f, -108.58455f, 67.12477f, -347.59918f, -65.6332f, 36.46431f, 174.75f, false, true, 0))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_381[iLocal_78], 1, false);
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_381[iLocal_78], joaat("SCRIPT_TASK_COMBAT")) != 1)
						{
							TASK::TASK_COMBAT_PED(iLocal_381[iLocal_78], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
						iLocal_156[iLocal_78] = 1;
					}
					else
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_381[iLocal_78], 1, true);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_393[iLocal_78], false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_381[iLocal_78], joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD")) != 1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_381[iLocal_78], true), Local_66, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_381[iLocal_78], true), Local_67, true))
								{
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_381[iLocal_78], iLocal_393[iLocal_78], Local_66, 50f, 0, ENTITY::GET_ENTITY_MODEL(iLocal_393[iLocal_78]), 786468, 7f, 1f);
								}
								else
								{
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_381[iLocal_78], iLocal_393[iLocal_78], Local_67, 50f, 0, ENTITY::GET_ENTITY_MODEL(iLocal_393[iLocal_78]), 786468, 7f, 1f);
								}
							}
						}
					}
				}
				else
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_381[iLocal_78], 1, true);
					if (iLocal_156[iLocal_78] == 1)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_393[iLocal_78], false))
							{
								if (PED::IS_PED_IN_VEHICLE(iLocal_381[iLocal_78], iLocal_393[iLocal_78], false))
								{
									iLocal_156[iLocal_78] = 0;
								}
								else if (__LIB_1__::func_197(iLocal_381[iLocal_78]))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_381[iLocal_78], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
									{
										TASK::TASK_ENTER_VEHICLE(iLocal_381[iLocal_78], iLocal_393[iLocal_78], 20000, -1, 2f, 1, 0);
									}
								}
							}
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_381[iLocal_78], joaat("SCRIPT_TASK_COMBAT")) != 1)
					{
						TASK::TASK_COMBAT_PED(iLocal_381[iLocal_78], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_393[iLocal_78], false))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_381[iLocal_78], iLocal_393[iLocal_78], false))
					{
					}
				}
			}
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_381[iLocal_78]))
			{
				HUD::SET_BLIP_SCALE(iLocal_422[iLocal_78], fLocal_46);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (iLocal_138[iLocal_78] == 0)
					{
						if (fLocal_71 <= 50f)
						{
							iLocal_138[iLocal_78] = 1;
						}
					}
					else if (fLocal_71 > 50f)
					{
						iLocal_138[iLocal_78] = 0;
					}
				}
			}
			else
			{
				HUD::SET_BLIP_SCALE(iLocal_422[iLocal_78], fLocal_45);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_382[iLocal_78]))
	{
		if (!__LIB_1__::func_197(iLocal_382[iLocal_78]))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_423[iLocal_78]))
			{
				__LIB_0__::func_523(&(iLocal_423[iLocal_78]));
				iLocal_80++;
				iLocal_117++;
			}
		}
		else if (!__LIB_0__::func_508(iLocal_382[iLocal_78], PLAYER::PLAYER_PED_ID(), fLocal_42, 1))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_423[iLocal_78]))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_382[iLocal_78]))
				{
					__LIB_0__::func_523(&(iLocal_423[iLocal_78]));
					__LIB_0__::func_0(&(iLocal_382[iLocal_78]));
					iLocal_80++;
				}
			}
		}
		else
		{
			PED::SET_PED_FIRING_PATTERN(iLocal_382[iLocal_78], joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
		}
	}
	if (iLocal_121 != -1)
	{
		if (!__LIB_1__::func_197(iLocal_378[iLocal_121]))
		{
			iLocal_121 = -1;
			iLocal_182 = 0;
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_378[iLocal_121], joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_378[iLocal_121], joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_378[iLocal_121], iLocal_395, PLAYER::PLAYER_PED_ID(), 8, 40f, 786468, 100f, 30f, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_378[iLocal_78]))
	{
		if (!__LIB_1__::func_197(iLocal_378[iLocal_78]))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_424[iLocal_78]))
			{
				__LIB_0__::func_523(&(iLocal_424[iLocal_78]));
				iLocal_80++;
				iLocal_117++;
			}
		}
		else if (!__LIB_0__::func_508(iLocal_378[iLocal_78], PLAYER::PLAYER_PED_ID(), fLocal_43, 1))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_378[iLocal_78], iLocal_395, false))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_424[iLocal_78]))
				{
					__LIB_0__::func_523(&(iLocal_424[iLocal_78]));
					if (iLocal_121 == iLocal_78)
					{
						iLocal_121 = -1;
						iLocal_182 = 0;
					}
					iLocal_80++;
				}
			}
		}
		else if (iLocal_78 != 5)
		{
			if (iLocal_182 == 0)
			{
				if (iLocal_151 == 0)
				{
					if (__LIB_0__::func_508(iLocal_378[iLocal_78], iLocal_395, 60f, 1))
					{
						if (!__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_395, 30f, 1))
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
							{
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_395, -1, false))
								{
									iLocal_121 = iLocal_78;
									if (iLocal_143 == 1)
									{
										PATHFIND::SET_ROADS_IN_ANGLED_AREA(-397.61807f, -63.27855f, 42.658855f, -345.02185f, -93.33459f, 49.65768f, 24.75f, false, true, true);
									}
									TASK::CLEAR_PED_TASKS(iLocal_378[iLocal_121]);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_378[iLocal_121], true);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_378[iLocal_121], 1, true);
									iLocal_182 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_78 == 1 || iLocal_78 == 4)
	{
		if (!__LIB_1__::func_197(iLocal_383))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_426))
			{
				__LIB_0__::func_523(&iLocal_426);
				__LIB_0__::func_202(&uLocal_198, 2);
				iLocal_80++;
				iLocal_117++;
			}
		}
		else if (!__LIB_0__::func_508(iLocal_383, PLAYER::PLAYER_PED_ID(), fLocal_43, 1))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_426))
			{
				__LIB_0__::func_523(&iLocal_426);
				iLocal_80++;
			}
		}
	}
	if (iLocal_78 == 2 || iLocal_78 == 6)
	{
		if (!__LIB_1__::func_197(iLocal_379))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_427))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_392, false))
				{
					VEHICLE::SET_VEHICLE_OUT_OF_CONTROL(iLocal_392, false, true);
					iLocal_181 = 1;
				}
				iLocal_86 = MISC::GET_GAME_TIMER();
				__LIB_0__::func_202(&uLocal_198, 3);
				__LIB_0__::func_523(&iLocal_427);
				iLocal_80++;
				iLocal_117++;
			}
		}
		else if (!__LIB_0__::func_508(iLocal_379, PLAYER::PLAYER_PED_ID(), fLocal_44, 1) && MISC::GET_GAME_TIMER() > iLocal_112 + 15000)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_427))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_379))
				{
					iLocal_86 = MISC::GET_GAME_TIMER();
					__LIB_0__::func_202(&uLocal_198, 3);
					__LIB_0__::func_523(&iLocal_427);
					__LIB_0__::func_0(&iLocal_379);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_392))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_392, false))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_380, false))
							{
								if (PED::IS_PED_IN_VEHICLE(iLocal_380, iLocal_392, false))
								{
									__LIB_0__::func_0(&iLocal_380);
								}
							}
							if (iLocal_148 == 0)
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
								{
									if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_392, false))
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_392))
										{
											__LIB_11__::func_32(&iLocal_392);
										}
									}
								}
							}
						}
					}
					iLocal_80++;
				}
			}
		}
	}
	iLocal_78++;
	if (iLocal_78 == 7)
	{
		iLocal_78 = 0;
	}
}

void func_295()//Position - 0x2B38F
{
	__LIB_0__::func_523(&iLocal_429);
	__LIB_0__::func_523(&iLocal_430);
	if (__LIB_1__::func_197(iLocal_383))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_426))
		{
			if (__LIB_0__::func_508(iLocal_383, PLAYER::PLAYER_PED_ID(), fLocal_43, 1))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_383, false))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_383, 1, false);
					iLocal_426 = __LIB_10__::func_711(iLocal_383, 1, 0, 3);
					HUD::SET_BLIP_SCALE(iLocal_426, fLocal_45);
					TASK::TASK_COMBAT_PED(iLocal_383, PLAYER::PLAYER_PED_ID(), 0, 16);
					iLocal_79++;
				}
			}
		}
	}
	if (__LIB_1__::func_197(iLocal_381[iLocal_78]))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_422[iLocal_78]))
		{
			if ((PED::IS_PED_IN_COMBAT(iLocal_381[iLocal_78], PLAYER::PLAYER_PED_ID()) || MISC::GET_GAME_TIMER() > iLocal_112 + 20000) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -335.85806f, -97.34045f, 62.208683f, -403.0932f, -76.60052f, 25.804146f, 34f, false, true, 0))
			{
				iLocal_422[iLocal_78] = __LIB_10__::func_711(iLocal_381[iLocal_78], 1, 0, 5);
				HUD::SET_BLIP_SCALE(iLocal_422[iLocal_78], fLocal_46);
				if (iLocal_78 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_393[0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_393[0]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_393[0]);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_393[iLocal_78], false))
				{
					if (iLocal_143 == 1)
					{
						if (iLocal_78 == 0)
						{
							if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_393[iLocal_78]))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_381[iLocal_78], 1, false);
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_382[iLocal_78]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_382[iLocal_78], false))
									{
										if (!PED::IS_PED_INJURED(iLocal_382[iLocal_78]))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_382[iLocal_78], 1, false);
										}
									}
								}
							}
						}
					}
					TASK::TASK_VEHICLE_ESCORT(iLocal_381[iLocal_78], iLocal_393[iLocal_78], PLAYER::PLAYER_PED_ID(), 0, 200f, 786468, -1f, 20, 20f);
				}
				else
				{
					TASK::TASK_COMBAT_PED(iLocal_381[iLocal_78], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				iLocal_79++;
			}
		}
	}
	if (__LIB_1__::func_197(iLocal_382[iLocal_78]))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_423[iLocal_78]))
		{
			if ((PED::IS_PED_IN_COMBAT(iLocal_382[iLocal_78], PLAYER::PLAYER_PED_ID()) || MISC::GET_GAME_TIMER() > iLocal_112 + 20100) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -335.85806f, -97.34045f, 62.208683f, -403.0932f, -76.60052f, 25.804146f, 34f, false, true, 0))
			{
				iLocal_423[iLocal_78] = __LIB_10__::func_711(iLocal_382[iLocal_78], 1, 0, 3);
				HUD::SET_BLIP_SCALE(iLocal_423[iLocal_78], fLocal_45);
				TASK::TASK_COMBAT_PED(iLocal_382[iLocal_78], PLAYER::PLAYER_PED_ID(), 0, 16);
				iLocal_79++;
			}
		}
	}
	if (__LIB_1__::func_197(iLocal_378[iLocal_78]))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_424[iLocal_78]))
		{
			if (PED::IS_PED_IN_COMBAT(iLocal_378[iLocal_78], PLAYER::PLAYER_PED_ID()) || MISC::GET_GAME_TIMER() > iLocal_112 + 50)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_378[iLocal_78], false))
				{
					if (__LIB_0__::func_508(iLocal_378[iLocal_78], PLAYER::PLAYER_PED_ID(), fLocal_43, 1))
					{
						if (iLocal_78 == 5)
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_378[iLocal_78], 1, false);
						}
						iLocal_424[iLocal_78] = __LIB_10__::func_711(iLocal_378[iLocal_78], 1, 0, 3);
						HUD::SET_BLIP_SCALE(iLocal_424[iLocal_78], fLocal_45);
						TASK::TASK_COMBAT_PED(iLocal_378[iLocal_78], PLAYER::PLAYER_PED_ID(), 0, 16);
						iLocal_79++;
					}
				}
			}
		}
	}
	if (iLocal_137 == 0)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_112 + 300)
		{
			if (__LIB_1__::func_183(iLocal_392))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_392))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_392);
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_392, true, true, false);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_379, false))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_427))
					{
						iLocal_427 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_379);
						if (PED::IS_PED_IN_VEHICLE(iLocal_379, iLocal_392, false) && iLocal_148 == 0)
						{
							HUD::SET_BLIP_SCALE(iLocal_427, fLocal_46);
							HUD::SET_BLIP_PRIORITY(iLocal_427, 7);
							HUD::SET_BLIP_SPRITE(iLocal_427, 353);
							HUD::SET_BLIP_COLOUR(iLocal_427, 1);
						}
						else
						{
							HUD::SET_BLIP_SCALE(iLocal_427, fLocal_45);
							HUD::SET_BLIP_PRIORITY(iLocal_427, 3);
							if (__LIB_1__::func_197(iLocal_379))
							{
								if (PED::IS_PED_IN_VEHICLE(iLocal_379, iLocal_392, false))
								{
									TASK::TASK_LEAVE_VEHICLE(iLocal_379, iLocal_392, 0);
								}
							}
							if (__LIB_1__::func_197(iLocal_383))
							{
								if (PED::IS_PED_IN_VEHICLE(iLocal_383, iLocal_392, false))
								{
									TASK::TASK_LEAVE_VEHICLE(iLocal_383, iLocal_392, 0);
								}
							}
							if (__LIB_1__::func_197(iLocal_378[5]))
							{
								if (PED::IS_PED_IN_VEHICLE(iLocal_378[5], iLocal_392, false))
								{
									TASK::TASK_LEAVE_VEHICLE(iLocal_378[5], iLocal_392, 0);
								}
							}
							if (__LIB_1__::func_197(iLocal_380))
							{
								if (PED::IS_PED_IN_VEHICLE(iLocal_380, iLocal_392, false))
								{
									TASK::TASK_LEAVE_VEHICLE(iLocal_380, iLocal_392, 0);
								}
							}
						}
						iLocal_79++;
					}
				}
				if (__LIB_1__::func_197(iLocal_380))
				{
					TASK::TASK_COMBAT_PED(iLocal_380, PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
			iLocal_137 = 1;
		}
	}
	iLocal_78++;
	if (iLocal_78 == 7)
	{
		iLocal_78 = 0;
	}
}

void func_301()//Position - 0x2B9B1
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("EPSILONISM_08_COMPLIANCE"))
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("EPSILONISM_08_NON_COMPLIANCE"))
		{
			if (__LIB_0__::func_121(iLocal_393[0]))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_393[0], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0f);
			}
			if (__LIB_0__::func_121(iLocal_393[1]))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_393[1], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0f);
			}
			if (__LIB_0__::func_121(iLocal_393[2]))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_393[2], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0f);
			}
			if (__LIB_0__::func_121(iLocal_393[3]))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_393[3], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0f);
			}
			if (__LIB_0__::func_121(iLocal_393[4]))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_393[4], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0f);
			}
			if (__LIB_0__::func_121(iLocal_393[5]))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_393[5], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0f);
			}
			if (__LIB_0__::func_121(iLocal_393[6]))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_393[6], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0f);
			}
			if (__LIB_0__::func_121(iLocal_392))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_392, "EPSILONISM_08_NON_COMPLIANCE_HELI", 0f);
			}
			AUDIO::START_AUDIO_SCENE("EPSILONISM_08_NON_COMPLIANCE");
		}
	}
	else
	{
		AUDIO::STOP_AUDIO_SCENE("EPSILONISM_08_COMPLIANCE");
	}
}

void func_302()//Position - 0x2BABF
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EPSILONISM_08_COMPLIANCE"))
	{
		AUDIO::STOP_AUDIO_SCENE("EPSILONISM_08_COMPLIANCE");
	}
}

void func_303()//Position - 0x2BADA
{
	func_311();
	func_309();
	func_306();
	func_305();
	if (iLocal_177 == 0)
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
		{
			iLocal_430 = __LIB_10__::func_711(iLocal_383, 1, 1, 5);
			HUD::SET_BLIP_SCALE(iLocal_430, fLocal_45);
			iLocal_177 = 1;
		}
	}
	if (iLocal_146 == 0)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_115 + 6500)
		{
			if (__LIB_1__::func_197(iLocal_378[5]))
			{
				func_304();
			}
		}
	}
	if (iLocal_146 == 1)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_114 + 10000 || PED::IS_PED_IN_VEHICLE(iLocal_378[5], iLocal_392, false))
		{
			iLocal_134 = 1;
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_383, false))
	{
		__LIB_0__::func_523(&iLocal_430);
	}
}

void func_304()//Position - 0x2BB87
{
	int iVar0;
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(PLAYER::PLAYER_PED_ID());
	}
	if ((__LIB_1__::func_197(iLocal_378[5]) && __LIB_0__::func_121(iLocal_395)) && __LIB_0__::func_121(iLocal_392))
	{
		switch (iLocal_195)
		{
			case 0:
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				if (__LIB_0__::func_121(iLocal_395))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_395, 0f, -3.2f, 0f), 1f, -1, 0.4f, 1024, 140.8925f);
				}
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_GUARD_STAND", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_378[5], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				iLocal_195 = 5;
				break;
			case 1:
				if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -371.39963f, -88.47154f, 44.65829f, -378.7455f, -85.82195f, 48.21037f, 5.75f, false, true, 0) && CAM::IS_SPHERE_VISIBLE(-378.46f, -88.44f, 45.66f, 2f)) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_395)) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_383, 120f))
				{
					iLocal_131 = PED::CREATE_SYNCHRONIZED_SCENE(-356.91f, -89.03f, 45.875f, 0f, 0f, -120f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_378[5], iLocal_131, "rcmepsilonism8", "grab_all_4_bags_carrier", 4f, -2f, 0, 0, 1000f, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_395, iLocal_131, "grab_all_4_bags_car", "rcmepsilonism8", 1000f, -1.5f, 0, 1000f);
					iLocal_195 = 2;
					ENTITY::DETACH_ENTITY(iLocal_384[0], true, true);
					ENTITY::DETACH_ENTITY(iLocal_384[1], true, true);
					ENTITY::DETACH_ENTITY(iLocal_384[2], true, true);
					ENTITY::DETACH_ENTITY(iLocal_384[3], true, true);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_384[0], iLocal_131, "base_bag_1", "rcmepsilonism8", 1000f, -1000f, 0, 1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_384[1], iLocal_131, "base_bag_2", "rcmepsilonism8", 1000f, -1000f, 0, 1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_384[2], iLocal_131, "base_bag_3", "rcmepsilonism8", 1000f, -1000f, 0, 1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_384[3], iLocal_131, "base_bag_4", "rcmepsilonism8", 1000f, -1000f, 0, 1000f);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_131, 0.098f);
				}
				break;
			case 2:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_131))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_131) >= 0.126f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_131) < 0.237f)
					{
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_384[0], iLocal_378[5]))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_384[0], iLocal_378[5], PED::GET_PED_BONE_INDEX(iLocal_378[5], 28422), 0.25f, 0.075f, -0.3f, 50f, 50f, -135f, false, false, false, false, 2, true, 0);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_384[0], false);
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_384[0]))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_131) >= 0.237f)
						{
							ENTITY::DETACH_ENTITY(iLocal_384[0], true, true);
							OBJECT::DELETE_OBJECT(&(iLocal_384[0]));
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_131) >= 0.347f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_131) < 0.455f)
					{
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_384[1], iLocal_378[5]))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_384[1], iLocal_378[5], PED::GET_PED_BONE_INDEX(iLocal_378[5], 28422), 0.25f, 0.075f, -0.3f, 50f, 50f, -135f, false, false, false, false, 2, true, 0);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_384[1], false);
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_384[1]))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_131) >= 0.455f)
						{
							ENTITY::DETACH_ENTITY(iLocal_384[1], true, true);
							OBJECT::DELETE_OBJECT(&(iLocal_384[1]));
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_131) >= 0.563f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_131) < 0.678f)
					{
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_384[2], iLocal_378[5]))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_384[2], iLocal_378[5], PED::GET_PED_BONE_INDEX(iLocal_378[5], 28422), 0.25f, 0.075f, -0.3f, 50f, 50f, -135f, false, false, false, false, 2, true, 0);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_384[2], false);
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_384[2]))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_131) >= 0.678f)
						{
							ENTITY::DETACH_ENTITY(iLocal_384[2], true, true);
							OBJECT::DELETE_OBJECT(&(iLocal_384[2]));
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_131) >= 0.789f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_131) < 0.901f)
					{
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_384[3], iLocal_378[5]))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_384[3], iLocal_378[5], PED::GET_PED_BONE_INDEX(iLocal_378[5], 28422), 0.25f, 0.075f, -0.3f, 50f, 50f, -135f, false, false, false, false, 2, true, 0);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_384[3], false);
							iLocal_151 = 1;
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_384[3]))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_131) >= 0.901f)
						{
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_131) >= 0.903f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_384[3]))
						{
							ENTITY::DETACH_ENTITY(iLocal_384[3], true, true);
							OBJECT::DELETE_OBJECT(&(iLocal_384[3]));
						}
						TASK::CLEAR_PED_TASKS(iLocal_378[5]);
						PED::SET_PED_KEEP_TASK(iLocal_378[5], true);
						TASK::TASK_ENTER_VEHICLE(iLocal_378[5], iLocal_392, 20000, 1, 1f, 1, 0);
						iLocal_114 = MISC::GET_GAME_TIMER();
						iLocal_146 = 1;
						iLocal_195 = 5;
					}
				}
				break;
			case 3:
				if ((__LIB_0__::func_530(iLocal_378[5], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_392, -1.5f, 0f, 0f), 0.5f, 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_378[5], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_378[5], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
				{
					TASK::STOP_ANIM_TASK(iLocal_378[5], "rcmepsilonism8", "bag_handler_walk", -8f);
					TASK::TASK_PLAY_ANIM(iLocal_378[5], "rcmepsilonism8", "bag_handler_load_walk_away_left", 8f, -8f, -1, 639044, 0f, false, false, false);
					iLocal_195 = 4;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_378[5], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_378[5], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_378[5], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_392, -1.5f, 0f, 0f), 1f, -1, 0.4f, 0, (ENTITY::GET_ENTITY_HEADING(iLocal_392) - 90f));
				}
				break;
			case 4:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_378[5], "rcmepsilonism8", "bag_handler_load_walk_away_left", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_378[5], "rcmepsilonism8", "bag_handler_load_walk_away_left") > 0.5f)
				{
					ENTITY::DETACH_ENTITY(iLocal_384[iLocal_126], true, true);
				}
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_378[5], "rcmepsilonism8", "bag_handler_load_walk_away_left", 3) || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_378[5], "rcmepsilonism8", "bag_handler_load_walk_away_left") > 0.8f)
				{
					__LIB_0__::func_123(&(iLocal_384[iLocal_126]));
					PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_378[5], 1, -1000f);
					PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_378[5], 0, -1000f);
					iLocal_126++;
					if (iLocal_126 == iLocal_48)
					{
						TASK::CLEAR_PED_TASKS(iLocal_378[5]);
						PED::SET_PED_KEEP_TASK(iLocal_378[5], true);
						TASK::TASK_ENTER_VEHICLE(iLocal_378[5], iLocal_392, 20000, 1, 1f, 1, 0);
						iLocal_114 = MISC::GET_GAME_TIMER();
						iLocal_146 = 1;
						iLocal_195 = 5;
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_378[5], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_395, 0f, -3.2f, 0f), 1f, -1, 0.3f, 0, ENTITY::GET_ENTITY_HEADING(iLocal_395));
						iLocal_195 = 1;
					}
				}
				break;
			case 5:
				break;
			}
	}
}

void func_305()//Position - 0x2C35A
{
	if (iLocal_170 == 1)
	{
		if (__LIB_1__::func_197(iLocal_383))
		{
			if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_383, 90f) || __LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_383, 50f, 1))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
		}
	}
}

void func_306()//Position - 0x2C3A6
{
	float fVar0;
	var uVar1;
	struct<6> Var2;
	struct<6> Var3;
	if (iLocal_151 == 0)
	{
		if (iLocal_120 == 0)
		{
			Local_64 = { ENTITY::GET_ENTITY_COORDS(iLocal_395, true) };
			if (((Local_64.f_0 < (Local_63.f_0 - 0.3f) || Local_64.f_0 > (Local_63.f_0 + 0.3f)) || Local_64.f_1 < (Local_63.f_1 - 0.3f)) || Local_64.f_1 > (Local_63.f_1 + 0.3f))
			{
				iLocal_120 = 1;
				iLocal_118 = MISC::GET_GAME_TIMER();
			}
		}
		if (iLocal_120 == 1)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_118 + 3500 && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395))
			{
				iLocal_133 = 1;
			}
		}
	}
	if (__LIB_1__::func_197(iLocal_383) && __LIB_1__::func_183(iLocal_396))
	{
		if (__LIB_0__::func_508(iLocal_383, iLocal_396, 15f, 1))
		{
			if (!PED::IS_PED_HEADTRACKING_ENTITY(iLocal_383, iLocal_396))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_383, iLocal_396, -1, 0, 2);
			}
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
		{
			if (__LIB_0__::func_508(iLocal_383, iLocal_396, 5f, 1))
			{
				if (iLocal_155 == 0)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_383, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_383, false);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_434);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_396, 0);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_PLAY_ANIM(0, "rcmepsilonism8", "worship_enter", 2f, -2f, -1, 786432, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "rcmepsilonism8", "worship_base", 2f, -2f, -1, 786432, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "rcmepsilonism8", "worship_idle_a", 2f, -2f, -1, 786432, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "rcmepsilonism8", "worship_base", 2f, -2f, -1, 786433, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_434);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_383, iLocal_434);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_434);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 1);
						iLocal_155 = 1;
					}
				}
				iLocal_153 = 1;
				if (iLocal_149 == 1)
				{
					if (iLocal_174 == 0)
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_35__::func_536(&uLocal_198, "EPS8AU", "EPS8_PRAY", 7, 0, 0, 0))
							{
								iLocal_170 = 0;
								iLocal_174 = 1;
								iLocal_111 = MISC::GET_GAME_TIMER();
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_396, 10000, 0, 2);
							}
						}
					}
				}
			}
			if (iLocal_153 == 0)
			{
				if (__LIB_0__::func_508(iLocal_383, PLAYER::PLAYER_PED_ID(), 9f, 1))
				{
					if ((!__LIB_0__::func_405("EPS8_16", 0, 0) && !__LIB_0__::func_405("EPS8_11", 0, 0)) && !__LIB_0__::func_508(iLocal_383, iLocal_392, 8f, 1))
					{
						if (!__LIB_0__::func_75())
						{
							if (iLocal_110 == 0)
							{
								if (__LIB_35__::func_536(&uLocal_198, "EPS8AU", "EPS8_E1", 7, 0, 0, 0))
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 1);
									iLocal_110 = 3;
								}
							}
						}
					}
				}
				if (iLocal_191 == 0)
				{
					if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_383, "rcmepsilonism8", "jump_off_heli", 3) && ENTITY::FIND_ANIM_EVENT_PHASE("rcmepsilonism8", "jump_off_heli", "WalkInterruptible", &fVar0, &uVar1)) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_383, "rcmepsilonism8", "jump_off_heli") >= fVar0)
					{
						if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_383))
						{
							PED::FORCE_PED_MOTION_STATE(iLocal_383, joaat("MotionState_Walk"), false, 0, false);
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_383, 1f);
							TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_383, -377.228f, -87.0252f, 44.6583f, 1f, 20000, 40000f, 0.5f);
							iLocal_191 = 1;
							iLocal_132 = MISC::GET_GAME_TIMER();
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_383, "rcmepsilonism8", "jump_off_heli", 3))
					{
						if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_383))
						{
							PED::FORCE_PED_MOTION_STATE(iLocal_383, joaat("MotionState_Walk"), false, 0, false);
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_383, 1f);
							TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_383, -377.228f, -87.0252f, 44.6583f, 1f, 20000, 40000f, 0.5f);
							iLocal_191 = 1;
							iLocal_132 = MISC::GET_GAME_TIMER();
						}
					}
				}
				if (iLocal_191 && MISC::GET_GAME_TIMER() > iLocal_132 + 2000)
				{
					if (__LIB_0__::func_508(iLocal_383, PLAYER::PLAYER_PED_ID(), 6f, 1))
					{
						if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_383))
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_383, "Eps8EPED", 0, 8, -1);
						}
					}
					if (__LIB_0__::func_508(iLocal_383, PLAYER::PLAYER_PED_ID(), 9f, 1) && !__LIB_0__::func_508(iLocal_383, PLAYER::PLAYER_PED_ID(), 6f, 1))
					{
						if (!PED::IS_PED_HEADTRACKING_PED(iLocal_383, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_383, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_383, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1)
						{
							if (!PED::IS_PED_FACING_PED(iLocal_383, PLAYER::PLAYER_PED_ID(), 20f))
							{
								Var2 = { __LIB_0__::func_390() };
								if (!MISC::ARE_STRINGS_EQUAL(&Var2, "EPS8_E1"))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_383, PLAYER::PLAYER_PED_ID(), 0);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_383, joaat("SCRIPT_TASK_ANY")) == 1)
							{
								TASK::CLEAR_PED_TASKS(iLocal_383);
							}
						}
					}
					if (!__LIB_0__::func_508(iLocal_383, PLAYER::PLAYER_PED_ID(), 9f, 1))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_383, joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1)
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_383, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_GO_TO_ENTITY(iLocal_383, PLAYER::PLAYER_PED_ID(), 20000, 6.1f, 1f, 2f, 0);
						}
					}
				}
			}
		}
		else if (iLocal_151 == 0 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
		{
			Var3 = { __LIB_0__::func_390() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var3))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var3, "EPS8_E1"))
				{
					__LIB_0__::func_296();
				}
			}
			if (iLocal_99 == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_383, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				if (__LIB_0__::func_508(iLocal_383, iLocal_395, 7f, 1))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_383, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1)
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_383, PLAYER::PLAYER_PED_ID(), -1);
					}
					if (!__LIB_0__::func_405("EPS8_16", 0, 0) && !__LIB_0__::func_405("EPS8_11", 0, 0))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_SEC", "EPS8_SEC_1", 7, 0, 0))
							{
								iLocal_99 = 1;
								iLocal_98 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_383, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_383, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_395, 0f, 2.5f, 0f), 2f, 20000, 4.5f, 0, 40000f);
				}
			}
			else if (iLocal_99 == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_383, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_383, PLAYER::PLAYER_PED_ID(), -1);
				}
				if (__LIB_1__::func_197(iLocal_378[5]))
				{
					if (MISC::GET_GAME_TIMER() > iLocal_98 + 300)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_378[5], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1)
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_378[5], PLAYER::PLAYER_PED_ID(), -1);
						}
					}
				}
				if (MISC::GET_GAME_TIMER() > iLocal_98 + 6000)
				{
					if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_SEC", "EPS8_SEC_2", 7, 0, 0))
					{
						iLocal_99 = 2;
						iLocal_98 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (iLocal_99 == 2)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_383, joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1)
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_383, joaat("WEAPON_COMBATPISTOL"), -1, true, true);
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iLocal_383, joaat("WEAPON_COMBATPISTOL"), joaat("COMPONENT_AT_PI_FLSH"));
					TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_383, PLAYER::PLAYER_PED_ID(), -1, false);
				}
				if (MISC::GET_GAME_TIMER() > iLocal_98 + 10000)
				{
					iLocal_99 = 3;
					iLocal_98 = MISC::GET_GAME_TIMER();
				}
			}
			else if (iLocal_99 == 3)
			{
				if (!PED::IS_PED_IN_COMBAT(iLocal_383, PLAYER::PLAYER_PED_ID()))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_383, joaat("SCRIPT_TASK_COMBAT")) != 1)
					{
						TASK::TASK_COMBAT_PED(iLocal_383, PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
			}
		}
	}
}

void func_309()//Position - 0x2CAD9
{
	bool bVar0;
	bVar0 = false;
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -358.0764f, -88.2705f, 44.5901f, true) > MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_381[0], true), -358.0764f, -88.2705f, 44.5901f, true))
	{
		fLocal_74 = (40f - __LIB_0__::func_76(iLocal_381[0], iLocal_395, 1));
		if (fLocal_74 > 0f)
		{
			fLocal_74 = (fLocal_74 / 2.5f);
		}
		else
		{
			fLocal_74 = 1E-06f;
		}
		if (fLocal_74 < 4f)
		{
			fLocal_74 = 1E-06f;
		}
		if (fLocal_74 > 8f)
		{
			fLocal_74 = -1f;
		}
		if (fLocal_74 < 3f)
		{
			bVar0 = true;
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_392))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_392) < 47043.75f)
			{
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_392, 1.25f);
			}
		}
	}
	else
	{
		fLocal_74 = -1f;
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_392))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_392) < 47043.75f)
			{
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_392, 1.5f);
			}
		}
	}
	if (__LIB_1__::func_197(iLocal_381[0]))
	{
		if (__LIB_1__::func_183(iLocal_393[0]))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_381[0], iLocal_393[0]))
			{
				if (fLocal_74 != -1f)
				{
					if (bVar0)
					{
						VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(iLocal_393[0], true);
					}
					else
					{
						VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(iLocal_393[0], false);
					}
				}
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
				{
					if ((iLocal_376 == 3 || iLocal_376 == 4) || iLocal_376 == 5)
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_393[0]))
						{
							TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(iLocal_393[0]);
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_381[0], -345.6437f, -85.666794f, 53.658215f, -378.4535f, -73.82299f, 43.158215f, 18.25f, false, true, 0))
					{
						if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_393[0]) || !iLocal_193)
						{
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_381[0], iLocal_393[0], "Eps8LS01", 786599, 0, 8, -1, fLocal_74, false, 2f);
							iLocal_193 = 1;
						}
						else
						{
							func_310();
						}
					}
					else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_393[0]))
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_381[0], iLocal_393[0], "Eps8LS01", 786468, 0, 8, -1, fLocal_74, false, 2f);
					}
					else
					{
						func_310();
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_381[0], -345.6437f, -85.666794f, 53.658215f, -378.4535f, -73.82299f, 43.158215f, 18.25f, false, true, 0))
				{
					if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_393[0]) || !iLocal_193)
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_381[0], iLocal_393[0], "Eps8LS01", 786599, 0, 8, -1, fLocal_74, false, 2f);
						iLocal_193 = 1;
					}
					else
					{
						func_310();
					}
				}
				else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_393[0]))
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_381[0], iLocal_393[0], "Eps8LS01", 786468, 0, 8, -1, fLocal_74, false, 2f);
				}
				else
				{
					func_310();
				}
			}
		}
	}
	VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_393[0], 0, false);
	VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_393[0], 1, false);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_381[0], -673.6242f, 46.50732f, 45.42094f, -657.8456f, 45.623535f, 35.89909f, 7f, false, true, 0))
	{
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_393[0], 0, true);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_381[0], -659.36975f, 21.066603f, 45.169373f, -641.96875f, -12.16242f, 35.58978f, 14f, false, true, 0))
	{
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_393[0], 1, true);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_381[0], -429.66098f, -7.262719f, 52.317867f, -394.00827f, -12.029229f, 41.923225f, 14f, false, true, 0))
	{
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_393[0], 0, true);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_381[0], -405.98642f, -54.69353f, 51.030403f, -397.14615f, -36.447598f, 41.663853f, 14f, false, true, 0))
	{
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_393[0], 1, true);
	}
}

void func_310()//Position - 0x2CEE6
{
	if (fLocal_74 == -1f)
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iLocal_393[0]);
	}
	else if (ENTITY::GET_ENTITY_SPEED(iLocal_393[0]) > fLocal_74)
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_393[0], fLocal_74);
	}
	else
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iLocal_393[0]);
	}
}

void func_311()//Position - 0x2CF2B
{
	struct<6> Var0;
	struct<6> Var1;
	if (__LIB_1__::func_183(iLocal_395))
	{
		VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(iLocal_395, true);
	}
	if (__LIB_1__::func_183(iLocal_393[0]))
	{
		if (iLocal_154 == 0)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_113 + 5000 || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_393[0], -664.4363f, 53.475925f, 31.860622f, -727.77295f, 24.45449f, 46.731674f, 22.5f, false, true, 0))
			{
				iLocal_154 = 1;
			}
		}
		VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(iLocal_393[0], true);
		if (iLocal_376 == 3 || iLocal_376 == 4)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_116 + 4000)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_393[0], PLAYER::PLAYER_PED_ID(), true))
				{
					if (iLocal_97 < 2)
					{
						iLocal_97++;
						iLocal_116 = MISC::GET_GAME_TIMER();
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_393[0]);
					}
					else
					{
						Var0 = { __LIB_9__::func_980() };
						if (!MISC::ARE_STRINGS_EQUAL(&Var0, "EPS8_LS_13"))
						{
							iLocal_97++;
							iLocal_116 = MISC::GET_GAME_TIMER();
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_393[0]);
						}
						else
						{
							iLocal_97 = 2;
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_393[0]);
						}
					}
				}
			}
			if (iLocal_97 > 2)
			{
				Var1 = { __LIB_9__::func_980() };
				if (!MISC::ARE_STRINGS_EQUAL(&Var1, "EPS8_LS_13"))
				{
					iLocal_133 = 1;
				}
			}
		}
	}
	if (__LIB_1__::func_183(iLocal_393[2]))
	{
		VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(iLocal_393[2], true);
	}
	if (__LIB_1__::func_183(iLocal_393[3]))
	{
		VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(iLocal_393[3], true);
	}
	if (__LIB_1__::func_197(iLocal_381[0]))
	{
		if (!__LIB_0__::func_508(iLocal_395, iLocal_381[0], 50f, 1))
		{
			if (iLocal_143 == 0)
			{
				iLocal_133 = 1;
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -366.35416f, -107.60035f, 31.931767f, -355.05807f, -74.91284f, 55.84066f, 85.25f, false, true, 0))
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_STICKYBOMB") || WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_PETROLCAN"))
			{
				iLocal_133 = 1;
			}
		}
	}
	if (iLocal_143 == 0)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -366.35416f, -107.60035f, 31.931767f, -355.05807f, -74.91284f, 55.84066f, 85.25f, false, true, 0))
		{
			iLocal_143 = 1;
		}
	}
	else if (iLocal_376 == 7)
	{
		if ((__LIB_1__::func_183(iLocal_396) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -383.15576f, -102.74419f, 37.430794f, -371.11832f, -109.46186f, 40.429165f, 13f, false, true, 0)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_1__::func_197(iLocal_383))
			{
				if (iLocal_153 == 1)
				{
					if (iLocal_155 == 1)
					{
						if ((((TASK::GET_SCRIPT_TASK_STATUS(iLocal_383, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1 && iLocal_174 == 1) && MISC::GET_GAME_TIMER() > iLocal_111 + 3200) && !PED::IS_PED_RAGDOLL(iLocal_383)) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_383, PLAYER::PLAYER_PED_ID(), true))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_383, "rcmepsilonism8", "worship_base", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_383, "rcmepsilonism8", "worship_idle_a", 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_383, "rcmepsilonism8", "worship_exit", 2f, -2f, -1, 819200, 0f, false, false, false);
								iLocal_134 = 1;
							}
						}
					}
				}
				else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_396, true))
				{
					if (iLocal_119 == 0)
					{
						iLocal_134 = 1;
					}
				}
			}
			iLocal_149 = 1;
		}
		if (iLocal_119 == 0)
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -430.65942f, -63.76026f, 99.82037f, -257.63553f, -120.51712f, 37.3026f, 170.5f, false, true, 0))
			{
				iLocal_149 = 0;
				iLocal_134 = 1;
			}
		}
	}
	if (iLocal_143 == 1)
	{
		if (iLocal_119 == 0)
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -366.35416f, -107.60035f, 31.931767f, -355.05807f, -74.91284f, 55.84066f, 85.25f, false, true, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
				{
					if (iLocal_149 == 0)
					{
						iLocal_118 = MISC::GET_GAME_TIMER();
						iLocal_119 = 1;
					}
				}
			}
		}
		if (iLocal_119 == 1)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_118 + 1500)
			{
				iLocal_133 = 1;
			}
		}
	}
	if (__LIB_1__::func_183(iLocal_392))
	{
		if (__LIB_1__::func_197(iLocal_378[5]))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_378[5], iLocal_392, false))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_378[5], true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_378[5], 3, false);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_378[5], false);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_378[5], 3, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_378[5], 1, false);
			}
		}
		if (__LIB_1__::func_197(iLocal_379))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_379, iLocal_392, false))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_379, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_379, 3, false);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_379, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_379, 3, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_379, 1, false);
			}
		}
		if (__LIB_1__::func_197(iLocal_383))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_383, iLocal_392, false))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_383, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_383, 3, false);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_383, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_383, 3, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_383, 1, false);
			}
		}
		if (__LIB_1__::func_197(iLocal_380))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_380, iLocal_392, false))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_380, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_380, 3, false);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_380, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_380, 3, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_380, 1, false);
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_392))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_392) >= 47043.75f)
			{
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_392, 0f);
			}
		}
	}
	if (__LIB_1__::func_197(iLocal_381[3]))
	{
		if (__LIB_1__::func_183(iLocal_393[3]))
		{
			if (__LIB_1__::func_183(iLocal_395))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_381[3], -403.493f, -39.7956f, 45.1741f, 8f, 8f, 8f, false, true, 0))
				{
					iLocal_171 = 0;
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_393[3]))
					{
						TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(iLocal_393[3]);
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_381[3], joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1)
					{
						TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_381[3], iLocal_393[3], 24, -1);
					}
				}
				else
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -658.9627f, 46.1624f, 40.1914f, 4f, 4f, 5f, false, true, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
						{
							if (iLocal_171 == 0)
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_381[3], iLocal_393[3], "Eps8LS01", 786468, 18, 0, -1, 40f, false, 2f);
								iLocal_171 = 1;
							}
						}
					}
					if (iLocal_171 == 1)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_381[3], -431.30997f, -13.288644f, 44.087696f, -391.90045f, -16.811705f, 49.912033f, 33.75f, false, true, 0))
							{
								if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_393[3]))
								{
									TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_381[3], iLocal_393[3], "Eps8LS01", 786469, 18, 8, -1, 40f, false, 2f);
								}
							}
							else if (!__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_381[3], 30f, 1))
							{
								if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_393[3]))
								{
									TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_381[3], iLocal_393[3], "Eps8LS01", 786468, 18, 8, -1, 40f, false, 2f);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_381[3], joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
							{
								TASK::TASK_VEHICLE_FOLLOW(iLocal_381[3], iLocal_393[3], iLocal_395, 40f, 262144, 10);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_381[3], joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
						{
							TASK::TASK_VEHICLE_FOLLOW(iLocal_381[3], iLocal_393[3], iLocal_395, 40f, 262144, 10);
						}
					}
				}
			}
		}
	}
	if (__LIB_1__::func_197(iLocal_381[iLocal_78]))
	{
		if (PED::IS_PED_IN_COMBAT(iLocal_381[iLocal_78], PLAYER::PLAYER_PED_ID()))
		{
			iLocal_133 = 1;
		}
	}
	if (__LIB_1__::func_197(iLocal_382[iLocal_78]))
	{
		if (PED::IS_PED_IN_COMBAT(iLocal_382[iLocal_78], PLAYER::PLAYER_PED_ID()))
		{
			iLocal_133 = 1;
		}
	}
	if (__LIB_1__::func_197(iLocal_378[iLocal_78]))
	{
		if (PED::IS_PED_IN_COMBAT(iLocal_378[iLocal_78], PLAYER::PLAYER_PED_ID()))
		{
			iLocal_133 = 1;
		}
		else if (iLocal_376 == 7)
		{
			if (PED::IS_PED_RAGDOLL(iLocal_378[iLocal_78]))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_378[iLocal_78], -381.89594f, -98.08368f, 37.74649f, -378.51218f, -88.64344f, 46.518566f, 2.4f, false, true, 0))
				{
					iLocal_133 = 1;
				}
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (iLocal_78 == 5)
				{
					if (iLocal_139 == 0)
					{
						if (__LIB_0__::func_508(iLocal_378[5], PLAYER::PLAYER_PED_ID(), 4.5f, 1))
						{
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iLocal_378[5], "EPS8_ANAA", "EPSGUARD2", "SPEECH_PARAMS_FORCE", false);
							iLocal_139 = 1;
						}
					}
				}
				if (iLocal_78 == 3)
				{
					if (iLocal_140 == 0)
					{
						if (__LIB_0__::func_508(iLocal_378[3], PLAYER::PLAYER_PED_ID(), 5f, 1))
						{
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iLocal_378[3], "EPS8_AOAA", "EPSGUARD7", "SPEECH_PARAMS_FORCE", false);
							TASK::TASK_PLAY_ANIM(iLocal_378[3], "rcmepsilonism8", "security_greet", 2f, -2f, -1, 32, 0.2f, true, false, false);
							iLocal_140 = 1;
						}
					}
				}
				if (iLocal_78 == 4)
				{
					if (iLocal_141 == 0)
					{
						if (__LIB_0__::func_508(iLocal_378[4], PLAYER::PLAYER_PED_ID(), 5f, 1))
						{
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iLocal_378[4], "EPS8_APAA", "EPSGUARD8", "SPEECH_PARAMS_FORCE", false);
							TASK::TASK_PLAY_ANIM(iLocal_378[4], "rcmepsilonism8", "security_greet", 2f, -2f, -1, 32, 0.2f, true, false, false);
							iLocal_141 = 1;
						}
					}
				}
			}
		}
	}
	if (__LIB_1__::func_197(iLocal_379))
	{
		if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_379) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_379))
		{
			if (PED::IS_PED_FACING_PED(iLocal_379, PLAYER::PLAYER_PED_ID(), 90f))
			{
				iLocal_133 = 1;
			}
		}
		if (PED::IS_PED_IN_COMBAT(iLocal_379, PLAYER::PLAYER_PED_ID()))
		{
			iLocal_133 = 1;
		}
	}
	if (__LIB_1__::func_197(iLocal_380))
	{
		if (PED::IS_PED_IN_COMBAT(iLocal_380, PLAYER::PLAYER_PED_ID()))
		{
			iLocal_133 = 1;
		}
	}
	if (__LIB_1__::func_197(iLocal_383))
	{
		if (PED::IS_PED_IN_COMBAT(iLocal_383, PLAYER::PLAYER_PED_ID()))
		{
			iLocal_133 = 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_383, PLAYER::PLAYER_PED_ID(), true))
		{
			iLocal_133 = 1;
		}
		if (PED::IS_PED_RAGDOLL(iLocal_383))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_383, -381.89594f, -98.08368f, 37.74649f, -378.51218f, -88.64344f, 46.518566f, 2.4f, false, true, 0))
			{
				iLocal_133 = 1;
			}
		}
	}
	else
	{
		if (__LIB_1__::func_197(iLocal_378[0]))
		{
			if (__LIB_0__::func_508(iLocal_378[0], PLAYER::PLAYER_PED_ID(), 100f, 1))
			{
				iLocal_424[0] = __LIB_10__::func_711(iLocal_378[0], 1, 0, 3);
				HUD::SET_BLIP_SCALE(iLocal_424[0], fLocal_45);
				TASK::TASK_COMBAT_PED(iLocal_378[0], PLAYER::PLAYER_PED_ID(), 0, 16);
				iLocal_79++;
			}
		}
		if (__LIB_1__::func_197(iLocal_378[2]))
		{
			if (__LIB_0__::func_508(iLocal_378[2], PLAYER::PLAYER_PED_ID(), 100f, 1))
			{
				iLocal_424[2] = __LIB_10__::func_711(iLocal_378[2], 1, 0, 3);
				HUD::SET_BLIP_SCALE(iLocal_424[2], fLocal_45);
				TASK::TASK_COMBAT_PED(iLocal_378[2], PLAYER::PLAYER_PED_ID(), 0, 16);
				iLocal_79++;
			}
		}
		if (__LIB_1__::func_197(iLocal_378[3]))
		{
			if (__LIB_0__::func_508(iLocal_378[3], PLAYER::PLAYER_PED_ID(), 100f, 1))
			{
				iLocal_424[3] = __LIB_10__::func_711(iLocal_378[3], 1, 0, 3);
				HUD::SET_BLIP_SCALE(iLocal_424[3], fLocal_45);
				TASK::TASK_COMBAT_PED(iLocal_378[3], PLAYER::PLAYER_PED_ID(), 0, 16);
				iLocal_79++;
			}
		}
		if (__LIB_1__::func_197(iLocal_378[4]))
		{
			if (__LIB_0__::func_508(iLocal_378[4], PLAYER::PLAYER_PED_ID(), 100f, 1))
			{
				iLocal_424[4] = __LIB_10__::func_711(iLocal_378[4], 1, 0, 3);
				HUD::SET_BLIP_SCALE(iLocal_424[4], fLocal_45);
				TASK::TASK_COMBAT_PED(iLocal_378[4], PLAYER::PLAYER_PED_ID(), 0, 16);
				iLocal_79++;
			}
		}
		if (__LIB_1__::func_197(iLocal_378[5]))
		{
			if (__LIB_0__::func_508(iLocal_378[5], PLAYER::PLAYER_PED_ID(), 100f, 1))
			{
				iLocal_424[5] = __LIB_10__::func_711(iLocal_378[5], 1, 0, 3);
				HUD::SET_BLIP_SCALE(iLocal_424[5], fLocal_45);
				TASK::TASK_COMBAT_PED(iLocal_378[5], PLAYER::PLAYER_PED_ID(), 0, 16);
				iLocal_79++;
			}
		}
		iLocal_133 = 1;
	}
	if ((((((((ENTITY::IS_ENTITY_DEAD(iLocal_378[0], false) || ENTITY::IS_ENTITY_DEAD(iLocal_378[2], false)) || ENTITY::IS_ENTITY_DEAD(iLocal_378[3], false)) || ENTITY::IS_ENTITY_DEAD(iLocal_378[4], false)) || ENTITY::IS_ENTITY_DEAD(iLocal_378[5], false)) || ENTITY::IS_ENTITY_DEAD(iLocal_379, false)) || ENTITY::IS_ENTITY_DEAD(iLocal_380, false)) || PED::IS_PED_BEING_JACKED(iLocal_379)) || PED::IS_PED_BEING_JACKED(iLocal_380))
	{
		iLocal_133 = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_393[iLocal_78]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_393[iLocal_78], false))
		{
			if (((MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_393[iLocal_78], true), joaat("WEAPON_GRENADE"), 4f, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_393[iLocal_78], true), joaat("WEAPON_MOLOTOV"), 4f, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_393[iLocal_78], true), joaat("WEAPON_SMOKEGRENADE"), 4f, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_393[iLocal_78], true), joaat("WEAPON_STICKYBOMB"), 4f, true))
			{
				iLocal_133 = 1;
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_393[iLocal_78], false))
			{
				iLocal_133 = 1;
			}
		}
		else
		{
			iLocal_133 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_381[iLocal_78]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_381[iLocal_78], false))
		{
			if (PED::IS_PED_BEING_JACKED(iLocal_381[iLocal_78]))
			{
				iLocal_133 = 1;
			}
		}
		else
		{
			iLocal_133 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_382[iLocal_78]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_382[iLocal_78], false))
		{
			if (PED::IS_PED_BEING_JACKED(iLocal_382[iLocal_78]))
			{
				iLocal_133 = 1;
			}
		}
		else
		{
			iLocal_133 = 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_392, false))
	{
		if ((__LIB_0__::func_508(iLocal_392, PLAYER::PLAYER_PED_ID(), 3f, 1) || __LIB_0__::func_508(iLocal_392, iLocal_395, 3f, 1)) || __LIB_0__::func_76(iLocal_392, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1) <= 3f)
		{
			PHYSICS::ACTIVATE_PHYSICS(iLocal_392);
		}
		if (__LIB_0__::func_456(PLAYER::PLAYER_PED_ID(), iLocal_392))
		{
			iLocal_133 = 1;
		}
		if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_392, false) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_392, PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_392, iLocal_395, true)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_392, iLocal_395))
		{
			iLocal_133 = 1;
		}
	}
	iLocal_78++;
	if (iLocal_78 == 7)
	{
		iLocal_78 = 0;
	}
}

void func_314()//Position - 0x2DE25
{
	struct<6> Var0;
	func_311();
	func_309();
	if (!PED::IS_PED_HEADTRACKING_PED(iLocal_383, PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_LOOK_AT_ENTITY(iLocal_383, PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
	}
	if (MISC::GET_GAME_TIMER() > iLocal_115 + 6500)
	{
		func_304();
	}
	if (!__LIB_0__::func_75())
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_430))
		{
			if (iLocal_177 == 0)
			{
				iLocal_430 = __LIB_10__::func_711(iLocal_383, 1, 1, 5);
				HUD::SET_BLIP_SCALE(iLocal_430, fLocal_45);
				iLocal_177 = 1;
			}
		}
		iLocal_376 = 7;
	}
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
	{
		Var0 = { __LIB_0__::func_390() };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
		{
			if (MISC::ARE_STRINGS_EQUAL(&Var0, "EPS8_E1"))
			{
				__LIB_0__::func_296();
			}
		}
	}
}

void func_315()//Position - 0x2DECF
{
	func_13();
	func_311();
	func_309();
	if (!PED::IS_PED_HEADTRACKING_PED(iLocal_383, PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_LOOK_AT_ENTITY(iLocal_383, PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
	}
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("tractor")))
		{
			if (!__LIB_0__::func_75())
			{
				if (__LIB_35__::func_536(&uLocal_198, "EPS8AU", "EPS8_ESC", 7, 0, 0, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					iLocal_396 = VEHICLE::CREATE_VEHICLE(joaat("tractor"), -375.6338f, -105.9456f, 37.679f, 119.7025f, true, true, false);
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_396, 8, false);
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_396, 1, true);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_396, "K1FFL0M1");
					__LIB_0__::func_501(iLocal_396, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tractor"));
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_383, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_433);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "rcmepsilonism8", "jump_off_heli", 2f, -1f, -1, 32768, 0.084f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_433);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_383, iLocal_433);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_433);
					iLocal_115 = MISC::GET_GAME_TIMER();
					__LIB_8__::func_770(0);
					Local_63 = { ENTITY::GET_ENTITY_COORDS(iLocal_395, true) };
					iLocal_430 = __LIB_10__::func_711(iLocal_383, 1, 1, 5);
					iLocal_177 = 1;
					HUD::SET_BLIP_SCALE(iLocal_430, fLocal_45);
					STREAMING::REQUEST_CLIP_SET("move_ped_wpn_jerrycan_generic");
					iLocal_126 = 0;
					__LIB_9__::func_981(&uLocal_363, 0, 0);
					iLocal_195 = 0;
					iLocal_376 = 6;
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -351.62787f, -76.40219f, 41.77763f, -361.89246f, -104.87181f, 48.97791f, fLocal_50, false, true, 0))
	{
		iLocal_133 = 1;
	}
}

void func_319()//Position - 0x2E174
{
	func_302();
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	func_311();
	func_309();
	if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_395, Local_56, 2f, 2f, 2f, false, true, 0))
	{
		func_291();
	}
	if (!PED::IS_PED_HEADTRACKING_PED(iLocal_383, PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_LOOK_AT_ENTITY(iLocal_383, PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
	}
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
	{
		if (__LIB_1__::func_183(iLocal_392))
		{
			__LIB_39__::func_907(&uLocal_363, iLocal_392, 0, 0, 1, 1, 1);
		}
	}
	else
	{
		__LIB_9__::func_981(&uLocal_363, 0, 0);
	}
	if (ENTITY::IS_ENTITY_AT_COORD(iLocal_395, Local_56, 2f, 2f, 2f, false, true, 0) && VEHICLE::IS_VEHICLE_STOPPED(iLocal_395))
	{
		__LIB_0__::func_523(&iLocal_425);
		if (ENTITY::GET_ENTITY_SPEED(iLocal_395) < 12.8f)
		{
			fLocal_50 = 30.75f;
		}
		if (ENTITY::GET_ENTITY_SPEED(iLocal_395) >= 12.8f && ENTITY::GET_ENTITY_SPEED(iLocal_395) < 18f)
		{
			fLocal_50 = 32.75f;
		}
		if (ENTITY::GET_ENTITY_SPEED(iLocal_395) >= 18f)
		{
			fLocal_50 = 34.75f;
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
		{
			__LIB_0__::func_523(&iLocal_428);
			iLocal_170 = 1;
			STREAMING::REQUEST_MODEL(joaat("tractor"));
			STREAMING::REQUEST_CLIP_SET("move_ped_wpn_jerrycan_generic");
			iLocal_376 = 5;
		}
		else
		{
			if (iLocal_185 == 0)
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 15f, 1);
				__LIB_0__::func_210("EPS8_27", 7500, 0);
				iLocal_185 = 1;
			}
			iLocal_190 = 1;
		}
	}
	else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_395, Local_56, 2f, 2f, 2f, false, true, 0))
	{
		__LIB_0__::func_523(&iLocal_425);
		if (!VEHICLE::IS_VEHICLE_STOPPED(iLocal_395))
		{
			if (iLocal_190 == 0)
			{
				__LIB_6__::func_762(iLocal_395, 4f, 1, 1056964608, 0, 1, 0);
			}
		}
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_425))
	{
		iLocal_190 = 0;
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_395, Local_56, 6f, 6f, 2f, true, true, 0))
		{
		}
	}
}

void func_350()//Position - 0x2F580
{
	if (!iLocal_192)
	{
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LOS_SANTOS_EPSILONISM_BUILDING_01", false);
		AUDIO::TRIGGER_MUSIC_EVENT("EPS8_START");
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 1);
		iLocal_192 = 1;
	}
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(-744.6715f, -175.2881f, -205.6593f, 118.4107f);
	func_354();
	if (iLocal_78 == 1 || iLocal_78 == 4)
	{
		func_353();
	}
	if (iLocal_133 == 0)
	{
		func_351();
	}
	func_311();
	func_309();
	func_291();
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
	{
		if (__LIB_1__::func_183(iLocal_393[0]))
		{
			__LIB_39__::func_907(&uLocal_363, iLocal_393[0], 0, 0, 1, 1, 1);
		}
		if (PED::IS_PED_IN_VEHICLE(iLocal_381[0], iLocal_393[0], false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_393[0], -384.12918f, -72.76846f, 41.7355f, -381.62613f, -65.75608f, 52.89689f, 8.5f, false, true, 0))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_429))
				{
					HUD::REMOVE_BLIP(&iLocal_429);
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_425))
				{
					iLocal_425 = HUD::ADD_BLIP_FOR_COORD(Local_56);
				}
				__LIB_9__::func_981(&uLocal_363, 0, 0);
				__LIB_0__::func_210("EPS8_28", 7500, 0);
				iLocal_376 = 4;
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_395, -384.12918f, -72.76846f, 41.7355f, -381.62613f, -65.75608f, 52.89689f, 8.5f, false, true, 0))
		{
			__LIB_0__::func_523(&iLocal_429);
			if (!HUD::DOES_BLIP_EXIST(iLocal_425))
			{
				iLocal_425 = HUD::ADD_BLIP_FOR_COORD(Local_56);
			}
			__LIB_9__::func_981(&uLocal_363, 0, 0);
			__LIB_0__::func_210("EPS8_28", 7500, 0);
			iLocal_376 = 4;
		}
	}
	else
	{
		__LIB_9__::func_981(&uLocal_363, 0, 0);
	}
	if (ENTITY::IS_ENTITY_AT_COORD(iLocal_395, Local_56, 6f, 6f, 2f, true, true, 0))
	{
	}
}

void func_351()//Position - 0x2F73B
{
	if (__LIB_1__::func_183(iLocal_395))
	{
		if (__LIB_1__::func_197(iLocal_381[0]))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_113 + 8000)
				{
					if (!__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_381[0], 40f, 1))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
						{
							if (ENTITY::GET_ENTITY_SPEED(iLocal_395) > 2f)
							{
								if (iLocal_161 == 0)
								{
									if (!__LIB_0__::func_75())
									{
										if (__LIB_35__::func_536(&uLocal_198, "EPS8AU", "EPS8_LS4", 6, 0, 0, 0))
										{
											iLocal_161 = 1;
											if (iLocal_83 < 2)
											{
												iLocal_83 = 2;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_128 == 10)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_127 + 1000)
						{
							if (!__LIB_0__::func_75())
							{
								sLocal_194 = "EPS8_23";
								iLocal_376 = 10;
								if (iLocal_83 < 2)
								{
									iLocal_83 = 2;
								}
								return;
							}
						}
					}
					if (fLocal_74 < 0.5f && fLocal_74 != -1f)
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_395) < 2f)
						{
							if (iLocal_157 == 0)
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_LS5", "EPS8_LS5_1", 6, 0, 0))
									{
										iLocal_127 = MISC::GET_GAME_TIMER();
										iLocal_157 = 1;
										if (iLocal_83 < 2)
										{
											iLocal_83 = 2;
										}
									}
								}
							}
							else if (iLocal_83 >= 7)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_127 + 9000)
								{
									if (!__LIB_0__::func_75())
									{
										if (iLocal_128 < 5)
										{
											__LIB_35__::func_536(&uLocal_198, "EPS8AU", "EPS8_T2", 7, 0, 0, 0);
											iLocal_128++;
											iLocal_127 = MISC::GET_GAME_TIMER();
										}
										else if (iLocal_128 != 10)
										{
											if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_T1", "EPS8_T1_6", 7, 0, 0))
											{
												iLocal_128 = 10;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_97 == 1)
					{
						if (iLocal_158 == 0)
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_LS3", "EPS8_LS3_1", 6, 0, 0))
								{
									iLocal_158 = 1;
									if (iLocal_83 < 2)
									{
										iLocal_83 = 2;
									}
								}
							}
						}
					}
					if (iLocal_97 == 2)
					{
						if (iLocal_159 == 0)
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_LS3", "EPS8_LS3_2", 6, 0, 0))
								{
									iLocal_159 = 1;
									if (iLocal_83 < 2)
									{
										iLocal_83 = 2;
									}
								}
							}
						}
					}
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -358.0764f, -88.2705f, 44.5901f, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_381[0], true), -358.0764f, -88.2705f, 44.5901f, true))
				{
					if (MISC::GET_GAME_TIMER() > iLocal_113 + 8000)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
						{
							if (iLocal_160 == 0)
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_35__::func_536(&uLocal_198, "EPS8AU", "EPS8_LS2", 6, 0, 0, 0))
									{
										iLocal_160 = 1;
										if (iLocal_83 < 2)
										{
											iLocal_83 = 2;
										}
									}
								}
							}
						}
					}
				}
				else if (iLocal_83 == 0)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_113 + 7000)
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_LS", "EPS8_LS_1", 5, 0, 0))
							{
								iLocal_83 = 1;
							}
						}
					}
				}
				else if (iLocal_83 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_113 + 9000)
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_LS", "EPS8_LS_2", 5, 0, 0))
							{
								iLocal_83 = 2;
							}
						}
					}
				}
				else if (iLocal_83 == 2)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_113 + 12000)
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_LS", "EPS8_LS_3", 5, 0, 0))
							{
								iLocal_83 = 3;
							}
						}
					}
				}
				else if (iLocal_83 == 3)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_113 + 13000)
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_LS", "EPS8_LS_4", 5, 0, 0))
							{
								iLocal_83 = 4;
							}
						}
					}
				}
				else if (iLocal_83 == 4)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_113 + 14000)
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_0__::func_121(iLocal_392) && __LIB_0__::func_121(iLocal_393[0]))
							{
								if (!__LIB_0__::func_530(iLocal_393[0], -696.0367f, 40.7954f, 42.2066f, 80f, 1) && !__LIB_0__::func_530(iLocal_392, -355.8568f, -89.7074f, 44.6341f, 50f, 1))
								{
									if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_LS", "EPS8_LS_5", 5, 0, 0))
									{
										iLocal_83 = 5;
									}
								}
								else
								{
									iLocal_83 = 5;
								}
							}
						}
					}
				}
				else if (iLocal_83 == 5)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_113 + 15000)
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_LS", "EPS8_LS_6", 5, 0, 0))
							{
								iLocal_83 = 6;
							}
						}
					}
				}
				else if (iLocal_83 == 6)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_113 + 16000)
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_36__::func_42(&uLocal_198, "EPS8AU", "EPS8_LS", "EPS8_LS_7", 7, 0, 0))
							{
								iLocal_83 = 7;
							}
						}
					}
				}
			}
			else if (iLocal_105 == 0)
			{
				iLocal_104 = MISC::GET_GAME_TIMER();
				iLocal_105 = 1;
			}
			else if (iLocal_105 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_104 + 7000)
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_T1", "EPS8_T1_1", 5, 0, 0))
						{
							iLocal_104 = MISC::GET_GAME_TIMER();
							iLocal_127 = MISC::GET_GAME_TIMER();
							iLocal_105 = 2;
							if (iLocal_83 < 2)
							{
								iLocal_83 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_105 == 2)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_104 + 8000)
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_T1", "EPS8_T1_2", 5, 0, 0))
						{
							iLocal_104 = MISC::GET_GAME_TIMER();
							iLocal_127 = MISC::GET_GAME_TIMER();
							iLocal_105 = 3;
							if (iLocal_83 < 2)
							{
								iLocal_83 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_105 == 3)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_104 + 8000)
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_T1", "EPS8_T1_3", 5, 0, 0))
						{
							iLocal_104 = MISC::GET_GAME_TIMER();
							iLocal_127 = MISC::GET_GAME_TIMER();
							iLocal_105 = 4;
							if (iLocal_83 < 2)
							{
								iLocal_83 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_105 == 4)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_104 + 7000)
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_T1", "EPS8_T1_4", 5, 0, 0))
						{
							iLocal_104 = MISC::GET_GAME_TIMER();
							iLocal_127 = MISC::GET_GAME_TIMER();
							iLocal_105 = 5;
							if (iLocal_83 < 2)
							{
								iLocal_83 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_105 == 5)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_104 + 1000)
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_T1", "EPS8_T1_5", 5, 0, 0))
						{
							iLocal_104 = MISC::GET_GAME_TIMER();
							iLocal_127 = MISC::GET_GAME_TIMER();
							iLocal_105 = 6;
							if (iLocal_83 < 2)
							{
								iLocal_83 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_105 == 6)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_104 + 10000)
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_35__::func_901(&uLocal_198, "EPS8AU", "EPS8_T1", "EPS8_T1_6", 5, 0, 0))
						{
							iLocal_104 = MISC::GET_GAME_TIMER();
							iLocal_105 = 7;
							if (iLocal_83 < 2)
							{
								iLocal_83 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_105 == 7)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_104 + 1000)
				{
					if (!__LIB_0__::func_75())
					{
						sLocal_194 = "EPS8_23";
						iLocal_376 = 10;
						iLocal_105 = 8;
						if (iLocal_83 < 2)
						{
							iLocal_83 = 2;
						}
					}
				}
			}
		}
	}
}

void func_353()//Position - 0x2FE94
{
	int iVar0;
	int iVar1;
	float fVar2;
	MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 200f, true, true, false, false, false, false, 0);
	if ((((STREAMING::HAS_MODEL_LOADED(joaat("taxi")) && STREAMING::HAS_MODEL_LOADED(joaat("sadler"))) && STREAMING::HAS_MODEL_LOADED(joaat("habanero"))) && STREAMING::HAS_MODEL_LOADED(joaat("schafter2"))) && STREAMING::HAS_MODEL_LOADED(joaat("rumpo")))
	{
		Local_399[0 /*3*/] = { -131.838f, -84.816f, 54.8058f };
		Local_399[1 /*3*/] = { -131.838f, -84.816f, 54.8058f };
		Local_399[2 /*3*/] = { -202.8393f, -60.2254f, 49.8713f };
		Local_399[3 /*3*/] = { -283.2474f, -32.2227f, 48.2857f };
		Local_399[4 /*3*/] = { -372.0164f, -1.9755f, 45.9995f };
		Local_399[5 /*3*/] = { -463.3591f, 7.4364f, 44.6764f };
		Local_399[6 /*3*/] = { -536.8303f, 12.2933f, 43.2611f };
		fLocal_400[0] = 71.7829f;
		fLocal_400[1] = 71.7829f;
		fLocal_400[2] = 70.6852f;
		fLocal_400[3] = 70.5582f;
		fLocal_400[4] = 75.2358f;
		fLocal_400[5] = 88.0273f;
		fLocal_400[6] = 86.8248f;
		Local_403[0 /*3*/] = { -312.1015f, 130.6894f, 66.5865f };
		Local_403[1 /*3*/] = { -345.6338f, 129.7367f, 65.7121f };
		Local_403[2 /*3*/] = { -393.3472f, 75.7086f, 58.9759f };
		Local_403[3 /*3*/] = { -394.0365f, 33.2626f, 47.2826f };
		Local_403[4 /*3*/] = { -432.5279f, 11.5918f, 45.1093f };
		Local_403[5 /*3*/] = { -473.8784f, 13.902f, 44.3884f };
		Local_403[6 /*3*/] = { -515.9524f, 16.8126f, 43.5537f };
		fLocal_404[0] = 91.2112f;
		fLocal_404[1] = 92.7461f;
		fLocal_404[2] = 179.5078f;
		fLocal_404[3] = 174.2351f;
		fLocal_404[4] = 87.2938f;
		fLocal_404[5] = 85.9476f;
		fLocal_404[6] = 86.5195f;
		Local_407[0 /*3*/] = { -821.8678f, -15.21f, 38.7738f };
		Local_407[1 /*3*/] = { -762.9101f, -61.369f, 36.8265f };
		Local_407[2 /*3*/] = { -683.5615f, -22.2863f, 37.2221f };
		Local_407[3 /*3*/] = { -598.2457f, -13.4337f, 42.8497f };
		Local_407[4 /*3*/] = { -566.7648f, -39.6658f, 41.744f };
		Local_407[5 /*3*/] = { -547.043f, -87.3705f, 39.7725f };
		Local_407[6 /*3*/] = { -542.4178f, -145.067f, 37.4423f };
		fLocal_408[0] = 213.1008f;
		fLocal_408[1] = 292.6512f;
		fLocal_408[2] = 280.8633f;
		fLocal_408[3] = 270.1932f;
		fLocal_408[4] = 162.4637f;
		fLocal_408[5] = 220.7259f;
		fLocal_408[6] = 109.6765f;
		Local_411[0 /*3*/] = { -538.8824f, 2.5863f, 43.2495f };
		Local_411[1 /*3*/] = { -510.9343f, 0.7568f, 43.7336f };
		Local_411[2 /*3*/] = { -468.7612f, -1.3575f, 44.5868f };
		Local_411[3 /*3*/] = { -419.5594f, -4.5629f, 45.5167f };
		Local_411[4 /*3*/] = { -373.0446f, -11.2775f, 46.0324f };
		Local_411[5 /*3*/] = { -278.3581f, -44.505f, 48.549f };
		Local_411[6 /*3*/] = { -211.5438f, -68.0673f, 49.5385f };
		fLocal_412[0] = 264.3932f;
		fLocal_412[1] = 265.6151f;
		fLocal_412[2] = 265.8879f;
		fLocal_412[3] = 267.9286f;
		fLocal_412[4] = 251.6172f;
		fLocal_412[5] = 254.6602f;
		fLocal_412[6] = 252.3606f;
		Local_415[0 /*3*/] = { -669.2421f, -7.4354f, 37.8635f };
		Local_415[1 /*3*/] = { -700.1176f, -17.5754f, 36.9578f };
		Local_415[2 /*3*/] = { -727.3986f, -31.1413f, 36.8838f };
		Local_415[3 /*3*/] = { -775.4231f, -56.9022f, 36.8581f };
		Local_415[4 /*3*/] = { -813.0173f, -76.7235f, 36.8717f };
		Local_415[5 /*3*/] = { -857.0458f, -99.6788f, 36.9241f };
		Local_415[6 /*3*/] = { -911.4196f, -127.5572f, 36.824f };
		fLocal_416[0] = 101.9021f;
		fLocal_416[1] = 116.4117f;
		fLocal_416[2] = 116.5154f;
		fLocal_416[3] = 117.926f;
		fLocal_416[4] = 117.6888f;
		fLocal_416[5] = 117.7467f;
		fLocal_416[6] = 115.4069f;
		Local_419[0 /*3*/] = { -808.274f, -46.2696f, 36.8528f };
		Local_419[1 /*3*/] = { -823.1899f, -74.6149f, 36.7824f };
		Local_419[2 /*3*/] = { -862.0953f, -95.4273f, 36.8721f };
		Local_419[3 /*3*/] = { -913.0912f, -122.397f, 36.7913f };
		Local_419[4 /*3*/] = { -959.4056f, -145.7552f, 36.7732f };
		Local_419[5 /*3*/] = { -1020.0234f, -163.9246f, 36.7896f };
		Local_419[6 /*3*/] = { -1071.111f, -164.687f, 36.7161f };
		fLocal_420[0] = 206.0301f;
		fLocal_420[1] = 119.711f;
		fLocal_420[2] = 117.2803f;
		fLocal_420[3] = 117.1178f;
		fLocal_420[4] = 115.7739f;
		fLocal_420[5] = 118.1293f;
		fLocal_420[6] = 66.6215f;
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Eps8TRAFFIC01"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_397[iLocal_421]))
			{
				if (!__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_399[iLocal_421 /*3*/], 50f, 1) && !MISC::IS_POSITION_OCCUPIED(Local_399[iLocal_421 /*3*/], 15f, false, true, false, false, false, 0, false))
				{
					if (!CAM::IS_SPHERE_VISIBLE(Local_399[iLocal_421 /*3*/], 8f))
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
						if (iVar1 == 0)
						{
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1)
						{
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 2)
						{
							iVar0 = joaat("schafter2");
						}
						else if (iVar1 == 3)
						{
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4)
						{
							iVar0 = joaat("schafter2");
						}
						else
						{
							iVar0 = joaat("rumpo");
						}
						if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Local_399[iLocal_421 /*3*/], &fVar2, false, false))
						{
							fVar2 = Local_399[iLocal_421 /*3*/].f_2;
						}
						if (iLocal_421 > 4 || __LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_56, 150f, 1))
						{
							iLocal_397[iLocal_421] = VEHICLE::CREATE_VEHICLE(iVar0, Local_399[iLocal_421 /*3*/], Local_399[iLocal_421 /*3*/].f_1, fVar2, fLocal_400[iLocal_421], true, true, false);
							iLocal_398[iLocal_421] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_397[iLocal_421], true);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_397[iLocal_421], 5f);
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_398[iLocal_421], iLocal_397[iLocal_421], "Eps8TRAFFIC01", 262275, 0, 1032, -1, -1f, false, 2f);
						}
					}
				}
			}
			else if (__LIB_0__::func_121(iLocal_397[iLocal_421]))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_397[iLocal_421]))
				{
					if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iLocal_397[iLocal_421]) > 70)
					{
						if (!__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_397[iLocal_421], 70f, 1))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_397[iLocal_421]))
							{
								__LIB_0__::func_0(&(iLocal_398[iLocal_421]));
								__LIB_11__::func_32(&(iLocal_397[iLocal_421]));
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_397[iLocal_421]))
				{
					__LIB_0__::func_0(&(iLocal_398[iLocal_421]));
					__LIB_11__::func_32(&(iLocal_397[iLocal_421]));
				}
			}
		}
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Eps8TRAFFIC02"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_401[iLocal_421]))
			{
				if (!__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_403[iLocal_421 /*3*/], 50f, 1) && !MISC::IS_POSITION_OCCUPIED(Local_403[iLocal_421 /*3*/], 15f, false, true, false, false, false, 0, false))
				{
					if (!CAM::IS_SPHERE_VISIBLE(Local_403[iLocal_421 /*3*/], 8f))
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
						if (iVar1 == 0)
						{
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1)
						{
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 2)
						{
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 3)
						{
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4)
						{
							iVar0 = joaat("schafter2");
						}
						else
						{
							iVar0 = joaat("rumpo");
						}
						if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Local_403[iLocal_421 /*3*/], &fVar2, false, false))
						{
							fVar2 = Local_403[iLocal_421 /*3*/].f_2;
						}
						iLocal_401[iLocal_421] = VEHICLE::CREATE_VEHICLE(iVar0, Local_403[iLocal_421 /*3*/], Local_403[iLocal_421 /*3*/].f_1, fVar2, fLocal_404[iLocal_421], true, true, false);
						iLocal_402[iLocal_421] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_401[iLocal_421], true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_401[iLocal_421], 5f);
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_402[iLocal_421], iLocal_401[iLocal_421], "Eps8TRAFFIC02", 262275, 0, 1032, -1, -1f, false, 2f);
					}
				}
			}
			else if (__LIB_0__::func_121(iLocal_401[iLocal_421]))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_401[iLocal_421]))
				{
					if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iLocal_401[iLocal_421]) > 70)
					{
						if (!__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_401[iLocal_421], 70f, 1))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_401[iLocal_421]))
							{
								__LIB_0__::func_0(&(iLocal_402[iLocal_421]));
								__LIB_11__::func_32(&(iLocal_401[iLocal_421]));
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_401[iLocal_421]))
				{
					__LIB_0__::func_0(&(iLocal_402[iLocal_421]));
					__LIB_11__::func_32(&(iLocal_401[iLocal_421]));
				}
			}
		}
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Eps8TRAFFIC03"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_405[iLocal_421]))
			{
				if ((!__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_407[iLocal_421 /*3*/], 50f, 1) && __LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_407[iLocal_421 /*3*/], 220f, 1)) && !MISC::IS_POSITION_OCCUPIED(Local_407[iLocal_421 /*3*/], 15f, false, true, false, false, false, 0, false))
				{
					if (!CAM::IS_SPHERE_VISIBLE(Local_407[iLocal_421 /*3*/], 8f))
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
						if (iVar1 == 0)
						{
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1)
						{
							iVar0 = joaat("schafter2");
						}
						else if (iVar1 == 2)
						{
							iVar0 = joaat("rumpo");
						}
						else if (iVar1 == 3)
						{
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4)
						{
							iVar0 = joaat("schafter2");
						}
						else
						{
							iVar0 = joaat("rumpo");
						}
						if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Local_407[iLocal_421 /*3*/], &fVar2, false, false))
						{
							fVar2 = Local_407[iLocal_421 /*3*/].f_2;
						}
						iLocal_405[iLocal_421] = VEHICLE::CREATE_VEHICLE(iVar0, Local_407[iLocal_421 /*3*/], Local_407[iLocal_421 /*3*/].f_1, fVar2, fLocal_408[iLocal_421], true, true, false);
						iLocal_406[iLocal_421] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_405[iLocal_421], true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_405[iLocal_421], 5f);
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_406[iLocal_421], iLocal_405[iLocal_421], "Eps8TRAFFIC03", 262275, 0, 1032, -1, -1f, false, 2f);
					}
				}
			}
			else if (__LIB_0__::func_121(iLocal_405[iLocal_421]))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_405[iLocal_421]))
				{
					if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iLocal_405[iLocal_421]) > 70)
					{
						if (!__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_405[iLocal_421], 70f, 1))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_405[iLocal_421]))
							{
								__LIB_0__::func_0(&(iLocal_406[iLocal_421]));
								__LIB_11__::func_32(&(iLocal_405[iLocal_421]));
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_405[iLocal_421]))
				{
					__LIB_0__::func_0(&(iLocal_406[iLocal_421]));
					__LIB_11__::func_32(&(iLocal_405[iLocal_421]));
				}
			}
		}
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Eps8TRAFFIC04"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_409[iLocal_421]))
			{
				if (!__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_411[iLocal_421 /*3*/], 50f, 1) && !MISC::IS_POSITION_OCCUPIED(Local_411[iLocal_421 /*3*/], 15f, false, true, false, false, false, 0, false))
				{
					if (!CAM::IS_SPHERE_VISIBLE(Local_411[iLocal_421 /*3*/], 8f))
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
						if (iVar1 == 0)
						{
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1)
						{
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 2)
						{
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 3)
						{
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4)
						{
							iVar0 = joaat("schafter2");
						}
						else
						{
							iVar0 = joaat("rumpo");
						}
						if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Local_411[iLocal_421 /*3*/], &fVar2, false, false))
						{
							fVar2 = Local_411[iLocal_421 /*3*/].f_2;
						}
						iLocal_409[iLocal_421] = VEHICLE::CREATE_VEHICLE(iVar0, Local_411[iLocal_421 /*3*/], Local_411[iLocal_421 /*3*/].f_1, fVar2, fLocal_412[iLocal_421], true, true, false);
						iLocal_410[iLocal_421] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_409[iLocal_421], true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_409[iLocal_421], 5f);
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_410[iLocal_421], iLocal_409[iLocal_421], "Eps8TRAFFIC04", 262275, 0, 1032, -1, -1f, false, 2f);
					}
				}
			}
			else if (__LIB_0__::func_121(iLocal_409[iLocal_421]))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_409[iLocal_421]))
				{
					if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iLocal_409[iLocal_421]) > 70)
					{
						if (!__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_409[iLocal_421], 70f, 1))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_409[iLocal_421]))
							{
								__LIB_0__::func_0(&(iLocal_410[iLocal_421]));
								__LIB_11__::func_32(&(iLocal_409[iLocal_421]));
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_409[iLocal_421]))
				{
					__LIB_0__::func_0(&(iLocal_410[iLocal_421]));
					__LIB_11__::func_32(&(iLocal_409[iLocal_421]));
				}
			}
		}
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Eps8TRAFFIC05"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_413[iLocal_421]))
			{
				if ((!__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_415[iLocal_421 /*3*/], 50f, 1) && __LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_415[iLocal_421 /*3*/], 170f, 1)) && !MISC::IS_POSITION_OCCUPIED(Local_415[iLocal_421 /*3*/], 15f, false, true, false, false, false, 0, false))
				{
					if (!CAM::IS_SPHERE_VISIBLE(Local_415[iLocal_421 /*3*/], 8f))
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
						if (iVar1 == 0)
						{
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1)
						{
							iVar0 = joaat("schafter2");
						}
						else if (iVar1 == 2)
						{
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 3)
						{
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4)
						{
							iVar0 = joaat("schafter2");
						}
						else
						{
							iVar0 = joaat("rumpo");
						}
						if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Local_415[iLocal_421 /*3*/], &fVar2, false, false))
						{
							fVar2 = Local_415[iLocal_421 /*3*/].f_2;
						}
						iLocal_413[iLocal_421] = VEHICLE::CREATE_VEHICLE(iVar0, Local_415[iLocal_421 /*3*/], Local_415[iLocal_421 /*3*/].f_1, fVar2, fLocal_416[iLocal_421], true, true, false);
						iLocal_414[iLocal_421] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_413[iLocal_421], true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_413[iLocal_421], 5f);
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_414[iLocal_421], iLocal_413[iLocal_421], "Eps8TRAFFIC05", 262275, 0, 1032, -1, -1f, false, 2f);
					}
				}
			}
			else if (__LIB_0__::func_121(iLocal_413[iLocal_421]))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_413[iLocal_421]))
				{
					if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iLocal_413[iLocal_421]) > 40)
					{
						if (!__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_413[iLocal_421], 60f, 1))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_413[iLocal_421]))
							{
								__LIB_0__::func_0(&(iLocal_414[iLocal_421]));
								__LIB_11__::func_32(&(iLocal_413[iLocal_421]));
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_413[iLocal_421]))
				{
					__LIB_0__::func_0(&(iLocal_414[iLocal_421]));
					__LIB_11__::func_32(&(iLocal_413[iLocal_421]));
				}
			}
		}
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Eps8TRAFFIC06"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_417[iLocal_421]))
			{
				if ((!__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_419[iLocal_421 /*3*/], 50f, 1) && __LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_419[iLocal_421 /*3*/], 170f, 1)) && !MISC::IS_POSITION_OCCUPIED(Local_419[iLocal_421 /*3*/], 15f, false, true, false, false, false, 0, false))
				{
					if (!CAM::IS_SPHERE_VISIBLE(Local_419[iLocal_421 /*3*/], 8f))
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
						if (iVar1 == 0)
						{
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1)
						{
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 2)
						{
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 3)
						{
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4)
						{
							iVar0 = joaat("schafter2");
						}
						else
						{
							iVar0 = joaat("rumpo");
						}
						if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Local_419[iLocal_421 /*3*/], &fVar2, false, false))
						{
							fVar2 = Local_419[iLocal_421 /*3*/].f_2;
						}
						iLocal_417[iLocal_421] = VEHICLE::CREATE_VEHICLE(iVar0, Local_419[iLocal_421 /*3*/], Local_419[iLocal_421 /*3*/].f_1, fVar2, fLocal_420[iLocal_421], true, true, false);
						iLocal_418[iLocal_421] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_417[iLocal_421], true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_417[iLocal_421], 5f);
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_418[iLocal_421], iLocal_417[iLocal_421], "Eps8TRAFFIC06", 262275, 0, 1032, -1, -1f, false, 2f);
					}
				}
			}
			else if (__LIB_0__::func_121(iLocal_417[iLocal_421]))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_417[iLocal_421]))
				{
					if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iLocal_417[iLocal_421]) > 40)
					{
						if (!__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_417[iLocal_421], 60f, 1))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_417[iLocal_421]))
							{
								__LIB_0__::func_0(&(iLocal_418[iLocal_421]));
								__LIB_11__::func_32(&(iLocal_417[iLocal_421]));
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_417[iLocal_421]))
				{
					__LIB_0__::func_0(&(iLocal_418[iLocal_421]));
					__LIB_11__::func_32(&(iLocal_417[iLocal_421]));
				}
			}
		}
		iLocal_421++;
		if (iLocal_421 > 6)
		{
			iLocal_421 = 0;
		}
	}
}

void func_354()//Position - 0x31164
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("EPSILONISM_08_COMPLIANCE"))
	{
		if (__LIB_0__::func_121(iLocal_393[0]))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_393[0], "EPSILONISM_08_COMPLIANCE_CAR_LEADER", 0f);
		}
		if (__LIB_0__::func_121(iLocal_392))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_392, "EPSILONISM_08_COMPLIANCE_HELI", 0f);
		}
		AUDIO::START_AUDIO_SCENE("EPSILONISM_08_COMPLIANCE");
	}
}

void func_355()//Position - 0x311B3
{
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	func_367();
	func_366();
	func_357();
	func_356();
	if (!iLocal_192)
	{
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LOS_SANTOS_EPSILONISM_BUILDING_01", false);
		AUDIO::TRIGGER_MUSIC_EVENT("EPS8_START");
		iLocal_192 = 1;
	}
	iLocal_376 = 3;
}

void func_356()//Position - 0x311F1
{
	HUD::CLEAR_PRINTS();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_HighSec_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sentinel"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("landstalker"));
	iLocal_429 = __LIB_10__::func_727(iLocal_393[0], 1, 5);
	__LIB_0__::func_210("EPS8_05", 7500, 0);
	iLocal_166 = 1;
	iLocal_113 = MISC::GET_GAME_TIMER();
	if (__LIB_1__::func_183(iLocal_393[0]))
	{
		if (__LIB_1__::func_197(iLocal_381[0]))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_432);
			TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iLocal_393[0], "Eps8LS01", 786468, 0, 8, -1, -1f, false, 2f);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_432);
			TASK::CLEAR_PED_TASKS(iLocal_381[0]);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_381[0], iLocal_432);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_432);
		}
	}
	if (__LIB_1__::func_183(iLocal_392))
	{
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_392, 222, "Ep8Heli01", true);
		VEHICLE::SET_PLAYBACK_SPEED(iLocal_392, 1.25f);
	}
}

void func_357()//Position - 0x312C6
{
	iLocal_392 = VEHICLE::CREATE_VEHICLE(joaat("maverick"), Local_60, fLocal_72, true, true, false);
	VEHICLE::SET_VEHICLE_COLOURS(iLocal_392, iLocal_57, iLocal_57);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_392, 0, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("maverick"));
	iLocal_379 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_392, 26, joaat("S_M_M_HighSec_01"), -1, true, true);
	PED::SET_PED_ACCURACY(iLocal_379, iLocal_52);
	PED::SET_PED_SHOOT_RATE(iLocal_379, iLocal_54);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_379, joaat("WEAPON_COMBATPISTOL"), -1, false, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_379, iLocal_196);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_392, 3);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_379, true, 0f);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_379, 0, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_379, 3, 0, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_379, 4, 0, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_379, 8, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_379, 11, 1, 0, 0);
	iLocal_383 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_392, 26, joaat("A_M_Y_Epsilon_01"), 1, true, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_383, 100);
	PED::SET_PED_ACCURACY(iLocal_383, iLocal_52);
	PED::SET_PED_SHOOT_RATE(iLocal_383, iLocal_54);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_383, 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_383, 1, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_383, 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_383, 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_383, 10, 1, 0, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_383, iLocal_196);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_383, joaat("WEAPON_COMBATPISTOL"), -1, false, false);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iLocal_383, joaat("WEAPON_COMBATPISTOL"), joaat("COMPONENT_AT_PI_FLSH"));
	PED::SET_PED_KEEP_TASK(iLocal_383, true);
	TASK::TASK_LOOK_AT_ENTITY(iLocal_383, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	PED::SET_PED_CAN_HEAD_IK(iLocal_383, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_383, 13, true);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_383, false);
	iLocal_380 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_392, 26, joaat("S_M_M_HighSec_01"), 2, true, true);
	PED::SET_PED_ACCURACY(iLocal_380, (iLocal_52 - iLocal_53));
	PED::SET_PED_SHOOT_RATE(iLocal_380, (iLocal_54 + iLocal_55));
	PED::SET_PED_CONFIG_FLAG(iLocal_380, 324, true);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_380, joaat("WEAPON_ADVANCEDRIFLE"), -1, false, false);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iLocal_380, joaat("WEAPON_ADVANCEDRIFLE"), joaat("COMPONENT_AT_AR_FLSH"));
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iLocal_380, joaat("WEAPON_ADVANCEDRIFLE"), joaat("COMPONENT_AT_SCOPE_SMALL"));
	WEAPON::SET_CURRENT_PED_WEAPON(iLocal_380, joaat("WEAPON_ADVANCEDRIFLE"), true);
	PED::SET_PED_KEEP_TASK(iLocal_380, true);
	PED::SET_PED_COMBAT_RANGE(iLocal_380, 2);
	PED::SET_PED_HEARING_RANGE(iLocal_380, 400f);
	PED::SET_PED_SEEING_RANGE(iLocal_380, 400f);
	PED::SET_PED_ID_RANGE(iLocal_380, 400f);
	PED::SET_PED_FIRING_PATTERN(iLocal_380, joaat("FIRING_PATTERN_FULL_AUTO"));
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_380, 2, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_380, 3, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_380, iLocal_196);
	TASK::TASK_LOOK_AT_ENTITY(iLocal_380, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_380, true, 0f);
	iLocal_378[5] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_392, 26, joaat("S_M_M_HighSec_01"), 0, true, true);
	PED::SET_PED_ACCURACY(iLocal_378[5], iLocal_52);
	PED::SET_PED_SHOOT_RATE(iLocal_378[5], iLocal_54);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_378[5], joaat("WEAPON_COMBATPISTOL"), -1, false, false);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iLocal_378[5], joaat("WEAPON_COMBATPISTOL"), joaat("COMPONENT_AT_PI_FLSH"));
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_378[5], 12, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_378[5], iLocal_196);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_378[5], true, 0f);
	PED::SET_PED_CONFIG_FLAG(iLocal_378[5], 324, true);
	iLocal_393[2] = VEHICLE::CREATE_VEHICLE(joaat("sentinel"), Local_58[2 /*3*/], fLocal_69[2], true, true, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_393[2], 5f);
	VEHICLE::SET_VEHICLE_COLOURS(iLocal_393[2], iLocal_57, iLocal_57);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_393[2], 0, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_393[2], true);
	VEHICLE::SET_VEHICLE_MOD_KIT(iLocal_393[2], 0);
	VEHICLE::SET_VEHICLE_WINDOW_TINT(iLocal_393[2], 2);
	VEHICLE::SET_VEHICLE_MOD(iLocal_393[2], 15, 1, false);
	VEHICLE::SET_VEHICLE_MOD(iLocal_393[2], 11, 1, false);
	VEHICLE::SET_VEHICLE_MOD(iLocal_393[2], 12, 0, false);
	VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_393[2], 18, true);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iLocal_393[2], 0);
	iLocal_381[2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_393[2], 26, joaat("S_M_M_HighSec_01"), -1, true, true);
	PED::SET_DRIVER_ABILITY(iLocal_381[2], 1f);
	PED::SET_DRIVER_RACING_MODIFIER(iLocal_381[2], 1f);
	PED::SET_PED_ACCURACY(iLocal_381[2], iLocal_52);
	PED::SET_PED_SHOOT_RATE(iLocal_381[2], iLocal_54);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_381[2], true, 1);
	PED::SET_PED_KEEP_TASK(iLocal_381[2], true);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_381[2], joaat("WEAPON_PISTOL"), -1, false, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_381[2], 2, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_381[2], 12, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_381[2], iLocal_196);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_381[2], true, 0f);
	PED::SET_PED_CONFIG_FLAG(iLocal_381[2], 324, true);
	iLocal_382[2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_393[2], 26, joaat("S_M_M_HighSec_01"), 0, true, true);
	PED::SET_PED_ACCURACY(iLocal_382[2], iLocal_52);
	PED::SET_PED_SHOOT_RATE(iLocal_382[2], iLocal_54);
	PED::SET_PED_KEEP_TASK(iLocal_382[2], true);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_382[2], joaat("WEAPON_COMBATPISTOL"), -1, false, false);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iLocal_382[2], joaat("WEAPON_COMBATPISTOL"), joaat("COMPONENT_AT_PI_FLSH"));
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_382[2], 2, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_382[2], 13, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_382[2], iLocal_196);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_382[2], true, 0f);
	PED::SET_PED_CONFIG_FLAG(iLocal_382[2], 324, true);
	iLocal_393[3] = VEHICLE::CREATE_VEHICLE(joaat("sentinel"), Local_58[3 /*3*/], fLocal_69[3], true, true, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_393[3], 5f);
	VEHICLE::SET_VEHICLE_COLOURS(iLocal_393[3], iLocal_57, iLocal_57);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_393[3], 0, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_393[3], true);
	VEHICLE::SET_VEHICLE_MOD_KIT(iLocal_393[3], 0);
	VEHICLE::SET_VEHICLE_WINDOW_TINT(iLocal_393[3], 2);
	VEHICLE::SET_VEHICLE_MOD(iLocal_393[3], 15, 1, false);
	VEHICLE::SET_VEHICLE_MOD(iLocal_393[3], 11, 1, false);
	VEHICLE::SET_VEHICLE_MOD(iLocal_393[3], 12, 0, false);
	VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_393[3], 18, true);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iLocal_393[3], 0);
	iLocal_381[3] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_393[3], 26, joaat("S_M_M_HighSec_01"), -1, true, true);
	PED::SET_DRIVER_ABILITY(iLocal_381[3], 1f);
	PED::SET_DRIVER_RACING_MODIFIER(iLocal_381[3], 1f);
	PED::SET_PED_ACCURACY(iLocal_381[3], iLocal_52);
	PED::SET_PED_SHOOT_RATE(iLocal_381[3], iLocal_54);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_381[3], true, 1);
	PED::SET_PED_KEEP_TASK(iLocal_381[3], true);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_381[3], joaat("WEAPON_PISTOL"), -1, false, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_381[3], 2, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_381[3], 12, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_381[3], iLocal_196);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_381[3], true, 0f);
	PED::SET_PED_CONFIG_FLAG(iLocal_381[3], 324, true);
	iLocal_382[3] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_393[3], 26, joaat("S_M_M_HighSec_01"), 0, true, true);
	PED::SET_PED_ACCURACY(iLocal_382[3], iLocal_52);
	PED::SET_PED_SHOOT_RATE(iLocal_382[3], iLocal_54);
	PED::SET_PED_KEEP_TASK(iLocal_382[3], true);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_382[3], joaat("WEAPON_PISTOL"), -1, false, false);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iLocal_382[3], joaat("WEAPON_PISTOL"), joaat("COMPONENT_AT_PI_FLSH"));
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_382[3], 2, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_382[3], 13, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_382[3], iLocal_196);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_382[3], true, 0f);
	PED::SET_PED_CONFIG_FLAG(iLocal_382[3], 324, true);
	if (__LIB_1__::func_197(iLocal_378[0]))
	{
		PED::SET_PED_ACCURACY(iLocal_378[0], iLocal_52);
		PED::SET_PED_SHOOT_RATE(iLocal_378[0], iLocal_54);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_378[0], joaat("WEAPON_SMG"), -1, false, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_378[0], 12, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_378[0], 1, false);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_378[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_378[0], iLocal_196);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_378[0], true, 0f);
		PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_378[0], false);
		PED::SET_PED_CONFIG_FLAG(iLocal_378[0], 324, true);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_378[0], 0, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_378[0], 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_378[0], 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_378[0], 8, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_378[0], 11, 1, 0, 0);
	}
	if (__LIB_1__::func_197(iLocal_378[2]))
	{
		PED::SET_PED_ACCURACY(iLocal_378[2], iLocal_52);
		PED::SET_PED_SHOOT_RATE(iLocal_378[2], iLocal_54);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_378[2], joaat("WEAPON_SMG"), -1, false, false);
		WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iLocal_378[2], joaat("WEAPON_SMG"), joaat("COMPONENT_AT_AR_FLSH"));
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_378[2], 12, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_378[2], 1, false);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_378[2], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_378[2], iLocal_196);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_378[2], true, 0f);
		PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_378[2], false);
		PED::SET_PED_CONFIG_FLAG(iLocal_378[2], 324, true);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_378[2], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_378[2], 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_378[2], 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_378[2], 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_378[2], 11, 0, 0, 0);
	}
	iLocal_378[3] = PED::CREATE_PED(26, joaat("S_M_M_HighSec_01"), Local_59[3 /*3*/], fLocal_70[3], true, true);
	PED::SET_PED_ACCURACY(iLocal_378[3], iLocal_52);
	PED::SET_PED_SHOOT_RATE(iLocal_378[3], iLocal_54);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_378[3], joaat("WEAPON_SMG"), -1, false, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_378[3], 12, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_378[3], 1, false);
	TASK::TASK_LOOK_AT_ENTITY(iLocal_378[3], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_378[3], iLocal_196);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_378[3], true, 0f);
	TASK::TASK_PLAY_ANIM(iLocal_378[3], "rcmepsilonism8", "security_idle", 4f, -4f, -1, 1, 0f, false, false, false);
	PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_378[3], false);
	PED::SET_PED_CONFIG_FLAG(iLocal_378[3], 324, true);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_378[3], 0, 1, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_378[3], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_378[3], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_378[3], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_378[3], 11, 0, 0, 0);
	iLocal_378[4] = PED::CREATE_PED(26, joaat("S_M_M_HighSec_01"), Local_59[4 /*3*/], fLocal_70[4], true, true);
	PED::SET_PED_ACCURACY(iLocal_378[4], iLocal_52);
	PED::SET_PED_SHOOT_RATE(iLocal_378[4], iLocal_54);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_378[4], joaat("WEAPON_SMG"), -1, false, false);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iLocal_378[4], joaat("WEAPON_SMG"), joaat("COMPONENT_AT_AR_FLSH"));
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_378[4], 13, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_378[4], 1, false);
	TASK::TASK_LOOK_AT_ENTITY(iLocal_378[4], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_378[4], iLocal_196);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_378[4], true, 0f);
	TASK::TASK_PLAY_ANIM(iLocal_378[4], "rcmepsilonism8", "security_idle", 4f, -4f, -1, 1, 0f, false, false, false);
	PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_378[4], false);
	PED::SET_PED_CONFIG_FLAG(iLocal_378[4], 324, true);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_378[4], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_378[4], 3, 0, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_378[4], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_378[4], 8, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_378[4], 11, 1, 0, 0);
	if (__LIB_1__::func_197(iLocal_381[0]))
	{
		PED::SET_DRIVER_ABILITY(iLocal_381[0], 1f);
		PED::SET_DRIVER_RACING_MODIFIER(iLocal_381[0], 1f);
		PED::SET_PED_ACCURACY(iLocal_381[0], iLocal_52);
		PED::SET_PED_SHOOT_RATE(iLocal_381[0], iLocal_54);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_381[0], joaat("WEAPON_COMBATPISTOL"), -1, false, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_381[0], 12, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_381[0], 2, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_381[0], iLocal_196);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_381[0], true, 0f);
		PED::SET_PED_CONFIG_FLAG(iLocal_381[0], 324, true);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_381[0], 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_381[0], 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_381[0], 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_381[0], 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_381[0], 11, 0, 0, 0);
	}
	if (__LIB_1__::func_197(iLocal_382[0]))
	{
		PED::SET_PED_ACCURACY(iLocal_382[0], iLocal_52);
		PED::SET_PED_SHOOT_RATE(iLocal_382[0], iLocal_54);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_382[0], joaat("WEAPON_MICROSMG"), -1, false, false);
		WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iLocal_382[0], joaat("WEAPON_MICROSMG"), joaat("COMPONENT_AT_PI_FLSH"));
		WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iLocal_382[0], joaat("WEAPON_MICROSMG"), joaat("COMPONENT_AT_SCOPE_MACRO"));
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_382[0], 2, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_382[0], 13, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_382[0], iLocal_196);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_382[0], true, 0f);
		PED::SET_PED_CONFIG_FLAG(iLocal_382[0], 324, true);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_382[0], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_382[0], 3, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_382[0], 4, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_382[0], 8, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_382[0], 11, 0, 1, 0);
	}
	__LIB_0__::func_203(&uLocal_198, 8, iLocal_383, "EPSGUARD", 0, 1);
	__LIB_0__::func_203(&uLocal_198, 3, iLocal_379, "EPSPILOT", 0, 1);
	__LIB_0__::func_203(&uLocal_198, 5, iLocal_378[0], "EPSGUARD2", 0, 1);
	__LIB_0__::func_203(&uLocal_198, 6, iLocal_378[3], "EPSGUARD7", 0, 1);
	__LIB_0__::func_203(&uLocal_198, 7, iLocal_378[4], "EPSGUARD8", 0, 1);
	__LIB_24__::func_951(1, 0, 0);
	__LIB_24__::func_951(60, 0, 0);
	__LIB_24__::func_951(55, 0, 0);
	func_125(PLAYER::PLAYER_PED_ID(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(12, true);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(2, true);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(5, true);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(3, true);
	iLocal_113 = MISC::GET_GAME_TIMER();
}

void func_366()//Position - 0x32395
{
	while (((((((((!STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_HighSec_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_Epsilon_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) || !STREAMING::HAS_MODEL_LOADED(joaat("maverick"))) || !STREAMING::HAS_MODEL_LOADED(joaat("p_ld_heist_bag_s_1"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(222, "Ep8Heli01")) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmepsilonism8")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Eps8EPED")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Eps8LS01")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud"))
	{
		SYSTEM::WAIT(0);
	}
}

void func_367()//Position - 0x3243F
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_395))
	{
		iLocal_395 = VEHICLE::CREATE_VEHICLE(joaat("tailgater"), Local_62, fLocal_73, true, true, false);
		__LIB_0__::func_501(iLocal_395, 0);
		VEHICLE::SET_VEHICLE_COLOURS(iLocal_395, iLocal_57, iLocal_57);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_395, 0, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iLocal_395, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_395, "K1FFL0M");
	}
	if (__LIB_1__::func_183(iLocal_395))
	{
		iLocal_93 = ENTITY::GET_ENTITY_HEALTH(iLocal_395);
		fLocal_75 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_395);
		fLocal_76 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_395);
		ENTITY::SET_ENTITY_HEALTH(iLocal_395, (iLocal_93 + (iLocal_93 / 3)), 0);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_395, (fLocal_75 + (fLocal_75 / 3f)));
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_395, (fLocal_76 + (fLocal_76 / 3f)));
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_395, false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_395, false);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_395, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_395, true);
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_395, 5, false);
		VEHICLE::ADD_VEHICLE_STUCK_CHECK_WITH_WARP(iLocal_395, 0.2f, 1000, false, false, false, -1);
		iLocal_384[0] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s_1"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_395, 0f, 0f, 10f), true, true, false);
		iLocal_384[1] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s_1"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_395, 0f, 0f, 11f), true, true, false);
		iLocal_384[2] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s_1"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_395, 0f, 0f, 12f), true, true, false);
		iLocal_384[3] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s_1"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_395, 0f, 0f, 13f), true, true, false);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_384[0], iLocal_395, 0, -0.06f, -1.93f, -0.1f, 0f, 0f, 91f, false, false, false, false, 2, true, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_384[1], iLocal_395, 0, 0.2f, -1.92f, -0.1f, 0f, 0f, 93f, false, false, false, false, 2, true, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_384[2], iLocal_395, 0, 0.4f, -1.94f, -0.1f, 0f, 0f, 89f, false, false, false, false, 2, true, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_384[3], iLocal_395, 0, 0.66f, -1.95f, -0.1f, 0f, 0f, 89f, false, false, false, false, 2, true, 0);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_395, 1);
		if (!__LIB_0__::func_295())
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, -1);
			}
		}
	}
	MISC::CLEAR_AREA_OF_VEHICLES(-567.6498f, -2.9035f, 43.3971f, 400f, true, false, false, false, false, false, 0);
	PED::SET_PED_NON_CREATION_AREA(-711.6323f, 42.0868f, 14.5077f, -663.5175f, 118.0403f, 86.0362f);
}

void func_369()//Position - 0x326CF
{
	int iVar0;
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::THEFEED_HIDE_THIS_FRAME();
	switch (iLocal_375)
	{
		case 0:
			if (iLocal_130 == 0)
			{
				__LIB_26__::func_478("ep_8_rcm", 0);
				if (!CAM::DOES_CAM_EXIST(iLocal_390))
				{
					iLocal_390 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
				}
				if (!CAM::DOES_CAM_EXIST(iLocal_391))
				{
					iLocal_391 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
				}
				CAM::SET_CAM_PARAMS(iLocal_390, -692.1f, 18.8f, 40.3f, 0.7f, 0f, 24.5f, 50f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iLocal_391, -691.8f, 18.9f, 42.9f, 22.2f, 0f, 24.8f, 50f, 0, 1, 1, 2);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 128);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -677.9299f, 31.374311f, 37.97105f, -677.72626f, 51.893734f, 48.20758f, 25f, false, true, 0))
					{
						__LIB_10__::func_701(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -676.7216f, 46.6862f, 41.7595f, 91.6871f, 0, 1);
						__LIB_10__::func_701(PLAYER::PLAYER_PED_ID(), -682.9754f, 48.252f, 42.1423f, 107.7723f, 0, 1);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -696.1459f, 41.7659f, 42.218f, 1f, -1, 1f, 0, 25.269f);
					}
					else
					{
						__LIB_10__::func_701(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -719.0406f, 32.5248f, 41.7419f, 287.2928f, 0, 1);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 5f);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -703.656f, 37.143f, 42.2135f, 3f, 0, 0, 262144, 6f, 100f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -696.1459f, 41.7659f, 42.218f, 1f, -1, 1f, 0, 25.269f);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					}
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -696.1459f, 41.7659f, 42.218f, 1f, -1, 1f, 0, 25.269f);
				}
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_391, iLocal_390, 6200, 1, 1);
				iLocal_129 = MISC::GET_GAME_TIMER();
				iLocal_130 = 1;
			}
			else if (iLocal_130 == 1)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (__LIB_0__::func_121(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -703.656f, 37.143f, 42.2135f, 9f, 9f, 9f, false, true, 0))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 5f);
						}
					}
				}
				if (MISC::GET_GAME_TIMER() > iLocal_129 + 6000 || __LIB_6__::func_841(1000))
				{
					iLocal_130 = 2;
				}
			}
			else if (iLocal_130 == 2)
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (func_235(PLAYER::PLAYER_PED_ID(), 12, 8))
					{
						__LIB_38__::func_130("Michael", joaat("Player_Zero"), 8);
					}
					if (func_235(PLAYER::PLAYER_PED_ID(), 12, 28))
					{
						__LIB_38__::func_130("Michael", joaat("Player_Zero"), 28);
					}
				}
				if (__LIB_18__::func_170(1, 1093140480, 0))
				{
					iLocal_186 = 0;
					iLocal_187 = 0;
					iLocal_189 = 0;
					iLocal_188 = 0;
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_395, false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_395, "epsilon_car", 0, joaat("tailgater"), 32);
					}
					RECORDING::REPLAY_START_EVENT(1);
					__LIB_26__::func_252();
					CUTSCENE::START_CUTSCENE(0);
					CUTSCENE::SET_VEHICLE_MODEL_PLAYER_WILL_EXIT_SCENE(joaat("tailgater"));
					SYSTEM::WAIT(0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::DESTROY_CAM(iLocal_390, false);
					CAM::DESTROY_CAM(iLocal_391, false);
					__LIB_32__::func_742(-702.0282f, 38.177532f, 46.45677f, -659.6471f, 47.08546f, 38.1703f, 16f, -717.3519f, 34.7669f, 42.0465f, 289.3352f, 1, 1, 1, 0, 0);
					__LIB_41__::func_636(0f, 0f, 0f, 0f, 1, 0);
					func_380(-697.75f, 45.38f, 43.03f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					MISC::CLEAR_AREA_OF_VEHICLES(-651.949f, 62.916f, 44.7353f, 150f, false, false, false, false, false, false, 0);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(-651.3148f, 121.844025f, 63.45312f, -650.0618f, 0.95496f, 35.754333f, 41.75f, false, false, true);
					iLocal_375 = 1;
				}
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					RECORDING::REPLAY_STOP_EVENT();
					if (__LIB_1__::func_183(iLocal_395))
					{
						if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
							{
								PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, -1);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
							}
							iLocal_186 = 1;
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("epsilon_car", 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_395, false))
					{
					}
					iLocal_189 = 1;
				}
				if (iLocal_189 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_395, false))
					{
						VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_395, true, true, true);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Cris", 0))
				{
					iLocal_187 = 1;
				}
				CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
			}
			else
			{
				iLocal_375 = 2;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				iLocal_188 = 1;
			}
			if (iLocal_186 == 0 || CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (((iLocal_186 == 1 && iLocal_187 == 1) && iLocal_189 == 1) && iLocal_188 == 1)
			{
				iLocal_375 = 2;
			}
			break;
		case 2:
			if (!iLocal_192)
			{
				AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LOS_SANTOS_EPSILONISM_BUILDING_01", false);
				AUDIO::TRIGGER_MUSIC_EVENT("EPS8_START");
				iLocal_192 = 1;
			}
			if (Global_113386.f_18574.f_387 == 0)
			{
				__LIB_40__::func_982(0, 29, 50000);
				Global_113386.f_18574.f_387 = 1;
			}
			__LIB_32__::func_576(1, 1, 1, 1);
			if (__LIB_1__::func_183(iLocal_395))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_395, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_395, 1);
			}
			iLocal_376 = 2;
			break;
	}
}

void func_380(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x32FED
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
					if (func_235(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_125(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_235(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_125(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_235(PLAYER::PLAYER_PED_ID(), 8, 1) || func_235(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_125(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_235(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_125(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

void func_449()//Position - 0x3A5D8
{
	if (__LIB_0__::func_294() == 1 && iLocal_165 == 0)
	{
		func_452();
	}
	else
	{
		func_451();
		func_450();
		iLocal_376 = 1;
	}
}

void func_450()//Position - 0x3A606
{
	struct<3> Var0;
	struct<3> Var1;
	if (__LIB_1__::func_183(Local_41.f_35[1]))
	{
		iLocal_395 = Local_41.f_35[1];
		Local_41.f_35[1] = 0;
		__LIB_0__::func_501(iLocal_395, 0);
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_395, true) };
		if (((Var0.f_0 < (Local_62.f_0 - 0.01f) || Var0.f_0 > (Local_62.f_0 + 0.01f)) || Var0.f_1 < (Local_62.f_1 - 0.01f)) || Var0.f_1 > (Local_62.f_1 + 0.01f))
		{
			__LIB_10__::func_701(iLocal_395, Local_62, fLocal_73, 0, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_395, 5f);
		}
	}
	else
	{
		iLocal_395 = VEHICLE::CREATE_VEHICLE(joaat("tailgater"), Local_62, fLocal_73, true, true, false);
		__LIB_0__::func_501(iLocal_395, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iLocal_395, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_395, "K1FFL0M");
		VEHICLE::SET_VEHICLE_COLOURS(iLocal_395, iLocal_57, iLocal_57);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_395, 0, 0);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_395, 5f);
	}
	if (__LIB_1__::func_183(Local_41.f_35[0]))
	{
		iLocal_393[0] = Local_41.f_35[0];
		Local_41.f_35[0] = 0;
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_393[0], 1);
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_395, true) };
		if (((Var1.f_0 < (Local_58[0 /*3*/] - 0.01f) || Var1.f_0 > (Local_58[0 /*3*/] + 0.01f)) || Var1.f_1 < (Local_58[0 /*3*/].f_1 - 0.01f)) || Var1.f_1 > (Local_58[0 /*3*/].f_1 + 0.01f))
		{
			__LIB_10__::func_701(iLocal_393[0], Local_58[0 /*3*/], fLocal_69[0], 0, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_393[0], 5f);
		}
	}
	else
	{
		iLocal_393[0] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), Local_58[0 /*3*/], fLocal_69[0], true, true, false);
		VEHICLE::SET_VEHICLE_COLOURS(iLocal_393[0], iLocal_57, iLocal_57);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_393[0], 0, 0);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_393[0], 5f);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iLocal_393[0], 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_381[0]))
	{
		iLocal_381[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_393[0], 26, joaat("S_M_M_HighSec_01"), -1, true, true);
	}
	if (__LIB_1__::func_197(iLocal_381[0]))
	{
		func_125(iLocal_381[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		__LIB_0__::func_203(&uLocal_198, 5, iLocal_381[0], "EPSGUARD2", 0, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_382[0]))
	{
		iLocal_382[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_393[0], 26, joaat("S_M_M_HighSec_01"), 0, true, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_378[0]))
	{
		iLocal_378[0] = PED::CREATE_PED(26, joaat("S_M_M_HighSec_01"), Local_59[0 /*3*/], fLocal_70[0], true, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_378[2]))
	{
		iLocal_378[2] = PED::CREATE_PED(26, joaat("S_M_M_HighSec_01"), Local_59[2 /*3*/], fLocal_70[2], true, true);
	}
}

void func_451()//Position - 0x3A8EE
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(222, "Ep8Heli01");
	TASK::REQUEST_WAYPOINT_RECORDING("Eps8EPED");
	TASK::REQUEST_WAYPOINT_RECORDING("Eps8LS01");
	STREAMING::REQUEST_ANIM_DICT("rcmepsilonism8");
	STREAMING::REQUEST_MODEL(joaat("S_M_M_HighSec_01"));
	STREAMING::REQUEST_MODEL(joaat("A_M_Y_Epsilon_01"));
	STREAMING::REQUEST_MODEL(joaat("sentinel"));
	STREAMING::REQUEST_MODEL(joaat("maverick"));
	STREAMING::REQUEST_MODEL(joaat("landstalker"));
	STREAMING::REQUEST_MODEL(joaat("tailgater"));
	STREAMING::REQUEST_MODEL(joaat("p_ld_heist_bag_s_1"));
	TASK::REQUEST_WAYPOINT_RECORDING("Eps8TRAFFIC01");
	TASK::REQUEST_WAYPOINT_RECORDING("Eps8TRAFFIC02");
	TASK::REQUEST_WAYPOINT_RECORDING("Eps8TRAFFIC03");
	TASK::REQUEST_WAYPOINT_RECORDING("Eps8TRAFFIC04");
	TASK::REQUEST_WAYPOINT_RECORDING("Eps8TRAFFIC05");
	TASK::REQUEST_WAYPOINT_RECORDING("Eps8TRAFFIC06");
	STREAMING::REQUEST_MODEL(joaat("taxi"));
	STREAMING::REQUEST_MODEL(joaat("sadler"));
	STREAMING::REQUEST_MODEL(joaat("habanero"));
	STREAMING::REQUEST_MODEL(joaat("schafter2"));
	STREAMING::REQUEST_MODEL(joaat("rumpo"));
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", false);
	HUD::REQUEST_ADDITIONAL_TEXT("EPS8", 0);
	while (((!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !STREAMING::HAS_MODEL_LOADED(joaat("landstalker"))) || !STREAMING::HAS_MODEL_LOADED(joaat("tailgater"))) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_HighSec_01")))
	{
		SYSTEM::WAIT(0);
	}
	Local_66 = { -281.6395f, -102.0944f, 45.8373f };
	Local_67 = { -409.0169f, -58.1734f, 43.6077f };
	Local_62 = { -697.32153f, 39.0406f, 42.867363f };
	fLocal_73 = -66.98854f;
	Local_60 = { -357.1071f, -91.7128f, 45.0982f };
	fLocal_72 = 8.7486f;
	Local_58[0 /*3*/] = { -686.5046f, 43.9098f, 42.2067f };
	Local_58[1 /*3*/] = { 188.3458f, 169.2785f, 104.3145f };
	Local_58[2 /*3*/] = { -410.1774f, -68.8325f, 42.4324f };
	Local_58[3 /*3*/] = { -656.588f, 56.539f, 42.719f };
	Local_58[4 /*3*/] = { 299.5176f, -11.642f, 76.1623f };
	Local_58[5 /*3*/] = { 175.4031f, 93.0495f, 87.8098f };
	Local_58[6 /*3*/] = { 257.4567f, 161.3084f, 103.6166f };
	fLocal_69[0] = 296.81f;
	fLocal_69[1] = 162.1519f;
	fLocal_69[2] = 317.5537f;
	fLocal_69[3] = 176.3863f;
	fLocal_69[4] = 157.9f;
	fLocal_69[5] = 340.5091f;
	fLocal_69[6] = 249.2435f;
	Local_59[0 /*3*/] = { -726.4555f, 33.335682f, 43.22695f };
	Local_59[1 /*3*/] = { 222.146f, 206.6046f, 104.4984f };
	Local_59[2 /*3*/] = { -666.5512f, 49.197594f, 42.071537f };
	Local_59[3 /*3*/] = { -379.9735f, -73.8836f, 44.6215f };
	Local_59[4 /*3*/] = { -378.7636f, -86.7811f, 44.6579f };
	Local_59[5 /*3*/] = { -374.7542f, -81.9368f, 44.6577f };
	Local_59[6 /*3*/] = { 248.7298f, 109.6775f, 101.4054f };
	fLocal_70[0] = -147.8099f;
	fLocal_70[1] = 129.6183f;
	fLocal_70[2] = -171.68027f;
	fLocal_70[3] = 340.8513f;
	fLocal_70[4] = 256.0816f;
	fLocal_70[5] = 251.5665f;
	fLocal_70[6] = 23.1111f;
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("landstalker"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sentinel"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sentinel2"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_F_Y_Epsilon_01"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_M_Y_Epsilon_01"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_M_Y_Epsilon_02"), true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-375.76f, -101.27f, 42.79f, -344.3f, -100.84f, 48.77f, false, true);
	__LIB_0__::func_203(&uLocal_198, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	__LIB_24__::func_951(51, 0, 0);
}

void func_452()//Position - 0x3ACAF
{
	__LIB_0__::func_370(-702.9905f, 37.0211f, 42.2136f, 292.7606f, 1, 0);
	__LIB_10__::func_696(0, 0);
	func_451();
	func_450();
	func_367();
	func_366();
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, true, false, false, false);
	MISC::CLEAR_AREA(-661.5685f, 45.5499f, 40.0669f, 20f, true, false, false, false);
	__LIB_6__::func_775(iLocal_395, -1, 1);
	func_357();
	func_356();
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	__LIB_0__::func_210("EPS8_05", 7500, 0);
	iLocal_166 = 1;
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LOS_SANTOS_EPSILONISM_BUILDING_01", false);
	AUDIO::TRIGGER_MUSIC_EVENT("EPS8_START");
	__LIB_0__::func_84(800, 0);
	__LIB_32__::func_751(1, 1, 1);
	iLocal_376 = 3;
}

void func_457()//Position - 0x3AF37
{
	float fVar0;
	var uVar1;
	struct<6> Var2;
	if ((((iLocal_376 == 3 || iLocal_376 == 4) || iLocal_376 == 5) || iLocal_376 == 6) || iLocal_376 == 7)
	{
		if (iLocal_134 == 1)
		{
			if (__LIB_1__::func_197(iLocal_383))
			{
				if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_383, "rcmepsilonism8", "worship_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_383, "rcmepsilonism8", "worship_base", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_383, "rcmepsilonism8", "worship_idle_a", 3))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_383, "rcmepsilonism8", "worship_exit", 3))
					{
						iLocal_78 = 0;
						func_461();
						func_95();
					}
					else if (ENTITY::FIND_ANIM_EVENT_PHASE("rcmepsilonism8", "worship_exit", "WalkInterruptible", &fVar0, &uVar1) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_383, "rcmepsilonism8", "worship_exit") >= fVar0)
					{
						PED::FORCE_PED_MOTION_STATE(iLocal_383, joaat("MotionState_Run"), false, 0, false);
						PED::SET_PED_KEEP_TASK(iLocal_383, true);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_383, -355.739f, -181.6352f, 36.7355f, 2f, -1, 3f, 0, 40000f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_383, false);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_383);
						iLocal_78 = 0;
						func_461();
						func_95();
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_383, "rcmepsilonism8", "worship_exit") >= 0.88f)
					{
						PED::FORCE_PED_MOTION_STATE(iLocal_383, joaat("MotionState_Run"), false, 0, false);
						PED::SET_PED_KEEP_TASK(iLocal_383, true);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_383, -355.739f, -181.6352f, 36.7355f, 2f, -1, 3f, 0, 40000f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_383, false);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_383);
						iLocal_78 = 0;
						func_461();
						func_95();
					}
				}
			}
		}
		if (iLocal_133 == 1)
		{
			Var2 = { __LIB_0__::func_390() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var2, "EPS8_ESC") || MISC::ARE_STRINGS_EQUAL(&Var2, "EPS8_E1"))
				{
					__LIB_6__::func_771();
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_131))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_395, -8f, true);
			}
		}
		if (!__LIB_0__::func_75() || !iLocal_161 == 1)
		{
			if (iLocal_133 == 1)
			{
				if (__LIB_1__::func_197(iLocal_378[5]))
				{
					PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_378[5]);
				}
				__LIB_9__::func_981(&uLocal_363, 0, 0);
				__LIB_6__::func_771();
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				__LIB_0__::func_523(&iLocal_430);
				__LIB_0__::func_202(&uLocal_198, 6);
				__LIB_0__::func_202(&uLocal_198, 7);
				__LIB_0__::func_202(&uLocal_198, 4);
				__LIB_0__::func_203(&uLocal_198, 6, 0, "EPSGUARD4", 0, 1);
				__LIB_0__::func_203(&uLocal_198, 7, 0, "EPSGUARD8", 0, 1);
				__LIB_0__::func_203(&uLocal_198, 4, 0, "CRIS", 0, 1);
				func_458();
				func_13();
				if (__LIB_1__::func_197(iLocal_383))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_383, true);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_383, true, 0f);
					if (__LIB_0__::func_121(iLocal_392) && PED::IS_PED_IN_VEHICLE(iLocal_383, iLocal_392, false))
					{
						PED::SET_PED_ACCURACY(iLocal_383, (iLocal_52 - iLocal_53));
						PED::SET_PED_SHOOT_RATE(iLocal_383, (iLocal_54 + iLocal_55));
						PED::SET_PED_CONFIG_FLAG(iLocal_383, 324, true);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_383, joaat("WEAPON_ADVANCEDRIFLE"), -1, false, false);
						WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iLocal_383, joaat("WEAPON_ADVANCEDRIFLE"), joaat("COMPONENT_AT_AR_FLSH"));
						WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iLocal_383, joaat("WEAPON_ADVANCEDRIFLE"), joaat("COMPONENT_AT_SCOPE_SMALL"));
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_383, joaat("WEAPON_ADVANCEDRIFLE"), true);
						PED::SET_PED_KEEP_TASK(iLocal_383, true);
						PED::SET_PED_COMBAT_RANGE(iLocal_383, 2);
						PED::SET_PED_HEARING_RANGE(iLocal_383, 400f);
						PED::SET_PED_SEEING_RANGE(iLocal_383, 400f);
						PED::SET_PED_ID_RANGE(iLocal_383, 400f);
						PED::SET_PED_FIRING_PATTERN(iLocal_383, joaat("FIRING_PATTERN_FULL_AUTO"));
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_383, 2, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_383, 3, false);
						TASK::TASK_COMBAT_PED(iLocal_383, PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-651.3148f, 121.844025f, 63.45312f, -650.0618f, 0.95496f, 35.754333f, 41.75f, false, true, true);
				MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(5, false);
				MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(3, false);
				iLocal_78 = 0;
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_378[5], false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_384[0], false))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_384[0], iLocal_378[5]))
						{
							ENTITY::DETACH_ENTITY(iLocal_384[0], true, true);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_384[1], false))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_384[1], iLocal_378[5]))
						{
							ENTITY::DETACH_ENTITY(iLocal_384[1], true, true);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_384[2], false))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_384[2], iLocal_378[5]))
						{
							ENTITY::DETACH_ENTITY(iLocal_384[2], true, true);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_384[3], false))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_384[3], iLocal_378[5]))
						{
							ENTITY::DETACH_ENTITY(iLocal_384[3], true, true);
						}
					}
				}
				iLocal_112 = MISC::GET_GAME_TIMER();
				HUD::CLEAR_PRINTS();
				if (iLocal_151 == 0)
				{
					if (iLocal_148 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_395, false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_395, false))
							{
								if (iLocal_80 != iLocal_79)
								{
									if (iLocal_136 == 0)
									{
										__LIB_0__::func_210("EPS8_12", 7500, 0);
									}
									iLocal_150 = 1;
								}
							}
							else if ((iLocal_376 == 5 || iLocal_376 == 6) || iLocal_376 == 7)
							{
								__LIB_0__::func_210("EPS8_11", 7500, 0);
							}
						}
					}
					else if (iLocal_80 != iLocal_79)
					{
						if (iLocal_136 == 0)
						{
							__LIB_0__::func_210("EPS8_12", 7500, 0);
						}
						iLocal_150 = 1;
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(iLocal_431))
				{
					iLocal_431 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_384[3]);
					HUD::SET_BLIP_COLOUR(iLocal_431, 2);
					HUD::SET_BLIP_SCALE(iLocal_431, fLocal_47);
					__LIB_0__::func_210("EPS8_21", 7500, 0);
				}
				if (!BitTest(Global_113386.f_18574.f_382, 1))
				{
					MISC::SET_BIT(&(Global_113386.f_18574.f_382), 1);
				}
				iLocal_376 = 8;
			}
		}
	}
}

void func_458()//Position - 0x3B4D6
{
	if (__LIB_1__::func_183(iLocal_393[0]))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_393[0], "EPSILONISM_08_CLOSE_CAR_MG", 0f);
	}
	if (__LIB_1__::func_183(iLocal_393[1]))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_393[1], "EPSILONISM_08_CLOSE_CAR_MG", 0f);
	}
	if (__LIB_1__::func_183(iLocal_393[2]))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_393[2], "EPSILONISM_08_CLOSE_CAR_MG", 0f);
	}
	if (__LIB_1__::func_183(iLocal_393[3]))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_393[3], "EPSILONISM_08_CLOSE_CAR_MG", 0f);
	}
	if (__LIB_1__::func_183(iLocal_393[4]))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_393[4], "EPSILONISM_08_CLOSE_CAR_MG", 0f);
	}
	if (__LIB_1__::func_183(iLocal_393[5]))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_393[5], "EPSILONISM_08_CLOSE_CAR_MG", 0f);
	}
	if (__LIB_1__::func_183(iLocal_393[6]))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_393[6], "EPSILONISM_08_CLOSE_CAR_MG", 0f);
	}
}

void func_461()//Position - 0x3B5DA
{
	int iVar0;
	__LIB_0__::func_523(&iLocal_429);
	if (__LIB_1__::func_197(iLocal_383))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_383);
	}
	if (__LIB_1__::func_183(iLocal_392))
	{
		if (__LIB_1__::func_197(iLocal_379))
		{
			if (iLocal_135 == 0)
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_392, true, true, false);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					Local_61 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				}
				iLocal_82 = SYSTEM::ROUND((Local_61.f_2 + 10f));
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_HELI_MISSION(0, iLocal_392, 0, 0, -582.5234f, -363.9155f, 498.4256f, 4, 200f, 2f, 130.0071f, 100, 30, -1f, 0);
				TASK::TASK_HELI_MISSION(0, iLocal_392, 0, 0, -1352.7047f, -2861.1943f, 498.4256f, 4, 200f, 2f, 183.7912f, 100, 30, -1f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_379, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				PED::SET_PED_KEEP_TASK(iLocal_379, true);
				iLocal_135 = 1;
			}
		}
	}
}

void func_462()//Position - 0x3B6CD
{
	if (iLocal_151 == 0)
	{
		if (iLocal_148 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_395))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_395, false))
				{
					if (iLocal_152 == 0)
					{
						iLocal_100 = MISC::GET_GAME_TIMER();
						iLocal_152 = 1;
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_100 + 100)
					{
						if (ENTITY::IS_ENTITY_IN_WATER(iLocal_395))
						{
							sLocal_194 = "EPS8_19";
						}
						else
						{
							sLocal_194 = "EPS8_18";
						}
						iLocal_376 = 10;
					}
				}
				else
				{
					if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_395, 0, 5000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_395, 1, 20000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_395, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_395, 3, 60000))
					{
						sLocal_194 = "EPS8_19";
						iLocal_376 = 10;
					}
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_395, false))
					{
						if (iLocal_152 == 0)
						{
							iLocal_100 = MISC::GET_GAME_TIMER();
							iLocal_152 = 1;
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_100 + 100)
						{
							sLocal_194 = "EPS8_19";
							iLocal_376 = 10;
						}
					}
					if (iLocal_376 != 7)
					{
						if (iLocal_144 == 0)
						{
							if (!__LIB_0__::func_508(iLocal_395, PLAYER::PLAYER_PED_ID(), 150f, 1))
							{
								if ((iLocal_121 != -1 && __LIB_1__::func_197(iLocal_378[iLocal_121])) && PED::IS_PED_IN_VEHICLE(iLocal_378[iLocal_121], iLocal_395, false))
								{
									__LIB_0__::func_210("EPS8_25", 7500, 0);
								}
								else
								{
									__LIB_0__::func_210("EPS8_16", 7500, 0);
								}
								iLocal_144 = 1;
							}
						}
						else if (!__LIB_0__::func_405("EPS8_25", 0, 0) && !__LIB_0__::func_405("EPS8_16", 0, 0))
						{
							if (!__LIB_0__::func_508(iLocal_395, PLAYER::PLAYER_PED_ID(), 230f, 1))
							{
								if ((iLocal_121 != -1 && __LIB_1__::func_197(iLocal_378[iLocal_121])) && PED::IS_PED_IN_VEHICLE(iLocal_378[iLocal_121], iLocal_395, false))
								{
									sLocal_194 = "EPS8_26";
								}
								else
								{
									sLocal_194 = "EPS8_17";
								}
								iLocal_376 = 10;
							}
							else if (__LIB_0__::func_508(iLocal_395, PLAYER::PLAYER_PED_ID(), 100f, 1))
							{
							}
						}
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_392))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_392, false))
			{
				sLocal_194 = "EPS8_18";
				iLocal_376 = 10;
			}
			else
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_392, false))
				{
					sLocal_194 = "EPS8_18";
					iLocal_376 = 10;
				}
				if (iLocal_376 != 7)
				{
					if (iLocal_144 == 0)
					{
						if (!__LIB_0__::func_508(iLocal_392, PLAYER::PLAYER_PED_ID(), 150f, 1))
						{
							__LIB_0__::func_210("EPS8_16", 7500, 0);
							iLocal_144 = 1;
						}
					}
					else if (!__LIB_0__::func_508(iLocal_392, PLAYER::PLAYER_PED_ID(), 230f, 1))
					{
						sLocal_194 = "EPS8_17";
						iLocal_376 = 10;
					}
					else if (__LIB_0__::func_508(iLocal_392, PLAYER::PLAYER_PED_ID(), 100f, 1))
					{
						iLocal_144 = 0;
					}
				}
			}
		}
	}
}

int func_487(var uParam0)//Position - 0x3C9F7
{
	int iVar0[3];
	int iVar1;
	iVar0[0] = joaat("landstalker");
	iVar0[1] = joaat("tailgater");
	iVar0[2] = joaat("S_M_M_HighSec_01");
	switch (iLocal_37)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -670.9681f, 53.530624f, 40.04339f };
			uParam0->f_17[1 /*3*/] = { -723.7632f, 34.054497f, 46.970173f };
			uParam0->f_24 = 19.75f;
			uParam0->f_27 = 1;
			uParam0->f_26 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "EP_8_RCM", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			iLocal_37 = 1;
			break;
		case 1:
			if (!__LIB_10__::func_716(&iVar0))
			{
				return 0;
			}
			iLocal_37 = 2;
			break;
		case 2:
			__LIB_20__::func_649(&(uParam0->f_35[0]), iVar0[0], -686.5046f, 43.9098f, 42.2067f, 296.81f);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 3);
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 157, 157);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_35[0], 0, 0);
			VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(uParam0->f_35[0], true);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uParam0->f_35[0], 0);
			__LIB_20__::func_649(&(uParam0->f_35[1]), iVar0[1], -697.32153f, 39.0406f, 42.867363f, -66.98854f);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[1], 3);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_35[1], "K1FFL0M");
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[1], 157, 157);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_35[1], 0, 0);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uParam0->f_35[1], 0);
			__LIB_11__::func_798(&(uParam0->f_28[0]), iVar0[2], -726.4555f, 33.335682f, 43.22695f, -147.8099f, 26);
			WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[0], joaat("WEAPON_SMG"), -1, false, false);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			PED::SET_PED_LEG_IK_MODE(uParam0->f_28[0], 2);
			TASK::TASK_START_SCENARIO_IN_PLACE(uParam0->f_28[0], "WORLD_HUMAN_GUARD_STAND", 0, false);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 1, 0, 0);
			__LIB_11__::func_798(&(uParam0->f_28[1]), iVar0[2], -666.5512f, 49.197594f, 42.071537f, -171.68027f, 26);
			WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[1], joaat("WEAPON_SMG"), -1, false, false);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[1], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			PED::SET_PED_LEG_IK_MODE(uParam0->f_28[1], 2);
			TASK::TASK_START_SCENARIO_IN_PLACE(uParam0->f_28[1], "WORLD_HUMAN_GUARD_STAND", 0, false);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
			__LIB_11__::func_798(&(uParam0->f_28[2]), iVar0[2], -690f, 42f, 42f, 0f, 26);
			__LIB_11__::func_798(&(uParam0->f_28[3]), iVar0[2], -690f, 42f, 43f, 0f, 26);
			PED::SET_PED_INTO_VEHICLE(uParam0->f_28[2], uParam0->f_35[0], -1);
			PED::SET_PED_INTO_VEHICLE(uParam0->f_28[3], uParam0->f_35[0], 0);
			WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[2], joaat("WEAPON_COMBATPISTOL"), -1, false, false);
			WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[3], joaat("WEAPON_MICROSMG"), -1, false, false);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 11, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 4, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 11, 0, 1, 0);
			PED::ADD_RELATIONSHIP_GROUP("gang", &iLocal_40);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], iLocal_40);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[1], iLocal_40);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[2], iLocal_40);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[3], iLocal_40);
			PED::SET_PED_CAN_EVASIVE_DIVE(uParam0->f_28[0], false);
			PED::SET_PED_CAN_EVASIVE_DIVE(uParam0->f_28[1], false);
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

void func_492()//Position - 0x3CF60
{
	__LIB_26__::func_252();
	if (__LIB_26__::func_257())
	{
	}
	__LIB_32__::func_757(&Local_41, 1, 0, 0);
	__LIB_9__::func_981(&uLocal_363, 0, 0);
	func_302();
	func_496();
	__LIB_32__::func_762(0);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_131))
	{
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_395, -8f, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_379))
	{
		if (iLocal_134 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_379, false))
			{
				PED::SET_PED_KEEP_TASK(iLocal_379, true);
			}
		}
		__LIB_0__::func_124(&iLocal_379, 1, 0, 1);
	}
	if (__LIB_0__::func_121(iLocal_395))
	{
		if (iLocal_145 == 1)
		{
			VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_395, 5, false);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_395, 1);
			iLocal_145 = 0;
		}
	}
	__LIB_0__::func_124(&iLocal_380, 1, 0, 1);
	if (__LIB_0__::func_121(iLocal_392))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_392, 1);
	}
	__LIB_0__::func_106(&iLocal_392);
	if (CAM::DOES_CAM_EXIST(iLocal_385))
	{
		CAM::SET_CAM_ACTIVE(iLocal_385, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_385, false);
		if (CAM::DOES_CAM_EXIST(iLocal_386))
		{
			CAM::SET_CAM_ACTIVE(iLocal_386, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::DESTROY_CAM(iLocal_386, false);
		}
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	iLocal_78 = 0;
	if (__LIB_1__::func_183(iLocal_393[0]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_393[0], 0f);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_393[0], true);
	}
	if (__LIB_1__::func_183(iLocal_393[1]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_393[1], 0f);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_393[1], true);
	}
	if (__LIB_1__::func_183(iLocal_393[2]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_393[2], 0f);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_393[2], true);
	}
	if (__LIB_1__::func_183(iLocal_393[3]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_393[3], 0f);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_393[3], true);
	}
	if (__LIB_1__::func_183(iLocal_393[4]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_393[4], 0f);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_393[4], true);
	}
	if (__LIB_1__::func_183(iLocal_393[5]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_393[5], 0f);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_393[5], true);
	}
	if (__LIB_1__::func_183(iLocal_393[6]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_393[6], 0f);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_393[6], true);
	}
	if (__LIB_1__::func_183(uLocal_394[0]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_394[0], 0f);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(uLocal_394[0], true);
	}
	if (__LIB_1__::func_183(uLocal_394[1]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_394[1], 0f);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(uLocal_394[1], true);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EPSILONISM_08_CHOPPER"))
	{
		AUDIO::STOP_AUDIO_SCENE("EPSILONISM_08_CHOPPER");
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_435, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_436, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_437, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_HighSec_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sentinel"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("maverick"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("landstalker"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_Epsilon_01"));
	STREAMING::REMOVE_ANIM_DICT("rcmepsilonism8");
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("landstalker"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sentinel"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sentinel2"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_F_Y_Epsilon_01"), false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_M_Y_Epsilon_01"), false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_M_Y_Epsilon_02"), false);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(12, false);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(2, false);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(5, false);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(3, false);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (iLocal_142 == 1)
	{
		__LIB_8__::func_770(0);
		if (iLocal_133 == 1)
		{
			__LIB_0__::func_296();
			if (iLocal_167 == 0)
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				if (iLocal_179 == 0)
				{
					__LIB_0__::func_202(&uLocal_198, 4);
					__LIB_0__::func_203(&uLocal_198, 4, 0, "CRIS", 0, 1);
					__LIB_20__::func_646(-632277372, 0, 1, 51, 4, 6000, 6000, -1, -1, 0, -1, 0);
					iLocal_179 = 1;
				}
			}
			if (iLocal_151 == 0)
			{
				if (__LIB_1__::func_183(iLocal_395))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_384[0], false))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_384[0], iLocal_395))
						{
							iLocal_77 = (iLocal_77 + iLocal_49);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_384[1], false))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_384[1], iLocal_395))
						{
							iLocal_77 = (iLocal_77 + iLocal_49);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_384[2], false))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_384[2], iLocal_395))
						{
							iLocal_77 = (iLocal_77 + iLocal_49);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_384[3], false))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_384[3], iLocal_395))
						{
							iLocal_77 = (iLocal_77 + iLocal_49);
						}
					}
				}
			}
			if (iLocal_77 != 0)
			{
				__LIB_40__::func_942(0, 1, iLocal_77, 0, 0);
			}
			__LIB_0__::func_498(754);
		}
		else if (iLocal_149 == 1)
		{
			if (iLocal_145 == 1)
			{
				VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_395, 5, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_395, 1);
				iLocal_145 = 0;
			}
		}
		else if (iLocal_167 == 0)
		{
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		}
	}
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LOS_SANTOS_EPSILONISM_BUILDING_01", true);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_496()//Position - 0x3D69C
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EPSILONISM_08_NON_COMPLIANCE"))
	{
		AUDIO::STOP_AUDIO_SCENE("EPSILONISM_08_NON_COMPLIANCE");
	}
}

