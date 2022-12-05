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
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	bool bLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	float fLocal_55 = 0f;
	float fLocal_56 = 0f;
	struct<3> Local_57 = { 0, 0, 0 } ;
	struct<3> Local_58 = { 0, 0, 0 } ;
	int iLocal_59 = 0;
	struct<5> Local_60[31];
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	struct<5> Local_68[48];
	float fLocal_69 = 0f;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	struct<61> Local_82 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	char* sLocal_87 = NULL;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	struct<5> Local_90 = { 0, 0, 0, 0, 0 } ;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 21;
	var uLocal_94 = 6;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	struct<3> Local_100 = { 0, 0, 0 } ;
	struct<3> Local_101 = { 0, 0, 0 } ;
	int* iLocal_102 = NULL;
	struct<3> Local_103 = { 0, 0, 0 } ;
	struct<3> Local_104 = { 0, 0, 0 } ;
	struct<3> Local_105 = { 0, 0, 0 } ;
	struct<3> Local_106 = { 0, 0, 0 } ;
	struct<3> Local_107 = { 0, 0, 0 } ;
	struct<3> Local_108 = { 0, 0, 0 } ;
	struct<3> Local_109 = { 0, 0, 0 } ;
	struct<3> Local_110 = { 0, 0, 0 } ;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	struct<3> Local_113 = { 0, 0, 0 } ;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int* iLocal_124 = NULL;
	int* iLocal_125 = NULL;
	int* iLocal_126 = NULL;
	int* iLocal_127 = NULL;
	int* iLocal_128 = NULL;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	struct<3> Local_131 = { 0, 0, 0 } ;
	int iLocal_132 = 0;
	var uLocal_133 = 16;
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
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
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
	int iLocal_319 = 0;
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
	struct<3> Local_331 = { 0, 0, 0 } ;
	struct<3> Local_332 = { 0, 0, 0 } ;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	struct<3> Local_335 = { 0, 0, 0 } ;
	struct<19> Local_336[3];
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	struct<2> Local_342 = { 0, 0 } ;
	var uLocal_343 = 15;
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
	int* iLocal_395 = NULL;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	struct<3> Local_398 = { 0, 0, 0 } ;
	struct<3> Local_399 = { 0, 0, 0 } ;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	struct<61> Local_406 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	uLocal_38 = __LIB_11__.func_149(58);
	iLocal_39 = joaat("felon2");
	iLocal_49 = -1;
	iLocal_52 = -1;
	fLocal_55 = 0.5f;
	fLocal_56 = 0f;
	iLocal_62 = 1;
	fLocal_69 = 160f;
	iLocal_73 = 1;
	iLocal_74 = 65;
	iLocal_75 = 49;
	iLocal_76 = 64;
	iLocal_80 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_81 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_83 = 1;
	Local_100 = { 572.4306f, -1765.0028f, 28.1693f };
	Local_101 = { -1116.9021f, 281.7206f, 64.2895f };
	Local_103 = { 550.3759f, -1772.4634f, 32.4478f };
	Local_104 = { -1105.9624f, 292.88455f, 63.5851f };
	Local_105 = { -1116f, 309f, 67f };
	Local_106 = { -1116.1172f, 318.26044f, 65.9777f };
	Local_107 = { 567.3073f, -1762.9607f, 28.1695f };
	Local_108 = { 565.4832f, -1767.7043f, 28.147f };
	Local_109 = { -1102.4427f, 284.4827f, 63.0251f };
	Local_110 = { -1069.3167f, 236.0038f, 62.3195f };
	Local_113 = { -1116.31f, 317.28f, 65.97f };
	Local_131 = { 558.09f, -1765.39f, 28.86f };
	iLocal_132 = 4;
	iLocal_333 = AUDIO::GET_SOUND_ID();
	iLocal_334 = AUDIO::GET_SOUND_ID();
	Local_335 = { -1107.8625f, 296.1609f, 65.3295f };
	Local_398 = { 563.76f, -1773.86f, 28.36f };
	Local_399 = { 0f, 0.05f, -110.7f };
	Local_82 = { ScriptParam_406 };
	__LIB_20__.func_264(&Local_82);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_82.f_59))
	{
		PED::TAKE_OWNERSHIP_OF_SYNCHRONIZED_SCENE(Local_82.f_59);
	}
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__.func_135("Force cleanup [TERMINATING]");
		__LIB_40__.func_605(1);
		func_648();
	}
	__LIB_36__.func_488(58, 2, 0);
	func_638();
	if (__LIB_0__.func_294())
	{
		__LIB_32__.func_757(&Local_82, 1, 1, 0);
		iVar0 = __LIB_0__.func_315();
		if (Global_94618 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				__LIB_0__.func_370(Local_107, 161.173f, 1, 0);
				func_566(0);
				break;
			case 1:
				__LIB_0__.func_370(Local_108, 66.0379f, 1, 0);
				func_566(2);
				break;
			case 2:
				__LIB_0__.func_370(Local_109, 40.6354f, 1, 0);
				func_566(3);
				break;
			case 3:
				__LIB_0__.func_370(Local_110, 24.0453f, 1, 0);
				func_566(6);
				break;
			}
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_SE", 0);
		__LIB_39__.func_473(Local_82.f_9, 0, 0, 0, 0, 0);
		func_530();
		switch (iLocal_83)
		{
			case 1:
				func_523();
				break;
			case 2:
				func_488();
				break;
			case 3:
				func_440();
				break;
			case 4:
				func_432();
				break;
			case 5:
				func_404();
				break;
			case 6:
				func_325();
				break;
			case 7:
				func_312();
				break;
			case 8:
				func_302();
				break;
			case 9:
				func_263();
				break;
			case 10:
				func_257();
				break;
			case 11:
				func_252();
				break;
			case 12:
				func_231();
				break;
			case 13:
				func_35();
				break;
			case 14:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x3C7
{
	switch (iLocal_85)
	{
		case 0:
			func_34();
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			func_32();
			__LIB_6__.func_771();
			AUDIO::TRIGGER_MUSIC_EVENT("JOSH3_MISSION_FAIL");
			func_26();
			switch (iLocal_86)
			{
				case 0:
					break;
				case 1:
					sLocal_87 = "JOSH3_F1";
					break;
				case 2:
					sLocal_87 = "JOSH3_F2";
					break;
				case 3:
					sLocal_87 = "JOSH3_F3";
					break;
				case 4:
					sLocal_87 = "JOSH3_F5";
					break;
				case 5:
					sLocal_87 = "JOSH3_F6";
					break;
				case 6:
					sLocal_87 = "JOSH3_F7";
					break;
				case 7:
					sLocal_87 = "JOSH3_F8";
					break;
				case 8:
					sLocal_87 = "JOSH3_F9";
					break;
				case 9:
					sLocal_87 = "JOSH3_F4";
					break;
				case 10:
					sLocal_87 = "JOSH3_F10";
					break;
			}
			if (iLocal_86 == 0)
			{
				__LIB_40__.func_605(1);
			}
			else
			{
				__LIB_41__.func_434(sLocal_87, 1);
			}
			break;
		case 1:
			if (__LIB_0__.func_204())
			{
				func_22();
				func_18(1);
				func_11(1);
				func_10();
				__LIB_18__.func_191(22, 0, 0, 1, 0);
				__LIB_18__.func_191(23, 0, 0, 1, 0);
				func_648();
			}
			break;
	}
}

void func_10()//Position - 0x4847
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_330))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_330, false);
		iLocal_330 = 0;
	}
}

void func_11(int iParam0)//Position - 0x4865
{
	if (iParam0 == 1)
	{
		__LIB_0__.func_0(&iLocal_395);
	}
	else
	{
		if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
		{
			func_13();
		}
		else
		{
			func_26();
		}
		__LIB_0__.func_124(&iLocal_395, 1, 0, 1);
	}
}

void func_13()//Position - 0x48ED
{
	if ((__LIB_0__.func_121(iLocal_395) && !__LIB_4__.func_465(iLocal_395, joaat("SCRIPT_TASK_WANDER_STANDARD"))) && !__LIB_4__.func_465(iLocal_395, joaat("SCRIPT_TASK_SMART_FLEE_PED")))
	{
		PED::SET_PED_KEEP_TASK(iLocal_395, true);
		TASK::TASK_WANDER_STANDARD(iLocal_395, 40000f, 0);
	}
}

void func_18(int iParam0)//Position - 0x49ED
{
	if (iParam0 == 1)
	{
		__LIB_11__.func_32(&iLocal_129);
		__LIB_11__.func_32(&iLocal_102);
	}
	else
	{
		__LIB_0__.func_106(&iLocal_129);
		__LIB_0__.func_106(&iLocal_102);
	}
}

void func_22()//Position - 0x4B18
{
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	if (iLocal_84 == 0)
	{
		iLocal_83++;
	}
	else
	{
		iLocal_83 = iLocal_84;
	}
	iLocal_84 = 0;
	iLocal_85 = 0;
}

void func_26()//Position - 0x4BCA
{
	if (__LIB_0__.func_121(iLocal_395))
	{
		TASK::CLEAR_PED_TASKS(iLocal_395);
		PED::SET_PED_KEEP_TASK(iLocal_395, true);
		if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_395, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
			__LIB_20__.func_243(iLocal_395, 1);
		}
		else
		{
			TASK::TASK_WANDER_STANDARD(iLocal_395, 40000f, 0);
		}
	}
}

void func_32()//Position - 0x4ED1
{
	__LIB_0__.func_523(&iLocal_124);
	__LIB_0__.func_523(&iLocal_125);
	__LIB_0__.func_523(&iLocal_126);
	__LIB_0__.func_523(&iLocal_127);
	__LIB_0__.func_523(&iLocal_128);
}

void func_34()//Position - 0x4F1C
{
	iLocal_89 = 0;
	iLocal_117 = 0;
	iLocal_116 = 0;
	iLocal_85 = 1;
}

void func_35()//Position - 0x4F34
{
	func_36(90, 1);
	func_648();
}

void func_36(int iParam0, bool bParam1)//Position - 0x4F47
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
	__LIB_39__.func_389(iVar0, 1, 0, 0);
	__LIB_0__.func_46(0, 0);
	MemCopy(&sVar1, {__LIB_0__.func_339(iVar0)}, 4);
	__LIB_0__.func_44(&sVar1, __LIB_32__.func_721());
	func_63();
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

void func_63()//Position - 0x60F3
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
			iVar3 = __LIB_20__.func_509(iVar1);
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

