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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = -1;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 1000;
	var uLocal_54 = 1000;
	var uLocal_55 = 0;
	struct<4> Local_56[10];
	bool bLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	struct<5> Local_63 = { 0, 0, 0, 0, 0 } ;
	var uLocal_64 = 0;
	var uLocal_65 = -1;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	struct<20> Local_68 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_69 = 0;
	struct<19> Local_70[6];
	struct<6> Local_71[6];
	struct<6> Local_72 = { 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_73[4];
	struct<7> Local_74[1];
	struct<7> Local_75 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_76 = 0;
	struct<6> Local_77 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_78 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_79 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_80 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85[3] = { 0, 0, 0 };
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	bool bLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	bool bLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	bool bLocal_113 = 0;
	int* iLocal_114 = NULL;
	float fLocal_115 = 0f;
	float fLocal_116 = 0f;
	float fLocal_117 = 0f;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	var uLocal_141 = 0;
	int iLocal_142 = 0;
	char* sLocal_143 = NULL;
	char* sLocal_144 = NULL;
	char* sLocal_145 = NULL;
	char* sLocal_146[3] = { NULL, NULL, NULL };
	char[] cLocal_147[8] = 0;
	char[] cLocal_148[8] = 0;
	char* sLocal_149 = NULL;
	char* sLocal_150 = NULL;
	char* sLocal_151 = NULL;
	char* sLocal_152 = NULL;
	char* sLocal_153 = NULL;
	var uLocal_154 = 16;
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
	int iLocal_319 = 0;
	struct<3> Local_320 = { 0, 0, 0 } ;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	struct<3> Local_324 = { 0, 0, 0 } ;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	struct<3> Local_328 = { 0, 0, 0 } ;
	struct<3> Local_329 = { 0, 0, 0 } ;
	struct<3> Local_330[10];
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	struct<3> Local_334 = { 0, 0, 0 } ;
	struct<3> Local_335 = { 0, 0, 0 } ;
	struct<3> Local_336 = { 0, 0, 0 } ;
	struct<3> Local_337 = { 0, 0, 0 } ;
	struct<3> Local_338 = { 0, 0, 0 } ;
	int iLocal_339 = 0;
	struct<8> Local_340 = { 0, 0, 0, 0, 0, 0, -1, 0 } ;
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
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	bLocal_102 = true;
	cLocal_147 = "BB1AUD";
	cLocal_148 = "BBCAUD";
	sLocal_149 = "Trevor";
	sLocal_150 = "Maude";
	sLocal_151 = "maude_criminal_1";
	sLocal_152 = "maude_chair";
	sLocal_153 = "maude_laptop";
	StringCopy(&Local_320, "", 24);
	StringCopy(&Local_324, "MAUDE_MCS_2", 24);
	Local_63 = { ScriptParam_340 };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		if (iLocal_58 == 0)
		{
			Global_112095 = 0;
			func_587();
		}
		else
		{
			Global_112095 = 3;
			__LIB_33__::func_283(0);
			func_587();
		}
	}
	if (!__LIB_14__::func_751(1))
	{
		Global_112095 = 0;
		func_587();
	}
	MISC::SET_MISSION_FLAG(true);
	func_529();
	if (__LIB_0__::func_323())
	{
		iVar0 = __LIB_0__::func_344();
		if (Global_94618 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				if (VEHICLE::IS_THIS_MODEL_A_HELI(Global_106934.f_2890.f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_PLANE(Global_106934.f_2890.f_12.f_66))
				{
					__LIB_14__::func_865(&iLocal_339, 2898.2944f, 2796.305f, 53.849f, 162.6353f, 0, 0, 1, 0, 0, joaat("asterope"), 0, 145, 1);
				}
				else
				{
					__LIB_14__::func_865(&iLocal_339, 2891.4587f, 2798.1245f, 53.7482f, 206.3925f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
				}
				__LIB_0__::func_427(Local_334, fLocal_115, 1, 0);
				iLocal_61 = 2;
				func_432(1, 0);
				break;
			case 1:
				__LIB_14__::func_865(&iLocal_339, 2704.0776f, 4152.2397f, 42.2514f, 175.193f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
				__LIB_0__::func_427(Local_328, 254.9762f, 0, 0);
				func_432(4, 0);
				break;
			default:
				break;
		}
	}
	else if (__LIB_0__::func_2(0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_14__::func_739(PLAYER::PLAYER_PED_ID(), Local_334, fLocal_115, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
	while (true)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			Local_329 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			func_418();
			func_417();
			switch (iLocal_58)
			{
				case 0:
					func_410();
					break;
				case 1:
					func_406();
					break;
				case 2:
					func_400();
					break;
				case 3:
					func_394();
					break;
				case 6:
					func_389();
					break;
				case 7:
					func_319();
					break;
				case 4:
					func_131();
					break;
				case 5:
					func_123(1);
					break;
				case 8:
					func_119();
					break;
				case 9:
					func_73();
					break;
			}
			if (bLocal_102 == 0)
			{
				func_1(iLocal_59);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x312
{
	if (iLocal_58 == iParam0)
	{
		if (__LIB_0__::func_324())
		{
			__LIB_0__::func_433(0, -1, 0);
		}
		func_37(iLocal_58);
		if (iLocal_58 == 4)
		{
			__LIB_14__::func_773(1, 0, 1);
		}
		else
		{
			__LIB_14__::func_773(1, 1, 1);
		}
		bLocal_102 = true;
		iLocal_103 = 0;
		if (iLocal_58 == 5)
		{
			__LIB_0__::func_84(500, 1);
		}
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x369
{
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_325();
		HUD::CLEAR_PRINTS();
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_HELP(true);
		}
		switch (iLocal_58)
		{
			case 0:
				if (iLocal_60 == 1)
				{
					if (!__LIB_0__::func_324())
					{
						__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), Local_335, fLocal_116, 0, 1);
						if (__LIB_0__::func_692(Local_68.f_9))
						{
							__LIB_14__::func_670(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_68.f_9, true));
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						if (iLocal_103 == 0)
						{
							if (iLocal_59 == 1)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_103 = 1;
								}
							}
						}
					}
					iLocal_87 = 1;
					iLocal_61 = 2;
					__LIB_33__::func_285();
					iLocal_60 = 2;
				}
				break;
			case 1:
				iLocal_87 = 1;
				iLocal_86 = 1;
				if (iLocal_60 == 1)
				{
					if (!__LIB_0__::func_324())
					{
						__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), Local_336, fLocal_117, 0, 1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						if (iLocal_103 == 0)
						{
							if (iLocal_59 == 2)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_103 = 1;
								}
							}
						}
					}
					Local_68.f_17 = (MISC::GET_GAME_TIMER() - 5000);
					__LIB_33__::func_285();
					iLocal_60 = 2;
				}
				break;
			case 2:
				iLocal_81 = 1;
				if (iLocal_67 == 3)
				{
					if (iLocal_60 == 0)
					{
						if (__LIB_0__::func_692(Local_68.f_9) && __LIB_0__::func_695(Local_71[0 /*6*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_68.f_9, Local_71[0 /*6*/], false))
							{
								PED::SET_PED_INTO_VEHICLE(Local_68.f_9, Local_71[0 /*6*/], -1);
							}
						}
					}
				}
				if (iLocal_60 == 1)
				{
					iLocal_83 = 1;
					if (!__LIB_0__::func_324())
					{
						__LIB_14__::func_769(Local_68.f_9, 2.5f);
						if (iLocal_103 == 0)
						{
							if (iLocal_59 == 3)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_103 = 1;
								}
							}
						}
					}
					__LIB_0__::func_325();
					__LIB_0__::func_429();
					__LIB_33__::func_285();
					iLocal_60 = 2;
				}
				break;
			case 3:
				iLocal_97 = 1;
				if (iLocal_60 == 1)
				{
					__LIB_14__::func_739(Local_68.f_9, Local_328, 0f, 0, 0);
					if (!__LIB_0__::func_324())
					{
						__LIB_14__::func_739(PLAYER::PLAYER_PED_ID(), Local_328, 254.9762f, 0, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						if (iLocal_103 == 0)
						{
							if (iLocal_59 == 4)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_103 = 1;
								}
							}
						}
					}
					__LIB_33__::func_285();
					iLocal_60 = 2;
				}
				break;
			case 4:
				if (iLocal_60 == 1)
				{
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						CUTSCENE::STOP_CUTSCENE(false);
					}
				}
				break;
			case 6:
				if (iLocal_60 == 1)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					__LIB_33__::func_285();
				}
				break;
			case 7:
				if (iLocal_60 == 1)
				{
					iLocal_83 = 1;
					if (!__LIB_0__::func_324())
					{
						__LIB_14__::func_769(Local_68.f_9, 2.5f);
						if (iLocal_103 == 0)
						{
							if (iLocal_59 == 3)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_103 = 1;
								}
							}
						}
					}
					__LIB_0__::func_325();
					__LIB_0__::func_429();
					__LIB_33__::func_285();
					iLocal_60 = 2;
				}
				break;
			}
	}
}

void func_37(int iParam0)//Position - 0xF2E
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 4:
				__LIB_14__::func_744(&Local_324);
				func_68();
				while (!__LIB_14__::func_740(1, 1093140480, 0) || !func_38())
				{
					__LIB_14__::func_744(&Local_324);
					func_68();
					SYSTEM::WAIT(0);
				}
				break;
			}
	}
}

int func_38()//Position - 0xF8A
{
	if (__LIB_1__::func_504(Local_329, Local_75.f_1, 210f))
	{
		if (!iLocal_110)
		{
			if ((func_59(3) && __LIB_14__::func_754(&Local_77, Local_77.f_5, Local_77.f_1, Local_77.f_4, 1)) && __LIB_14__::func_754(&Local_78, Local_78.f_5, Local_78.f_1, Local_78.f_4, 1))
			{
				if (__LIB_14__::func_760(&Local_75, Local_75.f_6, Local_75.f_1, Local_75.f_4, 1, 0, 1))
				{
					func_50();
					iLocal_110 = 1;
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_79.f_0))
		{
			if (__LIB_1__::func_504(Local_329, Local_79.f_1, 150f))
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_79.f_1, 10f, __LIB_14__::func_675(), false))
				{
					Local_79.f_0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_79.f_1, 10f, __LIB_14__::func_675(), true, false, true);
					if (__LIB_0__::func_121(Local_79.f_0))
					{
						ENTITY::SET_ENTITY_COORDS(Local_79.f_0, __LIB_14__::func_674(), true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_79.f_0, __LIB_14__::func_673());
						ENTITY::FREEZE_ENTITY_POSITION(Local_79.f_0, true);
					}
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_80.f_0))
		{
			if (__LIB_1__::func_504(Local_329, Local_80.f_1, 150f))
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_80.f_1, 10f, __LIB_14__::func_672(), false))
				{
					Local_80.f_0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_80.f_1, 10f, __LIB_14__::func_672(), true, false, true);
				}
			}
		}
	}
	else if (!CAM::IS_SPHERE_VISIBLE(Local_75.f_1, 2.5f))
	{
		__LIB_14__::func_728(&Local_75, 1);
		STREAMING::REMOVE_ANIM_DICT(__LIB_14__::func_671());
		__LIB_14__::func_727(&Local_77, 1);
		__LIB_14__::func_727(&Local_78, 1);
		__LIB_14__::func_727(&Local_79, 0);
		__LIB_14__::func_727(&Local_80, 0);
		iLocal_110 = 0;
	}
	return iLocal_110;
}

void func_50()//Position - 0x12BB
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_692(Local_75.f_0))
	{
		if (__LIB_0__::func_121(Local_77.f_0))
		{
			if (func_59(3))
			{
				iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(__LIB_14__::func_674(), __LIB_14__::func_678(), 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar0, true);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iVar0, false);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_75.f_0, iVar0, __LIB_14__::func_671(), __LIB_14__::func_677(), 1000f, -8f, 4688, 0, 1000f, 0);
				iVar1 = 0;
				iVar1 += 16;
				iVar1 += 64;
				iVar1 += 512;
				iVar1 += 4096;
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_77.f_0, iVar0, __LIB_14__::func_676(), __LIB_14__::func_671(), 1000f, -8f, iVar1, 1000f);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_75.f_0, true);
				PED::SET_PED_MONEY(Local_75.f_0, 0);
				PED::SET_PED_CAN_BE_TARGETTED(Local_75.f_0, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_75.f_0, joaat("PLAYER"));
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_75.f_0, false);
				TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_75.f_0, false);
				PED::SET_PED_KEEP_TASK(Local_75.f_0, true);
				PED::SET_PED_CONFIG_FLAG(Local_75.f_0, 118, false);
			}
		}
	}
}

int func_59(int iParam0)//Position - 0x1521
{
	switch (iParam0)
	{
		case 0:
			HUD::REQUEST_ADDITIONAL_TEXT("BBONDS", 0);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				return 1;
			}
			break;
		case 3:
			STREAMING::REQUEST_ANIM_DICT(__LIB_14__::func_671());
			if (STREAMING::HAS_ANIM_DICT_LOADED(__LIB_14__::func_671()))
			{
				return 1;
			}
			break;
		case 1:
			STREAMING::REQUEST_ANIM_DICT("ODDJOBS@BAILBOND_QUARRY");
			if (STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@BAILBOND_QUARRY"))
			{
				return 1;
			}
			break;
		case 2:
			STREAMING::REQUEST_MODEL(Local_72.f_5);
			if (STREAMING::HAS_MODEL_LOADED(Local_72.f_5))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_68()//Position - 0x1929
{
	if (__LIB_0__::func_121(Local_68.f_9))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_151, Local_68.f_9, 0);
		}
	}
	if (__LIB_0__::func_121(Local_75.f_0))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_150, Local_75.f_0, 0);
		}
	}
}

