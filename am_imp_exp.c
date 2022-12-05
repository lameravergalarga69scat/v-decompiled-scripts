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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	float fLocal_60 = 0f;
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
	struct<14> Local_83 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_84 = 0;
	bool bLocal_85 = 0;
	bool bLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	bool bLocal_89 = 0;
	bool bLocal_90 = 0;
	bool bLocal_91 = 0;
	bool bLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
	int iLocal_104 = 0;
	bool bLocal_105 = 0;
	bool bLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 16;
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
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	int iLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	int iLocal_285[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_286 = 0;
	bool bLocal_287 = 0;
	bool bLocal_288 = 0;
	bool bLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	float fLocal_296 = 0f;
	float fLocal_297 = 0f;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
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
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323[4] = { 0, 0, 0, 0 };
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<12> Local_329 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0 } ;
	struct<70> Local_330 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -15, -1, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	struct<4> Local_337[32];
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	int iLocal_340 = 0;
	char* sLocal_341 = NULL;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	struct<21> Local_346 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_60 = ((0.05f + 0.275f) - 0.01f);
	iLocal_101 = 1;
	bLocal_103 = true;
	bLocal_105 = true;
	iLocal_110 = -1;
	bLocal_288 = true;
	bLocal_289 = true;
	iLocal_292 = -1;
	iLocal_293 = -1;
	iLocal_317 = -1;
	iLocal_320 = -1;
	if (!func_546(ScriptParam_346))
	{
		func_542();
	}
	iLocal_328[0] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-891.3f, 807.9f, 188.1f));
	iLocal_328[1] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-276.5f, -206.3f, 38.4f));
	iLocal_328[2] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1485.5f, -644.5f, 30.1f));
	iLocal_328[3] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1746.3f, -939.5f, 7.7f));
	iLocal_328[4] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-2106.4f, -345.3f, 13f));
	iLocal_328[5] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1520f, 74.4f, 61.3f));
	iLocal_328[6] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1333f, -286f, 40.3f));
	iLocal_328[7] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1178.1f, 54.8f, 53.9f));
	iLocal_328[8] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1298.7f, -359.4f, 36.7f));
	iLocal_328[9] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-355.2f, 147.5f, 75.8f));
	iLocal_328[10] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-982.1f, -1064.7f, 2.2f));
	iLocal_328[11] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1313.1f, -1560.2f, 4.3f));
	while (true)
	{
		__LIB_0__.func_671();
		bLocal_86 = false;
		bLocal_88 = false;
		bLocal_91 = false;
		bLocal_94 = false;
		bLocal_96 = false;
		Global_2815059.f_1750 = 0;
		if (__LIB_6__.func_949() || __LIB_0__.func_706())
		{
			func_542();
		}
		if (func_526())
		{
			if (!func_525())
			{
				if (!func_524())
				{
					if (func_522())
					{
						if (!iLocal_84)
						{
							func_518();
							func_517(&Local_329, 5);
							func_516();
							bLocal_105 = true;
							bLocal_106 = true;
							if (BitTest(uLocal_338, 1))
							{
								MISC::CLEAR_BIT(&uLocal_338, 1);
							}
							iLocal_84 = 1;
							iLocal_320 = -999;
						}
					}
				}
			}
			else if (!func_524())
			{
				if (!bLocal_106)
				{
					if (!__LIB_0__.func_649(&uLocal_283))
					{
						__LIB_0__.func_580(&uLocal_283, 0, 0);
					}
					else if (__LIB_2__.func_47(&uLocal_283, 100, 0))
					{
						if (!BitTest(uLocal_338, 1))
						{
							if (func_522())
							{
								func_503(&Local_329, 5, Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_37);
								bLocal_105 = false;
								bLocal_106 = true;
								iLocal_84 = 1;
								iLocal_320 = -999;
							}
						}
					}
				}
			}
			func_405();
			func_401();
			func_385();
			func_378();
			func_268();
			func_175();
		}
		func_171();
		func_141();
		func_76();
		func_73();
		if (!iLocal_108)
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 471.9266f, -1308.5956f, 28.2359f) < 1000f)
			{
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.5956f, 28.2359f, 2f, joaat("v_ilev_uvcheetah"), true);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.5956f, 28.2359f, 2f, joaat("v_ilev_uventity"), true);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.5956f, 28.2359f, 2f, joaat("v_ilev_uvjb700"), true);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.5956f, 28.2359f, 2f, joaat("v_ilev_uventity"), true);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.5956f, 28.2359f, 2f, joaat("v_ilev_uvmonroe"), true);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.5956f, 28.2359f, 2f, joaat("v_ilev_uvtext"), true);
				iLocal_108 = 1;
			}
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x40D
{
	int iVar0;
	int iVar1;
	if (!bLocal_103)
	{
	}
	else
	{
		if (iLocal_104 >= Local_337.f_0)
		{
			iLocal_104 = 0;
			MISC::CLEAR_BIT(&uLocal_338, 10);
			MISC::CLEAR_BIT(&(Local_330.f_23), 7);
			MISC::CLEAR_BIT(&uLocal_338, 11);
			MISC::CLEAR_BIT(&uLocal_338, 23);
			if (BitTest(Local_330.f_23, 0))
			{
				MISC::SET_BIT(&(Local_330.f_23), 1);
				MISC::CLEAR_BIT(&(Local_330.f_23), 3);
			}
		}
		iVar0 = iLocal_104;
		if (Local_337[iVar0 /*4*/].f_1 == 2)
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (!Local_330[iVar1] == -1)
				{
					if (!Local_330.f_6[iVar1])
					{
						if (Local_330[iVar1] == Local_337[iVar0 /*4*/])
						{
							if (Local_330[iVar1] == Local_330.f_28)
							{
								func_72();
							}
							Local_330.f_33 = 0;
							Local_330.f_32++;
						}
					}
				}
				iVar1++;
			}
		}
		if (BitTest(Local_330.f_23, 0))
		{
			if (!BitTest(Local_330.f_23, 7))
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
				{
					if (Local_337[iVar0 /*4*/].f_3 > 0 || __LIB_0__.func_702(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)), 6))
					{
						if (Local_337[iVar0 /*4*/].f_3 < 3)
						{
							MISC::SET_BIT(&(Local_330.f_23), 7);
						}
					}
				}
			}
		}
		if (BitTest(Local_330.f_23, 0))
		{
			if (!BitTest(uLocal_338, 11))
			{
				if (BitTest(Local_337[iVar0 /*4*/].f_2, 2))
				{
					MISC::SET_BIT(&uLocal_338, 11);
				}
			}
			if (!BitTest(uLocal_338, 21))
			{
				if (!BitTest(uLocal_338, 3))
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
					{
						if (BitTest(Local_337[iVar0 /*4*/].f_2, 3))
						{
							MISC::SET_BIT(&uLocal_338, 21);
						}
					}
				}
			}
		}
		iLocal_104++;
		if (iLocal_104 >= Local_337.f_0)
		{
			MISC::SET_BIT(&uLocal_338, 10);
			if (BitTest(Local_330.f_23, 7) || BitTest(uLocal_338, 23))
			{
				MISC::CLEAR_BIT(&(Local_330.f_23), 1);
			}
			if (BitTest(uLocal_338, 11))
			{
				MISC::SET_BIT(&(Local_330.f_23), 3);
			}
			if (BitTest(uLocal_338, 21))
			{
				MISC::SET_BIT(&(Local_330.f_23), 6);
			}
		}
	}
	if (func_70())
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_330.f_29) > 180000)
		{
			func_69();
		}
	}
	switch (Local_330.f_20)
	{
		case 0:
			func_66();
			Local_330.f_32++;
			Local_330.f_20 = 1;
			func_65();
			break;
		case 1:
			if (func_64())
			{
				iLocal_316 = NETWORK::GET_NETWORK_TIME();
				Local_330.f_20 = 2;
			}
			else if (Local_330.f_28 == -1)
			{
				func_72();
			}
			break;
		case 2:
			if (!Local_330.f_17 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_316) > Global_262145.f_11941 /* Tunable: TIME_SIMEON_SENDS_TEXT_MS */)
			{
				Local_330.f_20 = 0;
			}
			break;
		case 3:
			break;
	}
	func_2();
}

void func_2()//Position - 0x6B0
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	switch (Local_330.f_26)
	{
		case 0:
			if (!BitTest(Local_330.f_23, 0))
			{
				if (bLocal_288)
				{
					if (bLocal_289)
					{
						if (Global_2815059.f_1723)
						{
							MISC::CLEAR_BIT(&(Local_330.f_23), 2);
							MISC::CLEAR_BIT(&(Local_330.f_23), 6);
							MISC::CLEAR_BIT(&uLocal_338, 21);
							NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(0);
							Local_330.f_34 = 0;
							MISC::SET_BIT(&(Local_330.f_23), 0);
							Global_2815059.f_1723 = 0;
						}
					}
					else if (Local_330.f_27 == -15)
					{
						MISC::CLEAR_BIT(&(Local_330.f_23), 2);
						MISC::CLEAR_BIT(&(Local_330.f_23), 6);
						MISC::CLEAR_BIT(&uLocal_338, 21);
						NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(0);
						Local_330.f_34 = 0;
						iVar2 = __LIB_13__.func_95();
						__LIB_8__.func_610(&(Local_330.f_27), __LIB_0__.func_483(iVar2), __LIB_0__.func_195(iVar2), __LIB_0__.func_196(iVar2), __LIB_0__.func_482(iVar2), __LIB_0__.func_411(iVar2), __LIB_1__.func_26(iVar2));
						__LIB_27__.func_73(&(Local_330.f_27), 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 60), MISC::GET_RANDOM_INT_IN_RANGE(0, 8), 1, 0, 0);
					}
					else if (!func_11(6))
					{
						if (!__LIB_0__.func_649(&uLocal_305))
						{
							__LIB_0__.func_580(&uLocal_305, 0, 0);
						}
						else if (__LIB_2__.func_47(&uLocal_305, 10000, 0))
						{
							__LIB_0__.func_579(&uLocal_305);
							if (__LIB_32__.func_438(Local_330.f_27))
							{
								MISC::SET_BIT(&(Local_330.f_23), 0);
							}
						}
					}
				}
			}
			else if (Local_330.f_67 == 0)
			{
				if (__LIB_6__.func_977(1, 1, 1))
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_330.f_24))
					{
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_330.f_24);
					}
					Local_330.f_24 = -1;
					iLocal_291 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
					iVar3 = func_33();
					if (iVar3 != 0)
					{
						Local_330.f_67 = iVar3;
						NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
						Local_330.f_34 = 1;
					}
				}
			}
			else if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
			{
				if (__LIB_0__.func_584(Local_330.f_67))
				{
					if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_330.f_22))
					{
						if (func_21(&Var0, &fVar1))
						{
							if (__LIB_18__.func_220(&(Local_330.f_22), Local_330.f_67, Var0, fVar1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0))
							{
								if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
								{
									if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_330.f_22), "MPBitset"))
									{
										iVar4 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_330.f_22), "MPBitset");
									}
									MISC::SET_BIT(&iVar4, 5);
									DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_330.f_22), "MPBitset", iVar4);
								}
								if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
								{
									if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_330.f_22), "MPBitset"))
									{
										iVar5 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_330.f_22), "MPBitset");
									}
									MISC::SET_BIT(&iVar5, 10);
									DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_330.f_22), "MPBitset", iVar5);
								}
								if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
								{
									DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_330.f_22), "Not_Allow_As_Saved_Veh", 1);
								}
								MISC::SET_BIT(&(Local_330.f_23), 0);
								MISC::CLEAR_BIT(&(Local_330.f_23), 2);
								MISC::CLEAR_BIT(&(Local_330.f_23), 4);
								MISC::CLEAR_BIT(&(Local_330.f_23), 3);
								MISC::CLEAR_BIT(&uLocal_338, 11);
								MISC::CLEAR_BIT(&(Local_330.f_23), 6);
								MISC::SET_BIT(&uLocal_338, 23);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_330.f_67);
								Local_330.f_26 = 1;
								__LIB_0__.func_579(&(Local_330.f_30));
								__LIB_0__.func_580(&(Local_330.f_30), 0, 0);
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_330.f_22), 7);
								VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(NETWORK::NET_TO_VEH(Local_330.f_22), true);
								VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_330.f_67, true);
								NETWORK::SET_NETWORK_ID_PASS_CONTROL_IN_TUTORIAL(Local_330.f_22, true);
							}
						}
					}
				}
			}
			break;
		case 1:
			if (!BitTest(Local_330.f_23, 2))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_330.f_22), false))
					{
						Local_83.f_2 = -1337074122;
						__LIB_1__.func_226(Local_83, __LIB_2__.func_31(1));
						MISC::SET_BIT(&(Local_330.f_23), 2);
					}
				}
			}
			if (BitTest(uLocal_338, 3) || (BitTest(uLocal_338, 10) && BitTest(Local_330.f_23, 1)))
			{
				if (!BitTest(uLocal_338, 3))
				{
					if (!BitTest(Local_330.f_23, 2))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
						{
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_330.f_22), false))
							{
								Local_83.f_2 = -1337074122;
								__LIB_1__.func_226(Local_83, __LIB_2__.func_31(1));
								MISC::SET_BIT(&(Local_330.f_23), 2);
							}
						}
					}
				}
				Local_330.f_26 = 2;
			}
			if (func_15(NETWORK::NET_TO_VEH(Local_330.f_22)))
			{
				Local_330.f_26 = 2;
				Local_83.f_2 = 1837020641;
				__LIB_1__.func_226(Local_83, __LIB_2__.func_31(1));
			}
			if (!BitTest(Local_330.f_23, 4))
			{
				if (__LIB_2__.func_47(&(Local_330.f_30), 360000, 0))
				{
					MISC::SET_BIT(&(Local_330.f_23), 4);
					__LIB_0__.func_579(&(Local_330.f_30));
					__LIB_0__.func_580(&(Local_330.f_30), 0, 0);
				}
			}
			else if (BitTest(uLocal_338, 10))
			{
				if (!BitTest(Local_330.f_23, 3))
				{
					if (__LIB_0__.func_649(&(Local_330.f_30)))
					{
						if (__LIB_2__.func_47(&(Local_330.f_30), 120000, 0))
						{
							Local_330.f_26 = 2;
							Local_83.f_2 = 1837020641;
							__LIB_1__.func_226(Local_83, __LIB_2__.func_31(1));
						}
					}
					else
					{
						__LIB_0__.func_580(&(Local_330.f_30), 0, 0);
					}
				}
				else if (__LIB_0__.func_649(&(Local_330.f_30)))
				{
					__LIB_0__.func_579(&(Local_330.f_30));
				}
			}
			if (BitTest(Local_330.f_23, 6))
			{
				if (!BitTest(uLocal_338, 3))
				{
					if (Local_330.f_26 == 1)
					{
						Local_330.f_26 = 2;
					}
				}
			}
			if (func_11(6))
			{
				if (Local_330.f_26 == 1)
				{
					Local_330.f_26 = 2;
				}
			}
			break;
		case 2:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
			{
				if (__LIB_0__.func_682(Local_330.f_22))
				{
					__LIB_1__.func_46(&(Local_330.f_22));
					Local_330.f_26 = 3;
				}
			}
			else
			{
				Local_330.f_26 = 3;
			}
			break;
		case 3:
			if (BitTest(uLocal_338, 10))
			{
				if (BitTest(Local_330.f_23, 1))
				{
					Local_330.f_26 = 0;
					MISC::CLEAR_BIT(&(Local_330.f_23), 0);
					Local_330.f_27 = -15;
					if (Local_330.f_67 != 0)
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_330.f_67, false);
					}
					Local_330.f_67 = 0;
					if (bLocal_289)
					{
						__LIB_2__.func_317(__LIB_0__.func_679(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_LAUNCHER", -1, 0)), 0);
					}
				}
			}
			break;
	}
	func_3();
}

