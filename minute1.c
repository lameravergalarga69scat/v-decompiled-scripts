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
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = -1;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 1000;
	var uLocal_92 = 1000;
	var uLocal_93 = 0;
	struct<61> Local_94 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	char* sLocal_99 = NULL;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	struct<3> Local_102 = { 0, 0, 0 } ;
	int iLocal_103[2] = { 0, 0 };
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int* iLocal_107 = NULL;
	var uLocal_108 = 16;
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
	int iLocal_273 = 0;
	int iLocal_274 = 0;
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
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	struct<3> Local_307[4];
	int iLocal_308[4] = { 0, 0, 0, 0 };
	int iLocal_309 = 0;
	char cLocal_310[24] = "";
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	char cLocal_314[48] = "";
	int iLocal_315 = 0;
	int* iLocal_316 = NULL;
	int* iLocal_317 = NULL;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	float fLocal_324 = 0f;
	int iLocal_325 = 0;
	int* iLocal_326 = NULL;
	struct<3> Local_327 = { 0, 0, 0 } ;
	float fLocal_328 = 0f;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	float fLocal_331 = 0f;
	int* iLocal_332 = NULL;
	struct<3> Local_333 = { 0, 0, 0 } ;
	struct<3> Local_334 = { 0, 0, 0 } ;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	struct<7> Local_337[2];
	int* iLocal_338 = NULL;
	var uLocal_339[2] = { 0, 0 };
	var uLocal_340[2] = { 0, 0 };
	int iLocal_341[2] = { 0, 0 };
	int iLocal_342[2] = { 0, 0 };
	int iLocal_343[2] = { 0, 0 };
	int iLocal_344[2] = { 0, 0 };
	int iLocal_345[2] = { 0, 0 };
	int iLocal_346[2] = { 0, 0 };
	float fLocal_347[2] = { 0f, 0f };
	int iLocal_348[2] = { 0, 0 };
	int iLocal_349[2] = { 0, 0 };
	int iLocal_350[2] = { 0, 0 };
	int iLocal_351[2] = { 0, 0 };
	int iLocal_352[2] = { 0, 0 };
	int iLocal_353[2] = { 0, 0 };
	int iLocal_354[2] = { 0, 0 };
	int iLocal_355[2] = { 0, 0 };
	int iLocal_356 = 0;
	struct<4> Local_357[5];
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	char* sLocal_361[3] = { NULL, NULL, NULL };
	int iLocal_362 = 0;
	char* sLocal_363[2] = { NULL, NULL };
	struct<3> Local_364 = { 0, 0, 0 } ;
	int* iLocal_365 = NULL;
	struct<3> Local_366 = { 0, 0, 0 } ;
	int iLocal_367 = 0;
	int* iLocal_368 = NULL;
	int iLocal_369 = 0;
	float fLocal_370 = 0f;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<4> Local_381[7];
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	struct<61> Local_390 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	uLocal_78 = __LIB_2__::func_910(56);
	uLocal_79 = __LIB_2__::func_910(57);
	uLocal_80 = __LIB_2__::func_910(59);
	iLocal_81 = joaat("pranger");
	iLocal_95 = 1;
	Local_102 = { 323.606f, 3415.3496f, 35.6612f };
	Local_327 = { 1996.5011f, 3063.1003f, 46.7716f };
	fLocal_328 = 56.14696f;
	Local_333 = { 1989.8622f, 3047.604f, 46.21511f };
	Local_334 = { 1990.9784f, 3054.2f, 46.2149f };
	Local_364 = { 2698.8777f, 4110.8486f, 42.11631f };
	Local_366 = { 1989.4276f, 3051.9133f, 46.1256f };
	iLocal_389 = -1;
	Local_94 = { ScriptParam_390 };
	__LIB_14__::func_801(&Local_94);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_14__::func_872(1);
		func_718();
	}
	func_716();
	if (__LIB_0__::func_323())
	{
		__LIB_14__::func_871(&Local_94, 1, 1, 0);
		iVar0 = __LIB_0__::func_344();
		if (Global_94618 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				__LIB_0__::func_427(321.9098f, 3410.6528f, 35.7119f, 243.0269f, 1, 0);
				func_610(1);
				break;
			case 1:
				__LIB_0__::func_427(1982.925f, 3078.1924f, 45.9798f, 216.8597f, 1, 0);
				func_610(2);
				break;
			case 2:
				__LIB_0__::func_427(1993.5508f, 3058.1018f, 46.0548f, 40.7551f, 1, 0);
				func_610(3);
				break;
			case 3:
				__LIB_0__::func_427(2698.2053f, 4135.905f, 42.8234f, 323.4031f, 1, 0);
				func_610(5);
				break;
			}
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_TCBP", 0);
		if (iLocal_388 > MISC::GET_GAME_TIMER())
		{
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		}
		__LIB_14__::func_863(Local_94.f_9, 0, 0, 0, 0, 0);
		func_591();
		switch (iLocal_95)
		{
			case 1:
				func_519();
				break;
			case 2:
				func_513();
				break;
			case 3:
				func_503();
				break;
			case 4:
				func_491();
				break;
			case 5:
				func_352();
				break;
			case 6:
				func_337();
				break;
			case 7:
				func_295();
				break;
			case 8:
				func_44();
				break;
			case 9:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x2B5
{
	switch (iLocal_97)
	{
		case 0:
			func_43();
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			func_41();
			__LIB_0__::func_429();
			AUDIO::TRIGGER_MUSIC_EVENT("MM1_FAIL");
			iLocal_293 = 0;
			func_37();
			if (__LIB_0__::func_121(iLocal_316) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_316, false))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_316, 10f, 1, false);
			}
			switch (iLocal_98)
			{
				case 0:
					break;
				case 1:
					sLocal_99 = "MIN1_F1";
					break;
				case 2:
					sLocal_99 = "MIN1_F2";
					break;
				case 11:
					sLocal_99 = "MIN1_F3";
					break;
				case 3:
					sLocal_99 = "MIN1_F4";
					break;
				case 4:
					sLocal_99 = "MIN1_F5";
					break;
				case 5:
					sLocal_99 = "MIN1_F6";
					break;
				case 6:
					sLocal_99 = "MIN1_F7";
					break;
				case 7:
					sLocal_99 = "MIN1_F8";
					break;
				case 8:
					sLocal_99 = "MIN1_F9";
					break;
				case 9:
					sLocal_99 = "MIN1_F10";
					break;
				case 10:
					sLocal_99 = "MIN1_F12";
					break;
				case 12:
					sLocal_99 = "MIN1_F11";
					break;
				case 13:
					sLocal_99 = "MIN1_F15";
					break;
			}
			if (iLocal_98 == 0)
			{
				__LIB_14__::func_872(1);
			}
			else
			{
				__LIB_14__::func_880(sLocal_99, 1);
			}
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				func_32();
				func_29(1, 1);
				__LIB_8__::func_397(&iLocal_326);
				__LIB_8__::func_397(&iLocal_107);
				__LIB_8__::func_397(&iLocal_316);
				func_718();
			}
			else
			{
				func_2();
			}
			break;
	}
}

void func_2()//Position - 0x42F
{
	if (iLocal_293 == 0 && iLocal_98 != 7)
	{
		if (__LIB_0__::func_121(Local_337[0 /*7*/]))
		{
			__LIB_0__::func_222(&uLocal_108, 3, Local_337[0 /*7*/], "JOE", 0, 1);
			if (__LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_FLEE1", 8, 1, 0, 0))
			{
				iLocal_293 = 1;
			}
		}
		else if (__LIB_0__::func_121(Local_337[1 /*7*/]))
		{
			__LIB_0__::func_222(&uLocal_108, 4, Local_337[1 /*7*/], "JOSEF", 0, 1);
			if (__LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_FLEE2", 8, 1, 0, 0))
			{
				iLocal_293 = 1;
			}
		}
		else
		{
			iLocal_293 = 1;
		}
	}
}

void func_29(int iParam0, int iParam1)//Position - 0xF0D
{
	if (iParam0 == 1)
	{
		if (iParam1 == 1)
		{
			__LIB_0__::func_0(&(Local_337[0 /*7*/]));
			__LIB_0__::func_0(&(Local_337[1 /*7*/]));
		}
		__LIB_0__::func_0(&iLocal_365);
		__LIB_0__::func_0(&(uLocal_339[0]));
		__LIB_0__::func_0(&(uLocal_339[1]));
		__LIB_0__::func_0(&iLocal_368);
	}
	else
	{
		if (iParam1 == 1)
		{
			__LIB_0__::func_124(&(Local_337[0 /*7*/]), 1, 0, 1);
			__LIB_0__::func_124(&(Local_337[1 /*7*/]), 1, 0, 1);
		}
		__LIB_0__::func_124(&iLocal_365, 1, 0, 1);
		__LIB_0__::func_124(&(uLocal_339[0]), 1, 0, 1);
		__LIB_0__::func_124(&(uLocal_339[1]), 1, 0, 1);
		__LIB_0__::func_124(&iLocal_368, 1, 0, 1);
	}
}

void func_32()//Position - 0x1039
{
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	if (iLocal_96 == 0)
	{
		iLocal_95++;
	}
	else
	{
		iLocal_95 = iLocal_96;
	}
	iLocal_96 = 0;
	iLocal_97 = 0;
}

void func_37()//Position - 0x1104
{
	if (iLocal_98 != 7)
	{
		func_38(Local_337[0 /*7*/]);
		func_38(Local_337[1 /*7*/]);
	}
	func_38(uLocal_339[0]);
	func_38(uLocal_339[1]);
}

void func_38(int iParam0)//Position - 0x113A
{
	int iVar0;
	if (__LIB_0__::func_121(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && iVar0 == PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_384);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, MISC::GET_RANDOM_INT_IN_RANGE(0, 250), 0);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_384);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_384);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_384);
			}
			else
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, false);
				PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 2, true);
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == iParam0)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar0))
					{
					}
					else
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(iParam0, iVar0, 30f, 786468);
					}
				}
				else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false) == iParam0 && VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar0))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iVar0);
					}
					TASK::OPEN_SEQUENCE_TASK(&iLocal_384);
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, iVar0, false);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iVar0, 30f, 786468);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_384);
					TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_384);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_384);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
				}
			}
		}
		else
		{
			TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
		}
		PED::SET_PED_KEEP_TASK(iParam0, true);
	}
}

void func_41()//Position - 0x12B9
{
	__LIB_0__::func_714(&iLocal_317);
	__LIB_0__::func_714(&iLocal_332);
	__LIB_0__::func_714(&(uLocal_340[0]));
	__LIB_0__::func_714(&(uLocal_340[1]));
	__LIB_0__::func_714(&iLocal_338);
}

void func_43()//Position - 0x130A
{
	iLocal_101 = 0;
	iLocal_97 = 1;
}

void func_44()//Position - 0x1318
{
	func_277(0, joaat("WEAPON_STUNGUN"), 1, 1);
	func_277(1, joaat("WEAPON_STUNGUN"), 1, 1);
	func_277(2, joaat("WEAPON_STUNGUN"), 1, 1);
	__LIB_0__::func_712(56, 2, 1);
	SYSTEM::WAIT(0);
	__LIB_0__::func_712(57, 2, 1);
	__LIB_14__::func_593(2, 1, 500, 0, 0);
	func_45(92, 1);
	func_718();
}

void func_45(int iParam0, bool bParam1)//Position - 0x136F
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
	func_73();
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

