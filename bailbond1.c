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
			__LIB_38__::func_36(0);
			func_587();
		}
	}
	if (!__LIB_10__::func_675(1))
	{
		Global_112095 = 0;
		func_587();
	}
	MISC::SET_MISSION_FLAG(true);
	func_529();
	if (__LIB_0__::func_294())
	{
		iVar0 = __LIB_0__::func_315();
		if (Global_94618 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				if (VEHICLE::IS_THIS_MODEL_A_HELI(Global_106934.f_2890.f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_PLANE(Global_106934.f_2890.f_12.f_66))
				{
					func_444(&iLocal_339, 2898.2944f, 2796.305f, 53.849f, 162.6353f, 0, 0, 1, 0, 0, joaat("asterope"), 0, 145, 1);
				}
				else
				{
					func_444(&iLocal_339, 2891.4587f, 2798.1245f, 53.7482f, 206.3925f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
				}
				__LIB_0__::func_370(Local_334, fLocal_115, 1, 0);
				iLocal_61 = 2;
				func_432(1, 0);
				break;
			case 1:
				func_444(&iLocal_339, 2704.0776f, 4152.2397f, 42.2514f, 175.193f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
				__LIB_0__::func_370(Local_328, 254.9762f, 0, 0);
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
			__LIB_20__::func_249(PLAYER::PLAYER_PED_ID(), Local_334, fLocal_115, 0, 0);
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
			__LIB_10__::func_661();
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
					__LIB_10__::func_659();
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
					__LIB_10__::func_640();
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
		if (__LIB_0__::func_295())
		{
			__LIB_6__::func_775(0, -1, 0);
		}
		func_37(iLocal_58);
		if (iLocal_58 == 4)
		{
			__LIB_38__::func_33(1, 0, 1);
		}
		else
		{
			__LIB_38__::func_33(1, 1, 1);
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
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_296();
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
					if (!__LIB_0__::func_295())
					{
						__LIB_10__::func_701(PLAYER::PLAYER_PED_ID(), Local_335, fLocal_116, 0, 1);
						if (__LIB_1__::func_197(Local_68.f_9))
						{
							__LIB_10__::func_624(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_68.f_9, true));
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						if (iLocal_103 == 0)
						{
							if (iLocal_59 == 1)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_20__::func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_103 = 1;
								}
							}
						}
					}
					iLocal_87 = 1;
					iLocal_61 = 2;
					__LIB_20__::func_239();
					iLocal_60 = 2;
				}
				break;
			case 1:
				iLocal_87 = 1;
				iLocal_86 = 1;
				if (iLocal_60 == 1)
				{
					if (!__LIB_0__::func_295())
					{
						__LIB_10__::func_701(PLAYER::PLAYER_PED_ID(), Local_336, fLocal_117, 0, 1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						if (iLocal_103 == 0)
						{
							if (iLocal_59 == 2)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_20__::func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_103 = 1;
								}
							}
						}
					}
					Local_68.f_17 = (MISC::GET_GAME_TIMER() - 5000);
					__LIB_20__::func_239();
					iLocal_60 = 2;
				}
				break;
			case 2:
				iLocal_81 = 1;
				if (iLocal_67 == 3)
				{
					if (iLocal_60 == 0)
					{
						if (__LIB_1__::func_197(Local_68.f_9) && __LIB_1__::func_183(Local_71[0 /*6*/]))
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
					if (!__LIB_0__::func_295())
					{
						__LIB_26__::func_239(Local_68.f_9, 2.5f);
						if (iLocal_103 == 0)
						{
							if (iLocal_59 == 3)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_20__::func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_103 = 1;
								}
							}
						}
					}
					__LIB_0__::func_296();
					__LIB_6__::func_771();
					__LIB_20__::func_239();
					iLocal_60 = 2;
				}
				break;
			case 3:
				iLocal_97 = 1;
				if (iLocal_60 == 1)
				{
					__LIB_20__::func_249(Local_68.f_9, Local_328, 0f, 0, 0);
					if (!__LIB_0__::func_295())
					{
						__LIB_20__::func_249(PLAYER::PLAYER_PED_ID(), Local_328, 254.9762f, 0, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						if (iLocal_103 == 0)
						{
							if (iLocal_59 == 4)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_20__::func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_103 = 1;
								}
							}
						}
					}
					__LIB_20__::func_239();
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
					__LIB_20__::func_239();
				}
				break;
			case 7:
				if (iLocal_60 == 1)
				{
					iLocal_83 = 1;
					if (!__LIB_0__::func_295())
					{
						__LIB_26__::func_239(Local_68.f_9, 2.5f);
						if (iLocal_103 == 0)
						{
							if (iLocal_59 == 3)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_20__::func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_103 = 1;
								}
							}
						}
					}
					__LIB_0__::func_296();
					__LIB_6__::func_771();
					__LIB_20__::func_239();
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
				__LIB_32__::func_565(&Local_324);
				func_68();
				while (!__LIB_18__::func_170(1, 1093140480, 0) || !__LIB_20__::func_240())
				{
					__LIB_32__::func_565(&Local_324);
					func_68();
					SYSTEM::WAIT(0);
				}
				break;
			}
	}
}

