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
	struct<19> Local_69[3];
	int iLocal_70 = 0;
	struct<6> Local_71[6];
	struct<6> Local_72[8];
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
	int iLocal_85 = 0;
	int iLocal_86[2] = { 0, 0 };
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	bool bLocal_101 = 0;
	int iLocal_102 = 0;
	bool bLocal_103 = 0;
	int iLocal_104 = 0;
	bool bLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	bool bLocal_114 = 0;
	int* iLocal_115 = NULL;
	int iLocal_116 = 0;
	float fLocal_117 = 0f;
	float fLocal_118 = 0f;
	float fLocal_119 = 0f;
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
	int iLocal_141 = 0;
	var uLocal_142 = 0;
	int iLocal_143 = 0;
	char* sLocal_144 = NULL;
	char* sLocal_145 = NULL;
	char* sLocal_146 = NULL;
	char* sLocal_147[2] = { NULL, NULL };
	char[] cLocal_148[8] = 0;
	char[] cLocal_149[8] = 0;
	char* sLocal_150 = NULL;
	char* sLocal_151 = NULL;
	char* sLocal_152 = NULL;
	char* sLocal_153 = NULL;
	char* sLocal_154 = NULL;
	var uLocal_155 = 16;
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
	var uLocal_319 = 0;
	int iLocal_320 = 0;
	struct<3> Local_321 = { 0, 0, 0 } ;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	struct<3> Local_325 = { 0, 0, 0 } ;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	struct<6> Local_329 = { 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_330 = { 0, 0, 0 } ;
	struct<3> Local_331 = { 0, 0, 0 } ;
	struct<3> Local_332 = { 0, 0, 0 } ;
	struct<3> Local_333 = { 0, 0, 0 } ;
	struct<3> Local_334 = { 0, 0, 0 } ;
	struct<3> Local_335 = { 0, 0, 0 } ;
	struct<3> Local_336 = { 0, 0, 0 } ;
	struct<3> Local_337 = { 0, 0, 0 } ;
	int iLocal_338 = 0;
	struct<8> Local_339 = { 0, 0, 0, 0, 0, 0, -1, 0 } ;
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
	bLocal_103 = true;
	cLocal_148 = "BB4AUD";
	cLocal_149 = "BBCAUD";
	sLocal_150 = "Trevor";
	sLocal_151 = "Maude";
	sLocal_152 = "maude_criminal_4";
	sLocal_153 = "maude_chair";
	sLocal_154 = "maude_laptop";
	StringCopy(&Local_321, "", 24);
	StringCopy(&Local_325, "MAUDE_MCS_5", 24);
	StringCopy(&Local_329, "", 24);
	Local_63 = { ScriptParam_339 };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		if (iLocal_58 == 0)
		{
			Global_112095 = 0;
			func_594();
		}
		else
		{
			Global_112095 = 3;
			__LIB_38__::func_36(3);
			func_594();
		}
	}
	if (!__LIB_38__::func_35(1))
	{
		Global_112095 = 0;
		func_594();
	}
	MISC::SET_MISSION_FLAG(true);
	func_536();
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
				func_451(&iLocal_338, 1476.8867f, 6363.799f, 22.5945f, 171.3869f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
				__LIB_0__::func_370(Local_333, fLocal_117, 1, 0);
				iLocal_61 = 2;
				func_439(1, 0);
				break;
			case 1:
				func_451(&iLocal_338, 2704.0776f, 4152.2397f, 42.2514f, 175.193f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
				__LIB_0__::func_370(Local_330, 254.9762f, 0, 0);
				func_439(4, 0);
				break;
			default:
				break;
		}
	}
	else if (__LIB_0__::func_2(0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_20__::func_249(PLAYER::PLAYER_PED_ID(), Local_333, fLocal_117, 0, 0);
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
			Local_331 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			func_425();
			__LIB_10__::func_686();
			switch (iLocal_58)
			{
				case 0:
					func_417();
					break;
				case 1:
					func_406();
					break;
				case 2:
					func_399();
					break;
				case 3:
					func_395();
					break;
				case 6:
					func_388();
					break;
				case 7:
					func_318();
					break;
				case 4:
					func_130();
					break;
				case 5:
					func_122(1);
					break;
				case 8:
					func_119();
					break;
				case 9:
					func_72();
					break;
			}
			if (bLocal_103 == 0)
			{
				func_1(iLocal_59);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x2C7
{
	if (iLocal_58 == iParam0)
	{
		if (__LIB_0__::func_295())
		{
			__LIB_6__::func_775(0, -1, 0);
		}
		func_36(iLocal_58);
		if (iLocal_58 == 4)
		{
			__LIB_38__::func_33(1, 0, 1);
		}
		else
		{
			__LIB_38__::func_33(1, 1, 1);
		}
		bLocal_103 = true;
		iLocal_104 = 0;
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

void func_2()//Position - 0x31E
{
	int iVar0;
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
						__LIB_10__::func_701(PLAYER::PLAYER_PED_ID(), Local_334, fLocal_118, 0, 1);
						if (__LIB_1__::func_197(Local_68.f_9))
						{
							__LIB_10__::func_624(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_68.f_9, true));
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						if (iLocal_104 == 0)
						{
							if (iLocal_59 == 1)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_20__::func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_104 = 1;
								}
							}
						}
					}
					iLocal_88 = 1;
					iLocal_61 = 2;
					func_7();
					iLocal_60 = 2;
				}
				break;
			case 1:
				iLocal_88 = 1;
				iLocal_87 = 1;
				if (iLocal_60 == 1)
				{
					if (!__LIB_0__::func_295())
					{
						__LIB_10__::func_701(PLAYER::PLAYER_PED_ID(), Local_335, fLocal_119, 0, 1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						if (iLocal_104 == 0)
						{
							if (iLocal_59 == 2)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_20__::func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_104 = 1;
								}
							}
						}
					}
					Local_68.f_17 = (MISC::GET_GAME_TIMER() - 5000);
					func_7();
					iLocal_60 = 2;
				}
				break;
			case 2:
				iLocal_81 = 1;
				if (iLocal_60 == 1)
				{
					iLocal_107 = 1;
					iLocal_82 = 1;
					iLocal_83 = 1;
					if (iLocal_132 > 0)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_132 - 1))
						{
							if (__LIB_1__::func_197(Local_69[iVar0 /*19*/]))
							{
								PED::EXPLODE_PED_HEAD(Local_69[iVar0 /*19*/], joaat("WEAPON_SNIPERRIFLE"));
								ENTITY::SET_ENTITY_HEALTH(Local_69[iVar0 /*19*/], 0, 0);
							}
							iVar0++;
						}
					}
					__LIB_0__::func_296();
					__LIB_6__::func_771();
					if (!__LIB_0__::func_295())
					{
						__LIB_26__::func_239(Local_68.f_9, 5f);
						if (iLocal_104 == 0)
						{
							if (iLocal_59 == 3)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_20__::func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_104 = 1;
								}
							}
						}
					}
					func_7();
					iLocal_60 = 2;
				}
				break;
			case 3:
				iLocal_95 = 1;
				if (iLocal_60 == 1)
				{
					__LIB_20__::func_249(Local_68.f_9, Local_330, 0f, 0, 0);
					if (!__LIB_0__::func_295())
					{
						__LIB_20__::func_249(PLAYER::PLAYER_PED_ID(), Local_330, 254.9762f, 0, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						if (iLocal_104 == 0)
						{
							if (iLocal_59 == 4)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_20__::func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_104 = 1;
								}
							}
						}
					}
					func_7();
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
					func_7();
				}
				break;
			case 7:
				if (iLocal_60 == 1)
				{
					iLocal_83 = 1;
					if (!__LIB_0__::func_295())
					{
						__LIB_26__::func_239(Local_68.f_9, 2.5f);
						if (iLocal_104 == 0)
						{
							if (iLocal_59 == 3)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_20__::func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_104 = 1;
								}
							}
						}
					}
					__LIB_0__::func_296();
					__LIB_6__::func_771();
					func_7();
					iLocal_60 = 2;
				}
				break;
			}
	}
}

void func_7()//Position - 0x724
{
	int iVar0;
	__LIB_20__::func_239();
	Local_68.f_17 = 0;
	Local_68.f_18 = 0;
	Local_68.f_19 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_132 - 1))
	{
		Local_69[iVar0 /*19*/].f_15 = 0;
		Local_69[iVar0 /*19*/].f_16 = 0;
		iVar0++;
	}
}

void func_36(int iParam0)//Position - 0xEE5
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 4:
				__LIB_32__::func_565(&Local_325);
				func_67();
				while (!__LIB_18__::func_170(1, 1093140480, 0) || !func_37())
				{
					__LIB_32__::func_565(&Local_325);
					func_67();
					SYSTEM::WAIT(0);
				}
				break;
			}
	}
}

int func_37()//Position - 0xF41
{
	if (__LIB_1__::func_148(Local_331, Local_75.f_1, 210f))
	{
		if (!iLocal_110)
		{
			if ((func_58(2) && __LIB_10__::func_680(&Local_77, Local_77.f_5, Local_77.f_1, Local_77.f_4, 1)) && __LIB_10__::func_680(&Local_78, Local_78.f_5, Local_78.f_1, Local_78.f_4, 1))
			{
				if (__LIB_20__::func_250(&Local_75, Local_75.f_6, Local_75.f_1, Local_75.f_4, 1, 0, 1))
				{
					func_49();
					iLocal_110 = 1;
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_79.f_0))
		{
			if (__LIB_1__::func_148(Local_331, Local_79.f_1, 150f))
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_79.f_1, 10f, __LIB_10__::func_629(), false))
				{
					Local_79.f_0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_79.f_1, 10f, __LIB_10__::func_629(), true, false, true);
					if (__LIB_0__::func_121(Local_79.f_0))
					{
						ENTITY::SET_ENTITY_COORDS(Local_79.f_0, __LIB_10__::func_628(), true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_79.f_0, __LIB_10__::func_627());
						ENTITY::FREEZE_ENTITY_POSITION(Local_79.f_0, true);
					}
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_80.f_0))
		{
			if (__LIB_1__::func_148(Local_331, Local_80.f_1, 150f))
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_80.f_1, 10f, __LIB_10__::func_626(), false))
				{
					Local_80.f_0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_80.f_1, 10f, __LIB_10__::func_626(), true, false, true);
				}
			}
		}
	}
	else if (!CAM::IS_SPHERE_VISIBLE(Local_75.f_1, 2.5f))
	{
		__LIB_20__::func_241(&Local_75, 1);
		STREAMING::REMOVE_ANIM_DICT(__LIB_10__::func_625());
		__LIB_20__::func_240(&Local_77, 1);
		__LIB_20__::func_240(&Local_78, 1);
		__LIB_20__::func_240(&Local_79, 0);
		__LIB_20__::func_240(&Local_80, 0);
		iLocal_110 = 0;
	}
	return iLocal_110;
}

void func_49()//Position - 0x1272
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_197(Local_75.f_0))
	{
		if (__LIB_0__::func_121(Local_77.f_0))
		{
			if (func_58(2))
			{
				iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(__LIB_10__::func_628(), __LIB_10__::func_632(), 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar0, true);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iVar0, false);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_75.f_0, iVar0, __LIB_10__::func_625(), __LIB_10__::func_631(), 1000f, -8f, 4688, 0, 1000f, 0);
				iVar1 = 0;
				iVar1 += 16;
				iVar1 += 64;
				iVar1 += 512;
				iVar1 += 4096;
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_77.f_0, iVar0, __LIB_10__::func_630(), __LIB_10__::func_625(), 1000f, -8f, iVar1, 1000f);
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

int func_58(int iParam0)//Position - 0x14D8
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
		case 2:
			STREAMING::REQUEST_ANIM_DICT(__LIB_10__::func_625());
			if (STREAMING::HAS_ANIM_DICT_LOADED(__LIB_10__::func_625()))
			{
				return 1;
			}
			break;
		case 1:
			STREAMING::REQUEST_ANIM_DICT("oddjobs@bailbond_hobodepressed");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@bailbond_hobohang_out_street_b");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@bailbond_hobohang_out_street_c");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@bailbond_hobotwitchy");
			if (((STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@bailbond_hobodepressed") && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@bailbond_hobohang_out_street_b")) && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@bailbond_hobohang_out_street_c")) && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@bailbond_hobotwitchy"))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_67()//Position - 0x18F7
{
	if (__LIB_0__::func_121(Local_68.f_9))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_152, Local_68.f_9, 0);
		}
	}
	if (__LIB_0__::func_121(Local_75.f_0))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_151, Local_75.f_0, 0);
		}
	}
}

