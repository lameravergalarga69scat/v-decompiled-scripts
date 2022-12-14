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
	struct<3> Local_22 = { 0, 0, 0 } ;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	struct<4> Local_38[10];
	bool bLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	struct<61> Local_54 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	bool bLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	struct<2> Local_73 = { 0, 0 } ;
	struct<2> Local_74 = { 0, 0 } ;
	struct<2> Local_75 = { 0, 0 } ;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78 = 16;
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
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int* iLocal_245 = NULL;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	float fLocal_250 = 0f;
	float fLocal_251 = 0f;
	float fLocal_252 = 0f;
	float fLocal_253 = 0f;
	float fLocal_254 = 0f;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	char* sLocal_263[2] = { NULL, NULL };
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	char* sLocal_266[3] = { NULL, NULL, NULL };
	struct<2> Local_267 = { 0, 0 } ;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	struct<2> Local_270 = { 0, 0 } ;
	var uLocal_271 = -1;
	struct<2> Local_272 = { 0, 0 } ;
	var uLocal_273 = -1;
	struct<2> Local_274 = { 0, 0 } ;
	var uLocal_275 = -1;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	struct<5> Local_284[3];
	struct<5> Local_285 = { 0, 0, 0, 0, -1 } ;
	struct<3> Local_286 = { 0, 0, 0 } ;
	var uLocal_287 = 0;
	var uLocal_288 = -1;
	struct<3> Local_289 = { 0, 0, 0 } ;
	var uLocal_290 = 0;
	var uLocal_291 = -1;
	struct<3> Local_292 = { 0, 0, 0 } ;
	var uLocal_293 = 0;
	var uLocal_294 = -1;
	struct<3> Local_295 = { 0, 0, 0 } ;
	var uLocal_296 = 0;
	var uLocal_297 = -1;
	struct<3> Local_298 = { 0, 0, 0 } ;
	var uLocal_299 = 0;
	var uLocal_300 = -1;
	struct<3> Local_301 = { 0, 0, 0 } ;
	var uLocal_302 = 0;
	var uLocal_303 = -1;
	int iLocal_304 = 0;
	struct<3> Local_305 = { 0, 0, 0 } ;
	float fLocal_306 = 0f;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	char* sLocal_311 = NULL;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	struct<21> Local_314 = { 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0 } ;
	var uLocal_315 = 0;
	struct<21> Local_316 = { 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0 } ;
	var uLocal_317 = 0;
	struct<21> Local_318 = { 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0 } ;
	var uLocal_319 = 0;
	struct<21> Local_320 = { 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0 } ;
	var uLocal_321 = 0;
	struct<13> Local_322 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_323 = 0;
	struct<13> Local_324 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_325[4];
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int* iLocal_330 = NULL;
	int* iLocal_331 = NULL;
	int iLocal_332 = 0;
	struct<3> Local_333 = { 0, 0, 0 } ;
	struct<3> Local_334 = { 0, 0, 0 } ;
	struct<3> Local_335 = { 0, 0, 0 } ;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	struct<3> Local_345 = { 0, 0, 0 } ;
	float fLocal_346 = 0f;
	int iLocal_347 = 0;
	char* sLocal_348 = NULL;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	struct<3> Local_353 = { 0, 0, 0 } ;
	struct<3> Local_354 = { 0, 0, 0 } ;
	struct<3> Local_355 = { 0, 0, 0 } ;
	struct<3> Local_356 = { 0, 0, 0 } ;
	int* iLocal_357 = NULL;
	int* iLocal_358 = NULL;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	struct<3> Local_363[10];
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	float fLocal_373 = 0f;
	float fLocal_374 = 0f;
	float fLocal_375 = 0f;
	float fLocal_376 = 0f;
	float fLocal_377 = 0f;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	struct<61> Local_380 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	iLocal_50 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_51 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	uLocal_53 = __LIB_2__::func_910(61);
	bLocal_65 = true;
	iLocal_67 = 1;
	iLocal_248 = 1800;
	iLocal_249 = 4500;
	fLocal_250 = 1.025f;
	fLocal_251 = fLocal_250;
	fLocal_252 = 3f;
	fLocal_253 = fLocal_252;
	fLocal_254 = -1f;
	Local_305 = { -2002.52f, -503.53f, 11.27f };
	fLocal_306 = 0.13f;
	iLocal_307 = joaat("scorcher");
	iLocal_326 = joaat("A_F_Y_Fitness_01");
	Local_333 = { -1818.96f, -751.5f, 7.99f };
	iLocal_338 = -1;
	iLocal_339 = -1;
	Local_345 = { -1957.213f, -555.2614f, 11.083831f };
	fLocal_346 = -87.35699f;
	sLocal_348 = "Fanatic1MaryAnn";
	Local_356 = { -2005.65f, -508.08f, 10.76f };
	iLocal_365 = 1;
	fLocal_373 = 40f;
	fLocal_374 = 0.35f;
	fLocal_375 = 0f;
	fLocal_376 = -0.8f;
	fLocal_377 = -0.05f;
	Local_54 = { ScriptParam_380 };
	__LIB_14__::func_801(&Local_54);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
		__LIB_14__::func_872(1);
		func_457();
	}
	if (__LIB_0__::func_323() || __LIB_0__::func_2(0))
	{
		Global_78564 = 1;
		iLocal_52 = 0;
		while (!func_447(&Local_54))
		{
			SYSTEM::WAIT(0);
		}
		Global_78564 = 0;
	}
	__LIB_12__::func_849(2, 1);
	iLocal_244 = Local_54.f_28[0];
	uLocal_72 = __LIB_17__::func_122(0);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	if (__LIB_0__::func_323() || __LIB_0__::func_2(0))
	{
		__LIB_14__::func_800(&Local_54, 0, 1);
		if (__LIB_0__::func_121(iLocal_244))
		{
			ENTITY::SET_ENTITY_PROOFS(iLocal_244, false, false, false, false, false, false, false, false);
		}
		__LIB_0__::func_427(-1878.2344f, -439.6985f, 45.0299f, 241.0468f, 1, 0);
		func_440();
		if (!__LIB_0__::func_2(0))
		{
			switch (__LIB_0__::func_344())
			{
				case 0:
					func_424(1);
					break;
			}
		}
		else if (__LIB_0__::func_323())
		{
			switch (__LIB_0__::func_344())
			{
				case 0:
					func_424(1);
					break;
			}
		}
		else
		{
			func_424(0);
		}
	}
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_EDM", 0);
		SYSTEM::WAIT(0);
		__LIB_14__::func_863(Local_54.f_9, 1, 0, 0, 0, 0);
		func_401();
		func_383();
		__LIB_17__::func_408();
		if (((iLocal_56 != 0 && iLocal_56 != 1) && iLocal_56 != 10) && iLocal_56 != 9)
		{
			if (iLocal_56 != 8)
			{
				func_381();
			}
			func_368();
			func_366();
		}
		else if (iLocal_56 == 0)
		{
			__LIB_14__::func_862();
		}
		else if (iLocal_56 == 1)
		{
			if (__LIB_0__::func_121(iLocal_244))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_244, 2.3f);
			}
		}
		switch (iLocal_56)
		{
			case 0:
				func_363();
				break;
			case 1:
				func_352();
				break;
			case 2:
				func_348();
				break;
			case 3:
				func_342();
				break;
			case 4:
				func_335();
				break;
			case 5:
				func_321();
				break;
			case 6:
				func_318();
				break;
			case 7:
				func_317();
				break;
			case 8:
				func_43();
				break;
			case 9:
				func_41();
				break;
			case 10:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x3A1
{
	char* sVar0;
	switch (iLocal_55)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			if (iLocal_58 != 2)
			{
				if (__LIB_0__::func_75())
				{
					__LIB_17__::func_32("Killing conversation in fail state");
					__LIB_0__::func_429();
				}
			}
			else if (!__LIB_0__::func_75())
			{
				if (__LIB_2__::func_859(&uLocal_78, "FAN1AU", "FAN1_AGGRO", 9, 0, 0, 0))
				{
					__LIB_17__::func_32("Playing aggro convo with subs");
				}
			}
			else
			{
				__LIB_17__::func_32("Convo already active when failing for scaring Mary Ann - playing without subs asap?");
				__LIB_0__::func_325();
				__LIB_14__::func_654(&uLocal_78, "FAN1AU", "FAN1_AGGRO", 8, 0, 0);
			}
			__LIB_0__::func_714(&iLocal_245);
			__LIB_0__::func_714(&iLocal_357);
			__LIB_0__::func_714(&iLocal_358);
			GRAPHICS::DELETE_CHECKPOINT(iLocal_359);
			if ((iLocal_58 == 1 || iLocal_58 == 0) || iLocal_58 == 2)
			{
				if (__LIB_0__::func_121(iLocal_244))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_244, PLAYER::PLAYER_PED_ID(), 80f, -1, false, false);
				}
			}
			switch (iLocal_58)
			{
				case 0:
					sVar0 = "FATIC1_F8";
					break;
				case 2:
					sVar0 = "FATIC1_F2";
					break;
				case 1:
					sVar0 = "FATIC1_F1";
					break;
				case 3:
					sVar0 = "FATIC1_F5";
					break;
				case 4:
					sVar0 = "FATIC1_F3";
					break;
				case 5:
					sVar0 = "FATIC1_F7";
					break;
				case 6:
					sVar0 = "FATIC1_F6";
					break;
				default:
					break;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				__LIB_14__::func_880(sVar0, 1);
			}
			else
			{
				__LIB_14__::func_872(1);
			}
			iLocal_55 = 1;
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				func_5();
				func_4(1);
				__LIB_17__::func_116(0, uLocal_72);
				func_457();
			}
			break;
	}
}

void func_4(bool bParam0)//Position - 0x556
{
	if (bLocal_65 != bParam0)
	{
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1708.314f, -574.0266f, 36.873383f, -2044.7664f, -370.91672f, 9.152167f, 27.25f, false, bParam0, true);
		bLocal_65 = bParam0;
	}
}

void func_5()//Position - 0x594
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_244, 0f);
	}
	__LIB_0__::func_0(&iLocal_244);
	__LIB_0__::func_0(&iLocal_328);
	__LIB_0__::func_0(&iLocal_330);
	__LIB_0__::func_0(&iLocal_331);
	__LIB_0__::func_0(&iLocal_329);
	__LIB_0__::func_0(&iLocal_344);
	__LIB_0__::func_0(&(Local_325[0 /*12*/]));
	__LIB_0__::func_0(&(Local_325[1 /*12*/]));
	__LIB_0__::func_0(&(Local_325[2 /*12*/]));
	__LIB_0__::func_0(&(Local_325[3 /*12*/]));
	__LIB_0__::func_0(&Local_322);
	__LIB_0__::func_0(&(Local_322.f_1));
	__LIB_0__::func_0(&Local_324);
	__LIB_0__::func_0(&(Local_324.f_1));
	__LIB_8__::func_397(&(Local_322.f_2));
	__LIB_8__::func_397(&(Local_324.f_2));
	__LIB_8__::func_397(&iLocal_332);
	__LIB_8__::func_397(&iLocal_304);
}

void func_41()//Position - 0x1175
{
	int iVar0;
	switch (iLocal_55)
	{
		case 0:
			__LIB_17__::func_32("In setup for Lost Race");
			__LIB_0__::func_714(&iLocal_245);
			__LIB_0__::func_714(&iLocal_357);
			__LIB_0__::func_714(&iLocal_358);
			GRAPHICS::DELETE_CHECKPOINT(iLocal_359);
			iVar0 = __LIB_0__::func_680();
			if (iLocal_243 == 0)
			{
				if (iVar0 == 1)
				{
					__LIB_2__::func_859(&uLocal_78, "FAN1AU", "FAN1_LOSE", 8, 0, 0, 0);
					__LIB_17__::func_32("Doing 'FAN1_LOSE'");
				}
				else
				{
					__LIB_2__::func_859(&uLocal_78, "FAN1AU", "FAN1_LOSE2", 8, 0, 0, 0);
					__LIB_17__::func_32("Doing 'FAN1_LOSE2'");
				}
			}
			TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			TASK::TASK_PLAY_ANIM(0, "rcmfanatic1celebrate", "celebrate", 4f, -16f, -1, 286720, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "move_f@runner", "idle", 16f, -4f, -1, 270337, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_244, iLocal_77);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
			__LIB_17__::func_32("Going into loop for Lost Race");
			iLocal_55 = 1;
			break;
		case 1:
			if (!__LIB_0__::func_75())
			{
				__LIB_17__::func_32("No conversation going in Lost Race, failing properly now");
				AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
				iLocal_58 = 5;
				iLocal_55 = 0;
				iLocal_56 = 10;
			}
			break;
	}
}

