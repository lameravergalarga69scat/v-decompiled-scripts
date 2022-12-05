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
	var uLocal_38 = 10;
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
	char* sLocal_80[3] = { NULL, NULL, NULL };
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 15;
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
	var uLocal_136 = 15;
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
	int iLocal_188 = 0;
	char* sLocal_189 = NULL;
	char* sLocal_190 = NULL;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	bool bLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int* iLocal_197 = NULL;
	int iLocal_198 = 0;
	struct<3> Local_199 = { 0, 0, 0 } ;
	struct<3> Local_200 = { 0, 0, 0 } ;
	bool bLocal_201 = 0;
	char* sLocal_202 = NULL;
	var uLocal_203 = 16;
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
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	char[] cLocal_368[8] = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
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
	sLocal_190 = "FBIPRE";
	Local_199 = { 0f, 0f, 0f };
	Local_200 = { 20.8336f, -1113.7928f, 28.797f };
	sLocal_202 = "FBIPRAU";
	iLocal_373 = -1;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		sLocal_189 = 0;
		func_385();
		func_384();
		func_371();
	}
	func_361();
	func_292(1);
	if (__LIB_0__.func_294())
	{
		__LIB_0__.func_370(16.5342f, -1122.5829f, 27.8635f, 354.7487f, 1, 0);
	}
	__LIB_36__.func_81();
	if (__LIB_0__.func_2(0))
	{
		__LIB_20__.func_748(28);
		func_250();
	}
	Global_113386.f_2363.f_539.f_2403[0] = -99;
	Global_113386.f_2363.f_539.f_2403[1] = -99;
	Global_113386.f_2363.f_539.f_2403[2] = -99;
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_BS", 0);
		if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_81 == 1)
			{
				iLocal_192 = func_248();
				if (func_244())
				{
					bLocal_193 = true;
				}
			}
			func_236();
			switch (iLocal_81)
			{
				case 0:
					func_110();
					break;
				case 1:
					func_100();
					break;
				case 2:
					func_23();
					break;
				case 3:
					func_1();
					break;
			}
			if (iLocal_81 != 3)
			{
				if (iLocal_81 >= 0 && !bLocal_28)
				{
				}
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1C9
{
	switch (iLocal_82)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			func_21();
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_189))
			{
				if (MISC::ARE_STRINGS_EQUAL(sLocal_189, "PRE_FKICKOFF"))
				{
					while ((MISC::GET_GAME_TIMER() - iLocal_373) < 2000)
					{
						SYSTEM::WAIT(0);
					}
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_189))
			{
				func_19(sLocal_189);
			}
			else
			{
				func_4(0);
			}
			iLocal_82 = 1;
			break;
		case 1:
			if (__LIB_0__.func_204())
			{
				func_384();
				__LIB_0__.func_371();
				func_371();
			}
			break;
	}
}

