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
	struct<4> Local_38[10];
	bool bLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<27> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	struct<11> Local_45[2];
	struct<25> Local_46[21];
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	struct<3> Local_54 = { 0, 0, 0 } ;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = -1;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 1000;
	var uLocal_66 = 1000;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	struct<8> Local_73[3];
	var uLocal_74 = 15;
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
	var uLocal_126 = 15;
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
	int iLocal_178 = 0;
	char* sLocal_179 = NULL;
	char* sLocal_180 = NULL;
	int iLocal_181 = 0;
	int* iLocal_182 = NULL;
	int* iLocal_183 = NULL;
	int iLocal_184 = 0;
	struct<3> Local_185 = { 0, 0, 0 } ;
	struct<3> Local_186 = { 0, 0, 0 } ;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	bool bLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	struct<14> Local_197 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_198 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_199 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int* iLocal_202 = NULL;
	int iLocal_203 = 0;
	char[] cLocal_204[8] = 0;
	var uLocal_205 = 16;
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
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	char[] cLocal_370[8] = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	int iLocal_374[3] = { 0, 0, 0 };
	int iLocal_375 = 0;
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
	iLocal_41 = 21;
	fLocal_47 = -1f;
	Local_54 = { 0f, 0f, 0f };
	iLocal_55 = -1;
	sLocal_180 = "FBIPRA";
	Local_185 = { 0f, 0f, 0f };
	Local_186 = { 1381.4722f, -2072.2454f, 50.9981f };
	cLocal_204 = "FIBP1AU";
	iLocal_375 = -1;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		sLocal_179 = 0;
		func_389();
		func_377();
	}
	func_360();
	if (__LIB_0__.func_294())
	{
		__LIB_0__.func_370(918.8851f, -269.789f, 67.2145f, 68.2149f, 1, 0);
	}
	__LIB_36__.func_81();
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_TrT", 0);
		if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
		{
			func_339();
			func_335();
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
			switch (iLocal_68)
			{
				case 0:
					func_270();
					break;
				case 1:
					func_239();
					break;
				case 2:
					func_221();
					break;
				case 3:
					func_108();
					break;
				case 4:
					func_39();
					break;
				case 5:
					func_1();
					break;
			}
			if (iLocal_68 != 5)
			{
				if (iLocal_68 >= 0 && !bLocal_28)
				{
				}
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x189
{
	int iVar0;
	switch (iLocal_69)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			func_38();
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_1__.func_183(iVar0) && ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck"))
				{
					__LIB_0__.func_501(iVar0, 2);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_179))
			{
				func_34(sLocal_179);
			}
			else
			{
				func_18(0);
			}
			iLocal_69 = 1;
			break;
		case 1:
			if (__LIB_0__.func_204())
			{
				if (__LIB_11__.func_719())
				{
					func_11();
				}
				func_2();
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 30f, true, false, false, false);
				func_377();
			}
			break;
	}
}

void func_2()//Position - 0x23E
{
	__LIB_11__.func_32(&Local_199);
	__LIB_11__.func_32(&iLocal_201);
	__LIB_11__.func_32(&iLocal_200);
	__LIB_0__.func_0(&Local_197);
	__LIB_0__.func_0(&Local_198);
	__LIB_11__.func_32(&iLocal_202);
	func_3();
}

void func_3()//Position - 0x274
{
	__LIB_0__.func_523(&(Local_45[0 /*11*/].f_4));
	__LIB_0__.func_523(&(Local_45[1 /*11*/].f_4));
	__LIB_0__.func_106(&iLocal_43);
	__LIB_0__.func_124(&(Local_45[0 /*11*/]), 1, 0, 1);
	__LIB_0__.func_124(&(Local_45[1 /*11*/]), 1, 0, 1);
	__LIB_0__.func_122(&(Local_46[iLocal_48 /*25*/].f_17), 0);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_40);
	STREAMING::REMOVE_ANIM_DICT("missfbi4prepp1");
	STREAMING::REMOVE_ANIM_SET("missfbi4prepp1_garbageman");
}

void func_11()//Position - 0x4B3
{
	__LIB_0__.func_428(918.8851f, -269.789f, 67.2145f, 325.9081f);
	__LIB_20__.func_165(917.5291f, -263.8595f, 67.3489f, 188.0605f);
}

void func_18(int iParam0)//Position - 0x5CF
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__.func_2(0))
	{
		iVar0 = __LIB_0__.func_323();
		if (!func_19(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_19(int iParam0)//Position - 0x614
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
	func_20(&(Global_113386.f_2363.f_539), iVar1);
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

void func_20(var uParam0, int iParam1)//Position - 0x724
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
			if (!func_22(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_22(int iParam0, var uParam1, float fParam2)//Position - 0x8F8
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
			return func_22(8, uParam1, fParam2);
			break;
		case 10:
			return func_22(8, uParam1, fParam2);
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

void func_34(char* sParam0)//Position - 0x1587
{
	__LIB_0__.func_324(sParam0);
	func_18(0);
}

void func_38()//Position - 0x1617
{
	__LIB_0__.func_523(&iLocal_182);
}

void func_39()//Position - 0x1626
{
	bool bVar0;
	switch (iLocal_69)
	{
		case 0:
			iLocal_69 = 1;
			break;
		case 1:
			if (!__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_186, 270f, 1))
			{
				iLocal_69 = 2;
			}
			else if (!__LIB_0__.func_405("PRA_LEVAREA", 0, 0))
			{
				__LIB_0__.func_210("PRA_LEVAREA", 60000, 0);
			}
			break;
		case 2:
			bVar0 = __LIB_18__.func_173();
			if (__LIB_0__.func_405("PRA_LEVAREA", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			if (bVar0 == 0)
			{
				if (func_67(&uLocal_72, &cLocal_370, &uLocal_205))
				{
					func_63();
					func_58();
				}
			}
			else
			{
				__LIB_20__.func_744(func_57(bVar0), -621899663, -621899663, 5, 0, bVar0, __LIB_12__.func_44(bVar0), 0, 6000, 6000, -1, 0, 0);
				func_63();
				func_58();
			}
			break;
		case 3:
			func_40(1, 1, 1);
			iLocal_69 = 2;
			break;
	}
}

void func_40(int iParam0, int iParam1, int iParam2)//Position - 0x1708
{
	__LIB_20__.func_744(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (iParam1 == 1)
	{
		__LIB_0__.func_84(500, 0);
	}
}

void func_43(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1822
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		__LIB_0__.func_83(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!__LIB_0__.func_73())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		__LIB_0__.func_82(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		__LIB_0__.func_83(0);
		HUD::THEFEED_RESUME();
		Global_63160 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		__LIB_0__.func_82(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_48(PLAYER::PLAYER_ID())) && !__LIB_12__.func_44(PLAYER::PLAYER_ID(), 0)) && !__LIB_0__.func_80()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_48(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78317 = 0;
	}
}

int func_48(int iParam0)//Position - 0x1A17
{
	if (__LIB_12__.func_44(iParam0, 0))
	{
		return 1;
	}
	if (__LIB_0__.func_81())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

int func_57(bool bParam0)//Position - 0x1D7B
{
	if (bParam0 == 1)
	{
		return -714760066;
	}
	return -1198055521;
}

void func_58()//Position - 0x1D96
{
	HUD::CLEAR_PRINTS();
	__LIB_0__.func_296();
	__LIB_6__.func_823(0, 0);
	func_377();
}

void func_63()//Position - 0x1F25
{
	__LIB_0__.func_409(0, -1);
	__LIB_0__.func_320(0, 318);
	__LIB_0__.func_402(1, 320);
}

int func_67(var uParam0, char* sParam1, var uParam2)//Position - 0x205A
{
	switch (*uParam0)
	{
		case 0:
			if (__LIB_12__.func_48())
			{
				if ((__LIB_0__.func_176(74) || __LIB_0__.func_176(75)) && __LIB_20__.func_740())
				{
					if (__LIB_18__.func_173() == 0)
					{
						__LIB_26__.func_568(1);
						__LIB_0__.func_503(46, 1);
						*uParam0 = 4;
					}
					else
					{
						__LIB_0__.func_203(uParam2, 0, 0, "MICHAEL", 0, 1);
						if (func_82(uParam2, __LIB_36__.func_75(), __LIB_18__.func_173(), "FBIPRAU", __LIB_36__.func_74(), 9, 1, 0, 0, 0))
						{
							*sParam1 = { __LIB_26__.func_569(1) };
							__LIB_0__.func_503(46, 1);
							*uParam0 = 1;
						}
					}
				}
				else if (__LIB_18__.func_173() == 0)
				{
					__LIB_26__.func_568(0);
					*uParam0 = 4;
				}
				else
				{
					__LIB_0__.func_203(uParam2, 0, 0, "MICHAEL", 0, 1);
					if (func_82(uParam2, __LIB_36__.func_75(), __LIB_18__.func_173(), "FBIPRAU", __LIB_36__.func_74(), 9, 1, 0, 0, 0))
					{
						*sParam1 = { __LIB_26__.func_569(0) };
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
					if (!__LIB_0__.func_176(3) && __LIB_12__.func_48())
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

bool func_82(var uParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x26E5
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
	return func_83(sParam4, iParam5, bParam9);
}

int func_83(char* sParam0, int iParam1, bool bParam2)//Position - 0x274D
{
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam1 > Global_21607)
			{
				if (Global_21612 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
					Global_21616 = 0;
					Global_21615 = 0;
					Global_20265 = 0;
				}
				else
				{
					__LIB_0__.func_74();
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
		if (__LIB_0__.func_191(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		__LIB_0__.func_209();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_22601 = Global_22602;
		Global_21224.f_370 = Global_22594;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21601 = Global_21602;
		if (Global_21611)
		{
			MISC::CLEAR_BIT(&Global_8136, 20);
			MISC::CLEAR_BIT(&Global_8137, 17);
			MISC::CLEAR_BIT(&Global_8138, 0);
			if (bParam2)
			{
				__LIB_20__.func_801();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
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
				if (__LIB_0__.func_208())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
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
			if (__LIB_0__.func_73())
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
				if (BitTest(Global_8136, 9))
				{
					return 0;
				}
			}
			__LIB_0__.func_207();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		__LIB_0__.func_206();
		__LIB_7__.func_265();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21607 || iParam1 == Global_21607)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		__LIB_0__.func_74();
	}
	return 0;
}

void func_108()//Position - 0x317F
{
	__LIB_32__.func_833(&iLocal_200, &iLocal_201, &iLocal_71, &iLocal_183, &iLocal_182, Local_186, Local_199.f_0, 0, 1090519040);
	func_214();
	func_155();
	switch (iLocal_69)
	{
		case 0:
			if (func_122(iLocal_68, bLocal_28))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (__LIB_1__.func_183(iLocal_200))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, false))
						{
							__LIB_12__.func_50("PRA_LEVVEH", &iLocal_181);
						}
					}
				}
				iLocal_69 = 1;
			}
			break;
		case 1:
			__LIB_20__.func_800(&iLocal_182, Local_186, &iLocal_70, iLocal_71, &iLocal_181, &iLocal_195);
			if (__LIB_26__.func_606(iLocal_200, Local_186, &iLocal_182, iLocal_71, iLocal_70, &iLocal_193, &iLocal_196, &iLocal_192, &iLocal_191, &iLocal_181, 1090519040))
			{
				if (!func_112())
				{
					if (func_67(&uLocal_72, &cLocal_370, &uLocal_205))
					{
						func_63();
						func_58();
					}
				}
				else
				{
					__LIB_0__.func_503(46, 1);
					func_63();
					func_110(0);
				}
			}
			break;
		case 3:
			if (__LIB_1__.func_183(Local_199.f_0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_199.f_0, false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_199.f_0, -1);
				}
				else
				{
					__LIB_10__.func_701(Local_199.f_0, Local_186, 126.0705f, 0, 1);
					func_40(1, 1, 1);
					iLocal_69 = 1;
				}
			}
			break;
	}
}

void func_110(bool bParam0)//Position - 0x332E
{
	__LIB_12__.func_46(iLocal_68);
	iLocal_178 = iLocal_68;
	if (!bParam0)
	{
		iLocal_68 = iLocal_178 + 1;
	}
	else if (iLocal_178 > 0)
	{
		iLocal_68 = (iLocal_178 - 1);
	}
	iLocal_181 = 0;
	iLocal_69 = 0;
}

int func_112()//Position - 0x3383
{
	if (__LIB_12__.func_48())
	{
		if ((__LIB_0__.func_176(74) || __LIB_0__.func_176(75)) && __LIB_20__.func_740())
		{
			return 1;
		}
	}
	return 0;
}

int func_122(int iParam0, bool bParam1)//Position - 0x384A
{
	int* iVar0;
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_28 = false;
				func_40(1, 1, 1);
			}
			else if (func_149(1, Local_185, 0))
			{
				if (func_148())
				{
					__LIB_0__.func_372(33);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), true);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), true);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("S_M_Y_Garbage"), true);
					iLocal_68 = 2;
					__LIB_0__.func_523(&iLocal_182);
					__LIB_9__.func_981(&uLocal_56, 0, 0);
					__LIB_29__.func_871(190, 1244.338f, -339.3197f, 68.0823f);
					func_142();
					TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", false);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", false);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", false);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
					return 1;
				}
				else if (((func_149(2, Local_199.f_1, Local_199.f_4) && func_149(3, Local_197.f_1, Local_197.f_4)) && func_149(4, Local_198.f_1, Local_198.f_4)) && func_141(0))
				{
					func_142();
					__LIB_0__.func_372(33);
					if (__LIB_1__.func_197(Local_197.f_0))
					{
						func_140(Local_197.f_0);
					}
					if (__LIB_1__.func_197(Local_198.f_0))
					{
						func_139(Local_198.f_0);
					}
					func_138(Local_199.f_0);
					if (__LIB_1__.func_197(Local_198.f_0) && __LIB_1__.func_197(Local_197.f_0))
					{
						__LIB_12__.func_52(iLocal_187, 1, 0, 1);
					}
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), true);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), true);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("S_M_Y_Garbage"), true);
					if (HUD::GET_BLIP_FROM_ENTITY(Local_199.f_0) != 0)
					{
						iVar0 = HUD::GET_BLIP_FROM_ENTITY(Local_199.f_0);
						MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
						__LIB_0__.func_523(&iVar0);
						MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
					}
					__LIB_20__.func_746(&iLocal_182, Local_199.f_0, 1);
					__LIB_29__.func_871(190, 1244.338f, -339.3197f, 68.0823f);
					TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", false);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", false);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", false);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
					return 1;
				}
			}
			break;
		case 1:
			if (bParam1)
			{
				if ((func_149(2, Local_199.f_1, Local_199.f_4) && func_149(3, Local_197.f_1, Local_197.f_4)) && func_149(4, Local_198.f_1, Local_198.f_4))
				{
					__LIB_20__.func_741(PLAYER::PLAYER_PED_ID(), 1197.8611f, -353.011f, 68.0929f, 278.9647f);
					func_123();
					bLocal_28 = false;
					TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", false);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", false);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", false);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
					func_40(1, 1, 1);
				}
			}
			else
			{
				func_142();
				return 1;
			}
			break;
		case 2:
			if (bParam1)
			{
				if (func_149(2, Local_199.f_1, Local_199.f_4))
				{
					func_123();
					func_142();
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_199.f_0, -1);
					bLocal_28 = false;
					func_40(1, 1, 1);
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
				if (func_149(2, Local_186, Local_199.f_4))
				{
					func_123();
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_199.f_0, -1);
					func_142();
					bLocal_28 = false;
					func_40(1, 1, 1);
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

void func_123()//Position - 0x3B60
{
	if (iLocal_68 == 1)
	{
		func_140(Local_197.f_0);
		func_139(Local_198.f_0);
		func_138(Local_199.f_0);
		__LIB_12__.func_52(iLocal_187, 1, 0, 1);
	}
	iLocal_203 = 0;
	iLocal_195 = 0;
	iLocal_196 = 0;
	iLocal_191 = 0;
	iLocal_192 = 0;
	iLocal_193 = 0;
}

void func_128(struct<3> Param0, struct<3> Param1)//Position - 0x3D0D
{
	Local_42.f_8 = { Param0 };
	Local_42.f_11 = { Param1 };
	Local_42.f_1 = 4;
}

void func_129()//Position - 0x3D2E
{
	if (!PED::IS_PED_IN_VEHICLE(Local_45[0 /*11*/], iLocal_43, false))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_45[0 /*11*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_137(1)), 1f, -1, 0.25f, 0, 40000f);
		Local_45[0 /*11*/].f_7 = 1;
	}
	else
	{
		func_130(1);
	}
}

