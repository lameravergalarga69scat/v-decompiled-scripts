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
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int* iLocal_132 = NULL;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 8;
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
	struct<20> Local_156[32];
	struct<3> Local_157[32];
	struct<2> Local_158 = { 0, 0 } ;
	var uLocal_159 = 1065353216;
	var uLocal_160 = 1065353216;
	var uLocal_161 = 1;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = -1;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = -1;
	var uLocal_176 = -1;
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
	var uLocal_190 = 10;
	var uLocal_191 = 500;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	int* iLocal_199 = NULL;
	var uLocal_200 = -1;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	bool bLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212[4] = { 0, 0, 0, 0 };
	struct<8> Local_213[15];
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220[4] = { 0, 0, 0, 0 };
	struct<14> Local_221 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	var uLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	struct<90> Local_230 = { 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_231[32];
	var uLocal_232 = 0;
	var uLocal_233 = 16;
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
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	struct<21> Local_398 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_130 = 9;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (!func_6793(ScriptParam_398))
			{
				func_6733(0, 1);
				func_6685();
			}
		}
		else
		{
			func_6685();
		}
	}
	else
	{
		func_6733(0, 1);
		func_6685();
	}
	while (true)
	{
		__LIB_0__::func_671();
		if (__LIB_40__::func_236(1))
		{
			func_6733(0, 1);
			func_6685();
		}
		if (__LIB_6__::func_949())
		{
			func_6733(0, 1);
			func_6685();
		}
		func_6672();
		func_6669();
		func_6667();
		func_1173(&uLocal_180, 1, 0, 1, 1, 6000);
		switch (func_1172(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_1171() == 1)
				{
					if (func_1151())
					{
						func_1150(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
					}
				}
				break;
			case 1:
				if (func_1171() == 1)
				{
					func_214();
				}
				else if (func_1171() == 3)
				{
					func_1150(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			case 3:
				func_6685();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (__LIB_10__::func_923())
			{
				func_6733(0, 1);
				func_212(3);
			}
			switch (func_1171())
			{
				case 0:
					if (func_209())
					{
						func_212(1);
					}
					break;
				case 1:
					func_1();
					break;
				case 3:
					func_6685();
					break;
				}
		}
	}
}

void func_1()//Position - 0x1E0
{
	int iVar0;
	int iVar1;
	switch (func_208())
	{
		case 0:
			func_207(1);
			STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_230.f_33), &(Local_230.f_34));
			break;
		case 1:
			if (func_206() == 0)
			{
				iVar1 = 0;
				while (iVar1 < 32)
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
					{
						if (!func_205())
						{
							__LIB_34__::func_296(&(Local_230.f_65), iVar1);
						}
					}
					iVar1++;
				}
				if (!Local_230.f_37)
				{
					if (func_199())
					{
						if (Local_230.f_88 == 1)
						{
							if (Local_230.f_36 == 0)
							{
								if (func_196())
								{
									Local_230.f_36 = 1;
								}
							}
						}
						if (Local_230.f_38 == 0 && Local_230.f_36 == 1)
						{
							if (func_157())
							{
								Local_230.f_38 = 1;
							}
						}
						if (Local_230.f_88 == 0)
						{
							if (func_103())
							{
								Local_230.f_88 = 1;
							}
						}
						if ((Local_230.f_36 == 1 && Local_230.f_38 == 1) && Local_230.f_88 == 1)
						{
							Local_230.f_37 = 1;
						}
					}
				}
				else if (func_199())
				{
					if (Local_230.f_87 == 0)
					{
						if (func_42())
						{
							Local_230.f_87 = 1;
						}
					}
				}
				if (!__LIB_0__::func_649(&(Local_230.f_2)))
				{
					__LIB_0__::func_580(&(Local_230.f_2), 0, 0);
				}
				else if (__LIB_2__::func_47(&(Local_230.f_2), func_39(), 0))
				{
					func_37(1);
				}
				if (Local_230.f_36 == 1)
				{
					if (func_33())
					{
						func_37(5);
					}
				}
				if (func_32() > 0)
				{
					if ((func_32() + func_31()) >= Local_230.f_35)
					{
						func_37(4);
					}
				}
				iVar0 = 0;
				while (iVar0 < Local_230.f_35)
				{
					if (!Local_230.f_45[iVar0])
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_7[iVar0]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_230.f_7[iVar0]), false))
						{
							if (Local_230.f_76 == 0)
							{
								if (func_28(iVar0))
								{
								}
							}
							func_19(iVar0);
							if (func_16(iVar0))
							{
								Local_230.f_45[iVar0] = 1;
							}
							if (!iLocal_220[iVar0])
							{
								if (func_15())
								{
									if (Local_230.f_89 == 0)
									{
										if (func_14(iVar0))
										{
											iLocal_220[iVar0] = 1;
										}
										Local_230.f_89 = 1;
										Local_221.f_2 = -1903994744;
										__LIB_1__::func_226(Local_221, __LIB_8__::func_227(1));
									}
								}
							}
						}
						if (func_3(iVar0))
						{
						}
					}
					iVar0++;
				}
			}
			else
			{
				func_207(2);
			}
			break;
		case 2:
			if (func_2(0))
			{
				func_207(3);
			}
			break;
		case 3:
			func_212(3);
			break;
	}
}

bool func_2(int iParam0)//Position - 0x458
{
	return BitTest(Local_230.f_1, iParam0);
}

int func_3(int iParam0)//Position - 0x468
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_7[iParam0]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_230.f_7[iParam0]), false))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (Local_230.f_45[iParam0] == 0)
			{
				if (Local_230.f_40[iParam0] == 0)
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_230.f_7[iParam0]), -1, false))
					{
						Local_230.f_55[iParam0] = 1;
						return 1;
					}
					else
					{
						Local_230.f_55[iParam0] = 0;
					}
				}
				else
				{
					Local_230.f_55[iParam0] = 0;
				}
			}
			else
			{
				Local_230.f_55[iParam0] = 0;
			}
		}
	}
	Local_230.f_55[iParam0] = 0;
	return 0;
}

int func_14(int iParam0)//Position - 0x6EB
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_7[iParam0]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_230.f_7[iParam0]), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_230.f_7[iParam0]))
		{
			ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_VEH(Local_230.f_7[iParam0]), false, false, false, false, false, false, false, false);
			return 1;
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_230.f_7[iParam0]);
			return 0;
		}
	}
	return 0;
}

int func_15()//Position - 0x75E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Local_231[iVar0 /*7*/].f_2 == 1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_16(int iParam0)//Position - 0x78B
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_7[iParam0]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_230.f_7[iParam0]), false))
	{
		if (__LIB_0__::func_529(NETWORK::NET_TO_VEH(Local_230.f_7[iParam0]), func_18(), 0) < 6f)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_18()//Position - 0x815
{
	if (Local_230.f_76 == 0)
	{
		return 261.0435f, 2579.0532f, 44.0821f;
	}
	if (Local_230.f_76 == 2)
	{
		return -500.8526f, 302.7271f, 82.2071f;
	}
	return 1357.4602f, 3617.6865f, 33.8887f;
}

void func_19(int iParam0)//Position - 0x868
{
	if (!func_23(PLAYER::PLAYER_ID()) && !func_20())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_7[iParam0]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_230.f_7[iParam0]), false))
		{
			if (!VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_230.f_7[iParam0]), PLAYER::PLAYER_ID()))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_230.f_7[iParam0]), PLAYER::PLAYER_ID(), true);
			}
		}
	}
}

bool func_20()//Position - 0x8DD
{
	return func_21(PLAYER::PLAYER_ID());
}

bool func_21(int iParam0)//Position - 0x8ED
{
	return func_22() == iParam0;
}

bool func_22()//Position - 0x8FC
{
	return Local_230.f_6;
}

bool func_23(int iParam0)//Position - 0x909
{
	return __LIB_25__::func_952(iParam0, func_22(), 0);
}

int func_28(int iParam0)//Position - 0xA10
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_7[iParam0]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_230.f_7[iParam0]), false))
	{
		if (((__LIB_0__::func_529(NETWORK::NET_TO_VEH(Local_230.f_7[iParam0]), func_30(), 0) < 20f || __LIB_0__::func_529(NETWORK::NET_TO_VEH(Local_230.f_7[iParam0]), 1033f, -274f, 50.7f, 0) < 20f) || __LIB_0__::func_529(NETWORK::NET_TO_VEH(Local_230.f_7[iParam0]), -174.7f, -922.6f, 22.3f, 0) < 20f) || __LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), func_29(0), 0) > 100f)
		{
			Local_230.f_50[iParam0] = 1;
			return 1;
		}
	}
	return 0;
}

Vector3 func_29(int iParam0)//Position - 0xAE2
{
	if (Local_230.f_76 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 26.122f, -636.801f, 15.088f;
				break;
			case 1:
				return 28.072f, -638.702f, 15.088f;
				break;
			case 2:
				return 18.431f, -652.515f, 15.088f;
				break;
			case 3:
				return 12.175f, -644.25f, 15.088f;
				break;
			case 4:
				return 20.774f, -654.367f, 15.088f;
				break;
			case 5:
				return 6.8059f, -636.003f, 15.483f;
				break;
		}
	}
	else if (Local_230.f_76 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return 851.7f, -1358.918f, 26.254f;
				break;
			case 1:
				return 870.773f, -1351.208f, 25.314f;
				break;
			case 2:
				return 874.555f, -1348.972f, 25.314f;
				break;
			case 3:
				return 850.688f, -1329.3f, 26.288f;
				break;
			case 4:
				return 848.196f, -1340.752f, 25.03f;
				break;
		}
	}
	else if (Local_230.f_76 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return 1355.8721f, 4383.658f, 43.3438f;
				break;
			case 1:
				return 1336.0562f, 4305.132f, 37.1164f;
				break;
			case 2:
				return 1337.3313f, 4362.3467f, 43.3659f;
				break;
			case 3:
				return 1368.584f, 4310.0483f, 37.0895f;
				break;
			case 4:
				return 1360.5797f, 4376.01f, 43.369f;
				break;
			case 5:
				return 1370.516f, 4316.1836f, 37.0272f;
				break;
			}
	}
	return 1916.04f, 4711.155f, 40.196f;
}

Vector3 func_30()//Position - 0xCFA
{
	if (Local_230.f_76 == 0)
	{
		return -66.0629f, -535.4803f, 30.9105f;
	}
	else if (Local_230.f_76 == 1)
	{
		return 816.974f, -1321.205f, 25.077f;
	}
	else if (Local_230.f_76 == 2)
	{
		return 1414.1576f, 4398.523f, 42.97f;
	}
	return -65.0629f, -535.4803f, 30.9105f;
}

int func_31()//Position - 0xD68
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_230.f_35)
	{
		if (Local_230.f_40[iVar0])
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_32()//Position - 0xD9A
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < Local_230.f_35)
	{
		if (Local_230.f_45[iVar1])
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_33()//Position - 0xDCC
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_230.f_35)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_7[iVar0]) || (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_7[iVar0]) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_230.f_7[iVar0]), false)))
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (!Local_230.f_40[iVar0])
				{
					Local_230.f_40[iVar0] = 1;
					Local_221.f_2 = -1955511189;
					__LIB_1__::func_46(&(Local_230.f_7[iVar0]));
					__LIB_1__::func_226(Local_221, __LIB_4__::func_511(1));
				}
			}
			iVar1++;
			if (func_34(iVar0))
			{
			}
		}
		iVar0++;
	}
	if (iVar1 >= Local_230.f_35)
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0)//Position - 0xE8A
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_7[iParam0]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_230.f_7[iParam0]), false))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_230.f_7[iParam0]), -1, false))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_37(int iParam0)//Position - 0xF64
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_230.f_5 = iParam0;
}

int func_39()//Position - 0xFDC
{
	return (1000 * Global_262145.f_18734 /* Tunable: BIKER_NINE_TENTHS_TIME_LIMIT */);
}

int func_42()//Position - 0x1040
{
	int iVar0;
	int iVar1;
	if (Local_230.f_87)
	{
		return 1;
	}
	if (Local_230.f_76 == 0)
	{
		iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_102(0), "v_31_tun_swap:410");
		if (INTERIOR::IS_VALID_INTERIOR(iVar1))
		{
			if (!INTERIOR::IS_INTERIOR_READY(iVar1))
			{
				return 0;
			}
		}
	}
	STREAMING::REQUEST_MODEL(func_101(0));
	STREAMING::REQUEST_MODEL(func_101(1));
	STREAMING::REQUEST_MODEL(func_101(2));
	STREAMING::REQUEST_MODEL(func_101(3));
	STREAMING::REQUEST_MODEL(func_101(4));
	if (((((STREAMING::HAS_MODEL_LOADED(func_101(0)) && STREAMING::HAS_MODEL_LOADED(func_101(1))) && STREAMING::HAS_MODEL_LOADED(func_101(2))) && STREAMING::HAS_MODEL_LOADED(func_101(3))) && STREAMING::HAS_MODEL_LOADED(func_101(4))) && NETWORK::CAN_REGISTER_MISSION_OBJECTS(__LIB_36__::func_804(195, -1, -1, -1, -1, -1)))
	{
		if (Local_230.f_76 == 0)
		{
			Local_230.f_77 = 6;
		}
		else if (Local_230.f_76 == 2)
		{
			Local_230.f_77 = 4;
		}
		iVar0 = 0;
		while (iVar0 < Local_230.f_77)
		{
			if (func_43(&(Local_230.f_78[iVar0]), func_102(iVar0), func_101(iVar0), func_46(iVar0)))
			{
			}
			iVar0++;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_101(0));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_101(1));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_101(2));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_101(3));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_101(4));
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(func_101(0));
		STREAMING::REQUEST_MODEL(func_101(1));
		STREAMING::REQUEST_MODEL(func_101(2));
		STREAMING::REQUEST_MODEL(func_101(3));
		STREAMING::REQUEST_MODEL(func_101(4));
	}
	return 0;
}

int func_43(var uParam0, struct<3> Param1, int iParam2, struct<3> Param3)//Position - 0x11C4
{
	if (!__LIB_0__::func_86(Param1))
	{
		*uParam0 = OBJECT::CREATE_OBJECT(iParam2, Param1, true, true, false);
		ENTITY::SET_ENTITY_HEADING(*uParam0, __LIB_0__::func_670(func_29(1), Param1));
		TASK::ADD_COVER_POINT(Param1, __LIB_0__::func_670(func_29(1), Param1), 2, 0, 4, false);
		ENTITY::SET_ENTITY_ROTATION(*uParam0, Param3, 2, true);
		return 1;
	}
	return 0;
}

Vector3 func_46(int iParam0)//Position - 0x126C
{
	if (Local_230.f_76 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 0f, 0f, -35.601f;
				break;
			case 1:
				return 0f, 0f, -59.401f;
				break;
			case 2:
				return 0f, 0f, 161.393f;
				break;
			case 3:
				return 0f, 0f, 120.6f;
				break;
			case 4:
				return 0f, 0f, -111.806f;
				break;
			case 5:
				return 0f, 0f, -159.406f;
				break;
			}
	}
	if (Local_230.f_76 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return 0f, 0f, 82.1988f;
				break;
			case 1:
				return 0f, 0f, -5.8031f;
				break;
			case 2:
				return 0f, 0f, -5.8031f;
				break;
			case 3:
				return 0f, 0f, 129.5949f;
				break;
			}
	}
	return 1916.04f, 4711.155f, 40.196f;
}

int func_101(int iParam0)//Position - 0x3283
{
	if (Local_230.f_76 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return joaat("prop_woodpile_01a");
				break;
			case 1:
				return joaat("prop_woodpile_01a");
				break;
			case 2:
				return joaat("prop_woodpile_01a");
				break;
			case 3:
				return joaat("prop_woodpile_01a");
				break;
			case 4:
				return joaat("prop_boxpile_02b");
				break;
			case 5:
				return joaat("prop_boxpile_02b");
				break;
			case 6:
				return joaat("prop_boxpile_02b");
				break;
			case 7:
				return joaat("prop_boxpile_02b");
				break;
			}
	}
	if (Local_230.f_76 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return joaat("prop_cementbags01");
				break;
			case 1:
				return joaat("prop_conc_sacks_02a");
				break;
			case 2:
				return joaat("prop_conc_sacks_02a");
				break;
			case 3:
				return joaat("prop_box_wood04a");
				break;
			}
	}
	return joaat("prop_boxpile_02b");
}

Vector3 func_102(int iParam0)//Position - 0x337C
{
	if (Local_230.f_76 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 9.403f, -637.809f, 15.098f;
				break;
			case 1:
				return 12.322f, -629.218f, 15.108f;
				break;
			case 2:
				return 21.074f, -635.287f, 15.098f;
				break;
			case 3:
				return 25.948f, -649.76f, 15.098f;
				break;
			case 4:
				return 14.106f, -639.323f, 15.213f;
				break;
			case 5:
				return 20.949f, -644.677f, 15.213f;
				break;
			}
	}
	if (Local_230.f_76 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return 1339.8147f, 4313.015f, 36.9794f;
				break;
			case 1:
				return 1367.8958f, 4361.1074f, 43.5241f;
				break;
			case 2:
				return 1365.5142f, 4361.3154f, 43.5265f;
				break;
			case 3:
				return 1340.8612f, 4360.5083f, 43.3678f;
				break;
			}
	}
	return 1916.04f, 4711.155f, 40.196f;
}

int func_103()//Position - 0x34C1
{
	int iVar0;
	if (Local_230.f_88)
	{
		return 0;
	}
	if (Local_230.f_76 != 0 && Local_230.f_76 != 1)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(func_156(0));
	STREAMING::REQUEST_MODEL(func_156(1));
	STREAMING::REQUEST_MODEL(func_156(2));
	STREAMING::REQUEST_MODEL(func_156(3));
	if ((((STREAMING::HAS_MODEL_LOADED(func_156(0)) && STREAMING::HAS_MODEL_LOADED(func_156(1))) && STREAMING::HAS_MODEL_LOADED(func_156(2))) && STREAMING::HAS_MODEL_LOADED(func_156(3))) && NETWORK::CAN_REGISTER_MISSION_VEHICLES(__LIB_39__::func_25(195, -1, 1, -1, -1, -1)))
	{
		iVar0 = 0;
		while (iVar0 < func_109())
		{
			__LIB_18__::func_220(&(Local_230.f_12[iVar0]), func_156(iVar0), func_108(iVar0), func_107(iVar0), NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), 1, 1, 0, 1, 1, 0, 0, 0, 0);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(Local_230.f_12[iVar0]), false);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_230.f_12[iVar0]), 10);
			ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_VEH(Local_230.f_12[iVar0]), true, true, true, true, true, false, false, false);
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
			{
				DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_230.f_12[iVar0]), "Not_Allow_As_Saved_Veh", 1);
			}
			if (func_156(iVar0) != joaat("flatbed"))
			{
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(NETWORK::NET_TO_VEH(Local_230.f_12[iVar0]), 2, 5, 1f);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(NETWORK::NET_TO_VEH(Local_230.f_12[iVar0]), 3, 5, 1f);
				if (!VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(NETWORK::NET_TO_VEH(Local_230.f_12[iVar0]), 2))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(NETWORK::NET_TO_VEH(Local_230.f_12[iVar0]), 2, true, true);
				}
				if (!VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(NETWORK::NET_TO_VEH(Local_230.f_12[iVar0]), 3))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(NETWORK::NET_TO_VEH(Local_230.f_12[iVar0]), 3, true, true);
				}
				VEHICLE::SET_CAR_BOOT_OPEN(NETWORK::NET_TO_VEH(Local_230.f_12[iVar0]));
			}
			iVar0++;
		}
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(func_156(0));
		STREAMING::REQUEST_MODEL(func_156(1));
		STREAMING::REQUEST_MODEL(func_156(2));
		STREAMING::REQUEST_MODEL(func_156(3));
	}
	return 0;
}

float func_107(int iParam0)//Position - 0x393F
{
	if (Local_230.f_76 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 153f;
				break;
			case 1:
				return 180.9f;
				break;
		}
	}
	else if (Local_230.f_76 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return 260f;
				break;
			case 1:
				return 214.9f;
				break;
			case 2:
				return 90f;
				break;
			case 3:
				return 262.9f;
				break;
		}
	}
	else if (Local_230.f_76 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return 156.1984f;
				break;
			case 1:
				return 14.3966f;
				break;
			}
	}
	return 180f;
}

Vector3 func_108(int iParam0)//Position - 0x3A0A
{
	if (Local_230.f_76 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 10.175f, -643.25f, 15.088f;
				break;
			case 1:
				return 37.059f, -670.003f, 15.483f;
				break;
		}
	}
	else if (Local_230.f_76 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return 858.731f, -1357.94f, 25.095f;
				break;
			case 1:
				return 858.441f, -1335.343f, 25.092f;
				break;
			case 2:
				return 860.196f, -1342.752f, 25.03f;
				break;
			case 3:
				return 860.075f, -1351.437f, 25.067f;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1360.5797f, 4376.01f, 43.369f;
				break;
			case 1:
				return 1370.516f, 4316.1836f, 37.0272f;
				break;
			}
	}
	return 1916.04f, 4711.155f, 40.196f;
}

int func_109()//Position - 0x3B26
{
	if (Local_230.f_76 == 0)
	{
		return 2;
	}
	if (Local_230.f_76 == 1)
	{
		return 4;
	}
	return 2;
}

int func_156(int iParam0)//Position - 0x68AB
{
	if (Local_230.f_76 == 0)
	{
		return joaat("gburrito");
	}
	if (Local_230.f_76 == 1)
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			return joaat("flatbed");
		}
		else
		{
			return joaat("police3");
		}
	}
	return joaat("gburrito");
}

int func_157()//Position - 0x68FC
{
	int iVar0;
	int iVar1;
	if (Local_230.f_38)
	{
		return 1;
	}
	if (Local_230.f_76 == 0)
	{
		iLocal_130 = 14;
	}
	else if (Local_230.f_76 == 1)
	{
		iLocal_130 = 11;
	}
	STREAMING::REQUEST_MODEL(func_195(0));
	STREAMING::REQUEST_MODEL(func_195(1));
	STREAMING::REQUEST_MODEL(func_195(2));
	if (((STREAMING::HAS_MODEL_LOADED(func_195(0)) && STREAMING::HAS_MODEL_LOADED(func_195(1))) && STREAMING::HAS_MODEL_LOADED(func_195(2))) && NETWORK::CAN_REGISTER_MISSION_PEDS(__LIB_35__::func_935(195, -1, -1, -1)))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_130)
		{
			__LIB_1__::func_263(&(Local_230.f_17[iVar0]), 22, func_195(iVar0), func_166(iVar0), func_165(iVar0), NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_230.f_17[iVar0]), func_163(iVar0), 100, false, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_230.f_17[iVar0]), Global_1837200);
			PED::SET_PED_SEEING_RANGE(NETWORK::NET_TO_PED(Local_230.f_17[iVar0]), 30f);
			PED::SET_PED_ID_RANGE(NETWORK::NET_TO_PED(Local_230.f_17[iVar0]), 20f);
			PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_230.f_17[iVar0]), 5);
			iVar1 = NETWORK::NET_TO_PED(Local_230.f_17[iVar0]);
			__LIB_34__::func_237(&iVar1, -1);
			func_158(iVar0);
			iVar0++;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_195(0));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_195(1));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_195(2));
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(func_195(0));
		STREAMING::REQUEST_MODEL(func_195(1));
		STREAMING::REQUEST_MODEL(func_195(2));
	}
	return 0;
}

void func_158(int iParam0)//Position - 0x6A85
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_17[iParam0]) && __LIB_0__::func_121(NETWORK::NET_TO_PED(Local_230.f_17[iParam0])))
	{
		if (Local_230.f_76 == 0)
		{
			switch (iParam0)
			{
				case 0:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "CODE_HUMAN_MEDIC_KNEEL", 0, false);
					break;
				case 1:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
					break;
				case 2:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_SMOKING", 0, false);
					break;
				case 3:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "CODE_HUMAN_MEDIC_KNEEL", 0, false);
					break;
				case 4:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_SMOKING", 0, false);
					break;
				case 5:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
					break;
				case 6:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_STAND_IMPATIENT", 0, false);
					break;
				case 7:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_SMOKING", 0, false);
					break;
				case 8:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, false);
					break;
				case 9:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_SMOKING", 0, false);
					break;
				case 10:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
					break;
				case 11:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_CLIPBOARD", 0, false);
					break;
				case 12:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_SMOKING", 0, false);
					break;
				case 13:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_SMOKING", 0, false);
					break;
				case 14:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_STAND_IMPATIENT", 0, false);
					break;
				}
		}
		if (Local_230.f_76 == 1)
		{
			switch (iParam0)
			{
				case 0:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "CODE_HUMAN_MEDIC_TIME_OF_DEATH", 0, false);
					break;
				case 1:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "CODE_HUMAN_MEDIC_KNEEL", 0, false);
					break;
				case 2:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_COP_IDLES", 0, false);
					break;
				case 3:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 0, false);
					break;
				case 4:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "CODE_HUMAN_MEDIC_TIME_OF_DEATH", 0, false);
					break;
				case 5:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
					break;
				case 6:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
					break;
				case 7:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_COP_IDLES", 0, false);
					break;
				case 8:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
					break;
				case 9:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
					break;
				case 10:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_COP_IDLES", 0, false);
					break;
				case 11:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_CLIPBOARD", 0, false);
					break;
				case 12:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_SMOKING", 0, false);
					break;
				case 13:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_SMOKING", 0, false);
					break;
				case 14:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_STAND_IMPATIENT", 0, false);
					break;
				}
		}
		if (Local_230.f_76 == 2)
		{
			switch (iParam0)
			{
				case 0:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_STAND_IMPATIENT", 0, false);
					break;
				case 1:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_STAND_MOBILE", 0, false);
					break;
				case 2:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "CODE_HUMAN_MEDIC_KNEEL", 0, false);
					break;
				case 3:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
					break;
				case 4:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
					break;
				case 5:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_DRINKING", 0, false);
					break;
				case 6:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_STAND_IMPATIENT", 0, false);
					break;
				case 7:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_SMOKING_POT", 0, false);
					break;
				case 8:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_SMOKING", 0, false);
					break;
				case 9:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_WELDING", 0, false);
					break;
				case 10:
					TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_230.f_17[iParam0]), "WORLD_HUMAN_SMOKING_POT", 0, false);
					break;
				}
			}
	}
}

int func_163(int iParam0)//Position - 0x718B
{
	switch (iParam0)
	{
		case 0:
			return joaat("WEAPON_SMG");
			break;
		case 1:
			return joaat("WEAPON_SMG");
			break;
		case 2:
			return joaat("WEAPON_SMG");
			break;
		case 3:
			return joaat("WEAPON_SMG");
			break;
		case 4:
			return joaat("WEAPON_SMG");
			break;
		case 5:
			return joaat("WEAPON_SMG");
			break;
		case 6:
			return joaat("WEAPON_SMG");
			break;
		case 7:
			return joaat("WEAPON_PISTOL");
			break;
		case 8:
			return joaat("WEAPON_PUMPSHOTGUN");
			break;
	}
	return joaat("WEAPON_SMG");
}

float func_165(int iParam0)//Position - 0x7297
{
	if (Local_230.f_76 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 328.598f;
				break;
			case 1:
				return 105.998f;
				break;
			case 2:
				return 288.198f;
				break;
			case 3:
				return 238.197f;
				break;
			case 4:
				return 237.994f;
				break;
			case 5:
				return 95.596f;
				break;
			case 6:
				return 260.197f;
				break;
			case 7:
				return 165.186f;
				break;
			case 8:
				return 239.787f;
				break;
			case 9:
				return 16.787f;
				break;
			case 10:
				return 81.399f;
				break;
			case 11:
				return 145.394f;
				break;
			case 12:
				return 166.188f;
				break;
			case 13:
				return 296.387f;
				break;
			case 14:
				return 334.386f;
				break;
		}
	}
	else if (Local_230.f_76 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return 356.798f;
				break;
			case 1:
				return 286.598f;
				break;
			case 2:
				return 122.746f;
				break;
			case 3:
				return 101.997f;
				break;
			case 4:
				return 200.143f;
				break;
			case 5:
				return 269.343f;
				break;
			case 6:
				return 101.344f;
				break;
			case 7:
				return 61.144f;
				break;
			case 8:
				return 176.743f;
				break;
			case 9:
				return -3.857f;
				break;
			case 10:
				return 257.742f;
				break;
		}
	}
	else if (Local_230.f_76 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return 171.395f;
				break;
			case 1:
				return 335.7954f;
				break;
			case 2:
				return 33.397f;
				break;
			case 3:
				return 51.1989f;
				break;
			case 4:
				return 231.5992f;
				break;
			case 5:
				return 92.596f;
				break;
			case 6:
				return 263.195f;
				break;
			case 7:
				return 356.795f;
				break;
			case 8:
				return 178.394f;
				break;
			case 9:
				return -7.8018f;
				break;
			}
	}
	return 211.395f;
}

Vector3 func_166(int iParam0)//Position - 0x753E
{
	if (Local_230.f_76 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 27.562f, -639.748f, 15.088f;
				break;
			case 1:
				return 12.019f, -631.778f, 15.088f;
				break;
			case 2:
				return 10.739f, -632.394f, 15.088f;
				break;
			case 3:
				return 24.667f, -636.224f, 15.088f;
				break;
			case 4:
				return 12.078f, -637.768f, 15.088f;
				break;
			case 5:
				return 22.074f, -647.509f, 15.088f;
				break;
			case 6:
				return 20.977f, -647.503f, 15.088f;
				break;
			case 7:
				return 35.358f, -665.881f, 15.483f;
				break;
			case 8:
				return 22.171f, -652.936f, 15.088f;
				break;
			case 9:
				return 22.774f, -653.709f, 15.088f;
				break;
			case 10:
				return 19.258f, -652.501f, 15.088f;
				break;
			case 11:
				return 11.815f, -639.748f, 15.088f;
				break;
			case 12:
				return 22.913f, -652.761f, 15.088f;
				break;
			case 13:
				return 26.321f, -639.578f, 15.088f;
				break;
			case 14:
				return 35.123f, -667.448f, 15.483f;
				break;
		}
	}
	else if (Local_230.f_76 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return 868.558f, -1348.088f, 25.314f;
				break;
			case 1:
				return 869.22f, -1351.299f, 25.314f;
				break;
			case 2:
				return 863.59f, -1341.863f, 25.117f;
				break;
			case 3:
				return 863.197f, -1342.709f, 25.06f;
				break;
			case 4:
				return 860.887f, -1355.453f, 25.087f;
				break;
			case 5:
				return 856.02f, -1355.296f, 25.084f;
				break;
			case 6:
				return 857.393f, -1354.748f, 25.081f;
				break;
			case 7:
				return 857.43f, -1355.922f, 25.086f;
				break;
			case 8:
				return 855.539f, -1334.936f, 25.084f;
				break;
			case 9:
				return 855.329f, -1335.957f, 25.061f;
				break;
			case 10:
				return 866.142f, -1349.779f, 25.314f;
				break;
		}
	}
	else if (Local_230.f_76 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return 1338.9387f, 4361.0884f, 43.3661f;
				break;
			case 1:
				return 1338.7648f, 4359.783f, 43.367f;
				break;
			case 2:
				return 1356.5535f, 4382.489f, 43.3438f;
				break;
			case 3:
				return 1339.8293f, 4309.648f, 37.0807f;
				break;
			case 4:
				return 1338.6133f, 4310.2915f, 37.0608f;
				break;
			case 5:
				return 1367.848f, 4317.18f, 36.892f;
				break;
			case 6:
				return 1366.707f, 4317.156f, 36.805f;
				break;
			case 7:
				return 1366.21f, 4358.599f, 43.5f;
				break;
			case 8:
				return 1347.422f, 4338.12f, 37.091f;
				break;
			case 9:
				return 1357.7676f, 4377.625f, 43.3425f;
				break;
			}
	}
	return 1916.04f, 4711.155f, 40.196f;
}

int func_195(int iParam0)//Position - 0x96F5
{
	if (Local_230.f_76 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return joaat("G_M_Y_Lost_01");
				break;
			case 1:
				return joaat("G_F_Y_Lost_01");
				break;
			case 2:
				return joaat("G_M_Y_Lost_01");
				break;
			case 3:
				return joaat("G_M_Y_Lost_01");
				break;
			case 4:
				return joaat("G_F_Y_Lost_01");
				break;
			case 5:
				return joaat("G_F_Y_Lost_01");
				break;
			case 6:
				return joaat("G_M_Y_Lost_01");
				break;
			case 7:
				return joaat("G_M_Y_Lost_01");
				break;
			case 8:
				return joaat("G_F_Y_Lost_01");
				break;
			case 9:
				return joaat("G_M_Y_Lost_01");
				break;
			case 10:
				return joaat("G_M_Y_Lost_01");
				break;
			case 11:
				return joaat("G_M_Y_Lost_01");
				break;
			case 12:
				return joaat("G_F_Y_Lost_01");
				break;
			case 13:
				return joaat("G_F_Y_Lost_01");
				break;
			case 14:
				return joaat("G_M_Y_Lost_01");
				break;
		}
	}
	else if (Local_230.f_76 == 2)
	{
		return joaat("A_M_M_Hillbilly_02");
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return joaat("S_M_Y_Cop_01");
				break;
			case 1:
				return joaat("S_M_M_GenTransport");
				break;
			case 2:
				return joaat("S_M_Y_Cop_01");
				break;
			case 3:
				return joaat("S_M_Y_Cop_01");
				break;
			case 4:
				return joaat("S_M_Y_Cop_01");
				break;
			case 5:
				return joaat("S_M_M_GenTransport");
				break;
			case 6:
				return joaat("S_M_Y_Cop_01");
				break;
			case 7:
				return joaat("S_M_Y_Cop_01");
				break;
			case 8:
				return joaat("S_M_Y_Cop_01");
				break;
			case 9:
				return joaat("S_M_M_GenTransport");
				break;
			case 10:
				return joaat("S_M_Y_Cop_01");
				break;
			case 11:
				return joaat("S_M_Y_Cop_01");
				break;
			case 12:
				return joaat("S_M_Y_Cop_01");
				break;
			case 13:
				return joaat("S_M_Y_Cop_01");
				break;
			case 14:
				return joaat("S_M_Y_Cop_01");
				break;
			}
	}
	return joaat("G_M_Y_MexGoon_02");
}

int func_196()//Position - 0x992E
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Local_230.f_36)
	{
		return 0;
	}
	Local_230.f_35 = __LIB_19__::func_834() + 1;
	if (__LIB_19__::func_834() + 1 >= Global_262145.f_18743 /* Tunable: BIKER_NINE_TENTHS_MAX_BIKES */)
	{
		Local_230.f_35 = Global_262145.f_18743 /* Tunable: BIKER_NINE_TENTHS_MAX_BIKES */;
	}
	if (Global_262145.f_18742 /* Tunable: BIKER_NINE_TENTHS_MIN_BIKES */ > __LIB_19__::func_834() + 1)
	{
		Local_230.f_35 = Global_262145.f_18742 /* Tunable: BIKER_NINE_TENTHS_MIN_BIKES */;
	}
	STREAMING::REQUEST_MODEL(func_198(0));
	STREAMING::REQUEST_MODEL(func_198(1));
	STREAMING::REQUEST_MODEL(func_198(2));
	STREAMING::REQUEST_MODEL(func_198(3));
	STREAMING::REQUEST_MODEL(func_198(4));
	if (((((STREAMING::HAS_MODEL_LOADED(func_198(0)) && STREAMING::HAS_MODEL_LOADED(func_198(1))) && STREAMING::HAS_MODEL_LOADED(func_198(2))) && STREAMING::HAS_MODEL_LOADED(func_198(3))) && STREAMING::HAS_MODEL_LOADED(func_198(4))) && NETWORK::CAN_REGISTER_MISSION_VEHICLES(__LIB_39__::func_25(195, -1, 1, -1, -1, -1)))
	{
		MISC::CLEAR_AREA(func_29(0), 50f, true, false, false, true);
		iVar1 = 0;
		while (iVar1 < Local_230.f_35)
		{
			__LIB_18__::func_220(&(Local_230.f_7[iVar1]), func_198(iVar1), func_29(iVar1), func_197(iVar1), NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), 1, 1, 0, 1, 1, 0, 0, 0, 0);
			Local_230.f_60[iVar1] = 1;
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(Local_230.f_7[iVar1]), false);
			ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_VEH(Local_230.f_7[iVar1]), true, true, true, true, true, false, false, false);
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
			{
				DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_230.f_7[iVar1]), "Not_Allow_As_Saved_Veh", 1);
			}
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_230.f_7[iVar1]), false, 0);
			iVar2 = 0;
			while (iVar2 < 32)
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
					if (!func_23(iVar0) && !func_21(iVar0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_230.f_7[iVar1]), iVar0, true);
					}
				}
				iVar2++;
			}
			iVar1++;
		}
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(func_198(0));
		STREAMING::REQUEST_MODEL(func_198(1));
		STREAMING::REQUEST_MODEL(func_198(2));
		STREAMING::REQUEST_MODEL(func_198(3));
		STREAMING::REQUEST_MODEL(func_198(4));
	}
	return 0;
}

float func_197(int iParam0)//Position - 0x9B50
{
	if (Local_230.f_76 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 295.6f;
				break;
			case 1:
				return 69f;
				break;
			case 2:
				return 10.199f;
				break;
			case 3:
				return 153.597f;
				break;
			case 4:
				return 29.19f;
				break;
		}
	}
	else if (Local_230.f_76 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return 134.194f;
				break;
			case 1:
				return 64.942f;
				break;
			case 2:
				return 214.142f;
				break;
			case 3:
				return 214.142f;
				break;
			case 4:
				return 90.399f;
				break;
		}
	}
	else if (Local_230.f_76 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return 145.7972f;
			case 1:
				return 7f;
			case 2:
				return 116.3957f;
			case 3:
				return 137.5963f;
			case 4:
				return 156.1984f;
			case 5:
				return 14.3966f;
			case 6:
				return 270.4f;
			case 7:
				return 225f;
			}
		default:
	}
	return 211.395f;
}

int func_198(int iParam0)//Position - 0x9CA9
{
	if (Local_230.f_76 == 1)
	{
		return joaat("hexer");
	}
	else if (Local_230.f_76 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return joaat("daemon");
				break;
			case 1:
				return joaat("daemon");
				break;
			case 2:
				return joaat("daemon");
				break;
			case 3:
				return joaat("daemon");
				break;
			case 4:
				return joaat("benson");
				break;
		}
	}
	else if (Local_230.f_76 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return joaat("enduro");
				break;
			case 1:
				return joaat("sanchez");
				break;
			case 2:
				return joaat("sanchez");
				break;
			case 3:
				return joaat("enduro");
				break;
			case 4:
				return joaat("enduro");
				break;
			}
	}
	return joaat("benson");
}

int func_199()//Position - 0x9D97
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Local_231[iVar0 /*7*/].f_3 == 1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_205()//Position - 0x9E9A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Local_231[iVar0 /*7*/].f_4 == 1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_206()//Position - 0x9EC7
{
	return Local_230.f_5;
}

void func_207(int iParam0)//Position - 0x9ED4
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_230.f_4 = iParam0;
}

int func_208()//Position - 0x9EEE
{
	return Local_230.f_4;
}

bool func_209()//Position - 0x9EFB
{
	if (!func_2(1))
	{
		Local_230.f_6 = PLAYER::PLAYER_ID();
		func_211(1);
	}
	Local_230.f_35 = __LIB_19__::func_834() + 1;
	if (__LIB_19__::func_834() + 1 >= Global_262145.f_18743 /* Tunable: BIKER_NINE_TENTHS_MAX_BIKES */)
	{
		Local_230.f_35 = Global_262145.f_18743 /* Tunable: BIKER_NINE_TENTHS_MAX_BIKES */;
	}
	if (Global_262145.f_18742 /* Tunable: BIKER_NINE_TENTHS_MIN_BIKES */ > __LIB_19__::func_834() + 1)
	{
		Local_230.f_35 = Global_262145.f_18742 /* Tunable: BIKER_NINE_TENTHS_MIN_BIKES */;
	}
	if (__LIB_4__::func_829() > -1)
	{
		if (__LIB_4__::func_829() == 0)
		{
			Local_230.f_76 = 0;
		}
		else if (__LIB_4__::func_829() == 1)
		{
			Local_230.f_76 = 1;
		}
		else if (__LIB_4__::func_829() == 2)
		{
			Local_230.f_76 = 2;
		}
		else
		{
			Local_230.f_76 = 0;
		}
	}
	else
	{
		Local_230.f_76 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	}
	if (Global_262145.f_18739 /* Tunable: BIKER_DISABLE_NINE_TENTHS_0 */)
	{
		if (Local_230.f_76 == 0)
		{
			if (!Global_262145.f_18740 /* Tunable: BIKER_DISABLE_NINE_TENTHS_1 */)
			{
				Local_230.f_76 = 1;
			}
			else
			{
				Local_230.f_76 = 2;
			}
		}
	}
	if (Global_262145.f_18740 /* Tunable: BIKER_DISABLE_NINE_TENTHS_1 */)
	{
		if (Local_230.f_76 == 1)
		{
			if (!Global_262145.f_18741 /* Tunable: BIKER_DISABLE_NINE_TENTHS_2 */)
			{
				Local_230.f_76 = 2;
			}
			else
			{
				Local_230.f_76 = 0;
			}
		}
	}
	if (Global_262145.f_18741 /* Tunable: BIKER_DISABLE_NINE_TENTHS_2 */)
	{
		if (Local_230.f_76 == 2)
		{
			if (!Global_262145.f_18740 /* Tunable: BIKER_DISABLE_NINE_TENTHS_1 */)
			{
				Local_230.f_76 = 0;
			}
			else
			{
				Local_230.f_76 = 1;
			}
		}
	}
	return func_2(1);
}

void func_211(int iParam0)//Position - 0xA04A
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	MISC::SET_BIT(&(Local_230.f_1), iParam0);
}

void func_212(int iParam0)//Position - 0xA068
{
	Local_230.f_0 = iParam0;
}

void func_214()//Position - 0xA098
{
	int iVar0;
	switch (func_208())
	{
		case 0:
			break;
		case 1:
			if (iLocal_229 == 0)
			{
				if (Local_230.f_89 == 1)
				{
					iLocal_229 = 1;
					func_1149();
				}
			}
			if (__LIB_0__::func_649(&(Local_230.f_2)))
			{
				__LIB_34__::func_238((func_39() - __LIB_1__::func_295(&(Local_230.f_2), 0, 0)), func_206() != 0, &iLocal_199, -1);
			}
			if (!func_1140(2))
			{
				func_1139(2);
			}
			else if (!func_1140(3))
			{
				if (__LIB_2__::func_47(&(Local_230.f_2), 10000, 0))
				{
					__LIB_11__::func_64();
					func_1139(3);
				}
			}
			if ((func_23(PLAYER::PLAYER_ID()) || func_20()) || bLocal_204)
			{
				func_1029(&(Global_1637407.f_534), &Global_1637407, 28, &(Global_1637407.f_1), &(Global_1637407.f_117), -1, 0, 0);
			}
			if (!__LIB_26__::func_303() && !__LIB_0__::func_114())
			{
				if (iLocal_224)
				{
					if (!func_23(PLAYER::PLAYER_ID()) && !func_20())
					{
						iVar0 = 0;
						while (iVar0 < Local_230.f_35)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_7[iVar0]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_230.f_7[iVar0]), false))
							{
								if (VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_230.f_7[iVar0]), PLAYER::PLAYER_ID()))
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_230.f_7[iVar0]), PLAYER::PLAYER_ID(), true);
									iLocal_224 = 0;
								}
								__LIB_41__::func_185(195, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_230.f_7[iVar0]), false), &uLocal_225, 1140457472, 1144750080, 0);
							}
							iVar0++;
						}
					}
				}
				if (func_23(PLAYER::PLAYER_ID()) || func_20())
				{
					iVar0 = 0;
					while (iVar0 < Local_230.f_35)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_7[iVar0]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_230.f_7[iVar0]), false))
						{
							__LIB_41__::func_185(195, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_230.f_7[iVar0]), false), &uLocal_225, 1140457472, 1144750080, 0);
						}
						iVar0++;
					}
				}
				if (func_206() == 0)
				{
					if ((func_23(PLAYER::PLAYER_ID()) || func_20()) || bLocal_204 == 1)
					{
						func_997();
					}
					if (func_23(PLAYER::PLAYER_ID()) || func_20())
					{
						func_919(&iLocal_132, &(Local_230.f_65), 1112014848);
					}
					if (Local_231[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_3 == 0)
					{
						if (func_916(PLAYER::PLAYER_ID()))
						{
							Local_231[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_3 = 1;
							if (func_23(PLAYER::PLAYER_ID()) || func_20())
							{
								Local_231[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_4 = 1;
							}
							if (Global_2703735.f_4.f_10)
							{
								if (!__LIB_0__::func_497() && __LIB_4__::func_715())
								{
									AUDIO::TRIGGER_MUSIC_EVENT("BIKER_NINE_TENTHS_TUNNEL");
								}
							}
						}
						else if (Local_230.f_76 == 0)
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_211))
							{
								func_912();
							}
						}
					}
					if (iLocal_219 == 0)
					{
						if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), func_29(0), 0) < 100f && func_911())
						{
							iLocal_219 = 1;
							if (Global_2703735.f_4.f_10)
							{
								if (!__LIB_0__::func_497() && __LIB_4__::func_715())
								{
									AUDIO::TRIGGER_MUSIC_EVENT("BIKER_NINE_TENTHS_ENEMIES");
								}
							}
						}
					}
					if (iLocal_219 == 1)
					{
						func_906();
					}
					if (!__LIB_4__::func_520(PLAYER::PLAYER_ID()))
					{
						if ((Local_231[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_3 == 0 && !func_15()) && !func_199())
						{
							if (func_23(PLAYER::PLAYER_ID()) || func_20())
							{
								if ((!__LIB_2__::func_509(PLAYER::PLAYER_ID(), 7) && !__LIB_2__::func_509(PLAYER::PLAYER_ID(), 6)) && !__LIB_24__::func_792(&(Local_230.f_65)))
								{
									if (((((!__LIB_7__::func_260("GB_STEALSTRAPr" /* GXT: Race to the ~y~tunnel. ~s~ */) && !__LIB_7__::func_260("GB_STEALSTRAPsr" /* GXT: Race to the ~y~tunnel. ~s~ */)) && !__LIB_7__::func_260("GB_STEALSTRA1sr" /* GXT: Race to the ~y~impound. ~s~ */)) && !__LIB_7__::func_260("GB_STEALSTRA1r" /* GXT: Race to the ~y~impound. ~s~ */)) && !__LIB_7__::func_260("GB_STEALSTRA2sr" /* GXT: Race to the ~y~fishing village. ~s~ */)) && !__LIB_7__::func_260("GB_STEALSTRA2r" /* GXT: Race to the~y~ fishing village. ~s~ */))
									{
										if (__LIB_19__::func_834() + 1 > 1)
										{
											if (Local_230.f_76 == 0)
											{
												__LIB_25__::func_25("GB_STEALSTRAPsr" /* GXT: Race to the ~y~tunnel. ~s~ */, 0);
											}
											else if (Local_230.f_76 == 1)
											{
												__LIB_25__::func_25("GB_STEALSTRA1sr" /* GXT: Race to the ~y~impound. ~s~ */, 0);
											}
											else if (Local_230.f_76 == 2)
											{
												__LIB_25__::func_25("GB_STEALSTRA2sr" /* GXT: Race to the ~y~fishing village. ~s~ */, 0);
											}
										}
										else if (Local_230.f_76 == 0)
										{
											__LIB_25__::func_25("GB_STEALSTRAPr" /* GXT: Race to the ~y~tunnel. ~s~ */, 0);
										}
										else if (Local_230.f_76 == 1)
										{
											__LIB_25__::func_25("GB_STEALSTRA1r" /* GXT: Race to the ~y~impound. ~s~ */, 0);
										}
										else if (Local_230.f_76 == 2)
										{
											__LIB_25__::func_25("GB_STEALSTRA2r" /* GXT: Race to the~y~ fishing village. ~s~ */, 0);
										}
									}
								}
								else if (((((!__LIB_7__::func_260("GB_STEALSTRAP" /* GXT: Enter the ~y~tunnel.~s~ */) && !__LIB_7__::func_260("GB_STEALSTRAPs" /* GXT: Enter the ~y~tunnel.~s~ */)) && !__LIB_7__::func_260("GB_STEALSTRA1s" /* GXT: Go to the ~y~impound. ~s~ */)) && !__LIB_7__::func_260("GB_STEALSTRA1" /* GXT: Go to the ~y~impound. ~s~ */)) && !__LIB_7__::func_260("GB_STEALSTRA2s" /* GXT: Go to the ~y~fishing village. ~s~ */)) && !__LIB_7__::func_260("GB_STEALSTRA2" /* GXT: Go to the ~y~fishing village. ~s~ */))
								{
									if (__LIB_19__::func_834() + 1 > 1)
									{
										if (Local_230.f_76 == 0)
										{
											__LIB_25__::func_25("GB_STEALSTRAPs" /* GXT: Enter the ~y~tunnel.~s~ */, 0);
										}
										else if (Local_230.f_76 == 1)
										{
											__LIB_25__::func_25("GB_STEALSTRA1s" /* GXT: Go to the ~y~impound. ~s~ */, 0);
										}
										else if (Local_230.f_76 == 2)
										{
											__LIB_25__::func_25("GB_STEALSTRA2s" /* GXT: Go to the ~y~fishing village. ~s~ */, 0);
										}
									}
									else if (Local_230.f_76 == 0)
									{
										__LIB_25__::func_25("GB_STEALSTRAP" /* GXT: Enter the ~y~tunnel.~s~ */, 0);
									}
									else if (Local_230.f_76 == 1)
									{
										__LIB_25__::func_25("GB_STEALSTRA1" /* GXT: Go to the ~y~impound. ~s~ */, 0);
									}
									else if (Local_230.f_76 == 2)
									{
										__LIB_25__::func_25("GB_STEALSTRA2" /* GXT: Go to the ~y~fishing village. ~s~ */, 0);
									}
								}
							}
						}
					}
					if (Local_231[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_3 == 1 || func_15())
					{
						if (!iLocal_218)
						{
							if (func_15())
							{
								if (Local_230.f_76 == 1)
								{
									if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ALARM_BELL_02", false, -1))
									{
										iLocal_131 = AUDIO::GET_SOUND_ID();
										AUDIO::PLAY_SOUND_FROM_COORD(iLocal_131, "Bell_02", func_108(0), "ALARMS_SOUNDSET", true, 50, false);
										iLocal_218 = 1;
										if (!__LIB_0__::func_497() && __LIB_4__::func_715())
										{
											AUDIO::TRIGGER_MUSIC_EVENT("BIKER_NINE_TENTHS_BIKE");
										}
									}
								}
								else if (!__LIB_0__::func_497() && __LIB_4__::func_715())
								{
									iLocal_218 = 1;
									AUDIO::TRIGGER_MUSIC_EVENT("BIKER_NINE_TENTHS_BIKE");
								}
							}
						}
					}
					func_862();
					if (Local_231[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_2 == 1)
					{
						if (iLocal_223 == 0)
						{
							if (func_861(PLAYER::PLAYER_ID()))
							{
								if (func_859() != -1)
								{
									if (func_858(func_859()))
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										iLocal_223 = 1;
										AUDIO::PLAY_SOUND_FRONTEND(-1, "Deliver_Item", "GTAO_Biker_Modes_Soundset", false);
										Local_221.f_2 = -126299893;
										Local_221.f_10 = PLAYER::PLAYER_ID();
										__LIB_1__::func_226(Local_221, __LIB_4__::func_511(1));
									}
								}
							}
						}
						if (func_859() != -1)
						{
							if (!iLocal_220[func_859()])
							{
								if (func_14(func_859()))
								{
									iLocal_220[func_859()] = 1;
								}
							}
						}
					}
					else
					{
						iLocal_223 = 0;
					}
					if (Global_2703735.f_4.f_10)
					{
						if (!func_1140(4))
						{
							__LIB_41__::func_166(-1, 0, 0, -1, 0, 0);
							func_1139(4);
						}
						func_607();
						if (iLocal_209 > -1)
						{
							if (iLocal_209 == NETWORK::PARTICIPANT_ID_TO_INT())
							{
							}
						}
					}
				}
			}
			else
			{
				__LIB_18__::func_455();
				if (!iLocal_224)
				{
					if (!func_23(PLAYER::PLAYER_ID()) && !func_20())
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_7[0]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_230.f_7[0]), false))
						{
							if (!VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_230.f_7[0]), PLAYER::PLAYER_ID()))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_230.f_7[0]), PLAYER::PLAYER_ID(), true);
								iLocal_224 = 1;
							}
						}
					}
				}
			}
			break;
		case 2:
			__LIB_18__::func_455();
			func_220();
			func_219();
			__LIB_28__::func_864();
			func_216();
			if (func_215(PLAYER::PLAYER_ID()))
			{
				if (func_859() != -1)
				{
					if (func_858(func_859()))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						iLocal_223 = 1;
					}
				}
			}
			break;
		case 3:
			break;
	}
}

int func_215(int iParam0)//Position - 0xA846
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_230.f_35)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_7[iVar0]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_230.f_7[iVar0]), false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), NETWORK::NET_TO_VEH(Local_230.f_7[iVar0]), false))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_216()//Position - 0xA8AC
{
	func_219();
	__LIB_28__::func_864();
	func_217();
}

void func_217()//Position - 0xA8C0
{
	if (HUD::DOES_BLIP_EXIST(iLocal_215))
	{
		HUD::REMOVE_BLIP(&iLocal_215);
		Global_2815059.f_261 = { 0f, 0f, 0f };
		Global_2815059.f_267 = 0;
	}
}

void func_219()//Position - 0xA906
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_230.f_35)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_212[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_212[iVar0]));
		}
		iVar0++;
	}
}

void func_220()//Position - 0xA93D
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!func_1140(1))
	{
		if (func_206() != 0)
		{
			func_566();
			switch (func_206())
			{
				case 2:
					if (!__LIB_24__::func_791(&iLocal_199))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("BIKER_MP_MUSIC_FAIL");
					}
					break;
				case 3:
					if (!__LIB_24__::func_791(&iLocal_199))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("BIKER_MP_MUSIC_FAIL");
					}
					break;
				case 1:
					if ((func_23(PLAYER::PLAYER_ID()) || func_20()) || bLocal_204 == 1)
					{
						bVar0 = false;
						if (func_563())
						{
							__LIB_13__::func_829(24);
						}
					}
					if (!__LIB_24__::func_791(&iLocal_199))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("BIKER_MP_MUSIC_FAIL");
					}
					break;
				case 5:
					bVar0 = false;
					if (func_23(PLAYER::PLAYER_ID()) || func_20())
					{
						bVar0 = false;
						if (!__LIB_24__::func_791(&iLocal_199))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("BIKER_MP_MUSIC_FAIL");
						}
						if (func_563())
						{
							__LIB_13__::func_829(24);
						}
					}
					else
					{
						if (!__LIB_24__::func_791(&iLocal_199))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("BIKER_MP_MUSIC_STOP");
						}
						if (bLocal_204 == 1)
						{
							bVar0 = true;
						}
					}
					break;
				case 4:
					if (func_23(PLAYER::PLAYER_ID()) || func_20())
					{
						bVar0 = true;
						if (!__LIB_24__::func_791(&iLocal_199))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("BIKER_MP_MUSIC_STOP");
						}
						if (func_563())
						{
							__LIB_13__::func_829(23);
						}
					}
					else if (bLocal_204 == 1)
					{
						bVar0 = false;
						if (bLocal_204)
						{
							if (func_563())
							{
								__LIB_13__::func_829(24);
							}
							if (!__LIB_24__::func_791(&iLocal_199))
							{
								AUDIO::TRIGGER_MUSIC_EVENT("BIKER_MP_MUSIC_FAIL");
							}
						}
					}
					break;
			}
			HUD::CLEAR_HELP(true);
			func_216();
			if (!__LIB_24__::func_791(&iLocal_199))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("BIKER_MP_MUSIC_STOP");
			}
			iVar1 = PLAYER::PLAYER_ID();
			__LIB_28__::func_391(1, iVar1);
			if (bVar0)
			{
				__LIB_1__::func_444();
				if (func_23(PLAYER::PLAYER_ID()) || func_20())
				{
					iVar2 = (func_32() * Global_262145.f_18737 /* Tunable: BIKER_NINE_TENTHS_RP_REWARD */);
					iVar3 = (func_32() * Global_262145.f_18736 /* Tunable: BIKER_NINE_TENTHS_CASH_REWARD */);
				}
				else
				{
					iVar2 = (func_31() * Global_262145.f_18737 /* Tunable: BIKER_NINE_TENTHS_RP_REWARD */);
					iVar3 = (func_31() * Global_262145.f_18736 /* Tunable: BIKER_NINE_TENTHS_CASH_REWARD */);
				}
				Local_158.f_0 = iVar3;
				Local_158.f_1 = iVar2;
			}
			func_264(195, bVar0, &Local_158, 0);
			func_6733(bVar0, 0);
			func_1139(1);
		}
	}
	if (func_222(&uLocal_192, 0, 0))
	{
		func_221(0);
	}
}

void func_221(int iParam0)//Position - 0xAB81
{
	MISC::SET_BIT(&(Local_231[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_1), iParam0);
}

int func_222(var uParam0, bool bParam1, int iParam2)//Position - 0xAB9A
{
	bool bVar0;
	__LIB_1__::func_484(29);
	if ((*uParam0 > 0 && !__LIB_1__::func_159()) && __LIB_36__::func_867(PLAYER::PLAYER_ID()) != 0)
	{
		if (!__LIB_27__::func_205())
		{
			__LIB_1__::func_432();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!__LIB_0__::func_649(&(uParam0->f_3)))
			{
				__LIB_0__::func_580(&(uParam0->f_3), 0, 0);
			}
			else if (__LIB_2__::func_47(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1943920.f_3), 2);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2815059.f_4657), 0);
					__LIB_0__::func_580(&(uParam0->f_5), 0, 0);
				}
				__LIB_0__::func_580(&(uParam0->f_1), 0, 0);
				__LIB_1__::func_0(uParam0, 1);
			}
			break;
		case 1:
			if (__LIB_0__::func_649(&(uParam0->f_5)))
			{
				if (__LIB_2__::func_47(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_237(iParam2);
				__LIB_1__::func_0(uParam0, 2);
			}
			break;
		case 2:
			func_237(0);
			if (__LIB_2__::func_47(&(uParam0->f_1), 15000, 0))
			{
				if (__LIB_0__::func_1(func_224(0)))
				{
					HUD::CLEAR_HELP(true);
				}
				__LIB_1__::func_0(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_2__::func_47(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2815059.f_4657), 1);
				MISC::CLEAR_BIT(&(Global_1943920.f_3), 2);
				__LIB_1__::func_0(uParam0, 4);
				return 1;
			}
			break;
		case 4:
			MISC::CLEAR_BIT(&(Global_2815059.f_4657), 1);
			MISC::CLEAR_BIT(&(Global_1943920.f_3), 2);
			return 1;
	}
	return 0;
}

char* func_224(int iParam0)//Position - 0xAD27
{
	if (((__LIB_21__::func_967(PLAYER::PLAYER_ID()) || __LIB_24__::func_785(PLAYER::PLAYER_ID())) || __LIB_28__::func_466()) || iParam0)
	{
		if (__LIB_24__::func_785(PLAYER::PLAYER_ID()))
		{
			return "BG_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Club Challenge leaderboard. */;
		}
		return "BG_LBD_HELPW" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Club Work leaderboard. */;
	}
	if (__LIB_6__::func_951(__LIB_1__::func_321()))
	{
		return "GB_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the VIP Challenge leaderboard. */;
	}
	return "GB_LBD_HELPW" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the VIP Work leaderboard. */;
}

void func_237(int iParam0)//Position - 0xB036
{
	if (BitTest(Global_2815059.f_4657, 0))
	{
		if (((((((((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2815059.f_836, 2)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75485) && !Global_60335) && !CAM::IS_SCREEN_FADED_OUT()) && !__LIB_1__::func_424(PLAYER::PLAYER_ID(), 22)) && __LIB_36__::func_867(PLAYER::PLAYER_ID()) != 0) && !__LIB_1__::func_38(__LIB_9__::func_308())) && !__LIB_21__::func_967(PLAYER::PLAYER_ID())) && !__LIB_9__::func_286(__LIB_3__::func_803(PLAYER::PLAYER_ID()))) && !__LIB_2__::func_859(__LIB_3__::func_803(PLAYER::PLAYER_ID())))
		{
			MISC::SET_BIT(&(Global_2815059.f_4657), 1);
			__LIB_1__::func_278(func_224(iParam0), -1);
			__LIB_33__::func_151(1);
			MISC::CLEAR_BIT(&(Global_2815059.f_4657), 0);
		}
	}
}

void func_264(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0xBEC0
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	__LIB_20__::func_405(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + __LIB_22__::func_51(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + __LIB_10__::func_941(iParam0, bParam3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (__LIB_27__::func_247(iParam0))
	{
		if (bParam1)
		{
			if (Global_262145.f_24496 /* Tunable: -76964080 */)
			{
				if (__LIB_10__::func_940(PLAYER::PLAYER_ID()) <= 0)
				{
					__LIB_11__::func_27();
				}
			}
			else if (__LIB_10__::func_940(PLAYER::PLAYER_ID()) > 0)
			{
				__LIB_11__::func_26();
			}
			else
			{
				__LIB_11__::func_27();
			}
		}
		else
		{
			__LIB_10__::func_939();
		}
	}
	__LIB_36__::func_350(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	__LIB_33__::func_170(iParam0, uParam2, &iVar0, &iVar5);
	__LIB_38__::func_325(iParam0, uParam2, &iVar0, &iVar5);
	__LIB_33__::func_169(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	__LIB_36__::func_349(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2815059.f_5195.f_387 = iVar4;
	}
	else
	{
		Global_2815059.f_5195.f_387 = iVar5;
	}
	iVar8 = __LIB_1__::func_301();
	if (iVar8 != __LIB_0__::func_160() && iParam0 != 148)
	{
		if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
		{
			if (!__LIB_7__::func_246(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				__LIB_40__::func_279(&iVar0, 1);
			}
		}
	}
	__LIB_36__::func_296(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1943929.f_10 = iVar1;
		__LIB_1__::func_444();
		__LIB_39__::func_734(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_COLLECT_CHECKPOINT"), iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1943929.f_9 = iVar0;
		__LIB_41__::func_159(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		__LIB_22__::func_49(iParam0, iVar0);
		if (__LIB_10__::func_932(iParam0))
		{
			if (__LIB_10__::func_931(iParam0) > -1)
			{
				__LIB_1__::func_445(__LIB_10__::func_931(iParam0), iVar0);
			}
		}
		Global_2727753 = iVar0;
		__LIB_0__::func_495(&Global_2725869, 0, 0);
	}
	if (__LIB_1__::func_570(PLAYER::PLAYER_ID()) || __LIB_2__::func_858(PLAYER::PLAYER_ID()))
	{
		__LIB_27__::func_245(iParam0);
	}
	if ((__LIB_10__::func_929(iParam0) || iParam0 == 293) || iParam0 == 291)
	{
		Global_1943947.f_13 = iVar0;
		Global_1943947.f_14 = iVar1;
	}
	if (__LIB_9__::func_286(iParam0))
	{
		Global_1944003.f_13 = iVar0;
		Global_1944003.f_14 = iVar1;
	}
	if (((__LIB_3__::func_524(iParam0) || iParam0 == 297) || iParam0 == 296) || iParam0 == 298)
	{
		Global_1944066.f_12 = iVar0;
		Global_1944066.f_13 = iVar1;
	}
	if (__LIB_1__::func_204(iParam0))
	{
		Global_1944113.f_12 = iVar0;
		Global_1944113.f_13 = iVar1;
	}
	if (__LIB_0__::func_787(iParam0))
	{
		Global_1944167.f_12 = iVar0;
		Global_1944167.f_13 = iVar1;
	}
	if (__LIB_2__::func_859(iParam0))
	{
		if (__LIB_10__::func_909(iParam0))
		{
			Global_1944249.f_12 = iVar0;
			Global_1944249.f_13 = iVar1;
		}
		else if (((__LIB_24__::func_822(iParam0) || iParam0 == 299) || iParam0 == 300) || iParam0 == 301)
		{
			Global_1944303.f_12 = iVar0;
			Global_1944303.f_13 = iVar1;
		}
	}
	if (__LIB_9__::func_415(iParam0))
	{
		Global_1944390.f_12 = iVar0;
		Global_1944390.f_13 = iVar1;
	}
	if (__LIB_2__::func_965(iParam0))
	{
		Global_1944465.f_16 = iVar0;
		Global_1944465.f_17 = iVar1;
	}
	if (__LIB_9__::func_29(iParam0))
	{
		Global_1944552.f_16 = iVar0;
		Global_1944552.f_17 = iVar1;
	}
	if (__LIB_2__::func_473(iParam0) || __LIB_10__::func_894(iParam0))
	{
		Global_1944685.f_15 = iVar0;
		Global_1944685.f_16 = iVar1;
	}
	func_265(bParam1, iParam0);
}

void func_265(bool bParam0, int iParam1)//Position - 0xC385
{
	int iVar0;
	bool bVar1;
	if (bParam0)
	{
		iVar0 = -1;
		bVar1 = false;
		switch (iParam1)
		{
			case 226:
				iVar0 = 2;
				bVar1 = true;
				break;
			case 190:
				iVar0 = 3;
				bVar1 = true;
				break;
			case 230:
				iVar0 = 4;
				bVar1 = true;
				break;
			case 168:
				iVar0 = 5;
				bVar1 = true;
				break;
			case 188:
				iVar0 = 6;
				bVar1 = true;
				break;
			case 237:
				bVar1 = true;
				break;
		}
		if (iVar0 != -1)
		{
			if (__LIB_19__::func_766(iVar0) && !__LIB_39__::func_77(iVar0))
			{
				__LIB_34__::func_371(iVar0);
			}
		}
		if (bVar1)
		{
			if (__LIB_19__::func_766(1) && !__LIB_39__::func_77(1))
			{
				__LIB_34__::func_371(1);
			}
		}
	}
}

int func_563()//Position - 0x3C13E
{
	if (func_20() || func_564())
	{
		return 1;
	}
	return 0;
}

bool func_564()//Position - 0x3C15C
{
	return func_23(PLAYER::PLAYER_ID());
}

void func_566()//Position - 0x3C179
{
	char cVar0[16];
	struct<2> Var1;
	if (Global_2703735.f_4.f_10)
	{
		if (!__LIB_26__::func_303() && !__LIB_0__::func_114())
		{
			if (__LIB_28__::func_467())
			{
				switch (func_206())
				{
					case 2:
						HUD::CLEAR_HELP(true);
						__LIB_40__::func_252(88, "GB_CHAL_OVER" /* GXT: CHALLENGE OVER */, "LR_BOSSLEFT" /* GXT: The MC President has left the session */, 1, -1, 2, 1, 0);
						break;
					case 3:
						__LIB_40__::func_252(88, "GB_CHAL_OVER" /* GXT: CHALLENGE OVER */, "LR_BOSSLEFT" /* GXT: The MC President has left the session */, 1, -1, 2, 1, 0);
						HUD::CLEAR_HELP(true);
						break;
					case 1:
						HUD::CLEAR_HELP(true);
						if ((func_23(PLAYER::PLAYER_ID()) || func_20()) || bLocal_204 == 1)
						{
							StringCopy(&cVar0, "GB_UNLOADLOSET" /* GXT: The time has expired */, 16);
							HUD::CLEAR_HELP(true);
							__LIB_41__::func_207(88, "BK_OVER" /* GXT: MISSION OVER */, &cVar0, __LIB_34__::func_373(), __LIB_18__::func_516(PLAYER::PLAYER_ID()), 0, -1, -1, -1, 2, -1);
						}
						break;
					case 5:
						HUD::CLEAR_HELP(true);
						if (Local_230.f_35 == 1)
						{
							StringCopy(&cVar0, "GB_U_STEALLOSEV" /* GXT: The motorcycle was destroyed */, 16);
						}
						else
						{
							StringCopy(&cVar0, "GB_U_STEALOSEVs" /* GXT: The motorcycles were destroyed */, 16);
						}
						if (func_23(PLAYER::PLAYER_ID()) || func_20())
						{
							__LIB_41__::func_207(88, "BK_OVER" /* GXT: MISSION OVER */, &cVar0, __LIB_34__::func_373(), __LIB_18__::func_516(PLAYER::PLAYER_ID()), 0, -1, -1, -1, 2, -1);
						}
						else if (Local_231[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_6 > 0)
						{
							func_574(88, Local_231[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_6, Local_230.f_35, "GB_STEAL_GENWU" /* GXT: You destroyed ~1~ of ~1~ motorcycles */, 1, -1, 2, "BK_WINNER" /* GXT: MISSION PASSED */, 0);
						}
						else
						{
							__LIB_40__::func_252(88, "BK_OVER" /* GXT: MISSION OVER */, "GB_STEAL_WINe0" /* GXT: You didn't destroy any motorcycles */, 1, -1, 2, 1, 0);
						}
						break;
					case 4:
						if (func_23(PLAYER::PLAYER_ID()) || func_20())
						{
							StringCopy(&cVar0, "GB_STEAL_WIN" /* GXT: ~a~~s~ delivered the motorcycle */, 16);
							StringCopy(&Var1, "BK_WINNER" /* GXT: MISSION PASSED */, 16);
							if (func_32() > 1)
							{
								StringCopy(&cVar0, "GB_STEAL_WINs" /* GXT: ~a~~s~ delivered ~1~ of ~1~ motorcycles */, 16);
							}
							if (func_31() > 1)
							{
								StringCopy(&Var1, "BK_OVER" /* GXT: MISSION OVER */, 16);
							}
							if (Local_230.f_35 > 1)
							{
								__LIB_41__::func_207(87, &Var1, &cVar0, __LIB_34__::func_372(func_22()), __LIB_18__::func_516(func_22()), "", func_32(), Local_230.f_35, -1, 2, -1);
							}
							else
							{
								__LIB_41__::func_207(87, &Var1, &cVar0, __LIB_34__::func_372(func_22()), __LIB_18__::func_516(func_22()), 0, -1, -1, -1, 2, -1);
							}
						}
						else if (bLocal_204 == 1)
						{
							StringCopy(&cVar0, "GB_STEAL_WINe" /* GXT: The motorcycle was destroyed */, 16);
							if (Local_230.f_35 > 1)
							{
								StringCopy(&cVar0, "GB_STEAL_WINes" /* GXT: ~a~~s~ destroyed ~1~ of ~1~ motorcycles */, 16);
							}
							if (bLocal_204)
							{
								if (Local_231[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_6 > 0)
								{
									func_574(88, Local_231[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_6, Local_230.f_35, "GB_STEAL_GENWU" /* GXT: You destroyed ~1~ of ~1~ motorcycles */, 1, -1, 2, "BK_WINNER" /* GXT: MISSION PASSED */, 0);
								}
								else
								{
									__LIB_40__::func_252(88, "BK_OVER" /* GXT: MISSION OVER */, "GB_STEAL_WINe0" /* GXT: You didn't destroy any motorcycles */, 1, -1, 2, 1, 0);
								}
							}
						}
						break;
				}
			}
		}
	}
}

int func_574(int iParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x3C622
{
	struct<80> Var0;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	__LIB_0__::func_975(iParam0, &Var0, iParam1, sParam3, sParam7);
	Var0.f_4 = uParam2;
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_72 = iParam6;
	StringCopy(&(Var0.f_57), sParam8, 16);
	return __LIB_40__::func_229(&Var0);
}

void func_607()//Position - 0x3D405
{
	if (func_563() || bLocal_204)
	{
		if (func_563())
		{
			__LIB_36__::func_831(1);
		}
		func_743();
		if (bLocal_204 == 1 || func_563())
		{
			func_738();
		}
		if (__LIB_24__::func_793() || !__LIB_4__::func_520(PLAYER::PLAYER_ID()))
		{
			__LIB_0__::func_371();
			__LIB_0__::func_371();
			__LIB_0__::func_371();
			if (func_563())
			{
				func_611();
			}
			if (iLocal_228 == 0)
			{
				if (func_610())
				{
					iLocal_228 = 1;
				}
			}
			if (iLocal_227 == 0)
			{
				if (func_608())
				{
					iLocal_227 = 1;
				}
			}
		}
	}
	else
	{
		switch (__LIB_36__::func_867(PLAYER::PLAYER_ID()))
		{
			case 0:
				__LIB_18__::func_455();
				break;
			case 1:
			case 2:
				__LIB_0__::func_371();
				break;
			case 3:
				__LIB_0__::func_371();
				__LIB_0__::func_371();
				__LIB_0__::func_371();
				func_738();
				break;
			}
	}
}

int func_608()//Position - 0x3D4DD
{
	if (func_23(PLAYER::PLAYER_ID()) || func_20())
	{
		if (__LIB_2__::func_47(&(Local_230.f_2), 15000, 0))
		{
			if (__LIB_19__::func_834() + 1 == 2)
			{
				__LIB_0__::func_151("HELP2PLYUNLOAD" /* GXT: Two drivers will be needed on this mission. These Members can ride as passengers to avoid leaving their motorcycles behind at the pick-up location. */, -1);
			}
			else if (__LIB_19__::func_834() + 1 == 3)
			{
				__LIB_0__::func_151("HELP3PLYUNLOAD" /* GXT: Three drivers will be needed on this mission. These Members can ride as passengers to avoid leaving their motorcycles behind at the pick-up location. */, -1);
			}
			else if (__LIB_19__::func_834() + 1 == 4)
			{
				__LIB_0__::func_151("HELP4PLYUNLOAD" /* GXT: Four drivers will be needed on this mission. These Members can ride as passengers to avoid leaving their motorcycles behind at the pick-up location. */, -1);
			}
			return 1;
		}
	}
	return 0;
}

int func_610()//Position - 0x3D565
{
	if (func_23(PLAYER::PLAYER_ID()) || func_20())
	{
		if (__LIB_2__::func_47(&(Local_230.f_2), 5000, 0))
		{
			__LIB_0__::func_151("GB_STEAL_HELP" /* GXT: Nine Tenths of the Law has started. Steal the Motorcycles and deliver them to the drop-off to earn cash and RP. */, -1);
			return 1;
		}
	}
	return 0;
}

void func_611()//Position - 0x3D5A0
{
	var uVar0;
	struct<2> Var1;
	if (!BitTest(uLocal_232, 0))
	{
		__LIB_0__::func_203(&uLocal_233, 2, 0, "MALCOLM", 0, 1);
		MISC::SET_BIT(&uLocal_232, 0);
	}
	if (!BitTest(uLocal_232, 1))
	{
		if (BitTest(uLocal_232, 0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!__LIB_1__::func_480(86))
				{
					if (__LIB_18__::func_448(0, 1, 0, 1))
					{
						MISC::SET_BIT(&uVar0, 4);
						if (Local_230.f_76 == 0)
						{
							StringCopy(&Var1, "BPMAL_NINE1", 16);
						}
						else if (Local_230.f_76 == 1)
						{
							StringCopy(&Var1, "BPMAL_NINE2", 16);
						}
						else if (Local_230.f_76 == 2)
						{
							StringCopy(&Var1, "BPMAL_NINE3", 16);
						}
						if (func_612(&uLocal_233, __LIB_36__::func_864(), "BPMALAU", &Var1, uVar0, 0))
						{
							MISC::SET_BIT(&uLocal_232, 1);
						}
					}
				}
			}
		}
	}
}

int func_612(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5)//Position - 0x3D659
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	if (__LIB_18__::func_331())
	{
		return 0;
	}
	if (__LIB_2__::func_138())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_613(uParam0, iParam1, sParam2, sParam3, 1, iParam5, uParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_613(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0x3D69E
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = __LIB_2__::func_137(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (__LIB_25__::func_2(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!__LIB_7__::func_267(uParam6))
	{
		return 0;
	}
	if (__LIB_18__::func_480(iVar0, iVar1, iVar2))
	{
		if (__LIB_2__::func_132())
		{
			return 0;
		}
		__LIB_2__::func_131();
		return func_620(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!__LIB_2__::func_112(iParam4))
	{
		return 0;
	}
	__LIB_18__::func_479(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

int func_620(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0x3D889
{
	struct<2> Var0;
	__LIB_2__::func_130();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return __LIB_40__::func_108(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226" /* GXT: Accept? */, 16);
		return __LIB_40__::func_959(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return __LIB_40__::func_108(uParam0, sParam3, sParam4);
		}
		return __LIB_41__::func_77(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_672(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_660(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return __LIB_41__::func_778(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return __LIB_42__::func_183(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_660(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x3F0B7
{
	bool bVar0;
	bVar0 = false;
	return func_661(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_661(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x3F0DA
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	bVar0 = __LIB_0__::func_160();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		bVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(bVar0);
		iVar1 = __LIB_35__::func_811(bVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1641031.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22666 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = __LIB_2__::func_287(sParam5, bParam6, &iVar3);
	iVar5 = __LIB_7__::func_263(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = __LIB_39__::func_808(iParam0, sParam2, iVar10, sVar4, iVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = __LIB_37__::func_865(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		__LIB_2__::func_116();
	}
	__LIB_2__::func_121();
	__LIB_2__::func_115();
	__LIB_2__::func_114();
	return 1;
}

int func_672(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x3FC47
{
	bool bVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	__LIB_2__::func_121();
	bVar0 = true;
	if (func_661(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		__LIB_2__::func_113(120000);
		return 1;
	}
	return 0;
}

void func_738()//Position - 0x40BBF
{
	int iVar0;
	if (__LIB_0__::func_649(&(Local_230.f_2)))
	{
		iLocal_210 = (func_39() - __LIB_1__::func_295(&(Local_230.f_2), 0, 0));
		if (iLocal_210 < func_39())
		{
			if (iLocal_210 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			__LIB_1__::func_428();
			if (iLocal_210 > 0)
			{
				__LIB_6__::func_929(iLocal_210, "SCONTRA_TIMER" /* GXT: TIME REMAINING */, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				__LIB_6__::func_929(0, "SCONTRA_TIMER" /* GXT: TIME REMAINING */, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
}

void func_743()//Position - 0x40DE2
{
	int iVar0;
	int iVar1[4];
	if (!Global_2703735.f_4.f_10)
	{
		return;
	}
	if (__LIB_6__::func_279())
	{
		return;
	}
	if (Local_230.f_37 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_230.f_35)
	{
		if (Local_230.f_40[iVar0])
		{
			iVar1[iVar0] = 6;
		}
		else if (Local_230.f_45[iVar0])
		{
			iVar1[iVar0] = 9;
		}
		else
		{
			iVar1[iVar0] = 3;
		}
		iVar0++;
	}
	if (Local_230.f_37 == 1)
	{
		if ((func_23(PLAYER::PLAYER_ID()) || func_20()) || bLocal_204)
		{
			func_744(Local_230.f_35, "GB_HUSTEALBIKE2" /* GXT: MOTORCYCLES */, Local_230.f_35, 1, 1, 1, 1, 0, 0, 0, 0, 18, 6, -1, 2, -1082130432, -1082130432, 0, iVar1[0], iVar1[1], iVar1[2], iVar1[3], 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, Local_230.f_40[0], Local_230.f_40[1], Local_230.f_40[2], Local_230.f_40[3], 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 0);
		}
	}
}

void func_744(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19, var uParam20, var uParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, var uParam38, var uParam39, var uParam40, var uParam41, int iParam42, int iParam43, int iParam44, int iParam45, int iParam46, int iParam47, int iParam48, int iParam49, int iParam50, int iParam51, int iParam52, int iParam53, int iParam54, int iParam55, bool bParam56)//Position - 0x40F02
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
		Global_1649593.f_2120[iVar0] = uParam0;
		StringCopy(&(Global_1649593.f_2120.f_99[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_2120.f_260[iVar0] = uParam2;
		Global_1649593.f_2120.f_11[iVar0] = iParam3;
		Global_1649593.f_2120.f_22[iVar0] = iParam4;
		Global_1649593.f_2120.f_33[iVar0] = iParam5;
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
		Global_1649593.f_2120.f_368[iVar0] = uParam18;
		Global_1649593.f_2120.f_379[iVar0] = uParam19;
		Global_1649593.f_2120.f_390[iVar0] = uParam20;
		Global_1649593.f_2120.f_401[iVar0] = uParam21;
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
		Global_2825033[iVar0] = uParam38;
		Global_2825044[iVar0] = uParam39;
		Global_2825055[iVar0] = uParam40;
		Global_2825066[iVar0] = uParam41;
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

int func_858(int iParam0)//Position - 0x4BE49
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_7[iParam0]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_230.f_7[iParam0]), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_230.f_7[iParam0]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_230.f_7[iParam0]), 10);
			ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_VEH(Local_230.f_7[iParam0]), true, true, true, true, true, false, false, false);
			return 1;
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_230.f_7[iParam0]);
		}
	}
	return 0;
}

int func_859()//Position - 0x4BECB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_230.f_35)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_7[iVar0]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_230.f_7[iVar0]), false))
		{
			if (__LIB_2__::func_15(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_230.f_7[iVar0]), 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_861(int iParam0)//Position - 0x4BF81
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if (__LIB_0__::func_529(iVar0, func_18(), 0) < 5f)
	{
		Local_231[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_5 = 1;
		return 1;
	}
	return 0;
}

void func_862()//Position - 0x4BFB2
{
	int iVar0;
	int iVar1;
	if (Local_230.f_76 != 0)
	{
		if (Local_231[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_3 == 1 || func_15())
		{
			__LIB_28__::func_864();
		}
	}
	if (func_215(PLAYER::PLAYER_ID()))
	{
		if (!iLocal_226)
		{
			__LIB_35__::func_821(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
			iLocal_226 = 1;
		}
	}
	if (!iLocal_217)
	{
		if (Local_230.f_89 == 1)
		{
			if (func_15())
			{
				if (func_23(PLAYER::PLAYER_ID()) || func_20())
				{
					__LIB_0__::func_151("GB_BKR_RVL" /* GXT: Other players in the session have been alerted to your activities. These players can now come after your MC to earn cash and RP. */, -1);
					HUD::FLASH_MINIMAP_DISPLAY();
					__LIB_24__::func_764(1, 5000, 0);
					iLocal_217 = 1;
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_230.f_35)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_7[iVar0]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_230.f_7[iVar0]), false))
		{
			if (func_23(PLAYER::PLAYER_ID()) || func_20())
			{
				if (func_215(PLAYER::PLAYER_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_230.f_7[iVar0]), false))
					{
						if (Local_230.f_76 == 0)
						{
							if (func_28(iVar0))
							{
								__LIB_28__::func_864();
								func_883();
								if (!__LIB_7__::func_260("GB_STEAL_OBJ3" /* GXT: Deliver the motorcycle to the ~y~drop-off.~s~ */))
								{
									__LIB_18__::func_455();
									__LIB_25__::func_25("GB_STEAL_OBJ3" /* GXT: Deliver the motorcycle to the ~y~drop-off.~s~ */, 0);
								}
							}
							else
							{
								if (iLocal_214 == 0)
								{
									func_882();
									__LIB_37__::func_865(147, "GBSTEALBITXT1" /* GXT: Them rides better be worth it cos this is nasty as hell. Get back outside. */, 1, 0, 0, 0, 0, 1, 0, 1);
									iLocal_214 = 1;
								}
								if (!__LIB_7__::func_260("GB_STEALEAVETUN" /* GXT: Exit the ~y~tunnel.~s~ */))
								{
									__LIB_18__::func_455();
									__LIB_25__::func_25("GB_STEALEAVETUN" /* GXT: Exit the ~y~tunnel.~s~ */, 0);
								}
							}
						}
						else
						{
							if (iLocal_214 == 0)
							{
								if (Local_230.f_76 == 1)
								{
									__LIB_37__::func_865(147, "GBSTEALBITXT2" /* GXT: Them bikes is hot as newborn shit. Get low before you bring em home. */, 1, 0, 0, 0, 0, 1, 0, 1);
									iLocal_214 = 1;
								}
							}
							__LIB_28__::func_864();
							func_883();
							if (!__LIB_7__::func_260("GB_STEAL_OBJ3" /* GXT: Deliver the motorcycle to the ~y~drop-off.~s~ */))
							{
								__LIB_18__::func_455();
								__LIB_25__::func_25("GB_STEAL_OBJ3" /* GXT: Deliver the motorcycle to the ~y~drop-off.~s~ */, 0);
							}
						}
					}
					func_219();
					Local_231[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_2 = 1;
				}
				else if (func_205())
				{
					func_881(0);
					__LIB_28__::func_864();
					Local_231[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_2 = 0;
					if (func_880())
					{
						if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if ((!__LIB_7__::func_260("GB_STEAL_OBJ4" /* GXT: Steal the ~b~motorcycle.~s~ */) && !__LIB_7__::func_260("GB_STEAL_OBJ4e" /* GXT: Steal a ~b~motorcycle.~s~ */)) && !__LIB_7__::func_260("GB_STEAL_OBJ4f" /* GXT: Steal another ~b~motorcycle.~s~ */))
							{
								__LIB_28__::func_864();
								if (func_861(PLAYER::PLAYER_ID()))
								{
									__LIB_25__::func_25("GB_STEAL_OBJ4f" /* GXT: Steal another ~b~motorcycle.~s~ */, 0);
								}
								else if (!__LIB_4__::func_520(PLAYER::PLAYER_ID()))
								{
									if (Local_230.f_35 > 1)
									{
										__LIB_25__::func_25("GB_STEAL_OBJ4e" /* GXT: Steal a ~b~motorcycle.~s~ */, 0);
									}
									else
									{
										__LIB_25__::func_25("GB_STEAL_OBJ4" /* GXT: Steal the ~b~motorcycle.~s~ */, 0);
									}
								}
								func_217();
							}
						}
					}
					else
					{
						func_877(0);
						if (!__LIB_7__::func_260("GB_STEAL_OBJ4b" /* GXT: Help deliver the ~b~motorcycle~s~ to the ~y~drop-off. */) && !__LIB_7__::func_260("GB_STEAL_OBJ4bs" /* GXT: Help deliver the ~b~motorcycles~s~ to the ~y~drop-off. */))
						{
							func_883();
							__LIB_28__::func_864();
							iVar1 = (Local_230.f_35 - (func_32() + func_31()));
							if (!__LIB_4__::func_520(PLAYER::PLAYER_ID()))
							{
								if (iVar1 > 1)
								{
									__LIB_25__::func_25("GB_STEAL_OBJ4bs" /* GXT: Help deliver the ~b~motorcycles~s~ to the ~y~drop-off. */, 0);
								}
								else
								{
									__LIB_25__::func_25("GB_STEAL_OBJ4b" /* GXT: Help deliver the ~b~motorcycle~s~ to the ~y~drop-off. */, 0);
								}
							}
						}
					}
				}
			}
			else
			{
				if (__LIB_36__::func_867(PLAYER::PLAYER_ID()) > 0 || func_875(PLAYER::PLAYER_ID(), 1140457472))
				{
					if (iLocal_216 == 0)
					{
						if (Local_230.f_89 == 1)
						{
							if (Global_2703735.f_4.f_10)
							{
								if (Local_230.f_35 == 1)
								{
									__LIB_41__::func_207(86, "GB_STEAL_T" /* GXT: Nine Tenths Of The Law */, "GB_STEAL_ENEMY" /* GXT: ~a~~s~ just stole a motorcycle. Destroy the motorcycle. */, __LIB_34__::func_372(func_22()), __LIB_18__::func_516(func_22()), 0, -1, -1, -1, 2, -1);
								}
								else
								{
									__LIB_41__::func_207(86, "GB_STEAL_T" /* GXT: Nine Tenths Of The Law */, "GB_STEAL_ENEMYs" /* GXT: ~a~~s~ just stole some motorcycles. Destroy the motorcycles. */, __LIB_34__::func_372(func_22()), __LIB_18__::func_516(func_22()), 0, -1, -1, -1, 2, -1);
								}
								__LIB_33__::func_151(1);
								HUD::FLASH_MINIMAP_DISPLAY();
								__LIB_24__::func_764(1, 5000, 0);
								func_881(1);
								iLocal_216 = 1;
								__LIB_5__::func_571("GB_STEENEHELP" /* GXT: ~a~~s~ have started Nine Tenths of the Law. Destroy the motorcycles ~HUD_COLOUR_RED~~BLIP_GANG_BIKE~~s~ to earn cash and RP */, __LIB_34__::func_372(func_22()), __LIB_18__::func_516(func_22()), -1);
							}
						}
					}
				}
				if (Local_230.f_89 == 1)
				{
					if (bLocal_204 == 0)
					{
						if (func_875(PLAYER::PLAYER_ID(), 1140457472))
						{
							if (Global_2703735.f_4.f_10)
							{
								__LIB_25__::func_25("GB_STEAL_OBJ6" /* GXT: Destroy the ~r~motorcycles.~s~ */, 0);
								if (!__LIB_0__::func_497() && __LIB_4__::func_715())
								{
									AUDIO::TRIGGER_MUSIC_EVENT("BIKER_NINE_TENTHS_START");
								}
								bLocal_204 = true;
								__LIB_20__::func_415();
								__LIB_36__::func_880(0);
								__LIB_6__::func_990(1);
							}
						}
					}
				}
				if (iLocal_216 == 1)
				{
					func_881(1);
				}
			}
		}
		iVar0++;
	}
	if (func_215(PLAYER::PLAYER_ID()))
	{
		func_863();
	}
}

void func_863()//Position - 0x4C3FA
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	Var0 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
	HUD::GET_HUD_COLOUR(12, &iVar1, &iVar2, &iVar3, &uVar4);
	if (SYSTEM::VDIST(Var0, func_18()) < 100f)
	{
		if (func_23(PLAYER::PLAYER_ID()) || func_20())
		{
			GRAPHICS::DRAW_MARKER(1, func_18(), 0f, 0f, 0f, 0f, 0f, 0f, 8f, 8f, 3f, iVar1, iVar2, iVar3, 150, false, false, 2, false, 0, 0, false);
		}
	}
}

int func_875(int iParam0, float fParam1)//Position - 0x4C8F0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_230.f_35)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_7[iVar0]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_230.f_7[iVar0]), false))
		{
			if (__LIB_0__::func_76(NETWORK::NET_TO_VEH(Local_230.f_7[iVar0]), PLAYER::GET_PLAYER_PED(iParam0), 0) < fParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_877(bool bParam0)//Position - 0x4C9B7
{
	bool bVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < Local_230.f_35)
	{
		bVar0 = false;
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_7[iVar1]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_230.f_7[iVar1]), false))
		{
			if (!Local_230.f_45[iVar1])
			{
				if (!Local_230.f_40[iVar1])
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_212[iVar1]))
					{
						iLocal_212[iVar1] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_230.f_7[iVar1]));
						HUD::SET_BLIP_PRIORITY(iLocal_212[iVar1], 12);
						HUD::SET_BLIP_SPRITE(iLocal_212[iVar1], 348);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_212[iVar1], "GB_STEBIKBLIP" /* GXT: Motorcycle */);
						if (bParam0)
						{
							__LIB_6__::func_958(&(iLocal_212[iVar1]), 6);
						}
						else
						{
							__LIB_6__::func_958(&(iLocal_212[iVar1]), 9);
						}
					}
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
			bVar0 = true;
		}
		if (bVar0)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_212[iVar1]))
			{
				HUD::REMOVE_BLIP(&(iLocal_212[iVar1]));
			}
		}
		iVar1++;
	}
}

int func_880()//Position - 0x4CD4A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_230.f_35)
	{
		if (!Local_230.f_45[iVar0] && Local_230.f_55[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_881(bool bParam0)//Position - 0x4CD88
{
	bool bVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < Local_230.f_35)
	{
		bVar0 = false;
		if (__LIB_36__::func_867(PLAYER::PLAYER_ID()) != 0)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_7[iVar1]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_230.f_7[iVar1]), false))
			{
				if ((!func_34(iVar1) && bParam0 == 0) || (bParam0 == 1 && iLocal_216))
				{
					if (!Local_230.f_45[iVar1])
					{
						if (!Local_230.f_40[iVar1] && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_230.f_7[iVar1]), false))
						{
							if (!HUD::DOES_BLIP_EXIST(iLocal_212[iVar1]))
							{
								iLocal_212[iVar1] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_230.f_7[iVar1]));
								HUD::SET_BLIP_PRIORITY(iLocal_212[iVar1], 12);
								HUD::SET_BLIP_SPRITE(iLocal_212[iVar1], 348);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_212[iVar1], "GB_STEBIKBLIP" /* GXT: Motorcycle */);
								if (bParam0)
								{
									__LIB_6__::func_958(&(iLocal_212[iVar1]), 6);
								}
								else
								{
									__LIB_6__::func_958(&(iLocal_212[iVar1]), 9);
								}
							}
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
			bVar0 = true;
		}
		if (bVar0)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_212[iVar1]))
			{
				HUD::REMOVE_BLIP(&(iLocal_212[iVar1]));
			}
		}
		iVar1++;
	}
}

void func_882()//Position - 0x4CEE1
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_211))
	{
		iLocal_211 = HUD::ADD_BLIP_FOR_COORD(func_30());
		HUD::SET_BLIP_PRIORITY(iLocal_211, 12);
		HUD::SET_BLIP_FLASHES(iLocal_211, true);
		HUD::SET_BLIP_FLASH_TIMER(iLocal_211, 10000);
		HUD::SET_BLIP_ROUTE(iLocal_211, true);
		Global_2815059.f_267 = 1;
		if (Local_230.f_76 == 0)
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_211, "GB_STETUNLIP" /* GXT: Tunnel */);
		}
		else if (Local_230.f_76 == 1)
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_211, "GB_STEIMLIP" /* GXT: Impound */);
		}
		else if (Local_230.f_76 == 2)
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_211, "GB_STEFHLIP" /* GXT: Fishing Village */);
		}
		Global_2815059.f_261 = { func_30() };
		Global_2815059.f_267 = 1;
	}
}

void func_883()//Position - 0x4CF81
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_215))
	{
		iLocal_215 = HUD::ADD_BLIP_FOR_COORD(func_18());
		HUD::SET_BLIP_PRIORITY(iLocal_215, 12);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_215, "BK_DEAL_DRBL" /* GXT: Drop-off */);
		HUD::SET_BLIP_ROUTE(iLocal_215, true);
		Global_2815059.f_261 = { func_18() };
		Global_2815059.f_267 = 1;
	}
	if (__LIB_4__::func_520(PLAYER::PLAYER_ID()))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_215))
		{
			if (Global_2815059.f_267 == 1)
			{
				HUD::SET_BLIP_ROUTE(iLocal_215, false);
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_215))
	{
		if (Global_2815059.f_267 == 0)
		{
			HUD::SET_BLIP_ROUTE(iLocal_215, true);
			Global_2815059.f_261 = { func_18() };
			Global_2815059.f_267 = 1;
		}
	}
}

void func_906()//Position - 0x4D66F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_130)
	{
		if ((__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), func_29(0), 0) < 200f && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_230.f_17[iVar0])) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_230.f_17[iVar0]), false))
		{
			__LIB_7__::func_121(Local_230.f_17[iVar0], &(Local_213[iVar0 /*8*/]), 30f, 0, 0, 0, "GB_STEENELIP" /* GXT: Enemy */, 1, -1, 0, 0);
		}
		iVar0++;
	}
}

int func_911()//Position - 0x4D9DE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_130)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_230.f_17[iVar0]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_230.f_17[iVar0]), false))
		{
			if (PED::IS_PED_SHOOTING(NETWORK::NET_TO_PED(Local_230.f_17[iVar0])))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_912()//Position - 0x4DA3A
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	Var0 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
	HUD::GET_HUD_COLOUR(12, &iVar1, &iVar2, &iVar3, &uVar4);
	if (SYSTEM::VDIST(Var0, func_30()) < 100f)
	{
		if (func_23(PLAYER::PLAYER_ID()) || func_20())
		{
			GRAPHICS::DRAW_MARKER(1, func_30(), 0f, 0f, 0f, 0f, 0f, 0f, 2.5f, 2.5f, 2.5f, iVar1, iVar2, iVar3, 150, false, false, 2, false, 0, 0, false);
		}
	}
}

int func_916(int iParam0)//Position - 0x4DAE2
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if (Local_230.f_76 == 0)
	{
		if (((__LIB_0__::func_529(iVar0, func_30(), 1) < 5f || __LIB_0__::func_529(iVar0, func_29(0), 1) < 30f) || __LIB_0__::func_529(iVar0, -174.7f, -922.6f, 22.3f, 1) < 20f) || __LIB_0__::func_529(iVar0, -54.5f, -550.6f, 31.3f, 1) < 7f)
		{
			if (iLocal_226 == 0)
			{
				__LIB_35__::func_821(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
				__LIB_9__::func_107(func_30(), __LIB_0__::func_670(func_30(), func_29(0)), 1065353216);
			}
			Local_231[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_3 = 1;
			if (func_23(PLAYER::PLAYER_ID()) || func_20())
			{
				Local_231[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_4 = 1;
			}
			return 1;
		}
	}
	else if (__LIB_0__::func_529(iVar0, func_30(), 0) < 20f || __LIB_0__::func_529(iVar0, func_29(0), 0) < 60f)
	{
		if (iLocal_226 == 0)
		{
			__LIB_35__::func_821(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
			__LIB_9__::func_107(func_30(), __LIB_0__::func_670(func_30(), func_29(0)), 1065353216);
		}
		Local_231[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_3 = 1;
		if (func_23(PLAYER::PLAYER_ID()) || func_20())
		{
			Local_231[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_4 = 1;
		}
		return 1;
	}
	return 0;
}

int func_919(int* iParam0, var uParam1, float fParam2)//Position - 0x4DD33
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	int iVar10;
	char* sVar11;
	var uVar12[8];
	var uVar13;
	int iVar14;
	int iVar15;
	if (!__LIB_25__::func_952(PLAYER::PLAYER_ID(), __LIB_1__::func_301(), 1))
	{
		return 1;
	}
	if (*uParam1)
	{
		__LIB_41__::func_208(iParam0, uParam1);
	}
	else if (__LIB_24__::func_792(uParam1))
	{
		__LIB_41__::func_208(iParam0, uParam1);
		return 1;
	}
	if (!uParam1->f_1)
	{
		return 0;
	}
	if (Global_1943947.f_33 != 1)
	{
		Global_1943947.f_33 = 1;
	}
	iVar2 = 0;
	while (iVar2 < 8)
	{
		iParam0->f_7[iVar2 /*2*/].f_1 = __LIB_0__::func_160();
		iVar2++;
	}
	if (!*uParam1)
	{
		if (!__LIB_2__::func_509(PLAYER::PLAYER_ID(), 7) && !__LIB_2__::func_509(PLAYER::PLAYER_ID(), 6))
		{
			if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), iParam0->f_2) < (fParam2 * fParam2))
				{
					if (__LIB_24__::func_796(PLAYER::PLAYER_PED_ID()))
					{
						__LIB_9__::func_333(7);
					}
				}
			}
		}
	}
	if (!BitTest(*iParam0, 0))
	{
		if ((!__LIB_1__::func_159() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && Global_2703735.f_4.f_10)
		{
			if (__LIB_2__::func_47(&(iParam0->f_5), 500, 0))
			{
				if (*uParam1)
				{
					__LIB_1__::func_278("SBCONTRA_R1H" /* GXT: Race against your MC to deliver the Product to the drop-off first to win a cash bonus. */, -1);
				}
				else
				{
					__LIB_1__::func_278("BG_P2P_GOD4" /* GXT: Compete against your MC to reach the destination first to win RP. */, -1);
				}
				__LIB_33__::func_151(1);
				MISC::SET_BIT(iParam0, 0);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (((!__LIB_24__::func_795(iVar8) && !__LIB_6__::func_978(iVar8, 0)) && !__LIB_2__::func_509(iVar8, 6)) && __LIB_25__::func_952(iVar8, __LIB_1__::func_301(), 1))
			{
				iParam0->f_7[iVar1 /*2*/].f_1 = iVar8;
				iVar4 = PLAYER::GET_PLAYER_PED(iParam0->f_7[iVar1 /*2*/].f_1);
				if (!PED::IS_PED_INJURED(iVar4))
				{
					if (!__LIB_24__::func_794(&(iParam0->f_7[iVar1 /*2*/]), iVar0, &(uParam1->f_2)))
					{
						Var9 = { ENTITY::GET_ENTITY_COORDS(iVar4, true) };
						if (__LIB_1__::func_155(iParam0->f_7[iVar1 /*2*/].f_1, 1, 1))
						{
							Var9 = { func_934(iParam0->f_7[iVar1 /*2*/].f_1) };
						}
						else if (Var9.f_2 < -40f && iParam0->f_7[iVar1 /*2*/].f_1 != PLAYER::PLAYER_ID())
						{
							Var9 = { NETWORK::NETWORK_GET_LAST_PLAYER_POS_RECEIVED_OVER_NETWORK(iParam0->f_7[iVar1 /*2*/].f_1) };
						}
						iParam0->f_7[iVar1 /*2*/] = MISC::GET_DISTANCE_BETWEEN_COORDS(Var9, iParam0->f_2, true);
						if (PED::IS_PED_IN_ANY_VEHICLE(iVar4, false))
						{
							iVar7 = PED::GET_VEHICLE_PED_IS_IN(iVar4, false);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar7, false))
							{
								iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar7, -1, false);
								if (iVar5 != iVar4)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iVar5) && !PED::IS_PED_INJURED(iVar5))
									{
										if (PED::IS_PED_A_PLAYER(iVar5))
										{
											iVar10 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar5);
											if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar10)))
											{
												iParam0->f_7[iVar1 /*2*/] = (iParam0->f_7[iVar1 /*2*/] + 0.001f);
											}
										}
									}
								}
							}
						}
					}
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 <= 7)
	{
		iVar3 = iVar2;
		while (iVar3 <= 7)
		{
			if (iParam0->f_7[iVar2 /*2*/] > iParam0->f_7[iVar3 /*2*/] && iParam0->f_7[iVar3 /*2*/] != 0f)
			{
				Var6 = { iParam0->f_7[iVar2 /*2*/] };
				iParam0->f_7[iVar2 /*2*/] = { iParam0->f_7[iVar3 /*2*/] };
				iParam0->f_7[iVar3 /*2*/] = { Var6 };
			}
			iVar3++;
		}
		iVar2++;
	}
	func_1029(&(Global_1637407.f_534), &Global_1637407, 28, &(Global_1637407.f_1), &(Global_1637407.f_117), -1, 0, 0);
	if (Global_2703735.f_4.f_10)
	{
		if (iParam0->f_7[0 /*2*/].f_1 != __LIB_0__::func_160() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0->f_7[0 /*2*/].f_1))
		{
			if (!BitTest(*iParam0, 2))
			{
				if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
				{
					HUD::SET_BLIP_ROUTE(iParam0->f_1, true);
					MISC::SET_BIT(iParam0, 2);
				}
			}
			sVar11 = "HUD_METNUM" /* GXT: ~1~m */;
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				iVar2 = 0;
				while (iVar2 < 8)
				{
					uVar12[iVar2] = iParam0->f_7[iVar2 /*2*/];
					iVar2++;
				}
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 8)
				{
					uVar12[iVar2] = __LIB_1__::func_502(iParam0->f_7[iVar2 /*2*/]);
					iVar2++;
				}
				sVar11 = "HUD_FTNUM" /* GXT: ~1~ft */;
			}
			iVar14 = -1;
			iVar2 = 0;
			while (iVar2 < 8)
			{
				if (iVar2 < 3)
				{
					if (iParam0->f_7[iVar2 /*2*/].f_1 == PLAYER::PLAYER_ID())
					{
						iVar15 = 1;
					}
				}
				else if (iParam0->f_7[iVar2 /*2*/].f_1 == PLAYER::PLAYER_ID())
				{
					iVar14 = iVar2;
				}
				iVar2++;
			}
			if (iVar15 && iVar14 != -1)
			{
				__LIB_28__::func_437(iParam0->f_7[0 /*2*/].f_1, iParam0->f_7[1 /*2*/].f_1, iParam0->f_7[2 /*2*/].f_1, iParam0->f_7[iVar14 /*2*/].f_1, uVar12[0], uVar12[1], uVar12[2], uVar12[iVar14], 0f, 0f, -10, sVar11, &uVar13, 1, 0, 0, "GB_CHAL_END" /* GXT: CHALLENGE END */, 3, 0, 0, 0);
			}
			else
			{
				__LIB_34__::func_331(iParam0->f_7[0 /*2*/].f_1, iParam0->f_7[1 /*2*/].f_1, iParam0->f_7[2 /*2*/].f_1, uVar12[0], uVar12[1], uVar12[2], 0f, 0f, -10, sVar11, &uVar13, 1, 0, 0, "", 3, 0, 0, 0);
			}
		}
	}
	return 0;
}

Vector3 func_934(int iParam0)//Position - 0x4ED24
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
	return func_935(iParam0);
}

Vector3 func_935(int iParam0)//Position - 0x4ED98
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
		func_982(__LIB_1__::func_265(iParam0), &iVar0);
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
		Var1 = { __LIB_36__::func_832(iParam0) };
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

void func_982(struct<3> Param0, var uParam1)//Position - 0x502C7
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_983(Param0, iVar0, 0))
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
		if (func_983(Param0, iVar0, 0))
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
		if (func_983(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_983(Param0, iVar0, 0))
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
	if (func_983(Param0, iVar0, 0))
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

int func_983(struct<3> Param0, int iParam1, float fParam2)//Position - 0x5040B
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
			if (func_983(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_983(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_983(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_983(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_983(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_983(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_983(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_983(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_983(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_983(Param0, 8, fParam2))
		{
			return 1;
		}
		if (func_983(Param0, 17, fParam2))
		{
			return 1;
		}
	}
	return 0;
}

void func_997()//Position - 0x51A3D
{
	if (iLocal_208 == 0)
	{
		if (Local_230.f_76 == 1)
		{
			if (Local_231[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_2 == 1 || func_875(PLAYER::PLAYER_ID(), 30f))
			{
				iLocal_208 = 1;
				PLAYER::SET_MAX_WANTED_LEVEL(2);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				func_998();
			}
		}
	}
	if (iLocal_208 == 0)
	{
		if (func_23(PLAYER::PLAYER_ID()) || func_20())
		{
			if (PLAYER::GET_MAX_WANTED_LEVEL() != 0)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
			}
		}
		else if (bLocal_204 && func_875(PLAYER::PLAYER_ID(), 1140457472))
		{
			if (PLAYER::GET_MAX_WANTED_LEVEL() != 0)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
			}
		}
	}
}

void func_998()//Position - 0x51AE9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_130)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_17[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_230.f_17[iVar0]), false))
			{
				PED::SET_PED_SEEING_RANGE(NETWORK::NET_TO_PED(Local_230.f_17[iVar0]), 50f);
				PED::SET_PED_ID_RANGE(NETWORK::NET_TO_PED(Local_230.f_17[iVar0]), 50f);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_230.f_17[iVar0]), 100f, 0);
			}
		}
		iVar0++;
	}
}

void func_1029(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x52873
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char* sVar5;
	int iVar6;
	struct<4> Var7;
	int iVar8;
	int iVar9;
	bool bVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	struct<2> Var23;
	if (__LIB_36__::func_869(iParam2))
	{
		return;
	}
	fVar11 = -1f;
	iVar12 = -1;
	iVar13 = -1;
	iVar15 = 0;
	iVar16 = 0;
	uParam3->f_36 = 0;
	if (__LIB_32__::func_909() || iParam2 == 28)
	{
		if (func_1093(iParam1, iParam2, uParam3, Global_1836357, 0, __LIB_32__::func_422(), sParam7))
		{
			__LIB_1__::func_512(1);
			if ((!__LIB_1__::func_511() && !__LIB_1__::func_510()) || BitTest(Global_2815059.f_4657, 1))
			{
				if (__LIB_1__::func_509())
				{
					__LIB_6__::func_997();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						__LIB_1__::func_508(1);
						Global_1836357 = 0;
						iVar20 = -1;
						if (Global_1836580 != 1)
						{
							__LIB_1__::func_507(iParam1, 0, 0);
							if (BitTest(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar18 = 0;
							while (iVar18 < 32)
							{
								iVar1[iVar18] = -1;
								iVar18++;
							}
							iVar18 = 0;
							while (iVar18 < 32)
							{
								if (__LIB_1__::func_264(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
									if (!__LIB_6__::func_978(bVar4, 0))
									{
										if (__LIB_34__::func_543(bVar4) || __LIB_9__::func_283(bVar4, bVar3))
										{
											bVar10 = bVar4;
											if (__LIB_2__::func_192(bVar4))
											{
												iVar1[bVar10] = iVar21;
												iVar21++;
												iVar0++;
												__LIB_38__::func_955(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
											}
										}
									}
								}
								iVar18++;
							}
						}
						if (!__LIB_18__::func_631(PLAYER::PLAYER_ID(), 0) && __LIB_3__::func_803(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							if (__LIB_28__::func_371())
							{
								if (__LIB_1__::func_264(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
								}
								else
								{
									bVar4 = __LIB_0__::func_160();
								}
							}
							else
							{
								bVar4 = (uParam0[iVar18 /*42*/])->f_1;
							}
							if ((__LIB_19__::func_768(bVar4) && __LIB_38__::func_954(bVar4, iParam2, bVar3)) && __LIB_1__::func_264(bVar4, 0, 1))
							{
								bVar10 = bVar4;
								iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
								Var7 = { __LIB_25__::func_941(bVar4) };
								if (bVar4 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar19;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar4), 64);
								*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_267(bVar4) };
								iVar6 = __LIB_35__::func_811(bVar4);
								sVar5 = "";
								if (iVar6 != 0)
								{
									sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
								}
								Global_1836357++;
								if ((uParam0[iVar18 /*42*/])->f_22 != -1f)
								{
									fVar11 = (uParam0[iVar18 /*42*/])->f_22;
								}
								if ((uParam0[iVar18 /*42*/])->f_31 != -1)
								{
									iVar12 = (uParam0[iVar18 /*42*/])->f_31;
								}
								if ((uParam0[iVar18 /*42*/])->f_41 != -1)
								{
									iVar13 = (uParam0[iVar18 /*42*/])->f_41;
								}
								iVar9 = (uParam0[iVar18 /*42*/])->f_9;
								if (((uParam0[iVar18 /*42*/])->f_9 != -1 || (uParam0[iVar18 /*42*/])->f_22 != -1f) || (uParam0[iVar18 /*42*/])->f_31 != -1)
								{
									if (!__LIB_28__::func_371())
									{
										iVar16 = 1;
									}
								}
								if (iParam5 != -1)
								{
									__LIB_18__::func_268(&iVar9, &fVar11, (uParam0[iVar18 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), __LIB_1__::func_500(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar14 = (uParam0[iVar18 /*42*/])->f_2 + 1;
									if (iVar20 != iVar14)
									{
										iVar20 = iVar14;
									}
									else
									{
										iVar14 = -2;
									}
								}
								iVar17 = __LIB_28__::func_370(bVar4, 0);
								if (bVar2)
								{
									if (__LIB_4__::func_682(bVar4, 1) && iVar1[bVar10] != -1)
									{
										iVar19 = iVar1[bVar10];
									}
									else
									{
										iVar19 = (iVar0 + iVar22);
										iVar22++;
									}
								}
								uParam3->f_38[bVar10 /*2*/].f_1 = iVar19;
								if ((uParam0[iVar18 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var23, "UW_TM", 16);
									StringIntConCat(&Var23, (uParam0[iVar18 /*42*/])->f_39, 16);
								}
								if (__LIB_1__::func_499(iParam5))
								{
									__LIB_38__::func_980(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								else
								{
									__LIB_38__::func_980(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								MISC::SET_BIT(&iVar15, bVar4);
								iVar19++;
							}
							iVar18++;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							if (__LIB_1__::func_264(bVar4, 0, 1) && !BitTest(iVar15, bVar4))
							{
								bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							}
							else
							{
								bVar4 = __LIB_0__::func_160();
							}
							if (__LIB_19__::func_768(bVar4))
							{
								if (__LIB_1__::func_264(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar10 = bVar4;
									iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
									Var7 = { __LIB_25__::func_941(bVar4) };
									*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_267(bVar4) };
									iVar6 = __LIB_35__::func_811(bVar4);
									sVar5 = "";
									if (iVar6 != 0)
									{
										sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
									}
									Global_1836357++;
									iVar17 = __LIB_28__::func_370(bVar4, 1);
									if (bVar2)
									{
										if (__LIB_4__::func_682(bVar4, 1))
										{
											iVar19 = iVar1[iVar18];
										}
										else
										{
											iVar19 = (iVar0 + iVar22);
											iVar22++;
										}
									}
									uParam3->f_38[bVar10 /*2*/].f_1 = iVar19;
									__LIB_40__::func_231(bVar4, PLAYER::GET_PLAYER_NAME(bVar4), iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
									iVar19++;
								}
							}
							iVar18++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							__LIB_19__::func_767(uParam3, iParam1, iParam2);
						}
						__LIB_0__::func_579(&(uParam3->f_21));
						__LIB_1__::func_492();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							__LIB_1__::func_491(uParam3, iParam1);
							__LIB_1__::func_379(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						__LIB_1__::func_491(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (__LIB_6__::func_993(uParam3))
						{
							Global_1836580 = 1;
						}
						__LIB_6__::func_992(uParam3);
						if (Global_1836580 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836580 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			__LIB_1__::func_492();
			__LIB_1__::func_508(0);
			if (BitTest(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (BitTest(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

int func_1093(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0x54337
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 20;
	bVar3 = __LIB_1__::func_525(iParam1);
	fVar4 = __LIB_1__::func_524();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (__LIB_1__::func_383())
		{
			if (__LIB_1__::func_523() > 0 && Global_1836359)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!__LIB_25__::func_937())
		{
			__LIB_1__::func_586(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (BitTest(Global_2815059.f_4660, 26))
	{
		__LIB_1__::func_586(iParam0, uParam2, 1);
		return 0;
	}
	if (!__LIB_0__::func_649(&(uParam2->f_19)))
	{
		if (__LIB_1__::func_523() == 1)
		{
			__LIB_1__::func_521(bVar3, iParam0, 0);
			__LIB_0__::func_580(&(uParam2->f_19), 0, 0);
			__LIB_1__::func_586(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2815059.f_4662), 5);
		}
	}
	if (__LIB_0__::func_649(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (__LIB_2__::func_47(&(uParam2->f_19), 10000, 0) || (__LIB_1__::func_523() == 0 && !bParam5))
		{
			__LIB_1__::func_586(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				__LIB_1__::func_520();
				if (iParam1 == 27 || iParam1 == 28)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!BitTest(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					__LIB_1__::func_520();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				if (__LIB_1__::func_521(bVar3, iParam0, 0))
				{
					__LIB_1__::func_507(iParam0, 0, 0);
					sVar1 = __LIB_18__::func_271(iParam1, &(Global_4718592.f_116531), bParam4);
					Var0 = { __LIB_18__::func_270(iParam1) };
					if (bParam4)
					{
						__LIB_7__::func_0(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						__LIB_1__::func_515(iParam0, __LIB_6__::func_999(uParam2), __LIB_6__::func_998(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_1102(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar6 = sParam6;
						}
						__LIB_1__::func_514(iParam0, sVar6, __LIB_11__::func_68(), -1);
					}
					else if (__LIB_16__::func_405())
					{
						uParam2->f_34 = Global_1836358;
						__LIB_7__::func_0(iParam0, sVar1, &Var0, 1, -1, Global_1836358, 1);
					}
					else if (bVar2)
					{
						iVar5 = __LIB_6__::func_963(iParam1);
						uParam2->f_34 = Global_1836358;
						__LIB_7__::func_0(iParam0, sVar1, "", 0, iVar5, __LIB_1__::func_513(), 1);
					}
					else
					{
						iVar5 = __LIB_6__::func_963(iParam1);
						__LIB_7__::func_0(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (BitTest(uParam2->f_33, 0))
			{
				Global_1836357 = uParam3;
				Global_1836356 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1836358)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

char* func_1102(var uParam0)//Position - 0x54886
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E" /* GXT: Steal Cargo */;
			break;
		case 1:
			return "GR_DPD_F" /* GXT: Sell Cargo */;
			break;
		case 2:
			return "GR_DPD_S" /* GXT: Business Setup */;
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A" /* GXT: Business Setup */;
			break;
		case 1:
			return "GR_DPD_B" /* GXT: Steal Supplies */;
			break;
		case 2:
			return "GR_DPD_C" /* GXT: Sell Weapons */;
			break;
		case 3:
			return "GR_DPD_D" /* GXT: Defend Business */;
			break;
	}
	switch (__LIB_3__::func_803(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET" /* GXT: Heist Prep */;
			break;
		case 180:
			return "GB_BIGUNLOAD_T" /* GXT: Gunrunning */;
			break;
		case 182:
			return "DEAL_DEALN" /* GXT: By the Pound */;
			break;
		case 194:
			return "PI_BIK_13_0" /* GXT: Rippin' it Up */;
			break;
		case 189:
			return "PI_BIK_4_1" /* GXT: Race to Point */;
			break;
		case 193:
			return "PI_BIK_13_1" /* GXT: Hit & Ride */;
			break;
		case 205:
			return "PI_BIK_13_3" /* GXT: Criminal Mischief */;
			break;
		case 186:
			return "CELL_BIKER_CK" /* GXT: Weapon of Choice */;
			break;
		case 207:
			return "DV_SH_TITLE" /* GXT: Fragile Goods */;
			break;
		case 208:
			return "BA_SH_TITLE" /* GXT: Torched */;
			break;
		case 209:
			return "SHU_SH_TITLE" /* GXT: Outrider */;
			break;
		case 210:
			return "PI_BIK_13_4" /* GXT: Wheelie Rider */;
			break;
		case 183:
			return "CELL_BIKER_RESC" /* GXT: P.O.W. */;
			break;
		case 199:
			return "CELL_BIKER_SEAR" /* GXT: Search and Destroy */;
			break;
		case 201:
			return "CELL_BIKER_STAN" /* GXT: Stand Your Ground */;
			break;
		case 142:
			return "PIM_MAGM210" /* GXT: Sightseer */;
			break;
		case 163:
			return "PIM_MAGM608" /* GXT: Auto Buyout */;
			break;
		case 160:
			return "PIM_MAGM604" /* GXT: Due Diligence */;
			break;
		case 154:
			return "PIM_MAGM602" /* GXT: Market Manipulation */;
			break;
		case 155:
			return "PIM_MAGM603" /* GXT: Courier Service */;
			break;
		case 148:
			if (__LIB_28__::func_466())
			{
				return "LBD_BKVBK" /* GXT: Deathmatch */;
			}
			return "PIM_MAGM201" /* GXT: Executive Deathmatch */;
			break;
		case 151:
			if (__LIB_25__::func_140(1))
			{
				return "GB_DPAD_BMFD" /* GXT: Marked For Death */;
			}
			return "PIM_MAGM202" /* GXT: Put Out a Hit */;
			break;
		case 152:
			return "PIM_MAGM204" /* GXT: Piracy Prevention */;
			break;
		case 153:
			if (__LIB_25__::func_140(1))
			{
				return "PI_BIK_3_2" /* GXT: On The Run */;
			}
			return "PIM_MAGM601" /* GXT: Most Wanted */;
			break;
		case 157:
			return "PIM_MAGM207" /* GXT: Asset Recovery */;
			break;
		case 159:
			return "PIM_MAGM206" /* GXT: Hostile Takeover */;
			break;
		case 162:
			return "PIM_MAGM607" /* GXT: Point to Point */;
			break;
		case 164:
			return "PIM_MAGM212" /* GXT: Executive Search */;
			break;
		case 166:
			return "GB_DPAD_HEAD" /* GXT: Headhunter */;
		case 167:
			return "GB_DPAD_BUY" /* GXT: Buy Special Cargo */;
		case 168:
			return "GB_DPAD_SELL" /* GXT: Sell Special Cargo */;
		case 169:
			return "GB_DPAD_DEF" /* GXT: Defend Special Cargo */;
		case 170:
			return "GB_DPAD_AIR" /* GXT: Airfreight */;
		case 171:
			return "GB_DPAD_CASH" /* GXT: Cashing Out */;
		case 172:
			return "GB_DPAD_SAL" /* GXT: Salvage */;
		case 173:
			return "GB_DPAD_FRA" /* GXT: Haulage */;
		case 178:
			return "VEX_TITLEa" /* GXT: Steal Vehicle */;
		case 188:
			return "VEX_TITLEb" /* GXT: Export Vehicle */;
		case 218:
			return "FRT_MODE" /* GXT: Fortified */;
		case 217:
			return "FRT_TRNS" /* GXT: Transporter */;
		case 214:
			return "MODE_PLW" /* GXT: Plowed */;
		case 215:
			return "MODE_FUL" /* GXT: Fully Loaded */;
		case 216:
			return "MODE_AA" /* GXT: Amphibious Assault */;
		case 219:
			return "MODE_VEL" /* GXT: Velocity */;
		case 220:
			return "MODE_RMP" /* GXT: Ramped Up */;
		case 221:
			return "MODE_STK" /* GXT: Stockpiling */;
		case 225:
			return "GR_TITLEL" /* GXT: Gunrunning */;
		case 226:
			return "GRS_TITLEL" /* GXT: Gunrunning Sell */;
		case 227:
			return "GRD_TITLEL" /* GXT: Gunrunning Defend */;
		case 195:
			return "GB_STEAL_T" /* GXT: Nine Tenths Of The Law */;
		case 198:
			return "SC_MENU_TITLE" /* GXT: Cracked */;
		case 190:
			return "GB_DPAD_BSEL" /* GXT: Biker Sell */;
		case 191:
			return "GB_DPAD_BDEF" /* GXT: Biker Defend */;
		case 185:
			return "GB_DPAD_GFH" /* GXT: Guns For Hire */;
		case 197:
			return "GB_DPAD_JB" /* GXT: Jailbreak */;
		case 179:
			return "CELL_JOUST" /* GXT: Joust */;
		case 200:
			return "CAG_BLIP" /* GXT: Caged In */;
		case 192:
			if (__LIB_1__::func_360(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_182))
			{
				return "GB_DPAD_BSET" /* GXT: Business Setup */;
			}
			return "GB_DPAD_BBUY" /* GXT: Resupply */;
			break;
	}
	return "";
}

void func_1139(int iParam0)//Position - 0x55B62
{
	MISC::SET_BIT(&uLocal_201, iParam0);
}

bool func_1140(int iParam0)//Position - 0x55B73
{
	return BitTest(uLocal_201, iParam0);
}

int func_1149()//Position - 0x561C7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_230.f_35)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_7[iVar0]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_230.f_7[iVar0]), false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_230.f_7[iVar0]))
			{
				ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_VEH(Local_230.f_7[iVar0]), false, false, false, false, false, false, false, false);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_1150(int iParam0, int iParam1)//Position - 0x56237
{
	Local_231[iParam0 /*7*/] = iParam1;
}

bool func_1151()//Position - 0x56248
{
	if (!func_1170(NETWORK::PARTICIPANT_ID(), 1))
	{
		if (func_2(1))
		{
			__LIB_36__::func_854(195, 1, -1, 0);
			if (func_23(PLAYER::PLAYER_ID()) || func_20())
			{
				if (Global_2703735.f_4.f_10)
				{
					if (__LIB_19__::func_834() + 1 > 1)
					{
						__LIB_40__::func_252(86, "GB_STEAL_T" /* GXT: Nine Tenths Of The Law */, "GB_STEAL_Ds" /* GXT: Steal the motorcycles and deliver them to the drop-off */, 1, -1, 2, 1, 0);
					}
					else
					{
						__LIB_40__::func_252(86, "GB_STEAL_T" /* GXT: Nine Tenths Of The Law */, "GB_STEAL_D" /* GXT: Steal the motorcycle and deliver it to the drop-off */, 1, -1, 2, 1, 0);
					}
					__LIB_33__::func_151(1);
				}
				if (!__LIB_7__::func_212() && !__LIB_4__::func_520(PLAYER::PLAYER_ID()))
				{
					if (__LIB_19__::func_834() + 1 > 1)
					{
						if (Local_230.f_76 == 0)
						{
							__LIB_25__::func_25("GB_STEALSTRAPs" /* GXT: Enter the ~y~tunnel.~s~ */, 0);
						}
						else if (Local_230.f_76 == 1)
						{
							__LIB_25__::func_25("GB_STEALSTRA1s" /* GXT: Go to the ~y~impound. ~s~ */, 0);
						}
						else if (Local_230.f_76 == 2)
						{
							__LIB_25__::func_25("GB_STEALSTRA2s" /* GXT: Go to the ~y~fishing village. ~s~ */, 0);
						}
					}
					else if (Local_230.f_76 == 0)
					{
						__LIB_25__::func_25("GB_STEALSTRAP" /* GXT: Enter the ~y~tunnel.~s~ */, 0);
					}
					else if (Local_230.f_76 == 1)
					{
						__LIB_25__::func_25("GB_STEALSTRA1" /* GXT: Go to the ~y~impound. ~s~ */, 0);
					}
					else if (Local_230.f_76 == 2)
					{
						__LIB_25__::func_25("GB_STEALSTRA2" /* GXT: Go to the ~y~fishing village. ~s~ */, 0);
					}
				}
				func_882();
				if (HUD::DOES_BLIP_EXIST(iLocal_211))
				{
					__LIB_34__::func_375(&iLocal_132, &(Local_230.f_65), func_30(), iLocal_211);
				}
				if (!__LIB_0__::func_497() && __LIB_4__::func_715())
				{
					AUDIO::TRIGGER_MUSIC_EVENT("BIKER_NINE_TENTHS_START");
				}
				__LIB_20__::func_415();
				__LIB_36__::func_880(0);
			}
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			Global_2815059.f_5117 = 1;
			Global_1943947.f_26 = Local_230.f_76;
			Global_1943947.f_30 = 0;
			func_221(1);
		}
	}
	return func_1170(NETWORK::PARTICIPANT_ID(), 1);
}

bool func_1170(int iParam0, int iParam1)//Position - 0x56A6B
{
	return BitTest(Local_231[iParam0 /*7*/].f_1, iParam1);
}

int func_1171()//Position - 0x56A7F
{
	return Local_230.f_0;
}

int func_1172(int iParam0)//Position - 0x56A8A
{
	return Local_231[iParam0 /*7*/];
}

int func_1173(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x56A99
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
			__LIB_36__::func_850(&Global_1941652);
			__LIB_40__::func_269(&Global_1941652);
			if (__LIB_8__::func_679(&(Global_1941652.f_1)))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
			}
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				__LIB_25__::func_112(PLAYER::PLAYER_ID(), 0, 256, 0);
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
				__LIB_33__::func_151(1);
				MISC::CLEAR_BIT(&(uParam0->f_2), 1);
			}
			if (!__LIB_6__::func_153(&(Global_1941652.f_1)) && __LIB_34__::func_301(5))
			{
				STREAMING::CLEAR_FOCUS();
				__LIB_19__::func_387(&Global_1941652, 4, 0, 8);
			}
			else
			{
				if (!BitTest(Global_2815059.f_5194, 2) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
				{
					__LIB_25__::func_112(PLAYER::PLAYER_ID(), 0, 256, 0);
					MISC::SET_BIT(&(Global_2815059.f_5194), 2);
				}
				if (__LIB_4__::func_746(&(Global_1941652.f_1)) && __LIB_6__::func_155())
				{
					if (!__LIB_34__::func_301(5))
					{
						if (__LIB_6__::func_153(&(Global_1941652.f_1)))
						{
							__LIB_36__::func_849(uParam0, 0);
						}
					}
				}
			}
			if (__LIB_28__::func_465(uParam0))
			{
				__LIB_36__::func_849(uParam0, iParam2);
			}
			if (__LIB_25__::func_288(0, 1, 0))
			{
				__LIB_34__::func_295(bParam3);
			}
			break;
		case 2:
			if (!BitTest(uParam0->f_2, 3))
			{
				if ((CAM::IS_SCREEN_FADED_OUT() && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1)) && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 99)
				{
					MISC::SET_BIT(&(uParam0->f_2), 3);
					__LIB_40__::func_267(&Global_1941652, 0);
					__LIB_0__::func_579(&(uParam0->f_4));
					__LIB_0__::func_580(&(uParam0->f_4), 0, 0);
					STREAMING::SET_FOCUS_ENTITY(PLAYER::PLAYER_PED_ID());
				}
				else if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
				}
			}
			else if (__LIB_0__::func_86(uParam0->f_6) || func_6129(uParam0->f_10, 0, 0, 0, 0, 0, 0, 0, 1, 3000, 1, 1, 0, 0, 0, 0, 1, 0))
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
				func_6122();
				__LIB_24__::func_93();
				if (((__LIB_3__::func_803(PLAYER::PLAYER_ID()) != 153 && __LIB_3__::func_803(PLAYER::PLAYER_ID()) != 191) && !__LIB_24__::func_766(0)) && __LIB_18__::func_631(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_1__::func_278("GB_SPEC_NO" /* GXT: Not enough Bodyguards to continue spectating. */, -1);
					__LIB_33__::func_151(1);
				}
				if (bVar1)
				{
					__LIB_11__::func_64();
				}
				__LIB_25__::func_112(PLAYER::PLAYER_ID(), 1, 0, 0);
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
		func_1174(&Global_1941652);
	}
	return 0;
}

void func_1174(var uParam0)//Position - 0x56F72
{
	int iVar0;
	var uVar1;
	Global_2715699.f_2846.f_180 = uParam0->f_1.f_34;
	if ((__LIB_6__::func_338() == 3 || __LIB_6__::func_337() == 3) || (__LIB_0__::func_734() && !__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0)))
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
				func_6112(uParam0, 1);
				MISC::SET_BIT(&(uParam0->f_1), 13);
			}
		}
	}
	if (!__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
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
		__LIB_41__::func_184(uParam0);
		if (((__LIB_6__::func_333() && !__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
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
		func_1938(uParam0);
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
			__LIB_39__::func_20(uParam0);
			break;
		case 2:
			func_1928(uParam0);
			break;
		case 3:
			func_1894(uParam0);
			break;
		case 4:
			func_1860(uParam0);
			break;
		case 5:
			func_1602(uParam0);
			break;
		case 6:
			func_1534(uParam0);
			break;
	}
	if (__LIB_6__::func_280())
	{
		__LIB_40__::func_269(uParam0);
		MISC::SET_BIT(&(uParam0->f_47), 6);
		__LIB_6__::func_276();
		if (__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0) || (__LIB_6__::func_153(&(uParam0->f_1)) && __LIB_4__::func_746(&(uParam0->f_1))))
		{
			if (!__LIB_6__::func_275(__LIB_0__::func_727()) || !__LIB_19__::func_338(&(uParam0->f_47), &iVar0, &uVar1, __LIB_0__::func_727()))
			{
				__LIB_41__::func_181(uParam0, 0, 1);
				if (__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
				{
					if (!__LIB_39__::func_11(uParam0, &iVar0, &uVar1, 0, 0, 0))
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
	__LIB_41__::func_209(uParam0);
	__LIB_41__::func_180(uParam0);
}

void func_1534(var uParam0)//Position - 0x62DE4
{
	func_1574(uParam0);
	if (!__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
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
	if (!BitTest(uParam0->f_1.f_2, 3) && (!__LIB_0__::func_734() || __LIB_6__::func_978(PLAYER::PLAYER_ID(), 0)))
	{
		if (!BitTest(uParam0->f_1.f_2, 0) || !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!__LIB_8__::func_786())
			{
				if (!__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0) || Global_2621446.f_69 == Global_2621446.f_69.f_1)
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
	__LIB_26__::func_343(uParam0);
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
		__LIB_8__::func_779(0, 0, 1);
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

void func_1574(var uParam0)//Position - 0x63A84
{
	if (uParam0->f_2262 != -1)
	{
		if (__LIB_3__::func_962(PLAYER::PLAYER_ID(), uParam0->f_2262))
		{
			func_1575(uParam0->f_2262, 0);
		}
		uParam0->f_2262 = -1;
	}
}

void func_1575(int iParam0, bool bParam1)//Position - 0x63AB5
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
		func_1575(11, bParam1);
		func_1575(12, bParam1);
		func_1575(13, bParam1);
	}
	if (iParam0 == 36)
	{
		func_1575(37, bParam1);
		func_1575(38, bParam1);
		func_1575(39, bParam1);
		func_1575(40, bParam1);
		func_1575(41, bParam1);
	}
}

void func_1602(var uParam0)//Position - 0x6CF99
{
	if (func_1603(uParam0))
	{
		__LIB_4__::func_741(&(uParam0->f_1), 6);
	}
}

int func_1603(var uParam0)//Position - 0x6CFB3
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
	if (func_1604(1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 11);
		return 1;
	}
	return 0;
}

int func_1604(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, float fParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14)//Position - 0x6D021
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
		func_1638();
		__LIB_18__::func_742(1, 0);
		MISC::PREVENT_ARREST_STATE_THIS_FRAME();
		if (bParam10)
		{
			__LIB_0__::func_921(0);
			__LIB_7__::func_6(0);
		}
		return 0;
	}
	if (!__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
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
		if ((__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_3() == 0) && !__LIB_0__::func_394(CAM::GET_FINAL_RENDERED_CAM_COORD(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 10f, 0))
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
				if (__LIB_33__::func_159(0))
				{
					bParam12 = true;
					if (__LIB_1__::func_590() > 800 || (__LIB_36__::func_797() && !__LIB_7__::func_7()))
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
		if (bParam2 && !__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
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
			if (bParam2 && !__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
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

void func_1638()//Position - 0x6E043
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
			func_1639(PLAYER::PLAYER_PED_ID(), &Var1, 0, 0, 1, 1);
		}
	}
}

void func_1639(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x6E51D
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
			if (func_1855(iParam0, iVar1, &iVar2, 0))
			{
				func_1840(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_1781(iParam0, iVar1, &iVar2))
			{
				func_1840(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_1779(iParam0);
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
			func_1643(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_1643(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__::func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_1643(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_1643(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x6EC7A
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
			func_1770(iVar5, iParam1, iParam2, 1);
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
						func_1770(iVar5, 10, 0, 1);
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
									func_1770(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_1643(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_1770(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iVar0, func_1760(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__::func_180(iVar5, 0) };
					func_1643(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1755(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_1770(iVar5, 14, uVar18[iVar1], 1);
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
							func_1643(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1770(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_1643(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_1746(iParam0);
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
						func_1643(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1643(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_1743(iVar5, iVar24, iVar23, iVar25);
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
							func_1643(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1643(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_1643(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1643(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1643(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1643(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_1643(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1755(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1743(iVar5, func_1760(iParam0, 8, -1), iParam2, func_1760(iParam0, 4, -1));
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
				func_1692(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__::func_795(iParam0, 11);
				iVar45 = __LIB_6__::func_795(iParam0, 4);
				iVar46 = func_1743(iVar5, iParam2, iVar44, iVar45);
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
			func_1755(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__::func_795(iParam0, 11);
			if (__LIB_6__::func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__::func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__::func_931(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1743(iVar5, iParam2, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
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
						func_1643(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_1643(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1743(iVar5, __LIB_6__::func_795(iParam0, 8), __LIB_6__::func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_1743(iVar5, iVar58, iVar57, iParam2);
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
						func_1643(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_1743(iVar5, iVar3, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1643(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_1665(iParam0, 9, iVar63))
						{
							func_1643(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_1643(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_1643(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					__LIB_7__::func_696(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_1643(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_1760(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_1760(iParam0, 11, -1);
				}
				if (__LIB_6__::func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__::func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__::func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_1643(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__::func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__::func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_1643(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1643(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1643(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1643(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1643(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1643(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1643(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1643(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1643(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_1746(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1643(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_1643(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_1644(iParam0, &uVar4))
		{
			func_1643(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_1643(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_1643(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_1643(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_254(iVar5, func_1760(iParam0, 3, -1), iVar10);
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
				func_1643(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_1644(int iParam0, var uParam1)//Position - 0x70B26
{
	int iVar0;
	int iVar1;
	*uParam1 = func_1760(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_1665(iParam0, iVar1, iVar0))
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

int func_1665(int iParam0, int iParam1, int iParam2)//Position - 0x74E17
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
				if (!func_1665(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_1665(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_588(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_1665(iParam0, 14, iVar6))
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
			if (!func_1665(iParam0, 14, uVar11[iVar10]))
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
						return func_1665(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__::func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_1665(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_1692(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x7CB59
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
	func_1693(iParam0, bParam3, 0, -1);
}

void func_1693(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x7CBA7
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
		bVar3 = func_1726(iParam0, 0);
		bVar4 = __LIB_31__::func_887(iParam0);
		bVar5 = func_1719(iParam0, iParam3);
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

int func_1719(int iParam0, int iParam1)//Position - 0x8BF88
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
				iVar3 = func_1760(iParam0, 11, -1);
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
				iVar5 = func_1760(iParam0, 11, -1);
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

int func_1726(int iParam0, bool bParam1)//Position - 0x8C398
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
							iVar2 = __LIB_25__::func_18(joaat("MP_M_Freemode_01"), 11, func_1760(iParam0, 11, -1), 0);
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
						else if (__LIB_18__::func_604(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_1760(iParam0, 11, -1);
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
						iVar5 = func_1760(iParam0, 8, -1);
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
							iVar7 = __LIB_25__::func_18(joaat("MP_F_Freemode_01"), 11, func_1760(iParam0, 11, -1), 0);
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
						iVar8 = func_1760(iParam0, 11, -1);
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
							iVar10 = __LIB_25__::func_18(joaat("MP_F_Freemode_01"), 11, func_1760(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_25__::func_18(joaat("MP_F_Freemode_01"), 11, func_1760(iParam0, 11, -1), 0);
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
						iVar12 = func_1760(iParam0, 8, -1);
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

int func_1743(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9516A
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
					iVar0 = func_1743(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_1743(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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

void func_1746(int iParam0)//Position - 0x9661F
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
		if (!func_1751(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_1751(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_1751(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x96FE9
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_709(iVar0, 14, func_1760(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1755(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x999D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_1779(iParam0))
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

int func_1760(int iParam0, int iParam1, int iParam2)//Position - 0x99C72
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
				if (func_1665(iParam0, iParam1, iVar0))
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
				if (func_1665(iParam0, iParam1, iVar1))
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

void func_1770(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x9C9E7
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
							func_1770(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_1770(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_1770(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_1770(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_1770(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_1770(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_1770(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_1770(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_1770(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_1770(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_1770(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_1770(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_1770(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_1770(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_1770(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_1770(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_1770(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__::func_588(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__::func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1770(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_1770(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__::func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1770(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_1779(int iParam0)//Position - 0x9ECD8
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_4__::func_11(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_1760(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_4__::func_11(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_1760(iParam0, 11, -1);
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

int func_1781(int iParam0, int iParam1, int iParam2)//Position - 0x9F032
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_1782(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_1782(int iParam0, int iParam1, int iParam2)//Position - 0x9F0BE
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
				if (!func_1782(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_1782(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_38__::func_261(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_1782(iParam0, 14, iVar4))
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
			if (!func_1782(iParam0, 14, uVar8[iVar7]))
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

int func_1840(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0xB2031
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
										func_1840(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_1840(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_38__::func_261(iVar10, iVar0, func_1844(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_1855(iParam0, iVar10, &iVar4, 1))
							{
								func_1840(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_1840(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_1840(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_38__::func_261(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_1840(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_38__::func_261(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_1840(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_38__::func_261(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_1840(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_38__::func_261(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_1840(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_1840(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_1840(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_1840(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_1855(iParam0, iVar10, &iVar4, 0))
		{
			func_1840(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_1781(iParam0, iVar10, &iVar4))
		{
			func_1840(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_1844(int iParam0, int iParam1, int iParam2)//Position - 0xB29D1
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
				if (func_1782(iParam0, iParam1, iVar0))
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
				if (func_1782(iParam0, iParam1, iVar1))
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

int func_1855(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB468F
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_1782(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

void func_1860(var uParam0)//Position - 0xB4765
{
	if (__LIB_1__::func_282() != PLAYER::PLAYER_PED_ID())
	{
		__LIB_8__::func_824(uParam0, PLAYER::PLAYER_PED_ID());
		__LIB_6__::func_274(&(uParam0->f_1), 1);
	}
	if (func_1861(uParam0, 0, 1))
	{
		__LIB_4__::func_741(&(uParam0->f_1), 6);
	}
}

int func_1861(var uParam0, bool bParam1, bool bParam2)//Position - 0xB479F
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
	if (((__LIB_1__::func_282() != -1 && ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_282())) && (!bParam1 || __LIB_36__::func_796(uParam0, __LIB_1__::func_282(), 1))) && !__LIB_6__::func_171(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282())))
	{
		iVar1 = __LIB_1__::func_282();
	}
	else if (__LIB_27__::func_309(uParam0, 0))
	{
		__LIB_40__::func_269(uParam0);
		if (__LIB_39__::func_11(uParam0, &iVar6, &iVar7, 0, 1, 1))
		{
			__LIB_8__::func_824(uParam0, __LIB_8__::func_835(&(uParam0->f_47), iVar6, iVar7));
			__LIB_35__::func_715(uParam0, iVar6, iVar7);
			__LIB_5__::func_951(&(uParam0->f_1), 0);
		}
		else if (__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
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
						if ((__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && __LIB_6__::func_305(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_6__::func_544()), 0))
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
							__LIB_19__::func_674(uParam0);
							if ((!__LIB_8__::func_786() && !BitTest(uParam0->f_1.f_1, 4)) && !__LIB_6__::func_272())
							{
								if (GRAPHICS::GET_TOGGLE_PAUSED_RENDERPHASES_STATUS() == 1)
								{
									CAM::DO_SCREEN_FADE_OUT(250);
								}
								else
								{
									__LIB_19__::func_674(uParam0);
									__LIB_5__::func_951(&(uParam0->f_1), 2);
								}
							}
							else
							{
								__LIB_19__::func_674(uParam0);
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
					__LIB_32__::func_240();
					__LIB_26__::func_343(uParam0);
					__LIB_1__::func_3();
					if (!Global_1931426)
					{
						__LIB_27__::func_312();
					}
					if (!__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0) || !__LIB_6__::func_305(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_6__::func_544()), 0))
					{
						if (!__LIB_6__::func_171(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_6__::func_544())))
						{
							__LIB_40__::func_253(1, 1);
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
								__LIB_8__::func_779(1, iVar1, 1);
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
							func_1938(uParam0);
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
					__LIB_25__::func_840(uParam0);
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
							if (((uParam0->f_1.f_35 != 3 && uParam0->f_1.f_35 != 5) && uParam0->f_1.f_35 != 4) && !__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
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
					__LIB_25__::func_840(uParam0);
					break;
				case 4:
					__LIB_25__::func_840(uParam0);
					if (BitTest(uParam0->f_47, 15))
					{
						if (__LIB_0__::func_706() || __LIB_27__::func_91())
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
									if (__LIB_0__::func_706() || __LIB_27__::func_91())
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

void func_1894(var uParam0)//Position - 0xB5F31
{
	int iVar0;
	int iVar1;
	if (__LIB_6__::func_153(&(uParam0->f_1)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 0, 0))
	{
		if (!__LIB_0__::func_497())
		{
			if (uParam0->f_1.f_4)
			{
				if (__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
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
				if (__LIB_19__::func_530() && !__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
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
						__LIB_8__::func_779(1, __LIB_0__::func_727(), 1);
						__LIB_6__::func_246();
					}
				}
				if (__LIB_6__::func_275(__LIB_1__::func_282()))
				{
					if (__LIB_1__::func_282() != PLAYER::PLAYER_PED_ID())
					{
						if (PED::IS_PED_A_PLAYER(__LIB_1__::func_282()))
						{
							__LIB_27__::func_314(uParam0);
							if (__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
							{
								func_1913(uParam0);
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
								if (__LIB_34__::func_289(__LIB_1__::func_282(), __LIB_4__::func_73(&(uParam0->f_1))) && iVar1)
								{
									__LIB_0__::func_579(&(uParam0->f_2255));
								}
							}
							func_1899(uParam0, __LIB_1__::func_282());
						}
					}
					if (!BitTest(uParam0->f_47, 0))
					{
						if (!BitTest(uParam0->f_47, 3))
						{
							MISC::SET_BIT(&(uParam0->f_47), 0);
							__LIB_40__::func_269(uParam0);
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
					__LIB_41__::func_181(uParam0, 1, 0);
				}
			}
		}
	}
	else
	{
		__LIB_8__::func_784(&(uParam0->f_1));
		__LIB_41__::func_182(uParam0);
	}
	__LIB_41__::func_776(uParam0);
}

void func_1899(var uParam0, int iParam1)//Position - 0xB6335
{
	if (__LIB_8__::func_849(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
	{
		if (uParam0->f_2262 == -1)
		{
			uParam0->f_2262 = __LIB_32__::func_241(iParam1);
		}
		else if (!__LIB_3__::func_962(PLAYER::PLAYER_ID(), uParam0->f_2262))
		{
			func_1575(uParam0->f_2262, 1);
		}
	}
	else
	{
		func_1574(uParam0);
	}
}

void func_1913(var uParam0)//Position - 0xB68F0
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282());
	if (iVar1 != __LIB_0__::func_160() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		if (BitTest(Global_2621446.f_69.f_5, 11))
		{
			if ((__LIB_6__::func_305(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775, 0) && !__LIB_7__::func_211(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775)) && !__LIB_9__::func_49(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775))
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
					__LIB_8__::func_779(0, 0, 1);
					func_1604(1, 1, 1, 1, 0, 0f, 0f, 0f, 1, 0, 0, 1, 1, 0, 0);
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
							__LIB_8__::func_779(1, __LIB_0__::func_727(), 1);
							__LIB_1__::func_748();
							__LIB_40__::func_253(1, 1);
							__LIB_6__::func_313(1);
							__LIB_6__::func_335(0);
						}
					}
				}
				else
				{
					uParam0->f_1.f_28 = NETWORK::GET_NETWORK_TIME();
					__LIB_8__::func_779(1, __LIB_0__::func_727(), 1);
					__LIB_1__::func_748();
					__LIB_40__::func_253(1, 1);
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

void func_1928(var uParam0)//Position - 0xB717A
{
	if (__LIB_6__::func_153(&(uParam0->f_1)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 0, 0))
	{
		if (!__LIB_4__::func_764(16))
		{
			if (func_1861(uParam0, 1, 0))
			{
				__LIB_4__::func_741(&(uParam0->f_1), 3);
			}
		}
	}
	else
	{
		__LIB_8__::func_783();
		__LIB_8__::func_784(&(uParam0->f_1));
		__LIB_41__::func_182(uParam0);
	}
	__LIB_41__::func_776(uParam0);
}

void func_1938(var uParam0)//Position - 0xB74A4
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
	if (__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
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
											__LIB_19__::func_532(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
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
											__LIB_19__::func_531(uParam0, iVar24, Var25, 0, Var23);
										}
										else
										{
											if (!__LIB_0__::func_86(Var23))
											{
												STREAMING::SET_FOCUS_POS_AND_VEL(Var23, 0f, 0f, 0f);
											}
											__LIB_19__::func_531(uParam0, iVar24, Var25, 0, Var23);
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
										__LIB_19__::func_531(uParam0, iVar26, Var27, 0, Global_2689235[iVar3 /*453*/].f_318.f_21);
										Global_2815059.f_5195.f_764 = iVar26;
									}
									else
									{
										if (!__LIB_0__::func_86(Global_2689235[iVar3 /*453*/].f_318.f_21))
										{
											STREAMING::SET_FOCUS_POS_AND_VEL(Global_2689235[iVar3 /*453*/].f_318.f_21, 0f, 0f, 0f);
										}
										__LIB_19__::func_531(uParam0, iVar26, Var27, 0, Global_2689235[iVar3 /*453*/].f_318.f_21);
									}
								}
								else if (Global_2815059.f_5195.f_764 != iVar26)
								{
									__LIB_26__::func_343(uParam0);
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
											__LIB_26__::func_343(uParam0);
										}
										if (!__LIB_6__::func_304(&(uParam0->f_1)))
										{
											uParam0->f_1.f_41 = 2;
											if (__LIB_4__::func_710(iVar5))
											{
												__LIB_6__::func_326(Global_4196263[iVar6 /*2012*/].f_3[0 /*3*/]);
												__LIB_19__::func_532(uParam0, fVar1, Global_4196263[iVar6 /*2012*/].f_24, Global_4196263[iVar6 /*2012*/].f_24.f_3, Global_4196263[iVar6 /*2012*/].f_24.f_6, 1, 1);
											}
											else
											{
												__LIB_6__::func_326(Global_1312193[iVar5 /*1951*/].f_3[0 /*3*/]);
												__LIB_19__::func_532(uParam0, fVar1, Global_1312193[iVar5 /*1951*/].f_24, Global_1312193[iVar5 /*1951*/].f_24.f_3, Global_1312193[iVar5 /*1951*/].f_24.f_6, 1, 1);
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
										func_1946(iVar28, &Var30, iVar29, 0);
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
												__LIB_19__::func_532(uParam0, fVar1, Var31, Var32, fVar33, 1, 1);
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
									__LIB_19__::func_532(uParam0, fVar1, 122.0654f, -1327.9208f, 33.6793f, -2.9863f, 2.0975f, -9.7207f, 32.8998f, 1, 0);
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
									__LIB_19__::func_532(uParam0, fVar1, 1291.5598f, -1730.0697f, 58.7646f, -7.1113f, 0f, 65.8008f, 41.2371f, 1, 0);
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
									__LIB_19__::func_532(uParam0, fVar1, 1989.2953f, 3812.5586f, 33.4393f, -0.5562f, 0f, 69.5306f, 40.2409f, 1, 0);
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
									__LIB_19__::func_532(uParam0, fVar1, 689.6125f, -996.7897f, 37.070427f, -7.501717f, 0f, -43.41461f, 45f, 1, 0);
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
									__LIB_19__::func_532(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
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
									__LIB_19__::func_532(uParam0, fVar1, Var8, Var9, 40f, 1, 0);
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
									__LIB_19__::func_532(uParam0, fVar1, -1703.854f, -1082.2223f, 42.006f, -8.3096f, 0f, -111.8213f, 45f, 1, 0);
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
									__LIB_19__::func_532(uParam0, fVar1, -1155.4f, -2715.5f, 64f, -10.3f, 0f, 113.1f, 50f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
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
											__LIB_19__::func_532(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
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
										__LIB_19__::func_532(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
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
										__LIB_19__::func_532(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
									}
								}
							}
						}
					}
					if (!bVar7 && !__LIB_0__::func_706())
					{
						if (__LIB_9__::func_92(uParam0, iVar3) && !__LIB_6__::func_321())
						{
							__LIB_26__::func_343(uParam0);
						}
					}
				}
			}
		}
	}
}

void func_1946(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xB867B
{
	var uVar0;
	func_1947(iParam0, uParam1, &uVar0, iParam2, iParam3);
}

void func_1947(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xB8691
{
	struct<33> Var0;
	func_1948(iParam0, &Var0, 2);
	func_1948(iParam0, &Var0, 6);
	func_1948(iParam0, &Var0, 1);
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

void func_1948(int iParam0, var uParam1, int iParam2)//Position - 0xB86E0
{
	func_6067(uParam1, iParam2);
	func_6061(uParam1, iParam2);
	func_6053(uParam1, iParam2);
	func_1949(__LIB_0__::func_170(iParam0), uParam1, iParam2);
}

void func_1949(int iParam0, var uParam1, int iParam2)//Position - 0xB870E
{
	switch (iParam0)
	{
		case 0:
			func_5983(uParam1, iParam2);
			break;
		case 1:
			func_5857(uParam1, iParam2);
			break;
		case 2:
			func_5787(uParam1, iParam2);
			break;
		case 3:
			func_5714(uParam1, iParam2);
			break;
		case 4:
			func_5548(uParam1, iParam2);
			break;
		case 5:
			func_5393(uParam1, iParam2);
			break;
		case 6:
			func_5330(uParam1, iParam2);
			break;
		case 7:
			func_5162(uParam1, iParam2);
			break;
		case 8:
			func_4998(uParam1, iParam2);
			break;
		case 9:
			func_4763(uParam1, iParam2);
			break;
		case 10:
			func_4685(uParam1, iParam2);
			break;
		case 11:
			func_4470(uParam1, iParam2);
			break;
		case 12:
			func_4335(uParam1, iParam2);
			break;
		case 13:
			func_4168(uParam1, iParam2);
			break;
		case 14:
			func_4014(uParam1, iParam2);
			break;
		case 15:
			func_3836(uParam1, iParam2);
			break;
		case 16:
			func_3726(uParam1, iParam2);
			break;
		case 17:
			func_3510(uParam1, iParam2);
			break;
		case 18:
			func_3416(uParam1, iParam2);
			break;
		case 19:
			func_3297(uParam1, iParam2);
			break;
		case 20:
			func_2991(uParam1, iParam2);
			break;
		case 21:
			func_2870(uParam1, iParam2);
			break;
		case 22:
			func_2700(uParam1, iParam2);
			break;
		case 23:
			func_2480(uParam1, iParam2);
			break;
		case 24:
			func_1950(uParam1, iParam2);
			break;
	}
}

void func_1950(var uParam0, int iParam1)//Position - 0xB88C6
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 928514/*func_2479*/;
			break;
		case 111:
			uParam0->f_35 = 928500/*func_2478*/;
			break;
		case 1:
			uParam0->f_30 = 928402/*func_2477*/;
			break;
		case 2:
			uParam0->f_31 = 927039/*func_2471*/;
			break;
		case 3:
			uParam0->f_34 = 926810/*func_2470*/;
			break;
		case 4:
			uParam0->f_12 = 926797/*func_2469*/;
			break;
		case 5:
			uParam0->f_11 = 926787/*func_2468*/;
			break;
		case 37:
			uParam0->f_18 = 926588/*func_2467*/;
			break;
		case 38:
			uParam0->f_9 = 926540/*func_2466*/;
			break;
		case 42:
			uParam0->f_10 = 926511/*func_2465*/;
			break;
		case 6:
			uParam0->f_32 = 926202/*func_2464*/;
			break;
		case 11:
			uParam0->f_11 = 926193/*func_2463*/;
			break;
		case 12:
			uParam0->f_33 = 923549/*func_2456*/;
			break;
		case 14:
			uParam0->f_11 = 923540/*func_2455*/;
			break;
		case 109:
			uParam0->f_56 = 916703/*func_2452*/;
			break;
		case 8:
			uParam0->f_37 = 915828/*func_2451*/;
			break;
		case 7:
			uParam0->f_36 = 915711/*func_2450*/;
			break;
		case 79:
			*uParam0 = 915655/*func_2447*/;
			break;
		case 9:
			uParam0->f_29 = 915502/*func_2446*/;
			break;
		case 10:
			uParam0->f_27 = 915353/*func_2444*/;
			break;
		case 13:
			uParam0->f_2 = 915291/*func_2443*/;
			break;
		case 15:
			uParam0->f_2 = 913733/*func_2429*/;
			break;
		case 16:
			uParam0->f_5 = 912563/*func_2421*/;
			break;
		case 108:
			uParam0->f_55 = 857492/*func_2322*/;
			break;
		case 17:
			uParam0->f_17 = 855897/*func_2308*/;
			break;
		case 19:
			uParam0->f_17 = 855745/*func_2303*/;
			break;
		case 18:
			uParam0->f_8 = 855720/*func_2302*/;
			break;
		case 20:
			uParam0->f_3 = 855500/*func_2300*/;
			break;
		case 21:
			uParam0->f_3 = 854059/*func_2286*/;
			break;
		case 74:
			uParam0->f_53 = 853869/*func_2284*/;
			break;
		case 75:
			uParam0->f_4 = 852671/*func_2279*/;
			break;
		case 22:
			uParam0->f_24 = 852564/*func_2278*/;
			break;
		case 23:
			uParam0->f_26 = 852517/*func_2277*/;
			break;
		case 24:
			uParam0->f_26 = 852480/*func_2276*/;
			break;
		case 26:
			uParam0->f_38 = 852472/*func_2275*/;
			break;
		case 25:
			uParam0->f_23 = 849505/*func_2256*/;
			break;
		case 27:
			uParam0->f_25 = 849497/*func_2255*/;
			break;
		case 28:
			uParam0->f_24 = 849489/*func_2254*/;
			break;
		case 30:
			uParam0->f_8 = 849339/*func_2252*/;
			break;
		case 31:
			uParam0->f_39 = 849123/*func_2250*/;
			break;
		case 33:
			uParam0->f_40 = 848165/*func_2241*/;
			break;
		case 32:
			*uParam0 = 848110/*func_2240*/;
			break;
		case 76:
			uParam0->f_13 = 848099/*func_2239*/;
			break;
		case 34:
			uParam0->f_41 = 844347/*func_2236*/;
			break;
		case 36:
			uParam0->f_58 = 844302/*func_2235*/;
			break;
		case 35:
			uParam0->f_42 = 823300/*func_2232*/;
			break;
		case 45:
			uParam0->f_14 = 823291/*func_2231*/;
			break;
		case 46:
			uParam0->f_14 = 823282/*func_2230*/;
			break;
		case 110:
			uParam0->f_57 = 823274/*func_2229*/;
			break;
		case 77:
			uParam0->f_13 = 823251/*func_2228*/;
			break;
		case 82:
			uParam0->f_19 = 823205/*func_2226*/;
			break;
		case 47:
			uParam0->f_43 = 823062/*func_2225*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 821919/*func_2216*/;
			break;
		case 49:
			uParam0->f_8 = 821901/*func_2215*/;
			break;
		case 50:
			*uParam0 = 821587/*func_2212*/;
			break;
		case 51:
			*uParam0 = 821485/*func_2211*/;
			break;
		case 52:
			uParam0->f_15 = 821474/*func_2210*/;
			break;
		case 53:
			uParam0->f_13 = 821348/*func_2209*/;
			break;
		case 54:
			uParam0->f_45 = 820958/*func_2208*/;
			break;
		case 56:
			uParam0->f_46 = 820939/*func_2207*/;
			break;
		case 57:
			uParam0->f_11 = 820685/*func_2206*/;
			break;
		case 58:
			uParam0->f_13 = 820559/*func_2205*/;
			break;
		case 59:
			*uParam0 = 819178/*func_2194*/;
			break;
		case 60:
			*uParam0 = 819169/*func_2193*/;
			break;
		case 61:
			uParam0->f_15 = 819158/*func_2192*/;
			break;
		case 62:
			uParam0->f_13 = 819032/*func_2191*/;
			break;
		case 55:
			uParam0->f_45 = 819024/*func_2190*/;
			break;
		case 63:
			uParam0->f_11 = 819010/*func_2189*/;
			break;
		case 64:
			uParam0->f_47 = 819002/*func_2188*/;
			break;
		case 65:
			uParam0->f_21 = 817593/*func_2177*/;
			break;
		case 66:
			uParam0->f_21 = 816897/*func_2174*/;
			break;
		case 67:
			uParam0->f_21 = 816757/*func_2172*/;
			break;
		case 68:
			*uParam0 = 815552/*func_2167*/;
			break;
		case 69:
			*uParam0 = 815543/*func_2166*/;
			break;
		case 70:
			uParam0->f_48 = 815531/*func_2165*/;
			break;
		case 71:
			uParam0->f_49 = 815522/*func_2164*/;
			break;
		case 107:
			uParam0->f_50 = 815510/*func_2163*/;
			break;
		case 80:
			uParam0->f_7 = 815059/*func_2161*/;
			break;
		case 84:
			uParam0->f_1 = 815050/*func_2160*/;
			break;
		case 85:
			uParam0->f_1 = 774186/*func_2065*/;
			break;
		case 87:
			uParam0->f_1 = 770331/*func_2044*/;
			break;
		case 88:
			uParam0->f_1 = 770322/*func_2043*/;
			break;
		case 89:
			uParam0->f_54 = 770314/*func_2042*/;
			break;
		case 90:
			uParam0->f_1 = 769435/*func_2025*/;
			break;
		case 91:
			uParam0->f_1 = 769401/*func_2024*/;
			break;
		case 92:
			uParam0->f_1 = 767606/*func_2013*/;
			break;
		case 94:
			uParam0->f_1 = 765636/*func_2001*/;
			break;
		case 95:
			uParam0->f_22 = 764245/*func_1989*/;
			break;
		case 96:
			uParam0->f_1 = 764236/*func_1988*/;
			break;
		case 97:
			uParam0->f_1 = 764227/*func_1987*/;
			break;
		case 98:
			uParam0->f_1 = 764218/*func_1986*/;
			break;
		case 100:
			uParam0->f_22 = 764210/*func_1985*/;
			break;
		case 101:
			uParam0->f_22 = 764202/*func_1984*/;
			break;
		case 112:
			uParam0->f_13 = 764088/*func_1983*/;
			break;
		case 113:
			uParam0->f_3 = 763934/*func_1979*/;
			break;
		case 114:
			uParam0->f_16 = 763266/*func_1978*/;
			break;
		case 115:
			uParam0->f_3 = 763257/*func_1977*/;
			break;
		case 116:
			*uParam0 = 763248/*func_1976*/;
			break;
		case 117:
			uParam0->f_16 = 758832/*func_1975*/;
			break;
		case 118:
			uParam0->f_11 = 758823/*func_1974*/;
			break;
		case 119:
			uParam0->f_27 = 758696/*func_1969*/;
			break;
		case 120:
			uParam0->f_19 = 758641/*func_1966*/;
			break;
		case 78:
			uParam0->f_59 = 757722/*func_1953*/;
			break;
		case 124:
			uParam0->f_1 = 757713/*func_1952*/;
			break;
		case 125:
			uParam0->f_19 = 757705/*func_1951*/;
			break;
	}
}

int func_2065(int iParam0, var uParam1)//Position - 0xBD02A
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
			func_2080(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_2074(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

int func_2074(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0xBD7A1
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
						func_2075(uParam2[iVar1], iVar4, bParam8, bParam6);
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

int func_2075(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xBD903
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
		if (func_2077(iParam1) || __LIB_19__::func_37(iParam1))
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

int func_2077(int iParam0)//Position - 0xBDA62
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_709(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_1760(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_2080(int iParam0, var uParam1, int iParam2)//Position - 0xBDB50
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
	else if (__LIB_41__::func_161(uParam1, *iParam0, 10f, 20f, 15f, ENTITY::GET_ENTITY_HEADING(*iParam0), 0, 0))
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
			__LIB_41__::func_160(*uParam1, &Var0, 1, 1, 0);
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
				func_2074(iParam0, uParam1, &(uParam1->f_1), __LIB_0__::func_517(iParam2, 16), __LIB_0__::func_517(iParam2, 128), __LIB_0__::func_517(iParam2, 64), !__LIB_0__::func_517(iParam2, 256), 0, 1);
			}
			if (__LIB_0__::func_517(iParam2, 4))
			{
				__LIB_41__::func_756(iParam0, &(uParam1->f_12));
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

void func_2208(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xC86DE
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	if (__LIB_7__::func_700(iParam0))
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
		if (!__LIB_4__::func_112(PLAYER::PLAYER_ID(), __LIB_2__::func_433(iParam0)) && __LIB_4__::func_112(__LIB_0__::func_582(), __LIB_2__::func_433(iParam0)))
		{
			iVar2 = 0;
			while (iVar2 < 32)
			{
				bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (__LIB_1__::func_264(bVar1, 1, 1) && bVar1 != PLAYER::PLAYER_ID())
				{
					if (__LIB_4__::func_112(bVar1, __LIB_2__::func_433(iParam0)))
					{
						Var3 = { __LIB_1__::func_267(bVar1) };
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
Vector3 func_2209(int iParam0)//Position - 0xC8864
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

void func_2256(int iParam0, int iParam1)//Position - 0xCF661
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	iVar2 = __LIB_2__::func_399();
	Var3 = { __LIB_2__::func_462(iParam0, iVar2) };
	if (__LIB_7__::func_996(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2266(iParam0, Var3, &bVar0, &bVar1, 1, 0);
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
			__LIB_25__::func_215(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var3, 1, 0, 0, 0, -1, -1, __LIB_6__::func_367());
			}
			__LIB_25__::func_681(iParam0, __LIB_6__::func_367());
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var3, 0, 0, 1, 0, -1, -1, __LIB_6__::func_367());
			}
			__LIB_25__::func_681(iParam0, __LIB_6__::func_367());
		}
	}
	else
	{
		if (__LIB_4__::func_973(0))
		{
			if (iVar2 == 3 && __LIB_7__::func_800(__LIB_0__::func_582()) == iParam0)
			{
				__LIB_2__::func_447(1);
			}
		}
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2266(int iParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0xCFCA9
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
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
		bVar5 = iVar4;
		if (iVar2 == bVar5 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar5))
		{
		}
		else
		{
			iVar6 = PLAYER::GET_PLAYER_PED(bVar5);
			if (ENTITY::IS_ENTITY_DEAD(iVar6, false))
			{
			}
			else if (bParam5)
			{
				if (iVar3 != Global_2689235[bVar5 /*453*/].f_318.f_7)
				{
				}
				else
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true), Param1) <= fVar1)
					{
						Var7 = { __LIB_1__::func_267(bVar5) };
						bVar8 = false;
						if (__LIB_4__::func_115(bVar5) > -1)
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
								if (((((((((!__LIB_1__::func_425(bVar5, 1) && !__LIB_7__::func_701(bVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_0__::func_811(iVar6)) && !__LIB_7__::func_211(bVar5)) && !__LIB_8__::func_108(bVar5, 1)) && !((__LIB_4__::func_682(bVar5, 1) && !__LIB_3__::func_999(iVar2, bVar5)) && __LIB_6__::func_367() != 0)) && !func_2267(bVar5)) && !__LIB_3__::func_998(bVar5)) && !bVar8)
								{
									*iParam2 = 1;
								}
							}
						}
						if ((((((((((!*iParam3 && __LIB_3__::func_999(PLAYER::PLAYER_ID(), bVar5)) && !__LIB_7__::func_701(bVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_0__::func_811(iVar6)) && !__LIB_7__::func_211(bVar5)) && !__LIB_8__::func_108(bVar5, 1)) && __LIB_2__::func_192(PLAYER::PLAYER_ID())) && !func_2267(bVar5)) && !__LIB_3__::func_998(bVar5)) && !bVar8)
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
int func_2267(bool bParam0)//Position - 0xCFEE4
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

void func_2480(var uParam0, int iParam1)//Position - 0xE2B0B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 984511/*func_2699*/;
			break;
		case 111:
			uParam0->f_35 = 984502/*func_2698*/;
			break;
		case 1:
			uParam0->f_30 = 984422/*func_2696*/;
			break;
		case 2:
			uParam0->f_31 = 983781/*func_2692*/;
			break;
		case 3:
			uParam0->f_34 = 983515/*func_2691*/;
			break;
		case 4:
			uParam0->f_12 = 983502/*func_2690*/;
			break;
		case 6:
			uParam0->f_32 = 983403/*func_2689*/;
			break;
		case 37:
			uParam0->f_18 = 983265/*func_2688*/;
			break;
		case 38:
			uParam0->f_9 = 983217/*func_2687*/;
			break;
		case 39:
			uParam0->f_11 = 983182/*func_2686*/;
			break;
		case 41:
			uParam0->f_20 = 983063/*func_2683*/;
			break;
		case 42:
			uParam0->f_10 = 983032/*func_2682*/;
			break;
		case 11:
			uParam0->f_11 = 983022/*func_2681*/;
			break;
		case 12:
			uParam0->f_33 = 980871/*func_2677*/;
			break;
		case 14:
			uParam0->f_11 = 980862/*func_2676*/;
			break;
		case 109:
			uParam0->f_56 = 978245/*func_2673*/;
			break;
		case 8:
			uParam0->f_37 = 978237/*func_2672*/;
			break;
		case 7:
			uParam0->f_36 = 978228/*func_2671*/;
			break;
		case 79:
			*uParam0 = 978219/*func_2670*/;
			break;
		case 13:
			uParam0->f_2 = 978157/*func_2669*/;
			break;
		case 15:
			uParam0->f_2 = 978076/*func_2668*/;
			break;
		case 16:
			uParam0->f_5 = 977723/*func_2667*/;
			break;
		case 108:
			uParam0->f_55 = 973289/*func_2652*/;
			break;
		case 17:
			uParam0->f_17 = 972119/*func_2650*/;
			break;
		case 19:
			uParam0->f_17 = 972092/*func_2649*/;
			break;
		case 20:
			uParam0->f_3 = 972083/*func_2648*/;
			break;
		case 21:
			uParam0->f_3 = 971952/*func_2646*/;
			break;
		case 74:
			uParam0->f_53 = 971848/*func_2645*/;
			break;
		case 75:
			uParam0->f_4 = 971832/*func_2644*/;
			break;
		case 22:
			uParam0->f_24 = 971676/*func_2643*/;
			break;
		case 23:
			uParam0->f_26 = 971668/*func_2642*/;
			break;
		case 26:
			uParam0->f_38 = 963710/*func_2603*/;
			break;
		case 25:
			uParam0->f_23 = 962661/*func_2599*/;
			break;
		case 27:
			uParam0->f_25 = 962445/*func_2596*/;
			break;
		case 28:
			uParam0->f_24 = 962404/*func_2595*/;
			break;
		case 29:
			uParam0->f_28 = 962381/*func_2594*/;
			break;
		case 30:
			uParam0->f_8 = 962200/*func_2591*/;
			break;
		case 31:
			uParam0->f_39 = 962170/*func_2590*/;
			break;
		case 43:
			uParam0->f_8 = 962056/*func_2589*/;
			break;
		case 33:
			uParam0->f_40 = 961938/*func_2588*/;
			break;
		case 76:
			uParam0->f_13 = 961889/*func_2587*/;
			break;
		case 34:
			uParam0->f_41 = 953051/*func_2586*/;
			break;
		case 36:
			uParam0->f_58 = 953003/*func_2585*/;
			break;
		case 35:
			uParam0->f_42 = 941914/*func_2578*/;
			break;
		case 45:
			uParam0->f_14 = 941905/*func_2577*/;
			break;
		case 46:
			uParam0->f_14 = 941896/*func_2576*/;
			break;
		case 110:
			uParam0->f_57 = 941888/*func_2575*/;
			break;
		case 77:
			uParam0->f_13 = 941877/*func_2574*/;
			break;
		case 47:
			uParam0->f_43 = 941751/*func_2573*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 940866/*func_2560*/;
			break;
		case 49:
			uParam0->f_8 = 940857/*func_2559*/;
			break;
		case 50:
			*uParam0 = 940688/*func_2558*/;
			break;
		case 51:
			*uParam0 = 940679/*func_2557*/;
			break;
		case 52:
			uParam0->f_15 = 940668/*func_2556*/;
			break;
		case 53:
			uParam0->f_13 = 940645/*func_2555*/;
			break;
		case 54:
			uParam0->f_45 = 940596/*func_2554*/;
			break;
		case 56:
			uParam0->f_46 = 940578/*func_2553*/;
			break;
		case 57:
			uParam0->f_11 = 940536/*func_2551*/;
			break;
		case 58:
			uParam0->f_13 = 940494/*func_2550*/;
			break;
		case 59:
			*uParam0 = 940365/*func_2548*/;
			break;
		case 60:
			*uParam0 = 940356/*func_2547*/;
			break;
		case 61:
			uParam0->f_15 = 940345/*func_2546*/;
			break;
		case 62:
			uParam0->f_13 = 940322/*func_2545*/;
			break;
		case 63:
			uParam0->f_11 = 940313/*func_2544*/;
			break;
		case 55:
			uParam0->f_45 = 940271/*func_2543*/;
			break;
		case 64:
			uParam0->f_47 = 940263/*func_2542*/;
			break;
		case 65:
			uParam0->f_21 = 940255/*func_2541*/;
			break;
		case 66:
			uParam0->f_21 = 939984/*func_2540*/;
			break;
		case 67:
			uParam0->f_21 = 939914/*func_2539*/;
			break;
		case 68:
			*uParam0 = 939242/*func_2537*/;
			break;
		case 69:
			*uParam0 = 939233/*func_2536*/;
			break;
		case 70:
			uParam0->f_48 = 939221/*func_2535*/;
			break;
		case 71:
			uParam0->f_49 = 939001/*func_2534*/;
			break;
		case 107:
			uParam0->f_50 = 938989/*func_2533*/;
			break;
		case 80:
			uParam0->f_7 = 938453/*func_2529*/;
			break;
		case 84:
			uParam0->f_1 = 938338/*func_2524*/;
			break;
		case 85:
			uParam0->f_1 = 937434/*func_2522*/;
			break;
		case 87:
			uParam0->f_1 = 934803/*func_2513*/;
			break;
		case 88:
			uParam0->f_1 = 934794/*func_2512*/;
			break;
		case 89:
			uParam0->f_54 = 934786/*func_2511*/;
			break;
		case 96:
			uParam0->f_1 = 934777/*func_2510*/;
			break;
		case 97:
			uParam0->f_1 = 934768/*func_2509*/;
			break;
		case 98:
			uParam0->f_1 = 934759/*func_2508*/;
			break;
		case 100:
			uParam0->f_22 = 934751/*func_2507*/;
			break;
		case 101:
			uParam0->f_22 = 934743/*func_2506*/;
			break;
		case 112:
			uParam0->f_13 = 934708/*func_2504*/;
			break;
		case 113:
			uParam0->f_3 = 934699/*func_2503*/;
			break;
		case 114:
			uParam0->f_16 = 932757/*func_2501*/;
			break;
		case 115:
			uParam0->f_3 = 932748/*func_2500*/;
			break;
		case 116:
			*uParam0 = 932739/*func_2499*/;
			break;
		case 117:
			uParam0->f_16 = 931519/*func_2498*/;
			break;
		case 121:
			*uParam0 = 931437/*func_2497*/;
			break;
		case 122:
			*uParam0 = 931420/*func_2496*/;
			break;
		case 123:
			uParam0->f_19 = 931388/*func_2494*/;
			break;
		case 78:
			uParam0->f_59 = 930198/*func_2483*/;
			break;
		case 124:
			uParam0->f_1 = 930189/*func_2482*/;
			break;
		case 125:
			uParam0->f_19 = 930181/*func_2481*/;
			break;
	}
}

int func_2522(int iParam0, var uParam1)//Position - 0xE4DDA
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
			func_2080(&iVar1, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_2074(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_2599(int iParam0, int iParam1)//Position - 0xEB065
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
	func_2266(iParam0, Var5, &bVar0, &bVar1, 1, 0);
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
			__LIB_8__::func_2(iParam0, -1);
		}
		if (((iVar3 == 12 || iVar3 == 13) || iVar3 == 14) || iVar3 == 15)
		{
			iVar4 = 1;
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_8__::func_2(iParam0, -1);
			__LIB_2__::func_447(iVar4);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var5, 1, 0, 0, 0, -2, -1, iVar4);
			}
			__LIB_18__::func_854(iVar4, 1);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var5, 0, 0, 1, 0, -2, -1, iVar4);
			}
			__LIB_18__::func_854(iVar4, 1);
		}
	}
	else
	{
		__LIB_2__::func_447(iVar4);
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2603(var uParam0, var uParam1)//Position - 0xEB47E
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
			func_2604(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2604(var uParam0, var uParam1)//Position - 0xEB4D4
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
	func_2266(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		if (bVar2 || (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_79[0 /*6*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[0 /*6*/]), __LIB_4__::func_341(0))))
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
					__LIB_4__::func_339(PLAYER::PLAYER_ID());
				}
			}
			return;
		}
	}
	sVar6 = __LIB_2__::func_551();
	iVar8 = 0;
	while (iVar8 < 3)
	{
		uVar5[iVar7] = __LIB_4__::func_341(iVar8);
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
				__LIB_4__::func_339(PLAYER::PLAYER_ID());
			}
			if (iVar4[uParam0->f_4] != 0)
			{
				__LIB_34__::func_241(iVar4[uParam0->f_4], 154);
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

void func_2700(var uParam0, int iParam1)//Position - 0xF05C8
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1025073/*func_2869*/;
			break;
		case 111:
			uParam0->f_35 = 1025059/*func_2868*/;
			break;
		case 1:
			uParam0->f_30 = 1024967/*func_2866*/;
			break;
		case 2:
			uParam0->f_31 = 1024743/*func_2863*/;
			break;
		case 3:
			uParam0->f_34 = 1024586/*func_2862*/;
			break;
		case 4:
			uParam0->f_12 = 1024573/*func_2861*/;
			break;
		case 5:
			uParam0->f_11 = 1024563/*func_2860*/;
			break;
		case 37:
			uParam0->f_18 = 1024442/*func_2859*/;
			break;
		case 38:
			uParam0->f_9 = 1024394/*func_2858*/;
			break;
		case 42:
			uParam0->f_10 = 1024365/*func_2857*/;
			break;
		case 6:
			uParam0->f_32 = 1024277/*func_2856*/;
			break;
		case 11:
			uParam0->f_11 = 1024268/*func_2855*/;
			break;
		case 12:
			uParam0->f_33 = 1022523/*func_2850*/;
			break;
		case 14:
			uParam0->f_11 = 1022514/*func_2849*/;
			break;
		case 109:
			uParam0->f_56 = 1018366/*func_2846*/;
			break;
		case 8:
			uParam0->f_37 = 1017889/*func_2845*/;
			break;
		case 7:
			uParam0->f_36 = 1017795/*func_2844*/;
			break;
		case 79:
			*uParam0 = 1017786/*func_2843*/;
			break;
		case 13:
			uParam0->f_2 = 1017724/*func_2842*/;
			break;
		case 15:
			uParam0->f_2 = 1017643/*func_2841*/;
			break;
		case 16:
			uParam0->f_5 = 1016745/*func_2839*/;
			break;
		case 108:
			uParam0->f_55 = 1013462/*func_2827*/;
			break;
		case 17:
			uParam0->f_17 = 1012187/*func_2824*/;
			break;
		case 19:
			uParam0->f_17 = 1012160/*func_2823*/;
			break;
		case 20:
			uParam0->f_3 = 1011946/*func_2821*/;
			break;
		case 21:
			uParam0->f_3 = 1011882/*func_2820*/;
			break;
		case 74:
			uParam0->f_53 = 1011778/*func_2819*/;
			break;
		case 75:
			uParam0->f_4 = 1011762/*func_2818*/;
			break;
		case 22:
			uParam0->f_24 = 1011655/*func_2817*/;
			break;
		case 23:
			uParam0->f_26 = 1011647/*func_2816*/;
			break;
		case 26:
			uParam0->f_38 = 1007666/*func_2798*/;
			break;
		case 25:
			uParam0->f_23 = 1007216/*func_2795*/;
			break;
		case 27:
			uParam0->f_25 = 1007208/*func_2794*/;
			break;
		case 28:
			uParam0->f_24 = 1007200/*func_2793*/;
			break;
		case 30:
			uParam0->f_8 = 1006563/*func_2788*/;
			break;
		case 31:
			uParam0->f_39 = 1006425/*func_2787*/;
			break;
		case 33:
			uParam0->f_40 = 1005551/*func_2778*/;
			break;
		case 32:
			*uParam0 = 1005348/*func_2774*/;
			break;
		case 76:
			uParam0->f_13 = 1005195/*func_2773*/;
			break;
		case 34:
			uParam0->f_41 = 1003583/*func_2769*/;
			break;
		case 36:
			uParam0->f_58 = 1003538/*func_2768*/;
			break;
		case 35:
			uParam0->f_42 = 994496/*func_2765*/;
			break;
		case 45:
			uParam0->f_14 = 994487/*func_2764*/;
			break;
		case 46:
			uParam0->f_14 = 994478/*func_2763*/;
			break;
		case 110:
			uParam0->f_57 = 994470/*func_2762*/;
			break;
		case 77:
			uParam0->f_13 = 994447/*func_2761*/;
			break;
		case 47:
			uParam0->f_43 = 994395/*func_2760*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 994257/*func_2758*/;
			break;
		case 49:
			uParam0->f_8 = 994239/*func_2757*/;
			break;
		case 50:
			*uParam0 = 993432/*func_2754*/;
			break;
		case 51:
			*uParam0 = 993330/*func_2753*/;
			break;
		case 52:
			uParam0->f_15 = 993319/*func_2752*/;
			break;
		case 53:
			uParam0->f_13 = 993166/*func_2751*/;
			break;
		case 54:
			uParam0->f_45 = 992931/*func_2750*/;
			break;
		case 56:
			uParam0->f_46 = 992922/*func_2749*/;
			break;
		case 57:
			uParam0->f_11 = 992509/*func_2745*/;
			break;
		case 58:
			uParam0->f_13 = 992356/*func_2744*/;
			break;
		case 59:
			*uParam0 = 992347/*func_2743*/;
			break;
		case 60:
			*uParam0 = 992338/*func_2742*/;
			break;
		case 61:
			uParam0->f_15 = 992327/*func_2741*/;
			break;
		case 62:
			uParam0->f_13 = 992316/*func_2740*/;
			break;
		case 63:
			uParam0->f_11 = 992307/*func_2739*/;
			break;
		case 64:
			uParam0->f_47 = 992299/*func_2738*/;
			break;
		case 65:
			uParam0->f_21 = 991243/*func_2735*/;
			break;
		case 66:
			uParam0->f_21 = 991023/*func_2734*/;
			break;
		case 67:
			uParam0->f_21 = 990948/*func_2733*/;
			break;
		case 68:
			*uParam0 = 990259/*func_2732*/;
			break;
		case 69:
			*uParam0 = 990250/*func_2731*/;
			break;
		case 70:
			uParam0->f_48 = 990238/*func_2730*/;
			break;
		case 71:
			uParam0->f_49 = 990146/*func_2729*/;
			break;
		case 107:
			uParam0->f_50 = 990134/*func_2728*/;
			break;
		case 80:
			uParam0->f_7 = 989767/*func_2727*/;
			break;
		case 84:
			uParam0->f_1 = 989758/*func_2726*/;
			break;
		case 85:
			uParam0->f_1 = 988965/*func_2724*/;
			break;
		case 87:
			uParam0->f_1 = 987585/*func_2717*/;
			break;
		case 88:
			uParam0->f_1 = 987576/*func_2716*/;
			break;
		case 89:
			uParam0->f_54 = 987568/*func_2715*/;
			break;
		case 96:
			uParam0->f_1 = 987559/*func_2714*/;
			break;
		case 97:
			uParam0->f_1 = 987550/*func_2713*/;
			break;
		case 98:
			uParam0->f_1 = 987541/*func_2712*/;
			break;
		case 100:
			uParam0->f_22 = 987533/*func_2711*/;
			break;
		case 101:
			uParam0->f_22 = 987525/*func_2710*/;
			break;
		case 112:
			uParam0->f_13 = 987513/*func_2709*/;
			break;
		case 113:
			uParam0->f_3 = 987504/*func_2708*/;
			break;
		case 114:
			uParam0->f_16 = 932757/*func_2501*/;
			break;
		case 115:
			uParam0->f_3 = 987495/*func_2707*/;
			break;
		case 116:
			*uParam0 = 987486/*func_2706*/;
			break;
		case 117:
			uParam0->f_16 = 986266/*func_2705*/;
			break;
		case 78:
			uParam0->f_59 = 986094/*func_2703*/;
			break;
		case 124:
			uParam0->f_1 = 986085/*func_2702*/;
			break;
		case 125:
			uParam0->f_19 = 986077/*func_2701*/;
			break;
	}
}

int func_2724(int iParam0, var uParam1)//Position - 0xF1725
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
			func_2080(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_2074(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_2750(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xF26A3
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	bVar0 = false;
	if (!__LIB_4__::func_126(PLAYER::PLAYER_ID(), __LIB_2__::func_591(iParam0)) && !__LIB_4__::func_126(__LIB_0__::func_582(), __LIB_2__::func_591(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_264(bVar1, 1, 1) && bVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_4__::func_126(bVar1, __LIB_2__::func_591(iParam0)) && __LIB_7__::func_716(bVar1))
				{
					Var3 = { __LIB_1__::func_267(bVar1) };
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
Vector3 func_2751(int iParam0)//Position - 0xF278E
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

void func_2795(int iParam0, int iParam1)//Position - 0xF5E70
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_611(iParam0) };
	if (__LIB_7__::func_823(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2266(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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
			__LIB_18__::func_856(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_957(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_957(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2798(var uParam0, var uParam1)//Position - 0xF6032
{
	if (__LIB_2__::func_399() == 2 || __LIB_2__::func_399() == 1)
	{
		func_2801(uParam0, uParam1);
	}
	else if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0) && __LIB_4__::func_126(__LIB_2__::func_191(PLAYER::PLAYER_ID()), __LIB_2__::func_591(*uParam0)))
	{
		__LIB_4__::func_343(uParam0, uParam1);
	}
	else
	{
		__LIB_2__::func_612(uParam1);
	}
}

void func_2801(var uParam0, var uParam1)//Position - 0xF6111
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_32__::func_632(uParam0, uParam1);
			break;
		case 1:
			func_2813(uParam0, uParam1);
			break;
		case 2:
			__LIB_38__::func_957(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2813(var uParam0, var uParam1)//Position - 0xF6CEB
{
	var uVar0;
	var uVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_2266(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
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
		if (__LIB_18__::func_959(*uParam0))
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
			__LIB_18__::func_856(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_2846(int iParam0, var uParam1, int iParam2)//Position - 0xF89FE
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
					if (__LIB_8__::func_59(iParam0))
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
					if (__LIB_8__::func_59(iParam0))
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
					if (__LIB_8__::func_59(iParam0))
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
					if (__LIB_8__::func_59(iParam0))
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
					if (__LIB_8__::func_59(iParam0))
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
			if (!__LIB_4__::func_973(1) || (__LIB_2__::func_232() && __LIB_4__::func_126(PLAYER::PLAYER_ID(), __LIB_2__::func_591(iParam0))))
			{
				func_2266(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
				bVar2 = (uVar0 || uVar1);
			}
			if (!bVar2 && !__LIB_18__::func_959(iParam0))
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

void func_2870(var uParam0, int iParam1)//Position - 0xFA43A
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1041432/*func_2990*/;
			break;
		case 111:
			uParam0->f_35 = 1041423/*func_2989*/;
			break;
		case 1:
			uParam0->f_30 = 1041355/*func_2987*/;
			break;
		case 2:
			uParam0->f_31 = 1040913/*func_2984*/;
			break;
		case 3:
			uParam0->f_34 = 1040765/*func_2983*/;
			break;
		case 4:
			uParam0->f_12 = 1040752/*func_2982*/;
			break;
		case 37:
			uParam0->f_18 = 1040525/*func_2981*/;
			break;
		case 38:
			uParam0->f_9 = 1040435/*func_2980*/;
			break;
		case 39:
			uParam0->f_11 = 1040415/*func_2979*/;
			break;
		case 40:
			uParam0->f_6 = 1040310/*func_2978*/;
			break;
		case 41:
			uParam0->f_20 = 1040285/*func_2977*/;
			break;
		case 42:
			uParam0->f_10 = 1040272/*func_2976*/;
			break;
		case 6:
			uParam0->f_32 = 1040208/*func_2975*/;
			break;
		case 11:
			uParam0->f_11 = 1040199/*func_2974*/;
			break;
		case 12:
			uParam0->f_33 = 1039662/*func_2970*/;
			break;
		case 14:
			uParam0->f_11 = 1039653/*func_2969*/;
			break;
		case 109:
			uParam0->f_56 = 1038686/*func_2967*/;
			break;
		case 8:
			uParam0->f_37 = 1038678/*func_2966*/;
			break;
		case 7:
			uParam0->f_36 = 1038669/*func_2965*/;
			break;
		case 79:
			*uParam0 = 1038660/*func_2964*/;
			break;
		case 13:
			uParam0->f_2 = 1038598/*func_2963*/;
			break;
		case 15:
			uParam0->f_2 = 1038517/*func_2962*/;
			break;
		case 16:
			uParam0->f_5 = 1038190/*func_2961*/;
			break;
		case 108:
			uParam0->f_55 = 1038181/*func_2960*/;
			break;
		case 17:
			uParam0->f_17 = 1038169/*func_2959*/;
			break;
		case 19:
			uParam0->f_17 = 1038157/*func_2958*/;
			break;
		case 18:
			uParam0->f_8 = 1038115/*func_2956*/;
			break;
		case 20:
			uParam0->f_3 = 1038106/*func_2955*/;
			break;
		case 21:
			uParam0->f_3 = 1038058/*func_2954*/;
			break;
		case 74:
			uParam0->f_53 = 1038003/*func_2953*/;
			break;
		case 75:
			uParam0->f_4 = 1037994/*func_2952*/;
			break;
		case 22:
			uParam0->f_24 = 1037887/*func_2951*/;
			break;
		case 23:
			uParam0->f_26 = 1037879/*func_2950*/;
			break;
		case 25:
			uParam0->f_23 = 1037452/*func_2947*/;
			break;
		case 27:
			uParam0->f_25 = 1037444/*func_2946*/;
			break;
		case 28:
			uParam0->f_24 = 1037436/*func_2945*/;
			break;
		case 30:
			uParam0->f_8 = 1037401/*func_2944*/;
			break;
		case 31:
			uParam0->f_39 = 1037371/*func_2943*/;
			break;
		case 33:
			uParam0->f_40 = 1037204/*func_2942*/;
			break;
		case 76:
			uParam0->f_13 = 1037181/*func_2941*/;
			break;
		case 34:
			uParam0->f_41 = 1033567/*func_2938*/;
			break;
		case 36:
			uParam0->f_58 = 1033522/*func_2937*/;
			break;
		case 35:
			uParam0->f_42 = 1030326/*func_2933*/;
			break;
		case 45:
			uParam0->f_14 = 1030317/*func_2932*/;
			break;
		case 46:
			uParam0->f_14 = 1030308/*func_2931*/;
			break;
		case 110:
			uParam0->f_57 = 1030300/*func_2930*/;
			break;
		case 77:
			uParam0->f_13 = 1030289/*func_2929*/;
			break;
		case 47:
			uParam0->f_43 = 1030118/*func_2928*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1028845/*func_2920*/;
			break;
		case 49:
			uParam0->f_8 = 1028836/*func_2919*/;
			break;
		case 50:
			*uParam0 = 1028411/*func_2912*/;
			break;
		case 51:
			*uParam0 = 1028402/*func_2911*/;
			break;
		case 52:
			uParam0->f_15 = 1028391/*func_2910*/;
			break;
		case 53:
			uParam0->f_13 = 1028368/*func_2909*/;
			break;
		case 54:
			uParam0->f_45 = 1028360/*func_2908*/;
			break;
		case 56:
			uParam0->f_46 = 1028351/*func_2907*/;
			break;
		case 57:
			uParam0->f_11 = 1028338/*func_2906*/;
			break;
		case 58:
			uParam0->f_13 = 1028296/*func_2905*/;
			break;
		case 59:
			*uParam0 = 1028287/*func_2904*/;
			break;
		case 60:
			*uParam0 = 1028278/*func_2903*/;
			break;
		case 61:
			uParam0->f_15 = 1028267/*func_2902*/;
			break;
		case 62:
			uParam0->f_13 = 1028256/*func_2901*/;
			break;
		case 63:
			uParam0->f_11 = 1028247/*func_2900*/;
			break;
		case 64:
			uParam0->f_47 = 1028239/*func_2899*/;
			break;
		case 65:
			uParam0->f_21 = 1028231/*func_2898*/;
			break;
		case 66:
			uParam0->f_21 = 1027618/*func_2895*/;
			break;
		case 67:
			uParam0->f_21 = 1027548/*func_2894*/;
			break;
		case 68:
			*uParam0 = 1026859/*func_2893*/;
			break;
		case 69:
			*uParam0 = 1026850/*func_2892*/;
			break;
		case 70:
			uParam0->f_48 = 1026838/*func_2891*/;
			break;
		case 71:
			uParam0->f_49 = 1026829/*func_2890*/;
			break;
		case 107:
			uParam0->f_50 = 1026817/*func_2889*/;
			break;
		case 80:
			uParam0->f_7 = 1026808/*func_2888*/;
			break;
		case 84:
			uParam0->f_1 = 1026799/*func_2887*/;
			break;
		case 85:
			uParam0->f_1 = 1026790/*func_2886*/;
			break;
		case 87:
			uParam0->f_1 = 1026781/*func_2885*/;
			break;
		case 88:
			uParam0->f_1 = 1026772/*func_2884*/;
			break;
		case 89:
			uParam0->f_54 = 1026764/*func_2883*/;
			break;
		case 96:
			uParam0->f_1 = 1026755/*func_2882*/;
			break;
		case 97:
			uParam0->f_1 = 1026746/*func_2881*/;
			break;
		case 98:
			uParam0->f_1 = 1026737/*func_2880*/;
			break;
		case 100:
			uParam0->f_22 = 1026729/*func_2879*/;
			break;
		case 101:
			uParam0->f_22 = 1026721/*func_2878*/;
			break;
		case 112:
			uParam0->f_13 = 1026709/*func_2877*/;
			break;
		case 113:
			uParam0->f_3 = 1026700/*func_2876*/;
			break;
		case 114:
			uParam0->f_16 = 932757/*func_2501*/;
			break;
		case 115:
			uParam0->f_3 = 1026691/*func_2875*/;
			break;
		case 116:
			*uParam0 = 1026682/*func_2874*/;
			break;
		case 117:
			uParam0->f_16 = 986266/*func_2705*/;
			break;
		case 78:
			uParam0->f_59 = 1026674/*func_2873*/;
			break;
		case 124:
			uParam0->f_1 = 1026665/*func_2872*/;
			break;
		case 125:
			uParam0->f_19 = 1026657/*func_2871*/;
			break;
	}
}

void func_2920(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0xFB2ED
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
		if (__LIB_4__::func_655(PLAYER::PLAYER_ID(), 148, uVar3, 1))
		{
			bVar1 = false;
			bVar2 = false;
		}
		else
		{
			func_2266(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar1, &bVar2, 1, 1);
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
		iVar5 = __LIB_8__::func_162(__LIB_2__::func_444(4, iParam3));
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

void func_2947(int iParam0, int iParam1)//Position - 0xFD48C
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	int iVar3;
	if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar3 = __LIB_2__::func_399();
		Var2 = { __LIB_2__::func_640(iParam0, iVar3) };
		func_2266(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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
			__LIB_8__::func_5(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_8__::func_5(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_857();
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_857();
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2991(var uParam0, int iParam1)//Position - 0xFE421
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1138776/*func_3296*/;
			break;
		case 1:
			uParam0->f_30 = 1138720/*func_3295*/;
			break;
		case 2:
			uParam0->f_31 = 1138058/*func_3293*/;
			break;
		case 3:
			uParam0->f_34 = 1137931/*func_3292*/;
			break;
		case 4:
			uParam0->f_12 = 1137897/*func_3291*/;
			break;
		case 5:
			uParam0->f_11 = 1137886/*func_3290*/;
			break;
		case 6:
			uParam0->f_32 = 1137822/*func_3289*/;
			break;
		case 111:
			uParam0->f_35 = 1137799/*func_3288*/;
			break;
		case 79:
			*uParam0 = 1137790/*func_3287*/;
			break;
		case 37:
			uParam0->f_18 = 1137670/*func_3286*/;
			break;
		case 38:
			uParam0->f_9 = 1137573/*func_3284*/;
			break;
		case 11:
			uParam0->f_11 = 1137564/*func_3283*/;
			break;
		case 12:
			uParam0->f_33 = 1137174/*func_3281*/;
			break;
		case 109:
			uParam0->f_56 = 1136864/*func_3280*/;
			break;
		case 15:
			uParam0->f_2 = 1135023/*func_3270*/;
			break;
		case 13:
			uParam0->f_2 = 1135014/*func_3269*/;
			break;
		case 75:
			uParam0->f_4 = 1135005/*func_3268*/;
			break;
		case 16:
			uParam0->f_5 = 1134622/*func_3265*/;
			break;
		case 108:
			uParam0->f_55 = 1130704/*func_3247*/;
			break;
		case 17:
			uParam0->f_17 = 1129960/*func_3244*/;
			break;
		case 19:
			uParam0->f_17 = 1129933/*func_3243*/;
			break;
		case 20:
			uParam0->f_3 = 1129764/*func_3242*/;
			break;
		case 21:
			uParam0->f_3 = 1129701/*func_3241*/;
			break;
		case 74:
			uParam0->f_53 = 1129549/*func_3240*/;
			break;
		case 22:
			uParam0->f_24 = 1129464/*func_3239*/;
			break;
		case 25:
			uParam0->f_23 = 1128593/*func_3236*/;
			break;
		case 30:
			uParam0->f_8 = 1127265/*func_3230*/;
			break;
		case 31:
			uParam0->f_39 = 1126679/*func_3227*/;
			break;
		case 33:
			uParam0->f_40 = 1125482/*func_3223*/;
			break;
		case 14:
			uParam0->f_11 = 1125473/*func_3222*/;
			break;
		case 34:
			uParam0->f_41 = 1122706/*func_3219*/;
			break;
		case 36:
			uParam0->f_58 = 1122653/*func_3218*/;
			break;
		case 35:
			uParam0->f_42 = 1117201/*func_3214*/;
			break;
		case 45:
			uParam0->f_14 = 1117192/*func_3213*/;
			break;
		case 46:
			uParam0->f_14 = 1117183/*func_3212*/;
			break;
		case 110:
			uParam0->f_57 = 1117175/*func_3211*/;
			break;
		case 77:
			uParam0->f_13 = 1117152/*func_3210*/;
			break;
		case 47:
			uParam0->f_43 = 1117100/*func_3209*/;
			break;
		case 49:
			uParam0->f_8 = 1117075/*func_3208*/;
			break;
		case 50:
			*uParam0 = 1117037/*func_3207*/;
			break;
		case 51:
			*uParam0 = 1116995/*func_3205*/;
			break;
		case 52:
			uParam0->f_15 = 1116984/*func_3204*/;
			break;
		case 53:
			uParam0->f_13 = 1116905/*func_3203*/;
			break;
		case 54:
			uParam0->f_45 = 1116897/*func_3202*/;
			break;
		case 56:
			uParam0->f_46 = 1116888/*func_3201*/;
			break;
		case 57:
			uParam0->f_11 = 1116878/*func_3200*/;
			break;
		case 58:
			uParam0->f_13 = 1116631/*func_3199*/;
			break;
		case 64:
			uParam0->f_47 = 1115636/*func_3195*/;
			break;
		case 65:
			uParam0->f_21 = 1114443/*func_3190*/;
			break;
		case 66:
			uParam0->f_21 = 1113383/*func_3181*/;
			break;
		case 67:
			uParam0->f_21 = 1113207/*func_3179*/;
			break;
		case 68:
			*uParam0 = 1111683/*func_3171*/;
			break;
		case 69:
			*uParam0 = 1111674/*func_3170*/;
			break;
		case 70:
			uParam0->f_48 = 1111662/*func_3169*/;
			break;
		case 71:
			uParam0->f_49 = 1111653/*func_3168*/;
			break;
		case 107:
			uParam0->f_50 = 1111641/*func_3167*/;
			break;
		case 80:
			uParam0->f_7 = 1110808/*func_3161*/;
			break;
		case 73:
			uParam0->f_51 = 1110799/*func_3160*/;
			break;
		case 84:
			uParam0->f_1 = 1110127/*func_3158*/;
			break;
		case 85:
			uParam0->f_1 = 1109254/*func_3150*/;
			break;
		case 87:
			uParam0->f_1 = 1108041/*func_3141*/;
			break;
		case 88:
			uParam0->f_1 = 1108021/*func_3140*/;
			break;
		case 89:
			uParam0->f_54 = 1107927/*func_3139*/;
			break;
		case 90:
			uParam0->f_1 = 1107796/*func_3136*/;
			break;
		case 91:
			uParam0->f_1 = 1107150/*func_3135*/;
			break;
		case 92:
			uParam0->f_1 = 1106382/*func_3132*/;
			break;
		case 94:
			uParam0->f_1 = 1105829/*func_3131*/;
			break;
		case 95:
			uParam0->f_22 = 1105233/*func_3126*/;
			break;
		case 18:
			uParam0->f_8 = 1104875/*func_3122*/;
			break;
		case 96:
			uParam0->f_1 = 1104782/*func_3121*/;
			break;
		case 97:
			uParam0->f_1 = 1103914/*func_3116*/;
			break;
		case 98:
			uParam0->f_1 = 1048052/*func_3045*/;
			break;
		case 100:
			uParam0->f_22 = 1044767/*func_3023*/;
			break;
		case 101:
			uParam0->f_22 = 1043604/*func_3010*/;
			break;
		case 78:
			uParam0->f_59 = 1043396/*func_3007*/;
			break;
		case 104:
			uParam0->f_1 = 1042956/*func_2999*/;
			break;
		case 102:
			uParam0->f_1 = 1042947/*func_2998*/;
			break;
		case 103:
			uParam0->f_22 = 1042835/*func_2993*/;
			break;
		case 81:
			*uParam0 = 1042792/*func_2992*/;
			break;
	}
}

int func_3045(var uParam0, var uParam1)//Position - 0xFFDF4
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
		func_3061(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 1);
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
			func_2080(&iVar9, &(uParam1->f_109), 4);
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
		if (__LIB_7__::func_826())
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

int func_3061(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x1008B8
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_2075(uParam0, iVar0, bParam2, bParam3))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (!func_3062(uParam0, bParam1))
		{
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
	}
	return 1;
}

int func_3062(var uParam0, bool bParam1)//Position - 0x100916
{
	int iVar0;
	struct<10> Var1;
	if (__LIB_4__::func_11(bParam1))
	{
		iVar0 = __LIB_25__::func_147(bParam1);
		Var1.f_1 = -1;
		Var1.f_2 = -1;
		Var1.f_3 = -1;
		Var1.f_4 = -1;
		Var1.f_8 = -1;
		Var1.f_9 = 50;
		Var1.f_0 = *uParam0;
		Var1.f_6 = 1;
		func_3066(&Var1, __LIB_2__::func_262(iVar0), 0, 1, 1, !__LIB_18__::func_523(), 0, __LIB_25__::func_207(), __LIB_2__::func_685(__LIB_6__::func_133(bParam1), 0), __LIB_2__::func_261(iVar0));
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(bParam1, 0), false);
		if (GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(bParam1, 0), __LIB_7__::func_827(bParam1, 2)))
		{
		}
		return 1;
	}
	return 0;
}

int func_3066(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x100A37
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
													GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), __LIB_7__::func_827(PLAYER::PLAYER_ID(), 2));
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
									__LIB_18__::func_858(PLAYER::PLAYER_ID(), -1, -1);
								}
								if (!func_2077(*uParam0))
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
										func_3075(*uParam0, uParam0->f_3, uParam0->f_8);
									}
									if ((uParam0->f_4 != -1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										func_3075(*uParam0, uParam0->f_4, uParam0->f_8);
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
										func_1746(*uParam0);
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
											func_1643(*uParam0, 14, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
											func_1643(*uParam0, 2, Global_2689235[uParam0->f_8 /*453*/].f_248, 0, -1, 0, 0, iVar20, iVar18, iVar19, uParam0->f_8, 1, 0, 0);
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
												func_1643(*uParam0, 2, iVar21, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
											else
											{
												iVar23 = __LIB_1__::func_556(753, -1, 0);
												func_1643(*uParam0, 2, iVar23, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
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
									func_3069(*uParam0, &(Global_1886249[uParam0->f_8 /*51*/]), bVar24, iVar25);
								}
								else
								{
									func_1693(*uParam0, bVar24, 0, iVar25);
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
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), __LIB_7__::func_827(PLAYER::PLAYER_ID(), 2));
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
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), __LIB_7__::func_827(PLAYER::PLAYER_ID(), 2));
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

void func_3069(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x102026
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
		bVar2 = func_1726(iParam0, 0);
		bVar3 = __LIB_31__::func_887(iParam0);
		bVar4 = func_1719(iParam0, iParam3);
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

void func_3075(int iParam0, int iParam1, int iParam2)//Position - 0x1025CC
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
			func_3076(iParam0);
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
					if (__LIB_7__::func_241(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_1760(iParam0, 7, -1), -1))
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

void func_3076(int iParam0)//Position - 0x1027D8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_25__::func_111(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_3077(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_3077(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x10286D
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
					func_1643(iParam0, 2, __LIB_1__::func_556(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_1643(iParam0, 2, __LIB_1__::func_556(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

int func_3132(var uParam0, var uParam1)//Position - 0x10E1CE
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
			func_2080(&iVar2, &(uParam1->f_109), 4);
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
			func_3061(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0);
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

int func_3150(int iParam0, var uParam1)//Position - 0x10ED06
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
	if (__LIB_35__::func_740())
	{
		return 1;
	}
	iVar0 = __LIB_2__::func_399();
	iVar1 = __LIB_6__::func_134();
	Var2 = { __LIB_18__::func_669(iParam0, iVar0) };
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
	{
		if (func_3061(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_2, __LIB_2__::func_702(iParam0, iVar0, iVar1), false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam1->f_2, __LIB_7__::func_828(iParam0, iVar0));
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		func_2080(&iVar1, &(uParam1->f_109), 32);
		__LIB_2__::func_416(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var2, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, __LIB_18__::func_668(iParam0, iVar0));
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

void func_3236(int iParam0, int iParam1)//Position - 0x113891
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
	if (__LIB_25__::func_597(PLAYER::PLAYER_ID(), iParam0))
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
								if (((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_701(bVar7)) && !__LIB_2__::func_509(bVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_3__::func_999(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_701(bVar7)) && !__LIB_2__::func_509(bVar7, 14))
						{
							bVar1 = true;
						}
						if (!bVar1 && __LIB_3__::func_999(bVar7, PLAYER::PLAYER_ID()))
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
						__LIB_25__::func_595(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_595(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_664(1);
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3237(iParam0, 0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_664(1);
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3237(iParam0, 0);
					}
					Jump @652; //curOff = 633
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_3237(int iParam0, bool bParam1)//Position - 0x113B20
{
	__LIB_25__::func_595(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
	if (bParam1)
	{
		__LIB_7__::func_394(2);
	}
}

void func_3297(var uParam0, int iParam1)//Position - 0x116061
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1159812/*func_3415*/;
			break;
		case 111:
			uParam0->f_35 = 1159803/*func_3414*/;
			break;
		case 1:
			uParam0->f_30 = 1159735/*func_3412*/;
			break;
		case 2:
			uParam0->f_31 = 1159407/*func_3409*/;
			break;
		case 3:
			uParam0->f_34 = 1159246/*func_3408*/;
			break;
		case 4:
			uParam0->f_12 = 1159233/*func_3407*/;
			break;
		case 6:
			uParam0->f_32 = 1159169/*func_3406*/;
			break;
		case 11:
			uParam0->f_11 = 1159160/*func_3405*/;
			break;
		case 12:
			uParam0->f_33 = 1158824/*func_3401*/;
			break;
		case 14:
			uParam0->f_11 = 1158815/*func_3400*/;
			break;
		case 109:
			uParam0->f_56 = 1158072/*func_3398*/;
			break;
		case 8:
			uParam0->f_37 = 1158064/*func_3397*/;
			break;
		case 7:
			uParam0->f_36 = 1158055/*func_3396*/;
			break;
		case 79:
			*uParam0 = 1158046/*func_3395*/;
			break;
		case 72:
			uParam0->f_12 = 1158033/*func_3394*/;
			break;
		case 13:
			uParam0->f_2 = 1158024/*func_3393*/;
			break;
		case 15:
			uParam0->f_2 = 1157945/*func_3392*/;
			break;
		case 16:
			uParam0->f_5 = 1157601/*func_3391*/;
			break;
		case 108:
			uParam0->f_55 = 1157592/*func_3390*/;
			break;
		case 17:
			uParam0->f_17 = 1157061/*func_3388*/;
			break;
		case 19:
			uParam0->f_17 = 1157005/*func_3387*/;
			break;
		case 18:
			uParam0->f_8 = 1156917/*func_3385*/;
			break;
		case 20:
			uParam0->f_3 = 1156897/*func_3384*/;
			break;
		case 21:
			uParam0->f_3 = 1156870/*func_3383*/;
			break;
		case 74:
			uParam0->f_53 = 1156848/*func_3382*/;
			break;
		case 75:
			uParam0->f_4 = 1156839/*func_3381*/;
			break;
		case 22:
			uParam0->f_24 = 1156732/*func_3380*/;
			break;
		case 23:
			uParam0->f_26 = 1156724/*func_3379*/;
			break;
		case 26:
			uParam0->f_38 = 1156716/*func_3378*/;
			break;
		case 25:
			uParam0->f_23 = 1155955/*func_3374*/;
			break;
		case 27:
			uParam0->f_25 = 1155947/*func_3373*/;
			break;
		case 28:
			uParam0->f_24 = 1155939/*func_3372*/;
			break;
		case 30:
			uParam0->f_8 = 1155828/*func_3371*/;
			break;
		case 31:
			uParam0->f_39 = 1155778/*func_3370*/;
			break;
		case 33:
			uParam0->f_40 = 1155709/*func_3369*/;
			break;
		case 76:
			uParam0->f_13 = 1155686/*func_3368*/;
			break;
		case 34:
			uParam0->f_41 = 1151613/*func_3365*/;
			break;
		case 36:
			uParam0->f_58 = 1151556/*func_3364*/;
			break;
		case 35:
			uParam0->f_42 = 1145334/*func_3355*/;
			break;
		case 45:
			uParam0->f_14 = 1145325/*func_3354*/;
			break;
		case 46:
			uParam0->f_14 = 1145316/*func_3353*/;
			break;
		case 110:
			uParam0->f_57 = 1145308/*func_3352*/;
			break;
		case 77:
			uParam0->f_13 = 1145297/*func_3351*/;
			break;
		case 47:
			uParam0->f_43 = 1145184/*func_3350*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1144211/*func_3345*/;
			break;
		case 49:
			uParam0->f_8 = 1144202/*func_3344*/;
			break;
		case 50:
			*uParam0 = 1143865/*func_3339*/;
			break;
		case 51:
			*uParam0 = 1143856/*func_3338*/;
			break;
		case 52:
			uParam0->f_15 = 1143846/*func_3337*/;
			break;
		case 53:
			uParam0->f_13 = 1143823/*func_3336*/;
			break;
		case 54:
			uParam0->f_45 = 1143327/*func_3334*/;
			break;
		case 56:
			uParam0->f_46 = 1143318/*func_3333*/;
			break;
		case 57:
			uParam0->f_11 = 1143309/*func_3332*/;
			break;
		case 58:
			uParam0->f_13 = 1143267/*func_3331*/;
			break;
		case 59:
			*uParam0 = 1143258/*func_3330*/;
			break;
		case 60:
			*uParam0 = 1143249/*func_3329*/;
			break;
		case 61:
			uParam0->f_15 = 1143238/*func_3328*/;
			break;
		case 62:
			uParam0->f_13 = 1143227/*func_3327*/;
			break;
		case 63:
			uParam0->f_11 = 1143218/*func_3326*/;
			break;
		case 64:
			uParam0->f_47 = 1143210/*func_3325*/;
			break;
		case 65:
			uParam0->f_21 = 1143202/*func_3324*/;
			break;
		case 66:
			uParam0->f_21 = 1142892/*func_3323*/;
			break;
		case 67:
			uParam0->f_21 = 1142822/*func_3322*/;
			break;
		case 68:
			*uParam0 = 1142133/*func_3321*/;
			break;
		case 69:
			*uParam0 = 1142124/*func_3320*/;
			break;
		case 70:
			uParam0->f_48 = 1142112/*func_3319*/;
			break;
		case 71:
			uParam0->f_49 = 1142103/*func_3318*/;
			break;
		case 107:
			uParam0->f_50 = 1142091/*func_3317*/;
			break;
		case 80:
			uParam0->f_7 = 1142082/*func_3316*/;
			break;
		case 84:
			uParam0->f_1 = 1142073/*func_3315*/;
			break;
		case 85:
			uParam0->f_1 = 1142064/*func_3314*/;
			break;
		case 87:
			uParam0->f_1 = 1142055/*func_3313*/;
			break;
		case 88:
			uParam0->f_1 = 1142046/*func_3312*/;
			break;
		case 89:
			uParam0->f_54 = 1142038/*func_3311*/;
			break;
		case 96:
			uParam0->f_1 = 1142013/*func_3310*/;
			break;
		case 97:
			uParam0->f_1 = 1141903/*func_3309*/;
			break;
		case 98:
			uParam0->f_1 = 1141186/*func_3308*/;
			break;
		case 100:
			uParam0->f_22 = 1140484/*func_3306*/;
			break;
		case 101:
			uParam0->f_22 = 1140356/*func_3305*/;
			break;
		case 112:
			uParam0->f_13 = 1140344/*func_3304*/;
			break;
		case 113:
			uParam0->f_3 = 1140335/*func_3303*/;
			break;
		case 114:
			uParam0->f_16 = 932757/*func_2501*/;
			break;
		case 115:
			uParam0->f_3 = 1140326/*func_3302*/;
			break;
		case 116:
			*uParam0 = 1140317/*func_3301*/;
			break;
		case 117:
			uParam0->f_16 = 986266/*func_2705*/;
			break;
		case 78:
			uParam0->f_59 = 1140309/*func_3300*/;
			break;
		case 124:
			uParam0->f_1 = 1140300/*func_3299*/;
			break;
		case 125:
			uParam0->f_19 = 1140292/*func_3298*/;
			break;
	}
}

int func_3308(var uParam0, var uParam1)//Position - 0x1169C2
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
		func_3061(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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
	__LIB_25__::func_112(PLAYER::PLAYER_ID(), 0, 262144, 0);
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

void func_3374(int iParam0, int iParam1)//Position - 0x11A373
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
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_701(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(bVar7, 14)) && !func_2267(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_999(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_701(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(bVar7, 14)) && !func_2267(bVar7))
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
						__LIB_8__::func_9(iParam0, -1);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						__LIB_18__::func_860(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						__LIB_18__::func_860(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if ((!bVar1 && !bVar0) && !func_3375())
					{
						MISC::SET_BIT(&(iParam1->f_2), 5);
						MISC::SET_BIT(&(iParam1->f_2), 6);
					}
					Jump @651; //curOff = 632
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
bool func_3375()//Position - 0x11A601
{
	return BitTest(Global_1946250.f_3, 2);
}

void func_3416(var uParam0, int iParam1)//Position - 0x11B28D
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1168138/*func_3509*/;
			break;
		case 111:
			uParam0->f_35 = 1168129/*func_3508*/;
			break;
		case 1:
			uParam0->f_30 = 1168057/*func_3506*/;
			break;
		case 2:
			uParam0->f_31 = 1167818/*func_3503*/;
			break;
		case 3:
			uParam0->f_34 = 1167767/*func_3502*/;
			break;
		case 4:
			uParam0->f_12 = 1167754/*func_3501*/;
			break;
		case 6:
			uParam0->f_32 = 1167690/*func_3500*/;
			break;
		case 11:
			uParam0->f_11 = 1167681/*func_3499*/;
			break;
		case 12:
			uParam0->f_33 = 1167241/*func_3495*/;
			break;
		case 14:
			uParam0->f_11 = 1167232/*func_3494*/;
			break;
		case 109:
			uParam0->f_56 = 1166551/*func_3492*/;
			break;
		case 8:
			uParam0->f_37 = 1166543/*func_3491*/;
			break;
		case 7:
			uParam0->f_36 = 1166534/*func_3490*/;
			break;
		case 79:
			*uParam0 = 1166525/*func_3489*/;
			break;
		case 13:
			uParam0->f_2 = 1166463/*func_3488*/;
			break;
		case 15:
			uParam0->f_2 = 1166383/*func_3487*/;
			break;
		case 16:
			uParam0->f_5 = 1166014/*func_3485*/;
			break;
		case 108:
			uParam0->f_55 = 1166005/*func_3484*/;
			break;
		case 17:
			uParam0->f_17 = 1165993/*func_3483*/;
			break;
		case 19:
			uParam0->f_17 = 1165981/*func_3482*/;
			break;
		case 20:
			uParam0->f_3 = 1165972/*func_3481*/;
			break;
		case 21:
			uParam0->f_3 = 1165963/*func_3480*/;
			break;
		case 74:
			uParam0->f_53 = 1165941/*func_3479*/;
			break;
		case 75:
			uParam0->f_4 = 1165932/*func_3478*/;
			break;
		case 22:
			uParam0->f_24 = 1165920/*func_3477*/;
			break;
		case 23:
			uParam0->f_26 = 1165912/*func_3476*/;
			break;
		case 26:
			uParam0->f_38 = 1165904/*func_3475*/;
			break;
		case 25:
			uParam0->f_23 = 1165896/*func_3474*/;
			break;
		case 27:
			uParam0->f_25 = 1165888/*func_3473*/;
			break;
		case 28:
			uParam0->f_24 = 1165880/*func_3472*/;
			break;
		case 30:
			uParam0->f_8 = 1165845/*func_3471*/;
			break;
		case 31:
			uParam0->f_39 = 1165815/*func_3470*/;
			break;
		case 33:
			uParam0->f_40 = 1165745/*func_3469*/;
			break;
		case 76:
			uParam0->f_13 = 1165722/*func_3468*/;
			break;
		case 34:
			uParam0->f_41 = 1165626/*func_3467*/;
			break;
		case 36:
			uParam0->f_58 = 1165581/*func_3466*/;
			break;
		case 35:
			uParam0->f_42 = 1163067/*func_3464*/;
			break;
		case 45:
			uParam0->f_14 = 1163058/*func_3463*/;
			break;
		case 46:
			uParam0->f_14 = 1163049/*func_3462*/;
			break;
		case 110:
			uParam0->f_57 = 1163041/*func_3461*/;
			break;
		case 77:
			uParam0->f_13 = 1163030/*func_3460*/;
			break;
		case 47:
			uParam0->f_43 = 1162988/*func_3459*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1162880/*func_3458*/;
			break;
		case 49:
			uParam0->f_8 = 1162871/*func_3457*/;
			break;
		case 50:
			*uParam0 = 1162668/*func_3456*/;
			break;
		case 51:
			*uParam0 = 1162659/*func_3455*/;
			break;
		case 52:
			uParam0->f_15 = 1162648/*func_3454*/;
			break;
		case 53:
			uParam0->f_13 = 1162625/*func_3453*/;
			break;
		case 54:
			uParam0->f_45 = 1162617/*func_3452*/;
			break;
		case 56:
			uParam0->f_46 = 1162608/*func_3451*/;
			break;
		case 57:
			uParam0->f_11 = 1162595/*func_3450*/;
			break;
		case 58:
			uParam0->f_13 = 1162553/*func_3449*/;
			break;
		case 59:
			*uParam0 = 1162544/*func_3448*/;
			break;
		case 60:
			*uParam0 = 1162535/*func_3447*/;
			break;
		case 61:
			uParam0->f_15 = 1162524/*func_3446*/;
			break;
		case 62:
			uParam0->f_13 = 1162513/*func_3445*/;
			break;
		case 63:
			uParam0->f_11 = 1162504/*func_3444*/;
			break;
		case 64:
			uParam0->f_47 = 1162496/*func_3443*/;
			break;
		case 65:
			uParam0->f_21 = 1162488/*func_3442*/;
			break;
		case 66:
			uParam0->f_21 = 1162255/*func_3441*/;
			break;
		case 67:
			uParam0->f_21 = 1162185/*func_3440*/;
			break;
		case 68:
			*uParam0 = 1161496/*func_3439*/;
			break;
		case 69:
			*uParam0 = 1161487/*func_3438*/;
			break;
		case 70:
			uParam0->f_48 = 1161475/*func_3437*/;
			break;
		case 71:
			uParam0->f_49 = 1161466/*func_3436*/;
			break;
		case 107:
			uParam0->f_50 = 1161454/*func_3435*/;
			break;
		case 80:
			uParam0->f_7 = 1161445/*func_3434*/;
			break;
		case 84:
			uParam0->f_1 = 1161436/*func_3433*/;
			break;
		case 85:
			uParam0->f_1 = 1161427/*func_3432*/;
			break;
		case 87:
			uParam0->f_1 = 1161418/*func_3431*/;
			break;
		case 88:
			uParam0->f_1 = 1161409/*func_3430*/;
			break;
		case 89:
			uParam0->f_54 = 1161401/*func_3429*/;
			break;
		case 96:
			uParam0->f_1 = 1161392/*func_3428*/;
			break;
		case 97:
			uParam0->f_1 = 1161383/*func_3427*/;
			break;
		case 98:
			uParam0->f_1 = 1161374/*func_3426*/;
			break;
		case 100:
			uParam0->f_22 = 1161366/*func_3425*/;
			break;
		case 101:
			uParam0->f_22 = 1161358/*func_3424*/;
			break;
		case 112:
			uParam0->f_13 = 1161346/*func_3423*/;
			break;
		case 113:
			uParam0->f_3 = 1161337/*func_3422*/;
			break;
		case 114:
			uParam0->f_16 = 932757/*func_2501*/;
			break;
		case 115:
			uParam0->f_3 = 1161328/*func_3421*/;
			break;
		case 116:
			*uParam0 = 1161319/*func_3420*/;
			break;
		case 117:
			uParam0->f_16 = 986266/*func_2705*/;
			break;
		case 78:
			uParam0->f_59 = 1161311/*func_3419*/;
			break;
		case 124:
			uParam0->f_1 = 1161302/*func_3418*/;
			break;
		case 125:
			uParam0->f_19 = 1161294/*func_3417*/;
			break;
	}
}

void func_3510(var uParam0, int iParam1)//Position - 0x11D313
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1245275/*func_3725*/;
			break;
		case 111:
			uParam0->f_35 = 1245261/*func_3724*/;
			break;
		case 1:
			uParam0->f_30 = 1245104/*func_3722*/;
			break;
		case 2:
			uParam0->f_31 = 1244622/*func_3718*/;
			break;
		case 3:
			uParam0->f_34 = 1244423/*func_3717*/;
			break;
		case 4:
			uParam0->f_12 = 1244301/*func_3716*/;
			break;
		case 5:
			uParam0->f_11 = 1244291/*func_3715*/;
			break;
		case 37:
			uParam0->f_18 = 1244153/*func_3714*/;
			break;
		case 38:
			uParam0->f_9 = 1244108/*func_3713*/;
			break;
		case 42:
			uParam0->f_10 = 1244024/*func_3711*/;
			break;
		case 6:
			uParam0->f_32 = 1243930/*func_3710*/;
			break;
		case 11:
			uParam0->f_11 = 1243921/*func_3709*/;
			break;
		case 12:
			uParam0->f_33 = 1242743/*func_3705*/;
			break;
		case 14:
			uParam0->f_11 = 1242734/*func_3704*/;
			break;
		case 109:
			uParam0->f_56 = 1236076/*func_3702*/;
			break;
		case 8:
			uParam0->f_37 = 1235776/*func_3701*/;
			break;
		case 7:
			uParam0->f_36 = 1235719/*func_3700*/;
			break;
		case 79:
			*uParam0 = 1235475/*func_3698*/;
			break;
		case 13:
			uParam0->f_2 = 1235413/*func_3697*/;
			break;
		case 15:
			uParam0->f_2 = 1235333/*func_3696*/;
			break;
		case 16:
			uParam0->f_5 = 1234613/*func_3694*/;
			break;
		case 108:
			uParam0->f_55 = 1231421/*func_3682*/;
			break;
		case 17:
			uParam0->f_17 = 1229153/*func_3680*/;
			break;
		case 19:
			uParam0->f_17 = 1229126/*func_3679*/;
			break;
		case 20:
			uParam0->f_3 = 1228950/*func_3678*/;
			break;
		case 21:
			uParam0->f_3 = 1228886/*func_3677*/;
			break;
		case 74:
			uParam0->f_53 = 1228782/*func_3676*/;
			break;
		case 75:
			uParam0->f_4 = 1228766/*func_3675*/;
			break;
		case 22:
			uParam0->f_24 = 1228659/*func_3674*/;
			break;
		case 23:
			uParam0->f_26 = 1228612/*func_3673*/;
			break;
		case 24:
			uParam0->f_26 = 1228575/*func_3672*/;
			break;
		case 26:
			uParam0->f_38 = 1226530/*func_3660*/;
			break;
		case 25:
			uParam0->f_23 = 1226208/*func_3658*/;
			break;
		case 30:
			uParam0->f_8 = 1225351/*func_3656*/;
			break;
		case 31:
			uParam0->f_39 = 1225213/*func_3655*/;
			break;
		case 33:
			uParam0->f_40 = 1224641/*func_3654*/;
			break;
		case 32:
			*uParam0 = 1224427/*func_3650*/;
			break;
		case 34:
			uParam0->f_41 = 1221941/*func_3648*/;
			break;
		case 36:
			uParam0->f_58 = 1221884/*func_3647*/;
			break;
		case 35:
			uParam0->f_42 = 1194920/*func_3644*/;
			break;
		case 45:
			uParam0->f_14 = 1194911/*func_3643*/;
			break;
		case 46:
			uParam0->f_14 = 1194902/*func_3642*/;
			break;
		case 110:
			uParam0->f_57 = 1194894/*func_3641*/;
			break;
		case 77:
			uParam0->f_13 = 1194871/*func_3640*/;
			break;
		case 47:
			uParam0->f_43 = 1194799/*func_3638*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1194671/*func_3637*/;
			break;
		case 49:
			uParam0->f_8 = 1194645/*func_3636*/;
			break;
		case 50:
			*uParam0 = 1193958/*func_3632*/;
			break;
		case 51:
			*uParam0 = 1193796/*func_3631*/;
			break;
		case 52:
			uParam0->f_15 = 1193785/*func_3630*/;
			break;
		case 53:
			uParam0->f_13 = 1193623/*func_3629*/;
			break;
		case 54:
			uParam0->f_45 = 1193137/*func_3623*/;
			break;
		case 56:
			uParam0->f_46 = 1193119/*func_3622*/;
			break;
		case 57:
			uParam0->f_11 = 1192867/*func_3621*/;
			break;
		case 58:
			uParam0->f_13 = 1192705/*func_3620*/;
			break;
		case 59:
			*uParam0 = 1192209/*func_3613*/;
			break;
		case 60:
			*uParam0 = 1192194/*func_3612*/;
			break;
		case 61:
			uParam0->f_15 = 1192183/*func_3611*/;
			break;
		case 62:
			uParam0->f_13 = 1192021/*func_3610*/;
			break;
		case 55:
			uParam0->f_45 = 1191842/*func_3609*/;
			break;
		case 63:
			uParam0->f_11 = 1191815/*func_3608*/;
			break;
		case 64:
			uParam0->f_47 = 1190382/*func_3601*/;
			break;
		case 65:
			uParam0->f_21 = 1188995/*func_3598*/;
			break;
		case 66:
			uParam0->f_21 = 1188636/*func_3597*/;
			break;
		case 67:
			uParam0->f_21 = 1188522/*func_3596*/;
			break;
		case 68:
			*uParam0 = 1187562/*func_3593*/;
			break;
		case 69:
			*uParam0 = 1187553/*func_3592*/;
			break;
		case 70:
			uParam0->f_48 = 1187541/*func_3591*/;
			break;
		case 71:
			uParam0->f_49 = 1186997/*func_3590*/;
			break;
		case 107:
			uParam0->f_50 = 1186985/*func_3589*/;
			break;
		case 80:
			uParam0->f_7 = 1186797/*func_3588*/;
			break;
		case 84:
			uParam0->f_1 = 1186788/*func_3587*/;
			break;
		case 85:
			uParam0->f_1 = 1185202/*func_3584*/;
			break;
		case 87:
			uParam0->f_1 = 1183684/*func_3577*/;
			break;
		case 88:
			uParam0->f_1 = 1183675/*func_3576*/;
			break;
		case 89:
			uParam0->f_54 = 1183667/*func_3575*/;
			break;
		case 96:
			uParam0->f_1 = 1183637/*func_3574*/;
			break;
		case 97:
			uParam0->f_1 = 1183192/*func_3573*/;
			break;
		case 98:
			uParam0->f_1 = 1178700/*func_3539*/;
			break;
		case 100:
			uParam0->f_22 = 1170811/*func_3524*/;
			break;
		case 101:
			uParam0->f_22 = 1169870/*func_3518*/;
			break;
		case 112:
			uParam0->f_13 = 1169859/*func_3517*/;
			break;
		case 113:
			uParam0->f_3 = 1169850/*func_3516*/;
			break;
		case 114:
			uParam0->f_16 = 1169841/*func_3515*/;
			break;
		case 117:
			uParam0->f_16 = 1169832/*func_3514*/;
			break;
		case 78:
			uParam0->f_59 = 1169660/*func_3512*/;
			break;
		case 76:
			uParam0->f_13 = 1169637/*func_3511*/;
			break;
	}
}

int func_3584(int iParam0, var uParam1)//Position - 0x1215B2
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
			func_2080(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_2074(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_3623(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x1234B1
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	bVar0 = false;
	if (!__LIB_4__::func_143(PLAYER::PLAYER_ID(), __LIB_2__::func_852(iParam0)) && !__LIB_4__::func_143(__LIB_0__::func_582(), __LIB_2__::func_852(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_264(bVar1, 1, 1) && bVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_4__::func_143(bVar1, __LIB_2__::func_852(iParam0)) && __LIB_8__::func_665(bVar1))
				{
					Var3 = { __LIB_1__::func_267(bVar1) };
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
								*iParam2 = func_3624(Var5, 0);
								HUD::SET_BLIP_SPRITE(*iParam2, iVar6);
								HUD::SET_BLIP_SCALE(*iParam2, 1f);
								HUD::SET_BLIP_PRIORITY(*iParam2, 7);
								__LIB_6__::func_958(iParam2, 18);
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
int func_3624(struct<3> Param0, bool bParam1)//Position - 0x12362A
{
	int iVar0;
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, __LIB_0__::func_316(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

void func_3658(int iParam0, int iParam1)//Position - 0x12B5E0
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_848(iParam0, 0) };
	if (__LIB_7__::func_734(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2266(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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
			__LIB_8__::func_11(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_8__::func_11(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_861(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_861(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_3660(var uParam0, var uParam1)//Position - 0x12B722
{
	if (__LIB_2__::func_399() == 3)
	{
		func_3664(uParam0, uParam1);
	}
	else if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0) && __LIB_4__::func_143(__LIB_2__::func_191(PLAYER::PLAYER_ID()), __LIB_2__::func_852(*uParam0)))
	{
		__LIB_4__::func_356(uParam0, uParam1);
	}
	else if (__LIB_2__::func_399() == 2)
	{
		func_3662(uParam0, uParam1);
	}
	else
	{
		__LIB_2__::func_868(uParam1);
	}
}

void func_3662(var uParam0, var uParam1)//Position - 0x12B7AB
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_2266(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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
			__LIB_8__::func_11(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_3664(var uParam0, var uParam1)//Position - 0x12B8C9
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_36__::func_800(uParam0, uParam1);
			break;
		case 1:
			func_3669(uParam0, uParam1);
			break;
		case 2:
			__LIB_36__::func_823(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3669(var uParam0, var uParam1)//Position - 0x12BC4C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_2266(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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
		if (__LIB_18__::func_963(*uParam0))
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
			__LIB_8__::func_11(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_3726(var uParam0, int iParam1)//Position - 0x130064
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1261511/*func_3835*/;
			break;
		case 111:
			uParam0->f_35 = 1261502/*func_3834*/;
			break;
		case 1:
			uParam0->f_30 = 1261434/*func_3832*/;
			break;
		case 2:
			uParam0->f_31 = 1260986/*func_3829*/;
			break;
		case 3:
			uParam0->f_34 = 1260881/*func_3828*/;
			break;
		case 4:
			uParam0->f_12 = 1260868/*func_3827*/;
			break;
		case 6:
			uParam0->f_32 = 1260804/*func_3826*/;
			break;
		case 11:
			uParam0->f_11 = 1260795/*func_3825*/;
			break;
		case 12:
			uParam0->f_33 = 1260334/*func_3820*/;
			break;
		case 14:
			uParam0->f_11 = 1260325/*func_3819*/;
			break;
		case 109:
			uParam0->f_56 = 1259928/*func_3817*/;
			break;
		case 8:
			uParam0->f_37 = 1259920/*func_3816*/;
			break;
		case 7:
			uParam0->f_36 = 1259911/*func_3815*/;
			break;
		case 79:
			*uParam0 = 1259887/*func_3814*/;
			break;
		case 13:
			uParam0->f_2 = 1259825/*func_3813*/;
			break;
		case 15:
			uParam0->f_2 = 1259746/*func_3812*/;
			break;
		case 16:
			uParam0->f_5 = 1259449/*func_3811*/;
			break;
		case 108:
			uParam0->f_55 = 1259440/*func_3810*/;
			break;
		case 17:
			uParam0->f_17 = 1259428/*func_3809*/;
			break;
		case 19:
			uParam0->f_17 = 1259401/*func_3808*/;
			break;
		case 20:
			uParam0->f_3 = 1259392/*func_3807*/;
			break;
		case 21:
			uParam0->f_3 = 1259383/*func_3806*/;
			break;
		case 74:
			uParam0->f_53 = 1259361/*func_3805*/;
			break;
		case 75:
			uParam0->f_4 = 1259352/*func_3804*/;
			break;
		case 22:
			uParam0->f_24 = 1259344/*func_3803*/;
			break;
		case 23:
			uParam0->f_26 = 1259336/*func_3802*/;
			break;
		case 26:
			uParam0->f_38 = 1259328/*func_3801*/;
			break;
		case 25:
			uParam0->f_23 = 1258996/*func_3798*/;
			break;
		case 27:
			uParam0->f_25 = 1258988/*func_3797*/;
			break;
		case 28:
			uParam0->f_24 = 1258980/*func_3796*/;
			break;
		case 30:
			uParam0->f_8 = 1258659/*func_3793*/;
			break;
		case 31:
			uParam0->f_39 = 1258629/*func_3792*/;
			break;
		case 33:
			uParam0->f_40 = 1258560/*func_3791*/;
			break;
		case 34:
			uParam0->f_41 = 1254828/*func_3790*/;
			break;
		case 36:
			uParam0->f_58 = 1254783/*func_3789*/;
			break;
		case 35:
			uParam0->f_42 = 1251616/*func_3786*/;
			break;
		case 45:
			uParam0->f_14 = 1251607/*func_3785*/;
			break;
		case 46:
			uParam0->f_14 = 1251598/*func_3784*/;
			break;
		case 110:
			uParam0->f_57 = 1251590/*func_3783*/;
			break;
		case 77:
			uParam0->f_13 = 1251579/*func_3782*/;
			break;
		case 47:
			uParam0->f_43 = 1251466/*func_3781*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1250343/*func_3778*/;
			break;
		case 49:
			uParam0->f_8 = 1250334/*func_3777*/;
			break;
		case 50:
			*uParam0 = 1250325/*func_3776*/;
			break;
		case 51:
			*uParam0 = 1250316/*func_3775*/;
			break;
		case 52:
			uParam0->f_15 = 1250305/*func_3774*/;
			break;
		case 53:
			uParam0->f_13 = 1250294/*func_3773*/;
			break;
		case 54:
			uParam0->f_45 = 1250286/*func_3772*/;
			break;
		case 56:
			uParam0->f_46 = 1250277/*func_3771*/;
			break;
		case 57:
			uParam0->f_11 = 1250268/*func_3770*/;
			break;
		case 58:
			uParam0->f_13 = 1250226/*func_3769*/;
			break;
		case 59:
			*uParam0 = 1250217/*func_3768*/;
			break;
		case 60:
			*uParam0 = 1250208/*func_3767*/;
			break;
		case 61:
			uParam0->f_15 = 1250197/*func_3766*/;
			break;
		case 62:
			uParam0->f_13 = 1250186/*func_3765*/;
			break;
		case 63:
			uParam0->f_11 = 1250177/*func_3764*/;
			break;
		case 64:
			uParam0->f_47 = 1250169/*func_3763*/;
			break;
		case 65:
			uParam0->f_21 = 1250161/*func_3762*/;
			break;
		case 66:
			uParam0->f_21 = 1249858/*func_3761*/;
			break;
		case 67:
			uParam0->f_21 = 1249788/*func_3760*/;
			break;
		case 68:
			*uParam0 = 1249139/*func_3759*/;
			break;
		case 69:
			*uParam0 = 1249130/*func_3758*/;
			break;
		case 70:
			uParam0->f_48 = 1249122/*func_3757*/;
			break;
		case 71:
			uParam0->f_49 = 1249113/*func_3756*/;
			break;
		case 107:
			uParam0->f_50 = 1249101/*func_3755*/;
			break;
		case 80:
			uParam0->f_7 = 1248667/*func_3754*/;
			break;
		case 18:
			uParam0->f_8 = 1248642/*func_3753*/;
			break;
		case 84:
			uParam0->f_1 = 1248625/*func_3752*/;
			break;
		case 85:
			uParam0->f_1 = 1248083/*func_3748*/;
			break;
		case 87:
			uParam0->f_1 = 1247040/*func_3739*/;
			break;
		case 88:
			uParam0->f_1 = 1247031/*func_3738*/;
			break;
		case 89:
			uParam0->f_54 = 1247023/*func_3737*/;
			break;
		case 96:
			uParam0->f_1 = 1247014/*func_3736*/;
			break;
		case 97:
			uParam0->f_1 = 1247005/*func_3735*/;
			break;
		case 98:
			uParam0->f_1 = 1246996/*func_3734*/;
			break;
		case 100:
			uParam0->f_22 = 1246988/*func_3733*/;
			break;
		case 101:
			uParam0->f_22 = 1246980/*func_3732*/;
			break;
		case 112:
			uParam0->f_13 = 1246968/*func_3731*/;
			break;
		case 113:
			uParam0->f_3 = 1246959/*func_3730*/;
			break;
		case 78:
			uParam0->f_59 = 1246656/*func_3727*/;
			break;
	}
}

int func_3748(var uParam0, var uParam1)//Position - 0x130B53
{
	return func_3749(uParam1);
}

int func_3749(var uParam0)//Position - 0x130B61
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
			func_2080(&iVar0, &(uParam0->f_109), 60);
			__LIB_2__::func_416(&(uParam0->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
			return 0;
		}
		else if (func_2074(&iVar0, &(uParam0->f_109), &(uParam0->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_3798(int iParam0, int iParam1)//Position - 0x1335F4
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
		func_2266(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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
			__LIB_8__::func_9(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_8__::func_9(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_860(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_860(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_3836(var uParam0, int iParam1)//Position - 0x133FD0
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1296672/*func_4013*/;
			break;
		case 111:
			uParam0->f_35 = 1296649/*func_4012*/;
			break;
		case 1:
			uParam0->f_30 = 1296519/*func_4010*/;
			break;
		case 2:
			uParam0->f_31 = 1295852/*func_4006*/;
			break;
		case 3:
			uParam0->f_34 = 1295589/*func_4005*/;
			break;
		case 4:
			uParam0->f_12 = 1295576/*func_4004*/;
			break;
		case 5:
			uParam0->f_11 = 1295566/*func_4003*/;
			break;
		case 37:
			uParam0->f_18 = 1295367/*func_4002*/;
			break;
		case 38:
			uParam0->f_9 = 1295319/*func_4001*/;
			break;
		case 42:
			uParam0->f_10 = 1295283/*func_4000*/;
			break;
		case 6:
			uParam0->f_32 = 1295168/*func_3999*/;
			break;
		case 11:
			uParam0->f_11 = 1295159/*func_3998*/;
			break;
		case 12:
			uParam0->f_33 = 1294228/*func_3992*/;
			break;
		case 14:
			uParam0->f_11 = 1294219/*func_3991*/;
			break;
		case 109:
			uParam0->f_56 = 1293043/*func_3989*/;
			break;
		case 8:
			uParam0->f_37 = 1292999/*func_3988*/;
			break;
		case 7:
			uParam0->f_36 = 1292976/*func_3987*/;
			break;
		case 79:
			*uParam0 = 1292952/*func_3986*/;
			break;
		case 13:
			uParam0->f_2 = 1292890/*func_3985*/;
			break;
		case 15:
			uParam0->f_2 = 1292811/*func_3984*/;
			break;
		case 16:
			uParam0->f_5 = 1292137/*func_3979*/;
			break;
		case 108:
			uParam0->f_55 = 1288855/*func_3966*/;
			break;
		case 17:
			uParam0->f_17 = 1287915/*func_3965*/;
			break;
		case 19:
			uParam0->f_17 = 1287869/*func_3964*/;
			break;
		case 20:
			uParam0->f_3 = 1287696/*func_3963*/;
			break;
		case 21:
			uParam0->f_3 = 1287611/*func_3962*/;
			break;
		case 74:
			uParam0->f_53 = 1287471/*func_3961*/;
			break;
		case 75:
			uParam0->f_4 = 1287455/*func_3960*/;
			break;
		case 22:
			uParam0->f_24 = 1287348/*func_3959*/;
			break;
		case 23:
			uParam0->f_26 = 1287301/*func_3958*/;
			break;
		case 24:
			uParam0->f_26 = 1287264/*func_3957*/;
			break;
		case 26:
			uParam0->f_38 = 1285853/*func_3944*/;
			break;
		case 25:
			uParam0->f_23 = 1285487/*func_3941*/;
			break;
		case 27:
			uParam0->f_25 = 1284673/*func_3937*/;
			break;
		case 28:
			uParam0->f_24 = 1284632/*func_3936*/;
			break;
		case 29:
			uParam0->f_28 = 1284397/*func_3932*/;
			break;
		case 30:
			uParam0->f_8 = 1284072/*func_3928*/;
			break;
		case 31:
			uParam0->f_39 = 1283872/*func_3927*/;
			break;
		case 43:
			uParam0->f_8 = 1283766/*func_3926*/;
			break;
		case 33:
			uParam0->f_40 = 1283450/*func_3925*/;
			break;
		case 34:
			uParam0->f_41 = 1278458/*func_3922*/;
			break;
		case 36:
			uParam0->f_58 = 1278401/*func_3921*/;
			break;
		case 35:
			uParam0->f_42 = 1272196/*func_3917*/;
			break;
		case 45:
			uParam0->f_14 = 1272187/*func_3916*/;
			break;
		case 46:
			uParam0->f_14 = 1272178/*func_3915*/;
			break;
		case 110:
			uParam0->f_57 = 1272170/*func_3914*/;
			break;
		case 77:
			uParam0->f_13 = 1272147/*func_3913*/;
			break;
		case 82:
			uParam0->f_19 = 1272134/*func_3912*/;
			break;
		case 47:
			uParam0->f_43 = 1271831/*func_3909*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1269668/*func_3904*/;
			break;
		case 49:
			uParam0->f_8 = 1269620/*func_3903*/;
			break;
		case 50:
			*uParam0 = 1269428/*func_3901*/;
			break;
		case 51:
			*uParam0 = 1269419/*func_3900*/;
			break;
		case 52:
			uParam0->f_15 = 1269408/*func_3899*/;
			break;
		case 53:
			uParam0->f_13 = 1269366/*func_3898*/;
			break;
		case 54:
			uParam0->f_45 = 1269358/*func_3897*/;
			break;
		case 56:
			uParam0->f_46 = 1269349/*func_3896*/;
			break;
		case 57:
			uParam0->f_11 = 1269340/*func_3895*/;
			break;
		case 58:
			uParam0->f_13 = 1269298/*func_3894*/;
			break;
		case 59:
			*uParam0 = 1269289/*func_3893*/;
			break;
		case 60:
			*uParam0 = 1269280/*func_3892*/;
			break;
		case 61:
			uParam0->f_15 = 1269269/*func_3891*/;
			break;
		case 62:
			uParam0->f_13 = 1269239/*func_3890*/;
			break;
		case 63:
			uParam0->f_11 = 1269230/*func_3889*/;
			break;
		case 64:
			uParam0->f_47 = 1269222/*func_3888*/;
			break;
		case 65:
			uParam0->f_21 = 1268136/*func_3885*/;
			break;
		case 66:
			uParam0->f_21 = 1267795/*func_3884*/;
			break;
		case 67:
			uParam0->f_21 = 1267681/*func_3883*/;
			break;
		case 68:
			*uParam0 = 1266853/*func_3882*/;
			break;
		case 69:
			*uParam0 = 1266844/*func_3881*/;
			break;
		case 70:
			uParam0->f_48 = 1266832/*func_3880*/;
			break;
		case 71:
			uParam0->f_49 = 1266740/*func_3879*/;
			break;
		case 107:
			uParam0->f_50 = 1266728/*func_3878*/;
			break;
		case 80:
			uParam0->f_7 = 1266540/*func_3877*/;
			break;
		case 84:
			uParam0->f_1 = 1266531/*func_3876*/;
			break;
		case 85:
			uParam0->f_1 = 1266517/*func_3875*/;
			break;
		case 87:
			uParam0->f_1 = 1266501/*func_3874*/;
			break;
		case 88:
			uParam0->f_1 = 1266492/*func_3873*/;
			break;
		case 89:
			uParam0->f_54 = 1266484/*func_3872*/;
			break;
		case 96:
			uParam0->f_1 = 1266475/*func_3871*/;
			break;
		case 97:
			uParam0->f_1 = 1266032/*func_3867*/;
			break;
		case 98:
			uParam0->f_1 = 1264570/*func_3857*/;
			break;
		case 100:
			uParam0->f_22 = 1263691/*func_3852*/;
			break;
		case 101:
			uParam0->f_22 = 1263514/*func_3849*/;
			break;
		case 112:
			uParam0->f_13 = 1263502/*func_3848*/;
			break;
		case 113:
			uParam0->f_3 = 1263488/*func_3847*/;
			break;
		case 114:
			uParam0->f_16 = 932757/*func_2501*/;
			break;
		case 117:
			uParam0->f_16 = 986266/*func_2705*/;
			break;
		case 118:
			uParam0->f_11 = 1263479/*func_3846*/;
			break;
		case 119:
			uParam0->f_27 = 1263378/*func_3842*/;
			break;
		case 120:
			uParam0->f_19 = 1263353/*func_3840*/;
			break;
		case 78:
			uParam0->f_59 = 1263181/*func_3838*/;
			break;
		case 125:
			uParam0->f_19 = 1263154/*func_3837*/;
			break;
	}
}

int func_3857(int iParam0, var uParam1)//Position - 0x134BBA
{
	if (__LIB_2__::func_909(iParam0))
	{
		return func_3858(iParam0, uParam1);
	}
	return 1;
}

int func_3858(int iParam0, var uParam1)//Position - 0x134BD7
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
		if (func_2075(&(uParam1->f_109.f_1[0]), iVar1, 1, 1) && __LIB_0__::func_121(uParam1->f_109.f_1[0]))
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

int func_3875(var uParam0, var uParam1)//Position - 0x135355
{
	return func_3749(uParam1);
}

void func_3941(int iParam0, int iParam1)//Position - 0x139D6F
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_935(iParam0) };
	if (__LIB_7__::func_739(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2266(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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
			__LIB_8__::func_15(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_8__::func_15(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_866(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_866(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_3944(var uParam0, var uParam1)//Position - 0x139EDD
{
	if (__LIB_4__::func_139(PLAYER::PLAYER_ID()) || __LIB_4__::func_148(PLAYER::PLAYER_ID()))
	{
		func_3945(uParam0, uParam1);
	}
}

void func_3945(var uParam0, var uParam1)//Position - 0x139F09
{
	int iVar0;
	if (__LIB_2__::func_399() == 2 && __LIB_2__::func_566() != 1)
	{
		uParam1->f_1 = 1;
		if (func_3956(*uParam0, 0, 0))
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
			func_3951(uParam0, uParam1);
			break;
		case 1:
			func_3947(uParam0, uParam1);
			break;
		case 2:
			__LIB_7__::func_647(*uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3947(var uParam0, var uParam1)//Position - 0x139FC8
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
	func_2266(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar6, &bVar7, 1, 0);
	iVar5 = 0;
	while (iVar5 < 3)
	{
		uVar2[iVar4] = __LIB_4__::func_341(iVar5);
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
			__LIB_34__::func_245(iVar1[uParam0->f_4]);
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

void func_3951(var uParam0, var uParam1)//Position - 0x13A1C9
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
	if (!__LIB_4__::func_139(PLAYER::PLAYER_ID()) && __LIB_4__::func_148(PLAYER::PLAYER_ID()))
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
			else if (func_3956(*uParam0, 0, 0))
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

int func_3956(int iParam0, bool bParam1, bool bParam2)//Position - 0x13A42E
{
	int iVar0;
	int iVar1;
	func_2266(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, bParam2);
	if (bParam1)
	{
		return iVar1;
	}
	return (iVar0 || iVar1);
}

void func_4014(var uParam0, int iParam1)//Position - 0x13C929
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1325818/*func_4167*/;
			break;
		case 111:
			uParam0->f_35 = 1325809/*func_4166*/;
			break;
		case 1:
			uParam0->f_30 = 1325741/*func_4164*/;
			break;
		case 2:
			uParam0->f_31 = 1325388/*func_4161*/;
			break;
		case 3:
			uParam0->f_34 = 1325155/*func_4160*/;
			break;
		case 4:
			uParam0->f_12 = 1325142/*func_4159*/;
			break;
		case 6:
			uParam0->f_32 = 1325078/*func_4158*/;
			break;
		case 11:
			uParam0->f_11 = 1325069/*func_4157*/;
			break;
		case 12:
			uParam0->f_33 = 1324344/*func_4153*/;
			break;
		case 14:
			uParam0->f_11 = 1324335/*func_4152*/;
			break;
		case 109:
			uParam0->f_56 = 1323190/*func_4151*/;
			break;
		case 8:
			uParam0->f_37 = 1323182/*func_4150*/;
			break;
		case 7:
			uParam0->f_36 = 1323173/*func_4149*/;
			break;
		case 79:
			*uParam0 = 1323149/*func_4148*/;
			break;
		case 13:
			uParam0->f_2 = 1323077/*func_4147*/;
			break;
		case 15:
			uParam0->f_2 = 1322988/*func_4146*/;
			break;
		case 16:
			uParam0->f_5 = 1322628/*func_4145*/;
			break;
		case 108:
			uParam0->f_55 = 1322489/*func_4143*/;
			break;
		case 17:
			uParam0->f_17 = 1321812/*func_4142*/;
			break;
		case 19:
			uParam0->f_17 = 1321785/*func_4141*/;
			break;
		case 20:
			uParam0->f_3 = 1321776/*func_4140*/;
			break;
		case 21:
			uParam0->f_3 = 1321728/*func_4139*/;
			break;
		case 74:
			uParam0->f_53 = 1321673/*func_4138*/;
			break;
		case 75:
			uParam0->f_4 = 1321560/*func_4137*/;
			break;
		case 22:
			uParam0->f_24 = 1321552/*func_4136*/;
			break;
		case 23:
			uParam0->f_26 = 1321544/*func_4135*/;
			break;
		case 26:
			uParam0->f_38 = 1318986/*func_4119*/;
			break;
		case 25:
			uParam0->f_23 = 1318978/*func_4118*/;
			break;
		case 27:
			uParam0->f_25 = 1318970/*func_4117*/;
			break;
		case 28:
			uParam0->f_24 = 1318962/*func_4116*/;
			break;
		case 30:
			uParam0->f_8 = 1318681/*func_4115*/;
			break;
		case 31:
			uParam0->f_39 = 1318651/*func_4114*/;
			break;
		case 33:
			uParam0->f_40 = 1318582/*func_4113*/;
			break;
		case 76:
			uParam0->f_13 = 1318559/*func_4112*/;
			break;
		case 34:
			uParam0->f_41 = 1316005/*func_4109*/;
			break;
		case 36:
			uParam0->f_58 = 1315960/*func_4108*/;
			break;
		case 35:
			uParam0->f_42 = 1315864/*func_4107*/;
			break;
		case 45:
			uParam0->f_14 = 1315855/*func_4106*/;
			break;
		case 46:
			uParam0->f_14 = 1315846/*func_4105*/;
			break;
		case 110:
			uParam0->f_57 = 1315838/*func_4104*/;
			break;
		case 77:
			uParam0->f_13 = 1315827/*func_4103*/;
			break;
		case 47:
			uParam0->f_43 = 1315714/*func_4102*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1314867/*func_4101*/;
			break;
		case 49:
			uParam0->f_8 = 1314858/*func_4100*/;
			break;
		case 50:
			*uParam0 = 1314645/*func_4099*/;
			break;
		case 51:
			*uParam0 = 1314636/*func_4098*/;
			break;
		case 52:
			uParam0->f_15 = 1314625/*func_4097*/;
			break;
		case 53:
			uParam0->f_13 = 1314583/*func_4096*/;
			break;
		case 54:
			uParam0->f_45 = 1314544/*func_4095*/;
			break;
		case 56:
			uParam0->f_46 = 1314535/*func_4094*/;
			break;
		case 57:
			uParam0->f_11 = 1314493/*func_4092*/;
			break;
		case 58:
			uParam0->f_13 = 1314451/*func_4091*/;
			break;
		case 59:
			*uParam0 = 1314442/*func_4090*/;
			break;
		case 60:
			*uParam0 = 1314433/*func_4089*/;
			break;
		case 61:
			uParam0->f_15 = 1314422/*func_4088*/;
			break;
		case 62:
			uParam0->f_13 = 1314411/*func_4087*/;
			break;
		case 63:
			uParam0->f_11 = 1314402/*func_4086*/;
			break;
		case 64:
			uParam0->f_47 = 1314316/*func_4084*/;
			break;
		case 65:
			uParam0->f_21 = 1314308/*func_4083*/;
			break;
		case 66:
			uParam0->f_21 = 1313967/*func_4082*/;
			break;
		case 67:
			uParam0->f_21 = 1313897/*func_4081*/;
			break;
		case 68:
			*uParam0 = 1313200/*func_4080*/;
			break;
		case 69:
			*uParam0 = 1313191/*func_4079*/;
			break;
		case 70:
			uParam0->f_48 = 1313118/*func_4078*/;
			break;
		case 71:
			uParam0->f_49 = 1313109/*func_4077*/;
			break;
		case 107:
			uParam0->f_50 = 1313097/*func_4076*/;
			break;
		case 80:
			uParam0->f_7 = 1313088/*func_4075*/;
			break;
		case 84:
			uParam0->f_1 = 1312561/*func_4072*/;
			break;
		case 85:
			uParam0->f_1 = 1311005/*func_4069*/;
			break;
		case 87:
			uParam0->f_1 = 1307769/*func_4056*/;
			break;
		case 88:
			uParam0->f_1 = 1307754/*func_4055*/;
			break;
		case 89:
			uParam0->f_54 = 1307392/*func_4053*/;
			break;
		case 96:
			uParam0->f_1 = 1307101/*func_4050*/;
			break;
		case 97:
			uParam0->f_1 = 1306594/*func_4048*/;
			break;
		case 98:
			uParam0->f_1 = 1304960/*func_4046*/;
			break;
		case 100:
			uParam0->f_22 = 1304681/*func_4045*/;
			break;
		case 101:
			uParam0->f_22 = 1304334/*func_4044*/;
			break;
		case 112:
			uParam0->f_13 = 1304322/*func_4043*/;
			break;
		case 113:
			uParam0->f_3 = 1304313/*func_4042*/;
			break;
		case 114:
			uParam0->f_16 = 932757/*func_2501*/;
			break;
		case 115:
			uParam0->f_3 = 1304202/*func_4040*/;
			break;
		case 116:
			*uParam0 = 1304154/*func_4039*/;
			break;
		case 117:
			uParam0->f_16 = 986266/*func_2705*/;
			break;
		case 118:
			uParam0->f_11 = 1263479/*func_3846*/;
			break;
		case 119:
			uParam0->f_27 = 1263378/*func_3842*/;
			break;
		case 120:
			uParam0->f_19 = 1263353/*func_3840*/;
			break;
		case 78:
			uParam0->f_59 = 1304146/*func_4038*/;
			break;
		case 124:
			uParam0->f_1 = 1298261/*func_4016*/;
			break;
		case 125:
			uParam0->f_19 = 1298205/*func_4015*/;
			break;
	}
}

int func_4016(int iParam0, int* iParam1)//Position - 0x13CF55
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
			__LIB_39__::func_76(iParam1);
		}
		return 0;
	}
	switch (iParam1->f_258)
	{
		case 0:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_4__::func_364(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 0, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, false, true))
				{
					__LIB_7__::func_394(0);
					__LIB_2__::func_962(iParam1, 1);
				}
				__LIB_4__::func_364(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 3, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_7__::func_394(3);
					__LIB_2__::func_962(iParam1, 1);
				}
				__LIB_4__::func_364(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 4, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_7__::func_394(4);
					__LIB_2__::func_962(iParam1, 1);
				}
				__LIB_4__::func_364(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 1, 0);
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
				if (__LIB_18__::func_628(iParam0, iParam1))
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
				if (func_4069(iParam0, iParam1))
				{
					__LIB_2__::func_959(&(Global_1946250.f_3638), 60);
					__LIB_2__::func_962(iParam1, 3);
				}
			}
			else if (func_4026(iParam1))
			{
				__LIB_2__::func_962(iParam1, 3);
			}
			break;
		case 3:
			if (__LIB_2__::func_399() == 0)
			{
				__LIB_38__::func_997(&(Global_1946250.f_3638), 0, 1);
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
				__LIB_19__::func_324(iParam1);
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
				__LIB_38__::func_997(&(Global_1946250.f_3638), 0, 1);
				if (__LIB_25__::func_302(iParam0, iParam1) && BitTest(Global_1946250.f_6, 27))
				{
					__LIB_39__::func_76(iParam1);
				}
			}
			else if (__LIB_19__::func_324(iParam1) && BitTest(Global_1946250.f_6, 27))
			{
				__LIB_39__::func_76(iParam1);
			}
			break;
	}
	return 1;
}

int func_4026(int* iParam0)//Position - 0x13DCE4
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
		func_3061(&(iParam0->f_2), PLAYER::PLAYER_ID(), 1, 1);
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

void func_4044(int iParam0, var uParam1)//Position - 0x13E70E
{
	struct<14> Var0;
	char* sVar1;
	int iVar2;
	if (__LIB_2__::func_909(iParam0))
	{
		__LIB_2__::func_908(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
		{
			PED::DELETE_PED(&(uParam1->f_2));
		}
		if (!BitTest(Global_1946250.f_6, 21))
		{
			__LIB_0__::func_521(27245, 1, -1);
			MISC::SET_BIT(&(Global_1966471.f_22), 19);
			Global_2815059.f_6764 = 1;
			if (__LIB_1__::func_425(PLAYER::PLAYER_ID(), 0) && __LIB_1__::func_570(PLAYER::PLAYER_ID()))
			{
				Var0.f_2 = 1823970438;
				__LIB_1__::func_226(Var0, __LIB_8__::func_227(0));
			}
		}
		MISC::CLEAR_BIT(&(Global_1946250.f_6), 21);
		MISC::CLEAR_BIT(&(Global_1946250.f_6), 20);
		MISC::SET_BIT(&(Global_1946250.f_6), 22);
		STREAMING::REMOVE_IPL("ch_cutscene_casino");
		ENTITY::REMOVE_MODEL_HIDE(959.0179f, 40.0682f, 116.2767f, 1f, joaat("hei_ch3_12_casinonew_penthouse"), false);
		CUTSCENE::REMOVE_CUTSCENE();
	}
	else
	{
		sVar1 = "mini@strip_club@throwout_d@";
		if (CAM::DOES_CAM_EXIST(uParam1->f_11))
		{
			if (CAM::IS_CAM_ACTIVE(uParam1->f_11))
			{
				CAM::DESTROY_CAM(uParam1->f_11, false);
			}
		}
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[iVar2]))
			{
				PED::DELETE_PED(&(uParam1->f_140[iVar2]));
			}
			iVar2++;
		}
		STREAMING::REMOVE_ANIM_DICT(sVar1);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, true, 0);
		__LIB_35__::func_806(0, 0, 0, 1);
		__LIB_18__::func_843(0, 1, 1, 0, 0, 0, 0);
	}
}

int func_4046(int iParam0, var uParam1)//Position - 0x13E980
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	if (__LIB_2__::func_909(iParam0))
	{
		return func_3858(iParam0, uParam1);
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
		__LIB_18__::func_843(1, 1, 1, 0, 0, 0, 0);
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
			func_3061(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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
		__LIB_25__::func_112(PLAYER::PLAYER_ID(), 0, 262144, 0);
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

int func_4048(int iParam0, var uParam1)//Position - 0x13EFE2
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
				if (!func_4049(&(uParam1->f_2), Global_1946250.f_4539))
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

int func_4049(var uParam0, int iParam1)//Position - 0x13F0F1
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
				if (__LIB_0__::func_709(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_1760(*uParam0, 14, 0), -1))
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

int func_4069(int iParam0, int* iParam1)//Position - 0x14011D
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
		if (!func_2075(&(iParam1->f_140[0]), PLAYER::PLAYER_PED_ID(), 1, 1))
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
			func_2080(&iVar7, &(iParam1->f_109), 60);
			__LIB_2__::func_416(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else
		{
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar7, -1, false);
			if (func_2075(&(iParam1->f_109.f_1[0]), iVar8, 1, 1) && __LIB_0__::func_121(iParam1->f_109.f_1[0]))
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
			func_3061(&(iParam1->f_2), PLAYER::PLAYER_ID(), 1, 1);
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

void func_4119(var uParam0, var uParam1)//Position - 0x14204A
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	if (__LIB_2__::func_399() == 0 || __LIB_2__::func_399() == 2)
	{
		if (!__LIB_4__::func_141(PLAYER::PLAYER_ID()) || __LIB_2__::func_380())
		{
			if (!__LIB_2__::func_380())
			{
				if (__LIB_2__::func_192(PLAYER::PLAYER_ID()))
				{
					__LIB_34__::func_249(1, *uParam0);
				}
			}
			if (__LIB_2__::func_192(PLAYER::PLAYER_ID()))
			{
				__LIB_34__::func_249(1, *uParam0);
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
			func_4123(uParam0, uParam1);
			break;
		case 4:
			__LIB_7__::func_652(*uParam0, uParam1);
			break;
		case 2:
		case 3:
		case 1:
		case 5:
			func_4120(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_4120(var uParam0, var uParam1)//Position - 0x142188
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
	func_2266(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar2, &bVar3, bVar0, 0);
	sVar7 = __LIB_2__::func_936();
	iVar9 = 0;
	while (iVar9 < 3)
	{
		uVar6[iVar8] = __LIB_4__::func_341(iVar9);
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
				__LIB_34__::func_249(iVar5[uParam0->f_4], 123);
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
				__LIB_34__::func_249(iVar5[uParam0->f_4], 146);
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
				__LIB_34__::func_249(iVar5[uParam0->f_4], 124);
			}
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_7__::func_396();
	}
}

void func_4123(var uParam0, var uParam1)//Position - 0x142414
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
		uVar0 = __LIB_7__::func_856(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	else
	{
		uVar0 = __LIB_18__::func_814(&uVar1, &uVar2, &uVar3, &iVar5);
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
			__LIB_1__::func_342(__LIB_7__::func_653(uVar1[iVar7], iVar7), 0, 0);
		}
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (__LIB_2__::func_399() == 0)
			{
				func_4125(*uParam0, iVar7, uParam1, uParam1);
			}
			else
			{
				func_4124(*uParam0, iVar7, uParam1, uParam1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_4124(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x142531
{
	if (iParam1 == 0)
	{
		if (func_3956(iParam0, 0, 0))
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
		if (func_3956(iParam0, 0, 0))
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
		if (func_3956(iParam0, 1, 0))
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
		if (func_3956(iParam0, 0, 0))
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

void func_4125(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x142639
{
	if (iParam1 == 0)
	{
		if (func_3956(iParam0, 0, 0))
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
		if (func_3956(iParam0, 0, 0))
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

void func_4168(var uParam0, int iParam1)//Position - 0x143B03
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1361425/*func_4334*/;
			break;
		case 111:
			uParam0->f_35 = 1361411/*func_4333*/;
			break;
		case 1:
			uParam0->f_30 = 1361312/*func_4332*/;
			break;
		case 2:
			uParam0->f_31 = 1360248/*func_4328*/;
			break;
		case 3:
			uParam0->f_34 = 1360094/*func_4327*/;
			break;
		case 4:
			uParam0->f_12 = 1360040/*func_4325*/;
			break;
		case 5:
			uParam0->f_11 = 1359985/*func_4324*/;
			break;
		case 37:
			uParam0->f_18 = 1359844/*func_4323*/;
			break;
		case 38:
			uParam0->f_9 = 1359712/*func_4319*/;
			break;
		case 6:
			uParam0->f_32 = 1359597/*func_4318*/;
			break;
		case 11:
			uParam0->f_11 = 1359587/*func_4317*/;
			break;
		case 12:
			uParam0->f_33 = 1358418/*func_4312*/;
			break;
		case 14:
			uParam0->f_11 = 1358409/*func_4311*/;
			break;
		case 109:
			uParam0->f_56 = 1357065/*func_4310*/;
			break;
		case 8:
			uParam0->f_37 = 1357021/*func_4309*/;
			break;
		case 7:
			uParam0->f_36 = 1356998/*func_4308*/;
			break;
		case 79:
			*uParam0 = 1356974/*func_4307*/;
			break;
		case 13:
			uParam0->f_2 = 1356911/*func_4306*/;
			break;
		case 15:
			uParam0->f_2 = 1356831/*func_4305*/;
			break;
		case 16:
			uParam0->f_5 = 1356188/*func_4301*/;
			break;
		case 108:
			uParam0->f_55 = 1353048/*func_4288*/;
			break;
		case 17:
			uParam0->f_17 = 1352343/*func_4287*/;
			break;
		case 19:
			uParam0->f_17 = 1352316/*func_4286*/;
			break;
		case 20:
			uParam0->f_3 = 1352137/*func_4285*/;
			break;
		case 21:
			uParam0->f_3 = 1352073/*func_4284*/;
			break;
		case 74:
			uParam0->f_53 = 1351859/*func_4283*/;
			break;
		case 75:
			uParam0->f_4 = 1351843/*func_4282*/;
			break;
		case 22:
			uParam0->f_24 = 1351736/*func_4281*/;
			break;
		case 23:
			uParam0->f_26 = 1351689/*func_4280*/;
			break;
		case 24:
			uParam0->f_26 = 1351652/*func_4279*/;
			break;
		case 26:
			uParam0->f_38 = 1350822/*func_4272*/;
			break;
		case 25:
			uParam0->f_23 = 1350456/*func_4269*/;
			break;
		case 27:
			uParam0->f_25 = 1350074/*func_4267*/;
			break;
		case 28:
			uParam0->f_24 = 1350023/*func_4266*/;
			break;
		case 29:
			uParam0->f_28 = 1350015/*func_4265*/;
			break;
		case 30:
			uParam0->f_8 = 1349778/*func_4261*/;
			break;
		case 31:
			uParam0->f_39 = 1349654/*func_4260*/;
			break;
		case 33:
			uParam0->f_40 = 1349234/*func_4259*/;
			break;
		case 34:
			uParam0->f_41 = 1337939/*func_4245*/;
			break;
		case 36:
			uParam0->f_58 = 1337894/*func_4244*/;
			break;
		case 35:
			uParam0->f_42 = 1334807/*func_4241*/;
			break;
		case 45:
			uParam0->f_14 = 1334798/*func_4240*/;
			break;
		case 46:
			uParam0->f_14 = 1334789/*func_4239*/;
			break;
		case 110:
			uParam0->f_57 = 1334781/*func_4238*/;
			break;
		case 77:
			uParam0->f_13 = 1334732/*func_4237*/;
			break;
		case 47:
			uParam0->f_43 = 1334650/*func_4236*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1333886/*func_4229*/;
			break;
		case 49:
			uParam0->f_8 = 1333839/*func_4228*/;
			break;
		case 50:
			*uParam0 = 1333780/*func_4227*/;
			break;
		case 51:
			*uParam0 = 1333548/*func_4224*/;
			break;
		case 52:
			uParam0->f_15 = 1333537/*func_4223*/;
			break;
		case 53:
			uParam0->f_13 = 1333495/*func_4222*/;
			break;
		case 54:
			uParam0->f_45 = 1333487/*func_4221*/;
			break;
		case 56:
			uParam0->f_46 = 1333478/*func_4220*/;
			break;
		case 57:
			uParam0->f_11 = 1333469/*func_4219*/;
			break;
		case 58:
			uParam0->f_13 = 1333427/*func_4218*/;
			break;
		case 59:
			*uParam0 = 1333418/*func_4217*/;
			break;
		case 60:
			*uParam0 = 1333409/*func_4216*/;
			break;
		case 61:
			uParam0->f_15 = 1333398/*func_4215*/;
			break;
		case 62:
			uParam0->f_13 = 1333356/*func_4214*/;
			break;
		case 63:
			uParam0->f_11 = 1333347/*func_4213*/;
			break;
		case 64:
			uParam0->f_47 = 1333339/*func_4212*/;
			break;
		case 65:
			uParam0->f_21 = 1332277/*func_4209*/;
			break;
		case 66:
			uParam0->f_21 = 1331974/*func_4208*/;
			break;
		case 67:
			uParam0->f_21 = 1331860/*func_4207*/;
			break;
		case 68:
			*uParam0 = 1331017/*func_4206*/;
			break;
		case 69:
			*uParam0 = 1331008/*func_4205*/;
			break;
		case 70:
			uParam0->f_48 = 1330935/*func_4204*/;
			break;
		case 71:
			uParam0->f_49 = 1330926/*func_4203*/;
			break;
		case 107:
			uParam0->f_50 = 1330914/*func_4202*/;
			break;
		case 80:
			uParam0->f_7 = 1330712/*func_4201*/;
			break;
		case 84:
			uParam0->f_1 = 1330703/*func_4200*/;
			break;
		case 85:
			uParam0->f_1 = 1328970/*func_4187*/;
			break;
		case 87:
			uParam0->f_1 = 1327515/*func_4179*/;
			break;
		case 88:
			uParam0->f_1 = 1327506/*func_4178*/;
			break;
		case 89:
			uParam0->f_54 = 1327498/*func_4177*/;
			break;
		case 96:
			uParam0->f_1 = 1327489/*func_4176*/;
			break;
		case 97:
			uParam0->f_1 = 1327480/*func_4175*/;
			break;
		case 98:
			uParam0->f_1 = 1327471/*func_4174*/;
			break;
		case 100:
			uParam0->f_22 = 1327463/*func_4173*/;
			break;
		case 101:
			uParam0->f_22 = 1327455/*func_4172*/;
			break;
		case 78:
			uParam0->f_59 = 1327283/*func_4170*/;
			break;
		case 125:
			uParam0->f_19 = 1327250/*func_4169*/;
			break;
	}
}

int func_4187(int iParam0, var uParam1)//Position - 0x14474A
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
			func_2080(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_2074(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_4269(int iParam0, int iParam1)//Position - 0x149B38
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_33(iParam0) };
	if (__LIB_7__::func_747(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2266(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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
			__LIB_8__::func_19(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_8__::func_19(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_867(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_867(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_4272(var uParam0, var uParam1)//Position - 0x149CA6
{
	if (__LIB_4__::func_135(PLAYER::PLAYER_ID()))
	{
		func_4273(uParam0, uParam1);
	}
}

void func_4273(var uParam0, var uParam1)//Position - 0x149CC4
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_32__::func_275(uParam0, uParam1);
			break;
		case 1:
			func_4274(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_4274(var uParam0, var uParam1)//Position - 0x149CFE
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_2266(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

void func_4335(var uParam0, int iParam1)//Position - 0x14C61A
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1452744/*func_4469*/;
			break;
		case 1:
			uParam0->f_30 = 1452688/*func_4468*/;
			break;
		case 2:
			uParam0->f_31 = 1452344/*func_4467*/;
			break;
		case 3:
			uParam0->f_34 = 1452305/*func_4466*/;
			break;
		case 4:
			uParam0->f_12 = 1452271/*func_4465*/;
			break;
		case 5:
			uParam0->f_11 = 1452260/*func_4464*/;
			break;
		case 6:
			uParam0->f_32 = 1452196/*func_4463*/;
			break;
		case 111:
			uParam0->f_35 = 1452173/*func_4462*/;
			break;
		case 79:
			*uParam0 = 1452149/*func_4461*/;
			break;
		case 37:
			uParam0->f_18 = 1452029/*func_4460*/;
			break;
		case 38:
			uParam0->f_9 = 1451950/*func_4459*/;
			break;
		case 11:
			uParam0->f_11 = 1451941/*func_4458*/;
			break;
		case 12:
			uParam0->f_33 = 1451345/*func_4455*/;
			break;
		case 109:
			uParam0->f_56 = 1451337/*func_4454*/;
			break;
		case 15:
			uParam0->f_2 = 1446175/*func_4430*/;
			break;
		case 13:
			uParam0->f_2 = 1446166/*func_4429*/;
			break;
		case 75:
			uParam0->f_4 = 1446151/*func_4428*/;
			break;
		case 16:
			uParam0->f_5 = 1445676/*func_4424*/;
			break;
		case 108:
			uParam0->f_55 = 1441703/*func_4408*/;
			break;
		case 17:
			uParam0->f_17 = 1440922/*func_4407*/;
			break;
		case 19:
			uParam0->f_17 = 1440895/*func_4406*/;
			break;
		case 20:
			uParam0->f_3 = 1440684/*func_4405*/;
			break;
		case 21:
			uParam0->f_3 = 1440521/*func_4404*/;
			break;
		case 74:
			uParam0->f_53 = 1439912/*func_4401*/;
			break;
		case 22:
			uParam0->f_24 = 1439827/*func_4400*/;
			break;
		case 25:
			uParam0->f_23 = 1438911/*func_4397*/;
			break;
		case 30:
			uParam0->f_8 = 1437937/*func_4391*/;
			break;
		case 31:
			uParam0->f_39 = 1437260/*func_4387*/;
			break;
		case 33:
			uParam0->f_40 = 1436417/*func_4385*/;
			break;
		case 14:
			uParam0->f_11 = 1436408/*func_4384*/;
			break;
		case 34:
			uParam0->f_41 = 1435633/*func_4381*/;
			break;
		case 36:
			uParam0->f_58 = 1435580/*func_4380*/;
			break;
		case 35:
			uParam0->f_42 = 1366973/*func_4371*/;
			break;
		case 45:
			uParam0->f_14 = 1366964/*func_4370*/;
			break;
		case 46:
			uParam0->f_14 = 1366955/*func_4369*/;
			break;
		case 110:
			uParam0->f_57 = 1366947/*func_4368*/;
			break;
		case 77:
			uParam0->f_13 = 1366924/*func_4367*/;
			break;
		case 47:
			uParam0->f_43 = 1366784/*func_4366*/;
			break;
		case 49:
			uParam0->f_8 = 1366749/*func_4365*/;
			break;
		case 50:
			*uParam0 = 1366711/*func_4364*/;
			break;
		case 51:
			*uParam0 = 1366687/*func_4363*/;
			break;
		case 52:
			uParam0->f_15 = 1366676/*func_4362*/;
			break;
		case 53:
			uParam0->f_13 = 1366597/*func_4361*/;
			break;
		case 54:
			uParam0->f_45 = 1366589/*func_4360*/;
			break;
		case 56:
			uParam0->f_46 = 1366580/*func_4359*/;
			break;
		case 57:
			uParam0->f_11 = 1366570/*func_4358*/;
			break;
		case 58:
			uParam0->f_13 = 1366281/*func_4357*/;
			break;
		case 64:
			uParam0->f_47 = 1364901/*func_4351*/;
			break;
		case 65:
			uParam0->f_21 = 1363938/*func_4348*/;
			break;
		case 66:
			uParam0->f_21 = 1363743/*func_4347*/;
			break;
		case 67:
			uParam0->f_21 = 1363640/*func_4346*/;
			break;
		case 68:
			*uParam0 = 1362951/*func_4345*/;
			break;
		case 69:
			*uParam0 = 1362942/*func_4344*/;
			break;
		case 70:
			uParam0->f_48 = 1362930/*func_4343*/;
			break;
		case 71:
			uParam0->f_49 = 1362921/*func_4342*/;
			break;
		case 107:
			uParam0->f_50 = 1362909/*func_4341*/;
			break;
		case 80:
			uParam0->f_7 = 1362572/*func_4339*/;
			break;
		case 73:
			uParam0->f_51 = 1362563/*func_4338*/;
			break;
		case 78:
			uParam0->f_59 = 1362446/*func_4336*/;
			break;
	}
}

void func_4397(int iParam0, int iParam1)//Position - 0x15F4BF
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
	if (__LIB_33__::func_86(PLAYER::PLAYER_ID(), iParam0))
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
								if (((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_701(bVar7)) && !__LIB_2__::func_509(bVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_3__::func_999(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_701(bVar7)) && !__LIB_2__::func_509(bVar7, 14))
						{
							bVar1 = true;
						}
						if ((!bVar1 && __LIB_22__::func_170(PLAYER::PLAYER_ID())) && __LIB_3__::func_999(bVar7, PLAYER::PLAYER_ID()))
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
						__LIB_34__::func_319(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_102(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_34__::func_319(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_25__::func_853(1);
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_4__::func_22(PLAYER::PLAYER_ID()))
						{
							func_4398(iParam0);
						}
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_25__::func_853(1);
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_4__::func_22(PLAYER::PLAYER_ID()))
						{
							func_4398(iParam0);
						}
					}
					Jump @693; //curOff = 674
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_4398(int iParam0)//Position - 0x15F777
{
	__LIB_34__::func_319(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4470(var uParam0, int iParam1)//Position - 0x162AD1
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1515477/*func_4684*/;
			break;
		case 1:
			uParam0->f_30 = 1515237/*func_4682*/;
			break;
		case 2:
			uParam0->f_31 = 1512934/*func_4676*/;
			break;
		case 3:
			uParam0->f_34 = 1512725/*func_4675*/;
			break;
		case 4:
			uParam0->f_12 = 1512518/*func_4673*/;
			break;
		case 5:
			uParam0->f_11 = 1512440/*func_4672*/;
			break;
		case 37:
			uParam0->f_18 = 1512300/*func_4671*/;
			break;
		case 38:
			uParam0->f_9 = 1512244/*func_4670*/;
			break;
		case 42:
			uParam0->f_10 = 1512207/*func_4669*/;
			break;
		case 6:
			uParam0->f_32 = 1511971/*func_4668*/;
			break;
		case 111:
			uParam0->f_35 = 1511957/*func_4667*/;
			break;
		case 11:
			uParam0->f_11 = 1511948/*func_4666*/;
			break;
		case 12:
			uParam0->f_33 = 1508578/*func_4657*/;
			break;
		case 14:
			uParam0->f_11 = 1508569/*func_4656*/;
			break;
		case 109:
			uParam0->f_56 = 1494473/*func_4655*/;
			break;
		case 79:
			*uParam0 = 1494217/*func_4651*/;
			break;
		case 13:
			uParam0->f_2 = 1494168/*func_4650*/;
			break;
		case 15:
			uParam0->f_2 = 1493957/*func_4647*/;
			break;
		case 44:
			*uParam0 = 1493948/*func_4646*/;
			break;
		case 75:
			uParam0->f_4 = 1493919/*func_4645*/;
			break;
		case 16:
			uParam0->f_5 = 1493233/*func_4643*/;
			break;
		case 108:
			uParam0->f_55 = 1489377/*func_4630*/;
			break;
		case 17:
			uParam0->f_17 = 1488061/*func_4626*/;
			break;
		case 19:
			uParam0->f_17 = 1488015/*func_4625*/;
			break;
		case 20:
			uParam0->f_3 = 1487850/*func_4624*/;
			break;
		case 21:
			uParam0->f_3 = 1487786/*func_4623*/;
			break;
		case 74:
			uParam0->f_53 = 1487559/*func_4622*/;
			break;
		case 22:
			uParam0->f_24 = 1487432/*func_4621*/;
			break;
		case 26:
			uParam0->f_38 = 1484211/*func_4597*/;
			break;
		case 25:
			uParam0->f_23 = 1483890/*func_4595*/;
			break;
		case 27:
			uParam0->f_25 = 1482798/*func_4587*/;
			break;
		case 28:
			uParam0->f_24 = 1482685/*func_4586*/;
			break;
		case 29:
			uParam0->f_28 = 1482604/*func_4585*/;
			break;
		case 30:
			uParam0->f_8 = 1481714/*func_4583*/;
			break;
		case 31:
			uParam0->f_39 = 1481164/*func_4581*/;
			break;
		case 33:
			uParam0->f_40 = 1480482/*func_4579*/;
			break;
		case 32:
			*uParam0 = 1480442/*func_4578*/;
			break;
		case 34:
			uParam0->f_41 = 1471173/*func_4563*/;
			break;
		case 36:
			uParam0->f_58 = 1471115/*func_4562*/;
			break;
		case 35:
			uParam0->f_42 = 1367842/*func_4374*/;
			break;
		case 45:
			uParam0->f_14 = 1471106/*func_4561*/;
			break;
		case 46:
			uParam0->f_14 = 1471097/*func_4560*/;
			break;
		case 110:
			uParam0->f_57 = 1471089/*func_4559*/;
			break;
		case 77:
			uParam0->f_13 = 1471040/*func_4558*/;
			break;
		case 47:
			uParam0->f_43 = 1470748/*func_4557*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1468084/*func_4542*/;
			break;
		case 49:
			uParam0->f_8 = 1467980/*func_4541*/;
			break;
		case 50:
			*uParam0 = 1467697/*func_4540*/;
			break;
		case 51:
			*uParam0 = 1467535/*func_4539*/;
			break;
		case 52:
			uParam0->f_15 = 1467524/*func_4538*/;
			break;
		case 53:
			uParam0->f_13 = 1467266/*func_4537*/;
			break;
		case 54:
			uParam0->f_45 = 1467004/*func_4536*/;
			break;
		case 56:
			uParam0->f_46 = 1466995/*func_4535*/;
			break;
		case 57:
			uParam0->f_11 = 1465838/*func_4528*/;
			break;
		case 58:
			uParam0->f_13 = 1465580/*func_4527*/;
			break;
		case 59:
			*uParam0 = 1465301/*func_4524*/;
			break;
		case 60:
			*uParam0 = 1465292/*func_4523*/;
			break;
		case 61:
			uParam0->f_15 = 1465281/*func_4522*/;
			break;
		case 62:
			uParam0->f_13 = 1465023/*func_4521*/;
			break;
		case 55:
			uParam0->f_45 = 1465015/*func_4520*/;
			break;
		case 63:
			uParam0->f_11 = 1464957/*func_4519*/;
			break;
		case 64:
			uParam0->f_47 = 1464807/*func_4518*/;
			break;
		case 65:
			uParam0->f_21 = 1463100/*func_4511*/;
			break;
		case 66:
			uParam0->f_21 = 1462789/*func_4510*/;
			break;
		case 67:
			uParam0->f_21 = 1462637/*func_4509*/;
			break;
		case 68:
			*uParam0 = 1461637/*func_4506*/;
			break;
		case 69:
			*uParam0 = 1461628/*func_4505*/;
			break;
		case 70:
			uParam0->f_48 = 1461179/*func_4504*/;
			break;
		case 71:
			uParam0->f_49 = 1460900/*func_4503*/;
			break;
		case 107:
			uParam0->f_50 = 1460888/*func_4502*/;
			break;
		case 80:
			uParam0->f_7 = 1460655/*func_4501*/;
			break;
		case 84:
			uParam0->f_1 = 1460646/*func_4500*/;
			break;
		case 85:
			uParam0->f_1 = 1458549/*func_4491*/;
			break;
		case 87:
			uParam0->f_1 = 1455650/*func_4482*/;
			break;
		case 88:
			uParam0->f_1 = 1455641/*func_4481*/;
			break;
		case 89:
			uParam0->f_54 = 1455633/*func_4480*/;
			break;
		case 96:
			uParam0->f_1 = 1455607/*func_4479*/;
			break;
		case 97:
			uParam0->f_1 = 1455497/*func_4478*/;
			break;
		case 98:
			uParam0->f_1 = 1454780/*func_4477*/;
			break;
		case 100:
			uParam0->f_22 = 1454616/*func_4476*/;
			break;
		case 101:
			uParam0->f_22 = 1454488/*func_4475*/;
			break;
		case 78:
			uParam0->f_59 = 1454198/*func_4472*/;
			break;
		case 125:
			uParam0->f_19 = 1454174/*func_4471*/;
			break;
	}
}

int func_4477(var uParam0, var uParam1)//Position - 0x1632BC
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
		func_3061(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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
	__LIB_25__::func_112(PLAYER::PLAYER_ID(), 0, 262144, 0);
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

int func_4491(int iParam0, var uParam1)//Position - 0x164175
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
			func_2080(&iVar1, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_2074(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
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

void func_4595(int iParam0, int iParam1)//Position - 0x16A472
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_82(iParam0) };
	if (__LIB_7__::func_759(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2266(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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
			__LIB_25__::func_324(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_25__::func_324(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_25__::func_357(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_25__::func_357(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_4597(var uParam0, var uParam1)//Position - 0x16A5B3
{
	if (__LIB_2__::func_399() == 2)
	{
		func_4611(uParam0, uParam1);
	}
	else if (__LIB_2__::func_399() == 0)
	{
		if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_25__::func_358(uParam0, uParam1);
		}
		else
		{
			func_4599(uParam0, uParam1);
		}
	}
	else if (__LIB_2__::func_399() == 3)
	{
		if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_25__::func_358(uParam0, uParam1);
		}
		else
		{
			__LIB_3__::func_157(uParam1);
		}
	}
}

void func_4599(var uParam0, var uParam1)//Position - 0x16A63E
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_32__::func_276(uParam0, uParam1);
			break;
		case 1:
			func_4600(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_4600(var uParam0, var uParam1)//Position - 0x16A678
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_2266(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, __LIB_7__::func_867(PLAYER::PLAYER_ID()), 0);
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

void func_4611(var uParam0, var uParam1)//Position - 0x16AB95
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_32__::func_635(uParam0, uParam1);
			break;
		case 1:
			func_4618(uParam0, uParam1);
			break;
		case 2:
			__LIB_36__::func_802(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_4618(var uParam0, var uParam1)//Position - 0x16AFA2
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_2266(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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
		if (__LIB_19__::func_23(*uParam0))
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
			__LIB_25__::func_324(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_4685(var uParam0, int iParam1)//Position - 0x171FDE
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1523010/*func_4762*/;
			break;
		case 1:
			uParam0->f_30 = 1522954/*func_4761*/;
			break;
		case 2:
			uParam0->f_31 = 1522685/*func_4760*/;
			break;
		case 3:
			uParam0->f_34 = 1522624/*func_4759*/;
			break;
		case 4:
			uParam0->f_12 = 1522593/*func_4758*/;
			break;
		case 6:
			uParam0->f_32 = 1522529/*func_4757*/;
			break;
		case 111:
			uParam0->f_35 = 1522520/*func_4756*/;
			break;
		case 11:
			uParam0->f_11 = 1522511/*func_4755*/;
			break;
		case 14:
			uParam0->f_11 = 1522502/*func_4754*/;
			break;
		case 12:
			uParam0->f_33 = 1522291/*func_4752*/;
			break;
		case 109:
			uParam0->f_56 = 1522283/*func_4751*/;
			break;
		case 79:
			*uParam0 = 1522259/*func_4750*/;
			break;
		case 13:
			uParam0->f_2 = 1522250/*func_4749*/;
			break;
		case 15:
			uParam0->f_2 = 1521306/*func_4742*/;
			break;
		case 75:
			uParam0->f_4 = 1521297/*func_4741*/;
			break;
		case 16:
			uParam0->f_5 = 1521272/*func_4740*/;
			break;
		case 108:
			uParam0->f_55 = 1521263/*func_4739*/;
			break;
		case 17:
			uParam0->f_17 = 1521236/*func_4738*/;
			break;
		case 19:
			uParam0->f_17 = 1521224/*func_4737*/;
			break;
		case 20:
			uParam0->f_3 = 1521215/*func_4736*/;
			break;
		case 21:
			uParam0->f_3 = 1521206/*func_4735*/;
			break;
		case 74:
			uParam0->f_53 = 1520738/*func_4732*/;
			break;
		case 22:
			uParam0->f_24 = 1520615/*func_4731*/;
			break;
		case 25:
			uParam0->f_23 = 1519845/*func_4727*/;
			break;
		case 30:
			uParam0->f_8 = 1519699/*func_4725*/;
			break;
		case 31:
			uParam0->f_39 = 1519687/*func_4724*/;
			break;
		case 33:
			uParam0->f_40 = 1519480/*func_4722*/;
			break;
		case 34:
			uParam0->f_41 = 1519163/*func_4720*/;
			break;
		case 36:
			uParam0->f_58 = 1519110/*func_4719*/;
			break;
		case 35:
			uParam0->f_42 = 1518337/*func_4716*/;
			break;
		case 45:
			uParam0->f_14 = 1518328/*func_4715*/;
			break;
		case 46:
			uParam0->f_14 = 1518319/*func_4714*/;
			break;
		case 110:
			uParam0->f_57 = 1518311/*func_4713*/;
			break;
		case 77:
			uParam0->f_13 = 1518300/*func_4712*/;
			break;
		case 47:
			uParam0->f_43 = 1518061/*func_4710*/;
			break;
		case 49:
			uParam0->f_8 = 1518052/*func_4709*/;
			break;
		case 50:
			*uParam0 = 1518043/*func_4708*/;
			break;
		case 51:
			*uParam0 = 1518034/*func_4707*/;
			break;
		case 52:
			uParam0->f_15 = 1518023/*func_4706*/;
			break;
		case 53:
			uParam0->f_13 = 1518012/*func_4705*/;
			break;
		case 54:
			uParam0->f_45 = 1518004/*func_4704*/;
			break;
		case 56:
			uParam0->f_46 = 1517995/*func_4703*/;
			break;
		case 57:
			uParam0->f_11 = 1517986/*func_4702*/;
			break;
		case 58:
			uParam0->f_13 = 1517693/*func_4700*/;
			break;
		case 64:
			uParam0->f_47 = 1517149/*func_4697*/;
			break;
		case 65:
			uParam0->f_21 = 1517141/*func_4696*/;
			break;
		case 66:
			uParam0->f_21 = 1517073/*func_4695*/;
			break;
		case 67:
			uParam0->f_21 = 1516933/*func_4693*/;
			break;
		case 68:
			*uParam0 = 1516489/*func_4692*/;
			break;
		case 69:
			*uParam0 = 1516480/*func_4691*/;
			break;
		case 70:
			uParam0->f_48 = 1516468/*func_4690*/;
			break;
		case 71:
			uParam0->f_49 = 1516459/*func_4689*/;
			break;
		case 107:
			uParam0->f_50 = 1516447/*func_4688*/;
			break;
		case 80:
			uParam0->f_7 = 1516438/*func_4687*/;
			break;
		case 78:
			uParam0->f_59 = 1516430/*func_4686*/;
			break;
	}
}

void func_4727(int iParam0, int iParam1)//Position - 0x1730E5
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
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_701(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()))
								{
									bVar2 = true;
								}
							}
						}
						if ((((!bVar3 && __LIB_3__::func_999(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_701(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()))
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
						__LIB_25__::func_600(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_600(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4728(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4728(iParam0);
					}
					Jump @551; //curOff = 532
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_4728(int iParam0)//Position - 0x17330F
{
	__LIB_25__::func_600(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4763(var uParam0, int iParam1)//Position - 0x173D4B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1621524/*func_4997*/;
			break;
		case 1:
			uParam0->f_30 = 1621420/*func_4996*/;
			break;
		case 2:
			uParam0->f_31 = 1620685/*func_4994*/;
			break;
		case 3:
			uParam0->f_34 = 1620603/*func_4993*/;
			break;
		case 4:
			uParam0->f_12 = 1620460/*func_4992*/;
			break;
		case 5:
			uParam0->f_11 = 1620450/*func_4991*/;
			break;
		case 37:
			uParam0->f_18 = 1620313/*func_4990*/;
			break;
		case 42:
			uParam0->f_10 = 1620246/*func_4989*/;
			break;
		case 6:
			uParam0->f_32 = 1620134/*func_4988*/;
			break;
		case 111:
			uParam0->f_35 = 1620120/*func_4987*/;
			break;
		case 11:
			uParam0->f_11 = 1620111/*func_4986*/;
			break;
		case 12:
			uParam0->f_33 = 1619611/*func_4983*/;
			break;
		case 14:
			uParam0->f_11 = 1619602/*func_4982*/;
			break;
		case 109:
			uParam0->f_56 = 1619594/*func_4981*/;
			break;
		case 79:
			*uParam0 = 1619570/*func_4980*/;
			break;
		case 38:
			uParam0->f_9 = 1619490/*func_4979*/;
			break;
		case 13:
			uParam0->f_2 = 1619394/*func_4978*/;
			break;
		case 15:
			uParam0->f_2 = 1619189/*func_4977*/;
			break;
		case 75:
			uParam0->f_4 = 1619173/*func_4976*/;
			break;
		case 16:
			uParam0->f_5 = 1618364/*func_4973*/;
			break;
		case 108:
			uParam0->f_55 = 1613712/*func_4957*/;
			break;
		case 17:
			uParam0->f_17 = 1612892/*func_4956*/;
			break;
		case 19:
			uParam0->f_17 = 1612865/*func_4955*/;
			break;
		case 20:
			uParam0->f_3 = 1612781/*func_4954*/;
			break;
		case 21:
			uParam0->f_3 = 1612717/*func_4953*/;
			break;
		case 74:
			uParam0->f_53 = 1612565/*func_4952*/;
			break;
		case 22:
			uParam0->f_24 = 1612394/*func_4951*/;
			break;
		case 25:
			uParam0->f_23 = 1611344/*func_4946*/;
			break;
		case 30:
			uParam0->f_8 = 1610726/*func_4944*/;
			break;
		case 31:
			uParam0->f_39 = 1610413/*func_4943*/;
			break;
		case 33:
			uParam0->f_40 = 1609474/*func_4941*/;
			break;
		case 34:
			uParam0->f_41 = 1608114/*func_4940*/;
			break;
		case 36:
			uParam0->f_58 = 1608056/*func_4939*/;
			break;
		case 35:
			uParam0->f_42 = 1560353/*func_4936*/;
			break;
		case 45:
			uParam0->f_14 = 1560344/*func_4935*/;
			break;
		case 46:
			uParam0->f_14 = 1560335/*func_4934*/;
			break;
		case 110:
			uParam0->f_57 = 1560327/*func_4933*/;
			break;
		case 77:
			uParam0->f_13 = 1560304/*func_4932*/;
			break;
		case 47:
			uParam0->f_43 = 1560176/*func_4931*/;
			break;
		case 49:
			uParam0->f_8 = 1560135/*func_4930*/;
			break;
		case 50:
			*uParam0 = 1559867/*func_4927*/;
			break;
		case 51:
			*uParam0 = 1559798/*func_4926*/;
			break;
		case 52:
			uParam0->f_15 = 1559787/*func_4925*/;
			break;
		case 53:
			uParam0->f_13 = 1559553/*func_4924*/;
			break;
		case 54:
			uParam0->f_45 = 1559203/*func_4921*/;
			break;
		case 56:
			uParam0->f_46 = 1559194/*func_4920*/;
			break;
		case 57:
			uParam0->f_11 = 1559123/*func_4919*/;
			break;
		case 58:
			uParam0->f_13 = 1558889/*func_4918*/;
			break;
		case 64:
			uParam0->f_47 = 1558689/*func_4916*/;
			break;
		case 65:
			uParam0->f_21 = 1557791/*func_4914*/;
			break;
		case 66:
			uParam0->f_21 = 1557077/*func_4906*/;
			break;
		case 67:
			uParam0->f_21 = 1554813/*func_4887*/;
			break;
		case 68:
			*uParam0 = 1554180/*func_4883*/;
			break;
		case 69:
			*uParam0 = 1554171/*func_4882*/;
			break;
		case 70:
			uParam0->f_48 = 1554159/*func_4881*/;
			break;
		case 71:
			uParam0->f_49 = 1554150/*func_4880*/;
			break;
		case 107:
			uParam0->f_50 = 1554138/*func_4879*/;
			break;
		case 80:
			uParam0->f_7 = 1553445/*func_4873*/;
			break;
		case 84:
			uParam0->f_1 = 1552905/*func_4871*/;
			break;
		case 85:
			uParam0->f_1 = 1548803/*func_4863*/;
			break;
		case 87:
			uParam0->f_1 = 1544816/*func_4851*/;
			break;
		case 88:
			uParam0->f_1 = 1544302/*func_4847*/;
			break;
		case 89:
			uParam0->f_54 = 1544131/*func_4846*/;
			break;
		case 90:
			uParam0->f_1 = 1543959/*func_4843*/;
			break;
		case 91:
			uParam0->f_1 = 1543763/*func_4841*/;
			break;
		case 92:
			uParam0->f_1 = 1542311/*func_4837*/;
			break;
		case 94:
			uParam0->f_1 = 1538184/*func_4826*/;
			break;
		case 95:
			uParam0->f_22 = 1537888/*func_4823*/;
			break;
		case 96:
			uParam0->f_1 = 1537858/*func_4822*/;
			break;
		case 97:
			uParam0->f_1 = 1537190/*func_4819*/;
			break;
		case 98:
			uParam0->f_1 = 1534541/*func_4800*/;
			break;
		case 100:
			uParam0->f_22 = 1526478/*func_4776*/;
			break;
		case 101:
			uParam0->f_22 = 1524549/*func_4767*/;
			break;
		case 78:
			uParam0->f_59 = 1524329/*func_4765*/;
			break;
		case 125:
			uParam0->f_19 = 1524305/*func_4764*/;
			break;
	}
}

int func_4800(int iParam0, int* iParam1)//Position - 0x176A4D
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
			if ((__LIB_1__::func_264(bVar2, 1, 1) && !__LIB_7__::func_211(bVar2)) && !Global_2824892)
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
							func_3061(&(iParam1->f_140[0]), Global_1853191, 1, 0);
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
					if (__LIB_1__::func_264(bVar2, 0, 1) && !__LIB_7__::func_211(bVar2))
					{
						if (iVar1 < 4)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar1]))
							{
								func_3061(&(iParam1->f_140[iVar1]), bVar2, 1, 0);
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
				__LIB_36__::func_822(0, 1, 0, 1, 0, 1, 0, 1, 1, 0);
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
			func_3061(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_4837(int iParam0, int* iParam1)//Position - 0x1788A7
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
				__LIB_41__::func_163(&iVar1, &(iParam1->f_109), 48, 10f, 20f, 15f);
			}
			else
			{
				func_2080(&iVar1, &(iParam1->f_109), 40);
			}
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else if (func_4839(&iVar1, &(iParam1->f_109), &(iParam1->f_109.f_1), &(Global_1946250.f_4508), 1))
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
							func_3061(&(iParam1->f_140[iVar3]), bVar5, 1, 0);
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

int func_4839(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x178BB9
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
					func_2075(uParam2[iVar1], iVar3, 1, 0);
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

int func_4863(int iParam0, int* iParam1)//Position - 0x17A203
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
			func_2080(&iVar0, &(iParam1->f_109), 60);
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
		else if (func_2074(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
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
		func_3061(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_4871(int iParam0, var uParam1)//Position - 0x17B209
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
				else if (!__LIB_41__::func_163(&iVar1, &(uParam1->f_122), 16, Var2))
				{
					bVar0 = false;
				}
				else
				{
					func_2080(&iVar1, &(uParam1->f_122), 24);
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

void func_4921(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x17CAA3
{
	struct<3> Var0;
	int iVar1;
	if (__LIB_7__::func_700(iParam0))
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
					*iParam2 = func_3624(Var0, 0);
					HUD::SET_BLIP_SPRITE(*iParam2, iVar1);
					HUD::SET_BLIP_SCALE(*iParam2, 1f);
					HUD::SET_BLIP_PRIORITY(*iParam2, 5);
					__LIB_6__::func_958(iParam2, 166);
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

void func_4946(int iParam0, int iParam1)//Position - 0x189650
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
	if (__LIB_6__::func_138(PLAYER::PLAYER_ID(), iParam0))
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
								if (((((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_701(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(uVar0[iVar6])) && !__LIB_7__::func_211(bVar7)) && !__LIB_8__::func_108(bVar7, 1)) && !__LIB_7__::func_878(bVar7)) && !func_2267(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if ((((((((!bVar3 && __LIB_3__::func_999(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_701(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(uVar0[iVar6])) && !__LIB_7__::func_211(bVar7)) && !__LIB_8__::func_108(bVar7, 1)) && !__LIB_7__::func_878(bVar7)) && !func_2267(bVar7))
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
						__LIB_25__::func_251(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_251(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4947(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4947(iParam0);
					}
					Jump @653; //curOff = 634
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_4947(int iParam0)//Position - 0x1898E0
{
	__LIB_25__::func_251(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4998(var uParam0, int iParam1)//Position - 0x18BE1D
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1649048/*func_5161*/;
			break;
		case 1:
			uParam0->f_30 = 1648992/*func_5160*/;
			break;
		case 2:
			uParam0->f_31 = 1648723/*func_5159*/;
			break;
		case 3:
			uParam0->f_34 = 1648664/*func_5158*/;
			break;
		case 4:
			uParam0->f_12 = 1648633/*func_5157*/;
			break;
		case 37:
			uParam0->f_18 = 1648513/*func_5156*/;
			break;
		case 38:
			uParam0->f_9 = 1648429/*func_5155*/;
			break;
		case 6:
			uParam0->f_32 = 1648365/*func_5154*/;
			break;
		case 111:
			uParam0->f_35 = 1648342/*func_5153*/;
			break;
		case 11:
			uParam0->f_11 = 1648333/*func_5152*/;
			break;
		case 12:
			uParam0->f_33 = 1647880/*func_5149*/;
			break;
		case 14:
			uParam0->f_11 = 1647871/*func_5148*/;
			break;
		case 109:
			uParam0->f_56 = 1647863/*func_5147*/;
			break;
		case 79:
			*uParam0 = 1647839/*func_5146*/;
			break;
		case 13:
			uParam0->f_2 = 1647830/*func_5145*/;
			break;
		case 15:
			uParam0->f_2 = 1643350/*func_5124*/;
			break;
		case 75:
			uParam0->f_4 = 1643341/*func_5123*/;
			break;
		case 16:
			uParam0->f_5 = 1643157/*func_5122*/;
			break;
		case 108:
			uParam0->f_55 = 1640060/*func_5108*/;
			break;
		case 17:
			uParam0->f_17 = 1639550/*func_5106*/;
			break;
		case 19:
			uParam0->f_17 = 1639523/*func_5105*/;
			break;
		case 20:
			uParam0->f_3 = 1639445/*func_5104*/;
			break;
		case 21:
			uParam0->f_3 = 1639382/*func_5103*/;
			break;
		case 74:
			uParam0->f_53 = 1639167/*func_5101*/;
			break;
		case 22:
			uParam0->f_24 = 1639044/*func_5100*/;
			break;
		case 25:
			uParam0->f_23 = 1638096/*func_5095*/;
			break;
		case 30:
			uParam0->f_8 = 1637532/*func_5093*/;
			break;
		case 31:
			uParam0->f_39 = 1637353/*func_5090*/;
			break;
		case 33:
			uParam0->f_40 = 1636241/*func_5085*/;
			break;
		case 34:
			uParam0->f_41 = 1635547/*func_5083*/;
			break;
		case 36:
			uParam0->f_58 = 1635494/*func_5082*/;
			break;
		case 35:
			uParam0->f_42 = 1634917/*func_5080*/;
			break;
		case 45:
			uParam0->f_14 = 1634908/*func_5079*/;
			break;
		case 46:
			uParam0->f_14 = 1634899/*func_5078*/;
			break;
		case 110:
			uParam0->f_57 = 1634722/*func_5077*/;
			break;
		case 77:
			uParam0->f_13 = 1634711/*func_5076*/;
			break;
		case 47:
			uParam0->f_43 = 1634213/*func_5073*/;
			break;
		case 49:
			uParam0->f_8 = 1634172/*func_5072*/;
			break;
		case 50:
			*uParam0 = 1634163/*func_5071*/;
			break;
		case 51:
			*uParam0 = 1634154/*func_5070*/;
			break;
		case 52:
			uParam0->f_15 = 1634143/*func_5069*/;
			break;
		case 53:
			uParam0->f_13 = 1634132/*func_5068*/;
			break;
		case 54:
			uParam0->f_45 = 1634124/*func_5067*/;
			break;
		case 56:
			uParam0->f_46 = 1634115/*func_5066*/;
			break;
		case 57:
			uParam0->f_11 = 1634106/*func_5065*/;
			break;
		case 58:
			uParam0->f_13 = 1633877/*func_5064*/;
			break;
		case 64:
			uParam0->f_47 = 1627950/*func_5033*/;
			break;
		case 65:
			uParam0->f_21 = 1626336/*func_5024*/;
			break;
		case 66:
			uParam0->f_21 = 1626025/*func_5022*/;
			break;
		case 67:
			uParam0->f_21 = 1625300/*func_5018*/;
			break;
		case 68:
			*uParam0 = 1624755/*func_5017*/;
			break;
		case 69:
			*uParam0 = 1624746/*func_5016*/;
			break;
		case 70:
			uParam0->f_48 = 1624734/*func_5015*/;
			break;
		case 71:
			uParam0->f_49 = 1624725/*func_5014*/;
			break;
		case 107:
			uParam0->f_50 = 1624713/*func_5013*/;
			break;
		case 80:
			uParam0->f_7 = 1622997/*func_5003*/;
			break;
		case 78:
			uParam0->f_59 = 1622547/*func_5000*/;
			break;
		case 125:
			uParam0->f_19 = 1622531/*func_4999*/;
			break;
	}
}

void func_5033(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x18D72E
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar0 = func_5061();
	if ((func_5124(iParam1) && !__LIB_4__::func_27(PLAYER::PLAYER_ID())) && PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
	{
		__LIB_32__::func_366(uParam0, 1);
		__LIB_3__::func_307(0);
	}
	if (__LIB_7__::func_556(iVar0))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_25__::func_490(uParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !func_5124(iParam1))
		{
		}
		else if (!__LIB_3__::func_998(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
		{
			__LIB_32__::func_366(uParam0, 1);
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
	if ((__LIB_3__::func_326(PLAYER::PLAYER_ID()) || __LIB_3__::func_325(PLAYER::PLAYER_ID())) && func_5051(iParam1))
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
			__LIB_25__::func_112(PLAYER::PLAYER_ID(), 1, 0, 0);
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
				if (__LIB_4__::func_106(PLAYER::PLAYER_ID()))
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
				__LIB_6__::func_404(&(uParam0->f_22.f_94));
			}
		}
		if (!__LIB_4__::func_27(PLAYER::PLAYER_ID()))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (!__LIB_4__::func_106(__LIB_4__::func_925(iVar0, 1, 0)))
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
						if (func_5124(iParam1) && !__LIB_4__::func_27(PLAYER::PLAYER_ID()))
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

int func_5051(int iParam0)//Position - 0x18E33F
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_5124(iParam0))
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

int func_5061()//Position - 0x18EABF
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
	bool bVar11;
	if ((Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_16 != -1 && __LIB_4__::func_735(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_16) == 9)
	{
		return -1;
	}
	if (__LIB_4__::func_958(PLAYER::PLAYER_ID()) && !__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_3__::func_325(PLAYER::PLAYER_ID()) && __LIB_4__::func_106(Global_1853191))
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
		bVar11 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
		if (bVar11 != __LIB_0__::func_160() && __LIB_3__::func_330(bVar11))
		{
			return __LIB_4__::func_159(bVar11);
		}
	}
	return Global_2815059.f_308;
}

Vector3 func_5064(var uParam0)//Position - 0x18EE55
{
	int iVar0;
	iVar0 = func_5061();
	if (Global_1853190 != __LIB_0__::func_160())
	{
		if (__LIB_4__::func_106(Global_1853190))
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

void func_5085(int iParam0, int iParam1)//Position - 0x18F791
{
	bool bVar0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = __LIB_0__::func_160();
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_8 = 0;
	Global_1946250.f_506 = 0;
	bVar0 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
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
					__LIB_4__::func_114(Global_1853191);
				}
				Global_1853190 = Global_1853191;
			}
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853190;
		}
	}
	else if ((Global_1946250.f_3280 != -1 && Global_1946250.f_3280 != PLAYER::PLAYER_ID()) && !__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		__LIB_18__::func_700(bVar0, 1);
		MISC::SET_BIT(&(Global_1946250.f_506), 5);
		Global_1853190 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853190;
	}
	else if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0) && !__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		__LIB_18__::func_700(bVar0, 0);
		if (bVar0 != __LIB_0__::func_160())
		{
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = bVar0;
		}
	}
	else if (__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		__LIB_18__::func_700(bVar0, 1);
		MISC::SET_BIT(&(Global_1946250.f_506), 5);
		Global_1853190 = Global_1946250.f_3630;
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1946250.f_3630;
	}
	else if (__LIB_3__::func_330(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == __LIB_4__::func_925(func_5061(), 1, 0))
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
	__LIB_7__::func_802();
}

void func_5095(int iParam0, int iParam1)//Position - 0x18FED0
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
								if ((((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_701(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_2267(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_999(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_701(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_2267(bVar7))
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
						func_5085(iParam0, -1);
					}
					bVar9 = __LIB_3__::func_339(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						func_5085(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							func_5097(1);
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_5096(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							func_5097(1);
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_5096(iParam0);
					}
					Jump @657; //curOff = 638
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_5096(int iParam0)//Position - 0x190164
{
	func_5085(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_5097(int iParam0)//Position - 0x190192
{
	int iVar0;
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || iParam0)
	{
		iVar0 = func_5061();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if ((__LIB_4__::func_925(iVar0, 1, 0) == PLAYER::PLAYER_ID() && !__LIB_4__::func_106(PLAYER::PLAYER_ID())) && !__LIB_3__::func_931())
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_18 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 2f, -17f, 0f) };
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_24 = ENTITY::GET_ENTITY_HEADING(iVar0);
			}
		}
	}
}

int func_5108(var uParam0, var uParam1, var uParam2)//Position - 0x19067C
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	*uParam2 = 1;
	if (Global_262145.f_23133 /* Tunable: 200197103 */)
	{
		return 0;
	}
	iVar0 = func_5061();
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
		__LIB_32__::func_366(uParam1, 1);
		__LIB_3__::func_307(0);
	}
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_6__::func_404(&(uParam1->f_22.f_94));
			}
			__LIB_32__::func_366(uParam1, 1);
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
						if (!func_5124(*uParam0) && __LIB_25__::func_490(uParam1, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 0))
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
										__LIB_7__::func_508(&(uParam1->f_22.f_94), 5, sVar2, 0, 0, 0, 0);
									}
									if (__LIB_0__::func_77(0))
									{
										__LIB_6__::func_404(&(uParam1->f_22.f_94));
									}
								}
								if (((!bVar1 && __LIB_2__::func_187(uParam1->f_22.f_94, 1)) || ((bVar1 && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 52 /*INPUT_CONTEXT_SECONDARY*/)) && !HUD::IS_WARNING_MESSAGE_ACTIVE())) || BitTest(uParam1->f_22, 1))
								{
									__LIB_32__::func_366(uParam1, 0);
									__LIB_3__::func_344(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 25f, 0);
									__LIB_6__::func_404(&(uParam1->f_22.f_94));
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
										__LIB_25__::func_112(PLAYER::PLAYER_ID(), 0, 0, 0);
										__LIB_25__::func_348(1);
										__LIB_3__::func_344(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 25f, 0);
										__LIB_3__::func_345(0);
										__LIB_7__::func_375(1, 88);
										return 1;
									}
									else if (!__LIB_2__::func_560())
									{
										__LIB_3__::func_324(1);
										__LIB_3__::func_323(1);
										__LIB_25__::func_348(1);
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
							__LIB_6__::func_404(&(uParam1->f_22.f_94));
						}
					}
					else
					{
						__LIB_3__::func_345(0);
						if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_6__::func_404(&(uParam1->f_22.f_94));
						}
						__LIB_32__::func_366(uParam1, 1);
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
							__LIB_6__::func_404(&(uParam1->f_22.f_94));
						}
					}
					__LIB_32__::func_366(uParam1, 1);
					__LIB_3__::func_307(0);
				}
			}
			else
			{
				func_5109(*uParam0);
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
								__LIB_25__::func_112(PLAYER::PLAYER_ID(), 1, 0, 0);
								__LIB_3__::func_320(0);
								__LIB_3__::func_322(0);
								__LIB_3__::func_319(0);
								__LIB_0__::func_579(&(uParam1->f_22.f_101));
							}
						}
					}
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
					__LIB_8__::func_611(0);
					__LIB_4__::func_114(Global_1946250.f_3630);
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
				__LIB_6__::func_404(&(uParam1->f_22.f_94));
			}
			__LIB_32__::func_366(uParam1, 1);
			__LIB_3__::func_307(0);
		}
	}
	else if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
	{
		HUD::CLEAR_HELP(true);
		__LIB_6__::func_404(&(uParam1->f_22.f_94));
	}
	if (((__LIB_0__::func_1("GR_ETFE_NOTV" /* GXT: You cannot modify this vehicle in your Mobile Operations Center. */) || __LIB_0__::func_1("GR_ETFE_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFS_TRAIL" /* GXT: You cannot store this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFA_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. The Anti-Aircraft Trailer can only be modified in the Bunker. */))
	{
		HUD::CLEAR_HELP(true);
	}
	return 0;
}

void func_5109(int iParam0)//Position - 0x190DA3
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
									if (func_5051(iParam0))
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
											__LIB_25__::func_112(PLAYER::PLAYER_ID(), 1, 0, 0);
											__LIB_3__::func_320(0);
											__LIB_3__::func_322(0);
										}
									}
									else if (__LIB_4__::func_31())
									{
										if (CAM::IS_SCREEN_FADED_IN())
										{
											__LIB_25__::func_112(PLAYER::PLAYER_ID(), 0, 0, 0);
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

int func_5124(int iParam0)//Position - 0x191356
{
	int iVar0;
	bool bVar1;
	if (__LIB_3__::func_165() || __LIB_3__::func_164(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	bVar1 = false;
	iVar0 = func_5061();
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
		if (!__LIB_4__::func_106(__LIB_4__::func_925(iVar0, 1, 0)))
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
	if (func_5144(iParam0, iVar0))
	{
		return 1;
	}
	if (func_5143(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_4__::func_161(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_5140(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_4__::func_161(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_5139(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_4__::func_161(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_5134(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_4__::func_161(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_5133(iParam0, iVar0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
		{
			if (!__LIB_4__::func_161(__LIB_4__::func_925(iVar0, 1, 0)))
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
	if (func_5130(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_4__::func_161(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_5129(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_4__::func_161(__LIB_4__::func_925(iVar0, 1, 0))))
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
	if (func_5128(iParam0))
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
	if (__LIB_4__::func_157(__LIB_4__::func_925(iVar0, 1, 0)))
	{
		return 1;
	}
	if (__LIB_4__::func_160(__LIB_4__::func_925(iVar0, 1, 0)))
	{
		return 1;
	}
	if (__LIB_2__::func_745())
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_4__::func_161(__LIB_4__::func_925(iVar0, 1, 0))))
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
	if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false)) && func_5126())
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_4__::func_161(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (((((((((BitTest(Global_1946250, 19) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_186(PLAYER::PLAYER_ID())) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false)) && !__LIB_4__::func_958(PLAYER::PLAYER_ID())) && !__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_4__::func_106(__LIB_4__::func_925(iVar0, 1, 0)) && !__LIB_4__::func_958(PLAYER::PLAYER_ID()))
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

int func_5126()//Position - 0x191A87
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	iVar2 = func_5061();
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, false))
	{
		func_5127(88, &Var0);
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar2, 0f, -8f, -0.6f) };
		if (MISC::ABSF((Var0.f_2 - Var1.f_2)) > 5f)
		{
			return 1;
		}
	}
	return 0;
}

void func_5127(int iParam0, var uParam1)//Position - 0x191ADF
{
	int iVar0;
	var uVar1;
	switch (iParam0)
	{
		case 88:
			iVar0 = func_5061();
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

int func_5128(int iParam0)//Position - 0x191B68
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	iVar0 = func_5061();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		func_5127(iParam0, &Var1);
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

int func_5129(int iParam0, int iParam1)//Position - 0x191BE3
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_5127(iParam0, &Var0);
		if (!__LIB_4__::func_135(PLAYER::PLAYER_ID()))
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

int func_5130(int iParam0, int iParam1)//Position - 0x191C3E
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_5127(iParam0, &Var0);
		if (SYSTEM::VDIST2(__LIB_3__::func_82(__LIB_7__::func_864(__LIB_4__::func_925(iParam1, 1, 0))), Var0) <= 3600f || SYSTEM::VDIST2(__LIB_3__::func_81(__LIB_7__::func_864(__LIB_4__::func_925(iParam1, 1, 0))), Var0) <= 3600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_5133(int iParam0, int iParam1)//Position - 0x191ED0
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_5127(iParam0, &Var0);
		if (!__LIB_4__::func_107(PLAYER::PLAYER_ID()))
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

int func_5134(int iParam0, int iParam1)//Position - 0x191F2C
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_5127(iParam0, &Var0);
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

int func_5139(int iParam0, int iParam1)//Position - 0x1920BB
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_5127(iParam0, &Var0);
		if ((((SYSTEM::VDIST2(759.36f, -675.13f, 27.86f, Var0) <= 900f || SYSTEM::VDIST2(-144.58f, -1341.37f, 28.87f, Var0) <= 900f) || SYSTEM::VDIST2(-171f, -31.4f, 51.27f, Var0) <= 900f) || SYSTEM::VDIST2(231.54f, -1875.7f, 25.41f, Var0) <= 900f) || SYSTEM::VDIST2(488.98f, -897.41f, 24.79f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_5140(int iParam0, int iParam1)//Position - 0x192192
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_5127(iParam0, &Var0);
		if (((((SYSTEM::VDIST2(-237.12f, 6228.7554f, 30.5005f, Var0) <= 900f || SYSTEM::VDIST2(1710.83f, 4760.13f, 41.0504f, Var0) <= 900f) || SYSTEM::VDIST2(-105.19f, -1778.3f, 28.51f, Var0) <= 900f) || SYSTEM::VDIST2(-617.7421f, 285.8363f, 80.6871f, Var0) <= 900f) || SYSTEM::VDIST2(-1287.1135f, -278.0045f, 37.5935f, Var0) <= 900f) || SYSTEM::VDIST2(726.7626f, -822.4685f, 23.8603f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_5143(int iParam0, int iParam1)//Position - 0x1922F4
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_5127(iParam0, &Var0);
		if (((((((((SYSTEM::VDIST2(931.99f, 43.83f, 80.1f, Var0) <= 900f || SYSTEM::VDIST2(930.45f, 41.36f, 80.1f, Var0) <= 900f) || SYSTEM::VDIST2(964.4556f, 57.9093f, 112.1931f, Var0) <= 900f) || SYSTEM::VDIST2(926.4164f, 45.5401f, 59.9018f, Var0) <= 900f) || SYSTEM::VDIST2(936.3319f, 1.1849f, 77.7649f, Var0) <= 900f) || SYSTEM::VDIST2(968.591f, 63.923855f, 111.55298f, Var0) <= 900f) || SYSTEM::VDIST2(967.22f, 62.69f, 111.5531f, Var0) <= 900f) || SYSTEM::VDIST2(936.5542f, 1.1273f, 77.7649f, Var0) <= 900f) || SYSTEM::VDIST2(925.04f, 46.48f, 80.096f, Var0) <= 900f) || SYSTEM::VDIST2(924.507f, 60.3318f, 79.89629f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_5144(int iParam0, int iParam1)//Position - 0x19247A
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_5127(iParam0, &Var0);
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

void func_5149(int iParam0, int iParam1, var uParam2)//Position - 0x192508
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = func_5061();
	switch (iParam1)
	{
		case 0:
			func_5127(iParam0, &(uParam2->f_4));
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
			func_5150(iParam0, &(uParam2->f_4), &(uParam2->f_7), &(uParam2->f_10), &(uParam2->f_13), &(uParam2->f_14));
			uParam2->f_2 = 1;
			MISC::SET_BIT(&(uParam2->f_3), 0);
			MISC::SET_BIT(&(uParam2->f_3), 2);
			MISC::SET_BIT(&(uParam2->f_3), 5);
			break;
	}
}

void func_5150(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x192606
{
	int iVar0;
	var uVar1;
	iVar0 = func_5061();
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

void func_5162(var uParam0, int iParam1)//Position - 0x1929A1
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1701940/*func_5329*/;
			break;
		case 1:
			uParam0->f_30 = 1701860/*func_5328*/;
			break;
		case 2:
			uParam0->f_31 = 1701361/*func_5327*/;
			break;
		case 3:
			uParam0->f_34 = 1701311/*func_5326*/;
			break;
		case 4:
			uParam0->f_12 = 1701224/*func_5325*/;
			break;
		case 5:
			uParam0->f_11 = 1701214/*func_5324*/;
			break;
		case 37:
			uParam0->f_18 = 1701094/*func_5323*/;
			break;
		case 38:
			uParam0->f_9 = 1700972/*func_5322*/;
			break;
		case 6:
			uParam0->f_32 = 1700884/*func_5321*/;
			break;
		case 111:
			uParam0->f_35 = 1700870/*func_5320*/;
			break;
		case 11:
			uParam0->f_11 = 1700861/*func_5319*/;
			break;
		case 12:
			uParam0->f_33 = 1700482/*func_5316*/;
			break;
		case 14:
			uParam0->f_11 = 1700473/*func_5315*/;
			break;
		case 109:
			uParam0->f_56 = 1700465/*func_5314*/;
			break;
		case 79:
			*uParam0 = 1700441/*func_5313*/;
			break;
		case 13:
			uParam0->f_2 = 1700309/*func_5312*/;
			break;
		case 15:
			uParam0->f_2 = 1700027/*func_5310*/;
			break;
		case 75:
			uParam0->f_4 = 1700013/*func_5309*/;
			break;
		case 16:
			uParam0->f_5 = 1699495/*func_5307*/;
			break;
		case 108:
			uParam0->f_55 = 1695871/*func_5295*/;
			break;
		case 17:
			uParam0->f_17 = 1695332/*func_5293*/;
			break;
		case 19:
			uParam0->f_17 = 1695305/*func_5292*/;
			break;
		case 20:
			uParam0->f_3 = 1695221/*func_5291*/;
			break;
		case 21:
			uParam0->f_3 = 1695157/*func_5290*/;
			break;
		case 74:
			uParam0->f_53 = 1694977/*func_5289*/;
			break;
		case 22:
			uParam0->f_24 = 1694830/*func_5288*/;
			break;
		case 25:
			uParam0->f_23 = 1694206/*func_5286*/;
			break;
		case 30:
			uParam0->f_8 = 1693691/*func_5284*/;
			break;
		case 31:
			uParam0->f_39 = 1693404/*func_5283*/;
			break;
		case 33:
			uParam0->f_40 = 1692733/*func_5281*/;
			break;
		case 34:
			uParam0->f_41 = 1691469/*func_5280*/;
			break;
		case 36:
			uParam0->f_58 = 1691424/*func_5279*/;
			break;
		case 35:
			uParam0->f_42 = 1664995/*func_5271*/;
			break;
		case 45:
			uParam0->f_14 = 1664986/*func_5270*/;
			break;
		case 46:
			uParam0->f_14 = 1664977/*func_5269*/;
			break;
		case 110:
			uParam0->f_57 = 1664969/*func_5268*/;
			break;
		case 77:
			uParam0->f_13 = 1664946/*func_5267*/;
			break;
		case 47:
			uParam0->f_43 = 1664842/*func_5266*/;
			break;
		case 49:
			uParam0->f_8 = 1664801/*func_5265*/;
			break;
		case 50:
			*uParam0 = 1664587/*func_5262*/;
			break;
		case 51:
			*uParam0 = 1664518/*func_5261*/;
			break;
		case 52:
			uParam0->f_15 = 1664507/*func_5260*/;
			break;
		case 53:
			uParam0->f_13 = 1664369/*func_5259*/;
			break;
		case 54:
			uParam0->f_45 = 1664181/*func_5258*/;
			break;
		case 56:
			uParam0->f_46 = 1664172/*func_5257*/;
			break;
		case 57:
			uParam0->f_11 = 1663995/*func_5255*/;
			break;
		case 58:
			uParam0->f_13 = 1663857/*func_5254*/;
			break;
		case 64:
			uParam0->f_47 = 1663849/*func_5253*/;
			break;
		case 65:
			uParam0->f_21 = 1663013/*func_5251*/;
			break;
		case 66:
			uParam0->f_21 = 1662906/*func_5250*/;
			break;
		case 67:
			uParam0->f_21 = 1662842/*func_5249*/;
			break;
		case 68:
			*uParam0 = 1662354/*func_5248*/;
			break;
		case 69:
			*uParam0 = 1662345/*func_5247*/;
			break;
		case 70:
			uParam0->f_48 = 1662333/*func_5246*/;
			break;
		case 71:
			uParam0->f_49 = 1662324/*func_5245*/;
			break;
		case 107:
			uParam0->f_50 = 1662312/*func_5244*/;
			break;
		case 80:
			uParam0->f_7 = 1661609/*func_5240*/;
			break;
		case 84:
			uParam0->f_1 = 1661509/*func_5238*/;
			break;
		case 85:
			uParam0->f_1 = 1659525/*func_5235*/;
			break;
		case 87:
			uParam0->f_1 = 1657102/*func_5223*/;
			break;
		case 88:
			uParam0->f_1 = 1657093/*func_5222*/;
			break;
		case 96:
			uParam0->f_1 = 1657030/*func_5221*/;
			break;
		case 97:
			uParam0->f_1 = 1656708/*func_5218*/;
			break;
		case 98:
			uParam0->f_1 = 1652701/*func_5184*/;
			break;
		case 100:
			uParam0->f_22 = 1650425/*func_5166*/;
			break;
		case 78:
			uParam0->f_59 = 1650221/*func_5164*/;
			break;
		case 125:
			uParam0->f_19 = 1650205/*func_5163*/;
			break;
	}
}

int func_5184(int iParam0, int* iParam1)//Position - 0x1937DD
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	__LIB_25__::func_129(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		func_2080(&iVar0, &(iParam1->f_109), 12);
		__LIB_7__::func_568(iParam0, &(iParam1->f_109));
	}
	__LIB_31__::func_964(iParam0, Global_1853189, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
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

int func_5235(int iParam0, int* iParam1)//Position - 0x195285
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
			func_2080(&iVar0, &(iParam1->f_109), 60);
			__LIB_2__::func_416(&(iParam1->f_109));
			return 0;
		}
		else
		{
			func_2074(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 0, 0, 0, 0, 1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_3061(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
	}
	bVar1 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
	{
		bVar1 = __LIB_3__::func_390(iParam0, &(iParam1->f_109));
	}
	__LIB_25__::func_130(iParam0, &(Global_1946250.f_3638), 0, bVar1);
	__LIB_31__::func_964(iParam0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	__LIB_7__::func_449(iParam1, 0);
	return 1;
}

void func_5286(int iParam0, int iParam1)//Position - 0x19D9FE
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
								if ((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_701(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !func_2267(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if (((((!bVar3 && __LIB_3__::func_999(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_701(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !func_2267(bVar7))
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
						__LIB_25__::func_257(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_257(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_5287(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_5287(iParam0);
					}
					Jump @575; //curOff = 556
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_5287(int iParam0)//Position - 0x19DC40
{
	__LIB_25__::func_257(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_5330(var uParam0, int iParam1)//Position - 0x19F83D
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1710568/*func_5392*/;
			break;
		case 1:
			uParam0->f_30 = 1710512/*func_5391*/;
			break;
		case 2:
			uParam0->f_31 = 1710293/*func_5390*/;
			break;
		case 3:
			uParam0->f_34 = 1710242/*func_5389*/;
			break;
		case 4:
			uParam0->f_12 = 1710208/*func_5388*/;
			break;
		case 6:
			uParam0->f_32 = 1710144/*func_5387*/;
			break;
		case 111:
			uParam0->f_35 = 1710135/*func_5386*/;
			break;
		case 79:
			*uParam0 = 1710111/*func_5385*/;
			break;
		case 11:
			uParam0->f_11 = 1710102/*func_5384*/;
			break;
		case 12:
			uParam0->f_33 = 1710010/*func_5383*/;
			break;
		case 14:
			uParam0->f_11 = 1710001/*func_5382*/;
			break;
		case 109:
			uParam0->f_56 = 1709993/*func_5381*/;
			break;
		case 15:
			uParam0->f_2 = 1709741/*func_5380*/;
			break;
		case 13:
			uParam0->f_2 = 1709732/*func_5379*/;
			break;
		case 75:
			uParam0->f_4 = 1709723/*func_5378*/;
			break;
		case 16:
			uParam0->f_5 = 1709714/*func_5377*/;
			break;
		case 108:
			uParam0->f_55 = 1709705/*func_5376*/;
			break;
		case 17:
			uParam0->f_17 = 1709659/*func_5375*/;
			break;
		case 19:
			uParam0->f_17 = 1709647/*func_5374*/;
			break;
		case 20:
			uParam0->f_3 = 1709600/*func_5373*/;
			break;
		case 21:
			uParam0->f_3 = 1709548/*func_5372*/;
			break;
		case 74:
			uParam0->f_53 = 1709492/*func_5371*/;
			break;
		case 22:
			uParam0->f_24 = 1709407/*func_5370*/;
			break;
		case 25:
			uParam0->f_23 = 1708440/*func_5365*/;
			break;
		case 30:
			uParam0->f_8 = 1708230/*func_5364*/;
			break;
		case 31:
			uParam0->f_39 = 1708198/*func_5363*/;
			break;
		case 33:
			uParam0->f_40 = 1708008/*func_5362*/;
			break;
		case 34:
			uParam0->f_41 = 1704803/*func_5360*/;
			break;
		case 36:
			uParam0->f_58 = 1704750/*func_5359*/;
			break;
		case 35:
			uParam0->f_42 = 1703557/*func_5357*/;
			break;
		case 45:
			uParam0->f_14 = 1703548/*func_5356*/;
			break;
		case 46:
			uParam0->f_14 = 1703539/*func_5355*/;
			break;
		case 110:
			uParam0->f_57 = 1703531/*func_5354*/;
			break;
		case 77:
			uParam0->f_13 = 1703520/*func_5353*/;
			break;
		case 47:
			uParam0->f_43 = 1703417/*func_5352*/;
			break;
		case 49:
			uParam0->f_8 = 1703392/*func_5351*/;
			break;
		case 50:
			*uParam0 = 1703354/*func_5350*/;
			break;
		case 51:
			*uParam0 = 1703345/*func_5349*/;
			break;
		case 52:
			uParam0->f_15 = 1703334/*func_5348*/;
			break;
		case 53:
			uParam0->f_13 = 1703253/*func_5347*/;
			break;
		case 54:
			uParam0->f_45 = 1703245/*func_5346*/;
			break;
		case 56:
			uParam0->f_46 = 1703236/*func_5345*/;
			break;
		case 57:
			uParam0->f_11 = 1703226/*func_5344*/;
			break;
		case 58:
			uParam0->f_13 = 1703019/*func_5343*/;
			break;
		case 64:
			uParam0->f_47 = 1703011/*func_5342*/;
			break;
		case 65:
			uParam0->f_21 = 1703003/*func_5341*/;
			break;
		case 66:
			uParam0->f_21 = 1702995/*func_5340*/;
			break;
		case 67:
			uParam0->f_21 = 1702987/*func_5339*/;
			break;
		case 68:
			*uParam0 = 1702978/*func_5338*/;
			break;
		case 69:
			*uParam0 = 1702969/*func_5337*/;
			break;
		case 70:
			uParam0->f_48 = 1702957/*func_5336*/;
			break;
		case 71:
			uParam0->f_49 = 1702948/*func_5335*/;
			break;
		case 107:
			uParam0->f_50 = 1702936/*func_5334*/;
			break;
		case 80:
			uParam0->f_7 = 1702927/*func_5333*/;
			break;
		case 73:
			uParam0->f_51 = 1702918/*func_5332*/;
			break;
		case 78:
			uParam0->f_59 = 1702910/*func_5331*/;
			break;
	}
}

void func_5365(int iParam0, int iParam1)//Position - 0x1A1198
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
								if ((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_701(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((!bVar1 && __LIB_3__::func_999(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_701(bVar7))
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
						__LIB_19__::func_330(iParam0, -1);
					}
					bVar9 = __LIB_3__::func_419(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_19__::func_330(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_6__::func_438(1);
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_6__::func_137(), true), ENTITY::GET_ENTITY_HEADING(__LIB_6__::func_137()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_5366(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_6__::func_438(1);
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_6__::func_137(), true), ENTITY::GET_ENTITY_HEADING(__LIB_6__::func_137()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_5366(iParam0);
					}
					Jump @634; //curOff = 615
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_5366(int iParam0)//Position - 0x1A1415
{
	__LIB_19__::func_330(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_5393(var uParam0, int iParam1)//Position - 0x1A19F1
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1788171/*func_5547*/;
			break;
		case 1:
			uParam0->f_30 = 1788115/*func_5546*/;
			break;
		case 2:
			uParam0->f_31 = 1786570/*func_5545*/;
			break;
		case 3:
			uParam0->f_34 = 1786521/*func_5544*/;
			break;
		case 4:
			uParam0->f_12 = 1786487/*func_5543*/;
			break;
		case 6:
			uParam0->f_32 = 1786423/*func_5542*/;
			break;
		case 111:
			uParam0->f_35 = 1786400/*func_5541*/;
			break;
		case 79:
			*uParam0 = 1786376/*func_5540*/;
			break;
		case 37:
			uParam0->f_18 = 1786256/*func_5539*/;
			break;
		case 38:
			uParam0->f_9 = 1786189/*func_5538*/;
			break;
		case 11:
			uParam0->f_11 = 1786180/*func_5537*/;
			break;
		case 12:
			uParam0->f_33 = 1785833/*func_5535*/;
			break;
		case 14:
			uParam0->f_11 = 1785824/*func_5534*/;
			break;
		case 109:
			uParam0->f_56 = 1785816/*func_5533*/;
			break;
		case 15:
			uParam0->f_2 = 1780490/*func_5511*/;
			break;
		case 13:
			uParam0->f_2 = 1780481/*func_5510*/;
			break;
		case 75:
			uParam0->f_4 = 1780472/*func_5509*/;
			break;
		case 16:
			uParam0->f_5 = 1780447/*func_5508*/;
			break;
		case 108:
			uParam0->f_55 = 1773910/*func_5493*/;
			break;
		case 17:
			uParam0->f_17 = 1773324/*func_5492*/;
			break;
		case 19:
			uParam0->f_17 = 1773297/*func_5491*/;
			break;
		case 20:
			uParam0->f_3 = 1773236/*func_5490*/;
			break;
		case 21:
			uParam0->f_3 = 1773116/*func_5489*/;
			break;
		case 74:
			uParam0->f_53 = 1773060/*func_5488*/;
			break;
		case 22:
			uParam0->f_24 = 1772975/*func_5487*/;
			break;
		case 25:
			uParam0->f_23 = 1772003/*func_5482*/;
			break;
		case 30:
			uParam0->f_8 = 1771263/*func_5481*/;
			break;
		case 31:
			uParam0->f_39 = 1770992/*func_5480*/;
			break;
		case 33:
			uParam0->f_40 = 1770081/*func_5478*/;
			break;
		case 34:
			uParam0->f_41 = 1766729/*func_5477*/;
			break;
		case 36:
			uParam0->f_58 = 1766676/*func_5476*/;
			break;
		case 35:
			uParam0->f_42 = 1765993/*func_5474*/;
			break;
		case 45:
			uParam0->f_14 = 1765984/*func_5473*/;
			break;
		case 46:
			uParam0->f_14 = 1765975/*func_5472*/;
			break;
		case 110:
			uParam0->f_57 = 1765532/*func_5471*/;
			break;
		case 77:
			uParam0->f_13 = 1765521/*func_5470*/;
			break;
		case 47:
			uParam0->f_43 = 1765418/*func_5469*/;
			break;
		case 49:
			uParam0->f_8 = 1765393/*func_5468*/;
			break;
		case 50:
			*uParam0 = 1765355/*func_5467*/;
			break;
		case 51:
			*uParam0 = 1765331/*func_5466*/;
			break;
		case 52:
			uParam0->f_15 = 1765320/*func_5465*/;
			break;
		case 53:
			uParam0->f_13 = 1765241/*func_5464*/;
			break;
		case 54:
			uParam0->f_45 = 1765233/*func_5463*/;
			break;
		case 56:
			uParam0->f_46 = 1765224/*func_5462*/;
			break;
		case 57:
			uParam0->f_11 = 1765214/*func_5461*/;
			break;
		case 58:
			uParam0->f_13 = 1764985/*func_5460*/;
			break;
		case 64:
			uParam0->f_47 = 1718697/*func_5428*/;
			break;
		case 65:
			uParam0->f_21 = 1717559/*func_5425*/;
			break;
		case 66:
			uParam0->f_21 = 1717336/*func_5423*/;
			break;
		case 67:
			uParam0->f_21 = 1716441/*func_5419*/;
			break;
		case 68:
			*uParam0 = 1715896/*func_5418*/;
			break;
		case 69:
			*uParam0 = 1715887/*func_5417*/;
			break;
		case 70:
			uParam0->f_48 = 1715875/*func_5416*/;
			break;
		case 71:
			uParam0->f_49 = 1715866/*func_5415*/;
			break;
		case 107:
			uParam0->f_50 = 1715854/*func_5414*/;
			break;
		case 80:
			uParam0->f_7 = 1713795/*func_5406*/;
			break;
		case 73:
			uParam0->f_51 = 1712041/*func_5399*/;
			break;
		case 78:
			uParam0->f_59 = 1711572/*func_5394*/;
			break;
	}
}

void func_5482(int iParam0, int iParam1)//Position - 0x1B09E3
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
								if ((((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_701(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_2267(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_999(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_701(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_2267(bVar7))
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
						__LIB_33__::func_206(iParam0, -1);
					}
					bVar9 = __LIB_3__::func_419(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_33__::func_206(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_237(1);
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_5483(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_237(1);
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_5483(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_5483(int iParam0)//Position - 0x1B0C76
{
	__LIB_33__::func_206(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_5548(var uParam0, int iParam1)//Position - 0x1B4914
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1823750/*func_5713*/;
			break;
		case 1:
			uParam0->f_30 = 1823634/*func_5712*/;
			break;
		case 2:
			uParam0->f_31 = 1822404/*func_5709*/;
			break;
		case 3:
			uParam0->f_34 = 1822334/*func_5708*/;
			break;
		case 4:
			uParam0->f_12 = 1822160/*func_5707*/;
			break;
		case 6:
			uParam0->f_32 = 1822036/*func_5706*/;
			break;
		case 106:
			uParam0->f_52 = 1821869/*func_5705*/;
			break;
		case 111:
			uParam0->f_35 = 1821855/*func_5704*/;
			break;
		case 79:
			*uParam0 = 1821831/*func_5703*/;
			break;
		case 37:
			uParam0->f_18 = 1821711/*func_5702*/;
			break;
		case 38:
			uParam0->f_9 = 1821511/*func_5700*/;
			break;
		case 11:
			uParam0->f_11 = 1821502/*func_5699*/;
			break;
		case 12:
			uParam0->f_33 = 1819798/*func_5697*/;
			break;
		case 14:
			uParam0->f_11 = 1819789/*func_5696*/;
			break;
		case 109:
			uParam0->f_56 = 1819781/*func_5695*/;
			break;
		case 15:
			uParam0->f_2 = 1819275/*func_5691*/;
			break;
		case 13:
			uParam0->f_2 = 1819236/*func_5690*/;
			break;
		case 44:
			*uParam0 = 1819227/*func_5689*/;
			break;
		case 75:
			uParam0->f_4 = 1819218/*func_5688*/;
			break;
		case 16:
			uParam0->f_5 = 1818851/*func_5685*/;
			break;
		case 108:
			uParam0->f_55 = 1816811/*func_5681*/;
			break;
		case 17:
			uParam0->f_17 = 1814673/*func_5673*/;
			break;
		case 19:
			uParam0->f_17 = 1814646/*func_5672*/;
			break;
		case 20:
			uParam0->f_3 = 1814562/*func_5671*/;
			break;
		case 21:
			uParam0->f_3 = 1814462/*func_5670*/;
			break;
		case 74:
			uParam0->f_53 = 1814295/*func_5669*/;
			break;
		case 22:
			uParam0->f_24 = 1814188/*func_5668*/;
			break;
		case 25:
			uParam0->f_23 = 1813536/*func_5666*/;
			break;
		case 30:
			uParam0->f_8 = 1813036/*func_5663*/;
			break;
		case 31:
			uParam0->f_39 = 1812741/*func_5662*/;
			break;
		case 33:
			uParam0->f_40 = 1811819/*func_5659*/;
			break;
		case 32:
			*uParam0 = 1811715/*func_5658*/;
			break;
		case 34:
			uParam0->f_41 = 1809570/*func_5657*/;
			break;
		case 35:
			uParam0->f_42 = 1724109/*func_5451*/;
			break;
		case 36:
			uParam0->f_58 = 1809510/*func_5656*/;
			break;
		case 45:
			uParam0->f_14 = 1809501/*func_5655*/;
			break;
		case 46:
			uParam0->f_14 = 1809492/*func_5654*/;
			break;
		case 110:
			uParam0->f_57 = 1809226/*func_5653*/;
			break;
		case 77:
			uParam0->f_13 = 1809215/*func_5652*/;
			break;
		case 47:
			uParam0->f_43 = 1809075/*func_5651*/;
			break;
		case 49:
			uParam0->f_8 = 1809034/*func_5650*/;
			break;
		case 50:
			*uParam0 = 1808943/*func_5649*/;
			break;
		case 51:
			*uParam0 = 1808859/*func_5648*/;
			break;
		case 52:
			uParam0->f_15 = 1808848/*func_5647*/;
			break;
		case 53:
			uParam0->f_13 = 1808566/*func_5646*/;
			break;
		case 54:
			uParam0->f_45 = 1808558/*func_5645*/;
			break;
		case 56:
			uParam0->f_46 = 1808549/*func_5644*/;
			break;
		case 57:
			uParam0->f_11 = 1808488/*func_5643*/;
			break;
		case 58:
			uParam0->f_13 = 1808206/*func_5642*/;
			break;
		case 64:
			uParam0->f_47 = 1806326/*func_5634*/;
			break;
		case 65:
			uParam0->f_21 = 1806283/*func_5633*/;
			break;
		case 66:
			uParam0->f_21 = 1805580/*func_5630*/;
			break;
		case 67:
			uParam0->f_21 = 1804496/*func_5622*/;
			break;
		case 68:
			*uParam0 = 1803905/*func_5620*/;
			break;
		case 69:
			*uParam0 = 1803896/*func_5619*/;
			break;
		case 70:
			uParam0->f_48 = 1803884/*func_5618*/;
			break;
		case 71:
			uParam0->f_49 = 1803875/*func_5617*/;
			break;
		case 107:
			uParam0->f_50 = 1803863/*func_5616*/;
			break;
		case 80:
			uParam0->f_7 = 1801184/*func_5604*/;
			break;
		case 84:
			uParam0->f_1 = 1799338/*func_5593*/;
			break;
		case 85:
			uParam0->f_1 = 1797004/*func_5587*/;
			break;
		case 87:
			uParam0->f_1 = 1792778/*func_5566*/;
			break;
		case 88:
			uParam0->f_1 = 1792769/*func_5565*/;
			break;
		case 90:
			uParam0->f_1 = 1792726/*func_5564*/;
			break;
		case 91:
			uParam0->f_1 = 1792425/*func_5562*/;
			break;
		case 92:
			uParam0->f_1 = 1791662/*func_5560*/;
			break;
		case 94:
			uParam0->f_1 = 1790162/*func_5559*/;
			break;
		case 102:
			uParam0->f_1 = 1789592/*func_5553*/;
			break;
		case 103:
			uParam0->f_22 = 1789584/*func_5552*/;
			break;
		case 104:
			uParam0->f_1 = 1789509/*func_5551*/;
			break;
		case 78:
			uParam0->f_59 = 1789435/*func_5550*/;
			break;
		case 125:
			uParam0->f_19 = 1789411/*func_5549*/;
			break;
	}
}

int func_5560(var uParam0, var uParam1)//Position - 0x1B56AE
{
	__LIB_25__::func_103(&(Global_1946250.f_4073), 7500, "TruckTunel1", 919.1599f, -3242.047f, -97.191f, -4.6979f, 0.1417f, -118.0924f, 36.2643f, 920.1234f, -3242.478f, -97.1018f, 7.9062f, 0.1417f, -113.0609f, 36.2643f, 1f, 50, 0, 0, 0, 0);
	__LIB_25__::func_103(&(Global_1946250.f_4073), 6000, "TruckPark", 826.3912f, -3231.1902f, -98.5252f, 1.494f, -0.1848f, -114.9899f, 38.3697f, 826.9343f, -3231.013f, -97.8158f, -0.7301f, -0.1848f, -118.0463f, 38.3697f, 1f, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
	{
		func_2080(&(uParam1->f_248), &(uParam1->f_109), 14);
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

int func_5593(int iParam0, var uParam1)//Position - 0x1B74AA
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
				func_3061(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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
								func_2080(&iVar2, &(uParam1->f_109), 14);
								func_2074(&(uParam1->f_248), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
							}
						}
						else
						{
							func_2080(&(uParam1->f_248), &(uParam1->f_109), 10);
						}
					}
					else
					{
						func_2080(&(uParam1->f_248), &(uParam1->f_109), 10);
					}
				}
				else
				{
					func_2080(&(uParam1->f_248), &(uParam1->f_109), 14);
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_249))
					{
						if (ENTITY::GET_ENTITY_MODEL(uParam1->f_249) == joaat("trailersmall2"))
						{
							func_2074(&(uParam1->f_249), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
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
				func_3061(&(uParam1->f_109.f_1[0]), PLAYER::PLAYER_ID(), 1, 0);
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

void func_5666(int iParam0, int iParam1)//Position - 0x1BAC20
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
								if (((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_701(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(bVar7, 14)) && !func_2267(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_999(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_701(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(bVar7, 14)) && !func_2267(bVar7))
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
						__LIB_33__::func_207(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_33__::func_207(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_5667(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_5667(iParam0);
					}
					Jump @603; //curOff = 584
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_5667(int iParam0)//Position - 0x1BAE7E
{
	__LIB_33__::func_207(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_5714(var uParam0, int iParam1)//Position - 0x1BD40F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1864042/*func_5786*/;
			break;
		case 1:
			uParam0->f_30 = 1863390/*func_5783*/;
			break;
		case 2:
			uParam0->f_31 = 1863327/*func_5781*/;
			break;
		case 3:
			uParam0->f_34 = 1863271/*func_5780*/;
			break;
		case 4:
			uParam0->f_12 = 1862555/*func_5779*/;
			break;
		case 6:
			uParam0->f_32 = 1862547/*func_5778*/;
			break;
		case 111:
			uParam0->f_35 = 1862538/*func_5777*/;
			break;
		case 79:
			*uParam0 = 1862514/*func_5776*/;
			break;
		case 11:
			uParam0->f_11 = 1862505/*func_5775*/;
			break;
		case 12:
			uParam0->f_33 = 1860677/*func_5772*/;
			break;
		case 14:
			uParam0->f_11 = 1860668/*func_5771*/;
			break;
		case 109:
			uParam0->f_56 = 1860660/*func_5770*/;
			break;
		case 13:
			uParam0->f_2 = 1860651/*func_5769*/;
			break;
		case 15:
			uParam0->f_2 = 1860642/*func_5768*/;
			break;
		case 75:
			uParam0->f_4 = 1860633/*func_5767*/;
			break;
		case 16:
			uParam0->f_5 = 1860624/*func_5766*/;
			break;
		case 108:
			uParam0->f_55 = 1860615/*func_5765*/;
			break;
		case 17:
			uParam0->f_17 = 1860588/*func_5764*/;
			break;
		case 19:
			uParam0->f_17 = 1860576/*func_5763*/;
			break;
		case 20:
			uParam0->f_3 = 1860567/*func_5762*/;
			break;
		case 21:
			uParam0->f_3 = 1860558/*func_5761*/;
			break;
		case 74:
			uParam0->f_53 = 1860549/*func_5760*/;
			break;
		case 22:
			uParam0->f_24 = 1860541/*func_5759*/;
			break;
		case 25:
			uParam0->f_23 = 1860533/*func_5758*/;
			break;
		case 30:
			uParam0->f_8 = 1859403/*func_5757*/;
			break;
		case 31:
			uParam0->f_39 = 1859391/*func_5756*/;
			break;
		case 33:
			uParam0->f_40 = 1859363/*func_5755*/;
			break;
		case 34:
			uParam0->f_41 = 1859354/*func_5754*/;
			break;
		case 36:
			uParam0->f_58 = 1859309/*func_5753*/;
			break;
		case 35:
			uParam0->f_42 = 1825622/*func_5750*/;
			break;
		case 45:
			uParam0->f_14 = 1825613/*func_5749*/;
			break;
		case 46:
			uParam0->f_14 = 1825604/*func_5748*/;
			break;
		case 110:
			uParam0->f_57 = 1825596/*func_5747*/;
			break;
		case 77:
			uParam0->f_13 = 1825585/*func_5746*/;
			break;
		case 47:
			uParam0->f_43 = 1825577/*func_5745*/;
			break;
		case 49:
			uParam0->f_8 = 1825568/*func_5744*/;
			break;
		case 50:
			*uParam0 = 1825269/*func_5738*/;
			break;
		case 51:
			*uParam0 = 1825240/*func_5737*/;
			break;
		case 52:
			uParam0->f_15 = 1825209/*func_5736*/;
			break;
		case 53:
			uParam0->f_13 = 1825175/*func_5735*/;
			break;
		case 54:
			uParam0->f_45 = 1825131/*func_5734*/;
			break;
		case 56:
			uParam0->f_46 = 1825102/*func_5733*/;
			break;
		case 57:
			uParam0->f_11 = 1825093/*func_5732*/;
			break;
		case 58:
			uParam0->f_13 = 1825036/*func_5730*/;
			break;
		case 64:
			uParam0->f_47 = 1825028/*func_5729*/;
			break;
		case 65:
			uParam0->f_21 = 1825020/*func_5728*/;
			break;
		case 66:
			uParam0->f_21 = 1825012/*func_5727*/;
			break;
		case 67:
			uParam0->f_21 = 1825004/*func_5726*/;
			break;
		case 68:
			*uParam0 = 1824978/*func_5725*/;
			break;
		case 69:
			*uParam0 = 1824952/*func_5724*/;
			break;
		case 70:
			uParam0->f_48 = 1824940/*func_5723*/;
			break;
		case 71:
			uParam0->f_49 = 1824931/*func_5722*/;
			break;
		case 107:
			uParam0->f_50 = 1824919/*func_5721*/;
			break;
		case 80:
			uParam0->f_7 = 1824910/*func_5720*/;
			break;
		case 78:
			uParam0->f_59 = 1824902/*func_5719*/;
			break;
		case 126:
			*uParam0 = 1824719/*func_5715*/;
			break;
	}
}

void func_5787(var uParam0, int iParam1)//Position - 0x1C7641
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1907283/*func_5856*/;
			break;
		case 1:
			uParam0->f_30 = 1906973/*func_5855*/;
			break;
		case 2:
			uParam0->f_31 = 1902001/*func_5849*/;
			break;
		case 3:
			uParam0->f_34 = 1901972/*func_5848*/;
			break;
		case 4:
			uParam0->f_12 = 1901777/*func_5847*/;
			break;
		case 6:
			uParam0->f_32 = 1901427/*func_5846*/;
			break;
		case 111:
			uParam0->f_35 = 1901285/*func_5844*/;
			break;
		case 79:
			*uParam0 = 1901261/*func_5843*/;
			break;
		case 37:
			uParam0->f_18 = 1901049/*func_5842*/;
			break;
		case 38:
			uParam0->f_9 = 1900944/*func_5841*/;
			break;
		case 11:
			uParam0->f_11 = 1900935/*func_5840*/;
			break;
		case 12:
			uParam0->f_33 = 1900830/*func_5838*/;
			break;
		case 14:
			uParam0->f_11 = 1900821/*func_5837*/;
			break;
		case 109:
			uParam0->f_56 = 1900813/*func_5836*/;
			break;
		case 13:
			uParam0->f_2 = 1900804/*func_5835*/;
			break;
		case 44:
			*uParam0 = 1900795/*func_5834*/;
			break;
		case 15:
			uParam0->f_2 = 1900505/*func_5833*/;
			break;
		case 75:
			uParam0->f_4 = 1900496/*func_5832*/;
			break;
		case 16:
			uParam0->f_5 = 1900412/*func_5831*/;
			break;
		case 108:
			uParam0->f_55 = 1900403/*func_5830*/;
			break;
		case 17:
			uParam0->f_17 = 1899780/*func_5828*/;
			break;
		case 19:
			uParam0->f_17 = 1899579/*func_5827*/;
			break;
		case 20:
			uParam0->f_3 = 1899515/*func_5826*/;
			break;
		case 21:
			uParam0->f_3 = 1899455/*func_5825*/;
			break;
		case 74:
			uParam0->f_53 = 1899446/*func_5824*/;
			break;
		case 22:
			uParam0->f_24 = 1899203/*func_5823*/;
			break;
		case 25:
			uParam0->f_23 = 1898899/*func_5822*/;
			break;
		case 30:
			uParam0->f_8 = 1898761/*func_5821*/;
			break;
		case 31:
			uParam0->f_39 = 1898319/*func_5819*/;
			break;
		case 33:
			uParam0->f_40 = 1897898/*func_5818*/;
			break;
		case 34:
			uParam0->f_41 = 1895320/*func_5817*/;
			break;
		case 36:
			uParam0->f_58 = 1895275/*func_5816*/;
			break;
		case 35:
			uParam0->f_42 = 1869434/*func_5815*/;
			break;
		case 45:
			uParam0->f_14 = 1869206/*func_5814*/;
			break;
		case 46:
			uParam0->f_14 = 1869030/*func_5813*/;
			break;
		case 110:
			uParam0->f_57 = 1869022/*func_5812*/;
			break;
		case 77:
			uParam0->f_13 = 1869011/*func_5811*/;
			break;
		case 47:
			uParam0->f_43 = 1868769/*func_5810*/;
			break;
		case 49:
			uParam0->f_8 = 1868737/*func_5809*/;
			break;
		case 50:
			*uParam0 = 1868671/*func_5808*/;
			break;
		case 51:
			*uParam0 = 1868647/*func_5807*/;
			break;
		case 52:
			uParam0->f_15 = 1868464/*func_5806*/;
			break;
		case 53:
			uParam0->f_13 = 1867869/*func_5804*/;
			break;
		case 54:
			uParam0->f_45 = 1867630/*func_5803*/;
			break;
		case 56:
			uParam0->f_46 = 1867621/*func_5802*/;
			break;
		case 57:
			uParam0->f_11 = 1867556/*func_5801*/;
			break;
		case 58:
			uParam0->f_13 = 1867134/*func_5800*/;
			break;
		case 64:
			uParam0->f_47 = 1867126/*func_5799*/;
			break;
		case 65:
			uParam0->f_21 = 1867118/*func_5798*/;
			break;
		case 66:
			uParam0->f_21 = 1867058/*func_5797*/;
			break;
		case 67:
			uParam0->f_21 = 1867040/*func_5796*/;
			break;
		case 68:
			*uParam0 = 1867031/*func_5795*/;
			break;
		case 69:
			*uParam0 = 1867022/*func_5794*/;
			break;
		case 70:
			uParam0->f_48 = 1866518/*func_5793*/;
			break;
		case 71:
			uParam0->f_49 = 1866370/*func_5792*/;
			break;
		case 107:
			uParam0->f_50 = 1866325/*func_5791*/;
			break;
		case 80:
			uParam0->f_7 = 1866316/*func_5790*/;
			break;
		case 78:
			uParam0->f_59 = 1866308/*func_5789*/;
			break;
		case 125:
			uParam0->f_19 = 1866292/*func_5788*/;
			break;
	}
}

void func_5822(int iParam0, int iParam1)//Position - 0x1CF993
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_4__::func_116(PLAYER::PLAYER_ID()) && __LIB_7__::func_898(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_3__::func_553(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_19__::func_834())
		{
			bVar2 = __LIB_2__::func_377(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::func_160() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_264(bVar2, 1, 1)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_2__::func_509(bVar2, 14)) && !func_2267(bVar2))
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
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
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

void func_5857(var uParam0, int iParam1)//Position - 0x1D1A5C
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1942087/*func_5982*/;
			break;
		case 1:
			uParam0->f_30 = 1941977/*func_5981*/;
			break;
		case 2:
			uParam0->f_31 = 1939485/*func_5976*/;
			break;
		case 3:
			uParam0->f_34 = 1939456/*func_5975*/;
			break;
		case 4:
			uParam0->f_12 = 1939296/*func_5974*/;
			break;
		case 6:
			uParam0->f_32 = 1939178/*func_5973*/;
			break;
		case 111:
			uParam0->f_35 = 1938961/*func_5970*/;
			break;
		case 79:
			*uParam0 = 1938937/*func_5969*/;
			break;
		case 37:
			uParam0->f_18 = 1938817/*func_5968*/;
			break;
		case 38:
			uParam0->f_9 = 1938666/*func_5965*/;
			break;
		case 11:
			uParam0->f_11 = 1938657/*func_5964*/;
			break;
		case 12:
			uParam0->f_33 = 1937654/*func_5961*/;
			break;
		case 14:
			uParam0->f_11 = 1937645/*func_5960*/;
			break;
		case 109:
			uParam0->f_56 = 1937637/*func_5959*/;
			break;
		case 13:
			uParam0->f_2 = 1937628/*func_5958*/;
			break;
		case 15:
			uParam0->f_2 = 1937474/*func_5957*/;
			break;
		case 75:
			uParam0->f_4 = 1937465/*func_5956*/;
			break;
		case 16:
			uParam0->f_5 = 1937377/*func_5955*/;
			break;
		case 108:
			uParam0->f_55 = 1936587/*func_5949*/;
			break;
		case 17:
			uParam0->f_17 = 1935956/*func_5945*/;
			break;
		case 19:
			uParam0->f_17 = 1935929/*func_5944*/;
			break;
		case 20:
			uParam0->f_3 = 1935890/*func_5943*/;
			break;
		case 21:
			uParam0->f_3 = 1935830/*func_5942*/;
			break;
		case 74:
			uParam0->f_53 = 1935821/*func_5941*/;
			break;
		case 22:
			uParam0->f_24 = 1935767/*func_5940*/;
			break;
		case 25:
			uParam0->f_23 = 1935463/*func_5939*/;
			break;
		case 30:
			uParam0->f_8 = 1935340/*func_5938*/;
			break;
		case 31:
			uParam0->f_39 = 1935119/*func_5937*/;
			break;
		case 33:
			uParam0->f_40 = 1934834/*func_5936*/;
			break;
		case 34:
			uParam0->f_41 = 1934428/*func_5935*/;
			break;
		case 36:
			uParam0->f_58 = 1934383/*func_5934*/;
			break;
		case 35:
			uParam0->f_42 = 1916786/*func_5933*/;
			break;
		case 45:
			uParam0->f_14 = 1916777/*func_5932*/;
			break;
		case 46:
			uParam0->f_14 = 1916693/*func_5931*/;
			break;
		case 110:
			uParam0->f_57 = 1916685/*func_5930*/;
			break;
		case 77:
			uParam0->f_13 = 1916662/*func_5929*/;
			break;
		case 47:
			uParam0->f_43 = 1916610/*func_5928*/;
			break;
		case 49:
			uParam0->f_8 = 1916578/*func_5927*/;
			break;
		case 50:
			*uParam0 = 1916400/*func_5926*/;
			break;
		case 51:
			*uParam0 = 1916303/*func_5925*/;
			break;
		case 52:
			uParam0->f_15 = 1916292/*func_5924*/;
			break;
		case 53:
			uParam0->f_13 = 1915977/*func_5922*/;
			break;
		case 54:
			uParam0->f_45 = 1915342/*func_5919*/;
			break;
		case 56:
			uParam0->f_46 = 1915333/*func_5918*/;
			break;
		case 57:
			uParam0->f_11 = 1910577/*func_5883*/;
			break;
		case 58:
			uParam0->f_13 = 1910563/*func_5882*/;
			break;
		case 64:
			uParam0->f_47 = 1909125/*func_5869*/;
			break;
		case 65:
			uParam0->f_21 = 1909117/*func_5868*/;
			break;
		case 66:
			uParam0->f_21 = 1909066/*func_5867*/;
			break;
		case 67:
			uParam0->f_21 = 1909038/*func_5866*/;
			break;
		case 68:
			*uParam0 = 1909029/*func_5865*/;
			break;
		case 69:
			*uParam0 = 1909020/*func_5864*/;
			break;
		case 70:
			uParam0->f_48 = 1908736/*func_5863*/;
			break;
		case 71:
			uParam0->f_49 = 1908640/*func_5862*/;
			break;
		case 107:
			uParam0->f_50 = 1908628/*func_5861*/;
			break;
		case 80:
			uParam0->f_7 = 1908442/*func_5860*/;
			break;
		case 78:
			uParam0->f_59 = 1908270/*func_5858*/;
			break;
	}
}

void func_5939(int iParam0, int iParam1)//Position - 0x1D8867
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
			if (((((bVar2 != __LIB_0__::func_160() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_264(bVar2, 1, 1)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_2__::func_509(bVar2, 14)) && !func_2267(bVar2))
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
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
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

void func_5983(var uParam0, int iParam1)//Position - 0x1DA250
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1969684/*func_6052*/;
			break;
		case 1:
			uParam0->f_30 = 1969538/*func_6051*/;
			break;
		case 2:
			uParam0->f_31 = 1964310/*func_6045*/;
			break;
		case 3:
			uParam0->f_34 = 1964281/*func_6044*/;
			break;
		case 4:
			uParam0->f_12 = 1963870/*func_6042*/;
			break;
		case 6:
			uParam0->f_32 = 1963700/*func_6041*/;
			break;
		case 111:
			uParam0->f_35 = 1963305/*func_6038*/;
			break;
		case 79:
			*uParam0 = 1963281/*func_6037*/;
			break;
		case 11:
			uParam0->f_11 = 1963272/*func_6036*/;
			break;
		case 12:
			uParam0->f_33 = 1963177/*func_6034*/;
			break;
		case 14:
			uParam0->f_11 = 1963168/*func_6033*/;
			break;
		case 109:
			uParam0->f_56 = 1963160/*func_6032*/;
			break;
		case 13:
			uParam0->f_2 = 1963151/*func_6031*/;
			break;
		case 15:
			uParam0->f_2 = 1962904/*func_6029*/;
			break;
		case 75:
			uParam0->f_4 = 1962895/*func_6028*/;
			break;
		case 16:
			uParam0->f_5 = 1962807/*func_6027*/;
			break;
		case 108:
			uParam0->f_55 = 1962798/*func_6026*/;
			break;
		case 17:
			uParam0->f_17 = 1962542/*func_6025*/;
			break;
		case 19:
			uParam0->f_17 = 1962515/*func_6024*/;
			break;
		case 20:
			uParam0->f_3 = 1962506/*func_6023*/;
			break;
		case 21:
			uParam0->f_3 = 1962497/*func_6022*/;
			break;
		case 74:
			uParam0->f_53 = 1962488/*func_6021*/;
			break;
		case 22:
			uParam0->f_24 = 1962480/*func_6020*/;
			break;
		case 25:
			uParam0->f_23 = 1962472/*func_6019*/;
			break;
		case 30:
			uParam0->f_8 = 1962349/*func_6018*/;
			break;
		case 31:
			uParam0->f_39 = 1962102/*func_6017*/;
			break;
		case 33:
			uParam0->f_40 = 1961846/*func_6016*/;
			break;
		case 34:
			uParam0->f_41 = 1959862/*func_6015*/;
			break;
		case 36:
			uParam0->f_58 = 1959817/*func_6014*/;
			break;
		case 35:
			uParam0->f_42 = 1945367/*func_6013*/;
			break;
		case 45:
			uParam0->f_14 = 1945358/*func_6012*/;
			break;
		case 46:
			uParam0->f_14 = 1945349/*func_6011*/;
			break;
		case 110:
			uParam0->f_57 = 1945341/*func_6010*/;
			break;
		case 77:
			uParam0->f_13 = 1945330/*func_6009*/;
			break;
		case 47:
			uParam0->f_43 = 1945278/*func_6008*/;
			break;
		case 49:
			uParam0->f_8 = 1945246/*func_6007*/;
			break;
		case 50:
			*uParam0 = 1945117/*func_6006*/;
			break;
		case 51:
			*uParam0 = 1945093/*func_6005*/;
			break;
		case 52:
			uParam0->f_15 = 1945082/*func_6004*/;
			break;
		case 53:
			uParam0->f_13 = 1944431/*func_6002*/;
			break;
		case 54:
			uParam0->f_45 = 1943826/*func_5999*/;
			break;
		case 56:
			uParam0->f_46 = 1943817/*func_5998*/;
			break;
		case 57:
			uParam0->f_11 = 1943750/*func_5997*/;
			break;
		case 58:
			uParam0->f_13 = 1943736/*func_5996*/;
			break;
		case 64:
			uParam0->f_47 = 1943357/*func_5995*/;
			break;
		case 65:
			uParam0->f_21 = 1943282/*func_5993*/;
			break;
		case 66:
			uParam0->f_21 = 1943231/*func_5992*/;
			break;
		case 67:
			uParam0->f_21 = 1943213/*func_5991*/;
			break;
		case 68:
			*uParam0 = 1943204/*func_5990*/;
			break;
		case 69:
			*uParam0 = 1943195/*func_5989*/;
			break;
		case 70:
			uParam0->f_48 = 1943078/*func_5988*/;
			break;
		case 71:
			uParam0->f_49 = 1943069/*func_5987*/;
			break;
		case 107:
			uParam0->f_50 = 1943057/*func_5986*/;
			break;
		case 80:
			uParam0->f_7 = 1943048/*func_5985*/;
			break;
		case 78:
			uParam0->f_59 = 1943040/*func_5984*/;
			break;
	}
}

void func_6053(var uParam0, int iParam1)//Position - 0x1E0E1D
{
	switch (iParam1)
	{
		case 96:
			uParam0->f_1 = 1970151/*func_6060*/;
			break;
		case 97:
			uParam0->f_1 = 1970142/*func_6059*/;
			break;
		case 98:
			uParam0->f_1 = 1970133/*func_6058*/;
			break;
		case 99:
			uParam0->f_1 = 1969973/*func_6057*/;
			break;
		case 100:
			uParam0->f_22 = 1969965/*func_6056*/;
			break;
		case 101:
			uParam0->f_22 = 1969810/*func_6054*/;
			break;
	}
}

void func_6061(var uParam0, int iParam1)//Position - 0x1E0FF0
{
	switch (iParam1)
	{
		case 90:
			uParam0->f_1 = 1970368/*func_6066*/;
			break;
		case 91:
			uParam0->f_1 = 1970359/*func_6065*/;
			break;
		case 92:
			uParam0->f_1 = 1970350/*func_6064*/;
			break;
		case 93:
			uParam0->f_1 = 1969973/*func_6057*/;
			break;
		case 94:
			uParam0->f_1 = 1970341/*func_6063*/;
			break;
		case 95:
			uParam0->f_22 = 1970277/*func_6062*/;
			break;
	}
}

void func_6067(var uParam0, int iParam1)//Position - 0x1E10C9
{
	switch (iParam1)
	{
		case 84:
			uParam0->f_1 = 1970595/*func_6071*/;
			break;
		case 85:
			uParam0->f_1 = 1970586/*func_6070*/;
			break;
		case 86:
			uParam0->f_1 = 1969973/*func_6057*/;
			break;
		case 87:
			uParam0->f_1 = 1970577/*func_6069*/;
			break;
		case 89:
			uParam0->f_54 = 1970477/*func_6068*/;
			break;
	}
}

void func_6112(var uParam0, bool bParam1)//Position - 0x1E2740
{
	if (__LIB_6__::func_144(&(uParam0->f_1)) != 0)
	{
		if (bParam1)
		{
			__LIB_8__::func_788(uParam0, 1);
		}
		func_1534(uParam0);
		MISC::CLEAR_BIT(&Global_2621446, 3);
		MISC::CLEAR_BIT(&(uParam0->f_1), 4);
	}
}

void func_6122()//Position - 0x1E283C
{
	__LIB_1__::func_769(PLAYER::PLAYER_ID(), 1);
	__LIB_7__::func_909();
	__LIB_21__::func_361();
	func_6112(&Global_1941652, 0);
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
	__LIB_40__::func_267(&Global_1941652, 0);
	__LIB_35__::func_769(&Global_1941652);
	func_6112(&Global_1941652, 0);
	__LIB_11__::func_71();
	__LIB_11__::func_70();
	if (BitTest(Global_2815059.f_5194, 3))
	{
		__LIB_0__::func_801();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && BitTest(Global_2815059.f_5194, 2))
	{
		__LIB_25__::func_112(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	if (BitTest(Global_2815059.f_5194, 4))
	{
		__LIB_2__::func_333();
	}
	__LIB_1__::func_485(24);
	Global_2815059.f_5194 = 0;
}

int func_6129(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0x1E297B
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
				if (!__LIB_8__::func_138())
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
			else if (func_6393(&(Global_2667225.f_706), &(Global_2667225.f_709), Global_2667225.f_702, bVar3, iParam3, iParam5, iParam6, iParam8, iParam12, 0, bParam13, iParam17))
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
						__LIB_27__::func_263(&iVar2);
					}
					else
					{
						iVar2 = __LIB_1__::func_232();
						__LIB_36__::func_354(&iVar2);
					}
					if (__LIB_8__::func_138())
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
							func_6370(iVar2);
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
			if (func_6366())
			{
				if (Global_2667225.f_45.f_65)
				{
					if (func_6188(Global_2667225.f_706, Global_2667225.f_706.f_1, __LIB_8__::func_133(Global_2667225.f_45.f_67), Global_2667225.f_709, 0))
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
					func_6179(PLAYER::PLAYER_PED_ID(), Global_2667225.f_45.f_173, -1, 0);
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
				__LIB_40__::func_248(Global_2667225.f_706);
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
				func_6149(0, 0);
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
		__LIB_36__::func_354(&(Global_2667225.f_45.f_173));
		__LIB_0__::func_643();
	}
	Global_2667225.f_703 = NETWORK::GET_NETWORK_TIME();
	return 0;
}

void func_6149(int iParam0, bool bParam1)//Position - 0x1E3AFE
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
			func_6149(0, 0);
		}
		else
		{
			Global_2667225.f_710 = 0;
		}
	}
}

void func_6179(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1E4D65
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
				func_6180(0);
			}
		}
	}
}

void func_6180(bool bParam0)//Position - 0x1E4E6F
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
			func_1643(PLAYER::PLAYER_PED_ID(), 14, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
			func_1643(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 380, true);
		}
	}
}

int func_6188(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x1E50B5
{
	int* iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	if (__LIB_7__::func_211(PLAYER::PLAYER_ID()))
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
	if (func_6361() && !bVar3)
	{
		if (func_6360())
		{
			if (func_6354(&iVar2))
			{
				if (__LIB_5__::func_695(iVar2))
				{
					if (!bVar4)
					{
						func_6179(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), 0, 0);
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
						func_6179(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), iVar5, 0);
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
			if ((__LIB_8__::func_138() && ENTITY::GET_ENTITY_MODEL(iVar0) == Global_2667225.f_45.f_67) || !__LIB_8__::func_138())
			{
				if (!__LIB_22__::func_60(ENTITY::GET_ENTITY_COORDS(iVar0, true), 30f, 1, 1, 0, 0, 0, 0, 0))
				{
					if (bParam2)
					{
						ENTITY::SET_ENTITY_COORDS(iVar0, __LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
					}
					func_6370(iVar0);
					return 1;
				}
			}
		}
	}
	if (Global_1836584 || __LIB_0__::func_851())
	{
		__LIB_36__::func_354(&iVar0);
	}
	if (func_6366())
	{
		__LIB_36__::func_354(&(Global_2667225.f_45.f_173));
		if (__LIB_2__::func_65())
		{
			if (__LIB_1__::func_190(44) && VEHICLE::IS_VEHICLE_DRIVEABLE(__LIB_2__::func_64(), false))
			{
				ENTITY::SET_ENTITY_COORDS(__LIB_2__::func_64(), __LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(__LIB_2__::func_64(), fParam1);
				func_6343(__LIB_2__::func_64());
				return 1;
			}
			else if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != __LIB_0__::func_662())
			{
				if (__LIB_7__::func_138(__LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), fParam1, __LIB_1__::func_165(), 1))
				{
					func_6343(__LIB_2__::func_64());
					return 1;
				}
			}
			else if (func_6191(__LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 1, __LIB_1__::func_165(), 0, 1, 0))
			{
				func_6343(__LIB_2__::func_64());
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
			func_6343(NETWORK::NET_TO_VEH(iVar1));
			return 1;
		}
	}
	return 0;
}

int func_6191(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1E5756
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
									if (func_6240(-145.7451f, -1167.9371f, 24.2819f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
									else if (func_6240(-234.9622f, -1171.113f, 21.8657f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
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
										if (func_6240(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var8))
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
										if (func_6240(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var9))
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
									__LIB_41__::func_754(&iVar0, iParam3);
									if ((__LIB_1__::func_221() || __LIB_1__::func_936()) || __LIB_1__::func_935())
									{
										ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
									}
									__LIB_31__::func_898(iVar0, iParam3);
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
													__LIB_38__::func_102(iVar11);
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

int func_6240(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x1EA0EA
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
		if (func_6324(Param0))
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
		if (!uParam6->f_27 || (((((((__LIB_32__::func_376(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2815059.f_924) && !Global_2815059.f_913) && !Global_2815059.f_921) && !Global_2815059.f_925) && !Global_2815059.f_933) && !Global_2815059.f_945))
		{
			__LIB_38__::func_327(Param0, iParam2);
		}
		if (__LIB_39__::func_7(Param0))
		{
			__LIB_38__::func_327(Param0, iParam2);
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
				if (((uParam6->f_3 && __LIB_27__::func_261(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !__LIB_25__::func_374(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0))
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
					func_6252(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var5);
				}
				__LIB_18__::func_378(Global_2667225.f_683, Global_2667225.f_686, iParam2, &(Global_2667225.f_673));
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
						func_6247(Global_2667225.f_683, 0);
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
								if (__LIB_25__::func_370(Global_2667225.f_683, Global_2667225.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || __LIB_36__::func_352(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_6247(Global_2667225.f_683, 0);
									__LIB_0__::func_606(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_6247(Global_2667225.f_683, 0);
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
			func_6252(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var6);
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

void func_6247(struct<3> Param0, int iParam1)//Position - 0x1EAD48
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
		func_6247(Var0, iParam1 + 1);
	}
}

void func_6252(var uParam0, var uParam1, var uParam2)//Position - 0x1EAF5C
{
	int iVar0;
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_6292(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_6253(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_6253(var uParam0, var uParam1, var uParam2)//Position - 0x1EAFCB
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
		if (func_6288(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
																			if (!uParam2->f_15 || !func_6288(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																							if (__LIB_27__::func_261(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (__LIB_27__::func_261(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_36__::func_352(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar22 = __LIB_36__::func_845(Var1, uParam2->f_54, &fVar23);
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
																													func_6261(Var1, fVar2, iVar14);
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
							func_6259(0, uParam2);
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
						if (func_6288(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || __LIB_18__::func_371(&Var27, bVar29))
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

void func_6259(int iParam0, var uParam1)//Position - 0x1EBD2A
{
	if (!__LIB_7__::func_119(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		__LIB_0__::func_609(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_6259(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_6259(iParam0 + 1, uParam1);
	}
}

void func_6261(struct<3> Param0, float fParam1, int iParam2)//Position - 0x1EBDD0
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
			func_6261(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_6288(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x1ED4DE
{
	int iVar0;
	bool bVar1;
	if (func_6324(Param0))
	{
		if (func_6291(uParam1, bParam4, 0, 1, 1))
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

int func_6291(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1ED728
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
							if (func_6291(&Var1, 0, 0, 0, 1))
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

int func_6292(var uParam0, var uParam1, var uParam2)//Position - 0x1ED803
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
			if (func_6288(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
								if (!uParam2->f_15 || !func_6288(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
												if (__LIB_27__::func_261(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (__LIB_27__::func_261(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_36__::func_352(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar11 = __LIB_36__::func_845(Var3, uParam2->f_54, &fVar12);
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
																		func_6261(Var3, fVar4, iVar5);
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
					func_6259(0, uParam2);
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

int func_6324(struct<3> Param0)//Position - 0x1F669D
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
				if (!func_6291(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_6291(&Param0, 0, 1, 0, 1))
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
					if (!func_6291(&Var1, 0, 0, 0, 1))
					{
						if (!func_6291(&Param0, 0, 0, 0, 1))
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

void func_6343(int iParam0)//Position - 0x1F6BD2
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
	func_6370(iParam0);
	__LIB_1__::func_945(iParam0);
	Global_1585234 = iParam0;
	if (Global_2667225.f_45.f_172)
	{
		__LIB_41__::func_165(iParam0, 1);
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

int func_6354(var uParam0)//Position - 0x1F705F
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
											if (func_6355(bVar1) && PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
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
int func_6355(bool bParam0)//Position - 0x1F728E
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

int func_6360()//Position - 0x1F7307
{
	bool bVar0;
	if (__LIB_1__::func_389())
	{
		if (func_6354(&bVar0))
		{
			if (func_6355(bVar0))
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

int func_6361()//Position - 0x1F734C
{
	var uVar0;
	if (__LIB_1__::func_950() || ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964))
	{
		if (func_6354(&uVar0))
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

int func_6366()//Position - 0x1F748F
{
	bool bVar0;
	var uVar1;
	if (__LIB_8__::func_138())
	{
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_67))
		{
		}
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_69.f_66))
		{
		}
		if (func_6361())
		{
			if (func_6360())
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
						if (__LIB_7__::func_211(PLAYER::PLAYER_ID()) && !Global_2667225.f_45.f_67 == 0)
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

void func_6370(int iParam0)//Position - 0x1F7769
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
				__LIB_19__::func_32(iParam0);
			}
		}
		__LIB_18__::func_379(iParam0);
		if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) > -1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(iParam0, PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), false);
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
		{
			func_6179(PLAYER::PLAYER_PED_ID(), iParam0, -1, 0);
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

int func_6393(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x1F8604
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
			if (func_6401(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
			{
				if (Global_2667225.f_489 == 11 || Global_2667225.f_2697)
				{
					bVar0 = true;
				}
				else
				{
					__LIB_18__::func_380(Global_2667225.f_623, &(Global_2667225.f_660), iParam9, Global_2667225.f_489 == 37, iParam11);
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
							func_6247(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
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
						func_6394(&(Global_2667225.f_623));
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
								func_6247(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
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
			if (func_6401(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
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

void func_6394(var uParam0)//Position - 0x1F8B8C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_6247(*(uParam0[iVar0 /*3*/]), 0);
		iVar0++;
	}
}

int func_6401(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7)//Position - 0x1F8F7C
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
				if (__LIB_22__::func_60(Global_2676213, 150f, 1, 1, 0, 0, 0, 0, 0))
				{
					__LIB_18__::func_382(Global_2676213);
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
		Global_2667225.f_520.f_30 = __LIB_20__::func_341();
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
		if (Global_2667225.f_489 == 0 || __LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
		{
			Global_2667225.f_489 = func_6558();
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
				__LIB_39__::func_34(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 58:
				__LIB_39__::func_33(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 9:
				__LIB_39__::func_24(&Global_1574067, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 8:
				if (!Global_2667225.f_1753)
				{
					Global_2667225.f_1753 = 1;
				}
				Var19 = { func_6549(bParam2) };
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
				__LIB_39__::func_24(&Global_1574100, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1123024896);
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
						if (__LIB_32__::func_374(Global_1888188))
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
				Var13 = { __LIB_34__::func_316(Global_2667225.f_555, fVar12) };
				if (SYSTEM::VMAG(Var13) > 0f)
				{
					Var13.f_2 = Global_2667225.f_555.f_2;
					Var14 = { Global_2667225.f_555 - Var13 };
					Var14 = { Var14 / FtoV(SYSTEM::VMAG(Var14)) };
					Var14 = { Var14 * Vector(fVar12, fVar12, fVar12) };
					Global_2667225.f_555 = { Global_2667225.f_555 + Var14 };
				}
				if (func_6540(&(Global_2667225.f_555), 1))
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
				if (__LIB_8__::func_138() || iVar40)
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
				if (func_6540(&Var14, 1))
				{
				}
				if (Global_1836579)
				{
					if (Global_1836068.f_14 != __LIB_0__::func_160())
					{
						if (__LIB_1__::func_264(Global_1836068.f_14, 0, 1))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_1__::func_265(Global_1836068.f_14) };
							if (__LIB_8__::func_138())
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
				if (__LIB_8__::func_138())
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
				iVar30 = __LIB_36__::func_845(Var21, fVar35, &uVar43);
				if (iVar30 > 0 || Global_2667225.f_555.f_15)
				{
					if (Global_2667225.f_555.f_15)
					{
						Var21 = { __LIB_36__::func_859(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 1, &(Global_2667225.f_555.f_25)) };
						if (!Global_2667225.f_555.f_25)
						{
							Var21 = { __LIB_36__::func_859(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 0, &(Global_2667225.f_555.f_25)) };
						}
						Global_2667225.f_596 = 0f;
						fVar36 = 40f;
					}
					else
					{
						bVar31 = false;
						Var22 = { __LIB_34__::func_315(Var21, fVar35) };
						Var23 = { __LIB_34__::func_314(Var21, fVar35) };
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
							uVar26[iVar0] = __LIB_36__::func_845(Var25[iVar0 /*3*/], fVar35, &(uVar28[iVar0]));
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
				if (func_6291(&(Global_2667225.f_555), 0, 0, 0, 1))
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
					Var17 = { func_934(PLAYER::PLAYER_ID()) };
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
					Var17 = { func_934(PLAYER::PLAYER_ID()) };
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
					Global_2667225.f_555 = { func_934(__LIB_0__::func_582()) };
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
							switch (__LIB_4__::func_89(PLAYER::PLAYER_ID()))
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
							iVar46 = __LIB_1__::func_231(__LIB_4__::func_105(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 44)
						{
							if (Global_2715699.f_6602)
							{
								iVar47 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_2715699.f_6603));
								if (iVar47 != __LIB_0__::func_160())
								{
									iVar46 = __LIB_1__::func_227(__LIB_4__::func_151(iVar47));
								}
							}
							else
							{
								iVar46 = __LIB_1__::func_227(__LIB_4__::func_151(PLAYER::PLAYER_ID()));
							}
						}
						else if (Global_2667225.f_489 == 45)
						{
							iVar46 = 123;
						}
						else if (Global_2667225.f_489 == 46)
						{
							iVar46 = __LIB_1__::func_222(__LIB_4__::func_147(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 48)
						{
							iVar46 = __LIB_1__::func_218(__LIB_4__::func_145(PLAYER::PLAYER_ID()));
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
							iVar46 = __LIB_1__::func_195(__LIB_4__::func_127(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 56)
						{
							iVar46 = __LIB_1__::func_166(__LIB_4__::func_89(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 59)
						{
							iVar46 = 148;
						}
						if (iVar46 != -1)
						{
							__LIB_36__::func_848(iVar46, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), Global_2671449.f_26);
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
						Global_2667225.f_555 = { func_934(iVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_934(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_934(__LIB_0__::func_582()) };
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
						Global_2667225.f_555 = { func_934(iVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_934(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_934(__LIB_0__::func_582()) };
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
				Global_2667225.f_555 = { func_934(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 53:
				Global_2667225.f_555 = { func_934(PLAYER::PLAYER_ID()) };
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
				if (Global_2667225.f_490.f_3 && !__LIB_33__::func_174(Global_2676213))
				{
					Global_2667225.f_555 = { __LIB_36__::func_847() };
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
				if (func_6291(&(Global_2667225.f_555), 0, 0, 0, 1))
				{
					Global_2667225.f_515 = 1;
				}
				break;
		}
		if (SYSTEM::VMAG(Global_2667225.f_520) > 0f)
		{
			Global_2667225.f_2674 = 1;
		}
		if (__LIB_36__::func_353(Global_2667225.f_555, &iVar0))
		{
			Global_2667225.f_515 = 1;
		}
		if (bParam2 && iParam4 == 0)
		{
			if (__LIB_20__::func_341())
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
			func_6481();
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
			if ((__LIB_0__::func_698() && __LIB_8__::func_138()) && func_6291(&(Global_2667225.f_512), 0, 0, 0, 1))
			{
				Var48.f_10 = 0;
			}
			Var48.f_9 = uParam5;
			Var48.f_11 = __LIB_20__::func_340();
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
			func_6252(&(Var18[0 /*3*/]), &(Var18.f_16[0]), &Var48);
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
			if (((iVar0 == 0 && Global_2667225.f_489 == 26) && Global_2667225.f_555.f_25) && func_6474(&(Var18[iVar0 /*3*/]), __LIB_7__::func_137(Var18[iVar0 /*3*/], 1008981770)))
			{
			}
			else
			{
				switch (Global_2667225.f_555.f_7)
				{
					case 0:
						Var18[iVar0 /*3*/] = { func_6471(Global_2667225.f_555, 0f, 0f, 0f, Global_2667225.f_555.f_4, Global_2667225.f_555.f_7) };
						break;
					case 1:
						Var18[iVar0 /*3*/] = { func_6471(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, 0f, Global_2667225.f_555.f_7) };
						break;
					case 2:
						Var18[iVar0 /*3*/] = { func_6471(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, Global_2667225.f_555.f_14, Global_2667225.f_555.f_7) };
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
			if ((__LIB_1__::func_62(Global_2667225.f_489) && !__LIB_7__::func_137(Var18[iVar0 /*3*/], 0.01f)) && !__LIB_20__::func_341())
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
						func_6481();
						return 0;
					}
					else
					{
						__LIB_1__::func_973(&Var18, &iVar0);
					}
				}
			}
			else if ((__LIB_22__::func_60(Var18[iVar0 /*3*/], 3.5f, 1, 1, 0, 0, 0, 0, 0) || __LIB_32__::func_184(Var18[iVar0 /*3*/], 0.5f, PLAYER::PLAYER_ID(), 0, 0)) || Global_2667225.f_45.f_304)
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
						func_6481();
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
		Global_2667225.f_520.f_9 = __LIB_20__::func_340();
		Global_2667225.f_520.f_10 = 0;
		if (func_6402(&(Global_2667225.f_555), &(Global_2667225.f_520), &Var18))
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

int func_6402(var uParam0, var uParam1, var uParam2)//Position - 0x1FE276
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
				if (__LIB_27__::func_261(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
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
					func_6252(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
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
				if (uParam0->f_5 && !__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
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
			if (func_6412(uParam2, uParam0, uParam1, 0))
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
			if (func_6412(uParam2, uParam0, uParam1, 1))
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
						func_6404(&Var1, 0, 1, 1, 0, uParam0, uParam1);
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
				func_6404(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
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

void func_6404(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x1FF2BE
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
	if (func_6406(*uParam0, &Var0, iVar6, iParam3, 1))
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
		if (__LIB_4__::func_21(PLAYER::PLAYER_ID(), 0))
		{
			Var2.f_9 = 1;
		}
		Var2.f_60 = uParam5->f_30;
		func_6252(&Var0, &uVar1, &Var2);
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
			if (func_6406(*uParam0, &Var0, iVar6, iParam3, 0))
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
			else if (func_6291(uParam0, 1, 1, 1, 1))
			{
				func_6404(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
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

int func_6406(struct<3> Param0, var* uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1FF79E
{
	if (__LIB_1__::func_64(Param0, uParam1))
	{
		if (func_6407(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, false, uParam1, iParam2))
	{
		if (func_6407(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_6407(struct<3> Param0, var* uParam1, int iParam2, bool bParam3)//Position - 0x1FF7FA
{
	float fVar0;
	var uVar1;
	var uVar2;
	fVar0 = SYSTEM::VDIST(Param0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_6288(Global_2667225.f_512, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
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

int func_6412(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x1FFAC9
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
					func_6456(uParam1, uParam2);
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
									func_6404(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_6404(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				case 1:
					func_6456(uParam1, uParam2);
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
					func_6456(uParam1, uParam2);
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
				func_6456(uParam1, uParam2);
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
		func_6453(Global_2667225.f_555, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90));
	}
	if (uParam2->f_7 && !Global_2667225.f_2491.f_4)
	{
		Global_2667225.f_2491.f_4 = 1;
		func_6420(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
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
					func_6420(Var0, fVar1, uParam1, uParam2, 0, iVar3);
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
					func_6404(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
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
					func_6404(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
				func_6404(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
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
				func_6404(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
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
			func_6404(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		__LIB_1__::func_67(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_6420(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x20038E
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
		if (!__LIB_27__::func_70(Param0, 1084227584, 1123024896, 0))
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
		if (!__LIB_22__::func_60(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0))
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
		if (__LIB_39__::func_8(Param0, fParam1, uParam2->f_15, __LIB_1__::func_84(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
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
		if (!__LIB_25__::func_858(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!__LIB_25__::func_858(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
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
				if (func_6324(Var12))
				{
					if (!func_6291(&Param0, 0, 0, 0, 1) && !__LIB_24__::func_959(&Param0, 0))
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
				fVar0 = __LIB_36__::func_846(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = __LIB_36__::func_846(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (__LIB_1__::func_62(Global_2667225.f_489) && iVar8 < 4096)
			{
				Var19.f_2 = __LIB_7__::func_220(Param0);
			}
			fVar7 = __LIB_34__::func_313(Param0, 1, 0, 0, 0, 0);
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
							fVar0 = __LIB_36__::func_846(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = __LIB_36__::func_846(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
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
							func_6423(Var19, iVar18);
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
						func_6423(Var19, iVar18);
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
						fVar5 = __LIB_27__::func_69(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = __LIB_34__::func_313(Param0, 1, 1, 1, 1, 0);
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
						func_6423(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

void func_6423(struct<10> Param0, int iParam1)//Position - 0x200F81
{
	struct<10> Var0;
	Var0.f_2 = 1176256410;
	Var0 = { Global_2667225.f_2491.f_6[iParam1 /*10*/] };
	Global_2667225.f_2491.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_6423(Var0, iParam1 + 1);
	}
}

void func_6453(struct<3> Param0, var uParam1, var uParam2)//Position - 0x202457
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
					func_6455(&Var3, uParam1, iVar0);
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
				func_6455(&Var3, uParam1, iVar0);
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
					func_6455(&Var3, uParam1, iVar0);
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
				func_6454(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_6454(var uParam0, var uParam1, int iParam2)//Position - 0x202777
{
	Global_2674776 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_6454(&Global_2674776, uParam1, iParam2 + 1);
	}
}

void func_6455(var uParam0, var uParam1, int iParam2)//Position - 0x2027B5
{
	Global_2674772 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_6455(&Global_2674772, uParam1, iParam2 + 1);
	}
}

void func_6456(var uParam0, var uParam1)//Position - 0x2027EF
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
				func_6420(Global_2667225.f_2263[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
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

Vector3 func_6471(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x202BD0
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
		if (func_6474(&Var1, 0))
		{
			return Var1;
		}
		iVar0++;
	}
	return Var1;
}

int func_6474(var uParam0, bool bParam1)//Position - 0x202D11
{
	func_6475(uParam0, bParam1);
	if (__LIB_27__::func_261(*uParam0, 6f, 1f, 1f, 5f, 0, 0, 0, 120f, 0, -1, 1, 0f, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_6475(var uParam0, bool bParam1)//Position - 0x202D48
{
	float fVar0;
	if (!bParam1)
	{
		func_6477(uParam0, 1, 1, 1, 1, 1);
	}
	else
	{
		func_6477(uParam0, 1, 1, 1, 1, 0);
	}
	fVar0 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(*uParam0, uParam0->f_1);
	fVar0 = (fVar0 + 100f);
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	__LIB_1__::func_975(uParam0);
}

void func_6477(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x202E1E
{
	if (bParam1)
	{
		if (func_6324(Global_2667225.f_512))
		{
			if (func_6291(uParam0, 1, 0, 0, bParam5))
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

void func_6481()//Position - 0x203053
{
	if (!Global_2667225.f_701)
	{
		if (func_6324(Global_2667225.f_555))
		{
			if (func_6291(&(Global_2667225.f_555), 1, 0, 0, 1))
			{
				Global_2667225.f_520.f_7 = 0;
			}
			if (Global_2667225.f_555.f_2 <= 0f)
			{
				if (func_6540(&(Global_2667225.f_555), 1))
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
	if (__LIB_20__::func_341())
	{
		Global_2667225.f_587 = 4;
	}
	else
	{
		Global_2667225.f_2673 = 1;
		Global_2667225.f_587 = 6;
	}
}

int func_6540(var uParam0, bool bParam1)//Position - 0x209274
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
						if (func_6291(&Var1, 0, 0, 0, 1))
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

struct<18> func_6549(bool bParam0)//Position - 0x209C5B
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
			if (__LIB_25__::func_858(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 100f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_25__::func_858(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 50f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_25__::func_858(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 25f, 1, -1, 0, 1))
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
				fVar5 = __LIB_34__::func_313(Global_2667225.f_714.f_1[iVar1 /*5*/], 1, 0, 0, 0, iVar2);
				fVar6 = fVar5;
				fVar3 = __LIB_1__::func_73(fVar5, Global_2667225.f_714.f_515, __LIB_25__::func_135(), __LIB_25__::func_134(), fVar8, 0.3f);
				fVar4 = (fVar4 * (fVar3 * 0.91f));
				fVar5 = __LIB_34__::func_313(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, 0, 0, iVar2);
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
					fVar3 = __LIB_1__::func_73(fVar5, Global_2667225.f_714.f_515, __LIB_25__::func_135(), __LIB_25__::func_134(), fVar8, 0.3f);
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
					func_6550(&Var0, iVar1, fVar4, iVar7, fVar6);
					iVar7 = 5;
				}
				else if (fVar4 == Var0.f_6[iVar7])
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) > 0)
					{
						func_6550(&Var0, iVar1, fVar4, iVar7, fVar6);
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

void func_6550(var uParam0, int iParam1, float fParam2, int iParam3, float fParam4)//Position - 0x20A0BE
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
		func_6550(uParam0, uVar0, uVar1, iParam3 + 1, uVar2);
	}
}

int func_6558()//Position - 0x20A642
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
		else if (__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
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
					if (func_6566(PLAYER::PLAYER_ID()))
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
				else if ((((((__LIB_4__::func_973(1) && func_6566(PLAYER::PLAYER_ID())) && (__LIB_3__::func_803(PLAYER::PLAYER_ID()) != 157 || (__LIB_3__::func_803(PLAYER::PLAYER_ID()) == 157 && __LIB_0__::func_582() != __LIB_1__::func_301()))) && !__LIB_2__::func_91()) && !__LIB_6__::func_408(PLAYER::PLAYER_ID())) && !__LIB_25__::func_140(1)) && !(__LIB_1__::func_425(PLAYER::PLAYER_ID(), 0) == 0 && func_6564(PLAYER::PLAYER_ID()) == 1))
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
						if ((__LIB_2__::func_57(iVar0) && __LIB_8__::func_137(iVar0)) && (__LIB_25__::func_482(iVar0) || __LIB_2__::func_192(PLAYER::PLAYER_ID())))
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
					if (__LIB_2__::func_57(iVar0) && __LIB_8__::func_137(iVar0))
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

int func_6564(int iParam0)//Position - 0x20AAC3
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_4__::func_682(iParam0, 0))
	{
		iVar0 = __LIB_2__::func_191(iParam0);
		Var1 = { func_934(iVar0) };
		return func_6291(&Var1, 0, 0, 0, 1);
	}
	return 0;
}

int func_6566(int iParam0)//Position - 0x20AB6F
{
	struct<3> Var0;
	int iVar1;
	struct<3> Var2;
	int iVar3;
	struct<3> Var4;
	Var0 = { func_934(iParam0) };
	if (__LIB_4__::func_682(iParam0, 0))
	{
		iVar1 = __LIB_2__::func_191(iParam0);
		Var2 = { func_934(iVar1) };
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
			Var4 = { func_934(iVar3) };
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

void func_6667()//Position - 0x20C9F9
{
	int iVar0;
	int iVar1;
	var uVar2;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &uVar2, 2);
				break;
			case 186:
				func_6668(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6668(int iParam0)//Position - 0x20CA4A
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var2, 13))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Var2.f_0))
		{
			iVar1 = 0;
			while (iVar1 < Local_230.f_35)
			{
				if (ENTITY::IS_ENTITY_DEAD(Var2.f_0, false))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(Var2.f_0))
					{
						iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var2.f_0);
						if (ENTITY::IS_ENTITY_A_PED(Var2.f_1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var2.f_1))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_230.f_7[iVar1]))
								{
									if (iVar0 == NETWORK::NET_TO_VEH(Local_230.f_7[iVar1]))
									{
										if (PLAYER::PLAYER_PED_ID() == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var2.f_1))
										{
											Local_231[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_6++;
										}
									}
								}
							}
						}
					}
				}
				iVar1++;
			}
		}
	}
}

void func_6669()//Position - 0x20CAF9
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	struct<16> Var4;
	bool bVar5;
	bool bVar6;
	bVar5 = true;
	bVar6 = true;
	bVar1 = false;
	while (bVar1 < 32)
	{
		Local_157[bVar1 /*3*/] = __LIB_0__::func_160();
		Local_157[bVar1 /*3*/].f_1 = -1;
		Local_157[bVar1 /*3*/].f_2 = uVar3;
		MISC::CLEAR_BIT(&uLocal_205, bVar1);
		MISC::CLEAR_BIT(&uLocal_207, bVar1);
		bVar1++;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_156[iVar0 /*20*/] = __LIB_0__::func_160();
		Local_156[iVar0 /*20*/].f_1 = -1;
		MISC::CLEAR_BIT(&uLocal_206, iVar0);
		Local_156[iVar0 /*20*/].f_2 = { Var4 };
		Local_156[iVar0 /*20*/].f_18 = 0;
		Local_156[iVar0 /*20*/].f_19 = 0;
		iVar0++;
	}
	iLocal_222 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			Local_156[iVar0 /*20*/] = iVar0;
			MISC::SET_BIT(&uLocal_206, iVar0);
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(Local_156[iVar0 /*20*/]);
			bVar1 = iVar2;
			if (__LIB_1__::func_264(iVar2, 0, 1))
			{
				Local_157[bVar1 /*3*/] = iVar2;
				Local_156[iVar0 /*20*/].f_1 = bVar1;
				Local_157[bVar1 /*3*/].f_1 = iVar0;
				Local_157[bVar1 /*3*/].f_2 = PLAYER::GET_PLAYER_PED(iVar2);
				StringCopy(&(Local_156[iVar0 /*20*/].f_2), PLAYER::GET_PLAYER_NAME(iVar2), 64);
				MISC::SET_BIT(&uLocal_205, bVar1);
				if (ENTITY::IS_ENTITY_DEAD(Local_157[bVar1 /*3*/].f_2, false))
				{
					MISC::SET_BIT(&uLocal_207, bVar1);
				}
				if (__LIB_4__::func_116(Local_157[bVar1 /*3*/]))
				{
					Local_156[iVar0 /*20*/].f_18 = 1;
				}
				else if (__LIB_18__::func_604(Local_157[bVar1 /*3*/], 0))
				{
					Local_156[iVar0 /*20*/].f_19 = 1;
				}
				if (iLocal_209 == iVar0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_157[bVar1 /*3*/].f_2, false))
					{
					}
				}
				if (Local_156[iVar0 /*20*/].f_18)
				{
					bVar5 = false;
					if (!BitTest(uLocal_207, bVar1) && !BitTest(uLocal_207, PLAYER::PLAYER_ID()))
					{
					}
				}
				else if (Local_156[iVar0 /*20*/].f_19)
				{
					iLocal_222++;
				}
				if (!func_1170(Local_156[iVar0 /*20*/], 0))
				{
					bVar6 = false;
				}
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
				}
			}
		}
		iVar0++;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (bVar6)
		{
			if (!func_2(0))
			{
				func_211(0);
			}
		}
		else if (func_2(0))
		{
			func_6670(0);
		}
		if (func_206() == 0)
		{
			if (bVar5)
			{
				func_37(2);
			}
			else if (iLocal_222 == 0)
			{
			}
		}
	}
}

void func_6670(int iParam0)//Position - 0x20CD33
{
	MISC::CLEAR_BIT(&(Local_230.f_1), iParam0);
}

void func_6672()//Position - 0x20CD4F
{
	int iVar0;
	int iVar1;
	int iVar2;
	iLocal_209 = -1;
	if (BitTest(uLocal_205, PLAYER::PLAYER_ID()))
	{
		if (BitTest(uLocal_206, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			if (!__LIB_7__::func_211(PLAYER::PLAYER_ID()))
			{
				iLocal_209 = NETWORK::PARTICIPANT_ID_TO_INT();
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
						iLocal_209 = iVar2;
					}
				}
			}
		}
	}
}

void func_6685()//Position - 0x20D122
{
	__LIB_24__::func_799();
	__LIB_20__::func_413(&iLocal_199);
	if (PLAYER::GET_MAX_WANTED_LEVEL() != 5)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	AUDIO::STOP_SOUND(iLocal_131);
	__LIB_28__::func_375(Global_1943929, -1, -1, -1, -1);
	__LIB_41__::func_759(1, 0);
	__LIB_35__::func_821(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	__LIB_18__::func_455();
	func_6122();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	Global_2815059.f_5117 = 0;
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("ALARM_BELL_02");
	__LIB_6__::func_966(86);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_6733(bool bParam0, bool bParam1)//Position - 0x20F4B8
{
	bool bVar0;
	var uVar1;
	if (!func_1140(0))
	{
		uVar1 = __LIB_24__::func_767(func_206(), bParam0, bVar0, bParam1);
		Global_1943929.f_2 = Local_230.f_33;
		Global_1943929.f_3 = Local_230.f_34;
		if (func_1140(4))
		{
			__LIB_39__::func_9(bParam0, uVar1, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
		}
		func_1139(0);
	}
}

int func_6793(struct<21> Param0)//Position - 0x2118CF
{
	__LIB_0__::func_673(32, Param0);
	__LIB_24__::func_800(&(Local_230.f_65));
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(__LIB_36__::func_804(195, -1, -1, -1, -1, -1));
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(__LIB_35__::func_935(195, -1, -1, -1));
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(__LIB_39__::func_25(195, -1, 1, -1, -1, -1));
	__LIB_1__::func_569(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_230, 90, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_231, 225, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	__LIB_38__::func_959(0, 0, 0);
	return 1;
}