void func_3()//Position - 0xC68
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		switch (Local_330.f_69)
		{
			case 0:
				if (BitTest(Local_330.f_23, 8))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
					{
						if (!func_6())
						{
							if (ENTITY::GET_ENTITY_COLLISION_DISABLED(NETWORK::NET_TO_VEH(Local_330.f_22)))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_VEH(Local_330.f_22), 1204.0526f, -3102.3105f, 1.770506f, 1204.2653f, -3121.9736f, 17.920322f, 31.625f, false, true, 0))
								{
									if (!BitTest(Local_330.f_23, 9))
									{
										MISC::SET_BIT(&(Local_330.f_23), 9);
									}
								}
							}
						}
						else if (BitTest(Local_330.f_23, 9))
						{
							MISC::CLEAR_BIT(&(Local_330.f_23), 9);
						}
					}
				}
				break;
			}
	}
	if (BitTest(Local_330.f_23, 9))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
		{
			if (__LIB_2__.func_63(Local_330.f_22))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_330.f_22))
				{
					ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_VEH(Local_330.f_22), true, false);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_330.f_22), 1);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_330.f_22), false);
					NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_VEH(Local_330.f_22), true, 1);
					MISC::CLEAR_BIT(&(Local_330.f_23), 9);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_330.f_22);
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_330.f_23), 9);
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_330.f_23), 9);
		}
	}
}

int func_6()//Position - 0xE16
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
	{
		if (__LIB_2__.func_63(Local_330.f_22))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_330.f_22), -1, false);
			if (iVar0 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_11(int iParam0)//Position - 0xEE2
{
	return !__LIB_2__.func_317(iParam0);
}

int func_15(int iParam0)//Position - 0x12C8
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec1", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec1"))
			{
				return 1;
			}
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec"))
			{
				return 1;
			}
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombowner", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombowner"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_21(var uParam0, var uParam1)//Position - 0x1630
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	if (!__LIB_0__.func_78(*uParam0, 0f, 0f, 0f, 0))
	{
		return 1;
	}
	switch (iLocal_291)
	{
		case 0:
			Var0 = { -810.8889f, -126.9419f, 33f };
			Var1 = { -807.2521f, -116.098f, 38f };
			Var2 = { -809.0935f, -121.9038f, 36.504f };
			fVar3 = 240.8011f;
			break;
		case 1:
			Var0 = { -804.004f, -1317.2933f, 0.0005f };
			Var1 = { -797.881f, -1310.9979f, 7.0005f };
			Var2 = { -801.6295f, -1313.865f, 4.0005f };
			fVar3 = 350.3062f;
			break;
		case 2:
			Var0 = { -194.8607f, -1955.0051f, 25.6205f };
			Var1 = { -189.4078f, -1945.2478f, 28.6205f };
			Var2 = { -191.5592f, -1950.2394f, 26.6205f };
			fVar3 = 288.8187f;
			break;
		case 3:
			Var0 = { -2966.8748f, 459.3981f, 13.4644f };
			Var1 = { -2961.456f, 466.0484f, 16.1725f };
			Var2 = { -2963.8867f, 462.7986f, 14.2156f };
			fVar3 = 30.4415f;
			break;
		case 4:
			Var0 = { -420.6335f, 1217.7422f, 322.7591f };
			Var1 = { -411.9892f, 1220.3464f, 326.6421f };
			Var2 = { -416.0102f, 1219.7706f, 324.6421f };
			fVar3 = 230.4509f;
			break;
		case 5:
			Var0 = { -1634.7076f, -890.849f, 6.97f };
			Var1 = { -1633.9034f, -879.869f, 9.1264f };
			Var2 = { -1634.0059f, -885.3531f, 8.0518f };
			fVar3 = 321.31f;
			break;
		case 6:
			Var0 = { -338.4312f, -947.4233f, 28.0788f };
			Var1 = { -331.5926f, -944.408f, 32.0788f };
			Var2 = { -334.8547f, -945.2789f, 30.0788f };
			fVar3 = 69.0442f;
			break;
		case 7:
			Var0 = { 1093.925f, 245.6548f, 77.9908f };
			Var1 = { 1094.2432f, 255.0715f, 82.8556f };
			Var2 = { 1093.6864f, 250.4772f, 79.8556f };
			fVar3 = 328.5602f;
			break;
		case 8:
			Var0 = { -1407.8231f, 58.1796f, 50.8018f };
			Var1 = { -1400.19f, 63.9074f, 54.3222f };
			Var2 = { -1404.459f, 62.1459f, 52.0258f };
			fVar3 = 241.2814f;
			break;
		case 9:
			Var0 = { -1230.3242f, -1656.8137f, 2.0412f };
			Var1 = { -1226.4288f, -1648.1426f, 4.1986f };
			Var2 = { -1228.901f, -1652.397f, 3.1204f };
			fVar3 = 305.0972f;
			break;
	}
	if (!__LIB_0__.func_78(Var0, 0f, 0f, 0f, 0))
	{
		if (iLocal_291 < 10)
		{
			if (Local_330.f_24 == -1)
			{
				Local_330.f_24 = NETWORK::NETWORK_ADD_ENTITY_AREA(Var0, Var1);
			}
			else if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_330.f_24))
			{
				if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Local_330.f_24))
				{
					if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Local_330.f_24))
					{
						if (!__LIB_18__.func_221(Var2, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { Var2 };
							*uParam1 = fVar3;
							NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_330.f_24);
							Local_330.f_24 = -1;
							return 1;
						}
						else
						{
							iLocal_291++;
							NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_330.f_24);
							Local_330.f_24 = -1;
						}
					}
					else
					{
						iLocal_291++;
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_330.f_24);
						Local_330.f_24 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_291 = 0;
		}
	}
	return 0;
}

int func_33()//Position - 0x1D81
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	if (Global_262145.f_2344 /* Tunable: HIGH_PRIORITY_IMPORT_EXPORT_VEHICLE */ != 0)
	{
		iVar1 = Global_262145.f_2344 /* Tunable: HIGH_PRIORITY_IMPORT_EXPORT_VEHICLE */;
		if (STREAMING::IS_MODEL_IN_CDIMAGE(iVar1))
		{
			if (STREAMING::IS_MODEL_A_VEHICLE(iVar1))
			{
				iVar0 = iVar1;
			}
		}
	}
	if (iVar0 == 0)
	{
		iVar2 = func_35(&Local_330);
		iVar0 = func_34(iVar2);
	}
	return iVar0;
}

int func_34(int iParam0)//Position - 0x1DCF
{
	switch (iParam0)
	{
		case 0:
			return joaat("zion");
		case 1:
			return joaat("serrano");
		case 2:
			return joaat("jackal");
		case 3:
			return joaat("schafter2");
		case 4:
			return joaat("dubsta");
		case 5:
			return joaat("f620");
		case 6:
			return joaat("schwarzer");
		case 7:
			return joaat("rocoto");
		case 8:
			return joaat("sentinel2");
		case 9:
			return joaat("felon2");
		case 10:
			return joaat("comet2");
		case 11:
			return joaat("banshee");
		case 12:
			return joaat("surano");
		case 13:
			return joaat("coquette");
		case 14:
			return joaat("carbonizzare");
		case 15:
			return joaat("exemplar");
		case 16:
			return joaat("feltzer2");
		case 17:
			return joaat("bullet");
		case 18:
			return joaat("superd");
		case 19:
			return joaat("infernus");
		default:
	}
	return 0;
}

int func_35(var uParam0)//Position - 0x1EF7
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = (iVar1 + iVar0);
		if (iVar2 >= 5)
		{
			iVar2 = (iVar2 - 5);
		}
		if (!(*uParam0)[iVar2] == -1)
		{
			if (uParam0->f_6[iVar2] == 0)
			{
				return (*uParam0)[iVar2];
			}
		}
		iVar1++;
	}
	return -1;
}

int func_64()//Position - 0x2889
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!Local_330.f_6[iVar0])
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_65()//Position - 0x28B5
{
	int iVar0;
	if (!BitTest(Local_330.f_23, 5))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_330.f_35[iVar0] = -1;
			iVar0++;
		}
		MISC::SET_BIT(&(Local_330.f_23), 5);
	}
}

void func_66()//Position - 0x28EF
{
	int iVar0;
	func_517(&Local_330, 5);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_330.f_12[iVar0] = func_67();
		iVar0++;
	}
	Local_330.f_33 = 1;
}

int func_67()//Position - 0x2924
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	while (func_68(iVar0))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	}
	return iVar0;
}