void func_72()//Position - 0x1A52
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
					__LIB_0__::func_202(&uLocal_155, 4);
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
				if (__LIB_20__::func_253(&Local_75, &Local_77, &iLocal_139))
				{
					iLocal_113 = 1;
				}
			}
			else if (iLocal_62 == 2)
			{
				iLocal_100 = 0;
				StringCopy(&Local_321, "BBC_T12", 24);
			}
			if (__LIB_1__::func_197(Local_68.f_9))
			{
				if (PED::IS_PED_IN_GROUP(Local_68.f_9))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_68.f_9);
				}
				func_106(Local_68.f_9, 1);
			}
			iVar1 = 0;
			while (iVar1 <= (iLocal_132 - 1))
			{
				func_106(Local_69[iVar1 /*19*/], 1);
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
			__LIB_38__::func_36(3);
			iLocal_60 = 1;
			break;
		case 1:
			if (__LIB_0__::func_204())
			{
				func_98(1);
				func_594();
			}
			else if (!iLocal_100)
			{
				if (__LIB_0__::func_75())
				{
					__LIB_6__::func_771();
				}
				if (iLocal_62 == 4)
				{
					if (__LIB_1__::func_197(Local_75.f_0))
					{
						if (__LIB_0__::func_530(Local_75.f_0, Local_331, 35f, 1))
						{
							__LIB_0__::func_203(&uLocal_155, 4, Local_75.f_0, "MAUDE", 0, 1);
							if (__LIB_41__::func_635(&uLocal_155, cLocal_149, &Local_321, 4, 0, 0, 0))
							{
								iLocal_100 = 1;
							}
						}
					}
				}
				else if (__LIB_41__::func_635(&uLocal_155, cLocal_149, &Local_321, 4, 0, 0, 0))
				{
					iLocal_100 = 1;
				}
				if (iLocal_62 == 4)
				{
					if (!iLocal_113)
					{
						STREAMING::REQUEST_ANIM_DICT(__LIB_10__::func_637());
						if (__LIB_20__::func_253(&Local_75, &Local_77, &iLocal_139))
						{
							iLocal_113 = 1;
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
									__LIB_20__::func_252(&Local_75);
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

void func_98(bool bParam0)//Position - 0x26BA
{
	int iVar0;
	if (iLocal_130 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_130 - 1))
		{
			__LIB_20__::func_240(&(Local_72[iVar0 /*6*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_128 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_128 - 1))
		{
			__LIB_20__::func_240(&(Local_73[iVar0 /*9*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_131 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_131 - 1))
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
	if (iLocal_132 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_132 - 1))
		{
			if (iLocal_67 == 4)
			{
				if (__LIB_1__::func_197(Local_69[iVar0 /*19*/]))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_69[iVar0 /*19*/], joaat("HATES_PLAYER"));
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_69[iVar0 /*19*/], false);
					if (Global_112095 == 0)
					{
						PED::SET_PED_KEEP_TASK(Local_69[iVar0 /*19*/], false);
					}
					else
					{
						PED::SET_PED_KEEP_TASK(Local_69[iVar0 /*19*/], true);
					}
				}
			}
			__LIB_20__::func_241(&(Local_69[iVar0 /*19*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_129 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_129 - 1))
		{
			__LIB_32__::func_566(&(Local_71[iVar0 /*6*/]), bParam0);
			iVar0++;
		}
	}
}

void func_106(int iParam0, bool bParam1)//Position - 0x2A2C
{
	if (__LIB_1__::func_197(iParam0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 5, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 17, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 512, false);
		if (!__LIB_4__::func_465(iParam0, joaat("SCRIPT_TASK_SMART_FLEE_PED")))
		{
			TASK::CLEAR_PED_TASKS(iParam0);
			TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
			TASK::TASK_LOOK_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
			TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
		}
		if (bParam1)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		}
		PED::SET_PED_KEEP_TASK(iParam0, true);
	}
}

void func_115()//Position - 0x2EC5
{
	func_118(iLocal_132);
	__LIB_0__::func_523(&(Local_68.f_8));
	__LIB_0__::func_489(&Local_68);
	__LIB_0__::func_523(&iLocal_115);
}

void func_118(int iParam0)//Position - 0x2F7B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		__LIB_0__::func_489(&(Local_69[iVar0 /*19*/].f_6));
		iVar0++;
	}
}

void func_119()//Position - 0x2FA4
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
			while (iVar0 <= (iLocal_132 - 1))
			{
				func_121(iVar0);
				iVar0++;
			}
			iLocal_136 = MISC::GET_GAME_TIMER();
			iLocal_60 = 1;
			break;
		case 1:
			if (__LIB_10__::func_638(iLocal_136, 500))
			{
				if (!bLocal_101)
				{
					if (__LIB_0__::func_75())
					{
						__LIB_0__::func_296();
						__LIB_6__::func_771();
					}
					if (__LIB_41__::func_635(&uLocal_155, cLocal_149, "BBC_PK1", 4, 0, 0, 0))
					{
						bLocal_101 = true;
					}
				}
				if (bLocal_101)
				{
					func_122(2);
				}
				if (__LIB_10__::func_638(iLocal_136, 1500))
				{
					func_122(2);
				}
			}
			break;
	}
}

void func_121(int iParam0)//Position - 0x3079
{
	if (__LIB_1__::func_197(Local_69[iParam0 /*19*/]))
	{
		if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_69[iParam0 /*19*/]) == iLocal_320)
		{
			PED::SET_PED_HEARING_RANGE(Local_69[iParam0 /*19*/], 30f);
			PED::SET_PED_SEEING_RANGE(Local_69[iParam0 /*19*/], 30f);
			PED::SET_PED_ID_RANGE(Local_69[iParam0 /*19*/], 30f);
			PED::SET_PED_COMBAT_RANGE(Local_69[iParam0 /*19*/], 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_69[iParam0 /*19*/], 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_69[iParam0 /*19*/], 3, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_69[iParam0 /*19*/], 0, true);
			TASK::TASK_LOOK_AT_ENTITY(Local_69[iParam0 /*19*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			if (!PED::IS_PED_FLEEING(Local_69[iParam0 /*19*/]))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(Local_69[iParam0 /*19*/]))
				{
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_69[iParam0 /*19*/]);
				}
				TASK::TASK_CLEAR_LOOK_AT(Local_69[iParam0 /*19*/]);
				TASK::CLEAR_PED_SECONDARY_TASK(Local_69[iParam0 /*19*/]);
				TASK::CLEAR_PED_TASKS(Local_69[iParam0 /*19*/]);
				TASK::TASK_HANDS_UP(Local_69[iParam0 /*19*/], -1, PLAYER::PLAYER_PED_ID(), -1, 0);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_69[iParam0 /*19*/], true);
			Local_69[iParam0 /*19*/].f_14 = 2;
		}
		else
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_69[iParam0 /*19*/], 13, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_69[iParam0 /*19*/], 5, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_69[iParam0 /*19*/], 17, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_69[iParam0 /*19*/], 0, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_69[iParam0 /*19*/], false);
			Local_69[iParam0 /*19*/].f_14 = 5;
		}
	}
}

void func_122(int iParam0)//Position - 0x31BC
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
	func_594();
}

void func_130()//Position - 0x389F
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	switch (iLocal_60)
	{
		case 0:
			__LIB_32__::func_565(&Local_325);
			func_67();
			if (func_37())
			{
				if (__LIB_18__::func_170(1, 10.5f, 1))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_150, 0, 0, 0);
					if (__LIB_0__::func_121(Local_75.f_0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_75.f_0, sLocal_151, 0, 0, 0);
					}
					if (__LIB_0__::func_121(Local_68.f_9))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_68.f_9, sLocal_152, 0, 0, 0);
					}
					if (__LIB_0__::func_121(Local_77.f_0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_77.f_0, sLocal_153, 0, 0, 0);
					}
					if (__LIB_0__::func_121(Local_78.f_0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_78.f_0, sLocal_154, 0, 0, 0);
					}
					CUTSCENE::START_CUTSCENE(0);
					SYSTEM::WAIT(0);
					__LIB_0__::func_84(800, 0);
					func_199(2727.58f, 4144.19f, 43.95f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					__LIB_10__::func_642(&Var0, &Var1, &fVar3);
					Var2 = { __LIB_10__::func_641() };
					if (__LIB_20__::func_739(Var2, 0))
					{
						__LIB_32__::func_570(Var0, Var1, fVar3, 2719.87f, 4143.46f, 43.46f, 261.91f, 1, 1, 1, 0, 0);
						func_132(2719.87f, 4143.46f, 43.46f, 261.91f, 0, 145);
					}
					else
					{
						__LIB_32__::func_570(Var0, Var1, fVar3, 2710.6646f, 4149.075f, 42.7026f, 180.9488f, 1, 1, 1, 0, 0);
						func_132(2710.6646f, 4149.075f, 42.7026f, 180.9488f, 0, 145);
					}
					if (__LIB_1__::func_197(Local_68.f_9))
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
				if (__LIB_1__::func_197(Local_75.f_0))
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_151, 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_153, 0))
					{
						func_49();
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_150, 0))
			{
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
			else if (CUTSCENE::GET_CUTSCENE_TIME() >= 64500)
			{
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/, true);
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
				if (bLocal_103)
				{
					__LIB_35__::func_891(1, 1, 1, 1);
				}
				if (__LIB_1__::func_197(Local_68.f_9))
				{
					if (PED::IS_PED_IN_GROUP(Local_68.f_9))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_68.f_9);
					}
				}
				__LIB_20__::func_241(&(Local_68.f_9), 1);
				if (__LIB_1__::func_197(Local_75.f_0))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_75.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					PED::SET_PED_KEEP_TASK(Local_75.f_0, true);
				}
				__LIB_0__::func_124(&Local_75, 1, 0, 1);
				__LIB_10__::func_640(5);
			}
			break;
	}
}

