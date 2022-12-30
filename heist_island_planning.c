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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	float fLocal_62 = 0f;
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
	var uLocal_93 = -1;
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
	struct<14> Local_109[6];
	struct<14> Local_110[8];
	struct<14> Local_111[4];
	struct<14> Local_112[5];
	struct<14> Local_113[6];
	struct<14> Local_114[6];
	struct<14> Local_115[4];
	struct<14> Local_116[10];
	struct<14> Local_117[4];
	struct<14> Local_118[6];
	struct<14> Local_119[3];
	struct<9> Local_120[8];
	struct<9> Local_121[6];
	struct<9> Local_122[8];
	struct<9> Local_123[2];
	struct<9> Local_124[4];
	struct<9> Local_125[2];
	struct<9> Local_126[6];
	struct<9> Local_127[6];
	struct<9> Local_128[4];
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	bool bLocal_137 = 0;
	int iLocal_138 = 0;
	bool bLocal_139 = 0;
	bool bLocal_140 = 0;
	bool bLocal_141 = 0;
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
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	struct<57> Local_159 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	struct<16> Local_169 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	struct<7> Local_174 = { 2, 0, 0, 2, 0, 0, -1 } ;
	var uLocal_175 = 16;
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
	int iLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 17;
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
	var uLocal_365 = 17;
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
	int iLocal_390 = 0;
	var uLocal_391 = 0;
	float fLocal_392 = 0f;
	float fLocal_393 = 0f;
	float fLocal_394 = 0f;
	float fLocal_395 = 0f;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	float fLocal_405 = 0f;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	bLocal_141 = true;
	iLocal_390 = -1;
	fLocal_392 = 3f;
	fLocal_393 = 0f;
	fLocal_394 = 2f;
	fLocal_395 = 100f;
	fLocal_405 = 0.5f;
	StringCopy(&Local_169, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	Local_169 = { Local_169 };
	if (!func_990(&Global_1973321))
	{
		func_978(&Global_1973321);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_977();
		func_972(&Global_1973321);
		switch (func_971())
		{
			case 0:
				if (func_461(&Global_1973321))
				{
					__LIB_40__::func_553();
					func_458(1);
				}
				break;
			case 1:
				func_279(&Global_1973321);
				func_125(&Global_1973321);
				func_1(&Global_1973321);
				break;
			case 2:
				func_978(&Global_1973321);
				break;
		}
	}
}

void func_1(var uParam0)//Position - 0x141
{
	func_79(uParam0);
	__LIB_40__::func_557(uParam0);
	func_2(uParam0);
}

void func_2(var uParam0)//Position - 0x15B
{
	func_24(uParam0);
	func_3(uParam0);
}

void func_3(var uParam0)//Position - 0x16F
{
	int iVar0;
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		if (((uParam0->f_726.f_5 && !iLocal_131) && uParam0->f_806 == 1) && !func_16(uParam0, 0))
		{
			if (__LIB_1__::func_802(PLAYER::PLAYER_ID()))
			{
				if (!__LIB_0__::func_1("HIP_TOOMANY2" /* GXT: This mission can only be started with a maximum of 5 Motorcycle Club members. */))
				{
					__LIB_0__::func_190("HIP_TOOMANY2" /* GXT: This mission can only be started with a maximum of 5 Motorcycle Club members. */);
				}
			}
			else if (!__LIB_0__::func_1("HIP_TOOMANY1" /* GXT: This mission can only be started with a maximum of 5 Organization members. */))
			{
				__LIB_0__::func_190("HIP_TOOMANY1" /* GXT: This mission can only be started with a maximum of 5 Organization members. */);
			}
		}
		else if (__LIB_0__::func_1("HIP_TOOMANY1" /* GXT: This mission can only be started with a maximum of 5 Organization members. */) || __LIB_0__::func_1("HIP_TOOMANY2" /* GXT: This mission can only be started with a maximum of 5 Motorcycle Club members. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if ((BitTest(Local_174.f_3[(0 / 32)], (0 % 32)) && !__LIB_0__::func_75()) && !iLocal_142)
		{
			__LIB_0__::func_151("HIP_TIPTEXT" /* GXT: Access additional information by pressing ~INPUT_FRONTEND_Y~. This includes mission details and the impact completion will have on The Cayo Perico Heist. */, -1);
			iLocal_142 = 1;
		}
		if ((func_8(uParam0->f_806, 2) && !BitTest(uParam0->f_1085, 11)) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			iVar0 = __LIB_0__::func_369(9511, -1, 0);
			if (!BitTest(iVar0, 15))
			{
				__LIB_0__::func_151("HIF_FINALEINT" /* GXT: Here you can preview the outcome of your scoping and Prep work. Press Start to begin The Cayo Perico Heist alone, or invite other players. */, -1);
				MISC::SET_BIT(&iVar0, 15);
				__LIB_0__::func_413(9511, iVar0, -1, 1, 0);
			}
			MISC::SET_BIT(&(uParam0->f_1085), 11);
		}
	}
}

int func_8(int iParam0, int iParam1)//Position - 0x33C
{
	switch (iParam1)
	{
		case 0:
			if (iParam0 > 0 && iParam0 <= 29)
			{
				return 1;
			}
			break;
		case 1:
			if (iParam0 >= 36 && iParam0 <= 62)
			{
				return 1;
			}
			break;
		case 2:
			if (iParam0 >= 63 && iParam0 < 109)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_16(var uParam0, int iParam1)//Position - 0x471
{
	if (iParam1 == 0)
	{
		if (__LIB_12__::func_999() + 1 > 5)
		{
			return 0;
		}
	}
	else if (__LIB_9__::func_233(uParam0->f_1084, iParam1))
	{
		return 0;
	}
	return 1;
}

void func_24(var uParam0)//Position - 0x620
{
	func_49();
	switch (iLocal_148)
	{
		case 0:
			break;
		case 1:
			STREAMING::REQUEST_ANIM_DICT(func_48());
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_48()))
			{
				return;
			}
			iLocal_149 = __LIB_0__::func_114();
			iLocal_148 = 2;
			break;
		case 2:
			TASK::OPEN_SEQUENCE_TASK(&iLocal_151);
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, func_46(iLocal_149), 0.5f, 20000, func_45(iLocal_149), 0.05f);
			TASK::TASK_ACHIEVE_HEADING(0, func_45(iLocal_149), 0);
			TASK::TASK_PLAY_ANIM(0, func_48(), func_44(), 1.5f, -8f, -1, 262152, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, func_48(), func_43(), 8f, -8f, -1, 262153, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_151);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_157, iLocal_151);
			iLocal_148 = 3;
			if (!__LIB_8__::func_407())
			{
				MISC::SET_BIT(&(uParam0->f_1085), 10);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_157, func_48(), func_43(), 3) && !__LIB_0__::func_937(&uLocal_153, 6000, 0))
			{
				return;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_157, func_48(), func_43(), 3))
			{
				PED::PLAY_FACIAL_ANIM(iLocal_157, func_39(), func_48());
			}
			__LIB_0__::clearF_1Prop(&uLocal_153);
			uParam0->f_726.f_5 = 1;
			func_34(uParam0, 14);
			iLocal_148 = 4;
			break;
		case 4:
			break;
		case 5:
			TASK::TASK_PLAY_ANIM(iLocal_157, func_48(), func_25(), 8f, 1.5f, -1, 262152, 0f, false, false, false);
			if (__LIB_8__::func_407())
			{
				MISC::CLEAR_BIT(&(uParam0->f_1085), 10);
			}
			uParam0->f_726.f_5 = 0;
			iLocal_148 = 6;
			break;
		case 6:
			if ((!iLocal_134 && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_157, func_48(), func_25(), 3)) && !__LIB_0__::func_937(&uLocal_153, 6000, 0))
			{
				return;
			}
			if (iLocal_134)
			{
				TASK::CLEAR_PED_TASKS(iLocal_157);
			}
			STREAMING::REMOVE_ANIM_DICT(func_48());
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_151);
			__LIB_0__::clearF_1Prop(&uLocal_153);
			iLocal_148 = 0;
			iLocal_134 = 0;
			break;
	}
}

char* func_25()//Position - 0x831
{
	if (__LIB_1__::func_365(iLocal_157))
	{
		return "exit_heeled";
	}
	return "exit_male";
}

void func_34(var uParam0, int iParam1)//Position - 0x1160
{
	char* sVar0;
	char* sVar1;
	sVar0 = func_37(iParam1);
	sVar1 = func_36(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (!__LIB_0__::func_86(uParam0->f_732.f_6))
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, sVar0, uParam0->f_732.f_6, sVar1, false, 0, false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar1, true);
		}
	}
}

char* func_36(int iParam0)//Position - 0x11EE
{
	return "DLC_HEI4_PLANNING_BOARD_PLANNING_BOARD_SOUNDSET";
}

char* func_37(int iParam0)//Position - 0x11F9
{
	switch (iParam0)
	{
		case 0:
			return "NAV_UP_DOWN";
		case 1:
			return "NAV_LEFT_RIGHT";
		case 2:
			return "NAV_UP_DOWN_PHOTO_CHANGE";
		case 3:
			return "NAV_LEFT_RIGHT_PHOTO_CHANGE";
		case 4:
			return "NAV_BLOCKED";
		case 5:
			return "SELECT" /* GXT: Filter List */;
		case 6:
			return "BACK";
		case 7:
			return "ERROR";
		case 8:
			return "DRAW_BOARD";
		case 9:
			return "DRAW_DESCRIPTION_TEXT";
		case 10:
			return "DRAW_TITLE_TEXT";
		case 11:
			return "PAY";
		case 12:
			return "INCREASE_LOOT_SHARE";
		case 13:
			return "DECREASE_LOOT_SHARE";
		case 14:
			return "USE";
		case 15:
			return "LAUNCH_MISSION";
		case 16:
			return "REMOTE_READY";
		case 17:
			return "REMOTE_UNREADY";
		case 18:
			return "BOOTUP";
		case 19:
			return "BACKGROUND";
		case 20:
			return "FINALE_AVAILABLE";
		case 21:
			return "CHANGE_DISPLAY_LARGE_BOX_DRAW";
		case 22:
			return "CHANGE_DISPLAY_SMALL_BOX_DRAW";
		default:
	}
	return "";
}

char* func_39()//Position - 0x133A
{
	if (__LIB_1__::func_365(iLocal_157))
	{
		return "idle_heeled_facial";
	}
	return "idle_male_facial";
}

char* func_43()//Position - 0x140C
{
	if (__LIB_1__::func_365(iLocal_157))
	{
		return "idle_heeled";
	}
	return "idle_male";
}

char* func_44()//Position - 0x1429
{
	if (__LIB_1__::func_365(iLocal_157))
	{
		return "enter_heeled";
	}
	return "enter_male";
}

float func_45(int iParam0)//Position - 0x1446
{
	switch (iParam0)
	{
		case 0:
			return 180f;
		case 1:
			return 0f;
		default:
	}
	return 0f;
}

Vector3 func_46(int iParam0)//Position - 0x146E
{
	switch (iParam0)
	{
		case 0:
			return 1561.0537f, 385.9017f, -50.6854f;
		case 1:
			return 1561.0962f, 383.769f, -50.6854f;
		default:
	}
	return 0f, 0f, 0f;
}

char* func_48()//Position - 0x14B9
{
	if (__LIB_1__::func_365(iLocal_157))
	{
		return "anim@scripted@submarine@ig18_sub_screen@heeled@";
	}
	return "anim@scripted@submarine@ig18_sub_screen@male@";
}

void func_49()//Position - 0x14D6
{
	if (iLocal_148 == 0)
	{
		return;
	}
	if (__LIB_0__::func_77(0))
	{
		__LIB_0__::func_366(0);
	}
	if (__LIB_0__::func_877())
	{
		__LIB_1__::func_79();
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
	}
	if (__LIB_1__::func_512())
	{
		__LIB_1__::func_713();
	}
}

void func_79(var uParam0)//Position - 0x1B35
{
	func_123(uParam0);
	if (!func_113(uParam0))
	{
		func_112();
		func_111();
		func_110();
		func_109();
		return;
	}
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		if (!__LIB_1__::func_501())
		{
			func_106(0);
			return;
		}
	}
	else if (!__LIB_40__::func_520(uParam0))
	{
		if (!__LIB_0__::func_796(uParam0->f_1084))
		{
			func_106(1);
			return;
		}
	}
	if (func_103(uParam0))
	{
		if (func_102())
		{
			func_101();
		}
		else if (!func_100(uParam0))
		{
			func_97();
		}
		else
		{
			func_83(uParam0);
		}
		return;
	}
	if (func_82())
	{
		__LIB_40__::func_519(uParam0, 1);
		func_112();
		if (Local_159.f_2 != 0)
		{
			Stack.Push(uParam0);
			Call_Loc(Local_159.f_2);
		}
		else
		{
			__LIB_40__::func_518(uParam0);
		}
	}
}

bool func_82()//Position - 0x1C24
{
	char* sVar0;
	sVar0 = "NHPG_PROMPT" /* GXT: Press ~INPUT_CONTEXT~ to use the Planning Board. */;
	if (Local_159.f_1 != 0)
	{
		Call_Loc(Local_159.f_1);
		sVar0 = StackVal;
	}
	if (!__LIB_0__::func_1(sVar0))
	{
		__LIB_0__::func_190(sVar0);
	}
	return PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/);
}

void func_83(var uParam0)//Position - 0x1C5A
{
	char* sVar0;
	Call_Loc(Local_159.f_33.f_5);
	sVar0 = StackVal;
	if (!__LIB_0__::func_1(sVar0))
	{
		__LIB_0__::func_190(sVar0);
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
	{
		func_110();
		__LIB_40__::func_556(uParam0, 0);
		uParam0->f_1090 = 1;
	}
}

void func_97()//Position - 0x23E9
{
	char* sVar0;
	int iVar1;
	if (Local_159.f_33.f_9 != 0 && Local_159.f_33.f_3 != 0)
	{
		Call_Loc(Local_159.f_33.f_9);
		sVar0 = StackVal;
		Call_Loc(Local_159.f_33.f_3);
		iVar1 = StackVal;
		if (!__LIB_5__::func_831(sVar0, iVar1))
		{
			__LIB_9__::func_821(sVar0, iVar1);
		}
	}
}

int func_100(var uParam0)//Position - 0x2468
{
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		Stack.Push(Local_159.f_33.f_3 != 0);
		Call_Loc(Local_159.f_33.f_3);
		if (StackVal && MONEY::NETWORK_CAN_SPEND_MONEY(StackVal, false, true, false, -1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_101()//Position - 0x24A3
{
	if (Local_159.f_33.f_7 != 0)
	{
		Call_Loc(Local_159.f_33.f_7);
		if (!__LIB_0__::func_1(StackVal))
		{
			Call_Loc(Local_159.f_33.f_7);
			__LIB_0__::func_190(StackVal);
		}
	}
}

int func_102()//Position - 0x24D2
{
	if (Local_159.f_33.f_6 != 0)
	{
		Call_Loc(Local_159.f_33.f_6);
		return StackVal;
	}
	return 0;
}

int func_103(var uParam0)//Position - 0x24F1
{
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		Call_Loc(Local_159.f_33.f_2);
		Call_Loc(Local_159.f_33);
		if (StackVal && !StackVal)
		{
			return 1;
		}
	}
	return 0;
}

void func_106(int iParam0)//Position - 0x2579
{
	char* sVar0;
	sVar0 = func_107(iParam0);
	__LIB_0__::func_151(sVar0, -1);
}

char* func_107(int iParam0)//Position - 0x2590
{
	char* sVar0;
	sVar0 = "";
	if (Local_159.f_30 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_159.f_30);
		sVar0 = StackVal;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return sVar0;
	}
	switch (iParam0)
	{
		case 0:
			return "NHPG_HELP_BBOSS" /* GXT: Register as a VIP, CEO or MC President to gain access to the Planning Board. */;
		case 1:
			return "NHPG_HELP_BGOON" /* GXT: Unable to use the Planning Board. The leader has not formed an Organization or Motorcycle Club. */;
		default:
	}
	return sVar0;
}

void func_109()//Position - 0x25F3
{
	if (Local_159.f_33.f_9 != 0 && Local_159.f_33.f_3 != 0)
	{
		Call_Loc(Local_159.f_33.f_9);
		Call_Loc(Local_159.f_33.f_3);
		if (__LIB_5__::func_831(StackVal, StackVal))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_110()//Position - 0x2631
{
	if (Local_159.f_33.f_5 != 0)
	{
		Call_Loc(Local_159.f_33.f_5);
		if (__LIB_0__::func_1(StackVal))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_111()//Position - 0x2658
{
	if (Local_159.f_33.f_7 != 0)
	{
		Call_Loc(Local_159.f_33.f_7);
		if (__LIB_0__::func_1(StackVal))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_112()//Position - 0x267F
{
	char* sVar0;
	sVar0 = "NHPG_PROMPT" /* GXT: Press ~INPUT_CONTEXT~ to use the Planning Board. */;
	if (Local_159.f_1 != 0)
	{
		Call_Loc(Local_159.f_1);
		sVar0 = StackVal;
	}
	if (__LIB_0__::func_1(sVar0))
	{
		HUD::CLEAR_HELP(true);
	}
}

int func_113(var uParam0)//Position - 0x26AC
{
	if (uParam0->f_1090 > 0)
	{
		return 0;
	}
	if (uParam0->f_1084 != -1 && Global_1974423[uParam0->f_1084 /*25*/].f_23)
	{
		return 0;
	}
	if (!__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (__LIB_40__::func_520(uParam0) && uParam0->f_1084 != PLAYER::PLAYER_ID())
	{
		return 0;
	}
	if (BitTest(uParam0->f_1085, 2))
	{
		return 0;
	}
	if (BitTest(uParam0->f_1085, 3) || BitTest(uParam0->f_1085, 4))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (!__LIB_0__::func_165(PLAYER::PLAYER_ID(), 2))
	{
		return 0;
	}
	if (func_121())
	{
		return 0;
	}
	if (__LIB_0__::func_877())
	{
		return 0;
	}
	if (__LIB_0__::func_321(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_428(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (uParam0->f_726 != 3)
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_1__::func_16())
	{
		return 0;
	}
	if (__LIB_5__::func_133())
	{
		return 0;
	}
	if (__LIB_1__::func_192() == 2 || __LIB_1__::func_192() == 16)
	{
		return 0;
	}
	if (__LIB_0__::func_77(0))
	{
		return 0;
	}
	if (Local_159.f_0 != 0)
	{
		Call_Loc(Local_159.f_0);
		if (!StackVal)
		{
			return 0;
		}
	}
	if (__LIB_40__::func_521())
	{
		return 0;
	}
	return 1;
}

int func_121()//Position - 0x28A9
{
	bool bVar0;
	bVar0 = ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/)) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/));
	if (bVar0)
	{
		iLocal_171 = 1;
		return 1;
	}
	else if (iLocal_171)
	{
		if (__LIB_0__::func_937(&uLocal_172, 1000, 0))
		{
			__LIB_0__::clearF_1Prop(&uLocal_172);
			iLocal_171 = 0;
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_123(var uParam0)//Position - 0x2927
{
	bool bVar0;
	switch (uParam0->f_1090)
	{
		case 0:
			break;
		case 1:
			if (func_124(uParam0, 0, &bVar0))
			{
				if (bVar0)
				{
					uParam0->f_1090 = 2;
				}
				else
				{
					uParam0->f_1090 = 0;
				}
				__LIB_40__::func_556(uParam0, 1);
			}
			break;
		case 2:
			Call_Loc(Local_159.f_33.f_8);
			if (StackVal)
			{
				uParam0->f_1090 = 3;
			}
			break;
		case 3:
			Call_Loc(Local_159.f_33);
			if (!StackVal)
			{
				Call_Loc(Local_159.f_33.f_1);
				uParam0->f_1090 = 4;
			}
			else
			{
				uParam0->f_1090 = 4;
			}
			break;
		case 4:
			if (Local_159.f_2 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_159.f_2);
			}
			else
			{
				__LIB_40__::func_518(uParam0);
			}
			uParam0->f_1090 = 0;
			break;
	}
}

int func_124(var uParam0, int iParam1, var uParam2)//Position - 0x29DF
{
	char cVar0[64];
	char cVar1[64];
	char cVar2[64];
	char cVar3[64];
	char cVar4[64];
	bool bVar5;
	int iVar6;
	int iVar7;
	bVar5 = false;
	iVar7 = 36;
	StringCopy(&cVar0, "HPWARN_CONF" /* GXT: Confirm */, 64);
	switch (iParam1)
	{
		case 0:
			Call_Loc(Local_159.f_33.f_4);
			cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
			StringCopy(&cVar4, "HEIST_WARN_2" /* GXT: Do you wish to proceed? */, 64);
			bVar5 = true;
			Call_Loc(Local_159.f_33.f_3);
			iVar6 = StackVal;
			break;
		case 1:
			StringCopy(&cVar0, "FM_CSC_QUIT" /* GXT: Confirm */, 64);
			StringCopy(&cVar1, "FM_CSC_QUIT1" /* GXT: Are you sure you want to quit this Job? */, 64);
			break;
		case 2:
			if (Local_159.f_56 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_159.f_56);
				StringCopy(&cVar0, StackVal, 64);
			}
			if (Local_159.f_56.f_1 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_159.f_56.f_1);
				StringCopy(&cVar1, StackVal, 64);
			}
			if (Local_159.f_56.f_2 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_159.f_56.f_2);
				iVar7 = StackVal;
			}
			if (Local_159.f_56.f_3 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_159.f_56.f_3);
				StringCopy(&cVar4, StackVal, 64);
			}
			if (Local_159.f_56.f_4 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_159.f_56.f_4);
				bVar5 = StackVal;
			}
			if (Local_159.f_56.f_5 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_159.f_56.f_5);
				iVar6 = StackVal;
			}
			if (Local_159.f_56.f_6 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_159.f_56.f_6);
				StringCopy(&cVar2, StackVal, 64);
			}
			if (Local_159.f_56.f_7 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_159.f_56.f_7);
				StringCopy(&cVar3, StackVal, 64);
			}
			break;
	}
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(&cVar0, &cVar1, iVar7, &cVar4, bVar5, iVar6, &cVar2, &cVar3, true, 0);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		HUD::SET_MOUSE_CURSOR_STYLE(1);
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
	{
		*uParam2 = 0;
		return 1;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
	{
		*uParam2 = 1;
		return 1;
	}
	return 0;
}

void func_125(var uParam0)//Position - 0x2B6A
{
	if (BitTest(uParam0->f_1085, 3) && !BitTest(uParam0->f_1085, 4))
	{
		if (uParam0->f_1084 == PLAYER::PLAYER_ID())
		{
			if (__LIB_0__::func_626() || __LIB_1__::func_585())
			{
				__LIB_1__::func_25();
			}
			else if (!BitTest(uParam0->f_1085, 4))
			{
				if (func_126(uParam0))
				{
					MISC::SET_BIT(&(uParam0->f_1085), 4);
					MISC::SET_BIT(&(uParam0->f_1085), 5);
				}
			}
		}
	}
	else if (BitTest(uParam0->f_1085, 5))
	{
		if (!BitTest(uParam0->f_1085, 6))
		{
			MISC::SET_BIT(&(uParam0->f_1085), 6);
			__LIB_2__::func_592(0, 0);
			__LIB_2__::func_592(0, 0);
		}
		MISC::CLEAR_BIT(&(uParam0->f_1085), 5);
	}
}

int func_126(var uParam0)//Position - 0x2C0D
{
	int iVar0;
	struct<6> Var1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	struct<3> Var6;
	if (Local_159.f_32 == 0)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Call_Loc(Local_159.f_32);
	iVar0 = StackVal;
	if (iVar0 == -1)
	{
		return 0;
	}
	Var1 = { Global_794709.f_4[iVar0 /*88*/] };
	iVar2 = Global_794709.f_4[iVar0 /*88*/].f_65;
	uVar3 = Global_794709.f_4[iVar0 /*88*/].f_71;
	__LIB_8__::func_349(func_218(PLAYER::PLAYER_ID()));
	__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 376832, 0);
	Global_2715699.f_3830 = 1;
	__LIB_7__::func_701(PLAYER::PLAYER_ID(), 0);
	__LIB_8__::func_329();
	__LIB_6__::func_57();
	switch (uParam0->f_1082)
	{
		case 0:
			iVar2 = 260;
			__LIB_1__::func_315(67);
			__LIB_40__::func_525();
			__LIB_40__::func_524();
			break;
		case 1:
			iVar2 = 274;
			__LIB_1__::func_315(69);
			__LIB_40__::func_523();
			__LIB_40__::func_522();
			break;
	}
	if (__LIB_0__::func_626() || __LIB_6__::func_55())
	{
		__LIB_1__::func_25();
	}
	else
	{
		Global_1946250.f_498 = 1;
		__LIB_8__::func_322(iVar2);
		if (__LIB_12__::func_999() <= 3)
		{
			__LIB_13__::func_114();
		}
		__LIB_13__::func_130(__LIB_0__::func_819(PLAYER::PLAYER_ID()));
		__LIB_8__::func_876(&Var1);
		__LIB_13__::func_115(uVar3);
		__LIB_7__::func_172();
		__LIB_13__::func_117();
		__LIB_6__::func_52();
		__LIB_7__::func_153();
		__LIB_13__::func_124();
		Var6 = { 0f, 0f, 0f };
		__LIB_31__::func_676(&(Global_2714762.f_781), 0, 0, Var6, &uVar4, Var6, 1, 0, &uVar4, &iVar5, iVar5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0);
		__LIB_2__::func_592(0, 0);
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 = 8;
		return 1;
	}
	return 0;
}

Vector3 func_218(int iParam0)//Position - 0x7140
{
	struct<3> Var0;
	if (HUD::DOES_BLIP_EXIST(Global_2678393[iParam0]))
	{
		Var0 = { __LIB_1__::func_722(Global_2678393[iParam0]) };
	}
	else if (HUD::DOES_BLIP_EXIST(Global_2678393.f_33[iParam0]) && !iParam0 == Global_2703735)
	{
		Var0 = { __LIB_1__::func_722(Global_2678393.f_33[iParam0]) };
	}
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		return Var0;
	}
	return func_219(iParam0);
}

