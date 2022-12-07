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
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<4> Local_47[10];
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	struct<61> Local_53 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_54 = 16;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
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
	var uLocal_221 = -1;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 1000;
	var uLocal_229 = 1000;
	var uLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	var uLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	float fLocal_267 = 0f;
	float fLocal_268 = 0f;
	float fLocal_269 = 0f;
	float fLocal_270 = 0f;
	float fLocal_271 = 0f;
	float fLocal_272 = 0f;
	struct<3> Local_273 = { 0, 0, 0 } ;
	struct<3> Local_274 = { 0, 0, 0 } ;
	struct<3> Local_275 = { 0, 0, 0 } ;
	struct<3> Local_276 = { 0, 0, 0 } ;
	struct<3> Local_277 = { 0, 0, 0 } ;
	int iLocal_278 = 0;
	bool bLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	bool bLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	bool bLocal_306 = 0;
	bool bLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	bool bLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	char* sLocal_326 = NULL;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	struct<5> Local_331 = { 0, 0, 0, 0, 0 } ;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 21;
	var uLocal_335 = 6;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int* iLocal_343 = NULL;
	int* iLocal_344 = NULL;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int* iLocal_347 = NULL;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int* iLocal_350 = NULL;
	int* iLocal_351 = NULL;
	int* iLocal_352 = NULL;
	int* iLocal_353 = NULL;
	int* iLocal_354 = NULL;
	var uLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_358[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int* iLocal_359 = NULL;
	int* iLocal_360 = NULL;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	struct<61> Local_364 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	iLocal_44 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_45 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	uLocal_50 = __LIB_2__::func_108(58);
	iLocal_51 = joaat("felon2");
	Local_53 = { ScriptParam_364 };
	__LIB_20__::func_264(&Local_53);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_38__::func_39(1);
		func_642();
	}
	if (__LIB_0__::func_294())
	{
		Global_78564 = 1;
		iLocal_49 = 0;
		while (!func_637(&Local_53))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_10__::func_700(&Local_53, 0, 1);
		Global_78564 = 0;
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_52))
	{
		PED::TAKE_OWNERSHIP_OF_SYNCHRONIZED_SCENE(iLocal_52);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_CTD", 0);
		__LIB_35__::func_898(Local_53.f_9, 0, 0, 0, 0, 0);
		if (iLocal_329 != 0 && iLocal_329 != 2)
		{
			func_619();
			if (iLocal_329 != 11)
			{
				func_618();
			}
			func_617();
			func_597();
		}
		switch (iLocal_329)
		{
			case 0:
				func_500();
				break;
			case 1:
				func_434();
				break;
			case 2:
				func_420();
				break;
			case 3:
				func_405();
				break;
			case 4:
				func_381();
				break;
			case 5:
				func_258();
				break;
			case 6:
				func_255();
				break;
			case 7:
				func_47();
				break;
			case 11:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x1C1
{
	switch (iLocal_330)
	{
		case 0:
			func_46();
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_326))
			{
				__LIB_38__::func_39(1);
			}
			else
			{
				__LIB_39__::func_861(sLocal_326, 1);
			}
			iLocal_330 = 1;
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				__LIB_32__::func_824(568.7569f, -1770.0721f, 27.893454f, 566.24915f, -1768.9236f, 30.143578f, 2.5f, 573.5463f, -1759.4382f, 28.1695f, 354.0835f, 1, 1, 1, 0, 0);
			}
			if (__LIB_0__::func_204())
			{
				func_27();
				func_642();
			}
			else if (iLocal_249 == 1)
			{
				if (__LIB_1__::func_197(Local_53.f_28[0]))
				{
					__LIB_35__::func_901(&uLocal_54, "JOSH2AU", "JOSH2_SCARE", "JOSH2_SCARE_1", 8, 0, 0);
					iLocal_249 = 2;
				}
			}
			break;
	}
}

void func_27()//Position - 0xBC7
{
	HUD::CLEAR_PRINTS();
	__LIB_0__::func_296();
	iLocal_328 = 0;
	iLocal_234 = 0;
	iLocal_236 = 0;
	iLocal_237 = 0;
	iLocal_233 = 0;
	iLocal_248 = 0;
	iLocal_278 = 0;
	bLocal_279 = false;
	iLocal_280 = 0;
	iLocal_281 = 0;
	iLocal_282 = 0;
	iLocal_284 = 0;
	iLocal_242 = 0;
	iLocal_287 = 0;
	iLocal_288 = 0;
	iLocal_253 = 0;
	iLocal_243 = 0;
	iLocal_244 = 0;
	iLocal_255 = 0;
	iLocal_289 = 0;
	iLocal_292 = 0;
	iLocal_293 = 0;
	iLocal_294 = 0;
	iLocal_295 = 0;
	iLocal_290 = 0;
	bLocal_291 = false;
	iLocal_296 = 0;
	iLocal_297 = 0;
	iLocal_298 = 0;
	iLocal_299 = 0;
	iLocal_300 = 0;
	iLocal_301 = 0;
	iLocal_302 = 0;
	iLocal_303 = 0;
	iLocal_314 = 0;
	iLocal_315 = 0;
	iLocal_304 = 0;
	iLocal_305 = 0;
	bLocal_317 = false;
	iLocal_262 = 0;
	bLocal_306 = false;
	iLocal_263 = 0;
	iLocal_264 = 0;
	bLocal_307 = false;
	iLocal_308 = 0;
	iLocal_327 = 0;
	__LIB_11__::func_32(&iLocal_341);
	__LIB_11__::func_32(&iLocal_342);
	__LIB_11__::func_32(&iLocal_344);
	__LIB_11__::func_32(&iLocal_343);
	__LIB_11__::func_32(&iLocal_345);
	__LIB_11__::func_32(&iLocal_346);
	__LIB_0__::func_106(&(Local_53.f_35[0]));
	if (iLocal_286 == 1)
	{
		iLocal_286 = 0;
	}
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_276, Local_277, 100f, false, true, true);
	__LIB_0__::func_0(&iLocal_349);
	__LIB_0__::func_0(&iLocal_351);
	__LIB_0__::func_0(&iLocal_359);
	__LIB_0__::func_0(&iLocal_360);
	__LIB_0__::func_0(&(Local_53.f_28[0]));
	__LIB_0__::func_0(&iLocal_350);
	__LIB_0__::func_523(&iLocal_352);
	__LIB_0__::func_523(&iLocal_353);
	__LIB_0__::func_523(&iLocal_354);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_355);
}

void func_46()//Position - 0x18F4
{
	__LIB_0__::func_523(&iLocal_352);
	__LIB_0__::func_523(&iLocal_353);
	__LIB_0__::func_523(&iLocal_354);
}

void func_47()//Position - 0x1911
{
	struct<3> Var0;
	struct<6> Var1;
	if (__LIB_1__::func_197(iLocal_349))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_349, true) };
		if (MISC::IS_BULLET_IN_AREA(Var0, 10f, true))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_REACT_AND_FLEE_PED")) != 1)
			{
				Var1 = { __LIB_9__::func_980() };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&Var1, "JOSH2_OUTRO_1") && !MISC::ARE_STRINGS_EQUAL(&Var1, "JOSH2_OUTRO_5"))
					{
						__LIB_6__::func_771();
					}
					else
					{
						__LIB_6__::func_833();
					}
				}
				PED::SET_PED_MOVEMENT_CLIPSET(iLocal_349, "MOVE_M@BAIL_BOND_NOT_TAZERED", 0.25f);
				TASK::TASK_REACT_AND_FLEE_PED(iLocal_349, PLAYER::PLAYER_PED_ID());
				iLocal_261 = MISC::GET_GAME_TIMER();
				bLocal_306 = true;
			}
		}
	}
	if (bLocal_306)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_261 + 5000)
		{
			PED::SET_PED_MOVEMENT_CLIPSET(iLocal_349, "MOVE_M@BAIL_BOND_NOT_TAZERED", 0.25f);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_349, 17, true);
			PED::SET_PED_KEEP_TASK(iLocal_349, true);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 2f, 0);
			func_52();
		}
		if (!__LIB_0__::func_75())
		{
			if (iLocal_262 < 3)
			{
				if (__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_SHOCKH", 7, 0, 0, 0))
				{
					iLocal_262++;
				}
			}
		}
	}
	else
	{
		if (MISC::GET_GAME_TIMER() > iLocal_252 + 2000)
		{
			if (!__LIB_0__::func_75())
			{
				if (bLocal_307)
				{
					iLocal_318 = 5;
				}
				if (iLocal_318 == 0)
				{
					if (__LIB_35__::func_901(&uLocal_54, "JOSH2AU", "JOSH2_OUTRO", "JOSH2_OUTRO_1", 9, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 3);
						AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
						iLocal_318++;
					}
				}
				else if (iLocal_318 == 1)
				{
					if (__LIB_35__::func_901(&uLocal_54, "JOSH2AU", "JOSH2_OUTRO", "JOSH2_OUTRO_3", 9, 0, 0))
					{
						AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
						iLocal_318++;
					}
				}
				else if (iLocal_318 == 2)
				{
					if (__LIB_35__::func_901(&uLocal_54, "JOSH2AU", "JOSH2_OUTRO", "JOSH2_OUTRO_5", 9, 0, 0))
					{
						AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
						iLocal_318++;
					}
				}
				else if (iLocal_318 == 3)
				{
					if (__LIB_35__::func_901(&uLocal_54, "JOSH2AU", "JOSH2_OUTRO", "JOSH2_OUTRO_7", 9, 0, 0))
					{
						AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
						iLocal_318++;
					}
				}
				else if (iLocal_318 == 4)
				{
					iLocal_318++;
				}
			}
		}
		if (__LIB_1__::func_197(iLocal_349))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_REACT_AND_FLEE_PED")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_REACT_AND_FLEE_PED")) == 0)
			{
				TASK::CLEAR_PED_TASKS(iLocal_349);
			}
			if (!PED::IS_PED_RAGDOLL(iLocal_349))
			{
				if (!PED::IS_PED_HEADTRACKING_PED(iLocal_349, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_349, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1)
				{
					if (!PED::IS_PED_FACING_PED(iLocal_349, PLAYER::PLAYER_PED_ID(), 45f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_349, PLAYER::PLAYER_PED_ID(), -1);
					}
				}
			}
			func_49(iLocal_349, 1106247680, 60000);
			if (__LIB_0__::func_508(iLocal_349, PLAYER::PLAYER_PED_ID(), 50f, 1))
			{
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			}
			__LIB_0__::func_523(&iLocal_353);
			PED::SET_PED_RESET_FLAG(iLocal_349, 187, true);
			if (MISC::GET_GAME_TIMER() < iLocal_252 + 9000 || __LIB_0__::func_75())
			{
				if (MISC::GET_GAME_TIMER() < iLocal_252 + 9000)
				{
					if (MISC::GET_GAME_TIMER() < iLocal_252 + 4500)
					{
						if (!PED::IS_PED_RAGDOLL(iLocal_349) && !bLocal_307)
						{
							PED::REQUEST_RAGDOLL_BOUNDS_UPDATE(iLocal_349, 10);
							PED::SET_PED_MOVEMENT_CLIPSET(iLocal_349, "MOVE_M@BAIL_BOND_NOT_TAZERED", 0.25f);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_349);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_349, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_349, -1, 0, 2);
							PED::SET_PED_KEEP_TASK(iLocal_349, true);
							PED::SET_PED_TO_RAGDOLL(iLocal_349, 2500, 3000, 1, true, true, false);
							PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iLocal_349, 0);
							PED::CREATE_NM_MESSAGE(true, 787);
							PED::GIVE_PED_NM_MESSAGE(iLocal_349);
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_349);
						}
					}
					else if (TASK::IS_PED_GETTING_UP(iLocal_349))
					{
						if (iLocal_289 == 0)
						{
							iLocal_245 = MISC::GET_GAME_TIMER();
							iLocal_289 = 1;
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_245 + 2200)
						{
						}
					}
					else if (iLocal_289 == 1)
					{
						if (!PED::IS_PED_RAGDOLL(iLocal_349))
						{
							if (!PED::IS_PED_HEADTRACKING_PED(iLocal_349, PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_349, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							}
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1)
							{
								if (!PED::IS_PED_FACING_PED(iLocal_349, PLAYER::PLAYER_PED_ID(), 90f))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_349, PLAYER::PLAYER_PED_ID(), -1);
								}
							}
						}
					}
				}
			}
			else
			{
				PED::SET_PED_MOVEMENT_CLIPSET(iLocal_349, "MOVE_M@BAIL_BOND_NOT_TAZERED", 0.25f);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_349, 17, true);
				TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_349, 1f);
				PED::SET_PED_KEEP_TASK(iLocal_349, true);
				if (__LIB_0__::func_121(iLocal_341))
				{
					VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(iLocal_341, false);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 0)
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_349, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
				}
				else if (iLocal_318 >= 5 && !__LIB_0__::func_75())
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_349, false);
					func_52();
				}
			}
		}
	}
}