void func_132(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x3BA3
{
	struct<3> Var0;
	var uVar1;
	if (ENTITY::DOES_ENTITY_EXIST(Global_103950.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_103950.f_4, false))
		{
			if (__LIB_0__::func_314(24) != Global_103950.f_4)
			{
				if (iParam2 == 1)
				{
					if (__LIB_19__::func_977(ENTITY::GET_ENTITY_COORDS(Global_103950.f_4, true), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				func_133(Global_103950.f_4, Param0, fParam1, 24, 0);
			}
		}
	}
}

void func_133(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)//Position - 0x3C1E
{
	struct<60> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[25], false))
			{
				if (Global_77137.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		__LIB_20__::func_278(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		__LIB_6__::func_760(iParam0, &Var0);
		if (__LIB_0__::func_78(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_78125 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		__LIB_26__::func_263(iParam3, &Var0, Param1, fParam2, __LIB_0__::func_119(iParam0));
		func_134(iParam3, iParam0, 0);
	}
}

void func_134(int iParam0, int iParam1, int iParam2)//Position - 0x3D47
{
	int iVar0;
	if (iParam0 == -1)
	{
		return;
	}
	if (!__LIB_12__::func_98(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_77137.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_77137.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_78044 != -1 && Global_78044 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, true, true);
			}
			if (iParam0 == 24)
			{
				Global_113386.f_32749.f_4801 = __LIB_18__::func_240();
			}
			if (iParam1 != Global_77137.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = __LIB_0__::func_314(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && iParam1 != iVar0)
					{
						func_135(iVar0, 145);
					}
				}
				Global_78043 = iParam1;
				Global_78044 = iParam0;
				Global_78045 = iParam2;
			}
		}
	}
}

void func_135(int iParam0, int iParam1)//Position - 0x3E5E
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_26__::func_247(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_One"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113386.f_2363.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113386.f_32749.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113386.f_32749.f_5590 = iParam1;
	Global_78042 = iParam0;
	Global_113386.f_32749.f_5588 = 1;
	__LIB_6__::func_760(iParam0, &(Global_113386.f_32749.f_5510));
}

void func_199(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0xAE76
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
					if (func_316(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_201(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_316(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_201(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_316(PLAYER::PLAYER_PED_ID(), 8, 1) || func_316(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_201(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_316(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_201(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

int func_201(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0xB047
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
										func_201(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_201(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, func_210(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_209(iParam0, iVar10, &iVar4, 1))
							{
								func_201(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_201(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_201(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_201(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_201(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_201(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_201(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_201(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_201(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_201(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_209(iParam0, iVar10, &iVar4, 0))
		{
			func_201(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_202(iParam0, iVar10, &iVar4))
		{
			func_201(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_202(int iParam0, int iParam1, int iParam2)//Position - 0xB857
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_316(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_209(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC14C
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_316(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_210(int iParam0, int iParam1, int iParam2)//Position - 0xC1E2
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
				if (func_316(iParam0, iParam1, iVar0))
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
				if (func_316(iParam0, iParam1, iVar1))
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

int func_316(int iParam0, int iParam1, int iParam2)//Position - 0x28EA2
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
				if (!func_316(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_316(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_316(iParam0, 14, iVar4))
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
			if (!func_316(iParam0, 14, uVar8[iVar7]))
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

void func_318()//Position - 0x29139
{
	bool bVar0;
	struct<3> Var1;
	bVar0 = false;
	func_37();
	func_386();
	if (__LIB_1__::func_197(Local_68.f_9))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_68.f_9, false) };
		__LIB_26__::func_248(Local_68.f_9, &iLocal_133, 1126825984, 7);
		__LIB_32__::func_571(Local_68.f_9, &(Local_68.f_19), 1126825984, 7);
		func_365();
		switch (iLocal_60)
		{
			case 0:
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_320);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_320, joaat("PLAYER"));
				iLocal_137 = ENTITY::GET_ENTITY_HEALTH(Local_68.f_9);
				Local_336 = { ENTITY::GET_ENTITY_COORDS(Local_68.f_9, false) };
				__LIB_10__::func_648(&Local_337, Local_336);
				func_363(Local_68.f_9);
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
				iLocal_134 = -1;
				iLocal_135 = -1;
				iLocal_107 = 0;
				iLocal_82 = 0;
				iLocal_81 = 0;
				sLocal_146 = "BB4_J8";
				iLocal_122 = MISC::GET_GAME_TIMER();
				__LIB_10__::func_647(&(Local_68.f_8), "", "", &iLocal_125, iLocal_126, 0);
				iLocal_60 = 1;
				break;
			case 1:
				if (!iLocal_107)
				{
					__LIB_10__::func_647(&(Local_68.f_8), "", "", &iLocal_125, iLocal_126, 0);
					__LIB_40__::func_938(&uLocal_44, Local_68.f_9, 0, 0, 1, 1, 1);
					if (Local_68.f_10 == 13 || Local_68.f_10 == 14)
					{
						if (iLocal_135 == -1)
						{
							iLocal_135 = MISC::GET_GAME_TIMER();
						}
						if (iLocal_134 == -1)
						{
							iLocal_134 = MISC::GET_GAME_TIMER();
						}
						else if (__LIB_10__::func_638(iLocal_134, 8000))
						{
							bVar0 = true;
						}
						if (__LIB_20__::func_255(Local_68.f_9, Local_331, bVar0, 0, 1, iLocal_137))
						{
							if ((__LIB_10__::func_638(iLocal_135, 5000) || __LIB_0__::func_78(Local_337, 0f, 0f, 0f, 0)) || (!__LIB_1__::func_148(Var1, Local_337, 8.5f) && !__LIB_1__::func_148(Var1, Local_336, 8.5f)))
							{
								func_329();
								Local_68.f_17 = MISC::GET_GAME_TIMER();
								__LIB_9__::func_981(&uLocal_44, 0, 0);
								iLocal_107 = 1;
							}
						}
						else
						{
							if (!iLocal_81)
							{
								if (!__LIB_10__::func_638(iLocal_122, 2500))
								{
									if (!__LIB_0__::func_75())
									{
										if (__LIB_0__::func_530(Local_68.f_9, Local_331, 30f, 1))
										{
											if (__LIB_41__::func_635(&uLocal_155, cLocal_148, "BB4_J7", 4, 0, 0, 0))
											{
												iLocal_122 = MISC::GET_GAME_TIMER();
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
								if (__LIB_10__::func_638(iLocal_122, MISC::GET_RANDOM_INT_IN_RANGE(5000, 12000)))
								{
									if (__LIB_0__::func_530(Local_68.f_9, Local_331, 30f, 1))
									{
										if (PED::IS_PED_FLEEING(Local_68.f_9))
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 101) < 30)
											{
												if (__LIB_41__::func_635(&uLocal_155, cLocal_149, "BBC_T13", 4, 0, 0, 0))
												{
													iLocal_122 = MISC::GET_GAME_TIMER();
												}
											}
											else if (__LIB_41__::func_635(&uLocal_155, cLocal_148, "BB4_FLEE", 4, 0, 0, 0))
											{
												iLocal_122 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
							else
							{
								iLocal_122 = MISC::GET_GAME_TIMER();
							}
							__LIB_10__::func_644(Local_68.f_9, Local_331, iLocal_135, 925353388);
						}
					}
					else
					{
						func_329();
						Local_68.f_17 = MISC::GET_GAME_TIMER();
						__LIB_9__::func_981(&uLocal_44, 0, 0);
						iLocal_107 = 1;
					}
				}
				else
				{
					func_329();
					if (!__LIB_0__::func_530(Local_68.f_9, Local_331, 10f, 1))
					{
						if (!iLocal_95)
						{
							if (!__LIB_20__::func_245(sLocal_146, 1))
							{
								__LIB_20__::func_244(&(Local_68.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_125, &iLocal_126, 1, 1);
								iLocal_95 = 1;
							}
						}
						else
						{
							__LIB_10__::func_647(&(Local_68.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_125, iLocal_126, 1);
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
								if (__LIB_41__::func_635(&uLocal_155, cLocal_148, sLocal_146, 4, 0, 0, 0))
								{
									iLocal_82 = 1;
								}
							}
						}
						else if (!__LIB_0__::func_75())
						{
							iLocal_60 = 2;
						}
						__LIB_10__::func_647(&(Local_68.f_8), "", "", &iLocal_125, iLocal_126, 0);
					}
					if (__LIB_20__::func_254(&(Local_68.f_9)))
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
				func_329();
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_320);
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_320, joaat("PLAYER"));
				__LIB_0__::func_523(&(Local_68.f_8));
				iLocal_82 = 1;
				Local_68.f_17 = MISC::GET_GAME_TIMER();
				__LIB_9__::func_981(&uLocal_44, 0, 0);
				iLocal_108 = 0;
				iLocal_112 = 0;
				iLocal_83 = 1;
				__LIB_10__::func_640(3);
				break;
			}
	}
}

void func_329()//Position - 0x299A8
{
	if (__LIB_1__::func_197(Local_68.f_9))
	{
		if (((Local_68.f_10 != 23 && Local_68.f_10 != 24) && Local_68.f_10 != 21) && Local_68.f_10 != 22)
		{
			PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_320);
			PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_320, joaat("PLAYER"));
			if (PED::IS_PED_IN_GROUP(Local_68.f_9))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_68.f_9);
			}
			TASK::CLEAR_PED_SECONDARY_TASK(Local_68.f_9);
			TASK::CLEAR_PED_TASKS(Local_68.f_9);
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
			iLocal_140 = MISC::GET_GAME_TIMER();
			Local_68.f_10 = 23;
		}
	}
}

void func_363(int iParam0)//Position - 0x2AE74
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 177, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 116, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 42, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 118, true);
	PED::SET_PED_DIES_WHEN_INJURED(iParam0, true);
	PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iParam0, 10f, 5);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
}

void func_365()//Position - 0x2AF97
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	if (__LIB_1__::func_197(Local_68.f_9))
	{
		if (iLocal_70 == 0)
		{
			__LIB_10__::func_654(&(Local_68.f_9), &bLocal_114);
			if (__LIB_10__::func_682())
			{
				if (iLocal_107 || iLocal_58 == 7)
				{
					if (bLocal_114)
					{
						PED::SET_PED_MOVEMENT_CLIPSET(Local_68.f_9, __LIB_10__::func_653(), 0.25f);
						iLocal_70 = 2;
					}
					else
					{
						PED::SET_PED_MOVEMENT_CLIPSET(Local_68.f_9, __LIB_10__::func_652(), 0.25f);
						iLocal_70 = 1;
					}
				}
			}
		}
		else if (iLocal_70 == 1)
		{
			__LIB_10__::func_654(&(Local_68.f_9), &bLocal_114);
			if (bLocal_114)
			{
				if (__LIB_10__::func_682())
				{
					PED::SET_PED_MOVEMENT_CLIPSET(Local_68.f_9, __LIB_10__::func_653(), 0.25f);
					iLocal_70 = 2;
				}
			}
		}
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			switch (Local_68.f_10)
			{
				case 0:
					if (__LIB_0__::func_530(Local_68.f_9, Local_331, 20f, 1))
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
				case 1:
					break;
				case 2:
					break;
				case 3:
					if (__LIB_10__::func_638(Local_68.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 500)))
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
					if (!__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
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
					if (!__LIB_0__::func_530(Local_68.f_9, Local_331, 3.5f, 1))
					{
						if (!__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_GO_TO_ENTITY")))
						{
							Local_68.f_10 = 5;
						}
						else
						{
							PED::SET_PED_MOVE_RATE_OVERRIDE(Local_68.f_9, 1.1f);
						}
					}
					else if (!__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_68.f_9, PLAYER::PLAYER_PED_ID(), -1);
					}
					break;
				case 7:
					if (__LIB_10__::func_638(Local_68.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 1000)))
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
					if (!__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_COMBAT")))
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
						if (!__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_COWER")) && !__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_HANDS_UP")))
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
					if (!__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 8f);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_143);
						TASK::TASK_GOTO_ENTITY_AIMING(0, PLAYER::PLAYER_PED_ID(), fVar3, 30f);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_143);
						TASK::TASK_PERFORM_SEQUENCE(Local_68.f_9, iLocal_143);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_143);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
					}
					break;
				case 31:
					if (__LIB_10__::func_638(Local_68.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 500)))
					{
						PED::SET_PED_ACCURACY(Local_68.f_9, 50);
						WEAPON::GET_CURRENT_PED_WEAPON(Local_68.f_9, &iVar0, true);
						if (iVar0 == joaat("WEAPON_UNARMED"))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_68.f_9, joaat("WEAPON_PISTOL"), -1, false, true);
							WEAPON::SET_CURRENT_PED_WEAPON(Local_68.f_9, joaat("WEAPON_PISTOL"), false);
						}
						TASK::OPEN_SEQUENCE_TASK(&iLocal_143);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1500, false);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_332, PLAYER::PLAYER_PED_ID(), 1f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500), true);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, Local_332, 50f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_143);
						TASK::TASK_PERFORM_SEQUENCE(Local_68.f_9, iLocal_143);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_143);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
						Local_68.f_10 = 32;
					}
					break;
				case 32:
					if (!__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						Local_68.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_68.f_10 = 37;
					}
					break;
				case 33:
					if (__LIB_10__::func_638(Local_68.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 500)))
					{
						PED::SET_PED_ACCURACY(Local_68.f_9, 10);
						WEAPON::GET_CURRENT_PED_WEAPON(Local_68.f_9, &iVar0, true);
						if (iVar0 == joaat("WEAPON_UNARMED"))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_68.f_9, joaat("WEAPON_PISTOL"), -1, false, true);
							WEAPON::SET_CURRENT_PED_WEAPON(Local_68.f_9, joaat("WEAPON_PISTOL"), false);
						}
						TASK::OPEN_SEQUENCE_TASK(&iLocal_143);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 750, false);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_332, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_BURST_FIRE"), 20000);
						TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000), false);
						TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, Local_332, 50f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_143);
						TASK::TASK_PERFORM_SEQUENCE(Local_68.f_9, iLocal_143);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_143);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
						Local_68.f_10 = 34;
					}
					break;
				case 34:
					if (!__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						Local_68.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_68.f_10 = 13;
					}
					break;
				case 35:
					if (__LIB_10__::func_638(Local_68.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 500)))
					{
						PED::SET_PED_ACCURACY(Local_68.f_9, 10);
						WEAPON::GET_CURRENT_PED_WEAPON(Local_68.f_9, &iVar0, true);
						if (iVar0 == joaat("WEAPON_UNARMED"))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_68.f_9, joaat("WEAPON_PISTOL"), -1, false, true);
							WEAPON::SET_CURRENT_PED_WEAPON(Local_68.f_9, joaat("WEAPON_PISTOL"), false);
						}
						TASK::OPEN_SEQUENCE_TASK(&iLocal_143);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 750, false);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_332, PLAYER::PLAYER_PED_ID(), 2f, true, 0.75f, 4f, true, 0, false, joaat("FIRING_PATTERN_BURST_FIRE"), 20000);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_143);
						TASK::TASK_PERFORM_SEQUENCE(Local_68.f_9, iLocal_143);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_143);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
						Local_68.f_10 = 36;
					}
					break;
				case 36:
					if (!__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						Local_68.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_68.f_10 = 13;
					}
					break;
				case 37:
					if (__LIB_10__::func_638(Local_68.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 750)))
					{
						PED::SET_PED_HEARING_RANGE(Local_68.f_9, 30f);
						PED::SET_PED_SEEING_RANGE(Local_68.f_9, 30f);
						PED::SET_PED_ID_RANGE(Local_68.f_9, 30f);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_68.f_9, 1, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_68.f_9, 3, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_68.f_9, 5, true);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_68.f_9, 512, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_68.f_9, 0, true);
						PED::SET_PED_COMBAT_RANGE(Local_68.f_9, 1);
						PED::SET_PED_COMBAT_MOVEMENT(Local_68.f_9, 1);
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
						Local_68.f_10 = 38;
					}
					break;
				case 38:
					if (!__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_COMBAT")))
					{
						Local_68.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_68.f_10 = 37;
					}
					break;
				case 13:
					if (__LIB_10__::func_638(Local_68.f_18, MISC::GET_RANDOM_INT_IN_RANGE(0, 500)))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(Local_68.f_9))
						{
							PED::SET_PED_PANIC_EXIT_SCENARIO(Local_68.f_9, Local_331);
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
						TASK::TASK_SMART_FLEE_PED(Local_68.f_9, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
						PED::SET_PED_KEEP_TASK(Local_68.f_9, true);
						Local_68.f_10 = 14;
					}
					break;
				case 14:
					if (!__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_SMART_FLEE_PED")))
					{
						if (!PED::IS_PED_FLEEING(Local_68.f_9))
						{
							Local_68.f_18 = (MISC::GET_GAME_TIMER() - 5000);
							Local_68.f_10 = 13;
						}
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
					PED::SET_PED_CONFIG_FLAG(Local_68.f_9, 173, true);
					PED::SET_PED_RESET_FLAG(Local_68.f_9, 237, true);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_68.f_9, 3f);
					if (__LIB_1__::func_183(Local_71[0 /*6*/]))
					{
						if ((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_71[0 /*6*/], false) && __LIB_0__::func_530(Local_71[0 /*6*/], Local_71[0 /*6*/].f_1, 3f, 1)) && __LIB_10__::func_651(ENTITY::GET_ENTITY_HEADING(Local_71[0 /*6*/]), Local_71[0 /*6*/].f_4, 20f))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_68.f_9, Local_71[0 /*6*/], false) && !PED::IS_PED_BEING_JACKED(Local_68.f_9))
							{
								Local_68.f_10 = 16;
							}
							else if (__LIB_10__::func_638(Local_68.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 350)))
							{
								if (PED::IS_PED_USING_ANY_SCENARIO(Local_68.f_9))
								{
									PED::SET_PED_PANIC_EXIT_SCENARIO(Local_68.f_9, Local_331);
								}
								else
								{
									TASK::CLEAR_PED_TASKS(Local_68.f_9);
								}
								TASK::TASK_ENTER_VEHICLE(Local_68.f_9, Local_71[0 /*6*/], 25000, -1, 2f, 8388608, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
								Local_68.f_10 = 16;
							}
						}
						else
						{
							Local_68.f_10 = 13;
						}
					}
					else
					{
						Local_68.f_10 = 13;
					}
					break;
				case 16:
					if (!__LIB_1__::func_183(Local_71[0 /*6*/]))
					{
						Local_68.f_10 = 13;
					}
					else if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_71[0 /*6*/], false) || PED::IS_PED_BEING_JACKED(Local_68.f_9)) || !__LIB_0__::func_530(Local_71[0 /*6*/], Local_71[0 /*6*/].f_1, 3f, 1)) || !__LIB_10__::func_651(ENTITY::GET_ENTITY_HEADING(Local_71[0 /*6*/]), Local_71[0 /*6*/].f_4, 20f))
					{
						Local_68.f_10 = 13;
					}
					else if (PED::IS_PED_SITTING_IN_VEHICLE(Local_68.f_9, Local_71[0 /*6*/]))
					{
						Local_68.f_10 = 39;
					}
					else if (!__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
					{
						Local_68.f_10 = 15;
					}
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_68.f_9, 2f);
					break;
				case 17:
					if (__LIB_1__::func_183(Local_71[0 /*6*/]) && PED::IS_PED_SITTING_IN_VEHICLE(Local_68.f_9, Local_71[0 /*6*/]))
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
					if (!__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_VEHICLE_MISSION")))
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
						if (!__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_COWER")))
						{
							Local_68.f_10 = 19;
						}
					}
					break;
				case 21:
					if (func_370(Local_68.f_9, Local_68.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_369())
					{
						Local_68.f_10 = 23;
					}
					else if (PED::DOES_GROUP_EXIST(__LIB_0__::func_399()))
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
						if (!PED::IS_PED_GROUP_MEMBER(Local_68.f_9, __LIB_0__::func_399()))
						{
							PED::SET_PED_AS_GROUP_MEMBER(Local_68.f_9, __LIB_0__::func_399());
						}
						PED::SET_GROUP_FORMATION(__LIB_0__::func_399(), 0);
						PED::SET_GROUP_FORMATION_SPACING(__LIB_0__::func_399(), 1.5f, 3.5f, -1f);
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
						TASK::TASK_LOOK_AT_ENTITY(Local_68.f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
						Local_68.f_10 = 22;
					}
					break;
				case 22:
					if (func_370(Local_68.f_9, Local_68.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_369())
					{
						Local_68.f_10 = 23;
					}
					else
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (__LIB_20__::func_246())
							{
								iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (!PED::IS_PED_IN_VEHICLE(Local_68.f_9, iVar1, false))
								{
									fVar4 = ENTITY::GET_ENTITY_SPEED(iVar1);
									if (fVar4 < 1.75f && __LIB_0__::func_530(Local_68.f_9, Local_331, 8f, 1))
									{
										if (!__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
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
									else if (__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
									{
										if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_68.f_9))
										{
											TASK::CLEAR_PED_TASKS(Local_68.f_9);
										}
									}
								}
							}
							else if (__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
							{
								TASK::CLEAR_PED_TASKS(Local_68.f_9);
							}
						}
						else if (__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
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
					if (func_370(Local_68.f_9, Local_68.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_369())
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
							if (__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
							{
								TASK::CLEAR_PED_TASKS(Local_68.f_9);
							}
						}
						if (((!PED::IS_PED_RAGDOLL(Local_68.f_9) && !PED::IS_PED_BEING_STUNNED(Local_68.f_9, 0)) && !PED::IS_PED_BEING_JACKED(Local_68.f_9)) && !__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_68.f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							if ((!__LIB_10__::func_649(Local_68.f_19, 10) && __LIB_0__::func_530(Local_68.f_9, Local_331, 50f, 1)) || !__LIB_10__::func_638(iLocal_140, 2000))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_68.f_9, false))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(Local_68.f_9, 0, 0);
								}
								else if (((!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_68.f_9)) && !func_369()) || ENTITY::IS_ENTITY_IN_WATER(Local_68.f_9))
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
					if (func_370(Local_68.f_9, Local_68.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_369())
					{
						if (!__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_HANDS_UP")))
						{
							if (!__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_68.f_9, false))
								{
									if (!__LIB_10__::func_649(Local_68.f_19, 10) && __LIB_0__::func_530(Local_68.f_9, Local_331, 50f, 1))
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
							else if (!__LIB_10__::func_649(Local_68.f_19, 10) && __LIB_0__::func_530(Local_68.f_9, Local_331, 50f, 1))
							{
								if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_68.f_9)) || func_369())
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
					if (func_370(Local_68.f_9, Local_68.f_19, 100f, 1, 1090519040, 1097859072, 0))
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
					if (func_370(Local_68.f_9, Local_68.f_19, 100f, 1, 1090519040, 1097859072, 0))
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
							if (!__LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
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
				case 39:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
					Local_68.f_10 = 40;
					break;
				case 40:
					break;
				}
			}
	}
}

int func_369()//Position - 0x2C4F2
{
	if (!iLocal_82)
	{
		return 1;
	}
	if (__LIB_20__::func_245(sLocal_146, 0))
	{
		return 1;
	}
	if (iLocal_58 != 3 && iLocal_58 != 6)
	{
		return 1;
	}
	if (TASK::IS_PED_GETTING_UP(Local_68.f_9) || PED::IS_PED_RAGDOLL(Local_68.f_9))
	{
		iLocal_140 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (!__LIB_10__::func_638(iLocal_140, 2000))
	{
		return 1;
	}
	return 0;
}

int func_370(int iParam0, int iParam1, float fParam2, bool bParam3, float fParam4, float fParam5, bool bParam6)//Position - 0x2C55F
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	if (__LIB_1__::func_197(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		if (MISC::IS_BULLET_IN_AREA(Var0, fParam4, true))
		{
			return 1;
		}
		if (__LIB_0__::func_530(iParam0, Local_331, fParam2, 1))
		{
			if (!__LIB_10__::func_649(iParam1, 10))
			{
				if (bParam6)
				{
					if (__LIB_10__::func_650(1, 0, 1))
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

void func_386()//Position - 0x2CCD2
{
	if (__LIB_1__::func_148(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_330, 100f))
	{
		if (!__LIB_4__::func_234())
		{
			CUTSCENE::REQUEST_CUTSCENE(&Local_325, 8);
			func_67();
			iLocal_111 = 1;
		}
	}
	else if (iLocal_111)
	{
		if (!__LIB_1__::func_148(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_330, 120f))
		{
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_111 = 0;
			}
		}
		else
		{
			func_67();
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

void func_388()//Position - 0x2CD68
{
	func_37();
	func_386();
	if (__LIB_1__::func_197(Local_68.f_9))
	{
		__LIB_26__::func_248(Local_68.f_9, &iLocal_133, 1126825984, 7);
		__LIB_32__::func_571(Local_68.f_9, &(Local_68.f_19), 1126825984, 7);
		func_365();
		switch (iLocal_60)
		{
			case 0:
				__LIB_0__::func_296();
				iLocal_84 = 0;
				iLocal_97 = 0;
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
					if (!__LIB_0__::func_530(Local_68.f_9, Local_331, 25f, 1))
					{
						if (Local_68.f_10 == 21 || Local_68.f_10 == 22)
						{
							Local_68.f_18 = MISC::GET_GAME_TIMER();
							Local_68.f_10 = 25;
						}
						if (__LIB_10__::func_649(iLocal_133, 10))
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_41__::func_635(&uLocal_155, cLocal_149, "BBC_T9", 4, 0, 0, 0))
								{
									iLocal_122 = MISC::GET_GAME_TIMER();
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
						if (!__LIB_20__::func_245(sLocal_146, 1))
						{
							if (__LIB_41__::func_635(&uLocal_155, cLocal_149, "BBC_T5", 4, 0, 0, 0))
							{
								iLocal_83 = 1;
							}
						}
					}
					else if (!iLocal_97)
					{
						if (!__LIB_0__::func_405("BBS_COPS", 0, 0))
						{
							__LIB_0__::func_210("BBS_COPS", 7500, 0);
							iLocal_97 = 1;
						}
					}
					else
					{
						func_391();
						__LIB_20__::func_248(&Local_75, Local_331, &iLocal_124, 5000, 1101004800);
					}
				}
				else if (__LIB_0__::func_530(Local_68.f_9, Local_331, 8f, 1))
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
					iLocal_97 = 0;
					if (!__LIB_0__::func_75())
					{
						if (Local_68.f_10 == 21 || Local_68.f_10 == 22)
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
							{
								if (__LIB_41__::func_635(&uLocal_155, cLocal_149, "BBC_T10", 4, 0, 0, 0))
								{
									iLocal_122 = MISC::GET_GAME_TIMER();
								}
							}
							else if (__LIB_41__::func_635(&uLocal_155, cLocal_148, "BB4_J5", 4, 0, 0, 0))
							{
								iLocal_122 = MISC::GET_GAME_TIMER();
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
					if (!iLocal_98)
					{
						__LIB_0__::func_210("BBS_05", 7500, 1);
						iLocal_98 = 1;
					}
				}
				if (__LIB_20__::func_254(&(Local_68.f_9)))
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

void func_391()//Position - 0x2D146
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
			iLocal_122 = MISC::GET_GAME_TIMER();
		}
		if (!iLocal_85)
		{
			if (__LIB_41__::func_635(&uLocal_155, cLocal_148, "BB4_J6", 4, 0, 0, 0))
			{
				iLocal_85 = 1;
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
							iLocal_121 = MISC::GET_GAME_TIMER();
							iLocal_106 = 1;
						}
					}
					else if (!iLocal_86[0])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_121) > 7500)
						{
							func_394(0);
						}
					}
					else if (!iLocal_86[1])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_121) > 10000)
						{
							func_394(1);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (ENTITY::GET_ENTITY_SPEED(iVar0) < 0.5f)
						{
							if (!iLocal_102)
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_10__::func_638(iLocal_138, 3500))
									{
										if (__LIB_41__::func_635(&uLocal_155, cLocal_148, "BB4_STOP", 4, 0, 0, 0))
										{
											iLocal_102 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_102)
						{
							if (!__LIB_20__::func_245("BB4_STOP", 1))
							{
								iLocal_138 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							iLocal_138 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if (!iLocal_84)
				{
					if (__LIB_41__::func_635(&uLocal_155, cLocal_148, "BB4_J9", 4, 0, 0, 0))
					{
						iLocal_84 = 1;
					}
				}
			}
			else
			{
				if (!iLocal_99)
				{
					if (!__LIB_20__::func_246())
					{
						__LIB_0__::func_151("BBS_VH1", -1);
						iLocal_99 = 1;
					}
				}
				iLocal_138 = MISC::GET_GAME_TIMER();
			}
			iLocal_89 = 0;
			iLocal_90 = 0;
		}
		else
		{
			iLocal_138 = MISC::GET_GAME_TIMER();
			iLocal_102 = 0;
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
								if (__LIB_41__::func_635(&uLocal_155, cLocal_149, "BBC_T6", 4, iVar1, 0, 0))
								{
									iLocal_89 = 1;
								}
							}
						}
						__LIB_10__::func_657("BBS_VH1", 1);
					}
					else if (!__LIB_20__::func_245("BBC_T8", 1) && !__LIB_20__::func_245("BB4_VEH", 1))
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) < 5)
						{
							if (__LIB_41__::func_635(&uLocal_155, cLocal_149, "BBC_T8", 4, iVar1, 0, 0))
							{
								iLocal_89 = 1;
							}
						}
						else if (__LIB_41__::func_635(&uLocal_155, cLocal_148, "BB4_VEH", 4, iVar1, 0, 0))
						{
							iLocal_89 = 1;
						}
					}
				}
				else if (!iLocal_93)
				{
					if (__LIB_20__::func_257(&iVar0))
					{
						if ((!__LIB_20__::func_245("BB4_JACK", 1) && !__LIB_20__::func_245("BBC_T6", 1)) && !__LIB_20__::func_245("BBC_T8", 1))
						{
							if (__LIB_41__::func_635(&uLocal_155, cLocal_148, "BB4_JACK", 4, iVar1, 0, 0))
							{
								iLocal_93 = 1;
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
						if (!__LIB_20__::func_245("BBC_T7", 1) && !__LIB_20__::func_245("BB4_GETOUT", 1))
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) < 5)
							{
								if (__LIB_41__::func_635(&uLocal_155, cLocal_149, "BBC_T7", 4, iVar1, 0, 0))
								{
									iLocal_90 = 1;
								}
							}
							else if (__LIB_41__::func_635(&uLocal_155, cLocal_148, "BB4_GETOUT", 4, iVar1, 0, 0))
							{
								iLocal_90 = 1;
							}
						}
					}
				}
				else if (Local_68.f_10 == 24 && __LIB_4__::func_465(Local_68.f_9, joaat("SCRIPT_TASK_HANDS_UP")))
				{
					if (__LIB_0__::func_530(Local_68.f_9, Local_331, 25f, 1))
					{
						if (!__LIB_20__::func_245("BB4_J11", 1))
						{
							if (__LIB_10__::func_638(iLocal_123, MISC::GET_RANDOM_INT_IN_RANGE(2500, 5000)))
							{
								if (__LIB_0__::func_75())
								{
									__LIB_6__::func_771();
								}
								if (__LIB_41__::func_635(&uLocal_155, cLocal_148, "BB4_J11", 4, 0, 0, 0))
								{
									iLocal_123 = MISC::GET_GAME_TIMER();
								}
							}
						}
						else
						{
							iLocal_123 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else
				{
					iLocal_123 = 0;
					if (!iLocal_84)
					{
						if (__LIB_41__::func_635(&uLocal_155, cLocal_148, "BB4_J9", 4, 0, 0, 0))
						{
							iLocal_122 = MISC::GET_GAME_TIMER();
							iLocal_84 = 1;
						}
					}
					if (!__LIB_0__::func_75())
					{
						if (__LIB_10__::func_638(iLocal_122, MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000)))
						{
							if (!__LIB_0__::func_530(Local_68.f_9, Local_331, 20f, 1))
							{
								if (__LIB_41__::func_635(&uLocal_155, cLocal_148, "BB4_J4", 4, 0, 0, 0))
								{
									iLocal_122 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_394(int iParam0)//Position - 0x2D5F4
{
	if (!iLocal_86[iParam0])
	{
		if (__LIB_41__::func_635(&uLocal_155, cLocal_148, sLocal_147[iParam0], 4, 0, 0, 0))
		{
			iLocal_86[iParam0] = 1;
			iLocal_106 = 0;
			iLocal_121 = 0;
		}
	}
}

void func_395()//Position - 0x2D62F
{
	func_37();
	func_386();
	if (__LIB_1__::func_197(Local_68.f_9))
	{
		__LIB_26__::func_248(Local_68.f_9, &iLocal_133, 1126825984, 7);
		__LIB_32__::func_571(Local_68.f_9, &(Local_68.f_19), 1126825984, 7);
		func_365();
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
					if (!__LIB_0__::func_530(Local_68.f_9, Local_331, 25f, 1))
					{
						if (Local_68.f_10 == 21 || Local_68.f_10 == 22)
						{
							Local_68.f_18 = MISC::GET_GAME_TIMER();
							Local_68.f_10 = 25;
						}
						if (__LIB_10__::func_649(iLocal_133, 10))
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_41__::func_635(&uLocal_155, cLocal_149, "BBC_T9", 4, 0, 0, 0))
								{
									iLocal_122 = MISC::GET_GAME_TIMER();
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
						if (!HUD::DOES_BLIP_EXIST(iLocal_115))
						{
							if (iLocal_94)
							{
								iLocal_115 = __LIB_10__::func_658(Local_330, 5, 1);
							}
						}
						if (!iLocal_83)
						{
							if (!__LIB_20__::func_245(sLocal_146, 1))
							{
								if (__LIB_41__::func_635(&uLocal_155, cLocal_149, "BBC_T5", 4, 0, 0, 0))
								{
									iLocal_83 = 1;
								}
							}
						}
						else if (!iLocal_94)
						{
							if (!__LIB_0__::func_75())
							{
								__LIB_0__::func_210("BBS_DROP", 7500, 0);
								iLocal_122 = MISC::GET_GAME_TIMER();
								iLocal_94 = 1;
							}
						}
						else
						{
							func_391();
						}
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_330, 4f, 4f, 2f, true, true, 0))
						{
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2732.8152f, 4143.618f, 42.02822f, 2724.603f, 4144.8027f, 46.330837f, 9f, false, true, 0))
						{
							iLocal_60 = 2;
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_330, 6.5f, 1))
							{
								iLocal_60 = 2;
							}
						}
						else if (__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_330, 2.5f, 1))
						{
							iLocal_60 = 2;
						}
					}
				}
				else
				{
					__LIB_0__::func_523(&iLocal_115);
					if (__LIB_0__::func_405("BBS_DROP", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_DROP");
					}
					if (__LIB_0__::func_530(Local_68.f_9, Local_331, 8f, 1))
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
									if (__LIB_41__::func_635(&uLocal_155, cLocal_149, "BBC_T10", 4, 0, 0, 0))
									{
										iLocal_122 = MISC::GET_GAME_TIMER();
									}
								}
								else if (__LIB_41__::func_635(&uLocal_155, cLocal_148, "BB4_J5", 4, 0, 0, 0))
								{
									iLocal_122 = MISC::GET_GAME_TIMER();
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
						if (!iLocal_98)
						{
							__LIB_0__::func_210("BBS_05", 7500, 1);
							iLocal_98 = 1;
						}
					}
				}
				if (!bLocal_105)
				{
					bLocal_105 = func_396(Local_331, Local_63, 180f);
				}
				if (__LIB_20__::func_254(&(Local_68.f_9)))
				{
					iLocal_112 = 1;
					iLocal_60 = 2;
				}
				break;
			case 2:
				__LIB_0__::func_523(&iLocal_115);
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
						bLocal_105 = func_396(Local_331, Local_63, 0f);
					}
					__LIB_10__::func_640(4);
				}
				break;
			}
	}
}