int func_64(int iParam0, int iParam1, int iParam2)//Position - 0x61B4
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
	if (!func_181(iParam0, iParam1, iParam2))
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
				func_64(iParam0, iVar1, uVar2[iVar1]);
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
		uVar6 = { __LIB_18__.func_180(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__.func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
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

int func_65(int iParam0, int iParam1, int iParam2)//Position - 0x6370
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
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

int func_67(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x6437
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
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, func_73(iParam0, iVar0, -1), -1) };
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
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_67(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_67(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_67(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_67(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_67(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_67(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
					func_67(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

int func_73(int iParam0, int iParam1, int iParam2)//Position - 0x7474
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

int func_107(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xDB4F
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
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

int func_181(int iParam0, int iParam1, int iParam2)//Position - 0x241A2
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
				if (!func_181(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_181(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_181(iParam0, 14, iVar4))
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
	else if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_231()//Position - 0x2750D
{
	switch (iLocal_85)
	{
		case 0:
			func_34();
			__LIB_18__.func_191(23, 0, 0, 1, 0);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_JOSH_HOUSE_BURNING", false, false);
			__LIB_0__.func_203(&uLocal_133, 3, 0, "JOSH", 0, 1);
			iLocal_315 = 0;
			break;
		case 1:
			if (iLocal_315 == 0)
			{
				if (func_249(1) && __LIB_35__.func_985(&uLocal_133, 58, "JOSH3AU", "JOSH3_CALL", 8, 1, 0, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 12f, 1);
					iLocal_315 = 1;
				}
			}
			else if (func_249(1))
			{
				iLocal_85 = 2;
			}
			break;
		case 2:
			func_22();
			break;
	}
}

int func_249(int iParam0)//Position - 0x27D27
{
	if (iLocal_89 == 1)
	{
		return 0;
	}
	if ((iParam0 == 1 && HUD::IS_MESSAGE_BEING_DISPLAYED()) && MISC::GET_PROFILE_SETTING(203) > 0)
	{
		return 0;
	}
	if (__LIB_0__.func_75())
	{
		return 0;
	}
	return 1;
}

void func_252()//Position - 0x27E24
{
	switch (iLocal_85)
	{
		case 0:
			func_34();
			__LIB_0__.func_210("JOSH3_11", 7500, 1);
			break;
		case 1:
			func_255();
			if (__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_105, 100f, 1))
			{
				PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				func_253();
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JOSH3_COPS_LOST_RADIO");
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JOSH3_COPS_LOST");
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
				}
				iLocal_85 = 2;
			}
			break;
		case 2:
			func_22();
			break;
	}
}

void func_253()//Position - 0x27ED7
{
	if (!FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()) && __LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_331, 2f, 1))
	{
		FIRE::START_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
	}
}

void func_255()//Position - 0x27F26
{
	if (iLocal_313 == 0 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JOSH3_COPS");
		iLocal_313 = 1;
	}
}

void func_257()//Position - 0x27F6A
{
	switch (iLocal_85)
	{
		case 0:
			func_34();
			iLocal_310 = 0;
			iLocal_311 = 0;
			iLocal_313 = 0;
			func_262(0);
			iLocal_321 = MISC::GET_GAME_TIMER();
			iLocal_322 = MISC::GET_GAME_TIMER();
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PED::SET_CREATE_RANDOM_COPS(true);
			__LIB_0__.func_367(0);
			break;
		case 1:
			if ((MISC::GET_GAME_TIMER() - iLocal_322) > 3000 && !PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				if (iLocal_404 == 1)
				{
					iLocal_404 = 0;
					RECORDING::REPLAY_STOP_EVENT();
				}
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JOSH_3_01", 0f);
				PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				iLocal_85 = 2;
			}
			else if (!__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_105, 100f, 1))
			{
				PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				__LIB_0__.func_498(774);
				iLocal_84 = 12;
				iLocal_85 = 2;
			}
			else
			{
				func_258();
				func_253();
				func_255();
				if (iLocal_321 > -1 && (MISC::GET_GAME_TIMER() - iLocal_321) > 20000)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					iLocal_321 = -1;
				}
			}
			break;
		case 2:
			func_22();
			break;
	}
}

void func_258()//Position - 0x280B4
{
	if (func_249(1))
	{
		if (iLocal_310 == 0)
		{
			if (__LIB_35__.func_984(&uLocal_133, "JOSH3AU", "JOSH3_FIRE", 8, 0, 0, 0))
			{
				iLocal_310 = 1;
			}
		}
		else if (iLocal_311 == 0)
		{
			__LIB_0__.func_210("JOSH3_07", 7500, 1);
			iLocal_311 = 1;
		}
	}
}

void func_262(bool bParam0)//Position - 0x281EB
{
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1107.01f, 289.38f, 64.76f, bParam0, 0f, false);
	}
	else
	{
		OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1107.01f, 289.38f, 64.76f, bParam0, 0f, 0f, 0f);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1101.62f, 290.36f, 64.76f, 5f, joaat("prop_lrggate_01c_r"), false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_r"), -1101.62f, 290.36f, 64.76f, bParam0, 0f, false);
	}
	else
	{
		OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_lrggate_01c_r"), -1101.62f, 290.36f, 64.76f, bParam0, 0f, 0f, 0f);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1137.05f, 295.59f, 67.18f, 5f, joaat("prop_lrggate_01c_r"), false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_r"), -1137.05f, 295.59f, 67.18f, bParam0, 0f, false);
	}
	else
	{
		OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_lrggate_01c_r"), -1137.05f, 295.59f, 67.18f, bParam0, 0f, 0f, 0f);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1138.64f, 300.82f, 67.18f, 5f, joaat("prop_lrggate_01c_l"), false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1138.64f, 300.82f, 67.18f, bParam0, 0f, false);
	}
	else
	{
		OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1138.64f, 300.82f, 67.18f, bParam0, 0f, 0f, 0f);
	}
	if (bParam0 == 1)
	{
	}
}