void func_73()//Position - 0x1A84
{
	char* sVar0;
	int iVar1;
	sVar0 = 0;
	switch (iLocal_60)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			if (__LIB_0__::func_75())
			{
				__LIB_0__::func_325();
			}
			func_115();
			Global_112095 = 3;
			if (iLocal_62 == 4)
			{
				if (__LIB_0__::func_692(Local_75.f_0))
				{
					__LIB_0__::func_221(&uLocal_154, 4);
					__LIB_14__::func_731(Local_75.f_0, 0);
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_75.f_0))
					{
						if (__LIB_0__::func_725(Local_75.f_0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 35f, 1))
						{
							AUDIO::STOP_PED_SPEAKING(Local_75.f_0, false);
							__LIB_0__::func_709(Local_75.f_0, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_78.f_0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_78.f_0, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_79.f_0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_79.f_0, false);
				}
				STREAMING::REQUEST_ANIM_DICT(__LIB_14__::func_683());
				if (__LIB_14__::func_762(&Local_75, &Local_77, &iLocal_138))
				{
					iLocal_104 = 1;
				}
			}
			else if (iLocal_62 == 2)
			{
				iLocal_94 = 0;
				StringCopy(&Local_320, "BBC_T12", 24);
			}
			if (__LIB_0__::func_692(Local_68.f_9))
			{
				if (PED::IS_PED_IN_GROUP(Local_68.f_9))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_68.f_9);
				}
				__LIB_14__::func_730(Local_68.f_9, 1);
			}
			iVar1 = 0;
			while (iVar1 <= (iLocal_130 - 1))
			{
				__LIB_14__::func_730(Local_70[iVar1 /*19*/], 1);
				iVar1++;
			}
			switch (iLocal_62)
			{
				case 1:
					break;
				case 2:
					sVar0 = "BBS_F1";
					break;
				case 3:
					sVar0 = "BBS_F3";
					break;
				case 4:
					sVar0 = "BBS_F2";
					break;
				case 0:
					break;
			}
			if (iLocal_62 != 0)
			{
				__LIB_0__::func_381(sVar0);
			}
			__LIB_33__::func_283(0);
			iLocal_60 = 1;
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				func_99(1);
				func_587();
			}
			else
			{
				if (!iLocal_94)
				{
					if (__LIB_0__::func_75())
					{
						__LIB_0__::func_429();
					}
					if (iLocal_62 == 4)
					{
						if (__LIB_0__::func_692(Local_75.f_0))
						{
							if (__LIB_0__::func_725(Local_75.f_0, Local_329, 35f, 1))
							{
								__LIB_0__::func_222(&uLocal_154, 4, Local_75.f_0, "MAUDE", 0, 1);
								if (__LIB_14__::func_753(&uLocal_154, cLocal_148, &Local_320, 4, 0, 0, 0))
								{
									iLocal_94 = 1;
								}
							}
						}
					}
					else if (__LIB_14__::func_753(&uLocal_154, cLocal_148, &Local_320, 4, 0, 0, 0))
					{
						iLocal_94 = 1;
					}
				}
				if (iLocal_62 == 4)
				{
					if (!iLocal_104)
					{
						STREAMING::REQUEST_ANIM_DICT(__LIB_14__::func_683());
						if (__LIB_14__::func_762(&Local_75, &Local_77, &iLocal_138))
						{
							iLocal_104 = 1;
						}
					}
					else if (__LIB_0__::func_692(Local_75.f_0))
					{
						if (!__LIB_6__::func_572(Local_75.f_0, joaat("SCRIPT_TASK_SMART_FLEE_PED")))
						{
							if (!PED::IS_PED_FLEEING(Local_75.f_0))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_75.f_0, __LIB_14__::func_683(), __LIB_14__::func_681(), 3))
								{
									__LIB_14__::func_729(&Local_75);
									TASK::TASK_SMART_FLEE_PED(Local_75.f_0, PLAYER::PLAYER_PED_ID(), 50f, -1, false, false);
									PED::SET_PED_KEEP_TASK(Local_75.f_0, true);
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_99(bool bParam0)//Position - 0x26E4
{
	int iVar0;
	__LIB_14__::func_727(&Local_72, 0);
	if (iLocal_125 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_125 - 1))
		{
			__LIB_14__::func_727(&(Local_73[iVar0 /*9*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_128 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_128 - 1))
		{
			__LIB_0__::func_733(&(Local_74[iVar0 /*7*/]));
			iVar0++;
		}
	}
	__LIB_14__::func_727(&Local_77, bParam0);
	__LIB_14__::func_727(&Local_78, bParam0);
	__LIB_14__::func_727(&Local_79, 0);
	__LIB_14__::func_727(&Local_80, 0);
	if (__LIB_0__::func_692(Local_68.f_9))
	{
		if (PED::IS_PED_IN_GROUP(Local_68.f_9))
		{
			if (PED::IS_PED_GROUP_MEMBER(Local_68.f_9, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_68.f_9);
			}
		}
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_68.f_9, false, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, false);
		if (Global_112095 == 0)
		{
			PED::SET_PED_KEEP_TASK(Local_68.f_9, false);
		}
		else
		{
			PED::SET_PED_KEEP_TASK(Local_68.f_9, true);
		}
	}
	__LIB_14__::func_728(&(Local_68.f_9), bParam0);
	if (__LIB_0__::func_692(Local_75.f_0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_75.f_0, false);
		PED::SET_PED_KEEP_TASK(Local_75.f_0, true);
	}
	__LIB_14__::func_728(&Local_75, bParam0);
	if (iLocal_130 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_130 - 1))
		{
			if (iLocal_67 == 4)
			{
				if (__LIB_0__::func_692(Local_70[iVar0 /*19*/]))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_70[iVar0 /*19*/], joaat("HATES_PLAYER"));
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_70[iVar0 /*19*/], false);
					if (Global_112095 == 0)
					{
						PED::SET_PED_KEEP_TASK(Local_70[iVar0 /*19*/], false);
					}
					else
					{
						PED::SET_PED_KEEP_TASK(Local_70[iVar0 /*19*/], true);
					}
				}
			}
			__LIB_14__::func_728(&(Local_70[iVar0 /*19*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_126 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_126 - 1))
		{
			__LIB_14__::func_745(&(Local_71[iVar0 /*6*/]), bParam0);
			iVar0++;
		}
	}
}

void func_115()//Position - 0x2EA3
{
	func_118(iLocal_130);
	__LIB_0__::func_714(&(Local_68.f_8));
	__LIB_0__::func_621(&Local_68);
	__LIB_0__::func_714(&iLocal_114);
}

void func_118(int iParam0)//Position - 0x2F59
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		__LIB_0__::func_621(&(Local_70[iVar0 /*19*/].f_6));
		iVar0++;
	}
}

void func_119()//Position - 0x2F82
{
	int iVar0;
	switch (iLocal_60)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			if (__LIB_0__::func_75())
			{
				__LIB_0__::func_325();
			}
			func_115();
			__LIB_14__::func_728(&Local_75, 1);
			iVar0 = 0;
			while (iVar0 <= (iLocal_130 - 1))
			{
				func_121(iVar0);
				iVar0++;
			}
			iLocal_135 = MISC::GET_GAME_TIMER();
			iLocal_60 = 1;
			break;
		case 1:
			if (__LIB_14__::func_684(iLocal_135, 500))
			{
				if (!bLocal_95)
				{
					if (__LIB_0__::func_75())
					{
						__LIB_0__::func_325();
						__LIB_0__::func_429();
					}
					if (__LIB_14__::func_753(&uLocal_154, cLocal_148, "BBC_PK1", 4, 0, 0, 0))
					{
						bLocal_95 = true;
					}
				}
				if (bLocal_95)
				{
					func_123(2);
				}
				if (__LIB_14__::func_684(iLocal_135, 1500))
				{
					func_123(2);
				}
			}
			break;
	}
}

void func_121(int iParam0)//Position - 0x3057
{
	if (__LIB_0__::func_692(Local_70[iParam0 /*19*/]))
	{
		TASK::CLEAR_PED_SECONDARY_TASK(Local_70[iParam0 /*19*/]);
		TASK::CLEAR_PED_TASKS(Local_70[iParam0 /*19*/]);
		TASK::TASK_CLEAR_LOOK_AT(Local_70[iParam0 /*19*/]);
		if (__LIB_14__::func_696(1, 0, 1))
		{
			__LIB_14__::func_730(Local_70[iParam0 /*19*/], 1);
			Local_70[iParam0 /*19*/].f_14 = 4;
			__LIB_0__::func_621(&(Local_70[iParam0 /*19*/].f_6));
		}
		else if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_70[iParam0 /*19*/]) == iLocal_319)
		{
			PED::SET_PED_HEARING_RANGE(Local_70[iParam0 /*19*/], 30f);
			PED::SET_PED_SEEING_RANGE(Local_70[iParam0 /*19*/], 30f);
			PED::SET_PED_ID_RANGE(Local_70[iParam0 /*19*/], 30f);
			PED::SET_PED_COMBAT_RANGE(Local_70[iParam0 /*19*/], 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_70[iParam0 /*19*/], 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_70[iParam0 /*19*/], 3, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_70[iParam0 /*19*/], 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_70[iParam0 /*19*/], 0, false);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_70[iParam0 /*19*/], 512, true);
			TASK::TASK_LOOK_AT_ENTITY(Local_70[iParam0 /*19*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_70[iParam0 /*19*/], PLAYER::PLAYER_PED_ID(), -1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_70[iParam0 /*19*/], true);
			Local_70[iParam0 /*19*/].f_14 = 2;
		}
		else
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_70[iParam0 /*19*/], 5, false);
			TASK::TASK_LOOK_AT_ENTITY(Local_70[iParam0 /*19*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_70[iParam0 /*19*/], PLAYER::PLAYER_PED_ID(), -1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_70[iParam0 /*19*/], false);
			Local_70[iParam0 /*19*/].f_14 = 4;
		}
	}
}

void func_123(int iParam0)//Position - 0x32AB
{
	__LIB_0__::func_84(500, 1);
	__LIB_0__::func_716(__LIB_14__::func_685(Local_63.f_4), 0, 0);
	if (iParam0 == 2)
	{
		Global_112095 = 1;
	}
	else
	{
		Global_112095 = 2;
	}
	func_587();
}

void func_131()//Position - 0x398E
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	switch (iLocal_60)
	{
		case 0:
			__LIB_14__::func_744(&Local_324);
			func_68();
			if (func_38())
			{
				if (__LIB_14__::func_740(1, 10.5f, 1))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_149, 0, 0, 0);
					if (__LIB_0__::func_121(Local_75.f_0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_75.f_0, sLocal_150, 0, 0, 0);
					}
					if (__LIB_0__::func_121(Local_68.f_9))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_68.f_9, sLocal_151, 0, 0, 0);
					}
					if (__LIB_0__::func_121(Local_77.f_0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_77.f_0, sLocal_152, 0, 0, 0);
					}
					if (__LIB_0__::func_121(Local_78.f_0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_78.f_0, sLocal_153, 0, 0, 0);
					}
					CUTSCENE::START_CUTSCENE(0);
					SYSTEM::WAIT(0);
					__LIB_0__::func_84(800, 0);
					func_200(2727.58f, 4144.19f, 43.95f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					__LIB_14__::func_688(&Var0, &Var1, &fVar3);
					Var2 = { __LIB_14__::func_687() };
					if (__LIB_14__::func_742(Var2, 0))
					{
						__LIB_14__::func_592(Var0, Var1, fVar3, 2721.02f, 4140.34f, 43.66f, 257.67f, 1, 1, 1, 0, 0);
						__LIB_14__::func_785(2721.02f, 4140.34f, 43.66f, 257.67f, 0, 145);
					}
					else
					{
						__LIB_14__::func_592(Var0, Var1, fVar3, 2710.6646f, 4149.075f, 42.7026f, 180.9488f, 1, 1, 1, 0, 0);
						__LIB_14__::func_785(2710.6646f, 4149.075f, 42.7026f, 180.9488f, 0, 145);
					}
					if (__LIB_0__::func_692(Local_68.f_9))
					{
						if (PED::IS_PED_IN_GROUP(Local_68.f_9))
						{
							PED::REMOVE_PED_FROM_GROUP(Local_68.f_9);
						}
						TASK::CLEAR_PED_TASKS(Local_68.f_9);
						ENTITY::SET_ENTITY_COORDS(Local_68.f_9, 2724.02f, 4145.08f, 43.29f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_68.f_9, -84.2f);
						TASK::CLEAR_PED_TASKS(Local_68.f_9);
					}
					iLocal_60 = 1;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_121(Local_77.f_0))
			{
				if (__LIB_0__::func_692(Local_75.f_0))
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_150, 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_152, 0))
					{
						func_50();
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_149, 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2724.1929f, 4145.3057f, 42.8324f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 76.4896f);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				iLocal_60 = 2;
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(false);
			}
			else
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
				if (bLocal_102)
				{
					__LIB_14__::func_749(1, 1, 1, 1);
				}
				if (__LIB_0__::func_692(Local_68.f_9))
				{
					if (PED::IS_PED_IN_GROUP(Local_68.f_9))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_68.f_9);
					}
				}
				__LIB_14__::func_728(&(Local_68.f_9), 1);
				if (__LIB_0__::func_692(Local_75.f_0))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_75.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					PED::SET_PED_KEEP_TASK(Local_75.f_0, true);
				}
				__LIB_0__::func_124(&Local_75, 1, 0, 1);
				__LIB_14__::func_686(5);
			}
			break;
	}
}

