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
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 0, 1))
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
		__LIB_0__::func_671();
		if (__LIB_41__::func_318(1))
		{
			func_6534(0, 1);
			func_6469();
		}
		if (__LIB_6__::func_949())
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
			if (__LIB_10__::func_923())
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
				if (!__LIB_0__::func_649(&(Local_374.f_3)))
				{
					__LIB_0__::func_580(&(Local_374.f_3), 0, 0);
				}
				else
				{
					func_12();
					func_10();
					func_6();
					if (__LIB_2__::func_47(&(Local_374.f_3), func_5(), 0))
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
			if (__LIB_0__::func_584(iVar1))
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
		if (__LIB_4__::func_829() > -1)
		{
			Local_374.f_30 = __LIB_4__::func_829();
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
			if (__LIB_0__::func_584(iVar2))
			{
				if (__LIB_1__::func_263(&(Local_374.f_28), 26, iVar2, Var0, fVar1, 1, 1, 1))
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
		if (__LIB_0__::func_584(iVar2))
		{
			__LIB_32__::func_562(Var0, 30f, 0);
			MISC::CLEAR_AREA(Var0, 30f, false, false, false, true);
			if (__LIB_18__::func_220(&(Local_374.f_29), iVar2, Var0, fVar1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
			{
				iVar3 = NETWORK::NET_TO_VEH(Local_374.f_29);
				__LIB_1__::func_119(iVar3);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar3, true);
				VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iVar3, true);
				VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iVar3, false);
				VEHICLE::SET_VEHICLE_STRONG(iVar3, true);
				VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar3, true);
				VEHICLE::LOCK_DOORS_WHEN_NO_LONGER_NEEDED(iVar3);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar3, true);
				ENTITY::SET_PICK_UP_BY_CARGOBOB_DISABLED(iVar3, true);
				__LIB_14__::func_715(iVar3, 11);
				__LIB_10__::func_868(iVar3);
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
				if (__LIB_0__::func_584(Local_193[bVar0 /*23*/]))
				{
					if (func_73(bVar0) != -1)
					{
						if (__LIB_0__::func_668(&(Local_374.f_18[bVar0]), func_72(func_73(bVar0)), 26, Local_193[bVar0 /*23*/], -1, 1, 1, 1))
						{
							func_68(bVar0);
						}
					}
					else if (__LIB_1__::func_263(&(Local_374.f_18[bVar0]), 26, Local_193[bVar0 /*23*/], Local_193[bVar0 /*23*/].f_1, Local_193[bVar0 /*23*/].f_4, 1, 1, 1))
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
			if (__LIB_0__::func_584(Local_192[bVar0 /*5*/]))
			{
				if (__LIB_25__::func_475(Local_192[bVar0 /*5*/].f_1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (__LIB_18__::func_220(&(Local_374.f_8[bVar0]), Local_192[bVar0 /*5*/], Local_192[bVar0 /*5*/].f_1, Local_192[bVar0 /*5*/].f_4, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
					{
						iVar2 = func_88(bVar0);
						__LIB_1__::func_119(iVar2);
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
				else if (__LIB_25__::func_475(Local_192[bVar0 /*5*/].f_1, 0f, 0f, 0f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
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
			if (__LIB_2__::func_63(func_72(bVar0)))
			{
				if (__LIB_0__::func_584(func_84()))
				{
					if (__LIB_1__::func_262(&(Local_374.f_12[bVar0]), func_84(), ENTITY::GET_ENTITY_COORDS(func_88(bVar0), true), 1, 1, 0, 1, 0, 0, 0))
					{
						ENTITY::SET_ENTITY_MAX_HEALTH(func_82(bVar0), __LIB_9__::func_234());
						ENTITY::SET_ENTITY_HEALTH(func_82(bVar0), __LIB_9__::func_234(), 0);
						ENTITY::SET_ENTITY_VISIBLE(func_82(bVar0), false, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(func_82(bVar0), func_88(bVar0), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_88(bVar0), "chassis_dummy"), func_80(), func_79(), false, false, false, false, 2, true, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_84());
					}
				}
			}
		}
		else if (!func_16(bVar0) && !NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_78(bVar0)))
		{
			if (__LIB_0__::func_584(func_6457()))
			{
				__LIB_0__::func_121(func_14(bVar0));
				if (__LIB_1__::func_262(&(Local_374.f_16[bVar0]), func_6457(), ENTITY::GET_ENTITY_COORDS(func_88(bVar0), true), 1, 1, 0, 1, 0, 0, 0))
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
					ENTITY::ATTACH_ENTITY_TO_ENTITY(func_19(bVar0), func_88(bVar0), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_88(bVar0), "chassis_dummy"), func_77(), __LIB_2__::func_364(), false, false, false, false, 2, true, 0);
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
	if (__LIB_0__::func_582() != __LIB_0__::func_160())
	{
		Var1 = { func_113(__LIB_0__::func_582()) };
	}
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 10)
	{
		if (!__LIB_13__::func_307(iVar3))
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
		if (!__LIB_25__::func_475(Local_192[iVar0 /*5*/].f_1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!__LIB_25__::func_475(Local_193[iVar0 /*23*/].f_1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
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
		if (__LIB_2__::func_87(iParam0))
		{
			Var1 = { __LIB_2__::func_86(iParam0) };
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
		Var1 = { __LIB_1__::func_986(__LIB_1__::func_987(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32)) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	else
	{
		func_166(__LIB_1__::func_265(iParam0), &iVar0);
		if (iVar0 > 0)
		{
			Var1 = { __LIB_1__::func_986(__LIB_1__::func_987(iVar0)) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (__LIB_3__::func_859(iParam0))
	{
		Var1 = { __LIB_19__::func_239(iParam0) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	if (__LIB_4__::func_15(iParam0))
	{
		iVar2 = __LIB_1__::func_259(iParam0);
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
		if (__LIB_2__::func_87(iParam0))
		{
			Var1 = { __LIB_2__::func_86(iParam0) };
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
	return __LIB_1__::func_265(iParam0);
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
			if (!__LIB_29__::func_58(2))
			{
				__LIB_39__::func_279(239, 1, -1, 0);
				__LIB_20__::func_415();
				func_109();
				func_107();
				__LIB_29__::func_57(2);
			}
			else if (!__LIB_29__::func_58(3))
			{
				if (__LIB_2__::func_47(&(Local_374.f_3), 10000, 0))
				{
					__LIB_11__::func_64();
					__LIB_29__::func_57(3);
				}
			}
			if (!__LIB_26__::func_303() && !__LIB_0__::func_114())
			{
				if (func_26() == 0)
				{
					if (Global_2703735.f_4.f_10)
					{
						if (!__LIB_29__::func_58(4))
						{
							__LIB_42__::func_227(-1, 0, 0, -1, 0, 0);
							__LIB_29__::func_57(4);
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
								if (!__LIB_3__::func_902(PLAYER::PLAYER_ID(), 0))
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
				__LIB_18__::func_455();
			}
			break;
		case 2:
			__LIB_18__::func_455();
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
		__LIB_0__::func_523(&(iLocal_195[iVar0]));
		__LIB_0__::func_523(&(uLocal_196[iVar0]));
		iVar0++;
	}
	__LIB_0__::func_523(&iLocal_197);
}

void func_180()//Position - 0xB884
{
	bool bVar0;
	int iVar1;
	if (!__LIB_29__::func_58(1))
	{
		if (func_26() != 0)
		{
			if (Global_2703735.f_4.f_10)
			{
				if ((!__LIB_26__::func_303() && !__LIB_0__::func_114()) && !__LIB_39__::func_287(239))
				{
					if (__LIB_28__::func_467())
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
			__LIB_28__::func_391(1, iVar1);
			if (bVar0)
			{
				Local_132.f_4 = __LIB_19__::func_834() + 1;
				if (func_521())
				{
					__LIB_28__::func_707();
				}
			}
			if (func_26() != 3 && func_26() != 2)
			{
				__LIB_40__::func_960(239, -1, bVar0, 0, 0, -1);
			}
			__LIB_37__::func_97();
			__LIB_42__::func_779(239, bVar0, &Local_132, 0);
			func_6534(bVar0, 0);
			__LIB_29__::func_57(1);
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
	if (__LIB_28__::func_372())
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
	if (__LIB_28__::func_467())
	{
		if (!func_565(iParam0))
		{
			switch (iParam0)
			{
				case 0:
					HUD::CLEAR_HELP(true);
					__LIB_40__::func_974(86, "BB_SV_BMT_00" /* GXT: Client Challenge */, "BB_SV_BMS_00" /* GXT: Steal the antiques and deliver them to the drop-off */, 1, -1, 2, 1, 0);
					func_545(0);
					break;
				case 1:
					HUD::CLEAR_HELP(true);
					__LIB_40__::func_974(86, "BB_SV_BMT_02" /* GXT: Challenge Passed */, "BB_SV_BMS_02" /* GXT: Successfully delivered the antiques */, 1, -1, 2, 1, 0);
					func_545(1);
					break;
				case 2:
					HUD::CLEAR_HELP(true);
					__LIB_40__::func_974(86, "BB_SV_BMT_01" /* GXT: Challenge Over */, "BB_SV_BMS_01" /* GXT: Failed to deliver the antiques to the drop-off */, 1, -1, 2, 1, 0);
					func_545(2);
					break;
				case 3:
					HUD::CLEAR_HELP(true);
					__LIB_40__::func_974(86, "BB_SV_BMT_01" /* GXT: Challenge Over */, "BB_SV_BMS_03" /* GXT: Not enough players to participate in the challenge */, 1, -1, 2, 1, 0);
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
		switch (__LIB_37__::func_99(PLAYER::PLAYER_ID()))
		{
			case 0:
				__LIB_18__::func_455();
				break;
			case 1:
			case 2:
				func_649();
				__LIB_18__::func_455();
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
	if (__LIB_37__::func_146())
	{
		iVar1 = -1;
		if (__LIB_0__::func_436())
		{
			__LIB_0__::func_488(0);
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
						__LIB_0__::func_579(&uLocal_203);
					}
					iVar1 = iVar0;
				}
				else
				{
					Jump @132; //curOff = 75
					if (func_582(iVar0) || __LIB_0__::func_114(iVar0))
					{
						Var2 = { __LIB_0__::func_390() };
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
					if (!__LIB_0__::func_436())
					{
						__LIB_0__::func_488(1);
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
					__LIB_6__::func_771();
				}
				else
				{
					__LIB_6__::func_833();
				}
			}
		}
	}
	if (!__LIB_0__::func_75())
	{
		MemCopy(&sVar0, {func_577(iParam0)}, 4);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&sVar0))
		{
			__LIB_0__::func_203(&uLocal_207, 2, 0, "PAIGE", 0, 1);
			if (__LIB_37__::func_882(&uLocal_207, "PAIFMAU", &sVar0, 9, 0, 0, 0))
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
			return __LIB_0__::func_649(&uLocal_189);
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
	if (__LIB_0__::func_649(&(Local_374.f_3)))
	{
		iLocal_186 = (func_5() - __LIB_1__::func_295(&(Local_374.f_3), 0, 0));
		if (iLocal_186 > 30000)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 6;
		}
		__LIB_1__::func_428();
		if (iLocal_186 > 0)
		{
			__LIB_6__::func_929(iLocal_186, "CHALLENGE_END" /* GXT: CHALLENGE END */, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
		else
		{
			__LIB_6__::func_929(0, "CHALLENGE_END" /* GXT: CHALLENGE END */, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
		func_628();
		func_615();
	}
}

void func_615()//Position - 0x3E583
{
	if (((func_2(2) && func_2(3)) && func_2(4)) || __LIB_3__::func_902(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	if (!__LIB_0__::func_649(&uLocal_187) && !__LIB_0__::func_649(&uLocal_189))
	{
		if (iLocal_198 == -1)
		{
			__LIB_7__::func_316(&iLocal_198, 5, "", 1, 0, 0, 0);
		}
		if (__LIB_2__::func_187(iLocal_198, 1))
		{
			__LIB_7__::func_249(&iLocal_198);
			func_619(0);
			func_538(2);
			HUD::FLASH_MINIMAP_DISPLAY();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "RADAR_ACTIVATE", "DLC_BTL_SECURITY_VANS_RADAR_PING_SOUNDS", false);
			__LIB_0__::func_580(&uLocal_187, 0, 0);
			__LIB_0__::func_580(&uLocal_189, 0, 0);
		}
	}
	if (__LIB_0__::func_649(&uLocal_189) && __LIB_2__::func_47(&uLocal_189, 13500, 0))
	{
		__LIB_0__::func_579(&uLocal_189);
	}
	if (__LIB_0__::func_649(&uLocal_187) && __LIB_2__::func_47(&uLocal_187, 20000, 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "RADAR_READY", "DLC_BTL_SECURITY_VANS_RADAR_PING_SOUNDS", false);
		__LIB_0__::func_579(&uLocal_187);
	}
	if (__LIB_0__::func_649(&uLocal_187))
	{
		__LIB_8__::func_79(__LIB_1__::func_295(&uLocal_187, 0, 0), 20000, "BB_SV_RADAR" /* GXT: RADAR PING */, 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	else
	{
		__LIB_8__::func_79(20000, 20000, "BB_SV_RADAR" /* GXT: RADAR PING */, 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
}

void func_619(int iParam0)//Position - 0x3E9D9
{
	if (func_541(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				__LIB_21__::func_665("BB_SV_HMT_00" /* GXT: Press ~INPUT_CONTEXT~ to activate the radar ping and locate the security vans. */, 1);
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
			if (__LIB_0__::func_667(2, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_666(2, iVar0);
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
			__LIB_10__::func_123(2, iVar0);
		}
		else
		{
			__LIB_10__::func_122(2, iVar0);
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
			__LIB_40__::func_513("BB_SV_OBJ_001" /* GXT: Steal the ~HUD_COLOUR_GREEN~antiques.~s~ */);
		}
		else if ((3 - iLocal_200) > 1)
		{
			__LIB_40__::func_513("BB_SV_OBJ_000" /* GXT: Find and assault the ~HUD_COLOUR_RED~security vans.~s~ */);
		}
		else
		{
			__LIB_40__::func_513("BB_SV_OBJ_000S" /* GXT: Find and assault the ~HUD_COLOUR_RED~security van.~s~ */);
		}
	}
	else if (func_2(22))
	{
		if (func_608(NETWORK::PARTICIPANT_ID(), 17))
		{
			__LIB_40__::func_513("BB_SV_LOSE_COPS" /* GXT: Lose the cops. */);
		}
		else
		{
			__LIB_40__::func_513("BB_SV_HELP_COPS" /* GXT: Wait for your team to lose the cops. */);
		}
	}
	else if ((func_608(NETWORK::PARTICIPANT_ID(), 8) || func_608(NETWORK::PARTICIPANT_ID(), 9)) || func_608(NETWORK::PARTICIPANT_ID(), 10))
	{
		__LIB_40__::func_513("BB_SV_OBJ_01" /* GXT: Deliver the antiques to the ~HUD_COLOUR_YELLOW~drop-off.~s~ */);
	}
	else
	{
		__LIB_40__::func_513("BB_SV_OBJ_02" /* GXT: Help deliver the antiques to the ~HUD_COLOUR_YELLOW~drop-off.~s~ */);
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
		GRAPHICS::DRAW_MARKER(1, Var4, 0f, 0f, 0f, 0f, 0f, 0f, __LIB_13__::func_324(), __LIB_13__::func_324(), __LIB_13__::func_301(), iVar0, iVar1, iVar2, 150, false, false, 2, false, 0, 0, false);
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
		__LIB_24__::func_756(func_19(iParam0), iVar0, iVar1, iVar2);
		return;
	}
	if (((((func_2((8 + iParam0)) && !func_2((11 + iParam0))) && !func_2((17 + iParam0))) && !func_608(NETWORK::PARTICIPANT_ID(), (8 + iParam0))) && !func_608(NETWORK::PARTICIPANT_ID(), (14 + iParam0))) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(func_15(iParam0)))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(func_23(iParam0)))
		{
			HUD::GET_HUD_COLOUR(18, &iVar4, &iVar5, &iVar6, &uVar7);
			__LIB_24__::func_756(func_18(iParam0), iVar4, iVar5, iVar6);
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
			iLocal_197 = __LIB_0__::func_392(func_111(func_34()), 1);
		}
	}
	else
	{
		__LIB_0__::func_523(&iLocal_197);
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
				uLocal_196[iParam0] = __LIB_6__::func_840(func_15(iParam0));
				HUD::SET_BLIP_SCALE(uLocal_196[iParam0], 1f);
				HUD::SET_BLIP_PRIORITY(uLocal_196[iParam0], 12);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_196[iParam0], "BB_SV_BLP_ANT" /* GXT: Antique */);
			}
		}
	}
	else
	{
		__LIB_0__::func_523(&(uLocal_196[iParam0]));
	}
}

void func_656(int iParam0)//Position - 0x3FA38
{
	float fVar0;
	float fVar1;
	int iVar2;
	if ((((__LIB_0__::func_649(&uLocal_189) && __LIB_1__::func_295(&uLocal_189, 0, 0) > (500 * iParam0)) && __LIB_1__::func_295(&uLocal_189, 0, 0) < (12000 + (500 * iParam0))) && !func_2((2 + iParam0))) || (func_2((14 + iParam0)) && !func_2((2 + iParam0))))
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
			if (__LIB_1__::func_295(&uLocal_189, 0, 0) < (7000 + (500 * iParam0)))
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
				fVar1 = (fVar0 - SYSTEM::TO_FLOAT((__LIB_1__::func_295(&uLocal_189, 0, 0) - (7000 + (500 * iParam0)))));
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
		__LIB_0__::func_523(&(iLocal_195[iParam0]));
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
	return __LIB_7__::func_246(iParam0, func_523(), 0);
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
	if (!__LIB_29__::func_28(iParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(func_666(iParam0));
		__LIB_29__::func_27(iParam0);
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
		if (__LIB_0__::func_649(&(Local_374.f_3)))
		{
			iLocal_186 = (func_5() - __LIB_1__::func_295(&(Local_374.f_3), 0, 0));
		}
	}
	__LIB_34__::func_238(iLocal_186, func_26() != 0, &iLocal_175, -1);
}

void func_676()//Position - 0x40396
{
	if (func_26() == 0)
	{
		if (func_682() != 13)
		{
			if (!__LIB_29__::func_58(func_682()))
			{
				if (func_681())
				{
					func_664(func_680());
					__LIB_29__::func_57(func_682());
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
	if (__LIB_29__::func_28(iParam0))
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
	if (__LIB_29__::func_58(12))
	{
		if (__LIB_2__::func_47(&(Local_177.f_3), Local_177.f_2, 0) || Local_177.f_2 == 0)
		{
			if (func_688(Local_177.f_0, Local_177.f_1, 0))
			{
				if (!Local_177.f_1 && Local_374.f_31 > 1)
				{
					Local_177.f_0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) + 1;
				}
				if (PLAYER::GET_MAX_WANTED_LEVEL() < Local_177.f_0 && Local_177.f_0 <= __LIB_1__::func_363())
				{
					PLAYER::SET_MAX_WANTED_LEVEL(Local_177.f_0);
				}
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 17))
				{
					__LIB_10__::func_885();
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
	__LIB_0__::func_579(&(Local_177.f_3));
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
	if (__LIB_8__::func_739(PLAYER::PLAYER_ID(), 0, -1))
	{
		return 0;
	}
	if (bParam1)
	{
		return 1;
	}
	if (__LIB_21__::func_348())
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
			if (!__LIB_1__::func_909())
			{
				__LIB_18__::func_369(1, -1);
			}
			return;
		}
		iVar0++;
	}
	if (__LIB_1__::func_909())
	{
		__LIB_18__::func_369(0, -1);
	}
}

void func_695()//Position - 0x4097C
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_374.f_28) && !__LIB_0__::func_680(Local_374.f_28))
	{
		if (!__LIB_29__::func_29(NETWORK::NET_TO_PED(Local_374.f_28), joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")))
		{
			if (__LIB_6__::func_924(Local_374.f_28))
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
			if (__LIB_6__::func_924(Local_374.f_28))
			{
				AUDIO::STOP_PED_SPEAKING(NETWORK::NET_TO_PED(Local_374.f_28), false);
				__LIB_6__::func_834(NETWORK::NET_TO_PED(Local_374.f_28), "GENERIC_THANKS", 3);
				AUDIO::STOP_PED_SPEAKING(NETWORK::NET_TO_PED(Local_374.f_28), true);
			}
		}
	}
}

void func_702(bool bParam0)//Position - 0x40CFF
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_74(bParam0)) && !__LIB_0__::func_680(func_74(bParam0)))
	{
		__LIB_7__::func_121(func_74(bParam0), &(Local_194[bParam0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1, 0);
		func_707(bParam0);
		if (func_73(bParam0) != -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_72(func_73(bParam0))) && __LIB_0__::func_121(func_14(func_73(bParam0))))
			{
				if (PED::IS_PED_IN_VEHICLE(func_70(bParam0), func_88(func_73(bParam0)), false))
				{
					if (!func_2((5 + func_73(bParam0))))
					{
						if (!__LIB_29__::func_29(func_70(bParam0), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")))
						{
							if (__LIB_6__::func_924(func_74(bParam0)))
							{
								TASK::TASK_VEHICLE_DRIVE_WANDER(func_70(bParam0), func_88(func_73(bParam0)), 10f, 786597);
							}
						}
					}
					else if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(func_88(func_73(bParam0))) != 8)
					{
						if (__LIB_6__::func_924(func_74(bParam0)))
						{
							PED::SET_PED_FLEE_ATTRIBUTES(func_70(bParam0), 256, true);
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(func_70(bParam0), func_88(func_73(bParam0)), PLAYER::PLAYER_PED_ID(), 8, 25f, 786468, 100f, 100f, true);
						}
					}
				}
				else if (!__LIB_29__::func_29(func_70(bParam0), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")))
				{
					if (__LIB_6__::func_924(func_74(bParam0)))
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_70(bParam0), ENTITY::GET_ENTITY_COORDS(func_88(func_73(bParam0)), true), 20f, false, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_70(bParam0), 299.9f, 0);
					}
				}
			}
		}
		else if (!BitTest(Local_374.f_33, bParam0) && !func_703(bParam0))
		{
			if (!__LIB_29__::func_29(func_70(bParam0), joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_193[bParam0 /*23*/].f_6)))
				{
					if (__LIB_6__::func_924(func_74(bParam0)))
					{
						TASK::TASK_START_SCENARIO_IN_PLACE(func_70(bParam0), &(Local_193[bParam0 /*23*/].f_6), 0, false);
					}
				}
			}
		}
		else if (!__LIB_29__::func_29(func_70(bParam0), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")))
		{
			if (__LIB_6__::func_924(func_74(bParam0)))
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
	if ((func_26() != 0 || !NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_74(bParam0))) || __LIB_0__::func_680(func_74(bParam0)))
	{
		return;
	}
	if (!BitTest(Local_374.f_33, bParam0))
	{
		if (!BitTest(Local_375[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3, bParam0))
		{
			if (__LIB_0__::func_582() == Local_374.f_7)
			{
				if (__LIB_20__::func_352(func_70(bParam0)) && func_709(func_70(bParam0)))
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
		if (__LIB_26__::func_305(Local_374.f_24[iParam0], &uLocal_163))
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
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(func_18(iParam0), PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), func_111(func_34()), (__LIB_13__::func_324() * 0.8f), 1))
			{
				if (!func_608(NETWORK::PARTICIPANT_ID(), (14 + iParam0)))
				{
					if (__LIB_6__::func_924(Local_374.f_24[iParam0]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) == -1)
						{
							if (__LIB_6__::func_762(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1093140480, 1, 1056964608, 0, 1, 0))
							{
								func_181((14 + iParam0));
								func_684((8 + iParam0));
								__LIB_4__::func_509(&(Local_374.f_24[iParam0]));
								__LIB_18__::func_450("BB_SV_TICK_01" /* GXT: You delivered an antique. */, 0);
								__LIB_1__::func_444();
								__LIB_39__::func_734(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_COLLECT_CHECKPOINT"), 250, 1, -1, 0, 0, 0);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "MP_AWARD", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
							}
						}
						else
						{
							func_181((14 + iParam0));
							func_684((8 + iParam0));
							__LIB_4__::func_509(&(Local_374.f_24[iParam0]));
							__LIB_18__::func_450("BB_SV_TICK_01" /* GXT: You delivered an antique. */, 0);
							__LIB_1__::func_444();
							__LIB_39__::func_734(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_COLLECT_CHECKPOINT"), 250, 1, -1, 0, 0, 0);
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
						__LIB_18__::func_450("BB_SV_TICK_00" /* GXT: You collected an antique. */, 0);
					}
				}
				else if (!func_608(NETWORK::PARTICIPANT_ID(), (19 + iParam0)))
				{
					func_181((19 + iParam0));
					__LIB_36__::func_325("BB_SV_TICK_02" /* GXT: ~a~ collected an antique. */, iVar1, 0, 0, 0, 1, 0);
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
					if (__LIB_0__::func_682(func_23(iParam0)))
					{
						OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(func_15(iParam0), PLAYER::PLAYER_PED_ID());
						AUDIO::PLAY_SOUND_FRONTEND(-1, "flight_recorder", "dlc_xm_pickup_sweetener_sounds", true);
						func_181(23);
					}
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_78(iParam0)) && __LIB_0__::func_682(func_78(iParam0)))
			{
				iVar2 = func_78(iParam0);
				__LIB_4__::func_509(&iVar2);
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
			if (__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), func_14(iParam0), 60f, 0))
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
					if (__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), func_19(iParam0), 2.5f, 0))
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
				if (__LIB_6__::func_924(func_72(iParam0)))
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
	if (!func_608(NETWORK::PARTICIPANT_ID(), 18) && !__LIB_3__::func_902(PLAYER::PLAYER_ID(), 0))
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
			__LIB_1__::func_468();
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
			uLocal_372[iVar4] = __LIB_11__::func_517(Var0, fVar2);
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
	if (!__LIB_10__::func_960())
	{
		return 0;
	}
	if (iParam1 && !__LIB_2__::func_232())
	{
		return 0;
	}
	if (!__LIB_6__::func_279())
	{
		if (__LIB_9__::func_144())
		{
			if (__LIB_24__::func_766(1))
			{
				__LIB_10__::func_951();
			}
			__LIB_24__::func_95();
			return 0;
		}
		return 0;
	}
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
	switch (*uParam0)
	{
		case 0:
			__LIB_33__::func_538();
			__LIB_36__::func_140(&Global_1941652);
			__LIB_41__::func_342(&Global_1941652);
			if (__LIB_8__::func_679(&(Global_1941652.f_1)))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
			}
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 256, 0);
				MISC::SET_BIT(&(Global_2815059.f_5194), 2);
			}
			if (!__LIB_2__::func_334())
			{
				__LIB_4__::func_70();
				MISC::SET_BIT(&(Global_2815059.f_5194), 4);
			}
			if (!__LIB_2__::func_245())
			{
				__LIB_0__::func_802();
				MISC::SET_BIT(&(Global_2815059.f_5194), 3);
			}
			uParam0->f_1 = 0;
			uParam0->f_2 = 0;
			uParam0->f_3 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			iVar0 = __LIB_1__::func_556(11389, -1, 0);
			if (!BitTest(iVar0, 6))
			{
				MISC::SET_BIT(&iVar0, 6);
				__LIB_1__::func_597(11389, iVar0, -1, 1, 0);
			}
			else if (!BitTest(iVar0, 7))
			{
				MISC::SET_BIT(&iVar0, 7);
				__LIB_1__::func_597(11389, iVar0, -1, 1, 0);
			}
			else if (!BitTest(iVar0, 8))
			{
				MISC::SET_BIT(&iVar0, 8);
				MISC::SET_BIT(&(uParam0->f_2), 1);
				__LIB_1__::func_597(11389, iVar0, -1, 1, 0);
			}
			if (__LIB_0__::func_1("GB_SPEC_CON" /* GXT: Press ~INPUT_CONTEXT~ to spectate your Bodyguards. */))
			{
				HUD::CLEAR_HELP(true);
			}
			__LIB_1__::func_484(24);
			Global_1943929.f_4 = 2;
			*uParam0 = 1;
			break;
		case 1:
			if (BitTest(uParam0->f_2, 1) && __LIB_28__::func_34(0))
			{
				__LIB_1__::func_278("GB_SPEC_MENH" /* GXT: You can choose to spectate your Bodyguards in the VIP Abilities Interaction Menu */, -1);
				__LIB_36__::func_794(1);
				MISC::CLEAR_BIT(&(uParam0->f_2), 1);
			}
			if (!__LIB_6__::func_153(&(Global_1941652.f_1)) && __LIB_37__::func_107(5))
			{
				STREAMING::CLEAR_FOCUS();
				__LIB_19__::func_387(&Global_1941652, 4, 0, 8);
			}
			else
			{
				if (!BitTest(Global_2815059.f_5194, 2) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
				{
					__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 256, 0);
					MISC::SET_BIT(&(Global_2815059.f_5194), 2);
				}
				if (__LIB_4__::func_746(&(Global_1941652.f_1)) && __LIB_6__::func_155())
				{
					if (!__LIB_37__::func_107(5))
					{
						if (__LIB_6__::func_153(&(Global_1941652.f_1)))
						{
							__LIB_36__::func_849(uParam0, 0);
						}
					}
				}
			}
			if (__LIB_34__::func_493(uParam0))
			{
				__LIB_36__::func_849(uParam0, iParam2);
			}
			if (__LIB_25__::func_288(0, 1, 0))
			{
				__LIB_37__::func_9(bParam3);
			}
			break;
		case 2:
			if (!BitTest(uParam0->f_2, 3))
			{
				if ((CAM::IS_SCREEN_FADED_OUT() && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1)) && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 99)
				{
					MISC::SET_BIT(&(uParam0->f_2), 3);
					__LIB_41__::func_319(&Global_1941652, 0);
					__LIB_0__::func_579(&(uParam0->f_4));
					__LIB_0__::func_580(&(uParam0->f_4), 0, 0);
					STREAMING::SET_FOCUS_ENTITY(PLAYER::PLAYER_PED_ID());
				}
				else if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
				}
			}
			else if (__LIB_0__::func_86(uParam0->f_6) || func_5904(uParam0->f_10, 0, 0, 0, 0, 0, 0, 0, 1, 3000, 1, 1, 0, 0, 0, 0, 1, 0))
			{
				if (__LIB_0__::func_649(&(uParam0->f_4)))
				{
					if (!__LIB_2__::func_47(&(uParam0->f_4), iParam5, 0))
					{
						return 0;
					}
				}
				CAM::DO_SCREEN_FADE_IN(1000);
				__LIB_0__::func_579(&(uParam0->f_4));
				uParam0->f_2 = 0;
				*uParam0 = 0;
				bVar2 = !__LIB_24__::func_94();
				bVar1 = __LIB_10__::func_960();
				func_5897();
				__LIB_24__::func_93();
				if (((__LIB_3__::func_803(PLAYER::PLAYER_ID()) != 153 && __LIB_3__::func_803(PLAYER::PLAYER_ID()) != 191) && !__LIB_24__::func_766(0)) && __LIB_18__::func_259(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_1__::func_278("GB_SPEC_NO" /* GXT: Not enough Bodyguards to continue spectating. */, -1);
					__LIB_36__::func_794(1);
				}
				if (bVar1)
				{
					__LIB_11__::func_64();
				}
				__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
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
			if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
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
	if ((__LIB_6__::func_338() == 3 || __LIB_6__::func_337() == 3) || (__LIB_0__::func_734() && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0)))
	{
		return;
	}
	if (__LIB_4__::func_766(Global_4718592.f_116524))
	{
		if ((!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT())
		{
			if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_727()))
			{
				CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(__LIB_0__::func_727());
			}
		}
	}
	if (__LIB_6__::func_338() == 1)
	{
		if (__LIB_3__::func_646() && __LIB_0__::func_706())
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (__LIB_6__::func_336() == 1 || __LIB_6__::func_336() == 2)
				{
					CAM::DO_SCREEN_FADE_IN(250);
					__LIB_6__::func_335(0);
				}
			}
			return;
		}
	}
	if (!BitTest(uParam0->f_1, 13))
	{
		if (__LIB_1__::func_593())
		{
			if (__LIB_6__::func_144(&(uParam0->f_1)) != 0)
			{
				func_5883(uParam0, 1);
				MISC::SET_BIT(&(uParam0->f_1), 13);
			}
		}
	}
	if (!__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
	{
		if (!__LIB_7__::func_452(PLAYER::PLAYER_ID(), 1))
		{
			if (__LIB_9__::func_50(PLAYER::PLAYER_ID(), 0))
			{
				__LIB_1__::func_769(PLAYER::PLAYER_ID(), 0);
			}
			if (!BitTest(Global_2621446, 9))
			{
				__LIB_4__::func_71();
			}
			__LIB_6__::func_334(&(uParam0->f_47));
		}
	}
	if (__LIB_6__::func_153(&(uParam0->f_1)))
	{
		__LIB_42__::func_230(uParam0);
		if (((__LIB_6__::func_333() && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			__LIB_8__::func_852(&(uParam0->f_1), 0);
		}
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 11)
		{
			__LIB_6__::func_558(&(uParam0->f_1));
		}
		else if (BitTest(uParam0->f_1, 2))
		{
			__LIB_6__::func_330(&(uParam0->f_1));
		}
	}
	else
	{
		__LIB_26__::func_74(&(uParam0->f_1), 0);
		if (BitTest(uParam0->f_1, 2))
		{
			__LIB_6__::func_330(&(uParam0->f_1));
		}
	}
	if ((__LIB_6__::func_144(&(uParam0->f_1)) == 0 || __LIB_6__::func_144(&(uParam0->f_1)) == 1) || __LIB_6__::func_144(&(uParam0->f_1)) == 6)
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
		if (__LIB_6__::func_144(&(uParam0->f_1)) == 3)
		{
			if (!BitTest(uParam0->f_1, 5))
			{
				MISC::SET_BIT(&(uParam0->f_1), 5);
				MISC::SET_BIT(&Global_2621446, 4);
			}
		}
	}
	if (((__LIB_6__::func_144(&(uParam0->f_1)) == 0 || __LIB_6__::func_144(&(uParam0->f_1)) == 4) || __LIB_6__::func_144(&(uParam0->f_1)) == 5) || __LIB_6__::func_144(&(uParam0->f_1)) == 6)
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
		__LIB_1__::func_60();
	}
	if (BitTest(uParam0->f_1, 14))
	{
		if (!Global_1931426)
		{
			__LIB_6__::func_320(&(uParam0->f_47));
		}
		MISC::CLEAR_BIT(&(uParam0->f_1), 14);
	}
	switch (__LIB_6__::func_144(&(uParam0->f_1)))
	{
		case 0:
			__LIB_6__::func_554(uParam0);
			break;
		case 1:
			__LIB_38__::func_313(uParam0);
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
	if (__LIB_6__::func_280())
	{
		__LIB_41__::func_342(uParam0);
		MISC::SET_BIT(&(uParam0->f_47), 6);
		__LIB_6__::func_276();
		if (__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0) || (__LIB_6__::func_153(&(uParam0->f_1)) && __LIB_4__::func_746(&(uParam0->f_1))))
		{
			if (!__LIB_6__::func_275(__LIB_0__::func_727()) || !__LIB_19__::func_338(&(uParam0->f_47), &iVar0, &uVar1, __LIB_0__::func_727()))
			{
				__LIB_42__::func_228(uParam0, 0, 1);
				if (__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
				{
					if (!__LIB_38__::func_312(uParam0, &iVar0, &uVar1, 0, 0, 0))
					{
						if (__LIB_6__::func_272())
						{
							__LIB_6__::func_271();
							if (!__LIB_0__::func_649(&(uParam0->f_2245)))
							{
								__LIB_0__::func_580(&(uParam0->f_2245), 0, 0);
							}
							else if (__LIB_2__::func_47(&(uParam0->f_2245), 10000, 0))
							{
								__LIB_32__::func_482();
							}
						}
						else if (__LIB_25__::func_839() && !__LIB_1__::func_215())
						{
							if (__LIB_6__::func_247())
							{
								if (!__LIB_0__::func_649(&(uParam0->f_2253)))
								{
									__LIB_0__::func_580(&(uParam0->f_2253), 0, 0);
								}
								else if (__LIB_2__::func_47(&(uParam0->f_2253), 5000, 0))
								{
									__LIB_8__::func_843(0);
									Global_2621446.f_81 = 3;
								}
							}
							else
							{
								__LIB_8__::func_843(0);
								Global_2621446.f_81 = 3;
							}
						}
					}
				}
			}
		}
	}
	__LIB_8__::func_842();
	__LIB_42__::func_271(uParam0);
	__LIB_42__::func_270(uParam0);
}

void func_1282(var uParam0)//Position - 0x5B200
{
	func_1324(uParam0);
	if (!__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
	{
		if (uParam0->f_1.f_35 == 3)
		{
		}
		else if (__LIB_1__::func_381(PLAYER::PLAYER_ID()))
		{
		}
		else if (__LIB_1__::func_99(PLAYER::PLAYER_ID()) == 3 || Global_1574962)
		{
			NETWORK::NETWORK_SET_IGNORE_SPECTATOR_CHAT_LIMITS_SAME_TEAM(false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_727()))
	{
		if (!PED::IS_PED_INJURED(__LIB_0__::func_727()))
		{
			PED::SET_PED_LOD_MULTIPLIER(__LIB_0__::func_727(), 1f);
		}
	}
	if (!__LIB_1__::func_593() && !BitTest(Global_2621446, 13))
	{
		PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), false);
	}
	if (!BitTest(uParam0->f_1.f_2, 3) && (!__LIB_0__::func_734() || __LIB_6__::func_768(PLAYER::PLAYER_ID(), 0)))
	{
		if (!BitTest(uParam0->f_1.f_2, 0) || !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!__LIB_8__::func_786())
			{
				if (!__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0) || Global_2621446.f_69 == Global_2621446.f_69.f_1)
				{
					if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
				}
			}
		}
	}
	__LIB_35__::func_769(uParam0);
	__LIB_19__::func_475(&(uParam0->f_47));
	__LIB_26__::func_62(uParam0);
	__LIB_6__::func_285(&(uParam0->f_1));
	__LIB_6__::func_152();
	uParam0->f_1.f_4 = 0;
	HUD::UNLOCK_MINIMAP_POSITION();
	MISC::CLEAR_BIT(&(uParam0->f_47), 0);
	uParam0->f_1.f_26 = 0;
	uParam0->f_1.f_33 = 0;
	__LIB_6__::func_274(&(uParam0->f_1), 0);
	uParam0->f_1.f_27 = 0;
	uParam0->f_1.f_25 = 0;
	HUD::SET_MINIMAP_BLOCK_WAYPOINT(false);
	MISC::CLEAR_BIT(&(uParam0->f_1), 1);
	MISC::CLEAR_BIT(&(uParam0->f_1), 0);
	MISC::CLEAR_BIT(&(uParam0->f_1), 10);
	if (!BitTest(uParam0->f_1.f_2, 2))
	{
		if (!__LIB_6__::func_284())
		{
			NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(false);
		}
		__LIB_7__::func_176(0, 0, 1);
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
	__LIB_8__::func_784(&(uParam0->f_1));
	__LIB_8__::func_783();
	__LIB_6__::func_283();
	if (__LIB_6__::func_284())
	{
		__LIB_1__::func_687(1);
	}
	else
	{
		NETWORK::NETWORK_SET_NO_SPECTATOR_CHAT(false);
	}
	__LIB_6__::func_282(&(uParam0->f_1.f_7), 0);
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
		__LIB_4__::func_742(&(uParam0->f_1), 0);
	}
	if (!BitTest(Global_2621446, 9))
	{
		__LIB_4__::func_71();
	}
	__LIB_6__::func_334(&(uParam0->f_47));
	if (BitTest(uParam0->f_1, 2))
	{
		__LIB_6__::func_330(&(uParam0->f_1));
	}
	if (!__LIB_6__::func_281(Global_4718592.f_168757))
	{
		Global_1836146 = 0;
	}
	if (!Global_1836610 && !__LIB_6__::func_174())
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	uParam0->f_1.f_1 = 0;
	uParam0->f_1.f_2 = 0;
	Global_2715699.f_2846.f_180 = 0;
	__LIB_27__::func_312();
	uParam0->f_47.f_2197 = 0;
	STREAMING::CLEAR_FOCUS();
	__LIB_4__::func_741(&(uParam0->f_1), 0);
}

void func_1324(var uParam0)//Position - 0x5BF12
{
	if (uParam0->f_2262 != -1)
	{
		if (__LIB_3__::func_962(PLAYER::PLAYER_ID(), uParam0->f_2262))
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
		if (!__LIB_2__::func_319(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0))
		{
			__LIB_4__::func_745(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0);
			if (__LIB_32__::func_206(iParam0))
			{
				__LIB_25__::func_678(iParam0, 1);
			}
		}
	}
	else if (__LIB_2__::func_319(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0))
	{
		__LIB_4__::func_743(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0);
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
		__LIB_4__::func_741(&(uParam0->f_1), 6);
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
		else if (!__LIB_8__::func_786())
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
	if (((((!__LIB_1__::func_598() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !DLC::GET_IS_LOADING_SCREEN_ACTIVE()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_2727896) && !__LIB_0__::func_496() == 63)
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
		__LIB_18__::func_742(1, 0);
		MISC::PREVENT_ARREST_STATE_THIS_FRAME();
		if (bParam10)
		{
			__LIB_0__::func_921(0);
			__LIB_7__::func_6(0);
		}
		return 0;
	}
	if (!__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_0__::func_81())
		{
			if (__LIB_0__::func_496() == 58)
			{
				__LIB_1__::func_594(1);
			}
			if (__LIB_1__::func_593())
			{
				if (BitTest(Global_2621446, 3))
				{
					MISC::CLEAR_BIT(&Global_2621446, 3);
				}
			}
			return 0;
		}
	}
	if (__LIB_0__::func_491() == 4)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() == 0)
		{
			__LIB_0__::func_708(0);
		}
	}
	if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_18__::func_742(1, 0);
		if (bParam10)
		{
			__LIB_0__::func_921(0);
			__LIB_7__::func_6(0);
		}
		return 0;
	}
	__LIB_8__::func_626();
	__LIB_6__::func_298();
	if (iParam9 == 0)
	{
	}
	if (!bParam11)
	{
		if (!__LIB_1__::func_592())
		{
			__LIB_1__::func_591();
		}
	}
	if (!__LIB_2__::func_283())
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
		if ((__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_3() == 0) && !__LIB_0__::func_394(CAM::GET_FINAL_RENDERED_CAM_COORD(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 10f, 0))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD(), false, false, false, false);
			bParam4 = true;
		}
		iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
		if (iVar0 != 0)
		{
			bParam4 = true;
			if (__LIB_1__::func_217())
			{
				bParam2 = false;
			}
		}
		if (Global_2725323)
		{
			if ((Global_2715699.f_6597 || __LIB_3__::func_858(-1046478848)) || __LIB_4__::func_977())
			{
				if (__LIB_18__::func_741(0))
				{
					bParam12 = true;
					if (__LIB_1__::func_590() > 800 || (__LIB_26__::func_63() && !__LIB_7__::func_7()))
					{
						if (__LIB_4__::func_715() && !__LIB_0__::func_706())
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
					__LIB_0__::func_705();
				}
			}
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && (((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19))
		{
			bParam4 = true;
			__LIB_7__::func_6(1);
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
		if (bParam2 && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_16__::func_621(1, 0, 1);
		}
		if (((__LIB_4__::func_715() && ((HUD::IS_PAUSE_MENU_ACTIVE() == 0 || bParam1 == 0) || (HUD::IS_SOCIAL_CLUB_ACTIVE() && HUD::IS_WARNING_MESSAGE_ACTIVE()))) && STREAMING::IS_SAFE_TO_START_PLAYER_SWITCH()) && __LIB_6__::func_297())
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
			__LIB_1__::func_589();
			__LIB_1__::func_210();
			if (__LIB_0__::func_791())
			{
				if (__LIB_1__::func_588())
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
				if (iParam13 || __LIB_1__::func_217())
				{
					STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 128 | 16384 || iParam14), iParam3);
				}
				else
				{
					STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 128 || iParam14), iParam3);
				}
			}
			else if (iParam13 || __LIB_1__::func_217())
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
			__LIB_0__::func_708(1);
			HUD::SET_BIGMAP_ACTIVE(false, false);
			if (bParam2 && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
			{
				__LIB_16__::func_621(1, 0, 1);
			}
		}
		if (__LIB_0__::func_491() == 1)
		{
			if (__LIB_0__::func_791())
			{
				if (STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED())
				{
					if (Global_2725330)
					{
						Global_2725330 = 0;
					}
					if (Global_2815059.f_6776 != -1)
					{
						__LIB_1__::func_214();
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_1577841))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1577841, false, true);
						PED::DELETE_PED(&Global_1577841);
					}
					__LIB_16__::func_621(0, 0, 1);
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						if (__LIB_0__::func_493())
						{
							GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
						}
						CAM::DO_SCREEN_FADE_IN(800);
					}
					__LIB_0__::func_708(2);
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
						__LIB_7__::func_311();
						__LIB_16__::func_621(0, 0, 1);
						if (((__LIB_1__::func_241() && LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE() == 0) && NETWORK::GET_IS_LAUNCH_FROM_LIVE_AREA() == 0) && NETWORK::GET_IS_LIVE_AREA_LAUNCH_WITH_CONTENT() == 0)
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
						__LIB_7__::func_311();
					}
					__LIB_16__::func_621(0, 0, 1);
				}
			}
			if (STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED())
			{
				if (bParam8 == 0 || __LIB_7__::func_311())
				{
					if (bParam2)
					{
						if (bParam8)
						{
							__LIB_7__::func_311();
						}
						__LIB_16__::func_621(0, 0, 1);
					}
					__LIB_0__::func_708(2);
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
	if (PLAYER::PLAYER_ID() != __LIB_0__::func_160())
	{
		if (__LIB_6__::func_945(PLAYER::PLAYER_ID()))
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
			Var1[0] = __LIB_0__::func_228(387, iVar2);
			Var1[1] = __LIB_0__::func_228(388, iVar2);
			Var1[2] = __LIB_0__::func_228(389, iVar2);
			Var1[3] = __LIB_0__::func_228(390, iVar2);
			Var1[4] = __LIB_0__::func_228(391, iVar2);
			Var1[5] = __LIB_0__::func_228(392, iVar2);
			Var1[6] = __LIB_0__::func_228(393, iVar2);
			Var1[7] = __LIB_0__::func_228(394, iVar2);
			Var1[8] = __LIB_0__::func_228(395, iVar2);
			Var1[9] = __LIB_0__::func_228(396, iVar2);
			Var1[10] = __LIB_0__::func_228(397, iVar2);
			Var1[11] = __LIB_0__::func_228(398, iVar2);
			Var1.f_13[0] = __LIB_0__::func_228(399, iVar2);
			Var1.f_13[1] = (__LIB_0__::func_228(400, iVar2) + __LIB_0__::func_228(18092, iVar2));
			Var1.f_13[2] = __LIB_0__::func_228(401, iVar2);
			Var1.f_13[3] = (__LIB_0__::func_228(402, iVar2) + __LIB_0__::func_228(18093, iVar2));
			Var1.f_13[4] = __LIB_0__::func_228(403, iVar2);
			Var1.f_13[5] = __LIB_0__::func_228(404, iVar2);
			Var1.f_13[6] = __LIB_0__::func_228(405, iVar2);
			Var1.f_13[7] = __LIB_0__::func_228(406, iVar2);
			Var1.f_13[8] = (__LIB_0__::func_228(407, iVar2) + __LIB_0__::func_228(18094, iVar2));
			Var1.f_13[9] = __LIB_0__::func_228(408, iVar2);
			Var1.f_13[10] = __LIB_0__::func_228(409, iVar2);
			Var1.f_13[11] = (__LIB_0__::func_228(410, iVar2) + __LIB_0__::func_228(18095, iVar2));
			Var1.f_26[0] = __LIB_0__::func_228(411, iVar2);
			Var1.f_26[1] = __LIB_0__::func_228(412, iVar2);
			Var1.f_26[2] = __LIB_0__::func_228(413, iVar2);
			Var1.f_26[3] = __LIB_0__::func_228(414, iVar2);
			Var1.f_26[4] = __LIB_0__::func_228(415, iVar2);
			Var1.f_26[5] = __LIB_0__::func_228(416, iVar2);
			Var1.f_26[6] = __LIB_0__::func_228(417, iVar2);
			Var1.f_26[7] = __LIB_0__::func_228(418, iVar2);
			Var1.f_26[8] = __LIB_0__::func_228(419, iVar2);
			Var1.f_26[9] = __LIB_0__::func_228(420, iVar2);
			Var1.f_26[10] = __LIB_0__::func_228(421, iVar2);
			Var1.f_26[11] = __LIB_0__::func_228(422, iVar2);
			Var1.f_39[0] = __LIB_0__::func_228(423, iVar2);
			Var1.f_39[1] = __LIB_0__::func_228(424, iVar2);
			Var1.f_39[2] = __LIB_0__::func_228(425, iVar2);
			Var1.f_39[3] = __LIB_0__::func_228(426, iVar2);
			Var1.f_39[4] = __LIB_0__::func_228(427, iVar2);
			Var1.f_39[5] = __LIB_0__::func_228(428, iVar2);
			Var1.f_39[6] = __LIB_0__::func_228(429, iVar2);
			Var1.f_39[7] = __LIB_0__::func_228(430, iVar2);
			Var1.f_39[8] = __LIB_0__::func_228(431, iVar2);
			Var1.f_49[0] = __LIB_0__::func_228(432, iVar2);
			Var1.f_49[1] = __LIB_0__::func_228(433, iVar2);
			Var1.f_49[2] = __LIB_0__::func_228(434, iVar2);
			Var1.f_49[3] = __LIB_0__::func_228(435, iVar2);
			Var1.f_49[4] = __LIB_0__::func_228(436, iVar2);
			Var1.f_49[5] = __LIB_0__::func_228(437, iVar2);
			Var1.f_49[6] = __LIB_0__::func_228(438, iVar2);
			Var1.f_49[7] = __LIB_0__::func_228(439, iVar2);
			Var1.f_49[8] = __LIB_0__::func_228(440, iVar2);
			if (__LIB_1__::func_563(161, -1))
			{
				Var1.f_59 = __LIB_1__::func_556(2053, iVar2, 0);
			}
			else
			{
				Var1.f_59 = __LIB_1__::func_556(753, iVar2, 0);
			}
			Var1.f_60 = __LIB_1__::func_556(754, iVar2, 0);
			Var1.f_61 = __LIB_1__::func_556(755, iVar2, 0);
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
		iVar0 = __LIB_18__::func_168(iParam0);
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
			__LIB_1__::func_597(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_1__::func_597(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__::func_350(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_18__::func_181(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_18__::func_186(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_1394(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_1394(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__::func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_1394(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_18__::func_181(iVar9);
			}
			else
			{
				iVar9 = __LIB_18__::func_186(iVar9);
			}
			__LIB_1__::func_597(753, iVar9, Global_78127, 1, 0);
			__LIB_1__::func_597(2053, iVar9, Global_78127, 1, 0);
			__LIB_6__::func_905(161, 1, -1, 1);
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
		Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
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
			uVar14 = { __LIB_18__::func_180(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 10, 0, -1) };
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
					Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iVar0, uVar14[iVar0], -1) };
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
								uVar15 = { __LIB_18__::func_247(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
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
				Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iVar0, func_1508(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__::func_180(iVar5, 0) };
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
			iVar17 = __LIB_18__::func_395();
			if (iVar17 != -1)
			{
				__LIB_18__::func_394(iVar17, 0, iParam10);
			}
			func_1503(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__::func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
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
						iVar3 = __LIB_39__::func_721(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
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
		__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
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
				Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
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
					iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1394(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, 14, 1);
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
				iVar23 = __LIB_6__::func_795(iParam0, 11);
				iVar24 = __LIB_6__::func_795(iParam0, 8);
				iVar25 = __LIB_6__::func_795(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_6__::func_795(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_1491(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_39__::func_721(iParam0, iVar5, 11, iVar23, 3, 0);
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
							iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
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
							if (__LIB_0__::func_254(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_6__::func_795(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_1394(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_6__::func_808(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_6__::func_808(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_37__::func_827(iParam0, iParam2);
							iVar31 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_1394(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_1394(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_6__::func_809(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_1394(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__::func_827(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_6__::func_807(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__::func_252(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_420(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_420(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__::func_806(iVar5, __LIB_6__::func_795(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__::func_806(iVar5, __LIB_6__::func_795(iParam0, 4), iVar38))
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
								iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
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
							Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_31__::func_931(iVar5, iParam2);
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
					iParam8 = __LIB_1__::func_556(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_1__::func_556(2160, iParam10, 0);
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
						iVar42 = __LIB_18__::func_181(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_18__::func_186(iParam2);
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
				iVar44 = __LIB_6__::func_795(iParam0, 11);
				iVar45 = __LIB_6__::func_795(iParam0, 4);
				iVar46 = func_1491(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_39__::func_721(iParam0, iVar5, 11, iVar44, 3, 0);
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
						iVar47 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__::func_254(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_1503(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__::func_795(iParam0, 11);
			if (__LIB_6__::func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__::func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__::func_931(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1491(iVar5, iParam2, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_6__::func_795(iParam0, 7);
				if (!__LIB_24__::func_966(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_1__::func_556(2100, iParam10, 0);
				iVar53 = __LIB_1__::func_556(2101, iParam10, 0);
				iVar54 = __LIB_1__::func_556(2102, iParam10, 0);
				fVar55 = __LIB_2__::func_97(135, iParam10);
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
				__LIB_25__::func_44(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_6__::func_795(iParam0, 11);
			iVar58 = __LIB_6__::func_795(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_1394(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_1394(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1491(iVar5, __LIB_6__::func_795(iParam0, 8), __LIB_6__::func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_1491(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_39__::func_721(iParam0, iVar5, 11, iVar57, 3, 0);
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
						iVar61 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__::func_254(iVar5, iVar60, iVar62) == iVar59)
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
					iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
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
								iVar6 = func_1491(iVar5, iVar3, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1394(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__::func_223(iParam0))
				{
					iVar63 = __LIB_6__::func_803(iParam0, iVar5, iParam1, iParam2);
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
				iVar64 = __LIB_1__::func_556(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_18__::func_183(iParam0, iVar64), __LIB_0__::func_217(iParam0, iVar64), __LIB_0__::func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_18__::func_183(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__::func_217(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_6__::func_782(PLAYER::PLAYER_ID(), iVar64);
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
				if (__LIB_6__::func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__::func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__::func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_1394(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__::func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__::func_799(iVar5, 4, iVar65, &uVar67))
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
				iVar74 = __LIB_6__::func_795(iParam0, 4);
				iVar75 = __LIB_6__::func_795(iParam0, 6);
				if (__LIB_0__::func_215(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__::func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_1394(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1394(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__::func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_1394(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
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
				if (__LIB_0__::func_215(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__::func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_1394(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1394(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__::func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_1394(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
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
					iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1394(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, 14, 1);
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
		iVar84 = __LIB_0__::func_254(iVar5, func_1508(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_6__::func_758(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_6__::func_758(iVar5, iVar84, 3, 4);
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
	if (__LIB_1__::func_556(754, Global_78127, 0) != -99 && __LIB_6__::func_781())
	{
		if (__LIB_0__::func_214() == 4)
		{
			return 1;
		}
		if (__LIB_1__::func_556(754, Global_78127, 0) == 0 && __LIB_1__::func_556(755, Global_78127, 0) == 0)
		{
			if (__LIB_1__::func_563(161, Global_78127))
			{
				if (__LIB_1__::func_556(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_1__::func_556(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_1__::func_556(754, Global_78127, 0);
		iVar1 = __LIB_1__::func_556(755, Global_78127, 0);
		if (!func_1416(iParam0, iVar1, iVar0))
		{
			if (__LIB_1__::func_563(161, Global_78127))
			{
				*uParam1 = __LIB_1__::func_556(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_1__::func_556(753, Global_78127, 0);
			}
			__LIB_1__::func_597(754, -99, Global_78127, 1, 0);
			__LIB_1__::func_597(755, 2, Global_78127, 1, 0);
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
	Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_18__::func_180(iVar0, iParam2) };
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
						uVar9 = { __LIB_18__::func_247(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_1416(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_588(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_1416(iParam0, 14, iVar6))
										{
											if (!__LIB_24__::func_955(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__::func_795(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_35__::func_588(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_24__::func_955(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
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
			if (__LIB_1__::func_556(1759, Global_78127, 0) != uVar8[10])
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
		uVar11 = { __LIB_18__::func_247(iVar0, iParam2) };
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
				if (__LIB_6__::func_802(iVar0, 11, __LIB_6__::func_795(iParam0, 11), -1))
				{
					if (__LIB_6__::func_800(iVar0, 4, iParam2, &uVar18))
					{
						return func_1416(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__::func_799(iVar0, 4, iParam2, &uVar18))
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
	__LIB_25__::func_74(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__::func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_18__::func_394(iVar1, 1, iParam2);
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
		iVar2 = __LIB_0__::func_250(iParam0);
		bVar3 = func_1474(iParam0, 0);
		bVar4 = __LIB_31__::func_887(iParam0);
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
			if (__LIB_18__::func_373(iVar6, iVar0))
			{
				if (__LIB_6__::func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__::func_27(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__::func_373(123, iVar0))
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
					if (__LIB_18__::func_373(iVar10, iVar0))
					{
						if (__LIB_25__::func_27(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__::func_901(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__::func_235(iParam0, Var9.f_2, Var9.f_3);
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
			iVar2 = __LIB_1__::func_556(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_1508(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
			iVar2 = __LIB_1__::func_556(1759, -1, 0);
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
					iVar6 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
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
							iVar2 = __LIB_25__::func_18(joaat("MP_M_Freemode_01"), 11, func_1508(iParam0, 11, -1), 0);
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
						if (__LIB_18__::func_373(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(72, -1))
						{
						}
						else if (__LIB_18__::func_185(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
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
							iVar4 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
							iVar6 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
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
							iVar7 = __LIB_25__::func_18(joaat("MP_F_Freemode_01"), 11, func_1508(iParam0, 11, -1), 0);
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
							iVar9 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
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
							iVar10 = __LIB_25__::func_18(joaat("MP_F_Freemode_01"), 11, func_1508(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_25__::func_18(joaat("MP_F_Freemode_01"), 11, func_1508(iParam0, 11, -1), 0);
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
							iVar13 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
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
				iVar2 = __LIB_0__::func_420(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__::func_252(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__::func_420(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__::func_252(iVar4);
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
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_1491(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
									iVar0 = __LIB_6__::func_758(iParam0, iVar7, 3, 3);
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
				iVar2 = __LIB_0__::func_420(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__::func_252(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__::func_420(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__::func_252(iVar4);
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
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_1491(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_6__::func_808(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
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
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
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
									iVar0 = __LIB_6__::func_758(iParam0, iVar12, 3, 4);
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
			if (__LIB_0__::func_258(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_257(iVar13, 11, -1))
				{
					if (__LIB_0__::func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_256(iVar13, 10, &iVar17, -1))
					{
						if (__LIB_0__::func_257(iVar17, 11, Var15.f_1))
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
			if (__LIB_0__::func_258(iVar9, 1, 0, &iVar19))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar19, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_257(iVar13, 11, -1))
				{
					if (__LIB_0__::func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_256(iVar13, 10, &iVar20, -1))
					{
						if (__LIB_0__::func_257(iVar20, 11, Var15.f_1))
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
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("HAZ_HOOD"), 0) || __LIB_0__::func_255(iParam0, iVar9))
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_709(iVar0, 14, func_1508(iParam0, 14, 0), -1))
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
				if (__LIB_6__::func_808(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_6__::func_795(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_6__::func_795(iParam0, 11);
				if (!__LIB_6__::func_808(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_25__::func_74(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__::func_28(iVar0, iParam2, 13) && !__LIB_25__::func_28(iVar0, iParam2, 14)) && !__LIB_25__::func_28(iVar0, iParam2, 15)) && !__LIB_25__::func_28(iVar0, iParam2, 16)) && !__LIB_25__::func_28(iVar0, iParam2, 71)) && !__LIB_25__::func_28(iVar0, iParam2, 72))
				{
					__LIB_25__::func_74(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_25__::func_18(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__::func_393(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_18__::func_394(iVar2, 1, Global_78127);
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
		if (Global_78127 != __LIB_0__::func_5() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_35__::func_588(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
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
							__LIB_7__::func_86(iVar2, 2, 1, 1, -1);
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
									func_1518(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_1518(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_1__::func_556(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_1__::func_597(iVar6, iVar7, Global_78127, 1, 0);
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
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_1518(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
				Global_78130[2 /*14*/] = { __LIB_35__::func_588(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__::func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1518(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_1518(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__::func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_2__::func_204(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_1508(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_2__::func_204(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_1508(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
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
	Global_78130[1 /*14*/] = { __LIB_38__::func_261(iVar0, iParam1, iParam2, -1) };
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
				if (!func_1530(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_1530(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_38__::func_261(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_1530(iParam0, 14, iVar4))
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
						Global_78130[2 /*14*/] = { __LIB_38__::func_261(iVar0, iVar2, iVar1, -1) };
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
		Global_78130[1 /*14*/] = { __LIB_38__::func_261(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_8__::func_105(iParam1);
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
				Global_78130[1 /*14*/] = { __LIB_38__::func_261(iVar10, iVar0, uVar11[iVar0], -1) };
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
							Global_78130[1 /*14*/] = { __LIB_38__::func_261(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_8__::func_105(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_41__::func_644(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
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
						__LIB_8__::func_105(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_41__::func_644(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
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
				Global_78130[1 /*14*/] = { __LIB_38__::func_261(iVar10, iVar0, func_1592(iParam0, iVar0, -1), -1) };
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
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_1588(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_38__::func_261(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_1588(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_38__::func_261(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_1588(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_38__::func_261(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_1588(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_38__::func_261(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_1588(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_38__::func_261(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_1588(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
			Global_78130[1 /*14*/] = { __LIB_38__::func_261(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_8__::func_105(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_41__::func_644(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
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
		__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_8__::func_105(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_41__::func_644(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
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
				iVar3 = __LIB_41__::func_644(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_1588(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_40__::func_20(iVar10, iParam1, iParam2);
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
	if (__LIB_1__::func_282() != PLAYER::PLAYER_PED_ID())
	{
		__LIB_8__::func_824(uParam0, PLAYER::PLAYER_PED_ID());
		__LIB_6__::func_274(&(uParam0->f_1), 1);
	}
	if (func_1609(uParam0, 0, 1))
	{
		__LIB_4__::func_741(&(uParam0->f_1), 6);
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
	if (__LIB_6__::func_171(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (((__LIB_1__::func_282() != -1 && ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_282())) && (!bParam1 || __LIB_36__::func_129(uParam0, __LIB_1__::func_282(), 1))) && !__LIB_6__::func_171(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282())))
	{
		iVar1 = __LIB_1__::func_282();
	}
	else if (__LIB_27__::func_784(uParam0, 0))
	{
		__LIB_41__::func_342(uParam0);
		if (__LIB_38__::func_312(uParam0, &iVar6, &iVar7, 0, 1, 1))
		{
			__LIB_8__::func_824(uParam0, __LIB_8__::func_835(&(uParam0->f_47), iVar6, iVar7));
			__LIB_36__::func_2(uParam0, iVar6, iVar7);
			__LIB_5__::func_951(&(uParam0->f_1), 0);
		}
		else if (__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
		{
			if (__LIB_25__::func_839())
			{
				__LIB_8__::func_843(0);
				Global_2621446.f_81 = 3;
			}
		}
		else if (__LIB_0__::func_80())
		{
			if (Global_1574667)
			{
				if (__LIB_6__::func_552())
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
			switch (__LIB_0__::func_997(&(uParam0->f_1)))
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
						if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_727()) && __LIB_0__::func_727() != iVar1)
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(__LIB_0__::func_727(), false) };
						}
						else
						{
							Var4 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						}
						fVar3 = SYSTEM::VDIST2(Var4, ENTITY::GET_ENTITY_COORDS(iVar1, false));
						if ((__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && __LIB_6__::func_305(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_6__::func_544()), 0))
						{
							uParam0->f_1.f_5 = 0;
							uParam0->f_1.f_6 = 1;
						}
						else if (((uParam0->f_1.f_4 && !__LIB_6__::func_304(&(uParam0->f_1))) && fVar3 < 2500f) && !__LIB_4__::func_766(Global_4718592.f_116524))
						{
							uParam0->f_1.f_5 = 0;
							uParam0->f_1.f_6 = 1;
						}
						else if ((fVar3 < 2500f && __LIB_6__::func_174()) && __LIB_4__::func_755(Global_4718592.f_116524))
						{
							uParam0->f_1.f_5 = 100;
						}
						else if ((fVar3 < 2500f && __LIB_6__::func_174()) && (__LIB_8__::func_248(Global_4718592.f_168757) || Global_2815059.f_6749))
						{
							uParam0->f_1.f_5 = 100;
						}
						else if (fVar3 < 90000f)
						{
							uParam0->f_1.f_5 = 3000;
						}
						else if (__LIB_8__::func_248(Global_4718592.f_168757) || Global_2815059.f_6749)
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
						if (__LIB_8__::func_248(Global_4718592.f_168757) || Global_2815059.f_6749)
						{
							uParam0->f_1.f_5 = 100;
						}
					}
					__LIB_5__::func_951(&(uParam0->f_1), 1);
					break;
				case 1:
					if (__LIB_6__::func_168(Global_4718592.f_168757))
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
						HUD::THEFEED_FLUSH_QUEUE();
					}
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if ((!CAM::IS_SCREEN_FADED_OUT() && Global_2715699.f_2846.f_85 == 0) && uParam0->f_1.f_5 > 0)
					{
						if (!CAM::IS_SCREEN_FADING_OUT())
						{
							__LIB_26__::func_315(uParam0);
							if ((!__LIB_8__::func_786() && !BitTest(uParam0->f_1.f_1, 4)) && !__LIB_6__::func_272())
							{
								if (GRAPHICS::GET_TOGGLE_PAUSED_RENDERPHASES_STATUS() == 1)
								{
									CAM::DO_SCREEN_FADE_OUT(250);
								}
								else
								{
									__LIB_26__::func_315(uParam0);
									__LIB_5__::func_951(&(uParam0->f_1), 2);
								}
							}
							else
							{
								__LIB_26__::func_315(uParam0);
								__LIB_5__::func_951(&(uParam0->f_1), 2);
							}
						}
					}
					else
					{
						__LIB_5__::func_951(&(uParam0->f_1), 2);
					}
					break;
				case 2:
					__LIB_32__::func_483();
					__LIB_26__::func_62(uParam0);
					__LIB_1__::func_3();
					if (!Global_1931426)
					{
						__LIB_27__::func_312();
					}
					if (!__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0) || !__LIB_6__::func_305(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_6__::func_544()), 0))
					{
						if (!__LIB_6__::func_171(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_6__::func_544())))
						{
							__LIB_41__::func_314(1, 1);
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
							if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_727()))
							{
								if (!PED::IS_PED_INJURED(__LIB_0__::func_727()))
								{
									PED::SET_PED_LOD_MULTIPLIER(__LIB_0__::func_727(), 1f);
								}
							}
							if (!__LIB_6__::func_272())
							{
								__LIB_7__::func_176(1, iVar1, 1);
							}
						}
						if (iVar1 == PLAYER::PLAYER_PED_ID())
						{
							__LIB_6__::func_282(&(uParam0->f_1.f_7), 0);
						}
						else
						{
							__LIB_6__::func_302(&(uParam0->f_1.f_7), 0);
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
									if (!BitTest(Global_2621446, 18) && __LIB_4__::func_73(&(uParam0->f_1)) != 3)
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
							if (__LIB_6__::func_304(&(uParam0->f_1)))
							{
								uParam0->f_1.f_30 = { CAM::GET_CAM_COORD(uParam0->f_1.f_39) };
							}
							else
							{
								uParam0->f_1.f_30 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
								if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != __LIB_0__::func_160())
								{
								}
							}
							if (Global_2621443 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
							{
								Var5 = { uParam0->f_1.f_30 };
								Var5.f_2 = (Var5.f_2 + 25f);
								if ((((__LIB_4__::func_73(&(uParam0->f_1)) != 5 && __LIB_4__::func_73(&(uParam0->f_1)) != 3) && __LIB_4__::func_73(&(uParam0->f_1)) != 4) && !BitTest(Global_2621446, 16)) && MISC::ABSF(Var5.f_2) < 2600f)
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
									if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
									{
										ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var5, false, true, false, false);
										ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, false);
										ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
									}
								}
							}
							if (__LIB_6__::func_304(&(uParam0->f_1)))
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
					__LIB_32__::func_628(uParam0);
					MISC::SET_BIT(&(uParam0->f_47), 6);
					uParam0->f_1.f_24 = NETWORK::GET_NETWORK_TIME();
					__LIB_6__::func_301(uParam0);
					__LIB_0__::func_579(&(uParam0->f_2257));
					__LIB_5__::func_951(&(uParam0->f_1), 3);
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
						else if (!__LIB_6__::func_304(&(uParam0->f_1)))
						{
							if (ENTITY::IS_ENTITY_DEAD(iVar1, false))
							{
							}
							if (SYSTEM::VDIST2(uParam0->f_1.f_30, ENTITY::GET_ENTITY_COORDS(iVar1, false)) > 2500f)
							{
								STREAMING::NEW_LOAD_SCENE_STOP();
								MISC::CLEAR_BIT(&(uParam0->f_1), 10);
								bVar0 = true;
								if (__LIB_9__::func_91(PLAYER::PLAYER_ID()))
								{
									bVar0 = false;
								}
							}
							if (ENTITY::GET_ENTITY_SPEED(iVar1) > 2f)
							{
								STREAMING::NEW_LOAD_SCENE_STOP();
								MISC::CLEAR_BIT(&(uParam0->f_1), 10);
								bVar0 = false;
								__LIB_0__::func_579(&(uParam0->f_2257));
								__LIB_0__::func_580(&(uParam0->f_2257), 0, 0);
							}
							if (__LIB_0__::func_649(&(uParam0->f_2257)))
							{
								if (!__LIB_2__::func_47(&(uParam0->f_2257), 6000, 0))
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
					if (__LIB_6__::func_551(iVar2))
					{
						bVar0 = false;
					}
					iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
					if (iVar2 != __LIB_0__::func_160())
					{
						if (__LIB_1__::func_264(iVar2, 0, 1))
						{
							if (__LIB_0__::func_743(iVar2))
							{
								if (__LIB_7__::func_276(iVar2))
								{
									if (__LIB_0__::func_706())
									{
										if (!__LIB_0__::func_827(109))
										{
											if (__LIB_0__::func_742() == 6)
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
							if (((uParam0->f_1.f_35 != 3 && uParam0->f_1.f_35 != 5) && uParam0->f_1.f_35 != 4) && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
							{
								MISC::SET_BIT(&(uParam0->f_1), 14);
							}
							MISC::SET_BIT(&(uParam0->f_1), 12);
						}
						STREAMING::NEW_LOAD_SCENE_STOP();
						GRAPHICS::DONT_RENDER_IN_GAME_UI(false);
						__LIB_0__::func_579(&(uParam0->f_2257));
						__LIB_5__::func_951(&(uParam0->f_1), 4);
					}
					__LIB_32__::func_628(uParam0);
					break;
				case 4:
					__LIB_32__::func_628(uParam0);
					if (BitTest(uParam0->f_47, 15))
					{
						if (__LIB_0__::func_706() || __LIB_26__::func_72())
						{
							MISC::CLEAR_BIT(&(uParam0->f_47), 15);
						}
					}
					if (bParam2 && PED::IS_PED_INJURED(iVar1))
					{
						__LIB_5__::func_951(&(uParam0->f_1), 5);
					}
					else if (!CAM::IS_SCREEN_FADED_IN())
					{
						if (!BitTest(uParam0->f_47, 15))
						{
							if (!CAM::IS_SCREEN_FADING_IN())
							{
								if (!__LIB_8__::func_786() && !__LIB_6__::func_300(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), Global_2815059.f_6749))
								{
									if (__LIB_0__::func_706() || __LIB_26__::func_72())
									{
										CAM::DO_SCREEN_FADE_IN(250);
									}
									else
									{
										MISC::SET_BIT(&(uParam0->f_47), 15);
									}
									__LIB_0__::func_579(&(uParam0->f_47.f_2186));
									HUD::BUSYSPINNER_OFF();
									PAD::SET_CONTROL_VALUE_NEXT_FRAME(0 /*PLAYER_CONTROL*/, 98 /*INPUT_VEH_CINEMATIC_LR*/, 1f);
								}
								else
								{
									__LIB_5__::func_951(&(uParam0->f_1), 5);
								}
							}
						}
						else
						{
							__LIB_5__::func_951(&(uParam0->f_1), 5);
						}
					}
					else
					{
						__LIB_5__::func_951(&(uParam0->f_1), 5);
					}
					break;
				case 5:
					__LIB_6__::func_273();
					__LIB_6__::func_285(&(uParam0->f_1));
					if (!bParam2 || !PED::IS_PED_INJURED(iVar1))
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					__LIB_5__::func_951(&(uParam0->f_1), 0);
					__LIB_6__::func_274(&(uParam0->f_1), 0);
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
		__LIB_6__::func_299();
		__LIB_6__::func_550(uParam0, __LIB_1__::func_282());
		if (PED::IS_PED_A_PLAYER(__LIB_1__::func_282()))
		{
			uParam0->f_1.f_42 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282());
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
	if (__LIB_6__::func_153(&(uParam0->f_1)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 0, 0))
	{
		if (!__LIB_0__::func_497())
		{
			if (uParam0->f_1.f_4)
			{
				if (__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
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
				if (__LIB_26__::func_317() && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
				{
					return;
				}
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
				HUD::ALLOW_PAUSE_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME();
				__LIB_6__::func_301(uParam0);
				if (__LIB_6__::func_318(uParam0))
				{
					if (PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1.f_42)) != __LIB_0__::func_727())
					{
						__LIB_6__::func_550(uParam0, PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1.f_42)));
						__LIB_8__::func_824(uParam0, PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1.f_42)));
						__LIB_7__::func_176(1, __LIB_0__::func_727(), 1);
						__LIB_6__::func_246();
					}
				}
				if (__LIB_6__::func_275(__LIB_1__::func_282()))
				{
					if (__LIB_1__::func_282() != PLAYER::PLAYER_PED_ID())
					{
						if (PED::IS_PED_A_PLAYER(__LIB_1__::func_282()))
						{
							__LIB_26__::func_316(uParam0);
							if (__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
							{
								func_1662(uParam0);
							}
							iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282()));
							if (PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282())) > iVar0)
							{
								iVar0 = PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282()));
							}
							if (iVar0 != uParam0->f_47.f_1465)
							{
								uParam0->f_47.f_1465 = iVar0;
								MISC::SET_FAKE_WANTED_LEVEL(uParam0->f_47.f_1465);
							}
							if (__LIB_1__::func_264(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282()), 1, 1))
							{
								if (PLAYER::ARE_PLAYER_STARS_GREYED_OUT(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282())) != uParam0->f_47.f_1466)
								{
									uParam0->f_47.f_1466 = PLAYER::ARE_PLAYER_STARS_GREYED_OUT(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282()));
									HUD::FLASH_WANTED_DISPLAY(uParam0->f_47.f_1466);
								}
							}
							iVar1 = 1;
							if ((uParam0->f_1.f_35 == 3 || uParam0->f_1.f_35 == 5) || uParam0->f_1.f_35 == 4)
							{
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282())))
								{
									if (__LIB_0__::func_743(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282())))
									{
										__LIB_6__::func_246();
										if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_OUT())
										{
											CAM::DO_SCREEN_FADE_OUT(0);
										}
										iVar1 = 0;
									}
								}
							}
							if (__LIB_0__::func_649(&(uParam0->f_2255)))
							{
								if (__LIB_37__::func_6(__LIB_1__::func_282(), __LIB_4__::func_73(&(uParam0->f_1))) && iVar1)
								{
									__LIB_0__::func_579(&(uParam0->f_2255));
								}
							}
							func_1648(uParam0, __LIB_1__::func_282());
						}
					}
					if (!BitTest(uParam0->f_47, 0))
					{
						if (!BitTest(uParam0->f_47, 3))
						{
							MISC::SET_BIT(&(uParam0->f_47), 0);
							__LIB_41__::func_342(uParam0);
						}
					}
					if ((__LIB_6__::func_144(&(uParam0->f_1)) != 6 && __LIB_6__::func_144(&(uParam0->f_1)) != 4) && __LIB_6__::func_144(&(uParam0->f_1)) != 5)
					{
						if (__LIB_1__::func_282() != __LIB_0__::func_727())
						{
							if (!__LIB_8__::func_694())
							{
								__LIB_5__::func_951(&(uParam0->f_1), 0);
								__LIB_4__::func_741(&(uParam0->f_1), 2);
								__LIB_6__::func_274(&(uParam0->f_1), 1);
								__LIB_8__::func_784(&(uParam0->f_1));
							}
						}
					}
				}
				else
				{
					__LIB_42__::func_228(uParam0, 1, 0);
				}
			}
		}
	}
	else
	{
		__LIB_8__::func_784(&(uParam0->f_1));
		__LIB_42__::func_229(uParam0);
	}
	__LIB_42__::func_500(uParam0);
}

void func_1648(var uParam0, int iParam1)//Position - 0xAE396
{
	if (__LIB_8__::func_849(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
	{
		if (uParam0->f_2262 == -1)
		{
			uParam0->f_2262 = __LIB_32__::func_241(iParam1);
		}
		else if (!__LIB_3__::func_962(PLAYER::PLAYER_ID(), uParam0->f_2262))
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
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282());
	if (iVar1 != __LIB_0__::func_160() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		if (BitTest(Global_2621446.f_69.f_5, 11))
		{
			if ((__LIB_6__::func_305(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775, 0) && !__LIB_8__::func_303(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775)) && !__LIB_9__::func_49(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775))
			{
				if ((Global_4718592 == 2 || Global_4718592 == 8) || Global_4718592 == 0)
				{
					if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775 == NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282()))
					{
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
			if (__LIB_6__::func_305(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282()), 0))
			{
				bVar0 = true;
			}
		}
		else if (__LIB_6__::func_305(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282()), 0))
		{
			bVar0 = true;
		}
	}
	if (bVar0 == 1)
	{
		if (__LIB_6__::func_154() && __LIB_1__::func_212())
		{
			bVar0 = false;
		}
	}
	if (__LIB_1__::func_592())
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || __LIB_0__::func_491() == 2)
		{
			__LIB_6__::func_283();
		}
	}
	else
	{
		if (bVar0)
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || __LIB_0__::func_491() == 1)
			{
				if ((!__LIB_0__::func_649(&(uParam0->f_2251)) || __LIB_2__::func_47(&(uParam0->f_2251), 5000, 0)) || __LIB_0__::func_491() == 1)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					__LIB_0__::func_579(&(uParam0->f_2251));
					__LIB_8__::func_788(uParam0, __LIB_6__::func_314());
					__LIB_7__::func_176(0, 0, 1);
					func_1354(1, 1, 1, 1, 0, 0f, 0f, 0f, 1, 0, 0, 1, 1, 0, 0);
				}
			}
			else
			{
				__LIB_0__::func_495(&(uParam0->f_2251), 0, 0);
			}
		}
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (__LIB_6__::func_336() == 0)
			{
				__LIB_6__::func_335(1);
			}
		}
		switch (__LIB_6__::func_336())
		{
			case 0:
				break;
			case 1:
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						if ((!__LIB_8__::func_786() && !BitTest(uParam0->f_1.f_1, 4)) && !__LIB_6__::func_272())
						{
							CAM::DO_SCREEN_FADE_OUT(250);
						}
						else
						{
							__LIB_7__::func_176(1, __LIB_0__::func_727(), 1);
							__LIB_1__::func_748();
							__LIB_41__::func_314(1, 1);
							__LIB_6__::func_313(1);
							__LIB_6__::func_335(0);
						}
					}
				}
				else
				{
					uParam0->f_1.f_28 = NETWORK::GET_NETWORK_TIME();
					__LIB_7__::func_176(1, __LIB_0__::func_727(), 1);
					__LIB_1__::func_748();
					__LIB_41__::func_314(1, 1);
					__LIB_6__::func_313(1);
					__LIB_6__::func_335(2);
				}
				break;
			case 2:
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_1.f_28) > 8000)
				{
					__LIB_6__::func_335(3);
				}
				break;
			case 3:
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						if (!__LIB_8__::func_786())
						{
							CAM::DO_SCREEN_FADE_IN(250);
						}
						else
						{
							__LIB_6__::func_335(0);
						}
					}
				}
				else
				{
					__LIB_6__::func_335(0);
				}
				break;
			}
	}
}

void func_1678(var uParam0)//Position - 0xAF1E7
{
	if (__LIB_6__::func_153(&(uParam0->f_1)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 0, 0))
	{
		if (!__LIB_4__::func_764(16))
		{
			if (func_1609(uParam0, 1, 0))
			{
				__LIB_4__::func_741(&(uParam0->f_1), 3);
			}
		}
	}
	else
	{
		__LIB_8__::func_783();
		__LIB_8__::func_784(&(uParam0->f_1));
		__LIB_42__::func_229(uParam0);
	}
	__LIB_42__::func_500(uParam0);
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
	if (__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
	{
		fVar1 = 0.15f;
	}
	if (__LIB_6__::func_304(&(uParam0->f_1)) && CAM::GET_RENDERING_CAM() == uParam0->f_1.f_39)
	{
		CAM::USE_SCRIPT_CAM_FOR_AMBIENT_POPULATION_ORIGIN_THIS_FRAME(true, true);
		PED::SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(CAM::GET_FINAL_RENDERED_CAM_COORD());
		if ((!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			Var2 = { CAM::GET_CAM_COORD(uParam0->f_1.f_39) };
			if (__LIB_6__::func_329())
			{
				Var2 = { __LIB_6__::func_328() };
			}
			if (!__LIB_0__::func_86(Var2))
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(Var2, 0f, 0f, 0f);
			}
		}
	}
	if (uParam0->f_1.f_34 && __LIB_0__::func_997(&(uParam0->f_1)) > 1)
	{
		iVar0 = __LIB_6__::func_544();
	}
	else
	{
		iVar0 = __LIB_0__::func_727();
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
					iVar6 = __LIB_4__::func_962(iVar3, 0);
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
							if (((Global_2689235[iVar4 /*453*/].f_244 != -1 && !__LIB_0__::func_630(iVar5, -1)) && !__LIB_18__::func_376(iVar5, 0, 0)) && !__LIB_3__::func_813(iVar3))
							{
								iVar14 = __LIB_0__::func_299(Global_2689235[iVar4 /*453*/].f_244);
								if (iVar14 != 3 && !__LIB_11__::func_264(iVar14, iVar3))
								{
									bVar7 = true;
									if (!__LIB_6__::func_304(&(uParam0->f_1)))
									{
										if (__LIB_6__::func_327(Global_2689235[iVar4 /*453*/].f_244, &Var8, &Var9, &fVar13))
										{
											uParam0->f_1.f_41 = 1;
											__LIB_26__::func_319(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
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
							iVar15 = __LIB_4__::func_721(iVar3);
							if (iVar15 == -1)
							{
								iVar15 = __LIB_3__::func_977(iVar3);
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
								if (Global_2689235[iVar3 /*453*/].f_318.f_9 != __LIB_0__::func_160())
								{
									iVar17 = VEHICLE::GET_CLOSEST_VEHICLE(Global_2689235[Global_2689235[iVar3 /*453*/].f_318.f_9 /*453*/].f_318.f_11, 50f, iVar16, 131078);
									Var18 = { 0f, -15f, 5f };
									if (__LIB_6__::func_304(&(uParam0->f_1)))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar17))
										{
											__LIB_8__::func_695(&(uParam0->f_1.f_39), iVar17, Var18);
										}
									}
								}
							}
							else if (iVar15 == 88 || iVar15 == 101)
							{
								iVar19 = VEHICLE::GET_CLOSEST_VEHICLE(Global_2689235[iVar3 /*453*/].f_318.f_21, 50f, joaat("avenger"), 86138);
								Var20 = { 0f, -15f, 5f };
								if (__LIB_6__::func_304(&(uParam0->f_1)))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iVar19))
									{
										__LIB_8__::func_695(&(uParam0->f_1.f_39), iVar19, Var20);
									}
								}
							}
						}
						if (!bVar7)
						{
							iVar21 = __LIB_4__::func_721(iVar3);
							if (iVar21 == -1)
							{
								iVar21 = __LIB_3__::func_977(iVar3);
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
								if (Global_2689235[iVar3 /*453*/].f_318.f_9 != __LIB_0__::func_160())
								{
									Var23 = { Global_2689235[Global_2689235[iVar3 /*453*/].f_318.f_9 /*453*/].f_318.f_11 };
									iVar24 = VEHICLE::GET_CLOSEST_VEHICLE(Var23, 50f, iVar22, 131078);
									if (!__LIB_0__::func_86(Var23))
									{
										__LIB_6__::func_326(Var23);
									}
									Var25 = { 0f, -15f, 5f };
									if (!__LIB_6__::func_304(&(uParam0->f_1)))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar24))
										{
											__LIB_26__::func_318(uParam0, iVar24, Var25, 0, Var23);
										}
										else
										{
											if (!__LIB_0__::func_86(Var23))
											{
												STREAMING::SET_FOCUS_POS_AND_VEL(Var23, 0f, 0f, 0f);
											}
											__LIB_26__::func_318(uParam0, iVar24, Var25, 0, Var23);
										}
									}
									else if (ENTITY::DOES_ENTITY_EXIST(iVar24))
									{
										CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1.f_39, iVar24, Var25, true);
										__LIB_8__::func_695(&(uParam0->f_1.f_39), iVar24, Var25);
									}
								}
								bVar7 = true;
							}
							else if (iVar21 == 88 || iVar21 == 101)
							{
								iVar26 = VEHICLE::GET_CLOSEST_VEHICLE(Global_2689235[iVar3 /*453*/].f_318.f_21, 50f, joaat("avenger"), 86138);
								if (!__LIB_0__::func_86(Global_2689235[iVar3 /*453*/].f_318.f_21))
								{
									__LIB_6__::func_326(Global_2689235[iVar3 /*453*/].f_318.f_21);
								}
								Var27 = { 0f, -15f, 5f };
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iVar26))
									{
										__LIB_26__::func_318(uParam0, iVar26, Var27, 0, Global_2689235[iVar3 /*453*/].f_318.f_21);
										Global_2815059.f_5195.f_764 = iVar26;
									}
									else
									{
										if (!__LIB_0__::func_86(Global_2689235[iVar3 /*453*/].f_318.f_21))
										{
											STREAMING::SET_FOCUS_POS_AND_VEL(Global_2689235[iVar3 /*453*/].f_318.f_21, 0f, 0f, 0f);
										}
										__LIB_26__::func_318(uParam0, iVar26, Var27, 0, Global_2689235[iVar3 /*453*/].f_318.f_21);
									}
								}
								else if (Global_2815059.f_5195.f_764 != iVar26)
								{
									__LIB_26__::func_62(uParam0);
								}
								else if (ENTITY::DOES_ENTITY_EXIST(iVar26))
								{
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1.f_39, iVar26, Var27, true);
									__LIB_8__::func_695(&(uParam0->f_1.f_39), iVar26, Var27);
								}
								bVar7 = true;
							}
						}
						if (!bVar7)
						{
							if (((__LIB_1__::func_155(iVar3, 1, 0) || BitTest(Global_1853348[iVar4 /*834*/].f_833, 8)) || (!PED::IS_PED_INJURED(iVar0) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar0) == MISC::GET_HASH_KEY("YachtRm_Bridge"))) || BitTest(Global_1853348[iVar4 /*834*/].f_833, 9))
							{
								if (iVar5 != -1)
								{
									if (!__LIB_4__::func_710(iVar5) || (__LIB_4__::func_710(iVar5) && iVar6 != -1))
									{
										bVar7 = true;
										__LIB_6__::func_325(uParam0);
										if (uParam0->f_1.f_41 > 2)
										{
											__LIB_26__::func_62(uParam0);
										}
										if (!__LIB_6__::func_304(&(uParam0->f_1)))
										{
											uParam0->f_1.f_41 = 2;
											if (__LIB_4__::func_710(iVar5))
											{
												__LIB_6__::func_326(Global_4196263[iVar6 /*2012*/].f_3[0 /*3*/]);
												__LIB_26__::func_319(uParam0, fVar1, Global_4196263[iVar6 /*2012*/].f_24, Global_4196263[iVar6 /*2012*/].f_24.f_3, Global_4196263[iVar6 /*2012*/].f_24.f_6, 1, 1);
											}
											else
											{
												__LIB_6__::func_326(Global_1312193[iVar5 /*1951*/].f_3[0 /*3*/]);
												__LIB_26__::func_319(uParam0, fVar1, Global_1312193[iVar5 /*1951*/].f_24, Global_1312193[iVar5 /*1951*/].f_24.f_3, Global_1312193[iVar5 /*1951*/].f_24.f_6, 1, 1);
											}
										}
									}
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_3__::func_859(iVar3) || __LIB_3__::func_998(iVar3))
							{
								iVar28 = __LIB_4__::func_721(iVar3);
								if (iVar28 == -1)
								{
									iVar28 = __LIB_3__::func_977(iVar3);
								}
								if (iVar28 != -1)
								{
									if ((((((((((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && __LIB_0__::func_170(iVar28) != 4)) && __LIB_0__::func_170(iVar28) != 12) && __LIB_0__::func_170(iVar28) != 8) && __LIB_0__::func_170(iVar28) != 5) && __LIB_0__::func_170(iVar28) != 10) && __LIB_0__::func_170(iVar28) != 6) && __LIB_0__::func_170(iVar28) != 14) && __LIB_0__::func_170(iVar28) != 15) && __LIB_0__::func_170(iVar28) != 16) && __LIB_0__::func_170(iVar28) != 17)
									{
										iVar29 = 0;
										if (__LIB_0__::func_170(iVar28) == 11)
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
										__LIB_6__::func_325(uParam0);
										if (!__LIB_6__::func_304(&(uParam0->f_1)))
										{
											uParam0->f_1.f_41 = 14;
											Var31 = { Var30.f_22.f_59 };
											Var32 = { Var30.f_22.f_62 };
											fVar33 = Var30.f_22.f_65;
											__LIB_6__::func_326(Global_1946250.f_533[iVar28 /*3*/]);
											if (SYSTEM::VDIST(Var31, 0f, 0f, 0f) < 0.01f)
											{
												Var31 = { Var30.f_22.f_13 };
												Var32 = { Var30.f_22.f_16 };
												fVar33 = Var30.f_22.f_19;
											}
											if (!__LIB_0__::func_86(Var31))
											{
												__LIB_26__::func_319(uParam0, fVar1, Var31, Var32, fVar33, 1, 1);
												bVar7 = true;
											}
										}
									}
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_702(iVar3, 7))
							{
								bVar7 = true;
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 3;
									__LIB_26__::func_319(uParam0, fVar1, 122.0654f, -1327.9208f, 33.6793f, -2.9863f, 2.0975f, -9.7207f, 32.8998f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_702(iVar3, 12))
							{
								bVar7 = true;
								__LIB_6__::func_325(uParam0);
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 4;
									__LIB_26__::func_319(uParam0, fVar1, 1291.5598f, -1730.0697f, 58.7646f, -7.1113f, 0f, 65.8008f, 41.2371f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_702(iVar3, 13))
							{
								bVar7 = true;
								__LIB_6__::func_325(uParam0);
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 5;
									__LIB_26__::func_319(uParam0, fVar1, 1989.2953f, 3812.5586f, 33.4393f, -0.5562f, 0f, 69.5306f, 40.2409f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_702(iVar3, 14))
							{
								bVar7 = true;
								__LIB_6__::func_325(uParam0);
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 6;
									__LIB_26__::func_319(uParam0, fVar1, 689.6125f, -996.7897f, 37.070427f, -7.501717f, 0f, -43.41461f, 45f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_9__::func_93(iVar3))
							{
								bVar7 = true;
								__LIB_6__::func_325(uParam0);
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									Var8 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
									Var9 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
									fVar13 = CAM::GET_FINAL_RENDERED_CAM_FOV();
									uParam0->f_1.f_41 = 7;
									__LIB_26__::func_319(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (BitTest(Global_1853348[iVar4 /*834*/].f_833, 12))
							{
								bVar7 = true;
								__LIB_6__::func_325(uParam0);
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									__LIB_6__::func_324(&uVar10, &uVar11, &Var8, &Var9, &uVar12, Global_4718592.f_162483, 1);
									uParam0->f_1.f_41 = 8;
									__LIB_26__::func_319(uParam0, fVar1, Var8, Var9, 40f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (((BitTest(Global_1853348[iVar4 /*834*/].f_833, 14) || BitTest(Global_1853348[iVar4 /*834*/].f_833, 15)) || NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iVar3, "AM_ROLLERCOASTER", -1)) || NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iVar3, "AM_FERRISWHEEL", -1))
							{
								bVar7 = true;
								__LIB_6__::func_325(uParam0);
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 9;
									__LIB_26__::func_319(uParam0, fVar1, -1703.854f, -1082.2223f, 42.006f, -8.3096f, 0f, -111.8213f, 45f, 1, 0);
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
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									__LIB_6__::func_323(0);
									uParam0->f_1.f_41 = 10;
									__LIB_26__::func_319(uParam0, fVar1, -1155.4f, -2715.5f, 64f, -10.3f, 0f, 113.1f, 50f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
							{
								if ((__LIB_0__::func_743(iVar3) && __LIB_1__::func_566(iVar3) < 41) && !__LIB_1__::func_155(iVar3, 1, 0))
								{
									if ((__LIB_6__::func_144(&(uParam0->f_1)) == 3 && __LIB_9__::func_888(iVar3)) && Global_4718592.f_117083)
									{
										if (__LIB_6__::func_304(&(uParam0->f_1)))
										{
											bVar7 = true;
										}
										else
										{
											bVar7 = true;
											Var8 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
											Var9 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
											fVar13 = CAM::GET_FINAL_RENDERED_CAM_FOV();
											if (!__LIB_0__::func_86(Global_4718592.f_634) && __LIB_0__::func_706())
											{
												Var8 = { Global_4718592.f_634 };
												Var9 = { Global_4718592.f_637 };
											}
											__LIB_16__::func_621(0, 0, 1);
											uParam0->f_1.f_41 = 11;
											__LIB_26__::func_319(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
										}
									}
									else if (__LIB_6__::func_304(&(uParam0->f_1)))
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
										__LIB_26__::func_319(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
									}
								}
							}
							else if (__LIB_0__::func_702(iVar3, 0))
							{
								bVar7 = true;
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									if (__LIB_6__::func_322(__LIB_1__::func_265(iVar3), &Var8, &Var9, &fVar13))
									{
										uParam0->f_1.f_41 = 13;
										__LIB_26__::func_319(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
									}
								}
							}
						}
					}
					if (!bVar7 && !__LIB_0__::func_706())
					{
						if (__LIB_9__::func_92(uParam0, iVar3) && !__LIB_6__::func_321())
						{
							__LIB_26__::func_62(uParam0);
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
	func_1701(__LIB_0__::func_170(iParam0), uParam1, iParam2);
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
			*uParam0 = 882519/*func_2230*/;
			break;
		case 111:
			uParam0->f_35 = 882505/*func_2229*/;
			break;
		case 1:
			uParam0->f_30 = 882407/*func_2228*/;
			break;
		case 2:
			uParam0->f_31 = 881052/*func_2222*/;
			break;
		case 3:
			uParam0->f_34 = 880823/*func_2221*/;
			break;
		case 4:
			uParam0->f_12 = 880810/*func_2220*/;
			break;
		case 5:
			uParam0->f_11 = 880800/*func_2219*/;
			break;
		case 37:
			uParam0->f_18 = 880602/*func_2218*/;
			break;
		case 38:
			uParam0->f_9 = 880554/*func_2217*/;
			break;
		case 42:
			uParam0->f_10 = 880525/*func_2216*/;
			break;
		case 6:
			uParam0->f_32 = 880216/*func_2215*/;
			break;
		case 11:
			uParam0->f_11 = 880207/*func_2214*/;
			break;
		case 12:
			uParam0->f_33 = 877563/*func_2207*/;
			break;
		case 14:
			uParam0->f_11 = 877554/*func_2206*/;
			break;
		case 109:
			uParam0->f_56 = 870823/*func_2203*/;
			break;
		case 8:
			uParam0->f_37 = 869948/*func_2202*/;
			break;
		case 7:
			uParam0->f_36 = 869831/*func_2201*/;
			break;
		case 79:
			*uParam0 = 869775/*func_2198*/;
			break;
		case 9:
			uParam0->f_29 = 869622/*func_2197*/;
			break;
		case 10:
			uParam0->f_27 = 869474/*func_2195*/;
			break;
		case 13:
			uParam0->f_2 = 869412/*func_2194*/;
			break;
		case 15:
			uParam0->f_2 = 867786/*func_2177*/;
			break;
		case 16:
			uParam0->f_5 = 866616/*func_2169*/;
			break;
		case 108:
			uParam0->f_55 = 825284/*func_2074*/;
			break;
		case 17:
			uParam0->f_17 = 823655/*func_2059*/;
			break;
		case 19:
			uParam0->f_17 = 823504/*func_2054*/;
			break;
		case 18:
			uParam0->f_8 = 823479/*func_2053*/;
			break;
		case 20:
			uParam0->f_3 = 823259/*func_2051*/;
			break;
		case 21:
			uParam0->f_3 = 821818/*func_2037*/;
			break;
		case 74:
			uParam0->f_53 = 821628/*func_2035*/;
			break;
		case 75:
			uParam0->f_4 = 820430/*func_2030*/;
			break;
		case 22:
			uParam0->f_24 = 820323/*func_2029*/;
			break;
		case 23:
			uParam0->f_26 = 820276/*func_2028*/;
			break;
		case 24:
			uParam0->f_26 = 820239/*func_2027*/;
			break;
		case 26:
			uParam0->f_38 = 820231/*func_2026*/;
			break;
		case 25:
			uParam0->f_23 = 817263/*func_2007*/;
			break;
		case 27:
			uParam0->f_25 = 817255/*func_2006*/;
			break;
		case 28:
			uParam0->f_24 = 817247/*func_2005*/;
			break;
		case 30:
			uParam0->f_8 = 817097/*func_2003*/;
			break;
		case 31:
			uParam0->f_39 = 816885/*func_2001*/;
			break;
		case 33:
			uParam0->f_40 = 815970/*func_1993*/;
			break;
		case 32:
			*uParam0 = 815915/*func_1992*/;
			break;
		case 76:
			uParam0->f_13 = 815904/*func_1991*/;
			break;
		case 34:
			uParam0->f_41 = 812152/*func_1988*/;
			break;
		case 36:
			uParam0->f_58 = 812107/*func_1987*/;
			break;
		case 35:
			uParam0->f_42 = 791106/*func_1984*/;
			break;
		case 45:
			uParam0->f_14 = 791097/*func_1983*/;
			break;
		case 46:
			uParam0->f_14 = 791088/*func_1982*/;
			break;
		case 110:
			uParam0->f_57 = 791080/*func_1981*/;
			break;
		case 77:
			uParam0->f_13 = 791057/*func_1980*/;
			break;
		case 82:
			uParam0->f_19 = 791011/*func_1978*/;
			break;
		case 47:
			uParam0->f_43 = 790868/*func_1977*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 789725/*func_1968*/;
			break;
		case 49:
			uParam0->f_8 = 789707/*func_1967*/;
			break;
		case 50:
			*uParam0 = 789405/*func_1965*/;
			break;
		case 51:
			*uParam0 = 789303/*func_1964*/;
			break;
		case 52:
			uParam0->f_15 = 789292/*func_1963*/;
			break;
		case 53:
			uParam0->f_13 = 789166/*func_1962*/;
			break;
		case 54:
			uParam0->f_45 = 788776/*func_1961*/;
			break;
		case 56:
			uParam0->f_46 = 788757/*func_1960*/;
			break;
		case 57:
			uParam0->f_11 = 787855/*func_1957*/;
			break;
		case 58:
			uParam0->f_13 = 787729/*func_1956*/;
			break;
		case 59:
			*uParam0 = 786348/*func_1945*/;
			break;
		case 60:
			*uParam0 = 786339/*func_1944*/;
			break;
		case 61:
			uParam0->f_15 = 786328/*func_1943*/;
			break;
		case 62:
			uParam0->f_13 = 786202/*func_1942*/;
			break;
		case 55:
			uParam0->f_45 = 786194/*func_1941*/;
			break;
		case 63:
			uParam0->f_11 = 786180/*func_1940*/;
			break;
		case 64:
			uParam0->f_47 = 786172/*func_1939*/;
			break;
		case 65:
			uParam0->f_21 = 784748/*func_1927*/;
			break;
		case 66:
			uParam0->f_21 = 784052/*func_1924*/;
			break;
		case 67:
			uParam0->f_21 = 783912/*func_1922*/;
			break;
		case 68:
			*uParam0 = 782707/*func_1917*/;
			break;
		case 69:
			*uParam0 = 782698/*func_1916*/;
			break;
		case 70:
			uParam0->f_48 = 782686/*func_1915*/;
			break;
		case 71:
			uParam0->f_49 = 782677/*func_1914*/;
			break;
		case 107:
			uParam0->f_50 = 782665/*func_1913*/;
			break;
		case 80:
			uParam0->f_7 = 782214/*func_1911*/;
			break;
		case 84:
			uParam0->f_1 = 782205/*func_1910*/;
			break;
		case 85:
			uParam0->f_1 = 741440/*func_1816*/;
			break;
		case 87:
			uParam0->f_1 = 737585/*func_1795*/;
			break;
		case 88:
			uParam0->f_1 = 737576/*func_1794*/;
			break;
		case 89:
			uParam0->f_54 = 737568/*func_1793*/;
			break;
		case 90:
			uParam0->f_1 = 736689/*func_1776*/;
			break;
		case 91:
			uParam0->f_1 = 736655/*func_1775*/;
			break;
		case 92:
			uParam0->f_1 = 734860/*func_1764*/;
			break;
		case 94:
			uParam0->f_1 = 732890/*func_1752*/;
			break;
		case 95:
			uParam0->f_22 = 731607/*func_1741*/;
			break;
		case 96:
			uParam0->f_1 = 731598/*func_1740*/;
			break;
		case 97:
			uParam0->f_1 = 731589/*func_1739*/;
			break;
		case 98:
			uParam0->f_1 = 731580/*func_1738*/;
			break;
		case 100:
			uParam0->f_22 = 731572/*func_1737*/;
			break;
		case 101:
			uParam0->f_22 = 731564/*func_1736*/;
			break;
		case 112:
			uParam0->f_13 = 731450/*func_1735*/;
			break;
		case 113:
			uParam0->f_3 = 731296/*func_1731*/;
			break;
		case 114:
			uParam0->f_16 = 730628/*func_1730*/;
			break;
		case 115:
			uParam0->f_3 = 730619/*func_1729*/;
			break;
		case 116:
			*uParam0 = 730610/*func_1728*/;
			break;
		case 117:
			uParam0->f_16 = 726194/*func_1727*/;
			break;
		case 118:
			uParam0->f_11 = 726185/*func_1726*/;
			break;
		case 119:
			uParam0->f_27 = 726058/*func_1721*/;
			break;
		case 120:
			uParam0->f_19 = 726003/*func_1718*/;
			break;
		case 78:
			uParam0->f_59 = 725204/*func_1705*/;
			break;
		case 124:
			uParam0->f_1 = 725195/*func_1704*/;
			break;
		case 125:
			uParam0->f_19 = 725187/*func_1703*/;
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
			__LIB_2__::func_416(&(uParam1->f_109));
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
		__LIB_2__::func_415(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_2__::func_415(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_2__::func_414(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_2__::func_414(iParam0, &Var6, &Var8, &uVar12, 0);
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
		__LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
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
		__LIB_1__::func_137(*uParam0);
		if (func_1828(iParam1) || __LIB_19__::func_37(iParam1))
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
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_709(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_1508(iParam0, 14, 0), -1))
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
		if (__LIB_0__::func_517(iParam2, 1))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam1, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam1, ENTITY::GET_ENTITY_COORDS(*iParam0, true), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*uParam1, ENTITY::GET_ENTITY_ROTATION(*iParam0, 2), 2, true);
		}
		if (__LIB_0__::func_517(iParam2, 2))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam1, 5f);
		}
		if (__LIB_0__::func_517(iParam2, 4))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_12, false))
			{
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(*uParam1, uParam1->f_12, 1f);
			}
		}
		return 1;
	}
	else if (__LIB_41__::func_921(uParam1, *iParam0, 10f, 20f, 15f, ENTITY::GET_ENTITY_HEADING(*iParam0), 0, 0))
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
			__LIB_25__::func_536(*iParam0, &Var0);
			__LIB_41__::func_897(*uParam1, &Var0, 1, 1, 0);
			__LIB_1__::func_138(*iParam0, uParam1);
			ENTITY::SET_ENTITY_COLLISION(*uParam1, false, false);
			ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(*uParam1, true);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(*uParam1, false);
			iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam1);
			if (((((!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1)) && !__LIB_0__::func_652(iVar1)) && !iVar1 == joaat("oppressor")) && !iVar1 == joaat("kosatka"))
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
			if (!__LIB_0__::func_517(iParam2, 32))
			{
				func_1825(iParam0, uParam1, &(uParam1->f_1), __LIB_0__::func_517(iParam2, 16), __LIB_0__::func_517(iParam2, 128), __LIB_0__::func_517(iParam2, 64), !__LIB_0__::func_517(iParam2, 256), 0, 1);
			}
			if (__LIB_0__::func_517(iParam2, 4))
			{
				__LIB_42__::func_307(iParam0, &(uParam1->f_12));
				if (__LIB_0__::func_517(iParam2, 8))
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
			if (__LIB_0__::func_517(iParam2, 8))
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
	if (__LIB_7__::func_926(iParam0))
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
		if (!__LIB_2__::func_432(PLAYER::PLAYER_ID(), __LIB_2__::func_433(iParam0)) && __LIB_2__::func_432(__LIB_0__::func_582(), __LIB_2__::func_433(iParam0)))
		{
			iVar2 = 0;
			while (iVar2 < 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (__LIB_1__::func_264(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
				{
					if (__LIB_2__::func_432(iVar1, __LIB_2__::func_433(iParam0)))
					{
						Var3 = { __LIB_1__::func_267(iVar1) };
						if (__LIB_0__::func_585(Var3))
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
	iVar2 = __LIB_2__::func_399();
	Var3 = { __LIB_2__::func_462(iParam0, iVar2) };
	if (__LIB_7__::func_372(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2017(iParam0, Var3, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if (!Global_2667225.f_2680 && !BitTest(Global_1946250, 27))
		{
			if ((((iVar2 == 0 || iVar2 == 1) || iVar2 == 4) || iVar2 == 5) || iVar2 == 6)
			{
				__LIB_2__::func_447(0);
			}
			else
			{
				__LIB_2__::func_447(1);
			}
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_25__::func_379(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var3, 1, 0, 0, 0, -1, -1, __LIB_6__::func_25());
			}
			__LIB_25__::func_417(iParam0, __LIB_6__::func_25());
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var3, 0, 0, 1, 0, -1, -1, __LIB_6__::func_25());
			}
			__LIB_25__::func_417(iParam0, __LIB_6__::func_25());
		}
	}
	else
	{
		if (__LIB_4__::func_973(0))
		{
			if (iVar2 == 3 && __LIB_5__::func_705(__LIB_0__::func_582()) == iParam0)
			{
				__LIB_2__::func_447(1);
			}
		}
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
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
	if (__LIB_6__::func_911())
	{
		iVar0 = __LIB_3__::func_808();
	}
	fVar1 = SYSTEM::POW(SYSTEM::TO_FLOAT(__LIB_3__::func_807(iParam0)), 2f);
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
						Var7 = { __LIB_1__::func_267(iVar5) };
						bVar8 = false;
						if (__LIB_2__::func_461(iVar5) > -1)
						{
							if (iParam0 == 123 || iParam0 == 124)
							{
								bVar8 = true;
							}
						}
						if (bParam4 && !*iParam2)
						{
							if ((iVar0 != -1 && iVar0 == __LIB_2__::func_180(&Var7)) || NETWORK::NETWORK_IS_FRIEND(&Var7))
							{
								if (((((((((!__LIB_1__::func_425(iVar5, 1) && !__LIB_7__::func_291(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_0__::func_811(iVar6)) && !__LIB_8__::func_303(iVar5)) && !__LIB_8__::func_108(iVar5, 1)) && !((__LIB_4__::func_682(iVar5, 1) && !__LIB_2__::func_457(iVar2, iVar5)) && __LIB_6__::func_25() != 0)) && !func_2018(iVar5)) && !__LIB_3__::func_998(iVar5)) && !bVar8)
								{
									*iParam2 = 1;
								}
							}
						}
						if ((((((((((!*iParam3 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar5)) && !__LIB_7__::func_291(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_0__::func_811(iVar6)) && !__LIB_8__::func_303(iVar5)) && !__LIB_8__::func_108(iVar5, 1)) && __LIB_2__::func_192(PLAYER::PLAYER_ID())) && !func_2018(iVar5)) && !__LIB_3__::func_998(iVar5)) && !bVar8)
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
			*uParam0 = 939212/*func_2451*/;
			break;
		case 111:
			uParam0->f_35 = 939203/*func_2450*/;
			break;
		case 1:
			uParam0->f_30 = 939123/*func_2448*/;
			break;
		case 2:
			uParam0->f_31 = 938484/*func_2444*/;
			break;
		case 3:
			uParam0->f_34 = 938218/*func_2443*/;
			break;
		case 4:
			uParam0->f_12 = 938205/*func_2442*/;
			break;
		case 6:
			uParam0->f_32 = 938106/*func_2441*/;
			break;
		case 37:
			uParam0->f_18 = 937969/*func_2440*/;
			break;
		case 38:
			uParam0->f_9 = 937921/*func_2439*/;
			break;
		case 39:
			uParam0->f_11 = 937886/*func_2438*/;
			break;
		case 41:
			uParam0->f_20 = 937767/*func_2435*/;
			break;
		case 42:
			uParam0->f_10 = 937738/*func_2434*/;
			break;
		case 11:
			uParam0->f_11 = 937728/*func_2433*/;
			break;
		case 12:
			uParam0->f_33 = 935577/*func_2429*/;
			break;
		case 14:
			uParam0->f_11 = 935568/*func_2428*/;
			break;
		case 109:
			uParam0->f_56 = 932971/*func_2425*/;
			break;
		case 8:
			uParam0->f_37 = 932963/*func_2424*/;
			break;
		case 7:
			uParam0->f_36 = 932954/*func_2423*/;
			break;
		case 79:
			*uParam0 = 932945/*func_2422*/;
			break;
		case 13:
			uParam0->f_2 = 932883/*func_2421*/;
			break;
		case 15:
			uParam0->f_2 = 932802/*func_2420*/;
			break;
		case 16:
			uParam0->f_5 = 932449/*func_2419*/;
			break;
		case 108:
			uParam0->f_55 = 928015/*func_2404*/;
			break;
		case 17:
			uParam0->f_17 = 926847/*func_2402*/;
			break;
		case 19:
			uParam0->f_17 = 926821/*func_2401*/;
			break;
		case 20:
			uParam0->f_3 = 926812/*func_2400*/;
			break;
		case 21:
			uParam0->f_3 = 926681/*func_2398*/;
			break;
		case 74:
			uParam0->f_53 = 926577/*func_2397*/;
			break;
		case 75:
			uParam0->f_4 = 926561/*func_2396*/;
			break;
		case 22:
			uParam0->f_24 = 926405/*func_2395*/;
			break;
		case 23:
			uParam0->f_26 = 926397/*func_2394*/;
			break;
		case 26:
			uParam0->f_38 = 918456/*func_2355*/;
			break;
		case 25:
			uParam0->f_23 = 917406/*func_2351*/;
			break;
		case 27:
			uParam0->f_25 = 917190/*func_2348*/;
			break;
		case 28:
			uParam0->f_24 = 917149/*func_2347*/;
			break;
		case 29:
			uParam0->f_28 = 917126/*func_2346*/;
			break;
		case 30:
			uParam0->f_8 = 916367/*func_2342*/;
			break;
		case 31:
			uParam0->f_39 = 916339/*func_2341*/;
			break;
		case 43:
			uParam0->f_8 = 916225/*func_2340*/;
			break;
		case 33:
			uParam0->f_40 = 916107/*func_2339*/;
			break;
		case 76:
			uParam0->f_13 = 916058/*func_2338*/;
			break;
		case 34:
			uParam0->f_41 = 907220/*func_2337*/;
			break;
		case 36:
			uParam0->f_58 = 907172/*func_2336*/;
			break;
		case 35:
			uParam0->f_42 = 895916/*func_2329*/;
			break;
		case 45:
			uParam0->f_14 = 895907/*func_2328*/;
			break;
		case 46:
			uParam0->f_14 = 895898/*func_2327*/;
			break;
		case 110:
			uParam0->f_57 = 895890/*func_2326*/;
			break;
		case 77:
			uParam0->f_13 = 895879/*func_2325*/;
			break;
		case 47:
			uParam0->f_43 = 895753/*func_2324*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 894868/*func_2311*/;
			break;
		case 49:
			uParam0->f_8 = 894859/*func_2310*/;
			break;
		case 50:
			*uParam0 = 894690/*func_2309*/;
			break;
		case 51:
			*uParam0 = 894681/*func_2308*/;
			break;
		case 52:
			uParam0->f_15 = 894670/*func_2307*/;
			break;
		case 53:
			uParam0->f_13 = 894647/*func_2306*/;
			break;
		case 54:
			uParam0->f_45 = 894598/*func_2305*/;
			break;
		case 56:
			uParam0->f_46 = 894580/*func_2304*/;
			break;
		case 57:
			uParam0->f_11 = 894538/*func_2302*/;
			break;
		case 58:
			uParam0->f_13 = 894496/*func_2301*/;
			break;
		case 59:
			*uParam0 = 894367/*func_2299*/;
			break;
		case 60:
			*uParam0 = 894358/*func_2298*/;
			break;
		case 61:
			uParam0->f_15 = 894347/*func_2297*/;
			break;
		case 62:
			uParam0->f_13 = 894324/*func_2296*/;
			break;
		case 63:
			uParam0->f_11 = 894315/*func_2295*/;
			break;
		case 55:
			uParam0->f_45 = 894273/*func_2294*/;
			break;
		case 64:
			uParam0->f_47 = 894265/*func_2293*/;
			break;
		case 65:
			uParam0->f_21 = 894257/*func_2292*/;
			break;
		case 66:
			uParam0->f_21 = 893986/*func_2291*/;
			break;
		case 67:
			uParam0->f_21 = 893916/*func_2290*/;
			break;
		case 68:
			*uParam0 = 893244/*func_2288*/;
			break;
		case 69:
			*uParam0 = 893235/*func_2287*/;
			break;
		case 70:
			uParam0->f_48 = 893223/*func_2286*/;
			break;
		case 71:
			uParam0->f_49 = 893003/*func_2285*/;
			break;
		case 107:
			uParam0->f_50 = 892991/*func_2284*/;
			break;
		case 80:
			uParam0->f_7 = 892455/*func_2280*/;
			break;
		case 84:
			uParam0->f_1 = 892340/*func_2275*/;
			break;
		case 85:
			uParam0->f_1 = 891436/*func_2273*/;
			break;
		case 87:
			uParam0->f_1 = 888805/*func_2264*/;
			break;
		case 88:
			uParam0->f_1 = 888796/*func_2263*/;
			break;
		case 89:
			uParam0->f_54 = 888788/*func_2262*/;
			break;
		case 96:
			uParam0->f_1 = 888779/*func_2261*/;
			break;
		case 97:
			uParam0->f_1 = 888770/*func_2260*/;
			break;
		case 98:
			uParam0->f_1 = 888761/*func_2259*/;
			break;
		case 100:
			uParam0->f_22 = 888753/*func_2258*/;
			break;
		case 101:
			uParam0->f_22 = 888745/*func_2257*/;
			break;
		case 112:
			uParam0->f_13 = 888710/*func_2255*/;
			break;
		case 113:
			uParam0->f_3 = 888701/*func_2254*/;
			break;
		case 114:
			uParam0->f_16 = 886763/*func_2252*/;
			break;
		case 115:
			uParam0->f_3 = 886754/*func_2251*/;
			break;
		case 116:
			*uParam0 = 886745/*func_2250*/;
			break;
		case 117:
			uParam0->f_16 = 885525/*func_2249*/;
			break;
		case 121:
			*uParam0 = 885443/*func_2248*/;
			break;
		case 122:
			*uParam0 = 885426/*func_2247*/;
			break;
		case 123:
			uParam0->f_19 = 885394/*func_2245*/;
			break;
		case 78:
			uParam0->f_59 = 884203/*func_2234*/;
			break;
		case 124:
			uParam0->f_1 = 884194/*func_2233*/;
			break;
		case 125:
			uParam0->f_19 = 884186/*func_2232*/;
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
		iVar0 = __LIB_2__::func_399();
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1831(&iVar1, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
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
		__LIB_2__::func_533(iParam0, &Var2, &Var4, &uVar6, 1, iVar0);
		__LIB_2__::func_533(iParam0, &Var3, &Var5, &uVar7, 0, iVar0);
		__LIB_25__::func_103(&(Global_1946250.f_3638), 5000, "TD Shot", Var2, Var4, uVar6, Var3, Var5, uVar7, 0.2f, 0, 1000, 0, 0, 0);
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
	iVar3 = __LIB_2__::func_399();
	iVar4 = 0;
	Var5 = { __LIB_2__::func_561(iVar3) };
	func_2017(iParam0, Var5, &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		switch (iVar3)
		{
			case 12:
			case 13:
			case 14:
			case 15:
				__LIB_3__::func_805(iParam1, 0, 1);
				__LIB_3__::func_805(iParam1, 1, 0);
				__LIB_3__::func_805(iParam1, 2, 0);
				if (__LIB_2__::func_444(0, iParam1))
				{
					__LIB_2__::func_447(1);
				}
				break;
			default:
				__LIB_3__::func_805(iParam1, 0, !bVar2);
				__LIB_3__::func_805(iParam1, 1, 0);
				__LIB_3__::func_805(iParam1, 2, 0);
				__LIB_2__::func_447(0);
				MISC::SET_BIT(&(iParam1->f_2), 6);
				break;
		}
		return;
	}
	else if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_3__::func_805(iParam1, 0, 1);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_927(iParam0, -1);
		}
		if (((iVar3 == 12 || iVar3 == 13) || iVar3 == 14) || iVar3 == 15)
		{
			iVar4 = 1;
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_927(iParam0, -1);
			__LIB_2__::func_447(iVar4);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var5, 1, 0, 0, 0, -2, -1, iVar4);
			}
			__LIB_18__::func_905(iVar4, 1);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var5, 0, 0, 1, 0, -2, -1, iVar4);
			}
			__LIB_18__::func_905(iVar4, 1);
		}
	}
	else
	{
		__LIB_2__::func_447(iVar4);
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2355(var uParam0, var uParam1)//Position - 0xE03B8
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	if (!__LIB_4__::func_10() && iVar0 != 1)
	{
		__LIB_2__::func_565(1);
	}
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_567(uParam0, uParam1);
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
	bVar2 = __LIB_3__::func_820();
	func_2017(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		if (bVar2 || (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_79[0 /*6*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[0 /*6*/]), __LIB_4__::func_724(0))))
		{
			uParam1->f_6 = 1;
			if (__LIB_2__::func_566() == 1)
			{
				uParam1->f_8 = 1;
				uParam1->f_11 = 10;
				uParam1->f_1 = 1;
				uParam1->f_10 = 1;
				__LIB_7__::func_396();
				if (bVar2)
				{
					__LIB_2__::func_447(1);
				}
				else if (BitTest(Global_1946250.f_8, 22))
				{
					__LIB_3__::func_816(PLAYER::PLAYER_ID());
				}
			}
			return;
		}
	}
	sVar6 = __LIB_2__::func_551();
	iVar8 = 0;
	while (iVar8 < 3)
	{
		uVar5[iVar7] = __LIB_4__::func_724(iVar8);
		if (__LIB_2__::func_563(iVar8, bVar0, bVar1))
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
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CAR_MET_EXT_T" /* GXT: LS Car Meet */);
		__LIB_7__::func_286(1, sVar6, sVar6);
		__LIB_3__::func_874();
		iVar8 = 0;
		while (iVar8 < iVar7)
		{
			__LIB_25__::func_557(iVar8, uVar5[iVar8], 0, 1, 0, 0, 0);
			iVar8++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_2__::func_566() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			uParam1->f_10 = 1;
			__LIB_7__::func_396();
			if (bVar2)
			{
				__LIB_2__::func_447(1);
			}
			else if (BitTest(Global_1946250.f_8, 22))
			{
				__LIB_3__::func_816(PLAYER::PLAYER_ID());
			}
			if (iVar4[uParam0->f_4] != 0)
			{
				__LIB_25__::func_296(iVar4[uParam0->f_4], 154);
			}
		}
	}
	else if (uParam0->f_3)
	{
		uParam1->f_4 = !__LIB_4__::func_10();
		__LIB_7__::func_396();
		MISC::CLEAR_BIT(&(Global_1946250.f_8), 22);
	}
}

void func_2452(var uParam0, int iParam1)//Position - 0xE54D5
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 979717/*func_2621*/;
			break;
		case 111:
			uParam0->f_35 = 979703/*func_2620*/;
			break;
		case 1:
			uParam0->f_30 = 979611/*func_2618*/;
			break;
		case 2:
			uParam0->f_31 = 979389/*func_2615*/;
			break;
		case 3:
			uParam0->f_34 = 979232/*func_2614*/;
			break;
		case 4:
			uParam0->f_12 = 979219/*func_2613*/;
			break;
		case 5:
			uParam0->f_11 = 979209/*func_2612*/;
			break;
		case 37:
			uParam0->f_18 = 979089/*func_2611*/;
			break;
		case 38:
			uParam0->f_9 = 979041/*func_2610*/;
			break;
		case 42:
			uParam0->f_10 = 979012/*func_2609*/;
			break;
		case 6:
			uParam0->f_32 = 978924/*func_2608*/;
			break;
		case 11:
			uParam0->f_11 = 978915/*func_2607*/;
			break;
		case 12:
			uParam0->f_33 = 977170/*func_2602*/;
			break;
		case 14:
			uParam0->f_11 = 977161/*func_2601*/;
			break;
		case 109:
			uParam0->f_56 = 973053/*func_2598*/;
			break;
		case 8:
			uParam0->f_37 = 972576/*func_2597*/;
			break;
		case 7:
			uParam0->f_36 = 972482/*func_2596*/;
			break;
		case 79:
			*uParam0 = 972473/*func_2595*/;
			break;
		case 13:
			uParam0->f_2 = 972411/*func_2594*/;
			break;
		case 15:
			uParam0->f_2 = 972330/*func_2593*/;
			break;
		case 16:
			uParam0->f_5 = 971432/*func_2591*/;
			break;
		case 108:
			uParam0->f_55 = 968152/*func_2579*/;
			break;
		case 17:
			uParam0->f_17 = 966880/*func_2576*/;
			break;
		case 19:
			uParam0->f_17 = 966854/*func_2575*/;
			break;
		case 20:
			uParam0->f_3 = 966639/*func_2573*/;
			break;
		case 21:
			uParam0->f_3 = 966575/*func_2572*/;
			break;
		case 74:
			uParam0->f_53 = 966471/*func_2571*/;
			break;
		case 75:
			uParam0->f_4 = 966455/*func_2570*/;
			break;
		case 22:
			uParam0->f_24 = 966348/*func_2569*/;
			break;
		case 23:
			uParam0->f_26 = 966340/*func_2568*/;
			break;
		case 26:
			uParam0->f_38 = 962359/*func_2550*/;
			break;
		case 25:
			uParam0->f_23 = 961909/*func_2547*/;
			break;
		case 27:
			uParam0->f_25 = 961901/*func_2546*/;
			break;
		case 28:
			uParam0->f_24 = 961893/*func_2545*/;
			break;
		case 30:
			uParam0->f_8 = 961256/*func_2540*/;
			break;
		case 31:
			uParam0->f_39 = 961122/*func_2539*/;
			break;
		case 33:
			uParam0->f_40 = 960248/*func_2530*/;
			break;
		case 32:
			*uParam0 = 960045/*func_2526*/;
			break;
		case 76:
			uParam0->f_13 = 959892/*func_2525*/;
			break;
		case 34:
			uParam0->f_41 = 958280/*func_2521*/;
			break;
		case 36:
			uParam0->f_58 = 958235/*func_2520*/;
			break;
		case 35:
			uParam0->f_42 = 949197/*func_2517*/;
			break;
		case 45:
			uParam0->f_14 = 949188/*func_2516*/;
			break;
		case 46:
			uParam0->f_14 = 949179/*func_2515*/;
			break;
		case 110:
			uParam0->f_57 = 949171/*func_2514*/;
			break;
		case 77:
			uParam0->f_13 = 949148/*func_2513*/;
			break;
		case 47:
			uParam0->f_43 = 949096/*func_2512*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 948958/*func_2510*/;
			break;
		case 49:
			uParam0->f_8 = 948940/*func_2509*/;
			break;
		case 50:
			*uParam0 = 948133/*func_2506*/;
			break;
		case 51:
			*uParam0 = 948031/*func_2505*/;
			break;
		case 52:
			uParam0->f_15 = 948020/*func_2504*/;
			break;
		case 53:
			uParam0->f_13 = 947867/*func_2503*/;
			break;
		case 54:
			uParam0->f_45 = 947632/*func_2502*/;
			break;
		case 56:
			uParam0->f_46 = 947623/*func_2501*/;
			break;
		case 57:
			uParam0->f_11 = 947210/*func_2497*/;
			break;
		case 58:
			uParam0->f_13 = 947057/*func_2496*/;
			break;
		case 59:
			*uParam0 = 947048/*func_2495*/;
			break;
		case 60:
			*uParam0 = 947039/*func_2494*/;
			break;
		case 61:
			uParam0->f_15 = 947028/*func_2493*/;
			break;
		case 62:
			uParam0->f_13 = 947017/*func_2492*/;
			break;
		case 63:
			uParam0->f_11 = 947008/*func_2491*/;
			break;
		case 64:
			uParam0->f_47 = 947000/*func_2490*/;
			break;
		case 65:
			uParam0->f_21 = 945944/*func_2487*/;
			break;
		case 66:
			uParam0->f_21 = 945724/*func_2486*/;
			break;
		case 67:
			uParam0->f_21 = 945649/*func_2485*/;
			break;
		case 68:
			*uParam0 = 944960/*func_2484*/;
			break;
		case 69:
			*uParam0 = 944951/*func_2483*/;
			break;
		case 70:
			uParam0->f_48 = 944939/*func_2482*/;
			break;
		case 71:
			uParam0->f_49 = 944847/*func_2481*/;
			break;
		case 107:
			uParam0->f_50 = 944835/*func_2480*/;
			break;
		case 80:
			uParam0->f_7 = 944468/*func_2479*/;
			break;
		case 84:
			uParam0->f_1 = 944459/*func_2478*/;
			break;
		case 85:
			uParam0->f_1 = 943666/*func_2476*/;
			break;
		case 87:
			uParam0->f_1 = 942286/*func_2469*/;
			break;
		case 88:
			uParam0->f_1 = 942277/*func_2468*/;
			break;
		case 89:
			uParam0->f_54 = 942269/*func_2467*/;
			break;
		case 96:
			uParam0->f_1 = 942260/*func_2466*/;
			break;
		case 97:
			uParam0->f_1 = 942251/*func_2465*/;
			break;
		case 98:
			uParam0->f_1 = 942242/*func_2464*/;
			break;
		case 100:
			uParam0->f_22 = 942234/*func_2463*/;
			break;
		case 101:
			uParam0->f_22 = 942226/*func_2462*/;
			break;
		case 112:
			uParam0->f_13 = 942214/*func_2461*/;
			break;
		case 113:
			uParam0->f_3 = 942205/*func_2460*/;
			break;
		case 114:
			uParam0->f_16 = 886763/*func_2252*/;
			break;
		case 115:
			uParam0->f_3 = 942196/*func_2459*/;
			break;
		case 116:
			*uParam0 = 942187/*func_2458*/;
			break;
		case 117:
			uParam0->f_16 = 940967/*func_2457*/;
			break;
		case 78:
			uParam0->f_59 = 940795/*func_2455*/;
			break;
		case 124:
			uParam0->f_1 = 940786/*func_2454*/;
			break;
		case 125:
			uParam0->f_19 = 940778/*func_2453*/;
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
			__LIB_2__::func_416(&(uParam1->f_109));
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
		__LIB_2__::func_586(iParam0, &Var1, &Var3, &uVar5, 1);
		__LIB_2__::func_586(iParam0, &Var2, &Var4, &uVar6, 0);
		__LIB_25__::func_103(&(Global_1946250.f_3638), 5000, "TD Shot", Var1, Var3, uVar5, Var2, Var4, uVar6, 0.2f, 0, 1000, 0, 0, 0);
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
	if (!__LIB_2__::func_590(PLAYER::PLAYER_ID(), __LIB_2__::func_591(iParam0)) && !__LIB_2__::func_590(__LIB_0__::func_582(), __LIB_2__::func_591(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_264(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_2__::func_590(iVar1, __LIB_2__::func_591(iParam0)) && __LIB_7__::func_33(iVar1))
				{
					Var3 = { __LIB_1__::func_267(iVar1) };
					if (__LIB_0__::func_585(Var3))
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
	Var2 = { __LIB_2__::func_611(iParam0) };
	if (__LIB_7__::func_408(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2017(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_19__::func_95(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_19__::func_174(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_19__::func_174(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2550(var uParam0, var uParam1)//Position - 0xEAF37
{
	if (__LIB_2__::func_399() == 2 || __LIB_2__::func_399() == 1)
	{
		func_2553(uParam0, uParam1);
	}
	else if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0) && __LIB_2__::func_590(__LIB_2__::func_191(PLAYER::PLAYER_ID()), __LIB_2__::func_591(*uParam0)))
	{
		__LIB_3__::func_829(uParam0, uParam1);
	}
	else
	{
		__LIB_2__::func_612(uParam1);
	}
}

void func_2553(var uParam0, var uParam1)//Position - 0xEB016
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_569(uParam0, uParam1);
			break;
		case 1:
			func_2565(uParam0, uParam1);
			break;
		case 2:
			__LIB_35__::func_845(uParam0, uParam1);
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
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_7__::func_396();
		if (__LIB_19__::func_96(*uParam0))
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
			__LIB_1__::func_319("AUTOS_PROP_ET" /* GXT: AUTO SHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 0;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_19__::func_95(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_2598(int iParam0, var uParam1, int iParam2)//Position - 0xED8FD
{
	var uVar0;
	var uVar1;
	bool bVar2;
	__LIB_2__::func_617(iParam0, &(uParam1->f_22.f_59), &(uParam1->f_22.f_62), &(uParam1->f_22.f_65), &(uParam1->f_22.f_66), 0);
	switch (iParam0)
	{
		case 149:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_6__::func_414(iParam0))
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
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
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
					if (__LIB_6__::func_414(iParam0))
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
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
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
					if (__LIB_6__::func_414(iParam0))
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
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
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
					if (__LIB_6__::func_414(iParam0))
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
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
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
					if (__LIB_6__::func_414(iParam0))
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
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
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
			if (!__LIB_4__::func_973(1) || (__LIB_2__::func_232() && __LIB_2__::func_590(PLAYER::PLAYER_ID(), __LIB_2__::func_591(iParam0))))
			{
				func_2017(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
				bVar2 = (uVar0 || uVar1);
			}
			if (!bVar2 && !__LIB_19__::func_96(iParam0))
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
			*uParam0 = 996045/*func_2742*/;
			break;
		case 111:
			uParam0->f_35 = 996036/*func_2741*/;
			break;
		case 1:
			uParam0->f_30 = 995968/*func_2739*/;
			break;
		case 2:
			uParam0->f_31 = 995528/*func_2736*/;
			break;
		case 3:
			uParam0->f_34 = 995380/*func_2735*/;
			break;
		case 4:
			uParam0->f_12 = 995367/*func_2734*/;
			break;
		case 37:
			uParam0->f_18 = 995141/*func_2733*/;
			break;
		case 38:
			uParam0->f_9 = 995051/*func_2732*/;
			break;
		case 39:
			uParam0->f_11 = 995031/*func_2731*/;
			break;
		case 40:
			uParam0->f_6 = 994926/*func_2730*/;
			break;
		case 41:
			uParam0->f_20 = 994901/*func_2729*/;
			break;
		case 42:
			uParam0->f_10 = 994888/*func_2728*/;
			break;
		case 6:
			uParam0->f_32 = 994824/*func_2727*/;
			break;
		case 11:
			uParam0->f_11 = 994815/*func_2726*/;
			break;
		case 12:
			uParam0->f_33 = 994278/*func_2722*/;
			break;
		case 14:
			uParam0->f_11 = 994269/*func_2721*/;
			break;
		case 109:
			uParam0->f_56 = 993329/*func_2719*/;
			break;
		case 8:
			uParam0->f_37 = 993321/*func_2718*/;
			break;
		case 7:
			uParam0->f_36 = 993312/*func_2717*/;
			break;
		case 79:
			*uParam0 = 993303/*func_2716*/;
			break;
		case 13:
			uParam0->f_2 = 993241/*func_2715*/;
			break;
		case 15:
			uParam0->f_2 = 993160/*func_2714*/;
			break;
		case 16:
			uParam0->f_5 = 992833/*func_2713*/;
			break;
		case 108:
			uParam0->f_55 = 992824/*func_2712*/;
			break;
		case 17:
			uParam0->f_17 = 992813/*func_2711*/;
			break;
		case 19:
			uParam0->f_17 = 992802/*func_2710*/;
			break;
		case 18:
			uParam0->f_8 = 992760/*func_2708*/;
			break;
		case 20:
			uParam0->f_3 = 992751/*func_2707*/;
			break;
		case 21:
			uParam0->f_3 = 992703/*func_2706*/;
			break;
		case 74:
			uParam0->f_53 = 992648/*func_2705*/;
			break;
		case 75:
			uParam0->f_4 = 992639/*func_2704*/;
			break;
		case 22:
			uParam0->f_24 = 992532/*func_2703*/;
			break;
		case 23:
			uParam0->f_26 = 992524/*func_2702*/;
			break;
		case 25:
			uParam0->f_23 = 992097/*func_2699*/;
			break;
		case 27:
			uParam0->f_25 = 992089/*func_2698*/;
			break;
		case 28:
			uParam0->f_24 = 992081/*func_2697*/;
			break;
		case 30:
			uParam0->f_8 = 992046/*func_2696*/;
			break;
		case 31:
			uParam0->f_39 = 992018/*func_2695*/;
			break;
		case 33:
			uParam0->f_40 = 991851/*func_2694*/;
			break;
		case 76:
			uParam0->f_13 = 991828/*func_2693*/;
			break;
		case 34:
			uParam0->f_41 = 988214/*func_2690*/;
			break;
		case 36:
			uParam0->f_58 = 988169/*func_2689*/;
			break;
		case 35:
			uParam0->f_42 = 984975/*func_2685*/;
			break;
		case 45:
			uParam0->f_14 = 984966/*func_2684*/;
			break;
		case 46:
			uParam0->f_14 = 984957/*func_2683*/;
			break;
		case 110:
			uParam0->f_57 = 984949/*func_2682*/;
			break;
		case 77:
			uParam0->f_13 = 984938/*func_2681*/;
			break;
		case 47:
			uParam0->f_43 = 984767/*func_2680*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 983494/*func_2672*/;
			break;
		case 49:
			uParam0->f_8 = 983485/*func_2671*/;
			break;
		case 50:
			*uParam0 = 983060/*func_2664*/;
			break;
		case 51:
			*uParam0 = 983051/*func_2663*/;
			break;
		case 52:
			uParam0->f_15 = 983035/*func_2662*/;
			break;
		case 53:
			uParam0->f_13 = 983012/*func_2661*/;
			break;
		case 54:
			uParam0->f_45 = 983004/*func_2660*/;
			break;
		case 56:
			uParam0->f_46 = 982995/*func_2659*/;
			break;
		case 57:
			uParam0->f_11 = 982982/*func_2658*/;
			break;
		case 58:
			uParam0->f_13 = 982940/*func_2657*/;
			break;
		case 59:
			*uParam0 = 982931/*func_2656*/;
			break;
		case 60:
			*uParam0 = 982922/*func_2655*/;
			break;
		case 61:
			uParam0->f_15 = 982911/*func_2654*/;
			break;
		case 62:
			uParam0->f_13 = 982900/*func_2653*/;
			break;
		case 63:
			uParam0->f_11 = 982891/*func_2652*/;
			break;
		case 64:
			uParam0->f_47 = 982883/*func_2651*/;
			break;
		case 65:
			uParam0->f_21 = 982875/*func_2650*/;
			break;
		case 66:
			uParam0->f_21 = 982262/*func_2647*/;
			break;
		case 67:
			uParam0->f_21 = 982192/*func_2646*/;
			break;
		case 68:
			*uParam0 = 981503/*func_2645*/;
			break;
		case 69:
			*uParam0 = 981494/*func_2644*/;
			break;
		case 70:
			uParam0->f_48 = 981482/*func_2643*/;
			break;
		case 71:
			uParam0->f_49 = 981473/*func_2642*/;
			break;
		case 107:
			uParam0->f_50 = 981461/*func_2641*/;
			break;
		case 80:
			uParam0->f_7 = 981452/*func_2640*/;
			break;
		case 84:
			uParam0->f_1 = 981443/*func_2639*/;
			break;
		case 85:
			uParam0->f_1 = 981434/*func_2638*/;
			break;
		case 87:
			uParam0->f_1 = 981425/*func_2637*/;
			break;
		case 88:
			uParam0->f_1 = 981416/*func_2636*/;
			break;
		case 89:
			uParam0->f_54 = 981408/*func_2635*/;
			break;
		case 96:
			uParam0->f_1 = 981399/*func_2634*/;
			break;
		case 97:
			uParam0->f_1 = 981390/*func_2633*/;
			break;
		case 98:
			uParam0->f_1 = 981381/*func_2632*/;
			break;
		case 100:
			uParam0->f_22 = 981373/*func_2631*/;
			break;
		case 101:
			uParam0->f_22 = 981365/*func_2630*/;
			break;
		case 112:
			uParam0->f_13 = 981353/*func_2629*/;
			break;
		case 113:
			uParam0->f_3 = 981344/*func_2628*/;
			break;
		case 114:
			uParam0->f_16 = 886763/*func_2252*/;
			break;
		case 115:
			uParam0->f_3 = 981335/*func_2627*/;
			break;
		case 116:
			*uParam0 = 981326/*func_2626*/;
			break;
		case 117:
			uParam0->f_16 = 940967/*func_2457*/;
			break;
		case 78:
			uParam0->f_59 = 981318/*func_2625*/;
			break;
		case 124:
			uParam0->f_1 = 981309/*func_2624*/;
			break;
		case 125:
			uParam0->f_19 = 981301/*func_2623*/;
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
	iParam3->f_46 = __LIB_2__::func_635();
	MISC::SET_BIT(&(iParam3->f_2), 4);
	switch (iParam1)
	{
		case 0:
			__LIB_3__::func_805(iParam3, 0, 1);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 0);
			__LIB_3__::func_805(iParam3, 3, 1);
			__LIB_3__::func_805(iParam3, 4, 0);
			__LIB_3__::func_805(iParam3, 5, 0);
			break;
		case 1:
			__LIB_3__::func_805(iParam3, 0, 0);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 1);
			__LIB_3__::func_805(iParam3, 3, 1);
			__LIB_3__::func_805(iParam3, 4, 0);
			__LIB_3__::func_805(iParam3, 5, 0);
			break;
		case 3:
			__LIB_3__::func_805(iParam3, 0, 1);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 0);
			__LIB_3__::func_805(iParam3, 3, 0);
			__LIB_3__::func_805(iParam3, 4, 0);
			__LIB_3__::func_805(iParam3, 5, 0);
			break;
		case 2:
			__LIB_3__::func_805(iParam3, 0, 1);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 0);
			__LIB_3__::func_805(iParam3, 3, 0);
			break;
	}
	if (iParam1 == 2)
	{
		MISC::SET_BIT(&uVar3, PLAYER::PLAYER_ID());
		if (__LIB_4__::func_727(PLAYER::PLAYER_ID(), 148, uVar3, 1))
		{
			bVar1 = false;
			bVar2 = false;
		}
		else
		{
			func_2017(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar1, &bVar2, 1, 1);
		}
		__LIB_3__::func_805(iParam3, 4, bVar1);
		__LIB_3__::func_805(iParam3, 5, bVar2);
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
	if (__LIB_2__::func_444(0, iParam3) || __LIB_2__::func_444(1, iParam3))
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
	else if (__LIB_2__::func_444(3, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 26);
		iParam3->f_5 = 0;
	}
	else if (__LIB_2__::func_444(2, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 27);
		iParam3->f_5 = 0;
	}
	else if (__LIB_2__::func_444(4, iParam3) || __LIB_2__::func_444(5, iParam3))
	{
		iVar5 = __LIB_8__::func_220(__LIB_2__::func_444(4, iParam3));
		__LIB_2__::func_633(iVar5);
		bVar4 = true;
	}
	if (bVar4)
	{
		if (__LIB_2__::func_626())
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 1);
		}
		else
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 0);
		}
		if (__LIB_3__::func_834())
		{
			MISC::SET_BIT(&(Global_1946250.f_6), 19);
		}
		else
		{
			__LIB_2__::func_549(iParam0, -1);
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
		iVar3 = __LIB_2__::func_399();
		Var2 = { __LIB_2__::func_640(iParam0, iVar3) };
		func_2017(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && Global_1946250.f_3606 != 148)
		{
			__LIB_7__::func_928(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_928(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_907();
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_907();
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2743(var uParam0, int iParam1)//Position - 0xF32D6
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1093483/*func_3050*/;
			break;
		case 1:
			uParam0->f_30 = 1093427/*func_3049*/;
			break;
		case 2:
			uParam0->f_31 = 1092765/*func_3047*/;
			break;
		case 3:
			uParam0->f_34 = 1092638/*func_3046*/;
			break;
		case 4:
			uParam0->f_12 = 1092604/*func_3045*/;
			break;
		case 5:
			uParam0->f_11 = 1092593/*func_3044*/;
			break;
		case 6:
			uParam0->f_32 = 1092529/*func_3043*/;
			break;
		case 111:
			uParam0->f_35 = 1092506/*func_3042*/;
			break;
		case 79:
			*uParam0 = 1092497/*func_3041*/;
			break;
		case 37:
			uParam0->f_18 = 1092379/*func_3040*/;
			break;
		case 38:
			uParam0->f_9 = 1092282/*func_3038*/;
			break;
		case 11:
			uParam0->f_11 = 1092273/*func_3037*/;
			break;
		case 12:
			uParam0->f_33 = 1091883/*func_3035*/;
			break;
		case 109:
			uParam0->f_56 = 1091573/*func_3034*/;
			break;
		case 15:
			uParam0->f_2 = 1089617/*func_3022*/;
			break;
		case 13:
			uParam0->f_2 = 1089608/*func_3021*/;
			break;
		case 75:
			uParam0->f_4 = 1089599/*func_3020*/;
			break;
		case 16:
			uParam0->f_5 = 1089216/*func_3017*/;
			break;
		case 108:
			uParam0->f_55 = 1085298/*func_2999*/;
			break;
		case 17:
			uParam0->f_17 = 1084557/*func_2996*/;
			break;
		case 19:
			uParam0->f_17 = 1084531/*func_2995*/;
			break;
		case 20:
			uParam0->f_3 = 1084362/*func_2994*/;
			break;
		case 21:
			uParam0->f_3 = 1084299/*func_2993*/;
			break;
		case 74:
			uParam0->f_53 = 1084147/*func_2992*/;
			break;
		case 22:
			uParam0->f_24 = 1084062/*func_2991*/;
			break;
		case 25:
			uParam0->f_23 = 1083191/*func_2988*/;
			break;
		case 30:
			uParam0->f_8 = 1081863/*func_2982*/;
			break;
		case 31:
			uParam0->f_39 = 1081278/*func_2979*/;
			break;
		case 33:
			uParam0->f_40 = 1080081/*func_2975*/;
			break;
		case 14:
			uParam0->f_11 = 1080072/*func_2974*/;
			break;
		case 34:
			uParam0->f_41 = 1077305/*func_2971*/;
			break;
		case 36:
			uParam0->f_58 = 1077252/*func_2970*/;
			break;
		case 35:
			uParam0->f_42 = 1071800/*func_2966*/;
			break;
		case 45:
			uParam0->f_14 = 1071791/*func_2965*/;
			break;
		case 46:
			uParam0->f_14 = 1071782/*func_2964*/;
			break;
		case 110:
			uParam0->f_57 = 1071774/*func_2963*/;
			break;
		case 77:
			uParam0->f_13 = 1071751/*func_2962*/;
			break;
		case 47:
			uParam0->f_43 = 1071699/*func_2961*/;
			break;
		case 49:
			uParam0->f_8 = 1071674/*func_2960*/;
			break;
		case 50:
			*uParam0 = 1071636/*func_2959*/;
			break;
		case 51:
			*uParam0 = 1071594/*func_2957*/;
			break;
		case 52:
			uParam0->f_15 = 1071583/*func_2956*/;
			break;
		case 53:
			uParam0->f_13 = 1071504/*func_2955*/;
			break;
		case 54:
			uParam0->f_45 = 1071496/*func_2954*/;
			break;
		case 56:
			uParam0->f_46 = 1071487/*func_2953*/;
			break;
		case 57:
			uParam0->f_11 = 1071477/*func_2952*/;
			break;
		case 58:
			uParam0->f_13 = 1071230/*func_2951*/;
			break;
		case 64:
			uParam0->f_47 = 1070235/*func_2947*/;
			break;
		case 65:
			uParam0->f_21 = 1069042/*func_2942*/;
			break;
		case 66:
			uParam0->f_21 = 1067983/*func_2933*/;
			break;
		case 67:
			uParam0->f_21 = 1067807/*func_2931*/;
			break;
		case 68:
			*uParam0 = 1066283/*func_2923*/;
			break;
		case 69:
			*uParam0 = 1066274/*func_2922*/;
			break;
		case 70:
			uParam0->f_48 = 1066262/*func_2921*/;
			break;
		case 71:
			uParam0->f_49 = 1066253/*func_2920*/;
			break;
		case 107:
			uParam0->f_50 = 1066241/*func_2919*/;
			break;
		case 80:
			uParam0->f_7 = 1065408/*func_2913*/;
			break;
		case 73:
			uParam0->f_51 = 1065399/*func_2912*/;
			break;
		case 84:
			uParam0->f_1 = 1064726/*func_2910*/;
			break;
		case 85:
			uParam0->f_1 = 1063853/*func_2902*/;
			break;
		case 87:
			uParam0->f_1 = 1062640/*func_2893*/;
			break;
		case 88:
			uParam0->f_1 = 1062620/*func_2892*/;
			break;
		case 89:
			uParam0->f_54 = 1062526/*func_2891*/;
			break;
		case 90:
			uParam0->f_1 = 1062395/*func_2888*/;
			break;
		case 91:
			uParam0->f_1 = 1061749/*func_2887*/;
			break;
		case 92:
			uParam0->f_1 = 1060981/*func_2884*/;
			break;
		case 94:
			uParam0->f_1 = 1060428/*func_2883*/;
			break;
		case 95:
			uParam0->f_22 = 1059834/*func_2878*/;
			break;
		case 18:
			uParam0->f_8 = 1059476/*func_2874*/;
			break;
		case 96:
			uParam0->f_1 = 1059383/*func_2873*/;
			break;
		case 97:
			uParam0->f_1 = 1058515/*func_2868*/;
			break;
		case 98:
			uParam0->f_1 = 1002661/*func_2797*/;
			break;
		case 100:
			uParam0->f_22 = 999376/*func_2775*/;
			break;
		case 101:
			uParam0->f_22 = 998217/*func_2762*/;
			break;
		case 78:
			uParam0->f_59 = 998009/*func_2759*/;
			break;
		case 104:
			uParam0->f_1 = 997569/*func_2751*/;
			break;
		case 102:
			uParam0->f_1 = 997560/*func_2750*/;
			break;
		case 103:
			uParam0->f_22 = 997448/*func_2745*/;
			break;
		case 81:
			*uParam0 = 997405/*func_2744*/;
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
	if (__LIB_2__::func_675())
	{
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		MISC::SET_BIT(&(Global_1946250.f_7), 24);
		if (uParam1->f_218 != -1)
		{
			uParam1->f_218 = -1;
		}
		return 1;
	}
	else if (__LIB_3__::func_842())
	{
		func_2813(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 1);
		if (__LIB_0__::func_121(uParam1->f_140[0]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[0]))
			{
				return 0;
			}
			bVar0 = (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_7__::func_43(PLAYER::PLAYER_PED_ID()));
			Var1 = { __LIB_2__::func_684(Global_1946250.f_3377) };
			Var2 = { __LIB_2__::func_683(Global_1946250.f_3377) };
			sVar3 = __LIB_2__::func_669(0, 1);
			sVar4 = __LIB_2__::func_682(0, 1);
			__LIB_2__::func_681(&(Global_1946250.f_4073), 2600, "sub_exit", Var1, Var2, sVar3, sVar4, 0, 0, 500, 0, 2);
			sVar3 = __LIB_2__::func_669(bVar0, 0);
			sVar4 = __LIB_2__::func_682(bVar0, 0);
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
		if (__LIB_2__::func_668(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("seasparrow3");
			iVar8 = 0;
			if (PLAYER::PLAYER_ID() == Global_1853194)
			{
				STREAMING::REQUEST_MODEL(joaat("seasparrow2"));
			}
			if (!__LIB_7__::func_636(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_2__::func_667(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("avisa");
			iVar8 = 1;
			if (!__LIB_7__::func_636(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_2__::func_660(PLAYER::PLAYER_ID()))
		{
			iVar5 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
			iVar8 = 2;
			if (!__LIB_7__::func_636(uParam1, iVar8))
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
			__LIB_2__::func_416(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var6, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam1->f_109, Var7, 2, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			if (__LIB_2__::func_660(PLAYER::PLAYER_ID()))
			{
				VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam1->f_109, false);
				VEHICLE::TRANSFORM_TO_SUBMARINE(uParam1->f_109, true);
			}
			__LIB_7__::func_423(uParam1->f_109);
			return 0;
		}
		__LIB_2__::func_663(1);
		if (__LIB_7__::func_422())
		{
			__LIB_7__::func_635(iVar8);
			__LIB_2__::func_681(&(Global_1946250.f_4073), 6000, "Submarine INT exit", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
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
							__LIB_2__::func_677(uParam1, uParam1->f_176[iVar10]);
						}
						__LIB_2__::func_676(&Var6, &Var7, uParam1, iVar10);
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
	if (__LIB_2__::func_204(iParam1))
	{
		iVar0 = __LIB_25__::func_208(iParam1);
		Var1.f_1 = -1;
		Var1.f_2 = -1;
		Var1.f_3 = -1;
		Var1.f_4 = -1;
		Var1.f_8 = -1;
		Var1.f_9 = 50;
		Var1.f_0 = *uParam0;
		Var1.f_6 = 1;
		func_2818(&Var1, __LIB_2__::func_262(iVar0), 0, 1, 1, !__LIB_18__::func_523(), 0, __LIB_19__::func_138(), __LIB_2__::func_685(__LIB_6__::func_417(iParam1), 0), __LIB_2__::func_261(iVar0));
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(iParam1, 0), false);
		if (GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(iParam1, 0), __LIB_7__::func_306(iParam1, 2)))
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
					if (__LIB_36__::func_384(&Global_78200, *uParam0, bParam1))
					{
						bVar3 = true;
					}
				}
				if ((bParam1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
				{
					if (__LIB_7__::func_307(&Global_78200, *uParam0, bParam2, bParam4))
					{
						bVar3 = true;
					}
				}
				iVar4 = -1;
				if (uParam0->f_3 != -1)
				{
					if (__LIB_18__::func_485(*uParam0, &Global_78200, uParam0->f_3, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (uParam0->f_4 != -1)
				{
					if (__LIB_18__::func_485(*uParam0, &Global_78200, uParam0->f_4, &iVar4))
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
							if (!__LIB_2__::func_257(uParam0, &Global_78200))
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
								if (__LIB_1__::func_200(*uParam0))
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
										if (__LIB_2__::func_256(uParam0->f_2) == 22)
										{
											Global_78200.f_26[2] = -1;
										}
										else if ((((__LIB_2__::func_256(uParam0->f_2) == 8 || __LIB_2__::func_256(uParam0->f_2) == 50) || __LIB_2__::func_256(uParam0->f_2) == 47) || uParam0->f_2 == 286) || uParam0->f_2 == 287)
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
											if (__LIB_7__::func_241(iVar1, 7, __LIB_0__::func_350(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
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
												if (__LIB_7__::func_241(iVar1, 7, __LIB_0__::func_350(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
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
								__LIB_25__::func_113(*uParam0, &Global_78200, uParam0->f_8);
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
											iVar10 = __LIB_0__::func_350(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
											if (__LIB_7__::func_240(iVar1, 10, iVar10, -1))
											{
												if (iParam7 == 0)
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
												else if (iParam7 == 1)
												{
													if (*uParam0 == PLAYER::PLAYER_PED_ID() && !__LIB_6__::func_911())
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
													GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), false);
													GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), __LIB_7__::func_306(PLAYER::PLAYER_ID(), 2));
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
												iVar10 = __LIB_0__::func_350(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
												if (__LIB_7__::func_240(iVar1, 10, iVar10, -1))
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
										__LIB_6__::func_810(*uParam0, iVar0, Global_78200.f_26[iVar0], Global_78200.f_36[iVar0]);
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
									__LIB_18__::func_734(PLAYER::PLAYER_ID(), -1, -1);
								}
								if (!func_1828(*uParam0))
								{
									if (uParam0->f_2 >= 52 && uParam0->f_2 <= 59)
									{
										PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Global_78200.f_26[0], true);
										PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Global_78200.f_36[0]);
										__LIB_2__::func_255(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 1);
									}
									else
									{
										Var12 = { __LIB_35__::func_588(iVar1, 14, __LIB_1__::func_556(589, -1, 0), -1) };
										if (Var12.f_3 != -1 && Var12.f_4 != -1)
										{
											if (__LIB_0__::func_709(iVar1, 14, __LIB_1__::func_556(589, -1, 0), -1))
											{
												PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Var12.f_3, true);
												PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Var12.f_4);
												__LIB_2__::func_255(*uParam0, Var12.f_3, Var12.f_4, 1);
											}
										}
										PED::SET_PED_CONFIG_FLAG(*uParam0, 34, false);
										PED::SET_PED_CONFIG_FLAG(*uParam0, 36, false);
									}
								}
								else if (Global_78200.f_26[0] != -1 && Global_78200.f_26[0] != 255)
								{
									__LIB_2__::func_255(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 0);
								}
								if (!__LIB_0__::func_155(0))
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
										__LIB_1__::func_597(2065, 1, -1, 1, 0);
									}
									if ((((((((((((((((__LIB_0__::func_812(*uParam0, 7) && uParam0->f_1 != 1147) && uParam0->f_1 != 1148) && uParam0->f_1 != 1149) && uParam0->f_1 != 1150) && uParam0->f_1 != 1155) && uParam0->f_1 != 1156) && uParam0->f_1 != 1157) && uParam0->f_1 != 1158) && uParam0->f_1 != 1265) && uParam0->f_1 != 1266) && uParam0->f_1 != 1267) && uParam0->f_1 != 1268) && uParam0->f_1 != 1261) && uParam0->f_1 != 1262) && uParam0->f_1 != 1263) && uParam0->f_1 != 1264)
									{
										if (!bParam1 || uParam0->f_2 == -1)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
											PED::CLEAR_PED_PROP(*uParam0, 0);
										}
									}
									else if (__LIB_2__::func_254(*uParam0))
									{
										iVar13 = __LIB_2__::func_253(*uParam0, 1);
										iVar14 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar13, iVar14, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									else if (!__LIB_2__::func_254(*uParam0) && __LIB_2__::func_252(*uParam0))
									{
										iVar15 = __LIB_2__::func_253(*uParam0, 0);
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
									if (__LIB_2__::func_251(uParam0->f_1))
									{
										if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_20 == 0)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 0, 0, 0);
											__LIB_6__::func_810(*uParam0, 0, -1, 0);
											__LIB_6__::func_810(*uParam0, 1, -1, 0);
											__LIB_6__::func_810(*uParam0, 2, -1, 0);
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
											iVar18 = __LIB_1__::func_556(2153, -1, 0);
											iVar19 = __LIB_1__::func_556(2160, -1, 0);
											if (__LIB_1__::func_563(161, -1))
											{
												iVar21 = __LIB_1__::func_556(2053, -1, 0);
												if (iVar21 != -99)
												{
													iVar22 = -99;
													if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_M_Freemode_01"))
													{
														iVar22 = __LIB_18__::func_181(iVar21);
													}
													else if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
													{
														iVar22 = __LIB_18__::func_186(iVar21);
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
														iVar21 = __LIB_18__::func_181(iVar21);
													}
													else if (iVar1 == joaat("MP_F_Freemode_01"))
													{
														iVar21 = __LIB_18__::func_186(iVar21);
														if (iVar21 == __LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4) || iVar21 == __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4)))
														{
															iVar21 = __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4));
														}
														else if (iVar21 == __LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4) || iVar21 == __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4)))
														{
															iVar21 = __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4));
														}
													}
												}
												func_1394(*uParam0, 2, iVar21, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
											else
											{
												iVar23 = __LIB_1__::func_556(753, -1, 0);
												func_1394(*uParam0, 2, iVar23, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
										}
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 1), 0);
									}
								}
							}
							if (!__LIB_0__::func_155(0))
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
									if (__LIB_2__::func_250(iVar28, iParam8, &uVar26, &uVar27))
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
									iVar37 = __LIB_0__::func_250(*uParam0);
									iVar33 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar37);
									iVar31 = 0;
									while (iVar31 < 127)
									{
										if (__LIB_6__::func_785(&Var36, iVar31, iVar37, *uParam0, -1))
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
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), __LIB_7__::func_306(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var36.f_4, Var36.f_5);
														__LIB_0__::func_235(*uParam0, Var36.f_4, Var36.f_5);
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
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), __LIB_7__::func_306(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var35.f_2, Var35.f_3);
														__LIB_0__::func_235(*uParam0, Var35.f_2, Var35.f_3);
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
							__LIB_2__::func_249(*uParam0);
							uParam0->f_6 = 2;
							break;
						case 2:
							if (!__LIB_0__::func_155(0))
							{
								if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0) || !PED::HAS_PED_HEAD_BLEND_FINISHED(*uParam0))
								{
									return 0;
								}
								else
								{
									PED::FINALIZE_HEAD_BLEND(*uParam0);
									__LIB_2__::func_249(*uParam0);
									uParam0->f_7 = 1;
									uParam0->f_6 = 0;
									uParam0->f_5 = 0;
									return 1;
								}
							}
							else
							{
								__LIB_2__::func_249(*uParam0);
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
		iVar1 = __LIB_0__::func_250(iParam0);
		bVar2 = func_1474(iParam0, 0);
		bVar3 = __LIB_31__::func_887(iParam0);
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
				if (__LIB_6__::func_785(&Var0, iVar5, iVar1, iParam0, -1))
				{
					if (__LIB_25__::func_27(iParam0, &Var0, iVar5, Var0.f_4, Var0.f_8, bVar2, bVar3, bParam2, bVar4))
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
						if (__LIB_25__::func_27(iParam0, &(Var8.f_7), iVar9, Var8.f_2, Var8.f_6, bVar2, bVar3, bParam2, bVar4))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var8.f_2, Var8.f_3);
							__LIB_0__::func_235(iParam0, Var8.f_2, Var8.f_3);
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
	if (__LIB_18__::func_485(iParam0, &Var0, iParam1, &iVar1))
	{
		if ((iParam1 == 1 || iParam1 == 4) || iParam1 == 3)
		{
			func_2828(iParam0);
			__LIB_25__::func_113(iParam0, &Var0, iParam2);
		}
		if (iParam1 == 11)
		{
			if (iVar1 != -1)
			{
				if (__LIB_2__::func_256(iVar1) == 22)
				{
					Var0.f_26[2] = -1;
				}
				else if (__LIB_2__::func_256(iVar1) == 8)
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
					if (__LIB_7__::func_241(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_1508(iParam0, 7, -1), -1))
					{
						Var0[7] = 0;
						Var0.f_13[7] = 0;
					}
				}
			}
			__LIB_25__::func_113(iParam0, &Var0, iParam2);
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
		if (__LIB_25__::func_111(iParam0, iVar0, -1))
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
	if (__LIB_18__::func_485(iParam0, &Global_78200, iParam1, &iParam3))
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
			if (!__LIB_0__::func_155(0))
			{
				if (__LIB_1__::func_563(161, -1))
				{
					func_1394(iParam0, 2, __LIB_1__::func_556(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_1394(iParam0, 2, __LIB_1__::func_556(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					__LIB_25__::func_44(iParam0, -1);
				}
			}
			__LIB_0__::func_917(0);
			__LIB_18__::func_775(1, 2);
		}
	}
}

int func_2884(var uParam0, var uParam1)//Position - 0x103075
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_2__::func_399();
	iVar2 = 0;
	iVar3 = -1;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar2);
	}
	else
	{
		iVar1 = __LIB_2__::func_696();
	}
	__LIB_2__::func_695(&iVar1);
	switch (iVar0)
	{
		case 4:
			switch (iVar1)
			{
				case joaat("avisa"):
					iVar3 = 1;
					if (!__LIB_7__::func_636(uParam1, iVar3))
					{
						return 0;
					}
					break;
				default:
					iVar3 = 2;
					if (!__LIB_7__::func_636(uParam1, iVar3))
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
					if (!__LIB_7__::func_636(uParam1, iVar3))
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
			__LIB_2__::func_416(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
			__LIB_7__::func_423(uParam1->f_109);
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
		__LIB_2__::func_416(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
		VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
		__LIB_7__::func_423(uParam1->f_109);
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
			if (__LIB_2__::func_95())
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, __LIB_2__::func_671());
			}
			else
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, -1);
			}
		}
	}
	__LIB_7__::func_635(iVar3);
	__LIB_2__::func_681(&(Global_1946250.f_4073), 6000, "Submarine INT enter", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
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
	if (__LIB_3__::func_845())
	{
		return 1;
	}
	if (__LIB_32__::func_25())
	{
		return 1;
	}
	iVar0 = __LIB_2__::func_399();
	iVar1 = __LIB_6__::func_418();
	Var2 = { __LIB_18__::func_737(iParam0, iVar0) };
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
	{
		if (func_2813(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_2, __LIB_2__::func_702(iParam0, iVar0, iVar1), false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam1->f_2, __LIB_7__::func_930(iParam0, iVar0));
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
		__LIB_2__::func_416(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var2, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, __LIB_18__::func_736(iParam0, iVar0));
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
		iVar5 = __LIB_2__::func_701(iParam0, iVar0);
		__LIB_2__::func_681(&(Global_1946250.f_3638), iVar5, "Submarine enter", Var3, Var4, uParam1->f_3, uParam1->f_8, 1, 0, 0, 0, 2);
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
	if (__LIB_18__::func_911(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iVar7)) && !__LIB_1__::func_425(iVar7, 1)) && !__LIB_7__::func_291(iVar7)) && !__LIB_2__::func_509(iVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iVar7))) && !__LIB_1__::func_425(iVar7, 1)) && !__LIB_7__::func_291(iVar7)) && !__LIB_2__::func_509(iVar7, 14))
						{
							bVar1 = true;
						}
						if (!bVar1 && __LIB_2__::func_457(iVar7, PLAYER::PLAYER_ID()))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						__LIB_25__::func_388(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_388(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_933(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_2989(iParam0, 0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_933(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_2989(iParam0, 0);
					}
					Jump @652; //curOff = 633
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_2989(int iParam0, bool bParam1)//Position - 0x1089C6
{
	__LIB_25__::func_388(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
	if (bParam1)
	{
		__LIB_7__::func_394(2);
	}
}

void func_3051(var uParam0, int iParam1)//Position - 0x10AF74
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1114017/*func_3170*/;
			break;
		case 111:
			uParam0->f_35 = 1114008/*func_3169*/;
			break;
		case 1:
			uParam0->f_30 = 1113940/*func_3167*/;
			break;
		case 2:
			uParam0->f_31 = 1113614/*func_3164*/;
			break;
		case 3:
			uParam0->f_34 = 1113453/*func_3163*/;
			break;
		case 4:
			uParam0->f_12 = 1113440/*func_3162*/;
			break;
		case 6:
			uParam0->f_32 = 1113376/*func_3161*/;
			break;
		case 11:
			uParam0->f_11 = 1113367/*func_3160*/;
			break;
		case 12:
			uParam0->f_33 = 1113031/*func_3156*/;
			break;
		case 14:
			uParam0->f_11 = 1113022/*func_3155*/;
			break;
		case 109:
			uParam0->f_56 = 1112285/*func_3153*/;
			break;
		case 8:
			uParam0->f_37 = 1112277/*func_3152*/;
			break;
		case 7:
			uParam0->f_36 = 1112268/*func_3151*/;
			break;
		case 79:
			*uParam0 = 1112259/*func_3150*/;
			break;
		case 72:
			uParam0->f_12 = 1112246/*func_3149*/;
			break;
		case 13:
			uParam0->f_2 = 1112237/*func_3148*/;
			break;
		case 15:
			uParam0->f_2 = 1112158/*func_3147*/;
			break;
		case 16:
			uParam0->f_5 = 1111814/*func_3146*/;
			break;
		case 108:
			uParam0->f_55 = 1111805/*func_3145*/;
			break;
		case 17:
			uParam0->f_17 = 1111276/*func_3143*/;
			break;
		case 19:
			uParam0->f_17 = 1111221/*func_3142*/;
			break;
		case 18:
			uParam0->f_8 = 1111133/*func_3140*/;
			break;
		case 20:
			uParam0->f_3 = 1111113/*func_3139*/;
			break;
		case 21:
			uParam0->f_3 = 1111086/*func_3138*/;
			break;
		case 74:
			uParam0->f_53 = 1111064/*func_3137*/;
			break;
		case 75:
			uParam0->f_4 = 1111055/*func_3136*/;
			break;
		case 22:
			uParam0->f_24 = 1110948/*func_3135*/;
			break;
		case 23:
			uParam0->f_26 = 1110940/*func_3134*/;
			break;
		case 26:
			uParam0->f_38 = 1110932/*func_3133*/;
			break;
		case 25:
			uParam0->f_23 = 1110171/*func_3129*/;
			break;
		case 27:
			uParam0->f_25 = 1110163/*func_3128*/;
			break;
		case 28:
			uParam0->f_24 = 1110155/*func_3127*/;
			break;
		case 30:
			uParam0->f_8 = 1110044/*func_3126*/;
			break;
		case 31:
			uParam0->f_39 = 1109996/*func_3125*/;
			break;
		case 33:
			uParam0->f_40 = 1109927/*func_3124*/;
			break;
		case 76:
			uParam0->f_13 = 1109904/*func_3123*/;
			break;
		case 34:
			uParam0->f_41 = 1105831/*func_3120*/;
			break;
		case 36:
			uParam0->f_58 = 1105774/*func_3119*/;
			break;
		case 35:
			uParam0->f_42 = 1099556/*func_3110*/;
			break;
		case 45:
			uParam0->f_14 = 1099547/*func_3109*/;
			break;
		case 46:
			uParam0->f_14 = 1099538/*func_3108*/;
			break;
		case 110:
			uParam0->f_57 = 1099530/*func_3107*/;
			break;
		case 77:
			uParam0->f_13 = 1099519/*func_3106*/;
			break;
		case 47:
			uParam0->f_43 = 1099406/*func_3105*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1098402/*func_3099*/;
			break;
		case 49:
			uParam0->f_8 = 1098393/*func_3098*/;
			break;
		case 50:
			*uParam0 = 1098034/*func_3092*/;
			break;
		case 51:
			*uParam0 = 1098025/*func_3091*/;
			break;
		case 52:
			uParam0->f_15 = 1098015/*func_3090*/;
			break;
		case 53:
			uParam0->f_13 = 1097992/*func_3089*/;
			break;
		case 54:
			uParam0->f_45 = 1097495/*func_3087*/;
			break;
		case 56:
			uParam0->f_46 = 1097486/*func_3086*/;
			break;
		case 57:
			uParam0->f_11 = 1097477/*func_3085*/;
			break;
		case 58:
			uParam0->f_13 = 1097435/*func_3084*/;
			break;
		case 59:
			*uParam0 = 1097426/*func_3083*/;
			break;
		case 60:
			*uParam0 = 1097417/*func_3082*/;
			break;
		case 61:
			uParam0->f_15 = 1097406/*func_3081*/;
			break;
		case 62:
			uParam0->f_13 = 1097395/*func_3080*/;
			break;
		case 63:
			uParam0->f_11 = 1097386/*func_3079*/;
			break;
		case 64:
			uParam0->f_47 = 1097378/*func_3078*/;
			break;
		case 65:
			uParam0->f_21 = 1097370/*func_3077*/;
			break;
		case 66:
			uParam0->f_21 = 1097060/*func_3076*/;
			break;
		case 67:
			uParam0->f_21 = 1096990/*func_3075*/;
			break;
		case 68:
			*uParam0 = 1096301/*func_3074*/;
			break;
		case 69:
			*uParam0 = 1096292/*func_3073*/;
			break;
		case 70:
			uParam0->f_48 = 1096280/*func_3072*/;
			break;
		case 71:
			uParam0->f_49 = 1096271/*func_3071*/;
			break;
		case 107:
			uParam0->f_50 = 1096259/*func_3070*/;
			break;
		case 80:
			uParam0->f_7 = 1096250/*func_3069*/;
			break;
		case 84:
			uParam0->f_1 = 1096241/*func_3068*/;
			break;
		case 85:
			uParam0->f_1 = 1096232/*func_3067*/;
			break;
		case 87:
			uParam0->f_1 = 1096223/*func_3066*/;
			break;
		case 88:
			uParam0->f_1 = 1096214/*func_3065*/;
			break;
		case 89:
			uParam0->f_54 = 1096206/*func_3064*/;
			break;
		case 96:
			uParam0->f_1 = 1096181/*func_3063*/;
			break;
		case 97:
			uParam0->f_1 = 1096071/*func_3062*/;
			break;
		case 98:
			uParam0->f_1 = 1095354/*func_3061*/;
			break;
		case 100:
			uParam0->f_22 = 1095191/*func_3060*/;
			break;
		case 101:
			uParam0->f_22 = 1095063/*func_3059*/;
			break;
		case 112:
			uParam0->f_13 = 1095051/*func_3058*/;
			break;
		case 113:
			uParam0->f_3 = 1095042/*func_3057*/;
			break;
		case 114:
			uParam0->f_16 = 886763/*func_2252*/;
			break;
		case 115:
			uParam0->f_3 = 1095033/*func_3056*/;
			break;
		case 116:
			*uParam0 = 1095024/*func_3055*/;
			break;
		case 117:
			uParam0->f_16 = 940967/*func_2457*/;
			break;
		case 78:
			uParam0->f_59 = 1095016/*func_3054*/;
			break;
		case 124:
			uParam0->f_1 = 1095007/*func_3053*/;
			break;
		case 125:
			uParam0->f_19 = 1094999/*func_3052*/;
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
	__LIB_2__::func_681(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 262144, 0);
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
	if (__LIB_3__::func_856(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_2__::func_776(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_425(iVar7, 1) && !__LIB_7__::func_291(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(iVar7, 14)) && !func_2018(iVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_7__::func_291(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(iVar7, 14)) && !func_2018(iVar7))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_7__::func_937(iParam0, -1);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						__LIB_18__::func_917(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						__LIB_18__::func_917(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if ((!bVar1 && !bVar0) && !func_3130())
					{
						MISC::SET_BIT(&(iParam1->f_2), 5);
						MISC::SET_BIT(&(iParam1->f_2), 6);
					}
					Jump @651; //curOff = 632
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
bool func_3130()//Position - 0x10F329
{
	return BitTest(Global_1946250.f_3, 2);
}

char* func_3143(var uParam0, var uParam1, var uParam2)//Position - 0x10F4EC
{
	int iVar0;
	if (BitTest(Global_1946250.f_4523.f_1, 7))
	{
		return "CAS_CLUB_TMP" /* GXT: The Music Locker is currently full. Please come back later. */;
	}
	if (__LIB_7__::func_373())
	{
		return "SI_ENTR_BLCK23A" /* GXT: You cannot enter The Music Locker while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	if (__LIB_24__::func_897())
	{
		return "CAS_CLUB_KICK2" /* GXT: You are temporarily banned from entering The Music Locker due to being thrown out. */;
	}
	if (__LIB_1__::func_425(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = __LIB_3__::func_803(PLAYER::PLAYER_ID());
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_160())
		{
			switch (iVar0)
			{
				case 192:
					return "CAS_APT_BLCK_A" /* GXT: You can't enter The Diamond Casino & Resort while resupplying another business. */;
				case 190:
					return "CAS_APT_BLCK_B" /* GXT: You can't enter The Diamond Casino & Resort while selling goods from another business. */;
				case 167:
					return "CAS_APT_BLCK_C" /* GXT: You can't enter The Diamond Casino & Resort while acquiring goods for a Warehouse. */;
				case 168:
					return "CAS_APT_BLCK_D" /* GXT: You can't enter The Diamond Casino & Resort while selling goods from a Warehouse. */;
				case 178:
					return "CAS_APT_BLCK_E" /* GXT: You can't enter The Diamond Casino & Resort while acquiring a vehicle for a Warehouse. */;
				case 188:
					return "CAS_APT_BLCK_F" /* GXT: You can't enter The Diamond Casino & Resort while selling vehicles from a Warehouse. */;
				case 225:
					return "CAS_APT_BLCK_G" /* GXT: You can't enter The Diamond Casino & Resort while acquiring goods for a Bunker. */;
				case 226:
					return "CAS_APT_BLCK_H" /* GXT: You can't enter The Diamond Casino & Resort while selling goods from a Bunker. */;
				case 229:
					return "CAS_APT_BLCK_I" /* GXT: You can't enter The Diamond Casino & Resort while acquiring goods for a Hangar. */;
				case 230:
					return "CAS_APT_BLCK_J" /* GXT: You can't enter The Diamond Casino & Resort while selling goods from a Hangar. */;
				case 237:
					return "CAS_APT_BLCK_O" /* GXT: You can't enter The Diamond Casino & Resort while selling goods from a Nightclub. */;
				case 243:
					if (__LIB_3__::func_804(PLAYER::PLAYER_ID()))
					{
						return "";
					}
					break;
				}
			}
	}
	if (__LIB_2__::func_477())
	{
		return "CAS_APT_BLCK_K" /* GXT: You can't enter The Diamond Casino & Resort with a prostitute. */;
	}
	if (__LIB_2__::func_104())
	{
		return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
	}
	if (__LIB_2__::func_476(PLAYER::PLAYER_ID()))
	{
		return "CAS_APT_BLCK_L" /* GXT: You can't access The Diamond Casino & Resort as the Beast. */;
	}
	if (__LIB_2__::func_475() && !__LIB_2__::func_297(PLAYER::PLAYER_ID()))
	{
		if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
		}
	}
	if (__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()))
	{
		return "CAS_APT_BLCK_M" /* GXT: You can't access The Diamond Casino & Resort whilst wearing the Ballistic Equipment. */;
	}
	if (__LIB_0__::func_740(PLAYER::PLAYER_ID()) && __LIB_2__::func_297(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
			{
				return "CAS_APT_BLCK_N" /* GXT: You can't enter The Diamond Casino & Resort while taking part in a Business Battle. */;
			}
		}
		else
		{
			return "CAS_APT_BLCK_N" /* GXT: You can't enter The Diamond Casino & Resort while taking part in a Business Battle. */;
		}
	}
	return "";
}

int func_3146(int iParam0, int iParam1, var uParam2)//Position - 0x10F706
{
	int iVar0;
	if (iParam0 != __LIB_0__::func_160())
	{
		if (iParam1 != -1)
		{
			if (BitTest(Global_1946250.f_4523.f_1, 7))
			{
				return 0;
			}
			if (Global_1946250.f_3614)
			{
				return 0;
			}
			if (Global_1892703[iParam0 /*599*/].f_10.f_32 == 148)
			{
				return 0;
			}
			if (__LIB_4__::func_0(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_2__::func_499())
			{
				return 0;
			}
			if (__LIB_0__::func_77(0))
			{
				return 0;
			}
			if (__LIB_2__::func_477())
			{
				return 0;
			}
			if (__LIB_2__::func_476(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_8__::func_108(PLAYER::PLAYER_ID(), 1))
			{
				return 0;
			}
			if (__LIB_7__::func_291(iParam0) && !__LIB_1__::func_425(iParam0, 0))
			{
				return 0;
			}
			if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				return 0;
			}
			if (__LIB_1__::func_909())
			{
				return 0;
			}
			if (__LIB_1__::func_425(PLAYER::PLAYER_ID(), 0))
			{
				iVar0 = __LIB_3__::func_803(PLAYER::PLAYER_ID());
				switch (iVar0)
				{
					case 192:
					case 190:
					case 167:
					case 168:
					case 178:
					case 188:
					case 225:
					case 226:
					case 229:
					case 230:
					case 233:
					case 237:
						return 0;
					}
				default:
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return 0;
			}
			if (__LIB_24__::func_897())
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

void func_3171(var uParam0, int iParam1)//Position - 0x10FFAA
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1122409/*func_3264*/;
			break;
		case 111:
			uParam0->f_35 = 1122400/*func_3263*/;
			break;
		case 1:
			uParam0->f_30 = 1122328/*func_3261*/;
			break;
		case 2:
			uParam0->f_31 = 1122091/*func_3258*/;
			break;
		case 3:
			uParam0->f_34 = 1122040/*func_3257*/;
			break;
		case 4:
			uParam0->f_12 = 1122027/*func_3256*/;
			break;
		case 6:
			uParam0->f_32 = 1121963/*func_3255*/;
			break;
		case 11:
			uParam0->f_11 = 1121954/*func_3254*/;
			break;
		case 12:
			uParam0->f_33 = 1121514/*func_3250*/;
			break;
		case 14:
			uParam0->f_11 = 1121505/*func_3249*/;
			break;
		case 109:
			uParam0->f_56 = 1120830/*func_3247*/;
			break;
		case 8:
			uParam0->f_37 = 1120822/*func_3246*/;
			break;
		case 7:
			uParam0->f_36 = 1120813/*func_3245*/;
			break;
		case 79:
			*uParam0 = 1120804/*func_3244*/;
			break;
		case 13:
			uParam0->f_2 = 1120742/*func_3243*/;
			break;
		case 15:
			uParam0->f_2 = 1120662/*func_3242*/;
			break;
		case 16:
			uParam0->f_5 = 1120293/*func_3240*/;
			break;
		case 108:
			uParam0->f_55 = 1120284/*func_3239*/;
			break;
		case 17:
			uParam0->f_17 = 1120273/*func_3238*/;
			break;
		case 19:
			uParam0->f_17 = 1120262/*func_3237*/;
			break;
		case 20:
			uParam0->f_3 = 1120253/*func_3236*/;
			break;
		case 21:
			uParam0->f_3 = 1120244/*func_3235*/;
			break;
		case 74:
			uParam0->f_53 = 1120222/*func_3234*/;
			break;
		case 75:
			uParam0->f_4 = 1120213/*func_3233*/;
			break;
		case 22:
			uParam0->f_24 = 1120201/*func_3232*/;
			break;
		case 23:
			uParam0->f_26 = 1120193/*func_3231*/;
			break;
		case 26:
			uParam0->f_38 = 1120185/*func_3230*/;
			break;
		case 25:
			uParam0->f_23 = 1120177/*func_3229*/;
			break;
		case 27:
			uParam0->f_25 = 1120169/*func_3228*/;
			break;
		case 28:
			uParam0->f_24 = 1120161/*func_3227*/;
			break;
		case 30:
			uParam0->f_8 = 1120126/*func_3226*/;
			break;
		case 31:
			uParam0->f_39 = 1120098/*func_3225*/;
			break;
		case 33:
			uParam0->f_40 = 1120028/*func_3224*/;
			break;
		case 76:
			uParam0->f_13 = 1120005/*func_3223*/;
			break;
		case 34:
			uParam0->f_41 = 1119909/*func_3222*/;
			break;
		case 36:
			uParam0->f_58 = 1119864/*func_3221*/;
			break;
		case 35:
			uParam0->f_42 = 1117351/*func_3219*/;
			break;
		case 45:
			uParam0->f_14 = 1117342/*func_3218*/;
			break;
		case 46:
			uParam0->f_14 = 1117333/*func_3217*/;
			break;
		case 110:
			uParam0->f_57 = 1117325/*func_3216*/;
			break;
		case 77:
			uParam0->f_13 = 1117314/*func_3215*/;
			break;
		case 47:
			uParam0->f_43 = 1117272/*func_3214*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1117164/*func_3213*/;
			break;
		case 49:
			uParam0->f_8 = 1117155/*func_3212*/;
			break;
		case 50:
			*uParam0 = 1116952/*func_3211*/;
			break;
		case 51:
			*uParam0 = 1116943/*func_3210*/;
			break;
		case 52:
			uParam0->f_15 = 1116932/*func_3209*/;
			break;
		case 53:
			uParam0->f_13 = 1116909/*func_3208*/;
			break;
		case 54:
			uParam0->f_45 = 1116901/*func_3207*/;
			break;
		case 56:
			uParam0->f_46 = 1116892/*func_3206*/;
			break;
		case 57:
			uParam0->f_11 = 1116879/*func_3205*/;
			break;
		case 58:
			uParam0->f_13 = 1116837/*func_3204*/;
			break;
		case 59:
			*uParam0 = 1116828/*func_3203*/;
			break;
		case 60:
			*uParam0 = 1116819/*func_3202*/;
			break;
		case 61:
			uParam0->f_15 = 1116808/*func_3201*/;
			break;
		case 62:
			uParam0->f_13 = 1116797/*func_3200*/;
			break;
		case 63:
			uParam0->f_11 = 1116788/*func_3199*/;
			break;
		case 64:
			uParam0->f_47 = 1116780/*func_3198*/;
			break;
		case 65:
			uParam0->f_21 = 1116772/*func_3197*/;
			break;
		case 66:
			uParam0->f_21 = 1116539/*func_3196*/;
			break;
		case 67:
			uParam0->f_21 = 1116469/*func_3195*/;
			break;
		case 68:
			*uParam0 = 1115780/*func_3194*/;
			break;
		case 69:
			*uParam0 = 1115771/*func_3193*/;
			break;
		case 70:
			uParam0->f_48 = 1115759/*func_3192*/;
			break;
		case 71:
			uParam0->f_49 = 1115750/*func_3191*/;
			break;
		case 107:
			uParam0->f_50 = 1115738/*func_3190*/;
			break;
		case 80:
			uParam0->f_7 = 1115729/*func_3189*/;
			break;
		case 84:
			uParam0->f_1 = 1115720/*func_3188*/;
			break;
		case 85:
			uParam0->f_1 = 1115711/*func_3187*/;
			break;
		case 87:
			uParam0->f_1 = 1115702/*func_3186*/;
			break;
		case 88:
			uParam0->f_1 = 1115693/*func_3185*/;
			break;
		case 89:
			uParam0->f_54 = 1115685/*func_3184*/;
			break;
		case 96:
			uParam0->f_1 = 1115676/*func_3183*/;
			break;
		case 97:
			uParam0->f_1 = 1115667/*func_3182*/;
			break;
		case 98:
			uParam0->f_1 = 1115658/*func_3181*/;
			break;
		case 100:
			uParam0->f_22 = 1115650/*func_3180*/;
			break;
		case 101:
			uParam0->f_22 = 1115642/*func_3179*/;
			break;
		case 112:
			uParam0->f_13 = 1115630/*func_3178*/;
			break;
		case 113:
			uParam0->f_3 = 1115621/*func_3177*/;
			break;
		case 114:
			uParam0->f_16 = 886763/*func_2252*/;
			break;
		case 115:
			uParam0->f_3 = 1115612/*func_3176*/;
			break;
		case 116:
			*uParam0 = 1115603/*func_3175*/;
			break;
		case 117:
			uParam0->f_16 = 940967/*func_2457*/;
			break;
		case 78:
			uParam0->f_59 = 1115595/*func_3174*/;
			break;
		case 124:
			uParam0->f_1 = 1115586/*func_3173*/;
			break;
		case 125:
			uParam0->f_19 = 1115578/*func_3172*/;
			break;
	}
}

void func_3265(var uParam0, int iParam1)//Position - 0x112072
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1199365/*func_3478*/;
			break;
		case 111:
			uParam0->f_35 = 1199351/*func_3477*/;
			break;
		case 1:
			uParam0->f_30 = 1199195/*func_3475*/;
			break;
		case 2:
			uParam0->f_31 = 1198719/*func_3471*/;
			break;
		case 3:
			uParam0->f_34 = 1198520/*func_3470*/;
			break;
		case 4:
			uParam0->f_12 = 1198398/*func_3469*/;
			break;
		case 5:
			uParam0->f_11 = 1198388/*func_3468*/;
			break;
		case 37:
			uParam0->f_18 = 1198251/*func_3467*/;
			break;
		case 38:
			uParam0->f_9 = 1198207/*func_3466*/;
			break;
		case 42:
			uParam0->f_10 = 1198123/*func_3464*/;
			break;
		case 6:
			uParam0->f_32 = 1198029/*func_3463*/;
			break;
		case 11:
			uParam0->f_11 = 1198020/*func_3462*/;
			break;
		case 12:
			uParam0->f_33 = 1196842/*func_3458*/;
			break;
		case 14:
			uParam0->f_11 = 1196833/*func_3457*/;
			break;
		case 109:
			uParam0->f_56 = 1190257/*func_3455*/;
			break;
		case 8:
			uParam0->f_37 = 1189957/*func_3454*/;
			break;
		case 7:
			uParam0->f_36 = 1189900/*func_3453*/;
			break;
		case 79:
			*uParam0 = 1189656/*func_3451*/;
			break;
		case 13:
			uParam0->f_2 = 1189594/*func_3450*/;
			break;
		case 15:
			uParam0->f_2 = 1189514/*func_3449*/;
			break;
		case 16:
			uParam0->f_5 = 1188794/*func_3447*/;
			break;
		case 108:
			uParam0->f_55 = 1185602/*func_3435*/;
			break;
		case 17:
			uParam0->f_17 = 1183338/*func_3433*/;
			break;
		case 19:
			uParam0->f_17 = 1183312/*func_3432*/;
			break;
		case 20:
			uParam0->f_3 = 1183136/*func_3431*/;
			break;
		case 21:
			uParam0->f_3 = 1183072/*func_3430*/;
			break;
		case 74:
			uParam0->f_53 = 1182968/*func_3429*/;
			break;
		case 75:
			uParam0->f_4 = 1182952/*func_3428*/;
			break;
		case 22:
			uParam0->f_24 = 1182845/*func_3427*/;
			break;
		case 23:
			uParam0->f_26 = 1182798/*func_3426*/;
			break;
		case 24:
			uParam0->f_26 = 1182761/*func_3425*/;
			break;
		case 26:
			uParam0->f_38 = 1180716/*func_3413*/;
			break;
		case 25:
			uParam0->f_23 = 1180394/*func_3411*/;
			break;
		case 30:
			uParam0->f_8 = 1179536/*func_3409*/;
			break;
		case 31:
			uParam0->f_39 = 1179402/*func_3408*/;
			break;
		case 33:
			uParam0->f_40 = 1178830/*func_3407*/;
			break;
		case 32:
			*uParam0 = 1178616/*func_3403*/;
			break;
		case 34:
			uParam0->f_41 = 1176130/*func_3401*/;
			break;
		case 36:
			uParam0->f_58 = 1176073/*func_3400*/;
			break;
		case 35:
			uParam0->f_42 = 1149108/*func_3397*/;
			break;
		case 45:
			uParam0->f_14 = 1149099/*func_3396*/;
			break;
		case 46:
			uParam0->f_14 = 1149090/*func_3395*/;
			break;
		case 110:
			uParam0->f_57 = 1149082/*func_3394*/;
			break;
		case 77:
			uParam0->f_13 = 1149059/*func_3393*/;
			break;
		case 47:
			uParam0->f_43 = 1148987/*func_3391*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1148859/*func_3390*/;
			break;
		case 49:
			uParam0->f_8 = 1148833/*func_3389*/;
			break;
		case 50:
			*uParam0 = 1148146/*func_3385*/;
			break;
		case 51:
			*uParam0 = 1147984/*func_3384*/;
			break;
		case 52:
			uParam0->f_15 = 1147973/*func_3383*/;
			break;
		case 53:
			uParam0->f_13 = 1147811/*func_3382*/;
			break;
		case 54:
			uParam0->f_45 = 1147354/*func_3377*/;
			break;
		case 56:
			uParam0->f_46 = 1147336/*func_3376*/;
			break;
		case 57:
			uParam0->f_11 = 1147084/*func_3375*/;
			break;
		case 58:
			uParam0->f_13 = 1146922/*func_3374*/;
			break;
		case 59:
			*uParam0 = 1146424/*func_3367*/;
			break;
		case 60:
			*uParam0 = 1146409/*func_3366*/;
			break;
		case 61:
			uParam0->f_15 = 1146398/*func_3365*/;
			break;
		case 62:
			uParam0->f_13 = 1146236/*func_3364*/;
			break;
		case 55:
			uParam0->f_45 = 1146057/*func_3363*/;
			break;
		case 63:
			uParam0->f_11 = 1146030/*func_3362*/;
			break;
		case 64:
			uParam0->f_47 = 1144597/*func_3355*/;
			break;
		case 65:
			uParam0->f_21 = 1143210/*func_3352*/;
			break;
		case 66:
			uParam0->f_21 = 1142851/*func_3351*/;
			break;
		case 67:
			uParam0->f_21 = 1142737/*func_3350*/;
			break;
		case 68:
			*uParam0 = 1141777/*func_3347*/;
			break;
		case 69:
			*uParam0 = 1141768/*func_3346*/;
			break;
		case 70:
			uParam0->f_48 = 1141756/*func_3345*/;
			break;
		case 71:
			uParam0->f_49 = 1141212/*func_3344*/;
			break;
		case 107:
			uParam0->f_50 = 1141200/*func_3343*/;
			break;
		case 80:
			uParam0->f_7 = 1141012/*func_3342*/;
			break;
		case 84:
			uParam0->f_1 = 1141003/*func_3341*/;
			break;
		case 85:
			uParam0->f_1 = 1139417/*func_3338*/;
			break;
		case 87:
			uParam0->f_1 = 1137899/*func_3331*/;
			break;
		case 88:
			uParam0->f_1 = 1137890/*func_3330*/;
			break;
		case 89:
			uParam0->f_54 = 1137882/*func_3329*/;
			break;
		case 96:
			uParam0->f_1 = 1137852/*func_3328*/;
			break;
		case 97:
			uParam0->f_1 = 1137407/*func_3327*/;
			break;
		case 98:
			uParam0->f_1 = 1132918/*func_3293*/;
			break;
		case 100:
			uParam0->f_22 = 1125025/*func_3278*/;
			break;
		case 101:
			uParam0->f_22 = 1124141/*func_3273*/;
			break;
		case 112:
			uParam0->f_13 = 1124130/*func_3272*/;
			break;
		case 113:
			uParam0->f_3 = 1124121/*func_3271*/;
			break;
		case 114:
			uParam0->f_16 = 1124112/*func_3270*/;
			break;
		case 117:
			uParam0->f_16 = 1124103/*func_3269*/;
			break;
		case 78:
			uParam0->f_59 = 1123931/*func_3267*/;
			break;
		case 76:
			uParam0->f_13 = 1123908/*func_3266*/;
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
			__LIB_2__::func_416(&(uParam1->f_109));
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
		__LIB_2__::func_842(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_2__::func_842(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_2__::func_841(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_2__::func_841(iParam0, &Var6, &Var8, &uVar12, 0);
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
		__LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
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
	if (!__LIB_2__::func_851(PLAYER::PLAYER_ID(), __LIB_2__::func_852(iParam0)) && !__LIB_2__::func_851(__LIB_0__::func_582(), __LIB_2__::func_852(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_264(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_2__::func_851(iVar1, __LIB_2__::func_852(iParam0)) && __LIB_18__::func_913(iVar1))
				{
					Var3 = { __LIB_1__::func_267(iVar1) };
					if (__LIB_0__::func_585(Var3))
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
						if (HUD::DOES_BLIP_EXIST(*uParam1) && __LIB_18__::func_676(iParam0))
						{
							if (!HUD::DOES_BLIP_EXIST(*iParam2))
							{
								Var5 = { __LIB_2__::func_856(iParam0) };
								iVar6 = __LIB_2__::func_855(iParam0);
								*iParam2 = __LIB_0__::func_392(Var5, 0);
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
		iVar0 = __LIB_1__::func_48(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_3385(int iParam0)//Position - 0x1184F2
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	if (__LIB_8__::func_108(PLAYER::PLAYER_ID(), 1))
	{
		return 0;
	}
	if (__LIB_2__::func_431() == iParam0)
	{
		return 0;
	}
	if (__LIB_4__::func_973(0))
	{
		if (__LIB_2__::func_851(__LIB_0__::func_582(), __LIB_2__::func_852(iParam0)))
		{
			return 1;
		}
	}
	if (__LIB_2__::func_851(PLAYER::PLAYER_ID(), __LIB_2__::func_852(iParam0)))
	{
		if (!BitTest(Global_1836751.f_2, 5))
		{
			return 1;
		}
	}
	if (!__LIB_2__::func_851(PLAYER::PLAYER_ID(), __LIB_2__::func_852(iParam0)))
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (__LIB_1__::func_264(iVar0, 1, 1) && iVar0 != PLAYER::PLAYER_ID())
			{
				if ((__LIB_2__::func_851(iVar0, __LIB_2__::func_852(iParam0)) && __LIB_18__::func_913(iVar0)) && func_3386(iVar0))
				{
					if (BitTest(Global_1836751.f_2, 8))
					{
						Var2 = { __LIB_1__::func_267(iVar0) };
						if (__LIB_0__::func_585(Var2))
						{
							if (NETWORK::NETWORK_IS_FRIEND(&Var2))
							{
								return 1;
							}
						}
					}
					else
					{
						return 1;
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_3386(int iParam0)//Position - 0x1185F6
{
	int iVar0;
	int iVar1;
	struct<35> Var2;
	struct<13> Var3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return __LIB_2__::func_860(iParam0);
	}
	iVar0 = __LIB_29__::func_30(iParam0);
	switch (iVar0)
	{
		case 0:
			return 1;
			break;
		case 1:
			iVar1 = __LIB_3__::func_808();
			Var2 = { __LIB_7__::func_298(iParam0) };
			if (iVar1 == Var2.f_0 && Var2.f_0 != 0)
			{
				return 1;
			}
			break;
		case 2:
			Var3 = { __LIB_1__::func_267(iParam0) };
			return NETWORK::NETWORK_IS_FRIEND(&Var3);
			break;
		case 3:
			iVar1 = __LIB_3__::func_808();
			Var2 = { __LIB_7__::func_298(iParam0) };
			Var3 = { __LIB_1__::func_267(iParam0) };
			if ((iVar1 == Var2.f_0 && Var2.f_0 != 0) || NETWORK::NETWORK_IS_FRIEND(&Var3))
			{
				return 1;
			}
			break;
		case 4:
			if (__LIB_4__::func_973(1))
			{
				return __LIB_2__::func_457(iParam0, PLAYER::PLAYER_ID());
			}
			break;
		case 5:
			Var3 = { __LIB_1__::func_267(iParam0) };
			iVar1 = __LIB_3__::func_808();
			Var2 = { __LIB_7__::func_298(iParam0) };
			bVar5 = NETWORK::NETWORK_IS_FRIEND(&Var3);
			bVar6 = (iVar1 == Var2.f_0 && Var2.f_0 != 0);
			if (__LIB_4__::func_973(1))
			{
				bVar4 = __LIB_2__::func_457(iParam0, PLAYER::PLAYER_ID());
			}
			if ((bVar4 || bVar5) || bVar6)
			{
				return 1;
			}
			break;
		case 6:
			return 0;
			break;
	}
	return 0;
}

void func_3411(int iParam0, int iParam1)//Position - 0x1202EA
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_848(iParam0, 0) };
	if (__LIB_7__::func_461(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2017(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_939(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_939(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_914(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_914(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_3413(var uParam0, var uParam1)//Position - 0x12042C
{
	if (__LIB_2__::func_399() == 3)
	{
		func_3417(uParam0, uParam1);
	}
	else if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0) && __LIB_2__::func_851(__LIB_2__::func_191(PLAYER::PLAYER_ID()), __LIB_2__::func_852(*uParam0)))
	{
		__LIB_3__::func_862(uParam0, uParam1);
	}
	else if (__LIB_2__::func_399() == 2)
	{
		func_3415(uParam0, uParam1);
	}
	else
	{
		__LIB_2__::func_868(uParam1);
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
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		uParam1->f_4 = 1;
		__LIB_7__::func_396();
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
			__LIB_7__::func_939(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_3417(var uParam0, var uParam1)//Position - 0x1205D3
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			func_3424(uParam0, uParam1);
			break;
		case 1:
			func_3422(uParam0, uParam1);
			break;
		case 2:
			func_3418(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3418(var uParam0, var uParam1)//Position - 0x12061E
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4[32];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	struct<8> Var13;
	int iVar14;
	int iVar15;
	iVar5 = __LIB_2__::func_852(*uParam0);
	iVar6 = 0;
	while (iVar6 < 32)
	{
		iVar8 = iVar6;
		if (!func_3421(iVar8, iVar5))
		{
			if (Global_1946250.f_4554[iVar6] != 0)
			{
				Global_1946250.f_4554[iVar6] = 0;
				iVar0 = 1;
			}
		}
		else
		{
			iVar7 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar8);
			bVar3 = true;
			if (Global_1946250.f_4554[iVar6] != iVar7)
			{
				Global_1946250.f_4554[iVar6] = iVar7;
				iVar0 = 1;
			}
			iVar4[iVar6] = 1;
			if (iVar4[iVar6] != __LIB_7__::func_305(iVar1))
			{
				iVar0 = 1;
			}
			if (iVar1 == uParam0->f_4)
			{
				iVar2 = iVar8;
			}
			iVar1++;
		}
		iVar6++;
	}
	if (!bVar3)
	{
		if (__LIB_1__::func_218(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408) != *uParam0)
		{
			uParam1->f_4 = 1;
		}
		else
		{
			__LIB_7__::func_396();
			*uParam1 = 1;
			return;
		}
	}
	if (iVar0 || uParam0->f_5)
	{
		__LIB_1__::func_193(0, 0);
		__LIB_3__::func_863();
		iVar9 = LOCALIZATION::GET_CURRENT_LANGUAGE();
		bVar10 = (((iVar9 != 12 && iVar9 != 9) && iVar9 != 8) && iVar9 != 10);
		iVar6 = 0;
		while (iVar6 < 32)
		{
			iVar12 = iVar6;
			if (!func_3421(iVar12, iVar5))
			{
			}
			else
			{
				__LIB_25__::func_557(iVar11, "ARC_OWNER_X" /* GXT: ~a~'s Arcade */, 1, iVar4[iVar6], 0, 0, 0);
				StringCopy(&Var13, PLAYER::GET_PLAYER_NAME(iVar12), 64);
				if (bVar10)
				{
					__LIB_19__::func_275(&Var13, 0, 0, 1);
				}
				else
				{
					__LIB_25__::func_568(&Var13, 0, 0, 0);
				}
				iVar11++;
			}
			iVar6++;
		}
		iVar14 = __LIB_0__::func_138(uParam0->f_5, 0, uParam0->f_4);
		__LIB_8__::func_86(iVar14, 1, 1);
	}
	else
	{
		iVar15 = iVar2;
		if (iVar15 > -1 && !iVar4[iVar15])
		{
			__LIB_1__::func_342("CLUB_KICK_L_D" /* GXT: You have been temporarily banned from entering this Nightclub. */, 0, 0);
		}
		if ((uParam0->f_2 && iVar15 > -1) && iVar4[iVar15])
		{
			__LIB_18__::func_915(iVar2);
			uParam1->f_6 = 1;
			uParam1->f_1 = 1;
			uParam1->f_11 = 10;
			uParam1->f_7 = 0;
			__LIB_7__::func_396();
		}
		else if (uParam0->f_3)
		{
			__LIB_7__::func_396();
			if (__LIB_1__::func_218(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408) != *uParam0)
			{
				uParam1->f_4 = 1;
			}
			*uParam1 = 1;
		}
	}
}

int func_3421(int iParam0, int iParam1)//Position - 0x1208F1
{
	if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam0 != PLAYER::PLAYER_ID()) && Global_1853348[iParam0 /*834*/].f_267.f_408 == iParam1)
	{
		if (func_3386(iParam0))
		{
			if (__LIB_18__::func_913(iParam0) || (__LIB_4__::func_973(0) && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
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
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_7__::func_396();
		if (func_3423(*uParam0))
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
			if (__LIB_2__::func_399() == 3)
			{
				__LIB_1__::func_319("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_319("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_7__::func_939(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

int func_3423(int iParam0)//Position - 0x120A46
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_2__::func_852(iParam0);
	if (Global_1946250.f_4733.f_36[iVar0 /*2*/].f_1 == MISC::GET_FRAME_COUNT())
	{
		return Global_1946250.f_4733.f_36[iVar0 /*2*/];
	}
	else
	{
		Global_1946250.f_4733.f_36[iVar0 /*2*/].f_1 = MISC::GET_FRAME_COUNT();
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (func_3421(iVar1, iVar0))
		{
			Global_1946250.f_4733.f_36[iVar0 /*2*/] = 1;
			return 1;
		}
		iVar1++;
	}
	Global_1946250.f_4733.f_36[iVar0 /*2*/] = 0;
	return 0;
}

void func_3424(var uParam0, var uParam1)//Position - 0x120AD1
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bVar0 = func_3423(*uParam0);
	bVar1 = (uParam0->f_5 || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[0 /*6*/]), "ARC_ENT_OWNED" /* GXT: Enter your Arcade */));
	bVar2 = MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[1 /*6*/]), "ARC_ENT_RIVAL" /* GXT: Enter another Arcade */);
	if (bVar0 && !bVar2)
	{
		bVar1 = true;
	}
	else if (!bVar0 && bVar2)
	{
		bVar1 = true;
	}
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408 == 0 || __LIB_1__::func_218(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408) != *uParam0)
	{
		if (bVar0)
		{
			__LIB_2__::func_565(2);
			*uParam1 = 1;
			uParam1->f_9 = 1;
			return;
		}
	}
	if (!bVar0)
	{
		if (__LIB_5__::func_710(PLAYER::PLAYER_ID()) == *uParam0)
		{
			__LIB_2__::func_565(1);
			*uParam1 = 1;
			uParam1->f_9 = 1;
			return;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	if (bVar1)
	{
		__LIB_1__::func_193(0, 0);
		__LIB_3__::func_863();
		__LIB_25__::func_557(0, "ARC_ENT_OWNED" /* GXT: Enter your Arcade */, 0, 1, 0, 0, 0);
		if (bVar0)
		{
			__LIB_25__::func_557(1, "ARC_ENT_RIVAL" /* GXT: Enter another Arcade */, 0, 1, 0, 0, 0);
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		switch (uParam0->f_4)
		{
			case 0:
				__LIB_2__::func_565(1);
				break;
			case 1:
				__LIB_2__::func_565(2);
				break;
		}
		*uParam1 = 1;
	}
	else if (uParam0->f_3)
	{
		uParam1->f_4 = 1;
	}
}

int func_3447(int iParam0, int iParam1, int iParam2)//Position - 0x1223BA
{
	int iVar0;
	bool bVar1;
	if (iParam0 != __LIB_0__::func_160())
	{
		if (iParam1 != -1)
		{
			if (Global_1946250.f_3614)
			{
				return 0;
			}
			if (Global_1892703[iParam0 /*599*/].f_10.f_32 == 148)
			{
				return 0;
			}
			if (__LIB_4__::func_0(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_2__::func_499())
			{
				return 0;
			}
			if (__LIB_0__::func_77(0))
			{
				return 0;
			}
			if (__LIB_2__::func_477())
			{
				return 0;
			}
			if (__LIB_2__::func_476(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_8__::func_108(PLAYER::PLAYER_ID(), 1))
			{
				return 0;
			}
			if (__LIB_7__::func_291(iParam0) && !__LIB_1__::func_425(iParam0, 0))
			{
				return 0;
			}
			if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				return 0;
			}
			if (__LIB_1__::func_909())
			{
				return 0;
			}
			if (__LIB_1__::func_425(PLAYER::PLAYER_ID(), 0))
			{
				iVar0 = __LIB_3__::func_803(PLAYER::PLAYER_ID());
				switch (iVar0)
				{
					case 192:
					case 190:
					case 167:
					case 168:
					case 178:
					case 188:
					case 225:
					case 226:
					case 229:
					case 230:
					case 233:
					case 237:
						return 0;
					}
				default:
			}
			bVar1 = false;
			if (__LIB_4__::func_682(iParam0, 0) && __LIB_2__::func_851(__LIB_2__::func_191(iParam0), __LIB_2__::func_852(iParam1)))
			{
				bVar1 = true;
			}
			if (iParam2 == 1 || iParam2 == 2)
			{
				if (__LIB_2__::func_851(PLAYER::PLAYER_ID(), __LIB_2__::func_852(iParam1)))
				{
					if (!__LIB_18__::func_913(PLAYER::PLAYER_ID()))
					{
						if (!bVar1 || !__LIB_18__::func_913(__LIB_2__::func_191(iParam0)))
						{
							return 0;
						}
					}
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				if (__LIB_19__::func_47(iParam1, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (bVar1)
			{
				if (iParam2 == 1 || iParam2 == 2)
				{
					return __LIB_18__::func_913(__LIB_2__::func_191(iParam0));
				}
				return 1;
			}
			if (__LIB_5__::func_710(iParam0) == iParam1)
			{
				return 1;
			}
			if (func_3423(iParam1) && iParam2 == 3)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_3458(int iParam0, int iParam1, var uParam2)//Position - 0x12432A
{
	switch (iParam1)
	{
		case 0:
		case 2:
			if (!BitTest(uParam2->f_3, 15) && func_3461(iParam0, iParam1))
			{
				MISC::CLEAR_BIT(&(uParam2->f_3), 4);
				MISC::SET_BIT(&(uParam2->f_3), 1);
				uParam2->f_7 = { 1f, 1f, 0.1f };
				uParam2->f_4 = { 1f, 1f, 1f };
			}
			else
			{
				__LIB_3__::func_864(iParam0, &(uParam2->f_4), &(uParam2->f_7), &(uParam2->f_10), &(uParam2->f_13), &(uParam2->f_14), iParam1);
				__LIB_2__::func_508(iParam0, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
				MISC::SET_BIT(&(uParam2->f_3), 1);
				MISC::SET_BIT(&(uParam2->f_3), 0);
				MISC::CLEAR_BIT(&(uParam2->f_3), 6);
				MISC::CLEAR_BIT(&(uParam2->f_3), 4);
			}
			break;
		case 3:
			if (func_3461(iParam0, iParam1) && !BitTest(uParam2->f_3, 15))
			{
				MISC::CLEAR_BIT(&(uParam2->f_3), 4);
				MISC::SET_BIT(&(uParam2->f_3), 1);
				uParam2->f_7 = { 1f, 1f, 0.1f };
				uParam2->f_4 = { 1f, 1f, 1f };
			}
			else
			{
				__LIB_3__::func_864(iParam0, &(uParam2->f_4), &(uParam2->f_7), &(uParam2->f_10), &(uParam2->f_13), &(uParam2->f_14), iParam1);
				MISC::SET_BIT(&(uParam2->f_3), 4);
				MISC::SET_BIT(&(uParam2->f_3), 1);
				MISC::SET_BIT(&(uParam2->f_3), 16);
				MISC::SET_BIT(&(uParam2->f_3), 0);
				__LIB_2__::func_508(iParam0, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
			}
			break;
		case 1:
			if (func_3461(iParam0, iParam1) && !BitTest(uParam2->f_3, 15))
			{
				MISC::CLEAR_BIT(&(uParam2->f_3), 4);
				MISC::SET_BIT(&(uParam2->f_3), 2);
				uParam2->f_7 = { 1f, 1f, 0.1f };
				uParam2->f_4 = { 1f, 1f, 1f };
			}
			else
			{
				__LIB_3__::func_865(iParam0, &(uParam2->f_4), &(uParam2->f_7), &(uParam2->f_10), &(uParam2->f_13), &(uParam2->f_14), iParam1);
				uParam2->f_2 = 1;
				MISC::SET_BIT(&(uParam2->f_3), 6);
				MISC::SET_BIT(&(uParam2->f_3), 0);
				MISC::SET_BIT(&(uParam2->f_3), 2);
				MISC::SET_BIT(&(uParam2->f_3), 4);
				__LIB_2__::func_508(iParam0, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
			}
			break;
	}
}

int func_3461(int iParam0, int iParam1)//Position - 0x12472F
{
	switch (iParam1)
	{
		case 1:
		case 2:
			if (!Global_262145.f_24391 /* Tunable: 1595462041 */)
			{
				return 0;
			}
			break;
		case 0:
			if (__LIB_2__::func_851(PLAYER::PLAYER_ID(), __LIB_2__::func_852(iParam0)))
			{
				return 0;
			}
			if (__LIB_4__::func_973(0) && __LIB_2__::func_851(__LIB_0__::func_582(), __LIB_2__::func_852(iParam0)))
			{
				return 0;
			}
			break;
		case 3:
			if (func_3423(iParam0) || __LIB_2__::func_851(PLAYER::PLAYER_ID(), __LIB_2__::func_852(iParam0)))
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_3479(var uParam0, int iParam1)//Position - 0x124D0E
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1215594/*func_3588*/;
			break;
		case 111:
			uParam0->f_35 = 1215585/*func_3587*/;
			break;
		case 1:
			uParam0->f_30 = 1215517/*func_3585*/;
			break;
		case 2:
			uParam0->f_31 = 1215071/*func_3582*/;
			break;
		case 3:
			uParam0->f_34 = 1214966/*func_3581*/;
			break;
		case 4:
			uParam0->f_12 = 1214953/*func_3580*/;
			break;
		case 6:
			uParam0->f_32 = 1214889/*func_3579*/;
			break;
		case 11:
			uParam0->f_11 = 1214880/*func_3578*/;
			break;
		case 12:
			uParam0->f_33 = 1214419/*func_3573*/;
			break;
		case 14:
			uParam0->f_11 = 1214410/*func_3572*/;
			break;
		case 109:
			uParam0->f_56 = 1214017/*func_3570*/;
			break;
		case 8:
			uParam0->f_37 = 1214009/*func_3569*/;
			break;
		case 7:
			uParam0->f_36 = 1214000/*func_3568*/;
			break;
		case 79:
			*uParam0 = 1213976/*func_3567*/;
			break;
		case 13:
			uParam0->f_2 = 1213914/*func_3566*/;
			break;
		case 15:
			uParam0->f_2 = 1213835/*func_3565*/;
			break;
		case 16:
			uParam0->f_5 = 1213538/*func_3564*/;
			break;
		case 108:
			uParam0->f_55 = 1213529/*func_3563*/;
			break;
		case 17:
			uParam0->f_17 = 1213518/*func_3562*/;
			break;
		case 19:
			uParam0->f_17 = 1213492/*func_3561*/;
			break;
		case 20:
			uParam0->f_3 = 1213483/*func_3560*/;
			break;
		case 21:
			uParam0->f_3 = 1213474/*func_3559*/;
			break;
		case 74:
			uParam0->f_53 = 1213452/*func_3558*/;
			break;
		case 75:
			uParam0->f_4 = 1213443/*func_3557*/;
			break;
		case 22:
			uParam0->f_24 = 1213435/*func_3556*/;
			break;
		case 23:
			uParam0->f_26 = 1213427/*func_3555*/;
			break;
		case 26:
			uParam0->f_38 = 1213419/*func_3554*/;
			break;
		case 25:
			uParam0->f_23 = 1213087/*func_3551*/;
			break;
		case 27:
			uParam0->f_25 = 1213079/*func_3550*/;
			break;
		case 28:
			uParam0->f_24 = 1213071/*func_3549*/;
			break;
		case 30:
			uParam0->f_8 = 1212750/*func_3546*/;
			break;
		case 31:
			uParam0->f_39 = 1212722/*func_3545*/;
			break;
		case 33:
			uParam0->f_40 = 1212653/*func_3544*/;
			break;
		case 34:
			uParam0->f_41 = 1208918/*func_3543*/;
			break;
		case 36:
			uParam0->f_58 = 1208873/*func_3542*/;
			break;
		case 35:
			uParam0->f_42 = 1205706/*func_3539*/;
			break;
		case 45:
			uParam0->f_14 = 1205697/*func_3538*/;
			break;
		case 46:
			uParam0->f_14 = 1205688/*func_3537*/;
			break;
		case 110:
			uParam0->f_57 = 1205680/*func_3536*/;
			break;
		case 77:
			uParam0->f_13 = 1205669/*func_3535*/;
			break;
		case 47:
			uParam0->f_43 = 1205556/*func_3534*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1204433/*func_3531*/;
			break;
		case 49:
			uParam0->f_8 = 1204424/*func_3530*/;
			break;
		case 50:
			*uParam0 = 1204415/*func_3529*/;
			break;
		case 51:
			*uParam0 = 1204406/*func_3528*/;
			break;
		case 52:
			uParam0->f_15 = 1204395/*func_3527*/;
			break;
		case 53:
			uParam0->f_13 = 1204384/*func_3526*/;
			break;
		case 54:
			uParam0->f_45 = 1204376/*func_3525*/;
			break;
		case 56:
			uParam0->f_46 = 1204367/*func_3524*/;
			break;
		case 57:
			uParam0->f_11 = 1204358/*func_3523*/;
			break;
		case 58:
			uParam0->f_13 = 1204316/*func_3522*/;
			break;
		case 59:
			*uParam0 = 1204307/*func_3521*/;
			break;
		case 60:
			*uParam0 = 1204298/*func_3520*/;
			break;
		case 61:
			uParam0->f_15 = 1204287/*func_3519*/;
			break;
		case 62:
			uParam0->f_13 = 1204276/*func_3518*/;
			break;
		case 63:
			uParam0->f_11 = 1204267/*func_3517*/;
			break;
		case 64:
			uParam0->f_47 = 1204259/*func_3516*/;
			break;
		case 65:
			uParam0->f_21 = 1204251/*func_3515*/;
			break;
		case 66:
			uParam0->f_21 = 1203948/*func_3514*/;
			break;
		case 67:
			uParam0->f_21 = 1203878/*func_3513*/;
			break;
		case 68:
			*uParam0 = 1203229/*func_3512*/;
			break;
		case 69:
			*uParam0 = 1203220/*func_3511*/;
			break;
		case 70:
			uParam0->f_48 = 1203212/*func_3510*/;
			break;
		case 71:
			uParam0->f_49 = 1203203/*func_3509*/;
			break;
		case 107:
			uParam0->f_50 = 1203191/*func_3508*/;
			break;
		case 80:
			uParam0->f_7 = 1202757/*func_3507*/;
			break;
		case 18:
			uParam0->f_8 = 1202732/*func_3506*/;
			break;
		case 84:
			uParam0->f_1 = 1202715/*func_3505*/;
			break;
		case 85:
			uParam0->f_1 = 1202173/*func_3501*/;
			break;
		case 87:
			uParam0->f_1 = 1201130/*func_3492*/;
			break;
		case 88:
			uParam0->f_1 = 1201121/*func_3491*/;
			break;
		case 89:
			uParam0->f_54 = 1201113/*func_3490*/;
			break;
		case 96:
			uParam0->f_1 = 1201104/*func_3489*/;
			break;
		case 97:
			uParam0->f_1 = 1201095/*func_3488*/;
			break;
		case 98:
			uParam0->f_1 = 1201086/*func_3487*/;
			break;
		case 100:
			uParam0->f_22 = 1201078/*func_3486*/;
			break;
		case 101:
			uParam0->f_22 = 1201070/*func_3485*/;
			break;
		case 112:
			uParam0->f_13 = 1201058/*func_3484*/;
			break;
		case 113:
			uParam0->f_3 = 1201049/*func_3483*/;
			break;
		case 78:
			uParam0->f_59 = 1200746/*func_3480*/;
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
			__LIB_2__::func_416(&(uParam0->f_109));
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
		__LIB_2__::func_890(&Var1, &Var3, &uVar9, 1);
		__LIB_2__::func_890(&Var2, &Var4, &uVar10, 0);
		__LIB_2__::func_889(&Var5, &Var7, &uVar11, 1);
		__LIB_2__::func_889(&Var6, &Var8, &uVar12, 0);
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
		__LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_3531(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0x1260D1
{
	__LIB_3__::func_805(iParam3, 1, 0);
	if (__LIB_2__::func_379())
	{
		if (iParam1 == 3 || iParam1 == 4)
		{
			__LIB_3__::func_805(iParam3, 0, iParam1 == 4);
			__LIB_3__::func_805(iParam3, 3, 0);
			__LIB_3__::func_805(iParam3, 4, 0);
			__LIB_3__::func_805(iParam3, 2, 0);
			__LIB_3__::func_805(iParam3, 5, 0);
			__LIB_3__::func_805(iParam3, 6, 0);
			__LIB_3__::func_805(iParam3, 7, 0);
		}
		else
		{
			__LIB_3__::func_805(iParam3, 0, 1);
			__LIB_3__::func_805(iParam3, 3, 0);
			__LIB_3__::func_805(iParam3, 4, 0);
			__LIB_3__::func_805(iParam3, 2, __LIB_2__::func_380());
			__LIB_3__::func_805(iParam3, 5, 0);
			__LIB_3__::func_805(iParam3, 6, 0);
			__LIB_3__::func_805(iParam3, 7, 0);
		}
	}
	else if (iParam1 == 4)
	{
		__LIB_3__::func_805(iParam3, 0, 1);
		__LIB_3__::func_805(iParam3, 3, 0);
		__LIB_3__::func_805(iParam3, 4, 0);
		__LIB_3__::func_805(iParam3, 2, 0);
		__LIB_3__::func_805(iParam3, 5, 0);
		__LIB_3__::func_805(iParam3, 6, 0);
		__LIB_3__::func_805(iParam3, 7, 0);
		__LIB_7__::func_366(iParam3, 7, 0);
	}
	else if (iParam1 == 1 || iParam1 == 2)
	{
		__LIB_3__::func_805(iParam3, 0, 1);
		__LIB_3__::func_805(iParam3, 2, !Global_262145.f_26911 /* Tunable: VC_PENTHOUSE_DISABLE_CASINO */);
		__LIB_3__::func_805(iParam3, 3, 1);
		__LIB_7__::func_366(iParam3, 3, __LIB_0__::func_834(PLAYER::PLAYER_ID()));
		__LIB_3__::func_805(iParam3, 4, !Global_262145.f_26912 /* Tunable: VC_PENTHOUSE_DISABLE_PARKING */);
		__LIB_7__::func_366(iParam3, 4, __LIB_0__::func_833(PLAYER::PLAYER_ID()));
		__LIB_3__::func_805(iParam3, 5, !Global_262145.f_26913 /* Tunable: VC_PENTHOUSE_DISABLE_TERRACE */);
		__LIB_7__::func_366(iParam3, 5, !Global_262145.f_26913 /* Tunable: VC_PENTHOUSE_DISABLE_TERRACE */);
		__LIB_3__::func_805(iParam3, 6, !Global_262145.f_26913 /* Tunable: VC_PENTHOUSE_DISABLE_TERRACE */);
		__LIB_7__::func_366(iParam3, 6, !Global_262145.f_26913 /* Tunable: VC_PENTHOUSE_DISABLE_TERRACE */);
		__LIB_3__::func_805(iParam3, 7, 1);
		__LIB_7__::func_366(iParam3, 7, func_3532());
	}
	else if (iParam1 == 3)
	{
		__LIB_3__::func_805(iParam3, 0, 0);
		__LIB_3__::func_805(iParam3, 3, 0);
		__LIB_3__::func_805(iParam3, 2, 0);
		__LIB_3__::func_805(iParam3, 5, 0);
		__LIB_3__::func_805(iParam3, 6, 0);
		__LIB_3__::func_805(iParam3, 4, 1);
		__LIB_7__::func_366(iParam3, 4, (__LIB_0__::func_833(PLAYER::PLAYER_ID()) && !Global_262145.f_26912 /* Tunable: VC_PENTHOUSE_DISABLE_PARKING */));
		__LIB_3__::func_805(iParam3, 7, 0);
		__LIB_7__::func_366(iParam3, 7, 0);
	}
	if (iParam3->f_3 != 0)
	{
		if (iParam3->f_5 == 3)
		{
			if (__LIB_0__::func_834(PLAYER::PLAYER_ID()))
			{
				__LIB_1__::func_342("CASINO_ENT_F6_H" /* GXT: Go to your Penthouse. */, 0, 0);
			}
			else
			{
				__LIB_1__::func_342("CASINO_BUY_PROP" /* GXT: Purchase the Penthouse from www.thediamondcasinoandresort.com. */, 0, 0);
			}
		}
		else if (iParam3->f_5 == 4)
		{
			if (__LIB_0__::func_833(PLAYER::PLAYER_ID()))
			{
				__LIB_1__::func_342("CASINO_ENT_F7_H" /* GXT: Go to your Penthouse Garage. */, 0, 0);
			}
			else
			{
				__LIB_1__::func_342("CSNAPT_EXT_F1HC" /* GXT: Purchase the Penthouse Garage from www.thediamondcasinoandresort.com. */, 0, 0);
			}
		}
		else if (iParam3->f_5 == 2)
		{
			__LIB_1__::func_342("CASINO_ENT_F4_H" /* GXT: Go to the Casino. */, 0, 0);
		}
		else if (iParam3->f_5 == 0)
		{
			__LIB_1__::func_342("CASINO_CP_EX_D" /* GXT: Exit the Parking Garage. */, 0, 0);
		}
		else if (iParam3->f_5 == 5)
		{
			__LIB_1__::func_342("CASINO_ENT_F5_H" /* GXT: Exit to the Roof Terrace. */, 0, 0);
		}
		else if (iParam3->f_5 == 6)
		{
			__LIB_1__::func_342("CASINO_ENT_F9_H" /* GXT: Exit to the Roof. */, 0, 0);
		}
		else if (iParam3->f_5 == 7)
		{
			if (__LIB_24__::func_897())
			{
				__LIB_1__::func_342("CAS_CLUB_KICK2" /* GXT: You are temporarily banned from entering The Music Locker due to being thrown out. */, 0, 0);
			}
			else if (BitTest(Global_1946250.f_4523.f_1, 7))
			{
				__LIB_1__::func_342("CAS_CLUB_TMP" /* GXT: The Music Locker is currently full. Please come back later. */, 0, 0);
			}
			else if (__LIB_0__::func_834(PLAYER::PLAYER_ID()))
			{
				__LIB_1__::func_342("CASINO_ENT_F10H" /* GXT: Go to The Music Locker. */, 0, 0);
			}
			else
			{
				__LIB_1__::func_342("CASINO_ENT_F10D" /* GXT: You must own the Penthouse to access The Music Locker from here. */, 0, 0);
			}
		}
	}
	else
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	if (__LIB_2__::func_444(0, iParam3) || __LIB_2__::func_444(1, iParam3))
	{
		return;
	}
	else if (__LIB_2__::func_444(3, iParam3))
	{
		__LIB_2__::func_447(0);
		__LIB_2__::func_763(124);
		__LIB_7__::func_394(3);
		__LIB_2__::func_548(1);
	}
	else if (__LIB_2__::func_444(4, iParam3))
	{
		__LIB_2__::func_447(1);
		__LIB_2__::func_763(124);
		if (iParam1 == 1)
		{
			__LIB_7__::func_394(4);
			__LIB_2__::func_548(1);
		}
		else if (iParam1 == 3)
		{
			__LIB_7__::func_394(5);
			__LIB_2__::func_548(1);
		}
	}
	else if (__LIB_2__::func_444(2, iParam3))
	{
		__LIB_2__::func_763(123);
		__LIB_7__::func_394(1);
		__LIB_2__::func_548(1);
	}
	else if (__LIB_2__::func_444(5, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 8);
		MISC::SET_BIT(&(Global_1946250.f_5), 26);
		__LIB_7__::func_394(0);
	}
	else if (__LIB_2__::func_444(7, iParam3))
	{
		__LIB_2__::func_763(146);
		__LIB_7__::func_394(1);
		__LIB_2__::func_548(1);
	}
	else if (__LIB_2__::func_444(6, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 14);
		__LIB_7__::func_394(0);
	}
}

int func_3532()//Position - 0x1264F1
{
	if ((__LIB_24__::func_897() || !__LIB_0__::func_834(PLAYER::PLAYER_ID())) || BitTest(Global_1946250.f_4523.f_1, 7))
	{
		return 0;
	}
	return 1;
}

void func_3551(int iParam0, int iParam1)//Position - 0x12829F
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_364(iParam0) };
	if (__LIB_0__::func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2017(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_937(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_937(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_917(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_917(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_3589(var uParam0, int iParam1)//Position - 0x128C73
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1250691/*func_3766*/;
			break;
		case 111:
			uParam0->f_35 = 1250668/*func_3765*/;
			break;
		case 1:
			uParam0->f_30 = 1250538/*func_3763*/;
			break;
		case 2:
			uParam0->f_31 = 1249873/*func_3759*/;
			break;
		case 3:
			uParam0->f_34 = 1249610/*func_3758*/;
			break;
		case 4:
			uParam0->f_12 = 1249597/*func_3757*/;
			break;
		case 5:
			uParam0->f_11 = 1249587/*func_3756*/;
			break;
		case 37:
			uParam0->f_18 = 1249389/*func_3755*/;
			break;
		case 38:
			uParam0->f_9 = 1249341/*func_3754*/;
			break;
		case 42:
			uParam0->f_10 = 1249305/*func_3753*/;
			break;
		case 6:
			uParam0->f_32 = 1249190/*func_3752*/;
			break;
		case 11:
			uParam0->f_11 = 1249181/*func_3751*/;
			break;
		case 12:
			uParam0->f_33 = 1248251/*func_3745*/;
			break;
		case 14:
			uParam0->f_11 = 1248242/*func_3744*/;
			break;
		case 109:
			uParam0->f_56 = 1247080/*func_3742*/;
			break;
		case 8:
			uParam0->f_37 = 1247036/*func_3741*/;
			break;
		case 7:
			uParam0->f_36 = 1247013/*func_3740*/;
			break;
		case 79:
			*uParam0 = 1246989/*func_3739*/;
			break;
		case 13:
			uParam0->f_2 = 1246927/*func_3738*/;
			break;
		case 15:
			uParam0->f_2 = 1246848/*func_3737*/;
			break;
		case 16:
			uParam0->f_5 = 1246174/*func_3732*/;
			break;
		case 108:
			uParam0->f_55 = 1242891/*func_3719*/;
			break;
		case 17:
			uParam0->f_17 = 1241954/*func_3718*/;
			break;
		case 19:
			uParam0->f_17 = 1241909/*func_3717*/;
			break;
		case 20:
			uParam0->f_3 = 1241736/*func_3716*/;
			break;
		case 21:
			uParam0->f_3 = 1241651/*func_3715*/;
			break;
		case 74:
			uParam0->f_53 = 1241511/*func_3714*/;
			break;
		case 75:
			uParam0->f_4 = 1241495/*func_3713*/;
			break;
		case 22:
			uParam0->f_24 = 1241388/*func_3712*/;
			break;
		case 23:
			uParam0->f_26 = 1241341/*func_3711*/;
			break;
		case 24:
			uParam0->f_26 = 1241304/*func_3710*/;
			break;
		case 26:
			uParam0->f_38 = 1239893/*func_3697*/;
			break;
		case 25:
			uParam0->f_23 = 1239527/*func_3694*/;
			break;
		case 27:
			uParam0->f_25 = 1238713/*func_3690*/;
			break;
		case 28:
			uParam0->f_24 = 1238672/*func_3689*/;
			break;
		case 29:
			uParam0->f_28 = 1238437/*func_3685*/;
			break;
		case 30:
			uParam0->f_8 = 1238112/*func_3681*/;
			break;
		case 31:
			uParam0->f_39 = 1237915/*func_3680*/;
			break;
		case 43:
			uParam0->f_8 = 1237809/*func_3679*/;
			break;
		case 33:
			uParam0->f_40 = 1237493/*func_3678*/;
			break;
		case 34:
			uParam0->f_41 = 1232501/*func_3675*/;
			break;
		case 36:
			uParam0->f_58 = 1232444/*func_3674*/;
			break;
		case 35:
			uParam0->f_42 = 1226238/*func_3670*/;
			break;
		case 45:
			uParam0->f_14 = 1226229/*func_3669*/;
			break;
		case 46:
			uParam0->f_14 = 1226220/*func_3668*/;
			break;
		case 110:
			uParam0->f_57 = 1226212/*func_3667*/;
			break;
		case 77:
			uParam0->f_13 = 1226189/*func_3666*/;
			break;
		case 82:
			uParam0->f_19 = 1226176/*func_3665*/;
			break;
		case 47:
			uParam0->f_43 = 1225873/*func_3662*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1223710/*func_3657*/;
			break;
		case 49:
			uParam0->f_8 = 1223662/*func_3656*/;
			break;
		case 50:
			*uParam0 = 1223470/*func_3654*/;
			break;
		case 51:
			*uParam0 = 1223461/*func_3653*/;
			break;
		case 52:
			uParam0->f_15 = 1223450/*func_3652*/;
			break;
		case 53:
			uParam0->f_13 = 1223408/*func_3651*/;
			break;
		case 54:
			uParam0->f_45 = 1223400/*func_3650*/;
			break;
		case 56:
			uParam0->f_46 = 1223391/*func_3649*/;
			break;
		case 57:
			uParam0->f_11 = 1223382/*func_3648*/;
			break;
		case 58:
			uParam0->f_13 = 1223340/*func_3647*/;
			break;
		case 59:
			*uParam0 = 1223331/*func_3646*/;
			break;
		case 60:
			*uParam0 = 1223322/*func_3645*/;
			break;
		case 61:
			uParam0->f_15 = 1223311/*func_3644*/;
			break;
		case 62:
			uParam0->f_13 = 1223281/*func_3643*/;
			break;
		case 63:
			uParam0->f_11 = 1223272/*func_3642*/;
			break;
		case 64:
			uParam0->f_47 = 1223264/*func_3641*/;
			break;
		case 65:
			uParam0->f_21 = 1222178/*func_3638*/;
			break;
		case 66:
			uParam0->f_21 = 1221837/*func_3637*/;
			break;
		case 67:
			uParam0->f_21 = 1221723/*func_3636*/;
			break;
		case 68:
			*uParam0 = 1220895/*func_3635*/;
			break;
		case 69:
			*uParam0 = 1220886/*func_3634*/;
			break;
		case 70:
			uParam0->f_48 = 1220874/*func_3633*/;
			break;
		case 71:
			uParam0->f_49 = 1220782/*func_3632*/;
			break;
		case 107:
			uParam0->f_50 = 1220770/*func_3631*/;
			break;
		case 80:
			uParam0->f_7 = 1220582/*func_3630*/;
			break;
		case 84:
			uParam0->f_1 = 1220573/*func_3629*/;
			break;
		case 85:
			uParam0->f_1 = 1220559/*func_3628*/;
			break;
		case 87:
			uParam0->f_1 = 1220543/*func_3627*/;
			break;
		case 88:
			uParam0->f_1 = 1220534/*func_3626*/;
			break;
		case 89:
			uParam0->f_54 = 1220526/*func_3625*/;
			break;
		case 96:
			uParam0->f_1 = 1220517/*func_3624*/;
			break;
		case 97:
			uParam0->f_1 = 1220074/*func_3620*/;
			break;
		case 98:
			uParam0->f_1 = 1218612/*func_3610*/;
			break;
		case 100:
			uParam0->f_22 = 1217733/*func_3605*/;
			break;
		case 101:
			uParam0->f_22 = 1217556/*func_3602*/;
			break;
		case 112:
			uParam0->f_13 = 1217544/*func_3601*/;
			break;
		case 113:
			uParam0->f_3 = 1217530/*func_3600*/;
			break;
		case 114:
			uParam0->f_16 = 886763/*func_2252*/;
			break;
		case 117:
			uParam0->f_16 = 940967/*func_2457*/;
			break;
		case 118:
			uParam0->f_11 = 1217521/*func_3599*/;
			break;
		case 119:
			uParam0->f_27 = 1217420/*func_3595*/;
			break;
		case 120:
			uParam0->f_19 = 1217395/*func_3593*/;
			break;
		case 78:
			uParam0->f_59 = 1217223/*func_3591*/;
			break;
		case 125:
			uParam0->f_19 = 1217196/*func_3590*/;
			break;
	}
}

int func_3610(int iParam0, var uParam1)//Position - 0x129834
{
	if (__LIB_2__::func_909(iParam0))
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
		if (!__LIB_7__::func_476(&(uParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		uParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_2__::func_915(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_915());
		if (__LIB_0__::func_121(uParam1->f_176[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_176[0], true);
		}
		else
		{
			return 0;
		}
		iVar2 = __LIB_2__::func_914(-395939522);
		iVar3 = __LIB_2__::func_914(-401740561);
		if (!BitTest(uParam1->f_188, 5))
		{
			__LIB_2__::func_912(__LIB_2__::func_913(-395939522), iVar2);
			__LIB_2__::func_912(__LIB_2__::func_913(-401740561), iVar3);
			MISC::SET_BIT(&(uParam1->f_188), 5);
		}
		if (!__LIB_2__::func_911(&(uParam1->f_50), __LIB_2__::func_913(-395939522), -48f, iVar2))
		{
			return 0;
		}
		if (!__LIB_2__::func_911(&(uParam1->f_58), __LIB_2__::func_913(-401740561), 157f, iVar3))
		{
			return 0;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
		Var4 = { 925.9088f, 51.242f, 80.095f };
		Var5 = { 0f, 0f, 58f };
		sVar6 = __LIB_3__::func_869(uParam1, 6);
		iVar7 = 3500;
		__LIB_2__::func_681(&(Global_1946250.f_4073), iVar7, "valet exit", Var4, Var5, uParam1->f_3, sVar6, 1, 0, 0, 0, 2);
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

void func_3657(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x12AC1E
{
	if (__LIB_6__::func_25() == 0)
	{
		func_3660(iParam0, iParam1, iParam2, iParam3);
	}
	else
	{
		func_3658(iParam0, iParam1, iParam2, iParam3);
	}
}

void func_3658(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x12AC49
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	if (BitTest(Global_1946250.f_4, 26))
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	iVar0 = 0;
	bVar1 = (iParam1 == 1 || iParam1 == 2);
	if (iParam2 == PLAYER::PLAYER_ID())
	{
		__LIB_3__::func_805(iParam3, 3, bVar1);
		__LIB_7__::func_366(iParam3, 3, bVar1);
		bVar2 = bVar1;
		if (bVar2)
		{
			bVar2 = __LIB_5__::func_599(iParam0, PLAYER::PLAYER_ID(), __LIB_6__::func_25()) != false;
		}
		__LIB_3__::func_805(iParam3, 4, bVar2);
		__LIB_7__::func_366(iParam3, 4, bVar2);
	}
	else
	{
		bVar3 = (bVar1 && __LIB_5__::func_711(iParam2));
		if (bVar3)
		{
			bVar3 = __LIB_0__::func_338(iParam2) == false;
		}
		__LIB_3__::func_805(iParam3, 3, bVar3);
		__LIB_7__::func_366(iParam3, 3, bVar3);
		__LIB_3__::func_805(iParam3, 4, 0);
		__LIB_7__::func_366(iParam3, 4, 0);
	}
	__LIB_3__::func_805(iParam3, 2, (bVar1 && !Global_262145.f_26911 /* Tunable: VC_PENTHOUSE_DISABLE_CASINO */));
	__LIB_7__::func_366(iParam3, 2, (bVar1 && !Global_262145.f_26911 /* Tunable: VC_PENTHOUSE_DISABLE_CASINO */));
	__LIB_3__::func_805(iParam3, 5, !Global_262145.f_26910 /* Tunable: VC_PENTHOUSE_DISABLE_GARAGE */);
	__LIB_7__::func_366(iParam3, 5, !Global_262145.f_26910 /* Tunable: VC_PENTHOUSE_DISABLE_GARAGE */);
	if (iParam1 == 3)
	{
		__LIB_3__::func_805(iParam3, 6, 0);
		__LIB_7__::func_366(iParam3, 6, 0);
		__LIB_3__::func_805(iParam3, 7, 0);
		__LIB_7__::func_366(iParam3, 7, 0);
		__LIB_3__::func_805(iParam3, 8, 0);
		__LIB_7__::func_366(iParam3, 8, 0);
	}
	else
	{
		__LIB_3__::func_805(iParam3, 6, !Global_262145.f_26913 /* Tunable: VC_PENTHOUSE_DISABLE_TERRACE */);
		__LIB_7__::func_366(iParam3, 6, !Global_262145.f_26913 /* Tunable: VC_PENTHOUSE_DISABLE_TERRACE */);
		__LIB_3__::func_805(iParam3, 7, !Global_262145.f_26913 /* Tunable: VC_PENTHOUSE_DISABLE_TERRACE */);
		__LIB_7__::func_366(iParam3, 7, !Global_262145.f_26913 /* Tunable: VC_PENTHOUSE_DISABLE_TERRACE */);
		__LIB_3__::func_805(iParam3, 8, 1);
		__LIB_7__::func_366(iParam3, 8, func_3532());
	}
	if (iParam3->f_3 != 0 && (iParam3->f_5 < iVar0 || iParam3->f_1 != 1))
	{
		return;
	}
	if (iParam3->f_3 != 0)
	{
		if (iParam3->f_5 == 3)
		{
			if (iParam2 == PLAYER::PLAYER_ID())
			{
				__LIB_1__::func_342("CSNAPT_EXT_F0_H" /* GXT: Go to your Penthouse. */, 0, 0);
			}
			else
			{
				__LIB_1__::func_342("CSNAPT_EXT_F0HB" /* GXT: Go to the Penthouse. */, 0, 0);
			}
		}
		else if (iParam3->f_5 == 0)
		{
			__LIB_1__::func_342("CSNAPT_EXT_H3" /* GXT: Exit the Penthouse Garage. */, 0, 0);
		}
		else if (iParam3->f_5 == 1)
		{
			__LIB_1__::func_342("CSNAPT_EXT_AHB" /* GXT: All Exit the Penthouse Garage. */, 0, 0);
		}
		else if (iParam3->f_5 == 2)
		{
			__LIB_1__::func_342("CSNAPT_EXT_C_H" /* GXT: Go to the Casino. */, 0, 0);
		}
		else if (iParam3->f_5 == 5)
		{
			__LIB_1__::func_342("CSNAPT_EXT_C_I" /* GXT: Go to the Parking Garage. */, 0, 0);
		}
		else if (iParam3->f_5 == 6)
		{
			__LIB_1__::func_342("CASINO_ENT_F5_H" /* GXT: Exit to the Roof Terrace. */, 0, 0);
		}
		else if (iParam3->f_5 == 7)
		{
			__LIB_1__::func_342("CASINO_ENT_F9_H" /* GXT: Exit to the Roof. */, 0, 0);
		}
		else if (iParam3->f_5 == 4)
		{
			__LIB_1__::func_342("CAS_APT_EXT_F5" /* GXT: All Exit to the Penthouse */, 0, 0);
		}
		else if (iParam3->f_5 == 8)
		{
			if (__LIB_24__::func_897())
			{
				__LIB_1__::func_342("CAS_CLUB_KICK2" /* GXT: You are temporarily banned from entering The Music Locker due to being thrown out. */, 0, 0);
			}
			else if (BitTest(Global_1946250.f_4523.f_1, 7))
			{
				__LIB_1__::func_342("CAS_CLUB_TMP" /* GXT: The Music Locker is currently full. Please come back later. */, 0, 0);
			}
			else if (__LIB_0__::func_834(PLAYER::PLAYER_ID()))
			{
				__LIB_1__::func_342("CASINO_ENT_F10H" /* GXT: Go to The Music Locker. */, 0, 0);
			}
			else
			{
				__LIB_1__::func_342("CASINO_ENT_F10D" /* GXT: You must own the Penthouse to access The Music Locker from here. */, 0, 0);
			}
		}
	}
	else
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	if (__LIB_2__::func_444(0, iParam3) || __LIB_2__::func_444(1, iParam3))
	{
		return;
	}
	else if (__LIB_2__::func_444(2, iParam3))
	{
		__LIB_2__::func_763(123);
		__LIB_7__::func_394(1);
		__LIB_2__::func_548(1);
	}
	else if (__LIB_2__::func_444(3, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 9);
	}
	else if (__LIB_2__::func_444(5, iParam3))
	{
		__LIB_2__::func_763(125);
		if (iParam1 == 3)
		{
			__LIB_7__::func_394(1);
		}
		else
		{
			__LIB_7__::func_394(0);
		}
		Global_1946250.f_3377 = iParam1;
		__LIB_2__::func_548(1);
	}
	else if (__LIB_2__::func_444(6, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 8);
		MISC::SET_BIT(&(Global_1946250.f_5), 26);
	}
	else if (__LIB_2__::func_444(7, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 14);
	}
	else if (__LIB_2__::func_444(8, iParam3))
	{
		__LIB_2__::func_763(146);
		__LIB_7__::func_394(1);
		__LIB_2__::func_548(1);
	}
	else if (__LIB_2__::func_444(4, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 9);
		MISC::SET_BIT(&(Global_1946250.f_5), 13);
	}
}

void func_3660(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x12B075
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (BitTest(Global_1946250.f_4, 26))
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	iVar0 = 0;
	if (iParam2 == PLAYER::PLAYER_ID())
	{
		__LIB_3__::func_805(iParam3, 3, !Global_262145.f_26912 /* Tunable: VC_PENTHOUSE_DISABLE_PARKING */);
		__LIB_7__::func_366(iParam3, 3, __LIB_0__::func_833(iParam2));
		bVar1 = (__LIB_0__::func_833(iParam2) && !Global_262145.f_26912 /* Tunable: VC_PENTHOUSE_DISABLE_PARKING */);
		if (bVar1)
		{
			bVar1 = __LIB_5__::func_599(iParam0, PLAYER::PLAYER_ID(), __LIB_6__::func_25()) != false;
		}
		__LIB_3__::func_805(iParam3, 4, bVar1);
		__LIB_7__::func_366(iParam3, 4, bVar1);
	}
	else
	{
		bVar2 = (__LIB_5__::func_711(iParam2) && !Global_262145.f_26912 /* Tunable: VC_PENTHOUSE_DISABLE_PARKING */);
		if (bVar2)
		{
			bVar2 = __LIB_0__::func_338(iParam2) == true;
		}
		__LIB_3__::func_805(iParam3, 3, bVar2);
		__LIB_7__::func_366(iParam3, 3, bVar2);
		__LIB_3__::func_805(iParam3, 4, 0);
		__LIB_7__::func_366(iParam3, 4, 0);
	}
	__LIB_3__::func_805(iParam3, 2, !Global_262145.f_26911 /* Tunable: VC_PENTHOUSE_DISABLE_CASINO */);
	__LIB_7__::func_366(iParam3, 2, !Global_262145.f_26911 /* Tunable: VC_PENTHOUSE_DISABLE_CASINO */);
	__LIB_3__::func_805(iParam3, 5, !Global_262145.f_26910 /* Tunable: VC_PENTHOUSE_DISABLE_GARAGE */);
	__LIB_7__::func_366(iParam3, 5, !Global_262145.f_26910 /* Tunable: VC_PENTHOUSE_DISABLE_GARAGE */);
	__LIB_3__::func_805(iParam3, 6, 0);
	__LIB_7__::func_366(iParam3, 6, 0);
	__LIB_3__::func_805(iParam3, 7, !Global_262145.f_26913 /* Tunable: VC_PENTHOUSE_DISABLE_TERRACE */);
	__LIB_7__::func_366(iParam3, 7, !Global_262145.f_26913 /* Tunable: VC_PENTHOUSE_DISABLE_TERRACE */);
	__LIB_3__::func_805(iParam3, 8, 1);
	__LIB_7__::func_366(iParam3, 8, func_3532());
	if (iParam3->f_3 != 0 && (iParam3->f_5 < iVar0 || iParam3->f_1 != 1))
	{
		return;
	}
	if (iParam3->f_3 != 0)
	{
		if (iParam3->f_5 == 3)
		{
			if (iParam2 == PLAYER::PLAYER_ID())
			{
				if (!__LIB_0__::func_833(PLAYER::PLAYER_ID()))
				{
					__LIB_1__::func_342("CSNAPT_EXT_F1HC" /* GXT: Purchase the Penthouse Garage from www.thediamondcasinoandresort.com. */, 0, 0);
				}
				else
				{
					__LIB_1__::func_342("CSNAPT_EXT_F1_H" /* GXT: Go to your Penthouse Garage. */, 0, 0);
				}
			}
			else
			{
				__LIB_1__::func_342("CSNAPT_EXT_F1HB" /* GXT: Go to the Penthouse Garage. */, 0, 0);
			}
		}
		else if (iParam3->f_5 == 0)
		{
			if (iParam1 == 2)
			{
				__LIB_1__::func_342("CSNAPT_EXT_H2" /* GXT: Exit to the Roof Terrace. */, 0, 0);
			}
			else
			{
				__LIB_1__::func_342("CSNAPT_EXT_H" /* GXT: Exit the Penthouse. */, 0, 0);
			}
		}
		else if (iParam3->f_5 == 1)
		{
			__LIB_1__::func_342("CSNAPT_EXT_A_H" /* GXT: All Exit the Penthouse. */, 0, 0);
		}
		else if (iParam3->f_5 == 2)
		{
			__LIB_1__::func_342("CSNAPT_EXT_C_H" /* GXT: Go to the Casino. */, 0, 0);
		}
		else if (iParam3->f_5 == 5)
		{
			__LIB_1__::func_342("CSNAPT_EXT_C_I" /* GXT: Go to the Parking Garage. */, 0, 0);
		}
		else if (iParam3->f_5 == 6)
		{
			__LIB_1__::func_342("CASINO_ENT_F5_H" /* GXT: Exit to the Roof Terrace. */, 0, 0);
		}
		else if (iParam3->f_5 == 7)
		{
			__LIB_1__::func_342("CASINO_ENT_F9_H" /* GXT: Exit to the Roof. */, 0, 0);
		}
		else if (iParam3->f_5 == 4)
		{
			__LIB_1__::func_342("CAS_APT_EXT_F4" /* GXT: All Exit to the Penthouse Garage */, 0, 0);
		}
		else if (iParam3->f_5 == 8)
		{
			if (__LIB_24__::func_897())
			{
				__LIB_1__::func_342("CAS_CLUB_KICK2" /* GXT: You are temporarily banned from entering The Music Locker due to being thrown out. */, 0, 0);
			}
			else if (BitTest(Global_1946250.f_4523.f_1, 7))
			{
				__LIB_1__::func_342("CAS_CLUB_TMP" /* GXT: The Music Locker is currently full. Please come back later. */, 0, 0);
			}
			else if (__LIB_0__::func_834(PLAYER::PLAYER_ID()))
			{
				__LIB_1__::func_342("CASINO_ENT_F10H" /* GXT: Go to The Music Locker. */, 0, 0);
			}
			else
			{
				__LIB_1__::func_342("CASINO_ENT_F10D" /* GXT: You must own the Penthouse to access The Music Locker from here. */, 0, 0);
			}
		}
	}
	else
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	if (__LIB_2__::func_444(0, iParam3) || __LIB_2__::func_444(1, iParam3))
	{
		return;
	}
	else if (__LIB_2__::func_444(2, iParam3))
	{
		__LIB_2__::func_763(123);
		__LIB_7__::func_394(1);
		__LIB_2__::func_548(1);
		__LIB_2__::func_924();
	}
	else if (__LIB_2__::func_444(3, iParam3))
	{
		__LIB_2__::func_447(1);
		__LIB_2__::func_549(iParam0, -1);
		__LIB_7__::func_394(4);
		__LIB_2__::func_548(1);
		__LIB_2__::func_924();
	}
	else if (__LIB_2__::func_444(5, iParam3))
	{
		__LIB_2__::func_763(125);
		__LIB_7__::func_394(0);
		__LIB_2__::func_548(1);
	}
	else if (__LIB_2__::func_444(6, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_4), 30);
	}
	else if (__LIB_2__::func_444(7, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 14);
	}
	else if (__LIB_2__::func_444(8, iParam3))
	{
		__LIB_2__::func_763(146);
		__LIB_7__::func_394(1);
		__LIB_2__::func_548(1);
	}
	else if (__LIB_2__::func_444(4, iParam3))
	{
		__LIB_2__::func_924();
		iVar3 = __LIB_5__::func_599(iParam0, PLAYER::PLAYER_ID(), 0);
		iVar4 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7;
		__LIB_2__::func_443(iVar3, iParam0, iVar4, 1, 0, 1, 4);
		__LIB_2__::func_447(1);
		__LIB_2__::func_549(iParam0, -1);
		__LIB_7__::func_394(4);
		__LIB_2__::func_548(1);
	}
}

void func_3694(int iParam0, int iParam1)//Position - 0x12E9E7
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_935(iParam0) };
	if (__LIB_7__::func_480(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2017(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_943(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_943(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_919(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_919(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_3697(var uParam0, var uParam1)//Position - 0x12EB55
{
	if (__LIB_0__::func_834(PLAYER::PLAYER_ID()) || __LIB_2__::func_934(PLAYER::PLAYER_ID()))
	{
		func_3698(uParam0, uParam1);
	}
}

void func_3698(var uParam0, var uParam1)//Position - 0x12EB81
{
	int iVar0;
	if (__LIB_2__::func_399() == 2 && __LIB_2__::func_566() != 1)
	{
		uParam1->f_1 = 1;
		if (func_3709(*uParam0, 0, 0))
		{
			__LIB_2__::func_447(0);
			__LIB_2__::func_565(1);
		}
		else
		{
			__LIB_7__::func_648(uParam1, 0);
			return;
		}
	}
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			func_3704(uParam0, uParam1);
			break;
		case 1:
			func_3700(uParam0, uParam1);
			break;
		case 2:
			__LIB_7__::func_647(*uParam0, uParam1);
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
	sVar3 = __LIB_2__::func_936();
	func_2017(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar6, &bVar7, 1, 0);
	iVar5 = 0;
	while (iVar5 < 3)
	{
		uVar2[iVar4] = __LIB_4__::func_724(iVar5);
		if (__LIB_2__::func_563(iVar5, bVar6, bVar7))
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
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar3, sVar3);
		__LIB_3__::func_874();
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			__LIB_25__::func_557(iVar5, uVar2[iVar5], 0, 1, 0, 0, 0);
			iVar5++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 1;
		uParam1->f_11 = 10;
		__LIB_7__::func_394(5);
		__LIB_7__::func_396();
		if (iVar1[uParam0->f_4] != 0)
		{
			__LIB_25__::func_301(iVar1[uParam0->f_4]);
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_7__::func_396();
		if (__LIB_2__::func_399() == 2)
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
	sVar4 = __LIB_2__::func_936();
	iVar6 = 0;
	while (iVar6 < 2)
	{
		uVar3[iVar6] = __LIB_2__::func_939(iVar6);
		uVar1[iVar6] = __LIB_2__::func_938(iVar6);
		uVar2[iVar6] = uVar1[iVar6];
		if (!bVar0 && (Global_23150.f_1616[iVar6] != uVar2[iVar6] || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar6 /*6*/]), uVar3[iVar6])))
		{
			bVar0 = true;
		}
		iVar5++;
		iVar6++;
	}
	if (!__LIB_0__::func_834(PLAYER::PLAYER_ID()) && __LIB_2__::func_934(PLAYER::PLAYER_ID()))
	{
		__LIB_7__::func_647(*uParam0, uParam1);
	}
	else if (uParam0->f_5 || bVar0)
	{
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar4, sVar4);
		__LIB_3__::func_874();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_25__::func_557(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		__LIB_1__::func_342(__LIB_2__::func_937(uVar1[iVar7], iVar7), 0, 0);
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (iVar7 == 0)
			{
				*uParam1 = 1;
				__LIB_2__::func_565(2);
			}
			else if (func_3709(*uParam0, 0, 0))
			{
				*uParam1 = 1;
				__LIB_2__::func_447(1);
				__LIB_2__::func_565(1);
			}
			else
			{
				__LIB_7__::func_648(uParam1, 1);
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
			*uParam0 = 1281113/*func_3935*/;
			break;
		case 111:
			uParam0->f_35 = 1281104/*func_3934*/;
			break;
		case 1:
			uParam0->f_30 = 1281036/*func_3932*/;
			break;
		case 2:
			uParam0->f_31 = 1280685/*func_3929*/;
			break;
		case 3:
			uParam0->f_34 = 1280452/*func_3928*/;
			break;
		case 4:
			uParam0->f_12 = 1280439/*func_3927*/;
			break;
		case 6:
			uParam0->f_32 = 1280375/*func_3926*/;
			break;
		case 11:
			uParam0->f_11 = 1280366/*func_3925*/;
			break;
		case 12:
			uParam0->f_33 = 1279641/*func_3921*/;
			break;
		case 14:
			uParam0->f_11 = 1279632/*func_3920*/;
			break;
		case 109:
			uParam0->f_56 = 1278507/*func_3919*/;
			break;
		case 8:
			uParam0->f_37 = 1278499/*func_3918*/;
			break;
		case 7:
			uParam0->f_36 = 1278490/*func_3917*/;
			break;
		case 79:
			*uParam0 = 1278466/*func_3916*/;
			break;
		case 13:
			uParam0->f_2 = 1278394/*func_3915*/;
			break;
		case 15:
			uParam0->f_2 = 1278305/*func_3914*/;
			break;
		case 16:
			uParam0->f_5 = 1277944/*func_3913*/;
			break;
		case 108:
			uParam0->f_55 = 1277805/*func_3911*/;
			break;
		case 17:
			uParam0->f_17 = 1277130/*func_3910*/;
			break;
		case 19:
			uParam0->f_17 = 1277104/*func_3909*/;
			break;
		case 20:
			uParam0->f_3 = 1277095/*func_3908*/;
			break;
		case 21:
			uParam0->f_3 = 1277047/*func_3907*/;
			break;
		case 74:
			uParam0->f_53 = 1276992/*func_3906*/;
			break;
		case 75:
			uParam0->f_4 = 1276879/*func_3905*/;
			break;
		case 22:
			uParam0->f_24 = 1276871/*func_3904*/;
			break;
		case 23:
			uParam0->f_26 = 1276863/*func_3903*/;
			break;
		case 26:
			uParam0->f_38 = 1274306/*func_3887*/;
			break;
		case 25:
			uParam0->f_23 = 1274298/*func_3886*/;
			break;
		case 27:
			uParam0->f_25 = 1274290/*func_3885*/;
			break;
		case 28:
			uParam0->f_24 = 1274282/*func_3884*/;
			break;
		case 30:
			uParam0->f_8 = 1274001/*func_3883*/;
			break;
		case 31:
			uParam0->f_39 = 1273973/*func_3882*/;
			break;
		case 33:
			uParam0->f_40 = 1273904/*func_3881*/;
			break;
		case 76:
			uParam0->f_13 = 1273881/*func_3880*/;
			break;
		case 34:
			uParam0->f_41 = 1271327/*func_3877*/;
			break;
		case 36:
			uParam0->f_58 = 1271282/*func_3876*/;
			break;
		case 35:
			uParam0->f_42 = 1271186/*func_3875*/;
			break;
		case 45:
			uParam0->f_14 = 1271177/*func_3874*/;
			break;
		case 46:
			uParam0->f_14 = 1271168/*func_3873*/;
			break;
		case 110:
			uParam0->f_57 = 1271160/*func_3872*/;
			break;
		case 77:
			uParam0->f_13 = 1271149/*func_3871*/;
			break;
		case 47:
			uParam0->f_43 = 1271036/*func_3870*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1270189/*func_3869*/;
			break;
		case 49:
			uParam0->f_8 = 1270180/*func_3868*/;
			break;
		case 50:
			*uParam0 = 1269967/*func_3867*/;
			break;
		case 51:
			*uParam0 = 1269958/*func_3866*/;
			break;
		case 52:
			uParam0->f_15 = 1269947/*func_3865*/;
			break;
		case 53:
			uParam0->f_13 = 1269905/*func_3864*/;
			break;
		case 54:
			uParam0->f_45 = 1269866/*func_3863*/;
			break;
		case 56:
			uParam0->f_46 = 1269857/*func_3862*/;
			break;
		case 57:
			uParam0->f_11 = 1269815/*func_3860*/;
			break;
		case 58:
			uParam0->f_13 = 1269773/*func_3859*/;
			break;
		case 59:
			*uParam0 = 1269764/*func_3858*/;
			break;
		case 60:
			*uParam0 = 1269755/*func_3857*/;
			break;
		case 61:
			uParam0->f_15 = 1269744/*func_3856*/;
			break;
		case 62:
			uParam0->f_13 = 1269733/*func_3855*/;
			break;
		case 63:
			uParam0->f_11 = 1269724/*func_3854*/;
			break;
		case 64:
			uParam0->f_47 = 1269638/*func_3852*/;
			break;
		case 65:
			uParam0->f_21 = 1269630/*func_3851*/;
			break;
		case 66:
			uParam0->f_21 = 1269289/*func_3850*/;
			break;
		case 67:
			uParam0->f_21 = 1269219/*func_3849*/;
			break;
		case 68:
			*uParam0 = 1268522/*func_3848*/;
			break;
		case 69:
			*uParam0 = 1268513/*func_3847*/;
			break;
		case 70:
			uParam0->f_48 = 1268440/*func_3846*/;
			break;
		case 71:
			uParam0->f_49 = 1268431/*func_3845*/;
			break;
		case 107:
			uParam0->f_50 = 1268419/*func_3844*/;
			break;
		case 80:
			uParam0->f_7 = 1268410/*func_3843*/;
			break;
		case 84:
			uParam0->f_1 = 1267883/*func_3840*/;
			break;
		case 85:
			uParam0->f_1 = 1266327/*func_3837*/;
			break;
		case 87:
			uParam0->f_1 = 1263095/*func_3824*/;
			break;
		case 88:
			uParam0->f_1 = 1263080/*func_3823*/;
			break;
		case 89:
			uParam0->f_54 = 1262718/*func_3821*/;
			break;
		case 96:
			uParam0->f_1 = 1262427/*func_3818*/;
			break;
		case 97:
			uParam0->f_1 = 1261920/*func_3816*/;
			break;
		case 98:
			uParam0->f_1 = 1260285/*func_3814*/;
			break;
		case 100:
			uParam0->f_22 = 1260007/*func_3813*/;
			break;
		case 101:
			uParam0->f_22 = 1259532/*func_3811*/;
			break;
		case 112:
			uParam0->f_13 = 1259520/*func_3810*/;
			break;
		case 113:
			uParam0->f_3 = 1259511/*func_3809*/;
			break;
		case 114:
			uParam0->f_16 = 886763/*func_2252*/;
			break;
		case 115:
			uParam0->f_3 = 1259400/*func_3807*/;
			break;
		case 116:
			*uParam0 = 1259352/*func_3806*/;
			break;
		case 117:
			uParam0->f_16 = 940967/*func_2457*/;
			break;
		case 118:
			uParam0->f_11 = 1217521/*func_3599*/;
			break;
		case 119:
			uParam0->f_27 = 1217420/*func_3595*/;
			break;
		case 120:
			uParam0->f_19 = 1217395/*func_3593*/;
			break;
		case 78:
			uParam0->f_59 = 1259344/*func_3805*/;
			break;
		case 124:
			uParam0->f_1 = 1252280/*func_3769*/;
			break;
		case 125:
			uParam0->f_19 = 1252224/*func_3768*/;
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
			__LIB_38__::func_7(iParam1);
		}
		return 0;
	}
	switch (iParam1->f_258)
	{
		case 0:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_3__::func_878(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 0, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, false, true))
				{
					__LIB_7__::func_394(0);
					__LIB_2__::func_962(iParam1, 1);
				}
				__LIB_3__::func_878(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 3, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_7__::func_394(3);
					__LIB_2__::func_962(iParam1, 1);
				}
				__LIB_3__::func_878(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 4, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_7__::func_394(4);
					__LIB_2__::func_962(iParam1, 1);
				}
				__LIB_3__::func_878(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 1, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_7__::func_394(1);
					__LIB_2__::func_962(iParam1, 1);
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_399() == 0)
			{
				if (__LIB_18__::func_751(iParam0, iParam1))
				{
					__LIB_2__::func_961();
					__LIB_2__::func_962(iParam1, 2);
				}
			}
			else
			{
				__LIB_7__::func_484(iParam0, iParam1, __LIB_2__::func_399());
				__LIB_2__::func_962(iParam1, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_399() == 0)
			{
				if (func_3837(iParam0, iParam1))
				{
					__LIB_2__::func_959(&(Global_1946250.f_3638), 60);
					__LIB_2__::func_962(iParam1, 3);
				}
			}
			else if (func_3793(iParam1))
			{
				__LIB_2__::func_962(iParam1, 3);
			}
			break;
		case 3:
			if (__LIB_2__::func_399() == 0)
			{
				__LIB_35__::func_658(&(Global_1946250.f_3638), 0, 1);
				__LIB_25__::func_302(iParam0, iParam1);
				if (__LIB_2__::func_413(&(Global_1946250.f_3638), 0))
				{
					__LIB_36__::func_879(&iParam0);
					MISC::SET_BIT(&(Global_1946250.f_6), 26);
					__LIB_2__::func_962(iParam1, 4);
				}
			}
			else
			{
				__LIB_18__::func_749(iParam1);
				__LIB_36__::func_879(&iParam0);
				MISC::SET_BIT(&(Global_1946250.f_6), 26);
				__LIB_2__::func_962(iParam1, 4);
			}
			break;
		case 4:
			if (__LIB_2__::func_399() == 0)
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
				__LIB_35__::func_658(&(Global_1946250.f_3638), 0, 1);
				if (__LIB_25__::func_302(iParam0, iParam1) && BitTest(Global_1946250.f_6, 27))
				{
					__LIB_38__::func_7(iParam1);
				}
			}
			else if (__LIB_18__::func_749(iParam1) && BitTest(Global_1946250.f_6, 27))
			{
				__LIB_38__::func_7(iParam1);
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
	if (__LIB_2__::func_909(iParam0))
	{
		return func_3611(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		if (Global_1946250.f_4539 == __LIB_0__::func_160())
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
		__LIB_8__::func_454(1, 1, 1, 0, 0, 0, 0);
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
			__LIB_2__::func_966(MISC::GET_RANDOM_INT_IN_RANGE(0, 6), &(uParam1->f_140[1]));
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
		__LIB_2__::func_681(&(Global_1946250.f_4073), 5000, "Casino Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
		__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 262144, 0);
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
	if (__LIB_2__::func_909(iParam0))
	{
		return __LIB_18__::func_572(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_2), 21);
		STREAMING::REQUEST_IPL("ch_cutscene_casino");
		if (Global_1946250.f_4539 != __LIB_0__::func_160())
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
				if (__LIB_0__::func_308(iParam1))
				{
					iVar1 = 5;
				}
				*uParam0 = PED::CREATE_PED(iVar1, iVar0, 962.5547f, 59.6398f, 111.553f, 180f, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
				PED::CLONE_PED_TO_TARGET(PLAYER::GET_PLAYER_PED(iParam1), *uParam0);
				if (__LIB_0__::func_709(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_1508(*uParam0, 14, 0), -1))
				{
					PED::CLEAR_PED_PROP(*uParam0, 0);
				}
				if (__LIB_0__::func_812(*uParam0, 7))
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
		if (!__LIB_7__::func_476(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		if (!BitTest(iParam1->f_188, 5))
		{
			__LIB_2__::func_912(__LIB_2__::func_913(-1805228339), __LIB_2__::func_914(-1805228339));
			MISC::SET_BIT(&(iParam1->f_188), 5);
		}
		if (!__LIB_2__::func_911(&(iParam1->f_50), __LIB_2__::func_913(-1805228339), __LIB_2__::func_974(-1805228339), __LIB_2__::func_914(-1805228339)))
		{
			return 0;
		}
		iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar2]) && __LIB_0__::func_121(uVar0[iVar2])) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uVar0[iVar2])) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar2]) == __LIB_2__::func_917())
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uVar0[iVar2], false, false);
			}
			else
			{
				iVar2++;
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_914(-1805228339));
		Var3 = { __LIB_2__::func_913(-1805228339) };
		Var4 = { 0f, 0f, -122f };
		sVar5 = __LIB_2__::func_972(6);
		__LIB_2__::func_681(&(Global_1946250.f_3638), 12000, "valet intro", Var3, Var4, iParam1->f_3, sVar5, 1, 0, 0, 0, 2);
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (((__LIB_0__::func_121(iVar6) && __LIB_0__::func_657(iVar6, 0)) && __LIB_6__::func_407(iVar6) == PLAYER::PLAYER_ID()) && __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) == -1)
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
			__LIB_2__::func_416(&(iParam1->f_109));
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
		if (!__LIB_7__::func_476(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		iParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_2__::func_915(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_915());
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
		sVar11 = __LIB_7__::func_487(iParam1, 6);
		iVar12 = __LIB_2__::func_973(__LIB_2__::func_970(iParam1));
		__LIB_2__::func_681(&(Global_1946250.f_3638), iVar12, "valet", Var9, Var10, iParam1->f_3, sVar11, 1, 0, 0, 0, 2);
	}
	else if (__LIB_2__::func_399() == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_2))
		{
			func_2813(&(iParam1->f_2), PLAYER::PLAYER_ID(), 1, 1);
			return 0;
		}
		if ((__LIB_0__::func_121(iParam1->f_2) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_2)) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_2))
		{
			ENTITY::CREATE_MODEL_HIDE(__LIB_2__::func_913(-1805228339), 0.1f, __LIB_2__::func_914(-1805228339), false);
			iParam1->f_50 = OBJECT::CREATE_OBJECT(__LIB_2__::func_914(-1805228339), __LIB_2__::func_913(-1805228339), false, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_50))
			{
				return 0;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_50, __LIB_2__::func_913(-1805228339), false, false, false);
				ENTITY::SET_ENTITY_ROTATION(iParam1->f_50, 0f, 0f, -122f, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_50, true);
				ENTITY::SET_ENTITY_COLLISION(iParam1->f_50, false, false);
			}
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_2, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_914(-1805228339));
			__LIB_25__::func_103(&(Global_1946250.f_3638), 4000, "Enter_Casino", 916.7877f, 63.0506f, 81.6854f, 0.3236f, 0f, -151.6214f, 35.7535f, 916.9896f, 62.7016f, 81.6876f, 0.3236f, 0f, -149.9406f, 34.8284f, 0.1f, 0, 0, 0, 0, 0);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_3869(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0x1361AD
{
	int iVar0;
	if (BitTest(Global_1946250.f_4, 26))
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	iVar0 = 0;
	if (iParam1 == 2)
	{
		__LIB_3__::func_805(iParam3, 0, 0);
		__LIB_3__::func_805(iParam3, 1, 0);
		__LIB_3__::func_805(iParam3, 5, !Global_262145.f_26913 /* Tunable: VC_PENTHOUSE_DISABLE_TERRACE */);
		__LIB_3__::func_805(iParam3, 6, !Global_262145.f_26913 /* Tunable: VC_PENTHOUSE_DISABLE_TERRACE */);
		__LIB_3__::func_805(iParam3, 7, 1);
		__LIB_7__::func_366(iParam3, 7, func_3532());
		iVar0 = 2;
		if (__LIB_2__::func_380())
		{
			if (__LIB_2__::func_379())
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = 5;
			}
			__LIB_3__::func_805(iParam3, 2, 0);
			__LIB_3__::func_805(iParam3, 3, 0);
			__LIB_3__::func_805(iParam3, 4, __LIB_2__::func_379());
			__LIB_7__::func_366(iParam3, 4, __LIB_2__::func_379());
		}
		else
		{
			__LIB_3__::func_805(iParam3, 2, 1);
			__LIB_7__::func_366(iParam3, 2, __LIB_7__::func_310(1));
			__LIB_3__::func_805(iParam3, 3, !Global_262145.f_26912 /* Tunable: VC_PENTHOUSE_DISABLE_PARKING */);
			__LIB_7__::func_366(iParam3, 3, __LIB_7__::func_310(2));
			__LIB_3__::func_805(iParam3, 4, !Global_262145.f_26910 /* Tunable: VC_PENTHOUSE_DISABLE_GARAGE */);
			__LIB_7__::func_366(iParam3, 4, !Global_262145.f_26910 /* Tunable: VC_PENTHOUSE_DISABLE_GARAGE */);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam3, 2, 0);
		__LIB_3__::func_805(iParam3, 3, 0);
		__LIB_3__::func_805(iParam3, 4, 0);
		__LIB_3__::func_805(iParam3, 6, 0);
		__LIB_3__::func_805(iParam3, 5, 0);
		__LIB_3__::func_805(iParam3, 7, 0);
		__LIB_7__::func_366(iParam3, 7, 0);
	}
	if (iParam3->f_3 != 0 && (iParam3->f_5 < iVar0 || iParam3->f_1 != 1))
	{
		return;
	}
	if (iParam3->f_3 != 0)
	{
		if (iParam1 == 2)
		{
			if (iParam3->f_5 == 2)
			{
				if (__LIB_0__::func_834(PLAYER::PLAYER_ID()))
				{
					__LIB_1__::func_342("CASINO_ENT_F6_H" /* GXT: Go to your Penthouse. */, 0, 0);
				}
				else
				{
					__LIB_1__::func_342("CASINO_BUY_PROP" /* GXT: Purchase the Penthouse from www.thediamondcasinoandresort.com. */, 0, 0);
				}
			}
			else if (iParam3->f_5 == 3)
			{
				if (__LIB_7__::func_310(2))
				{
					__LIB_1__::func_342("CASINO_ENT_F7_H" /* GXT: Go to your Penthouse Garage. */, 0, 0);
				}
				else
				{
					__LIB_1__::func_342("CSNAPT_EXT_F1HC" /* GXT: Purchase the Penthouse Garage from www.thediamondcasinoandresort.com. */, 0, 0);
				}
			}
			else if (iParam3->f_5 == 5)
			{
				__LIB_1__::func_342("CASINO_ENT_F5_H" /* GXT: Exit to the Roof Terrace. */, 0, 0);
			}
			else if (iParam3->f_5 == 6)
			{
				__LIB_1__::func_342("CASINO_ENT_F9_H" /* GXT: Exit to the Roof. */, 0, 0);
			}
			else if (iParam3->f_5 == 7)
			{
				if (__LIB_24__::func_897())
				{
					__LIB_1__::func_342("CAS_CLUB_KICK2" /* GXT: You are temporarily banned from entering The Music Locker due to being thrown out. */, 0, 0);
				}
				else if (BitTest(Global_1946250.f_4523.f_1, 7))
				{
					__LIB_1__::func_342("CAS_CLUB_TMP" /* GXT: The Music Locker is currently full. Please come back later. */, 0, 0);
				}
				else if (__LIB_0__::func_834(PLAYER::PLAYER_ID()))
				{
					__LIB_1__::func_342("CASINO_ENT_F10H" /* GXT: Go to The Music Locker. */, 0, 0);
				}
				else
				{
					__LIB_1__::func_342("CASINO_ENT_F10D" /* GXT: You must own the Penthouse to access The Music Locker from here. */, 0, 0);
				}
			}
			else
			{
				__LIB_1__::func_342("CASINO_ENT_F8_H" /* GXT: Go to the Parking Garage. */, 0, 0);
			}
		}
	}
	else
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	if (__LIB_2__::func_444(0, iParam3) || __LIB_2__::func_444(1, iParam3))
	{
		return;
	}
	else if (__LIB_2__::func_444(2, iParam3))
	{
		__LIB_2__::func_447(0);
		__LIB_2__::func_763(124);
		__LIB_7__::func_394(3);
		__LIB_2__::func_548(1);
	}
	else if (__LIB_2__::func_444(3, iParam3))
	{
		__LIB_2__::func_447(1);
		__LIB_2__::func_763(124);
		__LIB_7__::func_394(4);
		__LIB_2__::func_548(1);
	}
	else if (__LIB_2__::func_444(4, iParam3))
	{
		__LIB_2__::func_763(125);
		__LIB_7__::func_394(0);
		__LIB_2__::func_548(1);
	}
	else if (__LIB_2__::func_444(5, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 8);
		MISC::SET_BIT(&(Global_1946250.f_5), 26);
		if (__LIB_34__::func_490())
		{
			MISC::SET_BIT(&(Global_1946250.f_6), 20);
		}
	}
	else if (__LIB_2__::func_444(6, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 14);
	}
	else if (__LIB_2__::func_444(7, iParam3))
	{
		__LIB_2__::func_763(146);
		__LIB_7__::func_394(1);
		__LIB_2__::func_548(1);
	}
}

void func_3887(var uParam0, var uParam1)//Position - 0x1371C2
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	if (__LIB_2__::func_399() == 0 || __LIB_2__::func_399() == 2)
	{
		if (!__LIB_2__::func_779(PLAYER::PLAYER_ID()) || __LIB_2__::func_380())
		{
			if (!__LIB_2__::func_380())
			{
				if (__LIB_2__::func_192(PLAYER::PLAYER_ID()))
				{
					__LIB_25__::func_303(1, *uParam0);
				}
			}
			if (__LIB_2__::func_192(PLAYER::PLAYER_ID()))
			{
				__LIB_25__::func_303(1, *uParam0);
			}
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_7__::func_396();
			if (__LIB_2__::func_380())
			{
				uParam1->f_1 = 1;
			}
			return;
		}
	}
	if (__LIB_2__::func_380())
	{
		if ((__LIB_2__::func_399() == 3 || __LIB_2__::func_399() == 4) || __LIB_2__::func_399() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_1 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_7__::func_396();
			return;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_3891(uParam0, uParam1);
			break;
		case 4:
			__LIB_7__::func_652(*uParam0, uParam1);
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
	iVar1 = __LIB_2__::func_566();
	bVar0 = iVar1 != 5;
	func_2017(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar2, &bVar3, bVar0, 0);
	sVar7 = __LIB_2__::func_936();
	iVar9 = 0;
	while (iVar9 < 3)
	{
		uVar6[iVar8] = __LIB_4__::func_724(iVar9);
		if (__LIB_2__::func_563(iVar9, bVar2, bVar3))
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
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar7, sVar7);
		__LIB_3__::func_874();
		iVar9 = 0;
		while (iVar9 < iVar8)
		{
			__LIB_25__::func_557(iVar9, uVar6[iVar9], 0, 1, 0, 0, 0);
			iVar9++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_2__::func_566() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			__LIB_7__::func_396();
			if ((__LIB_2__::func_399() == 1 || __LIB_2__::func_399() == 3) || __LIB_2__::func_399() == 4)
			{
				__LIB_2__::func_924();
			}
			else
			{
				uParam1->f_10 = 1;
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_25__::func_303(iVar5[uParam0->f_4], 123);
			}
		}
		else if (__LIB_2__::func_566() == 5)
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_7__::func_396();
			__LIB_2__::func_932(*uParam0, 146);
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_25__::func_303(iVar5[uParam0->f_4], 146);
			}
		}
		else
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_7__::func_396();
			__LIB_2__::func_932(*uParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
			if (__LIB_2__::func_566() == 3)
			{
				__LIB_2__::func_924();
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_25__::func_303(iVar5[uParam0->f_4], 124);
			}
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_7__::func_396();
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
	sVar4 = __LIB_2__::func_936();
	if (__LIB_2__::func_399() == 0)
	{
		uVar0 = __LIB_7__::func_491(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	else
	{
		uVar0 = func_3896(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	if (uParam0->f_5 || uVar0)
	{
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar4, sVar4);
		__LIB_3__::func_874();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_25__::func_557(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		if (__LIB_2__::func_399() == 0)
		{
			__LIB_1__::func_342(__LIB_2__::func_986(uVar1[iVar7], iVar7), 0, 0);
		}
		else
		{
			__LIB_1__::func_342(__LIB_28__::func_998(uVar1[iVar7], iVar7), 0, 0);
		}
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (__LIB_2__::func_399() == 0)
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
			__LIB_2__::func_565(1);
		}
		else
		{
			uParam3->f_8 = 1;
			uParam3->f_6 = 1;
			uParam3->f_11 = 10;
			uParam3->f_1 = 1;
			__LIB_2__::func_924();
		}
	}
	else if (iParam1 == 1)
	{
		__LIB_2__::func_447(0);
		if (func_3709(iParam0, 0, 0))
		{
			__LIB_2__::func_565(2);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
		}
	}
	else if (iParam1 == 4)
	{
		if (func_3709(iParam0, 1, 0))
		{
			__LIB_2__::func_565(5);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 146);
		}
	}
	else if (iParam1 == 3)
	{
		__LIB_2__::func_565(4);
		__LIB_2__::func_924();
	}
	else
	{
		__LIB_2__::func_447(1);
		if (func_3709(iParam0, 0, 0))
		{
			__LIB_2__::func_565(3);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
			__LIB_2__::func_924();
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
			__LIB_2__::func_565(1);
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
		__LIB_2__::func_447(0);
		if (func_3709(iParam0, 0, 0))
		{
			__LIB_2__::func_565(2);
			*uParam2 = 1;
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
		}
	}
}

bool func_3896(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x13792A
{
	int iVar0;
	bool bVar1;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_2__::func_988(iVar0))
		{
			(*uParam2)[iVar0] = "";
			(*uParam0)[iVar0] = 0;
			(*uParam1)[iVar0] = 0;
			if (!MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar0 /*6*/]), (*uParam2)[iVar0]))
			{
				bVar1 = true;
			}
		}
		else
		{
			(*uParam2)[iVar0] = __LIB_2__::func_987(iVar0);
			(*uParam0)[iVar0] = func_3897(iVar0);
			(*uParam1)[iVar0] = (*uParam0)[iVar0];
			if (!bVar1 && (Global_23150.f_1616[iVar0] != (*uParam1)[iVar0] || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar0 /*6*/]), (*uParam2)[iVar0])))
			{
				bVar1 = true;
			}
			*uParam3++;
		}
		iVar0++;
	}
	return bVar1;
}

int func_3897(int iParam0)//Position - 0x1379EB
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return __LIB_0__::func_834(PLAYER::PLAYER_ID());
		case 2:
			return __LIB_0__::func_833(PLAYER::PLAYER_ID());
		case 3:
			return 1;
		case 4:
			return func_3532();
		default:
	}
	return 0;
}

int func_3911(var uParam0, var uParam1, var uParam2)//Position - 0x137F6D
{
	int iVar0;
	if ((uParam0->f_1 == 2 && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_3912(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_3912(int iParam0)//Position - 0x137FB2
{
	if (__LIB_0__::func_121(iParam0))
	{
		if (!__LIB_0__::func_657(iParam0, 0) || __LIB_6__::func_407(iParam0) != PLAYER::PLAYER_ID())
		{
			return 0;
		}
		if (!__LIB_29__::func_31(123, ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			return 0;
		}
	}
	return 1;
}

void func_3936(var uParam0, int iParam1)//Position - 0x138C62
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1316678/*func_4102*/;
			break;
		case 111:
			uParam0->f_35 = 1316664/*func_4101*/;
			break;
		case 1:
			uParam0->f_30 = 1316565/*func_4100*/;
			break;
		case 2:
			uParam0->f_31 = 1315503/*func_4096*/;
			break;
		case 3:
			uParam0->f_34 = 1315349/*func_4095*/;
			break;
		case 4:
			uParam0->f_12 = 1315296/*func_4093*/;
			break;
		case 5:
			uParam0->f_11 = 1315241/*func_4092*/;
			break;
		case 37:
			uParam0->f_18 = 1315123/*func_4091*/;
			break;
		case 38:
			uParam0->f_9 = 1314991/*func_4087*/;
			break;
		case 6:
			uParam0->f_32 = 1314876/*func_4086*/;
			break;
		case 11:
			uParam0->f_11 = 1314866/*func_4085*/;
			break;
		case 12:
			uParam0->f_33 = 1313697/*func_4080*/;
			break;
		case 14:
			uParam0->f_11 = 1313688/*func_4079*/;
			break;
		case 109:
			uParam0->f_56 = 1312358/*func_4078*/;
			break;
		case 8:
			uParam0->f_37 = 1312314/*func_4077*/;
			break;
		case 7:
			uParam0->f_36 = 1312291/*func_4076*/;
			break;
		case 79:
			*uParam0 = 1312267/*func_4075*/;
			break;
		case 13:
			uParam0->f_2 = 1312204/*func_4074*/;
			break;
		case 15:
			uParam0->f_2 = 1312124/*func_4073*/;
			break;
		case 16:
			uParam0->f_5 = 1311481/*func_4069*/;
			break;
		case 108:
			uParam0->f_55 = 1308338/*func_4056*/;
			break;
		case 17:
			uParam0->f_17 = 1307634/*func_4055*/;
			break;
		case 19:
			uParam0->f_17 = 1307608/*func_4054*/;
			break;
		case 20:
			uParam0->f_3 = 1307429/*func_4053*/;
			break;
		case 21:
			uParam0->f_3 = 1307365/*func_4052*/;
			break;
		case 74:
			uParam0->f_53 = 1307151/*func_4051*/;
			break;
		case 75:
			uParam0->f_4 = 1307135/*func_4050*/;
			break;
		case 22:
			uParam0->f_24 = 1307028/*func_4049*/;
			break;
		case 23:
			uParam0->f_26 = 1306981/*func_4048*/;
			break;
		case 24:
			uParam0->f_26 = 1306944/*func_4047*/;
			break;
		case 26:
			uParam0->f_38 = 1306114/*func_4040*/;
			break;
		case 25:
			uParam0->f_23 = 1305748/*func_4037*/;
			break;
		case 27:
			uParam0->f_25 = 1305366/*func_4035*/;
			break;
		case 28:
			uParam0->f_24 = 1305315/*func_4034*/;
			break;
		case 29:
			uParam0->f_28 = 1305307/*func_4033*/;
			break;
		case 30:
			uParam0->f_8 = 1305070/*func_4029*/;
			break;
		case 31:
			uParam0->f_39 = 1304949/*func_4028*/;
			break;
		case 33:
			uParam0->f_40 = 1304529/*func_4027*/;
			break;
		case 34:
			uParam0->f_41 = 1293234/*func_4013*/;
			break;
		case 36:
			uParam0->f_58 = 1293189/*func_4012*/;
			break;
		case 35:
			uParam0->f_42 = 1290102/*func_4009*/;
			break;
		case 45:
			uParam0->f_14 = 1290093/*func_4008*/;
			break;
		case 46:
			uParam0->f_14 = 1290084/*func_4007*/;
			break;
		case 110:
			uParam0->f_57 = 1290076/*func_4006*/;
			break;
		case 77:
			uParam0->f_13 = 1290027/*func_4005*/;
			break;
		case 47:
			uParam0->f_43 = 1289945/*func_4004*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1289181/*func_3997*/;
			break;
		case 49:
			uParam0->f_8 = 1289134/*func_3996*/;
			break;
		case 50:
			*uParam0 = 1289075/*func_3995*/;
			break;
		case 51:
			*uParam0 = 1288843/*func_3992*/;
			break;
		case 52:
			uParam0->f_15 = 1288832/*func_3991*/;
			break;
		case 53:
			uParam0->f_13 = 1288790/*func_3990*/;
			break;
		case 54:
			uParam0->f_45 = 1288782/*func_3989*/;
			break;
		case 56:
			uParam0->f_46 = 1288773/*func_3988*/;
			break;
		case 57:
			uParam0->f_11 = 1288764/*func_3987*/;
			break;
		case 58:
			uParam0->f_13 = 1288722/*func_3986*/;
			break;
		case 59:
			*uParam0 = 1288713/*func_3985*/;
			break;
		case 60:
			*uParam0 = 1288704/*func_3984*/;
			break;
		case 61:
			uParam0->f_15 = 1288693/*func_3983*/;
			break;
		case 62:
			uParam0->f_13 = 1288651/*func_3982*/;
			break;
		case 63:
			uParam0->f_11 = 1288642/*func_3981*/;
			break;
		case 64:
			uParam0->f_47 = 1288634/*func_3980*/;
			break;
		case 65:
			uParam0->f_21 = 1287572/*func_3977*/;
			break;
		case 66:
			uParam0->f_21 = 1287269/*func_3976*/;
			break;
		case 67:
			uParam0->f_21 = 1287155/*func_3975*/;
			break;
		case 68:
			*uParam0 = 1286312/*func_3974*/;
			break;
		case 69:
			*uParam0 = 1286303/*func_3973*/;
			break;
		case 70:
			uParam0->f_48 = 1286230/*func_3972*/;
			break;
		case 71:
			uParam0->f_49 = 1286221/*func_3971*/;
			break;
		case 107:
			uParam0->f_50 = 1286209/*func_3970*/;
			break;
		case 80:
			uParam0->f_7 = 1286007/*func_3969*/;
			break;
		case 84:
			uParam0->f_1 = 1285998/*func_3968*/;
			break;
		case 85:
			uParam0->f_1 = 1284265/*func_3955*/;
			break;
		case 87:
			uParam0->f_1 = 1282810/*func_3947*/;
			break;
		case 88:
			uParam0->f_1 = 1282801/*func_3946*/;
			break;
		case 89:
			uParam0->f_54 = 1282793/*func_3945*/;
			break;
		case 96:
			uParam0->f_1 = 1282784/*func_3944*/;
			break;
		case 97:
			uParam0->f_1 = 1282775/*func_3943*/;
			break;
		case 98:
			uParam0->f_1 = 1282766/*func_3942*/;
			break;
		case 100:
			uParam0->f_22 = 1282758/*func_3941*/;
			break;
		case 101:
			uParam0->f_22 = 1282750/*func_3940*/;
			break;
		case 78:
			uParam0->f_59 = 1282578/*func_3938*/;
			break;
		case 125:
			uParam0->f_19 = 1282545/*func_3937*/;
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
	if (__LIB_18__::func_483())
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
			__LIB_2__::func_416(&(uParam1->f_109));
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
		Var1 = { __LIB_3__::func_10(iParam0, __LIB_2__::func_399()) };
		Var2 = { __LIB_3__::func_9(iParam0, __LIB_2__::func_399()) };
		uVar3 = __LIB_3__::func_6(iParam0, __LIB_2__::func_399());
		Var4 = { __LIB_3__::func_8(iParam0, __LIB_2__::func_399()) };
		Var5 = { __LIB_3__::func_7(iParam0, __LIB_2__::func_399()) };
		uVar6 = __LIB_3__::func_6(iParam0, __LIB_2__::func_399());
		Var7 = { __LIB_3__::func_5(iParam0, __LIB_2__::func_399()) };
		Var8 = { __LIB_3__::func_4(iParam0, __LIB_2__::func_399()) };
		uVar9 = __LIB_3__::func_1(iParam0, __LIB_2__::func_399());
		Var10 = { __LIB_3__::func_3(iParam0, __LIB_2__::func_399()) };
		Var11 = { __LIB_3__::func_2(iParam0, __LIB_2__::func_399()) };
		uVar12 = __LIB_3__::func_1(iParam0, __LIB_2__::func_399());
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
		return __LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var2, uVar3, Var4, Var5, uVar6, bVar13, Var7, Var8, uVar9, Var10, Var11, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_4037(int iParam0, int iParam1)//Position - 0x13EC94
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_33(iParam0) };
	if (__LIB_7__::func_499(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2017(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_948(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_948(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_923(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_923(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_4040(var uParam0, var uParam1)//Position - 0x13EE02
{
	if (__LIB_2__::func_710(PLAYER::PLAYER_ID()))
	{
		func_4041(uParam0, uParam1);
	}
}

void func_4041(var uParam0, var uParam1)//Position - 0x13EE20
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_572(uParam0, uParam1);
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
		__LIB_7__::func_396();
		if (!__LIB_3__::func_32())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_32())
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
			__LIB_1__::func_319("ARENA_ENT_T" /* GXT: ARENA WORKSHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_7__::func_396();
		}
	}
}

void func_4103(var uParam0, int iParam1)//Position - 0x14174F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1407188/*func_4235*/;
			break;
		case 1:
			uParam0->f_30 = 1407132/*func_4234*/;
			break;
		case 2:
			uParam0->f_31 = 1406788/*func_4233*/;
			break;
		case 3:
			uParam0->f_34 = 1406749/*func_4232*/;
			break;
		case 4:
			uParam0->f_12 = 1406715/*func_4231*/;
			break;
		case 5:
			uParam0->f_11 = 1406704/*func_4230*/;
			break;
		case 6:
			uParam0->f_32 = 1406640/*func_4229*/;
			break;
		case 111:
			uParam0->f_35 = 1406617/*func_4228*/;
			break;
		case 79:
			*uParam0 = 1406593/*func_4227*/;
			break;
		case 37:
			uParam0->f_18 = 1406475/*func_4226*/;
			break;
		case 38:
			uParam0->f_9 = 1406396/*func_4225*/;
			break;
		case 11:
			uParam0->f_11 = 1406387/*func_4224*/;
			break;
		case 12:
			uParam0->f_33 = 1405791/*func_4221*/;
			break;
		case 109:
			uParam0->f_56 = 1405783/*func_4220*/;
			break;
		case 15:
			uParam0->f_2 = 1400621/*func_4196*/;
			break;
		case 13:
			uParam0->f_2 = 1400612/*func_4195*/;
			break;
		case 75:
			uParam0->f_4 = 1400597/*func_4194*/;
			break;
		case 16:
			uParam0->f_5 = 1400122/*func_4190*/;
			break;
		case 108:
			uParam0->f_55 = 1396634/*func_4176*/;
			break;
		case 17:
			uParam0->f_17 = 1395855/*func_4175*/;
			break;
		case 19:
			uParam0->f_17 = 1395829/*func_4174*/;
			break;
		case 20:
			uParam0->f_3 = 1395618/*func_4173*/;
			break;
		case 21:
			uParam0->f_3 = 1395455/*func_4172*/;
			break;
		case 74:
			uParam0->f_53 = 1394846/*func_4169*/;
			break;
		case 22:
			uParam0->f_24 = 1394761/*func_4168*/;
			break;
		case 25:
			uParam0->f_23 = 1393845/*func_4165*/;
			break;
		case 30:
			uParam0->f_8 = 1392871/*func_4159*/;
			break;
		case 31:
			uParam0->f_39 = 1392193/*func_4155*/;
			break;
		case 33:
			uParam0->f_40 = 1391350/*func_4153*/;
			break;
		case 14:
			uParam0->f_11 = 1391341/*func_4152*/;
			break;
		case 34:
			uParam0->f_41 = 1390566/*func_4149*/;
			break;
		case 36:
			uParam0->f_58 = 1390513/*func_4148*/;
			break;
		case 35:
			uParam0->f_42 = 1322226/*func_4139*/;
			break;
		case 45:
			uParam0->f_14 = 1322217/*func_4138*/;
			break;
		case 46:
			uParam0->f_14 = 1322208/*func_4137*/;
			break;
		case 110:
			uParam0->f_57 = 1322200/*func_4136*/;
			break;
		case 77:
			uParam0->f_13 = 1322177/*func_4135*/;
			break;
		case 47:
			uParam0->f_43 = 1322037/*func_4134*/;
			break;
		case 49:
			uParam0->f_8 = 1322002/*func_4133*/;
			break;
		case 50:
			*uParam0 = 1321964/*func_4132*/;
			break;
		case 51:
			*uParam0 = 1321940/*func_4131*/;
			break;
		case 52:
			uParam0->f_15 = 1321929/*func_4130*/;
			break;
		case 53:
			uParam0->f_13 = 1321850/*func_4129*/;
			break;
		case 54:
			uParam0->f_45 = 1321842/*func_4128*/;
			break;
		case 56:
			uParam0->f_46 = 1321833/*func_4127*/;
			break;
		case 57:
			uParam0->f_11 = 1321823/*func_4126*/;
			break;
		case 58:
			uParam0->f_13 = 1321534/*func_4125*/;
			break;
		case 64:
			uParam0->f_47 = 1320154/*func_4119*/;
			break;
		case 65:
			uParam0->f_21 = 1319191/*func_4116*/;
			break;
		case 66:
			uParam0->f_21 = 1318996/*func_4115*/;
			break;
		case 67:
			uParam0->f_21 = 1318893/*func_4114*/;
			break;
		case 68:
			*uParam0 = 1318204/*func_4113*/;
			break;
		case 69:
			*uParam0 = 1318195/*func_4112*/;
			break;
		case 70:
			uParam0->f_48 = 1318183/*func_4111*/;
			break;
		case 71:
			uParam0->f_49 = 1318174/*func_4110*/;
			break;
		case 107:
			uParam0->f_50 = 1318162/*func_4109*/;
			break;
		case 80:
			uParam0->f_7 = 1317825/*func_4107*/;
			break;
		case 73:
			uParam0->f_51 = 1317816/*func_4106*/;
			break;
		case 78:
			uParam0->f_59 = 1317699/*func_4104*/;
			break;
	}
}

void func_4119(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1424DA
{
	int iVar0;
	iVar0 = __LIB_8__::func_321();
	if (!__LIB_3__::func_902(PLAYER::PLAYER_ID(), 0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!__LIB_1__::func_229(__LIB_7__::func_296(iVar0, 1, 0)))
			{
				__LIB_39__::func_305(uParam0, iVar0);
			}
		}
	}
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (__LIB_0__::func_1("BB_TRUCK_SUTAR" /* GXT: You are unable to access the Nerve Center in this area. Move the Terrorbyte to a suitable area. */))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_2__::func_465(PLAYER::PLAYER_PED_ID(), 1))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_2__::func_278(uParam0->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_7__::func_249(&(uParam0->f_22.f_94));
			}
		}
	}
}

void func_4153(int iParam0, int iParam1)//Position - 0x153AF6
{
	int iVar0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = __LIB_0__::func_160();
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_8 = 0;
	Global_1946250.f_506 = 0;
	iVar0 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
	if ((Global_1946250.f_3280 != -1 && Global_1946250.f_3280 != PLAYER::PLAYER_ID()) && !__LIB_2__::func_731(PLAYER::PLAYER_ID()))
	{
		__LIB_18__::func_910(iVar0, 1);
		MISC::SET_BIT(&(Global_1946250.f_506), 1);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
	}
	else if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0) && !__LIB_2__::func_731(PLAYER::PLAYER_ID()))
	{
		__LIB_18__::func_910(iVar0, 0);
		if (iVar0 != __LIB_0__::func_160())
		{
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = iVar0;
		}
	}
	else if (__LIB_2__::func_731(PLAYER::PLAYER_ID()))
	{
		__LIB_18__::func_910(iVar0, 1);
		MISC::SET_BIT(&(Global_1946250.f_506), 1);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1946250.f_3630;
	}
	else if ((__LIB_3__::func_61(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == __LIB_34__::func_621(0)) || (Global_1946250.f_3280 == PLAYER::PLAYER_ID() && __LIB_3__::func_61(PLAYER::PLAYER_ID())))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
		MISC::SET_BIT(&(Global_1946250.f_506), 0);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = PLAYER::PLAYER_ID();
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_229(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
		{
			Global_1946250.f_3635 = __LIB_1__::func_230(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9);
			MISC::SET_BIT(&(Global_1946250.f_506), 13);
		}
	}
	if ((__LIB_4__::func_973(1) && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != PLAYER::PLAYER_ID()) && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__::func_160())
	{
		if (!__LIB_4__::func_682(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, 1) || !__LIB_2__::func_457(PLAYER::PLAYER_ID(), Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
		{
			MISC::SET_BIT(&(Global_1946250.f_506), 14);
		}
	}
	__LIB_7__::func_369();
}

char* func_4155(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x153E41
{
	int iVar0;
	if ((Global_2815059.f_319 || Global_2815059.f_318) || Global_2815059.f_317)
	{
		return "";
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__::func_160())
	{
		if (__LIB_3__::func_64(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
		{
			if (PLAYER::PLAYER_ID() == Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9)
			{
				return "MP_HACK_ORENOV" /* GXT: Your renovated Terrorbyte is now available. */;
			}
			else
			{
				return "MP_HACK_RENOV" /* GXT: The owner has renovated the Terrorbyte. */;
			}
		}
	}
	if (BitTest(Global_1946250.f_506, 7))
	{
		return "BB_TRUCK_KICKi" /* GXT: You no longer have access to the Nerve Center as the owner has left the game. */;
	}
	if (BitTest(Global_1946250.f_506, 0))
	{
		if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
		{
			iVar0 = __LIB_0__::func_582();
			if (__LIB_18__::func_185(PLAYER::PLAYER_ID(), 0))
			{
				return "BB_TRUCK_KICKd" /* GXT: You no longer have access to the Nerve Center as you became a Prospect. */;
			}
			else if (iVar0 != __LIB_0__::func_160() && __LIB_2__::func_456(iVar0))
			{
				return "BB_TRUCK_KICKa" /* GXT: You no longer have access to the Nerve Center as you became an Associate. */;
			}
			else
			{
				return "BB_TRUCK_KICKb" /* GXT: You no longer have access to the Nerve Center as you became a Bodyguard. */;
			}
		}
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__::func_160())
	{
		if ((BitTest(Global_1946250.f_506, 8) || (__LIB_3__::func_63(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9) && PLAYER::PLAYER_ID() != Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9)) || (Global_1946250.f_3366 && !BitTest(Global_1946250.f_506, 0)))
		{
			if ((!Global_2815059.f_319 && !Global_2815059.f_318) && !BitTest(Global_2689235[Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 /*453*/].f_318.f_3, 7))
			{
				if (__LIB_0__::func_121(__LIB_3__::func_62()) && Global_1853193 == __LIB_34__::func_621(__LIB_3__::func_62()))
				{
					return "BB_TRUCK_KICKc" /* GXT: Owner has requested all to leave the Nerve Center. */;
				}
				else
				{
					return "MP_HTRUCK_DEST" /* GXT: The Terrorbyte has been destroyed and returned to the Nightclub Warehouse. */;
				}
			}
		}
		if (BitTest(Global_2689235[Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 /*453*/].f_318.f_3, 7))
		{
			return "MP_HTRUCK_DEST" /* GXT: The Terrorbyte has been destroyed and returned to the Nightclub Warehouse. */;
		}
	}
	return "";
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
	if (func_4173(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iVar7)) && !__LIB_1__::func_425(iVar7, 1)) && !__LIB_7__::func_291(iVar7)) && !__LIB_2__::func_509(iVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iVar7))) && !__LIB_1__::func_425(iVar7, 1)) && !__LIB_7__::func_291(iVar7)) && !__LIB_2__::func_509(iVar7, 14))
						{
							bVar1 = true;
						}
						if ((!bVar1 && __LIB_25__::func_305(PLAYER::PLAYER_ID())) && __LIB_2__::func_457(iVar7, PLAYER::PLAYER_ID()))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						func_4153(iParam0, -1);
					}
					bVar9 = __LIB_1__::func_229(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						func_4153(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_465(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_3__::func_903(PLAYER::PLAYER_ID()))
						{
							func_4166(iParam0);
						}
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_465(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_3__::func_903(PLAYER::PLAYER_ID()))
						{
							func_4166(iParam0);
						}
					}
					Jump @693; //curOff = 674
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_4166(int iParam0)//Position - 0x15476D
{
	func_4153(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

int func_4173(int iParam0, var uParam1)//Position - 0x154BA2
{
	int iVar0;
	if (__LIB_25__::func_305(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_4__::func_682(iParam0, 1) || !__LIB_2__::func_457(iParam0, PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	iVar0 = __LIB_34__::func_621(0);
	if (__LIB_3__::func_61(PLAYER::PLAYER_ID()) && (BitTest(Global_1946250.f_506, 0) || iVar0 == PLAYER::PLAYER_ID()))
	{
		if (Global_1946250.f_3280 == -1)
		{
			return 1;
		}
	}
	if (Global_1946250.f_3280 == -1)
	{
		if ((__LIB_3__::func_61(PLAYER::PLAYER_ID()) && !__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0)) || (BitTest(Global_1946250.f_506, 0) || iVar0 == PLAYER::PLAYER_ID()))
		{
			if (__LIB_1__::func_425(iParam0, 0) && !__LIB_2__::func_457(iParam0, PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

char* func_4175(var uParam0, var uParam1, var uParam2)//Position - 0x154C8F
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__::func_288())
	{
		return "";
	}
	if (__LIB_7__::func_373())
	{
		return "SI_ENTR_BLCK13A" /* GXT: You cannot enter the Nerve Center while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	if (BitTest(Global_1946250.f_4523, 12))
	{
		if (__LIB_4__::func_730(PLAYER::PLAYER_ID(), 240))
		{
			return "CAS_BLOCK_HAC" /* GXT: You cannot enter the rear of the Terrorbyte while holding the security case. */;
		}
	}
	if (__LIB_1__::func_909())
	{
		if (__LIB_4__::func_730(PLAYER::PLAYER_ID(), 242))
		{
			return "BAN_BLOCK_HAC" /* GXT: You cannot enter the rear of the Terrorbyte while holding the gold. */;
		}
		else if (__LIB_4__::func_730(PLAYER::PLAYER_ID(), 241))
		{
			return "JEW_BLOCK_HAC" /* GXT: You cannot enter the rear of the Terrorbyte while holding the diamonds. */;
		}
		else if (__LIB_4__::func_730(PLAYER::PLAYER_ID(), 240))
		{
			return "CAS_BLOCK_HAC" /* GXT: You cannot enter the rear of the Terrorbyte while holding the security case. */;
		}
		else if (__LIB_4__::func_730(PLAYER::PLAYER_ID(), 239))
		{
			return "VAN_BLOCK_HAC" /* GXT: You cannot enter the rear of the Terrorbyte while holding the antiques. */;
		}
	}
	iVar0 = __LIB_34__::func_621(0);
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) && PLAYER::PLAYER_ID() == iVar0)
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if ((!__LIB_0__::func_655(iVar1, 1) && !VEHICLE::IS_VEHICLE_MODEL(iVar1, joaat("caddy2"))) && !VEHICLE::IS_VEHICLE_MODEL(iVar1, joaat("caddy3")))
		{
			if (__LIB_0__::func_657(iVar1, 1))
			{
			}
		}
	}
	if (BitTest(Global_1946250.f_506, 0))
	{
		if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
		{
			iVar2 = __LIB_0__::func_582();
			if (__LIB_18__::func_185(PLAYER::PLAYER_ID(), 0))
			{
				return "BB_TRUCK_KICKd" /* GXT: You no longer have access to the Nerve Center as you became a Prospect. */;
			}
			else if (iVar2 != __LIB_0__::func_160() && __LIB_2__::func_456(iVar2))
			{
				return "BB_TRUCK_KICKa" /* GXT: You no longer have access to the Nerve Center as you became an Associate. */;
			}
			else
			{
				return "BB_TRUCK_KICKb" /* GXT: You no longer have access to the Nerve Center as you became a Bodyguard. */;
			}
		}
	}
	if (__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()) && (PLAYER::PLAYER_ID() == iVar0 || __LIB_0__::func_582() == iVar0))
	{
		return "HAC_BLOCK_MOC" /* GXT: You can't access this Nerve Center whilst wearing the Ballistic Equipment. */;
	}
	if (__LIB_2__::func_104())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor2")))
		{
		}
		else
		{
			return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
		}
	}
	if (__LIB_2__::func_475() && !__LIB_2__::func_297(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor2")))
		{
		}
		else
		{
			return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
		}
	}
	if (__LIB_2__::func_477())
	{
		return "HAC_MC_BLOCK_P" /* GXT: You cannot enter your Nerve Center with a prostitute. */;
	}
	if (__LIB_1__::func_205(PLAYER::PLAYER_ID()) == 3)
	{
		return "SUP_BLOCK_HAC" /* GXT: You can't access this Nerve Center whilst carrying Supplies. */;
	}
	if (__LIB_0__::func_740(PLAYER::PLAYER_ID()) || __LIB_7__::func_268(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor2")))
		{
		}
		else
		{
			return "HACK_MC_BLOCK_E" /* GXT: You cannot enter your Nerve Center while active in a mission. */;
		}
	}
	if (Global_1835493 != 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("terbyte")) && !__LIB_0__::func_657(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
			{
				return "HAC_MC_BLOCK_V" /* GXT: You cannot enter your Nerve Center while in a mission vehicle. */;
			}
		}
	}
	if (BitTest(Global_1946250.f_2, 30))
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!__LIB_2__::func_465(PLAYER::PLAYER_PED_ID(), 1) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				return "BB_TRUCK_SUTAR" /* GXT: You are unable to access the Nerve Center in this area. Move the Terrorbyte to a suitable area. */;
			}
		}
	}
	return "";
}

int func_4190(int iParam0, var uParam1, var uParam2)//Position - 0x155D3A
{
	int iVar0;
	int iVar1;
	if (__LIB_3__::func_60() || __LIB_3__::func_74(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (__LIB_2__::func_465(PLAYER::PLAYER_PED_ID(), 1))
	{
		return 0;
	}
	if (Global_1835491)
	{
		return 0;
	}
	if (__LIB_2__::func_742(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (__LIB_0__::func_121(iVar0))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("terbyte")))
			{
				if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 1) && __LIB_0__::func_582() == __LIB_7__::func_296(iVar0, 1, 0))
				{
					return 1;
				}
			}
		}
		iVar1 = __LIB_34__::func_621(0);
		if (!VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("terbyte")))
		{
			if (!__LIB_7__::func_509(iVar0, iVar1) || iVar1 != iParam0)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_4236(var uParam0, int iParam1)//Position - 0x1578DD
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1469576/*func_4447*/;
			break;
		case 1:
			uParam0->f_30 = 1469336/*func_4445*/;
			break;
		case 2:
			uParam0->f_31 = 1467035/*func_4439*/;
			break;
		case 3:
			uParam0->f_34 = 1466826/*func_4438*/;
			break;
		case 4:
			uParam0->f_12 = 1466620/*func_4436*/;
			break;
		case 5:
			uParam0->f_11 = 1466542/*func_4435*/;
			break;
		case 37:
			uParam0->f_18 = 1466403/*func_4434*/;
			break;
		case 38:
			uParam0->f_9 = 1466347/*func_4433*/;
			break;
		case 42:
			uParam0->f_10 = 1466310/*func_4432*/;
			break;
		case 6:
			uParam0->f_32 = 1466074/*func_4431*/;
			break;
		case 111:
			uParam0->f_35 = 1466060/*func_4430*/;
			break;
		case 11:
			uParam0->f_11 = 1466051/*func_4429*/;
			break;
		case 12:
			uParam0->f_33 = 1462681/*func_4420*/;
			break;
		case 14:
			uParam0->f_11 = 1462672/*func_4419*/;
			break;
		case 109:
			uParam0->f_56 = 1448755/*func_4418*/;
			break;
		case 79:
			*uParam0 = 1448499/*func_4414*/;
			break;
		case 13:
			uParam0->f_2 = 1448450/*func_4413*/;
			break;
		case 15:
			uParam0->f_2 = 1448239/*func_4410*/;
			break;
		case 44:
			*uParam0 = 1448230/*func_4409*/;
			break;
		case 75:
			uParam0->f_4 = 1448201/*func_4408*/;
			break;
		case 16:
			uParam0->f_5 = 1447515/*func_4406*/;
			break;
		case 108:
			uParam0->f_55 = 1443660/*func_4393*/;
			break;
		case 17:
			uParam0->f_17 = 1442345/*func_4389*/;
			break;
		case 19:
			uParam0->f_17 = 1442300/*func_4388*/;
			break;
		case 20:
			uParam0->f_3 = 1442135/*func_4387*/;
			break;
		case 21:
			uParam0->f_3 = 1442071/*func_4386*/;
			break;
		case 74:
			uParam0->f_53 = 1441844/*func_4385*/;
			break;
		case 22:
			uParam0->f_24 = 1441713/*func_4384*/;
			break;
		case 26:
			uParam0->f_38 = 1438492/*func_4360*/;
			break;
		case 25:
			uParam0->f_23 = 1438171/*func_4358*/;
			break;
		case 27:
			uParam0->f_25 = 1437193/*func_4352*/;
			break;
		case 28:
			uParam0->f_24 = 1437080/*func_4351*/;
			break;
		case 29:
			uParam0->f_28 = 1436999/*func_4350*/;
			break;
		case 30:
			uParam0->f_8 = 1436109/*func_4348*/;
			break;
		case 31:
			uParam0->f_39 = 1435562/*func_4346*/;
			break;
		case 33:
			uParam0->f_40 = 1434880/*func_4344*/;
			break;
		case 32:
			*uParam0 = 1434840/*func_4343*/;
			break;
		case 34:
			uParam0->f_41 = 1425574/*func_4328*/;
			break;
		case 36:
			uParam0->f_58 = 1425516/*func_4327*/;
			break;
		case 35:
			uParam0->f_42 = 1323095/*func_4142*/;
			break;
		case 45:
			uParam0->f_14 = 1425507/*func_4326*/;
			break;
		case 46:
			uParam0->f_14 = 1425498/*func_4325*/;
			break;
		case 110:
			uParam0->f_57 = 1425490/*func_4324*/;
			break;
		case 77:
			uParam0->f_13 = 1425441/*func_4323*/;
			break;
		case 47:
			uParam0->f_43 = 1425148/*func_4322*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1422484/*func_4307*/;
			break;
		case 49:
			uParam0->f_8 = 1422380/*func_4306*/;
			break;
		case 50:
			*uParam0 = 1422097/*func_4305*/;
			break;
		case 51:
			*uParam0 = 1421935/*func_4304*/;
			break;
		case 52:
			uParam0->f_15 = 1421924/*func_4303*/;
			break;
		case 53:
			uParam0->f_13 = 1421666/*func_4302*/;
			break;
		case 54:
			uParam0->f_45 = 1421404/*func_4301*/;
			break;
		case 56:
			uParam0->f_46 = 1421395/*func_4300*/;
			break;
		case 57:
			uParam0->f_11 = 1420238/*func_4293*/;
			break;
		case 58:
			uParam0->f_13 = 1419980/*func_4292*/;
			break;
		case 59:
			*uParam0 = 1419701/*func_4289*/;
			break;
		case 60:
			*uParam0 = 1419692/*func_4288*/;
			break;
		case 61:
			uParam0->f_15 = 1419681/*func_4287*/;
			break;
		case 62:
			uParam0->f_13 = 1419423/*func_4286*/;
			break;
		case 55:
			uParam0->f_45 = 1419415/*func_4285*/;
			break;
		case 63:
			uParam0->f_11 = 1419357/*func_4284*/;
			break;
		case 64:
			uParam0->f_47 = 1419207/*func_4283*/;
			break;
		case 65:
			uParam0->f_21 = 1417501/*func_4276*/;
			break;
		case 66:
			uParam0->f_21 = 1417190/*func_4275*/;
			break;
		case 67:
			uParam0->f_21 = 1417038/*func_4274*/;
			break;
		case 68:
			*uParam0 = 1416078/*func_4272*/;
			break;
		case 69:
			*uParam0 = 1416069/*func_4271*/;
			break;
		case 70:
			uParam0->f_48 = 1415620/*func_4270*/;
			break;
		case 71:
			uParam0->f_49 = 1415341/*func_4269*/;
			break;
		case 107:
			uParam0->f_50 = 1415329/*func_4268*/;
			break;
		case 80:
			uParam0->f_7 = 1415096/*func_4267*/;
			break;
		case 84:
			uParam0->f_1 = 1415087/*func_4266*/;
			break;
		case 85:
			uParam0->f_1 = 1412990/*func_4257*/;
			break;
		case 87:
			uParam0->f_1 = 1410095/*func_4248*/;
			break;
		case 88:
			uParam0->f_1 = 1410086/*func_4247*/;
			break;
		case 89:
			uParam0->f_54 = 1410078/*func_4246*/;
			break;
		case 96:
			uParam0->f_1 = 1410052/*func_4245*/;
			break;
		case 97:
			uParam0->f_1 = 1409942/*func_4244*/;
			break;
		case 98:
			uParam0->f_1 = 1409225/*func_4243*/;
			break;
		case 100:
			uParam0->f_22 = 1409062/*func_4242*/;
			break;
		case 101:
			uParam0->f_22 = 1408932/*func_4241*/;
			break;
		case 78:
			uParam0->f_59 = 1408642/*func_4238*/;
			break;
		case 125:
			uParam0->f_19 = 1408618/*func_4237*/;
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
	__LIB_2__::func_681(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 262144, 0);
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
	iVar0 = __LIB_3__::func_103(iParam0);
	if (__LIB_18__::func_486(iVar0))
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
			__LIB_2__::func_416(&(uParam1->f_109));
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
		Var2 = { __LIB_3__::func_110(iVar0) };
		Var3 = { __LIB_3__::func_109(iVar0) };
		fVar4 = __LIB_3__::func_108(iVar0);
		fVar5 = __LIB_3__::func_107(iVar0);
		bVar6 = false;
		Var7 = { __LIB_3__::func_106(iVar0) };
		Var8 = { __LIB_3__::func_105(iVar0) };
		fVar9 = __LIB_3__::func_104(iVar0);
		return __LIB_25__::func_164(&(Global_1946250.f_3638), Var2, Var3, fVar4, fVar5, bVar6, Var7, Var8, fVar9);
	}
	return 1;
}

void func_4358(int iParam0, int iParam1)//Position - 0x15F1DB
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_82(iParam0) };
	if (__LIB_6__::func_426(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2017(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_25__::func_396(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_25__::func_396(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_25__::func_430(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_25__::func_430(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_4360(var uParam0, var uParam1)//Position - 0x15F31C
{
	if (__LIB_2__::func_399() == 2)
	{
		func_4374(uParam0, uParam1);
	}
	else if (__LIB_2__::func_399() == 0)
	{
		if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_25__::func_432(uParam0, uParam1);
		}
		else
		{
			func_4362(uParam0, uParam1);
		}
	}
	else if (__LIB_2__::func_399() == 3)
	{
		if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_25__::func_432(uParam0, uParam1);
		}
		else
		{
			__LIB_3__::func_157(uParam1);
		}
	}
}

void func_4362(var uParam0, var uParam1)//Position - 0x15F3A7
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_573(uParam0, uParam1);
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
	func_2017(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, __LIB_7__::func_514(PLAYER::PLAYER_ID()), 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_156())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_156())
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
			if (__LIB_2__::func_399() == 2)
			{
				__LIB_1__::func_319("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_319("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_7__::func_396();
		}
	}
}

void func_4374(var uParam0, var uParam1)//Position - 0x15F8FE
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_574(uParam0, uParam1);
			break;
		case 1:
			func_4381(uParam0, uParam1);
			break;
		case 2:
			__LIB_35__::func_822(uParam0, uParam1);
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
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_7__::func_396();
		if (__LIB_19__::func_53(*uParam0))
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
			if (__LIB_2__::func_399() == 2)
			{
				__LIB_1__::func_319("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_319("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_25__::func_396(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_4448(var uParam0, int iParam1)//Position - 0x166C91
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1477108/*func_4525*/;
			break;
		case 1:
			uParam0->f_30 = 1477052/*func_4524*/;
			break;
		case 2:
			uParam0->f_31 = 1476783/*func_4523*/;
			break;
		case 3:
			uParam0->f_34 = 1476722/*func_4522*/;
			break;
		case 4:
			uParam0->f_12 = 1476691/*func_4521*/;
			break;
		case 6:
			uParam0->f_32 = 1476627/*func_4520*/;
			break;
		case 111:
			uParam0->f_35 = 1476618/*func_4519*/;
			break;
		case 11:
			uParam0->f_11 = 1476609/*func_4518*/;
			break;
		case 14:
			uParam0->f_11 = 1476600/*func_4517*/;
			break;
		case 12:
			uParam0->f_33 = 1476389/*func_4515*/;
			break;
		case 109:
			uParam0->f_56 = 1476381/*func_4514*/;
			break;
		case 79:
			*uParam0 = 1476357/*func_4513*/;
			break;
		case 13:
			uParam0->f_2 = 1476348/*func_4512*/;
			break;
		case 15:
			uParam0->f_2 = 1475404/*func_4505*/;
			break;
		case 75:
			uParam0->f_4 = 1475395/*func_4504*/;
			break;
		case 16:
			uParam0->f_5 = 1475370/*func_4503*/;
			break;
		case 108:
			uParam0->f_55 = 1475361/*func_4502*/;
			break;
		case 17:
			uParam0->f_17 = 1475335/*func_4501*/;
			break;
		case 19:
			uParam0->f_17 = 1475324/*func_4500*/;
			break;
		case 20:
			uParam0->f_3 = 1475315/*func_4499*/;
			break;
		case 21:
			uParam0->f_3 = 1475306/*func_4498*/;
			break;
		case 74:
			uParam0->f_53 = 1474838/*func_4495*/;
			break;
		case 22:
			uParam0->f_24 = 1474715/*func_4494*/;
			break;
		case 25:
			uParam0->f_23 = 1473943/*func_4490*/;
			break;
		case 30:
			uParam0->f_8 = 1473797/*func_4488*/;
			break;
		case 31:
			uParam0->f_39 = 1473786/*func_4487*/;
			break;
		case 33:
			uParam0->f_40 = 1473579/*func_4485*/;
			break;
		case 34:
			uParam0->f_41 = 1473262/*func_4483*/;
			break;
		case 36:
			uParam0->f_58 = 1473209/*func_4482*/;
			break;
		case 35:
			uParam0->f_42 = 1472436/*func_4479*/;
			break;
		case 45:
			uParam0->f_14 = 1472427/*func_4478*/;
			break;
		case 46:
			uParam0->f_14 = 1472418/*func_4477*/;
			break;
		case 110:
			uParam0->f_57 = 1472410/*func_4476*/;
			break;
		case 77:
			uParam0->f_13 = 1472399/*func_4475*/;
			break;
		case 47:
			uParam0->f_43 = 1472160/*func_4473*/;
			break;
		case 49:
			uParam0->f_8 = 1472151/*func_4472*/;
			break;
		case 50:
			*uParam0 = 1472142/*func_4471*/;
			break;
		case 51:
			*uParam0 = 1472133/*func_4470*/;
			break;
		case 52:
			uParam0->f_15 = 1472122/*func_4469*/;
			break;
		case 53:
			uParam0->f_13 = 1472111/*func_4468*/;
			break;
		case 54:
			uParam0->f_45 = 1472103/*func_4467*/;
			break;
		case 56:
			uParam0->f_46 = 1472094/*func_4466*/;
			break;
		case 57:
			uParam0->f_11 = 1472085/*func_4465*/;
			break;
		case 58:
			uParam0->f_13 = 1471792/*func_4463*/;
			break;
		case 64:
			uParam0->f_47 = 1471248/*func_4460*/;
			break;
		case 65:
			uParam0->f_21 = 1471240/*func_4459*/;
			break;
		case 66:
			uParam0->f_21 = 1471172/*func_4458*/;
			break;
		case 67:
			uParam0->f_21 = 1471032/*func_4456*/;
			break;
		case 68:
			*uParam0 = 1470588/*func_4455*/;
			break;
		case 69:
			*uParam0 = 1470579/*func_4454*/;
			break;
		case 70:
			uParam0->f_48 = 1470567/*func_4453*/;
			break;
		case 71:
			uParam0->f_49 = 1470558/*func_4452*/;
			break;
		case 107:
			uParam0->f_50 = 1470546/*func_4451*/;
			break;
		case 80:
			uParam0->f_7 = 1470537/*func_4450*/;
			break;
		case 78:
			uParam0->f_59 = 1470529/*func_4449*/;
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
		if (__LIB_6__::func_911())
		{
			iVar1 = __LIB_3__::func_808();
		}
		Var4 = { __LIB_19__::func_148(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_267(iVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_425(iVar7, 1) && !__LIB_7__::func_291(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()))
								{
									bVar2 = true;
								}
							}
						}
						if ((((!bVar3 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_7__::func_291(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_2__::func_560())
					{
						__LIB_19__::func_147(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_19__::func_147(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4491(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4491(iParam0);
					}
					Jump @551; //curOff = 532
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_4491(int iParam0)//Position - 0x167FC1
{
	__LIB_19__::func_147(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4526(var uParam0, int iParam1)//Position - 0x1689FD
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1575596/*func_4759*/;
			break;
		case 1:
			uParam0->f_30 = 1575492/*func_4758*/;
			break;
		case 2:
			uParam0->f_31 = 1574757/*func_4756*/;
			break;
		case 3:
			uParam0->f_34 = 1574675/*func_4755*/;
			break;
		case 4:
			uParam0->f_12 = 1574532/*func_4754*/;
			break;
		case 5:
			uParam0->f_11 = 1574522/*func_4753*/;
			break;
		case 37:
			uParam0->f_18 = 1574387/*func_4752*/;
			break;
		case 42:
			uParam0->f_10 = 1574320/*func_4751*/;
			break;
		case 6:
			uParam0->f_32 = 1574208/*func_4750*/;
			break;
		case 111:
			uParam0->f_35 = 1574194/*func_4749*/;
			break;
		case 11:
			uParam0->f_11 = 1574185/*func_4748*/;
			break;
		case 12:
			uParam0->f_33 = 1573685/*func_4745*/;
			break;
		case 14:
			uParam0->f_11 = 1573676/*func_4744*/;
			break;
		case 109:
			uParam0->f_56 = 1573668/*func_4743*/;
			break;
		case 79:
			*uParam0 = 1573644/*func_4742*/;
			break;
		case 38:
			uParam0->f_9 = 1573564/*func_4741*/;
			break;
		case 13:
			uParam0->f_2 = 1573468/*func_4740*/;
			break;
		case 15:
			uParam0->f_2 = 1573263/*func_4739*/;
			break;
		case 75:
			uParam0->f_4 = 1573247/*func_4738*/;
			break;
		case 16:
			uParam0->f_5 = 1572434/*func_4735*/;
			break;
		case 108:
			uParam0->f_55 = 1567782/*func_4719*/;
			break;
		case 17:
			uParam0->f_17 = 1566963/*func_4718*/;
			break;
		case 19:
			uParam0->f_17 = 1566937/*func_4717*/;
			break;
		case 20:
			uParam0->f_3 = 1566853/*func_4716*/;
			break;
		case 21:
			uParam0->f_3 = 1566789/*func_4715*/;
			break;
		case 74:
			uParam0->f_53 = 1566637/*func_4714*/;
			break;
		case 22:
			uParam0->f_24 = 1566466/*func_4713*/;
			break;
		case 25:
			uParam0->f_23 = 1565416/*func_4708*/;
			break;
		case 30:
			uParam0->f_8 = 1564798/*func_4706*/;
			break;
		case 31:
			uParam0->f_39 = 1564487/*func_4705*/;
			break;
		case 33:
			uParam0->f_40 = 1563548/*func_4703*/;
			break;
		case 34:
			uParam0->f_41 = 1562188/*func_4702*/;
			break;
		case 36:
			uParam0->f_58 = 1562130/*func_4701*/;
			break;
		case 35:
			uParam0->f_42 = 1514424/*func_4698*/;
			break;
		case 45:
			uParam0->f_14 = 1514415/*func_4697*/;
			break;
		case 46:
			uParam0->f_14 = 1514406/*func_4696*/;
			break;
		case 110:
			uParam0->f_57 = 1514398/*func_4695*/;
			break;
		case 77:
			uParam0->f_13 = 1514375/*func_4694*/;
			break;
		case 47:
			uParam0->f_43 = 1514247/*func_4693*/;
			break;
		case 49:
			uParam0->f_8 = 1514206/*func_4692*/;
			break;
		case 50:
			*uParam0 = 1513938/*func_4689*/;
			break;
		case 51:
			*uParam0 = 1513869/*func_4688*/;
			break;
		case 52:
			uParam0->f_15 = 1513858/*func_4687*/;
			break;
		case 53:
			uParam0->f_13 = 1513624/*func_4686*/;
			break;
		case 54:
			uParam0->f_45 = 1513274/*func_4683*/;
			break;
		case 56:
			uParam0->f_46 = 1513265/*func_4682*/;
			break;
		case 57:
			uParam0->f_11 = 1513194/*func_4681*/;
			break;
		case 58:
			uParam0->f_13 = 1512960/*func_4680*/;
			break;
		case 64:
			uParam0->f_47 = 1512760/*func_4678*/;
			break;
		case 65:
			uParam0->f_21 = 1511862/*func_4676*/;
			break;
		case 66:
			uParam0->f_21 = 1511148/*func_4668*/;
			break;
		case 67:
			uParam0->f_21 = 1508886/*func_4649*/;
			break;
		case 68:
			*uParam0 = 1508253/*func_4645*/;
			break;
		case 69:
			*uParam0 = 1508244/*func_4644*/;
			break;
		case 70:
			uParam0->f_48 = 1508232/*func_4643*/;
			break;
		case 71:
			uParam0->f_49 = 1508223/*func_4642*/;
			break;
		case 107:
			uParam0->f_50 = 1508211/*func_4641*/;
			break;
		case 80:
			uParam0->f_7 = 1507518/*func_4635*/;
			break;
		case 84:
			uParam0->f_1 = 1506977/*func_4633*/;
			break;
		case 85:
			uParam0->f_1 = 1502875/*func_4625*/;
			break;
		case 87:
			uParam0->f_1 = 1498888/*func_4613*/;
			break;
		case 88:
			uParam0->f_1 = 1498374/*func_4609*/;
			break;
		case 89:
			uParam0->f_54 = 1498203/*func_4608*/;
			break;
		case 90:
			uParam0->f_1 = 1498031/*func_4605*/;
			break;
		case 91:
			uParam0->f_1 = 1497865/*func_4604*/;
			break;
		case 92:
			uParam0->f_1 = 1496413/*func_4600*/;
			break;
		case 94:
			uParam0->f_1 = 1492282/*func_4589*/;
			break;
		case 95:
			uParam0->f_22 = 1491986/*func_4586*/;
			break;
		case 96:
			uParam0->f_1 = 1491956/*func_4585*/;
			break;
		case 97:
			uParam0->f_1 = 1491289/*func_4582*/;
			break;
		case 98:
			uParam0->f_1 = 1488637/*func_4563*/;
			break;
		case 100:
			uParam0->f_22 = 1480574/*func_4539*/;
			break;
		case 101:
			uParam0->f_22 = 1478645/*func_4530*/;
			break;
		case 78:
			uParam0->f_59 = 1478425/*func_4528*/;
			break;
		case 125:
			uParam0->f_19 = 1478401/*func_4527*/;
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
	if ((__LIB_0__::func_175() || __LIB_2__::func_500()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (Global_2824886)
		{
			if (!BitTest(*iParam1, 13))
			{
				if (__LIB_4__::func_715() || __LIB_2__::func_835())
				{
					if (!BitTest(Global_1946250.f_2, 21))
					{
						__LIB_0__::func_495(&(iParam1->f_101), 1, 0);
						STREAMING::SET_FOCUS_POS_AND_VEL(482.435f, 4812.798f, -59.383f, 0f, 0f, 0f);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(482.435f, 4812.798f, -59.383f, 20f, 1);
					}
				}
				__LIB_0__::func_495(&(iParam1->f_101), 1, 0);
				MISC::SET_BIT(iParam1, 13);
			}
		}
		if (((Global_2824886 && __LIB_2__::func_47(&(iParam1->f_101), 1000, 1)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
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
			if ((__LIB_1__::func_264(bVar2, 1, 1) && !__LIB_8__::func_303(bVar2)) && !Global_2824892)
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
				ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(482.435f, 4812.798f, -59.383f, 0.5f, __LIB_3__::func_198(0), false);
				Var4 = { __LIB_3__::func_207() };
				__LIB_7__::func_660(&(iParam1->f_176[0]), Var4, Var4.f_3, 1, 1);
			}
			Global_2824887 = -1;
			if (Global_1853191 != __LIB_0__::func_160())
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
					if (__LIB_1__::func_264(bVar2, 0, 1) && !__LIB_8__::func_303(bVar2))
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
			__LIB_3__::func_223();
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
		if (__LIB_1__::func_206() || BitTest(Global_1574942, 4))
		{
			if (__LIB_4__::func_715() || __LIB_2__::func_835())
			{
			}
			else
			{
				__LIB_25__::func_389(0, 1, 0, 1, 0, 1, 0, 1, 1, 0);
				return 0;
			}
		}
		Var5 = { __LIB_25__::func_125(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[1]))
		{
			__LIB_7__::func_659(&(iParam1->f_176[1]), Var5, Var5.f_3);
		}
		Var5 = { __LIB_25__::func_125(iParam0, 3) };
		if (BitTest(Global_1946250.f_2, 21))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var5 + Vector(-2f, 0f, 0f), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam1->f_176[0], Var5.f_3, 2, true);
		}
		Var5 = { __LIB_25__::func_125(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
		{
			__LIB_18__::func_635(&(iParam1->f_176[3]), Var5, Var5.f_3);
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
			Var7 = { __LIB_3__::func_207() };
			__LIB_7__::func_660(&(iParam1->f_176[0]), Var7, Var7.f_3, 1, 0);
			Var7.f_2 = (Var7.f_2 - 10f);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var7, false, false, true);
			ENTITY::SET_ENTITY_COLLISION(iParam1->f_176[0], true, false);
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[0], true, false);
		}
		sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
		Var9 = { 481.253f, 4813.742f, -59.148f };
		Var10 = { 0f, 0f, -10f };
		if (__LIB_6__::func_925())
		{
			sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
		}
		__LIB_2__::func_681(&(Global_1946250.f_4073), 6500, "Base exit", Var9, Var10, sVar8, "control_operation_cam", 0, 0, 0, 0, 2);
		__LIB_3__::func_209(&(iParam1->f_176[1]), 1);
		MISC::SET_BIT(&(Global_1946250.f_5), 27);
	}
	__LIB_7__::func_449(iParam1, 0);
	__LIB_0__::func_495(&(iParam1->f_101), 1, 0);
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
		Var0 = { __LIB_3__::func_208() };
		__LIB_7__::func_660(&(iParam1->f_176[0]), Var0, Var0.f_3, 1, 0);
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
				__LIB_41__::func_922(&iVar1, &(iParam1->f_109), 48, 10f, 20f, 15f);
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
					if ((__LIB_1__::func_264(bVar5, 1, 1) && __LIB_3__::func_977(bVar5) == iParam0) && __LIB_3__::func_998(bVar5))
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
	__LIB_7__::func_449(iParam1, 0);
	iParam1->f_183[0] = 0.4f;
	__LIB_7__::func_536(&(iParam1->f_176[0]), iParam1->f_183[0], 0);
	__LIB_25__::func_126(iParam0, &(Global_1946250.f_4073));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_3__::func_198(0));
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
		if ((*uParam3)[iVar1] != __LIB_0__::func_160() && __LIB_1__::func_264((*uParam3)[iVar1], 1, 1))
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
			__LIB_2__::func_416(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			if (__LIB_3__::func_234(ENTITY::GET_ENTITY_MODEL(iVar0)))
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
			__LIB_3__::func_246(iVar0);
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
	Var1 = { __LIB_25__::func_125(iParam0, 0) };
	__LIB_7__::func_659(&(iParam1->f_176[1]), Var1, Var1.f_3);
	Var1 = { 0f, 0f, 0f };
	Var1.f_3 = { 0f, 0f, 0f };
	Var1 = { __LIB_25__::func_125(iParam0, 3) };
	__LIB_7__::func_660(&(iParam1->f_176[0]), Var1, Var1.f_3, 1, 1);
	if (BitTest(iParam1->f_188, 1) && __LIB_7__::func_542(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		Var1 = { __LIB_25__::func_125(iParam0, 19) };
		Var1.f_2 = (Var1.f_2 - 1f);
		__LIB_7__::func_660(&(iParam1->f_176[4]), Var1, Var1.f_3, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[4], false, false);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iParam1->f_176[4]);
	}
	Var1 = { __LIB_25__::func_125(iParam0, 0) };
	__LIB_18__::func_635(&(iParam1->f_176[3]), Var1, Var1.f_3);
	__LIB_25__::func_166(iParam0, &(iParam1->f_176[0]), 0f, 1, 1f);
	__LIB_25__::func_127(iParam0, &(Global_1946250.f_3638), 0, -1);
	__LIB_7__::func_449(iParam1, 0);
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
		__LIB_7__::func_538(iParam0);
		MISC::SET_BIT(&(uParam1->f_188), 17);
	}
	STREAMING::REQUEST_MODEL(__LIB_3__::func_240(iParam0));
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_240(iParam0)))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_3__::func_222());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_222()))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_3__::func_221());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_221()))
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
				__LIB_0__::func_584(__LIB_3__::func_226());
				if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_226()))
				{
					bVar0 = false;
				}
				else if (!__LIB_41__::func_922(&iVar1, &(uParam1->f_122), 16, Var2))
				{
					bVar0 = false;
				}
				else
				{
					func_1831(&iVar1, &(uParam1->f_122), 24);
					__LIB_3__::func_237(uParam1->f_122, 0);
					if (__LIB_0__::func_121(uParam1->f_122))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_122, true);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam1->f_122, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
					}
					__LIB_3__::func_247(uParam1->f_122, 1);
				}
			}
		}
		else
		{
			sVar3 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
			if (__LIB_6__::func_925())
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
	if (__LIB_7__::func_926(iParam0))
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
	if (__LIB_0__::func_170(iParam0) == 9)
	{
		if (__LIB_0__::func_109(iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!HUD::DOES_BLIP_EXIST(*iParam2))
				{
					Var0 = { __LIB_3__::func_77(iParam0) };
					iVar1 = __LIB_2__::func_855(iParam0);
					*iParam2 = __LIB_0__::func_392(Var0, 0);
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
	if (__LIB_6__::func_431(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar1 = __LIB_3__::func_808();
		}
		Var4 = { __LIB_3__::func_77(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(uVar0[iVar6])) && !__LIB_8__::func_303(bVar7)) && !__LIB_8__::func_108(bVar7, 1)) && !__LIB_7__::func_878(bVar7)) && !func_2018(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if ((((((((!bVar3 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(uVar0[iVar6])) && !__LIB_8__::func_303(bVar7)) && !__LIB_8__::func_108(bVar7, 1)) && !__LIB_7__::func_878(bVar7)) && !func_2018(bVar7))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_2__::func_560())
					{
						__LIB_25__::func_398(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_398(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4709(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4709(iParam0);
					}
					Jump @653; //curOff = 634
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_4709(int iParam0)//Position - 0x17E578
{
	__LIB_25__::func_398(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4760(var uParam0, int iParam1)//Position - 0x180AB5
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1603049/*func_4922*/;
			break;
		case 1:
			uParam0->f_30 = 1602993/*func_4921*/;
			break;
		case 2:
			uParam0->f_31 = 1602724/*func_4920*/;
			break;
		case 3:
			uParam0->f_34 = 1602665/*func_4919*/;
			break;
		case 4:
			uParam0->f_12 = 1602634/*func_4918*/;
			break;
		case 37:
			uParam0->f_18 = 1602516/*func_4917*/;
			break;
		case 38:
			uParam0->f_9 = 1602432/*func_4916*/;
			break;
		case 6:
			uParam0->f_32 = 1602368/*func_4915*/;
			break;
		case 111:
			uParam0->f_35 = 1602345/*func_4914*/;
			break;
		case 11:
			uParam0->f_11 = 1602336/*func_4913*/;
			break;
		case 12:
			uParam0->f_33 = 1601883/*func_4910*/;
			break;
		case 14:
			uParam0->f_11 = 1601874/*func_4909*/;
			break;
		case 109:
			uParam0->f_56 = 1601866/*func_4908*/;
			break;
		case 79:
			*uParam0 = 1601842/*func_4907*/;
			break;
		case 13:
			uParam0->f_2 = 1601833/*func_4906*/;
			break;
		case 15:
			uParam0->f_2 = 1597353/*func_4885*/;
			break;
		case 75:
			uParam0->f_4 = 1597344/*func_4884*/;
			break;
		case 16:
			uParam0->f_5 = 1597160/*func_4883*/;
			break;
		case 108:
			uParam0->f_55 = 1594126/*func_4870*/;
			break;
		case 17:
			uParam0->f_17 = 1593618/*func_4868*/;
			break;
		case 19:
			uParam0->f_17 = 1593592/*func_4867*/;
			break;
		case 20:
			uParam0->f_3 = 1593514/*func_4866*/;
			break;
		case 21:
			uParam0->f_3 = 1593451/*func_4865*/;
			break;
		case 74:
			uParam0->f_53 = 1593236/*func_4863*/;
			break;
		case 22:
			uParam0->f_24 = 1593113/*func_4862*/;
			break;
		case 25:
			uParam0->f_23 = 1592166/*func_4857*/;
			break;
		case 30:
			uParam0->f_8 = 1591602/*func_4855*/;
			break;
		case 31:
			uParam0->f_39 = 1591424/*func_4852*/;
			break;
		case 33:
			uParam0->f_40 = 1590312/*func_4847*/;
			break;
		case 34:
			uParam0->f_41 = 1589618/*func_4845*/;
			break;
		case 36:
			uParam0->f_58 = 1589565/*func_4844*/;
			break;
		case 35:
			uParam0->f_42 = 1588986/*func_4842*/;
			break;
		case 45:
			uParam0->f_14 = 1588977/*func_4841*/;
			break;
		case 46:
			uParam0->f_14 = 1588968/*func_4840*/;
			break;
		case 110:
			uParam0->f_57 = 1588791/*func_4839*/;
			break;
		case 77:
			uParam0->f_13 = 1588780/*func_4838*/;
			break;
		case 47:
			uParam0->f_43 = 1588282/*func_4835*/;
			break;
		case 49:
			uParam0->f_8 = 1588241/*func_4834*/;
			break;
		case 50:
			*uParam0 = 1588232/*func_4833*/;
			break;
		case 51:
			*uParam0 = 1588223/*func_4832*/;
			break;
		case 52:
			uParam0->f_15 = 1588212/*func_4831*/;
			break;
		case 53:
			uParam0->f_13 = 1588201/*func_4830*/;
			break;
		case 54:
			uParam0->f_45 = 1588193/*func_4829*/;
			break;
		case 56:
			uParam0->f_46 = 1588184/*func_4828*/;
			break;
		case 57:
			uParam0->f_11 = 1588175/*func_4827*/;
			break;
		case 58:
			uParam0->f_13 = 1587946/*func_4826*/;
			break;
		case 64:
			uParam0->f_47 = 1582019/*func_4795*/;
			break;
		case 65:
			uParam0->f_21 = 1580405/*func_4786*/;
			break;
		case 66:
			uParam0->f_21 = 1580094/*func_4784*/;
			break;
		case 67:
			uParam0->f_21 = 1579369/*func_4780*/;
			break;
		case 68:
			*uParam0 = 1578824/*func_4779*/;
			break;
		case 69:
			*uParam0 = 1578815/*func_4778*/;
			break;
		case 70:
			uParam0->f_48 = 1578803/*func_4777*/;
			break;
		case 71:
			uParam0->f_49 = 1578794/*func_4776*/;
			break;
		case 107:
			uParam0->f_50 = 1578782/*func_4775*/;
			break;
		case 80:
			uParam0->f_7 = 1577066/*func_4765*/;
			break;
		case 78:
			uParam0->f_59 = 1576616/*func_4762*/;
			break;
		case 125:
			uParam0->f_19 = 1576600/*func_4761*/;
			break;
	}
}

void func_4795(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x1823C3
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar0 = func_4823();
	if ((func_4885(iParam1) && !__LIB_4__::func_27(PLAYER::PLAYER_ID())) && PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
	{
		__LIB_25__::func_199(uParam0, 1);
		__LIB_3__::func_307(0);
	}
	if (__LIB_7__::func_556(iVar0))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_25__::func_490(uParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !func_4885(iParam1))
		{
		}
		else if (!__LIB_3__::func_998(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
		{
			__LIB_25__::func_199(uParam0, 1);
			__LIB_3__::func_307(0);
		}
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false);
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("deluxo") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("oppressor2"))
				{
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(iVar1, 0f);
				}
			}
		}
	}
	if ((__LIB_3__::func_326(PLAYER::PLAYER_ID()) || __LIB_3__::func_325(PLAYER::PLAYER_ID())) && func_4813(iParam1))
	{
		if (!__LIB_4__::func_658())
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			__LIB_3__::func_324(0);
			__LIB_3__::func_323(0);
			__LIB_3__::func_309(0);
			__LIB_3__::func_322(0);
			CAM::DO_SCREEN_FADE_IN(500);
			if (__LIB_2__::func_560())
			{
				__LIB_3__::func_321(1);
			}
			__LIB_3__::func_320(0);
			__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
			__LIB_3__::func_319(0);
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
			}
			__LIB_3__::func_320(0);
		}
	}
	if (__LIB_0__::func_618())
	{
		if (Global_1946250.f_523)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
		}
	}
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (Global_1853190 != __LIB_0__::func_160())
		{
			if (PLAYER::PLAYER_ID() == Global_1853190)
			{
				if (__LIB_1__::func_237(PLAYER::PLAYER_ID()))
				{
					if (((__LIB_3__::func_283(PLAYER::PLAYER_ID()) || __LIB_3__::func_233()) || __LIB_3__::func_232()) || Global_1957730)
					{
						__LIB_8__::func_611(1);
					}
				}
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_2__::func_278(uParam0->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_7__::func_249(&(uParam0->f_22.f_94));
			}
		}
		if (!__LIB_4__::func_27(PLAYER::PLAYER_ID()))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (!__LIB_1__::func_237(__LIB_4__::func_925(iVar0, 1, 0)))
				{
					__LIB_25__::func_489(uParam0, iVar0);
				}
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) != -1 && __LIB_3__::func_325(PLAYER::PLAYER_ID()))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				bVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
				if (__LIB_1__::func_264(bVar3, 1, 1))
				{
					if (__LIB_3__::func_311(bVar3))
					{
						if (func_4885(iParam1) && !__LIB_4__::func_27(PLAYER::PLAYER_ID()))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							__LIB_3__::func_319(0);
							__LIB_3__::func_320(0);
							__LIB_3__::func_321(1);
						}
					}
				}
			}
		}
	}
	if (__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		HUD::DISABLE_FRONTEND_THIS_FRAME();
	}
	__LIB_18__::func_584();
	if (!__LIB_4__::func_715() || __LIB_0__::func_706())
	{
		__LIB_3__::func_272(0);
	}
}

int func_4813(int iParam0)//Position - 0x182FD4
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_4885(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (Global_1946250.f_3630 != __LIB_0__::func_160())
				{
					if (((!__LIB_3__::func_998(Global_1946250.f_3630) && !__LIB_3__::func_859(Global_1946250.f_3630)) && !BitTest(Global_2689235[Global_1946250.f_3630 /*453*/].f_318, 5)) && !__LIB_3__::func_311(Global_1946250.f_3630))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_4823()//Position - 0x183754
{
	int iVar0;
	var uVar1;
	var uVar2[25];
	char* sVar3;
	int iVar4;
	int iVar5;
	var uVar6[25];
	int iVar7;
	int iVar8;
	var uVar9[25];
	int iVar10;
	int iVar11;
	if ((Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_16 != -1 && __LIB_4__::func_735(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_16) == 9)
	{
		return -1;
	}
	if (__LIB_4__::func_958(PLAYER::PLAYER_ID()) && !__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_3__::func_325(PLAYER::PLAYER_ID()) && __LIB_1__::func_237(Global_1853191))
		{
			iVar4 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar2);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar2[iVar0]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar2[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar2[iVar0], false))
					{
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Avenger", 3))
						{
							if (__LIB_1__::func_580(uVar2[iVar0], 1))
							{
								sVar3 = ENTITY::GET_ENTITY_SCRIPT(uVar2[iVar0], &uVar1);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
								{
									if (MISC::ARE_STRINGS_EQUAL(sVar3, "am_mp_defunct_base"))
									{
										if (__LIB_1__::func_264(Global_1853191, 1, 1))
										{
											if (__LIB_4__::func_925(uVar2[iVar0], 1, 0) == Global_1853191)
											{
												return uVar2[iVar0];
											}
										}
									}
								}
							}
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_582())
		{
			iVar7 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar6);
			iVar5 = 0;
			while (iVar5 < iVar7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar6[iVar5]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar6[iVar5]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar6[iVar5], false))
					{
						if (VEHICLE::IS_VEHICLE_MODEL(uVar6[iVar5], __LIB_3__::func_328()))
						{
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Avenger", 3))
							{
								if (__LIB_1__::func_580(uVar6[iVar5], 1))
								{
									if (__LIB_1__::func_264(__LIB_0__::func_582(), 1, 1))
									{
										if (__LIB_4__::func_925(uVar6[iVar5], 1, 0) == __LIB_0__::func_582())
										{
											return uVar6[iVar5];
										}
									}
								}
							}
						}
					}
				}
				iVar5++;
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_3__::func_325(PLAYER::PLAYER_ID()))
		{
			if (__LIB_4__::func_958(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1640744))
				{
					Global_2815059.f_293 = Global_1640744;
					return Global_1640744;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_293))
			{
				iVar10 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar9);
				iVar8 = 0;
				while (iVar8 < iVar10)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar9[iVar8]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar9[iVar8]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uVar9[iVar8], false))
						{
							if (VEHICLE::IS_VEHICLE_MODEL(uVar9[iVar8], __LIB_3__::func_328()))
							{
								if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Avenger", 3))
								{
									if (__LIB_1__::func_580(uVar9[iVar8], 1))
									{
										if (__LIB_1__::func_264(Global_1946250.f_3630, 1, 1))
										{
											if (__LIB_4__::func_925(uVar9[iVar8], 1, 0) == Global_1946250.f_3630)
											{
												Global_2815059.f_293 = uVar9[iVar8];
												return uVar9[iVar8];
											}
										}
									}
								}
							}
						}
					}
					iVar8++;
				}
			}
			else
			{
				return Global_2815059.f_293;
			}
		}
	}
	else if (__LIB_3__::func_325(PLAYER::PLAYER_ID()))
	{
		__LIB_3__::func_322(0);
	}
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 1))
	{
		iVar11 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
		if (iVar11 != __LIB_0__::func_160() && __LIB_3__::func_330(iVar11))
		{
			return __LIB_3__::func_329(iVar11);
		}
	}
	return Global_2815059.f_308;
}

Vector3 func_4826(var uParam0)//Position - 0x183AEA
{
	int iVar0;
	iVar0 = func_4823();
	if (Global_1853190 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_237(Global_1853190))
		{
			return 487.6422f, 4792.5854f, -59.3939f;
		}
		else if (Global_1853190 != PLAYER::PLAYER_ID())
		{
			return Global_2689235[Global_1853190 /*453*/].f_318.f_18;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			return ENTITY::GET_ENTITY_COORDS(iVar0, true);
		}
		else
		{
			return Global_2689235[Global_1853190 /*453*/].f_318.f_18;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return ENTITY::GET_ENTITY_COORDS(iVar0, true);
	}
	else if (__LIB_4__::func_925(iVar0, 1, 0) != __LIB_0__::func_160())
	{
		return Global_2689235[__LIB_4__::func_925(iVar0, 1, 0) /*453*/].f_318.f_18;
	}
	return 0f, 0f, 0f;
}

void func_4847(int iParam0, int iParam1)//Position - 0x184428
{
	int iVar0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = __LIB_0__::func_160();
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_8 = 0;
	Global_1946250.f_506 = 0;
	iVar0 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
	if (((__LIB_3__::func_286() && Global_1853191 != __LIB_0__::func_160()) && Global_1853191 != PLAYER::PLAYER_ID()) && !__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		if (Global_1946250.f_3280 != PLAYER::PLAYER_ID())
		{
			if (Global_1946250.f_3280 != -1)
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 5);
				Global_1853190 = Global_1853191;
			}
			else
			{
				if (Global_1946250.f_3280 == -1)
				{
					__LIB_2__::func_452(Global_1853191);
				}
				Global_1853190 = Global_1853191;
			}
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853190;
		}
	}
	else if ((Global_1946250.f_3280 != -1 && Global_1946250.f_3280 != PLAYER::PLAYER_ID()) && !__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		__LIB_19__::func_61(iVar0, 1);
		MISC::SET_BIT(&(Global_1946250.f_506), 5);
		Global_1853190 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853190;
	}
	else if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0) && !__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		__LIB_19__::func_61(iVar0, 0);
		if (iVar0 != __LIB_0__::func_160())
		{
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = iVar0;
		}
	}
	else if (__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		__LIB_19__::func_61(iVar0, 1);
		MISC::SET_BIT(&(Global_1946250.f_506), 5);
		Global_1853190 = Global_1946250.f_3630;
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1946250.f_3630;
	}
	else if (__LIB_3__::func_330(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == __LIB_4__::func_925(func_4823(), 1, 0))
	{
		Global_1853190 = PLAYER::PLAYER_ID();
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_18__::func_179(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
			{
				__LIB_3__::func_335(PLAYER::PLAYER_ID(), 88, 3);
			}
			else if (__LIB_0__::func_657(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
			{
				__LIB_4__::func_692(PLAYER::PLAYER_ID(), 88, 3);
			}
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
		MISC::SET_BIT(&(Global_1946250.f_506), 31);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853190;
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__::func_160())
	{
		Global_1946250.f_3636 = __LIB_1__::func_243(__LIB_1__::func_244(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9));
	}
	__LIB_7__::func_369();
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
	if (__LIB_4__::func_981(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_2018(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_2018(bVar7))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						func_4847(iParam0, -1);
					}
					bVar9 = __LIB_3__::func_339(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						func_4847(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							func_4859(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4858(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							func_4859(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4858(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_4858(int iParam0)//Position - 0x184DF9
{
	func_4847(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4859(int iParam0)//Position - 0x184E27
{
	int iVar0;
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || iParam0)
	{
		iVar0 = func_4823();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if ((__LIB_4__::func_925(iVar0, 1, 0) == PLAYER::PLAYER_ID() && !__LIB_1__::func_237(PLAYER::PLAYER_ID())) && !__LIB_3__::func_931())
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_18 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 2f, -17f, 0f) };
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_24 = ENTITY::GET_ENTITY_HEADING(iVar0);
			}
		}
	}
}

int func_4870(var uParam0, var uParam1, var uParam2)//Position - 0x18530E
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	*uParam2 = 1;
	if (Global_262145.f_23133 /* Tunable: 200197103 */)
	{
		return 0;
	}
	iVar0 = func_4823();
	if (__LIB_3__::func_233() || __LIB_3__::func_232())
	{
		return 0;
	}
	if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
	{
		if (__LIB_0__::func_1("HELP_APC_TUR" /* GXT: Hold ~INPUT_VEH_SHUFFLE~ to move between the passenger turret and the driver seat while stationary. */))
		{
			return 0;
		}
		if (__LIB_4__::func_925(iVar0, 1, 0) != PLAYER::PLAYER_ID())
		{
			return 0;
		}
	}
	if ((!__LIB_4__::func_715() || __LIB_2__::func_368()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_25__::func_199(uParam1, 1);
		__LIB_3__::func_307(0);
	}
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_7__::func_249(&(uParam1->f_22.f_94));
			}
			__LIB_25__::func_199(uParam1, 1);
			__LIB_3__::func_307(0);
		}
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (((__LIB_7__::func_556(iVar0) && __LIB_3__::func_464(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -1f, 0f))) || __LIB_4__::func_958(PLAYER::PLAYER_ID())) || __LIB_3__::func_285())
					{
						if (!func_4885(*uParam0) && __LIB_25__::func_490(uParam1, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 0))
						{
							if (MISC::IS_PC_VERSION())
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("voltic2")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor")))
									{
										if ((__LIB_2__::func_278(uParam1->f_22.f_94, 0) || __LIB_2__::func_161("GR_ENTERAOC" /* GXT: Press ~a~ to enter your Avenger with this vehicle. */, "STRING")) || __LIB_2__::func_161("BASE_MOD_ENTER" /* GXT: ~a~ Access the Facility Vehicle Workshop. ~n~ ~INPUT_CONTEXT_SECONDARY~ Enter your Avenger with this vehicle. */, "STRING"))
										{
											PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
										}
									}
								}
							}
							__LIB_3__::func_345(1);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
							if (!__LIB_3__::func_311(PLAYER::PLAYER_ID()))
							{
								if (__LIB_1__::func_177(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										__LIB_0__::func_151("GAN_ETFE_AIR" /* GXT: You cannot modify this aircraft in your Avenger. */, -1);
									}
									return 0;
								}
								if (__LIB_4__::func_958(PLAYER::PLAYER_ID()))
								{
									bVar1 = true;
								}
								if (!bVar1)
								{
									sVar2 = "GR_ENTERAOC" /* GXT: Press ~a~ to enter your Avenger with this vehicle. */;
								}
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
								if (!bVar1)
								{
									if (uParam1->f_22.f_94 == -1 && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
									{
										__LIB_7__::func_316(&(uParam1->f_22.f_94), 5, sVar2, 0, 0, 0, 0);
									}
									if (__LIB_0__::func_77(0))
									{
										__LIB_7__::func_249(&(uParam1->f_22.f_94));
									}
								}
								if (((!bVar1 && __LIB_2__::func_187(uParam1->f_22.f_94, 1)) || ((bVar1 && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 52 /*INPUT_CONTEXT_SECONDARY*/)) && !HUD::IS_WARNING_MESSAGE_ACTIVE())) || BitTest(uParam1->f_22, 1))
								{
									__LIB_25__::func_199(uParam1, 0);
									__LIB_3__::func_344(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 25f, 0);
									__LIB_7__::func_249(&(uParam1->f_22.f_94));
									if (BitTest(uParam1->f_22, 1))
									{
										MISC::CLEAR_BIT(&(uParam1->f_22), 1);
									}
									if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
									{
										__LIB_4__::func_736(1, 1);
										MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 19);
									}
									if (!__LIB_4__::func_958(PLAYER::PLAYER_ID()))
									{
										__LIB_3__::func_343(1);
									}
									__LIB_7__::func_375(1, 88);
									__LIB_3__::func_307(1);
								}
							}
							else
							{
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, true);
								__LIB_8__::func_611(0);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
								PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
								PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
								PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
								HUD::DISABLE_FRONTEND_THIS_FRAME();
								HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
								VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1f, 1, false);
								if (__LIB_4__::func_32() && __LIB_7__::func_560())
								{
									if (__LIB_4__::func_958(PLAYER::PLAYER_ID()))
									{
										__LIB_3__::func_308(1);
									}
									if (__LIB_18__::func_179(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
									{
										__LIB_3__::func_335(PLAYER::PLAYER_ID(), 88, 3);
									}
									else if (__LIB_0__::func_657(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
									{
										__LIB_4__::func_692(PLAYER::PLAYER_ID(), 88, 3);
									}
									if (!__LIB_3__::func_285())
									{
										__LIB_7__::func_394(1);
										__LIB_3__::func_934(88, uParam1, 0, 0);
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
										__LIB_18__::func_904(1);
										__LIB_3__::func_344(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 25f, 0);
										__LIB_3__::func_345(0);
										__LIB_7__::func_375(1, 88);
										return 1;
									}
									else if (!__LIB_2__::func_560())
									{
										__LIB_3__::func_324(1);
										__LIB_3__::func_323(1);
										__LIB_18__::func_904(1);
										__LIB_7__::func_375(1, 88);
										return 1;
									}
								}
								else
								{
									if (!__LIB_4__::func_32())
									{
									}
									if (!__LIB_7__::func_560())
									{
									}
								}
							}
						}
						else if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_7__::func_249(&(uParam1->f_22.f_94));
						}
					}
					else
					{
						__LIB_3__::func_345(0);
						if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_7__::func_249(&(uParam1->f_22.f_94));
						}
						__LIB_25__::func_199(uParam1, 1);
						__LIB_3__::func_307(0);
					}
				}
				else
				{
					if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
					{
						if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_7__::func_249(&(uParam1->f_22.f_94));
						}
					}
					__LIB_25__::func_199(uParam1, 1);
					__LIB_3__::func_307(0);
				}
			}
			else
			{
				func_4871(*uParam0);
				if (__LIB_3__::func_186(PLAYER::PLAYER_ID()))
				{
					if (!__LIB_0__::func_649(&(uParam1->f_22.f_101)))
					{
						__LIB_0__::func_580(&(uParam1->f_22.f_101), 0, 0);
					}
					if (__LIB_1__::func_264(Global_1946250.f_3630, 1, 1))
					{
					}
					if (!__LIB_4__::func_735(Global_1946250.f_3630) && __LIB_4__::func_27(Global_1946250.f_3630))
					{
						if (__LIB_0__::func_649(&(uParam1->f_22.f_101)))
						{
							if (__LIB_2__::func_47(&(uParam1->f_22.f_101), 15000, 0) && CAM::IS_SCREEN_FADING_OUT())
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
								}
								if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
								{
									NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
								}
								CAM::DO_SCREEN_FADE_IN(500);
								__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
								__LIB_3__::func_320(0);
								__LIB_3__::func_322(0);
								__LIB_3__::func_319(0);
								__LIB_0__::func_579(&(uParam1->f_22.f_101));
							}
						}
					}
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
					__LIB_8__::func_611(0);
					__LIB_2__::func_452(Global_1946250.f_3630);
					MISC::SET_BIT(&(Global_1946250.f_506), 5);
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
					__LIB_3__::func_343(1);
					__LIB_7__::func_375(1, 88);
					__LIB_3__::func_307(1);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
					Global_1853190 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
					__LIB_0__::func_579(&(uParam1->f_22.f_101));
					return 1;
				}
			}
		}
		else
		{
			if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_7__::func_249(&(uParam1->f_22.f_94));
			}
			__LIB_25__::func_199(uParam1, 1);
			__LIB_3__::func_307(0);
		}
	}
	else if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
	{
		HUD::CLEAR_HELP(true);
		__LIB_7__::func_249(&(uParam1->f_22.f_94));
	}
	if (((__LIB_0__::func_1("GR_ETFE_NOTV" /* GXT: You cannot modify this vehicle in your Mobile Operations Center. */) || __LIB_0__::func_1("GR_ETFE_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFS_TRAIL" /* GXT: You cannot store this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFA_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. The Anti-Aircraft Trailer can only be modified in the Bunker. */))
	{
		HUD::CLEAR_HELP(true);
	}
	return 0;
}

void func_4871(int iParam0)//Position - 0x185A35
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_3__::func_325(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_1__::func_183(iVar0))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
							if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(bVar2, 1, 1))
							{
								if ((__LIB_3__::func_311(bVar2) && __LIB_0__::func_170(__LIB_4__::func_2(bVar2)) == 8) || __LIB_3__::func_311(bVar2))
								{
									if (func_4813(iParam0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
										if (__LIB_3__::func_326(PLAYER::PLAYER_ID()))
										{
											if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
											{
												CAM::DO_SCREEN_FADE_IN(500);
											}
											__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
											__LIB_3__::func_320(0);
											__LIB_3__::func_322(0);
										}
									}
									else if (__LIB_4__::func_31())
									{
										if (CAM::IS_SCREEN_FADED_IN())
										{
											__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
											CAM::DO_SCREEN_FADE_OUT(500);
											__LIB_3__::func_320(1);
										}
										if (CAM::IS_SCREEN_FADED_OUT())
										{
											if (__LIB_4__::func_958(PLAYER::PLAYER_ID()))
											{
												__LIB_3__::func_309(1);
												__LIB_3__::func_324(1);
												__LIB_3__::func_308(1);
												__LIB_3__::func_323(1);
											}
											if (VEHICLE::IS_TURRET_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0)) || (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("hakuchou2")) && __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) != -1))
											{
												TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
											}
											PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
											__LIB_3__::func_319(1);
											__LIB_3__::func_320(0);
										}
									}
									else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("halftrack")))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
										}
										else
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
										if (BitTest(Global_1946250.f_1, 17))
										{
											MISC::CLEAR_BIT(&(Global_1946250.f_1), 17);
										}
										__LIB_3__::func_322(0);
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

int func_4885(int iParam0)//Position - 0x185FA9
{
	int iVar0;
	bool bVar1;
	if (__LIB_3__::func_165() || __LIB_3__::func_164(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	bVar1 = false;
	iVar0 = func_4823();
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_3__::func_165()) || __LIB_3__::func_334())
	{
		if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_1__::func_580(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1)) || __LIB_3__::func_165()) || __LIB_3__::func_334())
		{
			bVar1 = true;
		}
	}
	if (BitTest(Global_1946250.f_4523, 4) && !__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (((__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && !bVar1)
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if ((((ENTITY::GET_ENTITY_SPEED(iVar0) > 0.5f && !bVar1) && !__LIB_3__::func_186(PLAYER::PLAYER_ID())) && !__LIB_3__::func_311(PLAYER::PLAYER_ID())) && !__LIB_3__::func_326(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!ENTITY::IS_ENTITY_UPRIGHT(iVar0, 25f) && !bVar1)
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (ENTITY::IS_ENTITY_UPSIDEDOWN(iVar0) && !bVar1)
		{
			return 1;
		}
	}
	if (__LIB_2__::func_477())
	{
		return 1;
	}
	if (__LIB_0__::func_706())
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!__LIB_1__::func_237(__LIB_4__::func_925(iVar0, 1, 0)))
		{
			if ((((ENTITY::IS_ENTITY_IN_AIR(iVar0) && !bVar1) && !__LIB_3__::func_186(PLAYER::PLAYER_ID())) && !__LIB_3__::func_311(PLAYER::PLAYER_ID())) && !__LIB_3__::func_326(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
		{
			return 1;
		}
	}
	if (func_4905(iParam0, iVar0))
	{
		return 1;
	}
	if (func_4904(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_4901(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_4900(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_4895(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_4894(iParam0, iVar0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
		{
			if (!__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0)))
			{
			}
			else
			{
				__LIB_3__::func_347(1);
			}
		}
		else
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_4891(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_4890(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (__LIB_1__::func_154(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if ((NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_0__::func_740(PLAYER::PLAYER_ID()) || __LIB_7__::func_268(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 1;
	}
	if (func_4889(iParam0))
	{
		return 1;
	}
	if (__LIB_1__::func_174(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_233())
	{
		return 1;
	}
	if (__LIB_2__::func_509(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 == 8 && __LIB_1__::func_307()) && !__LIB_0__::func_494())
	{
		return 1;
	}
	if (__LIB_3__::func_185(__LIB_4__::func_925(iVar0, 1, 0)))
	{
		return 1;
	}
	if (__LIB_3__::func_338(__LIB_4__::func_925(iVar0, 1, 0)))
	{
		return 1;
	}
	if (__LIB_2__::func_745())
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (__LIB_3__::func_931())
	{
		return 1;
	}
	if (__LIB_0__::func_702(PLAYER::PLAYER_ID(), 21))
	{
		return 1;
	}
	if (__LIB_0__::func_702(PLAYER::PLAYER_ID(), 25))
	{
		return 1;
	}
	if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false)) && func_4887())
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (((((((((BitTest(Global_1946250, 19) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_186(PLAYER::PLAYER_ID())) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false)) && !__LIB_4__::func_958(PLAYER::PLAYER_ID())) && !__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_1__::func_237(__LIB_4__::func_925(iVar0, 1, 0)) && !__LIB_4__::func_958(PLAYER::PLAYER_ID()))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (((__LIB_4__::func_958(PLAYER::PLAYER_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(iVar0) || NETWORK::NETWORK_IS_ENTITY_FADING(iVar0))
		{
			return 1;
		}
	}
	if (__LIB_2__::func_161("BASE_ENTER" /* GXT: Press ~INPUT_CONTEXT~ to enter the Facility with current vehicle. */, "STRING"))
	{
		return 1;
	}
	if (Global_2787784)
	{
		return 1;
	}
	if (!__LIB_4__::func_958(PLAYER::PLAYER_ID()) && __LIB_2__::func_39(iVar0, 0))
	{
		return 1;
	}
	if (__LIB_3__::func_998(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_170(__LIB_4__::func_721(PLAYER::PLAYER_ID())) != 8)
		{
		}
	}
	if (__LIB_1__::func_205(PLAYER::PLAYER_ID()) == 5)
	{
		return 1;
	}
	if (__LIB_2__::func_509(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (__LIB_1__::func_909())
	{
		return 1;
	}
	if (__LIB_1__::func_302(23))
	{
		return 1;
	}
	if (__LIB_2__::func_104())
	{
		return 1;
	}
	__LIB_3__::func_347(0);
	return 0;
}

int func_4887()//Position - 0x1866DA
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	iVar2 = func_4823();
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, false))
	{
		func_4888(88, &Var0);
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar2, 0f, -8f, -0.6f) };
		if (MISC::ABSF((Var0.f_2 - Var1.f_2)) > 5f)
		{
			return 1;
		}
	}
	return 0;
}

void func_4888(int iParam0, var uParam1)//Position - 0x186732
{
	int iVar0;
	var uVar1;
	switch (iParam0)
	{
		case 88:
			iVar0 = func_4823();
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				*uParam1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -8f, -0.6f) };
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, &uVar1, false, false) && !ENTITY::IS_ENTITY_IN_AIR(iVar0))
				{
					*uParam1 = { *uParam1, uParam1->f_1, uVar1 };
				}
				else
				{
					*uParam1 = { *uParam1, uParam1->f_1, (uParam1->f_2 - 1.5f) };
				}
			}
			break;
	}
}

int func_4889(int iParam0)//Position - 0x1867BB
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	iVar0 = func_4823();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		func_4888(iParam0, &Var1);
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if (!__LIB_0__::func_78(Global_1310720.f_1445[iVar2 /*3*/], 0f, 0f, 0f, 0))
			{
				if (SYSTEM::VDIST2(Global_1310720.f_1445[iVar2 /*3*/], Var1) <= 225f)
				{
					return 1;
				}
			}
			iVar2++;
		}
	}
	return 0;
}

int func_4890(int iParam0, int iParam1)//Position - 0x186836
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4888(iParam0, &Var0);
		if (!__LIB_2__::func_710(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(-376.2393f, -1878.2488f, 19.5278f, Var0) <= 1600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_4891(int iParam0, int iParam1)//Position - 0x186891
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4888(iParam0, &Var0);
		if (SYSTEM::VDIST2(__LIB_3__::func_82(__LIB_6__::func_932(__LIB_4__::func_925(iParam1, 1, 0))), Var0) <= 3600f || SYSTEM::VDIST2(__LIB_3__::func_81(__LIB_6__::func_932(__LIB_4__::func_925(iParam1, 1, 0))), Var0) <= 3600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_4894(int iParam0, int iParam1)//Position - 0x186B23
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4888(iParam0, &Var0);
		if (!__LIB_1__::func_233(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(__LIB_3__::func_77(__LIB_6__::func_933(__LIB_4__::func_925(iParam1, 1, 0))), Var0) <= 3600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_4895(int iParam0, int iParam1)//Position - 0x186B7F
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4888(iParam0, &Var0);
		if (!__LIB_1__::func_247(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Var0, __LIB_3__::func_83(__LIB_7__::func_561(__LIB_4__::func_925(iParam1, 1, 0)))) <= 1600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_4900(int iParam0, int iParam1)//Position - 0x186D0E
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4888(iParam0, &Var0);
		if ((((SYSTEM::VDIST2(759.36f, -675.13f, 27.86f, Var0) <= 900f || SYSTEM::VDIST2(-144.58f, -1341.37f, 28.87f, Var0) <= 900f) || SYSTEM::VDIST2(-171f, -31.4f, 51.27f, Var0) <= 900f) || SYSTEM::VDIST2(231.54f, -1875.7f, 25.41f, Var0) <= 900f) || SYSTEM::VDIST2(488.98f, -897.41f, 24.79f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_4901(int iParam0, int iParam1)//Position - 0x186DE5
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4888(iParam0, &Var0);
		if (((((SYSTEM::VDIST2(-237.12f, 6228.7554f, 30.5005f, Var0) <= 900f || SYSTEM::VDIST2(1710.83f, 4760.13f, 41.0504f, Var0) <= 900f) || SYSTEM::VDIST2(-105.19f, -1778.3f, 28.51f, Var0) <= 900f) || SYSTEM::VDIST2(-617.7421f, 285.8363f, 80.6871f, Var0) <= 900f) || SYSTEM::VDIST2(-1287.1135f, -278.0045f, 37.5935f, Var0) <= 900f) || SYSTEM::VDIST2(726.7626f, -822.4685f, 23.8603f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_4904(int iParam0, int iParam1)//Position - 0x186F47
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4888(iParam0, &Var0);
		if (((((((((SYSTEM::VDIST2(931.99f, 43.83f, 80.1f, Var0) <= 900f || SYSTEM::VDIST2(930.45f, 41.36f, 80.1f, Var0) <= 900f) || SYSTEM::VDIST2(964.4556f, 57.9093f, 112.1931f, Var0) <= 900f) || SYSTEM::VDIST2(926.4164f, 45.5401f, 59.9018f, Var0) <= 900f) || SYSTEM::VDIST2(936.3319f, 1.1849f, 77.7649f, Var0) <= 900f) || SYSTEM::VDIST2(968.591f, 63.923855f, 111.55298f, Var0) <= 900f) || SYSTEM::VDIST2(967.22f, 62.69f, 111.5531f, Var0) <= 900f) || SYSTEM::VDIST2(936.5542f, 1.1273f, 77.7649f, Var0) <= 900f) || SYSTEM::VDIST2(925.04f, 46.48f, 80.096f, Var0) <= 900f) || SYSTEM::VDIST2(924.507f, 60.3318f, 79.89629f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_4905(int iParam0, int iParam1)//Position - 0x1870CD
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4888(iParam0, &Var0);
		if (!__LIB_3__::func_932(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Var0, __LIB_3__::func_84(__LIB_5__::func_702(__LIB_4__::func_925(iParam1, 1, 0)))) <= 1600f)
		{
			return 1;
		}
	}
	return 0;
}

void func_4910(int iParam0, int iParam1, var uParam2)//Position - 0x18715B
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = func_4823();
	switch (iParam1)
	{
		case 0:
			func_4888(iParam0, &(uParam2->f_4));
			uParam2->f_7 = { 1f, 1f, 2f };
			MISC::SET_BIT(&(uParam2->f_3), 4);
			MISC::SET_BIT(&(uParam2->f_3), 1);
			MISC::SET_BIT(&(uParam2->f_3), 5);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(iVar1) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar1, true))
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				__LIB_2__::func_749(iParam0, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
				uParam2->f_18 = 0;
			}
			else
			{
				__LIB_2__::func_749(iParam0, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
			}
			break;
		case 1:
			func_4911(iParam0, &(uParam2->f_4), &(uParam2->f_7), &(uParam2->f_10), &(uParam2->f_13), &(uParam2->f_14));
			uParam2->f_2 = 1;
			MISC::SET_BIT(&(uParam2->f_3), 0);
			MISC::SET_BIT(&(uParam2->f_3), 2);
			MISC::SET_BIT(&(uParam2->f_3), 5);
			break;
	}
}

void func_4911(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x187259
{
	int iVar0;
	var uVar1;
	iVar0 = func_4823();
	switch (iParam0)
	{
		case 88:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == __LIB_3__::func_328())
				{
					*uParam1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -5f, 0f) };
					*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, ENTITY::GET_ENTITY_HEADING(iVar0), 0f, 6f, -1.5f) };
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam2, &uVar1, false, false))
					{
						*uParam2 = { *uParam2, uParam2->f_1, uVar1 };
					}
					*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -6f, 2.5f) };
					*uParam4 = 1f;
					*uParam5 = ENTITY::GET_ENTITY_HEADING(iVar0);
				}
			}
			break;
	}
}

void func_4923(var uParam0, int iParam1)//Position - 0x1875F2
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1655558/*func_5090*/;
			break;
		case 1:
			uParam0->f_30 = 1655478/*func_5089*/;
			break;
		case 2:
			uParam0->f_31 = 1654979/*func_5088*/;
			break;
		case 3:
			uParam0->f_34 = 1654929/*func_5087*/;
			break;
		case 4:
			uParam0->f_12 = 1654842/*func_5086*/;
			break;
		case 5:
			uParam0->f_11 = 1654832/*func_5085*/;
			break;
		case 37:
			uParam0->f_18 = 1654713/*func_5084*/;
			break;
		case 38:
			uParam0->f_9 = 1654591/*func_5083*/;
			break;
		case 6:
			uParam0->f_32 = 1654503/*func_5082*/;
			break;
		case 111:
			uParam0->f_35 = 1654489/*func_5081*/;
			break;
		case 11:
			uParam0->f_11 = 1654480/*func_5080*/;
			break;
		case 12:
			uParam0->f_33 = 1654101/*func_5077*/;
			break;
		case 14:
			uParam0->f_11 = 1654092/*func_5076*/;
			break;
		case 109:
			uParam0->f_56 = 1654084/*func_5075*/;
			break;
		case 79:
			*uParam0 = 1654060/*func_5074*/;
			break;
		case 13:
			uParam0->f_2 = 1653928/*func_5073*/;
			break;
		case 15:
			uParam0->f_2 = 1653646/*func_5071*/;
			break;
		case 75:
			uParam0->f_4 = 1653632/*func_5070*/;
			break;
		case 16:
			uParam0->f_5 = 1653114/*func_5068*/;
			break;
		case 108:
			uParam0->f_55 = 1649490/*func_5056*/;
			break;
		case 17:
			uParam0->f_17 = 1648952/*func_5054*/;
			break;
		case 19:
			uParam0->f_17 = 1648926/*func_5053*/;
			break;
		case 20:
			uParam0->f_3 = 1648842/*func_5052*/;
			break;
		case 21:
			uParam0->f_3 = 1648778/*func_5051*/;
			break;
		case 74:
			uParam0->f_53 = 1648598/*func_5050*/;
			break;
		case 22:
			uParam0->f_24 = 1648451/*func_5049*/;
			break;
		case 25:
			uParam0->f_23 = 1647827/*func_5047*/;
			break;
		case 30:
			uParam0->f_8 = 1647312/*func_5045*/;
			break;
		case 31:
			uParam0->f_39 = 1647027/*func_5044*/;
			break;
		case 33:
			uParam0->f_40 = 1646356/*func_5042*/;
			break;
		case 34:
			uParam0->f_41 = 1645092/*func_5041*/;
			break;
		case 36:
			uParam0->f_58 = 1645047/*func_5040*/;
			break;
		case 35:
			uParam0->f_42 = 1618997/*func_5032*/;
			break;
		case 45:
			uParam0->f_14 = 1618988/*func_5031*/;
			break;
		case 46:
			uParam0->f_14 = 1618979/*func_5030*/;
			break;
		case 110:
			uParam0->f_57 = 1618971/*func_5029*/;
			break;
		case 77:
			uParam0->f_13 = 1618948/*func_5028*/;
			break;
		case 47:
			uParam0->f_43 = 1618844/*func_5027*/;
			break;
		case 49:
			uParam0->f_8 = 1618803/*func_5026*/;
			break;
		case 50:
			*uParam0 = 1618589/*func_5023*/;
			break;
		case 51:
			*uParam0 = 1618520/*func_5022*/;
			break;
		case 52:
			uParam0->f_15 = 1618509/*func_5021*/;
			break;
		case 53:
			uParam0->f_13 = 1618371/*func_5020*/;
			break;
		case 54:
			uParam0->f_45 = 1618183/*func_5019*/;
			break;
		case 56:
			uParam0->f_46 = 1618174/*func_5018*/;
			break;
		case 57:
			uParam0->f_11 = 1617997/*func_5016*/;
			break;
		case 58:
			uParam0->f_13 = 1617859/*func_5015*/;
			break;
		case 64:
			uParam0->f_47 = 1617851/*func_5014*/;
			break;
		case 65:
			uParam0->f_21 = 1617015/*func_5012*/;
			break;
		case 66:
			uParam0->f_21 = 1616908/*func_5011*/;
			break;
		case 67:
			uParam0->f_21 = 1616844/*func_5010*/;
			break;
		case 68:
			*uParam0 = 1616356/*func_5009*/;
			break;
		case 69:
			*uParam0 = 1616347/*func_5008*/;
			break;
		case 70:
			uParam0->f_48 = 1616335/*func_5007*/;
			break;
		case 71:
			uParam0->f_49 = 1616326/*func_5006*/;
			break;
		case 107:
			uParam0->f_50 = 1616314/*func_5005*/;
			break;
		case 80:
			uParam0->f_7 = 1615611/*func_5001*/;
			break;
		case 84:
			uParam0->f_1 = 1615511/*func_4999*/;
			break;
		case 85:
			uParam0->f_1 = 1613527/*func_4996*/;
			break;
		case 87:
			uParam0->f_1 = 1611104/*func_4984*/;
			break;
		case 88:
			uParam0->f_1 = 1611095/*func_4983*/;
			break;
		case 96:
			uParam0->f_1 = 1611032/*func_4982*/;
			break;
		case 97:
			uParam0->f_1 = 1610711/*func_4979*/;
			break;
		case 98:
			uParam0->f_1 = 1606704/*func_4945*/;
			break;
		case 100:
			uParam0->f_22 = 1604426/*func_4927*/;
			break;
		case 78:
			uParam0->f_59 = 1604222/*func_4925*/;
			break;
		case 125:
			uParam0->f_19 = 1604206/*func_4924*/;
			break;
	}
}

int func_4945(int iParam0, int* iParam1)//Position - 0x188430
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	__LIB_25__::func_129(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		func_1831(&iVar0, &(iParam1->f_109), 12);
		__LIB_7__::func_568(iParam0, &(iParam1->f_109));
	}
	__LIB_41__::func_327(iParam0, Global_1853189, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
	{
		OBJECT::DELETE_OBJECT(&(iParam1->f_176[3]));
	}
	Var1 = { __LIB_3__::func_936(iParam0) };
	STREAMING::SET_FOCUS_POS_AND_VEL(Var1, 0f, 0f, 0f);
	fVar2 = 2f;
	__LIB_7__::func_665(iParam0, &(iParam1->f_176[1]), &(iParam1->f_176[2]), &fVar2);
	__LIB_7__::func_449(iParam1, 0);
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
			__LIB_2__::func_416(&(iParam1->f_109));
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
		bVar1 = __LIB_3__::func_390(iParam0, &(iParam1->f_109));
	}
	__LIB_25__::func_130(iParam0, &(Global_1946250.f_3638), 0, bVar1);
	__LIB_41__::func_327(iParam0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	__LIB_7__::func_449(iParam1, 0);
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
	if (__LIB_4__::func_984(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar1 = __LIB_3__::func_808();
		}
		Var4 = { __LIB_3__::func_83(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !func_2018(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if (((((!bVar3 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !func_2018(bVar7))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_2__::func_560())
					{
						__LIB_25__::func_309(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_309(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_5048(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_5048(iParam0);
					}
					Jump @575; //curOff = 556
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_5048(int iParam0)//Position - 0x192715
{
	__LIB_25__::func_309(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_5091(var uParam0, int iParam1)//Position - 0x19430F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1664181/*func_5153*/;
			break;
		case 1:
			uParam0->f_30 = 1664125/*func_5152*/;
			break;
		case 2:
			uParam0->f_31 = 1663906/*func_5151*/;
			break;
		case 3:
			uParam0->f_34 = 1663855/*func_5150*/;
			break;
		case 4:
			uParam0->f_12 = 1663821/*func_5149*/;
			break;
		case 6:
			uParam0->f_32 = 1663757/*func_5148*/;
			break;
		case 111:
			uParam0->f_35 = 1663748/*func_5147*/;
			break;
		case 79:
			*uParam0 = 1663724/*func_5146*/;
			break;
		case 11:
			uParam0->f_11 = 1663715/*func_5145*/;
			break;
		case 12:
			uParam0->f_33 = 1663623/*func_5144*/;
			break;
		case 14:
			uParam0->f_11 = 1663614/*func_5143*/;
			break;
		case 109:
			uParam0->f_56 = 1663606/*func_5142*/;
			break;
		case 15:
			uParam0->f_2 = 1663354/*func_5141*/;
			break;
		case 13:
			uParam0->f_2 = 1663345/*func_5140*/;
			break;
		case 75:
			uParam0->f_4 = 1663336/*func_5139*/;
			break;
		case 16:
			uParam0->f_5 = 1663327/*func_5138*/;
			break;
		case 108:
			uParam0->f_55 = 1663318/*func_5137*/;
			break;
		case 17:
			uParam0->f_17 = 1663273/*func_5136*/;
			break;
		case 19:
			uParam0->f_17 = 1663262/*func_5135*/;
			break;
		case 20:
			uParam0->f_3 = 1663215/*func_5134*/;
			break;
		case 21:
			uParam0->f_3 = 1663163/*func_5133*/;
			break;
		case 74:
			uParam0->f_53 = 1663107/*func_5132*/;
			break;
		case 22:
			uParam0->f_24 = 1663022/*func_5131*/;
			break;
		case 25:
			uParam0->f_23 = 1662055/*func_5126*/;
			break;
		case 30:
			uParam0->f_8 = 1661845/*func_5125*/;
			break;
		case 31:
			uParam0->f_39 = 1661814/*func_5124*/;
			break;
		case 33:
			uParam0->f_40 = 1661624/*func_5123*/;
			break;
		case 34:
			uParam0->f_41 = 1658419/*func_5121*/;
			break;
		case 36:
			uParam0->f_58 = 1658366/*func_5120*/;
			break;
		case 35:
			uParam0->f_42 = 1657175/*func_5118*/;
			break;
		case 45:
			uParam0->f_14 = 1657166/*func_5117*/;
			break;
		case 46:
			uParam0->f_14 = 1657157/*func_5116*/;
			break;
		case 110:
			uParam0->f_57 = 1657149/*func_5115*/;
			break;
		case 77:
			uParam0->f_13 = 1657138/*func_5114*/;
			break;
		case 47:
			uParam0->f_43 = 1657035/*func_5113*/;
			break;
		case 49:
			uParam0->f_8 = 1657010/*func_5112*/;
			break;
		case 50:
			*uParam0 = 1656972/*func_5111*/;
			break;
		case 51:
			*uParam0 = 1656963/*func_5110*/;
			break;
		case 52:
			uParam0->f_15 = 1656952/*func_5109*/;
			break;
		case 53:
			uParam0->f_13 = 1656871/*func_5108*/;
			break;
		case 54:
			uParam0->f_45 = 1656863/*func_5107*/;
			break;
		case 56:
			uParam0->f_46 = 1656854/*func_5106*/;
			break;
		case 57:
			uParam0->f_11 = 1656844/*func_5105*/;
			break;
		case 58:
			uParam0->f_13 = 1656637/*func_5104*/;
			break;
		case 64:
			uParam0->f_47 = 1656629/*func_5103*/;
			break;
		case 65:
			uParam0->f_21 = 1656621/*func_5102*/;
			break;
		case 66:
			uParam0->f_21 = 1656613/*func_5101*/;
			break;
		case 67:
			uParam0->f_21 = 1656605/*func_5100*/;
			break;
		case 68:
			*uParam0 = 1656596/*func_5099*/;
			break;
		case 69:
			*uParam0 = 1656587/*func_5098*/;
			break;
		case 70:
			uParam0->f_48 = 1656575/*func_5097*/;
			break;
		case 71:
			uParam0->f_49 = 1656566/*func_5096*/;
			break;
		case 107:
			uParam0->f_50 = 1656554/*func_5095*/;
			break;
		case 80:
			uParam0->f_7 = 1656545/*func_5094*/;
			break;
		case 73:
			uParam0->f_51 = 1656536/*func_5093*/;
			break;
		case 78:
			uParam0->f_59 = 1656528/*func_5092*/;
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
	if (__LIB_18__::func_763(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		__LIB_6__::func_439(iParam0, &Var6);
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_2__::func_560())
					{
						__LIB_18__::func_762(iParam0, -1);
					}
					bVar9 = __LIB_3__::func_419(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_18__::func_762(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_6__::func_438(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_6__::func_137(), true), ENTITY::GET_ENTITY_HEADING(__LIB_6__::func_137()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_5127(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_6__::func_438(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_6__::func_137(), true), ENTITY::GET_ENTITY_HEADING(__LIB_6__::func_137()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_5127(iParam0);
					}
					Jump @634; //curOff = 615
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_5127(int iParam0)//Position - 0x195EE4
{
	__LIB_18__::func_762(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_5154(var uParam0, int iParam1)//Position - 0x1964BE
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1741832/*func_5308*/;
			break;
		case 1:
			uParam0->f_30 = 1741776/*func_5307*/;
			break;
		case 2:
			uParam0->f_31 = 1740231/*func_5306*/;
			break;
		case 3:
			uParam0->f_34 = 1740182/*func_5305*/;
			break;
		case 4:
			uParam0->f_12 = 1740148/*func_5304*/;
			break;
		case 6:
			uParam0->f_32 = 1740084/*func_5303*/;
			break;
		case 111:
			uParam0->f_35 = 1740061/*func_5302*/;
			break;
		case 79:
			*uParam0 = 1740037/*func_5301*/;
			break;
		case 37:
			uParam0->f_18 = 1739919/*func_5300*/;
			break;
		case 38:
			uParam0->f_9 = 1739852/*func_5299*/;
			break;
		case 11:
			uParam0->f_11 = 1739843/*func_5298*/;
			break;
		case 12:
			uParam0->f_33 = 1739498/*func_5296*/;
			break;
		case 14:
			uParam0->f_11 = 1739489/*func_5295*/;
			break;
		case 109:
			uParam0->f_56 = 1739481/*func_5294*/;
			break;
		case 15:
			uParam0->f_2 = 1734153/*func_5272*/;
			break;
		case 13:
			uParam0->f_2 = 1734144/*func_5271*/;
			break;
		case 75:
			uParam0->f_4 = 1734135/*func_5270*/;
			break;
		case 16:
			uParam0->f_5 = 1734110/*func_5269*/;
			break;
		case 108:
			uParam0->f_55 = 1727584/*func_5254*/;
			break;
		case 17:
			uParam0->f_17 = 1727000/*func_5253*/;
			break;
		case 19:
			uParam0->f_17 = 1726974/*func_5252*/;
			break;
		case 20:
			uParam0->f_3 = 1726913/*func_5251*/;
			break;
		case 21:
			uParam0->f_3 = 1726793/*func_5250*/;
			break;
		case 74:
			uParam0->f_53 = 1726737/*func_5249*/;
			break;
		case 22:
			uParam0->f_24 = 1726652/*func_5248*/;
			break;
		case 25:
			uParam0->f_23 = 1725680/*func_5243*/;
			break;
		case 30:
			uParam0->f_8 = 1724940/*func_5242*/;
			break;
		case 31:
			uParam0->f_39 = 1724670/*func_5241*/;
			break;
		case 33:
			uParam0->f_40 = 1723759/*func_5239*/;
			break;
		case 34:
			uParam0->f_41 = 1720415/*func_5238*/;
			break;
		case 36:
			uParam0->f_58 = 1720362/*func_5237*/;
			break;
		case 35:
			uParam0->f_42 = 1719677/*func_5235*/;
			break;
		case 45:
			uParam0->f_14 = 1719668/*func_5234*/;
			break;
		case 46:
			uParam0->f_14 = 1719659/*func_5233*/;
			break;
		case 110:
			uParam0->f_57 = 1719216/*func_5232*/;
			break;
		case 77:
			uParam0->f_13 = 1719205/*func_5231*/;
			break;
		case 47:
			uParam0->f_43 = 1719102/*func_5230*/;
			break;
		case 49:
			uParam0->f_8 = 1719077/*func_5229*/;
			break;
		case 50:
			*uParam0 = 1719039/*func_5228*/;
			break;
		case 51:
			*uParam0 = 1719015/*func_5227*/;
			break;
		case 52:
			uParam0->f_15 = 1719004/*func_5226*/;
			break;
		case 53:
			uParam0->f_13 = 1718925/*func_5225*/;
			break;
		case 54:
			uParam0->f_45 = 1718917/*func_5224*/;
			break;
		case 56:
			uParam0->f_46 = 1718908/*func_5223*/;
			break;
		case 57:
			uParam0->f_11 = 1718898/*func_5222*/;
			break;
		case 58:
			uParam0->f_13 = 1718669/*func_5221*/;
			break;
		case 64:
			uParam0->f_47 = 1672313/*func_5189*/;
			break;
		case 65:
			uParam0->f_21 = 1671175/*func_5186*/;
			break;
		case 66:
			uParam0->f_21 = 1670949/*func_5184*/;
			break;
		case 67:
			uParam0->f_21 = 1670054/*func_5180*/;
			break;
		case 68:
			*uParam0 = 1669509/*func_5179*/;
			break;
		case 69:
			*uParam0 = 1669500/*func_5178*/;
			break;
		case 70:
			uParam0->f_48 = 1669488/*func_5177*/;
			break;
		case 71:
			uParam0->f_49 = 1669479/*func_5176*/;
			break;
		case 107:
			uParam0->f_50 = 1669467/*func_5175*/;
			break;
		case 80:
			uParam0->f_7 = 1667408/*func_5167*/;
			break;
		case 73:
			uParam0->f_51 = 1665654/*func_5160*/;
			break;
		case 78:
			uParam0->f_59 = 1665185/*func_5155*/;
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
	if (__LIB_19__::func_152(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_2018(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_2018(bVar7))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						__LIB_25__::func_491(iParam0, -1);
					}
					bVar9 = __LIB_3__::func_419(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_491(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_237(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_5244(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_237(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_5244(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_5244(int iParam0)//Position - 0x1A5783
{
	__LIB_25__::func_491(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_5309(var uParam0, int iParam1)//Position - 0x1A9411
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1777453/*func_5475*/;
			break;
		case 1:
			uParam0->f_30 = 1777337/*func_5474*/;
			break;
		case 2:
			uParam0->f_31 = 1776107/*func_5471*/;
			break;
		case 3:
			uParam0->f_34 = 1776037/*func_5470*/;
			break;
		case 4:
			uParam0->f_12 = 1775863/*func_5469*/;
			break;
		case 6:
			uParam0->f_32 = 1775739/*func_5468*/;
			break;
		case 106:
			uParam0->f_52 = 1775572/*func_5467*/;
			break;
		case 111:
			uParam0->f_35 = 1775558/*func_5466*/;
			break;
		case 79:
			*uParam0 = 1775534/*func_5465*/;
			break;
		case 37:
			uParam0->f_18 = 1775416/*func_5464*/;
			break;
		case 38:
			uParam0->f_9 = 1775216/*func_5462*/;
			break;
		case 11:
			uParam0->f_11 = 1775207/*func_5461*/;
			break;
		case 12:
			uParam0->f_33 = 1773503/*func_5459*/;
			break;
		case 14:
			uParam0->f_11 = 1773494/*func_5458*/;
			break;
		case 109:
			uParam0->f_56 = 1773486/*func_5457*/;
			break;
		case 15:
			uParam0->f_2 = 1772980/*func_5453*/;
			break;
		case 13:
			uParam0->f_2 = 1772941/*func_5452*/;
			break;
		case 44:
			*uParam0 = 1772932/*func_5451*/;
			break;
		case 75:
			uParam0->f_4 = 1772923/*func_5450*/;
			break;
		case 16:
			uParam0->f_5 = 1772500/*func_5446*/;
			break;
		case 108:
			uParam0->f_55 = 1770461/*func_5442*/;
			break;
		case 17:
			uParam0->f_17 = 1768324/*func_5434*/;
			break;
		case 19:
			uParam0->f_17 = 1768298/*func_5433*/;
			break;
		case 20:
			uParam0->f_3 = 1768214/*func_5432*/;
			break;
		case 21:
			uParam0->f_3 = 1768114/*func_5431*/;
			break;
		case 74:
			uParam0->f_53 = 1767947/*func_5430*/;
			break;
		case 22:
			uParam0->f_24 = 1767840/*func_5429*/;
			break;
		case 25:
			uParam0->f_23 = 1767188/*func_5427*/;
			break;
		case 30:
			uParam0->f_8 = 1766688/*func_5424*/;
			break;
		case 31:
			uParam0->f_39 = 1766395/*func_5423*/;
			break;
		case 33:
			uParam0->f_40 = 1765473/*func_5420*/;
			break;
		case 32:
			*uParam0 = 1765369/*func_5419*/;
			break;
		case 34:
			uParam0->f_41 = 1763224/*func_5418*/;
			break;
		case 35:
			uParam0->f_42 = 1677723/*func_5212*/;
			break;
		case 36:
			uParam0->f_58 = 1763164/*func_5417*/;
			break;
		case 45:
			uParam0->f_14 = 1763155/*func_5416*/;
			break;
		case 46:
			uParam0->f_14 = 1763146/*func_5415*/;
			break;
		case 110:
			uParam0->f_57 = 1762880/*func_5414*/;
			break;
		case 77:
			uParam0->f_13 = 1762869/*func_5413*/;
			break;
		case 47:
			uParam0->f_43 = 1762729/*func_5412*/;
			break;
		case 49:
			uParam0->f_8 = 1762688/*func_5411*/;
			break;
		case 50:
			*uParam0 = 1762597/*func_5410*/;
			break;
		case 51:
			*uParam0 = 1762513/*func_5409*/;
			break;
		case 52:
			uParam0->f_15 = 1762502/*func_5408*/;
			break;
		case 53:
			uParam0->f_13 = 1762220/*func_5407*/;
			break;
		case 54:
			uParam0->f_45 = 1762212/*func_5406*/;
			break;
		case 56:
			uParam0->f_46 = 1762203/*func_5405*/;
			break;
		case 57:
			uParam0->f_11 = 1762142/*func_5404*/;
			break;
		case 58:
			uParam0->f_13 = 1761860/*func_5403*/;
			break;
		case 64:
			uParam0->f_47 = 1759980/*func_5395*/;
			break;
		case 65:
			uParam0->f_21 = 1759937/*func_5394*/;
			break;
		case 66:
			uParam0->f_21 = 1759234/*func_5391*/;
			break;
		case 67:
			uParam0->f_21 = 1758150/*func_5383*/;
			break;
		case 68:
			*uParam0 = 1757559/*func_5381*/;
			break;
		case 69:
			*uParam0 = 1757550/*func_5380*/;
			break;
		case 70:
			uParam0->f_48 = 1757538/*func_5379*/;
			break;
		case 71:
			uParam0->f_49 = 1757529/*func_5378*/;
			break;
		case 107:
			uParam0->f_50 = 1757517/*func_5377*/;
			break;
		case 80:
			uParam0->f_7 = 1754845/*func_5365*/;
			break;
		case 84:
			uParam0->f_1 = 1752996/*func_5354*/;
			break;
		case 85:
			uParam0->f_1 = 1750662/*func_5348*/;
			break;
		case 87:
			uParam0->f_1 = 1746437/*func_5327*/;
			break;
		case 88:
			uParam0->f_1 = 1746428/*func_5326*/;
			break;
		case 90:
			uParam0->f_1 = 1746385/*func_5325*/;
			break;
		case 91:
			uParam0->f_1 = 1746084/*func_5323*/;
			break;
		case 92:
			uParam0->f_1 = 1745321/*func_5321*/;
			break;
		case 94:
			uParam0->f_1 = 1743821/*func_5320*/;
			break;
		case 102:
			uParam0->f_1 = 1743253/*func_5314*/;
			break;
		case 103:
			uParam0->f_22 = 1743245/*func_5313*/;
			break;
		case 104:
			uParam0->f_1 = 1743170/*func_5312*/;
			break;
		case 78:
			uParam0->f_59 = 1743096/*func_5311*/;
			break;
		case 125:
			uParam0->f_19 = 1743072/*func_5310*/;
			break;
	}
}

int func_5321(var uParam0, var uParam1)//Position - 0x1AA1A9
{
	__LIB_25__::func_103(&(Global_1946250.f_4073), 7500, "TruckTunel1", 919.1599f, -3242.047f, -97.191f, -4.6979f, 0.1417f, -118.0924f, 36.2643f, 920.1234f, -3242.478f, -97.1018f, 7.9062f, 0.1417f, -113.0609f, 36.2643f, 1f, 50, 0, 0, 0, 0);
	__LIB_25__::func_103(&(Global_1946250.f_4073), 6000, "TruckPark", 826.3912f, -3231.1902f, -98.5252f, 1.494f, -0.1848f, -114.9899f, 38.3697f, 826.9343f, -3231.013f, -97.8158f, -0.7301f, -0.1848f, -118.0463f, 38.3697f, 1f, 0, 0, 0, 0, 0);
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
		__LIB_2__::func_818(&(uParam1->f_109), 1);
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
	__LIB_3__::func_477(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
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
	__LIB_3__::func_478(uParam1);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_2__::func_399() == 1)
		{
			__LIB_7__::func_394(0);
		}
	}
	switch (__LIB_2__::func_399())
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				func_2813(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				iVar0 = 1;
				__LIB_7__::func_673(iParam0, &(uParam1->f_140[0]));
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
					__LIB_7__::func_673(iParam0, &(uParam1->f_109));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_109.f_12))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109.f_12, 50f, 50f, 50f, false, false, true);
					}
					__LIB_7__::func_673(iParam0, &(uParam1->f_109.f_12));
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
			__LIB_3__::func_477(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
			break;
	}
	if (!__LIB_7__::func_676(iParam0, uParam1))
	{
		return 0;
	}
	if (__LIB_18__::func_706(iParam0, &(uParam1->f_176[0]), &(uParam1->f_176[1]), 1101004800))
	{
		uParam1->f_183[0] = 0f;
		uParam1->f_183[1] = 0f;
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[0], false, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[1], false, false);
		uParam1->f_189[8 /*3*/] = { ENTITY::GET_ENTITY_ROTATION(uParam1->f_176[0], 2) };
	}
	if ((ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[0]) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[1])) && iVar0)
	{
		if (__LIB_2__::func_399() == 1)
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
		__LIB_3__::func_493(&(uParam1->f_109.f_1), 5f);
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
		if (!__LIB_7__::func_587(&(uParam1->f_109)))
		{
			return 0;
		}
		if (!__LIB_3__::func_491(&(uParam1->f_188), 15))
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
	if (__LIB_7__::func_680(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_3__::func_84(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(bVar7, 14)) && !func_2018(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(bVar7, 14)) && !func_2018(bVar7))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_2__::func_560())
					{
						__LIB_39__::func_285(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_39__::func_285(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_5428(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_5428(iParam0);
					}
					Jump @603; //curOff = 584
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_5428(int iParam0)//Position - 0x1AF972
{
	__LIB_39__::func_285(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_5476(var uParam0, int iParam1)//Position - 0x1B1F36
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1817733/*func_5548*/;
			break;
		case 1:
			uParam0->f_30 = 1817081/*func_5545*/;
			break;
		case 2:
			uParam0->f_31 = 1817018/*func_5543*/;
			break;
		case 3:
			uParam0->f_34 = 1816962/*func_5542*/;
			break;
		case 4:
			uParam0->f_12 = 1816247/*func_5541*/;
			break;
		case 6:
			uParam0->f_32 = 1816239/*func_5540*/;
			break;
		case 111:
			uParam0->f_35 = 1816230/*func_5539*/;
			break;
		case 79:
			*uParam0 = 1816206/*func_5538*/;
			break;
		case 11:
			uParam0->f_11 = 1816197/*func_5537*/;
			break;
		case 12:
			uParam0->f_33 = 1814369/*func_5534*/;
			break;
		case 14:
			uParam0->f_11 = 1814360/*func_5533*/;
			break;
		case 109:
			uParam0->f_56 = 1814352/*func_5532*/;
			break;
		case 13:
			uParam0->f_2 = 1814343/*func_5531*/;
			break;
		case 15:
			uParam0->f_2 = 1814334/*func_5530*/;
			break;
		case 75:
			uParam0->f_4 = 1814325/*func_5529*/;
			break;
		case 16:
			uParam0->f_5 = 1814316/*func_5528*/;
			break;
		case 108:
			uParam0->f_55 = 1814307/*func_5527*/;
			break;
		case 17:
			uParam0->f_17 = 1814281/*func_5526*/;
			break;
		case 19:
			uParam0->f_17 = 1814270/*func_5525*/;
			break;
		case 20:
			uParam0->f_3 = 1814261/*func_5524*/;
			break;
		case 21:
			uParam0->f_3 = 1814252/*func_5523*/;
			break;
		case 74:
			uParam0->f_53 = 1814243/*func_5522*/;
			break;
		case 22:
			uParam0->f_24 = 1814235/*func_5521*/;
			break;
		case 25:
			uParam0->f_23 = 1814227/*func_5520*/;
			break;
		case 30:
			uParam0->f_8 = 1813097/*func_5519*/;
			break;
		case 31:
			uParam0->f_39 = 1813086/*func_5518*/;
			break;
		case 33:
			uParam0->f_40 = 1813058/*func_5517*/;
			break;
		case 34:
			uParam0->f_41 = 1813049/*func_5516*/;
			break;
		case 36:
			uParam0->f_58 = 1813004/*func_5515*/;
			break;
		case 35:
			uParam0->f_42 = 1779325/*func_5512*/;
			break;
		case 45:
			uParam0->f_14 = 1779316/*func_5511*/;
			break;
		case 46:
			uParam0->f_14 = 1779307/*func_5510*/;
			break;
		case 110:
			uParam0->f_57 = 1779299/*func_5509*/;
			break;
		case 77:
			uParam0->f_13 = 1779288/*func_5508*/;
			break;
		case 47:
			uParam0->f_43 = 1779280/*func_5507*/;
			break;
		case 49:
			uParam0->f_8 = 1779271/*func_5506*/;
			break;
		case 50:
			*uParam0 = 1778972/*func_5500*/;
			break;
		case 51:
			*uParam0 = 1778943/*func_5499*/;
			break;
		case 52:
			uParam0->f_15 = 1778912/*func_5498*/;
			break;
		case 53:
			uParam0->f_13 = 1778878/*func_5497*/;
			break;
		case 54:
			uParam0->f_45 = 1778834/*func_5496*/;
			break;
		case 56:
			uParam0->f_46 = 1778805/*func_5495*/;
			break;
		case 57:
			uParam0->f_11 = 1778796/*func_5494*/;
			break;
		case 58:
			uParam0->f_13 = 1778739/*func_5492*/;
			break;
		case 64:
			uParam0->f_47 = 1778731/*func_5491*/;
			break;
		case 65:
			uParam0->f_21 = 1778723/*func_5490*/;
			break;
		case 66:
			uParam0->f_21 = 1778715/*func_5489*/;
			break;
		case 67:
			uParam0->f_21 = 1778707/*func_5488*/;
			break;
		case 68:
			*uParam0 = 1778681/*func_5487*/;
			break;
		case 69:
			*uParam0 = 1778655/*func_5486*/;
			break;
		case 70:
			uParam0->f_48 = 1778643/*func_5485*/;
			break;
		case 71:
			uParam0->f_49 = 1778634/*func_5484*/;
			break;
		case 107:
			uParam0->f_50 = 1778622/*func_5483*/;
			break;
		case 80:
			uParam0->f_7 = 1778613/*func_5482*/;
			break;
		case 78:
			uParam0->f_59 = 1778605/*func_5481*/;
			break;
		case 126:
			*uParam0 = 1778422/*func_5477*/;
			break;
	}
}

void func_5549(var uParam0, int iParam1)//Position - 0x1BC15E
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1861351/*func_5622*/;
			break;
		case 1:
			uParam0->f_30 = 1861041/*func_5621*/;
			break;
		case 2:
			uParam0->f_31 = 1856069/*func_5615*/;
			break;
		case 3:
			uParam0->f_34 = 1856040/*func_5614*/;
			break;
		case 4:
			uParam0->f_12 = 1855845/*func_5613*/;
			break;
		case 6:
			uParam0->f_32 = 1855495/*func_5612*/;
			break;
		case 111:
			uParam0->f_35 = 1855353/*func_5610*/;
			break;
		case 79:
			*uParam0 = 1855329/*func_5609*/;
			break;
		case 37:
			uParam0->f_18 = 1855119/*func_5608*/;
			break;
		case 38:
			uParam0->f_9 = 1855014/*func_5607*/;
			break;
		case 11:
			uParam0->f_11 = 1855005/*func_5606*/;
			break;
		case 12:
			uParam0->f_33 = 1854900/*func_5604*/;
			break;
		case 14:
			uParam0->f_11 = 1854891/*func_5603*/;
			break;
		case 109:
			uParam0->f_56 = 1854883/*func_5602*/;
			break;
		case 13:
			uParam0->f_2 = 1854874/*func_5601*/;
			break;
		case 44:
			*uParam0 = 1854865/*func_5600*/;
			break;
		case 15:
			uParam0->f_2 = 1854576/*func_5599*/;
			break;
		case 75:
			uParam0->f_4 = 1854567/*func_5598*/;
			break;
		case 16:
			uParam0->f_5 = 1854483/*func_5597*/;
			break;
		case 108:
			uParam0->f_55 = 1854474/*func_5596*/;
			break;
		case 17:
			uParam0->f_17 = 1853852/*func_5594*/;
			break;
		case 19:
			uParam0->f_17 = 1853652/*func_5593*/;
			break;
		case 20:
			uParam0->f_3 = 1853588/*func_5592*/;
			break;
		case 21:
			uParam0->f_3 = 1853528/*func_5591*/;
			break;
		case 74:
			uParam0->f_53 = 1853519/*func_5590*/;
			break;
		case 22:
			uParam0->f_24 = 1853276/*func_5589*/;
			break;
		case 25:
			uParam0->f_23 = 1852972/*func_5588*/;
			break;
		case 30:
			uParam0->f_8 = 1852834/*func_5587*/;
			break;
		case 31:
			uParam0->f_39 = 1852394/*func_5585*/;
			break;
		case 33:
			uParam0->f_40 = 1851729/*func_5580*/;
			break;
		case 34:
			uParam0->f_41 = 1849149/*func_5579*/;
			break;
		case 36:
			uParam0->f_58 = 1849104/*func_5578*/;
			break;
		case 35:
			uParam0->f_42 = 1823125/*func_5577*/;
			break;
		case 45:
			uParam0->f_14 = 1822897/*func_5576*/;
			break;
		case 46:
			uParam0->f_14 = 1822721/*func_5575*/;
			break;
		case 110:
			uParam0->f_57 = 1822713/*func_5574*/;
			break;
		case 77:
			uParam0->f_13 = 1822702/*func_5573*/;
			break;
		case 47:
			uParam0->f_43 = 1822460/*func_5572*/;
			break;
		case 49:
			uParam0->f_8 = 1822428/*func_5571*/;
			break;
		case 50:
			*uParam0 = 1822362/*func_5570*/;
			break;
		case 51:
			*uParam0 = 1822338/*func_5569*/;
			break;
		case 52:
			uParam0->f_15 = 1822155/*func_5568*/;
			break;
		case 53:
			uParam0->f_13 = 1821560/*func_5566*/;
			break;
		case 54:
			uParam0->f_45 = 1821323/*func_5565*/;
			break;
		case 56:
			uParam0->f_46 = 1821314/*func_5564*/;
			break;
		case 57:
			uParam0->f_11 = 1821249/*func_5563*/;
			break;
		case 58:
			uParam0->f_13 = 1820827/*func_5562*/;
			break;
		case 64:
			uParam0->f_47 = 1820819/*func_5561*/;
			break;
		case 65:
			uParam0->f_21 = 1820811/*func_5560*/;
			break;
		case 66:
			uParam0->f_21 = 1820751/*func_5559*/;
			break;
		case 67:
			uParam0->f_21 = 1820733/*func_5558*/;
			break;
		case 68:
			*uParam0 = 1820724/*func_5557*/;
			break;
		case 69:
			*uParam0 = 1820715/*func_5556*/;
			break;
		case 70:
			uParam0->f_48 = 1820211/*func_5555*/;
			break;
		case 71:
			uParam0->f_49 = 1820063/*func_5554*/;
			break;
		case 107:
			uParam0->f_50 = 1820018/*func_5553*/;
			break;
		case 80:
			uParam0->f_7 = 1820009/*func_5552*/;
			break;
		case 78:
			uParam0->f_59 = 1820001/*func_5551*/;
			break;
		case 125:
			uParam0->f_19 = 1819985/*func_5550*/;
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
	if (__LIB_1__::func_359(PLAYER::PLAYER_ID()) && __LIB_7__::func_959(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_3__::func_553(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_19__::func_834())
		{
			bVar2 = __LIB_2__::func_377(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::func_160() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_264(bVar2, 1, 1)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_2__::func_509(bVar2, 14)) && !func_2018(bVar2))
			{
				Var1 = { __LIB_1__::func_265(bVar2) };
				Var1.f_2 = 0f;
				if (SYSTEM::VDIST(Var1, Var0) <= IntToFloat(__LIB_3__::func_807(iParam0)))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 == 0)
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		if (__LIB_2__::func_444(1, iParam1))
		{
			if (iVar3 > 0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
			}
			Global_1946250.f_504 = -1;
			__LIB_18__::func_658(1, iParam0);
			Global_1946250.f_3607 = 0;
			Global_1946250.f_3612 = 1;
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
	}
}

void func_5623(var uParam0, int iParam1)//Position - 0x1C66F0
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1896317/*func_5752*/;
			break;
		case 1:
			uParam0->f_30 = 1896207/*func_5751*/;
			break;
		case 2:
			uParam0->f_31 = 1893715/*func_5746*/;
			break;
		case 3:
			uParam0->f_34 = 1893686/*func_5745*/;
			break;
		case 4:
			uParam0->f_12 = 1893526/*func_5744*/;
			break;
		case 6:
			uParam0->f_32 = 1893408/*func_5743*/;
			break;
		case 111:
			uParam0->f_35 = 1893191/*func_5740*/;
			break;
		case 79:
			*uParam0 = 1893167/*func_5739*/;
			break;
		case 37:
			uParam0->f_18 = 1893049/*func_5738*/;
			break;
		case 38:
			uParam0->f_9 = 1892898/*func_5735*/;
			break;
		case 11:
			uParam0->f_11 = 1892889/*func_5734*/;
			break;
		case 12:
			uParam0->f_33 = 1891886/*func_5731*/;
			break;
		case 14:
			uParam0->f_11 = 1891877/*func_5730*/;
			break;
		case 109:
			uParam0->f_56 = 1891869/*func_5729*/;
			break;
		case 13:
			uParam0->f_2 = 1891860/*func_5728*/;
			break;
		case 15:
			uParam0->f_2 = 1891706/*func_5727*/;
			break;
		case 75:
			uParam0->f_4 = 1891697/*func_5726*/;
			break;
		case 16:
			uParam0->f_5 = 1891609/*func_5725*/;
			break;
		case 108:
			uParam0->f_55 = 1890819/*func_5719*/;
			break;
		case 17:
			uParam0->f_17 = 1890189/*func_5715*/;
			break;
		case 19:
			uParam0->f_17 = 1890163/*func_5714*/;
			break;
		case 20:
			uParam0->f_3 = 1890124/*func_5713*/;
			break;
		case 21:
			uParam0->f_3 = 1890064/*func_5712*/;
			break;
		case 74:
			uParam0->f_53 = 1890055/*func_5711*/;
			break;
		case 22:
			uParam0->f_24 = 1890001/*func_5710*/;
			break;
		case 25:
			uParam0->f_23 = 1889697/*func_5709*/;
			break;
		case 30:
			uParam0->f_8 = 1889574/*func_5708*/;
			break;
		case 31:
			uParam0->f_39 = 1889354/*func_5707*/;
			break;
		case 33:
			uParam0->f_40 = 1889069/*func_5706*/;
			break;
		case 34:
			uParam0->f_41 = 1888663/*func_5705*/;
			break;
		case 36:
			uParam0->f_58 = 1888618/*func_5704*/;
			break;
		case 35:
			uParam0->f_42 = 1871085/*func_5703*/;
			break;
		case 45:
			uParam0->f_14 = 1871076/*func_5702*/;
			break;
		case 46:
			uParam0->f_14 = 1870992/*func_5701*/;
			break;
		case 110:
			uParam0->f_57 = 1870984/*func_5700*/;
			break;
		case 77:
			uParam0->f_13 = 1870961/*func_5699*/;
			break;
		case 47:
			uParam0->f_43 = 1870909/*func_5698*/;
			break;
		case 49:
			uParam0->f_8 = 1870877/*func_5697*/;
			break;
		case 50:
			*uParam0 = 1870699/*func_5696*/;
			break;
		case 51:
			*uParam0 = 1870602/*func_5695*/;
			break;
		case 52:
			uParam0->f_15 = 1870591/*func_5694*/;
			break;
		case 53:
			uParam0->f_13 = 1870276/*func_5692*/;
			break;
		case 54:
			uParam0->f_45 = 1869412/*func_5685*/;
			break;
		case 56:
			uParam0->f_46 = 1869403/*func_5684*/;
			break;
		case 57:
			uParam0->f_11 = 1864645/*func_5649*/;
			break;
		case 58:
			uParam0->f_13 = 1864631/*func_5648*/;
			break;
		case 64:
			uParam0->f_47 = 1863193/*func_5635*/;
			break;
		case 65:
			uParam0->f_21 = 1863185/*func_5634*/;
			break;
		case 66:
			uParam0->f_21 = 1863134/*func_5633*/;
			break;
		case 67:
			uParam0->f_21 = 1863106/*func_5632*/;
			break;
		case 68:
			*uParam0 = 1863097/*func_5631*/;
			break;
		case 69:
			*uParam0 = 1863088/*func_5630*/;
			break;
		case 70:
			uParam0->f_48 = 1862804/*func_5629*/;
			break;
		case 71:
			uParam0->f_49 = 1862708/*func_5628*/;
			break;
		case 107:
			uParam0->f_50 = 1862696/*func_5627*/;
			break;
		case 80:
			uParam0->f_7 = 1862510/*func_5626*/;
			break;
		case 78:
			uParam0->f_59 = 1862338/*func_5624*/;
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
	if (__LIB_2__::func_192(PLAYER::PLAYER_ID()) && __LIB_4__::func_51(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_3__::func_600(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_19__::func_834())
		{
			bVar2 = __LIB_2__::func_377(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::func_160() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_264(bVar2, 1, 1)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_2__::func_509(bVar2, 14)) && !func_2018(bVar2))
			{
				Var1 = { __LIB_1__::func_265(bVar2) };
				Var1.f_2 = 0f;
				if (SYSTEM::VDIST(Var1, Var0) <= IntToFloat(__LIB_3__::func_807(iParam0)))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 == 0)
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		if (__LIB_2__::func_444(1, iParam1))
		{
			if (iVar3 > 0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
			}
			Global_1946250.f_504 = -1;
			__LIB_18__::func_658(1, iParam0);
			Global_1946250.f_3607 = 0;
			Global_1946250.f_3612 = 1;
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
	}
}

void func_5753(var uParam0, int iParam1)//Position - 0x1CEF86
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1923949/*func_5823*/;
			break;
		case 1:
			uParam0->f_30 = 1923803/*func_5822*/;
			break;
		case 2:
			uParam0->f_31 = 1918577/*func_5816*/;
			break;
		case 3:
			uParam0->f_34 = 1918548/*func_5815*/;
			break;
		case 4:
			uParam0->f_12 = 1918138/*func_5813*/;
			break;
		case 6:
			uParam0->f_32 = 1917968/*func_5812*/;
			break;
		case 111:
			uParam0->f_35 = 1917573/*func_5809*/;
			break;
		case 79:
			*uParam0 = 1917549/*func_5808*/;
			break;
		case 11:
			uParam0->f_11 = 1917540/*func_5807*/;
			break;
		case 12:
			uParam0->f_33 = 1917445/*func_5805*/;
			break;
		case 14:
			uParam0->f_11 = 1917436/*func_5804*/;
			break;
		case 109:
			uParam0->f_56 = 1917428/*func_5803*/;
			break;
		case 13:
			uParam0->f_2 = 1917419/*func_5802*/;
			break;
		case 15:
			uParam0->f_2 = 1917134/*func_5799*/;
			break;
		case 75:
			uParam0->f_4 = 1917125/*func_5798*/;
			break;
		case 16:
			uParam0->f_5 = 1917037/*func_5797*/;
			break;
		case 108:
			uParam0->f_55 = 1917028/*func_5796*/;
			break;
		case 17:
			uParam0->f_17 = 1916769/*func_5795*/;
			break;
		case 19:
			uParam0->f_17 = 1916743/*func_5794*/;
			break;
		case 20:
			uParam0->f_3 = 1916734/*func_5793*/;
			break;
		case 21:
			uParam0->f_3 = 1916725/*func_5792*/;
			break;
		case 74:
			uParam0->f_53 = 1916716/*func_5791*/;
			break;
		case 22:
			uParam0->f_24 = 1916708/*func_5790*/;
			break;
		case 25:
			uParam0->f_23 = 1916700/*func_5789*/;
			break;
		case 30:
			uParam0->f_8 = 1916577/*func_5788*/;
			break;
		case 31:
			uParam0->f_39 = 1916331/*func_5787*/;
			break;
		case 33:
			uParam0->f_40 = 1916075/*func_5786*/;
			break;
		case 34:
			uParam0->f_41 = 1914091/*func_5785*/;
			break;
		case 36:
			uParam0->f_58 = 1914046/*func_5784*/;
			break;
		case 35:
			uParam0->f_42 = 1899597/*func_5783*/;
			break;
		case 45:
			uParam0->f_14 = 1899588/*func_5782*/;
			break;
		case 46:
			uParam0->f_14 = 1899579/*func_5781*/;
			break;
		case 110:
			uParam0->f_57 = 1899571/*func_5780*/;
			break;
		case 77:
			uParam0->f_13 = 1899560/*func_5779*/;
			break;
		case 47:
			uParam0->f_43 = 1899508/*func_5778*/;
			break;
		case 49:
			uParam0->f_8 = 1899476/*func_5777*/;
			break;
		case 50:
			*uParam0 = 1899347/*func_5776*/;
			break;
		case 51:
			*uParam0 = 1899323/*func_5775*/;
			break;
		case 52:
			uParam0->f_15 = 1899312/*func_5774*/;
			break;
		case 53:
			uParam0->f_13 = 1898661/*func_5772*/;
			break;
		case 54:
			uParam0->f_45 = 1898056/*func_5769*/;
			break;
		case 56:
			uParam0->f_46 = 1898047/*func_5768*/;
			break;
		case 57:
			uParam0->f_11 = 1897980/*func_5767*/;
			break;
		case 58:
			uParam0->f_13 = 1897966/*func_5766*/;
			break;
		case 64:
			uParam0->f_47 = 1897587/*func_5765*/;
			break;
		case 65:
			uParam0->f_21 = 1897512/*func_5763*/;
			break;
		case 66:
			uParam0->f_21 = 1897461/*func_5762*/;
			break;
		case 67:
			uParam0->f_21 = 1897443/*func_5761*/;
			break;
		case 68:
			*uParam0 = 1897434/*func_5760*/;
			break;
		case 69:
			*uParam0 = 1897425/*func_5759*/;
			break;
		case 70:
			uParam0->f_48 = 1897308/*func_5758*/;
			break;
		case 71:
			uParam0->f_49 = 1897299/*func_5757*/;
			break;
		case 107:
			uParam0->f_50 = 1897287/*func_5756*/;
			break;
		case 80:
			uParam0->f_7 = 1897278/*func_5755*/;
			break;
		case 78:
			uParam0->f_59 = 1897270/*func_5754*/;
			break;
	}
}

void func_5824(var uParam0, int iParam1)//Position - 0x1D5B76
{
	switch (iParam1)
	{
		case 96:
			uParam0->f_1 = 1924416/*func_5831*/;
			break;
		case 97:
			uParam0->f_1 = 1924407/*func_5830*/;
			break;
		case 98:
			uParam0->f_1 = 1924398/*func_5829*/;
			break;
		case 99:
			uParam0->f_1 = 1924238/*func_5828*/;
			break;
		case 100:
			uParam0->f_22 = 1924230/*func_5827*/;
			break;
		case 101:
			uParam0->f_22 = 1924075/*func_5825*/;
			break;
	}
}

void func_5832(var uParam0, int iParam1)//Position - 0x1D5D49
{
	switch (iParam1)
	{
		case 90:
			uParam0->f_1 = 1924633/*func_5837*/;
			break;
		case 91:
			uParam0->f_1 = 1924624/*func_5836*/;
			break;
		case 92:
			uParam0->f_1 = 1924615/*func_5835*/;
			break;
		case 93:
			uParam0->f_1 = 1924238/*func_5828*/;
			break;
		case 94:
			uParam0->f_1 = 1924606/*func_5834*/;
			break;
		case 95:
			uParam0->f_22 = 1924542/*func_5833*/;
			break;
	}
}

void func_5838(var uParam0, int iParam1)//Position - 0x1D5E22
{
	switch (iParam1)
	{
		case 84:
			uParam0->f_1 = 1924860/*func_5842*/;
			break;
		case 85:
			uParam0->f_1 = 1924851/*func_5841*/;
			break;
		case 86:
			uParam0->f_1 = 1924238/*func_5828*/;
			break;
		case 87:
			uParam0->f_1 = 1924842/*func_5840*/;
			break;
		case 89:
			uParam0->f_54 = 1924742/*func_5839*/;
			break;
	}
}

void func_5883(var uParam0, bool bParam1)//Position - 0x1D748D
{
	if (__LIB_6__::func_144(&(uParam0->f_1)) != 0)
	{
		if (bParam1)
		{
			__LIB_8__::func_788(uParam0, 1);
		}
		func_1282(uParam0);
		MISC::CLEAR_BIT(&Global_2621446, 3);
		MISC::CLEAR_BIT(&(uParam0->f_1), 4);
	}
}

void func_5897()//Position - 0x1D767C
{
	__LIB_1__::func_769(PLAYER::PLAYER_ID(), 1);
	__LIB_7__::func_909();
	__LIB_21__::func_361();
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
	__LIB_41__::func_319(&Global_1941652, 0);
	__LIB_35__::func_769(&Global_1941652);
	func_5883(&Global_1941652, 0);
	__LIB_11__::func_71();
	__LIB_11__::func_70();
	if (BitTest(Global_2815059.f_5194, 3))
	{
		__LIB_0__::func_801();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && BitTest(Global_2815059.f_5194, 2))
	{
		__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	if (BitTest(Global_2815059.f_5194, 4))
	{
		__LIB_2__::func_333();
	}
	__LIB_1__::func_485(24);
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
	__LIB_0__::func_186();
	if (__LIB_0__::func_695(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (((bParam4 && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 1)
		{
		}
		else if (__LIB_0__::func_496() == 28)
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
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_703) < __LIB_0__::func_638(0))
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
				if (!__LIB_8__::func_555())
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
						__LIB_19__::func_238(&iVar2);
					}
					else
					{
						iVar2 = __LIB_1__::func_232();
						__LIB_25__::func_671(&iVar2);
					}
					if (__LIB_8__::func_555())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == Global_2667225.f_45.f_67)
							{
								iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (iVar4 == Global_2667225.f_45.f_173)
								{
									__LIB_4__::func_318();
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
							__LIB_25__::func_270(1);
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
					__LIB_25__::func_270(1);
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
					if (func_5962(Global_2667225.f_706, Global_2667225.f_706.f_1, __LIB_8__::func_133(Global_2667225.f_45.f_67), Global_2667225.f_709, 0))
					{
						Global_2667225.f_704 = NETWORK::GET_NETWORK_TIME();
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 5;
					}
				}
				else if (__LIB_1__::func_928(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0)
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
				__LIB_37__::func_941(Global_2667225.f_706);
			}
			if (bParam7 && !Global_2703735.f_910)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if ((ENTITY::IS_ENTITY_DEAD(iVar2, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false)) || __LIB_0__::func_578(iVar2))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
			if (bVar5)
			{
				if (__LIB_18__::func_544(Global_2667225.f_706, Global_2667225.f_709, bVar1, bParam1, 0, 0, 1, bParam4, bParam16, 1, Global_2667225.f_2898))
				{
					if (bParam15)
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 7;
						return 0;
					}
					else
					{
						__LIB_32__::func_10();
					}
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 7)
		{
			if ((Global_2667225.f_702 == 8 && Global_2667225.f_714.f_507) && Global_2667225.f_2878)
			{
				__LIB_32__::func_10();
			}
			else if (__LIB_32__::func_22(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) || __LIB_5__::func_692())
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
				__LIB_32__::func_10();
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
									ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + __LIB_18__::func_308(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
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
								ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + __LIB_18__::func_308(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
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
					__LIB_18__::func_493(iParam9, 0, 0);
				}
			}
			__LIB_25__::func_132(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173))
			{
				__LIB_4__::func_318();
			}
			if (!(__LIB_1__::func_928(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0) && !Global_2667225.f_490.f_5)
			{
				func_5924(0, 0);
			}
			__LIB_3__::func_678(0, 0);
			if (bParam10)
			{
				__LIB_1__::func_914();
			}
			__LIB_0__::func_744();
			__LIB_35__::func_647();
			if (bParam13)
			{
				__LIB_0__::func_639();
			}
			__LIB_0__::func_643();
			return 1;
		}
	}
	else if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		__LIB_25__::func_671(&(Global_2667225.f_45.f_173));
		__LIB_0__::func_643();
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
	if (!__LIB_1__::func_927(iParam0, iParam1, bVar0))
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
			if (__LIB_7__::func_131(ENTITY::GET_ENTITY_MODEL(iParam1)))
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
			if ((Global_2667225.f_2699 == -99 || Global_2667225.f_2699 == 0) || !__LIB_0__::func_709(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, Global_2667225.f_2699, -1))
			{
				if (!bParam0)
				{
					iVar1 = __LIB_1__::func_556(589, -1, 0);
				}
			}
			else
			{
				iVar1 = Global_2667225.f_2699;
			}
			Var0 = { __LIB_35__::func_588(__LIB_1__::func_558(), 14, iVar1, -1) };
			__LIB_1__::func_924(PLAYER::PLAYER_PED_ID(), 14, iVar1);
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
	if (__LIB_8__::func_303(PLAYER::PLAYER_ID()))
	{
	}
	iVar0 = __LIB_1__::func_232();
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
				if (__LIB_5__::func_695(iVar2))
				{
					if (!bVar4)
					{
						func_5953(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), 0, 0);
						return 1;
					}
					else if (__LIB_1__::func_946() != -1 || BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
					{
						__LIB_1__::func_945(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false));
						iVar5 = __LIB_1__::func_944(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), 1, 0, 0, -3);
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_2667225.f_45.f_173, __LIB_1__::func_946(), false))
						{
							iVar5 = __LIB_1__::func_946();
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
		if (__LIB_8__::func_769(iVar0))
		{
			if ((__LIB_8__::func_555() && ENTITY::GET_ENTITY_MODEL(iVar0) == Global_2667225.f_45.f_67) || !__LIB_8__::func_555())
			{
				if (!__LIB_8__::func_456(ENTITY::GET_ENTITY_COORDS(iVar0, true), 30f, 1, 1, 0, 0, 0, 0, 0))
				{
					if (bParam2)
					{
						ENTITY::SET_ENTITY_COORDS(iVar0, __LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
					}
					func_6132(iVar0);
					return 1;
				}
			}
		}
	}
	if (Global_1836584 || __LIB_0__::func_851())
	{
		__LIB_25__::func_671(&iVar0);
	}
	if (func_6128())
	{
		__LIB_25__::func_671(&(Global_2667225.f_45.f_173));
		if (__LIB_2__::func_65())
		{
			if (__LIB_1__::func_190(44) && VEHICLE::IS_VEHICLE_DRIVEABLE(__LIB_2__::func_64(), false))
			{
				ENTITY::SET_ENTITY_COORDS(__LIB_2__::func_64(), __LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(__LIB_2__::func_64(), fParam1);
				func_6106(__LIB_2__::func_64());
				return 1;
			}
			else if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != __LIB_0__::func_662())
			{
				if (__LIB_7__::func_138(__LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), fParam1, __LIB_1__::func_165(), 1))
				{
					func_6106(__LIB_2__::func_64());
					return 1;
				}
			}
			else if (func_5965(__LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 1, __LIB_1__::func_165(), 0, 1, 0))
			{
				func_6106(__LIB_2__::func_64());
				return 1;
			}
		}
		else if (__LIB_18__::func_220(&iVar1, Global_2667225.f_45.f_69.f_66, __LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0))
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
				__LIB_1__::func_930(NETWORK::NET_TO_VEH(iVar1));
			}
			__LIB_1__::func_929(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_69);
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
	if (!__LIB_1__::func_190(8))
	{
		__LIB_3__::func_437(0, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_245(8);
	}
	if (Global_1585857[iParam3 /*142*/].f_66 == 0)
	{
		return 1;
	}
	if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 6))
	{
		if (!__LIB_1__::func_190(16))
		{
			__LIB_1__::func_245(16);
		}
	}
	__LIB_1__::func_245(31);
	if (!__LIB_7__::func_94())
	{
		if (!__LIB_1__::func_190(0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(__LIB_7__::func_194(0)))
			{
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (!__LIB_0__::func_648())
					{
						if (!__LIB_4__::func_316())
						{
							__LIB_37__::func_835(iParam3);
							iVar1 = Global_1585857[iParam3 /*142*/].f_66;
							if (!__LIB_1__::func_371(iVar1) || !__LIB_7__::func_193(iVar1, 1))
							{
								if (!__LIB_0__::func_113(iVar1))
								{
								}
								else
								{
									__LIB_35__::func_937(iParam3, -1);
								}
								return 1;
							}
							else if (__LIB_0__::func_584(iVar1))
							{
								iVar3 = 0;
								if ((NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2703735.f_61.f_69) < 15)
								{
									iVar3 = 1;
								}
								if (__LIB_0__::func_747())
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
								if (__LIB_5__::func_694(PLAYER::PLAYER_ID()) || (CAM::IS_SCREEN_FADED_OUT() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()))
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
									if (__LIB_25__::func_21(&Param0, &fParam1))
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
									__LIB_18__::func_220(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38), iVar1, Param0, fParam1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0);
									NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38, PLAYER::PLAYER_ID(), true);
									iVar0 = NETWORK::NET_TO_VEH(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38);
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, true);
									VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar0, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
									__LIB_42__::func_272(&iVar0, iParam3);
									if ((__LIB_1__::func_221() || __LIB_1__::func_936()) || __LIB_1__::func_935())
									{
										ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
									}
									__LIB_25__::func_535(iVar0, iParam3);
									if (!bVar5)
									{
										NETWORK::NETWORK_FADE_IN_ENTITY(iVar0, true, 1);
									}
									if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
									{
										__LIB_1__::func_245(34);
									}
									else
									{
										__LIB_1__::func_191(34);
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
													__LIB_40__::func_24(iVar11);
													bVar10 = true;
												}
												if (bVar10)
												{
													__LIB_35__::func_565(iVar11, &(Global_1585857[iVar11 /*142*/]), 1, -1, 0, 0);
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
									__LIB_35__::func_565(iParam3, &(Global_1585857[iParam3 /*142*/]), 1, -1, 0, 0);
									__LIB_18__::func_986(iVar0);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
									if (bParam2)
									{
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
									}
									__LIB_1__::func_245(0);
									__LIB_1__::func_245(44);
									__LIB_1__::func_191(10);
									__LIB_1__::func_191(1);
									__LIB_1__::func_191(2);
									__LIB_1__::func_191(9);
									__LIB_1__::func_191(12);
									__LIB_1__::func_191(31);
									__LIB_1__::func_191(32);
									__LIB_1__::func_191(33);
									__LIB_1__::func_191(35);
									__LIB_1__::func_191(37);
									__LIB_1__::func_191(38);
									__LIB_1__::func_931();
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
	if (!__LIB_2__::func_61())
	{
		return 0;
	}
	if (__LIB_1__::func_122() && !Global_2667225.f_680 == MISC::GET_FRAME_COUNT())
	{
		if (!Global_2667225.f_676 == 0)
		{
			Global_2667225.f_676 = 0;
			__LIB_0__::func_639();
			__LIB_0__::func_599();
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_675)
	{
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_638(0))
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
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) > __LIB_0__::func_638(1))
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_6088(Param0))
		{
			if (__LIB_2__::func_60(&Param0, 1))
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
		__LIB_0__::func_636();
		__LIB_0__::func_639();
		if (!uParam6->f_27 || (((((((__LIB_19__::func_233(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2815059.f_924) && !Global_2815059.f_913) && !Global_2815059.f_921) && !Global_2815059.f_925) && !Global_2815059.f_933) && !Global_2815059.f_945))
		{
			__LIB_32__::func_59(Param0, iParam2);
		}
		if (__LIB_32__::func_85(Param0))
		{
			__LIB_32__::func_59(Param0, iParam2);
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
				if (((uParam6->f_3 && __LIB_25__::func_475(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !__LIB_25__::func_374(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0))
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
				__LIB_8__::func_551(Global_2667225.f_683, Global_2667225.f_686, iParam2, &(Global_2667225.f_673));
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
							if (__LIB_18__::func_420(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 1036831949))
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
						__LIB_0__::func_606(-1);
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
				__LIB_0__::func_606(-1);
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
								if (__LIB_25__::func_370(Global_2667225.f_683, Global_2667225.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || __LIB_25__::func_369(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_6014(Global_2667225.f_683, 0);
									__LIB_0__::func_606(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_6014(Global_2667225.f_683, 0);
								__LIB_0__::func_606(-1);
							}
						}
					}
					else
					{
						__LIB_0__::func_606(-1);
					}
				}
				else
				{
					__LIB_0__::func_606(1);
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
		__LIB_6__::func_912(1);
		return 1;
	}
	return 0;
}

void func_6014(struct<3> Param0, int iParam1)//Position - 0x1DF82D
{
	struct<3> Var0;
	if (iParam1 == 0 && __LIB_0__::func_607(Param0, 0.01f))
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
		if (__LIB_18__::func_371(uParam0, 1))
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
	if (__LIB_6__::func_902(uParam2->f_34) != 0)
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
					if (!__LIB_24__::func_959(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!__LIB_2__::func_38(Var1))
									{
										Var1 = { __LIB_24__::func_992(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, bVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!__LIB_25__::func_373(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (__LIB_7__::func_119(Var1, uParam2))
														{
															if ((uParam2->f_48 && !__LIB_18__::func_371(&Var1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !__LIB_32__::func_84(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
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
																					if (!__LIB_25__::func_72(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (__LIB_25__::func_475(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (__LIB_25__::func_475(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_25__::func_369(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar22 = __LIB_32__::func_58(Var1, uParam2->f_54, &fVar23);
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
																									if (__LIB_7__::func_119(Var1, uParam2))
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
						__LIB_31__::func_894(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, bVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
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
						if (func_6055(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || __LIB_18__::func_371(&Var27, bVar29))
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
				__LIB_37__::func_866(&Global_1574205, uParam0, uParam1, *uParam0);
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
	if (!__LIB_7__::func_119(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		__LIB_0__::func_609(iParam0);
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
	if (__LIB_18__::func_494(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (__LIB_0__::func_607(*uParam1, 1056964608))
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
				__LIB_1__::func_120(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
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
				if (__LIB_6__::func_922(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, bParam4, 0))
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
							__LIB_7__::func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_6058(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								__LIB_7__::func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
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
			if (__LIB_18__::func_371(uParam0, 1))
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
			__LIB_6__::func_904(*uParam0);
		}
		else if (uParam2->f_29)
		{
			__LIB_0__::func_623();
		}
		else
		{
			__LIB_0__::func_622();
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
							if ((uParam2->f_12 && !__LIB_32__::func_84(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
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
										if (!__LIB_25__::func_72(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (__LIB_25__::func_475(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (__LIB_25__::func_475(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_25__::func_369(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar11 = __LIB_32__::func_58(Var3, uParam2->f_54, &fVar12);
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
			if (!__LIB_7__::func_452(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!__LIB_7__::func_137(Param0, 1008981770))
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
				iVar0 = __LIB_7__::func_136(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { __LIB_0__::func_637(&(Global_2667225.f_45[iVar0 /*12*/])) };
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
	__LIB_1__::func_945(iParam0);
	Global_1585234 = iParam0;
	if (Global_2667225.f_45.f_172)
	{
		__LIB_41__::func_924(iParam0, 1);
	}
	else
	{
		__LIB_32__::func_386(iParam0, __LIB_1__::func_267(PLAYER::PLAYER_ID()));
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
		if (__LIB_1__::func_949())
		{
			iVar2 = __LIB_1__::func_947(__LIB_1__::func_948());
			if (iVar2 > -1)
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
				*uParam0 = iVar3;
			}
			if (*uParam0 != __LIB_0__::func_160() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
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
				iVar5 = __LIB_1__::func_947(iVar0);
				if (iVar5 > -1)
				{
					iVar6 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar5);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar6))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar6);
						if (!__LIB_0__::func_695(iVar7, 0, 0) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar7)))
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
						if (!__LIB_1__::func_389())
						{
							iVar0 = 0;
							while (iVar0 < 32)
							{
								bVar1 = iVar0;
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
								{
									if (__LIB_1__::func_264(bVar1, 0, 1))
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
									if (__LIB_1__::func_264(bVar1, 0, 1))
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
	if (__LIB_1__::func_389())
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
	else if (__LIB_1__::func_949())
	{
		return 1;
	}
	return 0;
}

int func_6123()//Position - 0x1EB9EF
{
	var uVar0;
	if (__LIB_1__::func_950() || ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964))
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
	if (__LIB_8__::func_555())
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
		if (__LIB_2__::func_65())
		{
			Global_2667225.f_45.f_69.f_66 = Global_1585857[__LIB_1__::func_165() /*142*/].f_66;
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
						if (__LIB_8__::func_303(PLAYER::PLAYER_ID()) && !Global_2667225.f_45.f_67 == 0)
						{
							bVar0 = true;
							if (Global_2667225.f_45.f_172)
							{
							}
						}
						else
						{
							Global_2667225.f_45.f_69.f_66 = ENTITY::GET_ENTITY_MODEL(Global_2667225.f_2669);
							__LIB_32__::func_386(Global_2667225.f_2669, __LIB_1__::func_267(PLAYER::PLAYER_ID()));
							bVar0 = true;
						}
					}
				}
			}
		}
		if (Global_2667225.f_45.f_67 == 0 && !bVar0)
		{
			__LIB_1__::func_953();
			VEHICLE::GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(true, &(Global_2667225.f_45.f_69.f_66), &uVar1);
			if (Global_2667225.f_45.f_69.f_66 == 0)
			{
				Global_2667225.f_45.f_69.f_66 = __LIB_1__::func_952();
			}
		}
		else if (!__LIB_2__::func_65())
		{
			if (Global_2667225.f_45.f_172)
			{
				if (!Global_2667225.f_45.f_69.f_66 == Global_2667225.f_45.f_67 && !__LIB_1__::func_255())
				{
					__LIB_1__::func_953();
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
	if (__LIB_7__::func_129(iParam0, &bVar0))
	{
		VEHICLE::SET_VEHICLE_FIXED(iParam0);
		__LIB_1__::func_964(iParam0);
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
			if (__LIB_7__::func_309(PLAYER::PLAYER_ID()))
			{
				__LIB_27__::func_262(iParam0);
			}
		}
		__LIB_18__::func_379(iParam0);
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
			__LIB_1__::func_959(iParam0);
			VEHICLE::SET_VEHICLE_NO_EXPLOSION_DAMAGE_FROM_DRIVER(iParam0, !__LIB_0__::func_851());
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
					__LIB_1__::func_958(iParam0, 1);
					__LIB_1__::func_957(iParam0, 1);
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
			if (__LIB_1__::func_956(ENTITY::GET_ENTITY_MODEL(iParam0)))
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
						__LIB_1__::func_955(iParam0);
					}
				}
			}
		}
		if (Global_1836588)
		{
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iParam0, false);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iParam0));
		if (__LIB_3__::func_803(PLAYER::PLAYER_ID()) == 189)
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
		if (BitTest(Global_4718592.f_18, 24) || (__LIB_1__::func_954() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
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
		if (!__LIB_0__::func_640(PLAYER::PLAYER_ID()) && !Global_2689235[PLAYER::PLAYER_ID() /*453*/] == 10)
		{
			return 0;
		}
	}
	if (!Global_2667225.f_676 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_638(0))
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
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_611) < __LIB_0__::func_638(0))
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
		__LIB_0__::func_636();
		if (bParam10)
		{
			__LIB_0__::func_639();
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
					__LIB_8__::func_552(Global_2667225.f_623, &(Global_2667225.f_660), iParam9, Global_2667225.f_489 == 37, iParam11);
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
						if (((Global_2667225.f_518 && !__LIB_5__::func_697()) && __LIB_8__::func_206(Global_2676213, Global_2676213.f_4, &Var2, 1)) && Global_2667225.f_2735 == 0)
						{
							func_6014(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
							__LIB_1__::func_967(-1);
						}
						else if (bParam10)
						{
							if (iParam11 != 0)
							{
								bVar1 = __LIB_18__::func_420(Global_2667225.f_623[Global_2667225.f_659 /*3*/], Global_2667225.f_623.f_16[Global_2667225.f_659], iParam11, 1, 0.5f);
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
								bVar1 = __LIB_2__::func_68(Global_2667225.f_623[Global_2667225.f_659 /*3*/], fVar3);
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
						__LIB_1__::func_967(-1);
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
								__LIB_1__::func_967(-1);
							}
						}
					}
					else
					{
						__LIB_1__::func_967(-1);
					}
				}
				else
				{
					__LIB_1__::func_967(1);
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
		__LIB_0__::func_636();
		if (bParam10)
		{
			if (!__LIB_1__::func_194(PLAYER::PLAYER_ID()))
			{
				__LIB_0__::func_639();
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
		if (!__LIB_1__::func_264(PLAYER::PLAYER_ID(), 0, 0))
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
				if (__LIB_8__::func_456(Global_2676213, 150f, 1, 1, 0, 0, 0, 0, 0))
				{
					__LIB_8__::func_554(Global_2676213);
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
		__LIB_7__::func_149();
		Global_2667225.f_592 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_591 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_701 = 0;
		Global_2667225.f_515 = 0;
		Global_2667225.f_520 = { Global_2667225.f_45.f_49 };
		Global_2667225.f_520.f_3 = Global_2667225.f_45.f_55;
		Global_2667225.f_520.f_4 = Global_2667225.f_45.f_58;
		Global_2667225.f_520.f_30 = __LIB_25__::func_378();
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
		if (Global_2667225.f_489 == 0 || __LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
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
		if (__LIB_7__::func_452(PLAYER::PLAYER_ID(), 1))
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
			iVar20 = __LIB_18__::func_441(Global_2676213);
			if (!iVar20 == -1)
			{
				if (__LIB_2__::func_57(iVar20))
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
			if (__LIB_2__::func_1())
			{
				__LIB_1__::func_225();
				Global_2667225.f_714 = 0;
				Global_2667225.f_714.f_507 = 0;
				Global_2667225.f_1753 = 1;
				Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
				__LIB_2__::func_0(-244.901f, -1872.177f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-242.269f, -1874.479f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-239.598f, -1876.816f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-247.704f, -1869.726f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-236.735f, -1879.32f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-250.483f, -1867.467f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-248.407f, -1872.989f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-245.403f, -1875.617f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-242.785f, -1877.907f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-239.945f, -1880.198f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-251.046f, -1870.666f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-248.619f, -1876.538f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-245.901f, -1878.915f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-251.704f, -1873.939f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-243.08f, -1881.227f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-254.677f, -1871.325f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-240.536f, -1883.448f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-249.174f, -1880.18f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-252.283f, -1877.461f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-246.515f, -1882.422f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-243.805f, -1884.522f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-255.306f, -1874.902f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-252.491f, -1881.033f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-249.84f, -1883.351f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-246.886f, -1885.774f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-255.641f, -1878.175f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-244.281f, -1887.739f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-258.593f, -1875.691f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-252.767f, -1884.144f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-255.851f, -1881.482f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-249.88f, -1886.704f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-247.44f, -1888.838f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-258.886f, -1878.827f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-255.952f, -1884.801f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-252.956f, -1887.422f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-259.415f, -1881.773f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-250.369f, -1889.685f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-247.647f, -1892.065f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-262.138f, -1879.391f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-262.407f, -1882.811f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-259.277f, -1885.549f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-256.124f, -1888.094f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-253.225f, -1890.3f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-250.782f, -1892.779f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-259.683f, -1889.221f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-256.577f, -1891.824f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-263.24f, -1886.216f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-253.867f, -1894.197f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-251.258f, -1896.412f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-265.974f, -1883.944f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-262.935f, -1890.089f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-259.884f, -1892.674f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-256.943f, -1895.166f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-254.535f, -1897.206f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-266.469f, -1887.118f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-263.243f, -1893.539f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-260.093f, -1896.223f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-266.754f, -1890.547f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-257.35f, -1898.561f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-254.516f, -1900.976f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-269.729f, -1888.013f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-266.428f, -1894.181f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-263.278f, -1896.865f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-260.367f, -1899.345f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-269.969f, -1891.167f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-257.512f, -1901.782f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-266.696f, -1897.666f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-263.54f, -1900.354f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-260.638f, -1902.827f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-270.469f, -1894.45f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-267.222f, -1901.522f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-270.747f, -1898.559f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-264.211f, -1904.128f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-260.75f, -1907.078f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-274.372f, -1895.47f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-271.19f, -1902.058f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-268.033f, -1904.748f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-264.135f, -1908.07f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-275.113f, -1898.959f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-271.775f, -1906.207f, 26.755f, 320.797f, 1065353216);
				Global_2667225.f_489 = 8;
				bVar39 = true;
			}
		}
		if (Global_2667225.f_489 == 47)
		{
			__LIB_1__::func_225();
			Global_2667225.f_714 = 0;
			Global_2667225.f_714.f_507 = 0;
			Global_2667225.f_1753 = 1;
			Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
			__LIB_2__::func_0(975.7955f, 89.2188f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(974.2166f, 85.8614f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(971.4763f, 91.6587f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(966.8154f, 94.2058f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(963.103f, 96.5164f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(969.834f, 88.5924f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(968.1555f, 85.3428f, 79.9886f, 327.1991f, 1065353216);
			__LIB_2__::func_0(965.324f, 82.3137f, 79.783f, 327.1991f, 1065353216);
			__LIB_2__::func_0(960.2003f, 80.9701f, 79.7694f, 267.1988f, 1065353216);
			__LIB_2__::func_0(953.6874f, 82.8776f, 79.7694f, 243.1988f, 1065353216);
			__LIB_2__::func_0(947.6548f, 86.1658f, 79.7688f, 243.1988f, 1065353216);
			__LIB_2__::func_0(946.0387f, 82.9043f, 79.7687f, 243.1988f, 1065353216);
			__LIB_2__::func_0(944.2261f, 88.6068f, 79.7694f, 243.1988f, 1065353216);
			__LIB_2__::func_0(939.5576f, 94.646f, 78.3392f, 229.9987f, 1065353216);
			__LIB_2__::func_0(935.759f, 96.2394f, 78.2388f, 229.9987f, 1065353216);
			__LIB_2__::func_0(944.3122f, 79.7098f, 79.7572f, 323.1983f, 1065353216);
			__LIB_2__::func_0(941.9835f, 75.9773f, 79.615f, 323.1983f, 1065353216);
			__LIB_2__::func_0(939.4975f, 71.6506f, 79.4041f, 323.1983f, 1065353216);
			__LIB_2__::func_0(936.4024f, 66.9599f, 79.1841f, 323.1983f, 1065353216);
			__LIB_2__::func_0(942.0676f, 92.2227f, 78.9701f, 215.598f, 1065353216);
			__LIB_2__::func_0(927.3275f, 77.3361f, 77.7679f, 321.5972f, 1065353216);
			__LIB_2__::func_0(925.1186f, 73.9533f, 78.0651f, 321.5972f, 1065353216);
			__LIB_2__::func_0(922.8524f, 70.4011f, 78.7589f, 321.5972f, 1065353216);
			__LIB_2__::func_0(920.554f, 66.8094f, 79.4079f, 321.5972f, 1065353216);
			__LIB_2__::func_0(963.9402f, 100.739f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_0(965.7116f, 103.4286f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_0(967.3428f, 106.3218f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_0(969.3038f, 109.405f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_0(971.3239f, 112.691f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_0(973.8073f, 116.3687f, 79.9907f, 148.5968f, 1065353216);
			Global_2667225.f_489 = 8;
			bVar39 = true;
		}
		if (Global_2667225.f_489 == 52)
		{
			__LIB_1__::func_225();
			Global_2667225.f_714 = 0;
			Global_2667225.f_714.f_507 = 0;
			Global_2667225.f_1753 = 1;
			Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
			__LIB_2__::func_0(4915.7783f, -4909.681f, 2.3612f, 103.8461f, 1065353216);
			__LIB_2__::func_0(4909.4385f, -4906.013f, 2.3634f, 109.708f, 1065353216);
			__LIB_2__::func_0(4904.6245f, -4901.7183f, 2.3729f, 137.2815f, 1065353216);
			__LIB_2__::func_0(4917.557f, -4913.6855f, 2.3654f, 91.1262f, 1065353216);
			__LIB_2__::func_0(4907.624f, -4916.6104f, 2.3844f, 77.3005f, 1065353216);
			__LIB_2__::func_0(4908.8486f, -4927.182f, 2.3643f, 97.1531f, 1065353216);
			__LIB_2__::func_0(4904.1626f, -4933.243f, 2.3827f, 191.0743f, 1065353216);
			__LIB_2__::func_0(4899.703f, -4939.501f, 2.3622f, 91.3685f, 1065353216);
			__LIB_2__::func_0(4891.084f, -4934.5527f, 2.371f, 6.1066f, 1065353216);
			__LIB_2__::func_0(4895.8794f, -4930.5977f, 2.3695f, 21.2846f, 1065353216);
			__LIB_2__::func_0(4899.386f, -4926.6353f, 2.3645f, 21.563f, 1065353216);
			__LIB_2__::func_0(4894.8906f, -4926.3525f, 2.3615f, 359.2048f, 1065353216);
			__LIB_2__::func_0(4890.1616f, -4923.4365f, 2.3687f, 331.7434f, 1065353216);
			__LIB_2__::func_0(4895.319f, -4919.933f, 2.3677f, 350.2109f, 1065353216);
			__LIB_2__::func_0(4893.8384f, -4915.3374f, 2.3677f, 359.7902f, 1065353216);
			__LIB_2__::func_0(4899.7866f, -4914.1606f, 2.3602f, 27.4791f, 1065353216);
			__LIB_2__::func_0(4902.5293f, -4910.4746f, 2.3611f, 49.2944f, 1065353216);
			__LIB_2__::func_0(4891.711f, -4908.211f, 2.3643f, 323.4907f, 1065353216);
			__LIB_2__::func_0(4885.5215f, -4908.0737f, 2.3678f, 269.5604f, 1065353216);
			__LIB_2__::func_0(4887.267f, -4914.138f, 2.3628f, 310.3737f, 1065353216);
			__LIB_2__::func_0(4877.007f, -4914.598f, 2.2139f, 115.4889f, 1065353216);
			__LIB_2__::func_0(4871.36f, -4908.873f, 1.9205f, 105.6631f, 1065353216);
			__LIB_2__::func_0(4867.8022f, -4916.4653f, 1.5922f, 103.4375f, 1065353216);
			__LIB_2__::func_0(4871.824f, -4926.4834f, 2.0005f, 201.6436f, 1065353216);
			__LIB_2__::func_0(4871.41f, -4929.5703f, 1.9024f, 321.9481f, 1065353216);
			__LIB_2__::func_0(4868.713f, -4935.9365f, 1.4152f, 66.3723f, 1065353216);
			__LIB_2__::func_0(4866.783f, -4942.452f, 1.4781f, 77.1681f, 1065353216);
			__LIB_2__::func_0(4863.705f, -4950.777f, 1.4398f, 58.9161f, 1065353216);
			__LIB_2__::func_0(4859.92f, -4941.887f, 0.5639f, 76.0326f, 1065353216);
			__LIB_2__::func_0(4861.563f, -4927.4663f, 0.3028f, 90.8218f, 1065353216);
			__LIB_2__::func_0(4861.4985f, -4916.6597f, 0.3063f, 87.146f, 1065353216);
			__LIB_2__::func_0(4893.1226f, -4902.395f, 2.4867f, 189.5973f, 1065353216);
			__LIB_2__::func_0(4896.938f, -4903.806f, 2.3717f, 152.5383f, 1065353216);
			__LIB_2__::func_0(4927.5137f, -4907.376f, 2.5188f, 114.7115f, 1065353216);
			Global_2667225.f_489 = 8;
			bVar39 = true;
		}
		switch (Global_2667225.f_489)
		{
			case 57:
				__LIB_35__::func_780(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 58:
				__LIB_35__::func_779(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 9:
				__LIB_35__::func_702(&Global_1574067, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
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
					__LIB_3__::func_679();
				}
				break;
			case 7:
				Global_2667225.f_555 = { 23.6269f, -17.1858f, 0.0025f };
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_2697 = 1;
				bVar2 = true;
				break;
			case 12:
				__LIB_35__::func_702(&Global_1574100, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1123024896);
				bVar2 = true;
				break;
			case 51:
				__LIB_7__::func_148();
				Global_2667225.f_593 = { Global_2667225.f_512 };
				Var17.f_2 = Global_2667225.f_512.f_2;
				__LIB_2__::func_89(&(Global_2667225.f_512), Global_1574465, Global_1574465.f_1, 0f, Global_1574468, Global_1574471, 1036831949, 1048576000);
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
				if (__LIB_19__::func_35(PLAYER::PLAYER_ID()))
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
				iVar38 = __LIB_7__::func_135(Var17, 0);
				if (iVar38 > -1)
				{
					if (Global_2672169[iVar38 /*17*/].f_9 == 0)
					{
						__LIB_1__::func_996(&Var17, &(Global_2672169[iVar38 /*17*/]), 135f);
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
					if (__LIB_1__::func_264(Global_1888188, 0, 1))
					{
						if (__LIB_25__::func_372(Global_1888188))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_1__::func_265(Global_1888188) };
							if (!__LIB_7__::func_452(PLAYER::PLAYER_ID(), 1))
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
					if (__LIB_0__::func_613(Var17, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1, 1))
					{
						__LIB_1__::func_120(&Var17, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1036831949, 0, 0);
					}
					iVar0++;
				}
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var17, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, false, true))
				{
					__LIB_1__::func_942(&Var17, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, 1036831949, 0);
				}
				Global_2667225.f_555 = { Var17 };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				if (Global_2667225.f_45.f_307 > -1f)
				{
					Global_2667225.f_520.f_5 = Global_2667225.f_45.f_307;
				}
				if (__LIB_19__::func_35(PLAYER::PLAYER_ID()))
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
				if (__LIB_19__::func_35(PLAYER::PLAYER_ID()))
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
				Var13 = { __LIB_25__::func_481(Global_2667225.f_555, fVar12) };
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
					iVar42 = __LIB_1__::func_994(&iVar41);
					if (iVar42 < 17)
					{
						if (BitTest(Global_4718592.f_658[iVar41 /*22957*/].f_7965[iVar42], 12) && (!Global_1574981 || BitTest(Global_4718592.f_658[iVar41 /*22957*/].f_7965[iVar42], 13)))
						{
							iVar40 = 1;
						}
					}
				}
				if (__LIB_8__::func_555() || iVar40)
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
					if (Global_1836068.f_14 != __LIB_0__::func_160())
					{
						if (__LIB_1__::func_264(Global_1836068.f_14, 0, 1))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_1__::func_265(Global_1836068.f_14) };
							if (__LIB_8__::func_555())
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
					if (__LIB_0__::func_613(Var14, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1, 1))
					{
						__LIB_1__::func_120(&Var14, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1036831949, 0, 0);
					}
					iVar0++;
				}
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var14, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, false, true))
				{
					__LIB_1__::func_942(&Var14, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, 1036831949, 0);
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
				if (__LIB_8__::func_555())
				{
					Global_2667225.f_555.f_4 = 400f;
					Global_2667225.f_596 = 100f;
					bParam2 = true;
				}
				break;
			case 2:
				Global_2667225.f_555 = { __LIB_5__::func_703() };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 26:
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					iVar9 = __LIB_2__::func_88(__LIB_1__::func_265(PLAYER::PLAYER_ID()));
				}
				else
				{
					iVar9 = __LIB_2__::func_88(Global_2667225.f_512);
				}
				__LIB_1__::func_993(&(Global_2667225.f_45[iVar9 /*12*/]));
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_555.f_18 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
				}
				else
				{
					Global_2667225.f_555.f_18 = { Global_2667225.f_512 };
				}
				if (__LIB_19__::func_35(PLAYER::PLAYER_ID()))
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
				if (!__LIB_6__::func_922(Var21, &(Global_2667225.f_45[iVar9 /*12*/]), 1008981770, 0, 0))
				{
					__LIB_7__::func_202(&Var21, &(Global_2667225.f_45[iVar9 /*12*/]), fVar29);
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
				iVar30 = __LIB_32__::func_58(Var21, fVar35, &uVar43);
				if (iVar30 > 0 || Global_2667225.f_555.f_15)
				{
					if (Global_2667225.f_555.f_15)
					{
						Var21 = { __LIB_32__::func_91(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 1, &(Global_2667225.f_555.f_25)) };
						if (!Global_2667225.f_555.f_25)
						{
							Var21 = { __LIB_32__::func_91(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 0, &(Global_2667225.f_555.f_25)) };
						}
						Global_2667225.f_596 = 0f;
						fVar36 = 40f;
					}
					else
					{
						bVar31 = false;
						Var22 = { __LIB_25__::func_480(Var21, fVar35) };
						Var23 = { __LIB_25__::func_479(Var21, fVar35) };
						Var24 = { Var21 - Var22 };
						Var24 = { Var24 / FtoV(SYSTEM::VMAG(Var24)) };
						Var24 = { Var24 * Vector(fVar35, fVar35, fVar35) };
						iVar0 = 0;
						while (iVar0 < 4)
						{
							Var14 = { Var24 };
							__LIB_0__::func_602(&Var14, 0f, 0f, (SYSTEM::TO_FLOAT(iVar0) * 90f));
							Var25[iVar0 /*3*/] = { Var22 + Var14 };
							if (!__LIB_6__::func_922(Var25[iVar0 /*3*/], &(Global_2667225.f_45[iVar9 /*12*/]), 1008981770, 0, 0))
							{
								__LIB_7__::func_202(&(Var25[iVar0 /*3*/]), &(Global_2667225.f_45[iVar9 /*12*/]), 1036831949);
							}
							uVar26[iVar0] = __LIB_32__::func_58(Var25[iVar0 /*3*/], fVar35, &(uVar28[iVar0]));
							Var14 = { Var22 - Var25[iVar0 /*3*/] };
							if (__LIB_0__::func_156(Var14, Var23) < 0f)
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
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_1__::func_990());
				__LIB_1__::func_993(&(Global_2667225.f_45[iVar0 /*12*/]));
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
					Var17 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
				}
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
				{
					iVar15 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
					Var17 = { Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/] };
				}
				fVar10 = __LIB_1__::func_989(Var17, &Global_2671974, &iVar7);
				if (__LIB_8__::func_48(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 29)
					{
						iVar15 = __LIB_8__::func_48(iVar0, -1);
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
							__LIB_25__::func_53(iVar8, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
						__LIB_1__::func_993(&(Global_2671974[iVar7 /*12*/]));
					}
					else
					{
						__LIB_1__::func_993(&(Global_2671974[0 /*12*/]));
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
				fVar10 = __LIB_1__::func_989(Var17, &Global_2671974, &iVar7);
				if (iVar7 > -1)
				{
					__LIB_1__::func_993(&(Global_2671974[iVar7 /*12*/]));
				}
				else
				{
					__LIB_1__::func_993(&(Global_2671974[0 /*12*/]));
				}
				Global_2667225.f_2696 = 1;
				Global_2667225.f_701 = 1;
				break;
			case 25:
				Var17 = { Global_2676213 };
				fVar11 = __LIB_1__::func_989(Var17, &Global_2672120, &iVar8);
				if (iVar8 > -1)
				{
					__LIB_1__::func_993(&(Global_2672120[iVar8 /*12*/]));
				}
				else
				{
					__LIB_1__::func_993(&(Global_2672120[0 /*12*/]));
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
				fVar10 = __LIB_1__::func_989(Var17, &Global_2672035, &iVar7);
				if (iVar7 > -1)
				{
					__LIB_1__::func_993(&(Global_2672035[iVar7 /*12*/]));
				}
				else
				{
					__LIB_1__::func_993(&(Global_2672035[0 /*12*/]));
				}
				Global_2667225.f_701 = 1;
				break;
			case 22:
				Var17 = { Global_2676213 };
				fVar10 = __LIB_1__::func_989(Var17, &Global_2671974, &iVar7);
				if (__LIB_8__::func_48(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 29)
					{
						iVar15 = __LIB_8__::func_48(iVar0, -1);
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
							__LIB_25__::func_53(iVar8, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
						__LIB_1__::func_993(&(Global_2671974[iVar7 /*12*/]));
					}
					else
					{
						__LIB_1__::func_993(&(Global_2671974[0 /*12*/]));
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
					iVar16 = __LIB_25__::func_340();
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
					iVar16 = __LIB_25__::func_340();
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
						__LIB_25__::func_53(iVar15, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
				if (__LIB_32__::func_87())
				{
					iVar20 = __LIB_1__::func_332(__LIB_0__::func_582());
					if (iVar20 <= 0)
					{
					}
					__LIB_7__::func_222(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
					bVar2 = true;
					Global_2667225.f_701 = 1;
				}
				else
				{
					Global_2667225.f_555 = { func_6286(__LIB_0__::func_582()) };
					Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				}
				break;
			case 27:
				iVar20 = __LIB_4__::func_319();
				if (iVar20 <= 0)
				{
				}
				__LIB_7__::func_222(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
				bVar2 = true;
				Global_2667225.f_701 = 1;
				break;
			case 29:
				if (Global_2667225.f_2855 < 0)
				{
				}
				__LIB_7__::func_222(Global_2667225.f_2855, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
				bVar2 = true;
				Global_2667225.f_701 = 1;
				break;
			case 30:
				if (Global_2667225.f_2855 < 0)
				{
				}
				__LIB_7__::func_146(0, Global_2667225.f_2855, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1);
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
				iVar20 = __LIB_4__::func_319();
				switch (Global_4196263[iVar20 /*2012*/].f_34)
				{
					case 2:
						switch (__LIB_1__::func_261())
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
								__LIB_18__::func_421(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
				iVar16 = __LIB_25__::func_340();
				if (iVar16 <= 0)
				{
				}
				if (iVar16 > 128)
				{
					iVar16 = Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1303;
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
						switch (__LIB_1__::func_261())
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
								__LIB_25__::func_53(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
				iVar16 = __LIB_8__::func_48(5, -1);
				if (iVar16 <= 0)
				{
				}
				else
				{
					__LIB_1__::func_985(iVar16);
				}
				iVar15 = iVar16;
				switch (__LIB_1__::func_261())
				{
					case 4:
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/] };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/].f_3;
						break;
					case 5:
						__LIB_18__::func_381(iVar15, 612, &Var44, __LIB_1__::func_984(iVar15), 0);
						Global_2667225.f_555 = { Var44 };
						Global_2667225.f_555.f_3 = Var44.f_3.f_2;
						break;
					default:
						__LIB_25__::func_53(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
				iVar16 = __LIB_8__::func_48(6, -1);
				if (iVar16 <= 0)
				{
					if (Global_2667225.f_2684 == 0)
					{
					}
				}
				else
				{
					__LIB_1__::func_985(iVar16);
				}
				if (Global_2667225.f_2685 > -1)
				{
					iVar16 = Global_2667225.f_2685;
					Global_2667225.f_2685 = -1;
				}
				iVar15 = iVar16;
				switch (__LIB_1__::func_261())
				{
					case 5:
						__LIB_18__::func_381(iVar15, 612, &Var45, __LIB_1__::func_984(iVar15), 0);
						Global_2667225.f_555 = { Var45 };
						Global_2667225.f_555.f_3 = Var45.f_3.f_2;
						break;
					case 6:
						__LIB_18__::func_381(iVar15, 912, &Var45, __LIB_1__::func_984(iVar15), 0);
						Global_2667225.f_555 = { Var45 };
						Global_2667225.f_555.f_3 = Var45.f_3.f_2;
						break;
					default:
						__LIB_25__::func_53(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
				switch (__LIB_1__::func_261())
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
							switch (__LIB_0__::func_598(PLAYER::PLAYER_ID()))
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
							iVar46 = __LIB_1__::func_260(__LIB_3__::func_592(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 40)
						{
							iVar46 = __LIB_1__::func_248(__LIB_3__::func_349(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 41)
						{
							iVar46 = __LIB_1__::func_246(__LIB_3__::func_404(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 42)
						{
							iVar46 = __LIB_1__::func_243(__LIB_3__::func_282(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 43)
						{
							iVar46 = __LIB_1__::func_231(__LIB_1__::func_234(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 44)
						{
							if (Global_2715699.f_6602)
							{
								iVar47 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_2715699.f_6603));
								if (iVar47 != __LIB_0__::func_160())
								{
									iVar46 = __LIB_1__::func_227(__LIB_1__::func_228(iVar47));
								}
							}
							else
							{
								iVar46 = __LIB_1__::func_227(__LIB_1__::func_228(PLAYER::PLAYER_ID()));
							}
						}
						else if (Global_2667225.f_489 == 45)
						{
							iVar46 = 123;
						}
						else if (Global_2667225.f_489 == 46)
						{
							iVar46 = __LIB_1__::func_222(__LIB_1__::func_223(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 48)
						{
							iVar46 = __LIB_1__::func_218(__LIB_1__::func_219(PLAYER::PLAYER_ID()));
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
							iVar46 = __LIB_1__::func_195(__LIB_1__::func_196(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 56)
						{
							iVar46 = __LIB_1__::func_166(__LIB_0__::func_598(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 59)
						{
							iVar46 = 148;
						}
						if (iVar46 != -1)
						{
							__LIB_25__::func_672(iVar46, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), Global_2671449.f_26);
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
					Global_2667225.f_555 = { __LIB_5__::func_701() };
					Global_2667225.f_555 = { __LIB_2__::func_75(Global_2667225.f_555, 50f, 25f) };
				}
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 31:
				if (__LIB_2__::func_192(PLAYER::PLAYER_ID()))
				{
					iVar37 = __LIB_5__::func_700(PLAYER::PLAYER_ID(), 1);
					if (!iVar37 == __LIB_0__::func_160())
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
					Global_2667225.f_555 = { func_6286(__LIB_0__::func_582()) };
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
				if (__LIB_2__::func_192(PLAYER::PLAYER_ID()))
				{
					iVar37 = __LIB_5__::func_700(PLAYER::PLAYER_ID(), 1);
					if (!iVar37 == __LIB_0__::func_160())
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
					Global_2667225.f_555 = { func_6286(__LIB_0__::func_582()) };
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
				Global_2667225.f_555 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 20f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 37:
				Global_2667225.f_555 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
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
				Global_2667225.f_555 = { __LIB_7__::func_199(Global_2667225.f_555) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 21:
				Global_2667225.f_555 = { __LIB_2__::func_73(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 200f) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 6:
				Global_2667225.f_555 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
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
					if (__LIB_8__::func_206(Global_2667225.f_555, Global_2667225.f_555.f_4, &(Global_2667225.f_555), 0))
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
				if (Global_2667225.f_490.f_3 && !__LIB_25__::func_538(Global_2676213))
				{
					Global_2667225.f_555 = { __LIB_32__::func_186() };
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
		if (__LIB_25__::func_476(Global_2667225.f_555, &iVar0))
		{
			Global_2667225.f_515 = 1;
		}
		if (bParam2 && iParam4 == 0)
		{
			if (__LIB_25__::func_378())
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
					if (!__LIB_1__::func_977(Var17))
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
			if ((__LIB_0__::func_698() && __LIB_8__::func_555()) && func_6058(&(Global_2667225.f_512), 0, 0, 0, 1))
			{
				Var48.f_10 = 0;
			}
			Var48.f_9 = uParam5;
			Var48.f_11 = __LIB_25__::func_477();
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
			if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
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
			if (((iVar0 == 0 && Global_2667225.f_489 == 26) && Global_2667225.f_555.f_25) && func_6236(&(Var18[iVar0 /*3*/]), __LIB_7__::func_137(Var18[iVar0 /*3*/], 1008981770)))
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
			if ((__LIB_1__::func_62(Global_2667225.f_489) && !__LIB_7__::func_137(Var18[iVar0 /*3*/], 0.01f)) && !__LIB_25__::func_378())
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
						__LIB_1__::func_973(&Var18, &iVar0);
					}
				}
			}
			else if ((__LIB_8__::func_456(Var18[iVar0 /*3*/], 3.5f, 1, 1, 0, 0, 0, 0, 0) || __LIB_32__::func_184(Var18[iVar0 /*3*/], 0.5f, PLAYER::PLAYER_ID(), 0, 0)) || Global_2667225.f_45.f_304)
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
						__LIB_1__::func_973(&Var18, &iVar0);
					}
				}
			}
			else
			{
				__LIB_1__::func_973(&Var18, &iVar0);
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
		Global_2667225.f_520.f_9 = __LIB_25__::func_477();
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
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) < __LIB_0__::func_638(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) < __LIB_0__::func_638(0))
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			__LIB_1__::func_93();
		}
		Global_2667225.f_2464 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) > __LIB_0__::func_638(0))
	{
		Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
		__LIB_7__::func_98();
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
		__LIB_1__::func_93();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (__LIB_25__::func_475(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
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
				__LIB_1__::func_87(Var6.f_0, Var6.f_1);
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
					if (__LIB_1__::func_86(Global_4718592.f_168757))
					{
						Var14.f_9 = 1;
					}
					Var14.f_60 = uParam0->f_30;
					func_6019(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!__LIB_0__::func_613(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
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
				if (uParam0->f_5 && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
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
				__LIB_7__::func_97(Var6.f_0, Var6.f_1);
			}
		}
		if (Global_2667225.f_2465 == 3)
		{
			if (__LIB_1__::func_85() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 10000)
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
				__LIB_7__::func_98();
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
							__LIB_1__::func_972(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
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
							__LIB_1__::func_972(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
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
				if (!__LIB_1__::func_66(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
					{
						iVar0++;
					}
				}
			}
			else if (!__LIB_1__::func_65(uParam0->f_8, uParam0->f_11, uParam0->f_14))
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
					__LIB_1__::func_972(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
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
										if (__LIB_0__::func_613(Global_2667225.f_2625[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									case 1:
										if (__LIB_6__::func_903(Global_2667225.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
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
				if (__LIB_1__::func_62(Global_2667225.f_489))
				{
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__::func_61(uParam2, &(Global_2667225.f_2491.f_6));
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
			__LIB_1__::func_93();
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
						if (__LIB_1__::func_66(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 1:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__::func_65(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 2:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__::func_65(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
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
		if (__LIB_3__::func_902(PLAYER::PLAYER_ID(), 0))
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
		if (!__LIB_7__::func_218(Var0, uParam5->f_7, Var8, Var9, fVar10))
		{
			if (func_6168(*uParam0, &Var0, iVar6, iParam3, 0))
			{
				if (!__LIB_7__::func_218(Var0, uParam5->f_7, Var8, Var9, fVar10))
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
	if (__LIB_1__::func_64(Param0, uParam1))
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
			if (!__LIB_25__::func_373(*uParam1, 1056964608))
			{
				if (!__LIB_2__::func_70(uParam1, 0))
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
							if (uParam1->f_5 && __LIB_1__::func_62(Global_2667225.f_489))
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
				__LIB_7__::func_95(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && __LIB_1__::func_62(Global_2667225.f_489))
			{
				if (Global_2667225.f_2491.f_2)
				{
					__LIB_1__::func_61(uParam0, &(Global_2667225.f_2491.f_6));
					__LIB_1__::func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_6166(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__::func_61(uParam0, &(Global_2667225.f_2491.f_6));
				__LIB_1__::func_67(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_2491.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!__LIB_2__::func_70(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					__LIB_1__::func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_6166(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
				func_6166(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				__LIB_1__::func_67(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
		if (uParam1->f_5 && __LIB_1__::func_62(Global_2667225.f_489))
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
		__LIB_1__::func_67(*(uParam0[0 /*3*/]));
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
		if (__LIB_19__::func_35(PLAYER::PLAYER_ID()))
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
		if (!__LIB_8__::func_553(Param0, 1084227584, 1123024896, 0))
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
		if (!__LIB_8__::func_456(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0))
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
		if (__LIB_35__::func_648(Param0, fParam1, uParam2->f_15, __LIB_1__::func_84(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2667225.f_3;
		}
	}
	else if (!__LIB_32__::func_184(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!__LIB_19__::func_31(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!__LIB_19__::func_31(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
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
			if (!__LIB_0__::func_607(Param0, 0.5f))
			{
				if (func_6088(Var12))
				{
					if (!func_6058(&Param0, 0, 0, 0, 1) && !__LIB_24__::func_959(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!__LIB_24__::func_959(&Param0, 0))
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
	else if (!__LIB_1__::func_81(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(__LIB_7__::func_427(PLAYER::PLAYER_ID()) && __LIB_6__::func_936(PLAYER::PLAYER_ID())))
		{
			if (!__LIB_2__::func_71(&Param0, &(Global_2667225.f_2491.f_90), 0, 1065353216))
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
		if (!__LIB_6__::func_936(PLAYER::PLAYER_ID()))
		{
			if (!__LIB_1__::func_80(Param0, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90), 1073741824))
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
	if (__LIB_7__::func_117(Param0))
	{
		if (uParam2->f_5)
		{
			if (__LIB_1__::func_62(Global_2667225.f_489))
			{
				if (__LIB_7__::func_137(Param0, 0.01f))
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
		if (__LIB_1__::func_79(Param0))
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
			if (!__LIB_18__::func_494(&Param0, 0, 0))
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
	if (!__LIB_2__::func_70(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = __LIB_7__::func_136(Param0, 1008981770);
		if (iVar14 > -1)
		{
			__LIB_1__::func_971(Param0, &Var15, &Var16, &fVar17);
			if (!__LIB_18__::func_329(&(Global_2667225.f_45[iVar14 /*12*/]), Var15, Var16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (__LIB_25__::func_373(Param0, 1056964608))
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
	else if (__LIB_1__::func_76(Param0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
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
				fVar0 = __LIB_32__::func_90(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = __LIB_32__::func_90(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (__LIB_1__::func_62(Global_2667225.f_489) && iVar8 < 4096)
			{
				Var19.f_2 = __LIB_7__::func_220(Param0);
			}
			fVar7 = __LIB_25__::func_537(Param0, 1, 0, 0, 0, 0);
			Var19.f_4 = { Param0 };
			Var19.f_7 = fParam1;
			Var19.f_0 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = fVar7;
			__LIB_1__::func_969(Var19);
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
							fVar0 = __LIB_32__::func_90(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = __LIB_32__::func_90(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((__LIB_1__::func_62(Global_2667225.f_489) && iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = __LIB_7__::func_220(Param0);
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
						fVar5 = __LIB_19__::func_33(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = __LIB_25__::func_537(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = __LIB_1__::func_73(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = __LIB_1__::func_73(fVar6, 0f, 80f, 160f, 0f, 0.2f);
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
			if (__LIB_7__::func_255(Global_2667225.f_2263[iVar0 /*4*/], uParam0))
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
		__LIB_7__::func_95(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
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
				Var1 = { __LIB_2__::func_75(Param0, fParam2, 0) };
				break;
			case 1:
				Var1 = { __LIB_1__::func_974(Param0, Param1) };
				break;
			case 2:
				Var1 = { __LIB_2__::func_72(Param0, Param1, fParam2) };
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
	if (__LIB_25__::func_475(*uParam0, 6f, 1f, 1f, 5f, 0, 0, 0, 120f, 0, -1, 1, 0f, 0, 0, 0, 0))
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
	__LIB_1__::func_975(uParam0);
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
		if (__LIB_18__::func_494(uParam0, 1, 0))
		{
		}
	}
	if (bParam3)
	{
		if (__LIB_24__::func_959(uParam0, 1))
		{
		}
	}
	if (bParam4)
	{
		__LIB_5__::func_699(uParam0, 7f, PLAYER::PLAYER_ID(), 0);
	}
	__LIB_1__::func_976(uParam0, 1120403456);
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
		if (__LIB_18__::func_494(&(Global_2667225.f_555), 1, 0))
		{
			Global_2667225.f_520.f_7 = 0;
		}
		if (__LIB_24__::func_959(&(Global_2667225.f_555), 1))
		{
			Global_2667225.f_520.f_7 = 0;
		}
	}
	if (__LIB_25__::func_378())
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
		Var0 = { __LIB_1__::func_293(Global_2678393[iParam0]) };
	}
	else if (HUD::DOES_BLIP_EXIST(Global_2678393.f_33[iParam0]) && !iParam0 == Global_2703735)
	{
		Var0 = { __LIB_1__::func_293(Global_2678393.f_33[iParam0]) };
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
			if (__LIB_6__::func_922(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, 0, 1) && !__LIB_6__::func_922(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, 0, 0))
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
						Var1.f_2 = __LIB_1__::func_995(&(Global_2672169[iVar0 /*17*/]));
						__LIB_7__::func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, 0);
						if (func_6058(&Var1, 0, 0, 0, 1))
						{
							Var1 = { *uParam0 };
							__LIB_7__::func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
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
				if (__LIB_1__::func_76(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, bParam0, Global_2667225.f_714.f_512, Global_2667225.f_714.f_513, Global_2667225.f_714.f_510, Global_2667225.f_714.f_511))
				{
					fVar4 = fVar8;
				}
			}
			if (__LIB_0__::func_607(Global_2667225.f_714.f_1[iVar1 /*5*/], 0.1f))
			{
				fVar4 = fVar8;
			}
			if (__LIB_19__::func_31(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 100f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_19__::func_31(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 50f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_19__::func_31(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 25f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (!Global_2667225.f_714.f_506)
			{
				fVar5 = __LIB_5__::func_698(Global_2667225.f_714.f_1[iVar1 /*5*/], PLAYER::PLAYER_ID(), 0);
				if (fVar5 < 10000f)
				{
					fVar3 = __LIB_1__::func_73(fVar5, Global_2667225.f_714.f_514, -1f, 100f, fVar8, 1f);
					fVar4 = (fVar4 * (fVar3 * 0.91f));
				}
				fVar5 = __LIB_25__::func_537(Global_2667225.f_714.f_1[iVar1 /*5*/], 1, 0, 0, 0, iVar2);
				fVar6 = fVar5;
				fVar3 = __LIB_1__::func_73(fVar5, Global_2667225.f_714.f_515, __LIB_25__::func_377(), __LIB_25__::func_376(), fVar8, 0.3f);
				fVar4 = (fVar4 * (fVar3 * 0.91f));
				fVar5 = __LIB_25__::func_537(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, 0, 0, iVar2);
				if (fVar5 < 10000f)
				{
					fVar3 = __LIB_1__::func_73(fVar5, Global_2667225.f_714.f_516, 15f, 150f, fVar8, 0.2f);
					fVar4 = (fVar4 * (fVar3 * 0.92f));
				}
				fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_2667225.f_714.f_1[iVar1 /*5*/], Global_2667225.f_512, true);
				fVar3 = __LIB_1__::func_73(fVar5, 0f, 0f, Global_2667225.f_714.f_517, fVar8, (40f / Global_2667225.f_714.f_517));
				fVar4 = (fVar4 * (fVar3 * 0.93f));
				if (Global_2667225.f_714.f_508)
				{
					fVar5 = __LIB_7__::func_96(Global_2667225.f_714.f_1[iVar1 /*5*/]);
					fVar3 = __LIB_1__::func_73(fVar5, Global_2667225.f_714.f_515, __LIB_25__::func_377(), __LIB_25__::func_376(), fVar8, 0.3f);
					fVar4 = (fVar4 * (fVar3 * 0.95f));
				}
				if (Global_2667225.f_714.f_509)
				{
					fVar5 = __LIB_1__::func_998(Global_2667225.f_714.f_1[iVar1 /*5*/], &Var0);
					fVar3 = __LIB_1__::func_73(fVar5, 0f, 0f, 65f, 0.8f, 1f);
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
					__LIB_3__::func_679();
				}
				Global_2667225.f_490 = 0;
			}
		}
		if (!Global_2667225.f_490 == 0)
		{
			return Global_2667225.f_490;
		}
		else if (__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
		{
			return 6;
		}
		else if (Global_2667225.f_45[0 /*12*/].f_9)
		{
			if (__LIB_2__::func_93())
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
				if (__LIB_2__::func_4(PLAYER::PLAYER_ID()))
				{
					if (__LIB_2__::func_92() && (__LIB_3__::func_680(PLAYER::PLAYER_ID()) || __LIB_2__::func_3(Global_2667225.f_512)))
					{
						return 52;
					}
					else
					{
						return 51;
					}
				}
				if (__LIB_0__::func_697())
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
				else if (__LIB_0__::func_698())
				{
					return 20;
				}
				else if ((((((__LIB_4__::func_973(1) && func_6331(PLAYER::PLAYER_ID())) && (__LIB_3__::func_803(PLAYER::PLAYER_ID()) != 157 || (__LIB_3__::func_803(PLAYER::PLAYER_ID()) == 157 && __LIB_0__::func_582() != __LIB_1__::func_301()))) && !__LIB_2__::func_91()) && !__LIB_6__::func_408(PLAYER::PLAYER_ID())) && !__LIB_18__::func_447(1)) && !(__LIB_1__::func_425(PLAYER::PLAYER_ID(), 0) == 0 && func_6329(PLAYER::PLAYER_ID()) == 1))
				{
					if (__LIB_32__::func_87())
					{
						return 34;
					}
					else if (__LIB_25__::func_531(10f))
					{
						return 27;
					}
					else
					{
						iVar0 = __LIB_4__::func_962(PLAYER::PLAYER_ID(), 0);
						if ((__LIB_2__::func_57(iVar0) && __LIB_8__::func_211(iVar0)) && (__LIB_25__::func_482(iVar0) || __LIB_2__::func_192(PLAYER::PLAYER_ID())))
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
				else if (__LIB_25__::func_531(10f))
				{
					return 27;
				}
				else
				{
					iVar0 = __LIB_4__::func_962(PLAYER::PLAYER_ID(), 0);
					if (__LIB_2__::func_57(iVar0) && __LIB_8__::func_211(iVar0))
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
	if (__LIB_4__::func_682(iParam0, 0))
	{
		iVar0 = __LIB_2__::func_191(iParam0);
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
	if (__LIB_4__::func_682(iParam0, 0))
	{
		iVar1 = __LIB_2__::func_191(iParam0);
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
		iVar3 = __LIB_5__::func_700(iParam0, 1);
		if (!iVar3 == __LIB_0__::func_160())
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
				Local_374.f_37 = __LIB_34__::func_622(Var0.f_0, Var0.f_1);
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
						else if ((ENTITY::IS_ENTITY_A_PED(iVar1) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1))) || (ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && __LIB_21__::func_80(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1), 0, 1)))
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
			iVar3 = __LIB_1__::func_363();
			if (PLAYER::GET_MAX_WANTED_LEVEL() < iVar3)
			{
				if (__LIB_10__::func_952(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0)) && !func_6443(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0)))
				{
					if ((ENTITY::DOES_ENTITY_EXIST(Var0.f_1) && ENTITY::IS_ENTITY_A_PED(Var0.f_1)) && PLAYER::PLAYER_PED_ID() == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1))
					{
						__LIB_34__::func_553(PLAYER::PLAYER_ID(), iVar3, 1, 0);
					}
				}
			}
		}
		if (ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0))
		{
			iVar4 = __LIB_1__::func_363();
			if (PLAYER::GET_MAX_WANTED_LEVEL() < iVar4)
			{
				iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0), -1, false);
				iVar6 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0), 0, false);
				if (__LIB_28__::func_386(Var0.f_0, iVar5, iVar6))
				{
					if ((ENTITY::DOES_ENTITY_EXIST(Var0.f_1) && ENTITY::IS_ENTITY_A_PED(Var0.f_1)) && PLAYER::PLAYER_PED_ID() == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1))
					{
						__LIB_34__::func_553(PLAYER::PLAYER_ID(), iVar4, 1, 0);
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
		__LIB_29__::func_57(12);
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
		Local_131[bVar1 /*3*/] = __LIB_0__::func_160();
		Local_131[bVar1 /*3*/].f_1 = -1;
		Local_131[bVar1 /*3*/].f_2 = uVar3;
		MISC::CLEAR_BIT(&uLocal_182, bVar1);
		MISC::CLEAR_BIT(&uLocal_184, bVar1);
		bVar1++;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_130[iVar0 /*20*/] = __LIB_0__::func_160();
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
			if (__LIB_1__::func_264(iVar2, 0, 1))
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
				if (__LIB_2__::func_192(Local_131[bVar1 /*3*/]))
				{
					Local_130[iVar0 /*20*/].f_18 = 1;
				}
				else if (__LIB_4__::func_682(Local_131[bVar1 /*3*/], 0))
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
								__LIB_39__::func_309((Local_374.f_31 - 1), 0, 0);
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
				if (__LIB_0__::func_649(&(Local_374.f_3)))
				{
					if (__LIB_2__::func_47(&(Local_374.f_3), 10000, 0))
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
			if (!__LIB_8__::func_303(PLAYER::PLAYER_ID()))
			{
				iLocal_185 = NETWORK::PARTICIPANT_ID_TO_INT();
			}
			else if (__LIB_0__::func_728() && !__LIB_2__::func_227())
			{
				iVar0 = __LIB_6__::func_544();
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
		__LIB_1__::func_532();
	}
	if (__LIB_2__::func_192(PLAYER::PLAYER_ID()))
	{
		__LIB_37__::func_147(239);
	}
	__LIB_18__::func_369(0, -1);
	__LIB_42__::func_299(1, 0);
	__LIB_18__::func_455();
	func_5897();
	__LIB_7__::func_249(&iLocal_198);
	__LIB_9__::func_32(19);
	__LIB_9__::func_32(20);
	__LIB_9__::func_32(21);
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
			__LIB_1__::func_46(&(Local_374.f_18[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_374.f_16[iVar0]))
		{
			__LIB_1__::func_46(&(Local_374.f_16[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_374.f_8[iVar0]))
		{
			__LIB_1__::func_46(&(Local_374.f_8[iVar0]));
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_374.f_12[iVar0]))
		{
			__LIB_1__::func_46(&(Local_374.f_12[iVar0]));
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_374.f_24[iVar0]))
		{
			__LIB_1__::func_46(&(Local_374.f_24[iVar0]));
		}
		iVar0++;
	}
	__LIB_1__::func_46(&(Local_374.f_28));
	__LIB_1__::func_46(&(Local_374.f_29));
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
	if (__LIB_29__::func_28(0))
	{
		if (!__LIB_10__::func_876(&iLocal_175))
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
			__LIB_20__::func_413(&iLocal_175);
		}
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	}
}

void func_6534(bool bParam0, bool bParam1)//Position - 0x204C89
{
	bool bVar0;
	var uVar1;
	if (!__LIB_29__::func_58(0))
	{
		uVar1 = __LIB_24__::func_767(func_26(), bParam0, bVar0, bParam1);
		Global_1944303.f_2 = Local_374.f_35;
		Global_1944303.f_3 = Local_374.f_36;
		Global_1944303.f_20 = Local_374.f_30;
		Global_1944303.f_34 = Local_374.f_37;
		__LIB_40__::func_404(bParam0, uVar1, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
		__LIB_29__::func_57(0);
	}
}

int func_6594(struct<21> Param0)//Position - 0x2070AC
{
	__LIB_0__::func_673(8, Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(__LIB_36__::func_804(239, -1, -1, -1, -1, -1));
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(__LIB_35__::func_935(239, -1, -1, -1));
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(__LIB_39__::func_25(239, -1, 1, -1, -1, -1));
	__LIB_1__::func_569(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_374, 38, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_375, 49, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	__LIB_40__::func_507(0, 0, 0);
	func_6595();
	return 1;
}

void func_6595()//Position - 0x207116
{
	if (!__LIB_29__::func_28(0))
	{
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
		__LIB_29__::func_27(0);
	}
}