void func_263()//Position - 0x2835D
{
	int iVar0;
	GRAPHICS::SET_DISABLE_PETROL_DECALS_RECYCLING_THIS_FRAME();
	switch (iLocal_85)
	{
		case 0:
			func_34();
			Local_336[2 /*19*/] = { -1113.1f, 326f, 67.1f };
			Local_336[2 /*19*/].f_3 = { 1f, 0.2f, 158.7f };
			Local_336[2 /*19*/].f_6 = { -1113.1f, 326f, 67.1f };
			Local_336[2 /*19*/].f_9 = { 1f, 0.2f, 158.7f };
			Local_336[2 /*19*/].f_12 = 30f;
			Local_336[2 /*19*/].f_18 = 0;
			Local_336[0 /*19*/] = { -1132.1968f, 298.68814f, 65.896484f };
			Local_336[0 /*19*/].f_3 = { 0.093347f, 0.3f, -71.29575f };
			Local_336[0 /*19*/].f_6 = { -1132.1968f, 298.68814f, 65.896484f };
			Local_336[0 /*19*/].f_9 = { 2.026602f, 0.300006f, -21.158085f };
			Local_336[0 /*19*/].f_12 = 30f;
			Local_336[0 /*19*/].f_18 = 2;
			Local_336[1 /*19*/] = { -1126.4562f, 324.4242f, 69.34691f };
			Local_336[1 /*19*/].f_3 = { -25.112604f, 0.626431f, 177.44006f };
			Local_336[1 /*19*/].f_6 = { -1126.4562f, 324.4242f, 69.34691f };
			Local_336[1 /*19*/].f_9 = { -25.112606f, 0.626431f, -161.70055f };
			Local_336[1 /*19*/].f_12 = 30f;
			Local_336[1 /*19*/].f_18 = 0;
			iLocal_340 = 0;
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 3)
			{
				Local_336[iVar0 /*19*/].f_13 = 0;
				func_301(iVar0);
				iVar0++;
			}
			Local_342.f_0 = 0;
			Local_342.f_1 = -1;
			iLocal_339 = 0;
			iLocal_341 = -1;
			iLocal_325 = -1;
			iLocal_324 = MISC::GET_GAME_TIMER();
			iLocal_405 = 0;
			break;
		case 1:
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
			if (__LIB_6__.func_841(1000))
			{
				iLocal_339 = 1;
				iLocal_85 = 2;
			}
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()) && iLocal_340 == 0)
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) > 0)
					{
						ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
				else
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if ((((Local_336[iVar0 /*19*/].f_13 == 0 && iVar0 > iLocal_341) && (MISC::GET_GAME_TIMER() - iLocal_324) > 500) && !__LIB_0__.func_86(Local_336[iVar0 /*19*/].f_14)) && func_297(Local_336[iVar0 /*19*/].f_14, Local_336[iVar0 /*19*/].f_17))
						{
							func_292(iVar0);
						}
						iVar0++;
					}
					if (Local_336[2 /*19*/].f_13 == 1)
					{
						if (iLocal_325 == -1)
						{
							iLocal_325 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_325) > 1500)
						{
							iLocal_85 = 2;
						}
						if ((iLocal_405 == 0 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) && (MISC::GET_GAME_TIMER() - iLocal_325) > 1200)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							iLocal_405 = 1;
						}
					}
					func_290(0);
				}
			}
			func_282();
			break;
		case 2:
			func_22();
			if (iLocal_339 == 1)
			{
				__LIB_10__.func_696(500, 1);
				AUDIO::STOP_SOUND(iLocal_333);
				AUDIO::STOP_STREAM();
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 3f, 1);
			func_276();
			func_10();
			FIRE::STOP_FIRE_IN_RANGE(Local_105, 100f);
			MISC::CLEAR_AREA_OF_PROJECTILES(Local_105, 100f, 0);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_105, 100f);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_JOSH_HOUSE_BURNING", true, true);
			CAM::RENDER_SCRIPT_CAMS(false, false, 0, true, false, 0);
			CAM::DESTROY_ALL_CAMS(false);
			func_290(1);
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((__LIB_4__.func_305(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_105, 1) - 180f));
				}
				else
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				}
			}
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_334, "HOUSE_FIRE", Local_105, "JOSH_03_SOUNDSET", false, 0, false);
			__LIB_18__.func_191(22, 1, 0, 1, 0);
			__LIB_18__.func_191(23, 1, 0, 1, 0);
			AUDIO::TRIGGER_MUSIC_EVENT("JOSH3_HOUSE_EXPLODE");
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_11__.func_325(&uLocal_343, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
			{
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "reaction@shellshock@unarmed", "back_long", 1000f, -8f, -1, 32768, 0.2f, false, false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
			}
			STREAMING::REMOVE_ANIM_DICT("reaction@shellshock@unarmed");
			if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
			{
				CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.15f);
			}
			SYSTEM::WAIT(100);
			__LIB_0__.func_84(500, 0);
			__LIB_32__.func_576(1, 0, 1, 0);
			GRAPHICS::ANIMPOSTFX_PLAY("ExplosionJosh3", 0, false);
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_josh3_light_explosion", Local_335, 0f, 0f, 0f, 1f, false, false, false);
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_josh3_exp_debris", Local_335, 0f, 0f, 0f, 1f, false, false, false);
			if (STREAMING::STREAMVOL_IS_VALID(iLocal_403))
			{
				STREAMING::STREAMVOL_DELETE(iLocal_403);
			}
			if (((__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::GET_ENTITY_HEALTH(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) <= 0) && __LIB_11__.func_325(&uLocal_343, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
			{
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			break;
	}
}

void func_276()//Position - 0x28D28
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_60.f_0)
	{
		FIRE::REMOVE_SCRIPT_FIRE(Local_60[iVar0 /*5*/]);
		Local_60[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	func_277(0);
	iVar0 = 0;
	while (iVar0 < Local_68.f_0)
	{
		if (HUD::DOES_BLIP_EXIST(Local_68[iVar0 /*5*/].f_3))
		{
			HUD::REMOVE_BLIP(&(Local_68[iVar0 /*5*/].f_3));
		}
		Local_68[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iLocal_52 = -1;
}

void func_277(bool bParam0)//Position - 0x28D99
{
	int iVar0;
	bLocal_48 = true;
	iLocal_52 = 0;
	iLocal_50 = -1;
	iLocal_67 = 0;
	iLocal_67 = 0;
	bLocal_61 = false;
	if (bParam0 == 0)
	{
		iLocal_45 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_68.f_0)
	{
		GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_68[iVar0 /*5*/], 1f);
		if (!HUD::DOES_BLIP_EXIST(Local_68[iVar0 /*5*/].f_3))
		{
			if (!__LIB_0__.func_78(Local_68[iVar0 /*5*/], 0f, 0f, 0f, 0))
			{
				iLocal_52++;
				Local_68[iVar0 /*5*/].f_3 = __LIB_0__.func_392(Local_68[iVar0 /*5*/], 0);
				HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_68[iVar0 /*5*/].f_3, true);
				HUD::SET_BLIP_SCALE(Local_68[iVar0 /*5*/].f_3, 0.4f);
				HUD::SHOW_HEIGHT_ON_BLIP(Local_68[iVar0 /*5*/].f_3, false);
				if (!bParam0)
				{
					HUD::SET_BLIP_ALPHA(Local_68[iVar0 /*5*/].f_3, 0);
				}
				HUD::SET_BLIP_COLOUR(Local_68[iVar0 /*5*/].f_3, 5);
			}
		}
		else
		{
			Local_68[iVar0 /*5*/] = { HUD::GET_BLIP_COORDS(Local_68[iVar0 /*5*/].f_3) };
			if (!bParam0)
			{
				HUD::SET_BLIP_ALPHA(Local_68[iVar0 /*5*/].f_3, 0);
			}
			else
			{
				HUD::SET_BLIP_ALPHA(Local_68[iVar0 /*5*/].f_3, 255);
			}
			iLocal_52++;
		}
		Local_68[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_60.f_0)
	{
		Local_60[iVar0 /*5*/].f_1 = { 0f, 0f, 0f };
		Local_60[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
}

void func_282()//Position - 0x28FA8
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_30__.func_869();
		func_288();
		func_286();
		func_283();
	}
}

void func_283()//Position - 0x28FCC
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	Var1 = { 0f, 0f, 0f };
	if (bLocal_61 == 0)
	{
		if (FIRE::GET_CLOSEST_FIRE_POS(&Var1, Local_68[0 /*5*/]))
		{
			fVar2 = 0f;
			fVar5 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_68.f_0)
			{
				if (iVar0 > 0)
				{
					fVar2 = (fVar2 + MISC::GET_DISTANCE_BETWEEN_COORDS(Local_68[(iVar0 - 1) /*5*/], Local_68[iVar0 /*5*/], true));
				}
				if (Local_68[iVar0 /*5*/].f_4)
				{
					if (FIRE::GET_CLOSEST_FIRE_POS(&Var1, Local_68[iVar0 /*5*/]))
					{
						fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_68[iVar0 /*5*/], Var1, true);
						if (fVar4 < fVar5)
						{
							fVar5 = fVar4;
							fVar6 = fVar2;
							iVar3 = iVar0;
						}
					}
				}
				iVar0++;
			}
			if (fVar5 < fLocal_55)
			{
				iVar3 = iVar3;
				bLocal_61 = true;
				iLocal_63 = MISC::GET_GAME_TIMER();
				fVar6 = fVar6;
				Local_58 = { Local_68[iVar3 /*5*/] };
				iLocal_59 = iVar3;
				iLocal_64 = iVar3 * 2;
				iLocal_66 = iLocal_64;
				iLocal_67 = iLocal_64;
				if (iLocal_67 < 0)
				{
					iLocal_67 = 0;
				}
				if (iLocal_66 >= Local_68.f_0 * 2)
				{
					iLocal_66 = (Local_68.f_0 * 2 - 1);
				}
			}
		}
	}
	if (bLocal_61 == 1)
	{
		GRAPHICS::SET_DISABLE_PETROL_DECALS_IGNITING_THIS_FRAME();
		fVar7 = (SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_63)) / fLocal_69);
		iVar8 = (SYSTEM::FLOOR((fVar7 / (1f / 2f))) - 1);
		iVar9 = (iLocal_64 + iVar8);
		iVar10 = (iLocal_64 - iVar8);
		if (iVar9 >= 96)
		{
			iVar9 = 95;
		}
		if (iVar10 < 0)
		{
			iVar10 = 0;
		}
		if (iVar9 > iLocal_66)
		{
			iVar0 = iLocal_66 + 1;
			while (iVar0 <= iVar9)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_68.f_0)
				{
					if (Local_68[iVar11 /*5*/].f_4)
					{
						func_284(iVar0, 1);
					}
					else
					{
						iVar9 = (iVar0 - 1);
						iVar0 = iVar9 + 1;
					}
				}
				iVar0++;
			}
			iLocal_66 = iVar9;
		}
		if (iVar10 < iLocal_67)
		{
			iVar0 = (iLocal_67 - 1);
			while (iVar0 >= iVar10)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_68.f_0)
				{
					if (Local_68[iVar11 /*5*/].f_4)
					{
						func_284(iVar0, 1);
					}
					else
					{
						iVar10 = iVar0 + 1;
						iVar0 = (iVar10 - 1);
					}
				}
				iVar0 = (iVar0 + -1);
			}
			iLocal_67 = iVar10;
		}
		iVar0 = 0;
		while (iVar0 < Local_60.f_0)
		{
			if ((MISC::GET_GAME_TIMER() - Local_60[iVar0 /*5*/].f_4) > 1000)
			{
				GRAPHICS::FADE_DECALS_IN_RANGE(Local_60[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((MISC::GET_GAME_TIMER() - Local_60[iVar0 /*5*/].f_4) > 6000)
			{
				FIRE::REMOVE_SCRIPT_FIRE(Local_60[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_284(int iParam0, bool bParam1)//Position - 0x29228
{
	int iVar0;
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 48)
			{
				__LIB_30__.func_868(Local_68[(iParam0 / 2) /*5*/] + Local_68[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_56, fLocal_56, fLocal_56), bParam1);
			}
		}
		else if ((iParam0 / 2) < 48)
		{
			__LIB_30__.func_868(Local_68[(iParam0 / 2) /*5*/] + Vector(fLocal_56, fLocal_56, fLocal_56), bParam1);
		}
	}
}

void func_286()//Position - 0x29316
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	if (bLocal_48)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (iVar1 == joaat("WEAPON_PETROLCAN"))
		{
			if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_54 == 0)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 8f, 4);
					iLocal_54 = MISC::GET_GAME_TIMER() + 250;
				}
				if (MISC::GET_GAME_TIMER() > iLocal_54)
				{
					if (!bLocal_44)
					{
						fVar4 = 9999.9f;
						Local_57 = { __LIB_29__.func_745() };
						iVar0 = 0;
						while (iVar0 < Local_68.f_0)
						{
							if (HUD::DOES_BLIP_EXIST(Local_68[iVar0 /*5*/].f_3))
							{
								fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_57, HUD::GET_BLIP_COORDS(Local_68[iVar0 /*5*/].f_3), true);
								fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_68[iVar0 /*5*/], HUD::GET_BLIP_COORDS(Local_68[iVar0 /*5*/].f_3), true);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_68[iVar0 /*5*/] = { Local_57 };
									}
								}
								if (fVar2 < fVar4)
								{
									fVar4 = fVar2;
									iVar5 = iVar0;
								}
							}
							iVar0++;
						}
						if (fVar4 < 2f)
						{
							if (iLocal_50 != -1)
							{
								if (MISC::ABSI((iLocal_51 - iVar5)) > 1)
								{
									iLocal_51 = -1;
								}
								if (iLocal_51 == -1)
								{
									iLocal_51 = iLocal_50;
								}
								if (MISC::ABSI((iLocal_51 - iVar5)) < 3 && MISC::ABSI((iLocal_51 - iVar5)) > 0)
								{
									if (iLocal_51 < iVar5)
									{
										iVar6 = iLocal_51;
										while (iVar6 <= (iVar5 - 1))
										{
											if (HUD::DOES_BLIP_EXIST(Local_68[iVar6 /*5*/].f_3))
											{
												if (HUD::GET_BLIP_ALPHA(Local_68[iVar6 /*5*/].f_3) > 0)
												{
													HUD::SET_BLIP_ALPHA(Local_68[iVar6 /*5*/].f_3, 0);
													Local_68[iVar6 /*5*/].f_4 = 1;
													iLocal_52 = (iLocal_52 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_51)
										{
											if (HUD::DOES_BLIP_EXIST(Local_68[iVar6 /*5*/].f_3))
											{
												if (HUD::GET_BLIP_ALPHA(Local_68[iVar6 /*5*/].f_3) > 0)
												{
													HUD::SET_BLIP_ALPHA(Local_68[iVar6 /*5*/].f_3, 0);
													Local_68[iVar6 /*5*/].f_4 = 1;
													iLocal_52 = (iLocal_52 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_51 = iLocal_50;
								}
								if (iVar5 == 0)
								{
									if (HUD::DOES_BLIP_EXIST(Local_68[iVar5 /*5*/].f_3))
									{
										if (HUD::GET_BLIP_ALPHA(Local_68[iVar5 /*5*/].f_3) > 0)
										{
											HUD::SET_BLIP_ALPHA(Local_68[iVar5 /*5*/].f_3, 0);
											Local_68[iVar5 /*5*/].f_4 = 1;
											iLocal_52 = (iLocal_52 - 1);
										}
									}
								}
								if (iVar5 == 47)
								{
									if (HUD::DOES_BLIP_EXIST(Local_68[iVar5 /*5*/].f_3))
									{
										if (HUD::GET_BLIP_ALPHA(Local_68[iVar5 /*5*/].f_3) > 0)
										{
											HUD::SET_BLIP_ALPHA(Local_68[iVar5 /*5*/].f_3, 0);
											Local_68[iVar5 /*5*/].f_4 = 1;
											iLocal_52 = (iLocal_52 - 1);
										}
									}
								}
								if (iVar5 < 47)
								{
									if (__LIB_0__.func_86(Local_68[iVar5 + 1 /*5*/]))
									{
										if (HUD::DOES_BLIP_EXIST(Local_68[iVar5 /*5*/].f_3))
										{
											if (HUD::GET_BLIP_ALPHA(Local_68[iVar5 /*5*/].f_3) > 0)
											{
												HUD::SET_BLIP_ALPHA(Local_68[iVar5 /*5*/].f_3, 0);
												Local_68[iVar5 /*5*/].f_4 = 1;
												iLocal_52 = (iLocal_52 - 1);
											}
										}
									}
								}
							}
							iLocal_50 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_50 = -1;
				iLocal_51 = -1;
				iLocal_54 = 0;
			}
		}
	}
}

void func_288()//Position - 0x29677
{
	int iVar0;
	if (iLocal_46)
	{
		if (bLocal_61)
		{
			iVar0 = 0;
			while (iVar0 < Local_60.f_0)
			{
				FIRE::REMOVE_SCRIPT_FIRE(Local_60[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_46 = 0;
		bLocal_61 = true;
		iLocal_63 = MISC::GET_GAME_TIMER();
		iVar0 = 0;
		while (iVar0 < Local_68.f_0)
		{
			Local_68[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_49 != -1)
		{
			iLocal_67 = iLocal_49;
			iLocal_66 = iLocal_49;
			iLocal_64 = iLocal_49;
		}
		else
		{
			iLocal_67 = -1;
			iLocal_66 = -1;
			iLocal_64 = iLocal_49;
		}
		iLocal_65 = 1;
	}
}

void func_290(int iParam0)//Position - 0x2970D
{
	if (Local_342.f_0 == 0)
	{
		if (iParam0 == 1)
		{
			func_291(iParam0);
		}
		else if (Local_342.f_1 == -1)
		{
			if (func_297(Local_331, 1f))
			{
				Local_342.f_1 = MISC::GET_GAME_TIMER();
			}
		}
		else if ((MISC::GET_GAME_TIMER() - Local_342.f_1) > 500)
		{
			func_291(iParam0);
		}
	}
}

void func_291(int iParam0)//Position - 0x29763
{
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_330))
	{
		iLocal_330 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_josh3_fires", Local_331, Local_332, 1f, false, false, false, false);
		GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_josh3_explosion", Local_331, Local_332, 1f, false, false, false);
		if (iParam0 == 0)
		{
			if (CAM::DOES_CAM_EXIST(iLocal_337))
			{
				CAM::SHAKE_CAM(iLocal_337, "SMALL_EXPLOSION_SHAKE", 0.25f);
			}
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_333, "BBQ_EXPLODE", Local_331, "JOSH_03_SOUNDSET", false, 0, false);
			AUDIO::TRIGGER_MUSIC_EVENT("JOSH3_HOUSE_EXPLODE");
		}
	}
	Local_342.f_0 = 1;
}

void func_292(int iParam0)//Position - 0x297F3
{
	struct<3> Var0;
	float fVar1;
	if (!CAM::DOES_CAM_EXIST(iLocal_337))
	{
		iLocal_337 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
	}
	if ((iParam0 == 2 && Local_336[0 /*19*/].f_13 == 0) && Local_336[1 /*19*/].f_13 == 0)
	{
		Local_336[iParam0 /*19*/].f_3 = { 1f, 0.2f, 150f };
	}
	CAM::SET_CAM_PARAMS(iLocal_337, Local_336[iParam0 /*19*/], Local_336[iParam0 /*19*/].f_3, Local_336[iParam0 /*19*/].f_12, 0, Local_336[iParam0 /*19*/].f_18, Local_336[iParam0 /*19*/].f_18, 2);
	CAM::SET_CAM_PARAMS(iLocal_337, Local_336[iParam0 /*19*/].f_6, Local_336[iParam0 /*19*/].f_9, Local_336[iParam0 /*19*/].f_12, 5000, Local_336[iParam0 /*19*/].f_18, Local_336[iParam0 /*19*/].f_18, 2);
	Local_336[iParam0 /*19*/].f_13 = 1;
	iLocal_341 = iParam0;
	if (iLocal_340 == 0)
	{
		func_294(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_11__.func_325(&uLocal_343, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
			{
				__LIB_10__.func_701(PLAYER::PLAYER_PED_ID(), Local_104, 203.9533f, 0, 1);
			}
			else
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				fVar1 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Local_105.f_0, Local_105.f_1);
				fVar1 = (fVar1 + 180f);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar1);
			}
		}
		iLocal_340 = 1;
	}
}

void func_294(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x299CE
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
			switch (__LIB_20__.func_728())
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

int func_297(struct<3> Param0, float fParam1)//Position - 0x29BDE
{
	struct<3> Var0;
	if (FIRE::GET_CLOSEST_FIRE_POS(&Var0, Param0) && MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param0, true) < fParam1)
	{
		return 1;
	}
	return 0;
}

void func_301(int iParam0)//Position - 0x29CB3
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	int iVar3;
	if (iParam0 == 0)
	{
		Var0 = { -1116.7582f, 298.4396f, 64.96789f };
		Local_336[iParam0 /*19*/].f_17 = 8f;
	}
	else if (iParam0 == 1)
	{
		Var0 = { -1128.2207f, 317.22104f, 65.17768f };
		Local_336[iParam0 /*19*/].f_17 = 2f;
	}
	else
	{
		Var0 = { Local_331 };
		Local_336[iParam0 /*19*/].f_17 = 4f;
	}
	fVar1 = 9999f;
	iVar3 = 0;
	while (iVar3 < Local_68.f_0)
	{
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_68[iVar3 /*5*/], true);
		if (fVar2 < fVar1)
		{
			Local_336[iParam0 /*19*/].f_14 = { Local_68[iVar3 /*5*/] };
			fVar1 = fVar2;
		}
		iVar3++;
	}
}

void func_302()//Position - 0x29D6D
{
	GRAPHICS::SET_DISABLE_PETROL_DECALS_RECYCLING_THIS_FRAME();
	STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(Local_105);
	switch (iLocal_85)
	{
		case 0:
			func_34();
			if (func_311())
			{
				iLocal_88 = 0;
			}
			else
			{
				iLocal_88 = 1;
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_104, 6f, 6f, 2f, false, true, 0))
			{
				iLocal_114 = 1;
				__LIB_0__.func_210("JOSH3_06", 7500, 1);
				if (!HUD::DOES_BLIP_EXIST(iLocal_126))
				{
					iLocal_126 = __LIB_10__.func_658(Local_104, 5, 1);
				}
			}
			else
			{
				iLocal_114 = 0;
			}
			AUDIO::PREPARE_MUSIC_EVENT("JOSH3_HOUSE_EXPLODE");
			AUDIO::LOAD_STREAM("JOSH_03_HOUSE_EXPLOSION_MASTER", 0);
			iLocal_403 = STREAMING::STREAMVOL_CREATE_SPHERE(Local_104, 50f, 12, 127);
			__LIB_0__.func_367(1);
			break;
		case 1:
			func_282();
			if (bLocal_61)
			{
				if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && AUDIO::LOAD_STREAM("JOSH_03_HOUSE_EXPLOSION_MASTER", 0))
				{
					RECORDING::REPLAY_START_EVENT(3);
					iLocal_404 = 1;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(true);
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
					AUDIO::PLAY_STREAM_FRONTEND();
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 12f, 0);
					iLocal_85 = 2;
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_126) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_104, 6f, 6f, 2f, true, true, 0))
				{
					__LIB_0__.func_523(&iLocal_126);
					iLocal_114 = 0;
				}
				func_306();
				func_305();
				func_303();
			}
			break;
		case 2:
			func_22();
			__LIB_0__.func_523(&iLocal_126);
			__LIB_0__.func_523(&iLocal_128);
			break;
	}
}