void func_130(bool bParam0)//Position - 0x3D77
{
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_43, 0, false))
	{
		func_131(bParam0);
		if (iLocal_48 != (iLocal_41 - 1))
		{
			if (iLocal_48 == 4)
			{
				TASK::TASK_VEHICLE_GOTO_NAVMESH(Local_45[0 /*11*/], iLocal_43, Local_46[iLocal_48 /*25*/], 15f, 2883755, Local_46[iLocal_48 /*25*/].f_6);
			}
			else
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_45[0 /*11*/], iLocal_43, Local_46[iLocal_48 /*25*/], 15f, 0, 0, 2883755, Local_46[iLocal_48 /*25*/].f_6, Local_46[iLocal_48 /*25*/].f_7);
			}
			Local_45[0 /*11*/].f_8 = Local_45[0 /*11*/].f_7;
			Local_45[0 /*11*/].f_7 = 4;
		}
		else
		{
			TASK::TASK_VEHICLE_DRIVE_WANDER(Local_45[0 /*11*/], iLocal_43, 15f, 786599);
			Local_45[0 /*11*/].f_8 = Local_45[0 /*11*/].f_7;
			Local_45[0 /*11*/].f_7 = 10;
		}
	}
	else
	{
		Local_45[0 /*11*/].f_8 = Local_45[0 /*11*/].f_7;
		Local_45[0 /*11*/].f_7 = 7;
	}
}

void func_131(bool bParam0)//Position - 0x3E59
{
	if (iLocal_48 != -1)
	{
		if (!__LIB_0__.func_86(Local_46[iLocal_48 /*25*/].f_11) && !__LIB_0__.func_86(Local_46[iLocal_48 /*25*/].f_14))
		{
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_46[iLocal_48 /*25*/].f_11 - Local_46[iLocal_48 /*25*/].f_14, Local_46[iLocal_48 /*25*/].f_11 + Local_46[iLocal_48 /*25*/].f_14, true, true);
		}
	}
	if (!bParam0)
	{
		func_134();
	}
	else
	{
		iLocal_48 = func_132();
	}
	if (iLocal_48 != -1)
	{
		if (!__LIB_0__.func_86(Local_46[iLocal_48 /*25*/].f_11) && !__LIB_0__.func_86(Local_46[iLocal_48 /*25*/].f_14))
		{
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_46[iLocal_48 /*25*/].f_11 - Local_46[iLocal_48 /*25*/].f_14, Local_46[iLocal_48 /*25*/].f_11 + Local_46[iLocal_48 /*25*/].f_14, false, true);
		}
	}
}

int func_132()//Position - 0x3F3B
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4[21];
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	if (__LIB_1__.func_183(iLocal_43))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_43, true) };
		iVar2 = 0;
		while (iVar2 <= (iLocal_41 - 1))
		{
			fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Local_46[iVar2 /*25*/], true);
			if (!__LIB_0__.func_86(Local_46[iVar2 /*25*/]) && fVar5 > 25f)
			{
				fVar4[iVar2] = fVar5;
			}
			else
			{
				fVar4[iVar2] = -1f;
			}
			iVar2++;
		}
		fVar6 = fVar4[0];
		iVar2 = 0;
		while (iVar2 <= (iLocal_41 - 1))
		{
			if (fVar4[iVar2] != -1f)
			{
				if (fVar4[iVar2] < fVar6)
				{
					fVar6 = fVar4[iVar2];
					iVar0 = iVar2;
				}
			}
			iVar2++;
		}
		fVar7 = __LIB_0__.func_156(Local_46[iVar0 /*25*/] - Var1, ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_43));
		iVar3 = iVar0;
		iVar8 = 0;
		while (fVar7 < 0f && iVar8 < 40)
		{
			iVar3++;
			if (iVar3 >= 21)
			{
				iVar3 = 0;
			}
			Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_43, true) };
			fVar7 = __LIB_0__.func_156(Local_46[iVar3 /*25*/] - Var1, ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_43));
			iVar8++;
		}
		if (iVar8 >= 40)
		{
			iVar3 = (iLocal_41 - 1);
		}
	}
	iVar0 = iVar3;
	return iVar0;
}

void func_134()//Position - 0x4096
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (bLocal_50)
	{
		while (Local_46[iLocal_48 /*25*/].f_18 && iVar0 != -1)
		{
			iLocal_48++;
			if (iLocal_48 >= (iLocal_41 - 1))
			{
				iVar0 = -1;
				iLocal_48 = (iLocal_41 - 1);
			}
		}
		if (iLocal_48 == (iLocal_41 - 1))
		{
			if (bLocal_49)
			{
				iLocal_48 = 0;
				iVar0 = 0;
				while (iVar0 <= (iLocal_41 - 1))
				{
					Local_46[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
			}
			else
			{
				iLocal_48 = (iLocal_41 - 1);
				return;
			}
		}
	}
	else
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 <= (iLocal_41 - 1))
		{
			if (Local_46[iVar0 /*25*/].f_18)
			{
				iVar1++;
			}
			iVar0++;
		}
		if (iVar1 == (iLocal_41 - 1))
		{
			iLocal_48 = (iLocal_41 - 1);
		}
		else if (iVar1 == iLocal_41)
		{
			if (bLocal_49)
			{
				iVar0 = 0;
				while (iVar0 <= (iLocal_41 - 1))
				{
					Local_46[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
				iLocal_48 = __LIB_12__.func_53();
			}
			else
			{
				iLocal_48 = -1;
				return;
			}
		}
		else
		{
			iLocal_48 = __LIB_12__.func_53();
		}
	}
}

Vector3 func_137(bool bParam0)//Position - 0x41F7
{
	struct<3> Var0;
	int iVar1;
	if (!bParam0)
	{
		iVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_43, "wheel_rf");
	}
	else
	{
		iVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_43, "wheel_lf");
	}
	Var0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_43, iVar1) };
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_43, Var0) };
	if (!bParam0)
	{
		Var0 = { Var0 + Vector(0.5f, 0f, 1f) };
	}
	else
	{
		Var0 = { Var0 + Vector(0.5f, 0f, -1f) };
	}
	return Var0;
}

void func_138(int iParam0)//Position - 0x4267
{
	if (__LIB_1__.func_183(iParam0))
	{
		iLocal_43 = iParam0;
	}
}

void func_139(int iParam0)//Position - 0x427F
{
	if (__LIB_1__.func_197(iParam0))
	{
		Local_45[1 /*11*/] = iParam0;
	}
}