Vector3 func_219(int iParam0)//Position - 0x71B4
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	if (Global_2676198)
	{
		if (__LIB_2__::func_889(iParam0))
		{
			Var1 = { __LIB_2__::func_888(iParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689235[iParam0 /*453*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689235[iParam0 /*453*/].f_71.f_12) > 0f)
			{
				return Global_2689235[iParam0 /*453*/].f_71.f_12;
			}
		}
	}
	if (Global_1853348[iParam0 /*834*/].f_267.f_32 > 0)
	{
		Var1 = { __LIB_2__::func_683(__LIB_2__::func_684(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32)) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	else
	{
		func_268(__LIB_0__::func_85(iParam0), &iVar0);
		if (iVar0 > 0)
		{
			Var1 = { __LIB_2__::func_683(__LIB_2__::func_684(iVar0)) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (__LIB_0__::func_334(iParam0))
	{
		Var1 = { __LIB_3__::func_497(iParam0) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	if (__LIB_2__::func_883(iParam0))
	{
		iVar2 = __LIB_1__::func_668(iParam0);
		if (iVar2 > -1)
		{
			Var1 = { Global_1946250.f_533[iVar2 /*3*/] };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (!Global_2676198)
	{
		if (__LIB_2__::func_889(iParam0))
		{
			Var1 = { __LIB_2__::func_888(iParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689235[iParam0 /*453*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689235[iParam0 /*453*/].f_71.f_12) > 0f)
			{
				return Global_2689235[iParam0 /*453*/].f_71.f_12;
			}
		}
	}
	return __LIB_0__::func_85(iParam0);
}

void func_268(struct<3> Param0, var uParam1)//Position - 0x8648
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_269(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 34;
	iVar1 = 43;
	while (iVar0 <= iVar1)
	{
		if (func_269(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 61;
	iVar1 = 65;
	while (iVar0 <= iVar1)
	{
		if (func_269(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_269(Param0, iVar0, 0))
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
		{
			*uParam1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
		}
		else if (Global_2666811.f_1 > 0)
		{
			*uParam1 = Global_2666811.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
	iVar0 = 17;
	if (func_269(Param0, iVar0, 0))
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
		{
			*uParam1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
		}
		else if (Global_2666811.f_1 > 0)
		{
			*uParam1 = Global_2666811.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
}

int func_269(struct<3> Param0, int iParam1, float fParam2)//Position - 0x878C
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var2[3];
	int iVar3;
	if (iParam1 != 999)
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_2 > Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3.f_2)
			{
				Var1[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
				Var2[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
			}
			else
			{
				Var1[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
				Var2[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
			}
			Var1[iVar3 /*3*/].f_2 = (Var1[iVar3 /*3*/].f_2 + fParam2);
			Var2[iVar3 /*3*/].f_2 = (Var2[iVar3 /*3*/].f_2 - fParam2);
			iVar3++;
		}
		if (((Global_1312193[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[0 /*3*/], Var1[0 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6, false, true)) || (Global_1312193[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[1 /*3*/], Var1[1 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6, false, true))) || (Global_1312193[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[2 /*3*/], Var1[2 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6, false, true)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_269(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_269(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_269(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_269(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_269(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_269(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_269(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_269(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_269(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_269(Param0, 8, fParam2))
		{
			return 1;
		}
		if (func_269(Param0, 17, fParam2))
		{
			return 1;
		}
	}
	return 0;
}

void func_279(var uParam0)//Position - 0x9A0F
{
	if (!__LIB_40__::func_545(uParam0))
	{
		func_450(uParam0);
		__LIB_40__::func_543(uParam0);
	}
	func_289(uParam0);
	if (!__LIB_40__::func_529(uParam0))
	{
		func_281(uParam0);
		__LIB_40__::func_526(uParam0);
	}
}

void func_281(var uParam0)//Position - 0x9A63
{
	if (Local_159.f_4.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_159.f_4.f_1);
	}
	switch (uParam0->f_726.f_1)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				__LIB_40__::func_555(uParam0, 1, 0);
			}
			__LIB_40__::func_528(uParam0, 0);
			__LIB_40__::func_527(uParam0);
			__LIB_40__::func_552(uParam0);
			break;
		case 5:
			break;
	}
}

void func_289(var uParam0)//Position - 0x9C7B
{
	if (Local_159.f_4.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_159.f_4.f_2);
	}
	switch (uParam0->f_726)
	{
		case 0:
			if (!uParam0->f_1091)
			{
				__LIB_40__::func_542(uParam0);
			}
			break;
		case 1:
			__LIB_40__::func_542(uParam0);
			break;
		case 2:
			if (__LIB_40__::func_541(uParam0) && __LIB_18__::func_101())
			{
				__LIB_40__::func_542(uParam0);
			}
			break;
		case 3:
			func_354(uParam0);
			if (__LIB_40__::func_537(uParam0))
			{
				__LIB_40__::func_542(uParam0);
			}
			break;
		case 4:
			func_352(uParam0);
			func_349(uParam0);
			func_354(uParam0);
			func_332(uParam0);
			func_331(uParam0);
			func_326(uParam0);
			func_295(uParam0);
			__LIB_43__::func_604();
			__LIB_40__::func_519(uParam0, 0);
			if (!__LIB_40__::func_537(uParam0))
			{
				__LIB_40__::func_530(uParam0);
			}
			break;
		case 5:
			break;
	}
}

void func_295(var uParam0)//Position - 0x9E87
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	char cVar3[24];
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 53)
	{
		if (func_325(uParam0, iVar0) && !func_324(uParam0, iVar0))
		{
			if (func_298(uParam0, iVar0))
			{
				iVar1 = iVar0;
			}
			else
			{
				Jump @123; //curOff = 61
				if (func_324(uParam0, iVar0))
				{
					Var2 = { __LIB_0__::func_486() };
					StringCopy(&cVar3, func_296(iVar0), 24);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2) && MISC::ARE_STRINGS_EQUAL(&Var2, &cVar3))
					{
						iVar1 = iVar0;
					}
					else
					{
						iVar0++;
					}
					if (Local_174.f_6 != iVar1)
					{
						Local_174.f_6 = iVar1;
					}
				}
char* func_296(int iParam0)//Position - 0x9F1F
{
	if (Local_159.f_43.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_159.f_43.f_1);
		return StackVal;
	}
	return "";
}

int func_298(var uParam0, int iParam1)//Position - 0x9F67
{
	struct<2> Var0;
	if (!__LIB_0__::func_75())
	{
		StringCopy(&Var0, func_296(iParam1), 16);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
		{
			__LIB_0__::func_222(&(Local_174.f_7), func_323(iParam1), func_322(iParam1), func_321(iParam1), 0, 1);
			if (__LIB_0__::func_787(&(Local_174.f_7), func_319(iParam1), &Var0, 9, 0, 0, 0))
			{
				func_299(uParam0, iParam1);
				return 1;
			}
		}
	}
	return 0;
}

void func_299(var uParam0, int iParam1)//Position - 0x9FCE
{
	MISC::SET_BIT(&(Local_174.f_3[(iParam1 / 32)]), (iParam1 % 32));
	if (Local_159.f_43.f_7 != 0)
	{
		Stack.Push(iParam1);
		Call_Loc(Local_159.f_43.f_7);
	}
}

char* func_319(var uParam0)//Position - 0xA896
{
	if (Local_159.f_43.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_159.f_43.f_2);
		return StackVal;
	}
	return "";
}

char* func_321(var uParam0)//Position - 0xA955
{
	if (Local_159.f_43.f_5 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_159.f_43.f_5);
		return StackVal;
	}
	return "";
}

int func_322(var uParam0)//Position - 0xA979
{
	if (Local_159.f_43.f_4 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_159.f_43.f_4);
		return StackVal;
	}
	return 0;
}

int func_323(var uParam0)//Position - 0xA99A
{
	if (Local_159.f_43.f_3 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_159.f_43.f_3);
		return StackVal;
	}
	return -1;
}

bool func_324(var uParam0, int iParam1)//Position - 0xA9BB
{
	return BitTest(Local_174.f_3[(iParam1 / 32)], (iParam1 % 32));
}

var func_325(var uParam0, int iParam1)//Position - 0xA9D5
{
	return BitTest(Local_174[(iParam1 / 32)], (iParam1 % 32));
}

void func_326(var uParam0)//Position - 0xA9ED
{
	var uVar0;
	var uVar1;
	uVar0 = __LIB_42__::func_792(uParam0);
	if (((uParam0->f_741.f_62 || __LIB_40__::func_533(uParam0)) || uParam0->f_1086 != -1) || uParam0->f_1093)
	{
		return;
	}
	if (Local_159.f_28 != 0)
	{
		Stack.Push(uParam0);
		Stack.Push(uVar0);
		Stack.Push(&uVar1);
		Call_Loc(Local_159.f_28);
	}
	if (BitTest(uVar1, 0))
	{
		if (Local_159.f_3 != 0)
		{
			Stack.Push(uParam0);
			Call_Loc(Local_159.f_3);
		}
		else
		{
			__LIB_40__::func_532(uParam0);
		}
	}
}

void func_331(var uParam0)//Position - 0xAE61
{
	bool bVar0;
	if (uParam0->f_1086 == -1)
	{
		return;
	}
	if (func_124(uParam0, uParam0->f_1086, &bVar0))
	{
		if (bVar0)
		{
			switch (uParam0->f_1086)
			{
				case 1:
					Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_21 = 1;
					break;
				case 2:
					if (Local_159.f_56.f_8 != 0)
					{
						Stack.Push(uParam0);
						Call_Loc(Local_159.f_56.f_8);
					}
					break;
			}
		}
		else
		{
			switch (uParam0->f_1086)
			{
				case 2:
					if (Local_159.f_56.f_9 != 0)
					{
						Stack.Push(uParam0);
						Call_Loc(Local_159.f_56.f_9);
					}
					break;
				default:
					break;
				}
		}
		uParam0->f_1086 = -1;
		uParam0->f_1087 = -1;
		__LIB_40__::func_519(uParam0, 1);
	}
}

void func_332(var uParam0)//Position - 0xAF09
{
	struct<3> Var0;
	struct<3> Var1;
	if (uParam0->f_741.f_32 != uParam0->f_741.f_33)
	{
		__LIB_40__::func_536(uParam0, uParam0->f_741.f_33);
		uParam0->f_741.f_62 = 1;
		Var0 = { 0f, 0f, 0f };
		Var1 = { 0f, 0f, 0f };
		uParam0->f_741.f_44 = { func_347(uParam0) };
		uParam0->f_741.f_47 = { func_346(uParam0) };
		uParam0->f_741.f_1.f_17 = func_345(uParam0);
		uParam0->f_741.f_38 = { CAM::GET_CAM_COORD(uParam0->f_741.f_1) };
		uParam0->f_741.f_41 = { CAM::GET_CAM_ROT(uParam0->f_741.f_1, 2) };
		uParam0->f_741.f_1.f_18 = CAM::GET_CAM_FOV(uParam0->f_741.f_1);
		uParam0->f_741.f_1.f_14 = { 0f, 0f, 0f };
		uParam0->f_741.f_63 = 750;
		if (func_344())
		{
			CAM::SHAKE_CAM(uParam0->f_741.f_1, func_343(), func_342());
		}
		CAM::SET_CAM_PARAMS(uParam0->f_741.f_1, uParam0->f_741.f_38, uParam0->f_741.f_41, uParam0->f_741.f_1.f_18, 0, 1, 1, 2);
		CAM::SET_CAM_PARAMS(uParam0->f_741.f_1, uParam0->f_741.f_44, uParam0->f_741.f_47, uParam0->f_741.f_1.f_17, uParam0->f_741.f_63, 1, 1, 2);
	}
	if (uParam0->f_741.f_62)
	{
		uParam0->f_741.f_1.f_18 = func_345(uParam0);
		if (!CAM::IS_CAM_INTERPOLATING(uParam0->f_741.f_1))
		{
			uParam0->f_741.f_38 = { uParam0->f_741.f_44 };
			uParam0->f_741.f_41 = { uParam0->f_741.f_47 };
			uParam0->f_741.f_1.f_1 = { uParam0->f_741.f_44 };
			uParam0->f_741.f_1.f_4 = { uParam0->f_741.f_47 };
			if (func_344())
			{
				CAM::SHAKE_CAM(uParam0->f_741.f_1, func_343(), func_342());
			}
			uParam0->f_741.f_62 = 0;
			__LIB_40__::func_535(uParam0, uParam0->f_741.f_1.f_18);
			__LIB_11__::func_763(&(uParam0->f_741.f_1), 0, 0, 1, 0, 1045220557, 0, 1065353216, 0);
		}
	}
	else
	{
		__LIB_11__::func_763(&(uParam0->f_741.f_1), func_336(), func_335(), func_334(), 0, 1045220557, 0, 1065353216, func_333());
	}
}

int func_333()//Position - 0xB125
{
	if (Local_159.f_18.f_4.f_2 != 0)
	{
		Call_Loc(Local_159.f_18.f_4.f_2);
		return StackVal;
	}
	return 1;
}

int func_334()//Position - 0xB148
{
	if (Local_159.f_18.f_4.f_1 != 0)
	{
		Call_Loc(Local_159.f_18.f_4.f_1);
		return StackVal;
	}
	return 0;
}

int func_335()//Position - 0xB16B
{
	if (Local_159.f_18.f_3 != 0)
	{
		Call_Loc(Local_159.f_18.f_3);
		return StackVal;
	}
	return 1;
}

int func_336()//Position - 0xB18A
{
	if (Local_159.f_18.f_4 != 0)
	{
		Call_Loc(Local_159.f_18.f_4);
		return StackVal;
	}
	return 1;
}

float func_342()//Position - 0xB88E
{
	if (Local_159.f_18.f_7.f_2 != 0)
	{
		Call_Loc(Local_159.f_18.f_7.f_2);
		return StackVal;
	}
	return 1f;
}

char* func_343()//Position - 0xB8B1
{
	if (Local_159.f_18.f_7.f_1 != 0)
	{
		Call_Loc(Local_159.f_18.f_7.f_1);
		return StackVal;
	}
	return "HAND_SHAKE";
}

int func_344()//Position - 0xB8D7
{
	if (Local_159.f_18.f_7 != 0)
	{
		Call_Loc(Local_159.f_18.f_7);
		return StackVal;
	}
	return 1;
}

var func_345(var uParam0)//Position - 0xB8F6
{
	Stack.Push(uParam0->f_741.f_33);
	Call_Loc(Local_159.f_18.f_2);
	return StackVal;
}

Vector3 func_346(var uParam0)//Position - 0xB90D
{
	Stack.Push(uParam0->f_741.f_33);
	Call_Loc(Local_159.f_18.f_1);
	return StackVal, StackVal, StackVal;
}

Vector3 func_347(var uParam0)//Position - 0xB924
{
	Stack.Push(uParam0->f_741.f_33);
	Call_Loc(Local_159.f_18);
	return StackVal, StackVal, StackVal;
}

void func_349(var uParam0)//Position - 0xB94A
{
	int iVar0;
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	iVar0 = uParam0->f_1084;
	if (iVar0 == -1)
	{
		return;
	}
	Stack.Push(Local_159.f_51 == 0);
	Stack.Push(uParam0);
	Call_Loc(Local_159.f_51);
	if (StackVal || !StackVal)
	{
		return;
	}
	if (!__LIB_0__::func_864(&(Global_1974423[iVar0 /*25*/].f_18)))
	{
		if (uParam0->f_1084 == PLAYER::PLAYER_ID())
		{
			Stack.Push(uParam0);
			Call_Loc(Local_159.f_51.f_1);
			if (StackVal)
			{
				__LIB_0__::func_795(&(Global_1974423[iVar0 /*25*/].f_18), 0, 0);
			}
		}
	}
	else
	{
		Call_Loc(Local_159.f_51.f_2);
		uParam0->f_823.f_245 = (StackVal - __LIB_1__::func_724(&(Global_1974423[iVar0 /*25*/].f_18), 0, 0));
		if (uParam0->f_823.f_245 > 0)
		{
			if (uParam0->f_823.f_245 < (uParam0->f_823.f_246 - 1000))
			{
				Stack.Push(uParam0);
				Call_Loc(Local_159.f_51.f_3);
				uParam0->f_823.f_246 = uParam0->f_823.f_245;
			}
		}
		else
		{
			uParam0->f_823.f_245 = 0;
			Stack.Push(uParam0);
			Call_Loc(Local_159.f_51.f_4);
		}
	}
}

void func_352(var uParam0)//Position - 0xBA87
{
	if (Local_159.f_28.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_159.f_28.f_1);
	}
	else if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
	}
}

void func_354(var uParam0)//Position - 0xBAC5
{
	if (__LIB_40__::func_540(uParam0))
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_711))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
			HUD::SET_TEXT_RENDER_ID(uParam0->f_700);
			switch (func_444())
			{
				case 1:
					GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SUPER_LARGE_RT(uParam0->f_711, true);
					break;
				case 0:
					GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_LARGE_RT(uParam0->f_711, true);
					break;
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam0->f_711, func_443(), func_442(), func_441(), func_440(), 255, 255, 255, 255, 0);
			HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
			if (uParam0->f_706)
			{
			}
		}
	}
	else if (func_439(uParam0))
	{
		if (Local_159.f_7.f_2.f_7 != 0)
		{
			Stack.Push(uParam0);
			Call_Loc(Local_159.f_7.f_2.f_7);
		}
	}
	if (__LIB_40__::func_539(uParam0))
	{
		func_355(uParam0);
	}
}

void func_355(var uParam0)//Position - 0xBB88
{
	struct<9> Var0;
	Var0 = { __LIB_1__::func_404() };
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (Local_174.f_6 != -1)
	{
		func_435(uParam0);
		return;
	}
	else if (iLocal_342)
	{
		__LIB_40__::func_538(uParam0, 1);
		iLocal_342 = 0;
	}
	if (!__LIB_37__::func_31(uParam0))
	{
		__LIB_5__::func_693(&(uParam0->f_712), &Var0, uParam0, 0);
		return;
	}
	if (!GRAPHICS::GET_IS_WIDESCREEN() || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10)
	{
		__LIB_6__::func_206(uParam0, 0.5f);
	}
	else
	{
		__LIB_6__::func_206(uParam0, 0.7f);
	}
	__LIB_1__::func_539(uParam0);
	func_356(uParam0);
	__LIB_5__::func_693(&(uParam0->f_712), &Var0, uParam0, uParam0->f_707);
	__LIB_40__::func_538(uParam0, 0);
}

void func_356(var uParam0)//Position - 0xBC37
{
	bool bVar0;
	int iVar1;
	bVar0 = uParam0->f_1084 == PLAYER::PLAYER_ID();
	if (__LIB_0__::func_864(&(Global_1974423[uParam0->f_1084 /*25*/].f_18)))
	{
		__LIB_35__::func_802("", "HEIST_IB_CONT" /* GXT: Continue (~a~) */, uParam0->f_823.f_245, uParam0, 0);
	}
	iVar1 = uParam0->f_806;
	bLocal_141 = true;
	if (iLocal_152 != 0)
	{
		if (((func_421(iLocal_152) || iLocal_152 == -2) || iLocal_152 == -3) || iLocal_152 == -4)
		{
			__LIB_1__::func_513(2, 201, "CH_INSTR_SEL" /* GXT: Select */, uParam0, 1, 363);
		}
		else if (iVar1 == 1002)
		{
			__LIB_1__::func_513(2, 201, "CH_INSTR_LM" /* GXT: Launch Mission */, uParam0, 1, 363);
		}
		else
		{
			__LIB_1__::func_513(2, 201, "CH_INSTR_SEL" /* GXT: Select */, uParam0, 1, 363);
		}
		__LIB_1__::func_513(2, 202, "CH_INSTR_BACK" /* GXT: Back */, uParam0, 1, 363);
		if ((iLocal_152 != -2 && iLocal_152 != -3) && iLocal_152 != -4)
		{
			__LIB_16__::func_173(2, 0, "HEIST_IB_NAV" /* GXT: Navigate */, uParam0);
		}
		return;
	}
	if (func_418(uParam0, iVar1))
	{
		__LIB_1__::func_513(2, 201, "H4P_INSTR_EQU" /* GXT: Equip */, uParam0, 1, 363);
	}
	else if (func_417(uParam0, iVar1))
	{
		__LIB_1__::func_513(2, 201, "H4P_INSTR_REM" /* GXT: Remove */, uParam0, 1, 363);
	}
	else if (func_416(uParam0, iVar1))
	{
		__LIB_1__::func_513(2, 201, "CH_INSTR_PREV" /* GXT: Preview */, uParam0, 1, 363);
	}
	else if (func_415(uParam0, iVar1))
	{
		__LIB_1__::func_513(2, 201, "CH_INSTR_SEL" /* GXT: Select */, uParam0, 1, 363);
	}
	else if (bVar0 && func_414(uParam0, iVar1))
	{
		__LIB_1__::func_513(2, 201, "CH_INSTR_LM" /* GXT: Launch Mission */, uParam0, 1, 363);
	}
	else if (bVar0 && func_411(uParam0, iVar1))
	{
		__LIB_1__::func_513(2, 201, "H4P_INSTR_PUR" /* GXT: Purchase */, uParam0, 1, 363);
	}
	else if (!bVar0 && func_410(uParam0, iVar1))
	{
		__LIB_1__::func_513(2, 201, "HEIST_IB_RDY" /* GXT: Ready */, uParam0, 1, 363);
	}
	else if (!bVar0 && func_408(uParam0, iVar1))
	{
		__LIB_1__::func_513(2, 201, "HEIST_IB_UNRDY" /* GXT: Unready */, uParam0, 1, 363);
	}
	else
	{
		bLocal_141 = false;
	}
	if (func_407(iVar1))
	{
		__LIB_1__::func_513(2, 202, "CH_INSTR_QUIT" /* GXT: Quit */, uParam0, 1, 363);
	}
	else
	{
		__LIB_1__::func_513(2, 202, "CH_INSTR_BACK" /* GXT: Back */, uParam0, 1, 363);
	}
	if (func_406(uParam0))
	{
		__LIB_1__::func_513(2, 203, "HP_MAP" /* GXT: Map */, uParam0, 1, 363);
	}
	if (func_360(uParam0, iVar1))
	{
		__LIB_1__::func_513(2, 204, "CH_INSTR_INFO" /* GXT: Info */, uParam0, 1, 363);
	}
	if (__LIB_9__::func_233(uParam0->f_1084, 0))
	{
		__LIB_16__::func_173(2, 14, "H4P_INSTR_SCR" /* GXT: Screens */, uParam0);
	}
	if (__LIB_9__::func_233(uParam0->f_1084, 0) || __LIB_1__::func_167(uParam0->f_1084))
	{
		__LIB_16__::func_173(2, 0, "HEIST_IB_NAV" /* GXT: Navigate */, uParam0);
	}
	if (func_358(iVar1))
	{
		if ((MISC::IS_PS3_VERSION() || __LIB_0__::func_52()) || MISC::IS_PC_VERSION())
		{
			__LIB_1__::func_513(2, 217, "HEIST_IB_PSN" /* GXT: View Profile */, uParam0, 1, 363);
		}
		else if (MISC::IS_XBOX360_VERSION() || __LIB_0__::func_53())
		{
			__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 217 /*INPUT_FRONTEND_SELECT*/, true), "HEIST_IB_XBL" /* GXT: View gamer card */, uParam0, 0);
		}
		else
		{
			__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 217 /*INPUT_FRONTEND_SELECT*/, true), "HEIST_IB_PSNXBL", uParam0, 0);
		}
	}
}

int func_358(int iParam0)//Position - 0xBFBD
{
	switch (iParam0)
	{
		case 105:
		case 106:
		case 107:
		case 108:
			return 1;
		default:
	}
	return 0;
}

int func_360(var uParam0, int iParam1)//Position - 0xC008
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_361(uParam0, iParam1)))
	{
		return 0;
	}
	return 1;
}

char* func_361(var uParam0, int iParam1)//Position - 0xC024
{
	switch (iParam1)
	{
		case 1:
			return "H4P_INT0_GATH_I" /* GXT: Mission Details:~n~Under a disguise, scope the island for the primary target, secondary targets and other areas that may be useful during the heist.~n~~n~Heist Impact:~n~Identifies the locations of the primary target, different routes on and off the island, secondary targets to steal, and other points of interest that can open up extra opportunities during the heist. */;
		case 2:
			return "H4P_INT0_LOOT_I" /* GXT: Heist Impact:~n~Secondary targets can be stolen and sold alongside the primary target. Each player will only be able to carry a certain amount in their bag. */;
		case 3:
			return "H4P_INT0_ENTR_I" /* GXT: Heist Impact:~n~Opens up additional infiltration points for getting on the island during the Heist. */;
		case 4:
			return "H4P_INT0_EXIT_I" /* GXT: Heist Impact:~n~Opens up additional escape points for getting off the island during the Heist. */;
		case 5:
			return "H4P_INT0_COMP_I" /* GXT: Heist Impact:~n~Entry points into El Rubio's compound.  Additional equipment may need to be acquired during the heist to access some of these entry points. */;
		case 6:
			return "H4P_INT0_ITEM_I" /* GXT: Heist Impact:~n~Areas, equipment and vehicles that can be used during the heist to open up additional opportunities. */;
		case 7:
			return "H4P_INT2_CASH_I" /* GXT: Heist Impact:~n~Steal cash from locked storage spaces to increase your overall take.~n~~n~Please note:~n~Each player will only be able to carry a certain amount of this in their bag. */;
		case 8:
			return "H4P_INT2_WEED_I" /* GXT: Heist Impact:~n~Steal weed from locked storage spaces to increase your overall take.~n~~n~Please note:~n~Each player will only be able to carry a certain amount of this in their bag. */;
		case 9:
			return "H4P_INT2_COKE_I" /* GXT: Heist Impact:~n~Steal cocaine from locked storage spaces to increase your overall take.~n~~n~Please note:~n~Each player will only be able to carry a certain amount of this in their bag. */;
		case 10:
			return "H4P_INT2_GOLD_I" /* GXT: Heist Impact:~n~Steal gold from locked storage spaces to increase your overall take.~n~~n~Please note:~n~Each player will only be able to carry a certain amount of this in their bag. */;
		case 11:
			return "H4P_INT2_PAIN_I" /* GXT: Heist Impact:~n~Steal paintings from inside El Rubio's compound to increase your overall take.~n~~n~Please note:~n~Each player will only be able to carry a certain amount of this in their bag. */;
		case 12:
			return "H4P_INT3_AIRS_I" /* GXT: Heist Impact:~n~Infiltrate the airstrip using one of the following approach vehicles if acquired: ~n~ - Velum */;
		case 13:
			return "H4P_INT3_PARA_I" /* GXT: Heist Impact:~n~Infiltrate at high altitude above the island using one of the following approach vehicles if acquired: ~n~ - RO-86 Alkonost */;
		case 14:
			return "H4P_INT3_BEAC_I" /* GXT: Heist Impact:~n~Infiltrate the west beach using one of the following approach vehicles if acquired: ~n~ - Kosatka ~n~ - Patrol Boat */;
		case 15:
			return "H4P_INT3_MDCK_I" /* GXT: Heist Impact:~n~Infiltrate the main dock using one of the following approach vehicles if acquired: ~n~ - Kosatka ~n~ - Patrol Boat ~n~ - Longfin */;
		case 16:
			return "H4P_INT3_NDCK_I" /* GXT: Heist Impact:~n~Infiltrate the north dock using one of the following approach vehicles if acquired: ~n~ - Kosatka ~n~ - Patrol Boat ~n~ - Longfin */;
		case 17:
			return "H4P_INT3_NDRP_I" /* GXT: Heist Impact:~n~Infiltrate the north drop zone using one of the following approach vehicles if acquired: ~n~ - Stealth Annihilator */;
		case 18:
			return "H4P_INT3_SDRP_I" /* GXT: Heist Impact:~n~Infiltrate the south drop zone using one of the following approach vehicles if acquired: ~n~ - Stealth Annihilator */;
		case 19:
			return "H4P_INT3_DTUN_I" /* GXT: Heist Impact:~n~Infiltrate the drainage tunnel using one of the following approach vehicles if acquired: ~n~ - Kosatka */;
		case 20:
			return "H4P_INT4_AIRS_I" /* GXT: Heist Impact:~n~After acquiring the primary target, find an aircraft at the airstrip to escape from the island. ~n~~n~You can escape by any other means if plans change during the heist. */;
		case 21:
			return "H4P_INT4_MDCK_I" /* GXT: Heist Impact:~n~After acquiring the primary target, find a boat at the main dock to escape from the island. ~n~~n~You can escape by any other means if plans change during the heist. */;
		case 22:
			return "H4P_INT4_NDCK_I" /* GXT: Heist Impact:~n~After acquiring the primary target, find a boat at the north dock to escape from the island. ~n~~n~You can escape by any other means if plans change during the heist. */;
		case 23:
			return "H4P_INT4_SUBM_I" /* GXT: Heist Impact:~n~After acquiring the primary target, get back to your Kosatka to escape from the island. ~n~~n~ You can escape by any other means if plans change during the heist.~n~~n~Please note:~n~To escape with your Kosatka, it must also be used as your approach vehicle. */;
		case 30:
			return __LIB_1__::func_295(__LIB_37__::func_30(uParam0->f_1084), "H4P_INT6_PWRS_I" /* GXT: Heist Impact:~n~Disables security cameras and all lights on the island to reduce the guards' range of sight at night. */, "");
		case 31:
			return __LIB_1__::func_295(__LIB_37__::func_29(uParam0->f_1084), "H4P_INT6_CTOW_I" /* GXT: Heist Impact:~n~Disables air defenses around the island and allows hired support crew to be called in via the Interaction Menu. */, "");
		case 32:
			return __LIB_1__::func_295(func_397(uParam0->f_1084), "H4P_INT6_BCUT_I" /* GXT: Heist Impact:~n~If stolen during the heist, these can help you break into padlocked storage lockups containing secondary targets without alerting nearby guards. */, "");
		case 33:
			return __LIB_1__::func_295(func_391(uParam0->f_1084), "H4P_INT6_GRAP_I" /* GXT: Heist Impact:~n~If stolen during the heist, this can be used to climb broken parts of the wall into El Rubio's compound. */, "");
		case 34:
			return __LIB_1__::func_295(func_385(uParam0->f_1084), "H4P_INT6_UNIF_I" /* GXT: Heist Impact:~n~If stolen during the heist, the guard clothing can be worn as a disguise and the guards will take longer to spot you. It also allows entry into El Rubio's compound through the main gate without alerting the guards, if used alongside a supply truck. */, "");
		case 35:
			return __LIB_1__::func_295(__LIB_37__::func_16(uParam0->f_1084), "H4P_INT6_TROJ_I" /* GXT: Heist Impact:~n~If stolen during the heist, this will allow you to enter El Rubio's compound through the main gate without alerting the guards. You must also acquire the guard clothing to avoid detection. */, "");
		case 24:
			return "H4P_INT5_MGAT_I" /* GXT: Heist Impact:~n~Enter the courtyard of El Rubio's compound by destroying the main gate or stay undetected under the cover of a disguise. */;
		case 25:
			return "H4P_INT5_NWAL_I" /* GXT: Heist Impact:~n~Enter El Rubio's compound undetected by climbing the broken wall.~n~~n~Please note:~n~This entry point cannot be selected at the start of the heist. It only be used if grappling equipment is acquired during the job. */;
		case 26:
			return "H4P_INT5_NSGT_I" /* GXT: Heist Impact:~n~Enter El Rubio's compound undetected by unlocking the side gate.~n~~n~Please note:~n~This entry point cannot be selected at the start of the heist. It only be used if the code to the gate is acquired from a guard during the job. */;
		case 27:
			return "H4P_INT5_SWAL_I" /* GXT: Heist Impact:~n~Enter El Rubio's compound undetected by climbing the broken wall.~n~~n~Please note:~n~This entry point cannot be selected at the start of the heist. It only be used if grappling equipment is acquired during the job. */;
		case 28:
			return "H4P_INT5_SSGT_I" /* GXT: Heist Impact:~n~Enter El Rubio's compound undetected by unlocking the side gate.~n~~n~Please note:~n~This entry point cannot be selected at the start of the heist. It only be used if the code to the gate is acquired from a guard during the job. */;
		case 29:
			return "H4P_INT5_DTUN_I" /* GXT: Heist Impact:~n~Enter El Rubio's compound undetected through the underwater drainage tunnel. */;
		case 36:
			return "";
		case 37:
			return "";
		case 38:
			return "";
		case 39:
			return "";
		case 40:
			return "H4P_PRP1_SUBM_I" /* GXT: Mission Details:~n~Steal sonar jamming equipment. This will allow your Kosatka to remain undetected off the coast of Cayo Perico.~n~~n~Heist Impact:~n~With your Kosatka submerged off the coast, approach the island undetected in scuba gear. */;
		case 41:
			return "";
		case 42:
			return "H4P_PRP1_SPLA_I" /* GXT: Mission Details:~n~Steal one of El Rubio's smuggler planes to use as an approach vehicle when infiltrating the island.~n~~n~Heist Impact:~n~Land on the island's airstrip in the Velum while disguised as one of El Rubio's smugglers. While unarmed, guards will let you travel around the airstrip but will attack if they spot you elsewhere. */;
		case 43:
			return "";
		case 44:
			return "H4P_PRP1_PBOA_I" /* GXT: Mission Details:~n~Steal a weaponized patrol boat to use as an approach vehicle when infiltrating the island.~n~~n~Heist Impact:~n~Approach your chosen dock in a heavily armed Patrol Boat equipped with heavy machine guns. */;
		case 45:
			return "H4P_PRP1_SBOA_I" /* GXT: Mission Details:~n~Steal one of El Rubio's smuggler boats to use as an approach vehicle when infiltrating the island.~n~~n~Heist Impact:~n~Approach your chosen dock in the Longfin while disguised as one of El Rubio's smugglers. While unarmed, some guards will let you travel around select areas of the docks but will attack if they spot you elsewhere. */;
		case 46:
			return "H4P_PRP1_BOM1_I" /* GXT: Mission Details:~n~Steal an RO-86 Alkonost to use as an approach vehicle when infiltrating the island.~n~~n~Heist Impact:~n~Parachute from the RO-86 Alkonost's cargo hold as your pilot flies you at high altitude over the island while staying undetected. */;
		case 47:
			return "H4P_PRP1_BOM2_I" /* GXT: Mission Details:~n~Help a pilot who can fly you to the island.~n~~n~Heist Impact:~n~The pilot will fly you in undetected to get on to the island. */;
		case 48:
			return "H4P_PRP1_HEL1_I" /* GXT: Mission Details:~n~Steal a Stealth Annihilator to use as an approach vehicle when infiltrating the island.~n~~n~Heist Impact:~n~Rappel out of the Stealth Annihilator undetected as your pilot hovers over your chosen drop zone. */;
		case 49:
			return "H4P_PRP1_HEL2_I" /* GXT: Mission Details:~n~Help a pilot who can fly you to the island.~n~~n~Heist Impact:~n~The pilot will fly you in undetected to get on to the island. */;
		case 50:
			return "H4P_PRP2_DEMC_I" /* GXT: Mission Details:~n~Steal demolition charges that can destroy the reinforced main gate to El Rubio's compound.~n~~n~Heist Impact:~n~Gain access to El Rubio's compound through the main gate and destroy padlocks to access secondary targets. */;
		case 53:
			return "H4P_PRP2_ATOR_I" /* GXT: Mission Details:~n~Steal a cutting torch that can burn through metal on land and underwater.~n~~n~Heist Impact:~n~Gain access to the underwater drainage tunnel beneath El Rubio's compound and burn through padlocks to access secondary targets. */;
		case 51:
			return __LIB_1__::func_295(__LIB_27__::func_387(uParam0->f_1084) == 11, "H4P_PRP2_TAR1_I" /* GXT: Mission Details:~n~Steal the code to the safe in El Rubio's secure vault.~n~~n~Heist Impact:~n~Unlocks the safe in El Rubio's secure vault, allowing you to access the primary target inside. */, "H4P_PRP2_TAR2_I" /* GXT: Mission Details:~n~Steal a plasma cutter that can cut through the reinforced display case in El Rubio's secure vault.~n~~n~Heist Impact:~n~Cuts through the reinforced glass display case in El Rubio's secure vault, allowing you to access the primary target inside. */);
		case 52:
			return "H4P_PRP2_FING_I" /* GXT: Mission Details:~n~Steal a fingerprint cloning device that can give you access to El Rubio's secure vault.~n~~n~Heist Impact:~n~Access El Rubio's secure basement via the elevator in his office. */;
		case 54:
			return "H4P_PRP3_SHOT_I" /* GXT: Mission Details:~n~Steal unmarked weapons that can be used during The Cayo Perico Heist~n~~n~Heist Impact:~n~Access to the following weapons:~n~- Assault Shotgun~n~- Machine Pistol~n~- Grenades~n~- Machete */;
		case 55:
			return "H4P_PRP3_RIFL_I" /* GXT: Mission Details:~n~Steal unmarked weapons that can be used during The Cayo Perico Heist~n~~n~Heist Impact:~n~Access to the following weapons:~n~- Military Rifle~n~- Pistol .50~n~- Sticky Bombs~n~- Knuckle Duster */;
		case 56:
			return "H4P_PRP3_SNIP_I" /* GXT: Mission Details:~n~Steal unmarked weapons that can be used during The Cayo Perico Heist~n~~n~Heist Impact:~n~Access to the following weapons:~n~- Sniper Rifle~n~- AP Pistol~n~- Molotov Cocktails~n~- Knife */;
		case 57:
			return __LIB_1__::func_295(func_367(uParam0, iParam1), "H4P_PRP3_M2SM_2" /* GXT: Locked:~n~Meet Chester McCoy as the owner of a Bunker or Arena Workshop. */, "H4P_PRP3_M2SM_I" /* GXT: Mission Details:~n~Steal unmarked weapons that can be used during The Cayo Perico Heist~n~~n~Heist Impact:~n~Access to the following weapons:~n~- SMG Mk II~n~- SNS Pistol Mk II~n~- Pipe Bombs~n~- Knife */);
		case 58:
			return __LIB_1__::func_295(func_367(uParam0, iParam1), "H4P_PRP3_M2RI_2" /* GXT: Locked:~n~Meet Chester McCoy as the owner of a Bunker or Arena Workshop. */, "H4P_PRP3_M2RI_I" /* GXT: Mission Details:~n~Steal unmarked weapons that can be used during The Cayo Perico Heist~n~~n~Heist Impact:~n~Access to the following weapons:~n~- Assault Rifle Mk II~n~- Pistol MKII~n~- Pipe Bombs~n~- Machete */);
		case 59:
			return "H4P_PRP3_SUPP_I" /* GXT: Mission Details:~n~Purchase suppressors that can be attached to your weapons for The Cayo Perico Heist. ~n~~n~ Cost: $5000~n~~n~Heist Impact:~n~Reduces the range that enemies can hear you shooting. */;
		case 60:
			return "H4P_PRP4_WEAP_I" /* GXT: Mission Details:~n~Take out the arms dealers supplying El Rubio with weapons. This prep can only be attempted once.~n~~n~Heist Impact:~n~The weapons used by El Rubio's security will be weakened during the heist. */;
		case 61:
			return "H4P_PRP4_ARMR_I" /* GXT: Mission Details:~n~Destroy all the armor shipments that are intended for El Rubio's security on the island. This prep can only be attempted once.~n~~n~Heist Impact:~n~El Rubio's security will not be equipped with body armor during the heist. */;
		case 62:
			return "H4P_PRP4_BRES_I" /* GXT: Mission Details:~n~Destroy all the Buzzards that are intended for El Rubio's security on the island. This prep can only be attempted once.~n~~n~Heist Impact:~n~If alerted, El Rubio's security will not have access to Buzzards during the heist. */;
		case 63:
			return "";
		case 64:
			return "";
		case 65:
			return "";
		case 66:
			return "";
		case 67:
			return "";
		case 68:
			return "";
		case 69:
			return "";
		case 70:
			return "";
		case 71:
			return "H4P_FIN1_SUBM_I" /* GXT: Heist Impact:~n~With your Kosatka submerged off the coast, approach the island undetected in scuba gear. */;
		case 72:
			return "H4P_FIN1_BOMB_I" /* GXT: Heist Impact:~n~Parachute from the RO-86 Alkonost's cargo hold as your pilot flies you at high altitude over the island while staying undetected. */;
		case 73:
			return "H4P_FIN1_SMPL_I" /* GXT: Heist Impact:~n~Land on the island's airstrip in the Velum while disguised as one of El Rubio's smugglers. While unarmed, guards will let you travel around the airstrip but will attack if they spot you elsewhere.~n~~n~Please note:~n~You must hire the Weapon Stash support crew member to avoid the guard's catching you with weapons when you land. */;
		case 74:
			return "H4P_FIN1_SHEL_I" /* GXT: Heist Impact:~n~Rappel out of the Stealth Annihilator undetected as your pilot hovers over your chosen drop zone. */;
		case 75:
			return "H4P_FIN1_PBOA_I" /* GXT: Heist Impact:~n~Approach your chosen dock in a heavily armed Patrol Boat equipped with heavy machine guns. */;
		case 76:
			return "H4P_FIN1_SBOA_I" /* GXT: Heist Impact:~n~Approach your chosen dock in the Longfin while disguised as one of El Rubio's smugglers. While unarmed, some guards will let you travel around select areas of the docks but will attack if they spot you elsewhere. */;
		case 77:
			return "H4P_FIN2_AIRS_I" /* GXT: Heist Impact:~n~Infiltrate the airstrip using one of the following approach vehicles if acquired: ~n~ - Velum */;
		case 78:
			return "H4P_FIN2_PARA_I" /* GXT: Heist Impact:~n~Infiltrate from high altitude above the island using one of the following approach vehicles if acquired: ~n~ - RO-86 Alkonost */;
		case 79:
			return "H4P_FIN2_WBEA_I" /* GXT: Heist Impact:~n~Infiltrate the west beach using one of the following approach vehicles if acquired: ~n~ - Kosatka ~n~ - Patrol Boat */;
		case 80:
			return "H4P_FIN2_MDOC_I" /* GXT: Heist Impact:~n~Infiltrate the main dock using one of the following approach vehicles if acquired: ~n~ - Kosatka ~n~ - Patrol Boat ~n~ - Longfin */;
		case 81:
			return "H4P_FIN2_NDOC_I" /* GXT: Heist Impact:~n~Infiltrate the north dock using one of the following approach vehicles if acquired: ~n~ - Kosatka ~n~ - Patrol Boat ~n~ - Longfin */;
		case 82:
			return "H4P_FIN2_NDRP_I" /* GXT: Heist Impact:~n~Infiltrate the north drop zone using one of the following approach vehicles if acquired: ~n~ - Stealth Annihilator */;
		case 83:
			return "H4P_FIN2_SDRP_I" /* GXT: Heist Impact:~n~Infiltrate the south drop zone using one of the following approach vehicles if acquired: ~n~ - Stealth Annihilator */;
		case 84:
			return "H4P_FIN2_DTUN_I" /* GXT: Heist Impact:~n~Infiltrate the drainage tunnel using one of the following approach vehicles if acquired: ~n~ - Kosatka */;
		case 85:
			return "H4P_FIN3_MGAT_I" /* GXT: Heist Impact:~n~Enter the courtyard of El Rubio's compound by destroying the main gate or stay undetected under the cover of a disguise.~n~~n~Please note:~n~You must be driving a supply truck and wearing guard clothing to enter undetected. */;
		case 86:
			return "H4P_FIN3_DTUN_I" /* GXT: Heist Impact:~n~Enter El Rubio's compound undetected through the underwater drainage tunnel. */;
		case 87:
			return "H4P_FIN4_AIRS_I" /* GXT: Heist Impact:~n~After acquiring the primary target, find an aircraft at the airstrip to escape from the island. ~n~~n~You can escape by any other means if plans change during the heist. */;
		case 88:
			return "H4P_FIN4_MDOC_I" /* GXT: Heist Impact:~n~After acquiring the primary target, find a boat at the main dock to escape from the island. ~n~~n~You can escape by any other means if plans change during the heist. */;
		case 89:
			return "H4P_FIN4_NDOC_I" /* GXT: Heist Impact:~n~After acquiring the primary target, find a boat at the north dock to escape from the island. ~n~~n~You can escape by any other means if plans change during the heist. */;
		case 90:
			return "H4P_FIN4_SUBM_I" /* GXT: Heist Impact:~n~After acquiring the primary target, get back to your Kosatka to escape from the island. ~n~~n~You can escape by any other means if plans change during the heist.~n~~n~Please note:~n~To escape with your Kosatka, it must also be used as your approach vehicle. */;
		case 91:
			return "H4P_FIN5_TDAY_I" /* GXT: Heist Impact:~n~The guards can see further during the day but will be more visible to you too. */;
		case 92:
			return "H4P_FIN5_TNGT_I" /* GXT: Heist Impact:~n~The guards can't see as far at night but they will be less visible to you too. */;
		case 93:
			return "H4P_FIN6_SHOT_I" /* GXT: Details:~n~Access to the following weapons:~n~- Assault Shotgun~n~- Machine Pistol~n~- Grenades~n~- Machete */;
		case 94:
			return "H4P_FIN6_RIFL_I" /* GXT: Details:~n~Access to the following weapons:~n~- Military Rifle~n~- Pistol .50~n~- Sticky Bombs~n~- Knuckle Duster */;
		case 95:
			return "H4P_FIN6_SNIP_I" /* GXT: Details:~n~Access to the following weapons:~n~- Sniper Rifle~n~- AP Pistol~n~- Molotov Cocktails~n~- Knife */;
		case 96:
			return "H4P_FIN6_MKSM_I" /* GXT: Details:~n~Access to the following weapons:~n~- SMG Mk II~n~- SNS Pistol Mk II~n~- Pipe Bombs~n~- Knife */;
		case 97:
			return "H4P_FIN6_MKAR_I" /* GXT: Details:~n~Access to the following weapons:~n~- Assault Rifle Mk II~n~- Pistol Mk II~n~- Pipe Bombs~n~- Machete */;
		case 98:
			return "H4P_FIN6_SUPP_I" /* GXT: Heist Impact:~n~Reduces the range at which enemies can hear you shooting. */;
		case 99:
			return __LIB_1__::func_295(func_362(uParam0, iParam1), "H4P_FIN7_AIRS_I" /* GXT: Details:~n~From the Interaction Menu, call in an airstrike at your chosen location. ~n~~n~Please Note:~n~To use this, the island's air defenses must first be disabled at the control tower during the heist. */, "H4P_FIN7_AIRS_2" /* GXT: Locked:~n~Meet this support crew member as the owner of a Hangar. */);
		case 100:
			return "H4P_FIN7_WDRP_I" /* GXT: Details:~n~From the Interaction Menu, call in a weapons supply drop containing a minigun, RPG and explosives. ~n~~n~Please Note:~n~To use this, the island's air defenses must first be disabled at the control tower during the heist. */;
		case 101:
			return "H4P_FIN7_SNIP_I" /* GXT: Details:~n~From the Interaction Menu, call in a temporary support sniper who can silently take out marked enemies.~n~~n~Please Note:~n~To use this, the island's air defenses must first be disabled at the control tower during the heist. */;
		case 102:
			return "H4P_FIN7_HELI_I" /* GXT: Details:~n~From the Interaction Menu, call in a temporary piloted helicopter that can take out El Rubio's security.~n~~n~Please Note:~n~To use this, the island's air defenses must first be disabled at the control tower during the heist. */;
		case 103:
			return __LIB_1__::func_295(func_362(uParam0, iParam1), "H4P_FIN7_SPYD_I" /* GXT: Details:~n~From the Interaction Menu, call in an airborne drone to reveal the locations of nearby guards on the island. ~n~~n~Please Note:~n~To use this, the island's air defenses must first be disabled at the control tower during the heist. */, "H4P_FIN7_SPYD_2" /* GXT: Locked:~n~Meet this support crew member as the owner of a Terrorbyte. */);
		case 104:
			return "H4P_FIN7_WEAP_I" /* GXT: Details:~n~Have your weapons stashed at the island's airstrip so you don't alert El Rubio's guards when landing in the Velum.~n~~n~Please Note:~n~This only works with the Velum approach vehicle. */;
		default:
	}
	return "";
}

int func_362(var uParam0, int iParam1)//Position - 0xC639
{
	switch (iParam1)
	{
		case 99:
			return func_363(uParam0->f_1084, 0);
		case 103:
			return func_363(uParam0->f_1084, 3);
		default:
	}
	return 1;
}

int func_363(int iParam0, int iParam1)//Position - 0xC66F
{
	switch (iParam1)
	{
		case 0:
			if (!__LIB_1__::func_655(iParam0) || !__LIB_13__::func_141(iParam0))
			{
				return 0;
			}
			break;
		case 3:
			if (!__LIB_4__::func_280(iParam0) || !BitTest(Global_1970897[iParam0 /*68*/].f_42, 4))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_367(var uParam0, int iParam1)//Position - 0xC755
{
	switch (iParam1)
	{
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return !func_382(uParam0->f_1084, 0, 0, 0);
		case 8:
			return !func_382(uParam0->f_1084, 1, 0, 0);
		case 9:
			return !func_382(uParam0->f_1084, 2, 0, 0);
		case 10:
			return !func_382(uParam0->f_1084, 3, 0, 0);
		case 11:
			return !func_382(uParam0->f_1084, 4, 0, 0);
		case 12:
			return !__LIB_27__::func_386(uParam0->f_1084, func_381(iParam1));
		case 13:
			return !__LIB_27__::func_386(uParam0->f_1084, func_381(iParam1));
		case 14:
			return !__LIB_27__::func_386(uParam0->f_1084, func_381(iParam1));
		case 15:
			return !__LIB_27__::func_386(uParam0->f_1084, func_381(iParam1));
		case 16:
			return !__LIB_27__::func_386(uParam0->f_1084, func_381(iParam1));
		case 17:
			return !__LIB_27__::func_386(uParam0->f_1084, func_381(iParam1));
		case 18:
			return !__LIB_27__::func_386(uParam0->f_1084, func_381(iParam1));
		case 19:
			return !__LIB_27__::func_386(uParam0->f_1084, func_381(iParam1));
		case 20:
			return !__LIB_37__::func_15(uParam0->f_1084, func_379(iParam1));
		case 21:
			return !__LIB_37__::func_15(uParam0->f_1084, func_379(iParam1));
		case 22:
			return !__LIB_37__::func_15(uParam0->f_1084, func_379(iParam1));
		case 23:
			return !__LIB_37__::func_15(uParam0->f_1084, func_379(iParam1));
		case 30:
			return !__LIB_37__::func_30(uParam0->f_1084);
		case 31:
			return !__LIB_37__::func_29(uParam0->f_1084);
		case 32:
			return !func_397(uParam0->f_1084);
		case 33:
			return !func_391(uParam0->f_1084);
		case 34:
			return !func_385(uParam0->f_1084);
		case 35:
			return !__LIB_37__::func_16(uParam0->f_1084);
		case 24:
			return !__LIB_28__::func_632(uParam0->f_1084, func_377(iParam1));
		case 25:
			return !__LIB_28__::func_632(uParam0->f_1084, func_377(iParam1));
		case 26:
			return !__LIB_28__::func_632(uParam0->f_1084, func_377(iParam1));
		case 27:
			return !__LIB_28__::func_632(uParam0->f_1084, func_377(iParam1));
		case 28:
			return !__LIB_28__::func_632(uParam0->f_1084, func_377(iParam1));
		case 29:
			return !__LIB_28__::func_632(uParam0->f_1084, func_377(iParam1));
		case 36:
			return 0;
		case 37:
			return 0;
		case 38:
			return 0;
		case 39:
			return 0;
		case 40:
			return 0;
		case 41:
		case 42:
			return 0;
		case 43:
			if (!__LIB_27__::func_386(uParam0->f_1084, 5) && !__LIB_27__::func_386(uParam0->f_1084, 6))
			{
				return 1;
			}
			return 0;
		case 44:
			return !(__LIB_27__::func_386(uParam0->f_1084, 3) || __LIB_27__::func_386(uParam0->f_1084, 4));
		case 45:
			return !(__LIB_27__::func_386(uParam0->f_1084, 3) || __LIB_27__::func_386(uParam0->f_1084, 4));
		case 46:
			return 0;
		case 47:
			if (__LIB_9__::func_233(uParam0->f_1084, 6))
			{
				return 0;
			}
			if (__LIB_9__::func_233(uParam0->f_1084, 1))
			{
				return 0;
			}
			return 1;
		case 48:
			return !(__LIB_27__::func_386(uParam0->f_1084, 5) || __LIB_27__::func_386(uParam0->f_1084, 6));
		case 49:
			if (!__LIB_27__::func_386(uParam0->f_1084, 5) && !__LIB_27__::func_386(uParam0->f_1084, 6))
			{
				return 1;
			}
			if (__LIB_9__::func_233(uParam0->f_1084, 6))
			{
				return 0;
			}
			if (__LIB_9__::func_233(uParam0->f_1084, 2))
			{
				return 0;
			}
			return 1;
		case 50:
			return 0;
		case 53:
			return !__LIB_27__::func_386(uParam0->f_1084, 7);
		case 51:
			return 0;
		case 52:
			return 0;
		case 54:
			return (__LIB_9__::func_233(uParam0->f_1084, 13) && __LIB_28__::func_471(uParam0->f_1084) != 1);
		case 55:
			return (__LIB_9__::func_233(uParam0->f_1084, 13) && __LIB_28__::func_471(uParam0->f_1084) != 2);
		case 56:
			return (__LIB_9__::func_233(uParam0->f_1084, 13) && __LIB_28__::func_471(uParam0->f_1084) != 3);
		case 57:
			if (__LIB_9__::func_233(uParam0->f_1084, 13) && __LIB_28__::func_471(uParam0->f_1084) != 4)
			{
				return 1;
			}
			if (__LIB_11__::func_600(uParam0->f_1084) && __LIB_13__::func_3(uParam0->f_1084, __LIB_1__::func_721(uParam0->f_1084)))
			{
				return 0;
			}
			if (__LIB_3__::func_929(uParam0->f_1084) && __LIB_13__::func_701(uParam0->f_1084))
			{
				return 0;
			}
			return 1;
		case 58:
			if (__LIB_9__::func_233(uParam0->f_1084, 13) && __LIB_28__::func_471(uParam0->f_1084) != 5)
			{
				return 1;
			}
			if (__LIB_11__::func_600(uParam0->f_1084) && __LIB_13__::func_3(uParam0->f_1084, __LIB_1__::func_721(uParam0->f_1084)))
			{
				return 0;
			}
			if (__LIB_3__::func_929(uParam0->f_1084) && __LIB_13__::func_701(uParam0->f_1084))
			{
				return 0;
			}
			return 1;
		case 60:
			return 0;
		case 61:
			return 0;
		case 62:
			return 0;
		case 99:
			return !func_362(uParam0, iParam1);
		case 103:
			return !func_362(uParam0, iParam1);
		default:
	}
	return 0;
}

int func_377(int iParam0)//Position - 0xCF04
{
	switch (iParam0)
	{
		case 24:
			return 0;
		case 25:
			return 1;
		case 26:
			return 2;
		case 27:
			return 3;
		case 28:
			return 4;
		case 29:
			return 5;
		default:
	}
	return 6;
}

int func_379(int iParam0)//Position - 0xCFC2
{
	switch (iParam0)
	{
		case 20:
		case 87:
			return 0;
		case 21:
		case 88:
			return 1;
		case 22:
		case 89:
			return 2;
		case 23:
		case 90:
			return 3;
		default:
	}
	return 4;
}

int func_381(int iParam0)//Position - 0xD033
{
	switch (iParam0)
	{
		case 12:
		case 77:
			return 0;
		case 13:
		case 78:
			return 1;
		case 14:
		case 79:
			return 2;
		case 15:
		case 80:
			return 3;
		case 16:
		case 81:
			return 4;
		case 17:
		case 82:
			return 5;
		case 18:
		case 83:
			return 6;
		case 19:
		case 84:
			return 7;
		default:
	}
	return 8;
}

int func_382(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xD0C4
{
	bool bVar0;
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_5, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_13, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			case 1:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_6, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_14, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			case 2:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_7, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_15, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			case 3:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_8, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_16, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			case 4:
				bVar0 = false;
				while (bVar0 < 7)
				{
					if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_18, bVar0))
					{
						return 1;
					}
					bVar0++;
				}
				break;
			}
	}
	return 0;
}

int func_385(int iParam0)//Position - 0xD30E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_42__::func_343(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_391(int iParam0)//Position - 0xD3FC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_42__::func_344(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_397(int iParam0)//Position - 0xD4EA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_42__::func_345(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_406(var uParam0)//Position - 0xD631
{
	if (!__LIB_9__::func_233(uParam0->f_1084, 0) && !__LIB_1__::func_167(uParam0->f_1084))
	{
		return 0;
	}
	return 1;
}

int func_407(int iParam0)//Position - 0xD65B
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 36:
		case 37:
		case 38:
		case 39:
		case 67:
		case 63:
		case 64:
		case 66:
		case 65:
		case 68:
		case 69:
		case 70:
		case 1000:
			return 1;
		default:
	}
	return 0;
}

int func_408(var uParam0, int iParam1)//Position - 0xD6E1
{
	switch (iParam1)
	{
		case 1000:
			if (func_409(uParam0, PLAYER::PLAYER_ID()) != -1)
			{
				return uParam0->f_823.f_67[func_409(uParam0, PLAYER::PLAYER_ID())] == 1;
			}
			break;
	}
	return 0;
}

int func_409(var uParam0, int iParam1)//Position - 0xD720
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_823.f_51[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_410(var uParam0, int iParam1)//Position - 0xD750
{
	switch (iParam1)
	{
		case 1000:
			if (func_409(uParam0, PLAYER::PLAYER_ID()) != -1)
			{
				return uParam0->f_823.f_67[func_409(uParam0, PLAYER::PLAYER_ID())] == 0;
			}
			break;
	}
	return 0;
}

int func_411(var uParam0, int iParam1)//Position - 0xD78F
{
	switch (iParam1)
	{
		case 99:
			return !func_413(uParam0->f_1084, 0);
		case 100:
			return !func_413(uParam0->f_1084, 4);
		case 101:
			return !func_413(uParam0->f_1084, 1);
		case 102:
			return !func_413(uParam0->f_1084, 2);
		case 103:
			return !func_413(uParam0->f_1084, 3);
		case 104:
			return !func_413(uParam0->f_1084, 5);
		case 59:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				return 0;
			}
			return !__LIB_8__::func_748(uParam0->f_1084);
		default:
	}
	return 0;
}

int func_413(int iParam0, int iParam1)//Position - 0xD854
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_5.f_45, iParam1);
	}
	return 0;
}