void func_43()//Position - 0x12B4
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (iLocal_360 != 0)
	{
		__LIB_17__::func_32("Fade previous CP");
		iLocal_361 = (iLocal_361 - 25);
		if (iLocal_361 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_360, iVar0, iVar1, iVar2, iLocal_361);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_360, iVar0, iVar1, iVar2, iLocal_361);
		}
		else
		{
			GRAPHICS::DELETE_CHECKPOINT(iLocal_360);
		}
	}
	switch (iLocal_55)
	{
		case 0:
			__LIB_0__::func_714(&iLocal_357);
			GRAPHICS::DELETE_CHECKPOINT(iLocal_359);
			if (__LIB_0__::func_692(iLocal_344))
			{
				TASK::CLEAR_PED_TASKS(iLocal_344);
				TASK::TASK_SMART_FLEE_PED(iLocal_344, PLAYER::PLAYER_PED_ID(), 40f, -1, false, false);
			}
			if (__LIB_0__::func_75())
			{
				__LIB_17__::func_32("stop scripted conversation at END_CUTSCENE");
				__LIB_0__::func_429();
			}
			if (__LIB_0__::func_121(iLocal_244))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_244, true, 1);
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_244, 1);
			}
			iLocal_63 = 0;
			AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FINISH");
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar4, false);
			if (iVar4 != joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
			if (bLocal_68)
			{
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 30f, 0);
				__LIB_14__::func_614(-2010.693f, -504.88205f, 9.529695f, -1995.9468f, -517.2494f, 13.764661f, 10f, -2008.54f, -494.1f, 11.04f, 48.19f, __LIB_13__::func_790(), 1, 1, 1, 0, 0);
				func_303(Local_356, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
				func_302();
				if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_244) > 32f)
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_244, -1986.2f, -526.22f, 11f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_244, 58.26f);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_348, func_298(), 1040, -1);
					TASK::TASK_PLAY_ANIM(0, "move_f@runner", "idle", 4f, -4f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_244, iLocal_77);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
					PED::FORCE_PED_MOTION_STATE(iLocal_244, joaat("MotionState_Run"), true, 1, false);
				}
				TASK::TASK_LOOK_AT_ENTITY(iLocal_244, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_356, 1f, 20000, 0.5f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), true, 0, false);
				STREAMING::REQUEST_ANIM_DICT("rcmfanatic1out_of_breath");
				while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1out_of_breath"))
				{
					__LIB_17__::func_32("Loading ANIMS");
					SYSTEM::WAIT(0);
				}
				iLocal_310 = 0;
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT("rcmfanatic1out_of_breath");
				while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1out_of_breath"))
				{
					__LIB_17__::func_32("Loading ANIMS");
					SYSTEM::WAIT(0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_304))
			{
				STREAMING::REQUEST_MODEL(iLocal_307);
				while (!STREAMING::HAS_MODEL_LOADED(iLocal_307))
				{
					__LIB_17__::func_32("Loading MARYSBIKE MODEL");
					SYSTEM::WAIT(0);
				}
				iLocal_304 = VEHICLE::CREATE_VEHICLE(iLocal_307, Local_305, fLocal_306, true, true, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_307);
			}
			iVar5 = 0;
			while (iVar5 <= 3)
			{
				if (__LIB_0__::func_692(Local_325[iVar5 /*12*/]))
				{
					if ((PED::IS_PED_IN_MELEE_COMBAT(Local_325[iVar5 /*12*/]) || PED::IS_PED_RESPONDING_TO_EVENT(Local_325[iVar5 /*12*/], 55)) || PED::IS_PED_RESPONDING_TO_EVENT(Local_325[iVar5 /*12*/], 42))
					{
						TASK::CLEAR_PED_TASKS(Local_325[iVar5 /*12*/]);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_PAUSE(0, 2000);
						TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
						TASK::TASK_PERFORM_SEQUENCE(Local_325[iVar5 /*12*/], iLocal_77);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
						__LIB_0__::func_124(&(Local_325[iVar5 /*12*/]), 1, 0, 1);
					}
				}
				iVar5++;
			}
			iLocal_309 = 0;
			iLocal_55 = 1;
			break;
		case 1:
			func_296();
			__LIB_0__::func_91();
			__LIB_1__::func_33(0);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
			switch (iLocal_308)
			{
				case 1:
					if (bLocal_68)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
						{
							if (iLocal_310 == 0)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
								TASK::TASK_PLAY_ANIM(0, "rcmfanatic1out_of_breath", "base", 8f, -8f, -1, 1, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_77);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
								iLocal_310 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_244, Local_356, 5f, 5f, 3f, false, true, 0) && iLocal_310 == 1)
						{
							if (iLocal_59 == 0)
							{
								sLocal_311 = "FAN1_DONE_2";
							}
							else if (iLocal_59 == 1)
							{
								sLocal_311 = "FAN1_DONE_3";
							}
							if (__LIB_33__::func_542(&uLocal_78, "FAN1AU", "FAN1_DONE", "FAN1_DONE_1", "FAN1_DONE", sLocal_311, "FAN1_DONE", "FAN1_DONE_4", "FAN1_DONE", "FAN1_DONE_5", 7, 0, 0))
							{
								iLocal_308 = 2;
							}
						}
					}
					else
					{
						func_285();
						if (__LIB_0__::func_121(iLocal_244))
						{
							TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_348, ENTITY::GET_ENTITY_COORDS(iLocal_244, true), &iVar6);
							if (iVar6 >= 125)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
								TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "jogging_up", 8f, -16f, -1, 262144, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "jogging_on_spot", 16f, -4f, -1, 262145, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_244, iLocal_77);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_244, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								if (iLocal_59 == 0)
								{
									sLocal_311 = "FAN1_DONE_2";
								}
								else if (iLocal_59 == 1)
								{
									sLocal_311 = "FAN1_DONE_3";
								}
								if (__LIB_33__::func_542(&uLocal_78, "FAN1AU", "FAN1_DONE", "FAN1_DONE_1", "FAN1_DONE", sLocal_311, "FAN1_DONE", "FAN1_DONE_4", "FAN1_DONE", "FAN1_DONE_5", 7, 0, 0))
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 10f, 1);
									iLocal_308 = 2;
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_244, 4000, 0, 2);
									iLocal_308 = 2;
								}
							}
						}
					}
					break;
				case 2:
					if (bLocal_68)
					{
						switch (iLocal_309)
						{
							case 0:
								if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 2)
								{
									CAM::DETACH_CAM(iLocal_312);
									CAM::STOP_CAM_POINTING(iLocal_312);
									CAM::SET_CAM_PARAMS(iLocal_312, -2008.2262f, -508.2978f, 12.2798f, -9.0657f, 0f, -70.473f, 50f, 0, 1, 1, 2);
									iLocal_309 = 1;
								}
								break;
							case 1:
								if (__LIB_0__::func_695(iLocal_304))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
									TASK::TASK_LOOK_AT_ENTITY(0, iLocal_304, -1, 0, 2);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2003.36f, -503.77f, 10.48f, 2f, 20000, 1f, 10241, 40000f);
									TASK::TASK_ENTER_VEHICLE(0, iLocal_304, 20000, -1, 1f, 1, 0);
									TASK::TASK_CLEAR_LOOK_AT(0);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 0, 2);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_304, -2014.96f, -455.47f, 10.48f, 10f, 0, iLocal_307, 8, 3f, 50f);
									TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_304, 10f, 786599);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_244, iLocal_77);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
									PED::SET_PED_KEEP_TASK(iLocal_244, true);
									TASK::SET_ANIM_LOOPED(PLAYER::PLAYER_PED_ID(), false, 0, false);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
									TASK::TASK_PLAY_ANIM(0, "rcmfanatic1out_of_breath", "base", 8f, -8f, -1, 0, 0f, false, false, false);
									TASK::TASK_LOOK_AT_ENTITY(0, iLocal_244, -1, 0, 2);
									TASK::TASK_TURN_PED_TO_FACE_COORD(0, -2000.81f, -496.56f, 10.56f, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
									TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_77);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
								}
								iLocal_308 = 3;
								break;
						}
					}
					else
					{
						func_285();
						func_283();
						if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 2)
						{
							if (!bLocal_69)
							{
								if (__LIB_0__::func_695(iLocal_304))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
									TASK::TASK_CLEAR_LOOK_AT(0);
									TASK::TASK_LOOK_AT_ENTITY(0, iLocal_304, -1, 0, 2);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2003.36f, -503.77f, 10.48f, 2f, 20000, 1f, 2049, 40000f);
									TASK::TASK_ENTER_VEHICLE(0, iLocal_304, 20000, -1, 2f, 1, 0);
									TASK::TASK_CLEAR_LOOK_AT(0);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 0, 2);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_304, -2018.17f, -461f, 10.56f, 10f, 0, iLocal_307, 8, 3f, 50f);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_304, -2014.96f, -455.47f, 10.48f, 10f, 0, iLocal_307, 8, 3f, 50f);
									TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_304, 10f, 786599);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_244, iLocal_77);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
									PED::SET_PED_KEEP_TASK(iLocal_244, true);
								}
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
								TASK::TASK_CLEAR_LOOK_AT(0);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 0, 2);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1954.1f, -450.9f, 16.77f, 2f, 20000, 0.25f, 0, 40000f);
								TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_244, iLocal_77);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
								PED::SET_PED_KEEP_TASK(iLocal_244, true);
							}
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_244, 6000, 0, 2);
							iLocal_308 = 3;
						}
					}
					break;
				case 3:
					if (bLocal_68)
					{
						if (!__LIB_0__::func_75())
						{
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_244, 5f, 5f, 3f, false, true, 0))
							{
								iLocal_308 = 4;
							}
						}
					}
					else
					{
						func_285();
						if (bLocal_69)
						{
							if (!iLocal_70)
							{
								if (__LIB_0__::func_121(iLocal_244))
								{
									TASK::CLEAR_PED_TASKS(iLocal_244);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
									TASK::TASK_CLEAR_LOOK_AT(0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1954.1f, -450.9f, 16.77f, 2f, 20000, 0.25f, 0, 40000f);
									TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_244, iLocal_77);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
									PED::SET_PED_KEEP_TASK(iLocal_244, true);
									iLocal_70 = 1;
								}
							}
						}
						if (!__LIB_0__::func_75())
						{
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_244, 5f, 5f, 3f, false, true, 0))
							{
								iLocal_308 = 4;
							}
						}
					}
					break;
				case 4:
					if (bLocal_68)
					{
						if (!__LIB_0__::func_75())
						{
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_244, 5f, 5f, 3f, false, true, 0))
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
								CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
								__LIB_14__::func_844(1, 1, 1, 1);
								func_69();
							}
						}
					}
					else if (!__LIB_0__::func_75())
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_244, 5f, 5f, 3f, false, true, 0))
						{
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmfanatic1out_of_breath", "p_zero_tired_exit", 1000f, -2f, -1, 48, 0f, false, false, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
							func_69();
						}
					}
					break;
			}
			if (bLocal_68)
			{
				if (__LIB_0__::func_645(1000))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					__LIB_14__::func_844(1, 1, 1, 1);
					VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
					func_69();
				}
			}
			else if (__LIB_0__::func_121(iLocal_244))
			{
				func_57();
				func_45();
				if (iLocal_308 > 1)
				{
					if (__LIB_0__::func_75())
					{
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_244, 1) > 15f)
						{
							if (!bLocal_69)
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_244, true))
								{
									if (iLocal_308 <= 2)
									{
										if (__LIB_0__::func_695(iLocal_304))
										{
											TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
											TASK::TASK_LOOK_AT_ENTITY(0, iLocal_304, -1, 0, 2);
											TASK::TASK_ENTER_VEHICLE(0, iLocal_304, 20000, -1, 1f, 1, 0);
											TASK::TASK_CLEAR_LOOK_AT(0);
											TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 0, 2);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_304, -2018.17f, -461f, 10.56f, 10f, 0, iLocal_307, 8, 3f, 50f);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_304, -2024.98f, -479.55f, 10.57f, 10f, 0, iLocal_307, 8, 3f, 50f);
											TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_304, 10f, 786599);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_244, iLocal_77);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
											PED::SET_PED_KEEP_TASK(iLocal_244, true);
										}
									}
								}
							}
							else if (!iLocal_70)
							{
								if (__LIB_0__::func_121(iLocal_244))
								{
									TASK::CLEAR_PED_TASKS(iLocal_244);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
									TASK::TASK_CLEAR_LOOK_AT(0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1954.1f, -450.9f, 16.77f, 2f, 20000, 0.25f, 0, 40000f);
									TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_244, iLocal_77);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
									PED::SET_PED_KEEP_TASK(iLocal_244, true);
									iLocal_70 = 1;
								}
							}
							__LIB_0__::func_325();
							iLocal_308 = 4;
						}
					}
				}
			}
			break;
	}
}

void func_45()//Position - 0x1EEB
{
	if ((((iLocal_56 != 7 && iLocal_56 != 10) && iLocal_56 != 8) && iLocal_56 != 10) && iLocal_56 != 9)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (Local_75.f_1 == 0)
			{
				__LIB_0__::func_151(Local_75.f_0, -1);
				Local_75.f_1 = 1;
			}
			if (__LIB_33__::func_557(iLocal_244, 1126825984) || __LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_244) < 7f)
			{
				iLocal_57 = iLocal_56;
				iLocal_55 = 0;
				iLocal_56 = 7;
			}
		}
	}
	else if (iLocal_56 == 8)
	{
		if (iLocal_308 != 4)
		{
			if (__LIB_0__::func_695(iLocal_304))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_304, false))
				{
					bLocal_69 = true;
				}
			}
		}
	}
}

void func_57()//Position - 0x2411
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_244, false))
	{
		if (__LIB_0__::func_75())
		{
			__LIB_17__::func_32("stop scripted conversation at CHECK_IF_MARY_ANN_IS_INJURED_KILLED_OR_SCARED 1");
			__LIB_0__::func_429();
		}
		__LIB_17__::func_32("Mary Ann killed");
		AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
		iLocal_58 = 0;
		iLocal_55 = 0;
		iLocal_56 = 10;
	}
	else
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_244, PLAYER::PLAYER_PED_ID(), true))
		{
			if (__LIB_0__::func_75())
			{
				__LIB_17__::func_32("stop scripted conversation at CHECK_IF_MARY_ANN_IS_INJURED_KILLED_OR_SCARED 2");
				__LIB_0__::func_429();
			}
			__LIB_17__::func_32("Mary Ann injured by player");
			AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
			iLocal_58 = 1;
			iLocal_55 = 0;
			iLocal_56 = 10;
		}
		if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iLocal_244, 0, 2))
		{
			if (__LIB_0__::func_75())
			{
				__LIB_17__::func_32("stop scripted conversation at CHECK_IF_MARY_ANN_IS_INJURED_KILLED_OR_SCARED 3");
				__LIB_0__::func_429();
			}
			__LIB_17__::func_32("Mary Ann injured by some form of weapon");
			AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
			iLocal_58 = 1;
			iLocal_55 = 0;
			iLocal_56 = 10;
		}
	}
	if (iLocal_258 == 1)
	{
		__LIB_17__::func_32("Mary Ann scared");
		if (__LIB_0__::func_121(iLocal_244))
		{
			TASK::CLEAR_PED_TASKS(iLocal_244);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
		iLocal_58 = 2;
		iLocal_55 = 0;
		iLocal_56 = 10;
	}
	else if (__LIB_0__::func_121(iLocal_244))
	{
		if ((__LIB_14__::func_858(iLocal_244, 1, 0, 0, 0) || __LIB_38__::func_619(iLocal_244, 1, 1116471296, 1126825984, 0, 0, 0, 0)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_244, true), 10f, false))
		{
			if (__LIB_0__::func_75())
			{
				__LIB_17__::func_32("Killing any convo before scared convo");
				__LIB_0__::func_429();
			}
			iLocal_258 = 1;
		}
	}
}

void func_69()//Position - 0x2AEF
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		__LIB_17__::func_32("Stopping scripted convo at script_passed");
		__LIB_0__::func_429();
	}
	if (iLocal_59 != 1)
	{
		__LIB_0__::func_630(763);
	}
	HUD::CLEAR_PRINTS();
	__LIB_0__::func_712(61, 0, 1);
	func_70(85, 1);
	func_457();
}

void func_70(int iParam0, bool bParam1)//Position - 0x2B2E
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_0__::func_775();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_112473[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_112473[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_112473[iVar0 /*10*/].f_6)
	{
		return;
	}
	__LIB_14__::func_873(iVar0, 0);
	MISC::SET_BIT(&Global_78567, 1);
	if (Global_112473[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		__LIB_0__::func_56(&(Global_112473[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			PLAYER::START_FIRING_AMNESTY(5000);
		}
	}
	__LIB_14__::func_857(iVar0, 1, 0, 0);
	__LIB_0__::func_46(0, 0);
	MemCopy(&sVar1, {__LIB_0__::func_330(iVar0)}, 4);
	__LIB_0__::func_44(&sVar1, __LIB_14__::func_792());
	func_97();
	if (BitTest(Global_113386.f_10016.f_25, 3))
	{
		__LIB_0__::func_18();
	}
	__LIB_14__::func_860();
	if (iParam0 == 210 || iParam0 == 211)
	{
		__LIB_0__::func_716(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		__LIB_0__::func_716(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		__LIB_0__::func_716(iParam0, 0, 0);
	}
	__LIB_0__::func_210();
}

void func_97()//Position - 0x3CBD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_97810[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = __LIB_0__::func_216(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				case 1:
					iVar2 = 158;
					break;
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (func_214(iVar1, 14, iVar2))
				{
					func_98(iVar1, 14, iVar2);
				}
				if (Global_113386.f_2363.f_539[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_113386.f_2363.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_98(int iParam0, int iParam1, int iParam2)//Position - 0x3D7E
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_214(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { __LIB_0__::func_459(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_98(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { __LIB_0__::func_466(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_98(iParam0, 14, uVar5[iVar3]))
			{
				iVar4 = 0;
			}
			iVar3++;
		}
		return iVar4;
	}
	else if (iParam1 == 14)
	{
		PED::CLEAR_PED_PROP(iParam0, Global_78130[1 /*14*/].f_12);
	}
	else
	{
		uVar6 = { __LIB_0__::func_459(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
		}
	}
	if (func_141(iParam0, iVar0, &iVar7, 0))
	{
		func_101(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_99(iParam0, iVar0, &iVar7))
	{
		func_101(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_99(int iParam0, int iParam1, int iParam2)//Position - 0x3F3A
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_214(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_101(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x4003
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
										func_101(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_101(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_107(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_141(iParam0, iVar10, &iVar4, 1))
							{
								func_101(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_101(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_101(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_101(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_101(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_101(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_101(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_101(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_101(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_101(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_141(iParam0, iVar10, &iVar4, 0))
		{
			func_101(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_99(iParam0, iVar10, &iVar4))
		{
			func_101(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_107(int iParam0, int iParam1, int iParam2)//Position - 0x5040
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
				if (func_214(iParam0, iParam1, iVar0))
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
				if (func_214(iParam0, iParam1, iVar1))
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

int func_141(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB719
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_214(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_214(int iParam0, int iParam1, int iParam2)//Position - 0x21FBC
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
				if (!func_214(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_214(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_214(iParam0, 14, iVar4))
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
			if (!func_214(iParam0, 14, uVar8[iVar7]))
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

void func_283()//Position - 0x29B86
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	if (__LIB_0__::func_121(iLocal_244))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_244, "rcmfanatic1", "jogging_on_spot", 3))
		{
			Var1 = { __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(iLocal_244, true)) };
			Var2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_244) };
			fVar3 = 0.25f;
			Var0 = { Var2 + Var1 - Var2 * Vector(fVar3, fVar3, fVar3) };
			ENTITY::SET_ENTITY_HEADING(iLocal_244, __LIB_6__::func_252(0f, 0f, 0f, Var0, 1));
		}
	}
}

void func_285()//Position - 0x29C65
{
	struct<20> Var0;
	Var0.f_4 = 1065353216;
	Var0.f_5 = 1065353216;
	Var0.f_9 = 1065353216;
	Var0.f_10 = 1065353216;
	Var0.f_14 = 1065353216;
	Var0.f_15 = 1065353216;
	Var0.f_17 = 1040187392;
	Var0.f_18 = 1040187392;
	Var0.f_19 = -1;
	if (iLocal_63 == 0)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_379);
			TASK::TASK_SCRIPTED_ANIMATION(0, &Local_314, &Var0, &Var0, 0.125f, 0.125f);
			TASK::TASK_SCRIPTED_ANIMATION(0, &Local_316, &Var0, &Var0, 0.125f, 0.125f);
			TASK::TASK_SCRIPTED_ANIMATION(0, &Local_318, &Var0, &Var0, 0.125f, 0.125f);
			TASK::TASK_SCRIPTED_ANIMATION(0, &Local_320, &Var0, &Var0, 0.125f, 0.125f);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_379);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_379);
			__LIB_17__::func_32("Starting out of breath anim loop");
			iLocal_63 = 1;
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_379);
		}
	}
	else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_304, true))
	{
		if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "rcmfanatic1out_of_breath", "p_zero_tired_enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "rcmfanatic1out_of_breath", "p_zero_tired_01", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "rcmfanatic1out_of_breath", "p_zero_tired_02", 3))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
}

void func_296()//Position - 0x2A417
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (__LIB_0__::func_692(Local_325[iVar0 /*12*/]) && PED::IS_PED_RAGDOLL(Local_325[iVar0 /*12*/]))
		{
			TASK::CLEAR_PED_TASKS(Local_325[iVar0 /*12*/]);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
			if (__LIB_0__::func_76(Local_325[iVar0 /*12*/], PLAYER::PLAYER_PED_ID(), 1) < __LIB_0__::func_76(Local_325[iVar0 /*12*/], iLocal_244, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
			}
			else
			{
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_244, -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_244, 0);
			}
			TASK::TASK_PAUSE(0, 3000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_325[iVar0 /*12*/].f_8, 0.7f, 20000, 1f, 1, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
			TASK::TASK_PERFORM_SEQUENCE(Local_325[iVar0 /*12*/], iLocal_77);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
		}
		if (__LIB_0__::func_121(Local_325[iVar0 /*12*/]))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_325[iVar0 /*12*/]))
			{
				TASK::CLEAR_PED_TASKS(Local_325[iVar0 /*12*/]);
				TASK::TASK_SMART_FLEE_PED(Local_325[iVar0 /*12*/], PLAYER::PLAYER_PED_ID(), 200f, -1, true, false);
				__LIB_0__::func_124(&(Local_325[iVar0 /*12*/]), 1, 0, 1);
			}
		}
		iVar0++;
	}
	if (iLocal_327 == 0)
	{
		if (iLocal_351 > 114)
		{
			if (__LIB_0__::func_692(Local_325[2 /*12*/]) && __LIB_0__::func_692(Local_325[3 /*12*/]))
			{
				iVar1 = 2;
				while (iVar1 <= 3)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_325[iVar1 /*12*/].f_5, 0.7f, 20000, 1f, 1, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_325[iVar1 /*12*/].f_8, 0.7f, 20000, 1f, 1, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
					TASK::TASK_PERFORM_SEQUENCE(Local_325[iVar1 /*12*/], iLocal_77);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
					iVar1++;
				}
				TASK::TASK_LOOK_AT_ENTITY(Local_325[2 /*12*/], Local_325[3 /*12*/], -1, 0, 2);
				TASK::TASK_LOOK_AT_ENTITY(Local_325[3 /*12*/], Local_325[2 /*12*/], -1, 0, 2);
			}
			if (__LIB_0__::func_692(iLocal_344))
			{
				TASK::CLEAR_PED_TASKS(iLocal_344);
			}
			iLocal_327 = 1;
		}
	}
	else
	{
		iVar2 = 2;
		while (iVar2 <= 3)
		{
			if (__LIB_0__::func_692(Local_325[iVar2 /*12*/]) && PED::IS_PED_RAGDOLL(Local_325[iVar2 /*12*/]))
			{
				TASK::CLEAR_PED_TASKS(Local_325[iVar2 /*12*/]);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				if (__LIB_0__::func_76(Local_325[iVar2 /*12*/], PLAYER::PLAYER_PED_ID(), 1) < __LIB_0__::func_76(Local_325[iVar2 /*12*/], iLocal_244, 1))
				{
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				}
				else
				{
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_244, -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_244, 0);
				}
				TASK::TASK_PAUSE(0, 3000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_325[iVar2 /*12*/].f_8, 0.7f, 20000, 1f, 1, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				TASK::TASK_PERFORM_SEQUENCE(Local_325[iVar2 /*12*/], iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
			}
			if (__LIB_0__::func_121(Local_325[iVar2 /*12*/]))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_325[iVar2 /*12*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_325[iVar2 /*12*/]);
					TASK::TASK_SMART_FLEE_PED(Local_325[iVar2 /*12*/], PLAYER::PLAYER_PED_ID(), 200f, -1, true, false);
					__LIB_0__::func_124(&(Local_325[iVar2 /*12*/]), 1, 0, 1);
				}
			}
			iVar2++;
		}
	}
}

var func_298()//Position - 0x2A789
{
	var uVar0;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_348, func_299(), &uVar0);
	return uVar0;
}

Vector3 func_299()//Position - 0x2A7A1
{
	struct<3> Var0;
	func_300();
	if (iLocal_352 < (iLocal_350 - 1))
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_348, iLocal_352 + 1, &Var0);
	}
	else
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_348, (iLocal_350 - 1), &Var0);
	}
	return Var0;
}

void func_300()//Position - 0x2A7DD
{
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_348))
	{
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_348, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iLocal_351);
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_348, ENTITY::GET_ENTITY_COORDS(iLocal_244, true), &iLocal_352);
		if (iLocal_364 < iLocal_362)
		{
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_348, iLocal_351, &Local_353);
		}
	}
}

void func_302()//Position - 0x2A83E
{
	iLocal_312 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
	CAM::SET_CAM_PARAMS(iLocal_312, -2006.404f, -505.1258f, 12.1679f, -8.411f, 0f, -152.3152f, 50f, 0, 1, 1, 2);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	CAM::SET_CAM_ACTIVE(iLocal_312, true);
}

void func_303(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x2A890
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
					if (func_214(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_101(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_214(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_101(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_214(PLAYER::PLAYER_PED_ID(), 8, 1) || func_214(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_101(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_214(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_101(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			iLocal_37 = 0;
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_37 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__::func_84(500, 0);
		}
	}
}

void func_317()//Position - 0x2B4B3
{
	switch (iLocal_55)
	{
		case 0:
			__LIB_17__::func_32("SETUP PLAYER IN VEHICLE STATE");
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(false);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_357))
			{
				HUD::SET_BLIP_ALPHA(iLocal_357, 0);
			}
			HUD::CLEAR_PRINTS();
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_244))
			{
				TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_244, true, false);
			}
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_244, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 3f, -1, 3f, true);
			iLocal_370 = MISC::GET_GAME_TIMER();
			if (__LIB_0__::func_75())
			{
				__LIB_17__::func_32("stop scripted conversation at STAGE_PLAYER_IN_VEHICLE");
				__LIB_0__::func_429();
			}
			iLocal_257 = 1;
			__LIB_17__::func_32("STARTING PLAYER IN VEHICLE LOOP");
			iLocal_55 = 1;
			break;
		case 1:
			if (iLocal_257)
			{
				if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_244) < 4f)
				{
					TASK::CLEAR_PED_TASKS(iLocal_244);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_244, PLAYER::PLAYER_PED_ID(), -1);
					iLocal_257 = 0;
				}
			}
			else if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_244) > 5f)
			{
				TASK::CLEAR_PED_TASKS(iLocal_244);
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_244, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 3f, -1, 3f, true);
				iLocal_257 = 1;
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_370) > 4000)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
				iLocal_58 = 3;
				iLocal_55 = 0;
				iLocal_56 = 10;
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				HUD::CLEAR_PRINTS();
				if (!MISC::IS_STRING_NULL(sLocal_348))
				{
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_348))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_299(), 3f, 20000, 0.25f, 0, 40000f);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_348, func_298(), 1040, -1);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_PLAY_ANIM(0, "move_f@runner", "idle", 4f, -4f, -1, 1, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_244, iLocal_77);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
					}
				}
				iLocal_55 = 1;
				iLocal_56 = iLocal_57;
				if (HUD::DOES_BLIP_EXIST(iLocal_357))
				{
					HUD::SET_BLIP_ALPHA(iLocal_357, 255);
				}
				AUDIO::RESTART_SCRIPTED_CONVERSATION();
			}
			break;
	}
}

