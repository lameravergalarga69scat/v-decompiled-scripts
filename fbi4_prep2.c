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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = -1;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 1000;
	var uLocal_30 = 1000;
	var uLocal_31 = 0;
	char* sLocal_32 = NULL;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<4> Local_50[10];
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57[3] = { 0, 0, 0 };
	int iLocal_58[3] = { 0, 0, 0 };
	var uLocal_59 = 0;
	var uLocal_60 = 15;
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
	var uLocal_112 = 15;
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
	int iLocal_164 = 0;
	char* sLocal_165 = NULL;
	char* sLocal_166 = NULL;
	int iLocal_167 = 0;
	char[] cLocal_168[8] = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	int* iLocal_172 = NULL;
	int* iLocal_173 = NULL;
	int iLocal_174 = 0;
	struct<3> Local_175 = { 0, 0, 0 } ;
	struct<3> Local_176 = { 0, 0, 0 } ;
	bool bLocal_177 = 0;
	int iLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	float fLocal_186 = 0f;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	float fLocal_189 = 0f;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	bool bLocal_193 = 0;
	int iLocal_194[3] = { 0, 0, 0 };
	bool bLocal_195 = 0;
	struct<3> Local_196 = { 0, 0, 0 } ;
	struct<16> Local_197 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0 } ;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	struct<6> Local_200 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_201 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_202 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_203 = 0;
	int* iLocal_204 = NULL;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	char[] cLocal_207[8] = 0;
	var uLocal_208 = 16;
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
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
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
	sLocal_32 = "NULL";
	fLocal_33 = 0f;
	fLocal_37 = -0.0375f;
	fLocal_38 = 0.17f;
	fLocal_43 = 80f;
	fLocal_44 = 140f;
	fLocal_45 = 180f;
	iLocal_48 = 3;
	sLocal_166 = "FBIPRB";
	Local_175 = { 0f, 0f, 0f };
	Local_176 = { 1374.858f, -2077.3743f, 50.9981f };
	iLocal_185 = -1;
	fLocal_186 = 0f;
	fLocal_189 = 0f;
	Local_196 = { 0.2f, 2.45f, 0f };
	cLocal_207 = "FIBP2AU";
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		sLocal_165 = 0;
		func_480();
		func_476();
	}
	func_463();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	if (__LIB_0__.func_294())
	{
		__LIB_0__.func_370(-404.3334f, -2147.648f, 9.314f, 182.5609f, 1, 0);
	}
	__LIB_36__.func_81();
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_ToT", 0);
		if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
		{
			func_445();
			func_442();
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			switch (iLocal_52)
			{
				case 0:
					func_253();
					break;
				case 1:
					func_251();
					break;
				case 2:
					func_138();
					break;
				case 3:
					func_96();
					break;
				case 4:
					func_28();
					break;
				case 5:
					func_1();
					break;
			}
			if (iLocal_52 != 5)
			{
				if (iLocal_52 >= 0 && !bLocal_40)
				{
				}
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x17E
{
	switch (iLocal_53)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			func_26();
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_165))
			{
				func_24(sLocal_165);
			}
			else
			{
				func_8(0);
			}
			iLocal_53 = 1;
			break;
		case 1:
			if (__LIB_0__.func_204())
			{
				func_2();
				func_476();
			}
			break;
	}
}

void func_2()//Position - 0x1D6
{
	__LIB_11__.func_32(&Local_202);
	__LIB_11__.func_32(&Local_200);
	__LIB_11__.func_32(&Local_201);
	__LIB_11__.func_32(&iLocal_198);
	__LIB_0__.func_0(&Local_197);
}

void func_8(int iParam0)//Position - 0x355
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__.func_2(0))
	{
		iVar0 = __LIB_0__.func_323();
		if (!func_9(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_9(int iParam0)//Position - 0x39A
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
	func_10(&(Global_113386.f_2363.f_539), iVar1);
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

void func_10(var uParam0, int iParam1)//Position - 0x4AA
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
			if (!func_12(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_12(int iParam0, var uParam1, float fParam2)//Position - 0x67E
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
			return func_12(8, uParam1, fParam2);
			break;
		case 10:
			return func_12(8, uParam1, fParam2);
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

void func_24(char* sParam0)//Position - 0x130D
{
	__LIB_0__.func_324(sParam0);
	func_8(0);
}

void func_26()//Position - 0x135F
{
	__LIB_0__.func_523(&iLocal_172);
	__LIB_0__.func_523(&iLocal_173);
}

void func_28()//Position - 0x1393
{
	bool bVar0;
	switch (iLocal_53)
	{
		case 0:
			iLocal_53 = 1;
			break;
		case 1:
			if (!__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_176, 270f, 1))
			{
				iLocal_53 = 2;
			}
			else if (!__LIB_0__.func_405("PRB_LEVAREA", 0, 0))
			{
				__LIB_0__.func_210("PRB_LEVAREA", 60000, 0);
			}
			break;
		case 2:
			bVar0 = __LIB_18__.func_173();
			if (__LIB_0__.func_405("PRB_LEVAREA", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			if (bVar0 == 0)
			{
				if (func_56(&uLocal_59, &cLocal_168, &uLocal_208))
				{
					func_53();
					func_48();
				}
			}
			else
			{
				__LIB_0__.func_503(46, 1);
				__LIB_20__.func_744(func_46(bVar0), -621899663, -621899663, 5, 0, bVar0, __LIB_12__.func_44(bVar0), 0, 6000, 6000, -1, 0, 0);
				func_53();
				func_48();
			}
			break;
		case 3:
			__LIB_41__.func_440(1, 1, 1);
			iLocal_53 = 2;
			break;
	}
}

int func_46(bool bParam0)//Position - 0x1AE8
{
	if (bParam0 == 1)
	{
		return 530956160;
	}
	return 240475766;
}

void func_48()//Position - 0x1B48
{
	HUD::CLEAR_PRINTS();
	__LIB_0__.func_296();
	__LIB_6__.func_823(0, 0);
	func_476();
}

void func_53()//Position - 0x1CD7
{
	__LIB_0__.func_409(0, 324);
	__LIB_0__.func_320(0, 323);
}

int func_56(var uParam0, char* sParam1, var uParam2)//Position - 0x1D6C
{
	switch (*uParam0)
	{
		case 0:
			if (__LIB_20__.func_759())
			{
				if ((__LIB_0__.func_176(74) || __LIB_0__.func_176(75)) && __LIB_20__.func_740())
				{
					if (__LIB_18__.func_173() == 0)
					{
						__LIB_12__.func_167(1);
						__LIB_0__.func_503(46, 1);
						*uParam0 = 4;
					}
					else
					{
						__LIB_0__.func_203(uParam2, 0, 0, "MICHAEL", 0, 1);
						if (func_71(uParam2, __LIB_36__.func_75(), __LIB_18__.func_173(), "FBIPRAU", __LIB_36__.func_74(), 9, 1, 0, 0, 0))
						{
							*sParam1 = { __LIB_20__.func_800(1) };
							__LIB_0__.func_503(46, 1);
							*uParam0 = 1;
						}
					}
				}
				else if (__LIB_18__.func_173() == 0)
				{
					__LIB_12__.func_167(0);
					*uParam0 = 4;
				}
				else
				{
					__LIB_0__.func_203(uParam2, 0, 0, "MICHAEL", 0, 1);
					if (func_71(uParam2, __LIB_36__.func_75(), __LIB_18__.func_173(), "FBIPRAU", __LIB_36__.func_74(), 9, 1, 0, 0, 0))
					{
						*sParam1 = { __LIB_20__.func_800(0) };
						*uParam0 = 1;
					}
				}
			}
			else
			{
				__LIB_39__.func_919();
				*uParam0 = 4;
			}
			break;
		case 1:
			if (__LIB_0__.func_509())
			{
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 0)
				{
					__LIB_11__.func_505("FBIPRAU", sParam1);
					__LIB_12__.func_38(1);
					*uParam0 = 3;
				}
			}
			if (__LIB_1__.func_412())
			{
				*uParam0 = 3;
			}
			break;
		case 2:
			break;
		case 3:
			if (!__LIB_0__.func_509())
			{
				if (!__LIB_0__.func_77(0))
				{
					if (!__LIB_0__.func_176(3) && __LIB_20__.func_759())
					{
						__LIB_0__.func_71(50, 0);
					}
					return 1;
				}
			}
			break;
		case 4:
			return 1;
			break;
	}
	return 0;
}

bool func_71(var uParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x23F7
{
	__LIB_0__.func_391(uParam0, iParam1, sParam3, iParam7, iParam8, 0);
	Global_7454 = bParam2;
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21619 = 0;
	Global_21610 = 1;
	Global_21657 = 0;
	Global_21659 = 0;
	if (iParam6 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	Global_2883585 = 0;
	return __LIB_31__.func_878(sParam4, iParam5, bParam9);
}

void func_96()//Position - 0x2E49
{
	func_131(&iLocal_198, &iLocal_199, &iLocal_55, &iLocal_173, &iLocal_172, Local_176, Local_202.f_0, 0, 11f);
	switch (iLocal_53)
	{
		case 0:
			if (func_110(iLocal_52, bLocal_40))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (__LIB_1__.func_183(iLocal_198))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_198, false))
						{
							__LIB_12__.func_50("PRB_LEVVEH", &iLocal_167);
						}
					}
				}
				iLocal_53 = 1;
			}
			break;
		case 1:
			__LIB_20__.func_800(&iLocal_172, Local_176, &iLocal_54, iLocal_55, &iLocal_167, &iLocal_190);
			if (__LIB_20__.func_803(iLocal_198, Local_176, &iLocal_172, iLocal_55, iLocal_54, &uLocal_179, &iLocal_191, &uLocal_188, &uLocal_187, &iLocal_167, 11f))
			{
				if (!func_100())
				{
					if (func_56(&uLocal_59, &cLocal_168, &uLocal_208))
					{
						if (__LIB_0__.func_121(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_198)))
						{
							VEHICLE::DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_198)));
						}
						func_53();
						func_48();
					}
				}
				else
				{
					if (__LIB_0__.func_121(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_198)))
					{
						VEHICLE::DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_198)));
					}
					func_53();
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 8f, 4);
					func_98(0);
				}
			}
			break;
		case 3:
			if (__LIB_1__.func_183(Local_202.f_0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_202.f_0, false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_202.f_0, -1);
				}
				else
				{
					__LIB_10__.func_701(Local_202.f_0, Local_176, 126.0705f, 0, 1);
					__LIB_41__.func_440(1, 1, 1);
					iLocal_53 = 1;
				}
			}
			break;
	}
}