int func_414(var uParam0, int iParam1)//Position - 0xD875
{
	if (func_367(uParam0, iParam1))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			return 1;
		case 40:
			return !__LIB_9__::func_233(uParam0->f_1084, 7);
		case 42:
			return !__LIB_9__::func_233(uParam0->f_1084, 5);
		case 44:
			return !__LIB_9__::func_233(uParam0->f_1084, 3);
		case 45:
			return !__LIB_9__::func_233(uParam0->f_1084, 4);
		case 46:
			return !__LIB_9__::func_233(uParam0->f_1084, 1);
		case 48:
			return !__LIB_9__::func_233(uParam0->f_1084, 2);
		case 47:
			return !__LIB_9__::func_233(uParam0->f_1084, 6);
		case 49:
			return !__LIB_9__::func_233(uParam0->f_1084, 6);
		case 50:
			return !__LIB_9__::func_233(uParam0->f_1084, 8);
		case 53:
			return !__LIB_9__::func_233(uParam0->f_1084, 9);
		case 51:
			return !__LIB_9__::func_233(uParam0->f_1084, 11);
		case 52:
			return !__LIB_9__::func_233(uParam0->f_1084, 12);
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			if (__LIB_28__::func_471(uParam0->f_1084) == 0 || !__LIB_9__::func_233(uParam0->f_1084, 13))
			{
				return 1;
			}
			break;
		case 60:
			return !__LIB_9__::func_233(uParam0->f_1084, 14);
		case 61:
			return !__LIB_9__::func_233(uParam0->f_1084, 15);
		case 62:
			return !__LIB_9__::func_233(uParam0->f_1084, 16);
	}
	return 0;
}

int func_415(var uParam0, int iParam1)//Position - 0xDA21
{
	switch (iParam1)
	{
		case 1000:
			return 1;
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 36:
		case 37:
		case 38:
		case 39:
		case 41:
		case 43:
			if (func_367(uParam0, iParam1))
			{
				return 0;
			}
			return 1;
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			if (uParam0->f_1084 != iLocal_158)
			{
				return 0;
			}
			return NETWORK::NETWORK_IS_ACTIVITY_SESSION();
		case 68:
		case 70:
			return NETWORK::NETWORK_IS_ACTIVITY_SESSION();
		case 91:
		case 92:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 98:
		case 105:
		case 106:
		case 107:
		case 108:
			return (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1084 == iLocal_158);
		default:
	}
	return 0;
}

int func_416(var uParam0, int iParam1)//Position - 0xDB8E
{
	switch (iParam1)
	{
		case 67:
		case 63:
		case 64:
		case 65:
		case 66:
		case 68:
		case 69:
		case 70:
			return !NETWORK::NETWORK_IS_ACTIVITY_SESSION();
		default:
	}
	return 0;
}

int func_417(var uParam0, int iParam1)//Position - 0xDBD6
{
	switch (iParam1)
	{
		case 98:
			if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1084 == PLAYER::PLAYER_ID()) && Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_44)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_418(var uParam0, int iParam1)//Position - 0xDC1C
{
	switch (iParam1)
	{
		case 98:
			if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1084 == PLAYER::PLAYER_ID()) && !Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_44)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_421(int iParam0)//Position - 0xDD44
{
	switch (iParam0)
	{
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			return 1;
		default:
	}
	return 0;
}

void func_435(var uParam0)//Position - 0xE330
{
	struct<9> Var0;
	int iVar1;
	if (!func_436(Local_174.f_6))
	{
		return;
	}
	Var0 = { __LIB_1__::func_404() };
	if (iLocal_342 && !uParam0->f_707)
	{
		__LIB_5__::func_693(&(uParam0->f_712), &Var0, uParam0, 0);
		return;
	}
	if (!GRAPHICS::GET_IS_WIDESCREEN() || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10)
	{
		__LIB_6__::func_206(uParam0, 0.5f);
	}
	else
	{
		__LIB_6__::func_206(uParam0, 0.7f);
	}
	__LIB_1__::func_539(uParam0);
	iVar1 = uParam0->f_806;
	if (func_416(uParam0, iVar1))
	{
		__LIB_1__::func_513(2, 201, "CH_INSTR_PREV" /* GXT: Preview */, uParam0, 1, 363);
	}
	else if (func_415(uParam0, iVar1))
	{
		__LIB_1__::func_513(2, 201, "CH_INSTR_SEL" /* GXT: Select */, uParam0, 1, 363);
	}
	if (func_407(iVar1))
	{
		__LIB_1__::func_513(2, 202, "CH_INSTR_QUIT" /* GXT: Quit */, uParam0, 1, 363);
	}
	else
	{
		__LIB_1__::func_513(2, 202, "CH_INSTR_BACK" /* GXT: Back */, uParam0, 1, 363);
	}
	if (func_406(uParam0))
	{
		__LIB_1__::func_513(2, 203, "HP_MAP" /* GXT: Map */, uParam0, 1, 363);
	}
	__LIB_16__::func_173(2, 0, "HEIST_IB_NAV" /* GXT: Navigate */, uParam0);
	__LIB_5__::func_693(&(uParam0->f_712), &Var0, uParam0, 1);
	if (!iLocal_342)
	{
		iLocal_342 = 1;
	}
	else if (uParam0->f_707)
	{
		uParam0->f_707 = 0;
	}
}

int func_436(int iParam0)//Position - 0xE46A
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 19:
		case 37:
			return 1;
		default:
	}
	return 0;
}

bool func_439(var uParam0)//Position - 0xE4F9
{
	if (Local_159.f_7.f_2.f_6 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_159.f_7.f_2.f_6);
		return StackVal;
	}
	return uParam0->f_703;
}

float func_440()//Position - 0xE522
{
	if (Local_159.f_7.f_2.f_5 != 0)
	{
		Call_Loc(Local_159.f_7.f_2.f_5);
		return StackVal;
	}
	return 1f;
}

float func_441()//Position - 0xE545
{
	if (Local_159.f_7.f_2.f_4 != 0)
	{
		Call_Loc(Local_159.f_7.f_2.f_4);
		return StackVal;
	}
	return 1f;
}

float func_442()//Position - 0xE568
{
	if (Local_159.f_7.f_2.f_3 != 0)
	{
		Call_Loc(Local_159.f_7.f_2.f_3);
		return StackVal;
	}
	return 0.5f;
}

float func_443()//Position - 0xE58F
{
	if (Local_159.f_7.f_2.f_2 != 0)
	{
		Call_Loc(Local_159.f_7.f_2.f_2);
		return StackVal;
	}
	return 0.5f;
}

int func_444()//Position - 0xE5B6
{
	if (Local_159.f_7.f_2.f_1 != 0)
	{
		Call_Loc(Local_159.f_7.f_2.f_1);
		return StackVal;
	}
	return 1;
}

void func_450(var uParam0)//Position - 0xE692
{
	if (Local_159.f_4 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_159.f_4);
	}
	switch (uParam0->f_726)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			func_454(uParam0);
			break;
		case 3:
			uParam0->f_1096 = 0;
			uParam0->f_1097 = 0;
			break;
		case 4:
			func_451(uParam0);
			__LIB_40__::func_528(uParam0, 1);
			__LIB_40__::func_538(uParam0, 1);
			__LIB_40__::func_555(uParam0, 0, 0);
			break;
		case 5:
			break;
	}
}

void func_451(var uParam0)//Position - 0xE719
{
	uParam0->f_741.f_35 = 0f;
	uParam0->f_741.f_35.f_1 = 0f;
	uParam0->f_741.f_35.f_2 = -180f;
	__LIB_40__::func_544(uParam0, 0);
	__LIB_37__::func_32(&(uParam0->f_741.f_1), func_347(uParam0), func_346(uParam0), func_345(uParam0), 20, 10, 3, 10f, 1, 0, -1f, 1);
	if (func_344())
	{
		CAM::SHAKE_CAM(uParam0->f_741.f_1, func_343(), func_342());
	}
	__LIB_40__::func_535(uParam0, func_345(uParam0));
	CAM::SET_WIDESCREEN_BORDERS(true, 0);
	uParam0->f_741.f_38 = { func_347(uParam0) };
	uParam0->f_741.f_41 = { func_346(uParam0) };
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(250);
	}
}

void func_454(var uParam0)//Position - 0xE8DD
{
	uParam0->f_711 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(func_456(uParam0));
	uParam0->f_712 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(func_455(uParam0));
}

char* func_455(var uParam0)//Position - 0xE903
{
	if (Local_159.f_7.f_10 != 0)
	{
		Call_Loc(Local_159.f_7.f_10);
		return StackVal;
	}
	return "INSTRUCTIONAL_BUTTONS";
}

char* func_456(var uParam0)//Position - 0xE925
{
	if (Local_159.f_7.f_2 != 0)
	{
		Call_Loc(Local_159.f_7.f_2);
		return StackVal;
	}
	return "";
}

void func_458(int iParam0)//Position - 0xE95C
{
	if (iLocal_170 != iParam0)
	{
	}
	iLocal_170 = iParam0;
}

int func_461(var uParam0)//Position - 0xE9AE
{
	if (!func_468(uParam0))
	{
		return 0;
	}
	if (!func_463(uParam0))
	{
		return 0;
	}
	if (!__LIB_0__::func_109())
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() != -1 && !Global_1974423[PLAYER::PLAYER_ID() /*25*/].f_20)
	{
		Global_1974423[PLAYER::PLAYER_ID() /*25*/].f_20 = 1;
	}
	return 1;
}

int func_463(var uParam0)//Position - 0xEA10
{
	char* sVar0;
	int iVar1;
	if (!BitTest(uParam0->f_1085, 1))
	{
		Call_Loc(Local_159.f_7);
		sVar0 = StackVal;
		Call_Loc(Local_159.f_7.f_1);
		iVar1 = StackVal;
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return 0;
		}
		if (iVar1 == 0)
		{
			return 0;
		}
		if (__LIB_7__::func_281(sVar0, iVar1))
		{
			uParam0->f_700 = __LIB_5__::func_142(sVar0);
			MISC::SET_BIT(&(uParam0->f_1085), 1);
		}
	}
	return BitTest(uParam0->f_1085, 1);
}

bool func_468(var uParam0)//Position - 0xEB00
{
	if (!BitTest(uParam0->f_1085, 0))
	{
		uParam0->f_1082 = __LIB_0__::func_114();
		uParam0->f_732 = { func_968() };
		uParam0->f_732.f_6 = { uParam0->f_732 };
		uParam0->f_741.f_33 = __LIB_0__::func_114();
		if (func_966() == 0)
		{
			uParam0->f_1073 = { 1561.1614f, 384.824f, -48.6215f };
			uParam0->f_1073.f_3 = { -89.3034f, -0.1435f, 180f };
			uParam0->f_1073.f_6 = 69f;
		}
		else
		{
			uParam0->f_1073 = { 1561.1604f, 384.8204f, -48.9135f };
			uParam0->f_1073.f_3 = { -89.5003f, -0.204f, 180f };
			uParam0->f_1073.f_6 = 69f;
		}
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			uParam0->f_1084 = __LIB_11__::func_612();
		}
		Local_159.f_0 = 142781/*func_963*/;
		Local_159.f_1 = 142737/*func_962*/;
		Local_159.f_2 = 142718/*func_961*/;
		Local_159.f_3 = 142699/*func_960*/;
		Local_159.f_4 = 123993/*func_854*/;
		Local_159.f_4.f_1 = 123908/*func_853*/;
		Local_159.f_4.f_2 = 73242/*func_563*/;
		Local_159.f_7 = 73230/*func_562*/;
		Local_159.f_7.f_1 = 73217/*func_561*/;
		Local_159.f_7.f_2 = 73205/*func_560*/;
		Local_159.f_7.f_2.f_1 = 73196/*__LIB_0__::func_109*/;
		Local_159.f_7.f_2.f_2 = 73183/*__LIB_20__::func_553*/;
		Local_159.f_7.f_2.f_3 = 73170/*__LIB_20__::func_554*/;
		Local_159.f_7.f_2.f_4 = 73157/*__LIB_19__::func_299*/;
		Local_159.f_7.f_2.f_5 = 73144/*__LIB_19__::func_299*/;
		Local_159.f_7.f_2.f_7 = 73017/*func_554*/;
		Local_159.f_28 = 70224/*func_539*/;
		Local_159.f_18 = 70156/*func_538*/;
		Local_159.f_18.f_1 = 70088/*func_537*/;
		Local_159.f_18.f_2 = 70058/*func_536*/;
		Local_159.f_18.f_3 = 70049/*__LIB_0__::func_114*/;
		Local_159.f_18.f_4 = 70040/*__LIB_0__::func_114*/;
		Local_159.f_18.f_7.f_2 = 70027/*__LIB_15__::func_314*/;
		Local_159.f_30 = 69963/*func_532*/;
		Local_159.f_31 = 69830/*func_531*/;
		Local_159.f_32 = 69740/*func_528*/;
		Local_159.f_33.f_2 = 69727/*func_527*/;
		Local_159.f_33 = 69649/*func_524*/;
		Local_159.f_33.f_1 = 66721/*func_506*/;
		Local_159.f_33.f_3 = 66706/*func_505*/;
		Local_159.f_33.f_5 = 66694/*func_504*/;
		Local_159.f_33.f_4 = 66654/*func_503*/;
		Local_159.f_33.f_6 = 66638/*func_502*/;
		Local_159.f_33.f_7 = 66626/*func_501*/;
		Local_159.f_33.f_8 = 62809/*func_485*/;
		Local_159.f_33.f_9 = 62797/*func_484*/;
		Local_159.f_43 = 62785/*func_483*/;
		Local_159.f_43.f_1 = 62077/*func_482*/;
		Local_159.f_43.f_2 = 62065/*__LIB_37__::func_34*/;
		Local_159.f_43.f_3 = 62056/*__LIB_1__::func_806*/;
		Local_159.f_43.f_5 = 62044/*__LIB_37__::func_33*/;
		Local_159.f_43.f_6 = 61998/*func_478*/;
		Local_159.f_43.f_7 = 61890/*func_476*/;
		Local_159.f_51 = 61881/*__LIB_0__::func_109*/;
		Local_159.f_51.f_1 = 61743/*func_474*/;
		Local_159.f_51.f_2 = 61731/*__LIB_21__::func_122*/;
		Local_159.f_51.f_3 = 61717/*func_472*/;
		Local_159.f_51.f_4 = 60899/*func_469*/;
		MISC::SET_BIT(&(uParam0->f_1085), 0);
	}
	return BitTest(uParam0->f_1085, 0);
}

void func_469(var uParam0)//Position - 0xEDE3
{
	func_471(uParam0);
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		func_470(uParam0);
		Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_22 = 1;
	}
}

void func_470(var uParam0)//Position - 0xEE10
{
	uParam0->f_823.f_67[0] = 1;
	Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_7[0] = 1;
}

void func_471(var uParam0)//Position - 0xEE33
{
	int iVar0;
	int iVar1;
	switch (uParam0->f_823.f_49)
	{
		case 1:
			if (uParam0->f_1084 == PLAYER::PLAYER_ID())
			{
				Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[0] = 100;
				Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[1] = 0;
				Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[2] = 0;
				Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[3] = 0;
				Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[4] = 0;
			}
			uParam0->f_823.f_56[0] = 100;
			uParam0->f_823.f_56[1] = 0;
			uParam0->f_823.f_56[2] = 0;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		case 2:
			if (uParam0->f_1084 == PLAYER::PLAYER_ID())
			{
				Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[0] = 85;
				Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[1] = 15;
				Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[2] = 0;
				Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[3] = 0;
				Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[4] = 0;
			}
			uParam0->f_823.f_56[0] = 85;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 0;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		case 3:
			if (uParam0->f_1084 == PLAYER::PLAYER_ID())
			{
				Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[0] = 70;
				Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[1] = 15;
				Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[2] = 15;
				Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[3] = 0;
				Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[4] = 0;
			}
			uParam0->f_823.f_56[0] = 70;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 15;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		case 4:
			if (uParam0->f_1084 == PLAYER::PLAYER_ID())
			{
				Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[0] = 55;
				Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[1] = 15;
				Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[2] = 15;
				Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[3] = 15;
				Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[4] = 0;
			}
			uParam0->f_823.f_56[0] = 55;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 15;
			uParam0->f_823.f_56[3] = 15;
			uParam0->f_823.f_56[4] = 0;
			break;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (uParam0->f_823.f_51[iVar0] != PLAYER::NETWORK_PLAYER_ID_TO_INT())
		{
		}
		else
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	Global_2715699.f_6568 = uParam0->f_823.f_56[iVar1];
	Global_1944587.f_29 = Global_2715699.f_6568;
}

void func_472(var uParam0)//Position - 0xF115
{
	uParam0->f_707 = 1;
}

int func_474(var uParam0)//Position - 0xF12F
{
	if (((((uParam0->f_1084 == -1 || Global_1975224[uParam0->f_1084 /*53*/].f_5.f_39 == 0) || Global_1975224[uParam0->f_1084 /*53*/].f_5.f_40 == -1) || Global_1975224[uParam0->f_1084 /*53*/].f_5.f_41 == -1) || Global_1975224[uParam0->f_1084 /*53*/].f_5.f_42 == -1) || Global_1975224[uParam0->f_1084 /*53*/].f_5.f_43 == 0)
	{
		return 0;
	}
	return 1;
}

void func_476(int iParam0)//Position - 0xF1C2
{
	int iVar0;
	if (func_477(iParam0) != 13122)
	{
		iVar0 = __LIB_0__::func_369(func_477(iParam0), -1, 0);
		MISC::SET_BIT(&iVar0, (iParam0 % 32));
		__LIB_0__::func_413(func_477(iParam0), iVar0, -1, 1, 0);
	}
}

int func_477(int iParam0)//Position - 0xF201
{
	switch ((iParam0 / 32))
	{
		case 0:
			return 9541;
		case 1:
			return 9542;
		default:
	}
	return 13122;
}

int func_478(int iParam0)//Position - 0xF22E
{
	if (func_477(iParam0) != 13122)
	{
		if (BitTest(__LIB_0__::func_369(func_477(iParam0), -1, 0), (iParam0 % 32)))
		{
			return 0;
		}
	}
	return 1;
}

char* func_482(int iParam0)//Position - 0xF27D
{
	switch (iParam0)
	{
		case 0:
			return "HS4PA_PS_1";
		case 1:
			return "HS4PA_PS_2";
		case 2:
			return "HS4PA_PS_3";
		case 3:
			return "HS4PA_PS_49";
		case 4:
			return "HS4PA_PS_50";
		case 5:
			return "HS4PA_PS_4";
		case 6:
			return "HS4PA_PS_5";
		case 7:
			return "HS4PA_PS_6";
		case 8:
			return "HS4PA_PS_7";
		case 9:
			return "HS4PA_PS_8";
		case 10:
			return "HS4PA_PS_15";
		case 11:
			return "HS4PA_PS_9";
		case 12:
			return "HS4PA_PS_10";
		case 13:
			return "HS4PA_PS_11";
		case 14:
			return "HS4PA_PS_51";
		case 15:
			return "HS4PA_PS_12";
		case 16:
			return "HS4PA_PS_52";
		case 17:
			return "HS4PA_PS_13";
		case 18:
			return "HS4PA_PS_14";
		case 19:
			return "HS4PA_PS_16";
		case 20:
			return "HS4PA_PS_17";
		case 21:
			return "HS4PA_PS_18";
		case 22:
			return "HS4PA_PS_19";
		case 23:
			return "HS4PA_PS_20";
		case 24:
			return "HS4PA_PS_21";
		case 25:
			return "HS4PA_PS_22";
		case 26:
			return "HS4PA_PS_23";
		case 27:
			return "HS4PA_PS_24";
		case 28:
			return "HS4PA_PS_25";
		case 29:
			return "HS4PA_PS_53";
		case 30:
			return "HS4PA_PS_26";
		case 31:
			return "HS4PA_PS_27";
		case 32:
			return "HS4PA_PS_28";
		case 33:
			return "HS4PA_PS_29";
		case 34:
			return "HS4PA_PS_30";
		case 35:
			return "HS4PA_PS_31";
		case 36:
			return "HS4PA_PS_32";
		case 37:
			return "HS4PA_PS_33";
		case 38:
			return "HS4PA_PS_34";
		case 39:
			return "HS4PA_PS_35";
		case 40:
			return "HS4PA_PS_36";
		case 41:
			return "HS4PA_PS_37";
		case 42:
			return "HS4PA_PS_38";
		case 43:
			return "HS4PA_PS_39";
		case 44:
			return "HS4PA_PS_40";
		case 45:
			return "HS4PA_PS_41";
		case 46:
			return "HS4PA_PS_42";
		case 47:
			return "HS4PA_PS_43";
		case 48:
			return "HS4PA_PS_44";
		case 49:
			return "HS4PA_PS_45";
		case 50:
			return "HS4PA_PS_46";
		case 51:
			return "HS4PA_PS_47";
		case 52:
			return "HS4PA_PS_48";
		default:
	}
	return "";
}

var func_483()//Position - 0xF541
{
	return Global_1579021;
}

char* func_484()//Position - 0xF54D
{
	return "HIP_SETUP_CASH" /* GXT: You do not have enough cash. The setup cost for The Cayo Perico Heist is $~1~. */;
}

int func_485()//Position - 0xF559
{
	var uVar0;
	struct<10> Var1;
	if (func_500())
	{
		if (__LIB_0__::func_112())
		{
			__LIB_2__::func_105(joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"), Global_262145.f_29918 /* Tunable: H4_REPLAY_COST */, &uVar0, 0, 1, 0);
		}
		else
		{
			Var1 = -1;
			Var1.f_1 = -1;
			Var1.f_2 = -1;
			Var1.f_3 = -1;
			Var1.f_4 = -1;
			Var1.f_5 = -1;
			Var1.f_6 = -1;
			Var1.f_7 = -1;
			Var1.f_8 = -1;
			Var1.f_9 = -1;
			__LIB_37__::func_35(&Var1);
			Var1.f_7 = Global_262145.f_29918 /* Tunable: H4_REPLAY_COST */;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_262145.f_29918 /* Tunable: H4_REPLAY_COST */, 0, 1, &Var1);
		}
		return 1;
	}
	return 0;
}

int func_500()//Position - 0x10412
{
	int iVar0;
	int iVar1;
	if (STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&iVar0, &iVar1))
	{
		__LIB_0__::func_413(9571, iVar0, -1, 1, 0);
		__LIB_0__::func_413(9572, iVar1, -1, 1, 0);
		return 1;
	}
	return 0;
}