void func_318()//Position - 0x2B681
{
	switch (iLocal_55)
	{
		case 0:
			if (!HUD::DOES_BLIP_EXIST(iLocal_245))
			{
				iLocal_245 = __LIB_14__::func_661(iLocal_244, 1, 1, 5);
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_245, true);
			}
			iLocal_55 = 1;
			break;
		case 1:
			func_319();
			func_296();
			break;
	}
}

void func_319()//Position - 0x2B6CD
{
	if (!__LIB_0__::func_695(iLocal_304))
	{
		STREAMING::REQUEST_MODEL(iLocal_307);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_307))
		{
			iLocal_304 = VEHICLE::CREATE_VEHICLE(iLocal_307, Local_305, fLocal_306, true, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_307);
		}
	}
}

void func_321()//Position - 0x2B75F
{
	var uVar0;
	switch (iLocal_55)
	{
		case 0:
			__LIB_17__::func_32("SETUP SPRINT_TO_FINISH");
			if (!HUD::DOES_BLIP_EXIST(iLocal_245))
			{
				iLocal_245 = __LIB_14__::func_661(iLocal_244, 1, 1, 5);
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_245, true);
			}
			iLocal_347 = 0;
			iLocal_55 = 1;
			__LIB_17__::func_32("GOING INTO SPRINT_TO_FINISH MAIN LOOP");
			break;
		case 1:
			PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
			if (Local_292.f_2 == 0 && iLocal_352 < 105)
			{
				if (func_334() && __LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_244) < 25f)
				{
					if (__LIB_2__::func_859(&uLocal_78, "FAN1AU", Local_292.f_0, 7, 0, 0, 0))
					{
						Local_292.f_2 = 1;
						TASK::TASK_PLAY_ANIM(iLocal_244, "rcmfanatic1yell", "yell_c", 8f, -8f, -1, 48, 0f, false, false, false);
					}
				}
			}
			if (__LIB_15__::func_963(Local_292.f_0))
			{
				if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_244) > 30f)
				{
					__LIB_0__::func_325();
				}
			}
			func_330();
			func_319();
			func_328();
			func_324();
			func_296();
			if ((iLocal_265 < 3 && iLocal_352 < 117) && iLocal_351 < 117)
			{
				if (!__LIB_0__::func_75())
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_368) > 3000)
					{
						if (func_322("FAN1_FAST", sLocal_266[iLocal_265], 0, &uVar0))
						{
							iLocal_265++;
						}
					}
				}
				else
				{
					iLocal_368 = MISC::GET_GAME_TIMER();
				}
			}
			break;
	}
}

int func_322(char* sParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x2B8BD
{
	if (iLocal_243 == 0 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (bParam2)
		{
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				*uParam3 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
				__LIB_17__::func_32("Stopping scripted convo at can Mary Ann say single line");
				__LIB_0__::func_429();
				HUD::CLEAR_PRINTS();
			}
			if (__LIB_14__::func_535(&uLocal_78, "FAN1AU", sParam0, sParam1, 7, 0, 0))
			{
				return 1;
			}
		}
		else if (!__LIB_0__::func_75())
		{
			if (__LIB_14__::func_535(&uLocal_78, "FAN1AU", sParam0, sParam1, 7, 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_324()//Position - 0x2B988
{
	switch (iLocal_378)
	{
		case 0:
			if (func_327())
			{
				__LIB_17__::func_32("CPR scene resources loaded - progressing");
				func_326(1);
				iLocal_378 = 1;
			}
			break;
		case 1:
			if (iLocal_364 >= 7)
			{
				if (__LIB_0__::func_695(iLocal_332))
				{
					if (__LIB_0__::func_692(iLocal_328) && __LIB_0__::func_692(iLocal_329))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iLocal_332, "Fanatic1Quad", 16, 14, 0, -1, -1f, false, 2f);
						TASK::TASK_LEAVE_VEHICLE(0, iLocal_332, 0);
						TASK::TASK_LOOK_AT_ENTITY(0, iLocal_329, -1, 0, 2);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_329, true), 1.8f, 20000, 40000f, 0.5f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_328, iLocal_77);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_332, 5f);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_332);
						iLocal_378 = 2;
					}
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_692(iLocal_328) && __LIB_0__::func_692(iLocal_329))
			{
				if (PED::IS_PED_RAGDOLL(iLocal_329))
				{
					iLocal_378 = 6;
				}
				if (__LIB_0__::func_76(iLocal_329, iLocal_328, 1) < 2f)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_328, true);
					iLocal_336 = PED::CREATE_SYNCHRONIZED_SCENE(Local_334, Local_335, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_328, iLocal_336, "mini@cpr@char_a@cpr_def", "cpr_intro", 4f, -8f, 1, 0, 4f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_329, iLocal_336, "mini@cpr@char_b@cpr_def", "cpr_intro", 8f, -8f, 4, 0, 1000f, 0);
					iLocal_378 = 3;
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_692(iLocal_328) && __LIB_0__::func_692(iLocal_329))
			{
				if (PED::IS_PED_RAGDOLL(iLocal_328) || PED::IS_PED_RAGDOLL(iLocal_329))
				{
					iLocal_378 = 6;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_336) > 0.99f)
				{
					iLocal_336 = PED::CREATE_SYNCHRONIZED_SCENE(Local_334, Local_335, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_328, iLocal_336, "mini@cpr@char_a@cpr_str", "cpr_pumpchest", 8f, -8f, 1, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_329, iLocal_336, "mini@cpr@char_b@cpr_str", "cpr_pumpchest", 8f, -8f, 4, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_336, true);
					iLocal_378 = 4;
				}
				if (func_325())
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_336) > 0.23f)
					{
						iLocal_378 = 5;
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 80f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_328, iLocal_77);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
						if (__LIB_0__::func_692(iLocal_330))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
							TASK::TASK_PAUSE(0, 200);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 80f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_330, iLocal_77);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
						}
						if (__LIB_0__::func_692(iLocal_331))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
							TASK::TASK_PAUSE(0, 500);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 80f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_331, iLocal_77);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
						}
						iLocal_378 = 8;
					}
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_692(iLocal_328) && __LIB_0__::func_692(iLocal_329))
			{
				if (PED::IS_PED_RAGDOLL(iLocal_328) || PED::IS_PED_RAGDOLL(iLocal_329))
				{
					iLocal_378 = 6;
				}
				else if (func_325())
				{
					iLocal_378 = 5;
				}
			}
			break;
		case 5:
			if (__LIB_0__::func_692(iLocal_328) && !PED::IS_PED_FLEEING(iLocal_328))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "KNEEL_EXIT", 4f, -8f, -1, 8192, 0f, false, false, false);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 80f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_328, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
			}
			if (__LIB_0__::func_692(iLocal_330) && !PED::IS_PED_FLEEING(iLocal_330))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_PAUSE(0, 200);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 80f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_330, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
			}
			if (__LIB_0__::func_692(iLocal_331) && !PED::IS_PED_FLEEING(iLocal_331))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_PAUSE(0, 500);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 80f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_331, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
			}
			if (__LIB_0__::func_692(iLocal_329))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_329, 0, 0);
			}
			iLocal_378 = 8;
			break;
		case 6:
			if (__LIB_0__::func_692(iLocal_328))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_328, false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				if (!PED::IS_PED_RAGDOLL(iLocal_328))
				{
					TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "KNEEL_EXIT", 4f, -8f, -1, 8192, 0f, false, false, false);
				}
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_329, -1, 0, 2);
				if (__LIB_0__::func_76(iLocal_328, iLocal_329, 1) > 2f)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_329, true), 1f, 20000, 1.5f, 0, 40000f);
				}
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_329, 0);
				TASK::TASK_USE_MOBILE_PHONE_TIMED(0, 10000);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_328, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
			}
			if (__LIB_0__::func_692(iLocal_330))
			{
				TASK::STOP_ANIM_PLAYBACK(iLocal_330, 0, false);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_330, iLocal_329, 2000, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_330, iLocal_329, 0);
				__LIB_0__::func_124(&iLocal_330, 1, 0, 1);
			}
			if (__LIB_0__::func_692(iLocal_331))
			{
				TASK::STOP_ANIM_PLAYBACK(iLocal_331, 0, false);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_331, iLocal_329, 2000, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_331, iLocal_329, 0);
				__LIB_0__::func_124(&iLocal_331, 1, 0, 1);
			}
			if (__LIB_0__::func_692(iLocal_329))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_329, 0, 0);
			}
			iLocal_378 = 7;
			break;
		case 7:
			if (__LIB_0__::func_692(iLocal_328))
			{
				if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_328, joaat("SCRIPT_TASK_DUCK")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_328, joaat("SCRIPT_TASK_DUCK")) != 0) && PED::IS_PED_RAGDOLL(iLocal_328))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_329, -1, 0, 2);
					if (__LIB_0__::func_76(iLocal_328, iLocal_329, 1) > 2f)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_329, true), 1f, 20000, 1.5f, 0, 40000f);
					}
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_329, 0);
					TASK::TASK_USE_MOBILE_PHONE_TIMED(0, 10000);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_328, iLocal_77);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				}
			}
			if (func_325())
			{
				if (__LIB_0__::func_692(iLocal_328) && !PED::IS_PED_FLEEING(iLocal_328))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_328, PLAYER::PLAYER_PED_ID(), 80f, -1, false, false);
				}
				if (__LIB_0__::func_692(iLocal_330) && !PED::IS_PED_FLEEING(iLocal_330))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_330, PLAYER::PLAYER_PED_ID(), 80f, -1, false, false);
				}
				if (__LIB_0__::func_692(iLocal_331) && !PED::IS_PED_FLEEING(iLocal_331))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_331, PLAYER::PLAYER_PED_ID(), 80f, -1, false, false);
				}
				iLocal_378 = 8;
			}
			break;
		case 8:
			break;
	}
	if (__LIB_0__::func_692(iLocal_330) && !PED::IS_PED_FLEEING(iLocal_330))
	{
		if (PED::IS_PED_RAGDOLL(iLocal_330))
		{
			TASK::CLEAR_PED_TASKS(iLocal_330);
			__LIB_0__::func_124(&iLocal_330, 1, 0, 1);
		}
	}
	if (__LIB_0__::func_692(iLocal_331) && !PED::IS_PED_FLEEING(iLocal_331))
	{
		if (PED::IS_PED_RAGDOLL(iLocal_331))
		{
			TASK::CLEAR_PED_TASKS(iLocal_331);
			__LIB_0__::func_124(&iLocal_331, 1, 0, 1);
		}
	}
	if (__LIB_0__::func_692(iLocal_329))
	{
		EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(84 /*EVENT_SHOCKING_DEAD_BODY*/, iLocal_329, 1f);
	}
}

int func_325()//Position - 0x2C126
{
	if (((__LIB_38__::func_619(iLocal_328, 1, 1116471296, 1126825984, 0, 0, 0, 0) || __LIB_38__::func_619(iLocal_329, 1, 1116471296, 1126825984, 0, 0, 0, 0)) || __LIB_38__::func_619(iLocal_330, 1, 1116471296, 1126825984, 0, 0, 0, 0)) || __LIB_38__::func_619(iLocal_331, 1, 1116471296, 1126825984, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_326(bool bParam0)//Position - 0x2C1A0
{
	if (!__LIB_0__::func_695(iLocal_332))
	{
		PATHFIND::SET_PED_PATHS_IN_AREA(-1875.16f, -630.82f, 10f, -1867.9f, -625.78f, 10.25f, false, 0);
		PATHFIND::DISABLE_NAVMESH_IN_AREA(-1875.16f, -630.82f, 10f, -1867.9f, -625.78f, 10.25f, true);
		if (iLocal_338 > -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_338);
			iLocal_338 = -1;
		}
		iLocal_338 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1870.54f, -628.1f, 10.09f, 4f, 4f, 4f, 0f, false, 7);
		if (iLocal_338 == -1)
		{
		}
		iLocal_329 = PED::CREATE_PED(4, joaat("A_M_M_Beach_01"), -1870.54f, -628.1f, 10.09f, 80f, true, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_329, true, 1);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_329);
		PED::SET_PED_MONEY(iLocal_329, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_329, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_329, false);
		Local_334 = { ENTITY::GET_ENTITY_COORDS(iLocal_329, true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_329, true), &(Local_334.f_2), false, false);
		Local_335 = { ENTITY::GET_ENTITY_ROTATION(iLocal_329, 2) };
		iLocal_337 = PED::CREATE_SYNCHRONIZED_SCENE(Local_334, Local_335, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_329, iLocal_337, "mini@cpr@char_b@cpr_def", "cpr_intro", 8f, -8f, 0, 16, 1000f, 0);
		PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_337, 0f);
		iLocal_330 = PED::CREATE_PED(5, joaat("A_F_Y_Beach_01"), -1869.76f, -627.7f, 10.1f, 0f, true, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_330, 17, true);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_329, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_a", 4f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_C", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_b", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_b", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::SET_SEQUENCE_TO_REPEAT(iLocal_77, true);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_330, iLocal_77);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
		iLocal_331 = PED::CREATE_PED(5, joaat("A_F_Y_Beach_01"), -1873.61f, -628.88f, 11.16f, 0f, true, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_331, 17, true);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_329, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 4f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_b", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_a", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_a", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_b", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::SET_SEQUENCE_TO_REPEAT(iLocal_77, true);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_331, iLocal_77);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
		if (bParam0)
		{
			iLocal_332 = VEHICLE::CREATE_VEHICLE(joaat("blazer2"), Local_333, 36.64f, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_332, 5f);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_332, true, 1);
			iLocal_328 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_332, 20, joaat("S_M_Y_BayWatch_01"), -1, true, true);
			iLocal_378 = 1;
		}
		else
		{
			iLocal_332 = VEHICLE::CREATE_VEHICLE(joaat("blazer2"), -1871.55f, -640.01f, 10.65f, 297.76f, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_332, 5f);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_332, true, 1);
			iLocal_328 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_332, 4, joaat("S_M_Y_BayWatch_01"), -1, true, true);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
			TASK::TASK_LOOK_AT_ENTITY(0, iLocal_329, -1, 0, 2);
			TASK::TASK_LEAVE_VEHICLE(0, iLocal_332, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_329, true), 1.8f, 20000, 0.25f, 0, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_328, iLocal_77);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
			iLocal_378 = 2;
		}
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_328, 17, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_328, true, 1);
		PED::SET_PED_KEEP_TASK(iLocal_329, true);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blazer2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_Y_Beach_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_BayWatch_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Beach_01"));
}