int func_58(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x14B6
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (__LIB_10__::func_634(iParam1))
		{
			*uParam0 = OBJECT::CREATE_OBJECT(iParam1, Param2, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				ENTITY::SET_ENTITY_HEADING(*uParam0, fParam3);
				OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(*uParam0, true);
				if (bParam4)
				{
					__LIB_10__::func_634(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (bParam4)
		{
			__LIB_10__::func_634(iParam1, 0);
		}
		return 1;
	}
	return 0;
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
			STREAMING::REQUEST_ANIM_DICT(__LIB_10__::func_625());
			if (STREAMING::HAS_ANIM_DICT_LOADED(__LIB_10__::func_625()))
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
				__LIB_0__::func_296();
			}
			func_115();
			Global_112095 = 3;
			if (iLocal_62 == 4)
			{
				if (__LIB_1__::func_197(Local_75.f_0))
				{
					__LIB_0__::func_202(&uLocal_154, 4);
					__LIB_20__::func_243(Local_75.f_0, 0);
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_75.f_0))
					{
						if (__LIB_0__::func_530(Local_75.f_0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 35f, 1))
						{
							AUDIO::STOP_PED_SPEAKING(Local_75.f_0, false);
							__LIB_5__::func_759(Local_75.f_0, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
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
				STREAMING::REQUEST_ANIM_DICT(__LIB_10__::func_637());
				if (func_107(&Local_75, &Local_77, &iLocal_138))
				{
					iLocal_104 = 1;
				}
			}
			else if (iLocal_62 == 2)
			{
				iLocal_94 = 0;
				StringCopy(&Local_320, "BBC_T12", 24);
			}
			if (__LIB_1__::func_197(Local_68.f_9))
			{
				if (PED::IS_PED_IN_GROUP(Local_68.f_9))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_68.f_9);
				}
				__LIB_20__::func_242(Local_68.f_9, 1);
			}
			iVar1 = 0;
			while (iVar1 <= (iLocal_130 - 1))
			{
				__LIB_20__::func_242(Local_70[iVar1 /*19*/], 1);
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
				__LIB_0__::func_324(sVar0);
			}
			__LIB_38__::func_36(0);
			iLocal_60 = 1;
			break;
		case 1:
			if (__LIB_0__::func_204())
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
						__LIB_6__::func_771();
					}
					if (iLocal_62 == 4)
					{
						if (__LIB_1__::func_197(Local_75.f_0))
						{
							if (__LIB_0__::func_530(Local_75.f_0, Local_329, 35f, 1))
							{
								__LIB_0__::func_203(&uLocal_154, 4, Local_75.f_0, "MAUDE", 0, 1);
								if (__LIB_41__::func_635(&uLocal_154, cLocal_148, &Local_320, 4, 0, 0, 0))
								{
									iLocal_94 = 1;
								}
							}
						}
					}
					else if (__LIB_41__::func_635(&uLocal_154, cLocal_148, &Local_320, 4, 0, 0, 0))
					{
						iLocal_94 = 1;
					}
				}
				if (iLocal_62 == 4)
				{
					if (!iLocal_104)
					{
						STREAMING::REQUEST_ANIM_DICT(__LIB_10__::func_637());
						if (func_107(&Local_75, &Local_77, &iLocal_138))
						{
							iLocal_104 = 1;
						}
					}
					else if (__LIB_1__::func_197(Local_75.f_0))
					{
						if (!__LIB_4__::func_465(Local_75.f_0, joaat("SCRIPT_TASK_SMART_FLEE_PED")))
						{
							if (!PED::IS_PED_FLEEING(Local_75.f_0))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_75.f_0, __LIB_10__::func_637(), __LIB_10__::func_635(), 3))
								{
									__LIB_10__::func_635(&Local_75);
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
	__LIB_20__::func_240(&Local_72, 0);
	if (iLocal_125 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_125 - 1))
		{
			__LIB_20__::func_240(&(Local_73[iVar0 /*9*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_128 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_128 - 1))
		{
			__LIB_0__::func_539(&(Local_74[iVar0 /*7*/]));
			iVar0++;
		}
	}
	__LIB_20__::func_240(&Local_77, bParam0);
	__LIB_20__::func_240(&Local_78, bParam0);
	__LIB_20__::func_240(&Local_79, 0);
	__LIB_20__::func_240(&Local_80, 0);
	if (__LIB_1__::func_197(Local_68.f_9))
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
	__LIB_20__::func_241(&(Local_68.f_9), bParam0);
	if (__LIB_1__::func_197(Local_75.f_0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_75.f_0, false);
		PED::SET_PED_KEEP_TASK(Local_75.f_0, true);
	}
	__LIB_20__::func_241(&Local_75, bParam0);
	if (iLocal_130 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_130 - 1))
		{
			if (iLocal_67 == 4)
			{
				if (__LIB_1__::func_197(Local_70[iVar0 /*19*/]))
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
			__LIB_20__::func_241(&(Local_70[iVar0 /*19*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_126 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_126 - 1))
		{
			__LIB_32__::func_566(&(Local_71[iVar0 /*6*/]), bParam0);
			iVar0++;
		}
	}
}

int func_107(int iParam0, int iParam1, int iParam2)//Position - 0x2A86
{
	int iVar0;
	if (__LIB_1__::func_197(*iParam0))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, __LIB_10__::func_625(), __LIB_10__::func_632(), 3))
		{
			if (!PED::IS_PED_RAGDOLL(*iParam0) || TASK::IS_PED_GETTING_UP(*iParam0))
			{
				STREAMING::REQUEST_ANIM_DICT(__LIB_10__::func_637());
				if (STREAMING::HAS_ANIM_DICT_LOADED(__LIB_10__::func_637()))
				{
					*iParam2 = PED::CREATE_SYNCHRONIZED_SCENE(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(*iParam2, false);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*iParam2, false);
					if (__LIB_4__::func_465(*iParam0, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -1000f, true);
					}
					TASK::TASK_SYNCHRONIZED_SCENE(*iParam0, *iParam2, __LIB_10__::func_637(), __LIB_10__::func_635(), 1000f, -4f, 4626, 0, 1000f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*iParam0, false, false);
					if (__LIB_0__::func_121(*iParam1))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam1, __LIB_10__::func_625(), __LIB_10__::func_631(), 3))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam1, -16f, false);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(*iParam1, *iParam2, __LIB_10__::func_636(), __LIB_10__::func_637(), 16f, -4f, iVar0, 1000f);
					}
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
	return 0;
}

void func_115()//Position - 0x2EA3
{
	func_118(iLocal_130);
	__LIB_0__::func_523(&(Local_68.f_8));
	__LIB_0__::func_489(&Local_68);
	__LIB_0__::func_523(&iLocal_114);
}

void func_118(int iParam0)//Position - 0x2F59
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		__LIB_0__::func_489(&(Local_70[iVar0 /*19*/].f_6));
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
				__LIB_0__::func_296();
			}
			func_115();
			__LIB_20__::func_241(&Local_75, 1);
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
			if (__LIB_10__::func_638(iLocal_135, 500))
			{
				if (!bLocal_95)
				{
					if (__LIB_0__::func_75())
					{
						__LIB_0__::func_296();
						__LIB_6__::func_771();
					}
					if (__LIB_41__::func_635(&uLocal_154, cLocal_148, "BBC_PK1", 4, 0, 0, 0))
					{
						bLocal_95 = true;
					}
				}
				if (bLocal_95)
				{
					func_123(2);
				}
				if (__LIB_10__::func_638(iLocal_135, 1500))
				{
					func_123(2);
				}
			}
			break;
	}
}

