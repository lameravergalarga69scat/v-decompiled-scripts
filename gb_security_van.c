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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115 = 0;
	float fLocal_116 = 0f;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	bool bLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	struct<20> Local_130[8];
	struct<3> Local_131[32];
	struct<5> Local_132 = { 0, 0, 1065353216, 1065353216, 1 } ;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = -1;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = -1;
	var uLocal_147 = -1;
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
	var uLocal_161 = 10;
	var uLocal_162 = 500;
	var uLocal_163 = 3;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 3;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 3;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	int* iLocal_175 = NULL;
	var uLocal_176 = -1;
	struct<4> Local_177 = { 0, 0, 0, 0 } ;
	var uLocal_178 = 0;
	var uLocal_179[1] = { 0 };
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	int iLocal_191 = 0;
	struct<5> Local_192[3];
	struct<23> Local_193[5];
	struct<8> Local_194[5];
	int iLocal_195[3] = { 0, 0, 0 };
	var uLocal_196[3] = { 0, 0, 0 };
	int* iLocal_197 = NULL;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	var uLocal_201[1] = { 0 };
	int iLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205[1] = { 0 };
	int iLocal_206 = 0;
	var uLocal_207 = 16;
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
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372[1] = { 0 };
	int iLocal_373[1] = { 0 };
	struct<38> Local_374 = { 0, 1, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 1, 0, 5, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1 } ;
	struct<6> Local_375[8];
	struct<21> Local_376 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_101 = 3f;
	fLocal_102 = 0f;
	fLocal_103 = 2f;
	fLocal_104 = 100f;
	iLocal_114 = -1;
	fLocal_116 = 0.5f;
	iLocal_198 = -1;
	iLocal_206 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (!func_6594(ScriptParam_376))
			{
				func_6534(0, 1);
				func_6469();
			}
		}
		else
		{
			func_6469();
		}
	}
	else
	{
		func_6534(0, 1);
		func_6469();
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_36__::func_76(1))
		{
			func_6534(0, 1);
			func_6469();
		}
		if (__LIB_0__::func_959())
		{
			func_6534(0, 1);
			func_6469();
		}
		OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(func_6457(), -1);
		func_6456();
		func_6452();
		func_6437();
		func_888(&uLocal_151, 1, 0, 1, 1, 6000);
		switch (func_887(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_886() == 1)
				{
					if (func_877())
					{
						func_876(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
					}
				}
				break;
			case 1:
				if (func_886() == 1)
				{
					func_176();
				}
				else if (func_886() == 3)
				{
					func_876(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			case 3:
				func_6469();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (__LIB_15__::func_374())
			{
				func_6534(0, 1);
				func_174(3);
			}
			switch (func_886())
			{
				case 0:
					if (func_29())
					{
						func_174(1);
					}
					break;
				case 1:
					func_1();
					break;
				case 3:
					func_6469();
					break;
				}
		}
	}
}

void func_1()//Position - 0x1ED
{
	switch (func_28())
	{
		case 0:
			func_27(1);
			STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_374.f_35), &(Local_374.f_36));
			break;
		case 1:
			if (func_26() == 0)
			{
				if (!__LIB_0__::func_864(&(Local_374.f_3)))
				{
					__LIB_0__::func_795(&(Local_374.f_3), 0, 0);
				}
				else
				{
					func_12();
					func_10();
					func_6();
					if (__LIB_0__::func_937(&(Local_374.f_3), func_5(), 0))
					{
						func_3(1);
					}
					if (func_2(21))
					{
						func_3(4);
					}
				}
			}
			else
			{
				func_27(2);
			}
			break;
		case 2:
			if (func_2(0))
			{
				func_27(3);
			}
			break;
		case 3:
			func_174(3);
			break;
	}
}

bool func_2(int iParam0)//Position - 0x2A3
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Local_374.f_1[iVar0], iVar1);
}

void func_3(int iParam0)//Position - 0x2C5
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_374.f_6 = iParam0;
}

int func_5()//Position - 0x33D
{
	return Global_262145.f_24677 /* Tunable: -891147461 */ * 60 * 1000;
}

void func_6()//Position - 0x351
{
	if (func_9())
	{
		if (!func_2(21))
		{
			func_8(21);
		}
	}
	else if (func_2(21))
	{
		func_7(21);
	}
}

void func_7(int iParam0)//Position - 0x382
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Local_374.f_1[iVar0]), iVar1);
}

void func_8(int iParam0)//Position - 0x3A7
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	MISC::SET_BIT(&(Local_374.f_1[iVar0]), iVar1);
}

int func_9()//Position - 0x3D7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_2((17 + iVar0)))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_10()//Position - 0x403
{
	if (func_11())
	{
		if (!func_2(20))
		{
			func_8(20);
		}
	}
	else if (func_2(20))
	{
		func_7(20);
	}
}

int func_11()//Position - 0x434
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_2((11 + iVar0)) && !func_2((17 + iVar0)))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_12()//Position - 0x46F
{
	bool bVar0;
	struct<3> Var1;
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (func_2((2 + bVar0)))
		{
			if (func_17(bVar0))
			{
				if (func_16(bVar0))
				{
					if (!ENTITY::IS_ENTITY_STATIC(func_15(bVar0)))
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(func_15(bVar0), false) - ENTITY::GET_ENTITY_COORDS(func_14(bVar0), false) };
						Var1 = { __LIB_0__::func_79(Var1) };
						Var1.f_0 = (Var1.f_0 * 2.5f);
						Var1.f_1 = (Var1.f_1 * 2.5f);
						Var1.f_2 = (Var1.f_2 * 2.5f);
						ENTITY::APPLY_FORCE_TO_ENTITY(func_15(bVar0), 1, Var1, 0f, 0f, 0f, 0, false, true, true, false, true);
					}
				}
			}
		}
		bVar0++;
	}
}

int func_14(bool bParam0)//Position - 0x558
{
	return NETWORK::NET_TO_ENT(Local_374.f_8[bParam0]);
}

int func_15(bool bParam0)//Position - 0x56D
{
	return NETWORK::NET_TO_OBJ(Local_374.f_24[bParam0]);
}

bool func_16(bool bParam0)//Position - 0x582
{
	return bParam0 != 0;
}

int func_17(bool bParam0)//Position - 0x58E
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	if (!func_2((8 + bParam0)))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(func_23(bParam0)))
		{
			func_22(&iVar0, &iVar1);
			if (__LIB_0__::func_799(iVar1))
			{
				if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
				{
					if (func_16(bParam0))
					{
						__LIB_0__::func_121(func_14(bParam0));
						Var3 = { ENTITY::GET_ENTITY_COORDS(func_14(bParam0), false) };
						fVar4 = ENTITY::GET_ENTITY_HEADING(func_14(bParam0));
						Var2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar4, 0f, -4f, 0.5f) };
					}
					else
					{
						Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_19(bParam0), 0f, -1f, 0f) };
					}
					Local_374.f_24[bParam0] = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(iVar0, Var2, false, iVar1));
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(func_23(bParam0), true);
					ENTITY::SET_ENTITY_LOD_DIST(func_15(bParam0), 1200);
					ENTITY::SET_ENTITY_HEALTH(func_15(bParam0), 50, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(func_15(bParam0), true);
					ENTITY::SET_ENTITY_PROOFS(func_15(bParam0), true, true, true, true, true, true, true, false);
					ENTITY::SET_PICKUP_COLLIDES_WITH_PROJECTILES(func_18(bParam0), 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_18(bParam0), true, 1);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(func_18(bParam0), true);
					OBJECT::ALLOW_PORTABLE_PICKUP_TO_MIGRATE_TO_NON_PARTICIPANTS(func_15(bParam0), true);
					OBJECT::SET_OBJECT_FORCE_VEHICLES_TO_AVOID(func_15(bParam0), true);
					ENTITY::SET_ENTITY_COLLISION(func_15(bParam0), true, false);
					OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(func_15(bParam0), true);
					PHYSICS::ACTIVATE_PHYSICS(func_15(bParam0));
					ENTITY::SET_ENTITY_DYNAMIC(func_15(bParam0), true);
					NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(func_18(bParam0), true);
					if (!func_16(bParam0))
					{
						ENTITY::SET_ENTITY_VISIBLE(func_15(bParam0), false, false);
					}
					func_8((8 + bParam0));
					return 1;
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

int func_18(bool bParam0)//Position - 0x71C
{
	return NETWORK::NET_TO_ENT(Local_374.f_24[bParam0]);
}

int func_19(bool bParam0)//Position - 0x731
{
	return NETWORK::NET_TO_OBJ(Local_374.f_16[bParam0]);
}

void func_22(var uParam0, var uParam1)//Position - 0x785
{
	*uParam0 = joaat("PICKUP_PORTABLE_CRATE_UNFIXED_INCAR_WITH_PASSENGERS");
	*uParam1 = func_6457();
}

int func_23(bool bParam0)//Position - 0x79C
{
	return Local_374.f_24[bParam0];
}

int func_26()//Position - 0x7FE
{
	return Local_374.f_6;
}

void func_27(int iParam0)//Position - 0x80B
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_374.f_5 = iParam0;
}

int func_28()//Position - 0x825
{
	return Local_374.f_5;
}

int func_29()//Position - 0x832
{
	if (!func_2(1))
	{
		Local_374.f_7 = PLAYER::PLAYER_ID();
		if (__LIB_7__::func_944() > -1)
		{
			Local_374.f_30 = __LIB_7__::func_944();
		}
		if (Local_374.f_30 == -1)
		{
			func_105();
		}
		if (Local_374.f_30 != -1)
		{
			STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_374.f_35), &(Local_374.f_36));
			func_8(1);
		}
	}
	if (func_2(1))
	{
		if (((func_75() && func_67()) && func_35()) && func_30())
		{
			return 1;
		}
	}
	return 0;
}

int func_30()//Position - 0x8B9
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	func_33(&Var0, &fVar1, &iVar2);
	if (__LIB_0__::func_86(Var0) || iVar2 == 0)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_374.f_28))
	{
		if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
		{
			if (__LIB_0__::func_799(iVar2))
			{
				if (__LIB_1__::func_672(&(Local_374.f_28), 26, iVar2, Var0, fVar1, 1, 1, 1))
				{
					iVar3 = NETWORK::NET_TO_PED(Local_374.f_28);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar3, Global_1837194);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iVar3, false, Global_1837194);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iVar3, false, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
					PED::SET_PED_CAN_BE_TARGETTED(iVar3, false);
					PED::SET_PED_CONFIG_FLAG(iVar3, 442, true);
					NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar3, true);
					PED::SET_PED_KEEP_TASK(iVar3, true);
					PED::SET_PED_CONFIG_FLAG(iVar3, 118, false);
					PED::SET_PED_CONFIG_FLAG(iVar3, 430, true);
					ENTITY::SET_ENTITY_INVINCIBLE(iVar3, true);
					AUDIO::STOP_PED_SPEAKING(iVar3, true);
					ENTITY::FREEZE_ENTITY_POSITION(iVar3, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_33(var uParam0, var uParam1, var uParam2)//Position - 0xA2B
{
	*uParam0 = { 0f, 0f, 0f };
	*uParam1 = 0f;
	*uParam2 = 0;
	switch (func_34())
	{
		case 0:
			*uParam2 = joaat("S_M_M_GenTransport");
			*uParam0 = { 157.344f, -75.392f, 66.973f };
			*uParam1 = 335.398f;
			break;
		case 1:
			*uParam2 = joaat("S_M_M_GenTransport");
			*uParam0 = { 71.778f, 20.424f, 68.253f };
			*uParam1 = 183.599f;
			break;
		case 2:
			*uParam2 = joaat("S_M_M_GenTransport");
			*uParam0 = { 77.6879f, 89.1202f, 77.6881f };
			*uParam1 = 70.2f;
			break;
		case 3:
			*uParam2 = joaat("S_M_M_GenTransport");
			*uParam0 = { -521.4656f, 93.1077f, 58.9204f };
			*uParam1 = 82.3989f;
			break;
		case 4:
			*uParam2 = joaat("S_M_M_GenTransport");
			*uParam0 = { 973.6502f, 186.1046f, 79.8304f };
			*uParam1 = 248.8f;
			break;
		case 5:
			*uParam2 = joaat("S_M_M_GenTransport");
			*uParam0 = { 157.9223f, -1509.417f, 28.1416f };
			*uParam1 = 157.3995f;
			break;
		case 6:
			*uParam2 = joaat("S_M_M_GenTransport");
			*uParam0 = { 214.6931f, 2802.1145f, 44.6552f };
			*uParam1 = 97.5995f;
			break;
		case 7:
			*uParam2 = joaat("S_M_M_GenTransport");
			*uParam0 = { 930.4678f, 2722.5183f, 39.5184f };
			*uParam1 = 156f;
			break;
		case 8:
			*uParam2 = joaat("S_M_M_GenTransport");
			*uParam0 = { 1624.0759f, 6427.476f, 26.0453f };
			*uParam1 = 179.8f;
			break;
		case 9:
			*uParam2 = joaat("S_M_M_GenTransport");
			*uParam0 = { 2680.1687f, 4324.0015f, 44.8562f };
			*uParam1 = 313.3987f;
			break;
	}
}

int func_34()//Position - 0xC03
{
	return Local_374.f_30;
}

int func_35()//Position - 0xC10
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	func_66(&Var0, &fVar1, &iVar2);
	if (__LIB_0__::func_86(Var0) || iVar2 == 0)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_374.f_29))
	{
		if (__LIB_0__::func_799(iVar2))
		{
			__LIB_14__::func_588(Var0, 30f, 0);
			MISC::CLEAR_AREA(Var0, 30f, false, false, false, true);
			if (__LIB_0__::func_957(&(Local_374.f_29), iVar2, Var0, fVar1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
			{
				iVar3 = NETWORK::NET_TO_VEH(Local_374.f_29);
				__LIB_1__::func_477(iVar3);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar3, true);
				VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iVar3, true);
				VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iVar3, false);
				VEHICLE::SET_VEHICLE_STRONG(iVar3, true);
				VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar3, true);
				VEHICLE::LOCK_DOORS_WHEN_NO_LONGER_NEEDED(iVar3);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar3, true);
				ENTITY::SET_PICK_UP_BY_CARGOBOB_DISABLED(iVar3, true);
				__LIB_21__::func_263(iVar3, 11);
				__LIB_15__::func_287(iVar3);
				NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_374.f_29, true);
				ENTITY::FREEZE_ENTITY_POSITION(iVar3, true);
				ENTITY::SET_ENTITY_INVINCIBLE(iVar3, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar3, true);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(iVar3, true);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iVar3, true, true, false);
				VEHICLE::SET_VEHICLE_LIGHTS(iVar3, 2);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_66(var uParam0, var uParam1, var uParam2)//Position - 0x6411
{
	*uParam0 = { 0f, 0f, 0f };
	*uParam1 = 0f;
	*uParam2 = 0;
	switch (func_34())
	{
		case 0:
			*uParam2 = joaat("boxville");
			*uParam0 = { 156.612f, -79.475f, 67.288f };
			*uParam1 = 158.2f;
			break;
		case 1:
			*uParam2 = joaat("boxville");
			*uParam0 = { 72.302f, 24.653f, 68.374f };
			*uParam1 = 341.199f;
			break;
		case 2:
			*uParam2 = joaat("boxville");
			*uParam0 = { 81.9524f, 87.617f, 77.6085f };
			*uParam1 = 250.5998f;
			break;
		case 3:
			*uParam2 = joaat("boxville");
			*uParam0 = { -519.9089f, 91.8159f, 58.8012f };
			*uParam1 = 292.7998f;
			break;
		case 4:
			*uParam2 = joaat("boxville");
			*uParam0 = { 969.6149f, 184.5884f, 79.8304f };
			*uParam1 = 81f;
			break;
		case 5:
			*uParam2 = joaat("boxville");
			*uParam0 = { 162.2597f, -1508.6971f, 28.1416f };
			*uParam1 = 315.3999f;
			break;
		case 6:
			*uParam2 = joaat("boxville");
			*uParam0 = { 217.1226f, 2806.0476f, 44.6552f };
			*uParam1 = 292.9999f;
			break;
		case 7:
			*uParam2 = joaat("boxville");
			*uParam0 = { 928.5041f, 2726.1567f, 39.5205f };
			*uParam1 = 357.2f;
			break;
		case 8:
			*uParam2 = joaat("boxville");
			*uParam0 = { 1627.4988f, 6427.1846f, 26.2553f };
			*uParam1 = 69.9999f;
			break;
		case 9:
			*uParam2 = joaat("boxville");
			*uParam0 = { 2676.9973f, 4320.9233f, 44.8517f };
			*uParam1 = 133.5995f;
			break;
	}
}

int func_67()//Position - 0x65E9
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	while (bVar0 < 5)
	{
		if (__LIB_0__::func_86(Local_193[bVar0 /*23*/].f_1) || Local_193[bVar0 /*23*/] == 0)
		{
			return 0;
		}
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_74(bVar0)))
		{
			if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
			{
				if (__LIB_0__::func_799(Local_193[bVar0 /*23*/]))
				{
					if (func_73(bVar0) != -1)
					{
						if (__LIB_0__::func_930(&(Local_374.f_18[bVar0]), func_72(func_73(bVar0)), 26, Local_193[bVar0 /*23*/], -1, 1, 1, 1))
						{
							func_68(bVar0);
						}
					}
					else if (__LIB_1__::func_672(&(Local_374.f_18[bVar0]), 26, Local_193[bVar0 /*23*/], Local_193[bVar0 /*23*/].f_1, Local_193[bVar0 /*23*/].f_4, 1, 1, 1))
					{
						func_68(bVar0);
					}
				}
			}
		}
		else
		{
			iVar1++;
		}
		bVar0++;
	}
	if (iVar1 == 5)
	{
		return 1;
	}
	return 0;
}

void func_68(bool bParam0)//Position - 0x66D6
{
	int iVar0;
	iVar0 = func_70(bParam0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	PED::SET_PED_DIES_WHEN_INJURED(iVar0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Global_1837200);
	PED::SET_PED_KEEP_TASK(iVar0, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 42, true);
	PED::SET_PED_HIGHLY_PERCEPTIVE(iVar0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 43, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 44, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 72, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 40, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iVar0, 1);
	WEAPON::GIVE_WEAPON_TO_PED(iVar0, Local_193[bParam0 /*23*/].f_5, -1, false, true);
	func_69(bParam0);
}

void func_69(bool bParam0)//Position - 0x6758
{
	switch (bParam0)
	{
		case 0:
		case 1:
		case 2:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_70(bParam0), Local_193[bParam0 /*23*/].f_1, 10f, false, false);
			break;
	}
}

int func_70(bool bParam0)//Position - 0x6798
{
	return NETWORK::NET_TO_PED(Local_374.f_18[bParam0]);
}

int func_72(bool bParam0)//Position - 0x6835
{
	return Local_374.f_8[bParam0];
}

int func_73(bool bParam0)//Position - 0x6846
{
	switch (bParam0)
	{
		case 3:
			return 1;
		case 4:
			return 2;
		default:
	}
	return -1;
}

int func_74(bool bParam0)//Position - 0x686A
{
	return Local_374.f_18[bParam0];
}

int func_75()//Position - 0x687B
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (__LIB_0__::func_86(Local_192[bVar0 /*5*/].f_1) || Local_192[bVar0 /*5*/] == 0)
		{
			return 0;
		}
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_72(bVar0)))
		{
			if (__LIB_0__::func_799(Local_192[bVar0 /*5*/]))
			{
				if (__LIB_9__::func_771(Local_192[bVar0 /*5*/].f_1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (__LIB_0__::func_957(&(Local_374.f_8[bVar0]), Local_192[bVar0 /*5*/], Local_192[bVar0 /*5*/].f_1, Local_192[bVar0 /*5*/].f_4, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
					{
						iVar2 = func_88(bVar0);
						__LIB_1__::func_477(iVar2);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar2, true);
						VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iVar2, true);
						VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iVar2, 0.5f);
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iVar2, false);
						VEHICLE::SET_VEHICLE_STRONG(iVar2, true);
						VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar2, true);
						VEHICLE::LOCK_DOORS_WHEN_NO_LONGER_NEEDED(iVar2);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar2, true);
						ENTITY::SET_PICK_UP_BY_CARGOBOB_DISABLED(iVar2, true);
						MISC::CLEAR_BIT(&(Local_374.f_32), bVar0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_192[bVar0 /*5*/]);
					}
				}
				else if (__LIB_9__::func_771(Local_192[bVar0 /*5*/].f_1, 0f, 0f, 0f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (!BitTest(Local_374.f_32, bVar0))
					{
						MISC::CLEAR_AREA(Local_192[bVar0 /*5*/].f_1, 10f, true, false, false, true);
						MISC::SET_BIT(&(Local_374.f_32), bVar0);
					}
				}
			}
		}
		else if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_87(bVar0)))
		{
			if (__LIB_0__::func_939(func_72(bVar0)))
			{
				if (__LIB_0__::func_799(func_84()))
				{
					if (__LIB_1__::func_671(&(Local_374.f_12[bVar0]), func_84(), ENTITY::GET_ENTITY_COORDS(func_88(bVar0), true), 1, 1, 0, 1, 0, 0, 0))
					{
						ENTITY::SET_ENTITY_MAX_HEALTH(func_82(bVar0), __LIB_12__::func_299());
						ENTITY::SET_ENTITY_HEALTH(func_82(bVar0), __LIB_12__::func_299(), 0);
						ENTITY::SET_ENTITY_VISIBLE(func_82(bVar0), false, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(func_82(bVar0), func_88(bVar0), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_88(bVar0), "chassis_dummy"), func_80(), func_79(), false, false, false, false, 2, true, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_84());
					}
				}
			}
		}
		else if (!func_16(bVar0) && !NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_78(bVar0)))
		{
			if (__LIB_0__::func_799(func_6457()))
			{
				__LIB_0__::func_121(func_14(bVar0));
				if (__LIB_1__::func_671(&(Local_374.f_16[bVar0]), func_6457(), ENTITY::GET_ENTITY_COORDS(func_88(bVar0), true), 1, 1, 0, 1, 0, 0, 0))
				{
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(func_19(bVar0), false, false);
					ENTITY::SET_ENTITY_INVINCIBLE(func_19(bVar0), true);
					ENTITY::SET_ENTITY_VISIBLE(func_19(bVar0), true, false);
					if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(func_19(bVar0)) && PHYSICS::GET_IS_ENTITY_A_FRAG(func_19(bVar0)))
					{
						PHYSICS::SET_DISABLE_BREAKING(func_19(bVar0), true);
						PHYSICS::SET_DISABLE_FRAG_DAMAGE(func_19(bVar0), true);
					}
					ENTITY::SET_ENTITY_PROOFS(func_19(bVar0), true, true, true, true, true, true, true, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(func_19(bVar0), func_88(bVar0), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_88(bVar0), "chassis_dummy"), func_77(), __LIB_3__::func_554(), false, false, false, false, 2, true, 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_6457());
				}
			}
		}
		else
		{
			iVar1++;
		}
		bVar0++;
	}
	if (iVar1 == 3)
	{
		return 1;
	}
	return 0;
}

Vector3 func_77()//Position - 0x6BC3
{
	return 0f, -3.05f, 0.7f;
}

int func_78(bool bParam0)//Position - 0x6BD6
{
	return Local_374.f_16[bParam0];
}

Vector3 func_79()//Position - 0x6BE7
{
	return 0f, 90f, 90f;
}

Vector3 func_80()//Position - 0x6BFA
{
	return 0f, -3.55f, 1.05f;
}

int func_82(bool bParam0)//Position - 0x6C17
{
	return NETWORK::NET_TO_ENT(Local_374.f_12[bParam0]);
}

int func_84()//Position - 0x6CD1
{
	return joaat("v_serv_abox_02");
}

var func_87(bool bParam0)//Position - 0x6D37
{
	return Local_374.f_12[bParam0];
}

int func_88(bool bParam0)//Position - 0x6D48
{
	return NETWORK::NET_TO_VEH(Local_374.f_8[bParam0]);
}

void func_105()//Position - 0x7384
{
	int iVar0[10];
	struct<3> Var1;
	int iVar2;
	int iVar3;
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iVar2 = 0;
	if (__LIB_0__::func_797() != __LIB_0__::getMinusOneOrNull())
	{
		Var1 = { func_113(__LIB_0__::func_797()) };
	}
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 10)
	{
		if (!__LIB_19__::func_318(iVar3))
		{
			if (SYSTEM::VDIST2(Var1, func_111(iVar3)) < 36000000f)
			{
				iVar0[iVar2] = iVar3;
				iVar2++;
			}
		}
		iVar3++;
	}
	if (iLocal_199 > 99)
	{
		Local_374.f_30 = iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, 10)];
	}
	else
	{
		Local_374.f_30 = iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2)];
	}
	func_109();
	func_107();
	if (func_106())
	{
	}
	else
	{
		Local_374.f_30 = -1;
	}
}

int func_106()//Position - 0x7447
{
	int iVar0;
	iLocal_199++;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!__LIB_9__::func_771(Local_192[iVar0 /*5*/].f_1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!__LIB_9__::func_771(Local_193[iVar0 /*23*/].f_1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_107()//Position - 0x74F2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_108(iVar0, &(Local_193[iVar0 /*23*/].f_1), &(Local_193[iVar0 /*23*/].f_4), &(Local_193[iVar0 /*23*/]), &(Local_193[iVar0 /*23*/].f_5), &(Local_193[iVar0 /*23*/].f_6), &(Local_193[iVar0 /*23*/].f_22));
		iVar0++;
	}
}

void func_108(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, char* sParam5, var uParam6)//Position - 0x7546
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	*uParam3 = 0;
	*uParam4 = 0;
	switch (func_34())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { -1133.214f, -2687.254f, 12.947f };
					*uParam2 = 281.599f;
					*uParam4 = joaat("WEAPON_PUMPSHOTGUN");
					StringCopy(sParam5, "WORLD_HUMAN_GUARD_STAND", 64);
					*uParam6 = 0;
					break;
				case 1:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { -1136.925f, -2692.705f, 12.951f };
					*uParam2 = 223.799f;
					*uParam4 = joaat("WEAPON_SMG");
					StringCopy(sParam5, "WORLD_HUMAN_DRINKING", 64);
					*uParam6 = 0;
					break;
				case 2:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { -1136.105f, -2693.524f, 12.954f };
					*uParam2 = 36.798f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "WORLD_HUMAN_SMOKING", 64);
					*uParam6 = 0;
					break;
				case 3:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 1325.427f, -2253.697f, 53.513f };
					*uParam2 = 223.799f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "", 64);
					break;
				case 4:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { -1498.741f, -139.556f, 54.1f };
					*uParam2 = 223.799f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "", 64);
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 921.877f, 40.946f, 79.909f };
					*uParam2 = 123.4f;
					*uParam4 = joaat("WEAPON_PUMPSHOTGUN");
					StringCopy(sParam5, "WORLD_HUMAN_GUARD_STAND", 64);
					*uParam6 = 0;
					break;
				case 1:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 927.755f, 48.735f, 79.905f };
					*uParam2 = 120.4f;
					*uParam4 = joaat("WEAPON_SMG");
					StringCopy(sParam5, "WORLD_HUMAN_DRINKING", 64);
					*uParam6 = 0;
					break;
				case 2:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 926.622f, 48.327f, 79.908f };
					*uParam2 = 285.399f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "WORLD_HUMAN_SMOKING", 64);
					*uParam6 = 0;
					break;
				case 3:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { -1054.019f, -1624.588f, 6.146f };
					*uParam2 = 285.399f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "", 64);
					break;
				case 4:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { -760.951f, 1622.688f, 209.924f };
					*uParam2 = 285.399f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "", 64);
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { -1650.104f, -1003.766f, 12.017f };
					*uParam2 = 246.397f;
					*uParam4 = joaat("WEAPON_PUMPSHOTGUN");
					StringCopy(sParam5, "WORLD_HUMAN_GUARD_STAND", 64);
					*uParam6 = 0;
					break;
				case 1:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { -1648.522f, -995.584f, 12.017f };
					*uParam2 = 343.197f;
					*uParam4 = joaat("WEAPON_SMG");
					StringCopy(sParam5, "WORLD_HUMAN_DRINKING", 64);
					*uParam6 = 0;
					break;
				case 2:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { -1648.246f, -994.463f, 12.017f };
					*uParam2 = 163.796f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "WORLD_HUMAN_SMOKING", 64);
					*uParam6 = 0;
					break;
				case 3:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 2141.138f, -555.681f, 96.717f };
					*uParam2 = 163.796f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "", 64);
					break;
				case 4:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 187.872f, -2556.843f, 7.797f };
					*uParam2 = 163.796f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "", 64);
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 1168.22f, -1345.092f, 33.918f };
					*uParam2 = 336.599f;
					*uParam4 = joaat("WEAPON_PUMPSHOTGUN");
					StringCopy(sParam5, "WORLD_HUMAN_GUARD_STAND", 64);
					*uParam6 = 0;
					break;
				case 1:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 1168.639f, -1344.036f, 33.921f };
					*uParam2 = 155.998f;
					*uParam4 = joaat("WEAPON_SMG");
					StringCopy(sParam5, "WORLD_HUMAN_DRINKING", 64);
					*uParam6 = 0;
					break;
				case 2:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 1168.893f, -1334.902f, 33.893f };
					*uParam2 = 307.198f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "WORLD_HUMAN_SMOKING", 64);
					*uParam6 = 0;
					break;
				case 3:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 145.883f, 1621.708f, 230.903f };
					*uParam2 = 307.198f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "", 64);
					break;
				case 4:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { -867.356f, -2645.1f, 20.385f };
					*uParam2 = 307.198f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "", 64);
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 154.843f, -1032.338f, 28.337f };
					*uParam2 = 198.199f;
					*uParam4 = joaat("WEAPON_PUMPSHOTGUN");
					StringCopy(sParam5, "WORLD_HUMAN_GUARD_STAND", 64);
					*uParam6 = 0;
					break;
				case 1:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 149.226f, -1032.031f, 28.343f };
					*uParam2 = -0.601f;
					*uParam4 = joaat("WEAPON_SMG");
					StringCopy(sParam5, "WORLD_HUMAN_DRINKING", 64);
					*uParam6 = 0;
					break;
				case 2:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 149.132f, -1030.767f, 28.344f };
					*uParam2 = 190.198f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "WORLD_HUMAN_SMOKING", 64);
					*uParam6 = 0;
					break;
				case 3:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { -1484.025f, 1598.901f, 110.624f };
					*uParam2 = -0.201f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "", 64);
					break;
				case 4:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 741.997f, -2970.19f, 7.531f };
					*uParam2 = -0.201f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "", 64);
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { -174.876f, -171.697f, 42.621f };
					*uParam2 = 211.2f;
					*uParam4 = joaat("WEAPON_PUMPSHOTGUN");
					StringCopy(sParam5, "WORLD_HUMAN_GUARD_STAND", 64);
					*uParam6 = 0;
					break;
				case 1:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { -174.114f, -172.773f, 42.62f };
					*uParam2 = 32.999f;
					*uParam4 = joaat("WEAPON_SMG");
					StringCopy(sParam5, "WORLD_HUMAN_DRINKING", 64);
					*uParam6 = 0;
					break;
				case 2:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { -168.747f, -163.713f, 42.622f };
					*uParam2 = 320.799f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "WORLD_HUMAN_SMOKING", 64);
					*uParam6 = 0;
					break;
				case 3:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 1881.738f, -993.423f, 80.897f };
					*uParam2 = 135.999f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "", 64);
					break;
				case 4:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { -3017.943f, 160.898f, 17.311f };
					*uParam2 = 204.999f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "", 64);
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 1855.457f, 3710.173f, 32.254f };
					*uParam2 = 9.399f;
					*uParam4 = joaat("WEAPON_PUMPSHOTGUN");
					StringCopy(sParam5, "WORLD_HUMAN_GUARD_STAND", 64);
					*uParam6 = 0;
					break;
				case 1:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 1863.628f, 3705.41f, 32.358f };
					*uParam2 = 147.999f;
					*uParam4 = joaat("WEAPON_SMG");
					StringCopy(sParam5, "WORLD_HUMAN_DRINKING", 64);
					*uParam6 = 0;
					break;
				case 2:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 1862.855f, 3704.337f, 32.433f };
					*uParam2 = 311.198f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "WORLD_HUMAN_SMOKING", 64);
					*uParam6 = 0;
					break;
				case 3:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { -1282.765f, 2505.693f, 22.365f };
					*uParam2 = 39.798f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "", 64);
					break;
				case 4:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 1580.603f, 1299.778f, 93.257f };
					*uParam2 = 39.798f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "", 64);
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 2649.663f, 3463.64f, 54.523f };
					*uParam2 = 103.199f;
					*uParam4 = joaat("WEAPON_PUMPSHOTGUN");
					StringCopy(sParam5, "WORLD_HUMAN_GUARD_STAND", 64);
					*uParam6 = 0;
					break;
				case 1:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 2661.181f, 3460.909f, 54.59f };
					*uParam2 = 171.199f;
					*uParam4 = joaat("WEAPON_SMG");
					StringCopy(sParam5, "WORLD_HUMAN_DRINKING", 64);
					*uParam6 = 0;
					break;
				case 2:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 2660.993f, 3459.66f, 54.647f };
					*uParam2 = 355.799f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "WORLD_HUMAN_SMOKING", 64);
					*uParam6 = 0;
					break;
				case 3:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { -12.535f, 2792.729f, 59.256f };
					*uParam2 = 355.799f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "", 64);
					break;
				case 4:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 2502.525f, 1351.325f, 45.072f };
					*uParam2 = 355.799f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "", 64);
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { -423.9f, 6132.873f, 30.478f };
					*uParam2 = 253.799f;
					*uParam4 = joaat("WEAPON_PUMPSHOTGUN");
					StringCopy(sParam5, "WORLD_HUMAN_GUARD_STAND", 64);
					*uParam6 = 0;
					break;
				case 1:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { -422.663f, 6132.544f, 30.478f };
					*uParam2 = 74.799f;
					*uParam4 = joaat("WEAPON_SMG");
					StringCopy(sParam5, "WORLD_HUMAN_DRINKING", 64);
					*uParam6 = 0;
					break;
				case 2:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { -431.441f, 6135.79f, 30.478f };
					*uParam2 = 203.598f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "WORLD_HUMAN_SMOKING", 64);
					*uParam6 = 0;
					break;
				case 3:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { -1792.698f, 4726.032f, 58.882f };
					*uParam2 = 203.598f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "", 64);
					break;
				case 4:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 1738.942f, 4989.403f, 49.726f };
					*uParam2 = 203.598f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "", 64);
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 2884.396f, 4427.475f, 47.53f };
					*uParam2 = 147f;
					*uParam4 = joaat("WEAPON_PUMPSHOTGUN");
					StringCopy(sParam5, "WORLD_HUMAN_GUARD_STAND", 64);
					*uParam6 = 0;
					break;
				case 1:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 2883.622f, 4426.264f, 47.607f };
					*uParam2 = 321.2f;
					*uParam4 = joaat("WEAPON_SMG");
					StringCopy(sParam5, "WORLD_HUMAN_DRINKING", 64);
					*uParam6 = 0;
					break;
				case 2:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 2881.975f, 4417.67f, 48.627f };
					*uParam2 = 230.6f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "WORLD_HUMAN_SMOKING", 64);
					*uParam6 = 0;
					break;
				case 3:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { -561.737f, 5704.38f, 39.104f };
					*uParam2 = 17.399f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "", 64);
					break;
				case 4:
					*uParam3 = joaat("S_M_M_Armoured_01");
					*uParam1 = { 849.985f, 4336.817f, 53.441f };
					*uParam2 = 17.399f;
					*uParam4 = joaat("WEAPON_PISTOL");
					StringCopy(sParam5, "", 64);
					break;
			}
			break;
	}
}

void func_109()//Position - 0x821E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_110(iVar0, &(Local_192[iVar0 /*5*/].f_1), &(Local_192[iVar0 /*5*/].f_4), &(Local_192[iVar0 /*5*/]));
		iVar0++;
	}
}

void func_110(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x8257
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	*uParam3 = 0;
	switch (func_34())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam3 = joaat("stockade");
					*uParam1 = { -1137.247f, -2690.035f, 12.945f };
					*uParam2 = 104.6f;
					break;
				case 1:
					*uParam3 = joaat("stockade");
					*uParam1 = { 1324.553f, -2254.287f, 50.809f };
					*uParam2 = 13.4f;
					break;
				case 2:
					*uParam3 = joaat("stockade");
					*uParam1 = { -1499.618f, -139.919f, 51.417f };
					*uParam2 = 309.199f;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam3 = joaat("stockade");
					*uParam1 = { 922.279f, 45.763f, 79.765f };
					*uParam2 = 327.4f;
					break;
				case 1:
					*uParam3 = joaat("stockade");
					*uParam1 = { -1053.602f, -1625.256f, 3.419f };
					*uParam2 = 37.8f;
					break;
				case 2:
					*uParam3 = joaat("stockade");
					*uParam1 = { -761.551f, 1623.188f, 207.077f };
					*uParam2 = 193.6f;
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					*uParam3 = joaat("stockade");
					*uParam1 = { -1649.884f, -1000.679f, 12.017f };
					*uParam2 = 140.398f;
					break;
				case 1:
					*uParam3 = joaat("stockade");
					*uParam1 = { 2142.368f, -555.428f, 93.984f };
					*uParam2 = 129.6f;
					break;
				case 2:
					*uParam3 = joaat("stockade");
					*uParam1 = { 188.111f, -2556.884f, 4.909f };
					*uParam2 = 298.549f;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					*uParam3 = joaat("stockade");
					*uParam1 = { 1171.107f, -1339.489f, 33.786f };
					*uParam2 = 355.8f;
					break;
				case 1:
					*uParam3 = joaat("stockade");
					*uParam1 = { 145.511f, 1623.014f, 228.162f };
					*uParam2 = 180.2f;
					break;
				case 2:
					*uParam3 = joaat("stockade");
					*uParam1 = { -867.331f, -2645.445f, 17.65f };
					*uParam2 = 330.6f;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					*uParam3 = joaat("stockade");
					*uParam1 = { 153.499f, -1029.506f, 28.231f };
					*uParam2 = 251f;
					break;
				case 1:
					*uParam3 = joaat("stockade");
					*uParam1 = { -1484.636f, 1599.812f, 107.819f };
					*uParam2 = 196.799f;
					break;
				case 2:
					*uParam3 = joaat("stockade");
					*uParam1 = { 742.259f, -2970.555f, 4.801f };
					*uParam2 = -0.201f;
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam3 = joaat("stockade");
					*uParam1 = { -171.309f, -167.413f, 42.622f };
					*uParam2 = 339f;
					break;
				case 1:
					*uParam3 = joaat("stockade");
					*uParam1 = { 1881.811f, -992.804f, 78.173f };
					*uParam2 = 135.999f;
					break;
				case 2:
					*uParam3 = joaat("stockade");
					*uParam1 = { -3018.303f, 161.219f, 14.588f };
					*uParam2 = 204.999f;
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam3 = joaat("stockade");
					*uParam1 = { 1859.256f, 3707.005f, 32.401f };
					*uParam2 = 209.6f;
					break;
				case 1:
					*uParam3 = joaat("stockade");
					*uParam1 = { -1283.786f, 2505.308f, 19.697f };
					*uParam2 = 316.798f;
					break;
				case 2:
					*uParam3 = joaat("stockade");
					*uParam1 = { 1581.033f, 1299.698f, 90.556f };
					*uParam2 = 39.798f;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam3 = joaat("stockade");
					*uParam1 = { 2653.71f, 3462.818f, 54.622f };
					*uParam2 = 67f;
					break;
				case 1:
					*uParam3 = joaat("stockade");
					*uParam1 = { -13.04f, 2792.828f, 56.508f };
					*uParam2 = 240.6f;
					break;
				case 2:
					*uParam3 = joaat("stockade");
					*uParam1 = { 2501.88f, 1350.816f, 42.406f };
					*uParam2 = 332.399f;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam3 = joaat("stockade");
					*uParam1 = { -428.7f, 6135.953f, 30.478f };
					*uParam2 = 45f;
					break;
				case 1:
					*uParam3 = joaat("stockade");
					*uParam1 = { -1792.602f, 4725.841f, 56.002f };
					*uParam2 = 314f;
					break;
				case 2:
					*uParam3 = joaat("stockade");
					*uParam1 = { 1739.061f, 4989.165f, 46.972f };
					*uParam2 = 313.599f;
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam3 = joaat("stockade");
					*uParam1 = { 2884.544f, 4420.506f, 48.155f };
					*uParam2 = 205f;
					break;
				case 1:
					*uParam3 = joaat("stockade");
					*uParam1 = { -561.596f, 5703.989f, 36.379f };
					*uParam2 = 335.399f;
					break;
				case 2:
					*uParam3 = joaat("stockade");
					*uParam1 = { 850.121f, 4336.438f, 50.738f };
					*uParam2 = 17.399f;
					break;
			}
			break;
	}
}

Vector3 func_111(int iParam0)//Position - 0x883F
{
	switch (iParam0)
	{
		case 0:
			return 158.761f, -67.64f, 67.026f;
		case 1:
			return 74.269f, 15.272f, 68.045f;
		case 2:
			return 72.2826f, 91.169f, 77.8287f;
		case 3:
			return -529.2375f, 92.8118f, 59.3406f;
		case 4:
			return 980.0435f, 182.7911f, 79.8307f;
		case 5:
			return 156.1833f, -1514.2206f, 28.1416f;
		case 6:
			return 207.2069f, 2801.3682f, 44.6552f;
		case 7:
			return 928.3527f, 2716.11f, 39.5256f;
		case 8:
			return 1626.097f, 6422.079f, 26.3924f;
		case 9:
			return 2685.8867f, 4329.6343f, 44.9083f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_113(int iParam0)//Position - 0x895B
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
		func_166(__LIB_1__::func_694(iParam0), &iVar0);
		if (iVar0 > 0)
		{
			Var1 = { __LIB_2__::func_683(__LIB_2__::func_684(iVar0)) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (__LIB_4__::func_902(iParam0))
	{
		Var1 = { __LIB_9__::func_461(iParam0) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	if (__LIB_5__::func_241(iParam0))
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
	return __LIB_1__::func_694(iParam0);
}

void func_166(struct<3> Param0, var uParam1)//Position - 0xA350
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_167(Param0, iVar0, 0))
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
		if (func_167(Param0, iVar0, 0))
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
		if (func_167(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_167(Param0, iVar0, 0))
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
	if (func_167(Param0, iVar0, 0))
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

int func_167(struct<3> Param0, int iParam1, float fParam2)//Position - 0xA494
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
			if (func_167(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_167(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_167(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_167(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_167(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_167(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_167(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_167(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_167(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_167(Param0, 8, fParam2))
		{
			return 1;
		}
		if (func_167(Param0, 17, fParam2))
		{
			return 1;
		}
	}
	return 0;
}

void func_174(int iParam0)//Position - 0xB6B2
{
	Local_374.f_0 = iParam0;
}

void func_176()//Position - 0xB6E2
{
	switch (func_28())
	{
		case 0:
			break;
		case 1:
			if (!__LIB_36__::func_172(2))
			{
				__LIB_35__::func_570(239, 1, -1, 0);
				__LIB_22__::func_272();
				func_109();
				func_107();
				__LIB_36__::func_171(2);
			}
			else if (!__LIB_36__::func_172(3))
			{
				if (__LIB_0__::func_937(&(Local_374.f_3), 10000, 0))
				{
					__LIB_15__::func_577();
					__LIB_36__::func_171(3);
				}
			}
			if (!__LIB_3__::func_290() && !__LIB_0__::func_114())
			{
				if (func_26() == 0)
				{
					if (Global_2703735.f_4.f_10)
					{
						if (!__LIB_36__::func_172(4))
						{
							__LIB_36__::func_113(-1, 0, 0, -1, 0, 0);
							__LIB_36__::func_171(4);
						}
						func_660();
						func_568();
						switch (func_567(NETWORK::PARTICIPANT_ID_TO_INT()))
						{
							case 0:
								func_566(1);
								break;
							case 1:
								func_544(0);
								if (!__LIB_4__::func_946(PLAYER::PLAYER_ID(), 0))
								{
									func_538(0);
								}
								break;
						}
						if (iLocal_185 > -1)
						{
							if (iLocal_185 == NETWORK::PARTICIPANT_ID_TO_INT())
							{
							}
						}
					}
				}
			}
			else
			{
				__LIB_3__::func_0();
			}
			break;
		case 2:
			__LIB_3__::func_0();
			func_180();
			func_178();
			func_177();
			break;
		case 3:
			break;
	}
}

void func_177()//Position - 0xB807
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
	}
}

void func_178()//Position - 0xB82D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_0__::func_714(&(iLocal_195[iVar0]));
		__LIB_0__::func_714(&(uLocal_196[iVar0]));
		iVar0++;
	}
	__LIB_0__::func_714(&iLocal_197);
}

void func_180()//Position - 0xB884
{
	bool bVar0;
	int iVar1;
	if (!__LIB_36__::func_172(1))
	{
		if (func_26() != 0)
		{
			if (Global_2703735.f_4.f_10)
			{
				if ((!__LIB_3__::func_290() && !__LIB_0__::func_114()) && !__LIB_36__::func_101(239))
				{
					if (__LIB_34__::func_940())
					{
						switch (func_26())
						{
							case 2:
								HUD::CLEAR_HELP(true);
								func_544(4);
								break;
							case 3:
								HUD::CLEAR_HELP(true);
								func_544(3);
								break;
							case 1:
								HUD::CLEAR_HELP(true);
								func_544(2);
								break;
							case 4:
								HUD::CLEAR_HELP(true);
								func_544(1);
								bVar0 = true;
								break;
							}
						}
					}
			}
			iVar1 = PLAYER::PLAYER_ID();
			__LIB_30__::func_552(1, iVar1);
			if (bVar0)
			{
				Local_132.f_4 = __LIB_13__::func_61() + 1;
				if (func_521())
				{
					__LIB_35__::func_509();
				}
			}
			if (func_26() != 3 && func_26() != 2)
			{
				__LIB_31__::func_800(239, -1, bVar0, 0, 0, -1);
			}
			__LIB_36__::func_45();
			__LIB_36__::func_141(239, bVar0, &Local_132, 0);
			func_6534(bVar0, 0);
			__LIB_36__::func_171(1);
			func_181(0);
		}
	}
}

void func_181(int iParam0)//Position - 0xB98E
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Local_375[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1[iVar0]), iVar1);
}

bool func_521()//Position - 0x3C815
{
	return func_522(PLAYER::PLAYER_ID());
}

bool func_522(int iParam0)//Position - 0x3C825
{
	return func_523() == iParam0;
}

int func_523()//Position - 0x3C834
{
	return Local_374.f_7;
}

void func_538(int iParam0)//Position - 0x3CD6D
{
	if (__LIB_30__::func_421())
	{
		if (!func_541(iParam0))
		{
			switch (iParam0)
			{
				case 0:
					__LIB_0__::func_151("BB_SV_HMT_00" /* GXT: Press ~INPUT_CONTEXT~ to activate the radar ping and locate the security vans. */, 15000);
					break;
				case 1:
					__LIB_0__::func_151("BB_SV_HMT_01" /* GXT: To retrieve the antiques from the security van ~HUD_COLOUR_RED~~BLIP_SECURITY_VAN~~s~ blow the back doors open with sticky bombs or shoot the back lock open. */, -1);
					break;
				case 2:
					__LIB_0__::func_151("BB_SV_HMT_02" /* GXT: The radar ping temporarily reveals the location of all security vans ~HUD_COLOUR_RED~~BLIP_SECURITY_VAN~~s~ on the map. There is a recharge time before this ability can be used again. */, -1);
					break;
			}
			func_539(iParam0);
		}
	}
}

void func_539(int iParam0)//Position - 0x3CDCB
{
	MISC::SET_BIT(&uLocal_180, iParam0);
}

bool func_541(var uParam0)//Position - 0x3CDF3
{
	return BitTest(uLocal_180, uParam0);
}

void func_544(int iParam0)//Position - 0x3CE59
{
	if (__LIB_34__::func_940())
	{
		if (!func_565(iParam0))
		{
			switch (iParam0)
			{
				case 0:
					HUD::CLEAR_HELP(true);
					__LIB_23__::func_726(86, "BB_SV_BMT_00" /* GXT: Client Challenge */, "BB_SV_BMS_00" /* GXT: Steal the antiques and deliver them to the drop-off */, 1, -1, 2, 1, 0);
					func_545(0);
					break;
				case 1:
					HUD::CLEAR_HELP(true);
					__LIB_23__::func_726(86, "BB_SV_BMT_02" /* GXT: Challenge Passed */, "BB_SV_BMS_02" /* GXT: Successfully delivered the antiques */, 1, -1, 2, 1, 0);
					func_545(1);
					break;
				case 2:
					HUD::CLEAR_HELP(true);
					__LIB_23__::func_726(86, "BB_SV_BMT_01" /* GXT: Challenge Over */, "BB_SV_BMS_01" /* GXT: Failed to deliver the antiques to the drop-off */, 1, -1, 2, 1, 0);
					func_545(2);
					break;
				case 3:
					HUD::CLEAR_HELP(true);
					__LIB_23__::func_726(86, "BB_SV_BMT_01" /* GXT: Challenge Over */, "BB_SV_BMS_03" /* GXT: Not enough players to participate in the challenge */, 1, -1, 2, 1, 0);
					func_545(3);
					break;
				case 4:
					HUD::CLEAR_HELP(true);
					break;
			}
			func_545(iParam0);
		}
	}
}

void func_545(int iParam0)//Position - 0x3CF29
{
	MISC::SET_BIT(&uLocal_181, iParam0);
}

bool func_565(var uParam0)//Position - 0x3D702
{
	return BitTest(uLocal_181, uParam0);
}

void func_566(int iParam0)//Position - 0x3D710
{
	Local_375[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = iParam0;
}

int func_567(int iParam0)//Position - 0x3D725
{
	return Local_375[iParam0 /*6*/].f_5;
}

void func_568()//Position - 0x3D736
{
	if (func_657())
	{
		func_649();
		func_643();
		func_635();
		func_614();
		func_576();
	}
	else
	{
		switch (__LIB_36__::func_48(PLAYER::PLAYER_ID()))
		{
			case 0:
				__LIB_3__::func_0();
				break;
			case 1:
			case 2:
				func_649();
				__LIB_3__::func_0();
				break;
			case 3:
				func_649();
				func_643();
				func_635();
				func_614();
				break;
			}
	}
}

void func_576()//Position - 0x3D8F9
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	struct<6> Var3;
	if (__LIB_36__::func_242())
	{
		iVar1 = -1;
		if (__LIB_0__::func_568())
		{
			__LIB_0__::func_620(0);
		}
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_607(iVar0))
			{
				if (func_585(iVar0))
				{
					if (__LIB_0__::func_114())
					{
						__LIB_0__::clearF_1Prop(&uLocal_203);
					}
					iVar1 = iVar0;
				}
				else
				{
					Jump @132; //curOff = 75
					if (func_582(iVar0) || __LIB_0__::func_114(iVar0))
					{
						Var2 = { __LIB_0__::func_486() };
						Var3 = { func_577(iVar0) };
						if (MISC::ARE_STRINGS_EQUAL(&Var2, &Var3))
						{
							iVar1 = iVar0;
						}
					}
					iVar0++;
				}
				if (iLocal_206 != iVar1)
				{
					iLocal_206 = iVar1;
				}
				Jump @177; //curOff = 154
				if (iLocal_206 != -1)
				{
					if (!__LIB_0__::func_568())
					{
						__LIB_0__::func_620(1);
					}
				}
			}
struct<6> func_577(int iParam0)//Position - 0x3D9AD
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	StringCopy(&Var0, func_579(iParam0), 24);
	iVar1 = func_578(iParam0);
	if (iVar1 > 1)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, iVar1 + 1);
		StringIntConCat(&Var0, iVar2, 24);
	}
	return Var0;
}

int func_578(int iParam0)//Position - 0x3D9E2
{
	switch (iParam0)
	{
		case 5:
			return 3;
		default:
	}
	return 1;
}

char* func_579(int iParam0)//Position - 0x3D9FC
{
	switch (iParam0)
	{
		case 0:
			return "PAIFM_CJSVO";
		case 1:
			return "PAIFM_CJSVRD";
		case 2:
			return "PAIFM_CJSVCL";
		case 3:
			return "PAIFM_CJSVWL";
		case 4:
			return "PAIFM_CJSVLS";
		case 5:
			return "PAIFM_GENTM";
		default:
	}
	return "";
}

bool func_582(int iParam0)//Position - 0x3DA89
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(uLocal_205[iVar0], iVar1);
}

int func_585(int iParam0)//Position - 0x3DABF
{
	char* sVar0;
	if (func_582(iParam0))
	{
		return 0;
	}
	if (iLocal_206 != -1)
	{
		if (func_606(iParam0) >= func_606(iLocal_206))
		{
			if (__LIB_0__::func_75())
			{
				if (__LIB_0__::func_114(iParam0))
				{
					__LIB_0__::func_429();
				}
				else
				{
					__LIB_0__::func_638();
				}
			}
		}
	}
	if (!__LIB_0__::func_75())
	{
		MemCopy(&sVar0, {func_577(iParam0)}, 4);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&sVar0))
		{
			__LIB_0__::func_222(&uLocal_207, 2, 0, "PAIGE", 0, 1);
			if (__LIB_10__::func_563(&uLocal_207, "PAIFMAU", &sVar0, 9, 0, 0, 0))
			{
				if (!__LIB_0__::func_114(iParam0))
				{
					func_586(iParam0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_586(int iParam0)//Position - 0x3DB5C
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(uLocal_205[iVar0]), iVar1);
}

int func_606(int iParam0)//Position - 0x3E322
{
	switch (iParam0)
	{
		case 5:
			return 1;
		default:
	}
	return 3;
}

int func_607(int iParam0)//Position - 0x3E33C
{
	if (func_582(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return __LIB_0__::func_864(&uLocal_189);
		case 2:
			return ((func_608(NETWORK::PARTICIPANT_ID(), 11) || func_608(NETWORK::PARTICIPANT_ID(), 12)) || func_608(NETWORK::PARTICIPANT_ID(), 13));
		case 3:
			return Local_374.f_31 > 1;
		case 4:
			return func_2(20);
		case 5:
			return iLocal_186 < 60000;
		default:
	}
	return 0;
}

bool func_608(int iParam0, int iParam1)//Position - 0x3E3D6
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return BitTest(Local_375[iParam0 /*6*/].f_1[iVar0], iVar1);
}

void func_614()//Position - 0x3E4FE
{
	int iVar0;
	if (__LIB_0__::func_864(&(Local_374.f_3)))
	{
		iLocal_186 = (func_5() - __LIB_1__::func_724(&(Local_374.f_3), 0, 0));
		if (iLocal_186 > 30000)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 6;
		}
		__LIB_1__::func_910();
		if (iLocal_186 > 0)
		{
			__LIB_1__::func_350(iLocal_186, "CHALLENGE_END" /* GXT: CHALLENGE END */, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
		else
		{
			__LIB_1__::func_350(0, "CHALLENGE_END" /* GXT: CHALLENGE END */, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
		func_628();
		func_615();
	}
}

void func_615()//Position - 0x3E583
{
	if (((func_2(2) && func_2(3)) && func_2(4)) || __LIB_4__::func_946(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	if (!__LIB_0__::func_864(&uLocal_187) && !__LIB_0__::func_864(&uLocal_189))
	{
		if (iLocal_198 == -1)
		{
			__LIB_7__::func_954(&iLocal_198, 5, "", 1, 0, 0, 0);
		}
		if (__LIB_3__::func_113(iLocal_198, 1))
		{
			__LIB_3__::func_422(&iLocal_198);
			func_619(0);
			func_538(2);
			HUD::FLASH_MINIMAP_DISPLAY();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "RADAR_ACTIVATE", "DLC_BTL_SECURITY_VANS_RADAR_PING_SOUNDS", false);
			__LIB_0__::func_795(&uLocal_187, 0, 0);
			__LIB_0__::func_795(&uLocal_189, 0, 0);
		}
	}
	if (__LIB_0__::func_864(&uLocal_189) && __LIB_0__::func_937(&uLocal_189, 13500, 0))
	{
		__LIB_0__::clearF_1Prop(&uLocal_189);
	}
	if (__LIB_0__::func_864(&uLocal_187) && __LIB_0__::func_937(&uLocal_187, 20000, 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "RADAR_READY", "DLC_BTL_SECURITY_VANS_RADAR_PING_SOUNDS", false);
		__LIB_0__::clearF_1Prop(&uLocal_187);
	}
	if (__LIB_0__::func_864(&uLocal_187))
	{
		__LIB_7__::func_603(__LIB_1__::func_724(&uLocal_187, 0, 0), 20000, "BB_SV_RADAR" /* GXT: RADAR PING */, 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	else
	{
		__LIB_7__::func_603(20000, 20000, "BB_SV_RADAR" /* GXT: RADAR PING */, 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
}

void func_619(int iParam0)//Position - 0x3E9D9
{
	if (func_541(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				__LIB_19__::func_8("BB_SV_HMT_00" /* GXT: Press ~INPUT_CONTEXT~ to activate the radar ping and locate the security vans. */, 1);
				break;
			}
	}
}

void func_628()//Position - 0x3ED9C
{
	func_629(3, "BB_SV_ELI_ANT" /* GXT: ANTIQUES */, 3, (func_2(11) || func_2(17)), (func_2(12) || func_2(18)), (func_2(13) || func_2(19)), 0, 0, 0, 0, 0, 18, 4, -1, 2, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, func_2(17), func_2(18), func_2(19), 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 0);
}

void func_629(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, bool bParam38, bool bParam39, bool bParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45, int iParam46, int iParam47, int iParam48, int iParam49, int iParam50, int iParam51, int iParam52, int iParam53, int iParam54, int iParam55, bool bParam56)//Position - 0x3EE2F
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_929(2, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_928(2, iVar0);
		Global_1649593.f_2120[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_2120.f_99[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_2120.f_260[iVar0] = iParam2;
		Global_1649593.f_2120.f_11[iVar0] = bParam3;
		Global_1649593.f_2120.f_22[iVar0] = bParam4;
		Global_1649593.f_2120.f_33[iVar0] = bParam5;
		Global_1649593.f_2120.f_44[iVar0] = iParam6;
		Global_1649593.f_2120.f_55[iVar0] = iParam7;
		Global_1649593.f_2120.f_66[iVar0] = iParam8;
		Global_1649593.f_2120.f_77[iVar0] = iParam9;
		Global_1649593.f_2120.f_88[iVar0] = iParam10;
		Global_1649593.f_2120.f_282[iVar0] = iParam11;
		Global_1649593.f_2120.f_293[iVar0] = iParam12;
		Global_1649593.f_2120.f_271[iVar0] = iParam13;
		Global_1649593.f_2120.f_315[iVar0] = iParam14;
		Global_1649593.f_2120.f_326[iVar0 /*3*/] = iParam15;
		Global_1649593.f_2120.f_326[iVar0 /*3*/].f_1 = iParam16;
		Global_1649593.f_2120.f_357[iVar0] = iParam17;
		Global_1649593.f_2120.f_368[iVar0] = iParam18;
		Global_1649593.f_2120.f_379[iVar0] = iParam19;
		Global_1649593.f_2120.f_390[iVar0] = iParam20;
		Global_1649593.f_2120.f_401[iVar0] = iParam21;
		Global_1649593.f_2120.f_412[iVar0] = iParam22;
		Global_1649593.f_2120.f_423[iVar0] = iParam23;
		Global_1649593.f_2120.f_434[iVar0] = iParam24;
		Global_1649593.f_2120.f_445[iVar0] = iParam25;
		Global_1649593.f_2120.f_456[iVar0] = iParam26;
		Global_1649593.f_2120.f_467[iVar0] = iParam27;
		Global_1649593.f_2120.f_478[iVar0] = iParam28;
		Global_1649593.f_2120.f_489[iVar0] = iParam29;
		Global_1649593.f_2120.f_500[iVar0] = iParam30;
		Global_1649593.f_2120.f_511[iVar0] = iParam31;
		Global_1649593.f_2120.f_522[iVar0] = iParam32;
		Global_1649593.f_2120.f_533[iVar0] = iParam33;
		Global_1649593.f_2120.f_544[iVar0] = iParam37;
		Global_2825033[iVar0] = bParam38;
		Global_2825044[iVar0] = bParam39;
		Global_2825055[iVar0] = bParam40;
		Global_2825066[iVar0] = iParam41;
		Global_2825077[iVar0] = iParam42;
		Global_2825088[iVar0] = iParam43;
		Global_2825099[iVar0] = iParam44;
		Global_2825110[iVar0] = iParam45;
		Global_1649593.f_2120.f_631[iVar0] = iParam48;
		Global_1649593.f_2120.f_642[iVar0] = iParam49;
		Global_1649593.f_2120.f_653[iVar0] = iParam50;
		Global_1649593.f_2120.f_664[iVar0] = iParam51;
		Global_1649593.f_2120.f_675[iVar0] = iParam52;
		Global_1649593.f_2120.f_686[iVar0] = iParam53;
		Global_1649593.f_2120.f_697[iVar0] = iParam54;
		Global_1649593.f_2120.f_708[iVar0] = iParam55;
		if (bParam56)
		{
			Global_1649593.f_1172 = 0;
		}
		else
		{
			Global_1649593.f_1172 = 1;
		}
		Global_1649593.f_2120.f_576[iVar0] = iParam34;
		if (iParam34 > -1)
		{
			__LIB_13__::func_932(2, iVar0);
		}
		else
		{
			__LIB_13__::func_931(2, iVar0);
		}
		Global_1649593.f_2120.f_587[iVar0] = iParam35;
		Global_1649593.f_2120.f_598[iVar0] = iParam36;
		Global_1649593.f_2120.f_609[iVar0] = iParam46;
		Global_1649593.f_2120.f_620[iVar0] = iParam47;
	}
}

void func_635()//Position - 0x3F3D3
{
	if (!func_2(20))
	{
		if ((func_2(2) && func_2(3)) && func_2(4))
		{
			__LIB_36__::func_138("BB_SV_OBJ_001" /* GXT: Steal the ~HUD_COLOUR_GREEN~antiques.~s~ */);
		}
		else if ((3 - iLocal_200) > 1)
		{
			__LIB_36__::func_138("BB_SV_OBJ_000" /* GXT: Find and assault the ~HUD_COLOUR_RED~security vans.~s~ */);
		}
		else
		{
			__LIB_36__::func_138("BB_SV_OBJ_000S" /* GXT: Find and assault the ~HUD_COLOUR_RED~security van.~s~ */);
		}
	}
	else if (func_2(22))
	{
		if (func_608(NETWORK::PARTICIPANT_ID(), 17))
		{
			__LIB_36__::func_138("BB_SV_LOSE_COPS" /* GXT: Lose the cops. */);
		}
		else
		{
			__LIB_36__::func_138("BB_SV_HELP_COPS" /* GXT: Wait for your team to lose the cops. */);
		}
	}
	else if ((func_608(NETWORK::PARTICIPANT_ID(), 8) || func_608(NETWORK::PARTICIPANT_ID(), 9)) || func_608(NETWORK::PARTICIPANT_ID(), 10))
	{
		__LIB_36__::func_138("BB_SV_OBJ_01" /* GXT: Deliver the antiques to the ~HUD_COLOUR_YELLOW~drop-off.~s~ */);
	}
	else
	{
		__LIB_36__::func_138("BB_SV_OBJ_02" /* GXT: Help deliver the antiques to the ~HUD_COLOUR_YELLOW~drop-off.~s~ */);
	}
}

void func_643()//Position - 0x3F5F3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_647(iVar0);
		iVar0++;
	}
	func_644();
}

void func_644()//Position - 0x3F617
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	if ((func_2(20) && !func_2(21)) && !func_2(22))
	{
		HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
		Var4 = { func_111(func_34()) };
		Var4.f_2 = (Var4.f_2 - 0.7f);
		GRAPHICS::DRAW_MARKER(1, Var4, 0f, 0f, 0f, 0f, 0f, 0f, __LIB_19__::func_336(), __LIB_19__::func_336(), __LIB_19__::func_310(), iVar0, iVar1, iVar2, 150, false, false, 2, false, 0, 0, false);
	}
}

void func_647(int iParam0)//Position - 0x3F6A8
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	if (((!func_16(iParam0) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(func_78(iParam0))) && !func_608(NETWORK::PARTICIPANT_ID(), 23)) && (func_2((2 + iParam0)) || func_608(NETWORK::PARTICIPANT_ID(), (2 + iParam0))))
	{
		HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
		__LIB_30__::func_402(func_19(iParam0), iVar0, iVar1, iVar2);
		return;
	}
	if (((((func_2((8 + iParam0)) && !func_2((11 + iParam0))) && !func_2((17 + iParam0))) && !func_608(NETWORK::PARTICIPANT_ID(), (8 + iParam0))) && !func_608(NETWORK::PARTICIPANT_ID(), (14 + iParam0))) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(func_15(iParam0)))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(func_23(iParam0)))
		{
			HUD::GET_HUD_COLOUR(18, &iVar4, &iVar5, &iVar6, &uVar7);
			__LIB_30__::func_402(func_18(iParam0), iVar4, iVar5, iVar6);
		}
	}
}

void func_649()//Position - 0x3F834
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_656(iVar0);
		func_653(iVar0);
		iVar0++;
	}
	func_650();
}

void func_650()//Position - 0x3F85E
{
	if ((func_2(20) && !func_2(21)) && !func_2(22))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_197))
		{
			iLocal_197 = __LIB_0__::func_488(func_111(func_34()), 1);
		}
	}
	else
	{
		__LIB_0__::func_714(&iLocal_197);
	}
}

void func_653(int iParam0)//Position - 0x3F8EF
{
	if ((func_2((8 + iParam0)) && !func_2((11 + iParam0))) && !func_2((17 + iParam0)))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(func_23(iParam0)))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_196[iParam0]))
			{
				uLocal_196[iParam0] = __LIB_0__::func_643(func_15(iParam0));
				HUD::SET_BLIP_SCALE(uLocal_196[iParam0], 1f);
				HUD::SET_BLIP_PRIORITY(uLocal_196[iParam0], 12);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_196[iParam0], "BB_SV_BLP_ANT" /* GXT: Antique */);
			}
		}
	}
	else
	{
		__LIB_0__::func_714(&(uLocal_196[iParam0]));
	}
}

void func_656(int iParam0)//Position - 0x3FA38
{
	float fVar0;
	float fVar1;
	int iVar2;
	if ((((__LIB_0__::func_864(&uLocal_189) && __LIB_1__::func_724(&uLocal_189, 0, 0) > (500 * iParam0)) && __LIB_1__::func_724(&uLocal_189, 0, 0) < (12000 + (500 * iParam0))) && !func_2((2 + iParam0))) || (func_2((14 + iParam0)) && !func_2((2 + iParam0))))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(func_72(iParam0)))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_195[iParam0]))
			{
				iLocal_195[iParam0] = HUD::ADD_BLIP_FOR_ENTITY(func_88(iParam0));
				HUD::SET_BLIP_SPRITE(iLocal_195[iParam0], 67);
				HUD::SET_BLIP_COLOUR(iLocal_195[iParam0], 1);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_195[iParam0], "BB_SV_BLP_VAN" /* GXT: Security Van */);
			}
			if (__LIB_1__::func_724(&uLocal_189, 0, 0) < (7000 + (500 * iParam0)))
			{
				if (!func_2((14 + iParam0)))
				{
					HUD::SET_BLIP_FLASHES(iLocal_195[iParam0], true);
				}
				else
				{
					HUD::SET_BLIP_FLASHES(iLocal_195[iParam0], false);
				}
			}
			else
			{
				fVar0 = SYSTEM::TO_FLOAT(5000);
				fVar1 = (fVar0 - SYSTEM::TO_FLOAT((__LIB_1__::func_724(&uLocal_189, 0, 0) - (7000 + (500 * iParam0)))));
				iVar2 = SYSTEM::FLOOR(((fVar1 / fVar0) * 255f));
				HUD::SET_BLIP_FLASHES(iLocal_195[iParam0], false);
				if (!func_2((14 + iParam0)))
				{
					HUD::SET_BLIP_ALPHA(iLocal_195[iParam0], iVar2);
				}
				else
				{
					HUD::SET_BLIP_ALPHA(iLocal_195[iParam0], 255);
				}
			}
		}
	}
	else
	{
		__LIB_0__::func_714(&(iLocal_195[iParam0]));
	}
}

int func_657()//Position - 0x3FBB4
{
	if (func_521() || func_658())
	{
		return 1;
	}
	return 0;
}

int func_658()//Position - 0x3FBD2
{
	return func_659(PLAYER::PLAYER_ID());
}

int func_659(int iParam0)//Position - 0x3FBE2
{
	return __LIB_2__::func_759(iParam0, func_523(), 0);
}

void func_660()//Position - 0x3FBF5
{
	bool bVar0;
	func_733();
	bVar0 = false;
	while (bVar0 < 3)
	{
		func_731(bVar0);
		func_729(bVar0);
		func_726(bVar0);
		func_719(bVar0);
		func_716(bVar0);
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 5)
	{
		func_702(bVar0);
		bVar0++;
	}
	func_695();
	func_691();
	func_683();
	func_661();
}

void func_661()//Position - 0x3FC59
{
	func_676();
	func_668();
	func_662();
}

void func_662()//Position - 0x3FC6D
{
	if (func_26() != 0)
	{
		func_663();
	}
}

void func_663()//Position - 0x3FC81
{
	func_664(5);
}

void func_664(int iParam0)//Position - 0x3FC8E
{
	if (!__LIB_36__::func_132(iParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(func_666(iParam0));
		__LIB_36__::func_131(iParam0);
	}
}

char* func_666(int iParam0)//Position - 0x3FCD4
{
	switch (iParam0)
	{
		case 1:
			return "BTL_MED_INTENSITY_START";
		case 2:
			return "BTL_GUNFIGHT";
		case 3:
			return "BTL_MED_INTENSITY";
		case 4:
			return "BTL_DELIVERING";
		case 5:
			return "BTL_MUSIC_STOP";
		case 6:
			return "BTL_FAIL";
		default:
	}
	return "***INVALID***";
}

void func_668()//Position - 0x3FD55
{
	if (func_26() == 0)
	{
		if (__LIB_0__::func_864(&(Local_374.f_3)))
		{
			iLocal_186 = (func_5() - __LIB_1__::func_724(&(Local_374.f_3), 0, 0));
		}
	}
	__LIB_30__::func_563(iLocal_186, func_26() != 0, &iLocal_175, -1);
}

void func_676()//Position - 0x40396
{
	if (func_26() == 0)
	{
		if (func_682() != 13)
		{
			if (!__LIB_36__::func_172(func_682()))
			{
				if (func_681())
				{
					func_664(func_680());
					__LIB_36__::func_171(func_682());
					iLocal_202++;
					if (iLocal_202 == 4)
					{
						func_678(2);
						func_678(4);
					}
					if (iLocal_202 == 6)
					{
						func_677(10);
						func_677(11);
						func_678(2);
						func_678(4);
						iLocal_202 = 4;
					}
				}
			}
		}
	}
}

void func_677(int iParam0)//Position - 0x4040C
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(uLocal_179[iVar0]), iVar1);
}

void func_678(int iParam0)//Position - 0x4042F
{
	if (__LIB_36__::func_132(iParam0))
	{
		func_679(iParam0);
	}
}

void func_679(int iParam0)//Position - 0x40446
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(uLocal_201[iVar0]), iVar1);
}

int func_680()//Position - 0x40469
{
	switch (iLocal_202)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 4;
		case 4:
			return 2;
		case 5:
			return 4;
		default:
	}
	return 7;
}

int func_681()//Position - 0x404B6
{
	int iVar0;
	switch (iLocal_202)
	{
		case 0:
			return func_28() == 1;
		case 1:
			if (func_608(NETWORK::PARTICIPANT_ID(), 17) || func_2(22))
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (func_608(NETWORK::PARTICIPANT_ID(), (5 + iVar0)) || func_2((5 + iVar0)))
					{
						return 1;
					}
					iVar0++;
				}
			}
			break;
		case 2:
			return !func_2(22);
		case 3:
			return func_2(20);
		case 4:
			return func_2(22);
		case 5:
			return !func_2(22);
	}
	return 0;
}

int func_682()//Position - 0x40569
{
	switch (iLocal_202)
	{
		case 0:
			return 6;
		case 1:
			return 7;
		case 2:
			return 8;
		case 3:
			return 9;
		case 4:
			return 10;
		case 5:
			return 11;
		default:
	}
	return 13;
}

void func_683()//Position - 0x405BB
{
	if (__LIB_36__::func_172(12))
	{
		if (__LIB_0__::func_937(&(Local_177.f_3), Local_177.f_2, 0) || Local_177.f_2 == 0)
		{
			if (func_688(Local_177.f_0, Local_177.f_1, 0))
			{
				if (!Local_177.f_1 && Local_374.f_31 > 1)
				{
					Local_177.f_0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) + 1;
				}
				if (PLAYER::GET_MAX_WANTED_LEVEL() < Local_177.f_0 && Local_177.f_0 <= __LIB_1__::func_806())
				{
					PLAYER::SET_MAX_WANTED_LEVEL(Local_177.f_0);
				}
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 17))
				{
					__LIB_15__::func_302();
				}
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Local_177.f_0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				func_685();
				func_677(12);
			}
			else
			{
				func_685();
				func_677(12);
			}
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		func_181(17);
	}
	else
	{
		func_684(17);
	}
}

void func_684(int iParam0)//Position - 0x4069B
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Local_375[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1[iVar0]), iVar1);
}

void func_685()//Position - 0x406C6
{
	Local_177.f_0 = 0;
	Local_177.f_2 = 0;
	Local_177.f_1 = 0;
	__LIB_0__::clearF_1Prop(&(Local_177.f_3));
}

int func_688(int iParam0, bool bParam1, bool bParam2)//Position - 0x4078A
{
	if (iParam0 <= 0)
	{
		return 0;
	}
	if (!bParam2)
	{
		if (func_26() != 0)
		{
			return 0;
		}
	}
	if (__LIB_6__::func_784(PLAYER::PLAYER_ID(), 0, -1))
	{
		return 0;
	}
	if (bParam1)
	{
		return 1;
	}
	if (__LIB_15__::func_615())
	{
		return 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == iParam0)
	{
		return 0;
	}
	return 1;
}

void func_691()//Position - 0x408B6
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_608(NETWORK::PARTICIPANT_ID(), (8 + iVar0)))
		{
			if (!__LIB_2__::func_606())
			{
				__LIB_15__::func_345(1, -1);
			}
			return;
		}
		iVar0++;
	}
	if (__LIB_2__::func_606())
	{
		__LIB_15__::func_345(0, -1);
	}
}

void func_695()//Position - 0x4097C
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_374.f_28) && !__LIB_0__::func_951(Local_374.f_28))
	{
		if (!__LIB_36__::func_133(NETWORK::NET_TO_PED(Local_374.f_28), joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")))
		{
			if (__LIB_1__::func_561(Local_374.f_28))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_374.f_28), "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 0, false);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!func_2((17 + iVar0)) && !func_608(NETWORK::PARTICIPANT_ID(), (14 + iVar0)))
			{
				return;
			}
			iVar0++;
		}
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(NETWORK::NET_TO_PED(Local_374.f_28)))
		{
			if (__LIB_1__::func_561(Local_374.f_28))
			{
				AUDIO::STOP_PED_SPEAKING(NETWORK::NET_TO_PED(Local_374.f_28), false);
				__LIB_0__::func_640(NETWORK::NET_TO_PED(Local_374.f_28), "GENERIC_THANKS", 3);
				AUDIO::STOP_PED_SPEAKING(NETWORK::NET_TO_PED(Local_374.f_28), true);
			}
		}
	}
}

void func_702(bool bParam0)//Position - 0x40CFF
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_74(bParam0)) && !__LIB_0__::func_951(func_74(bParam0)))
	{
		__LIB_2__::func_848(func_74(bParam0), &(Local_194[bParam0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1, 0);
		func_707(bParam0);
		if (func_73(bParam0) != -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_72(func_73(bParam0))) && __LIB_0__::func_121(func_14(func_73(bParam0))))
			{
				if (PED::IS_PED_IN_VEHICLE(func_70(bParam0), func_88(func_73(bParam0)), false))
				{
					if (!func_2((5 + func_73(bParam0))))
					{
						if (!__LIB_36__::func_133(func_70(bParam0), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")))
						{
							if (__LIB_1__::func_561(func_74(bParam0)))
							{
								TASK::TASK_VEHICLE_DRIVE_WANDER(func_70(bParam0), func_88(func_73(bParam0)), 10f, 786597);
							}
						}
					}
					else if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(func_88(func_73(bParam0))) != 8)
					{
						if (__LIB_1__::func_561(func_74(bParam0)))
						{
							PED::SET_PED_FLEE_ATTRIBUTES(func_70(bParam0), 256, true);
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(func_70(bParam0), func_88(func_73(bParam0)), PLAYER::PLAYER_PED_ID(), 8, 25f, 786468, 100f, 100f, true);
						}
					}
				}
				else if (!__LIB_36__::func_133(func_70(bParam0), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")))
				{
					if (__LIB_1__::func_561(func_74(bParam0)))
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_70(bParam0), ENTITY::GET_ENTITY_COORDS(func_88(func_73(bParam0)), true), 20f, false, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_70(bParam0), 299.9f, 0);
					}
				}
			}
		}
		else if (!BitTest(Local_374.f_33, bParam0) && !func_703(bParam0))
		{
			if (!__LIB_36__::func_133(func_70(bParam0), joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_193[bParam0 /*23*/].f_6)))
				{
					if (__LIB_1__::func_561(func_74(bParam0)))
					{
						TASK::TASK_START_SCENARIO_IN_PLACE(func_70(bParam0), &(Local_193[bParam0 /*23*/].f_6), 0, false);
					}
				}
			}
		}
		else if (!__LIB_36__::func_133(func_70(bParam0), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")))
		{
			if (__LIB_1__::func_561(func_74(bParam0)))
			{
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(func_70(bParam0));
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_70(bParam0), 299.9f, 0);
			}
		}
	}
}

int func_703(bool bParam0)//Position - 0x40F2B
{
	if (func_706(bParam0))
	{
		return func_704(func_705(bParam0));
	}
	return 0;
}

bool func_704(bool bParam0)//Position - 0x40F4A
{
	return BitTest(Local_374.f_34, bParam0);
}

bool func_705(int iParam0)//Position - 0x40F5A
{
	return Local_193[iParam0 /*23*/].f_22;
}

bool func_706(int iParam0)//Position - 0x40F6B
{
	return func_705(iParam0) != -1;
}

void func_707(bool bParam0)//Position - 0x40F7B
{
	if ((func_26() != 0 || !NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_74(bParam0))) || __LIB_0__::func_951(func_74(bParam0)))
	{
		return;
	}
	if (!BitTest(Local_374.f_33, bParam0))
	{
		if (!BitTest(Local_375[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3, bParam0))
		{
			if (__LIB_0__::func_797() == Local_374.f_7)
			{
				if (__LIB_15__::func_449(func_70(bParam0)) && func_709(func_70(bParam0)))
				{
					MISC::SET_BIT(&(Local_375[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3), bParam0);
				}
			}
		}
		if (!BitTest(Local_375[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3, bParam0))
		{
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(func_70(bParam0), true), 10f, false))
			{
				MISC::SET_BIT(&(Local_375[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3), bParam0);
			}
		}
		if (!BitTest(Local_375[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3, bParam0))
		{
			if (func_708(bParam0))
			{
				MISC::SET_BIT(&(Local_375[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3), bParam0);
			}
		}
	}
}

int func_708(bool bParam0)//Position - 0x4106E
{
	switch (bParam0)
	{
		case 0:
		case 1:
		case 2:
			switch (func_34())
			{
				case 0:
					return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1131.0549f, -2682.6172f, 12.440887f, -1140.1958f, -2698.528f, 20.45558f, 12f, false, true, 0);
				case 1:
					return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 917.8628f, 38.16457f, 79.51476f, 927.7108f, 54.130783f, 85.76476f, 8.5f, false, true, 0);
				case 2:
					return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1644.5634f, -994.4682f, 11.767392f, -1654.4685f, -1006.54254f, 18.017393f, 10f, false, true, 0);
				case 3:
					return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1171.1893f, -1331.389f, 33.533627f, 1169.4916f, -1348.1671f, 39.780243f, 10f, false, true, 0);
				case 4:
					return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 157.8357f, -1034.7599f, 27.951927f, 146.75049f, -1030.5652f, 35.314545f, 11.5f, false, true, 0);
				case 5:
					return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -169.53839f, -159.87509f, 42.37122f, -176.88652f, -176.48764f, 48.621387f, 10f, false, true, 0);
				case 6:
					return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1856.0455f, 3714.9722f, 31.95819f, 1863.9521f, 3701.9211f, 38.517418f, 8f, false, true, 0);
				case 7:
					return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2663.9226f, 3457.6797f, 54.43559f, 2646.4783f, 3464.95f, 60.42211f, 8f, false, true, 0);
				case 8:
					return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -423.4049f, 6128.939f, 30.195564f, -432.38443f, 6137.9785f, 36.478134f, 8f, false, true, 0);
				case 9:
					return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2886.4292f, 4415.5117f, 48.54116f, 2880.6658f, 4428.5195f, 53.53196f, 10f, false, true, 0);
				default:
			}
			break;
	}
	return 0;
}

int func_709(int iParam0)//Position - 0x412C2
{
	if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, PLAYER::PLAYER_PED_ID(), 45f, 60f, 3.5f, 4f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 287))
		{
			return 1;
		}
	}
	return 0;
}

void func_716(int iParam0)//Position - 0x41677
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_374.f_24[iParam0]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_374.f_24[iParam0]), false))
	{
		if (__LIB_31__::func_787(Local_374.f_24[iParam0], &uLocal_163))
		{
		}
	}
}

void func_719(int iParam0)//Position - 0x421AA
{
	if ((func_2(20) && !func_2(21)) && !func_2(22))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(func_23(iParam0)))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(func_18(iParam0), PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), func_111(func_34()), (__LIB_19__::func_336() * 0.8f), 1))
			{
				if (!func_608(NETWORK::PARTICIPANT_ID(), (14 + iParam0)))
				{
					if (__LIB_1__::func_561(Local_374.f_24[iParam0]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
						{
							if (__LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1093140480, 1, 1056964608, 0, 1, 0))
							{
								func_181((14 + iParam0));
								func_684((8 + iParam0));
								__LIB_6__::func_843(&(Local_374.f_24[iParam0]));
								__LIB_3__::func_452("BB_SV_TICK_01" /* GXT: You delivered an antique. */, 0);
								__LIB_1__::func_925();
								__LIB_15__::func_502(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_COLLECT_CHECKPOINT"), 250, 1, -1, 0, 0, 0);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "MP_AWARD", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
							}
						}
						else
						{
							func_181((14 + iParam0));
							func_684((8 + iParam0));
							__LIB_6__::func_843(&(Local_374.f_24[iParam0]));
							__LIB_3__::func_452("BB_SV_TICK_01" /* GXT: You delivered an antique. */, 0);
							__LIB_1__::func_925();
							__LIB_15__::func_502(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_COLLECT_CHECKPOINT"), 250, 1, -1, 0, 0, 0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "MP_AWARD", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
						}
					}
				}
			}
		}
	}
}

void func_726(int iParam0)//Position - 0x425F9
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(func_23(iParam0)))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(func_18(iParam0)))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ENTITY::GET_ENTITY_ATTACHED_TO(func_18(iParam0)));
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				if (iVar1 == PLAYER::PLAYER_ID())
				{
					if (!func_608(NETWORK::PARTICIPANT_ID(), (8 + iParam0)))
					{
						func_181((8 + iParam0));
						__LIB_3__::func_452("BB_SV_TICK_00" /* GXT: You collected an antique. */, 0);
					}
				}
				else if (!func_608(NETWORK::PARTICIPANT_ID(), (19 + iParam0)))
				{
					func_181((19 + iParam0));
					__LIB_23__::func_709("BB_SV_TICK_02" /* GXT: ~a~ collected an antique. */, iVar1, 0, 0, 0, 1, 0);
				}
			}
		}
		else
		{
			if (func_608(NETWORK::PARTICIPANT_ID(), (8 + iParam0)))
			{
				func_684((8 + iParam0));
			}
			if (func_608(NETWORK::PARTICIPANT_ID(), (19 + iParam0)))
			{
				func_684((19 + iParam0));
			}
		}
		if (!func_16(iParam0))
		{
			if (!func_608(NETWORK::PARTICIPANT_ID(), 23))
			{
				if (func_608(NETWORK::PARTICIPANT_ID(), (8 + iParam0)))
				{
					if (!func_608(NETWORK::PARTICIPANT_ID(), 23))
					{
						func_181(23);
					}
				}
				else if (func_608(NETWORK::PARTICIPANT_ID(), 22))
				{
					if (__LIB_0__::func_953(func_23(iParam0)))
					{
						OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(func_15(iParam0), PLAYER::PLAYER_PED_ID());
						AUDIO::PLAY_SOUND_FRONTEND(-1, "flight_recorder", "dlc_xm_pickup_sweetener_sounds", true);
						func_181(23);
					}
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_78(iParam0)) && __LIB_0__::func_953(func_78(iParam0)))
			{
				iVar2 = func_78(iParam0);
				__LIB_6__::func_843(&iVar2);
				ENTITY::SET_ENTITY_VISIBLE(func_15(iParam0), true, false);
			}
		}
	}
}

void func_729(int iParam0)//Position - 0x4296A
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(func_72(iParam0)))
	{
		if (!func_2((2 + iParam0)))
		{
			if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), func_14(iParam0), 60f, 0))
			{
				func_538(1);
				if (!func_2((14 + iParam0)))
				{
					func_181((11 + iParam0));
				}
			}
		}
		if (!func_16(iParam0))
		{
			if (func_2((2 + iParam0)))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_78(iParam0)))
				{
					if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), func_19(iParam0), 2.5f, 0))
					{
						if (!func_608(NETWORK::PARTICIPANT_ID(), 22))
						{
							func_181(22);
						}
					}
				}
				else if (func_608(NETWORK::PARTICIPANT_ID(), 22))
				{
					func_684(22);
				}
			}
		}
	}
}

void func_731(int iParam0)//Position - 0x42A42
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(func_72(iParam0)))
	{
		if (!func_608(NETWORK::PARTICIPANT_ID(), (2 + iParam0)))
		{
			if (!__LIB_0__::func_121(func_14(iParam0)) || func_732(iParam0))
			{
				if (__LIB_1__::func_561(func_72(iParam0)))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(func_88(iParam0), 2, false, false);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(func_88(iParam0), 3, false, false);
					func_181((5 + iParam0));
				}
				if (((VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(func_88(iParam0), 2) > 0.2f || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(func_88(iParam0), 2)) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(func_88(iParam0), 3) > 0.2f) || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(func_88(iParam0), 3))
				{
					iLocal_200++;
					func_181((2 + iParam0));
				}
			}
		}
	}
}

int func_732(int iParam0)//Position - 0x42B0D
{
	int iVar0;
	struct<3> Var1;
	iVar0 = func_88(iParam0);
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -3.5f, 1.25f) };
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var1, 1f))
	{
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_87(iParam0)))
	{
		if (ENTITY::IS_ENTITY_DEAD(func_82(iParam0), false))
		{
			return 1;
		}
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iVar0, 2))
	{
		return 1;
	}
	else if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iVar0, 2) > 0f)
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iVar0, 3))
	{
		return 1;
	}
	else if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iVar0, 3) > 0f)
	{
		return 1;
	}
	return 0;
}

void func_733()//Position - 0x42BA5
{
	if (!func_608(NETWORK::PARTICIPANT_ID(), 18) && !__LIB_4__::func_946(PLAYER::PLAYER_ID(), 0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), 10, false, true);
		func_181(18);
	}
}

void func_876(int iParam0, int iParam1)//Position - 0x4E368
{
	Local_375[iParam0 /*6*/] = iParam1;
}

bool func_877()//Position - 0x4E379
{
	if (!func_608(NETWORK::PARTICIPANT_ID(), 1))
	{
		if (func_2(1))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			__LIB_1__::func_950();
			func_879();
			func_878(0);
			func_181(1);
		}
	}
	return func_608(NETWORK::PARTICIPANT_ID(), 1);
}

void func_878(bool bParam0)//Position - 0x4E3B6
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { 0f, 0f, 0f };
	Var1 = { 0f, 0f, 0f };
	switch (Local_374.f_30)
	{
		case 1:
			Var0 = { 69.52588f, 16.9577f, 66.15456f };
			Var1 = { 76.43575f, 7.62953f, 69.70095f };
			break;
		case 3:
			Var0 = { -530.8117f, 94.6949f, 57.80532f };
			Var1 = { -521.83624f, 90.36131f, 61.84381f };
			break;
		case 9:
			Var0 = { 2683.8184f, 4313.2446f, 43.85195f };
			Var1 = { 2670.1147f, 4329.333f, 46.51589f };
			break;
	}
	if (!__LIB_0__::func_86(Var0) && !__LIB_0__::func_86(Var1))
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var1, bParam0, false);
	}
}

void func_879()//Position - 0x4E48C
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	Var0 = { 0f, 0f, 0f };
	Var1 = { 0f, 0f, 0f };
	fVar2 = 0f;
	iVar3 = func_884();
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		func_883(iVar4, &Var0, &fVar2);
		if (!__LIB_0__::func_86(Var0))
		{
			uLocal_372[iVar4] = __LIB_16__::func_622(Var0, fVar2);
		}
		iVar4++;
	}
	iVar3 = func_881();
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		func_880(iVar4, &Var0, &Var1);
		if (!__LIB_0__::func_86(Var0))
		{
			iLocal_373[iVar4] = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var1, false, true, true, true);
		}
		iVar4++;
	}
}

void func_880(int iParam0, var uParam1, var uParam2)//Position - 0x4E52E
{
	switch (Local_374.f_30)
	{
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 154.03734f, -1503.7117f, 27.14161f };
					*uParam2 = { 166.59758f, -1515.048f, 30.14161f };
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 2683.8184f, 4313.2446f, 43.85195f };
					*uParam2 = { 2670.1147f, 4329.333f, 46.51589f };
					break;
			}
			break;
	}
}

int func_881()//Position - 0x4E5BE
{
	switch (Local_374.f_30)
	{
		case 5:
		case 9:
			return 1;
		default:
	}
	return 0;
}

void func_883(int iParam0, var uParam1, float fParam2)//Position - 0x4E613
{
	switch (Local_374.f_30)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 922.61334f, 48.38918f, 79.63326f };
					*fParam2 = 13f;
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -1648.952f, -995.6995f, 11.767393f };
					*fParam2 = 10f;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 1168.3956f, -1347.4823f, 33.67137f };
					*fParam2 = 6.5f;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 150.6597f, -1035.004f, 28.090399f };
					*fParam2 = 6.5f;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -423.39124f, 6134.3774f, 30.627323f };
					*fParam2 = 8f;
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 2882.1396f, 4420.708f, 47.80934f };
					*fParam2 = 10f;
					break;
			}
			break;
	}
}

int func_884()//Position - 0x4E75D
{
	switch (Local_374.f_30)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 8:
		case 9:
			return 1;
		default:
	}
	return 0;
}

int func_886()//Position - 0x4E8A1
{
	return Local_374.f_0;
}

int func_887(int iParam0)//Position - 0x4E8AC
{
	return Local_375[iParam0 /*6*/];
}

int func_888(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x4E8BB
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	if (!__LIB_15__::func_415())
	{
		return 0;
	}
	if (iParam1 && !__LIB_2__::func_50())
	{
		return 0;
	}
	if (!__LIB_10__::func_332())
	{
		if (__LIB_12__::func_110())
		{
			if (__LIB_30__::func_417(1))
			{
				__LIB_15__::func_406();
			}
			__LIB_29__::func_175();
			return 0;
		}
		return 0;
	}
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
	switch (*uParam0)
	{
		case 0:
			__LIB_27__::func_866();
			__LIB_16__::func_250(&Global_1941652);
			__LIB_36__::func_139(&Global_1941652);
			if (__LIB_10__::func_843(&(Global_1941652.f_1)))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
			}
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 256, 0);
				MISC::SET_BIT(&(Global_2815059.f_5194), 2);
			}
			if (!__LIB_3__::func_505())
			{
				__LIB_5__::func_835();
				MISC::SET_BIT(&(Global_2815059.f_5194), 4);
			}
			if (!__LIB_3__::func_241())
			{
				__LIB_1__::func_92();
				MISC::SET_BIT(&(Global_2815059.f_5194), 3);
			}
			uParam0->f_1 = 0;
			uParam0->f_2 = 0;
			uParam0->f_3 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			iVar0 = __LIB_1__::func_360(11389, -1, 0);
			if (!BitTest(iVar0, 6))
			{
				MISC::SET_BIT(&iVar0, 6);
				__LIB_1__::func_354(11389, iVar0, -1, 1, 0);
			}
			else if (!BitTest(iVar0, 7))
			{
				MISC::SET_BIT(&iVar0, 7);
				__LIB_1__::func_354(11389, iVar0, -1, 1, 0);
			}
			else if (!BitTest(iVar0, 8))
			{
				MISC::SET_BIT(&iVar0, 8);
				MISC::SET_BIT(&(uParam0->f_2), 1);
				__LIB_1__::func_354(11389, iVar0, -1, 1, 0);
			}
			if (__LIB_0__::func_1("GB_SPEC_CON" /* GXT: Press ~INPUT_CONTEXT~ to spectate your Bodyguards. */))
			{
				HUD::CLEAR_HELP(true);
			}
			__LIB_1__::func_966(24);
			Global_1943929.f_4 = 2;
			*uParam0 = 1;
			break;
		case 1:
			if (BitTest(uParam0->f_2, 1) && __LIB_29__::func_856(0))
			{
				__LIB_1__::func_707("GB_SPEC_MENH" /* GXT: You can choose to spectate your Bodyguards in the VIP Abilities Interaction Menu */, -1);
				__LIB_16__::func_612(1);
				MISC::CLEAR_BIT(&(uParam0->f_2), 1);
			}
			if (!__LIB_10__::func_206(&(Global_1941652.f_1)) && __LIB_16__::func_254(5))
			{
				STREAMING::CLEAR_FOCUS();
				__LIB_11__::func_775(&Global_1941652, 4, 0, 8);
			}
			else
			{
				if (!BitTest(Global_2815059.f_5194, 2) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
				{
					__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 256, 0);
					MISC::SET_BIT(&(Global_2815059.f_5194), 2);
				}
				if (__LIB_7__::func_700(&(Global_1941652.f_1)) && __LIB_10__::func_208())
				{
					if (!__LIB_16__::func_254(5))
					{
						if (__LIB_10__::func_206(&(Global_1941652.f_1)))
						{
							__LIB_30__::func_808(uParam0, 0);
						}
					}
				}
			}
			if (__LIB_35__::func_558(uParam0))
			{
				__LIB_30__::func_808(uParam0, iParam2);
			}
			if (__LIB_7__::func_532(0, 1, 0))
			{
				__LIB_35__::func_564(bParam3);
			}
			break;
		case 2:
			if (!BitTest(uParam0->f_2, 3))
			{
				if ((CAM::IS_SCREEN_FADED_OUT() && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 99)
				{
					MISC::SET_BIT(&(uParam0->f_2), 3);
					__LIB_36__::func_75(&Global_1941652, 0);
					__LIB_0__::clearF_1Prop(&(uParam0->f_4));
					__LIB_0__::func_795(&(uParam0->f_4), 0, 0);
					STREAMING::SET_FOCUS_ENTITY(PLAYER::PLAYER_PED_ID());
				}
				else if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
				}
			}
			else if (__LIB_0__::func_86(uParam0->f_6) || func_5904(uParam0->f_10, 0, 0, 0, 0, 0, 0, 0, 1, 3000, 1, 1, 0, 0, 0, 0, 1, 0))
			{
				if (__LIB_0__::func_864(&(uParam0->f_4)))
				{
					if (!__LIB_0__::func_937(&(uParam0->f_4), iParam5, 0))
					{
						return 0;
					}
				}
				CAM::DO_SCREEN_FADE_IN(1000);
				__LIB_0__::clearF_1Prop(&(uParam0->f_4));
				uParam0->f_2 = 0;
				*uParam0 = 0;
				bVar2 = !__LIB_29__::func_174();
				bVar1 = __LIB_15__::func_415();
				func_5897();
				__LIB_29__::func_173();
				if (((__LIB_5__::func_185(PLAYER::PLAYER_ID()) != 153 && __LIB_5__::func_185(PLAYER::PLAYER_ID()) != 191) && !__LIB_30__::func_417(0)) && __LIB_2__::func_155(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_1__::func_707("GB_SPEC_NO" /* GXT: Not enough Bodyguards to continue spectating. */, -1);
					__LIB_16__::func_612(1);
				}
				if (bVar1)
				{
					__LIB_15__::func_577();
				}
				__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
				if (bVar2 && iParam4)
				{
					if (uParam0->f_3 != 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), uParam0->f_3, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						uParam0->f_3 = 0;
					}
				}
				uParam0->f_6 = { 0f, 0f, 0f };
				return 1;
			}
			break;
	}
	if (!BitTest(uParam0->f_2, 0))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			NETWORK::FADE_OUT_LOCAL_PLAYER(true);
			MISC::SET_BIT(&(uParam0->f_2), 0);
			uParam0->f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
			{
				uParam0->f_9 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_FADING(PLAYER::PLAYER_ID()) && !BitTest(uParam0->f_2, 2))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				return 0;
			}
			ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, false);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, false);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
		}
		MISC::SET_BIT(&(uParam0->f_2), 2);
	}
	if (*uParam0 != 2)
	{
		func_889(&Global_1941652);
	}
	return 0;
}

void func_889(var uParam0)//Position - 0x4ED94
{
	int iVar0;
	var uVar1;
	Global_2715699.f_2846.f_180 = uParam0->f_1.f_34;
	if ((__LIB_10__::func_388() == 3 || __LIB_10__::func_387() == 3) || (__LIB_1__::func_11() && !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0)))
	{
		return;
	}
	if (__LIB_7__::func_721(Global_4718592.f_116524))
	{
		if ((!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT())
		{
			if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_4()))
			{
				CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(__LIB_1__::func_4());
			}
		}
	}
	if (__LIB_10__::func_388() == 1)
	{
		if (__LIB_4__::func_860() && __LIB_0__::func_983())
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (__LIB_10__::func_386() == 1 || __LIB_10__::func_386() == 2)
				{
					CAM::DO_SCREEN_FADE_IN(250);
					__LIB_10__::func_385(0);
				}
			}
			return;
		}
	}
	if (!BitTest(uParam0->f_1, 13))
	{
		if (__LIB_2__::func_177())
		{
			if (__LIB_10__::func_197(&(uParam0->f_1)) != 0)
			{
				func_5883(uParam0, 1);
				MISC::SET_BIT(&(uParam0->f_1), 13);
			}
		}
	}
	if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		if (!__LIB_4__::func_934(PLAYER::PLAYER_ID(), 1))
		{
			if (__LIB_11__::func_680(PLAYER::PLAYER_ID(), 0))
			{
				__LIB_2__::func_346(PLAYER::PLAYER_ID(), 0);
			}
			if (!BitTest(Global_2621446, 9))
			{
				__LIB_5__::func_837();
			}
			__LIB_10__::func_384(&(uParam0->f_47));
		}
	}
	if (__LIB_10__::func_206(&(uParam0->f_1)))
	{
		__LIB_36__::func_251(uParam0);
		if (((__LIB_10__::func_383() && !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			__LIB_10__::func_944(&(uParam0->f_1), 0);
		}
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 11)
		{
			__LIB_10__::func_447(&(uParam0->f_1));
		}
		else if (BitTest(uParam0->f_1, 2))
		{
			__LIB_10__::func_380(&(uParam0->f_1));
		}
	}
	else
	{
		__LIB_11__::func_841(&(uParam0->f_1), 0);
		if (BitTest(uParam0->f_1, 2))
		{
			__LIB_10__::func_380(&(uParam0->f_1));
		}
	}
	if ((__LIB_10__::func_197(&(uParam0->f_1)) == 0 || __LIB_10__::func_197(&(uParam0->f_1)) == 1) || __LIB_10__::func_197(&(uParam0->f_1)) == 6)
	{
		if (BitTest(uParam0->f_1, 5))
		{
			MISC::CLEAR_BIT(&(uParam0->f_1), 5);
			MISC::CLEAR_BIT(&Global_2621446, 4);
		}
	}
	else
	{
		if (uParam0->f_1.f_35 == 3)
		{
			CAM::SET_CINEMATIC_NEWS_CHANNEL_ACTIVE_THIS_UPDATE();
		}
		if (__LIB_10__::func_197(&(uParam0->f_1)) == 3)
		{
			if (!BitTest(uParam0->f_1, 5))
			{
				MISC::SET_BIT(&(uParam0->f_1), 5);
				MISC::SET_BIT(&Global_2621446, 4);
			}
		}
	}
	if (((__LIB_10__::func_197(&(uParam0->f_1)) == 0 || __LIB_10__::func_197(&(uParam0->f_1)) == 4) || __LIB_10__::func_197(&(uParam0->f_1)) == 5) || __LIB_10__::func_197(&(uParam0->f_1)) == 6)
	{
		if (!BitTest(uParam0->f_1, 6))
		{
			MISC::SET_BIT(&(uParam0->f_1), 6);
		}
	}
	else
	{
		if (BitTest(uParam0->f_1, 6))
		{
			MISC::CLEAR_BIT(&(uParam0->f_1), 6);
		}
		func_1690(uParam0);
		__LIB_1__::func_405();
	}
	if (BitTest(uParam0->f_1, 14))
	{
		if (!Global_1931426)
		{
			__LIB_10__::func_370(&(uParam0->f_47));
		}
		MISC::CLEAR_BIT(&(uParam0->f_1), 14);
	}
	switch (__LIB_10__::func_197(&(uParam0->f_1)))
	{
		case 0:
			__LIB_10__::func_861(uParam0);
			break;
		case 1:
			__LIB_17__::func_849(uParam0);
			break;
		case 2:
			func_1678(uParam0);
			break;
		case 3:
			func_1643(uParam0);
			break;
		case 4:
			func_1608(uParam0);
			break;
		case 5:
			func_1352(uParam0);
			break;
		case 6:
			func_1282(uParam0);
			break;
	}
	if (__LIB_10__::func_333())
	{
		__LIB_36__::func_139(uParam0);
		MISC::SET_BIT(&(uParam0->f_47), 6);
		__LIB_10__::func_329();
		if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) || (__LIB_10__::func_206(&(uParam0->f_1)) && __LIB_7__::func_700(&(uParam0->f_1))))
		{
			if (!__LIB_10__::func_328(__LIB_1__::func_4()) || !__LIB_11__::func_782(&(uParam0->f_47), &iVar0, &uVar1, __LIB_1__::func_4()))
			{
				__LIB_36__::func_246(uParam0, 0, 1);
				if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
				{
					if (!__LIB_17__::func_848(uParam0, &iVar0, &uVar1, 0, 0, 0))
					{
						if (__LIB_10__::func_325())
						{
							__LIB_10__::func_324();
							if (!__LIB_0__::func_864(&(uParam0->f_2245)))
							{
								__LIB_0__::func_795(&(uParam0->f_2245), 0, 0);
							}
							else if (__LIB_0__::func_937(&(uParam0->f_2245), 10000, 0))
							{
								__LIB_15__::func_183();
							}
						}
						else if (__LIB_13__::func_569() && !__LIB_1__::func_623())
						{
							if (__LIB_10__::func_300())
							{
								if (!__LIB_0__::func_864(&(uParam0->f_2253)))
								{
									__LIB_0__::func_795(&(uParam0->f_2253), 0, 0);
								}
								else if (__LIB_0__::func_937(&(uParam0->f_2253), 5000, 0))
								{
									__LIB_11__::func_780(0);
									Global_2621446.f_81 = 3;
								}
							}
							else
							{
								__LIB_11__::func_780(0);
								Global_2621446.f_81 = 3;
							}
						}
					}
				}
			}
		}
	}
	__LIB_10__::func_931();
	__LIB_17__::func_862(uParam0);
	__LIB_36__::func_245(uParam0);
}

void func_1282(var uParam0)//Position - 0x5B200
{
	func_1324(uParam0);
	if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		if (uParam0->f_1.f_35 == 3)
		{
		}
		else if (__LIB_1__::func_826(PLAYER::PLAYER_ID()))
		{
		}
		else if (__LIB_1__::func_448(PLAYER::PLAYER_ID()) == 3 || Global_1574962)
		{
			NETWORK::NETWORK_SET_IGNORE_SPECTATOR_CHAT_LIMITS_SAME_TEAM(false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_4()))
	{
		if (!PED::IS_PED_INJURED(__LIB_1__::func_4()))
		{
			PED::SET_PED_LOD_MULTIPLIER(__LIB_1__::func_4(), 1f);
		}
	}
	if (!__LIB_2__::func_177() && !BitTest(Global_2621446, 13))
	{
		PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), false);
	}
	if (!BitTest(uParam0->f_1.f_2, 3) && (!__LIB_1__::func_11() || __LIB_0__::func_361(PLAYER::PLAYER_ID(), 0)))
	{
		if (!BitTest(uParam0->f_1.f_2, 0) || !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!__LIB_10__::func_889())
			{
				if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) || Global_2621446.f_69 == Global_2621446.f_69.f_1)
				{
					if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
				}
			}
		}
	}
	__LIB_15__::func_194(uParam0);
	__LIB_11__::func_920(&(uParam0->f_47));
	__LIB_15__::func_177(uParam0);
	__LIB_10__::func_338(&(uParam0->f_1));
	__LIB_10__::func_205();
	uParam0->f_1.f_4 = 0;
	HUD::UNLOCK_MINIMAP_POSITION();
	MISC::CLEAR_BIT(&(uParam0->f_47), 0);
	uParam0->f_1.f_26 = 0;
	uParam0->f_1.f_33 = 0;
	__LIB_10__::func_327(&(uParam0->f_1), 0);
	uParam0->f_1.f_27 = 0;
	uParam0->f_1.f_25 = 0;
	HUD::SET_MINIMAP_BLOCK_WAYPOINT(false);
	MISC::CLEAR_BIT(&(uParam0->f_1), 1);
	MISC::CLEAR_BIT(&(uParam0->f_1), 0);
	MISC::CLEAR_BIT(&(uParam0->f_1), 10);
	if (!BitTest(uParam0->f_1.f_2, 2))
	{
		if (!__LIB_10__::func_337())
		{
			NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(false);
		}
		__LIB_1__::func_36(0, 0, 1);
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
	__LIB_10__::func_887(&(uParam0->f_1));
	__LIB_10__::func_886();
	__LIB_10__::func_336();
	if (__LIB_10__::func_337())
	{
		__LIB_2__::func_263(1);
	}
	else
	{
		NETWORK::NETWORK_SET_NO_SPECTATOR_CHAT(false);
	}
	__LIB_10__::func_335(&(uParam0->f_1.f_7), 0);
	NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
	MISC::CLEAR_BIT(&Global_2621446, 5);
	MISC::CLEAR_BIT(&Global_2621446, 10);
	MISC::CLEAR_BIT(&Global_2621446, 4);
	MISC::CLEAR_BIT(&Global_2621446, 6);
	MISC::CLEAR_BIT(&Global_2621446, 14);
	MISC::CLEAR_BIT(&(uParam0->f_1), 12);
	MISC::CLEAR_BIT(&(uParam0->f_1), 14);
	MISC::CLEAR_BIT(&(uParam0->f_1), 9);
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 2)
	{
		__LIB_7__::func_695(&(uParam0->f_1), 0);
	}
	if (!BitTest(Global_2621446, 9))
	{
		__LIB_5__::func_837();
	}
	__LIB_10__::func_384(&(uParam0->f_47));
	if (BitTest(uParam0->f_1, 2))
	{
		__LIB_10__::func_380(&(uParam0->f_1));
	}
	if (!__LIB_10__::func_334(Global_4718592.f_168757))
	{
		Global_1836146 = 0;
	}
	if (!Global_1836610 && !__LIB_10__::func_227())
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	uParam0->f_1.f_1 = 0;
	uParam0->f_1.f_2 = 0;
	Global_2715699.f_2846.f_180 = 0;
	__LIB_13__::func_574();
	uParam0->f_47.f_2197 = 0;
	STREAMING::CLEAR_FOCUS();
	__LIB_7__::func_694(&(uParam0->f_1), 0);
}

void func_1324(var uParam0)//Position - 0x5BF12
{
	if (uParam0->f_2262 != -1)
	{
		if (__LIB_5__::func_374(PLAYER::PLAYER_ID(), uParam0->f_2262))
		{
			func_1325(uParam0->f_2262, 0);
		}
		uParam0->f_2262 = -1;
	}
}

void func_1325(int iParam0, bool bParam1)//Position - 0x5BF43
{
	if (bParam1)
	{
		if (!__LIB_3__::func_479(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0))
		{
			__LIB_7__::func_698(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0);
			if (__LIB_12__::func_48(iParam0))
			{
				__LIB_10__::func_976(iParam0, 1);
			}
		}
	}
	else if (__LIB_3__::func_479(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0))
	{
		__LIB_7__::func_696(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0);
	}
	if (iParam0 == 10)
	{
		func_1325(11, bParam1);
		func_1325(12, bParam1);
		func_1325(13, bParam1);
	}
	if (iParam0 == 36)
	{
		func_1325(37, bParam1);
		func_1325(38, bParam1);
		func_1325(39, bParam1);
		func_1325(40, bParam1);
		func_1325(41, bParam1);
	}
}

void func_1352(var uParam0)//Position - 0x65347
{
	if (func_1353(uParam0))
	{
		__LIB_7__::func_694(&(uParam0->f_1), 6);
	}
}

int func_1353(var uParam0)//Position - 0x65361
{
	if (!BitTest(uParam0->f_1, 11))
	{
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			MISC::SET_BIT(&(uParam0->f_1), 11);
		}
		else if (!__LIB_10__::func_889())
		{
			CAM::DO_SCREEN_FADE_IN(250);
			MISC::SET_BIT(&(uParam0->f_1), 11);
		}
	}
	if (func_1354(1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 11);
		return 1;
	}
	return 0;
}

int func_1354(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, float fParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14)//Position - 0x653CF
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	Global_2727793 = MISC::GET_GAME_TIMER();
	if (((((!__LIB_2__::func_179() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !DLC::GET_IS_LOADING_SCREEN_ACTIVE()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_2727896) && !__LIB_0__::func_628() == 63)
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
		return 0;
	}
	if (!STREAMING::IS_SAFE_TO_START_PLAYER_SWITCH())
	{
		func_1389();
		__LIB_5__::func_728(1, 0);
		MISC::PREVENT_ARREST_STATE_THIS_FRAME();
		if (bParam10)
		{
			__LIB_1__::func_211(0);
			__LIB_2__::func_408(0);
		}
		return 0;
	}
	if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_0__::func_81())
		{
			if (__LIB_0__::func_628() == 58)
			{
				__LIB_2__::func_178(1);
			}
			if (__LIB_2__::func_177())
			{
				if (BitTest(Global_2621446, 3))
				{
					MISC::CLEAR_BIT(&Global_2621446, 3);
				}
			}
			return 0;
		}
	}
	if (__LIB_0__::func_623() == 4)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() == 0)
		{
			__LIB_0__::func_986(0);
		}
	}
	if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_5__::func_728(1, 0);
		if (bParam10)
		{
			__LIB_1__::func_211(0);
			__LIB_2__::func_408(0);
		}
		return 0;
	}
	__LIB_1__::func_684();
	__LIB_7__::func_718();
	if (iParam9 == 0)
	{
	}
	if (!bParam11)
	{
		if (!__LIB_2__::func_176())
		{
			__LIB_2__::func_175();
		}
	}
	if (!__LIB_1__::func_584())
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE() == 1)
		{
			if (bParam1)
			{
				HUD::SET_FRONTEND_ACTIVE(false);
			}
		}
		if (Global_1585311)
		{
			if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
		}
		if (HUD::IS_ONLINE_POLICIES_MENU_ACTIVE() == 0)
		{
			if (HUD::GET_PAUSE_MENU_STATE() == 25)
			{
				HUD::CLOSE_SOCIAL_CLUB_MENU();
			}
		}
		if ((__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_3() == 0) && !__LIB_0__::func_490(CAM::GET_FINAL_RENDERED_CAM_COORD(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 10f, 0))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD(), false, false, false, false);
			bParam4 = true;
		}
		iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
		if (iVar0 != 0)
		{
			bParam4 = true;
			if (__LIB_1__::func_625())
			{
				bParam2 = false;
			}
		}
		if (Global_2725323)
		{
			if ((Global_2715699.f_6597 || __LIB_5__::func_253(-1046478848)) || __LIB_1__::func_35())
			{
				if (__LIB_6__::func_953(0))
				{
					bParam12 = true;
					if (__LIB_2__::func_174() > 800 || (__LIB_13__::func_566() && !__LIB_1__::func_683()))
					{
						if (__LIB_0__::func_893() && !__LIB_0__::func_983())
						{
							if (!CAM::IS_SCREEN_FADED_OUT())
							{
								if (!CAM::IS_SCREEN_FADING_OUT())
								{
									CAM::DO_SCREEN_FADE_OUT(800);
								}
							}
						}
					}
					__LIB_0__::func_982();
				}
			}
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && (((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19))
		{
			bParam4 = true;
			__LIB_2__::func_408(1);
			bParam2 = false;
		}
		if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
		{
			bParam4 = true;
		}
		if (CUTSCENE::IS_CUTSCENE_PLAYING() || CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			bParam4 = true;
		}
		if (bParam2 && !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_2__::func_448(1, 0, 1);
		}
		if (((__LIB_0__::func_893() && ((HUD::IS_PAUSE_MENU_ACTIVE() == 0 || bParam1 == 0) || (HUD::IS_SOCIAL_CLUB_ACTIVE() && HUD::IS_WARNING_MESSAGE_ACTIVE()))) && STREAMING::IS_SAFE_TO_START_PLAYER_SWITCH()) && __LIB_7__::func_717())
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (STREAMING::IS_SRL_LOADED())
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("frogger"));
					STREAMING::END_SRL();
				}
			}
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			HUD::CLEAR_PRINTS();
			iVar2 = 0;
			if (bParam4)
			{
				iVar2 = 1;
			}
			Var3 = { fParam5, fParam6, fParam7 };
			if (iParam3 == 3)
			{
				if (__LIB_0__::func_86(Var3))
				{
					iParam3 = 1;
				}
				else if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(Var1, Var3) != 3)
				{
					iParam3 = 1;
				}
			}
			else if (iParam3 == 2)
			{
				if (__LIB_0__::func_86(Var3))
				{
					iParam3 = 1;
				}
				else if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(Var1, Var3) != 2 || STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(Var1, Var3) != 3)
				{
					iParam3 = 1;
				}
			}
			GRAPHICS::DONT_RENDER_IN_GAME_UI(true);
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			if (bParam12)
			{
				GRAPHICS::ANIMPOSTFX_STOP_ALL();
			}
			__LIB_2__::func_173();
			__LIB_1__::func_618();
			if (__LIB_1__::func_81())
			{
				if (__LIB_2__::func_172())
				{
					iVar2 = 1;
					iVar2 += 32;
					iVar2 += 16384;
					STREAMING::SWITCH_TO_MULTI_FIRSTPART(Global_1577841, iVar2, __LIB_0__::func_109());
				}
				else
				{
					return 0;
				}
			}
			else if (bParam0)
			{
				if (iParam13 || __LIB_1__::func_625())
				{
					STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 128 | 16384 || iParam14), iParam3);
				}
				else
				{
					STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 128 || iParam14), iParam3);
				}
			}
			else if (iParam13 || __LIB_1__::func_625())
			{
				STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 16384 || iParam14), iParam3);
			}
			else
			{
				STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 || iParam14), iParam3);
			}
			StringCopy(&Global_2725371, "", 32);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					StringCopy(&Global_2725371, AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			__LIB_0__::func_986(1);
			HUD::SET_BIGMAP_ACTIVE(false, false);
			if (bParam2 && !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
			{
				__LIB_2__::func_448(1, 0, 1);
			}
		}
		if (__LIB_0__::func_623() == 1)
		{
			if (__LIB_1__::func_81())
			{
				if (STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED())
				{
					if (Global_2725330)
					{
						Global_2725330 = 0;
					}
					if (Global_2815059.f_6776 != -1)
					{
						__LIB_1__::func_622();
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_1577841))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1577841, false, true);
						PED::DELETE_PED(&Global_1577841);
					}
					__LIB_2__::func_448(0, 0, 1);
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						if (__LIB_0__::func_625())
						{
							GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
						}
						CAM::DO_SCREEN_FADE_IN(800);
					}
					__LIB_0__::func_986(2);
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() > 2)
					{
						__LIB_2__::func_409();
						__LIB_2__::func_448(0, 0, 1);
						if (((__LIB_1__::func_649() && LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE() == 0) && NETWORK::GET_IS_LAUNCH_FROM_LIVE_AREA() == 0) && NETWORK::GET_IS_LIVE_AREA_LAUNCH_WITH_CONTENT() == 0)
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(0);
							}
						}
					}
				}
				else if (bParam2)
				{
					if (bParam8)
					{
						__LIB_2__::func_409();
					}
					__LIB_2__::func_448(0, 0, 1);
				}
			}
			if (STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED())
			{
				if (bParam8 == 0 || __LIB_2__::func_409())
				{
					if (bParam2)
					{
						if (bParam8)
						{
							__LIB_2__::func_409();
						}
						__LIB_2__::func_448(0, 0, 1);
					}
					__LIB_0__::func_986(2);
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_1389()//Position - 0x66404
{
	int iVar0;
	struct<62> Var1;
	int iVar2;
	if (PLAYER::PLAYER_ID() != __LIB_0__::getMinusOneOrNull())
	{
		if (__LIB_1__::func_832(PLAYER::PLAYER_ID()))
		{
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_579 = 0;
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			PED::RESET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), 0.25f);
			PED::RESET_PED_STRAFE_CLIPSET(PLAYER::PLAYER_PED_ID());
			WEAPON::SET_WEAPON_ANIMATION_OVERRIDE(PLAYER::PLAYER_PED_ID(), joaat("DEFAULT"));
			iVar0 = 2600;
			PED::SET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), iVar0);
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar0, 0);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(PLAYER::PLAYER_PED_ID(), false);
			GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(PLAYER::PLAYER_PED_ID(), "", "");
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
			PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(PLAYER::PLAYER_PED_ID());
			PED::CLEAR_PED_STORED_HAT_PROP(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 0, 0, false);
			PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
			if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
			}
			PED::CLEAR_ALL_PED_PROPS(PLAYER::PLAYER_PED_ID());
			Var1 = 12;
			Var1.f_13 = 12;
			Var1.f_26 = 12;
			Var1.f_39 = 9;
			Var1.f_49 = 9;
			iVar2 = -1;
			Var1[0] = __LIB_0__::func_253(387, iVar2);
			Var1[1] = __LIB_0__::func_253(388, iVar2);
			Var1[2] = __LIB_0__::func_253(389, iVar2);
			Var1[3] = __LIB_0__::func_253(390, iVar2);
			Var1[4] = __LIB_0__::func_253(391, iVar2);
			Var1[5] = __LIB_0__::func_253(392, iVar2);
			Var1[6] = __LIB_0__::func_253(393, iVar2);
			Var1[7] = __LIB_0__::func_253(394, iVar2);
			Var1[8] = __LIB_0__::func_253(395, iVar2);
			Var1[9] = __LIB_0__::func_253(396, iVar2);
			Var1[10] = __LIB_0__::func_253(397, iVar2);
			Var1[11] = __LIB_0__::func_253(398, iVar2);
			Var1.f_13[0] = __LIB_0__::func_253(399, iVar2);
			Var1.f_13[1] = (__LIB_0__::func_253(400, iVar2) + __LIB_0__::func_253(18092, iVar2));
			Var1.f_13[2] = __LIB_0__::func_253(401, iVar2);
			Var1.f_13[3] = (__LIB_0__::func_253(402, iVar2) + __LIB_0__::func_253(18093, iVar2));
			Var1.f_13[4] = __LIB_0__::func_253(403, iVar2);
			Var1.f_13[5] = __LIB_0__::func_253(404, iVar2);
			Var1.f_13[6] = __LIB_0__::func_253(405, iVar2);
			Var1.f_13[7] = __LIB_0__::func_253(406, iVar2);
			Var1.f_13[8] = (__LIB_0__::func_253(407, iVar2) + __LIB_0__::func_253(18094, iVar2));
			Var1.f_13[9] = __LIB_0__::func_253(408, iVar2);
			Var1.f_13[10] = __LIB_0__::func_253(409, iVar2);
			Var1.f_13[11] = (__LIB_0__::func_253(410, iVar2) + __LIB_0__::func_253(18095, iVar2));
			Var1.f_26[0] = __LIB_0__::func_253(411, iVar2);
			Var1.f_26[1] = __LIB_0__::func_253(412, iVar2);
			Var1.f_26[2] = __LIB_0__::func_253(413, iVar2);
			Var1.f_26[3] = __LIB_0__::func_253(414, iVar2);
			Var1.f_26[4] = __LIB_0__::func_253(415, iVar2);
			Var1.f_26[5] = __LIB_0__::func_253(416, iVar2);
			Var1.f_26[6] = __LIB_0__::func_253(417, iVar2);
			Var1.f_26[7] = __LIB_0__::func_253(418, iVar2);
			Var1.f_26[8] = __LIB_0__::func_253(419, iVar2);
			Var1.f_26[9] = __LIB_0__::func_253(420, iVar2);
			Var1.f_26[10] = __LIB_0__::func_253(421, iVar2);
			Var1.f_26[11] = __LIB_0__::func_253(422, iVar2);
			Var1.f_39[0] = __LIB_0__::func_253(423, iVar2);
			Var1.f_39[1] = __LIB_0__::func_253(424, iVar2);
			Var1.f_39[2] = __LIB_0__::func_253(425, iVar2);
			Var1.f_39[3] = __LIB_0__::func_253(426, iVar2);
			Var1.f_39[4] = __LIB_0__::func_253(427, iVar2);
			Var1.f_39[5] = __LIB_0__::func_253(428, iVar2);
			Var1.f_39[6] = __LIB_0__::func_253(429, iVar2);
			Var1.f_39[7] = __LIB_0__::func_253(430, iVar2);
			Var1.f_39[8] = __LIB_0__::func_253(431, iVar2);
			Var1.f_49[0] = __LIB_0__::func_253(432, iVar2);
			Var1.f_49[1] = __LIB_0__::func_253(433, iVar2);
			Var1.f_49[2] = __LIB_0__::func_253(434, iVar2);
			Var1.f_49[3] = __LIB_0__::func_253(435, iVar2);
			Var1.f_49[4] = __LIB_0__::func_253(436, iVar2);
			Var1.f_49[5] = __LIB_0__::func_253(437, iVar2);
			Var1.f_49[6] = __LIB_0__::func_253(438, iVar2);
			Var1.f_49[7] = __LIB_0__::func_253(439, iVar2);
			Var1.f_49[8] = __LIB_0__::func_253(440, iVar2);
			if (__LIB_1__::func_342(161, -1))
			{
				Var1.f_59 = __LIB_1__::func_360(2053, iVar2, 0);
			}
			else
			{
				Var1.f_59 = __LIB_1__::func_360(753, iVar2, 0);
			}
			Var1.f_60 = __LIB_1__::func_360(754, iVar2, 0);
			Var1.f_61 = __LIB_1__::func_360(755, iVar2, 0);
			func_1390(PLAYER::PLAYER_PED_ID(), &Var1, 0, 0, 1, 1);
		}
	}
}

void func_1390(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x668DC
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
		iVar0 = __LIB_0__::func_216(iParam0);
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
		if (__LIB_0__::func_43(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_1603(iParam0, iVar1, &iVar2, 0))
			{
				func_1588(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_1529(iParam0, iVar1, &iVar2))
			{
				func_1588(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_1527(iParam0);
			__LIB_1__::func_354(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_1__::func_354(755, uParam1->f_61, Global_78127, 1, 0);
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
			func_1394(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_1394(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_1394(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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
			__LIB_1__::func_354(753, iVar9, Global_78127, 1, 0);
			__LIB_1__::func_354(2053, iVar9, Global_78127, 1, 0);
			__LIB_1__::func_348(161, 1, -1, 1);
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

int func_1394(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x67039
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
		Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
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
			func_1518(iVar5, iParam1, iParam2, 1);
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
					Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 10, 0, -1) };
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
						func_1518(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_1518(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_1394(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_1518(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iVar0, func_1508(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_1394(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_2__::func_979();
			if (iVar17 != -1)
			{
				__LIB_2__::func_978(iVar17, 0, iParam10);
			}
			func_1503(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_0__::func_466(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_1518(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_5__::func_129(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_1394(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1518(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_1394(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_1494(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1394(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1394(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_1491(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_5__::func_129(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_1394(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_3__::func_408(iParam0, iParam2);
							iVar31 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_1394(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_1394(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar32, -1) };
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
								func_1394(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_3__::func_408(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
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
								func_1394(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_1394(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_1394(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_3__::func_303(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_1503(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1491(iVar5, func_1508(iParam0, 8, -1), iParam2, func_1508(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_1__::func_360(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_1__::func_360(2160, iParam10, 0);
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
				func_1443(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_1491(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_5__::func_129(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_1503(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_303(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1491(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
				iVar52 = __LIB_1__::func_360(2100, iParam10, 0);
				iVar53 = __LIB_1__::func_360(2101, iParam10, 0);
				iVar54 = __LIB_1__::func_360(2102, iParam10, 0);
				fVar55 = __LIB_1__::func_680(135, iParam10);
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
				__LIB_2__::func_996(iParam0, iParam10);
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
						func_1394(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_1394(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1491(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_1491(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_5__::func_129(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1394(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_1491(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1394(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_1416(iParam0, 9, iVar63))
						{
							func_1394(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_1394(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_1394(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_1__::func_360(2042, -1, 0);
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
						func_1394(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_1508(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_1508(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_1394(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_1394(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1394(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1394(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1394(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1394(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1394(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1394(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1394(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1394(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_1494(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1394(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_1394(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_1395(iParam0, &uVar4))
		{
			func_1394(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_1394(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_1394(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_1394(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_1508(iParam0, 3, -1), iVar10);
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
				func_1394(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_1395(int iParam0, var uParam1)//Position - 0x68EE5
{
	int iVar0;
	int iVar1;
	*uParam1 = func_1508(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_1__::func_360(754, Global_78127, 0) != -99 && __LIB_0__::func_438())
	{
		if (__LIB_0__::func_236() == 4)
		{
			return 1;
		}
		if (__LIB_1__::func_360(754, Global_78127, 0) == 0 && __LIB_1__::func_360(755, Global_78127, 0) == 0)
		{
			if (__LIB_1__::func_342(161, Global_78127))
			{
				if (__LIB_1__::func_360(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_1__::func_360(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_1__::func_360(754, Global_78127, 0);
		iVar1 = __LIB_1__::func_360(755, Global_78127, 0);
		if (!func_1416(iParam0, iVar1, iVar0))
		{
			if (__LIB_1__::func_342(161, Global_78127))
			{
				*uParam1 = __LIB_1__::func_360(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_1__::func_360(753, Global_78127, 0);
			}
			__LIB_1__::func_354(754, -99, Global_78127, 1, 0);
			__LIB_1__::func_354(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_1416(int iParam0, int iParam1, int iParam2)//Position - 0x6D1D4
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
	Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar0, iParam1, iParam2, -1) };
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
				if (!func_1416(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_1416(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_310(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_1416(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_3__::func_310(iVar0, iVar4, iVar1, -1) };
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
			if (__LIB_1__::func_360(1759, Global_78127, 0) != uVar8[10])
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
			if (!func_1416(iParam0, 14, uVar11[iVar10]))
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
						return func_1416(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_1416(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_1443(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x74F17
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_3__::func_222(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_0__::func_450(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_2__::func_978(iVar1, 1, iParam2);
	}
	func_1444(iParam0, bParam3, 0, -1);
}

void func_1444(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x74F65
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
		bVar3 = func_1474(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_1467(iParam0, iParam3);
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
			if (__LIB_2__::func_761(iVar6, iVar0))
			{
				if (__LIB_0__::func_445(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_2__::func_998(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_2__::func_761(123, iVar0))
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
					if (__LIB_2__::func_761(iVar10, iVar0))
					{
						if (__LIB_2__::func_998(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_3__::func_228(Var9.f_2, Var9.f_3, iVar10))
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

int func_1467(int iParam0, int iParam1)//Position - 0x83FD5
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
			iVar2 = __LIB_1__::func_360(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_1508(iParam0, 11, -1);
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
			iVar2 = __LIB_1__::func_360(1759, -1, 0);
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
				iVar5 = func_1508(iParam0, 11, -1);
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

int func_1474(int iParam0, bool bParam1)//Position - 0x843E4
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
							iVar2 = __LIB_2__::func_999(joaat("MP_M_Freemode_01"), 11, func_1508(iParam0, 11, -1), 0);
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
						if (__LIB_2__::func_761(13, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(14, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(15, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(16, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(71, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(72, -1))
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
						iVar3 = func_1508(iParam0, 11, -1);
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
						iVar5 = func_1508(iParam0, 8, -1);
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
							iVar7 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_1508(iParam0, 11, -1), 0);
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
						iVar8 = func_1508(iParam0, 11, -1);
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
							iVar10 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_1508(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_1508(iParam0, 11, -1), 0);
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
						iVar12 = func_1508(iParam0, 8, -1);
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

int func_1491(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8D1B7
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
					iVar0 = func_1491(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_1491(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_1494(int iParam0)//Position - 0x8E66C
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
		if (!func_1499(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_1499(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_1499(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8F036
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_1508(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1503(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x91A1F
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_1527(iParam0))
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
			__LIB_3__::func_222(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_3__::func_223(iVar0, iParam2, 13) && !__LIB_3__::func_223(iVar0, iParam2, 14)) && !__LIB_3__::func_223(iVar0, iParam2, 15)) && !__LIB_3__::func_223(iVar0, iParam2, 16)) && !__LIB_3__::func_223(iVar0, iParam2, 71)) && !__LIB_3__::func_223(iVar0, iParam2, 72))
				{
					__LIB_3__::func_222(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_2__::func_999(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_2__::func_977(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_2__::func_978(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_1508(int iParam0, int iParam1, int iParam2)//Position - 0x91CBF
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
				if (func_1416(iParam0, iParam1, iVar0))
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
				if (func_1416(iParam0, iParam1, iVar1))
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

void func_1518(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x94A35
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
		if (Global_78127 != __LIB_0__::getGlobal_1574918() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_3__::func_310(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
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
							__LIB_2__::func_411(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_1518(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_1518(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_1518(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_1__::func_360(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_1__::func_354(iVar6, iVar7, Global_78127, 1, 0);
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
							func_1518(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_1518(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_1518(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_1518(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_1518(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_1518(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_1518(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_1518(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_1518(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_1518(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_1518(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_1518(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_1518(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_310(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1518(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_1518(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1518(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_1527(int iParam0)//Position - 0x96D26
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_3__::func_140(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_1508(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_3__::func_140(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_1508(iParam0, 11, -1);
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

int func_1529(int iParam0, int iParam1, int iParam2)//Position - 0x97080
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_1530(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_1530(int iParam0, int iParam1, int iParam2)//Position - 0x9710C
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
	Global_78130[1 /*14*/] = { __LIB_13__::func_735(iVar0, iParam1, iParam2, -1) };
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
				if (!func_1530(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_1530(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_735(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_1530(iParam0, 14, iVar4))
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
						Global_78130[2 /*14*/] = { __LIB_13__::func_735(iVar0, iVar2, iVar1, -1) };
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
			if (!func_1530(iParam0, 14, uVar8[iVar7]))
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

int func_1588(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0xAA07F
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
		Global_78130[1 /*14*/] = { __LIB_13__::func_735(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_3__::func_367(iParam1);
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
				Global_78130[1 /*14*/] = { __LIB_13__::func_735(iVar10, iVar0, uVar11[iVar0], -1) };
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
							Global_78130[1 /*14*/] = { __LIB_13__::func_735(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_3__::func_367(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_21__::func_138(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_1588(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						__LIB_3__::func_367(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_21__::func_138(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_1588(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_735(iVar10, iVar0, func_1592(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_1603(iParam0, iVar10, &iVar4, 1))
							{
								func_1588(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_1588(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_13__::func_735(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_1588(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_735(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_1588(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_735(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_1588(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_735(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_1588(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_735(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_1588(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
			Global_78130[1 /*14*/] = { __LIB_13__::func_735(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_3__::func_367(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_21__::func_138(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_1588(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_3__::func_367(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_21__::func_138(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_1588(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = __LIB_21__::func_138(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_1588(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_18__::func_679(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_1603(iParam0, iVar10, &iVar4, 0))
		{
			func_1588(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_1529(iParam0, iVar10, &iVar4))
		{
			func_1588(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_1592(int iParam0, int iParam1, int iParam2)//Position - 0xAAA1F
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
				if (func_1530(iParam0, iParam1, iVar0))
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
				if (func_1530(iParam0, iParam1, iVar1))
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

int func_1603(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xAC6DD
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_1530(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

void func_1608(var uParam0)//Position - 0xAC7B3
{
	if (__LIB_1__::func_711() != PLAYER::PLAYER_PED_ID())
	{
		__LIB_10__::func_909(uParam0, PLAYER::PLAYER_PED_ID());
		__LIB_10__::func_327(&(uParam0->f_1), 1);
	}
	if (func_1609(uParam0, 0, 1))
	{
		__LIB_7__::func_694(&(uParam0->f_1), 6);
	}
}

int func_1609(var uParam0, bool bParam1, bool bParam2)//Position - 0xAC7ED
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	if (__LIB_10__::func_224(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (((__LIB_1__::func_711() != -1 && ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_711())) && (!bParam1 || __LIB_15__::func_488(uParam0, __LIB_1__::func_711(), 1))) && !__LIB_10__::func_224(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711())))
	{
		iVar1 = __LIB_1__::func_711();
	}
	else if (__LIB_15__::func_169(uParam0, 0))
	{
		__LIB_36__::func_139(uParam0);
		if (__LIB_17__::func_848(uParam0, &iVar6, &iVar7, 0, 1, 1))
		{
			__LIB_10__::func_909(uParam0, __LIB_10__::func_925(&(uParam0->f_47), iVar6, iVar7));
			__LIB_15__::func_492(uParam0, iVar6, iVar7);
			__LIB_9__::func_819(&(uParam0->f_1), 0);
		}
		else if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			if (__LIB_13__::func_569())
			{
				__LIB_11__::func_780(0);
				Global_2621446.f_81 = 3;
			}
		}
		else if (__LIB_0__::func_80())
		{
			if (Global_1574667)
			{
				if (__LIB_10__::func_860())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					MISC::SET_BIT(&(Global_2621446.f_1), 0);
					NETWORK::NETWORK_BAIL(15, 0, 0);
					Global_2621446.f_81 = 3;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (uParam0->f_1.f_34)
		{
			switch (__LIB_1__::func_286(&(uParam0->f_1)))
			{
				case 0:
					uParam0->f_1.f_6 = 0;
					if (uParam0->f_1.f_35 == 3)
					{
						uParam0->f_1.f_5 = 10000;
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (PED::IS_PED_INJURED(iVar1))
						{
						}
						if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_4()) && __LIB_1__::func_4() != iVar1)
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(__LIB_1__::func_4(), false) };
						}
						else
						{
							Var4 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						}
						fVar3 = SYSTEM::VDIST2(Var4, ENTITY::GET_ENTITY_COORDS(iVar1, false));
						if ((__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && __LIB_10__::func_355(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_2__::func_51()), 0))
						{
							uParam0->f_1.f_5 = 0;
							uParam0->f_1.f_6 = 1;
						}
						else if (((uParam0->f_1.f_4 && !__LIB_10__::func_354(&(uParam0->f_1))) && fVar3 < 2500f) && !__LIB_7__::func_721(Global_4718592.f_116524))
						{
							uParam0->f_1.f_5 = 0;
							uParam0->f_1.f_6 = 1;
						}
						else if ((fVar3 < 2500f && __LIB_10__::func_227()) && __LIB_7__::func_709(Global_4718592.f_116524))
						{
							uParam0->f_1.f_5 = 100;
						}
						else if ((fVar3 < 2500f && __LIB_10__::func_227()) && (__LIB_8__::func_875(Global_4718592.f_168757) || Global_2815059.f_6749))
						{
							uParam0->f_1.f_5 = 100;
						}
						else if (fVar3 < 90000f)
						{
							uParam0->f_1.f_5 = 3000;
						}
						else if (__LIB_8__::func_875(Global_4718592.f_168757) || Global_2815059.f_6749)
						{
							uParam0->f_1.f_5 = 100;
						}
						else
						{
							uParam0->f_1.f_5 = 8000;
						}
					}
					else
					{
						uParam0->f_1.f_5 = 8000;
						if (__LIB_8__::func_875(Global_4718592.f_168757) || Global_2815059.f_6749)
						{
							uParam0->f_1.f_5 = 100;
						}
					}
					__LIB_9__::func_819(&(uParam0->f_1), 1);
					break;
				case 1:
					if (__LIB_10__::func_221(Global_4718592.f_168757))
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
						HUD::THEFEED_FLUSH_QUEUE();
					}
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if ((!CAM::IS_SCREEN_FADED_OUT() && Global_2715699.f_2846.f_85 == 0) && uParam0->f_1.f_5 > 0)
					{
						if (!CAM::IS_SCREEN_FADING_OUT())
						{
							__LIB_15__::func_175(uParam0);
							if ((!__LIB_10__::func_889() && !BitTest(uParam0->f_1.f_1, 4)) && !__LIB_10__::func_325())
							{
								if (GRAPHICS::GET_TOGGLE_PAUSED_RENDERPHASES_STATUS() == 1)
								{
									CAM::DO_SCREEN_FADE_OUT(250);
								}
								else
								{
									__LIB_15__::func_175(uParam0);
									__LIB_9__::func_819(&(uParam0->f_1), 2);
								}
							}
							else
							{
								__LIB_15__::func_175(uParam0);
								__LIB_9__::func_819(&(uParam0->f_1), 2);
							}
						}
					}
					else
					{
						__LIB_9__::func_819(&(uParam0->f_1), 2);
					}
					break;
				case 2:
					__LIB_15__::func_491();
					__LIB_15__::func_177(uParam0);
					__LIB_1__::func_292();
					if (!Global_1931426)
					{
						__LIB_13__::func_574();
					}
					if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) || !__LIB_10__::func_355(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_2__::func_51()), 0))
					{
						if (!__LIB_10__::func_224(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_2__::func_51())))
						{
							__LIB_35__::func_574(1, 1);
						}
					}
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (PED::IS_PED_INJURED(iVar1) || !PED::IS_PED_INJURED(iVar1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_4()))
							{
								if (!PED::IS_PED_INJURED(__LIB_1__::func_4()))
								{
									PED::SET_PED_LOD_MULTIPLIER(__LIB_1__::func_4(), 1f);
								}
							}
							if (!__LIB_10__::func_325())
							{
								__LIB_1__::func_36(1, iVar1, 1);
							}
						}
						if (iVar1 == PLAYER::PLAYER_PED_ID())
						{
							__LIB_10__::func_335(&(uParam0->f_1.f_7), 0);
						}
						else
						{
							__LIB_10__::func_352(&(uParam0->f_1.f_7), 0);
						}
						if (Global_2715699.f_2846.f_26)
						{
							if (CAM::DOES_CAM_EXIST(Global_2715699.f_2846.f_20))
							{
								if (iVar1 == PLAYER::PLAYER_PED_ID())
								{
									MISC::CLEAR_BIT(&Global_2621446, 10);
									if (!BitTest(Global_2621446, 18))
									{
										HUD::DISPLAY_RADAR(false);
									}
								}
								else
								{
									MISC::SET_BIT(&Global_2621446, 10);
									if (!BitTest(Global_2621446, 18) && __LIB_5__::func_839(&(uParam0->f_1)) != 3)
									{
										HUD::DISPLAY_RADAR(true);
									}
								}
							}
						}
						if ((uParam0->f_1.f_5 > 0 || uParam0->f_1.f_6) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							if (uParam0->f_1.f_44 < 5 && !STREAMING::IS_ENTITY_FOCUS(PLAYER::PLAYER_PED_ID()))
							{
								uParam0->f_1.f_44++;
								return 0;
							}
							uParam0->f_1.f_44 = 0;
							func_1690(uParam0);
							if (__LIB_10__::func_354(&(uParam0->f_1)))
							{
								uParam0->f_1.f_30 = { CAM::GET_CAM_COORD(uParam0->f_1.f_39) };
							}
							else
							{
								uParam0->f_1.f_30 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
								if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != __LIB_0__::getMinusOneOrNull())
								{
								}
							}
							if (Global_2621443 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
							{
								Var5 = { uParam0->f_1.f_30 };
								Var5.f_2 = (Var5.f_2 + 25f);
								if ((((__LIB_5__::func_839(&(uParam0->f_1)) != 5 && __LIB_5__::func_839(&(uParam0->f_1)) != 3) && __LIB_5__::func_839(&(uParam0->f_1)) != 4) && !BitTest(Global_2621446, 16)) && MISC::ABSF(Var5.f_2) < 2600f)
								{
									if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
									{
										if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
										{
											ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
											PED::SET_PED_HEATSCALE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0f);
											return 0;
										}
									}
									if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
									{
										ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var5, false, true, false, false);
										ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, false);
										ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
									}
								}
							}
							if (__LIB_10__::func_354(&(uParam0->f_1)))
							{
								if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
								{
									STREAMING::SET_FOCUS_POS_AND_VEL(uParam0->f_1.f_30, 0f, 0f, 0f);
								}
							}
							else if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
							{
								STREAMING::SET_FOCUS_ENTITY(iVar1);
							}
							if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
							{
								if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
								{
									STREAMING::NEW_LOAD_SCENE_START_SPHERE(uParam0->f_1.f_30, 50f, 0);
								}
							}
							MISC::SET_BIT(&(uParam0->f_1), 10);
						}
						else
						{
							uParam0->f_1.f_30 = { 0f, 0f, 0f };
							MISC::CLEAR_BIT(&(uParam0->f_1), 10);
						}
					}
					__LIB_15__::func_184(uParam0);
					MISC::SET_BIT(&(uParam0->f_47), 6);
					uParam0->f_1.f_24 = NETWORK::GET_NETWORK_TIME();
					__LIB_10__::func_351(uParam0);
					__LIB_0__::clearF_1Prop(&(uParam0->f_2257));
					__LIB_9__::func_819(&(uParam0->f_1), 3);
					break;
				case 3:
					bVar0 = false;
					if (BitTest(uParam0->f_1, 10))
					{
						if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED())
						{
							bVar0 = true;
							if (PED::IS_PED_A_PLAYER(iVar1))
							{
								if (PLAYER::IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1)))
								{
									bVar0 = false;
								}
							}
						}
						else if (!__LIB_10__::func_354(&(uParam0->f_1)))
						{
							if (ENTITY::IS_ENTITY_DEAD(iVar1, false))
							{
							}
							if (SYSTEM::VDIST2(uParam0->f_1.f_30, ENTITY::GET_ENTITY_COORDS(iVar1, false)) > 2500f)
							{
								STREAMING::NEW_LOAD_SCENE_STOP();
								MISC::CLEAR_BIT(&(uParam0->f_1), 10);
								bVar0 = true;
								if (__LIB_11__::func_725(PLAYER::PLAYER_ID()))
								{
									bVar0 = false;
								}
							}
							if (ENTITY::GET_ENTITY_SPEED(iVar1) > 2f)
							{
								STREAMING::NEW_LOAD_SCENE_STOP();
								MISC::CLEAR_BIT(&(uParam0->f_1), 10);
								bVar0 = false;
								__LIB_0__::clearF_1Prop(&(uParam0->f_2257));
								__LIB_0__::func_795(&(uParam0->f_2257), 0, 0);
							}
							if (__LIB_0__::func_864(&(uParam0->f_2257)))
							{
								if (!__LIB_0__::func_937(&(uParam0->f_2257), 6000, 0))
								{
									return 0;
								}
								else
								{
									bVar0 = true;
								}
							}
						}
					}
					if (!bVar0)
					{
						if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_1.f_24) > uParam0->f_1.f_5)
						{
							bVar0 = true;
						}
					}
					if (__LIB_10__::func_859(iVar2))
					{
						bVar0 = false;
					}
					iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
					if (iVar2 != __LIB_0__::getMinusOneOrNull())
					{
						if (__LIB_1__::func_693(iVar2, 0, 1))
						{
							if (__LIB_1__::func_20(iVar2))
							{
								if (__LIB_3__::func_492(iVar2))
								{
									if (__LIB_0__::func_983())
									{
										if (!__LIB_1__::func_117(109))
										{
											if (__LIB_1__::func_19() == 6)
											{
												if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
												{
													CAM::DO_SCREEN_FADE_IN(500);
												}
											}
											bVar0 = false;
										}
									}
								}
							}
						}
					}
					if (bVar0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar1))
						{
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									PED::SET_PED_LOD_MULTIPLIER(iVar1, 2.5f);
								}
							}
						}
						if (!BitTest(uParam0->f_1, 12))
						{
							if (((uParam0->f_1.f_35 != 3 && uParam0->f_1.f_35 != 5) && uParam0->f_1.f_35 != 4) && !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
							{
								MISC::SET_BIT(&(uParam0->f_1), 14);
							}
							MISC::SET_BIT(&(uParam0->f_1), 12);
						}
						STREAMING::NEW_LOAD_SCENE_STOP();
						GRAPHICS::DONT_RENDER_IN_GAME_UI(false);
						__LIB_0__::clearF_1Prop(&(uParam0->f_2257));
						__LIB_9__::func_819(&(uParam0->f_1), 4);
					}
					__LIB_15__::func_184(uParam0);
					break;
				case 4:
					__LIB_15__::func_184(uParam0);
					if (BitTest(uParam0->f_47, 15))
					{
						if (__LIB_0__::func_983() || __LIB_15__::func_174())
						{
							MISC::CLEAR_BIT(&(uParam0->f_47), 15);
						}
					}
					if (bParam2 && PED::IS_PED_INJURED(iVar1))
					{
						__LIB_9__::func_819(&(uParam0->f_1), 5);
					}
					else if (!CAM::IS_SCREEN_FADED_IN())
					{
						if (!BitTest(uParam0->f_47, 15))
						{
							if (!CAM::IS_SCREEN_FADING_IN())
							{
								if (!__LIB_10__::func_889() && !__LIB_10__::func_350(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), Global_2815059.f_6749))
								{
									if (__LIB_0__::func_983() || __LIB_15__::func_174())
									{
										CAM::DO_SCREEN_FADE_IN(250);
									}
									else
									{
										MISC::SET_BIT(&(uParam0->f_47), 15);
									}
									__LIB_0__::clearF_1Prop(&(uParam0->f_47.f_2186));
									HUD::BUSYSPINNER_OFF();
									PAD::SET_CONTROL_VALUE_NEXT_FRAME(0 /*PLAYER_CONTROL*/, 98 /*INPUT_VEH_CINEMATIC_LR*/, 1f);
								}
								else
								{
									__LIB_9__::func_819(&(uParam0->f_1), 5);
								}
							}
						}
						else
						{
							__LIB_9__::func_819(&(uParam0->f_1), 5);
						}
					}
					else
					{
						__LIB_9__::func_819(&(uParam0->f_1), 5);
					}
					break;
				case 5:
					__LIB_10__::func_326();
					__LIB_10__::func_338(&(uParam0->f_1));
					if (!bParam2 || !PED::IS_PED_INJURED(iVar1))
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					__LIB_9__::func_819(&(uParam0->f_1), 0);
					__LIB_10__::func_327(&(uParam0->f_1), 0);
					break;
				}
			}
	}
	if (!uParam0->f_1.f_34)
	{
		uParam0->f_1.f_4 = 1;
		MISC::CLEAR_BIT(&(uParam0->f_47), 2);
		MISC::CLEAR_BIT(&(uParam0->f_1), 10);
		MISC::SET_BIT(&(uParam0->f_47), 6);
		__LIB_10__::func_349();
		__LIB_10__::func_858(uParam0, __LIB_1__::func_711());
		if (PED::IS_PED_A_PLAYER(__LIB_1__::func_711()))
		{
			uParam0->f_1.f_42 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711());
		}
		else
		{
			uParam0->f_1.f_42 = -1;
		}
		return 1;
	}
	return 0;
}

void func_1643(var uParam0)//Position - 0xADF92
{
	int iVar0;
	int iVar1;
	if (__LIB_10__::func_206(&(uParam0->f_1)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 0))
	{
		if (!__LIB_0__::func_629())
		{
			if (uParam0->f_1.f_4)
			{
				if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
				{
					if (BitTest(Global_2621446, 28))
					{
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
						HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
						HUD::HIDE_HUD_COMPONENT_THIS_FRAME(5);
						HUD::HIDE_HELP_TEXT_THIS_FRAME();
						HUD::THEFEED_HIDE_THIS_FRAME();
						return;
					}
				}
				if (__LIB_0__::func_80())
				{
					if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					}
				}
				if (__LIB_2__::func_447() && !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
				{
					return;
				}
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
				HUD::ALLOW_PAUSE_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME();
				__LIB_10__::func_351(uParam0);
				if (__LIB_10__::func_368(uParam0))
				{
					if (PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1.f_42)) != __LIB_1__::func_4())
					{
						__LIB_10__::func_858(uParam0, PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1.f_42)));
						__LIB_10__::func_909(uParam0, PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1.f_42)));
						__LIB_1__::func_36(1, __LIB_1__::func_4(), 1);
						__LIB_10__::func_299();
					}
				}
				if (__LIB_10__::func_328(__LIB_1__::func_711()))
				{
					if (__LIB_1__::func_711() != PLAYER::PLAYER_PED_ID())
					{
						if (PED::IS_PED_A_PLAYER(__LIB_1__::func_711()))
						{
							__LIB_15__::func_484(uParam0);
							if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
							{
								func_1662(uParam0);
							}
							iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711()));
							if (PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711())) > iVar0)
							{
								iVar0 = PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711()));
							}
							if (iVar0 != uParam0->f_47.f_1465)
							{
								uParam0->f_47.f_1465 = iVar0;
								MISC::SET_FAKE_WANTED_LEVEL(uParam0->f_47.f_1465);
							}
							if (__LIB_1__::func_693(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711()), 1, 1))
							{
								if (PLAYER::ARE_PLAYER_STARS_GREYED_OUT(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711())) != uParam0->f_47.f_1466)
								{
									uParam0->f_47.f_1466 = PLAYER::ARE_PLAYER_STARS_GREYED_OUT(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711()));
									HUD::FLASH_WANTED_DISPLAY(uParam0->f_47.f_1466);
								}
							}
							iVar1 = 1;
							if ((uParam0->f_1.f_35 == 3 || uParam0->f_1.f_35 == 5) || uParam0->f_1.f_35 == 4)
							{
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711())))
								{
									if (__LIB_1__::func_20(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711())))
									{
										__LIB_10__::func_299();
										if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_OUT())
										{
											CAM::DO_SCREEN_FADE_OUT(0);
										}
										iVar1 = 0;
									}
								}
							}
							if (__LIB_0__::func_864(&(uParam0->f_2255)))
							{
								if (__LIB_15__::func_483(__LIB_1__::func_711(), __LIB_5__::func_839(&(uParam0->f_1))) && iVar1)
								{
									__LIB_0__::clearF_1Prop(&(uParam0->f_2255));
								}
							}
							func_1648(uParam0, __LIB_1__::func_711());
						}
					}
					if (!BitTest(uParam0->f_47, 0))
					{
						if (!BitTest(uParam0->f_47, 3))
						{
							MISC::SET_BIT(&(uParam0->f_47), 0);
							__LIB_36__::func_139(uParam0);
						}
					}
					if ((__LIB_10__::func_197(&(uParam0->f_1)) != 6 && __LIB_10__::func_197(&(uParam0->f_1)) != 4) && __LIB_10__::func_197(&(uParam0->f_1)) != 5)
					{
						if (__LIB_1__::func_711() != __LIB_1__::func_4())
						{
							if (!__LIB_10__::func_445())
							{
								__LIB_9__::func_819(&(uParam0->f_1), 0);
								__LIB_7__::func_694(&(uParam0->f_1), 2);
								__LIB_10__::func_327(&(uParam0->f_1), 1);
								__LIB_10__::func_887(&(uParam0->f_1));
							}
						}
					}
				}
				else
				{
					__LIB_36__::func_246(uParam0, 1, 0);
				}
			}
		}
	}
	else
	{
		__LIB_10__::func_887(&(uParam0->f_1));
		__LIB_36__::func_247(uParam0);
	}
	__LIB_41__::func_962(uParam0);
}

void func_1648(var uParam0, int iParam1)//Position - 0xAE396
{
	if (__LIB_10__::func_939(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
	{
		if (uParam0->f_2262 == -1)
		{
			uParam0->f_2262 = __LIB_13__::func_580(iParam1);
		}
		else if (!__LIB_5__::func_374(PLAYER::PLAYER_ID(), uParam0->f_2262))
		{
			func_1325(uParam0->f_2262, 1);
		}
	}
	else
	{
		func_1324(uParam0);
	}
}

void func_1662(var uParam0)//Position - 0xAE951
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711());
	if (iVar1 != __LIB_0__::getMinusOneOrNull() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		if (BitTest(Global_2621446.f_69.f_5, 11))
		{
			if ((__LIB_10__::func_355(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775, 0) && !__LIB_4__::func_972(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775)) && !__LIB_11__::func_679(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775))
			{
				if ((Global_4718592 == 2 || Global_4718592 == 8) || Global_4718592 == 0)
				{
					if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775 == NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711()))
					{
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
			if (__LIB_10__::func_355(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711()), 0))
			{
				bVar0 = true;
			}
		}
		else if (__LIB_10__::func_355(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711()), 0))
		{
			bVar0 = true;
		}
	}
	if (bVar0 == 1)
	{
		if (__LIB_10__::func_207() && __LIB_1__::func_620())
		{
			bVar0 = false;
		}
	}
	if (__LIB_2__::func_176())
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || __LIB_0__::func_623() == 2)
		{
			__LIB_10__::func_336();
		}
	}
	else
	{
		if (bVar0)
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || __LIB_0__::func_623() == 1)
			{
				if ((!__LIB_0__::func_864(&(uParam0->f_2251)) || __LIB_0__::func_937(&(uParam0->f_2251), 5000, 0)) || __LIB_0__::func_623() == 1)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					__LIB_0__::clearF_1Prop(&(uParam0->f_2251));
					__LIB_10__::func_892(uParam0, __LIB_10__::func_364());
					__LIB_1__::func_36(0, 0, 1);
					func_1354(1, 1, 1, 1, 0, 0f, 0f, 0f, 1, 0, 0, 1, 1, 0, 0);
				}
			}
			else
			{
				__LIB_0__::func_627(&(uParam0->f_2251), 0, 0);
			}
		}
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (__LIB_10__::func_386() == 0)
			{
				__LIB_10__::func_385(1);
			}
		}
		switch (__LIB_10__::func_386())
		{
			case 0:
				break;
			case 1:
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						if ((!__LIB_10__::func_889() && !BitTest(uParam0->f_1.f_1, 4)) && !__LIB_10__::func_325())
						{
							CAM::DO_SCREEN_FADE_OUT(250);
						}
						else
						{
							__LIB_1__::func_36(1, __LIB_1__::func_4(), 1);
							__LIB_2__::func_325();
							__LIB_35__::func_574(1, 1);
							__LIB_10__::func_363(1);
							__LIB_10__::func_385(0);
						}
					}
				}
				else
				{
					uParam0->f_1.f_28 = NETWORK::GET_NETWORK_TIME();
					__LIB_1__::func_36(1, __LIB_1__::func_4(), 1);
					__LIB_2__::func_325();
					__LIB_35__::func_574(1, 1);
					__LIB_10__::func_363(1);
					__LIB_10__::func_385(2);
				}
				break;
			case 2:
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_1.f_28) > 8000)
				{
					__LIB_10__::func_385(3);
				}
				break;
			case 3:
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						if (!__LIB_10__::func_889())
						{
							CAM::DO_SCREEN_FADE_IN(250);
						}
						else
						{
							__LIB_10__::func_385(0);
						}
					}
				}
				else
				{
					__LIB_10__::func_385(0);
				}
				break;
			}
	}
}

void func_1678(var uParam0)//Position - 0xAF1E7
{
	if (__LIB_10__::func_206(&(uParam0->f_1)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 0))
	{
		if (!__LIB_7__::func_719(16))
		{
			if (func_1609(uParam0, 1, 0))
			{
				__LIB_7__::func_694(&(uParam0->f_1), 3);
			}
		}
	}
	else
	{
		__LIB_10__::func_886();
		__LIB_10__::func_887(&(uParam0->f_1));
		__LIB_36__::func_247(uParam0);
	}
	__LIB_41__::func_962(uParam0);
}

void func_1690(var uParam0)//Position - 0xAF59A
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<3> Var8;
	struct<3> Var9;
	var uVar10;
	var uVar11;
	var uVar12;
	float fVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	struct<3> Var18;
	int iVar19;
	struct<3> Var20;
	int iVar21;
	int iVar22;
	struct<3> Var23;
	int iVar24;
	struct<3> Var25;
	int iVar26;
	struct<3> Var27;
	int iVar28;
	int iVar29;
	struct<415> Var30;
	struct<3> Var31;
	struct<3> Var32;
	float fVar33;
	fVar1 = 0.25f;
	if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		fVar1 = 0.15f;
	}
	if (__LIB_10__::func_354(&(uParam0->f_1)) && CAM::GET_RENDERING_CAM() == uParam0->f_1.f_39)
	{
		CAM::USE_SCRIPT_CAM_FOR_AMBIENT_POPULATION_ORIGIN_THIS_FRAME(true, true);
		PED::SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(CAM::GET_FINAL_RENDERED_CAM_COORD());
		if ((!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			Var2 = { CAM::GET_CAM_COORD(uParam0->f_1.f_39) };
			if (__LIB_10__::func_379())
			{
				Var2 = { __LIB_10__::func_378() };
			}
			if (!__LIB_0__::func_86(Var2))
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(Var2, 0f, 0f, 0f);
			}
		}
	}
	if (uParam0->f_1.f_34 && __LIB_1__::func_286(&(uParam0->f_1)) > 1)
	{
		iVar0 = __LIB_2__::func_51();
	}
	else
	{
		iVar0 = __LIB_1__::func_4();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_A_PLAYER(iVar0))
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				iVar4 = iVar3;
				if (iVar4 != -1)
				{
					iVar5 = -1;
					iVar6 = -1;
					iVar6 = __LIB_7__::func_693(iVar3, 0);
					bVar7 = false;
					if (BitTest(Global_1853348[iVar4 /*834*/].f_833, 8))
					{
						iVar5 = Global_1853348[iVar4 /*834*/].f_776;
					}
					else
					{
						iVar5 = Global_1853348[iVar4 /*834*/].f_267.f_32;
					}
					if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						if (!bVar7)
						{
							if (((Global_2689235[iVar4 /*453*/].f_244 != -1 && !__LIB_0__::func_845(iVar5, -1)) && !__LIB_2__::func_782(iVar5, 0, 0)) && !__LIB_4__::func_914(iVar3))
							{
								iVar14 = __LIB_0__::func_328(Global_2689235[iVar4 /*453*/].f_244);
								if (iVar14 != 3 && !__LIB_11__::func_785(iVar14, iVar3))
								{
									bVar7 = true;
									if (!__LIB_10__::func_354(&(uParam0->f_1)))
									{
										if (__LIB_10__::func_377(Global_2689235[iVar4 /*453*/].f_244, &Var8, &Var9, &fVar13))
										{
											uParam0->f_1.f_41 = 1;
											__LIB_15__::func_187(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
										}
									}
								}
							}
						}
						if ((!PED::IS_PED_INJURED(iVar0) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar0) == MISC::GET_HASH_KEY("YachtRm_Bridge")) || BitTest(Global_1853348[iVar4 /*834*/].f_833, 9))
						{
							iVar5 = 86;
						}
						if (bVar7)
						{
							iVar15 = __LIB_3__::func_248(iVar3);
							if (iVar15 == -1)
							{
								iVar15 = __LIB_2__::func_717(iVar3);
							}
							if ((iVar15 == 81 || iVar15 == 82) || iVar15 == 117)
							{
								if (iVar15 == 117)
								{
									iVar16 = joaat("terbyte");
								}
								else
								{
									iVar16 = joaat("trailerlarge");
								}
								if (Global_2689235[iVar3 /*453*/].f_318.f_9 != __LIB_0__::getMinusOneOrNull())
								{
									iVar17 = VEHICLE::GET_CLOSEST_VEHICLE(Global_2689235[Global_2689235[iVar3 /*453*/].f_318.f_9 /*453*/].f_318.f_11, 50f, iVar16, 131078);
									Var18 = { 0f, -15f, 5f };
									if (__LIB_10__::func_354(&(uParam0->f_1)))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar17))
										{
											__LIB_10__::func_446(&(uParam0->f_1.f_39), iVar17, Var18);
										}
									}
								}
							}
							else if (iVar15 == 88 || iVar15 == 101)
							{
								iVar19 = VEHICLE::GET_CLOSEST_VEHICLE(Global_2689235[iVar3 /*453*/].f_318.f_21, 50f, joaat("avenger"), 86138);
								Var20 = { 0f, -15f, 5f };
								if (__LIB_10__::func_354(&(uParam0->f_1)))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iVar19))
									{
										__LIB_10__::func_446(&(uParam0->f_1.f_39), iVar19, Var20);
									}
								}
							}
						}
						if (!bVar7)
						{
							iVar21 = __LIB_3__::func_248(iVar3);
							if (iVar21 == -1)
							{
								iVar21 = __LIB_2__::func_717(iVar3);
							}
							if ((iVar21 == 81 || iVar21 == 82) || iVar21 == 117)
							{
								if (iVar21 == 117)
								{
									iVar22 = joaat("terbyte");
								}
								else
								{
									iVar22 = joaat("trailerlarge");
								}
								if (Global_2689235[iVar3 /*453*/].f_318.f_9 != __LIB_0__::getMinusOneOrNull())
								{
									Var23 = { Global_2689235[Global_2689235[iVar3 /*453*/].f_318.f_9 /*453*/].f_318.f_11 };
									iVar24 = VEHICLE::GET_CLOSEST_VEHICLE(Var23, 50f, iVar22, 131078);
									if (!__LIB_0__::func_86(Var23))
									{
										__LIB_10__::func_376(Var23);
									}
									Var25 = { 0f, -15f, 5f };
									if (!__LIB_10__::func_354(&(uParam0->f_1)))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar24))
										{
											__LIB_15__::func_186(uParam0, iVar24, Var25, 0, Var23);
										}
										else
										{
											if (!__LIB_0__::func_86(Var23))
											{
												STREAMING::SET_FOCUS_POS_AND_VEL(Var23, 0f, 0f, 0f);
											}
											__LIB_15__::func_186(uParam0, iVar24, Var25, 0, Var23);
										}
									}
									else if (ENTITY::DOES_ENTITY_EXIST(iVar24))
									{
										CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1.f_39, iVar24, Var25, true);
										__LIB_10__::func_446(&(uParam0->f_1.f_39), iVar24, Var25);
									}
								}
								bVar7 = true;
							}
							else if (iVar21 == 88 || iVar21 == 101)
							{
								iVar26 = VEHICLE::GET_CLOSEST_VEHICLE(Global_2689235[iVar3 /*453*/].f_318.f_21, 50f, joaat("avenger"), 86138);
								if (!__LIB_0__::func_86(Global_2689235[iVar3 /*453*/].f_318.f_21))
								{
									__LIB_10__::func_376(Global_2689235[iVar3 /*453*/].f_318.f_21);
								}
								Var27 = { 0f, -15f, 5f };
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iVar26))
									{
										__LIB_15__::func_186(uParam0, iVar26, Var27, 0, Global_2689235[iVar3 /*453*/].f_318.f_21);
										Global_2815059.f_5195.f_764 = iVar26;
									}
									else
									{
										if (!__LIB_0__::func_86(Global_2689235[iVar3 /*453*/].f_318.f_21))
										{
											STREAMING::SET_FOCUS_POS_AND_VEL(Global_2689235[iVar3 /*453*/].f_318.f_21, 0f, 0f, 0f);
										}
										__LIB_15__::func_186(uParam0, iVar26, Var27, 0, Global_2689235[iVar3 /*453*/].f_318.f_21);
									}
								}
								else if (Global_2815059.f_5195.f_764 != iVar26)
								{
									__LIB_15__::func_177(uParam0);
								}
								else if (ENTITY::DOES_ENTITY_EXIST(iVar26))
								{
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1.f_39, iVar26, Var27, true);
									__LIB_10__::func_446(&(uParam0->f_1.f_39), iVar26, Var27);
								}
								bVar7 = true;
							}
						}
						if (!bVar7)
						{
							if (((__LIB_1__::func_511(iVar3, 1, 0) || BitTest(Global_1853348[iVar4 /*834*/].f_833, 8)) || (!PED::IS_PED_INJURED(iVar0) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar0) == MISC::GET_HASH_KEY("YachtRm_Bridge"))) || BitTest(Global_1853348[iVar4 /*834*/].f_833, 9))
							{
								if (iVar5 != -1)
								{
									if (!__LIB_7__::func_685(iVar5) || (__LIB_7__::func_685(iVar5) && iVar6 != -1))
									{
										bVar7 = true;
										__LIB_10__::func_375(uParam0);
										if (uParam0->f_1.f_41 > 2)
										{
											__LIB_15__::func_177(uParam0);
										}
										if (!__LIB_10__::func_354(&(uParam0->f_1)))
										{
											uParam0->f_1.f_41 = 2;
											if (__LIB_7__::func_685(iVar5))
											{
												__LIB_10__::func_376(Global_4196263[iVar6 /*2012*/].f_3[0 /*3*/]);
												__LIB_15__::func_187(uParam0, fVar1, Global_4196263[iVar6 /*2012*/].f_24, Global_4196263[iVar6 /*2012*/].f_24.f_3, Global_4196263[iVar6 /*2012*/].f_24.f_6, 1, 1);
											}
											else
											{
												__LIB_10__::func_376(Global_1312193[iVar5 /*1951*/].f_3[0 /*3*/]);
												__LIB_15__::func_187(uParam0, fVar1, Global_1312193[iVar5 /*1951*/].f_24, Global_1312193[iVar5 /*1951*/].f_24.f_3, Global_1312193[iVar5 /*1951*/].f_24.f_6, 1, 1);
											}
										}
									}
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_4__::func_902(iVar3) || __LIB_3__::func_171(iVar3))
							{
								iVar28 = __LIB_3__::func_248(iVar3);
								if (iVar28 == -1)
								{
									iVar28 = __LIB_2__::func_717(iVar3);
								}
								if (iVar28 != -1)
								{
									if ((((((((((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && __LIB_0__::func_172(iVar28) != 4)) && __LIB_0__::func_172(iVar28) != 12) && __LIB_0__::func_172(iVar28) != 8) && __LIB_0__::func_172(iVar28) != 5) && __LIB_0__::func_172(iVar28) != 10) && __LIB_0__::func_172(iVar28) != 6) && __LIB_0__::func_172(iVar28) != 14) && __LIB_0__::func_172(iVar28) != 15) && __LIB_0__::func_172(iVar28) != 16) && __LIB_0__::func_172(iVar28) != 17)
									{
										iVar29 = 0;
										if (__LIB_0__::func_172(iVar28) == 11)
										{
											iVar29 = 1;
										}
										Var30.f_22.f_10 = -1;
										Var30.f_22.f_37 = -1;
										Var30.f_22.f_40 = 1048576000;
										Var30.f_22.f_66 = 1048576000;
										Var30.f_22.f_68 = -1;
										Var30.f_22.f_69 = 2;
										Var30.f_22.f_72 = 2;
										Var30.f_22.f_89 = 4;
										Var30.f_22.f_94 = -1;
										Var30.f_22.f_96 = 4;
										Var30.f_22.f_109.f_1 = 10;
										Var30.f_22.f_122.f_1 = 10;
										Var30.f_22.f_135 = 4;
										Var30.f_22.f_140 = 30;
										Var30.f_22.f_171 = 4;
										Var30.f_22.f_176 = 6;
										Var30.f_22.f_183 = 4;
										Var30.f_22.f_189 = 9;
										Var30.f_22.f_218 = -1;
										Var30.f_22.f_221 = 6;
										Var30.f_285 = 9;
										Var30.f_285.f_28 = 9;
										Var30.f_285.f_56 = 9;
										Var30.f_285.f_66 = 9;
										Var30.f_285.f_94 = 9;
										Var30.f_403 = -1;
										Var30.f_405 = 2;
										Var30.f_413 = -1;
										Var30.f_414 = -1;
										func_1698(iVar28, &Var30, iVar29, 0);
										__LIB_10__::func_375(uParam0);
										if (!__LIB_10__::func_354(&(uParam0->f_1)))
										{
											uParam0->f_1.f_41 = 14;
											Var31 = { Var30.f_22.f_59 };
											Var32 = { Var30.f_22.f_62 };
											fVar33 = Var30.f_22.f_65;
											__LIB_10__::func_376(Global_1946250.f_533[iVar28 /*3*/]);
											if (SYSTEM::VDIST(Var31, 0f, 0f, 0f) < 0.01f)
											{
												Var31 = { Var30.f_22.f_13 };
												Var32 = { Var30.f_22.f_16 };
												fVar33 = Var30.f_22.f_19;
											}
											if (!__LIB_0__::func_86(Var31))
											{
												__LIB_15__::func_187(uParam0, fVar1, Var31, Var32, fVar33, 1, 1);
												bVar7 = true;
											}
										}
									}
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_979(iVar3, 7))
							{
								bVar7 = true;
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 3;
									__LIB_15__::func_187(uParam0, fVar1, 122.0654f, -1327.9208f, 33.6793f, -2.9863f, 2.0975f, -9.7207f, 32.8998f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_979(iVar3, 12))
							{
								bVar7 = true;
								__LIB_10__::func_375(uParam0);
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 4;
									__LIB_15__::func_187(uParam0, fVar1, 1291.5598f, -1730.0697f, 58.7646f, -7.1113f, 0f, 65.8008f, 41.2371f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_979(iVar3, 13))
							{
								bVar7 = true;
								__LIB_10__::func_375(uParam0);
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 5;
									__LIB_15__::func_187(uParam0, fVar1, 1989.2953f, 3812.5586f, 33.4393f, -0.5562f, 0f, 69.5306f, 40.2409f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_979(iVar3, 14))
							{
								bVar7 = true;
								__LIB_10__::func_375(uParam0);
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 6;
									__LIB_15__::func_187(uParam0, fVar1, 689.6125f, -996.7897f, 37.070427f, -7.501717f, 0f, -43.41461f, 45f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_11__::func_728(iVar3))
							{
								bVar7 = true;
								__LIB_10__::func_375(uParam0);
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									Var8 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
									Var9 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
									fVar13 = CAM::GET_FINAL_RENDERED_CAM_FOV();
									uParam0->f_1.f_41 = 7;
									__LIB_15__::func_187(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (BitTest(Global_1853348[iVar4 /*834*/].f_833, 12))
							{
								bVar7 = true;
								__LIB_10__::func_375(uParam0);
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									__LIB_10__::func_374(&uVar10, &uVar11, &Var8, &Var9, &uVar12, Global_4718592.f_162483, 1);
									uParam0->f_1.f_41 = 8;
									__LIB_15__::func_187(uParam0, fVar1, Var8, Var9, 40f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (((BitTest(Global_1853348[iVar4 /*834*/].f_833, 14) || BitTest(Global_1853348[iVar4 /*834*/].f_833, 15)) || NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iVar3, "AM_ROLLERCOASTER", -1)) || NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iVar3, "AM_FERRISWHEEL", -1))
							{
								bVar7 = true;
								__LIB_10__::func_375(uParam0);
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 9;
									__LIB_15__::func_187(uParam0, fVar1, -1703.854f, -1082.2223f, 42.006f, -8.3096f, 0f, -111.8213f, 45f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (BitTest(Global_2815059.f_4660, 5))
							{
								bVar7 = true;
								if (BitTest(uParam0->f_1, 16))
								{
									MISC::CLEAR_BIT(&(uParam0->f_1), 16);
								}
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									__LIB_10__::func_373(0);
									uParam0->f_1.f_41 = 10;
									__LIB_15__::func_187(uParam0, fVar1, -1155.4f, -2715.5f, 64f, -10.3f, 0f, 113.1f, 50f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
							{
								if ((__LIB_1__::func_20(iVar3) && __LIB_2__::func_88(iVar3) < 41) && !__LIB_1__::func_511(iVar3, 1, 0))
								{
									if ((__LIB_10__::func_197(&(uParam0->f_1)) == 3 && __LIB_11__::func_784(iVar3)) && Global_4718592.f_117083)
									{
										if (__LIB_10__::func_354(&(uParam0->f_1)))
										{
											bVar7 = true;
										}
										else
										{
											bVar7 = true;
											Var8 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
											Var9 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
											fVar13 = CAM::GET_FINAL_RENDERED_CAM_FOV();
											if (!__LIB_0__::func_86(Global_4718592.f_634) && __LIB_0__::func_983())
											{
												Var8 = { Global_4718592.f_634 };
												Var9 = { Global_4718592.f_637 };
											}
											__LIB_2__::func_448(0, 0, 1);
											uParam0->f_1.f_41 = 11;
											__LIB_15__::func_187(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
										}
									}
									else if (__LIB_10__::func_354(&(uParam0->f_1)))
									{
										bVar7 = true;
									}
									else if (Global_2689235[iVar4 /*453*/].f_205.f_2 > 0f)
									{
										Var8 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
										Var9 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
										fVar13 = CAM::GET_FINAL_RENDERED_CAM_FOV();
										bVar7 = true;
										if (__LIB_0__::func_86(Var8))
										{
											Var8 = { Global_2689235[iVar4 /*453*/].f_205 };
											Var8.f_0 = (Var8.f_0 + 0f);
											Var8.f_1 = (Var8.f_1 + -2.3332f);
											Var8.f_2 = (Var8.f_2 + 3.2914f);
											Var9 = { -40.6168f, 0f, 0f };
											fVar13 = 40.3433f;
										}
										uParam0->f_1.f_41 = 12;
										__LIB_15__::func_187(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
									}
								}
							}
							else if (__LIB_0__::func_979(iVar3, 0))
							{
								bVar7 = true;
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									if (__LIB_10__::func_372(__LIB_1__::func_694(iVar3), &Var8, &Var9, &fVar13))
									{
										uParam0->f_1.f_41 = 13;
										__LIB_15__::func_187(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
									}
								}
							}
						}
					}
					if (!bVar7 && !__LIB_0__::func_983())
					{
						if (__LIB_11__::func_727(uParam0, iVar3) && !__LIB_10__::func_371())
						{
							__LIB_15__::func_177(uParam0);
						}
					}
				}
			}
		}
	}
}

void func_1698(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xB0775
{
	var uVar0;
	func_1699(iParam0, uParam1, &uVar0, iParam2, iParam3);
}

void func_1699(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xB078B
{
	struct<33> Var0;
	func_1700(iParam0, &Var0, 2);
	func_1700(iParam0, &Var0, 6);
	func_1700(iParam0, &Var0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam3);
	Stack.Push(uParam4);
	Call_Loc(Var0.f_31);
	Stack.Push(iParam0);
	Stack.Push(&(uParam1->f_389));
	Stack.Push(uParam3);
	Call_Loc(Var0.f_32);
	Stack.Push(iParam0);
	Stack.Push(uParam2);
	Stack.Push(uParam1);
	Stack.Push(&(uParam1->f_4));
	Stack.Push(uParam3);
	Call_Loc(Var0.f_30);
}

void func_1700(int iParam0, var uParam1, int iParam2)//Position - 0xB07DA
{
	func_5838(uParam1, iParam2);
	func_5832(uParam1, iParam2);
	func_5824(uParam1, iParam2);
	func_1701(__LIB_0__::func_172(iParam0), uParam1, iParam2);
}

void func_1701(int iParam0, var uParam1, int iParam2)//Position - 0xB0808
{
	switch (iParam0)
	{
		case 0:
			func_5753(uParam1, iParam2);
			break;
		case 1:
			func_5623(uParam1, iParam2);
			break;
		case 2:
			func_5549(uParam1, iParam2);
			break;
		case 3:
			func_5476(uParam1, iParam2);
			break;
		case 4:
			func_5309(uParam1, iParam2);
			break;
		case 5:
			func_5154(uParam1, iParam2);
			break;
		case 6:
			func_5091(uParam1, iParam2);
			break;
		case 7:
			func_4923(uParam1, iParam2);
			break;
		case 8:
			func_4760(uParam1, iParam2);
			break;
		case 9:
			func_4526(uParam1, iParam2);
			break;
		case 10:
			func_4448(uParam1, iParam2);
			break;
		case 11:
			func_4236(uParam1, iParam2);
			break;
		case 12:
			func_4103(uParam1, iParam2);
			break;
		case 13:
			func_3936(uParam1, iParam2);
			break;
		case 14:
			func_3767(uParam1, iParam2);
			break;
		case 15:
			func_3589(uParam1, iParam2);
			break;
		case 16:
			func_3479(uParam1, iParam2);
			break;
		case 17:
			func_3265(uParam1, iParam2);
			break;
		case 18:
			func_3171(uParam1, iParam2);
			break;
		case 19:
			func_3051(uParam1, iParam2);
			break;
		case 20:
			func_2743(uParam1, iParam2);
			break;
		case 21:
			func_2622(uParam1, iParam2);
			break;
		case 22:
			func_2452(uParam1, iParam2);
			break;
		case 23:
			func_2231(uParam1, iParam2);
			break;
		case 24:
			func_1702(uParam1, iParam2);
			break;
	}
}

void func_1702(var uParam0, int iParam1)//Position - 0xB09C0
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 882519/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 882505/*__LIB_5__::func_448*/;
			break;
		case 1:
			uParam0->f_30 = 882407/*__LIB_5__::func_447*/;
			break;
		case 2:
			uParam0->f_31 = 881052/*__LIB_5__::func_446*/;
			break;
		case 3:
			uParam0->f_34 = 880823/*__LIB_3__::func_732*/;
			break;
		case 4:
			uParam0->f_12 = 880810/*__LIB_3__::func_731*/;
			break;
		case 5:
			uParam0->f_11 = 880800/*__LIB_3__::func_730*/;
			break;
		case 37:
			uParam0->f_18 = 880602/*__LIB_5__::func_200*/;
			break;
		case 38:
			uParam0->f_9 = 880554/*__LIB_7__::func_731*/;
			break;
		case 42:
			uParam0->f_10 = 880525/*__LIB_7__::func_730*/;
			break;
		case 6:
			uParam0->f_32 = 880216/*__LIB_4__::func_915*/;
			break;
		case 11:
			uParam0->f_11 = 880207/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 877563/*__LIB_9__::func_524*/;
			break;
		case 14:
			uParam0->f_11 = 877554/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 870823/*__LIB_9__::func_299*/;
			break;
		case 8:
			uParam0->f_37 = 869948/*__LIB_3__::func_724*/;
			break;
		case 7:
			uParam0->f_36 = 869831/*__LIB_3__::func_723*/;
			break;
		case 79:
			*uParam0 = 869775/*__LIB_5__::func_265*/;
			break;
		case 9:
			uParam0->f_29 = 869622/*__LIB_5__::func_445*/;
			break;
		case 10:
			uParam0->f_27 = 869474/*__LIB_5__::func_444*/;
			break;
		case 13:
			uParam0->f_2 = 869412/*__LIB_42__::func_77*/;
			break;
		case 15:
			uParam0->f_2 = 867786/*__LIB_42__::func_76*/;
			break;
		case 16:
			uParam0->f_5 = 866616/*__LIB_9__::func_976*/;
			break;
		case 108:
			uParam0->f_55 = 825284/*__LIB_43__::func_420*/;
			break;
		case 17:
			uParam0->f_17 = 823655/*__LIB_9__::func_463*/;
			break;
		case 19:
			uParam0->f_17 = 823504/*__LIB_6__::func_30*/;
			break;
		case 18:
			uParam0->f_8 = 823479/*__LIB_3__::func_688*/;
			break;
		case 20:
			uParam0->f_3 = 823259/*__LIB_6__::func_934*/;
			break;
		case 21:
			uParam0->f_3 = 821818/*__LIB_9__::func_313*/;
			break;
		case 74:
			uParam0->f_53 = 821628/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 820430/*__LIB_5__::func_711*/;
			break;
		case 22:
			uParam0->f_24 = 820323/*__LIB_5__::func_432*/;
			break;
		case 23:
			uParam0->f_26 = 820276/*__LIB_3__::func_683*/;
			break;
		case 24:
			uParam0->f_26 = 820239/*__LIB_3__::func_682*/;
			break;
		case 26:
			uParam0->f_38 = 820231/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 817263/*func_2007*/;
			break;
		case 27:
			uParam0->f_25 = 817255/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 817247/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 817097/*__LIB_5__::func_710*/;
			break;
		case 31:
			uParam0->f_39 = 816885/*__LIB_5__::func_709*/;
			break;
		case 33:
			uParam0->f_40 = 815970/*__LIB_7__::func_49*/;
			break;
		case 32:
			*uParam0 = 815915/*__LIB_6__::func_932*/;
			break;
		case 76:
			uParam0->f_13 = 815904/*__LIB_3__::func_554*/;
			break;
		case 34:
			uParam0->f_41 = 812152/*__LIB_6__::func_931*/;
			break;
		case 36:
			uParam0->f_58 = 812107/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 791106/*__LIB_5__::func_946*/;
			break;
		case 45:
			uParam0->f_14 = 791097/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 791088/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 791080/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 791057/*__LIB_3__::func_665*/;
			break;
		case 82:
			uParam0->f_19 = 791011/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 790868/*__LIB_4__::func_910*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 789725/*__LIB_6__::func_930*/;
			break;
		case 49:
			uParam0->f_8 = 789707/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 789405/*__LIB_6__::func_929*/;
			break;
		case 51:
			*uParam0 = 789303/*__LIB_5__::func_707*/;
			break;
		case 52:
			uParam0->f_15 = 789292/*__LIB_3__::func_657*/;
			break;
		case 53:
			uParam0->f_13 = 789166/*func_1962*/;
			break;
		case 54:
			uParam0->f_45 = 788776/*func_1961*/;
			break;
		case 56:
			uParam0->f_46 = 788757/*__LIB_3__::func_656*/;
			break;
		case 57:
			uParam0->f_11 = 787855/*__LIB_7__::func_48*/;
			break;
		case 58:
			uParam0->f_13 = 787729/*__LIB_3__::func_655*/;
			break;
		case 59:
			*uParam0 = 786348/*__LIB_7__::func_868*/;
			break;
		case 60:
			*uParam0 = 786339/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 786328/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 786202/*__LIB_3__::func_646*/;
			break;
		case 55:
			uParam0->f_45 = 786194/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 786180/*__LIB_7__::func_867*/;
			break;
		case 64:
			uParam0->f_47 = 786172/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 784748/*__LIB_7__::func_47*/;
			break;
		case 66:
			uParam0->f_21 = 784052/*__LIB_5__::func_422*/;
			break;
		case 67:
			uParam0->f_21 = 783912/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 782707/*__LIB_7__::func_773*/;
			break;
		case 69:
			*uParam0 = 782698/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 782686/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 782677/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 782665/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 782214/*__LIB_5__::func_945*/;
			break;
		case 84:
			uParam0->f_1 = 782205/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 741440/*func_1816*/;
			break;
		case 87:
			uParam0->f_1 = 737585/*__LIB_6__::func_439*/;
			break;
		case 88:
			uParam0->f_1 = 737576/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 737568/*__LIB_0__::func_467*/;
			break;
		case 90:
			uParam0->f_1 = 736689/*__LIB_7__::func_0*/;
			break;
		case 91:
			uParam0->f_1 = 736655/*__LIB_3__::func_614*/;
			break;
		case 92:
			uParam0->f_1 = 734860/*__LIB_7__::func_864*/;
			break;
		case 94:
			uParam0->f_1 = 732890/*__LIB_7__::func_875*/;
			break;
		case 95:
			uParam0->f_22 = 731607/*__LIB_7__::func_883*/;
			break;
		case 96:
			uParam0->f_1 = 731598/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 731589/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 731580/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 731572/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 731564/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 731450/*__LIB_3__::func_606*/;
			break;
		case 113:
			uParam0->f_3 = 731296/*__LIB_5__::func_701*/;
			break;
		case 114:
			uParam0->f_16 = 730628/*__LIB_3__::func_605*/;
			break;
		case 115:
			uParam0->f_3 = 730619/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 730610/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 726194/*__LIB_3__::func_604*/;
			break;
		case 118:
			uParam0->f_11 = 726185/*__LIB_3__::func_603*/;
			break;
		case 119:
			uParam0->f_27 = 726058/*__LIB_7__::func_44*/;
			break;
		case 120:
			uParam0->f_19 = 726003/*__LIB_5__::func_700*/;
			break;
		case 78:
			uParam0->f_59 = 725204/*__LIB_7__::func_828*/;
			break;
		case 124:
			uParam0->f_1 = 725195/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 725187/*__LIB_0__::func_467*/;
			break;
	}
}

int func_1816(int iParam0, var uParam1)//Position - 0xB5040
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || ENTITY::DOES_ENTITY_EXIST(uParam1->f_262))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_262))
		{
			iVar0 = uParam1->f_262;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1831(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1825(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_3__::func_632(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_3__::func_632(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_3__::func_631(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_3__::func_631(iParam0, &Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[0 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 1);
		}
		__LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

int func_1825(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0xB57B7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	iVar2 = 8;
	if (bParam7)
	{
		iVar2 = -1;
	}
	iVar0 = -1;
	while (iVar0 <= iVar2)
	{
		iVar1 = iVar0 + 1;
		iVar3 = iVar0;
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, iVar3, false))
		{
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, iVar3, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && (__LIB_0__::func_121(iVar4) || bParam5))
			{
				if (bParam3 && !PED::IS_PED_A_PLAYER(iVar4))
				{
				}
				else
				{
					if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]))
					{
						func_1826(uParam2[iVar1], iVar4, bParam8, bParam6);
					}
					if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]) && (__LIB_0__::func_121((*uParam2)[iVar1]) || bParam5))
					{
						if (!PED::HAS_PED_HEAD_BLEND_FINISHED((*uParam2)[iVar1]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED((*uParam2)[iVar1]))
						{
							if (bParam4)
							{
								return 0;
							}
						}
						iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iVar3, false);
						if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
						{
							if (__LIB_0__::func_121(*uParam1))
							{
								ENTITY::FREEZE_ENTITY_POSITION((*uParam2)[iVar1], false);
								PED::SET_PED_INTO_VEHICLE((*uParam2)[iVar1], *uParam1, iVar3);
							}
						}
						if (iVar0 == 7 && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("insurgent3"))
						{
							VEHICLE::SET_VEHICLE_DOOR_CONTROL(*uParam1, 5, 5, 1f);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1826(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xB5919
{
	struct<3> Var0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	*uParam0 = PED::CLONE_PED(iParam1, false, false, bParam2);
	if (__LIB_0__::func_121(iParam1))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
		__LIB_1__::func_494(*uParam0);
		if (func_1828(iParam1) || __LIB_1__::func_554(iParam1))
		{
			PED::SET_PED_HELMET(*uParam0, true);
		}
		else
		{
			PED::SET_PED_HELMET(*uParam0, false);
			PED::REMOVE_PED_HELMET(*uParam0, true);
			PED::CLEAR_PED_PROP(*uParam0, 0);
		}
		if (bParam3)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, false) };
			Var0.f_2 = (Var0.f_2 - 10f);
			ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, false, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
			ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
		return 1;
	}
	return 0;
}

int func_1828(int iParam0)//Position - 0xB5A78
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_1508(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_1831(int iParam0, var uParam1, int iParam2)//Position - 0xB5B66
{
	struct<101> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0) || ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (__LIB_0__::func_703(iParam2, 1))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam1, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam1, ENTITY::GET_ENTITY_COORDS(*iParam0, true), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*uParam1, ENTITY::GET_ENTITY_ROTATION(*iParam0, 2), 2, true);
		}
		if (__LIB_0__::func_703(iParam2, 2))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam1, 5f);
		}
		if (__LIB_0__::func_703(iParam2, 4))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_12, false))
			{
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(*uParam1, uParam1->f_12, 1f);
			}
		}
		return 1;
	}
	else if (__LIB_36__::func_248(uParam1, *iParam0, 10f, 20f, 15f, ENTITY::GET_ENTITY_HEADING(*iParam0), 0, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			Var0.f_9 = 49;
			Var0.f_59 = 2;
			Var0.f_78 = -1;
			Var0.f_79 = -1;
			Var0.f_96 = -1;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_100 = -1;
			__LIB_9__::func_494(*iParam0, &Var0);
			__LIB_36__::func_140(*uParam1, &Var0, 1, 1, 0);
			__LIB_1__::func_495(*iParam0, uParam1);
			ENTITY::SET_ENTITY_COLLISION(*uParam1, false, false);
			ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(*uParam1, true);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(*uParam1, false);
			iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam1);
			if (((((!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1)) && !__LIB_0__::func_867(iVar1)) && !iVar1 == joaat("oppressor")) && !iVar1 == joaat("kosatka"))
			{
				VEHICLE::SET_VEHICLE_CAN_BREAK(*uParam1, false);
			}
			VEHICLE::GET_VEHICLE_LIGHTS_STATE(*iParam0, &iVar2, &iVar3);
			if (iVar2 != 0)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(*uParam1, 2);
			}
			if (iVar3 != 0)
			{
				VEHICLE::SET_VEHICLE_FULLBEAM(*uParam1, true);
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(*uParam1, true, true, false);
			if (!__LIB_0__::func_703(iParam2, 32))
			{
				func_1825(iParam0, uParam1, &(uParam1->f_1), __LIB_0__::func_703(iParam2, 16), __LIB_0__::func_703(iParam2, 128), __LIB_0__::func_703(iParam2, 64), !__LIB_0__::func_703(iParam2, 256), 0, 1);
			}
			if (__LIB_0__::func_703(iParam2, 4))
			{
				__LIB_42__::func_73(iParam0, &(uParam1->f_12));
				if (__LIB_0__::func_703(iParam2, 8))
				{
					iVar4 = 0;
					while (iVar4 <= 7)
					{
						if (VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, false))
						{
							VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar4);
						}
						iVar4++;
					}
				}
			}
			if (__LIB_0__::func_703(iParam2, 8))
			{
				iVar5 = 0;
				while (iVar5 <= 7)
				{
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, false))
					{
						VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar5);
					}
					iVar5++;
				}
			}
		}
	}
	return 0;
}

void func_1961(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xC0928
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	if (__LIB_5__::func_423(iParam0))
	{
		if (*uParam3 != 1 && *uParam3 != 2)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			HUD::SET_BLIP_SCALE(*uParam1, 1.4f);
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 7000);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_826" /* GXT: Agency */);
			*uParam3 = 1;
			return;
		}
		else if (*uParam3 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::SET_BLIP_ROUTE(*uParam1, false);
				*uParam3 = 2;
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			*uParam3 = 1;
		}
	}
	else
	{
		if (*uParam3 == 1)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, false);
			HUD::SET_BLIP_SCALE(*uParam1, 1f);
			*uParam3 = 0;
		}
		bVar0 = false;
		if (!__LIB_3__::func_649(PLAYER::PLAYER_ID(), __LIB_3__::func_650(iParam0)) && __LIB_3__::func_649(__LIB_0__::func_797(), __LIB_3__::func_650(iParam0)))
		{
			iVar2 = 0;
			while (iVar2 < 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (__LIB_1__::func_693(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
				{
					if (__LIB_3__::func_649(iVar1, __LIB_3__::func_650(iParam0)))
					{
						Var3 = { __LIB_1__::func_696(iVar1) };
						if (__LIB_0__::func_800(Var3))
						{
							if (NETWORK::NETWORK_IS_FRIEND(&Var3))
							{
								iVar4 = joaat("FHQ_FRIEND");
								if (iVar4 != *uParam4)
								{
									*uParam4 = iVar4;
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "FHQ_FRIEND" /* GXT: Friend's Agency */);
								}
								bVar0 = true;
							}
							else
							{
								iVar2++;
							}
							if (!bVar0 && *uParam4 == joaat("FHQ_FRIEND"))
							{
								*uParam4 = joaat("BLIP_826");
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_826" /* GXT: Agency */);
							}
						}
Vector3 func_1962(int iParam0)//Position - 0xC0AAE
{
	switch (iParam0)
	{
		case 155:
			return 388.3036f, -74.6683f, 67.1805f;
			break;
		case 156:
			return -1016.5347f, -413.186f, 38.6161f;
			break;
		case 157:
			return -589.4908f, -707.4646f, 35.2844f;
			break;
		case 158:
			return -1039.0834f, -756.4792f, 18.8395f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_2007(int iParam0, int iParam1)//Position - 0xC786F
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	iVar2 = __LIB_3__::func_616();
	Var3 = { __LIB_3__::func_681(iParam0, iVar2) };
	if (__LIB_6__::func_934(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2017(iParam0, Var3, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if (!Global_2667225.f_2680 && !BitTest(Global_1946250, 27))
		{
			if ((((iVar2 == 0 || iVar2 == 1) || iVar2 == 4) || iVar2 == 5) || iVar2 == 6)
			{
				__LIB_3__::func_664(0);
			}
			else
			{
				__LIB_3__::func_664(1);
			}
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_49(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var3, 1, 0, 0, 0, -1, -1, __LIB_0__::func_509());
			}
			__LIB_7__::func_830(iParam0, __LIB_0__::func_509());
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var3, 0, 0, 1, 0, -1, -1, __LIB_0__::func_509());
			}
			__LIB_7__::func_830(iParam0, __LIB_0__::func_509());
		}
	}
	else
	{
		if (__LIB_2__::func_159(0))
		{
			if (iVar2 == 3 && __LIB_3__::func_494(__LIB_0__::func_797()) == iParam0)
			{
				__LIB_3__::func_664(1);
			}
		}
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2017(int iParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0xC7EB7
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<13> Var7;
	bool bVar8;
	iVar0 = -1;
	if (__LIB_1__::func_526())
	{
		iVar0 = __LIB_3__::func_680();
	}
	fVar1 = SYSTEM::POW(SYSTEM::TO_FLOAT(__LIB_3__::func_679(iParam0)), 2f);
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7;
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar5 = iVar4;
		if (iVar2 == iVar5 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
		{
		}
		else
		{
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			if (ENTITY::IS_ENTITY_DEAD(iVar6, false))
			{
			}
			else if (bParam5)
			{
				if (iVar3 != Global_2689235[iVar5 /*453*/].f_318.f_7)
				{
				}
				else
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true), Param1) <= fVar1)
					{
						Var7 = { __LIB_1__::func_696(iVar5) };
						bVar8 = false;
						if (__LIB_3__::func_678(iVar5) > -1)
						{
							if (iParam0 == 123 || iParam0 == 124)
							{
								bVar8 = true;
							}
						}
						if (bParam4 && !*iParam2)
						{
							if ((iVar0 != -1 && iVar0 == __LIB_3__::func_106(&Var7)) || NETWORK::NETWORK_IS_FRIEND(&Var7))
							{
								if (((((((((!__LIB_1__::func_907(iVar5, 1) && !__LIB_5__::func_424(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_4__::func_972(iVar5)) && !__LIB_4__::func_976(iVar5, 1)) && !((__LIB_2__::func_72(iVar5, 1) && !__LIB_3__::func_360(iVar2, iVar5)) && __LIB_0__::func_509() != 0)) && !func_2018(iVar5)) && !__LIB_3__::func_171(iVar5)) && !bVar8)
								{
									*iParam2 = 1;
								}
							}
						}
						if ((((((((((!*iParam3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar5)) && !__LIB_5__::func_424(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_4__::func_972(iVar5)) && !__LIB_4__::func_976(iVar5, 1)) && __LIB_1__::func_744(PLAYER::PLAYER_ID())) && !func_2018(iVar5)) && !__LIB_3__::func_171(iVar5)) && !bVar8)
						{
							*iParam3 = 1;
						}
					}
					if (*iParam3 && *iParam2)
					{
					}
					else
					{
						iVar4++;
					}
				}
int func_2018(bool bParam0)//Position - 0xC80F5
{
	int iVar0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2788198;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_2231(var uParam0, int iParam1)//Position - 0xD7760
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 939212/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 939203/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 939123/*__LIB_5__::func_466*/;
			break;
		case 2:
			uParam0->f_31 = 938484/*__LIB_5__::func_715*/;
			break;
		case 3:
			uParam0->f_34 = 938218/*__LIB_3__::func_797*/;
			break;
		case 4:
			uParam0->f_12 = 938205/*__LIB_3__::func_796*/;
			break;
		case 6:
			uParam0->f_32 = 938106/*__LIB_4__::func_918*/;
			break;
		case 37:
			uParam0->f_18 = 937969/*__LIB_3__::func_795*/;
			break;
		case 38:
			uParam0->f_9 = 937921/*__LIB_6__::func_866*/;
			break;
		case 39:
			uParam0->f_11 = 937886/*__LIB_7__::func_734*/;
			break;
		case 41:
			uParam0->f_20 = 937767/*__LIB_9__::func_300*/;
			break;
		case 42:
			uParam0->f_10 = 937738/*__LIB_6__::func_865*/;
			break;
		case 11:
			uParam0->f_11 = 937728/*__LIB_3__::func_793*/;
			break;
		case 12:
			uParam0->f_33 = 935577/*__LIB_5__::func_856*/;
			break;
		case 14:
			uParam0->f_11 = 935568/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 932971/*__LIB_5__::func_465*/;
			break;
		case 8:
			uParam0->f_37 = 932963/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 932954/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 932945/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 932883/*__LIB_42__::func_77*/;
			break;
		case 15:
			uParam0->f_2 = 932802/*__LIB_42__::func_78*/;
			break;
		case 16:
			uParam0->f_5 = 932449/*__LIB_6__::func_940*/;
			break;
		case 108:
			uParam0->f_55 = 928015/*__LIB_43__::func_421*/;
			break;
		case 17:
			uParam0->f_17 = 926847/*__LIB_9__::func_464*/;
			break;
		case 19:
			uParam0->f_17 = 926821/*__LIB_5__::func_953*/;
			break;
		case 20:
			uParam0->f_3 = 926812/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 926681/*__LIB_6__::func_939*/;
			break;
		case 74:
			uParam0->f_53 = 926577/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 926561/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 926405/*__LIB_5__::func_463*/;
			break;
		case 23:
			uParam0->f_26 = 926397/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 918456/*func_2355*/;
			break;
		case 25:
			uParam0->f_23 = 917406/*func_2351*/;
			break;
		case 27:
			uParam0->f_25 = 917190/*__LIB_5__::func_854*/;
			break;
		case 28:
			uParam0->f_24 = 917149/*__LIB_3__::func_777*/;
			break;
		case 29:
			uParam0->f_28 = 917126/*__LIB_6__::func_864*/;
			break;
		case 30:
			uParam0->f_8 = 916367/*__LIB_5__::func_714*/;
			break;
		case 31:
			uParam0->f_39 = 916339/*__LIB_3__::func_775*/;
			break;
		case 43:
			uParam0->f_8 = 916225/*__LIB_5__::func_205*/;
			break;
		case 33:
			uParam0->f_40 = 916107/*__LIB_6__::func_863*/;
			break;
		case 76:
			uParam0->f_13 = 916058/*__LIB_4__::func_917*/;
			break;
		case 34:
			uParam0->f_41 = 907220/*__LIB_5__::func_459*/;
			break;
		case 36:
			uParam0->f_58 = 907172/*__LIB_3__::func_774*/;
			break;
		case 35:
			uParam0->f_42 = 895916/*__LIB_6__::func_415*/;
			break;
		case 45:
			uParam0->f_14 = 895907/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 895898/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 895890/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 895879/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 895753/*__LIB_4__::func_916*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 894868/*__LIB_8__::func_920*/;
			break;
		case 49:
			uParam0->f_8 = 894859/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 894690/*__LIB_6__::func_937*/;
			break;
		case 51:
			*uParam0 = 894681/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 894670/*__LIB_3__::func_766*/;
			break;
		case 53:
			uParam0->f_13 = 894647/*__LIB_3__::func_765*/;
			break;
		case 54:
			uParam0->f_45 = 894598/*__LIB_3__::func_764*/;
			break;
		case 56:
			uParam0->f_46 = 894580/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 894538/*__LIB_5__::func_456*/;
			break;
		case 58:
			uParam0->f_13 = 894496/*__LIB_3__::func_761*/;
			break;
		case 59:
			*uParam0 = 894367/*__LIB_7__::func_779*/;
			break;
		case 60:
			*uParam0 = 894358/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 894347/*__LIB_3__::func_760*/;
			break;
		case 62:
			uParam0->f_13 = 894324/*__LIB_3__::func_759*/;
			break;
		case 63:
			uParam0->f_11 = 894315/*__LIB_1__::func_804*/;
			break;
		case 55:
			uParam0->f_45 = 894273/*__LIB_3__::func_758*/;
			break;
		case 64:
			uParam0->f_47 = 894265/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 894257/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 893986/*__LIB_5__::func_455*/;
			break;
		case 67:
			uParam0->f_21 = 893916/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 893244/*__LIB_5__::func_454*/;
			break;
		case 69:
			*uParam0 = 893235/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 893223/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 893003/*__LIB_3__::func_756*/;
			break;
		case 107:
			uParam0->f_50 = 892991/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 892455/*__LIB_7__::func_732*/;
			break;
		case 84:
			uParam0->f_1 = 892340/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 891436/*func_2273*/;
			break;
		case 87:
			uParam0->f_1 = 888805/*__LIB_6__::func_414*/;
			break;
		case 88:
			uParam0->f_1 = 888796/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 888788/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 888779/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 888770/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 888761/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 888753/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 888745/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 888710/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 888701/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 886763/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 886754/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 886745/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 885525/*__LIB_3__::func_744*/;
			break;
		case 121:
			*uParam0 = 885443/*__LIB_3__::func_743*/;
			break;
		case 122:
			*uParam0 = 885426/*__LIB_3__::func_742*/;
			break;
		case 123:
			uParam0->f_19 = 885394/*__LIB_5__::func_450*/;
			break;
		case 78:
			uParam0->f_59 = 884203/*__LIB_9__::func_323*/;
			break;
		case 124:
			uParam0->f_1 = 884194/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 884186/*__LIB_0__::func_467*/;
			break;
	}
}

int func_2273(int iParam0, var uParam1)//Position - 0xD9A2C
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	var uVar7;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = __LIB_3__::func_616();
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1831(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1825(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_3__::func_752(iParam0, &Var2, &Var4, &uVar6, 1, iVar0);
		__LIB_3__::func_752(iParam0, &Var3, &Var5, &uVar7, 0, iVar0);
		__LIB_6__::func_27(&(Global_1946250.f_3638), 5000, "TD Shot", Var2, Var4, uVar6, Var3, Var5, uVar7, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_2351(int iParam0, int iParam1)//Position - 0xDFF9E
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	bVar2 = !BitTest(iParam1->f_2, 7);
	iVar3 = __LIB_3__::func_616();
	iVar4 = 0;
	Var5 = { __LIB_3__::func_780(iVar3) };
	func_2017(iParam0, Var5, &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		switch (iVar3)
		{
			case 12:
			case 13:
			case 14:
			case 15:
				__LIB_5__::func_189(iParam1, 0, 1);
				__LIB_5__::func_189(iParam1, 1, 0);
				__LIB_5__::func_189(iParam1, 2, 0);
				if (__LIB_3__::func_661(0, iParam1))
				{
					__LIB_3__::func_664(1);
				}
				break;
			default:
				__LIB_5__::func_189(iParam1, 0, !bVar2);
				__LIB_5__::func_189(iParam1, 1, 0);
				__LIB_5__::func_189(iParam1, 2, 0);
				__LIB_3__::func_664(0);
				MISC::SET_BIT(&(iParam1->f_2), 6);
				break;
		}
		return;
	}
	else if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_5__::func_189(iParam1, 0, 1);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_863(iParam0, -1);
		}
		if (((iVar3 == 12 || iVar3 == 13) || iVar3 == 14) || iVar3 == 15)
		{
			iVar4 = 1;
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_863(iParam0, -1);
			__LIB_3__::func_664(iVar4);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var5, 1, 0, 0, 0, -2, -1, iVar4);
			}
			__LIB_7__::func_781(iVar4, 1);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var5, 0, 0, 1, 0, -2, -1, iVar4);
			}
			__LIB_7__::func_781(iVar4, 1);
		}
	}
	else
	{
		__LIB_3__::func_664(iVar4);
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2355(var uParam0, var uParam1)//Position - 0xE03B8
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	if (!__LIB_5__::func_797() && iVar0 != 1)
	{
		__LIB_3__::func_784(1);
	}
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_49(uParam0, uParam1);
			break;
		case 1:
			func_2356(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2356(var uParam0, var uParam1)//Position - 0xE040E
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4[3];
	var uVar5[3];
	char* sVar6;
	int iVar7;
	int iVar8;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	bVar2 = __LIB_5__::func_208();
	func_2017(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		if (bVar2 || (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_79[0 /*6*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[0 /*6*/]), __LIB_5__::func_207(0))))
		{
			uParam1->f_6 = 1;
			if (__LIB_3__::func_785() == 1)
			{
				uParam1->f_8 = 1;
				uParam1->f_11 = 10;
				uParam1->f_1 = 1;
				uParam1->f_10 = 1;
				__LIB_5__::func_462();
				if (bVar2)
				{
					__LIB_3__::func_664(1);
				}
				else if (BitTest(Global_1946250.f_8, 22))
				{
					__LIB_5__::func_202(PLAYER::PLAYER_ID());
				}
			}
			return;
		}
	}
	sVar6 = __LIB_3__::func_770();
	iVar8 = 0;
	while (iVar8 < 3)
	{
		uVar5[iVar7] = __LIB_5__::func_207(iVar8);
		if (__LIB_3__::func_782(iVar8, bVar0, bVar1))
		{
			iVar4[iVar7] = iVar8;
			if (!bVar3 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar7 /*6*/]), uVar5[iVar7]))
			{
				bVar3 = true;
			}
			iVar7++;
		}
		else if (!bVar3)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar7 /*6*/]), uVar5[iVar7]))
			{
				bVar3 = true;
			}
		}
		iVar8++;
	}
	if (uParam0->f_5 || bVar3)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CAR_MET_EXT_T" /* GXT: LS Car Meet */);
		__LIB_3__::func_566(1, sVar6, sVar6);
		__LIB_5__::func_270();
		iVar8 = 0;
		while (iVar8 < iVar7)
		{
			__LIB_10__::func_18(iVar8, uVar5[iVar8], 0, 1, 0, 0, 0);
			iVar8++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_3__::func_785() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			uParam1->f_10 = 1;
			__LIB_5__::func_462();
			if (bVar2)
			{
				__LIB_3__::func_664(1);
			}
			else if (BitTest(Global_1946250.f_8, 22))
			{
				__LIB_5__::func_202(PLAYER::PLAYER_ID());
			}
			if (iVar4[uParam0->f_4] != 0)
			{
				__LIB_8__::func_958(iVar4[uParam0->f_4], 154);
			}
		}
	}
	else if (uParam0->f_3)
	{
		uParam1->f_4 = !__LIB_5__::func_797();
		__LIB_5__::func_462();
		MISC::CLEAR_BIT(&(Global_1946250.f_8), 22);
	}
}

void func_2452(var uParam0, int iParam1)//Position - 0xE54D5
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 979717/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 979703/*__LIB_5__::func_475*/;
			break;
		case 1:
			uParam0->f_30 = 979611/*__LIB_5__::func_474*/;
			break;
		case 2:
			uParam0->f_31 = 979389/*__LIB_5__::func_473*/;
			break;
		case 3:
			uParam0->f_34 = 979232/*__LIB_3__::func_841*/;
			break;
		case 4:
			uParam0->f_12 = 979219/*__LIB_3__::func_840*/;
			break;
		case 5:
			uParam0->f_11 = 979209/*__LIB_3__::func_839*/;
			break;
		case 37:
			uParam0->f_18 = 979089/*__LIB_3__::func_838*/;
			break;
		case 38:
			uParam0->f_9 = 979041/*__LIB_6__::func_381*/;
			break;
		case 42:
			uParam0->f_10 = 979012/*__LIB_6__::func_380*/;
			break;
		case 6:
			uParam0->f_32 = 978924/*__LIB_3__::func_837*/;
			break;
		case 11:
			uParam0->f_11 = 978915/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 977170/*__LIB_9__::func_499*/;
			break;
		case 14:
			uParam0->f_11 = 977161/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 973053/*func_2598*/;
			break;
		case 8:
			uParam0->f_37 = 972576/*__LIB_3__::func_835*/;
			break;
		case 7:
			uParam0->f_36 = 972482/*__LIB_3__::func_834*/;
			break;
		case 79:
			*uParam0 = 972473/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 972411/*__LIB_42__::func_77*/;
			break;
		case 15:
			uParam0->f_2 = 972330/*__LIB_42__::func_79*/;
			break;
		case 16:
			uParam0->f_5 = 971432/*__LIB_9__::func_264*/;
			break;
		case 108:
			uParam0->f_55 = 968152/*__LIB_43__::func_422*/;
			break;
		case 17:
			uParam0->f_17 = 966880/*__LIB_12__::func_44*/;
			break;
		case 19:
			uParam0->f_17 = 966854/*__LIB_5__::func_954*/;
			break;
		case 20:
			uParam0->f_3 = 966639/*__LIB_6__::func_944*/;
			break;
		case 21:
			uParam0->f_3 = 966575/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 966471/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 966455/*__LIB_5__::func_472*/;
			break;
		case 22:
			uParam0->f_24 = 966348/*__LIB_5__::func_471*/;
			break;
		case 23:
			uParam0->f_26 = 966340/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 962359/*func_2550*/;
			break;
		case 25:
			uParam0->f_23 = 961909/*func_2547*/;
			break;
		case 27:
			uParam0->f_25 = 961901/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 961893/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 961256/*__LIB_6__::func_942*/;
			break;
		case 31:
			uParam0->f_39 = 961122/*__LIB_5__::func_217*/;
			break;
		case 33:
			uParam0->f_40 = 960248/*__LIB_7__::func_8*/;
			break;
		case 32:
			*uParam0 = 960045/*__LIB_7__::func_7*/;
			break;
		case 76:
			uParam0->f_13 = 959892/*__LIB_3__::func_821*/;
			break;
		case 34:
			uParam0->f_41 = 958280/*__LIB_5__::func_469*/;
			break;
		case 36:
			uParam0->f_58 = 958235/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 949197/*__LIB_5__::func_468*/;
			break;
		case 45:
			uParam0->f_14 = 949188/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 949179/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 949171/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 949148/*__LIB_3__::func_815*/;
			break;
		case 47:
			uParam0->f_43 = 949096/*__LIB_3__::func_814*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 948958/*__LIB_5__::func_859*/;
			break;
		case 49:
			uParam0->f_8 = 948940/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 948133/*__LIB_7__::func_835*/;
			break;
		case 51:
			*uParam0 = 948031/*__LIB_5__::func_716*/;
			break;
		case 52:
			uParam0->f_15 = 948020/*__LIB_3__::func_811*/;
			break;
		case 53:
			uParam0->f_13 = 947867/*func_2503*/;
			break;
		case 54:
			uParam0->f_45 = 947632/*func_2502*/;
			break;
		case 56:
			uParam0->f_46 = 947623/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 947210/*__LIB_7__::func_6*/;
			break;
		case 58:
			uParam0->f_13 = 947057/*__LIB_3__::func_808*/;
			break;
		case 59:
			*uParam0 = 947048/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 947039/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 947028/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 947017/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 947008/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 947000/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 945944/*__LIB_7__::func_51*/;
			break;
		case 66:
			uParam0->f_21 = 945724/*__LIB_3__::func_807*/;
			break;
		case 67:
			uParam0->f_21 = 945649/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 944960/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 944951/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 944939/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 944847/*__LIB_3__::func_806*/;
			break;
		case 107:
			uParam0->f_50 = 944835/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 944468/*__LIB_5__::func_858*/;
			break;
		case 84:
			uParam0->f_1 = 944459/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 943666/*func_2476*/;
			break;
		case 87:
			uParam0->f_1 = 942286/*__LIB_6__::func_416*/;
			break;
		case 88:
			uParam0->f_1 = 942277/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 942269/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 942260/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 942251/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 942242/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 942234/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 942226/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 942214/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 942205/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 886763/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 942196/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 942187/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 940967/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 940795/*__LIB_7__::func_783*/;
			break;
		case 124:
			uParam0->f_1 = 940786/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 940778/*__LIB_0__::func_467*/;
			break;
	}
}

int func_2476(int iParam0, var uParam1)//Position - 0xE6632
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	var uVar5;
	var uVar6;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1831(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1825(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_3__::func_805(iParam0, &Var1, &Var3, &uVar5, 1);
		__LIB_3__::func_805(iParam0, &Var2, &Var4, &uVar6, 0);
		__LIB_6__::func_27(&(Global_1946250.f_3638), 5000, "TD Shot", Var1, Var3, uVar5, Var2, Var4, uVar6, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_2502(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xE75B0
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	bVar0 = false;
	if (!__LIB_3__::func_809(PLAYER::PLAYER_ID(), __LIB_3__::func_810(iParam0)) && !__LIB_3__::func_809(__LIB_0__::func_797(), __LIB_3__::func_810(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_693(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_3__::func_809(iVar1, __LIB_3__::func_810(iParam0)) && __LIB_1__::func_688(iVar1))
				{
					Var3 = { __LIB_1__::func_696(iVar1) };
					if (__LIB_0__::func_800(Var3))
					{
						if (NETWORK::NETWORK_IS_FRIEND(&Var3))
						{
							iVar4 = joaat("AUT_SHP_FRIEND");
							if (iVar4 != *uParam4)
							{
								*uParam4 = iVar4;
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "AUT_SHP_FRIEND" /* GXT: Friend's Auto Shop */);
							}
							bVar0 = true;
						}
						else
						{
							iVar2++;
						}
						if (!bVar0 && *uParam4 == joaat("AUT_SHP_FRIEND"))
						{
							*uParam4 = joaat("AUT_SHP_EXT_T");
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "AUT_SHP_EXT_T" /* GXT: Auto Shop */);
						}
					}
Vector3 func_2503(int iParam0)//Position - 0xE769B
{
	switch (iParam0)
	{
		case 149:
			return 759.8774f, -677.6455f, 27.8356f;
			break;
		case 150:
			return -147.1386f, -1341.7018f, 28.9145f;
			break;
		case 151:
			return -171.7504f, -33.8705f, 51.256f;
			break;
		case 152:
			return 233.9541f, -1873.8497f, 25.5283f;
			break;
		case 153:
			return 489.2497f, -894.8347f, 24.7408f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_2547(int iParam0, int iParam1)//Position - 0xEAD75
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_830(iParam0) };
	if (__LIB_6__::func_944(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2017(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_8(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_784(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_784(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2550(var uParam0, var uParam1)//Position - 0xEAF37
{
	if (__LIB_3__::func_616() == 2 || __LIB_3__::func_616() == 1)
	{
		func_2553(uParam0, uParam1);
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_3__::func_809(__LIB_2__::func_39(PLAYER::PLAYER_ID()), __LIB_3__::func_810(*uParam0)))
	{
		__LIB_5__::func_218(uParam0, uParam1);
	}
	else
	{
		__LIB_3__::func_831(uParam1);
	}
}

void func_2553(var uParam0, var uParam1)//Position - 0xEB016
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_51(uParam0, uParam1);
			break;
		case 1:
			func_2565(uParam0, uParam1);
			break;
		case 2:
			__LIB_13__::func_484(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2565(var uParam0, var uParam1)//Position - 0xEBBF0
{
	var uVar0;
	var uVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_2017(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
	bVar2 = (uVar0 || uVar1);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_10 = PLAYER::PLAYER_ID();
		bVar2 = false;
	}
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 0;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_5__::func_462();
		if (__LIB_8__::func_922(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			__LIB_1__::func_767("AUTOS_PROP_ET" /* GXT: AUTO SHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 0;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_7__::func_8(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_2598(int iParam0, var uParam1, int iParam2)//Position - 0xED8FD
{
	var uVar0;
	var uVar1;
	bool bVar2;
	__LIB_3__::func_836(iParam0, &(uParam1->f_22.f_59), &(uParam1->f_22.f_62), &(uParam1->f_22.f_65), &(uParam1->f_22.f_66), 0);
	switch (iParam0)
	{
		case 149:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { 759.2274f, -676.1144f, 28.4832f };
						uParam1->f_22.f_16 = { 1.6526f, -0.0281f, 163.8247f };
						uParam1->f_22.f_20 = { 759.1586f, -676.3341f, 28.4767f };
						uParam1->f_22.f_23 = { -1.2492f, -0.0281f, 162.718f };
						uParam1->f_22.f_28 = { 758.865f, -677.805f, 27.851f };
						uParam1->f_22.f_31 = { 0f, 0f, -169.56f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 35.9236f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 35.9236f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 762.6814f, -670.9703f, 29.2607f };
						uParam1->f_22.f_16 = { -2.2932f, 0f, 155.9849f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 761.751f, -671.6803f, 29.2137f };
						uParam1->f_22.f_23 = { -2.2932f, 0f, 142.145f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 758.817f, -675.19f, 27.859f };
						uParam1->f_22.f_31 = { 0f, 0f, 86.76f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 150:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { -148.8068f, -1342.0701f, 30.7246f };
						uParam1->f_22.f_16 = { -34.2644f, -0.0028f, -60.8442f };
						uParam1->f_22.f_20 = { -148.5539f, -1341.93f, 30.5286f };
						uParam1->f_22.f_23 = { -29.8713f, -0.0028f, -66.758f };
						uParam1->f_22.f_28 = { -147.294f, -1341.401f, 29.079f };
						uParam1->f_22.f_31 = { 0f, 0f, 90f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 32.2852f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 32.2852f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_right";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { -141.0062f, -1343.925f, 30.1565f };
						uParam1->f_22.f_16 = { -1.2453f, 0f, 70.4482f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { -141.8038f, -1342.8387f, 30.1565f };
						uParam1->f_22.f_23 = { -1.4974f, 0f, 68.1876f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { -144.657f, -1340.95f, 29.104f };
						uParam1->f_22.f_31 = { 0f, 0f, 0f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 151:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { -171.5194f, -36.1929f, 51.856f };
						uParam1->f_22.f_16 = { -3.0092f, -0.0019f, 21.9527f };
						uParam1->f_22.f_20 = { -171.757f, -35.6036f, 51.825f };
						uParam1->f_22.f_23 = { 0.3106f, -0.0019f, 21.9527f };
						uParam1->f_22.f_28 = { -172.462f, -33.763f, 51.213f };
						uParam1->f_22.f_31 = { 0f, 0f, 166.32f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 27.0608f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 27.0608f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_right";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { -168.9393f, -35.3119f, 53.2555f };
						uParam1->f_22.f_16 = { -6.5936f, 0f, 28.147f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { -169.9362f, -34.4523f, 53.1079f };
						uParam1->f_22.f_23 = { -5.7999f, 0f, 21.853f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { -171.681f, -31.278f, 51.263f };
						uParam1->f_22.f_31 = { 0f, 0f, 66.96f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 152:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { 232.6328f, -1874.2069f, 26.443f };
						uParam1->f_22.f_16 = { -21.7924f, 0.0013f, -18.5176f };
						uParam1->f_22.f_20 = { 232.7041f, -1873.9943f, 26.4045f };
						uParam1->f_22.f_23 = { -8.5978f, 0.0013f, -18.5176f };
						uParam1->f_22.f_28 = { 233.075f, -1873.188f, 25.563f };
						uParam1->f_22.f_31 = { -4.32f, 0f, 167.76f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 35.3225f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 35.3225f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 235.8221f, -1874.9221f, 26.8194f };
						uParam1->f_22.f_16 = { -3.3056f, 0f, 105.796f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 234.5172f, -1874.7244f, 26.7432f };
						uParam1->f_22.f_23 = { -3.3056f, 0f, 115.5265f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 231.176f, -1875.411f, 25.388f };
						uParam1->f_22.f_31 = { 0f, 0f, 44.28f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 153:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { 488.4486f, -893.36f, 25.3835f };
						uParam1->f_22.f_16 = { -0.6473f, 0.0003f, 172.6925f };
						uParam1->f_22.f_20 = { 488.4122f, -893.6423f, 25.3794f };
						uParam1->f_22.f_23 = { 0.1603f, 0.0201f, 172.7169f };
						uParam1->f_22.f_28 = { 488.413f, -895.15f, 24.75f };
						uParam1->f_22.f_31 = { 0f, 0f, -180f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 33.1011f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 33.1011f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 491.9715f, -894.7998f, 26.1521f };
						uParam1->f_22.f_16 = { -3.0471f, 0f, 145.4612f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 490.8015f, -895.3118f, 26.0841f };
						uParam1->f_22.f_23 = { -1.2604f, 0f, 144.274f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 488.463f, -897.537f, 24.813f };
						uParam1->f_22.f_31 = { 0f, 0f, 90f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_22.f_5) && MISC::GET_HASH_KEY(uParam1->f_22.f_5) != joaat("buzz_short"))
	{
		if (iParam2 == 0)
		{
			uParam1->f_22.f_42 = 1;
		}
		else
		{
			if (!__LIB_2__::func_159(1) || (__LIB_2__::func_50() && __LIB_3__::func_809(PLAYER::PLAYER_ID(), __LIB_3__::func_810(iParam0))))
			{
				func_2017(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
				bVar2 = (uVar0 || uVar1);
			}
			if (!bVar2 && !__LIB_8__::func_922(iParam0))
			{
				uParam1->f_22.f_42 = 1;
			}
			else
			{
				uParam1->f_22.f_42 = 0;
			}
		}
	}
	else
	{
		uParam1->f_22.f_42 = 0;
	}
}

void func_2622(var uParam0, int iParam1)//Position - 0xEF30E
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 996045/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 996036/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 995968/*__LIB_5__::func_484*/;
			break;
		case 2:
			uParam0->f_31 = 995528/*__LIB_5__::func_861*/;
			break;
		case 3:
			uParam0->f_34 = 995380/*__LIB_3__::func_867*/;
			break;
		case 4:
			uParam0->f_12 = 995367/*__LIB_3__::func_866*/;
			break;
		case 37:
			uParam0->f_18 = 995141/*__LIB_5__::func_230*/;
			break;
		case 38:
			uParam0->f_9 = 995051/*__LIB_6__::func_870*/;
			break;
		case 39:
			uParam0->f_11 = 995031/*__LIB_5__::func_229*/;
			break;
		case 40:
			uParam0->f_6 = 994926/*__LIB_6__::func_869*/;
			break;
		case 41:
			uParam0->f_20 = 994901/*__LIB_5__::func_228*/;
			break;
		case 42:
			uParam0->f_10 = 994888/*__LIB_3__::func_865*/;
			break;
		case 6:
			uParam0->f_32 = 994824/*__LIB_3__::func_864*/;
			break;
		case 11:
			uParam0->f_11 = 994815/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 994278/*__LIB_5__::func_483*/;
			break;
		case 14:
			uParam0->f_11 = 994269/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 993329/*__LIB_5__::func_482*/;
			break;
		case 8:
			uParam0->f_37 = 993321/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 993312/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 993303/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 993241/*__LIB_42__::func_77*/;
			break;
		case 15:
			uParam0->f_2 = 993160/*__LIB_42__::func_80*/;
			break;
		case 16:
			uParam0->f_5 = 992833/*__LIB_9__::func_302*/;
			break;
		case 108:
			uParam0->f_55 = 992824/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 992813/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 992802/*__LIB_3__::func_860*/;
			break;
		case 18:
			uParam0->f_8 = 992760/*__LIB_6__::func_382*/;
			break;
		case 20:
			uParam0->f_3 = 992751/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 992703/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 992648/*__LIB_5__::func_284*/;
			break;
		case 75:
			uParam0->f_4 = 992639/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 992532/*__LIB_5__::func_481*/;
			break;
		case 23:
			uParam0->f_26 = 992524/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 992097/*func_2699*/;
			break;
		case 27:
			uParam0->f_25 = 992089/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 992081/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 992046/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 992018/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 991851/*__LIB_6__::func_868*/;
			break;
		case 76:
			uParam0->f_13 = 991828/*__LIB_3__::func_849*/;
			break;
		case 34:
			uParam0->f_41 = 988214/*__LIB_5__::func_480*/;
			break;
		case 36:
			uParam0->f_58 = 988169/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 984975/*__LIB_5__::func_955*/;
			break;
		case 45:
			uParam0->f_14 = 984966/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 984957/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 984949/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 984938/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 984767/*__LIB_5__::func_478*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 983494/*func_2672*/;
			break;
		case 49:
			uParam0->f_8 = 983485/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 983060/*__LIB_7__::func_869*/;
			break;
		case 51:
			*uParam0 = 983051/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 983035/*__LIB_3__::func_850*/;
			break;
		case 53:
			uParam0->f_13 = 983012/*__LIB_3__::func_849*/;
			break;
		case 54:
			uParam0->f_45 = 983004/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 982995/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 982982/*__LIB_3__::func_848*/;
			break;
		case 58:
			uParam0->f_13 = 982940/*__LIB_3__::func_847*/;
			break;
		case 59:
			*uParam0 = 982931/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 982922/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 982911/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 982900/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 982891/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 982883/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 982875/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 982262/*__LIB_5__::func_476*/;
			break;
		case 67:
			uParam0->f_21 = 982192/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 981503/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 981494/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 981482/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 981473/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 981461/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 981452/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 981443/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 981434/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 981425/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 981416/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 981408/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 981399/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 981390/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 981381/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 981373/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 981365/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 981353/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 981344/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 886763/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 981335/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 981326/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 940967/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 981318/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 981309/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 981301/*__LIB_0__::func_467*/;
			break;
	}
}

void func_2672(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0xF01C6
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	iVar0 = 0;
	iParam1 = (iParam1 - 1);
	iParam3->f_46 = __LIB_3__::func_854();
	MISC::SET_BIT(&(iParam3->f_2), 4);
	switch (iParam1)
	{
		case 0:
			__LIB_5__::func_189(iParam3, 0, 1);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 0);
			__LIB_5__::func_189(iParam3, 3, 1);
			__LIB_5__::func_189(iParam3, 4, 0);
			__LIB_5__::func_189(iParam3, 5, 0);
			break;
		case 1:
			__LIB_5__::func_189(iParam3, 0, 0);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 1);
			__LIB_5__::func_189(iParam3, 3, 1);
			__LIB_5__::func_189(iParam3, 4, 0);
			__LIB_5__::func_189(iParam3, 5, 0);
			break;
		case 3:
			__LIB_5__::func_189(iParam3, 0, 1);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 0);
			__LIB_5__::func_189(iParam3, 3, 0);
			__LIB_5__::func_189(iParam3, 4, 0);
			__LIB_5__::func_189(iParam3, 5, 0);
			break;
		case 2:
			__LIB_5__::func_189(iParam3, 0, 1);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 0);
			__LIB_5__::func_189(iParam3, 3, 0);
			break;
	}
	if (iParam1 == 2)
	{
		MISC::SET_BIT(&uVar3, PLAYER::PLAYER_ID());
		if (__LIB_6__::func_869(PLAYER::PLAYER_ID(), 148, uVar3, 1))
		{
			bVar1 = false;
			bVar2 = false;
		}
		else
		{
			func_2017(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar1, &bVar2, 1, 1);
		}
		__LIB_5__::func_189(iParam3, 4, bVar1);
		__LIB_5__::func_189(iParam3, 5, bVar2);
	}
	if (iParam3->f_3 != 0 && (iParam3->f_5 < iVar0 || iParam3->f_1 != 1))
	{
		return;
	}
	if (iParam3->f_3 == 0)
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	bVar4 = false;
	if (__LIB_3__::func_661(0, iParam3) || __LIB_3__::func_661(1, iParam3))
	{
		if (iParam1 == 2 || iParam1 == 3)
		{
			bVar4 = true;
			MISC::CLEAR_BIT(&(iParam3->f_2), 1);
		}
		else
		{
			return;
		}
	}
	else if (__LIB_3__::func_661(3, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 26);
		iParam3->f_5 = 0;
	}
	else if (__LIB_3__::func_661(2, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 27);
		iParam3->f_5 = 0;
	}
	else if (__LIB_3__::func_661(4, iParam3) || __LIB_3__::func_661(5, iParam3))
	{
		iVar5 = __LIB_6__::func_945(__LIB_3__::func_661(4, iParam3));
		__LIB_3__::func_852(iVar5);
		bVar4 = true;
	}
	if (bVar4)
	{
		if (__LIB_3__::func_845())
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 1);
		}
		else
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 0);
		}
		if (__LIB_5__::func_223())
		{
			MISC::SET_BIT(&(Global_1946250.f_6), 19);
		}
		else
		{
			__LIB_3__::func_768(iParam0, -1);
		}
	}
}

void func_2699(int iParam0, int iParam1)//Position - 0xF2361
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	int iVar3;
	if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar3 = __LIB_3__::func_616();
		Var2 = { __LIB_3__::func_859(iParam0, iVar3) };
		func_2017(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && Global_1946250.f_3606 != 148)
		{
			__LIB_6__::func_868(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_868(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_787();
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_787();
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2743(var uParam0, int iParam1)//Position - 0xF32D6
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1093483/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1093427/*__LIB_3__::func_975*/;
			break;
		case 2:
			uParam0->f_31 = 1092765/*__LIB_5__::func_965*/;
			break;
		case 3:
			uParam0->f_34 = 1092638/*__LIB_3__::func_974*/;
			break;
		case 4:
			uParam0->f_12 = 1092604/*__LIB_3__::func_973*/;
			break;
		case 5:
			uParam0->f_11 = 1092593/*__LIB_3__::func_972*/;
			break;
		case 6:
			uParam0->f_32 = 1092529/*__LIB_3__::func_971*/;
			break;
		case 111:
			uParam0->f_35 = 1092506/*__LIB_5__::func_245*/;
			break;
		case 79:
			*uParam0 = 1092497/*__LIB_0__::func_114*/;
			break;
		case 37:
			uParam0->f_18 = 1092379/*__LIB_3__::func_970*/;
			break;
		case 38:
			uParam0->f_9 = 1092282/*__LIB_6__::func_946*/;
			break;
		case 11:
			uParam0->f_11 = 1092273/*__LIB_3__::func_969*/;
			break;
		case 12:
			uParam0->f_33 = 1091883/*__LIB_8__::func_851*/;
			break;
		case 109:
			uParam0->f_56 = 1091573/*__LIB_7__::func_741*/;
			break;
		case 15:
			uParam0->f_2 = 1089617/*__LIB_7__::func_876*/;
			break;
		case 13:
			uParam0->f_2 = 1089608/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 1089599/*__LIB_0__::func_109*/;
			break;
		case 16:
			uParam0->f_5 = 1089216/*__LIB_9__::func_2*/;
			break;
		case 108:
			uParam0->f_55 = 1085298/*__LIB_31__::func_339*/;
			break;
		case 17:
			uParam0->f_17 = 1084557/*__LIB_9__::func_466*/;
			break;
		case 19:
			uParam0->f_17 = 1084531/*__LIB_5__::func_963*/;
			break;
		case 20:
			uParam0->f_3 = 1084362/*__LIB_8__::func_925*/;
			break;
		case 21:
			uParam0->f_3 = 1084299/*__LIB_5__::func_243*/;
			break;
		case 74:
			uParam0->f_53 = 1084147/*__LIB_5__::func_242*/;
			break;
		case 22:
			uParam0->f_24 = 1084062/*__LIB_3__::func_957*/;
			break;
		case 25:
			uParam0->f_23 = 1083191/*func_2988*/;
			break;
		case 30:
			uParam0->f_8 = 1081863/*__LIB_7__::func_837*/;
			break;
		case 31:
			uParam0->f_39 = 1081278/*__LIB_8__::func_924*/;
			break;
		case 33:
			uParam0->f_40 = 1080081/*__LIB_8__::func_963*/;
			break;
		case 14:
			uParam0->f_11 = 1080072/*__LIB_1__::func_806*/;
			break;
		case 34:
			uParam0->f_41 = 1077305/*__LIB_5__::func_495*/;
			break;
		case 36:
			uParam0->f_58 = 1077252/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1071800/*__LIB_5__::func_962*/;
			break;
		case 45:
			uParam0->f_14 = 1071791/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1071782/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1071774/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1071751/*__LIB_3__::func_943*/;
			break;
		case 47:
			uParam0->f_43 = 1071699/*__LIB_3__::func_942*/;
			break;
		case 49:
			uParam0->f_8 = 1071674/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1071636/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1071594/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1071583/*__LIB_3__::func_940*/;
			break;
		case 53:
			uParam0->f_13 = 1071504/*__LIB_6__::func_874*/;
			break;
		case 54:
			uParam0->f_45 = 1071496/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1071487/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1071477/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1071230/*__LIB_7__::func_737*/;
			break;
		case 64:
			uParam0->f_47 = 1070235/*__LIB_36__::func_62*/;
			break;
		case 65:
			uParam0->f_21 = 1069042/*__LIB_12__::func_12*/;
			break;
		case 66:
			uParam0->f_21 = 1067983/*__LIB_11__::func_659*/;
			break;
		case 67:
			uParam0->f_21 = 1067807/*__LIB_7__::func_956*/;
			break;
		case 68:
			*uParam0 = 1066283/*__LIB_8__::func_962*/;
			break;
		case 69:
			*uParam0 = 1066274/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1066262/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1066253/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1066241/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1065408/*__LIB_5__::func_961*/;
			break;
		case 73:
			uParam0->f_51 = 1065399/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 1064726/*__LIB_9__::func_517*/;
			break;
		case 85:
			uParam0->f_1 = 1063853/*func_2902*/;
			break;
		case 87:
			uParam0->f_1 = 1062640/*__LIB_9__::func_525*/;
			break;
		case 88:
			uParam0->f_1 = 1062620/*__LIB_3__::func_918*/;
			break;
		case 89:
			uParam0->f_54 = 1062526/*__LIB_3__::func_917*/;
			break;
		case 90:
			uParam0->f_1 = 1062395/*__LIB_5__::func_865*/;
			break;
		case 91:
			uParam0->f_1 = 1061749/*__LIB_5__::func_801*/;
			break;
		case 92:
			uParam0->f_1 = 1060981/*func_2884*/;
			break;
		case 94:
			uParam0->f_1 = 1060428/*__LIB_5__::func_960*/;
			break;
		case 95:
			uParam0->f_22 = 1059834/*__LIB_6__::func_383*/;
			break;
		case 18:
			uParam0->f_8 = 1059476/*__LIB_5__::func_959*/;
			break;
		case 96:
			uParam0->f_1 = 1059383/*__LIB_5__::func_800*/;
			break;
		case 97:
			uParam0->f_1 = 1058515/*__LIB_5__::func_864*/;
			break;
		case 98:
			uParam0->f_1 = 1002661/*func_2797*/;
			break;
		case 100:
			uParam0->f_22 = 999376/*__LIB_6__::func_440*/;
			break;
		case 101:
			uParam0->f_22 = 998217/*__LIB_6__::func_417*/;
			break;
		case 78:
			uParam0->f_59 = 998009/*__LIB_7__::func_788*/;
			break;
		case 104:
			uParam0->f_1 = 997569/*__LIB_5__::func_957*/;
			break;
		case 102:
			uParam0->f_1 = 997560/*__LIB_0__::func_109*/;
			break;
		case 103:
			uParam0->f_22 = 997448/*__LIB_5__::func_956*/;
			break;
		case 81:
			*uParam0 = 997405/*__LIB_3__::func_870*/;
			break;
	}
}

int func_2797(var uParam0, var uParam1)//Position - 0xF4CA5
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (__LIB_3__::func_894())
	{
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		MISC::SET_BIT(&(Global_1946250.f_7), 24);
		if (uParam1->f_218 != -1)
		{
			uParam1->f_218 = -1;
		}
		return 1;
	}
	else if (__LIB_5__::func_232())
	{
		func_2813(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 1);
		if (__LIB_0__::func_121(uParam1->f_140[0]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[0]))
			{
				return 0;
			}
			bVar0 = (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_1__::func_365(PLAYER::PLAYER_PED_ID()));
			Var1 = { __LIB_3__::func_903(Global_1946250.f_3377) };
			Var2 = { __LIB_3__::func_902(Global_1946250.f_3377) };
			sVar3 = __LIB_3__::func_888(0, 1);
			sVar4 = __LIB_3__::func_901(0, 1);
			__LIB_3__::func_900(&(Global_1946250.f_4073), 2600, "sub_exit", Var1, Var2, sVar3, sVar4, 0, 0, 500, 0, 2);
			sVar3 = __LIB_3__::func_888(bVar0, 0);
			sVar4 = __LIB_3__::func_901(bVar0, 0);
			Global_1946250.f_4073.f_394 = PED::CREATE_SYNCHRONIZED_SCENE(Var1, Var2, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], Global_1946250.f_4073.f_394, sVar3, sVar4, 1000f, -1000f, 0, 0, 1000f, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_140[0], false, false);
			MISC::SET_BIT(&(Global_1946250.f_2), 20);
			MISC::SET_BIT(&(Global_1946250.f_5), 27);
			NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			return 1;
		}
	}
	else
	{
		Var6 = { uParam1->f_28 };
		Var7 = { uParam1->f_31 };
		iVar8 = -1;
		if (__LIB_3__::func_887(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("seasparrow3");
			iVar8 = 0;
			if (PLAYER::PLAYER_ID() == Global_1853194)
			{
				STREAMING::REQUEST_MODEL(joaat("seasparrow2"));
			}
			if (!__LIB_5__::func_863(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_3__::func_886(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("avisa");
			iVar8 = 1;
			if (!__LIB_5__::func_863(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_3__::func_879(PLAYER::PLAYER_ID()))
		{
			iVar5 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
			iVar8 = 2;
			if (!__LIB_5__::func_863(uParam1, iVar8))
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			iVar9 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			Var6 = { ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true) };
			Var7 = { ENTITY::GET_ENTITY_ROTATION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2) };
			func_1831(&iVar9, &(uParam1->f_109), 4);
			__LIB_3__::func_633(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var6, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam1->f_109, Var7, 2, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			if (__LIB_3__::func_879(PLAYER::PLAYER_ID()))
			{
				VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam1->f_109, false);
				VEHICLE::TRANSFORM_TO_SUBMARINE(uParam1->f_109, true);
			}
			__LIB_5__::func_489(uParam1->f_109);
			return 0;
		}
		__LIB_3__::func_882(1);
		if (__LIB_5__::func_488())
		{
			__LIB_5__::func_862(iVar8);
			__LIB_3__::func_900(&(Global_1946250.f_4073), 6000, "Submarine INT exit", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
			Global_1946250.f_4073.f_394 = PED::CREATE_SYNCHRONIZED_SCENE(uParam1->f_28, uParam1->f_31, 2);
			iVar10 = 0;
			while (iVar10 < uParam1->f_219)
			{
				if (iVar10 < 3)
				{
					if (__LIB_0__::func_121(uParam1->f_176[iVar10]))
					{
						if (iVar10 == 0)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_228))
							{
								uParam1->f_218 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FROM_ENTITY(uParam1->f_218, uParam1->f_230, uParam1->f_176[iVar10], uParam1->f_228, false, 0);
							}
							__LIB_3__::func_896(uParam1, uParam1->f_176[iVar10]);
						}
						__LIB_3__::func_895(&Var6, &Var7, uParam1, iVar10);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_176[iVar10], Var6, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(uParam1->f_176[iVar10], Var7, 2, true);
						if (!ENTITY::IS_ENTITY_VISIBLE(uParam1->f_176[iVar10]))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[iVar10], true, false);
						}
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam1->f_176[iVar10], Global_1946250.f_4073.f_394, uParam1->f_221[iVar10], uParam1->f_3, 1000f, -1000f, 0, 1000f);
					}
				}
				iVar10++;
			}
			if (__LIB_0__::func_121(uParam1->f_109))
			{
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam1->f_109, Global_1946250.f_4073.f_394, uParam1->f_7, uParam1->f_3, 1000f, -1000f, 0, 1000f);
			}
			MISC::SET_BIT(&(Global_1946250.f_7), 29);
			MISC::SET_BIT(&(Global_1946250.f_2), 20);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar5);
			return 1;
		}
	}
	return 0;
}

int func_2813(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xF5768
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_1826(uParam0, iVar0, bParam2, bParam3))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (!func_2814(uParam0, bParam1))
		{
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
	}
	return 1;
}

int func_2814(var uParam0, int iParam1)//Position - 0xF57C6
{
	int iVar0;
	struct<10> Var1;
	if (__LIB_3__::func_140(iParam1))
	{
		iVar0 = __LIB_7__::func_53(iParam1);
		Var1.f_1 = -1;
		Var1.f_2 = -1;
		Var1.f_3 = -1;
		Var1.f_4 = -1;
		Var1.f_8 = -1;
		Var1.f_9 = 50;
		Var1.f_0 = *uParam0;
		Var1.f_6 = 1;
		func_2818(&Var1, __LIB_3__::func_353(iVar0), 0, 1, 1, !__LIB_5__::func_723(), 0, __LIB_7__::func_52(), __LIB_3__::func_904(__LIB_5__::func_491(iParam1), 0), __LIB_3__::func_352(iVar0));
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(iParam1, 0), false);
		if (GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(iParam1, 0), __LIB_5__::func_490(iParam1, 2)))
		{
		}
		return 1;
	}
	return 0;
}

int func_2818(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0xF58E5
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	struct<14> Var12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<4> Var17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	bool bVar24;
	int iVar25;
	var uVar26;
	var uVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	struct<7> Var35;
	struct<9> Var36;
	int iVar37;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Global_78200[iVar0] = -1;
		Global_78200.f_13[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_78200.f_26)
	{
		Global_78200.f_26[iVar0] = -1;
		Global_78200.f_36[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_78200.f_46)
	{
		Global_78200.f_46[iVar0] = -1;
		iVar0++;
	}
	if (!PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam0);
		if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
		{
			bVar2 = false;
			if (uParam0->f_1 != -1 && uParam0->f_1 != 1711)
			{
				bVar2 = true;
			}
			if (uParam0->f_2 != -1 && uParam0->f_2 != 334)
			{
				bVar2 = true;
			}
			else if ((uParam0->f_2 == -1 && bParam1) && bParam2)
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				bVar3 = false;
				if (!bParam2)
				{
					if (__LIB_6__::func_447(&Global_78200, *uParam0, bParam1))
					{
						bVar3 = true;
					}
				}
				if ((bParam1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
				{
					if (__LIB_3__::func_344(&Global_78200, *uParam0, bParam2, bParam4))
					{
						bVar3 = true;
					}
				}
				iVar4 = -1;
				if (uParam0->f_3 != -1)
				{
					if (__LIB_3__::func_376(*uParam0, &Global_78200, uParam0->f_3, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (uParam0->f_4 != -1)
				{
					if (__LIB_3__::func_376(*uParam0, &Global_78200, uParam0->f_4, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (bVar3)
				{
					switch (uParam0->f_6)
					{
						case 0:
							bVar5 = true;
							if (!__LIB_3__::func_337(uParam0, &Global_78200))
							{
								bVar5 = false;
							}
							if (bVar5)
							{
								uParam0->f_6 = 1;
							}
							break;
						case 1:
							if (!bParam6)
							{
								PED::CLEAR_ALL_PED_PROPS(*uParam0);
								PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
								PED::REMOVE_PED_HELMET(*uParam0, true);
								if (bParam3)
								{
									PED::CLEAR_PED_WETNESS(*uParam0);
									PED::CLEAR_PED_BLOOD_DAMAGE(*uParam0);
								}
								iVar6 = 0;
								iVar7 = PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 5);
								iVar8 = -1;
								iVar7 = iVar7;
								iVar8 = iVar8;
								if (__LIB_1__::func_608(*uParam0))
								{
									iVar6 = 1;
								}
								if (iVar6 && bParam5)
								{
									Global_78200[5] = 0;
									if (Global_78200.f_13[5] == -1)
									{
										Global_78200.f_13[5] = 0;
									}
								}
								if (bParam1)
								{
									if (((uParam0->f_2 != -1 && uParam0->f_2 != -2) && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										if (__LIB_3__::func_336(uParam0->f_2) == 22)
										{
											Global_78200.f_26[2] = -1;
										}
										else if ((((__LIB_3__::func_336(uParam0->f_2) == 8 || __LIB_3__::func_336(uParam0->f_2) == 50) || __LIB_3__::func_336(uParam0->f_2) == 47) || uParam0->f_2 == 286) || uParam0->f_2 == 287)
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
										}
										else
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
											Global_78200.f_26[0] = -1;
											if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
											{
												PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
											}
										}
										if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
										{
											if (__LIB_3__::func_343(iVar1, 7, __LIB_0__::func_206(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
											{
												Global_78200[7] = 0;
												Global_78200.f_13[7] = 0;
											}
										}
									}
									else if (uParam0->f_2 == -2)
									{
										iVar9 = FILES::GET_HASH_NAME_FOR_COMPONENT(*uParam0, 1, Global_78200[1], Global_78200.f_13[1]);
										if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("FORCE_PROP"), 0) && PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1) == Global_78200[1])
										{
										}
										else
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
											Global_78200.f_26[0] = -1;
											if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
											{
												if (__LIB_3__::func_343(iVar1, 7, __LIB_0__::func_206(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
												{
													Global_78200[7] = 0;
													Global_78200.f_13[7] = 0;
												}
											}
											if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
											{
												PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
											}
										}
									}
									else if (uParam0->f_2 == -1 && bParam2)
									{
										Global_78200.f_26[1] = -1;
										Global_78200.f_26[2] = -1;
										Global_78200.f_26[0] = -1;
										if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
										{
											PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
										}
									}
								}
								__LIB_4__::func_984(*uParam0, &Global_78200, uParam0->f_8);
								if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 != -1 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && PLAYER::PLAYER_ID() != -1)
								{
									if (BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12179, 4))
									{
										if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 7 || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 2)
										{
											PED::SET_PED_HEAD_OVERLAY(*uParam0, 4, 0, 0f);
										}
									}
								}
								GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, "", "");
								bVar11 = false;
								iVar0 = 0;
								while (iVar0 < 12)
								{
									if (Global_78200[iVar0] != -1)
									{
										if (iVar0 == 10 && iParam7 != -1)
										{
											iVar10 = __LIB_0__::func_206(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
											if (__LIB_3__::func_342(iVar1, 10, iVar10, -1))
											{
												if (iParam7 == 0)
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
												else if (iParam7 == 1)
												{
													if (*uParam0 == PLAYER::PLAYER_PED_ID() && !__LIB_1__::func_526())
													{
														PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
													}
													else
													{
														PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
														PED::SET_PED_ENABLE_CREW_EMBLEM(*uParam0, true);
													}
												}
												else if (iParam7 == 2)
												{
													GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), false);
													GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_5__::func_490(PLAYER::PLAYER_ID(), 2));
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
												}
												else
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
											}
											else
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
											}
										}
										else
										{
											if (iVar0 == 1)
											{
											}
											else if (iVar0 == 2)
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, Global_78200[1], Global_78200.f_13[1], 0);
												bVar11 = true;
											}
											else if (Global_78200[iVar0] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(*uParam0, iVar0) || Global_78200.f_13[iVar0] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(*uParam0, iVar0, Global_78200[iVar0]))
											{
											}
											else
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
											}
											if (iVar0 == 10)
											{
												iVar10 = __LIB_0__::func_206(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
												if (__LIB_3__::func_342(iVar1, 10, iVar10, -1))
												{
													PED::SET_PED_ENABLE_CREW_EMBLEM(*uParam0, true);
												}
											}
										}
									}
									iVar0++;
								}
								if (!bVar11 && Global_78200[1] != -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, Global_78200[1], Global_78200.f_13[1], 0);
								}
								iVar0 = 0;
								while (iVar0 < Global_78200.f_26)
								{
									if (Global_78200.f_26[iVar0] != -1 && Global_78200.f_26[iVar0] != 255)
									{
										__LIB_0__::func_454(*uParam0, iVar0, Global_78200.f_26[iVar0], Global_78200.f_36[iVar0]);
									}
									iVar0++;
								}
								if (*uParam0 == PLAYER::PLAYER_PED_ID())
								{
									if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(*uParam0, 8, joaat("SCUBA_GEAR")))
									{
										if (iVar1 == joaat("MP_M_Freemode_01"))
										{
											PLAYER::SET_PLAYER_PREVIOUS_VARIATION_DATA(PLAYER::PLAYER_ID(), 8, 15, 0, 0, 0);
										}
										else if (iVar1 == joaat("MP_F_Freemode_01"))
										{
											PLAYER::SET_PLAYER_PREVIOUS_VARIATION_DATA(PLAYER::PLAYER_ID(), 8, 3, 0, 0, 0);
										}
									}
								}
								if ((iVar6 && !bParam5) && *uParam0 == PLAYER::PLAYER_PED_ID())
								{
									__LIB_5__::func_722(PLAYER::PLAYER_ID(), -1, -1);
								}
								if (!func_1828(*uParam0))
								{
									if (uParam0->f_2 >= 52 && uParam0->f_2 <= 59)
									{
										PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Global_78200.f_26[0], true);
										PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Global_78200.f_36[0]);
										__LIB_3__::func_335(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 1);
									}
									else
									{
										Var12 = { __LIB_3__::func_310(iVar1, 14, __LIB_1__::func_360(589, -1, 0), -1) };
										if (Var12.f_3 != -1 && Var12.f_4 != -1)
										{
											if (__LIB_0__::func_348(iVar1, 14, __LIB_1__::func_360(589, -1, 0), -1))
											{
												PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Var12.f_3, true);
												PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Var12.f_4);
												__LIB_3__::func_335(*uParam0, Var12.f_3, Var12.f_4, 1);
											}
										}
										PED::SET_PED_CONFIG_FLAG(*uParam0, 34, false);
										PED::SET_PED_CONFIG_FLAG(*uParam0, 36, false);
									}
								}
								else if (Global_78200.f_26[0] != -1 && Global_78200.f_26[0] != 255)
								{
									__LIB_3__::func_335(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 0);
								}
								if (!__LIB_0__::func_157(0))
								{
									if (uParam0->f_3 != -1)
									{
										func_2827(*uParam0, uParam0->f_3, uParam0->f_8);
									}
									if ((uParam0->f_4 != -1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										func_2827(*uParam0, uParam0->f_4, uParam0->f_8);
									}
									if ((*uParam0 == PLAYER::PLAYER_PED_ID() && uParam0->f_1 != 0) && uParam0->f_1 != -1)
									{
										__LIB_1__::func_354(2065, 1, -1, 1, 0);
									}
									if ((((((((((((((((__LIB_1__::func_102(*uParam0, 7) && uParam0->f_1 != 1147) && uParam0->f_1 != 1148) && uParam0->f_1 != 1149) && uParam0->f_1 != 1150) && uParam0->f_1 != 1155) && uParam0->f_1 != 1156) && uParam0->f_1 != 1157) && uParam0->f_1 != 1158) && uParam0->f_1 != 1265) && uParam0->f_1 != 1266) && uParam0->f_1 != 1267) && uParam0->f_1 != 1268) && uParam0->f_1 != 1261) && uParam0->f_1 != 1262) && uParam0->f_1 != 1263) && uParam0->f_1 != 1264)
									{
										if (!bParam1 || uParam0->f_2 == -1)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
											PED::CLEAR_PED_PROP(*uParam0, 0);
										}
									}
									else if (__LIB_3__::func_334(*uParam0))
									{
										iVar13 = __LIB_3__::func_333(*uParam0, 1);
										iVar14 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar13, iVar14, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									else if (!__LIB_3__::func_334(*uParam0) && __LIB_3__::func_332(*uParam0))
									{
										iVar15 = __LIB_3__::func_333(*uParam0, 0);
										iVar16 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar15, iVar16, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									if (!bParam9)
									{
										func_1494(*uParam0);
									}
									if (uParam0->f_3 != 4 && uParam0->f_1 == 0)
									{
										if (iVar1 == joaat("MP_M_Freemode_01"))
										{
											FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_HAIR_0_0"), &Var17);
										}
										else if (iVar1 == joaat("MP_F_Freemode_01"))
										{
											FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_HAIR_0_0"), &Var17);
										}
										if (Global_78200[2] == Var17.f_3)
										{
											Global_78200[2] = -1;
										}
									}
									if (__LIB_3__::func_331(uParam0->f_1))
									{
										if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_20 == 0)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 0, 0, 0);
											__LIB_0__::func_454(*uParam0, 0, -1, 0);
											__LIB_0__::func_454(*uParam0, 1, -1, 0);
											__LIB_0__::func_454(*uParam0, 2, -1, 0);
											func_1394(*uParam0, 14, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
											PED::SET_PED_CONFIG_FLAG(*uParam0, 380, true);
										}
									}
									if (Global_78200[2] == -1)
									{
										if ((uParam0->f_8 != -1 && PLAYER::INT_TO_PLAYERINDEX(uParam0->f_8) != PLAYER::PLAYER_ID()) && !*uParam0 == PLAYER::PLAYER_PED_ID())
										{
											iVar18 = Global_2689235[uParam0->f_8 /*453*/].f_249;
											iVar19 = Global_2689235[uParam0->f_8 /*453*/].f_250;
											iVar20 = 1;
											func_1394(*uParam0, 2, Global_2689235[uParam0->f_8 /*453*/].f_248, 0, -1, 0, 0, iVar20, iVar18, iVar19, uParam0->f_8, 1, 0, 0);
										}
										else
										{
											iVar18 = __LIB_1__::func_360(2153, -1, 0);
											iVar19 = __LIB_1__::func_360(2160, -1, 0);
											if (__LIB_1__::func_342(161, -1))
											{
												iVar21 = __LIB_1__::func_360(2053, -1, 0);
												if (iVar21 != -99)
												{
													iVar22 = -99;
													if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_M_Freemode_01"))
													{
														iVar22 = __LIB_0__::func_463(iVar21);
													}
													else if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
													{
														iVar22 = __LIB_0__::func_462(iVar21);
													}
													if (iVar22 != -99 && iVar21 != iVar22)
													{
														iVar21 = iVar22;
													}
												}
												if (MISC::IS_PC_VERSION())
												{
													if (iVar1 == joaat("MP_M_Freemode_01"))
													{
														iVar21 = __LIB_0__::func_463(iVar21);
													}
													else if (iVar1 == joaat("MP_F_Freemode_01"))
													{
														iVar21 = __LIB_0__::func_462(iVar21);
														if (iVar21 == __LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4) || iVar21 == __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4)))
														{
															iVar21 = __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4));
														}
														else if (iVar21 == __LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4) || iVar21 == __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4)))
														{
															iVar21 = __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4));
														}
													}
												}
												func_1394(*uParam0, 2, iVar21, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
											else
											{
												iVar23 = __LIB_1__::func_360(753, -1, 0);
												func_1394(*uParam0, 2, iVar23, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
										}
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 1), 0);
									}
								}
							}
							if (!__LIB_0__::func_157(0))
							{
								iVar25 = -1;
								if (uParam0->f_1 == 0)
								{
									bVar24 = false;
								}
								else
								{
									bVar24 = true;
									if (uParam0->f_1 == 1642)
									{
										iVar25 = Global_78200.f_46[0];
									}
								}
								if (uParam0->f_8 != -1)
								{
									func_2821(*uParam0, &(Global_1886249[uParam0->f_8 /*51*/]), bVar24, iVar25);
								}
								else
								{
									func_1444(*uParam0, bVar24, 0, iVar25);
								}
								if (iParam8 != -1)
								{
									iVar28 = FILES::GET_HASH_NAME_FOR_COMPONENT(*uParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 11), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 11));
									if (__LIB_3__::func_330(iVar28, iParam8, &uVar26, &uVar27))
									{
										Global_78200.f_46[0] = uVar27;
									}
								}
								iVar29 = 0;
								while (iVar29 < Global_78200.f_46)
								{
									if (Global_78200.f_46[iVar29] != -1)
									{
										bVar30 = true;
									}
									iVar29++;
								}
								if (bVar30)
								{
									iVar37 = __LIB_0__::func_276(*uParam0);
									iVar33 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar37);
									iVar31 = 0;
									while (iVar31 < 127)
									{
										if (__LIB_0__::func_445(&Var36, iVar31, iVar37, *uParam0, -1))
										{
											iVar29 = 0;
											while (iVar29 < Global_78200.f_46)
											{
												if (Global_78200.f_46[iVar29] == Var36.f_5 && Global_78200.f_46[iVar29] != -1)
												{
													bVar34 = false;
													if (Var36.f_8 == joaat("crewLogo"))
													{
														if (iParam7 == 0)
														{
															bVar34 = true;
														}
														else if (iParam7 == 1)
														{
														}
														else if (iParam7 == 2)
														{
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_5__::func_490(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var36.f_4, Var36.f_5);
														__LIB_0__::func_260(*uParam0, Var36.f_4, Var36.f_5);
													}
												}
												iVar29++;
											}
										}
										iVar31++;
									}
									iVar32 = 0;
									while (iVar32 < iVar33)
									{
										if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar37, iVar32, &Var35))
										{
											iVar29 = 0;
											while (iVar29 < Global_78200.f_46)
											{
												if (Global_78200.f_46[iVar29] == Var35.f_3 && Global_78200.f_46[iVar29] != -1)
												{
													bVar34 = false;
													if (Var35.f_6 == joaat("crewLogo"))
													{
														if (iParam7 == 0)
														{
															bVar34 = true;
														}
														else if (iParam7 == 1)
														{
														}
														else if (iParam7 == 2)
														{
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_5__::func_490(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var35.f_2, Var35.f_3);
														__LIB_0__::func_260(*uParam0, Var35.f_2, Var35.f_3);
													}
												}
												iVar29++;
											}
										}
										iVar32++;
									}
								}
							}
							PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*uParam0, false, 0);
							__LIB_3__::func_329(*uParam0);
							uParam0->f_6 = 2;
							break;
						case 2:
							if (!__LIB_0__::func_157(0))
							{
								if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0) || !PED::HAS_PED_HEAD_BLEND_FINISHED(*uParam0))
								{
									return 0;
								}
								else
								{
									PED::FINALIZE_HEAD_BLEND(*uParam0);
									__LIB_3__::func_329(*uParam0);
									uParam0->f_7 = 1;
									uParam0->f_6 = 0;
									uParam0->f_5 = 0;
									return 1;
								}
							}
							else
							{
								__LIB_3__::func_329(*uParam0);
								uParam0->f_7 = 1;
								uParam0->f_6 = 0;
								uParam0->f_5 = 0;
								return 1;
							}
							break;
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_2821(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0xF6ED2
{
	struct<9> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<8> Var8;
	int iVar9;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar1 = __LIB_0__::func_276(iParam0);
		bVar2 = func_1474(iParam0, 0);
		bVar3 = __LIB_1__::func_37(iParam0);
		bVar4 = func_1467(iParam0, iParam3);
		if (bParam2)
		{
			bVar3 = true;
		}
		iVar5 = 0;
		while (iVar5 < 127)
		{
			if (BitTest((*uParam1)[(iVar5 / 32)], (iVar5 % 32)))
			{
				if (__LIB_0__::func_445(&Var0, iVar5, iVar1, iParam0, -1))
				{
					if (__LIB_2__::func_998(iParam0, &Var0, iVar5, Var0.f_4, Var0.f_8, bVar2, bVar3, bParam2, bVar4))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var0.f_4, Var0.f_5);
					}
				}
			}
			iVar5++;
		}
		if (BitTest((*uParam1)[(123 / 32)], (123 % 32)))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar7 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar1);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar1, iVar6, &Var8))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var8.f_0))
				{
					iVar9 = (129 + iVar6);
					if ((iVar9 / 32) >= *uParam1)
					{
					}
					else if (BitTest((*uParam1)[(iVar9 / 32)], (iVar9 % 32)))
					{
						if (__LIB_2__::func_998(iParam0, &(Var8.f_7), iVar9, Var8.f_2, Var8.f_6, bVar2, bVar3, bParam2, bVar4))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var8.f_2, Var8.f_3);
							__LIB_0__::func_260(iParam0, Var8.f_2, Var8.f_3);
						}
					}
				}
			}
			iVar6++;
		}
	}
}

void func_2827(int iParam0, int iParam1, int iParam2)//Position - 0xF7478
{
	struct<37> Var0;
	int iVar1;
	int iVar2;
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 9;
	Var0.f_36 = 9;
	Var0.f_46 = 3;
	iVar1 = -1;
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	}
	iVar2 = 0;
	while (iVar2 < 12)
	{
		Var0[iVar2] = -1;
		Var0.f_13[iVar2] = -1;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Var0.f_26)
	{
		Var0.f_26[iVar2] = -1;
		Var0.f_36[iVar2] = -1;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Var0.f_46)
	{
		Var0.f_46[iVar2] = -1;
		iVar2++;
	}
	if (__LIB_3__::func_376(iParam0, &Var0, iParam1, &iVar1))
	{
		if ((iParam1 == 1 || iParam1 == 4) || iParam1 == 3)
		{
			func_2828(iParam0);
			__LIB_4__::func_984(iParam0, &Var0, iParam2);
		}
		if (iParam1 == 11)
		{
			if (iVar1 != -1)
			{
				if (__LIB_3__::func_336(iVar1) == 22)
				{
					Var0.f_26[2] = -1;
				}
				else if (__LIB_3__::func_336(iVar1) == 8)
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
				}
				else
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
					Var0.f_26[0] = -1;
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
				{
					if (__LIB_3__::func_343(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_1508(iParam0, 7, -1), -1))
					{
						Var0[7] = 0;
						Var0.f_13[7] = 0;
					}
				}
			}
			__LIB_4__::func_984(iParam0, &Var0, iParam2);
		}
		else if (iParam1 == 3)
		{
			PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0), 100f);
		}
		iVar2 = 0;
		while (iVar2 < 12)
		{
			if (Var0[iVar2] != -1)
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar2, Var0[iVar2], Var0.f_13[iVar2], 0);
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < Var0.f_26)
		{
			if (Var0.f_26[iVar2] != -1 && Var0.f_26[iVar2] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar2, Var0.f_26[iVar2], Var0.f_36[iVar2], true);
			}
			iVar2++;
		}
	}
}

void func_2828(int iParam0)//Position - 0xF7684
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_3__::func_521(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_2829(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_2829(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xF7719
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		Global_78200[iVar1] = -1;
		Global_78200.f_13[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_78200.f_26)
	{
		Global_78200.f_26[iVar1] = -1;
		Global_78200.f_36[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_78200.f_46)
	{
		Global_78200.f_46[iVar1] = -1;
		iVar1++;
	}
	bVar2 = false;
	if (__LIB_3__::func_376(iParam0, &Global_78200, iParam1, &iParam3))
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_78200[iVar1] != -1)
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar1) == Global_78200[iVar1] && PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar1) == Global_78200.f_13[iVar1])
				{
					if (iVar1 == 2)
					{
						bVar0 = true;
					}
					if (iVar1 == 1)
					{
						bVar2 = true;
					}
					PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar1, 0, 0, 0);
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < Global_78200.f_26)
		{
			if (Global_78200.f_26[iVar1] != -1 && Global_78200.f_26[iVar1] != 255)
			{
				if (PED::GET_PED_PROP_INDEX(iParam0, iVar1) == Global_78200.f_26[iVar1] && PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iVar1) == Global_78200.f_36[iVar1])
				{
					PED::CLEAR_PED_PROP(iParam0, iVar1);
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			if (!__LIB_0__::func_157(0))
			{
				if (__LIB_1__::func_342(161, -1))
				{
					func_1394(iParam0, 2, __LIB_1__::func_360(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_1394(iParam0, 2, __LIB_1__::func_360(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
		if (iParam1 == 4)
		{
			if (bVar2)
			{
				if (iParam2 != -1 && iParam2 != PLAYER::PLAYER_ID())
				{
					if (NETWORK::NETWORK_HAS_CACHED_PLAYER_HEAD_BLEND_DATA(PLAYER::INT_TO_PLAYERINDEX(iParam2)))
					{
						NETWORK::NETWORK_APPLY_CACHED_PLAYER_HEAD_BLEND_DATA(iParam0, PLAYER::INT_TO_PLAYERINDEX(iParam2));
					}
				}
				else
				{
					__LIB_2__::func_996(iParam0, -1);
				}
			}
			__LIB_1__::func_207(0);
			__LIB_2__::func_467(1, 2);
		}
	}
}

int func_2884(var uParam0, var uParam1)//Position - 0x103075
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_3__::func_616();
	iVar2 = 0;
	iVar3 = -1;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar2);
	}
	else
	{
		iVar1 = __LIB_3__::func_915();
	}
	__LIB_3__::func_914(&iVar1);
	switch (iVar0)
	{
		case 4:
			switch (iVar1)
			{
				case joaat("avisa"):
					iVar3 = 1;
					if (!__LIB_5__::func_863(uParam1, iVar3))
					{
						return 0;
					}
					break;
				default:
					iVar3 = 2;
					if (!__LIB_5__::func_863(uParam1, iVar3))
					{
						return 0;
					}
					break;
			}
			break;
		case 3:
			switch (iVar1)
			{
				case joaat("seasparrow3"):
					iVar3 = 0;
					if (!__LIB_5__::func_863(uParam1, iVar3))
					{
						return 0;
					}
					break;
				default:
					return 1;
					break;
			}
			break;
		default:
			return 1;
			break;
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && iVar2 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1831(&iVar2, &(uParam1->f_109), 4);
			__LIB_3__::func_633(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
			__LIB_5__::func_489(uParam1->f_109);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar2, false);
			}
			if (iVar1 == joaat("stromberg") || iVar1 == joaat("toreador"))
			{
				VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam1->f_109, false);
				VEHICLE::TRANSFORM_TO_SUBMARINE(uParam1->f_109, true);
			}
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		uParam1->f_109 = VEHICLE::CREATE_VEHICLE(iVar1, uParam1->f_28, 0f, false, false, true);
		__LIB_3__::func_633(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
		VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
		__LIB_5__::func_489(uParam1->f_109);
		return 0;
	}
	if (iVar2 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
		{
			func_2813(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
			return 0;
		}
		if (__LIB_0__::func_121(uParam1->f_2) && __LIB_0__::func_121(uParam1->f_109))
		{
			if (__LIB_2__::func_899())
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, __LIB_3__::func_890());
			}
			else
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, -1);
			}
		}
	}
	__LIB_5__::func_862(iVar3);
	__LIB_3__::func_900(&(Global_1946250.f_4073), 6000, "Submarine INT enter", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	return 1;
}

int func_2902(int iParam0, var uParam1)//Position - 0x103BAD
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	if (__LIB_5__::func_236())
	{
		return 1;
	}
	if (__LIB_9__::func_315())
	{
		return 1;
	}
	iVar0 = __LIB_3__::func_616();
	iVar1 = __LIB_5__::func_493();
	Var2 = { __LIB_7__::func_791(iParam0, iVar0) };
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
	{
		if (func_2813(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_2, __LIB_3__::func_921(iParam0, iVar0, iVar1), false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam1->f_2, __LIB_7__::func_736(iParam0, iVar0));
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		func_1831(&iVar1, &(uParam1->f_109), 32);
		__LIB_3__::func_633(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var2, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, __LIB_7__::func_790(iParam0, iVar0));
		VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
		ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && __LIB_0__::func_121(uParam1->f_109))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_109, true) };
		Var4 = { ENTITY::GET_ENTITY_ROTATION(uParam1->f_109, 2) };
		iVar5 = __LIB_3__::func_920(iParam0, iVar0);
		__LIB_3__::func_900(&(Global_1946250.f_3638), iVar5, "Submarine enter", Var3, Var4, uParam1->f_3, uParam1->f_8, 1, 0, 0, 0, 2);
		return 1;
	}
	return 0;
}

void func_2988(int iParam0, int iParam1)//Position - 0x108737
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	int iVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_8__::func_925(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(iVar7)) && !__LIB_1__::func_907(iVar7, 1)) && !__LIB_5__::func_424(iVar7)) && !__LIB_3__::func_728(iVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(iVar7))) && !__LIB_1__::func_907(iVar7, 1)) && !__LIB_5__::func_424(iVar7)) && !__LIB_3__::func_728(iVar7, 14))
						{
							bVar1 = true;
						}
						if (!bVar1 && __LIB_3__::func_360(iVar7, PLAYER::PLAYER_ID()))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						__LIB_8__::func_963(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_8__::func_963(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_738(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_2989(iParam0, 0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_738(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_2989(iParam0, 0);
					}
					Jump @652; //curOff = 633
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_2989(int iParam0, bool bParam1)//Position - 0x1089C6
{
	__LIB_8__::func_963(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
	if (bParam1)
	{
		__LIB_5__::func_457(2);
	}
}

void func_3051(var uParam0, int iParam1)//Position - 0x10AF74
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1114017/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1114008/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 1113940/*__LIB_5__::func_506*/;
			break;
		case 2:
			uParam0->f_31 = 1113614/*__LIB_5__::func_505*/;
			break;
		case 3:
			uParam0->f_34 = 1113453/*__LIB_4__::func_4*/;
			break;
		case 4:
			uParam0->f_12 = 1113440/*__LIB_4__::func_3*/;
			break;
		case 6:
			uParam0->f_32 = 1113376/*__LIB_4__::func_2*/;
			break;
		case 11:
			uParam0->f_11 = 1113367/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1113031/*__LIB_5__::func_869*/;
			break;
		case 14:
			uParam0->f_11 = 1113022/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1112285/*__LIB_5__::func_504*/;
			break;
		case 8:
			uParam0->f_37 = 1112277/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 1112268/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 1112259/*__LIB_0__::func_114*/;
			break;
		case 72:
			uParam0->f_12 = 1112246/*__LIB_3__::func_999*/;
			break;
		case 13:
			uParam0->f_2 = 1112237/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 1112158/*__LIB_42__::func_81*/;
			break;
		case 16:
			uParam0->f_5 = 1111814/*__LIB_6__::func_950*/;
			break;
		case 108:
			uParam0->f_55 = 1111805/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1111276/*__LIB_9__::func_467*/;
			break;
		case 19:
			uParam0->f_17 = 1111221/*__LIB_6__::func_948*/;
			break;
		case 18:
			uParam0->f_8 = 1111133/*__LIB_5__::func_502*/;
			break;
		case 20:
			uParam0->f_3 = 1111113/*__LIB_5__::func_251*/;
			break;
		case 21:
			uParam0->f_3 = 1111086/*__LIB_3__::func_997*/;
			break;
		case 74:
			uParam0->f_53 = 1111064/*__LIB_3__::func_996*/;
			break;
		case 75:
			uParam0->f_4 = 1111055/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1110948/*__LIB_5__::func_501*/;
			break;
		case 23:
			uParam0->f_26 = 1110940/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 1110932/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1110171/*func_3129*/;
			break;
		case 27:
			uParam0->f_25 = 1110163/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 1110155/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1110044/*__LIB_5__::func_250*/;
			break;
		case 31:
			uParam0->f_39 = 1109996/*__LIB_3__::func_994*/;
			break;
		case 33:
			uParam0->f_40 = 1109927/*__LIB_6__::func_880*/;
			break;
		case 76:
			uParam0->f_13 = 1109904/*__LIB_3__::func_993*/;
			break;
		case 34:
			uParam0->f_41 = 1105831/*__LIB_5__::func_868*/;
			break;
		case 36:
			uParam0->f_58 = 1105774/*__LIB_3__::func_991*/;
			break;
		case 35:
			uParam0->f_42 = 1099556/*__LIB_5__::func_966*/;
			break;
		case 45:
			uParam0->f_14 = 1099547/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1099538/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1099530/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1099519/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1099406/*__LIB_3__::func_983*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1098402/*__LIB_36__::func_52*/;
			break;
		case 49:
			uParam0->f_8 = 1098393/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1098034/*__LIB_32__::func_654*/;
			break;
		case 51:
			*uParam0 = 1098025/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1098015/*__LIB_3__::func_980*/;
			break;
		case 53:
			uParam0->f_13 = 1097992/*__LIB_3__::func_979*/;
			break;
		case 54:
			uParam0->f_45 = 1097495/*__LIB_5__::func_867*/;
			break;
		case 56:
			uParam0->f_46 = 1097486/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 1097477/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1097435/*__LIB_3__::func_978*/;
			break;
		case 59:
			*uParam0 = 1097426/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 1097417/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1097406/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1097395/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 1097386/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 1097378/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1097370/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1097060/*__LIB_5__::func_246*/;
			break;
		case 67:
			uParam0->f_21 = 1096990/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 1096301/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 1096292/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1096280/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1096271/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1096259/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1096250/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 1096241/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1096232/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 1096223/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 1096214/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1096206/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1096181/*__LIB_3__::func_977*/;
			break;
		case 97:
			uParam0->f_1 = 1096071/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 1095354/*func_3061*/;
			break;
		case 100:
			uParam0->f_22 = 1095191/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 1095063/*__LIB_7__::func_877*/;
			break;
		case 112:
			uParam0->f_13 = 1095051/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 1095042/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 886763/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 1095033/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 1095024/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 940967/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 1095016/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 1095007/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 1094999/*__LIB_0__::func_467*/;
			break;
	}
}

int func_3061(var uParam0, var uParam1)//Position - 0x10B6BA
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	Var0 = { 1569.249f, 248.978f, -46.378f };
	Var1 = { 0f, 0f, 146.98f };
	sVar2 = "mini@strip_club@throwout_d@";
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
	{
		uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_ClubBar_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
	{
		uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_M_Bouncer_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[1]);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 11, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 8, 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
	{
		func_2813(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
			{
				return 0;
			}
		}
		iVar3++;
	}
	MISC::SET_BIT(&(Global_1946250.f_2), 20);
	Var0 = { Var0 + Vector(0f, 4f, 0f) };
	__LIB_3__::func_900(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 262144, 0);
	uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	if (__LIB_0__::func_121(uParam1->f_140[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[2]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 0, 0, 1000f, 0);
	}
	return 1;
}

void func_3129(int iParam0, int iParam1)//Position - 0x10F09B
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	int iVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_5__::func_251(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_3__::func_995(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_907(iVar7, 1) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(iVar7, 14)) && !func_2018(iVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(iVar7, 14)) && !func_2018(iVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_6__::func_880(iParam0, -1);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						__LIB_7__::func_792(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						__LIB_7__::func_792(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if ((!bVar1 && !bVar0) && !func_3130())
					{
						MISC::SET_BIT(&(iParam1->f_2), 5);
						MISC::SET_BIT(&(iParam1->f_2), 6);
					}
					Jump @651; //curOff = 632
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
bool func_3130()//Position - 0x10F329
{
	return BitTest(Global_1946250.f_3, 2);
}

void func_3171(var uParam0, int iParam1)//Position - 0x10FFAA
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1122409/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1122400/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 1122328/*__LIB_5__::func_511*/;
			break;
		case 2:
			uParam0->f_31 = 1122091/*__LIB_5__::func_510*/;
			break;
		case 3:
			uParam0->f_34 = 1122040/*__LIB_4__::func_25*/;
			break;
		case 4:
			uParam0->f_12 = 1122027/*__LIB_4__::func_24*/;
			break;
		case 6:
			uParam0->f_32 = 1121963/*__LIB_4__::func_23*/;
			break;
		case 11:
			uParam0->f_11 = 1121954/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1121514/*__LIB_5__::func_509*/;
			break;
		case 14:
			uParam0->f_11 = 1121505/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1120830/*__LIB_5__::func_508*/;
			break;
		case 8:
			uParam0->f_37 = 1120822/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 1120813/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 1120804/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 1120742/*__LIB_42__::func_77*/;
			break;
		case 15:
			uParam0->f_2 = 1120662/*__LIB_42__::func_82*/;
			break;
		case 16:
			uParam0->f_5 = 1120293/*__LIB_6__::func_952*/;
			break;
		case 108:
			uParam0->f_55 = 1120284/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1120273/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 1120262/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1120253/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1120244/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1120222/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 1120213/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1120201/*__LIB_4__::func_17*/;
			break;
		case 23:
			uParam0->f_26 = 1120193/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 1120185/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1120177/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 1120169/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 1120161/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1120126/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 1120098/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 1120028/*__LIB_6__::func_881*/;
			break;
		case 76:
			uParam0->f_13 = 1120005/*__LIB_4__::func_16*/;
			break;
		case 34:
			uParam0->f_41 = 1119909/*__LIB_4__::func_15*/;
			break;
		case 36:
			uParam0->f_58 = 1119864/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1117351/*__LIB_5__::func_507*/;
			break;
		case 45:
			uParam0->f_14 = 1117342/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1117333/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1117325/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1117314/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1117272/*__LIB_4__::func_13*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1117164/*__LIB_5__::func_802*/;
			break;
		case 49:
			uParam0->f_8 = 1117155/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1116952/*__LIB_6__::func_951*/;
			break;
		case 51:
			*uParam0 = 1116943/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1116932/*__LIB_4__::func_12*/;
			break;
		case 53:
			uParam0->f_13 = 1116909/*__LIB_4__::func_11*/;
			break;
		case 54:
			uParam0->f_45 = 1116901/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1116892/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1116879/*__LIB_4__::func_10*/;
			break;
		case 58:
			uParam0->f_13 = 1116837/*__LIB_4__::func_9*/;
			break;
		case 59:
			*uParam0 = 1116828/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 1116819/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1116808/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1116797/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 1116788/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 1116780/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1116772/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1116539/*__LIB_4__::func_8*/;
			break;
		case 67:
			uParam0->f_21 = 1116469/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 1115780/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 1115771/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1115759/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1115750/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1115738/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1115729/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 1115720/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1115711/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 1115702/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 1115693/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1115685/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1115676/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1115667/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 1115658/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 1115650/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 1115642/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 1115630/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 1115621/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 886763/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 1115612/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 1115603/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 940967/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 1115595/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 1115586/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 1115578/*__LIB_0__::func_467*/;
			break;
	}
}

void func_3265(var uParam0, int iParam1)//Position - 0x112072
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1199365/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1199351/*__LIB_5__::func_530*/;
			break;
		case 1:
			uParam0->f_30 = 1199195/*__LIB_5__::func_529*/;
			break;
		case 2:
			uParam0->f_31 = 1198719/*__LIB_5__::func_528*/;
			break;
		case 3:
			uParam0->f_34 = 1198520/*__LIB_4__::func_98*/;
			break;
		case 4:
			uParam0->f_12 = 1198398/*__LIB_4__::func_97*/;
			break;
		case 5:
			uParam0->f_11 = 1198388/*__LIB_4__::func_96*/;
			break;
		case 37:
			uParam0->f_18 = 1198251/*__LIB_4__::func_95*/;
			break;
		case 38:
			uParam0->f_9 = 1198207/*__LIB_7__::func_743*/;
			break;
		case 42:
			uParam0->f_10 = 1198123/*__LIB_7__::func_797*/;
			break;
		case 6:
			uParam0->f_32 = 1198029/*__LIB_4__::func_94*/;
			break;
		case 11:
			uParam0->f_11 = 1198020/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 1196842/*__LIB_9__::func_526*/;
			break;
		case 14:
			uParam0->f_11 = 1196833/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 1190257/*__LIB_5__::func_731*/;
			break;
		case 8:
			uParam0->f_37 = 1189957/*__LIB_4__::func_92*/;
			break;
		case 7:
			uParam0->f_36 = 1189900/*__LIB_4__::func_91*/;
			break;
		case 79:
			*uParam0 = 1189656/*__LIB_5__::func_527*/;
			break;
		case 13:
			uParam0->f_2 = 1189594/*__LIB_42__::func_77*/;
			break;
		case 15:
			uParam0->f_2 = 1189514/*__LIB_42__::func_83*/;
			break;
		case 16:
			uParam0->f_5 = 1188794/*__LIB_9__::func_270*/;
			break;
		case 108:
			uParam0->f_55 = 1185602/*__LIB_43__::func_423*/;
			break;
		case 17:
			uParam0->f_17 = 1183338/*__LIB_9__::func_518*/;
			break;
		case 19:
			uParam0->f_17 = 1183312/*__LIB_5__::func_971*/;
			break;
		case 20:
			uParam0->f_3 = 1183136/*__LIB_6__::func_885*/;
			break;
		case 21:
			uParam0->f_3 = 1183072/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 1182968/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 1182952/*__LIB_5__::func_526*/;
			break;
		case 22:
			uParam0->f_24 = 1182845/*__LIB_5__::func_525*/;
			break;
		case 23:
			uParam0->f_26 = 1182798/*__LIB_4__::func_89*/;
			break;
		case 24:
			uParam0->f_26 = 1182761/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 1180716/*func_3413*/;
			break;
		case 25:
			uParam0->f_23 = 1180394/*func_3411*/;
			break;
		case 30:
			uParam0->f_8 = 1179536/*__LIB_6__::func_957*/;
			break;
		case 31:
			uParam0->f_39 = 1179402/*__LIB_5__::func_257*/;
			break;
		case 33:
			uParam0->f_40 = 1178830/*__LIB_6__::func_884*/;
			break;
		case 32:
			*uParam0 = 1178616/*__LIB_7__::func_15*/;
			break;
		case 34:
			uParam0->f_41 = 1176130/*__LIB_5__::func_872*/;
			break;
		case 36:
			uParam0->f_58 = 1176073/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 1149108/*__LIB_5__::func_524*/;
			break;
		case 45:
			uParam0->f_14 = 1149099/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1149090/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1149082/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1149059/*__LIB_4__::func_82*/;
			break;
		case 47:
			uParam0->f_43 = 1148987/*__LIB_5__::func_523*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1148859/*__LIB_5__::func_871*/;
			break;
		case 49:
			uParam0->f_8 = 1148833/*__LIB_4__::func_80*/;
			break;
		case 50:
			*uParam0 = 1148146/*__LIB_7__::func_841*/;
			break;
		case 51:
			*uParam0 = 1147984/*__LIB_9__::func_423*/;
			break;
		case 52:
			uParam0->f_15 = 1147973/*__LIB_4__::func_76*/;
			break;
		case 53:
			uParam0->f_13 = 1147811/*__LIB_4__::func_75*/;
			break;
		case 54:
			uParam0->f_45 = 1147354/*func_3377*/;
			break;
		case 56:
			uParam0->f_46 = 1147336/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 1147084/*__LIB_7__::func_14*/;
			break;
		case 58:
			uParam0->f_13 = 1146922/*__LIB_4__::func_73*/;
			break;
		case 59:
			*uParam0 = 1146424/*__LIB_7__::func_13*/;
			break;
		case 60:
			*uParam0 = 1146409/*__LIB_6__::func_883*/;
			break;
		case 61:
			uParam0->f_15 = 1146398/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1146236/*__LIB_4__::func_69*/;
			break;
		case 55:
			uParam0->f_45 = 1146057/*__LIB_6__::func_882*/;
			break;
		case 63:
			uParam0->f_11 = 1146030/*__LIB_7__::func_840*/;
			break;
		case 64:
			uParam0->f_47 = 1144597/*__LIB_5__::func_970*/;
			break;
		case 65:
			uParam0->f_21 = 1143210/*__LIB_7__::func_55*/;
			break;
		case 66:
			uParam0->f_21 = 1142851/*__LIB_5__::func_254*/;
			break;
		case 67:
			uParam0->f_21 = 1142737/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 1141777/*__LIB_6__::func_954*/;
			break;
		case 69:
			*uParam0 = 1141768/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1141756/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1141212/*__LIB_4__::func_62*/;
			break;
		case 107:
			uParam0->f_50 = 1141200/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1141012/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 1141003/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1139417/*func_3338*/;
			break;
		case 87:
			uParam0->f_1 = 1137899/*__LIB_6__::func_418*/;
			break;
		case 88:
			uParam0->f_1 = 1137890/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1137882/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1137852/*__LIB_5__::func_519*/;
			break;
		case 97:
			uParam0->f_1 = 1137407/*__LIB_5__::func_518*/;
			break;
		case 98:
			uParam0->f_1 = 1132918/*__LIB_8__::func_985*/;
			break;
		case 100:
			uParam0->f_22 = 1125025/*__LIB_7__::func_871*/;
			break;
		case 101:
			uParam0->f_22 = 1124141/*__LIB_15__::func_495*/;
			break;
		case 112:
			uParam0->f_13 = 1124130/*__LIB_3__::func_554*/;
			break;
		case 113:
			uParam0->f_3 = 1124121/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 1124112/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 1124103/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1123931/*__LIB_7__::func_783*/;
			break;
		case 76:
			uParam0->f_13 = 1123908/*__LIB_4__::func_29*/;
			break;
	}
}

int func_3338(int iParam0, var uParam1)//Position - 0x1162D9
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1831(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1825(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_4__::func_61(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_4__::func_61(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_4__::func_60(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_4__::func_60(iParam0, &Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[0 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 1);
		}
		__LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_3377(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x1181DA
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	bVar0 = false;
	if (!__LIB_4__::func_70(PLAYER::PLAYER_ID(), __LIB_4__::func_71(iParam0)) && !__LIB_4__::func_70(__LIB_0__::func_797(), __LIB_4__::func_71(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_693(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_4__::func_70(iVar1, __LIB_4__::func_71(iParam0)) && __LIB_5__::func_773(iVar1))
				{
					Var3 = { __LIB_1__::func_696(iVar1) };
					if (__LIB_0__::func_800(Var3))
					{
						if (NETWORK::NETWORK_IS_FRIEND(&Var3))
						{
							iVar4 = joaat("ARC_FRIEND");
							if (iVar4 != *uParam4)
							{
								*uParam4 = iVar4;
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "ARC_FRIEND" /* GXT: Friend's Arcade */);
							}
							bVar0 = true;
						}
						else
						{
							iVar2++;
						}
						if (!bVar0 && *uParam4 == joaat("ARC_FRIEND"))
						{
							*uParam4 = joaat("BLIP_740");
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_740" /* GXT: Arcade */);
						}
						if (HUD::DOES_BLIP_EXIST(*uParam1) && __LIB_5__::func_781(iParam0))
						{
							if (!HUD::DOES_BLIP_EXIST(*iParam2))
							{
								Var5 = { __LIB_4__::func_75(iParam0) };
								iVar6 = __LIB_4__::func_74(iParam0);
								*iParam2 = __LIB_0__::func_488(Var5, 0);
								HUD::SET_BLIP_SPRITE(*iParam2, iVar6);
								HUD::SET_BLIP_SCALE(*iParam2, 1f);
								HUD::SET_BLIP_PRIORITY(*iParam2, 7);
								func_3378(iParam2, 18);
								HUD::SET_BLIP_AS_SHORT_RANGE(*iParam2, false);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam2, "BASE_HEIST_BLIP" /* GXT: The Doomsday Heist */);
								HUD::SET_BLIP_HIDDEN_ON_LEGEND(*iParam2, true);
							}
						}
						else if (HUD::DOES_BLIP_EXIST(*iParam2))
						{
							HUD::REMOVE_BLIP(iParam2);
						}
					}
void func_3378(var uParam0, int iParam1)//Position - 0x118353
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = __LIB_1__::func_389(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

void func_3411(int iParam0, int iParam1)//Position - 0x1202EA
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_67(iParam0, 0) };
	if (__LIB_6__::func_885(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2017(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_884(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_884(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_793(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_793(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_3413(var uParam0, var uParam1)//Position - 0x12042C
{
	if (__LIB_3__::func_616() == 3)
	{
		func_3417(uParam0, uParam1);
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_4__::func_70(__LIB_2__::func_39(PLAYER::PLAYER_ID()), __LIB_4__::func_71(*uParam0)))
	{
		__LIB_5__::func_258(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 2)
	{
		func_3415(uParam0, uParam1);
	}
	else
	{
		__LIB_4__::func_87(uParam1);
	}
}

void func_3415(var uParam0, var uParam1)//Position - 0x1204B5
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_2017(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_1 = 1;
		uParam1->f_6 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		uParam1->f_4 = 1;
		__LIB_5__::func_462();
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
		}
		else if (uParam0->f_2)
		{
			uParam1->f_1 = 1;
			uParam1->f_5 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_6__::func_884(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_3417(var uParam0, var uParam1)//Position - 0x1205D3
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_53(uParam0, uParam1);
			break;
		case 1:
			func_3422(uParam0, uParam1);
			break;
		case 2:
			__LIB_13__::func_481(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3422(var uParam0, var uParam1)//Position - 0x120956
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_2017(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_5__::func_462();
		if (__LIB_8__::func_926(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_3__::func_616() == 3)
			{
				__LIB_1__::func_767("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_767("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_6__::func_884(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_3479(var uParam0, int iParam1)//Position - 0x124D0E
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1215594/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1215585/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 1215517/*__LIB_5__::func_536*/;
			break;
		case 2:
			uParam0->f_31 = 1215071/*__LIB_5__::func_535*/;
			break;
		case 3:
			uParam0->f_34 = 1214966/*__LIB_4__::func_120*/;
			break;
		case 4:
			uParam0->f_12 = 1214953/*__LIB_4__::func_119*/;
			break;
		case 6:
			uParam0->f_32 = 1214889/*__LIB_4__::func_118*/;
			break;
		case 11:
			uParam0->f_11 = 1214880/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 1214419/*__LIB_5__::func_534*/;
			break;
		case 14:
			uParam0->f_11 = 1214410/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1214017/*__LIB_5__::func_533*/;
			break;
		case 8:
			uParam0->f_37 = 1214009/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 1214000/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 1213976/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1213914/*__LIB_42__::func_77*/;
			break;
		case 15:
			uParam0->f_2 = 1213835/*__LIB_42__::func_84*/;
			break;
		case 16:
			uParam0->f_5 = 1213538/*__LIB_6__::func_958*/;
			break;
		case 108:
			uParam0->f_55 = 1213529/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1213518/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 1213492/*__LIB_5__::func_973*/;
			break;
		case 20:
			uParam0->f_3 = 1213483/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1213474/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1213452/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 1213443/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1213435/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 1213427/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 1213419/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1213087/*func_3551*/;
			break;
		case 27:
			uParam0->f_25 = 1213079/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 1213071/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1212750/*__LIB_35__::func_562*/;
			break;
		case 31:
			uParam0->f_39 = 1212722/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 1212653/*__LIB_6__::func_880*/;
			break;
		case 34:
			uParam0->f_41 = 1208918/*__LIB_5__::func_264*/;
			break;
		case 36:
			uParam0->f_58 = 1208873/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1205706/*__LIB_5__::func_532*/;
			break;
		case 45:
			uParam0->f_14 = 1205697/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1205688/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1205680/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1205669/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1205556/*__LIB_4__::func_113*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1204433/*__LIB_7__::func_799*/;
			break;
		case 49:
			uParam0->f_8 = 1204424/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1204415/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1204406/*__LIB_0__::func_114*/;
			break;
		case 52:
			uParam0->f_15 = 1204395/*__LIB_4__::func_112*/;
			break;
		case 53:
			uParam0->f_13 = 1204384/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1204376/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1204367/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1204358/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1204316/*__LIB_4__::func_111*/;
			break;
		case 59:
			*uParam0 = 1204307/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 1204298/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1204287/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1204276/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 1204267/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 1204259/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1204251/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1203948/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 1203878/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 1203229/*__LIB_5__::func_262*/;
			break;
		case 69:
			*uParam0 = 1203220/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1203212/*__LIB_0__::func_467*/;
			break;
		case 71:
			uParam0->f_49 = 1203203/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1203191/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1202757/*__LIB_7__::func_744*/;
			break;
		case 18:
			uParam0->f_8 = 1202732/*__LIB_4__::func_110*/;
			break;
		case 84:
			uParam0->f_1 = 1202715/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 1202173/*func_3501*/;
			break;
		case 87:
			uParam0->f_1 = 1201130/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 1201121/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1201113/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1201104/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1201095/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 1201086/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 1201078/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 1201070/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 1201058/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 1201049/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1200746/*__LIB_7__::func_798*/;
			break;
	}
}

int func_3501(var uParam0, var uParam1)//Position - 0x1257FD
{
	return func_3502(uParam1);
}

int func_3502(var uParam0)//Position - 0x12580B
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_109))
		{
			func_1831(&iVar0, &(uParam0->f_109), 60);
			__LIB_3__::func_633(&(uParam0->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
			return 0;
		}
		else if (func_1825(&iVar0, &(uParam0->f_109), &(uParam0->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0->f_109), &(uParam0->f_189[1 /*3*/]), &(uParam0->f_189[0 /*3*/]));
		__LIB_4__::func_109(&Var1, &Var3, &uVar9, 1);
		__LIB_4__::func_109(&Var2, &Var4, &uVar10, 0);
		__LIB_4__::func_108(&Var5, &Var7, &uVar11, 1);
		__LIB_4__::func_108(&Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam0->f_189[0 /*3*/].f_1 - uParam0->f_189[1 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam0->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_188), 1);
		}
		__LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_3551(int iParam0, int iParam1)//Position - 0x12829F
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_554(iParam0) };
	if (__LIB_0__::func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2017(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_880(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_880(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_792(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_792(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_3589(var uParam0, int iParam1)//Position - 0x128C73
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1250691/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1250668/*__LIB_4__::func_174*/;
			break;
		case 1:
			uParam0->f_30 = 1250538/*__LIB_5__::func_547*/;
			break;
		case 2:
			uParam0->f_31 = 1249873/*__LIB_6__::func_894*/;
			break;
		case 3:
			uParam0->f_34 = 1249610/*__LIB_4__::func_169*/;
			break;
		case 4:
			uParam0->f_12 = 1249597/*__LIB_4__::func_168*/;
			break;
		case 5:
			uParam0->f_11 = 1249587/*__LIB_4__::func_167*/;
			break;
		case 37:
			uParam0->f_18 = 1249389/*__LIB_5__::func_274*/;
			break;
		case 38:
			uParam0->f_9 = 1249341/*__LIB_6__::func_964*/;
			break;
		case 42:
			uParam0->f_10 = 1249305/*__LIB_6__::func_893*/;
			break;
		case 6:
			uParam0->f_32 = 1249190/*__LIB_4__::func_941*/;
			break;
		case 11:
			uParam0->f_11 = 1249181/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 1248251/*__LIB_8__::func_928*/;
			break;
		case 14:
			uParam0->f_11 = 1248242/*__LIB_3__::func_603*/;
			break;
		case 109:
			uParam0->f_56 = 1247080/*__LIB_7__::func_805*/;
			break;
		case 8:
			uParam0->f_37 = 1247036/*__LIB_4__::func_163*/;
			break;
		case 7:
			uParam0->f_36 = 1247013/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 1246989/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1246927/*__LIB_42__::func_77*/;
			break;
		case 15:
			uParam0->f_2 = 1246848/*__LIB_42__::func_85*/;
			break;
		case 16:
			uParam0->f_5 = 1246174/*__LIB_8__::func_927*/;
			break;
		case 108:
			uParam0->f_55 = 1242891/*__LIB_43__::func_424*/;
			break;
		case 17:
			uParam0->f_17 = 1241954/*__LIB_9__::func_468*/;
			break;
		case 19:
			uParam0->f_17 = 1241909/*__LIB_6__::func_962*/;
			break;
		case 20:
			uParam0->f_3 = 1241736/*__LIB_6__::func_892*/;
			break;
		case 21:
			uParam0->f_3 = 1241651/*__LIB_6__::func_891*/;
			break;
		case 74:
			uParam0->f_53 = 1241511/*__LIB_5__::func_271*/;
			break;
		case 75:
			uParam0->f_4 = 1241495/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 1241388/*__LIB_5__::func_546*/;
			break;
		case 23:
			uParam0->f_26 = 1241341/*__LIB_4__::func_159*/;
			break;
		case 24:
			uParam0->f_26 = 1241304/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 1239893/*func_3697*/;
			break;
		case 25:
			uParam0->f_23 = 1239527/*func_3694*/;
			break;
		case 27:
			uParam0->f_25 = 1238713/*__LIB_6__::func_961*/;
			break;
		case 28:
			uParam0->f_24 = 1238672/*__LIB_4__::func_152*/;
			break;
		case 29:
			uParam0->f_28 = 1238437/*__LIB_5__::func_876*/;
			break;
		case 30:
			uParam0->f_8 = 1238112/*__LIB_35__::func_563*/;
			break;
		case 31:
			uParam0->f_39 = 1237915/*__LIB_5__::func_545*/;
			break;
		case 43:
			uParam0->f_8 = 1237809/*__LIB_7__::func_801*/;
			break;
		case 33:
			uParam0->f_40 = 1237493/*__LIB_6__::func_890*/;
			break;
		case 34:
			uParam0->f_41 = 1232501/*__LIB_6__::func_889*/;
			break;
		case 36:
			uParam0->f_58 = 1232444/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 1226238/*__LIB_6__::func_960*/;
			break;
		case 45:
			uParam0->f_14 = 1226229/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1226220/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1226212/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1226189/*__LIB_4__::func_146*/;
			break;
		case 82:
			uParam0->f_19 = 1226176/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 1225873/*__LIB_5__::func_543*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1223710/*__LIB_8__::func_964*/;
			break;
		case 49:
			uParam0->f_8 = 1223662/*__LIB_4__::func_938*/;
			break;
		case 50:
			*uParam0 = 1223470/*__LIB_5__::func_733*/;
			break;
		case 51:
			*uParam0 = 1223461/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1223450/*__LIB_3__::func_647*/;
			break;
		case 53:
			uParam0->f_13 = 1223408/*__LIB_4__::func_141*/;
			break;
		case 54:
			uParam0->f_45 = 1223400/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1223391/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1223382/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1223340/*__LIB_4__::func_140*/;
			break;
		case 59:
			*uParam0 = 1223331/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 1223322/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1223311/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1223281/*__LIB_4__::func_139*/;
			break;
		case 63:
			uParam0->f_11 = 1223272/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 1223264/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1222178/*__LIB_7__::func_56*/;
			break;
		case 66:
			uParam0->f_21 = 1221837/*__LIB_5__::func_541*/;
			break;
		case 67:
			uParam0->f_21 = 1221723/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 1220895/*__LIB_6__::func_959*/;
			break;
		case 69:
			*uParam0 = 1220886/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1220874/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1220782/*__LIB_4__::func_138*/;
			break;
		case 107:
			uParam0->f_50 = 1220770/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1220582/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 1220573/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1220559/*func_3628*/;
			break;
		case 87:
			uParam0->f_1 = 1220543/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 1220534/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1220526/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1220517/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1220074/*__LIB_6__::func_420*/;
			break;
		case 98:
			uParam0->f_1 = 1218612/*func_3610*/;
			break;
		case 100:
			uParam0->f_22 = 1217733/*__LIB_6__::func_389*/;
			break;
		case 101:
			uParam0->f_22 = 1217556/*__LIB_5__::func_538*/;
			break;
		case 112:
			uParam0->f_13 = 1217544/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 1217530/*__LIB_4__::func_126*/;
			break;
		case 114:
			uParam0->f_16 = 886763/*__LIB_5__::func_451*/;
			break;
		case 117:
			uParam0->f_16 = 940967/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 1217521/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 1217420/*__LIB_7__::func_17*/;
			break;
		case 120:
			uParam0->f_19 = 1217395/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 1217223/*__LIB_7__::func_783*/;
			break;
		case 125:
			uParam0->f_19 = 1217196/*__LIB_4__::func_124*/;
			break;
	}
}

int func_3610(int iParam0, var uParam1)//Position - 0x129834
{
	if (__LIB_4__::func_128(iParam0))
	{
		return func_3611(iParam0, uParam1);
	}
	return 1;
}

int func_3611(int iParam0, var uParam1)//Position - 0x129851
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	char* sVar6;
	int iVar7;
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_1946250.f_4716.f_7, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_1946250.f_4716.f_7, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
		if (func_1826(&(uParam1->f_109.f_1[0]), iVar1, 1, 1) && __LIB_0__::func_121(uParam1->f_109.f_1[0]))
		{
			if (__LIB_0__::func_121(uParam1->f_109))
			{
				VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			}
			if (PED::IS_PED_MALE(uParam1->f_109.f_1[0]))
			{
				MISC::SET_BIT(&(uParam1->f_188), 4);
			}
		}
		else
		{
			return 0;
		}
		if (!__LIB_5__::func_539(&(uParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		uParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_4__::func_134(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_134());
		if (__LIB_0__::func_121(uParam1->f_176[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_176[0], true);
		}
		else
		{
			return 0;
		}
		iVar2 = __LIB_4__::func_133(-395939522);
		iVar3 = __LIB_4__::func_133(-401740561);
		if (!BitTest(uParam1->f_188, 5))
		{
			__LIB_4__::func_131(__LIB_4__::func_132(-395939522), iVar2);
			__LIB_4__::func_131(__LIB_4__::func_132(-401740561), iVar3);
			MISC::SET_BIT(&(uParam1->f_188), 5);
		}
		if (!__LIB_4__::func_130(&(uParam1->f_50), __LIB_4__::func_132(-395939522), -48f, iVar2))
		{
			return 0;
		}
		if (!__LIB_4__::func_130(&(uParam1->f_58), __LIB_4__::func_132(-401740561), 157f, iVar3))
		{
			return 0;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
		Var4 = { 925.9088f, 51.242f, 80.095f };
		Var5 = { 0f, 0f, 58f };
		sVar6 = __LIB_5__::func_266(uParam1, 6);
		iVar7 = 3500;
		__LIB_3__::func_900(&(Global_1946250.f_4073), iVar7, "valet exit", Var4, Var5, uParam1->f_3, sVar6, 1, 0, 0, 0, 2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_3628(var uParam0, var uParam1)//Position - 0x129FCF
{
	return func_3502(uParam1);
}

void func_3694(int iParam0, int iParam1)//Position - 0x12E9E7
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_154(iParam0) };
	if (__LIB_6__::func_892(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2017(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_890(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_890(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_803(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_803(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_3697(var uParam0, var uParam1)//Position - 0x12EB55
{
	if (__LIB_1__::func_124(PLAYER::PLAYER_ID()) || __LIB_4__::func_153(PLAYER::PLAYER_ID()))
	{
		func_3698(uParam0, uParam1);
	}
}

void func_3698(var uParam0, var uParam1)//Position - 0x12EB81
{
	int iVar0;
	if (__LIB_3__::func_616() == 2 && __LIB_3__::func_785() != 1)
	{
		uParam1->f_1 = 1;
		if (func_3709(*uParam0, 0, 0))
		{
			__LIB_3__::func_664(0);
			__LIB_3__::func_784(1);
		}
		else
		{
			__LIB_5__::func_878(uParam1, 0);
			return;
		}
	}
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			func_3704(uParam0, uParam1);
			break;
		case 1:
			func_3700(uParam0, uParam1);
			break;
		case 2:
			__LIB_5__::func_877(*uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3700(var uParam0, var uParam1)//Position - 0x12EC40
{
	bool bVar0;
	int iVar1[3];
	var uVar2[3];
	char* sVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	sVar3 = __LIB_4__::func_155();
	func_2017(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar6, &bVar7, 1, 0);
	iVar5 = 0;
	while (iVar5 < 3)
	{
		uVar2[iVar4] = __LIB_5__::func_207(iVar5);
		if (__LIB_3__::func_782(iVar5, bVar6, bVar7))
		{
			iVar1[iVar4] = iVar5;
			if (!bVar0 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar4 /*6*/]), uVar2[iVar4]))
			{
				bVar0 = true;
			}
			iVar4++;
		}
		else if (!bVar0)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar4 /*6*/]), uVar2[iVar4]))
			{
				bVar0 = true;
			}
		}
		iVar5++;
	}
	if (uParam0->f_5 || bVar0)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar3, sVar3);
		__LIB_5__::func_270();
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			__LIB_10__::func_18(iVar5, uVar2[iVar5], 0, 1, 0, 0, 0);
			iVar5++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 1;
		uParam1->f_11 = 10;
		__LIB_5__::func_457(5);
		__LIB_5__::func_462();
		if (iVar1[uParam0->f_4] != 0)
		{
			__LIB_8__::func_965(iVar1[uParam0->f_4]);
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_5__::func_462();
		if (__LIB_3__::func_616() == 2)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_3704(var uParam0, var uParam1)//Position - 0x12EE41
{
	bool bVar0;
	var uVar1[2];
	var uVar2[2];
	var uVar3[2];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar4 = __LIB_4__::func_155();
	iVar6 = 0;
	while (iVar6 < 2)
	{
		uVar3[iVar6] = __LIB_4__::func_158(iVar6);
		uVar1[iVar6] = __LIB_4__::func_157(iVar6);
		uVar2[iVar6] = uVar1[iVar6];
		if (!bVar0 && (Global_23150.f_1616[iVar6] != uVar2[iVar6] || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar6 /*6*/]), uVar3[iVar6])))
		{
			bVar0 = true;
		}
		iVar5++;
		iVar6++;
	}
	if (!__LIB_1__::func_124(PLAYER::PLAYER_ID()) && __LIB_4__::func_153(PLAYER::PLAYER_ID()))
	{
		__LIB_5__::func_877(*uParam0, uParam1);
	}
	else if (uParam0->f_5 || bVar0)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar4, sVar4);
		__LIB_5__::func_270();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_10__::func_18(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		__LIB_1__::func_789(__LIB_4__::func_156(uVar1[iVar7], iVar7), 0, 0);
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (iVar7 == 0)
			{
				*uParam1 = 1;
				__LIB_3__::func_784(2);
			}
			else if (func_3709(*uParam0, 0, 0))
			{
				*uParam1 = 1;
				__LIB_3__::func_664(1);
				__LIB_3__::func_784(1);
			}
			else
			{
				__LIB_5__::func_878(uParam1, 1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

int func_3709(int iParam0, bool bParam1, bool bParam2)//Position - 0x12F0A6
{
	int iVar0;
	int iVar1;
	func_2017(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, bParam2);
	if (bParam1)
	{
		return iVar1;
	}
	return (iVar0 || iVar1);
}

void func_3767(var uParam0, int iParam1)//Position - 0x13158C
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1281113/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1281104/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 1281036/*__LIB_5__::func_557*/;
			break;
		case 2:
			uParam0->f_31 = 1280685/*__LIB_5__::func_556*/;
			break;
		case 3:
			uParam0->f_34 = 1280452/*__LIB_4__::func_211*/;
			break;
		case 4:
			uParam0->f_12 = 1280439/*__LIB_4__::func_210*/;
			break;
		case 6:
			uParam0->f_32 = 1280375/*__LIB_4__::func_209*/;
			break;
		case 11:
			uParam0->f_11 = 1280366/*__LIB_3__::func_939*/;
			break;
		case 12:
			uParam0->f_33 = 1279641/*__LIB_6__::func_967*/;
			break;
		case 14:
			uParam0->f_11 = 1279632/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1278507/*__LIB_5__::func_285*/;
			break;
		case 8:
			uParam0->f_37 = 1278499/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 1278490/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 1278466/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1278394/*__LIB_42__::func_87*/;
			break;
		case 15:
			uParam0->f_2 = 1278305/*__LIB_42__::func_86*/;
			break;
		case 16:
			uParam0->f_5 = 1277944/*__LIB_6__::func_966*/;
			break;
		case 108:
			uParam0->f_55 = 1277805/*__LIB_8__::func_218*/;
			break;
		case 17:
			uParam0->f_17 = 1277130/*__LIB_9__::func_424*/;
			break;
		case 19:
			uParam0->f_17 = 1277104/*__LIB_5__::func_976*/;
			break;
		case 20:
			uParam0->f_3 = 1277095/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1277047/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 1276992/*__LIB_5__::func_284*/;
			break;
		case 75:
			uParam0->f_4 = 1276879/*__LIB_5__::func_555*/;
			break;
		case 22:
			uParam0->f_24 = 1276871/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 1276863/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 1274306/*func_3887*/;
			break;
		case 25:
			uParam0->f_23 = 1274298/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 1274290/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 1274282/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1274001/*__LIB_35__::func_557*/;
			break;
		case 31:
			uParam0->f_39 = 1273973/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 1273904/*__LIB_6__::func_880*/;
			break;
		case 76:
			uParam0->f_13 = 1273881/*__LIB_4__::func_204*/;
			break;
		case 34:
			uParam0->f_41 = 1271327/*__LIB_5__::func_881*/;
			break;
		case 36:
			uParam0->f_58 = 1271282/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1271186/*__LIB_5__::func_283*/;
			break;
		case 45:
			uParam0->f_14 = 1271177/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1271168/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1271160/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1271149/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1271036/*__LIB_4__::func_202*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1270189/*__LIB_36__::func_42*/;
			break;
		case 49:
			uParam0->f_8 = 1270180/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1269967/*__LIB_32__::func_646*/;
			break;
		case 51:
			*uParam0 = 1269958/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1269947/*__LIB_4__::func_201*/;
			break;
		case 53:
			uParam0->f_13 = 1269905/*__LIB_4__::func_200*/;
			break;
		case 54:
			uParam0->f_45 = 1269866/*__LIB_4__::func_199*/;
			break;
		case 56:
			uParam0->f_46 = 1269857/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 1269815/*__LIB_5__::func_553*/;
			break;
		case 58:
			uParam0->f_13 = 1269773/*__LIB_4__::func_197*/;
			break;
		case 59:
			*uParam0 = 1269764/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 1269755/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1269744/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1269733/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 1269724/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 1269638/*__LIB_5__::func_552*/;
			break;
		case 65:
			uParam0->f_21 = 1269630/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1269289/*__LIB_5__::func_282*/;
			break;
		case 67:
			uParam0->f_21 = 1269219/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 1268522/*__LIB_5__::func_281*/;
			break;
		case 69:
			*uParam0 = 1268513/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1268440/*__LIB_4__::func_195*/;
			break;
		case 71:
			uParam0->f_49 = 1268431/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1268419/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1268410/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 1267883/*__LIB_6__::func_965*/;
			break;
		case 85:
			uParam0->f_1 = 1266327/*func_3837*/;
			break;
		case 87:
			uParam0->f_1 = 1263095/*__LIB_7__::func_843*/;
			break;
		case 88:
			uParam0->f_1 = 1263080/*__LIB_5__::func_803*/;
			break;
		case 89:
			uParam0->f_54 = 1262718/*__LIB_5__::func_880*/;
			break;
		case 96:
			uParam0->f_1 = 1262427/*__LIB_7__::func_20*/;
			break;
		case 97:
			uParam0->f_1 = 1261920/*func_3816*/;
			break;
		case 98:
			uParam0->f_1 = 1260285/*func_3814*/;
			break;
		case 100:
			uParam0->f_22 = 1260007/*__LIB_6__::func_317*/;
			break;
		case 101:
			uParam0->f_22 = 1259532/*__LIB_7__::func_880*/;
			break;
		case 112:
			uParam0->f_13 = 1259520/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 1259511/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 886763/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 1259400/*__LIB_35__::func_556*/;
			break;
		case 116:
			*uParam0 = 1259352/*__LIB_5__::func_278*/;
			break;
		case 117:
			uParam0->f_16 = 940967/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 1217521/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 1217420/*__LIB_7__::func_17*/;
			break;
		case 120:
			uParam0->f_19 = 1217395/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 1259344/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 1252280/*func_3769*/;
			break;
		case 125:
			uParam0->f_19 = 1252224/*__LIB_4__::func_175*/;
			break;
	}
}

int func_3769(int iParam0, int* iParam1)//Position - 0x131BB8
{
	float fVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	var uVar5;
	if (!Global_2814119 || Global_2815059.f_6757)
	{
		if (iParam1->f_258 > 0)
		{
			__LIB_13__::func_588(iParam1);
		}
		return 0;
	}
	switch (iParam1->f_258)
	{
		case 0:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_5__::func_276(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 0, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, false, true))
				{
					__LIB_5__::func_457(0);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_5__::func_276(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 3, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_5__::func_457(3);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_5__::func_276(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 4, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_5__::func_457(4);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_5__::func_276(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 1, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_5__::func_457(1);
					__LIB_4__::func_181(iParam1, 1);
				}
			}
			break;
		case 1:
			if (__LIB_3__::func_616() == 0)
			{
				if (__LIB_6__::func_965(iParam0, iParam1))
				{
					__LIB_4__::func_180();
					__LIB_4__::func_181(iParam1, 2);
				}
			}
			else
			{
				__LIB_5__::func_548(iParam0, iParam1, __LIB_3__::func_616());
				__LIB_4__::func_181(iParam1, 2);
			}
			break;
		case 2:
			if (__LIB_3__::func_616() == 0)
			{
				if (func_3837(iParam0, iParam1))
				{
					__LIB_4__::func_178(&(Global_1946250.f_3638), 60);
					__LIB_4__::func_181(iParam1, 3);
				}
			}
			else if (func_3793(iParam1))
			{
				__LIB_4__::func_181(iParam1, 3);
			}
			break;
		case 3:
			if (__LIB_3__::func_616() == 0)
			{
				__LIB_9__::func_3(&(Global_1946250.f_3638), 0, 1);
				__LIB_7__::func_843(iParam0, iParam1);
				if (__LIB_3__::func_630(&(Global_1946250.f_3638), 0))
				{
					__LIB_19__::func_92(&iParam0);
					MISC::SET_BIT(&(Global_1946250.f_6), 26);
					__LIB_4__::func_181(iParam1, 4);
				}
			}
			else
			{
				__LIB_7__::func_842(iParam1);
				__LIB_19__::func_92(&iParam0);
				MISC::SET_BIT(&(Global_1946250.f_6), 26);
				__LIB_4__::func_181(iParam1, 4);
			}
			break;
		case 4:
			if (__LIB_3__::func_616() == 0)
			{
				if (!BitTest(*iParam1, 16))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam1->f_27) && __LIB_0__::func_121(iParam1->f_50))
					{
						fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam1->f_27);
						if (fVar0 > 0.55f)
						{
							CAM::DO_SCREEN_FADE_OUT(500);
							MISC::SET_BIT(iParam1, 16);
						}
					}
				}
				__LIB_9__::func_3(&(Global_1946250.f_3638), 0, 1);
				if (__LIB_7__::func_843(iParam0, iParam1) && BitTest(Global_1946250.f_6, 27))
				{
					__LIB_13__::func_588(iParam1);
				}
			}
			else if (__LIB_7__::func_842(iParam1) && BitTest(Global_1946250.f_6, 27))
			{
				__LIB_13__::func_588(iParam1);
			}
			break;
	}
	return 1;
}

int func_3793(int* iParam0)//Position - 0x132DF6
{
	STREAMING::REQUEST_ANIM_DICT(iParam0->f_3);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_3))
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_4))
	{
		STREAMING::REQUEST_ANIM_DICT(iParam0->f_4);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_4))
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_2))
	{
		func_2813(&(iParam0->f_2), PLAYER::PLAYER_ID(), 1, 1);
		return 0;
	}
	if ((__LIB_0__::func_121(iParam0->f_2) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam0->f_2)) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0->f_2))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_2, true, false);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_3814(int iParam0, var uParam1)//Position - 0x133AFD
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	if (__LIB_4__::func_128(iParam0))
	{
		return func_3611(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		if (Global_1946250.f_4539 == __LIB_0__::getMinusOneOrNull())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_1", 0, 0, 64);
			}
		}
		else if (!PED::IS_PED_INJURED(uParam1->f_2))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam1->f_2, "MP_1", 0, 0, 64);
		}
		__LIB_5__::func_412(1, 1, 1, 0, 0, 0, 0);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true);
		CUTSCENE::START_CUTSCENE(0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, false);
		}
		MISC::SET_BIT(&(Global_1946250.f_6), 19);
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		return 1;
	}
	else
	{
		Var0 = { 1082.001f, 187.749f, -49.349f };
		Var1 = { 0f, 0f, -110.19f };
		sVar2 = "mini@strip_club@throwout_d@";
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
		{
			uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_Casino_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
			PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[0], 6, 0, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
		{
			uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_Y_Casino_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
			__LIB_4__::func_185(MISC::GET_RANDOM_INT_IN_RANGE(0, 6), &(uParam1->f_140[1]));
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
		{
			func_2813(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
			return 0;
		}
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
			{
				if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
				{
					return 0;
				}
			}
			iVar3++;
		}
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		Var0 = { Var0 + Vector(0f, 0.5f, 3f) };
		__LIB_3__::func_900(&(Global_1946250.f_4073), 5000, "Casino Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
		__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 262144, 0);
		uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
		if (__LIB_0__::func_121(uParam1->f_140[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 4, 0, 1000f, 0);
		}
		if (__LIB_0__::func_121(uParam1->f_140[1]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 4, 0, 1000f, 0);
		}
		if (__LIB_0__::func_121(uParam1->f_140[2]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 4, 0, 1000f, 0);
		}
	}
	return 1;
}

int func_3816(int iParam0, var uParam1)//Position - 0x134160
{
	char* sVar0;
	bool bVar1;
	if (__LIB_4__::func_128(iParam0))
	{
		return __LIB_5__::func_974(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_2), 21);
		STREAMING::REQUEST_IPL("ch_cutscene_casino");
		if (Global_1946250.f_4539 != __LIB_0__::getMinusOneOrNull())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
			{
				if (!func_3817(&(uParam1->f_2), Global_1946250.f_4539))
				{
					return 0;
				}
			}
		}
		if (!BitTest(uParam1->f_188, 1))
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_1", 0, 1);
				MISC::SET_BIT(&(uParam1->f_188), 1);
			}
		}
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			ENTITY::CREATE_MODEL_HIDE(959.0179f, 40.0682f, 116.2767f, 1f, joaat("hei_ch3_12_casinonew_penthouse"), false);
			return 1;
		}
		return 0;
	}
	else
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 27);
		sVar0 = "mini@strip_club@throwout_d@";
		bVar1 = true;
		STREAMING::REQUEST_ANIM_DICT(sVar0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			bVar1 = false;
		}
		STREAMING::REQUEST_MODEL(joaat("S_M_Y_Casino_01"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Casino_01")))
		{
			bVar1 = false;
		}
		if (!bVar1)
		{
			return 0;
		}
	}
	return 1;
}

int func_3817(var uParam0, int iParam1)//Position - 0x13426F
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iParam1)))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam1));
				iVar1 = 4;
				if (__LIB_0__::func_338(iParam1))
				{
					iVar1 = 5;
				}
				*uParam0 = PED::CREATE_PED(iVar1, iVar0, 962.5547f, 59.6398f, 111.553f, 180f, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
				PED::CLONE_PED_TO_TARGET(PLAYER::GET_PLAYER_PED(iParam1), *uParam0);
				if (__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_1508(*uParam0, 14, 0), -1))
				{
					PED::CLEAR_PED_PROP(*uParam0, 0);
				}
				if (__LIB_1__::func_102(*uParam0, 7))
				{
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_3837(int iParam0, int* iParam1)//Position - 0x135297
{
	var uVar0[25];
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	struct<3> Var10;
	char* sVar11;
	int iVar12;
	if (BitTest(iParam1->f_188, 12))
	{
		if (!func_1826(&(iParam1->f_140[0]), PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 0;
		}
		if (!__LIB_5__::func_539(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		if (!BitTest(iParam1->f_188, 5))
		{
			__LIB_4__::func_131(__LIB_4__::func_132(-1805228339), __LIB_4__::func_133(-1805228339));
			MISC::SET_BIT(&(iParam1->f_188), 5);
		}
		if (!__LIB_4__::func_130(&(iParam1->f_50), __LIB_4__::func_132(-1805228339), __LIB_4__::func_193(-1805228339), __LIB_4__::func_133(-1805228339)))
		{
			return 0;
		}
		iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar2]) && __LIB_0__::func_121(uVar0[iVar2])) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uVar0[iVar2])) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar2]) == __LIB_4__::func_136())
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uVar0[iVar2], false, false);
			}
			else
			{
				iVar2++;
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_133(-1805228339));
		Var3 = { __LIB_4__::func_132(-1805228339) };
		Var4 = { 0f, 0f, -122f };
		sVar5 = __LIB_4__::func_191(6);
		__LIB_3__::func_900(&(Global_1946250.f_3638), 12000, "valet intro", Var3, Var4, iParam1->f_3, sVar5, 1, 0, 0, 0, 2);
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (((__LIB_0__::func_121(iVar6) && __LIB_0__::func_872(iVar6, 0)) && __LIB_6__::func_854(iVar6) == PLAYER::PLAYER_ID()) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				MISC::SET_BIT(&(iParam1->f_188), 13);
				iParam1->f_135[0] = iVar6;
			}
			MISC::SET_BIT(&(iParam1->f_188), 14);
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar7 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			func_1831(&iVar7, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else
		{
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar7, -1, false);
			if (func_1826(&(iParam1->f_109.f_1[0]), iVar8, 1, 1) && __LIB_0__::func_121(iParam1->f_109.f_1[0]))
			{
				if (__LIB_0__::func_121(iParam1->f_109))
				{
					VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
				}
				if (PED::IS_PED_MALE(iParam1->f_109.f_1[0]))
				{
					MISC::SET_BIT(&(iParam1->f_188), 4);
				}
				if (iVar8 == PLAYER::PLAYER_PED_ID())
				{
					MISC::SET_BIT(&(iParam1->f_188), 11);
				}
			}
			else
			{
				return 0;
			}
		}
		if (!__LIB_5__::func_539(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		iParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_4__::func_134(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_134());
		if (__LIB_0__::func_121(iParam1->f_176[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_176[0], true);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam1->f_109), &(iParam1->f_189[0 /*3*/]), &(iParam1->f_189[1 /*3*/]));
		Var9 = { 925.9088f, 51.242f, 80.095f };
		Var10 = { 0f, 0f, 58f };
		sVar11 = __LIB_5__::func_550(iParam1, 6);
		iVar12 = __LIB_4__::func_192(__LIB_4__::func_189(iParam1));
		__LIB_3__::func_900(&(Global_1946250.f_3638), iVar12, "valet", Var9, Var10, iParam1->f_3, sVar11, 1, 0, 0, 0, 2);
	}
	else if (__LIB_3__::func_616() == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_2))
		{
			func_2813(&(iParam1->f_2), PLAYER::PLAYER_ID(), 1, 1);
			return 0;
		}
		if ((__LIB_0__::func_121(iParam1->f_2) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_2)) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_2))
		{
			ENTITY::CREATE_MODEL_HIDE(__LIB_4__::func_132(-1805228339), 0.1f, __LIB_4__::func_133(-1805228339), false);
			iParam1->f_50 = OBJECT::CREATE_OBJECT(__LIB_4__::func_133(-1805228339), __LIB_4__::func_132(-1805228339), false, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_50))
			{
				return 0;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_50, __LIB_4__::func_132(-1805228339), false, false, false);
				ENTITY::SET_ENTITY_ROTATION(iParam1->f_50, 0f, 0f, -122f, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_50, true);
				ENTITY::SET_ENTITY_COLLISION(iParam1->f_50, false, false);
			}
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_2, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_133(-1805228339));
			__LIB_6__::func_27(&(Global_1946250.f_3638), 4000, "Enter_Casino", 916.7877f, 63.0506f, 81.6854f, 0.3236f, 0f, -151.6214f, 35.7535f, 916.9896f, 62.7016f, 81.6876f, 0.3236f, 0f, -149.9406f, 34.8284f, 0.1f, 0, 0, 0, 0, 0);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_3887(var uParam0, var uParam1)//Position - 0x1371C2
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	if (__LIB_3__::func_616() == 0 || __LIB_3__::func_616() == 2)
	{
		if (!__LIB_3__::func_998(PLAYER::PLAYER_ID()) || __LIB_3__::func_597())
		{
			if (!__LIB_3__::func_597())
			{
				if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
				{
					__LIB_8__::func_967(1, *uParam0);
				}
			}
			if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
			{
				__LIB_8__::func_967(1, *uParam0);
			}
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_5__::func_462();
			if (__LIB_3__::func_597())
			{
				uParam1->f_1 = 1;
			}
			return;
		}
	}
	if (__LIB_3__::func_597())
	{
		if ((__LIB_3__::func_616() == 3 || __LIB_3__::func_616() == 4) || __LIB_3__::func_616() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_1 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_5__::func_462();
			return;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_3891(uParam0, uParam1);
			break;
		case 4:
			__LIB_5__::func_882(*uParam0, uParam1);
			break;
		case 2:
		case 3:
		case 1:
		case 5:
			func_3888(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3888(var uParam0, var uParam1)//Position - 0x137300
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5[3];
	var uVar6[3];
	char* sVar7;
	int iVar8;
	int iVar9;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	bVar0 = true;
	iVar1 = __LIB_3__::func_785();
	bVar0 = iVar1 != 5;
	func_2017(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar2, &bVar3, bVar0, 0);
	sVar7 = __LIB_4__::func_155();
	iVar9 = 0;
	while (iVar9 < 3)
	{
		uVar6[iVar8] = __LIB_5__::func_207(iVar9);
		if (__LIB_3__::func_782(iVar9, bVar2, bVar3))
		{
			iVar5[iVar8] = iVar9;
			if (!bVar4 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar8 /*6*/]), uVar6[iVar8]))
			{
				bVar4 = true;
			}
			iVar8++;
		}
		else if (!bVar4)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar8 /*6*/]), uVar6[iVar8]))
			{
				bVar4 = true;
			}
		}
		iVar9++;
	}
	if (uParam0->f_5 || bVar4)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar7, sVar7);
		__LIB_5__::func_270();
		iVar9 = 0;
		while (iVar9 < iVar8)
		{
			__LIB_10__::func_18(iVar9, uVar6[iVar9], 0, 1, 0, 0, 0);
			iVar9++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_3__::func_785() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			__LIB_5__::func_462();
			if ((__LIB_3__::func_616() == 1 || __LIB_3__::func_616() == 3) || __LIB_3__::func_616() == 4)
			{
				__LIB_4__::func_143();
			}
			else
			{
				uParam1->f_10 = 1;
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_8__::func_967(iVar5[uParam0->f_4], 123);
			}
		}
		else if (__LIB_3__::func_785() == 5)
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_5__::func_462();
			__LIB_4__::func_151(*uParam0, 146);
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_8__::func_967(iVar5[uParam0->f_4], 146);
			}
		}
		else
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_5__::func_462();
			__LIB_4__::func_151(*uParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
			if (__LIB_3__::func_785() == 3)
			{
				__LIB_4__::func_143();
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_8__::func_967(iVar5[uParam0->f_4], 124);
			}
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_5__::func_462();
	}
}

void func_3891(var uParam0, var uParam1)//Position - 0x13758C
{
	var uVar0;
	var uVar1[5];
	var uVar2[5];
	var uVar3[5];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar4 = __LIB_4__::func_155();
	if (__LIB_3__::func_616() == 0)
	{
		uVar0 = __LIB_5__::func_554(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	else
	{
		uVar0 = __LIB_8__::func_966(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	if (uParam0->f_5 || uVar0)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar4, sVar4);
		__LIB_5__::func_270();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_10__::func_18(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		if (__LIB_3__::func_616() == 0)
		{
			__LIB_1__::func_789(__LIB_4__::func_205(uVar1[iVar7], iVar7), 0, 0);
		}
		else
		{
			__LIB_1__::func_789(__LIB_5__::func_883(uVar1[iVar7], iVar7), 0, 0);
		}
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (__LIB_3__::func_616() == 0)
			{
				func_3893(*uParam0, iVar7, uParam1, uParam1);
			}
			else
			{
				func_3892(*uParam0, iVar7, uParam1, uParam1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_3892(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x1376A9
{
	if (iParam1 == 0)
	{
		if (func_3709(iParam0, 0, 0))
		{
			__LIB_3__::func_784(1);
		}
		else
		{
			uParam3->f_8 = 1;
			uParam3->f_6 = 1;
			uParam3->f_11 = 10;
			uParam3->f_1 = 1;
			__LIB_4__::func_143();
		}
	}
	else if (iParam1 == 1)
	{
		__LIB_3__::func_664(0);
		if (func_3709(iParam0, 0, 0))
		{
			__LIB_3__::func_784(2);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
		}
	}
	else if (iParam1 == 4)
	{
		if (func_3709(iParam0, 1, 0))
		{
			__LIB_3__::func_784(5);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 146);
		}
	}
	else if (iParam1 == 3)
	{
		__LIB_3__::func_784(4);
		__LIB_4__::func_143();
	}
	else
	{
		__LIB_3__::func_664(1);
		if (func_3709(iParam0, 0, 0))
		{
			__LIB_3__::func_784(3);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
			__LIB_4__::func_143();
		}
	}
	*uParam2 = 1;
}

void func_3893(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x1377B1
{
	if (iParam1 == 0)
	{
		if (func_3709(iParam0, 0, 0))
		{
			__LIB_3__::func_784(1);
			*uParam2 = 1;
		}
		else
		{
			uParam3->f_8 = 1;
			uParam3->f_6 = 1;
			uParam3->f_10 = 1;
			uParam3->f_1 = 1;
			uParam3->f_11 = 10;
		}
	}
	else if (iParam1 == 1)
	{
		__LIB_3__::func_664(0);
		if (func_3709(iParam0, 0, 0))
		{
			__LIB_3__::func_784(2);
			*uParam2 = 1;
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
		}
	}
}

void func_3936(var uParam0, int iParam1)//Position - 0x138C62
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1316678/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1316664/*__LIB_5__::func_565*/;
			break;
		case 1:
			uParam0->f_30 = 1316565/*__LIB_4__::func_945*/;
			break;
		case 2:
			uParam0->f_31 = 1315503/*__LIB_6__::func_898*/;
			break;
		case 3:
			uParam0->f_34 = 1315349/*__LIB_4__::func_265*/;
			break;
		case 4:
			uParam0->f_12 = 1315296/*__LIB_5__::func_564*/;
			break;
		case 5:
			uParam0->f_11 = 1315241/*__LIB_4__::func_263*/;
			break;
		case 37:
			uParam0->f_18 = 1315123/*__LIB_4__::func_262*/;
			break;
		case 38:
			uParam0->f_9 = 1314991/*__LIB_5__::func_981*/;
			break;
		case 6:
			uParam0->f_32 = 1314876/*__LIB_4__::func_944*/;
			break;
		case 11:
			uParam0->f_11 = 1314866/*__LIB_4__::func_261*/;
			break;
		case 12:
			uParam0->f_33 = 1313697/*__LIB_6__::func_973*/;
			break;
		case 14:
			uParam0->f_11 = 1313688/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1312358/*__LIB_7__::func_753*/;
			break;
		case 8:
			uParam0->f_37 = 1312314/*__LIB_4__::func_258*/;
			break;
		case 7:
			uParam0->f_36 = 1312291/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 1312267/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1312204/*__LIB_42__::func_89*/;
			break;
		case 15:
			uParam0->f_2 = 1312124/*__LIB_42__::func_88*/;
			break;
		case 16:
			uParam0->f_5 = 1311481/*__LIB_8__::func_929*/;
			break;
		case 108:
			uParam0->f_55 = 1308338/*__LIB_43__::func_425*/;
			break;
		case 17:
			uParam0->f_17 = 1307634/*__LIB_9__::func_469*/;
			break;
		case 19:
			uParam0->f_17 = 1307608/*__LIB_5__::func_979*/;
			break;
		case 20:
			uParam0->f_3 = 1307429/*__LIB_6__::func_897*/;
			break;
		case 21:
			uParam0->f_3 = 1307365/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 1307151/*__LIB_6__::func_971*/;
			break;
		case 75:
			uParam0->f_4 = 1307135/*__LIB_5__::func_562*/;
			break;
		case 22:
			uParam0->f_24 = 1307028/*__LIB_5__::func_561*/;
			break;
		case 23:
			uParam0->f_26 = 1306981/*__LIB_4__::func_256*/;
			break;
		case 24:
			uParam0->f_26 = 1306944/*__LIB_4__::func_255*/;
			break;
		case 26:
			uParam0->f_38 = 1306114/*func_4040*/;
			break;
		case 25:
			uParam0->f_23 = 1305748/*func_4037*/;
			break;
		case 27:
			uParam0->f_25 = 1305366/*__LIB_5__::func_885*/;
			break;
		case 28:
			uParam0->f_24 = 1305315/*__LIB_4__::func_250*/;
			break;
		case 29:
			uParam0->f_28 = 1305307/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1305070/*__LIB_5__::func_737*/;
			break;
		case 31:
			uParam0->f_39 = 1304949/*__LIB_5__::func_296*/;
			break;
		case 33:
			uParam0->f_40 = 1304529/*__LIB_6__::func_896*/;
			break;
		case 34:
			uParam0->f_41 = 1293234/*__LIB_7__::func_844*/;
			break;
		case 36:
			uParam0->f_58 = 1293189/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1290102/*__LIB_5__::func_559*/;
			break;
		case 45:
			uParam0->f_14 = 1290093/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1290084/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1290076/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1290027/*__LIB_4__::func_942*/;
			break;
		case 47:
			uParam0->f_43 = 1289945/*__LIB_4__::func_243*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1289181/*__LIB_6__::func_970*/;
			break;
		case 49:
			uParam0->f_8 = 1289134/*__LIB_4__::func_237*/;
			break;
		case 50:
			*uParam0 = 1289075/*__LIB_5__::func_736*/;
			break;
		case 51:
			*uParam0 = 1288843/*__LIB_9__::func_425*/;
			break;
		case 52:
			uParam0->f_15 = 1288832/*__LIB_4__::func_234*/;
			break;
		case 53:
			uParam0->f_13 = 1288790/*__LIB_4__::func_233*/;
			break;
		case 54:
			uParam0->f_45 = 1288782/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1288773/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1288764/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1288722/*__LIB_4__::func_232*/;
			break;
		case 59:
			*uParam0 = 1288713/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 1288704/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1288693/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1288651/*__LIB_4__::func_231*/;
			break;
		case 63:
			uParam0->f_11 = 1288642/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 1288634/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1287572/*__LIB_7__::func_57*/;
			break;
		case 66:
			uParam0->f_21 = 1287269/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 1287155/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 1286312/*__LIB_6__::func_968*/;
			break;
		case 69:
			*uParam0 = 1286303/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1286230/*__LIB_4__::func_230*/;
			break;
		case 71:
			uParam0->f_49 = 1286221/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1286209/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1286007/*__LIB_5__::func_884*/;
			break;
		case 84:
			uParam0->f_1 = 1285998/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1284265/*func_3955*/;
			break;
		case 87:
			uParam0->f_1 = 1282810/*__LIB_6__::func_421*/;
			break;
		case 88:
			uParam0->f_1 = 1282801/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1282793/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1282784/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1282775/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 1282766/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 1282758/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 1282750/*__LIB_0__::func_467*/;
			break;
		case 78:
			uParam0->f_59 = 1282578/*__LIB_7__::func_783*/;
			break;
		case 125:
			uParam0->f_19 = 1282545/*__LIB_4__::func_215*/;
			break;
	}
}

int func_3955(int iParam0, var uParam1)//Position - 0x1398A9
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (__LIB_4__::func_977())
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1831(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1825(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[2 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		Var1 = { __LIB_4__::func_229(iParam0, __LIB_3__::func_616()) };
		Var2 = { __LIB_4__::func_228(iParam0, __LIB_3__::func_616()) };
		uVar3 = __LIB_4__::func_225(iParam0, __LIB_3__::func_616());
		Var4 = { __LIB_4__::func_227(iParam0, __LIB_3__::func_616()) };
		Var5 = { __LIB_4__::func_226(iParam0, __LIB_3__::func_616()) };
		uVar6 = __LIB_4__::func_225(iParam0, __LIB_3__::func_616());
		Var7 = { __LIB_4__::func_224(iParam0, __LIB_3__::func_616()) };
		Var8 = { __LIB_4__::func_223(iParam0, __LIB_3__::func_616()) };
		uVar9 = __LIB_4__::func_220(iParam0, __LIB_3__::func_616());
		Var10 = { __LIB_4__::func_222(iParam0, __LIB_3__::func_616()) };
		Var11 = { __LIB_4__::func_221(iParam0, __LIB_3__::func_616()) };
		uVar12 = __LIB_4__::func_220(iParam0, __LIB_3__::func_616());
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[2 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 5);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 5);
		}
		return __LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var2, uVar3, Var4, Var5, uVar6, bVar13, Var7, Var8, uVar9, Var10, Var11, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_4037(int iParam0, int iParam1)//Position - 0x13EC94
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_252(iParam0) };
	if (__LIB_6__::func_897(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2017(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_896(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_896(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_809(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_809(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_4040(var uParam0, var uParam1)//Position - 0x13EE02
{
	if (__LIB_3__::func_929(PLAYER::PLAYER_ID()))
	{
		func_4041(uParam0, uParam1);
	}
}

void func_4041(var uParam0, var uParam1)//Position - 0x13EE20
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_54(uParam0, uParam1);
			break;
		case 1:
			func_4042(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_4042(var uParam0, var uParam1)//Position - 0x13EE5A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_2017(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_251())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_251())
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			__LIB_1__::func_767("ARENA_ENT_T" /* GXT: ARENA WORKSHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_5__::func_462();
		}
	}
}

void func_4103(var uParam0, int iParam1)//Position - 0x14174F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1407188/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1407132/*__LIB_4__::func_312*/;
			break;
		case 2:
			uParam0->f_31 = 1406788/*__LIB_5__::func_307*/;
			break;
		case 3:
			uParam0->f_34 = 1406749/*__LIB_4__::func_311*/;
			break;
		case 4:
			uParam0->f_12 = 1406715/*__LIB_4__::func_310*/;
			break;
		case 5:
			uParam0->f_11 = 1406704/*__LIB_4__::func_309*/;
			break;
		case 6:
			uParam0->f_32 = 1406640/*__LIB_4__::func_308*/;
			break;
		case 111:
			uParam0->f_35 = 1406617/*__LIB_5__::func_306*/;
			break;
		case 79:
			*uParam0 = 1406593/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1406475/*__LIB_4__::func_307*/;
			break;
		case 38:
			uParam0->f_9 = 1406396/*__LIB_5__::func_888*/;
			break;
		case 11:
			uParam0->f_11 = 1406387/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1405791/*__LIB_9__::func_316*/;
			break;
		case 109:
			uParam0->f_56 = 1405783/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1400621/*__LIB_42__::func_90*/;
			break;
		case 13:
			uParam0->f_2 = 1400612/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1400597/*__LIB_5__::func_303*/;
			break;
		case 16:
			uParam0->f_5 = 1400122/*__LIB_9__::func_277*/;
			break;
		case 108:
			uParam0->f_55 = 1396634/*__LIB_43__::func_426*/;
			break;
		case 17:
			uParam0->f_17 = 1395855/*__LIB_12__::func_40*/;
			break;
		case 19:
			uParam0->f_17 = 1395829/*__LIB_5__::func_982*/;
			break;
		case 20:
			uParam0->f_3 = 1395618/*__LIB_9__::func_306*/;
			break;
		case 21:
			uParam0->f_3 = 1395455/*__LIB_7__::func_847*/;
			break;
		case 74:
			uParam0->f_53 = 1394846/*__LIB_7__::func_846*/;
			break;
		case 22:
			uParam0->f_24 = 1394761/*__LIB_4__::func_288*/;
			break;
		case 25:
			uParam0->f_23 = 1393845/*func_4165*/;
			break;
		case 30:
			uParam0->f_8 = 1392871/*__LIB_7__::func_873*/;
			break;
		case 31:
			uParam0->f_39 = 1392193/*__LIB_9__::func_275*/;
			break;
		case 33:
			uParam0->f_40 = 1391350/*__LIB_9__::func_305*/;
			break;
		case 14:
			uParam0->f_11 = 1391341/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 34:
			uParam0->f_41 = 1390566/*__LIB_5__::func_568*/;
			break;
		case 36:
			uParam0->f_58 = 1390513/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1322226/*__LIB_7__::func_845*/;
			break;
		case 45:
			uParam0->f_14 = 1322217/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1322208/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1322200/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1322177/*__LIB_4__::func_273*/;
			break;
		case 47:
			uParam0->f_43 = 1322037/*__LIB_4__::func_272*/;
			break;
		case 49:
			uParam0->f_8 = 1322002/*__LIB_4__::func_271*/;
			break;
		case 50:
			*uParam0 = 1321964/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1321940/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1321929/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1321850/*__LIB_8__::func_854*/;
			break;
		case 54:
			uParam0->f_45 = 1321842/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1321833/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1321823/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1321534/*__LIB_8__::func_853*/;
			break;
		case 64:
			uParam0->f_47 = 1320154/*__LIB_36__::func_71*/;
			break;
		case 65:
			uParam0->f_21 = 1319191/*__LIB_12__::func_13*/;
			break;
		case 66:
			uParam0->f_21 = 1318996/*__LIB_7__::func_959*/;
			break;
		case 67:
			uParam0->f_21 = 1318893/*__LIB_7__::func_958*/;
			break;
		case 68:
			*uParam0 = 1318204/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 1318195/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1318183/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1318174/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1318162/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1317825/*__LIB_6__::func_974*/;
			break;
		case 73:
			uParam0->f_51 = 1317816/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1317699/*__LIB_7__::func_810*/;
			break;
	}
}

void func_4165(int iParam0, int iParam1)//Position - 0x1544B5
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	int iVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_9__::func_306(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(iVar7)) && !__LIB_1__::func_907(iVar7, 1)) && !__LIB_5__::func_424(iVar7)) && !__LIB_3__::func_728(iVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(iVar7))) && !__LIB_1__::func_907(iVar7, 1)) && !__LIB_5__::func_424(iVar7)) && !__LIB_3__::func_728(iVar7, 14))
						{
							bVar1 = true;
						}
						if ((!bVar1 && __LIB_7__::func_22(PLAYER::PLAYER_ID())) && __LIB_3__::func_360(iVar7, PLAYER::PLAYER_ID()))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_305(iParam0, -1);
					}
					bVar9 = __LIB_1__::func_637(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_9__::func_305(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_855(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_4__::func_947(PLAYER::PLAYER_ID()))
						{
							func_4166(iParam0);
						}
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_855(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_4__::func_947(PLAYER::PLAYER_ID()))
						{
							func_4166(iParam0);
						}
					}
					Jump @693; //curOff = 674
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4166(int iParam0)//Position - 0x15476D
{
	__LIB_9__::func_305(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4236(var uParam0, int iParam1)//Position - 0x1578DD
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1469576/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1469336/*__LIB_5__::func_592*/;
			break;
		case 2:
			uParam0->f_31 = 1467035/*__LIB_5__::func_591*/;
			break;
		case 3:
			uParam0->f_34 = 1466826/*__LIB_4__::func_393*/;
			break;
		case 4:
			uParam0->f_12 = 1466620/*__LIB_5__::func_590*/;
			break;
		case 5:
			uParam0->f_11 = 1466542/*__LIB_4__::func_391*/;
			break;
		case 37:
			uParam0->f_18 = 1466403/*__LIB_4__::func_951*/;
			break;
		case 38:
			uParam0->f_9 = 1466347/*__LIB_6__::func_904*/;
			break;
		case 42:
			uParam0->f_10 = 1466310/*__LIB_5__::func_988*/;
			break;
		case 6:
			uParam0->f_32 = 1466074/*__LIB_4__::func_390*/;
			break;
		case 111:
			uParam0->f_35 = 1466060/*__LIB_5__::func_589*/;
			break;
		case 11:
			uParam0->f_11 = 1466051/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 1462681/*__LIB_36__::func_137*/;
			break;
		case 14:
			uParam0->f_11 = 1462672/*__LIB_1__::func_806*/;
			break;
		case 109:
			uParam0->f_56 = 1448755/*__LIB_5__::func_316*/;
			break;
		case 79:
			*uParam0 = 1448499/*__LIB_5__::func_588*/;
			break;
		case 13:
			uParam0->f_2 = 1448450/*__LIB_5__::func_745*/;
			break;
		case 15:
			uParam0->f_2 = 1448239/*__LIB_42__::func_91*/;
			break;
		case 44:
			*uParam0 = 1448230/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1448201/*__LIB_5__::func_587*/;
			break;
		case 16:
			uParam0->f_5 = 1447515/*__LIB_9__::func_280*/;
			break;
		case 108:
			uParam0->f_55 = 1443660/*__LIB_43__::func_427*/;
			break;
		case 17:
			uParam0->f_17 = 1442345/*__LIB_36__::func_99*/;
			break;
		case 19:
			uParam0->f_17 = 1442300/*__LIB_6__::func_983*/;
			break;
		case 20:
			uParam0->f_3 = 1442135/*__LIB_6__::func_903*/;
			break;
		case 21:
			uParam0->f_3 = 1442071/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 1441844/*__LIB_6__::func_982*/;
			break;
		case 22:
			uParam0->f_24 = 1441713/*__LIB_5__::func_585*/;
			break;
		case 26:
			uParam0->f_38 = 1438492/*func_4360*/;
			break;
		case 25:
			uParam0->f_23 = 1438171/*func_4358*/;
			break;
		case 27:
			uParam0->f_25 = 1437193/*__LIB_36__::func_106*/;
			break;
		case 28:
			uParam0->f_24 = 1437080/*__LIB_4__::func_371*/;
			break;
		case 29:
			uParam0->f_28 = 1436999/*__LIB_4__::func_370*/;
			break;
		case 30:
			uParam0->f_8 = 1436109/*__LIB_36__::func_98*/;
			break;
		case 31:
			uParam0->f_39 = 1435562/*__LIB_5__::func_740*/;
			break;
		case 33:
			uParam0->f_40 = 1434880/*__LIB_7__::func_59*/;
			break;
		case 32:
			*uParam0 = 1434840/*__LIB_6__::func_980*/;
			break;
		case 34:
			uParam0->f_41 = 1425574/*__LIB_5__::func_986*/;
			break;
		case 36:
			uParam0->f_58 = 1425516/*__LIB_4__::func_359*/;
			break;
		case 35:
			uParam0->f_42 = 1323095/*__LIB_6__::func_975*/;
			break;
		case 45:
			uParam0->f_14 = 1425507/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1425498/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1425490/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1425441/*__LIB_4__::func_950*/;
			break;
		case 47:
			uParam0->f_43 = 1425148/*__LIB_4__::func_949*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1422484/*__LIB_8__::func_986*/;
			break;
		case 49:
			uParam0->f_8 = 1422380/*__LIB_4__::func_948*/;
			break;
		case 50:
			*uParam0 = 1422097/*__LIB_7__::func_814*/;
			break;
		case 51:
			*uParam0 = 1421935/*__LIB_9__::func_426*/;
			break;
		case 52:
			uParam0->f_15 = 1421924/*__LIB_4__::func_344*/;
			break;
		case 53:
			uParam0->f_13 = 1421666/*__LIB_4__::func_343*/;
			break;
		case 54:
			uParam0->f_45 = 1421404/*__LIB_7__::func_813*/;
			break;
		case 56:
			uParam0->f_46 = 1421395/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 1420238/*__LIB_7__::func_848*/;
			break;
		case 58:
			uParam0->f_13 = 1419980/*__LIB_4__::func_338*/;
			break;
		case 59:
			*uParam0 = 1419701/*__LIB_5__::func_738*/;
			break;
		case 60:
			*uParam0 = 1419692/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1419681/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1419423/*__LIB_4__::func_336*/;
			break;
		case 55:
			uParam0->f_45 = 1419415/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 1419357/*__LIB_5__::func_985*/;
			break;
		case 64:
			uParam0->f_47 = 1419207/*__LIB_7__::func_812*/;
			break;
		case 65:
			uParam0->f_21 = 1417501/*__LIB_7__::func_874*/;
			break;
		case 66:
			uParam0->f_21 = 1417190/*__LIB_5__::func_575*/;
			break;
		case 67:
			uParam0->f_21 = 1417038/*__LIB_4__::func_334*/;
			break;
		case 68:
			*uParam0 = 1416078/*__LIB_6__::func_976*/;
			break;
		case 69:
			*uParam0 = 1416069/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1415620/*__LIB_4__::func_331*/;
			break;
		case 71:
			uParam0->f_49 = 1415341/*__LIB_4__::func_330*/;
			break;
		case 107:
			uParam0->f_50 = 1415329/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1415096/*__LIB_5__::func_889*/;
			break;
		case 84:
			uParam0->f_1 = 1415087/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1412990/*func_4257*/;
			break;
		case 87:
			uParam0->f_1 = 1410095/*__LIB_6__::func_422*/;
			break;
		case 88:
			uParam0->f_1 = 1410086/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1410078/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1410052/*__LIB_4__::func_316*/;
			break;
		case 97:
			uParam0->f_1 = 1409942/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 1409225/*func_4243*/;
			break;
		case 100:
			uParam0->f_22 = 1409062/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 1408932/*__LIB_7__::func_877*/;
			break;
		case 78:
			uParam0->f_59 = 1408642/*__LIB_7__::func_811*/;
			break;
		case 125:
			uParam0->f_19 = 1408618/*__LIB_4__::func_313*/;
			break;
	}
}

int func_4243(var uParam0, var uParam1)//Position - 0x1580C9
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	Var0 = { -1560.336f, -3019.0583f, -74.8061f };
	Var1 = { 0f, 0f, -30f };
	sVar2 = "mini@strip_club@throwout_d@";
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
	{
		uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_ClubBar_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
	{
		uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_M_Bouncer_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[1]);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 11, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 8, 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
	{
		func_2813(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
			{
				return 0;
			}
		}
		iVar3++;
	}
	MISC::SET_BIT(&(Global_1946250.f_2), 20);
	Var0 = { Var0 + Vector(0f, 4f, 0f) };
	__LIB_3__::func_900(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 262144, 0);
	uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	if (__LIB_0__::func_121(uParam1->f_140[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[2]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 0, 0, 1000f, 0);
	}
	return 1;
}

int func_4257(int iParam0, var uParam1)//Position - 0x158F7E
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	bool bVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	iVar0 = __LIB_4__::func_322(iParam0);
	if (__LIB_4__::func_980(iVar0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1831(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1825(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		Var2 = { __LIB_4__::func_329(iVar0) };
		Var3 = { __LIB_4__::func_328(iVar0) };
		fVar4 = __LIB_4__::func_327(iVar0);
		fVar5 = __LIB_4__::func_326(iVar0);
		bVar6 = false;
		Var7 = { __LIB_4__::func_325(iVar0) };
		Var8 = { __LIB_4__::func_324(iVar0) };
		fVar9 = __LIB_4__::func_323(iVar0);
		return __LIB_6__::func_423(&(Global_1946250.f_3638), Var2, Var3, fVar4, fVar5, bVar6, Var7, Var8, fVar9);
	}
	return 1;
}

void func_4358(int iParam0, int iParam1)//Position - 0x15F1DB
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_301(iParam0) };
	if (__LIB_6__::func_903(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2017(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_7__::func_59(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_59(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_850(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_850(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_4360(var uParam0, var uParam1)//Position - 0x15F31C
{
	if (__LIB_3__::func_616() == 2)
	{
		func_4374(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 0)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_7__::func_851(uParam0, uParam1);
		}
		else
		{
			func_4362(uParam0, uParam1);
		}
	}
	else if (__LIB_3__::func_616() == 3)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_7__::func_851(uParam0, uParam1);
		}
		else
		{
			__LIB_4__::func_376(uParam1);
		}
	}
}

void func_4362(var uParam0, var uParam1)//Position - 0x15F3A7
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_55(uParam0, uParam1);
			break;
		case 1:
			func_4363(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_4363(var uParam0, var uParam1)//Position - 0x15F3E1
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_2017(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, __LIB_5__::func_576(PLAYER::PLAYER_ID()), 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_375())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_375())
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_3__::func_616() == 2)
			{
				__LIB_1__::func_767("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_767("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_5__::func_462();
		}
	}
}

void func_4374(var uParam0, var uParam1)//Position - 0x15F8FE
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_56(uParam0, uParam1);
			break;
		case 1:
			func_4381(uParam0, uParam1);
			break;
		case 2:
			__LIB_13__::func_482(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_4381(var uParam0, var uParam1)//Position - 0x15FD0B
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_2017(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_5__::func_462();
		if (__LIB_8__::func_931(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_3__::func_616() == 2)
			{
				__LIB_1__::func_767("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_767("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_7__::func_59(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_4448(var uParam0, int iParam1)//Position - 0x166C91
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1477108/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1477052/*__LIB_4__::func_411*/;
			break;
		case 2:
			uParam0->f_31 = 1476783/*__LIB_5__::func_324*/;
			break;
		case 3:
			uParam0->f_34 = 1476722/*__LIB_4__::func_410*/;
			break;
		case 4:
			uParam0->f_12 = 1476691/*__LIB_4__::func_409*/;
			break;
		case 6:
			uParam0->f_32 = 1476627/*__LIB_4__::func_408*/;
			break;
		case 111:
			uParam0->f_35 = 1476618/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 11:
			uParam0->f_11 = 1476609/*__LIB_0__::func_109*/;
			break;
		case 14:
			uParam0->f_11 = 1476600/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 12:
			uParam0->f_33 = 1476389/*__LIB_9__::func_133*/;
			break;
		case 109:
			uParam0->f_56 = 1476381/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1476357/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1476348/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1475404/*__LIB_9__::func_501*/;
			break;
		case 75:
			uParam0->f_4 = 1475395/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1475370/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1475361/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1475335/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1475324/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1475315/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1475306/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1474838/*__LIB_8__::func_934*/;
			break;
		case 22:
			uParam0->f_24 = 1474715/*__LIB_5__::func_596*/;
			break;
		case 25:
			uParam0->f_23 = 1473943/*func_4490*/;
			break;
		case 30:
			uParam0->f_8 = 1473797/*__LIB_5__::func_595*/;
			break;
		case 31:
			uParam0->f_39 = 1473786/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1473579/*__LIB_9__::func_282*/;
			break;
		case 34:
			uParam0->f_41 = 1473262/*__LIB_5__::func_594*/;
			break;
		case 36:
			uParam0->f_58 = 1473209/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1472436/*__LIB_5__::func_891*/;
			break;
		case 45:
			uParam0->f_14 = 1472427/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1472418/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1472410/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1472399/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1472160/*__LIB_5__::func_890*/;
			break;
		case 49:
			uParam0->f_8 = 1472151/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1472142/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1472133/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1472122/*__LIB_4__::func_401*/;
			break;
		case 53:
			uParam0->f_13 = 1472111/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1472103/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1472094/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1472085/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1471792/*__LIB_8__::func_186*/;
			break;
		case 64:
			uParam0->f_47 = 1471248/*__LIB_8__::func_222*/;
			break;
		case 65:
			uParam0->f_21 = 1471240/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1471172/*__LIB_5__::func_319*/;
			break;
		case 67:
			uParam0->f_21 = 1471032/*__LIB_5__::func_593*/;
			break;
		case 68:
			*uParam0 = 1470588/*__LIB_5__::func_318*/;
			break;
		case 69:
			*uParam0 = 1470579/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1470567/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1470558/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1470546/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1470537/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1470529/*__LIB_0__::func_467*/;
			break;
	}
}

void func_4490(int iParam0, int iParam1)//Position - 0x167D97
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_0__::func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar1 = __LIB_3__::func_680();
		}
		Var4 = { __LIB_8__::func_933(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_696(iVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_907(iVar7, 1) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
								{
									bVar2 = true;
								}
							}
						}
						if ((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_3__::func_779())
					{
						__LIB_9__::func_282(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_9__::func_282(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4491(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4491(iParam0);
					}
					Jump @551; //curOff = 532
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4491(int iParam0)//Position - 0x167FC1
{
	__LIB_9__::func_282(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4526(var uParam0, int iParam1)//Position - 0x1689FD
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1575596/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1575492/*__LIB_4__::func_515*/;
			break;
		case 2:
			uParam0->f_31 = 1574757/*__LIB_5__::func_620*/;
			break;
		case 3:
			uParam0->f_34 = 1574675/*__LIB_4__::func_513*/;
			break;
		case 4:
			uParam0->f_12 = 1574532/*__LIB_4__::func_512*/;
			break;
		case 5:
			uParam0->f_11 = 1574522/*__LIB_4__::func_511*/;
			break;
		case 37:
			uParam0->f_18 = 1574387/*__LIB_4__::func_510*/;
			break;
		case 42:
			uParam0->f_10 = 1574320/*__LIB_5__::func_897*/;
			break;
		case 6:
			uParam0->f_32 = 1574208/*__LIB_4__::func_509*/;
			break;
		case 111:
			uParam0->f_35 = 1574194/*__LIB_5__::func_751*/;
			break;
		case 11:
			uParam0->f_11 = 1574185/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1573685/*__LIB_5__::func_619*/;
			break;
		case 14:
			uParam0->f_11 = 1573676/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1573668/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1573644/*__LIB_5__::func_265*/;
			break;
		case 38:
			uParam0->f_9 = 1573564/*__LIB_5__::func_896*/;
			break;
		case 13:
			uParam0->f_2 = 1573468/*__LIB_5__::func_750*/;
			break;
		case 15:
			uParam0->f_2 = 1573263/*__LIB_42__::func_92*/;
			break;
		case 75:
			uParam0->f_4 = 1573247/*__LIB_5__::func_618*/;
			break;
		case 16:
			uParam0->f_5 = 1572434/*__LIB_8__::func_936*/;
			break;
		case 108:
			uParam0->f_55 = 1567782/*__LIB_43__::func_428*/;
			break;
		case 17:
			uParam0->f_17 = 1566963/*__LIB_9__::func_471*/;
			break;
		case 19:
			uParam0->f_17 = 1566937/*__LIB_5__::func_994*/;
			break;
		case 20:
			uParam0->f_3 = 1566853/*__LIB_5__::func_616*/;
			break;
		case 21:
			uParam0->f_3 = 1566789/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1566637/*__LIB_5__::func_330*/;
			break;
		case 22:
			uParam0->f_24 = 1566466/*__LIB_5__::func_615*/;
			break;
		case 25:
			uParam0->f_23 = 1565416/*func_4708*/;
			break;
		case 30:
			uParam0->f_8 = 1564798/*__LIB_6__::func_675*/;
			break;
		case 31:
			uParam0->f_39 = 1564487/*__LIB_5__::func_749*/;
			break;
		case 33:
			uParam0->f_40 = 1563548/*__LIB_7__::func_62*/;
			break;
		case 34:
			uParam0->f_41 = 1562188/*__LIB_4__::func_500*/;
			break;
		case 36:
			uParam0->f_58 = 1562130/*__LIB_4__::func_499*/;
			break;
		case 35:
			uParam0->f_42 = 1514424/*__LIB_5__::func_614*/;
			break;
		case 45:
			uParam0->f_14 = 1514415/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1514406/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1514398/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1514375/*__LIB_4__::func_496*/;
			break;
		case 47:
			uParam0->f_43 = 1514247/*__LIB_4__::func_495*/;
			break;
		case 49:
			uParam0->f_8 = 1514206/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1513938/*__LIB_5__::func_747*/;
			break;
		case 51:
			*uParam0 = 1513869/*__LIB_7__::func_759*/;
			break;
		case 52:
			uParam0->f_15 = 1513858/*__LIB_4__::func_492*/;
			break;
		case 53:
			uParam0->f_13 = 1513624/*__LIB_4__::func_296*/;
			break;
		case 54:
			uParam0->f_45 = 1513274/*func_4683*/;
			break;
		case 56:
			uParam0->f_46 = 1513265/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1513194/*__LIB_7__::func_28*/;
			break;
		case 58:
			uParam0->f_13 = 1512960/*__LIB_4__::func_296*/;
			break;
		case 64:
			uParam0->f_47 = 1512760/*__LIB_5__::func_613*/;
			break;
		case 65:
			uParam0->f_21 = 1511862/*__LIB_7__::func_61*/;
			break;
		case 66:
			uParam0->f_21 = 1511148/*__LIB_6__::func_35*/;
			break;
		case 67:
			uParam0->f_21 = 1508886/*__LIB_6__::func_986*/;
			break;
		case 68:
			*uParam0 = 1508253/*__LIB_6__::func_985*/;
			break;
		case 69:
			*uParam0 = 1508244/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1508232/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1508223/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1508211/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1507518/*__LIB_6__::func_984*/;
			break;
		case 84:
			uParam0->f_1 = 1506977/*func_4633*/;
			break;
		case 85:
			uParam0->f_1 = 1502875/*func_4625*/;
			break;
		case 87:
			uParam0->f_1 = 1498888/*__LIB_7__::func_27*/;
			break;
		case 88:
			uParam0->f_1 = 1498374/*__LIB_7__::func_60*/;
			break;
		case 89:
			uParam0->f_54 = 1498203/*__LIB_5__::func_894*/;
			break;
		case 90:
			uParam0->f_1 = 1498031/*__LIB_6__::func_333*/;
			break;
		case 91:
			uParam0->f_1 = 1497865/*__LIB_5__::func_328*/;
			break;
		case 92:
			uParam0->f_1 = 1496413/*func_4600*/;
			break;
		case 94:
			uParam0->f_1 = 1492282/*__LIB_6__::func_34*/;
			break;
		case 95:
			uParam0->f_22 = 1491986/*__LIB_5__::func_605*/;
			break;
		case 96:
			uParam0->f_1 = 1491956/*__LIB_5__::func_326*/;
			break;
		case 97:
			uParam0->f_1 = 1491289/*__LIB_5__::func_992*/;
			break;
		case 98:
			uParam0->f_1 = 1488637/*func_4563*/;
			break;
		case 100:
			uParam0->f_22 = 1480574/*__LIB_7__::func_882*/;
			break;
		case 101:
			uParam0->f_22 = 1478645/*__LIB_7__::func_881*/;
			break;
		case 78:
			uParam0->f_59 = 1478425/*__LIB_7__::func_817*/;
			break;
		case 125:
			uParam0->f_19 = 1478401/*__LIB_4__::func_412*/;
			break;
	}
}

int func_4563(int iParam0, int* iParam1)//Position - 0x16B6FD
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<4> Var4;
	struct<4> Var5;
	struct<3> Var6;
	struct<3> Var7;
	char* sVar8;
	struct<3> Var9;
	struct<3> Var10;
	if ((__LIB_0__::func_177() || __LIB_3__::func_719()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (Global_2824886)
		{
			if (!BitTest(*iParam1, 13))
			{
				if (__LIB_0__::func_893() || __LIB_4__::func_54())
				{
					if (!BitTest(Global_1946250.f_2, 21))
					{
						__LIB_0__::func_627(&(iParam1->f_101), 1, 0);
						STREAMING::SET_FOCUS_POS_AND_VEL(482.435f, 4812.798f, -59.383f, 0f, 0f, 0f);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(482.435f, 4812.798f, -59.383f, 20f, 1);
					}
				}
				__LIB_0__::func_627(&(iParam1->f_101), 1, 0);
				MISC::SET_BIT(iParam1, 13);
			}
		}
		if (((Global_2824886 && __LIB_0__::func_937(&(iParam1->f_101), 1000, 1)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
		{
			if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 0))
			{
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 0);
			}
		}
		else
		{
			return 0;
		}
		if (!BitTest(Global_1946250.f_2, 21))
		{
			bVar3 = false;
		}
		else
		{
			bVar3 = true;
			if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 1))
			{
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if ((__LIB_1__::func_693(bVar2, 1, 1) && !__LIB_4__::func_972(bVar2)) && !Global_2824892)
			{
				if (!BitTest(Global_2689235[bVar2 /*453*/].f_318.f_3, bVar3) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::GET_PLAYER_PED(bVar2)))
				{
					return 0;
				}
			}
			iVar0++;
		}
		if (!BitTest(*iParam1, 12))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
			{
				ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(482.435f, 4812.798f, -59.383f, 0.5f, __LIB_4__::func_417(0), false);
				Var4 = { __LIB_4__::func_426() };
				__LIB_5__::func_893(&(iParam1->f_176[0]), Var4, Var4.f_3, 1, 1);
			}
			Global_2824887 = -1;
			if (Global_1853191 != __LIB_0__::getMinusOneOrNull())
			{
				if (__LIB_0__::func_121(PLAYER::GET_PLAYER_PED(Global_1853191)))
				{
					if (iVar1 < 4)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
						{
							func_2813(&(iParam1->f_140[0]), Global_1853191, 1, 0);
							if (Global_1853191 == PLAYER::PLAYER_ID())
							{
								Global_2824887 = iVar1;
							}
							iVar1++;
						}
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (Global_1853191 != bVar2)
				{
					if (__LIB_1__::func_693(bVar2, 0, 1) && !__LIB_4__::func_972(bVar2))
					{
						if (iVar1 < 4)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar1]))
							{
								func_2813(&(iParam1->f_140[iVar1]), bVar2, 1, 0);
								if (__LIB_0__::func_121(iParam1->f_140[iVar1]))
								{
									PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[iVar1]);
								}
								if (bVar2 == PLAYER::PLAYER_ID())
								{
									Global_2824887 = iVar1;
								}
								iVar1++;
							}
						}
					}
				}
				iVar0++;
			}
			__LIB_4__::func_442();
			MISC::SET_BIT(iParam1, 12);
			return 0;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar0]) && __LIB_0__::func_121(iParam1->f_140[iVar0]))
				{
					if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar0]))
					{
						return 0;
					}
				}
				iVar0++;
			}
		}
		if (__LIB_1__::func_614() || BitTest(Global_1574942, 4))
		{
			if (__LIB_0__::func_893() || __LIB_4__::func_54())
			{
			}
			else
			{
				__LIB_7__::func_872(0, 1, 0, 1, 0, 1, 0, 1, 1, 0);
				return 0;
			}
		}
		Var5 = { __LIB_6__::func_424(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[1]))
		{
			__LIB_5__::func_892(&(iParam1->f_176[1]), Var5, Var5.f_3);
		}
		Var5 = { __LIB_6__::func_424(iParam0, 3) };
		if (BitTest(Global_1946250.f_2, 21))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var5 + Vector(-2f, 0f, 0f), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam1->f_176[0], Var5.f_3, 2, true);
		}
		Var5 = { __LIB_6__::func_424(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
		{
			__LIB_5__::func_991(&(iParam1->f_176[3]), Var5, Var5.f_3);
		}
		iParam1->f_11 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), false);
		if (BitTest(Global_1946250.f_2, 21))
		{
		}
	}
	else
	{
		if (!BitTest(*iParam1, 12))
		{
			func_2813(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
			MISC::SET_BIT(iParam1, 12);
			return 0;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]) && __LIB_0__::func_121(iParam1->f_140[0]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[0]))
			{
				return 0;
			}
		}
		iParam1->f_176[1] = 0;
		if (__LIB_0__::func_121(iParam1->f_140[0]))
		{
			Var6 = { ENTITY::GET_ENTITY_COORDS(iParam1->f_140[0], false) };
			Var6.f_2 = (Var6.f_2 - 20f);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_140[0], Var6, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_140[0], true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
		{
			Var7 = { __LIB_4__::func_426() };
			__LIB_5__::func_893(&(iParam1->f_176[0]), Var7, Var7.f_3, 1, 0);
			Var7.f_2 = (Var7.f_2 - 10f);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var7, false, false, true);
			ENTITY::SET_ENTITY_COLLISION(iParam1->f_176[0], true, false);
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[0], true, false);
		}
		sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
		Var9 = { 481.253f, 4813.742f, -59.148f };
		Var10 = { 0f, 0f, -10f };
		if (__LIB_1__::func_394())
		{
			sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
		}
		__LIB_3__::func_900(&(Global_1946250.f_4073), 6500, "Base exit", Var9, Var10, sVar8, "control_operation_cam", 0, 0, 0, 0, 2);
		__LIB_4__::func_428(&(iParam1->f_176[1]), 1);
		MISC::SET_BIT(&(Global_1946250.f_5), 27);
	}
	__LIB_5__::func_514(iParam1, 0);
	__LIB_0__::func_627(&(iParam1->f_101), 1, 0);
	return 1;
}

int func_4600(int iParam0, int* iParam1)//Position - 0x16D55D
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
	{
		Var0 = { __LIB_4__::func_427() };
		__LIB_5__::func_893(&(iParam1->f_176[0]), Var0, Var0.f_3, 1, 0);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("avenger"))
			{
				__LIB_36__::func_249(&iVar1, &(iParam1->f_109), 48, 10f, 20f, 15f);
			}
			else
			{
				func_1831(&iVar1, &(iParam1->f_109), 40);
			}
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else if (func_4602(&iVar1, &(iParam1->f_109), &(iParam1->f_109.f_1), &(Global_1946250.f_4508), 1))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1->f_109, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar3 = 0;
		iVar2 = 0;
		while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar4 = iVar2;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
			{
				bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
				if (iVar2 < 30)
				{
					if ((__LIB_1__::func_693(bVar5, 1, 1) && __LIB_2__::func_717(bVar5) == iParam0) && __LIB_3__::func_171(bVar5))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar3]))
						{
							func_2813(&(iParam1->f_140[iVar3]), bVar5, 1, 0);
							if (__LIB_0__::func_121(iParam1->f_140[iVar3]))
							{
								PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[iVar3]);
								if (ENTITY::GET_ENTITY_MODEL(iParam1->f_140[iVar3]) == joaat("MP_M_Freemode_01"))
								{
									MISC::SET_BIT(&(iParam1->f_188), 27);
								}
								else
								{
									MISC::SET_BIT(&(iParam1->f_188), 28);
								}
								if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[iVar3]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar3]))
								{
									return 0;
								}
								else
								{
									PED::FINALIZE_HEAD_BLEND(iParam1->f_140[iVar3]);
								}
							}
							iVar3++;
						}
						else if (__LIB_0__::func_121(iParam1->f_140[iVar3]))
						{
							if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[iVar3]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar3]))
							{
								return 0;
							}
							else
							{
								PED::FINALIZE_HEAD_BLEND(iParam1->f_140[iVar3]);
							}
							iVar3++;
						}
					}
				}
			}
			iVar2++;
		}
	}
	__LIB_5__::func_514(iParam1, 0);
	iParam1->f_183[0] = 0.4f;
	__LIB_5__::func_602(&(iParam1->f_176[0]), iParam1->f_183[0], 0);
	__LIB_6__::func_425(iParam0, &(Global_1946250.f_4073));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_417(0));
	return 1;
}

int func_4602(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x16D86F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	iVar0 = -1;
	while (iVar0 <= 8)
	{
		iVar1 = iVar0 + 1;
		iVar2 = iVar0;
		if ((*uParam3)[iVar1] != __LIB_0__::getMinusOneOrNull() && __LIB_1__::func_693((*uParam3)[iVar1], 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED((*uParam3)[iVar1]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]))
				{
					func_1826(uParam2[iVar1], iVar3, 1, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]) && __LIB_0__::func_121((*uParam2)[iVar1]))
				{
					if (!PED::HAS_PED_HEAD_BLEND_FINISHED((*uParam2)[iVar1]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED((*uParam2)[iVar1]))
					{
						if (bParam4)
						{
							return 0;
						}
					}
					else
					{
						PED::FINALIZE_HEAD_BLEND((*uParam2)[iVar1]);
					}
					iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iVar2, false);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						if (__LIB_0__::func_121(*uParam1))
						{
							PED::SET_PED_INTO_VEHICLE((*uParam2)[iVar1], *uParam1, iVar2);
						}
					}
					if (iVar0 == 7 && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("insurgent3"))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(*uParam1, 5, 5, 1f);
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_4625(int iParam0, int* iParam1)//Position - 0x16EE9B
{
	int iVar0;
	struct<4> Var1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			func_1831(&iVar0, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			if (__LIB_4__::func_453(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				MISC::SET_BIT(&(iParam1->f_188), 9);
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("avenger"))
				{
					if (VEHICLE::GET_LANDING_GEAR_STATE(iVar0) == 4 || VEHICLE::GET_LANDING_GEAR_STATE(iVar0) == 1)
					{
						MISC::SET_BIT(&(iParam1->f_188), 14);
					}
					MISC::SET_BIT(&(iParam1->f_188), 13);
				}
			}
			return 0;
		}
		else if (func_1825(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1->f_109, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
			__LIB_4__::func_465(iVar0);
		}
		else
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_2813(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
		if (__LIB_0__::func_121(iParam1->f_140[0]))
		{
			if (PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[0]) || PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[0]))
			{
				PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[0]);
				PED::FINALIZE_HEAD_BLEND(iParam1->f_140[0]);
			}
			else
			{
				return 0;
			}
		}
	}
	Var1 = { __LIB_6__::func_424(iParam0, 0) };
	__LIB_5__::func_892(&(iParam1->f_176[1]), Var1, Var1.f_3);
	Var1 = { 0f, 0f, 0f };
	Var1.f_3 = { 0f, 0f, 0f };
	Var1 = { __LIB_6__::func_424(iParam0, 3) };
	__LIB_5__::func_893(&(iParam1->f_176[0]), Var1, Var1.f_3, 1, 1);
	if (BitTest(iParam1->f_188, 1) && __LIB_5__::func_609(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		Var1 = { __LIB_6__::func_424(iParam0, 19) };
		Var1.f_2 = (Var1.f_2 - 1f);
		__LIB_5__::func_893(&(iParam1->f_176[4]), Var1, Var1.f_3, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[4], false, false);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iParam1->f_176[4]);
	}
	Var1 = { __LIB_6__::func_424(iParam0, 0) };
	__LIB_5__::func_991(&(iParam1->f_176[3]), Var1, Var1.f_3);
	__LIB_6__::func_805(iParam0, &(iParam1->f_176[0]), 0f, 1, 1f);
	__LIB_6__::func_426(iParam0, &(Global_1946250.f_3638), 0, -1);
	__LIB_5__::func_514(iParam1, 0);
	return 1;
}

int func_4633(int iParam0, var uParam1)//Position - 0x16FEA1
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	char* sVar3;
	bVar0 = true;
	if (!BitTest(uParam1->f_188, 17))
	{
		__LIB_5__::func_604(iParam0);
		MISC::SET_BIT(&(uParam1->f_188), 17);
	}
	STREAMING::REQUEST_MODEL(__LIB_4__::func_459(iParam0));
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_459(iParam0)))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_4__::func_441());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_441()))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_4__::func_440());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_440()))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_ANIM_DICT("anim@amb@facility@hanger_doors");
	if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@facility@hanger_doors"))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(joaat("xm_prop_out_hanger_lift"));
	if (!STREAMING::HAS_MODEL_LOADED(joaat("xm_prop_out_hanger_lift")))
	{
		bVar0 = false;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_CHRISTMAS2017/XM_FACILITY_ENTRY_EXIT", false, -1))
	{
		MISC::CLEAR_BIT(&(uParam1->f_188), 22);
		bVar0 = false;
	}
	else
	{
		MISC::SET_BIT(&(uParam1->f_188), 22);
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_0__::func_121(iVar1) && ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("avenger"))
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true) };
				Var2.f_2 = (Var2.f_2 - 10f);
				__LIB_0__::func_799(__LIB_4__::func_445());
				if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_445()))
				{
					bVar0 = false;
				}
				else if (!__LIB_36__::func_249(&iVar1, &(uParam1->f_122), 16, Var2))
				{
					bVar0 = false;
				}
				else
				{
					func_1831(&iVar1, &(uParam1->f_122), 24);
					__LIB_4__::func_456(uParam1->f_122, 0);
					if (__LIB_0__::func_121(uParam1->f_122))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_122, true);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam1->f_122, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
					}
					__LIB_4__::func_466(uParam1->f_122, 1);
				}
			}
		}
		else
		{
			sVar3 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
			if (__LIB_1__::func_394())
			{
				sVar3 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
			}
			STREAMING::REQUEST_ANIM_DICT(sVar3);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar3))
			{
				bVar0 = false;
			}
		}
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_4683(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x17173A
{
	struct<3> Var0;
	int iVar1;
	if (__LIB_5__::func_423(iParam0))
	{
		if (*uParam3 != 1 && *uParam3 != 2)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			HUD::SET_BLIP_SCALE(*uParam1, 1.1f);
			HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 7000);
			*uParam3 = 1;
			return;
		}
		else if (*uParam3 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::SET_BLIP_ROUTE(*uParam1, false);
				*uParam3 = 2;
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			*uParam3 = 1;
		}
	}
	else if (*uParam3 == 1)
	{
		HUD::SET_BLIP_ROUTE(*uParam1, false);
		HUD::SET_BLIP_SCALE(*uParam1, 1f);
		HUD::SET_BLIP_PRIORITY(*uParam1, 5);
		*uParam3 = 0;
	}
	if (__LIB_0__::func_172(iParam0) == 9)
	{
		if (__LIB_0__::func_109(iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!HUD::DOES_BLIP_EXIST(*iParam2))
				{
					Var0 = { __LIB_4__::func_296(iParam0) };
					iVar1 = __LIB_4__::func_74(iParam0);
					*iParam2 = __LIB_0__::func_488(Var0, 0);
					HUD::SET_BLIP_SPRITE(*iParam2, iVar1);
					HUD::SET_BLIP_SCALE(*iParam2, 1f);
					HUD::SET_BLIP_PRIORITY(*iParam2, 5);
					func_3378(iParam2, 166);
					HUD::SET_BLIP_AS_SHORT_RANGE(*iParam2, false);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam2, "BASE_HEIST_BLIP" /* GXT: The Doomsday Heist */);
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(*iParam2, true);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(*iParam2))
			{
				HUD::REMOVE_BLIP(iParam2);
			}
		}
	}
}

void func_4708(int iParam0, int iParam1)//Position - 0x17E2E8
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_5__::func_616(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar1 = __LIB_3__::func_680();
		}
		Var4 = { __LIB_4__::func_296(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_4__::func_972(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_5__::func_895(bVar7)) && !func_2018(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if ((((((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_4__::func_972(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_5__::func_895(bVar7)) && !func_2018(bVar7))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_3__::func_779())
					{
						__LIB_7__::func_62(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_62(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4709(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4709(iParam0);
					}
					Jump @653; //curOff = 634
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4709(int iParam0)//Position - 0x17E578
{
	__LIB_7__::func_62(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4760(var uParam0, int iParam1)//Position - 0x180AB5
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1603049/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1602993/*__LIB_4__::func_571*/;
			break;
		case 2:
			uParam0->f_31 = 1602724/*__LIB_5__::func_341*/;
			break;
		case 3:
			uParam0->f_34 = 1602665/*__LIB_4__::func_570*/;
			break;
		case 4:
			uParam0->f_12 = 1602634/*__LIB_4__::func_569*/;
			break;
		case 37:
			uParam0->f_18 = 1602516/*__LIB_4__::func_568*/;
			break;
		case 38:
			uParam0->f_9 = 1602432/*__LIB_5__::func_898*/;
			break;
		case 6:
			uParam0->f_32 = 1602368/*__LIB_4__::func_567*/;
			break;
		case 111:
			uParam0->f_35 = 1602345/*__LIB_5__::func_340*/;
			break;
		case 11:
			uParam0->f_11 = 1602336/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1601883/*__LIB_9__::func_474*/;
			break;
		case 14:
			uParam0->f_11 = 1601874/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1601866/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1601842/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1601833/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1597353/*__LIB_9__::func_759*/;
			break;
		case 75:
			uParam0->f_4 = 1597344/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1597160/*__LIB_5__::func_805*/;
			break;
		case 108:
			uParam0->f_55 = 1594126/*__LIB_36__::func_73*/;
			break;
		case 17:
			uParam0->f_17 = 1593618/*__LIB_8__::func_938*/;
			break;
		case 19:
			uParam0->f_17 = 1593592/*__LIB_5__::func_997*/;
			break;
		case 20:
			uParam0->f_3 = 1593514/*__LIB_5__::func_628*/;
			break;
		case 21:
			uParam0->f_3 = 1593451/*__LIB_5__::func_336*/;
			break;
		case 74:
			uParam0->f_53 = 1593236/*__LIB_6__::func_909*/;
			break;
		case 22:
			uParam0->f_24 = 1593113/*__LIB_5__::func_627*/;
			break;
		case 25:
			uParam0->f_23 = 1592166/*func_4857*/;
			break;
		case 30:
			uParam0->f_8 = 1591602/*__LIB_5__::func_626*/;
			break;
		case 31:
			uParam0->f_39 = 1591424/*__LIB_5__::func_625*/;
			break;
		case 33:
			uParam0->f_40 = 1590312/*__LIB_8__::func_973*/;
			break;
		case 34:
			uParam0->f_41 = 1589618/*__LIB_5__::func_624*/;
			break;
		case 36:
			uParam0->f_58 = 1589565/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1588986/*__LIB_6__::func_908*/;
			break;
		case 45:
			uParam0->f_14 = 1588977/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1588968/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1588791/*__LIB_8__::func_972*/;
			break;
		case 77:
			uParam0->f_13 = 1588780/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1588282/*__LIB_7__::func_821*/;
			break;
		case 49:
			uParam0->f_8 = 1588241/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1588232/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1588223/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1588212/*__LIB_4__::func_549*/;
			break;
		case 53:
			uParam0->f_13 = 1588201/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1588193/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1588184/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1588175/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1587946/*__LIB_8__::func_859*/;
			break;
		case 64:
			uParam0->f_47 = 1582019/*__LIB_36__::func_72*/;
			break;
		case 65:
			uParam0->f_21 = 1580405/*__LIB_31__::func_329*/;
			break;
		case 66:
			uParam0->f_21 = 1580094/*__LIB_11__::func_751*/;
			break;
		case 67:
			uParam0->f_21 = 1579369/*__LIB_11__::func_993*/;
			break;
		case 68:
			*uParam0 = 1578824/*__LIB_6__::func_987*/;
			break;
		case 69:
			*uParam0 = 1578815/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1578803/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1578794/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1578782/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1577066/*__LIB_7__::func_30*/;
			break;
		case 78:
			uParam0->f_59 = 1576616/*__LIB_8__::func_987*/;
			break;
		case 125:
			uParam0->f_19 = 1576600/*__LIB_4__::func_516*/;
			break;
	}
}

void func_4857(int iParam0, int iParam1)//Position - 0x184B66
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_5__::func_628(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_2018(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_2018(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						__LIB_8__::func_973(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_557(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_8__::func_973(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_860(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4858(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_860(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4858(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4858(int iParam0)//Position - 0x184DF9
{
	__LIB_8__::func_973(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4923(var uParam0, int iParam1)//Position - 0x1875F2
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1655558/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1655478/*__LIB_4__::func_631*/;
			break;
		case 2:
			uParam0->f_31 = 1654979/*__LIB_5__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1654929/*__LIB_4__::func_630*/;
			break;
		case 4:
			uParam0->f_12 = 1654842/*__LIB_4__::func_629*/;
			break;
		case 5:
			uParam0->f_11 = 1654832/*__LIB_4__::func_628*/;
			break;
		case 37:
			uParam0->f_18 = 1654713/*__LIB_4__::func_627*/;
			break;
		case 38:
			uParam0->f_9 = 1654591/*__LIB_5__::func_905*/;
			break;
		case 6:
			uParam0->f_32 = 1654503/*__LIB_4__::func_626*/;
			break;
		case 111:
			uParam0->f_35 = 1654489/*__LIB_5__::func_904*/;
			break;
		case 11:
			uParam0->f_11 = 1654480/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1654101/*__LIB_5__::func_645*/;
			break;
		case 14:
			uParam0->f_11 = 1654092/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1654084/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1654060/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1653928/*__LIB_32__::func_647*/;
			break;
		case 15:
			uParam0->f_2 = 1653646/*__LIB_42__::func_93*/;
			break;
		case 75:
			uParam0->f_4 = 1653632/*__LIB_4__::func_624*/;
			break;
		case 16:
			uParam0->f_5 = 1653114/*__LIB_8__::func_224*/;
			break;
		case 108:
			uParam0->f_55 = 1649490/*__LIB_43__::func_429*/;
			break;
		case 17:
			uParam0->f_17 = 1648952/*__LIB_8__::func_939*/;
			break;
		case 19:
			uParam0->f_17 = 1648926/*__LIB_6__::func_3*/;
			break;
		case 20:
			uParam0->f_3 = 1648842/*__LIB_5__::func_643*/;
			break;
		case 21:
			uParam0->f_3 = 1648778/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1648598/*__LIB_6__::func_910*/;
			break;
		case 22:
			uParam0->f_24 = 1648451/*__LIB_5__::func_642*/;
			break;
		case 25:
			uParam0->f_23 = 1647827/*func_5047*/;
			break;
		case 30:
			uParam0->f_8 = 1647312/*__LIB_6__::func_685*/;
			break;
		case 31:
			uParam0->f_39 = 1647027/*__LIB_5__::func_756*/;
			break;
		case 33:
			uParam0->f_40 = 1646356/*__LIB_7__::func_65*/;
			break;
		case 34:
			uParam0->f_41 = 1645092/*__LIB_4__::func_620*/;
			break;
		case 36:
			uParam0->f_58 = 1645047/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1618997/*__LIB_5__::func_755*/;
			break;
		case 45:
			uParam0->f_14 = 1618988/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1618979/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1618971/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1618948/*__LIB_4__::func_616*/;
			break;
		case 47:
			uParam0->f_43 = 1618844/*__LIB_4__::func_615*/;
			break;
		case 49:
			uParam0->f_8 = 1618803/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1618589/*__LIB_5__::func_754*/;
			break;
		case 51:
			*uParam0 = 1618520/*__LIB_7__::func_759*/;
			break;
		case 52:
			uParam0->f_15 = 1618509/*__LIB_4__::func_613*/;
			break;
		case 53:
			uParam0->f_13 = 1618371/*__LIB_4__::func_302*/;
			break;
		case 54:
			uParam0->f_45 = 1618183/*__LIB_5__::func_347*/;
			break;
		case 56:
			uParam0->f_46 = 1618174/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1617997/*__LIB_6__::func_2*/;
			break;
		case 58:
			uParam0->f_13 = 1617859/*__LIB_4__::func_302*/;
			break;
		case 64:
			uParam0->f_47 = 1617851/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1617015/*__LIB_7__::func_64*/;
			break;
		case 66:
			uParam0->f_21 = 1616908/*__LIB_4__::func_611*/;
			break;
		case 67:
			uParam0->f_21 = 1616844/*__LIB_4__::func_610*/;
			break;
		case 68:
			*uParam0 = 1616356/*__LIB_5__::func_346*/;
			break;
		case 69:
			*uParam0 = 1616347/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1616335/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1616326/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1616314/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1615611/*__LIB_6__::func_1*/;
			break;
		case 84:
			uParam0->f_1 = 1615511/*__LIB_5__::func_902*/;
			break;
		case 85:
			uParam0->f_1 = 1613527/*func_4996*/;
			break;
		case 87:
			uParam0->f_1 = 1611104/*__LIB_6__::func_428*/;
			break;
		case 88:
			uParam0->f_1 = 1611095/*__LIB_0__::func_109*/;
			break;
		case 96:
			uParam0->f_1 = 1611032/*__LIB_4__::func_600*/;
			break;
		case 97:
			uParam0->f_1 = 1610711/*__LIB_6__::func_0*/;
			break;
		case 98:
			uParam0->f_1 = 1606704/*func_4945*/;
			break;
		case 100:
			uParam0->f_22 = 1604426/*__LIB_6__::func_441*/;
			break;
		case 78:
			uParam0->f_59 = 1604222/*__LIB_5__::func_998*/;
			break;
		case 125:
			uParam0->f_19 = 1604206/*__LIB_4__::func_516*/;
			break;
	}
}

int func_4945(int iParam0, int* iParam1)//Position - 0x188430
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	__LIB_6__::func_427(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		func_1831(&iVar0, &(iParam1->f_109), 12);
		__LIB_5__::func_638(iParam0, &(iParam1->f_109));
	}
	__LIB_7__::func_63(iParam0, Global_1853189, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
	{
		OBJECT::DELETE_OBJECT(&(iParam1->f_176[3]));
	}
	Var1 = { __LIB_5__::func_343(iParam0) };
	STREAMING::SET_FOCUS_POS_AND_VEL(Var1, 0f, 0f, 0f);
	fVar2 = 2f;
	__LIB_5__::func_899(iParam0, &(iParam1->f_176[1]), &(iParam1->f_176[2]), &fVar2);
	__LIB_5__::func_514(iParam1, 0);
	iParam1->f_188 = 0;
	return 1;
}

int func_4996(int iParam0, int* iParam1)//Position - 0x189ED7
{
	int iVar0;
	bool bVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			func_1831(&iVar0, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			return 0;
		}
		else
		{
			func_1825(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 0, 0, 0, 0, 1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_2813(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
	}
	bVar1 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
	{
		bVar1 = __LIB_4__::func_607(iParam0, &(iParam1->f_109));
	}
	__LIB_6__::func_429(iParam0, &(Global_1946250.f_3638), 0, bVar1);
	__LIB_7__::func_63(iParam0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	__LIB_5__::func_514(iParam1, 0);
	return 1;
}

void func_5047(int iParam0, int iParam1)//Position - 0x1924D3
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_5__::func_643(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar1 = __LIB_3__::func_680();
		}
		Var4 = { __LIB_4__::func_302(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_2018(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if (((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_2018(bVar7))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_3__::func_779())
					{
						__LIB_7__::func_65(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_65(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_5048(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_5048(iParam0);
					}
					Jump @575; //curOff = 556
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_5048(int iParam0)//Position - 0x192715
{
	__LIB_7__::func_65(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_5091(var uParam0, int iParam1)//Position - 0x19430F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1664181/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1664125/*__LIB_4__::func_641*/;
			break;
		case 2:
			uParam0->f_31 = 1663906/*__LIB_6__::func_912*/;
			break;
		case 3:
			uParam0->f_34 = 1663855/*__LIB_4__::func_640*/;
			break;
		case 4:
			uParam0->f_12 = 1663821/*__LIB_4__::func_639*/;
			break;
		case 6:
			uParam0->f_32 = 1663757/*__LIB_4__::func_638*/;
			break;
		case 111:
			uParam0->f_35 = 1663748/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 79:
			*uParam0 = 1663724/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1663715/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1663623/*__LIB_8__::func_274*/;
			break;
		case 14:
			uParam0->f_11 = 1663614/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1663606/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1663354/*__LIB_8__::func_196*/;
			break;
		case 13:
			uParam0->f_2 = 1663345/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1663336/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1663327/*__LIB_0__::func_109*/;
			break;
		case 108:
			uParam0->f_55 = 1663318/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1663273/*__LIB_5__::func_351*/;
			break;
		case 19:
			uParam0->f_17 = 1663262/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1663215/*__LIB_8__::func_863*/;
			break;
		case 21:
			uParam0->f_3 = 1663163/*__LIB_5__::func_350*/;
			break;
		case 74:
			uParam0->f_53 = 1663107/*__LIB_6__::func_911*/;
			break;
		case 22:
			uParam0->f_24 = 1663022/*__LIB_4__::func_637*/;
			break;
		case 25:
			uParam0->f_23 = 1662055/*func_5126*/;
			break;
		case 30:
			uParam0->f_8 = 1661845/*__LIB_5__::func_647*/;
			break;
		case 31:
			uParam0->f_39 = 1661814/*__LIB_4__::func_635*/;
			break;
		case 33:
			uParam0->f_40 = 1661624/*__LIB_9__::func_285*/;
			break;
		case 34:
			uParam0->f_41 = 1658419/*__LIB_5__::func_646*/;
			break;
		case 36:
			uParam0->f_58 = 1658366/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1657175/*__LIB_5__::func_906*/;
			break;
		case 45:
			uParam0->f_14 = 1657166/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1657157/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1657149/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1657138/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1657035/*__LIB_4__::func_632*/;
			break;
		case 49:
			uParam0->f_8 = 1657010/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1656972/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1656963/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1656952/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1656871/*__LIB_8__::func_193*/;
			break;
		case 54:
			uParam0->f_45 = 1656863/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1656854/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1656844/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1656637/*__LIB_8__::func_192*/;
			break;
		case 64:
			uParam0->f_47 = 1656629/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1656621/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1656613/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1656605/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1656596/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1656587/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1656575/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1656566/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1656554/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1656545/*__LIB_0__::func_114*/;
			break;
		case 73:
			uParam0->f_51 = 1656536/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1656528/*__LIB_0__::func_467*/;
			break;
	}
}

void func_5126(int iParam0, int iParam1)//Position - 0x195C67
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_8__::func_863(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		__LIB_8__::func_195(iParam0, &Var6);
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_3__::func_779())
					{
						__LIB_9__::func_285(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_636(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_9__::func_285(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_194(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_7__::func_758(), true), ENTITY::GET_ENTITY_HEADING(__LIB_7__::func_758()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_5127(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_194(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_7__::func_758(), true), ENTITY::GET_ENTITY_HEADING(__LIB_7__::func_758()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_5127(iParam0);
					}
					Jump @634; //curOff = 615
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_5127(int iParam0)//Position - 0x195EE4
{
	__LIB_9__::func_285(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_5154(var uParam0, int iParam1)//Position - 0x1964BE
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1741832/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1741776/*__LIB_4__::func_687*/;
			break;
		case 2:
			uParam0->f_31 = 1740231/*__LIB_8__::func_869*/;
			break;
		case 3:
			uParam0->f_34 = 1740182/*__LIB_4__::func_686*/;
			break;
		case 4:
			uParam0->f_12 = 1740148/*__LIB_4__::func_685*/;
			break;
		case 6:
			uParam0->f_32 = 1740084/*__LIB_4__::func_684*/;
			break;
		case 111:
			uParam0->f_35 = 1740061/*__LIB_5__::func_360*/;
			break;
		case 79:
			*uParam0 = 1740037/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1739919/*__LIB_4__::func_683*/;
			break;
		case 38:
			uParam0->f_9 = 1739852/*__LIB_5__::func_910*/;
			break;
		case 11:
			uParam0->f_11 = 1739843/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1739498/*__LIB_9__::func_505*/;
			break;
		case 14:
			uParam0->f_11 = 1739489/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1739481/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1734153/*__LIB_42__::func_94*/;
			break;
		case 13:
			uParam0->f_2 = 1734144/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1734135/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1734110/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1727584/*__LIB_43__::func_430*/;
			break;
		case 17:
			uParam0->f_17 = 1727000/*__LIB_9__::func_477*/;
			break;
		case 19:
			uParam0->f_17 = 1726974/*__LIB_6__::func_5*/;
			break;
		case 20:
			uParam0->f_3 = 1726913/*__LIB_9__::func_476*/;
			break;
		case 21:
			uParam0->f_3 = 1726793/*__LIB_6__::func_914*/;
			break;
		case 74:
			uParam0->f_53 = 1726737/*__LIB_6__::func_913*/;
			break;
		case 22:
			uParam0->f_24 = 1726652/*__LIB_4__::func_676*/;
			break;
		case 25:
			uParam0->f_23 = 1725680/*func_5243*/;
			break;
		case 30:
			uParam0->f_8 = 1724940/*__LIB_5__::func_650*/;
			break;
		case 31:
			uParam0->f_39 = 1724670/*__LIB_5__::func_760*/;
			break;
		case 33:
			uParam0->f_40 = 1723759/*__LIB_9__::func_504*/;
			break;
		case 34:
			uParam0->f_41 = 1720415/*__LIB_5__::func_355*/;
			break;
		case 36:
			uParam0->f_58 = 1720362/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1719677/*__LIB_5__::func_909*/;
			break;
		case 45:
			uParam0->f_14 = 1719668/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1719659/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1719216/*__LIB_43__::func_406*/;
			break;
		case 77:
			uParam0->f_13 = 1719205/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1719102/*__LIB_4__::func_672*/;
			break;
		case 49:
			uParam0->f_8 = 1719077/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1719039/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1719015/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1719004/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1718925/*__LIB_8__::func_865*/;
			break;
		case 54:
			uParam0->f_45 = 1718917/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1718908/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1718898/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1718669/*__LIB_8__::func_864*/;
			break;
		case 64:
			uParam0->f_47 = 1672313/*__LIB_43__::func_419*/;
			break;
		case 65:
			uParam0->f_21 = 1671175/*__LIB_31__::func_330*/;
			break;
		case 66:
			uParam0->f_21 = 1670949/*__LIB_7__::func_963*/;
			break;
		case 67:
			uParam0->f_21 = 1670054/*__LIB_11__::func_26*/;
			break;
		case 68:
			*uParam0 = 1669509/*__LIB_6__::func_989*/;
			break;
		case 69:
			*uParam0 = 1669500/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1669488/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1669479/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1669467/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1667408/*__LIB_10__::func_57*/;
			break;
		case 73:
			uParam0->f_51 = 1665654/*__LIB_36__::func_250*/;
			break;
		case 78:
			uParam0->f_59 = 1665185/*__LIB_8__::func_974*/;
			break;
	}
}

void func_5243(int iParam0, int iParam1)//Position - 0x1A54F0
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_9__::func_476(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_2018(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_2018(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_504(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_636(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_9__::func_504(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_866(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_5244(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_866(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_5244(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_5244(int iParam0)//Position - 0x1A5783
{
	__LIB_9__::func_504(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_5309(var uParam0, int iParam1)//Position - 0x1A9411
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1777453/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1777337/*__LIB_4__::func_745*/;
			break;
		case 2:
			uParam0->f_31 = 1776107/*__LIB_7__::func_67*/;
			break;
		case 3:
			uParam0->f_34 = 1776037/*__LIB_4__::func_744*/;
			break;
		case 4:
			uParam0->f_12 = 1775863/*__LIB_4__::func_743*/;
			break;
		case 6:
			uParam0->f_32 = 1775739/*__LIB_4__::func_742*/;
			break;
		case 106:
			uParam0->f_52 = 1775572/*__LIB_15__::func_472*/;
			break;
		case 111:
			uParam0->f_35 = 1775558/*__LIB_5__::func_924*/;
			break;
		case 79:
			*uParam0 = 1775534/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1775416/*__LIB_4__::func_741*/;
			break;
		case 38:
			uParam0->f_9 = 1775216/*__LIB_6__::func_398*/;
			break;
		case 11:
			uParam0->f_11 = 1775207/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1773503/*__LIB_5__::func_663*/;
			break;
		case 14:
			uParam0->f_11 = 1773494/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1773486/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1772980/*__LIB_42__::func_95*/;
			break;
		case 13:
			uParam0->f_2 = 1772941/*__LIB_5__::func_370*/;
			break;
		case 44:
			*uParam0 = 1772932/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1772923/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1772500/*__LIB_35__::func_568*/;
			break;
		case 108:
			uParam0->f_55 = 1770461/*__LIB_9__::func_508*/;
			break;
		case 17:
			uParam0->f_17 = 1768324/*__LIB_36__::func_63*/;
			break;
		case 19:
			uParam0->f_17 = 1768298/*__LIB_6__::func_10*/;
			break;
		case 20:
			uParam0->f_3 = 1768214/*__LIB_5__::func_919*/;
			break;
		case 21:
			uParam0->f_3 = 1768114/*__LIB_6__::func_918*/;
			break;
		case 74:
			uParam0->f_53 = 1767947/*__LIB_5__::func_369*/;
			break;
		case 22:
			uParam0->f_24 = 1767840/*__LIB_5__::func_662*/;
			break;
		case 25:
			uParam0->f_23 = 1767188/*func_5427*/;
			break;
		case 30:
			uParam0->f_8 = 1766688/*__LIB_6__::func_691*/;
			break;
		case 31:
			uParam0->f_39 = 1766395/*__LIB_5__::func_762*/;
			break;
		case 33:
			uParam0->f_40 = 1765473/*__LIB_35__::func_567*/;
			break;
		case 32:
			*uParam0 = 1765369/*__LIB_6__::func_917*/;
			break;
		case 34:
			uParam0->f_41 = 1763224/*__LIB_5__::func_367*/;
			break;
		case 35:
			uParam0->f_42 = 1677723/*__LIB_5__::func_649*/;
			break;
		case 36:
			uParam0->f_58 = 1763164/*__LIB_5__::func_366*/;
			break;
		case 45:
			uParam0->f_14 = 1763155/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1763146/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1762880/*__LIB_5__::func_813*/;
			break;
		case 77:
			uParam0->f_13 = 1762869/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1762729/*__LIB_4__::func_731*/;
			break;
		case 49:
			uParam0->f_8 = 1762688/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1762597/*__LIB_6__::func_9*/;
			break;
		case 51:
			*uParam0 = 1762513/*__LIB_9__::func_435*/;
			break;
		case 52:
			uParam0->f_15 = 1762502/*__LIB_4__::func_730*/;
			break;
		case 53:
			uParam0->f_13 = 1762220/*__LIB_4__::func_729*/;
			break;
		case 54:
			uParam0->f_45 = 1762212/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1762203/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1762142/*__LIB_6__::func_8*/;
			break;
		case 58:
			uParam0->f_13 = 1761860/*__LIB_4__::func_729*/;
			break;
		case 64:
			uParam0->f_47 = 1759980/*__LIB_9__::func_521*/;
			break;
		case 65:
			uParam0->f_21 = 1759937/*__LIB_7__::func_964*/;
			break;
		case 66:
			uParam0->f_21 = 1759234/*__LIB_11__::func_41*/;
			break;
		case 67:
			uParam0->f_21 = 1758150/*__LIB_5__::func_915*/;
			break;
		case 68:
			*uParam0 = 1757559/*__LIB_6__::func_991*/;
			break;
		case 69:
			*uParam0 = 1757550/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1757538/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1757529/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1757517/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1754845/*__LIB_9__::func_520*/;
			break;
		case 84:
			uParam0->f_1 = 1752996/*func_5354*/;
			break;
		case 85:
			uParam0->f_1 = 1750662/*__LIB_6__::func_813*/;
			break;
		case 87:
			uParam0->f_1 = 1746437/*__LIB_7__::func_551*/;
			break;
		case 88:
			uParam0->f_1 = 1746428/*__LIB_0__::func_109*/;
			break;
		case 90:
			uParam0->f_1 = 1746385/*__LIB_5__::func_363*/;
			break;
		case 91:
			uParam0->f_1 = 1746084/*__LIB_5__::func_656*/;
			break;
		case 92:
			uParam0->f_1 = 1745321/*func_5321*/;
			break;
		case 94:
			uParam0->f_1 = 1743821/*__LIB_6__::func_499*/;
			break;
		case 102:
			uParam0->f_1 = 1743253/*__LIB_6__::func_6*/;
			break;
		case 103:
			uParam0->f_22 = 1743245/*__LIB_0__::func_467*/;
			break;
		case 104:
			uParam0->f_1 = 1743170/*__LIB_4__::func_689*/;
			break;
		case 78:
			uParam0->f_59 = 1743096/*__LIB_8__::func_975*/;
			break;
		case 125:
			uParam0->f_19 = 1743072/*__LIB_4__::func_688*/;
			break;
	}
}

int func_5321(var uParam0, var uParam1)//Position - 0x1AA1A9
{
	__LIB_6__::func_27(&(Global_1946250.f_4073), 7500, "TruckTunel1", 919.1599f, -3242.047f, -97.191f, -4.6979f, 0.1417f, -118.0924f, 36.2643f, 920.1234f, -3242.478f, -97.1018f, 7.9062f, 0.1417f, -113.0609f, 36.2643f, 1f, 50, 0, 0, 0, 0);
	__LIB_6__::func_27(&(Global_1946250.f_4073), 6000, "TruckPark", 826.3912f, -3231.1902f, -98.5252f, 1.494f, -0.1848f, -114.9899f, 38.3697f, 826.9343f, -3231.013f, -97.8158f, -0.7301f, -0.1848f, -118.0463f, 38.3697f, 1f, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
	{
		func_1831(&(uParam1->f_248), &(uParam1->f_109), 14);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		uParam1->f_109 = VEHICLE::CREATE_VEHICLE(joaat("phantom3"), 0f, 10f, 0f, 0f, false, false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
	{
		uParam1->f_109.f_12 = VEHICLE::CREATE_VEHICLE(joaat("trailerlarge"), 0f, 10f, 10f, 0f, false, false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
	{
		uParam1->f_109.f_1[0] = PED::CREATE_PED(26, joaat("MP_M_WeapExp_01"), 832.953f, -3243.084f, -98.716f, -18f, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED_XY(uParam1->f_109, 8f);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_109, 942.387f, -3245.778f, -94.91f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, 87.91f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam1->f_109, 5f);
		uParam1->f_140[1] = PED::CREATE_PED(26, joaat("MP_M_WeapExp_01"), 832.953f, -3243.084f, -98.716f, -18f, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		__LIB_4__::func_37(&(uParam1->f_109), 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, true, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(uParam1->f_109, 3);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
		{
			VEHICLE::ATTACH_VEHICLE_TO_TRAILER(uParam1->f_109, uParam1->f_109.f_12, 1f);
			VEHICLE::VEHICLE_SET_OVERRIDE_EXTENABLE_SIDE_RATIO(uParam1->f_109.f_12, 1);
			VEHICLE::VEHICLE_SET_EXTENABLE_SIDE_TARGET_RATIO(uParam1->f_109.f_12, 0f);
			VEHICLE::VEHICLE_SET_OVERRIDE_SIDE_RATIO(uParam1->f_109.f_12, 0f);
		}
	}
	__LIB_4__::func_693(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_109.f_1[0], PLAYER::PLAYER_PED_ID(), false);
	}
	return 1;
}

int func_5354(int iParam0, var uParam1)//Position - 0x1ABFA4
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	__LIB_4__::func_694(uParam1);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_3__::func_616() == 1)
		{
			__LIB_5__::func_457(0);
		}
	}
	switch (__LIB_3__::func_616())
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				func_2813(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				iVar0 = 1;
				__LIB_5__::func_911(iParam0, &(uParam1->f_140[0]));
				ENTITY::SET_ENTITY_VISIBLE(uParam1->f_140[0], false, false);
				ENTITY::SET_ENTITY_COLLISION(uParam1->f_140[0], false, false);
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_248) == joaat("trailersmall2"))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_248))
					{
						iVar1 = ENTITY::GET_ENTITY_ATTACHED_TO(uParam1->f_248);
						if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2))
							{
								func_1831(&iVar2, &(uParam1->f_109), 14);
								func_1825(&(uParam1->f_248), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
							}
						}
						else
						{
							func_1831(&(uParam1->f_248), &(uParam1->f_109), 10);
						}
					}
					else
					{
						func_1831(&(uParam1->f_248), &(uParam1->f_109), 10);
					}
				}
				else
				{
					func_1831(&(uParam1->f_248), &(uParam1->f_109), 14);
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_249))
					{
						if (ENTITY::GET_ENTITY_MODEL(uParam1->f_249) == joaat("trailersmall2"))
						{
							func_1825(&(uParam1->f_249), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, 0f, 50f, 10f, false, false, true);
					__LIB_5__::func_911(iParam0, &(uParam1->f_109));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_109.f_12))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109.f_12, 50f, 50f, 50f, false, false, true);
					}
					__LIB_5__::func_911(iParam0, &(uParam1->f_109.f_12));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					iVar0 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_109, uParam1->f_248, false);
			}
			__LIB_4__::func_693(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
			break;
	}
	if (!__LIB_5__::func_914(iParam0, uParam1))
	{
		return 0;
	}
	if (__LIB_6__::func_769(iParam0, &(uParam1->f_176[0]), &(uParam1->f_176[1]), 1101004800))
	{
		uParam1->f_183[0] = 0f;
		uParam1->f_183[1] = 0f;
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[0], false, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[1], false, false);
		uParam1->f_189[8 /*3*/] = { ENTITY::GET_ENTITY_ROTATION(uParam1->f_176[0], 2) };
	}
	if ((ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[0]) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[1])) && iVar0)
	{
		if (__LIB_3__::func_616() == 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
			{
				func_2813(&(uParam1->f_109.f_1[0]), PLAYER::PLAYER_ID(), 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					PED::SET_PED_INTO_VEHICLE(uParam1->f_109.f_1[0], uParam1->f_109, -1);
				}
			}
		}
		__LIB_4__::func_709(&(uParam1->f_109.f_1), 5f);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			VEHICLE::SET_VEHICLE_STEER_FOR_BUILDINGS(uParam1->f_109, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_140[0], false))
		{
			PED::SET_PED_LOD_MULTIPLIER(uParam1->f_140[0], 5f);
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[0]))
			{
				return 0;
			}
		}
		if (!__LIB_5__::func_658(&(uParam1->f_109)))
		{
			return 0;
		}
		if (!__LIB_4__::func_707(&(uParam1->f_188), 15))
		{
			return 0;
		}
		STREAMING::SET_FOCUS_POS_AND_VEL(uParam1->f_189[6 /*3*/], 0f, 0f, 0f);
		return 1;
	}
	return 0;
}

void func_5427(int iParam0, int iParam1)//Position - 0x1AF714
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_5__::func_919(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_4__::func_303(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_2018(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_2018(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_3__::func_779())
					{
						__LIB_35__::func_567(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_35__::func_567(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_5428(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_5428(iParam0);
					}
					Jump @603; //curOff = 584
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_5428(int iParam0)//Position - 0x1AF972
{
	__LIB_35__::func_567(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_5476(var uParam0, int iParam1)//Position - 0x1B1F36
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1817733/*__LIB_5__::func_926*/;
			break;
		case 1:
			uParam0->f_30 = 1817081/*__LIB_6__::func_11*/;
			break;
		case 2:
			uParam0->f_31 = 1817018/*__LIB_5__::func_669*/;
			break;
		case 3:
			uParam0->f_34 = 1816962/*__LIB_4__::func_758*/;
			break;
		case 4:
			uParam0->f_12 = 1816247/*__LIB_4__::func_757*/;
			break;
		case 6:
			uParam0->f_32 = 1816239/*__LIB_0__::func_467*/;
			break;
		case 111:
			uParam0->f_35 = 1816230/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 79:
			*uParam0 = 1816206/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1816197/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1814369/*__LIB_5__::func_668*/;
			break;
		case 14:
			uParam0->f_11 = 1814360/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1814352/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1814343/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 1814334/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 1814325/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1814316/*__LIB_0__::func_114*/;
			break;
		case 108:
			uParam0->f_55 = 1814307/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1814281/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1814270/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1814261/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1814252/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1814243/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1814235/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1814227/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1813097/*__LIB_5__::func_667*/;
			break;
		case 31:
			uParam0->f_39 = 1813086/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1813058/*__LIB_4__::func_755*/;
			break;
		case 34:
			uParam0->f_41 = 1813049/*__LIB_0__::func_114*/;
			break;
		case 36:
			uParam0->f_58 = 1813004/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1779325/*__LIB_5__::func_666*/;
			break;
		case 45:
			uParam0->f_14 = 1779316/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1779307/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1779299/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1779288/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1779280/*__LIB_0__::func_467*/;
			break;
		case 49:
			uParam0->f_8 = 1779271/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1778972/*__LIB_7__::func_34*/;
			break;
		case 51:
			*uParam0 = 1778943/*__LIB_4__::func_751*/;
			break;
		case 52:
			uParam0->f_15 = 1778912/*__LIB_4__::func_750*/;
			break;
		case 53:
			uParam0->f_13 = 1778878/*__LIB_5__::func_373*/;
			break;
		case 54:
			uParam0->f_45 = 1778834/*__LIB_4__::func_749*/;
			break;
		case 56:
			uParam0->f_46 = 1778805/*__LIB_4__::func_748*/;
			break;
		case 57:
			uParam0->f_11 = 1778796/*__LIB_0__::func_114*/;
			break;
		case 58:
			uParam0->f_13 = 1778739/*__LIB_5__::func_373*/;
			break;
		case 64:
			uParam0->f_47 = 1778731/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1778723/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1778715/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1778707/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1778681/*__LIB_4__::func_746*/;
			break;
		case 69:
			*uParam0 = 1778655/*__LIB_4__::func_746*/;
			break;
		case 70:
			uParam0->f_48 = 1778643/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1778634/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1778622/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1778613/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1778605/*__LIB_0__::func_467*/;
			break;
		case 126:
			*uParam0 = 1778422/*__LIB_7__::func_855*/;
			break;
	}
}

void func_5549(var uParam0, int iParam1)//Position - 0x1BC15E
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1861351/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1861041/*__LIB_4__::func_786*/;
			break;
		case 2:
			uParam0->f_31 = 1856069/*__LIB_5__::func_674*/;
			break;
		case 3:
			uParam0->f_34 = 1856040/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1855845/*__LIB_4__::func_779*/;
			break;
		case 6:
			uParam0->f_32 = 1855495/*__LIB_4__::func_778*/;
			break;
		case 111:
			uParam0->f_35 = 1855353/*__LIB_5__::func_929*/;
			break;
		case 79:
			*uParam0 = 1855329/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1855119/*__LIB_5__::func_673*/;
			break;
		case 38:
			uParam0->f_9 = 1855014/*__LIB_7__::func_823*/;
			break;
		case 11:
			uParam0->f_11 = 1855005/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1854900/*__LIB_5__::func_672*/;
			break;
		case 14:
			uParam0->f_11 = 1854891/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1854883/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1854874/*__LIB_0__::func_114*/;
			break;
		case 44:
			*uParam0 = 1854865/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1854576/*__LIB_42__::func_96*/;
			break;
		case 75:
			uParam0->f_4 = 1854567/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1854483/*__LIB_7__::func_39*/;
			break;
		case 108:
			uParam0->f_55 = 1854474/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1853852/*__LIB_36__::func_54*/;
			break;
		case 19:
			uParam0->f_17 = 1853652/*__LIB_6__::func_12*/;
			break;
		case 20:
			uParam0->f_3 = 1853588/*__LIB_7__::func_768*/;
			break;
		case 21:
			uParam0->f_3 = 1853528/*__LIB_7__::func_37*/;
			break;
		case 74:
			uParam0->f_53 = 1853519/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1853276/*__LIB_4__::func_777*/;
			break;
		case 25:
			uParam0->f_23 = 1852972/*func_5588*/;
			break;
		case 30:
			uParam0->f_8 = 1852834/*__LIB_7__::func_858*/;
			break;
		case 31:
			uParam0->f_39 = 1852394/*__LIB_7__::func_857*/;
			break;
		case 33:
			uParam0->f_40 = 1851729/*__LIB_7__::func_856*/;
			break;
		case 34:
			uParam0->f_41 = 1849149/*__LIB_4__::func_776*/;
			break;
		case 36:
			uParam0->f_58 = 1849104/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1823125/*__LIB_4__::func_775*/;
			break;
		case 45:
			uParam0->f_14 = 1822897/*__LIB_4__::func_774*/;
			break;
		case 46:
			uParam0->f_14 = 1822721/*__LIB_4__::func_773*/;
			break;
		case 110:
			uParam0->f_57 = 1822713/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1822702/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1822460/*__LIB_4__::func_772*/;
			break;
		case 49:
			uParam0->f_8 = 1822428/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1822362/*__LIB_42__::func_121*/;
			break;
		case 51:
			*uParam0 = 1822338/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1822155/*__LIB_4__::func_770*/;
			break;
		case 53:
			uParam0->f_13 = 1821560/*__LIB_5__::func_671*/;
			break;
		case 54:
			uParam0->f_45 = 1821323/*__LIB_4__::func_768*/;
			break;
		case 56:
			uParam0->f_46 = 1821314/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1821249/*__LIB_7__::func_35*/;
			break;
		case 58:
			uParam0->f_13 = 1820827/*__LIB_5__::func_375*/;
			break;
		case 64:
			uParam0->f_47 = 1820819/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1820811/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1820751/*__LIB_4__::func_767*/;
			break;
		case 67:
			uParam0->f_21 = 1820733/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1820724/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1820715/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1820211/*__LIB_4__::func_765*/;
			break;
		case 71:
			uParam0->f_49 = 1820063/*__LIB_4__::func_764*/;
			break;
		case 107:
			uParam0->f_50 = 1820018/*__LIB_4__::func_763*/;
			break;
		case 80:
			uParam0->f_7 = 1820009/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1820001/*__LIB_0__::func_467*/;
			break;
		case 125:
			uParam0->f_19 = 1819985/*__LIB_4__::func_516*/;
			break;
	}
}

void func_5588(int iParam0, int iParam1)//Position - 0x1C462C
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_1__::func_802(PLAYER::PLAYER_ID()) && __LIB_7__::func_768(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_4__::func_769(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_13__::func_61())
		{
			bVar2 = __LIB_3__::func_594(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::getMinusOneOrNull() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_2018(bVar2))
			{
				Var1 = { __LIB_1__::func_694(bVar2) };
				Var1.f_2 = 0f;
				if (SYSTEM::VDIST(Var1, Var0) <= IntToFloat(__LIB_3__::func_679(iParam0)))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 == 0)
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		if (__LIB_3__::func_661(1, iParam1))
		{
			if (iVar3 > 0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
			}
			Global_1946250.f_504 = -1;
			__LIB_5__::func_947(1, iParam0);
			Global_1946250.f_3607 = 0;
			Global_1946250.f_3612 = 1;
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
	}
}

void func_5623(var uParam0, int iParam1)//Position - 0x1C66F0
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1896317/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1896207/*__LIB_4__::func_833*/;
			break;
		case 2:
			uParam0->f_31 = 1893715/*__LIB_5__::func_686*/;
			break;
		case 3:
			uParam0->f_34 = 1893686/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1893526/*__LIB_4__::func_828*/;
			break;
		case 6:
			uParam0->f_32 = 1893408/*__LIB_4__::func_827*/;
			break;
		case 111:
			uParam0->f_35 = 1893191/*__LIB_6__::func_20*/;
			break;
		case 79:
			*uParam0 = 1893167/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1893049/*__LIB_4__::func_826*/;
			break;
		case 38:
			uParam0->f_9 = 1892898/*__LIB_6__::func_404*/;
			break;
		case 11:
			uParam0->f_11 = 1892889/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1891886/*__LIB_5__::func_684*/;
			break;
		case 14:
			uParam0->f_11 = 1891877/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1891869/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1891860/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1891706/*__LIB_42__::func_97*/;
			break;
		case 75:
			uParam0->f_4 = 1891697/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1891609/*__LIB_7__::func_40*/;
			break;
		case 108:
			uParam0->f_55 = 1890819/*__LIB_6__::func_430*/;
			break;
		case 17:
			uParam0->f_17 = 1890189/*__LIB_7__::func_69*/;
			break;
		case 19:
			uParam0->f_17 = 1890163/*__LIB_6__::func_18*/;
			break;
		case 20:
			uParam0->f_3 = 1890124/*__LIB_5__::func_820*/;
			break;
		case 21:
			uParam0->f_3 = 1890064/*__LIB_5__::func_933*/;
			break;
		case 74:
			uParam0->f_53 = 1890055/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1890001/*__LIB_5__::func_682*/;
			break;
		case 25:
			uParam0->f_23 = 1889697/*func_5709*/;
			break;
		case 30:
			uParam0->f_8 = 1889574/*__LIB_7__::func_861*/;
			break;
		case 31:
			uParam0->f_39 = 1889354/*__LIB_5__::func_765*/;
			break;
		case 33:
			uParam0->f_40 = 1889069/*__LIB_5__::func_932*/;
			break;
		case 34:
			uParam0->f_41 = 1888663/*__LIB_4__::func_822*/;
			break;
		case 36:
			uParam0->f_58 = 1888618/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1871085/*__LIB_4__::func_821*/;
			break;
		case 45:
			uParam0->f_14 = 1871076/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1870992/*__LIB_4__::func_820*/;
			break;
		case 110:
			uParam0->f_57 = 1870984/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1870961/*__LIB_4__::func_819*/;
			break;
		case 47:
			uParam0->f_43 = 1870909/*__LIB_4__::func_818*/;
			break;
		case 49:
			uParam0->f_8 = 1870877/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1870699/*__LIB_8__::func_977*/;
			break;
		case 51:
			*uParam0 = 1870602/*__LIB_12__::func_51*/;
			break;
		case 52:
			uParam0->f_15 = 1870591/*__LIB_4__::func_817*/;
			break;
		case 53:
			uParam0->f_13 = 1870276/*__LIB_5__::func_681*/;
			break;
		case 54:
			uParam0->f_45 = 1869412/*__LIB_9__::func_318*/;
			break;
		case 56:
			uParam0->f_46 = 1869403/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1864645/*__LIB_9__::func_325*/;
			break;
		case 58:
			uParam0->f_13 = 1864631/*__LIB_6__::func_14*/;
			break;
		case 64:
			uParam0->f_47 = 1863193/*__LIB_9__::func_777*/;
			break;
		case 65:
			uParam0->f_21 = 1863185/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1863134/*__LIB_4__::func_790*/;
			break;
		case 67:
			uParam0->f_21 = 1863106/*__LIB_4__::func_789*/;
			break;
		case 68:
			*uParam0 = 1863097/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1863088/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1862804/*__LIB_4__::func_788*/;
			break;
		case 71:
			uParam0->f_49 = 1862708/*__LIB_4__::func_787*/;
			break;
		case 107:
			uParam0->f_50 = 1862696/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1862510/*__LIB_5__::func_930*/;
			break;
		case 78:
			uParam0->f_59 = 1862338/*__LIB_6__::func_13*/;
			break;
	}
}

void func_5709(int iParam0, int iParam1)//Position - 0x1CD5A1
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_1__::func_744(PLAYER::PLAYER_ID()) && __LIB_5__::func_820(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_4__::func_816(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_13__::func_61())
		{
			bVar2 = __LIB_3__::func_594(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::getMinusOneOrNull() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_2018(bVar2))
			{
				Var1 = { __LIB_1__::func_694(bVar2) };
				Var1.f_2 = 0f;
				if (SYSTEM::VDIST(Var1, Var0) <= IntToFloat(__LIB_3__::func_679(iParam0)))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 == 0)
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		if (__LIB_3__::func_661(1, iParam1))
		{
			if (iVar3 > 0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
			}
			Global_1946250.f_504 = -1;
			__LIB_5__::func_947(1, iParam0);
			Global_1946250.f_3607 = 0;
			Global_1946250.f_3612 = 1;
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
	}
}

void func_5753(var uParam0, int iParam1)//Position - 0x1CEF86
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1923949/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1923803/*__LIB_5__::func_822*/;
			break;
		case 2:
			uParam0->f_31 = 1918577/*__LIB_6__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1918548/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1918138/*__LIB_5__::func_692*/;
			break;
		case 6:
			uParam0->f_32 = 1917968/*__LIB_5__::func_821*/;
			break;
		case 111:
			uParam0->f_35 = 1917573/*__LIB_5__::func_691*/;
			break;
		case 79:
			*uParam0 = 1917549/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1917540/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1917445/*__LIB_5__::func_690*/;
			break;
		case 14:
			uParam0->f_11 = 1917436/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1917428/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1917419/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1917134/*__LIB_42__::func_98*/;
			break;
		case 75:
			uParam0->f_4 = 1917125/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1917037/*__LIB_7__::func_42*/;
			break;
		case 108:
			uParam0->f_55 = 1917028/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1916769/*__LIB_7__::func_825*/;
			break;
		case 19:
			uParam0->f_17 = 1916743/*__LIB_6__::func_22*/;
			break;
		case 20:
			uParam0->f_3 = 1916734/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1916725/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1916716/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1916708/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1916700/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1916577/*__LIB_7__::func_863*/;
			break;
		case 31:
			uParam0->f_39 = 1916331/*__LIB_7__::func_824*/;
			break;
		case 33:
			uParam0->f_40 = 1916075/*__LIB_15__::func_437*/;
			break;
		case 34:
			uParam0->f_41 = 1914091/*__LIB_5__::func_936*/;
			break;
		case 36:
			uParam0->f_58 = 1914046/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1899597/*__LIB_4__::func_838*/;
			break;
		case 45:
			uParam0->f_14 = 1899588/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1899579/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1899571/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1899560/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1899508/*__LIB_4__::func_837*/;
			break;
		case 49:
			uParam0->f_8 = 1899476/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1899347/*__LIB_7__::func_41*/;
			break;
		case 51:
			*uParam0 = 1899323/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1899312/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1898661/*__LIB_5__::func_689*/;
			break;
		case 54:
			uParam0->f_45 = 1898056/*__LIB_7__::func_862*/;
			break;
		case 56:
			uParam0->f_46 = 1898047/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1897980/*__LIB_6__::func_779*/;
			break;
		case 58:
			uParam0->f_13 = 1897966/*__LIB_6__::func_21*/;
			break;
		case 64:
			uParam0->f_47 = 1897587/*__LIB_5__::func_387*/;
			break;
		case 65:
			uParam0->f_21 = 1897512/*__LIB_5__::func_687*/;
			break;
		case 66:
			uParam0->f_21 = 1897461/*__LIB_4__::func_835*/;
			break;
		case 67:
			uParam0->f_21 = 1897443/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1897434/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1897425/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1897308/*__LIB_4__::func_834*/;
			break;
		case 71:
			uParam0->f_49 = 1897299/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1897287/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1897278/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1897270/*__LIB_0__::func_467*/;
			break;
	}
}

void func_5824(var uParam0, int iParam1)//Position - 0x1D5B76
{
	switch (iParam1)
	{
		case 96:
			uParam0->f_1 = 1924416/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1924407/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 1924398/*__LIB_0__::func_109*/;
			break;
		case 99:
			uParam0->f_1 = 1924238/*__LIB_5__::func_390*/;
			break;
		case 100:
			uParam0->f_22 = 1924230/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 1924075/*__LIB_8__::func_991*/;
			break;
	}
}

void func_5832(var uParam0, int iParam1)//Position - 0x1D5D49
{
	switch (iParam1)
	{
		case 90:
			uParam0->f_1 = 1924633/*__LIB_0__::func_114*/;
			break;
		case 91:
			uParam0->f_1 = 1924624/*__LIB_0__::func_109*/;
			break;
		case 92:
			uParam0->f_1 = 1924615/*__LIB_0__::func_109*/;
			break;
		case 93:
			uParam0->f_1 = 1924238/*__LIB_5__::func_390*/;
			break;
		case 94:
			uParam0->f_1 = 1924606/*__LIB_0__::func_109*/;
			break;
		case 95:
			uParam0->f_22 = 1924542/*__LIB_8__::func_991*/;
			break;
	}
}

void func_5838(var uParam0, int iParam1)//Position - 0x1D5E22
{
	switch (iParam1)
	{
		case 84:
			uParam0->f_1 = 1924860/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1924851/*__LIB_0__::func_109*/;
			break;
		case 86:
			uParam0->f_1 = 1924238/*__LIB_5__::func_390*/;
			break;
		case 87:
			uParam0->f_1 = 1924842/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1924742/*__LIB_8__::func_992*/;
			break;
	}
}

void func_5883(var uParam0, bool bParam1)//Position - 0x1D748D
{
	if (__LIB_10__::func_197(&(uParam0->f_1)) != 0)
	{
		if (bParam1)
		{
			__LIB_10__::func_892(uParam0, 1);
		}
		func_1282(uParam0);
		MISC::CLEAR_BIT(&Global_2621446, 3);
		MISC::CLEAR_BIT(&(uParam0->f_1), 4);
	}
}

void func_5897()//Position - 0x1D767C
{
	__LIB_2__::func_346(PLAYER::PLAYER_ID(), 1);
	__LIB_6__::func_704();
	__LIB_1__::func_553();
	func_5883(&Global_1941652, 0);
	HUD::SET_RADAR_ZOOM(0);
	HUD::DISPLAY_RADAR(true);
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	GRAPHICS::SET_NOISEOVERIDE(false);
	GRAPHICS::SET_NOISINESSOVERIDE(0f);
	HUD::DISPLAY_CASH(true);
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	__LIB_36__::func_75(&Global_1941652, 0);
	__LIB_15__::func_194(&Global_1941652);
	func_5883(&Global_1941652, 0);
	__LIB_15__::func_585();
	__LIB_15__::func_584();
	if (BitTest(Global_2815059.f_5194, 3))
	{
		__LIB_1__::func_91();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && BitTest(Global_2815059.f_5194, 2))
	{
		__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	if (BitTest(Global_2815059.f_5194, 4))
	{
		__LIB_3__::func_504();
	}
	__LIB_1__::func_967(24);
	Global_2815059.f_5194 = 0;
}

int func_5904(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0x1D77BB
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	__LIB_0__::func_189();
	if (__LIB_0__::func_972(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (((bParam4 && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 1)
		{
		}
		else if (__LIB_0__::func_628() == 28)
		{
		}
		else
		{
			return 0;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
		if (!Global_2667225.f_702 == iParam0)
		{
			if (bParam15 && Global_2667225.f_702 == 37)
			{
			}
			else if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_703) < __LIB_0__::func_853(0))
				{
					return 0;
				}
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 0;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
		{
			Global_2667225.f_702 = iParam0;
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
			if (bParam2)
			{
				if (!__LIB_8__::func_918())
				{
					bParam2 = false;
				}
			}
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
			Global_2667225.f_2478 = 0;
			Global_2667225.f_2479 = 0;
			Global_2667225.f_2477 = 0;
			Global_2667225.f_2878 = 0;
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 2)
		{
			if (bParam2 || bParam7)
			{
				bVar3 = true;
			}
			if (Global_2667225.f_702 == 11)
			{
				Global_2667225.f_706 = { Global_2676213 };
				Global_2667225.f_709 = Global_2676213.f_5;
				Global_2667225.f_2898 = Global_2676213.f_26;
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 3;
			}
			else if (func_6155(&(Global_2667225.f_706), &(Global_2667225.f_709), Global_2667225.f_702, bVar3, iParam3, iParam5, iParam6, iParam8, iParam12, 0, bParam13, iParam17))
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 3;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 3)
		{
			if (bParam11)
			{
				if (bParam2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						__LIB_9__::func_741(&iVar2);
					}
					else
					{
						iVar2 = __LIB_1__::func_640();
						__LIB_9__::func_956(&iVar2);
					}
					if (__LIB_8__::func_918())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == Global_2667225.f_45.f_67)
							{
								iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (iVar4 == Global_2667225.f_45.f_173)
								{
									__LIB_2__::func_930();
								}
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							}
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
					}
					else
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
						{
							func_6132(iVar2);
							__LIB_3__::func_308(1);
							Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar2);
						}
					}
				}
				else
				{
					__LIB_3__::func_308(1);
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 4)
		{
			if (func_6128())
			{
				if (Global_2667225.f_45.f_65)
				{
					if (func_5962(Global_2667225.f_706, Global_2667225.f_706.f_1, __LIB_3__::func_207(Global_2667225.f_45.f_67), Global_2667225.f_709, 0))
					{
						Global_2667225.f_704 = NETWORK::GET_NETWORK_TIME();
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 5;
					}
				}
				else if (__LIB_2__::func_624(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0)
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 5)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				if (Global_2667225.f_45.f_176)
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_235 = 1;
				}
				else
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_235 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_704) > 5000)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2667225.f_45.f_173, false))
				{
					func_5953(PLAYER::PLAYER_PED_ID(), Global_2667225.f_45.f_173, -1, 0);
				}
				else
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 6)
		{
			Global_2667225.f_703 = NETWORK::GET_NETWORK_TIME();
			if (Global_2667225.f_712)
			{
				Global_2667225.f_705 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_712 = 0;
			}
			if (bParam7)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = bParam2;
			}
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_705)) >= 350)
			{
				bVar5 = true;
			}
			else
			{
				bVar5 = false;
			}
			if (Global_1836584)
			{
				__LIB_12__::func_53(Global_2667225.f_706);
			}
			if (bParam7 && !Global_2703735.f_910)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if ((ENTITY::IS_ENTITY_DEAD(iVar2, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false)) || __LIB_0__::func_793(iVar2))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
			if (bVar5)
			{
				if (__LIB_5__::func_758(Global_2667225.f_706, Global_2667225.f_709, bVar1, bParam1, 0, 0, 1, bParam4, bParam16, 1, Global_2667225.f_2898))
				{
					if (bParam15)
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 7;
						return 0;
					}
					else
					{
						__LIB_6__::func_444();
					}
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 7)
		{
			if ((Global_2667225.f_702 == 8 && Global_2667225.f_714.f_507) && Global_2667225.f_2878)
			{
				__LIB_6__::func_444();
			}
			else if (__LIB_9__::func_515(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) || __LIB_8__::func_265())
			{
				if (Global_2667225.f_702 == 8 && !Global_2667225.f_2878)
				{
					Global_2667225.f_2878 = 1;
				}
				else
				{
					Global_2667225.f_702 = 37;
				}
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
				Global_2667225.f_2478 = 0;
				Global_2667225.f_2479 = 0;
				Global_2667225.f_2477 = 0;
			}
			else
			{
				__LIB_6__::func_444();
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 10)
		{
			if (SYSTEM::VDIST(Global_2676213, Global_2667225.f_706) > 0.1f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar2)) || VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar2)))
					{
						MISC::GET_GROUND_Z_FOR_3D_COORD(Global_2667225.f_706, Global_2667225.f_706.f_1, Global_2667225.f_706.f_2, &fVar0, false, false);
						if (fVar0 == 0f || (Global_2667225.f_706.f_2 - fVar0) > 1.5f)
						{
							if (SYSTEM::VDIST(Global_2676213, Global_2667225.f_706) > 15f)
							{
								Global_2667225.f_706 = { Global_2676213 };
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
								{
									ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + __LIB_2__::func_760(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
								}
								Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
							}
							else
							{
								Global_2667225.f_706.f_2 = (Global_2667225.f_706.f_2 + 1f);
							}
						}
						else
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
							{
								ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + __LIB_2__::func_760(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
							}
							Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
						}
					}
					else
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
					}
				}
				else
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
				}
			}
			else
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 11)
		{
			if (!bParam14)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2667225.f_45.f_173))
				{
					ENTITY::SET_ENTITY_VISIBLE(Global_2667225.f_45.f_173, true, false);
				}
			}
			if (bParam2 || bParam7)
			{
				if (iParam9 > 0)
				{
					__LIB_3__::func_274(iParam9, 0, 0);
				}
			}
			__LIB_3__::func_221(__LIB_1__::func_694(PLAYER::PLAYER_ID()), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173))
			{
				__LIB_2__::func_930();
			}
			if (!(__LIB_2__::func_624(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0) && !Global_2667225.f_490.f_5)
			{
				func_5924(0, 0);
			}
			__LIB_3__::func_138(0, 0);
			if (bParam10)
			{
				__LIB_2__::func_610();
			}
			__LIB_1__::func_21();
			__LIB_9__::func_810();
			if (bParam13)
			{
				__LIB_0__::func_854();
			}
			__LIB_0__::func_858();
			return 1;
		}
	}
	else if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		__LIB_9__::func_956(&(Global_2667225.f_45.f_173));
		__LIB_0__::func_858();
	}
	Global_2667225.f_703 = NETWORK::GET_NETWORK_TIME();
	return 0;
}

void func_5924(int iParam0, bool bParam1)//Position - 0x1D893F
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		Var0.f_2 = (Var0.f_2 + (0.3f * IntToFloat(Global_2667225.f_710)));
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, false, false))
		{
			fVar2 = (Var0.f_2 - (fVar1 + 1f));
			if ((MISC::ABSF(fVar2) > 0f && MISC::ABSF(fVar2) < 1f) || iParam0 == 1)
			{
				if (!bParam1)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0.f_0, Var0.f_1, fVar1, false, true, false, true);
				Global_2667225.f_710 = 0;
			}
		}
		else if (Global_2667225.f_710 < 3)
		{
			Global_2667225.f_710++;
			func_5924(0, 0);
		}
		else
		{
			Global_2667225.f_710 = 0;
		}
	}
}

void func_5953(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1D9B6B
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	bVar0 = false;
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		bVar0 = true;
	}
	if (!__LIB_2__::func_623(iParam0, iParam1, bVar0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		Var2 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
		if (!SYSTEM::VDIST(Var1, Var2) < 5f || !iParam2 == -1)
		{
			Var2.f_2 = (Var2.f_2 + -4f);
			Var2.f_0 = (Var2.f_0 + -4f);
			Var2.f_1 = (Var2.f_1 + -4f);
			ENTITY::SET_ENTITY_COORDS(iParam0, Var2, false, false, false, true);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
		ENTITY::SET_ENTITY_COLLISION(iParam0, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_RESET_FLAG(iParam0, 150, true);
		PED::SET_PED_RESET_FLAG(iParam0, 151, true);
		if (bParam3)
		{
			PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, iParam2);
		}
		else
		{
			TASK::TASK_ENTER_VEHICLE(iParam0, iParam1, -1, iParam2, 2f, 16, 0);
		}
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
		PED::SET_PED_RESET_FLAG(iParam0, 150, true);
		if (Global_1836584)
		{
			if (__LIB_2__::func_918(ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				func_5954(0);
			}
		}
	}
}

void func_5954(bool bParam0)//Position - 0x1D9C75
{
	struct<14> Var0;
	int iVar1;
	if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_4718592.f_168793 == 0)
		{
			if ((Global_2667225.f_2699 == -99 || Global_2667225.f_2699 == 0) || !__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, Global_2667225.f_2699, -1))
			{
				if (!bParam0)
				{
					iVar1 = __LIB_1__::func_360(589, -1, 0);
				}
			}
			else
			{
				iVar1 = Global_2667225.f_2699;
			}
			Var0 = { __LIB_3__::func_310(__LIB_2__::func_82(), 14, iVar1, -1) };
			__LIB_2__::func_620(PLAYER::PLAYER_PED_ID(), 14, iVar1);
			func_1394(PLAYER::PLAYER_PED_ID(), 14, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
			func_1394(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 380, true);
		}
	}
}

int func_5962(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x1D9EBB
{
	int* iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	if (__LIB_4__::func_972(PLAYER::PLAYER_ID()))
	{
	}
	iVar0 = __LIB_1__::func_640();
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
	Global_2667225.f_45.f_176 = 0;
	bVar3 = false;
	bVar4 = false;
	if (Global_4718592 == 0 && !Global_1574964)
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1)
		{
			if (BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8))
			{
				bVar4 = true;
				if (!BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
				{
					bVar3 = true;
				}
			}
		}
	}
	if (func_6123() && !bVar3)
	{
		if (func_6122())
		{
			if (func_6116(&iVar2))
			{
				if (__LIB_8__::func_267(iVar2))
				{
					if (!bVar4)
					{
						func_5953(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), 0, 0);
						return 1;
					}
					else if (__LIB_2__::func_641() != -1 || BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
					{
						__LIB_2__::func_640(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false));
						iVar5 = __LIB_2__::func_639(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), 1, 0, 0, -3);
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_2667225.f_45.f_173, __LIB_2__::func_641(), false))
						{
							iVar5 = __LIB_2__::func_641();
						}
						func_5953(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), iVar5, 0);
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), false))
						{
							return 1;
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
	}
	if (Global_2667225.f_45.f_68)
	{
		if (__LIB_8__::func_913(iVar0))
		{
			if ((__LIB_8__::func_918() && ENTITY::GET_ENTITY_MODEL(iVar0) == Global_2667225.f_45.f_67) || !__LIB_8__::func_918())
			{
				if (!__LIB_9__::func_418(ENTITY::GET_ENTITY_COORDS(iVar0, true), 30f, 1, 1, 0, 0, 0, 0, 0))
				{
					if (bParam2)
					{
						ENTITY::SET_ENTITY_COORDS(iVar0, __LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
					}
					func_6132(iVar0);
					return 1;
				}
			}
		}
	}
	if (Global_1836584 || __LIB_1__::func_141())
	{
		__LIB_9__::func_956(&iVar0);
	}
	if (func_6128())
	{
		__LIB_9__::func_956(&(Global_2667225.f_45.f_173));
		if (__LIB_2__::func_870())
		{
			if (__LIB_1__::func_599(44) && VEHICLE::IS_VEHICLE_DRIVEABLE(__LIB_2__::func_638(), false))
			{
				ENTITY::SET_ENTITY_COORDS(__LIB_2__::func_638(), __LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(__LIB_2__::func_638(), fParam1);
				func_6106(__LIB_2__::func_638());
				return 1;
			}
			else if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != __LIB_0__::func_878())
			{
				if (__LIB_2__::func_924(__LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), fParam1, __LIB_1__::func_463(), 1))
				{
					func_6106(__LIB_2__::func_638());
					return 1;
				}
			}
			else if (func_5965(__LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 1, __LIB_1__::func_463(), 0, 1, 0))
			{
				func_6106(__LIB_2__::func_638());
				return 1;
			}
		}
		else if (__LIB_0__::func_957(&iVar1, Global_2667225.f_45.f_69.f_66, __LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			if (Global_2667225.f_45.f_177)
			{
				VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(iVar1), true);
			}
			if (Global_2667225.f_45.f_178)
			{
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(iVar1), false);
			}
			if (Global_2667225.f_45.f_179)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
				{
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(iVar1), "Not_Allow_As_Saved_Veh", 1);
				}
			}
			if (Global_2667225.f_45.f_180)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(iVar1), "MPBitset"))
					{
						iVar6 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(iVar1), "MPBitset");
					}
					MISC::SET_BIT(&iVar6, 11);
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(iVar1), "MPBitset", iVar6);
				}
			}
			if (Global_2667225.f_45.f_183 > -1)
			{
				VEHICLE::SET_VEHICLE_COLOURS(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_183, Global_2667225.f_45.f_183);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_183, Global_2667225.f_45.f_183);
			}
			if (Global_2667225.f_45.f_181)
			{
				__LIB_2__::func_626(NETWORK::NET_TO_VEH(iVar1));
			}
			__LIB_2__::func_625(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_69);
			func_6106(NETWORK::NET_TO_VEH(iVar1));
			return 1;
		}
	}
	return 0;
}

int func_5965(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1DA552
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	struct<31> Var7;
	struct<31> Var8;
	struct<31> Var9;
	bool bVar10;
	int iVar11;
	if (!__LIB_1__::func_599(8))
	{
		__LIB_1__::func_891(0, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_653(8);
	}
	if (Global_1585857[iParam3 /*142*/].f_66 == 0)
	{
		return 1;
	}
	if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 6))
	{
		if (!__LIB_1__::func_599(16))
		{
			__LIB_1__::func_653(16);
		}
	}
	__LIB_1__::func_653(31);
	if (!__LIB_2__::func_734())
	{
		if (!__LIB_1__::func_599(0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(__LIB_2__::func_733(0)))
			{
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (!__LIB_0__::func_863())
					{
						if (!__LIB_2__::func_923())
						{
							__LIB_7__::func_73(iParam3);
							iVar1 = Global_1585857[iParam3 /*142*/].f_66;
							if (!__LIB_1__::func_814(iVar1) || !__LIB_0__::func_371(iVar1, 1))
							{
								if (!__LIB_0__::func_113(iVar1))
								{
								}
								else
								{
									__LIB_9__::func_527(iParam3, -1);
								}
								return 1;
							}
							else if (__LIB_0__::func_799(iVar1))
							{
								iVar3 = 0;
								if ((NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2703735.f_61.f_69) < 15)
								{
									iVar3 = 1;
								}
								if (__LIB_1__::func_24())
								{
									iVar3 = 1;
								}
								if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), Global_2667225.f_26.f_3) < 15000)
								{
									Global_2667225.f_26.f_3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
									iVar3 = 1;
								}
								if (bParam6)
								{
									iVar3 = 1;
								}
								if (Global_2715699.f_2846.f_148)
								{
									iVar4 = 0;
									iVar3 = 1;
								}
								else
								{
									iVar4 = 1;
								}
								bVar5 = true;
								if (__LIB_3__::func_462(PLAYER::PLAYER_ID()) || (CAM::IS_SCREEN_FADED_OUT() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()))
								{
									bVar5 = false;
								}
								if (Global_2715699.f_2846.f_148)
								{
									if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
									{
										MISC::CLEAR_BIT(&(Global_1585857[iParam3 /*142*/].f_103), 11);
									}
								}
								bVar6 = false;
								if (bParam5)
								{
									bVar6 = true;
								}
								else if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
								{
									Var7.f_4 = 1125515264;
									Var7.f_5 = 1;
									Var7.f_6 = 1;
									Var7.f_8 = 1082130432;
									Var7.f_9 = 1176255488;
									Var7.f_10 = 1;
									Var7.f_13 = 1;
									Var7.f_15 = 2;
									Var7.f_22 = 2;
									Var7.f_25 = 1;
									Var7.f_26 = 1;
									Var7.f_29 = 1123024896;
									Var7.f_30 = 1;
									Var7.f_4 = 50f;
									Var7.f_5 = 0;
									Var7.f_6 = 0;
									Var7.f_10 = iVar4;
									Var7.f_11 = iVar3;
									Var7.f_12 = 1;
									Var7.f_13 = bVar5;
									Var7.f_14 = 1;
									Var7.f_25 = 0;
									iVar2 = 0;
									while (iVar2 < 2)
									{
										Var7.f_15[iVar2 /*3*/] = { Global_2703735.f_61.f_82[iVar2 /*3*/] };
										Var7.f_22[iVar2] = Global_2703735.f_61.f_89[iVar2];
										iVar2++;
									}
									if (func_6009(-145.7451f, -1167.9371f, 24.2819f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
									else if (func_6009(-234.9622f, -1171.113f, 21.8657f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
								}
								else if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 6))
								{
									if (__LIB_3__::func_225(&Param0, &fParam1))
									{
										bVar6 = true;
									}
								}
								else
								{
									if (bParam4)
									{
										if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
										{
											bParam4 = false;
										}
									}
									if (!bParam4)
									{
										Var8.f_4 = 1125515264;
										Var8.f_5 = 1;
										Var8.f_6 = 1;
										Var8.f_8 = 1082130432;
										Var8.f_9 = 1176255488;
										Var8.f_10 = 1;
										Var8.f_13 = 1;
										Var8.f_15 = 2;
										Var8.f_22 = 2;
										Var8.f_25 = 1;
										Var8.f_26 = 1;
										Var8.f_29 = 1123024896;
										Var8.f_30 = 1;
										Var8.f_0 = 10f;
										Var8.f_10 = iVar4;
										Var8.f_11 = iVar3;
										Var8.f_12 = 1;
										Var8.f_13 = bVar5;
										Var8.f_14 = 1;
										Var8.f_25 = 0;
										iVar2 = 0;
										while (iVar2 < 2)
										{
											Var8.f_15[iVar2 /*3*/] = { Global_2703735.f_61.f_82[iVar2 /*3*/] };
											Var8.f_22[iVar2] = Global_2703735.f_61.f_89[iVar2];
											iVar2++;
										}
										if (func_6009(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var8))
										{
											bVar6 = true;
										}
									}
									else
									{
										Var9.f_4 = 1125515264;
										Var9.f_5 = 1;
										Var9.f_6 = 1;
										Var9.f_8 = 1082130432;
										Var9.f_9 = 1176255488;
										Var9.f_10 = 1;
										Var9.f_13 = 1;
										Var9.f_15 = 2;
										Var9.f_22 = 2;
										Var9.f_25 = 1;
										Var9.f_26 = 1;
										Var9.f_29 = 1123024896;
										Var9.f_30 = 1;
										Var9.f_3 = bParam4;
										Var9.f_10 = iVar4;
										Var9.f_11 = iVar3;
										Var9.f_12 = 1;
										Var9.f_13 = bVar5;
										Var9.f_14 = 1;
										Var9.f_25 = 0;
										iVar2 = 0;
										while (iVar2 < 2)
										{
											Var9.f_15[iVar2 /*3*/] = { Global_2703735.f_61.f_82[iVar2 /*3*/] };
											Var9.f_22[iVar2] = Global_2703735.f_61.f_89[iVar2];
											iVar2++;
										}
										if (func_6009(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var9))
										{
											bVar6 = true;
										}
									}
								}
								if (bVar6)
								{
									MISC::CLEAR_AREA(Param0, 2f, true, false, false, false);
									__LIB_0__::func_957(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38), iVar1, Param0, fParam1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0);
									NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38, PLAYER::PLAYER_ID(), true);
									iVar0 = NETWORK::NET_TO_VEH(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38);
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, true);
									VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar0, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
									__LIB_36__::func_253(&iVar0, iParam3);
									if ((__LIB_1__::func_629() || __LIB_2__::func_632()) || __LIB_2__::func_631())
									{
										ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
									}
									__LIB_9__::func_491(iVar0, iParam3);
									if (!bVar5)
									{
										NETWORK::NETWORK_FADE_IN_ENTITY(iVar0, true, 1);
									}
									if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
									{
										__LIB_1__::func_653(34);
									}
									else
									{
										__LIB_1__::func_600(34);
									}
									if (iParam3 >= 0 && iParam3 < 363)
									{
										MISC::SET_BIT(&(Global_1585857[iParam3 /*142*/].f_103), 0);
										iVar11 = 0;
										while (iVar11 < 363)
										{
											bVar10 = false;
											if (iVar11 != iParam3)
											{
												if (BitTest(Global_1585857[iVar11 /*142*/].f_103, 11))
												{
													MISC::CLEAR_BIT(&(Global_1585857[iVar11 /*142*/].f_103), 11);
													bVar10 = true;
												}
												if (BitTest(Global_1585857[iVar11 /*142*/].f_103, 0))
												{
													MISC::CLEAR_BIT(&(Global_1585857[iVar11 /*142*/].f_103), 0);
													bVar10 = true;
												}
												if (BitTest(Global_1585857[iVar11 /*142*/].f_103, 6))
												{
													__LIB_32__::func_651(iVar11);
													bVar10 = true;
												}
												if (bVar10)
												{
													__LIB_3__::func_578(iVar11, &(Global_1585857[iVar11 /*142*/]), 1, -1, 0, 0);
												}
											}
											iVar11++;
										}
									}
									if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iVar0, false))
									{
										if (BitTest(Global_2715699.f_5986, 2))
										{
											VEHICLE::LOWER_CONVERTIBLE_ROOF(iVar0, true);
										}
									}
									__LIB_3__::func_578(iParam3, &(Global_1585857[iParam3 /*142*/]), 1, -1, 0, 0);
									__LIB_3__::func_224(iVar0);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
									if (bParam2)
									{
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
									}
									__LIB_1__::func_653(0);
									__LIB_1__::func_653(44);
									__LIB_1__::func_600(10);
									__LIB_1__::func_600(1);
									__LIB_1__::func_600(2);
									__LIB_1__::func_600(9);
									__LIB_1__::func_600(12);
									__LIB_1__::func_600(31);
									__LIB_1__::func_600(32);
									__LIB_1__::func_600(33);
									__LIB_1__::func_600(35);
									__LIB_1__::func_600(37);
									__LIB_1__::func_600(38);
									__LIB_2__::func_627();
									Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_120 = 0;
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

int func_6009(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x1DEC41
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<61> Var5;
	struct<61> Var6;
	bVar0 = false;
	if (uParam6->f_14)
	{
		if (uParam6->f_25)
		{
			uParam6->f_25 = 0;
		}
	}
	if (!__LIB_1__::func_533())
	{
		return 0;
	}
	if (__LIB_1__::func_479() && !Global_2667225.f_680 == MISC::GET_FRAME_COUNT())
	{
		if (!Global_2667225.f_676 == 0)
		{
			Global_2667225.f_676 = 0;
			__LIB_0__::func_854();
			__LIB_0__::func_814();
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_675)
	{
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_853(0))
			{
				return 0;
			}
			else
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	else
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_677) > 30000)
		{
			Global_2667225.f_676 = 0;
		}
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) > __LIB_0__::func_853(1))
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_6088(Param0))
		{
			if (__LIB_1__::func_558(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2667225.f_676 == 0)
	{
		if (SYSTEM::VDIST(Global_2667225.f_695, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2667225.f_698 != iParam2)
		{
			return 0;
		}
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2667225.f_676 == 0)
	{
		Global_2667225.f_682 = 0;
		Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_675 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_695 = { Param0 };
		Global_2667225.f_698 = iParam2;
		Global_2667225.f_681 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		__LIB_0__::func_851();
		__LIB_0__::func_854();
		if (!uParam6->f_27 || (((((((__LIB_9__::func_740(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2815059.f_924) && !Global_2815059.f_913) && !Global_2815059.f_921) && !Global_2815059.f_925) && !Global_2815059.f_933) && !Global_2815059.f_945))
		{
			__LIB_9__::func_972(Param0, iParam2);
		}
		if (__LIB_9__::func_971(Param0))
		{
			__LIB_9__::func_972(Param0, iParam2);
		}
		Global_2667225.f_676 = 2;
	}
	switch (Global_2667225.f_676)
	{
		case 2:
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2667225.f_683 = { Param0 };
				Global_2667225.f_686 = 0f;
				if (Global_2815059.f_924)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam6->f_3 && __LIB_9__::func_771(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !__LIB_4__::func_986(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0))
				{
					Global_2667225.f_683 = { Param0 };
					Global_2667225.f_686 = *uParam5;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam3;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam6->f_5;
					Var5.f_4 = *uParam6;
					Var5.f_13 = uParam6->f_1;
					Var5.f_14 = uParam6->f_2;
					Var5.f_5 = uParam6->f_4;
					Var5.f_15 = uParam6->f_6;
					Var5.f_11 = uParam6->f_7;
					Var5.f_6 = uParam6->f_8;
					Var5.f_7 = uParam6->f_9;
					Var5.f_16 = uParam6->f_10;
					Var5.f_17 = uParam6->f_11;
					Var5 = { Param1 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam2;
					Var5.f_31 = uParam6->f_13;
					if (uParam6->f_32 && Global_2667225.f_682 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam6->f_30;
						Var5.f_29 = uParam6->f_31;
					}
					Var5.f_48 = uParam6->f_14;
					Var5.f_56 = uParam6->f_25;
					Var5.f_57 = uParam6->f_26;
					Var5.f_49 = uParam6->f_29;
					Var5.f_59 = uParam6->f_33;
					Var5.f_60 = uParam6->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam6->f_22[iVar1];
						iVar1++;
					}
					func_6019(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var5);
				}
				__LIB_9__::func_417(Global_2667225.f_683, Global_2667225.f_686, iParam2, &(Global_2667225.f_673));
				Global_2667225.f_671 = 0;
				Global_2667225.f_672 = 0;
				Global_2667225.f_682++;
				Global_2667225.f_678 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_676 = 3;
			}
			break;
		case 3:
			if (Global_2667225.f_671)
			{
				if (Global_2667225.f_673 == Global_2667225.f_674)
				{
					if (Global_2667225.f_672)
					{
						if (uParam6->f_12 && !uParam6->f_11)
						{
							if (__LIB_2__::func_765(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 1036831949))
							{
								Global_2667225.f_676 = 4;
								Global_2667225.f_700 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_6014(Global_2667225.f_683, 0);
						__LIB_0__::func_821(-1);
					}
				}
				else
				{
					Global_2667225.f_671 = 0;
					Global_2667225.f_672 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_678) > 3000)
			{
				__LIB_0__::func_821(-1);
			}
			break;
		case 4:
			if (uParam6->f_12 && !uParam6->f_11)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_700) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_699))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2667225.f_699))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2667225.f_699))
							{
								if (__LIB_4__::func_985(Global_2667225.f_683, Global_2667225.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || __LIB_9__::func_492(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_6014(Global_2667225.f_683, 0);
									__LIB_0__::func_821(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_6014(Global_2667225.f_683, 0);
								__LIB_0__::func_821(-1);
							}
						}
					}
					else
					{
						__LIB_0__::func_821(-1);
					}
				}
				else
				{
					__LIB_0__::func_821(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 5:
			Global_2667225.f_683 = { Param0 };
			Global_2667225.f_686 = 0f;
			Var6.f_6 = 1082130432;
			Var6.f_7 = 1176255488;
			Var6.f_8 = 1;
			Var6.f_10 = 1;
			Var6.f_13 = 1;
			Var6.f_15 = 1;
			Var6.f_16 = 1;
			Var6.f_31 = 1;
			Var6.f_34 = joaat("tailgater");
			Var6.f_38 = 2;
			Var6.f_45 = 2;
			Var6.f_49 = 1123024896;
			Var6.f_53 = 999;
			Var6.f_54 = 1176256410;
			Var6.f_55 = 1;
			Var6.f_56 = 1;
			Var6.f_57 = 1;
			Var6.f_9 = iParam3;
			Var6.f_3 = 3.5f;
			Var6.f_10 = uParam6->f_5;
			Var6.f_4 = *uParam6;
			Var6.f_12 = 1;
			Var6.f_13 = 0;
			Var6.f_15 = uParam6->f_6;
			Var6.f_11 = uParam6->f_7;
			Var6.f_6 = uParam6->f_8;
			Var6.f_7 = uParam6->f_9;
			Var6 = { Param1 };
			Var6.f_34 = iParam2;
			Var6.f_31 = uParam6->f_13;
			Var6.f_30 = 1;
			Var6.f_48 = uParam6->f_14;
			Var6.f_56 = uParam6->f_25;
			Var6.f_57 = uParam6->f_26;
			Var6.f_30 = uParam6->f_30;
			Var6.f_29 = uParam6->f_31;
			Var6.f_59 = uParam6->f_33;
			Var6.f_60 = uParam6->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var6.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
				Var6.f_45[iVar1] = uParam6->f_22[iVar1];
				iVar1++;
			}
			Var6.f_49 = uParam6->f_29;
			func_6019(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var6);
			Global_2667225.f_676 = 6;
			break;
		case 6:
			bVar0 = true;
			break;
	}
	Global_2667225.f_695 = { Param0 };
	Global_2667225.f_698 = iParam2;
	Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (bVar0)
	{
		Global_2667225.f_516 = 0;
		*uParam4 = { Global_2667225.f_683 };
		*uParam5 = Global_2667225.f_686;
		__LIB_1__::func_527(1);
		return 1;
	}
	return 0;
}

void func_6014(struct<3> Param0, int iParam1)//Position - 0x1DF82D
{
	struct<3> Var0;
	if (iParam1 == 0 && __LIB_0__::func_822(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2667225.f_2737[iParam1 /*3*/] };
		Global_2667225.f_2737[iParam1 /*3*/] = { Param0 };
		func_6014(Var0, iParam1 + 1);
	}
}

void func_6019(var uParam0, var uParam1, var uParam2)//Position - 0x1DFA40
{
	int iVar0;
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_6059(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_6020(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_6020(var uParam0, var uParam1, var uParam2)//Position - 0x1DFAAF
{
	int iVar0;
	struct<3> Var1;
	float* fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar26;
	struct<3> Var27;
	float* fVar28;
	bool bVar29;
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_6055(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (__LIB_1__::func_572(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	bVar8 = true;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		bVar8 = false;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		bVar8 = false;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2674786.f_162 = 0;
	Global_2674786.f_163 = 0;
	Global_2674786.f_164 = -99;
	Global_2674786.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2674786.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (__LIB_1__::func_452(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &Var1);
			bVar10 = false;
			if (Global_2674786.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2674786.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar6)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar6))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!__LIB_2__::func_784(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!__LIB_1__::func_434(Var1))
									{
										Var1 = { __LIB_2__::func_783(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, bVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!__LIB_2__::func_990(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (__LIB_1__::func_546(Var1, uParam2))
														{
															if ((uParam2->f_48 && !__LIB_1__::func_572(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !__LIB_8__::func_982(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_6055(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!__LIB_2__::func_989(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (__LIB_9__::func_771(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (__LIB_9__::func_771(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_9__::func_492(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = __LIB_9__::func_770(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162)
																										{
																											Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2674786.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2674786.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2674786.f_162 == 0)
																									{
																										Global_2674786[0 /*3*/] = { Var1 };
																										Global_2674786.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_6028(Var1, fVar2, iVar14);
																													iVar14 = Global_2674786.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2674786.f_162++;
																									if (Global_2674786.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2674786[Global_2674786.f_162 /*3*/] = { Var1 };
																									Global_2674786.f_121[Global_2674786.f_162] = fVar2;
																									Global_2674786.f_162++;
																									if (__LIB_1__::func_546(Var1, uParam2))
																									{
																										Global_2674786.f_163++;
																									}
																									if (Global_2674786.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2674786.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
						{
							func_6026(0, uParam2);
						}
						iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						Var25 = { Global_2674786[0 /*3*/] };
						uVar26 = Global_2674786.f_121[0];
						Global_2674786[0 /*3*/] = { Global_2674786[iVar24 /*3*/] };
						Global_2674786.f_121[0] = Global_2674786.f_121[iVar24];
						Global_2674786[iVar24 /*3*/] = { Var25 };
						Global_2674786.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						__LIB_2__::func_856(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, bVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_6055(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || __LIB_1__::func_572(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				__LIB_9__::func_811(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2674786.f_164 = iVar6;
	}
	return 0;
}

void func_6026(int iParam0, var uParam1)//Position - 0x1E0810
{
	if (!__LIB_1__::func_546(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		__LIB_0__::func_824(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_6026(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_6026(iParam0 + 1, uParam1);
	}
}

void func_6028(struct<3> Param0, float fParam1, int iParam2)//Position - 0x1E08B6
{
	struct<3> Var0;
	var uVar1;
	Var0 = { Global_2674786[iParam2 /*3*/] };
	uVar1 = Global_2674786.f_121[iParam2];
	Global_2674786[iParam2 /*3*/] = { Param0 };
	Global_2674786.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2674786.f_162 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_6028(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_6055(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x1E1FC3
{
	int iVar0;
	bool bVar1;
	if (func_6088(Param0))
	{
		if (func_6058(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (__LIB_2__::func_766(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (__LIB_0__::func_822(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				__LIB_1__::func_450(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_6058(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1E220D
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2672169[iVar0 /*17*/].f_16))
			{
				if (__LIB_1__::func_528(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2672169[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2672169[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_6058(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_6059(var uParam0, var uParam1, var uParam2)//Position - 0x1E22E8
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	var uVar14;
	if (Global_2667225.f_1754 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_6055(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (__LIB_1__::func_572(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2674786.f_162 = 0;
		Global_2674786.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2674786.f_121[iVar5] = 0f;
			iVar5++;
		}
		if (uParam2->f_30)
		{
			__LIB_1__::func_454(*uParam0);
		}
		else if (uParam2->f_29)
		{
			__LIB_0__::func_838();
		}
		else
		{
			__LIB_0__::func_837();
		}
		iVar1 = 0;
		while (iVar1 < Global_2667225.f_1754)
		{
			iVar2 = Global_2667225.f_2160[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2667225.f_1755[iVar2 /*4*/] };
				fVar4 = Global_2667225.f_1755[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !__LIB_8__::func_982(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_6055(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar6 = uParam2->f_31;
										bVar7 = true;
										iVar8 = 1;
										fVar9 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											fVar9 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0.375f);
											}
										}
										else
										{
											bVar7 = true;
											iVar8 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar9 = (fVar9 * 0.375f);
												}
											}
										}
										bVar10 = false;
										if (!__LIB_2__::func_989(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (__LIB_9__::func_771(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (__LIB_9__::func_771(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_9__::func_492(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar10 = true;
											}
										}
										if (bVar10)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar12 = 0f;
												if (uParam2->f_52)
												{
													iVar11 = __LIB_9__::func_770(Var3, uParam2->f_54, &fVar12);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar11 < uParam2->f_53)
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162)
															{
																Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
																Global_2674786.f_121[iVar5] = 0f;
																iVar5++;
															}
															Global_2674786.f_162 = 0;
															uParam2->f_53 = iVar11;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2674786.f_162 == 0)
														{
															Global_2674786[0 /*3*/] = { Var3 };
															Global_2674786.f_121[0] = fVar4;
														}
														else
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162 + 1)
															{
																if (iVar5 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar5 /*3*/], uParam2->f_35))
																	{
																		func_6028(Var3, fVar4, iVar5);
																		iVar5 = Global_2674786.f_162 + 1;
																	}
																}
																iVar5++;
															}
														}
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
													else
													{
														Global_2674786[Global_2674786.f_162 /*3*/] = { Var3 };
														Global_2674786.f_121[Global_2674786.f_162] = fVar4;
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar4;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2674786.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
				{
					func_6026(0, uParam2);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
				Var13 = { Global_2674786[0 /*3*/] };
				uVar14 = Global_2674786.f_121[0];
				Global_2674786[0 /*3*/] = { Global_2674786[iVar0 /*3*/] };
				Global_2674786.f_121[0] = Global_2674786.f_121[iVar0];
				Global_2674786[iVar0 /*3*/] = { Var13 };
				Global_2674786.f_121[iVar0] = uVar14;
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2667225.f_1754 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_1754);
				*uParam0 = { Global_2667225.f_1755[iVar0 /*4*/] };
				*uParam1 = Global_2667225.f_1755[iVar0 /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_6088(struct<3> Param0)//Position - 0x1EAE66
{
	int iVar0;
	struct<3> Var1;
	if (!Global_2667225.f_515 && !Global_2667225.f_516)
	{
		if (!Global_2667225.f_45.f_317)
		{
			if (!__LIB_4__::func_934(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!__LIB_1__::func_560(Param0, 1008981770))
			{
				if (!func_6058(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_6058(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = __LIB_1__::func_559(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { __LIB_0__::func_852(&(Global_2667225.f_45[iVar0 /*12*/])) };
					if (!func_6058(&Var1, 0, 0, 0, 1))
					{
						if (!func_6058(&Param0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_6106(int iParam0)//Position - 0x1EB379
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
		}
	}
	ENTITY::SET_ENTITY_VISIBLE(iParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
	func_6132(iParam0);
	__LIB_2__::func_640(iParam0);
	Global_1585234 = iParam0;
	if (Global_2667225.f_45.f_172)
	{
		__LIB_36__::func_252(iParam0, 1);
	}
	else
	{
		__LIB_9__::func_973(iParam0, __LIB_1__::func_696(PLAYER::PLAYER_ID()));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	Global_2667225.f_45.f_176 = 1;
}

int func_6116(var uParam0)//Position - 0x1EB702
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964)
	{
		if (__LIB_2__::func_644())
		{
			iVar2 = __LIB_2__::func_642(__LIB_2__::func_643());
			if (iVar2 > -1)
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
				*uParam0 = iVar3;
			}
			if (*uParam0 != __LIB_0__::getMinusOneOrNull() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			if (!BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				iVar5 = __LIB_2__::func_642(iVar0);
				if (iVar5 > -1)
				{
					iVar6 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar5);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar6))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar6);
						if (!__LIB_0__::func_972(iVar7, 0, 0) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar7)))
						{
							*uParam0 = iVar7;
							bVar4 = true;
						}
						else
						{
							iVar0++;
						}
						if (bVar4)
						{
							return 1;
						}
						else
						{
							return 0;
						}
						Jump @555; //curOff = 335
						if (!__LIB_1__::func_837())
						{
							iVar0 = 0;
							while (iVar0 < 32)
							{
								bVar1 = iVar0;
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
								{
									if (__LIB_1__::func_693(bVar1, 0, 1))
									{
										if (!bVar1 == PLAYER::PLAYER_ID())
										{
											if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
											{
												if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
												{
													*uParam0 = bVar1;
													return 1;
												}
											}
										}
									}
								}
								iVar0++;
							}
							*uParam0 = -1;
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 32)
							{
								bVar1 = iVar0;
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
								{
									if (__LIB_1__::func_693(bVar1, 0, 1))
									{
										if (!bVar1 == PLAYER::PLAYER_ID())
										{
											if (func_6117(bVar1) && PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
											{
												if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
												{
													*uParam0 = bVar1;
													return 1;
												}
											}
										}
									}
								}
								iVar0++;
							}
							*uParam0 = -1;
						}
						return 0;
					}
int func_6117(bool bParam0)//Position - 0x1EB931
{
	if ((MISC::GET_FRAME_COUNT() % 5) == 0)
	{
	}
	if (!Global_2667225.f_2664 == -1)
	{
		if (BitTest(Global_2667225.f_2665, bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_6122()//Position - 0x1EB9AA
{
	bool bVar0;
	if (__LIB_1__::func_837())
	{
		if (func_6116(&bVar0))
		{
			if (func_6117(bVar0))
			{
				if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_234)
				{
					return 1;
				}
			}
		}
	}
	else if (__LIB_2__::func_644())
	{
		return 1;
	}
	return 0;
}

int func_6123()//Position - 0x1EB9EF
{
	var uVar0;
	if (__LIB_2__::func_645() || ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964))
	{
		if (func_6116(&uVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_6128()//Position - 0x1EBB32
{
	bool bVar0;
	var uVar1;
	if (__LIB_8__::func_918())
	{
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_67))
		{
		}
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_69.f_66))
		{
		}
		if (func_6123())
		{
			if (func_6122())
			{
				return 1;
			}
		}
		bVar0 = false;
		if (__LIB_2__::func_870())
		{
			Global_2667225.f_45.f_69.f_66 = Global_1585857[__LIB_1__::func_463() /*142*/].f_66;
			bVar0 = true;
		}
		if (!bVar0)
		{
			if (Global_2667225.f_45.f_68)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_2669))
				{
					if (Global_2667225.f_45.f_67 == ENTITY::GET_ENTITY_MODEL(Global_2667225.f_2669) || Global_2667225.f_45.f_67 == 0)
					{
						if (__LIB_4__::func_972(PLAYER::PLAYER_ID()) && !Global_2667225.f_45.f_67 == 0)
						{
							bVar0 = true;
							if (Global_2667225.f_45.f_172)
							{
							}
						}
						else
						{
							Global_2667225.f_45.f_69.f_66 = ENTITY::GET_ENTITY_MODEL(Global_2667225.f_2669);
							__LIB_9__::func_973(Global_2667225.f_2669, __LIB_1__::func_696(PLAYER::PLAYER_ID()));
							bVar0 = true;
						}
					}
				}
			}
		}
		if (Global_2667225.f_45.f_67 == 0 && !bVar0)
		{
			__LIB_2__::func_648();
			VEHICLE::GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(true, &(Global_2667225.f_45.f_69.f_66), &uVar1);
			if (Global_2667225.f_45.f_69.f_66 == 0)
			{
				Global_2667225.f_45.f_69.f_66 = __LIB_2__::func_647();
			}
		}
		else if (!__LIB_2__::func_870())
		{
			if (Global_2667225.f_45.f_172)
			{
				if (!Global_2667225.f_45.f_69.f_66 == Global_2667225.f_45.f_67 && !__LIB_1__::func_663())
				{
					__LIB_2__::func_648();
				}
			}
			else
			{
				Global_2667225.f_45.f_69.f_66 = Global_2667225.f_45.f_67;
			}
		}
		if (!Global_2667225.f_45.f_69.f_66 == 0)
		{
			STREAMING::REQUEST_MODEL(Global_2667225.f_45.f_69.f_66);
			if (STREAMING::HAS_MODEL_LOADED(Global_2667225.f_45.f_69.f_66))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_6132(int iParam0)//Position - 0x1EBE0C
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	struct<3> Var5;
	bVar0 = false;
	if (__LIB_2__::func_917(iParam0, &bVar0))
	{
		VEHICLE::SET_VEHICLE_FIXED(iParam0);
		__LIB_2__::func_659(iParam0);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(iParam0, 3);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
		{
			if (iVar1 == joaat("trophytruck") || iVar1 == joaat("trophytruck2"))
			{
				fVar2 = 2f;
				fVar3 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iParam0);
				if (fVar3 > fVar2)
				{
					fVar3 = fVar2;
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(iParam0, fVar3);
				}
			}
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0);
			if (__LIB_6__::func_302(PLAYER::PLAYER_ID()))
			{
				__LIB_32__::func_652(iParam0);
			}
		}
		__LIB_3__::func_208(iParam0);
		if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) > -1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(iParam0, PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), false);
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
		{
			func_5953(PLAYER::PLAYER_PED_ID(), iParam0, -1, 0);
		}
		if (Global_1836584)
		{
			__LIB_2__::func_654(iParam0);
			VEHICLE::SET_VEHICLE_NO_EXPLOSION_DAMAGE_FROM_DRIVER(iParam0, !__LIB_1__::func_141());
			if (iVar1 == joaat("ruiner2"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_CAN_TARGET_OBJECTS(iParam0, true);
			}
			if (iVar1 == joaat("blazer5"))
			{
				if (VEHICLE::GET_HAS_RETRACTABLE_WHEELS(iParam0))
				{
					if (ENTITY::IS_ENTITY_IN_WATER(iParam0) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0))
					{
						VEHICLE::SET_WHEELS_RETRACTED_INSTANTLY(iParam0);
						Global_2667225.f_2890 = 1;
					}
					else
					{
						VEHICLE::SET_WHEELS_EXTENDED_INSTANTLY(iParam0);
						Global_2667225.f_2891 = 1;
					}
				}
			}
			if (Global_2667225.f_2892)
			{
				if (iVar1 == joaat("deluxo"))
				{
					__LIB_2__::func_653(iParam0, 1);
					__LIB_2__::func_652(iParam0, 1);
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_RATIO(iParam0, (0.75f - MISC::GET_FRAME_TIME()));
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(iParam0, 1f);
					Global_2667225.f_2892 = 0;
				}
				else if (iVar1 == joaat("stromberg") && ENTITY::IS_ENTITY_IN_WATER(iParam0))
				{
					VEHICLE::TRANSFORM_TO_SUBMARINE(iParam0, true);
					Global_2667225.f_2892 = 0;
				}
			}
			if (__LIB_2__::func_651(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (Global_2667225.f_2894)
				{
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(iParam0, 1f);
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0, 1f);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 0f);
				}
				else
				{
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0, 0f);
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(iParam0, 0f);
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0, 0f);
					Global_2667225.f_2895 = 1;
					Global_2667225.f_2896 = MISC::GET_FRAME_COUNT();
					VEHICLE::SET_DISABLE_VERTICAL_FLIGHT_MODE_TRANSITION(iParam0, true);
				}
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
			}
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (BitTest(Global_4718592.f_26, 25))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iParam0))
					{
						__LIB_2__::func_650(iParam0);
					}
				}
			}
		}
		if (Global_1836588)
		{
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iParam0, false);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iParam0));
		if (__LIB_5__::func_185(PLAYER::PLAYER_ID()) == 189)
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar4 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				MISC::SET_BIT(&iVar4, 11);
				DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar4);
			}
		}
		if (BitTest(Global_4718592.f_18, 24) || (__LIB_2__::func_649() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
		{
			VEHICLE::SET_BIKE_EASY_TO_LAND(iParam0, true);
		}
	}
	if (bVar0)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
	}
	Global_2667225.f_2692 = { Var5 };
}

int func_6155(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x1ECC9E
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	float fVar3;
	bVar0 = false;
	bVar1 = false;
	if (!__LIB_0__::func_114())
	{
		if (!__LIB_0__::func_855(PLAYER::PLAYER_ID()) && !Global_2689235[PLAYER::PLAYER_ID() /*453*/] == 10)
		{
			return 0;
		}
	}
	if (!Global_2667225.f_676 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_853(0))
	{
		Global_2667225.f_680 = MISC::GET_FRAME_COUNT();
		return 0;
	}
	if (bParam10)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			bParam10 = false;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_612)
	{
		if (!Global_2667225.f_606 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_611) < __LIB_0__::func_853(0))
			{
				return 0;
			}
			else
			{
				Global_2667225.f_606 = 0;
			}
		}
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_609) > 30000)
	{
		Global_2667225.f_606 = 0;
	}
	if (Global_2667225.f_606 == 0)
	{
		Global_2667225.f_607 = 0;
		Global_2667225.f_608 = 0;
		Global_2667225.f_659 = 0;
		Global_2667225.f_609 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_612 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_606 = 1;
		Global_2667225.f_611 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_2697 = uParam5;
		Global_2667225.f_2735 = 0;
		__LIB_0__::func_851();
		if (bParam10)
		{
			__LIB_0__::func_854();
		}
	}
	switch (Global_2667225.f_606)
	{
		case 1:
			if (func_6163(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
			{
				if (Global_2667225.f_489 == 11 || Global_2667225.f_2697)
				{
					bVar0 = true;
				}
				else
				{
					__LIB_9__::func_420(Global_2667225.f_623, &(Global_2667225.f_660), iParam9, Global_2667225.f_489 == 37, iParam11);
					Global_2667225.f_657 = 0;
					Global_2667225.f_658 = 0;
					Global_2667225.f_610 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_609 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_606 = 2;
				}
			}
			break;
		case 2:
			if (Global_2667225.f_657)
			{
				if (Global_2667225.f_661 == Global_2667225.f_660)
				{
					if (Global_2667225.f_658 && !Global_2667225.f_659 == -1)
					{
						if (((Global_2667225.f_518 && !__LIB_9__::func_331()) && __LIB_9__::func_419(Global_2676213, Global_2676213.f_4, &Var2, 1)) && Global_2667225.f_2735 == 0)
						{
							func_6014(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
							__LIB_2__::func_662(-1);
						}
						else if (bParam10)
						{
							if (iParam11 != 0)
							{
								bVar1 = __LIB_2__::func_765(Global_2667225.f_623[Global_2667225.f_659 /*3*/], Global_2667225.f_623.f_16[Global_2667225.f_659], iParam11, 1, 0.5f);
								if (!bVar1)
								{
									bVar0 = true;
								}
							}
							else
							{
								if (bParam3)
								{
									fVar3 = 2f;
								}
								else
								{
									fVar3 = 0.3f;
								}
								bVar1 = __LIB_2__::func_873(Global_2667225.f_623[Global_2667225.f_659 /*3*/], fVar3);
								if (!bVar1)
								{
									bVar0 = true;
								}
							}
							if (bVar1)
							{
								Global_2667225.f_606 = 3;
								Global_2667225.f_700 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_6156(&(Global_2667225.f_623));
						__LIB_2__::func_662(-1);
					}
				}
				else
				{
					Global_2667225.f_657 = 0;
					Global_2667225.f_658 = 0;
					Global_2667225.f_659 = -1;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_610) > 3000 || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_610) < 0)
			{
				if (Global_2667225.f_608 < 3)
				{
					Global_2667225.f_608++;
					Global_2667225.f_606 = 1;
				}
				else
				{
					Global_2667225.f_606 = 4;
				}
			}
			break;
		case 3:
			if (bParam10)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_700) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_699))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2667225.f_699))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2667225.f_699))
							{
								bVar0 = true;
							}
							else
							{
								func_6014(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
								__LIB_2__::func_662(-1);
							}
						}
					}
					else
					{
						__LIB_2__::func_662(-1);
					}
				}
				else
				{
					__LIB_2__::func_662(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 4:
			if (func_6163(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
			{
				Global_2667225.f_606 = 5;
				Global_2667225.f_659 = 0;
			}
			break;
		case 5:
			bVar0 = true;
			break;
	}
	Global_2667225.f_611 = NETWORK::GET_NETWORK_TIME();
	if (bVar0)
	{
		if (Global_2667225.f_489 == 8)
		{
			Global_2667225.f_714.f_503 = Global_2667225.f_714.f_502;
		}
		if (Global_2667225.f_659 == -1)
		{
			Global_2667225.f_659 = 0;
		}
		*uParam0 = { Global_2667225.f_623[Global_2667225.f_659 /*3*/] };
		*uParam1 = Global_2667225.f_623.f_16[Global_2667225.f_659];
		if (Global_2667225.f_45.f_52)
		{
			if (Global_2667225.f_489 == 3 && SYSTEM::VMAG(Global_2667225.f_45.f_49) > 0f)
			{
				if (bParam3)
				{
				}
				else
				{
					Var2 = { Global_2667225.f_45.f_49 - *uParam0 };
					*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1);
					if (Global_2667225.f_45.f_53)
					{
						*uParam1 = (*uParam1 + 180f);
					}
					Global_2667225.f_2673 = 1;
				}
			}
		}
		Global_2667225.f_2735 = 0;
		Global_2667225.f_606 = 0;
		__LIB_0__::func_851();
		if (bParam10)
		{
			if (!__LIB_1__::func_603(PLAYER::PLAYER_ID()))
			{
				__LIB_0__::func_854();
			}
		}
		return 1;
	}
	return 0;
}

void func_6156(var uParam0)//Position - 0x1ED226
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_6014(*(uParam0[iVar0 /*3*/]), 0);
		iVar0++;
	}
}

int func_6163(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7)//Position - 0x1ED615
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	struct<3> Var13;
	struct<3> Var14;
	int iVar15;
	int iVar16;
	struct<3> Var17;
	struct<34> Var18;
	struct<13> Var19;
	int iVar20;
	struct<3> Var21;
	struct<3> Var22;
	struct<3> Var23;
	struct<3> Var24;
	struct<3> Var25[4];
	var uVar26[4];
	int iVar27[4];
	var uVar28[4];
	float fVar29;
	int iVar30;
	bool bVar31;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	int iVar37;
	int iVar38;
	bool bVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	var uVar43;
	struct<4> Var44;
	struct<4> Var45;
	int iVar46;
	int iVar47;
	struct<61> Var48;
	int iVar49;
	bVar2 = false;
	Var18 = 5;
	Var18.f_16 = 5;
	Var18.f_22 = 5;
	Var18.f_28 = 5;
	Var19 = 5;
	Var19.f_6 = 5;
	Var19.f_12 = 5;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!__LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 0))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
	{
		return 0;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_592) > 60000 || !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_591)
	{
		Global_2667225.f_587 = 0;
		Global_2667225.f_589 = 0;
		Global_2667225.f_667 = 0;
		Global_2667225.f_668 = 0;
		Global_2667225.f_2478 = 0;
		Global_2667225.f_2479 = 0;
		Global_2667225.f_2477 = 0;
	}
	if (iParam1 == 13 || Global_2667225.f_489 == 13)
	{
		if (!Global_2667225.f_2478)
		{
			if (Global_2667225.f_2477 == 0)
			{
				if (__LIB_9__::func_418(Global_2676213, 150f, 1, 1, 0, 0, 0, 0, 0))
				{
					__LIB_9__::func_421(Global_2676213);
					Global_2667225.f_2479 = 0;
					Global_2667225.f_2476 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_2477 = 1;
				}
				else
				{
					Global_2667225.f_2479 = 1;
					Global_2667225.f_2478 = 1;
					Global_2667225.f_2477 = 2;
				}
			}
			if (Global_2667225.f_2477 == 1)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2476) > 4000 || Global_2667225.f_2479 == 0)
				{
					Global_2667225.f_2478 = 1;
					Global_2667225.f_2477 = 2;
				}
				else if (Global_2667225.f_2479 == 1)
				{
					Global_2667225.f_2478 = 1;
					Global_2667225.f_2477 = 2;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	if (Global_2667225.f_587 == 0)
	{
		__LIB_2__::func_941();
		Global_2667225.f_592 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_591 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_701 = 0;
		Global_2667225.f_515 = 0;
		Global_2667225.f_520 = { Global_2667225.f_45.f_49 };
		Global_2667225.f_520.f_3 = Global_2667225.f_45.f_55;
		Global_2667225.f_520.f_4 = Global_2667225.f_45.f_58;
		Global_2667225.f_520.f_30 = __LIB_9__::func_462();
		Global_2667225.f_555.f_16 = Global_2667225.f_45.f_312;
		Global_2667225.f_555.f_15 = Global_2667225.f_45.f_65;
		Global_2667225.f_555.f_30 = Global_2667225.f_45.f_182;
		Global_2667225.f_555.f_25 = 0;
		Global_2667225.f_588 = 0;
		Global_2667225.f_520.f_13[1 /*3*/] = { Global_2667225.f_45.f_313 };
		Global_2667225.f_520.f_20[1] = Global_2667225.f_45.f_316;
		Global_2667225.f_555.f_4 = 125f;
		Global_2667225.f_2673 = 0;
		Global_2667225.f_667 = 0;
		Global_2667225.f_668 = 0;
		Global_2667225.f_590 = 0;
		if (!Global_2667225.f_45.f_52)
		{
			Global_2667225.f_45.f_49 = { 0f, 0f, 0f };
		}
		Global_2667225.f_489 = iParam1;
		if (Global_2667225.f_489 == 0 || __LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			Global_2667225.f_489 = func_6323();
		}
		if ((Global_2667225.f_45.f_65 && Global_2667225.f_45.f_304) && Global_2667225.f_489 == 16)
		{
			Global_2667225.f_489 = 5;
		}
		Global_2667225.f_2676 = 0;
		Global_2667225.f_596 = 0f;
		Global_2667225.f_45.f_304 = 0;
		if (__LIB_4__::func_934(PLAYER::PLAYER_ID(), 1))
		{
			Global_2667225.f_555.f_17 = 1;
		}
		else
		{
			Global_2667225.f_555.f_17 = 0;
		}
		Global_2667225.f_518 = 0;
		Global_2667225.f_2674 = 0;
		Global_2667225.f_555.f_27 = 0f;
		Global_2667225.f_2898 = 0f;
		if (Global_2667225.f_489 == 10)
		{
			iVar20 = __LIB_3__::func_380(Global_2676213);
			if (!iVar20 == -1)
			{
				if (__LIB_2__::func_867(iVar20))
				{
					Global_2667225.f_2855 = iVar20;
					Global_2667225.f_489 = 29;
				}
			}
		}
		if (Global_2667225.f_489 == 10)
		{
		}
		if (Global_2667225.f_489 == 10)
		{
			if (__LIB_2__::func_698())
			{
				__LIB_1__::func_633();
				Global_2667225.f_714 = 0;
				Global_2667225.f_714.f_507 = 0;
				Global_2667225.f_1753 = 1;
				Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
				__LIB_2__::func_697(-244.901f, -1872.177f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-242.269f, -1874.479f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-239.598f, -1876.816f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-247.704f, -1869.726f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-236.735f, -1879.32f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-250.483f, -1867.467f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-248.407f, -1872.989f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-245.403f, -1875.617f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-242.785f, -1877.907f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-239.945f, -1880.198f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-251.046f, -1870.666f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-248.619f, -1876.538f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-245.901f, -1878.915f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-251.704f, -1873.939f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-243.08f, -1881.227f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-254.677f, -1871.325f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-240.536f, -1883.448f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-249.174f, -1880.18f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.283f, -1877.461f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-246.515f, -1882.422f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-243.805f, -1884.522f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.306f, -1874.902f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.491f, -1881.033f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-249.84f, -1883.351f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-246.886f, -1885.774f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.641f, -1878.175f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-244.281f, -1887.739f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-258.593f, -1875.691f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.767f, -1884.144f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.851f, -1881.482f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-249.88f, -1886.704f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-247.44f, -1888.838f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-258.886f, -1878.827f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.952f, -1884.801f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.956f, -1887.422f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.415f, -1881.773f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-250.369f, -1889.685f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-247.647f, -1892.065f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-262.138f, -1879.391f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-262.407f, -1882.811f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.277f, -1885.549f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-256.124f, -1888.094f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-253.225f, -1890.3f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-250.782f, -1892.779f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.683f, -1889.221f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-256.577f, -1891.824f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.24f, -1886.216f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-253.867f, -1894.197f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-251.258f, -1896.412f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-265.974f, -1883.944f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-262.935f, -1890.089f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.884f, -1892.674f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-256.943f, -1895.166f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-254.535f, -1897.206f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.469f, -1887.118f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.243f, -1893.539f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.093f, -1896.223f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.754f, -1890.547f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-257.35f, -1898.561f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-254.516f, -1900.976f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-269.729f, -1888.013f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.428f, -1894.181f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.278f, -1896.865f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.367f, -1899.345f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-269.969f, -1891.167f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-257.512f, -1901.782f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.696f, -1897.666f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.54f, -1900.354f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.638f, -1902.827f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-270.469f, -1894.45f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-267.222f, -1901.522f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-270.747f, -1898.559f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-264.211f, -1904.128f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.75f, -1907.078f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-274.372f, -1895.47f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-271.19f, -1902.058f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-268.033f, -1904.748f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-264.135f, -1908.07f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-275.113f, -1898.959f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-271.775f, -1906.207f, 26.755f, 320.797f, 1065353216);
				Global_2667225.f_489 = 8;
				bVar39 = true;
			}
		}
		if (Global_2667225.f_489 == 47)
		{
			__LIB_1__::func_633();
			Global_2667225.f_714 = 0;
			Global_2667225.f_714.f_507 = 0;
			Global_2667225.f_1753 = 1;
			Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
			__LIB_2__::func_697(975.7955f, 89.2188f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(974.2166f, 85.8614f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(971.4763f, 91.6587f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(966.8154f, 94.2058f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(963.103f, 96.5164f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(969.834f, 88.5924f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(968.1555f, 85.3428f, 79.9886f, 327.1991f, 1065353216);
			__LIB_2__::func_697(965.324f, 82.3137f, 79.783f, 327.1991f, 1065353216);
			__LIB_2__::func_697(960.2003f, 80.9701f, 79.7694f, 267.1988f, 1065353216);
			__LIB_2__::func_697(953.6874f, 82.8776f, 79.7694f, 243.1988f, 1065353216);
			__LIB_2__::func_697(947.6548f, 86.1658f, 79.7688f, 243.1988f, 1065353216);
			__LIB_2__::func_697(946.0387f, 82.9043f, 79.7687f, 243.1988f, 1065353216);
			__LIB_2__::func_697(944.2261f, 88.6068f, 79.7694f, 243.1988f, 1065353216);
			__LIB_2__::func_697(939.5576f, 94.646f, 78.3392f, 229.9987f, 1065353216);
			__LIB_2__::func_697(935.759f, 96.2394f, 78.2388f, 229.9987f, 1065353216);
			__LIB_2__::func_697(944.3122f, 79.7098f, 79.7572f, 323.1983f, 1065353216);
			__LIB_2__::func_697(941.9835f, 75.9773f, 79.615f, 323.1983f, 1065353216);
			__LIB_2__::func_697(939.4975f, 71.6506f, 79.4041f, 323.1983f, 1065353216);
			__LIB_2__::func_697(936.4024f, 66.9599f, 79.1841f, 323.1983f, 1065353216);
			__LIB_2__::func_697(942.0676f, 92.2227f, 78.9701f, 215.598f, 1065353216);
			__LIB_2__::func_697(927.3275f, 77.3361f, 77.7679f, 321.5972f, 1065353216);
			__LIB_2__::func_697(925.1186f, 73.9533f, 78.0651f, 321.5972f, 1065353216);
			__LIB_2__::func_697(922.8524f, 70.4011f, 78.7589f, 321.5972f, 1065353216);
			__LIB_2__::func_697(920.554f, 66.8094f, 79.4079f, 321.5972f, 1065353216);
			__LIB_2__::func_697(963.9402f, 100.739f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(965.7116f, 103.4286f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(967.3428f, 106.3218f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(969.3038f, 109.405f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(971.3239f, 112.691f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(973.8073f, 116.3687f, 79.9907f, 148.5968f, 1065353216);
			Global_2667225.f_489 = 8;
			bVar39 = true;
		}
		if (Global_2667225.f_489 == 52)
		{
			__LIB_1__::func_633();
			Global_2667225.f_714 = 0;
			Global_2667225.f_714.f_507 = 0;
			Global_2667225.f_1753 = 1;
			Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
			__LIB_2__::func_697(4915.7783f, -4909.681f, 2.3612f, 103.8461f, 1065353216);
			__LIB_2__::func_697(4909.4385f, -4906.013f, 2.3634f, 109.708f, 1065353216);
			__LIB_2__::func_697(4904.6245f, -4901.7183f, 2.3729f, 137.2815f, 1065353216);
			__LIB_2__::func_697(4917.557f, -4913.6855f, 2.3654f, 91.1262f, 1065353216);
			__LIB_2__::func_697(4907.624f, -4916.6104f, 2.3844f, 77.3005f, 1065353216);
			__LIB_2__::func_697(4908.8486f, -4927.182f, 2.3643f, 97.1531f, 1065353216);
			__LIB_2__::func_697(4904.1626f, -4933.243f, 2.3827f, 191.0743f, 1065353216);
			__LIB_2__::func_697(4899.703f, -4939.501f, 2.3622f, 91.3685f, 1065353216);
			__LIB_2__::func_697(4891.084f, -4934.5527f, 2.371f, 6.1066f, 1065353216);
			__LIB_2__::func_697(4895.8794f, -4930.5977f, 2.3695f, 21.2846f, 1065353216);
			__LIB_2__::func_697(4899.386f, -4926.6353f, 2.3645f, 21.563f, 1065353216);
			__LIB_2__::func_697(4894.8906f, -4926.3525f, 2.3615f, 359.2048f, 1065353216);
			__LIB_2__::func_697(4890.1616f, -4923.4365f, 2.3687f, 331.7434f, 1065353216);
			__LIB_2__::func_697(4895.319f, -4919.933f, 2.3677f, 350.2109f, 1065353216);
			__LIB_2__::func_697(4893.8384f, -4915.3374f, 2.3677f, 359.7902f, 1065353216);
			__LIB_2__::func_697(4899.7866f, -4914.1606f, 2.3602f, 27.4791f, 1065353216);
			__LIB_2__::func_697(4902.5293f, -4910.4746f, 2.3611f, 49.2944f, 1065353216);
			__LIB_2__::func_697(4891.711f, -4908.211f, 2.3643f, 323.4907f, 1065353216);
			__LIB_2__::func_697(4885.5215f, -4908.0737f, 2.3678f, 269.5604f, 1065353216);
			__LIB_2__::func_697(4887.267f, -4914.138f, 2.3628f, 310.3737f, 1065353216);
			__LIB_2__::func_697(4877.007f, -4914.598f, 2.2139f, 115.4889f, 1065353216);
			__LIB_2__::func_697(4871.36f, -4908.873f, 1.9205f, 105.6631f, 1065353216);
			__LIB_2__::func_697(4867.8022f, -4916.4653f, 1.5922f, 103.4375f, 1065353216);
			__LIB_2__::func_697(4871.824f, -4926.4834f, 2.0005f, 201.6436f, 1065353216);
			__LIB_2__::func_697(4871.41f, -4929.5703f, 1.9024f, 321.9481f, 1065353216);
			__LIB_2__::func_697(4868.713f, -4935.9365f, 1.4152f, 66.3723f, 1065353216);
			__LIB_2__::func_697(4866.783f, -4942.452f, 1.4781f, 77.1681f, 1065353216);
			__LIB_2__::func_697(4863.705f, -4950.777f, 1.4398f, 58.9161f, 1065353216);
			__LIB_2__::func_697(4859.92f, -4941.887f, 0.5639f, 76.0326f, 1065353216);
			__LIB_2__::func_697(4861.563f, -4927.4663f, 0.3028f, 90.8218f, 1065353216);
			__LIB_2__::func_697(4861.4985f, -4916.6597f, 0.3063f, 87.146f, 1065353216);
			__LIB_2__::func_697(4893.1226f, -4902.395f, 2.4867f, 189.5973f, 1065353216);
			__LIB_2__::func_697(4896.938f, -4903.806f, 2.3717f, 152.5383f, 1065353216);
			__LIB_2__::func_697(4927.5137f, -4907.376f, 2.5188f, 114.7115f, 1065353216);
			Global_2667225.f_489 = 8;
			bVar39 = true;
		}
		switch (Global_2667225.f_489)
		{
			case 57:
				__LIB_12__::func_50(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 58:
				__LIB_12__::func_49(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 9:
				__LIB_10__::func_757(&Global_1574067, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 8:
				if (!Global_2667225.f_1753)
				{
					Global_2667225.f_1753 = 1;
				}
				Var19 = { func_6314(bParam2) };
				iVar0 = 0;
				while (iVar0 < 5)
				{
					if (iVar0 == 0)
					{
						if (Var19[iVar0] > -1)
						{
							Global_2667225.f_555 = { Global_2667225.f_714.f_1[Var19[iVar0] /*5*/] };
							Global_2667225.f_555.f_3 = Global_2667225.f_714.f_1[Var19[iVar0] /*5*/].f_3;
							Global_2667225.f_714.f_502 = Var19[0];
							bVar2 = true;
							iParam4 = 1;
							Var18.f_28[iVar0] = Var19.f_12[iVar0];
						}
						else
						{
							Global_2667225.f_555 = { Global_2667225.f_714.f_1[0 /*5*/] };
							Global_2667225.f_555.f_3 = Global_2667225.f_714.f_1[0 /*5*/].f_3;
							Global_2667225.f_520.f_6 = 1;
							Global_2667225.f_555.f_4 = 150f;
						}
					}
					else if (Var19[iVar0] > -1)
					{
						Var18[iVar0 /*3*/] = { Global_2667225.f_714.f_1[Var19[iVar0] /*5*/] };
						Var18.f_16[iVar0] = Global_2667225.f_714.f_1[Var19[iVar0] /*5*/].f_3;
						Var18.f_28[iVar0] = Var19.f_12[iVar0];
					}
					iVar0++;
				}
				if (bVar39)
				{
					__LIB_2__::func_892();
				}
				break;
			case 7:
				Global_2667225.f_555 = { 23.6269f, -17.1858f, 0.0025f };
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_2697 = 1;
				bVar2 = true;
				break;
			case 12:
				__LIB_10__::func_757(&Global_1574100, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1123024896);
				bVar2 = true;
				break;
			case 51:
				__LIB_2__::func_938();
				Global_2667225.f_593 = { Global_2667225.f_512 };
				Var17.f_2 = Global_2667225.f_512.f_2;
				__LIB_2__::func_891(&(Global_2667225.f_512), Global_1574465, Global_1574465.f_1, 0f, Global_1574468, Global_1574471, 1036831949, 1048576000);
				Global_2667225.f_512.f_2 = Var17.f_2;
				if (Global_2667225.f_512.f_2 > 70f)
				{
					Global_2667225.f_512.f_2 = 70f;
				}
				if (Global_2667225.f_512.f_2 < 0f)
				{
					Global_2667225.f_512.f_2 = 0f;
				}
				Var17 = { Global_2667225.f_512 };
				if (Var17.f_2 < 0f)
				{
					Var17.f_2 = 0f;
				}
				Var17.f_2 = (Var17.f_2 + 5f);
				Global_2667225.f_520.f_23 = { 0f, 10000000f, Var17.f_2 };
				Global_2667225.f_520.f_26 = { 0f, -10000000f, 99999.9f };
				Global_2667225.f_520.f_29 = 1E+09f;
				if (__LIB_8__::func_917(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_596 = Global_2667225.f_45.f_308;
				}
				else
				{
					Global_2667225.f_596 = 30f;
				}
				Global_2667225.f_555 = { Global_2667225.f_512 };
				Global_2667225.f_555.f_18 = { Global_2667225.f_512 };
				Global_2667225.f_555.f_21 = 1;
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_555.f_4 = 0f;
				Global_2667225.f_555.f_7 = 2;
				Global_2667225.f_555.f_8 = { Global_1574465 };
				Global_2667225.f_555.f_11 = { Global_1574468 };
				Global_2667225.f_555.f_14 = Global_1574471;
				Global_2667225.f_555.f_28 = 0;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				break;
			case 1:
				Var17 = { Global_2667225.f_512 };
				iVar38 = __LIB_1__::func_557(Var17, 0);
				if (iVar38 > -1)
				{
					if (Global_2672169[iVar38 /*17*/].f_9 == 0)
					{
						__LIB_2__::func_693(&Var17, &(Global_2672169[iVar38 /*17*/]), 135f);
					}
				}
				if (Global_2715699.f_6597)
				{
					Var17 = { Global_2715699.f_6598 };
				}
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
				{
					iVar15 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
					Var17 = { Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/] };
				}
				if (Global_1888188 > -1)
				{
					if (__LIB_1__::func_693(Global_1888188, 0, 1))
					{
						if (__LIB_9__::func_493(Global_1888188))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_1__::func_694(Global_1888188) };
							if (!__LIB_4__::func_934(PLAYER::PLAYER_ID(), 1))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(Global_1888188), false))
								{
									Global_2667225.f_520.f_20[0] = 250f;
								}
								else
								{
									Global_2667225.f_520.f_20[0] = 125f;
								}
							}
							else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(Global_1888188), false))
							{
								Global_2667225.f_520.f_20[0] = 125f;
							}
							else
							{
								Global_2667225.f_520.f_20[0] = 75f;
							}
						}
					}
				}
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (__LIB_0__::func_828(Var17, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1, 1))
					{
						__LIB_1__::func_450(&Var17, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1036831949, 0, 0);
					}
					iVar0++;
				}
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var17, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, false, true))
				{
					__LIB_1__::func_449(&Var17, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, 1036831949, 0);
				}
				Global_2667225.f_555 = { Var17 };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				if (Global_2667225.f_45.f_307 > -1f)
				{
					Global_2667225.f_520.f_5 = Global_2667225.f_45.f_307;
				}
				if (__LIB_8__::func_917(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_596 = Global_2667225.f_45.f_308;
				}
				else
				{
					Global_2667225.f_596 = 40f;
				}
				fVar12 = (Global_2667225.f_520.f_5 - 65f);
				if (fVar12 < 0f)
				{
					fVar12 = 0f;
				}
				if (__LIB_8__::func_917(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_555.f_4 = (120f + fVar12);
				}
				else
				{
					Global_2667225.f_555.f_4 = (135f + fVar12);
				}
				Global_2667225.f_555.f_4 = ((95f + Global_2667225.f_596) + fVar12);
				if (Global_2667225.f_555.f_4 > 250f)
				{
					Global_2667225.f_555.f_4 = 250f;
				}
				Global_2667225.f_593 = { Global_2667225.f_512 };
				fVar12 = (Global_2667225.f_555.f_4 * 0.5f);
				if (fVar12 < Global_2667225.f_520.f_5)
				{
					fVar12 = Global_2667225.f_520.f_5;
				}
				Var13 = { __LIB_9__::func_746(Global_2667225.f_555, fVar12) };
				if (SYSTEM::VMAG(Var13) > 0f)
				{
					Var13.f_2 = Global_2667225.f_555.f_2;
					Var14 = { Global_2667225.f_555 - Var13 };
					Var14 = { Var14 / FtoV(SYSTEM::VMAG(Var14)) };
					Var14 = { Var14 * Vector(fVar12, fVar12, fVar12) };
					Global_2667225.f_555 = { Global_2667225.f_555 + Var14 };
				}
				if (func_6304(&(Global_2667225.f_555), 1))
				{
				}
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					iVar42 = __LIB_2__::func_691(&iVar41);
					if (iVar42 < 17)
					{
						if (BitTest(Global_4718592.f_658[iVar41 /*22957*/].f_7965[iVar42], 12) && (!Global_1574981 || BitTest(Global_4718592.f_658[iVar41 /*22957*/].f_7965[iVar42], 13)))
						{
							iVar40 = 1;
						}
					}
				}
				if (__LIB_8__::func_918() || iVar40)
				{
					Global_2667225.f_555.f_4 = 400f;
					Global_2667225.f_596 = 100f;
					bParam2 = true;
				}
				break;
			case 20:
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var14 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				}
				else
				{
					Var14 = { Global_2667225.f_512 };
				}
				Global_2667225.f_593 = { Var14 };
				Global_2667225.f_596 = 125f;
				if (func_6304(&Var14, 1))
				{
				}
				if (Global_1836579)
				{
					if (Global_1836068.f_14 != __LIB_0__::getMinusOneOrNull())
					{
						if (__LIB_1__::func_693(Global_1836068.f_14, 0, 1))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_1__::func_694(Global_1836068.f_14) };
							if (__LIB_8__::func_918())
							{
								Global_2667225.f_520.f_20[0] = 250f;
							}
							else
							{
								Global_2667225.f_520.f_20[0] = 125f;
							}
						}
					}
				}
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (__LIB_0__::func_828(Var14, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1, 1))
					{
						__LIB_1__::func_450(&Var14, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1036831949, 0, 0);
					}
					iVar0++;
				}
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var14, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, false, true))
				{
					__LIB_1__::func_449(&Var14, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, 1036831949, 0);
				}
				Global_2667225.f_555 = { Var14 };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_555.f_4 = 250f;
				if (Global_2667225.f_520.f_3)
				{
					if (!INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Global_2667225.f_512)))
					{
						Global_2667225.f_520.f_3 = 0;
					}
				}
				if (__LIB_8__::func_918())
				{
					Global_2667225.f_555.f_4 = 400f;
					Global_2667225.f_596 = 100f;
					bParam2 = true;
				}
				break;
			case 2:
				Global_2667225.f_555 = { __LIB_8__::func_272() };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 26:
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					iVar9 = __LIB_2__::func_890(__LIB_1__::func_694(PLAYER::PLAYER_ID()));
				}
				else
				{
					iVar9 = __LIB_2__::func_890(Global_2667225.f_512);
				}
				__LIB_2__::func_690(&(Global_2667225.f_45[iVar9 /*12*/]));
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_555.f_18 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				}
				else
				{
					Global_2667225.f_555.f_18 = { Global_2667225.f_512 };
				}
				if (__LIB_8__::func_917(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_596 = Global_2667225.f_45.f_308;
				}
				else
				{
					Global_2667225.f_596 = 40f;
				}
				Global_2667225.f_593 = { Global_2667225.f_555.f_18 };
				Var21 = { Global_2667225.f_555.f_18 };
				switch (Global_2667225.f_45[iVar9 /*12*/].f_10)
				{
					case 0:
						fVar29 = Global_2667225.f_45[iVar9 /*12*/].f_6;
						fVar29 = (fVar29 * 0.5f);
						break;
					case 1:
						fVar29 = SYSTEM::VMAG(Global_2667225.f_45[iVar9 /*12*/] - Global_2667225.f_45[iVar9 /*12*/].f_3);
						fVar29 = (fVar29 * 0.5f);
						fVar29 = (fVar29 * 0.5f);
						break;
					case 2:
						fVar29 = Global_2667225.f_45[iVar9 /*12*/].f_6;
						fVar29 = (fVar29 * 0.5f);
						fVar29 = (fVar29 * 0.5f);
						break;
				}
				if (!__LIB_1__::func_528(Var21, &(Global_2667225.f_45[iVar9 /*12*/]), 1008981770, 0, 0))
				{
					__LIB_3__::func_182(&Var21, &(Global_2667225.f_45[iVar9 /*12*/]), fVar29);
				}
				if (Global_2667225.f_45.f_307 > -1f)
				{
					Global_2667225.f_520.f_5 = Global_2667225.f_45.f_307;
				}
				fVar12 = 1f;
				if (Global_2667225.f_520.f_5 < 200f)
				{
					fVar12 = 1.5f;
				}
				else if (Global_2667225.f_520.f_5 < 300f)
				{
					fVar12 = (1f + (((300f - Global_2667225.f_520.f_5) / 100f) * 0.5f));
				}
				fVar35 = (Global_2667225.f_520.f_5 * fVar12);
				iVar30 = __LIB_9__::func_770(Var21, fVar35, &uVar43);
				if (iVar30 > 0 || Global_2667225.f_555.f_15)
				{
					if (Global_2667225.f_555.f_15)
					{
						Var21 = { __LIB_9__::func_975(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 1, &(Global_2667225.f_555.f_25)) };
						if (!Global_2667225.f_555.f_25)
						{
							Var21 = { __LIB_9__::func_975(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 0, &(Global_2667225.f_555.f_25)) };
						}
						Global_2667225.f_596 = 0f;
						fVar36 = 40f;
					}
					else
					{
						bVar31 = false;
						Var22 = { __LIB_9__::func_745(Var21, fVar35) };
						Var23 = { __LIB_9__::func_744(Var21, fVar35) };
						Var24 = { Var21 - Var22 };
						Var24 = { Var24 / FtoV(SYSTEM::VMAG(Var24)) };
						Var24 = { Var24 * Vector(fVar35, fVar35, fVar35) };
						iVar0 = 0;
						while (iVar0 < 4)
						{
							Var14 = { Var24 };
							__LIB_0__::func_817(&Var14, 0f, 0f, (SYSTEM::TO_FLOAT(iVar0) * 90f));
							Var25[iVar0 /*3*/] = { Var22 + Var14 };
							if (!__LIB_1__::func_528(Var25[iVar0 /*3*/], &(Global_2667225.f_45[iVar9 /*12*/]), 1008981770, 0, 0))
							{
								__LIB_3__::func_182(&(Var25[iVar0 /*3*/]), &(Global_2667225.f_45[iVar9 /*12*/]), 1036831949);
							}
							uVar26[iVar0] = __LIB_9__::func_770(Var25[iVar0 /*3*/], fVar35, &(uVar28[iVar0]));
							Var14 = { Var22 - Var25[iVar0 /*3*/] };
							if (__LIB_0__::func_158(Var14, Var23) < 0f)
							{
								iVar27[iVar0] = 1;
							}
							else
							{
								iVar27[iVar0] = 0;
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if ((uVar26[iVar0] == 0 && iVar27[iVar0] == 0) && !bVar31)
							{
								Var21 = { Var25[iVar0 /*3*/] };
								bVar31 = true;
							}
							iVar0++;
						}
						if (!bVar31)
						{
							iVar0 = 0;
							while (iVar0 < 4)
							{
								if (uVar26[iVar0] == 0 && !bVar31)
								{
									Var21 = { Var25[iVar0 /*3*/] };
									bVar31 = true;
								}
								iVar0++;
							}
						}
						if (!bVar31)
						{
							iVar32 = 999;
							iVar33 = -1;
							iVar0 = 0;
							while (iVar0 < 4)
							{
								if (uVar26[iVar0] < iVar32)
								{
									iVar33 = iVar0;
									fVar34 = uVar28[iVar0];
									iVar32 = uVar26[iVar0];
								}
								else if (uVar26[iVar0] == iVar32)
								{
									if (uVar28[iVar0] > fVar34)
									{
										fVar34 = uVar28[iVar0];
										iVar33 = iVar0;
									}
								}
								iVar0++;
							}
							if (!iVar33 == -1 && iVar32 < iVar30)
							{
								Var21 = { Var25[iVar33 /*3*/] };
								bVar31 = true;
							}
						}
						if (!bVar31)
						{
						}
						else
						{
							Global_2667225.f_596 = 0f;
						}
					}
				}
				Global_2667225.f_555.f_18 = { Var21 };
				Global_2667225.f_555.f_21 = 1;
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 3:
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_2__::func_687());
				__LIB_2__::func_690(&(Global_2667225.f_45[iVar0 /*12*/]));
				if (func_6058(&(Global_2667225.f_555), 0, 0, 0, 1))
				{
					Global_2667225.f_515 = 1;
				}
				break;
			case 15:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_2667225.f_512 };
				}
				else
				{
					Var17 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				}
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
				{
					iVar15 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
					Var17 = { Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/] };
				}
				fVar10 = __LIB_2__::func_686(Var17, &Global_2671974, &iVar7);
				if (__LIB_2__::func_771(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 29)
					{
						iVar15 = __LIB_2__::func_771(iVar0, -1);
						if (Global_1312193[iVar15 /*1951*/].f_34 == 0 || Global_1312193[iVar15 /*1951*/].f_34 == 3)
						{
							if (fVar11 == 0f || fVar11 > SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]))
							{
								fVar11 = SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]);
								iVar8 = iVar15;
							}
						}
						else if (fVar11 == 0f)
						{
							fVar11 = 999999.9f;
						}
						iVar0++;
					}
				}
				else
				{
					fVar11 = 999999.9f;
				}
				if (fVar11 < 10000f && fVar11 < fVar10)
				{
					switch (Global_1312193[iVar8 /*1951*/].f_34)
					{
						case 0:
							__LIB_3__::func_394(iVar8, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
							Global_2667225.f_2678 = 0;
							break;
						case 1:
							Global_2667225.f_555 = { Global_1312193[iVar8 /*1951*/].f_1742.f_20 };
							Global_2667225.f_555.f_3 = Global_1312193[iVar8 /*1951*/].f_1742.f_23;
							if (Global_2667225.f_607 == 0)
							{
								Global_2667225.f_2678 = 1;
							}
							Global_2667225.f_2697 = 1;
							break;
					}
					bVar2 = true;
					if (Global_2667225.f_607 == 0)
					{
						Global_2667225.f_2677 = 1;
					}
					Global_2667225.f_2676 = 1;
				}
				else if (fVar10 < fVar11)
				{
					if (iVar7 > -1)
					{
						__LIB_2__::func_690(&(Global_2671974[iVar7 /*12*/]));
					}
					else
					{
						__LIB_2__::func_690(&(Global_2671974[0 /*12*/]));
					}
					Global_2667225.f_2696 = 1;
				}
				Global_2667225.f_701 = 1;
				break;
			case 23:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_2667225.f_512 };
				}
				else
				{
					Var17 = { func_6286(PLAYER::PLAYER_ID()) };
				}
				fVar10 = __LIB_2__::func_686(Var17, &Global_2671974, &iVar7);
				if (iVar7 > -1)
				{
					__LIB_2__::func_690(&(Global_2671974[iVar7 /*12*/]));
				}
				else
				{
					__LIB_2__::func_690(&(Global_2671974[0 /*12*/]));
				}
				Global_2667225.f_2696 = 1;
				Global_2667225.f_701 = 1;
				break;
			case 25:
				Var17 = { Global_2676213 };
				fVar11 = __LIB_2__::func_686(Var17, &Global_2672120, &iVar8);
				if (iVar8 > -1)
				{
					__LIB_2__::func_690(&(Global_2672120[iVar8 /*12*/]));
				}
				else
				{
					__LIB_2__::func_690(&(Global_2672120[0 /*12*/]));
				}
				Global_2667225.f_701 = 1;
				break;
			case 24:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_2667225.f_512 };
				}
				else
				{
					Var17 = { func_6286(PLAYER::PLAYER_ID()) };
				}
				fVar10 = __LIB_2__::func_686(Var17, &Global_2672035, &iVar7);
				if (iVar7 > -1)
				{
					__LIB_2__::func_690(&(Global_2672035[iVar7 /*12*/]));
				}
				else
				{
					__LIB_2__::func_690(&(Global_2672035[0 /*12*/]));
				}
				Global_2667225.f_701 = 1;
				break;
			case 22:
				Var17 = { Global_2676213 };
				fVar10 = __LIB_2__::func_686(Var17, &Global_2671974, &iVar7);
				if (__LIB_2__::func_771(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 29)
					{
						iVar15 = __LIB_2__::func_771(iVar0, -1);
						if (Global_1312193[iVar15 /*1951*/].f_34 == 0 || Global_1312193[iVar15 /*1951*/].f_34 == 3)
						{
							if (fVar11 == 0f || fVar11 > SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]))
							{
								fVar11 = SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]);
								iVar8 = iVar15;
							}
						}
						else if (fVar11 == 0f)
						{
							fVar11 = 999999.9f;
						}
						iVar0++;
					}
				}
				else
				{
					fVar11 = 999999.9f;
				}
				if (fVar11 < 10000f && fVar11 < fVar10)
				{
					switch (Global_1312193[iVar8 /*1951*/].f_34)
					{
						case 0:
							__LIB_3__::func_394(iVar8, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
							Global_2667225.f_2678 = 0;
							break;
						case 1:
							if (Global_2667225.f_607 == 0)
							{
								Global_2667225.f_2678 = 1;
							}
							Global_2667225.f_555 = { Global_1312193[iVar8 /*1951*/].f_1742.f_20 };
							Global_2667225.f_555.f_3 = Global_1312193[iVar8 /*1951*/].f_1742.f_23;
							Global_2667225.f_2697 = 1;
							break;
					}
					bVar2 = true;
					if (Global_2667225.f_607 == 0)
					{
						Global_2667225.f_2677 = 1;
					}
					Global_2667225.f_2676 = 1;
				}
				else if (fVar10 < fVar11)
				{
					if (iVar7 > -1)
					{
						__LIB_2__::func_690(&(Global_2671974[iVar7 /*12*/]));
					}
					else
					{
						__LIB_2__::func_690(&(Global_2671974[0 /*12*/]));
					}
					Global_2667225.f_2696 = 1;
				}
				Global_2667225.f_701 = 1;
				break;
			case 17:
				if (Global_2674954 > 0)
				{
					iVar16 = Global_2674954;
				}
				else
				{
					iVar16 = __LIB_3__::func_232();
				}
				Global_2674954 = 0;
				if (!iVar16 > 0)
				{
				}
				iVar15 = iVar16;
				Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_1742.f_20 };
				Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_1742.f_23;
				Global_2667225.f_2697 = 1;
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2678 = 1;
				}
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 18:
				if (Global_2674954 > 0)
				{
					iVar16 = Global_2674954;
				}
				else
				{
					iVar16 = __LIB_3__::func_232();
				}
				Global_2674954 = 0;
				if (iVar16 <= 0)
				{
				}
				iVar15 = iVar16;
				switch (Global_1312193[iVar15 /*1951*/].f_34)
				{
					case 0:
					case 3:
						__LIB_3__::func_394(iVar15, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
						Global_2667225.f_2678 = 0;
						break;
					case 1:
					case 5:
						if (Global_2667225.f_607 == 0)
						{
							Global_2667225.f_2678 = 1;
						}
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_1742.f_20 };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_1742.f_23;
						Global_2667225.f_2697 = 1;
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 34:
				if (__LIB_9__::func_782())
				{
					iVar20 = __LIB_1__::func_780(__LIB_0__::func_797());
					if (iVar20 <= 0)
					{
					}
					__LIB_3__::func_259(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
					bVar2 = true;
					Global_2667225.f_701 = 1;
				}
				else
				{
					Global_2667225.f_555 = { func_6286(__LIB_0__::func_797()) };
					Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				}
				break;
			case 27:
				iVar20 = __LIB_2__::func_745();
				if (iVar20 <= 0)
				{
				}
				__LIB_3__::func_259(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
				bVar2 = true;
				Global_2667225.f_701 = 1;
				break;
			case 29:
				if (Global_2667225.f_2855 < 0)
				{
				}
				__LIB_3__::func_259(Global_2667225.f_2855, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
				bVar2 = true;
				Global_2667225.f_701 = 1;
				break;
			case 30:
				if (Global_2667225.f_2855 < 0)
				{
				}
				__LIB_3__::func_179(0, Global_2667225.f_2855, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1);
				Global_2667225.f_555.f_4 = 150f;
				Global_2667225.f_555.f_7 = 0;
				Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_14 = 0f;
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 12f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_520.f_4 = 1;
				Global_2667225.f_520.f_3 = 0;
				Global_2667225.f_555.f_16 = 1;
				Global_2667225.f_520.f_5 = 5f;
				Global_2667225.f_555.f_22 = 0;
				Global_2667225.f_515 = 0;
				break;
			case 28:
				iVar20 = __LIB_2__::func_745();
				switch (Global_4196263[iVar20 /*2012*/].f_34)
				{
					case 2:
						switch (__LIB_1__::func_670())
						{
							case 4:
								Global_2667225.f_555 = { Global_4196263[iVar20 /*2012*/].f_146.f_82[4 /*102*/] };
								Global_2667225.f_555.f_3 = Global_4196263[iVar20 /*2012*/].f_146.f_82[4 /*102*/].f_3;
								break;
							case 5:
								Global_2667225.f_555 = { Global_4196263[iVar20 /*2012*/].f_146.f_82[1 /*102*/] };
								Global_2667225.f_555.f_3 = Global_4196263[iVar20 /*2012*/].f_146.f_82[1 /*102*/].f_3;
								break;
							default:
								__LIB_3__::func_283(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
								break;
						}
						Global_2667225.f_2678 = 0;
						break;
				}
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30), 4);
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2679 = 1;
				Global_2667225.f_2676 = 1;
				break;
			case 19:
				iVar16 = __LIB_3__::func_232();
				if (iVar16 <= 0)
				{
				}
				if (iVar16 > 128)
				{
					iVar16 = Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1303;
				}
				if (iVar16 > 128)
				{
					iVar16 = 0;
				}
				iVar15 = iVar16;
				switch (Global_1312193[iVar15 /*1951*/].f_34)
				{
					case 0:
					case 3:
						switch (__LIB_1__::func_670())
						{
							case 4:
								Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/] };
								Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/].f_3;
								break;
							case 5:
								Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[1 /*102*/] };
								Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[1 /*102*/].f_3;
								break;
							default:
								__LIB_3__::func_394(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
								break;
						}
						Global_2667225.f_2678 = 0;
						break;
					case 1:
					case 5:
						if (Global_2667225.f_607 == 0)
						{
							Global_2667225.f_2678 = 1;
						}
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_1742.f_20 };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_1742.f_23;
						Global_2667225.f_2697 = 1;
						break;
				}
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30), 4);
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 35:
				iVar16 = __LIB_2__::func_771(5, -1);
				if (iVar16 <= 0)
				{
				}
				else
				{
					__LIB_2__::func_682(iVar16);
				}
				iVar15 = iVar16;
				switch (__LIB_1__::func_670())
				{
					case 4:
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/] };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/].f_3;
						break;
					case 5:
						__LIB_3__::func_210(iVar15, 612, &Var44, __LIB_2__::func_681(iVar15), 0);
						Global_2667225.f_555 = { Var44 };
						Global_2667225.f_555.f_3 = Var44.f_3.f_2;
						break;
					default:
						__LIB_3__::func_394(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 36:
				iVar16 = __LIB_2__::func_771(6, -1);
				if (iVar16 <= 0)
				{
					if (Global_2667225.f_2684 == 0)
					{
					}
				}
				else
				{
					__LIB_2__::func_682(iVar16);
				}
				if (Global_2667225.f_2685 > -1)
				{
					iVar16 = Global_2667225.f_2685;
					Global_2667225.f_2685 = -1;
				}
				iVar15 = iVar16;
				switch (__LIB_1__::func_670())
				{
					case 5:
						__LIB_3__::func_210(iVar15, 612, &Var45, __LIB_2__::func_681(iVar15), 0);
						Global_2667225.f_555 = { Var45 };
						Global_2667225.f_555.f_3 = Var45.f_3.f_2;
						break;
					case 6:
						__LIB_3__::func_210(iVar15, 912, &Var45, __LIB_2__::func_681(iVar15), 0);
						Global_2667225.f_555 = { Var45 };
						Global_2667225.f_555.f_3 = Var45.f_3.f_2;
						break;
					default:
						__LIB_3__::func_394(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 39:
			case 40:
			case 41:
			case 42:
			case 43:
			case 44:
			case 45:
			case 46:
			case 48:
			case 49:
			case 50:
			case 54:
			case 55:
			case 56:
			case 59:
				switch (__LIB_1__::func_670())
				{
					case 5:
						if (Global_2667225.f_489 == 39)
						{
							Global_2667225.f_555 = { 959.4153f, -3005.433f, -40.6349f };
							Global_2667225.f_555.f_3 = 288.1089f;
						}
						else if (Global_2667225.f_489 == 40)
						{
							Global_2667225.f_555 = { 905.5001f, -3200.1077f, -98.1879f };
							Global_2667225.f_555.f_3 = 190.2091f;
						}
						else if (Global_2667225.f_489 == 41)
						{
							Global_2667225.f_555 = { -1235.6235f, -2984.2317f, -42.2601f };
							Global_2667225.f_555.f_3 = 189.5472f;
						}
						else if (Global_2667225.f_489 == 42)
						{
							Global_2667225.f_555 = { 368.9986f, 4822.7114f, -59.9797f };
							Global_2667225.f_555.f_3 = 313.7473f;
						}
						else if (Global_2667225.f_489 == 43)
						{
							Global_2667225.f_555 = { -1614.179f, -3019.259f, -75.18f };
							Global_2667225.f_555.f_3 = 135f;
						}
						else if (Global_2667225.f_489 == 44)
						{
							Global_2667225.f_555 = { 208.8848f, 5164.2656f, -89.1985f };
							Global_2667225.f_555.f_3 = 97.78f;
						}
						else if (Global_2667225.f_489 == 46)
						{
							Global_2667225.f_555 = { 970.7293f, 78.29094f, 115.1642f };
							Global_2667225.f_555.f_3 = 236.0848f;
						}
						else if (Global_2667225.f_489 == 48)
						{
							Global_2667225.f_555 = { 2723.0068f, -368.7443f, -56.3809f };
							Global_2667225.f_555.f_3 = 267.6547f;
						}
						else if (Global_2667225.f_489 == 50)
						{
							Global_2667225.f_555 = { 1558.369f, 384.953f, -53.8531f };
							Global_2667225.f_555.f_3 = 0f;
							Global_2815059.f_933 = 1;
						}
						else if (Global_2667225.f_489 == 55)
						{
							Global_2667225.f_555 = { -1360.148f, 144.8f, -95.7f };
							Global_2667225.f_555.f_3 = 90f;
						}
						else if (Global_2667225.f_489 == 56)
						{
							switch (__LIB_0__::func_813(PLAYER::PLAYER_ID()))
							{
								case 1:
									Global_2667225.f_555 = { 387.949f, -69.676f, 112f };
									Global_2667225.f_555.f_3 = 26.279999f;
									break;
								case 2:
									Global_2667225.f_555 = { -1011.61f, -431.12f, 72.4981f };
									Global_2667225.f_555.f_3 = 73.229996f;
									break;
								case 3:
									Global_2667225.f_555 = { -595.463f, -709.173f, 121.642f };
									Global_2667225.f_555.f_3 = 226.13f;
									break;
								case 4:
									Global_2667225.f_555 = { -996.574f, -753.597f, 70.5312f };
									Global_2667225.f_555.f_3 = 136.28f;
									break;
								}
						}
						break;
					case 6:
						if (Global_2667225.f_489 == 43)
						{
							Global_2667225.f_555 = { -1609.1658f, -3016.9788f, -80.0061f };
							Global_2667225.f_555.f_3 = 270f;
						}
						else if (Global_2667225.f_489 == 45)
						{
							Global_2667225.f_555 = { 1105.1066f, 213.3884f, -50.4406f };
							Global_2667225.f_555.f_3 = 180f;
						}
						else if (Global_2667225.f_489 == 46)
						{
							Global_2667225.f_555 = { 978.4244f, 57.9174f, 115.164f };
							Global_2667225.f_555.f_3 = 55f;
						}
						else if (Global_2667225.f_489 == 48)
						{
							Global_2667225.f_555 = { 2723.8425f, -377.4552f, -48.4f };
							Global_2667225.f_555.f_3 = 180f;
						}
						else if (Global_2667225.f_489 == 49)
						{
							Global_2667225.f_555 = { 1542.7819f, 246.4772f, -50.006f };
							Global_2667225.f_555.f_3 = 270f;
						}
						else if (Global_2667225.f_489 == 50)
						{
							Global_2667225.f_555 = { 1558.4023f, 382.5171f, -54.2844f };
							Global_2667225.f_555.f_3 = 180f;
						}
						else if (Global_2667225.f_489 == 55)
						{
							Global_2667225.f_555 = { -1356.4492f, 160.3916f, -100.1943f };
							Global_2667225.f_555.f_3 = 184.3954f;
						}
						else if (Global_2667225.f_489 == 56)
						{
							Global_2667225.f_555 = { 386.225f, -68.459f, 111.39f };
							Global_2667225.f_555.f_3 = -115.2f;
						}
						break;
					case 7:
						if (Global_2667225.f_489 == 43)
						{
						}
						else if (Global_2667225.f_489 == 45)
						{
						}
						else if (Global_2667225.f_489 == 48)
						{
						}
						else if (Global_2667225.f_489 == 49)
						{
						}
						else if (Global_2667225.f_489 == 50)
						{
						}
						else if (Global_2667225.f_489 == 55)
						{
						}
						else if (Global_2667225.f_489 == 56)
						{
						}
						else if (Global_2667225.f_489 == 59)
						{
						}
						break;
					case 4:
						if (Global_2667225.f_489 == 44)
						{
							Global_2667225.f_555 = { 202.819f, 5162.1733f, -88.8851f };
							Global_2667225.f_555.f_3 = 90f;
						}
						break;
					default:
						if (Global_2667225.f_489 == 39)
						{
							iVar46 = __LIB_1__::func_669(__LIB_4__::func_808(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 40)
						{
							iVar46 = __LIB_1__::func_656(__LIB_4__::func_566(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 41)
						{
							iVar46 = __LIB_1__::func_654(__LIB_4__::func_621(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 42)
						{
							iVar46 = __LIB_1__::func_651(__LIB_4__::func_501(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 43)
						{
							iVar46 = __LIB_1__::func_639(__LIB_1__::func_642(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 44)
						{
							if (Global_2715699.f_6602)
							{
								iVar47 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_2715699.f_6603));
								if (iVar47 != __LIB_0__::getMinusOneOrNull())
								{
									iVar46 = __LIB_1__::func_635(__LIB_1__::func_636(iVar47));
								}
							}
							else
							{
								iVar46 = __LIB_1__::func_635(__LIB_1__::func_636(PLAYER::PLAYER_ID()));
							}
						}
						else if (Global_2667225.f_489 == 45)
						{
							iVar46 = 123;
						}
						else if (Global_2667225.f_489 == 46)
						{
							iVar46 = __LIB_1__::func_630(__LIB_1__::func_631(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 48)
						{
							iVar46 = __LIB_1__::func_626(__LIB_1__::func_627(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 49)
						{
							iVar46 = 146;
						}
						else if (Global_2667225.f_489 == 50)
						{
							Global_2815059.f_933 = 1;
							iVar46 = 147;
						}
						else if (Global_2667225.f_489 == 54)
						{
							iVar46 = 154;
						}
						else if (Global_2667225.f_489 == 55)
						{
							iVar46 = __LIB_1__::func_604(__LIB_1__::func_605(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 56)
						{
							iVar46 = __LIB_1__::func_578(__LIB_0__::func_813(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 59)
						{
							iVar46 = 148;
						}
						if (iVar46 != -1)
						{
							__LIB_9__::func_743(iVar46, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), Global_2671449.f_26);
						}
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2680 = 1;
					MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 28);
				}
				Global_2667225.f_2676 = 1;
				break;
			case 4:
				if (!NETWORK::NETWORK_FIND_LARGEST_BUNCH_OF_PLAYERS(0, &(Global_2667225.f_555)))
				{
					Global_2667225.f_555 = { __LIB_8__::func_270() };
					Global_2667225.f_555 = { __LIB_2__::func_878(Global_2667225.f_555, 50f, 25f) };
				}
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 31:
				if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
				{
					iVar37 = __LIB_9__::func_333(PLAYER::PLAYER_ID(), 1);
					if (!iVar37 == __LIB_0__::getMinusOneOrNull())
					{
						Global_2667225.f_555 = { func_6286(iVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_6286(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_6286(__LIB_0__::func_797()) };
				}
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_555.f_4 = 50f;
				Global_2667225.f_555.f_7 = 0;
				Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_14 = 0f;
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 2f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_520 = { Global_2667225.f_555 };
				Global_2667225.f_520.f_4 = 1;
				Global_2667225.f_520.f_3 = 0;
				Global_2667225.f_555.f_16 = 1;
				Global_2667225.f_555.f_17 = 1;
				Global_2667225.f_515 = 1;
				break;
			case 33:
				if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
				{
					iVar37 = __LIB_9__::func_333(PLAYER::PLAYER_ID(), 1);
					if (!iVar37 == __LIB_0__::getMinusOneOrNull())
					{
						Global_2667225.f_555 = { func_6286(iVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_6286(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_6286(__LIB_0__::func_797()) };
				}
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_555.f_4 = 50f;
				Global_2667225.f_555.f_7 = 0;
				Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_14 = 0f;
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 2f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_520 = { Global_2667225.f_555 };
				Global_2667225.f_520.f_4 = 1;
				Global_2667225.f_520.f_3 = 0;
				Global_2667225.f_555.f_16 = 1;
				Global_2667225.f_555.f_17 = 1;
				Global_2667225.f_515 = 1;
				break;
			case 5:
				Global_2667225.f_555 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 20f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 37:
				Global_2667225.f_555 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 38:
				Global_2667225.f_555 = { func_6286(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 53:
				Global_2667225.f_555 = { func_6286(PLAYER::PLAYER_ID()) };
				Global_2667225.f_555 = { __LIB_3__::func_176(Global_2667225.f_555) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 21:
				Global_2667225.f_555 = { __LIB_2__::func_876(__LIB_1__::func_694(PLAYER::PLAYER_ID()), 200f) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 6:
				Global_2667225.f_555 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 14:
				if (!Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = 0f;
					Global_2667225.f_555.f_4 = 0f;
					Global_2667225.f_555.f_7 = 2;
					Global_2667225.f_555.f_8 = { Global_2676213.f_11 };
					Global_2667225.f_555.f_11 = { Global_2676213.f_14 };
					Global_2667225.f_555.f_14 = Global_2676213.f_17;
					Global_2667225.f_593 = { 0f, 0f, 0f };
					Global_2667225.f_596 = 0f;
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_520.f_6 = Global_2676213.f_22;
					if (SYSTEM::VMAG(Global_2676213.f_18) > 0f)
					{
						Global_2667225.f_520 = { Global_2676213.f_18 };
					}
					else
					{
						Global_2667225.f_520 = { Global_2676213.f_11 + Global_2676213.f_14 / Vector(2f, 2f, 2f) };
					}
					Global_2667225.f_520.f_4 = Global_2676213.f_8;
					Global_2667225.f_520.f_3 = Global_2676213.f_9;
					Global_2667225.f_555.f_16 = Global_2676213.f_7;
					Global_2667225.f_520.f_5 = Global_2676213.f_21;
					Global_2667225.f_555.f_22 = Global_2676213.f_23;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
				}
				break;
			case 10:
				if (Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_7 = 0;
					Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_14 = 0f;
					Global_2667225.f_593 = { Global_2667225.f_555 };
					Global_2667225.f_596 = Global_2676213.f_3;
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_520.f_6 = Global_2676213.f_22;
					if (SYSTEM::VMAG(Global_2676213.f_18) > 0f)
					{
						Global_2667225.f_520 = { Global_2676213.f_18 };
					}
					else
					{
						Global_2667225.f_520 = { Global_2676213 };
					}
					Global_2667225.f_520.f_4 = Global_2676213.f_8;
					Global_2667225.f_520.f_3 = Global_2676213.f_9;
					Global_2667225.f_555.f_16 = Global_2676213.f_7;
					Global_2667225.f_520.f_5 = Global_2676213.f_21;
					Global_2667225.f_555.f_22 = Global_2676213.f_23;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_515 = Global_2676213.f_24;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
				}
				break;
			case 32:
				if (Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_7 = 0;
					Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_14 = 0f;
					Global_2667225.f_593 = { Global_2667225.f_555 };
					Global_2667225.f_596 = Global_2676213.f_3;
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_520.f_6 = Global_2676213.f_22;
					Global_2667225.f_520 = { Global_2676213.f_18 };
					Global_2667225.f_520.f_4 = Global_2676213.f_8;
					Global_2667225.f_520.f_3 = Global_2676213.f_9;
					Global_2667225.f_555.f_16 = Global_2676213.f_7;
					Global_2667225.f_520.f_5 = Global_2676213.f_21;
					Global_2667225.f_555.f_22 = Global_2676213.f_23;
					Global_2667225.f_515 = Global_2676213.f_24;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
					if (__LIB_9__::func_419(Global_2667225.f_555, Global_2667225.f_555.f_4, &(Global_2667225.f_555), 0))
					{
						if (Global_2667225.f_555.f_4 > 50f)
						{
							Global_2667225.f_555.f_4 = 50f;
						}
						Global_2667225.f_593 = { Global_2667225.f_555 };
						Global_2667225.f_596 = 1.5f;
						Global_2667225.f_520.f_5 = 1.5f;
						Global_2667225.f_520.f_6 = 1;
						Global_2667225.f_555.f_16 = 0;
						Global_2667225.f_555.f_17 = 1;
						Global_2667225.f_520 = { Global_2667225.f_555 };
					}
					else
					{
						Global_2667225.f_518 = 1;
					}
				}
				break;
			case 16:
				if (Global_2667225.f_490.f_3 && !__LIB_9__::func_958(Global_2676213))
				{
					Global_2667225.f_555 = { __LIB_10__::func_756() };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_27 = Global_2676213.f_26;
					bVar2 = true;
					bParam2 = false;
					Global_2667225.f_2697 = 1;
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_27 = Global_2676213.f_26;
					bVar2 = true;
					bParam2 = false;
					if (!Global_2667225.f_490.f_3)
					{
						Global_2667225.f_2697 = 1;
					}
				}
				break;
			case 11:
				if (Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_2697 = 1;
					bVar2 = true;
					bParam2 = false;
				}
				break;
			case 13:
				if (Global_2676213.f_10)
				{
				}
				else if (Global_2667225.f_2479 == 1)
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					bVar2 = true;
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_593 = { Global_2667225.f_555 };
					if (Global_2676213.f_3 < (Global_2676213.f_4 / 2f))
					{
						Global_2667225.f_596 = (Global_2676213.f_4 / 2f);
					}
					else
					{
						Global_2667225.f_596 = Global_2676213.f_3;
					}
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_520.f_6 = 1;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
				}
				if (func_6058(&(Global_2667225.f_555), 0, 0, 0, 1))
				{
					Global_2667225.f_515 = 1;
				}
				break;
		}
		if (SYSTEM::VMAG(Global_2667225.f_520) > 0f)
		{
			Global_2667225.f_2674 = 1;
		}
		if (__LIB_9__::func_772(Global_2667225.f_555, &iVar0))
		{
			Global_2667225.f_515 = 1;
		}
		if (bParam2 && iParam4 == 0)
		{
			if (__LIB_9__::func_462())
			{
				Global_2667225.f_587 = 4;
			}
			else
			{
				if (Global_2667225.f_45.f_309)
				{
					Var17 = { Global_2667225.f_520 };
					if (SYSTEM::VMAG(Var17) == 0f)
					{
						Var17 = { Global_2667225.f_555 };
					}
					if (!__LIB_2__::func_674(Var17))
					{
						Global_2667225.f_555.f_23 = 0;
					}
				}
				Global_2667225.f_555.f_24 = Global_2667225.f_45.f_310;
				Global_2667225.f_587 = 3;
			}
		}
		else if (bVar2)
		{
			Var18[0 /*3*/] = { Global_2667225.f_555 };
			Var18.f_16[0] = Global_2667225.f_555.f_3;
			Global_2667225.f_587 = 0;
			Global_2667225.f_589 = 0;
			Global_2667225.f_667 = 0;
			Global_2667225.f_668 = 0;
			Global_2667225.f_2478 = 0;
			Global_2667225.f_2479 = 0;
			Global_2667225.f_2477 = 0;
			Global_2667225.f_2898 = Global_2667225.f_555.f_27;
			*uParam0 = { Var18 };
			return 1;
		}
		else
		{
			func_6243();
		}
	}
	if (Global_2667225.f_587 == 3)
	{
		if (bParam2)
		{
			switch (Global_2667225.f_555.f_7)
			{
				case 0:
					fVar3 = (Global_2667225.f_555 - Global_2667225.f_555.f_4);
					fVar5 = (Global_2667225.f_555.f_1 - Global_2667225.f_555.f_4);
					fVar4 = (Global_2667225.f_555 + Global_2667225.f_555.f_4);
					fVar6 = (Global_2667225.f_555.f_1 + Global_2667225.f_555.f_4);
					break;
				case 1:
					if (Global_2667225.f_555.f_8 < Global_2667225.f_555.f_11)
					{
						fVar3 = Global_2667225.f_555.f_8;
						fVar4 = Global_2667225.f_555.f_11;
					}
					else
					{
						fVar3 = Global_2667225.f_555.f_11;
						fVar4 = Global_2667225.f_555.f_8;
					}
					if (Global_2667225.f_555.f_8.f_1 < Global_2667225.f_555.f_11.f_1)
					{
						fVar5 = Global_2667225.f_555.f_8.f_1;
						fVar6 = Global_2667225.f_555.f_11.f_1;
					}
					else
					{
						fVar5 = Global_2667225.f_555.f_11.f_1;
						fVar6 = Global_2667225.f_555.f_8.f_1;
					}
					break;
				case 2:
					if (Global_2667225.f_555.f_8 < Global_2667225.f_555.f_11)
					{
						fVar3 = (Global_2667225.f_555.f_8 - (0.5f * Global_2667225.f_555.f_14));
						fVar4 = (Global_2667225.f_555.f_11 + (0.5f * Global_2667225.f_555.f_14));
					}
					else
					{
						fVar3 = (Global_2667225.f_555.f_11 - (0.5f * Global_2667225.f_555.f_14));
						fVar4 = (Global_2667225.f_555.f_8 + (0.5f * Global_2667225.f_555.f_14));
					}
					if (Global_2667225.f_555.f_8.f_1 < Global_2667225.f_555.f_11.f_1)
					{
						fVar5 = (Global_2667225.f_555.f_8.f_1 - (0.5f * Global_2667225.f_555.f_14));
						fVar6 = (Global_2667225.f_555.f_11.f_1 + (0.5f * Global_2667225.f_555.f_14));
					}
					else
					{
						fVar5 = (Global_2667225.f_555.f_11.f_1 - (0.5f * Global_2667225.f_555.f_14));
						fVar6 = (Global_2667225.f_555.f_8.f_1 + (0.5f * Global_2667225.f_555.f_14));
					}
					break;
				}
		}
		PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fVar3, fVar5, fVar4, fVar6);
		if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar3, fVar5, fVar4, fVar6))
		{
			if (Global_2667225.f_555.f_21)
			{
				Var18[0 /*3*/] = { Global_2667225.f_555.f_18 };
				Var18.f_16[0] = Global_2667225.f_555.f_3;
			}
			else
			{
				Var18[0 /*3*/] = { Global_2667225.f_555 };
				Var18.f_16[0] = Global_2667225.f_555.f_3;
			}
			Var48.f_6 = 1082130432;
			Var48.f_7 = 1176255488;
			Var48.f_8 = 1;
			Var48.f_10 = 1;
			Var48.f_13 = 1;
			Var48.f_15 = 1;
			Var48.f_16 = 1;
			Var48.f_31 = 1;
			Var48.f_34 = joaat("tailgater");
			Var48.f_38 = 2;
			Var48.f_45 = 2;
			Var48.f_49 = 1123024896;
			Var48.f_53 = 999;
			Var48.f_54 = 1176256410;
			Var48.f_55 = 1;
			Var48.f_56 = 1;
			Var48.f_57 = 1;
			Var48 = { Global_2667225.f_520 };
			Var48.f_4 = Global_2667225.f_596;
			Var48.f_12 = bParam2;
			Var48.f_3 = Global_2667225.f_520.f_5;
			Var48.f_5 = fVar36;
			Var48.f_16 = Global_2667225.f_555.f_23;
			if (Global_2667225.f_555.f_26)
			{
				Var48.f_10 = 0;
			}
			if (Global_2667225.f_520.f_32 > 0f)
			{
				Var48.f_6 = Global_2667225.f_520.f_32;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar49 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar49))
				{
					Var48.f_34 = ENTITY::GET_ENTITY_MODEL(iVar49);
				}
			}
			if (iParam7 != 0)
			{
				Var48.f_34 = iParam7;
			}
			Var48.f_18 = 1;
			switch (Global_2667225.f_555.f_7)
			{
				case 0:
					Var48.f_19 = { Global_2667225.f_555 };
					Var48.f_25 = Global_2667225.f_555.f_4;
					Var48.f_4 = 0f;
					break;
				case 1:
					Var48.f_19 = { Global_2667225.f_555.f_8 };
					Var48.f_22 = { Global_2667225.f_555.f_11 };
					Var48.f_25 = 0f;
					break;
				case 2:
					Var48.f_19 = { Global_2667225.f_555.f_8 };
					Var48.f_22 = { Global_2667225.f_555.f_11 };
					Var48.f_25 = Global_2667225.f_555.f_14;
					break;
			}
			Var48.f_26 = Global_2667225.f_555.f_7;
			if ((__LIB_0__::func_975() && __LIB_8__::func_918()) && func_6058(&(Global_2667225.f_512), 0, 0, 0, 1))
			{
				Var48.f_10 = 0;
			}
			Var48.f_9 = uParam5;
			Var48.f_11 = __LIB_9__::func_460();
			if (Global_2667225.f_520.f_6)
			{
				Var48.f_30 = 1;
				Var48.f_29 = 0;
			}
			else
			{
				Var48.f_30 = 0;
				Var48.f_29 = 1;
			}
			if (Global_2667225.f_489 == 3)
			{
				Var48.f_28 = 1;
				Var48.f_29 = 1;
				Var48.f_30 = 0;
			}
			else if (Global_2667225.f_489 == 26)
			{
				Var48.f_28 = 1;
				Var48.f_30 = 1;
				Var48.f_29 = 0;
				Var48.f_32 = 1;
			}
			if (Global_2667225.f_489 == 1)
			{
				Var48.f_7 = 15f;
			}
			if (Global_2667225.f_45.f_311 > 0f)
			{
				Var48.f_7 = Global_2667225.f_45.f_311;
			}
			Var48.f_17 = uParam6;
			Var48.f_55 = Global_2667225.f_555.f_16;
			Var48.f_60 = Global_2667225.f_555.f_30;
			if (__LIB_1__::func_603(PLAYER::PLAYER_ID()))
			{
				Var48.f_58 = 1;
			}
			func_6019(&(Var18[0 /*3*/]), &(Var18.f_16[0]), &Var48);
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (iVar0 < Global_2674786.f_162 && iVar0 > 0)
				{
					Var18[iVar0 /*3*/] = { Global_2674786[iVar0 /*3*/] };
					Var18.f_16[iVar0] = Global_2674786.f_121[iVar0];
				}
				iVar0++;
			}
			if (Var48.f_11 && Var48.f_27)
			{
				Global_2667225.f_45.f_304 = 1;
			}
			else
			{
				Global_2667225.f_45.f_304 = 0;
			}
			Global_2667225.f_590++;
			Global_2667225.f_588 = 3;
			Global_2667225.f_587 = 5;
		}
	}
	if (Global_2667225.f_587 == 4)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Var18[iVar0 /*3*/] = { Global_2667225.f_555.f_18 };
			if (((iVar0 == 0 && Global_2667225.f_489 == 26) && Global_2667225.f_555.f_25) && func_6236(&(Var18[iVar0 /*3*/]), __LIB_1__::func_560(Var18[iVar0 /*3*/], 1008981770)))
			{
			}
			else
			{
				switch (Global_2667225.f_555.f_7)
				{
					case 0:
						Var18[iVar0 /*3*/] = { func_6233(Global_2667225.f_555, 0f, 0f, 0f, Global_2667225.f_555.f_4, Global_2667225.f_555.f_7) };
						break;
					case 1:
						Var18[iVar0 /*3*/] = { func_6233(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, 0f, Global_2667225.f_555.f_7) };
						break;
					case 2:
						Var18[iVar0 /*3*/] = { func_6233(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, Global_2667225.f_555.f_14, Global_2667225.f_555.f_7) };
						break;
					}
			}
			if (SYSTEM::VMAG(Global_2667225.f_520) > 0f)
			{
				Var17 = { Global_2667225.f_520 - Var18[iVar0 /*3*/] };
				Var18.f_16[iVar0] = MISC::GET_HEADING_FROM_VECTOR_2D(Var17.f_0, Var17.f_1);
			}
			iVar0++;
		}
		Global_2667225.f_45.f_304 = 0;
		Global_2667225.f_590++;
		Global_2667225.f_588 = 4;
		Global_2667225.f_587 = 5;
	}
	if (Global_2667225.f_587 == 5)
	{
		if (Global_2667225.f_489 == 11 && Global_2667225.f_45.f_59 > 0f)
		{
			if (SYSTEM::VDIST(Var18[0 /*3*/], Global_2667225.f_45.f_60) > SYSTEM::VDIST(Global_2676213, Global_2667225.f_45.f_60))
			{
				Var18[0 /*3*/] = { Global_2676213 };
				Var18.f_16[0] = Global_2676213.f_5;
			}
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if ((__LIB_1__::func_410(Global_2667225.f_489) && !__LIB_1__::func_560(Var18[iVar0 /*3*/], 0.01f)) && !__LIB_9__::func_462())
			{
				if (iVar0 == 4 || SYSTEM::VMAG(Var18[iVar0 + 1 /*3*/]) == 0f)
				{
					if ((Global_2667225.f_588 == 4 || Global_2667225.f_588 == 3) && Global_2667225.f_590 < 2)
					{
						Global_2667225.f_587 = Global_2667225.f_588;
						iVar0 = 5;
					}
					else if (Global_2667225.f_555.f_24)
					{
						func_6243();
						return 0;
					}
					else
					{
						__LIB_2__::func_670(&Var18, &iVar0);
					}
				}
			}
			else if ((__LIB_9__::func_418(Var18[iVar0 /*3*/], 3.5f, 1, 1, 0, 0, 0, 0, 0) || __LIB_9__::func_516(Var18[iVar0 /*3*/], 0.5f, PLAYER::PLAYER_ID(), 0, 0)) || Global_2667225.f_45.f_304)
			{
				if (iVar0 == 4 || SYSTEM::VMAG(Var18[iVar0 + 1 /*3*/]) == 0f)
				{
					if ((Global_2667225.f_588 == 4 || Global_2667225.f_588 == 3) && Global_2667225.f_590 < 2)
					{
						Global_2667225.f_587 = Global_2667225.f_588;
						iVar0 = 5;
					}
					else if (Global_2667225.f_555.f_24)
					{
						func_6243();
						return 0;
					}
					else
					{
						__LIB_2__::func_670(&Var18, &iVar0);
					}
				}
			}
			else
			{
				__LIB_2__::func_670(&Var18, &iVar0);
			}
			iVar0++;
		}
	}
	if (Global_2667225.f_587 == 6)
	{
		if (Global_2667225.f_589 == 2 || Global_2667225.f_555.f_16 == 0)
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = iParam3;
		}
		if (Global_2667225.f_555.f_7 == 0)
		{
			if (Global_2667225.f_520.f_5 > (Global_2667225.f_555.f_4 * 2f))
			{
				Global_2667225.f_520.f_5 = (Global_2667225.f_555.f_4 * 2f);
			}
		}
		Global_2667225.f_555.f_5 = 1;
		Global_2667225.f_555.f_6 = iVar1;
		Global_2667225.f_555.f_15 = Global_2667225.f_45.f_65;
		Global_2667225.f_555.f_30 = Global_2667225.f_45.f_182;
		Global_2667225.f_520.f_8 = 0;
		Global_2667225.f_520.f_9 = __LIB_9__::func_460();
		Global_2667225.f_520.f_10 = 0;
		if (func_6164(&(Global_2667225.f_555), &(Global_2667225.f_520), &Var18))
		{
			Global_2667225.f_511 = 0;
			Global_2667225.f_587 = 2;
		}
	}
	if (Global_2667225.f_587 == 2)
	{
		*uParam0 = { Var18 };
		Global_2667225.f_587 = 0;
		Global_2667225.f_589 = 0;
		Global_2667225.f_667 = 0;
		Global_2667225.f_668 = 0;
		Global_2667225.f_2478 = 0;
		Global_2667225.f_2479 = 0;
		Global_2667225.f_2477 = 0;
		return 1;
	}
	return 0;
}

int func_6164(var uParam0, var uParam1, var uParam2)//Position - 0x1F290E
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var11;
	float fVar12;
	bool bVar13;
	struct<61> Var14;
	bool bVar15;
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2667225.f_2466 == *uParam0 || !Global_2667225.f_2466.f_1 == uParam0->f_1) || !Global_2667225.f_2466.f_2 == uParam0->f_2) || !Global_2667225.f_2469 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		case 1:
			if (((((!Global_2667225.f_2480 == uParam0->f_8 || !Global_2667225.f_2480.f_1 == uParam0->f_8.f_1) || !Global_2667225.f_2480.f_2 == uParam0->f_8.f_2) || !Global_2667225.f_2483 == uParam0->f_11) || !Global_2667225.f_2483.f_1 == uParam0->f_11.f_1) || !Global_2667225.f_2483.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		case 2:
			if ((((((!Global_2667225.f_2480 == uParam0->f_8 || !Global_2667225.f_2480.f_1 == uParam0->f_8.f_1) || !Global_2667225.f_2480.f_2 == uParam0->f_8.f_2) || !Global_2667225.f_2483 == uParam0->f_11) || !Global_2667225.f_2483.f_1 == uParam0->f_11.f_1) || !Global_2667225.f_2483.f_2 == uParam0->f_11.f_2) || !Global_2667225.f_2486 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (Global_1574477)
	{
		if (!Global_2667225.f_2487 == uParam0->f_7)
		{
			bVar13 = true;
		}
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_2473) && !Global_2667225.f_2473 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			bVar13 = true;
		}
	}
	if (bVar13)
	{
		if (Global_2667225.f_2464 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_2473))
			{
				if (Global_2667225.f_2473 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) < __LIB_0__::func_853(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) < __LIB_0__::func_853(0))
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			__LIB_1__::func_442();
		}
		Global_2667225.f_2464 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) > __LIB_0__::func_853(0))
	{
		Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
		__LIB_2__::func_740();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		Var6 = { *uParam0 };
	}
	else
	{
		Var6 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var7 = { Var6 + Vector(-0.1f, -0.1f, -0.1f) };
	Var8 = { Var6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2667225.f_2464)
	{
		NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
		PED::SPAWNPOINTS_CANCEL_SEARCH();
		__LIB_1__::func_442();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (__LIB_9__::func_771(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			Global_2667225.f_2487 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2667225.f_2466 = { *uParam0 };
					Global_2667225.f_2469 = uParam0->f_4;
					break;
				case 1:
					Global_2667225.f_2480 = { uParam0->f_8 };
					Global_2667225.f_2483 = { uParam0->f_11 };
					Global_2667225.f_2486 = 0f;
					Global_2667225.f_2466 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				case 2:
					Global_2667225.f_2480 = { uParam0->f_8 };
					Global_2667225.f_2483 = { uParam0->f_11 };
					Global_2667225.f_2486 = uParam0->f_14;
					Global_2667225.f_2466 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				__LIB_1__::func_436(Var6.f_0, Var6.f_1);
			}
			Global_2667225.f_2465 = 1;
			Global_2667225.f_2464 = 1;
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2470 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2473 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2667225.f_2464)
	{
		if (Global_2667225.f_2465 == 1)
		{
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar2, fVar3, fVar4, fVar5) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 5000)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var14.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_30;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (__LIB_1__::func_435(Global_4718592.f_168757))
					{
						Var14.f_9 = 1;
					}
					Var14.f_60 = uParam0->f_30;
					func_6019(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!__LIB_0__::func_828(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2667225.f_2465 = 9;
				}
				else
				{
					Global_2667225.f_2465 = 2;
				}
			}
		}
		if (Global_2667225.f_2465 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(Var7, Var8) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 15000) || PATHFIND::GET_NUM_NAVMESHES_EXISTING_IN_AREA(Var7, Var8) == 0)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
				{
					Global_2667225.f_2465 = 3;
				}
				else
				{
					Global_2667225.f_2465 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2475) > 7000)
			{
				__LIB_2__::func_739(Var6.f_0, Var6.f_1);
			}
		}
		if (Global_2667225.f_2465 == 3)
		{
			if (__LIB_1__::func_432() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 10000)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_2465 = 4;
			}
		}
		if (Global_2667225.f_2465 == 4)
		{
			if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
			}
			else
			{
				iVar0 = 0;
				__LIB_2__::func_740();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
								Global_2667225.f_2465 = 5;
							}
							break;
						case 1:
							__LIB_2__::func_669(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), Var10, Var11, fVar12, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
								Global_2667225.f_2465 = 5;
							}
							break;
						case 2:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
								Global_2667225.f_2465 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_2465 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						case 1:
							__LIB_2__::func_669(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
							PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var10, Var11, fVar12, iVar0, 2f, 5000);
							break;
						case 2:
							PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2667225.f_2465 == 5)
		{
			if (func_6174(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2667225.f_2491.f_5)
				{
					Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_2465 = 6;
				}
				else
				{
					Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
						}
					}
					Global_2667225.f_2465 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 20000)
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_2465 = 8;
			}
		}
		if (Global_2667225.f_2465 == 6)
		{
			iVar0 = 0;
			Global_2667225.f_2491.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!__LIB_1__::func_413(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
					{
						iVar0++;
					}
				}
			}
			else if (!__LIB_1__::func_412(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2465 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				case 1:
					__LIB_2__::func_669(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var10, Var11, fVar12, iVar0, 2f, 5000);
					break;
				case 2:
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2667225.f_2465 == 7)
		{
			if (func_6174(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2667225.f_2625[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (__LIB_0__::func_828(Global_2667225.f_2625[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									case 1:
										if (__LIB_1__::func_453(Global_2667225.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2667225.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, false, true))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_6166(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
						iVar9++;
					}
				}
				Global_2667225.f_2465 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 20000)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_2465 = 8;
			}
		}
		if (Global_2667225.f_2465 == 8)
		{
			if (uParam0->f_5)
			{
				if (__LIB_1__::func_410(Global_2667225.f_489))
				{
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__::func_409(uParam2, &(Global_2667225.f_2491.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2667225.f_2466 };
				func_6166(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2465 = 9;
		}
		if (Global_2667225.f_2465 == 9)
		{
			Global_2667225.f_2464 = 0;
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			__LIB_1__::func_442();
			return 1;
		}
		Global_2667225.f_2470 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_6166(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x1F3956
{
	struct<3> Var0;
	var uVar1;
	struct<61> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var7 = { *uParam5 };
						if (__LIB_1__::func_413(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 1:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__::func_412(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 2:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__::func_412(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_6168(*uParam0, &Var0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		Var0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var2.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_30;
		Var2.f_55 = uParam5->f_16;
		if (__LIB_4__::func_946(PLAYER::PLAYER_ID(), 0))
		{
			Var2.f_9 = 1;
		}
		Var2.f_60 = uParam5->f_30;
		func_6019(&Var0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			case 1:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				break;
			case 2:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!__LIB_2__::func_735(Var0, uParam5->f_7, Var8, Var9, fVar10))
		{
			if (func_6168(*uParam0, &Var0, iVar6, iParam3, 0))
			{
				if (!__LIB_2__::func_735(Var0, uParam5->f_7, Var8, Var9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var8 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3, false, false))
					{
						Var0.f_2 = uVar3;
					}
				}
			}
			else if (func_6058(uParam0, 1, 1, 1, 1))
			{
				func_6166(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var8 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3, false, false))
				{
					Var0.f_2 = uVar3;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2667225.f_667 = 1;
}

int func_6168(struct<3> Param0, var* uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1F3E36
{
	if (__LIB_1__::func_411(Param0, uParam1))
	{
		if (func_6169(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, false, uParam1, iParam2))
	{
		if (func_6169(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_6169(struct<3> Param0, var* uParam1, int iParam2, bool bParam3)//Position - 0x1F3E92
{
	float fVar0;
	var uVar1;
	var uVar2;
	fVar0 = SYSTEM::VDIST(Param0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_6055(Global_2667225.f_512, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!__LIB_2__::func_990(*uParam1, 1056964608))
			{
				if (!__LIB_2__::func_664(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_6174(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x1F4162
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	if (Global_2667225.f_2491.f_1 == 0 && Global_2667225.f_2491 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::NETWORK_QUERY_RESPAWN_RESULTS(&(Global_2667225.f_2491.f_1)))
			{
				case 0:
					func_6218(uParam1, uParam2);
					if (!Global_2667225.f_2491.f_2)
					{
						if (uParam2->f_7 && Global_2667225.f_555.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
							}
							if (uParam1->f_5 && __LIB_1__::func_410(Global_2667225.f_489))
							{
								if (!Global_2667225.f_2491.f_5)
								{
									Global_2667225.f_2491.f_5 = 1;
								}
								else
								{
									func_6166(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_6166(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				case 1:
					func_6218(uParam1, uParam2);
					break;
				case 2:
					return 0;
					break;
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			if (!PED::SPAWNPOINTS_IS_SEARCH_FAILED())
			{
				if (PED::SPAWNPOINTS_IS_SEARCH_COMPLETE())
				{
					func_6218(uParam1, uParam2);
					Global_2667225.f_2491.f_1 = PED::SPAWNPOINTS_GET_NUM_SEARCH_RESULTS();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				func_6218(uParam1, uParam2);
				if (!Global_2667225.f_2491.f_2)
				{
					Global_2667225.f_2491.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_6215(Global_2667225.f_555, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90));
	}
	if (uParam2->f_7 && !Global_2667225.f_2491.f_4)
	{
		Global_2667225.f_2491.f_4 = 1;
		func_6182(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2667225.f_2491.f_1 > 0 || Global_2667225.f_2491 > 0)
	{
		if (uParam1->f_5 || PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			iVar2 = 0;
			while (iVar2 < Global_2667225.f_2491.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2667225.f_2491.f_3)
					{
						iVar2 = Global_2667225.f_2491.f_3 + 1;
					}
					if (iVar2 > (Global_2667225.f_2491.f_1 - 1))
					{
						iVar2 = (Global_2667225.f_2491.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, &Var0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT(iVar2, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = NETWORK::NETWORK_GET_RESPAWN_RESULT_FLAGS(iVar2);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(iVar2, &iVar3);
					}
					func_6182(Var0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2667225.f_2491.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2667225.f_2491.f_1;
		}
		if (Global_2667225.f_2491.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2667225.f_2889)
			{
				__LIB_2__::func_736(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && __LIB_1__::func_410(Global_2667225.f_489))
			{
				if (Global_2667225.f_2491.f_2)
				{
					__LIB_1__::func_409(uParam0, &(Global_2667225.f_2491.f_6));
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_6166(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__::func_409(uParam0, &(Global_2667225.f_2491.f_6));
				__LIB_1__::func_414(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_2491.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!__LIB_2__::func_664(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_6166(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
				func_6166(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				__LIB_1__::func_414(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
		if (uParam1->f_5 && __LIB_1__::func_410(Global_2667225.f_489))
		{
			if (!Global_2667225.f_2491.f_5)
			{
				Global_2667225.f_2491.f_5 = 1;
			}
			else
			{
				func_6166(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_6166(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		__LIB_1__::func_414(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_6182(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x1F4A26
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	bool bVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_2667225.f_489 == 1)
		{
			if (MISC::ABSF((Global_2667225.f_512.f_2 - Param0.f_2)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (__LIB_8__::func_917(PLAYER::PLAYER_ID()))
		{
			if (iParam5 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!__LIB_8__::func_916(Param0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!__LIB_9__::func_418(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam3->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(Param0, uParam3->f_13[iVar11 /*3*/]) > uParam3->f_20[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((SYSTEM::VMAG(uParam3->f_23) > 0f && SYSTEM::VMAG(uParam3->f_26) > 0f) && uParam3->f_29 > 0f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam3->f_23, uParam3->f_26, uParam3->f_29, false, true))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (__LIB_9__::func_974(Param0, fParam1, uParam2->f_15, __LIB_1__::func_430(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2667225.f_3;
		}
	}
	else if (!__LIB_9__::func_516(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!__LIB_9__::func_257(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!__LIB_9__::func_257(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2667225.f_701)
		{
			Var12 = { Global_2667225.f_512 };
			if (Global_2667225.f_489 == 26)
			{
				Var12 = { Global_2667225.f_555.f_18 };
			}
			if (!__LIB_0__::func_822(Param0, 0.5f))
			{
				if (func_6088(Var12))
				{
					if (!func_6058(&Param0, 0, 0, 0, 1) && !__LIB_2__::func_784(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!__LIB_2__::func_784(&Param0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!__LIB_1__::func_428(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(__LIB_1__::func_456(PLAYER::PLAYER_ID()) && __LIB_1__::func_872(PLAYER::PLAYER_ID())))
		{
			if (!__LIB_2__::func_668(&Param0, &(Global_2667225.f_2491.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!__LIB_1__::func_872(PLAYER::PLAYER_ID()))
		{
			if (!__LIB_1__::func_427(Param0, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (__LIB_2__::func_738(Param0))
	{
		if (uParam2->f_5)
		{
			if (__LIB_1__::func_410(Global_2667225.f_489))
			{
				if (__LIB_1__::func_560(Param0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (__LIB_1__::func_426(Param0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2667225.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2667225.f_701)
		{
			if (!__LIB_2__::func_766(&Param0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!__LIB_2__::func_664(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = __LIB_1__::func_559(Param0, 1008981770);
		if (iVar14 > -1)
		{
			__LIB_2__::func_667(Param0, &Var15, &Var16, &fVar17);
			if (!__LIB_2__::func_975(&(Global_2667225.f_45[iVar14 /*12*/]), Var15, Var16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (__LIB_2__::func_990(Param0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam3->f_33)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam3->f_34)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (__LIB_1__::func_423(Param0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_2667225.f_2889 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = __LIB_9__::func_957(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = __LIB_9__::func_957(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (__LIB_1__::func_410(Global_2667225.f_489) && iVar8 < 4096)
			{
				Var19.f_2 = __LIB_3__::func_256(Param0);
			}
			fVar7 = __LIB_9__::func_742(Param0, 1, 0, 0, 0, 0);
			Var19.f_4 = { Param0 };
			Var19.f_7 = fParam1;
			Var19.f_0 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = fVar7;
			__LIB_2__::func_665(Var19);
			Global_2667225.f_2491.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_2667225.f_2491.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = __LIB_9__::func_957(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = __LIB_9__::func_957(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((__LIB_1__::func_410(Global_2667225.f_489) && iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = __LIB_3__::func_256(Param0);
							bVar21 = true;
						}
						if (fVar2 < Global_2667225.f_2491.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { Param0 };
							Var19.f_7 = fParam1;
							Var19.f_0 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_6185(Var19, iVar18);
							Global_2667225.f_2491.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2667225.f_2491.f_6[iVar18 /*10*/] || (iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/] && fVar0 > Global_2667225.f_2491.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_1 = fVar0;
						func_6185(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = __LIB_8__::func_914(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = __LIB_9__::func_742(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = __LIB_1__::func_420(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = __LIB_1__::func_420(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2667225.f_2491.f_6[iVar18 /*10*/] || (iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/] && fVar3 > Global_2667225.f_2491.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_3 = fVar3;
						func_6185(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

void func_6185(struct<10> Param0, int iParam1)//Position - 0x1F5619
{
	struct<10> Var0;
	Var0.f_2 = 1176256410;
	Var0 = { Global_2667225.f_2491.f_6[iParam1 /*10*/] };
	Global_2667225.f_2491.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_6185(Var0, iParam1 + 1);
	}
}

void func_6215(struct<3> Param0, var uParam1, var uParam2)//Position - 0x1F6AEF
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	struct<3> Var5;
	struct<3> Var6;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!BitTest(Global_2621865[iVar1 /*26*/].f_12, 11))
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2621865[iVar1 /*26*/].f_3, Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_2621865[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2621865[iVar1 /*26*/].f_6.f_2;
					func_6217(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6292[iVar1 /*3*/], Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
			{
				Var3 = { Global_262145.f_6292[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_6217(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6350[iVar1 /*19*/][iVar2 /*3*/], Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_262145.f_6350[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_6217(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573850)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			Var5 = { Global_1573169[iVar1 /*8*/].f_1 + Global_1573169[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam2[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(Var5, Param0) < SYSTEM::VDIST(Var6, Param0))
			{
				Var4 = { Global_1573169[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_1573169[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_1573169[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_2621541[iVar1 /*3*/] };
				func_6216(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_6216(var uParam0, var uParam1, int iParam2)//Position - 0x1F6E0F
{
	Global_2674776 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_6216(&Global_2674776, uParam1, iParam2 + 1);
	}
}

void func_6217(var uParam0, var uParam1, int iParam2)//Position - 0x1F6E4D
{
	Global_2674772 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_6217(&Global_2674772, uParam1, iParam2 + 1);
	}
}

void func_6218(var uParam0, var uParam1)//Position - 0x1F6E87
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	if (Global_2667225.f_2262 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2667225.f_2262)
		{
			if (__LIB_2__::func_851(Global_2667225.f_2263[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2667225.f_2263[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2667225.f_2263[iVar0 /*4*/] };
					fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
				}
				func_6182(Global_2667225.f_2263[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
				Global_2667225.f_2491++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2667225.f_2889)
	{
		__LIB_2__::func_736(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
	}
}

Vector3 func_6233(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x1F7268
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (iParam3)
		{
			case 0:
				Var1 = { __LIB_2__::func_878(Param0, fParam2, 0) };
				break;
			case 1:
				Var1 = { __LIB_2__::func_671(Param0, Param1) };
				break;
			case 2:
				Var1 = { __LIB_2__::func_875(Param0, Param1, fParam2) };
				break;
		}
		if (func_6236(&Var1, 0))
		{
			return Var1;
		}
		iVar0++;
	}
	return Var1;
}

int func_6236(var uParam0, bool bParam1)//Position - 0x1F73A9
{
	func_6237(uParam0, bParam1);
	if (__LIB_9__::func_771(*uParam0, 6f, 1f, 1f, 5f, 0, 0, 0, 120f, 0, -1, 1, 0f, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_6237(var uParam0, bool bParam1)//Position - 0x1F73E0
{
	float fVar0;
	if (!bParam1)
	{
		func_6239(uParam0, 1, 1, 1, 1, 1);
	}
	else
	{
		func_6239(uParam0, 1, 1, 1, 1, 0);
	}
	fVar0 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(*uParam0, uParam0->f_1);
	fVar0 = (fVar0 + 100f);
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	__LIB_2__::func_672(uParam0);
}

void func_6239(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x1F74B6
{
	if (bParam1)
	{
		if (func_6088(Global_2667225.f_512))
		{
			if (func_6058(uParam0, 1, 0, 0, bParam5))
			{
			}
		}
	}
	if (bParam2)
	{
		if (__LIB_2__::func_766(uParam0, 1, 0))
		{
		}
	}
	if (bParam3)
	{
		if (__LIB_2__::func_784(uParam0, 1))
		{
		}
	}
	if (bParam4)
	{
		__LIB_8__::func_269(uParam0, 7f, PLAYER::PLAYER_ID(), 0);
	}
	__LIB_2__::func_673(uParam0, 1120403456);
}

void func_6243()//Position - 0x1F76EB
{
	if (!Global_2667225.f_701)
	{
		if (func_6088(Global_2667225.f_555))
		{
			if (func_6058(&(Global_2667225.f_555), 1, 0, 0, 1))
			{
				Global_2667225.f_520.f_7 = 0;
			}
			if (Global_2667225.f_555.f_2 <= 0f)
			{
				if (func_6304(&(Global_2667225.f_555), 1))
				{
					Global_2667225.f_520.f_7 = 0;
				}
			}
		}
		if (__LIB_2__::func_766(&(Global_2667225.f_555), 1, 0))
		{
			Global_2667225.f_520.f_7 = 0;
		}
		if (__LIB_2__::func_784(&(Global_2667225.f_555), 1))
		{
			Global_2667225.f_520.f_7 = 0;
		}
	}
	if (__LIB_9__::func_462())
	{
		Global_2667225.f_587 = 4;
	}
	else
	{
		Global_2667225.f_2673 = 1;
		Global_2667225.f_587 = 6;
	}
}

Vector3 func_6286(int iParam0)//Position - 0x1FB702
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
	return func_113(iParam0);
}

int func_6304(var uParam0, bool bParam1)//Position - 0x1FD8FC
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (__LIB_1__::func_528(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, 0, 1) && !__LIB_1__::func_528(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, 0, 0))
			{
				if (bParam1)
				{
					if (Global_2672169[iVar0 /*17*/].f_12)
					{
						*uParam0 = { Global_2672169[iVar0 /*17*/].f_13 };
					}
					else
					{
						Var1 = { *uParam0 };
						Var1.f_2 = __LIB_2__::func_692(&(Global_2672169[iVar0 /*17*/]));
						__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, 0);
						if (func_6058(&Var1, 0, 0, 0, 1))
						{
							Var1 = { *uParam0 };
							__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
						}
						*uParam0 = { Var1 };
					}
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

struct<18> func_6314(bool bParam0)//Position - 0x1FE317
{
	struct<18> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	Var0 = 5;
	Var0.f_6 = 5;
	Var0.f_12 = 5;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Var0[iVar1] = -1;
		Var0.f_6[iVar1] = -1f;
		iVar1++;
	}
	if (Global_2667225.f_714 == 1)
	{
		Var0[0] = 0;
		Var0.f_6[0] = 1f;
		return Var0;
	}
	iVar2 = 0;
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		iVar2 = 1;
	}
	fVar8 = 0f;
	if (Global_2667225.f_714.f_507)
	{
		fVar8 = 0.001f;
	}
	iVar1 = 0;
	while (iVar1 < Global_2667225.f_714)
	{
		fVar4 = 1f;
		fVar6 = 0f;
		if (Global_2667225.f_2878 && Global_2667225.f_714.f_503 == iVar1)
		{
			fVar4 = fVar8;
			fVar6 = 0.01f;
		}
		else if (Global_2667225.f_714.f_503 == iVar1 && Global_2667225.f_714.f_504)
		{
			fVar4 = fVar8;
			fVar6 = 0.01f;
		}
		else
		{
			if (!Global_2667225.f_714.f_505)
			{
				if (__LIB_1__::func_423(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, bParam0, Global_2667225.f_714.f_512, Global_2667225.f_714.f_513, Global_2667225.f_714.f_510, Global_2667225.f_714.f_511))
				{
					fVar4 = fVar8;
				}
			}
			if (__LIB_0__::func_822(Global_2667225.f_714.f_1[iVar1 /*5*/], 0.1f))
			{
				fVar4 = fVar8;
			}
			if (__LIB_9__::func_257(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 100f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_9__::func_257(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 50f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_9__::func_257(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 25f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (!Global_2667225.f_714.f_506)
			{
				fVar5 = __LIB_9__::func_332(Global_2667225.f_714.f_1[iVar1 /*5*/], PLAYER::PLAYER_ID(), 0);
				if (fVar5 < 10000f)
				{
					fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_514, -1f, 100f, fVar8, 1f);
					fVar4 = (fVar4 * (fVar3 * 0.91f));
				}
				fVar5 = __LIB_9__::func_742(Global_2667225.f_714.f_1[iVar1 /*5*/], 1, 0, 0, 0, iVar2);
				fVar6 = fVar5;
				fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_515, __LIB_9__::func_459(), __LIB_9__::func_458(), fVar8, 0.3f);
				fVar4 = (fVar4 * (fVar3 * 0.91f));
				fVar5 = __LIB_9__::func_742(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, 0, 0, iVar2);
				if (fVar5 < 10000f)
				{
					fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_516, 15f, 150f, fVar8, 0.2f);
					fVar4 = (fVar4 * (fVar3 * 0.92f));
				}
				fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_2667225.f_714.f_1[iVar1 /*5*/], Global_2667225.f_512, true);
				fVar3 = __LIB_1__::func_420(fVar5, 0f, 0f, Global_2667225.f_714.f_517, fVar8, (40f / Global_2667225.f_714.f_517));
				fVar4 = (fVar4 * (fVar3 * 0.93f));
				if (Global_2667225.f_714.f_508)
				{
					fVar5 = __LIB_2__::func_737(Global_2667225.f_714.f_1[iVar1 /*5*/]);
					fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_515, __LIB_9__::func_459(), __LIB_9__::func_458(), fVar8, 0.3f);
					fVar4 = (fVar4 * (fVar3 * 0.95f));
				}
				if (Global_2667225.f_714.f_509)
				{
					fVar5 = __LIB_2__::func_695(Global_2667225.f_714.f_1[iVar1 /*5*/], &Var0);
					fVar3 = __LIB_1__::func_420(fVar5, 0f, 0f, 65f, 0.8f, 1f);
					fVar4 = (fVar4 * (fVar3 * 1f));
				}
			}
			fVar4 = (fVar4 * Global_2667225.f_714.f_1[iVar1 /*5*/].f_4);
		}
		iVar7 = 0;
		while (iVar7 < 5)
		{
			if (fVar4 > 0f || Global_2667225.f_714.f_507)
			{
				if (fVar4 > Var0.f_6[iVar7])
				{
					func_6315(&Var0, iVar1, fVar4, iVar7, fVar6);
					iVar7 = 5;
				}
				else if (fVar4 == Var0.f_6[iVar7])
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) > 0)
					{
						func_6315(&Var0, iVar1, fVar4, iVar7, fVar6);
						iVar7 = 5;
					}
				}
			}
			iVar7++;
		}
		iVar1++;
	}
	return Var0;
}

void func_6315(var uParam0, int iParam1, float fParam2, int iParam3, float fParam4)//Position - 0x1FE77A
{
	var uVar0;
	var uVar1;
	var uVar2;
	uVar0 = (*uParam0)[iParam3];
	uVar1 = uParam0->f_6[iParam3];
	uVar2 = uParam0->f_12[iParam3];
	(*uParam0)[iParam3] = iParam1;
	uParam0->f_6[iParam3] = fParam2;
	uParam0->f_12[iParam3] = fParam4;
	if (iParam3 < 4)
	{
		func_6315(uParam0, uVar0, uVar1, iParam3 + 1, uVar2);
	}
}

int func_6323()//Position - 0x1FECFE
{
	int iVar0;
	if (MISC::GET_INDEX_OF_CURRENT_LEVEL() == 5)
	{
		return 7;
	}
	else
	{
		if (!Global_2667225.f_490 == 0)
		{
			if (!SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_490.f_1))
			{
				if (Global_2667225.f_490 == 8)
				{
					__LIB_2__::func_892();
				}
				Global_2667225.f_490 = 0;
			}
		}
		if (!Global_2667225.f_490 == 0)
		{
			return Global_2667225.f_490;
		}
		else if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			return 6;
		}
		else if (Global_2667225.f_45[0 /*12*/].f_9)
		{
			if (__LIB_2__::func_897())
			{
				Global_2667225.f_45.f_54 = 1;
			}
			else
			{
				Global_2667225.f_45.f_54 = 0;
			}
			if (Global_2667225.f_45.f_54)
			{
				return 26;
			}
			else
			{
				return 3;
			}
		}
		else
		{
			if (!Global_2667225.f_24 == 0)
			{
				if (!SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_24.f_1))
				{
					Global_2667225.f_24 = 0;
				}
			}
			if (!Global_2667225.f_24 == 0)
			{
				return Global_2667225.f_24;
			}
			else
			{
				if (__LIB_0__::func_938(PLAYER::PLAYER_ID()))
				{
					if (__LIB_2__::func_896() && (__LIB_2__::func_940(PLAYER::PLAYER_ID()) || __LIB_2__::func_700(Global_2667225.f_512)))
					{
						return 52;
					}
					else
					{
						return 51;
					}
				}
				if (__LIB_0__::func_974())
				{
					if (func_6331(PLAYER::PLAYER_ID()))
					{
						return 33;
					}
					else
					{
						return 20;
					}
				}
				else if (__LIB_0__::func_975())
				{
					return 20;
				}
				else if ((((((__LIB_2__::func_159(1) && func_6331(PLAYER::PLAYER_ID())) && (__LIB_5__::func_185(PLAYER::PLAYER_ID()) != 157 || (__LIB_5__::func_185(PLAYER::PLAYER_ID()) == 157 && __LIB_0__::func_797() != __LIB_1__::func_730()))) && !__LIB_2__::func_895()) && !__LIB_7__::func_570(PLAYER::PLAYER_ID())) && !__LIB_1__::func_375(1)) && !(__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0) == 0 && func_6329(PLAYER::PLAYER_ID()) == 1))
				{
					if (__LIB_9__::func_782())
					{
						return 34;
					}
					else if (__LIB_9__::func_773(10f))
					{
						return 27;
					}
					else
					{
						iVar0 = __LIB_7__::func_693(PLAYER::PLAYER_ID(), 0);
						if ((__LIB_2__::func_867(iVar0) && __LIB_8__::func_848(iVar0)) && (__LIB_9__::func_497(iVar0) || __LIB_1__::func_744(PLAYER::PLAYER_ID())))
						{
							Global_2667225.f_2855 = iVar0;
							return 29;
						}
						else
						{
							return 31;
						}
					}
				}
				else if (__LIB_9__::func_773(10f))
				{
					return 27;
				}
				else
				{
					iVar0 = __LIB_7__::func_693(PLAYER::PLAYER_ID(), 0);
					if (__LIB_2__::func_867(iVar0) && __LIB_8__::func_848(iVar0))
					{
						Global_2667225.f_2855 = iVar0;
						return 29;
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 1;
}

int func_6329(int iParam0)//Position - 0x1FF17F
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_2__::func_72(iParam0, 0))
	{
		iVar0 = __LIB_2__::func_39(iParam0);
		Var1 = { func_6286(iVar0) };
		return func_6058(&Var1, 0, 0, 0, 1);
	}
	return 0;
}

int func_6331(int iParam0)//Position - 0x1FF22B
{
	struct<3> Var0;
	int iVar1;
	struct<3> Var2;
	int iVar3;
	struct<3> Var4;
	Var0 = { func_6286(iParam0) };
	if (__LIB_2__::func_72(iParam0, 0))
	{
		iVar1 = __LIB_2__::func_39(iParam0);
		Var2 = { func_6286(iVar1) };
		Var0.f_2 = 0f;
		Var2.f_2 = 0f;
		if (SYSTEM::VDIST2(Var0, Var2) < 250000f)
		{
			return 1;
		}
	}
	else
	{
		iVar3 = __LIB_9__::func_333(iParam0, 1);
		if (!iVar3 == __LIB_0__::getMinusOneOrNull())
		{
			Var4 = { func_6286(iVar3) };
			Var0.f_2 = 0f;
			Var4.f_2 = 0f;
			if (SYSTEM::VDIST2(Var0, Var4) < 250000f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_6437()//Position - 0x201131
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
				switch (iVar2)
				{
					case -2094888821:
						func_6451(iVar0);
						break;
				}
				break;
			case 186:
				func_6438(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6438(int iParam0)//Position - 0x201198
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (Local_374.f_37 == -1)
			{
				Local_374.f_37 = __LIB_36__::func_43(Var0.f_0, Var0.f_1);
			}
		}
		iVar2 = 0;
		while (iVar2 < 5)
		{
			if (func_6449(iVar2) != -1)
			{
				if (!func_608(NETWORK::PARTICIPANT_ID(), (5 + func_6449(iVar2))))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_72(func_6449(iVar2))) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_74(iVar2)))
					{
						if ((Var0.f_0 == func_6448(iVar2) || Var0.f_0 == func_14(func_6449(iVar2))) || Var0.f_0 == func_82(func_6449(iVar2)))
						{
							iVar1 = Var0.f_1;
						}
						else if (Var0.f_1 == func_14(func_6449(iVar2)) || Var0.f_1 == func_6448(func_6449(iVar2)))
						{
							iVar1 = Var0.f_0;
						}
					else
					{
						}
						else if ((ENTITY::IS_ENTITY_A_PED(iVar1) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1))) || (ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && __LIB_15__::func_400(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1), 0, 1)))
						{
							func_181((5 + func_6449(iVar2)));
							func_6445(iVar2);
						}
					}
				}
			}
			iVar2++;
		}
		if (ENTITY::IS_ENTITY_A_PED(Var0.f_0))
		{
			iVar3 = __LIB_1__::func_806();
			if (PLAYER::GET_MAX_WANTED_LEVEL() < iVar3)
			{
				if (__LIB_15__::func_407(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0)) && !func_6443(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0)))
				{
					if ((ENTITY::DOES_ENTITY_EXIST(Var0.f_1) && ENTITY::IS_ENTITY_A_PED(Var0.f_1)) && PLAYER::PLAYER_PED_ID() == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1))
					{
						__LIB_35__::func_766(PLAYER::PLAYER_ID(), iVar3, 1, 0);
					}
				}
			}
		}
		if (ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0))
		{
			iVar4 = __LIB_1__::func_806();
			if (PLAYER::GET_MAX_WANTED_LEVEL() < iVar4)
			{
				iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0), -1, false);
				iVar6 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0), 0, false);
				if (__LIB_34__::func_706(Var0.f_0, iVar5, iVar6))
				{
					if ((ENTITY::DOES_ENTITY_EXIST(Var0.f_1) && ENTITY::IS_ENTITY_A_PED(Var0.f_1)) && PLAYER::PLAYER_PED_ID() == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1))
					{
						__LIB_35__::func_766(PLAYER::PLAYER_ID(), iVar4, 1, 0);
					}
				}
			}
		}
	}
}

int func_6443(int iParam0)//Position - 0x201582
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_74(iVar0)))
		{
			if (iParam0 == func_70(iVar0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_6445(int iParam0)//Position - 0x2015F8
{
	if (func_706(iParam0))
	{
		func_6446(func_705(iParam0));
	}
}

void func_6446(bool bParam0)//Position - 0x201613
{
	if (!BitTest(Local_375[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4, bParam0))
	{
		MISC::SET_BIT(&(Local_375[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4), bParam0);
	}
}

int func_6448(int iParam0)//Position - 0x2016F8
{
	return NETWORK::NET_TO_ENT(Local_374.f_18[iParam0]);
}

int func_6449(int iParam0)//Position - 0x20170D
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 0;
		case 3:
			return 1;
		case 4:
			return 2;
		default:
	}
	return -1;
}

void func_6451(int iParam0)//Position - 0x20181D
{
	struct<6> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		Local_177.f_0 = Var0.f_2;
		Local_177.f_2 = Var0.f_4;
		Local_177.f_1 = Var0.f_5;
		__LIB_36__::func_171(12);
	}
}

void func_6452()//Position - 0x201851
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	struct<16> Var4;
	bool bVar5;
	bool bVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	bVar5 = true;
	bVar6 = true;
	bVar8 = false;
	bVar1 = false;
	while (bVar1 < 32)
	{
		Local_131[bVar1 /*3*/] = __LIB_0__::getMinusOneOrNull();
		Local_131[bVar1 /*3*/].f_1 = -1;
		Local_131[bVar1 /*3*/].f_2 = uVar3;
		MISC::CLEAR_BIT(&uLocal_182, bVar1);
		MISC::CLEAR_BIT(&uLocal_184, bVar1);
		bVar1++;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_130[iVar0 /*20*/] = __LIB_0__::getMinusOneOrNull();
		Local_130[iVar0 /*20*/].f_1 = -1;
		MISC::CLEAR_BIT(&uLocal_183, iVar0);
		Local_130[iVar0 /*20*/].f_2 = { Var4 };
		Local_130[iVar0 /*20*/].f_18 = 0;
		Local_130[iVar0 /*20*/].f_19 = 0;
		iVar0++;
	}
	iLocal_191 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			Local_130[iVar0 /*20*/] = iVar0;
			MISC::SET_BIT(&uLocal_183, iVar0);
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(Local_130[iVar0 /*20*/]);
			bVar1 = iVar2;
			if (__LIB_1__::func_693(iVar2, 0, 1))
			{
				Local_131[bVar1 /*3*/] = iVar2;
				Local_130[iVar0 /*20*/].f_1 = bVar1;
				Local_131[bVar1 /*3*/].f_1 = iVar0;
				Local_131[bVar1 /*3*/].f_2 = PLAYER::GET_PLAYER_PED(iVar2);
				StringCopy(&(Local_130[iVar0 /*20*/].f_2), PLAYER::GET_PLAYER_NAME(iVar2), 64);
				MISC::SET_BIT(&uLocal_182, bVar1);
				if (ENTITY::IS_ENTITY_DEAD(Local_131[bVar1 /*3*/].f_2, false))
				{
					MISC::SET_BIT(&uLocal_184, bVar1);
				}
				if (__LIB_1__::func_744(Local_131[bVar1 /*3*/]))
				{
					Local_130[iVar0 /*20*/].f_18 = 1;
				}
				else if (__LIB_2__::func_72(Local_131[bVar1 /*3*/], 0))
				{
					Local_130[iVar0 /*20*/].f_19 = 1;
				}
				if (iLocal_185 == iVar0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_131[bVar1 /*3*/].f_2, false))
					{
					}
				}
				if (Local_130[iVar0 /*20*/].f_18)
				{
					bVar5 = false;
					if (!BitTest(uLocal_184, bVar1) && !BitTest(uLocal_184, PLAYER::PLAYER_ID()))
					{
					}
				}
				else if (Local_130[iVar0 /*20*/].f_19)
				{
					iLocal_191++;
				}
				if (!func_608(Local_130[iVar0 /*20*/], 0))
				{
					bVar6 = false;
				}
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					bVar9 = false;
					bVar9 = false;
					while (bVar9 < 5)
					{
						if (!BitTest(Local_374.f_33, bVar9))
						{
							if (BitTest(Local_375[iVar0 /*6*/].f_3, bVar9))
							{
								MISC::SET_BIT(&(Local_374.f_33), bVar9);
							}
						}
						bVar9++;
					}
					iVar10 = 0;
					while (iVar10 < 3)
					{
						if (!func_2((2 + iVar10)))
						{
							if (func_608(Local_130[iVar0 /*20*/], (2 + iVar10)))
							{
								func_8((2 + iVar10));
							}
						}
						if (!func_2((5 + iVar10)))
						{
							if (func_608(Local_130[iVar0 /*20*/], (5 + iVar10)))
							{
								func_8((5 + iVar10));
								Local_374.f_31++;
								__LIB_36__::func_134((Local_374.f_31 - 1), 0, 0);
							}
						}
						if (func_608(Local_130[iVar0 /*20*/], (8 + iVar10)))
						{
							iVar7[iVar10] = 1;
						}
						if (!func_2((17 + iVar10)))
						{
							if (func_608(Local_130[iVar0 /*20*/], (14 + iVar10)))
							{
								func_8((17 + iVar10));
							}
						}
						if (!func_2((14 + iVar10)))
						{
							if (func_608(Local_130[iVar0 /*20*/], (11 + iVar10)))
							{
								func_8((14 + iVar10));
							}
						}
						if (!func_2(23))
						{
							if (func_608(Local_130[iVar0 /*20*/], 22))
							{
								func_8(23);
							}
						}
						bVar11 = false;
						bVar11 = false;
						while (bVar11 < 1)
						{
							if (!func_704(bVar11))
							{
								if (BitTest(Local_375[iVar0 /*6*/].f_4, bVar11))
								{
									func_6453(bVar11);
								}
							}
							bVar11++;
						}
						iVar10++;
					}
					if (func_608(Local_130[iVar0 /*20*/], 17))
					{
						bVar8 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar12 = 0;
		while (iVar12 < 3)
		{
			if (iVar7[iVar12])
			{
				if (!func_2((11 + iVar12)))
				{
					func_8((11 + iVar12));
				}
			}
			else if (func_2((11 + iVar12)))
			{
				func_7((11 + iVar12));
			}
			iVar12++;
		}
		if (bVar8)
		{
			if (!func_2(22))
			{
				func_8(22);
			}
		}
		else if (func_2(22))
		{
			func_7(22);
		}
		if (bVar6)
		{
			if (!func_2(0))
			{
				func_8(0);
			}
		}
		else if (func_2(0))
		{
			func_7(0);
		}
		if (func_26() == 0)
		{
			if (bVar5)
			{
				func_3(2);
			}
			else if (iLocal_191 == 0)
			{
				if (__LIB_0__::func_864(&(Local_374.f_3)))
				{
					if (__LIB_0__::func_937(&(Local_374.f_3), 10000, 0))
					{
						func_3(3);
					}
				}
			}
		}
	}
}

void func_6453(bool bParam0)//Position - 0x201CA2
{
	if (!BitTest(Local_374.f_34, bParam0))
	{
		MISC::SET_BIT(&(Local_374.f_34), bParam0);
	}
}

void func_6456()//Position - 0x201CFE
{
	int iVar0;
	int iVar1;
	int iVar2;
	iLocal_185 = -1;
	if (BitTest(uLocal_182, PLAYER::PLAYER_ID()))
	{
		if (BitTest(uLocal_183, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			if (!__LIB_4__::func_972(PLAYER::PLAYER_ID()))
			{
				iLocal_185 = NETWORK::PARTICIPANT_ID_TO_INT();
			}
			else if (__LIB_1__::func_5() && !__LIB_3__::func_155())
			{
				iVar0 = __LIB_2__::func_51();
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
					{
						iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
						iLocal_185 = iVar2;
					}
				}
			}
		}
	}
}

int func_6457()//Position - 0x201D74
{
	return joaat("ba_prop_battle_case_sm_03");
}

void func_6469()//Position - 0x2020B8
{
	func_178();
	func_177();
	func_6532();
	func_6531();
	func_878(1);
	if (func_26() != 0)
	{
		func_6529();
		__LIB_2__::func_15();
	}
	if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
	{
		__LIB_42__::func_157(239);
	}
	__LIB_15__::func_345(0, -1);
	__LIB_36__::func_254(1, 0);
	__LIB_3__::func_0();
	func_5897();
	__LIB_3__::func_422(&iLocal_198);
	__LIB_11__::func_662(19);
	__LIB_11__::func_662(20);
	__LIB_11__::func_662(21);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_6529()//Position - 0x204AD1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_374.f_18[iVar0]))
		{
			__LIB_1__::func_387(&(Local_374.f_18[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_374.f_16[iVar0]))
		{
			__LIB_1__::func_387(&(Local_374.f_16[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_374.f_8[iVar0]))
		{
			__LIB_1__::func_387(&(Local_374.f_8[iVar0]));
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_374.f_12[iVar0]))
		{
			__LIB_1__::func_387(&(Local_374.f_12[iVar0]));
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_374.f_24[iVar0]))
		{
			__LIB_1__::func_387(&(Local_374.f_24[iVar0]));
		}
		iVar0++;
	}
	__LIB_1__::func_387(&(Local_374.f_28));
	__LIB_1__::func_387(&(Local_374.f_29));
}

void func_6531()//Position - 0x204BD6
{
	int iVar0;
	int iVar1;
	iVar0 = func_884();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_372[iVar1], false);
		iVar1++;
	}
	iVar0 = func_881();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_373[iVar1], false);
		iVar1++;
	}
}

void func_6532()//Position - 0x204C2E
{
	if (__LIB_36__::func_132(0))
	{
		if (!__LIB_15__::func_293(&iLocal_175))
		{
			if (func_26() == 0)
			{
				func_664(6);
			}
			else
			{
				func_664(5);
			}
		}
		else
		{
			__LIB_15__::func_574(&iLocal_175);
		}
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	}
}

void func_6534(bool bParam0, bool bParam1)//Position - 0x204C89
{
	bool bVar0;
	var uVar1;
	if (!__LIB_36__::func_172(0))
	{
		uVar1 = __LIB_30__::func_418(func_26(), bParam0, bVar0, bParam1);
		Global_1944303.f_2 = Local_374.f_35;
		Global_1944303.f_3 = Local_374.f_36;
		Global_1944303.f_20 = Local_374.f_30;
		Global_1944303.f_34 = Local_374.f_37;
		__LIB_36__::func_110(bParam0, uVar1, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
		__LIB_36__::func_171(0);
	}
}

int func_6594(struct<21> Param0)//Position - 0x2070AC
{
	__LIB_0__::func_935(8, Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(__LIB_30__::func_459(239, -1, -1, -1, -1, -1));
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(__LIB_30__::func_458(239, -1, -1, -1));
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(__LIB_30__::func_848(239, -1, 1, -1, -1, -1));
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_374, 38, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_375, 49, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	__LIB_35__::func_572(0, 0, 0);
	func_6595();
	return 1;
}

void func_6595()//Position - 0x207116
{
	if (!__LIB_36__::func_132(0))
	{
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
		__LIB_36__::func_131(0);
	}
}