void func_98(bool bParam0)//Position - 0x3019
{
	__LIB_12__.func_46(iLocal_52);
	iLocal_164 = iLocal_52;
	if (!bParam0)
	{
		iLocal_52 = iLocal_164 + 1;
	}
	else if (iLocal_164 > 0)
	{
		iLocal_52 = (iLocal_164 - 1);
	}
	iLocal_167 = 0;
	iLocal_53 = 0;
}

int func_100()//Position - 0x3064
{
	if (__LIB_20__.func_759())
	{
		if ((__LIB_0__.func_176(74) || __LIB_0__.func_176(75)) && __LIB_20__.func_740())
		{
			return 1;
		}
	}
	return 0;
}

int func_110(int iParam0, bool bParam1)//Position - 0x352B
{
	int* iVar0;
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_40 = false;
				__LIB_41__.func_440(1, 1, 1);
			}
			else if (func_124(1, Local_175, 0))
			{
				if (!__LIB_0__.func_294())
				{
					if (func_123())
					{
						__LIB_0__.func_372(34);
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), true);
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), true);
						iLocal_52 = 2;
						return 1;
					}
					else if ((((func_124(2, Local_202.f_1, Local_202.f_4) && func_124(5, Local_200.f_1, Local_200.f_4)) && func_124(6, Local_201.f_1, Local_201.f_4)) && func_124(3, Local_197.f_1, Local_197.f_4)) && func_124(4, Local_175, 0))
					{
						iLocal_206 = PED::ADD_SCENARIO_BLOCKING_AREA(-417.19797f, -2155.8857f, 8.36266f, -383.49078f, -2188.5115f, 12.9213f, false, true, true, true);
						__LIB_0__.func_372(34);
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), true);
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), true);
						if (__LIB_1__.func_197(Local_197.f_0))
						{
							if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_PLAY_ANIM")))
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(Local_197.f_0, "mini@repair", "fixing_a_ped", ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_200.f_0, Local_196), 0f, 0f, -ENTITY::GET_ENTITY_HEADING(Local_200.f_0), 1000f, -1.5f, -1, 1, 0f, 2, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_197.f_0, false, false);
							}
							__LIB_30__.func_731();
							func_118();
							PED::SET_PED_CONFIG_FLAG(Local_197.f_0, 154, false);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_197.f_0, iLocal_203);
						}
						if (HUD::GET_BLIP_FROM_ENTITY(Local_202.f_0) != 0)
						{
							iVar0 = HUD::GET_BLIP_FROM_ENTITY(Local_202.f_0);
							MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
							__LIB_0__.func_523(&iVar0);
							MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
						}
						__LIB_20__.func_746(&iLocal_173, Local_202.f_0, 1);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Tow_truck_damage", Local_200.f_0, "FBI_04_HEAT_SOUNDS", false, 0);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			break;
		case 1:
			if (bParam1)
			{
				if ((((func_124(2, Local_202.f_1, Local_202.f_4) && func_124(5, Local_200.f_1, Local_200.f_4)) && func_124(4, Local_175, 0)) && func_124(6, Local_201.f_1, Local_201.f_4)) && func_124(3, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_200.f_0, Local_196), -ENTITY::GET_ENTITY_HEADING(Local_200.f_0)))
				{
					MISC::CLEAR_AREA(Local_197.f_1, 100f, true, false, false, false);
					func_115();
					if (__LIB_1__.func_197(Local_197.f_0))
					{
						PED::SET_PED_CAPSULE(Local_197.f_0, 0.1f);
						if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_PLAY_ANIM")))
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(Local_197.f_0, "mini@repair", "fixing_a_ped", ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_200.f_0, Local_196), 0f, 0f, -ENTITY::GET_ENTITY_HEADING(Local_200.f_0), 1000f, -1.5f, -1, 1, 0f, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_197.f_0, false, false);
							__LIB_30__.func_731();
							func_118();
							PED::SET_PED_CONFIG_FLAG(Local_197.f_0, 154, false);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_197.f_0, iLocal_203);
						}
					}
					if (!__LIB_0__.func_294())
					{
						__LIB_20__.func_741(PLAYER::PLAYER_PED_ID(), -396.3081f, -2145.1758f, 9.3193f, 172.0072f);
					}
					if (!__LIB_0__.func_295())
					{
						iLocal_206 = PED::ADD_SCENARIO_BLOCKING_AREA(-417.19797f, -2155.8857f, 8.36266f, -383.49078f, -2188.5115f, 12.9213f, false, true, true, true);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Tow_truck_damage", Local_200.f_0, "FBI_04_HEAT_SOUNDS", false, 0);
						__LIB_20__.func_746(&iLocal_173, Local_202.f_0, 1);
						bLocal_40 = false;
						__LIB_41__.func_440(1, 1, 1);
					}
					else
					{
						__LIB_6__.func_775(0, -1, 1);
					}
				}
			}
			else
			{
				return 1;
			}
			break;
		case 2:
			if (bParam1)
			{
				if (func_124(2, Local_202.f_1, Local_202.f_4))
				{
					func_115();
					if (!__LIB_0__.func_295())
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_202.f_0, -1);
					}
					if (!__LIB_0__.func_295())
					{
						iLocal_206 = PED::ADD_SCENARIO_BLOCKING_AREA(-417.19797f, -2155.8857f, 8.36266f, -383.49078f, -2188.5115f, 12.9213f, false, true, true, true);
						bLocal_40 = false;
						__LIB_41__.func_440(1, 1, 1);
					}
					else
					{
						__LIB_6__.func_775(Local_202.f_0, -1, 1);
					}
				}
			}
			else
			{
				return 1;
			}
			break;
		case 3:
			if (bParam1)
			{
				if (func_124(2, Local_176, Local_202.f_4))
				{
					func_115();
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_202.f_0, -1);
					if (!__LIB_0__.func_295())
					{
						bLocal_40 = false;
						__LIB_41__.func_440(1, 1, 1);
					}
					else
					{
						__LIB_6__.func_775(0, -1, 1);
					}
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_115()//Position - 0x3A85
{
	int iVar0;
	iLocal_190 = 0;
	iLocal_191 = 0;
	bLocal_177 = false;
	bLocal_193 = false;
	iLocal_192 = 0;
	iLocal_178 = 0;
	iLocal_184 = 0;
	iLocal_185 = -1;
	fLocal_186 = 0f;
	Local_197.f_14 = -1;
	Local_197.f_15 = 0;
	iLocal_56 = 0;
	iLocal_54 = 0;
	iLocal_55 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_57[iVar0] = 0;
		iLocal_58[iVar0] = 0;
		iLocal_194[iVar0] = 0;
		iVar0++;
	}
}

void func_118()//Position - 0x3B36
{
	__LIB_36__.func_76(&uLocal_208);
	__LIB_0__.func_203(&uLocal_208, 3, Local_197.f_0, "FIBP2TowGuy", 1, 1);
}