char* func_501()//Position - 0x10442
{
	return "HIP_COOLDOWN" /* GXT: Pavel will contact you when The Cayo Perico Heist is available again. */;
}

var func_502()//Position - 0x1044E
{
	return BitTest(Global_1976921.f_10, 6);
}

struct<16> func_503()//Position - 0x1045E
{
	struct<16> Var0;
	StringCopy(&Var0, "HIP_WARN_SETUP" /* GXT: The setup cost for The Cayo Perico Heist is $~1~. */, 64);
	if (BitTest(Global_1976921.f_10, 7))
	{
		StringCopy(&Var0, "HIP_WARN_SETUP2" /* GXT: The setup cost for The Cayo Perico Heist is $~1~. Setting up now will set the heist to Hard Mode. */, 64);
	}
	return Var0;
}

char* func_504()//Position - 0x10486
{
	return "HIP_PROMPT_S" /* GXT: Press ~INPUT_CONTEXT~ to set up The Cayo Perico Heist. */;
}

var func_505()//Position - 0x10492
{
	return Global_262145.f_29918 /* Tunable: H4_REPLAY_COST */;
}

void func_506()//Position - 0x104A1
{
	if (BitTest(Global_1976921.f_10, 7))
	{
		func_511(0);
		func_507(1, 1);
		MISC::SET_BIT(&(Global_1973321.f_1085), 7);
		Global_1973321.f_1096 = 1;
	}
	else
	{
		func_511(1);
	}
}

void func_507(bool bParam0, bool bParam1)//Position - 0x104DB
{
	int iVar0;
	iVar0 = __LIB_0__::func_369(9511, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 12);
		MISC::SET_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_1), 12);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 12);
		MISC::CLEAR_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_1), 12);
	}
	__LIB_0__::func_413(9511, iVar0, -1, 1, 0);
	if (bParam1)
	{
		__LIB_1__::func_333(-1713398555, 18, 0);
	}
}

void func_511(bool bParam0)//Position - 0x1062F
{
	int iVar0;
	iVar0 = __LIB_0__::func_369(9511, -1, 0);
	MISC::SET_BIT(&iVar0, 0);
	MISC::SET_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_1), 0);
	__LIB_0__::func_413(9511, iVar0, -1, 1, 0);
	func_523(6);
	func_522();
	func_518();
	func_513();
	func_512(1);
	if (bParam0)
	{
		__LIB_1__::func_333(-1713398555, 18, 0);
	}
}

void func_512(bool bParam0)//Position - 0x1068D
{
	int iVar0;
	iVar0 = __LIB_0__::func_369(9511, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 5);
		MISC::SET_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_1), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 5);
		MISC::CLEAR_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_1), 5);
	}
	__LIB_0__::func_413(9511, iVar0, -1, 1, 0);
}

void func_513()//Position - 0x106E4
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
	int iVar15;
	int iVar16;
	int iVar17[24];
	int iVar18[8];
	int iVar19[7];
	int iVar20;
	int iVar21;
	float fVar22;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29736 /* Tunable: 544918928 */, Global_262145.f_29737 /* Tunable: -1055680280 */);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar17[iVar1] = 1;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 24);
		iVar20 = iVar17[iVar1];
		iVar17[iVar1] = iVar17[iVar2];
		iVar17[iVar2] = iVar20;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (iVar17[iVar1])
		{
			iVar21 = __LIB_37__::func_36(iVar1, 1);
			switch (iVar21)
			{
				case 0:
					MISC::SET_BIT(&iVar3, iVar1);
					break;
				case 1:
					MISC::SET_BIT(&iVar5, iVar1);
					break;
				case 2:
					MISC::SET_BIT(&iVar7, iVar1);
					break;
				case 3:
					MISC::SET_BIT(&iVar9, iVar1);
					break;
				}
		}
		iVar1++;
	}
	if (!__LIB_1__::func_167(PLAYER::PLAYER_ID()))
	{
		MISC::CLEAR_BIT(&iVar3, 6);
		MISC::CLEAR_BIT(&iVar3, 7);
		MISC::SET_BIT(&iVar5, 6);
		MISC::SET_BIT(&iVar5, 7);
		MISC::CLEAR_BIT(&iVar7, 6);
		MISC::CLEAR_BIT(&iVar7, 7);
		MISC::CLEAR_BIT(&iVar9, 6);
		MISC::CLEAR_BIT(&iVar9, 7);
		MISC::CLEAR_BIT(&iVar3, 11);
		MISC::CLEAR_BIT(&iVar3, 12);
		MISC::CLEAR_BIT(&iVar5, 11);
		MISC::CLEAR_BIT(&iVar5, 12);
		MISC::CLEAR_BIT(&iVar7, 11);
		MISC::CLEAR_BIT(&iVar7, 12);
		MISC::CLEAR_BIT(&iVar9, 11);
		MISC::CLEAR_BIT(&iVar9, 12);
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29738 /* Tunable: -577933166 */, Global_262145.f_29739 /* Tunable: 740148171 */);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar18[iVar1] = 1;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		iVar20 = iVar18[iVar1];
		iVar18[iVar1] = iVar18[iVar2];
		iVar18[iVar2] = iVar20;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (iVar18[iVar1])
		{
			iVar21 = __LIB_37__::func_36(iVar1, 0);
			switch (iVar21)
			{
				case 0:
					MISC::SET_BIT(&iVar4, iVar1);
					break;
				case 1:
					MISC::SET_BIT(&iVar6, iVar1);
					break;
				case 2:
					MISC::SET_BIT(&iVar8, iVar1);
					break;
				case 3:
					MISC::SET_BIT(&iVar10, iVar1);
					break;
				}
		}
		iVar1++;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29740 /* Tunable: -1215396560 */, Global_262145.f_29741 /* Tunable: 2086011134 */);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar19[iVar1] = 1;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iVar20 = iVar19[iVar1];
		iVar19[iVar1] = iVar19[iVar2];
		iVar19[iVar2] = iVar20;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (iVar19[iVar1])
		{
			MISC::SET_BIT(&iVar11, iVar1);
		}
		iVar1++;
	}
	iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29742 /* Tunable: 229746245 */, Global_262145.f_29743 /* Tunable: -350111103 */ + 1);
	iVar13 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29744 /* Tunable: 1897994891 */, Global_262145.f_29745 /* Tunable: 1269668093 */ + 1);
	iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29746 /* Tunable: 1066525008 */, Global_262145.f_29747 /* Tunable: 1534393449 */ + 1);
	iVar15 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29748 /* Tunable: -1226549566 */, Global_262145.f_29749 /* Tunable: -1483535037 */ + 1);
	iVar16 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29750 /* Tunable: -878110459 */, Global_262145.f_29751 /* Tunable: -1667139927 */ + 1);
	iVar12 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar12) / 100f)) * 100;
	iVar13 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar13) / 100f)) * 100;
	iVar14 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar14) / 100f)) * 100;
	iVar15 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar15) / 100f)) * 100;
	iVar16 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar16) / 100f)) * 100;
	fVar22 = func_514();
	if (fVar22 != 1f)
	{
		iVar12 = SYSTEM::CEIL((IntToFloat(iVar12) * fVar22));
		iVar13 = SYSTEM::CEIL((IntToFloat(iVar13) * fVar22));
		iVar14 = SYSTEM::CEIL((IntToFloat(iVar14) * fVar22));
		iVar15 = SYSTEM::CEIL((IntToFloat(iVar15) * fVar22));
		iVar16 = SYSTEM::CEIL((IntToFloat(iVar16) * fVar22));
	}
	__LIB_0__::func_413(9495, iVar3, -1, 1, 0);
	__LIB_0__::func_413(9496, iVar4, -1, 1, 0);
	__LIB_0__::func_413(9497, iVar12, -1, 1, 0);
	__LIB_0__::func_413(9498, iVar5, -1, 1, 0);
	__LIB_0__::func_413(9499, iVar6, -1, 1, 0);
	__LIB_0__::func_413(9500, iVar13, -1, 1, 0);
	__LIB_0__::func_413(9501, iVar7, -1, 1, 0);
	__LIB_0__::func_413(9502, iVar8, -1, 1, 0);
	__LIB_0__::func_413(9503, iVar14, -1, 1, 0);
	__LIB_0__::func_413(9504, iVar9, -1, 1, 0);
	__LIB_0__::func_413(9505, iVar10, -1, 1, 0);
	__LIB_0__::func_413(9506, iVar15, -1, 1, 0);
	__LIB_0__::func_413(9507, iVar11, -1, 1, 0);
	__LIB_0__::func_413(9508, iVar16, -1, 1, 0);
}

float func_514()//Position - 0x10BB8
{
	switch (func_515(1))
	{
		case 0:
			return Global_262145.f_29893 /* Tunable: -1387641161 */;
		case 1:
			return Global_262145.f_29894 /* Tunable: -1977209208 */;
		case 2:
			return Global_262145.f_29895 /* Tunable: -651044344 */;
		case 3:
			return Global_262145.f_29896 /* Tunable: 593471001 */;
		case 4:
			return Global_262145.f_29897 /* Tunable: 2057499252 */;
		case 5:
			return Global_262145.f_29898 /* Tunable: -982681546 */;
		default:
	}
	return 1f;
}

int func_515(bool bParam0)//Position - 0x10C2B
{
	if (bParam0)
	{
		return __LIB_0__::func_369(9489, -1, 0);
	}
	return __LIB_8__::func_749(PLAYER::PLAYER_ID());
}

void func_518()//Position - 0x10D54
{
	var uVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	if (!func_521(0))
	{
		__LIB_0__::func_413(9489, 4, -1, 1, 0);
		return;
	}
	if (Global_262145.f_29910 /* Tunable: 637051746 */ != 0)
	{
		if (__LIB_0__::func_253(9360, -1) != Global_262145.f_29910 /* Tunable: 637051746 */)
		{
			__LIB_0__::func_413(9489, 5, -1, 1, 0);
			return;
		}
	}
	if (__LIB_37__::func_37())
	{
		uVar0[0] = Global_262145.f_29904 /* Tunable: H4_TARGET_WEIGHTING_TEQUILA_BOOST */;
		uVar0[1] = Global_262145.f_29905 /* Tunable: H4_TARGET_WEIGHTING_PEARL_NECKLACE_BOOST */;
		uVar0[2] = Global_262145.f_29906 /* Tunable: H4_TARGET_WEIGHTING_BEARER_BONDS_BOOST */;
		uVar0[3] = Global_262145.f_29907 /* Tunable: H4_TARGET_WEIGHTING_PINK_DIAMOND_BOOST */;
	}
	else
	{
		uVar0[0] = Global_262145.f_29899 /* Tunable: H4_TARGET_WEIGHTING_TEQUILA */;
		uVar0[1] = Global_262145.f_29900 /* Tunable: H4_TARGET_WEIGHTING_PEARL_NECKLACE */;
		uVar0[2] = Global_262145.f_29901 /* Tunable: H4_TARGET_WEIGHTING_BEARER_BONDS */;
		uVar0[3] = Global_262145.f_29902 /* Tunable: H4_TARGET_WEIGHTING_PINK_DIAMOND */;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		fVar1 = (fVar1 + uVar0[iVar4]);
		iVar4++;
	}
	fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar1);
	iVar4 = 0;
	while (iVar4 < 4)
	{
		fVar2 = (fVar2 + uVar0[iVar4]);
		if (fVar3 < fVar2)
		{
			__LIB_0__::func_413(9489, iVar4, -1, 1, 0);
			return;
		}
		iVar4++;
	}
}

bool func_521(bool bParam0)//Position - 0x10EAB
{
	if (bParam0)
	{
		return BitTest(__LIB_0__::func_369(9511, -1, 0), 1);
	}
	return __LIB_1__::func_167(PLAYER::PLAYER_ID());
}

void func_522()//Position - 0x10ECE
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(4, 7 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(8, 11 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(12, 15 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	__LIB_0__::func_413(9490, iVar1, -1, 1, 0);
	iVar1 = 0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(4, 7 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(8, 11 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(12, 15 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	__LIB_0__::func_413(9491, iVar1, -1, 1, 0);
	iVar1 = 0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(4, 7 + 1);
	if (!__LIB_1__::func_167(PLAYER::PLAYER_ID()))
	{
		iVar0 = 6;
	}
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(8, 11 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(12, 15 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	__LIB_0__::func_413(9492, iVar1, -1, 1, 0);
}

void func_523(int iParam0)//Position - 0x10FED
{
	if (iParam0 == 6)
	{
		iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0 + 1, 6);
	}
	__LIB_0__::func_413(9493, iParam0, -1, 1, 0);
}

int func_524()//Position - 0x11011
{
	return func_525(1);
}

int func_525(bool bParam0)//Position - 0x1101E
{
	if (bParam0)
	{
		return BitTest(__LIB_0__::func_369(9511, -1, 0), 0);
	}
	return __LIB_7__::func_245(PLAYER::PLAYER_ID());
}

bool func_527()//Position - 0x1105F
{
	return func_521(1);
}

int func_528(var uParam0)//Position - 0x1106C
{
	return __LIB_42__::func_346(0);
}

int func_531()//Position - 0x110C6
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_157) && __LIB_0__::func_156(iLocal_158, 1, 1))
	{
		if ((!__LIB_0__::func_983() && !__LIB_1__::func_16()) && !__LIB_5__::func_133())
		{
			if ((INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iLocal_157) != joaat("Rm_Command") && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iLocal_157) != joaat("Rm_Stair1")) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iLocal_157) != joaat("Rm_Room2"))
			{
				return 1;
			}
		}
	}
	if (Global_1946250.f_3616 == 147)
	{
		return 1;
	}
	return 0;
}

char* func_532(int iParam0)//Position - 0x1114B
{
	switch (iParam0)
	{
		case 0:
			if (!__LIB_1__::func_167(iLocal_158) && !__LIB_9__::func_233(iLocal_158, 0))
			{
				return "HIP_HELP_BBOSS2" /* GXT: Register as a VIP, CEO or MC President to access the Planning Screen ~HUD_COLOUR_GREEN~~BLIP_MP_HEIST~~s~ and begin the setup for The Cayo Perico Heist. */;
			}
			return "HIP_HELP_BBOSS" /* GXT: Register as a VIP, CEO or MC President to gain access to the Planning Screen. */;
		default:
	}
	return "";
}

float func_536(int iParam0)//Position - 0x111AA
{
	switch (iParam0)
	{
		case 0:
			return 69f;
		default:
	}
	return 0f;
}

Vector3 func_537(int iParam0)//Position - 0x111C8
{
	switch (iParam0)
	{
		case 0:
			if (func_966() == 0)
			{
				return -89.3034f, -0.1435f, 180f;
			}
			return -89.5003f, -0.204f, 180f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_538(int iParam0)//Position - 0x1120C
{
	switch (iParam0)
	{
		case 0:
			if (func_966() == 0)
			{
				return 1561.1614f, 384.824f, -48.6215f;
			}
			return 1561.1604f, 384.8204f, -48.9135f;
		default:
	}
	return 0f, 0f, 0f;
}

void func_539(var uParam0, int iParam1, int* iParam2)//Position - 0x11250
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	if ((iLocal_131 || iLocal_132) || (Local_174.f_6 != -1 && !func_436(Local_174.f_6)))
	{
		return;
	}
	iVar0 = uParam0->f_806;
	func_550(uParam0, iParam1, iVar0);
	switch (iParam1)
	{
		case 0:
			if (iLocal_152 != 0)
			{
				return;
			}
			__LIB_35__::func_800(uParam0->f_711, 188);
			func_548(uParam0->f_711);
			break;
		case 1:
			if (iLocal_152 != 0)
			{
				return;
			}
			__LIB_35__::func_800(uParam0->f_711, 187);
			func_548(uParam0->f_711);
			break;
		case 2:
			if (func_358(iVar0))
			{
				func_546(uParam0, iVar0, iParam1);
			}
			else
			{
				__LIB_35__::func_800(uParam0->f_711, 189);
				func_548(uParam0->f_711);
			}
			break;
		case 3:
			if (func_358(iVar0))
			{
				func_546(uParam0, iVar0, iParam1);
			}
			else
			{
				__LIB_35__::func_800(uParam0->f_711, 190);
				func_548(uParam0->f_711);
			}
			break;
		case 8:
			if (Local_174.f_6 != -1)
			{
				return;
			}
			__LIB_35__::func_800(uParam0->f_711, 205);
			func_548(uParam0->f_711);
			break;
		case 9:
			if (Local_174.f_6 != -1)
			{
				return;
			}
			__LIB_35__::func_800(uParam0->f_711, 206);
			func_548(uParam0->f_711);
			break;
		case 4:
			if (func_545(uParam0, iVar0))
			{
				__LIB_35__::func_800(uParam0->f_711, 201);
				func_544(uParam0->f_711);
				func_548(uParam0->f_711);
			}
			if (iVar0 == 5 || iVar0 == 65)
			{
				if (!bLocal_137)
				{
					bLocal_137 = true;
				}
			}
			break;
		case 5:
			if (iLocal_152 != 0)
			{
				func_542(uParam0);
			}
			else if (func_407(iVar0))
			{
				if (Local_174.f_6 == -1)
				{
					if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
					{
						uParam0->f_1086 = 1;
					}
					else
					{
						MISC::SET_BIT(iParam2, 0);
					}
				}
			}
			else
			{
				__LIB_35__::func_800(uParam0->f_711, 202);
				func_548(uParam0->f_711);
				if (func_541(iVar0))
				{
					if (bLocal_137)
					{
						bLocal_137 = false;
					}
				}
			}
			break;
		case 6:
			if (iLocal_152 != 0)
			{
				return;
			}
			if (!func_406(uParam0))
			{
				return;
			}
			bLocal_137 = !bLocal_137;
			break;
		case 7:
			if (iLocal_152 != 0)
			{
				return;
			}
			if (Local_174.f_6 != -1)
			{
				return;
			}
			iLocal_135 = !iLocal_135;
			break;
		case 15:
			if (func_358(iVar0))
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_823.f_51[func_540(iVar0)]);
				Var2 = { __LIB_0__::func_819(iVar1) };
				func_34(uParam0, 5);
				NETWORK::NETWORK_SHOW_PROFILE_UI(&Var2);
			}
			break;
	}
}

int func_540(int iParam0)//Position - 0x114EA
{
	switch (iParam0)
	{
		case 105:
			return 0;
		case 106:
			return 1;
		case 107:
			return 2;
		case 108:
			return 3;
		default:
	}
	return -1;
}

int func_541(int iParam0)//Position - 0x11522
{
	switch (iParam0)
	{
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 85:
		case 86:
			return 1;
		default:
	}
	return 0;
}

void func_542(var uParam0)//Position - 0x11566
{
	iLocal_152 = 0;
	uParam0->f_707 = 1;
	func_543(uParam0->f_711);
}

void func_543(int iParam0)//Position - 0x11581
{
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iParam0, "HIDE_OVERLAY");
}

void func_544(int iParam0)//Position - 0x11593
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "REQUEST_CURRENT_SELECTION");
	iLocal_130 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
	iLocal_132 = 1;
}

int func_545(var uParam0, int iParam1)//Position - 0x115B1
{
	switch (iParam1)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1084 != iLocal_158)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_546(var uParam0, int iParam1, int iParam2)//Position - 0x115FB
{
	int iVar0;
	int iVar1;
	if (uParam0->f_1084 != PLAYER::PLAYER_ID())
	{
		return;
	}
	if (uParam0->f_823.f_49 == 1)
	{
		func_34(uParam0, 4);
		return;
	}
	switch (iParam2)
	{
		case 2:
			iVar0 = -5;
			break;
		case 3:
			if (uParam0->f_823.f_56[4] >= 5)
			{
				iVar0 = 5;
			}
			break;
	}
	iVar1 = func_540(iParam1);
	func_547(uParam0, iVar1, iVar0);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar1++;
	}
}

void func_547(var uParam0, int iParam1, int iParam2)//Position - 0x1167A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = 15;
	iVar1 = 85;
	if (uParam0->f_823.f_49 == 1)
	{
		iVar1 = 100;
	}
	if (iParam2 < 0)
	{
		iVar2 = uParam0->f_823.f_56[iParam1];
		if (iVar2 < MISC::ABSI(iParam2))
		{
			iParam2 = iVar2;
		}
		if (uParam0->f_823.f_56[iParam1] < iVar0)
		{
			iVar3 = (iVar0 - uParam0->f_823.f_56[iParam1]);
			uParam0->f_823.f_56[iParam1] = (uParam0->f_823.f_56[iParam1] + iVar3);
			func_34(uParam0, 4);
		}
		else if (uParam0->f_823.f_56[iParam1] == iVar0)
		{
			func_34(uParam0, 4);
		}
		else
		{
			if (uParam0->f_823.f_56[4] <= (100 - MISC::ABSI(iParam2)))
			{
				uParam0->f_823.f_56[4] = (uParam0->f_823.f_56[4] + MISC::ABSI(iParam2));
				uParam0->f_823.f_56[iParam1] = (uParam0->f_823.f_56[iParam1] - MISC::ABSI(iParam2));
			}
			if (iParam2 == 0)
			{
				func_34(uParam0, 4);
			}
			else
			{
				func_34(uParam0, 13);
			}
		}
		if (uParam0->f_823.f_56[iParam1] <= iVar0)
		{
			if (!__LIB_0__::func_1("HEIST_NOTE_6" /* GXT: The selected Heist member is at minimum cut. */))
			{
				HUD::CLEAR_HELP(true);
				__LIB_0__::func_151("HEIST_NOTE_6" /* GXT: The selected Heist member is at minimum cut. */, 5000);
			}
		}
	}
	else
	{
		iVar4 = uParam0->f_823.f_56[4];
		if (iVar4 < MISC::ABSI(iParam2))
		{
			iParam2 = iVar4;
		}
		if (uParam0->f_823.f_56[iParam1] > iVar1)
		{
			iVar5 = (uParam0->f_823.f_56[iParam1] - iVar1);
			uParam0->f_823.f_56[4] = (uParam0->f_823.f_56[4] + iVar5);
			func_34(uParam0, 4);
		}
		else if (uParam0->f_823.f_56[iParam1] == iVar1)
		{
			func_34(uParam0, 4);
		}
		else
		{
			if (uParam0->f_823.f_56[4] >= MISC::ABSI(iParam2))
			{
				uParam0->f_823.f_56[4] = (uParam0->f_823.f_56[4] - MISC::ABSI(iParam2));
				uParam0->f_823.f_56[iParam1] = (uParam0->f_823.f_56[iParam1] + MISC::ABSI(iParam2));
			}
			if (iParam2 == 0)
			{
				func_34(uParam0, 4);
			}
			else
			{
				func_34(uParam0, 12);
			}
		}
		if (uParam0->f_823.f_56[iParam1] >= iVar1)
		{
			if (!__LIB_0__::func_1("HEIST_NOTE_5" /* GXT: The selected Heist member is at maximum cut. */))
			{
				HUD::CLEAR_HELP(true);
				__LIB_0__::func_151("HEIST_NOTE_5" /* GXT: The selected Heist member is at maximum cut. */, 5000);
			}
		}
	}
}

void func_548(int iParam0)//Position - 0x118B2
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "REQUEST_CURRENT_ROLLOVER");
	iLocal_129 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
	iLocal_131 = 1;
}

void func_550(var uParam0, int iParam1, int iParam2)//Position - 0x118FC
{
	if (!__LIB_9__::func_233(uParam0->f_1084, 0) && !__LIB_1__::func_167(uParam0->f_1084))
	{
		switch (iParam1)
		{
			case 0:
			case 1:
			case 8:
			case 9:
				func_34(uParam0, 4);
				return;
				break;
			}
	}
	switch (iParam1)
	{
		case 0:
			if (func_358(iParam2) && uParam0->f_823.f_49 == 1)
			{
				func_34(uParam0, 4);
				return;
			}
			if (iLocal_152 == 0)
			{
				func_34(uParam0, 0);
				if (!func_358(iParam2))
				{
					if (func_553(iParam2))
					{
						func_34(uParam0, 21);
					}
					else
					{
						func_34(uParam0, 22);
					}
				}
			}
			else
			{
				func_34(uParam0, 4);
			}
			break;
		case 1:
			if (func_358(iParam2) && uParam0->f_823.f_49 == 1)
			{
				func_34(uParam0, 4);
				return;
			}
			if (iLocal_152 == 0)
			{
				func_34(uParam0, 0);
				if (!func_358(iParam2))
				{
					if (func_553(iParam2))
					{
						func_34(uParam0, 21);
					}
					else
					{
						func_34(uParam0, 22);
					}
				}
			}
			else
			{
				func_34(uParam0, 4);
			}
			break;
		case 2:
			if (iLocal_152 == 0)
			{
				if (iParam2 == 1000)
				{
					func_34(uParam0, 1);
				}
				else if (!func_358(iParam2))
				{
					func_34(uParam0, 4);
				}
			}
			else if (iLocal_152 > 0)
			{
				if (iParam2 == 1002)
				{
					func_34(uParam0, 1);
				}
				else
				{
					func_34(uParam0, 4);
				}
			}
			break;
		case 3:
			if (iLocal_152 == 0)
			{
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					if ((func_8(iParam2, 2) && !func_358(iParam2)) && func_551(uParam0))
					{
						func_34(uParam0, 1);
					}
					else
					{
						func_34(uParam0, 4);
					}
				}
				else if (func_8(iParam2, 2) && iParam2 != 1000)
				{
					func_34(uParam0, 1);
				}
				else
				{
					func_34(uParam0, 4);
				}
			}
			else if (iLocal_152 > 0)
			{
				if (iParam2 == 1001)
				{
					func_34(uParam0, 1);
				}
				else
				{
					func_34(uParam0, 4);
				}
			}
			break;
		case 8:
			func_34(uParam0, 1);
			break;
		case 9:
			func_34(uParam0, 1);
			break;
		case 4:
			if (bLocal_141)
			{
				func_34(uParam0, 5);
			}
			else
			{
				func_34(uParam0, 7);
			}
			break;
		case 5:
			if (!func_407(iParam2))
			{
				func_34(uParam0, 6);
			}
			break;
		case 6:
			if (func_406(uParam0) && iLocal_152 == 0)
			{
				func_34(uParam0, 8);
			}
			break;
		case 7:
			if (func_360(uParam0, iParam2) && iLocal_152 == 0)
			{
				func_34(uParam0, 9);
			}
			break;
	}
}

int func_551(var uParam0)//Position - 0x11BB3
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0->f_806;
	if (func_552(iVar0) != 2)
	{
		return 0;
	}
	if (uParam0->f_1084 == PLAYER::PLAYER_ID() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (Global_1975224[uParam0->f_1084 /*53*/].f_5.f_39 == 0)
		{
			return 0;
		}
		if (Global_1975224[uParam0->f_1084 /*53*/].f_5.f_40 == -1)
		{
			return 0;
		}
		if (Global_1975224[uParam0->f_1084 /*53*/].f_5.f_41 == -1)
		{
			return 0;
		}
		if (Global_1975224[uParam0->f_1084 /*53*/].f_5.f_42 == -1)
		{
			return 0;
		}
		if (Global_1975224[uParam0->f_1084 /*53*/].f_5.f_43 == 0)
		{
			return 0;
		}
		if (Global_1974423[uParam0->f_1084 /*25*/].f_12[4] > 0)
		{
			return 0;
		}
		iVar1 = 1;
		while (iVar1 <= 3)
		{
			if (uParam0->f_823.f_51[iVar1] == -1)
			{
			}
			else if (uParam0->f_823.f_67[iVar1] == 0)
			{
				return 0;
			}
			iVar1++;
		}
	}
	return 1;
}

int func_552(int iParam0)//Position - 0x11CA9
{
	if (func_8(iParam0, 0))
	{
		return 0;
	}
	else if (func_8(iParam0, 1))
	{
		return 1;
	}
	return 2;
}

int func_553(int iParam0)//Position - 0x11CD1
{
	switch (iParam0)
	{
		case 36:
		case 37:
		case 38:
		case 39:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 91:
		case 92:
			return 0;
		default:
	}
	return 1;
}

void func_554(var uParam0)//Position - 0x11D39
{
	char* sVar0;
	char* sVar1;
	if (BitTest(Global_1941031.f_233, 1))
	{
		sVar1 = "hs4f_int";
		sVar0 = "cutscene_ui_3_screen_island_2";
	}
	else if (BitTest(Global_1941031.f_233, 0))
	{
		sVar1 = "hs4f_int";
		sVar0 = "cutscene_ui_3_screen_island_3";
	}
	HUD::SET_TEXT_RENDER_ID(uParam0->f_700);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(73, 73);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
	GRAPHICS::DRAW_SPRITE_NAMED_RENDERTARGET(sVar1, sVar0, 0.5f, 0.75f, 1f, 0.5f, 0f, 255, 255, 255, 255, 0);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
}

char* func_560()//Position - 0x11DF5
{
	return "ISLAND_HEIST_BOARD";
}

int func_561()//Position - 0x11E01
{
	return joaat("h4_int_sub_command_table");
}

char* func_562()//Position - 0x11E0E
{
	return "submarine_table";
}

void func_563(var uParam0)//Position - 0x11E1A
{
	switch (uParam0->f_726)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !iLocal_143)
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HS4F_INT", false);
				iLocal_143 = 1;
			}
			func_849(uParam0);
			break;
		case 3:
			func_826(uParam0);
			break;
		case 4:
			func_822(uParam0);
			func_597(uParam0);
			func_826(uParam0);
			func_564(uParam0);
			break;
		case 5:
			break;
	}
}

void func_564(var uParam0)//Position - 0x11EA3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iVar2 = uParam0->f_1084;
	if (iVar2 == -1)
	{
		return;
	}
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iVar0 >= 4)
			{
				if (Global_1974423[iVar3 /*25*/].f_12[4] != uParam0->f_823.f_56[4])
				{
					Global_1974423[iVar3 /*25*/].f_12[4] = uParam0->f_823.f_56[4];
				}
			}
			else
			{
				if (Global_1974423[iVar3 /*25*/].f_12[iVar0] != uParam0->f_823.f_56[iVar0])
				{
					Global_1974423[iVar3 /*25*/].f_12[iVar0] = uParam0->f_823.f_56[iVar0];
					if (uParam0->f_823.f_51[iVar0] == PLAYER::NETWORK_PLAYER_ID_TO_INT())
					{
						Global_2715699.f_6568 = Global_1974423[iVar3 /*25*/].f_12[iVar0];
						Global_1944587.f_29 = Global_2715699.f_6568;
					}
					iLocal_147 = 1;
				}
				if (Global_1974423[iVar3 /*25*/].f_2[iVar0] != uParam0->f_823.f_51[iVar0])
				{
					Global_1974423[iVar3 /*25*/].f_2[iVar0] = uParam0->f_823.f_51[iVar0];
				}
				iVar1 = 0;
				while (iVar1 <= 31)
				{
					if (uParam0->f_823.f_51[iVar0] != iVar1 || uParam0->f_823.f_51[iVar0] == uParam0->f_1084)
					{
					}
					else if (uParam0->f_823.f_67[iVar0] != Global_1974423[iVar1 /*25*/].f_7[iVar0])
					{
						uParam0->f_823.f_67[iVar0] = Global_1974423[iVar1 /*25*/].f_7[iVar0];
						if (uParam0->f_823.f_67[iVar0] == 1)
						{
							func_34(uParam0, 16);
						}
						else
						{
							func_34(uParam0, 17);
						}
						Global_1974423[iVar3 /*25*/].f_7[iVar0] = uParam0->f_823.f_67[iVar0];
						iLocal_147 = 1;
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
	else
	{
		if (Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 != Global_1975224[uParam0->f_1084 /*53*/].f_5.f_39)
		{
			func_592(uParam0, func_596(Global_1975224[uParam0->f_1084 /*53*/].f_5.f_39));
		}
		if (Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 != Global_1975224[uParam0->f_1084 /*53*/].f_5.f_40)
		{
			func_575(uParam0, func_591(Global_1975224[uParam0->f_1084 /*53*/].f_5.f_40));
		}
		if (Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_41 != Global_1975224[uParam0->f_1084 /*53*/].f_5.f_41)
		{
			func_572(uParam0, func_574(Global_1975224[uParam0->f_1084 /*53*/].f_5.f_41));
		}
		if (Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_42 != Global_1975224[uParam0->f_1084 /*53*/].f_5.f_42)
		{
			func_569(uParam0, func_571(Global_1975224[uParam0->f_1084 /*53*/].f_5.f_42));
		}
		if (Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_43 != Global_1975224[uParam0->f_1084 /*53*/].f_5.f_43)
		{
			func_565(uParam0, func_568(Global_1975224[uParam0->f_1084 /*53*/].f_5.f_43));
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (uParam0->f_823.f_51[iVar0] != PLAYER::NETWORK_PLAYER_ID_TO_INT())
			{
			}
			else
			{
				Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_7[iVar0] = uParam0->f_823.f_67[iVar0];
				iVar4 = iVar0;
			}
			iVar0++;
		}
		bVar5 = true;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (Global_1974423[iVar2 /*25*/].f_2[iVar0] != 0)
			{
				bVar5 = false;
			}
			iVar0++;
		}
		if (bVar5)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iVar0 >= 4)
			{
				if (uParam0->f_823.f_56[4] != Global_1974423[iVar2 /*25*/].f_12[4])
				{
					uParam0->f_823.f_56[4] = Global_1974423[iVar2 /*25*/].f_12[4];
				}
			}
			else
			{
				if (uParam0->f_823.f_56[iVar0] != Global_1974423[iVar2 /*25*/].f_12[iVar0])
				{
					uParam0->f_823.f_56[iVar0] = Global_1974423[iVar2 /*25*/].f_12[iVar0];
					if (iVar4 == iVar0)
					{
						Global_2715699.f_6568 = Global_1974423[iVar2 /*25*/].f_12[iVar0];
						Global_1944587.f_29 = Global_2715699.f_6568;
					}
					iLocal_147 = 1;
				}
				if (uParam0->f_823.f_51[iVar0] != Global_1974423[iVar2 /*25*/].f_2[iVar0])
				{
					uParam0->f_823.f_51[iVar0] = Global_1974423[iVar2 /*25*/].f_2[iVar0];
				}
				if (uParam0->f_823.f_67[iVar0] != Global_1974423[iVar2 /*25*/].f_7[iVar0])
				{
					if (iVar4 != iVar0)
					{
						uParam0->f_823.f_67[iVar0] = Global_1974423[iVar2 /*25*/].f_7[iVar0];
						if (uParam0->f_823.f_67[iVar0] == 1)
						{
							func_34(uParam0, 16);
						}
						else
						{
							func_34(uParam0, 17);
						}
						iLocal_147 = 1;
					}
				}
			}
			iVar0++;
		}
	}
}