void func_49(int iParam0, float fParam1, int iParam2)//Position - 0x1DE7
{
	if (__LIB_1__::func_197(iParam0))
	{
		if (ENTITY::GET_ENTITY_SPEED(iParam0) < 0.1f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_357[iLocal_250]))
			{
				iLocal_357[iLocal_250] = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(iParam0, true), fParam1, 0, 4);
				if (__LIB_1__::func_183(iLocal_357[iLocal_250]))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_357[iLocal_250], false))
					{
						iLocal_358[iLocal_250] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_357[iLocal_250], -1, false);
						if (__LIB_1__::func_197(iLocal_358[iLocal_250]))
						{
							if (PED::IS_PED_FACING_PED(iLocal_358[iLocal_250], iParam0, 180f))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_358[iLocal_250], joaat("SCRIPT_TASK_VEHICLE_TEMP_ACTION")) != 1)
								{
									TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_358[iLocal_250], iLocal_357[iLocal_250], 24, iParam2);
								}
							}
						}
						else
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_358[iLocal_250]))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_358[iLocal_250]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_357[iLocal_250]))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_357[iLocal_250]));
							}
						}
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_358[iLocal_250]))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_358[iLocal_250]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_357[iLocal_250]))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_357[iLocal_250]));
						}
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_358[iLocal_250]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_358[iLocal_250]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_357[iLocal_250]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_357[iLocal_250]));
					}
				}
			}
		}
	}
	iLocal_250++;
	if (iLocal_250 > 14)
	{
		iLocal_250 = 0;
	}
}

void func_52()//Position - 0x1FE9
{
	if (__LIB_1__::func_197(iLocal_349))
	{
		if (!bLocal_306)
		{
			__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_END", 7, 0, 0, 0);
		}
	}
	func_53(89, 0);
	func_642();
}

void func_53(int iParam0, bool bParam1)//Position - 0x201F
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_18__::func_205();
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
	__LIB_38__::func_136(iVar0, 0);
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
	__LIB_32__::func_577(iVar0, 1, 0, 0);
	__LIB_0__::func_46(0, 0);
	MemCopy(&sVar1, {__LIB_0__::func_339(iVar0)}, 4);
	__LIB_0__::func_44(&sVar1, __LIB_26__::func_250());
	func_81();
	if (BitTest(Global_113386.f_10016.f_25, 3))
	{
		__LIB_0__::func_18();
	}
	__LIB_35__::func_897();
	if (iParam0 == 210 || iParam0 == 211)
	{
		__LIB_24__::func_943(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		__LIB_24__::func_943(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		__LIB_24__::func_943(iParam0, 0, 0);
	}
	__LIB_0__::func_533();
}

void func_81()//Position - 0x31D1
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
			iVar3 = __LIB_18__::func_168(iVar1);
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
				if (func_198(iVar1, 14, iVar2))
				{
					func_82(iVar1, 14, iVar2);
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

int func_82(int iParam0, int iParam1, int iParam2)//Position - 0x3292
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
	Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_198(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { __LIB_18__::func_180(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_82(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { __LIB_18__::func_247(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_82(iParam0, 14, uVar5[iVar3]))
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
		uVar6 = { __LIB_18__::func_180(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
		}
	}
	if (func_125(iParam0, iVar0, &iVar7, 0))
	{
		func_85(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_83(iParam0, iVar0, &iVar7))
	{
		func_85(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_83(int iParam0, int iParam1, int iParam2)//Position - 0x344E
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_198(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_85(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x3515
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
										func_85(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_85(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, func_91(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_125(iParam0, iVar10, &iVar4, 1))
							{
								func_85(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_85(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_85(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_85(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_85(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_85(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_85(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_85(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_85(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_85(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_125(iParam0, iVar10, &iVar4, 0))
		{
			func_85(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_83(iParam0, iVar10, &iVar4))
		{
			func_85(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_91(int iParam0, int iParam1, int iParam2)//Position - 0x4553
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
				if (func_198(iParam0, iParam1, iVar0))
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
				if (func_198(iParam0, iParam1, iVar1))
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

int func_125(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xAE5B
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_198(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_198(int iParam0, int iParam1, int iParam2)//Position - 0x21663
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
				if (!func_198(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_198(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_198(iParam0, 14, iVar4))
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
			if (!func_198(iParam0, 14, uVar8[iVar7]))
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

void func_255()//Position - 0x28B18
{
	if (__LIB_1__::func_197(iLocal_349))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_REACT_AND_FLEE_PED")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_REACT_AND_FLEE_PED")) == 0)
		{
			TASK::CLEAR_PED_TASKS(iLocal_349);
		}
		func_49(iLocal_349, 1106247680, 60000);
		if (__LIB_0__::func_508(iLocal_349, PLAYER::PLAYER_PED_ID(), 50f, 1))
		{
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		}
		PED::SET_PED_RESET_FLAG(iLocal_349, 187, true);
		if (!PED::IS_PED_RAGDOLL(iLocal_349))
		{
			if (iLocal_283 == 1)
			{
			}
		}
		if (__LIB_8__::func_538(PLAYER::PLAYER_PED_ID(), iLocal_349) < 8f)
		{
			iLocal_252 = MISC::GET_GAME_TIMER();
			iLocal_329 = 7;
		}
	}
}

void func_258()//Position - 0x28C29
{
	struct<6> Var0;
	struct<3> Var1;
	struct<6> Var2;
	struct<6> Var3;
	struct<6> Var4;
	struct<6> Var5;
	struct<6> Var6;
	struct<6> Var7;
	struct<6> Var8;
	struct<6> Var9;
	func_380();
	MISC::SET_INSTANCE_PRIORITY_HINT(2);
	if (iLocal_278 == 0)
	{
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.6f);
	}
	if (iLocal_290 == 0)
	{
		if (__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_273, 2000f, 1))
		{
			__LIB_0__::func_0(&(Local_53.f_28[0]));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Josh"));
			iLocal_290 = 1;
		}
	}
	if (iLocal_293 == 1)
	{
		func_49(iLocal_349, 1106247680, 60000);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_359))
	{
		__LIB_0__::func_124(&iLocal_359, 1, 0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_Y_Fitness_02"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_360))
	{
		__LIB_0__::func_124(&iLocal_360, 1, 0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_Retriever"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_351))
	{
		__LIB_0__::func_124(&iLocal_351, 1, 0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_BevHills_01"));
	}
	__LIB_0__::func_106(&iLocal_347);
	__LIB_0__::func_106(&iLocal_343);
	__LIB_0__::func_106(&iLocal_344);
	if (__LIB_0__::func_294())
	{
		func_377();
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_1__::func_183(iLocal_341))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_349, iLocal_341, false))
			{
				__LIB_39__::func_907(&uLocal_219, iLocal_341, 0, 0, 1, 1, 1);
			}
			else
			{
				__LIB_9__::func_981(&uLocal_219, 0, 0);
			}
		}
		else
		{
			__LIB_9__::func_981(&uLocal_219, 0, 0);
		}
	}
	else
	{
		__LIB_9__::func_981(&uLocal_219, 0, 0);
	}
	if (!iLocal_315)
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			iLocal_315 = 1;
		}
	}
	if (__LIB_1__::func_183(iLocal_341))
	{
		if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_349, iLocal_341) || PED::IS_PED_BEING_JACKED(iLocal_349))
		{
			iLocal_278 = 1;
		}
	}
	if (__LIB_1__::func_197(iLocal_349))
	{
		if (iLocal_301 == 0 && FIRE::IS_ENTITY_ON_FIRE(iLocal_349))
		{
			if (ENTITY::GET_ENTITY_HEALTH(iLocal_349) > 160)
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_349, 160, 0);
				iLocal_301 = 1;
			}
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_353))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_349, 1) < 100f)
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_349, iLocal_341, false))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_349, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_349, -1, 0, 2);
					PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_349, false);
					iLocal_251 = MISC::GET_GAME_TIMER();
					__LIB_0__::func_523(&iLocal_352);
					__LIB_0__::func_210("JOSH2_04", 7500, 0);
					func_272(2, "Chase Avery", 1, 0, 0, 1);
					iLocal_353 = __LIB_10__::func_711(iLocal_349, 1, 0, 5);
					__LIB_0__::func_403(773, 0);
					HUD::SET_BLIP_SCALE(iLocal_353, 1f);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
					AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iLocal_349, "JOSH2_BCAA", "AVERY", "SPEECH_PARAMS_STANDARD", false);
				}
			}
		}
		else
		{
			__LIB_10__::func_618(iLocal_353, iLocal_349, 280f, 0.7f, 0);
		}
	}
	if (iLocal_237 == 0)
	{
		if (__LIB_1__::func_197(iLocal_350))
		{
			if (MISC::GET_GAME_TIMER() > iLocal_251 + 300)
			{
				if (iLocal_297 == 0)
				{
					TASK::TASK_PERFORM_SEQUENCE(iLocal_350, iLocal_356);
				}
				__LIB_0__::func_203(&uLocal_54, 7, iLocal_350, "Josh2Viewer", 0, 1);
				iLocal_238 = MISC::GET_GAME_TIMER();
				iLocal_237 = 1;
			}
		}
	}
	else if (iLocal_237 == 1)
	{
		if (__LIB_1__::func_183(iLocal_341))
		{
			if (__LIB_1__::func_197(iLocal_350))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_350, "rcmjosh2", "house_viewer_yelling", 3))
				{
					if (iLocal_299 == 0)
					{
						if (__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_VIEW", 7, 1, 0, 0))
						{
							iLocal_299 = 1;
						}
					}
				}
				else if (bLocal_279)
				{
					if (__LIB_4__::func_230(ENTITY::GET_ENTITY_HEADING(iLocal_350), 255f, 40f))
					{
						TASK::CLEAR_PED_TASKS(iLocal_350);
						TASK::TASK_PLAY_ANIM(iLocal_350, "rcmjosh2", "house_viewer_yelling", 2f, -8f, -1, 0, 0f, false, false, false);
					}
				}
				if (iLocal_300 == 0)
				{
				}
			}
			if (MISC::GET_GAME_TIMER() > iLocal_251 + 8000)
			{
				__LIB_0__::func_124(&iLocal_350, 1, 0, 1);
			}
			if (MISC::GET_GAME_TIMER() > iLocal_238 + 10000)
			{
				iLocal_237 = 2;
			}
		}
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_353))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_349, false))
		{
			HUD::SET_BLIP_SCALE(iLocal_353, 1f);
		}
		else
		{
			HUD::SET_BLIP_SCALE(iLocal_353, 0.7f);
		}
	}
	if (bLocal_306)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_261 + 5000)
		{
			PED::SET_PED_MOVEMENT_CLIPSET(iLocal_349, "MOVE_M@BAIL_BOND_NOT_TAZERED", 0.25f);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_349, 17, true);
			PED::SET_PED_KEEP_TASK(iLocal_349, true);
			func_52();
		}
		if (!__LIB_0__::func_75())
		{
			if (iLocal_262 < 3)
			{
				if (iLocal_244 != 5)
				{
					if (__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_SHGUN", 7, 0, 0, 0))
					{
						iLocal_262++;
					}
				}
				else if (__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_SHGUN", 7, 0, 0, 0))
				{
					iLocal_262++;
				}
			}
		}
	}
	if (iLocal_297 == 0)
	{
		if (iLocal_284 == 0)
		{
			if (__LIB_1__::func_197(iLocal_349))
			{
				if (bLocal_279 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_251 + 5000)
					{
						iLocal_284 = 1;
						PATHFIND::SET_ROADS_IN_ANGLED_AREA(-887.371f, -101.87748f, 34.38772f, -989.136f, 60.98683f, 58.366745f, 31.5f, false, true, true);
					}
					else if (PED::IS_PED_IN_VEHICLE(iLocal_349, iLocal_341, false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_341))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 5f, 3);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_341, 102, "Josh2_A2", true);
						}
					}
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_251 + 5000)
				{
					iLocal_284 = 1;
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(-887.371f, -101.87748f, 34.38772f, -989.136f, 60.98683f, 58.366745f, 31.5f, false, true, true);
				}
				else if (PED::IS_PED_IN_VEHICLE(iLocal_349, iLocal_341, false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_341))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 5f, 3);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_341, 101, "Josh2_A1", true);
					}
				}
			}
		}
		if (iLocal_284 == 1)
		{
			if (iLocal_278 == 0)
			{
				if (__LIB_1__::func_197(iLocal_349))
				{
					if (MISC::GET_GAME_TIMER() > iLocal_251 + 10000)
					{
						func_266();
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_341))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_341);
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_349, -1716.8218f, 493.29596f, 125.73983f, -1866.0347f, 483.7052f, 139.24779f, 18f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_349, -1842.7306f, 472.3509f, 108.04033f, -1904.8556f, 451.8423f, 138.28123f, 43.5f, false, true, 0))
					{
						if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Josh2_Corner"))
						{
							if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_341))
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_349, iLocal_341, "Josh2_Corner", 786469, 0, 8, -1, -1f, false, 2f);
							}
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_349, iLocal_341, PLAYER::PLAYER_PED_ID(), 8, 34f, 786469, 20f, 20f, true);
					}
				}
			}
		}
	}
	else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_341))
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_341);
		if (__LIB_1__::func_183(iLocal_341))
		{
			__LIB_10__::func_701(iLocal_341, -1083.1884f, 266.0258f, 63.0025f, 111.2559f, 0, 1);
		}
		__LIB_10__::func_701(PLAYER::PLAYER_PED_ID(), -1081.5244f, 254.3746f, 62.9404f, 356.8038f, 0, 1);
	}
	if (ENTITY::GET_ENTITY_SPEED(iLocal_341) < 1.5f)
	{
		iLocal_233++;
		if (iLocal_233 > 250)
		{
			iLocal_278 = 1;
			__LIB_0__::func_402(0, -1);
			iLocal_295 = 1;
			iLocal_296 = 1;
			bLocal_317 = true;
		}
	}
	else if (ENTITY::GET_ENTITY_SPEED(iLocal_341) > 12f)
	{
		iLocal_233 = 0;
	}
	if (((((ENTITY::GET_ENTITY_HEALTH(iLocal_341) < (iLocal_232 - 300) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_341) < (fLocal_267 - 300f)) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_341) < (fLocal_268 - 300f)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_341, false)) || ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_341)) || func_263())
	{
		iLocal_295 = 1;
		__LIB_0__::func_402(0, -1);
		iLocal_278 = 1;
		if (iLocal_296 == 0)
		{
			iLocal_296 = 1;
		}
	}
	if (iLocal_295 == 1)
	{
		if (!bLocal_317)
		{
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_341, 101f);
		}
		if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_341))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_341, false, true, false);
		}
	}
	if (iLocal_278 == 1)
	{
		if (ENTITY::GET_ENTITY_SPEED(iLocal_341) < 14f)
		{
			if (iLocal_294 == 0)
			{
				if (__LIB_0__::func_508(iLocal_349, PLAYER::PLAYER_PED_ID(), 40f, 1))
				{
					if (__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_CRASH", 7, 1, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 10f, 1);
						__LIB_0__::func_210("JOSH2_15", 7500, 0);
						iLocal_294 = 1;
					}
				}
			}
		}
		PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(iLocal_349);
		if (__LIB_0__::func_508(iLocal_349, PLAYER::PLAYER_PED_ID(), 50f, 1))
		{
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		}
		if (iLocal_293 == 0)
		{
			Local_276 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_341, 0f, -70f, 0f) };
			Local_277 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_341, 0f, 70f, 0f) };
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_276, Local_277, 100f, false, false, true);
			iLocal_293 = 1;
		}
		if (__LIB_1__::func_197(iLocal_349))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_349, false))
			{
				Var0 = { __LIB_0__::func_390() };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
				{
					if (MISC::ARE_STRINGS_EQUAL(&Var0, "JOSH2_CRASH"))
					{
						__LIB_0__::func_296();
					}
				}
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_349, true);
				PED::SET_PED_RESET_FLAG(iLocal_349, 187, true);
				if (!PED::IS_PED_HEADTRACKING_PED(iLocal_349, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_349, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				}
				if (((TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_HANDS_UP")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_REACT_AND_FLEE_PED")) != 1) && !bLocal_306)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_349, PLAYER::PLAYER_PED_ID(), -1);
				}
				Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_349, true) };
				if (MISC::IS_BULLET_IN_AREA(Var1, 10f, true))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_REACT_AND_FLEE_PED")) != 1)
					{
						Var2 = { __LIB_9__::func_980() };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
						{
							if (!MISC::ARE_STRINGS_EQUAL(&Var2, "JOSH2_OUTRO_5"))
							{
								__LIB_6__::func_771();
							}
							else
							{
								__LIB_6__::func_833();
							}
						}
						PED::SET_PED_MOVEMENT_CLIPSET(iLocal_349, "MOVE_M@BAIL_BOND_NOT_TAZERED", 0.25f);
						TASK::TASK_REACT_AND_FLEE_PED(iLocal_349, PLAYER::PLAYER_PED_ID());
						iLocal_261 = MISC::GET_GAME_TIMER();
						bLocal_306 = true;
					}
				}
				if (!PED::IS_PED_RAGDOLL(iLocal_349))
				{
					if (!TASK::IS_PED_GETTING_UP(iLocal_349))
					{
						if (PED::IS_PED_FACING_PED(iLocal_349, PLAYER::PLAYER_PED_ID(), 45f))
						{
							if (iLocal_248 == 0)
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_0__::func_508(iLocal_349, PLAYER::PLAYER_PED_ID(), 8f, 1) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_THREAT", 7, 0, 0, 0))
										{
											if (iLocal_234 == 0)
											{
											}
											iLocal_248 = 1;
										}
									}
								}
							}
							else if (iLocal_248 == 1)
							{
								if (!__LIB_0__::func_75())
								{
									iLocal_248 = 2;
								}
							}
							else if (iLocal_248 == 2)
							{
								if (!__LIB_0__::func_75())
								{
									iLocal_248 = 3;
								}
							}
							else if (iLocal_248 == 3)
							{
								if (!__LIB_0__::func_75())
								{
									iLocal_248 = 4;
								}
							}
						}
					}
				}
				if ((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_349) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_349)) || iLocal_308)
				{
					if (!PED::IS_PED_RAGDOLL(iLocal_349))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_349) < 0.1f)
						{
							if ((((((((WEAPON::GET_WEAPONTYPE_GROUP(WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_PISTOL") || WEAPON::GET_WEAPONTYPE_GROUP(WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_MG")) || WEAPON::GET_WEAPONTYPE_GROUP(WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_SMG")) || WEAPON::GET_WEAPONTYPE_GROUP(WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_SNIPER")) || WEAPON::GET_WEAPONTYPE_GROUP(WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_RIFLE")) || WEAPON::GET_WEAPONTYPE_GROUP(WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_STUNGUN")) || WEAPON::GET_WEAPONTYPE_GROUP(WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_SHOTGUN")) || WEAPON::GET_WEAPONTYPE_GROUP(WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_HEAVY")) || iLocal_308)
							{
								iLocal_308 = 1;
								Var3 = { __LIB_0__::func_390() };
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var3))
								{
									if (MISC::ARE_STRINGS_EQUAL(&Var3, "JOSH2_THREAT"))
									{
										__LIB_0__::func_296();
									}
								}
								if (!bLocal_307)
								{
									if (__LIB_36__::func_42(&uLocal_54, "JOSH2AU", "JOSH2_OUTRO", "JOSH2_OUTRO_5", 7, 0, 0))
									{
										iLocal_244 = 4;
										bLocal_307 = true;
									}
								}
								iLocal_264++;
								uLocal_254 = uLocal_254;
								if (iLocal_244 == 0)
								{
									if (iLocal_248 != 0)
									{
										__LIB_6__::func_833();
										iLocal_244 = 1;
									}
								}
								else if (iLocal_244 == 1)
								{
									if (iLocal_264 >= 10)
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_HANDS_UP")) != 1)
										{
											PED::SET_PED_MOVEMENT_CLIPSET(iLocal_349, "MOVE_M@BAIL_BOND_NOT_TAZERED", 0.25f);
											TASK::TASK_HANDS_UP(iLocal_349, -1, PLAYER::PLAYER_PED_ID(), -1, 0);
										}
										iLocal_244 = 3;
									}
								}
								else if (iLocal_244 == 3)
								{
									if (!__LIB_0__::func_75())
									{
										if (!bLocal_307)
										{
											if (__LIB_36__::func_42(&uLocal_54, "JOSH2AU", "JOSH2_OUTRO", "JOSH2_OUTRO_5", 7, 0, 0))
											{
												iLocal_244 = 4;
												bLocal_307 = true;
											}
										}
									}
								}
								else if (iLocal_244 == 4)
								{
									if (!__LIB_0__::func_75())
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_REACT_AND_FLEE_PED")) != 1)
										{
											PED::SET_PED_MOVEMENT_CLIPSET(iLocal_349, "MOVE_M@BAIL_BOND_NOT_TAZERED", 0.25f);
											TASK::TASK_REACT_AND_FLEE_PED(iLocal_349, PLAYER::PLAYER_PED_ID());
											iLocal_261 = MISC::GET_GAME_TIMER();
											bLocal_306 = true;
										}
										iLocal_244 = 5;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (__LIB_0__::func_508(iLocal_349, PLAYER::PLAYER_PED_ID(), 8f, 1))
					{
						PED::SET_PED_MOVEMENT_CLIPSET(iLocal_349, "MOVE_M@BAIL_BOND_NOT_TAZERED", 0.25f);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_349, 1, false);
						WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iLocal_349);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_349);
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1)
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_349, 0, 256);
						}
						Var4 = { __LIB_0__::func_390() };
						Var5 = { __LIB_0__::func_390() };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var4) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var5))
						{
							if (MISC::ARE_STRINGS_EQUAL(&Var4, "JOSH2_CRASH") && MISC::ARE_STRINGS_EQUAL(&Var5, "JOSH2_CRASH_3"))
							{
								__LIB_0__::func_296();
							}
						}
					}
				}
				if (iLocal_294 == 1)
				{
					if (!__LIB_0__::func_75())
					{
						PED::SET_PED_MOVEMENT_CLIPSET(iLocal_349, "MOVE_M@BAIL_BOND_NOT_TAZERED", 0.25f);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_349, 1, false);
						WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iLocal_349);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_349);
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1)
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_349, 0, 256);
						}
						Var6 = { __LIB_0__::func_390() };
						Var7 = { __LIB_0__::func_390() };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var6) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var7))
						{
							if (MISC::ARE_STRINGS_EQUAL(&Var6, "JOSH2_CRASH") && MISC::ARE_STRINGS_EQUAL(&Var7, "JOSH2_CRASH_3"))
							{
								__LIB_0__::func_296();
							}
						}
					}
				}
				iLocal_278 = 1;
			}
		}
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_349, false))
	{
		if (__LIB_8__::func_538(PLAYER::PLAYER_PED_ID(), iLocal_349) < 15f)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_349, PLAYER::PLAYER_PED_ID(), true))
			{
				if (WEAPON::GET_WEAPONTYPE_GROUP(WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_MELEE"))
				{
					iLocal_234++;
					if (iLocal_234 > iLocal_235 && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_349, joaat("WEAPON_UNARMED"), 0))
					{
						__LIB_0__::func_498(772);
					}
				}
				else
				{
					iLocal_234 = 5;
				}
				WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iLocal_349);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_349);
			}
		}
	}
	if (PED::IS_PED_FLEEING(iLocal_349))
	{
		iLocal_263++;
	}
	if (iLocal_263 <= 4)
	{
		if ((iLocal_234 > iLocal_235 && !PED::IS_PED_INJURED(iLocal_349)) && !FIRE::IS_ENTITY_ON_FIRE(iLocal_349))
		{
			iLocal_252 = MISC::GET_GAME_TIMER();
			if (HUD::DOES_BLIP_EXIST(iLocal_353))
			{
				HUD::SET_BLIP_SCALE(iLocal_353, 0.7f);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_283 = 1;
			}
			Var8 = { __LIB_0__::func_390() };
			Var9 = { __LIB_0__::func_390() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var8) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var9))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var8, "JOSH2_THREAT"))
				{
					if (MISC::ARE_STRINGS_EQUAL(&Var9, "JOSH2_THREAT_3"))
					{
						__LIB_6__::func_833();
					}
					else
					{
						__LIB_6__::func_771();
					}
				}
				if (MISC::ARE_STRINGS_EQUAL(&Var8, "JOSH2_CRASH"))
				{
					if (MISC::ARE_STRINGS_EQUAL(&Var9, "JOSH2_CRASH_2") || MISC::ARE_STRINGS_EQUAL(&Var9, "JOSH2_CRASH_4"))
					{
						__LIB_6__::func_833();
					}
					else
					{
						__LIB_6__::func_771();
					}
				}
				if (MISC::ARE_STRINGS_EQUAL(&Var8, "JOSH2_GUN"))
				{
					__LIB_6__::func_771();
				}
			}
			TASK::CLEAR_PED_TASKS(iLocal_349);
			iLocal_329 = 6;
		}
	}
	func_259();
}