int func_123()//Position - 0x3C0D
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("towtruck")))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true, false);
			iLocal_198 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__.func_183(iLocal_198))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_124(int iParam0, struct<3> Param1, float fParam2)//Position - 0x3C60
{
	switch (iParam0)
	{
		case 0:
			if (__LIB_0__.func_394(Param1, Local_175, 1056964608, 0) && fParam2 == 0f)
			{
				return 1;
			}
			break;
		case 1:
			HUD::REQUEST_ADDITIONAL_TEXT(sLocal_166, 0);
			HUD::REQUEST_ADDITIONAL_TEXT(cLocal_207, 6);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0) && HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				return 1;
			}
			break;
		case 2:
			if (__LIB_1__.func_183(Global_96938[0]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[0], true, true);
				Local_202.f_0 = Global_96938[0];
				if (__LIB_1__.func_183(Local_202.f_0))
				{
					__LIB_0__.func_501(Local_202.f_0, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_202.f_0, true);
					return 1;
				}
			}
			else if (__LIB_12__.func_167(&Local_202, Local_202.f_5, Local_202.f_1, Local_202.f_4, 1))
			{
				__LIB_0__.func_501(Local_202.f_0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_202.f_0, true);
				return 1;
			}
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
			{
				if (!PED::IS_PED_DEAD_OR_DYING(Global_96938.f_9[0], true))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[0], true, true);
					Local_197.f_0 = Global_96938.f_9[0];
					if (__LIB_1__.func_197(Local_197.f_0))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_197.f_0, true);
						PED::SET_PED_CAPSULE(Local_197.f_0, 0.1f);
						AUDIO::STOP_PED_SPEAKING(Local_197.f_0, true);
						TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_197.f_0, false);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (__LIB_26__.func_564(&Local_197, Local_197.f_5, Local_197.f_1, Local_197.f_4, 1, 0, 1, 1))
			{
				PED::SET_PED_CAPSULE(Local_197.f_0, 0.1f);
				AUDIO::STOP_PED_SPEAKING(Local_197.f_0, true);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_197.f_0);
				TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_197.f_0, false);
				return 1;
			}
			break;
		case 4:
			STREAMING::REQUEST_ANIM_DICT("mini@repair");
			STREAMING::REQUEST_ANIM_DICT("amb@code_human_cower@male@enter");
			if (STREAMING::HAS_ANIM_DICT_LOADED("mini@repair") && STREAMING::HAS_ANIM_DICT_LOADED("amb@code_human_cower@male@enter"))
			{
				return 1;
			}
			break;
		case 5:
			if (__LIB_1__.func_183(Global_96938[1]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[1], true, true);
				Local_200.f_0 = Global_96938[1];
				if (__LIB_1__.func_183(Local_200.f_0))
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_200.f_0, 0);
					return 1;
				}
			}
			else if (__LIB_12__.func_167(&Local_200, Local_200.f_5, Local_200.f_1, Local_200.f_4, 1))
			{
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_200.f_0, 0);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_200.f_0, 4, false, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_200.f_0, 0, true, false);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_200.f_0, 100f);
				return 1;
			}
			break;
		case 6:
			if (__LIB_1__.func_183(Global_96938[2]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[2], true, true);
				Local_201.f_0 = Global_96938[2];
				if (__LIB_1__.func_183(Local_201.f_0))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_201.f_0, 3);
					return 1;
				}
			}
			else if (__LIB_12__.func_167(&Local_201, Local_201.f_5, Local_201.f_1, Local_201.f_4, 1))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_201.f_0, 3);
				return 1;
			}
			break;
	}
	return 0;
}

void func_131(int* iParam0, int iParam1, int iParam2, int* iParam3, int* iParam4, struct<3> Param5, int iParam6, bool bParam7, float fParam8)//Position - 0x4156
{
	if (__LIB_1__.func_183(*iParam0))
	{
		switch (*iParam2)
		{
			case 0:
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false))
				{
					__LIB_0__.func_523(iParam3);
					if (__LIB_0__.func_405(__LIB_12__.func_47(__LIB_9__.func_611()), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(__LIB_12__.func_47(__LIB_9__.func_611()));
					}
					if (*iParam0 == iParam6)
					{
						*iParam2 = 1;
					}
					else
					{
						*iParam2 = 2;
					}
				}
				else if (__LIB_20__.func_625(*iParam0) || __LIB_20__.func_747(*iParam0))
				{
					__LIB_0__.func_523(iParam3);
					if (__LIB_0__.func_405(__LIB_12__.func_47(__LIB_9__.func_611()), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(__LIB_12__.func_47(__LIB_9__.func_611()));
					}
					*iParam2 = 3;
				}
				else
				{
					if (__LIB_0__.func_405(__LIB_12__.func_48(__LIB_9__.func_611(), bParam7), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(__LIB_12__.func_48(__LIB_9__.func_611(), bParam7));
					}
					if (__LIB_9__.func_611() != 33)
					{
						__LIB_20__.func_802(iParam0);
					}
					else
					{
						func_132(iParam0, iParam1);
					}
				}
				break;
			case 2:
			case 1:
				if ((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false) && !__LIB_20__.func_625(*iParam0)) && !__LIB_20__.func_747(*iParam0))
				{
					__LIB_0__.func_523(iParam4);
					if (!ENTITY::IS_ENTITY_AT_COORD(*iParam0, Param5, fParam8, fParam8, 2f, false, true, 2))
					{
						__LIB_20__.func_746(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
			case 3:
				if (!__LIB_20__.func_625(*iParam0) && !__LIB_20__.func_747(*iParam0))
				{
					__LIB_0__.func_523(iParam4);
					if (!ENTITY::IS_ENTITY_AT_COORD(*iParam0, Param5, fParam8, fParam8, 2f, false, true, 2))
					{
						__LIB_20__.func_746(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
		}
	}
	else if (__LIB_9__.func_611() != 33)
	{
		__LIB_20__.func_802(iParam0);
	}
	else
	{
		func_132(iParam0, iParam1);
	}
}

void func_132(int* iParam0, var uParam1)//Position - 0x430A
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!bLocal_40)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (iVar0 != *iParam0)
			{
				if (__LIB_1__.func_183(iVar0))
				{
					iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
					if (iVar1 == joaat("trash"))
					{
						*uParam1 = *iParam0;
						__LIB_0__.func_106(iParam0);
						*iParam0 = iVar0;
						__LIB_0__.func_501(*iParam0, 1);
						__LIB_0__.func_501(*uParam1, 3);
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
						}
					}
					else if (iVar1 == joaat("towtruck"))
					{
						iVar2 = VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
						if (__LIB_0__.func_121(iVar2))
						{
							iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2);
							if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("trash"))
							{
								*uParam1 = *iParam0;
								__LIB_0__.func_106(iParam0);
								*iParam0 = iVar0;
								__LIB_0__.func_501(*iParam0, 1);
								__LIB_0__.func_501(*uParam1, 3);
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_138()//Position - 0x45D4
{
	func_250();
	func_131(&iLocal_198, &iLocal_199, &iLocal_55, &iLocal_173, &iLocal_172, Local_176, Local_202.f_0, 0, 11f);
	func_249();
	func_156();
	switch (iLocal_53)
	{
		case 0:
			if (func_110(iLocal_52, bLocal_40))
			{
				__LIB_20__.func_745(&iLocal_172, Local_176, 1);
				__LIB_12__.func_43(1);
				iLocal_53 = 1;
			}
			break;
		case 1:
			__LIB_20__.func_800(&iLocal_172, Local_176, &iLocal_54, iLocal_55, &iLocal_167, &iLocal_190);
			func_145();
			if (!bLocal_193)
			{
				if (__LIB_20__.func_803(iLocal_198, Local_176, &iLocal_172, iLocal_54, iLocal_55, &iLocal_167, &iLocal_191, 0, 0, 11f))
				{
					iLocal_53 = 2;
				}
			}
			else if (!iLocal_192)
			{
				if (!__LIB_0__.func_75())
				{
					if (__LIB_1__.func_197(Local_197.f_0))
					{
						if (__LIB_20__.func_625(PED::GET_VEHICLE_PED_IS_IN(Local_197.f_0, false)))
						{
							__LIB_20__.func_746(&(Local_197.f_6.f_1), Local_202.f_0, 0);
						}
					}
					__LIB_0__.func_210("PRB_LOSETOW", 7500, 0);
					__LIB_0__.func_523(&iLocal_172);
					iLocal_192 = 1;
				}
			}
			break;
		case 2:
			__LIB_38__.func_176();
			__LIB_0__.func_523(&iLocal_172);
			__LIB_0__.func_523(&iLocal_173);
			if (__LIB_12__.func_39(1077936128, 1))
			{
				if (__LIB_1__.func_183(iLocal_198))
				{
					func_98(0);
				}
			}
			break;
		case 3:
			if (__LIB_1__.func_183(iLocal_198))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_198, false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_198, -1);
				}
				else
				{
					__LIB_10__.func_701(iLocal_198, Local_176, 146.5443f, 0, 1);
					__LIB_41__.func_440(1, 1, 1);
					iLocal_53 = 1;
				}
			}
			break;
	}
}

void func_145()//Position - 0x4946
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = __LIB_36__.func_33(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			switch (iLocal_58[iVar0])
			{
				case 0:
					if (!__LIB_36__.func_78(iVar1))
					{
						func_154(iVar1, iVar0);
						if (__LIB_36__.func_107(iVar1, 0))
						{
							if (func_152(iVar0, iVar1) || func_150(iVar0, iVar1))
							{
								if (__LIB_36__.func_79(iVar1, 0))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
									TASK::CLEAR_PED_TASKS(iVar1);
								}
							}
						}
					}
					break;
				case 1:
					func_154(iVar1, iVar0);
					if (func_147(iVar0, iVar1))
					{
						iLocal_57[iVar0] = 0;
						iLocal_58[iVar0] = 0;
						__LIB_36__.func_77(iVar1);
					}
					break;
				case 2:
					func_154(iVar1, iVar0);
					if (func_146(iVar0, iVar1))
					{
						iLocal_57[iVar0] = 0;
						iLocal_58[iVar0] = 0;
						__LIB_36__.func_77(iVar1);
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_146(int iParam0, int iParam1)//Position - 0x4A3C
{
	switch (iLocal_57[iParam0])
	{
		case 0:
			PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(-632.49805f, -2424.9077f, 1710.1232f, -1791.7899f);
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(-632.49805f, -2424.9077f, 1710.1232f, -1791.7899f))
			{
				TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iParam1, PED::GET_VEHICLE_PED_IS_IN(iParam1, false), Local_176, 4, 20f, 786469, 2f, 10f, true);
				iLocal_57[iParam0] = 5;
			}
			break;
		case 5:
			if (!func_150(iParam0, iParam1) || __LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_176, 1.5f, 1))
			{
				iLocal_57[iParam0] = 6;
			}
			break;
		case 6:
			return 1;
			break;
	}
	return 0;
}

int func_147(int iParam0, int iParam1)//Position - 0x4AF7
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	Var1 = { 0f, -1f, 0f };
	if (__LIB_1__.func_197(Local_197.f_0))
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(Local_197.f_0))
		{
			return 1;
		}
		switch (iLocal_57[iParam0])
		{
			case 0:
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_197.f_0, Var1) };
				if (!MISC::IS_POSITION_OCCUPIED(Var0, 1.5f, false, false, true, false, false, Local_197.f_0, false))
				{
					if (!bLocal_195)
					{
						if (iParam0 == 0)
						{
							sVar2 = "FP2_MTAKEDOW";
						}
						else if (iParam0 == 1)
						{
							sVar2 = "FP2_FTAKEDOW";
						}
						else if (iParam0 == 2)
						{
							sVar2 = "FP2_TTAKEDOW";
						}
						bLocal_195 = __LIB_35__.func_536(&uLocal_208, cLocal_207, sVar2, 7, 0, 0, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, Var0, 1f, 20000, 0.25f, 0, 82.7989f);
						PED::SET_PED_STEALTH_MOVEMENT(iParam1, true, 0);
						if (iParam0 == 2)
						{
							WEAPON::GIVE_WEAPON_TO_PED(iParam1, joaat("WEAPON_KNIFE"), -1, true, true);
							iLocal_57[iParam0] = 2;
						}
						else
						{
							WEAPON::GIVE_WEAPON_TO_PED(iParam1, joaat("WEAPON_UNARMED"), -1, true, true);
							iLocal_57[iParam0] = 1;
						}
					}
				}
				else
				{
					return 1;
				}
				break;
			case 1:
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_197.f_0, Var1) };
				if (!__LIB_4__.func_465(iParam1, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) && __LIB_0__.func_530(iParam1, Var0, 3f, 1))
				{
					TASK::TASK_STEALTH_KILL(iParam1, Local_197.f_0, MISC::GET_HASH_KEY("AR_stealth_kill_a"), 1f, 0);
					TASK::CLEAR_PED_TASKS(Local_197.f_0);
					iLocal_56 = 18;
					iLocal_57[iParam0] = 4;
				}
				break;
			case 2:
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_197.f_0, Var1) };
				if (!__LIB_4__.func_465(iParam1, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) && __LIB_0__.func_530(iParam1, Var0, 1.5f, 1))
				{
					TASK::TASK_STEALTH_KILL(iParam1, Local_197.f_0, MISC::GET_HASH_KEY("AR_stealth_kill_knife"), 1f, 0);
					TASK::CLEAR_PED_TASKS(Local_197.f_0);
					iLocal_56 = 18;
					iLocal_57[iParam0] = 4;
				}
				break;
			case 3:
				break;
			case 4:
				break;
		}
	}
	else if (!__LIB_4__.func_465(iParam1, joaat("SCRIPT_TASK_STEALTH_KILL")))
	{
		return 1;
	}
	return 0;
}