int func_396(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x2DA08
{
	int iVar0;
	if (!__LIB_0__::func_658(Param0, Param1, fParam2))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		if (iLocal_132 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_132 - 1))
			{
				__LIB_0__::func_124(&(Local_69[iVar0 /*19*/]), 1, 0, 1);
				iVar0++;
			}
		}
		if (iLocal_129 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_129 - 1))
			{
				__LIB_0__::func_106(&(Local_71[iVar0 /*6*/]));
				iVar0++;
			}
		}
		if (iLocal_130 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_130 - 1))
			{
				__LIB_0__::func_122(&(Local_72[iVar0 /*6*/]), 0);
				iVar0++;
			}
		}
		if (iLocal_128 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_128 - 1))
			{
				__LIB_0__::func_122(&(Local_73[iVar0 /*9*/]), 0);
				iVar0++;
			}
		}
		if (iLocal_131 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_131 - 1))
			{
				__LIB_0__::func_539(&(Local_74[iVar0 /*7*/]));
				iVar0++;
			}
		}
	}
	return 0;
}

void func_399()//Position - 0x2DB51
{
	bool bVar0;
	bVar0 = false;
	if (__LIB_1__::func_197(Local_68.f_9))
	{
		__LIB_26__::func_248(Local_68.f_9, &iLocal_133, 1126825984, 7);
		__LIB_32__::func_571(Local_68.f_9, &(Local_68.f_19), 1126825984, 7);
		func_365();
		switch (iLocal_60)
		{
			case 0:
				if (Local_68.f_10 != 35 && Local_68.f_10 != 36)
				{
					Local_68.f_18 = MISC::GET_GAME_TIMER();
					Local_68.f_10 = 35;
				}
				func_405(iLocal_132);
				if (__LIB_1__::func_197(Local_68.f_9))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_68.f_8))
					{
						Local_68.f_8 = __LIB_10__::func_711(Local_68.f_9, 1, 0, 5);
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_68.f_9);
				}
				__LIB_10__::func_647(&(Local_68.f_8), "", "", &iLocal_125, iLocal_126, 0);
				iLocal_60 = 1;
				break;
			case 1:
				func_402(iLocal_132);
				if (!iLocal_107)
				{
					__LIB_10__::func_647(&(Local_68.f_8), "", "", &iLocal_125, iLocal_126, 0);
					__LIB_40__::func_938(&uLocal_44, Local_68.f_9, 0, 0, 1, 1, 1);
					if (!iLocal_81)
					{
						if (__LIB_0__::func_530(Local_68.f_9, Local_331, 30f, 1))
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_10__::func_650(1, 0, 1))
								{
									sLocal_145 = "BB4_J1";
								}
								else
								{
									sLocal_145 = "BB4_J10";
								}
								sLocal_145 = "BB4_J1";
								if (__LIB_41__::func_635(&uLocal_155, cLocal_148, sLocal_145, 4, 0, 0, 0))
								{
									Local_68.f_17 = MISC::GET_GAME_TIMER();
									iLocal_122 = MISC::GET_GAME_TIMER();
									iLocal_81 = 1;
								}
							}
						}
						else
						{
							iLocal_81 = 1;
						}
					}
					if (Local_68.f_10 == 13 || Local_68.f_10 == 14)
					{
						if (iLocal_135 == -1)
						{
							iLocal_135 = MISC::GET_GAME_TIMER();
						}
						if (iLocal_134 == -1)
						{
							iLocal_134 = MISC::GET_GAME_TIMER();
						}
						else if (__LIB_10__::func_638(iLocal_134, 5000))
						{
							bVar0 = true;
						}
						if (__LIB_20__::func_255(Local_68.f_9, Local_331, bVar0, 0, 1, 170))
						{
							func_329();
							func_401(iLocal_132);
							Local_68.f_17 = MISC::GET_GAME_TIMER();
							__LIB_9__::func_981(&uLocal_44, 0, 0);
							iLocal_107 = 1;
						}
						else
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_10__::func_638(iLocal_122, MISC::GET_RANDOM_INT_IN_RANGE(5000, 12000)))
								{
									if (__LIB_0__::func_530(Local_68.f_9, Local_331, 30f, 1))
									{
										if (PED::IS_PED_FLEEING(Local_68.f_9))
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 101) < 30)
											{
												if (__LIB_41__::func_635(&uLocal_155, cLocal_149, "BBC_T13", 4, 0, 0, 0))
												{
													iLocal_122 = MISC::GET_GAME_TIMER();
												}
											}
											else if (__LIB_41__::func_635(&uLocal_155, cLocal_148, "BB4_FLEE", 4, 0, 0, 0))
											{
												iLocal_122 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
							else
							{
								iLocal_122 = MISC::GET_GAME_TIMER();
							}
							__LIB_10__::func_644(Local_68.f_9, Local_331, iLocal_134, 925353388);
						}
					}
				}
				else
				{
					func_329();
					if (!__LIB_0__::func_530(Local_68.f_9, Local_331, 10f, 1))
					{
						if (!iLocal_95)
						{
							if (!__LIB_20__::func_245(sLocal_146, 1))
							{
								__LIB_20__::func_244(&(Local_68.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_125, &iLocal_126, 1, 1);
								iLocal_95 = 1;
							}
						}
						else
						{
							__LIB_10__::func_647(&(Local_68.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_125, iLocal_126, 1);
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
								if (__LIB_41__::func_635(&uLocal_155, cLocal_148, sLocal_146, 4, 0, 0, 0))
								{
									iLocal_82 = 1;
								}
							}
						}
						else if (!__LIB_0__::func_75())
						{
							iLocal_60 = 2;
						}
						__LIB_10__::func_647(&(Local_68.f_8), "", "", &iLocal_125, iLocal_126, 0);
					}
					if (__LIB_20__::func_254(&(Local_68.f_9)))
					{
						iLocal_112 = 1;
						iLocal_60 = 2;
					}
				}
				break;
			case 2:
				if (__LIB_0__::func_405("BBS_APPSUS", 0, 0) || __LIB_0__::func_405("BBS_APPSUS2", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				iLocal_82 = 1;
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_320);
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_320, joaat("PLAYER"));
				func_401(iLocal_132);
				__LIB_0__::func_523(&(Local_68.f_8));
				func_118(iLocal_127);
				func_329();
				Local_68.f_17 = MISC::GET_GAME_TIMER();
				__LIB_9__::func_981(&uLocal_44, 0, 0);
				__LIB_10__::func_659(1, &uLocal_142);
				if (iLocal_112)
				{
					__LIB_10__::func_640(7);
				}
				else
				{
					__LIB_10__::func_640(3);
				}
				break;
			}
	}
}