void func_303()//Position - 0x29ED2
{
	if (!__LIB_0__.func_121(iLocal_111) || (__LIB_0__.func_121(iLocal_111) && ENTITY::GET_ENTITY_HEALTH(iLocal_111) <= 500))
	{
		func_304(10);
	}
}

void func_304(int iParam0)//Position - 0x29F08
{
	if (iLocal_89 == 0)
	{
		iLocal_86 = iParam0;
		iLocal_85 = 2;
		iLocal_84 = 14;
	}
}

void func_305()//Position - 0x29F25
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		switch (iLocal_88)
		{
			case 0:
				if (iLocal_114 == 0)
				{
					__LIB_0__.func_210("JOSH3_05", 7500, 1);
					iLocal_114 = 1;
				}
				if (!func_311())
				{
					iLocal_88 = 1;
					iLocal_114 = 0;
				}
				else if (!__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_105, 40f, 1))
				{
					iLocal_88 = 2;
					iLocal_114 = 0;
				}
				break;
			case 1:
				if (iLocal_114 == 0)
				{
					__LIB_0__.func_210("JOSH3_10", 7500, 1);
					iLocal_114 = 1;
				}
				if (func_311())
				{
					iLocal_88 = 0;
					iLocal_114 = 0;
				}
				break;
			case 2:
				if (iLocal_114 == 0)
				{
					__LIB_0__.func_210("JOSH3_02", 7500, 1);
					if (!HUD::DOES_BLIP_EXIST(iLocal_128))
					{
						iLocal_128 = __LIB_10__.func_658(Local_105, 5, 1);
					}
					iLocal_114 = 1;
				}
				if (!func_311())
				{
					__LIB_0__.func_523(&iLocal_128);
					iLocal_88 = 1;
					iLocal_114 = 0;
				}
				else if (__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_105, 40f, 1))
				{
					__LIB_0__.func_523(&iLocal_128);
					iLocal_88 = 0;
					iLocal_114 = 0;
				}
				break;
			}
	}
}

void func_306()//Position - 0x2A03A
{
	switch (iLocal_116)
	{
		case 0:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				func_307(1);
			}
			break;
		case 1:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				func_307(0);
			}
			break;
	}
}

void func_307(int iParam0)//Position - 0x2A07E
{
	iLocal_116 = iParam0;
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	func_32();
	if (iLocal_83 == 7 && iLocal_116 == 1)
	{
		func_309(1);
	}
	switch (iParam0)
	{
		case 0:
			switch (iLocal_83)
			{
				case 4:
					if (__LIB_0__.func_121(iLocal_129) && !HUD::DOES_BLIP_EXIST(iLocal_125))
					{
						iLocal_125 = __LIB_10__.func_727(iLocal_129, 1, 5);
					}
					break;
				case 5:
					if (!HUD::DOES_BLIP_EXIST(iLocal_127))
					{
						iLocal_127 = __LIB_10__.func_658(Local_106, 5, 1);
					}
					break;
				case 6:
					if (!HUD::DOES_BLIP_EXIST(iLocal_127))
					{
						iLocal_127 = __LIB_10__.func_658(Local_106, 5, 1);
					}
					break;
				case 7:
					func_309(0);
					break;
				case 8:
					iLocal_114 = 0;
					break;
				case 10:
					__LIB_0__.func_210("JOSH3_07", 7500, 1);
					break;
			}
			break;
		case 1:
			if (iLocal_117 == 0)
			{
				__LIB_0__.func_210("JOSH3_11", 7500, 1);
				iLocal_117 = 1;
			}
			break;
	}
}