int func_150(int iParam0, int iParam1)//Position - 0x4DA7
{
	if (!__LIB_0__.func_198())
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_198) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_198, false)) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_198, Local_176, 2f, 2f, 2f, false, true, 0))
		{
			if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_198, false) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_198, -1, false) != PLAYER::PLAYER_PED_ID())
			{
				if (PED::IS_PED_IN_VEHICLE(iParam1, iLocal_198, false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_198, -1, false) == iParam1)
				{
					iLocal_58[iParam0] = 2;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_152(int iParam0, int iParam1)//Position - 0x4E5C
{
	if (!__LIB_0__.func_198())
	{
		if (__LIB_1__.func_197(Local_197.f_0))
		{
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -408.02856f, -2175.4758f, 5.31836f, -394.644f, -2175.297f, 15.31835f, 21.52f, false, true, 0) && !func_153(iParam0)) && !PED::IS_PED_IN_MELEE_COMBAT(Local_197.f_0)) && !PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				iLocal_58[iParam0] = 1;
				return 1;
			}
		}
	}
	return 0;
}

int func_153(int iParam0)//Position - 0x4ED5
{
	if (iParam0 == 0)
	{
		if (iLocal_58[1] == 1 || iLocal_58[2] == 1)
		{
			return 1;
		}
	}
	else if (iParam0 == 1)
	{
		if (iLocal_58[0] == 1 || iLocal_58[2] == 1)
		{
			return 1;
		}
	}
	else if (iParam0 == 2)
	{
		if (iLocal_58[1] == 1 || iLocal_58[0] == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_154(int iParam0, int iParam1)//Position - 0x4F47
{
	if (iParam0 != PLAYER::PLAYER_PED_ID())
	{
		if (!iLocal_194[iParam1])
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
			{
				iLocal_194[iParam1] = 1;
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, false);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0, false);
			}
		}
		else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			iLocal_194[iParam1] = 0;
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, true);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0, true);
		}
	}
	else if (iLocal_194[iParam1])
	{
		iLocal_194[iParam1] = 0;
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, true);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0, true);
	}
}

void func_156()//Position - 0x500C
{
	int iVar0;
	if (__LIB_1__.func_197(Local_197.f_0))
	{
		func_227();
		switch (iLocal_56)
		{
			case 18:
				break;
			case 1:
				if (MISC::GET_GAME_TIMER() - Local_197.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(9000, 10000)
				{
					if (!func_226())
					{
						func_210(iLocal_56);
					}
					else
					{
						func_210(15);
					}
				}
				PED::SET_PED_CAPSULE(Local_197.f_0, 0.1f);
				break;
			case 3:
				if (__LIB_1__.func_183(Local_202.f_0))
				{
					if (__LIB_0__.func_530(Local_197.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_202.f_0, -1f, 0.5f, 0f), 3f, 1))
					{
						func_210(15);
						return;
					}
				}
				break;
			case 2:
				if (__LIB_1__.func_183(Local_200.f_0))
				{
					if (__LIB_0__.func_530(Local_200.f_0, Local_200.f_1, 2f, 1))
					{
						if (__LIB_0__.func_530(Local_197.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_200.f_0, -1f, 0.5f, 0f), 2f, 1))
						{
							func_210(4);
							return;
						}
					}
					else
					{
						func_210(15);
					}
				}
				break;
			case 4:
				if (MISC::GET_GAME_TIMER() - Local_197.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500)
				{
					if (__LIB_0__.func_530(Local_200.f_0, Local_200.f_1, 2f, 1))
					{
						if (!func_226())
						{
							func_210(4);
						}
						else
						{
							func_210(15);
						}
					}
					else
					{
						func_210(15);
					}
				}
				break;
			case 7:
				if (__LIB_1__.func_183(Local_202.f_0) && !ENTITY::IS_ENTITY_UPSIDEDOWN(Local_202.f_0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_197.f_0, Local_202.f_0))
					{
						func_210(9);
					}
					if (MISC::GET_GAME_TIMER() - Local_197.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500)
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_197.f_0, Local_202.f_0))
						{
							func_210(7);
						}
					}
				}
				else
				{
					func_210(15);
				}
				break;
			case 6:
				if (__LIB_1__.func_183(Local_200.f_0) && !ENTITY::IS_ENTITY_UPSIDEDOWN(Local_200.f_0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_197.f_0, Local_200.f_0))
					{
						func_210(9);
					}
					if (MISC::GET_GAME_TIMER() - Local_197.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500)
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_197.f_0, Local_200.f_0))
						{
							func_210(6);
						}
					}
				}
				else
				{
					func_210(15);
				}
				break;
			case 8:
				if (__LIB_1__.func_183(Local_201.f_0) && !ENTITY::IS_ENTITY_UPSIDEDOWN(Local_201.f_0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_197.f_0, Local_201.f_0))
					{
						func_210(9);
					}
					if (MISC::GET_GAME_TIMER() - Local_197.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500)
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_197.f_0, Local_201.f_0))
						{
							func_210(8);
						}
					}
				}
				else
				{
					func_210(15);
				}
				break;
			case 9:
				if (__LIB_0__.func_508(Local_197.f_0, PLAYER::PLAYER_PED_ID(), 20f, 1) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					func_210(10);
					return;
				}
				if (func_208())
				{
					func_210(10);
				}
				else
				{
					func_210(9);
				}
				if (MISC::GET_GAME_TIMER() - Local_197.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500)
				{
					if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_COMBAT")))
					{
						if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_197.f_0))
						{
							if (__LIB_0__.func_508(Local_197.f_0, PLAYER::PLAYER_PED_ID(), 10f, 1))
							{
								func_210(10);
							}
							else if (__LIB_1__.func_183(Local_201.f_0))
							{
								func_210(8);
							}
							else if (bLocal_177)
							{
								func_210(7);
							}
							else if (iLocal_55 == 1)
							{
								func_210(6);
							}
						}
					}
				}
				break;
			case 10:
				if (MISC::GET_GAME_TIMER() - Local_197.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500)
				{
					if (!func_208())
					{
						func_210(10);
					}
					else if (__LIB_1__.func_183(Local_201.f_0))
					{
						if (!__LIB_0__.func_508(Local_197.f_0, Local_201.f_0, 15f, 1) && !PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
						{
							func_210(8);
						}
					}
					else if (bLocal_177)
					{
						if (__LIB_1__.func_183(Local_202.f_0))
						{
							if (!__LIB_0__.func_508(Local_197.f_0, Local_202.f_0, 10f, 1))
							{
								func_210(7);
							}
						}
					}
					else if (iLocal_55 == 1)
					{
						if (__LIB_1__.func_183(Local_200.f_0))
						{
							if (!__LIB_0__.func_508(Local_197.f_0, Local_200.f_0, 10f, 1))
							{
								func_210(6);
							}
						}
					}
				}
				break;
			case 11:
				if (MISC::GET_GAME_TIMER() - Local_197.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000)
				{
					if (!func_226())
					{
						func_210(11);
					}
					else
					{
						func_210(15);
					}
				}
				break;
			case 14:
				if (!__LIB_0__.func_508(Local_197.f_0, PLAYER::PLAYER_PED_ID(), 118f, 1))
				{
					__LIB_0__.func_124(&Local_197, 1, 1, 1);
					__LIB_0__.func_106(&Local_200);
				}
				if (MISC::GET_GAME_TIMER() - Local_197.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500)
				{
				}
				break;
			case 13:
				if (MISC::GET_GAME_TIMER() - Local_197.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000)
				{
					if (!__LIB_0__.func_508(Local_197.f_0, PLAYER::PLAYER_PED_ID(), 10f, 1))
					{
						func_210(14);
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_197.f_0, PLAYER::PLAYER_PED_ID(), true))
					{
						func_210(14);
					}
					else
					{
						func_210(13);
					}
				}
				else if (__LIB_32__.func_572(Local_197.f_0, 1, 0, 0, 0))
				{
					func_210(14);
				}
				break;
			case 15:
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					if (__LIB_37__.func_484(Local_197.f_0, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7))
					{
						func_194();
						return;
					}
				}
				if (MISC::GET_GAME_TIMER() - Local_197.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(7000, 10000)
				{
					func_210(15);
				}
				break;
			case 5:
				if (__LIB_1__.func_183(Local_200.f_0))
				{
					if (__LIB_0__.func_530(Local_197.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_200.f_0, Local_196), 2f, 1))
					{
						if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) && !__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_ACHIEVE_HEADING")))
						{
							func_210(1);
						}
					}
					PED::SET_PED_CAPSULE(Local_197.f_0, 0.1f);
					if (MISC::GET_GAME_TIMER() - Local_197.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500)
					{
						func_193();
					}
				}
				break;
			case 12:
				if (MISC::GET_GAME_TIMER() - Local_197.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500)
				{
					if (!__LIB_20__.func_625(PED::GET_VEHICLE_PED_IS_IN(Local_197.f_0, false)))
					{
						func_210(9);
					}
					else
					{
						func_210(12);
					}
				}
				break;
			case 16:
				if (__LIB_1__.func_183(Local_202.f_0))
				{
					if (PED::IS_PED_IN_VEHICLE(Local_197.f_0, Local_202.f_0, false))
					{
						if (__LIB_30__.func_194(Local_202.f_0, &uLocal_180, &uLocal_181, &uLocal_182, &uLocal_183, 3, 2f))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							if (PED::IS_PED_IN_VEHICLE(Local_197.f_0, Local_202.f_0, false))
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 1000, 4096);
							}
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 120f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(Local_197.f_0, iVar0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							__LIB_9__.func_981(&uLocal_20, 0, 0);
							iLocal_56 = 14;
						}
						else
						{
							__LIB_39__.func_907(&uLocal_20, Local_202.f_0, 0, 0, 1, 1, 1);
						}
					}
				}
				break;
			case 17:
				if (MISC::GET_GAME_TIMER() - Local_197.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(10000, 12000)
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -414.4899f, -2181.9673f, 11.93531f, -414.1714f, -2170.2517f, 5.64993f, 12.63f, false, true, 0))
					{
						func_210(5);
					}
					else
					{
						func_210(17);
					}
				}
				break;
			case 20:
				if (__LIB_10__.func_564())
				{
					func_210(19);
				}
				else if (__LIB_1__.func_412())
				{
					func_210(1);
				}
				break;
			case 19:
				if (MISC::GET_GAME_TIMER() - Local_197.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(7000, 10000)
				{
					func_210(15);
				}
				break;
		}
	}
	else
	{
		__LIB_0__.func_124(&Local_197, 1, 0, 1);
		if (__LIB_1__.func_183(Local_200.f_0))
		{
			if (!__LIB_0__.func_530(Local_200.f_0, Local_200.f_1, 50f, 1) || !__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), Local_200.f_0, 250f, 1))
			{
				__LIB_0__.func_106(&Local_200);
			}
		}
		__LIB_0__.func_523(&(Local_197.f_6));
		__LIB_0__.func_523(&(Local_197.f_6.f_1));
		if (bLocal_193)
		{
			bLocal_193 = false;
			__LIB_0__.func_210("PRB_TAKBACK", 7500, 0);
		}
	}
	if (iLocal_56 != 14 && iLocal_56 != 13)
	{
		__LIB_0__.func_499(Local_197.f_0, &(Local_197.f_6), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
	}
	else
	{
		__LIB_0__.func_489(&(Local_197.f_6));
	}
}