void func_73()//Position - 0x2521
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
				if (func_190(iVar1, 14, iVar2))
				{
					func_74(iVar1, 14, iVar2);
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

int func_74(int iParam0, int iParam1, int iParam2)//Position - 0x25E2
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
	if (!func_190(iParam0, iParam1, iParam2))
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
				func_74(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_74(iParam0, 14, uVar5[iVar3]))
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
	if (func_117(iParam0, iVar0, &iVar7, 0))
	{
		func_77(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_75(iParam0, iVar0, &iVar7))
	{
		func_77(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_75(int iParam0, int iParam1, int iParam2)//Position - 0x279E
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_190(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_77(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x2865
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
										func_77(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_77(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_83(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_117(iParam0, iVar10, &iVar4, 1))
							{
								func_77(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_77(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_77(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_77(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_77(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_77(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_77(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_77(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_77(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_77(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_117(iParam0, iVar10, &iVar4, 0))
		{
			func_77(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_75(iParam0, iVar10, &iVar4))
		{
			func_77(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_83(int iParam0, int iParam1, int iParam2)//Position - 0x38A2
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
				if (func_190(iParam0, iParam1, iVar0))
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
				if (func_190(iParam0, iParam1, iVar1))
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

int func_117(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9F7D
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_190(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_190(int iParam0, int iParam1, int iParam2)//Position - 0x20360
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
				if (!func_190(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_190(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_190(iParam0, 14, iVar4))
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
			if (!func_190(iParam0, 14, uVar8[iVar7]))
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

void func_277(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x28D03
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_43(iParam0))
	{
		iVar0 = __LIB_17__::func_907(iParam0, iParam1);
		iVar1 = __LIB_3__::func_371(iParam1);
		iVar2 = __LIB_0__::func_160(iVar1);
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, iVar2);
		}
		__LIB_17__::func_910(iParam0, iParam1, iVar0);
		if (bParam3)
		{
			func_278(iParam0, iParam1);
		}
	}
}

void func_278(int iParam0, int iParam1)//Position - 0x28D5D
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = __LIB_0__::func_722(iParam1, iVar0);
	while (iVar1 != 0)
	{
		func_279(iParam0, iParam1, iVar1, 1);
		iVar0++;
		iVar1 = __LIB_0__::func_722(iParam1, iVar0);
	}
}

void func_279(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x28D96
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_43(iParam0))
	{
		iVar0 = __LIB_17__::func_906(iParam0, iParam1, iParam2);
		iVar1 = __LIB_6__::func_350(iParam2, iParam1);
		iVar2 = __LIB_0__::func_160(iVar1);
		if (bParam3)
		{
			MISC::SET_BIT(&iVar0, iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, iVar2);
		}
		__LIB_17__::func_908(iParam0, iParam1, iParam2, iVar0);
	}
}

void func_295()//Position - 0x2CA96
{
	switch (iLocal_97)
	{
		case 0:
			func_43();
			func_336(1);
			iLocal_283 = 0;
			iLocal_284 = 0;
			iLocal_321 = 0;
			break;
		case 1:
			if (func_335() || (iLocal_389 >= 0 && MISC::GET_GAME_TIMER() >= iLocal_389))
			{
				if (__LIB_0__::func_121(iLocal_326) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_326, false))
				{
					__LIB_0__::func_630(778);
				}
				iLocal_97 = 2;
			}
			else if (iLocal_321 == 0)
			{
				func_332();
				func_331();
				func_314();
				func_303();
				func_302();
				func_300();
			}
			else
			{
				if (iLocal_389 < 0)
				{
					iLocal_389 = MISC::GET_GAME_TIMER() + 30000;
				}
				func_297();
				func_296();
			}
			break;
		case 2:
			func_32();
			__LIB_0__::func_714(&iLocal_338);
			break;
	}
}

void func_296()//Position - 0x2CB62
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if ((__LIB_0__::func_121(Local_337[iVar0 /*7*/]) && PED::IS_PED_BEING_STUNNED(Local_337[iVar0 /*7*/], 0)) && ENTITY::GET_ENTITY_HEALTH(Local_337[iVar0 /*7*/]) > 0)
		{
			ENTITY::SET_ENTITY_HEALTH(Local_337[iVar0 /*7*/], 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if ((__LIB_0__::func_121(uLocal_339[iVar0]) && PED::IS_PED_BEING_STUNNED(uLocal_339[iVar0], 0)) && ENTITY::GET_ENTITY_HEALTH(uLocal_339[iVar0]) > 0)
		{
			ENTITY::SET_ENTITY_HEALTH(uLocal_339[iVar0], 0, 0);
		}
		iVar0++;
	}
}

void func_297()//Position - 0x2CC10
{
	if ((iLocal_284 == 0 && func_298(1, 1)) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_CYA", 8, 0, 0, 0))
	{
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 3.5f, 0);
		iLocal_284 = 1;
	}
}

int func_298(int iParam0, int iParam1)//Position - 0x2CC51
{
	if (iLocal_101 == 1)
	{
		return 0;
	}
	if ((iParam1 == 1 && HUD::IS_MESSAGE_BEING_DISPLAYED()) && MISC::GET_PROFILE_SETTING(203) > 0)
	{
		return 0;
	}
	if (__LIB_0__::func_75())
	{
		return 0;
	}
	if (iParam0 == 1 && !MISC::ARE_STRINGS_EQUAL(&cLocal_310, ""))
	{
		return 0;
	}
	return 1;
}

void func_300()//Position - 0x2CCCD
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (((iLocal_342[iVar0] > 1 && __LIB_0__::func_121(uLocal_339[iVar0])) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uLocal_339[iVar0], joaat("WEAPON_STUNGUN"), 0))
		{
			WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(uLocal_339[iVar0]);
			iLocal_359++;
			if (iLocal_359 >= 8)
			{
				ENTITY::SET_ENTITY_HEALTH(uLocal_339[iVar0], 0, 0);
			}
		}
		iVar0++;
	}
	if (iLocal_359 < 8 && iLocal_359 > iLocal_360 * 2)
	{
		func_301();
	}
}

void func_301()//Position - 0x2CD6C
{
	if (((iLocal_360 < 3 && (iLocal_342[0] != 6 || iLocal_342[1] != 6)) && func_298(1, 1)) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", sLocal_361[iLocal_360], 8, 0, 0, 0))
	{
		iLocal_360++;
	}
}

void func_302()//Position - 0x2CDC5
{
	if (((((Local_337[0 /*7*/].f_3 == 5 && Local_337[1 /*7*/].f_3 == 5) && iLocal_342[0] == 6) && iLocal_342[1] == 6) && __LIB_0__::func_121(iLocal_316)) && __LIB_0__::func_121(Local_337[0 /*7*/]))
	{
		VEHICLE::SET_VEHICLE_SIREN(iLocal_316, false);
		TASK::TASK_VEHICLE_DRIVE_WANDER(Local_337[0 /*7*/], iLocal_316, 10f, 786603);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_316, true);
		ENTITY::SET_ENTITY_PROOFS(iLocal_316, false, false, false, true, false, false, false, false);
		if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_316) < 500f)
		{
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_316, 500f);
		}
		if (ENTITY::GET_ENTITY_HEALTH(iLocal_316) < 500)
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_316, 500, 0);
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_316, 0, false))
		{
			VEHICLE::SET_VEHICLE_TYRE_FIXED(iLocal_316, 0);
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_316, 1, false))
		{
			VEHICLE::SET_VEHICLE_TYRE_FIXED(iLocal_316, 1);
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_316, 4, false))
		{
			VEHICLE::SET_VEHICLE_TYRE_FIXED(iLocal_316, 4);
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_316, 5, false))
		{
			VEHICLE::SET_VEHICLE_TYRE_FIXED(iLocal_316, 5);
		}
		iLocal_321 = 1;
	}
}

void func_303()//Position - 0x2CEDB
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_121(iLocal_316))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (__LIB_0__::func_121(Local_337[iVar0 /*7*/]) && __LIB_0__::func_121(uLocal_339[iVar0]))
			{
				switch (Local_337[iVar0 /*7*/].f_3)
				{
					case 0:
						if (func_311())
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_337[iVar0 /*7*/], joaat("WEAPON_STUNGUN"), 200, true, true);
							VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_316, 10f, 2, false);
							TASK::TASK_LEAVE_ANY_VEHICLE(Local_337[iVar0 /*7*/], iVar0 * 1500 + 250, 320);
							Local_337[iVar0 /*7*/].f_3 = 1;
						}
						break;
					case 1:
						if (!PED::IS_PED_IN_VEHICLE(Local_337[iVar0 /*7*/], iLocal_316, false))
						{
							if (__LIB_0__::func_687(Local_337[iVar0 /*7*/], uLocal_339[iVar0], 5f, 1))
							{
								PED::SET_PED_CONFIG_FLAG(Local_337[iVar0 /*7*/], 185, true);
								Local_337[iVar0 /*7*/].f_3 = 2;
							}
							else if (!__LIB_6__::func_572(Local_337[iVar0 /*7*/], joaat("SCRIPT_TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY")))
							{
								PED::SET_PED_CONFIG_FLAG(Local_337[iVar0 /*7*/], 185, true);
								TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Local_337[iVar0 /*7*/], uLocal_339[iVar0], uLocal_339[iVar0], 2f, false, 0.5f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
							}
						}
						break;
					case 2:
						if (iLocal_342[iVar0] == 6)
						{
							Local_337[iVar0 /*7*/].f_3 = 3;
						}
						else if (!__LIB_0__::func_687(Local_337[iVar0 /*7*/], uLocal_339[iVar0], 6f, 1))
						{
							Local_337[iVar0 /*7*/].f_3 = 1;
						}
						else if (!__LIB_6__::func_572(Local_337[iVar0 /*7*/], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")))
						{
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_337[iVar0 /*7*/], uLocal_339[iVar0], -1, false);
						}
						break;
					case 3:
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_316, Local_337[iVar0 /*7*/].f_2, false))
						{
							if (iVar0 == 0)
							{
								__LIB_0__::func_714(&iLocal_338);
								if (__LIB_0__::func_501("MIN1_10", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_316, false);
							}
							else if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_316, false) && func_298(1, 1)) && __LIB_0__::func_687(Local_337[iVar0 /*7*/], iLocal_316, 50f, 1)) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_NOJOSEF", 8, 0, 0, 0))
							{
							}
							Local_337[iVar0 /*7*/].f_3 = 4;
						}
						else
						{
							if (iVar0 == 0)
							{
								if (!HUD::DOES_BLIP_EXIST(iLocal_338))
								{
									iLocal_338 = __LIB_14__::func_661(Local_337[iVar0 /*7*/], 1, 1, 5);
									__LIB_0__::func_229("MIN1_10", 7500, 1);
								}
								if (iLocal_290 == 0)
								{
									if ((func_298(1, 0) && __LIB_0__::func_687(Local_337[iVar0 /*7*/], iLocal_316, 50f, 1)) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_BRING", 8, 1, 0, 0))
									{
										iLocal_290 = 1;
									}
								}
								else if (((iLocal_291 == 0 && func_298(1, 1)) && __LIB_0__::func_687(Local_337[iVar0 /*7*/], iLocal_316, 50f, 1)) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_NOJO", 8, 0, 0, 0))
								{
									iLocal_291 = 1;
								}
							}
							if (!__LIB_0__::func_687(Local_337[iVar0 /*7*/], iLocal_316, 100f, 1))
							{
								func_304(13);
							}
							else if (!__LIB_0__::func_687(Local_337[iVar0 /*7*/], iLocal_316, 10f, 1))
							{
								if (!__LIB_6__::func_572(Local_337[iVar0 /*7*/], joaat("SCRIPT_TASK_GO_TO_ENTITY")))
								{
									TASK::TASK_GO_TO_ENTITY(Local_337[iVar0 /*7*/], iLocal_316, 30000, 5f, 2f, 2f, 0);
								}
							}
							else if (!PED::IS_PED_FACING_PED(Local_337[iVar0 /*7*/], PLAYER::PLAYER_PED_ID(), 30f))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_337[iVar0 /*7*/], PLAYER::PLAYER_PED_ID(), 0);
							}
							else if (!__LIB_6__::func_572(Local_337[iVar0 /*7*/], joaat("SCRIPT_TASK_STAND_STILL")))
							{
								TASK::TASK_STAND_STILL(Local_337[iVar0 /*7*/], -1);
							}
						}
						break;
					case 4:
						if (PED::IS_PED_IN_VEHICLE(Local_337[iVar0 /*7*/], iLocal_316, false))
						{
							PED::SET_PED_KEEP_TASK(Local_337[iVar0 /*7*/], true);
							Local_337[iVar0 /*7*/].f_3 = 5;
						}
						else if (!__LIB_6__::func_572(Local_337[iVar0 /*7*/], joaat("SCRIPT_TASK_ENTER_VEHICLE")))
						{
							TASK::TASK_ENTER_VEHICLE(Local_337[iVar0 /*7*/], iLocal_316, 30000, Local_337[iVar0 /*7*/].f_2, 1f, 520, 0);
						}
						break;
					case 5:
						if ((((((iLocal_292 == 0 && iVar0 == 1) && iLocal_342[0] == 6) && iLocal_342[1] == 6) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_316, false)) && func_298(1, 1)) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_GOBACK2", 8, 0, 0, 0))
						{
							iLocal_292 = 1;
						}
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_304(int iParam0)//Position - 0x2D368
{
	if (iLocal_101 == 0)
	{
		iLocal_98 = iParam0;
		iLocal_97 = 2;
		iLocal_96 = 9;
	}
}

int func_311()//Position - 0x2D47F
{
	if (func_313())
	{
		return 1;
	}
	if (__LIB_0__::func_121(iLocal_316))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_316, false))
		{
			return 1;
		}
		if ((__LIB_0__::func_121(iLocal_326) && ENTITY::GET_ENTITY_SPEED(iLocal_316) < 1f) && __LIB_0__::func_76(iLocal_316, iLocal_326, 1) < 30f)
		{
			return 1;
		}
	}
	return 0;
}

int func_313()//Position - 0x2D541
{
	if (iLocal_342[0] > 2 && iLocal_342[1] > 2)
	{
		return 1;
	}
	return 0;
}

