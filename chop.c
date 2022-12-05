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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
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
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int* iLocal_70 = NULL;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	struct<3> Local_76 = { 0, 0, 0 } ;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	char* sLocal_80[3] = { NULL, NULL, NULL };
	char* sLocal_81 = NULL;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	struct<3> Local_84[4];
	float fLocal_85[4] = { 0f, 0f, 0f, 0f };
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<4> Local_88 = { 0, 0, 0, 0 } ;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	var uLocal_96 = 15;
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
	var uLocal_148 = 16;
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
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317[5] = { 0, 0, 0, 0, 0 };
	float fLocal_318[5] = { 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_319[5];
	struct<3> Local_320[5];
	int iLocal_321 = 0;
	struct<3> Local_322 = { 0, 0, 0 } ;
	struct<3> Local_323 = { 0, 0, 0 } ;
	float fLocal_324 = 0f;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	bool bLocal_327 = 0;
	int iLocal_328 = 0;
	struct<3> Local_329 = { 0, 0, 0 } ;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	float fLocal_341 = 0f;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	struct<3> Local_345 = { 0, 0, 0 } ;
	int iLocal_346 = 0;
	struct<3> Local_347 = { 0, 0, 0 } ;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	struct<3> Local_351 = { 0, 0, 0 } ;
	struct<3> Local_352 = { 0, 0, 0 } ;
	float fLocal_353 = 0f;
	struct<3> Local_354 = { 0, 0, 0 } ;
	struct<3> Local_355 = { 0, 0, 0 } ;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	struct<3> Local_358[8];
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	char* sLocal_370 = NULL;
	char* sLocal_371 = NULL;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	struct<2> Local_387 = { 0, 5 } ;
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
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 5;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	iLocal_54 = -1;
	sLocal_81 = "null";
	iLocal_82 = -1;
	iLocal_83 = -1;
	iLocal_94 = 1;
	fLocal_324 = 200f;
	iLocal_343 = MISC::GET_GAME_TIMER();
	iLocal_344 = 10000;
	iLocal_360 = -1;
	iLocal_369 = joaat("LAYOUT_STANDARD");
	sLocal_370 = "std_ds_open_door_for_chop";
	sLocal_371 = "creatures@rottweiler@in_vehicle@std_car";
	iLocal_379 = MISC::GET_GAME_TIMER();
	iLocal_382 = MISC::GET_GAME_TIMER();
	iLocal_384 = AUDIO::GET_SOUND_ID();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_180();
	}
	while (!CAM::IS_SCREEN_FADED_IN())
	{
		SYSTEM::WAIT(0);
	}
	iLocal_386 = CAM::IS_GAMEPLAY_HINT_ACTIVE();
	Local_345 = { ScriptParam_387.f_1[0 /*3*/] };
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1)
	{
		func_180();
	}
	if (!__LIB_0__.func_368(63))
	{
		func_180();
	}
	if (!__LIB_0__.func_369(5) && !__LIB_0__.func_369(6))
	{
		func_180();
	}
	if (__LIB_0__.func_369(6) && __LIB_6__.func_815(Local_345, 1, 0) == 5)
	{
		func_180();
	}
	if (!__LIB_32__.func_759(1))
	{
		func_180();
	}
	if (Global_32107 == 1)
	{
		func_180();
	}
	if (Global_97361 == 1)
	{
		func_180();
	}
	if (__LIB_6__.func_854(0))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("sh_intro_f_hills")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("martin1")) == 0)
		{
			func_180();
		}
	}
	if ((((__LIB_11__.func_330() == 206 || __LIB_11__.func_330() == 207) || __LIB_11__.func_330() == 204) || __LIB_11__.func_330() == 205) || __LIB_11__.func_330() == 203)
	{
		iLocal_325 = 1;
	}
	else if (__LIB_11__.func_330() == 47)
	{
		iLocal_326 = 1;
	}
	else
	{
		if ((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_345, 154.0731f, 765.5721f, 209.6901f, true) <= 50f || MISC::GET_DISTANCE_BETWEEN_COORDS(Local_345, -268.139f, 415.2881f, 109.7258f, true) <= 50f) || MISC::GET_DISTANCE_BETWEEN_COORDS(Local_345, 314.4171f, 965.207f, 208.4024f, true) <= 50f)
		{
			func_180();
		}
		iLocal_325 = 0;
		iLocal_326 = 0;
		if (Global_78317 == 1)
		{
			func_180();
		}
	}
	while (true)
	{
		if (!func_163())
		{
			switch (iLocal_50)
			{
				case 0:
					func_154();
					break;
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			func_180();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x2AC
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iLocal_69))
	{
		return;
	}
	func_152();
	func_151();
	if (iLocal_51 != 11)
	{
		func_150();
		func_149();
		func_129();
		func_128();
		func_126();
	}
	__LIB_23__.func_158();
}

int func_5()//Position - 0x1D44
{
	struct<3> Var0;
	float fVar1;
	if (__LIB_0__.func_76(iLocal_69, iLocal_361, 1) < (0.5f + 0.25f))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_361, true) };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0.f_0, Var0.f_1, (Var0.f_2 + 1f), &fVar1, false, false))
		{
			if (MISC::ABSF((Var0.f_2 - fVar1)) < 0.1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_17()//Position - 0x2480
{
	iLocal_62 = MISC::GET_GAME_TIMER();
	if (iLocal_75 == 0)
	{
		func_121(1, 1);
	}
	else
	{
		func_121(2, 1);
	}
}

void func_18()//Position - 0x24A3
{
	float fVar0;
	if ((MISC::GET_GAME_TIMER() - iLocal_56) > iLocal_58)
	{
		fVar0 = __LIB_0__.func_529(iLocal_69, Local_323, 1);
		if (fVar0 < 10f)
		{
			func_122("BARK_SEQ");
		}
		else
		{
			func_122("BARK");
		}
		iLocal_56 = MISC::GET_GAME_TIMER();
		if (fVar0 < 20f)
		{
			iLocal_58 = MISC::GET_RANDOM_INT_IN_RANGE(4000, 5000);
		}
		else if (fVar0 < 50f)
		{
			iLocal_58 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 6000);
		}
		else
		{
			iLocal_58 = MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000);
		}
		if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !BitTest(Global_113386.f_10049.f_94, 1)) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			MISC::SET_BIT(&(Global_113386.f_10049.f_94), 1);
			__LIB_0__.func_151("CHOP_H_HUNT" /* GXT: Chop will bark more often when he nears pickups. */, -1);
		}
	}
}

int func_19()//Position - 0x256D
{
	int iVar0;
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_69) || (iLocal_51 == 10 && PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 25 /*INPUT_AIM*/)))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
	}
	return 0;
}

void func_20()//Position - 0x25B4
{
	if (!__LIB_4__.func_465(iLocal_69, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
	{
		STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@indication@");
		if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@indication@"))
		{
			TASK::CLEAR_PED_TASKS(iLocal_69);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_322, 0);
			TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@indication@", func_21(), 8f, -4f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_69, iLocal_95);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
		}
	}
}

char* func_21()//Position - 0x2626
{
	char* sVar0;
	struct<3> Var1;
	if (__LIB_0__.func_121(iLocal_69))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_69, true) };
		if ((Var1.f_2 + 1f) < Local_322.f_2)
		{
			sVar0 = "indicate_high";
		}
		else if ((Var1.f_2 - 1f) > Local_322.f_2)
		{
			sVar0 = "indicate_low";
		}
		else
		{
			sVar0 = "indicate_ahead";
		}
	}
	return sVar0;
}

int func_22()//Position - 0x267A
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
	{
		if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()) || func_23())
		{
			return 1;
		}
	}
	return 0;
}

int func_23()//Position - 0x26BB
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true));
		if ((((((((((((((((((iVar0 == joaat("caddy") || iVar0 == joaat("caddy2")) || iVar0 == joaat("dune")) || iVar0 == joaat("airtug")) || iVar0 == joaat("blazer")) || iVar0 == joaat("blazer2")) || iVar0 == joaat("bulldozer")) || iVar0 == joaat("cutter")) || iVar0 == joaat("dump")) || iVar0 == joaat("forklift")) || iVar0 == joaat("handler")) || iVar0 == joaat("mower")) || iVar0 == joaat("rhino")) || iVar0 == joaat("tractor")) || iVar0 == joaat("tractor2")) || iVar0 == joaat("tractor3")) || iVar0 == MISC::GET_HASH_KEY("bifta" /* GXT: Bifta */)) || iVar0 == joaat("blazer3")) || iVar0 == joaat("dune2"))
		{
			return 1;
		}
	}
	return 0;
}

int func_24()//Position - 0x27ED
{
	switch (iLocal_314)
	{
		case 2:
			if (!func_27(2))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		case 1:
			if (!func_27(1))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		case 0:
			if (!func_27(0))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		case 3:
			if (func_26(iLocal_321))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		case 4:
			if (func_25(iLocal_321))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_25(int iParam0)//Position - 0x289B
{
	if (iParam0 < 0 || iParam0 >= 50)
	{
		return 0;
	}
	if (iParam0 <= 31)
	{
		return BitTest(Global_113386.f_10049.f_125, iParam0);
	}
	return BitTest(Global_113386.f_10049.f_125.f_1, (iParam0 - 32));
}

int func_26(int iParam0)//Position - 0x28E0
{
	if (iParam0 < 0 || iParam0 >= 50)
	{
		return 0;
	}
	if (iParam0 <= 31)
	{
		return BitTest(Global_113386.f_10049.f_122, iParam0);
	}
	return BitTest(Global_113386.f_10049.f_122.f_1, (iParam0 - 32));
}

int func_27(int iParam0)//Position - 0x2925
{
	if (func_31())
	{
		func_30(iParam0, iLocal_321);
	}
	if (func_29())
	{
		if (func_28())
		{
			func_34();
			return 0;
		}
		func_34();
	}
	return 1;
}

bool func_28()//Position - 0x2958
{
	return Global_32206;
}

int func_29()//Position - 0x2963
{
	if (Global_32203 == 2)
	{
		return 1;
	}
	return 0;
}

void func_30(int iParam0, int iParam1)//Position - 0x2977
{
	if (Global_32203 == 0)
	{
		Global_32203 = 1;
		Global_32204 = iParam0;
		Global_32205 = iParam1;
	}
}

int func_31()//Position - 0x2994
{
	if (Global_32203 == 0)
	{
		return 1;
	}
	return 0;
}

void func_32()//Position - 0x29A8
{
	struct<3> Var0;
	Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_69, true) };
	__LIB_30__.func_913(Var0);
	func_122("WHINE");
	func_108("CHOP_NONEAR", 0);
	func_17();
}

void func_34()//Position - 0x29F0
{
	Global_32203 = 3;
}

int func_35()//Position - 0x29FC
{
	iLocal_321 = -1;
	Local_322 = { 0f, 0f, 0f };
	Local_323 = { 0f, 0f, 0f };
	func_36(0);
	if (iLocal_321 == -1)
	{
		func_36(1);
	}
	if (iLocal_321 > -1)
	{
		return 1;
	}
	return 0;
}

void func_36(int iParam0)//Position - 0x2A35
{
	float fVar0;
	int iVar1;
	fVar0 = 9999f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if ((iLocal_317[iVar1] > -1 && fLocal_318[iVar1] < fVar0) && func_37(iParam0, iVar1))
		{
			fVar0 = fLocal_318[iVar1];
			iLocal_321 = iLocal_317[iVar1];
			iLocal_314 = iVar1;
			Local_322 = { Local_319[iVar1 /*3*/] };
			Local_323 = { Local_320[iVar1 /*3*/] };
		}
		iVar1++;
	}
}

int func_37(int iParam0, int iParam1)//Position - 0x2AB5
{
	if (iParam0 == 1)
	{
		return 1;
	}
	if (iParam1 == 1 && ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) >= 200)
	{
		return 0;
	}
	if (iParam1 == 0 && PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()) >= 100)
	{
		return 0;
	}
	return 1;
}