void func_309(int iParam0)//Position - 0x2A1BC
{
	int iVar0;
	if (iParam0 == 1)
	{
		if (iLocal_45 == 0)
		{
			iVar0 = 0;
			while (iVar0 < Local_68.f_0)
			{
				if (HUD::DOES_BLIP_EXIST(Local_68[iVar0 /*5*/].f_3))
				{
					if (HUD::GET_BLIP_ALPHA(Local_68[iVar0 /*5*/].f_3) < 255)
					{
						HUD::REMOVE_BLIP(&(Local_68[iVar0 /*5*/].f_3));
					}
					else
					{
						HUD::SET_BLIP_ALPHA(Local_68[iVar0 /*5*/].f_3, 0);
					}
				}
				iVar0++;
			}
			iLocal_45 = 1;
		}
	}
	else if (iLocal_45)
	{
		iVar0 = 0;
		while (iVar0 < Local_68.f_0)
		{
			if (HUD::DOES_BLIP_EXIST(Local_68[iVar0 /*5*/].f_3))
			{
				HUD::SET_BLIP_ALPHA(Local_68[iVar0 /*5*/].f_3, 255);
			}
			else
			{
				Local_68[iVar0 /*5*/].f_3 = __LIB_0__.func_392(Local_68[iVar0 /*5*/], 0);
				HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_68[iVar0 /*5*/].f_3, true);
				HUD::SET_BLIP_SCALE(Local_68[iVar0 /*5*/].f_3, 0.4f);
				HUD::SET_BLIP_ALPHA(Local_68[iVar0 /*5*/].f_3, 0);
				HUD::SET_BLIP_COLOUR(Local_68[iVar0 /*5*/].f_3, 5);
				HUD::SHOW_HEIGHT_ON_BLIP(Local_68[iVar0 /*5*/].f_3, false);
			}
			iVar0++;
		}
		iLocal_45 = 0;
	}
}

int func_311()//Position - 0x2A2F7
{
	int iVar0;
	int iVar1;
	iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false);
	iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
	if (((((iVar1 == joaat("GROUP_PISTOL") || iVar1 == joaat("GROUP_SMG")) || iVar1 == joaat("GROUP_RIFLE")) || iVar1 == joaat("GROUP_MG")) || iVar1 == joaat("GROUP_SHOTGUN")) || iVar1 == joaat("GROUP_SNIPER"))
	{
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0) > 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_312()//Position - 0x2A376
{
	GRAPHICS::SET_DISABLE_PETROL_DECALS_RECYCLING_THIS_FRAME();
	STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(Local_105);
	switch (iLocal_85)
	{
		case 0:
			func_34();
			func_324(7);
			Local_68[0 /*5*/] = { -1116.0607f, 318.2036f, 65.9778f };
			Local_68[1 /*5*/] = { -1117.0483f, 318.3977f, 65.9778f };
			Local_68[2 /*5*/] = { -1118.0848f, 318.594f, 65.9778f };
			Local_68[3 /*5*/] = { -1119.1498f, 318.7873f, 65.9778f };
			Local_68[4 /*5*/] = { -1120.1605f, 318.8961f, 65.9778f };
			Local_68[5 /*5*/] = { -1121.159f, 319.0799f, 65.9778f };
			Local_68[6 /*5*/] = { -1122.149f, 319.2221f, 65.9778f };
			Local_68[7 /*5*/] = { -1123.2157f, 319.3653f, 65.9778f };
			Local_68[8 /*5*/] = { -1124.2849f, 319.5186f, 65.9778f };
			Local_68[9 /*5*/] = { -1125.3802f, 319.597f, 65.9778f };
			Local_68[10 /*5*/] = { -1126.3851f, 319.1108f, 65.9778f };
			Local_68[11 /*5*/] = { -1126.943f, 318.2621f, 65.7698f };
			Local_68[12 /*5*/] = { -1127.5199f, 317.5066f, 65.1777f };
			Local_68[13 /*5*/] = { -1128.1208f, 316.6581f, 65.1777f };
			Local_68[14 /*5*/] = { -1129.0302f, 316.0728f, 65.1777f };
			Local_68[15 /*5*/] = { -1129.7354f, 315.2601f, 65.1777f };
			Local_68[16 /*5*/] = { -1129.8583f, 314.1669f, 65.1777f };
			Local_68[17 /*5*/] = { -1129.6305f, 313.1406f, 65.1777f };
			Local_68[18 /*5*/] = { -1129.7095f, 312.132f, 65.1779f };
			Local_68[19 /*5*/] = { -1129.7778f, 311.0894f, 65.1779f };
			Local_68[20 /*5*/] = { -1129.7253f, 310.0732f, 65.1779f };
			Local_68[21 /*5*/] = { -1129.6354f, 309.0656f, 65.1779f };
			Local_68[22 /*5*/] = { -1129.4738f, 308.049f, 65.1779f };
			Local_68[23 /*5*/] = { -1129.3799f, 307.0058f, 65.1779f };
			Local_68[24 /*5*/] = { -1129.3761f, 305.9893f, 65.1779f };
			Local_68[25 /*5*/] = { -1129.2896f, 304.955f, 65.2038f };
			Local_68[26 /*5*/] = { -1129.1382f, 303.9323f, 65.2272f };
			Local_68[27 /*5*/] = { -1128.968f, 302.8818f, 65.2272f };
			Local_68[28 /*5*/] = { -1128.6027f, 301.8776f, 65.2292f };
			Local_68[29 /*5*/] = { -1127.8608f, 301.1598f, 65.2275f };
			Local_68[30 /*5*/] = { -1127.0892f, 300.4057f, 65.223f };
			Local_68[31 /*5*/] = { -1126.0264f, 300.0129f, 65.1661f };
			Local_68[32 /*5*/] = { -1124.9788f, 299.7498f, 65.1114f };
			Local_68[33 /*5*/] = { -1123.9432f, 299.6741f, 65.0805f };
			Local_68[34 /*5*/] = { -1122.922f, 299.5366f, 65.0539f };
			Local_68[35 /*5*/] = { -1121.8743f, 299.3183f, 65.043f };
			Local_68[36 /*5*/] = { -1120.848f, 299.017f, 65.0175f };
			Local_68[37 /*5*/] = { -1119.7845f, 298.804f, 65.0047f };
			Local_68[38 /*5*/] = { -1118.742f, 298.5806f, 65.0024f };
			Local_68[39 /*5*/] = { -1117.7535f, 298.3252f, 65.0007f };
			Local_68[40 /*5*/] = { -1116.7667f, 298.1601f, 64.9674f };
			Local_68[41 /*5*/] = { -1115.7808f, 297.928f, 64.9265f };
			Local_68[42 /*5*/] = { -1114.7854f, 297.619f, 64.8757f };
			Local_68[43 /*5*/] = { -1113.8207f, 297.3486f, 64.8166f };
			Local_68[44 /*5*/] = { -1112.8834f, 296.9707f, 64.7542f };
			Local_68[45 /*5*/] = { -1111.9723f, 296.5717f, 64.6463f };
			Local_68[46 /*5*/] = { -1111.0547f, 296.1595f, 64.5324f };
			Local_68[47 /*5*/] = { -1110.1647f, 295.7042f, 64.3585f };
			func_277(1);
			__LIB_0__.func_210("JOSH3_04", 7500, 1);
			iLocal_323 = MISC::GET_GAME_TIMER();
			iLocal_328 = MISC::GET_GAME_TIMER();
			iLocal_314 = 0;
			iLocal_115 = 0;
			iLocal_122 = 0;
			iLocal_123 = 0;
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			PED::SET_CREATE_RANDOM_COPS(false);
			__LIB_0__.func_367(1);
			break;
		case 1:
			HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(0, 0f, 0f, 0, 0);
			func_306();
			func_321();
			func_319();
			func_318();
			func_317();
			func_314();
			func_303();
			func_282();
			if (iLocal_116 == 0 && func_313())
			{
				if (iLocal_123 == 0)
				{
					__LIB_0__.func_498(775);
				}
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 2f, 1);
				iLocal_85 = 2;
			}
			break;
		case 2:
			func_22();
			if (TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED("Jo_3"))
			{
				TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Jo_3");
			}
			break;
	}
}

int func_313()//Position - 0x2A8DB
{
	if (iLocal_52 == 0)
	{
		return 1;
	}
	return 0;
}

void func_314()//Position - 0x2A8EE
{
	if ((((iLocal_314 < 3 && (MISC::GET_GAME_TIMER() - iLocal_328) > 10000) && func_249(1)) && func_315()) && __LIB_35__.func_984(&uLocal_133, "JOSH3AU", "JOSH3_POUR", 8, 0, 0, 0))
	{
		iLocal_314++;
		iLocal_328 = MISC::GET_GAME_TIMER();
	}
}

int func_315()//Position - 0x2A94A
{
	if (((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false)) && __LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_PETROLCAN")) && __LIB_11__.func_325(&uLocal_343, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
	{
		return 1;
	}
	return 0;
}

void func_317()//Position - 0x2A9B1
{
	if ((iLocal_122 == 0 && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) && __LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_PETROLCAN"))
	{
		iLocal_122 = 1;
		AUDIO::TRIGGER_MUSIC_EVENT("JOSH3_PETROL");
	}
	if ((iLocal_122 == 1 && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) && !func_313())
	{
		iLocal_123 = 1;
	}
}

void func_318()//Position - 0x2AA12
{
	if (bLocal_61 && !func_313())
	{
		func_304(5);
	}
}

void func_319()//Position - 0x2AA2F
{
	int iVar0;
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false))
	{
		iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"));
		if (iLocal_83 == 7)
		{
			if (iVar0 == 0)
			{
				func_304(2);
			}
		}
		else if (iVar0 < 3000)
		{
			func_304(4);
		}
	}
	else
	{
		func_304(2);
	}
	if (iLocal_119 == 0)
	{
		if (iLocal_83 == 5 || iLocal_83 == 6)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && __LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_PETROLCAN"))
			{
				__LIB_0__.func_151("JOSH3_08", -1);
				iLocal_119 = 1;
			}
		}
	}
}