void func_314()//Position - 0x2D566
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(iLocal_316))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (__LIB_0__::func_121(uLocal_339[iVar0]))
			{
				switch (iLocal_342[iVar0])
				{
					case 0:
						if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_339[iVar0], false))
						{
							PED::SET_PED_CAN_BE_TARGETTED(uLocal_339[iVar0], true);
							if (__LIB_0__::func_724(uLocal_339[iVar0], Local_364, 1) < 25f)
							{
								TASK::TASK_WANDER_IN_AREA(uLocal_339[iVar0], Local_364, 10f, 0f, 0f);
							}
							else
							{
								TASK::TASK_WANDER_IN_AREA(uLocal_339[iVar0], ENTITY::GET_ENTITY_COORDS(uLocal_339[iVar0], true), 10f, 0f, 0f);
							}
							iLocal_342[iVar0] = 1;
						}
						else if (iLocal_355[iVar0] > -1)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_355[iVar0]) > 3000)
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_339[iVar0], 0, 256);
								iLocal_355[iVar0] = -1;
							}
						}
						break;
					case 1:
						if ((MISC::GET_GAME_TIMER() - iLocal_348[iVar0]) > iLocal_349[iVar0])
						{
							if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_339[iVar0]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_339[iVar0]))
							{
								func_329(iVar0, "MIN1_AIM", &(iLocal_352[iVar0]), 2);
							}
							else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_339[iVar0]))
							{
								func_329(iVar0, "MIN1_BUMP", &(iLocal_351[iVar0]), 3);
							}
							else
							{
								func_329(iVar0, "MIN1_DRNK", &(iLocal_350[iVar0]), 4);
							}
						}
						PED::SET_PED_RESET_FLAG(uLocal_339[iVar0], 187, true);
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_339[iVar0], PLAYER::PLAYER_PED_ID(), true))
						{
							if (func_328(iVar0))
							{
								WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(uLocal_339[iVar0]);
								__LIB_0__::func_714(&(uLocal_340[iVar0]));
								PED::SET_PED_CAN_BE_TARGETTED(uLocal_339[iVar0], false);
								PED::SET_PED_CAN_BE_DRAGGED_OUT(uLocal_339[iVar0], false);
								PED::SET_PED_MOVEMENT_CLIPSET(uLocal_339[iVar0], "MOVE_M@BAIL_BOND_NOT_TAZERED", 0.25f);
								iLocal_342[iVar0] = 2;
							}
						}
						break;
					case 2:
						func_329(iVar0, "MIN1_SHOCK", &(iLocal_353[iVar0]), 1);
						func_327(iVar0);
						if (!PED::IS_PED_BEING_STUNNED(uLocal_339[iVar0], 0) && !TASK::IS_PED_GETTING_UP(uLocal_339[iVar0]))
						{
							TASK::TASK_CLEAR_LOOK_AT(uLocal_339[iVar0]);
							__LIB_9__::func_766(uLocal_339[iVar0]);
							TASK::CLEAR_PED_TASKS(uLocal_339[iVar0]);
							PED::SET_PED_CAN_BE_DRAGGED_OUT(uLocal_339[iVar0], false);
							if (iVar0 == 0)
							{
								TASK::TASK_PLAY_ANIM(uLocal_339[iVar0], "missminuteman_1ig_2", "tasered_1", 4f, -4f, -1, 32768, 0f, false, false, false);
							}
							else
							{
								TASK::TASK_PLAY_ANIM(uLocal_339[iVar0], "missminuteman_1ig_2", "tasered_2", 4f, -4f, -1, 32768, 0f, false, false, false);
							}
							iLocal_342[iVar0] = 3;
						}
						break;
					case 3:
						func_317(iVar0);
						if (!__LIB_6__::func_572(uLocal_339[iVar0], joaat("SCRIPT_TASK_PLAY_ANIM")))
						{
							Local_337[iVar0 /*7*/].f_5 = 0;
							Local_337[iVar0 /*7*/].f_4 = MISC::GET_GAME_TIMER();
							Local_337[iVar0 /*7*/].f_6 = 5000;
							iLocal_342[iVar0] = 4;
						}
						break;
					case 4:
						if ((iLocal_346[iVar0] == 0 && iLocal_345[iVar0] == 1) && PED::IS_PED_BEING_STUNNED(uLocal_339[iVar0], 0))
						{
							iLocal_346[iVar0] = 1;
							PED::SET_PED_MOVEMENT_CLIPSET(uLocal_339[iVar0], "MOVE_M@BAIL_BOND_TAZERED", 0.25f);
						}
						if (!PED::IS_PED_BEING_STUNNED(uLocal_339[iVar0], 0) && !TASK::IS_PED_GETTING_UP(uLocal_339[iVar0]))
						{
							iLocal_345[iVar0] = 1;
							func_315(iVar0);
							if (__LIB_0__::func_76(uLocal_339[iVar0], iLocal_316, 1) > 5f)
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_339[iVar0], "missminuteman_1ig_2", "handsup_base", 3))
								{
									TASK::TASK_PLAY_ANIM(uLocal_339[iVar0], "missminuteman_1ig_2", "handsup_base", 2f, -2f, -1, 65585, 0f, false, false, false);
								}
								if (!__LIB_6__::func_572(uLocal_339[iVar0], joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
								{
									if (__LIB_0__::func_76(uLocal_339[iVar0], iLocal_316, 1) < 20f)
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(uLocal_339[iVar0], iLocal_316, 20000, 0.5f, fLocal_347[iVar0], 0f, 1f, 0);
									}
									else if (__LIB_0__::func_76(uLocal_339[iVar0], iLocal_316, 1) < 40f)
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(uLocal_339[iVar0], iLocal_316, 40000, 0.5f, fLocal_347[iVar0], 0f, 1f, 0);
									}
									else
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(uLocal_339[iVar0], iLocal_316, 60000, 0.5f, fLocal_347[iVar0], 0f, 1f, 0);
									}
								}
							}
							else
							{
								iLocal_342[iVar0] = 5;
							}
						}
						break;
					case 5:
						if (PED::IS_PED_SITTING_IN_VEHICLE(uLocal_339[iVar0], iLocal_316))
						{
							PED::SET_PED_KEEP_TASK(uLocal_339[iVar0], true);
							iLocal_342[iVar0] = 6;
						}
						else if (PED::IS_PED_BEING_STUNNED(uLocal_339[iVar0], 0))
						{
							iLocal_342[iVar0] = 4;
						}
						else
						{
							func_315(iVar0);
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_339[iVar0], "missminuteman_1ig_2", "handsup_base", 3) && __LIB_0__::func_76(uLocal_339[iVar0], iLocal_316, 1) < 3f)
							{
								TASK::STOP_ANIM_TASK(uLocal_339[iVar0], "missminuteman_1ig_2", "handsup_base", -2f);
							}
							if (!__LIB_6__::func_572(uLocal_339[iVar0], joaat("SCRIPT_TASK_ENTER_VEHICLE")))
							{
								TASK::TASK_ENTER_VEHICLE(uLocal_339[iVar0], iLocal_316, 20000, iLocal_341[iVar0], 1f, 520, 0);
							}
						}
						break;
					case 6:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_339[iVar0], "missminuteman_1ig_2", "handsup_base", 3))
						{
							TASK::STOP_ANIM_TASK(uLocal_339[iVar0], "missminuteman_1ig_2", "handsup_base", -1000f);
						}
						if (!PED::IS_PED_SITTING_IN_VEHICLE(uLocal_339[iVar0], iLocal_316))
						{
							iLocal_342[iVar0] = 4;
						}
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_315(int iParam0)//Position - 0x2DB21
{
	func_317(iParam0);
	if ((MISC::GET_GAME_TIMER() - iLocal_348[iParam0]) > iLocal_349[iParam0])
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_339[iParam0]))
		{
			func_329(iParam0, "MIN1_BUMP", &(iLocal_351[iParam0]), 3);
		}
		else
		{
			func_329(iParam0, "MIN1_WALK", &(iLocal_354[iParam0]), 2);
		}
	}
	func_316(iParam0);
}

void func_316(int iParam0)//Position - 0x2DB84
{
	if ((((Local_337[iParam0 /*7*/].f_5 < 3 && func_298(1, 1)) && (MISC::GET_GAME_TIMER() - Local_337[iParam0 /*7*/].f_4) > Local_337[iParam0 /*7*/].f_6) && !__LIB_0__::func_687(iLocal_316, uLocal_339[iParam0], 4f, 1)) && __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), uLocal_339[iParam0], 50f, 1))
	{
		if (iParam0 == 0)
		{
			if (__LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_INSULT1", 7, 0, 0, 0))
			{
				Local_337[iParam0 /*7*/].f_5++;
				Local_337[iParam0 /*7*/].f_4 = MISC::GET_GAME_TIMER();
				Local_337[iParam0 /*7*/].f_6 = MISC::GET_RANDOM_INT_IN_RANGE(8000, 10000);
			}
		}
		else if (__LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_INSULT2", 7, 0, 0, 0))
		{
			Local_337[iParam0 /*7*/].f_5++;
			Local_337[iParam0 /*7*/].f_4 = MISC::GET_GAME_TIMER();
			Local_337[iParam0 /*7*/].f_6 = MISC::GET_RANDOM_INT_IN_RANGE(8000, 10000);
		}
	}
}

void func_317(int iParam0)//Position - 0x2DC8B
{
	if (iLocal_344[iParam0] == 0 && func_298(1, 1))
	{
		if (iParam0 == 0)
		{
			if (__LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_SOBER1", 8, 0, 0, 0))
			{
				iLocal_344[iParam0] = 1;
			}
		}
		else if (__LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_SOBER2", 8, 0, 0, 0))
		{
			iLocal_344[iParam0] = 1;
		}
	}
}

void func_327(int iParam0)//Position - 0x2DF72
{
	if (iLocal_343[iParam0] == 0)
	{
		if (func_298(1, 1))
		{
			if (iLocal_356 == 0)
			{
				if (__LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_CAR1", 8, 0, 0, 0))
				{
					iLocal_356 = 1;
					iLocal_343[iParam0] = 1;
				}
			}
			else if (iLocal_356 == 1)
			{
				if (__LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_CAR2", 8, 0, 0, 0))
				{
					iLocal_356 = 2;
					iLocal_343[iParam0] = 1;
				}
			}
		}
	}
}

int func_328(int iParam0)//Position - 0x2DFE1
{
	if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uLocal_339[iParam0], joaat("WEAPON_STUNGUN"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uLocal_339[iParam0], joaat("WEAPON_UNARMED"), 0))
	{
		return 1;
	}
	return 0;
}

void func_329(int iParam0, char* sParam1, var uParam2, int iParam3)//Position - 0x2E019
{
	struct<2> Var0;
	if ((((*uParam2 < iParam3 && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID())) && __LIB_0__::func_121(uLocal_339[iParam0])) && func_298(1, 1)) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), uLocal_339[iParam0], 1) < 50f)
	{
		StringCopy(&Var0, sParam1, 16);
		if (iParam0 == 0)
		{
			StringIntConCat(&Var0, 1, 16);
		}
		else
		{
			StringIntConCat(&Var0, 2, 16);
		}
		if (__LIB_2__::func_859(&uLocal_108, "MIN1AUD", &Var0, 8, 0, 0, 0))
		{
			*uParam2++;
			iLocal_348[iParam0] = MISC::GET_GAME_TIMER();
		}
	}
}

void func_331()//Position - 0x2E0E6
{
	if ((iLocal_283 == 0 && func_298(1, 1)) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_OUTRO", 8, 0, 0, 0))
	{
		iLocal_283 = 1;
	}
}

void func_332()//Position - 0x2E11C
{
	int iVar0;
	if (iLocal_101 == 0)
	{
		if (__LIB_0__::func_121(iLocal_326))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_332) && iLocal_100 == 2)
			{
				__LIB_14__::func_655(iLocal_332, iLocal_326, fLocal_370, 0.8f, 0);
			}
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (__LIB_0__::func_121(uLocal_339[iVar0]) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), uLocal_339[iVar0], 1) > fLocal_370)
			{
				if ((((iLocal_95 == 6 && __LIB_0__::func_121(Local_337[0 /*7*/])) && __LIB_0__::func_121(Local_337[1 /*7*/])) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_337[0 /*7*/], 1) > (fLocal_370 / 2f)) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_337[1 /*7*/], 1) > (fLocal_370 / 2f))
				{
					func_304(6);
				}
				else
				{
					func_304(7);
				}
			}
			iVar0++;
		}
	}
}

int func_335()//Position - 0x2E3C6
{
	int iVar0;
	if (__LIB_0__::func_121(iLocal_316) && __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_316, 50f, 1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_0__::func_121(Local_337[iVar0 /*7*/]) && __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_337[iVar0 /*7*/], 50f, 1))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_0__::func_121(uLocal_339[iVar0]) && __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), uLocal_339[iVar0], 50f, 1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_336(bool bParam0)//Position - 0x2E475
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_0__::func_121(Local_337[iVar0 /*7*/]))
		{
			if (bParam0)
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_337[iVar0 /*7*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			}
			else
			{
				TASK::TASK_CLEAR_LOOK_AT(Local_337[iVar0 /*7*/]);
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
	}
}