int func_38()//Position - 0x2AFE
{
	if (iLocal_315 == 5)
	{
		iLocal_315 = 0;
	}
	switch (iLocal_315)
	{
		case 0:
			if (iLocal_317[0] > -1)
			{
				if (func_31())
				{
					func_30(0, iLocal_317[0]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_317[0] = -1;
					}
					func_34();
					iLocal_315 = 1;
				}
			}
			else
			{
				iLocal_315 = 1;
			}
			break;
		case 1:
			if (iLocal_317[1] > -1)
			{
				if (func_31())
				{
					func_30(1, iLocal_317[1]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_317[1] = -1;
					}
					func_34();
					iLocal_315 = 2;
				}
			}
			else
			{
				iLocal_315 = 2;
			}
			break;
		case 2:
			if (iLocal_317[2] > -1)
			{
				if (func_31())
				{
					func_30(2, iLocal_317[2]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_317[2] = -1;
					}
					func_34();
					iLocal_315 = 3;
				}
			}
			else
			{
				iLocal_315 = 3;
			}
			break;
		case 3:
			if (iLocal_317[3] > -1)
			{
				if (func_26(iLocal_317[3]))
				{
					iLocal_317[3] = -1;
				}
			}
			if (iLocal_317[4] > -1)
			{
				if (func_25(iLocal_317[4]))
				{
					iLocal_317[4] = -1;
				}
			}
			iLocal_315 = 5;
			return 1;
			break;
	}
	return 0;
}

void func_41()//Position - 0x2CD7
{
	struct<3> Var0;
	if ((((((__LIB_11__.func_826() != 1 && (MISC::GET_GAME_TIMER() - iLocal_62) > 10000) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && iLocal_86 == 0) && iLocal_367 != joaat("WEAPON_BALL")) && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f) == 0) && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(iLocal_69, ENTITY::GET_ENTITY_COORDS(iLocal_69, true), 100f) == 0)
	{
		STREAMING::REQUEST_PTFX_ASSET();
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_69, true) };
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_76, false) < 1f)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_355, false) > 20f)
				{
					__LIB_0__.func_122(&iLocal_349, 0);
					iLocal_349 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var0, 10f, joaat("prop_streetlight_01"), true, false, true);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_349))
					{
						Local_355 = { ENTITY::GET_ENTITY_COORDS(iLocal_349, true) };
						func_121(14, 1);
					}
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_354, false) > 20f)
				{
					Local_354 = { Var0 };
					func_121(13, 1);
				}
			}
			Local_76 = { ENTITY::GET_ENTITY_COORDS(iLocal_69, true) };
			iLocal_62 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_44()//Position - 0x2E94
{
	if (((!BitTest(Global_113386.f_10049.f_94, 7) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		MISC::SET_BIT(&(Global_113386.f_10049.f_94), 7);
		__LIB_0__.func_151("CHOP_H_BALL" /* GXT: When taking Chop for a walk, Franklin can play fetch using the ball in the weapon wheel. */, -1);
	}
	if (((__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && __LIB_0__.func_121(iLocal_69)) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_69, true))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_367, true);
		if (((((iLocal_367 == joaat("WEAPON_BALL") || iLocal_367 == joaat("WEAPON_GRENADE")) || iLocal_367 == joaat("WEAPON_SMOKEGRENADE")) || iLocal_367 == joaat("WEAPON_STICKYBOMB")) || iLocal_367 == joaat("WEAPON_MOLOTOV")) || iLocal_367 == joaat("WEAPON_FLARE"))
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_121(15, 1);
			}
			else if (((MISC::GET_GAME_TIMER() - iLocal_63) > 10000 && ENTITY::GET_ENTITY_SPEED(iLocal_69) < 1f) && __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_69, 1) < 5f)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@enter");
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@idle_a");
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@exit");
				if ((STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_barking@enter") && STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_barking@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_barking@exit"))
				{
					TASK::CLEAR_PED_TASKS(iLocal_69);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_69, iLocal_95);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
					iLocal_63 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

void func_45()//Position - 0x3074
{
	if (__LIB_0__.func_300() && !__LIB_37__.func_312(4))
	{
		if ((__LIB_0__.func_121(iLocal_69) && iLocal_86 == 0) && PED::IS_PED_IN_GROUP(iLocal_69))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_69);
		}
		func_121(12, 1);
	}
}

void func_53()//Position - 0x385F
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (iLocal_60 == -1)
		{
			iLocal_60 = MISC::GET_GAME_TIMER();
			iLocal_61 = MISC::GET_RANDOM_INT_IN_RANGE(4000, 6000);
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_60) > iLocal_61)
		{
			func_122("SNARL");
			iLocal_60 = -1;
		}
	}
}

void func_54()//Position - 0x38A2
{
	if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_86 > 1 && iLocal_86 < 8)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 309, true);
		}
		if (iLocal_93 == 1 && iLocal_86 == 1)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 313, true);
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_372 = MISC::GET_GAME_TIMER();
				iLocal_65 = -1;
				iLocal_66 = -1;
				iLocal_57 = MISC::GET_GAME_TIMER();
				func_82();
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
				iLocal_385 = 1;
				iLocal_86 = 1;
			}
			else
			{
				if (iLocal_369 != 0)
				{
					iLocal_369 = 0;
				}
				iLocal_313 = 0;
				iLocal_59 = -1;
				if (func_81())
				{
					func_121(3, 1);
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_86 = 15;
			}
			else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (func_80())
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) != PLAYER::PLAYER_PED_ID())
					{
						func_121(3, 1);
					}
					else
					{
						if (!__LIB_0__.func_121(iLocal_78))
						{
							iLocal_78 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							func_79();
							func_78();
						}
						STREAMING::REQUEST_ANIM_DICT(sLocal_371);
						if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_371) && __LIB_0__.func_121(iLocal_78))
						{
							if (PED::IS_PED_IN_GROUP(iLocal_69))
							{
								PED::REMOVE_PED_FROM_GROUP(iLocal_69);
							}
							if (func_77())
							{
								if (iLocal_65 == -1)
								{
									iLocal_65 = MISC::GET_GAME_TIMER();
								}
								if (func_76())
								{
									func_75(1);
									iLocal_86 = 6;
								}
								else
								{
									func_74();
								}
							}
							else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), iLocal_78, 0, false, false))
							{
								if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_78, 1) > 0.9f)
								{
									iLocal_86 = 4;
								}
								else
								{
									iLocal_86 = 2;
								}
							}
							else
							{
								func_75(1);
								iLocal_86 = 6;
							}
						}
					}
				}
				else if (func_22())
				{
					iLocal_86 = 14;
				}
				else
				{
					if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !BitTest(Global_113386.f_10049.f_94, 3)) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						MISC::SET_BIT(&(Global_113386.f_10049.f_94), 3);
						__LIB_0__.func_151("CHOP_H_NOVEH" /* GXT: Chop can only get into suitable cars with an empty front passenger seat. */, -1);
					}
					func_121(3, 1);
				}
			}
			else
			{
				if (func_80())
				{
					STREAMING::REQUEST_ANIM_DICT("misschop_vehicleenter_exit");
					func_74();
				}
				if (iLocal_313 == 0 && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_69, 185, false);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !func_23())
					{
						if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) == joaat("taxi"))
						{
						}
						else if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) >= 1 && VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0, false))
						{
							if (!__LIB_0__.func_75())
							{
								func_108("CHOP_RIDE", 0);
							}
						}
					}
					else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) || func_23())
					{
						func_108("CHOP_FOLLOW", 0);
					}
					iLocal_313 = 1;
				}
			}
			break;
		case 2:
			func_72();
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_86 = 15;
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT("misschop_vehicleenter_exit");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misschop_vehicleenter_exit"))
				{
					func_71();
					iLocal_86 = 3;
				}
			}
			break;
		case 3:
			func_72();
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_86 = 15;
			}
			else if (__LIB_0__.func_121(iLocal_78) && func_70())
			{
				if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_78, iLocal_94, false, false);
				}
				iLocal_383 = MISC::GET_GAME_TIMER();
				iLocal_65 = MISC::GET_GAME_TIMER();
				iLocal_86 = 4;
			}
			break;
		case 4:
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_86 = 15;
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT(sLocal_371);
				if (__LIB_0__.func_121(iLocal_78))
				{
					if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_78, iLocal_94) < 0.95f)
					{
						VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_78, iLocal_94, false, false);
						iLocal_383 = MISC::GET_GAME_TIMER();
					}
					if (func_76() && MISC::GET_GAME_TIMER() >= iLocal_383 + 300)
					{
						if (!__LIB_4__.func_465(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PLAY_ANIM")) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_371))
						{
							func_72();
							func_69(1, 1);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_69);
							iLocal_87 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_87, iLocal_78, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_78, "seat_pside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_69, iLocal_87, sLocal_371, "get_in", 1000f, -8f, 4, 0, 1000f, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
							iLocal_86 = 5;
						}
					}
					else
					{
						func_74();
					}
				}
			}
			break;
		case 5:
			func_72();
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(iLocal_380))
				{
					CAM::SET_USE_HI_DOF();
				}
				STREAMING::REQUEST_ANIM_DICT(sLocal_371);
				if (((STREAMING::HAS_ANIM_DICT_LOADED(sLocal_371) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_87)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_87) > 0.99f) && __LIB_0__.func_121(iLocal_78))
				{
					func_69(0, 1);
					func_75(0);
					iLocal_86 = 6;
				}
			}
			break;
		case 6:
			func_72();
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT("misschop_vehicleenter_exit");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misschop_vehicleenter_exit") && __LIB_0__.func_121(iLocal_78))
				{
					if ((!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_78, 1) > 0.1f) && !func_77())
					{
						func_71();
					}
					iLocal_86 = 7;
				}
			}
			break;
		case 7:
			func_72();
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else if (__LIB_0__.func_121(iLocal_78) && func_70())
			{
				if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94))
				{
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_78, iLocal_94, false);
				}
				iLocal_86 = 8;
			}
			break;
		case 8:
			func_72();
			__LIB_0__.func_523(&iLocal_70);
			__LIB_11__.func_813(1);
			if (iLocal_54 == -1)
			{
				iLocal_54 = MISC::GET_GAME_TIMER();
				iLocal_55 = 7000;
			}
			if (__LIB_0__.func_121(iLocal_78))
			{
				if (func_66())
				{
					func_68(2f, 0f, 0f, 1);
				}
				else if (FIRE::IS_ENTITY_ON_FIRE(iLocal_78))
				{
					func_68(2f, 0f, 0f, 1);
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SPEED(iLocal_78) < 5f)
					{
						if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94))
						{
							VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_78, iLocal_94, false, false);
						}
						iLocal_86 = 12;
					}
				}
				else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 75 /*INPUT_VEH_EXIT*/))
				{
					if (ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_78))
					{
						func_68(2f, 0f, 0f, 1);
					}
					else if (func_77())
					{
						iLocal_86 = 9;
					}
					else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), iLocal_78, 0, false, false))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_78, 10f, 1, false);
						if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94))
						{
							iLocal_86 = 12;
						}
						else
						{
							iLocal_86 = 10;
						}
					}
					else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), iLocal_78, -1, false, false))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_78, 10f, 1, false);
						func_68(-2f, 0f, 0f, 0);
					}
					else
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_78, 10f, 1, false);
						func_68(0f, -4f, 0f, 0);
					}
				}
				else
				{
					func_65();
					func_63();
					func_62();
					if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !BitTest(Global_113386.f_10049.f_94, 2)) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						MISC::SET_BIT(&(Global_113386.f_10049.f_94), 2);
						__LIB_0__.func_151("CHOP_H_CAR" /* GXT: Chop will follow Franklin into suitable cars with an empty front passenger seat. */, -1);
					}
				}
			}
			else
			{
				func_68(2f, 0f, 0f, 1);
			}
			break;
		case 9:
			func_72();
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__.func_465(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				func_68(2f, 0f, 0f, 1);
			}
			break;
		case 10:
			func_72();
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT("misschop_vehicleenter_exit");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misschop_vehicleenter_exit"))
				{
					func_71();
					iLocal_86 = 11;
				}
			}
			break;
		case 11:
			func_72();
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else if (__LIB_0__.func_121(iLocal_78) && func_70())
			{
				if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_78, iLocal_94, false, false);
				}
				iLocal_86 = 12;
			}
			break;
		case 12:
			func_72();
			STREAMING::REQUEST_ANIM_DICT(sLocal_371);
			if ((!__LIB_4__.func_465(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PLAY_ANIM")) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_371)) && __LIB_0__.func_121(iLocal_78))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_69);
				iLocal_87 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_87, iLocal_78, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_78, "seat_pside_f"));
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_69, iLocal_87, sLocal_371, "get_out", 1000f, -8f, 10, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
				iLocal_86 = 13;
			}
			break;
		case 13:
			func_72();
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && (MISC::GET_GAME_TIMER() - iLocal_373) > 1500) && !__LIB_4__.func_465(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_87) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_87) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_87) > 0.99f))
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(iLocal_69, iLocal_69, 0f, 5f, 0f, 1f, 20000);
				iLocal_86 = 15;
			}
			break;
		case 14:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_86 = 15;
			}
			else
			{
				func_65();
				if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !BitTest(Global_113386.f_10049.f_94, 5)) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					MISC::SET_BIT(&(Global_113386.f_10049.f_94), 5);
					__LIB_0__.func_151("CHOP_H_BIKE" /* GXT: Chop will follow bikes and other vehicles he cannot get inside. */, -1);
				}
			}
			break;
		case 15:
			func_72();
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				func_57();
				func_99(0, 0, 0);
				STREAMING::REMOVE_ANIM_DICT("misschop_vehicleenter_exit");
				STREAMING::REMOVE_ANIM_DICT(sLocal_371);
				iLocal_62 = MISC::GET_GAME_TIMER();
				func_56();
				__LIB_0__.func_106(&iLocal_78);
				iLocal_78 = 0;
				iLocal_54 = -1;
				TASK::CLEAR_PED_TASKS(iLocal_69);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_69, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_69, 185, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
				func_121(2, 1);
			}
			else if (!__LIB_4__.func_465(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			break;
	}
}