void func_565(var uParam0, int iParam1)//Position - 0x12355
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	func_567(uParam0);
	func_566(uParam0->f_711, iParam1, 1);
	switch (iParam1)
	{
		case 91:
			Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_43 = 1;
			break;
		case 92:
			Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_43 = 2;
			break;
	}
}

void func_566(int iParam0, int iParam1, bool bParam2)//Position - 0x123B1
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_FINALE_ITEM_SELECTED");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_567(var uParam0)//Position - 0x123D4
{
	func_566(uParam0->f_711, 91, 0);
	func_566(uParam0->f_711, 92, 0);
}

int func_568(int iParam0)//Position - 0x123F4
{
	switch (iParam0)
	{
		case 1:
			return 91;
		case 2:
			return 92;
		default:
	}
	return 0;
}

void func_569(var uParam0, int iParam1)//Position - 0x1241A
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	func_570(uParam0);
	func_566(uParam0->f_711, iParam1, 1);
	switch (iParam1)
	{
		case 87:
			Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_42 = 0;
			break;
		case 88:
			Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_42 = 1;
			break;
		case 89:
			Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_42 = 2;
			break;
		case 90:
			Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_42 = 3;
			break;
	}
}

void func_570(var uParam0)//Position - 0x124A6
{
	func_566(uParam0->f_711, 87, 0);
	func_566(uParam0->f_711, 88, 0);
	func_566(uParam0->f_711, 89, 0);
	func_566(uParam0->f_711, 90, 0);
}

int func_571(int iParam0)//Position - 0x124DE
{
	switch (iParam0)
	{
		case 0:
			return 87;
		case 1:
			return 88;
		case 2:
			return 89;
		case 3:
			return 90;
		default:
	}
	return 0;
}

void func_572(var uParam0, int iParam1)//Position - 0x1251A
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	func_573(uParam0);
	func_566(uParam0->f_711, iParam1, 1);
	switch (iParam1)
	{
		case 85:
			Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_41 = 0;
			break;
		case 86:
			Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_41 = 5;
			break;
	}
}

void func_573(var uParam0)//Position - 0x12576
{
	func_566(uParam0->f_711, 85, 0);
	func_566(uParam0->f_711, 86, 0);
}

int func_574(int iParam0)//Position - 0x12596
{
	switch (iParam0)
	{
		case 0:
			return 85;
		case 5:
			return 86;
		default:
	}
	return 0;
}

void func_575(var uParam0, int iParam1)//Position - 0x125BC
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	func_590(uParam0);
	func_566(uParam0->f_711, iParam1, 1);
	if (iParam1 == 84)
	{
		func_589(uParam0);
	}
	else
	{
		func_576(uParam0);
	}
	switch (iParam1)
	{
		case 77:
			Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 0;
			break;
		case 78:
			Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 1;
			break;
		case 79:
			Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 2;
			break;
		case 80:
			Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 3;
			break;
		case 81:
			Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 4;
			break;
		case 82:
			Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 5;
			break;
		case 83:
			Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 6;
			break;
		case 84:
			Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 7;
			break;
	}
}

void func_576(var uParam0)//Position - 0x126BE
{
	struct<9> Var0;
	int iVar1;
	int iVar2;
	func_566(uParam0->f_711, 85, 0);
	func_588(uParam0->f_711, 85);
	func_566(uParam0->f_711, 86, 0);
	func_588(uParam0->f_711, 86);
	Local_123[0 /*9*/] = { Var0 };
	Local_123[1 /*9*/] = { Var0 };
	if (__LIB_9__::func_233(uParam0->f_1084, 8))
	{
		func_579(uParam0, &(Local_123[iVar1 /*9*/]), 65, 85);
		iVar1++;
	}
	if (__LIB_9__::func_233(uParam0->f_1084, 9))
	{
		func_579(uParam0, &(Local_123[iVar1 /*9*/]), 65, 86);
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		func_577(uParam0->f_711, Local_123[iVar2 /*9*/], 0);
		iVar2++;
	}
	Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_41 = -1;
}