void func_200(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0xAF19
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
					if (func_317(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_202(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_317(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_202(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_317(PLAYER::PLAYER_PED_ID(), 8, 1) || func_317(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_202(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_317(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_202(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			iLocal_43 = 0;
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_43 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__::func_84(500, 0);
		}
	}
}

int func_202(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0xB0EA
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
										func_202(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_202(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_211(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_210(iParam0, iVar10, &iVar4, 1))
							{
								func_202(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_202(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_202(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_202(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_202(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_202(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_202(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_202(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_202(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_202(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_210(iParam0, iVar10, &iVar4, 0))
		{
			func_202(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_203(iParam0, iVar10, &iVar4))
		{
			func_202(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_203(int iParam0, int iParam1, int iParam2)//Position - 0xB8FA
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_317(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_210(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC1EF
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_317(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_211(int iParam0, int iParam1, int iParam2)//Position - 0xC285
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
				if (func_317(iParam0, iParam1, iVar0))
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
				if (func_317(iParam0, iParam1, iVar1))
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

int func_317(int iParam0, int iParam1, int iParam2)//Position - 0x28F0C
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
				if (!func_317(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_317(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_317(iParam0, 14, iVar4))
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
			if (!func_317(iParam0, 14, uVar8[iVar7]))
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

void func_319()//Position - 0x291A3
{
	bool bVar0;
	struct<3> Var1;
	bVar0 = false;
	func_38();
	func_387();
	if (__LIB_0__::func_692(Local_68.f_9))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_68.f_9, false) };
		__LIB_14__::func_777(Local_68.f_9, &iLocal_131, 1126825984, 7);
		__LIB_14__::func_780(Local_68.f_9, &(Local_68.f_19), 1126825984, 7);
		func_366();
		switch (iLocal_60)
		{
			case 0:
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_319);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_319, joaat("PLAYER"));
				iLocal_136 = ENTITY::GET_ENTITY_HEALTH(Local_68.f_9);
				Local_337 = { ENTITY::GET_ENTITY_COORDS(Local_68.f_9, false) };
				__LIB_14__::func_694(&Local_338, Local_337);
				func_364(Local_68.f_9);
				if (Local_68.f_10 != 13 && Local_68.f_10 != 14)
				{
					TASK::CLEAR_PED_TASKS(Local_68.f_9);
					Local_68.f_18 = (MISC::GET_GAME_TIMER() - 3000);
					Local_68.f_10 = 13;
				}
				if (__LIB_0__::func_692(Local_68.f_9))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_68.f_8))
					{
						Local_68.f_8 = __LIB_14__::func_661(Local_68.f_9, 1, 0, 5);
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_68.f_9);
				}
				iLocal_132 = -1;
				iLocal_133 = -1;
				iLocal_107 = 0;
				iLocal_82 = 0;
				iLocal_81 = 0;
				sLocal_145 = "BB1_J8";
				iLocal_120 = MISC::GET_GAME_TIMER();
				__LIB_14__::func_693(&(Local_68.f_8), "", "", &iLocal_123, iLocal_124, 0);
				iLocal_60 = 1;
				break;
			case 1:
				if (!iLocal_107)
				{
					__LIB_14__::func_693(&(Local_68.f_8), "", "", &iLocal_123, iLocal_124, 0);
					__LIB_14__::func_615(&uLocal_44, Local_68.f_9, 0, 0, 1, 1, 1);
					if (Local_68.f_10 == 13 || Local_68.f_10 == 14)
					{
						if (iLocal_133 == -1)
						{
							iLocal_133 = MISC::GET_GAME_TIMER();
						}
						if (iLocal_132 == -1)
						{
							iLocal_132 = MISC::GET_GAME_TIMER();
						}
						else if (__LIB_14__::func_684(iLocal_132, 8000))
						{
							bVar0 = true;
						}
						if (__LIB_14__::func_764(Local_68.f_9, Local_329, bVar0, 0, 1, iLocal_136))
						{
							if ((__LIB_14__::func_684(iLocal_133, 5000) || __LIB_0__::func_78(Local_338, 0f, 0f, 0f, 0)) || (!__LIB_1__::func_504(Var1, Local_338, 8.5f) && !__LIB_1__::func_504(Var1, Local_337, 8.5f)))
							{
								func_330();
								Local_68.f_17 = MISC::GET_GAME_TIMER();
								__LIB_0__::func_345(&uLocal_44, 0, 0);
								iLocal_107 = 1;
							}
						}
						else
						{
							if (!iLocal_81)
							{
								if (!__LIB_14__::func_684(iLocal_120, 2500))
								{
									if (!__LIB_0__::func_75())
									{
										if (__LIB_0__::func_725(Local_68.f_9, Local_329, 30f, 1))
										{
											if (__LIB_14__::func_753(&uLocal_154, cLocal_147, "BB1_J7", 4, 0, 0, 0))
											{
												iLocal_120 = MISC::GET_GAME_TIMER();
												iLocal_81 = 1;
											}
										}
									}
								}
								else
								{
									iLocal_81 = 1;
								}
							}
							else if (!__LIB_0__::func_75())
							{
								if (__LIB_14__::func_684(iLocal_120, MISC::GET_RANDOM_INT_IN_RANGE(5000, 12000)))
								{
									if (__LIB_0__::func_725(Local_68.f_9, Local_329, 30f, 1))
									{
										if (PED::IS_PED_FLEEING(Local_68.f_9))
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 101) < 30)
											{
												if (__LIB_14__::func_753(&uLocal_154, cLocal_148, "BBC_T13", 4, 0, 0, 0))
												{
													iLocal_120 = MISC::GET_GAME_TIMER();
												}
											}
											else if (__LIB_14__::func_753(&uLocal_154, cLocal_147, "BB1_FLEE", 4, 0, 0, 0))
											{
												iLocal_120 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
							else
							{
								iLocal_120 = MISC::GET_GAME_TIMER();
							}
							__LIB_14__::func_690(Local_68.f_9, Local_329, iLocal_133, 925353388);
						}
					}
					else
					{
						func_330();
						Local_68.f_17 = MISC::GET_GAME_TIMER();
						__LIB_0__::func_345(&uLocal_44, 0, 0);
						iLocal_107 = 1;
					}
				}
				else
				{
					func_330();
					if (!__LIB_0__::func_725(Local_68.f_9, Local_329, 10f, 1))
					{
						if (!iLocal_97)
						{
							if (!__LIB_14__::func_733(sLocal_145, 1))
							{
								__LIB_14__::func_732(&(Local_68.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_123, &iLocal_124, 1, 1);
								iLocal_97 = 1;
							}
						}
						else
						{
							__LIB_14__::func_693(&(Local_68.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_123, iLocal_124, 1);
						}
					}
					else
					{
						if (!iLocal_82)
						{
							if (!PED::IS_PED_RAGDOLL(Local_68.f_9) && !PED::IS_PED_IN_ANY_VEHICLE(Local_68.f_9, false))
							{
								if (__LIB_0__::func_501("BBS_APPSUS", 0, 0) || __LIB_0__::func_501("BBS_APPSUS2", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								if (!__LIB_0__::func_75())
								{
									__LIB_0__::func_429();
								}
								if (__LIB_14__::func_753(&uLocal_154, cLocal_147, sLocal_145, 4, 0, 0, 0))
								{
									iLocal_82 = 1;
								}
							}
						}
						else if (!__LIB_0__::func_75())
						{
							iLocal_60 = 2;
						}
						__LIB_14__::func_693(&(Local_68.f_8), "", "", &iLocal_123, iLocal_124, 0);
					}
					if (__LIB_14__::func_763(&(Local_68.f_9)))
					{
						iLocal_112 = 1;
						iLocal_60 = 0;
					}
				}
				break;
			case 2:
				if (__LIB_0__::func_501("BBS_APPSUS", 0, 0) || __LIB_0__::func_501("BBS_APPSUS2", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				MISC::SET_INSTANCE_PRIORITY_HINT(0);
				iLocal_82 = 1;
				func_330();
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_319);
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_319, joaat("PLAYER"));
				__LIB_0__::func_714(&(Local_68.f_8));
				iLocal_82 = 1;
				Local_68.f_17 = MISC::GET_GAME_TIMER();
				__LIB_0__::func_345(&uLocal_44, 0, 0);
				iLocal_108 = 0;
				iLocal_112 = 0;
				__LIB_14__::func_686(3);
				break;
			}
	}
}

void func_330()//Position - 0x29A0E
{
	if (__LIB_0__::func_692(Local_68.f_9))
	{
		if (((Local_68.f_10 != 23 && Local_68.f_10 != 24) && Local_68.f_10 != 21) && Local_68.f_10 != 22)
		{
			PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_319);
			PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_319, joaat("PLAYER"));
			if (PED::IS_PED_IN_GROUP(Local_68.f_9))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_68.f_9);
			}
			TASK::CLEAR_PED_SECONDARY_TASK(Local_68.f_9);
			TASK::CLEAR_PED_TASKS(Local_68.f_9);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_68.f_9, false, 1);
			WEAPON::SET_PED_DROPS_WEAPON(Local_68.f_9);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_68.f_9, true);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_68.f_9, joaat("WEAPON_UNARMED"), true);
			PED::SET_PED_CAN_SWITCH_WEAPON(Local_68.f_9, false);
			PED::SET_PED_ARMOUR(Local_68.f_9, 0);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_68.f_9, 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_68.f_9, 17, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_68.f_9, 0, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_68.f_9, 5, false);
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_68.f_9, true))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(Local_68.f_9, 0, 0);
			}
			iLocal_139 = MISC::GET_GAME_TIMER();
			Local_68.f_10 = 23;
		}
	}
}

void func_364(int iParam0)//Position - 0x2AEE4
{
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_319);
	PED::SET_PED_CONFIG_FLAG(iParam0, 177, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 116, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 42, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 118, true);
	PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iParam0, 10f, 5);
	PED::SET_PED_AS_ENEMY(iParam0, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
}

void func_366()//Position - 0x2B010
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	if (__LIB_0__::func_692(Local_68.f_9))
	{
		if (iLocal_69 == 0)
		{
			__LIB_14__::func_700(&(Local_68.f_9), &bLocal_113);
			if (__LIB_14__::func_756())
			{
				if (iLocal_107 || iLocal_58 == 7)
				{
					if (bLocal_113)
					{
						PED::SET_PED_MOVEMENT_CLIPSET(Local_68.f_9, __LIB_14__::func_699(), 0.25f);
						iLocal_69 = 2;
					}
					else
					{
						PED::SET_PED_MOVEMENT_CLIPSET(Local_68.f_9, __LIB_14__::func_698(), 0.25f);
						iLocal_69 = 1;
					}
				}
			}
		}
		else if (iLocal_69 == 1)
		{
			__LIB_14__::func_700(&(Local_68.f_9), &bLocal_113);
			if (bLocal_113)
			{
				if (__LIB_14__::func_756())
				{
					PED::SET_PED_MOVEMENT_CLIPSET(Local_68.f_9, __LIB_14__::func_699(), 0.25f);
					iLocal_69 = 2;
				}
			}
		}
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			switch (Local_68.f_10)
			{
				case 0:
					if (__LIB_0__::func_725(Local_68.f_9, Local_329, 30f, 1))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_68.f_9, "ODDJOBS@BAILBOND_QUARRY", "prem_producer_argue_a", 3))
						{
							ENTITY::STOP_ENTITY_ANIM(Local_68.f_9, "prem_producer_argue_a", "ODDJOBS@BAILBOND_QUARRY", -2f);
						}
						Local_68.f_10 = 1;
					}
					break;
				case 1:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_68.f_9, "ODDJOBS@BAILBOND_QUARRY", "prem_producer_argue_a", 3))
					{
						__LIB_14__::func_727(&Local_72, 1);
						if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_68.f_9))
						{
							TASK::TASK_START_SCENARIO_IN_PLACE(Local_68.f_9, "WORLD_HUMAN_SMOKING", 0, true);
							PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_68.f_9);
						}
						Local_68.f_10 = 2;
					}
					break;
				case 2:
					if (__LIB_0__::func_725(Local_68.f_9, Local_329, 20f, 1))
					{
						if (!PED::IS_PED_HEADTRACKING_PED(Local_68.f_9, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_68.f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
					}
					else if (PED::IS_PED_HEADTRACKING_PED(Local_68.f_9, PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_68.f_9);
					}
					break;
				case 3:
					if (__LIB_14__::func_684(Local_68.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 500)))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(Local_68.f_9))
						{
							PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_68.f_9);
						}
						TASK::TASK_LOOK_AT_ENTITY(Local_68.f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_68.f_9, PLAYER::PLAYER_PED_ID(), -1);
						Local_68.f_10 = 4;
					}
					break;
				case 4:
					if (!__LIB_6__::func_572(Local_68.f_9, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
					{
						Local_68.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_68.f_10 = 3;
					}
					break;
				case 5:
					if (!PED::IS_PED_HEADTRACKING_PED(Local_68.f_9, PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_68.f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					}
					TASK::TASK_GO_TO_ENTITY(Local_68.f_9, PLAYER::PLAYER_PED_ID(), 20000, 2.5f, 1f, 2f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
					Local_68.f_10 = 6;
					break;
				case 6:
					if (!__LIB_0__::func_725(Local_68.f_9, Local_329, 3.5f, 1))
					{
						if (!__LIB_6__::func_572(Local_68.f_9, joaat("SCRIPT_TASK_GO_TO_ENTITY")))
						{
							Local_68.f_10 = 5;
						}
						else
						{
							PED::SET_PED_MOVE_RATE_OVERRIDE(Local_68.f_9, 1.1f);
						}
					}
					else if (!__LIB_6__::func_572(Local_68.f_9, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_68.f_9, PLAYER::PLAYER_PED_ID(), -1);
					}
					break;
				case 7:
					if (__LIB_14__::func_684(Local_68.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 1000)))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(Local_68.f_9))
						{
							PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_68.f_9);
						}
						PED::SET_PED_COMBAT_RANGE(Local_68.f_9, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_68.f_9, 5, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_68.f_9, 0, false);
						TASK::TASK_COMBAT_PED(Local_68.f_9, PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
						Local_68.f_10 = 8;
					}
					break;
				case 8:
					if (!__LIB_6__::func_572(Local_68.f_9, joaat("SCRIPT_TASK_COMBAT")))
					{
						Local_68.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_68.f_10 = 7;
					}
					break;
				case 9:
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_68.f_9, 5, false);
					PED::SET_PED_CAN_RAGDOLL(Local_68.f_9, true);
					if (!PED::IS_PED_RAGDOLL(Local_68.f_9))
					{
						PED::SET_PED_TO_RAGDOLL(Local_68.f_9, 1000, 1000, 0, true, true, false);
					}
					Local_68.f_10 = 10;
					break;
				case 10:
					if (!PED::IS_PED_RAGDOLL(Local_68.f_9))
					{
						if (!__LIB_6__::func_572(Local_68.f_9, joaat("SCRIPT_TASK_COWER")) && !__LIB_6__::func_572(Local_68.f_9, joaat("SCRIPT_TASK_HANDS_UP")))
						{
							if (!ENTITY::IS_ENTITY_IN_WATER(Local_68.f_9))
							{
								PED::SET_PED_COWER_HASH(Local_68.f_9, "CODE_HUMAN_STAND_COWER");
								TASK::TASK_COWER(Local_68.f_9, -1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
							}
						}
					}
					break;
				case 29:
					WEAPON::GET_CURRENT_PED_WEAPON(Local_68.f_9, &iVar0, true);
					if (iVar0 == joaat("WEAPON_UNARMED"))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_68.f_9, joaat("WEAPON_PISTOL"), -1, false, true);
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_68.f_9, 0, false);
					PED::SET_PED_COMBAT_RANGE(Local_68.f_9, 0);
					PED::SET_PED_ACCURACY(Local_68.f_9, 15);
					TASK::CLEAR_PED_TASKS(Local_68.f_9);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
					Local_68.f_10 = 30;
					break;
				case 30:
					if (!__LIB_6__::func_572(Local_68.f_9, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 8f);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_142);
						TASK::TASK_GOTO_ENTITY_AIMING(0, PLAYER::PLAYER_PED_ID(), fVar3, 30f);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_142);
						TASK::TASK_PERFORM_SEQUENCE(Local_68.f_9, iLocal_142);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_142);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
					}
					break;
				case 31:
					if (__LIB_14__::func_684(Local_68.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 750)))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_68.f_9, 0, true);
						PED::SET_PED_COMBAT_RANGE(Local_68.f_9, 0);
						PED::SET_PED_ACCURACY(Local_68.f_9, MISC::GET_RANDOM_INT_IN_RANGE(10, 22));
						PED::SET_PED_SHOOT_RATE(Local_68.f_9, MISC::GET_RANDOM_INT_IN_RANGE(30, 60));
						PED::SET_PED_FIRING_PATTERN(Local_68.f_9, joaat("FIRING_PATTERN_DELAY_FIRE_BY_ONE_SEC"));
						WEAPON::GET_CURRENT_PED_WEAPON(Local_68.f_9, &iVar0, true);
						if (iVar0 == joaat("WEAPON_UNARMED"))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_68.f_9, joaat("WEAPON_PISTOL"), -1, false, true);
							WEAPON::SET_CURRENT_PED_WEAPON(Local_68.f_9, joaat("WEAPON_PISTOL"), false);
						}
						TASK::TASK_COMBAT_PED(Local_68.f_9, PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
						Local_68.f_10 = 32;
					}
					break;
				case 32:
					if (!__LIB_6__::func_572(Local_68.f_9, joaat("SCRIPT_TASK_COMBAT")))
					{
						Local_68.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_68.f_10 = 31;
					}
					break;
				case 13:
					if (__LIB_14__::func_684(Local_68.f_18, MISC::GET_RANDOM_INT_IN_RANGE(0, 500)))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(Local_68.f_9))
						{
							PED::SET_PED_PANIC_EXIT_SCENARIO(Local_68.f_9, Local_329);
						}
						WEAPON::GET_CURRENT_PED_WEAPON(Local_68.f_9, &iVar0, true);
						if (iVar0 != joaat("WEAPON_UNARMED"))
						{
							WEAPON::SET_PED_DROPS_WEAPON(Local_68.f_9);
							WEAPON::REMOVE_ALL_PED_WEAPONS(Local_68.f_9, true);
							WEAPON::SET_CURRENT_PED_WEAPON(Local_68.f_9, joaat("WEAPON_UNARMED"), true);
							PED::SET_PED_CAN_SWITCH_WEAPON(Local_68.f_9, false);
						}
						PED::SET_PED_FLEE_ATTRIBUTES(Local_68.f_9, 2, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_68.f_9, 64, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_68.f_9, 128, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_68.f_9, 8, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_68.f_9, 1, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_68.f_9, 32, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_68.f_9, 5, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_68.f_9, 17, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_142);
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_68.f_9, false))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 64);
						}
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_142);
						TASK::TASK_PERFORM_SEQUENCE(Local_68.f_9, iLocal_142);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_142);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
						PED::SET_PED_KEEP_TASK(Local_68.f_9, true);
						Local_68.f_10 = 14;
					}
					break;
				case 14:
					if (!__LIB_6__::func_572(Local_68.f_9, joaat("SCRIPT_TASK_SMART_FLEE_PED")) && !PED::IS_PED_FLEEING(Local_68.f_9))
					{
						Local_68.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_68.f_10 = 13;
					}
					break;
				case 15:
					PED::SET_PED_FLEE_ATTRIBUTES(Local_68.f_9, 2, true);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_68.f_9, 64, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_68.f_9, 128, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_68.f_9, 8, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_68.f_9, 1, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_68.f_9, 32, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_68.f_9, 5, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_68.f_9, 17, true);
					PED::SET_PED_RESET_FLAG(Local_68.f_9, 237, true);
					if (__LIB_0__::func_695(Local_71[0 /*6*/]))
					{
						if (((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_71[0 /*6*/], false) && __LIB_0__::func_725(Local_71[0 /*6*/], Local_71[0 /*6*/].f_1, 3f, 1)) && __LIB_14__::func_697(ENTITY::GET_ENTITY_HEADING(Local_71[0 /*6*/]), Local_71[0 /*6*/].f_4, 20f)) && !func_372(Local_71[0 /*6*/], 2))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_68.f_9, Local_71[0 /*6*/], false) && !PED::IS_PED_BEING_JACKED(Local_68.f_9))
							{
								Local_68.f_10 = 16;
							}
							else if (__LIB_14__::func_684(Local_68.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 350)))
							{
								__LIB_14__::func_727(&Local_72, 0);
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_68.f_9, "ODDJOBS@BAILBOND_QUARRY", "prem_producer_argue_a", 3))
								{
									ENTITY::STOP_ENTITY_ANIM(Local_68.f_9, "prem_producer_argue_a", "ODDJOBS@BAILBOND_QUARRY", -4f);
								}
								else if (PED::IS_PED_USING_ANY_SCENARIO(Local_68.f_9))
								{
									PED::SET_PED_PANIC_EXIT_SCENARIO(Local_68.f_9, Local_329);
								}
								else
								{
									TASK::CLEAR_PED_TASKS(Local_68.f_9);
								}
								TASK::TASK_ENTER_VEHICLE(Local_68.f_9, Local_71[0 /*6*/], 25000, -1, 3f, 8388608, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
								Local_68.f_10 = 16;
							}
						}
						else
						{
							Local_68.f_18 = (MISC::GET_GAME_TIMER() - 5000);
							Local_68.f_10 = 13;
						}
					}
					else
					{
						Local_68.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_68.f_10 = 13;
					}
					break;
				case 16:
					PED::SET_PED_RESET_FLAG(Local_68.f_9, 237, true);
					if (!__LIB_0__::func_695(Local_71[0 /*6*/]))
					{
						Local_68.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_68.f_10 = 13;
					}
					else if ((((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_71[0 /*6*/], true) || PED::IS_PED_BEING_JACKED(Local_68.f_9)) || !__LIB_0__::func_725(Local_71[0 /*6*/], Local_71[0 /*6*/].f_1, 3f, 1)) || !__LIB_14__::func_697(ENTITY::GET_ENTITY_HEADING(Local_71[0 /*6*/]), Local_71[0 /*6*/].f_4, 20f)) || func_372(Local_71[0 /*6*/], 2))
					{
						Local_68.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_68.f_10 = 13;
					}
					else if (PED::IS_PED_SITTING_IN_VEHICLE(Local_68.f_9, Local_71[0 /*6*/]))
					{
						Local_68.f_10 = 33;
					}
					else if (!__LIB_6__::func_572(Local_68.f_9, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
					{
						Local_68.f_10 = 15;
					}
					break;
				case 17:
					if (__LIB_0__::func_695(Local_71[0 /*6*/]) && PED::IS_PED_SITTING_IN_VEHICLE(Local_68.f_9, Local_71[0 /*6*/]))
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_68.f_9, Local_71[0 /*6*/], PLAYER::PLAYER_PED_ID(), 8, 30f, 786468, 350f, 30f, true);
						PED::SET_PED_CONFIG_FLAG(Local_68.f_9, 173, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
						Local_68.f_10 = 18;
					}
					else if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_68.f_9))
					{
						Local_68.f_10 = 13;
					}
					break;
				case 18:
					if (!__LIB_6__::func_572(Local_68.f_9, joaat("SCRIPT_TASK_VEHICLE_MISSION")))
					{
						Local_68.f_10 = 17;
					}
					break;
				case 19:
					TASK::CLEAR_PED_TASKS(Local_68.f_9);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_68.f_9, 5, false);
					PED::SET_PED_COWER_HASH(Local_68.f_9, "CODE_HUMAN_STAND_COWER");
					TASK::TASK_COWER(Local_68.f_9, -1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
					Local_68.f_10 = 20;
					break;
				case 20:
					if (!PED::IS_PED_RAGDOLL(Local_68.f_9))
					{
						if (!__LIB_6__::func_572(Local_68.f_9, joaat("SCRIPT_TASK_COWER")))
						{
							Local_68.f_10 = 19;
						}
					}
					break;
				case 21:
					if (func_371(Local_68.f_9, Local_68.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_370())
					{
						Local_68.f_10 = 23;
					}
					else if (PED::DOES_GROUP_EXIST(__LIB_0__::func_495()))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_68.f_9, joaat("SCRIPT_TASK_HANDS_UP")) == 1)
						{
							TASK::UPDATE_TASK_HANDS_UP_DURATION(Local_68.f_9, 500);
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_68.f_9);
							TASK::CLEAR_PED_SECONDARY_TASK(Local_68.f_9);
						}
						if (!PED::IS_PED_GROUP_MEMBER(Local_68.f_9, __LIB_0__::func_495()))
						{
							PED::SET_PED_AS_GROUP_MEMBER(Local_68.f_9, __LIB_0__::func_495());
						}
						PED::SET_GROUP_FORMATION(__LIB_0__::func_495(), 0);
						PED::SET_GROUP_FORMATION_SPACING(__LIB_0__::func_495(), 1.5f, 3.5f, -1f);
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Local_68.f_9, 0);
						TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_68.f_9, true);
						TASK::SET_PED_PATH_CAN_USE_LADDERS(Local_68.f_9, true);
						TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_68.f_9, true);
						TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_68.f_9, true);
						TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_68.f_9, false);
						TASK::SET_PED_PATH_AVOID_FIRE(Local_68.f_9, true);
						PED::SET_PED_CONFIG_FLAG(Local_68.f_9, 167, true);
						PED::SET_PED_CONFIG_FLAG(Local_68.f_9, 118, true);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_68.f_9, true);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_68.f_9, true, 1);
						PED::SET_PED_CONFIG_FLAG(Local_68.f_9, 42, true);
						PED::SET_PED_DIES_IN_WATER(Local_68.f_9, true);
						PED::SET_PED_DIES_IN_SINKING_VEHICLE(Local_68.f_9, true);
						PED::SET_PED_MAX_TIME_IN_WATER(Local_68.f_9, 2f);
						PED::SET_PED_MAX_TIME_UNDERWATER(Local_68.f_9, 2f);
						TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_68.f_9, true);
						PED::SET_PED_CONFIG_FLAG(Local_68.f_9, 118, true);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_68.f_9, 1, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_68.f_9, 17, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_68.f_9, 0, false);
						PED::SET_PED_RESET_FLAG(Local_68.f_9, 237, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
						Local_68.f_10 = 22;
					}
					break;
				case 22:
					if (func_371(Local_68.f_9, Local_68.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_370())
					{
						Local_68.f_10 = 23;
					}
					else
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (__LIB_14__::func_734())
							{
								iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (!PED::IS_PED_IN_VEHICLE(Local_68.f_9, iVar1, false))
								{
									fVar4 = ENTITY::GET_ENTITY_SPEED(iVar1);
									if (fVar4 < 1.75f && __LIB_0__::func_725(Local_68.f_9, Local_329, 8f, 1))
									{
										if (!__LIB_6__::func_572(Local_68.f_9, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
										{
											iVar2 = -1;
											if (VEHICLE::ARE_ANY_VEHICLE_SEATS_FREE(iVar1))
											{
												if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar1, 0, false) && VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(Local_68.f_9, iVar1, 0, true, false))
												{
													iVar2 = 0;
												}
												else
												{
													iVar2 = -2;
												}
											}
											if (iVar2 != -1)
											{
												TASK::TASK_ENTER_VEHICLE(Local_68.f_9, iVar1, 25000, iVar2, 2f, 1048577, 0);
											}
										}
										else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_68.f_9))
										{
											if (PED::GET_VEHICLE_PED_IS_ENTERING(Local_68.f_9) != iVar1)
											{
												TASK::CLEAR_PED_TASKS(Local_68.f_9);
											}
										}
									}
									else if (__LIB_6__::func_572(Local_68.f_9, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
									{
										if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_68.f_9))
										{
											TASK::CLEAR_PED_TASKS(Local_68.f_9);
										}
									}
								}
							}
							else if (__LIB_6__::func_572(Local_68.f_9, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
							{
								TASK::CLEAR_PED_TASKS(Local_68.f_9);
							}
						}
						else if (__LIB_6__::func_572(Local_68.f_9, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
						{
							TASK::CLEAR_PED_TASKS(Local_68.f_9);
						}
						if (PED::IS_PED_HEADTRACKING_PED(Local_68.f_9, PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_68.f_9))
							{
								TASK::TASK_CLEAR_LOOK_AT(Local_68.f_9);
							}
						}
						else if (!PED::IS_PED_IN_ANY_VEHICLE(Local_68.f_9, true))
						{
							if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_68.f_9))
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_68.f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							}
						}
						PED::SET_PED_RESET_FLAG(Local_68.f_9, 237, true);
					}
					break;
				case 23:
					if (func_371(Local_68.f_9, Local_68.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_370())
					{
						if (PED::IS_PED_IN_GROUP(Local_68.f_9))
						{
							PED::REMOVE_PED_FROM_GROUP(Local_68.f_9);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_68.f_9, false, 1);
							PED::SET_PED_CONFIG_FLAG(Local_68.f_9, 42, false);
							PED::SET_PED_CONFIG_FLAG(Local_68.f_9, 118, true);
						}
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_68.f_9, false);
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (__LIB_6__::func_572(Local_68.f_9, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
							{
								TASK::CLEAR_PED_TASKS(Local_68.f_9);
							}
						}
						if (((!PED::IS_PED_RAGDOLL(Local_68.f_9) && !PED::IS_PED_BEING_STUNNED(Local_68.f_9, 0)) && !PED::IS_PED_BEING_JACKED(Local_68.f_9)) && !__LIB_6__::func_572(Local_68.f_9, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_68.f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							if ((!__LIB_14__::func_695(Local_68.f_19, 10) && __LIB_0__::func_725(Local_68.f_9, Local_329, 50f, 1)) || !__LIB_14__::func_684(iLocal_139, 2000))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_68.f_9, false))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(Local_68.f_9, 0, 0);
								}
								else if (((!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_68.f_9)) && !func_370()) || ENTITY::IS_ENTITY_IN_WATER(Local_68.f_9))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_68.f_9, PLAYER::PLAYER_PED_ID(), -1);
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(Local_68.f_9, joaat("SCRIPT_TASK_HANDS_UP")) == 1)
								{
									TASK::UPDATE_TASK_HANDS_UP_DURATION(Local_68.f_9, -1);
								}
								else
								{
									TASK::TASK_HANDS_UP(Local_68.f_9, -1, PLAYER::PLAYER_PED_ID(), -1, 0);
								}
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(Local_68.f_9, false))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_68.f_9, PLAYER::PLAYER_PED_ID(), -1);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
							Local_68.f_10 = 24;
						}
					}
					else if (!iLocal_108)
					{
						Local_68.f_10 = 21;
					}
					else
					{
						Local_68.f_10 = 25;
					}
					break;
				case 24:
					if (func_371(Local_68.f_9, Local_68.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_370())
					{
						if (!__LIB_6__::func_572(Local_68.f_9, joaat("SCRIPT_TASK_HANDS_UP")))
						{
							if (!__LIB_6__::func_572(Local_68.f_9, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_68.f_9, false))
								{
									if (!__LIB_14__::func_695(Local_68.f_19, 10) && __LIB_0__::func_725(Local_68.f_9, Local_329, 50f, 1))
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(Local_68.f_9, 0, 0);
										Local_68.f_10 = 23;
									}
								}
								else
								{
									Local_68.f_10 = 23;
								}
							}
							else if (!__LIB_14__::func_695(Local_68.f_19, 10) && __LIB_0__::func_725(Local_68.f_9, Local_329, 50f, 1))
							{
								if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_68.f_9)) || func_370())
								{
									Local_68.f_10 = 23;
								}
							}
						}
					}
					else if (!iLocal_108)
					{
						Local_68.f_10 = 21;
					}
					else
					{
						Local_68.f_10 = 25;
					}
					break;
				case 25:
					if (func_371(Local_68.f_9, Local_68.f_19, 100f, 1, 1090519040, 1097859072, 0))
					{
						Local_68.f_10 = 23;
					}
					else
					{
						if (PED::IS_PED_IN_GROUP(Local_68.f_9))
						{
							PED::REMOVE_PED_FROM_GROUP(Local_68.f_9);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_68.f_9, false, 1);
							PED::SET_PED_CONFIG_FLAG(Local_68.f_9, 42, false);
						}
						TASK::CLEAR_PED_TASKS(Local_68.f_9);
						TASK::TASK_LOOK_AT_ENTITY(Local_68.f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
						Local_68.f_10 = 26;
					}
					break;
				case 26:
					if (func_371(Local_68.f_9, Local_68.f_19, 100f, 1, 1090519040, 1097859072, 0))
					{
						Local_68.f_10 = 23;
					}
					else if (ENTITY::IS_ENTITY_IN_WATER(Local_68.f_9))
					{
						TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_68.f_9, true);
						TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_68.f_9, false);
					}
					else if ((!PED::IS_PED_RAGDOLL(Local_68.f_9) && !TASK::IS_PED_GETTING_UP(Local_68.f_9)) && PED::IS_PED_ON_FOOT(Local_68.f_9))
					{
						if (!PED::IS_PED_FACING_PED(Local_68.f_9, PLAYER::PLAYER_PED_ID(), 45f))
						{
							if (!__LIB_6__::func_572(Local_68.f_9, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_68.f_9, PLAYER::PLAYER_PED_ID(), -1);
							}
						}
					}
					break;
				case 27:
					break;
				case 28:
					break;
				case 33:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
					iLocal_134 = MISC::GET_GAME_TIMER();
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_68.f_9, true, 1);
					Local_68.f_10 = 34;
					break;
				case 34:
					break;
				}
			}
	}
}