void func_193()//Position - 0x6CAF
{
	if (__LIB_1__.func_183(Local_200.f_0))
	{
		if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_PLAY_ANIM")))
		{
			if (!__LIB_0__.func_530(Local_197.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_200.f_0, Local_196), 0.5f, 1))
			{
				if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_197.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_200.f_0, Local_196), 1f, 60000, 0.3f, 512, -ENTITY::GET_ENTITY_HEADING(Local_200.f_0));
				}
			}
			else if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_ACHIEVE_HEADING")))
			{
				TASK::TASK_ACHIEVE_HEADING(Local_197.f_0, -ENTITY::GET_ENTITY_HEADING(Local_200.f_0), 0);
			}
		}
		PED::SET_PED_CAPSULE(Local_197.f_0, 0.1f);
	}
}

void func_194()//Position - 0x6D4C
{
	if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
	{
		if (!__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), Local_197.f_0, 10f, 1))
		{
			func_210(14);
		}
		else
		{
			func_210(13);
		}
	}
	else if (((((iLocal_56 != 15 && iLocal_56 != 9) && iLocal_56 != 10) && iLocal_56 != 6) && iLocal_56 != 8) && iLocal_56 != 7)
	{
		func_210(15);
	}
}

int func_208()//Position - 0x756D
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_0__.func_508(Local_197.f_0, PLAYER::PLAYER_PED_ID(), 20f, 1))
		{
			return 1;
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 10f)
		{
			if (iLocal_185 == -1)
			{
				iLocal_185 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_185) > 6000)
			{
				return 1;
			}
		}
	}
	else if (__LIB_0__.func_508(Local_197.f_0, PLAYER::PLAYER_PED_ID(), 10f, 1))
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 10f)
		{
			if (iLocal_185 == -1)
			{
				iLocal_185 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_185) > 5500)
			{
				return 1;
			}
		}
	}
	else
	{
		iLocal_185 = -1;
	}
	return 0;
}

void func_210(int iParam0)//Position - 0x763D
{
	func_214(iParam0);
	func_211(iParam0);
	Local_197.f_14 = MISC::GET_GAME_TIMER();
	iLocal_56 = iParam0;
}