void func_401(int iParam0)//Position - 0x2E060
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		if (Local_69[iVar0 /*19*/].f_14 != 6)
		{
			func_106(Local_69[iVar0 /*19*/], 1);
			Local_69[iVar0 /*19*/].f_14 = 4;
			__LIB_0__::func_489(&(Local_69[iVar0 /*19*/].f_6));
		}
		iVar0++;
	}
}

void func_402(int iParam0)//Position - 0x2E0A9
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		if (__LIB_1__::func_197(Local_69[iVar0 /*19*/]))
		{
			__LIB_32__::func_571(Local_69[iVar0 /*19*/], &(Local_69[iVar0 /*19*/].f_16), 1126825984, 7);
			switch (Local_69[iVar0 /*19*/].f_14)
			{
				case 0:
					break;
				case 1:
					if (iVar0 == 0)
					{
						iVar2 = 0;
					}
					else if (iVar0 == 1)
					{
						iVar2 = 500;
					}
					else if (iVar0 == 2)
					{
						iVar2 = 750;
					}
					if (__LIB_10__::func_638(Local_69[iVar0 /*19*/].f_15, iVar2))
					{
						func_121(iVar0);
					}
					break;
				case 2:
					if (func_404(Local_69[iVar0 /*19*/], Local_69[iVar0 /*19*/].f_16, 50f, 1, 1, 12f, 15f))
					{
						if (!__LIB_1__::func_197(Local_68.f_9) || (PED::IS_PED_FLEEING(Local_68.f_9) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Local_68.f_9) > 1f))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_69[iVar0 /*19*/], joaat("SCRIPT_TASK_HANDS_UP")) == 1)
							{
								if (iVar0 == 0)
								{
									iVar2 = 750;
								}
								else if (iVar0 == 1)
								{
									iVar2 = 1500;
								}
								else if (iVar0 == 2)
								{
									iVar2 = 2500;
								}
								TASK::UPDATE_TASK_HANDS_UP_DURATION(Local_69[iVar0 /*19*/], iVar2);
							}
							else
							{
								TASK::CLEAR_PED_TASKS(Local_69[iVar0 /*19*/]);
								TASK::CLEAR_PED_SECONDARY_TASK(Local_69[iVar0 /*19*/]);
							}
							Local_69[iVar0 /*19*/].f_14 = 4;
							__LIB_0__::func_489(&(Local_69[iVar0 /*19*/].f_6));
						}
					}
					else if (!__LIB_4__::func_465(Local_69[iVar0 /*19*/], joaat("SCRIPT_TASK_COMBAT")))
					{
						__LIB_0__::func_489(&(Local_69[iVar0 /*19*/].f_6));
						if (__LIB_0__::func_530(Local_69[iVar0 /*19*/], Local_331, 5f, 1))
						{
							if (!__LIB_10__::func_649(Local_69[iVar0 /*19*/].f_16, 10))
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_69[iVar0 /*19*/], ENTITY::GET_ENTITY_COORDS(Local_69[iVar0 /*19*/], true), 5f, false, false);
								TASK::TASK_COMBAT_PED(Local_69[iVar0 /*19*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_69[iVar0 /*19*/], true);
							}
						}
					}
					else
					{
						if (!__LIB_0__::func_530(Local_69[iVar0 /*19*/], Local_331, 7f, 1))
						{
							TASK::CLEAR_PED_TASKS(Local_69[iVar0 /*19*/]);
							TASK::TASK_LOOK_AT_ENTITY(Local_69[iVar0 /*19*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_69[iVar0 /*19*/], PLAYER::PLAYER_PED_ID(), -1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_69[iVar0 /*19*/], false);
						}
						__LIB_0__::func_499(Local_69[iVar0 /*19*/], &(Local_69[iVar0 /*19*/].f_6), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
					}
					break;
				case 3:
					if (!__LIB_4__::func_465(Local_69[iVar0 /*19*/], joaat("SCRIPT_TASK_PLAY_ANIM")))
					{
						if (func_404(Local_69[iVar0 /*19*/], Local_69[iVar0 /*19*/].f_16, 50f, 1, 1, 12f, 15f))
						{
							func_106(Local_69[iVar0 /*19*/], 1);
							Local_69[iVar0 /*19*/].f_14 = 4;
							__LIB_0__::func_489(&(Local_69[iVar0 /*19*/].f_6));
						}
						else
						{
							func_121(iVar0);
						}
					}
					break;
				case 4:
					if (!__LIB_4__::func_465(Local_69[iVar0 /*19*/], joaat("SCRIPT_TASK_HANDS_UP")))
					{
						if (!PED::IS_PED_FLEEING(Local_69[iVar0 /*19*/]))
						{
							if (!__LIB_4__::func_465(Local_69[iVar0 /*19*/], joaat("SCRIPT_TASK_SMART_FLEE_PED")))
							{
								func_106(Local_69[iVar0 /*19*/], 1);
							}
						}
					}
					__LIB_0__::func_489(&(Local_69[iVar0 /*19*/].f_6));
					break;
				case 5:
					__LIB_0__::func_489(&(Local_69[iVar0 /*19*/].f_6));
					break;
			}
		}
		else
		{
			if (Local_69[iVar0 /*19*/].f_14 != 6)
			{
				__LIB_0__::func_489(&(Local_69[iVar0 /*19*/].f_6));
				Local_69[iVar0 /*19*/].f_14 = 6;
			}
			iVar1++;
		}
		iVar0++;
	}
	iLocal_127 = iVar1;
}