void func_4(int iParam0)//Position - 0x286
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__.func_2(0))
	{
		iVar0 = __LIB_0__.func_323();
		if (!func_5(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_5(int iParam0)//Position - 0x2CB
{
	int iVar0;
	int iVar1;
	__LIB_26__.func_260();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__.func_322(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_6(&(Global_113386.f_2363.f_539), iVar1);
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

void func_6(var uParam0, int iParam1)//Position - 0x3DB
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
			if (!func_8(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				__LIB_0__.func_17(&(uParam0->f_2296[iVar0]));
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

int func_8(int iParam0, var uParam1, float fParam2)//Position - 0x5AF
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
			return func_8(8, uParam1, fParam2);
			break;
		case 10:
			return func_8(8, uParam1, fParam2);
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

void func_19(char* sParam0)//Position - 0x1216
{
	__LIB_0__.func_324(sParam0);
	func_4(0);
}

void func_21()//Position - 0x1268
{
	__LIB_0__.func_523(&iLocal_197);
}

void func_23()//Position - 0x1296
{
	switch (iLocal_82)
	{
		case 0:
			if (func_95(iLocal_81, bLocal_28))
			{
				__LIB_12__.func_50("PRE_LEAVE", &iLocal_191);
				iLocal_82 = 1;
			}
			break;
		case 1:
			if (!__LIB_9__.func_488(28))
			{
				iLocal_372 = MISC::GET_GAME_TIMER();
				__LIB_0__.func_402(1, 824);
				iLocal_82 = 2;
			}
			break;
		case 2:
			if (__LIB_0__.func_405("PRE_LEAVE", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("PRE_LEAVE");
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_372) > 2000)
			{
				__LIB_0__.func_523(&iLocal_197);
				if (__LIB_41__.func_663(&uLocal_83, &cLocal_368, &uLocal_203))
				{
					func_40();
				}
			}
			break;
		case 3:
			__LIB_20__.func_741(PLAYER::PLAYER_PED_ID(), 16.0317f, -1118.4553f, 27.8667f, 170.4274f);
			__LIB_38__.func_158(1, 1, 1);
			iLocal_82 = 2;
			break;
	}
}

void func_40()//Position - 0x17D7
{
	HUD::CLEAR_PRINTS();
	__LIB_0__.func_296();
	func_292(0);
	__LIB_6__.func_823(0, 0);
	func_371();
}

int func_95(int iParam0, bool bParam1)//Position - 0x30B6
{
	func_98();
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_28 = false;
				__LIB_38__.func_158(1, 1, 1);
			}
			else if (func_96(1, Local_199, 0))
			{
				return 1;
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_20__.func_741(PLAYER::PLAYER_PED_ID(), Local_200, 354.7487f);
				bLocal_28 = false;
				__LIB_38__.func_158(1, 1, 1);
			}
			else
			{
				return 1;
			}
			break;
		case 2:
			if (bParam1)
			{
				__LIB_20__.func_741(PLAYER::PLAYER_PED_ID(), 16.0317f, -1118.4553f, 27.8667f, 170.4274f);
				bLocal_28 = false;
				__LIB_38__.func_158(1, 1, 1);
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_96(int iParam0, struct<3> Param1, float fParam2)//Position - 0x3161
{
	switch (iParam0)
	{
		case 0:
			if (__LIB_0__.func_394(Param1, Local_199, 1056964608, 0) && fParam2 == 0f)
			{
				return 1;
			}
			break;
		case 1:
			HUD::REQUEST_ADDITIONAL_TEXT(sLocal_190, 0);
			HUD::REQUEST_ADDITIONAL_TEXT(sLocal_202, 6);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0) && HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_98()//Position - 0x3244
{
	__LIB_36__.func_76(&uLocal_203);
}

void func_100()//Position - 0x32A8
{
	int iVar0;
	bool bVar1;
	switch (iLocal_82)
	{
		case 0:
			if (func_95(iLocal_81, bLocal_28))
			{
				__LIB_20__.func_761(&iLocal_197, Local_200, 1, 1, "PRE_BLIP");
				if (HUD::DOES_BLIP_EXIST(iLocal_197))
				{
					HUD::SET_BLIP_COLOUR(iLocal_197, 2);
					HUD::SET_BLIP_ROUTE_COLOUR(iLocal_197, 2);
				}
				__LIB_12__.func_50("PRE_GCLOTH", &iLocal_191);
				iLocal_82 = 1;
			}
			break;
		case 1:
			func_106();
			if (__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_200, 2f, 1) && __LIB_20__.func_674(28))
			{
				if (!iLocal_196)
				{
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					iLocal_196 = 1;
				}
				__LIB_0__.func_523(&iLocal_197);
			}
			else
			{
				if (iLocal_196)
				{
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					iLocal_196 = 0;
				}
				if (bLocal_193)
				{
					iLocal_82 = 2;
				}
				else
				{
					if ((__LIB_0__.func_405("PRE_BUYM", 0, 0) || __LIB_0__.func_405("PRE_BUYT", 0, 0)) || __LIB_0__.func_405("PRE_BUYF", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (!__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_200, 75f, 1))
					{
						if (!iLocal_195)
						{
							__LIB_0__.func_523(&iLocal_197);
							iLocal_195 = 1;
						}
						__LIB_20__.func_761(&iLocal_197, Local_200, 1, 1, "PRE_SHOP");
					}
					else if (__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_200, 12f, 1))
					{
						if (iLocal_195)
						{
							__LIB_0__.func_523(&iLocal_197);
							iLocal_195 = 0;
						}
						__LIB_20__.func_761(&iLocal_197, Local_200, 1, 1, "PRE_BLIP");
						if (HUD::DOES_BLIP_EXIST(iLocal_197))
						{
							HUD::SET_BLIP_COLOUR(iLocal_197, 2);
							HUD::SET_BLIP_ROUTE_COLOUR(iLocal_197, 2);
						}
					}
				}
			}
			break;
		case 2:
			__LIB_0__.func_523(&iLocal_197);
			bVar1 = true;
			iVar0 = 0;
			while (iVar0 < 3)
			{
				switch (iVar0)
				{
					case 0:
						switch (Global_113386.f_2363.f_539.f_2403[0])
						{
							case 20:
								if (Global_113386.f_2363.f_539.f_2403[1] == 13 || Global_113386.f_2363.f_539.f_2403[2] == 17)
								{
									bVar1 = false;
								}
								break;
							case 21:
								if (Global_113386.f_2363.f_539.f_2403[1] == 14 || Global_113386.f_2363.f_539.f_2403[2] == 18)
								{
									bVar1 = false;
								}
								break;
							case 22:
								if (Global_113386.f_2363.f_539.f_2403[1] == 15 || Global_113386.f_2363.f_539.f_2403[2] == 19)
								{
									bVar1 = false;
								}
								break;
						}
						break;
					case 1:
						switch (Global_113386.f_2363.f_539.f_2403[1])
						{
							case 13:
								if (Global_113386.f_2363.f_539.f_2403[0] == 20 || Global_113386.f_2363.f_539.f_2403[2] == 17)
								{
									bVar1 = false;
								}
								break;
							case 14:
								if (Global_113386.f_2363.f_539.f_2403[0] == 21 || Global_113386.f_2363.f_539.f_2403[2] == 18)
								{
									bVar1 = false;
								}
								break;
							case 15:
								if (Global_113386.f_2363.f_539.f_2403[0] == 22 || Global_113386.f_2363.f_539.f_2403[2] == 19)
								{
									bVar1 = false;
								}
								break;
						}
						break;
					case 2:
						switch (Global_113386.f_2363.f_539.f_2403[2])
						{
							case 17:
								if (Global_113386.f_2363.f_539.f_2403[0] == 20 || Global_113386.f_2363.f_539.f_2403[1] == 13)
								{
									bVar1 = false;
								}
								break;
							case 18:
								if (Global_113386.f_2363.f_539.f_2403[0] == 21 || Global_113386.f_2363.f_539.f_2403[1] == 14)
								{
									bVar1 = false;
								}
								break;
							case 19:
								if (Global_113386.f_2363.f_539.f_2403[0] == 22 || Global_113386.f_2363.f_539.f_2403[1] == 15)
								{
									bVar1 = false;
								}
								break;
						}
						break;
				}
				iVar0++;
			}
			if (bVar1)
			{
				__LIB_0__.func_498(825);
			}
			func_101(0);
			break;
		case 3:
			Global_113386.f_2363.f_539.f_2403[0] = 20;
			Global_113386.f_2363.f_539.f_2403[1] = 13;
			Global_113386.f_2363.f_539.f_2403[2] = 17;
			__LIB_38__.func_158(1, 1, 1);
			iLocal_82 = 1;
			break;
	}
}

void func_101(bool bParam0)//Position - 0x370C
{
	__LIB_12__.func_46(iLocal_81);
	iLocal_188 = iLocal_81;
	if (!bParam0)
	{
		iLocal_81 = iLocal_188 + 1;
	}
	else if (iLocal_188 > 0)
	{
		iLocal_81 = (iLocal_188 - 1);
	}
	iLocal_191 = 0;
	iLocal_82 = 0;
}

void func_106()//Position - 0x37F6
{
	if (!iLocal_194)
	{
		if (__LIB_9__.func_488(28))
		{
			__LIB_0__.func_403(824, 0);
			iLocal_194 = 1;
		}
	}
}

void func_110()//Position - 0x38BF
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int* iVar3;
	switch (iLocal_82)
	{
		case 0:
			if (func_95(iLocal_81, 0))
			{
				if (__LIB_0__.func_294())
				{
					if (__LIB_26__.func_575(0f, 0f, 0f, 1))
					{
						Var1 = { 29.0849f, -1111.0872f, 28.3095f };
						fVar2 = 81.7758f;
					}
					else
					{
						Var1 = { 42.7098f, -1105.5011f, 28.1318f };
						fVar2 = 147.8968f;
					}
					__LIB_41__.func_639(&iVar3, Var1, fVar2, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
					__LIB_6__.func_775(0, -1, 1);
					iVar0 = MISC::GET_GAME_TIMER();
					while (!__LIB_10__.func_829(28) && (MISC::GET_GAME_TIMER() - iVar0) < 2000)
					{
						SYSTEM::WAIT(0);
					}
					__LIB_0__.func_84(500, 1);
					__LIB_0__.func_106(&iVar3);
					iLocal_82 = 2;
				}
				else
				{
					if (__LIB_0__.func_2(0))
					{
						__LIB_20__.func_741(PLAYER::PLAYER_PED_ID(), 16.5342f, -1122.5829f, 27.8635f, 354.7487f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						iVar0 = MISC::GET_GAME_TIMER();
						while (!__LIB_10__.func_829(28) && (MISC::GET_GAME_TIMER() - iVar0) < 2000)
						{
							SYSTEM::WAIT(0);
						}
						__LIB_0__.func_84(500, 1);
					}
					iLocal_82 = 2;
				}
			}
			break;
		case 2:
			func_101(0);
			break;
	}
}

void func_236()//Position - 0x10103
{
	if (!bLocal_28 && iLocal_81 != 3)
	{
		if (iLocal_81 > 0)
		{
			if (!bLocal_193)
			{
				if (!__LIB_10__.func_829(28))
				{
					func_243(1);
				}
				if (__LIB_26__.func_574(28))
				{
					func_243(1);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					iLocal_373 = MISC::GET_GAME_TIMER();
					func_243(4);
					return;
				}
			}
			if (!func_238())
			{
				func_243(3);
				return;
			}
			if (!bLocal_193)
			{
				if (!__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_200, 150f, 1))
				{
					func_243(2);
				}
				else if (!__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_200, 75f, 1))
				{
					if (!bLocal_201)
					{
						HUD::CLEAR_PRINTS();
						__LIB_12__.func_168("PRE_RETSHOP", &bLocal_201);
					}
				}
			}
		}
	}
}

int func_238()//Position - 0x101D9
{
	int iVar0;
	iVar0 = 315;
	if (iLocal_192 == 1)
	{
		iVar0 = 210;
	}
	else if (iLocal_192 == 2)
	{
		iVar0 = 105;
	}
	if (!__LIB_36__.func_83(bLocal_193, iVar0) && !bLocal_193)
	{
		return 0;
	}
	return 1;
}

void func_243(int iParam0)//Position - 0x10296
{
	HUD::CLEAR_PRINTS();
	__LIB_0__.func_296();
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			sLocal_189 = "PRE_FKICKOFF";
			break;
		case 2:
			sLocal_189 = "PRE_FLEFT";
			break;
		case 3:
			sLocal_189 = "PRE_CASH";
			break;
		case 4:
			sLocal_189 = "PRE_COPS";
			break;
	}
	iLocal_81 = 3;
	iLocal_82 = 0;
}

int func_244()//Position - 0x102F7
{
	func_245();
	if (iLocal_192 >= 3)
	{
		if ((__LIB_0__.func_405("PRE_BUYM", 0, 0) || __LIB_0__.func_405("PRE_BUYT", 0, 0)) || __LIB_0__.func_405("PRE_BUYF", 0, 0))
		{
			HUD::CLEAR_PRINTS();
		}
		return 1;
	}
	return 0;
}

void func_245()//Position - 0x1033F
{
	if (__LIB_0__.func_190())
	{
		switch (__LIB_18__.func_173())
		{
			case 0:
				if (Global_113386.f_2363.f_539.f_2403[0] == -99)
				{
					__LIB_12__.func_87(sLocal_80[0], sLocal_80[1], sLocal_80[2]);
				}
				else if (Global_113386.f_2363.f_539.f_2403[1] == -99)
				{
					__LIB_12__.func_87(sLocal_80[1], sLocal_80[0], sLocal_80[2]);
				}
				else if (Global_113386.f_2363.f_539.f_2403[2] == -99)
				{
					__LIB_12__.func_87(sLocal_80[2], sLocal_80[1], sLocal_80[0]);
				}
				break;
			case 1:
				if (Global_113386.f_2363.f_539.f_2403[1] == -99)
				{
					__LIB_12__.func_87(sLocal_80[1], sLocal_80[0], sLocal_80[2]);
				}
				else if (Global_113386.f_2363.f_539.f_2403[0] == -99)
				{
					__LIB_12__.func_87(sLocal_80[0], sLocal_80[1], sLocal_80[2]);
				}
				else if (Global_113386.f_2363.f_539.f_2403[2] == -99)
				{
					__LIB_12__.func_87(sLocal_80[2], sLocal_80[1], sLocal_80[0]);
				}
				break;
			case 2:
				if (Global_113386.f_2363.f_539.f_2403[2] == -99)
				{
					__LIB_12__.func_87(sLocal_80[2], sLocal_80[1], sLocal_80[0]);
				}
				else if (Global_113386.f_2363.f_539.f_2403[0] == -99)
				{
					__LIB_12__.func_87(sLocal_80[0], sLocal_80[1], sLocal_80[2]);
				}
				else if (Global_113386.f_2363.f_539.f_2403[1] == -99)
				{
					__LIB_12__.func_87(sLocal_80[1], sLocal_80[0], sLocal_80[2]);
				}
				break;
			}
	}
}

int func_248()//Position - 0x10546
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (Global_113386.f_2363.f_539.f_2403[iVar1] != -99)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_250()//Position - 0x105A2
{
	int iVar0;
	switch (__LIB_18__.func_173())
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (__LIB_11__.func_92(iVar0) < 315)
	{
		__LIB_40__.func_942(__LIB_18__.func_173(), 96, 315, 0, 0);
	}
}

void func_292(bool bParam0)//Position - 0x11F58
{
	__LIB_38__.func_82(joaat("Player_Zero"), 12, 20, bParam0);
	__LIB_38__.func_82(joaat("Player_Zero"), 12, 21, bParam0);
	__LIB_38__.func_82(joaat("Player_Zero"), 12, 22, bParam0);
	__LIB_38__.func_82(joaat("Player_One"), 12, 13, bParam0);
	__LIB_38__.func_82(joaat("Player_One"), 12, 14, bParam0);
	__LIB_38__.func_82(joaat("Player_One"), 12, 15, bParam0);
	__LIB_38__.func_82(joaat("Player_Two"), 12, 17, bParam0);
	__LIB_38__.func_82(joaat("Player_Two"), 12, 18, bParam0);
	__LIB_38__.func_82(joaat("Player_Two"), 12, 19, bParam0);
}

void func_361()//Position - 0x28E2E
{
	__LIB_0__.func_371();
	func_369();
	func_362();
}

void func_362()//Position - 0x28E42
{
	struct<3> Var0[8];
	Var0[0 /*3*/] = { 344.0985f, -1605.1539f, 28.2928f };
	Var0[1 /*3*/] = { 365.6985f, -1580.435f, 28.2928f };
	Var0[2 /*3*/] = { 407.9943f, -1616.2589f, 28.2928f };
	Var0[3 /*3*/] = { 387.3322f, -1641.2583f, 29.0912f };
	func_363(&Var0, 4);
}

void func_363(var uParam0, int iParam1)//Position - 0x28EAF
{
	int iVar0;
	__LIB_11__.func_329(&uLocal_84);
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		__LIB_11__.func_328(&uLocal_84, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	__LIB_11__.func_327(&uLocal_84);
	__LIB_20__.func_743(&uLocal_136, &uLocal_84, 50f);
}

void func_369()//Position - 0x291B4
{
	sLocal_80[0] = "PRE_BUYM";
	sLocal_80[1] = "PRE_BUYF";
	sLocal_80[2] = "PRE_BUYT";
}

void func_371()//Position - 0x291DF
{
	__LIB_12__.func_43(1);
	__LIB_11__.func_729();
	__LIB_32__.func_813();
	func_372(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_372(bool bParam0)//Position - 0x291FD
{
	if (bParam0)
	{
	}
	__LIB_32__.func_792(1, 1, 1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	func_21();
	__LIB_0__.func_371();
	__LIB_0__.func_371();
	__LIB_0__.func_371();
	__LIB_0__.func_371();
	if (bParam0)
	{
		__LIB_6__.func_771();
		HUD::CLEAR_PRINTS();
		__LIB_0__.func_371();
	}
	else
	{
		__LIB_0__.func_371();
	}
	HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
	if (CAM::DOES_CAM_EXIST(iLocal_198))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_198, false);
	}
}

void func_384()//Position - 0x29384
{
	Global_113386.f_2363.f_539.f_2403[0] = -99;
	Global_113386.f_2363.f_539.f_2403[1] = -99;
	Global_113386.f_2363.f_539.f_2403[2] = -99;
	func_292(0);
}

void func_385()//Position - 0x293CA
{
	int iVar0;
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || __LIB_0__.func_2(0))
	{
		if (!__LIB_0__.func_134())
		{
			iVar0 = __LIB_0__.func_323();
			if (iVar0 != -1)
			{
				if (!func_5(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_26__.func_260();
		}
	}
}