void func_211(int iParam0)//Position - 0x765D
{
	int iVar0;
	int iVar1;
	switch (iParam0)
	{
		case 1:
			if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_PLAY_ANIM")))
			{
				if (__LIB_1__.func_183(Local_200.f_0))
				{
					TASK::TASK_PLAY_ANIM(Local_197.f_0, "mini@repair", "fixing_a_ped", 1.5f, -1.5f, -1, 1, 0f, false, false, false);
				}
			}
			break;
		case 3:
			if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
			{
				if (__LIB_1__.func_183(Local_202.f_0))
				{
					TASK::TASK_ENTER_VEHICLE(Local_197.f_0, Local_202.f_0, 60000, -1, 2f, 524296, 0);
				}
			}
			break;
		case 2:
			if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
			{
				if (__LIB_1__.func_183(Local_202.f_0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_197.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_200.f_0, -1f, 0.5f, 0f), 1f, 30000, 0.25f, 0, 141.2603f);
				}
			}
			break;
		case 5:
			func_193();
			break;
		case 6:
			if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
			{
				if (__LIB_1__.func_183(Local_200.f_0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_197.f_0, false))
					{
						TASK::TASK_ENTER_VEHICLE(Local_197.f_0, Local_200.f_0, 60000, -1, 2f, 1, 0);
					}
				}
			}
			break;
		case 7:
			if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
			{
				if (__LIB_1__.func_183(Local_202.f_0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_197.f_0, false))
					{
						TASK::TASK_ENTER_VEHICLE(Local_197.f_0, Local_202.f_0, 60000, -1, 2f, 1, 0);
					}
				}
			}
			break;
		case 8:
			if (__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) || TASK::GET_SCRIPT_TASK_STATUS(Local_197.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 2)
			{
				TASK::CLEAR_PED_TASKS(Local_197.f_0);
			}
			if (__LIB_1__.func_183(Local_201.f_0))
			{
				if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_197.f_0, false))
					{
						TASK::TASK_ENTER_VEHICLE(Local_197.f_0, Local_201.f_0, 60000, -1, 2f, 1, 0);
					}
				}
			}
			break;
		case 9:
			if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_VEHICLE_MISSION")))
			{
				if (__LIB_1__.func_183(Local_201.f_0))
				{
					if (__LIB_1__.func_183(Local_200.f_0) && __LIB_1__.func_183(Local_202.f_0))
					{
						if (bLocal_177)
						{
							if (!ENTITY::IS_ENTITY_UPSIDEDOWN(Local_201.f_0))
							{
								TASK::TASK_VEHICLE_MISSION(Local_197.f_0, Local_201.f_0, Local_200.f_0, 11, 30f, 34341156, 1f, -1f, true);
							}
							else
							{
								func_213();
								iParam0 = 10;
							}
						}
						else if (iLocal_55 == 1)
						{
							if (!ENTITY::IS_ENTITY_UPSIDEDOWN(Local_201.f_0))
							{
								TASK::TASK_VEHICLE_MISSION(Local_197.f_0, Local_201.f_0, Local_202.f_0, 11, 30f, 34341156, 1f, -1f, true);
							}
							else
							{
								func_213();
								iParam0 = 10;
							}
						}
					}
				}
				else if (__LIB_1__.func_183(Local_200.f_0) && __LIB_1__.func_183(Local_202.f_0))
				{
					if (bLocal_177)
					{
						if (!ENTITY::IS_ENTITY_UPSIDEDOWN(Local_202.f_0))
						{
							TASK::TASK_VEHICLE_MISSION(Local_197.f_0, Local_202.f_0, Local_200.f_0, 11, 30f, 34341156, 1f, -1f, true);
						}
						else
						{
							func_213();
							iParam0 = 10;
						}
					}
					else if (iLocal_55 == 1)
					{
						if (!ENTITY::IS_ENTITY_UPSIDEDOWN(Local_200.f_0))
						{
							TASK::TASK_VEHICLE_MISSION(Local_197.f_0, Local_200.f_0, Local_202.f_0, 11, 30f, 34341156, 1f, -1f, true);
						}
						else
						{
							func_213();
							iParam0 = 10;
						}
					}
				}
			}
			break;
		case 10:
			if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_197.f_0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 1000, 0);
				}
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_203, joaat("PLAYER"));
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_197.f_0, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			break;
		case 11:
			if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_197.f_0, PLAYER::PLAYER_PED_ID(), 0);
			}
			break;
		case 12:
			break;
		case 4:
			if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_197.f_0, PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_CAPSULE(Local_197.f_0, 0f);
			}
			break;
		case 13:
			if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_COWER")))
			{
				TASK::CLEAR_PED_TASKS(Local_197.f_0);
				TASK::TASK_COWER(Local_197.f_0, -1);
			}
			break;
		case 14:
			if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_SMART_FLEE_PED")))
			{
				if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_COWER")))
				{
					TASK::CLEAR_PED_TASKS(Local_197.f_0);
				}
				TASK::TASK_SMART_FLEE_PED(Local_197.f_0, PLAYER::PLAYER_PED_ID(), 120f, -1, false, false);
			}
			break;
		case 15:
			if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_COMBAT")))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_203, joaat("PLAYER"));
				TASK::TASK_COMBAT_PED(Local_197.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
			}
			break;
		case 16:
			if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
			{
				if (__LIB_1__.func_183(Local_202.f_0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					if (!PED::IS_PED_IN_VEHICLE(Local_197.f_0, Local_202.f_0, false))
					{
						TASK::TASK_ENTER_VEHICLE(0, Local_202.f_0, 60000, -1, 2f, 1, 0);
					}
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_202.f_0, 30f, 786469);
					TASK::CLOSE_SEQUENCE_TASK(iVar1);
					TASK::TASK_PERFORM_SEQUENCE(Local_197.f_0, iVar1);
					TASK::CLEAR_SEQUENCE_TASK(&iVar1);
					__LIB_30__.func_195(&uLocal_180, &uLocal_181, &uLocal_182, &uLocal_183);
				}
			}
			break;
		case 17:
			if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
			{
			}
			break;
		case 19:
			PED::SET_PED_CAPSULE(Local_197.f_0, 0f);
			if (!__LIB_4__.func_465(Local_197.f_0, joaat("SCRIPT_TASK_COMBAT")))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_203, joaat("PLAYER"));
				TASK::TASK_COMBAT_PED(Local_197.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
			}
			break;
	}
}

void func_213()//Position - 0x7B70
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_197.f_0, false))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 1000, 0);
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_203, joaat("PLAYER"));
	TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_197.f_0, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_214(int iParam0)//Position - 0x7BBE
{
	switch (iParam0)
	{
		case 1:
			if (__LIB_37__.func_595(Local_197.f_0, 20f))
			{
				func_222("FP2_RPAIR", 0, 5000);
			}
			break;
		case 3:
			func_219("FP2_REACTTOW", iParam0, 1);
			break;
		case 2:
			func_219("FP2_REACTCAR", iParam0, 0);
			break;
		case 4:
			if (iLocal_55 == 1)
			{
				func_222("FP2_ABUSETOW", 1, 5000);
			}
			else if (bLocal_177)
			{
				func_222("FP2_REACTCAR", 1, 5000);
			}
			break;
		case 5:
			if (__LIB_37__.func_595(Local_197.f_0, 20f))
			{
				func_219("FP2_RETRPAIR", iParam0, 0);
			}
			break;
		case 7:
			func_219("FP2_ENTTOW", iParam0, 0);
			break;
		case 6:
			func_219("FP2_ENTCAR", iParam0, 0);
			break;
		case 9:
			if (__LIB_37__.func_595(Local_197.f_0, 20f))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					func_222("FP2_VEHCHASE", 0, 5000);
				}
			}
			break;
		case 10:
			break;
		case 14:
			if (__LIB_37__.func_595(Local_197.f_0, 20f))
			{
				__LIB_6__.func_771();
				func_222("FP2_FLEE", 0, 5000);
			}
			break;
		case 13:
			if (__LIB_37__.func_595(Local_197.f_0, 20f))
			{
				if (__LIB_0__.func_502())
				{
					func_215("GENERIC_FRIGHTENED_MED");
				}
				else
				{
					func_215("GENERIC_FRIGHTENED_HIGH");
				}
			}
			break;
		case 15:
			if (__LIB_37__.func_595(Local_197.f_0, 20f))
			{
				func_222("FP2_ATTACK", 0, 5000);
			}
			break;
		case 11:
			if (__LIB_37__.func_595(Local_197.f_0, 20f))
			{
				if (__LIB_0__.func_502())
				{
					func_215("GENERIC_CURSE_MED");
				}
				else
				{
					func_215("GENERIC_CURSE_HIGH");
				}
			}
			break;
		case 12:
			if (__LIB_37__.func_595(Local_197.f_0, 20f))
			{
				func_222("FP2_TOW", 0, 5000);
			}
			break;
		case 17:
			if (__LIB_37__.func_595(Local_197.f_0, 20f))
			{
				if (__LIB_0__.func_502())
				{
					func_215("GENERIC_CURSE_MED");
				}
				else
				{
					func_215("GENERIC_CURSE_HIGH");
				}
			}
			break;
		case 19:
			if (__LIB_37__.func_595(Local_197.f_0, 20f))
			{
				func_219("FP2_ENTCAR", iParam0, 0);
			}
			break;
	}
}

void func_215(char* sParam0)//Position - 0x7DEB
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_197.f_0, sParam0, "S_M_M_TRUCKER_01_BLACK_FULL_02", "SPEECH_PARAMS_FORCE", false);
}

void func_219(char* sParam0, int iParam1, int iParam2)//Position - 0x7E53
{
	struct<6> Var0;
	if (iLocal_56 != iParam1 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		Var0 = { __LIB_0__.func_390() };
		if ((((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam0) && !TASK::IS_PED_IN_WRITHE(Local_197.f_0)) && !PED::IS_PED_RAGDOLL(Local_197.f_0)) && !PED::IS_PED_BEING_STUNNED(Local_197.f_0, 0)) && !PED::IS_PED_BEING_STEALTH_KILLED(Local_197.f_0))
		{
			__LIB_10__.func_617(&uLocal_208, cLocal_207, sParam0, 7, iParam2, 0);
		}
	}
}

void func_222(char* sParam0, bool bParam1, int iParam2)//Position - 0x7F21
{
	struct<6> Var0;
	if ((MISC::GET_GAME_TIMER() - iLocal_184) > iParam2 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		Var0 = { __LIB_0__.func_390() };
		if ((((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam0) && !TASK::IS_PED_IN_WRITHE(Local_197.f_0)) && !PED::IS_PED_RAGDOLL(Local_197.f_0)) && !PED::IS_PED_BEING_STUNNED(Local_197.f_0, 0)) && !PED::IS_PED_BEING_STEALTH_KILLED(Local_197.f_0))
		{
			__LIB_10__.func_617(&uLocal_208, cLocal_207, sParam0, 7, 0, 0);
			if (bParam1)
			{
				Local_197.f_15++;
			}
			iLocal_184 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_226()//Position - 0x8093
{
	if ((iLocal_56 != 15 && iLocal_56 != 20) && iLocal_56 != 14)
	{
		if (Local_197.f_15 >= 3)
		{
			func_210(15);
			return 1;
		}
	}
	return 0;
}

void func_227()//Position - 0x80CA
{
	func_246();
	func_245();
	func_244();
	func_242();
	func_238();
	func_237();
	func_228();
}

void func_228()//Position - 0x80EE
{
	if (iLocal_56 != 14 && iLocal_56 != 13)
	{
		if (__LIB_36__.func_80(Local_197.f_0, 1090519040, 1097859072))
		{
			func_210(14);
			return;
		}
		if (!func_235() || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_197.f_0, PLAYER::PLAYER_PED_ID(), true))
		{
			if (__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), Local_197.f_0, 30f, 1))
			{
				if (__LIB_42__.func_340(Local_197.f_0, 1, 50f, 150f, 0, 1, 0, 0))
				{
					func_229();
					return;
				}
			}
		}
	}
}

void func_229()//Position - 0x816F
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_197.f_0, true))
	{
		func_194();
	}
	else
	{
		if (__LIB_1__.func_183(Local_202.f_0))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_197.f_0, Local_202.f_0, false))
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_197.f_0, Local_202.f_0, PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 300f, 2f, true);
				iLocal_56 = 14;
				return;
			}
		}
		if (__LIB_1__.func_183(Local_200.f_0))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_197.f_0, Local_200.f_0, false))
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_197.f_0, Local_200.f_0, PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 300f, 2f, true);
				iLocal_56 = 14;
				return;
			}
		}
		if (__LIB_1__.func_183(Local_201.f_0))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_197.f_0, Local_201.f_0, false))
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_197.f_0, Local_201.f_0, PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 300f, 2f, true);
				iLocal_56 = 14;
			}
		}
	}
	ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_197.f_0);
}