void func_140(int iParam0)//Position - 0x429A
{
	if (__LIB_1__.func_197(iParam0))
	{
		Local_45[0 /*11*/] = iParam0;
	}
}

int func_141(bool bParam0)//Position - 0x42B5
{
	STREAMING::REQUEST_ANIM_DICT("missfbi4prepp1");
	STREAMING::REQUEST_ANIM_SET("missfbi4prepp1_garbageman");
	if (bParam0)
	{
		while (!STREAMING::HAS_ANIM_DICT_LOADED("missfbi4prepp1") && !STREAMING::HAS_ANIM_SET_LOADED("missfbi4prepp1_garbageman"))
		{
			SYSTEM::WAIT(0);
		}
		return 1;
	}
	else if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi4prepp1") && STREAMING::HAS_ANIM_SET_LOADED("missfbi4prepp1_garbageman"))
	{
		return 1;
	}
	return 0;
}

void func_142()//Position - 0x4312
{
	__LIB_36__.func_76(&uLocal_205);
}

int func_148()//Position - 0x451C
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("trash")))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true, false);
			iLocal_200 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__.func_183(iLocal_200))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_149(int iParam0, struct<3> Param1, float fParam2)//Position - 0x456F
{
	switch (iParam0)
	{
		case 0:
			if (__LIB_0__.func_394(Param1, Local_185, 1056964608, 0) && fParam2 == 0f)
			{
				return 1;
			}
			break;
		case 1:
			HUD::REQUEST_ADDITIONAL_TEXT(sLocal_180, 0);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				return 1;
			}
			break;
		case 2:
			if (__LIB_1__.func_183(Global_96938[0]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[0], true, true);
				Local_199.f_0 = Global_96938[0];
				if (__LIB_1__.func_183(Local_199.f_0))
				{
					__LIB_0__.func_501(Local_199.f_0, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_199.f_0, true);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_199.f_0, true);
					return 1;
				}
			}
			else if (__LIB_12__.func_167(&Local_199, Local_199.f_5, Local_199.f_1, Local_199.f_4, 1))
			{
				__LIB_0__.func_501(Local_199.f_0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_199.f_0, true);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_199.f_0, true);
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
						PED::SET_PED_CONFIG_FLAG(Local_197.f_0, 170, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_197.f_0, 65536, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_197.f_0, 50, true);
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
				if (__LIB_1__.func_183(Local_199.f_0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_197.f_0, Local_199.f_0, -1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_197.f_0, true);
					PED::SET_PED_CONFIG_FLAG(Local_197.f_0, 170, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_197.f_0, 65536, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_197.f_0, 50, true);
					return 1;
				}
			}
			break;
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
			{
				if (!PED::IS_PED_DEAD_OR_DYING(Global_96938.f_9[1], true))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[1], true, true);
					Local_198.f_0 = Global_96938.f_9[1];
					if (__LIB_1__.func_197(Local_198.f_0))
					{
						PED::SET_PED_CONFIG_FLAG(Local_198.f_0, 170, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_198.f_0, 65536, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_198.f_0, 50, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_198.f_0, true);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_198.f_0, true, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (__LIB_26__.func_564(&Local_198, Local_198.f_5, Local_198.f_1, Local_198.f_4, 1, 0, 1, 1))
			{
				if (__LIB_1__.func_183(Local_199.f_0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_198.f_0, Local_199.f_0, 0);
					PED::SET_PED_CONFIG_FLAG(Local_198.f_0, 170, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_198.f_0, 65536, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_198.f_0, 50, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_198.f_0, true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_198.f_0, true, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_155()//Position - 0x4A41
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		func_156(&(Local_45[iVar0 /*11*/]), iVar0);
		iVar0++;
	}
}

void func_156(int* iParam0, int iParam1)//Position - 0x4A69
{
	if (__LIB_1__.func_197(*iParam0))
	{
		func_202(iParam0, iParam1, 0);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 3))
		{
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "missfbi4prepp1", "_bag_drop_garbage_man") >= 0.172f)
			{
				if (__LIB_0__.func_121(Local_46[iLocal_48 /*25*/].f_17) && ENTITY::IS_ENTITY_ATTACHED(Local_46[iLocal_48 /*25*/].f_17))
				{
					PED::RESET_PED_MOVEMENT_CLIPSET(*iParam0, 0.25f);
					PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*iParam0);
					if (iLocal_48 <= 20 && iLocal_48 != -1)
					{
						Local_46[iLocal_48 /*25*/].f_18 = 1;
						iParam0->f_9 = 0;
					}
					ENTITY::DETACH_ENTITY(Local_46[iLocal_48 /*25*/].f_17, true, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_46[iLocal_48 /*25*/].f_17, 1, ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0), false, true, true, false);
				}
			}
		}
		switch (iParam0->f_5)
		{
			case 0:
				if (iParam1 == 0)
				{
					func_199();
					func_198(iParam0);
				}
				func_185(iParam0);
				break;
			case 1:
				func_158(iParam0);
				break;
		}
	}
	else
	{
		if (__LIB_0__.func_121(Local_46[iLocal_48 /*25*/].f_17))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_46[iLocal_48 /*25*/].f_17))
			{
				ENTITY::DETACH_ENTITY(Local_46[iLocal_48 /*25*/].f_17, true, false);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_46[iLocal_48 /*25*/].f_17, 1, ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0), false, true, true, false);
			}
		}
		__LIB_0__.func_523(&(iParam0->f_4));
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (!__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), *iParam0, 150f, 1) && !bLocal_52)
			{
				__LIB_0__.func_124(iParam0, 1, 0, 1);
			}
		}
	}
}

void func_158(int* iParam0)//Position - 0x4C09
{
	int iVar0;
	int iVar1;
	switch (iParam0->f_6)
	{
		case 5:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_3)
			{
				if (__LIB_4__.func_465(*iParam0, joaat("SCRIPT_TASK_COMBAT")))
				{
					TASK::CLEAR_PED_TASKS(*iParam0);
				}
				TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 30f, -1, false, false);
				iParam0->f_6 = 6;
				iParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			break;
		case 21:
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (__LIB_26__.func_604(*iParam0, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7))
				{
					func_176(iParam0, 1);
					return;
				}
			}
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_3)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
				{
					TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*iParam0, PLAYER::PLAYER_PED_ID(), 8f, -1f, 10f, 0);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				}
				if (!HUD::DOES_BLIP_EXIST(iParam0->f_4))
				{
					iParam0->f_4 = __LIB_6__.func_850(*iParam0, 1, 145);
				}
				iParam0->f_6 = 22;
				iParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			break;
		case 10:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_3)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
				{
					PED::SET_PED_RESET_FLAG(*iParam0, 120, true);
					iParam0->f_6 = 12;
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (!__LIB_4__.func_465(*iParam0, joaat("SCRIPT_TASK_COWER")))
				{
					if (__LIB_4__.func_465(*iParam0, joaat("SCRIPT_TASK_COMBAT")))
					{
						TASK::CLEAR_PED_TASKS(*iParam0);
					}
					TASK::TASK_COWER(*iParam0, -1);
					iParam0->f_6 = 12;
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_3)
			{
				TASK::TASK_USE_MOBILE_PHONE(*iParam0, true, 1);
				TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, true);
				iParam0->f_1 = MISC::GET_GAME_TIMER();
				iParam0->f_6 = 4;
				iParam0->f_5 = 1;
			}
			break;
		case 11:
			func_172(iParam0);
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > 5000)
			{
				if (!__LIB_4__.func_465(*iParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_45[__LIB_12__.func_40(iParam0->f_10) /*11*/]))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, Local_54, 1f, -1, 2f, 0, 40000f);
					}
				}
				iParam0->f_1 = MISC::GET_GAME_TIMER();
				iParam0->f_6 = 23;
				iParam0->f_5 = 1;
			}
			break;
		case 18:
			if (!__LIB_4__.func_465(*iParam0, joaat("SCRIPT_TASK_PLAY_ANIM")))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				if (__LIB_0__.func_670(ENTITY::GET_ENTITY_COORDS(*iParam0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 1.5f)
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0);
				}
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, true);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar1);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				iParam0->f_5 = 1;
				iParam0->f_6 = 20;
				iParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			break;
		case 19:
			func_172(iParam0);
			if (!__LIB_4__.func_465(*iParam0, joaat("SCRIPT_TASK_PLAY_ANIM")))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(*iParam0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, true);
				iParam0->f_5 = 1;
				iParam0->f_6 = 20;
				iParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			break;
		case 1:
			if (!PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_43, false))
			{
				func_168(iParam0);
			}
			break;
		case 2:
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(*iParam0) && (MISC::GET_GAME_TIMER() - iParam0->f_1) > 3000)
			{
				func_168(iParam0);
			}
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > 8000)
			{
				TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				if (!iLocal_53)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						iLocal_53 = 1;
					}
				}
				TASK::TASK_USE_MOBILE_PHONE(*iParam0, false, 1);
				iParam0->f_1 = MISC::GET_GAME_TIMER();
				iParam0->f_6 = 8;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 1)
			{
				TASK::TASK_USE_MOBILE_PHONE(*iParam0, false, 1);
				iParam0->f_1 = MISC::GET_GAME_TIMER();
				iParam0->f_6 = 8;
			}
			break;
		case 6:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_2)
			{
				if (!__LIB_0__.func_508(*iParam0, PLAYER::PLAYER_PED_ID(), 15f, 1))
				{
					__LIB_0__.func_523(&(iParam0->f_4));
					iParam0->f_6 = 7;
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		case 7:
			if (PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_43, true))
			{
				if (iParam0->f_6 != 4 && iParam0->f_6 != 1)
				{
					if (func_166())
					{
						if (__LIB_1__.func_197(*iParam0))
						{
							TASK::CLEAR_PED_TASKS(*iParam0);
							TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, true);
							iParam0->f_6 = 1;
						}
					}
				}
				if (!__LIB_0__.func_508(*iParam0, PLAYER::PLAYER_PED_ID(), 120f, 1))
				{
					__LIB_0__.func_124(iParam0, 1, 0, 1);
				}
			}
			else
			{
				func_168(iParam0);
			}
			break;
		case 8:
			if (!__LIB_0__.func_508(*iParam0, PLAYER::PLAYER_PED_ID(), 120f, 1))
			{
				__LIB_0__.func_124(iParam0, 1, 0, 1);
			}
			break;
		case 9:
			if (PED::IS_PED_BEING_JACKED(*iParam0))
			{
				func_176(iParam0, 1);
				return;
			}
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_2 || !__LIB_4__.func_465(*iParam0, joaat("SCRIPT_TASK_DRIVE_BY")))
			{
				func_163(iParam0);
			}
			break;
		case 12:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, true);
				iParam0->f_6 = 5;
			}
			else
			{
				PED::SET_PED_RESET_FLAG(*iParam0, 120, true);
			}
			break;
		case 13:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!__LIB_0__.func_508(*iParam0, PLAYER::PLAYER_PED_ID(), 15f, 1))
				{
					func_163(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (__LIB_26__.func_604(Local_45[__LIB_12__.func_40(iParam0->f_10) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_176(iParam0, 0);
				}
				else
				{
					func_162(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		case 15:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!__LIB_0__.func_508(*iParam0, PLAYER::PLAYER_PED_ID(), 15f, 1))
				{
					func_163(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (__LIB_26__.func_604(Local_45[__LIB_12__.func_40(iParam0->f_10) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_176(iParam0, 0);
				}
				else
				{
					func_162(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		case 16:
			if (PED::IS_PED_BEING_JACKED(*iParam0))
			{
				func_176(iParam0, 1);
				return;
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_55) >= 9000)
			{
				if (!func_161(iParam0))
				{
					func_163(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iParam0->f_1 = MISC::GET_GAME_TIMER();
					iParam0->f_5 = 1;
					iParam0->f_6 = 16;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_55) >= 5000 && (MISC::GET_GAME_TIMER() - iLocal_55) <= 5500)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
				{
					if (TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(*iParam0))
					{
						TASK::CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(*iParam0);
					}
				}
			}
			break;
		case 14:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!__LIB_0__.func_508(*iParam0, PLAYER::PLAYER_PED_ID(), 15f, 1))
				{
					func_163(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (__LIB_26__.func_604(Local_45[__LIB_12__.func_40(iParam0->f_10) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_176(iParam0, 0);
				}
				else
				{
					func_162(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		case 17:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!__LIB_0__.func_508(*iParam0, PLAYER::PLAYER_PED_ID(), 15f, 1))
				{
					func_163(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (__LIB_26__.func_604(Local_45[__LIB_12__.func_40(iParam0->f_10) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_176(iParam0, 0);
				}
				else
				{
					func_162(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		case 20:
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_26__.func_604(*iParam0, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7))
				{
					func_176(iParam0, 1);
					return;
				}
			}
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) >= 6000)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 5f, 0f, -2f), ENTITY::GET_ENTITY_COORDS(iLocal_43, true) + Vector(2f, 0f, 0f), 9f, false, true, 0))
				{
					func_163(iParam0);
				}
				else
				{
					func_168(iParam0);
					func_168(&(Local_45[__LIB_12__.func_40(iParam0->f_10) /*11*/]));
				}
				iParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			func_172(iParam0);
			break;
		case 22:
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (__LIB_26__.func_604(*iParam0, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7))
				{
					func_176(iParam0, 1);
					return;
				}
			}
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!__LIB_0__.func_508(*iParam0, PLAYER::PLAYER_PED_ID(), 15f, 1))
				{
					func_163(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
					return;
				}
				else
				{
					func_162(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		case 23:
			func_202(iParam0, iParam0->f_10, 1);
			func_172(iParam0);
			if (__LIB_0__.func_530(*iParam0, Local_54, 2f, 1))
			{
				if (__LIB_10__.func_619(*iParam0, Local_54, 1126825984, 0))
				{
					TASK::CLEAR_PED_TASKS(*iParam0);
					iParam0->f_6 = 19;
					iParam0->f_5 = 1;
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
	}
}

int func_161(int* iParam0)//Position - 0x5623
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 0f, 10f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 0f, 3f, 2f), 5f, false, true, 0) && PED::IS_PED_STOPPED(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_162(int* iParam0)//Position - 0x5665
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (__LIB_1__.func_183(iVar0))
		{
			if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(*iParam0, iVar0, -1, false, false))
			{
				iParam0->f_6 = 18;
				iParam0->f_1 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_163(int* iParam0)//Position - 0x56AB
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_40, joaat("PLAYER"));
	switch (iParam0->f_8)
	{
		case 4:
			break;
		case 10:
			break;
		case 8:
			func_129();
			break;
		case 3:
			if (!__LIB_4__.func_465(*iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
			{
				if (iLocal_48 <= 20 && iLocal_48 != -1)
				{
					Local_46[iLocal_48 /*25*/].f_18 = 1;
				}
				if (!PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_43, false))
				{
					if (iParam0->f_10 == 0)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_137(1)), 1f, -1, 0.25f, 0, 40000f);
						iParam0->f_7 = 1;
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_137(0)), 1f, -1, 0.25f, 0, 40000f);
						iParam0->f_7 = 1;
					}
				}
			}
			break;
		case 2:
			if (!PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_43, false))
			{
				if (iParam0->f_10 == 0)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_137(1)), 1f, -1, 0.25f, 0, 40000f);
					iParam0->f_7 = 1;
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_137(0)), 1f, -1, 0.25f, 0, 40000f);
					iParam0->f_7 = 1;
				}
			}
			break;
		case 9:
			if (!Local_46[iLocal_48 /*25*/].f_18)
			{
				if (iParam0->f_9 == 1)
				{
					func_164(iParam0);
				}
				else if (iParam0->f_10 == 0)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_137(1)), 1f, -1, 0.25f, 0, 40000f);
					iParam0->f_7 = 1;
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_137(0)), 1f, -1, 0.25f, 0, 40000f);
					iParam0->f_7 = 1;
				}
			}
			else if (!PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_43, false))
			{
				if (iParam0->f_10 == 0)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_137(1)), 1f, -1, 0.25f, 0, 40000f);
					iParam0->f_7 = 1;
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_137(0)), 1f, -1, 0.25f, 0, 40000f);
					iParam0->f_7 = 1;
				}
			}
			break;
		default:
			break;
	}
	iParam0->f_1 = MISC::GET_GAME_TIMER();
	iParam0->f_5 = 0;
}