void func_337()//Position - 0x2E4CC
{
	int iVar0;
	switch (iLocal_97)
	{
		case 0:
			func_43();
			if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"), false))
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"), 200, true, true);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"), true);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "STUN_COLLECT", "MINUTE_MAN_01_SOUNDSET", true);
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (__LIB_0__::func_121(uLocal_339[iVar0]))
				{
					WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(uLocal_339[iVar0]);
					iLocal_342[iVar0] = 0;
					iLocal_343[iVar0] = 0;
					iLocal_344[iVar0] = 0;
					iLocal_345[iVar0] = 0;
					iLocal_346[iVar0] = 0;
					iLocal_348[iVar0] = MISC::GET_GAME_TIMER();
					iLocal_350[iVar0] = 0;
					iLocal_351[iVar0] = 0;
					iLocal_352[iVar0] = 0;
					iLocal_353[iVar0] = 0;
					iLocal_354[iVar0] = 0;
					__LIB_16__::func_300(uLocal_339[iVar0]);
					PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_339[iVar0], true);
					TASK::TASK_LOOK_AT_ENTITY(uLocal_339[iVar0], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_339[iVar0], false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_339[iVar0], iVar0 * 1500, 65792);
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_340[iVar0]))
					{
						uLocal_340[iVar0] = __LIB_0__::func_666(uLocal_339[iVar0], 1, 145);
					}
					iLocal_355[iVar0] = MISC::GET_GAME_TIMER();
				}
				iVar0++;
			}
			iLocal_349[0] = 8000;
			iLocal_349[1] = 10000;
			func_344();
			Local_337[0 /*7*/].f_3 = 0;
			Local_337[1 /*7*/].f_3 = 0;
			fLocal_370 = 100f;
			iLocal_290 = 0;
			iLocal_291 = 0;
			iLocal_292 = 0;
			iLocal_282 = 0;
			iLocal_356 = 0;
			iLocal_359 = 0;
			iLocal_360 = 0;
			sLocal_361[0] = "MIN1_STOP1";
			sLocal_361[1] = "MIN1_STOP2";
			sLocal_361[2] = "MIN1_STOP3";
			iLocal_341[0] = 1;
			iLocal_341[1] = 2;
			fLocal_347[0] = -3f;
			fLocal_347[1] = 3f;
			iLocal_374 = MISC::GET_GAME_TIMER();
			iLocal_371 = MISC::GET_GAME_TIMER();
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_315, 3);
			STREAMING::REQUEST_ANIM_DICT("move_m@drunk@verydrunk");
			func_343(6);
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 6f, 0);
			break;
		case 1:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (func_313())
			{
				iLocal_97 = 2;
			}
			else
			{
				func_332();
				func_314();
				func_303();
				func_342();
				func_341();
				func_300();
				func_338();
			}
			break;
		case 2:
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 0);
			func_32();
			break;
	}
}

void func_338()//Position - 0x2E73B
{
	if (func_340())
	{
		iLocal_371 = MISC::GET_GAME_TIMER();
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
		{
			__LIB_14__::func_654(&uLocal_108, "MIN1AUD", "MIN1_SING1", 3, 1, 0);
		}
		else
		{
			__LIB_14__::func_654(&uLocal_108, "MIN1AUD", "MIN1_SING2", 3, 1, 0);
		}
	}
}

int func_340()//Position - 0x2E7B9
{
	if (fLocal_331 > 1400f)
	{
		return 0;
	}
	if (iLocal_279 == 0)
	{
		return 0;
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_371) < 10000)
	{
		return 0;
	}
	if (__LIB_0__::func_121(iLocal_326) && !__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_326, 50f, 1))
	{
		return 0;
	}
	return 1;
}

void func_341()//Position - 0x2E814
{
	if (((((((iLocal_356 < 2 && iLocal_358 < 5) && iLocal_282 == 1) && func_298(1, 1)) && __LIB_0__::func_121(Local_337[0 /*7*/])) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_337[0 /*7*/], 1) < 50f) && (MISC::GET_GAME_TIMER() - iLocal_374) > (20000 * iLocal_358 + 1)) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", &(Local_357[iLocal_358 /*4*/]), 8, 0, 0, 0))
	{
		iLocal_358++;
	}
}

void func_342()//Position - 0x2E8A6
{
	if ((iLocal_282 == 0 && func_298(1, 1)) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_STUN", 8, 1, 0, 0))
	{
		iLocal_282 = 1;
		__LIB_0__::func_229("MIN1_07", 7500, 1);
	}
}

void func_343(int iParam0)//Position - 0x2E8E8
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
			STREAMING::REQUEST_MODEL(iLocal_315);
			break;
		case 3:
			STREAMING::REQUEST_MODEL(iLocal_103[1]);
			break;
		case 4:
			STREAMING::REQUEST_MODEL(iLocal_325);
			STREAMING::REQUEST_MODEL(iLocal_103[0]);
			VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Min1_Van");
			VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Min1_PV");
			STREAMING::REQUEST_ANIM_DICT("missminuteman_1ig_1");
			break;
		case 6:
			STREAMING::REQUEST_ANIM_DICT("missminuteman_1ig_2");
			STREAMING::REQUEST_ANIM_SET("MOVE_M@BAIL_BOND_NOT_TAZERED");
			STREAMING::REQUEST_ANIM_SET("MOVE_M@BAIL_BOND_TAZERED");
			break;
		case 8:
			STREAMING::REQUEST_MODEL(iLocal_325);
			break;
	}
	iVar0 = 0;
	while (iVar0 == 0)
	{
		switch (iParam0)
		{
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(iLocal_315))
				{
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_315, true);
					iVar0 = 1;
				}
				break;
			case 3:
				if (STREAMING::HAS_MODEL_LOADED(iLocal_103[1]))
				{
					iVar0 = 1;
				}
				break;
			case 4:
				if ((((STREAMING::HAS_MODEL_LOADED(iLocal_325) && STREAMING::HAS_MODEL_LOADED(iLocal_103[0])) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(500, "Min1_Van")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(500, "Min1_PV")) && STREAMING::HAS_ANIM_DICT_LOADED("missminuteman_1ig_1"))
				{
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_325, true);
					iVar0 = 1;
				}
				break;
			case 6:
				if ((STREAMING::HAS_ANIM_DICT_LOADED("missminuteman_1ig_2") && STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_NOT_TAZERED")) && STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_TAZERED"))
				{
					iVar0 = 1;
				}
				break;
			case 8:
				if (STREAMING::HAS_MODEL_LOADED(iLocal_325))
				{
					iVar0 = 1;
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_344()//Position - 0x2EA6F
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&(Local_357[iVar0 /*4*/]), "MIN1_HURRY", 16);
		StringIntConCat(&(Local_357[iVar0 /*4*/]), iVar0 + 1, 16);
		iVar0++;
	}
	iLocal_358 = 0;
}

void func_352()//Position - 0x2ECEB
{
	switch (iLocal_97)
	{
		case 0:
			func_43();
			func_490();
			func_489();
			iLocal_100 = 0;
			iLocal_330 = 500;
			fLocal_370 = 200f;
			iLocal_279 = 0;
			iLocal_306 = 0;
			if (__LIB_0__::func_121(iLocal_326))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MINUTE_01_SCENE"))
				{
					AUDIO::START_AUDIO_SCENE("MINUTE_01_SCENE");
				}
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_326, "MINUTE_01_SCENE_MARIACHI_VEHICLE", 0f);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_326))
				{
					VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(iLocal_326, true);
					VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_326);
				}
			}
			if (__LIB_0__::func_121(iLocal_316) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_316))
			{
				iLocal_322 = 0;
				iLocal_375 = -1;
				VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_316);
			}
			else
			{
				iLocal_322 = 1;
			}
			iLocal_329 = 0;
			iLocal_280 = 0;
			iLocal_281 = 0;
			iLocal_295 = 0;
			iLocal_296 = 0;
			iLocal_297 = 0;
			iLocal_298 = 0;
			iLocal_300 = 0;
			iLocal_301 = 0;
			iLocal_302 = 0;
			iLocal_303 = 0;
			iLocal_304 = 0;
			iLocal_305 = 0;
			iLocal_299 = 0;
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			SYSTEM::WAIT(0);
			func_488(1);
			iLocal_371 = MISC::GET_GAME_TIMER();
			iLocal_372 = MISC::GET_GAME_TIMER();
			iLocal_378 = MISC::GET_GAME_TIMER();
			iLocal_373 = MISC::GET_GAME_TIMER();
			VEHICLE::SET_RANDOM_TRAINS(false);
			VEHICLE::DELETE_ALL_TRAINS();
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			__LIB_0__::func_499(779, 0);
			break;
		case 1:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
			if (__LIB_0__::func_121(iLocal_326))
			{
				func_484();
				func_483();
				func_332();
				func_482();
				if (func_479())
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 2f, 0);
					__LIB_0__::func_498(0, -1);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_326))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_326);
					}
					VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_326, 10f, 1, false);
					VEHICLE::REMOVE_VEHICLE_RECORDING(500, "Min1_Van");
					func_474();
					iLocal_97 = 2;
				}
				else
				{
					func_468();
					func_467();
					func_394();
					func_338();
					func_393();
					func_392();
					func_391();
					func_390();
					func_389();
					func_387();
					func_386();
					func_356();
					func_355();
				}
			}
			break;
		case 2:
			func_32();
			__LIB_0__::func_714(&iLocal_332);
			__LIB_0__::func_714(&iLocal_317);
			__LIB_0__::func_345(&uLocal_82, 0, 0);
			func_336(0);
			func_488(0);
			AUDIO::TRIGGER_MUSIC_EVENT("MM1_STOP");
			AUDIO::STOP_STREAM();
			STREAMING::REMOVE_ANIM_DICT("missminuteman_1ig_1");
			break;
	}
}

void func_355()//Position - 0x2EFF7
{
	if (iLocal_322 == 0)
	{
		if (__LIB_0__::func_695(iLocal_316))
		{
			if (iLocal_375 == -1)
			{
				iLocal_375 = MISC::GET_GAME_TIMER();
			}
			else if ((((((!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_316) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 278 /*INPUT_VEH_MOVE_LEFT*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 279 /*INPUT_VEH_MOVE_RIGHT*/)) || VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_316, -1, false)) || (MISC::GET_GAME_TIMER() - iLocal_375) > 3000)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_316))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_316);
				}
				VEHICLE::REMOVE_VEHICLE_RECORDING(500, "Min1_PV");
				iLocal_322 = 1;
			}
		}
	}
}

void func_356()//Position - 0x2F0A3
{
	if (iLocal_279 == 1 && __LIB_0__::func_121(iLocal_326))
	{
		__LIB_17__::func_115(&uLocal_82, iLocal_326, "MIN1_05", 0, 1, 1, 1);
	}
}

void func_386()//Position - 0x301C9
{
	int iVar0;
	int iVar1;
	if (iLocal_329 == 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (__LIB_0__::func_121(uLocal_339[iVar1]))
			{
				if (!__LIB_6__::func_572(uLocal_339[iVar1], joaat("SCRIPT_TASK_PLAY_ANIM")))
				{
					if (fLocal_331 > 1100f)
					{
						iVar0 = 0;
					}
					else
					{
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
					}
					if (iVar1 == 0)
					{
						switch (iVar0)
						{
							case 0:
								TASK::TASK_PLAY_ANIM(uLocal_339[iVar1], "missminuteman_1ig_1", "base_drunk_mariachi_01", 4f, -4f, -1, 8, 0f, false, false, false);
								break;
							case 1:
								TASK::TASK_PLAY_ANIM(uLocal_339[iVar1], "missminuteman_1ig_1", "idle_sing_1_mariachi_01", 4f, -4f, -1, 8, 0f, false, false, false);
								break;
							case 2:
								TASK::TASK_PLAY_ANIM(uLocal_339[iVar1], "missminuteman_1ig_1", "idle_sing_2_mariachi_01", 4f, -4f, -1, 8, 0f, false, false, false);
								break;
							case 3:
								TASK::TASK_PLAY_ANIM(uLocal_339[iVar1], "missminuteman_1ig_1", "idle_tequila_mariachi_01", 4f, -4f, -1, 8, 0f, false, false, false);
								break;
							case 4:
								TASK::TASK_PLAY_ANIM(uLocal_339[iVar1], "missminuteman_1ig_1", "idle_waive_mariachi_01", 4f, -4f, -1, 8, 0f, false, false, false);
								break;
						}
					}
					else
					{
						switch (iVar0)
						{
							case 0:
								TASK::TASK_PLAY_ANIM(uLocal_339[iVar1], "missminuteman_1ig_1", "base_drunk_mariachi_02", 4f, -4f, -1, 8, 0f, false, false, false);
								break;
							case 1:
								TASK::TASK_PLAY_ANIM(uLocal_339[iVar1], "missminuteman_1ig_1", "idle_sing_1_mariachi_02", 4f, -4f, -1, 8, 0f, false, false, false);
								break;
							case 2:
								TASK::TASK_PLAY_ANIM(uLocal_339[iVar1], "missminuteman_1ig_1", "idle_sing_2_mariachi_02", 4f, -4f, -1, 8, 0f, false, false, false);
								break;
							case 3:
								TASK::TASK_PLAY_ANIM(uLocal_339[iVar1], "missminuteman_1ig_1", "idle_tequila_mariachi_02", 4f, -4f, -1, 8, 0f, false, false, false);
								break;
							case 4:
								TASK::TASK_PLAY_ANIM(uLocal_339[iVar1], "missminuteman_1ig_1", "idle_waive_mariachi_02", 4f, -4f, -1, 8, 0f, false, false, false);
								break;
							}
						}
					}
			}
			iVar1++;
		}
	}
}