void func_121(int iParam0)//Position - 0x3057
{
	if (__LIB_1__::func_197(Local_70[iParam0 /*19*/]))
	{
		TASK::CLEAR_PED_SECONDARY_TASK(Local_70[iParam0 /*19*/]);
		TASK::CLEAR_PED_TASKS(Local_70[iParam0 /*19*/]);
		TASK::TASK_CLEAR_LOOK_AT(Local_70[iParam0 /*19*/]);
		if (__LIB_10__::func_650(1, 0, 1))
		{
			__LIB_20__::func_242(Local_70[iParam0 /*19*/], 1);
			Local_70[iParam0 /*19*/].f_14 = 4;
			__LIB_0__::func_489(&(Local_70[iParam0 /*19*/].f_6));
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
	__LIB_24__::func_943(__LIB_10__::func_639(Local_63.f_4), 0, 0);
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

void func_200(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0xAF19
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_26__::func_258(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_18__::func_173())
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
		Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_20__::func_322(iParam1);
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
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, uVar11[iVar0], -1) };
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
							Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_20__::func_322(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_40__::func_943(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
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
						__LIB_20__::func_322(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_40__::func_943(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
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
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, func_211(iParam0, iVar0, -1), -1) };
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
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_202(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_35__::func_896(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_202(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_202(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_202(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_202(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_202(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
			Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_20__::func_322(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__::func_943(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
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
		__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_20__::func_322(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__::func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
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
				iVar3 = __LIB_40__::func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_202(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_39__::func_857(iVar10, iParam1, iParam2);
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
	Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar0, iParam1, iParam2, -1) };
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
				if (!func_317(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_317(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_317(iParam0, 14, iVar4))
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
						Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, iVar2, iVar1, -1) };
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
	__LIB_20__::func_240();
	func_387();
	if (__LIB_1__::func_197(Local_68.f_9))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_68.f_9, false) };
		func_386(Local_68.f_9, &iLocal_131, 1126825984, 7);
		func_378(Local_68.f_9, &(Local_68.f_19), 1126825984, 7);
		__LIB_10__::func_649();
		switch (iLocal_60)
		{
			case 0:
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_319);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_319, joaat("PLAYER"));
				iLocal_136 = ENTITY::GET_ENTITY_HEALTH(Local_68.f_9);
				Local_337 = { ENTITY::GET_ENTITY_COORDS(Local_68.f_9, false) };
				__LIB_10__::func_648(&Local_338, Local_337);
				__LIB_10__::func_648(Local_68.f_9);
				if (Local_68.f_10 != 13 && Local_68.f_10 != 14)
				{
					TASK::CLEAR_PED_TASKS(Local_68.f_9);
					Local_68.f_18 = (MISC::GET_GAME_TIMER() - 3000);
					Local_68.f_10 = 13;
				}
				if (__LIB_1__::func_197(Local_68.f_9))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_68.f_8))
					{
						Local_68.f_8 = __LIB_10__::func_711(Local_68.f_9, 1, 0, 5);
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
				__LIB_10__::func_647(&(Local_68.f_8), "", "", &iLocal_123, iLocal_124, 0);
				iLocal_60 = 1;
				break;
			case 1:
				if (!iLocal_107)
				{
					__LIB_10__::func_647(&(Local_68.f_8), "", "", &iLocal_123, iLocal_124, 0);
					__LIB_40__::func_938(&uLocal_44, Local_68.f_9, 0, 0, 1, 1, 1);
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
						else if (__LIB_10__::func_638(iLocal_132, 8000))
						{
							bVar0 = true;
						}
						if (__LIB_10__::func_645(Local_68.f_9, Local_329, bVar0, 0, 1, iLocal_136))
						{
							if ((__LIB_10__::func_638(iLocal_133, 5000) || __LIB_0__::func_78(Local_338, 0f, 0f, 0f, 0)) || (!__LIB_1__::func_148(Var1, Local_338, 8.5f) && !__LIB_1__::func_148(Var1, Local_337, 8.5f)))
							{
								func_330();
								Local_68.f_17 = MISC::GET_GAME_TIMER();
								__LIB_9__::func_981(&uLocal_44, 0, 0);
								iLocal_107 = 1;
							}
						}
						else
						{
							if (!iLocal_81)
							{
								if (!__LIB_10__::func_638(iLocal_120, 2500))
								{
									if (!__LIB_0__::func_75())
									{
										if (__LIB_0__::func_530(Local_68.f_9, Local_329, 30f, 1))
										{
											if (__LIB_41__::func_635(&uLocal_154, cLocal_147, "BB1_J7", 4, 0, 0, 0))
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
								if (__LIB_10__::func_638(iLocal_120, MISC::GET_RANDOM_INT_IN_RANGE(5000, 12000)))
								{
									if (__LIB_0__::func_530(Local_68.f_9, Local_329, 30f, 1))
									{
										if (PED::IS_PED_FLEEING(Local_68.f_9))
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 101) < 30)
											{
												if (__LIB_41__::func_635(&uLocal_154, cLocal_148, "BBC_T13", 4, 0, 0, 0))
												{
													iLocal_120 = MISC::GET_GAME_TIMER();
												}
											}
											else if (__LIB_41__::func_635(&uLocal_154, cLocal_147, "BB1_FLEE", 4, 0, 0, 0))
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
							__LIB_10__::func_644(Local_68.f_9, Local_329, iLocal_133, 925353388);
						}
					}
					else
					{
						func_330();
						Local_68.f_17 = MISC::GET_GAME_TIMER();
						__LIB_9__::func_981(&uLocal_44, 0, 0);
						iLocal_107 = 1;
					}
				}
				else
				{
					func_330();
					if (!__LIB_0__::func_530(Local_68.f_9, Local_329, 10f, 1))
					{
						if (!iLocal_97)
						{
							if (!__LIB_20__::func_245(sLocal_145, 1))
							{
								__LIB_20__::func_244(&(Local_68.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_123, &iLocal_124, 1, 1);
								iLocal_97 = 1;
							}
						}
						else
						{
							__LIB_10__::func_647(&(Local_68.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_123, iLocal_124, 1);
						}
					}
					else
					{
						if (!iLocal_82)
						{
							if (!PED::IS_PED_RAGDOLL(Local_68.f_9) && !PED::IS_PED_IN_ANY_VEHICLE(Local_68.f_9, false))
							{
								if (__LIB_0__::func_405("BBS_APPSUS", 0, 0) || __LIB_0__::func_405("BBS_APPSUS2", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								if (!__LIB_0__::func_75())
								{
									__LIB_6__::func_771();
								}
								if (__LIB_41__::func_635(&uLocal_154, cLocal_147, sLocal_145, 4, 0, 0, 0))
								{
									iLocal_82 = 1;
								}
							}
						}
						else if (!__LIB_0__::func_75())
						{
							iLocal_60 = 2;
						}
						__LIB_10__::func_647(&(Local_68.f_8), "", "", &iLocal_123, iLocal_124, 0);
					}
					if (__LIB_10__::func_643(&(Local_68.f_9)))
					{
						iLocal_112 = 1;
						iLocal_60 = 0;
					}
				}
				break;
			case 2:
				if (__LIB_0__::func_405("BBS_APPSUS", 0, 0) || __LIB_0__::func_405("BBS_APPSUS2", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				MISC::SET_INSTANCE_PRIORITY_HINT(0);
				iLocal_82 = 1;
				func_330();
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_319);
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_319, joaat("PLAYER"));
				__LIB_0__::func_523(&(Local_68.f_8));
				iLocal_82 = 1;
				Local_68.f_17 = MISC::GET_GAME_TIMER();
				__LIB_9__::func_981(&uLocal_44, 0, 0);
				iLocal_108 = 0;
				iLocal_112 = 0;
				__LIB_10__::func_640(3);
				break;
			}
	}
}

void func_330()//Position - 0x29A0E
{
	if (__LIB_1__::func_197(Local_68.f_9))
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

int func_370()//Position - 0x2C33C
{
	if (!iLocal_82)
	{
		return 1;
	}
	if (__LIB_20__::func_245(sLocal_145, 0))
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
	if (!__LIB_10__::func_638(iLocal_139, 2000))
	{
		return 1;
	}
	return 0;
}

void func_378(int iParam0, var uParam1, float fParam2, int iParam3)//Position - 0x2C644
{
	if (__LIB_0__::func_121(iParam0))
	{
		if (__LIB_20__::func_247(iParam0, PLAYER::PLAYER_PED_ID(), fParam2, 1, 250, iParam3))
		{
			*uParam1 = MISC::GET_FRAME_COUNT();
		}
	}
}

void func_386(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x2CA5D
{
	if (__LIB_0__::func_121(iParam0))
	{
		if (__LIB_20__::func_247(PLAYER::PLAYER_PED_ID(), iParam0, fParam2, 1, 250, iParam3))
		{
			*iParam1 = MISC::GET_FRAME_COUNT();
		}
	}
}

void func_387()//Position - 0x2CA89
{
	if (__LIB_1__::func_148(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_328, 100f))
	{
		if (!__LIB_4__::func_234())
		{
			CUTSCENE::REQUEST_CUTSCENE(&Local_324, 8);
			func_68();
			iLocal_111 = 1;
		}
	}
	else if (iLocal_111)
	{
		if (!__LIB_1__::func_148(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_328, 120f))
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
		if (__LIB_4__::func_234())
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_111 = 0;
		}
	}
}

void func_389()//Position - 0x2CB1F
{
	__LIB_20__::func_240();
	func_387();
	if (__LIB_1__::func_197(Local_68.f_9))
	{
		func_386(Local_68.f_9, &iLocal_131, 1126825984, 7);
		func_378(Local_68.f_9, &(Local_68.f_19), 1126825984, 7);
		__LIB_10__::func_649();
		switch (iLocal_60)
		{
			case 0:
				__LIB_0__::func_296();
				iLocal_84 = 0;
				iLocal_99 = 0;
				iLocal_60 = 1;
				break;
			case 1:
				if (!iLocal_108)
				{
					if (__LIB_0__::func_405("BBS_05", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_05");
					}
					__LIB_0__::func_523(&(Local_68.f_8));
					if (!__LIB_0__::func_530(Local_68.f_9, Local_329, 25f, 1))
					{
						if (Local_68.f_10 == 21 || Local_68.f_10 == 22)
						{
							Local_68.f_18 = MISC::GET_GAME_TIMER();
							Local_68.f_10 = 25;
						}
						if (__LIB_10__::func_649(iLocal_131, 10))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_10__::func_649(iLocal_131, 10))
								{
									if (__LIB_41__::func_635(&uLocal_154, cLocal_148, "BBC_T9", 4, 0, 0, 0))
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
						if (__LIB_0__::func_405("BBS_COPS", 0, 0))
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
						if (!__LIB_20__::func_245(sLocal_145, 1))
						{
							if (__LIB_41__::func_635(&uLocal_154, cLocal_148, "BBC_T5", 4, 0, 0, 0))
							{
								iLocal_83 = 1;
							}
						}
					}
					else if (!iLocal_99)
					{
						if (!__LIB_0__::func_405("BBS_COPS", 0, 0))
						{
							__LIB_0__::func_210("BBS_COPS", 7500, 0);
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
				else if (__LIB_0__::func_530(Local_68.f_9, Local_329, 8f, 1))
				{
					if (Local_68.f_10 == 25 || Local_68.f_10 == 26)
					{
						Local_68.f_18 = MISC::GET_GAME_TIMER();
						Local_68.f_10 = 21;
					}
					iLocal_99 = 0;
					if (__LIB_0__::func_405("BBS_05", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_05");
					}
					if (!__LIB_0__::func_75())
					{
						if (Local_68.f_10 == 21 || Local_68.f_10 == 22)
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
							{
								if (__LIB_41__::func_635(&uLocal_154, cLocal_148, "BBC_T10", 4, 0, 0, 0))
								{
									iLocal_120 = MISC::GET_GAME_TIMER();
								}
							}
							else if (__LIB_41__::func_635(&uLocal_154, cLocal_147, "BB1_J5", 4, 0, 0, 0))
							{
								iLocal_120 = MISC::GET_GAME_TIMER();
							}
						}
					}
					iLocal_108 = 0;
				}
				else
				{
					if (__LIB_0__::func_405("BBS_COPS", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_COPS");
					}
					if (!HUD::DOES_BLIP_EXIST(Local_68.f_8))
					{
						Local_68.f_8 = __LIB_10__::func_711(Local_68.f_9, 1, 1, 5);
					}
					if (!iLocal_100)
					{
						__LIB_0__::func_210("BBS_05", 7500, 1);
						iLocal_100 = 1;
					}
				}
				if (__LIB_10__::func_643(&(Local_68.f_9)))
				{
					iLocal_112 = 1;
					iLocal_60 = 2;
				}
				break;
			case 2:
				if (__LIB_0__::func_405("BBS_05", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("BBS_05");
				}
				iLocal_84 = 1;
				__LIB_0__::func_523(&(Local_68.f_8));
				if (iLocal_112)
				{
					__LIB_10__::func_640(7);
				}
				else
				{
					if (__LIB_0__::func_405("BBS_COPS", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_COPS");
					}
					__LIB_10__::func_640(3);
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
	if (__LIB_1__::func_197(Local_68.f_9))
	{
		if (__LIB_0__::func_75())
		{
			iLocal_120 = MISC::GET_GAME_TIMER();
		}
		if (!iLocal_88)
		{
			if (__LIB_41__::func_635(&uLocal_154, cLocal_147, "BB1_J6", 4, 0, 0, 0))
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
									if (__LIB_10__::func_638(iLocal_137, 3500))
									{
										if (__LIB_41__::func_635(&uLocal_154, cLocal_147, "BB1_STOP", 4, 0, 0, 0))
										{
											iLocal_93 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_93)
						{
							if (!__LIB_20__::func_245("BB1_STOP", 1))
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
					if (__LIB_41__::func_635(&uLocal_154, cLocal_147, "BB1_J9", 4, 0, 0, 0))
					{
						iLocal_84 = 1;
					}
				}
			}
			else
			{
				if (!iLocal_101)
				{
					if (!__LIB_20__::func_246())
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
					if (__LIB_20__::func_246())
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_68.f_9, false))
						{
							if (!__LIB_20__::func_245("BBC_T6", 1))
							{
								if (__LIB_41__::func_635(&uLocal_154, cLocal_148, "BBC_T6", 4, iVar1, 0, 0))
								{
									iLocal_89 = 1;
								}
							}
						}
						__LIB_10__::func_657("BBS_VH1", 1);
					}
					else if (!__LIB_20__::func_245("BBC_T8", 1) && !__LIB_20__::func_245("BB1_WTF", 1))
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) < 5)
						{
							if (__LIB_41__::func_635(&uLocal_154, cLocal_148, "BBC_T8", 4, iVar1, 0, 0))
							{
								iLocal_89 = 1;
							}
						}
						else if (__LIB_41__::func_635(&uLocal_154, cLocal_147, "BB1_WTF", 4, iVar1, 0, 0))
						{
							iLocal_89 = 1;
						}
					}
				}
				else if (!iLocal_92)
				{
					if (__LIB_10__::func_657(&iVar0))
					{
						if ((!__LIB_20__::func_245("BB1_JACK", 1) && !__LIB_20__::func_245("BBC_T6", 1)) && !__LIB_20__::func_245("BBC_T8", 1))
						{
							if (__LIB_41__::func_635(&uLocal_154, cLocal_147, "BB1_JACK", 4, iVar1, 0, 0))
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
						if (!__LIB_20__::func_245("BBC_T7", 1) && !__LIB_20__::func_245("BB1_OUT", 1))
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) < 5)
							{
								if (__LIB_41__::func_635(&uLocal_154, cLocal_148, "BBC_T7", 4, iVar1, 0, 0))
								{
									iLocal_90 = 1;
								}
							}
							else if (__LIB_41__::func_635(&uLocal_154, cLocal_147, "BB1_OUT", 4, iVar1, 0, 0))
							{
								iLocal_90 = 1;
							}
						}
					}
				}
				else if (Local_68.f_10 == 24 && __LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_HANDS_UP")))
				{
					if (__LIB_0__::func_530(Local_68.f_9, Local_329, 25f, 1))
					{
						if (!__LIB_20__::func_245("BB1_J10", 1))
						{
							if (__LIB_10__::func_638(iLocal_121, MISC::GET_RANDOM_INT_IN_RANGE(2500, 5000)))
							{
								if (__LIB_0__::func_75())
								{
									__LIB_6__::func_771();
								}
								if (__LIB_41__::func_635(&uLocal_154, cLocal_147, "BB1_J10", 4, 0, 0, 0))
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
						if (__LIB_41__::func_635(&uLocal_154, cLocal_147, "BB1_J9", 4, 0, 0, 0))
						{
							iLocal_120 = MISC::GET_GAME_TIMER();
							iLocal_84 = 1;
						}
					}
					if (!__LIB_0__::func_75())
					{
						if (__LIB_10__::func_638(iLocal_120, MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000)))
						{
							if (!__LIB_0__::func_530(Local_68.f_9, Local_329, 20f, 1))
							{
								if (__LIB_41__::func_635(&uLocal_154, cLocal_147, "BB1_J4", 4, 0, 0, 0))
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
		if (__LIB_41__::func_635(&uLocal_154, cLocal_147, sLocal_146[iParam0], 4, 0, 0, 0))
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
	__LIB_20__::func_240();
	func_387();
	if (__LIB_1__::func_197(Local_68.f_9))
	{
		func_386(Local_68.f_9, &iLocal_131, 1126825984, 7);
		func_378(Local_68.f_9, &(Local_68.f_19), 1126825984, 7);
		__LIB_10__::func_649();
		switch (iLocal_60)
		{
			case 0:
				iLocal_60 = 1;
				break;
			case 1:
				if (!iLocal_108)
				{
					if (__LIB_0__::func_405("BBS_05", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_05");
					}
					__LIB_0__::func_523(&(Local_68.f_8));
					if (!__LIB_0__::func_530(Local_68.f_9, Local_329, 25f, 1))
					{
						if (Local_68.f_10 == 21 || Local_68.f_10 == 22)
						{
							Local_68.f_18 = MISC::GET_GAME_TIMER();
							Local_68.f_10 = 25;
						}
						if (__LIB_10__::func_649(iLocal_131, 10))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_10__::func_649(iLocal_131, 10))
								{
									if (__LIB_41__::func_635(&uLocal_154, cLocal_148, "BBC_T9", 4, 0, 0, 0))
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
								iLocal_114 = __LIB_10__::func_658(Local_328, 5, 1);
							}
						}
						if (!iLocal_83)
						{
							if (!__LIB_20__::func_245(sLocal_145, 1))
							{
								if (__LIB_41__::func_635(&uLocal_154, cLocal_148, "BBC_T5", 4, 0, 0, 0))
								{
									iLocal_83 = 1;
								}
							}
						}
						else if (!iLocal_96)
						{
							if (!__LIB_0__::func_75())
							{
								__LIB_0__::func_210("BBS_DROP", 7500, 0);
								iLocal_120 = MISC::GET_GAME_TIMER();
								iLocal_96 = 1;
							}
						}
						else
						{
							func_390();
							__LIB_20__::func_248(&Local_75, Local_329, &iLocal_122, 5000, 1101004800);
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
							if (__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_328, 6.5f, 1))
							{
								iLocal_60 = 2;
							}
						}
						else if (__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_328, 2.5f, 1))
						{
							iLocal_60 = 2;
						}
					}
				}
				else
				{
					__LIB_0__::func_523(&iLocal_114);
					if (__LIB_0__::func_405("BBS_DROP", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_DROP");
					}
					if (__LIB_0__::func_530(Local_68.f_9, Local_329, 8f, 1))
					{
						if (Local_68.f_10 == 25 || Local_68.f_10 == 26)
						{
							Local_68.f_18 = MISC::GET_GAME_TIMER();
							Local_68.f_10 = 21;
						}
						if (__LIB_0__::func_405("BBS_05", 0, 0))
						{
							HUD::CLEAR_THIS_PRINT("BBS_05");
						}
						if (!__LIB_0__::func_75())
						{
							if (Local_68.f_10 == 21 || Local_68.f_10 == 22)
							{
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
								{
									if (__LIB_41__::func_635(&uLocal_154, cLocal_148, "BBC_T10", 4, 0, 0, 0))
									{
										iLocal_120 = MISC::GET_GAME_TIMER();
									}
								}
								else if (__LIB_41__::func_635(&uLocal_154, cLocal_147, "BB1_J5", 4, 0, 0, 0))
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
							Local_68.f_8 = __LIB_10__::func_711(Local_68.f_9, 1, 1, 5);
						}
						if (!iLocal_100)
						{
							__LIB_0__::func_210("BBS_05", 7500, 1);
							iLocal_100 = 1;
						}
					}
				}
				if (!bLocal_105)
				{
					bLocal_105 = func_395(Local_329, Local_63, 180f);
				}
				if (__LIB_10__::func_643(&(Local_68.f_9)))
				{
					iLocal_112 = 1;
					iLocal_60 = 2;
				}
				break;
			case 2:
				__LIB_0__::func_523(&iLocal_114);
				if (__LIB_0__::func_405("BBS_DROP", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("BBS_DROP");
				}
				if (iLocal_112)
				{
					__LIB_10__::func_640(7);
				}
				else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_10__::func_640(6);
				}
				else
				{
					__LIB_0__::func_523(&(Local_68.f_8));
					if (__LIB_0__::func_405("BBS_05", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_05");
					}
					if (!bLocal_105)
					{
						bLocal_105 = func_395(Local_329, Local_63, 0f);
					}
					__LIB_10__::func_640(4);
				}
				break;
			}
	}
}

int func_395(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x2D73C
{
	int iVar0;
	if (!__LIB_0__::func_658(Param0, Param1, fParam2))
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
				__LIB_0__::func_539(&(Local_74[iVar0 /*7*/]));
				iVar0++;
			}
		}
	}
	return 0;
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
	if (!__LIB_0__::func_530(iParam1, *(uParam3[*iParam4 /*3*/]), 15f, 1))
	{
		if (!__LIB_4__::func_465(iParam0, joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD")) && !__LIB_4__::func_465(iParam0, joaat("SCRIPT_TASK_VEHICLE_GOTO_NAVMESH")))
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
	if (__LIB_1__::func_197(iParam0))
	{
		if (__LIB_1__::func_183(iParam1))
		{
			if (__LIB_10__::func_651(iParam1, iParam3))
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
				if (__LIB_10__::func_638(*iParam2, 3500))
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
	if (__LIB_1__::func_197(Local_68.f_9))
	{
		func_386(Local_68.f_9, &iLocal_131, 1126825984, 1);
		func_378(Local_68.f_9, &(Local_68.f_19), 1126825984, 7);
		__LIB_10__::func_649();
		switch (iLocal_60)
		{
			case 0:
				if (!HUD::DOES_BLIP_EXIST(Local_68.f_8))
				{
					Local_68.f_8 = __LIB_10__::func_711(Local_68.f_9, 1, 0, 5);
				}
				__LIB_20__::func_244(&(Local_68.f_8), "", "", &iLocal_123, &iLocal_124, 1, 0);
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
								__LIB_6__::func_771();
							}
							if (__LIB_41__::func_635(&uLocal_154, cLocal_148, "BBC_T14", 4, 0, 0, 0))
							{
								Local_68.f_17 = MISC::GET_GAME_TIMER();
								iLocal_87 = 1;
							}
							__LIB_10__::func_647(&(Local_68.f_8), "", "", &iLocal_123, iLocal_124, 0);
						}
						else if (!iLocal_98)
						{
							if (!__LIB_20__::func_245("BBC_T14", 1))
							{
								__LIB_20__::func_244(&(Local_68.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_123, &iLocal_124, 1, 1);
								iLocal_98 = 1;
							}
						}
						else
						{
							__LIB_10__::func_647(&(Local_68.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_123, iLocal_124, 1);
							if (__LIB_0__::func_530(Local_68.f_9, Local_329, 25f, 1) && __LIB_10__::func_660(Local_68.f_9, Local_329, 10f))
							{
								if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
								{
									if (__LIB_10__::func_683(&(Local_68.f_19)))
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
								else if (__LIB_0__::func_530(Local_68.f_9, Local_329, 5f, 1))
								{
									iLocal_61 = 0;
								}
								else if (__LIB_10__::func_683(&(Local_68.f_19)))
								{
									if (__LIB_0__::func_530(Local_68.f_9, Local_329, (25f - 1.5f), 1))
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
						if (__LIB_10__::func_650(Local_68.f_9, Local_68.f_19, 25f, 0, 1090519040, 1097859072, 0))
						{
							iLocal_60 = 2;
						}
						break;
					case 0:
					case 1:
						if (!iLocal_91)
						{
							if (__LIB_0__::func_405("BBS_APHEND", 0, 0) || __LIB_0__::func_405("BBS_APHEND2", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							if (__LIB_0__::func_75())
							{
								__LIB_6__::func_771();
							}
							if (__LIB_41__::func_635(&uLocal_154, cLocal_147, "BB1_J2", 4, 0, 0, 0))
							{
								Local_68.f_17 = MISC::GET_GAME_TIMER();
								iLocal_120 = MISC::GET_GAME_TIMER();
								iLocal_91 = 1;
							}
							__LIB_10__::func_647(&(Local_68.f_8), "", "", &iLocal_123, iLocal_124, 0);
						}
						else if (!iLocal_86)
						{
							if (!__LIB_20__::func_245("BBC_T14", 1) && !__LIB_20__::func_245("BB1_J2", 1))
							{
								if (__LIB_0__::func_405("BBS_APHEND", 0, 0) || __LIB_0__::func_405("BBS_APHEND2", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								if (__LIB_0__::func_75())
								{
									__LIB_6__::func_771();
								}
								if (__LIB_41__::func_635(&uLocal_154, cLocal_148, "BBC_T1", 4, 0, 0, 0))
								{
									Local_68.f_17 = MISC::GET_GAME_TIMER();
									iLocal_86 = 1;
								}
								else if (iLocal_61 == 1)
								{
									if (__LIB_10__::func_638(iLocal_120, 1250))
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
							__LIB_10__::func_647(&(Local_68.f_8), "", "", &iLocal_123, iLocal_124, 0);
						}
						else if (Local_68.f_10 != 3 && Local_68.f_10 != 4)
						{
							if (__LIB_10__::func_638(Local_68.f_17, 500))
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
						if (__LIB_10__::func_650(Local_68.f_9, Local_68.f_19, 25f, 0, 1090519040, 1097859072, 0))
						{
							iLocal_60 = 2;
						}
						break;
					case 3:
						__LIB_10__::func_647(&(Local_68.f_8), "", "", &iLocal_123, iLocal_124, 0);
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
				if (__LIB_0__::func_405("BBS_APHEND", 0, 0) || __LIB_0__::func_405("BBS_APHEND2", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				__LIB_10__::func_647(&(Local_68.f_8), "", "", &iLocal_123, iLocal_124, 0);
				iLocal_123 = MISC::GET_GAME_TIMER();
				iLocal_124 = MISC::GET_GAME_TIMER();
				__LIB_10__::func_640(2);
				break;
			}
	}
}

int func_407(int iParam0, int iParam1, bool bParam2, float fParam3, float fParam4)//Position - 0x2E7ED
{
	if (__LIB_0__::func_121(iParam0))
	{
		if (!__LIB_10__::func_649(iParam1, 10))
		{
			if (bParam2)
			{
				if (!__LIB_0__::func_530(Local_68.f_9, Local_329, fParam3, 1))
				{
					return 0;
				}
				if (!__LIB_10__::func_660(iParam0, Local_329, fParam4))
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
			func_411(&Local_63, &uLocal_154);
			if (__LIB_1__::func_197(Local_68.f_9))
			{
				func_386(Local_68.f_9, &iLocal_131, 1126825984, 1);
				func_378(Local_68.f_9, &(Local_68.f_19), 1126825984, 7);
				__LIB_10__::func_649();
				if (__LIB_0__::func_530(Local_68.f_9, Local_329, 25f, 1) && __LIB_10__::func_660(Local_68.f_9, Local_329, 10f))
				{
					if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
					{
						if (__LIB_10__::func_683(&(Local_68.f_19)))
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
					else if (__LIB_0__::func_530(Local_68.f_9, Local_329, 5f, 1))
					{
						iLocal_61 = 0;
						iLocal_60 = 2;
					}
					else if (__LIB_10__::func_683(&(Local_68.f_19)))
					{
						if (__LIB_0__::func_530(Local_68.f_9, Local_329, (25f - 1.5f), 1))
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
				if (__LIB_10__::func_650(Local_68.f_9, Local_68.f_19, 25f, 0, 1090519040, 1097859072, 0))
				{
					iLocal_61 = 3;
					iLocal_60 = 2;
				}
			}
			break;
		case 2:
			if (iLocal_61 == 3)
			{
				__LIB_20__::func_244(&(Local_68.f_8), "", "", &iLocal_123, &iLocal_124, 1, 0);
				__LIB_10__::func_640(2);
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
				__LIB_10__::func_640(1);
			}
			break;
	}
}

void func_411(var uParam0, var uParam1)//Position - 0x2EAC4
{
	if (!uParam0->f_7)
	{
		if (func_414(26, __LIB_10__::func_664(uParam0->f_4), 0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((!__LIB_0__::func_75() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID())) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					__LIB_0__::func_203(uParam1, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
					if (__LIB_35__::func_536(uParam1, __LIB_10__::func_662(uParam0->f_4), __LIB_10__::func_661(uParam0->f_4), 4, 0, 0, 0))
					{
						uParam0->f_7 = 1;
					}
				}
				else
				{
					uParam0->f_7 = 1;
				}
			}
			else
			{
				uParam0->f_7 = 1;
			}
		}
	}
}

int func_414(int iParam0, int iParam1, int iParam2)//Position - 0x2EBDD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = __LIB_10__::func_660(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = Global_44257[iParam1 /*12*/].f_3;
	if (iVar1 >= 3)
	{
		return 0;
	}
	iVar2 = -1;
	iVar3 = 0;
	iVar4 = iParam2;
	iVar3 = 0;
	while (iVar3 < Global_53557[iVar0 /*203*/].f_9)
	{
		if (Global_53557[iVar0 /*203*/].f_10[iVar3 /*48*/] == iParam1)
		{
			if (iVar4 == 0)
			{
				iVar2 = iVar3;
			}
			else
			{
				iVar4 = (iVar4 - 1);
			}
		}
		iVar3++;
	}
	if (iVar2 == -1)
	{
		return 0;
	}
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 16)
	{
		if ((Global_53195[iVar1 /*120*/].f_86[iVar3] && Global_53195[iVar1 /*120*/].f_18[iVar3] == Global_53557[iVar0 /*203*/].f_1) && Global_53195[iVar1 /*120*/].f_1[iVar3] == iVar2)
		{
			return Global_53195[iVar1 /*120*/].f_69[iVar3];
		}
		iVar3++;
	}
	return 0;
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
					__LIB_10__::func_640(8);
				}
			}
		}
	}
}

int func_420(bool bParam0)//Position - 0x2EF50
{
	if (__LIB_1__::func_197(Local_75.f_0))
	{
		if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_75.f_0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_75.f_0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Local_75.f_0))
		{
			return 1;
		}
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_75.f_0))
			{
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_77.f_0))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_77.f_0))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_79.f_0))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_79.f_0))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_78.f_0))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_78.f_0))
				{
					return 1;
				}
			}
		}
		if (PED::HAS_PED_RECEIVED_EVENT(Local_75.f_0, 61))
		{
			return 1;
		}
		if (PED::IS_PED_RAGDOLL(Local_75.f_0))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(Local_75.f_0, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
			{
				return 1;
			}
		}
		if (PED::HAS_PED_RECEIVED_EVENT(Local_75.f_0, 51))
		{
			return 1;
		}
		if (func_426(Local_75.f_0, 1126825984))
		{
			return 1;
		}
		if (__LIB_10__::func_663(Local_75.f_0, 1, 0, 0, 0))
		{
			return 1;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_75.f_0, true), 15f))
		{
			return 1;
		}
		if (PED::HAS_PED_RECEIVED_EVENT(Local_75.f_0, 73))
		{
			return 1;
		}
		if (bParam0)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_426(int iParam0, float fParam1)//Position - 0x2F41A
{
	float fVar0;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(iParam0))
	{
		if (__LIB_10__::func_621(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, false, true, 0))
			{
				if (func_427(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_427(int iParam0, float fParam1)//Position - 0x2F490
{
	return __LIB_20__::func_247(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
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
	if (__LIB_0__::func_295())
	{
		iLocal_103 = 1;
	}
	else
	{
		iLocal_103 = 0;
	}
	if (!__LIB_0__::func_295())
	{
		if (iLocal_59 == 0)
		{
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_20__::func_249(PLAYER::PLAYER_PED_ID(), Local_334, fLocal_115, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				__LIB_20__::func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
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
		if (!__LIB_0__::func_295())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			__LIB_20__::func_249(PLAYER::PLAYER_PED_ID(), Local_334, fLocal_115, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	}
	__LIB_0__::func_296();
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_319);
	func_529();
	__LIB_10__::func_640(0);
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
		__LIB_0__::func_296();
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::ENABLE_DISPATCH_SERVICE(2, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	MISC::ENABLE_DISPATCH_SERVICE(4, true);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	PED::SET_CREATE_RANDOM_COPS(true);
	__LIB_8__::func_770(0);
	__LIB_0__::func_312(0, 0);
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	__LIB_10__::func_665(0);
	AUDIO::SET_AGGRESSIVE_HORNS(false);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	__LIB_0__::func_410(1);
	if (iLocal_58 > 2)
	{
		__LIB_10__::func_659(0, &uLocal_141);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_140, false);
	PED::CLEAR_PED_NON_CREATION_AREA();
	__LIB_0__::func_202(&uLocal_154, 2);
	__LIB_0__::func_202(&uLocal_154, 3);
	__LIB_0__::func_202(&uLocal_154, 4);
	__LIB_9__::func_981(&uLocal_44, 0, 0);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	MISC::SET_TIME_SCALE(1f);
	__LIB_35__::func_891(1, 1, 1, 1);
	CAM::STOP_SCRIPT_GLOBAL_SHAKING(false);
	__LIB_35__::func_895(1, 1, 1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, true);
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	func_115();
	func_99(bParam0);
	__LIB_20__::func_249(bParam1);
}

void func_436()//Position - 0x2F793
{
	STREAMING::REMOVE_ANIM_SET(__LIB_10__::func_653());
	STREAMING::REMOVE_ANIM_SET(__LIB_10__::func_653());
}

void func_442(bool bParam0, bool bParam1)//Position - 0x2F980
{
	if (bParam0)
	{
		__LIB_35__::func_895(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_200(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_444(int iParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x2FA48
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_0__::func_294() || !__LIB_24__::func_934())
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		if (!__LIB_35__::func_890(iParam4, iParam5, iParam6, iParam11))
		{
			iVar0 = 0;
		}
	}
	if (iVar0 == 1)
	{
		__LIB_32__::func_493();
		while (!__LIB_26__::func_580())
		{
			SYSTEM::WAIT(0);
		}
		*iParam0 = func_494(Param1, fParam2);
	}
	else if (iParam7 == 1)
	{
		if (__LIB_0__::func_78(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { Global_106934.f_2890 };
			fParam2 = Global_106934.f_2890.f_6;
		}
		MISC::CLEAR_AREA(Param1, 5f, true, false, false, false);
		__LIB_32__::func_562(Param1, 5f, 0);
		if (__LIB_0__::func_43(iParam10))
		{
			__LIB_20__::func_166(iParam10, 0);
			while (!__LIB_10__::func_665(iParam0, iParam10, Param1, fParam2, 1, 0))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(iParam8);
			while (!STREAMING::HAS_MODEL_LOADED(iParam8))
			{
				SYSTEM::WAIT(0);
			}
			*iParam0 = VEHICLE::CREATE_VEHICLE(iParam8, Param1, fParam2, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0, false))
			{
				if (iParam9 == 0)
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, 0);
				}
				else if (iParam9 > 0)
				{
					VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam9, iParam9);
				}
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam8);
		}
	}
	if (iParam3 == 1)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0, false)) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, -1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
		}
	}
}

int func_494(struct<3> Param0, float fParam1)//Position - 0x34C3C
{
	return func_495(&(Global_106934.f_2890), Param0, fParam1, 0);
}

int func_495(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x34C56
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	var uVar3;
	int iVar4;
	if (__LIB_18__::func_189(uParam0))
	{
		if (__LIB_0__::func_78(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.87164f, 185.62384f, 71.40275f, -807.48944f, 189.3762f, 75.27323f, 6.5f, false, true))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (__LIB_26__::func_518(uParam0))
		{
			MISC::CLEAR_AREA(Param1, 5f, true, false, false, false);
			__LIB_32__::func_562(Param1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_66, Param1, fParam2, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, false, false, true);
				}
				__LIB_36__::func_13(iVar0, &(uParam0->f_12), 0, 1);
				bVar2 = true;
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_66))
				{
					if (!WATER::TEST_PROBE_AGAINST_WATER(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							__LIB_20__::func_166(uParam0->f_11, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							__LIB_20__::func_166(uParam0->f_11, 2);
						}
					}
					VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar0, false);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, false);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, true);
					__LIB_10__::func_569(iVar0, uParam0->f_11);
				}
				else if ((!__LIB_32__::func_561(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar4 = __LIB_0__::func_393(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						__LIB_32__::func_558(iVar4);
					}
				}
				if (((Global_100441 != 13 && Global_100441 != 10) && Global_100441 != 11) && Global_100441 != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_100441.f_3)) == Global_78125)
					{
						if (uParam0->f_12.f_66 == Global_113386.f_32749.f_69[21 /*78*/].f_66)
						{
							__LIB_6__::func_770(24, 0);
							__LIB_32__::func_558(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					__LIB_35__::func_888(iVar0, uParam0->f_11);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_66);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_529()//Position - 0x35FD8
{
	struct<3> Var0;
	struct<3> Var1;
	__LIB_10__::func_667();
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
	Var0 = { __LIB_10__::func_669(Local_63) };
	Var1 = { __LIB_10__::func_668(Local_63) };
	PED::SET_PED_NON_CREATION_AREA(Var0, Var1);
	iLocal_140 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var1, false, true, true, true);
	MISC::CLEAR_AREA(Local_63, 30f, false, false, false, false);
	MISC::ENABLE_DISPATCH_SERVICE(2, false);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	MISC::ENABLE_DISPATCH_SERVICE(4, false);
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	PED::SET_CREATE_RANDOM_COPS(false);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
	__LIB_10__::func_665(1);
	while (!func_532())
	{
		SYSTEM::WAIT(0);
	}
	func_530();
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_203(&uLocal_154, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), true);
	}
	if (__LIB_1__::func_197(Local_68.f_9))
	{
		__LIB_0__::func_203(&uLocal_154, 3, Local_68.f_9, sLocal_143, 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_68.f_9, true);
	}
}

void func_530()//Position - 0x36129
{
	int iVar0;
	if (__LIB_1__::func_197(Local_68.f_9))
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
		__LIB_10__::func_648(Local_68.f_9);
		__LIB_10__::func_667(Local_68.f_9, "TARGET_", 0);
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
		if (__LIB_1__::func_197(Local_70[iVar0 /*19*/]))
		{
			__LIB_10__::func_648(Local_70[iVar0 /*19*/]);
			if (Local_70[iVar0 /*19*/].f_5 != 0)
			{
				WEAPON::GIVE_WEAPON_TO_PED(Local_70[iVar0 /*19*/], Local_70[iVar0 /*19*/].f_5, -1, true, true);
			}
			PED::SET_PED_CONFIG_FLAG(Local_70[iVar0 /*19*/], 137, true);
			__LIB_10__::func_667(Local_70[iVar0 /*19*/], "BACKUP_", iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_126 - 1))
	{
		if (__LIB_1__::func_183(Local_71[iVar0 /*6*/]))
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
	if (__LIB_10__::func_633(&(Local_68.f_9), Local_68.f_11, Local_68.f_13, Local_68.f_16, 1, 0, 0))
	{
		if (__LIB_1__::func_197(Local_68.f_9))
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
			if (__LIB_10__::func_633(&(Local_70[iVar2 /*19*/]), Local_70[iVar2 /*19*/].f_18, Local_70[iVar2 /*19*/].f_1, Local_70[iVar2 /*19*/].f_4, 0, 0, 0))
			{
				if (__LIB_1__::func_197(Local_70[iVar2 /*19*/]))
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
			if (func_534(&(Local_71[iVar2 /*6*/]), Local_71[iVar2 /*6*/].f_5, Local_71[iVar2 /*6*/].f_1, Local_71[iVar2 /*6*/].f_4, 1))
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
			if (func_58(&(Local_73[iVar2 /*9*/]), Local_73[iVar2 /*9*/].f_8, Local_73[iVar2 /*9*/].f_1, Local_73[iVar2 /*9*/].f_7, 1))
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
			if (func_533(&(Local_74[iVar2 /*7*/]), Local_74[iVar2 /*7*/].f_5, Local_74[iVar2 /*7*/].f_2, Local_74[iVar2 /*7*/].f_6, Local_74[iVar2 /*7*/].f_1, 1))
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

int func_533(var uParam0, int iParam1, struct<3> Param2, int iParam3, int iParam4, bool bParam5)//Position - 0x36513
{
	if (!OBJECT::DOES_PICKUP_EXIST(*uParam0))
	{
		if (__LIB_10__::func_634(iParam4))
		{
			*uParam0 = OBJECT::CREATE_PICKUP(iParam1, Param2, iParam3, -1, true, iParam4);
			if (OBJECT::DOES_PICKUP_EXIST(*uParam0))
			{
				if (OBJECT::DOES_PICKUP_OBJECT_EXIST(*uParam0))
				{
					if (bParam5)
					{
						__LIB_10__::func_634(iParam4, 1);
					}
					return 1;
				}
			}
		}
	}
	else if (OBJECT::DOES_PICKUP_OBJECT_EXIST(*uParam0))
	{
		if (bParam5)
		{
			__LIB_10__::func_634(iParam4, 0);
		}
		return 1;
	}
	return 0;
}

int func_534(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x36584
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (__LIB_10__::func_634(iParam1))
		{
			*uParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, true, false);
				}
				if (__LIB_1__::func_183(*uParam0))
				{
					ENTITY::SET_ENTITY_COORDS(*uParam0, Param2, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(*uParam0, fParam3);
				}
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 5f);
				if (bParam4)
				{
					__LIB_10__::func_634(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (bParam4)
		{
			__LIB_10__::func_634(iParam1, 0);
		}
		return 1;
	}
	return 0;
}

void func_587()//Position - 0x3969D
{
	if (iLocal_109)
	{
		func_434(0, 1);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