int func_370()//Position - 0x2C33C
{
	if (!iLocal_82)
	{
		return 1;
	}
	if (__LIB_14__::func_733(sLocal_145, 0))
	{
		return 1;
	}
	if (iLocal_58 != 3 && iLocal_58 != 6)
	{
		return 1;
	}
	if (TASK::IS_PED_GETTING_UP(Local_68.f_9) || PED::IS_PED_RAGDOLL(Local_68.f_9))
	{
		iLocal_139 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (!__LIB_14__::func_684(iLocal_139, 2000))
	{
		return 1;
	}
	return 0;
}

int func_371(int iParam0, int iParam1, float fParam2, bool bParam3, float fParam4, float fParam5, bool bParam6)//Position - 0x2C3A9
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	if (__LIB_0__::func_692(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		if (MISC::IS_BULLET_IN_AREA(Var0, fParam4, true))
		{
			return 1;
		}
		if (__LIB_0__::func_725(iParam0, Local_329, fParam2, 1))
		{
			if (!__LIB_14__::func_695(iParam1, 10))
			{
				if (bParam6)
				{
					if (__LIB_14__::func_696(1, 0, 1))
					{
						if (WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RELOADING(PLAYER::PLAYER_PED_ID()))
						{
							return 1;
						}
					}
				}
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
				{
					return 1;
				}
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						return 1;
					}
					if (bParam3)
					{
						if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iParam0, 45f))
							{
								return 1;
							}
						}
					}
				}
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
				if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
				if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
			return 1;
		}
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID()) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 57))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, fParam5))
		{
			return 1;
		}
		Var1 = { Var0 };
		Var2 = { Var1 };
		Var1.f_0 = (Var1.f_0 - fParam5);
		Var1.f_1 = (Var1.f_1 - fParam5);
		Var1.f_2 = (Var1.f_2 - fParam5);
		Var2.f_0 = (Var2.f_0 + fParam5);
		Var2.f_1 = (Var2.f_1 + fParam5);
		Var2.f_2 = (Var2.f_2 + fParam5);
		if (MISC::IS_PROJECTILE_IN_AREA(Var1, Var2, true))
		{
			return 1;
		}
	}
	return 0;
}