int func_68(int iParam0)//Position - 0x294C
{
	int iVar0;
	if (!iParam0 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (Local_330.f_12[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_69()//Position - 0x2981
{
	int iVar0;
	iVar0 = func_35(&Local_330);
	if (iVar0 != Local_330.f_28)
	{
		Local_330.f_28 = iVar0;
		Local_330.f_29 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_70()//Position - 0x29AC
{
	if (Local_330.f_20 > 0)
	{
		if (Local_330[0] != Local_330[1])
		{
			return 1;
		}
	}
	return 0;
}

void func_72()//Position - 0x29E7
{
	Local_330.f_29 = 0;
}

void func_73()//Position - 0x29F5
{
	int iVar0;
	if (func_70())
	{
		if (Global_2815059.f_4451 == 0 || BitTest(Global_2815059.f_4452, 0))
		{
			if (!__LIB_0__.func_649(&uLocal_311) || __LIB_2__.func_47(&uLocal_311, 2000, 0))
			{
				iVar0 = func_35(&Local_329);
				if (iVar0 > -1)
				{
					Global_2815059.f_4451 = func_34(iVar0);
					__LIB_0__.func_579(&uLocal_309);
					__LIB_0__.func_580(&uLocal_309, 0, 0);
					if (BitTest(Global_2815059.f_4452, 0))
					{
						MISC::CLEAR_BIT(&(Global_2815059.f_4452), 0);
					}
				}
				else
				{
					__LIB_0__.func_579(&uLocal_311);
					__LIB_0__.func_580(&uLocal_311, 0, 0);
				}
			}
		}
		else if (Global_2815059.f_4451 != 0)
		{
			if (__LIB_2__.func_47(&uLocal_309, 20000, 0))
			{
				if (!func_74(&Local_329, Global_2815059.f_4451))
				{
					Global_2815059.f_4451 = 0;
				}
				__LIB_0__.func_579(&uLocal_309);
				__LIB_0__.func_580(&uLocal_309, 0, 0);
			}
		}
	}
}

int func_74(var uParam0, int iParam1)//Position - 0x2AD8
{
	int iVar0;
	int iVar1;
	iVar0 = func_75(iParam1);
	if (!iVar0 == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!(*uParam0)[iVar1] == -1)
			{
				if (!uParam0->f_6[iVar1])
				{
					if ((*uParam0)[iVar1] == iVar0)
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

int func_75(int iParam0)//Position - 0x2B2A
{
	switch (iParam0)
	{
		case joaat("zion"):
			return 0;
		case joaat("serrano"):
			return 1;
		case joaat("jackal"):
			return 2;
		case joaat("schafter2"):
			return 3;
		case joaat("dubsta"):
			return 4;
		case joaat("f620"):
			return 5;
		case joaat("schwarzer"):
			return 6;
		case joaat("rocoto"):
			return 7;
		case joaat("sentinel2"):
			return 8;
		case joaat("felon2"):
			return 9;
		case joaat("comet2"):
			return 10;
		case joaat("banshee"):
			return 11;
		case joaat("surano"):
			return 12;
		case joaat("coquette"):
			return 13;
		case joaat("carbonizzare"):
			return 14;
		case joaat("exemplar"):
			return 15;
		case joaat("feltzer2"):
			return 16;
		case joaat("bullet"):
			return 17;
		case joaat("superd"):
			return 18;
		case joaat("infernus"):
			return 19;
		default:
	}
	return -1;
}

void func_76()//Position - 0x2C0E
{
	int iVar0;
	if (((((bLocal_90 || bLocal_91) || bLocal_92) || bLocal_94) || bLocal_93) || bLocal_95)
	{
		if (((((Global_2815059.f_28.f_41 || __LIB_7__.func_268(PLAYER::PLAYER_ID(), 1, 0)) || __LIB_2__.func_37(PLAYER::PLAYER_ID())) || !__LIB_4__.func_715()) || func_123()) || func_118())
		{
			bLocal_90 = false;
			bLocal_92 = false;
			bLocal_91 = false;
			bLocal_94 = false;
			bLocal_93 = false;
			__LIB_18__.func_455();
		}
	}
	if ((__LIB_7__.func_260("FM_CTUT_RSP" /* GXT: Get your vehicle resprayed. */) || __LIB_7__.func_260("FM_CTUT_REP" /* GXT: Get your vehicle repaired. */)) || __LIB_7__.func_260("FM_CTUT_LLS" /* GXT: Leave Los Santos Customs. */))
	{
		if (!__LIB_0__.func_190() || func_118())
		{
			__LIB_18__.func_455();
		}
	}
	if (bLocal_95)
	{
		if (!__LIB_7__.func_260("FM_IHELP_LCP" /* GXT: Lose the Cops. */))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_98())
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						if (func_97())
						{
							__LIB_25__.func_25("FM_IHELP_LCP" /* GXT: Lose the Cops. */, 0);
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_338, 18))
	{
		if (__LIB_7__.func_260("FM_IHELP_LCP" /* GXT: Lose the Cops. */))
		{
			__LIB_25__.func_35("FM_IHELP_LCP" /* GXT: Lose the Cops. */);
		}
	}
	if (bLocal_90)
	{
		if (!__LIB_7__.func_260("FM_CTUT_MOD" /* GXT: Go to Los Santos Customs. */))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_98())
				{
					if (BitTest(uLocal_315, 2))
					{
						if (func_97())
						{
							__LIB_25__.func_25("FM_CTUT_MOD" /* GXT: Go to Los Santos Customs. */, 0);
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_338, 18))
	{
		if (__LIB_7__.func_260("FM_CTUT_MOD" /* GXT: Go to Los Santos Customs. */))
		{
			__LIB_25__.func_35("FM_CTUT_MOD" /* GXT: Go to Los Santos Customs. */);
		}
	}
	if (bLocal_92)
	{
		if (!__LIB_7__.func_260("FM_CTUT_RSP" /* GXT: Get your vehicle resprayed. */))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!__LIB_7__.func_268(PLAYER::PLAYER_ID(), 1, 0))
						{
							if (func_97())
							{
								if (__LIB_0__.func_190())
								{
									__LIB_25__.func_25("FM_CTUT_RSP" /* GXT: Get your vehicle resprayed. */, 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_338, 18))
	{
		if (__LIB_7__.func_260("FM_CTUT_RSP" /* GXT: Get your vehicle resprayed. */))
		{
			__LIB_25__.func_35("FM_CTUT_RSP" /* GXT: Get your vehicle resprayed. */);
		}
	}
	if (bLocal_93)
	{
		if (!__LIB_7__.func_260("FM_CTUT_RSP" /* GXT: Get your vehicle resprayed. */))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!__LIB_7__.func_268(PLAYER::PLAYER_ID(), 1, 0))
						{
							if (func_97())
							{
								if (__LIB_0__.func_190())
								{
									__LIB_25__.func_25("FM_CTUT_REP" /* GXT: Get your vehicle repaired. */, 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_338, 18))
	{
		if (__LIB_7__.func_260("FM_CTUT_REP" /* GXT: Get your vehicle repaired. */))
		{
			__LIB_25__.func_35("FM_CTUT_REP" /* GXT: Get your vehicle repaired. */);
		}
	}
	if (bLocal_94)
	{
		if (!__LIB_7__.func_260("FM_CTUT_LLS" /* GXT: Leave Los Santos Customs. */))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_98() || func_77())
				{
					if (func_97())
					{
						if (__LIB_0__.func_190())
						{
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_338, 18))
	{
		if (__LIB_7__.func_260("FM_CTUT_LLS" /* GXT: Leave Los Santos Customs. */))
		{
			__LIB_25__.func_35("FM_CTUT_LLS" /* GXT: Leave Los Santos Customs. */);
		}
	}
	if (bLocal_91)
	{
		if (!__LIB_7__.func_260("FM_IMP_SIM" /* GXT: Go to Simeon's Garage. */))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_98() || func_77())
				{
					if (BitTest(uLocal_315, 3))
					{
						if (!iLocal_97)
						{
							if (func_97())
							{
								__LIB_25__.func_25("FM_IMP_SIM" /* GXT: Go to Simeon's Garage. */, 0);
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										iLocal_326 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									}
								}
							}
						}
						else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (iVar0 != iLocal_326)
								{
									iLocal_97 = 0;
									__LIB_0__.func_579(&uLocal_313);
								}
							}
						}
					}
				}
			}
		}
		else if (!__LIB_0__.func_649(&uLocal_313))
		{
			__LIB_0__.func_580(&uLocal_313, 0, 0);
		}
		else if (__LIB_2__.func_47(&uLocal_313, 20000, 0))
		{
			__LIB_18__.func_455();
			iLocal_97 = 1;
		}
	}
	else if (!BitTest(uLocal_338, 18))
	{
		if (__LIB_7__.func_260("FM_IMP_SIM" /* GXT: Go to Simeon's Garage. */))
		{
			__LIB_25__.func_35("FM_IMP_SIM" /* GXT: Go to Simeon's Garage. */);
		}
	}
}

bool func_77()//Position - 0x2FA0
{
	return (((((__LIB_7__.func_187(39) || __LIB_7__.func_187(40)) || __LIB_7__.func_187(41)) || __LIB_7__.func_187(42)) || __LIB_7__.func_187(43)) || __LIB_7__.func_187(44));
}

bool func_97()//Position - 0x3984
{
	bool bVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
	{
		if (__LIB_2__.func_63(Local_330.f_22))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_330.f_22)))
				{
				}
			}
		}
	}
	if (!BitTest(uLocal_339, 0))
	{
		if (!BitTest(uLocal_339, 1))
		{
			bVar0 = true;
		}
		else if (!BitTest(uLocal_339, 2))
		{
			bVar0 = true;
		}
		else if (!BitTest(uLocal_339, 3))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			MISC::SET_BIT(&uLocal_339, 0);
		}
	}
	return bVar0;
}

int func_98()//Position - 0x3A07
{
	if ((((((((((((((((((!__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || __LIB_0__.func_191(8, -1)) || __LIB_0__.func_191(15, -1)) || __LIB_2__.func_284()) || __LIB_0__.func_191(3, -1)) || __LIB_7__.func_268(PLAYER::PLAYER_ID(), 1, 0)) || __LIB_1__.func_41()) || __LIB_0__.func_190()) || __LIB_0__.func_527()) || __LIB_2__.func_101()) || __LIB_7__.func_280()) || __LIB_0__.func_75()) || HUD::IS_MESSAGE_BEING_DISPLAYED()) || __LIB_2__.func_105() > 0) || !__LIB_4__.func_715()) || __LIB_25__.func_933()) || func_118())
	{
		return 0;
	}
	return 1;
}

int func_118()//Position - 0x3DAD
{
	if (__LIB_0__.func_292(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	if (__LIB_1__.func_334(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_123()//Position - 0x44C4
{
	if (func_127())
	{
		return 1;
	}
	if (__LIB_18__.func_259(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	if (__LIB_0__.func_292(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	return 0;
}

int func_127()//Position - 0x460D
{
	if (!__LIB_2__.func_296(PLAYER::PLAYER_ID()))
	{
		if (__LIB_7__.func_281(PLAYER::PLAYER_ID()) || __LIB_1__.func_182(PLAYER::PLAYER_ID()) != -1)
		{
			return 1;
		}
		if (__LIB_1__.func_338(PLAYER::PLAYER_ID()) && Global_1836844.f_4 == 133)
		{
			return 1;
		}
	}
	return 0;
}

void func_141()//Position - 0x47C5
{
	if (bLocal_88)
	{
		if (!HUD::DOES_BLIP_EXIST(Global_1931386))
		{
			Global_1931386 = HUD::ADD_BLIP_FOR_COORD(Global_1931387);
			HUD::SET_BLIP_SPRITE(Global_1931386, 293);
			HUD::SET_BLIP_SCALE(Global_1931386, 1f);
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_1931386, false);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1931386, "IMPEX_BLIP_FM" /* GXT: Simeon */);
			if (func_170())
			{
				HUD::SET_BLIP_FLASHES(Global_1931386, true);
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Global_1931386))
	{
		HUD::REMOVE_BLIP(&Global_1931386);
		if (bLocal_287)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!func_165(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), joaat("MP_GAR_SIMEON"), &uLocal_318, 0, 500, 1, 0))
					{
						if (func_118())
						{
							__LIB_0__.func_151("IMPEX_HIPR_DAM" /* GXT: This vehicle is no longer required by Simeon as it's too damaged. */, -1);
						}
					}
				}
			}
		}
	}
	if (bLocal_89)
	{
		if (iLocal_110 == -1)
		{
			iLocal_110 = __LIB_35__.func_550(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 4, -1);
			if (iLocal_110 != -1)
			{
				func_142(iLocal_110, 1);
			}
		}
	}
	else if (iLocal_110 != -1)
	{
		func_142(iLocal_110, 0);
		iLocal_110 = -1;
	}
}

void func_142(int iParam0, bool bParam1)//Position - 0x48C0
{
	switch (iParam0)
	{
		case 39:
			func_143(39, bParam1);
			break;
		case 40:
			func_143(40, bParam1);
			break;
		case 41:
			func_143(41, bParam1);
			break;
		case 42:
			func_143(42, bParam1);
			break;
		case 43:
			func_143(43, bParam1);
			break;
		case 44:
			func_143(44, bParam1);
			break;
		default:
			break;
	}
}

void func_143(int iParam0, bool bParam1)//Position - 0x4938
{
	if (bParam1)
	{
		if (!__LIB_7__.func_91(iParam0, 8, 0))
		{
			__LIB_7__.func_261(iParam0, 8, 0);
			__LIB_1__.func_285(iParam0);
		}
	}
	else if (__LIB_7__.func_91(iParam0, 8, 0))
	{
		__LIB_12__.func_661(iParam0, 8, 0);
		__LIB_1__.func_285(iParam0);
	}
}

int func_165(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x67B7
{
	if (!__LIB_0__.func_649(uParam2))
	{
		__LIB_0__.func_580(uParam2, 0, 0);
	}
	fParam3 = 0f;
	if (func_166(iParam0, iParam1, 1, uParam2, fParam3, iParam4, bParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0, int iParam1, bool bParam2, var uParam3, float fParam4, int iParam5, bool bParam6, var uParam7)//Position - 0x67EF
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	if (!__LIB_0__.func_649(uParam3))
	{
		__LIB_0__.func_580(uParam3, 0, 0);
	}
	__LIB_2__.func_220(&Var3, iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (__LIB_7__.func_228(iParam0, iParam1, 30))
			{
				if (ENTITY::IS_ENTITY_A_PED(iParam0))
				{
					iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (PED::IS_PED_A_PLAYER(iVar0))
						{
							iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
							if (bParam2)
							{
								if (OBJECT::IS_PLAYER_ENTIRELY_INSIDE_GARAGE(iParam1, iVar2, fParam4, -1))
								{
									if (uParam7 || (!OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, iVar2, 2) && !(Var3.f_7 != 0 && OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, iVar2, 3))))
									{
										if (bParam6)
										{
											return 1;
										}
										else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
										{
											return 1;
										}
										else
										{
											return 0;
										}
									}
								}
							}
							else if (OBJECT::IS_PLAYER_ENTIRELY_INSIDE_GARAGE(iParam1, iVar2, fParam4, -1))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, iVar2, 2))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (Var3.f_7 != 0 && OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, iVar2, 3))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
						{
							iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
							if (ENTITY::DOES_ENTITY_EXIST(iVar1))
							{
								if (bParam2)
								{
									if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iVar1, fParam4, -1))
									{
										if (uParam7 || (!OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 2) && !(Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 3))))
										{
											if (bParam6)
											{
												return 1;
											}
											else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
											{
												return 1;
											}
											else
											{
												return 0;
											}
										}
									}
								}
								else if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iVar1, fParam4, -1))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 2))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 3))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (bParam2)
						{
							if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1))
							{
								if (uParam7 || (!OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3))))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0) || ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
				{
					if (bParam2)
					{
						if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1))
						{
							if (uParam7 || (!OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3))))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
					}
					else if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
				}
			}
		}
	}
	__LIB_0__.func_579(uParam3);
	return 0;
}

int func_170()//Position - 0x7445
{
	int iVar0;
	var uVar1;
	uVar1 = __LIB_1__.func_556(1200, -1, 0);
	if (!BitTest(uVar1, 1))
	{
		iVar0 = 1;
	}
	else if (!BitTest(uVar1, 2))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_171()//Position - 0x7473
{
	if (bLocal_86)
	{
		if (!iLocal_87)
		{
			func_173(joaat("MP_GAR_SIMEON"), 1, 0);
			__LIB_1__.func_549(1);
			iLocal_87 = 1;
		}
	}
	else if (iLocal_87)
	{
		func_173(joaat("MP_GAR_SIMEON"), 0, 0);
		__LIB_1__.func_549(0);
		iLocal_87 = 0;
	}
}

void func_173(int iParam0, bool bParam1, bool bParam2)//Position - 0x74D9
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (bParam1)
	{
		if (!BitTest(Global_2815059.f_4565, func_174(iParam0)))
		{
			if (bParam2)
			{
				MISC::SET_BIT(&(Global_2815059.f_4565.f_1), func_174(iParam0));
			}
			MISC::SET_BIT(&(Global_2815059.f_4565), func_174(iParam0));
		}
	}
	else if (BitTest(Global_2815059.f_4565, func_174(iParam0)))
	{
		if (bParam2)
		{
			MISC::CLEAR_BIT(&(Global_2815059.f_4565.f_1), func_174(iParam0));
		}
		MISC::CLEAR_BIT(&(Global_2815059.f_4565), func_174(iParam0));
	}
}

int func_174(int iParam0)//Position - 0x7569
{
	switch (iParam0)
	{
		case joaat("MP_GAR_SIMEON"):
			return 0;
			break;
		case joaat("MP_GAR_PNS_2"):
			return 1;
			break;
		case joaat("MP_GAR_PNS_3"):
			return 2;
			break;
		case joaat("MP_GAR_PNS_4"):
			return 3;
			break;
		case joaat("MP_GAR_PNS_5"):
			return 4;
			break;
		case joaat("MP_GAR_PNS_6"):
			return 5;
			break;
	}
	return 0;
}