void func_56()//Position - 0x42E7
{
	if (((iLocal_385 == 1 && __LIB_0__.func_121(VEHICLE::GET_LAST_DRIVEN_VEHICLE())) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(VEHICLE::GET_LAST_DRIVEN_VEHICLE()) > 1) && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), iLocal_94))
	{
		VEHICLE::SET_VEHICLE_DOOR_LATCHED(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), iLocal_94, false, true, false);
	}
}

void func_57()//Position - 0x4330
{
	if ((!HUD::DOES_BLIP_EXIST(iLocal_70) && __LIB_0__.func_121(iLocal_69)) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_69, true))
	{
		if (__LIB_0__.func_368(126))
		{
			__LIB_10__.func_604(139, 0, 0);
		}
		else
		{
			__LIB_10__.func_604(138, 0, 0);
		}
		iLocal_70 = __LIB_6__.func_850(iLocal_69, 0, 145);
		HUD::SET_BLIP_SPRITE(iLocal_70, 273);
	}
}

void func_62()//Position - 0x458F
{
	if (__LIB_0__.func_121(iLocal_69) && __LIB_0__.func_121(iLocal_78))
	{
		if (iLocal_372 > -1)
		{
			if (((MISC::GET_GAME_TIMER() - iLocal_372) > 500 && ENTITY::GET_ENTITY_SPEED(iLocal_78) > 5f) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_78))
			{
				TASK::TASK_PLAY_ANIM(iLocal_69, sLocal_371, "shunt_from_back", 8f, -8f, -1, 0, 0f, false, false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
				func_122("GROWL");
				iLocal_372 = -1;
				iLocal_57 = MISC::GET_GAME_TIMER();
			}
		}
		else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_69, sLocal_371, "shunt_from_back", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_69, sLocal_371, "shunt_from_back", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_69, sLocal_371, "shunt_from_back") > 0.98f))
		{
			TASK::TASK_PLAY_ANIM(iLocal_69, sLocal_371, "sit", 8f, -8f, -1, 1, 0f, false, false, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
			iLocal_372 = MISC::GET_GAME_TIMER();
			iLocal_57 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_63()//Position - 0x4683
{
	if (iLocal_372 > -1 && (MISC::GET_GAME_TIMER() - iLocal_54) > iLocal_55)
	{
		if (((AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 7 || AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 8) || AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 9) || AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 13)
		{
			func_64();
			iLocal_54 = MISC::GET_GAME_TIMER();
			iLocal_55 = MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000);
		}
	}
}

void func_64()//Position - 0x46E8
{
	if ((MISC::GET_GAME_TIMER() - iLocal_57) > 500)
	{
		iLocal_57 = MISC::GET_GAME_TIMER();
		if (__LIB_0__.func_121(iLocal_69) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_69, false))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
			TASK::TASK_PLAY_ANIM(0, sLocal_371, "bark", 4f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_371, "sit", 8f, -8f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_69, iLocal_95);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
		}
	}
}

void func_65()//Position - 0x476E
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && bLocal_327 == 1)
	{
		if (iLocal_59 == -1)
		{
			iLocal_59 = MISC::GET_GAME_TIMER();
		}
		if (((MISC::GET_GAME_TIMER() - iLocal_59) > 10000 && iLocal_372 > -1) && func_38())
		{
			if (func_35())
			{
				if (__LIB_0__.func_121(iLocal_69))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_69, false))
					{
						func_64();
					}
					else
					{
						func_122("BARK");
					}
				}
			}
			iLocal_59 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_66()//Position - 0x47E9
{
	float fVar0;
	struct<3> Var1;
	if (__LIB_0__.func_121(iLocal_78))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iLocal_78))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_78, true) };
			if (iLocal_68 == -1)
			{
				iLocal_68 = MISC::GET_GAME_TIMER();
			}
			if (WATER::GET_WATER_HEIGHT(Var1, &fVar0))
			{
				if ((fVar0 - Var1.f_2) > 1f)
				{
					return 1;
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_68) > 3000)
				{
					func_122("AGITATED");
					iLocal_68 = MISC::GET_GAME_TIMER();
				}
			}
		}
		else
		{
			iLocal_68 = -1;
		}
	}
	return 0;
}

void func_68(struct<3> Param0, int iParam1)//Position - 0x487C
{
	if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__.func_121(iLocal_69))
	{
		if (__LIB_0__.func_121(iLocal_78))
		{
			if ((iParam1 == 1 && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94)) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_78, 1) < 0.9f)
			{
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_78, iLocal_94, false, false);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_87))
			{
				PED::DETACH_SYNCHRONIZED_SCENE(iLocal_87);
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_69);
			__LIB_10__.func_701(iLocal_69, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_78, Param0), ENTITY::GET_ENTITY_HEADING(iLocal_69), 1, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
			func_69(0, 0);
			iLocal_86 = 15;
		}
		else
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_87))
			{
				PED::DETACH_SYNCHRONIZED_SCENE(iLocal_87);
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_69);
			__LIB_10__.func_701(iLocal_69, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), (Param0.f_0 + 1f), Param0.f_1, Param0.f_2), ENTITY::GET_ENTITY_HEADING(iLocal_69), 1, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
			func_69(0, 0);
			iLocal_86 = 15;
		}
	}
}

void func_69(int iParam0, int iParam1)//Position - 0x4961
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	if (iParam0 == 1)
	{
		if (!CAM::DOES_CAM_EXIST(iLocal_380) && __LIB_0__.func_121(iLocal_78))
		{
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			if (iVar2 == 0)
			{
				Var0 = { 1.11573f, -1.40338f, 0.555789f };
				Var1 = { 0.5f, 0f, 0.3f };
			}
			else if (iVar2 == 1)
			{
				Var0 = { -1.15872f, 1.75252f, 0.761228f };
				Var1 = { 0f, 0f, 0.3f };
			}
			else if (iVar2 == 2)
			{
				Var0 = { -1.89975f, 0.339287f, 0.661881f };
				Var1 = { 0f, 0f, 0.3f };
			}
			else
			{
				Var0 = { 1.38134f, -0.1248f, 0.580783f };
				Var1 = { 0f, 0f, 0.3f };
			}
			iLocal_380 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
			Var3 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_78, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_78, "seat_pside_f")) };
			Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_78, Var3) };
			Var5 = { Var0 + Var4 };
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_380, iLocal_78, Var5, true);
			CAM::POINT_CAM_AT_ENTITY(iLocal_380, iLocal_78, Var4 + Var1, true);
			CAM::SET_CAM_FOV(iLocal_380, 50f);
			CAM::SHAKE_CAM(iLocal_380, "HAND_SHAKE", 0.3f);
			CAM::SET_CAM_DOF_PLANES(iLocal_380, 0f, 0f, 100000f, 100000f);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
	}
	else if (CAM::DOES_CAM_EXIST(iLocal_380))
	{
		if (iParam1 == 1)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		}
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_ALL_CAMS(false);
	}
}

int func_70()//Position - 0x4AEE
{
	if (__LIB_0__.func_121(iLocal_78))
	{
		if (((MISC::GET_GAME_TIMER() - iLocal_373) > 500 || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94)) || func_77())
		{
			return 1;
		}
	}
	return 0;
}

void func_71()//Position - 0x4B2B
{
	TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "misschop_vehicleenter_exit", sLocal_370, 8f, -8f, -1, 40, 0f, false, false, false);
	iLocal_373 = MISC::GET_GAME_TIMER();
}

void func_72()//Position - 0x4B5A
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
}

void func_74()//Position - 0x4B94
{
	if (!__LIB_4__.func_465(iLocal_69, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) && __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_69, 1) > 1f)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_69, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true), 2f, 0f, 0f), 2f, 20000, 0.25f, 0, 40000f);
	}
}

void func_75(int iParam0)//Position - 0x4BE2
{
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	__LIB_0__.func_523(&iLocal_70);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_69, true);
	PED::SET_PED_INTO_VEHICLE(iLocal_69, iLocal_78, 0);
	TASK::TASK_PLAY_ANIM(iLocal_69, sLocal_371, "sit", 8f, -8f, -1, 1, 0f, false, false, false);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
}

int func_76()//Position - 0x4C3A
{
	float fVar0;
	if (__LIB_0__.func_121(iLocal_78) && __LIB_0__.func_121(iLocal_69))
	{
		if (iLocal_66 == -1)
		{
			fVar0 = __LIB_0__.func_76(iLocal_78, iLocal_69, 1);
			iLocal_66 = SYSTEM::FLOOR((fVar0 * 1000f));
			if (iLocal_66 < 5000)
			{
				iLocal_66 = 5000;
			}
		}
		if (((__LIB_0__.func_529(iLocal_69, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_78, 2f, 0f, 0f), 0) < 1f || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || (iLocal_65 > -1 && (MISC::GET_GAME_TIMER() - iLocal_65) > iLocal_66))
		{
			return 1;
		}
	}
	return 0;
}

int func_77()//Position - 0x4CCF
{
	int iVar0;
	if (__LIB_0__.func_121(iLocal_78))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true));
		if (((((((((((((((((((((((iVar0 == joaat("airbus") || iVar0 == joaat("barracks")) || iVar0 == joaat("barracks2")) || iVar0 == joaat("biff")) || iVar0 == joaat("bus")) || iVar0 == joaat("coach")) || iVar0 == joaat("hauler")) || iVar0 == joaat("mixer")) || iVar0 == joaat("mixer2")) || iVar0 == joaat("packer")) || iVar0 == joaat("pbus")) || iVar0 == joaat("phantom")) || iVar0 == joaat("pounder")) || iVar0 == joaat("riot")) || iVar0 == joaat("rubble")) || iVar0 == joaat("scrap")) || iVar0 == joaat("stockade")) || iVar0 == joaat("stockade3")) || iVar0 == joaat("tiptruck")) || iVar0 == joaat("tiptruck2")) || iVar0 == joaat("towtruck")) || iVar0 == joaat("towtruck2")) || iVar0 == MISC::GET_HASH_KEY("monster" /* GXT: The Liberator */)) || iVar0 == MISC::GET_HASH_KEY("marshall" /* GXT: Marshall */))
		{
			return 1;
		}
	}
	return 0;
}