int func_327()//Position - 0x2C6DB
{
	STREAMING::REQUEST_ANIM_DICT("mini@cpr@char_a@cpr_def");
	STREAMING::REQUEST_ANIM_DICT("mini@cpr@char_b@cpr_def");
	STREAMING::REQUEST_ANIM_DICT("mini@cpr@char_a@cpr_str");
	STREAMING::REQUEST_ANIM_DICT("mini@cpr@char_b@cpr_str");
	STREAMING::REQUEST_ANIM_DICT("rcmfanatic1");
	TASK::REQUEST_WAYPOINT_RECORDING("Fanatic1Quad");
	STREAMING::REQUEST_MODEL(joaat("blazer2"));
	STREAMING::REQUEST_MODEL(joaat("A_F_Y_Beach_01"));
	STREAMING::REQUEST_MODEL(joaat("S_M_Y_BayWatch_01"));
	STREAMING::REQUEST_MODEL(joaat("A_M_M_Beach_01"));
	if (((((((((STREAMING::HAS_ANIM_DICT_LOADED("mini@cpr@char_a@cpr_def") && STREAMING::HAS_ANIM_DICT_LOADED("mini@cpr@char_b@cpr_def")) && STREAMING::HAS_ANIM_DICT_LOADED("mini@cpr@char_a@cpr_str")) && STREAMING::HAS_ANIM_DICT_LOADED("mini@cpr@char_b@cpr_str")) && STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fanatic1Quad")) && STREAMING::HAS_MODEL_LOADED(joaat("A_F_Y_Beach_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_BayWatch_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Beach_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("blazer2")))
	{
		return 1;
	}
	return 0;
}

void func_328()//Position - 0x2C7C0
{
	if (__LIB_0__::func_692(iLocal_344))
	{
		switch (iLocal_347)
		{
			case 0:
				if (func_329())
				{
					if (!__LIB_0__::func_121(iLocal_344))
					{
						iLocal_344 = PED::CREATE_PED(26, joaat("A_C_Rottweiler"), Local_345, fLocal_346, true, true);
						PED::SET_PED_CAN_RAGDOLL(iLocal_344, true);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_Rottweiler"));
					__LIB_17__::func_32("Loaded and created dog - progressing");
					iLocal_347 = 1;
				}
				break;
			case 1:
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (iLocal_351 == 109)
					{
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_344, PLAYER::PLAYER_PED_ID(), -2f, 2f, 0f, 2.5f, -1, 0.2f, true);
						iLocal_347 = 2;
					}
				}
				break;
			}
	}
}

int func_329()//Position - 0x2C86A
{
	STREAMING::REQUEST_MODEL(joaat("A_C_Rottweiler"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("A_C_Rottweiler")))
	{
		return 1;
	}
	return 0;
}

void func_330()//Position - 0x2C88C
{
	if (!__LIB_0__::func_121(Local_325[0 /*12*/]))
	{
		STREAMING::REQUEST_MODEL(iLocal_326);
		STREAMING::REQUEST_MODEL(joaat("A_M_Y_Beach_01"));
		STREAMING::REQUEST_MODEL(joaat("A_F_Y_Beach_01"));
		if ((STREAMING::HAS_MODEL_LOADED(iLocal_326) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_Beach_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("A_F_Y_Beach_01")))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_325[0 /*12*/]))
			{
				Local_325[0 /*12*/].f_2 = { -1951.48f, -556.16f, 11.71f };
				Local_325[0 /*12*/].f_11 = -121.42f;
				Local_325[0 /*12*/].f_5 = { -1910.1f, -591.56f, 10.67f };
				Local_325[0 /*12*/].f_8 = { -1843.73f, -649.16f, 9.53f };
				Local_325[0 /*12*/].f_1 = iLocal_326;
				Local_325[0 /*12*/] = PED::CREATE_PED(5, Local_325[0 /*12*/].f_1, Local_325[0 /*12*/].f_2, Local_325[0 /*12*/].f_11, true, true);
				PED::SET_PED_COMBAT_MOVEMENT(Local_325[0 /*12*/], 3);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_325[0 /*12*/], 17, true);
				func_331(Local_325[0 /*12*/]);
				if (__LIB_0__::func_692(Local_325[0 /*12*/]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_325[0 /*12*/].f_5, 2f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_325[0 /*12*/].f_8, 2f, 20000, 0.25f, 0, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
					TASK::TASK_PERFORM_SEQUENCE(Local_325[0 /*12*/], iLocal_77);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_325[1 /*12*/]))
			{
				Local_325[1 /*12*/].f_2 = { -1953.85f, -555.66f, 11f };
				Local_325[1 /*12*/].f_11 = -121.42f;
				Local_325[1 /*12*/].f_5 = { -1911.54f, -591.7f, 10.61f };
				Local_325[1 /*12*/].f_8 = { -1839.87f, -651.49f, 9.53f };
				Local_325[1 /*12*/].f_1 = iLocal_326;
				Local_325[1 /*12*/] = PED::CREATE_PED(5, Local_325[1 /*12*/].f_1, Local_325[1 /*12*/].f_2, Local_325[1 /*12*/].f_11, true, true);
				PED::SET_PED_COMBAT_MOVEMENT(Local_325[1 /*12*/], 3);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_325[1 /*12*/], 17, true);
				if (__LIB_0__::func_692(Local_325[1 /*12*/]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_325[1 /*12*/].f_5, 2.05f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_325[1 /*12*/].f_8, 2.05f, 20000, 0.25f, 0, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
					TASK::TASK_PERFORM_SEQUENCE(Local_325[1 /*12*/], iLocal_77);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_325[2 /*12*/]))
			{
				Local_325[2 /*12*/].f_2 = { -1999.4f, -508.02f, 11f };
				Local_325[2 /*12*/].f_11 = 167.3f;
				Local_325[2 /*12*/].f_5 = { -1997.21f, -517.17f, 10.73f };
				Local_325[2 /*12*/].f_8 = { -1961.31f, -547.96f, 10.7f };
				Local_325[2 /*12*/].f_1 = joaat("A_F_Y_Beach_01");
				Local_325[2 /*12*/] = PED::CREATE_PED(5, Local_325[2 /*12*/].f_1, Local_325[2 /*12*/].f_2, Local_325[2 /*12*/].f_11, true, true);
				PED::SET_PED_COMBAT_MOVEMENT(Local_325[2 /*12*/], 3);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_325[2 /*12*/], 17, true);
				func_331(Local_325[2 /*12*/]);
			}
			else if (__LIB_0__::func_692(Local_325[2 /*12*/]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_325[2 /*12*/]);
				ENTITY::SET_ENTITY_COORDS(Local_325[2 /*12*/], Local_325[2 /*12*/].f_2, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_325[2 /*12*/], Local_325[2 /*12*/].f_11);
				func_331(Local_325[2 /*12*/]);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_325[3 /*12*/]))
			{
				Local_325[3 /*12*/].f_2 = { -2000.19f, -507.37f, 11f };
				Local_325[3 /*12*/].f_11 = 83.65f;
				Local_325[3 /*12*/].f_5 = { -1998.27f, -517.46f, 10.67f };
				Local_325[3 /*12*/].f_8 = { -1962.75f, -549.56f, 10.62f };
				Local_325[3 /*12*/].f_1 = joaat("A_M_Y_Beach_01");
				Local_325[3 /*12*/] = PED::CREATE_PED(4, Local_325[3 /*12*/].f_1, Local_325[3 /*12*/].f_2, Local_325[3 /*12*/].f_11, true, true);
				PED::SET_PED_COMBAT_MOVEMENT(Local_325[3 /*12*/], 3);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_325[3 /*12*/], 17, true);
				func_331(Local_325[3 /*12*/]);
			}
			else if (__LIB_0__::func_692(Local_325[3 /*12*/]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_325[3 /*12*/]);
				ENTITY::SET_ENTITY_COORDS(Local_325[3 /*12*/], Local_325[3 /*12*/].f_2, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_325[3 /*12*/], Local_325[3 /*12*/].f_11);
				func_331(Local_325[3 /*12*/]);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_Y_Beach_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_Beach_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_326);
		}
	}
}

void func_331(int iParam0)//Position - 0x2CD4E
{
	struct<3> Var0;
	float fVar1;
	if (__LIB_0__::func_692(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, false, false);
		ENTITY::SET_ENTITY_COORDS(iParam0, Var0.f_0, Var0.f_1, fVar1, true, false, false, true);
	}
}

int func_334()//Position - 0x2CDCD
{
	if ((iLocal_243 == 0 && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !__LIB_0__::func_75())
	{
		return 1;
	}
	return 0;
}

void func_335()//Position - 0x2CDF9
{
	switch (iLocal_55)
	{
		case 0:
			__LIB_17__::func_32("STEPS DOWN SETUP");
			if (!HUD::DOES_BLIP_EXIST(iLocal_245))
			{
				iLocal_245 = __LIB_14__::func_661(iLocal_244, 1, 1, 5);
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_245, true);
			}
			PED::SET_PED_NON_CREATION_AREA(-1865.76f, -617.48f, 10.58f, -1820.57f, -552.41f, 17.4f);
			PATHFIND::SET_PED_PATHS_IN_AREA(-1865.76f, -617.48f, 10.58f, -1820.57f, -552.41f, 17.4f, false, 0);
			if (__LIB_0__::func_692(Local_322.f_0))
			{
				TASK::CLEAR_PED_TASKS(Local_322.f_0);
				__LIB_0__::func_124(&Local_322, 1, 0, 1);
			}
			if (__LIB_0__::func_695(Local_322.f_2))
			{
				__LIB_0__::func_106(&(Local_322.f_2));
			}
			__LIB_17__::func_32("GOING INTO STEPS_DOWN MAIN LOOP");
			iLocal_55 = 1;
			break;
		case 1:
			func_324();
			func_338();
			PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
			if (iLocal_66 == 0)
			{
				func_337();
			}
			if (func_336(Local_355))
			{
				fLocal_251 = 1.15f;
				iLocal_55 = 0;
				iLocal_56 = 5;
			}
			break;
	}
}

int func_336(struct<3> Param0)//Position - 0x2CEF8
{
	if (ENTITY::IS_ENTITY_AT_COORD(iLocal_244, Param0, 3f, 3f, 2f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_337()//Position - 0x2CF19
{
	if (iLocal_66 == 0)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1827.5304f, -538.1213f, 21.83124f, -1805.926f, -555.6239f, 31.773228f, 2f, false, true, 0))
		{
			if (iLocal_243 == 0)
			{
				if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					__LIB_17__::func_32("Stopping scripted convo at check if player jumps off cliff");
					__LIB_0__::func_325();
					HUD::CLEAR_PRINTS();
				}
				if (__LIB_2__::func_859(&uLocal_78, "FAN1AU", "FAN1_5", 7, 0, 0, 0))
				{
					iLocal_59 = 1;
					iLocal_66 = 1;
				}
			}
			Global_113386.f_18574.f_386 = 1;
		}
	}
}

void func_338()//Position - 0x2CF97
{
	if ((MISC::GET_GAME_TIMER() - iLocal_281) > 10000)
	{
		switch (iLocal_280)
		{
			case 0:
				func_340();
				break;
			case 1:
				func_339();
				break;
			case 2:
				func_340();
				break;
			case 3:
				func_339();
				break;
			case 4:
				func_340();
				break;
			case 5:
				func_339();
				break;
			case 6:
				func_340();
				break;
			case 7:
				func_339();
				break;
			case 8:
				func_340();
				break;
			case 9:
				func_339();
				break;
			default:
				break;
			}
	}
}

void func_339()//Position - 0x2D03A
{
	if ((!__LIB_0__::func_75() && iLocal_243 == 0) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (__LIB_2__::func_859(&uLocal_78, "FAN1AU", "FAN1_ONELIN", 7, 0, 0, 0))
		{
			iLocal_280++;
			iLocal_281 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_340()//Position - 0x2D081
{
	if (iLocal_349 == 2)
	{
		if ((!__LIB_0__::func_75() && iLocal_243 == 0) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (__LIB_2__::func_859(&uLocal_78, "FAN1AU", "FAN1_TAUNT", 7, 0, 0, 0))
			{
				iLocal_280++;
				iLocal_281 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_342()//Position - 0x2D107
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	switch (iLocal_55)
	{
		case 0:
			__LIB_17__::func_32("SETUP ROAD_RUNNING_SECTION");
			if (!HUD::DOES_BLIP_EXIST(iLocal_245))
			{
				iLocal_245 = __LIB_14__::func_661(iLocal_244, 1, 1, 5);
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_245, true);
			}
			if (bLocal_65 == 1)
			{
				func_4(0);
			}
			iLocal_66 = 0;
			iLocal_283 = MISC::GET_GAME_TIMER();
			if (__LIB_0__::func_75())
			{
				__LIB_17__::func_32("stop scripted conversation at ROAD_RUNNING_SECTION");
				__LIB_0__::func_325();
			}
			if (__LIB_0__::func_695(Local_324.f_2) && __LIB_0__::func_692(Local_324.f_0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_324.f_2, -1934.15f, -438.19f, 19.6f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_324.f_2, 237.78f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_324.f_2, 5f);
				TASK::TASK_VEHICLE_MISSION_COORS_TARGET(Local_324.f_0, Local_324.f_2, Local_324.f_8, 4, Local_324.f_12, 786599, 3f, 3f, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_324.f_0, true, 1);
			}
			__LIB_17__::func_32("GOING INTO ROAD_RUNNING_SECTION LOOP");
			iLocal_323 = 1;
			iLocal_55 = 1;
			break;
		case 1:
			PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
			if (func_334())
			{
				if (Local_286.f_2 == 0)
				{
					if (__LIB_0__::func_121(iLocal_244))
					{
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_348, ENTITY::GET_ENTITY_COORDS(iLocal_244, true), &iVar0);
					}
					if (iVar0 <= 52)
					{
						if ((Local_298.f_2 == 0 && Local_295.f_2 == 0) && iLocal_349 == 2)
						{
							__LIB_2__::func_859(&uLocal_78, "FAN1AU", Local_286.f_0, 7, 0, 0, 0);
						}
						else
						{
							__LIB_14__::func_782(&uLocal_78, "FAN1AU", Local_286.f_0, "FAN1_RD1_3", 7, 0, 0);
						}
						Local_286.f_2 = 1;
					}
				}
			}
			if (iLocal_323 == 1)
			{
				if (iLocal_352 > 41)
				{
					iLocal_323 = 2;
				}
			}
			if (Local_286.f_2 == 1 && Local_289.f_2 == 1)
			{
				if (__LIB_0__::func_121(iLocal_244))
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_244, 0f, 6f, 0f) };
					iVar2 = VEHICLE::GET_CLOSEST_VEHICLE(Var1, 8f, 0, 2);
					if (iVar2 != 0)
					{
						if ((iLocal_243 == 0 && iLocal_283 > 2000) && iLocal_282 < 5)
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_2__::func_859(&uLocal_78, "FAN1AU", "FAN1_RD3", 7, 0, 0, 0))
								{
									iLocal_282++;
									iLocal_283 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					else
					{
						iVar2 = VEHICLE::GET_CLOSEST_VEHICLE(Var1, 8f, 0, 4);
						if (iVar2 != 0)
						{
							if ((iLocal_243 == 0 && iLocal_283 > 2000) && iLocal_282 < 5)
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_2__::func_859(&uLocal_78, "FAN1AU", "FAN1_RD3", 7, 0, 0, 0))
									{
										iLocal_282++;
										iLocal_283 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
				func_338();
			}
			func_337();
			func_343();
			if (iLocal_352 > 61)
			{
				iLocal_55 = 0;
				iLocal_56 = 4;
			}
			break;
	}
}

void func_343()//Position - 0x2D3A9
{
	if ((__LIB_0__::func_692(Local_322.f_1) && __LIB_0__::func_695(Local_322.f_2)) && __LIB_0__::func_692(Local_322.f_0))
	{
		switch (iLocal_323)
		{
			case 0:
				if (func_346())
				{
					__LIB_17__::func_32("Driveby scene resources loaded - progressing");
					iLocal_323 = 1;
				}
				break;
			case 1:
				break;
			case 2:
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_PAUSE(0, 1500);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_322.f_2, Local_322.f_8, Local_322.f_12, 0, Local_322.f_4, 16, 10f, 10f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				TASK::TASK_PERFORM_SEQUENCE(Local_322.f_0, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				iLocal_71 = 0;
				iLocal_323 = 3;
				break;
			case 3:
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_322.f_2, true), ENTITY::GET_ENTITY_COORDS(iLocal_244, true), true) <= 45f)
				{
					if (__LIB_0__::func_75())
					{
						__LIB_0__::func_638();
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_322.f_2, true), ENTITY::GET_ENTITY_COORDS(iLocal_244, true), true) <= 20f)
					{
						if (iLocal_71 == 0)
						{
							VEHICLE::START_VEHICLE_HORN(Local_322.f_2, 4500, 0, false);
							if (__LIB_0__::func_692(iLocal_244))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_244, Local_322.f_2, 3000, 1072, 2);
							}
							iLocal_71 = 1;
						}
						if (iLocal_243 == 0)
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (__LIB_2__::func_859(&uLocal_78, "FAN1AU", Local_289.f_0, 9, 0, 0, 0))
								{
									Local_289.f_2 = 1;
									__LIB_17__::func_32("Doing Mary Ann's anim...");
									TASK::TASK_PLAY_ANIM(iLocal_244, "rcmfanatic1yell", "yell_d", 8f, -8f, -1, 48, 0f, false, false, false);
									iLocal_323 = 4;
									iLocal_243 = 0;
									if (iLocal_246 == 1)
									{
										iLocal_246 = 2;
									}
								}
							}
						}
						else if (__LIB_2__::func_859(&uLocal_78, "FAN1AU", Local_289.f_0, 9, 1, 0, 0))
						{
							Local_289.f_2 = 1;
							__LIB_17__::func_32("Doing Mary Ann's anim...");
							TASK::TASK_PLAY_ANIM(iLocal_244, "rcmfanatic1yell", "yell_d", 8f, -8f, -1, 48, 0f, false, false, false);
							iLocal_323 = 4;
							iLocal_243 = 1;
							if (iLocal_246 == 1)
							{
								iLocal_246 = 2;
							}
						}
					}
				}
				break;
			case 4:
				TASK::CLEAR_PED_TASKS(Local_322.f_0);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_322.f_2, 6f, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				TASK::TASK_PERFORM_SEQUENCE(Local_322.f_0, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_DRIVE_BY(Local_322.f_1, iLocal_244, 0, 0f, 0f, 0f, 25f, 100, false, joaat("FIRING_PATTERN_FULL_AUTO"));
				iLocal_281 = (MISC::GET_GAME_TIMER() - 3000);
				iLocal_323 = 5;
				break;
			case 5:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_244, "rcmfanatic1yell", "yell_d", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_244, "rcmfanatic1yell", "yell_d") > 0.44f)
					{
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_244);
						iLocal_369 = MISC::GET_GAME_TIMER();
						iLocal_323 = 6;
						func_4(1);
					}
				}
				else
				{
					iLocal_369 = MISC::GET_GAME_TIMER();
					iLocal_323 = 6;
					func_4(1);
				}
				break;
			case 6:
				if ((MISC::GET_GAME_TIMER() - iLocal_369) > 3000)
				{
					if (__LIB_0__::func_692(Local_322.f_0))
					{
						if (__LIB_0__::func_695(Local_322.f_2))
						{
							TASK::CLEAR_PED_TASKS(Local_322.f_0);
							TASK::CLEAR_PED_SECONDARY_TASK(Local_322.f_0);
							TASK::TASK_VEHICLE_DRIVE_WANDER(Local_322.f_0, Local_322.f_2, 15f, 786613);
							PED::SET_PED_KEEP_TASK(Local_322.f_0, true);
							__LIB_0__::func_124(&Local_322, 1, 0, 1);
							__LIB_0__::func_106(&(Local_322.f_2));
						}
					}
					__LIB_0__::func_124(&(Local_322.f_1), 1, 0, 1);
					__LIB_0__::func_124(&Local_324, 1, 0, 1);
					if (__LIB_0__::func_692(Local_324.f_1))
					{
						__LIB_17__::func_32("*** Clearing driveby task and releasing");
						TASK::CLEAR_PED_TASKS(Local_324.f_1);
						__LIB_0__::func_124(&(Local_324.f_1), 1, 0, 1);
					}
					__LIB_0__::func_106(&(Local_324.f_2));
				}
				break;
			}
	}
}