void func_175()//Position - 0x75C7
{
	int iVar0;
	int iVar1;
	if (BitTest(Local_330.f_23, 0))
	{
		if (iLocal_321 >= 32)
		{
			MISC::CLEAR_BIT(&uLocal_338, 5);
			iLocal_321 = 0;
			iLocal_293 = -1;
		}
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_321)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_321));
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			if (__LIB_0__.func_154(iVar0, 0, 1))
			{
				if (!BitTest(uLocal_338, 3))
				{
					if (BitTest(Local_337[iLocal_321 /*4*/].f_2, 1))
					{
						MISC::SET_BIT(&uLocal_338, 3);
					}
				}
				if (iLocal_293 == -1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
					{
						if (__LIB_2__.func_63(Local_330.f_22))
						{
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(iVar1, NETWORK::NET_TO_VEH(Local_330.f_22)))
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_330.f_22), -1, false) == iVar1)
									{
										iLocal_293 = iLocal_321;
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_321++;
		if (iLocal_321 >= 32)
		{
			MISC::SET_BIT(&uLocal_338, 5);
		}
		func_266();
		if (!BitTest(uLocal_338, 3))
		{
			if (!BitTest(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 3))
			{
				if (!BitTest(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 1))
				{
					if (func_264())
					{
						MISC::SET_BIT(&(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 3);
					}
				}
			}
		}
	}
	if (iLocal_290 != Local_330.f_34)
	{
		if (Local_330.f_34 == 0)
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
			{
				iLocal_290 = Local_330.f_34;
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_290);
			}
		}
		else
		{
			iLocal_290 = Local_330.f_34;
			NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_290);
		}
	}
	if (BitTest(Local_330.f_23, 0))
	{
		switch (Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3)
		{
			case 0:
				if (!Global_2815059.f_1722)
				{
				}
				if (BitTest(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 3))
				{
					MISC::CLEAR_BIT(&(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 3);
				}
				if (BitTest(uLocal_338, 21))
				{
					MISC::CLEAR_BIT(&uLocal_338, 21);
				}
				if (BitTest(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 1))
				{
					MISC::CLEAR_BIT(&(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 1);
				}
				if (((!__LIB_7__.func_268(PLAYER::PLAYER_ID(), 1, 0) && !__LIB_1__.func_41()) && !__LIB_1__.func_155(PLAYER::PLAYER_ID(), 1, 0)) || __LIB_0__.func_702(PLAYER::PLAYER_ID(), 6))
				{
					if (BitTest(uLocal_338, 3))
					{
						MISC::CLEAR_BIT(&uLocal_338, 3);
					}
					if (BitTest(uLocal_338, 19))
					{
						MISC::CLEAR_BIT(&uLocal_338, 19);
					}
					if (BitTest(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 3))
					{
						MISC::CLEAR_BIT(&(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 3);
					}
					if (iLocal_292 != -1)
					{
						iLocal_292 = -1;
					}
					if (BitTest(Local_330.f_23, 0))
					{
						if (!BitTest(uLocal_338, 16))
						{
							MISC::SET_BIT(&uLocal_338, 16);
							__LIB_1__.func_103(6, 1);
							MISC::SET_BIT(&uLocal_338, 7);
							Global_2815059.f_1721 = 1;
							Global_2815059.f_1722 = 0;
						}
						if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
							{
								if (func_256())
								{
									if (Local_330.f_67 != 0)
									{
										VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_330.f_67, true);
									}
									Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 1;
									Global_1931397 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_330.f_22));
									if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_330.f_22))))
									{
										HUD::SET_BLIP_SPRITE(Global_1931397, 348);
										__LIB_0__.func_151("IMPEX_HIPB_INT" /* GXT: Simeon wants a specific vehicle ~HUD_COLOUR_GREEN~~BLIP_GANG_BIKE~ ~s~delivered. Get it resprayed ~BLIP_CAR_MOD_SHOP~ and deliver it to him at the docks for cash. */, -1);
									}
									else
									{
										HUD::SET_BLIP_SPRITE(Global_1931397, 225);
										__LIB_0__.func_151("IMPEX_HIPR_INT" /* GXT: Simeon wants a specific vehicle ~HUD_COLOUR_GREEN~~BLIP_GANG_VEHICLE~ ~s~delivered. Get it resprayed ~BLIP_CAR_MOD_SHOP~ and deliver it to him at the docks for cash. */, -1);
									}
									HUD::SET_BLIP_COLOUR(Global_1931397, 2);
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1931397, "IMPEX_HIPR_BLP" /* GXT: High Priority Vehicle */);
									__LIB_1__.func_103(6, 1);
									MISC::SET_BIT(&uLocal_338, 7);
									Global_2815059.f_1721 = 1;
									if (func_118())
									{
										HUD::SET_BLIP_DISPLAY(Global_1931397, 0);
									}
								}
							}
						}
					}
				}
				else if (!Global_2815059.f_1722)
				{
					Global_2815059.f_1722 = 1;
				}
				break;
			case 1:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_330.f_22), false))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_330.f_22)))
							{
								__LIB_17__.func_230(1);
								if (__LIB_0__.func_674())
								{
									__LIB_18__.func_451(2, 0, 1);
								}
								if (HUD::DOES_BLIP_EXIST(Global_1931397))
								{
									HUD::REMOVE_BLIP(&Global_1931397);
								}
							}
							else
							{
								__LIB_17__.func_230(0);
								if (!func_248(NETWORK::NET_TO_VEH(Local_330.f_22), 0))
								{
									if (!HUD::DOES_BLIP_EXIST(Global_1931397))
									{
										if (!iLocal_109)
										{
											func_247();
										}
									}
								}
							}
						}
						if (!BitTest(uLocal_338, 19))
						{
							if (func_256())
							{
								if (func_245())
								{
									if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_330.f_22)))
									{
										if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_330.f_22), true)) < 2500f)
										{
											if (func_118())
											{
												__LIB_0__.func_151("FM_IMP_JAC" /* GXT: You can jack another player from a vehicle by holding ~INPUT_ENTER~ while stood next to the vehicle. */, -1);
											}
											MISC::SET_BIT(&uLocal_338, 19);
										}
									}
								}
							}
						}
						if (func_244())
						{
						}
						func_242();
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(Global_1931397))
						{
							HUD::REMOVE_BLIP(&Global_1931397);
						}
						__LIB_1__.func_103(6, 0);
						MISC::CLEAR_BIT(&uLocal_338, 7);
						Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
					}
				}
				else
				{
					if (Local_330.f_67 != 0)
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_330.f_67, false);
					}
					if (HUD::DOES_BLIP_EXIST(Global_1931397))
					{
						HUD::REMOVE_BLIP(&Global_1931397);
					}
					__LIB_1__.func_103(6, 0);
					MISC::CLEAR_BIT(&uLocal_338, 7);
					Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
				}
				if (BitTest(uLocal_338, 3))
				{
					__LIB_1__.func_103(6, 0);
					MISC::CLEAR_BIT(&uLocal_338, 7);
					if (HUD::DOES_BLIP_EXIST(Global_1931397))
					{
						HUD::REMOVE_BLIP(&Global_1931397);
					}
					Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
				}
				if (Local_330.f_26 == 3)
				{
					if (Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 == 1)
					{
						if (Local_330.f_67 != 0)
						{
							VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_330.f_67, false);
						}
						if (HUD::DOES_BLIP_EXIST(Global_1931397))
						{
							HUD::REMOVE_BLIP(&Global_1931397);
						}
						if (BitTest(uLocal_338, 16))
						{
							MISC::CLEAR_BIT(&uLocal_338, 16);
						}
						__LIB_1__.func_103(6, 0);
						MISC::CLEAR_BIT(&uLocal_338, 7);
						Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
					}
				}
				break;
			case 3:
				__LIB_17__.func_230(0);
				break;
		}
		if (func_239())
		{
			if (__LIB_0__.func_1("IMPEX_HIPR_INT" /* GXT: Simeon wants a specific vehicle ~HUD_COLOUR_GREEN~~BLIP_GANG_VEHICLE~ ~s~delivered. Get it resprayed ~BLIP_CAR_MOD_SHOP~ and deliver it to him at the docks for cash. */))
			{
				HUD::CLEAR_HELP(true);
			}
			if (HUD::DOES_BLIP_EXIST(Global_1931397))
			{
				HUD::REMOVE_BLIP(&Global_1931397);
			}
			if (Local_330.f_67 != 0)
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_330.f_67, false);
			}
			Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
			__LIB_1__.func_103(6, 0);
			MISC::CLEAR_BIT(&uLocal_338, 7);
			if (BitTest(uLocal_338, 16))
			{
				MISC::CLEAR_BIT(&uLocal_338, 16);
			}
			__LIB_17__.func_230(0);
		}
		func_190();
		if (Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 > 0 && Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 < 3)
		{
			func_187();
		}
	}
	else
	{
		if (Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 != 0)
		{
			if (Local_330.f_67 != 0)
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_330.f_67, false);
			}
			Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 0;
		}
		if (BitTest(uLocal_338, 21))
		{
			MISC::CLEAR_BIT(&uLocal_338, 21);
		}
		if (Global_2815059.f_1721)
		{
			if (!__LIB_0__.func_649(&uLocal_303))
			{
				__LIB_0__.func_580(&uLocal_303, 0, 0);
			}
			else if (__LIB_2__.func_47(&uLocal_303, 5000, 0))
			{
				__LIB_0__.func_579(&uLocal_303);
				Global_2815059.f_1721 = 0;
			}
		}
		if (BitTest(uLocal_338, 16))
		{
			if (Local_330.f_34 == 0)
			{
				MISC::CLEAR_BIT(&uLocal_338, 16);
			}
		}
	}
	func_176();
}

void func_176()//Position - 0x7CB5
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	var uVar3;
	bool bVar4;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
	{
		if (__LIB_2__.func_63(Local_330.f_22))
		{
			if (!func_245())
			{
				if (!__LIB_0__.func_649(&uLocal_344))
				{
					__LIB_0__.func_580(&uLocal_344, 0, 0);
				}
				if (__LIB_2__.func_47(&uLocal_344, 1000, 0))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_330.f_22))
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_330.f_22), true) };
						if (__LIB_0__.func_331(Var1, __LIB_18__.func_444(39), __LIB_31__.func_882(39, 0)))
						{
							if (__LIB_7__.func_226(39, 0, &Var0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (__LIB_0__.func_331(Var1, __LIB_18__.func_444(40), __LIB_31__.func_882(40, 0)))
						{
							if (__LIB_7__.func_226(40, 0, &Var0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (__LIB_0__.func_331(Var1, __LIB_18__.func_444(41), __LIB_31__.func_882(41, 0)))
						{
							if (__LIB_7__.func_226(41, 0, &Var0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (__LIB_0__.func_331(Var1, __LIB_18__.func_444(42), __LIB_31__.func_882(42, 0)))
						{
							if (__LIB_7__.func_226(42, 0, &Var0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (__LIB_0__.func_331(Var1, __LIB_18__.func_444(43), __LIB_31__.func_882(43, 0)))
						{
							if (__LIB_7__.func_226(43, 0, &Var0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (__LIB_0__.func_331(Var1, __LIB_18__.func_444(44), __LIB_31__.func_882(44, 0)))
						{
							if (__LIB_7__.func_226(44, 0, &Var0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
					}
					__LIB_0__.func_579(&uLocal_344);
				}
				if (bVar4)
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_330.f_22))
					{
						if (__LIB_7__.func_141(NETWORK::NET_TO_VEH(Local_330.f_22), 1, 0, 0, 0, 0, 1, 0, 1))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_VEH(Local_330.f_22), Var0, false, false, true);
							ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_330.f_22), fVar2);
							NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_VEH(Local_330.f_22), true, 1);
							ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_330.f_22), false);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_330.f_22), 1);
						}
					}
				}
			}
		}
	}
}

void func_187()//Position - 0xA256
{
	int iVar0;
	bool bVar1;
	int iVar2;
	if (iLocal_293 > -1)
	{
		if (iLocal_293 != NETWORK::PARTICIPANT_ID_TO_INT())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_293)))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_293));
				bVar1 = true;
				if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(iVar0, PLAYER::PLAYER_ID()))
				{
					iVar2 = 1;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
	{
		if (__LIB_2__.func_63(Local_330.f_22))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_330.f_22), false))
				{
					if (Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 == 0)
					{
						if (!bVar1 || (bVar1 && iVar2))
						{
							func_188(NETWORK::NET_TO_VEH(Local_330.f_22), 0, 10);
						}
					}
				}
			}
		}
	}
}

void func_188(int iParam0, int iParam1, int iParam2)//Position - 0xA30B
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	HUD::GET_HUD_COLOUR(iParam2, &iVar0, &iVar1, &iVar2, &uVar3);
	if (iParam1 == 0)
	{
	}
	VEHICLE::TRACK_VEHICLE_VISIBILITY(iParam0);
	if (__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (func_189(iParam0) == 0)
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
				{
					if (VEHICLE::IS_VEHICLE_VISIBLE(iParam0))
					{
						GRAPHICS::ADD_ENTITY_ICON(iParam0, "MP_Arrow");
						GRAPHICS::SET_ENTITY_ICON_COLOR(iParam0, iVar0, iVar1, iVar2, 190);
						GRAPHICS::SET_ENTITY_ICON_VISIBILITY(iParam0, true);
					}
				}
			}
		}
	}
}

int func_189(int iParam0)//Position - 0xA386
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) == 0 && VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0) == 0)
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_190()//Position - 0xA3C0
{
	int iVar0;
	if (BitTest(uLocal_338, 5))
	{
		if (iLocal_292 != iLocal_293)
		{
			if (iLocal_293 > -1)
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_293)))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_293));
					if (iVar0 != PLAYER::PLAYER_ID())
					{
						if (!__LIB_1__.func_155(PLAYER::PLAYER_ID(), 1, 0))
						{
							__LIB_35__.func_558("IMPEX_TICK_DHPV" /* GXT: ~a~ ~s~has taken the high priority Import/Export vehicle. */, iVar0, 0, 0, 0, 1, 0);
						}
					}
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (!BitTest(Local_330.f_23, 8))
						{
							MISC::SET_BIT(&(Local_330.f_23), 8);
						}
					}
				}
			}
			iLocal_292 = iLocal_293;
		}
	}
}

int func_239()//Position - 0xB74A
{
	if ((Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 > 0 && Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 < 3) || (Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 == 0 && __LIB_0__.func_702(PLAYER::PLAYER_ID(), 6)))
	{
		if (__LIB_7__.func_268(PLAYER::PLAYER_ID(), 1, 0) || __LIB_1__.func_41())
		{
			if ((!__LIB_1__.func_390(PLAYER::PLAYER_ID(), 5) && !__LIB_1__.func_390(PLAYER::PLAYER_ID(), 32)) && !__LIB_1__.func_390(PLAYER::PLAYER_ID(), 148))
			{
				return 1;
			}
			else if (!iLocal_109)
			{
				if (HUD::DOES_BLIP_EXIST(Global_1931397))
				{
					HUD::REMOVE_BLIP(&Global_1931397);
				}
				iLocal_109 = 1;
			}
		}
		else if (iLocal_109)
		{
			func_247();
			iLocal_109 = 0;
		}
		if (Local_330.f_26 == 3)
		{
			if (Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 == 0 && __LIB_0__.func_702(PLAYER::PLAYER_ID(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_242()//Position - 0xB892
{
	if (HUD::DOES_BLIP_EXIST(Global_1931397))
	{
		if (func_118() || __LIB_2__.func_17())
		{
			HUD::SET_BLIP_DISPLAY(Global_1931397, 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(Global_1931397, 4);
		}
		if (!iLocal_98)
		{
			if (__LIB_1__.func_155(PLAYER::PLAYER_ID(), 1, 0))
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Global_1931397, true);
				iLocal_98 = 1;
			}
		}
		else if (!__LIB_1__.func_155(PLAYER::PLAYER_ID(), 1, 0))
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_1931397, false);
			iLocal_98 = 0;
		}
	}
}

int func_244()//Position - 0xB916
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
	{
		if (__LIB_2__.func_63(Local_330.f_22))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_330.f_22), 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_330.f_22), 1, 40000))
			{
				if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_330.f_22))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_330.f_22))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_330.f_22), -2000f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_330.f_22), 0f);
					}
					return 1;
				}
				else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (__LIB_0__.func_682(Local_330.f_22))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_330.f_22), -2000f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_330.f_22), 0f);
						return 1;
					}
				}
				else
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
	return 0;
}