void func_321()//Position - 0x2AADD
{
	if (iLocal_115 == 0)
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && __LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_PETROLCAN"))
		{
			iLocal_115 = 1;
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_323) > 7500)
		{
			__LIB_0__.func_187("JOSH3_03");
			iLocal_115 = 1;
		}
	}
	else if ((__LIB_0__.func_1("JOSH3_03") && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) && __LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_PETROLCAN"))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_324(int iParam0)//Position - 0x2AB87
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
			STREAMING::REQUEST_ANIM_DICT("rcmjosh3");
			STREAMING::REQUEST_ANIM_DICT("rcmjosh");
			break;
		case 4:
			STREAMING::REQUEST_MODEL(iLocal_130);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_130, true);
			break;
		case 6:
			STREAMING::REQUEST_MODEL(iLocal_112);
			break;
		case 7:
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("Jo_3");
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_MODEL(iLocal_112);
			STREAMING::REQUEST_ANIM_DICT("reaction@shellshock@unarmed");
			break;
	}
	iVar0 = 0;
	while (iVar0 == 0)
	{
		switch (iParam0)
		{
			case 1:
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh3") && STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh"))
				{
					iVar0 = 1;
				}
				break;
			case 4:
				if (STREAMING::HAS_MODEL_LOADED(iLocal_130))
				{
					iVar0 = 1;
				}
				break;
			case 6:
				if (STREAMING::HAS_MODEL_LOADED(iLocal_112))
				{
					iVar0 = 1;
				}
				break;
			case 7:
				if (((TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED("Jo_3") && STREAMING::HAS_PTFX_ASSET_LOADED()) && STREAMING::HAS_MODEL_LOADED(iLocal_112)) && STREAMING::HAS_ANIM_DICT_LOADED("reaction@shellshock@unarmed"))
				{
					TASK::ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES("Jo_3", 2);
					iVar0 = 1;
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_325()//Position - 0x2ACA5
{
	switch (iLocal_85)
	{
		case 0:
			func_34();
			__LIB_42__.func_877(2, "Arrived at house", 1, 0, 0, 1);
			func_324(6);
			func_262(1);
			func_328();
			if (!HUD::DOES_BLIP_EXIST(iLocal_127))
			{
				iLocal_127 = __LIB_10__.func_658(Local_106, 5, 1);
				__LIB_0__.func_210("JOSH3_02", 7500, 1);
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 7f, 0);
			iLocal_308 = 1;
			iLocal_309 = 0;
			iLocal_312 = 0;
			break;
		case 1:
			func_306();
			func_319();
			func_327();
			func_326();
			func_303();
			if (iLocal_116 == 0)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_106, Global_22, true, true, 0) || func_315())
				{
					iLocal_85 = 2;
				}
			}
			break;
		case 2:
			func_22();
			__LIB_0__.func_523(&iLocal_127);
			break;
	}
}

void func_326()//Position - 0x2AD73
{
	if (func_249(1) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if (iLocal_308 == 0)
		{
			if (__LIB_11__.func_325(&uLocal_343, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
			{
				iLocal_308 = 1;
			}
			else if (__LIB_35__.func_984(&uLocal_133, "JOSH3AU", "JOSH3_WALL", 8, 0, 0, 0))
			{
				iLocal_308 = 1;
			}
		}
		else if (iLocal_309 == 0)
		{
			if (iLocal_312 == 1 && __LIB_35__.func_984(&uLocal_133, "JOSH3AU", "JOSH3_OVER", 8, 0, 0, 0))
			{
				iLocal_309 = 1;
			}
		}
	}
}

void func_327()//Position - 0x2ADFD
{
	if (iLocal_312 == 0 && __LIB_11__.func_325(&uLocal_343, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JOSH3_START");
		iLocal_312 = 1;
	}
}

void func_328()//Position - 0x2AE2F
{
	MISC::CLEAR_AREA_OF_OBJECTS(Local_113, 2f, 2);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_111))
	{
		iLocal_111 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_113, 1f, iLocal_112, true, false, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_111))
	{
	}
	else
	{
		iLocal_111 = OBJECT::CREATE_OBJECT(iLocal_112, Local_113, true, true, false);
		ENTITY::SET_ENTITY_HEADING(iLocal_111, 170.4f);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_112);
}

void func_404()//Position - 0x31F61
{
	switch (iLocal_85)
	{
		case 0:
			func_34();
			__LIB_0__.func_210("JOSH3_02", 7500, 1);
			if (!HUD::DOES_BLIP_EXIST(iLocal_127))
			{
				iLocal_127 = __LIB_10__.func_658(Local_106, 5, 1);
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 0);
			iLocal_303 = 0;
			iLocal_304 = 0;
			iLocal_305 = 0;
			iLocal_306 = 0;
			iLocal_319 = MISC::GET_GAME_TIMER();
			iLocal_320 = -1;
			break;
		case 1:
			func_431();
			func_306();
			func_319();
			if (iLocal_116 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1120.5026f, 341.24927f, 62.281723f, -1117.9297f, 267.01993f, 74.50663f, 80f, false, true, 0))
				{
					iLocal_85 = 2;
				}
				else
				{
					func_430();
					func_429();
					func_428();
					func_423();
					func_405();
				}
			}
			break;
		case 2:
			func_22();
			STREAMING::REMOVE_ANIM_DICT("rcmjosh3");
			STREAMING::REMOVE_ANIM_DICT("rcmjosh");
			break;
	}
}

void func_405()//Position - 0x3204E
{
	if (iLocal_305 == 0)
	{
		if ((((func_249(1) && iLocal_304 == 1) && iLocal_320 > -1) && (MISC::GET_GAME_TIMER() - iLocal_320) > 15000) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			__LIB_0__.func_203(&uLocal_133, 3, 0, "JOSH", 0, 1);
			if (__LIB_41__.func_413(&uLocal_133, 58, "JOSH3AU", "JOSH_PHONE1", 8, 0, 0, 1))
			{
				iLocal_305 = 1;
				iLocal_307 = 0;
				iLocal_326 = -1;
				iLocal_327 = -1;
			}
		}
	}
	else
	{
		if (iLocal_306 == 0 && func_249(1))
		{
			if (iLocal_327 == -1)
			{
				iLocal_327 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_327) > 2000)
			{
				if (__LIB_35__.func_984(&uLocal_133, "JOSH3AU", "JOSH3_COMM", 8, 0, 0, 0))
				{
					iLocal_306 = 1;
				}
			}
		}
		if (iLocal_307 == 0)
		{
			if (iLocal_326 == -1)
			{
				if (__LIB_1__.func_412())
				{
					iLocal_326 = MISC::GET_GAME_TIMER();
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_326) > 5000)
			{
				if (__LIB_36__.func_66(58, "JOSH3_TXT" /* GXT: U hung up? gas grill by pool wud make good firework show ;) */, 1, 0, 0, 0, 0, 1, 0, 1))
				{
					iLocal_307 = 1;
				}
			}
		}
	}
}

void func_423()//Position - 0x33251
{
	struct<6> Var0;
	if (iLocal_301 == 0)
	{
		if (((((MISC::GET_GAME_TIMER() - iLocal_319) > 25000 && func_249(1)) && __LIB_0__.func_121(iLocal_395)) && __LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), 566.53f, -1770.4f, 28.35f, 10f, 1)) && __LIB_35__.func_984(&uLocal_133, "JOSH3AU", "JOSH3_REMIND", 8, 0, 0, 0))
		{
			iLocal_301 = 1;
			iLocal_302 = 0;
		}
	}
	else if (iLocal_302 == 0)
	{
		if (__LIB_0__.func_75())
		{
			Var0 = { __LIB_0__.func_390() };
			if (((MISC::ARE_STRINGS_EQUAL(&Var0, "JOSH3_REMIND") && __LIB_0__.func_121(PLAYER::PLAYER_PED_ID())) && __LIB_0__.func_121(iLocal_395)) && __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_395, 1) > 30f)
			{
				__LIB_6__.func_833();
				iLocal_302 = 1;
			}
		}
	}
}

void func_428()//Position - 0x333DE
{
	if (func_249(1))
	{
		if (iLocal_304 == 0)
		{
			if (!__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_103, 100f, 1) && __LIB_35__.func_984(&uLocal_133, "JOSH3AU", "JOSH3_DRIVE", 8, 0, 0, 0))
			{
				iLocal_304 = 1;
				__LIB_0__.func_124(&iLocal_395, 1, 0, 1);
				STREAMING::REMOVE_ANIM_DICT("rcmjosh3");
				STREAMING::REMOVE_ANIM_DICT("rcmjosh");
			}
		}
		else if (iLocal_320 == -1)
		{
			iLocal_320 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_429()//Position - 0x33455
{
	if (iLocal_303 == 0 && func_249(0))
	{
		if (iLocal_120 == iLocal_121)
		{
			if (__LIB_35__.func_984(&uLocal_133, "JOSH3AU", "JOSH3_FUEL3", 8, 1, 0, 0))
			{
				iLocal_303 = 1;
			}
		}
		else if (iLocal_120 == 0)
		{
			if (__LIB_35__.func_984(&uLocal_133, "JOSH3AU", "JOSH3_FUEL", 8, 1, 0, 0))
			{
				iLocal_303 = 1;
			}
		}
		else if (__LIB_35__.func_984(&uLocal_133, "JOSH3AU", "JOSH3_FUEL2", 8, 1, 0, 0))
		{
			iLocal_303 = 1;
		}
	}
}

void func_430()//Position - 0x334D9
{
	if ((((((iLocal_299 == 0 && func_249(1)) && __LIB_0__.func_121(iLocal_129)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_129, true)) && __LIB_0__.func_121(iLocal_395)) && __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_395, 1) < 20f) && __LIB_35__.func_984(&uLocal_133, "JOSH3AU", "JOSH3_CAR", 8, 0, 0, 0))
	{
		iLocal_299 = 1;
	}
}

void func_431()//Position - 0x33551
{
	if (((__LIB_0__.func_121(iLocal_395) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_397)) && !PED::IS_SYNCHRONIZED_SCENE_LOOPED(iLocal_397)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_397) > 0.99f)
	{
		iLocal_397 = PED::CREATE_SYNCHRONIZED_SCENE(Local_398, Local_399, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_397, true);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_395, iLocal_397, "rcmjosh3", "josh3_leadout_loop", 8f, -8f, 21, 0, 1000f, 0);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_395, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	}
}

void func_432()//Position - 0x335DC
{
	switch (iLocal_85)
	{
		case 0:
			func_34();
			__LIB_42__.func_877(1, "Get in car", 0, 0, 0, 1);
			iLocal_120 = 0;
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false))
			{
				iLocal_120 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"));
			}
			if (iLocal_120 == iLocal_121)
			{
				iLocal_300 = 1;
			}
			else
			{
				func_439();
				if (!HUD::DOES_BLIP_EXIST(iLocal_125) && __LIB_0__.func_121(iLocal_129))
				{
					iLocal_125 = __LIB_10__.func_727(iLocal_129, 1, 5);
				}
				iLocal_300 = 0;
			}
			if (__LIB_0__.func_121(iLocal_395))
			{
				iLocal_397 = PED::CREATE_SYNCHRONIZED_SCENE(Local_398, Local_399, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_395, iLocal_397, "rcmjosh3", "josh3_leadout_action", 8f, -8f, 21, 0, 1000f, 0);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_395, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (__LIB_0__.func_121(iLocal_129))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_129, 1);
			}
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_301 = 0;
			iLocal_299 = 0;
			iLocal_319 = MISC::GET_GAME_TIMER();
			break;
		case 1:
			func_431();
			func_306();
			if (__LIB_0__.func_121(iLocal_129))
			{
				func_438();
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					func_430();
					func_437();
					func_423();
					func_435();
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_129, false))
					{
						func_434();
						func_433();
						iLocal_85 = 2;
					}
					else if (iLocal_120 == iLocal_121)
					{
						func_434();
						iLocal_85 = 2;
					}
				}
			}
			else
			{
				func_304(1);
			}
			break;
		case 2:
			func_22();
			__LIB_0__.func_523(&iLocal_125);
			break;
	}
}