void func_164(var uParam0)//Position - 0x58D6
{
	if (!__LIB_4__.func_465(*uParam0, joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE")))
	{
		if (Local_46[iLocal_48 /*25*/].f_23 != 0)
		{
			if (__LIB_0__.func_121(Local_46[iLocal_48 /*25*/].f_17))
			{
				TASK::TASK_GOTO_ENTITY_OFFSET(*uParam0, Local_46[iLocal_48 /*25*/].f_17, -1, 0f, 180f, 1f, 0);
			}
		}
		else
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, Local_46[iLocal_48 /*25*/].f_19, 1f, 20000, -1f, 0, __LIB_4__.func_305(Local_46[iLocal_48 /*25*/].f_19, ENTITY::GET_ENTITY_COORDS(*uParam0, true), 1));
		}
		if (__LIB_1__.func_183(iLocal_43))
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_43, 5, false, false);
		}
		uParam0->f_8 = uParam0->f_7;
		uParam0->f_7 = 9;
		uParam0->f_9 = 1;
	}
}

int func_166()//Position - 0x59E1
{
	if (__LIB_1__.func_183(iLocal_43) && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_43, PLAYER::PLAYER_PED_ID(), true))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_43);
			if (func_167() || ENTITY::GET_ENTITY_HEALTH(iLocal_43) < 851)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_167()//Position - 0x5A2F
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_43, iVar0, false))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_168(int* iParam0)//Position - 0x5A69
{
	if (iParam0->f_6 != 3 && iParam0->f_6 != 4)
	{
		func_169(iParam0);
		iParam0->f_1 = MISC::GET_GAME_TIMER();
		iParam0->f_6 = 3;
		iParam0->f_5 = 1;
	}
}

void func_169(var uParam0)//Position - 0x5A9D
{
	if (uParam0->f_7 == 9)
	{
		if (uParam0->f_9 >= 2)
		{
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 0.25f);
				PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
				TASK::TASK_PLAY_ANIM(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 8f, -8f, -1, 56, 0f, false, false, false);
			}
		}
	}
}

void func_172(int* iParam0)//Position - 0x5B20
{
	if (__LIB_1__.func_183(iLocal_43) && (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_43, false) && !PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_43, false)))
	{
		if (ENTITY::GET_ENTITY_SPEED(iLocal_43) > 0f)
		{
			iParam0->f_1 = MISC::GET_GAME_TIMER();
			iParam0->f_8 = iParam0->f_7;
			iParam0->f_5 = 1;
			iParam0->f_6 = 21;
		}
	}
}

void func_176(int* iParam0, int iParam1)//Position - 0x5C7F
{
	func_169(iParam0);
	if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) || iParam1) || iParam0->f_6 == 23)
	{
		if (!__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), *iParam0, 10f, 1))
		{
			if (!__LIB_4__.func_465(*iParam0, joaat("SCRIPT_TASK_SMART_FLEE_PED")))
			{
				iParam0->f_6 = 5;
				iParam0->f_5 = 1;
				iParam0->f_1 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			iParam0->f_6 = 10;
			iParam0->f_5 = 1;
			iParam0->f_1 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iParam0->f_5 != 1)
	{
		if (!__LIB_4__.func_465(*iParam0, joaat("SCRIPT_TASK_COMBAT")) && !__LIB_4__.func_465(*iParam0, joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE")))
		{
			iParam0->f_5 = 1;
			iParam0->f_6 = 21;
			iParam0->f_1 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_185(var uParam0)//Position - 0x6155
{
	float fVar0;
	if (uParam0->f_9 == 0 && uParam0->f_10 == 1)
	{
	}
	switch (uParam0->f_7)
	{
		case 1:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_43, true))
			{
				func_176(uParam0, 0);
				return;
			}
			if (uParam0->f_10 == 0)
			{
				func_196(uParam0, 1);
			}
			else
			{
				func_196(uParam0, 0);
			}
			break;
		case 2:
			if (PED::IS_PED_SITTING_IN_VEHICLE(*uParam0, iLocal_43))
			{
				if (!__LIB_4__.func_465(*uParam0, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
				{
					if (uParam0->f_10 == 0)
					{
						func_130(0);
					}
					else
					{
						uParam0->f_7 = 3;
					}
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_43, true))
			{
				func_176(uParam0, 0);
				return;
			}
			break;
		case 3:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_43, true))
			{
				func_176(uParam0, 0);
				return;
			}
			if (bLocal_51)
			{
				if (iLocal_48 <= 20 && iLocal_48 != -1)
				{
					if (!Local_46[iLocal_48 /*25*/].f_18)
					{
						if (__LIB_0__.func_530(*uParam0, Local_46[iLocal_48 /*25*/], 20f, 1))
						{
							if (Local_46[iLocal_48 /*25*/].f_9 && VEHICLE::IS_VEHICLE_STOPPED(iLocal_43))
							{
								func_195();
							}
						}
					}
				}
				else
				{
					uParam0->f_7 = 10;
				}
			}
			break;
		case 4:
			if (__LIB_0__.func_530(*uParam0, Local_46[iLocal_48 /*25*/], 25f, 1))
			{
				if (Local_46[iLocal_48 /*25*/].f_9)
				{
					func_194(uParam0);
				}
				else
				{
					Local_46[iLocal_48 /*25*/].f_18 = 1;
					func_130(0);
				}
			}
			break;
		case 5:
			if (__LIB_1__.func_183(iLocal_43))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_43, 25f, 10, false);
				fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_43);
				if (fVar0 < 8f)
				{
					func_194(uParam0);
				}
			}
			break;
		case 6:
			if (!__LIB_4__.func_465(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) && VEHICLE::IS_VEHICLE_STOPPED(iLocal_43))
			{
				if (bLocal_51)
				{
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 7;
				}
				else
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(*uParam0, 0, 0);
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 8;
				}
			}
			break;
		case 7:
			if (__LIB_1__.func_197(Local_45[1 /*11*/]))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_45[1 /*11*/], iLocal_43, false) && Local_45[1 /*11*/].f_7 == 3)
				{
					func_130(0);
				}
			}
			break;
		case 8:
			if (!PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_43, false))
			{
				func_164(uParam0);
			}
			break;
		case 9:
			func_186(uParam0);
			break;
	}
}