int func_372(int iParam0, int iParam1)//Position - 0x2C560
{
	int iVar0;
	if (__LIB_0__::func_695(iParam0))
	{
		iVar0 = 0;
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, false))
		{
			iVar0++;
		}
		if (iVar0 >= iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_387()//Position - 0x2CA89
{
	if (__LIB_1__::func_504(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_328, 100f))
	{
		if (!__LIB_6__::func_181())
		{
			CUTSCENE::REQUEST_CUTSCENE(&Local_324, 8);
			func_68();
			iLocal_111 = 1;
		}
	}
	else if (iLocal_111)
	{
		if (!__LIB_1__::func_504(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_328, 120f))
		{
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_111 = 0;
			}
		}
		else
		{
			func_68();
		}
	}
	if (iLocal_111)
	{
		if (__LIB_6__::func_181())
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_111 = 0;
		}
	}
}

void func_389()//Position - 0x2CB1F
{
	func_38();
	func_387();
	if (__LIB_0__::func_692(Local_68.f_9))
	{
		__LIB_14__::func_777(Local_68.f_9, &iLocal_131, 1126825984, 7);
		__LIB_14__::func_780(Local_68.f_9, &(Local_68.f_19), 1126825984, 7);
		func_366();
		switch (iLocal_60)
		{
			case 0:
				__LIB_0__::func_325();
				iLocal_84 = 0;
				iLocal_99 = 0;
				iLocal_60 = 1;
				break;
			case 1:
				if (!iLocal_108)
				{
					if (__LIB_0__::func_501("BBS_05", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_05");
					}
					__LIB_0__::func_714(&(Local_68.f_8));
					if (!__LIB_0__::func_725(Local_68.f_9, Local_329, 25f, 1))
					{
						if (Local_68.f_10 == 21 || Local_68.f_10 == 22)
						{
							Local_68.f_18 = MISC::GET_GAME_TIMER();
							Local_68.f_10 = 25;
						}
						if (__LIB_14__::func_695(iLocal_131, 10))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_14__::func_695(iLocal_131, 10))
								{
									if (__LIB_14__::func_753(&uLocal_154, cLocal_148, "BBC_T9", 4, 0, 0, 0))
									{
										iLocal_120 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						iLocal_108 = 1;
					}
					else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						if (__LIB_0__::func_501("BBS_COPS", 0, 0))
						{
							HUD::CLEAR_THIS_PRINT("BBS_COPS");
						}
						iLocal_84 = 1;
						if (!__LIB_0__::func_75())
						{
							iLocal_60 = 2;
						}
					}
					else if (!iLocal_83)
					{
						if (!__LIB_14__::func_733(sLocal_145, 1))
						{
							if (__LIB_14__::func_753(&uLocal_154, cLocal_148, "BBC_T5", 4, 0, 0, 0))
							{
								iLocal_83 = 1;
							}
						}
					}
					else if (!iLocal_99)
					{
						if (!__LIB_0__::func_501("BBS_COPS", 0, 0))
						{
							__LIB_0__::func_229("BBS_COPS", 7500, 0);
							iLocal_99 = 1;
						}
						else
						{
							func_390();
						}
					}
					else
					{
						func_390();
					}
				}
				else if (__LIB_0__::func_725(Local_68.f_9, Local_329, 8f, 1))
				{
					if (Local_68.f_10 == 25 || Local_68.f_10 == 26)
					{
						Local_68.f_18 = MISC::GET_GAME_TIMER();
						Local_68.f_10 = 21;
					}
					iLocal_99 = 0;
					if (__LIB_0__::func_501("BBS_05", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_05");
					}
					if (!__LIB_0__::func_75())
					{
						if (Local_68.f_10 == 21 || Local_68.f_10 == 22)
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
							{
								if (__LIB_14__::func_753(&uLocal_154, cLocal_148, "BBC_T10", 4, 0, 0, 0))
								{
									iLocal_120 = MISC::GET_GAME_TIMER();
								}
							}
							else if (__LIB_14__::func_753(&uLocal_154, cLocal_147, "BB1_J5", 4, 0, 0, 0))
							{
								iLocal_120 = MISC::GET_GAME_TIMER();
							}
						}
					}
					iLocal_108 = 0;
				}
				else
				{
					if (__LIB_0__::func_501("BBS_COPS", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_COPS");
					}
					if (!HUD::DOES_BLIP_EXIST(Local_68.f_8))
					{
						Local_68.f_8 = __LIB_14__::func_661(Local_68.f_9, 1, 1, 5);
					}
					if (!iLocal_100)
					{
						__LIB_0__::func_229("BBS_05", 7500, 1);
						iLocal_100 = 1;
					}
				}
				if (__LIB_14__::func_763(&(Local_68.f_9)))
				{
					iLocal_112 = 1;
					iLocal_60 = 2;
				}
				break;
			case 2:
				if (__LIB_0__::func_501("BBS_05", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("BBS_05");
				}
				iLocal_84 = 1;
				__LIB_0__::func_714(&(Local_68.f_8));
				if (iLocal_112)
				{
					__LIB_14__::func_686(7);
				}
				else
				{
					if (__LIB_0__::func_501("BBS_COPS", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_COPS");
					}
					__LIB_14__::func_686(3);
				}
				break;
			}
	}
}

void func_390()//Position - 0x2CE31
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (HUD::IS_MESSAGE_BEING_DISPLAYED() && MISC::GET_PROFILE_SETTING(203) != 0)
	{
		iVar1 = 1;
	}
	if (__LIB_0__::func_692(Local_68.f_9))
	{
		if (__LIB_0__::func_75())
		{
			iLocal_120 = MISC::GET_GAME_TIMER();
		}
		if (!iLocal_88)
		{
			if (__LIB_14__::func_753(&uLocal_154, cLocal_147, "BB1_J6", 4, 0, 0, 0))
			{
				iLocal_88 = 1;
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_68.f_9, false) && PED::GET_VEHICLE_PED_IS_IN(Local_68.f_9, false) == iVar0)
			{
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (!iLocal_106)
					{
						if (!__LIB_0__::func_75())
						{
							iLocal_119 = MISC::GET_GAME_TIMER();
							iLocal_106 = 1;
						}
					}
					else if (!iLocal_85[0])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_119) > 7500)
						{
							func_393(0);
						}
					}
					else if (!iLocal_85[1])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_119) > 10000)
						{
							func_393(1);
						}
					}
					else if (!iLocal_85[2])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_119) > 10000)
						{
							func_393(2);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (ENTITY::GET_ENTITY_SPEED(iVar0) < 0.5f)
						{
							if (!iLocal_93)
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_14__::func_684(iLocal_137, 3500))
									{
										if (__LIB_14__::func_753(&uLocal_154, cLocal_147, "BB1_STOP", 4, 0, 0, 0))
										{
											iLocal_93 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_93)
						{
							if (!__LIB_14__::func_733("BB1_STOP", 1))
							{
								iLocal_137 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							iLocal_137 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if (!iLocal_84)
				{
					if (__LIB_14__::func_753(&uLocal_154, cLocal_147, "BB1_J9", 4, 0, 0, 0))
					{
						iLocal_84 = 1;
					}
				}
			}
			else
			{
				if (!iLocal_101)
				{
					if (!__LIB_14__::func_734())
					{
						__LIB_0__::func_151("BBS_VH1", -1);
						iLocal_101 = 1;
					}
				}
				iLocal_137 = MISC::GET_GAME_TIMER();
			}
			iLocal_89 = 0;
			iLocal_90 = 0;
		}
		else
		{
			iLocal_137 = MISC::GET_GAME_TIMER();
			iLocal_93 = 0;
			if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
				if (!iLocal_89)
				{
					if (__LIB_14__::func_734())
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_68.f_9, false))
						{
							if (!__LIB_14__::func_733("BBC_T6", 1))
							{
								if (__LIB_14__::func_753(&uLocal_154, cLocal_148, "BBC_T6", 4, iVar1, 0, 0))
								{
									iLocal_89 = 1;
								}
							}
						}
						__LIB_14__::func_703("BBS_VH1", 1);
					}
					else if (!__LIB_14__::func_733("BBC_T8", 1) && !__LIB_14__::func_733("BB1_WTF", 1))
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) < 5)
						{
							if (__LIB_14__::func_753(&uLocal_154, cLocal_148, "BBC_T8", 4, iVar1, 0, 0))
							{
								iLocal_89 = 1;
							}
						}
						else if (__LIB_14__::func_753(&uLocal_154, cLocal_147, "BB1_WTF", 4, iVar1, 0, 0))
						{
							iLocal_89 = 1;
						}
					}
				}
				else if (!iLocal_92)
				{
					if (__LIB_14__::func_737(&iVar0))
					{
						if ((!__LIB_14__::func_733("BB1_JACK", 1) && !__LIB_14__::func_733("BBC_T6", 1)) && !__LIB_14__::func_733("BBC_T8", 1))
						{
							if (__LIB_14__::func_753(&uLocal_154, cLocal_147, "BB1_JACK", 4, iVar1, 0, 0))
							{
								iLocal_92 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_89 = 0;
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_68.f_9, false))
				{
					if (!iLocal_90)
					{
						if (!__LIB_14__::func_733("BBC_T7", 1) && !__LIB_14__::func_733("BB1_OUT", 1))
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) < 5)
							{
								if (__LIB_14__::func_753(&uLocal_154, cLocal_148, "BBC_T7", 4, iVar1, 0, 0))
								{
									iLocal_90 = 1;
								}
							}
							else if (__LIB_14__::func_753(&uLocal_154, cLocal_147, "BB1_OUT", 4, iVar1, 0, 0))
							{
								iLocal_90 = 1;
							}
						}
					}
				}
				else if (Local_68.f_10 == 24 && __LIB_6__::func_572(Local_68.f_9, joaat("SCRIPT_TASK_HANDS_UP")))
				{
					if (__LIB_0__::func_725(Local_68.f_9, Local_329, 25f, 1))
					{
						if (!__LIB_14__::func_733("BB1_J10", 1))
						{
							if (__LIB_14__::func_684(iLocal_121, MISC::GET_RANDOM_INT_IN_RANGE(2500, 5000)))
							{
								if (__LIB_0__::func_75())
								{
									__LIB_0__::func_429();
								}
								if (__LIB_14__::func_753(&uLocal_154, cLocal_147, "BB1_J10", 4, 0, 0, 0))
								{
									iLocal_121 = MISC::GET_GAME_TIMER();
								}
							}
						}
						else
						{
							iLocal_121 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else
				{
					iLocal_121 = 0;
					if (!iLocal_84)
					{
						if (__LIB_14__::func_753(&uLocal_154, cLocal_147, "BB1_J9", 4, 0, 0, 0))
						{
							iLocal_120 = MISC::GET_GAME_TIMER();
							iLocal_84 = 1;
						}
					}
					if (!__LIB_0__::func_75())
					{
						if (__LIB_14__::func_684(iLocal_120, MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000)))
						{
							if (!__LIB_0__::func_725(Local_68.f_9, Local_329, 20f, 1))
							{
								if (__LIB_14__::func_753(&uLocal_154, cLocal_147, "BB1_J4", 4, 0, 0, 0))
								{
									iLocal_120 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_393(int iParam0)//Position - 0x2D2FF
{
	if (!iLocal_85[iParam0])
	{
		if (__LIB_14__::func_753(&uLocal_154, cLocal_147, sLocal_146[iParam0], 4, 0, 0, 0))
		{
			iLocal_85[iParam0] = 1;
			iLocal_106 = 0;
			iLocal_119 = 0;
			iLocal_88 = 1;
		}
	}
}

void func_394()//Position - 0x2D33E
{
	func_38();
	func_387();
	if (__LIB_0__::func_692(Local_68.f_9))
	{
		__LIB_14__::func_777(Local_68.f_9, &iLocal_131, 1126825984, 7);
		__LIB_14__::func_780(Local_68.f_9, &(Local_68.f_19), 1126825984, 7);
		func_366();
		switch (iLocal_60)
		{
			case 0:
				iLocal_60 = 1;
				break;
			case 1:
				if (!iLocal_108)
				{
					if (__LIB_0__::func_501("BBS_05", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_05");
					}
					__LIB_0__::func_714(&(Local_68.f_8));
					if (!__LIB_0__::func_725(Local_68.f_9, Local_329, 25f, 1))
					{
						if (Local_68.f_10 == 21 || Local_68.f_10 == 22)
						{
							Local_68.f_18 = MISC::GET_GAME_TIMER();
							Local_68.f_10 = 25;
						}
						if (__LIB_14__::func_695(iLocal_131, 10))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_14__::func_695(iLocal_131, 10))
								{
									if (__LIB_14__::func_753(&uLocal_154, cLocal_148, "BBC_T9", 4, 0, 0, 0))
									{
										iLocal_120 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						iLocal_83 = 1;
						iLocal_108 = 1;
					}
					else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
						iLocal_83 = 1;
						iLocal_60 = 2;
					}
					else
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_114))
						{
							if (iLocal_96)
							{
								iLocal_114 = __LIB_14__::func_704(Local_328, 5, 1);
							}
						}
						if (!iLocal_83)
						{
							if (!__LIB_14__::func_733(sLocal_145, 1))
							{
								if (__LIB_14__::func_753(&uLocal_154, cLocal_148, "BBC_T5", 4, 0, 0, 0))
								{
									iLocal_83 = 1;
								}
							}
						}
						else if (!iLocal_96)
						{
							if (!__LIB_0__::func_75())
							{
								__LIB_0__::func_229("BBS_DROP", 7500, 0);
								iLocal_120 = MISC::GET_GAME_TIMER();
								iLocal_96 = 1;
							}
						}
						else
						{
							func_390();
							__LIB_14__::func_738(&Local_75, Local_329, &iLocal_122, 5000, 1101004800);
						}
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_328, 4f, 4f, 2f, true, true, 0))
						{
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2732.8152f, 4143.618f, 42.02822f, 2724.603f, 4144.8027f, 46.330837f, 9f, false, true, 0))
						{
							iLocal_60 = 2;
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_328, 6.5f, 1))
							{
								iLocal_60 = 2;
							}
						}
						else if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_328, 2.5f, 1))
						{
							iLocal_60 = 2;
						}
					}
				}
				else
				{
					__LIB_0__::func_714(&iLocal_114);
					if (__LIB_0__::func_501("BBS_DROP", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_DROP");
					}
					if (__LIB_0__::func_725(Local_68.f_9, Local_329, 8f, 1))
					{
						if (Local_68.f_10 == 25 || Local_68.f_10 == 26)
						{
							Local_68.f_18 = MISC::GET_GAME_TIMER();
							Local_68.f_10 = 21;
						}
						if (__LIB_0__::func_501("BBS_05", 0, 0))
						{
							HUD::CLEAR_THIS_PRINT("BBS_05");
						}
						if (!__LIB_0__::func_75())
						{
							if (Local_68.f_10 == 21 || Local_68.f_10 == 22)
							{
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
								{
									if (__LIB_14__::func_753(&uLocal_154, cLocal_148, "BBC_T10", 4, 0, 0, 0))
									{
										iLocal_120 = MISC::GET_GAME_TIMER();
									}
								}
								else if (__LIB_14__::func_753(&uLocal_154, cLocal_147, "BB1_J5", 4, 0, 0, 0))
								{
									iLocal_120 = MISC::GET_GAME_TIMER();
								}
							}
						}
						iLocal_108 = 0;
					}
					else
					{
						if (!HUD::DOES_BLIP_EXIST(Local_68.f_8))
						{
							Local_68.f_8 = __LIB_14__::func_661(Local_68.f_9, 1, 1, 5);
						}
						if (!iLocal_100)
						{
							__LIB_0__::func_229("BBS_05", 7500, 1);
							iLocal_100 = 1;
						}
					}
				}
				if (!bLocal_105)
				{
					bLocal_105 = func_395(Local_329, Local_63, 180f);
				}
				if (__LIB_14__::func_763(&(Local_68.f_9)))
				{
					iLocal_112 = 1;
					iLocal_60 = 2;
				}
				break;
			case 2:
				__LIB_0__::func_714(&iLocal_114);
				if (__LIB_0__::func_501("BBS_DROP", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("BBS_DROP");
				}
				if (iLocal_112)
				{
					__LIB_14__::func_686(7);
				}
				else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_14__::func_686(6);
				}
				else
				{
					__LIB_0__::func_714(&(Local_68.f_8));
					if (__LIB_0__::func_501("BBS_05", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_05");
					}
					if (!bLocal_105)
					{
						bLocal_105 = func_395(Local_329, Local_63, 0f);
					}
					__LIB_14__::func_686(4);
				}
				break;
			}
	}
}

