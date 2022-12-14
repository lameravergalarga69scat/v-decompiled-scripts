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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	struct<3> Local_51 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_54 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_57 = { 0, 0, 0 } ;
	struct<3> Local_58 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<2> Local_60 = { 0, 0 } ;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	char cLocal_63[16] = "";
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	char cLocal_66[16] = "";
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	char* sLocal_69 = NULL;
	char* sLocal_70 = NULL;
	char[] cLocal_71[8] = 0;
	char* sLocal_72 = NULL;
	int iLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	struct<18> Local_76 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<15> Local_77 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	struct<7> Local_81 = { 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<18> Local_93 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_94 = { 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<18> Local_106 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_107 = 0;
	struct<8> Local_108 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_109 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_110 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_111 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_112 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_113 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_114 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_115 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_116 = { 0, 0, 0 } ;
	var uLocal_117 = 0;
	struct<14> Local_118 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 3;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	struct<38> Local_130 = { 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_131 = 16;
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
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	var uLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
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
	bool bLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	float fLocal_337 = 0f;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	struct<3> Local_359 = { 0, 0, 0 } ;
	float fLocal_360 = 0f;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	float fLocal_382 = 0f;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	char* sLocal_398 = NULL;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_405 = 8;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 2;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	struct<18> Local_417[2];
	struct<18> Local_418[5];
	struct<18> Local_419[2];
	struct<18> Local_420[3];
	struct<18> Local_421[1];
	struct<18> Local_422[1];
	struct<18> Local_423[1];
	struct<18> Local_424[6];
	struct<18> Local_425[5];
	struct<19> Local_426[2];
	int iLocal_427[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<4> Local_428[8];
	int iLocal_429 = 0;
	int iLocal_430[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_431[9] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char[] cLocal_432[9][8] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_433[12] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char[] cLocal_434[12][8] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_435 = 0;
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
	iLocal_46 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_47 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_48 = joaat("schafter2");
	iLocal_49 = joaat("S_M_M_Security_01");
	iLocal_50 = joaat("prop_tyre_spike_01");
	Local_51 = { 479.88f, -1318.57f, 28.2f };
	Local_52 = { -1187.46f, -501.22f, 35.42f };
	Local_53 = { -1178.52f, -509.19f, 34.56f };
	Local_54 = { 0f, 0f, 3.24f };
	Local_55 = { 0f, -2.5f, 1f };
	Local_56 = { -1130.828f, -451.637f, 34.62f };
	Local_57 = { 1f, 0f, -128f };
	Local_58 = { 0f, -0.4f, 0.75f };
	Local_59 = { 0f, 0f, 0f };
	StringCopy(&Local_60, "CAR4_DCAR", 16);
	StringCopy(&cLocal_63, "CMN_GENGETIN" /* GXT: ~s~Get in the ~b~car. */, 16);
	StringCopy(&cLocal_66, "CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 16);
	sLocal_69 = "A_M_M_GENERICMALE_01_WHITE_MINI_01";
	sLocal_70 = "A_M_M_GENERICMALE_01_WHITE_MINI_02";
	cLocal_71 = "A_M_M_GENERICMALE_01_WHITE_MINI_03";
	sLocal_72 = "A_M_M_GENERICMALE_01_WHITE_MINI_04";
	iLocal_392 = -1;
	iLocal_393 = -1;
	iLocal_394 = -1;
	iLocal_395 = -1;
	iLocal_396 = -1;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		HUD::CLEAR_HELP(true);
		HUD::CLEAR_PRINTS();
		__LIB_0__::func_325();
		AUDIO::TRIGGER_MUSIC_EVENT("CAR3_MISSION_FAIL");
		func_801();
		func_795();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	PAD::INIT_PC_SCRIPTED_CONTROLS("Carsteal4_spycar");
	__LIB_11__::func_816(21, 0);
	if (__LIB_0__::func_323())
	{
		func_785(&iLocal_73, __LIB_0__::func_344());
		iLocal_300 = 1;
		if (Global_94618 == 1)
		{
			iLocal_73 = __LIB_17__::func_174(iLocal_73);
		}
	}
	else
	{
		func_783();
		__LIB_43__::func_558(0, "GET TO ACTOR", 0, 0, 0, 1);
	}
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_106.f_0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_106.f_0, false))
			{
				fLocal_337 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_106.f_0, 1);
			}
		}
		bLocal_319 = func_730(PLAYER::PLAYER_PED_ID());
		if (iLocal_301 == 1)
		{
			func_729(&iLocal_73, &uLocal_74);
			func_728(Local_51, 150f);
		}
		func_727(&Local_418);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_DeepInside", 0);
		switch (iLocal_73)
		{
			case 0:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
				if (func_693(iLocal_73, &iLocal_297, &iLocal_301, &uLocal_299, &iLocal_300))
				{
					if (func_667(&iLocal_298))
					{
						func_666();
						if (__LIB_2__::func_789(PLAYER::PLAYER_PED_ID(), Local_106.f_0, 0))
						{
							iLocal_73 = 3;
						}
						else
						{
							iLocal_73 = 1;
						}
					}
				}
				break;
			case 1:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
				if (func_693(iLocal_73, &iLocal_297, &iLocal_301, &uLocal_299, &iLocal_300))
				{
					if (func_664(&iLocal_298))
					{
						func_666();
						iLocal_73 = 2;
					}
				}
				break;
			case 2:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
				if (func_693(iLocal_73, &iLocal_297, &iLocal_301, &uLocal_299, &iLocal_300))
				{
					if (func_659(&iLocal_298))
					{
						func_666();
						iLocal_73 = 3;
					}
				}
				break;
			case 3:
				if (iLocal_353 == 0)
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.4f);
				}
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
				if (func_693(iLocal_73, &iLocal_297, &iLocal_301, &uLocal_299, &iLocal_300))
				{
					if (func_543(&iLocal_298))
					{
						func_666();
						iLocal_73 = 4;
					}
				}
				break;
			case 4:
				if (func_693(iLocal_73, &iLocal_297, &iLocal_301, &uLocal_299, &iLocal_300))
				{
					if (func_364(&iLocal_298))
					{
						func_666();
						iLocal_73 = 5;
					}
				}
				break;
			case 5:
				if (func_693(iLocal_73, &iLocal_297, &iLocal_301, &uLocal_299, &iLocal_300))
				{
					if (func_349(&iLocal_298))
					{
						func_666();
						func_347();
						__LIB_16__::func_319(80, 1);
						iLocal_73 = 7;
					}
				}
				break;
			case 7:
				__LIB_0__::func_526(0, 0);
				func_795();
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
			case 8:
				func_309(&uLocal_74);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				__LIB_0__::func_325();
				AUDIO::TRIGGER_MUSIC_EVENT("CAR3_MISSION_FAIL");
				while (!__LIB_0__::func_223())
				{
					SYSTEM::WAIT(0);
				}
				if (bLocal_319 == 1)
				{
					__LIB_0__::func_507(-1021.875f, -475.0034f, 36.0445f, 82.2636f);
				}
				if (func_305(PLAYER::PLAYER_PED_ID(), 12, 1))
				{
					func_3(0);
				}
				func_795();
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
		}
		__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), 127);
		if (ENTITY::DOES_ENTITY_EXIST(Local_106.f_0))
		{
			__LIB_0__::func_377(Local_106.f_0, 120);
			__LIB_0__::func_505(Local_106.f_0, 121);
		}
		SYSTEM::WAIT(0);
	}
}

void func_3(int iParam0)//Position - 0x4E0
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			func_234(PLAYER::PLAYER_PED_ID(), 12, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			__LIB_15__::func_985(1);
			PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
			PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
		}
		else if (iParam0 == 0)
		{
			if (!__LIB_0__::func_2(0))
			{
				func_6();
				__LIB_13__::func_803(1, iLocal_321);
			}
			else if (func_305(PLAYER::PLAYER_PED_ID(), 12, 1))
			{
				func_234(PLAYER::PLAYER_PED_ID(), 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
}

void func_6()//Position - 0x5A0
{
	__LIB_15__::func_984(&Global_103950);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_7(PLAYER::PLAYER_PED_ID(), &(Global_100166[__LIB_13__::func_716(PLAYER::PLAYER_PED_ID()) /*65*/]), 0, 0, 1, 0);
	}
}

void func_7(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x5D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<5> Var12;
	if (!PED::IS_PED_INJURED(iParam0) || iParam5)
	{
		iVar0 = __LIB_13__::func_716(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
				{
					if (uParam1->f_39[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (__LIB_0__::func_374(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_227(iParam0, iVar1, &iVar2, 0))
			{
				func_234(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_225(iParam0, iVar1, &iVar2))
			{
				func_234(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_222(iParam0);
			__LIB_0__::func_413(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_0__::func_413(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__::func_206(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_0__::func_463(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_0__::func_462(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_20(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_20(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_20(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_0__::func_463(iVar9);
			}
			else
			{
				iVar9 = __LIB_0__::func_462(iVar9);
			}
			__LIB_0__::func_413(753, iVar9, Global_78127, 1, 0);
			__LIB_0__::func_413(2053, iVar9, Global_78127, 1, 0);
			__LIB_0__::func_513(161, 1, -1, 1);
		}
		if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
		{
			iVar10 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar11 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 1, PED::GET_PED_PROP_INDEX(iParam0, 1), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 1));
			if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0") || iVar10 == joaat("DLC_MP_ARENA_F_BERD_13_0"))
			{
				if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("ARENA_DRAW_0"), 1))
				{
					FILES::INIT_SHOP_PED_PROP(&Var12);
					if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0"))
					{
						FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_M_PEYES_0_0"), &Var12);
					}
					else
					{
						FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_F_PEYES_0_0"), &Var12);
					}
					PED::SET_PED_PROP_INDEX(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("ARENA_DRAW_0"), 1))
			{
				PED::CLEAR_PED_PROP(iParam0, 1);
			}
		}
	}
}

int func_20(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x1384
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	int iVar17;
	var uVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	float fVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	var uVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	var uVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1574990 != 4 && Global_1574990 != 5) && Global_1574990 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_78127;
	}
	Global_78128++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = -1;
	iVar11 = -1;
	if (iParam5 == 0)
	{
		Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_78128 > 1)
		{
		}
		else
		{
			func_168(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar12 = Global_2883588;
		uVar13 = Global_2883589;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar14 = 15;
		if (iParam5 == 1)
		{
			uVar14 = { Global_78173 };
		}
		else
		{
			uVar14 = { __LIB_0__::func_459(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_78130[1 /*14*/].f_6, 1))
					{
						func_168(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, uVar14[iVar0], -1) };
					if (BitTest(Global_78130[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar15 = 9;
							if (iParam5 == 1)
							{
								uVar15 = { Global_78190 };
							}
							else
							{
								uVar15 = { __LIB_0__::func_466(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_168(iVar5, iVar0, uVar14[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_20(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_168(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_158(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_20(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_0__::func_662();
			if (iVar17 != -1)
			{
				__LIB_0__::func_661(iVar17, 0, iParam10);
			}
			func_152(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_0__::func_466(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_168(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_12__::func_901(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_20(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_168(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_20(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_143(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_20(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_20(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar19 = __LIB_0__::func_33(iParam1);
		if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar19) != Global_78130[1 /*14*/].f_3 || PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar19) != Global_78130[1 /*14*/].f_4)
		{
			iVar20 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
			iVar21 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 7, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 7), PED::GET_PED_TEXTURE_VARIATION(iParam0, 7));
			if (((iParam1 == 11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_JBIB"), 0)) || (iParam1 == 8 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_SPECIAL"), 0))) || (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_LEGS"), 0)))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 7));
			}
			if ((iParam1 == 11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("REMOVE_WITH_JBIB"), 0)) || (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("REMOVE_WITH_LEGS"), 0)))
			{
				if (iVar5 == joaat("MP_M_Freemode_01"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 15, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
				else if (iVar5 == joaat("MP_F_Freemode_01"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 2, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar22 = -1;
				if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("CREW_COL"), 11))
				{
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 0);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 1);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 2);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 3);
				}
				iVar23 = __LIB_0__::func_350(iParam0, 11);
				iVar24 = __LIB_0__::func_350(iParam0, 8);
				iVar25 = __LIB_0__::func_350(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_205(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_0__::func_350(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_140(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_12__::func_901(iParam0, iVar5, 11, iVar23, 3, 0);
					}
					switch (iVar26)
					{
						case joaat("DLC_MP_VAL_F_UPPR0_0"):
						case joaat("DLC_MP_VAL_F_UPPR0_1"):
						case joaat("DLC_MP_VAL_F_UPPR0_2"):
						case joaat("DLC_MP_VAL_F_UPPR0_3"):
						case joaat("DLC_MP_VAL_F_UPPR0_4"):
						case joaat("DLC_MP_VAL_F_UPPR0_5"):
							iVar27 = 11;
							iVar22 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
							if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("DRESS"), 0))
							{
								iVar27 = -99;
							}
							break;
					}
					if (iVar27 != -99)
					{
						iVar28 = 0;
						while (iVar28 < 18)
						{
							if (__LIB_0__::func_282(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_0__::func_350(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__::func_205(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_20(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_0__::func_280(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__::func_205(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__::func_205(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_0__::func_280(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_3__::func_523(iParam0, iParam2);
							iVar31 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_20(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_20(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_0__::func_452(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__::func_205(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_20(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_3__::func_523(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_0__::func_357(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__::func_205(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__::func_278(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_205(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_205(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_0__::func_451(iVar5, __LIB_0__::func_350(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_0__::func_451(iVar5, __LIB_0__::func_350(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_20(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_20(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_20(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_3__::func_520(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_152(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_140(iVar5, func_158(iParam0, 8, -1), iParam2, func_158(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__::func_369(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__::func_369(2160, iParam10, 0);
				}
				PED::SET_PED_HAIR_TINT(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar42 = -99;
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar42 = __LIB_0__::func_463(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_0__::func_462(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_72(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_140(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_12__::func_901(iParam0, iVar5, 11, iVar44, 3, 0);
				}
				switch (iVar43)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar46 = 11;
						iVar47 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar47, joaat("DRESS"), 0))
						{
							iVar46 = -99;
						}
						break;
				}
				if (iVar46 != -99)
				{
					iVar48 = 0;
					while (iVar48 < 18)
					{
						if (__LIB_0__::func_282(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_152(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_140(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_0__::func_350(iParam0, 7);
				if (!__LIB_0__::func_547(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_0__::func_369(2100, iParam10, 0);
				iVar53 = __LIB_0__::func_369(2101, iParam10, 0);
				iVar54 = __LIB_0__::func_369(2102, iParam10, 0);
				fVar55 = __LIB_0__::func_412(135, iParam10);
				if (iVar5 == joaat("MP_M_Freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
				}
				else if (iVar5 == joaat("MP_F_Freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
				}
				iVar56 = 0;
				while (iVar56 < 20)
				{
					PED::SET_PED_MICRO_MORPH(iParam0, iVar56, 0f);
					iVar56++;
				}
			}
			else
			{
				__LIB_3__::func_345(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_0__::func_350(iParam0, 11);
			iVar58 = __LIB_0__::func_350(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_20(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_20(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_140(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_140(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_12__::func_901(iParam0, iVar5, 11, iVar57, 3, 0);
				}
				switch (iVar59)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar60 = 11;
						iVar61 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar61, joaat("DRESS"), 0))
						{
							iVar60 = -99;
						}
						break;
				}
				if (iVar60 != -99)
				{
					iVar62 = 0;
					while (iVar62 < 18)
					{
						if (__LIB_0__::func_282(iVar5, iVar60, iVar62) == iVar59)
						{
							iVar10 = iVar62;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar62++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_20(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2883588)
							{
								case joaat("DLC_MP_VAL_F_UPPR0_0"):
								case joaat("DLC_MP_VAL_F_UPPR0_1"):
								case joaat("DLC_MP_VAL_F_UPPR0_2"):
								case joaat("DLC_MP_VAL_F_UPPR0_3"):
								case joaat("DLC_MP_VAL_F_UPPR0_4"):
								case joaat("DLC_MP_VAL_F_UPPR0_5"):
									iVar10 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_140(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_20(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__::func_248(iParam0))
				{
					iVar63 = __LIB_0__::func_442(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_44(iParam0, 9, iVar63))
						{
							func_20(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_20(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_20(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__::func_369(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_0__::func_533(iParam0, iVar64), __LIB_0__::func_242(iParam0, iVar64), __LIB_0__::func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_0__::func_533(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__::func_242(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_0__::func_440(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_20(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_158(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_158(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_20(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_20(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar68 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 6);
				iVar69 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 6);
				iVar70 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 6, iVar68, iVar69);
				iVar71 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
				iVar72 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
				iVar73 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar71, iVar72);
				iVar74 = __LIB_0__::func_350(iParam0, 4);
				iVar75 = __LIB_0__::func_350(iParam0, 6);
				if (__LIB_0__::func_238(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_0__::func_439(iVar5, iVar74, iVar70))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_20(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_20(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_0__::func_237(iVar5, iVar75, iVar73))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_20(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_20(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__::func_238(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_0__::func_237(iVar5, iVar75, iVar73))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_20(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_20(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_0__::func_439(iVar5, iVar74, iVar70))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_20(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_20(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_143(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_20(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_20(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_21(iParam0, &uVar4))
		{
			func_20(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_20(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_20(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_20(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_158(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_0__::func_204(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_0__::func_204(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_20(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_21(int iParam0, var uParam1)//Position - 0x322E
{
	int iVar0;
	int iVar1;
	*uParam1 = func_158(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_0__::func_369(754, Global_78127, 0) != -99 && __LIB_0__::func_438())
	{
		if (__LIB_0__::func_236() == 4)
		{
			return 1;
		}
		if (__LIB_0__::func_369(754, Global_78127, 0) == 0 && __LIB_0__::func_369(755, Global_78127, 0) == 0)
		{
			if (__LIB_0__::func_351(161, Global_78127))
			{
				if (__LIB_0__::func_369(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_0__::func_369(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_0__::func_369(754, Global_78127, 0);
		iVar1 = __LIB_0__::func_369(755, Global_78127, 0);
		if (!func_44(iParam0, iVar1, iVar0))
		{
			if (__LIB_0__::func_351(161, Global_78127))
			{
				*uParam1 = __LIB_0__::func_369(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_0__::func_369(753, Global_78127, 0);
			}
			__LIB_0__::func_413(754, -99, Global_78127, 1, 0);
			__LIB_0__::func_413(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_44(int iParam0, int iParam1, int iParam2)//Position - 0x760F
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	struct<5> Var17;
	var uVar18;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_0__::func_459(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				case 1:
					iVar4 = 4;
					break;
				case 2:
					iVar4 = 6;
					break;
				case 3:
					iVar4 = 7;
					break;
				case 4:
					iVar4 = 8;
					break;
				case 5:
					iVar4 = 11;
					break;
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_44(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_0__::func_466(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_44(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_44(iParam0, 14, iVar6))
										{
											if (!__LIB_0__::func_551(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
											{
												Global_2883588 = uVar2;
												Global_2883589 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = __LIB_0__::func_350(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_0__::func_551(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
						{
							Global_2883588 = uVar2;
							Global_2883589 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != joaat("0")) && uVar8.f_16)
		{
			if (__LIB_0__::func_369(1759, Global_78127, 0) != uVar8[10])
			{
				Global_2883588 = uVar2;
				Global_2883589 = uVar3;
				return 0;
			}
		}
		Global_2883588 = uVar2;
		Global_2883589 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { __LIB_0__::func_466(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_44(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_4 || Global_78130[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_78130[1 /*14*/].f_12 == 0 && BitTest(Global_78130[1 /*14*/].f_6, 6)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HELMET"), 1)) && FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588) > 0)
		{
			iVar16 = FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588);
			iVar12 = 0;
			while (iVar12 < iVar16)
			{
				FILES::GET_VARIANT_PROP(Global_2883588, iVar12, &iVar13, &uVar14, &uVar15);
				if (iVar13 != 0 && iVar13 != joaat("0"))
				{
					FILES::INIT_SHOP_PED_PROP(&Var17);
					FILES::GET_SHOP_PED_PROP(iVar13, &Var17);
					if (Var17.f_3 == PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) && Var17.f_4 == PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78129++;
			if (Global_78129 == 1)
			{
				if (__LIB_0__::func_240(iVar0, 11, __LIB_0__::func_350(iParam0, 11), -1))
				{
					if (__LIB_0__::func_353(iVar0, 4, iParam2, &uVar18))
					{
						return func_44(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_44(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_72(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xF357
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_3__::func_346(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_0__::func_450(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_0__::func_661(iVar1, 1, iParam2);
	}
	func_73(iParam0, bParam3, 0, -1);
}

void func_73(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xF3A4
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<8> Var9;
	int iVar10;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_78127;
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar2 = __LIB_0__::func_276(iParam0);
		bVar3 = func_119(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_110(iParam0, iParam3);
		if (bParam1)
		{
			bVar4 = true;
		}
		if (bParam2)
		{
			bVar4 = false;
		}
		iVar6 = 0;
		while (iVar6 < 127)
		{
			if (__LIB_0__::func_549(iVar6, iVar0))
			{
				if (__LIB_0__::func_445(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_0__::func_674(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_0__::func_549(123, iVar0))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar8 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar2);
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar2, iVar7, &Var9))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var9.f_0))
				{
					iVar10 = (129 + iVar7);
					if (__LIB_0__::func_549(iVar10, iVar0))
					{
						if (__LIB_0__::func_674(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_3__::func_348(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__::func_260(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_110(int iParam0, int iParam1)//Position - 0x1E584
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar2 = __LIB_0__::func_369(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_158(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (iVar2)
						{
							case joaat("MP_Elite_M_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_M"):
							case joaat("MP_Heist4_Tee_039_M"):
							case joaat("MP_Heist4_Tee_041_M"):
							case joaat("MP_Heist4_Tee_043_M"):
							case joaat("MP_Heist4_Tee_049_M"):
							case joaat("MP_Heist4_Tee_051_M"):
							case joaat("MP_Heist4_Tee_055_M"):
							case joaat("MP_Heist4_Tee_057_M"):
							case joaat("MP_Heist4_Tee_059_M"):
							case joaat("MP_Heist4_Tee_061_M"):
							case joaat("MP_Heist4_Tee_063_M"):
							case joaat("MP_Heist4_Tee_065_M"):
							case joaat("MP_Tuner_Tee_000_M"):
							case joaat("MP_Tuner_Tee_002_M"):
							case joaat("MP_Tuner_Tee_003_M"):
							case joaat("MP_Tuner_Tee_005_M"):
							case joaat("MP_Tuner_Tee_006_M"):
							case joaat("MP_Tuner_Tee_008_M"):
							case joaat("MP_Tuner_Tee_010_M"):
								return 1;
								break;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			iVar2 = __LIB_0__::func_369(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 == 3)
			{
				if (iVar1 == 14)
				{
					return 1;
				}
			}
			else if (iVar0 > 15)
			{
				iVar5 = func_158(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (iVar2)
						{
							case joaat("MP_Elite_F_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_F"):
							case joaat("MP_Heist4_Tee_039_F"):
							case joaat("MP_Heist4_Tee_041_F"):
							case joaat("MP_Heist4_Tee_043_F"):
							case joaat("MP_Heist4_Tee_049_F"):
							case joaat("MP_Heist4_Tee_051_F"):
							case joaat("MP_Heist4_Tee_055_F"):
							case joaat("MP_Heist4_Tee_057_F"):
							case joaat("MP_Heist4_Tee_059_F"):
							case joaat("MP_Heist4_Tee_061_F"):
							case joaat("MP_Heist4_Tee_063_F"):
							case joaat("MP_Heist4_Tee_065_F"):
							case joaat("MP_Tuner_Tee_000_F"):
							case joaat("MP_Tuner_Tee_002_F"):
							case joaat("MP_Tuner_Tee_003_F"):
							case joaat("MP_Tuner_Tee_005_F"):
							case joaat("MP_Tuner_Tee_006_F"):
							case joaat("MP_Tuner_Tee_008_F"):
							case joaat("MP_Tuner_Tee_010_F"):
								return 1;
								break;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
	}
	return 0;
}

int func_119(int iParam0, bool bParam1)//Position - 0x1E9E2
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
	int iVar11;
	int iVar12;
	int iVar13;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
							return 1;
							break;
						case 1:
						case 7:
						case 12:
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_158(iParam0, 11, -1), 0);
							if (((iVar1 == 1 && iVar2 == 88) || (iVar1 == 7 && iVar2 == 89)) || (iVar1 == 12 && iVar2 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				case 5:
					if (!bParam1)
					{
						if (__LIB_0__::func_549(13, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(14, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(15, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(16, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(71, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(72, -1))
						{
						}
						else if (__LIB_0__::func_536(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_158(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
							if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_12"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar5 = func_158(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
							if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("COMBAT_TOP"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_158(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar7 == 88) || (iVar1 == 4 && iVar7 == 89)) || (iVar1 == 9 && iVar7 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				case 3:
					switch (iVar1)
					{
						case 14:
							return 1;
							break;
					}
					break;
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_158(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
							if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HEIST_DRAW_13"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_158(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar10 == 88) || (iVar1 == 4 && iVar10 == 89)) || (iVar1 == 9 && iVar10 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_158(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar11 == 88) || (iVar1 == 4 && iVar11 == 89)) || (iVar1 == 9 && iVar11 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar12 = func_158(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
							if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("COMBAT_TOP"), 0))
							{
								return 1;
							}
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_140(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x278AD
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
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	iVar0 = -99;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			if (iParam2 >= 237)
			{
				iVar2 = __LIB_0__::func_205(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__::func_278(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__::func_205(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__::func_278(iVar4);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				iVar0 = 14;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_PYJAMAS"), 0))
			{
				iVar0 = 6;
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
			{
				iVar0 = 1;
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_2"), 0))
			{
				iVar0 = 4;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
			{
				if (iParam1 == 240)
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_140(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 0;
					}
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 12;
			}
			else if (((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_15"), 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_24"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 4;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_7"), 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar3 == 12)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 11;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_9"), 0))
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_JACKET"), 0))
			{
				iVar0 = 12;
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_6"), 0))
			{
				iVar0 = 2;
			}
			else if (((iParam2 >= 0 && iParam2 <= 31) || iVar1 == 0) || iVar1 == 1)
			{
				iVar0 = 0;
			}
			else if ((((((((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 96 && iParam2 <= 107)) || (iParam2 >= 108 && iParam2 <= 123)) || (iParam2 >= 156 && iParam2 <= 171)) || iVar1 == 3) || iVar1 == 4) || iVar1 == 6) || iVar1 == 7) || iVar1 == 10)
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240 || iVar3 == 15)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 160 && iParam1 <= 175) || iVar3 == 10)
				{
					iVar0 = 4;
				}
				else if ((iParam1 >= 176 && iParam1 <= 191) || iVar3 == 11)
				{
					iVar0 = 12;
				}
				else if ((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 224 && iParam1 <= 239)) || iVar3 == 1) || iVar3 == 14)
				{
					iVar0 = 1;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 32 && iParam1 <= 47) || iVar3 == 2)
				{
					iVar0 = 4;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SHIRT_BRACES"), 0))
				{
					if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("CLOSED_COLLAR"), 0))
					{
						iVar0 = 4;
					}
					else
					{
						iVar0 = 1;
					}
				}
				else if ((iParam1 >= 144 && iParam1 <= 159) || iVar3 == 9)
				{
					iVar0 = 1;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0))
				{
					iVar0 = 4;
				}
				else if (iParam1 >= 241)
				{
					if (iVar4 != -1)
					{
						iVar5 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar4);
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar6, &iVar7, &iVar8, &iVar9);
							if (iVar9 == 3)
							{
								if (iVar7 != 0 && iVar7 != joaat("0"))
								{
									iVar0 = __LIB_0__::func_204(iParam0, iVar7, 3, 3);
								}
								else
								{
									iVar0 = iVar8;
								}
								iVar6 = iVar5 + 1;
							}
							iVar6++;
						}
					}
				}
			}
			else if ((iParam2 >= 172 && iParam2 <= 187) || iVar1 == 11)
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SWEAT_VEST"), 0))
				{
					iVar0 = 6;
				}
				else if ((((iParam1 >= 48 && iParam1 <= 63) || (iParam1 >= 112 && iParam1 <= 127)) || iVar3 == 3) || iVar3 == 7)
				{
					iVar0 = 11;
				}
				else if ((iParam1 >= 96 && iParam1 <= 111) || iVar3 == 6)
				{
					iVar0 = 11;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LONG_SLEEVE"), 0))
				{
					iVar0 = 12;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			else if ((iParam2 >= 140 && iParam2 <= 155) || iVar1 == 9)
			{
				iVar0 = 0;
			}
			else if (iParam2 == 236)
			{
				if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			break;
		case joaat("MP_F_Freemode_01"):
			if (iParam2 >= 256)
			{
				iVar2 = __LIB_0__::func_205(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__::func_278(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__::func_205(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__::func_278(iVar4);
				switch (iVar4)
				{
					case joaat("DLC_MP_BEACH_F_ACCS2_0"):
					case joaat("DLC_MP_BEACH_F_ACCS2_1"):
					case joaat("DLC_MP_BEACH_F_ACCS2_2"):
					case joaat("DLC_MP_BEACH_F_ACCS2_3"):
					case joaat("DLC_MP_BEACH_F_ACCS2_4"):
					case joaat("DLC_MP_BEACH_F_ACCS2_5"):
					case joaat("DLC_MP_BEACH_F_ACCS2_6"):
					case joaat("DLC_MP_BEACH_F_ACCS2_7"):
					case joaat("DLC_MP_BEACH_F_ACCS2_8"):
					case joaat("DLC_MP_BEACH_F_ACCS2_9"):
					case joaat("DLC_MP_BEACH_F_ACCS2_10"):
					case joaat("DLC_MP_BEACH_F_ACCS2_11"):
						iVar3 = 15;
						break;
					case joaat("DLC_MP_VAL_F_ACCS2_0"):
					case joaat("DLC_MP_VAL_F_ACCS2_1"):
					case joaat("DLC_MP_VAL_F_ACCS2_2"):
					case joaat("DLC_MP_VAL_F_ACCS2_3"):
					case joaat("DLC_MP_VAL_F_ACCS2_4"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_0"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_1"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_2"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_3"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_4"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_5"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_6"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_7"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_8"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_9"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_10"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_11"):
						iVar3 = 13;
						break;
					}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				iVar0 = 0;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
			{
				if ((((((((((((((((((((((((((((iParam1 >= 34 && iParam1 <= 49) || (iParam1 >= 50 && iParam1 <= 65)) || (iParam1 >= 71 && iParam1 <= 86)) || (iParam1 >= 87 && iParam1 <= 102)) || (iParam1 >= 103 && iParam1 <= 118)) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 4) || iVar3 == 5) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 15) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_0")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_1")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_2")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_3")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_4")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_5")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_6")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0))
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_140(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 14;
					}
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("OPEN_SHORT"), 0))
			{
				if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_5"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0)))
				{
					iVar0 = 9;
				}
				else
				{
					iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_0__::func_280(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LONG_SLEEVE"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_0"), 0))
			{
				iVar0 = 7;
			}
			else if ((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_2"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0)))
			{
				iVar0 = 3;
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW_DRAW_1"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = 15;
				}
			}
			else if ((((((((((((((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_0"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_6"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_7"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_8"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0)))
			{
				if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 96 && iParam2 <= 111)) || (iParam2 >= 128 && iParam2 <= 143)) || iVar1 == 1) || iVar1 == 6) || iVar1 == 8)
				{
					iVar0 = 1;
				}
				else if (((((((((((((((((((((((((((iParam2 >= 112 && iParam2 <= 127) || (iParam2 >= 160 && iParam2 <= 175)) || iVar1 == 7) || iVar1 == 10) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TAILS_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_33"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0))
				{
					iVar0 = 3;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_7"), 0))
				{
					iVar0 = 9;
				}
			}
			else if ((((((((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_0"), 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_33"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0)))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0))
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else if ((iParam2 >= 16 && iParam2 <= 31) || iVar1 == 1)
			{
				if ((((iParam1 >= 50 && iParam1 <= 65) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 5) || iVar3 == 15)
				{
					iVar0 = 5;
				}
				else if (iParam1 >= 136)
				{
					if (iVar4 != -1)
					{
						iVar10 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar4);
						iVar11 = 0;
						while (iVar11 < iVar10)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar11, &iVar12, &iVar13, &iVar14);
							if (iVar14 == 3)
							{
								if (iVar12 != 0 && iVar12 != joaat("0"))
								{
									iVar0 = __LIB_0__::func_204(iParam0, iVar12, 3, 4);
								}
								else
								{
									iVar0 = iVar13;
								}
								iVar11 = iVar10 + 1;
							}
							iVar11++;
						}
					}
				}
			}
			else if (((iParam2 >= 112 && iParam2 <= 127) || iVar1 == 7) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 6;
				}
			}
			break;
	}
	return iVar0;
}

void func_143(int iParam0)//Position - 0x28D63
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
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	struct<5> Var15;
	int* iVar16;
	int iVar17;
	struct<5> Var18;
	int* iVar19;
	int iVar20;
	struct<5> Var21;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
	iVar3 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	iVar4 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
	iVar5 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
	iVar6 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
	iVar7 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10);
	iVar8 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 10);
	iVar9 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, iVar2);
	iVar10 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar3, iVar4);
	iVar11 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar5, iVar6);
	iVar12 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	iVar13 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 10, iVar7, iVar8);
	bVar14 = false;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOODED_JACKET"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOOD_UP"), 0))
	{
		if (!func_148(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_0__::func_286(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_285(iVar13, 11, -1))
				{
					if (__LIB_0__::func_285(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_284(iVar13, 10, &iVar17, -1))
					{
						if (__LIB_0__::func_285(iVar17, 11, Var15.f_1))
						{
							FILES::GET_SHOP_PED_COMPONENT(iVar17, &Var18);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var18.f_3, Var18.f_4, 0);
						}
					}
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_16"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_19"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("GORKA_SUIT"), 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_M_DECL_10_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_2"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_0_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_0_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_3"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_16"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_19"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("GORKA_SUIT"), 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_F_DECL_10_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_7"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_1_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_1_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_8"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_2_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_2_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOODED_JACKET"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOOD_DOWN"), 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("FAKE_HAT"), 1))
		{
			if (__LIB_0__::func_286(iVar9, 1, 0, &iVar19))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar19, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_285(iVar13, 11, -1))
				{
					if (__LIB_0__::func_285(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_284(iVar13, 10, &iVar20, -1))
					{
						if (__LIB_0__::func_285(iVar20, 11, Var15.f_1))
						{
							FILES::GET_SHOP_PED_COMPONENT(iVar20, &Var21);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var21.f_3, Var21.f_4, 0);
						}
					}
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_16"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_19"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("GORKA_SUIT"), 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_M_DECL_10_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_2"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_0_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_0_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_3"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_16"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_19"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("GORKA_SUIT"), 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_F_DECL_10_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_7"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_1_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_1_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_8"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_2_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_2_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("HAZ_HOOD"), 0) || __LIB_0__::func_283(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_148(iParam0, &bVar14, iVar9, iVar10, iVar12))
		{
			if (bVar14)
			{
				if (iVar0 == joaat("MP_M_Freemode_01"))
				{
					iVar5 = 15;
					iVar6 = 0;
				}
				else
				{
					iVar5 = 14;
					iVar6 = 0;
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_6_0"), &Var15);
				iVar5 = Var15.f_3;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_10_0"), &Var15);
				iVar5 = Var15.f_3;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_7_0"), &Var15);
			iVar5 = Var15.f_3;
		}
		else
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_11_0"), &Var15);
			iVar5 = Var15.f_3;
		}
		if (iVar5 != PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8) || iVar6 != PED::GET_PED_TEXTURE_VARIATION(iParam0, 8))
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iVar5, iVar6, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
		}
	}
}

int func_148(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2972D
{
	int iVar0;
	*iParam1 = 0;
	if (iParam2 == -1)
	{
		iParam2 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	}
	if (iParam3 == -1)
	{
		iParam3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
	}
	if (iParam4 == -1)
	{
		iParam4 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HOODED_JACKET"), 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("FITTED_HOOD"), 0))
		{
			if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam4, joaat("HOOD_HAT"), 1) && PED::GET_PED_PROP_INDEX(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HOOD_COMPAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam4, joaat("HOOD_HAT"), 1))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("SKI_MASK"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("BIKER_MASK"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("BIKER_MASK"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("NIGHT_VISION"), 0))
			{
				return 0;
			}
		}
		else
		{
			if (PED::GET_PED_PROP_INDEX(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HOOD_COMPAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				return 0;
			}
		}
		return 1;
	}
	if (iVar0 == joaat("MP_M_Freemode_01"))
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HEIST_DRAW_14"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case joaat("DLC_MP_HEIST_M_BERD_21_0"):
			case joaat("DLC_MP_HEIST_M_BERD_21_1"):
			case joaat("DLC_MP_HEIST_M_BERD_21_2"):
			case joaat("DLC_MP_HEIST_M_BERD_21_3"):
			case joaat("DLC_MP_HEIST_M_BERD_21_4"):
			case joaat("DLC_MP_HEIST_M_BERD_21_5"):
			case joaat("DLC_MP_HEIST_M_BERD_21_6"):
			case joaat("DLC_MP_HEIST_M_BERD_21_7"):
			case joaat("DLC_MP_HEIST_M_BERD_21_8"):
			case joaat("DLC_MP_HEIST_M_BERD_14_0"):
			case joaat("DLC_MP_HEIST_M_BERD_14_1"):
			case joaat("DLC_MP_HEIST_M_BERD_14_2"):
			case joaat("DLC_MP_HEIST_M_BERD_14_3"):
			case joaat("DLC_MP_HEIST_M_BERD_14_4"):
			case joaat("DLC_MP_HEIST_M_BERD_14_5"):
			case joaat("DLC_MP_HEIST_M_BERD_14_6"):
			case joaat("DLC_MP_HEIST_M_BERD_14_7"):
			case joaat("DLC_MP_HEIST_M_BERD_14_8"):
			case joaat("DLC_MP_HEIST_M_BERD_14_9"):
			case joaat("DLC_MP_HEIST_M_BERD_14_10"):
			case joaat("DLC_MP_HEIST_M_BERD_14_11"):
			case joaat("DLC_MP_HEIST_M_BERD_14_12"):
			case joaat("DLC_MP_HEIST_M_BERD_14_13"):
			case joaat("DLC_MP_HEIST_M_BERD_14_14"):
			case joaat("DLC_MP_HEIST_M_BERD_14_15"):
			case joaat("DLC_MP_HEIST_M_BERD_14_16"):
			case joaat("DLC_MP_HEIST_M_BERD_14_17"):
			case joaat("DLC_MP_HEIST_M_BERD_14_18"):
			case joaat("DLC_MP_HEIST_M_BERD_14_19"):
			case joaat("DLC_MP_HEIST_M_BERD_14_20"):
			case joaat("DLC_MP_HEIST_M_BERD_14_21"):
			case joaat("DLC_MP_HEIST_M_BERD_14_22"):
			case joaat("DLC_MP_HEIST_M_BERD_14_23"):
			case joaat("DLC_MP_HEIST_M_BERD_14_24"):
			case joaat("DLC_MP_HEIST_M_BERD_14_25"):
			case joaat("DLC_MP_IND_M_BERD_4_0"):
			case joaat("DLC_MP_IND_M_BERD_4_1"):
			case joaat("DLC_MP_IND_M_BERD_3_0"):
			case joaat("DLC_MP_IND_M_BERD_3_1"):
				*iParam1 = 1;
				return 0;
				break;
		}
	}
	else
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HEIST_DRAW_15"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("SCRUFFY_BALACLAVA"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case joaat("DLC_MP_SMUG_F_BERD_8_0"):
			case joaat("DLC_MP_SMUG_F_BERD_8_1"):
			case joaat("DLC_MP_SMUG_F_BERD_8_2"):
			case joaat("DLC_MP_SMUG_F_BERD_8_3"):
			case joaat("DLC_MP_SMUG_F_BERD_8_4"):
			case joaat("DLC_MP_SMUG_F_BERD_8_5"):
			case joaat("DLC_MP_SMUG_F_BERD_8_6"):
			case joaat("DLC_MP_SMUG_F_BERD_8_7"):
			case joaat("DLC_MP_SMUG_F_BERD_8_8"):
			case joaat("DLC_MP_SMUG_F_BERD_8_9"):
			case joaat("DLC_MP_SMUG_F_BERD_8_10"):
			case joaat("DLC_MP_SMUG_F_BERD_8_11"):
			case joaat("DLC_MP_SMUG_F_BERD_8_12"):
			case joaat("DLC_MP_SMUG_F_BERD_8_13"):
			case joaat("DLC_MP_SMUG_F_BERD_8_14"):
			case joaat("DLC_MP_SMUG_F_BERD_8_15"):
			case joaat("DLC_MP_SMUG_F_BERD_8_16"):
			case joaat("DLC_MP_SMUG_F_BERD_8_17"):
			case joaat("DLC_MP_SMUG_F_BERD_8_18"):
			case joaat("DLC_MP_SMUG_F_BERD_8_19"):
			case joaat("DLC_MP_SMUG_F_BERD_8_20"):
			case joaat("DLC_MP_SMUG_F_BERD_8_21"):
			case joaat("DLC_MP_SMUG_F_BERD_8_22"):
			case joaat("DLC_MP_SMUG_F_BERD_8_23"):
			case joaat("DLC_MP_SMUG_F_BERD_8_24"):
			case joaat("DLC_MP_SMUG_F_BERD_8_25"):
			case joaat("DLC_MP_HEIST_F_BERD_23_0"):
			case joaat("DLC_MP_HEIST_F_BERD_23_1"):
			case joaat("DLC_MP_HEIST_F_BERD_23_2"):
			case joaat("DLC_MP_HEIST_F_BERD_23_3"):
			case joaat("DLC_MP_HEIST_F_BERD_23_4"):
			case joaat("DLC_MP_HEIST_F_BERD_23_5"):
			case joaat("DLC_MP_HEIST_F_BERD_23_6"):
			case joaat("DLC_MP_HEIST_F_BERD_23_7"):
			case joaat("DLC_MP_HEIST_F_BERD_23_8"):
			case joaat("DLC_MP_HEIST_F_BERD_23_9"):
			case joaat("DLC_MP_HEIST_F_BERD_22_0"):
			case joaat("DLC_MP_HEIST_F_BERD_22_1"):
			case joaat("DLC_MP_HEIST_F_BERD_22_2"):
			case joaat("DLC_MP_HEIST_F_BERD_22_3"):
			case joaat("DLC_MP_HEIST_F_BERD_22_4"):
			case joaat("DLC_MP_HEIST_F_BERD_22_5"):
			case joaat("DLC_MP_HEIST_F_BERD_22_6"):
			case joaat("DLC_MP_HEIST_F_BERD_22_7"):
			case joaat("DLC_MP_HEIST_F_BERD_22_8"):
			case joaat("DLC_MP_HEIST_F_BERD_22_9"):
			case joaat("DLC_MP_HEIST_F_BERD_22_10"):
			case joaat("DLC_MP_HEIST_F_BERD_22_11"):
			case joaat("DLC_MP_HEIST_F_BERD_22_12"):
			case joaat("DLC_MP_HEIST_F_BERD_22_13"):
			case joaat("DLC_MP_HEIST_F_BERD_22_14"):
			case joaat("DLC_MP_HEIST_F_BERD_22_15"):
			case joaat("DLC_MP_HEIST_F_BERD_22_16"):
			case joaat("DLC_MP_HEIST_F_BERD_22_17"):
			case joaat("DLC_MP_HEIST_F_BERD_22_18"):
			case joaat("DLC_MP_HEIST_F_BERD_22_19"):
			case joaat("DLC_MP_HEIST_F_BERD_22_20"):
			case joaat("DLC_MP_HEIST_F_BERD_22_21"):
			case joaat("DLC_MP_HEIST_F_BERD_21_0"):
			case joaat("DLC_MP_HEIST_F_BERD_21_1"):
			case joaat("DLC_MP_HEIST_F_BERD_21_2"):
			case joaat("DLC_MP_HEIST_F_BERD_21_3"):
			case joaat("DLC_MP_HEIST_F_BERD_21_4"):
			case joaat("DLC_MP_HEIST_F_BERD_21_5"):
			case joaat("DLC_MP_HEIST_F_BERD_21_6"):
			case joaat("DLC_MP_HEIST_F_BERD_21_7"):
			case joaat("DLC_MP_HEIST_F_BERD_21_8"):
			case joaat("DLC_MP_HEIST_F_BERD_20_0"):
			case joaat("DLC_MP_HEIST_F_BERD_20_1"):
			case joaat("DLC_MP_HEIST_F_BERD_19_0"):
			case joaat("DLC_MP_HEIST_F_BERD_19_1"):
			case joaat("DLC_MP_HEIST_F_BERD_19_2"):
			case joaat("DLC_MP_HEIST_F_BERD_19_3"):
			case joaat("DLC_MP_HEIST_F_BERD_19_4"):
			case joaat("DLC_MP_HEIST_F_BERD_19_5"):
			case joaat("DLC_MP_HEIST_F_BERD_19_6"):
			case joaat("DLC_MP_HEIST_F_BERD_19_7"):
			case joaat("DLC_MP_HEIST_F_BERD_19_8"):
			case joaat("DLC_MP_HEIST_F_BERD_19_9"):
			case joaat("DLC_MP_HEIST_F_BERD_19_10"):
			case joaat("DLC_MP_HEIST_F_BERD_18_0"):
			case joaat("DLC_MP_HEIST_F_BERD_18_1"):
			case joaat("DLC_MP_HEIST_F_BERD_18_2"):
			case joaat("DLC_MP_HEIST_F_BERD_18_3"):
			case joaat("DLC_MP_HEIST_F_BERD_18_4"):
			case joaat("DLC_MP_HEIST_F_BERD_18_5"):
			case joaat("DLC_MP_HEIST_F_BERD_18_6"):
			case joaat("DLC_MP_HEIST_F_BERD_18_7"):
			case joaat("DLC_MP_HEIST_F_BERD_18_8"):
			case joaat("DLC_MP_HEIST_F_BERD_17_0"):
			case joaat("DLC_MP_HEIST_F_BERD_17_1"):
			case joaat("DLC_MP_HEIST_F_BERD_17_2"):
			case joaat("DLC_MP_HEIST_F_BERD_17_3"):
			case joaat("DLC_MP_HEIST_F_BERD_17_4"):
			case joaat("DLC_MP_HEIST_F_BERD_17_5"):
			case joaat("DLC_MP_HEIST_F_BERD_17_6"):
			case joaat("DLC_MP_HEIST_F_BERD_17_7"):
			case joaat("DLC_MP_HEIST_F_BERD_17_8"):
			case joaat("DLC_MP_HEIST_F_BERD_17_9"):
			case joaat("DLC_MP_HEIST_F_BERD_17_10"):
			case joaat("DLC_MP_HEIST_F_BERD_14_0"):
			case joaat("DLC_MP_HEIST_F_BERD_14_1"):
			case joaat("DLC_MP_HEIST_F_BERD_14_2"):
			case joaat("DLC_MP_HEIST_F_BERD_14_3"):
			case joaat("DLC_MP_HEIST_F_BERD_14_4"):
			case joaat("DLC_MP_HEIST_F_BERD_14_5"):
			case joaat("DLC_MP_HEIST_F_BERD_14_6"):
			case joaat("DLC_MP_HEIST_F_BERD_14_7"):
			case joaat("DLC_MP_HEIST_F_BERD_14_8"):
			case joaat("DLC_MP_HEIST_F_BERD_14_9"):
			case joaat("DLC_MP_HEIST_F_BERD_14_10"):
			case joaat("DLC_MP_HEIST_F_BERD_14_11"):
			case joaat("DLC_MP_HEIST_F_BERD_14_12"):
			case joaat("DLC_MP_HEIST_F_BERD_14_13"):
			case joaat("DLC_MP_HEIST_F_BERD_14_14"):
			case joaat("DLC_MP_HEIST_F_BERD_14_15"):
			case joaat("DLC_MP_HEIST_F_BERD_14_16"):
			case joaat("DLC_MP_HEIST_F_BERD_14_17"):
			case joaat("DLC_MP_HEIST_F_BERD_14_18"):
			case joaat("DLC_MP_HEIST_F_BERD_14_19"):
			case joaat("DLC_MP_HEIST_F_BERD_14_20"):
			case joaat("DLC_MP_HEIST_F_BERD_14_21"):
			case joaat("DLC_MP_HEIST_F_BERD_14_22"):
			case joaat("DLC_MP_HEIST_F_BERD_14_23"):
			case joaat("DLC_MP_HEIST_F_BERD_14_24"):
			case joaat("DLC_MP_HEIST_F_BERD_14_25"):
			case joaat("DLC_MP_HEIST_F_BERD_13_0"):
			case joaat("DLC_MP_HEIST_F_BERD_13_1"):
			case joaat("DLC_MP_HEIST_F_BERD_13_2"):
			case joaat("DLC_MP_HEIST_F_BERD_13_3"):
			case joaat("DLC_MP_HEIST_F_BERD_12_0"):
			case joaat("DLC_MP_HEIST_F_BERD_12_1"):
			case joaat("DLC_MP_HEIST_F_BERD_12_2"):
			case joaat("DLC_MP_HEIST_F_BERD_12_3"):
			case joaat("DLC_MP_HEIST_F_BERD_7_0"):
			case joaat("DLC_MP_HEIST_F_BERD_7_1"):
			case joaat("DLC_MP_HEIST_F_BERD_5_0"):
			case joaat("DLC_MP_HEIST_F_BERD_5_1"):
			case joaat("DLC_MP_HEIST_F_BERD_4_0"):
			case joaat("DLC_MP_HEIST_F_BERD_4_1"):
			case joaat("DLC_MP_HEIST_F_BERD_0_0"):
			case joaat("DLC_MP_XMAS2_F_BERD_1_0"):
			case joaat("DLC_MP_LTS_F_BERD_0_0"):
			case joaat("DLC_MP_LTS_F_BERD_0_1"):
			case joaat("DLC_MP_LTS_F_BERD_0_2"):
			case joaat("DLC_MP_LTS_F_BERD_0_3"):
			case joaat("DLC_MP_LTS_F_BERD_0_4"):
			case joaat("DLC_MP_IND_F_BERD_4_0"):
			case joaat("DLC_MP_IND_F_BERD_4_1"):
			case joaat("DLC_MP_IND_F_BERD_3_0"):
			case joaat("DLC_MP_IND_F_BERD_3_1"):
				*iParam1 = 1;
				return 0;
				break;
			}
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_158(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2C116
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_222(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_0__::func_280(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_0__::func_350(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_0__::func_350(iParam0, 11);
				if (!__LIB_0__::func_280(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_3__::func_346(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_3__::func_347(iVar0, iParam2, 13) && !__LIB_3__::func_347(iVar0, iParam2, 14)) && !__LIB_3__::func_347(iVar0, iParam2, 15)) && !__LIB_3__::func_347(iVar0, iParam2, 16)) && !__LIB_3__::func_347(iVar0, iParam2, 71)) && !__LIB_3__::func_347(iVar0, iParam2, 72))
				{
					__LIB_3__::func_346(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_0__::func_676(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_0__::func_660(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_0__::func_661(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_158(int iParam0, int iParam1, int iParam2)//Position - 0x2C3C5
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
				if (func_44(iParam0, iParam1, iVar0))
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
				if (func_44(iParam0, iParam1, iVar1))
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

void func_168(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2F138
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_78127 != __LIB_0__::func_5() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_0__::func_538(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_0__::func_538(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_0__::func_538(Global_2883588, 2, 1, 1, -1);
			}
			if (bParam3)
			{
				iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Global_2883588);
				iVar5 = 0;
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (iVar5 < Global_4538446)
					{
						Global_4538446[iVar5] = -1;
						Global_4538457[iVar5] = -1;
					}
					FILES::GET_VARIANT_COMPONENT(Global_2883588, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar4 != 10 && iVar4 != 9)
					{
						if (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("STOCKINGS"), 0))
						{
						}
						else if (iVar2 != 0 && iVar2 != joaat("0"))
						{
							__LIB_0__::func_538(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_168(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
						}
					}
					iVar1++;
				}
				Global_4538445++;
				if (Global_4538445 < 2)
				{
					iVar1 = 0;
					while (iVar1 < iVar5)
					{
						if (iVar1 < Global_4538446)
						{
							if (Global_4538446[iVar1] != -1)
							{
								if (iParam0 == joaat("MP_M_Freemode_01"))
								{
									func_168(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_168(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
								}
							}
						}
						iVar1++;
					}
				}
				Global_4538445 = (Global_4538445 - 1);
			}
			return;
		}
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && !BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (__LIB_0__::func_36(iParam1, Global_78130[1 /*14*/].f_2, &iVar6))
			{
				iVar7 = __LIB_0__::func_369(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__::func_413(iVar6, iVar7, Global_78127, 1, 0);
			}
			if (bParam3 == 1)
			{
				if (iParam0 == joaat("MP_M_Freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar8 = (75 + Global_78130[2 /*14*/].f_4);
							func_168(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_168(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_168(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_168(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_168(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_168(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_168(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_168(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_168(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_168(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_168(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_168(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_168(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
									break;
								}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == joaat("MP_F_Freemode_01"))
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_168(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_168(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_168(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_168(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_222(int iParam0)//Position - 0x4C505
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_158(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_11"), 0))
					{
						return 1;
					}
					else if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_19"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_23"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_27"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_1"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						return 1;
					}
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_158(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
					{
						return 1;
					}
					else if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_22"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_23"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_26"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_28"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_6"), 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_225(int iParam0, int iParam1, int iParam2)//Position - 0x4C877
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_305(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_227(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4C93E
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_305(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_234(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x4CBC2
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
										func_234(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_234(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_238(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_227(iParam0, iVar10, &iVar4, 1))
							{
								func_234(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_234(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_234(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_234(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_234(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_234(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_234(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_234(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_234(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_234(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_227(iParam0, iVar10, &iVar4, 0))
		{
			func_234(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_225(iParam0, iVar10, &iVar4))
		{
			func_234(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_238(int iParam0, int iParam1, int iParam2)//Position - 0x4D562
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
				if (func_305(iParam0, iParam1, iVar0))
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
				if (func_305(iParam0, iParam1, iVar1))
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

int func_305(int iParam0, int iParam1, int iParam2)//Position - 0x61CE2
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
				if (!func_305(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_305(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_305(iParam0, 14, iVar4))
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
			if (!func_305(iParam0, 14, uVar8[iVar7]))
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

void func_309(var uParam0)//Position - 0x61FDA
{
	switch (*uParam0)
	{
		case 1:
			func_310("CMN_GENDEST" /* GXT: ~s~The car was destroyed. */);
			break;
		case 2:
			func_310("CAR4_CUND");
			break;
		case 3:
			func_310("CAR4_CLEFT");
			break;
		case 6:
			func_310("CAR4_GGAR");
			break;
		case 7:
			func_310("CAR4_SGAR");
			break;
		case 5:
			func_310("CAR4_CGAR");
			break;
		case 8:
			func_310("CAR4_DDEAD");
			break;
		case 9:
			func_310("CAR4_DATTA");
			break;
		case 0:
		case 10:
			func_310("CAR4_FAIL");
			break;
	}
}

void func_310(char* sParam0)//Position - 0x62092
{
	__LIB_0__::func_381(sParam0);
	func_311(0);
}

void func_311(int iParam0)//Position - 0x620A5
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_312(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_312(int iParam0)//Position - 0x620EA
{
	int iVar0;
	int iVar1;
	__LIB_16__::func_4();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_313(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_113386.f_9085.f_330[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085)
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

void func_313(var uParam0, int iParam1)//Position - 0x621FA
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
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_315(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_315(int iParam0, var uParam1, float fParam2)//Position - 0x623CE
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
			return func_315(8, uParam1, fParam2);
			break;
		case 10:
			return func_315(8, uParam1, fParam2);
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

void func_347()//Position - 0x67324
{
	__LIB_0__::func_483(24, PLAYER::PLAYER_PED_ID(), 0);
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_41748[24 /*31*/]))
	{
		Global_41748[24 /*31*/].f_22 = 0f;
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41748[24 /*31*/], Global_41748[24 /*31*/].f_22, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[24 /*31*/], 4, false, true);
	}
}

int func_349(int iParam0)//Position - 0x6742F
{
	switch (*iParam0)
	{
		case 0:
			if (func_361("car_4_ext"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_106.f_0, false))
				{
					if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_106.f_0, 0))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_106.f_0, 0, 0, 0f);
					}
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_106.f_0, false, false, false);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_106.f_0, "movie_car", 1, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_77.f_0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_77.f_0, false))
					{
						PED::SET_FORCE_FOOTSTEP_UPDATE(Local_77.f_0, false);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_77.f_0, "Devin", 1, 0, 0);
					}
				}
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 2, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 3, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 4, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 5, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 6, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 7, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 8, 2, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 9, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 10, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 11, 0, 0, 0);
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				AUDIO::STOP_AUDIO_SCENE("CAR_3_GO_TO_GARAGE");
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_sc1_06_gate_l"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_sc1_06_gate_r"));
				func_351(&Local_130, 1);
				MISC::CLEAR_AREA_OF_OBJECTS(484.687f, -1315.512f, 28.202f, 4.5f, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_116, 100f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_116, 100f, false, false, false, false, false, false, 0);
				FIRE::STOP_FIRE_IN_RANGE(Local_116, 20f);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_116, 20f);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_116, 20f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_116, 20f);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_347();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (iLocal_305 == 1)
				{
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-449343164))
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-449343164, -1f, false, false);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-449343164, 5, false, true);
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
					__LIB_17__::func_202(PLAYER::PLAYER_PED_ID(), 493.4449f, -1313.074f, 28.2614f, 300.9095f, 0, 1, 0);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), true, 1, false);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
				RECORDING::REPLAY_STOP_EVENT();
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				return 1;
			}
			else if (iLocal_305 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
					iLocal_305 = 1;
				}
			}
			break;
	}
	return 0;
}

void func_351(var uParam0, int iParam1)//Position - 0x677AF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6[iVar0 /*8*/]))
		{
			if (iParam1 == 1)
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_6[iVar0 /*8*/]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_6[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
}

int func_361(char* sParam0)//Position - 0x67AAF
{
	if (__LIB_13__::func_801(sParam0))
	{
		return 1;
	}
	else
	{
		if (__LIB_0__::func_90())
		{
			if (!CUTSCENE::HAS_THIS_CUTSCENE_LOADED(sParam0))
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
		}
		CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
	}
	return 0;
}

int func_364(int iParam0)//Position - 0x67B2D
{
	bool bVar0;
	MISC::SET_BIT(&(Local_118.f_13), 20);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	func_488(&iLocal_361);
	func_479(&Local_93, PLAYER::PLAYER_PED_ID(), Local_106.f_0);
	func_455(&(Local_424[0 /*18*/]), PLAYER::PLAYER_PED_ID());
	func_450(&(Local_424[1 /*18*/]), PLAYER::PLAYER_PED_ID());
	if (HUD::DOES_BLIP_EXIST(Local_118.f_5))
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_3_GO_TO_GARAGE"))
		{
			AUDIO::START_AUDIO_SCENE("CAR_3_GO_TO_GARAGE");
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_77.f_0) || !iLocal_402)
	{
		func_347();
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_41748[24 /*31*/]))
	{
		AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(Global_41748[24 /*31*/], true);
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_51, true) < 50f)
	{
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_51, 5.25f, 4);
			iLocal_402 = 0;
		}
		else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			iLocal_402 = 1;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_51, true) > 75f)
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
			iLocal_402 = 0;
		}
	}
	if (__LIB_0__::func_719() || __LIB_6__::func_181())
	{
		if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("car_4_ext") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_51, true) < 15f)
	{
		CUTSCENE::REQUEST_CUTSCENE("car_4_ext", 8);
		STREAMING::REQUEST_MODEL(joaat("prop_sc1_06_gate_l"));
		STREAMING::REQUEST_MODEL(joaat("prop_sc1_06_gate_r"));
		STREAMING::REMOVE_ANIM_DICT("move_m@generic");
		STREAMING::REMOVE_ANIM_DICT("move_m@intimidation@cop@unarmed");
		STREAMING::REMOVE_ANIM_DICT("reaction@intimidation@cop@unarmed");
		func_447(&Local_108, 0, 1);
		func_446(&Local_418, 0, 0, 1);
		func_446(&Local_420, 0, 0, 1);
		func_446(&Local_421, 0, 0, 1);
		func_446(&Local_422, 0, 0, 1);
		func_446(&Local_423, 0, 0, 1);
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_77.f_0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_77.f_0, false))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Devin", Local_77.f_0, 0);
				}
			}
			else
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 2, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 3, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 4, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 5, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 6, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 7, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 8, 2, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 9, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 10, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 11, 0, 0, 0);
			}
		}
		if (iLocal_390 == 0)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("CAR3_DELIVER"))
			{
				iLocal_390 = 1;
			}
		}
	}
	else if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("car_4_ext") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::REMOVE_CUTSCENE();
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_sc1_06_gate_l"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_sc1_06_gate_r"));
	}
	switch (*iParam0)
	{
		case 0:
			func_444(Local_106.f_0, &Local_130);
			func_440(Local_106.f_0, &Local_130, 1);
			if (!__LIB_0__::func_769(45) && !__LIB_1__::func_860(45))
			{
				func_435(Local_106.f_0, &Local_130, "CAR_3_TYRE_BURST_CAM");
			}
			else
			{
				func_434(&Local_130);
			}
			func_433(Local_130, &Local_426);
			func_429(Local_130, PLAYER::PLAYER_PED_ID(), Local_106.f_0, &(Local_106.f_17), &(Local_106.f_8));
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_106.f_0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_106.f_0, false))
				{
					if (HUD::DOES_BLIP_EXIST(Local_106.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_106.f_1));
					}
				}
			}
			if (iLocal_322 == 1)
			{
				if (HUD::DOES_BLIP_EXIST(Local_118.f_5))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_52, true) > 500f)
					{
						PED::CLEAR_PED_NON_CREATION_AREA();
						TASK::SET_SCENARIO_GROUP_ENABLED("MOVIE_STUDIO_SECURITY", true);
						if (iLocal_400 != 0)
						{
							PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_400, false);
						}
						if (iLocal_401 != 0)
						{
							PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_401, false);
						}
						iLocal_322 = 0;
					}
				}
			}
			__LIB_17__::func_730(&Local_118, Local_51, __LIB_15__::func_994(), 1, Local_106.f_0, &Local_60, &cLocal_63, &cLocal_66, 1, 0, 1, -1);
			if (HUD::DOES_BLIP_EXIST(Local_118.f_5))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.3f, -1316.18f, 27.7f, 477.64f, -1319.01f, 31.2f, 5f, false, true, 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_51, true) < __LIB_0__::func_331(ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()), 1.25f, 3.5f)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 474.037f, -1316.9613f, 28.106997f, 481.34436f, -1311.5627f, 31.20297f, 6f, false, true, 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("CAR3_STOP_TRACK");
					func_351(&Local_130, 0);
					func_447(&Local_109, 1, 1);
					func_447(&Local_110, 1, 1);
					func_447(&Local_112, 1, 1);
					if (__LIB_0__::func_77(0))
					{
						__LIB_0__::func_366(1);
						__LIB_1__::func_33(0);
					}
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_77.f_0, -1, 2048, 2);
					iLocal_362 = 1;
					*iParam0++;
				}
			}
			break;
		case 1:
			__LIB_1__::func_33(0);
			if (__LIB_0__::func_213(Local_106.f_0, 2.5f, 1, 0.75f, 0, 1, 0))
			{
				__LIB_17__::func_218(&Local_118, 0);
				*iParam0++;
			}
			break;
		case 2:
			__LIB_1__::func_33(0);
			__LIB_15__::func_986();
			bVar0 = false;
			if (ENTITY::DOES_ENTITY_EXIST(Local_77.f_0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_77.f_0, false))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_77.f_0, "misscarsteal4leadinoutcar_4_ext", "leadin_action_devin", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_77.f_0, "misscarsteal4leadinoutcar_4_ext", "leadin_action_devin") > 0.875f)
						{
							if (!__LIB_0__::func_75())
							{
								bVar0 = true;
							}
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_77.f_0, "misscarsteal4leadinoutcar_4_ext", "leadin_loop_devin", 3))
					{
						if (!__LIB_0__::func_75())
						{
							bVar0 = true;
						}
					}
				}
			}
			if (bVar0)
			{
				func_365(&Local_76, 0, 1, 1);
				STREAMING::REMOVE_ANIM_DICT("dead");
				STREAMING::REMOVE_ANIM_DICT("misscarsteal4@actor");
				STREAMING::REMOVE_ANIM_DICT("misscarsteal4leadinoutcar_4_ext");
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_106.f_0, false))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_106.f_0, false, false, false);
				}
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				PED::SET_FORCE_FOOTSTEP_UPDATE(Local_77.f_0, false);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				return 1;
			}
			break;
	}
	return 0;
}

void func_365(int* iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6813F
{
	if (iParam1 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (iParam2 == 1)
			{
				if (PED::IS_PED_INJURED(*iParam0))
				{
					if (ENTITY::IS_ENTITY_DEAD(*iParam0, false))
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, false);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_1));
					}
				}
			}
			else if (iParam2 == 0)
			{
				if (!PED::IS_PED_INJURED(*iParam0))
				{
					PED::SET_PED_KEEP_TASK(*iParam0, bParam3);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_1));
					}
				}
			}
		}
	}
	else if (iParam1 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (PED::IS_PED_INJURED(*iParam0) || !PED::IS_PED_INJURED(*iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(*iParam0, false) || !ENTITY::IS_ENTITY_DEAD(*iParam0, false))
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, false);
				}
				PED::DELETE_PED(iParam0);
				if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_1));
				}
			}
		}
		iParam0->f_10 = 0;
		iParam0->f_9 = 0;
		iParam0->f_12 = 0;
		iParam0->f_14 = 0;
		iParam0->f_13 = 0;
		iParam0->f_15 = 0;
		iParam0->f_16 = 0;
	}
}

void func_429(struct<37> Param0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0x6B206
{
	struct<3> Var0;
	if (*uParam4 == 0)
	{
		if (Param0.f_35 == 1)
		{
			if (CAM::IS_CINEMATIC_SHOT_ACTIVE(joaat("CAMERA_MAN_SHOT")))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Param0.f_6[Param0.f_36 /*8*/].f_1))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(Param0.f_6[Param0.f_36 /*8*/].f_1, false) };
					if (__LIB_1__::func_483(iParam2, iParam3))
					{
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iParam2, iParam3, Var0, 8, 25f, 1074266172, 500f, 10f, false);
						*uParam5 = 0;
						*uParam4 = 1;
					}
				}
			}
		}
	}
	else if (!CAM::IS_CINEMATIC_SHOT_ACTIVE(joaat("CAMERA_MAN_SHOT")))
	{
		if (*uParam5 == 0)
		{
			*uParam5 = MISC::GET_GAME_TIMER();
		}
		if (__LIB_38__::func_222(iParam3) || (*uParam5 != 0 && __LIB_16__::func_299(3000, *uParam5)))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			*uParam4 = 0;
		}
	}
}

void func_433(struct<38> Param0, int iParam1)//Position - 0x6B43E
{
	int iVar0;
	if (Param0.f_35 == 1)
	{
		if (iLocal_372 != Param0.f_37)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < *iParam1)
			{
				if (Param0.f_6[Param0.f_36 /*8*/].f_1 == (*iParam1)[iVar0 /*19*/])
				{
					(iParam1[iVar0 /*19*/])->f_16 = 1;
					iLocal_373++;
				}
				iVar0++;
			}
			iLocal_372 = Param0.f_37;
		}
	}
}

void func_434(var uParam0)//Position - 0x6B49C
{
	uParam0->f_6[0 /*8*/].f_3 = 0;
	uParam0->f_6[1 /*8*/].f_3 = 0;
	uParam0->f_6[2 /*8*/].f_3 = 0;
}

void func_435(int iParam0, var uParam1, char* sParam2)//Position - 0x6B4C2
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (uParam1->f_35 == 1)
			{
				if (uParam1->f_6[uParam1->f_36 /*8*/].f_3 != 0)
				{
					if (uParam1->f_33 == 0 && !CAM::IS_CINEMATIC_SHOT_ACTIVE(joaat("CAMERA_MAN_SHOT")))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false) && !MISC::IS_STUNT_JUMP_IN_PROGRESS())
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_6[uParam1->f_36 /*8*/].f_1, false))
							{
								HUD::CLEAR_HELP(true);
								HUD::DISPLAY_HUD(false);
								HUD::DISPLAY_RADAR(false);
								__LIB_0__::func_671(1);
								__LIB_0__::func_366(1);
								PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
								PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), false, 0);
								CAM::CREATE_CINEMATIC_SHOT(joaat("CAMERA_MAN_SHOT"), 2000, false, uParam1->f_6[uParam1->f_36 /*8*/].f_1);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
								{
									AUDIO::START_AUDIO_SCENE(sParam2);
								}
								uParam1->f_33 = 1;
							}
						}
						else
						{
							func_434(uParam1);
						}
					}
					else if ((MISC::GET_GAME_TIMER() - uParam1->f_6[uParam1->f_36 /*8*/].f_3) > 1500 || !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_6[uParam1->f_36 /*8*/].f_1, false))
					{
						CAM::STOP_CINEMATIC_SHOT(joaat("CAMERA_MAN_SHOT"));
						STREAMING::REMOVE_PTFX_ASSET();
						HUD::DISPLAY_HUD(true);
						HUD::DISPLAY_RADAR(true);
						__LIB_0__::func_671(0);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
						{
							AUDIO::STOP_AUDIO_SCENE(sParam2);
						}
						PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
						uParam1->f_6[uParam1->f_36 /*8*/].f_4 = { 0f, 0f, 0f };
						func_434(uParam1);
					}
				}
			}
		}
	}
}

void func_440(int iParam0, var uParam1, int iParam2)//Position - 0x6B74C
{
	int iVar0;
	struct<3> Var1[3];
	var uVar2[3];
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	float fVar8;
	float fVar9;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = 0;
			while (iVar0 < uParam1->f_6)
			{
				if (uParam1->f_6[iVar0 /*8*/].f_4 != 0f)
				{
					if (uParam1->f_35 == 0)
					{
						if (SYSTEM::VDIST2(uParam1->f_6[iVar0 /*8*/].f_4, ENTITY::GET_ENTITY_COORDS(iParam0, true)) > 2500f)
						{
							uParam1->f_6[iVar0 /*8*/].f_4 = { 0f, 0f, 0f };
						}
						else
						{
							uParam1->f_6[iVar0 /*8*/].f_1 = VEHICLE::GET_CLOSEST_VEHICLE(uParam1->f_6[iVar0 /*8*/].f_4, 20f, 0, 100359);
							if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[iVar0 /*8*/].f_1) && uParam1->f_6[iVar0 /*8*/].f_1 != iParam0)
							{
								STREAMING::REQUEST_PTFX_ASSET();
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_6[iVar0 /*8*/].f_1, false) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(uParam1->f_6[iVar0 /*8*/].f_1)))
								{
									Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_6[iVar0 /*8*/].f_1, true) };
									if (((((((SYSTEM::VDIST2(Var3, uParam1->f_6[iVar0 /*8*/].f_4) < 100f && MISC::ABSF((Var3.f_2 - uParam1->f_6[iVar0 /*8*/].f_4.f_2)) < 1.25f) && ENTITY::GET_ENTITY_SPEED(uParam1->f_6[iVar0 /*8*/].f_1) > 10f) && ENTITY::IS_ENTITY_UPRIGHT(uParam1->f_6[iVar0 /*8*/].f_1, 90f)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam1->f_6[iVar0 /*8*/].f_1)) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[0 /*8*/])) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[1 /*8*/])) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[2 /*8*/]))
									{
										Var4 = { __LIB_3__::func_80(0f, 0f, ENTITY::GET_ENTITY_HEADING(uParam1->f_6[iVar0 /*8*/].f_1)) };
										Var5 = { uParam1->f_6[iVar0 /*8*/].f_4 - Var3 };
										Var5 = { Var5 / FtoV(SYSTEM::VMAG(Var5)) };
										if (__LIB_0__::func_158(Var4, Var5) > 0f)
										{
											uParam1->f_37++;
											uParam1->f_35 = 1;
											uParam1->f_36 = iVar0;
											uParam1->f_33 = 0;
											uParam1->f_6[iVar0 /*8*/].f_3 = MISC::GET_GAME_TIMER();
											Var1[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_6[iVar0 /*8*/].f_1, 0.8f, 6f, 0f) };
											Var1[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_6[iVar0 /*8*/].f_1, 0.5f, 7f, 0f) };
											Var1[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_6[iVar0 /*8*/].f_1, 0.9f, 8f, 0f) };
											MISC::GET_GROUND_Z_FOR_3D_COORD(Var1[0 /*3*/], &(uVar2[0]), false, false);
											MISC::GET_GROUND_Z_FOR_3D_COORD(Var1[1 /*3*/], &(uVar2[1]), false, false);
											MISC::GET_GROUND_Z_FOR_3D_COORD(Var1[2 /*3*/], &(uVar2[2]), false, false);
											ENTITY::SET_ENTITY_COORDS(uParam1->f_6[0 /*8*/], Var1[0 /*3*/], Var1[0 /*3*/].f_1, (uVar2[0] + 0.05f), true, false, false, true);
											ENTITY::SET_ENTITY_COORDS(uParam1->f_6[1 /*8*/], Var1[1 /*3*/], Var1[1 /*3*/].f_1, (uVar2[1] + 0.05f), true, false, false, true);
											ENTITY::SET_ENTITY_COORDS(uParam1->f_6[2 /*8*/], Var1[2 /*3*/], Var1[2 /*3*/].f_1, (uVar2[2] + 0.05f), true, false, false, true);
											uParam1->f_6[iVar0 /*8*/].f_4 = { Var1[1 /*3*/] };
										}
									}
								}
							}
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_6[iVar0 /*8*/].f_1, false))
					{
						Var6 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_6[iVar0 /*8*/].f_1, false) };
						if (uParam1->f_6[iVar0 /*8*/].f_2 == 0)
						{
							STREAMING::REQUEST_PTFX_ASSET();
							if (SYSTEM::VDIST2(Var6, uParam1->f_6[iVar0 /*8*/].f_4) < 9f)
							{
								fVar7 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam1->f_6[iVar0 /*8*/].f_1);
								fVar8 = ENTITY::GET_ENTITY_SPEED(uParam1->f_6[iVar0 /*8*/].f_1);
								fVar9 = (fVar8 / (fVar7 - 20f));
								if (fVar9 > 1f)
								{
									fVar9 = 1f;
								}
								else if (fVar9 < 0.3f)
								{
									fVar9 = 0.3f;
								}
								uParam1->f_6[iVar0 /*8*/].f_2 = (MISC::GET_GAME_TIMER() - SYSTEM::ROUND(((1f - fVar9) * 1000f)));
								VEHICLE::SET_VEHICLE_TYRE_BURST(uParam1->f_6[iVar0 /*8*/].f_1, 0, true, 1000f);
								VEHICLE::SET_VEHICLE_TYRE_BURST(uParam1->f_6[iVar0 /*8*/].f_1, 1, true, 1000f);
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CAR_STEAL_3_AGENT_TYRE_BURST", uParam1->f_6[iVar0 /*8*/].f_1, "CAR_STEAL_3_AGENT", false, 0);
								if (STREAMING::HAS_PTFX_ASSET_LOADED())
								{
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal4_tyre_spiked", uParam1->f_6[iVar0 /*8*/].f_1, 1.2f, 2f, -0.3f, 0f, 0f, 0f, 1f, false, false, false);
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal4_tyre_spiked", uParam1->f_6[iVar0 /*8*/].f_1, -1.2f, 2f, -0.3f, 0f, 0f, 0f, 1f, false, false, false);
								}
								if (iParam2 == 1)
								{
									if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
									{
										if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
										{
											if (__LIB_12__::func_390(ENTITY::GET_ENTITY_MODEL(uParam1->f_6[iVar0 /*8*/].f_1)))
											{
												PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
												PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
											}
										}
									}
								}
							}
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_6[iVar0 /*8*/].f_2) < 1000)
						{
							ENTITY::APPLY_FORCE_TO_ENTITY(uParam1->f_6[iVar0 /*8*/].f_1, 0, -25f, 0f, 0f, 0f, -2f, 0f, 0, true, true, true, false, true);
						}
					}
				}
				iVar0++;
			}
		}
	}
}

void func_444(int iParam0, var uParam1)//Position - 0x6BD1F
{
	int iVar0;
	int iVar1;
	int iVar2;
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0))
			{
				if (!CAM::IS_CINEMATIC_SHOT_ACTIVE(joaat("CAMERA_MAN_SHOT")) && !MISC::IS_STUNT_JUMP_IN_PROGRESS())
				{
					STREAMING::REQUEST_PTFX_ASSET();
					AUDIO::REQUEST_AMBIENT_AUDIO_BANK("CAR_THEFT_MOVIE_LOT", false, -1);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
					if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 230 /*INPUT_SCRIPT_LS*/) && ENTITY::IS_ENTITY_UPRIGHT(iParam0, 90f))
					{
						if ((MISC::GET_GAME_TIMER() - uParam1->f_31) > 1600)
						{
							iVar1 = 1;
							if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[0 /*8*/]))
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(uParam1->f_6[0 /*8*/], true)) < 9f)
								{
									iVar1 = 0;
								}
							}
							if (iVar1 == 1)
							{
								iVar2 = func_445(*uParam1);
								if (iVar2 == -1)
								{
									iVar2 = 0;
								}
								uParam1->f_6[iVar2 /*8*/].f_4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, -2f, 0f) };
								uParam1->f_6[iVar2 /*8*/].f_2 = 0;
								uParam1->f_6[iVar2 /*8*/].f_3 = 0;
								uParam1->f_6[iVar2 /*8*/].f_1 = 0;
								uParam1->f_36 = 0;
								uParam1->f_35 = 0;
								iVar0 = 0;
								while (iVar0 < uParam1->f_6)
								{
									if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[iVar0 /*8*/]))
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam1->f_6[iVar0 /*8*/]))
										{
											OBJECT::DELETE_OBJECT(&(uParam1->f_6[iVar0 /*8*/]));
										}
										else
										{
											ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam1->f_6[iVar0 /*8*/]));
										}
									}
									iVar0++;
								}
								uParam1->f_31 = MISC::GET_GAME_TIMER();
							}
						}
					}
					if (uParam1->f_31 != 0)
					{
						if ((MISC::GET_GAME_TIMER() - uParam1->f_31) > 100)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[0 /*8*/]))
							{
								uParam1->f_6[0 /*8*/] = OBJECT::CREATE_OBJECT(joaat("prop_tyre_spike_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, -1.2f, -0.4f), true, true, false);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_6[0 /*8*/], iParam0, true);
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CAR_THEFT_MOVIE_LOT_DROP_SPIKES", iParam0, 0, false, 0);
							}
						}
						if ((MISC::GET_GAME_TIMER() - uParam1->f_31) > 200)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[1 /*8*/]))
							{
								uParam1->f_6[1 /*8*/] = OBJECT::CREATE_OBJECT(joaat("prop_tyre_spike_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0.1f, -1.1f, -0.4f), true, true, false);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_6[1 /*8*/], iParam0, true);
							}
						}
						if ((MISC::GET_GAME_TIMER() - uParam1->f_31) > 300)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[2 /*8*/]))
							{
								uParam1->f_6[2 /*8*/] = OBJECT::CREATE_OBJECT(joaat("prop_tyre_spike_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, -0.1f, -1f, -0.34f), true, true, false);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_6[2 /*8*/], iParam0, true);
								uParam1->f_31 = 0;
							}
							uParam1->f_32++;
							uParam1->f_34 = 1;
							uParam1->f_36 = 0;
							uParam1->f_35 = 0;
							uParam1->f_6[0 /*8*/].f_7 = 0;
							uParam1->f_6[1 /*8*/].f_7 = 0;
							uParam1->f_6[2 /*8*/].f_7 = 0;
						}
					}
					if (STREAMING::HAS_PTFX_ASSET_LOADED())
					{
						if (uParam1->f_6[0 /*8*/].f_7 == 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[0 /*8*/]))
							{
								if (!ENTITY::IS_ENTITY_IN_AIR(uParam1->f_6[0 /*8*/]))
								{
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal3_tyre_spikes", uParam1->f_6[0 /*8*/], 0f, 0f, -0.025f, 0f, 0f, 0f, 1f, false, false, false);
									uParam1->f_6[0 /*8*/].f_7 = 1;
								}
							}
						}
						if (uParam1->f_6[1 /*8*/].f_7 == 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[1 /*8*/]))
							{
								if (!ENTITY::IS_ENTITY_IN_AIR(uParam1->f_6[1 /*8*/]))
								{
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal3_tyre_spikes", uParam1->f_6[1 /*8*/], 0f, 0f, -0.025f, 0f, 0f, 0f, 1f, false, false, false);
									uParam1->f_6[1 /*8*/].f_7 = 1;
								}
							}
						}
						if (uParam1->f_6[2 /*8*/].f_7 == 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[2 /*8*/]))
							{
								if (!ENTITY::IS_ENTITY_IN_AIR(uParam1->f_6[2 /*8*/]))
								{
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal3_tyre_spikes", uParam1->f_6[2 /*8*/], 0f, 0f, -0.025f, 0f, 0f, 0f, 1f, false, false, false);
									uParam1->f_6[2 /*8*/].f_7 = 1;
								}
							}
						}
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < uParam1->f_6)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[iVar0 /*8*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_6[iVar0 /*8*/], false))
					{
						if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(uParam1->f_6[iVar0 /*8*/]))
						{
							PHYSICS::ACTIVATE_PHYSICS(uParam1->f_6[iVar0 /*8*/]);
							ENTITY::SET_ENTITY_DYNAMIC(uParam1->f_6[iVar0 /*8*/], true);
						}
					}
				}
				iVar0++;
			}
		}
	}
}

int func_445(struct<7> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)//Position - 0x6C13E
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Param0.f_6)
	{
		if (Param0.f_6[iVar0 /*8*/].f_4 == 0f)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_446(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6C173
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_365(iParam0[iVar0 /*18*/], iParam1, iParam2, bParam3);
		iVar0++;
	}
}

void func_447(int* iParam0, int iParam1, int iParam2)//Position - 0x6C1A4
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				ENTITY::DETACH_ENTITY(*iParam0, true, true);
			}
		}
		if (iParam2 == 1)
		{
			ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
		}
		if (iParam1 == 1)
		{
			OBJECT::DELETE_OBJECT(iParam0);
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_450(int* iParam0, int iParam1)//Position - 0x6C210
{
	float fVar0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iParam0->f_17 = __LIB_0__::func_76(*iParam0, iParam1, 1);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			if (!PED::IS_PED_INJURED(iParam1))
			{
				if (iParam0->f_15 != 19)
				{
					if ((((iLocal_325 == 1 || iLocal_306 == 1) || iLocal_318 == 1) || PED::IS_PED_DEAD_OR_DYING(*iParam0, true)) || func_454(*iParam0, iParam1))
					{
						__LIB_17__::func_205(iParam0, 19);
					}
				}
				switch (iParam0->f_15)
				{
					case 5:
						if (iParam0->f_14 == 0)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "beginning_loop_grip", 3))
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "misscarsteal4@director_grip", "beginning_loop_grip", Local_109.f_1, Local_109.f_4, 1000f, -8f, -1, 790537, 0f, 2, 2);
							}
							else
							{
								iParam0->f_14 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "beginning_loop_grip", 3))
						{
							PED::SET_PED_CAPSULE(*iParam0, 0.6f);
							PED::SET_PED_RESET_FLAG(*iParam0, 129, true);
							if (Local_424[0 /*18*/].f_15 == 6)
							{
								__LIB_17__::func_205(iParam0, 6);
							}
						}
						break;
					case 6:
						if (iParam0->f_14 == 0)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "react_grip", 3))
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "misscarsteal4@director_grip", "react_grip", Local_109.f_1, Local_109.f_4, 8f, -4f, -1, 790538, 0f, 2, 2);
							}
							else
							{
								iParam0->f_14 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "react_grip", 3))
						{
							PED::SET_PED_CAPSULE(*iParam0, 0.6f);
							PED::SET_PED_RESET_FLAG(*iParam0, 129, true);
							fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@director_grip", "react_grip");
							if (ENTITY::DOES_ENTITY_EXIST(Local_112.f_0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_112.f_0, false))
								{
									if (ENTITY::IS_ENTITY_ATTACHED(Local_112.f_0))
									{
										if (fVar0 >= 0.6f)
										{
											ENTITY::DETACH_ENTITY(Local_112.f_0, false, true);
										}
									}
								}
							}
							if (Local_424[0 /*18*/].f_15 == 7)
							{
								__LIB_17__::func_205(iParam0, 7);
							}
						}
						break;
					case 7:
						if (iParam0->f_14 == 0)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "end_loop_grip", 3))
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "misscarsteal4@director_grip", "end_loop_grip", Local_109.f_1, Local_109.f_4, 8f, -8f, -1, 790537, 0f, 2, 2);
							}
							else
							{
								iParam0->f_14 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "end_loop_grip", 3))
						{
							PED::SET_PED_CAPSULE(*iParam0, 0.6f);
							PED::SET_PED_RESET_FLAG(*iParam0, 129, true);
						}
						break;
					case 19:
						if (iParam0->f_14 == 0)
						{
							iLocal_318 = 1;
							if (!PED::IS_PED_RAGDOLL(*iParam0))
							{
								TASK::CLEAR_PED_TASKS(*iParam0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, true);
								PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 4, true);
								PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, true);
								PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 128, true);
								if (ENTITY::DOES_ENTITY_EXIST(Local_112.f_0))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_112.f_0, false))
									{
										if (ENTITY::IS_ENTITY_ATTACHED(Local_112.f_0))
										{
											ENTITY::DETACH_ENTITY(Local_112.f_0, false, true);
										}
									}
								}
								TASK::TASK_SMART_FLEE_PED(*iParam0, iParam1, 300f, -1, false, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
								PED::SET_PED_KEEP_TASK(*iParam0, true);
								iParam0->f_14 = 1;
							}
						}
						break;
					}
				}
		}
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false) || iParam0->f_15 == 19)
		{
			if (bLocal_319 == 0)
			{
				if (iParam0->f_17 > 200f)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
					func_447(&Local_112, 0, 1);
				}
			}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0, false) || iParam0->f_15 == 19)
		{
			if (ENTITY::IS_ENTITY_DEAD(*iParam0, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_112.f_0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_112.f_0, false))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_112.f_0))
						{
							ENTITY::DETACH_ENTITY(Local_112.f_0, false, true);
						}
					}
				}
				iParam0->f_15 = 1;
				if (iParam0->f_16 == 0)
				{
					iParam0->f_16 = func_452(iParam0);
					func_451(iParam0->f_16, &iLocal_369, &iLocal_370, &iLocal_371);
				}
			}
			if (iParam0->f_17 > 200f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
				func_447(&Local_112, 0, 1);
			}
		}
	}
}

void func_451(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6C608
{
	switch (iParam0)
	{
		case 4:
			*iParam1++;
			break;
		case 2:
			*iParam2++;
			break;
		case 3:
			*iParam3++;
			break;
	}
}

int func_452(int* iParam0)//Position - 0x6C64A
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			iVar0 = PED::GET_PED_SOURCE_OF_DEATH(*iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (iVar1 == PLAYER::PLAYER_PED_ID())
					{
						if (PED::WAS_PED_KILLED_BY_STEALTH(*iParam0))
						{
							return 2;
						}
						else if (PED::WAS_PED_KILLED_BY_TAKEDOWN(*iParam0))
						{
							return 3;
						}
						else
						{
							return 4;
						}
					}
				}
				else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
				{
					return 5;
				}
				else
				{
					return 1;
				}
			}
			else
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, joaat("WEAPON_STUNGUN"), 0))
				{
					return 2;
				}
				iParam0->f_12++;
				if (iParam0->f_12 == 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_454(int iParam0, int iParam1)//Position - 0x6C712
{
	struct<3> Var0;
	if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_INJURED(iParam1))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		if (((((((PED::HAS_PED_RECEIVED_EVENT(iParam0, 29) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 60)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 126)) || MISC::IS_BULLET_IN_AREA(Var0, 16f, true)) || MISC::IS_BULLET_IN_AREA(Var0, 16f, false)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, 16f)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_455(int* iParam0, int iParam1)//Position - 0x6C7C0
{
	float fVar0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iParam0->f_17 = __LIB_0__::func_76(*iParam0, iParam1, 1);
		func_478(*iParam0, iParam1, &(iParam0->f_13), &(iParam0->f_11), 1000);
		func_458(iParam0, iParam1);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			if (!PED::IS_PED_INJURED(iParam1))
			{
				PED::SET_PED_RESET_FLAG(*iParam0, 126, true);
				switch (iParam0->f_15)
				{
					case 5:
						if (iParam0->f_14 == 0)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "beginning_loop_director", 3))
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "misscarsteal4@director_grip", "beginning_loop_director", Local_109.f_1, Local_109.f_4, 1000f, -8f, -1, 790537, 0f, 2, 1);
							}
							else
							{
								ENTITY::SET_ENTITY_HEALTH(*iParam0, 105, 0);
								PED::SET_PED_DIES_WHEN_INJURED(*iParam0, true);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(*iParam0, Local_109.f_0, true);
								iParam0->f_14 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "beginning_loop_director", 3))
						{
							PED::SET_PED_CAPSULE(*iParam0, 0.6f);
							PED::SET_PED_RESET_FLAG(*iParam0, 129, true);
							fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@director_grip", "beginning_loop_director");
							if (func_456("CST4_DBRAN"))
							{
								if (fVar0 <= 0.06f || fVar0 >= 0.99f)
								{
									__LIB_17__::func_205(iParam0, 6);
								}
							}
						}
						if (((iLocal_325 == 1 || iLocal_306 == 1) || iLocal_318 == 1) || func_454(*iParam0, iParam1))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "beginning_loop_director", 3))
							{
								__LIB_17__::func_205(iParam0, 8);
							}
							else
							{
								__LIB_17__::func_205(iParam0, 19);
							}
						}
						break;
					case 6:
						if (iParam0->f_14 == 0)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "react_director", 3))
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "misscarsteal4@director_grip", "react_director", Local_109.f_1, Local_109.f_4, 8f, -4f, -1, 790538, 0f, 2, 1);
							}
							else
							{
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(*iParam0, Local_109.f_0, true);
								iParam0->f_14 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "react_director", 3))
						{
							PED::SET_PED_CAPSULE(*iParam0, 0.6f);
							PED::SET_PED_RESET_FLAG(*iParam0, 129, true);
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@director_grip", "react_director") >= 0.999f)
							{
								__LIB_17__::func_205(iParam0, 7);
							}
						}
						if (((iLocal_325 == 1 || iLocal_306 == 1) || iLocal_318 == 1) || func_454(*iParam0, iParam1))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "react_director", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@director_grip", "react_director") <= 0.118f)
							{
								__LIB_17__::func_205(iParam0, 8);
							}
							else
							{
								__LIB_17__::func_205(iParam0, 19);
							}
						}
						break;
					case 7:
						if (iParam0->f_14 == 0)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "end_loop_director", 3))
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "misscarsteal4@director_grip", "end_loop_director", Local_109.f_1, Local_109.f_4, 8f, -1.5f, -1, 790537, 0f, 2, 1);
							}
							else
							{
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(*iParam0, Local_109.f_0, true);
								iParam0->f_14 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "end_loop_director", 3))
						{
							PED::SET_PED_CAPSULE(*iParam0, 0.6f);
							PED::SET_PED_RESET_FLAG(*iParam0, 129, true);
						}
						if (((iLocal_325 == 1 || iLocal_306 == 1) || iLocal_318 == 1) || func_454(*iParam0, iParam1))
						{
							PED::SET_PED_MOVEMENT_CLIPSET(*iParam0, "move_injured_generic", 0.25f);
							__LIB_17__::func_205(iParam0, 19);
						}
						break;
					case 8:
						if (iParam0->f_14 == 0)
						{
							if (!PED::IS_PED_RAGDOLL(*iParam0))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "flee_exit_fwd_director", 3))
								{
									TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "misscarsteal4@director_grip", "flee_exit_fwd_director", Local_109.f_1, Local_109.f_4, 4f, -1.5f, -1, 790538, 0f, 2, 1);
								}
								else
								{
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(*iParam0, Local_109.f_0, true);
									iParam0->f_14 = 1;
								}
							}
							else
							{
								__LIB_17__::func_205(iParam0, 19);
							}
						}
						if (iParam0->f_14 == 1)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "flee_exit_fwd_director", 3))
							{
								if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@director_grip", "flee_exit_fwd_director") >= 0.725f)
								{
									__LIB_17__::func_205(iParam0, 3);
								}
							}
						}
						break;
					case 3:
						if (iParam0->f_14 == 0)
						{
							TASK::CLEAR_PED_TASKS(*iParam0);
							TASK::TASK_COWER(*iParam0, 7000);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
							iLocal_318 = 1;
							iParam0->f_10 = MISC::GET_GAME_TIMER();
							iParam0->f_14 = 1;
						}
						if (iParam0->f_14 == 1)
						{
							if (__LIB_16__::func_299(5000, iParam0->f_10))
							{
								__LIB_17__::func_205(iParam0, 19);
							}
						}
						break;
					case 19:
						if (iParam0->f_14 == 0)
						{
							iLocal_318 = 1;
							if (!PED::IS_PED_RAGDOLL(*iParam0))
							{
								if (!PED::IS_PED_FLEEING(*iParam0))
								{
									TASK::CLEAR_PED_TASKS(*iParam0);
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(*iParam0, 144);
									PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, true);
									PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 4, true);
									PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, true);
									PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 128, true);
									TASK::TASK_SMART_FLEE_PED(*iParam0, iParam1, 300f, -1, false, false);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
									PED::SET_PED_KEEP_TASK(*iParam0, true);
								}
								else
								{
									iParam0->f_14 = 1;
								}
							}
						}
						break;
					}
				}
		}
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false) || iParam0->f_15 == 19)
		{
			if (bLocal_319 == 0)
			{
				if (iParam0->f_17 > 200f)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					STREAMING::REMOVE_CLIP_SET("move_injured_generic");
					STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
					func_447(&Local_109, 0, 1);
				}
			}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0, false) || iParam0->f_15 == 19)
		{
			if (ENTITY::IS_ENTITY_DEAD(*iParam0, false))
			{
				iParam0->f_15 = 1;
				if (iParam0->f_16 == 0)
				{
					iParam0->f_16 = func_452(iParam0);
					func_451(iParam0->f_16, &iLocal_369, &iLocal_370, &iLocal_371);
				}
			}
			if (iParam0->f_17 > 200f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
				STREAMING::REMOVE_CLIP_SET("move_injured_generic");
				STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
			}
		}
	}
}

int func_456(char* sParam0)//Position - 0x6CDB6
{
	int iVar0;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (func_457(iVar0) != -1)
	{
		return 1;
	}
	return 0;
}

int func_457(int iParam0)//Position - 0x6CDD5
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_429)
	{
		if (iLocal_430[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_458(var uParam0, int iParam1)//Position - 0x6CE06
{
	struct<6> Var0;
	struct<6> Var1;
	var uVar2;
	struct<6> Var3;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
		{
			if (!iLocal_332)
			{
				if (uParam0->f_17 < 30f)
				{
					if (uParam0->f_15 != 19 && uParam0->f_15 != 3)
					{
						if (PED::IS_PED_IN_VEHICLE(iParam1, Local_106.f_0, true))
						{
							if (__LIB_0__::func_75())
							{
								Var1 = { __LIB_0__::func_486() };
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
								{
									if ((((!MISC::ARE_STRINGS_EQUAL(&Var1, "CST4_DSW") && !MISC::ARE_STRINGS_EQUAL(&Var1, "CST4_DSG")) && !MISC::ARE_STRINGS_EQUAL(&Var1, "CST4_DSC")) && !MISC::ARE_STRINGS_EQUAL(&Var1, "CST4_DSSET1")) && !MISC::ARE_STRINGS_EQUAL(&Var1, "CST4_DSSET2"))
									{
										__LIB_0__::func_429();
									}
								}
							}
							if (!__LIB_13__::func_755(&Local_118, 1))
							{
								if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_DSCAR", 7, 0, 0, 0))
								{
									iLocal_332 = 1;
									iLocal_327 = 1;
									iLocal_328 = 1;
									iLocal_329 = 1;
									iLocal_330 = 1;
									iLocal_331 = 1;
									iLocal_333 = 1;
									iLocal_334 = 1;
									iLocal_335 = 1;
									iLocal_336 = 1;
								}
							}
						}
					}
				}
			}
			if (!iLocal_325)
			{
				if (uParam0->f_17 < 20f && uParam0->f_13 == 1)
				{
					if ((((PED::IS_PED_SHOOTING(iParam1) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), *uParam0)) || PED::HAS_PED_RECEIVED_EVENT(*uParam0, 29)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), *uParam0)) || WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &uVar2, true))
					{
						if (__LIB_0__::func_75())
						{
							__LIB_0__::func_429();
						}
						if (!__LIB_13__::func_755(&Local_118, 1))
						{
							if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_DSW", 7, 0, 0, 0))
							{
								iLocal_325 = 1;
								iLocal_324 = 1;
								iLocal_332 = 1;
								iLocal_333 = 1;
								iLocal_334 = 1;
								iLocal_335 = 1;
								iLocal_336 = 1;
								iLocal_326 = 1;
							}
						}
					}
				}
			}
			if (!iLocal_327)
			{
				if (!__LIB_13__::func_755(&Local_118, 1))
				{
					if (iLocal_312 == 1 && uParam0->f_17 < 30f)
					{
						if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_DBRAN", "CST4_DBRAN_1", 7, 0, 0))
						{
							uParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 10000));
							iLocal_327 = 1;
						}
					}
				}
			}
			else if (!iLocal_328)
			{
				if (!__LIB_13__::func_755(&Local_118, 1))
				{
					if (iLocal_312 == 1 && uParam0->f_17 < 30f)
					{
						if ((MISC::GET_GAME_TIMER() - uParam0->f_7) > 0)
						{
							if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_DBRAN", "CST4_DBRAN_2", 7, 0, 0))
							{
								uParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
								iLocal_328 = 1;
							}
						}
					}
				}
			}
			else if (!iLocal_329)
			{
				if (!__LIB_13__::func_755(&Local_118, 1))
				{
					if (iLocal_312 == 1 && uParam0->f_17 < 30f)
					{
						if ((MISC::GET_GAME_TIMER() - uParam0->f_7) > 0)
						{
							if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_DBRAN", "CST4_DBRAN_3", 7, 0, 0))
							{
								uParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000));
								iLocal_329 = 1;
							}
						}
					}
				}
			}
			else if (!iLocal_330)
			{
				if (!__LIB_13__::func_755(&Local_118, 1))
				{
					if (iLocal_312 == 1 && uParam0->f_17 < 30f)
					{
						if ((MISC::GET_GAME_TIMER() - uParam0->f_7) > 0)
						{
							if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_DBRAN", "CST4_DBRAN_4", 7, 0, 0))
							{
								uParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(9000, 12000));
								iLocal_330 = 1;
							}
						}
					}
				}
			}
			else if (!iLocal_331)
			{
				if (!__LIB_13__::func_755(&Local_118, 1))
				{
					if (iLocal_312 == 1 && uParam0->f_17 < 30f)
					{
						if ((MISC::GET_GAME_TIMER() - uParam0->f_7) > 0)
						{
							if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_DBRAN", "CST4_DBRAN_5", 7, 0, 0))
							{
								iLocal_331 = 1;
							}
						}
					}
				}
			}
			if ((((iLocal_327 || iLocal_328) || iLocal_329) || iLocal_330) || iLocal_331)
			{
				if (__LIB_0__::func_75())
				{
					if (uParam0->f_17 > 35f)
					{
						Var0 = { __LIB_0__::func_486() };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_DBRAN"))
						{
							__LIB_0__::func_638();
						}
					}
				}
			}
			if (!iLocal_335)
			{
				if (!__LIB_13__::func_755(&Local_118, 1))
				{
					if (iLocal_312 == 0 && uParam0->f_17 < 25f)
					{
						if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_DCHAT1", 7, 0, 0, 0))
						{
							iLocal_335 = 1;
						}
					}
				}
			}
			else if (__LIB_0__::func_75())
			{
				if (uParam0->f_17 > 35f)
				{
					Var0 = { __LIB_0__::func_486() };
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_DCHAT1"))
					{
						__LIB_0__::func_638();
					}
				}
			}
			if (!iLocal_336)
			{
				if (!__LIB_13__::func_755(&Local_118, 1))
				{
					if (iLocal_312 == 0 && uParam0->f_17 < 25f)
					{
						if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_DCHAT2", 7, 0, 0, 0))
						{
							iLocal_336 = 1;
						}
					}
				}
			}
			else if (__LIB_0__::func_75())
			{
				if (uParam0->f_17 > 35f)
				{
					Var0 = { __LIB_0__::func_486() };
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_DCHAT2"))
					{
						__LIB_0__::func_638();
					}
				}
			}
			if (!iLocal_333 && !iLocal_334)
			{
				if (uParam0->f_17 < 20f && uParam0->f_13 == 1)
				{
					if (__LIB_0__::func_75())
					{
						Var0 = { __LIB_0__::func_486() };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
						{
							if ((MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_DBRAN") || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_DCHAT1")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_DCHAT2"))
							{
								iLocal_327 = 1;
								iLocal_328 = 1;
								iLocal_329 = 1;
								iLocal_330 = 1;
								iLocal_331 = 1;
								iLocal_335 = 1;
								iLocal_336 = 1;
								__LIB_0__::func_638();
							}
						}
					}
					if (!__LIB_13__::func_755(&Local_118, 1))
					{
						if (iLocal_312 == 1)
						{
							if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_DSSET1", 7, 0, 0, 0))
							{
								TASK::TASK_LOOK_AT_ENTITY(*uParam0, iParam1, 6000, 2050, 4);
								iLocal_351++;
								if (iLocal_351 >= 2)
								{
									iLocal_333 = 1;
								}
							}
						}
						else if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_DSSET2", 7, 0, 0, 0))
						{
							TASK::TASK_LOOK_AT_ENTITY(*uParam0, iParam1, 6000, 2050, 4);
							iLocal_351++;
							if (iLocal_351 >= 2)
							{
								iLocal_334 = 1;
							}
						}
					}
				}
			}
			if (!iLocal_324)
			{
				if (uParam0->f_17 < 30f)
				{
					if (uParam0->f_15 != 19 && uParam0->f_15 != 3)
					{
						if ((iLocal_332 || iLocal_333) || iLocal_334)
						{
							if (!__LIB_13__::func_755(&Local_118, 1))
							{
								if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_DSG", 7, 0, 0, 0))
								{
									iLocal_324 = 1;
								}
							}
						}
					}
				}
			}
			else if (__LIB_0__::func_75())
			{
				Var3 = { __LIB_0__::func_486() };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var3))
				{
					if (MISC::ARE_STRINGS_EQUAL(&Var3, "CST4_DSG"))
					{
						if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
						{
							iLocal_326 = 1;
						}
					}
				}
			}
			if (!iLocal_323)
			{
				if (uParam0->f_15 == 19 || uParam0->f_15 == 3)
				{
					if (uParam0->f_17 < 25f)
					{
						if (TASK::IS_PED_RUNNING(*uParam0) || TASK::IS_PED_SPRINTING(*uParam0))
						{
							if (!__LIB_13__::func_755(&Local_118, 1))
							{
								if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_DSC", 7, 0, 0, 0))
								{
									iLocal_350++;
									if (iLocal_350 >= 3)
									{
										iLocal_323 = 1;
									}
								}
							}
						}
					}
				}
			}
			if (uParam0->f_15 == 19 || uParam0->f_15 == 3)
			{
				if (__LIB_0__::func_75())
				{
					Var0 = { __LIB_0__::func_486() };
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
					{
						if ((MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_DBRAN") || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_DCHAT1")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_DCHAT2"))
						{
							iLocal_327 = 1;
							iLocal_328 = 1;
							iLocal_329 = 1;
							iLocal_330 = 1;
							iLocal_331 = 1;
							iLocal_335 = 1;
							iLocal_336 = 1;
							__LIB_0__::func_429();
						}
					}
				}
			}
		}
	}
}

void func_478(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)//Position - 0x6DDCB
{
	if (__LIB_16__::func_299(iParam4, *uParam3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1))
				{
					*uParam2 = 1;
				}
				else
				{
					*uParam2 = 0;
				}
				*uParam3 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_479(int* iParam0, int iParam1, int iParam2)//Position - 0x6DE28
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iParam0->f_17 = __LIB_0__::func_76(*iParam0, iParam1, 1);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			if (!PED::IS_PED_INJURED(iParam1))
			{
				if (iLocal_378 == 1)
				{
					func_484(*iParam0, iParam1, iParam2, &iLocal_380, &iLocal_379, &iLocal_377, &iLocal_376);
				}
				switch (iParam0->f_15)
				{
					case 0:
						__LIB_17__::func_205(iParam0, 16);
						break;
					case 16:
						if (iParam0->f_14 == 0)
						{
							STREAMING::REQUEST_ANIM_DICT("misscarsteal4@actress");
							if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4@actress"))
							{
								PED::SET_PED_CONFIG_FLAG(*iParam0, 115, true);
								TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@actress", "sit", 8f, -8f, -1, 1, 0f, false, false, false);
								if (iLocal_320 == 0)
								{
									TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam1, -1, 2048, 2);
								}
								__LIB_15__::func_995(*iParam0, 30f, 5f, 90f, -1028390912, 1119092736);
								iParam0->f_14 = 1;
							}
						}
						if (__LIB_1__::func_854(*iParam0, iParam1))
						{
							if (func_456("CST4_APULL"))
							{
								func_481(*iParam0, iParam2, &iLocal_383, &(Local_93.f_10), &iLocal_381, &fLocal_382, 3500, 500, 0.05f, 0.035f, 250, 1250, 1500, 3000);
							}
						}
						if (iLocal_320 == 1)
						{
							if (__LIB_2__::func_789(*iParam0, iParam2, 0))
							{
								if (!PED::IS_PED_IN_VEHICLE(iParam1, iParam2, false))
								{
									__LIB_17__::func_205(iParam0, 19);
								}
								if (VEHICLE::IS_VEHICLE_STOPPED(iParam2) && VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(*iParam0, iParam2, 0, false, false))
								{
									if (iLocal_367 == 0)
									{
										iLocal_367 = MISC::GET_GAME_TIMER();
									}
									else if (__LIB_16__::func_299(__LIB_0__::func_138(bLocal_319, 12000, 8000), iLocal_367))
									{
										__LIB_17__::func_205(iParam0, 19);
									}
								}
								else
								{
									iLocal_367 = 0;
								}
							}
							if (iLocal_354 == 0)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam0, iParam2))
									{
										if (VEHICLE::IS_VEHICLE_STOPPED(iParam2))
										{
											if ((!PED::IS_PED_IN_VEHICLE(iParam1, iParam2, false) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*iParam0, true), 16f, false)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*iParam0, true), 16f, true))
											{
												__LIB_17__::func_205(iParam0, 19);
											}
										}
									}
								}
							}
						}
						else if (iLocal_306 == 1 || func_480(*iParam0, iParam1))
						{
							__LIB_17__::func_205(iParam0, 19);
						}
						if (PED::IS_PED_SITTING_IN_VEHICLE(iParam1, iParam2))
						{
							if (iLocal_383 == 0)
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actress", "car_panic_girl", 3))
								{
									STREAMING::REQUEST_ANIM_DICT("misscarsteal4@actress");
									if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4@actress"))
									{
										TASK::TASK_CLEAR_LOOK_AT(*iParam0);
										TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@actress", "car_panic_girl", 4f, -4f, -1, 1, 0f, false, false, false);
									}
								}
							}
						}
						else if (func_480(*iParam0, iParam1))
						{
							__LIB_17__::func_205(iParam0, 19);
						}
						if (!PED::IS_PED_IN_VEHICLE(*iParam0, iParam2, false) || (PED::IS_PED_BEING_JACKED(*iParam0) && PED::IS_PED_JACKING(iParam1)))
						{
							__LIB_17__::func_205(iParam0, 19);
						}
						if (iLocal_377 == 1)
						{
							__LIB_17__::func_205(iParam0, 17);
						}
						break;
					case 17:
						if (iParam0->f_14 == 0)
						{
							iParam0->f_14 = 1;
						}
						if (iLocal_376 == 1)
						{
							if (ENTITY::GET_ENTITY_HEALTH(*iParam0) < 101)
							{
								ENTITY::SET_ENTITY_HEALTH(*iParam0, 0, 0);
							}
						}
						break;
					case 19:
						if (iParam0->f_14 == 0)
						{
							if (!PED::IS_PED_RAGDOLL(*iParam0))
							{
								TASK::CLEAR_PED_TASKS(*iParam0);
							}
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 4, true);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 2, false);
							TASK::TASK_SMART_FLEE_PED(*iParam0, iParam1, 300f, -1, false, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
							PED::SET_PED_KEEP_TASK(*iParam0, true);
							iParam0->f_14 = 1;
						}
						break;
					}
				}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0, false) || iParam0->f_15 == 19)
		{
			if (iParam0->f_17 > 150f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
				STREAMING::REMOVE_ANIM_DICT("misscarsteal4@actress");
			}
		}
	}
}

int func_480(int iParam0, int iParam1)//Position - 0x6E1E3
{
	struct<3> Var0;
	if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_INJURED(iParam1))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		if ((((((((PED::HAS_PED_RECEIVED_EVENT(iParam0, 29) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 60)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 124)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 126)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 125)) || MISC::IS_BULLET_IN_AREA(Var0, 16f, true)) || MISC::IS_BULLET_IN_AREA(Var0, 16f, false)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, 16f)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_481(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, float fParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x6E29F
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (__LIB_1__::func_483(iParam0, iParam1))
			{
				if (!CAM::IS_CINEMATIC_SHOT_ACTIVE(joaat("CAMERA_MAN_SHOT")))
				{
					if (*uParam3 == 0)
					{
						*uParam3 = MISC::GET_GAME_TIMER();
						*uParam4 = iParam6;
						*uParam2 = 0;
					}
					else if (!VEHICLE::IS_VEHICLE_STOPPED(iParam1))
					{
						if (*uParam2 == 0)
						{
							if (__LIB_16__::func_299(*uParam4, *uParam3))
							{
								*uParam5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam9, fParam9);
								if (*uParam5 >= 0f)
								{
									*uParam5 = (*uParam5 + fParam8);
								}
								else if (*uParam5 < 0f)
								{
									*uParam5 = (*uParam5 - fParam8);
								}
								*uParam3 = MISC::GET_GAME_TIMER();
								*uParam4 = (iParam7 + MISC::GET_RANDOM_INT_IN_RANGE(iParam10, iParam11));
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misscarsteal4@actress", "car_fight_girl", 3))
								{
									TASK::TASK_PLAY_ANIM(iParam0, "misscarsteal4@actress", "car_fight_girl", 4f, -4f, -1, 1, 0f, false, false, false);
								}
								*uParam2 = 1;
							}
						}
						else if (*uParam2 == 1)
						{
							if (__LIB_16__::func_299(*uParam4, *uParam3))
							{
								*uParam3 = MISC::GET_GAME_TIMER();
								*uParam4 = (iParam6 + MISC::GET_RANDOM_INT_IN_RANGE(iParam12, iParam13));
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misscarsteal4@actress", "car_fight_girl", 3))
								{
									TASK::CLEAR_PED_TASKS(iParam0);
								}
								*uParam2 = 0;
							}
							else
							{
								VEHICLE::SET_VEHICLE_STEER_BIAS(iParam1, *uParam5);
							}
						}
					}
				}
			}
		}
	}
}

void func_484(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x6E494
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (!__LIB_3__::func_100() && !CAM::IS_CINEMATIC_SHOT_ACTIVE(joaat("CAMERA_MAN_SHOT")))
			{
				switch (*uParam3)
				{
					case 0:
						if ((!ENTITY::IS_ENTITY_UPSIDEDOWN(iParam2) && __LIB_1__::func_483(iParam0, iParam2)) && __LIB_1__::func_483(iParam1, iParam2))
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
							STREAMING::REQUEST_PTFX_ASSET();
							AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_STEAL_3_SCREAM", false, -1);
							AUDIO::REQUEST_AMBIENT_AUDIO_BANK("CAR_THEFT_MOVIE_LOT", false, -1);
							if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/))
							{
								HUD::CLEAR_HELP(true);
								HUD::CLEAR_PRINTS();
								__LIB_0__::func_671(1);
								__LIB_0__::func_366(1);
								TASK::CLEAR_PED_TASKS(iParam0);
								ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
								if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
								{
									PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
									PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), false, 0);
								}
								AUDIO::START_AUDIO_SCENE("CAR_3_ACTIVATE_EJECTOR_SEAT");
								AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", true);
								AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
								AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForDeathAndInjury", true);
								TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 2000, 2048, 2);
								*uParam4 = MISC::GET_GAME_TIMER();
								*uParam5 = 1;
								if (__LIB_0__::func_75())
								{
									__LIB_0__::func_429();
								}
								*uParam3++;
							}
						}
						break;
					case 1:
						CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
						if (__LIB_16__::func_299(20, *uParam4))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
							{
								VEHICLE::POP_OFF_VEHICLE_ROOF_WITH_IMPULSE(iParam2, 0f, -9f, 10f);
							}
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CAR_THEFT_MOVIE_LOT_EJECT_SEAT", iParam2, 0, false, 0);
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal3_eject", iParam2, Local_58, Local_59, 1f, false, false, false);
							*uParam4 = MISC::GET_GAME_TIMER();
							*uParam3++;
						}
						break;
					case 2:
						CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
						if (__LIB_16__::func_299(150, *uParam4))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
							{
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_392))
								{
									iLocal_392 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_392, false);
									PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_392, false);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_392, iParam2, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam2, "seat_pside_f"));
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0, iParam2, true);
									TASK::TASK_SYNCHRONIZED_SCENE(iParam0, iLocal_392, "misscarsteal4@actress", "eject_girl", 1000f, -1000f, 129, 512, 1000f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
								}
								AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_397, "Ejector_Scream", iParam0, "CAR_STEAL_3_AGENT", false, 0);
								__LIB_0__::func_630(123);
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 4f, 3);
								*uParam4 = MISC::GET_GAME_TIMER();
								*uParam3++;
							}
						}
						break;
					case 3:
						CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_392))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_392) >= 0.575f)
							{
								TASK::CLEAR_PED_TASKS(iParam0);
								PED::SET_PED_TO_RAGDOLL_WITH_FALL(iParam0, 1000, 30000, 0, 0f, 0f, 1f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
								ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 1, Local_55, 0f, 0f, 0f, 10, true, true, true, false, true);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
							}
						}
						if (__LIB_16__::func_299(1000, *uParam4))
						{
							ENTITY::SET_ENTITY_HEALTH(iParam0, 101, 0);
							PED::SET_PED_DIES_WHEN_INJURED(iParam0, true);
							ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
							}
							__LIB_0__::func_671(0);
							*uParam6 = 1;
							AUDIO::STOP_AUDIO_SCENE("CAR_3_ACTIVATE_EJECTOR_SEAT");
							AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", false);
							AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", false);
							AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForDeathAndInjury", false);
							if (__LIB_0__::func_501("CAR4_EGIRL", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							if (iLocal_389 == 0)
							{
								AUDIO::TRIGGER_MUSIC_EVENT("CAR3_DROP");
								iLocal_389 = 1;
							}
							*uParam3++;
						}
						break;
					case 4:
						if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iParam0))
						{
							PED::APPLY_DAMAGE_TO_PED(iParam0, 10, true, 0);
							*uParam3++;
						}
						break;
					}
				}
		}
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_397))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
			{
				AUDIO::STOP_SOUND(iLocal_397);
			}
		}
	}
}

void func_488(int iParam0)//Position - 0x6E938
{
	struct<3> Var0;
	struct<3> Var1;
	switch (*iParam0)
	{
		case 0:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_51, true) < 150f)
			{
				Local_77.f_2 = { 475.4521f, -1313.7129f, 28.2059f };
				Local_77.f_5 = 233.894f;
				Local_77.f_6 = joaat("IG_Devin");
				*iParam0++;
			}
			break;
		case 1:
			STREAMING::REQUEST_MODEL(Local_77.f_6);
			STREAMING::REQUEST_ANIM_DICT("misscarsteal4leadinoutcar_4_ext");
			if (STREAMING::HAS_MODEL_LOADED(Local_77.f_6) && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4leadinoutcar_4_ext"))
			{
				if (func_492(&Local_77, 0, joaat("PLAYER"), 0, 29, 0, 0, 0, 0, -1, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_77.f_0, false))
					{
						PED::SET_FORCE_FOOTSTEP_UPDATE(Local_77.f_0, true);
						__LIB_0__::func_222(&uLocal_131, 0, Local_77.f_0, "DEVIN", 0, 1);
						PED::SET_PED_COMPONENT_VARIATION(Local_77.f_0, 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_77.f_0, 2, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_77.f_0, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_77.f_0, 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_77.f_0, 5, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_77.f_0, 6, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_77.f_0, 7, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_77.f_0, 8, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_77.f_0, 9, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_77.f_0, 10, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_77.f_0, 11, 0, 0, 0);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_77.f_6);
					Local_77.f_14 = 0;
					Local_77.f_9 = 0;
					*iParam0++;
				}
			}
			break;
		case 2:
			Var1 = { 0f, 0f, 116.8f };
			Var0 = { 473.682f, -1314.547f, 29.244f };
			if (ENTITY::DOES_ENTITY_EXIST(Local_77.f_0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_77.f_0, false))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_77.f_0, "misscarsteal4leadinoutcar_4_ext", "leadin_loop_devin", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(Local_77.f_0, "misscarsteal4leadinoutcar_4_ext", "leadin_action_devin", 3))
					{
						PED::SET_PED_CAPSULE(Local_77.f_0, 0.5f);
						PED::SET_PED_RESET_FLAG(Local_77.f_0, 129, true);
					}
					switch (Local_77.f_9)
					{
						case 0:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_77.f_0, true);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_77.f_0, 16);
							TASK::TASK_PLAY_ANIM_ADVANCED(Local_77.f_0, "misscarsteal4leadinoutcar_4_ext", "leadin_loop_devin", Var0, Var1, 1000f, -4f, -1, 790537, 0f, 2, 0);
							Local_77.f_14 = 0;
							Local_77.f_9++;
							break;
						case 1:
							if (iLocal_362 == 1)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_77.f_0, "misscarsteal4leadinoutcar_4_ext", "leadin_loop_devin", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_77.f_0, "misscarsteal4leadinoutcar_4_ext", "leadin_loop_devin") > 0.93f)
									{
										TASK::TASK_LOOK_AT_ENTITY(Local_77.f_0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
										TASK::TASK_PLAY_ANIM_ADVANCED(Local_77.f_0, "misscarsteal4leadinoutcar_4_ext", "leadin_action_devin", Var0, Var1, 4f, -4f, -1, 266250, 0f, 2, 1);
										Local_77.f_14 = 0;
										Local_77.f_9++;
									}
								}
							}
							break;
						case 2:
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_77.f_0, "misscarsteal4leadinoutcar_4_ext", "leadin_action_devin", 3))
							{
								ENTITY::SET_ENTITY_ANIM_SPEED(Local_77.f_0, "misscarsteal4leadinoutcar_4_ext", "leadin_action_devin", 1f);
								if (!func_456("CST4_EXT_LI"))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_77.f_0, "misscarsteal4leadinoutcar_4_ext", "leadin_action_devin") >= 0.225f)
									{
										if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_EXT_LI", 7, 0, 0, 0))
										{
											func_489("CST4_EXT_LI", 1);
										}
									}
								}
							}
							break;
						}
					}
			}
			break;
	}
}

void func_489(char* sParam0, bool bParam1)//Position - 0x6EC60
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (bParam1)
	{
		if (!func_456(sParam0))
		{
			iVar1 = iLocal_430;
			if (iLocal_429 < iVar1)
			{
				iLocal_430[iLocal_429] = iVar0;
				iLocal_429++;
			}
		}
	}
	else
	{
		iVar2 = func_457(iVar0);
		if (iVar2 != -1)
		{
			iLocal_430[iVar2] = 0;
			func_490();
			iLocal_429 = (iLocal_429 - 1);
		}
	}
}

void func_490()//Position - 0x6ECC3
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_430;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		if (iLocal_430[iVar1] == 0)
		{
			if (iLocal_430[iVar1 + 1] != 0)
			{
				iLocal_430[iVar1] = iLocal_430[iVar1 + 1];
				iLocal_430[iVar1 + 1] = 0;
			}
		}
		iVar1++;
	}
}

int func_492(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x6EDB5
{
	if (iParam1 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			STREAMING::REQUEST_MODEL(iParam0->f_6);
			if (STREAMING::HAS_MODEL_LOADED(iParam0->f_6))
			{
				if (iParam8 == 0)
				{
					if (iParam4 == 145)
					{
						*iParam0 = PED::CREATE_PED(26, iParam0->f_6, iParam0->f_2, iParam0->f_5, true, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
					}
					else if (__LIB_35__::func_574(iParam0, iParam4, iParam0->f_2, iParam0->f_5, 1))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
					}
					if (!PED::IS_PED_INJURED(*iParam0))
					{
						__LIB_17__::func_209(*iParam0, iParam2, bParam5, bParam10, bParam6, bParam7);
						if (iParam3 == 1)
						{
							iParam0->f_1 = __LIB_0__::func_639(*iParam0, 0, 0);
						}
					}
				}
				else if (iParam8 != 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam8, false))
					{
						if (iParam4 == 145)
						{
							*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam8, 26, iParam0->f_6, iParam9, true, true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
						}
						else if (__LIB_38__::func_236(iParam0, iParam4, iParam8, iParam9, 1))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
						}
						if (!PED::IS_PED_INJURED(*iParam0))
						{
							__LIB_17__::func_209(*iParam0, iParam2, bParam5, bParam10, bParam6, bParam7);
							if (iParam3 == 1)
							{
								iParam0->f_1 = __LIB_0__::func_639(*iParam0, 0, 0);
							}
						}
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iParam1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (iParam8 == 0)
			{
				if (func_537(iParam0, iParam4, iParam0->f_2, iParam0->f_5, 1, 0, 0))
				{
					__LIB_17__::func_209(*iParam0, iParam2, bParam5, bParam10, bParam6, bParam7);
					if (iParam3 == 1)
					{
						iParam0->f_1 = __LIB_0__::func_639(*iParam0, 0, 0);
					}
					return 1;
				}
			}
			else if (iParam8 != 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam8, false))
				{
					if (func_493(iParam0, iParam4, iParam8, iParam9, 1, 0, 0))
					{
						__LIB_17__::func_209(*iParam0, iParam2, bParam5, bParam10, bParam6, bParam7);
						if (iParam3 == 1)
						{
							iParam0->f_1 = __LIB_0__::func_639(*iParam0, 0, 0);
						}
						return 1;
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_493(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x6EF94
{
	int iVar0;
	if (__LIB_0__::func_374(iParam1))
	{
		iVar0 = __LIB_12__::func_894(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
			{
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, true, true);
				__LIB_16__::func_892(*iParam0, iParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_529(*iParam0);
				__LIB_15__::func_978(*iParam0, 1, 0);
				__LIB_15__::func_975(*iParam0);
				__LIB_15__::func_974(*iParam0);
				func_495(*iParam0, bParam6);
				__LIB_0__::func_405(*iParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_495(int iParam0, bool bParam1)//Position - 0x6F0BF
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_13__::func_804(iVar0))
	{
		__LIB_13__::func_803(iVar0, 0);
		func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_499(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_13__::func_803(iVar0, 0);
			func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_499(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[120] && !Global_113386.f_9085.f_99.f_58[122])
			{
				func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085.f_99.f_58[123])
			{
				Global_113386.f_9085.f_99.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_305(iParam0, 3, 169))
					{
						func_234(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_305(iParam0, 12, 6))
			{
				func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_305(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_305(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_305(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_305(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_305(iParam0, 12, 11))
			{
				func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_305(iParam0, 12, 10))
			{
				func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_305(iParam0, 12, 50))
			{
				func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_305(iParam0, 14, 59))
			{
				func_234(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_305(iParam0, 8, 22))
			{
				func_234(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_305(iParam0, 12, 14))
			{
				func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_305(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_305(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_305(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_305(iParam0, 12, 4))
			{
				func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_305(iParam0, 12, 3))
			{
				func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_305(iParam0, 14, 82))
			{
				func_234(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_305(iParam0, 8, 76))
			{
				func_234(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_305(iParam0, 12, 1))
			{
				func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_305(iParam0, 12, 12))
			{
				func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_305(iParam0, 12, 15))
			{
				func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_305(iParam0, 3, 71))
				{
					func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_305(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_305(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_305(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_305(iParam0, 12, 7))
			{
				func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_305(iParam0, 12, 6))
			{
				func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_305(iParam0, 14, 88))
			{
				func_234(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_305(iParam0, 8, 17))
			{
				func_234(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_305(iParam0, 12, 11))
			{
				func_234(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_499(int iParam0, int iParam1)//Position - 0x6F850
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_13__::func_716(iParam0);
		if (__LIB_0__::func_374(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_238(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_7(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_15__::func_225(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_15__::func_981();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
				{
					Global_113386.f_2363.f_539[iVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_407(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					if (iVar0 == 0)
					{
						if (Global_113386.f_9085.f_99.f_58[121])
						{
							Global_113386.f_9085.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

void func_529(int iParam0)//Position - 0x72AED
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_0__::func_374(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__::func_407(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_13__::func_802(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_407(iParam0);
				}
			}
		}
		func_7(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::func_422(49))
				{
					iVar1 = func_238(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_530(__LIB_12__::func_894(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::func_422(44))
				{
					iVar1 = func_238(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_238(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_530(__LIB_12__::func_894(0), 3, 70, 1, 0, 0, 0);
					func_530(__LIB_12__::func_894(0), 3, 71, 1, 0, 0, 0);
					func_530(__LIB_12__::func_894(0), 3, 72, 1, 0, 0, 0);
					func_530(__LIB_12__::func_894(0), 3, 73, 1, 0, 0, 0);
					func_530(__LIB_12__::func_894(0), 3, 74, 1, 0, 0, 0);
					func_530(__LIB_12__::func_894(0), 3, 75, 1, 0, 0, 0);
					func_530(__LIB_12__::func_894(0), 4, 41, 1, 0, 0, 0);
					func_530(__LIB_12__::func_894(0), 4, 42, 1, 0, 0, 0);
					func_530(__LIB_12__::func_894(0), 4, 43, 1, 0, 0, 0);
					func_530(__LIB_12__::func_894(0), 4, 44, 1, 0, 0, 0);
					func_530(__LIB_12__::func_894(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_238(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_7(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_530(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x72D4A
{
	__LIB_15__::func_948(iParam0, iParam1, iParam2, bParam3);
	func_533(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_950(iParam0, iParam1, iParam2, 0);
	}
}

int func_533(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x72F05
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(iParam0, iParam1, iParam2, -1) };
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
					uVar3 = { __LIB_0__::func_459(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_533(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_948(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_533(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_15__::func_948(iParam0, 14, uVar4[iVar2], 1);
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
								func_533(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_533(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_533(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_533(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_533(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_533(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_533(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_533(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_533(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_533(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_533(iParam0, 14, iVar5, 1, 0);
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
								func_533(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_533(iParam0, 14, 17, 1, 0);
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

int func_537(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x734EA
{
	int iVar0;
	if (__LIB_0__::func_374(iParam1))
	{
		iVar0 = __LIB_12__::func_894(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_16__::func_892(*iParam0, iParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_529(*iParam0);
			__LIB_15__::func_978(*iParam0, 1, 0);
			__LIB_15__::func_975(*iParam0);
			__LIB_15__::func_974(*iParam0);
			func_495(*iParam0, bParam6);
			__LIB_0__::func_405(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_543(int iParam0)//Position - 0x73751
{
	MISC::SET_BIT(&(Local_118.f_13), 20);
	if (bLocal_319 == 0)
	{
		PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	func_347();
	func_658(&Local_60);
	func_658(&cLocal_63);
	func_658(&cLocal_66);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	func_656(&iLocal_338);
	func_450(&(Local_424[1 /*18*/]), PLAYER::PLAYER_PED_ID());
	func_455(&(Local_424[0 /*18*/]), PLAYER::PLAYER_PED_ID());
	func_655();
	func_479(&Local_93, PLAYER::PLAYER_PED_ID(), Local_106.f_0);
	func_653(&iLocal_346);
	func_645(&iLocal_344);
	func_559(&iLocal_355);
	func_550();
	if (__LIB_2__::func_789(PLAYER::PLAYER_PED_ID(), Local_106.f_0, 0) && __LIB_2__::func_789(Local_93.f_0, Local_106.f_0, 0))
	{
		CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
	}
	if (CAM::IS_CINEMATIC_SHOT_ACTIVE(joaat("CAMERA_MAN_SHOT")))
	{
		if (iLocal_403 == 0)
		{
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 3);
			iLocal_403 = 1;
		}
	}
	else
	{
		iLocal_403 = 0;
	}
	switch (*iParam0)
	{
		case 0:
			if (iLocal_354 == 0)
			{
				if (iLocal_353 == 0)
				{
					func_549(&Local_118, Local_51, 483.3f, -1316.18f, 27.7f, 477.64f, -1319.01f, 31.2f, 5f, 1, Local_106.f_0, &Local_60, &cLocal_63, &cLocal_66, 1, 0, 1, -1);
				}
				else
				{
					if (iLocal_378 == 0)
					{
						if (func_456("CST4_BUTTON1"))
						{
							iLocal_378 = 1;
						}
					}
					if (__LIB_2__::func_789(Local_93.f_0, Local_106.f_0, 0))
					{
						if (func_456("CST4_BUTTON1"))
						{
							if (!func_456("CAR4_EGIRL"))
							{
								if ((iLocal_377 == 0 && !__LIB_0__::func_75()) && !__LIB_13__::func_755(&Local_118, 1))
								{
									func_547("CAR4_EGIRL", 7500, 1);
								}
							}
						}
					}
					else
					{
						if (iLocal_389 == 0)
						{
							if (func_456("CST4_ENDCALL"))
							{
								if (__LIB_0__::func_769(45) || __LIB_1__::func_860(45))
								{
									AUDIO::TRIGGER_MUSIC_EVENT("CAR3_DROP");
									iLocal_389 = 1;
								}
							}
						}
						if (__LIB_2__::func_789(PLAYER::PLAYER_PED_ID(), Local_106.f_0, 0) && !CAM::IS_CINEMATIC_SHOT_ACTIVE(joaat("CAMERA_MAN_SHOT")))
						{
							if (func_456("CST4_ENDCALL"))
							{
								if (__LIB_0__::func_769(45) || __LIB_1__::func_860(45))
								{
									if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 0)
									{
										AUDIO::STOP_AUDIO_SCENE("CAR_3_ESCAPE_SECURITY");
										return 1;
									}
								}
								if (!__LIB_0__::func_75())
								{
									AUDIO::STOP_AUDIO_SCENE("CAR_3_ESCAPE_SECURITY");
									return 1;
								}
							}
						}
					}
				}
			}
			else
			{
				if (iLocal_363 == 0)
				{
					if (iLocal_366 == 0)
					{
						if (__LIB_2__::func_789(Local_93.f_0, Local_106.f_0, 0))
						{
							iLocal_365 = 22000;
						}
						else
						{
							iLocal_365 = 16000;
						}
						iLocal_366 = MISC::GET_GAME_TIMER();
					}
					else if (__LIB_16__::func_299(iLocal_365, iLocal_366))
					{
						iLocal_364 = 1;
						if (func_456("CST4_FSPB"))
						{
							iLocal_363 = 1;
						}
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_118.f_0) || HUD::DOES_BLIP_EXIST(Local_118.f_5))
				{
					__LIB_17__::func_218(&Local_118, 0);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
					}
				}
				if (!func_456("CAR4_LSEC"))
				{
					if (func_456("CST4_ASSC") || func_456("CST4_FSSC"))
					{
						if (!__LIB_13__::func_755(&Local_118, 0))
						{
							func_547("CAR4_LSEC", 7500, 1);
						}
					}
				}
			}
			if (!__LIB_2__::func_789(PLAYER::PLAYER_PED_ID(), Local_106.f_0, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_106.f_1) && !HUD::DOES_BLIP_EXIST(Local_118.f_0))
				{
					Local_106.f_1 = __LIB_0__::func_639(Local_106.f_0, 0, 0);
				}
				if (HUD::DOES_BLIP_EXIST(Local_106.f_1))
				{
					if (!func_456(&cLocal_66) && !MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_66))
					{
						if (__LIB_13__::func_755(&Local_118, 2))
						{
							HUD::CLEAR_PRINTS();
							func_547(&cLocal_66, 7500, 1);
						}
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(Local_106.f_1))
			{
				if (__LIB_0__::func_501(&cLocal_66, 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				HUD::REMOVE_BLIP(&(Local_106.f_1));
			}
			if (__LIB_2__::func_789(PLAYER::PLAYER_PED_ID(), Local_106.f_0, 0) && !__LIB_3__::func_100())
			{
				if (!CAM::IS_CINEMATIC_SHOT_ACTIVE(joaat("CAMERA_MAN_SHOT")))
				{
					if (iLocal_363 == 1)
					{
						if (iLocal_373 == 0)
						{
							if (iLocal_354 == 1)
							{
								if (!func_456("CAR4_HCARS"))
								{
									func_545("CAR4_HCARS", 1, 1, 10000, 1);
								}
							}
						}
					}
					if (iLocal_378 == 1)
					{
						if (iLocal_377 == 0)
						{
							if (__LIB_2__::func_789(Local_93.f_0, Local_106.f_0, 0))
							{
								if (!func_456("CAR4_HCARE"))
								{
									func_545("CAR4_HCARE", 1, 1, 10000, 1);
								}
								else if (!__LIB_0__::func_1("CAR4_HCARE"))
								{
									func_489("CAR4_HCARE", 0);
								}
							}
							else if (__LIB_0__::func_1("CAR4_HCARE"))
							{
								HUD::CLEAR_HELP(true);
							}
						}
					}
				}
			}
			else if (__LIB_0__::func_1("CAR4_HCARE") || __LIB_0__::func_1("CAR4_HCARS"))
			{
				HUD::CLEAR_HELP(true);
			}
			if (!__LIB_3__::func_100())
			{
				if (iLocal_363 == 1)
				{
					func_444(Local_106.f_0, &Local_130);
					func_440(Local_106.f_0, &Local_130, 1);
					if (!__LIB_0__::func_769(45) && !__LIB_1__::func_860(45))
					{
						func_435(Local_106.f_0, &Local_130, "CAR_3_TYRE_BURST_CAM");
					}
					else
					{
						func_434(&Local_130);
					}
					func_433(Local_130, &Local_426);
					func_429(Local_130, PLAYER::PLAYER_PED_ID(), Local_106.f_0, &(Local_106.f_17), &(Local_106.f_8));
				}
			}
			break;
	}
	return 0;
}

void func_545(char* sParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x73C5F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, bParam1, bParam2, iParam3);
	func_489(sParam0, bParam4);
}

void func_547(char* sParam0, int iParam1, bool bParam2)//Position - 0x73C93
{
	if (!func_456(sParam0))
	{
		__LIB_0__::func_382(sParam0, iParam1, 1);
		func_489(sParam0, bParam2);
	}
}

int func_549(int* iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, int iParam11, bool bParam12, int iParam13)//Position - 0x73CCF
{
	return __LIB_17__::func_220(iParam0, Param1, __LIB_15__::func_994(), Param2, Param3, bParam5, 5, 0, 0, 0, iParam6, sParam7, __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), sParam8, 0, bParam10, sParam9, 1, iParam11, bParam12, iParam13, __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), 1, fParam4);
}

void func_550()//Position - 0x73D24
{
	struct<6> Var0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_93.f_0, false))
		{
			if ((((!PED::IS_PED_IN_ANY_VEHICLE(Local_93.f_0, false) && !PED::IS_PED_FALLING(Local_93.f_0)) && !PED::IS_PED_RAGDOLL(Local_93.f_0)) && AUDIO::HAS_SOUND_FINISHED(iLocal_397)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_93.f_0, "misscarsteal4@actress", "eject_girl", 3))
			{
				if (__LIB_0__::func_75())
				{
					Var0 = { __LIB_0__::func_486() };
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
					{
						if ((((((((((((((MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ACHAT1") || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ACHAT2")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ACHAT3")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ACHAT4")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ANNOY1")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ANNOY2")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ANNOY3")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ANNOY4")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ANNOY5")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ANNOY6")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ANNOY7")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ANNOY8")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ANNOY9")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ANNOY10")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_AWARN"))
						{
							__LIB_0__::func_638();
						}
					}
				}
				if (!func_456("CST4_AFLEE1"))
				{
					if (Local_93.f_17 < 35f)
					{
						if (!__LIB_0__::func_75())
						{
							if (!__LIB_13__::func_755(&Local_118, 1))
							{
								if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_AFLEE1", 7, 0, 0, 0))
								{
									Local_93.f_8 = 0;
									Local_93.f_7 = MISC::GET_GAME_TIMER();
									func_489("CST4_AFLEE1", 1);
								}
							}
							else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_93.f_0))
							{
								__LIB_0__::func_709(Local_93.f_0, "CST4_CDAA", "CST4ACTRESS", 6);
								Local_93.f_8 = 0;
								Local_93.f_7 = MISC::GET_GAME_TIMER();
								func_489("CST4_AFLEE1", 1);
							}
						}
					}
					else
					{
						func_489("CST4_AFLEE1", 1);
					}
				}
				else if (PED::IS_PED_FLEEING(Local_93.f_0))
				{
					if (!func_456("CST4_AFLEE2"))
					{
						if (__LIB_16__::func_299(15000, Local_93.f_7))
						{
							if (!__LIB_0__::func_75())
							{
								if (Local_93.f_17 < 30f)
								{
									if (!__LIB_13__::func_755(&Local_118, 1))
									{
										if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_AFLEE2", 7, 0, 0, 0))
										{
											Local_93.f_8++;
											Local_93.f_7 = MISC::GET_GAME_TIMER();
											if (Local_93.f_8 == 6)
											{
												func_489("CST4_AFLEE2", 1);
											}
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_93.f_0))
									{
										__LIB_0__::func_709(Local_93.f_0, "CST4_DGAA", "CST4ACTRESS", 3);
										Local_93.f_8++;
										Local_93.f_7 = MISC::GET_GAME_TIMER();
										if (Local_93.f_8 == 6)
										{
											func_489("CST4_AFLEE2", 1);
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
	if (__LIB_1__::func_854(PLAYER::PLAYER_PED_ID(), Local_93.f_0))
	{
		if (!PED::IS_PED_INJURED(Local_93.f_0))
		{
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_93.f_0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_93.f_0))
			{
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_93.f_0, true), 3f, true) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_93.f_0, true), 3f, false))
				{
					AUDIO::PLAY_PAIN(Local_93.f_0, 5, 0, 0);
				}
			}
		}
		if (bLocal_319 == 0)
		{
			if (!func_456("CST4_AKDNP"))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_118, 1))
					{
						if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_AKDNP", 7, 0, 0, 0))
						{
							func_489("CST4_AKDNP", 1);
						}
					}
				}
			}
			if (!func_456("CST4_APULL"))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_118, 1))
					{
						if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_APULL", 7, 0, 0, 0))
						{
							func_489("CST4_APULL", 1);
						}
					}
				}
			}
		}
	}
	if (iLocal_353 == 1)
	{
		if (!func_456("CST4_BUTTON1"))
		{
			if (__LIB_1__::func_854(PLAYER::PLAYER_PED_ID(), Local_93.f_0))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_118, 1))
					{
						if (iLocal_383 == 0)
						{
							if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_BUTTON1", 7, 0, 0, 0))
							{
								func_489("CST4_BUTTON1", 1);
							}
						}
					}
				}
			}
		}
		if (!func_456("CST4_ENDCALL"))
		{
			if (__LIB_2__::func_789(PLAYER::PLAYER_PED_ID(), Local_106.f_0, 0))
			{
				if (!__LIB_2__::func_789(Local_93.f_0, Local_106.f_0, 0))
				{
					if (bLocal_319 == 0)
					{
						if (!__LIB_0__::func_75())
						{
							if (!__LIB_13__::func_755(&Local_118, 1))
							{
								if (iLocal_368 == 0)
								{
									iLocal_368 = MISC::GET_GAME_TIMER();
								}
								else if (__LIB_16__::func_299(2000, iLocal_368))
								{
									func_557();
									if (iLocal_304 == 0)
									{
										if (func_553(9, &uLocal_131, 45, "CST4AUD", &sLocal_431, &cLocal_432, 8, 1, 0, 0, 0))
										{
											func_489("CST4_ENDCALL", 1);
										}
									}
									else if (func_553(12, &uLocal_131, 45, "CST4AUD", &sLocal_433, &cLocal_434, 8, 1, 0, 0, 0))
									{
										func_489("CST4_ENDCALL", 1);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_352 == 1)
	{
		if (!func_456("CST4_ASSC") && !func_456("CST4_FSSC"))
		{
			if (!__LIB_0__::func_75())
			{
				if (!__LIB_13__::func_755(&Local_118, 1))
				{
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Local_106.f_0, 0, false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_93.f_0, false))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(Local_93.f_0, Local_106.f_0))
								{
									if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_ASSC", 7, 0, 0, 0))
									{
										Local_93.f_7 = MISC::GET_GAME_TIMER();
										func_489("CST4_ASSC", 1);
									}
								}
							}
						}
					}
					else if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_FSSC", 7, 0, 0, 0))
					{
						func_489("CST4_FSSC", 1);
					}
				}
			}
		}
		else if (func_456("CAR4_LSEC"))
		{
			if (!func_456("CST4_ASSCF"))
			{
				if (func_456("CST4_ASSC"))
				{
					if (!__LIB_0__::func_75())
					{
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							__LIB_0__::func_709(PLAYER::PLAYER_PED_ID(), "CST4_DDAA", "FRANKLIN", 3);
							func_489("CST4_ASSCF", 1);
						}
					}
				}
			}
			if (__LIB_1__::func_483(PLAYER::PLAYER_PED_ID(), Local_106.f_0))
			{
				if (iLocal_363 == 0)
				{
					if (!func_456("CST4_FSPB"))
					{
						if (iLocal_364 == 1)
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_118, 1))
								{
									if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_FSPB", 7, 0, 0, 0))
									{
										func_489("CST4_FSPB", 1);
									}
								}
							}
						}
					}
				}
				else if (!func_456("CST4_FSPDS"))
				{
					if (iLocal_374 != iLocal_373)
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_FSPDS", 7, 0, 0, 0))
							{
								iLocal_374 = iLocal_373;
								if (iLocal_373 == 2)
								{
									func_489("CST4_FSPDS", 1);
								}
							}
						}
						else
						{
							AUDIO::INTERRUPT_CONVERSATION(PLAYER::PLAYER_PED_ID(), "CST4_CFAA", "FRANKLIN");
							iLocal_374 = iLocal_373;
							if (iLocal_373 == 2)
							{
								func_489("CST4_FSPDS", 1);
							}
						}
					}
				}
			}
			if (__LIB_1__::func_854(PLAYER::PLAYER_PED_ID(), Local_93.f_0))
			{
				if (iLocal_377 == 0)
				{
					if (!func_456("CST4_SHOOT"))
					{
						if (__LIB_16__::func_299(10000, Local_93.f_7))
						{
							if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_118, 0))
									{
										if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_SHOOT", 7, 0, 0, 0))
										{
											iLocal_385++;
											Local_93.f_7 = MISC::GET_GAME_TIMER();
											if (iLocal_385 == 4)
											{
												func_489("CST4_SHOOT", 1);
											}
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_93.f_0))
									{
										__LIB_0__::func_709(Local_93.f_0, "CST4_DCAA", "CST4ACTRESS", 3);
										iLocal_385++;
										Local_93.f_7 = MISC::GET_GAME_TIMER();
										if (iLocal_385 == 4)
										{
											func_489("CST4_SHOOT", 1);
										}
									}
								}
							}
						}
					}
					if (!func_456("CST4_ACHAT1"))
					{
						if (!__LIB_0__::func_75())
						{
							if (!__LIB_13__::func_755(&Local_118, 0))
							{
								if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_ACHAT1", 7, 0, 0, 0))
								{
									func_489("CST4_ACHAT1", 1);
								}
							}
						}
					}
					if (!func_456("CST4_ACHAT2"))
					{
						if (!__LIB_0__::func_75())
						{
							if (!__LIB_13__::func_755(&Local_118, 0))
							{
								if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_ACHAT2", 7, 0, 0, 0))
								{
									func_489("CST4_ACHAT2", 1);
								}
							}
						}
					}
					if (!func_456("CST4_ACHAT3"))
					{
						if (!__LIB_0__::func_75())
						{
							if (!__LIB_13__::func_755(&Local_118, 0))
							{
								if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_ACHAT3", 7, 0, 0, 0))
								{
									func_489("CST4_ACHAT3", 1);
								}
							}
						}
					}
					if (!func_456("CST4_ACHAT4"))
					{
						if (!__LIB_0__::func_75())
						{
							if (!__LIB_13__::func_755(&Local_118, 0))
							{
								if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_ACHAT4", 7, 0, 0, 0))
								{
									Local_93.f_7 = MISC::GET_GAME_TIMER();
									iLocal_384 = 1;
									func_489("CST4_ACHAT4", 1);
								}
							}
						}
					}
				}
				if (iLocal_384 == 1)
				{
					if (iLocal_377 == 0)
					{
						if (!__LIB_0__::func_75())
						{
							if (!__LIB_13__::func_755(&Local_118, 0))
							{
								if (__LIB_16__::func_299(12500, Local_93.f_7))
								{
									if (!func_456("CST4_SECSHT"))
									{
										iVar1 = __LIB_17__::func_166(Local_93.f_0, joaat("SECURITY_GUARD"), 0, 0, 28);
										if (ENTITY::DOES_ENTITY_EXIST(iVar1))
										{
											if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
											{
												if (__LIB_9__::func_694(Local_93.f_0, iVar1) < 10f)
												{
													if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_SECSHT", 7, 0, 0, 0))
													{
														iLocal_386++;
														Local_93.f_7 = MISC::GET_GAME_TIMER();
														if (iLocal_386 == 5)
														{
															func_489("CST4_SECSHT", 1);
														}
													}
												}
											}
										}
									}
									if (!__LIB_0__::func_75())
									{
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
										{
											case 0:
												if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_STOP", 7, 0, 0, 0))
												{
													Local_93.f_7 = MISC::GET_GAME_TIMER();
												}
												break;
											case 1:
												if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_SCREAM", 7, 0, 0, 0))
												{
													Local_93.f_7 = MISC::GET_GAME_TIMER();
												}
												break;
											case 2:
												if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_ASTOP", 7, 0, 0, 0))
												{
													Local_93.f_7 = MISC::GET_GAME_TIMER();
												}
												break;
											}
										}
									}
								}
						}
						if (!func_456("CST4_ANNOY1"))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_118, 0))
								{
									if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_ANNOY1", 7, 0, 0, 0))
									{
										func_489("CST4_ANNOY1", 1);
									}
								}
							}
						}
						if (!func_456("CST4_ANNOY2"))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_118, 0))
								{
									if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_ANNOY2", 7, 0, 0, 0))
									{
										func_489("CST4_ANNOY2", 1);
									}
								}
							}
						}
						if (!func_456("CST4_ANNOY3"))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_118, 0))
								{
									if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_ANNOY3", 7, 0, 0, 0))
									{
										Local_93.f_7 = MISC::GET_GAME_TIMER();
										func_489("CST4_ANNOY3", 1);
									}
								}
							}
						}
						if (!func_456("CST4_ANNOY4"))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_118, 0))
								{
									if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_ANNOY4", 7, 0, 0, 0))
									{
										Local_93.f_7 = MISC::GET_GAME_TIMER();
										func_489("CST4_ANNOY4", 1);
									}
								}
							}
						}
						if (!func_456("CST4_ANNOY5"))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_118, 0))
								{
									if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_ANNOY5", 7, 0, 0, 0))
									{
										Local_93.f_7 = MISC::GET_GAME_TIMER();
										func_489("CST4_ANNOY5", 1);
									}
								}
							}
						}
						if (!func_456("CST4_ANNOY6"))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_118, 0))
								{
									if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_ANNOY6", 7, 0, 0, 0))
									{
										Local_93.f_7 = MISC::GET_GAME_TIMER();
										func_489("CST4_ANNOY6", 1);
									}
								}
							}
						}
						if (!func_456("CST4_ANNOY7"))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_118, 0))
								{
									if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_ANNOY7", 7, 0, 0, 0))
									{
										Local_93.f_7 = MISC::GET_GAME_TIMER();
										func_489("CST4_ANNOY7", 1);
									}
								}
							}
						}
						if (!func_456("CST4_ANNOY8"))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_118, 0))
								{
									if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_ANNOY8", 7, 0, 0, 0))
									{
										Local_93.f_7 = MISC::GET_GAME_TIMER();
										func_489("CST4_ANNOY8", 1);
									}
								}
							}
						}
						if (!func_456("CST4_ANNOY9"))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_118, 0))
								{
									if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_ANNOY9", 7, 0, 0, 0))
									{
										Local_93.f_7 = MISC::GET_GAME_TIMER();
										func_489("CST4_ANNOY9", 1);
									}
								}
							}
						}
						if (!func_456("CST4_ANNOY10"))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_118, 0))
								{
									if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_ANNOY10", 7, 0, 0, 0))
									{
										Local_93.f_7 = MISC::GET_GAME_TIMER();
										func_489("CST4_ANNOY10", 1);
									}
								}
							}
						}
						if (!func_456("CST4_AWARN"))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_118, 0))
								{
									if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_AWARN", 7, 0, 0, 0))
									{
										Local_93.f_7 = MISC::GET_GAME_TIMER();
										func_489("CST4_AWARN", 1);
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
		if (!func_456("CST4_AMSNO") && !func_456("CST4_AMSRO"))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_76.f_0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_76.f_0, false))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_76.f_0, "misscarsteal4@actor", "stumble", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(Local_76.f_0, "misscarsteal4@actor", "dazed_idle", 3))
					{
						func_478(Local_93.f_0, Local_76.f_0, &(Local_93.f_13), &(Local_93.f_10), 950);
						if (Local_93.f_13 == 1)
						{
							if (__LIB_0__::func_76(Local_76.f_0, Local_93.f_0, 1) < 30f)
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_AMSNO", 8, 0, 0, 0))
									{
										func_489("CST4_AMSNO", 1);
									}
								}
								else
								{
									__LIB_0__::func_429();
								}
							}
						}
					}
				}
			}
		}
		if (!func_456("CST4_AMSRO"))
		{
			if (__LIB_1__::func_483(Local_93.f_0, Local_106.f_0))
			{
				if (Local_93.f_13 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_76.f_0))
					{
						if (ENTITY::IS_ENTITY_DEAD(Local_76.f_0, false))
						{
							if (Local_76.f_16 == 5)
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_AMSRO", 8, 0, 0, 0))
									{
										func_489("CST4_AMSRO", 1);
									}
								}
								else
								{
									__LIB_0__::func_429();
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_553(int iParam0, var uParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x74C7D
{
	__LIB_0__::func_487(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	__LIB_15__::func_997();
	if (iParam7 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	__LIB_15__::func_996(iParam0);
	return func_554(sParam4, sParam5, iParam6, bParam10);
}

int func_554(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x74CBB
{
	int iVar0;
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam2 > Global_21607)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
				}
				else
				{
					__LIB_0__::func_74();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (__LIB_0__::func_194(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		__LIB_0__::func_228();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22601 = Global_22602;
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21224.f_370 = Global_22594;
		Global_21601 = Global_21602;
		Global_21603 = Global_21604;
		if (Global_21863 == 0)
		{
			Global_21759[0 /*6*/] = { Global_21785[0 /*6*/] };
			Global_21759[1 /*6*/] = { Global_21785[1 /*6*/] };
			Global_21811[0 /*6*/] = { Global_21837[0 /*6*/] };
			Global_21811[1 /*6*/] = { Global_21837[1 /*6*/] };
			Global_21772[0 /*6*/] = { Global_21798[0 /*6*/] };
			Global_21772[1 /*6*/] = { Global_21798[1 /*6*/] };
			Global_21824[0 /*6*/] = { Global_21850[0 /*6*/] };
			Global_21824[1 /*6*/] = { Global_21850[1 /*6*/] };
		}
		if (Global_21611)
		{
			MISC::CLEAR_BIT(&Global_8136, 20);
			MISC::CLEAR_BIT(&Global_8137, 17);
			MISC::CLEAR_BIT(&Global_8138, 0);
			if (bParam3)
			{
				__LIB_15__::func_120();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (__LIB_0__::func_227())
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (Global_21863 == 0)
					{
						if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
						{
							return 0;
						}
						if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
						{
							return 0;
						}
						if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
						{
							return 0;
						}
						if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						{
							return 0;
						}
					}
				}
			}
			if (__LIB_0__::func_73())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
				{
					case 7:
						return 0;
						break;
					case 8:
						return 0;
						break;
					case 9:
						break;
					case 10:
						break;
					default:
						break;
					}
			}
			__LIB_0__::func_226();
			Global_21615 = bParam3;
		}
		Global_21607 = iParam2;
		if (Global_21601 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_21601)
			{
				StringCopy(&(Global_21224.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_21224.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_20471 = 0;
		__LIB_0__::func_225();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_21607 || iParam2 == Global_21607)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		__LIB_0__::func_74();
	}
	return 0;
}

void func_557()//Position - 0x75085
{
	if (iLocal_369 > 0)
	{
		iLocal_304 = 1;
	}
	else
	{
		iLocal_304 = 0;
	}
	if (iLocal_304 == 0)
	{
		sLocal_431[0] = "CST4_ECALLC";
		cLocal_432[0] = "CST4_ECALLC_1";
		sLocal_431[1] = "CST4_ECALLC";
		cLocal_432[1] = "CST4_ECALLC_2";
		sLocal_431[2] = "CST4_ECALLC";
		cLocal_432[2] = "CST4_ECALLC_3";
		sLocal_431[3] = "CST4_ECALLC";
		cLocal_432[3] = "CST4_ECALLC_4";
		sLocal_431[4] = "CST4_ECALLC";
		cLocal_432[4] = "CST4_ECALLC_5";
		sLocal_431[5] = "CST4_ECALLC";
		cLocal_432[5] = "CST4_ECALLC_6";
		if (iLocal_376 == 0)
		{
			if (Local_130.f_32 > 0)
			{
				sLocal_431[6] = "CST4_ECALL1";
				cLocal_432[6] = "CST4_ECALL1_1";
			}
			else
			{
				sLocal_431[6] = "CST4_ECALL3";
				cLocal_432[6] = "CST4_ECALL3_1";
			}
		}
		else if (Local_130.f_32 > 0)
		{
			sLocal_431[6] = "CST4_ECALL2";
			cLocal_432[6] = "CST4_ECALL2_1";
		}
		else
		{
			sLocal_431[6] = "CST4_ECALL4";
			cLocal_432[6] = "CST4_ECALL4_1";
		}
		sLocal_431[7] = "CST4_ECALLE";
		cLocal_432[7] = "CST4_ECALLE_1";
		sLocal_431[8] = "CST4_ECALLE";
		cLocal_432[8] = "CST4_ECALLE_2";
	}
	else
	{
		sLocal_433[0] = "CST4_ECALLM";
		cLocal_434[0] = "CST4_ECALLM_1";
		sLocal_433[1] = "CST4_ECALLM";
		cLocal_434[1] = "CST4_ECALLM_2";
		sLocal_433[2] = "CST4_ECALLM";
		cLocal_434[2] = "CST4_ECALLM_3";
		sLocal_433[3] = "CST4_ECALLM";
		cLocal_434[3] = "CST4_ECALLM_4";
		sLocal_433[4] = "CST4_ECALLM";
		cLocal_434[4] = "CST4_ECALLM_5";
		sLocal_433[5] = "CST4_ECALLM";
		cLocal_434[5] = "CST4_ECALLM_6";
		sLocal_433[6] = "CST4_ECALLM";
		cLocal_434[6] = "CST4_ECALLM_7";
		sLocal_433[7] = "CST4_ECALLM";
		cLocal_434[7] = "CST4_ECALLM_8";
		sLocal_433[8] = "CST4_ECALLM";
		cLocal_434[8] = "CST4_ECALLM_9";
		if (iLocal_376 == 0)
		{
			if (Local_130.f_32 > 0)
			{
				sLocal_433[9] = "CST4_ECALL1";
				cLocal_434[9] = "CST4_ECALL1_1";
			}
			else
			{
				sLocal_433[9] = "CST4_ECALL3";
				cLocal_434[9] = "CST4_ECALL3_1";
			}
		}
		else if (Local_130.f_32 > 0)
		{
			sLocal_433[9] = "CST4_ECALL2";
			cLocal_434[9] = "CST4_ECALL2_1";
		}
		else
		{
			sLocal_433[9] = "CST4_ECALL4";
			cLocal_434[9] = "CST4_ECALL4_1";
		}
		sLocal_433[10] = "CST4_ECALLE";
		cLocal_434[10] = "CST4_ECALLE_1";
		sLocal_433[11] = "CST4_ECALLE";
		cLocal_434[11] = "CST4_ECALLE_2";
	}
}

void func_559(int iParam0)//Position - 0x75368
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	if (iLocal_357 == 0)
	{
		if (bLocal_319 == 0)
		{
			iLocal_358 = 1;
			if (iLocal_356 == 0)
			{
				if (iLocal_358 == 1)
				{
					iLocal_356 = MISC::GET_GAME_TIMER();
				}
			}
			else if (__LIB_16__::func_299(__LIB_0__::func_138(VEHICLE::IS_VEHICLE_STOPPED(Local_106.f_0), 5000, 10000), iLocal_356))
			{
				iLocal_357 = 1;
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_106.f_0, -840.78f, -345.37f, 35.68f, -806.72f, -359.6f, 44.1f, 32f, false, true, 0))
			{
				Local_426[0 /*19*/].f_2 = { -940.7892f, -425.8869f, 36.6582f };
				Local_426[0 /*19*/].f_5 = 299.7635f;
				Local_426[1 /*19*/].f_2 = { -914.2634f, -410.5154f, 36.5965f };
				Local_426[1 /*19*/].f_5 = 295.605f;
				iLocal_357 = 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_106.f_0, -922.5f, -462.98f, 34.38f, -958.13f, -481.3f, 44.2f, 32f, false, true, 0))
			{
				Local_426[0 /*19*/].f_2 = { -990.2645f, -451.9471f, 36.5288f };
				Local_426[0 /*19*/].f_5 = 298.9762f;
				Local_426[1 /*19*/].f_2 = { -924.7919f, -408.3496f, 36.5208f };
				Local_426[1 /*19*/].f_5 = 118.9813f;
				iLocal_357 = 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_106.f_0, -940f, -366.51f, 35.96f, -1011.4f, -402.69f, 46.61f, 32f, false, true, 0))
			{
				Local_426[0 /*19*/].f_2 = { -1043.2084f, -376.0805f, 36.8852f };
				Local_426[0 /*19*/].f_5 = 298.4807f;
				Local_426[1 /*19*/].f_2 = { -945.8993f, -313.9898f, 37.9018f };
				Local_426[1 /*19*/].f_5 = 119.5346f;
				iLocal_357 = 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_106.f_0, -1043.86f, -410.67f, 34.58f, -1088.86f, -433.64f, 51.62f, 32f, false, true, 0))
			{
				Local_426[0 /*19*/].f_2 = { -1037.3854f, -309.7007f, 36.736f };
				Local_426[0 /*19*/].f_5 = 188.3013f;
				Local_426[1 /*19*/].f_2 = { -1169.5857f, -422.5981f, 33.9917f };
				Local_426[1 /*19*/].f_5 = 276.9465f;
				iLocal_357 = 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_106.f_0, -1206.13f, -646f, 20.83f, -1175.31f, -618.72f, 31.01f, 32f, false, true, 0))
			{
				Local_426[0 /*19*/].f_2 = { -1246.7711f, -612.4629f, 26.1706f };
				Local_426[0 /*19*/].f_5 = 308.9866f;
				Local_426[1 /*19*/].f_2 = { -1137.702f, -615.8666f, 20.7124f };
				Local_426[1 /*19*/].f_5 = 126.5517f;
				iLocal_357 = 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_106.f_0, -1248.37f, -625.58f, 24.17f, -1263.54f, -606.61f, 34.16f, 32f, false, true, 0))
			{
				Local_426[0 /*19*/].f_2 = { -1273.5568f, -554.0495f, 29.3703f };
				Local_426[0 /*19*/].f_5 = 219.115f;
				Local_426[1 /*19*/].f_2 = { -1188.8282f, -635.2723f, 22.7021f };
				Local_426[1 /*19*/].f_5 = 41.9663f;
				iLocal_357 = 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_106.f_0, -1291.04f, -558.91f, 28.71f, -1254.28f, -527.38f, 38.07f, 32f, false, true, 0))
			{
				Local_426[0 /*19*/].f_2 = { -1255.1533f, -618.7726f, 26.1f };
				Local_426[0 /*19*/].f_5 = 303.7104f;
				Local_426[1 /*19*/].f_2 = { -1263.9615f, -464.1984f, 32.5328f };
				Local_426[1 /*19*/].f_5 = 141.2234f;
				iLocal_357 = 1;
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(iLocal_48);
			STREAMING::REQUEST_MODEL(iLocal_49);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_48) && STREAMING::HAS_MODEL_LOADED(iLocal_49))
			{
				Local_426[0 /*19*/].f_2 = { 0f, 0f, 0f };
				Local_426[0 /*19*/].f_5 = 0f;
				Local_426[0 /*19*/].f_9 = { -2.15f, -3f, 0f };
				Local_426[0 /*19*/].f_6 = iLocal_48;
				Local_426[1 /*19*/].f_2 = { 0f, 0f, 0f };
				Local_426[1 /*19*/].f_5 = 0f;
				Local_426[1 /*19*/].f_9 = { 2.15f, 3f, 0f };
				Local_426[1 /*19*/].f_6 = iLocal_48;
				*iParam0++;
			}
			break;
		case 1:
			if (iLocal_357 == 1)
			{
				if (__LIB_0__::func_86(Local_426[0 /*19*/].f_2) || __LIB_0__::func_86(Local_426[1 /*19*/].f_2))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Var0, &Var1, 0, 3f, 0f))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true) < 7f)
						{
							if (func_643(PLAYER::PLAYER_PED_ID(), &Local_359, &fLocal_360, 20, __LIB_0__::func_373(VEHICLE::IS_VEHICLE_STOPPED(Local_106.f_0), 0f, 120f), __LIB_0__::func_373(VEHICLE::IS_VEHICLE_STOPPED(Local_106.f_0), 180f, 180f), 0))
							{
								if (!CAM::IS_SPHERE_VISIBLE(Local_359, 3f))
								{
									fVar4 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
									fVar3 = MISC::ABSF((fVar4 - fLocal_360));
									if (fVar3 > 180f)
									{
										fVar3 = MISC::ABSF((fVar3 - 360f));
									}
									if (fVar3 < 90f)
									{
										fVar5 = fLocal_360;
									}
									else
									{
										fVar5 = (fLocal_360 + 180f);
									}
									iVar2 = 0;
									while (iVar2 <= (Local_426.f_0 - 1))
									{
										Local_426[iVar2 /*19*/].f_2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_359, fLocal_360, Local_426[iVar2 /*19*/].f_9) };
										Local_426[iVar2 /*19*/].f_5 = fVar5;
										Local_426[iVar2 /*19*/].f_18 = 0;
										MISC::CLEAR_AREA_OF_VEHICLES(Local_426[iVar2 /*19*/].f_2, 3f, false, false, false, false, false, false, 0);
										iVar2++;
									}
									*iParam0++;
								}
							}
						}
					}
				}
				else
				{
					*iParam0++;
				}
			}
			break;
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_48);
			STREAMING::REQUEST_MODEL(iLocal_49);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_48) && STREAMING::HAS_MODEL_LOADED(iLocal_49))
			{
				if (func_569(&(Local_426[0 /*19*/]), 0, 0, 145, 0, -1, 0, 0, 0, 0) && func_569(&(Local_426[1 /*19*/]), 0, 0, 145, 0, -1, 0, 0, 0, 0))
				{
					iVar6 = 0;
					while (iVar6 < 2)
					{
						Local_419[iVar6 /*18*/] = func_568(Local_426[iVar6 /*19*/], iLocal_49, joaat("SECURITY_GUARD"), -1, 200, joaat("WEAPON_PISTOL"));
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_426[iVar6 /*19*/], true, true, false);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_426[iVar6 /*19*/], 20f);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_426[iVar6 /*19*/], true);
						VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_426[iVar6 /*19*/]);
						VEHICLE::ADD_VEHICLE_STUCK_CHECK_WITH_WARP(Local_426[iVar6 /*19*/], 10f, 1000, false, false, false, -1);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_426[iVar6 /*19*/], "CAR_3_SEC_CARS", 0f);
						__LIB_17__::func_167(Local_106.f_0, &(Local_426[iVar6 /*19*/].f_12), &(Local_426[iVar6 /*19*/].f_15));
						Local_426[iVar6 /*19*/].f_16 = 0;
						Local_419[iVar6 /*18*/].f_14 = 0;
						Local_419[iVar6 /*18*/].f_15 = 28;
						iVar6++;
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_48);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_49);
					iLocal_354 = 1;
					iLocal_352 = 1;
					iLocal_353 = 0;
					*iParam0++;
				}
			}
			break;
		case 3:
			iVar7 = 0;
			while (iVar7 < 2)
			{
				func_565(&(Local_419[iVar7 /*18*/]), &(Local_426[iVar7 /*19*/]));
				func_564(&(Local_419[iVar7 /*18*/]), &(Local_426[iVar7 /*19*/]), 320f, 150f);
				func_560(&(Local_419[iVar7 /*18*/]), &(Local_426[iVar7 /*19*/]), PLAYER::PLAYER_PED_ID(), Local_106.f_0);
				iVar7++;
			}
			if (Local_426[0 /*19*/].f_18 == 0 && Local_426[1 /*19*/].f_18 == 0)
			{
				Local_426[0 /*19*/].f_18 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_426[0 /*19*/], Local_106.f_0, 17);
				Local_426[1 /*19*/].f_18 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_426[1 /*19*/], Local_106.f_0, 17);
			}
			if (((!ENTITY::DOES_ENTITY_EXIST(Local_419[0 /*18*/]) && !ENTITY::DOES_ENTITY_EXIST(Local_419[1 /*18*/])) && !ENTITY::DOES_ENTITY_EXIST(Local_426[0 /*19*/])) && !ENTITY::DOES_ENTITY_EXIST(Local_426[1 /*19*/]))
			{
				iLocal_353 = 1;
				iLocal_354 = 0;
				if (__LIB_0__::func_1("CAR4_HCARS"))
				{
					HUD::CLEAR_HELP(true);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_106.f_0, false))
				{
					VEHICLE::SET_VEHICLE_STRONG(Local_106.f_0, false);
				}
				*iParam0++;
			}
			break;
	}
}

void func_560(int* iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x75BAD
{
	if (((ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0, false)) && !ENTITY::IS_ENTITY_DEAD(iParam2, false)) && !ENTITY::IS_ENTITY_DEAD(iParam3, false))
	{
		iParam0->f_17 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*iParam0, true), ENTITY::GET_ENTITY_COORDS(iParam2, true), true);
		if (iLocal_375 == 0)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, iParam2, true))
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, 0, 2))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam0);
					iLocal_375 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*iParam1, false))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam1, iParam2, true))
					{
						if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam1, 0, 2))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam1);
							iLocal_375 = 1;
						}
					}
				}
			}
		}
		switch (iParam0->f_15)
		{
			case 24:
				if (iParam0->f_14 == 0)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, false);
					TASK::TASK_COMBAT_PED(*iParam0, iParam2, 0, 16);
					iParam0->f_14 = 1;
				}
				if (func_563(iParam2, iParam3))
				{
					if (iParam0->f_17 > 20f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
						{
							if ((VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false) && !VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(*iParam1)) && !__LIB_15__::func_927(iParam1))
							{
								if (!PED::IS_PED_IN_VEHICLE(*iParam0, *iParam1, false))
								{
									if (VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, -1, false))
									{
										__LIB_17__::func_205(iParam0, 26);
									}
								}
								else if (iLocal_375 == 1)
								{
									__LIB_17__::func_205(iParam0, 27);
								}
								else
								{
									__LIB_17__::func_205(iParam0, 28);
								}
							}
						}
					}
				}
				break;
			case 28:
				if (iParam0->f_14 == 0)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 2, false);
					TASK::TASK_COMBAT_PED(*iParam0, iParam2, 0, 16);
					iParam0->f_10 = MISC::GET_GAME_TIMER();
					iParam0->f_14 = 1;
				}
				PED::SET_PED_RESET_FLAG(*iParam0, 128, true);
				if (iLocal_375 == 1)
				{
					__LIB_17__::func_205(iParam0, 27);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam0, *iParam1))
					{
						if (iParam0->f_17 < 17.5f)
						{
							if (!func_563(iParam2, iParam3))
							{
								__LIB_17__::func_205(iParam0, 24);
							}
						}
					}
					func_561(*iParam1, iParam3, &(iParam1->f_2), &(iParam1->f_5), &(iParam1->f_12), &(iParam1->f_15), &(iParam0->f_10), iParam1->f_9, 3000, 40f);
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
				{
					__LIB_17__::func_205(iParam0, 24);
				}
				if (iParam1->f_16 == 1)
				{
					__LIB_17__::func_205(iParam0, 20);
				}
				break;
			case 27:
				if (iParam0->f_14 == 0)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 2, true);
					TASK::TASK_COMBAT_PED(*iParam0, iParam2, 0, 16);
					iParam0->f_10 = MISC::GET_GAME_TIMER();
					iParam0->f_14 = 1;
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam0, *iParam1))
					{
						if (iParam0->f_17 < 17.5f)
						{
							if (!func_563(iParam2, iParam3))
							{
								__LIB_17__::func_205(iParam0, 24);
							}
						}
					}
					func_561(*iParam1, iParam3, &(iParam1->f_2), &(iParam1->f_5), &(iParam1->f_12), &(iParam1->f_15), &(iParam0->f_10), iParam1->f_9, 3000, 40f);
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
				{
					__LIB_17__::func_205(iParam0, 24);
				}
				if (iParam1->f_16 == 1)
				{
					__LIB_17__::func_205(iParam0, 20);
				}
				break;
			case 26:
				if (iParam0->f_14 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, false);
							TASK::TASK_ENTER_VEHICLE(*iParam0, *iParam1, 20000, -1, 2f, 8, 0);
						}
					}
					iParam0->f_14 = 1;
				}
				if (ENTITY::DOES_ENTITY_EXIST(*iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
				{
					if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam1, false))
					{
						if (iLocal_375 == 1)
						{
							__LIB_17__::func_205(iParam0, 27);
						}
						else
						{
							__LIB_17__::func_205(iParam0, 28);
						}
					}
				}
				else
				{
					__LIB_17__::func_205(iParam0, 24);
				}
				break;
			case 20:
				if (iParam0->f_14 == 0)
				{
					VEHICLE::SET_VEHICLE_UNDRIVEABLE(*iParam1, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, false);
					PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
					PED::SET_PED_COMBAT_ABILITY(*iParam0, 1);
					PED::SET_PED_COMBAT_RANGE(*iParam0, 0);
					PED::SET_PED_SHOOT_RATE(*iParam0, 20);
					PED::SET_PED_ACCURACY(*iParam0, 20);
					TASK::TASK_COMBAT_PED(*iParam0, iParam2, 0, 16);
					iParam0->f_14 = 1;
				}
				break;
			}
	}
}

void func_561(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam8, float fParam9)//Position - 0x75FD9
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), *uParam4, true) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam2, *uParam3, Param7) };
				__LIB_17__::func_167(iParam1, uParam4, uParam5);
			}
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				*uParam6 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - *uParam6) > iParam8)
			{
				if (__LIB_0__::func_76(iParam0, iParam1, 1) > fParam9 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), *uParam2, true) > 20f)
				{
					if (!__LIB_0__::func_86(*uParam2))
					{
						if (!CAM::IS_SPHERE_VISIBLE(*uParam2, 3f))
						{
							MISC::CLEAR_AREA_OF_PEDS(*uParam2, 1.5f, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(*uParam2, 3f, false, false, false, false, false, false, 0);
							ENTITY::SET_ENTITY_COORDS(iParam0, *uParam2, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iParam0, *uParam3);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 10f);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
							*uParam6 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
}

int func_563(int iParam0, int iParam1)//Position - 0x76151
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
			{
				if (!VEHICLE::IS_VEHICLE_STOPPED(iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_564(int* iParam0, int* iParam1, float fParam2, float fParam3)//Position - 0x76187
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (PED::IS_PED_INJURED(*iParam0))
		{
			if (iParam0->f_16 == 0)
			{
				iParam0->f_16 = func_452(iParam0);
				func_451(iParam0->f_16, &iLocal_369, &iLocal_370, &iLocal_371);
				if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_1));
				}
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
			}
		}
		else if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), *iParam0, 1) > fParam3)
			{
				iParam0->f_16 = 1;
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
				if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_1));
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
			{
				if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam1, false))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), *iParam0, 1) > fParam2)
					{
						iParam0->f_16 = 1;
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
						if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
						{
							HUD::REMOVE_BLIP(&(iParam0->f_1));
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0, false))
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), *iParam1, 1) > fParam2)
				{
					VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam1);
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam1);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam1, 0f);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam1);
					if (HUD::DOES_BLIP_EXIST(iParam1->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam1->f_1));
					}
				}
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam1);
				VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam1);
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam1, 0f);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam1);
				if (HUD::DOES_BLIP_EXIST(iParam1->f_1))
				{
					HUD::REMOVE_BLIP(&(iParam1->f_1));
				}
			}
		}
		else
		{
			VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam1);
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam1);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam1, 0f);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam1);
			if (HUD::DOES_BLIP_EXIST(iParam1->f_1))
			{
				HUD::REMOVE_BLIP(&(iParam1->f_1));
			}
		}
	}
}

void func_565(var uParam0, var uParam1)//Position - 0x76349
{
	struct<3> Var0;
	struct<3> Var1;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false))
			{
				if (uParam0->f_15 == 20)
				{
					if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
					{
						HUD::REMOVE_BLIP(&(uParam1->f_1));
					}
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_1))
					{
						uParam0->f_1 = __LIB_0__::func_666(*uParam0, 1, 145);
					}
				}
				else if (!PED::IS_PED_INJURED(*uParam0))
				{
					if (PED::IS_PED_IN_VEHICLE(*uParam0, *uParam1, false))
					{
						if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
						{
							HUD::REMOVE_BLIP(&(uParam0->f_1));
						}
						if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
						{
							uParam1->f_1 = __LIB_0__::func_488(ENTITY::GET_ENTITY_COORDS(*uParam1, true), 0);
							HUD::SET_BLIP_COLOUR(uParam1->f_1, 1);
							HUD::SET_BLIP_PRIORITY(uParam1->f_1, 9);
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_1, "BLIP_VEH" /* GXT: Vehicle */);
						}
						if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
						{
							Var0 = { HUD::GET_BLIP_COORDS(uParam1->f_1) };
							Var1 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true) };
							Var0.f_0 = (Var0.f_0 + (((Var1.f_0 - Var0.f_0) / 1f) * SYSTEM::TIMESTEP()));
							Var0.f_1 = (Var0.f_1 + (((Var1.f_1 - Var0.f_1) / 1f) * SYSTEM::TIMESTEP()));
							Var0.f_2 = (Var0.f_2 + (((Var1.f_2 - Var0.f_2) / 1f) * SYSTEM::TIMESTEP()));
							HUD::SET_BLIP_COORDS(uParam1->f_1, Var0);
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
						{
							HUD::REMOVE_BLIP(&(uParam1->f_1));
						}
						if (!HUD::DOES_BLIP_EXIST(uParam0->f_1))
						{
							uParam0->f_1 = __LIB_0__::func_666(*uParam0, 1, 145);
						}
					}
				}
			}
			else if (!PED::IS_PED_INJURED(*uParam0))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_1));
				}
				if (!HUD::DOES_BLIP_EXIST(uParam0->f_1))
				{
					uParam0->f_1 = __LIB_0__::func_666(*uParam0, 1, 145);
				}
			}
		}
		else if (!PED::IS_PED_INJURED(*uParam0))
		{
			if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				HUD::REMOVE_BLIP(&(uParam1->f_1));
			}
			if (!HUD::DOES_BLIP_EXIST(uParam0->f_1))
			{
				uParam0->f_1 = __LIB_0__::func_666(*uParam0, 1, 145);
			}
		}
	}
}

int func_568(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x765A4
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0, 26, iParam1, iParam3, true, true);
		PED::SET_PED_MAX_HEALTH(iVar0, iParam4);
		ENTITY::SET_ENTITY_HEALTH(iVar0, iParam4, 0);
		PED::SET_PED_DIES_WHEN_INJURED(iVar0, true);
		WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam5, -1, false, true);
		WEAPON::SET_PED_INFINITE_AMMO(iVar0, true, iParam5);
		PED::SET_PED_AS_ENEMY(iVar0, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam2);
		PED::SET_PED_TARGET_LOSS_RESPONSE(iVar0, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 188, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 118, false);
		PED::SET_PED_CONFIG_FLAG(iVar0, 132, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 214, true);
		PED::SET_COMBAT_FLOAT(iVar0, 12, 30f);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		return iVar0;
	}
	return 0;
}

int func_569(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x7664E
{
	if (iParam1 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			STREAMING::REQUEST_MODEL(iParam0->f_6);
			if (STREAMING::HAS_MODEL_LOADED(iParam0->f_6))
			{
				if (iParam2 == 1)
				{
					*iParam0 = __LIB_15__::func_998(iParam0->f_6, iParam0->f_2, iParam0->f_5);
					AUDIO::SET_HORN_ENABLED(*iParam0, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				else if (iParam3 == 145)
				{
					*iParam0 = VEHICLE::CREATE_VEHICLE(iParam0->f_6, iParam0->f_2, iParam0->f_5, true, true, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				else if (func_638(iParam0, iParam3, iParam0->f_2, iParam0->f_5, 1, 0))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
				{
					if (iParam6 != -1 && iParam7 != -1)
					{
						VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam6, iParam7);
					}
					if (iParam5 != -1)
					{
						VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, iParam5);
					}
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, iParam8, iParam9);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, bParam4);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(*iParam0, !bParam4);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, !bParam4);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, !bParam4, 0);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0->f_6))
					{
						VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(*iParam0, 0, !bParam4);
						VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(*iParam0, 1, !bParam4);
					}
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iParam1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (__LIB_16__::func_41(iParam0, iParam3, iParam0->f_2, iParam0->f_5, 1, 0))
			{
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, bParam4);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(*iParam0, !bParam4);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, !bParam4);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, !bParam4, 0);
				if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0->f_6))
				{
					VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(*iParam0, 0, !bParam4);
					VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(*iParam0, 1, !bParam4);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_638(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)//Position - 0x7FCCB
{
	struct<98> Var0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_374(iParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		__LIB_14__::func_75(iParam1, &Var0, iParam5);
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*uParam0) != Var0.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 17 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][0 /*98*/] == Var0.f_0) || (iParam1 == 15 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][1 /*98*/] == Var0.f_0))
		{
			if (iParam1 == 17)
			{
				iVar1 = 0;
			}
			else if (iParam1 == 15)
			{
				iVar1 = 1;
			}
			STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/], Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*uParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*uParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 1250f);
				Var0.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_5, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_7, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, Var0.f_2);
				iVar2 = 0;
				while (iVar2 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*uParam0, iVar2 + 1, !Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_11[iVar2]);
					iVar2++;
				}
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_24)
				{
					if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*uParam0, false))
					{
						if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_24)
						{
							VEHICLE::RAISE_CONVERTIBLE_ROOF(*uParam0, true);
						}
						else
						{
							VEHICLE::LOWER_CONVERTIBLE_ROOF(*uParam0, true);
						}
					}
				}
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_27));
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26);
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_84, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_85, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_93, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_94, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 2, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 3, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 0, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 1, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
						{
							if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90);
						}
					}
				}
				__LIB_0__::func_670(uParam0, &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, Var0.f_96);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]);
				}
				__LIB_17__::func_150(*uParam0);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var0.f_0);
			if (STREAMING::HAS_MODEL_LOADED(Var0.f_0))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Var0.f_0, Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*uParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
				__LIB_17__::func_175(uParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					__LIB_17__::func_150(*uParam0);
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var0.f_0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_643(int iParam0, var uParam1, var uParam2, int iParam3, float fParam4, float fParam5, int iParam6)//Position - 0x80A56
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	var uVar4;
	float fVar5;
	var uVar6;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			Var1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var0, iParam3, &Var3, &uVar4, &uVar6, iParam6, 3f, 0f))
			{
				Var2 = { Var3 - Var0 };
				fVar5 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var2.f_0, Var2.f_1, Var1.f_0, Var1.f_1);
				if (fVar5 > fParam4 && fVar5 < fParam5)
				{
					*uParam1 = { Var3 };
					*uParam2 = uVar4;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_645(int iParam0)//Position - 0x80B0F
{
	int iVar0;
	switch (*iParam0)
	{
		case 0:
			*iParam0++;
			break;
		case 1:
			if ((((ENTITY::DOES_ENTITY_EXIST(Local_418[0 /*18*/]) && ENTITY::DOES_ENTITY_EXIST(Local_418[1 /*18*/])) && ENTITY::DOES_ENTITY_EXIST(Local_418[2 /*18*/])) && ENTITY::DOES_ENTITY_EXIST(Local_418[3 /*18*/])) && ENTITY::DOES_ENTITY_EXIST(Local_418[4 /*18*/]))
			{
				iVar0 = 0;
				while (iVar0 < Local_418.f_0)
				{
					switch (iLocal_73)
					{
						case 0:
						case 2:
							break;
						case 3:
							if (!ENTITY::IS_ENTITY_DEAD(Local_418[iVar0 /*18*/], false))
							{
								if ((Local_418[iVar0 /*18*/].f_15 != 1 && Local_418[iVar0 /*18*/].f_15 != 22) && Local_418[iVar0 /*18*/].f_15 != 24)
								{
									__LIB_17__::func_205(&(Local_418[iVar0 /*18*/]), 22);
								}
							}
							break;
					}
					iVar0++;
				}
				*iParam0++;
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_418.f_0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_418[iVar0 /*18*/]))
					{
						STREAMING::REQUEST_MODEL(iLocal_49);
						if (STREAMING::HAS_MODEL_LOADED(iLocal_49))
						{
							Local_418[iVar0 /*18*/] = func_652(Local_418[iVar0 /*18*/].f_2, Local_418[iVar0 /*18*/].f_5, iLocal_49, joaat("SECURITY_GUARD"), 200, joaat("WEAPON_PISTOL"));
							__LIB_17__::func_205(&(Local_418[iVar0 /*18*/]), 0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_49);
						}
					}
					iVar0++;
				}
			}
			break;
		case 2:
			if (iLocal_306 == 0)
			{
				if (iLocal_345 != 0)
				{
					if (__LIB_16__::func_299(20000, iLocal_345))
					{
						iLocal_306 = 1;
					}
				}
			}
			func_646(&(Local_418[0 /*18*/]), PLAYER::PLAYER_PED_ID(), Local_106.f_0, sLocal_69, -1177.71f, -503.58f, 34.57f, 0.75f, 10000, 6000, 1050, 1f, 0);
			func_646(&(Local_418[1 /*18*/]), PLAYER::PLAYER_PED_ID(), Local_106.f_0, sLocal_70, -1189.43f, -506.21f, 34.57f, 0.75f, 20000, 5500, 1000, 0f, 0);
			func_646(&(Local_418[2 /*18*/]), PLAYER::PLAYER_PED_ID(), Local_106.f_0, cLocal_71, -1182.29f, -507.45f, 34.57f, 0.75f, 12000, 6500, 950, 1f, 0);
			func_646(&(Local_418[3 /*18*/]), PLAYER::PLAYER_PED_ID(), Local_106.f_0, sLocal_72, -1171.85f, -512.33f, 34.57f, 0.75f, 15000, 5000, 1100, 0f, 1);
			func_646(&(Local_418[4 /*18*/]), PLAYER::PLAYER_PED_ID(), Local_106.f_0, sLocal_70, -1158.05f, -513.84f, 34.02f, 0.75f, 16000, 6000, 900, 0f, 1);
			break;
	}
}

void func_646(int* iParam0, int iParam1, int iParam2, char* sParam3, struct<3> Param4, float fParam5, int iParam6, int iParam7, int iParam8, float fParam9, int iParam10)//Position - 0x80D9B
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			if (!PED::IS_PED_INJURED(iParam1))
			{
				iParam0->f_17 = __LIB_0__::func_76(*iParam0, iParam1, 1);
				func_478(*iParam0, iParam1, &(iParam0->f_13), &(iParam0->f_11), iParam8);
				switch (iParam0->f_15)
				{
					case 0:
						__LIB_17__::func_205(iParam0, 4);
						break;
					case 4:
						if (iParam0->f_14 == 0)
						{
							TASK::TASK_START_SCENARIO_IN_PLACE(*iParam0, "WORLD_HUMAN_GUARD_STAND", 0, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
							iParam0->f_7 = 0;
							iParam0->f_14 = 1;
						}
						if (iParam10 == 1)
						{
							if ((iLocal_73 == 0 && WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar0, true)) && iVar0 == joaat("WEAPON_STUNGUN"))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
							}
							else
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
							}
						}
						if (iParam0->f_13 == 1)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(iParam1, iParam2, 2.5f, 2.5f, 2.5f, false, true, 1))
								{
									__LIB_17__::func_205(iParam0, 21);
								}
							}
						}
						if ((((((((iLocal_306 == 1 || iLocal_317 == 1) || iLocal_318 == 1) || PED::IS_PED_IN_COMBAT(*iParam0, 0)) || func_651(*iParam0, iParam1)) || func_650(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_649(*iParam0, iParam1, iParam2, iParam0->f_13)) || func_648(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_647(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
						{
							__LIB_17__::func_205(iParam0, 24);
						}
						if (iLocal_326 == 1)
						{
							__LIB_17__::func_205(iParam0, 23);
						}
						if (iParam0->f_13 == 1)
						{
							if (iParam10 == 1)
							{
								PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(*iParam0, false);
							}
							if ((MISC::GET_GAME_TIMER() - iParam0->f_7) > 0)
							{
								if (iParam0->f_17 < 12f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
									{
										if (iLocal_312 == 1)
										{
											if (iParam10 == 1)
											{
												TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam1, 6000, 3074, 4);
												__LIB_0__::func_709(*iParam0, "NEEDED_ON_SET", sParam3, 10);
												iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000));
											}
										}
										else
										{
											TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam1, 6000, 3074, 4);
											__LIB_0__::func_709(*iParam0, "MOVE_AWAY_WARNING", sParam3, 10);
											iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000));
										}
									}
								}
							}
						}
						else if (iParam10 == 1)
						{
							PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(*iParam0, true);
						}
						break;
					case 21:
						if (iParam0->f_14 == 0)
						{
							STREAMING::REQUEST_ANIM_DICT("move_m@intimidation@cop@unarmed");
							STREAMING::REQUEST_ANIM_DICT("reaction@intimidation@cop@unarmed");
							if (STREAMING::HAS_ANIM_DICT_LOADED("move_m@intimidation@cop@unarmed") && STREAMING::HAS_ANIM_DICT_LOADED("reaction@intimidation@cop@unarmed"))
							{
								TASK::CLEAR_SEQUENCE_TASK(&iVar1);
								TASK::OPEN_SEQUENCE_TASK(&iVar1);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam1, 0);
								TASK::TASK_LOOK_AT_ENTITY(0, iParam1, 100, 2, 2);
								TASK::TASK_PLAY_ANIM(0, "reaction@intimidation@cop@unarmed", "intro", 4f, -8f, -1, 0, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "move_m@intimidation@cop@unarmed", "idle", 8f, -4f, -1, 1, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iVar1);
								TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar1);
								TASK::CLEAR_SEQUENCE_TASK(&iVar1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
								iParam0->f_10 = MISC::GET_GAME_TIMER();
								iParam0->f_14 = 1;
							}
						}
						if ((((((((iLocal_306 == 1 || iLocal_317 == 1) || iLocal_318 == 1) || PED::IS_PED_IN_COMBAT(*iParam0, 0)) || func_651(*iParam0, iParam1)) || func_650(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_649(*iParam0, iParam1, iParam2, iParam0->f_13)) || func_648(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_647(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
						{
							__LIB_17__::func_205(iParam0, 24);
						}
						if (iLocal_326 == 1)
						{
							__LIB_17__::func_205(iParam0, 23);
						}
						break;
					case 23:
						PED::SET_PED_RESET_FLAG(*iParam0, 128, true);
						if (iParam0->f_14 == 0)
						{
							PED::SET_PED_COMBAT_ABILITY(*iParam0, 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, false);
							PED::SET_PED_COMBAT_RANGE(*iParam0, 0);
							PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
							PED::SET_COMBAT_FLOAT(*iParam0, 5, 1f);
							PED::SET_COMBAT_FLOAT(*iParam0, 8, 1f);
							TASK::TASK_COMBAT_PED(*iParam0, iParam1, 0, 16);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
							iParam0->f_10 = MISC::GET_GAME_TIMER();
							iParam0->f_7 = 0;
							iParam0->f_14 = 1;
						}
						if (iParam0->f_14 == 1)
						{
							if (((((((iLocal_306 == 1 || iLocal_317 == 1) || iLocal_318 == 1) || __LIB_16__::func_299(iParam7, iParam0->f_10)) || func_651(*iParam0, iParam1)) || func_650(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_649(*iParam0, iParam1, iParam2, iParam0->f_13)) || func_648(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
							{
								__LIB_17__::func_205(iParam0, 24);
							}
						}
						if (iParam0->f_13 == 1)
						{
							if ((MISC::GET_GAME_TIMER() - iParam0->f_7) > 0)
							{
								if (iParam0->f_17 < 12f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
									{
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
										{
											case 0:
												TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam1, 1000, 3074, 4);
												__LIB_0__::func_709(*iParam0, "MOVE_AWAY_FROM_THE_CAR", sParam3, 10);
												iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000));
												break;
											case 1:
												TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam1, 1000, 3074, 4);
												__LIB_0__::func_709(*iParam0, "FREEZE", sParam3, 10);
												iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000));
												break;
											}
										}
									}
								}
						}
						break;
					case 22:
						PED::SET_PED_RESET_FLAG(*iParam0, 128, true);
						if (iParam0->f_14 == 0)
						{
							STREAMING::REMOVE_ANIM_DICT("move_m@intimidation@cop@unarmed");
							STREAMING::REMOVE_ANIM_DICT("reaction@intimidation@cop@unarmed");
							PED::SET_PED_COMBAT_ABILITY(*iParam0, 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, false);
							PED::SET_PED_COMBAT_RANGE(*iParam0, 0);
							PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 1);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam0, Param4, fParam5, false, false);
							PED::SET_COMBAT_FLOAT(*iParam0, 5, 1f);
							PED::SET_COMBAT_FLOAT(*iParam0, 8, fParam9);
							TASK::TASK_COMBAT_PED(*iParam0, iParam1, 0, 16);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
							iParam0->f_10 = MISC::GET_GAME_TIMER();
							iParam0->f_7 = 0;
							iParam0->f_14 = 1;
						}
						if (iParam0->f_14 == 1)
						{
							if (((((((iLocal_306 == 1 || iLocal_317 == 1) || iLocal_318 == 1) || __LIB_16__::func_299(iParam6, iParam0->f_10)) || func_651(*iParam0, iParam1)) || func_650(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_649(*iParam0, iParam1, iParam2, iParam0->f_13)) || func_648(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
							{
								__LIB_17__::func_205(iParam0, 24);
							}
							if ((MISC::GET_GAME_TIMER() - iParam0->f_7) > 0)
							{
								if (iParam0->f_17 < 15f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
									{
										TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam1, 1000, 3074, 4);
										__LIB_0__::func_709(*iParam0, "GET_OUT_OF_THE_CAR", sParam3, 10);
										iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
									}
								}
							}
						}
						break;
					case 24:
						if (iParam0->f_14 == 0)
						{
							STREAMING::REMOVE_ANIM_DICT("move_m@intimidation@cop@unarmed");
							STREAMING::REMOVE_ANIM_DICT("reaction@intimidation@cop@unarmed");
							PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, false);
							PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 42, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 50, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 21, true);
							PED::SET_COMBAT_FLOAT(*iParam0, 5, 1f);
							PED::SET_COMBAT_FLOAT(*iParam0, 8, 0f);
							if (iParam0->f_17 < 25f)
							{
								__LIB_0__::func_709(*iParam0, "FREEZE", sParam3, 10);
								TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam1, 1000, 3074, 4);
							}
							TASK::TASK_COMBAT_PED(*iParam0, iParam1, 0, 16);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
							iLocal_306 = 1;
							iParam0->f_14 = 1;
						}
						break;
					}
				}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			iParam0->f_15 = 1;
			if (iParam0->f_16 == 0)
			{
				iParam0->f_16 = func_452(iParam0);
				func_451(iParam0->f_16, &iLocal_369, &iLocal_370, &iLocal_371);
			}
		}
	}
}

int func_647(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x815AA
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (!PED::IS_PED_INJURED(iParam1))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
					{
						if (fParam2 < 40f)
						{
							if (VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(PED::GET_VEHICLE_PED_IS_USING(iParam1)))
							{
								return 1;
							}
						}
						if (fParam2 < 5f)
						{
							if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_USING(iParam1)) && ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_USING(iParam1)) > 5f)
							{
								return 1;
							}
						}
						if (bLocal_319 == 1)
						{
							if (iParam3 == 1)
							{
								if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(iParam1))) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(iParam1))))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_648(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x81661
{
	if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_INJURED(iParam1))
	{
		if (fParam2 < 25f && iParam3 == 1)
		{
			if (!PED::IS_PED_DEAD_OR_DYING(iParam0, true))
			{
				if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_649(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x816AC
{
	if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_INJURED(iParam1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !ENTITY::IS_ENTITY_DEAD(iParam2, false))
		{
			if (iParam3 == 1)
			{
				if (PED::IS_PED_ON_SPECIFIC_VEHICLE(iParam1, iParam2) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam2, iParam1, true))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_650(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x81705
{
	var uVar0;
	if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_INJURED(iParam1))
	{
		if (fParam2 < 20f && iParam3 == 1)
		{
			if ((((PED::IS_PED_SHOOTING(iParam1) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 29)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0)) || WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &uVar0, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_651(int iParam0, int iParam1)//Position - 0x81782
{
	struct<3> Var0;
	if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_INJURED(iParam1))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		if ((((((((((((((PED::HAS_PED_RECEIVED_EVENT(iParam0, 42) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 29)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 60)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 61)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 22)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 88)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 77)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 124)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 126)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 125)) || MISC::IS_BULLET_IN_AREA(Var0, 20f, true)) || MISC::IS_BULLET_IN_AREA(Var0, 20f, false)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, 20f)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true))
		{
			return 1;
		}
	}
	return 0;
}

int func_652(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x81892
{
	int iVar0;
	iVar0 = PED::CREATE_PED(26, iParam2, Param0, fParam1, true, true);
	ENTITY::SET_ENTITY_HEALTH(iVar0, iParam4, 0);
	PED::SET_PED_MAX_HEALTH(iVar0, iParam4);
	PED::SET_PED_DIES_WHEN_INJURED(iVar0, true);
	WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam5, -1, false, true);
	WEAPON::SET_PED_INFINITE_AMMO(iVar0, true, iParam5);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam3);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iVar0, 1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 118, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 152, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 132, true);
	PED::SET_COMBAT_FLOAT(iVar0, 12, 30f);
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	return iVar0;
}

void func_653(int iParam0)//Position - 0x8191E
{
	switch (*iParam0)
	{
		case 0:
			*iParam0++;
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_422[0 /*18*/]) && ENTITY::DOES_ENTITY_EXIST(Local_423[0 /*18*/]))
			{
				switch (iLocal_73)
				{
					case 0:
					case 2:
						break;
					case 3:
						if (!ENTITY::IS_ENTITY_DEAD(Local_422[0 /*18*/], false))
						{
							if ((Local_422[0 /*18*/].f_15 != 1 && Local_422[0 /*18*/].f_15 != 24) && Local_422[0 /*18*/].f_15 != 25)
							{
								__LIB_17__::func_202(Local_422[0 /*18*/], -1055.8082f, -485.295f, 35.6577f, 117.3792f, 0, 0, 0);
								__LIB_17__::func_205(&(Local_422[0 /*18*/]), 25);
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_423[0 /*18*/], false))
						{
							if ((Local_423[0 /*18*/].f_15 != 1 && Local_423[0 /*18*/].f_15 != 24) && Local_423[0 /*18*/].f_15 != 25)
							{
								__LIB_17__::func_202(Local_423[0 /*18*/], -1206.0895f, -571.6317f, 26.2291f, 303.6333f, 0, 0, 0);
								__LIB_17__::func_205(&(Local_423[0 /*18*/]), 25);
							}
						}
						break;
				}
				*iParam0++;
			}
			else
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_422[0 /*18*/]))
				{
					STREAMING::REQUEST_MODEL(iLocal_49);
					if (STREAMING::HAS_MODEL_LOADED(iLocal_49))
					{
						Local_422[0 /*18*/] = func_652(Local_422[0 /*18*/].f_2, Local_422[0 /*18*/].f_5, iLocal_49, joaat("SECURITY_GUARD"), 200, joaat("WEAPON_PISTOL"));
						__LIB_17__::func_205(&(Local_422[0 /*18*/]), 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_49);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_423[0 /*18*/]))
				{
					STREAMING::REQUEST_MODEL(iLocal_49);
					if (STREAMING::HAS_MODEL_LOADED(iLocal_49))
					{
						Local_423[0 /*18*/] = func_652(Local_423[0 /*18*/].f_2, Local_423[0 /*18*/].f_5, iLocal_49, joaat("SECURITY_GUARD"), 200, joaat("WEAPON_PISTOL"));
						__LIB_17__::func_205(&(Local_423[0 /*18*/]), 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_49);
					}
				}
			}
			break;
		case 2:
			func_654(&(Local_422[0 /*18*/]), sLocal_69, PLAYER::PLAYER_PED_ID(), Local_106.f_0, -1044.1826f, -485.86337f, 34.623894f, -1061.6537f, -472.5105f, 43.651306f, 3f, -1063.4031f, -471.48038f, 35.153713f, -1043.4906f, -486.18692f, 39.613873f, 10f, 650);
			func_654(&(Local_423[0 /*18*/]), sLocal_70, PLAYER::PLAYER_PED_ID(), Local_106.f_0, -1203.2362f, -582.19727f, 25.330757f, -1212.6396f, -571.0089f, 32.306335f, 1.5f, -1202.5592f, -583.1415f, 24.330172f, -1213.0593f, -570.62427f, 30.307667f, 20f, 750);
			break;
	}
}

void func_654(int* iParam0, char* sParam1, int iParam2, int iParam3, struct<3> Param4, struct<3> Param5, float fParam6, struct<3> Param7, struct<3> Param8, float fParam9, int iParam10)//Position - 0x81BCB
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			if (!PED::IS_PED_INJURED(iParam2))
			{
				iParam0->f_17 = __LIB_0__::func_76(*iParam0, iParam2, 1);
				func_478(*iParam0, iParam2, &(iParam0->f_13), &(iParam0->f_11), iParam10);
				switch (iParam0->f_15)
				{
					case 0:
						__LIB_17__::func_205(iParam0, 4);
						break;
					case 4:
						if (iParam0->f_14 == 0)
						{
							TASK::TASK_START_SCENARIO_IN_PLACE(*iParam0, "WORLD_HUMAN_GUARD_STAND", 0, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
							iParam0->f_7 = 0;
							iParam0->f_14 = 1;
						}
						if ((((iLocal_306 == 1 || PED::IS_PED_IN_COMBAT(*iParam0, 0)) || func_651(*iParam0, iParam2)) || func_650(*iParam0, iParam2, iParam0->f_17, iParam0->f_13)) || func_647(*iParam0, iParam2, iParam0->f_17, iParam0->f_13))
						{
							__LIB_17__::func_205(iParam0, 24);
						}
						if (iParam0->f_13 == 1)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam2, Param4, Param5, fParam6, false, true, 0))
							{
								__LIB_17__::func_205(iParam0, 24);
							}
							if ((MISC::GET_GAME_TIMER() - iParam0->f_7) > 0)
							{
								if (bLocal_319 == 0 && iParam0->f_17 < 15f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
									{
										TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam2, 1000, 3074, 4);
										__LIB_0__::func_709(*iParam0, "MOVE_AWAY_WARNING", sParam1, 6);
										iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000));
									}
								}
							}
						}
						break;
					case 25:
						if (iParam0->f_14 == 0)
						{
							PED::SET_PED_COMBAT_RANGE(*iParam0, 0);
							PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 1);
							PED::SET_PED_COMBAT_ABILITY(*iParam0, 2);
							PED::SET_PED_ANGLED_DEFENSIVE_AREA(*iParam0, Param7, Param8, fParam9, false, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 50, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 42, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 13, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 28, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 43, true);
							PED::SET_COMBAT_FLOAT(*iParam0, 5, 1f);
							PED::SET_COMBAT_FLOAT(*iParam0, 8, 0.5f);
							TASK::TASK_COMBAT_PED(*iParam0, iParam2, 67108864, 16);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
							iParam0->f_7 = 0;
							iParam0->f_14 = 1;
						}
						if (iParam0->f_13 == 1)
						{
							if (__LIB_2__::func_789(iParam2, iParam3, 0))
							{
								if (iParam0->f_17 < 20f)
								{
									if ((MISC::GET_GAME_TIMER() - iParam0->f_7) > 0)
									{
										if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
										{
											if (VEHICLE::IS_VEHICLE_STOPPED(iParam3))
											{
												TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam2, 1000, 3074, 4);
												__LIB_0__::func_709(*iParam0, "GET_OUT_OF_THE_CAR", sParam1, 6);
												iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000));
											}
											else
											{
												TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam2, 1000, 3074, 4);
												__LIB_0__::func_709(*iParam0, "STOP_THE_CAR", sParam1, 6);
												iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000));
											}
										}
									}
								}
							}
						}
						break;
					case 24:
						if (iParam0->f_14 == 0)
						{
							PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, false);
							PED::SET_PED_COMBAT_RANGE(*iParam0, 0);
							PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
							PED::SET_PED_COMBAT_ABILITY(*iParam0, 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 50, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 42, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 13, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 28, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 43, true);
							PED::SET_COMBAT_FLOAT(*iParam0, 5, 1f);
							PED::SET_COMBAT_FLOAT(*iParam0, 8, 0.2f);
							__LIB_0__::func_709(*iParam0, "FREEZE", sParam1, 6);
							TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam2, 1000, 3074, 4);
							if (!PED::IS_PED_IN_COMBAT(*iParam0, iParam2))
							{
								TASK::TASK_COMBAT_PED(*iParam0, iParam2, 67108864, 16);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
							iLocal_306 = 1;
							iParam0->f_14 = 1;
						}
						break;
					}
				}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			iParam0->f_15 = 1;
			if (iParam0->f_16 == 0)
			{
				iParam0->f_16 = func_452(iParam0);
				func_451(iParam0->f_16, &iLocal_369, &iLocal_370, &iLocal_371);
			}
		}
	}
}

void func_655()//Position - 0x81FAE
{
	int iVar0;
	switch (Local_76.f_9)
	{
		case 0:
			if (!BitTest(Global_96891, 1) && !BitTest(Global_96891, 3))
			{
				Local_76.f_9++;
			}
			else if (BitTest(Global_96891, 1) && BitTest(Global_96891, 0))
			{
				Local_76.f_9 = 10;
			}
			break;
		case 1:
			Local_76.f_2 = { -1105.23f, -491.2f, 34.83f };
			Local_76.f_5 = 206.1382f;
			Local_76.f_6 = joaat("U_M_M_SpyActor");
			Local_76.f_9++;
			break;
		case 2:
			if (func_492(&Local_76, 0, iLocal_75, 0, 145, 0, 1, 0, 0, -1, 1))
			{
				if (!PED::IS_PED_INJURED(Local_76.f_0))
				{
					if (BitTest(Global_96891, 0))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_76.f_0, 4, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_76.f_0, 3, 1, 0, 0);
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_76.f_0, 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_76.f_0, 3, 0, 0, 0);
					}
				}
				STREAMING::REQUEST_ANIM_DICT("misscarsteal4@actor");
				Local_76.f_16 = 0;
				Local_76.f_12 = 0;
				Local_76.f_9++;
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1177.4655f, -508.06393f, 36.566887f, 28f, 16f, 8f, false, true, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_110.f_0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_110.f_0, false))
					{
						ENTITY::SET_ENTITY_ROTATION(Local_110.f_0, Local_110.f_4, 2, true);
					}
				}
				if (!PED::IS_PED_INJURED(Local_76.f_0))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_76.f_0, 101, 0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "misscarsteal4@actor", "stumble", -1111.76f, -505.9f, 35.035f, 0f, 0f, -164f, 1000f, -1000f, -1, 12288, 0.1f, 2, 0);
					TASK::TASK_PLAY_ANIM(0, "misscarsteal4@actor", "dazed_idle", 1000f, -8f, -1, 12289, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_76.f_0, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				}
				Local_76.f_10 = 0;
				Local_76.f_9++;
			}
			break;
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(Local_76.f_0))
			{
				Local_76.f_17 = __LIB_0__::func_76(Local_76.f_0, PLAYER::PLAYER_PED_ID(), 1);
				if (!ENTITY::IS_ENTITY_DEAD(Local_76.f_0, false))
				{
					if (__LIB_1__::func_483(PLAYER::PLAYER_PED_ID(), Local_106.f_0))
					{
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_76.f_0, Local_106.f_0, false))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_106.f_0, Local_76.f_0))
							{
								if (Local_76.f_10 == 0)
								{
									Local_76.f_10 = MISC::GET_GAME_TIMER();
								}
								else if (__LIB_16__::func_299(300, Local_76.f_10))
								{
									PED::SET_PED_TO_RAGDOLL(Local_76.f_0, 10000, 20000, 0, true, true, false);
									PED::APPLY_DAMAGE_TO_PED(Local_76.f_0, 10, true, 0);
									Local_76.f_16 = 6;
								}
							}
						}
					}
					else if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_76.f_0, PLAYER::PLAYER_PED_ID(), false))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_76.f_0))
						{
							if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
							{
								PED::SET_PED_TO_RAGDOLL(Local_76.f_0, 10000, 20000, 0, true, true, false);
								PED::APPLY_DAMAGE_TO_PED(Local_76.f_0, 10, true, 0);
								Local_76.f_16 = 6;
							}
						}
					}
				}
				else if (Local_76.f_16 == 0)
				{
					Local_76.f_16 = func_452(&Local_76);
					if (Local_76.f_16 == 5)
					{
						__LIB_0__::func_630(124);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 3);
					}
				}
				if (Local_76.f_17 > 200f)
				{
					if (bLocal_319 == 0)
					{
						STREAMING::REMOVE_ANIM_DICT("misscarsteal4@actor");
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_76);
					}
				}
			}
			break;
		case 10:
			if (BitTest(Global_96891, 1) && BitTest(Global_96891, 0))
			{
				if (func_492(&Local_76, 0, iLocal_75, 0, 145, 0, 1, 0, 0, -1, 1))
				{
					if (!PED::IS_PED_INJURED(Local_76.f_0))
					{
						if (BitTest(Global_96891, 0))
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_76.f_0, 4, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_76.f_0, 3, 1, 0, 0);
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_76.f_0, 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_76.f_0, 3, 0, 0, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_110.f_0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_110.f_0, false))
							{
								ENTITY::SET_ENTITY_ROTATION(Local_110.f_0, 0f, 0f, 27f, 2, true);
							}
						}
						STREAMING::REMOVE_ANIM_DICT("misscarsteal4@actor");
						iLocal_339 = 0;
						Local_76.f_9 = 11;
					}
				}
			}
			break;
		case 11:
			if (ENTITY::DOES_ENTITY_EXIST(Local_76.f_0))
			{
				Local_76.f_17 = __LIB_0__::func_76(Local_76.f_0, PLAYER::PLAYER_PED_ID(), 1);
				if (!ENTITY::IS_ENTITY_DEAD(Local_76.f_0, false))
				{
					switch (iLocal_339)
					{
						case 0:
							if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_396))
							{
								STREAMING::REQUEST_ANIM_DICT("dead");
								if (STREAMING::HAS_ANIM_DICT_LOADED("dead"))
								{
									if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_396))
									{
										iLocal_396 = PED::CREATE_SYNCHRONIZED_SCENE(-1114.511f, -501.777f, 35.81f, 0f, 0f, 69.48f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_76.f_0, iLocal_396, "dead", "dead_d", 1000f, -1000f, 4, 145, 1000f, 0);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_76.f_0, false, false);
										AUDIO::STOP_PED_SPEAKING(Local_76.f_0, true);
										ENTITY::SET_ENTITY_INVINCIBLE(Local_76.f_0, true);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_76.f_0, true);
									}
								}
							}
							else
							{
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_76.f_0, 4);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_76.f_0, 128);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_76.f_0, 32);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_76.f_0, 8192);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_76.f_0, 1);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_76.f_0, 16);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_76.f_0, 64);
								iLocal_339++;
							}
							break;
						case 1:
							if (Local_76.f_17 > 200f)
							{
								if (bLocal_319 == 0)
								{
									STREAMING::REMOVE_ANIM_DICT("dead");
									STREAMING::REMOVE_ANIM_DICT("misscarsteal4@actor");
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_76);
								}
							}
							break;
						}
					}
			}
			break;
	}
}

void func_656(int iParam0)//Position - 0x824B7
{
	switch (*iParam0)
	{
		case 0:
			*iParam0++;
			break;
		case 1:
			if ((((Local_424[2 /*18*/].f_15 == 1 || func_492(&(Local_424[2 /*18*/]), 0, iLocal_75, 0, 145, 0, 1, 0, 0, -1, 1)) && (Local_424[3 /*18*/].f_15 == 1 || func_492(&(Local_424[3 /*18*/]), 0, iLocal_75, 0, 145, 0, 1, 0, 0, -1, 1))) && (Local_424[4 /*18*/].f_15 == 1 || func_492(&(Local_424[4 /*18*/]), 0, iLocal_75, 0, 145, 0, 1, 0, 0, -1, 1))) && (Local_424[5 /*18*/].f_15 == 1 || func_492(&(Local_424[5 /*18*/]), 0, iLocal_75, 0, 145, 0, 1, 0, 0, -1, 1)))
			{
				if (!PED::IS_PED_INJURED(Local_424[2 /*18*/]))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_424[2 /*18*/], 0, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_424[2 /*18*/], 3, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_424[2 /*18*/], 4, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_424[2 /*18*/], 8, 0, 0, 0);
				}
				switch (iLocal_73)
				{
					case 0:
					case 2:
						if (!PED::IS_PED_INJURED(Local_424[2 /*18*/]))
						{
							__LIB_17__::func_205(&(Local_424[2 /*18*/]), 10);
						}
						if (!PED::IS_PED_INJURED(Local_424[3 /*18*/]))
						{
							__LIB_17__::func_205(&(Local_424[3 /*18*/]), 10);
						}
						if (!PED::IS_PED_INJURED(Local_424[4 /*18*/]))
						{
							__LIB_17__::func_205(&(Local_424[4 /*18*/]), 10);
						}
						if (!PED::IS_PED_INJURED(Local_424[5 /*18*/]))
						{
							__LIB_17__::func_205(&(Local_424[5 /*18*/]), 10);
						}
						break;
					case 3:
						if (!PED::IS_PED_INJURED(Local_424[2 /*18*/]))
						{
							if (((Local_424[2 /*18*/].f_15 != 1 && Local_424[2 /*18*/].f_15 != 19) && Local_424[2 /*18*/].f_15 != 3) && Local_424[2 /*18*/].f_15 != 12)
							{
								__LIB_17__::func_205(&(Local_424[2 /*18*/]), 3);
							}
						}
						if (!PED::IS_PED_INJURED(Local_424[3 /*18*/]))
						{
							if (Local_424[3 /*18*/].f_15 != 1 && Local_424[3 /*18*/].f_15 != 19)
							{
								__LIB_17__::func_205(&(Local_424[3 /*18*/]), 10);
							}
						}
						if (!PED::IS_PED_INJURED(Local_424[4 /*18*/]))
						{
							if (Local_424[4 /*18*/].f_15 != 1 && Local_424[4 /*18*/].f_15 != 19)
							{
								__LIB_17__::func_205(&(Local_424[4 /*18*/]), 10);
							}
						}
						if (!PED::IS_PED_INJURED(Local_424[5 /*18*/]))
						{
							if (Local_424[5 /*18*/].f_15 != 1 && Local_424[5 /*18*/].f_15 != 19)
							{
								__LIB_17__::func_205(&(Local_424[5 /*18*/]), 10);
							}
						}
						break;
				}
				*iParam0++;
			}
			break;
		case 2:
			func_657(&(Local_424[2 /*18*/]), PLAYER::PLAYER_PED_ID(), Local_106.f_0, -1170.0442f, -511.5512f, 34.5666f, "PROP_HUMAN_MOVIE_STUDIO_LIGHT", 1);
			func_657(&(Local_424[3 /*18*/]), PLAYER::PLAYER_PED_ID(), Local_106.f_0, -1186.86f, -505.8f, 34.58f, "PROP_HUMAN_MOVIE_STUDIO_LIGHT", 0);
			func_657(&(Local_424[4 /*18*/]), PLAYER::PLAYER_PED_ID(), Local_106.f_0, -1178.57f, -488.17f, 34.55f, "PROP_HUMAN_MOVIE_BULB", 0);
			func_657(&(Local_424[5 /*18*/]), PLAYER::PLAYER_PED_ID(), Local_106.f_0, -1175.81f, -483.17f, 34.54f, "PROP_HUMAN_MOVIE_STUDIO_LIGHT", 0);
			break;
	}
}

void func_657(int* iParam0, int iParam1, int iParam2, struct<3> Param3, char* sParam4, int iParam5)//Position - 0x827F8
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iParam0->f_17 = __LIB_0__::func_76(*iParam0, iParam1, 1);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			if (!PED::IS_PED_INJURED(iParam1))
			{
				func_478(*iParam0, iParam1, &(iParam0->f_13), &(iParam0->f_11), 1000);
				switch (iParam0->f_15)
				{
					case 10:
						if (iParam0->f_14 == 0)
						{
							if (!PED::IS_PED_USING_SCENARIO(*iParam0, sParam4))
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(Param3, 1.5f, false))
								{
									TASK::CLEAR_PED_TASKS(*iParam0);
									TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*iParam0, Param3, 1.5f, 0);
								}
								iParam0->f_10 = MISC::GET_GAME_TIMER();
								iParam0->f_14 = 1;
							}
						}
						if (iParam0->f_14 == 1)
						{
							if (PED::IS_PED_USING_SCENARIO(*iParam0, sParam4) && TASK::IS_PED_ACTIVE_IN_SCENARIO(*iParam0))
							{
								__LIB_17__::func_205(iParam0, 11);
							}
							else if (__LIB_16__::func_299(3000, iParam0->f_10))
							{
								__LIB_17__::func_205(iParam0, 10);
							}
						}
						if ((iLocal_325 == 1 || iLocal_318 == 1) || func_480(*iParam0, iParam1))
						{
							__LIB_17__::func_205(iParam0, 19);
						}
						break;
					case 11:
						if (iParam0->f_14 == 0)
						{
							iParam0->f_14 = 1;
						}
						if (!PED::IS_PED_USING_SCENARIO(*iParam0, sParam4))
						{
							__LIB_17__::func_205(iParam0, 10);
						}
						if ((iLocal_325 == 1 || iLocal_318 == 1) || func_480(*iParam0, iParam1))
						{
							__LIB_17__::func_205(iParam0, 19);
						}
						if (iParam0->f_13 == 1 && iParam0->f_17 < 15f)
						{
							if (((PED::IS_PED_SHOOTING(iParam1) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), *iParam0)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), *iParam0)) || WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &uVar0, true))
							{
								__LIB_17__::func_205(iParam0, 19);
							}
						}
						if (iParam5 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_USING(iParam1)))
							{
								if (PED::GET_VEHICLE_PED_IS_USING(iParam1) == iParam2)
								{
									if (__LIB_0__::func_76(iParam1, iParam2, 1) < 2f)
									{
										__LIB_17__::func_205(iParam0, 3);
									}
								}
							}
							if (__LIB_2__::func_789(iParam1, iParam2, 1))
							{
								__LIB_17__::func_205(iParam0, 3);
							}
						}
						break;
					case 3:
						if (iParam0->f_14 == 0)
						{
							STREAMING::REQUEST_ANIM_DICT("misscarsteal4@director_grip");
							if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4@director_grip"))
							{
								PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(*iParam0);
								TASK::CLEAR_PED_TASKS(*iParam0);
								ENTITY::SET_ENTITY_HEALTH(*iParam0, 105, 0);
								Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("misscarsteal4@director_grip", "mcs_2_loop_grip1", Local_53, Local_54, 0f, 2) };
								Var2 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("misscarsteal4@director_grip", "mcs_2_loop_grip1", Local_53, Local_54, 0f, 2) };
								Var1 = { -1175.94f, -508.15f, 34.57f };
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*iParam0, true), Var1, true) < 7.5f)
								{
									TASK::CLEAR_SEQUENCE_TASK(&iVar3);
									TASK::OPEN_SEQUENCE_TASK(&iVar3);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam1, 0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var1, 2f, 40000, 0f, 1028, Var2.f_2);
									TASK::CLOSE_SEQUENCE_TASK(iVar3);
									TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar3);
									TASK::CLEAR_SEQUENCE_TASK(&iVar3);
									iParam0->f_14 = 1;
								}
								else
								{
									__LIB_17__::func_205(iParam0, 24);
								}
							}
						}
						if (iParam0->f_14 == 1)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*iParam0, true), -1175.56f, -507.77f, 34.57f, true) < 1.5f)
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 3))
									{
										TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 1.5f, -1.5f, -1, 49, 0f, false, false, false);
										TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam1, -1, 2048, 2);
									}
								}
							}
							if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
							{
								if (__LIB_2__::func_789(iParam1, iParam2, 0))
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_106.f_0, true), Local_106.f_2, true) > 1.75f)
									{
										__LIB_17__::func_205(iParam0, 13);
									}
								}
							}
							if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
							{
								__LIB_0__::func_709(*iParam0, "GENERIC_FRIGHTENED_HIGH", "A_M_Y_Vinewood_03_White_FULL_01 ", 9);
								__LIB_17__::func_205(iParam0, 12);
							}
						}
						break;
					case 12:
						if (iParam0->f_14 == 0)
						{
							ENTITY::SET_ENTITY_HEALTH(*iParam0, 105, 0);
							PED::SET_PED_CAN_BE_TARGETTED(*iParam0, true);
							TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 1.5f, -1.5f, -1, 1, 0f, false, false, false);
							TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam1, -1, 2048, 2);
							iParam0->f_10 = MISC::GET_GAME_TIMER();
							iParam0->f_9 = 0;
							iParam0->f_14 = 1;
						}
						if (iParam0->f_9 == 0)
						{
							if (__LIB_16__::func_299(250, iParam0->f_10))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
								iParam0->f_9 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 3))
						{
							if (__LIB_16__::func_299(5000, iParam0->f_10))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
								{
									__LIB_17__::func_205(iParam0, 13);
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
						{
							if (!PED::IS_PED_IN_VEHICLE(iParam1, iParam2, false))
							{
								__LIB_17__::func_205(iParam0, 24);
							}
							else if (iParam0->f_17 < 2.25f)
							{
								__LIB_17__::func_205(iParam0, 24);
							}
						}
						break;
					case 13:
						if (iParam0->f_14 == 0)
						{
							TASK::TASK_CLEAR_LOOK_AT(*iParam0);
							TASK::TASK_ENTER_VEHICLE(*iParam0, iParam2, -1, -1, 2f, 655433, 0);
							iParam0->f_14 = 1;
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
						{
							if (!PED::IS_PED_IN_VEHICLE(iParam1, iParam2, false))
							{
								__LIB_17__::func_205(iParam0, 24);
							}
						}
						break;
					case 24:
						if (iParam0->f_14 == 0)
						{
							TASK::TASK_CLEAR_LOOK_AT(*iParam0);
							TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, true);
							PED::SET_COMBAT_FLOAT(*iParam0, 7, 1f);
							TASK::TASK_COMBAT_PED(*iParam0, iParam1, 0, 16);
							iParam0->f_14 = 1;
						}
						if (iParam0->f_13 == 1)
						{
							if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), *iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), *iParam0))
							{
								if (WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar4, true))
								{
									if (iVar4 != joaat("WEAPON_UNARMED"))
									{
										__LIB_17__::func_205(iParam0, 19);
									}
								}
							}
						}
						break;
					case 19:
						if (iParam0->f_14 == 0)
						{
							TASK::CLEAR_PED_TASKS(*iParam0);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, true);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 4, true);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, true);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 128, true);
							if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
							{
								__LIB_0__::func_709(*iParam0, "SCREAM_PANIC", "WAVELOAD_PAIN_MALE", 9);
							}
							TASK::TASK_SMART_FLEE_PED(*iParam0, iParam1, 300f, -1, false, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
							PED::SET_PED_KEEP_TASK(*iParam0, true);
							iLocal_317 = 1;
							iParam0->f_14 = 1;
						}
						break;
					}
				}
		}
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			if (bLocal_319 == 0)
			{
				if (iParam0->f_17 > 300f)
				{
					__LIB_17__::func_205(iParam0, 1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
				}
			}
			if (iParam0->f_15 == 19)
			{
				if (iParam0->f_17 > 200f)
				{
					__LIB_17__::func_205(iParam0, 1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
				}
			}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			iParam0->f_15 = 1;
			if (iParam0->f_16 == 0)
			{
				iParam0->f_16 = func_452(iParam0);
				func_451(iParam0->f_16, &iLocal_369, &iLocal_370, &iLocal_371);
			}
			if (iParam0->f_17 > 200f)
			{
				__LIB_17__::func_205(iParam0, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
			}
		}
	}
}

void func_658(char* sParam0)//Position - 0x82ED1
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (!func_456(sParam0))
		{
			if (__LIB_0__::func_501(sParam0, 0, 0))
			{
				func_489(sParam0, 1);
			}
		}
		else if (!__LIB_0__::func_501(sParam0, 0, 0))
		{
			StringCopy(sParam0, "", 16);
		}
	}
}

int func_659(int iParam0)//Position - 0x82F16
{
	func_658(&cLocal_63);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_106.f_0, false))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Local_106.f_0, 0, false))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, true);
		}
	}
	func_656(&iLocal_338);
	func_663(&iLocal_339);
	func_661(&iLocal_349);
	func_479(&Local_93, PLAYER::PLAYER_PED_ID(), Local_106.f_0);
	func_653(&iLocal_346);
	func_645(&iLocal_344);
	if (!func_456("CAR4_HALERT"))
	{
		if (iLocal_306 == 1)
		{
			func_545("CAR4_HALERT", 0, 1, 10000, 1);
			if (iLocal_391 == 0)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("CAR3_SET_ALERT"))
				{
					iLocal_391 = 1;
				}
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (!HUD::DOES_BLIP_EXIST(Local_106.f_1))
			{
				Local_106.f_1 = __LIB_0__::func_639(Local_106.f_0, 0, 0);
				func_547(&cLocal_63, 7500, 1);
			}
			iLocal_320 = 0;
			*iParam0++;
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1187.1763f, -501.91f, 33.418343f, -1172.8352f, -508.602f, 37.56646f, 12f, false, true, 0))
			{
				if (iLocal_391 == 0)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("CAR3_SET_ALERT"))
					{
						iLocal_391 = 1;
					}
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_106.f_0, false))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 10f, 4);
					if (HUD::DOES_BLIP_EXIST(Local_106.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_106.f_1));
					}
					if (!__LIB_2__::func_789(Local_93.f_0, Local_106.f_0, 0))
					{
						func_660(4);
					}
					if (__LIB_0__::func_75())
					{
						__LIB_0__::func_638();
					}
					AUDIO::TRIGGER_MUSIC_EVENT("CAR3_DRIVE");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_3_INSIDE_STUDIO"))
					{
						AUDIO::STOP_AUDIO_SCENE("CAR_3_INSIDE_STUDIO");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_3_ESCAPE_SECURITY"))
					{
						AUDIO::START_AUDIO_SCENE("CAR_3_ESCAPE_SECURITY");
					}
					func_365(&Local_76, 1, 1, 1);
					STREAMING::REMOVE_ANIM_DICT("dead");
					iLocal_320 = 1;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_660(int iParam0)//Position - 0x830DC
{
	MISC::SET_BIT(&Global_96891, iParam0);
}

void func_661(int iParam0)//Position - 0x830EE
{
	switch (*iParam0)
	{
		case 0:
			*iParam0++;
			break;
		case 1:
			STREAMING::REQUEST_CLIP_SET("move_injured_generic");
			STREAMING::REQUEST_ANIM_DICT("misscarsteal4@director_grip");
			if (STREAMING::HAS_CLIP_SET_LOADED("move_injured_generic") && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4@director_grip"))
			{
				if (func_662(&Local_109, 0) && func_662(&Local_112, 0))
				{
					if (func_492(&(Local_424[1 /*18*/]), 0, iLocal_75, 0, 145, 0, 1, 0, 0, -1, 1) && func_492(&(Local_424[0 /*18*/]), 0, iLocal_75, 0, 145, 0, 1, 0, 0, -1, 1))
					{
						if (!PED::IS_PED_INJURED(Local_424[0 /*18*/]))
						{
							PED::SET_PED_PROP_INDEX(Local_424[0 /*18*/], 1, 0, 0, false);
							__LIB_0__::func_222(&uLocal_131, 7, Local_424[0 /*18*/], "CST4DIRECTOR", 0, 1);
						}
						if (!PED::IS_PED_INJURED(Local_424[1 /*18*/]))
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_424[1 /*18*/], 0, 1, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_424[1 /*18*/], 3, 1, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_424[1 /*18*/], 4, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_424[1 /*18*/], 8, 2, 0, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_112.f_0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_112.f_0, false))
							{
								if (!ENTITY::IS_ENTITY_ATTACHED(Local_112.f_0))
								{
									if (!PED::IS_PED_INJURED(Local_424[1 /*18*/]))
									{
										ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_112.f_0, Local_424[1 /*18*/], PED::GET_PED_BONE_INDEX(Local_424[1 /*18*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
									}
								}
							}
						}
						__LIB_17__::func_205(&(Local_424[1 /*18*/]), 5);
						__LIB_17__::func_205(&(Local_424[0 /*18*/]), 5);
						__LIB_15__::func_995(Local_424[1 /*18*/], 30f, 5f, 90f, -1028390912, 1119092736);
						__LIB_15__::func_995(Local_424[0 /*18*/], 30f, 5f, 90f, -1028390912, 1119092736);
						*iParam0++;
					}
				}
			}
			break;
		case 2:
			func_455(&(Local_424[0 /*18*/]), PLAYER::PLAYER_PED_ID());
			func_450(&(Local_424[1 /*18*/]), PLAYER::PLAYER_PED_ID());
			break;
	}
}

int func_662(int iParam0, bool bParam1)//Position - 0x832DA
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		STREAMING::REQUEST_MODEL(iParam0->f_7);
		if (STREAMING::HAS_MODEL_LOADED(iParam0->f_7))
		{
			*iParam0 = OBJECT::CREATE_OBJECT(iParam0->f_7, iParam0->f_1, true, true, false);
			ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, true);
			ENTITY::SET_ENTITY_ROTATION(*iParam0, iParam0->f_4, 2, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*iParam0, iParam0->f_1, false, false, true);
			if (bParam1 == 1)
			{
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, bParam1);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_7);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_663(int iParam0)//Position - 0x83361
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_76.f_0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_76.f_0, false))
		{
			switch (*iParam0)
			{
				case 0:
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_396))
					{
						STREAMING::REQUEST_ANIM_DICT("dead");
						if (STREAMING::HAS_ANIM_DICT_LOADED("dead"))
						{
							if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_396))
							{
								iLocal_396 = PED::CREATE_SYNCHRONIZED_SCENE(-1114.511f, -501.777f, 35.81f, 0f, 0f, 69.48f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_76.f_0, iLocal_396, "dead", "dead_d", 1000f, -1000f, 4, 145, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_76.f_0, false, false);
								AUDIO::STOP_PED_SPEAKING(Local_76.f_0, true);
								ENTITY::SET_ENTITY_INVINCIBLE(Local_76.f_0, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_76.f_0, true);
							}
						}
					}
					else
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_76.f_0, 4);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_76.f_0, 128);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_76.f_0, 32);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_76.f_0, 8192);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_76.f_0, 1);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_76.f_0, 16);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_76.f_0, 64);
						*iParam0++;
					}
					break;
				}
			}
	}
}

int func_664(int iParam0)//Position - 0x8345C
{
	switch (*iParam0)
	{
		case 0:
			if (func_361("car_4_mcs_1"))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, joaat("Player_One"), 0);
				}
				if (!PED::IS_PED_INJURED(Local_76.f_0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_76.f_0, "spy_actor", 0, joaat("U_M_M_SpyActor"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_110.f_0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_110.f_0, false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_110.f_0, "Actors_trailer_door", 0, Local_110.f_7, 0);
					}
				}
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				*iParam0++;
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				STREAMING::REMOVE_ANIM_DICT("misscarsteal4@toilet");
				STREAMING::REMOVE_ANIM_DICT("misscarsteal4@aliens");
				STREAMING::REMOVE_ANIM_DICT("misscarsteal4@meltdown");
				func_365(&Local_81, 1, 1, 1);
				func_365(&Local_94, 1, 1, 1);
				func_446(&Local_417, 1, 1, 1);
				func_446(&Local_425, 1, 1, 1);
				func_447(&Local_114, 1, 1);
				func_447(&Local_115, 1, 1);
				func_447(&Local_113, 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_111.f_0))
				{
					ENTITY::REMOVE_MODEL_HIDE(Local_111.f_1, 1f, Local_111.f_7, false);
					func_447(&Local_111, 1, 1);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_296))
				{
					HUD::REMOVE_BLIP(&iLocal_296);
				}
				MISC::CLEAR_AREA_OF_PEDS(Local_116, 25f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_116, 25f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_116, 100f, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_116, 25f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_116, 25f);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		case 2:
			STREAMING::REQUEST_ANIM_DICT("dead");
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) >= 17000f)
				{
					PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/, true);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (iLocal_312 == 0)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 10000)
					{
						func_3(1);
						if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("spy_actor", 0))
						{
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("spy_actor", 4, 1, 0, 0);
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("spy_actor", 3, 1, 0, 0);
						}
						iLocal_312 = 1;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1500, 0f, true, false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("spy_actor", 0))
			{
				if (!PED::IS_PED_INJURED(Local_76.f_0))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("dead"))
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_396))
						{
							iLocal_396 = PED::CREATE_SYNCHRONIZED_SCENE(-1114.511f, -501.777f, 35.81f, 0f, 0f, 69.48f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_76.f_0, iLocal_396, "dead", "dead_d", 1000f, -1000f, 4, 145, 1000f, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_76.f_0, false, false);
							AUDIO::STOP_PED_SPEAKING(Local_76.f_0, true);
							ENTITY::SET_ENTITY_INVINCIBLE(Local_76.f_0, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_76.f_0, true);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Actors_trailer_door", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_110.f_0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_110.f_0, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_110.f_0, true);
					}
				}
			}
			if (iLocal_388 == 0)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 10500)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("CAR3_TRAILER"))
						{
							iLocal_388 = 1;
						}
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				RECORDING::REPLAY_STOP_EVENT();
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1500, 0f, true, false);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
				func_660(0);
				return 1;
			}
			else if (iLocal_305 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
					iLocal_305 = 1;
				}
			}
			break;
	}
	return 0;
}

void func_666()//Position - 0x8388D
{
	iLocal_297 = 1;
	iLocal_298 = 0;
	iLocal_304 = 0;
	iLocal_305 = 0;
	iLocal_308 = 0;
	iLocal_309 = 0;
	iLocal_312 = 0;
	iLocal_313 = 0;
	iLocal_314 = 0;
	iLocal_317 = 0;
	iLocal_315 = 0;
	iLocal_316 = 0;
	iLocal_318 = 0;
	Local_76.f_9 = 0;
	iLocal_338 = 0;
	iLocal_339 = 0;
	iLocal_340 = 0;
	iLocal_343 = 0;
	iLocal_341 = 0;
	iLocal_342 = 0;
	iLocal_344 = 0;
	iLocal_345 = 0;
	iLocal_346 = 0;
	iLocal_347 = 0;
	iLocal_348 = 0;
	iLocal_349 = 0;
	iLocal_352 = 0;
	iLocal_353 = 0;
	iLocal_354 = 0;
	iLocal_361 = 0;
	iLocal_362 = 0;
	iLocal_363 = 0;
	iLocal_364 = 0;
	iLocal_365 = 0;
	iLocal_366 = 0;
	iLocal_367 = 0;
	iLocal_372 = 0;
	iLocal_373 = 0;
	iLocal_374 = 0;
	iLocal_310 = 0;
	iLocal_311 = 0;
	iLocal_307 = 0;
	iLocal_376 = 0;
	iLocal_377 = 0;
	iLocal_378 = 0;
	iLocal_379 = 0;
	iLocal_380 = 0;
	iLocal_381 = 0;
	fLocal_382 = 0f;
	iLocal_383 = 0;
	iLocal_355 = 0;
	iLocal_356 = 0;
	iLocal_357 = 0;
	iLocal_358 = 0;
	iLocal_368 = 0;
	iLocal_385 = 0;
	iLocal_386 = 0;
	iLocal_387 = 0;
	iLocal_388 = 0;
	iLocal_389 = 0;
	iLocal_390 = 0;
	iLocal_391 = 0;
	iLocal_402 = 0;
	iLocal_403 = 0;
}

int func_667(var uParam0)//Position - 0x83996
{
	if (bLocal_319)
	{
		if (iLocal_435 == 0)
		{
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 4f, 2);
			iLocal_435 = 1;
		}
	}
	func_656(&iLocal_338);
	func_661(&iLocal_349);
	func_479(&Local_93, PLAYER::PLAYER_PED_ID(), Local_106.f_0);
	func_691(&iLocal_340);
	func_686(&iLocal_341);
	func_685(&iLocal_343);
	func_681(&Local_76, PLAYER::PLAYER_PED_ID());
	func_679(&Local_94, PLAYER::PLAYER_PED_ID());
	func_653(&iLocal_346);
	func_645(&iLocal_344);
	func_677(&iLocal_347);
	func_675(&iLocal_348);
	func_674();
	func_673();
	if (!func_456("CST4_SCALL"))
	{
		if (!__LIB_0__::func_75())
		{
			if (__LIB_16__::func_6(&uLocal_131, 45, "CST4AUD", "CST4_SCALL", 9, 1, 0, 0, 0))
			{
				func_489("CST4_SCALL", 1);
			}
		}
	}
	if (iLocal_387 == 0)
	{
		if (func_456("CST4_SCALL"))
		{
			if (!__LIB_0__::func_75())
			{
				if ((!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() && !__LIB_0__::func_769(45)) && !__LIB_1__::func_860(45))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("CAR3_MISSION_START"))
					{
						iLocal_387 = 1;
					}
				}
			}
		}
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_3_INSIDE_STUDIO"))
	{
		if (bLocal_319 == 1)
		{
			AUDIO::START_AUDIO_SCENE("CAR_3_INSIDE_STUDIO");
		}
	}
	if (!func_456("CAR4_CDOOR"))
	{
		if (func_456("CST4_SCALL"))
		{
			if (!__LIB_0__::func_75())
			{
				if ((!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() && !__LIB_0__::func_769(45)) && !__LIB_1__::func_860(45))
				{
					if (bLocal_319 == 0)
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_296))
						{
							iLocal_296 = HUD::ADD_BLIP_FOR_COORD(-1091f, -433.06f, 36.63f);
							func_547("CAR4_CDOOR", 7500, 1);
						}
					}
					else
					{
						func_489("CAR4_CDOOR", 1);
					}
				}
			}
		}
	}
	if (!func_456("CAR4_HALERT"))
	{
		if (iLocal_387)
		{
			if (iLocal_306 == 1)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_296))
				{
					HUD::REMOVE_BLIP(&iLocal_296);
				}
				if (HUD::DOES_BLIP_EXIST(Local_76.f_1))
				{
					HUD::REMOVE_BLIP(&(Local_76.f_1));
				}
				if (iLocal_391 == 0)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("CAR3_SET_ALERT"))
					{
						iLocal_391 = 1;
					}
				}
				func_545("CAR4_HALERT", 0, 1, 10000, 1);
				if (!__LIB_2__::func_789(PLAYER::PLAYER_PED_ID(), Local_106.f_0, 1))
				{
					if (__LIB_13__::func_755(&Local_118, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					func_547("CAR4_LCAR", 7500, 1);
					__LIB_25__::func_382(&iLocal_394);
					__LIB_25__::func_481(&iLocal_393, Local_106.f_2, 3f);
				}
			}
		}
	}
	if (!func_456("CMN_GENGETIN" /* GXT: ~s~Get in the ~b~car. */))
	{
		if (func_456("CAR4_LCAR"))
		{
			if (__LIB_5__::func_833(iLocal_393))
			{
				if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_393))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_296))
					{
						HUD::REMOVE_BLIP(&iLocal_296);
					}
					if (__LIB_13__::func_755(&Local_118, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					__LIB_25__::func_382(&iLocal_393);
					func_547("CMN_GENGETIN" /* GXT: ~s~Get in the ~b~car. */, 7500, 1);
					if (!HUD::DOES_BLIP_EXIST(Local_106.f_1))
					{
						Local_106.f_1 = __LIB_0__::func_639(Local_106.f_0, 0, 0);
					}
				}
			}
		}
	}
	if (!func_456("CAR4_HKO"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_76.f_0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_76.f_0, false))
			{
				if (Local_76.f_15 != 19)
				{
					if (HUD::DOES_BLIP_EXIST(Local_76.f_1))
					{
						if (__LIB_5__::func_833(iLocal_394))
						{
							if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_394))
							{
								func_545("CAR4_HKO", 0, 1, 10000, 1);
								__LIB_25__::func_382(&iLocal_394);
							}
						}
					}
				}
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_76.f_0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_76.f_0, false))
				{
					if (!func_456("CAR4_TMSTA"))
					{
						if (!HUD::DOES_BLIP_EXIST(Local_76.f_1))
						{
							if (bLocal_319 == 1 && iLocal_306 == 0)
							{
								if (func_456("CST4_SCALL"))
								{
									if (!__LIB_0__::func_75())
									{
										if ((!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() && !__LIB_0__::func_769(45)) && !__LIB_1__::func_860(45))
										{
											HUD::CLEAR_PRINTS();
											if (HUD::DOES_BLIP_EXIST(iLocal_296))
											{
												HUD::REMOVE_BLIP(&iLocal_296);
											}
											Local_76.f_1 = __LIB_0__::func_666(Local_76.f_0, 1, 145);
											func_547("CAR4_TMSTA", 7500, 1);
										}
									}
								}
							}
						}
					}
				}
				if (ENTITY::IS_ENTITY_DEAD(Local_76.f_0, false))
				{
					if ((Local_76.f_16 == 2 || Local_76.f_16 == 3) || Local_76.f_16 == 4)
					{
						if (Local_76.f_16 == 2)
						{
							func_660(2);
							func_668(1);
						}
						else if (Local_76.f_16 == 3)
						{
							func_660(2);
							switch (iLocal_399)
							{
								case joaat("WEAPON_KNIFE"):
								case joaat("WEAPON_BOTTLE"):
								case joaat("WEAPON_DAGGER"):
									func_660(1);
									break;
								default:
									func_668(1);
									break;
							}
						}
						else if (Local_76.f_16 == 4)
						{
							func_668(2);
							func_660(1);
						}
						if (!BitTest(Global_96891, 1))
						{
							__LIB_0__::func_630(122);
						}
						AUDIO::STOP_AUDIO_SCENE("CAR_3_TAKE_OUT_ACTOR");
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 0f, 3);
						*uParam0++;
					}
				}
			}
			break;
		case 1:
			if (iLocal_306 == 0 && iLocal_307 == 0)
			{
				if (!__LIB_0__::func_75())
				{
					if (Local_76.f_17 < 5f)
					{
						__LIB_25__::func_382(&iLocal_393);
						__LIB_25__::func_382(&iLocal_394);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_76);
						return 1;
					}
				}
			}
			break;
	}
	if (__LIB_2__::func_789(PLAYER::PLAYER_PED_ID(), Local_106.f_0, 0))
	{
		if (!__LIB_2__::func_789(Local_93.f_0, Local_106.f_0, 0))
		{
			func_660(4);
		}
		if (__LIB_0__::func_501("CMN_GENGETIN" /* GXT: ~s~Get in the ~b~car. */, 0, 0))
		{
			HUD::CLEAR_PRINTS();
		}
		if (HUD::DOES_BLIP_EXIST(Local_106.f_1))
		{
			HUD::REMOVE_BLIP(&(Local_106.f_1));
		}
		if (HUD::DOES_BLIP_EXIST(Local_76.f_1))
		{
			HUD::REMOVE_BLIP(&(Local_76.f_1));
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_296))
		{
			HUD::REMOVE_BLIP(&iLocal_296);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_76.f_0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_76.f_0, false))
			{
				func_660(3);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_76);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_94.f_0))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_94);
		}
		STREAMING::REMOVE_ANIM_DICT("misscarsteal4@actor");
		STREAMING::REMOVE_ANIM_DICT("misscarsteal4@aliens");
		STREAMING::REMOVE_ANIM_DICT("misscarsteal4@meltdown");
		func_446(&Local_417, 0, 0, 0);
		func_446(&Local_425, 0, 0, 0);
		func_447(&Local_114, 0, 1);
		func_447(&Local_115, 0, 1);
		func_447(&Local_113, 0, 0);
		__LIB_25__::func_382(&iLocal_393);
		__LIB_25__::func_382(&iLocal_394);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_3_INSIDE_STUDIO"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_3_INSIDE_STUDIO");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_3_TAKE_OUT_ACTOR"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_3_TAKE_OUT_ACTOR");
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_3_ESCAPE_SECURITY"))
		{
			AUDIO::START_AUDIO_SCENE("CAR_3_ESCAPE_SECURITY");
		}
		iLocal_320 = 1;
		AUDIO::TRIGGER_MUSIC_EVENT("CAR3_DRIVE");
		CUTSCENE::REMOVE_CUTSCENE();
		return 1;
	}
	return 0;
}

void func_668(int iParam0)//Position - 0x83FAA
{
	MISC::CLEAR_BIT(&Global_96891, iParam0);
}

void func_673()//Position - 0x84065
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_76.f_0))
	{
		if ((__LIB_0__::func_719() || __LIB_6__::func_181()) || iLocal_306 == 1)
		{
			if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("car_4_mcs_1") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
		}
		else if (bLocal_319 == 1 && Local_76.f_17 < 50f)
		{
			CUTSCENE::REQUEST_CUTSCENE("car_4_mcs_1", 8);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("car_4_mcs_1") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
	}
}

void func_674()//Position - 0x84117
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	if (iLocal_308 == 0)
	{
		STREAMING::REQUEST_ANIM_DICT("missarmenian3_tryopendoor");
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1089.8732f, -432.2885f, 35.52869f, -1088.6738f, -431.65753f, 38.127274f, 1.7f, false, true, 0))
		{
			if (TASK::IS_PED_WALKING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(PLAYER::PLAYER_PED_ID(), true) };
				if (Var0.f_1 > 0f && (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 130f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 90f))
				{
					if (!__LIB_0__::func_77(0))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("missarmenian3_tryopendoor"))
						{
							if (!MISC::IS_AREA_OCCUPIED((-1088.9176f - 2f), (-431.84808f - 2f), (37.127144f - 1.5f), (-1088.9176f + 2f), (-431.84808f + 2f), (37.127144f + 1.5f), false, true, false, false, false, PLAYER::PLAYER_PED_ID(), false))
							{
								Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missarmenian3_tryopendoor", "lockeddoor_tryopen", -1090.1f, -431.85f, 35.62f, 0f, 0f, 120f, 0f, 2) };
								Var2 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missarmenian3_tryopendoor", "lockeddoor_tryopen", -1090.1f, -431.85f, 35.62f, 0f, 0f, 120f, 0f, 2) };
								TASK::OPEN_SEQUENCE_TASK(&iVar3);
								TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var1, 1f, -1, Var2.f_2, 0.5f);
								TASK::TASK_PLAY_ANIM_ADVANCED(0, "missarmenian3_tryopendoor", "lockeddoor_tryopen", -1090.1f, -431.85f, 35.62f, 0f, 0f, 120f, 1.5f, -1.5f, -1, 15872, 0f, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(iVar3);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar3);
								TASK::CLEAR_SEQUENCE_TASK(&iVar3);
								WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
								iLocal_308 = 1;
								iLocal_309 = 0;
							}
							else
							{
								STREAMING::REMOVE_ANIM_DICT("missarmenian3_tryopendoor");
								iLocal_308 = 1;
								iLocal_309 = 1;
							}
						}
					}
				}
			}
		}
		if (bLocal_319 == 1 || iLocal_306 == 1)
		{
			iLocal_308 = 1;
		}
	}
	else if (iLocal_309 == 0)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missarmenian3_tryopendoor", "lockeddoor_tryopen", 3))
		{
			if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID())) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				iLocal_309 = 1;
			}
		}
	}
	if (bLocal_319 == 1)
	{
		STREAMING::REMOVE_ANIM_DICT("missarmenian3_tryopendoor");
	}
}

void func_675(var uParam0)//Position - 0x8436B
{
	switch (*uParam0)
	{
		case 0:
			*uParam0++;
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_421[0 /*18*/]))
			{
				switch (iLocal_73)
				{
					case 0:
					case 2:
						break;
					case 3:
						break;
				}
				*uParam0++;
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_421[0 /*18*/]))
			{
				STREAMING::REQUEST_MODEL(iLocal_49);
				if (STREAMING::HAS_MODEL_LOADED(iLocal_49))
				{
					Local_421[0 /*18*/] = func_652(Local_421[0 /*18*/].f_2, Local_421[0 /*18*/].f_5, iLocal_49, joaat("SECURITY_GUARD"), 200, joaat("WEAPON_PISTOL"));
					__LIB_17__::func_205(&(Local_421[0 /*18*/]), 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_49);
				}
			}
			break;
		case 2:
			func_676(&(Local_421[0 /*18*/]), cLocal_71, PLAYER::PLAYER_PED_ID(), 750);
			break;
	}
}

void func_676(int* iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x84440
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			if (!PED::IS_PED_INJURED(iParam2))
			{
				iParam0->f_17 = __LIB_0__::func_76(*iParam0, iParam2, 1);
				func_478(*iParam0, iParam2, &(iParam0->f_13), &(iParam0->f_11), iParam3);
				switch (iParam0->f_15)
				{
					case 0:
						__LIB_17__::func_205(iParam0, 4);
						break;
					case 4:
						if (iParam0->f_14 == 0)
						{
							TASK::TASK_START_SCENARIO_IN_PLACE(*iParam0, "WORLD_HUMAN_GUARD_STAND", 0, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
							iParam0->f_7 = 0;
							iParam0->f_14 = 1;
						}
						if ((((((iLocal_306 == 1 || iLocal_315 == 1) || PED::IS_PED_IN_COMBAT(*iParam0, 0)) || func_651(*iParam0, iParam2)) || func_650(*iParam0, iParam2, iParam0->f_17, iParam0->f_13)) || func_648(*iParam0, iParam2, iParam0->f_17, iParam0->f_13)) || func_647(*iParam0, iParam2, iParam0->f_17, iParam0->f_13))
						{
							__LIB_17__::func_205(iParam0, 24);
						}
						if (iParam0->f_13 == 1)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam2, -1143.1808f, -428.37292f, 35.00102f, -1125.562f, -426.19128f, 40.545696f, 1f, false, true, 0))
							{
								__LIB_17__::func_205(iParam0, 24);
							}
						}
						if (iLocal_316 == 1)
						{
							__LIB_17__::func_205(iParam0, 23);
						}
						break;
					case 23:
						PED::SET_PED_RESET_FLAG(*iParam0, 128, true);
						if (iParam0->f_14 == 0)
						{
							PED::SET_PED_COMBAT_ABILITY(*iParam0, 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, false);
							PED::SET_PED_COMBAT_RANGE(*iParam0, 0);
							PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
							PED::SET_COMBAT_FLOAT(*iParam0, 5, 1f);
							PED::SET_COMBAT_FLOAT(*iParam0, 8, 1f);
							TASK::TASK_COMBAT_PED(*iParam0, iParam2, 0, 16);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
							iParam0->f_10 = MISC::GET_GAME_TIMER();
							iParam0->f_7 = 0;
							iParam0->f_14 = 1;
						}
						if ((((((iLocal_306 == 1 || iLocal_315 == 1) || __LIB_16__::func_299(5000, iParam0->f_10)) || func_651(*iParam0, iParam2)) || func_650(*iParam0, iParam2, iParam0->f_17, iParam0->f_13)) || func_648(*iParam0, iParam2, iParam0->f_17, iParam0->f_13)) || func_647(*iParam0, iParam2, iParam0->f_17, iParam0->f_13))
						{
							__LIB_17__::func_205(iParam0, 24);
						}
						if (iParam0->f_13 == 1)
						{
							if ((MISC::GET_GAME_TIMER() - iParam0->f_7) > 0)
							{
								if (iParam0->f_17 < 30f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
									{
										TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam2, 1000, 3074, 4);
										__LIB_0__::func_709(*iParam0, "FREEZE", sParam1, 10);
										iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000));
									}
								}
							}
						}
						break;
					case 24:
						if (iParam0->f_14 == 0)
						{
							PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, false);
							PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 42, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 50, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 21, true);
							PED::SET_COMBAT_FLOAT(*iParam0, 5, 1f);
							PED::SET_COMBAT_FLOAT(*iParam0, 8, 0f);
							if (iParam0->f_17 < 25f)
							{
								__LIB_0__::func_709(*iParam0, "FREEZE", sParam1, 10);
								TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam2, 1000, 3074, 4);
							}
							TASK::TASK_COMBAT_PED(*iParam0, iParam2, 0, 16);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
							iLocal_306 = 1;
							iParam0->f_14 = 1;
						}
						break;
					}
				}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			iParam0->f_15 = 1;
			if (iParam0->f_16 == 0)
			{
				iParam0->f_16 = func_452(iParam0);
				func_451(iParam0->f_16, &iLocal_369, &iLocal_370, &iLocal_371);
			}
		}
	}
}

void func_677(var uParam0)//Position - 0x847D9
{
	int iVar0;
	int iVar1;
	switch (*uParam0)
	{
		case 0:
			if (iLocal_307 == 1)
			{
				STREAMING::REQUEST_MODEL(iLocal_49);
				if (STREAMING::HAS_MODEL_LOADED(iLocal_49))
				{
					*uParam0++;
				}
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < Local_420.f_0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_420[iVar0 /*18*/]))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_49))
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_428.f_0);
						if ((!CAM::IS_SPHERE_VISIBLE(Local_428[iVar1 /*4*/], 2f) && !iLocal_427[iVar1]) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_428[iVar1 /*4*/], true) > 10f)
						{
							iLocal_427[iVar1] = 1;
							Local_420[iVar0 /*18*/] = func_652(Local_428[iVar1 /*4*/], Local_428[iVar1 /*4*/].f_3, iLocal_49, joaat("SECURITY_GUARD"), 200, joaat("WEAPON_PISTOL"));
							__LIB_17__::func_205(&(Local_420[iVar0 /*18*/]), 0);
						}
					}
				}
				iVar0++;
			}
			if ((ENTITY::DOES_ENTITY_EXIST(Local_420[0 /*18*/]) && ENTITY::DOES_ENTITY_EXIST(Local_420[1 /*18*/])) && ENTITY::DOES_ENTITY_EXIST(Local_420[2 /*18*/]))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_49);
				*uParam0++;
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < Local_420.f_0)
			{
				func_678(&(Local_420[iVar0 /*18*/]), PLAYER::PLAYER_PED_ID());
				iVar0++;
			}
			break;
	}
}

void func_678(int* iParam0, int iParam1)//Position - 0x84934
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			if (!PED::IS_PED_INJURED(iParam1))
			{
				switch (iParam0->f_15)
				{
					case 0:
						__LIB_17__::func_205(iParam0, 22);
						break;
					case 22:
						if (iParam0->f_14 == 0)
						{
							PED::SET_PED_COMBAT_RANGE(*iParam0, 0);
							PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
							PED::SET_PED_COMBAT_ABILITY(*iParam0, 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 50, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 42, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 13, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 28, true);
							PED::SET_COMBAT_FLOAT(*iParam0, 5, 1f);
							PED::SET_COMBAT_FLOAT(*iParam0, 8, 0f);
							TASK::TASK_COMBAT_PED(*iParam0, iParam1, 67108864, 16);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
							iParam0->f_10 = MISC::GET_GAME_TIMER();
							iParam0->f_14 = 1;
						}
						PED::SET_PED_RESET_FLAG(*iParam0, 128, true);
						if (iParam0->f_14 == 1)
						{
							if (__LIB_16__::func_299(5000, iParam0->f_10))
							{
								__LIB_17__::func_205(iParam0, 24);
							}
						}
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, iParam1, true))
						{
							__LIB_17__::func_205(iParam0, 24);
						}
						break;
					case 24:
						if (iParam0->f_14 == 0)
						{
							PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, false);
							PED::SET_PED_COMBAT_RANGE(*iParam0, 0);
							PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
							PED::SET_PED_COMBAT_ABILITY(*iParam0, 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 50, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 42, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 13, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 28, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 43, true);
							PED::SET_COMBAT_FLOAT(*iParam0, 5, 1f);
							PED::SET_COMBAT_FLOAT(*iParam0, 8, 0.2f);
							TASK::TASK_COMBAT_PED(*iParam0, iParam1, 67108864, 16);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
							iLocal_306 = 1;
							iParam0->f_14 = 1;
						}
						break;
					}
				}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			iParam0->f_15 = 1;
			if (iParam0->f_16 == 0)
			{
				iParam0->f_16 = func_452(iParam0);
				func_451(iParam0->f_16, &iLocal_369, &iLocal_370, &iLocal_371);
			}
		}
	}
}

void func_679(int* iParam0, int iParam1)//Position - 0x84B2E
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iParam0->f_17 = __LIB_0__::func_76(*iParam0, iParam1, 1);
		func_478(*iParam0, iParam1, &(iParam0->f_13), &(iParam0->f_11), 500);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			if (!PED::IS_PED_INJURED(iParam1))
			{
				if (iParam0->f_15 != 19)
				{
					if (iLocal_306 == 1 || PED::IS_PED_FLEEING(*iParam0))
					{
						__LIB_17__::func_205(iParam0, 19);
					}
				}
				switch (iParam0->f_15)
				{
					case 0:
						if (iParam0->f_14 == 0)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "assistant_loop", 3))
							{
								STREAMING::REQUEST_ANIM_DICT("misscarsteal4@actor");
								if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4@actor"))
								{
									__LIB_15__::func_995(*iParam0, 20f, 5f, 90f, -1028390912, 1119092736);
									PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, false);
									TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@actor", "assistant_loop", 4f, -4f, -1, 1, 0f, false, false, false);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
								}
							}
							else
							{
								iParam0->f_14 = 1;
							}
						}
						if (iLocal_311 == 0)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iParam1, -1132.33f, -490.46f, 41.16f, 8f, 8f, 8f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1118.82f, -504.05f, 22.36f, -1207.15f, -576.01f, 44.2f, 30f, false, true, 0))
							{
								__LIB_17__::func_202(*iParam0, -1109.1906f, -503.3141f, 34.26f, 120.0023f, 0, 0, 0);
								iLocal_311 = 1;
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_76.f_0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_76.f_0, false))
							{
								if (Local_76.f_15 == 2)
								{
									__LIB_17__::func_205(iParam0, 2);
								}
							}
						}
						if ((iLocal_314 == 1 || func_480(*iParam0, iParam1)) || func_650(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
						{
							iLocal_307 = 1;
							iLocal_314 = 1;
							__LIB_17__::func_205(iParam0, 19);
						}
						if (iParam0->f_13 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_76.f_0))
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_76.f_0, false))
								{
									iLocal_307 = 1;
									iLocal_314 = 1;
									__LIB_17__::func_205(iParam0, 19);
								}
								else if ((((((PED::IS_PED_BEING_STUNNED(Local_76.f_0, 0) || PED::IS_PED_DEAD_OR_DYING(Local_76.f_0, true)) || PED::IS_PED_BEING_STEALTH_KILLED(Local_76.f_0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_76.f_0, iParam1, true)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_76.f_0, iParam1)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_76.f_0)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_76.f_0))
								{
									iLocal_307 = 1;
									iLocal_314 = 1;
									__LIB_17__::func_205(iParam0, 19);
								}
							}
						}
						break;
					case 2:
						if (iParam0->f_14 == 0)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "assistant_berated", 3))
							{
								TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@actor", "assistant_berated", 4f, -1.5f, -1, 2, 0f, false, false, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
							}
							else
							{
								iParam0->f_14 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "assistant_berated", 3))
						{
							ENTITY::SET_ENTITY_ANIM_SPEED(*iParam0, "misscarsteal4@actor", "assistant_berated", 1.125f);
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@actor", "assistant_berated") > 0.995f)
							{
								__LIB_17__::func_205(iParam0, 3);
							}
						}
						if (((iLocal_314 == 1 || func_480(*iParam0, iParam1)) || func_650(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_680(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
						{
							iLocal_307 = 1;
							iLocal_314 = 1;
							__LIB_17__::func_205(iParam0, 19);
						}
						if (iParam0->f_13 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_76.f_0))
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_76.f_0, false))
								{
									iLocal_307 = 1;
									iLocal_314 = 1;
									__LIB_17__::func_205(iParam0, 19);
								}
								else if ((((((PED::IS_PED_BEING_STUNNED(Local_76.f_0, 0) || PED::IS_PED_DEAD_OR_DYING(Local_76.f_0, true)) || PED::IS_PED_BEING_STEALTH_KILLED(Local_76.f_0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_76.f_0, iParam1, true)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_76.f_0, iParam1)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_76.f_0)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_76.f_0))
								{
									iLocal_307 = 1;
									iLocal_314 = 1;
									__LIB_17__::func_205(iParam0, 19);
								}
							}
						}
						break;
					case 3:
						if (iParam0->f_14 == 0)
						{
							TASK::CLEAR_PED_TASKS(*iParam0);
							PED::FORCE_PED_MOTION_STATE(*iParam0, joaat("MotionState_Run"), false, 0, false);
							if (iLocal_311 == 1)
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, -1075.86f, -468.95f, 35.64f, 2f, -1, 0.25f, 0, 309.4294f);
							}
							else
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, -1155.5319f, -521.8391f, 31.583f, 2f, -1, 0.25f, 0, 74.1956f);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
							iParam0->f_14 = 1;
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 7)
						{
							__LIB_17__::func_205(iParam0, 4);
						}
						if (func_480(*iParam0, iParam1) || func_650(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
						{
							iLocal_306 = 1;
							__LIB_17__::func_205(iParam0, 19);
						}
						if (iParam0->f_13 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_76.f_0))
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_76.f_0, false))
								{
									iLocal_306 = 1;
									__LIB_17__::func_205(iParam0, 19);
								}
								else if ((((((PED::IS_PED_BEING_STUNNED(Local_76.f_0, 0) || PED::IS_PED_DEAD_OR_DYING(Local_76.f_0, true)) || PED::IS_PED_BEING_STEALTH_KILLED(Local_76.f_0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_76.f_0, iParam1, true)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_76.f_0, iParam1)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_76.f_0)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_76.f_0))
								{
									iLocal_306 = 1;
									__LIB_17__::func_205(iParam0, 19);
								}
							}
						}
						break;
					case 4:
						if (iParam0->f_14 == 0)
						{
							TASK::TASK_START_SCENARIO_IN_PLACE(*iParam0, "WORLD_HUMAN_STAND_IMPATIENT", 0, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
							iParam0->f_14 = 1;
						}
						if ((iLocal_73 == 0 && WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar0, true)) && iVar0 == joaat("WEAPON_STUNGUN"))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
						}
						else
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
						}
						if (func_480(*iParam0, iParam1) || func_650(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
						{
							iLocal_306 = 1;
							__LIB_17__::func_205(iParam0, 19);
						}
						break;
					case 19:
						if (iParam0->f_14 == 0)
						{
							TASK::CLEAR_PED_TASKS(*iParam0);
							__LIB_0__::func_709(*iParam0, "SCREAM_PANIC", "WAVELOAD_PAIN_FEMALE", 10);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, true);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 4, true);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, true);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 128, true);
							TASK::TASK_SMART_FLEE_PED(*iParam0, iParam1, 300f, -1, false, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
							PED::SET_PED_KEEP_TASK(*iParam0, true);
							iParam0->f_7 = MISC::GET_GAME_TIMER();
							iParam0->f_14 = 1;
						}
						if (iParam0->f_14 == 1)
						{
							if (__LIB_16__::func_299(3000, iParam0->f_7))
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
								{
									__LIB_0__::func_709(*iParam0, "GENERIC_FRIGHTENED_HIGH", "A_F_Y_VINEWOOD_01_WHITE_FULL_01", 10);
									iParam0->f_7 = MISC::GET_GAME_TIMER();
								}
							}
						}
						break;
					}
				}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0, false) || iParam0->f_15 == 19)
		{
			if (ENTITY::IS_ENTITY_DEAD(*iParam0, false))
			{
				if (iParam0->f_16 == 0)
				{
					iParam0->f_16 = func_452(iParam0);
					func_451(iParam0->f_16, &iLocal_369, &iLocal_370, &iLocal_371);
				}
			}
			if (iParam0->f_17 > 200f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
			}
		}
	}
}

int func_680(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x8525D
{
	if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_INJURED(iParam1))
	{
		if (fParam2 < 10f && iParam3 == 1)
		{
			if (PED::GET_PED_STEALTH_MOVEMENT(iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_681(int* iParam0, int iParam1)//Position - 0x8529D
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iParam0->f_17 = __LIB_0__::func_76(*iParam0, iParam1, 1);
		func_478(*iParam0, iParam1, &(iParam0->f_13), &(iParam0->f_11), 750);
		func_684(iParam0, iParam1);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			if (!PED::IS_PED_INJURED(iParam1))
			{
				PED::SET_PED_RESET_FLAG(*iParam0, 126, true);
				PED::SET_PED_RESET_FLAG(*iParam0, 188, true);
				PED::SET_PED_RESET_FLAG(iParam1, 155, true);
				if (iParam0->f_15 != 19)
				{
					if ((iLocal_306 == 1 && iParam0->f_15 != 24) || PED::IS_PED_FLEEING(*iParam0))
					{
						__LIB_17__::func_205(iParam0, 19);
					}
				}
				switch (iParam0->f_15)
				{
					case 0:
						if (iParam0->f_14 == 0)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "actor_berating_loop", 3))
							{
								STREAMING::REQUEST_ANIM_DICT("misscarsteal4@actor");
								if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4@actor"))
								{
									TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@actor", "actor_berating_loop", 4f, -4f, -1, 1, 0f, false, false, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
								}
							}
							else
							{
								__LIB_25__::func_481(&iLocal_394, PED::GET_PED_BONE_COORDS(*iParam0, 31086, 0f, 0f, 0f), 0.5f);
								__LIB_15__::func_995(*iParam0, 25f, 5f, 90f, -45f, 45f);
								ENTITY::SET_ENTITY_HEALTH(*iParam0, 150, 0);
								PED::SET_PED_CONFIG_FLAG(*iParam0, 188, true);
								PED::SET_PED_CONFIG_FLAG(*iParam0, 279, true);
								PED::SET_PED_CONFIG_FLAG(*iParam0, 171, true);
								PED::SET_PED_CONFIG_FLAG(*iParam0, 281, true);
								iParam0->f_14 = 1;
							}
						}
						if (iLocal_310 == 0)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iParam1, -1132.33f, -490.46f, 41.16f, 8f, 8f, 8f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1118.82f, -504.05f, 22.36f, -1207.15f, -576.01f, 44.2f, 30f, false, true, 0))
							{
								__LIB_17__::func_202(*iParam0, -1109.36f, -503.38f, 34.26f, 292.4256f, 0, 0, 0);
								iLocal_310 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1141.9082f, -523.1511f, 27.854542f, -1069.741f, -490.76538f, 49.649647f, 46f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(iParam1, -1132.34f, -490.47f, 41.16f, 8f, 8f, 8f, false, true, 0))
						{
							AUDIO::START_AUDIO_SCENE("CAR_3_TAKE_OUT_ACTOR");
							__LIB_17__::func_205(iParam0, 2);
						}
						break;
					case 2:
						if (iParam0->f_14 == 0)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "actor_berating_assistant", 3))
							{
								if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4@actor"))
								{
									if (!PED::IS_PED_INJURED(Local_94.f_0))
									{
										TASK::TASK_LOOK_AT_ENTITY(*iParam0, Local_94.f_0, 15000, 2048, 2);
									}
									TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@actor", "actor_berating_assistant", 4f, -4f, -1, 0, 0f, false, false, false);
								}
								else
								{
									STREAMING::REQUEST_ANIM_DICT("misscarsteal4@actor");
								}
							}
							else
							{
								iParam0->f_14 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "actor_berating_assistant", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@actor", "actor_berating_assistant") > 0.995f)
							{
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
								{
									case 0:
										__LIB_17__::func_205(iParam0, 5);
										break;
									case 1:
										__LIB_17__::func_205(iParam0, 6);
										break;
									case 2:
										__LIB_17__::func_205(iParam0, 7);
										break;
									case 3:
										__LIB_17__::func_205(iParam0, 8);
										break;
									}
								}
						}
						if ((((iLocal_314 == 1 || func_454(*iParam0, iParam1)) || func_650(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_680(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_648(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
						{
							__LIB_17__::func_205(iParam0, 19);
						}
						if (func_683(*iParam0, iParam1, iParam0->f_17))
						{
							__LIB_17__::func_205(iParam0, 19);
						}
						if (func_682(*iParam0, iParam1, iParam0->f_17))
						{
							if (iParam0->f_13 == 0)
							{
								__LIB_17__::func_205(iParam0, 24);
							}
						}
						if (iParam0->f_13 == 1)
						{
							if (iParam0->f_17 < 6.25f)
							{
								__LIB_17__::func_205(iParam0, 21);
							}
						}
						break;
					case 5:
					case 6:
					case 7:
					case 8:
						if (iParam0->f_14 == 0)
						{
							switch (iParam0->f_15)
							{
								case 5:
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_1", 3))
									{
										TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_1", 4f, -4f, -1, 2, 0f, false, false, false);
									}
									else
									{
										iParam0->f_14 = 1;
									}
									break;
								case 6:
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_2", 3))
									{
										TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_2", 4f, -4f, -1, 2, 0f, false, false, false);
									}
									else
									{
										iParam0->f_14 = 1;
									}
									break;
								case 7:
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_3", 3))
									{
										TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_3", 4f, -4f, -1, 2, 0f, false, false, false);
									}
									else
									{
										iParam0->f_14 = 1;
									}
									break;
								case 8:
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_4", 3))
									{
										TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_4", 4f, -4f, -1, 2, 0f, false, false, false);
									}
									else
									{
										iParam0->f_14 = 1;
									}
									break;
								}
						}
						if (iParam0->f_14 == 1)
						{
							switch (iParam0->f_15)
							{
								case 5:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_1", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_1") >= 0.988f)
									{
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
										{
											case 0:
												__LIB_17__::func_205(iParam0, 6);
												break;
											case 1:
												__LIB_17__::func_205(iParam0, 7);
												break;
											case 2:
												__LIB_17__::func_205(iParam0, 8);
												break;
											}
									}
									break;
								case 6:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_2", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_2") >= 0.988f)
									{
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
										{
											case 0:
												__LIB_17__::func_205(iParam0, 5);
												break;
											case 1:
												__LIB_17__::func_205(iParam0, 7);
												break;
											case 2:
												__LIB_17__::func_205(iParam0, 8);
												break;
											}
									}
									break;
								case 7:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_3", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_3") >= 0.988f)
									{
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
										{
											case 0:
												__LIB_17__::func_205(iParam0, 5);
												break;
											case 1:
												__LIB_17__::func_205(iParam0, 6);
												break;
											case 2:
												__LIB_17__::func_205(iParam0, 8);
												break;
											}
									}
									break;
								case 8:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_4", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_4") >= 0.988f)
									{
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
										{
											case 0:
												__LIB_17__::func_205(iParam0, 5);
												break;
											case 1:
												__LIB_17__::func_205(iParam0, 6);
												break;
											case 2:
												__LIB_17__::func_205(iParam0, 7);
												break;
											}
									}
									break;
								}
						}
						if ((((iLocal_314 == 1 || func_454(*iParam0, iParam1)) || func_650(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_680(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_648(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
						{
							__LIB_17__::func_205(iParam0, 19);
						}
						if (func_683(*iParam0, iParam1, iParam0->f_17))
						{
							__LIB_17__::func_205(iParam0, 19);
						}
						if (func_682(*iParam0, iParam1, iParam0->f_17))
						{
							if (iParam0->f_13 == 0)
							{
								__LIB_17__::func_205(iParam0, 24);
							}
						}
						if (iParam0->f_13 == 1)
						{
							if (iParam0->f_17 < 6.25f)
							{
								__LIB_17__::func_205(iParam0, 21);
							}
						}
						break;
					case 21:
						if (iParam0->f_14 == 0)
						{
							TASK::CLEAR_PED_TASKS(*iParam0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam1, 0);
							TASK::TASK_LOOK_AT_ENTITY(0, iParam1, 3000, 2, 2);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							iParam0->f_10 = MISC::GET_GAME_TIMER();
							iParam0->f_14 = 1;
						}
						if (func_456("CST4_MSSPO"))
						{
							if (__LIB_16__::func_299(3500, iParam0->f_10))
							{
								__LIB_17__::func_205(iParam0, 24);
							}
						}
						if (((func_454(*iParam0, iParam1) || func_650(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_680(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_648(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
						{
							__LIB_17__::func_205(iParam0, 19);
						}
						break;
					case 19:
						if (iParam0->f_14 == 0)
						{
							if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
							{
								HUD::REMOVE_BLIP(&(iParam0->f_1));
							}
							func_660(3);
							PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 3);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, false);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 4, true);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, true);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 128, true);
							if (!PED::IS_PED_FLEEING(*iParam0))
							{
								TASK::CLEAR_PED_TASKS(*iParam0);
								TASK::TASK_SMART_FLEE_PED(*iParam0, iParam1, 300f, -1, false, false);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
							PED::SET_PED_KEEP_TASK(*iParam0, true);
							iLocal_314 = 0;
							iParam0->f_7 = 0;
							iParam0->f_14 = 1;
						}
						break;
					case 24:
						if (iParam0->f_14 == 0)
						{
							if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
							{
								HUD::REMOVE_BLIP(&(iParam0->f_1));
							}
							PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, true);
							PED::SET_COMBAT_FLOAT(*iParam0, 7, 1f);
							TASK::TASK_COMBAT_PED(*iParam0, iParam1, 67108864, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
							PED::SET_PED_KEEP_TASK(*iParam0, true);
							iLocal_314 = 1;
							iParam0->f_7 = 0;
							iParam0->f_14 = 1;
						}
						break;
					}
				}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0, false) || iParam0->f_15 == 19)
		{
			if (ENTITY::IS_ENTITY_DEAD(*iParam0, false))
			{
				if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_1));
				}
				if (iParam0->f_16 == 0)
				{
					iParam0->f_16 = func_452(iParam0);
					iLocal_399 = PED::GET_PED_CAUSE_OF_DEATH(*iParam0);
					func_451(iParam0->f_16, &iLocal_369, &iLocal_370, &iLocal_371);
				}
			}
			if (iParam0->f_17 > 200f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
				STREAMING::REMOVE_ANIM_DICT("misscarsteal4@actor");
			}
		}
	}
}

int func_682(int iParam0, int iParam1, float fParam2)//Position - 0x85D0F
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (!PED::IS_PED_INJURED(iParam1))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
					{
						if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iParam0))
						{
							if (TASK::IS_PED_RUNNING(iParam1) || TASK::IS_PED_SPRINTING(iParam1))
							{
								if (fParam2 <= 5f)
								{
									return 1;
								}
							}
							if (TASK::IS_PED_WALKING(iParam1))
							{
								if (fParam2 <= 3f)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_683(int iParam0, int iParam1, float fParam2)//Position - 0x85D8D
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (!PED::IS_PED_INJURED(iParam1))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
					{
						if (fParam2 < 20f)
						{
							if ((AUDIO::IS_HORN_ACTIVE(PED::GET_VEHICLE_PED_IS_USING(iParam1)) || VEHICLE::IS_VEHICLE_SIREN_ON(PED::GET_VEHICLE_PED_IS_USING(iParam1))) || VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(PED::GET_VEHICLE_PED_IS_USING(iParam1)))
							{
								return 1;
							}
							if (VEHICLE::IS_VEHICLE_IN_BURNOUT(PED::GET_VEHICLE_PED_IS_USING(iParam1)))
							{
								return 1;
							}
						}
						if (fParam2 < 15f)
						{
							if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_USING(iParam1)) && ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_USING(iParam1)) > 5f)
							{
								return 1;
							}
							if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iParam0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_684(var uParam0, int iParam1)//Position - 0x85E54
{
	struct<6> Var0;
	struct<6> Var1;
	struct<6> Var2;
	struct<6> Var3;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
		{
			switch (uParam0->f_15)
			{
				case 2:
				case 5:
				case 6:
				case 7:
				case 8:
					if (!func_456("CST4_MSARG"))
					{
						if (!__LIB_0__::func_75())
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misscarsteal4@actor", "actor_berating_assistant", 3))
							{
								if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_MSARG", 7, 0, 0, 0))
								{
									func_489("CST4_MSARG", 1);
									func_489("CST4_MSVOC1", 0);
									func_489("CST4_MSVOC2", 0);
									func_489("CST4_MSVOC3", 0);
									func_489("CST4_MSVOC4", 0);
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 15f, 4);
								}
							}
						}
					}
					if (!func_456("CST4_MSVOC1_1"))
					{
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_1", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_1") >= 0.1f) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_1") <= 0.375f)
						{
							if (uParam0->f_17 < 35f)
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_118, 1))
									{
										if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_MSVOC1", "CST4_MSVOC1_1", 7, 0, 0))
										{
											func_489("CST4_MSVOC1_1", 1);
											func_489("CST4_MSVOC1_2", 0);
											func_489("CST4_MSVOC2_1", 0);
											func_489("CST4_MSVOC2_2", 0);
											func_489("CST4_MSVOC3_1", 0);
											func_489("CST4_MSVOC3_2", 0);
											func_489("CST4_MSVOC4_1", 0);
											func_489("CST4_MSVOC4_2", 0);
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 3);
										}
									}
								}
							}
							else
							{
								func_489("CST4_MSVOC1_1", 1);
								func_489("CST4_MSVOC1_2", 0);
								func_489("CST4_MSVOC2_1", 0);
								func_489("CST4_MSVOC2_2", 0);
								func_489("CST4_MSVOC3_1", 0);
								func_489("CST4_MSVOC3_2", 0);
								func_489("CST4_MSVOC4_1", 0);
								func_489("CST4_MSVOC4_2", 0);
							}
						}
					}
					if (!func_456("CST4_MSVOC1_2"))
					{
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_1", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_1") >= 0.43f) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_1") <= 0.88f)
						{
							if (uParam0->f_17 < 35f)
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_118, 1))
									{
										if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_MSVOC1", "CST4_MSVOC1_2", 7, 0, 0))
										{
											func_489("CST4_MSVOC1_1", 1);
											func_489("CST4_MSVOC1_2", 1);
											func_489("CST4_MSVOC2_1", 0);
											func_489("CST4_MSVOC2_2", 0);
											func_489("CST4_MSVOC3_1", 0);
											func_489("CST4_MSVOC3_2", 0);
											func_489("CST4_MSVOC4_1", 0);
											func_489("CST4_MSVOC4_2", 0);
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 3);
										}
									}
								}
							}
							else
							{
								func_489("CST4_MSVOC1_1", 1);
								func_489("CST4_MSVOC1_2", 1);
								func_489("CST4_MSVOC2_1", 0);
								func_489("CST4_MSVOC2_2", 0);
								func_489("CST4_MSVOC3_1", 0);
								func_489("CST4_MSVOC3_2", 0);
								func_489("CST4_MSVOC4_1", 0);
								func_489("CST4_MSVOC4_2", 0);
							}
						}
					}
					if (!func_456("CST4_MSVOC2_1"))
					{
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_2", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_2") >= 0.105f) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_2") <= 0.375f)
						{
							if (uParam0->f_17 < 35f)
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_118, 1))
									{
										if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_MSVOC2", "CST4_MSVOC2_1", 7, 0, 0))
										{
											func_489("CST4_MSVOC1_1", 0);
											func_489("CST4_MSVOC1_2", 0);
											func_489("CST4_MSVOC2_1", 1);
											func_489("CST4_MSVOC2_2", 0);
											func_489("CST4_MSVOC3_1", 0);
											func_489("CST4_MSVOC3_2", 0);
											func_489("CST4_MSVOC4_1", 0);
											func_489("CST4_MSVOC4_2", 0);
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 3);
										}
									}
								}
							}
							else
							{
								func_489("CST4_MSVOC1_1", 0);
								func_489("CST4_MSVOC1_2", 0);
								func_489("CST4_MSVOC2_1", 1);
								func_489("CST4_MSVOC2_2", 0);
								func_489("CST4_MSVOC3_1", 0);
								func_489("CST4_MSVOC3_2", 0);
								func_489("CST4_MSVOC4_1", 0);
								func_489("CST4_MSVOC4_2", 0);
							}
						}
					}
					if (!func_456("CST4_MSVOC2_2"))
					{
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_2", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_2") >= 0.39f) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_2") <= 0.84f)
						{
							if (uParam0->f_17 < 35f)
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_118, 1))
									{
										if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_MSVOC2", "CST4_MSVOC2_2", 7, 0, 0))
										{
											func_489("CST4_MSVOC1_1", 0);
											func_489("CST4_MSVOC1_2", 0);
											func_489("CST4_MSVOC2_1", 1);
											func_489("CST4_MSVOC2_2", 1);
											func_489("CST4_MSVOC3_1", 0);
											func_489("CST4_MSVOC3_2", 0);
											func_489("CST4_MSVOC4_1", 0);
											func_489("CST4_MSVOC4_2", 0);
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 3);
										}
									}
								}
							}
							else
							{
								func_489("CST4_MSVOC1_1", 0);
								func_489("CST4_MSVOC1_2", 0);
								func_489("CST4_MSVOC2_1", 1);
								func_489("CST4_MSVOC2_2", 1);
								func_489("CST4_MSVOC3_1", 0);
								func_489("CST4_MSVOC3_2", 0);
								func_489("CST4_MSVOC4_1", 0);
								func_489("CST4_MSVOC4_2", 0);
							}
						}
					}
					if (!func_456("CST4_MSVOC3_1"))
					{
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_3", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_3") >= 0.1f) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_3") <= 0.362f)
						{
							if (uParam0->f_17 < 35f)
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_118, 1))
									{
										if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_MSVOC3", "CST4_MSVOC3_1", 7, 0, 0))
										{
											func_489("CST4_MSVOC1_1", 0);
											func_489("CST4_MSVOC1_2", 0);
											func_489("CST4_MSVOC2_1", 0);
											func_489("CST4_MSVOC2_2", 0);
											func_489("CST4_MSVOC3_1", 1);
											func_489("CST4_MSVOC3_2", 0);
											func_489("CST4_MSVOC4_1", 0);
											func_489("CST4_MSVOC4_2", 0);
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 3);
										}
									}
								}
							}
							else
							{
								func_489("CST4_MSVOC1_1", 0);
								func_489("CST4_MSVOC1_2", 0);
								func_489("CST4_MSVOC2_1", 0);
								func_489("CST4_MSVOC2_2", 0);
								func_489("CST4_MSVOC3_1", 1);
								func_489("CST4_MSVOC3_2", 0);
								func_489("CST4_MSVOC4_1", 0);
								func_489("CST4_MSVOC4_2", 0);
							}
						}
					}
					if (!func_456("CST4_MSVOC3_2"))
					{
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_3", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_3") >= 0.452f) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_3") <= 0.9f)
						{
							if (uParam0->f_17 < 35f)
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_118, 1))
									{
										if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_MSVOC3", "CST4_MSVOC3_2", 7, 0, 0))
										{
											func_489("CST4_MSVOC1_1", 0);
											func_489("CST4_MSVOC1_2", 0);
											func_489("CST4_MSVOC2_1", 0);
											func_489("CST4_MSVOC2_2", 0);
											func_489("CST4_MSVOC3_1", 1);
											func_489("CST4_MSVOC3_2", 1);
											func_489("CST4_MSVOC4_1", 0);
											func_489("CST4_MSVOC4_2", 0);
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 3);
										}
									}
								}
							}
							else
							{
								func_489("CST4_MSVOC1_1", 0);
								func_489("CST4_MSVOC1_2", 0);
								func_489("CST4_MSVOC2_1", 0);
								func_489("CST4_MSVOC2_2", 0);
								func_489("CST4_MSVOC3_1", 1);
								func_489("CST4_MSVOC3_2", 1);
								func_489("CST4_MSVOC4_1", 0);
								func_489("CST4_MSVOC4_2", 0);
							}
						}
					}
					if (!func_456("CST4_MSVOC4_1"))
					{
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_4", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_4") >= 0.1f) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_4") <= 0.365f)
						{
							if (uParam0->f_17 < 35f)
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_118, 1))
									{
										if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_MSVOC4", "CST4_MSVOC4_1", 7, 0, 0))
										{
											func_489("CST4_MSVOC1_1", 0);
											func_489("CST4_MSVOC1_2", 0);
											func_489("CST4_MSVOC2_1", 0);
											func_489("CST4_MSVOC2_2", 0);
											func_489("CST4_MSVOC3_1", 0);
											func_489("CST4_MSVOC3_2", 0);
											func_489("CST4_MSVOC4_1", 1);
											func_489("CST4_MSVOC4_2", 0);
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 3);
										}
									}
								}
							}
							else
							{
								func_489("CST4_MSVOC1_1", 0);
								func_489("CST4_MSVOC1_2", 0);
								func_489("CST4_MSVOC2_1", 0);
								func_489("CST4_MSVOC2_2", 0);
								func_489("CST4_MSVOC3_1", 0);
								func_489("CST4_MSVOC3_2", 0);
								func_489("CST4_MSVOC4_1", 1);
								func_489("CST4_MSVOC4_2", 0);
							}
						}
					}
					if (!func_456("CST4_MSVOC4_2"))
					{
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_4", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_4") >= 0.46f) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_4") <= 0.828f)
						{
							if (uParam0->f_17 < 35f)
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_118, 1))
									{
										if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_MSVOC4", "CST4_MSVOC4_2", 7, 0, 0))
										{
											func_489("CST4_MSVOC1_1", 0);
											func_489("CST4_MSVOC1_2", 0);
											func_489("CST4_MSVOC2_1", 0);
											func_489("CST4_MSVOC2_2", 0);
											func_489("CST4_MSVOC3_1", 0);
											func_489("CST4_MSVOC3_2", 0);
											func_489("CST4_MSVOC4_1", 1);
											func_489("CST4_MSVOC4_2", 1);
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 3);
										}
									}
								}
							}
							else
							{
								func_489("CST4_MSVOC1_1", 0);
								func_489("CST4_MSVOC1_2", 0);
								func_489("CST4_MSVOC2_1", 0);
								func_489("CST4_MSVOC2_2", 0);
								func_489("CST4_MSVOC3_1", 0);
								func_489("CST4_MSVOC3_2", 0);
								func_489("CST4_MSVOC4_1", 1);
								func_489("CST4_MSVOC4_2", 1);
							}
						}
					}
					if (((PED::IS_PED_FLEEING(*uParam0) || PED::IS_PED_IN_COMBAT(*uParam0, 0)) || PED::IS_PED_RESPONDING_TO_EVENT(*uParam0, 125)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, iParam1, true))
					{
						if (__LIB_0__::func_75())
						{
							if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
							{
								__LIB_0__::func_429();
							}
						}
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0))
						{
							__LIB_0__::func_709(*uParam0, "SCREAM_PANIC", "WAVELOAD_PAIN_MALE", 3);
						}
					}
					break;
				case 21:
					if (__LIB_0__::func_75())
					{
						if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
						{
							Var0 = { __LIB_0__::func_486() };
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
							{
								if ((!MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_MSSEC") && !MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_MSSPO")) && !MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_MSFIG"))
								{
									__LIB_0__::func_429();
								}
							}
						}
					}
					if (!func_456("CST4_MSSPO"))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_MSSPO", 7, 0, 0, 0))
							{
								func_489("CST4_MSSPO", 1);
								uParam0->f_10 = MISC::GET_GAME_TIMER();
							}
						}
					}
					break;
				case 24:
					if (__LIB_0__::func_75())
					{
						if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
						{
							Var1 = { __LIB_0__::func_486() };
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
							{
								if ((!MISC::ARE_STRINGS_EQUAL(&Var1, "CST4_MSSEC") && !MISC::ARE_STRINGS_EQUAL(&Var1, "CST4_MSSPO")) && !MISC::ARE_STRINGS_EQUAL(&Var1, "CST4_MSFIG"))
								{
									__LIB_0__::func_429();
								}
							}
						}
					}
					if (!func_456("CST4_MSFIG"))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_MSFIG", 7, 0, 0, 0))
							{
								func_489("CST4_MSFIG", 1);
								uParam0->f_7 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (!__LIB_0__::func_75())
					{
						if (PED::IS_PED_IN_COMBAT(*uParam0, 0))
						{
							if (uParam0->f_17 < 30f)
							{
								if (__LIB_16__::func_299(5000, uParam0->f_7))
								{
									if (!__LIB_13__::func_755(&Local_118, 1))
									{
										if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_MSSEC", 7, 0, 0, 0))
										{
											uParam0->f_7 = MISC::GET_GAME_TIMER();
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0))
									{
										__LIB_0__::func_709(*uParam0, "CST4_AYAA", "CST4ACTOR", 3);
										iLocal_307 = 1;
										uParam0->f_7 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					else if (__LIB_0__::func_75())
					{
						if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
						{
							Var2 = { __LIB_0__::func_486() };
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
							{
								if (MISC::ARE_STRINGS_EQUAL(&Var2, "CST4_MSSEC"))
								{
									iLocal_307 = 1;
								}
							}
						}
					}
					break;
				case 19:
					if (__LIB_0__::func_75())
					{
						if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
						{
							Var3 = { __LIB_0__::func_486() };
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var3))
							{
								if ((!MISC::ARE_STRINGS_EQUAL(&Var3, "CST4_MSSEC") && !MISC::ARE_STRINGS_EQUAL(&Var3, "CST4_MSSPO")) && !MISC::ARE_STRINGS_EQUAL(&Var3, "CST4_MSFIG"))
								{
									__LIB_0__::func_429();
								}
							}
						}
					}
					if (PED::IS_PED_FLEEING(*uParam0) || PED::IS_PED_IN_COMBAT(*uParam0, 0))
					{
						if (uParam0->f_17 < 30f)
						{
							if (__LIB_16__::func_299(3000, uParam0->f_7))
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_118, 1))
									{
										if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_MSSEC", 7, 0, 0, 0))
										{
											iLocal_307 = 1;
											uParam0->f_7 = MISC::GET_GAME_TIMER();
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0))
									{
										__LIB_0__::func_709(*uParam0, "CST4_AYAA", "CST4ACTOR", 3);
										iLocal_307 = 1;
										uParam0->f_7 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					break;
			}
			if ((PED::IS_PED_BEING_STUNNED(*uParam0, 0) || PED::IS_PED_DEAD_OR_DYING(*uParam0, true)) || PED::IS_PED_BEING_STEALTH_KILLED(*uParam0))
			{
				if (__LIB_0__::func_75())
				{
					if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*uParam0))
					{
						__LIB_0__::func_429();
					}
				}
			}
		}
	}
}

void func_685(var uParam0)//Position - 0x86CC0
{
	int iVar0;
	int iVar1;
	switch (*uParam0)
	{
		case 0:
			if (iLocal_306 == 0)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1139.96f, -452.77f, 40.31f, 22f, 22f, 8f, false, true, 0))
				{
					*uParam0++;
				}
			}
			break;
		case 1:
			if (func_492(&(Local_417[0 /*18*/]), 0, iLocal_75, 0, 145, 0, 0, 0, 0, -1, 1) && func_492(&(Local_417[1 /*18*/]), 0, iLocal_75, 0, 145, 0, 0, 0, 0, -1, 1))
			{
				__LIB_17__::func_205(&(Local_417[0 /*18*/]), 3);
				__LIB_17__::func_205(&(Local_417[1 /*18*/]), 3);
				*uParam0++;
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_417[0 /*18*/]))
			{
				Local_417[0 /*18*/].f_17 = __LIB_0__::func_76(Local_417[0 /*18*/], PLAYER::PLAYER_PED_ID(), 1);
				if (!ENTITY::IS_ENTITY_DEAD(Local_417[0 /*18*/], false))
				{
					if (Local_417[0 /*18*/].f_15 != 19)
					{
						if (((((iLocal_313 == 1 || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_417[0 /*18*/], PLAYER::PLAYER_PED_ID())) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_417[0 /*18*/], PLAYER::PLAYER_PED_ID(), true)) || PED::HAS_PED_RECEIVED_EVENT(Local_417[0 /*18*/], 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_417[0 /*18*/], 126)) || PED::HAS_PED_RECEIVED_EVENT(Local_417[0 /*18*/], 125))
						{
							__LIB_17__::func_205(&(Local_417[0 /*18*/]), 19);
						}
					}
					switch (Local_417[0 /*18*/].f_15)
					{
						case 3:
							if (Local_417[0 /*18*/].f_14 == 0)
							{
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1143.49f, -464.56f, 33.96f, 0.8f, 60000, 0.25f, 1, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1143.91f, -458.29f, 34.08f, 0.8f, 60000, 0.25f, 1, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1150.15f, -455.65f, 33.91f, 0.8f, 60000, 0.25f, 1, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1162.95f, -461.74f, 33.3f, 0.8f, 60000, 0.25f, 1, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1166.33f, -459.13f, 33.27f, 0.8f, 60000, 0.25f, 1, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1183.96f, -467.7f, 32.3f, 0.8f, 60000, 0.25f, 1, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1204.53f, -480.8f, 31.49f, 0.8f, 60000, 0.25f, 1, 40000f);
								TASK::TASK_WANDER_IN_AREA(0, -1223.41f, -496.62f, 30.31f, 10f, 3f, 6f);
								TASK::CLOSE_SEQUENCE_TASK(iVar0);
								TASK::TASK_PERFORM_SEQUENCE(Local_417[0 /*18*/], iVar0);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_417[0 /*18*/], true);
								Local_417[0 /*18*/].f_14 = 1;
							}
							break;
						case 19:
							if (Local_417[0 /*18*/].f_14 == 0)
							{
								TASK::CLEAR_PED_TASKS(Local_417[0 /*18*/]);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_417[0 /*18*/], 17, true);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_417[0 /*18*/], 4, true);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_417[0 /*18*/], 1024, true);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_417[0 /*18*/], 128, true);
								TASK::TASK_SMART_FLEE_PED(Local_417[0 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_417[0 /*18*/], false);
								PED::SET_PED_KEEP_TASK(Local_417[0 /*18*/], true);
								iLocal_313 = 1;
								Local_417[0 /*18*/].f_7 = 0;
								Local_417[0 /*18*/].f_14 = 1;
							}
							if ((MISC::GET_GAME_TIMER() - Local_417[0 /*18*/].f_7) > 0)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_417[0 /*18*/]))
								{
									__LIB_0__::func_709(Local_417[0 /*18*/], "SCREAM_PANIC", "WAVELOAD_PAIN_MALE", 3);
									Local_417[0 /*18*/].f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 7000));
								}
							}
							break;
						}
				}
				if (ENTITY::IS_ENTITY_DEAD(Local_417[0 /*18*/], false) || Local_417[0 /*18*/].f_15 == 19)
				{
					if (ENTITY::IS_ENTITY_DEAD(Local_417[0 /*18*/], false))
					{
						if (Local_417[0 /*18*/].f_16 == 0)
						{
							Local_417[0 /*18*/].f_16 = func_452(&(Local_417[0 /*18*/]));
							func_451(Local_417[0 /*18*/].f_16, &iLocal_369, &iLocal_370, &iLocal_371);
						}
					}
					if (Local_417[0 /*18*/].f_17 > 200f)
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_417[0 /*18*/]));
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_417[1 /*18*/]))
			{
				Local_417[1 /*18*/].f_17 = __LIB_0__::func_76(Local_417[1 /*18*/], PLAYER::PLAYER_PED_ID(), 1);
				if (!ENTITY::IS_ENTITY_DEAD(Local_417[1 /*18*/], false))
				{
					if (Local_417[1 /*18*/].f_15 != 19)
					{
						if (((((iLocal_313 == 1 || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_417[1 /*18*/], PLAYER::PLAYER_PED_ID())) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_417[1 /*18*/], PLAYER::PLAYER_PED_ID(), true)) || PED::HAS_PED_RECEIVED_EVENT(Local_417[1 /*18*/], 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_417[1 /*18*/], 126)) || PED::HAS_PED_RECEIVED_EVENT(Local_417[1 /*18*/], 125))
						{
							__LIB_17__::func_205(&(Local_417[1 /*18*/]), 19);
						}
					}
					switch (Local_417[1 /*18*/].f_15)
					{
						case 3:
							if (Local_417[1 /*18*/].f_14 == 0)
							{
								TASK::CLEAR_SEQUENCE_TASK(&iVar1);
								TASK::OPEN_SEQUENCE_TASK(&iVar1);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1142.27f, -462.21f, 34.07f, 0.8f, 60000, 0.25f, 1, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1143.37f, -457.43f, 34.19f, 0.8f, 60000, 0.25f, 1, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1152.27f, -454.78f, 33.86f, 0.8f, 60000, 0.25f, 1, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1164.64f, -460.87f, 33.27f, 0.8f, 60000, 0.25f, 1, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1167.92f, -458.11f, 33.237f, 0.8f, 60000, 0.25f, 1, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1184.64f, -465.7f, 32.47f, 0.8f, 60000, 0.25f, 1, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1206.56f, -478.8f, 31.57f, 0.8f, 60000, 0.25f, 1, 40000f);
								TASK::TASK_WANDER_IN_AREA(0, -1223.41f, -496.62f, 30.31f, 10f, 3f, 6f);
								TASK::CLOSE_SEQUENCE_TASK(iVar1);
								TASK::TASK_PERFORM_SEQUENCE(Local_417[1 /*18*/], iVar1);
								TASK::CLEAR_SEQUENCE_TASK(&iVar1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_417[1 /*18*/], true);
								Local_417[1 /*18*/].f_14 = 1;
							}
							break;
						case 19:
							if (Local_417[1 /*18*/].f_14 == 0)
							{
								TASK::CLEAR_PED_TASKS(Local_417[1 /*18*/]);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_417[1 /*18*/], 17, true);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_417[1 /*18*/], 4, true);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_417[1 /*18*/], 1024, true);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_417[1 /*18*/], 128, true);
								TASK::TASK_SMART_FLEE_PED(Local_417[1 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_417[1 /*18*/], false);
								PED::SET_PED_KEEP_TASK(Local_417[1 /*18*/], true);
								iLocal_313 = 1;
								Local_417[1 /*18*/].f_7 = 0;
								Local_417[1 /*18*/].f_14 = 1;
							}
							if ((MISC::GET_GAME_TIMER() - Local_417[1 /*18*/].f_7) > 0)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_417[1 /*18*/]))
								{
									__LIB_0__::func_709(Local_417[1 /*18*/], "SCREAM_PANIC", "WAVELOAD_PAIN_MALE", 3);
									Local_417[1 /*18*/].f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 8000));
								}
							}
							break;
						}
				}
				if (ENTITY::IS_ENTITY_DEAD(Local_417[1 /*18*/], false) || Local_417[1 /*18*/].f_15 == 19)
				{
					if (ENTITY::IS_ENTITY_DEAD(Local_417[1 /*18*/], false))
					{
						if (Local_417[1 /*18*/].f_16 == 0)
						{
							Local_417[1 /*18*/].f_16 = func_452(&(Local_417[1 /*18*/]));
							func_451(Local_417[1 /*18*/].f_16, &iLocal_369, &iLocal_370, &iLocal_371);
						}
					}
					if (Local_417[1 /*18*/].f_17 > 200f)
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_417[1 /*18*/]));
					}
				}
			}
			break;
	}
}

void func_686(var uParam0)//Position - 0x874BE
{
	switch (*uParam0)
	{
		case 0:
			*uParam0++;
			break;
		case 1:
			STREAMING::REQUEST_ANIM_DICT("misscarsteal4@aliens");
			STREAMING::REQUEST_ANIM_DICT("misscarsteal4@meltdown");
			STREAMING::REQUEST_MODEL(Local_114.f_7);
			STREAMING::REQUEST_MODEL(Local_115.f_7);
			STREAMING::REQUEST_MODEL(Local_113.f_7);
			if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4@aliens") && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4@meltdown"))
			{
				if (((((func_662(&Local_113, 0) && func_492(&(Local_425[0 /*18*/]), 0, iLocal_75, 0, 145, 0, 0, 0, 0, -1, 1)) && func_492(&(Local_425[1 /*18*/]), 0, iLocal_75, 0, 145, 0, 0, 0, 0, -1, 1)) && func_492(&(Local_425[2 /*18*/]), 0, iLocal_75, 0, 145, 0, 0, 0, 0, -1, 1)) && func_492(&(Local_425[3 /*18*/]), 0, iLocal_75, 0, 145, 0, 0, 0, 0, -1, 1)) && func_492(&(Local_425[4 /*18*/]), 0, iLocal_75, 0, 145, 0, 0, 0, 0, -1, 1))
				{
					if (func_662(&Local_114, 0) && func_662(&Local_115, 0))
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_395))
						{
							iLocal_395 = PED::CREATE_SYNCHRONIZED_SCENE(Local_56, Local_57, 2);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_395, true);
							PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_395, 0.8f);
							if (!PED::IS_PED_INJURED(Local_425[0 /*18*/]))
							{
								PED::SET_PED_COMPONENT_VARIATION(Local_425[0 /*18*/], 0, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_425[0 /*18*/], 2, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_425[0 /*18*/], 3, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_425[0 /*18*/], 4, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_425[0 /*18*/], 5, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_425[0 /*18*/], 6, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_425[0 /*18*/], 7, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_425[0 /*18*/], 11, 1, 0, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_425[0 /*18*/], iLocal_395, "misscarsteal4@meltdown", "_rehearsal_actor_a", 1000f, -1.5f, 1, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_425[0 /*18*/], false, false);
							}
							if (!PED::IS_PED_INJURED(Local_425[1 /*18*/]))
							{
								PED::SET_PED_COMPONENT_VARIATION(Local_425[1 /*18*/], 0, 1, 1, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_425[1 /*18*/], 3, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_425[1 /*18*/], 4, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_425[1 /*18*/], 5, 1, 0, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_425[1 /*18*/], iLocal_395, "misscarsteal4@meltdown", "_rehearsal_actor_b", 1000f, -1.5f, 1, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_425[1 /*18*/], false, false);
							}
							if (!PED::IS_PED_INJURED(Local_425[2 /*18*/]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_114.f_0) && !ENTITY::IS_ENTITY_DEAD(Local_114.f_0, false))
								{
									if (!ENTITY::IS_ENTITY_ATTACHED(Local_114.f_0))
									{
										ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_114.f_0, Local_425[2 /*18*/], PED::GET_PED_BONE_INDEX(Local_425[2 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
									}
								}
								TASK::TASK_SYNCHRONIZED_SCENE(Local_425[2 /*18*/], iLocal_395, "misscarsteal4@meltdown", "_rehearsal_camera_man", 1000f, -1.5f, 1, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_425[2 /*18*/], false, false);
							}
							if (!PED::IS_PED_INJURED(Local_425[3 /*18*/]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_115.f_0) && !ENTITY::IS_ENTITY_DEAD(Local_115.f_0, false))
								{
									if (!ENTITY::IS_ENTITY_ATTACHED(Local_115.f_0))
									{
										ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_115.f_0, Local_425[3 /*18*/], PED::GET_PED_BONE_INDEX(Local_425[3 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
									}
								}
								TASK::TASK_SYNCHRONIZED_SCENE(Local_425[3 /*18*/], iLocal_395, "misscarsteal4@meltdown", "_rehearsal_boom_op", 1000f, -1.5f, 1, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_425[3 /*18*/], false, false);
							}
							if (!PED::IS_PED_INJURED(Local_425[4 /*18*/]))
							{
								PED::SET_PED_COMPONENT_VARIATION(Local_425[4 /*18*/], 0, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_425[4 /*18*/], 3, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_425[4 /*18*/], 4, 0, 0, 0);
							}
							__LIB_0__::func_222(&uLocal_131, 4, Local_425[0 /*18*/], "DYLAN", 0, 1);
							__LIB_0__::func_222(&uLocal_131, 5, Local_425[1 /*18*/], "FITCH", 0, 1);
							__LIB_0__::func_222(&uLocal_131, 8, Local_425[4 /*18*/], "ANTON", 0, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_114.f_7);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_115.f_7);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_113.f_7);
							__LIB_17__::func_205(&(Local_425[0 /*18*/]), 5);
							__LIB_17__::func_205(&(Local_425[1 /*18*/]), 5);
							__LIB_17__::func_205(&(Local_425[3 /*18*/]), 5);
							__LIB_17__::func_205(&(Local_425[4 /*18*/]), 5);
							__LIB_17__::func_205(&(Local_425[2 /*18*/]), 5);
							iLocal_342 = 0;
							*uParam0++;
						}
					}
				}
			}
			break;
		case 2:
			func_689();
			func_688(&(Local_425[0 /*18*/]), PLAYER::PLAYER_PED_ID(), 900);
			func_688(&(Local_425[1 /*18*/]), PLAYER::PLAYER_PED_ID(), 1000);
			func_688(&(Local_425[3 /*18*/]), PLAYER::PLAYER_PED_ID(), 1250);
			func_688(&(Local_425[2 /*18*/]), PLAYER::PLAYER_PED_ID(), 950);
			func_687(&(Local_425[4 /*18*/]), PLAYER::PLAYER_PED_ID());
			break;
	}
}

void func_687(int* iParam0, int iParam1)//Position - 0x8797C
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iParam0->f_17 = __LIB_0__::func_76(*iParam0, PLAYER::PLAYER_PED_ID(), 1);
		func_478(*iParam0, iParam1, &(iParam0->f_13), &(iParam0->f_11), 950);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			if (iParam0->f_15 != 19)
			{
				if ((((((iLocal_306 == 1 || iLocal_315 == 1) || func_454(*iParam0, iParam1)) || func_683(*iParam0, iParam1, iParam0->f_17)) || func_650(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_680(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_648(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
				{
					__LIB_17__::func_205(iParam0, 19);
				}
			}
			switch (iParam0->f_15)
			{
				case 5:
					if (iParam0->f_14 == 0)
					{
						TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@aliens", "rehearsal_base_idle_director", 4f, -4f, -1, 1, 0f, false, false, false);
						iParam0->f_10 = MISC::GET_GAME_TIMER();
						iParam0->f_14 = 1;
					}
					if (iParam0->f_14 == 1)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_395))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_395) >= 0.645f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_395) < 0.7f)
							{
								__LIB_17__::func_205(iParam0, 6);
							}
						}
					}
					if (iParam0->f_13 == 1)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam1, -1130.0144f, -451.2181f, 35.503246f, 2f, 3f, 1.35f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1131.5021f, -450.782f, 34.109997f, -1130.0519f, -454.8643f, 36.793358f, 4.5f, false, true, 0))
						{
							__LIB_17__::func_205(iParam0, 21);
						}
					}
					break;
				case 6:
					if (iParam0->f_14 == 0)
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
						{
							case 0:
								sLocal_398 = "rehearsal_idle_a_director";
								break;
							case 1:
								sLocal_398 = "rehearsal_idle_b_director";
								break;
							case 2:
								sLocal_398 = "rehearsal_idle_c_director";
								break;
						}
						TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@aliens", sLocal_398, 4f, -4f, -1, 2, 0f, false, false, false);
						iParam0->f_14 = 1;
					}
					if (iParam0->f_14 == 1)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@aliens", sLocal_398, 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@aliens", sLocal_398) >= 0.99f)
							{
								__LIB_17__::func_205(iParam0, 5);
							}
						}
					}
					if (iParam0->f_13 == 1)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam1, -1130.0144f, -451.2181f, 35.503246f, 2f, 3f, 1.35f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1131.5021f, -450.782f, 34.109997f, -1130.0519f, -454.8643f, 36.793358f, 4.5f, false, true, 0))
						{
							__LIB_17__::func_205(iParam0, 21);
						}
					}
					break;
				case 21:
					if (iParam0->f_14 == 0)
					{
						TASK::CLEAR_PED_TASKS(*iParam0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam1, 0);
						TASK::TASK_LOOK_AT_ENTITY(0, iParam1, 5000, 3074, 3);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0))
						{
							__LIB_0__::func_429();
						}
						iParam0->f_9 = 0;
						iParam0->f_14 = 1;
					}
					if (iParam0->f_14 == 1)
					{
						switch (iParam0->f_9)
						{
							case 0:
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
								{
									switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
									{
										case 0:
											__LIB_0__::func_709(*iParam0, "GENERIC_CURSE_HIGH", "ANTON", 6);
											break;
										case 1:
											__LIB_0__::func_709(*iParam0, "AIMED_AT_BY_PLAYER", "ANTON", 6);
											break;
										case 2:
											__LIB_0__::func_709(*iParam0, "GENERIC_FRIGHTENED_HIGH", "ANTON", 6);
											break;
										case 3:
											__LIB_0__::func_709(*iParam0, "GENERIC_SHOCKED_MED", "ANTON", 6);
											break;
										case 4:
											__LIB_0__::func_709(*iParam0, "CRASH_GENERIC_INTERRUPT", "ANTON", 6);
											break;
										case 5:
											__LIB_0__::func_709(*iParam0, "GENERIC_FRIGHTENED_HIGH", "ANTON", 6);
											break;
										case 6:
											__LIB_0__::func_709(*iParam0, "GENERIC_INTERUPT_HIGH", "ANTON", 6);
											break;
									}
								}
								else
								{
									iParam0->f_10 = MISC::GET_GAME_TIMER();
									iParam0->f_9 = 1;
								}
								break;
							case 1:
								if (__LIB_16__::func_299(2000, iParam0->f_10))
								{
									iLocal_316 = 1;
								}
								break;
							}
					}
					break;
				case 19:
					if (iParam0->f_14 == 0)
					{
						TASK::CLEAR_PED_TASKS(*iParam0);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, true);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 4, true);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, true);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 128, true);
						TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
						AUDIO::PLAY_PAIN(*iParam0, 7, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
						PED::SET_PED_KEEP_TASK(*iParam0, true);
						iLocal_315 = 1;
						iParam0->f_7 = 0;
						iParam0->f_14 = 1;
					}
					if ((MISC::GET_GAME_TIMER() - iParam0->f_7) > 0)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
						{
							__LIB_0__::func_709(*iParam0, "SCREAM_PANIC", "WAVELOAD_PAIN_MALE", 10);
							iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 7000));
						}
					}
					break;
				}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0, false) || iParam0->f_15 == 19)
		{
			if (ENTITY::IS_ENTITY_DEAD(*iParam0, false))
			{
				if (iParam0->f_16 == 0)
				{
					iParam0->f_16 = func_452(iParam0);
					func_451(iParam0->f_16, &iLocal_369, &iLocal_370, &iLocal_371);
				}
			}
			if (iParam0->f_17 > 200f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
			}
		}
	}
}

void func_688(int* iParam0, int iParam1, int iParam2)//Position - 0x87ECA
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iParam0->f_17 = __LIB_0__::func_76(*iParam0, PLAYER::PLAYER_PED_ID(), 1);
		func_478(*iParam0, iParam1, &(iParam0->f_13), &(iParam0->f_11), iParam2);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			if (iParam0->f_15 != 19)
			{
				if ((((((iLocal_306 == 1 || iLocal_315 == 1) || func_454(*iParam0, iParam1)) || func_683(*iParam0, iParam1, iParam0->f_17)) || func_650(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_680(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_648(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
				{
					__LIB_17__::func_205(iParam0, 19);
				}
			}
			switch (iParam0->f_15)
			{
				case 5:
					if (iParam0->f_14 == 0)
					{
						iParam0->f_14 = 1;
					}
					break;
				case 19:
					if (iParam0->f_14 == 0)
					{
						TASK::CLEAR_PED_TASKS(*iParam0);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, true);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 4, true);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, true);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 128, true);
						if (ENTITY::DOES_ENTITY_EXIST(Local_114.f_0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_114.f_0, false))
							{
								if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_114.f_0, *iParam0))
								{
									ENTITY::DETACH_ENTITY(Local_114.f_0, false, true);
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_115.f_0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_115.f_0, false))
							{
								if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_115.f_0, *iParam0))
								{
									ENTITY::DETACH_ENTITY(Local_115.f_0, false, true);
								}
							}
						}
						TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
						AUDIO::PLAY_PAIN(*iParam0, 7, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
						PED::SET_PED_KEEP_TASK(*iParam0, true);
						iLocal_315 = 1;
						iParam0->f_7 = 0;
						iParam0->f_14 = 1;
					}
					if ((MISC::GET_GAME_TIMER() - iParam0->f_7) > 0)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
						{
							__LIB_0__::func_709(*iParam0, "SCREAM_PANIC", "WAVELOAD_PAIN_MALE", 10);
							iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2500, 9000));
						}
					}
					break;
				}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0, false) || iParam0->f_15 == 19)
		{
			if (ENTITY::IS_ENTITY_DEAD(*iParam0, false))
			{
				if (iParam0->f_16 == 0)
				{
					iParam0->f_16 = func_452(iParam0);
					func_451(iParam0->f_16, &iLocal_369, &iLocal_370, &iLocal_371);
				}
			}
			if (iParam0->f_17 > 200f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
			}
		}
	}
}

void func_689()//Position - 0x8811C
{
	if (iLocal_315 == 0)
	{
		switch (iLocal_342)
		{
			case 0:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_395))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_395) >= 0.04f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_395) < 0.5f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_56, true) <= 25f)
						{
							if (!func_690())
							{
								if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_MELT", "CST4_MELT_1", 7, 0, 0))
								{
									iLocal_342 = 1;
								}
							}
						}
						else
						{
							iLocal_342 = 1;
						}
					}
				}
				break;
			case 1:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_395))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_395) >= 0.1f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_395) < 0.5f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_56, true) <= 25f)
						{
							if (!func_690())
							{
								if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_MELT", "CST4_MELT_2", 7, 0, 0))
								{
									iLocal_342 = 2;
								}
							}
						}
						else
						{
							iLocal_342 = 2;
						}
					}
				}
				break;
			case 2:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_395))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_395) >= 0.235f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_395) < 0.5f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_56, true) <= 25f)
						{
							if (!func_690())
							{
								if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_MELT", "CST4_MELT_4", 7, 0, 0))
								{
									iLocal_342 = 3;
								}
							}
						}
						else
						{
							iLocal_342 = 3;
						}
					}
				}
				break;
			case 3:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_395))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_395) >= 0.31f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_395) < 0.5f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_56, true) <= 25f)
						{
							if (!func_690())
							{
								if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_MELT", "CST4_MELT_5", 7, 0, 0))
								{
									iLocal_342 = 4;
								}
							}
						}
						else
						{
							iLocal_342 = 4;
						}
					}
				}
				break;
			case 4:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_395))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_395) >= 0.375f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_56, true) <= 25f)
						{
							if (!func_690())
							{
								if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_MELT", "CST4_MELT_6", 7, 0, 0))
								{
									iLocal_342 = 5;
								}
							}
						}
						else
						{
							iLocal_342 = 5;
						}
					}
				}
				break;
			case 5:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_395))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_395) >= 0.425f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_56, true) <= 25f)
						{
							if (!func_690())
							{
								if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_MELT", "CST4_MELT_7", 7, 0, 0))
								{
									iLocal_342 = 6;
								}
							}
						}
						else
						{
							iLocal_342 = 6;
						}
					}
				}
				break;
			case 6:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_395))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_395) >= 0.52f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_56, true) <= 25f)
						{
							if (!func_690())
							{
								if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_MELT", "CST4_MELT_8", 7, 0, 0))
								{
									iLocal_342 = 7;
								}
							}
						}
						else
						{
							iLocal_342 = 7;
						}
					}
				}
				break;
			case 7:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_395))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_395) >= 0.6f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_56, true) <= 25f)
						{
							if (!func_690())
							{
								if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_MELT", "CST4_MELT_9", 7, 0, 0))
								{
									iLocal_342 = 8;
								}
							}
						}
						else
						{
							iLocal_342 = 8;
						}
					}
				}
				break;
			case 8:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_395))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_395) >= 0.64f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_56, true) <= 25f)
						{
							if (!func_690())
							{
								if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_CUT", 7, 0, 0, 0))
								{
									iLocal_342 = 9;
								}
							}
						}
						else
						{
							iLocal_342 = 9;
						}
					}
				}
				break;
			case 9:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_395))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_395) >= 0.685f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_56, true) <= 25f)
						{
							if (!func_690())
							{
								if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_AWFUL", 7, 0, 0, 0))
								{
									iLocal_342 = 10;
								}
							}
						}
						else
						{
							iLocal_342 = 10;
						}
					}
				}
				break;
			case 10:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_395))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_395) >= 0.825f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_56, true) <= 25f)
						{
							if (!func_690())
							{
								if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_AGAIN", 7, 0, 0, 0))
								{
									iLocal_342 = 11;
								}
							}
						}
						else
						{
							iLocal_342 = 11;
						}
					}
				}
				break;
			case 11:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_395))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_395) >= 0.9f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_56, true) <= 25f)
						{
							if (!func_690())
							{
								if (__LIB_16__::func_5(&uLocal_131, "CST4AUD", "CST4_ACTION", 7, 0, 0, 0))
								{
									iLocal_342 = 12;
								}
							}
						}
						else
						{
							iLocal_342 = 12;
						}
					}
				}
				break;
			case 12:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_395))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_395) >= 0.99f)
					{
						iLocal_342 = 0;
					}
				}
				break;
		}
	}
	else if (func_690())
	{
		__LIB_0__::func_429();
	}
}

int func_690()//Position - 0x886C6
{
	struct<6> Var0;
	if (__LIB_0__::func_75())
	{
		Var0 = { __LIB_0__::func_486() };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
		{
			if ((((MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_MELT") || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_CUT")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_AWFUL")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_AGAIN")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ACTION"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_691(var uParam0)//Position - 0x8873E
{
	switch (*uParam0)
	{
		case 0:
			*uParam0++;
			break;
		case 1:
			STREAMING::REQUEST_MODEL(Local_111.f_7);
			STREAMING::REQUEST_ANIM_DICT("misscarsteal4@toilet");
			if (STREAMING::HAS_MODEL_LOADED(Local_111.f_7) && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4@toilet"))
			{
				if (func_492(&Local_81, 0, iLocal_75, 0, 145, 0, 1, 0, 0, -1, 1))
				{
					if (!PED::IS_PED_INJURED(Local_81.f_0))
					{
						__LIB_0__::func_222(&uLocal_131, 0, Local_81.f_0, "CST4RUNNER3", 0, 1);
					}
					ENTITY::CREATE_MODEL_HIDE(Local_111.f_1, 1f, Local_111.f_7, false);
					if (func_662(&Local_111, 1))
					{
					}
					__LIB_17__::func_205(&Local_81, 0);
					*uParam0++;
				}
			}
			break;
		case 2:
			func_692(&Local_81, PLAYER::PLAYER_PED_ID());
			break;
	}
}

void func_692(int* iParam0, int iParam1)//Position - 0x887FE
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iParam0->f_17 = __LIB_0__::func_76(*iParam0, iParam1, 1);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			if (!PED::IS_PED_INJURED(iParam1))
			{
				Var0 = { -1160.548f, -528.44f, 31.585f };
				Var1 = { 0f, 0f, 133.92f };
				if (iParam0->f_15 != 19)
				{
					if (((((ENTITY::IS_ENTITY_TOUCHING_ENTITY(*iParam0, iParam1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, iParam1, true)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 124)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 29)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 126)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 125))
					{
						__LIB_17__::func_205(iParam0, 19);
					}
				}
				switch (iParam0->f_15)
				{
					case 0:
						if (iParam0->f_14 == 0)
						{
							iParam0->f_14 = 1;
						}
						__LIB_17__::func_205(iParam0, 5);
						break;
					case 5:
					case 6:
					case 7:
					case 8:
						if (iParam0->f_14 == 0)
						{
							switch (iParam0->f_15)
							{
								case 5:
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_base_idle", 3))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
										TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "misscarsteal4@toilet", "desperate_toilet_base_idle", Var0, Var1, 1000f, -1000f, -1, 4098, 0f, 2, 0);
									}
									else
									{
										iParam0->f_14 = 1;
									}
									break;
								case 6:
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_a", 3))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
										TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_a", Var0, Var1, 1000f, -1000f, -1, 4098, 0f, 2, 0);
									}
									else
									{
										iParam0->f_14 = 1;
									}
									break;
								case 7:
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_b", 3))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
										TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_b", Var0, Var1, 1000f, -1000f, -1, 4098, 0f, 2, 0);
									}
									else
									{
										iParam0->f_14 = 1;
									}
									break;
								case 8:
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_c", 3))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
										TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_c", Var0, Var1, 1000f, -1000f, -1, 4098, 0f, 2, 0);
									}
									else
									{
										iParam0->f_14 = 1;
									}
									break;
								}
						}
						if (iParam0->f_14 == 1)
						{
							if ((iLocal_73 == 0 && WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar2, true)) && iVar2 == joaat("WEAPON_STUNGUN"))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
							}
							else
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
							}
							switch (iParam0->f_15)
							{
								case 5:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_base_idle", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@toilet", "desperate_toilet_base_idle") >= 1f)
										{
											switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
											{
												case 0:
													__LIB_17__::func_205(iParam0, 6);
													break;
												case 1:
													__LIB_17__::func_205(iParam0, 7);
													break;
												case 2:
													__LIB_17__::func_205(iParam0, 8);
													break;
												}
											}
									}
									break;
								case 6:
								case 7:
								case 8:
									if (((ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_a", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_a") >= 1f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_b", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_b") >= 1f)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_c", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_c") >= 1f))
									{
										__LIB_17__::func_205(iParam0, 5);
									}
									break;
							}
							switch (iParam0->f_15)
							{
								case 5:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_base_idle", 3))
									{
										if (func_456("CST4_TOILET"))
										{
											func_489("CST4_TOILET", 0);
										}
									}
									break;
								case 6:
								case 7:
								case 8:
									if ((ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_a", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_c", 3))
									{
										if (!func_456("CST4_TOILET"))
										{
											if (ENTITY::IS_ENTITY_AT_COORD(iParam1, -1151.53f, -535.51f, 42.63f, 20f, 16f, 16f, false, true, 0) && iParam0->f_17 < 20f)
											{
												switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
												{
													case 0:
														if (!__LIB_13__::func_755(&Local_118, 1))
														{
															if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_TOILET", "CST4_TOILET_1", 7, 0, 0))
															{
																func_489("CST4_TOILET", 1);
															}
														}
														else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
														{
															__LIB_0__::func_709(*iParam0, "CST4_BSAA", "CST4RUNNER3", 4);
															func_489("CST4_TOILET", 1);
														}
														break;
													case 1:
														if (!__LIB_13__::func_755(&Local_118, 1))
														{
															if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_TOILET", "CST4_TOILET_3", 7, 0, 0))
															{
																func_489("CST4_TOILET", 1);
															}
														}
														else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
														{
															__LIB_0__::func_709(*iParam0, "CST4_BSAB", "CST4RUNNER3", 4);
															func_489("CST4_TOILET", 1);
														}
														break;
													case 2:
														if (!__LIB_13__::func_755(&Local_118, 1))
														{
															if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_TOILET", "CST4_TOILET_5", 7, 0, 0))
															{
																func_489("CST4_TOILET", 1);
															}
														}
														else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
														{
															__LIB_0__::func_709(*iParam0, "CST4_BSAC", "CST4RUNNER3", 4);
															func_489("CST4_TOILET", 1);
														}
														break;
													case 3:
														if (!__LIB_13__::func_755(&Local_118, 1))
														{
															if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_TOILET", "CST4_TOILET_7", 7, 0, 0))
															{
																func_489("CST4_TOILET", 1);
															}
														}
														else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
														{
															__LIB_0__::func_709(*iParam0, "CST4_BSAD", "CST4RUNNER3", 4);
															func_489("CST4_TOILET", 1);
														}
														break;
													case 4:
														if (!__LIB_13__::func_755(&Local_118, 1))
														{
															if (__LIB_16__::func_7(&uLocal_131, "CST4AUD", "CST4_TOILET", "CST4_TOILET_9", 7, 0, 0))
															{
																func_489("CST4_TOILET", 1);
															}
														}
														else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
														{
															__LIB_0__::func_709(*iParam0, "CST4_BSAE", "CST4RUNNER3", 4);
															func_489("CST4_TOILET", 1);
														}
														break;
												}
											}
											else
											{
												func_489("CST4_TOILET", 1);
											}
										}
										else if (__LIB_0__::func_75())
										{
											if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0))
											{
												if (PED::IS_PED_DEAD_OR_DYING(*iParam0, true))
												{
													__LIB_0__::func_429();
												}
											}
										}
									}
									break;
								}
						}
						break;
					case 19:
						if (iParam0->f_14 == 0)
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, true);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 4, true);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, true);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 128, true);
							if (!PED::IS_PED_FLEEING(*iParam0))
							{
								TASK::CLEAR_PED_TASKS(*iParam0);
								TASK::TASK_SMART_FLEE_PED(*iParam0, iParam1, 300f, -1, false, false);
								PED::SET_PED_KEEP_TASK(*iParam0, true);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
							iParam0->f_7 = 0;
							iParam0->f_14 = 1;
						}
						if ((MISC::GET_GAME_TIMER() - iParam0->f_7) > 0)
						{
							if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
							{
								__LIB_0__::func_709(*iParam0, "SCREAM_PANIC", "WAVELOAD_PAIN_MALE", 3);
								iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 7000));
							}
						}
						break;
					}
				}
		}
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false) || iParam0->f_15 == 19)
		{
			if (bLocal_319 == 0)
			{
				if (iParam0->f_17 > 200f)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					STREAMING::REMOVE_ANIM_DICT("misscarsteal4@toilet");
				}
			}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0, false) || iParam0->f_15 == 19)
		{
			if (ENTITY::IS_ENTITY_DEAD(*iParam0, false))
			{
				iParam0->f_15 = 1;
				if (iParam0->f_16 == 0)
				{
					iParam0->f_16 = func_452(iParam0);
					func_451(iParam0->f_16, &iLocal_369, &iLocal_370, &iLocal_371);
				}
			}
			if (iParam0->f_17 > 200f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
				STREAMING::REMOVE_ANIM_DICT("misscarsteal4@toilet");
			}
		}
	}
}

int func_693(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)//Position - 0x89037
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (*iParam1 == 0)
	{
		HUD::CLEAR_HELP(true);
		HUD::CLEAR_PRINTS();
		HUD::REQUEST_ADDITIONAL_TEXT("CAR4", 0);
		HUD::REQUEST_ADDITIONAL_TEXT("CST4AUD", 6);
		if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("jb700"), true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_48, true);
		PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_49, true);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("U_M_M_SpyActor"), true);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("U_F_Y_SpyActress"), true);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("U_M_M_FilmDirector"), true);
		PED::ADD_RELATIONSHIP_GROUP("FilmCrew", &iLocal_75);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_75, iLocal_75);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_75, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_75, joaat("SECURITY_GUARD"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_75, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("SECURITY_GUARD"), iLocal_75);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("SECURITY_GUARD"), joaat("PLAYER"));
		PATHFIND::SET_IGNORE_NO_GPS_FLAG(true);
		HUD::SET_GPS_FLAGS(0, 15f);
		iLocal_321 = __LIB_13__::func_804(1);
		__LIB_15__::func_999();
		__LIB_0__::func_424(1);
		__LIB_15__::func_953(7, 0);
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_41748[24 /*31*/]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(Global_41748[24 /*31*/], Global_41748[24 /*31*/].f_5, Global_41748[24 /*31*/].f_2, true, true, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_41748[24 /*31*/]))
		{
			AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(Global_41748[24 /*31*/], true);
		}
		if (__LIB_0__::func_2(0))
		{
			*iParam4 = 1;
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
		}
		else
		{
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 15f);
		}
		iLocal_397 = AUDIO::GET_SOUND_ID();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA((-1130.4639f - 6f), (-455.5777f - 6f), (36.56462f - 3f), (-1130.4639f + 6f), (-455.5777f + 6f), (36.56462f + 3f), false, true);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA((-1130.4639f - 6f), (-455.5777f - 6f), (36.56462f - 3f), (-1130.4639f + 6f), (-455.5777f + 6f), (36.56462f + 3f), 0);
		MISC::SET_STUNT_JUMPS_CAN_TRIGGER(false);
		*iParam1++;
	}
	if (*iParam1 == 1)
	{
		*iParam2 = 0;
		func_720(iParam0);
		__LIB_17__::func_173(&uLocal_405, &uLocal_302);
		__LIB_17__::func_172(&uLocal_414, &uLocal_303);
		func_717();
		*iParam1++;
	}
	if (*iParam1 == 2)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			switch (iParam0)
			{
				case 0:
					iLocal_320 = 0;
					func_783();
					break;
				case 1:
					iLocal_320 = 0;
					break;
				case 2:
					iLocal_320 = 0;
					break;
				case 3:
					iLocal_320 = 1;
					break;
				case 4:
					iLocal_320 = 1;
					break;
				case 5:
					iLocal_320 = 1;
					break;
			}
			__LIB_17__::func_202(PLAYER::PLAYER_PED_ID(), Local_116, Local_116.f_3, 0, 1, 0);
			if (*uParam3 == 1)
			{
				if (iParam0 == 5)
				{
					while (!INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_51)))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_51));
						SYSTEM::WAIT(0);
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_DECORATIONS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
				__LIB_15__::func_974(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				FIRE::STOP_FIRE_IN_RANGE(Local_116, 1000f);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_116, 1000f);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_116, 1000f);
				MISC::CLEAR_AREA(Local_116, 1000f, true, false, false, false);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_116, 1000f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(-1051.45f, -477.7f, 35.99f, 20f, 6);
				MISC::CLEAR_AREA_OF_OBJECTS(-1209.42f, -577.77f, 26.67f, 20f, 6);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0);
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
			iLocal_306 = 0;
			iLocal_369 = 0;
			iLocal_370 = 0;
			iLocal_371 = 0;
			fLocal_337 = 0f;
			StringCopy(&Local_60, "CAR4_DCAR", 16);
			StringCopy(&cLocal_63, "CMN_GENGETIN" /* GXT: ~s~Get in the ~b~car. */, 16);
			StringCopy(&cLocal_66, "CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 16);
			iLocal_323 = 0;
			iLocal_324 = 0;
			iLocal_325 = 0;
			iLocal_327 = 0;
			iLocal_328 = 0;
			iLocal_329 = 0;
			iLocal_330 = 0;
			iLocal_331 = 0;
			iLocal_332 = 0;
			iLocal_333 = 0;
			iLocal_334 = 0;
			iLocal_335 = 0;
			iLocal_336 = 0;
			iLocal_326 = 0;
		}
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				if (iLocal_322 == 0)
				{
					TASK::SET_SCENARIO_GROUP_ENABLED("MOVIE_STUDIO_SECURITY", false);
					func_716(-1149.78f, -508.89f, 40.84f, 72f, 52f, 16f);
					if (iLocal_400 == 0)
					{
						iLocal_400 = __LIB_17__::func_211(-1149.78f, -508.89f, 40.84f, 72f, 52f, 16f);
					}
					if (iLocal_401 == 0)
					{
						iLocal_401 = __LIB_17__::func_211(-1073.38f, -476.93f, 37.63f, 20f, 20f, 4f);
					}
					MISC::CLEAR_AREA_OF_PEDS(-1149.78f, -508.89f, 40.84f, 90f, 0);
					MISC::CLEAR_AREA_OF_PEDS(-1080.52f, -479.68f, 35.69f, 20f, 0);
					iLocal_322 = 1;
				}
				break;
			default:
				break;
		}
		if (*iParam4 == 1)
		{
			__LIB_16__::func_1(Local_116, Local_116.f_3, 1, 0);
		}
		func_712(iParam0);
		*iParam1++;
	}
	if (*iParam1 == 3)
	{
		if (__LIB_17__::func_170(&uLocal_405, &uLocal_302))
		{
			if (__LIB_17__::func_169(&uLocal_414, &uLocal_303))
			{
				*iParam1++;
			}
		}
	}
	if (*iParam1 == 4)
	{
		func_709(0);
		switch (iParam0)
		{
			case 0:
				if (func_569(&Local_106, 0, 1, 145, 1, -1, -1, -1, 0, 0))
				{
					iLocal_404[1] = 1;
					iLocal_404[2] = 1;
					iLocal_404[4] = 1;
					__LIB_0__::func_679(Local_106.f_0, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_106.f_0, false))
					{
						VEHICLE::SET_VEHICLE_STRONG(Local_106.f_0, true);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_106.f_0, false);
					}
					if ((func_492(&Local_76, 0, iLocal_75, 0, 145, 0, 1, 0, 0, -1, 1) && func_492(&Local_94, 0, iLocal_75, 0, 145, 0, 1, 0, 0, -1, 1)) && func_492(&Local_93, 0, iLocal_75, 0, 145, 0, 1, 0, Local_106.f_0, 0, 1))
					{
						if (!PED::IS_PED_INJURED(Local_76.f_0))
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_76.f_0, 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_76.f_0, 3, 0, 0, 0);
						}
						if (!PED::IS_PED_INJURED(Local_94.f_0))
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_94.f_0, 0, 1, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_94.f_0, 2, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_94.f_0, 3, 0, 2, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_94.f_0, 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_94.f_0, 5, 0, 0, 0);
						}
						if (func_662(&Local_110, 1) && func_662(&Local_108, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_110.f_0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_110.f_0, false))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(Local_110.f_0, true);
								}
							}
							iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (__LIB_16__::func_324())
							{
								if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
									}
									__LIB_12__::func_899(iVar0, 145);
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
								}
							}
							*iParam1++;
						}
					}
				}
				break;
			case 1:
				if (func_569(&Local_106, 0, 1, 145, 1, -1, -1, -1, 0, 0))
				{
					iLocal_404[1] = 1;
					iLocal_404[2] = 1;
					iLocal_404[3] = 1;
					__LIB_0__::func_679(Local_106.f_0, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_106.f_0, false))
					{
						VEHICLE::SET_VEHICLE_STRONG(Local_106.f_0, true);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_106.f_0, false);
					}
					if (func_492(&Local_76, 0, iLocal_75, 0, 145, 0, 1, 0, 0, -1, 1))
					{
						if (!PED::IS_PED_INJURED(Local_76.f_0))
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_76.f_0, 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_76.f_0, 3, 0, 0, 0);
						}
						if (func_662(&Local_110, 1) && func_662(&Local_108, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_110.f_0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_110.f_0, false))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(Local_110.f_0, true);
								}
							}
							*iParam1++;
						}
					}
				}
				break;
			case 2:
				if (func_569(&Local_106, 0, 1, 145, 1, -1, -1, -1, 0, 0))
				{
					iLocal_404[1] = 1;
					iLocal_404[2] = 1;
					iLocal_404[3] = 1;
					__LIB_0__::func_679(Local_106.f_0, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_106.f_0, false))
					{
						VEHICLE::SET_VEHICLE_STRONG(Local_106.f_0, true);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_106.f_0, false);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_106.f_0, true, true, false);
					}
					AUDIO::SET_RADIO_TO_STATION_INDEX(255);
					if (func_662(&Local_110, 1) && func_662(&Local_108, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_110.f_0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_110.f_0, false))
							{
								ENTITY::SET_ENTITY_INVINCIBLE(Local_110.f_0, true);
							}
						}
						if (func_492(&Local_76, 0, iLocal_75, 0, 145, 0, 1, 0, 0, -1, 1))
						{
							if (!PED::IS_PED_INJURED(Local_76.f_0))
							{
								PED::SET_PED_COMPONENT_VARIATION(Local_76.f_0, 4, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_76.f_0, 3, 1, 0, 0);
							}
							if (func_492(&Local_93, 0, iLocal_75, 0, 145, 0, 1, 0, Local_106.f_0, 0, 1))
							{
								__LIB_17__::func_205(&Local_93, 16);
								*iParam1++;
							}
						}
					}
				}
				break;
			case 3:
				if (func_569(&Local_106, 0, 1, 145, 1, -1, -1, -1, 0, 0))
				{
					iLocal_404[1] = 1;
					iLocal_404[2] = 1;
					iLocal_404[3] = 1;
					iLocal_404[5] = 1;
					iLocal_404[6] = 1;
					iLocal_404[7] = 1;
					__LIB_0__::func_679(Local_106.f_0, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_106.f_0, false))
					{
						VEHICLE::SET_VEHICLE_STRONG(Local_106.f_0, true);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_106.f_0, false);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
					}
					if (func_662(&Local_110, 1) && func_662(&Local_108, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_110.f_0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_110.f_0, false))
							{
								ENTITY::SET_ENTITY_INVINCIBLE(Local_110.f_0, true);
							}
						}
						if (BitTest(Global_96891, 4))
						{
							*iParam1++;
						}
						else if (func_492(&Local_93, 0, iLocal_75, 0, 145, 0, 1, 0, Local_106.f_0, 0, 1))
						{
							__LIB_17__::func_205(&Local_93, 16);
							*iParam1++;
						}
					}
				}
				break;
			case 4:
				if (func_569(&Local_106, 0, 1, 145, 1, -1, -1, -1, 0, 0))
				{
					iLocal_404[1] = 1;
					iLocal_404[2] = 1;
					iLocal_404[3] = 1;
					__LIB_0__::func_679(Local_106.f_0, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_106.f_0, false))
					{
						VEHICLE::SET_VEHICLE_STRONG(Local_106.f_0, false);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_106.f_0, false);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
					}
					iLocal_404[8] = 1;
					iLocal_404[9] = 1;
					iLocal_404[5] = 1;
					*iParam1++;
				}
				break;
			case 5:
				if (func_569(&Local_106, 0, 1, 145, 1, -1, -1, -1, 0, 0))
				{
					iLocal_404[1] = 1;
					iLocal_404[2] = 1;
					iLocal_404[3] = 1;
					__LIB_0__::func_679(Local_106.f_0, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_106.f_0, false))
					{
						VEHICLE::SET_VEHICLE_STRONG(Local_106.f_0, false);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_106.f_0, false);
					}
					*iParam1++;
				}
				break;
			}
	}
	if (*iParam1 == 5)
	{
		switch (iParam0)
		{
			case 0:
			case 1:
				if (__LIB_0__::func_2(0) || func_305(PLAYER::PLAYER_PED_ID(), 12, 1))
				{
					func_3(0);
				}
				break;
			case 2:
				iLocal_312 = 1;
				func_3(1);
				if (!BitTest(Global_96891, 0))
				{
					func_660(0);
				}
				break;
			default:
				if (BitTest(Global_96891, 0))
				{
					iLocal_312 = 1;
					func_3(1);
				}
				else
				{
					iLocal_312 = 0;
					func_3(0);
				}
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 6)
	{
		__LIB_0__::func_221(&uLocal_131, 0);
		__LIB_0__::func_221(&uLocal_131, 1);
		__LIB_0__::func_221(&uLocal_131, 2);
		__LIB_0__::func_221(&uLocal_131, 3);
		__LIB_0__::func_221(&uLocal_131, 6);
		__LIB_0__::func_221(&uLocal_131, 7);
		__LIB_0__::func_221(&uLocal_131, 4);
		__LIB_0__::func_221(&uLocal_131, 5);
		__LIB_0__::func_221(&uLocal_131, 8);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_0__::func_222(&uLocal_131, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		switch (iParam0)
		{
			case 0:
				__LIB_0__::func_222(&uLocal_131, 2, 0, "MOLLY", 0, 1);
				if (!PED::IS_PED_INJURED(Local_76.f_0))
				{
					__LIB_0__::func_222(&uLocal_131, 6, Local_76.f_0, "CST4ACTOR", 0, 1);
				}
				break;
			case 2:
				if (!PED::IS_PED_INJURED(Local_93.f_0))
				{
					__LIB_0__::func_222(&uLocal_131, 3, Local_93.f_0, "CST4ACTRESS", 0, 1);
				}
				break;
			case 3:
				__LIB_0__::func_222(&uLocal_131, 2, 0, "MOLLY", 0, 1);
				if (!PED::IS_PED_INJURED(Local_93.f_0))
				{
					__LIB_0__::func_222(&uLocal_131, 3, Local_93.f_0, "CST4ACTRESS", 0, 1);
				}
				if (!PED::IS_PED_INJURED(Local_424[0 /*18*/]))
				{
					__LIB_0__::func_222(&uLocal_131, 7, Local_424[0 /*18*/], "CST4DIRECTOR", 0, 1);
				}
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 7)
	{
		__LIB_14__::func_804(0);
		__LIB_13__::func_824(39, 1);
		__LIB_13__::func_824(40, 1);
		__LIB_13__::func_824(41, 1);
		__LIB_13__::func_824(42, 1);
		__LIB_13__::func_824(43, 1);
		__LIB_13__::func_824(44, 1);
		func_698();
		func_697();
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PED::SET_CREATE_RANDOM_COPS(true);
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
				PATHFIND::SET_IGNORE_NO_GPS_FLAG(true);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PED::SET_CREATE_RANDOM_COPS(false);
				break;
			case 3:
				__LIB_14__::func_804(1);
				PATHFIND::SET_IGNORE_NO_GPS_FLAG(true);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PED::SET_CREATE_RANDOM_COPS(false);
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				break;
			case 4:
			case 5:
				PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
				break;
		}
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
				__LIB_16__::func_319(80, 1);
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_41748[24 /*31*/]))
				{
					AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(Global_41748[24 /*31*/], true);
				}
				break;
			case 3:
				__LIB_16__::func_319(80, 1);
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_41748[24 /*31*/]))
				{
					AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(Global_41748[24 /*31*/], true);
				}
				break;
			case 4:
			case 5:
				__LIB_16__::func_319(80, 1);
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_41748[24 /*31*/]))
				{
					AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(Global_41748[24 /*31*/], true);
				}
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 8)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			switch (iParam0)
			{
				case 3:
					STREAMING::REQUEST_CLIP_SET("move_injured_generic");
					STREAMING::REQUEST_ANIM_DICT("misscarsteal4@director_grip");
					if (STREAMING::HAS_CLIP_SET_LOADED("move_injured_generic") && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4@director_grip"))
					{
						if ((func_492(&(Local_424[1 /*18*/]), 0, iLocal_75, 0, 145, 0, 1, 0, 0, -1, 1) && func_492(&(Local_424[2 /*18*/]), 0, iLocal_75, 0, 145, 0, 1, 0, 0, -1, 1)) && func_492(&(Local_424[0 /*18*/]), 0, iLocal_75, 0, 145, 0, 1, 0, 0, -1, 1))
						{
							if (func_662(&Local_109, 0) && func_662(&Local_112, 0))
							{
								if (!PED::IS_PED_INJURED(Local_424[0 /*18*/]))
								{
									PED::SET_PED_PROP_INDEX(Local_424[0 /*18*/], 1, 0, 0, false);
									__LIB_0__::func_222(&uLocal_131, 7, Local_424[0 /*18*/], "CST4DIRECTOR", 0, 1);
								}
								if (!PED::IS_PED_INJURED(Local_424[1 /*18*/]))
								{
									PED::SET_PED_COMPONENT_VARIATION(Local_424[1 /*18*/], 0, 1, 1, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_424[1 /*18*/], 3, 1, 1, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_424[1 /*18*/], 4, 0, 1, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_424[1 /*18*/], 8, 2, 0, 0);
								}
								if (!PED::IS_PED_INJURED(Local_424[2 /*18*/]))
								{
									PED::SET_PED_COMPONENT_VARIATION(Local_424[2 /*18*/], 0, 0, 1, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_424[2 /*18*/], 3, 0, 2, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_424[2 /*18*/], 4, 0, 2, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_424[2 /*18*/], 8, 0, 0, 0);
								}
								if (ENTITY::DOES_ENTITY_EXIST(Local_112.f_0))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_112.f_0, false))
									{
										if (!ENTITY::IS_ENTITY_ATTACHED(Local_112.f_0))
										{
											if (!PED::IS_PED_INJURED(Local_424[1 /*18*/]))
											{
												ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_112.f_0, Local_424[1 /*18*/], PED::GET_PED_BONE_INDEX(Local_424[1 /*18*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
											}
										}
									}
								}
								if (ENTITY::DOES_ENTITY_EXIST(Local_424[1 /*18*/]))
								{
									if (!PED::IS_PED_INJURED(Local_424[1 /*18*/]))
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_424[1 /*18*/], "misscarsteal4@director_grip", "end_loop_grip", 3))
										{
											TASK::TASK_PLAY_ANIM_ADVANCED(Local_424[1 /*18*/], "misscarsteal4@director_grip", "end_loop_grip", Local_109.f_1, Local_109.f_4, 4f, -8f, -1, 790537, 0f, 2, 2);
										}
									}
								}
								if (ENTITY::DOES_ENTITY_EXIST(Local_424[2 /*18*/]))
								{
									if (!PED::IS_PED_INJURED(Local_424[2 /*18*/]))
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_424[2 /*18*/], "misscarsteal4@director_grip", "mcs_2_loop_grip1", 3))
										{
											TASK::TASK_PLAY_ANIM_ADVANCED(Local_424[2 /*18*/], "misscarsteal4@director_grip", "mcs_2_loop_grip1", Local_53, Local_54, 1000f, -4f, -1, 4097, 0f, 2, 0);
										}
									}
								}
								if (ENTITY::DOES_ENTITY_EXIST(Local_424[0 /*18*/]))
								{
									if (!PED::IS_PED_INJURED(Local_424[0 /*18*/]))
									{
										PED::SET_PED_PROP_INDEX(Local_424[0 /*18*/], 1, 0, 0, false);
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_424[0 /*18*/], "misscarsteal4@director_grip", "end_loop_director", 3))
										{
											TASK::TASK_PLAY_ANIM_ADVANCED(Local_424[0 /*18*/], "misscarsteal4@director_grip", "end_loop_director", Local_109.f_1, Local_109.f_4, 4f, -8f, -1, 790537, 0f, 2, 1);
										}
									}
								}
								__LIB_17__::func_205(&(Local_424[1 /*18*/]), 7);
								__LIB_17__::func_205(&(Local_424[2 /*18*/]), 12);
								__LIB_17__::func_205(&(Local_424[0 /*18*/]), 7);
								if (((ENTITY::DOES_ENTITY_EXIST(Local_418[0 /*18*/]) && ENTITY::DOES_ENTITY_EXIST(Local_418[1 /*18*/])) && ENTITY::DOES_ENTITY_EXIST(Local_418[2 /*18*/])) && ENTITY::DOES_ENTITY_EXIST(Local_418[3 /*18*/]))
								{
									iVar1 = 0;
									while (iVar1 < 4)
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_418[iVar1 /*18*/], false))
										{
											TASK::TASK_AIM_GUN_AT_ENTITY(Local_418[iVar1 /*18*/], PLAYER::PLAYER_PED_ID(), -1, true);
											__LIB_17__::func_205(&(Local_418[iVar1 /*18*/]), 22);
										}
										iVar1++;
									}
									*iParam1++;
								}
								else
								{
									iVar1 = 0;
									while (iVar1 < Local_418.f_0)
									{
										if (!ENTITY::DOES_ENTITY_EXIST(Local_418[iVar1 /*18*/]))
										{
											STREAMING::REQUEST_MODEL(iLocal_49);
											if (STREAMING::HAS_MODEL_LOADED(iLocal_49))
											{
												Local_418[iVar1 /*18*/] = func_652(Local_418[iVar1 /*18*/].f_2, Local_418[iVar1 /*18*/].f_5, iLocal_49, joaat("SECURITY_GUARD"), 200, joaat("WEAPON_PISTOL"));
												__LIB_17__::func_205(&(Local_418[iVar1 /*18*/]), 0);
												STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_49);
											}
										}
										iVar1++;
									}
								}
							}
						}
					}
					break;
				default:
					*iParam1++;
					break;
			}
		}
		else
		{
			*iParam1++;
		}
	}
	if (*iParam1 == 9)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			if (*iParam4 == 1)
			{
				__LIB_0__::func_433(0, -1, 0);
			}
			else
			{
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 20f, 0);
				iVar2 = MISC::GET_GAME_TIMER() + 15000;
				while ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && MISC::GET_GAME_TIMER() < iVar2)
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			SYSTEM::WAIT(500);
			switch (iParam0)
			{
				case 3:
				case 4:
				case 5:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_106.f_0, false))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_106.f_0, -1);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_106.f_0, 5f);
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_106.f_0, true, true, false);
							PHYSICS::ACTIVATE_PHYSICS(Local_106.f_0);
							ENTITY::SET_ENTITY_DYNAMIC(Local_106.f_0, true);
						}
					}
					break;
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			switch (iParam0)
			{
				case 1:
					AUDIO::TRIGGER_MUSIC_EVENT("CAR3_TRAILER_RESTART");
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_3_INSIDE_STUDIO"))
					{
						AUDIO::START_AUDIO_SCENE("CAR_3_INSIDE_STUDIO");
					}
					break;
				case 2:
					AUDIO::TRIGGER_MUSIC_EVENT("CAR3_CAR_RESTART");
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_3_INSIDE_STUDIO"))
					{
						AUDIO::START_AUDIO_SCENE("CAR_3_INSIDE_STUDIO");
					}
					break;
				case 3:
					AUDIO::TRIGGER_MUSIC_EVENT("CAR3_ESCAPE_RESTART");
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_3_ESCAPE_SECURITY"))
					{
						AUDIO::START_AUDIO_SCENE("CAR_3_ESCAPE_SECURITY");
					}
					break;
				case 4:
					AUDIO::TRIGGER_MUSIC_EVENT("CAR3_DELIVER_RESTART");
					break;
			}
			switch (iParam0)
			{
				case 1:
				case 5:
					break;
				default:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					break;
				}
		}
		*iParam1++;
	}
	if (*iParam1 == 10)
	{
		switch (iParam0)
		{
			case 0:
				__LIB_43__::func_558(0, "GET TO ACTOR", 0, 0, 0, 1);
				break;
			case 2:
				__LIB_43__::func_558(1, "GET TO CAR", 0, 0, 0, 1);
				break;
			case 3:
				__LIB_43__::func_558(2, "ESCAPE FILM SET", 0, 0, 0, 1);
				break;
			case 4:
				__LIB_43__::func_558(3, "DELIVER CAR", 1, 0, 0, 1);
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 11)
	{
		*iParam2 = 1;
		*iParam4 = 0;
		*uParam3 = 0;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		*iParam1++;
	}
	if (*iParam1 == 12)
	{
		return 1;
	}
	return 0;
}

void func_697()//Position - 0x8A51E
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1382347031))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1382347031, 0f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1382347031, 1, false, true);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1668106976))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1668106976, 0f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1668106976, 1, false, true);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1562636567))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1562636567, 0f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1562636567, 1, false, true);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-611684898))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-611684898, 0f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-611684898, 1, false, true);
	}
}

void func_698()//Position - 0x8A5B6
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1562636567))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(1562636567, joaat("prop_bh1_03_gate_l"), -965.1991f, -504.0431f, 37.9792f, false, false, false);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-611684898))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(-611684898, joaat("prop_bh1_03_gate_r"), -962.2961f, -509.599f, 37.9779f, false, false, false);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-449343164))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(-449343164, joaat("prop_sc1_06_gate_r"), 500.1759f, -1320.545f, 28.2499f, true, true, false);
	}
}

void func_709(int iParam0)//Position - 0x8AC02
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_404 - 1))
	{
		iLocal_404[iVar0] = iParam0;
		iVar0++;
	}
}

void func_712(int iParam0)//Position - 0x8ACB6
{
	switch (iParam0)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_106.f_0))
			{
				__LIB_17__::func_171(Local_106.f_6, &uLocal_405, 8, &uLocal_302);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_76.f_0))
			{
				__LIB_17__::func_171(Local_76.f_6, &uLocal_405, 8, &uLocal_302);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_110.f_0))
			{
				__LIB_17__::func_171(Local_110.f_7, &uLocal_405, 8, &uLocal_302);
			}
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_106.f_0))
			{
				__LIB_17__::func_171(Local_106.f_6, &uLocal_405, 8, &uLocal_302);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_76.f_0))
			{
				__LIB_17__::func_171(Local_76.f_6, &uLocal_405, 8, &uLocal_302);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_110.f_0))
			{
				__LIB_17__::func_171(Local_110.f_7, &uLocal_405, 8, &uLocal_302);
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_106.f_0))
			{
				__LIB_17__::func_171(Local_106.f_6, &uLocal_405, 8, &uLocal_302);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_110.f_0))
			{
				__LIB_17__::func_171(Local_110.f_7, &uLocal_405, 8, &uLocal_302);
			}
			break;
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_106.f_0))
			{
				__LIB_17__::func_171(Local_106.f_6, &uLocal_405, 8, &uLocal_302);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_110.f_0))
			{
				__LIB_17__::func_171(Local_110.f_7, &uLocal_405, 8, &uLocal_302);
			}
			__LIB_17__::func_171(iLocal_50, &uLocal_405, 8, &uLocal_302);
			break;
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_106.f_0))
			{
				__LIB_17__::func_171(Local_106.f_6, &uLocal_405, 8, &uLocal_302);
			}
			__LIB_17__::func_171(iLocal_50, &uLocal_405, 8, &uLocal_302);
			break;
		case 5:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_106.f_0))
			{
				__LIB_17__::func_171(Local_106.f_6, &uLocal_405, 8, &uLocal_302);
			}
			break;
	}
}

void func_716(struct<3> Param0, struct<3> Param1)//Position - 0x8AF86
{
	PED::SET_PED_NON_CREATION_AREA((Param0.f_0 - Param1.f_0), (Param0.f_1 - Param1.f_1), (Param0.f_2 - Param1.f_2), (Param0.f_0 + Param1.f_0), (Param0.f_1 + Param1.f_1), (Param0.f_2 + Param1.f_2));
}

void func_717()//Position - 0x8AFC0
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_430;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_430[iVar1] = 0;
		iVar1++;
	}
	iLocal_429 = 0;
}

void func_720(int iParam0)//Position - 0x8B077
{
	func_723();
	func_722();
	func_721();
	switch (iParam0)
	{
		case 0:
			Local_116 = { -1085.611f, -428.5754f, 35.6276f };
			Local_116.f_3 = 118.9753f;
			Local_106.f_2 = { -1180.1277f, -505.928f, 34.5664f };
			Local_106.f_5 = 246.5268f;
			Local_106.f_6 = joaat("jb700");
			Local_76.f_2 = { -1109.36f, -503.38f, 34.26f };
			Local_76.f_5 = 116.5653f;
			Local_76.f_6 = joaat("U_M_M_SpyActor");
			Local_94.f_2 = { -1112.3136f, -504.5007f, 34.0635f };
			Local_94.f_5 = 296.0018f;
			Local_94.f_6 = joaat("A_F_Y_Hipster_04");
			Local_110.f_1 = { -1113.92f, -502.832f, 35.882f };
			Local_110.f_4 = { 0f, 0f, -84.1778f };
			Local_110.f_7 = joaat("prop_a_trailer_door_01");
			break;
		case 1:
			Local_116 = { -1109.6f, -502.7238f, 34.2594f };
			Local_116.f_3 = 113.6969f;
			Local_106.f_2 = { -1180.1277f, -505.928f, 34.5664f };
			Local_106.f_5 = 246.5268f;
			Local_106.f_6 = joaat("jb700");
			Local_76.f_2 = { -1105.235f, -491.2045f, 34.8387f };
			Local_76.f_5 = 206.1382f;
			Local_76.f_6 = joaat("U_M_M_SpyActor");
			Local_110.f_1 = { -1113.92f, -502.832f, 35.882f };
			Local_110.f_4 = { 0f, 0f, -84.1778f };
			Local_110.f_7 = joaat("prop_a_trailer_door_01");
			break;
		case 2:
			Local_116 = { -1115.4556f, -505.5281f, 33.9062f };
			Local_116.f_3 = 117.7305f;
			Local_106.f_2 = { -1180.1277f, -505.928f, 34.5664f };
			Local_106.f_5 = 246.5268f;
			Local_106.f_6 = joaat("jb700");
			Local_76.f_2 = { -1116.618f, -502.8903f, 34.8063f };
			Local_76.f_5 = 304.2335f;
			Local_76.f_6 = joaat("U_M_M_SpyActor");
			Local_110.f_1 = { -1113.905f, -502.82f, 35.882f };
			Local_110.f_4 = { 0f, 0f, 27f };
			Local_110.f_7 = joaat("prop_a_trailer_door_01");
			break;
		case 3:
			Local_116 = { -1180.1184f, -504.4346f, 34.5669f };
			Local_116.f_3 = 252.0904f;
			Local_106.f_2 = { -1180.1277f, -505.928f, 34.5664f };
			Local_106.f_5 = 246.5268f;
			Local_106.f_6 = joaat("jb700");
			Local_76.f_2 = { -1105.23f, -491.2f, 34.83f };
			Local_76.f_5 = 206.1382f;
			Local_76.f_6 = joaat("U_M_M_SpyActor");
			Local_110.f_1 = { -1113.92f, -502.832f, 35.882f };
			Local_110.f_4 = { 0f, 0f, -84.1778f };
			Local_110.f_7 = joaat("prop_a_trailer_door_01");
			break;
		case 4:
			Local_116 = { 126.2967f, -912.3267f, 29.0396f };
			Local_116.f_3 = 160.9179f;
			Local_106.f_2 = { 124.8845f, -913.1312f, 28.971f };
			Local_106.f_5 = 161.685f;
			Local_106.f_6 = joaat("jb700");
			break;
		case 5:
			Local_116 = { 481.8158f, -1318.621f, 28.2052f };
			Local_116.f_3 = 119.3001f;
			Local_106.f_2 = { 480.7779f, -1317.7502f, 28.2059f };
			Local_106.f_5 = 116.075f;
			Local_106.f_6 = joaat("jb700");
			break;
	}
}

void func_721()//Position - 0x8B3D5
{
	iLocal_427[0] = 0;
	Local_428[0 /*4*/] = { -1098.1554f, -540.3402f, 34.3502f };
	Local_428[0 /*4*/].f_3 = 297.874f;
	iLocal_427[1] = 0;
	Local_428[1 /*4*/] = { -1095.3468f, -492.391f, 35.0424f };
	Local_428[1 /*4*/].f_3 = 205.2367f;
	iLocal_427[2] = 0;
	Local_428[2 /*4*/] = { -1124.9238f, -499.1039f, 33.76f };
	Local_428[2 /*4*/].f_3 = 121.9869f;
	iLocal_427[3] = 0;
	Local_428[3 /*4*/] = { -1068.714f, -503.8521f, 35.1105f };
	Local_428[3 /*4*/].f_3 = 28.3751f;
	iLocal_427[4] = 0;
	Local_428[4 /*4*/] = { -1104.8634f, -485.5148f, 35.0221f };
	Local_428[4 /*4*/].f_3 = 299.0859f;
	iLocal_427[5] = 0;
	Local_428[5 /*4*/] = { -1091.277f, -549.1374f, 33.9233f };
	Local_428[5 /*4*/].f_3 = 304.0113f;
	iLocal_427[6] = 0;
	Local_428[6 /*4*/] = { -1134.6398f, -530.8317f, 31.9306f };
	Local_428[6 /*4*/].f_3 = 120.3262f;
	iLocal_427[7] = 0;
	Local_428[7 /*4*/] = { -1124.9128f, -504.2563f, 33.6356f };
	Local_428[7 /*4*/].f_3 = 299.8388f;
}

void func_722()//Position - 0x8B535
{
	Local_108.f_1 = { -1169.74f, -512.696f, 34.7427f };
	Local_108.f_4 = { 0f, 0f, -122.4f };
	Local_108.f_7 = joaat("prop_studio_light_02");
	Local_109.f_1 = { -1178.42f, -511.08f, 35.26f };
	Local_109.f_4 = { 0f, 0f, 180f };
	Local_109.f_7 = joaat("prop_direct_chair_02");
	Local_112.f_1 = { -1180f, -511.25f, 34.57f };
	Local_112.f_4 = { 0f, 0f, 0f };
	Local_112.f_7 = joaat("p_cs_clipboard");
	Local_111.f_1 = { -1160.736f, -528.9149f, 31.5855f };
	Local_111.f_4 = { 0f, 0f, 152.3009f };
	Local_111.f_7 = joaat("prop_portaloo_01a");
	Local_113.f_1 = { -1130.587f, -453.2327f, 36.175f };
	Local_113.f_4 = { -0.8f, 1f, -160f };
	Local_113.f_7 = joaat("prop_ld_greenscreen_01");
	Local_114.f_1 = { -1132.19f, -449.93f, 34.61f };
	Local_114.f_4 = { 0f, 0f, 0f };
	Local_114.f_7 = joaat("prop_v_cam_01");
	Local_115.f_1 = { -1132.75f, -451.21f, 34.57f };
	Local_115.f_4 = { 0f, 0f, 0f };
	Local_115.f_7 = joaat("prop_v_bmike_01");
	Local_424[0 /*18*/].f_2 = { -1178.1136f, -510.3467f, 34.5669f };
	Local_424[0 /*18*/].f_5 = 27.146f;
	Local_424[0 /*18*/].f_6 = joaat("U_M_M_FilmDirector");
	Local_424[1 /*18*/].f_2 = { -1179.1171f, -510.1808f, 34.5669f };
	Local_424[1 /*18*/].f_5 = 350.5527f;
	Local_424[1 /*18*/].f_6 = joaat("S_M_Y_Grip_01");
	Local_424[2 /*18*/].f_2 = { -1170.0442f, -511.5512f, 34.5666f };
	Local_424[2 /*18*/].f_5 = 203.5958f;
	Local_424[2 /*18*/].f_6 = joaat("S_M_Y_Grip_01");
	Local_424[3 /*18*/].f_2 = { -1185.9601f, -506.3779f, 34.5794f };
	Local_424[3 /*18*/].f_5 = 65.6138f;
	Local_424[3 /*18*/].f_6 = joaat("S_M_Y_Grip_01");
	Local_424[4 /*18*/].f_2 = { -1177.0441f, -488.3724f, 34.5519f };
	Local_424[4 /*18*/].f_5 = 82.4244f;
	Local_424[4 /*18*/].f_6 = joaat("S_M_Y_Grip_01");
	Local_424[5 /*18*/].f_2 = { -1176.1688f, -482.1744f, 34.7701f };
	Local_424[5 /*18*/].f_5 = 201.0676f;
	Local_424[5 /*18*/].f_6 = joaat("S_M_Y_Grip_01");
	Local_417[0 /*18*/].f_2 = { -1140.176f, -472.6156f, 33.9209f };
	Local_417[0 /*18*/].f_5 = 37.5363f;
	Local_417[0 /*18*/].f_6 = joaat("S_M_M_MovAlien_01");
	Local_417[1 /*18*/].f_2 = { -1139.2887f, -471.7373f, 33.9631f };
	Local_417[1 /*18*/].f_5 = 23.6991f;
	Local_417[1 /*18*/].f_6 = joaat("S_M_M_MovAlien_01");
	Local_93.f_2 = { -1181.3146f, -506.7412f, 34.5669f };
	Local_93.f_5 = 253.9266f;
	Local_93.f_6 = joaat("U_F_Y_SpyActress");
	Local_81.f_2 = { -1159.3536f, -527.1266f, 31.5364f };
	Local_81.f_5 = 137.443f;
	Local_81.f_6 = joaat("S_M_Y_Grip_01");
	Local_425[0 /*18*/].f_2 = { -1130.6631f, -450.2912f, 34.6384f };
	Local_425[0 /*18*/].f_5 = 170.2838f;
	Local_425[0 /*18*/].f_6 = joaat("IG_Milton");
	Local_425[1 /*18*/].f_2 = { -1128.7494f, -449.877f, 34.6903f };
	Local_425[1 /*18*/].f_5 = 173.7335f;
	Local_425[1 /*18*/].f_6 = joaat("S_M_M_MovAlien_01");
	Local_425[2 /*18*/].f_2 = { -1132.4835f, -449.4888f, 34.6125f };
	Local_425[2 /*18*/].f_5 = 207.1287f;
	Local_425[2 /*18*/].f_6 = joaat("S_M_Y_Grip_01");
	Local_425[3 /*18*/].f_2 = { -1133.2305f, -451.1367f, 34.5651f };
	Local_425[3 /*18*/].f_5 = 222.7364f;
	Local_425[3 /*18*/].f_6 = joaat("S_M_Y_Grip_01");
	Local_425[4 /*18*/].f_2 = { -1128.5414f, -447.952f, 34.7552f };
	Local_425[4 /*18*/].f_5 = 157.4622f;
	Local_425[4 /*18*/].f_6 = joaat("U_M_Y_AntonB");
}

void func_723()//Position - 0x8B94A
{
	Local_418[0 /*18*/].f_2 = { -1175.255f, -501.9372f, 34.5669f };
	Local_418[0 /*18*/].f_5 = 138.1011f;
	Local_418[0 /*18*/].f_7 = -1;
	Local_418[0 /*18*/].f_6 = iLocal_49;
	Local_418[1 /*18*/].f_2 = { -1199.8624f, -493.9804f, 34.5414f };
	Local_418[1 /*18*/].f_5 = 219.7226f;
	Local_418[1 /*18*/].f_7 = -1;
	Local_418[1 /*18*/].f_6 = iLocal_49;
	Local_418[2 /*18*/].f_2 = { -1188.6659f, -510.127f, 34.674f };
	Local_418[2 /*18*/].f_5 = 317.9273f;
	Local_418[2 /*18*/].f_7 = -1;
	Local_418[2 /*18*/].f_6 = iLocal_49;
	Local_418[3 /*18*/].f_2 = { -1180.6191f, -522.2653f, 29.3807f };
	Local_418[3 /*18*/].f_5 = 238.861f;
	Local_418[3 /*18*/].f_7 = -1;
	Local_418[3 /*18*/].f_6 = iLocal_49;
	Local_418[4 /*18*/].f_2 = { -1149.7146f, -512.0564f, 32.6042f };
	Local_418[4 /*18*/].f_5 = 240.8322f;
	Local_418[4 /*18*/].f_7 = -1;
	Local_418[4 /*18*/].f_6 = iLocal_49;
	Local_422[0 /*18*/].f_2 = { -1066.076f, -477.5667f, 35.6377f };
	Local_422[0 /*18*/].f_5 = 209.005f;
	Local_422[0 /*18*/].f_6 = iLocal_49;
	Local_423[0 /*18*/].f_2 = { -1209.3595f, -569.9016f, 26.3524f };
	Local_423[0 /*18*/].f_5 = 222.0723f;
	Local_423[0 /*18*/].f_6 = iLocal_49;
	Local_421[0 /*18*/].f_2 = { -1118.7767f, -440.0241f, 35.238f };
	Local_421[0 /*18*/].f_5 = 120.6108f;
	Local_421[0 /*18*/].f_6 = iLocal_49;
}

void func_727(var uParam0)//Position - 0x8BB67
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*18*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0 /*18*/], false))
			{
				if ((uParam0[iVar0 /*18*/])->f_15 == 22 || (uParam0[iVar0 /*18*/])->f_15 == 23)
				{
					PED::SET_PED_RESET_FLAG((*uParam0)[iVar0 /*18*/], 128, true);
				}
			}
		}
		iVar0++;
	}
}

void func_728(struct<3> Param0, float fParam1)//Position - 0x8BBCD
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > fParam1)
	{
		if (INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
		{
			INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0));
		}
	}
	else if (!INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(Param0));
	}
}

void func_729(int iParam0, var uParam1)//Position - 0x8BC27
{
	int iVar0;
	int iVar1;
	if (*iParam0 != 7 && *iParam0 != 8)
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_106.f_0))
			{
				if (iLocal_404[2] == 1)
				{
					if (__LIB_15__::func_927(&Local_106))
					{
						*uParam1 = 2;
						*iParam0 = 8;
					}
				}
				if (iLocal_404[1] == 1)
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_106.f_0, false) || FIRE::IS_ENTITY_ON_FIRE(Local_106.f_0))
					{
						*uParam1 = 1;
						*iParam0 = 8;
					}
				}
				if (iLocal_404[4] == 1)
				{
					if (bLocal_319 == 0)
					{
						if (fLocal_337 > 225f)
						{
							*uParam1 = 3;
							*iParam0 = 8;
						}
					}
				}
				if (iLocal_404[3] == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_106.f_0, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_106.f_0, false))
						{
							if (bLocal_319 == 0)
							{
								if (fLocal_337 > 100f)
								{
									*uParam1 = 3;
									*iParam0 = 8;
								}
							}
						}
					}
				}
				if (iLocal_404[7] == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_106.f_0, false))
					{
						if (iLocal_354 == 1 && iLocal_353 == 0)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(Local_106.f_0, Local_51, 20f, 16f, 3f, false, true, 0))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_51, 20f, 16f, 3f, false, true, 0))
								{
									iVar0 = __LIB_17__::func_166(PLAYER::PLAYER_PED_ID(), joaat("SECURITY_GUARD"), 0, 0, 28);
									if (ENTITY::DOES_ENTITY_EXIST(iVar0))
									{
										if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
										{
											if (ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_51, 20f, 16f, 3f, false, true, 0))
											{
												*uParam1 = 7;
												*iParam0 = 8;
											}
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_404[6] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
					{
						if (!PED::IS_PED_INJURED(Local_93.f_0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_106.f_0, false))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_93.f_0, Local_106.f_0, false))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(Local_93.f_0, Local_51, 20f, 16f, 3f, false, true, 0))
									{
										*uParam1 = 6;
										*iParam0 = 8;
									}
								}
							}
						}
					}
				}
				if (iLocal_404[5] == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_106.f_0, false))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(Local_106.f_0, Local_51, 20f, 16f, 3f, false, true, 0))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_51, 20f, 16f, 3f, false, true, 0))
							{
								if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
								{
									if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
									{
										iVar1 = __LIB_17__::func_166(PLAYER::PLAYER_PED_ID(), joaat("COP"), 0, 0, 28);
										if (ENTITY::DOES_ENTITY_EXIST(iVar1))
										{
											if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
											{
												if (ENTITY::IS_ENTITY_AT_COORD(iVar1, Local_51, 20f, 16f, 3f, false, true, 0))
												{
													*uParam1 = 5;
													*iParam0 = 8;
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_404[8] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_77.f_0))
					{
						if (PED::IS_PED_INJURED(Local_77.f_0) || ENTITY::IS_ENTITY_DEAD(Local_77.f_0, false))
						{
							*uParam1 = 8;
							*iParam0 = 8;
						}
					}
				}
				if (iLocal_404[9] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_77.f_0))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_77.f_0, PLAYER::PLAYER_PED_ID(), true) || (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_77.f_0, PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RAGDOLL(Local_77.f_0)))
						{
							*uParam1 = 9;
							*iParam0 = 8;
						}
					}
				}
			}
		}
	}
}

int func_730(int iParam0)//Position - 0x8BF27
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (((((((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1205.6428f, -531.99915f, 25.343176f, -1074.1526f, -462.69122f, 67.819405f, 102f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1200.5591f, -581.0037f, 25.353422f, -1072.5278f, -462.32886f, 67.83841f, 104f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1242.7695f, -537.1285f, 26.775068f, -1177.1315f, -481.6676f, 67.787155f, 82f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1182.0178f, -463.7599f, 29.759914f, -1220.5289f, -491.3238f, 67.6606f, 58f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1040.2789f, -524.4053f, 34.03872f, -973.4578f, -488.39133f, 68.32129f, 54f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1063.0798f, -546.8563f, 33.529106f, -1045.2549f, -485.8732f, 68.18091f, 55f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1182.0979f, -587.6457f, 25.24883f, -1004.8041f, -489.6986f, 71.0566f, 32f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1070.7551f, -551.1468f, 32.089046f, -1027.9026f, -536.42566f, 67.63112f, 28f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1093.4142f, -560.92755f, 31.959763f, -1070.7604f, -551.1532f, 67.08801f, 28f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1155.9823f, -594.16736f, 25.453455f, -1093.3368f, -560.97424f, 66.95711f, 28f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1118.2983f, -439.9089f, 34.260933f, -1141.6301f, -442.67178f, 67.49657f, 29f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -996.2485f, -533.8096f, 34.814335f, -1021.3865f, -504.8001f, 67.98534f, 22f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1014.5858f, -545.38763f, 33.79847f, -1039.6738f, -487.3128f, 68.18091f, 22f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1030.173f, -483.18832f, 35.18151f, -1017.08875f, -507.49203f, 68.15067f, 20f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_783()//Position - 0x92471
{
	Global_96891 = 0;
}

void func_785(var uParam0, int iParam1)//Position - 0x9249C
{
	if (iParam1 == 0)
	{
		*uParam0 = 0;
	}
	else if (iParam1 == 1)
	{
		*uParam0 = 2;
	}
	else if (iParam1 == 2)
	{
		*uParam0 = 3;
	}
	else if (iParam1 == 3)
	{
		*uParam0 = 4;
	}
}

void func_795()//Position - 0x95BC9
{
	CUTSCENE::REMOVE_CUTSCENE();
	PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	__LIB_0__::func_325();
	__LIB_0__::func_671(0);
	__LIB_0__::func_424(0);
	__LIB_15__::func_929();
	__LIB_17__::func_173(&uLocal_405, &uLocal_302);
	__LIB_17__::func_172(&uLocal_414, &uLocal_303);
	__LIB_17__::func_218(&Local_118, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
	}
	func_365(&Local_76, 0, 0, 1);
	func_365(&Local_77, 0, 0, 1);
	func_365(&Local_81, 0, 0, 1);
	func_365(&Local_93, 0, 0, 1);
	func_365(&Local_94, 0, 0, 1);
	func_446(&Local_417, 0, 0, 1);
	func_446(&Local_424, 0, 0, 1);
	func_446(&Local_425, 0, 0, 1);
	func_446(&Local_418, 0, 0, 1);
	func_446(&Local_419, 0, 0, 1);
	func_446(&Local_420, 0, 0, 1);
	func_446(&Local_421, 0, 0, 1);
	func_446(&Local_422, 0, 0, 1);
	func_446(&Local_423, 0, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_111.f_0))
	{
		ENTITY::REMOVE_MODEL_HIDE(Local_111.f_1, 1f, Local_111.f_7, false);
	}
	func_447(&Local_108, 0, 1);
	func_447(&Local_109, 0, 1);
	func_447(&Local_110, 0, 1);
	func_447(&Local_111, 0, 1);
	func_447(&Local_112, 0, 1);
	func_447(&Local_114, 0, 1);
	func_447(&Local_115, 0, 1);
	func_447(&Local_113, 0, 0);
	__LIB_40__::func_819(&Local_106, 0, 0);
	func_798(&Local_426, 0, 0);
	if (HUD::DOES_BLIP_EXIST(iLocal_296))
	{
		HUD::REMOVE_BLIP(&iLocal_296);
	}
	__LIB_25__::func_382(&iLocal_393);
	__LIB_25__::func_382(&iLocal_394);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("SECURITY_GUARD"), joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("SECURITY_GUARD"), iLocal_75);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_75);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("jb700"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_48, false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_49, false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("U_M_M_SpyActor"), false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("U_F_Y_SpyActress"), false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("U_M_M_FilmDirector"), false);
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	CAM::DESTROY_ALL_CAMS(false);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
	STREAMING::REMOVE_PTFX_ASSET();
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CAR_THEFT_MOVIE_LOT");
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	TASK::SET_SCENARIO_GROUP_ENABLED("MOVIE_STUDIO_SECURITY", true);
	func_797();
	func_796();
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PED::SET_CREATE_RANDOM_COPS(true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	__LIB_14__::func_804(0);
	__LIB_13__::func_824(39, 0);
	__LIB_13__::func_824(40, 0);
	__LIB_13__::func_824(41, 0);
	__LIB_13__::func_824(42, 0);
	__LIB_13__::func_824(43, 0);
	__LIB_13__::func_824(44, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	__LIB_10__::func_347(21, 1);
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	MISC::SET_STUNT_JUMPS_CAN_TRIGGER(true);
}

void func_796()//Position - 0x95E58
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1562636567))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(1562636567, 0);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-611684898))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(-611684898, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-449343164))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(-449343164, 0);
	}
}

void func_797()//Position - 0x95EA3
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1382347031))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1382347031, 0f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1382347031, 0, false, true);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1668106976))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1668106976, 0f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1668106976, 0, false, true);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1562636567))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1562636567, 0f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1562636567, 0, false, true);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-611684898))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-611684898, 0f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-611684898, 0, false, true);
	}
}

void func_798(var uParam0, int iParam1, int iParam2)//Position - 0x95F3B
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		__LIB_40__::func_819(uParam0[iVar0 /*19*/], iParam1, iParam2);
		iVar0++;
	}
}

void func_801()//Position - 0x960AB
{
	int iVar0;
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		if (!__LIB_0__::func_134())
		{
			iVar0 = __LIB_0__::func_380();
			if (iVar0 != -1)
			{
				if (!func_312(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_16__::func_4();
		}
	}
}