void func_78()//Position - 0x4E47
{
	int iVar0;
	if (__LIB_0__.func_121(iLocal_78))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_78);
		if (iVar0 == joaat("coach"))
		{
			iLocal_94 = 0;
		}
		else
		{
			iLocal_94 = 1;
		}
	}
}

void func_79()//Position - 0x4E73
{
	if (__LIB_0__.func_121(iLocal_78))
	{
		iLocal_369 = VEHICLE::GET_VEHICLE_LAYOUT_HASH(iLocal_78);
		switch (iLocal_369)
		{
			case joaat("LAYOUT_VAN"):
			case joaat("LAYOUT_VAN_BODHI"):
			case joaat("LAYOUT_VAN_BOXVILLE"):
			case joaat("LAYOUT_VAN_CADDY"):
			case joaat("LAYOUT_VAN_JOURNEY"):
			case joaat("LAYOUT_VAN_MULE"):
			case joaat("LAYOUT_VAN_POLICE"):
			case joaat("LAYOUT_VAN_TRASH"):
			case joaat("LAYOUT_4X4_DUBSTA"):
			case joaat("LAYOUT_VAN_ROOSEVELT"):
				sLocal_371 = "creatures@rottweiler@in_vehicle@van";
				sLocal_370 = "van_ds_open_door_for_chop";
				break;
			case joaat("LAYOUT_LOW"):
			case joaat("LAYOUT_LOW_DUNE"):
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_SENTINEL2"):
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_BLADE"):
			case joaat("LAYOUT_LOW_TURISMOR"):
			case joaat("LAYOUT_LOW_FURORE"):
			case joaat("LAYOUT_LOW_OSIRIS"):
				sLocal_371 = "creatures@rottweiler@in_vehicle@low_car";
				sLocal_370 = "low_ds_open_door_for_chop";
				break;
			case joaat("LAYOUT_4X4"):
			case joaat("LAYOUT_BISON"):
			case joaat("LAYOUT_RANGER"):
			case joaat("LAYOUT_RANGER_SWAT"):
				sLocal_371 = "creatures@rottweiler@in_vehicle@4x4";
				sLocal_370 = "std_ds_open_door_for_chop";
				break;
			default:
				sLocal_371 = "creatures@rottweiler@in_vehicle@std_car";
				sLocal_370 = "std_ds_open_door_for_chop";
				break;
		}
		if (ENTITY::GET_ENTITY_MODEL(iLocal_78) == joaat("brawler"))
		{
			sLocal_371 = "creatures@rottweiler@in_vehicle@4x4";
			sLocal_370 = "std_ds_open_door_for_chop";
		}
	}
}

int func_80()//Position - 0x4F81
{
	if ((((((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false)) && !PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 1) && VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0, false)) && !func_23())
	{
		return 1;
	}
	return 0;
}

int func_81()//Position - 0x5017
{
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-14.5f, -1437.2f, 31.1f))
		{
			return 1;
		}
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(7.6f, 537.3f, 176f))
		{
			return 1;
		}
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(130.2632f, -1295.0345f, 28.2695f))
		{
			return 1;
		}
	}
	return 0;
}

void func_82()//Position - 0x5095
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true), 2f, 0f, 0f) };
	Var3 = { Var1 - Var0 };
	Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true), -2f, 0f, 0f) };
	Var4 = { Var2 - Var0 };
	if (SYSTEM::VMAG(Var3) < SYSTEM::VMAG(Var4))
	{
		iLocal_93 = 1;
	}
	else
	{
		iLocal_93 = 0;
	}
}

void func_83()//Position - 0x510D
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	if ((iLocal_315 != 5 || (MISC::GET_GAME_TIMER() - iLocal_316) < 1000) || bLocal_327 == 0)
	{
		return;
	}
	func_97();
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 102)
	{
		if (func_96(iVar2))
		{
			Var0 = { __LIB_30__.func_615(iVar2, 1) };
			if (!__LIB_0__.func_86(Var0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_69, true), Var0, true);
				if (fVar1 < fLocal_318[2] && fVar1 < fLocal_324)
				{
					iLocal_317[2] = iVar2;
					fLocal_318[2] = fVar1;
					Local_319[2 /*3*/] = { __LIB_30__.func_615(iVar2, 0) };
					Local_320[2 /*3*/] = { Var0 };
				}
			}
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 76)
	{
		if (func_93(iVar2))
		{
			Var0 = { __LIB_30__.func_616(iVar2, 1) };
			if (!__LIB_0__.func_86(Var0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_69, true), Var0, true);
				if (fVar1 < fLocal_318[1] && fVar1 < fLocal_324)
				{
					iLocal_317[1] = iVar2;
					fLocal_318[1] = fVar1;
					Local_319[1 /*3*/] = { __LIB_30__.func_616(iVar2, 0) };
					Local_320[1 /*3*/] = { Var0 };
				}
			}
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 45)
	{
		if (func_91(iVar2))
		{
			Var0 = { __LIB_30__.func_617(iVar2, 1) };
			if (!__LIB_0__.func_86(Var0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_69, true), Var0, true);
				if (fVar1 < fLocal_318[0] && fVar1 < fLocal_324)
				{
					iLocal_317[0] = iVar2;
					fLocal_318[0] = fVar1;
					Local_319[0 /*3*/] = { __LIB_30__.func_617(iVar2, 0) };
					Local_320[0 /*3*/] = { Var0 };
				}
			}
		}
		iVar2++;
	}
	if (func_89())
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < 50)
		{
			if (!func_26(iVar2) && func_88(iVar2))
			{
				Var0 = { __LIB_29__.func_826(iVar2, 1) };
				if (!__LIB_0__.func_86(Var0))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_69, true), Var0, true);
					if (fVar1 < fLocal_318[3] && fVar1 < fLocal_324)
					{
						iLocal_317[3] = iVar2;
						fLocal_318[3] = fVar1;
						Local_319[3 /*3*/] = { __LIB_29__.func_826(iVar2, 0) };
						Local_320[3 /*3*/] = { Var0 };
					}
				}
			}
			iVar2++;
		}
	}
	if (func_86())
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < 50)
		{
			if (!func_25(iVar2) && func_85(iVar2))
			{
				Var0 = { __LIB_31__.func_127(iVar2, 1) };
				if (!__LIB_0__.func_86(Var0))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_69, true), Var0, true);
					if (fVar1 < fLocal_318[4] && fVar1 < fLocal_324)
					{
						iLocal_317[4] = iVar2;
						fLocal_318[4] = fVar1;
						Local_319[4 /*3*/] = { __LIB_31__.func_127(iVar2, 0) };
						Local_320[4 /*3*/] = { Var0 };
					}
				}
			}
			iVar2++;
		}
	}
	iLocal_316 = MISC::GET_GAME_TIMER();
}

int func_85(int iParam0)//Position - 0x5C6C
{
	switch (iParam0)
	{
		case 2:
		case 14:
		case 18:
		case 25:
			return 0;
			break;
		case 16:
			if (BitTest(Global_32118, 7))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_86()//Position - 0x5CB0
{
	return Global_113386.f_10049.f_125.f_2;
}

int func_88(int iParam0)//Position - 0x64A3
{
	switch (iParam0)
	{
		case 3:
		case 9:
		case 10:
		case 13:
		case 27:
		case 38:
			return 0;
			break;
		case 14:
			if (BitTest(Global_32118, 7))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_89()//Position - 0x64F3
{
	return Global_113386.f_10049.f_122.f_2;
}

int func_91(int iParam0)//Position - 0x6C94
{
	switch (iParam0)
	{
		case 33:
		case 39:
		case 41:
			return 0;
			break;
	}
	return 1;
}

int func_93(int iParam0)//Position - 0x7A95
{
	switch (iParam0)
	{
		case 2:
		case 17:
		case 55:
		case 63:
		case 65:
			return 0;
			break;
	}
	return 1;
}

int func_96(int iParam0)//Position - 0x8A33
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 11:
		case 13:
		case 14:
		case 30:
		case 34:
		case 43:
		case 45:
		case 50:
		case 55:
		case 88:
		case 96:
		case 98:
		case 100:
			return 0;
			break;
	}
	return 1;
}

void func_97()//Position - 0x8AA4
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_317[iVar0] = -1;
		fLocal_318[iVar0] = 999999f;
		Local_319[iVar0 /*3*/] = { 0f, 0f, 0f };
		Local_320[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

void func_98(bool bParam0)//Position - 0x8AED
{
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_Retriever"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_Rottweiler"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_Boar"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_Coyote"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_Deer"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_MtLion"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_Pig"), bParam0);
}

void func_99(bool bParam0, int iParam1, bool bParam2)//Position - 0x8B42
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BALL"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BALL")) == 0)
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BALL"), 1, bParam0, bParam2);
		HUD::HUD_SET_WEAPON_WHEEL_TOP_SLOT(joaat("WEAPON_BALL"));
		if (iParam1 == 1)
		{
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_384, "PICKUP_WEAPON_BALL", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", true);
		}
	}
}

void func_100()//Position - 0x8BA2
{
	if (!PED::IS_PED_IN_GROUP(iLocal_69))
	{
		PED::SET_PED_AS_GROUP_MEMBER(iLocal_69, PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()));
	}
	if (PED::IS_PED_IN_GROUP(iLocal_69))
	{
		PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_69, true);
		PED::SET_GROUP_FORMATION_SPACING(__LIB_0__.func_399(), 1f, 0.9f, 3f);
		PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(iLocal_69, PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()), true);
	}
}

void func_102()//Position - 0x8C00
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_8__.func_538(PLAYER::PLAYER_PED_ID(), iLocal_69) > 10f || __LIB_0__.func_1("CHOP_H_WHIS" /* GXT: Press ~INPUT_DETONATE~ to whistle to make Chop return to Franklin. */))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_342) > 4000 && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 47 /*INPUT_DETONATE*/))
			{
				iLocal_342 = MISC::GET_GAME_TIMER();
				__LIB_6__.func_834(PLAYER::PLAYER_PED_ID(), "CALL_CHOP", 3);
				if (__LIB_0__.func_1("CHOP_H_WHIS" /* GXT: Press ~INPUT_DETONATE~ to whistle to make Chop return to Franklin. */))
				{
					HUD::CLEAR_HELP(true);
				}
				if (iLocal_51 == 15 && iLocal_52 > 1)
				{
				}
				else
				{
					__LIB_11__.func_813(0);
					if (iLocal_51 == 2)
					{
						func_121(2, 0);
					}
					else
					{
						func_121(2, 1);
					}
				}
			}
			if (((!BitTest(Global_113386.f_10049.f_94, 8) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_94), 8);
				__LIB_0__.func_151("CHOP_H_WHIS" /* GXT: Press ~INPUT_DETONATE~ to whistle to make Chop return to Franklin. */, -1);
			}
		}
	}
}

int func_107()//Position - 0x8F27
{
	if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_69, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 || PED::IS_PED_RAGDOLL(iLocal_69)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_69))
	{
		WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iLocal_69);
		return 1;
	}
	return 0;
}