void func_186(var uParam0)//Position - 0x63C0
{
	int iVar0;
	int iVar1;
	if (uParam0->f_9 >= 1 && uParam0->f_9 != 0)
	{
	}
	switch (uParam0->f_9)
	{
		case 1:
			if (!__LIB_4__.func_465(*uParam0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (__LIB_0__.func_670(ENTITY::GET_ENTITY_COORDS(*uParam0, true), Local_46[iLocal_48 /*25*/].f_19) > 1.5f)
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_46[iLocal_48 /*25*/].f_19, 0);
				}
				TASK::TASK_PLAY_ANIM(0, "missfbi4prepp1", "_bag_pickup_garbage_man", 8f, -16f, -1, 528384, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				uParam0->f_9 = 2;
			}
			else if (func_191(Local_46[iLocal_48 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
			{
				func_190(uParam0);
				return;
			}
			PED::SET_PED_CAPSULE(*uParam0, 0.2f);
			break;
		case 2:
			if (__LIB_4__.func_465(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man") >= 0.333f)
					{
						PED::SET_PED_MOVEMENT_CLIPSET(*uParam0, "missfbi4prepp1_garbageman", 0f);
						PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0, "missfbi4prepp1_garbageman");
						if (__LIB_0__.func_121(Local_46[iLocal_48 /*25*/].f_17) && !ENTITY::IS_ENTITY_ATTACHED(Local_46[iLocal_48 /*25*/].f_17))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_46[iLocal_48 /*25*/].f_17, *uParam0, PED::GET_PED_BONE_INDEX(*uParam0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
						}
					}
				}
				if (func_191(Local_46[iLocal_48 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
				{
					func_190(uParam0);
					return;
				}
			}
			else if (!__LIB_4__.func_465(*uParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
			{
				if (__LIB_1__.func_183(iLocal_43))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, ENTITY::GET_ENTITY_HEADING(iLocal_43));
				}
				uParam0->f_9 = 3;
			}
			PED::SET_PED_CAPSULE(*uParam0, 0.2f);
			break;
		case 3:
			if (__LIB_1__.func_183(iLocal_43))
			{
				if (!func_191(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 0f, -5.5f, 0f), iLocal_43, 1.9f, 1.9f, 8f))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 0f, -5.5f, 0f), 0.9f, 0.9f, 2f, false, true, 0))
					{
						if (!__LIB_4__.func_465(*uParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							if (__LIB_0__.func_670(ENTITY::GET_ENTITY_COORDS(*uParam0, true), ENTITY::GET_ENTITY_COORDS(iLocal_43, true)) > 3f)
							{
								TASK::TASK_ACHIEVE_HEADING(0, ENTITY::GET_ENTITY_HEADING(iLocal_43), 0);
							}
							TASK::TASK_PLAY_ANIM(0, "missfbi4prepp1", "_bag_throw_garbage_man", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iVar1);
							TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar1);
							TASK::CLEAR_SEQUENCE_TASK(&iVar1);
							uParam0->f_9 = 4;
						}
					}
					else if (!__LIB_4__.func_465(*uParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, ENTITY::GET_ENTITY_HEADING(iLocal_43));
					}
				}
				else
				{
					func_188(uParam0);
				}
			}
			break;
		case 4:
			if (!func_191(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 0f, -5.5f, 0f), *uParam0, 1.9f, 1.9f, 8f))
			{
				if (__LIB_4__.func_465(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man") >= 0.391f)
						{
							if (__LIB_0__.func_121(Local_46[iLocal_48 /*25*/].f_17))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(Local_46[iLocal_48 /*25*/].f_17))
								{
									PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 0.25f);
									PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
									ENTITY::DETACH_ENTITY(Local_46[iLocal_48 /*25*/].f_17, true, false);
									OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_46[iLocal_48 /*25*/].f_17, 2f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
									ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_46[iLocal_48 /*25*/].f_17, 1, ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0), false, true, true, false);
								}
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_46[iLocal_48 /*25*/].f_17, iLocal_43))
								{
									__LIB_0__.func_123(&(Local_46[iLocal_48 /*25*/].f_17));
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_9 = 0;
					if (__LIB_1__.func_183(iLocal_43))
					{
						VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_43, 5, false);
						__LIB_0__.func_123(&(Local_46[iLocal_48 /*25*/].f_17));
					}
					func_163(uParam0);
				}
			}
			else
			{
				func_188(uParam0);
			}
			break;
		case 5:
			break;
	}
}

void func_188(var uParam0)//Position - 0x6830
{
	int iVar0;
	int iVar1;
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_40, joaat("PLAYER"));
	func_169(uParam0);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*uParam0, PLAYER::PLAYER_PED_ID(), 8f, -1f, 10f, 0);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
		TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	}
	PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 0.25f);
	PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
	func_189();
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_4))
	{
		uParam0->f_4 = __LIB_6__.func_850(*uParam0, 1, 145);
	}
	uParam0->f_1 = MISC::GET_GAME_TIMER();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 15;
}

void func_189()//Position - 0x692B
{
	Local_42.f_0 = 0;
	Local_42.f_26 = 0;
	Local_42.f_18 = 0;
}

void func_190(var uParam0)//Position - 0x6940
{
	int iVar0;
	int iVar1;
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_40, joaat("PLAYER"));
	func_169(uParam0);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*uParam0, PLAYER::PLAYER_PED_ID(), 8f, -1f, 10f, 0);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
		TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	}
	PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 0.25f);
	PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
	func_189();
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_4))
	{
		uParam0->f_4 = __LIB_6__.func_850(*uParam0, 1, 145);
	}
	uParam0->f_1 = MISC::GET_GAME_TIMER();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 14;
}

int func_191(struct<3> Param0, int iParam1, struct<3> Param2)//Position - 0x6A3B
{
	Local_42.f_2 = { Param0 };
	Local_42.f_8 = { Param2 };
	func_192(&Local_42, iParam1);
	if (Local_42.f_26)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(Local_42.f_18))
			{
				if (__LIB_0__.func_121(Local_42.f_18))
				{
					if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_42.f_18) == PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))
					{
						return 1;
					}
				}
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(Local_42.f_18))
		{
			if (__LIB_0__.func_121(Local_42.f_18))
			{
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_42.f_18) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_192(var uParam0, int iParam1)//Position - 0x6ACD
{
	int iVar0;
	int iVar1;
	iVar1 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar0, &(uParam0->f_20), &(uParam0->f_23), &(uParam0->f_18));
	uParam0->f_19 = 2 == iVar1;
	if (uParam0->f_19)
	{
		if (0 == iVar0)
		{
			uParam0->f_26 = 0;
		}
		else
		{
			uParam0->f_26 = 1;
		}
	}
	if (iVar1 != 1)
	{
		func_193(uParam0, iParam1);
	}
}

void func_193(var uParam0, int iParam1)//Position - 0x6B1C
{
	switch (uParam0->f_1)
	{
		case 0:
			break;
		case 1:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(uParam0->f_2, uParam0->f_5, 511, iParam1, 7);
			break;
		case 2:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_BOUND(uParam0->f_17, 511, 4);
			break;
		case 3:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_BOUNDING_BOX(uParam0->f_17, 511, 4);
			break;
		case 4:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_BOX(uParam0->f_2, uParam0->f_8, uParam0->f_11, uParam0->f_14, 6, iParam1, 4);
			break;
		case 5:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_CAPSULE(uParam0->f_2, uParam0->f_5, uParam0->f_15, 511, iParam1, 4);
			break;
	}
	uParam0->f_16 = *uParam0 != 0;
}

void func_194(var uParam0)//Position - 0x6BE1
{
	int iVar0;
	if (__LIB_1__.func_183(iLocal_43))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_43, Local_46[iLocal_48 /*25*/].f_3, 8f, 0, joaat("trash"), 786469, 10f, 15f);
		TASK::TASK_VEHICLE_PARK(0, iLocal_43, Local_46[iLocal_48 /*25*/].f_3, Local_46[iLocal_48 /*25*/].f_8, Local_46[iLocal_48 /*25*/].f_10, 5f, true);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		uParam0->f_7 = 6;
	}
}

void func_195()//Position - 0x6C63
{
	func_164(&(Local_45[1 /*11*/]));
}

void func_196(var uParam0, bool bParam1)//Position - 0x6C74
{
	int iVar0;
	if (func_191(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_137(bParam1)), iLocal_43, 1.9f, 1.9f, 8f))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 5f, 0f, -2f), ENTITY::GET_ENTITY_COORDS(iLocal_43, true) + Vector(2f, 0f, 0f), 9f, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 5f, 0f, -2f), ENTITY::GET_ENTITY_COORDS(iLocal_43, true) + Vector(2f, 0f, 0f), 9f, false, true, 0))
		{
			func_197(uParam0);
		}
		else if (!__LIB_4__.func_465(*uParam0, joaat("SCRIPT_TASK_GO_TO_ENTITY")) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 5f, 0f, -2f), ENTITY::GET_ENTITY_COORDS(iLocal_43, true) + Vector(2f, 0f, 0f), 9f, false, true, 0))
		{
			TASK::CLEAR_PED_TASKS(*uParam0);
			TASK::TASK_GO_TO_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 4f, 1f, 2f, 0);
		}
	}
	else if (__LIB_0__.func_530(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_137(bParam1)), 5f, 1))
	{
		iVar0 = -1;
		if (!bParam1)
		{
			iVar0 = 0;
		}
		TASK::TASK_ENTER_VEHICLE(*uParam0, iLocal_43, -1, iVar0, 1f, 8388609, 0);
		uParam0->f_7 = 2;
	}
}

void func_197(var uParam0)//Position - 0x6D96
{
	int iVar0;
	int iVar1;
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_40, joaat("PLAYER"));
	func_169(uParam0);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*uParam0, PLAYER::PLAYER_PED_ID(), 8f, -1f, 10f, 0);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
		TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	}
	PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 0.25f);
	PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
	func_189();
	uParam0->f_1 = MISC::GET_GAME_TIMER();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 13;
}

void func_198(var uParam0)//Position - 0x6E77
{
	if (uParam0->f_5 != 1)
	{
		if (__LIB_1__.func_183(iLocal_43) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!__LIB_4__.func_465(*uParam0, joaat("SCRIPT_TASK_DRIVE_BY")) && PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_43, false))
			{
				if (__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), iLocal_43, 10f, 1))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_43, PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_DRIVE_BY(*uParam0, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 10f, 100, true, joaat("FIRING_PATTERN_FULL_AUTO"));
						uParam0->f_1 = MISC::GET_GAME_TIMER();
						uParam0->f_6 = 9;
					}
				}
			}
		}
	}
}

void func_199()//Position - 0x6F07
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_41 - 1))
	{
		if (Local_46[iVar0 /*25*/].f_23 != 0)
		{
			if (Local_46[iVar0 /*25*/].f_24)
			{
				if ((iVar0 != iLocal_48 && __LIB_0__.func_121(Local_46[iVar0 /*25*/].f_17)) && __LIB_0__.func_76(Local_46[iVar0 /*25*/].f_17, PLAYER::PLAYER_PED_ID(), 1) > 200f)
				{
					OBJECT::DELETE_OBJECT(&(Local_46[iVar0 /*25*/].f_17));
					Local_46[iVar0 /*25*/].f_24 = 0;
				}
			}
			else if (Local_46[iVar0 /*25*/].f_23 != 0)
			{
				if (__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_46[iVar0 /*25*/], 100f, 1) || __LIB_0__.func_530(Local_45[0 /*11*/], Local_46[iVar0 /*25*/], 120f, 1))
				{
					Local_46[iVar0 /*25*/].f_24 = func_200(&(Local_46[iVar0 /*25*/].f_17), Local_46[iVar0 /*25*/].f_23, Local_46[iVar0 /*25*/].f_19, Local_46[iVar0 /*25*/].f_22, 1);
				}
			}
		}
		iVar0++;
	}
}