void func_387()//Position - 0x303DA
{
	int iVar0;
	if ((iLocal_309 < 4 && func_388()) && func_298(1, 1))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if ((iLocal_308[iVar0] == 0 && __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_307[iVar0 /*3*/], 1) < 10f) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_CRASH2", 8, 0, 0, 0))
			{
				iLocal_308[iVar0] = 1;
				iLocal_309++;
			}
			iVar0++;
		}
	}
}

int func_388()//Position - 0x30463
{
	if (__LIB_0__::func_121(iLocal_316) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_316, false))
	{
		return 1;
	}
	return 0;
}

void func_389()//Position - 0x3048B
{
	int iVar0;
	if (((((((iLocal_382 < 7 && fLocal_331 < 1250f) && iLocal_279 == 1) && (MISC::GET_GAME_TIMER() - iLocal_372) > 12000) && func_388()) && __LIB_0__::func_121(iLocal_326)) && __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_326, 50f, 1)) && func_298(1, 1))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		if (iLocal_380[iVar0] == 0 && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", &(Local_381[iVar0 /*4*/]), 8, 0, 0, 0))
		{
			iLocal_380[iVar0] = 1;
			iLocal_372 = MISC::GET_GAME_TIMER();
			iLocal_382++;
		}
	}
}

void func_390()//Position - 0x3053F
{
	if ((iLocal_279 == 1 && fLocal_331 < 1465f) && __LIB_0__::func_121(iLocal_316))
	{
		if (iLocal_323 == 1)
		{
			if (!func_388())
			{
				iLocal_323 = 0;
				iLocal_303 = 1;
				iLocal_304 = 1;
			}
			else if (func_298(1, 1))
			{
				if ((iLocal_302 < 3 && iLocal_305 == 1) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_GOGO", 8, 0, 0, 0))
				{
					iLocal_302++;
					iLocal_305 = 0;
				}
			}
		}
		else if (func_388())
		{
			iLocal_323 = 1;
			iLocal_305 = 1;
		}
		else if (func_298(1, 1))
		{
			if ((iLocal_300 < 3 && iLocal_303 == 1) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_GETIN", 8, 0, 0, 0))
			{
				iLocal_300++;
				iLocal_303 = 0;
			}
			if ((iLocal_301 < 3 && iLocal_304 == 1) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_BACKIN", 8, 0, 0, 0))
			{
				iLocal_301++;
				iLocal_304 = 0;
			}
		}
	}
}

void func_391()//Position - 0x3064D
{
	if ((iLocal_298 < 3 && __LIB_0__::func_121(iLocal_316)) && __LIB_0__::func_121(iLocal_326))
	{
		if (iLocal_299 == 0)
		{
			if (((func_298(1, 1) && func_388()) && __LIB_0__::func_76(iLocal_316, iLocal_326, 1) > 100f) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_BEHIND", 8, 0, 0, 0))
			{
				iLocal_298++;
				iLocal_299 = 1;
			}
		}
		else if (__LIB_0__::func_76(iLocal_316, iLocal_326, 1) < 75f)
		{
			iLocal_299 = 0;
		}
	}
}

void func_392()//Position - 0x306E2
{
	if (iLocal_296 < 3 && __LIB_0__::func_121(iLocal_316))
	{
		if (iLocal_297 == 0)
		{
			if (((func_298(1, 1) && func_388()) && ENTITY::GET_ENTITY_SPEED(iLocal_316) < 1f) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_STOP", 8, 0, 0, 0))
			{
				iLocal_296++;
				iLocal_297 = 1;
			}
		}
		else if (ENTITY::GET_ENTITY_SPEED(iLocal_316) > 2f)
		{
			iLocal_297 = 0;
		}
	}
}

void func_393()//Position - 0x3075B
{
	if ((((((iLocal_280 == 0 && fLocal_331 > 450f) && func_298(1, 1)) && __LIB_0__::func_121(iLocal_326)) && func_388()) && __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_326, 75f, 1)) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_OFFROAD", 8, 0, 0, 0))
	{
		iLocal_280 = 1;
	}
}

void func_394()//Position - 0x307CA
{
	struct<6> Var0;
	if (iLocal_278 == 1)
	{
		if (iLocal_279 == 0)
		{
			if (((func_388() && func_298(1, 1)) && (MISC::GET_GAME_TIMER() - iLocal_373) > 5000) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_DRIVEB", 8, 0, 0, 0))
			{
				iLocal_279 = 1;
				iLocal_323 = 1;
				__LIB_14__::func_874(2, "Car chase", 1, 0, 0, 1);
			}
		}
		else if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"), false))
		{
			if (__LIB_0__::func_75())
			{
				Var0 = { __LIB_0__::func_485() };
				if (MISC::ARE_STRINGS_EQUAL(&Var0, "MIN1_DRIVEB_4"))
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"), 200, true, true);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"), true);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "STUN_COLLECT", "MINUTE_MAN_01_SOUNDSET", true);
				}
			}
		}
	}
}

void func_467()//Position - 0x36B05
{
	if (iLocal_278 == 0)
	{
		if (func_298(1, 0) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_OUTBAR", 8, 0, 0, 0))
		{
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 4f, 0);
			iLocal_278 = 1;
		}
	}
	else if (iLocal_279 == 0)
	{
		if (((iLocal_295 < 3 && !func_388()) && func_298(1, 1)) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_WAIT2", 8, 0, 0, 0))
		{
			iLocal_295++;
		}
	}
}

void func_468()//Position - 0x36B85
{
	if (__LIB_0__::func_121(iLocal_316))
	{
		switch (iLocal_100)
		{
			case 0:
				if (iLocal_95 == 2 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					__LIB_0__::func_714(&iLocal_317);
					iLocal_320 = 1;
					iLocal_100 = 1;
				}
				else
				{
					__LIB_0__::func_496();
					if (func_388())
					{
						HUD::CLEAR_PRINTS();
						__LIB_0__::func_714(&iLocal_317);
						iLocal_320 = 1;
						if (iLocal_95 == 2)
						{
							iLocal_100 = 1;
						}
						else
						{
							iLocal_100 = 2;
						}
					}
					else
					{
						if (!__LIB_0__::func_75() && !HUD::DOES_BLIP_EXIST(iLocal_317))
						{
							iLocal_317 = __LIB_14__::func_866(iLocal_316, 1, 5);
							if (iLocal_318 == 0)
							{
								__LIB_0__::func_229("MIN1_01", 5000, 1);
								iLocal_318++;
							}
							else if (iLocal_318 == 1)
							{
								__LIB_0__::func_229("MIN1_08", 5000, 1);
								iLocal_318++;
							}
							else
							{
								HUD::CLEAR_PRINTS();
							}
						}
						func_471();
					}
				}
				break;
			case 1:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					HUD::CLEAR_PRINTS();
					if (func_388())
					{
						iLocal_320 = 1;
						iLocal_100 = 2;
					}
					else
					{
						iLocal_100 = 0;
					}
				}
				else if (iLocal_320 == 1)
				{
					iLocal_320 = 0;
					__LIB_0__::func_229("MIN1_02", 5000, 1);
				}
				break;
			case 2:
				if (iLocal_95 == 2 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					__LIB_0__::func_714(&iLocal_332);
					iLocal_320 = 1;
					iLocal_100 = 1;
				}
				else if (func_388())
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_332))
					{
						switch (iLocal_95)
						{
							case 2:
								iLocal_332 = __LIB_14__::func_704(Local_333, 5, 1);
								break;
							case 5:
								if (__LIB_0__::func_121(iLocal_326))
								{
									iLocal_332 = __LIB_0__::func_639(iLocal_326, 1, 0);
								}
								break;
							}
					}
					if (iLocal_320 == 1)
					{
						iLocal_320 = 0;
						if (iLocal_319 < 1)
						{
							switch (iLocal_95)
							{
								case 2:
									__LIB_0__::func_229("MIN1_03", 5000, 1);
									break;
								case 5:
									__LIB_0__::func_229("MIN1_06", 5000, 1);
									break;
							}
							iLocal_319++;
						}
						else
						{
							HUD::CLEAR_PRINTS();
						}
						func_336(0);
					}
					if (VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iLocal_316))
					{
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_316, false);
					}
				}
				else if (ENTITY::GET_ENTITY_SPEED(iLocal_316) < 1f)
				{
					__LIB_0__::func_714(&iLocal_332);
					func_336(1);
					if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iLocal_316))
					{
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_316, true);
					}
					iLocal_100 = 0;
				}
				else
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_316, 10f, 1, false);
				}
				break;
			}
	}
}

void func_471()//Position - 0x36E11
{
	if (((iLocal_287 == 0 && iLocal_95 == 2) && func_298(0, 1)) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_GETSOUT", 8, 0, 0, 0))
	{
		iLocal_287 = 1;
	}
}

void func_474()//Position - 0x36EF2
{
	struct<6> Var0;
	if (__LIB_0__::func_75())
	{
		Var0 = { __LIB_0__::func_486() };
		if ((((((MISC::ARE_STRINGS_EQUAL(&Var0, &(Local_381[0 /*4*/])) || MISC::ARE_STRINGS_EQUAL(&Var0, &(Local_381[1 /*4*/]))) || MISC::ARE_STRINGS_EQUAL(&Var0, &(Local_381[2 /*4*/]))) || MISC::ARE_STRINGS_EQUAL(&Var0, &(Local_381[3 /*4*/]))) || MISC::ARE_STRINGS_EQUAL(&Var0, &(Local_381[4 /*4*/]))) || MISC::ARE_STRINGS_EQUAL(&Var0, &(Local_381[5 /*4*/]))) || MISC::ARE_STRINGS_EQUAL(&Var0, &(Local_381[6 /*4*/])))
		{
			__LIB_0__::func_638();
		}
	}
}

int func_479()//Position - 0x3707A
{
	int iVar0;
	if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_326))
	{
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_326, 200f);
		return 1;
	}
	else if (iLocal_281 == 0)
	{
		if (((fLocal_331 > 1465f && func_298(1, 1)) && __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_326, 75f, 1)) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_CRASH", 8, 0, 0, 0))
		{
			iLocal_281 = 1;
		}
	}
	if (func_481())
	{
		return 1;
	}
	if (func_480())
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_HEALTH(iLocal_326) < iLocal_330)
	{
		return 1;
	}
	if (iLocal_329 == 1)
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_326))
		{
			return 1;
		}
		if (ENTITY::GET_ENTITY_SPEED(iLocal_326) < 0.5f)
		{
			return 1;
		}
		if (iLocal_329 == 1 && ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_326))
		{
			return 1;
		}
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_378) > 1000)
	{
		iVar0 = 0;
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_326, 4, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_326, 5, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_326, 0, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_326, 1, false))
		{
			iVar0++;
		}
		if (iVar0 > 1)
		{
			return 1;
		}
		else
		{
			iLocal_378 = MISC::GET_GAME_TIMER();
		}
	}
	return 0;
}

int func_480()//Position - 0x371C5
{
	if (__LIB_0__::func_121(iLocal_326))
	{
		if (__LIB_0__::func_121(uLocal_339[0]) && ENTITY::GET_ENTITY_HEALTH(uLocal_339[0]) < 200)
		{
			return 1;
		}
		if (__LIB_0__::func_121(uLocal_339[1]) && ENTITY::GET_ENTITY_HEALTH(uLocal_339[1]) < 200)
		{
			return 1;
		}
	}
	return 0;
}