int func_235()//Position - 0x83FB
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_197.f_0, 0f, -2f, 0f), 2f, 3f, 2f, false, true, 0) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
	{
		return 1;
	}
	return 0;
}

void func_237()//Position - 0x846D
{
	if ((((((iLocal_56 != 6 && iLocal_56 != 7) && iLocal_56 != 8) && iLocal_56 != 9) && iLocal_56 != 10) && iLocal_56 != 14) && iLocal_56 != 13)
	{
		if (bLocal_177 || iLocal_55 == 1)
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -419.0416f, -2179.0505f, 8.78829f, -389.54364f, -2179.148f, 20.31836f, 25f, false, true, 0))
			{
				if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_197.f_0))
				{
					if (__LIB_1__.func_183(Local_201.f_0))
					{
						func_210(8);
					}
					else if (bLocal_177)
					{
						func_210(7);
					}
					else if (iLocal_55 == 1)
					{
						func_210(6);
					}
				}
			}
		}
	}
}

void func_238()//Position - 0x852D
{
	if (__LIB_1__.func_183(Local_202.f_0))
	{
		if (((func_241() && iLocal_56 != 6) && iLocal_56 != 11) && iLocal_56 != 8)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_202.f_0, false))
			{
				func_210(3);
				return;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_0__.func_508(Local_202.f_0, PLAYER::PLAYER_PED_ID(), 6f, 1))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_202.f_0, PLAYER::PLAYER_PED_ID()))
					{
						func_210(15);
					}
				}
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_202.f_0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
				{
					func_210(15);
				}
			}
		}
	}
	if (__LIB_1__.func_183(Local_200.f_0))
	{
		if ((func_241() && iLocal_56 != 7) && iLocal_56 != 8)
		{
			if (iLocal_56 != 2)
			{
				if (iLocal_56 != 4)
				{
					if (bLocal_177)
					{
						func_210(2);
						return;
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (__LIB_0__.func_508(Local_200.f_0, PLAYER::PLAYER_PED_ID(), 6f, 1))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_200.f_0, PLAYER::PLAYER_PED_ID()))
							{
								func_210(15);
							}
						}
					}
					else if (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_200.f_0))
					{
						func_210(15);
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_200.f_0, PLAYER::PLAYER_PED_ID(), true))
					{
						if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
						{
							func_210(15);
						}
					}
				}
			}
		}
		if (func_239())
		{
			if (__LIB_0__.func_530(Local_200.f_0, Local_200.f_1, 2f, 1))
			{
				func_210(5);
			}
		}
	}
	else if ((((((func_241() && iLocal_56 != 7) && iLocal_56 != 6) && iLocal_56 != 8) && iLocal_56 != 11) && iLocal_56 != 16) && iLocal_56 != 7)
	{
		func_210(16);
	}
}

int func_239()//Position - 0x86E0
{
	if (func_240())
	{
		if (iLocal_55 == 0 && !bLocal_177)
		{
			if (iLocal_56 == 11 && __LIB_0__.func_508(Local_197.f_0, PLAYER::PLAYER_PED_ID(), 5f, 1))
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_240()//Position - 0x8720
{
	if ((((((iLocal_56 == 5 || iLocal_56 == 1) || iLocal_56 == 17) || !func_241()) || iLocal_52 == 2) || iLocal_56 == 20) || iLocal_56 == 19)
	{
		return 0;
	}
	return 1;
}

int func_241()//Position - 0x8774
{
	if ((((((iLocal_56 != 14 && iLocal_56 != 13) && iLocal_56 != 15) && iLocal_56 != 9) && iLocal_56 != 10) && iLocal_56 != 16) && iLocal_56 != 12)
	{
		return 1;
	}
	return 0;
}

void func_242()//Position - 0x87C5
{
	bool bVar0;
	if ((((func_241() && iLocal_55 == 0) && iLocal_56 != 6) && iLocal_56 != 7) && iLocal_56 != 8)
	{
		if (iLocal_56 != 11)
		{
			if (func_243(&bVar0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (bVar0)
					{
						func_210(15);
					}
					else
					{
						func_210(11);
					}
				}
				else
				{
					func_210(15);
				}
			}
		}
		else if (func_239())
		{
			func_210(5);
		}
	}
}

int func_243(var uParam0)//Position - 0x8842
{
	if (__LIB_0__.func_508(Local_197.f_0, PLAYER::PLAYER_PED_ID(), 2f, 1) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_197.f_0, PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_RAGDOLL(Local_197.f_0))
			{
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 0;
			}
			return 1;
		}
	}
	return 0;
}

void func_244()//Position - 0x888E
{
	if (iLocal_56 == 9 && iLocal_56 != 12)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_197.f_0, false))
		{
			if (__LIB_20__.func_625(PED::GET_VEHICLE_PED_IS_IN(Local_197.f_0, false)))
			{
				func_210(12);
			}
		}
	}
}

void func_245()//Position - 0x88C6
{
	if (((iLocal_56 != 17 && iLocal_56 != 14) && iLocal_56 != 13) && iLocal_56 != 15)
	{
		if (fLocal_189 < 20f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -414.4899f, -2181.9673f, 11.93531f, -414.1714f, -2170.2517f, 5.64993f, 12.63f, false, true, 0))
			{
				fLocal_189 = (fLocal_189 + MISC::GET_FRAME_TIME());
			}
		}
		else
		{
			func_210(17);
			fLocal_189 = 0f;
		}
	}
}

void func_246()//Position - 0x8945
{
	if (iLocal_56 != 20)
	{
		if (__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), Local_197.f_0, 15f, 1))
		{
			if ((__LIB_0__.func_77(0) && __LIB_0__.func_507()) && __LIB_0__.func_75())
			{
				if ((__LIB_12__.func_54(0) || __LIB_12__.func_54(1)) || __LIB_12__.func_54(2))
				{
					iLocal_56 = 20;
				}
			}
		}
	}
}

void func_249()//Position - 0x8A09
{
	if (__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_176, 220f, 1))
	{
		if (!iLocal_205 && !__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_176, 100f, 1))
		{
			iLocal_205 = __LIB_12__.func_167(&iLocal_204, joaat("sadler"), 1370.9122f, -2060.055f, 50.9983f, 312.8686f, 1);
		}
	}
	else if (__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_176, 240f, 1))
	{
		if (iLocal_205)
		{
			__LIB_0__.func_106(&iLocal_204);
			iLocal_205 = 0;
		}
	}
}

void func_250()//Position - 0x8A92
{
	if (__LIB_1__.func_197(Local_197.f_0) && iLocal_56 != 15)
	{
		if (__LIB_0__.func_530(Local_197.f_0, Local_176, 200f, 1))
		{
			bLocal_193 = true;
		}
		if (!__LIB_0__.func_508(Local_197.f_0, PLAYER::PLAYER_PED_ID(), 150f, 1) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_197.f_0))
		{
			fLocal_186 = (fLocal_186 + MISC::GET_FRAME_TIME());
			if (fLocal_186 > 10f)
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(Local_197.f_0))
				{
					__LIB_0__.func_124(&Local_197, 0, 1, 1);
					__LIB_0__.func_106(&Local_200);
				}
				else
				{
					__LIB_0__.func_0(&Local_197);
					__LIB_11__.func_32(&Local_200);
				}
				return;
			}
		}
		else if (!__LIB_0__.func_508(Local_197.f_0, PLAYER::PLAYER_PED_ID(), 200f, 1))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(Local_197.f_0))
			{
				__LIB_0__.func_124(&Local_197, 0, 1, 1);
				__LIB_0__.func_106(&Local_200);
			}
			else
			{
				__LIB_0__.func_0(&Local_197);
				__LIB_11__.func_32(&Local_200);
			}
		}
	}
}

void func_251()//Position - 0x8B63
{
	func_252();
	func_131(&iLocal_198, &iLocal_199, &iLocal_55, &iLocal_173, &iLocal_172, Local_176, Local_202.f_0, 0, 1090519040);
	func_156();
	func_145();
	switch (iLocal_53)
	{
		case 0:
			if (func_110(iLocal_52, bLocal_40))
			{
				__LIB_12__.func_50("PRB_GOVAN", &iLocal_167);
				iLocal_53 = 1;
			}
			break;
		case 1:
			if (__LIB_1__.func_183(iLocal_198))
			{
				if ((iLocal_55 == 1 || iLocal_55 == 2) || iLocal_55 == 3)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 8f, 4);
					iLocal_53 = 2;
				}
			}
			break;
		case 2:
			__LIB_0__.func_523(&iLocal_173);
			func_98(0);
			break;
		case 3:
			if (__LIB_1__.func_183(Local_202.f_0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_202.f_0, -1);
			}
			__LIB_41__.func_440(1, 1, 1);
			iLocal_53 = 1;
			break;
	}
}

void func_252()//Position - 0x8C39
{
	if (__LIB_1__.func_183(Local_200.f_0))
	{
		if (!bLocal_177)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_200.f_0, false))
			{
				bLocal_177 = true;
			}
		}
		else if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_200.f_0))
		{
			bLocal_177 = false;
		}
	}
}