int func_346()//Position - 0x2D754
{
	STREAMING::REQUEST_MODEL(joaat("G_M_Y_SalvaGoon_01"));
	STREAMING::REQUEST_MODEL(joaat("banshee"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_SalvaGoon_01")) && STREAMING::HAS_MODEL_LOADED(joaat("banshee")))
	{
		return 1;
	}
	return 0;
}

void func_348()//Position - 0x2D7E1
{
	var uVar0;
	switch (iLocal_55)
	{
		case 0:
			__LIB_17__::func_32("Setup START_RUNNING");
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-1835.5298f, -518.7238f, 25.116776f, -1822.431f, -513.8933f, 30.386765f, 0);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1835.5298f, -518.7238f, 25.116776f, -1822.431f, -513.8933f, 30.386765f, false, true);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("FANATIC_MIX_SCENE");
				if (__LIB_0__::func_121(iLocal_244))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_244, "FANATIC_MIX_MARY_ANNE", 0f);
				}
			}
			if (!iLocal_62)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("RC6A_START"))
				{
					__LIB_17__::func_32("Starting music - start_running() init");
					iLocal_62 = 1;
				}
			}
			__LIB_0__::func_222(&uLocal_78, 3, iLocal_244, "MARYANN", 0, 1);
			__LIB_14__::func_844(1, 0, 1, 1);
			__LIB_14__::func_800(&Local_54, 0, 1);
			if (__LIB_0__::func_121(iLocal_244))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_244, false, false, false, false, false, false, false, false);
			}
			iLocal_366 = MISC::GET_GAME_TIMER();
			if (!HUD::DOES_BLIP_EXIST(iLocal_245))
			{
				iLocal_245 = __LIB_14__::func_661(iLocal_244, 1, 1, 5);
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_245, true);
			}
			if (__LIB_0__::func_692(iLocal_244))
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_244, false);
			}
			iLocal_246 = 3;
			iLocal_247 = MISC::GET_GAME_TIMER();
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fanatic1RollingStart"))
			{
				__LIB_17__::func_32("*** Using assisted movement...");
				TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Fanatic1RollingStart", true, 2f, 0.7f);
			}
			iLocal_67 = 1;
			iLocal_367 = MISC::GET_GAME_TIMER();
			iLocal_368 = MISC::GET_GAME_TIMER();
			__LIB_17__::func_32("GOING INTO START_RUNNING LOOP");
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 1);
			iLocal_55 = 1;
			break;
		case 1:
			if (!Global_113386.f_18574.f_384)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					__LIB_0__::func_151("FAN_HELP" /* GXT: Running and cycling will improve your general stamina.~n~Increasing your general stamina will allow you to sprint and cycle for longer.~n~Sprinting or cycling for longer than your stamina allows will drop your health. */, -1);
					Global_113386.f_18574.f_384 = 1;
				}
			}
			if (iLocal_67 == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_367) < 5000)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_367) > 1000)
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							__LIB_17__::func_32("FADING IN NOW");
							__LIB_0__::func_84(500, 0);
							__LIB_14__::func_844(1, 0, 1, 1);
						}
					}
				}
				else
				{
					iLocal_67 = 0;
					__LIB_17__::func_32("TURNING OFF ASSISTED ROUTE");
					TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Fanatic1RollingStart", false, 1f, 0.5f);
					TASK::REMOVE_WAYPOINT_RECORDING("Fanatic1RollingStart");
				}
			}
			if (__LIB_0__::func_121(iLocal_244))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_244, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
				{
					__LIB_17__::func_32("Re-set Mary Ann's task post-cutscene");
					TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_348, 1, 1052, -1);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_PLAY_ANIM(0, "move_f@runner", "idle", 4f, -4f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_244, iLocal_77);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				}
			}
			if (Local_298.f_2 == 0)
			{
				if (iLocal_352 < 17)
				{
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1799.0708f, -468.65915f, 40.074013f, -1820.1185f, -492.41388f, 41.74369f, 18.25f, false, true, 0))
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1798.0756f, -468.2297f, 39.02536f, -1816.6643f, -484.31702f, 43.642105f, 12.5f, false, true, 0))
							{
								if (__LIB_0__::func_75())
								{
									__LIB_0__::func_325();
								}
								if (func_322(Local_298.f_0, Local_298.f_1, 0, &(Local_285.f_4)))
								{
									if (Local_285.f_4 != -1)
									{
										Local_285.f_3 = 1;
										__LIB_17__::func_32("*** startRunConversation interrupted!");
										__LIB_17__::func_31("*** startRunConversation will restart on line: ", Local_285.f_4);
									}
									iLocal_59 = 1;
									iLocal_64 = 1;
									Local_298.f_2 = 1;
									Global_113386.f_18574.f_386 = 1;
								}
								else
								{
									__LIB_17__::func_32("*** Waiting for prior conversation to end before can play cheated line!");
								}
							}
						}
					}
				}
			}
			if (Local_295.f_2 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1772.7617f, -532.99713f, 35.589294f, -1797.2458f, -492.1292f, 39.270397f, 26f, false, true, 0) || __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1812.9103f, -468.52533f, 41.32029f, 1) < 10f)
				{
					if (__LIB_0__::func_75())
					{
						__LIB_0__::func_325();
					}
					if (func_322(Local_295.f_0, Local_295.f_1, 0, &(Local_285.f_4)))
					{
						if (Local_285.f_4 != -1)
						{
							Local_285.f_3 = 1;
							__LIB_17__::func_32("*** startRunConversation interrupted!");
							__LIB_17__::func_31("*** startRunConversation will restart on line: ", Local_285.f_4);
						}
						iLocal_59 = 1;
						iLocal_64 = 1;
						Local_295.f_2 = 1;
						Global_113386.f_18574.f_386 = 1;
					}
					else
					{
						__LIB_17__::func_32("*** Waiting for prior conversation to end before can play cheated line!");
					}
				}
			}
			if (iLocal_64 == 1)
			{
				if (Local_301.f_2 == 0)
				{
					if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_244) < 10f)
					{
						if (func_322(Local_301.f_0, Local_301.f_1, 0, &uVar0))
						{
							Local_301.f_2 = 1;
							iLocal_64 = 0;
							iLocal_281 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			if (func_334())
			{
				if (Local_285.f_2 == 0 && (MISC::GET_GAME_TIMER() - iLocal_368) > 3500)
				{
					__LIB_2__::func_859(&uLocal_78, "FAN1AU", Local_285.f_0, 7, 0, 0, 0);
					__LIB_17__::func_32("SETTING UP THE CONVERSATION");
					Local_285.f_2 = 1;
					iLocal_281 = MISC::GET_GAME_TIMER();
				}
				else if (Local_285.f_3 == 1)
				{
					if (Local_301.f_2 == 1)
					{
						StringCopy(&Local_267, Local_285.f_0, 16);
						StringConCat(&Local_267, "_", 16);
						StringIntConCat(&Local_267, Local_285.f_4, 16);
						if (__LIB_14__::func_782(&uLocal_78, "FAN1AU", Local_285.f_0, &Local_267, 7, 0, 0))
						{
							Local_285.f_3 = 0;
						}
					}
				}
			}
			if (Local_285.f_2)
			{
				func_338();
			}
			if (func_336(Local_354))
			{
				fLocal_251 = 1.15f;
				iLocal_55 = 0;
				iLocal_56 = 3;
			}
			break;
	}
}

void func_352()//Position - 0x2DE16
{
	switch (iLocal_55)
	{
		case 0:
			__LIB_17__::func_32("Intro Cutscene");
			__LIB_14__::func_851("ef_1_rcm", 1);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_17__::func_32("Trying to set Mary Ann component variation");
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Mary_Ann", iLocal_244, joaat("CS_MaryAnn"));
			}
			iLocal_313 = 0;
			iLocal_62 = 0;
			if (iLocal_339 == -1)
			{
				iLocal_339 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1877.3f, -439.7f, 45.05f, 4f, 6f, 2f, 45f, false, 7);
			}
			if (__LIB_14__::func_740(1, 1093140480, 0))
			{
				if (__LIB_0__::func_121(iLocal_244))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_244, "Mary_Ann", 0, joaat("IG_MaryAnn"), 0);
					__LIB_17__::func_32("Registered Mary Ann");
				}
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
					__LIB_17__::func_32("Registered Michael");
				}
				iLocal_340 = PED::ADD_SCENARIO_BLOCKING_AREA(-1926.6536f, -387.8897f, 46.7354f, -1897.3219f, -374.5802f, 51.0241f, false, true, true, true);
				__LIB_14__::func_841();
				PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
				CAM::STOP_GAMEPLAY_HINT(false);
				RECORDING::REPLAY_START_EVENT(1);
				CUTSCENE::START_CUTSCENE(0);
				SYSTEM::WAIT(0);
				__LIB_0__::func_84(500, 0);
				__LIB_14__::func_614(-1873.5255f, -441.62106f, 44.693626f, -1882.03f, -436.99173f, 47.48379f, 7f, -1875.09f, -431.08f, 45.21f, 236.42f, __LIB_13__::func_790(), 1, 1, 1, 0, 0);
				__LIB_14__::func_614(-1875.8148f, -443.1191f, 49.13515f, -1808.5607f, -491.7887f, 36.58029f, 11f, -1875.09f, -431.08f, 45.21f, 236.42f, __LIB_13__::func_790(), 1, 1, 1, 0, 0);
				func_303(-1877.23f, -440.46f, 45.07f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				func_440();
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1799.5134f, -467.64594f, 43.13879f, -1789.6028f, -476.66156f, 36.837288f, 7.5f, false, false, false, false, false, 0, 0);
				bLocal_61 = false;
				__LIB_17__::func_32("Going into cutscene main loop now");
				iLocal_55 = 1;
			}
			else
			{
				__LIB_17__::func_32("Waiting for cutscene to be OK to start...");
			}
			break;
		case 1:
			if (iLocal_313 == 0)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 31000)
				{
					if (!iLocal_62)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("RC6A_START"))
						{
							__LIB_17__::func_32("Starting music");
							iLocal_62 = 1;
						}
					}
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					__LIB_17__::func_32("*** Cutscene skip detected");
					__LIB_17__::func_32("*** Cam exit state pitch/heading on skip");
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					if (__LIB_0__::func_121(iLocal_244))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_244, -1869.24f, -444.99f, 45.17f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_244, -143.87f);
					}
					bLocal_61 = true;
					iLocal_313 = 1;
				}
				if (func_355())
				{
					iLocal_313 = 1;
				}
				func_353();
			}
			else if (iLocal_313 == 1)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 31000)
				{
					if (!iLocal_62)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("RC6A_START"))
						{
							__LIB_17__::func_32("Starting music");
							iLocal_62 = 1;
						}
					}
				}
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					__LIB_17__::func_32("*** Cutscene skip detected");
					__LIB_17__::func_32("*** Cam exit state pitch/heading on skip");
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					if (__LIB_0__::func_121(iLocal_244))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_244, -1869.24f, -444.99f, 45.17f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_244, -143.87f);
					}
					if (!iLocal_62)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("RC6A_START"))
						{
							__LIB_17__::func_32("Starting music from skip");
							iLocal_62 = 1;
						}
					}
				}
				func_353();
				func_355();
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					RECORDING::REPLAY_STOP_EVENT();
					PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_339);
					iLocal_339 = -1;
					PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_340, false);
					iLocal_276 = MISC::GET_GAME_TIMER();
					iLocal_55 = 0;
					iLocal_56 = 2;
				}
			}
			break;
	}
}

void func_353()//Position - 0x2E1B9
{
	if (__LIB_0__::func_121(iLocal_244))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Mary_Ann", joaat("IG_MaryAnn")))
		{
			__LIB_17__::func_32("*** Forcing Mary Ann's move state");
			__LIB_17__::func_32("SET MARY ANNS TASK");
			if (bLocal_61)
			{
				__LIB_14__::func_659(iLocal_244, -1867.64f, -446.01f, 45.16f, 229.3557f, 0, 1);
			}
			TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_348, 1, 1052, -1);
			TASK::TASK_PLAY_ANIM(0, "move_f@runner", "idle", 4f, -4f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_244, iLocal_77);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
			PED::FORCE_PED_MOTION_STATE(iLocal_244, joaat("MotionState_Run"), false, 1, false);
		}
	}
}

int func_355()//Position - 0x2E2D0
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
		{
			__LIB_17__::func_32("*** Forcing Michael's move state");
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 1, false);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 5000, 0f, true, false);
			return 1;
		}
	}
	return 0;
}

void func_363()//Position - 0x2E642
{
	__LIB_14__::func_862();
	switch (iLocal_55)
	{
		case 0:
			if (!__LIB_0__::func_323())
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_244, 1) <= 1.2f)
				{
					if (__LIB_0__::func_75())
					{
						__LIB_0__::func_429();
					}
					__LIB_17__::func_32("Player too close to Mary Ann, starting cutscene early");
					iLocal_55 = 0;
					iLocal_56 = 1;
				}
				if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_244, 0f, 0f, 0f, true, 30000, 2000, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_FOV(fLocal_373);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_374);
					CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_375);
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fLocal_376);
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(fLocal_377);
					CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				}
				else
				{
					CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
				}
				STREAMING::REQUEST_ANIM_DICT("rcmfanatic1");
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1") && iLocal_56 == 0)
				{
					if (__LIB_0__::func_121(iLocal_244))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_244, "rcmfanatic1", "ef_1_rcm_mary_ann_streching_base", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_244, "rcmfanatic1", "ef_1_rcm_mary_ann_streching_base") < 0.1f)
							{
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_244, false);
								__LIB_0__::func_222(&uLocal_78, 3, iLocal_244, "MARYANN", 0, 1);
								__LIB_0__::func_222(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
								TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_244, "rcmfanatic1", "ef_1_rcm_mary_ann_leadin", -1878.223f, -440.51813f, 46.03983f, 0f, 0f, 159.97f, 8f, -8f, -1, 262154, 0f, 2, 0);
								__LIB_17__::func_32("Done Mary Ann leadin anim");
								iLocal_55 = 1;
							}
							else
							{
								__LIB_17__::func_32("Waiting to blend the lead-in...");
							}
						}
					}
				}
			}
			else
			{
				__LIB_17__::func_32("Replay in progress or in wrong area - skipping to intro");
				iLocal_56 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_692(iLocal_244))
			{
				if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_244, 0f, 0f, 0f, true, 30000, 2000, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_FOV(fLocal_373);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_374);
					CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_375);
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fLocal_376);
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(fLocal_377);
					CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				}
				else
				{
					CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_244, "rcmfanatic1", "ef_1_rcm_mary_ann_leadin", 3))
				{
					if (iLocal_60 == 0)
					{
						if (__LIB_2__::func_859(&uLocal_78, "FAN1AU", "FAN1_LDI", 8, 0, 0, 0))
						{
							__LIB_17__::func_32("Done Mary Ann leadin conv");
							iLocal_60 = 1;
						}
					}
					else if (!__LIB_0__::func_75())
					{
						__LIB_17__::func_32("Mary Ann leadin conv over");
						SYSTEM::WAIT(250);
						iLocal_55 = 0;
						iLocal_56 = 1;
					}
				}
				else
				{
					__LIB_17__::func_32("Mary Ann not playing leadin anim anymore - skip to cutscene for safety");
					iLocal_55 = 0;
					iLocal_56 = 1;
				}
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_244, 1) <= 4f)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					if (!__LIB_6__::func_572(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_244, 0);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_244, -1, 0, 2);
					}
				}
			}
			break;
	}
}

void func_366()//Position - 0x2E940
{
	if (iLocal_277 == 1 && (MISC::GET_GAME_TIMER() - iLocal_276) < 1500)
	{
		if (!__LIB_0__::func_75())
		{
			if (Local_274.f_1 <= 3)
			{
				if (iLocal_278 == 0)
				{
					if (func_367(Local_274.f_0))
					{
						__LIB_17__::func_31("Said OvertakeLines #", Local_274.f_1);
						Local_274.f_1++;
						iLocal_277 = 0;
						iLocal_278 = 1;
						iLocal_276 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					iLocal_278 = 0;
					iLocal_277 = 0;
					iLocal_276 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				iLocal_277 = 0;
				iLocal_276 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_277 = 0;
			iLocal_276 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iLocal_277 == 1)
	{
		iLocal_277 = 0;
		iLocal_276 = MISC::GET_GAME_TIMER();
	}
}

int func_367(char* sParam0)//Position - 0x2E9EF
{
	if (iLocal_243 == 0 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (__LIB_2__::func_859(&uLocal_78, "FAN1AU", sParam0, 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_368()//Position - 0x2EA20
{
	if (__LIB_0__::func_692(iLocal_244))
	{
		if (iLocal_56 != 8)
		{
			func_380();
		}
		else if (iLocal_308 >= 3)
		{
			if (!__LIB_6__::func_572(iLocal_244, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) && !bLocal_69)
			{
				if (__LIB_0__::func_695(iLocal_304))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_304, 20000, -1, 2f, 1, 0);
					TASK::TASK_CLEAR_LOOK_AT(0);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 0, 2);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_304, -2018.17f, -461f, 10.56f, 10f, 0, iLocal_307, 8, 3f, 50f);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_304, -2014.96f, -455.47f, 10.48f, 10f, 0, iLocal_307, 8, 3f, 50f);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_304, 10f, 786599);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_244, iLocal_77);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
					PED::SET_PED_KEEP_TASK(iLocal_244, true);
					__LIB_17__::func_32("Emergency retasked Mary Ann!");
				}
			}
		}
		func_379();
		if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_244) > 80f)
		{
			if (iLocal_256 == 0)
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_244, true, 1);
				iLocal_256 = 1;
			}
		}
		else if (iLocal_256 == 1)
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_244, false, 1);
			iLocal_256 = 0;
		}
		if ((iLocal_56 != 8 && iLocal_56 != 7) && iLocal_56 != 9)
		{
			if (iLocal_243 != 1)
			{
				if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_244) > 25f)
				{
					func_378(1);
				}
			}
		}
		if (iLocal_243 != 0)
		{
			if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_244) < 24f)
			{
				func_378(0);
			}
		}
		func_372();
		if ((iLocal_56 != 8 && iLocal_56 != 1) && iLocal_56 != 9)
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_244, -1809.1729f, -549.01056f, 14.031675f, -1841.7286f, -529.4575f, 33.641205f, 21.75f, false, true, 0))
			{
				if (iLocal_255 == 0)
				{
					PED::SET_PED_STEERS_AROUND_PEDS(iLocal_244, true);
					iLocal_255 = 1;
					__LIB_17__::func_32("Set Mary Ann to steer round peds");
				}
			}
			else if (iLocal_255 == 1)
			{
				PED::SET_PED_STEERS_AROUND_PEDS(iLocal_244, false);
				iLocal_255 = 0;
				__LIB_17__::func_32("Unset Mary Ann to steer round peds");
			}
			func_369();
		}
	}
}