int func_200(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x6FFA
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (__LIB_12__.func_52(iParam1, "Loading", 0))
		{
			*uParam0 = OBJECT::CREATE_OBJECT(iParam1, Param2, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				ENTITY::SET_ENTITY_HEADING(*uParam0, fParam3);
				PHYSICS::ACTIVATE_PHYSICS(*uParam0);
				if (bParam4)
				{
					__LIB_12__.func_51(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (__LIB_0__.func_121(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_202(int* iParam0, int iParam1, int iParam2)//Position - 0x70C5
{
	if (iParam0->f_5 != 1 || iParam2)
	{
		if (!__LIB_1__.func_197(Local_45[__LIB_12__.func_40(iParam1) /*11*/]))
		{
			if (!bLocal_52)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_45[__LIB_12__.func_40(iParam1) /*11*/]))
				{
					if (__LIB_11__.func_747(*iParam0, Local_45[__LIB_12__.func_40(iParam1) /*11*/], 140f, 0) || __LIB_0__.func_508(Local_45[__LIB_12__.func_40(iParam1) /*11*/], *iParam0, 3f, 1))
					{
						func_176(iParam0, 0);
						bLocal_52 = true;
						return;
					}
					else
					{
						Local_54 = { ENTITY::GET_ENTITY_COORDS(Local_45[__LIB_12__.func_40(iParam1) /*11*/], true) };
						iParam0->f_1 = MISC::GET_GAME_TIMER();
						iParam0->f_8 = iParam0->f_7;
						iParam0->f_5 = 1;
						iParam0->f_6 = 11;
					}
				}
				else
				{
					func_176(iParam0, 0);
				}
			}
		}
		else if (Local_45[__LIB_12__.func_40(iParam1) /*11*/].f_6 == 22)
		{
			if (__LIB_11__.func_747(*iParam0, Local_45[__LIB_12__.func_40(iParam1) /*11*/], 140f, 0) && __LIB_0__.func_508(Local_45[__LIB_12__.func_40(iParam1) /*11*/], PLAYER::PLAYER_PED_ID(), 15f, 1))
			{
				iParam0->f_5 = 1;
				iParam0->f_6 = 21;
			}
		}
		else if (Local_45[__LIB_12__.func_40(iParam1) /*11*/].f_6 == 5 || Local_45[__LIB_12__.func_40(iParam1) /*11*/].f_6 == 7)
		{
			if (__LIB_0__.func_508(Local_45[__LIB_12__.func_40(iParam1) /*11*/], *iParam0, 10f, 1))
			{
				func_176(iParam0, 0);
			}
		}
		if (func_213(*iParam0))
		{
			func_169(iParam0);
			iParam0->f_1 = MISC::GET_GAME_TIMER();
			iParam0->f_8 = iParam0->f_7;
			iParam0->f_5 = 1;
			iParam0->f_6 = 21;
		}
		if (iParam0->f_10 == 0 && iParam0->f_7 == 4)
		{
			if (func_161(iParam0))
			{
				if (PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_43, false))
				{
					TASK::TASK_DRIVE_BY(*iParam0, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 10f, 100, true, joaat("FIRING_PATTERN_FULL_AUTO"));
					AUDIO::SET_HORN_PERMANENTLY_ON_TIME(iLocal_43, 2000f);
					iLocal_55 = MISC::GET_GAME_TIMER();
					iParam0->f_1 = MISC::GET_GAME_TIMER();
					iParam0->f_6 = 16;
					iParam0->f_5 = 1;
				}
			}
		}
		if (__LIB_39__.func_918(*iParam0, 1, 70f, 170f, 0, 1, 0, 0) && !func_203(iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (__LIB_1__.func_183(iLocal_43))
				{
					if (PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_43, false))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_43) > 5f)
						{
							if (iParam1 == 0)
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(*iParam0, iLocal_43, PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 300f, 2f, true);
								iParam0->f_6 = 7;
								TASK::TASK_COWER(Local_45[__LIB_12__.func_40(iParam1) /*11*/], -1);
								Local_45[__LIB_12__.func_40(iParam1) /*11*/].f_6 = 10;
								Local_45[__LIB_12__.func_40(iParam1) /*11*/].f_5 = 1;
								iParam0->f_5 = 1;
								iParam0->f_1 = MISC::GET_GAME_TIMER();
								Local_45[__LIB_12__.func_40(iParam1) /*11*/].f_1 = MISC::GET_GAME_TIMER();
							}
							else
							{
								TASK::TASK_COWER(*iParam0, -1);
								iParam0->f_6 = 12;
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_45[__LIB_12__.func_40(iParam1) /*11*/], iLocal_43, PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 300f, 2f, true);
								Local_45[__LIB_12__.func_40(iParam1) /*11*/].f_6 = 5;
								Local_45[__LIB_12__.func_40(iParam1) /*11*/].f_5 = 1;
								iParam0->f_5 = 1;
								iParam0->f_1 = MISC::GET_GAME_TIMER();
								Local_45[__LIB_12__.func_40(iParam1) /*11*/].f_1 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							func_176(iParam0, 0);
							if (ENTITY::DOES_ENTITY_EXIST(Local_45[__LIB_12__.func_40(iParam1) /*11*/]))
							{
								if (__LIB_11__.func_747(Local_45[__LIB_12__.func_40(iParam1) /*11*/], PLAYER::PLAYER_PED_ID(), 1126825984, 0))
								{
									func_176(&(Local_45[__LIB_12__.func_40(iParam1) /*11*/]), 0);
								}
							}
						}
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam0);
					}
					else
					{
						func_176(iParam0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_45[__LIB_12__.func_40(iParam1) /*11*/]))
						{
							if (__LIB_26__.func_604(Local_45[__LIB_12__.func_40(iParam1) /*11*/], *iParam0, 1126825984, 1, 250, 7))
							{
								func_176(&(Local_45[__LIB_12__.func_40(iParam1) /*11*/]), 0);
							}
						}
					}
				}
			}
			else
			{
				iParam0->f_1 = MISC::GET_GAME_TIMER();
				iParam0->f_8 = iParam0->f_7;
				iParam0->f_5 = 1;
				iParam0->f_6 = 21;
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam0);
				if (__LIB_26__.func_604(Local_45[__LIB_12__.func_40(iParam1) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					Local_45[__LIB_12__.func_40(iParam1) /*11*/].f_1 = MISC::GET_GAME_TIMER();
					Local_45[__LIB_12__.func_40(iParam1) /*11*/].f_8 = iParam0->f_7;
					Local_45[__LIB_12__.func_40(iParam1) /*11*/].f_5 = 1;
					Local_45[__LIB_12__.func_40(iParam1) /*11*/].f_6 = 21;
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_45[__LIB_12__.func_40(iParam1) /*11*/]);
				}
			}
			iParam0->f_5 = 1;
		}
		else if (PED::IS_PED_BEING_JACKED(*iParam0))
		{
			func_169(iParam0);
			TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, true);
			iParam0->f_6 = 2;
			iParam0->f_5 = 1;
			iParam0->f_1 = MISC::GET_GAME_TIMER();
		}
		if (PED::IS_PED_RAGDOLL(*iParam0))
		{
			if (__LIB_0__.func_121(Local_46[iLocal_48 /*25*/].f_17))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Local_46[iLocal_48 /*25*/].f_17))
				{
					ENTITY::DETACH_ENTITY(Local_46[iLocal_48 /*25*/].f_17, true, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_46[iLocal_48 /*25*/].f_17, 1, ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0), false, true, true, false);
				}
			}
		}
	}
	if (iParam0->f_5 != 1)
	{
		if (__LIB_1__.func_197(Local_45[__LIB_12__.func_40(iParam1) /*11*/]))
		{
			if (PED::IS_PED_BEING_JACKED(Local_45[__LIB_12__.func_40(iParam1) /*11*/]))
			{
				func_169(iParam0);
				TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 120f, -1, false, false);
				iParam0->f_1 = MISC::GET_GAME_TIMER();
				iParam0->f_6 = 7;
				iParam0->f_5 = 1;
			}
		}
	}
}

int func_203(var uParam0)//Position - 0x75ED
{
	if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, 0f, -2f, 0f), 2f, 3f, 2f, false, true, 0) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0)//Position - 0x7AD1
{
	if (__LIB_0__.func_508(iParam0, PLAYER::PLAYER_PED_ID(), 6f, 1))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_214()//Position - 0x7B05
{
	if (__LIB_1__.func_183(Local_199.f_0))
	{
		if (__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), Local_199.f_0, 100f, 1) && !iLocal_194)
		{
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("trash"), 3);
			if (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("trash")))
			{
				iLocal_194 = 1;
			}
		}
		else if (!__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), Local_199.f_0, 120f, 1) && iLocal_194)
		{
			VEHICLE::REMOVE_VEHICLE_ASSET(joaat("trash"));
			iLocal_194 = 0;
		}
	}
}

void func_221()//Position - 0x7FC2
{
	__LIB_32__.func_833(&iLocal_200, &iLocal_201, &iLocal_71, &iLocal_183, &iLocal_182, Local_186, Local_199.f_0, 0, 1090519040);
	func_155();
	func_238();
	func_214();
	switch (iLocal_69)
	{
		case 0:
			if (func_122(iLocal_68, bLocal_28))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && !__LIB_0__.func_75())
				{
					__LIB_20__.func_745(&iLocal_182, Local_186, 1);
					__LIB_12__.func_50("PRA_TAKBACK", &iLocal_181);
				}
				iLocal_69 = 1;
			}
			break;
		case 1:
			__LIB_20__.func_800(&iLocal_182, Local_186, &iLocal_70, iLocal_71, &iLocal_181, &iLocal_195);
			func_227();
			if (__LIB_20__.func_803(iLocal_200, Local_186, &iLocal_182, iLocal_70, iLocal_71, &iLocal_181, &iLocal_196, 0, 0, 1086324736))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 5f, 4);
				iLocal_69 = 2;
			}
			break;
		case 2:
			__LIB_38__.func_176();
			__LIB_0__.func_523(&iLocal_182);
			__LIB_0__.func_523(&iLocal_183);
			if (__LIB_12__.func_39(1077936128, 1))
			{
				func_110(0);
			}
			break;
		case 3:
			if (__LIB_1__.func_183(iLocal_200))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, -1);
				}
				else
				{
					__LIB_10__.func_701(iLocal_200, Local_186, 146.5443f, 0, 1);
					func_40(1, 1, 1);
					iLocal_69 = 1;
				}
			}
			break;
	}
}

void func_227()//Position - 0x8302
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = __LIB_36__.func_33(iVar0);
		if (!PED::IS_PED_INJURED(iVar2))
		{
			if (__LIB_36__.func_107(iVar2, 0))
			{
				if (!bVar1)
				{
					if (__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), iVar2, 5f, 1))
					{
						if (!__LIB_0__.func_75())
						{
							func_232(iVar0);
							bVar1 = true;
						}
					}
				}
				if (!iLocal_374[iVar0])
				{
					if (iVar0 == 0)
					{
						__LIB_0__.func_203(&uLocal_205, iVar0, iVar2, "MICHAEL", 0, 1);
					}
					else if (iVar0 == 1)
					{
						__LIB_0__.func_203(&uLocal_205, iVar0, iVar2, "FRANKLIN", 0, 1);
					}
					else if (iVar0 == 2)
					{
						__LIB_0__.func_203(&uLocal_205, iVar0, iVar2, "TREVOR", 0, 1);
					}
					iLocal_374[iVar0] = 1;
				}
			}
			if (!__LIB_36__.func_78(iVar2))
			{
				if (__LIB_36__.func_107(iVar2, 0))
				{
					if (func_231(iVar2) || func_229(iVar2))
					{
						if (__LIB_36__.func_79(iVar2, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
							TASK::CLEAR_PED_TASKS(iVar2);
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar2, true))
			{
				if (func_231(iVar2))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
					{
						if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(623.3781f, -172.26003f, 1700.7317f, -2115.8428f))
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(iVar2, PED::GET_VEHICLE_PED_IS_IN(iVar2, false), Local_186, 20f, 0, 0, 34340901, 2f, 10f);
						}
						else
						{
							PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(623.3781f, -172.26003f, 1700.7317f, -2115.8428f);
						}
					}
				}
				else if (func_229(iVar2))
				{
					if (__LIB_1__.func_183(Local_199.f_0))
					{
						if (!__LIB_0__.func_508(iVar2, Local_199.f_0, 17f, 1))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
							{
								TASK::TASK_VEHICLE_MISSION(iVar2, PED::GET_VEHICLE_PED_IS_IN(iVar2, false), Local_199.f_0, 3, 20f, 786468, 2f, 0.5f, true);
							}
						}
					}
				}
				else
				{
					__LIB_36__.func_77(iVar2);
				}
			}
		}
		iVar0++;
	}
}