void func_253()//Position - 0x8C78
{
	switch (iLocal_53)
	{
		case 0:
			if (func_110(iLocal_52, 0))
			{
				PLAYER::SET_MAX_WANTED_LEVEL(2);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
				__LIB_41__.func_662();
				__LIB_11__.func_731(34);
				if (__LIB_0__.func_294())
				{
					MISC::CLEAR_AREA_OF_VEHICLES(-399.8117f, -2172.942f, 9.3184f, 50f, false, false, true, true, false, false, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(-399.8117f, -2172.942f, 9.3184f, 50f, 0);
					func_261(1);
				}
				else
				{
					if (__LIB_0__.func_2(0))
					{
						__LIB_20__.func_741(PLAYER::PLAYER_PED_ID(), -404.3334f, -2147.648f, 9.314f, 182.5609f);
						CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						MISC::CLEAR_AREA_OF_VEHICLES(-399.8117f, -2172.942f, 9.3184f, 50f, false, false, true, true, false, false, 0);
						__LIB_20__.func_665(-404.3334f, -2147.648f, 9.314f, 1112014848, 12, 5000, 0, 0);
						__LIB_0__.func_84(500, 1);
					}
					if (iLocal_52 == 2)
					{
						iLocal_53 = 0;
					}
					else
					{
						iLocal_53 = 2;
					}
				}
			}
			break;
		case 2:
			func_98(0);
			break;
	}
}

void func_261(int iParam0)//Position - 0x8F5B
{
	func_269(1, 1);
	bLocal_40 = true;
	iLocal_52 = iParam0;
	if (iLocal_52 == 0)
	{
		iLocal_52 = 0;
	}
	iLocal_167 = 0;
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	iLocal_53 = 0;
	func_262(1);
}

void func_262(bool bParam0)//Position - 0x8F97
{
	struct<3> Var0;
	if (bParam0)
	{
	}
	__LIB_40__.func_689(1, 1, 1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	func_26();
	func_267();
	__LIB_0__.func_371();
	func_265();
	__LIB_0__.func_371();
	if (bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_198))
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_198, false))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
					}
				}
			}
		}
		__LIB_6__.func_771();
		HUD::CLEAR_PRINTS();
		func_2();
	}
	else
	{
		func_263();
	}
	HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
	if (CAM::DOES_CAM_EXIST(iLocal_174))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_174, false);
	}
}

void func_263()//Position - 0x904F
{
	__LIB_0__.func_106(&Local_202);
	__LIB_0__.func_106(&Local_200);
	__LIB_0__.func_106(&Local_201);
	__LIB_0__.func_106(&iLocal_198);
	__LIB_0__.func_124(&Local_197, 1, 0, 1);
}

void func_265()//Position - 0x9084
{
	STREAMING::REMOVE_ANIM_DICT("mini@repair");
	STREAMING::REMOVE_ANIM_DICT("amb@code_human_cower@male@react_cowering");
}

void func_267()//Position - 0x90A4
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_202.f_5);
}

void func_269(bool bParam0, bool bParam1)//Position - 0x9114
{
	if (bParam0)
	{
		__LIB_40__.func_689(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_270(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_270(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x9147
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
					if (func_387(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_272(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_387(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_272(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_387(PLAYER::PLAYER_PED_ID(), 8, 1) || func_387(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_272(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_387(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_272(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			iLocal_49 = 0;
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_49 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__.func_84(500, 0);
		}
	}
}

int func_272(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x9318
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
										func_272(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_272(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, func_281(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_280(iParam0, iVar10, &iVar4, 1))
							{
								func_272(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_272(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_272(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_272(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_272(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_272(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_272(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_272(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_272(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_272(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_280(iParam0, iVar10, &iVar4, 0))
		{
			func_272(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_273(iParam0, iVar10, &iVar4))
		{
			func_272(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_273(int iParam0, int iParam1, int iParam2)//Position - 0x9B28
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_387(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_280(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA41C
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_387(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_281(int iParam0, int iParam1, int iParam2)//Position - 0xA4B2
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
				if (func_387(iParam0, iParam1, iVar0))
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
				if (func_387(iParam0, iParam1, iVar1))
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

int func_387(int iParam0, int iParam1, int iParam2)//Position - 0x273E7
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
				if (!func_387(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_387(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_387(iParam0, 14, iVar4))
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
			if (!func_387(iParam0, 14, uVar8[iVar7]))
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

void func_442()//Position - 0x2DDFF
{
	__LIB_0__.func_371();
	func_443();
}

void func_443()//Position - 0x2DE0F
{
	if (!iLocal_178)
	{
		if (__LIB_1__.func_183(iLocal_198))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_198, false))
			{
				__LIB_0__.func_409(iLocal_198, 324);
				__LIB_0__.func_320(iLocal_198, 323);
				iLocal_178 = 1;
			}
		}
	}
}

void func_445()//Position - 0x2DE55
{
	if (!bLocal_40 && iLocal_52 != 5)
	{
		if (iLocal_52 > 0)
		{
			func_446();
		}
	}
}

void func_446()//Position - 0x2DE76
{
	int iVar0;
	iVar0 = 0;
	if (!__LIB_1__.func_183(iLocal_198))
	{
		if (!__LIB_1__.func_183(iLocal_199) && !__LIB_1__.func_183(Local_202.f_0))
		{
			func_448(1);
			return;
		}
		if (__LIB_1__.func_183(Local_202.f_0))
		{
			if (!__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), Local_202.f_0, 500f, 1))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (__LIB_1__.func_183(iLocal_199))
		{
			if (!__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), iLocal_199, 500f, 1))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (iVar0 >= 2)
		{
			if (iLocal_52 != 4)
			{
				func_448(2);
				return;
			}
		}
	}
	else
	{
		if (!__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), iLocal_198, 500f, 1))
		{
			iVar0++;
		}
		if (__LIB_1__.func_183(iLocal_199))
		{
			if (!__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), iLocal_199, 500f, 1))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (__LIB_1__.func_183(Local_202.f_0))
		{
			if (!__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), Local_202.f_0, 500f, 1))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (iVar0 >= 3)
		{
			if (iLocal_52 != 4)
			{
				func_448(2);
				return;
			}
		}
		iVar0 = 0;
		if (__LIB_12__.func_55(iLocal_198))
		{
			iVar0++;
		}
		if (__LIB_1__.func_183(iLocal_199))
		{
			if (__LIB_12__.func_55(iLocal_199))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (__LIB_1__.func_183(Local_202.f_0))
		{
			if (__LIB_12__.func_55(Local_202.f_0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (iVar0 >= 3)
		{
			func_448(3);
			return;
		}
	}
}

void func_448(int iParam0)//Position - 0x2E06C
{
	HUD::CLEAR_PRINTS();
	__LIB_0__.func_296();
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			sLocal_165 = "PRB_FWRECK";
			break;
		case 2:
			sLocal_165 = "PRB_FFAR";
			break;
		case 3:
			sLocal_165 = "PRB_FSTUCK";
			break;
	}
	iLocal_52 = 5;
	iLocal_53 = 0;
}

void func_463()//Position - 0x2EA9C
{
	int iVar0;
	func_474();
	func_472();
	func_465();
	func_464();
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_57[iVar0] = 0;
		iLocal_58[iVar0] = 0;
		iLocal_194[iVar0] = 0;
		iVar0++;
	}
}

void func_464()//Position - 0x2EADB
{
	PED::ADD_RELATIONSHIP_GROUP("ENEMY", &iLocal_203);
}

void func_465()//Position - 0x2EAEF
{
	struct<3> Var0[5];
	Var0[0 /*3*/] = { -1138.6897f, -1893.3854f, 2.453f };
	Var0[1 /*3*/] = { -1067.8933f, -1941.2078f, 12.1445f };
	Var0[2 /*3*/] = { -1062.3744f, -2034.396f, 12.1273f };
	Var0[3 /*3*/] = { -1178.8055f, -2101.6802f, 12.3805f };
	Var0[4 /*3*/] = { -1250.2238f, -2047.0428f, 8.9687f };
	func_466(&Var0, 5);
}

void func_466(var uParam0, int iParam1)//Position - 0x2EB71
{
	int iVar0;
	__LIB_11__.func_329(&uLocal_60);
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		__LIB_11__.func_328(&uLocal_60, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	__LIB_11__.func_327(&uLocal_60);
	__LIB_20__.func_743(&uLocal_112, &uLocal_60, 50f);
}

void func_472()//Position - 0x2EE76
{
	Local_197 = { func_473(-409.72052f, -2175.8582f, 9.31836f, 121.7754f, joaat("S_M_M_Trucker_01")) };
}

struct<16> func_473(struct<3> Param0, float fParam1, int iParam2)//Position - 0x2EEA0
{
	struct<16> Var0;
	Var0.f_14 = -1;
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam1;
	Var0.f_5 = iParam2;
	return Var0;
}

void func_474()//Position - 0x2EECC
{
	Local_202 = { __LIB_12__.func_56(-413.2349f, -2182.0857f, 9.3184f, 83.9445f, joaat("towtruck")) };
	Local_200 = { __LIB_12__.func_56(-412.3477f, -2176.2617f, 9.3184f, 281.0786f, joaat("peyote")) };
	Local_201 = { __LIB_12__.func_56(-386.5059f, -2168.7383f, 9.3184f, 87.2085f, joaat("ruiner")) };
}

void func_476()//Position - 0x2EF5C
{
	__LIB_12__.func_43(1);
	__LIB_0__.func_410(1);
	func_53();
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), false);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	__LIB_11__.func_729();
	__LIB_32__.func_813();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_206, false);
	func_262(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_480()//Position - 0x2EFD2
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
				if (!func_9(iVar0))
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