void func_369()//Position - 0x2EC45
{
	int iVar0;
	switch (iLocal_259)
	{
		case 0:
			iLocal_261 = iLocal_352;
			iLocal_260 = MISC::GET_GAME_TIMER();
			iLocal_259 = 1;
			break;
		case 1:
			if (iLocal_261 == iLocal_352)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_260) > 20000)
				{
					__LIB_17__::func_32("Mary Ann got stuck!");
					iLocal_259 = 2;
				}
			}
			else
			{
				iLocal_259 = 0;
			}
			break;
		case 2:
			TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_348, &iVar0);
			if (iLocal_261 + 4 > iVar0)
			{
				func_371((iVar0 - 1));
			}
			else
			{
				func_371(iLocal_261 + 4);
			}
			func_370(iLocal_56, 0);
			iLocal_259 = 0;
			break;
	}
}

void func_370(int iParam0, int iParam1)//Position - 0x2ECDF
{
	if (__LIB_0__::func_692(iLocal_244))
	{
		if (!MISC::IS_STRING_NULL(sLocal_348))
		{
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_348))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_348, func_298(), 1052, -1);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_PLAY_ANIM(0, "move_f@runner", "idle", 4f, -4f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_244, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
			}
		}
		__LIB_17__::func_32("Keep Running used");
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_244, false);
		if (iParam1 == 1)
		{
			iLocal_55 = 0;
			iLocal_56 = iParam0;
		}
	}
}

void func_371(int iParam0)//Position - 0x2ED7A
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_348, iParam0, &Var0);
	TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_348, iParam0 + 1, &Var2);
	fVar1 = __LIB_6__::func_252(Var0, Var2, 1);
	__LIB_14__::func_659(iLocal_244, Var0, fVar1, 1, 1);
	if (iParam0 < 6)
	{
		iLocal_365 = 1;
	}
	else if (iParam0 < 30)
	{
		iLocal_365 = 1;
	}
	else if (iParam0 < 36)
	{
		iLocal_365 = 2;
	}
	else if (iParam0 < 48)
	{
		iLocal_365 = 3;
	}
	else if (iParam0 < 62)
	{
		iLocal_365 = 4;
	}
	else if (iParam0 < 81)
	{
		iLocal_365 = 5;
	}
	else if (iParam0 < 95)
	{
		iLocal_365 = 6;
	}
	else if (iParam0 < 106)
	{
		iLocal_365 = 7;
	}
	else
	{
		iLocal_365 = 8;
	}
}

void func_372()//Position - 0x2EE2F
{
	if (iLocal_56 != 8)
	{
		if (iLocal_56 == 5)
		{
			iLocal_246 = 3;
			func_377();
		}
		else
		{
			if (iLocal_246 != 2)
			{
				func_374();
			}
			else if (iLocal_349 == 1)
			{
				func_374();
			}
			func_373();
		}
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_244))
		{
			if (iLocal_246 == 1)
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_244, fLocal_254, false);
			}
			else
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_244, fLocal_253, false);
			}
		}
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_244, (fLocal_253 - 0.5f));
		PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_244, fLocal_251);
	}
}

void func_373()//Position - 0x2EEB0
{
	switch (iLocal_246)
	{
		case 0:
			if (__LIB_0__::func_121(iLocal_244))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_244, -1809.1729f, -549.01056f, 14.031675f, -1841.7286f, -529.4575f, 33.641205f, 21.75f, false, true, 0))
				{
					if (fLocal_253 >= 2.5f)
					{
						if (__LIB_0__::func_121(iLocal_244))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_244, PLAYER::PLAYER_PED_ID(), 1500, 3120, 4);
						}
						fLocal_254 = fLocal_253;
						iLocal_246 = 1;
						iLocal_247 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case 1:
			if ((MISC::GET_GAME_TIMER() - iLocal_247) < iLocal_248)
			{
				if (fLocal_254 < fLocal_253)
				{
					fLocal_254 = fLocal_253;
				}
			}
			else
			{
				fLocal_253 = fLocal_254;
				iLocal_246 = 2;
			}
			break;
		case 2:
			if (iLocal_349 == 2)
			{
				if (fLocal_253 > 2.49f)
				{
					fLocal_253 = (fLocal_253 - 0.002f);
				}
				else
				{
					iLocal_246 = 3;
					iLocal_247 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_247) > iLocal_249)
			{
				__LIB_17__::func_32("*** SPRINT BOOST WAITING");
				iLocal_246 = 0;
			}
			break;
	}
}

void func_374()//Position - 0x2EFCB
{
	struct<3> Var0;
	if (iLocal_351 == iLocal_352)
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_348, iLocal_352 + 1, &Var0);
		if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Var0, 1) < __LIB_0__::func_724(iLocal_244, Var0, 1))
		{
			func_376();
		}
		else
		{
			func_375();
		}
	}
	else if (iLocal_351 > iLocal_352)
	{
		func_376();
	}
	else
	{
		func_375();
	}
}

void func_375()//Position - 0x2F02A
{
	float fVar0;
	if (fLocal_251 > 1f)
	{
		fLocal_251 = (fLocal_251 - 0.02f);
	}
	else
	{
		fLocal_251 = 1f;
	}
	if (fLocal_251 > fLocal_250)
	{
		fLocal_251 = fLocal_250;
	}
	fVar0 = (4.5f - (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_244) / 2f));
	if (fVar0 < 1.8f)
	{
		fVar0 = 1.8f;
	}
	else if (fVar0 > fLocal_252)
	{
		fVar0 = fLocal_252;
	}
	if (fLocal_253 > fVar0)
	{
		fLocal_253 = (fLocal_253 - 0.01f);
	}
	else
	{
		fLocal_253 = fVar0;
	}
}

void func_376()//Position - 0x2F0B2
{
	fLocal_251 = (fLocal_251 + (MISC::GET_FRAME_TIME() / 20f));
	if (fLocal_251 > fLocal_250)
	{
		fLocal_251 = fLocal_250;
	}
	fLocal_253 = (fLocal_253 + 0.02f);
	if (fLocal_253 > fLocal_252)
	{
		fLocal_253 = fLocal_252;
	}
}

void func_377()//Position - 0x2F0F7
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (__LIB_0__::func_121(iLocal_244))
	{
		if (iLocal_349 == 2)
		{
			fVar0 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_244, 1);
			if (fVar0 < 15f)
			{
				fVar1 = (fVar0 / 100f);
				if (fLocal_253 > 2.42f)
				{
					fLocal_253 = (fLocal_253 - fVar1);
				}
			}
			else if (fLocal_253 < 2.52f)
			{
				fLocal_253 = (fLocal_253 + 0.002f);
			}
		}
		else
		{
			fVar2 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_244, 1);
			fVar3 = (fVar2 / 300f);
			if (fVar2 < 10f)
			{
				if (fLocal_253 < 2.487f)
				{
					fLocal_253 = (fLocal_253 + 0.002f);
				}
				else if (fLocal_253 > 2.492f)
				{
					fLocal_253 = (fLocal_253 - 0.002f);
				}
			}
			else
			{
				if (fLocal_253 < 2.55f)
				{
					fLocal_253 = (fLocal_253 + fVar3);
				}
				else if (fLocal_253 > 2.55f)
				{
					fLocal_253 = (fLocal_253 - fVar3);
				}
				if (fLocal_253 > 3f)
				{
					fLocal_253 = 3f;
				}
			}
		}
	}
}

void func_378(int iParam0)//Position - 0x2F1F8
{
	if (iLocal_243 != iParam0)
	{
		switch (iLocal_243)
		{
			case 0:
				if (iParam0 == 1)
				{
					if (__LIB_0__::func_75())
					{
						__LIB_0__::func_325();
					}
					__LIB_17__::func_32("MA Dialogue: Kill convo, switch to MA_OUT_OF_TALKING_RANGE, trying keep up line if possible");
					iLocal_243 = 2;
				}
				break;
			case 1:
				if (iParam0 == 0)
				{
					if (__LIB_0__::func_75())
					{
						__LIB_0__::func_325();
					}
					__LIB_17__::func_32("MA Dialogue: Kill convo, switch to MA_WITHIN_TALKING_RANGE, trying you caught up line if possible");
					iLocal_243 = 3;
				}
				break;
			}
	}
}

void func_379()//Position - 0x2F25E
{
	if (iLocal_243 == 2)
	{
		if (iLocal_262 < 2)
		{
			if ((Local_295.f_2 || Local_298.f_2) && iLocal_56 == 2)
			{
				iLocal_243 = 1;
				__LIB_17__::func_32("MA Dialogue: Now in MA_OUT_OF_TALKING_RANGE");
			}
			else if (iLocal_349 == 2)
			{
				if (__LIB_14__::func_535(&uLocal_78, "FAN1AU", "FAN1_FALLB", sLocal_263[iLocal_262], 8, 0, 0))
				{
					iLocal_262++;
					iLocal_243 = 1;
					__LIB_17__::func_32("MA Dialogue: Played keep up line, now in MA_OUT_OF_TALKING_RANGE");
				}
			}
			else
			{
				iLocal_243 = 1;
				__LIB_17__::func_32("MA Dialogue: Player in 1st place so no need for keep up line, now in MA_OUT_OF_TALKING_RANGE");
			}
		}
		else
		{
			__LIB_17__::func_32("MA Dialogue: Said all keep up lines, now in MA_OUT_OF_TALKING_RANGE");
			iLocal_243 = 1;
		}
	}
	else if (iLocal_243 == 3)
	{
		if (iLocal_264 < 2)
		{
			if ((Local_295.f_2 || Local_298.f_2) && iLocal_56 == 2)
			{
				if (iLocal_279 == 0)
				{
					if (__LIB_2__::func_859(&uLocal_78, "FAN1AU", "FAN1_CATCHC", 8, 0, 0, 0))
					{
						iLocal_279 = 1;
						iLocal_64 = 0;
					}
				}
				iLocal_243 = 0;
				__LIB_17__::func_32("MA Dialogue: Now in MA_WITHIN_TALKING_RANGE");
			}
			else if (iLocal_349 == 2)
			{
				if (func_367("FAN1_CATCHU"))
				{
					iLocal_264++;
					iLocal_243 = 0;
					__LIB_17__::func_32("MA Dialogue: Played catchup line, now in MA_WITHIN_TALKING_RANGE");
				}
			}
			else
			{
				iLocal_243 = 0;
				__LIB_17__::func_32("MA Dialogue: Player in 1st place so no need for catchup line, now in MA_WITHIN_TALKING_RANGE");
			}
		}
	}
}

void func_380()//Position - 0x2F392
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_244))
	{
		PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(iLocal_244, true), 0.75f, true, true, &iVar0, false, false, -1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (!PED::IS_PED_RAGDOLL(iVar0) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_244, iVar0))
			{
				TASK::CLEAR_PED_TASKS(iVar0);
				PED::SET_PED_TO_RAGDOLL(iVar0, 800, 1500, 2, true, true, false);
				Var1 = { -ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_244, ENTITY::GET_ENTITY_COORDS(iVar0, true)) };
				ENTITY::APPLY_FORCE_TO_ENTITY(iVar0, 1, Var1, 0f, 0f, 0f, PED::GET_PED_RAGDOLL_BONE_INDEX(iVar0, 7), false, false, true, false, true);
				if (!__LIB_0__::func_75())
				{
					if (PED::PED_HAS_SEXINESS_FLAG_SET(iVar0, 4))
					{
						if (Local_284[2 /*5*/].f_2 == 0)
						{
							if (func_322("FAN1_PUSH", Local_284[2 /*5*/].f_1, 0, &uVar2))
							{
								Local_284[2 /*5*/].f_2 = 1;
							}
						}
						else if (Local_284[0 /*5*/].f_2 == 0)
						{
							if (func_322("FAN1_PUSH", Local_284[0 /*5*/].f_1, 0, &uVar3))
							{
								Local_284[0 /*5*/].f_2 = 1;
							}
						}
					}
					else if (Local_284[1 /*5*/].f_2 == 0)
					{
						if (func_322("FAN1_PUSH", Local_284[1 /*5*/].f_1, 0, &uVar4))
						{
							Local_284[1 /*5*/].f_2 = 1;
						}
					}
					else if (Local_284[0 /*5*/].f_2 == 0)
					{
						if (func_322("FAN1_PUSH", Local_284[0 /*5*/].f_1, 0, &uVar5))
						{
							Local_284[0 /*5*/].f_2 = 1;
						}
					}
				}
			}
		}
	}
}

void func_381()//Position - 0x2F4FA
{
	var uVar0[32];
	struct<3> Var1;
	if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1) > 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uVar0[0]) && !ENTITY::IS_ENTITY_DEAD(uVar0[0], false))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uVar0[0]))
				{
					if (uVar0[0] == iLocal_244)
					{
						__LIB_17__::func_32("Player touched Mary Ann!");
						if (!__LIB_0__::func_75())
						{
							if (Local_270.f_1 <= 3)
							{
								if (func_367(Local_270.f_0))
								{
									__LIB_17__::func_31("Saying MikePushMALine #", Local_270.f_1);
									Local_270.f_1++;
								}
							}
						}
					}
					else
					{
						__LIB_17__::func_32("Player touched a civ!");
						if (!PED::IS_PED_IN_ANY_VEHICLE(uVar0[0], false))
						{
							if (!PED::IS_PED_RAGDOLL(uVar0[0]))
							{
								TASK::CLEAR_PED_TASKS(uVar0[0]);
								PED::SET_PED_TO_RAGDOLL(uVar0[0], 800, 1500, 2, true, true, false);
								Var1 = { -ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uVar0[0], true)) };
								ENTITY::APPLY_FORCE_TO_ENTITY(uVar0[0], 1, Var1, 0f, 0f, 0f, PED::GET_PED_RAGDOLL_BONE_INDEX(uVar0[0], 7), false, false, true, false, true);
							}
							if (!__LIB_0__::func_75())
							{
								if (Local_272.f_1 <= 3)
								{
									if (func_367(Local_272.f_0))
									{
										__LIB_17__::func_31("Said MikePushPedLine #", Local_272.f_1);
										Local_272.f_1++;
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

void func_383()//Position - 0x2F687
{
	if (__LIB_0__::func_692(iLocal_244))
	{
		if (iLocal_56 < 8 && iLocal_56 > 1)
		{
			func_398();
			__LIB_14__::func_655(iLocal_245, iLocal_244, 70f, 0.72f, 0);
			if (iLocal_351 > iLocal_352)
			{
				if (iLocal_349 != 1)
				{
					iLocal_349 = 1;
					if ((MISC::GET_GAME_TIMER() - iLocal_276) > 3000)
					{
						__LIB_17__::func_32("Trying an overtake line...");
						iLocal_277 = 1;
						iLocal_276 = MISC::GET_GAME_TIMER();
					}
					else
					{
						__LIB_17__::func_31("Can't do overtake line, overtake timer is = ", (MISC::GET_GAME_TIMER() - iLocal_276));
					}
				}
			}
			else if (iLocal_351 < iLocal_352)
			{
				if (iLocal_349 != 2)
				{
					iLocal_349 = 2;
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_244, true), Local_363[func_396() /*3*/], true) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_363[func_396() /*3*/], true))
			{
				if (iLocal_349 != 2)
				{
					iLocal_349 = 2;
				}
			}
			else if (iLocal_349 != 1)
			{
				iLocal_349 = 1;
				if ((MISC::GET_GAME_TIMER() - iLocal_276) > 3000)
				{
					__LIB_17__::func_32("Trying an overtake line...");
					iLocal_277 = 1;
					iLocal_276 = MISC::GET_GAME_TIMER();
				}
				else
				{
					__LIB_17__::func_31("Can't do overtake line, overtake timer is = ", (MISC::GET_GAME_TIMER() - iLocal_276));
				}
			}
			__LIB_1__::func_910();
			__LIB_33__::func_544((MISC::GET_GAME_TIMER() - iLocal_366), "", -1, -1, "", iLocal_349, 2, "", 0, 1, -1, -1, 0, 12, -1, -1, 0, 6, -1, 0, 0, 1, -1, 0, -1082130432, 1, 1);
		}
	}
}

int func_396()//Position - 0x30307
{
	if (iLocal_364 > iLocal_365)
	{
		if (iLocal_364 >= 10)
		{
			return 9;
		}
		else
		{
			return iLocal_364;
		}
	}
	if (iLocal_365 >= 10)
	{
		return 9;
	}
	return iLocal_365;
}

void func_398()//Position - 0x3049D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	if (iLocal_364 < iLocal_362)
	{
		if (iLocal_364 < (iLocal_362 - 1))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_363[iLocal_364 /*3*/], 4f, 4f, 3f, false, true, 0) || !HUD::DOES_BLIP_EXIST(iLocal_357))
			{
				__LIB_0__::func_714(&iLocal_357);
				__LIB_0__::func_714(&iLocal_358);
				if (iLocal_359 != 0)
				{
					__LIB_17__::func_32("Create prev CP");
					iLocal_361 = 180;
					iVar0 = 1;
					HUD::GET_HUD_COLOUR(iVar0, &iVar5, &iVar6, &iVar7, &iLocal_361);
					iLocal_360 = GRAPHICS::CREATE_CHECKPOINT(func_400(iLocal_364), Local_363[iLocal_364 /*3*/] + Vector(2f, 0f, 0f), Local_363[iLocal_364 + 1 /*3*/], 3.2f, iVar5, iVar6, iVar7, iLocal_361, 0);
					GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_360, iVar5, iVar6, iVar7, iLocal_361);
					GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_360, iVar5, iVar6, iVar7, iLocal_361);
				}
				GRAPHICS::DELETE_CHECKPOINT(iLocal_359);
				if (iLocal_364 != 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", false);
				}
				iLocal_364++;
				if (iLocal_364 < (iLocal_362 - 1))
				{
					iLocal_359 = GRAPHICS::CREATE_CHECKPOINT(func_400(iLocal_364), Local_363[iLocal_364 /*3*/] + Vector(2f, 0f, 0f), Local_363[iLocal_364 + 1 /*3*/], 3.2f, iVar1, iVar2, iVar3, iVar4, 0);
					GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_359, 1.6f, 1.6f, 100f);
					iVar0 = 13;
					HUD::GET_HUD_COLOUR(iVar0, &iVar1, &iVar2, &iVar3, &iVar4);
					GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_359, iVar1, iVar2, iVar3, iVar4);
					iVar0 = 134;
					HUD::GET_HUD_COLOUR(iVar0, &iVar1, &iVar2, &iVar3, &iVar4);
					GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_359, iVar1, iVar2, iVar3, iVar4);
					iLocal_357 = HUD::ADD_BLIP_FOR_COORD(Local_363[iLocal_364 /*3*/]);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_357, false);
					HUD::SET_BLIP_SCALE(iLocal_357, 1.2f);
					iLocal_358 = HUD::ADD_BLIP_FOR_COORD(Local_363[iLocal_364 + 1 /*3*/]);
					if (iLocal_364 + 1 == (iLocal_362 - 1))
					{
						HUD::SET_BLIP_SCALE(iLocal_358, 1.2f);
						HUD::SET_BLIP_SPRITE(iLocal_358, 38);
						HUD::SHOW_HEIGHT_ON_BLIP(iLocal_358, false);
					}
					else
					{
						HUD::SET_BLIP_SCALE(iLocal_358, 0.7f);
						HUD::SHOW_HEIGHT_ON_BLIP(iLocal_358, false);
					}
				}
				else if (iLocal_364 == (iLocal_362 - 1))
				{
					iVar0 = func_399(func_400(iLocal_364));
					HUD::GET_HUD_COLOUR(iVar0, &iVar1, &iVar2, &iVar3, &iVar4);
					iLocal_359 = GRAPHICS::CREATE_CHECKPOINT(func_400(iLocal_364), Local_363[iLocal_364 /*3*/] + Vector(2f, 0f, 0f), Local_363[iLocal_364 /*3*/], 3.2f, iVar1, iVar2, iVar3, iVar4, 0);
					GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_359, 1.6f, 1.6f, 100f);
					iLocal_357 = HUD::ADD_BLIP_FOR_COORD(Local_363[iLocal_364 /*3*/]);
					HUD::SET_BLIP_SCALE(iLocal_357, 1.2f);
					HUD::SET_BLIP_SPRITE(iLocal_357, 38);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_357, false);
				}
			}
		}
		else if (iLocal_364 == (iLocal_362 - 1))
		{
			if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_356, 1) < 4f)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (iLocal_359 != 0)
					{
						__LIB_17__::func_32("Create prev CP");
						iLocal_361 = 180;
						iVar0 = 1;
						HUD::GET_HUD_COLOUR(iVar0, &iVar5, &iVar6, &iVar7, &iLocal_361);
						iLocal_360 = GRAPHICS::CREATE_CHECKPOINT(10, Local_363[iLocal_364 /*3*/] + Vector(2f, 0f, 0f), Local_363[iLocal_364 /*3*/], 3.2f, iVar5, iVar6, iVar7, iLocal_361, 0);
						GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_360, iVar5, iVar6, iVar7, iLocal_361);
						GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_360, iVar5, iVar6, iVar7, iLocal_361);
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", false);
					iLocal_308 = 1;
					iLocal_55 = 0;
					iLocal_56 = 8;
					__LIB_17__::func_32("PLAYER_AT_FINISH_LINE");
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_363[iLocal_364 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
		if (iLocal_359 != 0)
		{
			if (fVar8 > 100f)
			{
				iVar4 = 240;
				iVar0 = 13;
				HUD::GET_HUD_COLOUR(iVar0, &iVar1, &iVar2, &iVar3, &iVar4);
				GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_359, iVar1, iVar2, iVar3, iVar4);
				iVar0 = 134;
				HUD::GET_HUD_COLOUR(iVar0, &iVar1, &iVar2, &iVar3, &iVar4);
				GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_359, iVar1, iVar2, iVar3, iVar4);
			}
			else
			{
				iVar0 = 13;
				HUD::GET_HUD_COLOUR(iVar0, &iVar1, &iVar2, &iVar3, &iVar4);
				iVar4 = SYSTEM::ROUND((fVar8 * 2.4f));
				if (iVar4 < 60)
				{
					iVar4 = 60;
				}
				GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_359, iVar1, iVar2, iVar3, iVar4);
				iVar0 = 134;
				HUD::GET_HUD_COLOUR(iVar0, &iVar1, &iVar2, &iVar3, &iVar4);
				iVar4 = SYSTEM::ROUND((fVar8 * 2.4f));
				if (iVar4 < 60)
				{
					iVar4 = 60;
				}
				GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_359, iVar1, iVar2, iVar3, iVar4);
			}
		}
	}
	if (iLocal_360 != 0)
	{
		iLocal_361 = (iLocal_361 - 25);
		if (iLocal_361 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &iVar5, &iVar6, &iVar7, &iVar4);
			GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_360, iVar5, iVar6, iVar7, iLocal_361);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_360, iVar5, iVar6, iVar7, iLocal_361);
		}
		else
		{
			GRAPHICS::DELETE_CHECKPOINT(iLocal_360);
		}
	}
	if (iLocal_365 < iLocal_362)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_244, Local_363[iLocal_365 /*3*/], 3f, 3f, 3f, false, true, 0))
		{
			iLocal_365++;
		}
	}
}