void func_259()//Position - 0x29B80
{
	fLocal_269 = (150f - __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_341, 1));
	fLocal_269 = (fLocal_269 / 5f);
	if (fLocal_269 < 25f)
	{
		fLocal_269 = 25f;
	}
	if (fLocal_269 > 40f)
	{
		fLocal_269 = 40f;
	}
}

int func_263()//Position - 0x29CB6
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_121(iLocal_341))
	{
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_341, 0, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_341, 1, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_341, 4, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_341, 5, false))
		{
			iVar0++;
		}
	}
	if (iVar0 > 1)
	{
		return 1;
	}
	return 0;
}

void func_266()//Position - 0x29E14
{
	if (!__LIB_0__::func_75() && !__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_349, 80f, 1))
	{
		if (iLocal_259 < 7)
		{
			if (MISC::GET_GAME_TIMER() > (iLocal_260 + (20000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 10000))))
			{
				if (__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_CHASE", 6, 0, 0, 0))
				{
					iLocal_260 = MISC::GET_GAME_TIMER();
					iLocal_259++;
					return;
				}
			}
		}
	}
}

void func_272(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2A184
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_100478)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_100478)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		__LIB_0__::func_177(1);
		if (iParam0 <= Global_100478)
		{
		}
		iVar1 = __LIB_6__::func_774(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113386.f_9085.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = __LIB_6__::func_794(iVar1);
			cVar3 = { Global_91229[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113386.f_9085.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_100478, iParam0);
		}
		else
		{
			iVar4 = __LIB_6__::func_864(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar4 != -1)
			{
				Global_113386.f_18574[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {__LIB_0__::func_45(iVar4)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar5, 0, Global_100478, iParam0);
			}
			else
			{
				iVar6 = __LIB_0__::func_125(&(Global_100441.f_3));
				if (iVar6 > -1)
				{
					Global_113386.f_24986.f_4[iVar6] = 0;
				}
			}
		}
		Global_94619 = iParam2;
		Global_100478 = iParam0;
		func_273(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_273(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2A2F9
{
	func_274(&Global_106934, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_274(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x2A315
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_18__::func_173();
	uParam0->f_1 = __LIB_13__::func_95();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_40__::func_844(&(uParam0->f_2884), 0);
		__LIB_18__::func_218(PLAYER::PLAYER_PED_ID());
		__LIB_24__::func_949(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), true);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
		{
			uParam0->f_2 = joaat("WEAPON_UNARMED");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113386.f_2363.f_539.f_294[iVar1];
		if (iVar1 == __LIB_18__::func_173())
		{
			__LIB_24__::func_948(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_100166[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_100166[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_100166[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_100166[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_100166[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_100166[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_100166[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_100166[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_100166[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_100166[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 1:
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 2:
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113386.f_20564.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_60328[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113386.f_2363[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &(uParam0->f_2341[0]), -1);
	STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &(uParam0->f_2341[1]), -1);
	STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		__LIB_41__::func_387(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__::func_327(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

void func_377()//Position - 0x322E7
{
	if (__LIB_1__::func_183(iLocal_348))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_348))
		{
			if ((((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 278 /*INPUT_VEH_MOVE_LEFT*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 279 /*INPUT_VEH_MOVE_RIGHT*/)) || MISC::GET_GAME_TIMER() > iLocal_246 + 2500)
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_348))
				{
					TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(iLocal_348);
				}
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_348, false);
				VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_348, true);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
	}
}

void func_380()//Position - 0x323E8
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("JOSH_02_SCENE"))
	{
		if (__LIB_0__::func_121(iLocal_341))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_341, "JOSH_02_SCENE_LENNY_VEHICLE", 0f);
		}
		AUDIO::START_AUDIO_SCENE("JOSH_02_SCENE");
	}
}

void func_381()//Position - 0x3241B
{
	func_385();
	if (!HUD::DOES_BLIP_EXIST(iLocal_353))
	{
		if (((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -853.6745f, -52.276905f, 31.25732f, -918.1265f, 47.04292f, 121.33125f, 75f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -879.9109f, 56.84485f, 38.78366f, -958.23553f, 59.31521f, 124.61187f, 25f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -859.33075f, 40.05341f, 29.865433f, -937.5096f, 8.682496f, 123.80586f, 68.25f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -841.4558f, -15.820283f, 54.40123f, -859.77734f, 16.357359f, 39.161922f, 24.5f, false, true, 0))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_352))
			{
				iLocal_352 = __LIB_10__::func_658(-903.6451f, 25.6888f, 45.4577f, 5, 1);
				__LIB_10__::func_600(&iLocal_352, -821.0944f, -2.6563f, 39.9561f, 31.8236f);
			}
			iLocal_329 = 3;
		}
	}
	if (__LIB_1__::func_183(iLocal_341))
	{
		if (__LIB_1__::func_197(iLocal_350))
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -895.7417f, 19.69889f, 67.24831f, -905.28156f, 26.627926f, 41.107346f, 9f, false, true, 0) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_341)) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_341))
			{
				if (CAM::GET_FOCUS_PED_ON_SCREEN(50f, 31086, 0.8f, 0.8f, 0.5f, 8f, 0.333f, 31086, 24818) == iLocal_349 || CAM::GET_FOCUS_PED_ON_SCREEN(50f, 31086, 0.8f, 0.8f, 0.5f, 8f, 0.333f, 31086, 24818) == iLocal_350)
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_349, iLocal_341, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_349, iLocal_341, 20000, -1, 2f, 1, 0);
						}
					}
					iLocal_253++;
					if (iLocal_253 > 30 && PED::IS_PED_IN_VEHICLE(iLocal_349, iLocal_341, true))
					{
						iLocal_280 = 1;
					}
				}
			}
		}
		else
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -950.74225f, 23.491081f, 33.74755f, -925.26526f, -17.061129f, 87.12195f, 16f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -931.36176f, -25.908237f, 34.825775f, -946.2923f, -5.137248f, 55.447624f, 28.5f, false, true, 0))
			{
				bLocal_279 = true;
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_349, iLocal_341, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_349, iLocal_341, 20000, -1, 2f, 1, 0);
				}
			}
			if (PED::IS_PED_IN_VEHICLE(iLocal_349, iLocal_341, true))
			{
				iLocal_280 = 1;
			}
		}
		if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -914.3418f, 14.098543f, 51.177f, -907.52277f, 23.196795f, 41.124313f, 25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -928.8252f, -8.227508f, 56.120975f, -922.30646f, -3.359912f, 39.814888f, 11.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -928.0486f, -38.29866f, 33.437916f, -959.601f, 5.279084f, 62.931038f, 36.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -912.8772f, 1.544632f, 67.438065f, -927.4288f, 20.621159f, 42.385647f, 20.5f, false, true, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_341, PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_349, PLAYER::PLAYER_PED_ID(), true))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -950.74225f, 23.491081f, 33.74755f, -925.26526f, -17.061129f, 87.12195f, 16f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -931.36176f, -25.908237f, 34.825775f, -946.2923f, -5.137248f, 55.447624f, 28.5f, false, true, 0))
			{
				bLocal_279 = true;
				iLocal_280 = 1;
			}
			else
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_349, iLocal_341, false))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
					{
						TASK::TASK_ENTER_VEHICLE(iLocal_349, iLocal_341, 20000, -1, 2f, 1, 0);
					}
				}
				if (PED::IS_PED_IN_VEHICLE(iLocal_349, iLocal_341, true))
				{
					iLocal_280 = 1;
				}
			}
		}
		if (iLocal_280 == 1)
		{
			func_382();
		}
	}
	else
	{
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 10f, 1);
		iLocal_329 = 5;
	}
}