int func_395(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x2D73C
{
	int iVar0;
	if (!__LIB_0__::func_874(Param0, Param1, fParam2))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		if (iLocal_130 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_130 - 1))
			{
				__LIB_0__::func_124(&(Local_70[iVar0 /*19*/]), 1, 0, 1);
				iVar0++;
			}
		}
		if (iLocal_126 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_126 - 1))
			{
				__LIB_0__::func_106(&(Local_71[iVar0 /*6*/]));
				iVar0++;
			}
		}
		__LIB_0__::func_122(&Local_72, 0);
		if (iLocal_125 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_125 - 1))
			{
				__LIB_0__::func_122(&(Local_73[iVar0 /*9*/]), 0);
				iVar0++;
			}
		}
		if (iLocal_128 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_128 - 1))
			{
				__LIB_0__::func_733(&(Local_74[iVar0 /*7*/]));
				iVar0++;
			}
		}
	}
	return 0;
}

void func_400()//Position - 0x2D92C
{
	bool bVar0;
	bVar0 = false;
	if (__LIB_0__::func_692(Local_68.f_9))
	{
		__LIB_14__::func_777(Local_68.f_9, &iLocal_131, 1126825984, 7);
		__LIB_14__::func_780(Local_68.f_9, &(Local_68.f_19), 1126825984, 7);
		func_366();
		switch (iLocal_60)
		{
			case 0:
				if (Local_68.f_10 != 15 && Local_68.f_10 != 16)
				{
					Local_68.f_18 = MISC::GET_GAME_TIMER();
					Local_68.f_10 = 15;
				}
				if (__LIB_0__::func_692(Local_68.f_9))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_68.f_8))
					{
						Local_68.f_8 = __LIB_14__::func_661(Local_68.f_9, 1, 0, 5);
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_68.f_9);
				}
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				__LIB_14__::func_693(&(Local_68.f_8), "", "", &iLocal_123, iLocal_124, 0);
				iLocal_60 = 1;
				break;
			case 1:
				if (!iLocal_107)
				{
					__LIB_14__::func_693(&(Local_68.f_8), "", "", &iLocal_123, iLocal_124, 0);
					__LIB_14__::func_615(&uLocal_44, Local_68.f_9, 0, 0, 1, 1, 1);
					if (Local_68.f_10 == 13 || Local_68.f_10 == 14)
					{
						if (iLocal_133 == -1)
						{
							iLocal_133 = MISC::GET_GAME_TIMER();
						}
						if (iLocal_132 == -1)
						{
							iLocal_132 = MISC::GET_GAME_TIMER();
						}
						else if (__LIB_14__::func_684(iLocal_132, 5000))
						{
							bVar0 = true;
						}
						if (__LIB_14__::func_764(Local_68.f_9, Local_329, bVar0, 0, 1, 170))
						{
							func_330();
							Local_68.f_17 = MISC::GET_GAME_TIMER();
							__LIB_0__::func_345(&uLocal_44, 0, 0);
							iLocal_107 = 1;
						}
						else
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_14__::func_684(iLocal_120, MISC::GET_RANDOM_INT_IN_RANGE(5000, 12000)))
								{
									if (__LIB_0__::func_725(Local_68.f_9, Local_329, 30f, 1))
									{
										if (PED::IS_PED_FLEEING(Local_68.f_9))
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 101) < 30)
											{
												if (__LIB_14__::func_753(&uLocal_154, cLocal_148, "BBC_T13", 4, 0, 0, 0))
												{
													iLocal_120 = MISC::GET_GAME_TIMER();
												}
											}
											else if (__LIB_14__::func_753(&uLocal_154, cLocal_147, "BB1_FLEE", 4, 0, 0, 0))
											{
												iLocal_120 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
							else
							{
								iLocal_120 = MISC::GET_GAME_TIMER();
							}
							__LIB_14__::func_690(Local_68.f_9, Local_329, iLocal_133, 925353388);
						}
					}
					else
					{
						if (Local_68.f_10 == 15 || Local_68.f_10 == 16)
						{
							if (!iLocal_81)
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_0__::func_725(Local_68.f_9, Local_329, 30f, 1))
									{
										if (__LIB_14__::func_753(&uLocal_154, cLocal_147, sLocal_144, 4, 0, 0, 0))
										{
											Local_68.f_17 = MISC::GET_GAME_TIMER();
											iLocal_120 = MISC::GET_GAME_TIMER();
											iLocal_81 = 1;
										}
									}
								}
							}
							if (__LIB_14__::func_764(Local_68.f_9, Local_329, bVar0, 0, 1, 170))
							{
								func_330();
								Local_68.f_17 = MISC::GET_GAME_TIMER();
								__LIB_0__::func_345(&uLocal_44, 0, 0);
								iLocal_107 = 1;
							}
						}
						if (__LIB_0__::func_695(Local_71[0 /*6*/]))
						{
							if ((Local_68.f_10 == 34 || Local_68.f_10 == 17) || Local_68.f_10 == 18)
							{
								if (func_405(Local_68.f_9, Local_71[0 /*6*/], &iLocal_134, 2))
								{
									if (!__LIB_0__::func_75())
									{
										func_330();
										Local_68.f_17 = MISC::GET_GAME_TIMER();
										__LIB_0__::func_345(&uLocal_44, 0, 0);
										iLocal_107 = 1;
									}
								}
								else
								{
									if (func_404(Local_68.f_9, Local_71[0 /*6*/], Local_71[0 /*6*/].f_5, &Local_330, &iLocal_118, iLocal_129))
									{
										if (Local_68.f_10 == 34)
										{
											Local_68.f_10 = 17;
										}
									}
									__LIB_14__::func_655(Local_68.f_8, Local_68.f_9, 150f, 0.65f, 0);
									func_402(Local_68.f_9, Local_71[0 /*6*/], Local_329);
								}
							}
						}
						else
						{
							func_330();
							Local_68.f_17 = MISC::GET_GAME_TIMER();
							__LIB_0__::func_345(&uLocal_44, 0, 0);
							iLocal_107 = 1;
						}
					}
				}
				else
				{
					func_330();
					if (!__LIB_0__::func_725(Local_68.f_9, Local_329, 10f, 1))
					{
						if (!iLocal_97)
						{
							if (!__LIB_14__::func_733(sLocal_145, 1))
							{
								__LIB_14__::func_732(&(Local_68.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_123, &iLocal_124, 1, 1);
								iLocal_97 = 1;
							}
						}
						else
						{
							__LIB_14__::func_693(&(Local_68.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_123, iLocal_124, 1);
						}
					}
					else
					{
						if (!iLocal_82)
						{
							if (!PED::IS_PED_RAGDOLL(Local_68.f_9) && !PED::IS_PED_IN_ANY_VEHICLE(Local_68.f_9, false))
							{
								if (__LIB_0__::func_501("BBS_APPSUS", 0, 0) || __LIB_0__::func_501("BBS_APPSUS2", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								if (!__LIB_0__::func_75())
								{
									__LIB_0__::func_429();
								}
								if (__LIB_14__::func_753(&uLocal_154, cLocal_147, sLocal_145, 4, 0, 0, 0))
								{
									iLocal_82 = 1;
								}
							}
						}
						else if (!__LIB_0__::func_75())
						{
							iLocal_60 = 2;
						}
						__LIB_14__::func_693(&(Local_68.f_8), "", "", &iLocal_123, iLocal_124, 0);
					}
					if (__LIB_14__::func_763(&(Local_68.f_9)))
					{
						iLocal_112 = 1;
						iLocal_60 = 2;
					}
				}
				break;
			case 2:
				if (__LIB_0__::func_501("BBS_APPSUS", 0, 0) || __LIB_0__::func_501("BBS_APPSUS2", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				MISC::SET_INSTANCE_PRIORITY_HINT(0);
				iLocal_82 = 1;
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_319);
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_319, joaat("PLAYER"));
				__LIB_0__::func_714(&(Local_68.f_8));
				func_330();
				Local_68.f_17 = MISC::GET_GAME_TIMER();
				__LIB_0__::func_345(&uLocal_44, 0, 0);
				__LIB_14__::func_705(1, &uLocal_141);
				if (iLocal_112)
				{
					__LIB_14__::func_686(7);
				}
				else
				{
					__LIB_14__::func_686(3);
				}
				break;
			}
	}
}

void func_402(int iParam0, int iParam1, struct<3> Param2)//Position - 0x2DF1B
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	fVar1 = 64f;
	fVar2 = 1600f;
	fVar3 = 4900f;
	fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param2);
	if (fVar4 > fVar3 && !ENTITY::IS_ENTITY_ON_SCREEN(iParam1))
	{
		fVar0 = 12f;
	}
	else if (fVar4 > fVar2)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			fVar0 = 10f;
		}
		else
		{
			fVar0 = 18f;
		}
	}
	else if (fVar4 < fVar1)
	{
		fVar0 = 28f;
	}
	else
	{
		fVar0 = 22f;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, false) == iParam0)
	{
		TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0, fVar0);
	}
}