int func_399(var uParam0)//Position - 0x3097F
{
	uParam0 = uParam0;
	return 13;
}

int func_400(int iParam0)//Position - 0x3098D
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	fVar6 = 180f;
	fVar7 = 140f;
	fVar8 = 80f;
	Var0 = { Local_363[iParam0 /*3*/] };
	if (iParam0 == (iLocal_362 - 1))
	{
		return 10;
	}
	else if (iParam0 == 0)
	{
		Var2 = { -1869.12f, -445.17f, 45.17f };
		Var1 = { Local_363[iParam0 + 1 /*3*/] };
	}
	else
	{
		Var2 = { Local_363[(iParam0 - 1) /*3*/] };
		Var1 = { Local_363[iParam0 + 1 /*3*/] };
	}
	Var3 = { Var2 - Var0 };
	Var4 = { Var1 - Var0 };
	fVar5 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var3.f_0, Var3.f_1, Var4.f_0, Var4.f_1);
	if (fVar5 > 180f)
	{
		fVar5 = (360f - fVar5);
	}
	if (fVar5 < fVar8)
	{
		return 8;
	}
	else if (fVar5 < fVar7)
	{
		return 7;
	}
	else if (fVar5 < fVar6)
	{
		return 6;
	}
	else
	{
		return 6;
	}
	return 6;
}

void func_401()//Position - 0x30A86
{
	if ((iLocal_56 != 8 && iLocal_56 != 10) && iLocal_56 > 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_244))
		{
			func_57();
			func_45();
			func_300();
			func_403();
			func_402();
		}
	}
}

void func_402()//Position - 0x30AC7
{
	if (iLocal_56 != 9 && iLocal_56 != 10)
	{
		if (__LIB_0__::func_724(iLocal_244, Local_356, 1) < 3f)
		{
			__LIB_17__::func_32("Detected Mary Ann won race");
			iLocal_58 = 5;
			iLocal_55 = 0;
			iLocal_56 = 9;
		}
	}
}

void func_403()//Position - 0x30B06
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_353, true) > 60f || func_407(60f))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
		iLocal_58 = 6;
		iLocal_55 = 0;
		iLocal_56 = 10;
	}
	else if (Local_74.f_1 == 0)
	{
		if (!__LIB_0__::func_501(Local_73.f_0, 0, 0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_353, true) > 40f || func_407(40f))
			{
				if (__LIB_0__::func_75())
				{
					__LIB_17__::func_32("stop scripted conversation at CHECK_IF_PLAYER_LEFT_THE_COURSE_OR_MARY_ANN");
					__LIB_0__::func_325();
				}
				HUD::CLEAR_PRINTS();
				__LIB_0__::func_382(Local_74.f_0, 7500, 1);
				Local_74.f_1 = 1;
			}
		}
	}
	if (iLocal_351 < iLocal_352)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_244, true), true) > 70f)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
			iLocal_58 = 4;
			iLocal_55 = 0;
			iLocal_56 = 10;
		}
		else if (Local_73.f_1 == 0 && !__LIB_0__::func_501(Local_74.f_0, 0, 0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_244, true), true) > 50f)
			{
				__LIB_0__::func_229(Local_73.f_0, 7500, 1);
				Local_73.f_1 = 1;
			}
		}
	}
}

int func_407(float fParam0)//Position - 0x30C86
{
	int iVar0;
	if (iLocal_364 < (iLocal_362 - 1))
	{
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_348, Local_363[iLocal_364 /*3*/], &iVar0);
		if (iVar0 < iLocal_351)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_363[iLocal_364 /*3*/], true) > fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_424(int iParam0)//Position - 0x3171A
{
	func_437(1, 1);
	HUD::CLEAR_PRINTS();
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
	func_436(0, 1);
	HUD::DISPLAY_RADAR(true);
	AUDIO::STOP_SOUND(iLocal_371);
	iLocal_372 = 0;
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
	iLocal_327 = 0;
	iLocal_71 = 0;
	__LIB_0__::func_714(&iLocal_357);
	__LIB_0__::func_714(&iLocal_358);
	GRAPHICS::DELETE_CHECKPOINT(iLocal_359);
	if (__LIB_0__::func_75())
	{
		__LIB_17__::func_32("Stopping scripted convo at jump_to_stage");
		__LIB_0__::func_429();
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_76);
	PED::ADD_RELATIONSHIP_GROUP("FRIENDLIES", &iLocal_76);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_76, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_76);
	STREAMING::REQUEST_MODEL(joaat("IG_MaryAnn"));
	while (!STREAMING::HAS_MODEL_LOADED(joaat("IG_MaryAnn")))
	{
		SYSTEM::WAIT(0);
	}
	func_5();
	func_435();
	iLocal_276 = MISC::GET_GAME_TIMER();
	iLocal_281 = MISC::GET_GAME_TIMER();
	iLocal_277 = 0;
	iLocal_244 = PED::CREATE_PED(26, joaat("IG_MaryAnn"), -1865.9f, -448.81f, 45.13f, -143.87f, true, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_244, iLocal_76);
	PED::SET_PED_MOVEMENT_CLIPSET(iLocal_244, "FEMALE_FAST_RUNNER", 0.25f);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_244, 4, 1, 0, 0);
	__LIB_0__::func_222(&uLocal_78, 3, iLocal_244, "MARYANN", 0, 1);
	if (iParam0 <= 3)
	{
		iLocal_248 = 1800;
		iLocal_249 = 4500;
	}
	if (iParam0 == 0)
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_244, 0f);
			AUDIO::STOP_AUDIO_SCENE("FANATIC_MIX_SCENE");
		}
	}
	else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
	{
		AUDIO::START_AUDIO_SCENE("FANATIC_MIX_SCENE");
		if (__LIB_0__::func_121(iLocal_244))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_244, "FANATIC_MIX_MARY_ANNE", 0f);
		}
	}
	switch (iParam0)
	{
		case 0:
			__LIB_14__::func_851("ef_1_rcm", 0);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_17__::func_32("Trying to set Mary Ann component variation");
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Mary_Ann", iLocal_244, joaat("CS_MaryAnn"));
			}
			iLocal_364 = 0;
			iLocal_365 = 1;
			PED::REMOVE_RELATIONSHIP_GROUP(iLocal_76);
			func_4(0);
			func_434();
			func_433();
			func_432();
			iLocal_55 = 0;
			iLocal_56 = 1;
			break;
		case 1:
			iLocal_364 = 0;
			iLocal_365 = 1;
			if (!__LIB_0__::func_324())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1878.2344f, -439.6985f, 45.0299f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 241.0468f);
			}
			MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 7f, 0);
			ENTITY::SET_ENTITY_COORDS(iLocal_244, -1869.24f, -444.99f, 45.17f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_244, -143.87f);
			func_4(0);
			func_434();
			func_433();
			func_432();
			func_370(2, 1);
			if (!__LIB_0__::func_324())
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), true, 0, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 5000, 0f, true, false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
			break;
		case 2:
			iLocal_364 = 3;
			iLocal_365 = 4;
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1731.05f, -549.78f, 36.4f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 104.26f);
			TASK::CLEAR_PED_TASKS(iLocal_244);
			ENTITY::SET_ENTITY_COORDS(iLocal_244, -1732.8805f, -551.76324f, 36.5f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_244, 115.26f);
			func_4(0);
			MISC::CLEAR_AREA_OF_VEHICLES(-1806.4955f, -525.8696f, 29.92591f, 100f, false, false, false, false, false, false, 0);
			func_434();
			func_433();
			func_432();
			func_370(3, 1);
			break;
		case 3:
			iLocal_364 = 5;
			iLocal_365 = 6;
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1832.52f, -519.37f, 27.89f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 162.59f);
			TASK::CLEAR_PED_TASKS(iLocal_244);
			ENTITY::SET_ENTITY_COORDS(iLocal_244, -1833.81f, -523.7f, 28.14f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_244, 172.66f);
			func_434();
			while (!func_327() || !func_329())
			{
				SYSTEM::WAIT(0);
			}
			func_430();
			func_326(1);
			func_330();
			func_432();
			func_4(1);
			func_370(4, 1);
			break;
		case 4:
			iLocal_364 = 6;
			iLocal_365 = 7;
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1850.1f, -592.21f, 18.2f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 124.19f);
			TASK::CLEAR_PED_TASKS(iLocal_244);
			ENTITY::SET_ENTITY_COORDS(iLocal_244, -1849.61f, -592.9f, 18.2f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_244, 135.16f);
			func_434();
			while (!func_327() || !func_329())
			{
				SYSTEM::WAIT(0);
			}
			func_430();
			func_326(0);
			func_330();
			if (__LIB_0__::func_692(iLocal_329))
			{
				EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(97 /*EVENT_SHOCKING_INJURED_PED*/, iLocal_329, -1f);
			}
			func_432();
			func_4(1);
			if (func_427(1))
			{
				__LIB_2__::func_859(&uLocal_78, "FAN1AU", "FAN1_BCHB", 7, 0, 0, 0);
			}
			else
			{
				__LIB_2__::func_859(&uLocal_78, "FAN1AU", "FAN1_BCHA", 7, 0, 0, 0);
			}
			func_370(5, 1);
			break;
		case 5:
			iLocal_364 = 8;
			iLocal_365 = 9;
			func_434();
			while (!func_327() || !func_329())
			{
				SYSTEM::WAIT(0);
			}
			func_430();
			func_326(1);
			func_330();
			func_432();
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_356, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 19.95f);
			if (__LIB_0__::func_692(iLocal_244))
			{
				TASK::CLEAR_PED_TASKS(iLocal_244);
				ENTITY::SET_ENTITY_COORDS(iLocal_244, -1986.93f, -526.39f, 11.7f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_244, 44.46f);
			}
			func_4(1);
			func_370(6, 1);
			break;
		case 6:
			iLocal_364 = 8;
			iLocal_365 = 9;
			func_434();
			while (!func_327() || !func_329())
			{
				SYSTEM::WAIT(0);
			}
			func_430();
			func_326(1);
			func_330();
			func_432();
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2001.27f, -514.18f, 11f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 19.95f);
			if (__LIB_0__::func_692(iLocal_244))
			{
				TASK::CLEAR_PED_TASKS(iLocal_244);
				ENTITY::SET_ENTITY_COORDS(iLocal_244, -1986.93f, -526.39f, 11.7f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_244, 44.46f);
			}
			func_4(1);
			func_370(6, 1);
			break;
	}
	func_331(iLocal_244);
	func_331(PLAYER::PLAYER_PED_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_244) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		func_300();
		func_383();
	}
	if (__LIB_0__::func_324())
	{
		__LIB_17__::func_32("JUMP_TO_STAGE: replay being set up");
		__LIB_0__::func_433(0, -1, 1);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 5000, 0f, true, false);
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), true, 0, false);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		SYSTEM::WAIT(1000);
		__LIB_17__::func_398(1, 1, 1);
	}
	else
	{
		__LIB_17__::func_32("JUMP_TO_STAGE: replay not being set up");
		if (iLocal_56 == 1)
		{
			while (!__LIB_14__::func_740(1, 1093140480, 0))
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (__LIB_0__::func_121(iLocal_244))
					{
						__LIB_17__::func_32("Trying to set Mary Ann component variation");
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Mary_Ann", iLocal_244, joaat("CS_MaryAnn"));
					}
				}
				__LIB_14__::func_851("ef_1_rcm", 0);
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			SYSTEM::WAIT(1000);
			__LIB_17__::func_398(1, 1, 1);
		}
	}
}

int func_427(int iParam0)//Position - 0x31F51
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
		case 2:
			if (func_428(iParam0, 12))
			{
				return 1;
			}
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (iVar0 != 12)
				{
					if (!func_428(iParam0, iVar0))
					{
						return 0;
					}
				}
				iVar0++;
			}
			return 1;
			break;
		case 3:
			if (func_214(PLAYER::PLAYER_PED_ID(), 12, 6))
			{
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_428(int iParam0, int iParam1)//Position - 0x31FCB
{
	int iVar0;
	if (iParam1 != 14)
	{
		iVar0 = func_107(PLAYER::PLAYER_PED_ID(), iParam1, -1);
	}
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 3:
					if ((((((iVar0 == 69 || (iVar0 >= 17 && iVar0 <= 32)) || iVar0 == 69) || (iVar0 >= 77 && iVar0 <= 84)) || (iVar0 >= 85 && iVar0 <= 90)) || (iVar0 >= 113 && iVar0 <= 128)) || (iVar0 >= 171 && iVar0 <= 173))
					{
						return 1;
					}
					break;
				case 4:
					if (((iVar0 == 40 || (iVar0 >= 41 && iVar0 <= 45)) || (iVar0 >= 89 && iVar0 <= 91)) || (iVar0 >= 96 && iVar0 <= 111))
					{
						return 1;
					}
					break;
				case 6:
					if (((iVar0 == 6 || iVar0 == 13) || iVar0 == 7) || (iVar0 >= 20 && iVar0 <= 29))
					{
						return 1;
					}
					break;
				case 8:
					if (((iVar0 == 0 || iVar0 == 10) || iVar0 == 11) || iVar0 == 16)
					{
						return 1;
					}
					break;
				case 9:
					if (iVar0 == 0)
					{
						return 1;
					}
					break;
				case 12:
					if (iVar0 == 13 || iVar0 == 9)
					{
						return 1;
					}
					break;
				case 14:
					iVar0 = func_107(PLAYER::PLAYER_PED_ID(), iParam1, 1);
					if ((((((iVar0 == 58 || (iVar0 >= 70 && iVar0 <= 79)) || iVar0 == 61) || (iVar0 >= 62 && iVar0 <= 69)) || (iVar0 >= 80 && iVar0 <= 89)) || (iVar0 >= 91 && iVar0 <= 102)) || (iVar0 >= 103 && iVar0 <= 110))
					{
						return 1;
					}
					if (!__LIB_17__::func_397(PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
					break;
				default:
					return 1;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 3:
					if ((((((((iVar0 >= 0 && iVar0 <= 15) || (iVar0 >= 18 && iVar0 <= 26)) || iVar0 == 53) || (iVar0 >= 54 && iVar0 <= 69)) || (iVar0 >= 79 && iVar0 <= 94)) || iVar0 == 95) || (iVar0 >= 120 && iVar0 <= 135)) || (iVar0 >= 162 && iVar0 <= 177))
					{
						return 1;
					}
					break;
				case 4:
					if (((iVar0 == 17 || iVar0 == 33) || (iVar0 >= 54 && iVar0 <= 61)) || iVar0 == 91)
					{
						return 1;
					}
					break;
				case 6:
					if ((iVar0 == 8 || iVar0 == 11) || iVar0 == 34)
					{
						return 1;
					}
					break;
				case 8:
					if (((iVar0 == 0 || iVar0 == 1) || iVar0 == 10) || iVar0 == 15)
					{
						return 1;
					}
					break;
				case 9:
					if (iVar0 == 0 || iVar0 == 7)
					{
						return 1;
					}
					break;
				case 12:
					if (iVar0 == 5 || iVar0 == 9)
					{
						return 1;
					}
					break;
				case 14:
					iVar0 = func_107(PLAYER::PLAYER_PED_ID(), iParam1, 1);
					if (((((((iVar0 == 89 || (iVar0 >= 100 && iVar0 <= 109)) || iVar0 == 111) || (iVar0 >= 113 && iVar0 <= 122)) || (iVar0 >= 123 && iVar0 <= 132)) || (iVar0 >= 133 && iVar0 <= 142)) || (iVar0 >= 90 && iVar0 <= 99)) || (iVar0 >= 143 && iVar0 <= 152))
					{
						return 1;
					}
					if (!__LIB_17__::func_397(PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
					break;
				default:
					return 1;
					break;
			}
			break;
		default:
			break;
	}
	return 0;
}

void func_430()//Position - 0x324A9
{
	if (!__LIB_0__::func_121(iLocal_344))
	{
		iLocal_344 = PED::CREATE_PED(26, joaat("A_C_Rottweiler"), Local_345, fLocal_346, true, true);
		PED::SET_PED_CAN_RAGDOLL(iLocal_344, true);
	}
}

void func_432()//Position - 0x324ED
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_SalvaGoon_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_326);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_Beach_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_Y_Beach_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_Rottweiler"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_BayWatch_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_MaryAnn"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_307);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blazer2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("banshee"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("regina"));
}