void func_108(char* sParam0, int iParam1)//Position - 0x8F62
{
	__LIB_0__.func_203(&uLocal_148, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	__LIB_10__.func_617(&uLocal_148, "CHOP_AU", sParam0, 3, iParam1, 0);
}

void func_112()//Position - 0x90B7
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	if (iVar0 == 0)
	{
		TASK::TASK_PLAY_ANIM(iLocal_69, sLocal_80[1], "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
		sLocal_81 = "idle_a";
	}
	else if (iVar0 == 1)
	{
		TASK::TASK_PLAY_ANIM(iLocal_69, sLocal_80[1], "idle_c", 8f, -8f, -1, 0, 0f, false, false, false);
		sLocal_81 = "idle_c";
	}
	else
	{
		TASK::TASK_PLAY_ANIM(iLocal_69, sLocal_80[1], "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
		sLocal_81 = "idle_b";
	}
}

void func_115()//Position - 0x919B
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iLocal_359 == 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_69, Local_358[iVar0 /*3*/], 2f, 2f, 4f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_358[iVar0 /*3*/], 2f, 2f, 4f, false, true, 0))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_69, Local_358[iVar0 /*3*/], 1f, 20000, 0.25f, 8192, 40000f);
			iLocal_359 = 1;
		}
	}
	else if (!__LIB_4__.func_465(iLocal_69, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
	{
		if (__LIB_11__.func_826() == 2)
		{
			iVar1 = 15;
		}
		else if (__LIB_11__.func_826() == 0)
		{
			iVar1 = 10;
		}
		else
		{
			iVar1 = -1;
		}
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		if (iVar2 < iVar1 && iLocal_348 == 0)
		{
			iLocal_348 = 1;
			func_121(13, 1);
		}
		else if (iVar2 < 50)
		{
			iLocal_79 = 1;
			sLocal_80[0] = "creatures@rottweiler@amb@world_dog_barking@enter";
			sLocal_80[1] = "creatures@rottweiler@amb@world_dog_barking@base";
			sLocal_80[2] = "creatures@rottweiler@amb@world_dog_barking@exit";
			func_121(17, 1);
		}
		else
		{
			iLocal_79 = 0;
			sLocal_80[0] = "creatures@rottweiler@amb@world_dog_sitting@enter";
			sLocal_80[1] = "creatures@rottweiler@amb@world_dog_sitting@idle_a";
			sLocal_80[2] = "creatures@rottweiler@amb@world_dog_sitting@exit";
			func_121(17, 1);
		}
	}
}

void func_116()//Position - 0x92BC
{
	if (((MISC::GET_GAME_TIMER() - iLocal_378) > 2000 && __LIB_0__.func_121(iLocal_69)) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_69, true), 5f, true))
	{
		func_122("WHINE");
		iLocal_378 = MISC::GET_GAME_TIMER();
	}
}

void func_117()//Position - 0x92FE
{
	if (__LIB_11__.func_826() == 2 && (MISC::GET_GAME_TIMER() - iLocal_343) > iLocal_344)
	{
		iLocal_343 = MISC::GET_GAME_TIMER();
		iLocal_344 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000);
		func_122("WHINE");
	}
}

int func_118(int iParam0, int iParam1)//Position - 0x933B
{
	struct<3> Var0;
	struct<3> Var1;
	if ((__LIB_0__.func_121(iLocal_69) && __LIB_0__.func_121(PLAYER::PLAYER_PED_ID())) && __LIB_11__.func_326(iParam0, Local_329, 30f))
	{
		if (iParam1 == 1)
		{
			if (__LIB_11__.func_325(&uLocal_96, ENTITY::GET_ENTITY_COORDS(iParam0, true)))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_69, true) };
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (MISC::ABSF((Var0.f_2 - Var1.f_2)) < 2.5f)
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

void func_121(int iParam0, int iParam1)//Position - 0x94AF
{
	iLocal_86 = 0;
	if (__LIB_0__.func_121(iLocal_69))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_69, true);
		WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iLocal_69);
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_69, false))
		{
			if (iParam1 == 1)
			{
				TASK::CLEAR_PED_TASKS(iLocal_69);
			}
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_69, false);
		}
	}
	iLocal_51 = iParam0;
	iLocal_53 = 0;
	iLocal_52 = 0;
	iLocal_321 = -1;
	Local_322 = { 0f, 0f, 0f };
	Local_323 = { 0f, 0f, 0f };
	iLocal_315 = 5;
	func_34();
	iLocal_359 = 0;
	iLocal_357 = 0;
	iLocal_378 = MISC::GET_GAME_TIMER();
	AUDIO::SET_AUDIO_FLAG("DisableBarks", false);
}

void func_122(char* sParam0)//Position - 0x952C
{
	AUDIO::PLAY_ANIMAL_VOCALIZATION(iLocal_69, 3, sParam0);
}

int func_123()//Position - 0x953D
{
	if (func_118(PLAYER::PLAYER_PED_ID(), 1))
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_336) > iLocal_337)
		{
			return 1;
		}
		if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_329.f_5, 1) < 8f)
		{
			func_108("CHOP_KENNEL", 0);
			return 1;
		}
	}
	return 0;
}

void func_126()//Position - 0x9607
{
	if ((MISC::GET_GAME_TIMER() - iLocal_382) > 60000)
	{
		iLocal_382 = MISC::GET_GAME_TIMER();
		if ((iLocal_51 == 2 || iLocal_51 == 5) || iLocal_51 == 15)
		{
			if (__LIB_11__.func_826() == 1)
			{
				__LIB_0__.func_181(115, 1);
			}
			else
			{
				__LIB_0__.func_181(116, 1);
			}
		}
	}
}

void func_128()//Position - 0x96B7
{
	if ((MISC::GET_GAME_TIMER() - iLocal_379) > 500)
	{
		iLocal_379 = MISC::GET_GAME_TIMER();
		if (iLocal_51 != 15 && MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BALL"), 1.5f, &uLocal_362, &iLocal_361, false))
		{
			__LIB_11__.func_813(1);
		}
	}
}

void func_129()//Position - 0x96FF
{
	int iVar0;
	if (((((((((((func_144() && func_143()) && !__LIB_0__.func_190()) && iLocal_53 == 0) && iLocal_51 != 6) && func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !PED::IS_PED_IN_COMBAT(iLocal_69, 0)) && !func_81()) && !__LIB_0__.func_300()) && !__LIB_0__.func_77(0)) && !__LIB_0__.func_661())
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 262 /*INPUT_NEXT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 261 /*INPUT_PREV_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		if (iLocal_328 == 0)
		{
			__LIB_20__.func_579(SYSTEM::FLOOR(Global_113386.f_20118.f_254), 100, "CHOP_H_HAPPY" /* GXT: Happiness */, 1, -1, 2, -1f, -1f, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
		}
		else
		{
			__LIB_20__.func_579(100, 100, "CHOP_H_HAPPY" /* GXT: Happiness */, 1, -1, 2, -1f, -1f, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
		}
		if (func_137())
		{
			if (Global_32106 == 0)
			{
				Global_32106 = 1;
			}
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
			}
			else
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_69, 0f, 0f, 0f, true, -1, 1000, 1000, joaat("CHOP_HINT_HELPER"));
				iLocal_386 = 0;
			}
			PAD::SET_INPUT_EXCLUSIVE(func_136(), func_135(0));
			PAD::SET_INPUT_EXCLUSIVE(func_136(), func_135(1));
			PAD::SET_INPUT_EXCLUSIVE(func_136(), func_135(2));
			PAD::SET_INPUT_EXCLUSIVE(func_136(), func_135(3));
			PAD::SET_INPUT_EXCLUSIVE(func_136(), func_135(4));
			PAD::SET_INPUT_EXCLUSIVE(func_136(), func_135(5));
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				PAD::DISABLE_CONTROL_ACTION(func_136(), func_135(0), true);
				PAD::DISABLE_CONTROL_ACTION(func_136(), func_135(1), true);
				PAD::DISABLE_CONTROL_ACTION(func_136(), func_135(2), true);
				PAD::DISABLE_CONTROL_ACTION(func_136(), func_135(3), true);
				PAD::DISABLE_CONTROL_ACTION(func_136(), func_135(4), true);
				PAD::DISABLE_CONTROL_ACTION(func_136(), func_135(5), true);
			}
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(func_136(), func_135(0)) && func_134())
			{
				switch (iLocal_51)
				{
					case 1:
					case 3:
					case 4:
						iLocal_75 = 1;
						func_133(0);
						func_122("PLAYFUL");
						func_108("CHOP_WALK", 0);
						func_121(2, 1);
						break;
					case 2:
					case 5:
					case 15:
						iLocal_75 = 0;
						func_133(0);
						func_121(3, 1);
						break;
					case 17:
					case 18:
						iLocal_75 = 1;
						func_133(0);
						func_108("CHOP_WALK", 0);
						iLocal_53 = 2;
						break;
				}
				if (iLocal_75 == 1 && STATS::STAT_GET_INT(joaat("SP_CHOP_WALK_DONE"), &iLocal_381, -1))
				{
					iLocal_381++;
					STATS::STAT_SET_INT(joaat("SP_CHOP_WALK_DONE"), iLocal_381, true);
				}
			}
			if (bLocal_327 == 1)
			{
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_136(), func_135(1)) && func_134())
				{
					if (iLocal_51 == 17 || iLocal_51 == 18)
					{
						iLocal_53 = 5;
					}
					else
					{
						func_121(5, 1);
					}
				}
				if (__LIB_11__.func_826() == 2 && iLocal_328 == 0)
				{
					if (func_132() >= 1)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_136(), func_135(2)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 2)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_136(), func_135(3)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 3)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_136(), func_135(4)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 4)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_136(), func_135(5)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
				}
				else
				{
					if (func_132() >= 1)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_136(), func_135(2)) && func_134())
						{
							func_108("CHOP_SIT", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 8;
							}
							else
							{
								func_121(8, 1);
							}
						}
					}
					if (func_132() >= 2)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_136(), func_135(3)) && func_134())
						{
							func_108("CHOP_PAW", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 9;
							}
							else
							{
								func_121(9, 1);
							}
						}
					}
					if (func_132() >= 3)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_136(), func_135(4)) && func_134())
						{
							func_108("CHOP_BEG", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 7;
							}
							else
							{
								func_121(7, 1);
							}
						}
					}
					if (func_132() >= 4)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_136(), func_135(5)) && func_134())
						{
							func_108("CHOP_PET", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 10;
							}
							else
							{
								func_121(10, 1);
							}
						}
					}
				}
			}
		}
		else
		{
			HUD::CLEAR_HELP(true);
			if (!BitTest(Global_113386.f_10049.f_94, 0))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_94), 0);
			}
			if (bLocal_327 == 0)
			{
				bLocal_327 = __LIB_23__.func_159();
			}
			if (bLocal_327 == 1)
			{
				iVar0 = func_132();
				if (iVar0 > 4)
				{
					iVar0 = 4;
				}
				if ((((iLocal_51 == 1 || iLocal_51 == 17) || iLocal_51 == 18) || iLocal_51 == 3) || iLocal_51 == 4)
				{
					if ((__LIB_11__.func_826() == 2 && iLocal_328 == 0) && iVar0 > 0)
					{
						StringCopy(&Local_88, "CHOP_H_WAIT_H", 32);
					}
					else
					{
						StringCopy(&Local_88, "CHOP_H_WAIT_", 32);
					}
					StringIntConCat(&Local_88, iVar0, 32);
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
					{
						StringConCat(&Local_88, "_KM", 32);
					}
				}
				else if (iLocal_51 == 2 || iLocal_51 == 15)
				{
					if ((__LIB_11__.func_826() == 2 && iLocal_328 == 0) && iVar0 > 0)
					{
						StringCopy(&Local_88, "CHOP_H_WALK_H", 32);
					}
					else
					{
						StringCopy(&Local_88, "CHOP_H_WALK_", 32);
					}
					StringIntConCat(&Local_88, iVar0, 32);
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
					{
						StringConCat(&Local_88, "_KM", 32);
					}
				}
				__LIB_0__.func_187(&Local_88);
			}
			else if (iLocal_51 == 2 || iLocal_51 == 15)
			{
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					__LIB_0__.func_187("CHOP_H_HOME_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop. */);
				}
				else
				{
					__LIB_0__.func_187("CHOP_H_HOME" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop. */);
				}
			}
			else if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				__LIB_0__.func_187("CHOP_H_NOAPP_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~You can teach Chop to perform tricks. Download the iFruit app for your personal smartphone device or tablet to train him. */);
			}
			else
			{
				__LIB_0__.func_187("CHOP_H_NOAPP" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~You can teach Chop to perform tricks. Download the iFruit app for your personal smartphone device or tablet to train him. */);
			}
		}
	}
	else
	{
		func_133(1);
	}
}

int func_132()//Position - 0x9D83
{
	return Global_113386.f_20118.f_254.f_3;
}