void func_382()//Position - 0x32912
{
	if (__LIB_1__::func_197(iLocal_349))
	{
		if (__LIB_1__::func_197(iLocal_350))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_356);
			if (bLocal_279 == 1)
			{
				TASK::TASK_ACHIEVE_HEADING(0, 255f, 0);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "rcmjosh2", "house_viewer_yelling", 2f, -8f, -1, 0, 0f, false, false, false);
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_356);
		}
		if (__LIB_1__::func_197(iLocal_349) && __LIB_1__::func_183(iLocal_341))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_349, true, 1);
			if (!HUD::DOES_BLIP_EXIST(iLocal_353))
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_349, 1) < 100f)
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_349, iLocal_341, false))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_349, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_349, -1, 0, 2);
						PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_349, false);
						iLocal_251 = MISC::GET_GAME_TIMER();
						__LIB_0__::func_523(&iLocal_352);
						__LIB_0__::func_210("JOSH2_04", 7500, 0);
						func_272(2, "Chase Avery", 1, 0, 0, 1);
						iLocal_353 = __LIB_10__::func_711(iLocal_349, 1, 0, 5);
						__LIB_0__::func_403(773, 0);
						HUD::SET_BLIP_SCALE(iLocal_353, 1f);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
						AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iLocal_349, "JOSH2_BCAA", "AVERY", "SPEECH_PARAMS_STANDARD", false);
					}
				}
			}
			if (iLocal_231 == 1)
			{
			}
			else if (iLocal_231 == 2)
			{
				if (bLocal_279 == 1)
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_349, iLocal_341, false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_341))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_341, 102, "Josh2_A2", true);
						}
					}
				}
				else if (PED::IS_PED_IN_VEHICLE(iLocal_349, iLocal_341, false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_341))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_341, 101, "Josh2_A1", true);
					}
				}
			}
			if (PED::IS_PED_IN_VEHICLE(iLocal_349, iLocal_341, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_341))
				{
					iLocal_329 = 5;
				}
			}
		}
	}
}

void func_385()//Position - 0x32B18
{
	struct<6> Var0;
	struct<6> Var1;
	int iVar2;
	Var0 = { __LIB_0__::func_390() };
	Var1 = { __LIB_9__::func_980() };
	if (iLocal_302 == 1 && iLocal_303 == 1)
	{
		if (__LIB_1__::func_197(iLocal_359))
		{
			PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(iLocal_359);
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -891.9106f, 17.15756f, 43.93274f, -923.38696f, 42.692142f, 50.96858f, 12.25f, false, true, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
				{
					if (MISC::ARE_STRINGS_EQUAL(&Var0, "JOSH2_JOG1") || MISC::ARE_STRINGS_EQUAL(&Var0, "JOSH2_JOG2"))
					{
						__LIB_6__::func_833();
					}
				}
				if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_359, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_359, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0) && !__LIB_0__::func_530(iLocal_359, -824.8292f, -24.5877f, 38.1216f, 4f, 1))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_359, -824.8292f, -24.5877f, 38.1216f, 1.2f, -1, 0.25f, 0, 40000f);
					iLocal_327 = 5;
				}
			}
			if (iLocal_327 != 6)
			{
				if ((((__LIB_42__::func_335(iLocal_359, 1, 1116471296, 1126825984, 0, 0, 0, 0) || __LIB_42__::func_335(iLocal_360, 1, 1116471296, 1126825984, 0, 0, 0, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_359, PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_360, PLAYER::PLAYER_PED_ID(), true)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_359, true), 20f, false))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
					{
						if (MISC::ARE_STRINGS_EQUAL(&Var0, "JOSH2_JOG1") || MISC::ARE_STRINGS_EQUAL(&Var0, "JOSH2_JOG2"))
						{
							__LIB_6__::func_771();
						}
					}
					AUDIO::STOP_PED_SPEAKING(iLocal_359, false);
					__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_ATTACK", 8, 0, 0, 0);
					if (__LIB_1__::func_197(iLocal_360))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_360, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
						PED::SET_PED_KEEP_TASK(iLocal_360, true);
					}
					PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_359, 0, -8f);
					PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_359, 1, -8f);
					PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_359, 2, -8f);
					TASK::TASK_REACT_AND_FLEE_PED(iLocal_359, PLAYER::PLAYER_PED_ID());
					__LIB_0__::func_124(&iLocal_359, 1, 0, 1);
					__LIB_0__::func_124(&iLocal_360, 1, 0, 1);
					iLocal_327 = 6;
				}
			}
		}
		else if (iLocal_327 != 6)
		{
			if (__LIB_1__::func_197(iLocal_360))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_360, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_360, true);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var0, "JOSH2_JOG1") || MISC::ARE_STRINGS_EQUAL(&Var0, "JOSH2_JOG2"))
				{
					__LIB_6__::func_771();
				}
			}
			AUDIO::STOP_PED_SPEAKING(iLocal_359, false);
			__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_ATTACK", 8, 0, 0, 0);
			__LIB_0__::func_124(&iLocal_359, 1, 0, 1);
			__LIB_0__::func_124(&iLocal_360, 1, 0, 1);
			iLocal_327 = 6;
		}
	}
	switch (iLocal_327)
	{
		case 0:
			iLocal_319 = 0;
			STREAMING::REQUEST_MODEL(joaat("A_F_Y_Fitness_02"));
			STREAMING::REQUEST_MODEL(joaat("A_C_Retriever"));
			STREAMING::REQUEST_ANIM_DICT("move_f@jogger");
			iLocal_327 = 1;
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_359))
			{
				if ((STREAMING::HAS_MODEL_LOADED(joaat("A_F_Y_Fitness_02")) && STREAMING::HAS_MODEL_LOADED(joaat("A_C_Retriever"))) && STREAMING::HAS_ANIM_DICT_LOADED("move_f@jogger"))
				{
					iLocal_359 = PED::CREATE_PED(26, joaat("A_F_Y_Fitness_02"), -885.9105f, 9.2858f, 43.7928f, 239.941f, true, true);
					iLocal_360 = PED::CREATE_PED(26, joaat("A_C_Retriever"), -888.4332f, 10.515f, 43.9829f, 241.9898f, true, true);
					__LIB_0__::func_203(&uLocal_54, 4, iLocal_359, "JOSH2JOGGER", 0, 1);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_359, 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_359, 2, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_359, 3, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_359, 4, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_359, 8, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_359, 10, 1, 0, 0);
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_360);
					PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_359, 0, "move_f@jogger", "idle", 2f, true);
					PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_359, 1, "move_f@jogger", "jogging", 2f, true);
					PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_359, 2, "move_f@jogger", "run", 2f, true);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_360, iLocal_359, -1, 0, 2);
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_360, iLocal_359, 0f, -2f, 0f, 1.5f, -1, 0.5f, true);
					AUDIO::STOP_PED_SPEAKING(iLocal_359, true);
					iLocal_302 = 1;
					iLocal_303 = 1;
				}
			}
			else if (__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_359, 75f, 1))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -874.8856f, 3.164f, 42.9592f, 1.2f, -1, 1f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -864.1951f, -0.3664f, 42.314f, 1.2f, -1, 1f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -847.0853f, -0.1079f, 41.7293f, 1.2f, -1, 1f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -835.9113f, -5.3215f, 40.8279f, 1.2f, -1, 1f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -824.8292f, -24.5877f, 38.1216f, 1.2f, -1, 1f, 1, 40000f);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_359, iVar2);
				TASK::CLEAR_SEQUENCE_TASK(&iVar2);
				iLocal_327 = 2;
			}
			break;
		case 2:
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if ((__LIB_1__::func_197(iLocal_359) && __LIB_0__::func_508(iLocal_359, PLAYER::PLAYER_PED_ID(), 15f, 1)) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 12f)
			{
				if (__LIB_0__::func_405("JOSH2_07", 0, 0))
				{
					if (__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_JOG1", 7, 1, 0, 0))
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_359, -1, 0, 2);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_359, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_360, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_359, PLAYER::PLAYER_PED_ID(), -2f, 2f, 0f, 1.2f, -1, 1f, true);
						iLocal_327 = 3;
					}
				}
				else if (__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_JOG1", 7, 0, 0, 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_359, -1, 0, 2);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_359, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_359, PLAYER::PLAYER_PED_ID(), -2f, 2f, 0f, 1.2f, -1, 1f, true);
					iLocal_327 = 3;
				}
			}
			break;
		case 3:
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (__LIB_1__::func_197(iLocal_359) && __LIB_0__::func_508(iLocal_359, PLAYER::PLAYER_PED_ID(), 4.7f, 1))
			{
				if (__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_JOG2", 7, 0, 0, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_359, joaat("SCRIPT_TASK_FOLLOW_TO_OFFSET_OF_ENTITY")) == 1)
					{
						TASK::CLEAR_PED_TASKS(iLocal_359);
					}
					iLocal_327 = 4;
				}
			}
			func_49(iLocal_359, 30f, 10000);
			break;
		case 4:
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (__LIB_1__::func_197(iLocal_359))
			{
				if (__LIB_1__::func_197(iLocal_360))
				{
					if (__LIB_0__::func_508(iLocal_359, iLocal_360, 2.5f, 1))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_360, joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")) != 1)
						{
							TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_360, "WORLD_DOG_SITTING_RETRIEVER", 0, true);
						}
					}
				}
				if (!__LIB_0__::func_508(iLocal_359, PLAYER::PLAYER_PED_ID(), 10f, 1))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
					{
						if (MISC::ARE_STRINGS_EQUAL(&Var0, "JOSH2_JOG2"))
						{
							__LIB_0__::func_296();
						}
					}
				}
				else if (!PED::IS_PED_FACING_PED(iLocal_359, PLAYER::PLAYER_PED_ID(), 90f))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_359, PLAYER::PLAYER_PED_ID(), 0);
				}
			}
			if (!__LIB_0__::func_75())
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_360, iLocal_359, 0f, -2f, 0f, 1.5f, -1, 0.5f, true);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_359, -824.8292f, -24.5877f, 38.1216f, 1.2f, -1, 0.25f, 0, 40000f);
				iLocal_327 = 5;
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var0, "JOSH2_JOG2"))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var1, "JOSH2_JOG2_11"))
				{
					if (iLocal_319 == 0)
					{
						iLocal_320 = MISC::GET_GAME_TIMER();
						iLocal_319 = 1;
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_320 + 1200)
					{
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_360, iLocal_359, 0f, -2f, 0f, 1.5f, -1, 0.5f, true);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_359, -824.8292f, -24.5877f, 38.1216f, 1.2f, -1, 0.25f, 0, 40000f);
						iLocal_327 = 5;
					}
				}
			}
			func_49(iLocal_359, 30f, 10000);
			break;
		case 5:
			if (__LIB_1__::func_197(iLocal_359))
			{
				if (__LIB_0__::func_530(iLocal_359, -824.8292f, -24.5877f, 38.1216f, 15f, 1))
				{
					iLocal_302 = 0;
					iLocal_303 = 0;
					TASK::TASK_WANDER_STANDARD(iLocal_359, 40000f, 0);
					PED::SET_PED_KEEP_TASK(iLocal_359, true);
					__LIB_0__::func_124(&iLocal_359, 1, 0, 1);
					iLocal_327 = 7;
				}
			}
			break;
		case 6:
			break;
		case 7:
			break;
	}
}