void func_433()//Position - 0x32554
{
	STREAMING::REQUEST_MODEL(joaat("G_M_Y_SalvaGoon_01"));
	STREAMING::REQUEST_MODEL(joaat("banshee"));
	STREAMING::REQUEST_MODEL(joaat("regina"));
	while ((!STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_SalvaGoon_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("banshee"))) || !STREAMING::HAS_MODEL_LOADED(joaat("regina")))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA_OF_VEHICLES(1829.3843f, -516.19f, 27.85739f, 7f, false, false, false, false, false, false, 0);
	if (!__LIB_0__::func_695(Local_322.f_2))
	{
		Local_322.f_5 = { -1833.33f, -513.3883f, 28.210709f };
		Local_322.f_11 = 286.343f;
		Local_322.f_8 = { -1721.02f, -559.7f, 37.46f };
		Local_322.f_12 = 18f;
		Local_322.f_4 = joaat("banshee");
		Local_322.f_2 = VEHICLE::CREATE_VEHICLE(Local_322.f_4, Local_322.f_5, Local_322.f_11, true, true, false);
		VEHICLE::SET_VEHICLE_COLOURS(Local_322.f_2, 1, 1);
		Local_322.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_322.f_2, 4, joaat("G_M_Y_SalvaGoon_01"), -1, true, true);
		Local_322.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_322.f_2, 4, joaat("G_M_Y_SalvaGoon_01"), 0, true, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_322.f_1, 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_322.f_1, 20, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_322.f_0, 17, true);
	}
	if (!__LIB_0__::func_695(Local_324.f_2))
	{
		Local_324.f_5 = { -2000.79f, -494.35f, 11.09f };
		Local_324.f_11 = 321.61f;
		Local_324.f_8 = { -1719.08f, -559.41f, 36.33f };
		Local_324.f_12 = 12f;
		Local_324.f_4 = joaat("regina");
		Local_324.f_2 = VEHICLE::CREATE_VEHICLE(Local_324.f_4, Local_324.f_5, Local_324.f_11, true, true, false);
		Local_324.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_324.f_2, 4, joaat("G_M_Y_SalvaGoon_01"), -1, true, true);
		Local_324.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_324.f_2, 4, joaat("G_M_Y_SalvaGoon_01"), 0, true, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_324.f_0, 17, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_324.f_1, 17, true);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_SalvaGoon_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("banshee"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("regina"));
}

void func_434()//Position - 0x32764
{
	STREAMING::REQUEST_ANIM_DICT("rcmfanatic1");
	STREAMING::REQUEST_ANIM_DICT("rcmfanatic1celebrate");
	STREAMING::REQUEST_ANIM_DICT("rcmfanatic1yell");
	STREAMING::REQUEST_ANIM_DICT("move_f@runner");
	STREAMING::REQUEST_ANIM_SET("FEMALE_FAST_RUNNER");
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_348);
	TASK::REQUEST_WAYPOINT_RECORDING("Fanatic1RollingStart");
	HUD::REQUEST_ADDITIONAL_TEXT("FATIC1", 0);
	STREAMING::REQUEST_MODEL(joaat("IG_MaryAnn"));
	while ((((((((!STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1") || !STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1celebrate")) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1yell")) || !STREAMING::HAS_ANIM_DICT_LOADED("move_f@runner")) || !STREAMING::HAS_ANIM_SET_LOADED("FEMALE_FAST_RUNNER")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_348)) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fanatic1RollingStart")) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) || !STREAMING::HAS_MODEL_LOADED(joaat("IG_MaryAnn")))
	{
		__LIB_17__::func_32("Loading other assets");
		SYSTEM::WAIT(0);
	}
}

void func_435()//Position - 0x3284C
{
	iLocal_279 = 0;
	iLocal_277 = 0;
	iLocal_276 = MISC::GET_GAME_TIMER();
	iLocal_281 = MISC::GET_GAME_TIMER();
	iLocal_283 = MISC::GET_GAME_TIMER();
	iLocal_282 = 0;
	Local_274.f_1 = 0;
	Local_270.f_1 = 0;
	Local_272.f_1 = 0;
	Local_284[0 /*5*/].f_2 = 0;
	Local_284[1 /*5*/].f_2 = 0;
	Local_284[2 /*5*/].f_2 = 0;
	Local_298.f_2 = 0;
	Local_295.f_2 = 0;
	Local_301.f_2 = 0;
	Local_285.f_2 = 0;
	Local_286.f_2 = 0;
	Local_289.f_2 = 0;
	Local_292.f_2 = 0;
	Local_74.f_1 = 0;
	Local_73.f_1 = 0;
	Local_75.f_1 = 0;
	iLocal_262 = 0;
	iLocal_264 = 0;
}

void func_436(bool bParam0, bool bParam1)//Position - 0x328E3
{
	HUD::CLEAR_HELP(true);
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	CAM::SET_WIDESCREEN_BORDERS(false, 500);
	CAM::RENDER_SCRIPT_CAMS(false, bParam0, 3000, true, false, 0);
	if (CAM::DOES_CAM_EXIST(iLocal_312))
	{
		CAM::SET_CAM_ACTIVE(iLocal_312, false);
		CAM::DESTROY_CAM(iLocal_312, false);
	}
	if (bParam1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-5f, 1f);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
}

void func_437(bool bParam0, bool bParam1)//Position - 0x32957
{
	if (bParam0)
	{
		__LIB_17__::func_399(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_303(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_440()//Position - 0x32A13
{
	HUD::CLEAR_PRINTS();
	__LIB_17__::func_32("IN INIT");
	sLocal_348 = "Fanatic1MaryAnn";
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1877.0222f, -439.5663f, 47.061394f, -1809.6149f, -493.49396f, 39.58508f, 12.75f, true, false, false, false, false, 0, 0);
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1816.8652f, -492.40805f, 42.83916f, -1792.1584f, -470.2095f, 38.512688f, 12.75f, true, false, false, false, false, 0, 0);
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1792.1937f, -470.23193f, 42.51471f, -1726.9264f, -552.83746f, 35.24149f, 12.75f, true, false, false, false, false, 0, 0);
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1728.0237f, -561.8721f, 39.49737f, -1835.2845f, -514.9333f, 26.335573f, 19.75f, true, false, false, false, false, 0, 0);
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1822.2256f, -535.3092f, 31.955553f, -1890.2783f, -616.27637f, 9.657555f, 39.75f, true, false, false, false, false, 0, 0);
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1867.2428f, -622.763f, 13.383512f, -2013.267f, -497.97995f, 9.736394f, 23.75f, true, false, false, false, false, 0, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_76);
	PED::ADD_RELATIONSHIP_GROUP("FRIENDLIES", &iLocal_76);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_76, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_76);
	__LIB_0__::func_222(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	func_434();
	if (__LIB_0__::func_121(iLocal_244))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_244, iLocal_76);
		PED::SET_PED_SEEING_RANGE(iLocal_244, 25f);
		PED::SET_PED_MOVEMENT_CLIPSET(iLocal_244, "FEMALE_FAST_RUNNER", 0.25f);
	}
	func_441();
	func_433();
	func_4(0);
	iLocal_341 = PED::ADD_SCENARIO_BLOCKING_AREA(-1979.062f, -534.325f, 10.4558f, -1973.332f, -528.2116f, 13.7014f, false, true, true, true);
	iLocal_342 = PED::ADD_SCENARIO_BLOCKING_AREA(-1914.7804f, -591.1177f, 9.8302f, -1910.3289f, -586.7218f, 12.0195f, false, true, true, true);
	iLocal_343 = PED::ADD_SCENARIO_BLOCKING_AREA(-1991.0669f, -523.592f, 10.4269f, -1989.1447f, -521.6824f, 11.3735f, false, true, true, true);
	Local_314.f_0 = 1;
	Local_314.f_1 = "rcmfanatic1out_of_breath";
	Local_314.f_2 = "p_zero_tired_enter";
	Local_314.f_17 = 2f;
	Local_314.f_18 = -8f;
	Local_314.f_20 = 48;
	Local_314.f_16 = MISC::GET_HASH_KEY("UpperbodyFeathered_NoLefttArm_filter");
	Local_316.f_0 = 1;
	Local_316.f_1 = "rcmfanatic1out_of_breath";
	Local_316.f_2 = "p_zero_tired_01";
	Local_316.f_17 = 8f;
	Local_316.f_18 = -8f;
	Local_316.f_20 = 48;
	Local_316.f_16 = MISC::GET_HASH_KEY("UpperbodyFeathered_NoLefttArm_filter");
	Local_318.f_0 = 1;
	Local_318.f_1 = "rcmfanatic1out_of_breath";
	Local_318.f_2 = "p_zero_tired_02";
	Local_318.f_17 = 8f;
	Local_318.f_18 = -8f;
	Local_318.f_20 = 48;
	Local_318.f_16 = MISC::GET_HASH_KEY("UpperbodyFeathered_NoLefttArm_filter");
	Local_320.f_0 = 1;
	Local_320.f_1 = "rcmfanatic1out_of_breath";
	Local_320.f_2 = "p_zero_tired_01";
	Local_320.f_17 = 8f;
	Local_320.f_18 = -1000f;
	Local_320.f_20 = 49;
	Local_320.f_16 = MISC::GET_HASH_KEY("UpperbodyFeathered_NoLefttArm_filter");
	Local_354 = { -1730.2838f, -551.7269f, 36.3939f };
	Local_355 = { -1870.6702f, -616.2423f, 10.8184f };
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_348, &iLocal_350);
	Local_363[0 /*3*/] = { -1868.36f, -447.84f, 45.2f };
	Local_363[1 /*3*/] = { -1835.81f, -468.73f, 43.45f };
	Local_363[2 /*3*/] = { -1753.45f, -523.3f, 37.35f };
	Local_363[3 /*3*/] = { Local_354 };
	Local_363[4 /*3*/] = { -1755.65f, -558.99f, 36.11f };
	Local_363[5 /*3*/] = { -1828.99f, -516.33f, 27.87f };
	Local_363[6 /*3*/] = { -1819.2f, -555.86f, 15.77f };
	Local_363[7 /*3*/] = { Local_355 };
	Local_363[8 /*3*/] = { -1918.04f, -583.45f, 10.76f };
	Local_363[9 /*3*/] = { Local_356 };
	iLocal_362 = Local_363.f_0;
	sLocal_263[0] = "FAN1_FALLB_1";
	sLocal_263[1] = "FAN1_FALLB_2";
	sLocal_266[0] = "FAN1_FAST_1";
	sLocal_266[1] = "FAN1_FAST_2";
	sLocal_266[2] = "FAN1_FAST_3";
	Local_270.f_0 = "FAN1_RUNIN";
	Local_272.f_0 = "FAN1_RUNIN2";
	Local_274.f_0 = "FAN1_OVERT";
	Local_284[0 /*5*/].f_1 = "FAN1_PUSH_1";
	Local_284[1 /*5*/].f_1 = "FAN1_PUSH_2";
	Local_284[2 /*5*/].f_1 = "FAN1_PUSH_3";
	Local_298.f_1 = "FAN1_CHEAT_1";
	Local_298.f_0 = "FAN1_CHEAT";
	Local_295.f_1 = "FAN1_CHEAT_2";
	Local_295.f_0 = "FAN1_CHEAT";
	Local_301.f_1 = "FAN1_CATCHC_1";
	Local_301.f_0 = "FAN1_CATCHC";
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (func_427(1))
		{
			Local_285.f_0 = "FAN1_STRTB";
			Local_292.f_0 = "FAN1_BCHB";
		}
		else
		{
			Local_285.f_0 = "FAN1_STRTA";
			Local_292.f_0 = "FAN1_BCHA";
		}
	}
	Local_286.f_0 = "FAN1_RD1";
	Local_289.f_0 = "FAN1_RD2";
	Local_74.f_0 = "FATIC1_7";
	Local_73.f_0 = "FATIC1_6";
	Local_75.f_0 = "FATIC1_H";
	__LIB_17__::func_32("end of init");
}

void func_441()//Position - 0x32F44
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_348))
	{
		iVar0 = 0;
		TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_348, &iVar0);
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= iVar0)
		{
			Var2 = { 0f, 0f, 0f };
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_348, iVar1, &Var2);
			MISC::CLEAR_AREA_OF_VEHICLES(Var2, 4f, false, false, false, false, false, false, 0);
			__LIB_17__::func_31("Clearing area around waypoint", iVar1);
			iVar1++;
		}
	}
}

int func_447(var uParam0)//Position - 0x3319B
{
	int iVar0[1];
	int iVar1;
	bool bVar2;
	iVar0[0] = uLocal_53;
	switch (iLocal_52)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 14f;
			uParam0->f_27 = 1;
			StringCopy(&(uParam0->f_9), "EF_1_RCM", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_17__::func_28(&(uParam0->f_48), "rcmfanatic1", "ef_1_rcm_mary_ann_streching_base", 0);
			uParam0->f_48.f_5 = { -1878.223f, -440.51813f, 46.03983f };
			uParam0->f_48.f_8 = { 0f, 0f, 159.97f };
			iLocal_52 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !__LIB_14__::func_856(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_52 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_14__::func_842(&(uParam0->f_28[0]), 61, -1878.27f, -440.55f, 46.23f, 165.94f, "FANATIC LAUNCHER RC", 1))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_28[0], true, 1);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], true);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				iLocal_52 = 3;
			}
			break;
		case 3:
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_457()//Position - 0x33531
{
	int iVar0;
	__LIB_14__::func_841();
	if (__LIB_14__::func_843())
	{
		__LIB_17__::func_32("...Random Character Script was triggered so additional cleanup required");
	}
	if (__LIB_0__::func_121(iLocal_244))
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_244, 0);
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_76);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_244))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_244, 0f);
		}
		AUDIO::STOP_AUDIO_SCENE("FANATIC_MIX_SCENE");
	}
	AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
	__LIB_0__::func_106(&iLocal_304);
	__LIB_0__::func_124(&iLocal_244, 1, 0, 1);
	__LIB_0__::func_714(&iLocal_357);
	__LIB_0__::func_714(&iLocal_245);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		__LIB_0__::func_124(&(Local_325[iVar0 /*12*/]), 1, 0, 1);
		iVar0++;
	}
	__LIB_0__::func_124(&Local_322, 1, 0, 1);
	if (__LIB_0__::func_121(Local_322.f_1))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_322.f_1, 3, true);
		__LIB_0__::func_124(&(Local_322.f_1), 1, 0, 1);
	}
	__LIB_0__::func_106(&(Local_322.f_2));
	__LIB_0__::func_124(&iLocal_344, 1, 0, 1);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_348);
	TASK::REMOVE_WAYPOINT_RECORDING("Fanatic1RollingStart");
	STREAMING::REMOVE_ANIM_DICT("rcmfanatic1out_of_breath");
	STREAMING::REMOVE_ANIM_DICT("move_f@runner");
	STREAMING::REMOVE_ANIM_DICT("rcmfanatic1");
	STREAMING::REMOVE_ANIM_SET("FEMALE_FAST_RUNNER");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_326);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_Beach_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_Y_Beach_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("banshee"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_307);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_Rottweiler"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blazer2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_BayWatch_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_SalvaGoon_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_TrampBeac_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_MaryAnn"));
	func_467();
	func_4(1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1842.3f, -517.7f, 26.68f, -1823.52f, -515.43f, 29.27f, true, true);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-1864.08f, -632.07f, 10.09f, -1863.31f, -631.53f, 10.15f, 0);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-1820.57f, -552.41f, 17.4f, -1865.76f, -617.48f, 10.58f, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_341, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_342, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_343, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	AUDIO::STOP_SOUND(iLocal_371);
	HUD::CLEAR_ADDITIONAL_TEXT(0, true);
	__LIB_12__::func_849(2, 0);
	__LIB_14__::func_871(&Local_54, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_467()//Position - 0x338CC
{
	__LIB_0__::func_124(&iLocal_328, 1, 0, 1);
	__LIB_0__::func_124(&iLocal_329, 1, 0, 1);
	__LIB_0__::func_124(&iLocal_330, 1, 0, 1);
	__LIB_0__::func_124(&iLocal_331, 1, 0, 1);
	STREAMING::REMOVE_ANIM_DICT("mini@cpr@char_a@cpr_def");
	STREAMING::REMOVE_ANIM_DICT("mini@cpr@char_b@cpr_def");
	STREAMING::REMOVE_ANIM_DICT("mini@cpr@char_a@cpr_str");
	STREAMING::REMOVE_ANIM_DICT("mini@cpr@char_b@cpr_str");
	STREAMING::REMOVE_ANIM_DICT("rcmfanatic1");
	PATHFIND::SET_PED_PATHS_IN_AREA(-1875.16f, -630.82f, 10f, -1867.9f, -625.78f, 10.25f, true, 0);
	PATHFIND::DISABLE_NAVMESH_IN_AREA(-1875.16f, -630.82f, 10f, -1867.9f, -625.78f, 10.25f, false);
}