void func_577(int iParam0, struct<9> Param1, bool bParam2)//Position - 0x1278E
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "ADD_FINALE_ITEM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_2);
	if (bParam2)
	{
		__LIB_0__::func_700(Param1.f_3);
	}
	else
	{
		__LIB_0__::func_610(Param1.f_3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Param1.f_4);
		__LIB_0__::func_610(Param1.f_5);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(Param1.f_6);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_7);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Param1.f_8);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_579(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x12803
{
	*uParam1 = 1;
	uParam1->f_1 = iParam2;
	uParam1->f_2 = iParam3;
	uParam1->f_4 = __LIB_0__::func_114(uParam0, iParam3);
	uParam1->f_3 = func_586(uParam0, iParam3);
	uParam1->f_5 = func_584(uParam0, iParam3);
	uParam1->f_6 = func_582(uParam0, iParam3);
	if (func_367(uParam0, iParam3))
	{
		uParam1->f_7 = func_581(uParam0, iParam3);
	}
	else
	{
		uParam1->f_7 = 0;
	}
	uParam1->f_8 = func_580(iParam3);
}

int func_580(int iParam0)//Position - 0x12874
{
	switch (iParam0)
	{
		case 59:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			return 1;
		default:
	}
	return 0;
}

int func_581(var uParam0, int iParam1)//Position - 0x128B2
{
	switch (iParam1)
	{
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 99:
		case 103:
			return 1;
		case 47:
			return 1;
		case 49:
			if (!__LIB_27__::func_386(uParam0->f_1084, 5) && !__LIB_27__::func_386(uParam0->f_1084, 6))
			{
				return 2;
			}
			return 1;
		default:
	}
	return 2;
}

char* func_582(var uParam0, int iParam1)//Position - 0x12926
{
	switch (iParam1)
	{
		case 1:
			return func_583(uParam0);
		case 2:
			return "ADDITIONAL_LOOT";
		case 3:
			return "INFILTRATION_POINTS";
		case 4:
			return "ESCAPE_POINTS";
		case 5:
			return "COMPOUND_ENTRY_POINTS";
		case 6:
			return "POINTS_OF_INTEREST";
		case 7:
			return "CASH";
		case 8:
			return "WEED";
		case 9:
			return "COCAINE";
		case 10:
			return "GOLD" /* GXT: Gold */;
		case 11:
			return "PAINTINGS";
		case 12:
			return "AIRSTRIP";
		case 13:
			return "PARACHUTING";
		case 14:
			return "WEST_BEACH";
		case 15:
			return "MAIN_DOCK";
		case 16:
			return "NORTH_DOCK";
		case 17:
			return "NORTH_DROP_ZONE";
		case 18:
			return "SOUTH_DROP_ZONE";
		case 19:
			return "DRAINAGE_TUNNEL";
		case 20:
			return "AIRSTRIP";
		case 21:
			return "MAIN_DOCK";
		case 22:
			return "NORTH_DOCK";
		case 23:
			return "SUBMARINE";
		case 30:
			return "POWER_STATION";
		case 31:
			return "CONTROL_TOWER";
		case 32:
			return "BOLT_CUTTERS";
		case 33:
			return "GRAPPLING_EQUIPMENT";
		case 34:
			return "GUARD_UNIFORM";
		case 35:
			return "GUARD_TRUCK";
		case 24:
			return "MAIN_GATE";
		case 25:
			return "NORTH_WALL";
		case 26:
			return "NORTH_SIDE_GATE";
		case 27:
			return "SOUTH_WALL";
		case 28:
			return "SOUTH_SIDE_GATE";
		case 29:
			return "DRAINAGE_TUNNEL";
		case 36:
			return "";
		case 37:
			return "";
		case 38:
			return "";
		case 39:
			return "";
		case 40:
			return "SUBMARINE";
		case 41:
			return "BOMBER";
		case 42:
			return "PLANE";
		case 43:
			return "HELICOPTER";
		case 44:
			return "PATROL_BOAT";
		case 45:
			return "SMUGGLER_BOAT";
		case 46:
			return "BOMBER";
		case 47:
			return "PILOT";
		case 48:
			return "HELICOPTER";
		case 49:
			return "PILOT";
		case 50:
			return "DEMOLITION_CHARGES";
		case 53:
			return "ACETYLENE_TORCH";
		case 51:
			return __LIB_1__::func_295(__LIB_27__::func_387(uParam0->f_1084) == 11, "SAFE_CODE", "PLASMA_CUTTER");
		case 52:
			return "FINGERPRINT";
		case 54:
			return "SHOTGUN";
		case 55:
			return "BULLPUP_RIFLE";
		case 56:
			return "SNIPER";
		case 57:
			return "SMG";
		case 58:
			return "ASSAULT_RIFLE";
		case 59:
			return "SUPPRESSORS";
		case 60:
			return "WEAPONS";
		case 61:
			return "ARMOR";
		case 62:
			return "BACKUP";
		case 63:
			return "";
		case 64:
			return "";
		case 65:
			return "";
		case 66:
			return "";
		case 67:
			return "";
		case 68:
			return "";
		case 69:
			return "";
		case 70:
			return "";
		case 71:
			return "SUBMARINE";
		case 72:
			return "BOMBER";
		case 73:
			return "PLANE";
		case 74:
			return "HELICOPTER";
		case 75:
			return "PATROL_BOAT";
		case 76:
			return "SMUGGLER_BOAT";
		case 77:
			return "AIRSTRIP";
		case 78:
			return "PARACHUTING";
		case 79:
			return "WEST_BEACH";
		case 80:
			return "MAIN_DOCK";
		case 81:
			return "NORTH_DOCK";
		case 82:
			return "NORTH_DROP_ZONE";
		case 83:
			return "SOUTH_DROP_ZONE";
		case 84:
			return "DRAINAGE_TUNNEL";
		case 85:
			return "MAIN_GATE";
		case 86:
			return "DRAINAGE_TUNNEL";
		case 87:
			return "AIRSTRIP";
		case 88:
			return "MAIN_DOCK";
		case 89:
			return "NORTH_DOCK";
		case 90:
			return "SUBMARINE";
		case 91:
			return "";
		case 92:
			return "";
		case 93:
			return "SHOTGUN";
		case 94:
			return "BULLPUP_RIFLE";
		case 95:
			return "SNIPER";
		case 96:
			return "SMG";
		case 97:
			return "ASSAULT_RIFLE";
		case 98:
			return "SUPPRESSORS";
		case 99:
			return "AIRSTRIKE_SUPPORT";
		case 100:
			return "HEAVY_WEAPON_SUPPORT";
		case 101:
			return "SNIPER_SUPPORT";
		case 102:
			return "HELICOPTER_SUPPORT";
		case 103:
			return "SPY_DRONE_SUPPORT";
		case 104:
			return "WEAPON_STASH_SUPPORT";
		default:
	}
	return "";
}

char* func_583(var uParam0)//Position - 0x12E97
{
	if (__LIB_9__::func_233(uParam0->f_1084, 0))
	{
		switch (__LIB_8__::func_749(uParam0->f_1084))
		{
			case 0:
				return "GATHER_INTEL_TEQUILA";
			case 1:
				return "GATHER_INTEL_NECKLACE";
			case 2:
				return "GATHER_INTEL_BONDS";
			case 3:
				return "GATHER_INTEL_DIAMOND";
			case 4:
				return "GATHER_INTEL_FILES";
			case 5:
				return "GATHER_INTEL_STATUE";
			}
		default:
	}
	return "GATHER_INTEL";
}

char* func_584(var uParam0, int iParam1)//Position - 0x12F0C
{
	switch (iParam1)
	{
		case 1:
			if (!__LIB_1__::func_167(uParam0->f_1084))
			{
				if (!__LIB_9__::func_233(uParam0->f_1084, 0))
				{
					return "H4P_INT0_GAT_D1" /* GXT: Find the Madrazo Files on Cayo Perico. */;
				}
			}
			else if (!__LIB_9__::func_233(uParam0->f_1084, 0))
			{
				return "H4P_INT0_GAT_D2" /* GXT: Find the primary target on Cayo Perico. */;
			}
			return "H4P_INT0_GAT_D3" /* GXT: Gather additional intel on Cayo Perico. */;
		case 2:
			return "H4P_INT0_LOOT_D" /* GXT: Secondary targets scoped */;
		case 3:
			return "H4P_INT0_ENTR_D" /* GXT: Infiltration points scoped */;
		case 4:
			return "H4P_INT0_EXIT_D" /* GXT: Escape points scoped */;
		case 5:
			return "H4P_INT0_COMP_D" /* GXT: Compound entry points scoped */;
		case 6:
			return "H4P_INT0_ITEM_D" /* GXT: Points of interest scoped */;
		case 7:
			return "H4P_INT2_CASH_D" /* GXT: Secondary target scoped: Cash */;
		case 8:
			return "H4P_INT2_WEED_D" /* GXT: Secondary target scoped: Weed */;
		case 9:
			return "H4P_INT2_COKE_D" /* GXT: Secondary target scoped: Cocaine */;
		case 10:
			return "H4P_INT2_GOLD_D" /* GXT: Secondary target scoped: Gold */;
		case 11:
			return "H4P_INT2_PAIN_D" /* GXT: Secondary target scoped: Painting */;
		case 12:
			return "H4P_INT3_AIRS_D" /* GXT: Infiltration Point: Airstrip */;
		case 13:
			return "H4P_INT3_PARA_D" /* GXT: Infiltration Point: HALO Jump */;
		case 14:
			return "H4P_INT3_BEAC_D" /* GXT: Infiltration Point: West Beach */;
		case 15:
			return "H4P_INT3_MDCK_D" /* GXT: Infiltration Point: Main Dock */;
		case 16:
			return "H4P_INT3_NDCK_D" /* GXT: Infiltration Point: North Dock */;
		case 17:
			return "H4P_INT3_NDRP_D" /* GXT: Infiltration Point: North Drop Zone */;
		case 18:
			return "H4P_INT3_SDRP_D" /* GXT: Infiltration Point: South Drop Zone */;
		case 19:
			return "H4P_INT3_DTUN_D" /* GXT: Infiltration Point: Drainage Tunnel */;
		case 20:
			return "H4P_INT4_AIRS_D" /* GXT: Escape point: Airstrip */;
		case 21:
			return "H4P_INT4_MDCK_D" /* GXT: Escape point: Main Dock */;
		case 22:
			return "H4P_INT4_NDCK_D" /* GXT: Escape point: North Dock */;
		case 23:
			return "H4P_INT4_SUBM_D" /* GXT: Escape point: Kosatka */;
		case 30:
			return "H4P_INT6_PWRS_D" /* GXT: Point of interest: Power Station */;
		case 31:
			return "H4P_INT6_CTOW_D" /* GXT: Point of interest: Control Tower */;
		case 32:
			return "H4P_INT6_BCUT_D" /* GXT: Point of interest: Bolt Cutters */;
		case 33:
			return "H4P_INT6_GRAP_D" /* GXT: Point of interest: Grappling Equipment */;
		case 34:
			return "H4P_INT6_UNIF_D" /* GXT: Point of interest: Guard Clothing */;
		case 35:
			return "H4P_INT6_TROJ_D" /* GXT: Point of interest: Supply Truck */;
		case 24:
			return "H4P_INT5_MGAT_D" /* GXT: Compound entry point: Main Gate */;
		case 25:
			return "H4P_INT5_NWAL_D" /* GXT: Compound entry point: North Wall */;
		case 26:
			return "H4P_INT5_NSGT_D" /* GXT: Compound entry point: North Gate */;
		case 27:
			return "H4P_INT5_SWAL_D" /* GXT: Compound entry point: South Wall */;
		case 28:
			return "H4P_INT5_SSGT_D" /* GXT: Compound entry point: South Gate */;
		case 29:
			return "H4P_INT5_DTUN_D" /* GXT: Compound entry point: Drainage Tunnel */;
		case 36:
			return "H4P_PRP0_APVH_D" /* GXT: Acquire an approach vehicle to get to Cayo Perico */;
		case 37:
			return "H4P_PRP0_EQUI_D" /* GXT: Acquire the equipment needed for the heist */;
		case 38:
			return "H4P_PRP0_WEPL_D" /* GXT: Acquire a weapon loadout to be used during the heist */;
		case 39:
			return "H4P_PRP0_DISR_D" /* GXT: Disrupt El Rubio's security on Cayo Perico */;
		case 40:
			return __LIB_1__::func_295(__LIB_9__::func_950(uParam0->f_1084, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		case 41:
			return __LIB_1__::func_295(__LIB_9__::func_950(uParam0->f_1084, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		case 42:
			return __LIB_1__::func_295(__LIB_9__::func_950(uParam0->f_1084, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		case 43:
			return __LIB_1__::func_295(__LIB_9__::func_950(uParam0->f_1084, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		case 44:
			return __LIB_1__::func_295(__LIB_9__::func_950(uParam0->f_1084, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		case 45:
			return __LIB_1__::func_295(__LIB_9__::func_950(uParam0->f_1084, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		case 46:
			return __LIB_1__::func_295(__LIB_9__::func_950(uParam0->f_1084, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		case 47:
			return __LIB_1__::func_295(__LIB_9__::func_950(uParam0->f_1084, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		case 48:
			return __LIB_1__::func_295(__LIB_9__::func_950(uParam0->f_1084, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		case 49:
			return __LIB_1__::func_295(__LIB_9__::func_950(uParam0->f_1084, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		case 50:
			return __LIB_1__::func_295(__LIB_9__::func_233(uParam0->f_1084, 9), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		case 53:
			return __LIB_1__::func_295(__LIB_9__::func_233(uParam0->f_1084, 8), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		case 51:
			return "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */;
		case 52:
			return "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */;
		case 54:
			return "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */;
		case 55:
			return "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */;
		case 56:
			return "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */;
		case 57:
			if (!__LIB_11__::func_600(uParam0->f_1084) || !__LIB_13__::func_3(uParam0->f_1084, __LIB_1__::func_721(uParam0->f_1084)))
			{
				return "H4P_PRP3_UKNW_D" /* GXT: ERROR: UNKNOWN */;
			}
			return "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */;
		case 58:
			if (!__LIB_11__::func_600(uParam0->f_1084) || !__LIB_13__::func_3(uParam0->f_1084, __LIB_1__::func_721(uParam0->f_1084)))
			{
				return "H4P_PRP3_UKNW_D" /* GXT: ERROR: UNKNOWN */;
			}
			return "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */;
		case 59:
			return "H4P_PRP3_SUPP_D" /* GXT: SUPPRESSORS. Cost: $5,000 */;
		case 60:
			return "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */;
		case 61:
			return "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */;
		case 62:
			return "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */;
		case 63:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_APRV_2" /* GXT: Select your approach vehicle */, "H4P_FIN0_APRV_D" /* GXT: Approach vehicles acquired */);
		case 64:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_INFI_2" /* GXT: Select your infiltration point */, "H4P_FIN0_INFI_D" /* GXT: Infiltration points scoped */);
		case 65:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_CENT_2" /* GXT: Select your compound entry point */, "H4P_FIN0_CENT_D" /* GXT: Compound entry points scoped */);
		case 66:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_ESCA_2" /* GXT: Select your escape point */, "H4P_FIN0_ESCA_D" /* GXT: Escape points scoped */);
		case 67:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_TIMD_2" /* GXT: Select time of day */, "H4P_FIN0_TIMD_D" /* GXT: Time of day */);
		case 68:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_WEAP_2" /* GXT: Weapon loadout acquired */, "H4P_FIN0_WEAP_D" /* GXT: Weapon loadout acquired */);
		case 69:
			return "H4P_FIN0_SUPP_D" /* GXT: Hire Support Crew */;
		case 70:
			return "H4P_FIN0_CREW_D" /* GXT: Assign crew cuts */;
		case 71:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_SUBM_D" /* GXT: Select Kosatka */, "H4P_FIN1_APRV_D" /* GXT: Approach vehicle acquired */);
		case 72:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_BOMB_D" /* GXT: Select Alkonost */, "H4P_FIN1_APRV_D" /* GXT: Approach vehicle acquired */);
		case 73:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_SMPL_D" /* GXT: Select Velum */, "H4P_FIN1_APRV_D" /* GXT: Approach vehicle acquired */);
		case 74:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_SHEL_D" /* GXT: Select Stealth Annihilator */, "H4P_FIN1_APRV_D" /* GXT: Approach vehicle acquired */);
		case 75:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_PBOA_D" /* GXT: Select Patrol Boat */, "H4P_FIN1_APRV_D" /* GXT: Approach vehicle acquired */);
		case 76:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_SBOA_D" /* GXT: Select Longfin */, "H4P_FIN1_APRV_D" /* GXT: Approach vehicle acquired */);
		case 77:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_AIRS_D" /* GXT: Select airstrip */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		case 78:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_PARA_D" /* GXT: Select HALO jump */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		case 79:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_WBEA_D" /* GXT: Select west beach */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		case 80:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_MDOC_D" /* GXT: Select main dock */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		case 81:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_NDOC_D" /* GXT: Select north dock */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		case 82:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_NDRP_D" /* GXT: Select north drop zone */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		case 83:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_SDRP_D" /* GXT: Select south drop zone */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		case 84:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_DTUN_D" /* GXT: Select drainage tunnel */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		case 85:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN3_MGAT_D" /* GXT: Select main gate */, "H4P_FIN3_CENT_D" /* GXT: Compound entry point scoped */);
		case 86:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN3_DTUN_D" /* GXT: Select drainage tunnel */, "H4P_FIN3_CENT_D" /* GXT: Compound entry point scoped */);
		case 87:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN4_AIRS_D" /* GXT: Select airstrip */, "H4P_FIN4_ESCA_D" /* GXT: Escape points scoped */);
		case 88:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN4_MDOC_D" /* GXT: Select main dock */, "H4P_FIN4_ESCA_D" /* GXT: Escape points scoped */);
		case 89:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN4_NDOC_D" /* GXT: Select north dock */, "H4P_FIN4_ESCA_D" /* GXT: Escape points scoped */);
		case 90:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN4_SUBM_D" /* GXT: Select Kosatka */, "H4P_FIN4_ESCA_D" /* GXT: Escape points scoped */);
		case 91:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN5_TDAY_D" /* GXT: Select day */, "H4P_FIN5_TIMD_D" /* GXT: Time of day */);
		case 92:
			return __LIB_1__::func_295(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN5_TNGT_D" /* GXT: Select night */, "H4P_FIN5_TIMD_D" /* GXT: Time of day */);
		case 93:
			return "H4P_FIN6_SHOT_D" /* GXT: Acquired Aggressor loadout */;
		case 94:
			return "H4P_FIN6_RIFL_D" /* GXT: Acquired Conspirator loadout */;
		case 95:
			return "H4P_FIN6_SNIP_D" /* GXT: Acquired Crack Shot loadout */;
		case 96:
			return "H4P_FIN6_MKSM_D" /* GXT: Acquired Saboteur loadout */;
		case 97:
			return "H4P_FIN6_MKAR_D" /* GXT: Acquired Marksman loadout */;
		case 98:
			return "H4P_FIN6_SUPP_D" /* GXT: Choose to use suppressors */;
		case 99:
			return __LIB_1__::func_295(func_367(uParam0, iParam1), "H4P_PRP3_UKNW_D" /* GXT: ERROR: UNKNOWN */, "H4P_FIN7_AIRS_D" /* GXT: AIRSTRIKE. Cost: $12,000 */);
		case 100:
			return "H4P_FIN7_WDRP_D" /* GXT: SUPPLY DROP. Cost: $15,000 */;
		case 101:
			return "H4P_FIN7_SNIP_D" /* GXT: SNIPER. Cost: $25,000 */;
		case 102:
			return "H4P_FIN7_HELI_D" /* GXT: HELICOPTER BACKUP. Cost: $30,000 */;
		case 103:
			return __LIB_1__::func_295(func_367(uParam0, iParam1), "H4P_PRP3_UKNW_D" /* GXT: ERROR: UNKNOWN */, "H4P_FIN7_SPYD_D" /* GXT: RECON DRONE. Cost: $25,000 */);
		case 104:
			return "H4P_FIN7_WEAP_D" /* GXT: WEAPON STASH. Cost: $10,000 */;
		default:
	}
	return "";
}

char* func_586(var uParam0, int iParam1)//Position - 0x137B0
{
	switch (iParam1)
	{
		case 1:
			return "H4P_INT0_GATH_T" /* GXT: GATHER INTEL */;
		case 2:
			return "H4P_INT0_LOOT_T" /* GXT: SECONDARY TARGETS */;
		case 3:
			return "H4P_INT0_ENTR_T" /* GXT: INFILTRATION POINTS */;
		case 4:
			return "H4P_INT0_EXIT_T" /* GXT: ESCAPE POINTS */;
		case 5:
			return "H4P_INT0_COMP_T" /* GXT: COMPOUND ENTRY POINTS */;
		case 6:
			return "H4P_INT0_ITEM_T" /* GXT: POINTS OF INTEREST */;
		case 7:
			return "H4P_INT2_CASH_T" /* GXT: CASH */;
		case 8:
			return "H4P_INT2_WEED_T" /* GXT: WEED */;
		case 9:
			return "H4P_INT2_COKE_T" /* GXT: COCAINE */;
		case 10:
			return "H4P_INT2_GOLD_T" /* GXT: GOLD */;
		case 11:
			return "H4P_INT2_PAIN_T" /* GXT: PAINTINGS */;
		case 12:
			return "H4P_INT3_AIRS_T" /* GXT: AIRSTRIP */;
		case 13:
			return "H4P_INT3_PARA_T" /* GXT: HALO JUMP */;
		case 14:
			return "H4P_INT3_BEAC_T" /* GXT: WEST BEACH */;
		case 15:
			return "H4P_INT3_MDCK_T" /* GXT: MAIN DOCK */;
		case 16:
			return "H4P_INT3_NDCK_T" /* GXT: NORTH DOCK */;
		case 17:
			return "H4P_INT3_NDRP_T" /* GXT: NORTH DROP ZONE */;
		case 18:
			return "H4P_INT3_SDRP_T" /* GXT: SOUTH DROP ZONE */;
		case 19:
			return "H4P_INT3_DTUN_T" /* GXT: DRAINAGE TUNNEL */;
		case 20:
			return "H4P_INT4_AIRS_T" /* GXT: AIRSTRIP */;
		case 21:
			return "H4P_INT4_MDCK_T" /* GXT: MAIN DOCK */;
		case 22:
			return "H4P_INT4_NDCK_T" /* GXT: NORTH DOCK */;
		case 23:
			return "H4P_INT4_SUBM_T" /* GXT: KOSATKA */;
		case 30:
			return "H4P_INT6_PWRS_T" /* GXT: POWER STATION */;
		case 31:
			return "H4P_INT6_CTOW_T" /* GXT: CONTROL TOWER */;
		case 32:
			return "H4P_INT6_BCUT_T" /* GXT: BOLT CUTTERS */;
		case 33:
			return "H4P_INT6_GRAP_T" /* GXT: GRAPPLING EQUIPMENT */;
		case 34:
			return "H4P_INT6_UNIF_T" /* GXT: GUARD CLOTHING */;
		case 35:
			return "H4P_INT6_TROJ_T" /* GXT: SUPPLY TRUCK */;
		case 24:
			return "H4P_INT5_MGAT_T" /* GXT: MAIN GATE */;
		case 25:
			return "H4P_INT5_NWAL_T" /* GXT: NORTH WALL */;
		case 26:
			return "H4P_INT5_NSGT_T" /* GXT: NORTH GATE */;
		case 27:
			return "H4P_INT5_SWAL_T" /* GXT: SOUTH WALL */;
		case 28:
			return "H4P_INT5_SSGT_T" /* GXT: SOUTH GATE */;
		case 29:
			return "H4P_INT5_DTUN_T" /* GXT: DRAINAGE TUNNEL */;
		case 36:
			return "H4P_PRP0_APVH_T" /* GXT: APPROACH VEHICLES */;
		case 37:
			return "H4P_PRP0_EQUI_T" /* GXT: EQUIPMENT */;
		case 38:
			return "H4P_PRP0_WEPL_T" /* GXT: WEAPON LOADOUT */;
		case 39:
			return "H4P_PRP0_DISR_T" /* GXT: DISRUPTION */;
		case 40:
			return "H4P_PRP1_SUBM_T" /* GXT: SUBMARINE: KOSATKA */;
		case 41:
			return "H4P_PRP1_SBOM_T" /* GXT: PLANE: ALKONOST */;
		case 42:
			return "H4P_PRP1_SPLA_T" /* GXT: PLANE: VELUM */;
		case 43:
			return "H4P_PRP1_SHEL_T" /* GXT: HELICOPTER: STEALTH ANNIHILATOR */;
		case 44:
			return "H4P_PRP1_PBOA_T" /* GXT: BOAT: PATROL BOAT */;
		case 45:
			return "H4P_PRP1_SBOA_T" /* GXT: BOAT: LONGFIN */;
		case 46:
			return "H4P_PRP1_BOM1_T" /* GXT: PART 1: ALKONOST */;
		case 47:
			return "H4P_PRP1_BOM2_T" /* GXT: PART 2: PILOT */;
		case 48:
			return "H4P_PRP1_HEL1_T" /* GXT: PART 1: STEALTH ANNIHILATOR */;
		case 49:
			return "H4P_PRP1_HEL2_T" /* GXT: PART 2: PILOT */;
		case 50:
			return "H4P_PRP2_DEMC_T" /* GXT: DEMOLITION CHARGES */;
		case 53:
			return "H4P_PRP2_ATOR_T" /* GXT: CUTTING TORCH */;
		case 51:
			return __LIB_1__::func_295(__LIB_27__::func_387(uParam0->f_1084) == 11, "H4P_PRP2_TAR1_T" /* GXT: SAFE CODE */, "H4P_PRP2_TAR2_T" /* GXT: PLASMA CUTTER */);
		case 52:
			return "H4P_PRP2_FING_T" /* GXT: FINGERPRINT CLONER */;
		case 54:
			return "H4P_PRP3_SHOT_T" /* GXT: AGGRESSOR */;
		case 55:
			return "H4P_PRP3_RIFL_T" /* GXT: CONSPIRATOR */;
		case 56:
			return "H4P_PRP3_SNIP_T" /* GXT: CRACK SHOT */;
		case 57:
			return "H4P_PRP3_M2SM_T" /* GXT: SABOTEUR */;
		case 58:
			return "H4P_PRP3_M2RI_T" /* GXT: MARKSMAN */;
		case 59:
			return "H4P_PRP3_SUPP_T" /* GXT: SUPPRESSORS */;
		case 60:
			return "H4P_PRP4_WEAP_T" /* GXT: WEAPONS */;
		case 61:
			return "H4P_PRP4_ARMR_T" /* GXT: ARMOR */;
		case 62:
			return "H4P_PRP4_BRES_T" /* GXT: AIR SUPPORT */;
		case 63:
			return "H4P_FIN0_APRV_T" /* GXT: APPROACH VEHICLE */;
		case 64:
			return "H4P_FIN0_INFI_T" /* GXT: INFILTRATION POINT */;
		case 65:
			return "H4P_FIN0_CENT_T" /* GXT: COMPOUND ENTRY POINT */;
		case 66:
			return "H4P_FIN0_ESCA_T" /* GXT: ESCAPE POINT */;
		case 67:
			return "H4P_FIN0_TIMD_T" /* GXT: TIME OF DAY */;
		case 68:
			return "H4P_FIN0_WEAP_T" /* GXT: WEAPON LOADOUT */;
		case 69:
			return "H4P_FIN0_SUPP_T" /* GXT: HIRE SUPPORT CREW */;
		case 70:
			return "H4P_FIN0_CREW_T" /* GXT: ASSIGN CREW CUTS */;
		case 71:
			return "H4P_FIN1_SUBM_T" /* GXT: KOSATKA */;
		case 72:
			return "H4P_FIN1_BOMB_T" /* GXT: ALKONOST */;
		case 73:
			return "H4P_FIN1_SMPL_T" /* GXT: VELUM */;
		case 74:
			return "H4P_FIN1_SHEL_T" /* GXT: STEALTH ANNIHILATOR */;
		case 75:
			return "H4P_FIN1_PBOA_T" /* GXT: PATROL BOAT */;
		case 76:
			return "H4P_FIN1_SBOA_T" /* GXT: LONGFIN */;
		case 77:
			return "H4P_FIN2_AIRS_T" /* GXT: AIRSTRIP */;
		case 78:
			return "H4P_FIN2_PARA_T" /* GXT: HALO JUMP */;
		case 79:
			return "H4P_FIN2_WBEA_T" /* GXT: WEST BEACH */;
		case 80:
			return "H4P_FIN2_MDOC_T" /* GXT: MAIN DOCK */;
		case 81:
			return "H4P_FIN2_NDOC_T" /* GXT: NORTH DOCK */;
		case 82:
			return "H4P_FIN2_NDRP_T" /* GXT: NORTH DROP ZONE */;
		case 83:
			return "H4P_FIN2_SDRP_T" /* GXT: SOUTH DROP ZONE */;
		case 84:
			return "H4P_FIN2_DTUN_T" /* GXT: DRAINAGE TUNNEL */;
		case 85:
			return "H4P_FIN3_MGAT_T" /* GXT: MAIN GATE */;
		case 86:
			return "H4P_FIN3_DTUN_T" /* GXT: DRAINAGE TUNNEL */;
		case 87:
			return "H4P_FIN4_AIRS_T" /* GXT: AIRSTRIP */;
		case 88:
			return "H4P_FIN4_MDOC_T" /* GXT: MAIN DOCK */;
		case 89:
			return "H4P_FIN4_NDOC_T" /* GXT: NORTH DOCK */;
		case 90:
			return "H4P_FIN4_SUBM_T" /* GXT: KOSATKA */;
		case 91:
			return "H4P_FIN5_TDAY_T" /* GXT: DAY */;
		case 92:
			return "H4P_FIN5_TNGT_T" /* GXT: NIGHT */;
		case 93:
			return "H4P_FIN6_SHOT_T" /* GXT: AGGRESSOR */;
		case 94:
			return "H4P_FIN6_RIFL_T" /* GXT: CONSPIRATOR */;
		case 95:
			return "H4P_FIN6_SNIP_T" /* GXT: CRACK SHOT */;
		case 96:
			return "H4P_FIN6_MKSM_T" /* GXT: SABOTEUR */;
		case 97:
			return "H4P_FIN6_MKAR_T" /* GXT: MARKSMAN */;
		case 98:
			return "H4P_FIN6_SUPP_T" /* GXT: SUPPRESSORS */;
		case 99:
			return "H4P_FIN7_AIRS_T" /* GXT: AIRSTRIKE */;
		case 100:
			return "H4P_FIN7_WDRP_T" /* GXT: SUPPLY DROP */;
		case 101:
			return "H4P_FIN7_SNIP_T" /* GXT: SNIPER */;
		case 102:
			return "H4P_FIN7_HELI_T" /* GXT: HELICOPTER BACKUP */;
		case 103:
			return "H4P_FIN7_SPYD_T" /* GXT: RECON DRONE */;
		case 104:
			return "H4P_FIN7_WEAP_T" /* GXT: WEAPON STASH */;
		default:
	}
	return "";
}

void func_588(int iParam0, int iParam1)//Position - 0x13D28
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "REMOVE_FINALE_ITEM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_589(var uParam0)//Position - 0x13D45
{
	struct<9> Var0;
	func_588(uParam0->f_711, 85);
	func_588(uParam0->f_711, 86);
	Local_123[0 /*9*/] = { Var0 };
	Local_123[1 /*9*/] = { Var0 };
	func_579(uParam0, &(Local_123[0 /*9*/]), 65, 86);
	func_566(uParam0->f_711, 86, 1);
	func_577(uParam0->f_711, Local_123[0 /*9*/], 0);
}

void func_590(var uParam0)//Position - 0x13DAD
{
	func_566(uParam0->f_711, 77, 0);
	func_566(uParam0->f_711, 78, 0);
	func_566(uParam0->f_711, 79, 0);
	func_566(uParam0->f_711, 80, 0);
	func_566(uParam0->f_711, 81, 0);
	func_566(uParam0->f_711, 82, 0);
	func_566(uParam0->f_711, 83, 0);
	func_566(uParam0->f_711, 84, 0);
}

int func_591(int iParam0)//Position - 0x13E15
{
	switch (iParam0)
	{
		case 0:
			return 77;
		case 1:
			return 78;
		case 2:
			return 79;
		case 3:
			return 80;
		case 4:
			return 81;
		case 5:
			return 82;
		case 6:
			return 83;
		case 7:
			return 84;
		default:
	}
	return 0;
}

void func_592(var uParam0, int iParam1)//Position - 0x13E7D
{
	int iVar0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	func_595(uParam0);
	func_594(uParam0);
	func_588(uParam0->f_711, 90);
	func_576(uParam0);
	func_566(uParam0->f_711, iParam1, 1);
	switch (iParam1)
	{
		case 71:
			Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 1;
			func_579(uParam0, &(Local_122[iVar0 /*9*/]), 64, 79);
			iVar0++;
			if (__LIB_27__::func_386(uParam0->f_1084, 3))
			{
				func_579(uParam0, &(Local_122[iVar0 /*9*/]), 64, 80);
				iVar0++;
			}
			if (__LIB_27__::func_386(uParam0->f_1084, 4))
			{
				func_579(uParam0, &(Local_122[iVar0 /*9*/]), 64, 81);
				iVar0++;
			}
			if (__LIB_27__::func_386(uParam0->f_1084, 7))
			{
				func_579(uParam0, &(Local_122[iVar0 /*9*/]), 64, 84);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_577(uParam0->f_711, Local_122[iVar1 /*9*/], 0);
				iVar1++;
			}
			func_593(uParam0);
			break;
		case 72:
			Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 2;
			func_579(uParam0, &(Local_122[iVar0 /*9*/]), 64, 78);
			iVar0++;
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_577(uParam0->f_711, Local_122[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		case 73:
			Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 3;
			func_579(uParam0, &(Local_122[iVar0 /*9*/]), 64, 77);
			iVar0++;
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_577(uParam0->f_711, Local_122[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		case 74:
			Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 4;
			if (__LIB_27__::func_386(uParam0->f_1084, 5))
			{
				func_579(uParam0, &(Local_122[iVar0 /*9*/]), 64, 82);
				iVar0++;
			}
			if (__LIB_27__::func_386(uParam0->f_1084, 6))
			{
				func_579(uParam0, &(Local_122[iVar0 /*9*/]), 64, 83);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_577(uParam0->f_711, Local_122[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		case 75:
			Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 5;
			if (__LIB_27__::func_386(uParam0->f_1084, 3))
			{
				func_579(uParam0, &(Local_122[iVar0 /*9*/]), 64, 80);
				iVar0++;
			}
			if (__LIB_27__::func_386(uParam0->f_1084, 4))
			{
				func_579(uParam0, &(Local_122[iVar0 /*9*/]), 64, 81);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_577(uParam0->f_711, Local_122[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		case 76:
			Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 6;
			if (__LIB_27__::func_386(uParam0->f_1084, 3))
			{
				func_579(uParam0, &(Local_122[iVar0 /*9*/]), 64, 80);
				iVar0++;
			}
			if (__LIB_27__::func_386(uParam0->f_1084, 4))
			{
				func_579(uParam0, &(Local_122[iVar0 /*9*/]), 64, 81);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_577(uParam0->f_711, Local_122[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
	}
}

void func_593(var uParam0)//Position - 0x141BE
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_588(uParam0->f_711, 87);
	func_588(uParam0->f_711, 88);
	func_588(uParam0->f_711, 89);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = (87 + iVar1);
		if (__LIB_37__::func_15(uParam0->f_1084, func_379(iVar2)))
		{
			func_579(uParam0, &(Local_124[iVar0 /*9*/]), 66, iVar2);
			iVar0++;
		}
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_124.f_0)
	{
		if (Local_124[iVar1 /*9*/])
		{
			func_577(uParam0->f_711, Local_124[iVar1 /*9*/], 0);
		}
		iVar1++;
	}
}

void func_594(var uParam0)//Position - 0x1425E
{
	int iVar0;
	struct<9> Var1;
	func_588(uParam0->f_711, 77);
	func_588(uParam0->f_711, 78);
	func_588(uParam0->f_711, 79);
	func_588(uParam0->f_711, 80);
	func_588(uParam0->f_711, 81);
	func_588(uParam0->f_711, 82);
	func_588(uParam0->f_711, 83);
	func_588(uParam0->f_711, 84);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_122[iVar0 /*9*/] = { Var1 };
		iVar0++;
	}
	Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = -1;
}

void func_595(var uParam0)//Position - 0x142EF
{
	func_566(uParam0->f_711, 71, 0);
	func_566(uParam0->f_711, 72, 0);
	func_566(uParam0->f_711, 73, 0);
	func_566(uParam0->f_711, 74, 0);
	func_566(uParam0->f_711, 75, 0);
	func_566(uParam0->f_711, 76, 0);
}

int func_596(int iParam0)//Position - 0x1433F
{
	switch (iParam0)
	{
		case 1:
			return 71;
		case 2:
			return 72;
		case 3:
			return 73;
		case 4:
			return 74;
		case 5:
			return 75;
		case 6:
			return 76;
		default:
	}
	return 0;
}

void func_597(var uParam0)//Position - 0x14391
{
	int iVar0;
	if (!iLocal_132)
	{
		return;
	}
	iVar0 = -1;
	if (func_821(&iVar0))
	{
		uParam0->f_806.f_3 = uParam0->f_806.f_2;
		uParam0->f_806.f_2 = iVar0;
		uParam0->f_707 = 1;
		func_598(uParam0);
		iLocal_132 = 0;
	}
}

void func_598(var uParam0)//Position - 0x143D6
{
	int iVar0;
	iVar0 = uParam0->f_806.f_2;
	if (uParam0->f_1084 != PLAYER::PLAYER_ID() && iVar0 != 1000)
	{
		return;
	}
	switch (iVar0)
	{
		case 1:
			if (Local_174.f_6 != -1)
			{
				return;
			}
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				return;
			}
			if (func_367(uParam0, iVar0))
			{
				return;
			}
			if (__LIB_9__::func_233(uParam0->f_1084, 0))
			{
				func_810(uParam0);
				return;
			}
			func_626(uParam0, iVar0);
			break;
		case 40:
		case 42:
		case 44:
		case 45:
		case 46:
		case 48:
		case 47:
		case 49:
		case 50:
		case 53:
		case 51:
		case 52:
		case 60:
		case 61:
		case 62:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				return;
			}
			if (func_367(uParam0, iVar0))
			{
				return;
			}
			if (Local_174.f_6 != -1)
			{
				return;
			}
			func_626(uParam0, iVar0);
			break;
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			if (func_367(uParam0, iVar0))
			{
				return;
			}
			if (Local_174.f_6 != -1)
			{
				return;
			}
			func_623(uParam0, iVar0);
			break;
		case 59:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				return;
			}
			func_621(uParam0);
			break;
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			func_592(uParam0, iVar0);
			break;
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
			func_575(uParam0, iVar0);
			break;
		case 85:
		case 86:
			func_572(uParam0, iVar0);
			break;
		case 87:
		case 88:
		case 89:
		case 90:
			func_569(uParam0, iVar0);
			break;
		case 91:
		case 92:
			func_565(uParam0, iVar0);
			break;
		case 98:
			func_620(uParam0, iVar0);
			break;
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			if (func_367(uParam0, iVar0))
			{
				return;
			}
			func_614(uParam0, iVar0);
			break;
		case 1000:
			if (Local_174.f_6 != -1)
			{
				return;
			}
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				if (uParam0->f_1084 == PLAYER::PLAYER_ID())
				{
					func_613(uParam0);
				}
			}
			else if (uParam0->f_1084 == PLAYER::PLAYER_ID())
			{
				func_470(uParam0);
			}
			else
			{
				func_610(uParam0);
			}
			break;
		case 1002:
			func_599(uParam0);
			break;
		case 1001:
			func_542(uParam0);
			break;
	}
}

void func_599(var uParam0)//Position - 0x146B0
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<10> Var3;
	struct<10> Var4;
	switch (iLocal_152)
	{
		case -2:
			func_609(uParam0, 0);
			iVar2 = __LIB_0__::func_369(9511, -1, 0);
			MISC::SET_BIT(&iVar2, 16);
			__LIB_0__::func_413(9511, iVar2, -1, 1, 0);
			break;
		case -3:
			iVar2 = __LIB_0__::func_369(9511, -1, 0);
			MISC::SET_BIT(&iVar2, 14);
			__LIB_0__::func_413(9511, iVar2, -1, 1, 0);
			break;
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			iVar0 = func_608(iLocal_152);
			if (__LIB_0__::func_112())
			{
				__LIB_2__::func_105(func_607(iLocal_152), iVar0, &uVar1, 0, 1, 0);
			}
			else
			{
				Var3 = -1;
				Var3.f_1 = -1;
				Var3.f_2 = -1;
				Var3.f_3 = -1;
				Var3.f_4 = -1;
				Var3.f_5 = -1;
				Var3.f_6 = -1;
				Var3.f_7 = -1;
				Var3.f_8 = -1;
				Var3.f_9 = -1;
				__LIB_37__::func_35(&Var3);
				func_606(&Var3, iLocal_152, iVar0);
				MONEY::NETWORK_SPEND_ISLAND_HEIST(iVar0, 0, 1, &Var3);
			}
			func_604(func_605(iLocal_152), 1);
			func_566(uParam0->f_711, iLocal_152, 1);
			func_34(uParam0, 11);
			__LIB_0__::func_795(&uLocal_155, 0, 0);
			break;
		case 1:
			func_626(uParam0, iLocal_152);
			break;
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			func_602(func_603(iLocal_152));
			func_626(uParam0, iLocal_152);
			break;
		case 59:
			if (__LIB_0__::func_112())
			{
				__LIB_2__::func_105(joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"), Global_262145.f_29917 /* Tunable: H4_SUPPRESSORS_COST */, &uVar1, 0, 1, 0);
			}
			else
			{
				Var4 = -1;
				Var4.f_1 = -1;
				Var4.f_2 = -1;
				Var4.f_3 = -1;
				Var4.f_4 = -1;
				Var4.f_5 = -1;
				Var4.f_6 = -1;
				Var4.f_7 = -1;
				Var4.f_8 = -1;
				Var4.f_9 = -1;
				__LIB_37__::func_35(&Var4);
				Var4.f_6 = Global_262145.f_29917 /* Tunable: H4_SUPPRESSORS_COST */;
				MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_262145.f_29917 /* Tunable: H4_SUPPRESSORS_COST */, 0, 1, &Var4);
			}
			func_601(1);
			func_600(uParam0->f_711, 59, 1);
			func_566(uParam0->f_711, 98, 1);
			func_34(uParam0, 11);
			__LIB_0__::func_795(&uLocal_155, 0, 0);
			break;
	}
	iLocal_152 = 0;
	uParam0->f_707 = 1;
	func_543(uParam0->f_711);
}

void func_600(int iParam0, int iParam1, int iParam2)//Position - 0x148F2
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SETUP_ITEM_NUM_COMPLETE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_601(bool bParam0)//Position - 0x14915
{
	int iVar0;
	iVar0 = __LIB_0__::func_369(9482, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 12);
		MISC::SET_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5), 12);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 12);
		MISC::CLEAR_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5), 12);
	}
	__LIB_0__::func_413(9482, iVar0, -1, 1, 0);
}

void func_602(int iParam0)//Position - 0x14970
{
	__LIB_0__::func_413(9485, iParam0, -1, 1, 0);
}

int func_603(int iParam0)//Position - 0x14984
{
	switch (iParam0)
	{
		case 54:
			return 1;
		case 55:
			return 2;
		case 56:
			return 3;
		case 57:
			return 4;
		case 58:
			return 5;
		default:
	}
	return 0;
}

void func_604(int iParam0, bool bParam1)//Position - 0x149C6
{
	int iVar0;
	iVar0 = __LIB_0__::func_369(9484, -1, 0);
	if (bParam1)
	{
		MISC::SET_BIT(&iVar0, iParam0);
		MISC::SET_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_45), iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, iParam0);
		MISC::CLEAR_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_45), iParam0);
	}
	__LIB_0__::func_413(9484, iVar0, -1, 1, 0);
}

int func_605(int iParam0)//Position - 0x14A25
{
	switch (iParam0)
	{
		case 99:
			return 0;
		case 100:
			return 4;
		case 101:
			return 1;
		case 102:
			return 2;
		case 103:
			return 3;
		case 104:
			return 5;
		default:
	}
	return 6;
}

void func_606(var uParam0, int iParam1, int iParam2)//Position - 0x14A71
{
	switch (iParam1)
	{
		case 99:
			*uParam0 = iParam2;
			break;
		case 100:
			uParam0->f_1 = iParam2;
			break;
		case 101:
			uParam0->f_2 = iParam2;
			break;
		case 102:
			uParam0->f_3 = iParam2;
			break;
		case 103:
			uParam0->f_4 = iParam2;
			break;
		case 104:
			uParam0->f_5 = iParam2;
			break;
	}
}

int func_607(int iParam0)//Position - 0x14AD9
{
	switch (iParam0)
	{
		case 99:
			return joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE");
		case 100:
			return joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON");
		case 101:
			return joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER");
		case 102:
			return joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT");
		case 103:
			return joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE");
		case 104:
			return joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH");
		default:
	}
	return joaat("SERVICE_INVALID");
}

int func_608(int iParam0)//Position - 0x14B41
{
	switch (iParam0)
	{
		case 99:
			return Global_262145.f_29911 /* Tunable: H4_SUPPORTCREW_AIRSTRIKE_COST */;
		case 100:
			return Global_262145.f_29912 /* Tunable: H4_SUPPORTCREW_HEAVY_WEAPON_COST */;
		case 101:
			return Global_262145.f_29913 /* Tunable: H4_SUPPORTCREW_SNIPER_COST */;
		case 102:
			return Global_262145.f_29914 /* Tunable: H4_SUPPORTCREW_AIR_SUPPORT_COST */;
		case 103:
			return Global_262145.f_29915 /* Tunable: H4_SUPPORTCREW_DRONE_COST */;
		case 104:
			return Global_262145.f_29916 /* Tunable: H4_SUPPORTCREW_WEAPON_STASH_COST */;
		default:
	}
	return 0;
}

void func_609(var uParam0, int iParam1)//Position - 0x14BB1
{
	if (uParam0->f_1084 != PLAYER::PLAYER_ID())
	{
		return;
	}
	if (Local_159.f_43.f_6 != 0)
	{
		Stack.Push(iParam1);
		Call_Loc(Local_159.f_43.f_6);
		if (!StackVal)
		{
			return;
		}
	}
	if (!BitTest(Local_174[(iParam1 / 32)], (iParam1 % 32)))
	{
	}
	MISC::SET_BIT(&(Local_174[(iParam1 / 32)]), (iParam1 % 32));
}

void func_610(var uParam0)//Position - 0x14C0B
{
	int iVar0;
	iVar0 = func_409(uParam0, PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (uParam0->f_823.f_67[iVar0] == 0)
		{
			uParam0->f_823.f_67[iVar0] = 1;
		}
		else
		{
			uParam0->f_823.f_67[iVar0] = 0;
		}
		func_611(uParam0->f_711, 1, func_612(uParam0));
		iLocal_147 = 1;
	}
}

void func_611(int iParam0, bool bParam1, char* sParam2)//Position - 0x14C66
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_LAUNCH_BUTTON");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	__LIB_0__::func_610(sParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_612(var uParam0)//Position - 0x14C89
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (uParam0->f_1084 == PLAYER::PLAYER_ID())
		{
			return "H4_FINALE_CONT" /* GXT: CONTINUE */;
		}
		else if (func_409(uParam0, PLAYER::PLAYER_ID()) != -1)
		{
			if (uParam0->f_823.f_67[func_409(uParam0, PLAYER::PLAYER_ID())] == 0)
			{
				return "H4_FINALE_RDY" /* GXT: READY */;
			}
			else
			{
				return "H4_FINALE_NRDY" /* GXT: UNREADY */;
			}
		}
	}
	return "CH_FINALE_LBS" /* GXT: START */;
}

void func_613(var uParam0)//Position - 0x14CE8
{
	MISC::SET_BIT(&(uParam0->f_1085), 3);
	uParam0->f_726.f_5 = 0;
	iLocal_148 = 6;
	iLocal_134 = 1;
	uParam0->f_704 = 0;
	func_34(uParam0, 15);
}

void func_614(var uParam0, int iParam1)//Position - 0x14D18
{
	int iVar0;
	iVar0 = func_605(iParam1);
	if (iVar0 == 6)
	{
		return;
	}
	if (func_413(PLAYER::PLAYER_ID(), iVar0))
	{
		return;
	}
	if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_608(iParam1), false, true, false, -1, 0))
	{
		return;
	}
	func_615(uParam0->f_711, func_619(iParam1), func_618(iParam1), func_617(), func_616());
	uParam0->f_707 = 1;
	iLocal_152 = iParam1;
}

void func_615(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0x14D7F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SHOW_OVERLAY");
	__LIB_0__::func_610(sParam1);
	__LIB_0__::func_610(sParam2);
	__LIB_0__::func_610(sParam3);
	__LIB_0__::func_610(sParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_616()//Position - 0x14DAE
{
	return "H4P_OVERLAY_CAN" /* GXT: CANCEL */;
}

char* func_617()//Position - 0x14DBA
{
	return "H4P_OVERLAY_CON" /* GXT: CONFIRM */;
}

char* func_618(int iParam0)//Position - 0x14DC6
{
	switch (iParam0)
	{
		case 99:
			return "H4P_OVR_SC1_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/Are you sure you wish to purchase an Airstrike?~n~~n~Please note: To use this, the island's air defenses must first be disabled at the control tower during the heist.~n~~n~Cost: $12,000~n~&lt;\ */;
		case 100:
			return "H4P_OVR_SC2_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/Are you sure you wish to purchase the Supply Drop?~n~~n~Please note: To use this, the island's air defenses must first be disabled at the control tower during the heist.~n~~n~Cost: $15,000~n~&lt;\ */;
		case 101:
			return "H4P_OVR_SC3_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/Are you sure you wish to purchase the Sniper?~n~~n~Please note: To use this, the island's air defenses must first be disabled at the control tower during the heist.~n~~n~Cost: $25,000~n~&lt;\ */;
		case 102:
			return "H4P_OVR_SC4_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/Are you sure you wish to purchase Helicopter Backup?~n~~n~Please note: To use this, the island's air defenses must first be disabled at the control tower during the heist.~n~~n~Cost: $30,000~n~&lt;\ */;
		case 103:
			return "H4P_OVR_SC5_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/Are you sure you wish to purchase the Recon Drone?~n~~n~Please note: To use this, the island's air defenses must first be disabled at the control tower during the heist.~n~~n~Cost: $25,000~n~&lt;\ */;
		case 104:
			return "H4P_OVR_SC6_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/Are you sure you wish to purchase the Weapon Stash?~n~~n~Please note: This can only be used with the Velum approach vehicle.~n~~n~Cost: $10,000~n~&lt;\ */;
		default:
	}
	return "";
}

char* func_619(int iParam0)//Position - 0x14E27
{
	switch (iParam0)
	{
		case 99:
			return "H4P_OVR_SC1_T" /* GXT: SUPPORT CREW */;
		case 100:
			return "H4P_OVR_SC2_T" /* GXT: SUPPORT CREW */;
		case 101:
			return "H4P_OVR_SC3_T" /* GXT: SUPPORT CREW */;
		case 102:
			return "H4P_OVR_SC4_T" /* GXT: SUPPORT CREW */;
		case 103:
			return "H4P_OVR_SC5_T" /* GXT: SUPPORT CREW */;
		case 104:
			return "H4P_OVR_SC6_T" /* GXT: SUPPORT CREW */;
		default:
	}
	return "";
}

void func_620(var uParam0, int iParam1)//Position - 0x14E88
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	if (Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_44)
	{
		Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_44 = 0;
		func_566(uParam0->f_711, iParam1, 0);
	}
	else
	{
		Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_44 = 1;
		func_566(uParam0->f_711, iParam1, 1);
	}
}

void func_621(var uParam0)//Position - 0x14EE5
{
	if (__LIB_8__::func_748(uParam0->f_1084))
	{
		return;
	}
	if (!MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_29917 /* Tunable: H4_SUPPRESSORS_COST */, false, true, false, -1, 0))
	{
		return;
	}
	func_615(uParam0->f_711, "H4P_OVR_SUP_T" /* GXT: SUPPRESSORS */, "H4P_OVR_SUP_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/Are you sure you wish to purchase suppressors for $5000? You will be given the option to use them when setting up the finale.~n~&lt;\ */, func_622(), func_616());
	uParam0->f_707 = 1;
	iLocal_152 = 59;
}

char* func_622()//Position - 0x14F37
{
	return "H4P_OVERLAY_ACC" /* GXT: ACCEPT */;
}

void func_623(var uParam0, int iParam1)//Position - 0x14F43
{
	if (__LIB_28__::func_471(uParam0->f_1084) == 0)
	{
		func_615(uParam0->f_711, func_625(iParam1), func_624(iParam1), func_622(), func_616());
		uParam0->f_707 = 1;
		iLocal_152 = iParam1;
	}
	else if (!__LIB_9__::func_233(uParam0->f_1084, 13))
	{
		func_626(uParam0, iParam1);
	}
}

char* func_624(int iParam0)//Position - 0x14F9A
{
	switch (iParam0)
	{
		case 54:
			return "H4P_OVR_WL1_M" /* GXT: //Loading...~n~~n~Target confirmation:[unmarked weapons]~n~......................................................................................................~n~&gt;/Loadout: Aggressor::~n~- Assault Shotgun~n~- Machine Pistol~n~- Grenades~n~- Machete~n~&lt;\ ~n~~n~&gt;/ Confirm Prep work? */;
		case 55:
			return "H4P_OVR_WL2_M" /* GXT: //Loading...~n~~n~Target confirmation:[unmarked weapons]~n~......................................................................................................~n~&gt;/Loadout: Conspirator::~n~- Military Rifle~n~- Pistol .50~n~- Sticky Bombs~n~- Knuckle Duster~n~&lt;\ ~n~~n~&gt;/ Confirm Prep work? */;
		case 56:
			return "H4P_OVR_WL3_M" /* GXT: //Loading...~n~~n~Target confirmation:[unmarked weapons]~n~......................................................................................................~n~&gt;/Loadout: Crack Shot::~n~- Sniper Rifle~n~- AP Pistol~n~- Molotov Cocktails~n~- Knife~n~&lt;\ ~n~~n~&gt;/ Confirm Prep work? */;
		case 57:
			return "H4P_OVR_WL4_M" /* GXT: //Loading...~n~~n~Target confirmation:[unmarked weapons]~n~......................................................................................................~n~&gt;/Loadout: Saboteur::~n~- SMG Mk II~n~- SNS Pistol Mk II~n~- Pipe Bombs~n~- Knife~n~&lt;\ ~n~~n~&gt;/ Confirm Prep work? */;
		case 58:
			return "H4P_OVR_WL5_M" /* GXT: //Loading...~n~~n~Target confirmation:[unmarked weapons]~n~......................................................................................................~n~&gt;/Loadout: Marksman::~n~- Assault Rifle Mk II~n~- Pistol Mk II~n~- Pipe Bombs~n~- Machete~n~&lt;\ ~n~~n~&gt;/ Confirm Prep work? */;
		default:
	}
	return "";
}

char* func_625(int iParam0)//Position - 0x14FEE
{
	switch (iParam0)
	{
		case 54:
			return "H4P_OVR_WL1_T" /* GXT: AGGRESSOR */;
		case 55:
			return "H4P_OVR_WL2_T" /* GXT: CONSPIRATOR */;
		case 56:
			return "H4P_OVR_WL3_T" /* GXT: CRACK SHOT */;
		case 57:
			return "H4P_OVR_WL4_T" /* GXT: SABOTEUR */;
		case 58:
			return "H4P_OVR_WL5_T" /* GXT: MARKSMAN */;
		default:
	}
	return "";
}

void func_626(var uParam0, int iParam1)//Position - 0x15042
{
	int iVar0;
	int iVar1;
	iVar0 = func_809(uParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_16(uParam0, iVar0))
	{
		return;
	}
	if (__LIB_3__::func_153(iLocal_158, 0))
	{
		return;
	}
	iVar1 = __LIB_31__::func_723(PLAYER::PLAYER_ID(), 256, 0);
	if (iVar1 != -1)
	{
		func_642(uParam0, iParam1, iVar1);
		return;
	}
	func_627(iVar0);
	Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_23 = 1;
	Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_24 = 0;
	iLocal_148 = 5;
	func_34(uParam0, 15);
}

void func_627(int iParam0)//Position - 0x150C7
{
	func_628(-1, iParam0);
}

void func_628(int iParam0, var uParam1)//Position - 0x150D6
{
	if (!__LIB_1__::func_501())
	{
		return;
	}
	if (!__LIB_12__::func_385(-1))
	{
		return;
	}
	if (iParam0 != -1)
	{
		__LIB_7__::func_946(iParam0);
	}
	__LIB_19__::func_453(uParam1);
	__LIB_13__::func_134(256, -1);
}

void func_642(var uParam0, int iParam1, int iParam2)//Position - 0x15544
{
	switch (iParam2)
	{
		case 15:
			if (__LIB_1__::func_802(iLocal_158))
			{
				__LIB_0__::func_151("GENERAL_MLF_G1" /* GXT: Can't launch this mission whilst one of your Club Members is currently at one with the animals. */, -1);
			}
			else if (__LIB_3__::func_39(iLocal_158))
			{
				__LIB_0__::func_151("GENERAL_MLF_G2" /* GXT: Can't launch this mission whilst one of your Associates is currently at one with the animals. */, -1);
			}
			else
			{
				__LIB_0__::func_151("GENERAL_MLF_G3" /* GXT: Can't launch this mission whilst one of your Bodyguards is currently at one with the animals. */, -1);
			}
			break;
		case 16:
			if (__LIB_1__::func_802(iLocal_158))
			{
				__LIB_0__::func_151("GENERAL_MLF_G4" /* GXT: Can't launch this mission whilst one of your Club Members is playing a casino game. */, -1);
			}
			else if (__LIB_3__::func_39(iLocal_158))
			{
				__LIB_0__::func_151("GENERAL_MLF_G5" /* GXT: Can't launch this mission whilst one of your Associates is playing a casino game. */, -1);
			}
			else
			{
				__LIB_0__::func_151("GENERAL_MLF_G6" /* GXT: Can't launch this mission whilst one of your Bodyguards is playing a casino game. */, -1);
			}
			break;
		default:
			if (func_643(func_809(uParam0, iParam1)))
			{
				__LIB_0__::func_151("CSH_LAUNCHF_0" /* GXT: The mission you have selected is currently unavailable. The maximum number of missions with this Heist Prep Equipment have already been sourced in session. Please wait or look for rival Heist crews transporting Heist Prep Equipment ~BLIP_NHP_BAG~ to steal from. */, -1);
			}
			else
			{
				__LIB_0__::func_151("CSH_LAUNCHF_1" /* GXT: The mission you have selected is currently unavailable. The maximum number of missions with this Heist Prep Equipment have already been sourced in session. Please try again soon. */, -1);
			}
			break;
	}
}

int func_643(int iParam0)//Position - 0x155F6
{
	switch (iParam0)
	{
		case 10:
		case 7:
		case 8:
		case 9:
		case 13:
		case 12:
			return 1;
		default:
	}
	return 0;
}

int func_809(var uParam0, int iParam1)//Position - 0x1D026
{
	switch (iParam1)
	{
		case 1:
			return 0;
		case 40:
			return 7;
		case 42:
			return 5;
		case 44:
			return 3;
		case 45:
			return 4;
		case 46:
			return 1;
		case 48:
			return 2;
		case 47:
			return 6;
		case 49:
			return 6;
		case 50:
			return 8;
		case 53:
			return 9;
		case 51:
			return __LIB_27__::func_387(uParam0->f_1084);
		case 52:
			return 12;
		case 54:
			return 13;
		case 55:
			return 13;
		case 56:
			return 13;
		case 57:
			return 13;
		case 58:
			return 13;
		case 59:
			return 13;
		case 60:
			return 14;
		case 61:
			return 15;
		case 62:
			return 16;
		default:
	}
	return -1;
}

void func_810(var uParam0)//Position - 0x1D126
{
	func_615(uParam0->f_711, "H4P_OVR_GAT_T" /* GXT: GATHER INTEL */, func_811(uParam0), func_622(), func_616());
	uParam0->f_707 = 1;
	iLocal_152 = 1;
}

char* func_811(var uParam0)//Position - 0x1D153
{
	if (__LIB_44__::func_104(uParam0->f_1084))
	{
		return "H4P_OVR_GAT_2" /* GXT: //Loading...~n~~n~Stage:[return]~n~......................................................................................................~n~&gt;/Return to Cayo Perico?~n~Data indicates all essential scoping information has been gathered. Continued exploration of the island is optional.~n~&lt;\ */;
	}
	return "H4P_OVR_GAT_M" /* GXT: //Loading...~n~~n~Stage:[return]~n~......................................................................................................~n~&gt;/Return to Cayo Perico?~n~Continue to scope for additional intel. Submit photographic evidence to Pavel to update plans.~n~&lt;\ */;
}

int func_821(int iParam0)//Position - 0x1D49F
{
	if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_130))
	{
		*iParam0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_130);
		return 1;
	}
	*iParam0 = -1;
	return 0;
}

void func_822(var uParam0)//Position - 0x1D4C4
{
	int iVar0;
	if (!iLocal_131)
	{
		return;
	}
	iVar0 = -1;
	if (func_825(&iVar0))
	{
		uParam0->f_806.f_8 = uParam0->f_806;
		uParam0->f_806 = iVar0;
		Global_1975224[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_4 = iVar0;
		uParam0->f_707 = 1;
		if (func_421(uParam0->f_806) && uParam0->f_1098)
		{
			func_824(uParam0);
			uParam0->f_1098 = 0;
		}
		func_823(uParam0, uParam0->f_806);
		iLocal_131 = 0;
		iLocal_135 = 0;
	}
}

void func_823(var uParam0, int iParam1)//Position - 0x1D53E
{
	switch (iParam1)
	{
		case 36:
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_609(uParam0, 19);
			}
			break;
		case 63:
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_609(uParam0, 37);
			}
			break;
		case 1000:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_609(uParam0, 52);
			}
			else
			{
				func_609(uParam0, 50);
			}
			break;
		case 105:
		case 106:
		case 107:
		case 108:
			func_609(uParam0, 51);
			break;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		switch (iParam1)
		{
			case 71:
			case 72:
			case 73:
			case 74:
			case 75:
			case 76:
				func_609(uParam0, 40);
				break;
			case 77:
			case 78:
			case 79:
			case 80:
			case 81:
			case 82:
			case 83:
			case 84:
				func_609(uParam0, 38);
				break;
			case 85:
			case 86:
				func_609(uParam0, 42);
				break;
			case 87:
			case 88:
			case 89:
			case 90:
				func_609(uParam0, 39);
				break;
			case 91:
			case 92:
				func_609(uParam0, 41);
				break;
			}
	}
}

void func_824(var uParam0)//Position - 0x1D68E
{
	func_615(uParam0->f_711, "H4P_OVR_CRE_T" /* GXT: NEW SUPPORT CREW UNLOCKED */, "H4P_OVR_CRE_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/You have unlocked a new support crew member for hire.~n~&lt;\ */, func_617(), "");
	uParam0->f_707 = 1;
	uParam0->f_806 = 1002;
	iLocal_152 = -4;
}

int func_825(int iParam0)//Position - 0x1D6C3
{
	if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_129))
	{
		*iParam0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_129);
		return 1;
	}
	*iParam0 = -1;
	return 0;
}

void func_826(var uParam0)//Position - 0x1D6E8
{
	if (iLocal_144 && !func_848(uParam0))
	{
		iLocal_144 = 0;
		return;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		func_846(uParam0);
		func_841(uParam0);
		func_838(uParam0);
	}
	func_837(uParam0);
	func_833(uParam0);
	func_831(uParam0);
	func_828(uParam0);
	func_827(uParam0);
	iLocal_144 = 1;
}

void func_827(var uParam0)//Position - 0x1D744
{
	if (func_848(uParam0))
	{
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
	}
}

void func_828(var uParam0)//Position - 0x1D765
{
	bool bVar0;
	int iVar1;
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		return;
	}
	if (iLocal_150 != Global_1975224[uParam0->f_1084 /*53*/].f_5.f_45)
	{
		bVar0 = false;
		while (bVar0 < 6)
		{
			if (BitTest(Global_1975224[uParam0->f_1084 /*53*/].f_5.f_45, bVar0) && !BitTest(iLocal_150, bVar0))
			{
				MISC::SET_BIT(&iLocal_150, bVar0);
				func_566(uParam0->f_711, func_830(bVar0), 1);
			}
			bVar0++;
		}
	}
	if (bLocal_139 != __LIB_8__::func_748(uParam0->f_1084))
	{
		bLocal_139 = __LIB_8__::func_748(uParam0->f_1084);
		func_600(uParam0->f_711, 59, 1);
	}
	if (bLocal_140 != Global_1975224[uParam0->f_1084 /*53*/].f_5.f_44)
	{
		bLocal_140 = Global_1975224[uParam0->f_1084 /*53*/].f_5.f_44;
		func_566(uParam0->f_711, 98, bLocal_140);
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	if (uParam0->f_806 != Global_1975224[uParam0->f_1084 /*53*/].f_4)
	{
		uParam0->f_806 = Global_1975224[uParam0->f_1084 /*53*/].f_4;
		iVar1 = uParam0->f_806;
		if (iVar1 != 1002 && iVar1 != 1001)
		{
			__LIB_37__::func_41(uParam0->f_711, iVar1);
		}
	}
	if (iLocal_135 != Global_1975224[uParam0->f_1084 /*53*/].f_51)
	{
		iLocal_135 = Global_1975224[uParam0->f_1084 /*53*/].f_51;
	}
	if (bLocal_137 != Global_1975224[uParam0->f_1084 /*53*/].f_52)
	{
		bLocal_137 = Global_1975224[uParam0->f_1084 /*53*/].f_52;
	}
}

int func_830(bool bParam0)//Position - 0x1D8F3
{
	switch (bParam0)
	{
		case 0:
			return 99;
		case 1:
			return 101;
		case 2:
			return 102;
		case 3:
			return 103;
		case 4:
			return 100;
		case 5:
			return 104;
		default:
	}
	return 0;
}

void func_831(var uParam0)//Position - 0x1D945
{
	if (bLocal_137)
	{
		if (!iLocal_138)
		{
			func_832(uParam0->f_711, 1);
			iLocal_138 = 1;
		}
	}
	else if (iLocal_138)
	{
		func_832(uParam0->f_711, 0);
		iLocal_138 = 0;
	}
	if (uParam0->f_1084 == PLAYER::PLAYER_ID() && Global_1975224[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_52 != iLocal_138)
	{
		Global_1975224[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_52 = iLocal_138;
	}
}

void func_832(int iParam0, int iParam1)//Position - 0x1D9B0
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_MAP_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_833(var uParam0)//Position - 0x1D9CD
{
	int iVar0;
	iVar0 = uParam0->f_806;
	if (iLocal_135)
	{
		if (!iLocal_136)
		{
			if (func_360(uParam0, iVar0))
			{
				func_836(uParam0->f_711, func_361(uParam0, iVar0));
				func_835(uParam0, iVar0);
				iLocal_136 = 1;
			}
			else
			{
				iLocal_135 = 0;
			}
		}
	}
	else if (iLocal_136)
	{
		func_834(uParam0->f_711);
		iLocal_136 = 0;
	}
	if (uParam0->f_1084 == PLAYER::PLAYER_ID() && Global_1975224[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_51 != iLocal_136)
	{
		Global_1975224[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_51 = iLocal_136;
	}
}

void func_834(int iParam0)//Position - 0x1DA5F
{
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iParam0, "HIDE_TIP_TEXT");
}

void func_835(var uParam0, int iParam1)//Position - 0x1DA71
{
	if (func_367(uParam0, iParam1))
	{
		return;
	}
	switch (iParam1)
	{
		case 1:
			if (__LIB_9__::func_233(uParam0->f_1084, 0))
			{
				func_609(uParam0, 5);
			}
			break;
		case 2:
			func_609(uParam0, 8);
			break;
		case 3:
			func_609(uParam0, 6);
			break;
		case 4:
			func_609(uParam0, 7);
			break;
		case 5:
			func_609(uParam0, 10);
			break;
		case 6:
			func_609(uParam0, 9);
			break;
		case 30:
			func_609(uParam0, 18);
			break;
		case 31:
			func_609(uParam0, 17);
			break;
		case 32:
			func_609(uParam0, 11);
			break;
		case 33:
			func_609(uParam0, 12);
			break;
		case 34:
			if (__LIB_37__::func_16(uParam0->f_1084))
			{
				func_609(uParam0, 14);
			}
			else
			{
				func_609(uParam0, 13);
			}
			break;
		case 35:
			if (func_385(uParam0->f_1084))
			{
				func_609(uParam0, 16);
			}
			else
			{
				func_609(uParam0, 15);
			}
			break;
		case 40:
			func_609(uParam0, 20);
			break;
		case 44:
			func_609(uParam0, 22);
			break;
		case 45:
			func_609(uParam0, 23);
			break;
		case 42:
			func_609(uParam0, 24);
			break;
		case 46:
		case 47:
			func_609(uParam0, 25);
			break;
		case 48:
		case 49:
			func_609(uParam0, 21);
			break;
		case 50:
			func_609(uParam0, 26);
			break;
		case 53:
			func_609(uParam0, 27);
			break;
		case 51:
			if (__LIB_27__::func_387(uParam0->f_1084) == 11)
			{
				if (!__LIB_1__::func_167(uParam0->f_1084))
				{
					func_609(uParam0, 28);
				}
				else
				{
					func_609(uParam0, 29);
				}
			}
			else
			{
				func_609(uParam0, 30);
			}
			break;
		case 52:
			func_609(uParam0, 31);
			break;
		case 38:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			func_609(uParam0, 32);
			break;
		case 59:
			func_609(uParam0, 33);
			break;
		case 60:
			func_609(uParam0, 34);
			break;
		case 61:
			func_609(uParam0, 35);
			break;
		case 62:
			func_609(uParam0, 36);
			break;
		case 64:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_609(uParam0, 38);
			}
			break;
		case 66:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_609(uParam0, 39);
			}
			break;
		case 63:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_609(uParam0, 40);
			}
			break;
		case 67:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_609(uParam0, 41);
			}
			break;
		case 65:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_609(uParam0, 42);
			}
			break;
		case 69:
			func_609(uParam0, 43);
			break;
		case 99:
			func_609(uParam0, 44);
			break;
		case 100:
			func_609(uParam0, 45);
			break;
		case 101:
			func_609(uParam0, 46);
			break;
		case 102:
			func_609(uParam0, 47);
			break;
		case 103:
			func_609(uParam0, 48);
			break;
		case 104:
			func_609(uParam0, 49);
			break;
	}
}

void func_836(int iParam0, char* sParam1)//Position - 0x1DDDB
{
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(iParam0, "SHOW_TIP_TEXT", sParam1, 0, 0, 0, 0);
}

void func_837(var uParam0)//Position - 0x1DDF3
{
	if (func_551(uParam0))
	{
		if (!iLocal_146)
		{
			func_611(uParam0->f_711, 1, func_612(uParam0));
			iLocal_146 = 1;
		}
	}
	else if (iLocal_146)
	{
		func_611(uParam0->f_711, 0, func_612(uParam0));
		iLocal_146 = 0;
	}
}

void func_838(var uParam0)//Position - 0x1DE3C
{
	if (func_840(uParam0))
	{
		if (!iLocal_145)
		{
			func_839(uParam0->f_711, 1);
			iLocal_145 = 1;
		}
	}
	else if (iLocal_145)
	{
		func_839(uParam0->f_711, 0);
		iLocal_145 = 0;
	}
}

void func_839(int iParam0, bool bParam1)//Position - 0x1DE79
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_CREW_CUTS_VISIBLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_840(var uParam0)//Position - 0x1DE96
{
	int iVar0;
	iVar0 = uParam0->f_806;
	if (func_552(iVar0) != 2)
	{
		return 0;
	}
	return NETWORK::NETWORK_IS_ACTIVITY_SESSION();
}

void func_841(var uParam0)//Position - 0x1DEB7
{
	int iVar0;
	if (!iLocal_147)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_823.f_49)
	{
		if (uParam0->f_823.f_51[iVar0] != -1)
		{
			func_842(uParam0->f_711, func_845(iVar0), func_844(uParam0, iVar0), uParam0->f_823.f_56[iVar0], uParam0->f_823.f_239[iVar0], __LIB_11__::func_717(uParam0->f_823.f_67[iVar0]));
		}
		iVar0++;
	}
	iLocal_147 = 0;
}

void func_842(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x1DF30
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_CREW_MEMBER");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	__LIB_0__::func_700(PLAYER::GET_PLAYER_NAME(iParam2));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_844(var uParam0, int iParam1)//Position - 0x1DF75
{
	if (iParam1 != -1 && uParam0->f_823.f_51[iParam1] != -1)
	{
		return PLAYER::INT_TO_PLAYERINDEX(uParam0->f_823.f_51[iParam1]);
	}
	return __LIB_0__::getMinusOneOrNull();
}

int func_845(int iParam0)//Position - 0x1DFAC
{
	switch (iParam0)
	{
		case 0:
			return 105;
		case 1:
			return 106;
		case 2:
			return 107;
		case 3:
			return 108;
		default:
	}
	return 0;
}

void func_846(var uParam0)//Position - 0x1DFE8
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_823.f_49)
	{
		if (uParam0->f_823.f_51[iVar0] != -1)
		{
			iVar1 = func_847(func_844(uParam0, iVar0));
			if (uParam0->f_823.f_239[iVar0] != iVar1)
			{
				uParam0->f_823.f_239[iVar0] = iVar1;
				iLocal_147 = 1;
			}
		}
		iVar0++;
	}
}

int func_847(int iParam0)//Position - 0x1E046
{
	struct<13> Var0;
	if (iParam0 != __LIB_0__::getMinusOneOrNull() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		Var0 = { __LIB_0__::func_819(iParam0) };
		if (__LIB_0__::func_800(Var0))
		{
			if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var0))
			{
				if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var0))
				{
					return 2;
				}
				else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var0))
			{
				return 1;
			}
			else
			{
				return 3;
			}
		}
	}
	return 0;
}