int func_404(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, float fParam6)//Position - 0x2E5EC
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	if (__LIB_1__::func_197(iParam0))
	{
		if (__LIB_10__::func_650(1, 0, 1))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			if (MISC::IS_BULLET_IN_AREA(Var0, fParam5, true))
			{
				return 1;
			}
			if (__LIB_0__::func_530(iParam0, Local_331, fParam2, 1))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (!WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
				}
				if (!__LIB_10__::func_649(iParam1, 10))
				{
					if (bParam3)
					{
						if (WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RELOADING(PLAYER::PLAYER_PED_ID()))
						{
							return 1;
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
						if (bParam4)
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
				}
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 57))
				{
					return 1;
				}
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
					return 1;
				}
			}
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, fParam6))
			{
				return 1;
			}
			Var1 = { Var0 };
			Var2 = { Var1 };
			Var1.f_0 = (Var1.f_0 - fParam6);
			Var1.f_1 = (Var1.f_1 - fParam6);
			Var1.f_2 = (Var1.f_2 - fParam6);
			Var2.f_0 = (Var2.f_0 + fParam6);
			Var2.f_1 = (Var2.f_1 + fParam6);
			Var2.f_2 = (Var2.f_2 + fParam6);
			if (MISC::IS_PROJECTILE_IN_AREA(Var1, Var2, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_405(int iParam0)//Position - 0x2E786
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		if (__LIB_1__::func_197(Local_69[iVar0 /*19*/]))
		{
			Local_69[iVar0 /*19*/].f_15 = MISC::GET_GAME_TIMER();
			Local_69[iVar0 /*19*/].f_14 = 1;
		}
		iVar0++;
	}
}

void func_406()//Position - 0x2E7C5
{
	if (__LIB_1__::func_197(Local_68.f_9))
	{
		__LIB_26__::func_248(Local_68.f_9, &iLocal_133, 1126825984, 1);
		__LIB_32__::func_571(Local_68.f_9, &(Local_68.f_19), 120f, 7);
		func_365();
		switch (iLocal_60)
		{
			case 0:
				if (!HUD::DOES_BLIP_EXIST(Local_68.f_8))
				{
					Local_68.f_8 = __LIB_10__::func_711(Local_68.f_9, 1, 0, 5);
				}
				__LIB_20__::func_244(&(Local_68.f_8), "", "", &iLocal_125, &iLocal_126, 1, 0);
				iLocal_60 = 1;
				break;
			case 1:
				switch (iLocal_61)
				{
					case 2:
						if (!iLocal_88)
						{
							if (__LIB_0__::func_75())
							{
								__LIB_6__::func_771();
							}
							if (__LIB_41__::func_635(&uLocal_155, cLocal_149, "BBC_T14", 4, 0, 0, 0))
							{
								Local_68.f_17 = MISC::GET_GAME_TIMER();
								iLocal_88 = 1;
							}
							__LIB_10__::func_647(&(Local_68.f_8), "", "", &iLocal_125, iLocal_126, 0);
						}
						else if (!iLocal_96)
						{
							if (!__LIB_20__::func_245("BBC_T14", 1))
							{
								__LIB_20__::func_244(&(Local_68.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_125, &iLocal_126, 1, 1);
								iLocal_96 = 1;
							}
						}
						else
						{
							__LIB_10__::func_647(&(Local_68.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_125, iLocal_126, 1);
							if (__LIB_0__::func_530(Local_68.f_9, Local_331, 25f, 1) && __LIB_10__::func_660(Local_68.f_9, Local_331, 10f))
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
								else if (func_414(Local_68.f_9, iLocal_133, 0, 1103626240, 1086324736))
								{
									iLocal_61 = 0;
								}
								else if (__LIB_0__::func_530(Local_68.f_9, Local_331, 5f, 1))
								{
									iLocal_61 = 0;
								}
								else if (__LIB_10__::func_683(&(Local_68.f_19)))
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
							func_410();
						}
						if (func_370(Local_68.f_9, Local_68.f_19, 25f, 0, 1090519040, 1097859072, 0))
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
							if (__LIB_41__::func_635(&uLocal_155, cLocal_148, "BB4_J2", 4, 0, 0, 0))
							{
								Local_68.f_17 = MISC::GET_GAME_TIMER();
								iLocal_122 = MISC::GET_GAME_TIMER();
								iLocal_91 = 1;
							}
							__LIB_10__::func_647(&(Local_68.f_8), "", "", &iLocal_125, iLocal_126, 0);
						}
						else if (!iLocal_87)
						{
							if (!__LIB_20__::func_245("BBC_T14", 1) && !__LIB_20__::func_245("BB4_J2", 1))
							{
								if (__LIB_0__::func_405("BBS_APHEND", 0, 0) || __LIB_0__::func_405("BBS_APHEND2", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								if (__LIB_0__::func_75())
								{
									__LIB_6__::func_771();
								}
								if (__LIB_41__::func_635(&uLocal_155, cLocal_149, "BBC_T1", 4, 0, 0, 0))
								{
									Local_68.f_17 = MISC::GET_GAME_TIMER();
									iLocal_87 = 1;
								}
								else if (iLocal_61 == 1)
								{
									if (__LIB_10__::func_638(iLocal_122, 1250))
									{
										Local_68.f_17 = (MISC::GET_GAME_TIMER() - 3000);
										iLocal_87 = 1;
									}
								}
							}
							else
							{
								iLocal_122 = MISC::GET_GAME_TIMER();
							}
							__LIB_10__::func_647(&(Local_68.f_8), "", "", &iLocal_125, iLocal_126, 0);
						}
						else if (__LIB_10__::func_638(Local_68.f_17, 500))
						{
							if (Local_68.f_10 != 3 && Local_68.f_10 != 4)
							{
								Local_68.f_18 = MISC::GET_GAME_TIMER();
								Local_68.f_10 = 3;
							}
							iLocal_60 = 2;
						}
						if (func_370(Local_68.f_9, Local_68.f_19, 25f, 0, 1090519040, 1097859072, 0))
						{
							iLocal_60 = 2;
						}
						break;
					case 3:
						__LIB_10__::func_647(&(Local_68.f_8), "", "", &iLocal_125, iLocal_126, 0);
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
				func_407(0);
				__LIB_10__::func_647(&(Local_68.f_8), "", "", &iLocal_125, iLocal_126, 0);
				iLocal_125 = MISC::GET_GAME_TIMER();
				iLocal_126 = MISC::GET_GAME_TIMER();
				__LIB_10__::func_640(2);
				break;
			}
	}
}

void func_407(bool bParam0)//Position - 0x2EC8B
{
	if (__LIB_20__::func_245("BB4_AMB", 0))
	{
		if (bParam0)
		{
			__LIB_6__::func_833();
		}
		else
		{
			__LIB_6__::func_771();
		}
	}
}

void func_410()//Position - 0x2ECE3
{
	if (!iLocal_92)
	{
		if (!__LIB_0__::func_75())
		{
			if (__LIB_0__::func_530(Local_68.f_9, Local_331, (25f + 5f), 1))
			{
				iLocal_116 = 0;
				if (HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					iLocal_116 = 1;
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Local_329))
				{
					if (__LIB_41__::func_635(&uLocal_155, cLocal_148, "BB4_AMB", 1, iLocal_116, 0, 0))
					{
						iLocal_92 = 1;
					}
				}
				else if (__LIB_40__::func_941(&uLocal_155, cLocal_148, "BB4_AMB", &Local_329, 1, iLocal_116, 0))
				{
					iLocal_92 = 1;
					StringCopy(&Local_329, "", 24);
				}
			}
		}
	}
	else if (__LIB_20__::func_245("BB4_AMB", 0))
	{
		if (!__LIB_0__::func_530(Local_68.f_9, Local_331, (25f + 10f), 1))
		{
			Local_329 = { __LIB_0__::func_389() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_329))
			{
				iLocal_92 = 0;
				__LIB_6__::func_833();
			}
		}
		else if (iLocal_116 == 0)
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				Local_329 = { __LIB_0__::func_389() };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_329))
				{
					iLocal_92 = 0;
					__LIB_6__::func_833();
				}
			}
		}
		else if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			Local_329 = { __LIB_0__::func_389() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_329))
			{
				iLocal_92 = 0;
				__LIB_6__::func_833();
			}
		}
	}
}