int func_245()//Position - 0xB9E7
{
	int iVar0;
	int iVar1;
	if (iLocal_293 == -1 && BitTest(uLocal_338, 5))
	{
		return 0;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
	{
		if (__LIB_2__.func_63(Local_330.f_22))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_330.f_22)))
				{
					if (__LIB_1__.func_198(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_330.f_22), -1))
					{
						return 1;
					}
				}
			}
			if (iLocal_293 >= 0)
			{
				if (iLocal_293 != NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_293)))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_293));
						if (__LIB_0__.func_154(iVar0, 1, 1))
						{
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
							if (PED::IS_PED_SITTING_IN_VEHICLE(iVar1, NETWORK::NET_TO_VEH(Local_330.f_22)))
							{
								if (__LIB_1__.func_198(iVar1, NETWORK::NET_TO_VEH(Local_330.f_22), -1))
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

void func_247()//Position - 0xBAFD
{
	Global_1931397 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_330.f_22));
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_330.f_22))))
	{
		HUD::SET_BLIP_SPRITE(Global_1931397, 348);
	}
	else
	{
		HUD::SET_BLIP_SPRITE(Global_1931397, 225);
	}
	HUD::SET_BLIP_COLOUR(Global_1931397, 2);
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1931397, "IMPEX_HIPR_BLP" /* GXT: High Priority Vehicle */);
	if (func_118())
	{
		HUD::SET_BLIP_DISPLAY(Global_1931397, 0);
	}
}

int func_248(int iParam0, int iParam1)//Position - 0xBB67
{
	if (func_165(iParam0, joaat("MP_GAR_SIMEON"), &uLocal_318, 0f, 500, 1, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_256()//Position - 0xBE12
{
	if (func_118())
	{
		return 0;
	}
	if (!__LIB_18__.func_448(0, 1, 1, 1))
	{
		return 0;
	}
	return 1;
}

int func_264()//Position - 0xC036
{
	struct<3> Var0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
	{
		if (__LIB_2__.func_63(Local_330.f_22))
		{
			if (!func_245())
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_330.f_22), true) };
				if (func_265(Var0, joaat("MP_GAR_SIMEON"), 18))
				{
					if (func_248(NETWORK::NET_TO_VEH(Local_330.f_22), 1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_265(struct<3> Param0, int iParam1, int iParam2)//Position - 0xC098
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, __LIB_2__.func_219(iParam1), true) <= IntToFloat(iParam2))
	{
		return 1;
	}
	return 0;
}

void func_266()//Position - 0xC0BB
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
	{
		if (__LIB_2__.func_63(Local_330.f_22))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_330.f_22), false))
				{
					if (!BitTest(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 2))
					{
						MISC::SET_BIT(&(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 2);
					}
				}
				else if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_330.f_22), 1) < 180f)
				{
					if (!BitTest(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 2))
					{
						MISC::SET_BIT(&(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 2);
					}
				}
				else if (BitTest(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 2))
				{
					MISC::CLEAR_BIT(&(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 2);
				}
			}
		}
	}
}