int func_229(int iParam0)//Position - 0x8590
{
	int iVar0;
	if (!__LIB_0__.func_198())
	{
		if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__.func_183(iVar0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("trash")))
				{
					return 0;
				}
				if (PED::IS_PED_IN_VEHICLE(iParam0, iVar0, false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_231(int iParam0)//Position - 0x862C
{
	if (!__LIB_0__.func_198())
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_199.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_199.f_0, false)) && !ENTITY::IS_ENTITY_AT_COORD(Local_199.f_0, Local_186, 2f, 2f, 2f, false, true, 0))
		{
			if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_199.f_0, false)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (PED::IS_PED_IN_VEHICLE(iParam0, Local_199.f_0, false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_199.f_0, -1, false) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_232(int iParam0)//Position - 0x86BA
{
	if (iLocal_68 > 1)
	{
		if (iLocal_70 > 0)
		{
			if (!BitTest(Local_73[iParam0 /*8*/].f_7, 0) && iLocal_71 == 1)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (func_236(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][0], 8, 0, 0, 0))
					{
						MISC::SET_BIT(&(Local_73[iParam0 /*8*/].f_7), 0);
					}
				}
			}
		}
		else
		{
			if ((BitTest(Local_73[iParam0 /*8*/].f_7, 0) && !BitTest(Local_73[iParam0 /*8*/].f_7, 1)) && iLocal_71 == 1)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (func_236(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][1], 7, 0, 0, 0))
					{
						MISC::SET_BIT(&(Local_73[iParam0 /*8*/].f_7), 1);
					}
				}
			}
			if (!BitTest(Local_73[iParam0 /*8*/].f_7, 5))
			{
				if (__LIB_0__.func_529(iLocal_200, Local_186, 1) < 15f && iLocal_71 == 1)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (func_236(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][5], 7, 0, 0, 0))
						{
							MISC::SET_BIT(&(Local_73[iParam0 /*8*/].f_7), 5);
						}
					}
				}
			}
			switch (__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					if (iParam0 == 1)
					{
						if (!func_234(2))
						{
							func_233(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_234(4))
						{
							func_233(iParam0, 4);
						}
					}
					break;
				case 1:
					if (iParam0 == 0)
					{
						if (!func_234(2))
						{
							func_233(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_234(3))
						{
							func_233(iParam0, 3);
						}
					}
					break;
				case 2:
					if (iParam0 == 1)
					{
						if (!func_234(3))
						{
							func_233(iParam0, 3);
						}
					}
					else if (iParam0 == 0)
					{
						if (!func_234(4))
						{
							func_233(iParam0, 4);
						}
					}
					break;
				}
			}
	}
}

void func_233(int iParam0, bool bParam1)//Position - 0x888D
{
	if (!BitTest(Local_73[iParam0 /*8*/].f_7, bParam1))
	{
		if (iLocal_375 != -1)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_236(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][bParam1], 7, 0, 0, 0))
				{
					MISC::SET_BIT(&(Local_73[iParam0 /*8*/].f_7), bParam1);
				}
			}
		}
		else if (!__LIB_0__.func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			iLocal_375 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_375 = -1;
		}
	}
}

int func_234(int iParam0)//Position - 0x8902
{
	if ((BitTest(Local_73[0 /*8*/].f_7, iParam0) || BitTest(Local_73[1 /*8*/].f_7, iParam0)) || BitTest(Local_73[2 /*8*/].f_7, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_236(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8979
{
	__LIB_0__.func_391(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_83(sParam2, iParam3, 0);
}

void func_238()//Position - 0x89E9
{
	if (__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_186, 220f, 1))
	{
		if (!iLocal_203 && !__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_186, 100f, 1))
		{
			iLocal_203 = __LIB_12__.func_167(&iLocal_202, joaat("cavalcade2"), 1370.9122f, -2060.055f, 50.9983f, 312.8686f, 1);
		}
	}
	else if (__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_186, 240f, 1))
	{
		if (iLocal_203)
		{
			__LIB_0__.func_106(&iLocal_202);
			iLocal_203 = 0;
		}
	}
}

void func_239()//Position - 0x8A75
{
	__LIB_32__.func_833(&iLocal_200, &iLocal_201, &iLocal_71, &iLocal_183, &iLocal_182, Local_186, Local_199.f_0, 0, 1090519040);
	func_214();
	func_155();
	switch (iLocal_69)
	{
		case 0:
			if (func_122(iLocal_68, bLocal_28))
			{
				__LIB_20__.func_746(&iLocal_182, Local_199.f_0, 1);
				__LIB_12__.func_50("PRA_GOVAN", &iLocal_181);
				iLocal_69 = 1;
			}
			break;
		case 1:
			func_227();
			if (__LIB_1__.func_183(Local_199.f_0))
			{
				__LIB_39__.func_909(&uLocal_56, Local_199.f_0, 0, 0, 1, 1, 1);
			}
			if (!bLocal_190)
			{
				if (__LIB_1__.func_197(Local_197.f_0) && PED::IS_PED_BEING_JACKED(Local_197.f_0))
				{
					func_241();
				}
				if (__LIB_1__.func_197(Local_198.f_0) && PED::IS_PED_BEING_JACKED(Local_198.f_0))
				{
					func_241();
				}
			}
			if (__LIB_1__.func_183(iLocal_200))
			{
				if ((iLocal_71 == 1 || iLocal_71 == 2) || iLocal_71 == 3)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					iLocal_69 = 2;
				}
			}
			break;
		case 2:
			__LIB_0__.func_523(&iLocal_182);
			__LIB_9__.func_981(&uLocal_56, 0, 0);
			func_110(0);
			break;
		case 3:
			__LIB_0__.func_0(&Local_197);
			__LIB_0__.func_0(&Local_198);
			if (__LIB_1__.func_183(Local_199.f_0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_199.f_0, -1);
			}
			__LIB_12__.func_43(1);
			func_40(1, 1, 1);
			iLocal_69 = 1;
			break;
	}
}

void func_241()//Position - 0x8C13
{
	char* sVar0;
	switch (__LIB_18__.func_173())
	{
		case 0:
			sVar0 = "FBI4_JACKSM";
			break;
		case 1:
			sVar0 = "FBI4_JACKSF";
			break;
		case 2:
			sVar0 = "FBI4_JACKST";
			break;
	}
	bLocal_190 = func_236(&uLocal_205, "FBIPRAU", sVar0, 7, 0, 0, 0);
	if (bLocal_190)
	{
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 8f, 4);
	}
}

void func_270()//Position - 0x9CF1
{
	switch (iLocal_69)
	{
		case 0:
			if (func_122(iLocal_68, 0))
			{
				__LIB_41__.func_662();
				__LIB_11__.func_731(33);
				PLAYER::SET_MAX_WANTED_LEVEL(2);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
				if (__LIB_0__.func_294())
				{
					__LIB_6__.func_775(0, -1, 1);
					__LIB_0__.func_84(500, 1);
					iLocal_69 = 2;
				}
				else
				{
					if (__LIB_0__.func_2(0))
					{
						__LIB_20__.func_741(PLAYER::PLAYER_PED_ID(), 1228.6351f, -348.4277f, 68.0929f, 86.7244f);
						__LIB_20__.func_665(1228.6351f, -348.4277f, 68.0929f, 1112014848, 12, 5000, 0, 0);
						__LIB_0__.func_84(500, 1);
					}
					__LIB_0__.func_371();
					if (iLocal_68 == 2)
					{
						iLocal_69 = 0;
					}
					else
					{
						iLocal_69 = 2;
					}
				}
			}
			break;
		case 2:
			func_110(0);
			break;
	}
}

void func_335()//Position - 0x107DE
{
	__LIB_0__.func_371();
	func_336();
}

void func_336()//Position - 0x107EE
{
	if (!iLocal_188)
	{
		if (__LIB_1__.func_183(iLocal_200))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, false))
			{
				__LIB_0__.func_409(iLocal_200, -1);
				__LIB_0__.func_320(iLocal_200, 318);
				iLocal_188 = 1;
			}
		}
	}
	if (!iLocal_189)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			__LIB_0__.func_403(320, 0);
			iLocal_189 = 1;
		}
	}
	else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		__LIB_0__.func_402(0, 320);
		iLocal_189 = 0;
	}
}

void func_339()//Position - 0x108B8
{
	if (!bLocal_28 && iLocal_68 != 5)
	{
		if (iLocal_68 > 0)
		{
			func_340();
		}
	}
}

void func_340()//Position - 0x108DB
{
	float fVar0;
	int iVar1;
	fVar0 = 600f;
	if (!__LIB_1__.func_183(iLocal_200))
	{
		if (!__LIB_1__.func_183(iLocal_201) && !__LIB_1__.func_183(Local_199.f_0))
		{
			func_342(1);
			return;
		}
		if (__LIB_1__.func_183(Local_199.f_0) && !__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), Local_199.f_0, fVar0, 1))
		{
			func_342(2);
		}
	}
	else
	{
		iVar1 = 0;
		if (!__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), iLocal_200, fVar0, 1))
		{
			iVar1++;
		}
		if (__LIB_1__.func_183(iLocal_201))
		{
			if (!__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), iLocal_201, fVar0, 1))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (__LIB_1__.func_183(Local_199.f_0))
		{
			if (!__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), Local_199.f_0, fVar0, 1))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_342(2);
			return;
		}
		iVar1 = 0;
		if (__LIB_12__.func_55(iLocal_200))
		{
			iVar1++;
		}
		if (__LIB_1__.func_183(iLocal_201))
		{
			if (__LIB_12__.func_55(iLocal_201))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (__LIB_1__.func_183(Local_199.f_0))
		{
			if (__LIB_12__.func_55(Local_199.f_0))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_342(3);
			return;
		}
	}
}

void func_342(int iParam0)//Position - 0x10A7C
{
	HUD::CLEAR_PRINTS();
	__LIB_0__.func_296();
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			sLocal_179 = "PRA_FWRECK";
			break;
		case 2:
			sLocal_179 = "PRA_FFAR";
			break;
		case 3:
			sLocal_179 = "PRA_FSTUCK";
			break;
	}
	iLocal_68 = 5;
	iLocal_69 = 0;
}

void func_360()//Position - 0x11552
{
	func_375();
	func_373();
	func_366();
	func_363();
	func_361();
}