int func_481()//Position - 0x3721E
{
	if (__LIB_0__::func_121(iLocal_326))
	{
		if (__LIB_0__::func_121(uLocal_339[0]) && !PED::IS_PED_IN_VEHICLE(uLocal_339[0], iLocal_326, false))
		{
			return 1;
		}
		if (__LIB_0__::func_121(uLocal_339[1]) && !PED::IS_PED_IN_VEHICLE(uLocal_339[1], iLocal_326, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_482()//Position - 0x3727B
{
	if ((iLocal_306 == 0 && AUDIO::LOAD_STREAM("MARIACHI", "MINUTE_MAN_01_SOUNDSET")) && __LIB_0__::func_121(iLocal_326))
	{
		AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", true);
		AUDIO::PLAY_STREAM_FROM_VEHICLE(iLocal_326);
		AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", false);
		iLocal_306 = 1;
	}
}

void func_483()//Position - 0x372C5
{
	if (iLocal_101 == 0)
	{
		if (iLocal_100 == 0 || iLocal_100 == 1)
		{
			if ((__LIB_0__::func_121(iLocal_316) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_316, false)) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_316, 1) > 100f)
			{
				func_304(6);
			}
		}
	}
}

void func_484()//Position - 0x3731C
{
	float fVar0;
	if ((__LIB_0__::func_121(iLocal_326) && __LIB_0__::func_121(iLocal_316)) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_326))
	{
		fLocal_331 = VEHICLE::GET_POSITION_IN_RECORDING(iLocal_326);
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_326, -1, false))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_326);
		}
		else
		{
			fVar0 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_326, 1);
			if (iLocal_329 == 0)
			{
				if (fLocal_331 > 1250f)
				{
					iLocal_329 = 1;
					VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_326, 262144);
				}
				else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_316, false))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_326, 0.7f);
				}
				else if (func_486())
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_326, 1.7f);
				}
				else if (func_485())
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_326, 1f);
				}
				else if (fVar0 > 75f)
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_326, 0.5f);
				}
				else if (fVar0 > 30f)
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_326, 1f);
				}
				else if (fVar0 > 20f)
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_326, 1.3f);
				}
				else if (fVar0 > 10f)
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_326, 1.5f);
				}
				else
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_326, 1.7f);
				}
			}
			else if (fVar0 > 75f)
			{
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_326, 0.5f);
			}
			else if (fVar0 > 30f)
			{
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_326, 1f);
			}
			else
			{
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_326, 1.3f);
			}
		}
	}
}

int func_485()//Position - 0x3748F
{
	if (__LIB_0__::func_121(iLocal_326))
	{
		if ((__LIB_0__::func_724(iLocal_326, 2262f, 3590f, 58f, 1) < 15f || __LIB_0__::func_724(iLocal_326, 2387f, 3705f, 53f, 1) < 15f) || __LIB_0__::func_724(iLocal_326, 2620f, 3853f, 72f, 1) < 15f)
		{
			return 1;
		}
	}
	return 0;
}

int func_486()//Position - 0x3750C
{
	float fVar0;
	float fVar1;
	if (__LIB_0__::func_121(iLocal_326) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		fVar0 = __LIB_0__::func_724(iLocal_326, Local_364, 1);
		fVar1 = __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_364, 1);
		if (fVar1 < fVar0)
		{
			return 1;
		}
	}
	return 0;
}

void func_488(int iParam0)//Position - 0x375A1
{
	if (iParam0 == 1)
	{
		ENTITY::CREATE_FORCED_OBJECT(2142.74f, 3355.45f, 44.44f, 5f, joaat("prop_fnc_farm_01e"), true);
		ENTITY::CREATE_FORCED_OBJECT(2146.07f, 3351.57f, 44.5f, 5f, joaat("prop_fnclink_01d"), true);
		ENTITY::CREATE_FORCED_OBJECT(2067.85f, 3266.79f, 44.45f, 5f, joaat("prop_sign_road_03a"), true);
	}
	else
	{
		ENTITY::REMOVE_FORCED_OBJECT(2142.74f, 3355.45f, 44.44f, 5f, joaat("prop_fnc_farm_01e"));
		ENTITY::REMOVE_FORCED_OBJECT(2146.07f, 3351.57f, 44.5f, 5f, joaat("prop_fnclink_01d"));
		ENTITY::REMOVE_FORCED_OBJECT(2067.85f, 3266.79f, 44.45f, 5f, joaat("prop_sign_road_03a"));
	}
}

void func_489()//Position - 0x3764B
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iLocal_380[iVar0] = 0;
		StringCopy(&(Local_381[iVar0 /*4*/]), "MIN1_CHASE", 16);
		StringIntConCat(&(Local_381[iVar0 /*4*/]), iVar0 + 1, 16);
		iVar0++;
	}
	iLocal_382 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_308[iVar0] = 0;
		iVar0++;
	}
	iLocal_309 = 0;
}

void func_490()//Position - 0x376AF
{
	iLocal_318 = 1;
	iLocal_319 = 0;
	iLocal_320 = 1;
}

void func_491()//Position - 0x376C3
{
	switch (iLocal_97)
	{
		case 0:
			func_43();
			__LIB_0__::func_325();
			if (__LIB_0__::func_121(iLocal_316))
			{
				__LIB_14__::func_659(iLocal_316, 1995.8788f, 3058.1948f, 46.69218f, 45.833717f, 0, 1);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_316, 0.1f);
				ENTITY::SET_ENTITY_HEALTH(iLocal_316, 1000, 0);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_316, 0, false, false);
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 0);
			func_497(Local_327, fLocal_328, 500f, 1);
			func_496(0);
			func_336(1);
			iLocal_274 = 0;
			iLocal_277 = 0;
			iLocal_278 = 0;
			iLocal_388 = MISC::GET_GAME_TIMER() + 1000;
			break;
		case 1:
			func_495();
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1990.335f, 3053.5461f, 45.11235f, 1989.1418f, 3051.7327f, 48.112213f, 3f, false, true, 0))
			{
				iLocal_97 = 2;
			}
			else
			{
				func_494();
				func_492();
			}
			break;
		case 2:
			func_32();
			INTERIOR::UNPIN_INTERIOR(iLocal_335);
			break;
	}
}

void func_492()//Position - 0x377C5
{
	if (((iLocal_277 == 0 && func_298(1, 0)) && __LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), 1987.8f, 3053.5f, 46.1f, 1.5f, 1)) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_GETOUT", 8, 0, 0, 0))
	{
		iLocal_277 = 1;
	}
}

void func_494()//Position - 0x3783B
{
	if (func_298(1, 1))
	{
		if (iLocal_274 == 0)
		{
			if (__LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_INBAR", 8, 0, 0, 0))
			{
				iLocal_274 = 1;
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(iLocal_317))
		{
			if (__LIB_0__::func_121(iLocal_316))
			{
				iLocal_317 = __LIB_14__::func_866(iLocal_316, 1, 5);
				__LIB_0__::func_229("MIN1_01", 7500, 1);
			}
		}
	}
}

void func_495()//Position - 0x3789C
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 228, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 239, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 240, true);
	}
}

void func_496(int iParam0)//Position - 0x378D0
{
	if (iParam0 == 1)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(1906f, 3000f, 0f, 2150f, 3500f, 100f, 1);
	}
	else
	{
		PATHFIND::SET_ROADS_IN_AREA(1906f, 3000f, 0f, 2150f, 3500f, 100f, false, true);
		MISC::CLEAR_AREA_OF_VEHICLES(1995.3397f, 3061.0537f, 46.04894f, 10f, false, false, true, true, false, false, 0);
		MISC::CLEAR_AREA_OF_VEHICLES(1958.7706f, 3090.4058f, 45.94596f, 40f, false, false, true, true, false, false, 0);
	}
}

void func_497(struct<3> Param0, float fParam1, float fParam2, int iParam3)//Position - 0x3795E
{
	int iVar0;
	MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 10f, 0);
	MISC::CLEAR_AREA_OF_PROJECTILES(2032.0061f, 3308.285f, 45.0585f, 250f, 0);
	FIRE::STOP_FIRE_IN_RANGE(Param0, 10f);
	func_343(4);
	func_500(&iLocal_326, iLocal_325, Param0, fParam1, 15f);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_325);
	if (__LIB_0__::func_121(iLocal_326))
	{
		if (iParam3 == 1)
		{
			ENTITY::SET_ENTITY_ROTATION(iLocal_326, VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(500, "Min1_Van"), 0f), 2, true);
		}
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_326, true, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_326, 200);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_326, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_326, true);
		func_498(iLocal_326, &(uLocal_339[0]), iLocal_103[0], -1);
		func_498(iLocal_326, &(uLocal_339[1]), iLocal_103[0], 0);
		if (fParam2 > -1f)
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_326, 500, "Min1_Van", true);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_326);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_326, fParam2);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_103[0]);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_0__::func_121(uLocal_339[iVar0]))
		{
			ENTITY::SET_ENTITY_HEALTH(uLocal_339[iVar0], 400, 0);
			PED::SET_PED_MAX_HEALTH(uLocal_339[iVar0], 400);
			PED::SET_PED_CONFIG_FLAG(uLocal_339[iVar0], 32, false);
			PED::SET_PED_CONFIG_FLAG(uLocal_339[iVar0], 116, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_339[iVar0], 118, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_339[iVar0], 177, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_339[iVar0], 42, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_339[iVar0], 170, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_339[iVar0], 281, true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_339[iVar0], true);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_339[iVar0], false);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_339[iVar0], false);
			ENTITY::SET_ENTITY_LOD_DIST(uLocal_339[iVar0], 200);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_339[iVar0], true);
			if (iVar0 == 0)
			{
				__LIB_0__::func_222(&uLocal_108, 6, uLocal_339[iVar0], "MARIACHI1", 0, 1);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_339[iVar0], 0, 0, 2, 0);
			}
			else
			{
				__LIB_0__::func_222(&uLocal_108, 7, uLocal_339[iVar0], "MARIACHI2", 0, 1);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_339[iVar0], 0, 2, 1, 0);
			}
		}
		iVar0++;
	}
}

void func_498(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x37B8A
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) && ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		__LIB_17__::func_120(iParam2);
		*uParam1 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0, 26, iParam2, iParam3, true, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
		WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam1, true);
	}
}

void func_500(int iParam0, int iParam1, struct<3> Param2, float fParam3, float fParam4)//Position - 0x37BF8
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		__LIB_17__::func_120(iParam1);
		*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, true, true, false);
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, fParam4);
	}
}

void func_503()//Position - 0x37C98
{
	switch (iLocal_97)
	{
		case 0:
			func_43();
			__LIB_14__::func_874(1, "Enter bar", 0, 0, 0, 1);
			func_343(3);
			func_336(1);
			PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(1985.2576f, 3048.6697f, 46.21502f, 7f, 20);
			iLocal_273 = 0;
			iLocal_275 = 0;
			iLocal_276 = 0;
			iLocal_294 = 0;
			iLocal_367 = 0;
			iLocal_369 = 0;
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			iLocal_376 = MISC::GET_GAME_TIMER();
			iLocal_377 = MISC::GET_GAME_TIMER();
			break;
		case 1:
			func_495();
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1991.5631f, 3049.609f, 45.125618f, 1988.9163f, 3045.2632f, 48.125492f, 5f, false, true, 0))
			{
				iLocal_97 = 2;
			}
			else
			{
				func_512();
				func_511();
				func_507();
				func_506();
				func_505();
				func_504();
			}
			break;
		case 2:
			func_32();
			__LIB_0__::func_714(&iLocal_317);
			__LIB_0__::func_714(&iLocal_332);
			__LIB_0__::func_124(&iLocal_365, 1, 0, 1);
			__LIB_0__::func_124(&iLocal_368, 1, 0, 1);
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
			break;
	}
}

void func_504()//Position - 0x37DB5
{
	if (__LIB_0__::func_725(iLocal_316, Local_334, 100f, 1))
	{
		if (iLocal_336 == 0)
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_335);
			iLocal_336 = 1;
		}
	}
	else if (iLocal_336 == 1)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_335);
		iLocal_336 = 0;
	}
}

void func_505()//Position - 0x37DF9
{
	if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && (MISC::GET_GAME_TIMER() - iLocal_376) > 1500) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_335)
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
		{
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, -1f), 5f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1.5f)), 2000, 0, 2);
		}
		else
		{
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 10f), 5f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1.5f)), 2000, 0, 2);
		}
		iLocal_376 = MISC::GET_GAME_TIMER();
	}
}

void func_506()//Position - 0x37E96
{
	if (iLocal_369 == 0 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1987.8029f, 3055.1284f, 45.215298f, 1986.5865f, 3053.1838f, 48.215187f, 1.5f, false, true, 0))
	{
		PED::SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(true);
		if (PED::GET_CLOSEST_PED(1983.41f, 3054.88f, 47.01f, 3f, true, true, &iLocal_368, false, false, -1) && __LIB_0__::func_121(iLocal_368))
		{
			if (ENTITY::GET_ENTITY_MODEL(iLocal_368) == joaat("IG_Janet"))
			{
				__LIB_0__::func_325();
				__LIB_0__::func_222(&uLocal_108, 8, iLocal_368, "JANET", 0, 1);
				__LIB_14__::func_654(&uLocal_108, "MIN1AUD", "MIN1_BANNED", 3, 0, 0);
			}
			iLocal_369 = 1;
		}
	}
}