int func_414(int iParam0, int iParam1, bool bParam2, float fParam3, float fParam4)//Position - 0x2EF47
{
	if (__LIB_0__::func_121(iParam0))
	{
		if (!__LIB_10__::func_649(iParam1, 10))
		{
			if (bParam2)
			{
				if (!__LIB_0__::func_530(Local_68.f_9, Local_331, fParam3, 1))
				{
					return 0;
				}
				if (!__LIB_10__::func_660(iParam0, Local_331, fParam4))
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

void func_417()//Position - 0x2EFF7
{
	switch (iLocal_60)
	{
		case 0:
			if (bLocal_103)
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
			__LIB_40__::func_940(&Local_63, &uLocal_155);
			if (__LIB_1__::func_197(Local_68.f_9))
			{
				__LIB_26__::func_248(Local_68.f_9, &iLocal_133, 1126825984, 1);
				__LIB_32__::func_571(Local_68.f_9, &(Local_68.f_19), 120f, 7);
				func_365();
				if (__LIB_0__::func_530(Local_68.f_9, Local_331, 25f, 1) && __LIB_10__::func_660(Local_68.f_9, Local_331, 10f))
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
					else if (func_414(Local_68.f_9, iLocal_133, 0, 1103626240, 1086324736))
					{
						iLocal_61 = 0;
						iLocal_60 = 2;
					}
					else if (__LIB_0__::func_530(Local_68.f_9, Local_331, 5f, 1))
					{
						iLocal_61 = 0;
						iLocal_60 = 2;
					}
					else if (__LIB_10__::func_683(&(Local_68.f_19)))
					{
						if (__LIB_0__::func_530(Local_68.f_9, Local_331, (25f - 1.5f), 1))
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
				if (func_370(Local_68.f_9, Local_68.f_19, 25f, 0, 1090519040, 1097859072, 0))
				{
					iLocal_61 = 3;
					iLocal_60 = 2;
				}
			}
			func_410();
			break;
		case 2:
			if (iLocal_61 == 3)
			{
				func_407(0);
				__LIB_20__::func_244(&(Local_68.f_8), "", "", &iLocal_125, &iLocal_126, 1, 0);
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

void func_425()//Position - 0x2F528
{
	if (bLocal_103)
	{
		if ((iLocal_58 != 9 && iLocal_58 != 4) && iLocal_58 != 5)
		{
			func_426();
			if (iLocal_62 != 0)
			{
				if (iLocal_62 == 1)
				{
					Global_112095 = 0;
					func_594();
				}
				else
				{
					__LIB_10__::func_640(9);
				}
			}
		}
	}
}

void func_426()//Position - 0x2F572
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
		if (__LIB_38__::func_38(0))
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
		if (!SYSTEM::VDIST2(Local_331, Local_63) <= ((Local_63.f_3 + 25f) * (Local_63.f_3 + 25f)))
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
				if (!__LIB_0__::func_530(Local_68.f_9, Local_331, 150f, 1))
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
				if (!__LIB_0__::func_530(Local_68.f_9, Local_331, 80f, 1))
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

void func_439(int iParam0, bool bParam1)//Position - 0x2FCAA
{
	func_449(bParam1, 1);
	if (bParam1)
	{
		func_440();
	}
	iLocal_59 = iParam0;
	bLocal_103 = false;
	if (__LIB_0__::func_295())
	{
		iLocal_104 = 1;
	}
	else
	{
		iLocal_104 = 0;
	}
	if (!__LIB_0__::func_295())
	{
		if (iLocal_59 == 0)
		{
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_20__::func_249(PLAYER::PLAYER_PED_ID(), Local_333, fLocal_117, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				__LIB_20__::func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
				iLocal_104 = 1;
			}
		}
	}
	func_1(iLocal_59);
}

void func_440()//Position - 0x2FD39
{
	func_441(1, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!__LIB_0__::func_295())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			__LIB_20__::func_249(PLAYER::PLAYER_PED_ID(), Local_333, fLocal_117, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	}
	__LIB_0__::func_296();
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_320);
	func_536();
	__LIB_10__::func_640(0);
}

void func_441(bool bParam0, bool bParam1)//Position - 0x2FDAB
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
	__LIB_0__::func_410(1);
	if (iLocal_58 > 2)
	{
		__LIB_10__::func_659(0, &uLocal_142);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_141, false);
	PED::CLEAR_PED_NON_CREATION_AREA();
	__LIB_0__::func_202(&uLocal_155, 2);
	__LIB_0__::func_202(&uLocal_155, 3);
	__LIB_0__::func_202(&uLocal_155, 4);
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
	func_98(bParam0);
	func_442(bParam1);
}

void func_442(bool bParam0)//Position - 0x2FEC2
{
	if (bParam0)
	{
		HUD::CLEAR_ADDITIONAL_TEXT(0, true);
	}
	STREAMING::REMOVE_ANIM_DICT("oddjobs@bailbond_hobodepressed");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@bailbond_hobohang_out_street_b");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@bailbond_hobohang_out_street_c");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@bailbond_hobotwitchy");
	STREAMING::REMOVE_ANIM_DICT(__LIB_10__::func_637());
	__LIB_10__::func_684();
}

void func_449(bool bParam0, bool bParam1)//Position - 0x300EC
{
	if (bParam0)
	{
		__LIB_35__::func_895(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_199(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_451(int iParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x301B4
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
		*iParam0 = func_501(Param1, fParam2);
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
			while (!func_452(iParam0, iParam10, Param1, fParam2, 1, 0))
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

int func_452(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)//Position - 0x30348
{
	int iVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	if (__LIB_0__::func_43(iParam1))
	{
		Var2.f_11 = 12;
		Var2.f_31 = 49;
		Var2.f_81 = 2;
		__LIB_0__::func_120(iParam1, &Var2, iParam5);
		if (Var2.f_0 == 0)
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var2.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_113386.f_2363.f_539.f_4316) && Global_113386.f_9085.f_99.f_58[131])
		{
			Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/] == Var2.f_0)
		{
			STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/], Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_7, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar3 + 1, !Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_11[iVar3]);
					iVar3++;
				}
				if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (__LIB_0__::func_283(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_84, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_85, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_93, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_94, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				__LIB_18__::func_176(iParam0, &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						__LIB_6__::func_819(iParam0);
					}
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
				}
				__LIB_10__::func_569(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/] == Var2.f_0)
		{
			STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/], Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_7, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar4 + 1, !Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_11[iVar4]);
					iVar4++;
				}
				if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (__LIB_0__::func_283(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_84, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_85, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_93, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_94, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				__LIB_18__::func_176(iParam0, &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						__LIB_6__::func_819(iParam0);
					}
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
				}
				__LIB_10__::func_569(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var2.f_0);
			if (STREAMING::HAS_MODEL_LOADED(Var2.f_0))
			{
				bVar5 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var2.f_0, Param2, fParam3, true, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				StringCopy(&cVar6, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var2.f_5, Var2.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var2.f_7, Var2.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar7 + 1, !Var2.f_11[iVar7]);
					iVar7++;
				}
				if (Var2.f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var2.f_24);
				}
				if (__LIB_0__::func_283(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var2.f_27));
					if (Var2.f_26 >= 0 && Var2.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var2.f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var2.f_84, Var2.f_85, Var2.f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var2.f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var2.f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Var2.f_93, Var2.f_94, Var2.f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Var2.f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Var2.f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Var2.f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Var2.f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var2.f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var2.f_89);
				}
				if (Var2.f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var2.f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_90);
						}
					}
				}
				__LIB_18__::func_176(iParam0, &(Var2.f_31), &(Var2.f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (iParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bagger") && !Global_113386.f_9085.f_99.f_58[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						__LIB_6__::func_819(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_113386.f_2363.f_539.f_4316) && Global_113386.f_9085.f_99.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("tailgater"))
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
					Global_113386.f_2363.f_539.f_4316 = 1;
					func_453(iParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var2.f_0);
				}
				if (bVar5)
				{
					__LIB_10__::func_569(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_453(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x31168
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	if ((__LIB_0__::func_43(iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
	{
		if (iParam2 > Global_113386.f_2363.f_539.f_2407)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_135(*iParam1, iParam0);
		}
		if (VEHICLE::GET_NUM_MOD_KITS(*iParam1) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(*iParam1, 0);
		}
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/] = ENTITY::GET_ENTITY_MODEL(*iParam1);
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam1, &iVar1))
		{
			Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1 = ENTITY::GET_ENTITY_MODEL(iVar1);
		}
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3 = ENTITY::GET_ENTITY_HEALTH(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 2);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 3);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 4);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 5);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 6);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 7);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 8);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 9);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 10);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 11);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 12);
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam1, false))
		{
			iVar2 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		StringCopy(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam1), 16);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam1);
		VEHICLE::GET_VEHICLE_COLOURS(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87 = VEHICLE::GET_VEHICLE_WINDOW_TINT(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89 = VEHICLE::GET_VEHICLE_LIVERY(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(*iParam1);
		VEHICLE::GET_VEHICLE_NEON_COLOUR(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 2))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 3))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 0))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 1))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_113386.f_2363.f_539.f_4317[iParam0] = 10;
		if (VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) >= 0 && __LIB_37__::func_797(*iParam1, 0, &uVar0))
		{
			__LIB_0__::func_107(iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_113386.f_20118[iParam0 /*43*/].f_40 = 1;
				Global_113386.f_20118[iParam0 /*43*/] = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
				Global_113386.f_20118[iParam0 /*43*/].f_3 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_113386.f_20118[iParam0 /*43*/].f_4 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_113386.f_20118[iParam0 /*43*/].f_5 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_113386.f_20118[iParam0 /*43*/].f_6 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_113386.f_20118[iParam0 /*43*/].f_10 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_113386.f_20118[iParam0 /*43*/].f_16 = !Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_113386.f_20118[iParam0 /*43*/].f_19 = { Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_113386.f_20118[iParam0 /*43*/].f_23 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_113386.f_20118[iParam0 /*43*/].f_7 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_113386.f_20118[iParam0 /*43*/].f_8 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_113386.f_20118[iParam0 /*43*/].f_9 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_113386.f_20118[iParam0 /*43*/].f_11 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_113386.f_20118[iParam0 /*43*/].f_12 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_113386.f_20118[iParam0 /*43*/].f_13 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_113386.f_20118[iParam0 /*43*/].f_14 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_113386.f_20118[iParam0 /*43*/].f_15 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_113386.f_20118[iParam0 /*43*/].f_18 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_113386.f_20118[iParam0 /*43*/].f_17 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_113386.f_20118[iParam0 /*43*/].f_24 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 11) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_25 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 12) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_26 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 4) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_27 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 23) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_28 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 14) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_29 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 16) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_30 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 15) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_32 = VEHICLE::GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(*iParam1);
				Global_113386.f_20118[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1);
				Global_113386.f_20118[iParam0 /*43*/].f_33[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 0);
				Global_113386.f_20118[iParam0 /*43*/].f_33[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 1);
				Global_113386.f_20118[iParam0 /*43*/].f_33[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 2);
				Global_113386.f_20118[iParam0 /*43*/].f_33[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 3);
				Global_113386.f_20118[iParam0 /*43*/].f_39 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*iParam1);
				Global_113386.f_20118[iParam0 /*43*/].f_31 = __LIB_0__::func_265(*iParam1);
				Global_113386.f_20118[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(*iParam1);
				VEHICLE::GET_VEHICLE_MOD_COLOR_1(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				__LIB_6__::func_776(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_113386.f_20118[iParam0 /*43*/].f_1));
				VEHICLE::GET_VEHICLE_MOD_COLOR_2(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				__LIB_6__::func_776(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_113386.f_20118[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_501(struct<3> Param0, float fParam1)//Position - 0x353A5
{
	return func_502(&(Global_106934.f_2890), Param0, fParam1, 0);
}

int func_502(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x353BF
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
				__LIB_24__::func_999(iVar0, &(uParam0->f_12), 0, 1);
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
					func_135(iVar0, uParam0->f_11);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_66);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_536()//Position - 0x36741
{
	struct<3> Var0;
	struct<3> Var1;
	func_544();
	while (!func_58(0) || !func_58(1))
	{
		SYSTEM::WAIT(0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, false);
	}
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_320);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_320);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_320, joaat("PLAYER"));
	Var0 = { __LIB_10__::func_669(Local_63) };
	Var1 = { __LIB_10__::func_668(Local_63) };
	PED::SET_PED_NON_CREATION_AREA(Var0, Var1);
	iLocal_141 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var1, false, true, true, true);
	MISC::CLEAR_AREA(Local_63, 30f, false, false, false, false);
	MISC::ENABLE_DISPATCH_SERVICE(2, false);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	MISC::ENABLE_DISPATCH_SERVICE(4, false);
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	PED::SET_CREATE_RANDOM_COPS(false);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	__LIB_10__::func_665(1);
	while (!func_539())
	{
		SYSTEM::WAIT(0);
	}
	func_537();
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_203(&uLocal_155, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), true);
	}
	if (__LIB_1__::func_197(Local_68.f_9))
	{
		__LIB_0__::func_203(&uLocal_155, 3, Local_68.f_9, sLocal_144, 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_68.f_9, true);
	}
}