void func_133(int iParam0)//Position - 0x9D96
{
	if (func_137())
	{
		HUD::CLEAR_HELP(true);
	}
	if (iParam0 == 1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_134()//Position - 0x9DBF
{
	if (((iLocal_51 == 8 || iLocal_51 == 7) || iLocal_51 == 9) || iLocal_51 == 10)
	{
		return 0;
	}
	return 1;
}

int func_135(int iParam0)//Position - 0x9DF4
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		switch (iParam0)
		{
			case 0:
				return 24;
			case 1:
				return 22;
			case 2:
				return 44;
			case 3:
				return 45;
			case 4:
				return 51;
			case 5:
				return 23;
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 227;
			case 1:
				return 229;
			case 2:
				return 224;
			case 3:
				return 225;
			case 4:
				return 223;
			case 5:
				return 222;
			}
		default:
	}
	return 0;
}

int func_136()//Position - 0x9E9A
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		return 0;
	}
	return 2;
}

int func_137()//Position - 0x9EB2
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (((((((((((((((((((__LIB_0__.func_1("CHOP_H_WAIT_0" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups. */) || __LIB_0__.func_1("CHOP_H_WAIT_1" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~ */)) || __LIB_0__.func_1("CHOP_H_WAIT_2" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~ */)) || __LIB_0__.func_1("CHOP_H_WAIT_3" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~ */)) || __LIB_0__.func_1("CHOP_H_WAIT_4" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Press ~INPUT_SCRIPT_RUP~ to pet Chop.~n~ */)) || __LIB_0__.func_1("CHOP_H_WAIT_H1" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WAIT_H2" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WAIT_H3" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WAIT_H4" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Press ~INPUT_SCRIPT_RUP~ to pet Chop.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_HOME" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop. */)) || __LIB_0__.func_1("CHOP_H_WALK_0" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups. */)) || __LIB_0__.func_1("CHOP_H_WALK_1" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~ */)) || __LIB_0__.func_1("CHOP_H_WALK_2" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~ */)) || __LIB_0__.func_1("CHOP_H_WALK_3" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~ */)) || __LIB_0__.func_1("CHOP_H_WALK_4" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Press ~INPUT_SCRIPT_RUP~ to pet Chop.~n~ */)) || __LIB_0__.func_1("CHOP_H_WALK_H1" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WALK_H2" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WALK_H3" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WALK_H4" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Press ~INPUT_SCRIPT_RUP~ to pet Chop.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_NOAPP" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~You can teach Chop to perform tricks. Download the iFruit app for your personal smartphone device or tablet to train him. */))
		{
			return 1;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (((((((((((((((((((__LIB_0__.func_1("CHOP_H_WAIT_0_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups. */) || __LIB_0__.func_1("CHOP_H_WAIT_1_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~ */)) || __LIB_0__.func_1("CHOP_H_WAIT_2_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~ */)) || __LIB_0__.func_1("CHOP_H_WAIT_3_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~ */)) || __LIB_0__.func_1("CHOP_H_WAIT_4_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~Press ~INPUT_ENTER~ to pet Chop.~n~ */)) || __LIB_0__.func_1("CHOP_H_WAIT_H1_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WAIT_H2_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WAIT_H3_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WAIT_H4_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~Press ~INPUT_ENTER~ to pet Chop.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_HOME_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop. */)) || __LIB_0__.func_1("CHOP_H_WALK_0_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups. */)) || __LIB_0__.func_1("CHOP_H_WALK_1_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~ */)) || __LIB_0__.func_1("CHOP_H_WALK_2_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~ */)) || __LIB_0__.func_1("CHOP_H_WALK_3_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~ */)) || __LIB_0__.func_1("CHOP_H_WALK_4_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~Press ~INPUT_ENTER~ to pet Chop.~n~ */)) || __LIB_0__.func_1("CHOP_H_WALK_H1_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WALK_H2_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WALK_H3_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WALK_H4_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~Press ~INPUT_ENTER~ to pet Chop.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_NOAPP_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~You can teach Chop to perform tricks. Download the iFruit app for your personal smartphone device or tablet to train him. */))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_143()//Position - 0xA3EA
{
	if (iLocal_51 == 12)
	{
		return 0;
	}
	if (iLocal_51 == 13 || (iLocal_51 == 14 && __LIB_4__.func_465(iLocal_69, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"))))
	{
		if (iLocal_357 == 0 && PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 228 /*INPUT_SCRIPT_LT*/))
		{
			func_108("CHOP_BUSY", 0);
			iLocal_357 = 1;
		}
		return 0;
	}
	return 1;
}

int func_144()//Position - 0xA446
{
	if (__LIB_8__.func_538(PLAYER::PLAYER_PED_ID(), iLocal_69) < 10f)
	{
		if (iLocal_51 == 15 && iLocal_52 < 4)
		{
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			func_148(0);
			func_147(0);
			return 0;
		}
		else
		{
			func_145();
			func_148(1);
			func_147(1);
			return 1;
		}
	}
	func_148(0);
	func_147(0);
	if (__LIB_0__.func_1("CHOP_H_INTRO" /* GXT: Hold ~INPUT_AIM~ when unarmed to interact with Chop. */) || (MISC::IS_PC_VERSION() && __LIB_0__.func_1("CHOP_H_INTRO_KM" /* GXT: Hold ~INPUT_AIM~ when unarmed to interact with Chop. */)))
	{
		HUD::CLEAR_HELP(true);
	}
	return 0;
}

void func_145()//Position - 0xA4D6
{
	if ((((((((!BitTest(Global_113386.f_10049.f_94, 0) && !(__LIB_0__.func_1("CHOP_H_INTRO" /* GXT: Hold ~INPUT_AIM~ when unarmed to interact with Chop. */) || (MISC::IS_PC_VERSION() && __LIB_0__.func_1("CHOP_H_INTRO_KM" /* GXT: Hold ~INPUT_AIM~ when unarmed to interact with Chop. */)))) && !__LIB_0__.func_1("PW_HELP_1" /* GXT: Use ~INPUT_CELLPHONE_EXTRA_OPTION~ to email the photograph to the LS Tourist Board. */)) && !__LIB_0__.func_1("PW_HELP_2" /* GXT: Use ~INPUT_CELLPHONE_SELECT~ to send the email to the LS Tourist Board. */)) && !__LIB_0__.func_200()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !__LIB_0__.func_77(0)) && !__LIB_0__.func_190()) && !__LIB_0__.func_661())
	{
		if ((iLocal_51 == 1 || iLocal_51 == 17) || iLocal_51 == 18)
		{
			if (func_118(PLAYER::PLAYER_PED_ID(), 1))
			{
				HUD::CLEAR_HELP(true);
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					__LIB_0__.func_187("CHOP_H_INTRO_KM" /* GXT: Hold ~INPUT_AIM~ when unarmed to interact with Chop. */);
				}
				else
				{
					__LIB_0__.func_187("CHOP_H_INTRO" /* GXT: Hold ~INPUT_AIM~ when unarmed to interact with Chop. */);
				}
			}
		}
	}
	if ((MISC::IS_PC_VERSION() && __LIB_0__.func_1("CHOP_H_INTRO_KM" /* GXT: Hold ~INPUT_AIM~ when unarmed to interact with Chop. */)) || __LIB_0__.func_1("CHOP_H_INTRO" /* GXT: Hold ~INPUT_AIM~ when unarmed to interact with Chop. */))
	{
		if ((((__LIB_0__.func_200() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || __LIB_0__.func_77(0)) || __LIB_0__.func_190()) || __LIB_0__.func_661())
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_147(int iParam0)//Position - 0xA61B
{
	if (iParam0 == 1)
	{
		if (__LIB_0__.func_121(iLocal_69))
		{
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_69, -1, 48, 2);
			iLocal_73 = 1;
		}
	}
	else if (iLocal_73 == 1 && __LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		iLocal_73 = 0;
	}
}

void func_148(int iParam0)//Position - 0xA665
{
	int iVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
	if (iLocal_74 == 1 && iVar0 != joaat("WEAPON_UNARMED"))
	{
		iParam0 = 0;
	}
	if (iParam0 == 1)
	{
		if (iLocal_74 == 0 && iVar0 == joaat("WEAPON_UNARMED"))
		{
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_69, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_69, true, 0f);
			PED::SET_ALLOW_LOCKON_TO_PED_IF_FRIENDLY(iLocal_69, true);
			PED::SET_USE_CAMERA_HEADING_FOR_DESIRED_DIRECTION_LOCK_ON_TEST(iLocal_69, true);
			iLocal_74 = 1;
		}
	}
	else if (iLocal_74 == 1)
	{
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_69, false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_69, false, 0f);
		PED::SET_ALLOW_LOCKON_TO_PED_IF_FRIENDLY(iLocal_69, false);
		iLocal_74 = 0;
	}
}

void func_149()//Position - 0xA6EC
{
	int iVar0;
	var uVar1[5];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if ((iLocal_51 != 6 && iLocal_86 == 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (((iLocal_51 == 2 || iLocal_51 == 5) || iLocal_51 == 15) || (iLocal_51 == 14 && !__LIB_4__.func_465(iLocal_69, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"))))
		{
			if (PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f) > 0 || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(iLocal_69, ENTITY::GET_ENTITY_COORDS(iLocal_69, true), 100f) > 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@melee@streamed_taunts@");
				iVar0 = 0;
				while (iVar0 < PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1, -1))
				{
					if ((((!__LIB_0__.func_121(iVar2) && __LIB_0__.func_121(uVar1[iVar0])) && (PED::IS_PED_IN_COMBAT(uVar1[iVar0], PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_COMBAT(uVar1[iVar0], iLocal_69))) && !PED::IS_PED_IN_ANY_VEHICLE(uVar1[iVar0], false)) && uVar1[iVar0] != iLocal_69)
					{
						iVar2 = uVar1[iVar0];
					}
					iVar0++;
				}
				if (__LIB_0__.func_121(iVar2))
				{
					TASK::TASK_COMBAT_PED(iLocal_69, iVar2, 0, 16);
					func_108("CHOP_ATTACK2", 0);
					if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !BitTest(Global_113386.f_10049.f_94, 6)) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						MISC::SET_BIT(&(Global_113386.f_10049.f_94), 6);
						__LIB_0__.func_151("CHOP_H_ATTACK" /* GXT: Chop will attack anyone who attacks Franklin. */, -1);
					}
					__LIB_11__.func_813(0);
					func_121(6, 0);
				}
			}
			else
			{
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, true);
				if (iVar3 != joaat("WEAPON_BALL") && !(iLocal_51 == 15 && iLocal_52 == 1))
				{
					if (PLAYER::GET_PLAYER_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar4) || PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar4))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar4))
						{
							iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
							if (((!PED::IS_PED_INJURED(iVar5) && iVar5 != iLocal_69) && !PED::IS_PED_IN_ANY_VEHICLE(iVar5, false)) && __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iVar5, 1) < 50f)
							{
								TASK::TASK_COMBAT_PED(iLocal_69, iVar5, 0, 16);
								iLocal_374++;
								if (iLocal_374 >= 3)
								{
									PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
								}
								func_108("CHOP_ATTACK1", 0);
								if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !BitTest(Global_113386.f_10049.f_94, 11)) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
								{
									MISC::SET_BIT(&(Global_113386.f_10049.f_94), 11);
									__LIB_0__.func_151("CHOP_H_AIM" /* GXT: Chop will attack anyone who Franklin targets. */, -1);
								}
								__LIB_11__.func_813(0);
								func_121(6, 0);
							}
						}
					}
				}
			}
		}
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_375) > 60000)
	{
		iLocal_375 = MISC::GET_GAME_TIMER();
		if (iLocal_374 > 0)
		{
			iLocal_374 = (iLocal_374 - 1);
		}
	}
}

void func_150()//Position - 0xA9B9
{
	if ((iLocal_51 != 16 && Global_31965 == 1) && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(PLAYER::PLAYER_PED_ID()))
	{
		func_121(16, 1);
	}
}

void func_151()//Position - 0xA9E7
{
	if (iLocal_356 == 0)
	{
		if (func_118(PLAYER::PLAYER_PED_ID(), 1))
		{
			func_108("CHOP_DUMP", 0);
			iLocal_356 = 1;
		}
	}
}

void func_152()//Position - 0xAA0F
{
	if (iLocal_360 != __LIB_23__.func_158() && __LIB_0__.func_121(iLocal_69))
	{
		if (__LIB_23__.func_159())
		{
			iLocal_360 = __LIB_23__.func_158();
			PED::SET_PED_COMPONENT_VARIATION(iLocal_69, 3, 0, iLocal_360, 0);
		}
		else if (iLocal_360 != 4)
		{
			iLocal_360 = 4;
			PED::SET_PED_COMPONENT_VARIATION(iLocal_69, 3, 0, iLocal_360, 0);
		}
	}
}

void func_154()//Position - 0xAA74
{
	int iVar0;
	Global_32106 = 0;
	STREAMING::REQUEST_MODEL(__LIB_11__.func_813());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_11__.func_813()))
	{
		return;
	}
	if (__LIB_0__.func_369(6))
	{
		Local_329.f_4 = 6;
		Local_329 = { 18.1531f, 535.2469f, 169.6324f };
		Local_329.f_3 = 204.8112f;
		Local_329.f_5 = { 19.527712f, 537.43604f, 170.14302f };
		Local_329.f_8 = 151.30635f;
		Local_347 = { 19.45963f, 535.78174f, 169.6277f };
		Local_358[0 /*3*/] = { 17.36033f, 528.8973f, 169.6277f };
		Local_358[1 /*3*/] = { 19.46877f, 529.17847f, 169.6277f };
		Local_358[2 /*3*/] = { 20.82979f, 531.51685f, 169.6277f };
		Local_358[3 /*3*/] = { 22.83555f, 532.3281f, 169.6277f };
		Local_358[4 /*3*/] = { 20.79285f, 535.001f, 169.6277f };
		Local_358[5 /*3*/] = { 18.05178f, 535.63214f, 169.6277f };
		Local_358[6 /*3*/] = { 18.92047f, 534.09375f, 169.6277f };
		Local_358[7 /*3*/] = { 17.51333f, 533.4775f, 169.6277f };
		__LIB_11__.func_329(&uLocal_96);
		__LIB_11__.func_328(&uLocal_96, 12.41124f, 535.5469f, 169.6277f);
		__LIB_11__.func_328(&uLocal_96, 19.04497f, 538.5729f, 169.6277f);
		__LIB_11__.func_328(&uLocal_96, 25.00015f, 534.4414f, 169.6277f);
		__LIB_11__.func_328(&uLocal_96, 28.0998f, 527.76385f, 169.42769f);
		__LIB_11__.func_328(&uLocal_96, 17.75896f, 523.3129f, 169.22769f);
		__LIB_11__.func_327(&uLocal_96);
	}
	else
	{
		Local_329.f_4 = 5;
		Local_329 = { -10.25168f, -1422.907f, 29.67775f };
		Local_329.f_3 = 157.9037f;
		Local_329.f_5 = { -9.73f, -1421.55f, 30.1f };
		Local_329.f_8 = 148.26f;
		Local_347 = { -10.6379f, -1424.5605f, 29.67365f };
		Local_358[0 /*3*/] = { -10.03643f, -1423.5287f, 29.67602f };
		Local_358[1 /*3*/] = { -10.78779f, -1425.3057f, 29.70937f };
		Local_358[2 /*3*/] = { -12.7048f, -1424.748f, 29.72222f };
		Local_358[3 /*3*/] = { -12.47465f, -1422.4846f, 29.74699f };
		Local_358[4 /*3*/] = { -14.26666f, -1424.8552f, 29.71964f };
		Local_358[5 /*3*/] = { -14.55816f, -1423.0481f, 29.78372f };
		Local_358[6 /*3*/] = { -16.13293f, -1424.4891f, 29.76139f };
		Local_358[7 /*3*/] = { -16.25662f, -1423.325f, 29.81294f };
		__LIB_11__.func_329(&uLocal_96);
		__LIB_11__.func_328(&uLocal_96, -7.26821f, -1427.0648f, 29.67468f);
		__LIB_11__.func_328(&uLocal_96, -7.39631f, -1418.8508f, 29.5858f);
		__LIB_11__.func_328(&uLocal_96, -14.27201f, -1421.5902f, 29.76819f);
		__LIB_11__.func_328(&uLocal_96, -22.85347f, -1423.1727f, 29.74042f);
		__LIB_11__.func_328(&uLocal_96, -22.77974f, -1427.168f, 29.65953f);
		__LIB_11__.func_327(&uLocal_96);
	}
	bLocal_327 = __LIB_23__.func_159();
	func_156();
	if (__LIB_11__.func_826() == 2)
	{
		MISC::CLEAR_AREA_OF_OBJECTS(Local_347, 2f, 2);
		STREAMING::REQUEST_MODEL(joaat("prop_big_shit_02"));
		while (!STREAMING::HAS_MODEL_LOADED(joaat("prop_big_shit_02")))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_346 = OBJECT::CREATE_OBJECT(joaat("prop_big_shit_02"), Local_347, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_big_shit_02"));
		iLocal_356 = 0;
	}
	else
	{
		iLocal_356 = 1;
	}
	iLocal_348 = 0;
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
	{
		iLocal_337 = -1;
	}
	else
	{
		iLocal_337 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 30000);
	}
	if (iLocal_325 == 1)
	{
		iLocal_51 = 7;
		iLocal_75 = 1;
	}
	else if (iLocal_326 == 1)
	{
		iLocal_51 = 2;
	}
	else if (iLocal_337 > -1)
	{
		iLocal_51 = 11;
		iLocal_75 = 0;
	}
	else
	{
		iLocal_51 = 1;
		iLocal_75 = 0;
	}
	iLocal_82 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(11.23f, 515.4f, 168f, 9f, 21f, 4f, __LIB_9__.func_257(113f), false, 7);
	iLocal_83 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(24f, 528f, 168f, 5f, 5f, 4f, __LIB_9__.func_257(113f), false, 7);
	Local_84[0 /*3*/] = { 444.1685f, 5569.016f, 780.1895f };
	Local_84[1 /*3*/] = { 443.8968f, 5574.931f, 780.1895f };
	Local_84[2 /*3*/] = { -739.1624f, 5596.7837f, 40.6594f };
	Local_84[3 /*3*/] = { -738.8002f, 5593.2686f, 40.6594f };
	fLocal_85[0] = 270f;
	fLocal_85[1] = 270f;
	fLocal_85[2] = 95f;
	fLocal_85[3] = 95f;
	func_97();
	iLocal_73 = 0;
	iLocal_338 = 0;
	iLocal_342 = MISC::GET_GAME_TIMER();
	iVar0 = func_132();
	if (iVar0 > 4)
	{
		iVar0 = 4;
	}
	StringCopy(&Local_88, "CHOP_H_WAIT_", 32);
	StringIntConCat(&Local_88, iVar0, 32);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		StringConCat(&Local_88, "_KM", 32);
	}
	Global_32108 = 0;
	iLocal_50 = 1;
}

void func_156()//Position - 0xAF8A
{
	if (iLocal_325 == 1)
	{
		if (func_158())
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_69, true, true);
			TASK::CLEAR_PED_TASKS(iLocal_69);
			func_152();
			while (__LIB_0__.func_200())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else if (iLocal_326 == 1)
	{
		if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_78 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				func_79();
				func_78();
				__LIB_23__.func_162(&iLocal_69, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0, 1);
				if (__LIB_0__.func_121(iLocal_69))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_69, true);
					PED::SET_PED_ALLOW_VEHICLES_OVERRIDE(iLocal_69, true);
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_69, false);
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_69, false);
					func_100();
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_69, true);
					PED::SET_PED_INTO_VEHICLE(iLocal_69, iLocal_78, 0);
					iLocal_86 = 8;
					func_152();
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
				}
				while (__LIB_0__.func_200())
				{
					if (__LIB_0__.func_121(iLocal_69) && !__LIB_4__.func_465(iLocal_69, joaat("SCRIPT_TASK_PLAY_ANIM")))
					{
						STREAMING::REQUEST_ANIM_DICT(sLocal_371);
						if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_371))
						{
							TASK::TASK_PLAY_ANIM(iLocal_69, sLocal_371, "sit", 8f, -8f, -1, 1, 0f, false, false, false);
						}
					}
					SYSTEM::WAIT(0);
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_69))
	{
		__LIB_23__.func_162(&iLocal_69, Local_329, Local_329.f_3, 1);
	}
	if (__LIB_0__.func_121(iLocal_69))
	{
		PED::ADD_RELATIONSHIP_GROUP("rel_group_chop", &iLocal_71);
		iLocal_72 = 1;
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_71);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_71, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("CAT"), iLocal_71);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_71, joaat("CAT"));
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_69, iLocal_71);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_69, true);
		PED::SET_PED_ALLOW_VEHICLES_OVERRIDE(iLocal_69, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 185, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 26, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 32, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 29, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 116, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 118, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 132, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 268, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 107, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 281, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 137, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 146, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 157, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 45, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 167, true);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_69, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_69, false);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_69, joaat("WEAPON_ANIMAL"), 1, true, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_69, 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_69, 0, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_69, 46, true);
		PED::SET_PED_HEARING_RANGE(iLocal_69, 100f);
		PED::SET_PED_SEEING_RANGE(iLocal_69, 100f);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_69, 512, true);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_69, false);
		PED::SET_PED_MAX_HEALTH(iLocal_69, 800);
		ENTITY::SET_ENTITY_HEALTH(iLocal_69, 800, 0);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_69, 200);
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_69, false))
		{
			func_57();
		}
		__LIB_0__.func_203(&uLocal_148, 3, iLocal_69, "CHOP", 0, 1);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_69, false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_69, false, 0f);
		PED::SET_ALLOW_LOCKON_TO_PED_IF_FRIENDLY(iLocal_69, false);
		iLocal_74 = 0;
		Global_32105 = 0;
		iLocal_374 = 0;
		iLocal_375 = MISC::GET_GAME_TIMER();
	}
}