void func_507()//Position - 0x37F41
{
	if (iLocal_101 == 0)
	{
		if (iLocal_367 == 0)
		{
			if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_366, 20f, 1) && !ENTITY::DOES_ENTITY_EXIST(iLocal_365))
			{
				__LIB_33__::func_511(&iLocal_365, iLocal_103[1], Local_366, 332.6105f);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_103[1]);
				PED::SET_PED_CONFIG_FLAG(iLocal_365, 104, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_365, 13, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_365, 17, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_365, 2, false);
				__LIB_0__::func_222(&uLocal_108, 5, iLocal_365, "MIN1DRUNKMALE", 0, 1);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_385);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1992.0579f, 3056.1792f, 46.063f, 1f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_WANDER_IN_AREA(0, 1994f, 3059f, 47f, 5f, 3f, 6f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_385);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_365, iLocal_385);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_385);
				__LIB_16__::func_300(iLocal_365);
				iLocal_367 = 1;
			}
		}
		else if (__LIB_0__::func_121(iLocal_365))
		{
			func_508();
			PED::SET_PED_RESET_FLAG(iLocal_365, 60, true);
		}
	}
}

void func_508()//Position - 0x3805B
{
	if (iLocal_275 == 0)
	{
		if (func_298(1, 1))
		{
			__LIB_14__::func_654(&uLocal_108, "MIN1AUD", "MIN1_DRUNK", 3, 0, 0);
			iLocal_275 = 1;
		}
	}
	else if (iLocal_276 == 0)
	{
		if (PED::IS_PED_FLEEING(iLocal_365))
		{
			if (__LIB_15__::func_963("MIN1_DRUNK"))
			{
				__LIB_0__::func_429();
			}
			__LIB_14__::func_654(&uLocal_108, "MIN1AUD", "MIN1_BUMP", 3, 0, 0);
			iLocal_276 = 1;
		}
	}
}

void func_511()//Position - 0x38119
{
	if ((((iLocal_294 < 5 && (MISC::GET_GAME_TIMER() - iLocal_377) > 10000) && func_388()) && func_298(1, 1)) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_WAIT", 8, 0, 0, 0))
	{
		iLocal_294++;
		iLocal_377 = MISC::GET_GAME_TIMER();
	}
}

void func_512()//Position - 0x38174
{
	if (func_298(1, 1))
	{
		if (iLocal_273 == 0)
		{
			if (__LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_ATBAR", 8, 0, 0, 0))
			{
				iLocal_273 = 1;
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(iLocal_332))
		{
			iLocal_332 = __LIB_14__::func_704(Local_333, 7, 0);
			__LIB_0__::func_229("MIN1_03", 5000, 1);
		}
	}
}

void func_513()//Position - 0x381CD
{
	switch (iLocal_97)
	{
		case 0:
			func_43();
			__LIB_0__::func_106(&iLocal_107);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
			func_490();
			iLocal_100 = 2;
			iLocal_285 = 0;
			iLocal_286 = 0;
			iLocal_287 = 0;
			iLocal_288 = 0;
			iLocal_289 = 0;
			iLocal_336 = 0;
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 0);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(35f, 3409f, 322f) - Vector(40f, 40f, 40f), Vector(35f, 3409f, 322f) + Vector(40f, 40f, 40f), false, true);
			break;
		case 1:
			if (__LIB_0__::func_121(iLocal_316))
			{
				if (__LIB_0__::func_725(iLocal_316, Local_334, 20f, 1) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					__LIB_0__::func_325();
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_316, false))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_316, 10f, 1, false);
					}
					iLocal_97 = 2;
				}
				else
				{
					func_468();
					func_516();
					func_515();
					func_514();
					func_483();
					func_504();
				}
				if (INTERIOR::IS_INTERIOR_READY(iLocal_335) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_335)
				{
					func_304(6);
				}
			}
			break;
		case 2:
			func_32();
			break;
	}
}

void func_514()//Position - 0x38309
{
	if (((((iLocal_288 == 0 && iLocal_286 == 1) && func_298(1, 1)) && func_388()) && __LIB_0__::func_724(iLocal_316, Local_334, 1) > (fLocal_324 + 50f)) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_WRONG", 8, 0, 0, 0))
	{
		iLocal_288 = 1;
	}
}

void func_515()//Position - 0x3836E
{
	if (((((iLocal_289 == 0 && func_298(1, 1)) && func_388()) && __LIB_0__::func_725(iLocal_316, Local_334, 60f, 1)) && !__LIB_0__::func_725(iLocal_316, Local_334, 40f, 1)) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_ALMOST", 8, 0, 0, 0))
	{
		iLocal_289 = 1;
	}
}

void func_516()//Position - 0x383DC
{
	if (iLocal_286 == 0)
	{
		if (iLocal_285 == 0)
		{
			if (func_298(1, 1) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", "MIN1_DRIVEA", 8, 0, 0, 0))
			{
				iLocal_285 = 1;
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(&cLocal_310, ""))
		{
			if (__LIB_0__::func_75())
			{
				cLocal_314 = { __LIB_0__::func_485() };
				if (!func_388() && !__LIB_0__::func_725(iLocal_316, Local_334, 20f, 1))
				{
					cLocal_310 = { __LIB_0__::func_486() };
					__LIB_0__::func_325();
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(&cLocal_314, "NULL"))
			{
				iLocal_286 = 1;
				if (__LIB_0__::func_121(iLocal_316))
				{
					fLocal_324 = __LIB_0__::func_724(iLocal_316, Local_334, 1);
				}
			}
		}
		else if ((func_388() && func_298(0, 1)) && __LIB_14__::func_782(&uLocal_108, "MIN1AUD", &cLocal_310, &cLocal_314, 8, 0, 0))
		{
			StringCopy(&cLocal_310, "", 24);
		}
	}
}

void func_519()//Position - 0x38551
{
	switch (iLocal_97)
	{
		case 0:
			func_43();
			__LIB_14__::func_851("mmb_1_rcm", 1);
			__LIB_38__::func_277();
			iLocal_104 = 0;
			if ((((CAM::IS_SCREEN_FADED_IN() && !__LIB_0__::func_323()) && __LIB_0__::func_121(Local_94.f_28[0])) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94.f_28[0], 1) > 7f) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 329.28726f, 3403.3022f, 34.502598f, 336.4215f, 3385.2556f, 39.40556f, 20f, false, true, 0))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_94.f_28[0], 0f, 0f, 0f, true, -1, 3000, 2000, 0);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.45f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.01f);
				CAM::SET_GAMEPLAY_HINT_FOV(25f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_106);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				}
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, Local_94.f_28[0], 0f, -3f, 0f, 1f, -1, 0.1f, true);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_94.f_28[0], 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_106);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_106);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_106);
				iLocal_105 = MISC::GET_GAME_TIMER();
			}
			else
			{
				iLocal_105 = -1;
			}
			break;
		case 1:
			switch (iLocal_104)
			{
				case 0:
					__LIB_38__::func_277();
					if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
					{
						__LIB_14__::func_862();
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					}
					if (iLocal_105 == -1 || (MISC::GET_GAME_TIMER() - iLocal_105) > 3000)
					{
						if (__LIB_14__::func_740(1, 1093140480, 0))
						{
							if (__LIB_0__::func_121(Local_94.f_28[0]))
							{
								Local_337[0 /*7*/] = Local_94.f_28[0];
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_337[0 /*7*/], true, true);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_337[0 /*7*/], "Joe", 0, __LIB_2__::func_910(56), 0);
							}
							else
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_337[0 /*7*/], "Joe", 2, __LIB_2__::func_910(56), 0);
							}
							if (__LIB_0__::func_121(Local_94.f_28[1]))
							{
								Local_337[1 /*7*/] = Local_94.f_28[1];
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_337[1 /*7*/], true, true);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_337[1 /*7*/], "Josef", 0, __LIB_2__::func_910(57), 0);
							}
							else
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_337[1 /*7*/], "Josef", 2, __LIB_2__::func_910(57), 0);
							}
							if (__LIB_0__::func_121(Local_94.f_35[0]))
							{
								iLocal_316 = Local_94.f_35[0];
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_316, true, true);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_316, "MMB_Patrol_Vehicle", 0, joaat("pranger"), 0);
							}
							else
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_316, "MMB_Patrol_Vehicle", 2, joaat("pranger"), 0);
							}
							if (__LIB_0__::func_121(Local_94.f_35[1]))
							{
								iLocal_107 = Local_94.f_35[1];
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_107, true, true);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_107, "MMB_Camper_Van", 0, joaat("surfer2"), 0);
							}
							else
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_107, "MMB_Camper_Van", 2, joaat("surfer2"), 0);
							}
							__LIB_14__::func_841();
							RECORDING::REPLAY_START_EVENT(1);
							CUTSCENE::START_CUTSCENE(2);
							if (__LIB_0__::func_121(iLocal_316))
							{
								CUTSCENE::SET_VEHICLE_MODEL_PLAYER_WILL_EXIT_SCENE(ENTITY::GET_ENTITY_MODEL(iLocal_316));
							}
							iLocal_104++;
						}
					}
					break;
				case 1:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							CAM::STOP_GAMEPLAY_HINT(false);
						}
						__LIB_14__::func_614(331.74124f, 3402.0925f, 34.439514f, 318.00735f, 3410.1597f, 38.72809f, 5f, Local_102, 254.7861f, __LIB_13__::func_790(), 1, 1, 1, 0, 0);
						__LIB_14__::func_785(Local_102, 254.7861f, 0, 145);
						func_537(327.85f, 3405.7f, 35.73f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						__LIB_0__::func_84(500, 0);
						iLocal_104++;
					}
					break;
				case 2:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_337[0 /*7*/]) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Joe", 0)))
						{
							Local_337[0 /*7*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Joe", 0));
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_337[0 /*7*/], true, true);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(Local_337[1 /*7*/]) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Josef", 0)))
						{
							Local_337[1 /*7*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Josef", 0));
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_337[1 /*7*/], true, true);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_316) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MMB_Patrol_Vehicle", 0)))
						{
							iLocal_316 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MMB_Patrol_Vehicle", 0));
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_316, true, true);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_107) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MMB_Camper_Van", 0)))
						{
							iLocal_107 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MMB_Camper_Van", 0));
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_107, true, true);
						}
					}
					else
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_316, true);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						func_530(321.68735f, 3408.6406f, 35.343765f, -105.797066f, 0);
						__LIB_14__::func_870(1, 1, 1, 1);
						iLocal_97 = 2;
					}
					break;
			}
			break;
		case 2:
			RECORDING::REPLAY_STOP_EVENT();
			func_32();
			__LIB_14__::func_800(&Local_94, 0, 1);
			break;
	}
}

void func_530(struct<3> Param0, float fParam1, int iParam2)//Position - 0x38E4E
{
	int iVar0;
	if (!__LIB_0__::func_121(iLocal_316))
	{
		func_343(1);
		func_500(&iLocal_316, iLocal_315, Param0, fParam1, 10f);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_315);
	}
	if (!__LIB_0__::func_121(Local_337[0 /*7*/]) && __LIB_0__::func_121(iLocal_316))
	{
		while (!__LIB_17__::func_217(&(Local_337[0 /*7*/]), 56, iLocal_316, Local_337[0 /*7*/].f_1, 1))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (!__LIB_0__::func_121(Local_337[1 /*7*/]) && __LIB_0__::func_121(iLocal_316))
	{
		while (!__LIB_17__::func_217(&(Local_337[1 /*7*/]), 57, iLocal_316, Local_337[1 /*7*/].f_1, 1))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (__LIB_0__::func_121(iLocal_316))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_316, true, true);
		if (iParam2 == 1)
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_316, 500, "Min1_PV", true);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_316);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_316, 1500f);
		}
		else
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_316, 5f);
		}
		__LIB_0__::func_679(iLocal_316, 0);
		VEHICLE::SET_VEHICLE_ALARM(iLocal_316, false);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_316, 1);
		VEHICLE::SET_VEHICLE_ALARM(iLocal_316, false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_316, false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_316, false);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_316, true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_316, 200);
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_316, 10f);
		VEHICLE::SET_VEHICLE_STRONG(iLocal_316, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_316, true);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (__LIB_0__::func_121(Local_337[iVar0 /*7*/]))
			{
				if (iVar0 == 1)
				{
					PED::SET_PED_PROP_INDEX(Local_337[iVar0 /*7*/], 0, 0, 0, false);
				}
				PED::SET_PED_PROP_INDEX(Local_337[iVar0 /*7*/], 1, 0, 0, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_337[iVar0 /*7*/], true);
				if (!PED::IS_PED_IN_VEHICLE(Local_337[iVar0 /*7*/], iLocal_316, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_337[iVar0 /*7*/], false);
					PED::SET_PED_INTO_VEHICLE(Local_337[iVar0 /*7*/], iLocal_316, Local_337[iVar0 /*7*/].f_1);
				}
				func_532(Local_337[iVar0 /*7*/]);
				PED::SET_PED_CAN_BE_TARGETTED(Local_337[iVar0 /*7*/], false);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_337[iVar0 /*7*/], false);
				PED::SET_PED_CONFIG_FLAG(Local_337[iVar0 /*7*/], 32, false);
				PED::SET_PED_CONFIG_FLAG(Local_337[iVar0 /*7*/], 29, false);
				PED::SET_PED_CONFIG_FLAG(Local_337[iVar0 /*7*/], 116, true);
				PED::SET_PED_CONFIG_FLAG(Local_337[iVar0 /*7*/], 118, true);
				PED::SET_PED_CONFIG_FLAG(Local_337[iVar0 /*7*/], 185, false);
				PED::SET_PED_CONFIG_FLAG(Local_337[iVar0 /*7*/], 26, true);
				PED::SET_PED_CONFIG_FLAG(Local_337[iVar0 /*7*/], 42, true);
				PED::SET_PED_CONFIG_FLAG(Local_337[iVar0 /*7*/], 170, true);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_337[iVar0 /*7*/], false);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_337[iVar0 /*7*/], true);
				if (iVar0 == 0)
				{
					__LIB_0__::func_222(&uLocal_108, 3, Local_337[0 /*7*/], "JOE", 0, 1);
				}
				else
				{
					__LIB_0__::func_222(&uLocal_108, 4, Local_337[1 /*7*/], "JOSEF", 0, 1);
				}
			}
			iVar0++;
		}
		if (!__LIB_0__::func_324())
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_316, false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_316, -1);
			}
		}
	}
	__LIB_0__::func_222(&uLocal_108, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
}