int func_848(var uParam0)//Position - 0x1E0BF
{
	switch (iLocal_152)
	{
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 59:
			return 1;
			break;
	}
	if (__LIB_0__::func_864(&uLocal_155))
	{
		if (__LIB_0__::func_937(&uLocal_155, 4000, 0))
		{
			__LIB_0__::clearF_1Prop(&uLocal_155);
		}
		return 1;
	}
	return 0;
}

void func_849(var uParam0)//Position - 0x1E124
{
	int iVar0;
	uParam0->f_823.f_49 = func_850(uParam0);
	switch (uParam0->f_823.f_49)
	{
		case 1:
			uParam0->f_823.f_56[0] = 100;
			uParam0->f_823.f_56[1] = 0;
			uParam0->f_823.f_56[2] = 0;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		case 2:
			uParam0->f_823.f_56[0] = 85;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 0;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		case 3:
			uParam0->f_823.f_56[0] = 70;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 15;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		case 4:
			uParam0->f_823.f_56[0] = 55;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 15;
			uParam0->f_823.f_56[3] = 15;
			uParam0->f_823.f_56[4] = 0;
			break;
	}
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[4] = uParam0->f_823.f_56[4];
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_1084 == PLAYER::PLAYER_ID())
		{
			Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[iVar0] = uParam0->f_823.f_56[iVar0];
		}
		if (uParam0->f_823.f_51[iVar0] == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		{
			Global_2715699.f_6568 = uParam0->f_823.f_56[iVar0];
			Global_1944587.f_29 = Global_2715699.f_6568;
		}
		iVar0++;
	}
	iLocal_147 = 1;
}

int func_850(var uParam0)//Position - 0x1E2E2
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		uParam0->f_823.f_51[0] = uParam0->f_1084;
		uParam0->f_823.f_51[1] = -1;
		uParam0->f_823.f_51[2] = -1;
		uParam0->f_823.f_51[3] = -1;
		return 1;
	}
	iVar0 = __LIB_0__::getMinusOneOrNull();
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_823.f_51[iVar1] = -1;
		uParam0->f_823.f_67[iVar1] = 0;
		uParam0->f_823.f_239[iVar1] = 0;
		Global_1974423[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_7[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (__LIB_0__::func_156(iVar0, 1, 1))
		{
			if (iVar0 != __LIB_0__::getMinusOneOrNull())
			{
				if (!__LIB_35__::func_821(iVar0))
				{
					if (iVar2 > 3)
					{
					}
					else
					{
						uParam0->f_823.f_51[iVar2] = iVar0;
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_853(var uParam0)//Position - 0x1E404
{
	switch (uParam0->f_726.f_1)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
			}
			break;
		case 5:
			break;
	}
}

void func_854(var uParam0)//Position - 0x1E459
{
	switch (uParam0->f_726)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (!iLocal_133)
			{
				func_958(uParam0);
				func_937(uParam0);
				func_936(uParam0);
				func_934(uParam0);
				func_892(uParam0);
				func_859(uParam0);
				iLocal_133 = 1;
			}
			break;
		case 4:
			iLocal_131 = 0;
			iLocal_132 = 0;
			func_858(uParam0);
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				GRAPHICS::SET_TIMECYCLE_MODIFIER("h4_sub_commandroom_BloomRedux");
			}
			__LIB_1__::func_751();
			break;
		case 5:
			break;
	}
}

void func_858(var uParam0)//Position - 0x1E561
{
	int iVar0;
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
	if ((uParam0->f_1084 == iLocal_158 && !__LIB_1__::func_167(iLocal_158)) && !__LIB_9__::func_233(iLocal_158, 0))
	{
		iVar0 = __LIB_0__::func_369(9511, -1, 0);
		if (!BitTest(iVar0, 13))
		{
			__LIB_0__::func_151("HIF_INTROVIBE" /* GXT: Dave and Keinemusik will allow you to infiltrate El Rubio's island and scope it to prepare for The Cayo Perico Heist. Press ~INPUT_FRONTEND_ACCEPT~ when ready to begin. */, -1);
			MISC::SET_BIT(&iVar0, 13);
			__LIB_0__::func_413(9511, iVar0, -1, 1, 0);
		}
	}
}

void func_859(var uParam0)//Position - 0x1E5CD
{
	int iVar0;
	if (__LIB_9__::func_233(uParam0->f_1084, 0))
	{
		func_877(uParam0->f_711, 1, func_888(uParam0), func_880(uParam0), func_879(uParam0), func_878());
		func_876(uParam0->f_711, 99, func_608(99));
		func_876(uParam0->f_711, 100, func_608(100));
		func_876(uParam0->f_711, 101, func_608(101));
		func_876(uParam0->f_711, 102, func_608(102));
		func_876(uParam0->f_711, 103, func_608(103));
		func_876(uParam0->f_711, 104, func_608(104));
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_875(uParam0->f_711, 67, 63, 64, 66, 68, 69, 70, 65);
			func_611(uParam0->f_711, 1, func_612(uParam0));
			iLocal_146 = 1;
		}
		else
		{
			func_875(uParam0->f_711, 67, 63, 64, 66, 68, 69, -1, 65);
		}
		func_873(uParam0->f_711, func_874(uParam0));
	}
	else
	{
		if (__LIB_20__::func_781(uParam0->f_1084))
		{
			func_609(uParam0, 2);
		}
		else if (__LIB_1__::func_167(uParam0->f_1084))
		{
			func_609(uParam0, 1);
		}
		if (__LIB_37__::func_42(uParam0->f_1084))
		{
			func_609(uParam0, 4);
		}
	}
	func_870(uParam0->f_711, __LIB_37__::func_42(uParam0->f_1084));
	func_867(uParam0->f_711, func_869(0), func_868(uParam0, 0), func_869(1), func_868(uParam0, 1), func_869(2), func_868(uParam0, 2));
	func_865(uParam0->f_711, func_866());
	func_832(uParam0->f_711, 0);
	iVar0 = func_864(uParam0);
	func_863(uParam0->f_711, iVar0);
	if (func_866() == 0)
	{
		uParam0->f_806 = 1;
	}
	else
	{
		uParam0->f_806 = 63;
	}
	if (uParam0->f_1084 == iLocal_158)
	{
		Global_1975224[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_4 = uParam0->f_806;
	}
	else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		uParam0->f_806 = 1000;
		__LIB_37__::func_41(uParam0->f_711, 1000);
	}
	else if (Global_1974423[uParam0->f_1084 /*25*/].f_20)
	{
		uParam0->f_806 = Global_1975224[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_4;
		__LIB_37__::func_41(uParam0->f_711, uParam0->f_806);
	}
	if (iVar0 == 0)
	{
		func_34(uParam0, 18);
	}
	func_862(uParam0);
	func_860(uParam0);
}

void func_860(var uParam0)//Position - 0x1E7FD
{
	int iVar0;
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || uParam0->f_1084 != iLocal_158)
	{
		return;
	}
	iVar0 = __LIB_0__::func_369(9511, -1, 0);
	if (__LIB_9__::func_233(uParam0->f_1084, 0) && !BitTest(iVar0, 16))
	{
		func_615(uParam0->f_711, "H4P_OVR_INT_T" /* GXT: INTEL COMPLETE */, "H4P_OVR_INT_M" /* GXT: //Loading...~n~~n~Stage:[equipment]~n~......................................................................................................~n~&gt;/Madrazo files located.~n~Prep equipment phase can now be initiated.~n~Mandatory Prep work must be completed to unlock the Finale.~n~&lt;\ */, func_622(), "");
		uParam0->f_707 = 1;
		uParam0->f_806 = 1002;
		iLocal_152 = -2;
		return;
	}
	if (__LIB_10__::func_675(uParam0->f_1084) && !BitTest(iVar0, 14))
	{
		func_615(uParam0->f_711, "H4P_OVR_MAN_T" /* GXT: MANDATORY PREPS COMPLETE */, "H4P_OVR_MAN_M" /* GXT: //Loading...~n~~n~Stage:[finale]~n~......................................................................................................~n~&gt;/Mandatory prep work complete. Finale access granted. Planning phase can now be initiated.~n~To increase chance of success:~n~- Continue scoping for additional intel.~n~- Complete optional prep work.~n~&lt;\ */, func_622(), "");
		uParam0->f_707 = 1;
		uParam0->f_806 = 1002;
		iLocal_152 = -3;
	}
}

void func_862(var uParam0)//Position - 0x1E91B
{
	if (!uParam0->f_1080)
	{
		uParam0->f_1080.f_1 = AUDIO::GET_SOUND_ID();
		if (uParam0->f_1080.f_1 != -1)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(uParam0->f_1080.f_1, func_37(19), uParam0->f_732.f_6, func_36(19), false, 0, false);
			uParam0->f_1080 = 1;
		}
	}
}

void func_863(int iParam0, int iParam1)//Position - 0x1E971
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SHOW_SCREEN");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_864(var uParam0)//Position - 0x1E98E
{
	if (((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || uParam0->f_1096) || (uParam0->f_1084 != iLocal_158 && Global_1974423[uParam0->f_1084 /*25*/].f_20)) || uParam0->f_1097)
	{
		return 1;
	}
	return 0;
}

void func_865(int iParam0, int iParam1)//Position - 0x1E9D9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INITIAL_TAB_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_866()//Position - 0x1E9F6
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 2;
	}
	return 0;
}

void func_867(int iParam0, char* sParam1, bool bParam2, char* sParam3, bool bParam4, char* sParam5, bool bParam6)//Position - 0x1EA0A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_TABS");
	__LIB_0__::func_610(sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
	__LIB_0__::func_610(sParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
	__LIB_0__::func_610(sParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam6);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_868(var uParam0, int iParam1)//Position - 0x1EA45
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			if (!__LIB_9__::func_233(uParam0->f_1084, 0))
			{
				return 1;
			}
			break;
		case 2:
			if (!__LIB_10__::func_675(uParam0->f_1084))
			{
				return 1;
			}
			break;
	}
	return 0;
}

char* func_869(int iParam0)//Position - 0x1EA9E
{
	switch (iParam0)
	{
		case 0:
			return "H4P_INTEL_TAB" /* GXT: INTEL */;
		case 1:
			return "H4P_PREP_TAB" /* GXT: PREP */;
		case 2:
			return "H4P_FINALE_TAB" /* GXT: FINALE */;
		default:
	}
	return "";
}

void func_870(int iParam0, bool bParam1)//Position - 0x1EAD8
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_IS_HARD_MODE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_873(int iParam0, char* sParam1)//Position - 0x1EB32
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_FINALE_LIST_TITLE");
	__LIB_0__::func_610(sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_874(var uParam0)//Position - 0x1EB4F
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || uParam0->f_1084 != PLAYER::PLAYER_ID())
	{
		return "H4P_LIST_PREV" /* GXT: PREVIEW SELECTIONS */;
	}
	return "H4P_LIST_MAKE" /* GXT: MAKE SELECTIONS */;
}

void func_875(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1EB7A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_FINALE_MENU_IDS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_876(int iParam0, int iParam1, int iParam2)//Position - 0x1EBC1
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_FINALE_COST");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_877(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)//Position - 0x1EBE4
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_PAYOUTS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	__LIB_0__::func_610(sParam4);
	__LIB_0__::func_610(sParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_878()//Position - 0x1EC19
{
	return "H4_LOOT_ADD" /* GXT: SECONDARY TARGETS */;
}

char* func_879(var uParam0)//Position - 0x1EC25
{
	switch (__LIB_8__::func_749(uParam0->f_1084))
	{
		case 0:
			return "H4_LOOT_TEQ" /* GXT: SINSIMITO TEQUILA */;
		case 1:
			return "H4_LOOT_NKLC" /* GXT: RUBY NECKLACE */;
		case 2:
			return "H4_LOOT_BONDS" /* GXT: BEARER BONDS */;
		case 3:
			return "H4_LOOT_DIAM" /* GXT: PINK DIAMOND */;
		case 4:
			return "H4_LOOT_FILES" /* GXT: MADRAZO FILES */;
		case 5:
			return "H4_LOOT_STAT" /* GXT: PANTHER STATUE */;
		default:
	}
	return "";
}

int func_880(var uParam0)//Position - 0x1EC8D
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = (iVar0 + (__LIB_42__::func_347(uParam0->f_1084, iVar1) * func_881(uParam0->f_1084, iVar1, 0, 0)));
		iVar1++;
	}
	return iVar0;
}

int func_881(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1ECCA
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_5, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_13, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			case 1:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_6, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_14, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			case 2:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_7, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_15, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			case 3:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_8, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_16, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			case 4:
				bVar1 = false;
				while (bVar1 < 7)
				{
					if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_18, bVar1))
					{
						iVar0++;
					}
					bVar1++;
				}
				break;
			}
	}
	return iVar0;
}

int func_888(var uParam0)//Position - 0x1EFD0
{
	int iVar0;
	float fVar1;
	iVar0 = __LIB_37__::func_49(__LIB_8__::func_749(uParam0->f_1084));
	fVar1 = __LIB_37__::func_48(__LIB_0__::func_138(__LIB_37__::func_42(uParam0->f_1084), 2, 1));
	iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar1));
	return iVar0;
}

void func_892(var uParam0)//Position - 0x1F0C1
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!__LIB_9__::func_233(uParam0->f_1084, 0) && !__LIB_1__::func_167(uParam0->f_1084))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < 24)
	{
		if (__LIB_37__::func_75(uParam0->f_1084, bVar0) && __LIB_42__::func_352(uParam0->f_1084, bVar0))
		{
			iVar3 = __LIB_37__::func_74(uParam0->f_1084, bVar0);
			func_927(uParam0->f_711, func_930(iVar3), -1, func_929(iVar3), 0, __LIB_37__::func_73(bVar0));
		}
		bVar0++;
	}
	bVar1 = false;
	while (bVar1 < 8)
	{
		if (__LIB_37__::func_72(uParam0->f_1084, bVar1) && __LIB_42__::func_351(uParam0->f_1084, bVar1))
		{
			iVar3 = __LIB_37__::func_71(uParam0->f_1084, bVar1);
			func_927(uParam0->f_711, func_930(iVar3), -1, func_929(iVar3), 1, __LIB_37__::func_70(bVar1));
		}
		bVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 7)
	{
		if (__LIB_37__::func_69(uParam0->f_1084, iVar2) && __LIB_37__::func_68(uParam0->f_1084, iVar2))
		{
			func_927(uParam0->f_711, 11, -1, 7, 1, __LIB_37__::func_67(iVar2));
		}
		iVar2++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (__LIB_42__::func_344(uParam0->f_1084, iVar4))
		{
			func_927(uParam0->f_711, 33, -1, 2, 0, __LIB_37__::func_62(__LIB_42__::func_350(uParam0->f_1084, iVar4)));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (__LIB_42__::func_343(uParam0->f_1084, iVar4))
		{
			func_927(uParam0->f_711, 34, -1, 2, 0, __LIB_37__::func_57(__LIB_42__::func_349(uParam0->f_1084, iVar4)));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (__LIB_42__::func_345(uParam0->f_1084, iVar4))
		{
			func_927(uParam0->f_711, 32, -1, 2, 0, __LIB_37__::func_52(__LIB_42__::func_348(uParam0->f_1084, iVar4)));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 8)
	{
		if (__LIB_27__::func_386(uParam0->f_1084, iVar4))
		{
			func_927(uParam0->f_711, func_901(iVar4, 0), func_901(iVar4, 1), func_900(iVar4), 0, func_899(iVar4));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (__LIB_37__::func_15(uParam0->f_1084, iVar4))
		{
			func_927(uParam0->f_711, func_898(iVar4, 0), func_898(iVar4, 1), 1, 0, func_897(iVar4));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 6)
	{
		if (__LIB_28__::func_632(uParam0->f_1084, iVar4))
		{
			func_927(uParam0->f_711, func_896(iVar4, 0), func_896(iVar4, 1), 0, 1, func_895(iVar4));
		}
		iVar4++;
	}
	if (__LIB_37__::func_29(uParam0->f_1084))
	{
		func_927(uParam0->f_711, 31, -1, 2, 0, 4367.82f, -4579f, 23.06f);
	}
	if (__LIB_37__::func_30(uParam0->f_1084))
	{
		func_927(uParam0->f_711, 30, -1, 2, 0, 4480.7f, -4588.52f, 4.56f);
	}
	func_927(uParam0->f_711, 5, -1, 8, 0, 5020.6353f, -5746.534f, 31.93707f);
	if (__LIB_37__::func_16(uParam0->f_1084))
	{
		func_927(uParam0->f_711, 35, -1, 2, 0, __LIB_37__::func_50(__LIB_37__::func_51(uParam0->f_1084)));
	}
}

Vector3 func_895(int iParam0)//Position - 0x1F49B
{
	switch (iParam0)
	{
		case 0:
			return 4982.59f, -5711.01f, 18.86f;
		case 1:
			return 5031.86f, -5685.84f, 23.87f;
		case 2:
			return 5085.03f, -5732.67f, 14.8f;
		case 3:
			return 4992.24f, -5807.17f, 24.87f;
		case 4:
			return 4960.13f, -5785.66f, 19.96f;
		case 5:
			return 5045.17f, -5817.24f, -12.7f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_896(int iParam0, bool bParam1)//Position - 0x1F53D
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 85;
			case 5:
				return 86;
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 24;
			case 1:
				return 25;
			case 2:
				return 26;
			case 3:
				return 27;
			case 4:
				return 28;
			case 5:
				return 29;
			}
		default:
	}
	return -1;
}

Vector3 func_897(int iParam0)//Position - 0x1F5B4
{
	switch (iParam0)
	{
		case 0:
			return 4052.4f, -4655.79f, 3.18f;
		case 1:
			return 4799.21f, -5157.77f, -4.34f;
		case 2:
			return 5176.88f, -4752.2f, -4.11f;
		case 3:
			return 4533.25f, -4278.35f, 0f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_898(int iParam0, bool bParam1)//Position - 0x1F622
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 87;
			case 1:
				return 88;
			case 2:
				return 89;
			case 3:
				return 90;
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 20;
			case 1:
				return 21;
			case 2:
				return 22;
			case 3:
				return 23;
			}
		default:
	}
	return -1;
}

Vector3 func_899(int iParam0)//Position - 0x1F699
{
	switch (iParam0)
	{
		case 0:
			return 4052.4f, -4655.79f, 3.18f;
		case 3:
			return 4799.21f, -5157.77f, -4.34f;
		case 4:
			return 5176.88f, -4752.2f, -4.11f;
		case 2:
			return 4891.13f, -4925.02f, 9.31f;
		case 5:
			return 4820.73f, -4302.71f, 4.24f;
		case 6:
			return 5478.63f, -5847.74f, 19.54f;
		case 7:
			return 5045.17f, -5817.24f, -12.7f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_900(int iParam0)//Position - 0x1F753
{
	switch (iParam0)
	{
		case 1:
			return 9;
		default:
	}
	return 0;
}

int func_901(int iParam0, bool bParam1)//Position - 0x1F76E
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 77;
			case 1:
				return 78;
			case 2:
				return 79;
			case 3:
				return 80;
			case 4:
				return 81;
			case 5:
				return 82;
			case 6:
				return 83;
			case 7:
				return 84;
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 12;
			case 1:
				return 13;
			case 2:
				return 14;
			case 3:
				return 15;
			case 4:
				return 16;
			case 5:
				return 17;
			case 6:
				return 18;
			case 7:
				return 19;
			}
		default:
	}
	return -1;
}

void func_927(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, struct<2> Param5, float fParam6)//Position - 0x2065A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "ADD_WORLD_MAP_ICON");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Param5.f_0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Param5.f_1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_929(int iParam0)//Position - 0x208E9
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 3;
		case 2:
			return 6;
		case 3:
			return 5;
		default:
	}
	return -1;
}

int func_930(int iParam0)//Position - 0x20921
{
	switch (iParam0)
	{
		case 0:
			return 7;
		case 1:
			return 8;
		case 2:
			return 9;
		case 3:
			return 10;
		default:
	}
	return -1;
}