void func_405()//Position - 0x33CEE
{
	if (!iLocal_304)
	{
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 0);
		__LIB_0__::func_210("JOSH2_01", 7500, 0);
		iLocal_304 = 1;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 1)
	{
		if (((((((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/)) || (__LIB_4__::func_739() && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/))) || (__LIB_4__::func_739() && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/))) || (__LIB_4__::func_739() && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 32 /*INPUT_MOVE_UP_ONLY*/)))
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_324))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_324) > 0f)
		{
			if (iLocal_314 == 0)
			{
				if (__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_INT_LO", 7, 1, 0, 0))
				{
					iLocal_314 = 1;
				}
			}
		}
	}
	if (__LIB_1__::func_197(Local_53.f_28[0]))
	{
		PED::SET_PED_RESET_FLAG(Local_53.f_28[0], 129, true);
		if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_325))
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_324) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_324) > 0.99f)
			{
				iLocal_325 = PED::CREATE_SYNCHRONIZED_SCENE(563.76f, -1773.86f, 28.36f, 0.02f, 0.02f, -110.7f, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_325, true);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_53.f_28[0], iLocal_325, "rcmjosh2", "josh_sitting_loop", 4f, -1f, 1, 0, 1000f, 0);
			}
		}
	}
	if (iLocal_290 == 0)
	{
		if (__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_273, 2000f, 1))
		{
			__LIB_0__::func_0(&(Local_53.f_28[0]));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Josh"));
			__LIB_0__::func_202(&uLocal_54, 5);
			__LIB_0__::func_203(&uLocal_54, 5, 0, "JOSH", 0, 1);
			iLocal_290 = 1;
		}
	}
	else if (__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_273, 300f, 1))
	{
		if (bLocal_291 == 0)
		{
			func_417();
			func_416();
			func_408();
		}
		func_385();
	}
	if (iLocal_280 == 1)
	{
		func_382();
	}
	if (bLocal_291)
	{
		if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -853.6745f, -52.276905f, 31.25732f, -918.1265f, 47.04292f, 121.33125f, 75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -879.9109f, 56.84485f, 38.78366f, -958.23553f, 59.31521f, 124.61187f, 25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -859.33075f, 40.05341f, 29.865433f, -937.5096f, 8.682496f, 123.80586f, 68.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -841.4558f, -15.820283f, 54.40123f, -859.77734f, 16.357359f, 39.161922f, 24.5f, false, true, 0))
		{
			__LIB_0__::func_523(&iLocal_352);
			if (iLocal_281 == 0)
			{
				__LIB_0__::func_210("JOSH2_07", 7500, 0);
				iLocal_281 = 1;
			}
			iLocal_329 = 4;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -928.0486f, -38.29866f, 33.437916f, -959.601f, 5.279084f, 62.931038f, 36.25f, false, true, 0))
		{
			iLocal_281 = 1;
			bLocal_279 = true;
			if (func_406(iLocal_349))
			{
				iLocal_255++;
				if (iLocal_255 > 12)
				{
					iLocal_280 = 1;
					func_382();
				}
			}
		}
	}
}

bool func_406(int iParam0)//Position - 0x3405A
{
	return func_407(PED::GET_VEHICLE_PED_IS_IN(iParam0, false), PLAYER::PLAYER_PED_ID(), 250, 7);
}

bool func_407(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x34074
{
	int iVar0;
	var uVar1;
	iVar0 = __LIB_30__::func_233(iParam0, iParam1);
	if (!__LIB_0__::func_121(iParam0) || !__LIB_0__::func_121(iParam1))
	{
		if (iVar0 != -1)
		{
			__LIB_9__::func_801(&(Local_47[iVar0 /*4*/]));
		}
		return 0;
	}
	if (iVar0 == -1)
	{
		iVar0 = __LIB_30__::func_232();
		if (iVar0 == -1)
		{
			return 0;
		}
		Local_47[iVar0 /*4*/].f_1 = iParam0;
		Local_47[iVar0 /*4*/].f_2 = iParam1;
	}
	uVar1 = __LIB_34__::func_948(&(Local_47[iVar0 /*4*/]), ENTITY::GET_ENTITY_COORDS(iParam0, true), iParam1, &(Local_47[iVar0 /*4*/].f_3), iParam0, iParam3);
	return (uVar1 || (MISC::GET_GAME_TIMER() - Local_47[iVar0 /*4*/].f_3) < iParam2);
}

void func_408()//Position - 0x34114
{
	iLocal_362 = PED::ADD_SCENARIO_BLOCKING_AREA(-928.9488f, -9.733973f, 41.00143f, -917.71246f, 26.534355f, 54.602386f, false, true, true, true);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-887.371f, -101.87748f, 34.38772f, -989.136f, 60.98683f, 58.366745f, 31.5f, false, false, true);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-928.9488f, -9.733973f, 41.00143f, -917.71246f, 26.534355f, 54.602386f, 30f, false, false, true);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-847.7967f, -7.619044f, 37.653656f, -961.21716f, 70.09298f, 56.28784f, 28.75f, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_341))
	{
		iLocal_341 = VEHICLE::CREATE_VEHICLE(joaat("comet2"), Local_273, fLocal_270, true, true, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_341, 5f);
		VEHICLE::SET_VEHICLE_COLOURS(iLocal_341, 139, 139);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_341, 90, 90);
		iLocal_232 = ENTITY::GET_ENTITY_HEALTH(iLocal_341);
		fLocal_267 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_341);
		fLocal_268 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_341);
		VEHICLE::SET_VEHICLE_MOD_KIT(iLocal_341, 0);
		VEHICLE::SET_VEHICLE_WINDOW_TINT(iLocal_341, 2);
		VEHICLE::SET_VEHICLE_MOD(iLocal_341, 12, 1, false);
		VEHICLE::ROLL_DOWN_WINDOWS(iLocal_341);
		VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_341, 20, true);
		VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_341, 22, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_349))
	{
		iLocal_349 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_341, 26, joaat("A_M_Y_Business_03"), -1, true, true);
		AUDIO::STOP_PED_SPEAKING(iLocal_349, true);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_349, 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_349, 3, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_349, 4, 1, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_349, true);
		ENTITY::SET_ENTITY_HEALTH(iLocal_349, 280, 0);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_349, true, 0f);
		PED::SET_PED_LEG_IK_MODE(iLocal_349, 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_349, 17, true);
		PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_349, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_349, 281, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_349, 42, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_349, 242, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_349, 243, true);
		PED::SET_DRIVER_ABILITY(iLocal_349, 1f);
		PED::SET_DRIVER_RACING_MODIFIER(iLocal_349, 1f);
		__LIB_24__::func_951(58, 2, 0);
		__LIB_0__::func_203(&uLocal_54, 3, iLocal_349, "AVERY", 0, 1);
		__LIB_0__::func_203(&uLocal_54, 5, 0, "JOSH", 0, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_342))
	{
		iLocal_342 = VEHICLE::CREATE_VEHICLE(joaat("bullet"), -887.6388f, -16.376f, 42.0828f, 123.9787f, true, true, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_342, 5f);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_342, 2);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_347))
	{
		iLocal_347 = VEHICLE::CREATE_VEHICLE(joaat("superd"), -921.9576f, 19.3388f, 46.7128f, 94.1395f, true, true, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_347, 5f);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_347, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_345))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_53.f_35[0]))
		{
			iLocal_345 = VEHICLE::CREATE_VEHICLE(joaat("felon2"), 558.09393f, -1765.3826f, 28.862253f, -24.676498f, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_345, 5f);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_345, 2);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_344))
	{
		iLocal_344 = VEHICLE::CREATE_VEHICLE(joaat("comet2"), -877.5642f, 43.1467f, 47.759f, 81.1951f, true, true, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_344, 5f);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_344, 3);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_343))
	{
		if (iLocal_231 == 1)
		{
			iLocal_343 = VEHICLE::CREATE_VEHICLE(joaat("superd"), Local_275, fLocal_272, true, true, false);
		}
		else if (iLocal_231 == 2)
		{
			iLocal_343 = VEHICLE::CREATE_VEHICLE(joaat("superd"), Local_274, fLocal_271, true, true, false);
		}
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_343, 2);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_343, 5f);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_350))
	{
		iLocal_350 = PED::CREATE_PED(26, joaat("A_M_M_BevHills_01"), -923.43f, 9.76f, 47.71f, 150f, true, true);
		TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_350, "WORLD_HUMAN_STAND_MOBILE", 0, false);
		PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_350);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_350, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_350, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_350, 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_350, 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_350, 10, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_350, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_350, 17, true);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_350, iLocal_349, -1, 0, 2);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_349, iLocal_350, -1, 2048, 2);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_346))
	{
		iLocal_346 = VEHICLE::CREATE_VEHICLE(joaat("bati"), -888.3505f, -8.9959f, 42.346f, 208.0802f, true, true, false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_346, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_351))
	{
		iLocal_351 = PED::CREATE_PED(26, joaat("A_M_M_BevHills_01"), -890.0759f, -9.350061f, 43.329903f, -62.37922f, true, true);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_351, 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_351, 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_351, 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_351, 8, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_351, 10, 1, 2, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_351, 17, true);
		AUDIO::STOP_PED_SPEAKING(iLocal_351, true);
		__LIB_0__::func_203(&uLocal_54, 6, iLocal_351, "Josh2PoshBiker", 0, 1);
	}
	if (__LIB_1__::func_197(iLocal_351))
	{
		TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_351, "WORLD_HUMAN_SMOKING", 0, false);
	}
	bLocal_291 = true;
}

void func_416()//Position - 0x3491A
{
	while (((((((((((!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "Josh2_A1") || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "Josh2_A2")) || !STREAMING::HAS_MODEL_LOADED(joaat("comet2"))) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_Business_03"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bullet"))) || !STREAMING::HAS_MODEL_LOADED(joaat("superd"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bati"))) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_BevHills_01"))) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh2")) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh2ig_1")) || !STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_NOT_TAZERED")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Josh2Roll"))
	{
		SYSTEM::WAIT(0);
	}
}

void func_417()//Position - 0x349E4
{
	STREAMING::REQUEST_MODEL(joaat("comet2"));
	STREAMING::REQUEST_MODEL(joaat("A_M_Y_Business_03"));
	STREAMING::REQUEST_MODEL(joaat("bullet"));
	STREAMING::REQUEST_MODEL(joaat("superd"));
	STREAMING::REQUEST_MODEL(joaat("bati"));
	STREAMING::REQUEST_MODEL(joaat("A_M_M_BevHills_01"));
	STREAMING::REQUEST_ANIM_DICT("rcmjosh2");
	STREAMING::REQUEST_ANIM_DICT("rcmjosh2ig_1");
	STREAMING::REQUEST_CLIP_SET("MOVE_M@BAIL_BOND_NOT_TAZERED");
	TASK::REQUEST_WAYPOINT_RECORDING("Josh2Roll");
	TASK::REQUEST_WAYPOINT_RECORDING("Josh2_Corner");
	VEHICLE::REQUEST_VEHICLE_RECORDING(101, "Josh2_A1");
	VEHICLE::REQUEST_VEHICLE_RECORDING(102, "Josh2_A2");
}