int func_404(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5)//Position - 0x2E117
{
	if (iLocal_118 >= iParam5)
	{
		return 1;
	}
	if (!__LIB_0__::func_725(iParam1, *(uParam3[*iParam4 /*3*/]), 15f, 1))
	{
		if (!__LIB_6__::func_572(iParam0, joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD")) && !__LIB_6__::func_572(iParam0, joaat("SCRIPT_TASK_VEHICLE_GOTO_NAVMESH")))
		{
			if (iLocal_118 < 7)
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(iParam0, iParam1, *(uParam3[*iParam4 /*3*/]), 35f, 0, iParam2, 786468, 0f, 2f);
			}
			else
			{
				TASK::TASK_VEHICLE_GOTO_NAVMESH(iParam0, iParam1, *(uParam3[*iParam4 /*3*/]), 35f, 4980772, 0f);
			}
		}
	}
	else
	{
		*iParam4++;
		if (iLocal_118 >= iParam5)
		{
			return 1;
		}
		else if (iLocal_118 < 7)
		{
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(iParam0, iParam1, *(uParam3[*iParam4 /*3*/]), 35f, 0, iParam2, 786468, 0f, 2f);
		}
		else
		{
			TASK::TASK_VEHICLE_GOTO_NAVMESH(iParam0, iParam1, *(uParam3[*iParam4 /*3*/]), 35f, 4980772, 0f);
		}
	}
	return 0;
}

int func_405(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2E207
{
	if (__LIB_0__::func_692(iParam0))
	{
		if (__LIB_0__::func_695(iParam1))
		{
			if (func_372(iParam1, iParam3))
			{
				TASK::TASK_VEHICLE_TEMP_ACTION(iParam0, iParam1, 4, 2000);
				return (1 || ENTITY::GET_ENTITY_HEALTH(iParam1) < 150);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iParam1, false, true, false);
				if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam1) > 100f)
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam1, 100f);
				}
				VEHICLE::SET_VEHICLE_UNDRIVEABLE(iParam1, true);
				return 1;
			}
			else if (!PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false))
			{
				return 1;
			}
			else if (PED::IS_PED_BEING_STUNNED(iParam0, 0))
			{
				return 1;
			}
			else if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam1, 2, 10000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam1, 3, 20000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam1, 0, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam1, 1, 10000))
			{
				return 1;
			}
			if (VEHICLE::IS_VEHICLE_STOPPED(iParam1))
			{
				if (__LIB_14__::func_684(*iParam2, 3500))
				{
					return 1;
				}
			}
			else
			{
				*iParam2 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_406()//Position - 0x2E30E
{
	if (__LIB_0__::func_692(Local_68.f_9))
	{
		__LIB_14__::func_777(Local_68.f_9, &iLocal_131, 1126825984, 1);
		__LIB_14__::func_780(Local_68.f_9, &(Local_68.f_19), 1126825984, 7);
		func_366();
		switch (iLocal_60)
		{
			case 0:
				if (!HUD::DOES_BLIP_EXIST(Local_68.f_8))
				{
					Local_68.f_8 = __LIB_14__::func_661(Local_68.f_9, 1, 0, 5);
				}
				__LIB_14__::func_732(&(Local_68.f_8), "", "", &iLocal_123, &iLocal_124, 1, 0);
				iLocal_60 = 1;
				break;
			case 1:
				switch (iLocal_61)
				{
					case 2:
						if (!iLocal_87)
						{
							if (__LIB_0__::func_75())
							{
								__LIB_0__::func_429();
							}
							if (__LIB_14__::func_753(&uLocal_154, cLocal_148, "BBC_T14", 4, 0, 0, 0))
							{
								Local_68.f_17 = MISC::GET_GAME_TIMER();
								iLocal_87 = 1;
							}
							__LIB_14__::func_693(&(Local_68.f_8), "", "", &iLocal_123, iLocal_124, 0);
						}
						else if (!iLocal_98)
						{
							if (!__LIB_14__::func_733("BBC_T14", 1))
							{
								__LIB_14__::func_732(&(Local_68.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_123, &iLocal_124, 1, 1);
								iLocal_98 = 1;
							}
						}
						else
						{
							__LIB_14__::func_693(&(Local_68.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_123, iLocal_124, 1);
							if (__LIB_0__::func_725(Local_68.f_9, Local_329, 25f, 1) && __LIB_14__::func_706(Local_68.f_9, Local_329, 10f))
							{
								if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
								{
									if (__LIB_14__::func_757(&(Local_68.f_19)))
									{
										iLocal_61 = 1;
										iLocal_91 = 0;
										if (Local_68.f_10 != 3 && Local_68.f_10 != 4)
										{
											Local_68.f_18 = (MISC::GET_GAME_TIMER() - 50000);
											Local_68.f_10 = 3;
										}
									}
									else if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_68.f_9))
									{
										iLocal_61 = 1;
										iLocal_91 = 0;
										if (Local_68.f_10 != 3 && Local_68.f_10 != 4)
										{
											Local_68.f_18 = (MISC::GET_GAME_TIMER() - 50000);
											Local_68.f_10 = 3;
										}
									}
								}
								else if (func_407(Local_68.f_9, iLocal_131, 0, 1103626240, 1086324736))
								{
									iLocal_61 = 0;
								}
								else if (__LIB_0__::func_725(Local_68.f_9, Local_329, 5f, 1))
								{
									iLocal_61 = 0;
								}
								else if (__LIB_14__::func_757(&(Local_68.f_19)))
								{
									if (__LIB_0__::func_725(Local_68.f_9, Local_329, (25f - 1.5f), 1))
									{
										iLocal_61 = 1;
										iLocal_91 = 0;
										if (Local_68.f_10 != 3 && Local_68.f_10 != 4)
										{
											Local_68.f_18 = (MISC::GET_GAME_TIMER() - 50000);
											Local_68.f_10 = 3;
										}
									}
								}
							}
						}
						if (func_371(Local_68.f_9, Local_68.f_19, 25f, 0, 1090519040, 1097859072, 0))
						{
							iLocal_60 = 2;
						}
						break;
					case 0:
					case 1:
						if (!iLocal_91)
						{
							if (__LIB_0__::func_501("BBS_APHEND", 0, 0) || __LIB_0__::func_501("BBS_APHEND2", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							if (__LIB_0__::func_75())
							{
								__LIB_0__::func_429();
							}
							if (__LIB_14__::func_753(&uLocal_154, cLocal_147, "BB1_J2", 4, 0, 0, 0))
							{
								Local_68.f_17 = MISC::GET_GAME_TIMER();
								iLocal_120 = MISC::GET_GAME_TIMER();
								iLocal_91 = 1;
							}
							__LIB_14__::func_693(&(Local_68.f_8), "", "", &iLocal_123, iLocal_124, 0);
						}
						else if (!iLocal_86)
						{
							if (!__LIB_14__::func_733("BBC_T14", 1) && !__LIB_14__::func_733("BB1_J2", 1))
							{
								if (__LIB_0__::func_501("BBS_APHEND", 0, 0) || __LIB_0__::func_501("BBS_APHEND2", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								if (__LIB_0__::func_75())
								{
									__LIB_0__::func_429();
								}
								if (__LIB_14__::func_753(&uLocal_154, cLocal_148, "BBC_T1", 4, 0, 0, 0))
								{
									Local_68.f_17 = MISC::GET_GAME_TIMER();
									iLocal_86 = 1;
								}
								else if (iLocal_61 == 1)
								{
									if (__LIB_14__::func_684(iLocal_120, 1250))
									{
										Local_68.f_17 = (MISC::GET_GAME_TIMER() - 3000);
										iLocal_86 = 1;
									}
								}
							}
							else
							{
								iLocal_120 = MISC::GET_GAME_TIMER();
							}
							__LIB_14__::func_693(&(Local_68.f_8), "", "", &iLocal_123, iLocal_124, 0);
						}
						else if (Local_68.f_10 != 3 && Local_68.f_10 != 4)
						{
							if (__LIB_14__::func_684(Local_68.f_17, 500))
							{
								Local_68.f_18 = MISC::GET_GAME_TIMER();
								Local_68.f_10 = 3;
								iLocal_60 = 2;
							}
						}
						else
						{
							iLocal_60 = 2;
						}
						if (func_371(Local_68.f_9, Local_68.f_19, 25f, 0, 1090519040, 1097859072, 0))
						{
							iLocal_60 = 2;
						}
						break;
					case 3:
						__LIB_14__::func_693(&(Local_68.f_8), "", "", &iLocal_123, iLocal_124, 0);
						iLocal_60 = 2;
						break;
				}
				break;
			case 2:
				if (Local_68.f_10 != 3 && Local_68.f_10 != 4)
				{
					Local_68.f_18 = (MISC::GET_GAME_TIMER() - 50000);
					Local_68.f_10 = 3;
				}
				Local_68.f_17 = MISC::GET_GAME_TIMER();
				if (__LIB_0__::func_501("BBS_APHEND", 0, 0) || __LIB_0__::func_501("BBS_APHEND2", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				__LIB_14__::func_693(&(Local_68.f_8), "", "", &iLocal_123, iLocal_124, 0);
				iLocal_123 = MISC::GET_GAME_TIMER();
				iLocal_124 = MISC::GET_GAME_TIMER();
				__LIB_14__::func_686(2);
				break;
			}
	}
}

int func_407(int iParam0, int iParam1, bool bParam2, float fParam3, float fParam4)//Position - 0x2E7ED
{
	if (__LIB_0__::func_121(iParam0))
	{
		if (!__LIB_14__::func_695(iParam1, 10))
		{
			if (bParam2)
			{
				if (!__LIB_0__::func_725(Local_68.f_9, Local_329, fParam3, 1))
				{
					return 0;
				}
				if (!__LIB_14__::func_706(iParam0, Local_329, fParam4))
				{
					return 0;
				}
			}
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_410()//Position - 0x2E89D
{
	switch (iLocal_60)
	{
		case 0:
			if (bLocal_102)
			{
				if (__LIB_0__::func_2(0) && !Global_112433)
				{
					__LIB_0__::func_84(800, 0);
				}
			}
			if (!Global_112433)
			{
				iLocal_60 = 1;
			}
			break;
		case 1:
			__LIB_14__::func_783(&Local_63, &uLocal_154);
			if (__LIB_0__::func_692(Local_68.f_9))
			{
				__LIB_14__::func_777(Local_68.f_9, &iLocal_131, 1126825984, 1);
				__LIB_14__::func_780(Local_68.f_9, &(Local_68.f_19), 1126825984, 7);
				func_366();
				if (__LIB_0__::func_725(Local_68.f_9, Local_329, 25f, 1) && __LIB_14__::func_706(Local_68.f_9, Local_329, 10f))
				{
					if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
					{
						if (__LIB_14__::func_757(&(Local_68.f_19)))
						{
							iLocal_61 = 1;
							iLocal_60 = 2;
						}
						else if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_68.f_9))
						{
							iLocal_61 = 1;
							iLocal_60 = 2;
						}
					}
					else if (func_407(Local_68.f_9, iLocal_131, 0, 1103626240, 1086324736))
					{
						iLocal_61 = 0;
						iLocal_60 = 2;
					}
					else if (__LIB_0__::func_725(Local_68.f_9, Local_329, 5f, 1))
					{
						iLocal_61 = 0;
						iLocal_60 = 2;
					}
					else if (__LIB_14__::func_757(&(Local_68.f_19)))
					{
						if (__LIB_0__::func_725(Local_68.f_9, Local_329, (25f - 1.5f), 1))
						{
							iLocal_61 = 1;
							iLocal_60 = 2;
						}
					}
				}
				else if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_68.f_9) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_68.f_9))
				{
					iLocal_61 = 2;
					iLocal_60 = 2;
				}
				if (func_371(Local_68.f_9, Local_68.f_19, 25f, 0, 1090519040, 1097859072, 0))
				{
					iLocal_61 = 3;
					iLocal_60 = 2;
				}
			}
			break;
		case 2:
			if (iLocal_61 == 3)
			{
				__LIB_14__::func_732(&(Local_68.f_8), "", "", &iLocal_123, &iLocal_124, 1, 0);
				__LIB_14__::func_686(2);
			}
			else
			{
				if (iLocal_61 == 1)
				{
					iLocal_91 = 0;
					if (Local_68.f_10 != 3 && Local_68.f_10 != 4)
					{
						Local_68.f_18 = (MISC::GET_GAME_TIMER() - 50000);
						Local_68.f_10 = 3;
					}
				}
				__LIB_14__::func_686(1);
			}
			break;
	}
}

void func_417()//Position - 0x2ED68
{
	if (bLocal_102)
	{
		if (((iLocal_58 != 9 && iLocal_58 != 4) && iLocal_58 != 5) && iLocal_58 != 8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_68.f_9))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_68.f_9, false) || PED::IS_PED_INJURED(Local_68.f_9))
				{
					__LIB_14__::func_686(8);
				}
			}
		}
	}
}

void func_418()//Position - 0x2EDC5
{
	if (bLocal_102)
	{
		if ((iLocal_58 != 9 && iLocal_58 != 4) && iLocal_58 != 5)
		{
			func_419();
			if (iLocal_62 != 0)
			{
				if (iLocal_62 == 1)
				{
					Global_112095 = 0;
					func_587();
				}
				else
				{
					__LIB_14__::func_686(9);
				}
			}
		}
	}
}

void func_419()//Position - 0x2EE0F
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_75.f_0))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_75.f_0, false) || PED::IS_PED_INJURED(Local_75.f_0))
		{
			iLocal_62 = 3;
			return;
		}
		if (iLocal_62 == 4)
		{
			return;
		}
		if (__LIB_33__::func_284(0))
		{
			iLocal_62 = 4;
			return;
		}
	}
	if (iLocal_62 == 2 || iLocal_62 == 1)
	{
		return;
	}
	if (iLocal_58 == 0)
	{
		if (!SYSTEM::VDIST2(Local_329, Local_63) <= ((Local_63.f_3 + 25f) * (Local_63.f_3 + 25f)))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(Local_68.f_9))
			{
				iLocal_62 = 1;
				return;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_68.f_9))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_9, false) && !PED::IS_PED_INJURED(Local_68.f_9))
		{
			if ((iLocal_58 == 2 || iLocal_58 == 1) || iLocal_58 == 7)
			{
				if (!__LIB_0__::func_725(Local_68.f_9, Local_329, 150f, 1))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_68.f_9))
					{
						iLocal_62 = 2;
						return;
					}
				}
			}
			else if (iLocal_58 == 3 || iLocal_58 == 6)
			{
				if (!__LIB_0__::func_725(Local_68.f_9, Local_329, 80f, 1))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_68.f_9))
					{
						iLocal_62 = 2;
						return;
					}
				}
			}
		}
	}
}