void func_268()//Position - 0xC1DD
{
	int iVar0;
	if (iLocal_84)
	{
		func_374();
		if (!BitTest(uLocal_338, 1))
		{
			if (Global_2815059.f_1746 > 0)
			{
				if (Global_2815059.f_1749 == 0)
				{
					Global_2815059.f_1749 = NETWORK::GET_NETWORK_TIME();
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2815059.f_1749) > Global_262145.f_11941 /* Tunable: TIME_SIMEON_SENDS_TEXT_MS */)
				{
					if (!__LIB_0__.func_75())
					{
						if (func_70())
						{
							if (func_256())
							{
								if (!__LIB_24__.func_81())
								{
									if (!__LIB_0__.func_77(0) && !func_123())
									{
										Global_22710 = 0;
										iVar0 = __LIB_1__.func_556(1200, -1, 0);
										if (!BitTest(iVar0, 0))
										{
											if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2815059.f_1749) > 20000)
											{
												if (__LIB_35__.func_551(18, "CELL_CLTEST6" /* GXT: Hello soldier, here is shopping list. Keep them looking nice yes? */, 2, "NULL", Global_2815059.f_1746, "TestSender1", 4, 0, 1, 0, 0, bLocal_105, 0, 0, 0, 0, 0))
												{
													MISC::SET_BIT(&iVar0, 0);
													__LIB_1__.func_597(1200, iVar0, -1, 1, 0);
													MISC::SET_BIT(&uLocal_338, 1);
													__LIB_2__.func_288(0f, 0f, 0f, __LIB_1__.func_568(19), "");
													Global_2815059.f_1748 = 1;
													iLocal_84 = 0;
												}
											}
										}
										else if (__LIB_35__.func_551(18, "CELL_CLTEST1" /* GXT: Grab these vehicles: */, 2, "NULL", Global_2815059.f_1746, "TestSender1", 4, 0, 1, 0, 0, bLocal_105, 0, 0, 0, 0, 0))
										{
											__LIB_2__.func_288(0f, 0f, 0f, __LIB_1__.func_568(19), "");
											MISC::SET_BIT(&uLocal_338, 1);
											Global_2815059.f_1748 = 1;
											iLocal_84 = 0;
										}
									}
								}
								else
								{
									Global_2815059.f_1749 = NETWORK::GET_NETWORK_TIME();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (BitTest(uLocal_338, 1))
	{
		if (!BitTest(uLocal_315, 5))
		{
			if (func_256())
			{
				if (bLocal_105)
				{
					__LIB_0__.func_151("IMPEX_HELP_LNCH" /* GXT: Check your phone for details of vehicles required at the Import/Export Garage. */, -1);
				}
				MISC::SET_BIT(&uLocal_315, 5);
				__LIB_0__.func_580(&uLocal_301, 0, 0);
			}
		}
	}
	if (iLocal_107)
	{
		if (func_522())
		{
			if (!__LIB_0__.func_649(&uLocal_115))
			{
				__LIB_0__.func_580(&uLocal_115, 0, 0);
			}
			else if (__LIB_2__.func_47(&uLocal_115, 10000, 0))
			{
				if (func_269(18, "CELL_IMPT" /* GXT: Good work on that last delivery my friend, when I have more orders I will let you know. */, 0, 0))
				{
					iLocal_107 = 0;
					__LIB_0__.func_579(&uLocal_115);
				}
			}
		}
	}
}

bool func_269(int iParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0xC3CB
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_270(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_270(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, var uParam8)//Position - 0xC3F4
{
	var uVar0;
	int iVar1;
	uVar0 = 16;
	iVar1 = 2;
	if (bParam7)
	{
		iVar1 = 5;
	}
	return __LIB_42__.func_731(&uVar0, iParam0, __LIB_9__.func_473(), sParam1, iVar1, 3, uParam8, sParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

void func_374()//Position - 0xF5DD
{
	if (func_70())
	{
		if (!iLocal_320 == Local_330.f_32)
		{
			Global_2815059.f_1706 = { Local_329 };
			func_375();
			iLocal_320 = Local_330.f_32;
		}
	}
}

void func_375()//Position - 0xF615
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		StringCopy(&(Global_2815059.f_1725[iVar1 /*4*/]), "", 16);
		if (!Global_2815059.f_1706[iVar1] == -1 && Global_2815059.f_1706.f_6[iVar1] == 0)
		{
			StringCopy(&(Global_2815059.f_1725[iVar0 /*4*/]), __LIB_22__.func_998(Global_2815059.f_1706[iVar1], 1), 16);
			iVar0++;
		}
		iVar1++;
	}
	Global_2815059.f_1746 = iVar0;
}

void func_378()//Position - 0xF885
{
	int iVar0;
	if (!iLocal_99)
	{
		if (!__LIB_18__.func_246(PLAYER::PLAYER_ID(), 1))
		{
			if (!__LIB_0__.func_292(PLAYER::PLAYER_ID(), 0))
			{
				if (!Local_330.f_28 == -1)
				{
					if (!iLocal_322 == func_34(Local_330.f_28))
					{
						if (!__LIB_2__.func_200(PLAYER::PLAYER_PED_ID()))
						{
							if (!__LIB_1__.func_105(PLAYER::PLAYER_ID()))
							{
								iLocal_322 = func_34(Local_330.f_28);
								iVar0 = 0;
								while (iVar0 < iLocal_328)
								{
									ZONE::OVERRIDE_POPSCHEDULE_VEHICLE_MODEL(iLocal_328[iVar0], iLocal_322);
									iVar0++;
								}
								iLocal_99 = 1;
								STREAMING::REQUEST_MODEL(iLocal_322);
								func_380();
								func_379(iLocal_322);
							}
						}
					}
				}
			}
		}
	}
	else if ((((__LIB_18__.func_246(PLAYER::PLAYER_ID(), 1) || (Local_330.f_28 > -1 && !iLocal_322 == func_34(Local_330.f_28))) || __LIB_2__.func_200(PLAYER::PLAYER_PED_ID())) || __LIB_0__.func_292(PLAYER::PLAYER_ID(), 0)) || __LIB_1__.func_105(PLAYER::PLAYER_ID()))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_322);
		iVar0 = 0;
		while (iVar0 < iLocal_328)
		{
			ZONE::CLEAR_POPSCHEDULE_OVERRIDE_VEHICLE_MODEL(iLocal_328[iVar0]);
			iVar0++;
		}
		func_380();
		iLocal_322 = 0;
		iLocal_99 = 0;
	}
}

void func_379(int iParam0)//Position - 0xF9AF
{
	if (BitTest(Local_330.f_23, 0))
	{
		if (iParam0 == Local_330.f_67)
		{
			return;
		}
	}
	switch (iParam0)
	{
		case joaat("sentinel"):
		case joaat("serrano"):
		case joaat("dominator"):
		case joaat("schafter2"):
		case joaat("surge"):
			iLocal_285[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-54.2664f, -1679.5488f, 28.4414f, 228.2736f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-47.0703f, -1115.4104f, 25.4327f, 204.5124f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1227.0597f, 2718.678f, 37.0051f, 359.6756f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1388.704f, 44.2178f, 52.6041f, 313.0655f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(430.9073f, -1154.745f, 28.2919f, 267.6113f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1123.5134f, 243.2258f, 79.8556f, 237.5495f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-841.395f, -138.6138f, 36.5745f, 65.0431f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-150.0053f, -618.0887f, 31.4271f, 249.907f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-827.7974f, 170.3065f, 69.2223f, 158.4295f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1215.9534f, -1675.1797f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_286 = 1;
			break;
		case joaat("jackal"):
		case joaat("ztype"):
		case joaat("tailgater"):
		case joaat("landstalker"):
		case joaat("penumbra"):
			iLocal_285[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1392.0012f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1075.8711f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-815.4279f, -1318.0275f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1215.9534f, -1675.1797f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1101.6074f, -445.1016f, 34.6997f, 297.4066f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-3018.7593f, 739.4393f, 26.5749f, 101.9264f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1550.7963f, 881.1625f, 177.8996f, 223.4805f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-420.3277f, 1202.5525f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_286 = 1;
			break;
		case joaat("f620"):
		case joaat("fq2"):
		case joaat("patriot"):
		case joaat("habanero"):
		case joaat("prairie"):
		case joaat("gresley"):
			iLocal_285[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(464.1028f, 226.5939f, 102.1875f, 247.3152f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-2437.3716f, 3377.2168f, 31.9214f, 29.7691f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1639.8566f, -906.3636f, 7.7037f, 139.4463f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-2981.2446f, 612.5886f, 19.1798f, 105.0653f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1542.3317f, 887.9052f, 180.491f, 19.9514f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-420.3277f, 1202.5525f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-331.3999f, -935.0096f, 30.0798f, 249.9035f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-976.5854f, -2573.4724f, 35.6066f, 240.851f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-350.7184f, 427.0929f, 109.5371f, 17.3499f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-208.5685f, -2077.8867f, 26.6204f, 47.4426f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_286 = 1;
			break;
		case joaat("fusilade"):
		case joaat("bjxl"):
		case joaat("buccaneer"):
		case joaat("daemon"):
		case joaat("bagger"):
			iLocal_285[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-815.4279f, -1318.0275f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1215.9534f, -1675.1797f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-826.9526f, -236.9994f, 36.0555f, 209.0553f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-819.5961f, 183.2204f, 71.0876f, 115.4816f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-141.4775f, -594.4868f, 31.4271f, 69.7535f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1392.0012f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1075.8711f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1218.1803f, 2708.298f, 37.0054f, 359.1518f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_286 = 1;
			break;
	}
}

void func_380()//Position - 0x10158
{
	int iVar0;
	if (iLocal_286)
	{
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (VEHICLE::DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(iLocal_285[iVar0]))
		{
			VEHICLE::DELETE_SCRIPT_VEHICLE_GENERATOR(iLocal_285[iVar0]);
		}
		iLocal_285[iVar0] = 0;
		iVar0++;
	}
	iLocal_286 = 0;
}

void func_385()//Position - 0x10259
{
	var uVar0;
	if (!__LIB_0__.func_649(&uLocal_307))
	{
		__LIB_0__.func_580(&uLocal_307, 0, 0);
	}
	else if (__LIB_2__.func_47(&uLocal_307, 250, 0))
	{
		__LIB_0__.func_579(&uLocal_307);
		if (func_400(1, 0))
		{
			if (!BitTest(uLocal_315, 5) && !func_399())
			{
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if ((func_398() || func_399()) || func_394())
				{
					if (!func_393(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						if (!__LIB_2__.func_290(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && !func_15(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
						{
							if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								if (func_387(&uVar0))
								{
									if (!BitTest(uLocal_315, 2))
									{
										if (func_256() && SYSTEM::TIMERA() > 500)
										{
											__LIB_0__.func_151("IMPEX_FSPRAY_FM" /* GXT: This vehicle is wanted by Simeon. Get it resprayed ~BLIP_CAR_MOD_SHOP~ and deliver it to him at the docks for cash. */, -1);
											MISC::SET_BIT(&uLocal_315, 2);
										}
									}
									else
									{
										SYSTEM::SETTIMERA(0);
									}
								}
								else if (!BitTest(uLocal_315, 8))
								{
									if (func_256() && SYSTEM::TIMERA() > 500)
									{
										__LIB_0__.func_151("IMPEX_CASH_FM" /* GXT: Simeon wants this vehicle but you don't have enough cash for a respray. */, -1);
										MISC::SET_BIT(&uLocal_315, 8);
									}
								}
								else
								{
									SYSTEM::SETTIMERA(0);
								}
							}
							else if (!BitTest(uLocal_315, 11))
							{
								if (func_256() && SYSTEM::TIMERA() > 500)
								{
									__LIB_0__.func_151("IMPEX_WANTED_FM" /* GXT: Simeon wants this vehicle but he will not accept delivery if you have a Wanted Level. */, -1);
									MISC::SET_BIT(&uLocal_315, 11);
								}
							}
							else
							{
								SYSTEM::SETTIMERA(0);
							}
						}
						else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							if (!func_386())
							{
								if (!func_15(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									if (!BitTest(uLocal_315, 3))
									{
										MISC::CLEAR_BIT(&uLocal_315, 7);
										if (func_256() && SYSTEM::TIMERA() > 2000)
										{
											if (Global_2815059.f_4585 == 0)
											{
												if (!func_248(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
												{
													__LIB_0__.func_151("IMPEX_DELIVER_FM" /* GXT: This vehicle is ready for Simeon. Deliver it to ~BLIP_SIMEON_FAMILY~ for cash. */, -1);
													MISC::SET_BIT(&uLocal_315, 3);
												}
											}
										}
									}
									else
									{
										SYSTEM::SETTIMERA(0);
									}
								}
								else if (!BitTest(uLocal_315, 7))
								{
									if (func_256() && SYSTEM::TIMERA() > 2000)
									{
										__LIB_0__.func_151("IMPEX_RIG_FM" /* GXT: Simeon doesn't want this vehicle anymore as it's rigged with explosives. */, -1);
										MISC::SET_BIT(&uLocal_315, 7);
									}
								}
								else
								{
									SYSTEM::SETTIMERA(0);
								}
							}
							else if (!BitTest(uLocal_315, 6))
							{
								if (func_256() && SYSTEM::TIMERA() > 2000)
								{
									__LIB_0__.func_151("IMPEX_WANTED_P" /* GXT: Simeon wants this vehicle but he will not accept delivery while you are with a prostitute. */, -1);
									MISC::SET_BIT(&uLocal_315, 6);
								}
							}
							else
							{
								SYSTEM::SETTIMERA(0);
							}
						}
						else if (!BitTest(uLocal_315, 4))
						{
							if (func_256() && SYSTEM::TIMERA() > 5000)
							{
								__LIB_0__.func_151("IMPEX_WANTED_FM" /* GXT: Simeon wants this vehicle but he will not accept delivery if you have a Wanted Level. */, -1);
								MISC::SET_BIT(&uLocal_315, 4);
							}
						}
						else
						{
							SYSTEM::SETTIMERA(0);
						}
					}
				}
				else
				{
					if (__LIB_0__.func_1("IMPEX_FSPRAY_FM" /* GXT: This vehicle is wanted by Simeon. Get it resprayed ~BLIP_CAR_MOD_SHOP~ and deliver it to him at the docks for cash. */))
					{
						HUD::CLEAR_HELP(true);
					}
					MISC::CLEAR_BIT(&uLocal_315, 2);
					MISC::CLEAR_BIT(&uLocal_315, 3);
					MISC::CLEAR_BIT(&uLocal_315, 4);
					MISC::CLEAR_BIT(&uLocal_315, 6);
					MISC::CLEAR_BIT(&uLocal_315, 7);
					MISC::CLEAR_BIT(&uLocal_315, 8);
					MISC::CLEAR_BIT(&uLocal_315, 11);
					SYSTEM::SETTIMERA(0);
				}
			}
			else
			{
				if (__LIB_0__.func_1("IMPEX_FSPRAY_FM" /* GXT: This vehicle is wanted by Simeon. Get it resprayed ~BLIP_CAR_MOD_SHOP~ and deliver it to him at the docks for cash. */))
				{
					HUD::CLEAR_HELP(true);
				}
				MISC::CLEAR_BIT(&uLocal_315, 2);
				MISC::CLEAR_BIT(&uLocal_315, 3);
				MISC::CLEAR_BIT(&uLocal_315, 4);
				MISC::CLEAR_BIT(&uLocal_315, 6);
				MISC::CLEAR_BIT(&uLocal_315, 7);
				MISC::CLEAR_BIT(&uLocal_315, 8);
				MISC::CLEAR_BIT(&uLocal_315, 11);
				if (SYSTEM::TIMERA() > 0)
				{
					SYSTEM::SETTIMERA(0);
				}
			}
		}
		else if (__LIB_0__.func_1("IMPEX_FSPRAY_FM" /* GXT: This vehicle is wanted by Simeon. Get it resprayed ~BLIP_CAR_MOD_SHOP~ and deliver it to him at the docks for cash. */))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

int func_386()//Position - 0x105B7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar1 = (iVar2 - 1);
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar3, iVar1, false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, iVar1, false)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, iVar1, false), false))
				{
					iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, iVar1, false);
					if (!PED::IS_PED_A_PLAYER(iVar0))
					{
						return 1;
					}
				}
			}
		}
		iVar2++;
	}
	return 0;
}

int func_387(var uParam0)//Position - 0x1062B
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			*uParam0 = __LIB_18__.func_446(iVar0, 0);
			if (!MONEY::NETWORK_CAN_SPEND_MONEY((400 + *uParam0), false, false, true, -1, 0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_393(int iParam0)//Position - 0x10EA8
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Veh_Modded_By_Player") && DECORATOR::DECOR_GET_INT(iParam0, "Veh_Modded_By_Player") != NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_394()//Position - 0x10EDA
{
	int iVar0;
	if (func_524())
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!__LIB_0__.func_657(iVar0, 1) && !__LIB_2__.func_291(iVar0, 1))
		{
			if (func_395(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_395(int iParam0)//Position - 0x10F2D
{
	int iVar0;
	int iVar1;
	iVar0 = func_75(iParam0);
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_330.f_35[iVar1] == iVar0)
			{
				if (!__LIB_2__.func_47(&(Local_330.f_46[iVar1 /*2*/]), 120000, 0))
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_398()//Position - 0x11012
{
	int iVar0;
	if (func_524())
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (!Global_1922044)
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (!__LIB_0__.func_657(iVar0, 1) && !__LIB_2__.func_291(iVar0, 1))
			{
				if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iVar0, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, true))
					{
						if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 <= 0)
						{
							if (!DECORATOR::DECOR_EXIST_ON(iVar0, "Not_Allow_As_Saved_Veh"))
							{
								if (!Global_1922043)
								{
									if (bLocal_287)
									{
										bLocal_287 = false;
									}
									if (func_74(&Local_329, ENTITY::GET_ENTITY_MODEL(iVar0)))
									{
										Global_2815059.f_1750 = 1;
										return 1;
									}
								}
							}
						}
					}
					else if (!bLocal_287)
					{
						bLocal_287 = true;
					}
				}
			}
		}
	}
	return 0;
}

int func_399()//Position - 0x110CE
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (BitTest(Local_330.f_23, 0))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
			{
				if (__LIB_2__.func_63(Local_330.f_22))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_330.f_22)))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_400(bool bParam0, bool bParam1)//Position - 0x1111C
{
	bool bVar0;
	bVar0 = true;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		bVar0 = false;
	}
	if (!bParam1)
	{
		if (bVar0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				bVar0 = false;
			}
		}
	}
	if (!bParam0)
	{
		if (bVar0)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (__LIB_7__.func_268(PLAYER::PLAYER_ID(), 1, 0))
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		if (__LIB_1__.func_41())
		{
			bVar0 = false;
		}
	}
	if (!__LIB_0__.func_154(PLAYER::PLAYER_ID(), 0, 0))
	{
		bVar0 = false;
	}
	if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 1))
	{
		bVar0 = false;
	}
	if (__LIB_0__.func_292(PLAYER::PLAYER_ID(), 1))
	{
		bVar0 = false;
	}
	return bVar0;
}

void func_401()//Position - 0x111BE
{
	int iVar0;
	switch (iLocal_112)
	{
		case 0:
			if (!__LIB_7__.func_268(PLAYER::PLAYER_ID(), 1, 0))
			{
				if (!__LIB_0__.func_649(&uLocal_113) || __LIB_2__.func_47(&uLocal_113, 2000, 0))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1199.4033f, -3113.5908f, 4.5453f) < 400f)
						{
							__LIB_0__.func_203(&uLocal_117, 4, iLocal_111, "MECHANIC_IMP", 0, 1);
							iLocal_340 = 0;
							iLocal_112++;
						}
					}
					__LIB_0__.func_579(&uLocal_113);
					__LIB_0__.func_580(&uLocal_113, 0, 0);
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!__LIB_7__.func_268(PLAYER::PLAYER_ID(), 1, 0))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1199.4033f, -3113.5908f, 4.5453f) < 600f)
					{
						if (bLocal_96)
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1204.2238f, -3121.5332f, 4.357823f, 1204.5209f, -3107.603f, 8.653814f, 5.1875f, false, true, 0))
								{
									if (!iLocal_340)
									{
										iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
										if (__LIB_18__.func_446(iVar0, 0) > 500)
										{
											sLocal_341 = "FM_IEPOOR";
										}
										else
										{
											sLocal_341 = "FM_IEGOOD";
										}
										iLocal_340 = 1;
									}
									else if (__LIB_35__.func_552(&uLocal_117, "FM_1AU", sLocal_341, 12, 0, 0, 0))
									{
										iLocal_282 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
										iLocal_112++;
										iLocal_340 = 0;
									}
								}
							}
						}
					}
					else
					{
						func_402();
						iLocal_112 = 0;
					}
				}
				else
				{
					func_402();
					iLocal_112 = 0;
				}
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!__LIB_7__.func_268(PLAYER::PLAYER_ID(), 1, 0))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1199.4033f, -3113.5908f, 4.5453f) < 600f)
					{
						if (bLocal_96)
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != iLocal_282)
								{
									iLocal_112 = 1;
								}
							}
						}
					}
					else
					{
						func_402();
						iLocal_112 = 0;
					}
				}
				else
				{
					func_402();
					iLocal_112 = 0;
				}
			}
			break;
	}
}

void func_402()//Position - 0x113D3
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_111))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_XMech_02"));
		iVar0 = iLocal_111;
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