void func_420()//Position - 0x34A93
{
	func_421();
	func_272(1, "Go To Rockford", 0, 0, 0, 1);
	iLocal_329 = 3;
}

void func_421()//Position - 0x34AB0
{
	__LIB_24__::func_951(58, 2, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_53.f_28[0]))
	{
		while (!__LIB_26__::func_256(&(Local_53.f_28[0]), 58, 566.5068f, -1772.1902f, 28.3575f, 337.1148f, "JOSH", 1))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (__LIB_1__::func_197(Local_53.f_28[0]))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_53.f_28[0], 17, true);
		__LIB_0__::func_203(&uLocal_54, 5, Local_53.f_28[0], "JOSH", 0, 1);
	}
	__LIB_39__::func_444(1, 1, 1, 1);
	__LIB_0__::func_203(&uLocal_54, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	iLocal_231 = 2;
	Local_274 = { -872.0014f, -51.035f, 37.337f };
	Local_275 = { -924.3982f, 8.4185f, 46.7128f };
	fLocal_271 = 270.2333f;
	fLocal_272 = 219.1117f;
	if (iLocal_231 == 1)
	{
		Local_273 = { Local_274 };
		fLocal_270 = fLocal_271;
	}
	else if (iLocal_231 == 2)
	{
		Local_273 = { Local_275 };
		fLocal_270 = fLocal_272;
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_352))
	{
		iLocal_352 = __LIB_10__::func_658(-903.6451f, 25.6888f, 45.4577f, 5, 1);
		__LIB_10__::func_600(&iLocal_352, -821.0944f, -2.6563f, 39.9561f, 31.8236f);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("comet2"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_M_Y_Business_03"), true);
	iLocal_240 = MISC::GET_GAME_TIMER();
}

void func_434()//Position - 0x3507F
{
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	if (iLocal_328 < 2)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 565.1842f, -1777.2274f, 30.704159f, 549.9508f, -1770.103f, 35.947773f, 7f, false, true, 0))
		{
			if (!iLocal_305)
			{
				iLocal_363 = STREAMING::STREAMVOL_CREATE_FRUSTUM(556.0839f, -1724.9622f, 33.0732f, 18.6933f, 0.1321f, -157.4946f, 200f, 13, 127);
				iLocal_305 = 1;
			}
		}
		else if (iLocal_305)
		{
			STREAMING::STREAMVOL_DELETE(iLocal_363);
			iLocal_305 = 0;
		}
	}
	switch (iLocal_328)
	{
		case 0:
			iLocal_310 = 0;
			iLocal_311 = 0;
			iLocal_312 = 0;
			iLocal_313 = 0;
			CUTSCENE::REQUEST_CUTSCENE("josh_2_intp1_t4", 8);
			STREAMING::REQUEST_ANIM_DICT("rcmjosh");
			STREAMING::REQUEST_ANIM_DICT("rcmjosh2");
			if (__LIB_1__::func_197(Local_53.f_28[0]))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh2"))
				{
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_53.f_28[0], false);
					__LIB_0__::func_203(&uLocal_54, 5, Local_53.f_28[0], "JOSH", 0, 1);
					__LIB_0__::func_203(&uLocal_54, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
					iLocal_321 = PED::CREATE_SYNCHRONIZED_SCENE(563.76f, -1773.86f, 28.36f, 0.02f, 0.02f, -110.7f, 2);
					if (__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_INT_LI", 7, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1f, 6f, 3);
						if (iLocal_309 == 0)
						{
							__LIB_0__::func_367(1);
							iLocal_309 = 1;
						}
						__LIB_10__::func_700(&Local_53, 0, 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_53.f_28[0], PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							TASK::TASK_SYNCHRONIZED_SCENE(Local_53.f_28[0], iLocal_321, "rcmjosh2", "josh_leadin", 1000f, -4f, 5, 0, 1000f, 0);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_53.f_28[0], -1, 0, 2);
							__LIB_10__::func_701(PLAYER::PLAYER_PED_ID(), 567.5291f, -1769.4231f, 28.1428f, 159.2917f, 0, 1);
						}
						else
						{
							TASK::TASK_SYNCHRONIZED_SCENE(Local_53.f_28[0], iLocal_321, "rcmjosh2", "josh_leadin", 1f, -4f, 5, 0, 1000f, 0);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_53.f_28[0], -1, 0, 2);
						}
						__LIB_42__::func_531(0f, 0f, 0f, 0f, 0, 145);
						iLocal_328 = 1;
					}
				}
			}
			break;
		case 1:
			if (!iLocal_316)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_321))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_321) >= 0.025f)
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							__LIB_0__::func_84(800, 0);
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_321) >= 0.371f)
					{
						iLocal_313 = 1;
						if (!HUD::DOES_BLIP_EXIST(iLocal_354))
						{
							iLocal_354 = __LIB_10__::func_658(550.2f, -1772.53f, 32.45f, 5, 1);
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_321) < 0.371f)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 565.1842f, -1777.2274f, 30.704159f, 549.9508f, -1770.103f, 35.947773f, 7f, false, true, 0))
						{
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_53.f_28[0], true);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_53.f_28[0], -1, 0, 2);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_53.f_28[0], PLAYER::PLAYER_PED_ID(), 0);
							iLocal_316 = 1;
							return;
						}
					}
				}
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_322))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_321) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_321) > 0.99f)
					{
						iLocal_322 = PED::CREATE_SYNCHRONIZED_SCENE(563.76f, -1773.86f, 28.36f, 0.02f, 0.02f, -110.7f, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_322, true);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_53.f_28[0], iLocal_322, "rcmjosh2", "josh_wait_loop_exit", 4f, -4f, 5, 0, 1000f, 0);
					}
				}
				else
				{
					func_469();
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_321) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_321) >= 0.371f)
				{
					iLocal_313 = 1;
					if (!HUD::DOES_BLIP_EXIST(iLocal_354))
					{
						iLocal_354 = __LIB_10__::func_658(550.2f, -1772.53f, 32.45f, 5, 1);
					}
				}
			}
			else
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					__LIB_0__::func_84(800, 0);
				}
				iLocal_313 = 1;
				if (!HUD::DOES_BLIP_EXIST(iLocal_354))
				{
					iLocal_354 = __LIB_10__::func_658(550.2f, -1772.53f, 32.45f, 5, 1);
				}
				if (!PED::IS_PED_FACING_PED(Local_53.f_28[0], PLAYER::PLAYER_PED_ID(), 45f))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_53.f_28[0], PLAYER::PLAYER_PED_ID(), 0);
				}
				func_469();
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 550.2f, -1772.53f, 33.45f, 3f, 3f, 1f, false, true, 0))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					HUD::DISPLAY_HUD(false);
					HUD::DISPLAY_RADAR(false);
					iLocal_313 = 0;
					__LIB_0__::func_523(&iLocal_354);
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_53.f_28[0], 0.125f, false);
					iLocal_323 = PED::CREATE_SYNCHRONIZED_SCENE(563.76f, -1773.86f, 28.36f, 0.02f, 0.02f, -110.7f, 2);
					iLocal_361 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), false);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_323, "rcmjosh", "trevor_enter_room_trevor", 4f, -4f, 0, 0, 1000f, 0);
					CAM::SET_CAM_ACTIVE(iLocal_361, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_361, iLocal_323, "trevor_enter_room_camera", "rcmjosh");
					ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(549.33f, -1773.09f, 33.77f, 5f, joaat("prop_motel_door_09"), iLocal_323, "trevor_enter_room_door", "rcmjosh", 0.125f, -8f, 0, 1000f);
					__LIB_10__::func_700(&Local_53, 1, 1);
					__LIB_8__::func_770(1);
					MISC::CLEAR_AREA_OF_PEDS(549.33f, -1773.09f, 33.77f, 50f, 0);
					iLocal_328 = 2;
				}
			}
			if (iLocal_313 == 1)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 550.2f, -1772.53f, 32.45f, 4f, 4f, 2f, true, true, 0))
				{
				}
			}
			break;
		case 2:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::THEFEED_HIDE_THIS_FRAME();
			if (!iLocal_305)
			{
				iLocal_363 = STREAMING::STREAMVOL_CREATE_FRUSTUM(556.0839f, -1724.9622f, 33.0732f, 18.6933f, 0.1321f, -157.4946f, 150f, 13, 127);
				iLocal_305 = 1;
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_323))
			{
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_323) > 0.98f || __LIB_6__::func_841(1000))
				{
					iLocal_328 = 3;
				}
			}
			break;
		case 3:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::THEFEED_HIDE_THIS_FRAME();
			if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", false, -1))
			{
				CAM::DESTROY_CAM(iLocal_361, false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				Local_331.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				CAM::ADD_CAM_SPLINE_NODE(Local_331.f_4, 556.0839f, -1724.9622f, 33.0732f, 18.6933f, 0.1321f, -157.4946f, 7000, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(Local_331.f_4, 556.0934f, -1724.9857f, 35.9731f, 12.1284f, 0.1325f, -157.7881f, 7000, 3, 2);
				CAM::SET_CAM_FOV(Local_331.f_4, 37.1751f);
				CAM::SET_CAM_ACTIVE(Local_331.f_4, true);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "TIME_LAPSE_MASTER", 0, true);
				__LIB_32__::func_723(&Local_331, 1, 0, 2000, 1, 1, 0, 1);
				Local_331.f_0 = __LIB_13__::func_95();
				iLocal_339 = __LIB_13__::func_95();
				__LIB_32__::func_437(&iLocal_339, 0, 0, 2, 0, 0, 0);
				iLocal_340 = __LIB_0__::func_196(iLocal_339);
				__LIB_6__::func_771();
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				iLocal_328 = 4;
			}
			break;
		case 4:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::THEFEED_HIDE_THIS_FRAME();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_323))
			{
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_323, 0.99f);
			}
			if (__LIB_35__::func_927(iLocal_340, 0, "EXTRASUNNY", "cirrocumulus", &Local_331, -1082130432, 0, 1, 1065353216) || __LIB_6__::func_841(1000))
			{
				AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
				AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
				iLocal_328 = 5;
			}
			break;
		case 5:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::THEFEED_HIDE_THIS_FRAME();
			if (__LIB_0__::func_90())
			{
				if (__LIB_1__::func_197(Local_53.f_28[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_53.f_28[0], "Josh", 0, 0, 0);
				}
				__LIB_26__::func_252();
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(15f, 0f, 0);
				RECORDING::REPLAY_START_EVENT(1);
				CUTSCENE::START_CUTSCENE(0);
				SYSTEM::WAIT(0);
				__LIB_32__::func_723(&Local_331, 0, 0, 2000, 1, 0, 0, 1);
				__LIB_32__::func_824(569.7302f, -1774.3785f, 27.897423f, 560.64905f, -1770.2645f, 31.606855f, 14.75f, 573.5463f, -1759.4382f, 28.1695f, 354.0835f, 1, 1, 1, 0, 0);
				CAM::DESTROY_CAM(iLocal_361, false);
				STREAMING::STREAMVOL_DELETE(iLocal_363);
				iLocal_305 = 0;
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				iLocal_328 = 6;
			}
			break;
		case 6:
			if (CAM::DOES_CAM_EXIST(iLocal_361))
			{
				CAM::DESTROY_CAM(iLocal_361, false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			}
			CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Josh", 0))
			{
				if (__LIB_1__::func_197(Local_53.f_28[0]))
				{
					iLocal_324 = PED::CREATE_SYNCHRONIZED_SCENE(563.76f, -1773.86f, 28.36f, 0.02f, 0.02f, -110.7f, 2);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_53.f_28[0], false, false);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_53.f_28[0], iLocal_324, "rcmjosh2", "josh_leadout", 4f, -4f, 5, 0, 1000f, 0);
					iLocal_311 = 1;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				RECORDING::REPLAY_STOP_EVENT();
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 6f, 0f), 1f, -1, 1f, 1, 40000f);
				iLocal_310 = 1;
			}
			if (iLocal_310 == 0)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				iLocal_312 = 1;
			}
			if ((iLocal_310 == 1 && iLocal_311 == 1) && iLocal_312 == 1)
			{
				iLocal_328 = 7;
			}
			break;
		case 7:
			iLocal_328 = 9;
			break;
		case 9:
			__LIB_10__::func_700(&Local_53, 0, 1);
			if (iLocal_309 == 1)
			{
				__LIB_0__::func_367(0);
				iLocal_309 = 0;
			}
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_53.f_28[0], false);
			__LIB_8__::func_770(0);
			HUD::DISPLAY_HUD(true);
			HUD::DISPLAY_RADAR(true);
			__LIB_0__::func_523(&iLocal_354);
			iLocal_329 = 2;
			break;
	}
}