void func_532(int iParam0)//Position - 0x3914D
{
	if (__LIB_0__::func_121(iParam0))
	{
		iLocal_383 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_383);
		PED::SET_PED_CONFIG_FLAG(iParam0, 132, true);
	}
}

void func_537(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x39291
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
					if (func_190(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_77(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_190(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_77(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_190(PLAYER::PLAYER_PED_ID(), 8, 1) || func_190(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_77(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_190(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_77(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

void func_591()//Position - 0x3FCF8
{
	int iVar0;
	if (iLocal_95 < (10 - 1))
	{
		if (iLocal_95 > 2 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (iLocal_387 == -1)
			{
				iLocal_387 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_387) > 2000)
			{
				func_304(10);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_337[0 /*7*/]))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_337[0 /*7*/], false))
			{
				func_304(1);
			}
			else
			{
				func_593(Local_337[0 /*7*/]);
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_337[0 /*7*/], PLAYER::PLAYER_PED_ID(), true))
				{
					func_304(8);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_337[1 /*7*/]))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_337[1 /*7*/], false))
			{
				func_304(2);
			}
			else
			{
				func_593(Local_337[1 /*7*/]);
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_337[1 /*7*/], PLAYER::PLAYER_PED_ID(), true))
				{
					func_304(9);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_316))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_316, false))
			{
				func_304(3);
			}
			else
			{
				if (WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), iLocal_316, joaat("WEAPON_STICKYBOMB"), -1))
				{
					func_304(11);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_316, false))
				{
					if (iLocal_95 < 7)
					{
						if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_316, 2, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_316, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_316, 0, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_316, 1, 7000))
						{
							func_304(3);
						}
					}
					if (((iLocal_95 < 6 && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_316, false)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_316, PLAYER::PLAYER_PED_ID(), true))
					{
						if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_316, 0, 2))
						{
							if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_316, joaat("WEAPON_UNARMED"), 0))
							{
							}
							else if (FIRE::IS_ENTITY_ON_FIRE(iLocal_316))
							{
								func_304(12);
							}
							else if (iLocal_362 == 0 || iLocal_362 == 1)
							{
								func_592();
							}
							else if (func_298(0, 1))
							{
								func_304(12);
							}
							WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_316);
						}
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_316);
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_379) > 1000)
					{
						iLocal_379 = MISC::GET_GAME_TIMER();
						if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_316, 4, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_316, 5, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_316, 0, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_316, 1, false))
						{
							func_304(12);
						}
					}
				}
				else
				{
					func_304(3);
				}
			}
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_339[iVar0]))
			{
				if (ENTITY::IS_ENTITY_DEAD(uLocal_339[iVar0], false))
				{
					func_304(4);
				}
				else
				{
					func_593(uLocal_339[iVar0]);
					if ((!PED::IS_PED_IN_ANY_VEHICLE(uLocal_339[iVar0], false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_339[iVar0], PLAYER::PLAYER_PED_ID(), true)) && !func_328(iVar0))
					{
						func_304(5);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_592()//Position - 0x3FFD0
{
	if (func_298(0, 1) && __LIB_2__::func_859(&uLocal_108, "MIN1AUD", sLocal_363[iLocal_362], 8, 0, 0, 0))
	{
		iLocal_362++;
	}
}

void func_593(int iParam0)//Position - 0x40006
{
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, false);
	PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iParam0, false);
}

void func_610(int iParam0)//Position - 0x40A59
{
	func_702(1, 1);
	iLocal_101 = 1;
	StringCopy(&cLocal_310, "", 24);
	if (!__LIB_0__::func_324())
	{
		__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0, 0, 1);
	}
	func_698(1, 0);
	EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
	EVENT::REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS();
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, true, false, false, false);
	iLocal_362 = 0;
	switch (iParam0)
	{
		case 0:
			iLocal_96 = 1;
			break;
		case 1:
			func_530(321.68735f, 3408.6406f, 35.343765f, -105.797066f, 0);
			__LIB_14__::func_865(&iLocal_386, Local_102, 254.7861f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
			iLocal_96 = 2;
			break;
		case 2:
			func_530(1981.6627f, 3076.8142f, 46.637543f, -140.25009f, 0);
			iLocal_336 = 0;
			iLocal_96 = 3;
			break;
		case 3:
			func_343(4);
			func_530(1995.8782f, 3058.1973f, 46.6988f, 45.833717f, 1);
			func_497(Local_327, fLocal_328, 4000f, 1);
			func_496(0);
			iLocal_96 = 5;
			break;
		case 4:
			func_343(4);
			func_530(2673.983f, 4277.2314f, 43.6559f, 25.4114f, 0);
			func_497(2668.0261f, 4288.959f, 43.7695f, 28.0026f, -1f, 0);
			iLocal_96 = 6;
			break;
		case 5:
			func_343(8);
			if (!__LIB_0__::func_324())
			{
				__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), 2698.2053f, 4135.905f, 42.8234f, 323.4031f, 0, 1);
			}
			func_500(&iLocal_326, iLocal_325, 2699.654f, 4141.0044f, 42.6652f, 312.624f, 15f);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_325);
			iLocal_96 = 8;
			break;
	}
	if (!__LIB_0__::func_324())
	{
		__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1112014848, 12, 5000, 0, 0);
	}
	if (iParam0 == 3)
	{
		iLocal_278 = 1;
	}
	if (((iParam0 == 1 || iParam0 == 2) || iParam0 == 3) || iParam0 == 4)
	{
		__LIB_0__::func_433(iLocal_316, -1, 1);
	}
	else
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	if (iParam0 == 5)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		__LIB_0__::func_84(500, 1);
	}
	if (iParam0 == 0)
	{
		__LIB_14__::func_879(1, 0, 1);
	}
	else
	{
		__LIB_14__::func_879(1, 1, 1);
	}
	iLocal_97 = 2;
}

void func_698(int iParam0, int iParam1)//Position - 0x4742B
{
	int iVar0;
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	__LIB_0__::func_429();
	__LIB_0__::func_345(&uLocal_82, 0, 0);
	__LIB_0__::func_221(&uLocal_108, 2);
	__LIB_0__::func_221(&uLocal_108, 3);
	__LIB_0__::func_221(&uLocal_108, 4);
	__LIB_0__::func_221(&uLocal_108, 5);
	__LIB_0__::func_221(&uLocal_108, 6);
	__LIB_0__::func_221(&uLocal_108, 7);
	__LIB_0__::func_221(&uLocal_108, 8);
	if (__LIB_0__::func_121(iLocal_326))
	{
		VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_326);
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_326))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_326);
		}
	}
	if (__LIB_0__::func_121(iLocal_316))
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_316, false);
		ENTITY::SET_ENTITY_PROOFS(iLocal_316, false, false, false, false, false, false, false, false);
	}
	func_41();
	func_29(iParam0, 1);
	func_700(iParam0);
	VEHICLE::REMOVE_VEHICLE_RECORDING(500, "Min1_Van");
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_103[iVar0]);
		iVar0++;
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_325, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_315, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_325);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_315);
	INTERIOR::UNPIN_INTERIOR(iLocal_335);
	func_488(0);
	func_496(1);
	STREAMING::REMOVE_ANIM_DICT("missminuteman_1ig_1");
	AUDIO::TRIGGER_MUSIC_EVENT("MM1_STOP");
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MINUTE_01_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("MINUTE_01_SCENE");
	}
	VEHICLE::REMOVE_VEHICLE_ASSET(iLocal_315);
	STREAMING::REMOVE_ANIM_DICT("move_m@drunk@verydrunk");
	STREAMING::REMOVE_ANIM_SET("MOVE_M@BAIL_BOND_NOT_TAZERED");
	STREAMING::REMOVE_ANIM_SET("MOVE_M@BAIL_BOND_TAZERED");
	__LIB_14__::func_871(&Local_94, 0, 0, 0);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	AUDIO::STOP_STREAM();
	if (iParam1 == 1)
	{
		PED::SET_CREATE_RANDOM_COPS(true);
		PED::SET_CREATE_RANDOM_COPS_ON_SCENARIOS(true);
		__LIB_15__::func_929();
		VEHICLE::SET_RANDOM_TRAINS(true);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(35f, 3409f, 322f) - Vector(40f, 40f, 40f), Vector(35f, 3409f, 322f) + Vector(40f, 40f, 40f), true, true);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(42.92f, 4141.74f, 2710.43f) - Vector(100f, 100f, 100f), Vector(42.92f, 4141.74f, 2710.43f) + Vector(100f, 100f, 100f), true, true);
	}
}

void func_700(int iParam0)//Position - 0x47639
{
	if (__LIB_0__::func_121(iLocal_326))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_326, false, 1);
	}
	if (__LIB_0__::func_121(iLocal_316) && VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(iLocal_316))
	{
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(iLocal_316);
	}
	if (iParam0 == 1)
	{
		__LIB_8__::func_397(&iLocal_326);
		__LIB_8__::func_397(&iLocal_107);
		__LIB_0__::func_106(&iLocal_316);
		__LIB_8__::func_397(&iLocal_386);
	}
	else
	{
		__LIB_0__::func_106(&iLocal_326);
		__LIB_0__::func_106(&iLocal_107);
		__LIB_0__::func_106(&iLocal_316);
		__LIB_0__::func_106(&iLocal_386);
	}
}

void func_702(bool bParam0, bool bParam1)//Position - 0x476CD
{
	if (bParam0)
	{
		__LIB_17__::func_25(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_537(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_716()//Position - 0x479BA
{
	iLocal_98 = 0;
	HUD::REQUEST_ADDITIONAL_TEXT("MIN1", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_325 = joaat("tornado4");
	iLocal_315 = joaat("pranger");
	iLocal_103[0] = joaat("S_M_M_Mariachi_01");
	iLocal_103[1] = joaat("A_M_M_Hillbilly_01");
	Local_337[0 /*7*/].f_1 = 0;
	Local_337[1 /*7*/].f_1 = 2;
	Local_337[0 /*7*/].f_2 = -1;
	Local_337[1 /*7*/].f_2 = 0;
	iLocal_335 = INTERIOR::GET_INTERIOR_AT_COORDS(Local_333);
	iLocal_362 = 0;
	sLocal_363[0] = "MIN1_SHOOT1";
	sLocal_363[1] = "MIN1_SHOOT2";
	Local_307[0 /*3*/] = { 2212.9785f, 3478.3857f, 47.9132f };
	Local_307[1 /*3*/] = { 2268.723f, 3601.1167f, 46.2687f };
	Local_307[2 /*3*/] = { 2392.1316f, 3710.2808f, 48.0988f };
	Local_307[3 /*3*/] = { 2632.282f, 3854.4854f, 64.1631f };
	StringCopy(&cLocal_310, "", 24);
	iLocal_379 = MISC::GET_GAME_TIMER();
	VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_315, 3);
	__LIB_15__::func_999();
	PED::SET_CREATE_RANDOM_COPS(false);
	PED::SET_CREATE_RANDOM_COPS_ON_SCENARIOS(false);
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"), false))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"));
	}
	iLocal_387 = -1;
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(42.92f, 4141.74f, 2710.43f) - Vector(100f, 100f, 100f), Vector(42.92f, 4141.74f, 2710.43f) + Vector(100f, 100f, 100f), false, true);
}

void func_718()//Position - 0x47B56
{
	__LIB_14__::func_841();
	if (__LIB_14__::func_843())
	{
		func_698(0, 1);
	}
	__LIB_14__::func_871(&Local_94, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