void func_405()//Position - 0x114E0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	struct<3> Var9;
	int iVar10;
	if (func_400(1, 1))
	{
		switch (Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1)
		{
			case 0:
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					bVar7 = func_394();
					if ((func_398() || func_399()) || bVar7)
					{
						if (!func_386())
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
							{
								if (!func_502())
								{
									if (bLocal_95)
									{
										bLocal_95 = false;
									}
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("AllowModSprayRepair", 2))
									{
										if (!DECORATOR::DECOR_EXIST_ON(iVar3, "AllowModSprayRepair") || (DECORATOR::DECOR_EXIST_ON(iVar3, "AllowModSprayRepair") && DECORATOR::DECOR_GET_BOOL(iVar3, "AllowModSprayRepair") == 0))
										{
											DECORATOR::DECOR_SET_BOOL(iVar3, "AllowModSprayRepair", true);
										}
									}
									if (!iLocal_101)
									{
										if (func_501(iVar3))
										{
											PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
											PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
										}
									}
									iLocal_342 = iVar3;
									if (BitTest(uLocal_338, 15))
									{
										MISC::CLEAR_BIT(&uLocal_338, 15);
									}
									if (BitTest(uLocal_315, 9))
									{
										MISC::CLEAR_BIT(&uLocal_315, 9);
									}
									if (BitTest(uLocal_315, 12))
									{
										MISC::CLEAR_BIT(&uLocal_315, 12);
									}
									if (BitTest(uLocal_315, 10))
									{
										MISC::CLEAR_BIT(&uLocal_315, 10);
									}
									if (!BitTest(uLocal_338, 12))
									{
										if (bVar7)
										{
											MISC::SET_BIT(&uLocal_338, 12);
										}
									}
									else if (!bVar7)
									{
										MISC::CLEAR_BIT(&uLocal_338, 12);
									}
									if (__LIB_2__.func_290(iVar3))
									{
										if (!func_15(iVar3))
										{
											bLocal_88 = true;
											if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
											{
												if (bLocal_94)
												{
													bLocal_94 = false;
												}
												if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1, false) == PLAYER::PLAYER_PED_ID())
												{
													bLocal_91 = true;
												}
											}
											else if (func_77())
											{
												if (bLocal_91)
												{
													bLocal_91 = false;
												}
												bLocal_94 = true;
											}
											bLocal_89 = false;
											bLocal_90 = false;
											bLocal_92 = false;
											bLocal_93 = false;
											bLocal_95 = false;
											bLocal_96 = true;
											if (func_500(joaat("MP_GAR_SIMEON"), 18))
											{
												bLocal_86 = true;
											}
											iLocal_324 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
											if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iLocal_324))
											{
												if (func_248(iLocal_324, 0))
												{
													if (!BitTest(uLocal_338, 17))
													{
														MISC::SET_BIT(&uLocal_338, 17);
													}
													else if (func_248(iLocal_324, 1))
													{
														Var9 = { ENTITY::GET_ENTITY_VELOCITY(iLocal_324) };
														if (ENTITY::GET_ENTITY_SPEED(iLocal_324) < 0.5f || MISC::ABSF(Var9.f_1) < 1.3f)
														{
															__LIB_35__.func_948();
															__LIB_18__.func_465(PLAYER::PLAYER_ID(), 0, 16388, 0);
															if (func_399())
															{
																MISC::SET_BIT(&uLocal_338, 4);
																MISC::SET_BIT(&(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 1);
															}
															if (func_398() || func_394())
															{
																MISC::SET_BIT(&uLocal_338, 6);
															}
															if (func_489())
															{
																bLocal_85 = true;
															}
															else
															{
																bLocal_85 = false;
															}
															VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_324, 2);
															if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_324))
															{
																ENTITY::SET_ENTITY_PROOFS(iLocal_324, true, true, true, true, true, false, false, false);
															}
															Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = func_75(ENTITY::GET_ENTITY_MODEL(iLocal_324));
															Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 1;
															iVar5 = 0;
															iVar4 = 0;
															while (iVar4 < 4)
															{
																iVar1 = (iVar4 - 1);
																iLocal_323[iVar4] = __LIB_0__.func_160();
																if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_324, iVar1, false))
																{
																	if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_324, iVar1, false)))
																	{
																		if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_324, iVar1, false), false))
																		{
																			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_324, iVar1, false);
																			if (PED::IS_PED_A_PLAYER(iVar0))
																			{
																				if (__LIB_0__.func_154(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0), 0, 0))
																				{
																					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0)))
																					{
																						iLocal_323[iVar4] = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
																						iVar5++;
																					}
																				}
																			}
																		}
																	}
																}
																iVar4++;
															}
															iLocal_294 = func_488(ENTITY::GET_ENTITY_MODEL(iLocal_324));
															iLocal_295 = __LIB_18__.func_446(iLocal_324, 0);
															fLocal_296 = SYSTEM::TO_FLOAT((iLocal_294 - iLocal_295));
															fLocal_296 = (fLocal_296 * Global_262145.f_2421 /* Tunable: EARNINGS_IMPORT_EXPORT_MODIFIER */);
															if (BitTest(uLocal_338, 4))
															{
																fLocal_296 = (fLocal_296 * 1.3f);
															}
															fLocal_296 = (fLocal_296 / SYSTEM::TO_FLOAT(iVar5));
															fLocal_297 = 500f;
															func_487();
															__LIB_1__.func_549(0);
															__LIB_6__.func_981(1248, 1, -1);
															if (__LIB_0__.func_1("IMPEX_DELIVER_FM" /* GXT: This vehicle is ready for Simeon. Deliver it to ~BLIP_SIMEON_FAMILY~ for cash. */))
															{
																HUD::CLEAR_HELP(true);
															}
															MISC::CLEAR_BIT(&uLocal_338, 12);
															iVar6 = __LIB_1__.func_556(1200, -1, 0);
															if (!BitTest(iVar6, 1))
															{
																MISC::SET_BIT(&iVar6, 1);
																__LIB_1__.func_597(1200, iVar6, -1, 1, 0);
															}
															else if (!BitTest(iVar6, 2))
															{
																MISC::SET_BIT(&iVar6, 2);
																__LIB_1__.func_597(1200, iVar6, -1, 1, 0);
															}
															func_484();
															iLocal_298 = 0;
															iLocal_298 = SYSTEM::ROUND(fLocal_296);
															iLocal_298 = (iLocal_298 - (iLocal_298 % 25));
															if (iLocal_343 == iVar3)
															{
																iLocal_298 = (iLocal_298 + iLocal_300);
															}
															if (!BitTest(uLocal_338, 4))
															{
																if (iLocal_298 > Global_262145.f_173 /* Tunable: IMP_EXP_EARN_CAP */)
																{
																	iLocal_298 = Global_262145.f_173 /* Tunable: IMP_EXP_EARN_CAP */;
																}
															}
															else if (iLocal_298 > Global_262145.f_173 /* Tunable: IMP_EXP_EARN_CAP */)
															{
																iLocal_298 = Global_262145.f_173 /* Tunable: IMP_EXP_EARN_CAP */;
															}
															iLocal_299 = 0;
															fLocal_297 = (fLocal_297 * Global_262145.f_4237 /* Tunable: XP_TUNABLE_IMPORTEXPORT */);
															iLocal_299 = SYSTEM::ROUND(fLocal_297);
															MISC::CLEAR_BIT(&uLocal_338, 17);
															iLocal_325 = iLocal_324;
															iLocal_327 = ENTITY::GET_ENTITY_MODEL(iLocal_324);
															if (!BitTest(uLocal_338, 4))
															{
																STATS::PLAYSTATS_IMPORT_EXPORT_MISSION_DONE(19, iLocal_299, iLocal_298, iLocal_324);
															}
															else
															{
																STATS::PLAYSTATS_IMPORT_EXPORT_MISSION_DONE(120, iLocal_299, iLocal_298, iLocal_324);
															}
															__LIB_6__.func_898(19, 1);
															func_482();
															func_518();
														}
														else if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
														{
															__LIB_18__.func_465(PLAYER::PLAYER_ID(), 0, 16388, 0);
														}
													}
												}
												else if (BitTest(uLocal_338, 17))
												{
													MISC::CLEAR_BIT(&uLocal_338, 17);
												}
											}
										}
										else
										{
											if (bLocal_88)
											{
												bLocal_88 = false;
											}
											if (bLocal_96)
											{
												bLocal_96 = false;
											}
											if (bLocal_91)
											{
												bLocal_91 = false;
											}
											if (bLocal_94)
											{
												bLocal_94 = false;
											}
											if (bLocal_95)
											{
												bLocal_95 = false;
											}
										}
									}
									else if (!func_15(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
									{
										if (func_387(&iVar8))
										{
											if (!func_393(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
											{
												if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1, false) == PLAYER::PLAYER_PED_ID())
												{
													if (iLocal_343 != iVar3)
													{
														iLocal_343 = iVar3;
														iLocal_300 = 0;
													}
													else if (iLocal_300 != iVar8)
													{
														if (iLocal_300 < iVar8)
														{
															iLocal_300 = iVar8;
														}
													}
												}
												if (!bLocal_89)
												{
													bLocal_89 = true;
												}
												if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
												{
													if (func_77())
													{
														if (bLocal_90)
														{
															bLocal_90 = false;
														}
														if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == PLAYER::PLAYER_PED_ID())
														{
															if (__LIB_18__.func_446(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0) > 0)
															{
																if (!bLocal_93)
																{
																	bLocal_93 = true;
																}
															}
															else
															{
																if (bLocal_93)
																{
																	bLocal_93 = false;
																}
																if (!bLocal_92)
																{
																	bLocal_92 = true;
																}
															}
														}
													}
												}
												else if (!func_77())
												{
													if (bLocal_92)
													{
														bLocal_92 = false;
													}
													if (bLocal_93)
													{
														bLocal_93 = false;
													}
													if (!bLocal_90)
													{
														if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == PLAYER::PLAYER_PED_ID())
														{
															bLocal_90 = true;
														}
													}
												}
											}
											else
											{
												func_481();
											}
										}
										else
										{
											func_481();
										}
									}
									else
									{
										func_481();
										if (bLocal_96)
										{
											bLocal_96 = false;
										}
									}
								}
							}
							else
							{
								iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (iLocal_342 != iVar3)
								{
									if (!iLocal_101)
									{
										if (func_501(iVar3))
										{
											PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
											PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
										}
									}
									iLocal_342 = iVar3;
								}
								if (!bLocal_95)
								{
									func_481();
									bLocal_95 = true;
								}
							}
						}
					}
					else
					{
						func_481();
						if (bLocal_96)
						{
							bLocal_96 = false;
						}
						if (iLocal_101)
						{
							if (Local_330.f_33)
							{
								if (bLocal_106)
								{
									iLocal_101 = 0;
								}
							}
						}
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if ((__LIB_0__.func_1("IMPEX_NOT_NEED" /* GXT: ~s~Simeon doesn't need this vehicle. */) || __LIB_0__.func_1("IMPEX_NO_MORE" /* GXT: ~s~Simeon doesn't need this vehicle anymore. */)) || __LIB_0__.func_1("IMPEX_NOT_PVEH" /* GXT: ~s~Simeon doesn't want Personal Vehicles. */))
							{
								HUD::CLEAR_HELP(true);
							}
						}
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (__LIB_0__.func_657(iVar2, 1))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == PLAYER::PLAYER_PED_ID())
							{
								if (DECORATOR::DECOR_EXIST_ON(iVar2, "Player_Vehicle"))
								{
									if (DECORATOR::DECOR_GET_INT(iVar2, "Player_Vehicle") != NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) || iVar2 == iLocal_342)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
										{
											if (func_256())
											{
												if (!BitTest(uLocal_338, 15))
												{
													if (bVar7 || func_74(&Local_329, ENTITY::GET_ENTITY_MODEL(iVar2)))
													{
														__LIB_0__.func_151("IMPEX_NOT_PVEH" /* GXT: ~s~Simeon doesn't want Personal Vehicles. */, -1);
														MISC::SET_BIT(&uLocal_338, 15);
													}
												}
											}
										}
									}
									else if (BitTest(uLocal_338, 15))
									{
										if (iVar2 != iLocal_342)
										{
											MISC::CLEAR_BIT(&uLocal_338, 15);
										}
									}
								}
							}
						}
						else
						{
							if (BitTest(uLocal_338, 15))
							{
								if (iVar2 != iLocal_342)
								{
									MISC::CLEAR_BIT(&uLocal_338, 15);
								}
							}
							if (bLocal_102)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_500(joaat("MP_GAR_SIMEON"), 18))
								{
									iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									if (func_248(iVar2, 0))
									{
										if (!iLocal_100)
										{
											__LIB_1__.func_549(1);
											iLocal_100 = 1;
										}
										bLocal_86 = true;
									}
								}
								else if (iLocal_100)
								{
									__LIB_1__.func_549(0);
									iLocal_100 = 0;
									bLocal_86 = false;
								}
							}
						}
						if (func_500(joaat("MP_GAR_SIMEON"), 18))
						{
							if (func_256())
							{
								if (__LIB_0__.func_657(iVar2, 1))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
									{
										if (!BitTest(uLocal_315, 10))
										{
											__LIB_0__.func_151("IMPEX_NOT_PVEH" /* GXT: ~s~Simeon doesn't want Personal Vehicles. */, -1);
											MISC::SET_BIT(&uLocal_315, 10);
										}
									}
								}
								else if (func_74(&Local_329, ENTITY::GET_ENTITY_MODEL(iVar2)))
								{
									if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iVar2, 0))
									{
										if (!BitTest(uLocal_315, 12))
										{
											__LIB_0__.func_151("IMPEX_NOT_CREW" /* GXT: Simeon doesn't want vehicles with Crew emblems applied. */, -1);
											MISC::SET_BIT(&uLocal_315, 12);
										}
									}
								}
								else if (!BitTest(uLocal_315, 9))
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == PLAYER::PLAYER_PED_ID())
									{
										__LIB_0__.func_151("IMPEX_NOT_NEED" /* GXT: ~s~Simeon doesn't need this vehicle. */, -1);
										MISC::SET_BIT(&uLocal_315, 9);
									}
								}
							}
						}
						else
						{
							if (BitTest(uLocal_315, 9))
							{
								MISC::CLEAR_BIT(&uLocal_315, 9);
							}
							if (BitTest(uLocal_315, 10))
							{
								MISC::CLEAR_BIT(&uLocal_315, 10);
							}
							if (BitTest(uLocal_315, 12))
							{
								MISC::CLEAR_BIT(&uLocal_315, 12);
							}
							if (BitTest(uLocal_338, 12))
							{
								if (func_256())
								{
									__LIB_0__.func_151("IMPEX_NO_MORE" /* GXT: ~s~Simeon doesn't need this vehicle anymore. */, -1);
									MISC::CLEAR_BIT(&uLocal_338, 12);
									__LIB_18__.func_455();
								}
							}
						}
					}
				}
				else
				{
					func_481();
					if (bLocal_96)
					{
						bLocal_96 = false;
					}
					if (iLocal_101)
					{
						iLocal_101 = 0;
					}
				}
				break;
			case 1:
				if (__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (!func_165(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), joaat("MP_GAR_SIMEON"), &uLocal_318, 0, 500, 1, 0))
					{
						Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 2;
					}
				}
				else
				{
					MISC::CLEAR_BIT(&uLocal_338, 4);
					MISC::CLEAR_BIT(&uLocal_338, 6);
					Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 0;
				}
				break;
			case 2:
				Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 3;
				break;
			case 3:
				if (CAM::IS_SCREEN_FADED_IN())
				{
					__LIB_5__.func_113(17, 1, -1);
					if (BitTest(uLocal_338, 4))
					{
						MISC::SET_BIT(&(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 1);
						func_477();
					}
					else
					{
						func_475();
					}
					if (bLocal_85)
					{
						if (BitTest(uLocal_338, 6))
						{
							Local_83.f_2 = -579901295;
						}
						else
						{
							Local_83.f_2 = -1559779014;
						}
						Local_83.f_3 = Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/];
						Local_83.f_10 = iLocal_323[0];
						Local_83.f_11 = iLocal_323[1];
						Local_83.f_12 = iLocal_323[2];
						Local_83.f_13 = iLocal_323[3];
						if (!BitTest(uLocal_338, 6))
						{
						}
					}
					MISC::CLEAR_BIT(&uLocal_338, 6);
					__LIB_1__.func_445(4, iLocal_298);
					__LIB_39__.func_708(&iLocal_298, 1);
					if (iLocal_298 > 0)
					{
						if (__LIB_0__.func_112())
						{
							__LIB_35__.func_530(joaat("SERVICE_EARN_IMPORT_EXPORT"), iLocal_298, &iVar10, 0, 0, 0);
							Global_4534105[iVar10 /*85*/].f_3 = iLocal_327;
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_IMPORT_EXPORT(iLocal_298, iLocal_327);
						}
					}
					if (iLocal_295 > 0)
					{
						__LIB_11__.func_628("IMPEX_PASS" /* GXT: Cash for vehicle $~1~. */, iLocal_298, 7000, 0);
					}
					else
					{
						__LIB_11__.func_628("IMPEX_PASS" /* GXT: Cash for vehicle $~1~. */, iLocal_298, 7000, 0);
					}
					__LIB_37__.func_803(2, "XPT_IMPEXP" /* GXT: ~g~+~1~ ~a~:~s~ Import Export */, joaat("XPTYPE_COMPLETE"), -1930707410, iLocal_299, 1, -1, 0);
					__LIB_2__.func_8(29);
					__LIB_18__.func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
					Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 0;
					Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = -1;
					MISC::CLEAR_BIT(&uLocal_338, 4);
					iLocal_107 = 1;
					__LIB_6__.func_881(-78295735, 12, 0);
				}
				break;
		}
	}
	else
	{
		if (!__LIB_18__.func_246(PLAYER::PLAYER_ID(), 1))
		{
			if (!bLocal_102)
			{
				if (iLocal_100)
				{
					__LIB_1__.func_549(0);
					iLocal_100 = 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_500(joaat("MP_GAR_SIMEON"), 18))
			{
				iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (func_248(iVar2, 0))
				{
					if (!iLocal_100)
					{
						__LIB_1__.func_549(1);
						iLocal_100 = 1;
					}
					bLocal_86 = true;
				}
			}
			else if (iLocal_100)
			{
				__LIB_1__.func_549(0);
				iLocal_100 = 0;
				bLocal_86 = false;
			}
		}
		if (bLocal_89)
		{
			bLocal_89 = false;
		}
		if (bLocal_90)
		{
			bLocal_90 = false;
		}
		if (bLocal_92)
		{
			bLocal_92 = false;
		}
		if (bLocal_93)
		{
			bLocal_93 = false;
		}
	}
}