void func_469()//Position - 0x3694C
{
	if (!__LIB_0__::func_75() && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 565.1842f, -1777.2274f, 30.704159f, 549.9508f, -1770.103f, 35.947773f, 7f, false, true, 0))
	{
		if (__LIB_0__::func_121(Local_53.f_28[0]) && __LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), Local_53.f_28[0], 30f, 1))
		{
			if (iLocal_257 < 5)
			{
				if (MISC::GET_GAME_TIMER() > (iLocal_258 + (8000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000))))
				{
					if (__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_MOTEL", 6, 0, 0, 0))
					{
						iLocal_258 = MISC::GET_GAME_TIMER();
						iLocal_257++;
						return;
					}
				}
			}
		}
	}
}

void func_500()//Position - 0x3C4D2
{
	int iVar0;
	if (__LIB_0__::func_294() == 1 && iLocal_285 == 0)
	{
		iVar0 = __LIB_0__::func_315();
		if (Global_94618 == 1)
		{
			iVar0++;
		}
		if (iVar0 == 0)
		{
			func_595();
		}
		else if (iVar0 == 1)
		{
			func_594();
		}
		else if (iVar0 == 2)
		{
			func_591();
		}
		else if (iVar0 == 3)
		{
			func_502();
		}
	}
	else
	{
		func_501();
		iLocal_329 = 1;
	}
}

void func_501()//Position - 0x3C540
{
	STREAMING::REQUEST_ANIM_DICT("rcmjosh");
	STREAMING::REQUEST_ANIM_DICT("rcmjosh2");
	HUD::REQUEST_ADDITIONAL_TEXT("JOSH2", 0);
	STREAMING::REQUEST_MODEL(joaat("felon2"));
	while (((!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !STREAMING::HAS_MODEL_LOADED(joaat("felon2"))) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh2")) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh"))
	{
		SYSTEM::WAIT(0);
	}
}

void func_502()//Position - 0x3C5A9
{
	__LIB_0__::func_370(-1066.0558f, 387.088f, 67.8674f, 284.5628f, 1, 0);
	func_27();
	func_501();
	func_421();
	func_417();
	func_416();
	func_408();
	func_589();
	func_505();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	if (__LIB_1__::func_183(iLocal_341))
	{
		__LIB_10__::func_701(iLocal_341, -1059.892f, 387.9023f, 67.9261f, 307.9631f, 0, 1);
		if (__LIB_1__::func_197(iLocal_349))
		{
			iLocal_297 = 1;
			iLocal_295 = 1;
			iLocal_278 = 1;
			if (iLocal_296 == 0)
			{
				iLocal_296 = 1;
			}
		}
	}
	ENTITY::SET_ENTITY_COORDS(iLocal_349, -1060.7996f, 389.5708f, 67.8701f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(iLocal_349, 105.1316f);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_341, 5f);
	PED::SET_PED_MOVEMENT_CLIPSET(iLocal_349, "MOVE_M@BAIL_BOND_NOT_TAZERED", 0.25f);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_349, 17, true);
	VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_341, 101f);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_341, false, true, false);
	__LIB_6__::func_775(0, -1, 1);
	SYSTEM::WAIT(1000);
	if (__LIB_1__::func_197(iLocal_349))
	{
		PED::SET_PED_KEEP_TASK(iLocal_349, true);
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_349, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
		{
			TASK::TASK_WANDER_STANDARD(iLocal_349, 40000f, 0);
		}
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	__LIB_0__::func_84(800, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	while (!CAM::IS_SCREEN_FADED_IN())
	{
		SYSTEM::WAIT(0);
	}
	func_52();
}

void func_505()//Position - 0x3C7E7
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_348))
	{
		__LIB_41__::func_639(&iLocal_348, -904.9491f, 17.5415f, 45.5212f, 109.7778f, 1, 1, 0, 1, 1, joaat("felon2"), 2, 145, 1);
	}
	__LIB_0__::func_523(&iLocal_352);
	PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -913.5941f, 12.8344f, 46.5934f);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 127.8599f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	iLocal_329 = 4;
}

void func_589()//Position - 0x42DDC
{
	func_417();
	func_416();
	func_408();
	PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -851.0237f, 4.1346f, 41.9042f);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 86.4924f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	iLocal_329 = 3;
}

void func_591()//Position - 0x42EBC
{
	float fVar0;
	var uVar1;
	__LIB_0__::func_370(-923.8829f, 5.9621f, 46.5911f, 0f, 1, 0);
	__LIB_10__::func_696(0, 0);
	func_27();
	func_501();
	func_421();
	func_417();
	func_416();
	func_408();
	func_589();
	__LIB_0__::func_523(&iLocal_352);
	iLocal_329 = 4;
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-887.371f, -101.87748f, 34.38772f, -989.136f, 60.98683f, 58.366745f, 31.5f, false, false, true);
	MISC::CLEAR_AREA(-923.8829f, 5.9621f, 46.5911f, 50f, true, false, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_348))
	{
		__LIB_41__::func_639(&iLocal_348, -897.5433f, 20.4735f, 44.9163f, 110.3058f, 1, 1, 0, 1, 1, joaat("felon2"), 2, 145, 1);
	}
	if (__LIB_1__::func_183(iLocal_348))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_348, true);
		VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_348, false);
		__LIB_10__::func_701(iLocal_348, -903.2674f, 18.7336f, 45.224f, 113.1507f, 0, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_348, 5f);
		iLocal_246 = MISC::GET_GAME_TIMER();
	}
	__LIB_6__::func_775(iLocal_348, -1, 1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	while (fVar0 < 1f && MISC::GET_GAME_TIMER() < iLocal_246 + 2000)
	{
		SYSTEM::WAIT(0);
		OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_03a"), -905.69666f, 14.659701f, 45.675934f, &uVar1, &fVar0);
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_256[3]))
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_256[3], 1f, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_256[3], 5, true, false);
		}
		func_619();
	}
	if (__LIB_1__::func_183(iLocal_348))
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_348, 2f);
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), iLocal_348, "Josh2Roll", 262144, 0, 8, -1, -1f, false, 2f);
		iLocal_246 = MISC::GET_GAME_TIMER();
	}
	while (MISC::GET_GAME_TIMER() < iLocal_246 + 1200)
	{
		SYSTEM::WAIT(0);
		func_619();
	}
	iLocal_246 = MISC::GET_GAME_TIMER();
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	__LIB_0__::func_84(800, 0);
	__LIB_40__::func_640(1, 1, 1);
}

void func_594()//Position - 0x43125
{
	__LIB_0__::func_370(570.0771f, -1763.5652f, 28.1695f, 347.4368f, 1, 0);
	__LIB_10__::func_696(0, 0);
	func_501();
	func_421();
	iLocal_329 = 3;
	__LIB_6__::func_775(0, -1, 1);
	SYSTEM::WAIT(100);
	__LIB_0__::func_210("JOSH2_01", 7500, 0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	func_272(1, "Go To Rockford", 0, 0, 0, 1);
	__LIB_0__::func_84(800, 0);
	__LIB_40__::func_640(1, 1, 1);
}

void func_595()//Position - 0x431A7
{
	CUTSCENE::STOP_CUTSCENE(false);
	if (CAM::DOES_CAM_EXIST(iLocal_361))
	{
		CAM::DESTROY_CAM(iLocal_361, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	__LIB_0__::func_370(567.5291f, -1769.4231f, 28.1428f, 159.2917f, 1, 0);
	func_501();
	iLocal_285 = 1;
	iLocal_286 = 1;
	func_27();
	while (!__LIB_11__::func_893(&(Local_53.f_28[0]), 58, 565.3901f, -1772.8378f, 29.80087f, 62.501556f, 1))
	{
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_53.f_35[0]))
	{
		Local_53.f_35[0] = VEHICLE::CREATE_VEHICLE(joaat("felon2"), 558.09f, -1765.39f, 28.86f, 335.3252f, true, true, false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_53.f_35[0], 4);
	}
	else if (__LIB_0__::func_121(Local_53.f_35[0]))
	{
		ENTITY::SET_ENTITY_COORDS(Local_53.f_35[0], 558.09f, -1765.39f, 28.86f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_53.f_35[0], 335.3252f);
	}
	iLocal_329 = 1;
	__LIB_6__::func_775(0, -1, 1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	__LIB_0__::func_84(800, 0);
	__LIB_40__::func_640(1, 1, 1);
}

void func_597()//Position - 0x432FE
{
	if (!__LIB_0__::func_75())
	{
		if (iLocal_329 == 3)
		{
			if (__LIB_1__::func_197(Local_53.f_28[0]))
			{
				if (!__LIB_0__::func_405("JOSH2_01", 0, 0))
				{
					if (__LIB_0__::func_508(Local_53.f_28[0], PLAYER::PLAYER_PED_ID(), 30f, 1))
					{
						if (__LIB_1__::func_183(Local_53.f_35[0]))
						{
							if (__LIB_0__::func_456(PLAYER::PLAYER_PED_ID(), Local_53.f_35[0]))
							{
								if (iLocal_298 == 0)
								{
									if (__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_FELON", 7, 0, 0, 0))
									{
										iLocal_298 = 1;
									}
								}
							}
							if ((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_53.f_35[0], PLAYER::PLAYER_PED_ID(), true) && !AUDIO::IS_ANY_SPEECH_PLAYING(Local_53.f_28[0])) && iLocal_266 < 3) && MISC::GET_GAME_TIMER() > iLocal_265 + 8000) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_53.f_35[0], false))
							{
								__LIB_6__::func_834(Local_53.f_28[0], "WHATS_YOUR_PROBLEM", 3);
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_53.f_35[0]);
								iLocal_298 = 1;
								iLocal_265 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 4000));
								iLocal_266++;
							}
						}
					}
				}
				if (MISC::GET_GAME_TIMER() > iLocal_240 + 15000)
				{
					if (__LIB_8__::func_538(PLAYER::PLAYER_PED_ID(), Local_53.f_28[0]) < 30f)
					{
						if (!__LIB_0__::func_75())
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (iLocal_242 == 0)
								{
									if (__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_JOSH", 6, 0, 0, 0))
									{
										iLocal_242 = 1;
										iLocal_241 = MISC::GET_GAME_TIMER();
									}
								}
								else if (iLocal_242 == 1)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_241 + 10000)
									{
										if (__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_JOSH", 6, 0, 0, 0))
										{
											iLocal_242 = 2;
										}
									}
								}
								else if (iLocal_242 == 2)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_241 + 19000)
									{
										if (__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_JOSH", 6, 0, 0, 0))
										{
											iLocal_242 = 3;
										}
									}
								}
								else if (iLocal_242 == 3)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_241 + 27000)
									{
										if (__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_JOSH", 6, 0, 0, 0))
										{
											iLocal_242 = 4;
										}
									}
								}
								else if (iLocal_242 == 4)
								{
									if (MISC::GET_GAME_TIMER() > (iLocal_241 + 35000))
									{
										if (__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_JOSH", 6, 0, 0, 0))
										{
											iLocal_242 = 5;
										}
									}
								}
							}
						}
					}
				}
			}
			if (((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -853.6745f, -52.276905f, 31.25732f, -918.1265f, 47.04292f, 121.33125f, 75f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -879.9109f, 56.84485f, 38.78366f, -958.23553f, 59.31521f, 124.61187f, 25f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -859.33075f, 40.05341f, 29.865433f, -937.5096f, 8.682496f, 123.80586f, 68.25f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -841.4558f, -15.820283f, 54.40123f, -859.77734f, 16.357359f, 39.161922f, 24.5f, false, true, 0))
			{
				if (iLocal_236 == 0)
				{
					if (__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_273, 2200f, 1))
					{
						if (__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_TREV2", 7, 0, 0, 0))
						{
							iLocal_236 = 1;
						}
					}
				}
				else if (iLocal_236 == 1)
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_273, 1170f, 1))
						{
							if (!__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_273, 400f, 1))
							{
								if (__LIB_35__::func_540(&uLocal_54, 58, "JOSH2AU", "JOSH2_CALL", 9, 0, 0, 1))
								{
									iLocal_236 = 2;
								}
							}
							else
							{
								iLocal_247 = (MISC::GET_GAME_TIMER() - 8000);
								iLocal_236 = 3;
							}
						}
					}
				}
				if (iLocal_236 == 2)
				{
					if (__LIB_1__::func_412())
					{
						iLocal_247 = MISC::GET_GAME_TIMER();
						iLocal_236 = 3;
					}
				}
				if (iLocal_236 == 3)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_247 + 9000)
					{
						if (__LIB_37__::func_818(58, "JOSH2_TXT" /* GXT: Why hang up :( fyi he's driving a green comet */, 1, 0, 0, 0, 0, 1, 0, 1))
						{
							iLocal_236 = 4;
						}
					}
				}
			}
			if (iLocal_236 != 2)
			{
				if (iLocal_280 == 1)
				{
					iLocal_236 = 2;
				}
			}
		}
		else if (iLocal_329 == 4)
		{
			if (iLocal_236 != 2)
			{
				if (iLocal_280 == 1)
				{
					iLocal_236 = 2;
				}
			}
			if (iLocal_287 == 0)
			{
				if (__LIB_1__::func_183(iLocal_344))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_344, 1) < 14f)
					{
						if (__LIB_35__::func_901(&uLocal_54, "JOSH2AU", "JOSH2_COMET", "JOSH2_COMET_1", 7, 0, 0))
						{
							iLocal_287 = 1;
						}
					}
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -893.64386f, -0.506663f, 37.98975f, -884.3965f, -14.709142f, 47.418583f, 9.5f, false, true, 0))
			{
				if (iLocal_288 == 0)
				{
					if (iLocal_243 == 0)
					{
						iLocal_243 = 1;
					}
					else if (iLocal_243 == 1)
					{
						iLocal_243 = 2;
					}
				}
			}
		}
		else if (iLocal_329 == 5)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_251 + 7000)
			{
				if ((PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_349) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !iLocal_278)
				{
					if (__LIB_8__::func_538(PLAYER::PLAYER_PED_ID(), iLocal_349) < 16f)
					{
						if (iLocal_236 == 5)
						{
							if (__LIB_35__::func_901(&uLocal_54, "JOSH2AU", "JOSH2_CHASE2", "JOSH2_CHASE2_7", 7, 0, 0))
							{
								iLocal_236 = 6;
							}
						}
						if (iLocal_236 == 4)
						{
							if (__LIB_35__::func_901(&uLocal_54, "JOSH2AU", "JOSH2_CHASE2", "JOSH2_CHASE2_5", 7, 0, 0))
							{
								iLocal_236 = 5;
							}
						}
						if (iLocal_236 == 3)
						{
							if (__LIB_35__::func_901(&uLocal_54, "JOSH2AU", "JOSH2_CHASE2", "JOSH2_CHASE2_3", 7, 0, 0))
							{
								iLocal_236 = 4;
							}
						}
						if (iLocal_236 <= 2)
						{
							if (__LIB_35__::func_901(&uLocal_54, "JOSH2AU", "JOSH2_CHASE2", "JOSH2_CHASE2_1", 7, 0, 0))
							{
								iLocal_236 = 3;
							}
						}
					}
				}
			}
		}
		else if (iLocal_329 == 7)
		{
		}
	}
}