void func_537()//Position - 0x36886
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
		PED::SET_PED_AS_ENEMY(Local_68.f_9, true);
		if (Local_68.f_12 != 0)
		{
			WEAPON::GIVE_WEAPON_TO_PED(Local_68.f_9, Local_68.f_12, -1, false, true);
		}
		func_363(Local_68.f_9);
		__LIB_10__::func_667(Local_68.f_9, "TARGET_", 0);
		Local_68.f_10 = 0;
		PED::SET_PED_COMPONENT_VARIATION(Local_68.f_9, 0, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_68.f_9, 2, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_68.f_9, 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_68.f_9, 4, 0, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_143);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_c", "base", 8f, -1.5f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_c", "base", 8f, -1.5f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_c", "idle_a", 8f, -1.5f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_c", "idle_c", 8f, -1.5f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_c", "idle_a", 8f, -1.5f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_c", "base", 8f, -1.5f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_c", "idle_a", 8f, -1.5f, -1, 0, 0f, false, false, false);
		TASK::SET_SEQUENCE_TO_REPEAT(iLocal_143, true);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_143);
		TASK::TASK_PERFORM_SEQUENCE(Local_68.f_9, iLocal_143);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_143);
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_1__::func_197(Local_69[iVar0 /*19*/]))
		{
			func_363(Local_69[iVar0 /*19*/]);
			if (iVar0 == 0 || iVar0 == 2)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_69[iVar0 /*19*/], iLocal_320);
			}
			__LIB_10__::func_667(Local_69[iVar0 /*19*/], "BACKUP_", iVar0);
			switch (iVar0)
			{
				case 0:
					TASK::OPEN_SEQUENCE_TASK(&iLocal_143);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_b", "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_b", "base", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_b", "base", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_b", "base", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_b", "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_b", "base", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::SET_SEQUENCE_TO_REPEAT(iLocal_143, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_143);
					TASK::TASK_PERFORM_SEQUENCE(Local_69[iVar0 /*19*/], iLocal_143);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_143);
					break;
				case 1:
					TASK::OPEN_SEQUENCE_TASK(&iLocal_143);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobotwitchy", "base", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobotwitchy", "base", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobotwitchy", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobotwitchy", "base", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobotwitchy", "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobotwitchy", "base", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobotwitchy", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::SET_SEQUENCE_TO_REPEAT(iLocal_143, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_143);
					TASK::TASK_PERFORM_SEQUENCE(Local_69[iVar0 /*19*/], iLocal_143);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_143);
					break;
				case 2:
					TASK::OPEN_SEQUENCE_TASK(&iLocal_143);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobodepressed", "base", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobodepressed", "base", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobodepressed", "idle_c", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobodepressed", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobodepressed", "base", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobodepressed", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::SET_SEQUENCE_TO_REPEAT(iLocal_143, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_143);
					TASK::TASK_PERFORM_SEQUENCE(Local_69[iVar0 /*19*/], iLocal_143);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_143);
					break;
				}
		}
		iVar0++;
	}
}

int func_539()//Position - 0x36D99
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	if (__LIB_20__::func_250(&(Local_68.f_9), Local_68.f_11, Local_68.f_13, Local_68.f_16, 1, 0, 0))
	{
		if (__LIB_1__::func_197(Local_68.f_9))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_9, true);
			iVar0++;
		}
	}
	if (iLocal_132 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_132 - 1))
		{
			if (__LIB_20__::func_250(&(Local_69[iVar2 /*19*/]), Local_69[iVar2 /*19*/].f_18, Local_69[iVar2 /*19*/].f_1, Local_69[iVar2 /*19*/].f_4, 0, 0, 0))
			{
				if (__LIB_1__::func_197(Local_69[iVar2 /*19*/]))
				{
					iVar0++;
					iVar1++;
				}
			}
			iVar2++;
		}
	}
	if (iVar1 == iLocal_132)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_132 - 1))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_69[iVar2 /*19*/].f_18);
			iVar2++;
		}
	}
	if (iLocal_129 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_129 - 1))
		{
			if (__LIB_20__::func_259(&(Local_71[iVar2 /*6*/]), Local_71[iVar2 /*6*/].f_5, Local_71[iVar2 /*6*/].f_1, Local_71[iVar2 /*6*/].f_4, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_130 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_130 - 1))
		{
			if (__LIB_10__::func_680(&(Local_72[iVar2 /*6*/]), Local_72[iVar2 /*6*/].f_5, Local_72[iVar2 /*6*/].f_1, Local_72[iVar2 /*6*/].f_4, 1))
			{
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
			if (__LIB_10__::func_680(&(Local_73[iVar2 /*9*/]), Local_73[iVar2 /*9*/].f_8, Local_73[iVar2 /*9*/].f_1, Local_73[iVar2 /*9*/].f_7, 1))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_73[iVar2 /*9*/], true);
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_131 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_131 - 1))
		{
			if (__LIB_10__::func_685(&(Local_74[iVar2 /*7*/]), Local_74[iVar2 /*7*/].f_5, Local_74[iVar2 /*7*/].f_2, Local_74[iVar2 /*7*/].f_6, Local_74[iVar2 /*7*/].f_1, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iVar0 == ((((iLocal_132 + iLocal_129) + iLocal_130) + iLocal_128) + iLocal_131) + 1)
	{
		return 1;
	}
	return 0;
}

void func_544()//Position - 0x371C7
{
	int iVar0;
	iVar0 = 0;
	iLocal_67 = 4;
	Local_68.f_11 = joaat("A_M_O_ACult_02");
	Local_68.f_13 = { 1429.18f, 6350.05f, 23.99f };
	Local_68.f_16 = 39.2f;
	Local_68.f_12 = joaat("WEAPON_PISTOL");
	Local_68.f_10 = 0;
	Local_68.f_17 = 0;
	Local_68.f_18 = 0;
	Local_68.f_19 = 0;
	__LIB_20__::func_239();
	Local_69[0 /*19*/].f_18 = joaat("A_M_M_Tramp_01");
	Local_69[0 /*19*/].f_1 = { 1426.88f, 6352.04f, 23.99f };
	Local_69[0 /*19*/].f_4 = -166.25f;
	Local_69[1 /*19*/].f_18 = joaat("A_M_M_Tramp_01");
	Local_69[1 /*19*/].f_1 = { 1430.64f, 6347.71f, 23.99f };
	Local_69[1 /*19*/].f_4 = 39.58f;
	Local_69[2 /*19*/].f_18 = joaat("A_M_M_Tramp_01");
	Local_69[2 /*19*/].f_1 = { 1429.44f, 6345.15f, 23.99f };
	Local_69[2 /*19*/].f_4 = 10.05f;
	Local_69[2 /*19*/].f_16 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_132 - 1))
	{
		Local_69[iVar0 /*19*/].f_15 = 0;
		Local_69[iVar0 /*19*/].f_16 = 0;
		Local_69[iVar0 /*19*/].f_14 = 0;
		iVar0++;
	}
	iLocal_132 = 3;
	iLocal_129 = 0;
	Local_72[0 /*6*/].f_5 = joaat("prop_box_wood04a");
	Local_72[0 /*6*/].f_1 = { 1427.1107f, 6346.972f, 22.9878f };
	Local_72[0 /*6*/].f_4 = 257.2001f;
	Local_72[1 /*6*/].f_5 = joaat("prop_box_wood04a");
	Local_72[1 /*6*/].f_1 = { 1445.8561f, 6348.2437f, 22.6787f };
	Local_72[1 /*6*/].f_4 = 190.8004f;
	Local_72[2 /*6*/].f_5 = joaat("prop_box_wood04a");
	Local_72[2 /*6*/].f_1 = { 1433.8666f, 6344.37f, 22.9878f };
	Local_72[2 /*6*/].f_4 = 68.0003f;
	Local_72[3 /*6*/].f_5 = joaat("prop_box_wood04a");
	Local_72[3 /*6*/].f_1 = { 1439.4877f, 6353.5938f, 22.9811f };
	Local_72[3 /*6*/].f_4 = 117.2f;
	Local_72[4 /*6*/].f_5 = joaat("prop_box_wood04a");
	Local_72[4 /*6*/].f_1 = { 1441.3259f, 6340.9526f, 22.9246f };
	Local_72[4 /*6*/].f_4 = 47.9998f;
	Local_72[5 /*6*/].f_5 = joaat("prop_box_wood04a");
	Local_72[5 /*6*/].f_1 = { 1432.9397f, 6351.1963f, 22.9878f };
	Local_72[5 /*6*/].f_4 = 5.5997f;
	Local_72[6 /*6*/].f_5 = joaat("prop_box_wood04a");
	Local_72[6 /*6*/].f_1 = { 1431.6637f, 6337.6978f, 22.9945f };
	Local_72[6 /*6*/].f_4 = 129.1996f;
	iLocal_130 = 7;
	iLocal_128 = 0;
	iLocal_131 = 0;
	Local_333 = { 1477.9075f, 6372.509f, 22.5721f };
	fLocal_117 = 145.357f;
	Local_334 = { 1456.282f, 6352.942f, 22.8309f };
	fLocal_118 = 97.282f;
	Local_335 = { 1445.6962f, 6351.5645f, 22.7946f };
	fLocal_119 = 90.3412f;
	Local_336 = { 0f, 0f, 0f };
	Local_337 = { 0f, 0f, 0f };
	iLocal_61 = 4;
	iLocal_81 = 0;
	iLocal_82 = 0;
	iLocal_83 = 0;
	iLocal_85 = 1;
	iLocal_84 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iLocal_86[iVar0] = 0;
		iVar0++;
	}
	iLocal_87 = 0;
	iLocal_88 = 0;
	iLocal_89 = 0;
	iLocal_90 = 0;
	iLocal_91 = 1;
	iLocal_92 = 0;
	iLocal_93 = 0;
	iLocal_94 = 0;
	iLocal_96 = 0;
	iLocal_97 = 0;
	iLocal_98 = 0;
	iLocal_99 = 0;
	bLocal_105 = false;
	iLocal_106 = 0;
	iLocal_107 = 0;
	iLocal_108 = 0;
	iLocal_109 = 1;
	iLocal_110 = 0;
	iLocal_111 = 0;
	iLocal_112 = 0;
	iLocal_100 = 1;
	bLocal_101 = false;
	iLocal_102 = 0;
	iLocal_113 = 0;
	bLocal_114 = false;
	iLocal_62 = 0;
	iLocal_127 = 0;
	iLocal_121 = 0;
	iLocal_125 = 0;
	iLocal_126 = 0;
	iLocal_122 = 0;
	iLocal_123 = 0;
	iLocal_124 = 0;
	iLocal_138 = 0;
	iLocal_120 = 0;
	iLocal_133 = 0;
	iLocal_134 = -1;
	iLocal_135 = -1;
	iLocal_137 = 0;
	iLocal_139 = -1;
	Local_332 = { 1425.318f, 6346.781f, 22.9851f };
	Local_330 = { 2722.6611f, 4143.1055f, 43.0617f };
	StringCopy(&Local_321, "", 24);
	StringCopy(&Local_329, "", 24);
	Local_75.f_6 = __LIB_2__::func_108(62);
	Local_75.f_1 = { __LIB_10__::func_679() };
	Local_75.f_4 = __LIB_10__::func_678();
	Local_77.f_5 = __LIB_10__::func_677();
	Local_77.f_1 = { __LIB_10__::func_676() };
	Local_77.f_4 = __LIB_10__::func_675();
	Local_78.f_5 = __LIB_10__::func_674();
	Local_78.f_1 = { __LIB_10__::func_673() };
	Local_78.f_4 = __LIB_10__::func_672();
	Local_79.f_5 = __LIB_10__::func_629();
	Local_79.f_1 = { __LIB_10__::func_628() };
	Local_79.f_4 = __LIB_10__::func_627();
	Local_80.f_5 = __LIB_10__::func_626();
	Local_80.f_1 = { __LIB_10__::func_671() };
	Local_80.f_4 = __LIB_10__::func_670();
	sLocal_144 = "BailBond4Jumper";
	sLocal_146 = "BB4_J3";
	sLocal_147[0] = "BB4_VC1";
	sLocal_147[1] = "BB4_VC2";
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iLocal_86[iVar0] = 0;
		iVar0++;
	}
	iLocal_70 = 0;
}

void func_594()//Position - 0x3A241
{
	if (iLocal_109)
	{
		func_441(0, 1);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