void func_361()//Position - 0x1156E
{
	iLocal_374[0] = 0;
	iLocal_374[1] = 0;
	iLocal_374[2] = 0;
	Local_73[0 /*8*/] = { func_362("FP1_WANTM", "FP1_LOSTM", "FP1_THEREM", "FP1_CHATFM", "", "FP1_CHATTM") };
	Local_73[1 /*8*/] = { func_362("FP1_WANTT", "FP1_LOSTT", "FP1_THERET", "FP1_CHATFM", "FP1_CHATFT", "") };
	Local_73[2 /*8*/] = { func_362("FP1_WANTF", "FP1_LOSTF", "FP1_THEREF", "", "FP1_CHATFT", "FP1_CHATTM") };
}

struct<8> func_362(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)//Position - 0x115F7
{
	struct<8> Var0;
	Var0 = 6;
	Var0[0] = sParam0;
	Var0[1] = sParam1;
	Var0[5] = sParam2;
	Var0[2] = sParam3;
	Var0[3] = sParam4;
	Var0[4] = sParam5;
	return Var0;
}

void func_363()//Position - 0x11635
{
	Local_46[0 /*25*/] = { func_365(1203.1462f, -337.3543f, 67.9314f, 1245.1176f, -348.5059f, 68.2099f, 253.1908f, 0) };
	func_364(&(Local_46[0 /*25*/]), Local_185, 0, 15f, 5f, 270f, 3, 1192.0063f, -631.4703f, 61.6972f, 10f, 10f, 5f);
	Local_46[1 /*25*/] = { func_365(1215.084f, -339.3139f, 68.1323f, 964.9214f, -555.212f, 58.0211f, 39.645f, 0) };
	func_364(&(Local_46[1 /*25*/]), Local_185, 0, 15f, 10f, 270f, 3, 1103.2896f, -764.532f, 56.633f, 10f, 10f, 5f);
	Local_46[2 /*25*/] = { func_365(1179.533f, -361.3286f, 67.4559f, 929.8701f, -619.4534f, 56.4632f, 164.3631f, 0) };
	func_364(&(Local_46[2 /*25*/]), Local_185, 0, 15f, 10f, 270f, 3, 933.3745f, -615.9453f, 56.3041f, 10f, 10f, 5f);
	Local_46[3 /*25*/] = { func_365(1107.6744f, -364.0569f, 65.9581f, 1099.2655f, -775.0809f, 57.3525f, 178.2038f, 0) };
	func_364(&(Local_46[3 /*25*/]), Local_185, 0, 15f, 2f, 270f, 3, 1062.1489f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[4 /*25*/] = { func_365(1069.279f, -393.5795f, 66.0262f, 1065.3644f, -389.9561f, 66.1504f, 220.1611f, 0) };
	func_364(&(Local_46[4 /*25*/]), Local_185, 0, 5f, 30f, 128.1732f, 3, 1069.7177f, -393.9912f, 66.0261f, 10f, 10f, 5f);
	Local_46[5 /*25*/] = { func_365(1031.673f, -424.599f, 64.5439f, 1027.1793f, -420.6656f, 64.6268f, 178.2038f, joaat("p_binbag_01_s")) };
	func_364(&(Local_46[5 /*25*/]), 1028.2009f, -428.3677f, 64.3571f, 1, 15f, 2f, 128.3915f, 1, 1027.1793f, -420.6656f, 64.6268f, 10f, 10f, 5f);
	Local_46[6 /*25*/] = { func_365(942.1528f, -488.8956f, 59.3129f, 932.0198f, -489.3886f, 58.9212f, 202.5785f, joaat("p_binbag_01_s")) };
	func_364(&(Local_46[6 /*25*/]), 930.7186f, -494.9253f, 58.616f, 1, 15f, 2f, 119.6518f, 1, 952.9781f, -482.5082f, 60.0003f, 10f, 10f, 5f);
	Local_46[7 /*25*/] = { func_365(868.2734f, -529.5473f, 56.2071f, 865.0042f, -522.4746f, 56.3363f, 241.9711f, joaat("p_binbag_01_s")) };
	func_364(&(Local_46[7 /*25*/]), 865.2349f, -535.8759f, 56.1574f, 1, 15f, 2f, 162.7219f, 1, 1062.1489f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[8 /*25*/] = { func_365(874.8076f, -571.2073f, 56.2987f, 983.125f, -541.9902f, 58.5929f, 49.7653f, 0) };
	func_364(&(Local_46[8 /*25*/]), Local_185, 0, 15f, 2f, 270f, 3, 1062.1489f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[9 /*25*/] = { func_365(931.5218f, -614.2144f, 56.3119f, 928.6471f, -620.711f, 56.4611f, -108.06f, joaat("p_binbag_01_s")) };
	func_364(&(Local_46[9 /*25*/]), 940.4086f, -622.1787f, 56.3003f, 1, 15f, 2f, 228.1176f, 1, 918.6716f, -602.9258f, 56.3395f, 10f, 10f, 5f);
	Local_46[10 /*25*/] = { func_365(964.9758f, -645.9614f, 56.4465f, 927.1033f, -575.4162f, 56.5329f, 55.9317f, 0) };
	func_364(&(Local_46[10 /*25*/]), Local_185, 0, 15f, 2f, 270f, 3, 1062.1489f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[11 /*25*/] = { func_365(983.4438f, -683.1442f, 56.4087f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_364(&(Local_46[11 /*25*/]), Local_185, 0, 15f, 2f, 270f, 3, 1149.1356f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[12 /*25*/] = { func_365(1016.2606f, -731.546f, 56.555f, 1011.801f, -733.0652f, 56.7435f, 314.5626f, joaat("p_binbag_01_s")) };
	func_364(&(Local_46[12 /*25*/]), 1020.2507f, -736.815f, 56.6235f, 1, 15f, 2f, 220.7804f, 1, 1011.238f, -724.7085f, 56.5183f, 10f, 10f, 5f);
	Local_46[13 /*25*/] = { func_365(1164.1262f, -762.2866f, 56.6656f, 1099.3422f, -775.4273f, 57.3525f, 177.5729f, 0) };
	func_364(&(Local_46[13 /*25*/]), Local_185, 0, 15f, 2f, 270f, 3, 1149.1356f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[14 /*25*/] = { func_365(1199.3394f, -678.0995f, 59.9051f, 1205.4152f, -672.1282f, 60.1445f, 105.2374f, 0) };
	func_364(&(Local_46[14 /*25*/]), Local_185, 0, 15f, 2f, 12.1103f, 3, 1199.3394f, -678.0995f, 59.9051f, 10f, 10f, 5f);
	Local_46[15 /*25*/] = { func_365(1183.445f, -582.9476f, 63.0962f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_364(&(Local_46[15 /*25*/]), Local_185, 0, 15f, 2f, 270f, 3, 1149.1356f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[16 /*25*/] = { func_365(1192.4794f, -485.1086f, 64.7195f, 1264.3593f, -719.084f, 63.328f, 65.0519f, 0) };
	func_364(&(Local_46[16 /*25*/]), Local_185, 0, 15f, 2f, 270f, 3, 1149.1356f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[17 /*25*/] = { func_365(1212.6934f, -400.0532f, 67.0971f, 1284.1086f, -676.728f, 65.0225f, 69.9898f, 0) };
	func_364(&(Local_46[17 /*25*/]), Local_185, 0, 15f, 2f, 270f, 3, 1149.1356f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[18 /*25*/] = { func_365(1114.5735f, -232.3706f, 68.0949f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_364(&(Local_46[18 /*25*/]), Local_185, 0, 15f, 2f, 270f, 3, 1149.1356f, -981.231f, 45.0495f, 10f, 10f, 5f);
	iLocal_187 = 19;
}

void func_364(var uParam0, struct<3> Param1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, struct<3> Param7, struct<3> Param8)//Position - 0x11E1A
{
	uParam0->f_3 = { Param1 };
	uParam0->f_6 = fParam3;
	uParam0->f_7 = fParam4;
	uParam0->f_8 = fParam5;
	uParam0->f_9 = iParam2;
	uParam0->f_10 = iParam6;
	uParam0->f_11 = { Param7 };
	uParam0->f_14 = { Param8 };
}

struct<25> func_365(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x11E5E
{
	struct<25> Var0;
	Var0.f_9 = 1;
	Var0.f_10 = 3;
	Var0 = { Param0 };
	Var0.f_19 = { Param1 };
	Var0.f_22 = fParam2;
	Var0.f_23 = iParam3;
	return Var0;
}

void func_366()//Position - 0x11E98
{
	struct<3> Var0[6];
	Var0[0 /*3*/] = { 1251.3082f, -400.6231f, 68.0926f };
	Var0[1 /*3*/] = { 1183.9928f, -403.3443f, 66.8734f };
	Var0[2 /*3*/] = { 1161.5404f, -372.6073f, 66.6034f };
	Var0[3 /*3*/] = { 1167.6444f, -273.7987f, 67.9705f };
	Var0[4 /*3*/] = { 1252.3618f, -247.353f, 77.5631f };
	Var0[5 /*3*/] = { 1330.0615f, -341.0342f, 100.3476f };
	func_367(&Var0, 6);
}

void func_367(var uParam0, int iParam1)//Position - 0x11F30
{
	int iVar0;
	__LIB_11__.func_329(&uLocal_74);
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		__LIB_11__.func_328(&uLocal_74, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	__LIB_11__.func_327(&uLocal_74);
	__LIB_20__.func_743(&uLocal_126, &uLocal_74, 50f);
}

void func_373()//Position - 0x1223A
{
	Local_197 = { func_374(1200.6096f, -344.2721f, 68.0424f, 269.2015f, joaat("S_M_Y_Garbage")) };
	Local_198 = { func_374(1202.4204f, -341.6034f, 67.9378f, 273.1125f, joaat("S_M_Y_Garbage")) };
}

struct<14> func_374(struct<3> Param0, float fParam1, int iParam2)//Position - 0x12288
{
	struct<14> Var0;
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam1;
	Var0.f_5 = iParam2;
	return Var0;
}

void func_375()//Position - 0x122AB
{
	Local_199 = { __LIB_12__.func_56(1203.1462f, -337.3543f, 67.9314f, 189.7047f, joaat("trash")) };
}

void func_377()//Position - 0x122F7
{
	__LIB_12__.func_43(1);
	__LIB_0__.func_410(1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("S_M_Y_Garbage"), false);
	func_63();
	__LIB_11__.func_729();
	__LIB_32__.func_813();
	func_378(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_378(bool bParam0)//Position - 0x1233C
{
	struct<3> Var0;
	if (bParam0)
	{
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", true);
	func_38();
	func_385();
	__LIB_0__.func_371();
	func_383();
	__LIB_0__.func_371();
	__LIB_38__.func_176();
	if (bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, false))
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
		func_379();
	}
	HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
	__LIB_9__.func_981(&uLocal_56, 0, 0);
	if (CAM::DOES_CAM_EXIST(iLocal_184))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_184, false);
	}
}

void func_379()//Position - 0x12420
{
	func_3();
	__LIB_0__.func_106(&Local_199);
	__LIB_0__.func_106(&iLocal_201);
	__LIB_0__.func_106(&iLocal_200);
	__LIB_0__.func_124(&Local_197, 1, 0, 1);
	__LIB_0__.func_124(&Local_198, 1, 0, 1);
	__LIB_0__.func_106(&iLocal_202);
}

void func_383()//Position - 0x12495
{
	if (iLocal_194)
	{
		VEHICLE::REMOVE_VEHICLE_ASSET(joaat("trash"));
	}
}

void func_385()//Position - 0x124B4
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_199.f_5);
}

void func_389()//Position - 0x124F0
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
				if (!func_19(iVar0))
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