void func_617()//Position - 0x44BCE
{
	if (__LIB_1__::func_197(iLocal_351))
	{
		if (!PED::IS_PED_HEADTRACKING_PED(iLocal_351, PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_351, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		}
		if (iLocal_288 != 2)
		{
			if (iLocal_288 != 1)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_351, PLAYER::PLAYER_PED_ID(), true))
				{
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_351);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_351, 17, true);
					__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_ATTB", 7, 0, 0, 0);
					TASK::TASK_REACT_AND_FLEE_PED(iLocal_351, PLAYER::PLAYER_PED_ID());
					iLocal_288 = 2;
				}
			}
			if (__LIB_42__::func_335(iLocal_351, 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_351);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_351, 17, true);
					__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_ATTB", 7, 0, 0, 0);
					TASK::TASK_REACT_AND_FLEE_PED(iLocal_351, PLAYER::PLAYER_PED_ID());
					iLocal_288 = 2;
				}
			}
		}
		if (iLocal_288 == 0)
		{
			if (__LIB_1__::func_183(iLocal_346))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_346, false))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_351, 17, false);
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_351);
					TASK::TASK_COMBAT_PED(iLocal_351, PLAYER::PLAYER_PED_ID(), 0, 16);
					if (__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_STEALB", 7, 0, 0, 0))
					{
						iLocal_288 = 1;
					}
				}
			}
			if (__LIB_1__::func_183(iLocal_342))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, false))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_351, 17, false);
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_351);
					TASK::TASK_COMBAT_PED(iLocal_351, PLAYER::PLAYER_PED_ID(), 0, 16);
					if (__LIB_35__::func_536(&uLocal_54, "JOSH2AU", "JOSH2_STEALC", 7, 0, 0, 0))
					{
						iLocal_288 = 1;
					}
				}
			}
		}
	}
}

void func_618()//Position - 0x44D4E
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_349))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_349, false))
		{
			sLocal_326 = "JOSH2_F2";
			iLocal_329 = 11;
			return;
		}
		else if (PED::IS_PED_INJURED(iLocal_349))
		{
			sLocal_326 = "JOSH2_F2";
			iLocal_329 = 11;
			return;
		}
		else
		{
			if ((iLocal_329 == 5 || iLocal_329 == 6) || iLocal_329 == 7)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_353))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_349, false))
					{
						if (!__LIB_0__::func_508(iLocal_349, PLAYER::PLAYER_PED_ID(), 280f, 1))
						{
							sLocal_326 = "JOSH2_F1";
							iLocal_329 = 11;
						}
					}
				}
			}
			if (iLocal_280 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_251 + 5000)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_239 + 10000)
					{
						if (iLocal_282 == 1)
						{
							if (__LIB_8__::func_538(PLAYER::PLAYER_PED_ID(), iLocal_349) > 280f)
							{
								sLocal_326 = "JOSH2_F1";
								iLocal_329 = 11;
								return;
							}
						}
					}
					if (__LIB_8__::func_538(PLAYER::PLAYER_PED_ID(), iLocal_349) > 200f)
					{
						if (iLocal_282 == 0)
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_353))
							{
							}
							iLocal_239 = MISC::GET_GAME_TIMER();
							iLocal_282 = 1;
						}
					}
					else
					{
						iLocal_282 = 0;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_53.f_28[0]))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_53.f_28[0], false) || PED::IS_PED_INJURED(Local_53.f_28[0]))
		{
			sLocal_326 = "JOSH2_14";
			iLocal_329 = 11;
		}
		else
		{
			if (iLocal_329 == 1)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(Local_53.f_28[0], true) };
				if (MISC::IS_BULLET_IN_AREA(Var0, 20f, false) || __LIB_6__::func_824(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 566.6193f, -1771.6754f, 28.357866f, 565.95575f, -1773.1483f, 29.805521f, 1.29f))
				{
					__LIB_6__::func_771();
					TASK::TASK_SMART_FLEE_PED(Local_53.f_28[0], PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
					PED::SET_PED_KEEP_TASK(Local_53.f_28[0], true);
					sLocal_326 = "JOSH2_11";
					iLocal_329 = 11;
				}
				if (__LIB_0__::func_508(Local_53.f_28[0], PLAYER::PLAYER_PED_ID(), 30f, 1) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(30f, 30f, 30f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(30f, 30f, 30f)) || PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(30f, 30f, 30f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(30f, 30f, 30f)))
					{
						__LIB_6__::func_771();
						TASK::TASK_SMART_FLEE_PED(Local_53.f_28[0], PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
						PED::SET_PED_KEEP_TASK(Local_53.f_28[0], true);
						sLocal_326 = "JOSH2_11";
						iLocal_329 = 11;
					}
				}
			}
			if (PED::IS_PED_RAGDOLL(Local_53.f_28[0]))
			{
				iLocal_292 = 1;
				sLocal_326 = "JOSH2_13";
				iLocal_329 = 11;
			}
			if (iLocal_292 == 1)
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(Local_53.f_28[0]))
				{
					PED::SET_PED_PANIC_EXIT_SCENARIO(Local_53.f_28[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_53.f_28[0], PLAYER::PLAYER_PED_ID(), true))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_53.f_28[0], joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 1)
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(Local_53.f_28[0]))
					{
						PED::SET_PED_PANIC_EXIT_SCENARIO(Local_53.f_28[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
					}
					PED::SET_PED_KEEP_TASK(Local_53.f_28[0], true);
				}
				sLocal_326 = "JOSH2_13";
				iLocal_329 = 11;
			}
		}
	}
}

void func_619()//Position - 0x450BB
{
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-824.44f, -33.59f, 38.71f, 15f, joaat("prop_lrggate_01_r"), false))
	{
		iLocal_256[0] = MISC::GET_HASH_KEY("Josh2_door_0");
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_256[0]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_256[0], joaat("prop_lrggate_01_r"), -824.44f, -33.59f, 38.71f, true, true, false);
		}
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01_r"), -824.44f, -33.59f, 38.71f, true, 1.1f, false);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-827.3f, -29.11f, 38.87f, 15f, joaat("prop_lrggate_01_l"), false))
	{
		iLocal_256[1] = MISC::GET_HASH_KEY("Josh2_door_1");
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_256[1]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_256[1], joaat("prop_lrggate_01_l"), -827.3f, -29.11f, 38.87f, true, true, false);
		}
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01_l"), -827.3f, -29.11f, 38.87f, true, -1.1f, false);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-924.97534f, -9.033067f, 43.281506f, 10f, joaat("prop_lrggate_03a"), false))
	{
		iLocal_256[2] = MISC::GET_HASH_KEY("Josh2_door_2");
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_256[2]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_256[2], joaat("prop_lrggate_03a"), -924.97534f, -9.033067f, 43.281506f, true, true, false);
		}
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_03a"), -924.97534f, -9.033067f, 43.281506f, true, 1f, false);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-905.69666f, 14.659701f, 45.675934f, 10f, joaat("prop_lrggate_03a"), false))
	{
		iLocal_256[3] = MISC::GET_HASH_KEY("Josh2_door_3");
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_256[3]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_256[3], joaat("prop_lrggate_03a"), -905.69666f, 14.659701f, 45.675934f, true, true, false);
		}
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_03a"), -905.69666f, 14.659701f, 45.675934f, true, 1f, false);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-881.16f, -12.75f, 42.39f, 10f, joaat("prop_lrggate_02_ld"), false))
	{
		iLocal_256[4] = MISC::GET_HASH_KEY("Josh2_door_4");
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_256[4]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_256[4], joaat("prop_lrggate_02_ld"), -881.16f, -12.75f, 42.39f, true, true, false);
		}
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_02_ld"), -881.16f, -12.75f, 42.39f, true, 1f, false);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-889.88f, 6.78f, 43.99f, 10f, joaat("prop_lrggate_02_ld"), false))
	{
		iLocal_256[5] = MISC::GET_HASH_KEY("Josh2_door_5");
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_256[5]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_256[5], joaat("prop_lrggate_02_ld"), -889.88f, 6.78f, 43.99f, true, true, false);
		}
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_02_ld"), -889.88f, 6.78f, 43.99f, true, 1f, false);
	}
}

int func_637(var uParam0)//Position - 0x45ED4
{
	int iVar0[2];
	int iVar1;
	bool bVar2;
	iVar0[0] = uLocal_50;
	iVar0[1] = iLocal_51;
	switch (iLocal_49)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 574.05206f, -1770.5944f, 27.669289f };
			uParam0->f_17[1 /*3*/] = { 559.16315f, -1768.6635f, 31.41929f };
			uParam0->f_24 = 17.25f;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "josh_2_intp1_t4", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			STREAMING::REQUEST_ANIM_DICT("rcmjosh2");
			iLocal_49 = 1;
			break;
		case 1:
			if (!__LIB_10__::func_716(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh2"))
			{
				return 0;
			}
			iLocal_49 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!__LIB_26__::func_256(&(uParam0->f_28[0]), 58, 565.3901f, -1772.8378f, 29.80087f, 62.501556f, "JOSH LAUNCHER RC", 1))
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				func_638(&(uParam0->f_35[0]));
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 1);
			}
			if (bVar2)
			{
				iLocal_49 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_121(uParam0->f_28[0]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_28[0], true, 1);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 118, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 208, true);
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
				iLocal_52 = PED::CREATE_SYNCHRONIZED_SCENE(563.76f, -1773.86f, 28.36f, 0.02f, 0.02f, -110.7f, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_52, true);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], iLocal_52, "rcmjosh2", "josh_wait_loop", 2f, -4f, 0, 0, 1000f, 0);
			}
			STREAMING::REMOVE_ANIM_DICT("rcmjosh2");
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

void func_638(int* iParam0)//Position - 0x460F9
{
	__LIB_20__::func_649(iParam0, iLocal_51, 558.09f, -1765.39f, 28.86f, 335.3252f);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, 4);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam0, 2);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, false, 0);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(*iParam0, true);
}

void func_642()//Position - 0x461D6
{
	__LIB_26__::func_252();
	if (__LIB_26__::func_257())
	{
	}
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	func_652();
	STREAMING::STREAMVOL_DELETE(iLocal_363);
	iLocal_305 = 0;
	AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_362, false);
	__LIB_9__::func_981(&uLocal_219, 0, 0);
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_256[0]))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_256[0], 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_256[1]))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_256[1], 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_256[2]))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_256[2], 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_256[3]))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_256[3], 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_256[4]))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_256[4], 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_256[5]))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_256[5], 0);
	}
	if (iLocal_309 == 1)
	{
		__LIB_0__::func_367(0);
		iLocal_309 = 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("comet2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("gauntlet"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_Business_03"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bullet"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("superd"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("felon2"));
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("comet2"), false);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-887.371f, -101.87748f, 34.38772f, -989.136f, 60.98683f, 58.366745f, 31.5f, false, true, true);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_276, Local_277, 100f, false, true, true);
	__LIB_0__::func_106(&(iLocal_357[1]));
	__LIB_0__::func_106(&(iLocal_357[2]));
	__LIB_0__::func_106(&(iLocal_357[3]));
	__LIB_0__::func_106(&(iLocal_357[4]));
	__LIB_0__::func_106(&(iLocal_357[5]));
	__LIB_0__::func_106(&(iLocal_357[6]));
	__LIB_0__::func_106(&(iLocal_357[7]));
	__LIB_0__::func_106(&(iLocal_357[8]));
	__LIB_0__::func_106(&(iLocal_357[9]));
	__LIB_0__::func_106(&(iLocal_357[10]));
	__LIB_0__::func_106(&(iLocal_357[11]));
	__LIB_0__::func_106(&(iLocal_357[12]));
	__LIB_0__::func_106(&(iLocal_357[13]));
	__LIB_0__::func_106(&(iLocal_357[14]));
	__LIB_0__::func_124(&(iLocal_358[1]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_358[2]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_358[3]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_358[4]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_358[5]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_358[6]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_358[7]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_358[8]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_358[9]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_358[10]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_358[11]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_358[12]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_358[13]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_358[14]), 1, 0, 1);
	__LIB_32__::func_757(&Local_53, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_652()//Position - 0x46626
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JOSH_02_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("JOSH_02_SCENE");
	}
}