void func_432(int iParam0, bool bParam1)//Position - 0x2F547
{
	func_442(bParam1, 1);
	if (bParam1)
	{
		func_433();
	}
	iLocal_59 = iParam0;
	bLocal_102 = false;
	if (__LIB_0__::func_324())
	{
		iLocal_103 = 1;
	}
	else
	{
		iLocal_103 = 0;
	}
	if (!__LIB_0__::func_324())
	{
		if (iLocal_59 == 0)
		{
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_14__::func_739(PLAYER::PLAYER_PED_ID(), Local_334, fLocal_115, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
				iLocal_103 = 1;
			}
		}
	}
	func_1(iLocal_59);
}

void func_433()//Position - 0x2F5D6
{
	func_434(1, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!__LIB_0__::func_324())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			__LIB_14__::func_739(PLAYER::PLAYER_PED_ID(), Local_334, fLocal_115, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	}
	__LIB_0__::func_325();
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_319);
	func_529();
	__LIB_14__::func_686(0);
}

void func_434(bool bParam0, bool bParam1)//Position - 0x2F648
{
	HUD::CLEAR_PRINTS();
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
	if (Global_112095 == 0)
	{
		__LIB_0__::func_325();
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::ENABLE_DISPATCH_SERVICE(2, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	MISC::ENABLE_DISPATCH_SERVICE(4, true);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	PED::SET_CREATE_RANDOM_COPS(true);
	__LIB_0__::func_671(0);
	__LIB_0__::func_203(0, 0);
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	__LIB_14__::func_712(0);
	AUDIO::SET_AGGRESSIVE_HORNS(false);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	__LIB_0__::func_552(1);
	if (iLocal_58 > 2)
	{
		__LIB_14__::func_705(0, &uLocal_141);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_140, false);
	PED::CLEAR_PED_NON_CREATION_AREA();
	__LIB_0__::func_221(&uLocal_154, 2);
	__LIB_0__::func_221(&uLocal_154, 3);
	__LIB_0__::func_221(&uLocal_154, 4);
	__LIB_0__::func_345(&uLocal_44, 0, 0);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	MISC::SET_TIME_SCALE(1f);
	__LIB_14__::func_749(1, 1, 1, 1);
	CAM::STOP_SCRIPT_GLOBAL_SHAKING(false);
	__LIB_14__::func_772(1, 1, 1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, true);
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	func_115();
	func_99(bParam0);
	func_435(bParam1);
}

void func_435(bool bParam0)//Position - 0x2F764
{
	if (bParam0)
	{
		HUD::CLEAR_ADDITIONAL_TEXT(0, true);
	}
	STREAMING::REMOVE_ANIM_DICT(__LIB_14__::func_683());
	STREAMING::REMOVE_ANIM_DICT("ODDJOBS@BAILBOND_QUARRY");
	__LIB_14__::func_758();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_72.f_5);
}

void func_442(bool bParam0, bool bParam1)//Position - 0x2F980
{
	if (bParam0)
	{
		__LIB_14__::func_772(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_200(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_529()//Position - 0x35FD8
{
	struct<3> Var0;
	struct<3> Var1;
	func_537();
	while ((!func_59(0) || !func_59(1)) || !func_59(2))
	{
		SYSTEM::WAIT(0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, false);
	}
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_319);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_319);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_319, joaat("PLAYER"));
	Var0 = { __LIB_14__::func_715(Local_63) };
	Var1 = { __LIB_14__::func_714(Local_63) };
	PED::SET_PED_NON_CREATION_AREA(Var0, Var1);
	iLocal_140 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var1, false, true, true, true);
	MISC::CLEAR_AREA(Local_63, 30f, false, false, false, false);
	MISC::ENABLE_DISPATCH_SERVICE(2, false);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	MISC::ENABLE_DISPATCH_SERVICE(4, false);
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	PED::SET_CREATE_RANDOM_COPS(false);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
	__LIB_14__::func_712(1);
	while (!func_532())
	{
		SYSTEM::WAIT(0);
	}
	func_530();
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_222(&uLocal_154, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), true);
	}
	if (__LIB_0__::func_692(Local_68.f_9))
	{
		__LIB_0__::func_222(&uLocal_154, 3, Local_68.f_9, sLocal_143, 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_68.f_9, true);
	}
}

void func_530()//Position - 0x36129
{
	int iVar0;
	if (__LIB_0__::func_692(Local_68.f_9))
	{
		AUDIO::STOP_PED_SPEAKING(Local_68.f_9, true);
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_68.f_9, true);
		PED::SET_PED_ARMOUR(Local_68.f_9, 100);
		ENTITY::SET_ENTITY_HEALTH(Local_68.f_9, 200, 0);
		PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(Local_68.f_9, true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_68.f_9, true);
		PED::SET_PED_DIES_IN_WATER(Local_68.f_9, true);
		PED::SET_PED_DIES_IN_SINKING_VEHICLE(Local_68.f_9, true);
		PED::SET_PED_MAX_TIME_IN_WATER(Local_68.f_9, 2f);
		PED::SET_PED_MAX_TIME_UNDERWATER(Local_68.f_9, 2f);
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_68.f_9, true);
		TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_68.f_9, false);
		PED::SET_PED_CONFIG_FLAG(Local_68.f_9, 118, true);
		PED::SET_PED_CONFIG_FLAG(Local_68.f_9, 137, true);
		PED::SET_PED_CONFIG_FLAG(Local_68.f_9, 281, true);
		if (Local_68.f_12 != 0)
		{
			WEAPON::GIVE_WEAPON_TO_PED(Local_68.f_9, Local_68.f_12, -1, true, true);
		}
		func_364(Local_68.f_9);
		__LIB_14__::func_713(Local_68.f_9, "TARGET_", 0);
		Local_68.f_10 = 0;
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_68.f_9);
		TASK::TASK_PLAY_ANIM(Local_68.f_9, "ODDJOBS@BAILBOND_QUARRY", "prem_producer_argue_a", 8f, -2f, -1, 1, 0f, false, false, false);
		if (!ENTITY::DOES_ENTITY_EXIST(Local_72.f_0))
		{
			Local_72.f_0 = OBJECT::CREATE_OBJECT(joaat("prop_phone_ing"), ENTITY::GET_ENTITY_COORDS(Local_68.f_9, false), true, true, false);
		}
		if (__LIB_0__::func_121(Local_72.f_0))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_72.f_0, Local_68.f_9, PED::GET_PED_BONE_INDEX(Local_68.f_9, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
		}
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (__LIB_0__::func_692(Local_70[iVar0 /*19*/]))
		{
			func_364(Local_70[iVar0 /*19*/]);
			if (Local_70[iVar0 /*19*/].f_5 != 0)
			{
				WEAPON::GIVE_WEAPON_TO_PED(Local_70[iVar0 /*19*/], Local_70[iVar0 /*19*/].f_5, -1, true, true);
			}
			PED::SET_PED_CONFIG_FLAG(Local_70[iVar0 /*19*/], 137, true);
			__LIB_14__::func_713(Local_70[iVar0 /*19*/], "BACKUP_", iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_126 - 1))
	{
		if (__LIB_0__::func_695(Local_71[iVar0 /*6*/]))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_71[iVar0 /*6*/], true, true, false);
		}
		iVar0++;
	}
}

int func_532()//Position - 0x36328
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	if (__LIB_14__::func_760(&(Local_68.f_9), Local_68.f_11, Local_68.f_13, Local_68.f_16, 1, 0, 0))
	{
		if (__LIB_0__::func_692(Local_68.f_9))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
			iVar0++;
		}
	}
	if (iLocal_130 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_130 - 1))
		{
			if (__LIB_14__::func_760(&(Local_70[iVar2 /*19*/]), Local_70[iVar2 /*19*/].f_18, Local_70[iVar2 /*19*/].f_1, Local_70[iVar2 /*19*/].f_4, 0, 0, 0))
			{
				if (__LIB_0__::func_692(Local_70[iVar2 /*19*/]))
				{
					iVar0++;
					iVar1++;
				}
			}
			iVar2++;
		}
	}
	if (iVar1 == iLocal_130)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_130 - 1))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_70[iVar2 /*19*/].f_18);
			iVar2++;
		}
	}
	if (iLocal_126 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_126 - 1))
		{
			if (__LIB_14__::func_768(&(Local_71[iVar2 /*6*/]), Local_71[iVar2 /*6*/].f_5, Local_71[iVar2 /*6*/].f_1, Local_71[iVar2 /*6*/].f_4, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_125 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_125 - 1))
		{
			if (__LIB_14__::func_754(&(Local_73[iVar2 /*9*/]), Local_73[iVar2 /*9*/].f_8, Local_73[iVar2 /*9*/].f_1, Local_73[iVar2 /*9*/].f_7, 1))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_73[iVar2 /*9*/], true);
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_128 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_128 - 1))
		{
			if (__LIB_14__::func_759(&(Local_74[iVar2 /*7*/]), Local_74[iVar2 /*7*/].f_5, Local_74[iVar2 /*7*/].f_2, Local_74[iVar2 /*7*/].f_6, Local_74[iVar2 /*7*/].f_1, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iVar0 == ((((iLocal_130 + iLocal_126) + iLocal_127) + iLocal_125) + iLocal_128) + 1)
	{
		return 1;
	}
	return 0;
}

void func_537()//Position - 0x3670B
{
	int iVar0;
	iVar0 = 0;
	iLocal_67 = 3;
	Local_68.f_11 = joaat("S_M_M_Trucker_01");
	Local_68.f_13 = { 2945.0356f, 2796.2544f, 39.693f };
	Local_68.f_16 = 38.6771f;
	Local_68.f_12 = joaat("WEAPON_UNARMED");
	Local_68.f_10 = 0;
	Local_68.f_17 = 0;
	Local_68.f_18 = 0;
	Local_68.f_19 = 0;
	__LIB_14__::func_726();
	iLocal_130 = 0;
	Local_71[0 /*6*/].f_5 = joaat("landstalker");
	Local_71[0 /*6*/].f_1 = { 2950.07f, 2796.39f, 40.35f };
	Local_71[0 /*6*/].f_4 = 338.45f;
	Local_71[1 /*6*/].f_5 = joaat("bjxl");
	Local_71[1 /*6*/].f_1 = { 2945.97f, 2790.77f, 40.37f };
	Local_71[1 /*6*/].f_4 = 28.22f;
	Local_72.f_5 = joaat("prop_phone_ing");
	iLocal_126 = 2;
	iLocal_127 = 0;
	iLocal_125 = 0;
	iLocal_128 = 0;
	Local_330[0 /*3*/] = { 2962.58f, 2817.19f, 42.29f };
	Local_330[1 /*3*/] = { 2942.4817f, 2841.7075f, 46.4443f };
	Local_330[2 /*3*/] = { 2909.12f, 2820.88f, 52.9f };
	Local_330[3 /*3*/] = { 2860.14f, 2816.9f, 52.56f };
	Local_330[4 /*3*/] = { 2821.6384f, 2893.2593f, 45.53f };
	Local_330[5 /*3*/] = { 2768.72f, 2950.61f, 39.78f };
	Local_330[6 /*3*/] = { 2712.31f, 2963.74f, 35.79f };
	Local_330[7 /*3*/] = { 2657.5732f, 2981.7312f, 38.9122f };
	Local_330[8 /*3*/] = { 2623.295f, 3077.3577f, 46.24589f };
	iLocal_129 = 9;
	Local_334 = { 2883.0232f, 2807.7195f, 53.6941f };
	fLocal_115 = 256.3262f;
	Local_335 = { 2938.9597f, 2783.2747f, 38.5873f };
	fLocal_116 = 355.8176f;
	Local_336 = { 2947.2463f, 2787.4058f, 39.4516f };
	fLocal_117 = 306.625f;
	Local_337 = { 0f, 0f, 0f };
	Local_338 = { 0f, 0f, 0f };
	iLocal_61 = 4;
	iLocal_81 = 0;
	iLocal_82 = 0;
	iLocal_83 = 0;
	iLocal_88 = 1;
	iLocal_84 = 1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_85[iVar0] = 0;
		iVar0++;
	}
	iLocal_86 = 0;
	iLocal_87 = 0;
	iLocal_89 = 0;
	iLocal_90 = 0;
	iLocal_91 = 1;
	iLocal_92 = 0;
	iLocal_93 = 0;
	iLocal_96 = 0;
	iLocal_97 = 0;
	iLocal_98 = 0;
	iLocal_99 = 0;
	iLocal_100 = 0;
	iLocal_101 = 0;
	iLocal_104 = 0;
	bLocal_105 = false;
	iLocal_106 = 0;
	iLocal_107 = 0;
	iLocal_108 = 0;
	iLocal_109 = 1;
	iLocal_110 = 0;
	iLocal_111 = 0;
	iLocal_112 = 0;
	bLocal_113 = false;
	iLocal_94 = 1;
	bLocal_95 = false;
	iLocal_62 = 0;
	iLocal_119 = 0;
	iLocal_123 = 0;
	iLocal_124 = 0;
	iLocal_120 = 0;
	iLocal_118 = 0;
	iLocal_137 = 0;
	iLocal_122 = 0;
	iLocal_131 = 0;
	iLocal_132 = -1;
	iLocal_133 = -1;
	iLocal_134 = 0;
	iLocal_136 = 0;
	iLocal_138 = -1;
	Local_328 = { 2722.6611f, 4143.1055f, 43.0617f };
	StringCopy(&Local_320, "", 24);
	Local_75.f_6 = __LIB_2__::func_910(62);
	Local_75.f_1 = { __LIB_14__::func_725() };
	Local_75.f_4 = __LIB_14__::func_724();
	Local_77.f_5 = __LIB_14__::func_723();
	Local_77.f_1 = { __LIB_14__::func_722() };
	Local_77.f_4 = __LIB_14__::func_721();
	Local_78.f_5 = __LIB_14__::func_720();
	Local_78.f_1 = { __LIB_14__::func_719() };
	Local_78.f_4 = __LIB_14__::func_718();
	Local_79.f_5 = __LIB_14__::func_675();
	Local_79.f_1 = { __LIB_14__::func_674() };
	Local_79.f_4 = __LIB_14__::func_673();
	Local_80.f_5 = __LIB_14__::func_672();
	Local_80.f_1 = { __LIB_14__::func_717() };
	Local_80.f_4 = __LIB_14__::func_716();
	sLocal_143 = "BailBond1Jumper";
	sLocal_144 = "BB1_J1";
	sLocal_145 = "BB1_J3";
	sLocal_146[0] = "BB1_VC1";
	sLocal_146[1] = "BB1_VC2";
	sLocal_146[2] = "BB1_VC3";
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_85[iVar0] = 0;
		iVar0++;
	}
	iLocal_69 = 0;
}

void func_587()//Position - 0x3969D
{
	if (iLocal_109)
	{
		func_434(0, 1);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