void func_475()//Position - 0x14C93
{
	int iVar0;
	iVar0 = __LIB_0__.func_716(42);
	Global_2676732[iVar0 /*83*/] = 42;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

void func_477()//Position - 0x14D0D
{
	int iVar0;
	iVar0 = __LIB_0__.func_716(43);
	Global_2676732[iVar0 /*83*/] = 43;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

void func_481()//Position - 0x14DB1
{
	if (bLocal_95)
	{
		bLocal_95 = false;
	}
	if (bLocal_90)
	{
		bLocal_90 = false;
	}
	if (bLocal_91)
	{
		bLocal_91 = false;
	}
	if (bLocal_92)
	{
		bLocal_92 = false;
	}
	if (bLocal_94)
	{
		bLocal_94 = false;
	}
	if (bLocal_93)
	{
		bLocal_93 = false;
	}
}

void func_482()//Position - 0x14DE9
{
	Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_35 = NETWORK::GET_CLOUD_TIME_AS_INT();
}

void func_484()//Position - 0x15044
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_1__.func_556(1200, -1, 0);
	if (!BitTest(iVar0, 3))
	{
		MISC::SET_BIT(&iVar0, 3);
		MISC::SET_BIT(&uLocal_339, 1);
		bVar1 = true;
	}
	else if (!BitTest(iVar0, 4))
	{
		MISC::SET_BIT(&iVar0, 4);
		MISC::SET_BIT(&uLocal_339, 2);
		bVar1 = true;
	}
	else if (!BitTest(iVar0, 5))
	{
		MISC::SET_BIT(&iVar0, 5);
		MISC::SET_BIT(&uLocal_339, 3);
		bVar1 = true;
	}
	if (bVar1)
	{
		__LIB_1__.func_597(1200, iVar0, -1, 1, 0);
	}
}

void func_487()//Position - 0x153C8
{
	if (!Global_2815059.f_4595)
	{
		Global_2815059.f_4595 = 1;
	}
	__LIB_0__.func_495(&(Global_2815059.f_4596), 0, 0);
}

int func_488(int iParam0)//Position - 0x153F0
{
	switch (iParam0)
	{
		case joaat("zion"):
			return 9000;
		case joaat("serrano"):
			return 9254;
		case joaat("jackal"):
			return 9350;
		case joaat("schafter2"):
			return 9804;
		case joaat("dubsta"):
			return 10500;
		case joaat("f620"):
			return 12000;
		case joaat("schwarzer"):
			return 12000;
		case joaat("rocoto"):
			return 12750;
		case joaat("sentinel2"):
			return 14250;
		case joaat("felon2"):
			return 14250;
		case joaat("comet2"):
			return 15000;
		case joaat("banshee"):
			return 15750;
		case joaat("surano"):
			return 16500;
		case joaat("coquette"):
			return 19800;
		case joaat("carbonizzare"):
			return 20000;
		case joaat("exemplar"):
			return 20000;
		case joaat("feltzer2"):
			return 20000;
		case joaat("bullet"):
			return 20000;
		case joaat("superd"):
			return 20000;
		case joaat("infernus"):
			return 20000;
		default:
	}
	return -1;
}

int func_489()//Position - 0x154F0
{
	int iVar0;
	if (__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1, false))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_500(int iParam0, int iParam1)//Position - 0x15C1E
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), __LIB_2__.func_219(iParam0), true) <= IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_501(int iParam0)//Position - 0x15C46
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (!func_393(iParam0))
			{
				if (iParam0 != iLocal_342)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_502()//Position - 0x15C8A
{
	if (Global_2703735.f_61.f_16 || Global_2703735.f_61.f_17)
	{
		return 1;
	}
	return 0;
}

void func_503(var uParam0, int iParam1, var uParam2)//Position - 0x15CB0
{
	int iVar0;
	int iVar1;
	iVar1 = uParam2;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_504(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_504(int iParam0, int iParam1)//Position - 0x15D21
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_511(iParam1);
			break;
		case 1:
			iVar0 = func_510(iParam1);
			break;
		case 2:
			iVar0 = func_509(iParam1);
			break;
		case 3:
			iVar0 = func_508(iParam1);
			break;
		case 4:
			iVar0 = func_507(iParam1);
			break;
		case 5:
			iVar0 = func_506(iParam1);
			break;
		case 6:
			iVar0 = func_505(iParam1);
			break;
	}
	return iVar0;
}

int func_505(int iParam0)//Position - 0x15DAC
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("felon2"));
			break;
		case 1:
			iVar0 = func_75(joaat("serrano"));
			break;
		case 2:
			iVar0 = func_75(joaat("bullet"));
			break;
		case 3:
			iVar0 = func_75(joaat("infernus"));
			break;
		case 4:
			iVar0 = func_75(joaat("coquette"));
			break;
	}
	return iVar0;
}

int func_506(int iParam0)//Position - 0x15E24
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("zion"));
			break;
		case 1:
			iVar0 = func_75(joaat("banshee"));
			break;
		case 2:
			iVar0 = func_75(joaat("comet2"));
			break;
		case 3:
			iVar0 = func_75(joaat("surano"));
			break;
		case 4:
			iVar0 = func_75(joaat("exemplar"));
			break;
	}
	return iVar0;
}

int func_507(int iParam0)//Position - 0x15E9C
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("sentinel2"));
			break;
		case 1:
			iVar0 = func_75(joaat("schwarzer"));
			break;
		case 2:
			iVar0 = func_75(joaat("superd"));
			break;
		case 3:
			iVar0 = func_75(joaat("jackal"));
			break;
		case 4:
			iVar0 = func_75(joaat("feltzer2"));
			break;
	}
	return iVar0;
}

int func_508(int iParam0)//Position - 0x15F14
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("schafter2"));
			break;
		case 1:
			iVar0 = func_75(joaat("bullet"));
			break;
		case 2:
			iVar0 = func_75(joaat("f620"));
			break;
		case 3:
			iVar0 = func_75(joaat("carbonizzare"));
			break;
		case 4:
			iVar0 = func_75(joaat("comet2"));
			break;
	}
	return iVar0;
}

int func_509(int iParam0)//Position - 0x15F8C
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("feltzer2"));
			break;
		case 1:
			iVar0 = func_75(joaat("jackal"));
			break;
		case 2:
			iVar0 = func_75(joaat("f620"));
			break;
		case 3:
			iVar0 = func_75(joaat("superd"));
			break;
		case 4:
			iVar0 = func_75(joaat("rocoto"));
			break;
	}
	return iVar0;
}

int func_510(int iParam0)//Position - 0x16004
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("banshee"));
			break;
		case 1:
			iVar0 = func_75(joaat("coquette"));
			break;
		case 2:
			iVar0 = func_75(joaat("sentinel2"));
			break;
		case 3:
			iVar0 = func_75(joaat("dubsta"));
			break;
		case 4:
			iVar0 = func_75(joaat("infernus"));
			break;
	}
	return iVar0;
}

int func_511(int iParam0)//Position - 0x1607C
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("rocoto"));
			break;
		case 1:
			iVar0 = func_75(joaat("felon2"));
			break;
		case 2:
			iVar0 = func_75(joaat("schafter2"));
			break;
		case 3:
			iVar0 = func_75(joaat("carbonizzare"));
			break;
		case 4:
			iVar0 = func_75(joaat("exemplar"));
			break;
	}
	return iVar0;
}

void func_516()//Position - 0x161B0
{
	Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_36 = NETWORK::GET_CLOUD_TIME_AS_INT();
}

void func_517(var uParam0, int iParam1)//Position - 0x161CC
{
	int iVar0;
	int iVar1;
	iVar1 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_504(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
	Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_37 = iVar1;
}

void func_518()//Position - 0x16251
{
	__LIB_9__.func_306("CELL_CLTEST1" /* GXT: Grab these vehicles: */, 0);
	__LIB_36__.func_409("CELL_CLTEST1" /* GXT: Grab these vehicles: */);
	__LIB_9__.func_306("CELL_CLTEST6" /* GXT: Hello soldier, here is shopping list. Keep them looking nice yes? */, 0);
	__LIB_36__.func_409("CELL_CLTEST6" /* GXT: Hello soldier, here is shopping list. Keep them looking nice yes? */);
}

int func_522()//Position - 0x1649C
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (__LIB_0__.func_75())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (__LIB_0__.func_190())
	{
		return 0;
	}
	if (__LIB_1__.func_41())
	{
		return 0;
	}
	if (__LIB_7__.func_268(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 0;
	}
	if (__LIB_2__.func_101())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_1836356)
	{
		return 0;
	}
	if (__LIB_1__.func_709())
	{
		return 0;
	}
	if (__LIB_0__.func_739())
	{
		return 0;
	}
	if (__LIB_0__.func_706())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (__LIB_0__.func_661())
	{
		return 0;
	}
	if (!__LIB_4__.func_715())
	{
		return 0;
	}
	if (__LIB_7__.func_280())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_524()//Position - 0x16593
{
	if (Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_35 == 0)
	{
		return 0;
	}
	return (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_35) < 86400;
}

bool func_525()//Position - 0x165CD
{
	if (Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_36 == 0)
	{
		return 0;
	}
	return (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_36) < 86400;
}

bool func_526()//Position - 0x16607
{
	if (!BitTest(uLocal_338, 2))
	{
		if (!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
		{
			if ((((((!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() && !__LIB_7__.func_268(PLAYER::PLAYER_ID(), 1, 0)) && !__LIB_1__.func_41()) && (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))) && CAM::IS_SCREEN_FADED_IN()) && func_528(19)) && !__LIB_1__.func_279(PLAYER::PLAYER_ID()))
			{
				MISC::SET_BIT(&uLocal_338, 2);
			}
		}
	}
	return BitTest(uLocal_338, 2);
}

int func_528(int iParam0)//Position - 0x166B6
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_530(iParam0);
	if (iVar0 == 1)
	{
		return 1;
	}
	iVar1 = __LIB_2__.func_370(PLAYER::PLAYER_ID(), 1);
	iVar2 = __LIB_0__.func_784(iVar1, 1);
	if (iVar2 >= iVar0 && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_530(int iParam0)//Position - 0x1670D
{
	if (__LIB_0__.func_189())
	{
		return 1;
	}
	if (__LIB_0__.func_188())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
		case 156:
		case 121:
		case 96:
		case 128:
			return 1;
		case 21:
			return 2;
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!func_531(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		case 23:
		case 102:
		case 110:
			return 5;
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		case 97:
		case 107:
			return 7;
		case 4:
			return 8;
		case 19:
			return 8;
		case 29:
			return 10;
		case 8:
			return 11;
		case 61:
		case 119:
			return 12;
		case 89:
			return 13;
		case 31:
			return 14;
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
		case 78:
			return 15;
		case 109:
		case 88:
			return 16;
		case 74:
		case 100:
			return 17;
		case 6:
			return 18;
		case 20:
			return 19;
		case 62:
		case 108:
		case 130:
			return 20;
		case 65:
		case 93:
			return 21;
		case 63:
		case 104:
			return 25;
		case 77:
		case 106:
			return 30;
		case 81:
		case 98:
			return 35;
		case 75:
		case 95:
			return 40;
		case 105:
			return 45;
			break;
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

bool func_531(int iParam0)//Position - 0x169D5
{
	return func_532(123, iParam0);
}

int func_532(int iParam0, var uParam1)//Position - 0x169E5
{
	int iVar0;
	var uVar1;
	iVar0 = Global_2866852[iParam0 /*3*/][__LIB_1__.func_443(uParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_542()//Position - 0x16B51
{
	if (iLocal_110 != -1)
	{
		func_142(iLocal_110, 0);
	}
	__LIB_7__.func_249(&iLocal_317);
	if (BitTest(uLocal_338, 1))
	{
		__LIB_1__.func_567(0f, 0f, 0f, __LIB_1__.func_568(19), 1);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_330.f_24))
			{
				NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_330.f_24);
			}
			Local_330.f_24 = -1;
		}
	}
	func_380();
	Global_2815059.f_1718 = 0;
	Global_2815059.f_1719 = 0;
	Global_2815059.f_1721 = 0;
	Global_2815059.f_1747 = 0;
	if (BitTest(uLocal_338, 7))
	{
		__LIB_1__.func_103(6, 0);
	}
	func_402();
	if (HUD::DOES_BLIP_EXIST(Global_1931386))
	{
		HUD::REMOVE_BLIP(&Global_1931386);
	}
	__LIB_17__.func_230(0);
	if (HUD::DOES_BLIP_EXIST(Global_1931397))
	{
		HUD::REMOVE_BLIP(&Global_1931397);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iLocal_87)
		{
			func_173(joaat("MP_GAR_SIMEON"), 0, 0);
			__LIB_1__.func_549(0);
		}
		if (iLocal_100)
		{
			__LIB_1__.func_549(0);
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_546(struct<21> Param0)//Position - 0x16D6A
{
	__LIB_0__.func_673(__LIB_6__.func_875(Param0.f_0), Param0);
	__LIB_1__.func_569(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_330, 74, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_337, 129, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!__LIB_0__.func_672())
	{
		return 0;
	}
	Global_2815059.f_1721 = 0;
	Global_2815059.f_4451 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
	if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 6))
	{
		__LIB_1__.func_103(6, 0);
	}
	func_547();
	return 1;
}

void func_547()//Position - 0x16DDC
{
	var uVar0;
	uVar0 = __LIB_1__.func_556(1200, -1, 0);
	if (BitTest(uVar0, 3))
	{
		MISC::SET_BIT(&uLocal_339, 1);
	}
	if (BitTest(uVar0, 4))
	{
		MISC::SET_BIT(&uLocal_339, 2);
	}
	if (BitTest(uVar0, 5))
	{
		MISC::SET_BIT(&uLocal_339, 3);
		MISC::SET_BIT(&uLocal_339, 0);
	}
}