void func_433()//Position - 0x33766
{
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), iLocal_121, false, false);
}

void func_434()//Position - 0x33780
{
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), false))
	{
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL")) < 30)
		{
			WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 30, false);
		}
	}
	else
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 30, false, true);
	}
}

void func_435()//Position - 0x337CF
{
	if (((((((((iLocal_316 < 3 && (MISC::GET_GAME_TIMER() - iLocal_329) > 5000) && func_249(1)) && __LIB_0__.func_121(PLAYER::PLAYER_PED_ID())) && __LIB_0__.func_121(iLocal_395)) && __LIB_0__.func_121(iLocal_129)) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_395)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_129, false)) && __LIB_0__.func_76(iLocal_395, iLocal_129, 1) < 40f) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_129, PLAYER::PLAYER_PED_ID(), true))
	{
		__LIB_6__.func_834(iLocal_395, "WHATS_YOUR_PROBLEM", 3);
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_129);
		iLocal_329 = MISC::GET_GAME_TIMER();
		iLocal_316++;
	}
}

void func_437()//Position - 0x3389F
{
	if (((iLocal_300 == 0 && func_249(0)) && __LIB_0__.func_121(iLocal_395)) && __LIB_35__.func_984(&uLocal_133, "JOSH3AU", "JOSH3_GAS", 8, 1, 0, 0))
	{
		iLocal_300 = 1;
	}
}

void func_438()//Position - 0x338E3
{
	if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_129, 1) > 100f)
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			func_304(3);
		}
	}
	else if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_129, 1) > 50f)
	{
		if (iLocal_118 == 0)
		{
			func_439();
			iLocal_118 = 1;
		}
	}
}

void func_439()//Position - 0x33933
{
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false))
	{
		__LIB_0__.func_210("JOSH3_13", 7500, 1);
	}
	else
	{
		__LIB_0__.func_210("JOSH3_01", 7500, 1);
	}
}

void func_440()//Position - 0x33969
{
	switch (iLocal_85)
	{
		case 0:
			func_34();
			__LIB_26__.func_478("josh_3_intp1", 0);
			iLocal_338 = 0;
			break;
		case 1:
			switch (iLocal_338)
			{
				case 0:
					if (__LIB_18__.func_170(1, 1093140480, 0))
					{
						if (__LIB_0__.func_121(iLocal_395))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_395, "Josh", 0, __LIB_11__.func_149(58), 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_395, "Josh", 2, __LIB_11__.func_149(58), 0);
						}
						__LIB_26__.func_252();
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::REPLAY_START_EVENT(1);
						iLocal_338++;
					}
					break;
				case 1:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						__LIB_36__.func_31(567.4477f, -1761.0262f, 27.16929f, 565.64014f, -1774.5627f, 31.354511f, 5f, Local_100, 354.2095f, 1, 1, 1, 0, 0);
						__LIB_42__.func_697(Local_100, 354.2095f, 0, 145);
						func_294(565.39f, -1772.88f, 29.77f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						__LIB_0__.func_84(500, 0);
						iLocal_338++;
					}
					break;
				case 2:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_395) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Josh", 0)))
						{
							iLocal_395 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Josh", 0));
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_395, true, true);
							func_442();
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", __LIB_19__.func_811(2)))
						{
							__LIB_10__.func_701(PLAYER::PLAYER_PED_ID(), Local_108, 66.0379f, 0, 1);
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 0f, true, false);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						}
					}
					else
					{
						__LIB_32__.func_576(1, 1, 1, 1);
						iLocal_85 = 2;
					}
					break;
			}
			break;
		case 2:
			RECORDING::REPLAY_STOP_EVENT();
			func_22();
			__LIB_10__.func_700(&Local_82, 0, 1);
			break;
	}
}

void func_442()//Position - 0x33C52
{
	func_324(1);
	if (!__LIB_0__.func_121(iLocal_395))
	{
		while (!__LIB_37__.func_335(&iLocal_395, 58, 566.1639f, -1773.8171f, 29.8f, 14.4f, "JOSH", 1))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_397 = PED::CREATE_SYNCHRONIZED_SCENE(Local_398, Local_399, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_395, iLocal_397, "rcmjosh3", "sit_stairs_idle", 8f, -8f, 21, 0, 1000f, 0);
	}
	if (__LIB_0__.func_121(iLocal_395))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_395, true);
		iLocal_396 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_395, iLocal_396);
		PED::SET_PED_CONFIG_FLAG(iLocal_395, 132, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_395, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_395, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_395, false);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_395, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		__LIB_0__.func_203(&uLocal_133, 3, iLocal_395, "JOSH", 0, 1);
	}
}

void func_488()//Position - 0x3A4A9
{
	switch (iLocal_85)
	{
		case 0:
			func_34();
			__LIB_39__.func_848(83, 0);
			iLocal_400 = PED::CREATE_SYNCHRONIZED_SCENE(Local_398, Local_399, 2);
			iLocal_401 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_401, iLocal_400, "TREVOR_ENTER_ROOM_camera", "rcmjosh");
			ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(549.26f, -1773.11f, 33.73f, 10f, joaat("prop_motel_door_09"), iLocal_400, "TREVOR_ENTER_ROOM_door", "rcmjosh", 1000f, -8f, 0, 1000f);
			func_294(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			RECORDING::REPLAY_START_EVENT(0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_400, "rcmjosh", "TREVOR_ENTER_ROOM_Trevor", 1000f, -1000f, 5, 0, 1000f, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
			iLocal_338 = 0;
			break;
		case 1:
			switch (iLocal_338)
			{
				case 0:
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_400) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_400) > 0.99f) || __LIB_6__.func_841(1000))
					{
						iLocal_338++;
					}
					break;
				case 1:
					if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", false, -1))
					{
						Local_90.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
						CAM::ADD_CAM_SPLINE_NODE(Local_90.f_4, 578.9f, -1761.4f, 31.3f, 27.6f, 2.5f, 11f, 5000, 3, 2);
						CAM::ADD_CAM_SPLINE_NODE(Local_90.f_4, 578.8f, -1761.1f, 31.4f, 27.6f, 2.5f, 11f, 5000, 3, 2);
						CAM::SET_CAM_FOV(Local_90.f_4, 50f);
						CAM::SET_CAM_ACTIVE(Local_90.f_4, true);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "TIME_LAPSE_MASTER", 0, true);
						__LIB_32__.func_723(&Local_90, 1, 0, 2000, 1, 1, 0, 1);
						Local_90.f_0 = __LIB_13__.func_95();
						iLocal_98 = __LIB_13__.func_95();
						__LIB_32__.func_437(&iLocal_98, 0, 0, 2, 0, 0, 0);
						iLocal_99 = __LIB_0__.func_196(iLocal_98);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						__LIB_10__.func_701(PLAYER::PLAYER_PED_ID(), Local_103, 0, 0, 1);
						iLocal_338++;
					}
					break;
				case 2:
					if (__LIB_35__.func_927(iLocal_99, 0, "EXTRASUNNY", "cirrocumulus", &Local_90, -1082130432, 0, 1, 1065353216) || __LIB_6__.func_841(1000))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
						{
							AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
						}
						iLocal_85 = 2;
					}
					break;
			}
			break;
		case 2:
			RECORDING::REPLAY_STOP_EVENT();
			func_22();
			AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
			__LIB_39__.func_848(83, 1);
			break;
	}
}

void func_523()//Position - 0x3F2C7
{
	switch (iLocal_85)
	{
		case 0:
			func_34();
			__LIB_10__.func_700(&Local_82, 0, 1);
			if (__LIB_0__.func_121(Local_82.f_28[0]))
			{
				iLocal_395 = Local_82.f_28[0];
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_395, true, true);
			}
			func_442();
			func_527();
			iLocal_397 = PED::CREATE_SYNCHRONIZED_SCENE(Local_398, Local_399, 2);
			if (__LIB_0__.func_121(iLocal_395))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_395, iLocal_397, "rcmjosh3", "josh3_lead_in", 1000f, -8f, 21, 0, 1000f, 0);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_395, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_395, false, false);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				__LIB_10__.func_701(PLAYER::PLAYER_PED_ID(), Local_107, 161.173f, 0, 1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				__LIB_0__.func_84(500, 0);
			}
			CUTSCENE::REQUEST_CUTSCENE("josh_3_intp1", 8);
			iLocal_298 = 0;
			iLocal_317 = MISC::GET_GAME_TIMER();
			iLocal_318 = -1;
			break;
		case 1:
			if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_103, 1) > 100f)
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					func_304(9);
				}
			}
			else
			{
				func_525();
				func_524();
				func_435();
				if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_397) && !PED::IS_SYNCHRONIZED_SCENE_LOOPED(iLocal_397)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_397) > 0.99f) && __LIB_0__.func_121(iLocal_395))
				{
					iLocal_397 = PED::CREATE_SYNCHRONIZED_SCENE(Local_398, Local_399, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_397, true);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_395, iLocal_397, "rcmjosh3", "josh3_curb_wait_loop", 8f, -8f, 21, 0, 1000f, 0);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_395, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
				if (!__LIB_0__.func_121(iLocal_129))
				{
					func_304(1);
				}
			}
			break;
		case 2:
			func_22();
			__LIB_0__.func_523(&iLocal_124);
			break;
	}
}

void func_524()//Position - 0x3F4A1
{
	if ((((((iLocal_318 > -1 && (MISC::GET_GAME_TIMER() - iLocal_318) > 15000) && func_249(1)) && __LIB_0__.func_121(PLAYER::PLAYER_PED_ID())) && __LIB_0__.func_121(iLocal_395)) && __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_395, 1) < 20f) && __LIB_35__.func_984(&uLocal_133, "JOSH3AU", "JOSH3_HANG", 8, 0, 0, 0))
	{
		iLocal_318 = MISC::GET_GAME_TIMER();
	}
}