int func_158()//Position - 0xB36A
{
	var uVar0[10];
	int iVar1;
	int iVar2;
	if (__LIB_0__.func_121(Global_100162) && PED::IS_PED_MODEL(Global_100162, __LIB_11__.func_813()))
	{
		iLocal_69 = Global_100162;
		return 1;
	}
	iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if ((uVar0[iVar2] != 0 && __LIB_0__.func_121(uVar0[iVar2])) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar2]) == __LIB_11__.func_813())
		{
			iLocal_69 = uVar0[iVar2];
			return 1;
		}
		iVar2++;
	}
	return 0;
}

int func_163()//Position - 0xB4FE
{
	float fVar0;
	struct<3> Var1;
	float fVar2;
	if (iLocal_50 > 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
		{
			if (__LIB_6__.func_854(0) && Global_31965 == 0)
			{
				return 1;
			}
			if (!__LIB_32__.func_759(1))
			{
				return 1;
			}
			if (Global_113376 == 1)
			{
				return 1;
			}
			if (((((((((((Global_78317 == 1 && Global_31965 == 0) && Global_8140 == 0) && Global_32214 == 0) && Global_32215 == 0) && Global_32216 == 0) && Global_60335 == 0) && !__LIB_0__.func_200()) && !__LIB_0__.func_300()) && Global_102575 == 0) && __LIB_0__.func_121(PLAYER::PLAYER_PED_ID())) && !__LIB_4__.func_234())
			{
				return 1;
			}
			if (Global_97361 == 1)
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_DEAD(iLocal_69, false))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_69, PLAYER::PLAYER_PED_ID(), true))
				{
					Global_32105 = 1;
					if (!BitTest(Global_113386.f_10049.f_94, 9) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						MISC::SET_BIT(&(Global_113386.f_10049.f_94), 9);
						__LIB_0__.func_151("CHOP_H_DEAD" /* GXT: Franklin killed Chop. Chop will soon return to Franklin's safehouse, but he's not happy. */, -1);
					}
				}
				else if (!BitTest(Global_113386.f_10049.f_94, 12) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					MISC::SET_BIT(&(Global_113386.f_10049.f_94), 12);
					__LIB_0__.func_151("CHOP_H_DEAD2" /* GXT: Chop was killed. Chop will soon return to Franklin's safehouse. */, -1);
				}
				return 1;
			}
			else
			{
				if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					func_164();
				}
				else
				{
					if ((iLocal_51 == 2 || iLocal_51 == 5) || iLocal_51 == 15)
					{
						fVar0 = 200f;
					}
					else
					{
						fVar0 = 100f;
					}
					if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_69, 1) > fVar0)
					{
						if ((!BitTest(Global_113386.f_10049.f_94, 4) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							if (((((iLocal_51 == 1 || iLocal_51 == 17) || iLocal_51 == 11) || iLocal_51 == 4) || iLocal_51 == 3) || iLocal_51 == 13)
							{
							}
							else
							{
								MISC::SET_BIT(&(Global_113386.f_10049.f_94), 4);
								__LIB_0__.func_151("CHOP_H_RANGE" /* GXT: Chop will stop following if left too far behind. */, -1);
							}
						}
						return 1;
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_69, false) && ENTITY::GET_ENTITY_HEALTH(iLocal_69) > 0)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(iLocal_69))
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_69, true) };
						if (WATER::GET_WATER_HEIGHT(Var1, &fVar2))
						{
							if ((fVar2 - Var1.f_2) > 0.1f)
							{
								ENTITY::SET_ENTITY_HEALTH(iLocal_69, 0, 0);
							}
						}
					}
					if (FIRE::IS_ENTITY_ON_FIRE(iLocal_69))
					{
						ENTITY::SET_ENTITY_HEALTH(iLocal_69, 0, 0);
					}
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