void func_934(var uParam0)//Position - 0x20AD0
{
	int iVar0;
	if (!__LIB_9__::func_233(uParam0->f_1084, 0) && !__LIB_1__::func_167(uParam0->f_1084))
	{
		func_935(uParam0->f_711, Local_109[iVar0 /*14*/]);
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_109.f_0)
	{
		if (Local_109[iVar0 /*14*/])
		{
			func_935(uParam0->f_711, Local_109[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_110.f_0)
	{
		if (Local_110[iVar0 /*14*/])
		{
			func_935(uParam0->f_711, Local_110[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_111.f_0)
	{
		if (Local_111[iVar0 /*14*/])
		{
			func_935(uParam0->f_711, Local_111[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_112.f_0)
	{
		if (Local_112[iVar0 /*14*/])
		{
			func_935(uParam0->f_711, Local_112[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_114.f_0)
	{
		if (Local_114[iVar0 /*14*/])
		{
			func_935(uParam0->f_711, Local_114[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_113.f_0)
	{
		if (Local_113[iVar0 /*14*/])
		{
			func_935(uParam0->f_711, Local_113[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_115.f_0)
	{
		if (Local_115[iVar0 /*14*/])
		{
			func_935(uParam0->f_711, Local_115[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_116.f_0)
	{
		if (Local_116[iVar0 /*14*/])
		{
			func_935(uParam0->f_711, Local_116[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_117.f_0)
	{
		if (Local_117[iVar0 /*14*/])
		{
			func_935(uParam0->f_711, Local_117[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_118.f_0)
	{
		if (Local_118[iVar0 /*14*/])
		{
			func_935(uParam0->f_711, Local_118[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_119.f_0)
	{
		if (Local_119[iVar0 /*14*/])
		{
			func_935(uParam0->f_711, Local_119[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_120.f_0)
	{
		if (Local_120[iVar0 /*9*/])
		{
			func_577(uParam0->f_711, Local_120[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_121.f_0)
	{
		if (Local_121[iVar0 /*9*/])
		{
			func_577(uParam0->f_711, Local_121[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_122.f_0)
	{
		if (Local_122[iVar0 /*9*/])
		{
			func_577(uParam0->f_711, Local_122[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_123.f_0)
	{
		if (Local_123[iVar0 /*9*/])
		{
			func_577(uParam0->f_711, Local_123[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_124.f_0)
	{
		if (Local_124[iVar0 /*9*/])
		{
			func_577(uParam0->f_711, Local_124[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_125.f_0)
	{
		if (Local_125[iVar0 /*9*/])
		{
			func_577(uParam0->f_711, Local_125[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_126.f_0)
	{
		if (Local_126[iVar0 /*9*/])
		{
			func_577(uParam0->f_711, Local_126[iVar0 /*9*/], 0);
			if (Local_126[iVar0 /*9*/].f_2 != 98 || __LIB_8__::func_748(uParam0->f_1084))
			{
				func_566(uParam0->f_711, Local_126[iVar0 /*9*/].f_2, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_127.f_0)
	{
		if (Local_127[iVar0 /*9*/])
		{
			func_577(uParam0->f_711, Local_127[iVar0 /*9*/], 0);
			if (func_413(uParam0->f_1084, func_605(Local_127[iVar0 /*9*/].f_2)))
			{
				func_566(uParam0->f_711, Local_127[iVar0 /*9*/].f_2, 1);
			}
		}
		iVar0++;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		iVar0 = 0;
		while (iVar0 < Local_128.f_0)
		{
			if (Local_128[iVar0 /*9*/])
			{
				func_577(uParam0->f_711, Local_128[iVar0 /*9*/], 1);
			}
			iVar0++;
		}
	}
}

void func_935(int iParam0, struct<14> Param1)//Position - 0x20F54
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "ADD_SETUP_ITEM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_3);
	__LIB_0__::func_610(Param1.f_4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Param1.f_8);
	__LIB_0__::func_610(Param1.f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(Param1.f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Param1.f_11);
	if (Param1.f_12 != -2)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_12);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_13);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_936(var uParam0)//Position - 0x20FDD
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (func_868(uParam0, 2))
	{
		return;
	}
	func_579(uParam0, &(Local_120[0 /*9*/]), 0, 63);
	func_579(uParam0, &(Local_120[1 /*9*/]), 0, 64);
	func_579(uParam0, &(Local_120[2 /*9*/]), 0, 65);
	func_579(uParam0, &(Local_120[3 /*9*/]), 0, 66);
	func_579(uParam0, &(Local_120[4 /*9*/]), 0, 67);
	func_579(uParam0, &(Local_120[5 /*9*/]), 0, 68);
	func_579(uParam0, &(Local_120[6 /*9*/]), 0, 69);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		func_579(uParam0, &(Local_120[7 /*9*/]), 0, 70);
	}
	iVar0 = 0;
	if (__LIB_9__::func_233(uParam0->f_1084, 7))
	{
		func_579(uParam0, &(Local_121[iVar0 /*9*/]), 63, 71);
		iVar0++;
	}
	if (__LIB_9__::func_233(uParam0->f_1084, 1) && __LIB_9__::func_233(uParam0->f_1084, 6))
	{
		func_579(uParam0, &(Local_121[iVar0 /*9*/]), 63, 72);
		iVar0++;
	}
	if (__LIB_9__::func_233(uParam0->f_1084, 5))
	{
		func_579(uParam0, &(Local_121[iVar0 /*9*/]), 63, 73);
		iVar0++;
	}
	if (__LIB_9__::func_233(uParam0->f_1084, 2) && __LIB_9__::func_233(uParam0->f_1084, 6))
	{
		func_579(uParam0, &(Local_121[iVar0 /*9*/]), 63, 74);
		iVar0++;
	}
	if (__LIB_9__::func_233(uParam0->f_1084, 3))
	{
		func_579(uParam0, &(Local_121[iVar0 /*9*/]), 63, 75);
		iVar0++;
	}
	if (__LIB_9__::func_233(uParam0->f_1084, 4))
	{
		func_579(uParam0, &(Local_121[iVar0 /*9*/]), 63, 76);
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		iVar2 = (77 + iVar1);
		if (__LIB_27__::func_386(uParam0->f_1084, func_381(iVar2)))
		{
			func_579(uParam0, &(Local_122[iVar0 /*9*/]), 64, iVar2);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	if (__LIB_9__::func_233(uParam0->f_1084, 8))
	{
		func_579(uParam0, &(Local_123[iVar0 /*9*/]), 65, 85);
		iVar0++;
	}
	if (__LIB_9__::func_233(uParam0->f_1084, 9))
	{
		func_579(uParam0, &(Local_123[iVar0 /*9*/]), 65, 86);
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = (87 + iVar1);
		if (__LIB_37__::func_15(uParam0->f_1084, func_379(iVar2)))
		{
			func_579(uParam0, &(Local_124[iVar0 /*9*/]), 66, iVar2);
			iVar0++;
		}
		iVar1++;
	}
	func_579(uParam0, &(Local_125[0 /*9*/]), 67, 91);
	func_579(uParam0, &(Local_125[1 /*9*/]), 67, 92);
	if (__LIB_28__::func_471(uParam0->f_1084) == 1)
	{
		func_579(uParam0, &(Local_126[0 /*9*/]), 68, 93);
	}
	else if (__LIB_28__::func_471(uParam0->f_1084) == 2)
	{
		func_579(uParam0, &(Local_126[0 /*9*/]), 68, 94);
	}
	else if (__LIB_28__::func_471(uParam0->f_1084) == 3)
	{
		func_579(uParam0, &(Local_126[0 /*9*/]), 68, 95);
	}
	else if (__LIB_28__::func_471(uParam0->f_1084) == 4)
	{
		func_579(uParam0, &(Local_126[0 /*9*/]), 68, 96);
	}
	else if (__LIB_28__::func_471(uParam0->f_1084) == 5)
	{
		func_579(uParam0, &(Local_126[0 /*9*/]), 68, 97);
	}
	func_579(uParam0, &(Local_126[1 /*9*/]), 68, 98);
	bLocal_139 = __LIB_8__::func_748(uParam0->f_1084);
	func_579(uParam0, &(Local_127[0 /*9*/]), 69, 99);
	func_579(uParam0, &(Local_127[1 /*9*/]), 69, 100);
	func_579(uParam0, &(Local_127[2 /*9*/]), 69, 101);
	func_579(uParam0, &(Local_127[3 /*9*/]), 69, 102);
	func_579(uParam0, &(Local_127[4 /*9*/]), 69, 103);
	func_579(uParam0, &(Local_127[5 /*9*/]), 69, 104);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		func_579(uParam0, &(Local_128[0 /*9*/]), 70, 105);
		func_579(uParam0, &(Local_128[1 /*9*/]), 70, 106);
		func_579(uParam0, &(Local_128[2 /*9*/]), 70, 107);
		func_579(uParam0, &(Local_128[3 /*9*/]), 70, 108);
	}
}

void func_937(var uParam0)//Position - 0x213C6
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (func_868(uParam0, 1))
	{
		return;
	}
	func_938(uParam0, &(Local_115[0 /*14*/]), 1, 0, 36, 0);
	func_938(uParam0, &(Local_115[1 /*14*/]), 1, 0, 37, 0);
	func_938(uParam0, &(Local_115[2 /*14*/]), 1, 0, 38, 0);
	func_938(uParam0, &(Local_115[3 /*14*/]), 1, 0, 39, 0);
	func_938(uParam0, &(Local_116[0 /*14*/]), 1, 36, 40, 0);
	func_938(uParam0, &(Local_116[1 /*14*/]), 1, 36, 41, 0);
	func_938(uParam0, &(Local_116[2 /*14*/]), 1, 36, 42, 0);
	func_938(uParam0, &(Local_116[3 /*14*/]), 1, 36, 43, 0);
	func_938(uParam0, &(Local_116[4 /*14*/]), 1, 36, 44, 0);
	func_938(uParam0, &(Local_116[5 /*14*/]), 1, 36, 45, 0);
	func_938(uParam0, &(Local_116[6 /*14*/]), 1, 41, 46, 0);
	func_938(uParam0, &(Local_116[7 /*14*/]), 1, 41, 47, 0);
	func_938(uParam0, &(Local_116[8 /*14*/]), 1, 43, 48, 0);
	func_938(uParam0, &(Local_116[9 /*14*/]), 1, 43, 49, 0);
	func_938(uParam0, &(Local_117[0 /*14*/]), 1, 37, 50, 0);
	func_938(uParam0, &(Local_117[1 /*14*/]), 1, 37, 51, 0);
	func_938(uParam0, &(Local_117[2 /*14*/]), 1, 37, 52, 0);
	func_938(uParam0, &(Local_117[3 /*14*/]), 1, 37, 53, 0);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = (54 + iVar1);
		if (!__LIB_9__::func_233(uParam0->f_1084, 13) || __LIB_28__::func_471(uParam0->f_1084) == func_603(iVar2))
		{
			func_938(uParam0, &(Local_118[iVar0 /*14*/]), 1, 38, iVar2, 0);
			iVar0++;
		}
		iVar1++;
	}
	func_938(uParam0, &(Local_118[iVar0 /*14*/]), 1, 38, 59, 0);
	func_938(uParam0, &(Local_119[0 /*14*/]), 1, 39, 60, 0);
	func_938(uParam0, &(Local_119[1 /*14*/]), 1, 39, 61, 0);
	func_938(uParam0, &(Local_119[2 /*14*/]), 1, 39, 62, 0);
}

void func_938(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x215AB
{
	*uParam1 = 1;
	uParam1->f_1 = iParam2;
	uParam1->f_2 = iParam3;
	uParam1->f_3 = iParam4;
	if (bParam5)
	{
		uParam1->f_4 = "CH_LIST_BLANK" /* GXT: ??? */;
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 2;
		uParam1->f_8 = 0;
		uParam1->f_9 = "CH_LIST_BLANK" /* GXT: ??? */;
		uParam1->f_10 = "";
		uParam1->f_11 = 0;
		uParam1->f_12 = -1;
		uParam1->f_13 = -1;
	}
	else
	{
		uParam1->f_4 = func_586(uParam0, iParam4);
		uParam1->f_5 = func_956(uParam0, iParam4);
		uParam1->f_6 = func_955(uParam0, iParam4);
		if (func_367(uParam0, iParam4))
		{
			uParam1->f_7 = func_581(uParam0, iParam4);
		}
		else
		{
			uParam1->f_7 = 0;
		}
		uParam1->f_8 = func_954(uParam0, iParam4);
		uParam1->f_9 = func_584(uParam0, iParam4);
		uParam1->f_10 = func_582(uParam0, iParam4);
		uParam1->f_11 = func_580(iParam4);
		if (func_942(uParam0, iParam4) != -2)
		{
			uParam1->f_12 = func_942(uParam0, iParam4);
			uParam1->f_13 = func_939(uParam0, iParam4);
		}
	}
}

int func_939(var uParam0, int iParam1)//Position - 0x216A3
{
	switch (iParam1)
	{
		case 2:
			if (__LIB_34__::func_356(uParam0->f_1084))
			{
				return func_941(uParam0->f_1084);
			}
			return -1;
		case 3:
			return 8;
		case 4:
			return 4;
		case 5:
			return 6;
		case 6:
			return 6;
		case 7:
			if (__LIB_37__::func_76(uParam0->f_1084, 0, 0, 0) > 0 && func_881(uParam0->f_1084, 0, 0, 0) == __LIB_37__::func_76(uParam0->f_1084, 0, 0, 0))
			{
				return __LIB_37__::func_76(uParam0->f_1084, 0, 0, 0);
			}
			break;
		case 8:
			if (__LIB_37__::func_76(uParam0->f_1084, 1, 0, 0) > 0 && func_881(uParam0->f_1084, 1, 0, 0) == __LIB_37__::func_76(uParam0->f_1084, 1, 0, 0))
			{
				return __LIB_37__::func_76(uParam0->f_1084, 1, 0, 0);
			}
			break;
		case 9:
			if (__LIB_37__::func_76(uParam0->f_1084, 2, 0, 0) > 0 && func_881(uParam0->f_1084, 2, 0, 0) == __LIB_37__::func_76(uParam0->f_1084, 2, 0, 0))
			{
				return __LIB_37__::func_76(uParam0->f_1084, 2, 0, 0);
			}
			break;
		case 10:
			if (__LIB_37__::func_76(uParam0->f_1084, 3, 0, 0) > 0 && func_881(uParam0->f_1084, 3, 0, 0) == __LIB_37__::func_76(uParam0->f_1084, 3, 0, 0))
			{
				return __LIB_37__::func_76(uParam0->f_1084, 3, 0, 0);
			}
			break;
		case 11:
			if (__LIB_37__::func_76(uParam0->f_1084, 4, 0, 0) > 0 && func_881(uParam0->f_1084, 4, 0, 0) == __LIB_37__::func_76(uParam0->f_1084, 4, 0, 0))
			{
				return __LIB_37__::func_76(uParam0->f_1084, 4, 0, 0);
			}
			break;
		case 30:
			return 1;
		case 31:
			return 1;
		case 33:
			return 4;
		case 34:
			return 4;
		case 32:
			return 4;
		case 35:
			return 1;
		case 36:
			if (__LIB_27__::func_386(uParam0->f_1084, 5) || __LIB_27__::func_386(uParam0->f_1084, 6))
			{
				return 6;
			}
			return 5;
		case 37:
			if (!__LIB_27__::func_386(uParam0->f_1084, 7))
			{
				return 3;
			}
			return 4;
		case 38:
			return 1;
		case 39:
			return 3;
	}
	return -2;
}

int func_941(int iParam0)//Position - 0x21B05
{
	int iVar0;
	if (iParam0 != -1)
	{
		iVar0 = (iVar0 + __LIB_37__::func_76(iParam0, 0, 0, 0));
		iVar0 = (iVar0 + __LIB_37__::func_76(iParam0, 1, 0, 0));
		iVar0 = (iVar0 + __LIB_37__::func_76(iParam0, 2, 0, 0));
		iVar0 = (iVar0 + __LIB_37__::func_76(iParam0, 3, 0, 0));
		iVar0 = (iVar0 + __LIB_37__::func_76(iParam0, 4, 0, 0));
	}
	return iVar0;
}

int func_942(var uParam0, int iParam1)//Position - 0x21B5B
{
	switch (iParam1)
	{
		case 2:
			if (__LIB_34__::func_356(uParam0->f_1084))
			{
				return func_941(uParam0->f_1084);
			}
			return -1;
		case 3:
			return func_953(uParam0);
		case 4:
			return func_952(uParam0);
		case 5:
			return func_951(uParam0);
		case 6:
			return func_950(uParam0);
		case 7:
			if (__LIB_37__::func_76(uParam0->f_1084, 0, 0, 0) > 0 && func_881(uParam0->f_1084, 0, 0, 0) == __LIB_37__::func_76(uParam0->f_1084, 0, 0, 0))
			{
				return __LIB_37__::func_76(uParam0->f_1084, 0, 0, 0);
			}
			break;
		case 8:
			if (__LIB_37__::func_76(uParam0->f_1084, 1, 0, 0) > 0 && func_881(uParam0->f_1084, 1, 0, 0) == __LIB_37__::func_76(uParam0->f_1084, 1, 0, 0))
			{
				return __LIB_37__::func_76(uParam0->f_1084, 1, 0, 0);
			}
			break;
		case 9:
			if (__LIB_37__::func_76(uParam0->f_1084, 2, 0, 0) > 0 && func_881(uParam0->f_1084, 2, 0, 0) == __LIB_37__::func_76(uParam0->f_1084, 2, 0, 0))
			{
				return __LIB_37__::func_76(uParam0->f_1084, 2, 0, 0);
			}
			break;
		case 10:
			if (__LIB_37__::func_76(uParam0->f_1084, 3, 0, 0) > 0 && func_881(uParam0->f_1084, 3, 0, 0) == __LIB_37__::func_76(uParam0->f_1084, 3, 0, 0))
			{
				return __LIB_37__::func_76(uParam0->f_1084, 3, 0, 0);
			}
			break;
		case 11:
			if (__LIB_37__::func_76(uParam0->f_1084, 4, 0, 0) > 0 && func_881(uParam0->f_1084, 4, 0, 0) == __LIB_37__::func_76(uParam0->f_1084, 4, 0, 0))
			{
				return __LIB_37__::func_76(uParam0->f_1084, 4, 0, 0);
			}
			break;
		case 30:
			return __LIB_1__::func_137(__LIB_37__::func_30(uParam0->f_1084));
		case 31:
			return __LIB_1__::func_137(__LIB_37__::func_29(uParam0->f_1084));
		case 33:
			return func_948(uParam0);
		case 34:
			return func_947(uParam0);
		case 32:
			return func_946(uParam0);
		case 35:
			return __LIB_1__::func_137(__LIB_37__::func_16(uParam0->f_1084));
		case 36:
			return func_945(uParam0);
		case 37:
			return func_944(uParam0);
		case 38:
			if (__LIB_9__::func_233(uParam0->f_1084, 13))
			{
				return 1;
			}
			return 0;
		case 39:
			return func_943(uParam0);
	}
	return -2;
}

int func_943(var uParam0)//Position - 0x21DE6
{
	int iVar0;
	if (__LIB_9__::func_233(uParam0->f_1084, 14))
	{
		iVar0++;
	}
	if (__LIB_9__::func_233(uParam0->f_1084, 15))
	{
		iVar0++;
	}
	if (__LIB_9__::func_233(uParam0->f_1084, 16))
	{
		iVar0++;
	}
	return iVar0;
}

int func_944(var uParam0)//Position - 0x21E2C
{
	int iVar0;
	if (__LIB_9__::func_233(uParam0->f_1084, 8))
	{
		iVar0++;
	}
	if (__LIB_9__::func_233(uParam0->f_1084, 9))
	{
		iVar0++;
	}
	if (__LIB_9__::func_233(uParam0->f_1084, 11))
	{
		iVar0++;
	}
	if (__LIB_9__::func_233(uParam0->f_1084, 12))
	{
		iVar0++;
	}
	return iVar0;
}

int func_945(var uParam0)//Position - 0x21E86
{
	int iVar0;
	if (__LIB_9__::func_233(uParam0->f_1084, 7))
	{
		iVar0++;
	}
	if (__LIB_9__::func_233(uParam0->f_1084, 1) && __LIB_9__::func_233(uParam0->f_1084, 6))
	{
		iVar0++;
	}
	if (__LIB_9__::func_233(uParam0->f_1084, 5))
	{
		iVar0++;
	}
	if (__LIB_9__::func_233(uParam0->f_1084, 2) && __LIB_9__::func_233(uParam0->f_1084, 6))
	{
		iVar0++;
	}
	if (__LIB_9__::func_233(uParam0->f_1084, 3))
	{
		iVar0++;
	}
	if (__LIB_9__::func_233(uParam0->f_1084, 4))
	{
		iVar0++;
	}
	return iVar0;
}

int func_946(var uParam0)//Position - 0x21F20
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (__LIB_42__::func_345(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_947(var uParam0)//Position - 0x21F50
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (__LIB_42__::func_343(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_948(var uParam0)//Position - 0x21F80
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (__LIB_42__::func_344(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_950(var uParam0)//Position - 0x21FC2
{
	int iVar0;
	if (__LIB_43__::func_488(uParam0->f_1084))
	{
		iVar0++;
	}
	if (__LIB_43__::func_487(uParam0->f_1084))
	{
		iVar0++;
	}
	if (__LIB_43__::func_486(uParam0->f_1084))
	{
		iVar0++;
	}
	if (__LIB_37__::func_16(uParam0->f_1084))
	{
		iVar0++;
	}
	if (__LIB_37__::func_30(uParam0->f_1084))
	{
		iVar0++;
	}
	if (__LIB_37__::func_29(uParam0->f_1084))
	{
		iVar0++;
	}
	return iVar0;
}

int func_951(var uParam0)//Position - 0x22038
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (__LIB_28__::func_632(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_952(var uParam0)//Position - 0x22069
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (__LIB_37__::func_15(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_953(var uParam0)//Position - 0x2209A
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (__LIB_27__::func_386(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_954(var uParam0, int iParam1)//Position - 0x220CB
{
	if (func_367(uParam0, iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 37:
		case 38:
			return 1;
		case 36:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			if (!__LIB_9__::func_950(uParam0->f_1084, 1))
			{
				return 1;
			}
			break;
		case 50:
		case 53:
			if (!__LIB_9__::func_233(uParam0->f_1084, 8) && !__LIB_9__::func_233(uParam0->f_1084, 9))
			{
				return 1;
			}
			break;
		case 51:
		case 52:
			return 1;
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			if (!__LIB_9__::func_233(uParam0->f_1084, 13))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_955(var uParam0, int iParam1)//Position - 0x221B0
{
	switch (iParam1)
	{
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
		case 16:
			return 1;
		case 17:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 1;
		case 30:
			return 1;
		case 31:
			return 1;
		case 32:
			return 1;
		case 33:
			return 1;
		case 34:
			return 1;
		case 35:
			return 1;
		case 24:
			return 1;
		case 25:
			return 1;
		case 26:
			return 1;
		case 27:
			return 1;
		case 28:
			return 1;
		case 29:
			return 1;
		case 36:
			return 1;
		case 37:
			return 1;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 1;
		case 41:
			return 1;
		case 42:
			return 1;
		case 43:
			return 1;
		case 44:
			return 1;
		case 45:
			return 1;
		case 46:
			return 1;
		case 47:
			return 1;
		case 48:
			return 1;
		case 49:
			return 1;
		case 50:
			return 1;
		case 53:
			return 1;
		case 51:
			return 1;
		case 52:
			return 1;
		case 54:
			return 1;
		case 55:
			return 1;
		case 56:
			return 1;
		case 57:
			return 1;
		case 58:
			return 1;
		case 59:
			return 1;
		case 60:
			return 1;
		case 61:
			return 1;
		case 62:
			return 1;
		default:
	}
	return 0;
}

int func_956(var uParam0, int iParam1)//Position - 0x2242C
{
	switch (iParam1)
	{
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return __LIB_1__::func_137(__LIB_28__::func_631(uParam0->f_1084, 0));
		case 8:
			return __LIB_1__::func_137(__LIB_28__::func_631(uParam0->f_1084, 1));
		case 9:
			return __LIB_1__::func_137(__LIB_28__::func_631(uParam0->f_1084, 2));
		case 10:
			return __LIB_1__::func_137(__LIB_28__::func_631(uParam0->f_1084, 3));
		case 11:
			return __LIB_1__::func_137(func_957(uParam0->f_1084));
		case 12:
			return __LIB_1__::func_137(__LIB_27__::func_386(uParam0->f_1084, 0));
		case 13:
			return __LIB_1__::func_137(__LIB_27__::func_386(uParam0->f_1084, 1));
		case 14:
			return __LIB_1__::func_137(__LIB_27__::func_386(uParam0->f_1084, 2));
		case 15:
			return __LIB_1__::func_137(__LIB_27__::func_386(uParam0->f_1084, 3));
		case 16:
			return __LIB_1__::func_137(__LIB_27__::func_386(uParam0->f_1084, 4));
		case 17:
			return __LIB_1__::func_137(__LIB_27__::func_386(uParam0->f_1084, 5));
		case 18:
			return __LIB_1__::func_137(__LIB_27__::func_386(uParam0->f_1084, 6));
		case 19:
			return __LIB_1__::func_137(__LIB_27__::func_386(uParam0->f_1084, 7));
		case 20:
			return __LIB_1__::func_137(__LIB_37__::func_15(uParam0->f_1084, 0));
		case 21:
			return __LIB_1__::func_137(__LIB_37__::func_15(uParam0->f_1084, 1));
		case 22:
			return __LIB_1__::func_137(__LIB_37__::func_15(uParam0->f_1084, 2));
		case 23:
			return __LIB_1__::func_137(__LIB_37__::func_15(uParam0->f_1084, 3));
		case 30:
			return __LIB_1__::func_137(__LIB_37__::func_30(uParam0->f_1084));
		case 31:
			return __LIB_1__::func_137(__LIB_37__::func_29(uParam0->f_1084));
		case 32:
			return __LIB_1__::func_137(__LIB_43__::func_488(uParam0->f_1084));
		case 33:
			return __LIB_1__::func_137(__LIB_43__::func_487(uParam0->f_1084));
		case 34:
			return __LIB_1__::func_137(__LIB_43__::func_486(uParam0->f_1084));
		case 35:
			return __LIB_1__::func_137(__LIB_37__::func_16(uParam0->f_1084));
		case 24:
			return __LIB_1__::func_137(__LIB_28__::func_632(uParam0->f_1084, 0));
		case 25:
			return __LIB_1__::func_137(__LIB_28__::func_632(uParam0->f_1084, 1));
		case 26:
			return __LIB_1__::func_137(__LIB_28__::func_632(uParam0->f_1084, 2));
		case 27:
			return __LIB_1__::func_137(__LIB_28__::func_632(uParam0->f_1084, 3));
		case 28:
			return __LIB_1__::func_137(__LIB_28__::func_632(uParam0->f_1084, 4));
		case 29:
			return __LIB_1__::func_137(__LIB_28__::func_632(uParam0->f_1084, 5));
		case 36:
			if (__LIB_9__::func_950(uParam0->f_1084, 1))
			{
				return 1;
			}
			break;
		case 37:
			if (((__LIB_8__::func_358(uParam0->f_1084, 8) || __LIB_8__::func_358(uParam0->f_1084, 9)) && __LIB_8__::func_358(uParam0->f_1084, 10)) && __LIB_8__::func_358(uParam0->f_1084, 11))
			{
				return 1;
			}
			break;
		case 38:
			if (__LIB_8__::func_358(uParam0->f_1084, 12))
			{
				return 1;
			}
			break;
		case 39:
			if ((__LIB_8__::func_358(uParam0->f_1084, 13) && __LIB_8__::func_358(uParam0->f_1084, 14)) && __LIB_8__::func_358(uParam0->f_1084, 15))
			{
				return 1;
			}
			break;
		case 40:
			return __LIB_1__::func_137(__LIB_8__::func_358(uParam0->f_1084, 1));
		case 41:
			if (__LIB_8__::func_358(uParam0->f_1084, 2) && __LIB_8__::func_358(uParam0->f_1084, 7))
			{
				return 1;
			}
			break;
		case 42:
			return __LIB_1__::func_137(__LIB_8__::func_358(uParam0->f_1084, 3));
		case 43:
			if (__LIB_8__::func_358(uParam0->f_1084, 4) && __LIB_8__::func_358(uParam0->f_1084, 7))
			{
				return 2;
			}
			break;
		case 44:
			return __LIB_1__::func_137(__LIB_8__::func_358(uParam0->f_1084, 5));
		case 45:
			return __LIB_1__::func_137(__LIB_8__::func_358(uParam0->f_1084, 6));
		case 46:
			return __LIB_1__::func_137(__LIB_8__::func_358(uParam0->f_1084, 2));
		case 47:
			return __LIB_1__::func_137(__LIB_8__::func_358(uParam0->f_1084, 7));
		case 48:
			return __LIB_1__::func_137(__LIB_8__::func_358(uParam0->f_1084, 4));
		case 49:
			return __LIB_1__::func_137(__LIB_8__::func_358(uParam0->f_1084, 7));
		case 50:
			return __LIB_1__::func_137(__LIB_8__::func_358(uParam0->f_1084, 8));
		case 53:
			return __LIB_1__::func_137(__LIB_8__::func_358(uParam0->f_1084, 9));
		case 51:
			return __LIB_1__::func_137(__LIB_8__::func_358(uParam0->f_1084, 10));
		case 52:
			return __LIB_1__::func_137(__LIB_8__::func_358(uParam0->f_1084, 11));
		case 54:
			return __LIB_1__::func_137((__LIB_8__::func_358(uParam0->f_1084, 12) && __LIB_28__::func_471(uParam0->f_1084) == 1));
		case 55:
			return __LIB_1__::func_137((__LIB_8__::func_358(uParam0->f_1084, 12) && __LIB_28__::func_471(uParam0->f_1084) == 2));
		case 56:
			return __LIB_1__::func_137((__LIB_8__::func_358(uParam0->f_1084, 12) && __LIB_28__::func_471(uParam0->f_1084) == 3));
		case 57:
			return __LIB_1__::func_137((__LIB_8__::func_358(uParam0->f_1084, 12) && __LIB_28__::func_471(uParam0->f_1084) == 4));
		case 58:
			return __LIB_1__::func_137((__LIB_8__::func_358(uParam0->f_1084, 12) && __LIB_28__::func_471(uParam0->f_1084) == 5));
		case 59:
			return __LIB_1__::func_137(__LIB_8__::func_748(uParam0->f_1084));
		case 60:
			return __LIB_1__::func_137(__LIB_8__::func_358(uParam0->f_1084, 13));
		case 61:
			return __LIB_1__::func_137(__LIB_8__::func_358(uParam0->f_1084, 14));
		case 62:
			return __LIB_1__::func_137(__LIB_8__::func_358(uParam0->f_1084, 15));
	}
	return 0;
}

int func_957(int iParam0)//Position - 0x22A58
{
	if (iParam0 != -1)
	{
		return Global_1975224[iParam0 /*53*/].f_5.f_10.f_17 == Global_1975224[iParam0 /*53*/].f_5.f_10.f_18;
	}
	return 0;
}

void func_958(var uParam0)//Position - 0x22A87
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_938(uParam0, &(Local_109[0 /*14*/]), 0, 0, 1, 0);
	if (!__LIB_9__::func_233(uParam0->f_1084, 0) && !__LIB_1__::func_167(uParam0->f_1084))
	{
		return;
	}
	func_938(uParam0, &(Local_109[1 /*14*/]), 0, 0, 2, 0);
	func_938(uParam0, &(Local_109[2 /*14*/]), 0, 0, 3, 0);
	func_938(uParam0, &(Local_109[3 /*14*/]), 0, 0, 4, 0);
	func_938(uParam0, &(Local_109[4 /*14*/]), 0, 0, 5, 0);
	func_938(uParam0, &(Local_109[5 /*14*/]), 0, 0, 6, 0);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar2 = (7 + iVar0);
		if (func_382(uParam0->f_1084, func_959(iVar2), 0, 0))
		{
			func_938(uParam0, &(Local_112[iVar1 /*14*/]), 0, 2, iVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_938(uParam0, &(Local_112[iVar1 /*14*/]), 0, 2, 7, 1);
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar2 = (12 + iVar0);
		if (__LIB_27__::func_386(uParam0->f_1084, func_381(iVar2)))
		{
			func_938(uParam0, &(Local_110[iVar1 /*14*/]), 0, 3, iVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = (20 + iVar0);
		if (__LIB_37__::func_15(uParam0->f_1084, func_379(iVar2)))
		{
			func_938(uParam0, &(Local_111[iVar1 /*14*/]), 0, 4, iVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar2 = (24 + iVar0);
		if (__LIB_28__::func_632(uParam0->f_1084, func_377(iVar2)))
		{
			func_938(uParam0, &(Local_114[iVar1 /*14*/]), 0, 5, iVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	iVar1 = 0;
	if (__LIB_37__::func_30(uParam0->f_1084))
	{
		func_938(uParam0, &(Local_113[iVar1 /*14*/]), 0, 6, 30, 0);
		iVar1++;
	}
	if (__LIB_37__::func_29(uParam0->f_1084))
	{
		func_938(uParam0, &(Local_113[iVar1 /*14*/]), 0, 6, 31, 0);
		iVar1++;
	}
	if (func_397(uParam0->f_1084))
	{
		func_938(uParam0, &(Local_113[iVar1 /*14*/]), 0, 6, 32, 0);
		iVar1++;
	}
	if (func_391(uParam0->f_1084))
	{
		func_938(uParam0, &(Local_113[iVar1 /*14*/]), 0, 6, 33, 0);
		iVar1++;
	}
	if (func_385(uParam0->f_1084))
	{
		func_938(uParam0, &(Local_113[iVar1 /*14*/]), 0, 6, 34, 0);
		iVar1++;
	}
	if (__LIB_37__::func_16(uParam0->f_1084))
	{
		func_938(uParam0, &(Local_113[iVar1 /*14*/]), 0, 6, 35, 0);
		iVar1++;
	}
	if (iVar1 == 0)
	{
		func_938(uParam0, &(Local_113[iVar1 /*14*/]), 0, 6, 32, 1);
	}
}

int func_959(int iParam0)//Position - 0x22D29
{
	switch (iParam0)
	{
		case 7:
			return 0;
		case 8:
			return 1;
		case 9:
			return 2;
		case 10:
			return 3;
		case 11:
			return 4;
		default:
	}
	return -1;
}

void func_960(var uParam0)//Position - 0x22D6B
{
	if (iLocal_148 == 4)
	{
		iLocal_148 = 5;
	}
}

void func_961(var uParam0)//Position - 0x22D7E
{
	if (iLocal_148 == 0)
	{
		iLocal_148 = 1;
	}
}

char* func_962()//Position - 0x22D91
{
	if (!__LIB_1__::func_167(iLocal_158) && !__LIB_9__::func_233(iLocal_158, 0))
	{
		return "HIP_PROMPT2" /* GXT: Press ~INPUT_CONTEXT~ to access the Planning Screen ~HUD_COLOUR_GREEN~~BLIP_MP_HEIST~~s~ and begin the setup for The Cayo Perico Heist. */;
	}
	return "HIP_PROMPT" /* GXT: Press ~INPUT_CONTEXT~ to use the Planning Screen. */;
}

int func_963()//Position - 0x22DBD
{
	if (iLocal_148 > 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_AT_COORD(iLocal_157, 1561.1489f, 386.04288f, -49.685326f, 1f, 0.65f, 1f, false, true, 0) && __LIB_6__::func_177(ENTITY::GET_ENTITY_HEADING(iLocal_157), 180f, 60f))
	{
		return 1;
	}
	return 0;
}

int func_966()//Position - 0x22E97
{
	if (MISC::ABSF((GRAPHICS::GET_ASPECT_RATIO(false) - 1.3333333f)) < 0.1f)
	{
		return 0;
	}
	return 1;
}

Vector3 func_968()//Position - 0x22EC5
{
	return __LIB_17__::func_951();
}

int func_971()//Position - 0x22EF1
{
	return iLocal_170;
}

void func_972(var uParam0)//Position - 0x22EFC
{
	if (func_975(uParam0) || __LIB_40__::func_548())
	{
		if (!uParam0->f_1091 && !__LIB_40__::func_548())
		{
			__LIB_40__::func_547(uParam0, 5);
			uParam0->f_1091 = 1;
		}
		else if (uParam0->f_726 == 5 || __LIB_40__::func_548())
		{
			func_458(2);
			uParam0->f_1091 = 0;
		}
	}
}

int func_975(var uParam0)//Position - 0x22FED
{
	if (BitTest(uParam0->f_1085, 7))
	{
		return 1;
	}
	if (BitTest(uParam0->f_1085, 8))
	{
		return 1;
	}
	if (__LIB_10__::func_343())
	{
		return 1;
	}
	if (Local_159.f_31 != 0)
	{
		Call_Loc(Local_159.f_31);
		if (StackVal)
		{
			return 1;
		}
	}
	return 0;
}

void func_977()//Position - 0x23043
{
	iLocal_157 = PLAYER::PLAYER_PED_ID();
	iLocal_158 = PLAYER::PLAYER_ID();
}

void func_978(var uParam0)//Position - 0x23059
{
	__LIB_40__::func_551(uParam0);
	func_987();
	__LIB_42__::func_793();
	func_112();
	func_979();
	if (PLAYER::PLAYER_ID() != -1 && Global_1974423[PLAYER::PLAYER_ID() /*25*/].f_20)
	{
		Global_1974423[PLAYER::PLAYER_ID() /*25*/].f_20 = 0;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_979()//Position - 0x230A2
{
	if (Global_1974421)
	{
		Global_1974421 = 0;
	}
	if (iLocal_143)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("HS4F_INT");
	}
}

void func_987()//Position - 0x231DE
{
	if (Local_159.f_7 != 0)
	{
		Call_Loc(Local_159.f_7);
		__LIB_5__::func_157(StackVal);
	}
}

int func_990(var uParam0)//Position - 0x23250
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (BitTest(uParam0->f_1085, 8))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1085), 8);
	}
	if (BitTest(uParam0->f_1085, 9))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1085), 9);
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_991();
	return 1;
}

void func_991()//Position - 0x23299
{
	if (!Global_1974421)
	{
		Global_1974421 = 1;
	}
}