void func_525()//Position - 0x3F51D
{
	if (iLocal_298 == 0)
	{
		if ((func_249(1) && __LIB_0__.func_121(iLocal_395)) && __LIB_35__.func_984(&uLocal_133, "JOSH3AU", "JOSH3_INT_LI", 8, 0, 0, 0))
		{
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 5f, 1);
			iLocal_298 = 1;
		}
	}
	else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_103, Global_22, HUD::DOES_BLIP_EXIST(iLocal_124), true, 0))
	{
		__LIB_0__.func_296();
		iLocal_85 = 2;
	}
	else if (iLocal_317 > -1)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_317) > 2000 && !__LIB_0__.func_75())
		{
			__LIB_0__.func_210("JOSH3_09", 7500, 1);
			if (!HUD::DOES_BLIP_EXIST(iLocal_124))
			{
				iLocal_124 = __LIB_10__.func_658(Local_103, 5, 0);
			}
			iLocal_317 = -1;
			iLocal_318 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_527()//Position - 0x3F61C
{
	if (!__LIB_0__.func_121(iLocal_129))
	{
		if (__LIB_0__.func_121(Local_82.f_35[0]))
		{
			iLocal_129 = Local_82.f_35[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_129, true, true);
		}
		else
		{
			func_324(4);
			func_528(&iLocal_129, iLocal_130, Local_131, 335.3252f, iLocal_132);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_130);
	if (__LIB_0__.func_121(iLocal_129))
	{
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_129, iLocal_132);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_129, false, 0);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_129, true);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_129, 2);
	}
}

void func_528(int iParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4)//Position - 0x3F6A6
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		__LIB_11__.func_840(iParam1);
		*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, true, true, false);
		if (iParam4 >= 0)
		{
			VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam4, iParam4);
		}
	}
}

void func_530()//Position - 0x3F70C
{
	if (iLocal_83 < (15 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_395))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_395, false))
			{
				func_304(6);
			}
			else
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_395))
				{
					func_304(7);
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_395, PLAYER::PLAYER_PED_ID(), true))
				{
					func_304(7);
				}
				else if (__LIB_38__.func_135(iLocal_395, 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					func_304(8);
				}
			}
		}
	}
}

void func_566(int iParam0)//Position - 0x40B49
{
	func_625(1, 1);
	iLocal_89 = 1;
	FIRE::STOP_FIRE_IN_RANGE(Local_105, 100f);
	func_622(1, 0);
	MISC::CLEAR_AREA(Local_105, 100f, true, false, false, false);
	if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
	{
		MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, true, false, false, false);
	}
	switch (iParam0)
	{
		case 0:
			if (!__LIB_0__.func_295())
			{
				__LIB_10__.func_701(PLAYER::PLAYER_PED_ID(), Local_107, 161.173f, 0, 1);
			}
			__LIB_42__.func_697(Local_100, 354.2095f, 0, 145);
			__LIB_18__.func_191(22, 0, 0, 1, 0);
			__LIB_18__.func_191(23, 0, 0, 1, 0);
			func_442();
			func_527();
			iLocal_84 = 1;
			break;
		case 1:
			__LIB_42__.func_697(Local_100, 354.2095f, 0, 145);
			__LIB_18__.func_191(22, 0, 0, 1, 0);
			__LIB_18__.func_191(23, 0, 0, 1, 0);
			func_442();
			func_527();
			iLocal_84 = 3;
			break;
		case 2:
			__LIB_42__.func_697(Local_100, 354.2095f, 0, 145);
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
			{
				if (!__LIB_0__.func_295())
				{
					__LIB_10__.func_701(PLAYER::PLAYER_PED_ID(), Local_108, 66.0379f, 0, 1);
				}
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 0f, true, false);
			}
			func_442();
			func_527();
			iLocal_84 = 4;
			break;
		case 3:
			__LIB_42__.func_697(Local_101, 101.2209f, 0, 145);
			if (!__LIB_0__.func_295())
			{
				__LIB_10__.func_701(PLAYER::PLAYER_PED_ID(), Local_109, 40.6354f, 0, 1);
			}
			__LIB_18__.func_191(22, 0, 0, 1, 0);
			__LIB_18__.func_191(23, 0, 0, 1, 0);
			func_262(1);
			func_433();
			func_434();
			func_324(6);
			SYSTEM::WAIT(1000);
			func_328();
			iLocal_84 = 6;
			break;
		case 4:
			__LIB_42__.func_697(Local_101, 101.2209f, 0, 145);
			if (!__LIB_0__.func_295())
			{
				__LIB_10__.func_701(PLAYER::PLAYER_PED_ID(), -1112.7906f, 317.5085f, 65.9778f, 86.0521f, 0, 1);
			}
			__LIB_18__.func_191(22, 0, 0, 1, 0);
			__LIB_18__.func_191(23, 0, 0, 1, 0);
			func_262(1);
			func_433();
			func_434();
			func_324(6);
			SYSTEM::WAIT(1000);
			func_328();
			iLocal_84 = 7;
			break;
		case 5:
			__LIB_42__.func_697(Local_101, 101.2209f, 0, 145);
			if (!__LIB_0__.func_295())
			{
				__LIB_10__.func_701(PLAYER::PLAYER_PED_ID(), Local_104, 203.9533f, 0, 1);
			}
			__LIB_18__.func_191(22, 1, 0, 1, 0);
			__LIB_18__.func_191(23, 1, 0, 1, 0);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_JOSH_HOUSE_BURNING", true, true);
			func_262(0);
			STREAMING::REQUEST_PTFX_ASSET();
			while (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			iLocal_84 = 10;
			break;
		case 6:
			__LIB_42__.func_697(Local_101, 101.2209f, 0, 145);
			if (!__LIB_0__.func_295())
			{
				__LIB_10__.func_701(PLAYER::PLAYER_PED_ID(), Local_110, 24.0453f, 0, 1);
			}
			iLocal_84 = 13;
			break;
	}
	func_576();
	MISC::SET_WEATHER_TYPE_PERSIST("EXTRASUNNY");
	if (!__LIB_0__.func_295())
	{
		__LIB_20__.func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1112014848, 12, 5000, 0, 0);
	}
	if (iParam0 == 4)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JOSH3_START");
	}
	else if (iParam0 == 5)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JOSH3_RESTART1");
	}
	__LIB_6__.func_775(0, -1, 1);
	if (iParam0 == 6)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		__LIB_0__.func_84(500, 1);
	}
	if (iParam0 == 1)
	{
		__LIB_32__.func_751(1, 0, 1);
	}
	else
	{
		__LIB_32__.func_751(1, 1, 1);
	}
	iLocal_85 = 2;
}

void func_576()//Position - 0x4117B
{
	if (__LIB_24__.func_934())
	{
		__LIB_32__.func_493();
		while (!__LIB_26__.func_580())
		{
			SYSTEM::WAIT(0);
		}
		if (iLocal_84 < 6)
		{
			iLocal_102 = __LIB_41__.func_985(Local_100, 354.2095f);
		}
		else
		{
			iLocal_102 = __LIB_41__.func_985(Local_101, 101.2209f);
		}
	}
}

void func_622(int iParam0, int iParam1)//Position - 0x42F90
{
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	__LIB_6__.func_771();
	__LIB_0__.func_122(&iLocal_111, 0);
	func_32();
	func_11(iParam0);
	func_18(iParam0);
	func_10();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_130);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_130, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_112);
	if (TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED("Jo_3"))
	{
		TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Jo_3");
	}
	STREAMING::REMOVE_ANIM_DICT("rcmjosh3");
	STREAMING::REMOVE_ANIM_DICT("rcmjosh");
	STREAMING::REMOVE_ANIM_DICT("reaction@shellshock@unarmed");
	STREAMING::REMOVE_PTFX_ASSET();
	CAM::DESTROY_ALL_CAMS(false);
	func_277(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PED::SET_CREATE_RANDOM_COPS(true);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	AUDIO::STOP_SOUND(iLocal_333);
	AUDIO::STOP_SOUND(iLocal_334);
	AUDIO::STOP_STREAM();
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_JOSH_HOUSE_BURNING", false, false);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
	AUDIO::TRIGGER_MUSIC_EVENT("JOSH3_MISSION_FAIL");
	PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
	if (STREAMING::STREAMVOL_IS_VALID(iLocal_403))
	{
		STREAMING::STREAMVOL_DELETE(iLocal_403);
	}
	__LIB_0__.func_367(0);
	if (iParam1 == 1)
	{
		__LIB_0__.func_202(&uLocal_133, 2);
		__LIB_0__.func_202(&uLocal_133, 3);
		func_276();
		PED::CLEAR_PED_NON_CREATION_AREA();
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_402, false);
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-1140.2233f, 271.745f, 50f, -1082.4034f, 344.8568f, 80f, 0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1140.2233f, 271.745f, 50f, -1082.4034f, 344.8568f, 80f, true, true);
		__LIB_18__.func_191(23, 0, 0, 1, 0);
	}
}

void func_625(bool bParam0, bool bParam1)//Position - 0x43137
{
	if (bParam0)
	{
		__LIB_32__.func_752(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_294(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_638()//Position - 0x433E9
{
	iLocal_86 = 0;
	HUD::REQUEST_ADDITIONAL_TEXT("JOSH3", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_130 = joaat("felon2");
	iLocal_112 = joaat("prop_bbq_1");
	Local_331 = { -1116.1232f, 318.0682f, 65.9778f };
	Local_332 = { 0f, 0f, 350f };
	PED::SET_PED_NON_CREATION_AREA(-1140.2233f, 271.745f, 50f, -1082.4034f, 344.8568f, 80f);
	iLocal_402 = PED::ADD_SCENARIO_BLOCKING_AREA(-1140.2233f, 271.745f, 50f, -1082.4034f, 344.8568f, 80f, false, true, true, true);
	PATHFIND::SET_PED_PATHS_IN_AREA(-1140.2233f, 271.745f, 50f, -1082.4034f, 344.8568f, 80f, false, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1140.2233f, 271.745f, 50f, -1082.4034f, 344.8568f, 80f, false, true);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-1140.2233f, 271.745f, 50f, -1082.4034f, 344.8568f, 80f, 0);
	MISC::CLEAR_AREA(Local_105, 100f, true, false, false, false);
	__LIB_18__.func_191(22, 0, 0, 1, 0);
	__LIB_18__.func_191(23, 0, 0, 1, 0);
	WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), &iLocal_121);
	iLocal_45 = 0;
	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 30f);
	__LIB_39__.func_848(83, 1);
	__LIB_0__.func_203(&uLocal_133, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	__LIB_11__.func_329(&uLocal_343);
	__LIB_11__.func_328(&uLocal_343, -1094.634f, 292.479f, 63.0398f);
	__LIB_11__.func_328(&uLocal_343, -1133.5137f, 285.0669f, 65.2301f);
	__LIB_11__.func_328(&uLocal_343, -1139.6509f, 304.8385f, 66.4302f);
	__LIB_11__.func_328(&uLocal_343, -1149.986f, 331.3831f, 68.1542f);
	__LIB_11__.func_328(&uLocal_343, -1092.2432f, 334.3243f, 65.9754f);
	__LIB_11__.func_327(&uLocal_343);
	iLocal_316 = 0;
	iLocal_329 = MISC::GET_GAME_TIMER();
}

void func_648()//Position - 0x439AC
{
	__LIB_26__.func_252();
	if (__LIB_26__.func_257())
	{
		func_622(0, 1);
	}
	__LIB_32__.func_757(&Local_82, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