void func_164()//Position - 0xB79C
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if ((((((((((((((((((((((((((((((__LIB_0__.func_1("CHOP_H_INTRO" /* GXT: Hold ~INPUT_AIM~ when unarmed to interact with Chop. */) || __LIB_0__.func_1("CHOP_H_WAIT_0" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups. */)) || __LIB_0__.func_1("CHOP_H_WAIT_1" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~ */)) || __LIB_0__.func_1("CHOP_H_WAIT_2" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~ */)) || __LIB_0__.func_1("CHOP_H_WAIT_3" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~ */)) || __LIB_0__.func_1("CHOP_H_WAIT_4" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Press ~INPUT_SCRIPT_RUP~ to pet Chop.~n~ */)) || __LIB_0__.func_1("CHOP_H_WAIT_H1" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WAIT_H2" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WAIT_H3" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WAIT_H4" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Press ~INPUT_SCRIPT_RUP~ to pet Chop.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_HOME" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop. */)) || __LIB_0__.func_1("CHOP_H_WALK_0" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups. */)) || __LIB_0__.func_1("CHOP_H_WALK_1" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~ */)) || __LIB_0__.func_1("CHOP_H_WALK_2" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~ */)) || __LIB_0__.func_1("CHOP_H_WALK_3" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~ */)) || __LIB_0__.func_1("CHOP_H_WALK_4" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Press ~INPUT_SCRIPT_RUP~ to pet Chop.~n~ */)) || __LIB_0__.func_1("CHOP_H_WALK_H1" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WALK_H2" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WALK_H3" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WALK_H4" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Press ~INPUT_SCRIPT_RUP~ to pet Chop.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_HUNT" /* GXT: Chop will bark more often when he nears pickups. */)) || __LIB_0__.func_1("CHOP_H_NOVEH" /* GXT: Chop can only get into suitable cars with an empty front passenger seat. */)) || __LIB_0__.func_1("CHOP_H_CAR" /* GXT: Chop will follow Franklin into suitable cars with an empty front passenger seat. */)) || __LIB_0__.func_1("CHOP_H_BIKE" /* GXT: Chop will follow bikes and other vehicles he cannot get inside. */)) || __LIB_0__.func_1("CHOP_H_ATTACK" /* GXT: Chop will attack anyone who attacks Franklin. */)) || __LIB_0__.func_1("CHOP_H_BALL" /* GXT: When taking Chop for a walk, Franklin can play fetch using the ball in the weapon wheel. */)) || __LIB_0__.func_1("CHOP_H_WHIS" /* GXT: Press ~INPUT_DETONATE~ to whistle to make Chop return to Franklin. */)) || __LIB_0__.func_1("CHOP_H_NOAPP" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~You can teach Chop to perform tricks. Download the iFruit app for your personal smartphone device or tablet to train him. */)) || __LIB_0__.func_1("CHOP_H_BEHAVE" /* GXT: Chop is unhappy so is misbehaving. Download the iFruit app for your personal smartphone device or tablet to train him. */)) || __LIB_0__.func_1("CHOP_H_BEHAVA" /* GXT: Chop is unhappy so is misbehaving. Use the iFruit app to train him. */)) || __LIB_0__.func_1("CHOP_H_AIM" /* GXT: Chop will attack anyone who Franklin targets. */))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if ((((((((((((((((((((__LIB_0__.func_1("CHOP_H_INTRO_KM" /* GXT: Hold ~INPUT_AIM~ when unarmed to interact with Chop. */) || __LIB_0__.func_1("CHOP_H_WAIT_0_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups. */)) || __LIB_0__.func_1("CHOP_H_WAIT_1_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~ */)) || __LIB_0__.func_1("CHOP_H_WAIT_2_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~ */)) || __LIB_0__.func_1("CHOP_H_WAIT_3_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~ */)) || __LIB_0__.func_1("CHOP_H_WAIT_4_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~Press ~INPUT_ENTER~ to pet Chop.~n~ */)) || __LIB_0__.func_1("CHOP_H_WAIT_H1_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WAIT_H2_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WAIT_H3_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WAIT_H4_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~Press ~INPUT_ENTER~ to pet Chop.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_HOME_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop. */)) || __LIB_0__.func_1("CHOP_H_WALK_0_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups. */)) || __LIB_0__.func_1("CHOP_H_WALK_1_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~ */)) || __LIB_0__.func_1("CHOP_H_WALK_2_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~ */)) || __LIB_0__.func_1("CHOP_H_WALK_3_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~ */)) || __LIB_0__.func_1("CHOP_H_WALK_4_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~Press ~INPUT_ENTER~ to pet Chop.~n~ */)) || __LIB_0__.func_1("CHOP_H_WALK_H1_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WALK_H2_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WALK_H3_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_WALK_H4_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~Press ~INPUT_ENTER~ to pet Chop.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || __LIB_0__.func_1("CHOP_H_NOAPP_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~You can teach Chop to perform tricks. Download the iFruit app for your personal smartphone device or tablet to train him. */))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
}

void func_180()//Position - 0xBF51
{
	bool bVar0;
	bool bVar1;
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1)
	{
	}
	else
	{
		Global_32106 = 0;
		func_147(0);
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE() && !iLocal_386)
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		__LIB_0__.func_523(&iLocal_70);
		if (__LIB_0__.func_368(63))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__.func_368(126))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 19.3f, 528.24f, 169.63f, true) > 50f)
					{
						__LIB_10__.func_604(139, 1, 0);
					}
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -11.15f, -1425.56f, 29.67f, true) > 50f)
				{
					__LIB_10__.func_604(138, 1, 0);
				}
			}
		}
		__LIB_11__.func_813(1);
		__LIB_0__.func_122(&iLocal_346, 0);
		__LIB_0__.func_122(&iLocal_349, 0);
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_77))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_77, false);
		}
		STREAMING::REMOVE_PTFX_ASSET();
		if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BALL"), false))
		{
			WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BALL"));
		}
		if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && !__LIB_0__.func_39(0))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
		{
			if (func_188())
			{
				__LIB_0__.func_0(&iLocal_69);
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_69, false) && __LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_GROUP(iLocal_69))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_69);
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_87) || PED::IS_PED_IN_ANY_VEHICLE(iLocal_69, false))
					{
						if (__LIB_0__.func_121(iLocal_78))
						{
							bVar0 = false;
							while (!bVar0)
							{
								SYSTEM::WAIT(0);
								if (!func_186() || __LIB_6__.func_762(iLocal_78, 1093140480, 1, 1056964608, 0, 1, 0))
								{
									bVar0 = true;
								}
							}
							if (func_186())
							{
								if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94))
								{
									VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_78, iLocal_94, false, false);
								}
								STREAMING::REQUEST_ANIM_DICT(sLocal_371);
								while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_371))
								{
									SYSTEM::WAIT(0);
								}
							}
							if (func_186())
							{
								iLocal_87 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_87, iLocal_78, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_78, "seat_pside_f"));
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_69);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_69, iLocal_87, sLocal_371, "get_out", 1000f, -8f, 10, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
								bVar1 = false;
								while (!bVar1)
								{
									SYSTEM::WAIT(0);
									if (!func_186() || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_87) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_87) > 0.99f))
									{
										bVar1 = true;
									}
								}
								SYSTEM::WAIT(0);
								if (func_186() && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94))
								{
									VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_78, iLocal_94, false);
								}
							}
						}
						else if (__LIB_18__.func_173() == 1)
						{
							if (iLocal_51 == 2 || iLocal_51 == 15)
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_69);
								__LIB_10__.func_701(iLocal_69, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 1.75f, 0f, 0f), ENTITY::GET_ENTITY_HEADING(iLocal_69), 1, 1);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
							}
						}
					}
					if (__LIB_0__.func_121(iLocal_69))
					{
						PED::SET_PED_KEEP_TASK(iLocal_69, true);
						TASK::TASK_SMART_FLEE_PED(iLocal_69, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
					}
				}
				__LIB_0__.func_124(&iLocal_69, 1, 0, 1);
			}
		}
		func_56();
		__LIB_0__.func_106(&iLocal_78);
		func_98(0);
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@move");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@enter");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@base");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@idle_a");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@exit");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@in_vehicle@4x4");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@in_vehicle@low_car");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@in_vehicle@std_car");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@in_vehicle@van");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_sitting@enter");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_sitting@idle_a");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_sitting@exit");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@tricks@");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@sleep_in_kennel@");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@indication@");
		STREAMING::REMOVE_ANIM_DICT("misschop_vehicleenter_exit");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@melee@streamed_taunts@");
		__LIB_0__.func_202(&uLocal_148, 1);
		__LIB_0__.func_202(&uLocal_148, 3);
		func_164();
		CAM::DESTROY_ALL_CAMS(false);
		if (iLocal_82 > -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_82);
		}
		if (iLocal_83 > -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_83);
		}
		if (iLocal_72 == 1)
		{
			PED::REMOVE_RELATIONSHIP_GROUP(iLocal_71);
		}
		AUDIO::STOP_SOUND(iLocal_384);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_186()//Position - 0xC586
{
	if ((__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__.func_121(iLocal_78)) && __LIB_0__.func_121(iLocal_69))
	{
		return 1;
	}
	return 0;
}

int func_188()//Position - 0xC5F5
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && __LIB_0__.func_121(iLocal_69))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_87) || PED::IS_PED_IN_ANY_VEHICLE(iLocal_69, false))
		{
			return 1;
		}
	}
	if (Global_32107 == 1)
	{
		return 1;
	}
	if (Global_32108 == 1)
	{
		Global_32108 = 0;
		return 1;
	}
	if (__LIB_0__.func_121(iLocal_69))
	{
		if (iLocal_51 == 11 && ENTITY::IS_ENTITY_OCCLUDED(iLocal_69))
		{
			return 1;
		}
		if (__LIB_9__.func_991(ENTITY::GET_ENTITY_COORDS(iLocal_69, false), 1f, 1120403456))
		{
			return 0;
		}
	}
	if (!__LIB_6__.func_854(0))
	{
		return 0;
	}
	if (__LIB_0__.func_39(6) || __LIB_0__.func_39(2))
	{
		return 0;
	}
	return 1;
}

