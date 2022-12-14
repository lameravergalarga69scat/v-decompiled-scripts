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
	int iLocal_34 = 0;
	struct<4> Local_35[10];
	bool bLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	struct<61> Local_54 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	struct<6> Local_63 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int* iLocal_68 = NULL;
	int* iLocal_69 = NULL;
	int* iLocal_70 = NULL;
	int* iLocal_71 = NULL;
	char* sLocal_72 = NULL;
	char* sLocal_73 = NULL;
	int iLocal_74 = 0;
	char* sLocal_75 = NULL;
	int iLocal_76 = 0;
	struct<3> Local_77 = { 0, 0, 0 } ;
	struct<3> Local_78 = { 0, 0, 0 } ;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int* iLocal_83 = NULL;
	struct<3> Local_84 = { 0, 0, 0 } ;
	int iLocal_85[3] = { 0, 0, 0 };
	struct<7> Local_86[3];
	struct<3> Local_87 = { 0, 0, 0 } ;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	int iLocal_90[2] = { 0, 0 };
	struct<3> Local_91[4];
	struct<3> Local_92[4];
	var uLocal_93[2] = { 0, 0 };
	struct<7> Local_94[2];
	var uLocal_95[2] = { 0, 0 };
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	int iLocal_99 = 0;
	char* sLocal_100 = NULL;
	struct<3> Local_101 = { 0, 0, 0 } ;
	struct<3> Local_102 = { 0, 0, 0 } ;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int* iLocal_106 = NULL;
	int* iLocal_107 = NULL;
	struct<3> Local_108 = { 0, 0, 0 } ;
	struct<8> Local_109 = { 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_110 = { 2, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_111 = 0;
	struct<8> Local_112[4];
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115 = 16;
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
	bool bLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	float fLocal_289 = 0f;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	bool bLocal_294 = 0;
	bool bLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	bool bLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	bool bLocal_303 = 0;
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	struct<3> Local_308 = { 0, 0, 0 } ;
	int iLocal_309 = 0;
	bool bLocal_310 = 0;
	int iLocal_311[4] = { 0, 0, 0, 0 };
	int iLocal_312[2] = { 0, 0 };
	float fLocal_313 = 0f;
	struct<8> Local_314 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	struct<8> Local_319[3];
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	char* sLocal_322[6] = { NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_323 = 0;
	var uLocal_324 = 0;
	char* sLocal_325 = NULL;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	char[] cLocal_331[8] = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	int iLocal_337 = 0;
	bool bLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	bool bLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	bool bLocal_347 = 0;
	float fLocal_348 = 0f;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	bool bLocal_352 = 0;
	var uLocal_353[2] = { 0, 0 };
	var uLocal_354[2] = { 0, 0 };
	var uLocal_355[2] = { 0, 0 };
	bool bLocal_356[2] = { 0, 0 };
	bool bLocal_357 = 0;
	bool bLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = -1;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 1000;
	var uLocal_371 = 1000;
	var uLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	struct<8> Local_375[4];
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	char* sLocal_378 = NULL;
	struct<61> Local_379 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	uLocal_38 = __LIB_2__::func_910(64);
	uLocal_39 = __LIB_2__::func_910(63);
	iLocal_40 = joaat("U_M_M_Aldinapoli");
	iLocal_41 = joaat("premier");
	iLocal_58 = 1;
	sLocal_72 = "rcmnigel3_idles";
	sLocal_73 = "base_nig";
	sLocal_75 = "base_mst";
	Local_77 = { 0.198f, 0.074f, 0.358f };
	Local_78 = { 12.24f, -173.52f, 130.32f };
	Local_84 = { -44.75f, -1288.6747f, 28.2104f };
	Local_87 = { 0f, -2.2f, 0.5f };
	fLocal_88 = 8f;
	fLocal_89 = 9f;
	sLocal_100 = "rcmnigel3_trunk";
	iLocal_105 = joaat("p_banknote_s");
	Local_108 = { 2611.0215f, 1655.5f, 26.6356f };
	bLocal_111 = true;
	iLocal_318 = 1;
	fLocal_348 = 300f;
	iLocal_350 = 500;
	Local_54 = { ScriptParam_379 };
	__LIB_14__::func_801(&Local_54);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_14__::func_872(1);
		if (iLocal_55 == 9)
		{
			__LIB_14__::func_870(1, 1, 1, 0);
		}
		func_584();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_54.f_28[0]))
	{
		__LIB_14__::func_868(&iLocal_69, &(Local_54.f_28[0]));
	}
	__LIB_0__::func_0(&(Local_54.f_28[1]));
	func_565();
	if (__LIB_0__::func_323())
	{
		iVar0 = __LIB_0__::func_344();
		if (Global_94618)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				func_558(1);
				break;
			case 1:
				func_556(1);
				break;
			case 2:
				func_548(1);
				break;
			default:
				break;
			}
	}
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_VSTLA", 0);
		__LIB_14__::func_863(Local_54.f_9, 0, 0, 0, 0, 0);
		if (iLocal_55 == 13)
		{
			func_527();
		}
		else if (!func_525())
		{
			func_500();
			__LIB_0__::func_467();
			switch (iLocal_55)
			{
				case 0:
					func_497();
					break;
				case 1:
					func_489();
					break;
				case 2:
					func_424();
					break;
				case 3:
					func_423();
					break;
				case 4:
					func_418();
					break;
				case 11:
					func_417();
					break;
				case 5:
					func_401();
					break;
				case 6:
					func_285();
					break;
				case 7:
					func_284();
					break;
				case 8:
					func_252();
					break;
				case 9:
					func_232();
					break;
				case 10:
					func_209();
					break;
				case 12:
					func_1();
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x2C6
{
	iLocal_297 = 0;
	if (!BitTest(Global_113386.f_18574.f_382, 5))
	{
		MISC::SET_BIT(&(Global_113386.f_18574.f_382), 5);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_69) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_69))
		{
			__LIB_0__::func_0(&iLocal_69);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_70))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_70) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_70))
		{
			__LIB_0__::func_123(&iLocal_71);
			__LIB_0__::func_0(&iLocal_70);
		}
	}
	func_2();
}

void func_2()//Position - 0x345
{
	if (!iLocal_297)
	{
		__LIB_0__::func_0(&iLocal_68);
		__LIB_0__::func_681(101, 1);
		STATS::STAT_SET_BOOL(joaat("SP_KILLED_AL"), true, true);
	}
	if (!bLocal_111)
	{
		VEHICLE::SET_RANDOM_TRAINS(true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_314.f_0))
	{
		__LIB_0__::func_124(&(Local_314.f_6), 1, 0, 1);
		VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&Local_314, false);
	}
	func_3(101, 1);
	func_584();
}

void func_3(int iParam0, bool bParam1)//Position - 0x3A2
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
	func_31();
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

void func_31()//Position - 0x1554
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
				if (func_149(iVar1, 14, iVar2))
				{
					func_32(iVar1, 14, iVar2);
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

int func_32(int iParam0, int iParam1, int iParam2)//Position - 0x1615
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
	if (!func_149(iParam0, iParam1, iParam2))
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
				func_32(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_32(iParam0, 14, uVar5[iVar3]))
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
	if (func_75(iParam0, iVar0, &iVar7, 0))
	{
		func_35(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_33(iParam0, iVar0, &iVar7))
	{
		func_35(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_33(int iParam0, int iParam1, int iParam2)//Position - 0x17D1
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_149(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x1898
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
										func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_41(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_75(iParam0, iVar10, &iVar4, 1))
							{
								func_35(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_35(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_35(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_35(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_35(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_35(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_35(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_75(iParam0, iVar10, &iVar4, 0))
		{
			func_35(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_33(iParam0, iVar10, &iVar4))
		{
			func_35(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_41(int iParam0, int iParam1, int iParam2)//Position - 0x28D5
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
				if (func_149(iParam0, iParam1, iVar0))
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
				if (func_149(iParam0, iParam1, iVar1))
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

int func_75(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8FAF
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_149(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_149(int iParam0, int iParam1, int iParam2)//Position - 0x1F5E4
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
				if (!func_149(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_149(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_149(iParam0, 14, iVar4))
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
			if (!func_149(iParam0, 14, uVar8[iVar7]))
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

void func_209()//Position - 0x26C05
{
	if (!iLocal_376)
	{
		__LIB_0__::func_222(&uLocal_115, 4, 0, "NIGEL", 0, 1);
		iLocal_376 = 1;
	}
	switch (iLocal_56)
	{
		case 0:
			if (((!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_14__::func_569(&uLocal_115, 64, "NIGE3AU", "NIGEL3_ZA", 7, 1, 0, 0, 0))
				{
					iLocal_377 = -1;
					iLocal_56 = 1;
				}
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
			}
			break;
		case 1:
			if (__LIB_0__::func_75())
			{
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > iLocal_377)
				{
					iLocal_377 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
				}
			}
			else if (__LIB_14__::func_521())
			{
				if (__LIB_16__::func_596())
				{
					if (iLocal_377 >= 0)
					{
						iLocal_56 = 2;
					}
					else
					{
						iLocal_56 = 0;
					}
				}
				else
				{
					iLocal_56 = 2;
				}
			}
			break;
		case 2:
			if (((!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_0__::func_106(&Local_63);
				iLocal_297 = 0;
				func_2();
			}
			break;
	}
}

void func_232()//Position - 0x275BE
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	struct<3> Var3;
	float fVar4;
	switch (iLocal_56)
	{
		case 0:
			__LIB_0__::func_714(&iLocal_107);
			func_239(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			if (__LIB_0__::func_121(Local_314.f_0))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_314.f_0, 0f, 8f, -4f) };
				Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_314.f_0, 0f, 60f, 10f) };
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, 3f, false, true, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 512);
				}
				iLocal_311[0] = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				CAM::SET_CAM_FOV(iLocal_311[0], 25.3209f);
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_311[0], Local_314.f_0, -3.4384f, 42.1476f, 0.1772f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_311[0], Local_314.f_0, -2.9318f, 39.1938f, 0.3114f, true);
				CAM::SHAKE_CAM(iLocal_311[0], "HAND_SHAKE", 0.166f);
				iLocal_311[1] = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				CAM::SET_CAM_FOV(iLocal_311[1], 25.3209f);
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_311[1], Local_314.f_0, -3.6622f, 13.9852f, -0.5222f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_311[1], Local_314.f_0, -2.2737f, 11.3714f, -0.0324f, true);
				CAM::SHAKE_CAM(iLocal_311[1], "HAND_SHAKE", 0.166f);
			}
			iLocal_312[0] = 4000;
			iLocal_312[1] = 3000;
			fLocal_313 = 0f;
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			if (__LIB_0__::func_121(Local_63.f_0))
			{
				if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_63.f_0) > -100f)
				{
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_63.f_0, -100f);
					Local_308 = { ENTITY::GET_ENTITY_COORDS(Local_63.f_0, true) };
				}
			}
			if (__LIB_0__::func_121(Local_314.f_6))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_314.f_6, true);
			}
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_311[1], iLocal_311[0], iLocal_312[0], 0, 0);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			RECORDING::REPLAY_START_EVENT(1);
			bLocal_303 = true;
			bLocal_304 = false;
			iLocal_305 = 0;
			iLocal_306 = 0;
			if (__LIB_7__::func_691())
			{
				iLocal_307 = 1;
			}
			else
			{
				iLocal_307 = 0;
			}
			iLocal_56 = 1;
			break;
		case 1:
			func_236();
			if (fLocal_313 >= 7f)
			{
				bLocal_303 = false;
			}
			else if (!iLocal_305 && fLocal_313 >= 4f)
			{
				if (__LIB_0__::func_121(Local_314.f_0))
				{
					iLocal_311[2] = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
					CAM::SET_CAM_FOV(iLocal_311[2], 38.4841f);
					CAM::SET_CAM_COORD(iLocal_311[2], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_314.f_0, -0.1473f, -9.8601f, 5.1181f));
					CAM::POINT_CAM_AT_COORD(iLocal_311[2], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_314.f_0, -0.1893f, -6.9636f, 4.3379f));
					iLocal_311[3] = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
					CAM::SET_CAM_FOV(iLocal_311[3], 38.4841f);
					CAM::SET_CAM_COORD(iLocal_311[3], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_314.f_0, -0.1892f, -9.8601f, 6.0113f));
					CAM::POINT_CAM_AT_COORD(iLocal_311[3], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_314.f_0, -0.2225f, -7.1434f, 5.779f));
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_311[3], iLocal_311[2], iLocal_312[1], 3, 3);
					iLocal_305 = 1;
					if (__LIB_0__::func_121(Local_314.f_0) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
					{
						if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
						{
							Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
							Var3.f_2 = (Var3.f_2 + 1f);
							if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var3, &uVar2, false, false))
							{
								Var3.f_2 = uVar2;
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var3, true, false, false, true);
								__LIB_14__::func_670(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_314.f_0, true));
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
							}
						}
						else
						{
							__LIB_14__::func_670(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_314.f_0, true));
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						}
					}
				}
			}
			else if (!iLocal_306 && fLocal_313 >= 0.25f)
			{
				if (__LIB_0__::func_121(Local_63.f_0))
				{
					CAM::SHAKE_CAM(iLocal_311[0], "MEDIUM_EXPLOSION_SHAKE", 0.1666f);
					VEHICLE::EXPLODE_VEHICLE_IN_CUTSCENE(Local_63.f_0, true);
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_359, "CRASH", Local_63.f_0, "NIGEL_03_SOUNDSET", false, 0);
					iLocal_306 = 1;
				}
			}
			if ((bLocal_303 && iLocal_307) && fLocal_313 >= 6.7f)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				iLocal_307 = 0;
			}
			if (__LIB_0__::func_645(1000) && bLocal_303)
			{
				bLocal_303 = false;
				bLocal_304 = true;
			}
			if (!bLocal_303)
			{
				MISC::SET_TIME_SCALE(1f);
				iLocal_56 = 2;
			}
			break;
		case 2:
			RECORDING::REPLAY_STOP_EVENT();
			if (bLocal_304)
			{
				if (__LIB_0__::func_121(Local_63.f_0))
				{
					VEHICLE::EXPLODE_VEHICLE_IN_CUTSCENE(Local_63.f_0, true);
				}
			}
			CAM::STOP_SCRIPT_GLOBAL_SHAKING(true);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			__LIB_14__::func_870(1, 1, 1, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			iLocal_62 = 0;
			while (iLocal_62 <= 3)
			{
				CAM::DESTROY_CAM(iLocal_311[iLocal_62], false);
				iLocal_62++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_63.f_0))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_63.f_0, false), Local_308, true) > 25f)
				{
					FIRE::STOP_FIRE_IN_RANGE(Local_308, 20f);
				}
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_03_MIX_SETTINGS"))
			{
				AUDIO::STOP_AUDIO_SCENE("NIGEL_03_MIX_SETTINGS");
			}
			fVar4 = (SYSTEM::TO_FLOAT((iLocal_312[0] + iLocal_312[1])) / 1000f);
			if (bLocal_352)
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME((fVar4 + 2.5f), 2f, 0);
			}
			else
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(fVar4, 2f, 0);
			}
			iLocal_56 = 0;
			iLocal_55 = 10;
			break;
	}
}

void func_236()//Position - 0x27C01
{
	float fVar0;
	fVar0 = 1f;
	if (fLocal_313 < 0.225f)
	{
		fVar0 = 1f;
	}
	else if (fLocal_313 < 0.75f)
	{
		fVar0 = (1f - (0.8f * ((fLocal_313 - 0.225f) / (0.75f - 0.225f))));
	}
	else if (fLocal_313 < 3f)
	{
		fVar0 = 0.2f;
	}
	else if (fLocal_313 < 4f)
	{
		fVar0 = (0.2f + (0.8f * ((fLocal_313 - 3f) / (4f - 3f))));
	}
	fLocal_313 = (fLocal_313 + ((1f / fVar0) * SYSTEM::TIMESTEP()));
	MISC::SET_TIME_SCALE(fVar0);
}

void func_239(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x27CCD
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
					if (func_149(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_149(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_149(PLAYER::PLAYER_PED_ID(), 8, 1) || func_149(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_149(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			iLocal_34 = 0;
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_34 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__::func_84(500, 0);
		}
	}
}

void func_252()//Position - 0x281C5
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	switch (iLocal_56)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT(sLocal_100);
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_90[0], &(uLocal_93[0]), &(Local_94[0 /*7*/][0 /*3*/]), &(Local_94[0 /*7*/][1 /*3*/]), &(uLocal_95[0])) != 1 && SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_90[1], &(uLocal_93[1]), &(Local_94[1 /*7*/][0 /*3*/]), &(Local_94[1 /*7*/][1 /*3*/]), &(uLocal_95[0])) != 1)
			{
				if (uLocal_93[0] == 1 || uLocal_93[1] == 1)
				{
					bLocal_310 = true;
				}
				else
				{
					bLocal_310 = false;
				}
			}
			else
			{
				bLocal_310 = true;
			}
			if ((STREAMING::HAS_ANIM_DICT_LOADED(sLocal_100) && STREAMING::HAS_MODEL_LOADED(iLocal_105)) && __LIB_0__::func_121(Local_63.f_0))
			{
				func_239(ENTITY::GET_ENTITY_COORDS(Local_63.f_0, true), 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				iLocal_309 = MISC::GET_GAME_TIMER();
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(iLocal_68))
				{
					MISC::SET_INSTANCE_PRIORITY_HINT(0);
					__LIB_0__::func_429();
					VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_63.f_0, true);
					ENTITY::DETACH_ENTITY(iLocal_68, false, true);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_68, true, false);
					ENTITY::FREEZE_ENTITY_POSITION(Local_63.f_0, true);
					Local_101 = { ENTITY::GET_ENTITY_COORDS(Local_63.f_0, true) };
					Local_102 = { ENTITY::GET_ENTITY_ROTATION(Local_63.f_0, 2) };
					iLocal_103 = PED::CREATE_SYNCHRONIZED_SCENE(Local_101, Local_102, 2);
					iLocal_104 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
					if (bLocal_310)
					{
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_104, iLocal_103, "out_trunk_cam_alt", sLocal_100);
					}
					else
					{
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_104, iLocal_103, "out_trunk_cam", sLocal_100);
					}
					CAM::SET_CAM_ACTIVE(iLocal_104, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					iLocal_106 = OBJECT::CREATE_OBJECT(iLocal_105, Local_101, true, true, false);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_103, sLocal_100, "out_trunk_trevor", 1000f, -2f, 2, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_68, iLocal_103, sLocal_100, "out_trunk_al", 1000f, -2f, 0, 0, 1000f, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_63.f_0, iLocal_103, "out_trunk_car", sLocal_100, 1000f, 8f, 0, 1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_106, iLocal_103, "out_trunk_cash", sLocal_100, 1000f, 8f, 0, 1000f);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_103, false);
					MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_63.f_0, 0f, -3f, -0.47f), 10f, true, false, false, false, false, false, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(Local_63.f_0, true), 10f, true, false, false, false, false, false, 0);
					if (bLocal_111)
					{
						VEHICLE::SET_RANDOM_TRAINS(false);
						VEHICLE::DELETE_ALL_TRAINS();
						bLocal_111 = false;
					}
					RECORDING::REPLAY_START_EVENT(1);
					bLocal_98 = false;
					iLocal_99 = 0;
					iLocal_56 = 1;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_121(Local_63.f_0))
			{
				VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_63.f_0, true);
			}
			if (__LIB_0__::func_645(1000))
			{
				bLocal_98 = true;
				if (__LIB_0__::func_75())
				{
					__LIB_0__::func_429();
				}
			}
			if ((!iLocal_97 && (MISC::GET_GAME_TIMER() - iLocal_309) > 500) && !bLocal_98)
			{
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(Local_63.f_0))
				{
					if (__LIB_2__::func_859(&uLocal_115, "NIGE3AU", "NIGEL3_R1", 7, 0, 0, 0))
					{
						iLocal_97 = 1;
					}
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_103) >= 0.852f && !iLocal_99)
			{
				bVar0 = true;
				Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_100, "out_trunk_trevor", Local_101, Local_102, 0.852f, 2) };
				Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_100, "out_trunk_trevor", Local_101, Local_102, 1f, 2) };
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &fVar3, false, false) && MISC::GET_GROUND_Z_FOR_3D_COORD(Var2, &fVar4, false, false))
				{
					if ((fVar3 - fVar4) > 0.25f)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						bLocal_98 = false;
						iLocal_56 = 2;
						bVar0 = false;
					}
					Var1.f_2 = fVar3;
				}
				iLocal_99 = 1;
				if (bVar0)
				{
					Var2 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_100, "out_trunk_trevor", Local_101, Local_102, PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_103), 2) };
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), -1000f, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Var2.f_2);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var1, false, false, false, true);
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_100, "out_trunk_trevor", 1000f, -2f, -1, 0, PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_103), false, false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				}
				__LIB_0__::func_123(&iLocal_106);
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_103) > 0.99f || bLocal_98)
			{
				iLocal_56 = 2;
			}
			break;
		case 2:
			if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(iLocal_68)) && __LIB_0__::func_121(Local_63.f_0))
			{
				if (bLocal_98)
				{
					__LIB_0__::func_429();
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_103) < 0.99f)
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_103, 0.99f);
					}
				}
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_63.f_0, -1000f, true);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), true, 0, true);
				VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_63.f_0, 5, true);
				TASK::CLEAR_PED_TASKS(iLocal_68);
				TASK::TASK_SMART_FLEE_PED(iLocal_68, PLAYER::PLAYER_PED_ID(), 3000f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_68, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_68, true);
				if (CAM::DOES_CAM_EXIST(iLocal_104))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_CAM_ACTIVE(iLocal_104, false);
					CAM::DESTROY_CAM(iLocal_104, false);
				}
				if (bLocal_98)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				}
				else
				{
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				__LIB_0__::func_123(&iLocal_106);
				if (bLocal_310)
				{
					__LIB_0__::func_0(&iLocal_68);
				}
				__LIB_14__::func_870(1, 1, 1, 1);
				if (iLocal_114 == 0)
				{
					iLocal_114 = 1;
				}
				__LIB_14__::func_593(__LIB_0__::func_683(), 1, Local_112[(iLocal_114 - 1) /*8*/].f_7, 0, 0);
				RECORDING::REPLAY_STOP_EVENT();
				iLocal_297 = 1;
				func_2();
			}
			break;
	}
}

void func_284()//Position - 0x29AA5
{
	switch (iLocal_56)
	{
		case 0:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_03_MIX_SETTINGS"))
			{
				AUDIO::STOP_AUDIO_SCENE("NIGEL_03_MIX_SETTINGS");
			}
			if (bLocal_357)
			{
				if (!__LIB_0__::func_121(Local_63.f_0))
				{
					if (__LIB_0__::func_75())
					{
						__LIB_0__::func_429();
					}
					iLocal_56 = 0;
					iLocal_55 = 10;
				}
				else if (bLocal_358)
				{
					if (__LIB_2__::func_859(&uLocal_115, "NIGE3AU", "NIGEL3_X1", 7, 0, 0, 0))
					{
						iLocal_56 = 1;
					}
				}
				else if (__LIB_2__::func_859(&uLocal_115, "NIGE3AU", "NIGEL3_X2", 7, 0, 0, 0))
				{
					iLocal_56 = 1;
				}
			}
			else if (__LIB_2__::func_859(&uLocal_115, "NIGE3AU", "NIGEL3_X3", 7, 0, 0, 0))
			{
				iLocal_56 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_75())
			{
				iLocal_56 = 2;
			}
			break;
		case 2:
			sLocal_378 = "N3FMISST";
			iLocal_55 = 13;
			iLocal_56 = 0;
			break;
	}
}

void func_285()//Position - 0x29B77
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	switch (iLocal_56)
	{
		case 0:
			if (!bLocal_338)
			{
				if (__LIB_0__::func_75())
				{
					__LIB_0__::func_638();
				}
				bLocal_338 = true;
				iLocal_337 = 0;
				iLocal_339 = 0;
				iLocal_342 = 0;
				__LIB_14__::func_874(1, "Train section", 1, 0, 0, 1);
			}
			if (iLocal_337)
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_63.f_0, false))
				{
					HUD::CLEAR_PRINTS();
					__LIB_0__::func_714(&iLocal_107);
					iLocal_337 = 0;
				}
			}
			else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_63.f_0, false))
			{
				HUD::CLEAR_PRINTS();
				__LIB_0__::func_714(&iLocal_107);
				iLocal_107 = __LIB_14__::func_866(Local_63.f_0, 1, 5);
				if (!iLocal_60)
				{
					__LIB_0__::func_229("N3RTCAR", 7500, 1);
					iLocal_60 = 1;
				}
				iLocal_337 = 1;
			}
			if (__LIB_2__::func_859(&uLocal_115, "NIGE3AU", "NIGEL3_CX", 7, 1, 0, 0))
			{
				__LIB_0__::func_714(&iLocal_107);
				iLocal_339 = 1;
				iLocal_340 = 0;
			}
			if (!iLocal_342 && func_321())
			{
				iLocal_342 = 1;
			}
			if (iLocal_339 && iLocal_342)
			{
				if (iLocal_337 == 0)
				{
					__LIB_0__::func_229("N3RAM", 7500, 1);
					iLocal_346 = 1;
					__LIB_0__::func_714(&iLocal_107);
					iLocal_56 = 1;
				}
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 6f, 1);
				bLocal_357 = false;
				iLocal_351 = 0;
				iLocal_373 = 0;
				iLocal_56 = 1;
			}
			break;
		case 1:
			if (iLocal_337)
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_63.f_0, true))
				{
					HUD::CLEAR_PRINTS();
					__LIB_0__::func_714(&iLocal_107);
					if (!iLocal_346)
					{
						__LIB_0__::func_229("N3RAM", 7500, 1);
						iLocal_346 = 1;
					}
					iLocal_337 = 0;
				}
				else if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_63.f_0, 200f, 1))
				{
					iLocal_55 = 13;
					iLocal_56 = 0;
					sLocal_378 = "N3FLEFT";
					break;
				}
			}
			else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_63.f_0, false))
			{
				if (__LIB_0__::func_501("N3RAM", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				iLocal_337 = 1;
			}
			if (__LIB_0__::func_121(Local_314.f_0))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_03_JOURNEY_MIX"))
				{
					AUDIO::STOP_AUDIO_SCENE("NIGEL_03_JOURNEY_MIX");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_03_MIX_SETTINGS"))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_314.f_0, "NIGEL_03_MIX_GROUP", 0f);
					AUDIO::START_AUDIO_SCENE("NIGEL_03_MIX_SETTINGS");
					VEHICLE::START_VEHICLE_HORN(Local_314.f_0, 30000, MISC::GET_HASH_KEY("HELDDOWN"), false);
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_360, "TRAIN_COMING", Local_314.f_0, "NIGEL_03_SOUNDSET", false, 0);
				}
				func_298(0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_63.f_0, Local_109[0 /*3*/], Local_109[1 /*3*/], Local_109.f_7, false, true, 0))
			{
				if ((__LIB_0__::func_76(Local_63.f_0, Local_314.f_0, 1) < 120f && !bLocal_347) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_63.f_0, false))
				{
					if (ENTITY::GET_ENTITY_SPEED(Local_63.f_0) > 0.25f)
					{
						__LIB_0__::func_229("N3BAIL", 7500, 1);
					}
					else
					{
						__LIB_0__::func_229("N3EXIT", 7500, 1);
					}
					bLocal_347 = true;
				}
			}
			else if (bLocal_347)
			{
				HUD::CLEAR_THIS_PRINT("N3BAIL");
				HUD::CLEAR_THIS_PRINT("N3EXIT");
			}
			if (bLocal_347 && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				HUD::CLEAR_THIS_PRINT("N3BAIL");
				HUD::CLEAR_THIS_PRINT("N3EXIT");
			}
			Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(Local_314.f_0, false) };
			Var1 = { ENTITY::GET_ENTITY_SPEED_VECTOR(Local_63.f_0, false) };
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_63.f_0, Local_314.f_0))
			{
				if ((uLocal_353[0] + uLocal_354[0]) > 14f)
				{
					if (uLocal_355[1])
					{
						if (func_295())
						{
							if (PLAYER::GET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID()))
							{
							}
							else
							{
								__LIB_0__::func_630(797);
								if (iLocal_351)
								{
									iLocal_349 = (MISC::GET_GAME_TIMER() - iLocal_349);
									if (iLocal_349 < iLocal_350)
									{
										bLocal_352 = true;
										__LIB_0__::func_630(796);
									}
								}
							}
							HUD::CLEAR_PRINTS();
							__LIB_0__::func_714(&iLocal_107);
							func_298(1);
							VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_63.f_0, true);
							iLocal_56 = 0;
							iLocal_55 = 9;
							break;
						}
						else
						{
							__LIB_0__::func_0(&iLocal_68);
							if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
							{
								PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
							}
							VEHICLE::EXPLODE_VEHICLE(Local_63.f_0, true, false);
							PED::EXPLODE_PED_HEAD(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"));
						}
					}
					else
					{
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(true);
						func_298(1);
						__LIB_0__::func_714(&iLocal_107);
						iLocal_55 = 7;
						iLocal_56 = 0;
						bLocal_357 = true;
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_63.f_0, true))
						{
							bLocal_358 = true;
						}
						else
						{
							bLocal_358 = false;
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_314.f_0))
						{
							VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&Local_314, false);
						}
					}
				}
			}
			else
			{
				func_293();
			}
			func_291(-Var0.f_1, Var1.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_314.f_0))
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(Local_63.f_0, true) };
				Var3 = { ENTITY::GET_ENTITY_COORDS(Local_314.f_0, false) };
				if (Var2.f_1 > Var3.f_1)
				{
					HUD::CLEAR_PRINTS();
					__LIB_0__::func_714(&iLocal_107);
					iLocal_55 = 7;
					iLocal_56 = 0;
				}
				else
				{
					func_290();
				}
			}
			func_286();
			break;
		case 2:
			break;
	}
}

void func_286()//Position - 0x29FE1
{
	func_288();
	switch (iLocal_340)
	{
		case 0:
			if (iLocal_339 && !__LIB_0__::func_75())
			{
				iLocal_341 = MISC::GET_GAME_TIMER();
				iLocal_340 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_121(iLocal_68) && MISC::GET_GAME_TIMER() > iLocal_341)
			{
				if (__LIB_0__::func_501("N3BAIL", 0, 0))
				{
					if (__LIB_2__::func_859(&uLocal_115, "NIGE3AU", "NIGEL3_PNC", 7, 1, 0, 0))
					{
						func_287();
						iLocal_340 = 2;
					}
				}
				else if (__LIB_2__::func_859(&uLocal_115, "NIGE3AU", "NIGEL3_PNC", 7, 0, 0, 0))
				{
					func_287();
					iLocal_340 = 2;
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_75())
			{
				iLocal_341 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 2500));
				iLocal_340 = 1;
			}
			break;
	}
}

void func_287()//Position - 0x2A0AB
{
	if (__LIB_0__::func_121(iLocal_68))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_281, "TRUNK_THUMPS", iLocal_68, 0, false, 0);
		iLocal_283 = 0;
	}
}

void func_288()//Position - 0x2A0D3
{
	if (__LIB_0__::func_121(Local_63.f_0))
	{
		switch (iLocal_283)
		{
			case 0:
				if (ENTITY::GET_ENTITY_SPEED(Local_63.f_0) < 0.5f)
				{
					func_289();
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_63.f_0, 1, 0f, 0f, IntToFloat(iLocal_288), fLocal_289, -1.5f, 0f, 0, true, true, false, true, true);
				}
				iLocal_284 = MISC::GET_RANDOM_INT_IN_RANGE(3, 7);
				iLocal_285 = 1;
				iLocal_286 = MISC::GET_GAME_TIMER();
				iLocal_287 = MISC::GET_RANDOM_INT_IN_RANGE(100, 250);
				iLocal_283 = 1;
				break;
			case 1:
				if (iLocal_285 < iLocal_284)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_286) > iLocal_287)
					{
						if (ENTITY::GET_ENTITY_SPEED(Local_63.f_0) < 0.5f)
						{
							func_289();
							ENTITY::APPLY_FORCE_TO_ENTITY(Local_63.f_0, 1, 0f, 0f, IntToFloat(iLocal_288), fLocal_289, -1.5f, 0f, 0, true, true, false, true, true);
						}
						iLocal_286 = MISC::GET_GAME_TIMER();
						iLocal_287 = MISC::GET_RANDOM_INT_IN_RANGE(100, 250);
						iLocal_285++;
					}
				}
				else
				{
					iLocal_283 = 2;
				}
				break;
			case 2:
				break;
			}
	}
}

void func_289()//Position - 0x2A1C4
{
	iLocal_288 = MISC::GET_RANDOM_INT_IN_RANGE(-220, -120);
	fLocal_289 = (0.5f * SYSTEM::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(-2, 3)));
}

void func_290()//Position - 0x2A1EE
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	int iVar3;
	if (bLocal_338)
	{
		if (__LIB_0__::func_121(Local_314.f_0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(Local_314.f_0, true) };
			if (!bLocal_344)
			{
				if (Var0.f_1 < 1824.36f)
				{
					iLocal_345 = MISC::GET_GAME_TIMER();
					bLocal_344 = true;
				}
				else if (ENTITY::DOES_ENTITY_EXIST(Local_314.f_6) && ENTITY::IS_ENTITY_DEAD(Local_314.f_6, false))
				{
					iLocal_345 = MISC::GET_GAME_TIMER();
					bLocal_344 = true;
				}
			}
			if (bLocal_344)
			{
				fVar1 = (75f - 25f);
				iVar3 = (MISC::GET_GAME_TIMER() - iLocal_345);
				if (iVar3 < 11000)
				{
					fVar2 = (SYSTEM::TO_FLOAT(iVar3) / SYSTEM::TO_FLOAT(11000));
				}
				else
				{
					fVar2 = 1f;
				}
				VEHICLE::SET_TRAIN_SPEED(Local_314.f_0, (25f + (fVar1 * fVar2)));
			}
			else
			{
				VEHICLE::SET_TRAIN_SPEED(Local_314.f_0, 25f);
			}
		}
	}
}

void func_291(float fParam0, var uParam1)//Position - 0x2A2B6
{
	uLocal_353[0] = uLocal_353[1];
	uLocal_353[1] = fParam0;
	uLocal_354[0] = uLocal_354[1];
	uLocal_354[1] = uParam1;
	uLocal_355[0] = uLocal_355[1];
	uLocal_355[1] = func_292();
	bLocal_356[0] = bLocal_356[1];
	bLocal_356[1] = ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_63.f_0);
}

int func_292()//Position - 0x2A318
{
	struct<3> Var0[2];
	float fVar1;
	float fVar2;
	struct<3> Var3[4];
	if (__LIB_0__::func_121(Local_63.f_0) && __LIB_0__::func_121(Local_314.f_0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_63.f_0, Local_110[0 /*3*/], Local_110[1 /*3*/], Local_110.f_7, false, true, 0))
		{
			return 1;
		}
		Var0[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_314.f_0, 0f, 8f, -4f) };
		Var0[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_314.f_0, 0f, 16f, 8f) };
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_63.f_0, Var0[0 /*3*/], Var0[1 /*3*/], Local_110.f_7, false, true, 0))
		{
			return 1;
		}
		fVar1 = 1.6f;
		fVar2 = 4.2f;
		Var3[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_63.f_0, (-fVar1 / 2f), (fVar2 / 2f), 0f) };
		Var3[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_63.f_0, (fVar1 / 2f), (fVar2 / 2f), 0f) };
		Var3[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_63.f_0, (-fVar1 / 2f), (-fVar2 / 2f), 0f) };
		Var3[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_63.f_0, (fVar1 / 2f), (-fVar2 / 2f), 0f) };
		iLocal_62 = 0;
		while (iLocal_62 <= 3)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var3[iLocal_62 /*3*/], Var0[0 /*3*/], Var0[1 /*3*/], Local_110.f_7, false, true))
			{
				return 1;
			}
			iLocal_62++;
		}
	}
	return 0;
}

void func_293()//Position - 0x2A45E
{
	float fVar0;
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_63.f_0, false))
	{
		if (ENTITY::GET_ENTITY_SPEED(Local_63.f_0) > 2f && func_292())
		{
			fVar0 = __LIB_0__::func_76(Local_63.f_0, Local_314.f_0, 1);
			if (fVar0 < fLocal_348)
			{
				fLocal_348 = fVar0;
			}
		}
	}
	else if (!iLocal_351)
	{
		if (ENTITY::GET_ENTITY_SPEED(Local_63.f_0) > 2f && func_292())
		{
			iLocal_349 = MISC::GET_GAME_TIMER();
			iLocal_351 = 1;
		}
	}
}

int func_295()//Position - 0x2A53C
{
	if (PLAYER::GET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_296())
	{
		return 0;
	}
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_63.f_0, true) && !(iLocal_337 && bLocal_356[1]))
	{
		return 1;
	}
	return 0;
}

int func_296()//Position - 0x2A586
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(Local_63.f_0, true) };
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Var0, true);
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_63.f_0, PLAYER::PLAYER_PED_ID()) && (Var0.f_2 - Var1.f_2) > 0.5f)
	{
		return 1;
	}
	if (fVar2 < 3f && (Var0.f_2 - Var1.f_2) > 0.5f)
	{
		return 1;
	}
	return 0;
}

void func_298(bool bParam0)//Position - 0x2A65E
{
	if (bParam0)
	{
		func_318();
		HUD::CLEAR_HELP(true);
	}
	else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_63.f_0, false))
	{
		if (iLocal_373 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_HELP(true);
		}
		func_318();
	}
	else if (__LIB_0__::func_687(Local_63.f_0, Local_314.f_0, 350f, 1))
	{
		if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_63.f_0, Local_375[0 /*8*/][0 /*3*/], Local_375[0 /*8*/][1 /*3*/], Local_375[0 /*8*/].f_7, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_63.f_0, Local_375[1 /*8*/][0 /*3*/], Local_375[1 /*8*/][1 /*3*/], Local_375[1 /*8*/].f_7, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_63.f_0, Local_375[2 /*8*/][0 /*3*/], Local_375[2 /*8*/][1 /*3*/], Local_375[2 /*8*/].f_7, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_63.f_0, Local_375[3 /*8*/][0 /*3*/], Local_375[3 /*8*/][1 /*3*/], Local_375[3 /*8*/].f_7, false, true, 0))
		{
			if (!iLocal_373)
			{
				__LIB_0__::func_151("N3TRAINCAM", -1);
				iLocal_373 = 1;
			}
			if (__LIB_13__::func_796(&uLocal_361, 1, 1, 0))
			{
				func_299();
				if (CAM::DOES_CAM_EXIST(iLocal_374))
				{
					CAM::POINT_CAM_AT_ENTITY(iLocal_374, Local_63.f_0, 0f, 0f, 2f, true);
				}
			}
			else
			{
				func_318();
			}
		}
	}
	else
	{
		func_318();
	}
}

void func_299()//Position - 0x2A7AE
{
	if (!CAM::DOES_CAM_EXIST(iLocal_374))
	{
		iLocal_374 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
		CAM::SET_CAM_FOV(iLocal_374, 40.68f);
		CAM::SHAKE_CAM(iLocal_374, "HAND_SHAKE", 1f);
		CAM::ATTACH_CAM_TO_ENTITY(iLocal_374, Local_314.f_0, 3.32f, -6.08f, 4.28f, true);
		CAM::SET_CAM_ACTIVE(iLocal_374, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
}

void func_318()//Position - 0x2B1BC
{
	if (CAM::DOES_CAM_EXIST(iLocal_374))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_374))
		{
			CAM::SET_CAM_ACTIVE(iLocal_374, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		CAM::DESTROY_CAM(iLocal_374, false);
	}
}

int func_321()//Position - 0x2B234
{
	if (!iLocal_343)
	{
		STREAMING::REQUEST_MODEL(Local_314.f_1);
		STREAMING::REQUEST_MODEL(joaat("freight"));
		STREAMING::REQUEST_MODEL(joaat("freightcar"));
		STREAMING::REQUEST_MODEL(joaat("freightcont1"));
		STREAMING::REQUEST_MODEL(joaat("freightcont2"));
		STREAMING::REQUEST_MODEL(Local_314.f_7);
		iLocal_343 = 1;
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_314.f_0))
	{
		if ((((STREAMING::HAS_MODEL_LOADED(Local_314.f_1) && STREAMING::HAS_MODEL_LOADED(joaat("freight"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightcar"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightcont1"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightcont2")))
		{
			Local_314.f_0 = VEHICLE::CREATE_MISSION_TRAIN(10, Local_314.f_2, true, 0, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_314.f_0, true);
			VEHICLE::SET_TRAIN_SPEED(Local_314.f_0, 25f);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_314.f_1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freight"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcar"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont1"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont2"));
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_314.f_6))
	{
		if (STREAMING::HAS_MODEL_LOADED(Local_314.f_7) && __LIB_0__::func_121(Local_314.f_0))
		{
			Local_314.f_6 = PED::CREATE_PED_INSIDE_VEHICLE(Local_314.f_0, 26, Local_314.f_7, -1, true, true);
			PED::SET_PED_COMPONENT_VARIATION(Local_314.f_6, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_314.f_6, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_314.f_6, 10, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_314.f_6, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Trucker_01"));
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_401()//Position - 0x322BF
{
	switch (iLocal_56)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT(sLocal_100);
			STREAMING::REQUEST_MODEL(iLocal_105);
			if (ENTITY::GET_ENTITY_SPEED(Local_63.f_0) >= 0.025f)
			{
				iLocal_96 = 4;
				iLocal_56 = 1;
			}
			else
			{
				if (bLocal_295)
				{
					if (!iLocal_60)
					{
						iLocal_61 = MISC::GET_GAME_TIMER();
					}
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_107))
				{
					iLocal_107 = __LIB_14__::func_866(Local_63.f_0, 1, 5);
				}
				if (!bLocal_294)
				{
					iLocal_96 = 0;
					iLocal_56 = 1;
				}
				else if (bLocal_338)
				{
					iLocal_96 = 6;
					iLocal_56 = 1;
				}
				else if (func_416())
				{
					__LIB_0__::func_151("N3NRCOP", -1);
					iLocal_96 = 1;
					iLocal_56 = 1;
				}
				else if (SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_90[0], &(uLocal_93[0]), &(Local_94[0 /*7*/][0 /*3*/]), &(Local_94[0 /*7*/][1 /*3*/]), &(uLocal_95[0])) != 1 && SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_90[1], &(uLocal_93[1]), &(Local_94[1 /*7*/][0 /*3*/]), &(Local_94[1 /*7*/][1 /*3*/]), &(uLocal_95[0])) != 1)
				{
					if (uLocal_93[0] == 1 || uLocal_93[1] == 1)
					{
						__LIB_0__::func_151("N3TRUNK", -1);
						iLocal_96 = 2;
						iLocal_56 = 1;
					}
					else if (func_414())
					{
						__LIB_0__::func_151("N3WONKY", -1);
						iLocal_96 = 3;
						iLocal_56 = 1;
					}
					else
					{
						if (!iLocal_296)
						{
							__LIB_0__::func_151("N3FTRUNK", -1);
							iLocal_296 = 1;
						}
						iLocal_96 = 5;
						iLocal_56 = 1;
					}
				}
			}
			func_288();
			iLocal_290 = 0;
			break;
		case 1:
			func_413();
			if (iLocal_58 == 4)
			{
				func_406();
			}
			func_405();
			func_288();
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_63.f_0, false))
			{
				iLocal_56 = 2;
				iLocal_57 = 0;
			}
			else if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_63.f_0, 250f, 1))
			{
				iLocal_56 = 2;
				iLocal_57 = 2;
			}
			else if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_63.f_0, 50f, 1) && !iLocal_293)
			{
				__LIB_0__::func_229("N3LEAVECAR", 7500, 1);
				iLocal_293 = 1;
			}
			else
			{
				switch (iLocal_96)
				{
					case 0:
						if (!iLocal_60)
						{
							__LIB_0__::func_229("N3RTCAR", 7500, 1);
							iLocal_60 = 1;
						}
						if (bLocal_294)
						{
							func_404();
							iLocal_56 = 0;
						}
						break;
					case 1:
					case 2:
					case 3:
					case 6:
						break;
					case 5:
						if (!iLocal_60 && (MISC::GET_GAME_TIMER() - iLocal_61) > 5000)
						{
							__LIB_0__::func_229("N3RTCAR", 7500, 1);
							__LIB_14__::func_875(&uLocal_324);
							iLocal_60 = 1;
						}
						if ((__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_63.f_0, Local_87), 0.8f, 1) && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID())) && !((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())))
						{
							iLocal_56 = 2;
							iLocal_57 = 1;
							iLocal_283 = 2;
						}
						VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_63.f_0, true);
						break;
					case 4:
						if (ENTITY::GET_ENTITY_SPEED(Local_63.f_0) < 0.025f)
						{
							func_404();
							iLocal_56 = 0;
						}
						break;
					}
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			__LIB_0__::func_714(&iLocal_107);
			switch (iLocal_57)
			{
				case 0:
					if (bLocal_338)
					{
						iLocal_55 = 6;
					}
					else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						iLocal_55 = 11;
					}
					else
					{
						iLocal_55 = 4;
					}
					break;
				case 1:
					iLocal_90[0] = SHAPETEST::START_SHAPE_TEST_BOX(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_63.f_0, Local_91[2 /*3*/]), Local_92[2 /*3*/], ENTITY::GET_ENTITY_ROTATION(Local_63.f_0, 2), 2, 19, 0, 4);
					iLocal_90[1] = SHAPETEST::START_SHAPE_TEST_BOX(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_63.f_0, Local_91[3 /*3*/]), Local_92[3 /*3*/], ENTITY::GET_ENTITY_ROTATION(Local_63.f_0, 2), 2, 19, 0, 4);
					iLocal_55 = 8;
					break;
				case 2:
					sLocal_378 = "N3FLEFT";
					iLocal_55 = 13;
					break;
			}
			iLocal_56 = 0;
			break;
	}
}

void func_404()//Position - 0x326B8
{
	if (__LIB_0__::func_121(Local_63.f_0))
	{
		iLocal_90[0] = SHAPETEST::START_SHAPE_TEST_BOX(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_63.f_0, Local_91[0 /*3*/]), Local_92[0 /*3*/], ENTITY::GET_ENTITY_ROTATION(Local_63.f_0, 2), 2, 19, 0, 4);
		iLocal_90[1] = SHAPETEST::START_SHAPE_TEST_BOX(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_63.f_0, Local_91[1 /*3*/]), Local_92[1 /*3*/], ENTITY::GET_ENTITY_ROTATION(Local_63.f_0, 2), 2, 19, 0, 4);
	}
}

void func_405()//Position - 0x3271B
{
	if (__LIB_0__::func_121(iLocal_68))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_63.f_0, false))
		{
			switch (iLocal_290)
			{
				case 0:
					iLocal_291 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 12000));
					iLocal_290 = 1;
					break;
				case 1:
					if (MISC::GET_GAME_TIMER() > iLocal_291 && !__LIB_0__::func_75())
					{
						func_287();
						iLocal_290 = 2;
					}
					break;
				case 2:
					if (iLocal_283 == 2)
					{
						iLocal_290 = 0;
					}
					break;
				}
			}
	}
}

void func_406()//Position - 0x3279C
{
	func_288();
	switch (iLocal_58)
	{
		case 0:
			if (__LIB_0__::func_121(Local_63.f_0))
			{
				if (!__LIB_0__::func_725(Local_63.f_0, Local_84, Local_112[iLocal_114 /*8*/].f_2, 1) && !bLocal_299)
				{
					iLocal_58 = 3;
					if (iLocal_114 < 3)
					{
						func_287();
						bLocal_280 = false;
					}
					else
					{
						bLocal_280 = true;
					}
				}
				else
				{
					func_412();
				}
			}
			break;
		case 3:
			if (bLocal_280 == 0)
			{
				bLocal_280 = AUDIO::HAS_SOUND_FINISHED(iLocal_281);
			}
			if (iLocal_114 < 4 && bLocal_280)
			{
				if (!bLocal_299)
				{
					if (iLocal_114 == 3)
					{
						if (!__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_108, 150f, 1))
						{
							if (__LIB_2__::func_859(&uLocal_115, Local_112[iLocal_114 /*8*/], Local_112[iLocal_114 /*8*/].f_1, 7, 0, 0, 0))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_68))
								{
									AUDIO::ADD_PED_TO_CONVERSATION(5, iLocal_68, "DINAPOLI");
								}
								if (iLocal_114 == 0)
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 5f, 0);
								}
								iLocal_58 = 4;
							}
						}
					}
					else if (__LIB_2__::func_859(&uLocal_115, Local_112[iLocal_114 /*8*/], Local_112[iLocal_114 /*8*/].f_1, 7, 0, 0, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_68))
						{
							AUDIO::ADD_PED_TO_CONVERSATION(5, iLocal_68, "DINAPOLI");
						}
						func_287();
						iLocal_58 = 4;
					}
				}
				else
				{
					func_412();
				}
			}
			else if (iLocal_114 >= 4)
			{
				iLocal_58 = 6;
			}
			break;
		case 4:
			if (__LIB_0__::func_121(Local_63.f_0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_63.f_0, false))
				{
					if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_63.f_0, 15f, 1))
					{
						__LIB_0__::func_429();
					}
				}
				if (!__LIB_0__::func_75())
				{
					bLocal_294 = true;
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_63.f_0, false))
					{
						iLocal_282 = MISC::GET_GAME_TIMER();
						iLocal_58 = 5;
						iLocal_114++;
					}
				}
			}
			__LIB_14__::func_881(&uLocal_324, &uLocal_115, "NIGE3AU", &sLocal_325, &cLocal_331);
			break;
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_282) < 7500)
			{
				if (!bLocal_295)
				{
					__LIB_0__::func_151("N3REL1", -1);
					bLocal_295 = true;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_282) > 10000)
			{
				if (iLocal_114 < 4)
				{
					iLocal_58 = 0;
				}
				else
				{
					iLocal_58 = 6;
				}
			}
			else
			{
				func_412();
			}
			break;
		case 6:
			func_412();
			break;
	}
}

void func_412()//Position - 0x32C07
{
	if (__LIB_0__::func_121(Local_63.f_0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_63.f_0, false))
		{
			switch (iLocal_298)
			{
				case 0:
					if ((ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_63.f_0) && !__LIB_0__::func_501("N3NORTH", 0, 0)) && !__LIB_0__::func_501("N3RAM", 0, 0))
					{
						iLocal_298 = 1;
					}
					break;
				case 1:
					if (__LIB_2__::func_859(&uLocal_115, "NIGE3AU", "NIGEL3_FRND", 7, 0, 0, 0))
					{
						func_287();
						bLocal_299 = true;
						iLocal_298 = 2;
					}
					break;
				case 2:
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						bLocal_299 = false;
						iLocal_300 = MISC::GET_GAME_TIMER();
						iLocal_298 = 3;
					}
					break;
				case 3:
					if ((MISC::GET_GAME_TIMER() - iLocal_300) > 8000)
					{
						iLocal_298 = 0;
					}
					break;
				}
			}
	}
}

void func_413()//Position - 0x32CCA
{
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_63.f_0, false))
	{
		switch (iLocal_301)
		{
			case 0:
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_63.f_0, PLAYER::PLAYER_PED_ID(), true))
				{
					if (__LIB_0__::func_687(Local_63.f_0, PLAYER::PLAYER_PED_ID(), 20f, 1))
					{
						iLocal_301 = 1;
						iLocal_290 = 0;
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_63.f_0);
				}
				break;
			case 1:
				if (__LIB_2__::func_859(&uLocal_115, "NIGE3AU", "NIGEL3_SCRND", 7, 0, 0, 0))
				{
					iLocal_290 = 0;
					func_287();
					iLocal_301 = 2;
				}
				break;
			case 2:
				if (!__LIB_0__::func_75())
				{
					iLocal_302 = MISC::GET_GAME_TIMER() + 3000;
					iLocal_290 = 0;
					iLocal_301 = 3;
				}
				break;
			case 3:
				if (MISC::GET_GAME_TIMER() > iLocal_302)
				{
					iLocal_301 = 0;
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_63.f_0);
				}
				break;
			}
	}
}

int func_414()//Position - 0x32D8C
{
	float fVar0;
	float fVar1;
	if (__LIB_0__::func_121(Local_63.f_0))
	{
		fVar0 = __LIB_1__::func_9(ENTITY::GET_ENTITY_ROLL(Local_63.f_0), 0f, 360f);
		fVar1 = __LIB_1__::func_9(ENTITY::GET_ENTITY_PITCH(Local_63.f_0), 0f, 360f);
		if ((fVar0 > fLocal_88 && fVar0 < (360f - fLocal_88)) || (fVar1 > fLocal_89 && fVar1 < (360f - fLocal_89)))
		{
			return 1;
		}
	}
	return 0;
}

int func_416()//Position - 0x32E3B
{
	if (PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(40f, 40f, 40f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(40f, 40f, 40f)) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		return 1;
	}
	return 0;
}

void func_417()//Position - 0x32E91
{
	switch (iLocal_56)
	{
		case 0:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				__LIB_0__::func_229("N3LOSEWANT", 7500, 1);
				__LIB_14__::func_875(&uLocal_324);
				iLocal_56 = 1;
			}
			else
			{
				iLocal_56 = 2;
			}
			break;
		case 1:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				iLocal_56 = 2;
			}
			else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_63.f_0, false))
			{
				iLocal_56 = 2;
			}
			func_412();
			if (iLocal_58 == 4)
			{
				func_406();
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			__LIB_0__::func_714(&iLocal_107);
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_63.f_0, false))
			{
				iLocal_55 = 4;
			}
			else
			{
				func_404();
				iLocal_55 = 5;
			}
			iLocal_56 = 0;
			break;
	}
}

void func_418()//Position - 0x32F3E
{
	switch (iLocal_56)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_68))
			{
				func_422();
			}
			else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_63.f_0, false))
			{
				__LIB_0__::func_714(&iLocal_107);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
				{
					iLocal_107 = __LIB_14__::func_704(Local_108, 5, 1);
				}
				iLocal_56 = 1;
			}
			break;
		case 1:
			if (iLocal_59 < 1)
			{
				__LIB_0__::func_229("N3DRIVE", 7500, 1);
				__LIB_14__::func_875(&uLocal_324);
				iLocal_59++;
			}
			func_406();
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_63.f_0, false))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					iLocal_56 = 2;
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(Local_63.f_0, Local_108, 6f, 6f, 2f, true, true, 0))
				{
					iLocal_56 = 2;
				}
				else if (bLocal_111)
				{
					if (__LIB_0__::func_725(Local_63.f_0, Local_108, 300f, 1))
					{
						VEHICLE::SET_RANDOM_TRAINS(false);
						bLocal_111 = false;
					}
				}
			}
			else
			{
				iLocal_56 = 2;
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			__LIB_0__::func_714(&iLocal_107);
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_63.f_0, false))
			{
				iLocal_55 = 5;
				func_419();
				func_404();
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_63.f_0, PLAYER::PLAYER_PED_ID(), true))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_63.f_0);
				}
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				iLocal_55 = 11;
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(Local_63.f_0, Local_108, 6f, 6f, 2f, false, true, 0))
			{
				iLocal_55 = 6;
				STREAMING::REQUEST_MODEL(joaat("freightcar"));
				STREAMING::REQUEST_MODEL(joaat("freightcont1"));
				STREAMING::REQUEST_MODEL(joaat("freightcont2"));
				STREAMING::REQUEST_MODEL(joaat("S_M_M_Trucker_01"));
				ENTITY::SET_ENTITY_VISIBLE(iLocal_68, false, false);
			}
			iLocal_56 = 0;
			break;
	}
}

void func_419()//Position - 0x330C6
{
	switch (iLocal_58)
	{
		case 0:
			break;
		case 3:
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && iLocal_113)
			{
				__LIB_17__::func_118(&uLocal_324);
				__LIB_0__::func_638();
			}
			break;
		case 4:
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && iLocal_113)
			{
				__LIB_17__::func_118(&uLocal_324);
				__LIB_0__::func_638();
			}
			break;
		case 5:
			break;
		case 6:
			break;
	}
}

void func_422()//Position - 0x33177
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (STREAMING::HAS_MODEL_LOADED(joaat("U_M_M_Aldinapoli")))
	{
		if (__LIB_0__::func_121(Local_63.f_0))
		{
			iLocal_68 = PED::CREATE_PED(26, joaat("U_M_M_Aldinapoli"), -59.7094f, -1330.1289f, 32.1963f, 0f, true, true);
			PED::SET_PED_NAME_DEBUG(iLocal_68, "NIGEL3_CELEB");
			PED::SET_PED_COMPONENT_VARIATION(iLocal_68, 4, 1, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_68, true);
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_63.f_0, -0.2f, -1.8f, -1f) };
			fVar2 = (-90f + ENTITY::GET_ENTITY_HEADING(Local_63.f_0));
			Var1 = { 0f, 0f, fVar2 };
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_68, Var0, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_68, Var1, 2, true);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_68, Local_63.f_0, 0, 0.2f, -1.8f, 0f, 0f, 0f, 90f, false, false, false, false, 2, true, 0);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_68, false, false);
			__LIB_0__::func_222(&uLocal_115, 5, iLocal_68, "DINAPOLI", 0, 1);
			iLocal_283 = 2;
		}
	}
}

void func_423()//Position - 0x33250
{
	switch (iLocal_56)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_68))
			{
				func_422();
			}
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				if (!iLocal_292)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 1);
					__LIB_0__::func_229("N3GETCAR", 7500, 1);
					iLocal_292 = 1;
				}
				__LIB_0__::func_714(&iLocal_107);
				if (__LIB_0__::func_121(Local_63.f_0))
				{
					iLocal_107 = __LIB_14__::func_866(Local_63.f_0, 1, 5);
				}
				iLocal_290 = 0;
				iLocal_56 = 1;
			}
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_68))
			{
				func_422();
			}
			else
			{
				func_405();
				func_288();
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_63.f_0, false))
			{
				iLocal_56 = 2;
			}
			else if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_63.f_0, 200f, 1))
			{
				iLocal_56 = 2;
			}
			else if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_63.f_0, 50f, 1))
			{
				if (!iLocal_293)
				{
					__LIB_0__::func_229("N3LEAVECAR", 7500, 1);
					iLocal_293 = 1;
				}
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			__LIB_0__::func_714(&iLocal_107);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_68))
			{
				func_422();
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_63.f_0, false))
			{
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					iLocal_55 = 11;
				}
				else
				{
					iLocal_55 = 4;
				}
			}
			else if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_63.f_0, 200f, 1))
			{
				iLocal_55 = 13;
				sLocal_378 = "N3FLEFT";
			}
			iLocal_56 = 0;
			break;
	}
}

void func_424()//Position - 0x333AD
{
	switch (iLocal_56)
	{
		case 0:
			__LIB_14__::func_851("NMT_3_RCM", 0);
			if (__LIB_14__::func_740(1, 1093140480, 0))
			{
				__LIB_17__::func_102(1);
				if (__LIB_0__::func_2(0))
				{
					__LIB_14__::func_879(1, 1, 1);
				}
				if (__LIB_0__::func_121(iLocal_69))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_69, "Nigel", 0, 0, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_69, "Nigel", 2, joaat("IG_Nigel"), 0);
				}
				if (__LIB_0__::func_121(iLocal_70))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_70, "MRS_Thornhill", 0, joaat("IG_MRS_Thornhill"), 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_70, "MRS_Thornhill", 2, joaat("IG_MRS_Thornhill"), 0);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_83))
				{
					iLocal_83 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-45.93f, -1290.67f, 29.67f, 10f, joaat("v_ilev_gc_door01"), true, false, true);
				}
				__LIB_14__::func_841();
				RECORDING::REPLAY_START_EVENT(1);
				CUTSCENE::START_CUTSCENE(0);
				SYSTEM::WAIT(0);
				func_442();
				func_239(-44.75f, -1288.67f, 28.21f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				MISC::CLEAR_AREA_OF_VEHICLES(20.6534f, -1302.8673f, 28.0513f, 15f, false, false, false, false, false, false, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_54.f_35[0]))
				{
					__LIB_8__::func_397(&(Local_54.f_35[0]));
					FIRE::STOP_FIRE_IN_RANGE(Local_63.f_2, 10f);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_63.f_0))
				{
					func_436(Local_63.f_2, Local_63.f_5, 1);
				}
				ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_63.f_0, false);
				if (__LIB_0__::func_121(iLocal_83))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_83, false, false);
				}
				__LIB_14__::func_871(&Local_54, 0, 0, 0);
				iLocal_56 = 1;
			}
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_70))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MRS_Thornhill", 0)))
				{
					iLocal_70 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MRS_Thornhill", 0));
				}
			}
			else if (iLocal_76 && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_72))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MRS_Thornhill", joaat("IG_MRS_Thornhill")))
				{
					func_428();
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_69))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Nigel", 0)))
				{
					iLocal_69 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Nigel", 0));
				}
			}
			else if (iLocal_74 && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_72))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Nigel", joaat("IG_Nigel")))
				{
					func_427();
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", joaat("Player_Two")))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -43.6328f, -1289.2937f, 28.0752f, false, false, false, true);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				RECORDING::REPLAY_STOP_EVENT();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if (__LIB_0__::func_121(iLocal_83))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_83, true, false);
					__LIB_0__::func_122(&iLocal_83, 0);
				}
				__LIB_14__::func_870(1, 1, 1, 1);
				__LIB_14__::func_800(&Local_54, 0, 1);
				iLocal_56 = 2;
			}
			else if (__LIB_0__::func_121(iLocal_83) && CUTSCENE::GET_CUTSCENE_TIME() > 45000)
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_83, true, false);
				__LIB_0__::func_122(&iLocal_83, 0);
			}
			break;
		case 2:
			if (__LIB_0__::func_121(Local_63.f_0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_63.f_0, 1);
				VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_63.f_0);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Nigel"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_MRS_Thornhill"));
			iLocal_58 = 0;
			iLocal_56 = 0;
			iLocal_55 = 3;
			__LIB_17__::func_102(0);
			break;
	}
}

void func_427()//Position - 0x337F0
{
	if (__LIB_0__::func_121(iLocal_69))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_69, -44.83f, -1289.11f, 29.17f, false, false, true);
		TASK::TASK_PLAY_ANIM(iLocal_69, sLocal_72, sLocal_73, 1000f, -16f, -1, 1, 0f, false, false, false);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, true, false);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_69, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		PED::SET_PED_KEEP_TASK(iLocal_69, true);
		iLocal_74 = 0;
	}
}

void func_428()//Position - 0x33852
{
	if (__LIB_0__::func_121(iLocal_70))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_70, -45f, -1289.83f, 29.177f, false, false, true);
		TASK::TASK_PLAY_ANIM(iLocal_70, sLocal_72, sLocal_75, 1000f, -16f, -1, 1, 0f, false, false, false);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_70, true, false);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		PED::SET_PED_KEEP_TASK(iLocal_70, true);
		iLocal_71 = OBJECT::CREATE_OBJECT(joaat("prop_ld_handbag_s"), -45f, -1289.83f, 49.177f, true, true, false);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_71, iLocal_70, PED::GET_PED_BONE_INDEX(iLocal_70, 64729), Local_77, Local_78, false, false, false, false, 2, true, 0);
		iLocal_76 = 0;
	}
}

void func_436(struct<3> Param0, float fParam1, int iParam2)//Position - 0x33A04
{
	if (STREAMING::HAS_MODEL_LOADED(Local_63.f_1))
	{
		func_438(&Local_63, Param0, fParam1, iParam2, 0);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_63.f_0, 5f);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_63.f_1, true);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_63.f_0, false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_63.f_0, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_63.f_0, true);
		ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_63.f_0, false);
		__LIB_0__::func_679(Local_63.f_0, 0);
	}
}

int func_438(int* iParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4)//Position - 0x33A73
{
	STREAMING::REQUEST_MODEL(iLocal_41);
	if (iParam4 == 1)
	{
		while (!STREAMING::HAS_MODEL_LOADED(iLocal_41))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (!STREAMING::HAS_MODEL_LOADED(iLocal_41))
	{
		return 0;
	}
	__LIB_17__::func_22(iParam0, iLocal_41, Param1, fParam2);
	if (__LIB_0__::func_121(*iParam0))
	{
		VEHICLE::SET_VEHICLE_COLOURS(*iParam0, 65, 0);
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(*iParam0, 5, false);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, "28BNT310");
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, 0);
		if (iParam3 == 1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam0, 10);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_41);
	return 1;
}

void func_442()//Position - 0x33C06
{
	__LIB_14__::func_614(-40.749416f, -1294.5842f, 27.251148f, -40.96418f, -1284.2566f, 35.233482f, 9.5f, -49.09f, -1260.03f, 29.26f, -87.89f, 5f, 14f, 5f, 1, 1, 1, 0, 0);
	__LIB_14__::func_614(-40.749416f, -1294.5842f, 27.251148f, -40.681786f, -1302.8601f, 35.009792f, 9.5f, -42.69f, -1314.36f, 28.06f, 0.9f, 5f, 14f, 5f, 1, 1, 1, 0, 0);
	__LIB_14__::func_785(0f, 0f, 0f, 0f, 1, 2);
	MISC::CLEAR_AREA_OF_PEDS(-39.5317f, -1257.1841f, 28.2361f, 8f, 0);
}

void func_489()//Position - 0x3A3A7
{
	float fVar0;
	__LIB_14__::func_862();
	if (__LIB_0__::func_121(iLocal_69))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_69, "rcmnigel3", "base", 3))
		{
			fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_69, "rcmnigel3", "base");
			if (fVar0 > 0.97f || fVar0 < 0.03f)
			{
				iLocal_55 = 2;
				iLocal_56 = 0;
			}
			else if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_69, 2.5f, 1))
			{
				iLocal_55 = 2;
				iLocal_56 = 0;
			}
		}
		else if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_69, 5f, 1))
		{
			iLocal_55 = 2;
			iLocal_56 = 0;
		}
	}
}

void func_497()//Position - 0x3A5EC
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_03_MIX_SETTINGS"))
	{
		AUDIO::STOP_AUDIO_SCENE("NIGEL_03_MIX_SETTINGS");
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_03_JOURNEY_MIX"))
	{
		AUDIO::START_AUDIO_SCENE("NIGEL_03_JOURNEY_MIX");
	}
	func_498();
	CUTSCENE::REQUEST_CUTSCENE("NMT_3_RCM", 8);
	__LIB_14__::func_862();
	iLocal_55 = 1;
	iLocal_56 = 0;
}

void func_498()//Position - 0x3A634
{
	STREAMING::REQUEST_ANIM_DICT(sLocal_72);
	iLocal_76 = 1;
	iLocal_74 = 1;
}

void func_500()//Position - 0x3A650
{
	if (iLocal_318 && iLocal_55 != 14)
	{
		switch (iLocal_316)
		{
			case 0:
				if (iLocal_55 != 0 && iLocal_55 != 2)
				{
					if (__LIB_0__::func_121(iLocal_69) && __LIB_0__::func_121(iLocal_70))
					{
						__LIB_0__::func_222(&uLocal_115, 4, iLocal_69, "NIGEL", 0, 1);
						PED::SET_PED_CONFIG_FLAG(iLocal_69, 185, true);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_69, false);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_69, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						PED::SET_PED_KEEP_TASK(iLocal_69, true);
						__LIB_0__::func_222(&uLocal_115, 3, iLocal_70, "MRSTHORNHILL", 0, 1);
						PED::SET_PED_CONFIG_FLAG(iLocal_70, 185, true);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_70, false);
						iLocal_321 = MISC::GET_GAME_TIMER();
						PED::ADD_RELATIONSHIP_GROUP("FRIENDLIES", &iLocal_81);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_81, joaat("PLAYER"));
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_81);
						if (PED::IS_PED_IN_GROUP(iLocal_69))
						{
							PED::REMOVE_PED_FROM_GROUP(iLocal_69);
						}
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_69, iLocal_81);
						if (PED::IS_PED_IN_GROUP(iLocal_70))
						{
							PED::REMOVE_PED_FROM_GROUP(iLocal_70);
						}
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_70, iLocal_81);
						iLocal_82 = 1;
						iLocal_320 = 0;
						iLocal_323 = 0;
						iLocal_316 = 1;
					}
				}
				break;
			case 1:
				if (!func_524())
				{
					iLocal_316 = 2;
				}
				else if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_69, 100f, 1) && !__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_70, 100f, 1))
				{
					iLocal_317 = 0;
					iLocal_316 = 2;
				}
				else if (!iLocal_79)
				{
					if (__LIB_17__::func_123(iLocal_69, 1, 1116471296, 1126825984, 0, 0, 0, 0) || __LIB_17__::func_123(iLocal_70, 1, 1116471296, 1126825984, 0, 0, 0, 0))
					{
						TASK::CLEAR_PED_TASKS(iLocal_69);
						TASK::TASK_SMART_FLEE_PED(iLocal_69, PLAYER::PLAYER_PED_ID(), 120f, -1, false, false);
						PED::SET_PED_KEEP_TASK(iLocal_69, true);
						TASK::TASK_PLAY_ANIM(iLocal_70, sLocal_72, "Cower_Enter_MsT", 16f, -16f, -1, 0, 0f, false, false, false);
						PED::SET_PED_KEEP_TASK(iLocal_70, true);
						if (iLocal_315 == 2 && __LIB_0__::func_75())
						{
							__LIB_0__::func_429();
						}
						iLocal_317 = 1;
						iLocal_316 = 2;
						iLocal_79 = 1;
						break;
					}
					else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_69, Local_63.f_0))
					{
						if (__LIB_0__::func_75())
						{
							if (__LIB_38__::func_626() == 3 || __LIB_38__::func_626() == 4)
							{
								__LIB_0__::func_429();
							}
							else
							{
								__LIB_0__::func_638();
							}
						}
						PED::SET_PED_TO_RAGDOLL(iLocal_69, 750, 2000, 1, true, true, false);
						TASK::TASK_SMART_FLEE_PED(iLocal_69, PLAYER::PLAYER_PED_ID(), 120f, -1, false, false);
						TASK::TASK_SMART_FLEE_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 120f, -1, false, false);
						iLocal_317 = 1;
						iLocal_316 = 2;
					}
					else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_70, Local_63.f_0))
					{
						if (__LIB_0__::func_75())
						{
							if (__LIB_38__::func_626() == 3 || __LIB_38__::func_626() == 4)
							{
								__LIB_0__::func_429();
							}
							else
							{
								__LIB_0__::func_638();
							}
						}
						PED::SET_PED_TO_RAGDOLL(iLocal_70, 750, 2000, 1, true, true, false);
						TASK::TASK_SMART_FLEE_PED(iLocal_69, PLAYER::PLAYER_PED_ID(), 120f, -1, false, false);
						TASK::TASK_SMART_FLEE_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 120f, -1, false, false);
						iLocal_317 = 1;
						iLocal_316 = 2;
					}
					else
					{
						switch (iLocal_315)
						{
							case 0:
								if (__LIB_0__::func_121(iLocal_70))
								{
									if (__LIB_2__::func_859(&uLocal_115, "NIGE3AU", "NIGEL3_N0", 7, 1, 0, 0))
									{
										iLocal_315 = 1;
									}
								}
								break;
							case 1:
								if (iLocal_320 < 3)
								{
									if (!__LIB_0__::func_75() && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
									{
										if ((MISC::GET_GAME_TIMER() - iLocal_321) > 20000 && __LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_84, 30f, 1))
										{
											if (__LIB_0__::func_501("N3DRIVE", 0, 0) || __LIB_0__::func_501("N3RTCAR", 0, 0))
											{
												if (__LIB_2__::func_859(&uLocal_115, Local_319[iLocal_320 /*8*/], Local_319[iLocal_320 /*8*/].f_1, 7, 1, 0, 0))
												{
													iLocal_315 = 2;
												}
											}
											else if (__LIB_2__::func_859(&uLocal_115, Local_319[iLocal_320 /*8*/], Local_319[iLocal_320 /*8*/].f_1, 7, 0, 0, 0))
											{
												iLocal_315 = 2;
											}
										}
									}
								}
								else if (iLocal_323 < 6)
								{
									if (!__LIB_0__::func_75() && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
									{
										if (((MISC::GET_GAME_TIMER() - iLocal_321) > 20000 && __LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_84, 30f, 1)) && (MISC::GET_PROFILE_SETTING(203) == 0 || !__LIB_0__::func_501("N3DRIVE", 0, 0)))
										{
											if (__LIB_14__::func_535(&uLocal_115, "NIGE3AU", "NIGEL3_DAWD", sLocal_322[iLocal_323], 7, 0, 0))
											{
												iLocal_323++;
												iLocal_315 = 2;
											}
										}
									}
								}
								else
								{
									iLocal_315 = 5;
								}
								break;
							case 2:
								if (!__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_84, 35f, 1))
								{
									__LIB_17__::func_118(&uLocal_324);
									__LIB_0__::func_638();
									iLocal_315 = 4;
								}
								else
								{
									__LIB_14__::func_881(&uLocal_324, &uLocal_115, "NIGE3AU", &sLocal_325, &cLocal_331);
								}
								if (!__LIB_0__::func_75())
								{
									iLocal_315 = 4;
								}
								break;
							case 4:
								iLocal_321 = MISC::GET_GAME_TIMER();
								iLocal_320++;
								iLocal_315 = 1;
								break;
							case 5:
								break;
							}
						}
				}
				break;
			case 2:
				func_502();
				switch (iLocal_317)
				{
					case 5:
						sLocal_378 = "N3MRSTDEAD";
						iLocal_55 = 13;
						iLocal_56 = 0;
						break;
					case 4:
						sLocal_378 = "N3MRSTHURT";
						iLocal_55 = 13;
						iLocal_56 = 0;
						break;
					case 3:
						sLocal_378 = "N3NIGEDEAD";
						iLocal_55 = 13;
						iLocal_56 = 0;
						break;
					case 2:
						sLocal_378 = "N3NIGEHURT";
						iLocal_55 = 13;
						iLocal_56 = 0;
						break;
					case 1:
						sLocal_378 = "N3SCARED";
						iLocal_55 = 13;
						iLocal_56 = 0;
						break;
					case 0:
						if (!__LIB_0__::func_75() && iLocal_318)
						{
							iLocal_318 = 0;
							__LIB_0__::func_221(&uLocal_115, 4);
							__LIB_0__::func_221(&uLocal_115, 3);
							if (iLocal_82)
							{
								PED::REMOVE_RELATIONSHIP_GROUP(iLocal_81);
								iLocal_82 = 0;
							}
							__LIB_0__::func_0(&iLocal_69);
							__LIB_0__::func_123(&iLocal_71);
							__LIB_0__::func_0(&iLocal_70);
						}
						break;
				}
				break;
			}
	}
}

void func_502()//Position - 0x3AC0C
{
	STREAMING::REMOVE_ANIM_DICT(sLocal_72);
}

int func_524()//Position - 0x3B8B4
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_69, false))
		{
			iLocal_317 = 3;
			return 0;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_69, PLAYER::PLAYER_PED_ID(), true))
		{
			iLocal_317 = 2;
			return 0;
		}
	}
	else
	{
		iLocal_317 = 2;
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_70))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_70, false))
		{
			iLocal_317 = 5;
			return 0;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), true))
		{
			iLocal_317 = 4;
			return 0;
		}
	}
	else
	{
		iLocal_317 = 4;
		return 0;
	}
	return 1;
}

int func_525()//Position - 0x3B93B
{
	if (!__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		sLocal_378 = "DEFAULT" /* GXT: _ */;
		iLocal_55 = 13;
		iLocal_56 = 0;
		return 1;
	}
	if ((((((iLocal_55 != 0 && iLocal_55 != 1) && iLocal_55 != 2) && iLocal_55 != 9) && iLocal_55 != 7) && iLocal_55 != 10) && iLocal_55 != 14)
	{
		if (!__LIB_0__::func_121(Local_63.f_0))
		{
			iLocal_55 = 12;
			iLocal_56 = 0;
			return 0;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_68) && !__LIB_0__::func_121(iLocal_68))
		{
			iLocal_55 = 12;
			iLocal_56 = 0;
			return 0;
		}
		else if (func_526())
		{
			sLocal_378 = "N3STUCK";
			iLocal_55 = 13;
			iLocal_56 = 0;
			return 1;
		}
	}
	return 0;
}

int func_526()//Position - 0x3B9F6
{
	int iVar0;
	iVar0 = 0;
	if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_63.f_0))
	{
		if (iLocal_66)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_67) > 7000)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iLocal_66 = 1;
			iLocal_67 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		if (iLocal_66)
		{
		}
		iLocal_66 = 0;
	}
	return iVar0;
}

void func_527()//Position - 0x3BA38
{
	switch (iLocal_56)
	{
		case 0:
			__LIB_0__::func_714(&iLocal_107);
			HUD::CLEAR_PRINTS();
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_378))
			{
				sLocal_378 = "DEFAULT" /* GXT: _ */;
			}
			if (MISC::ARE_STRINGS_EQUAL(sLocal_378, "DEFAULT" /* GXT: _ */))
			{
				__LIB_14__::func_872(1);
			}
			else
			{
				__LIB_14__::func_880(sLocal_378, 1);
			}
			iLocal_56 = 1;
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				if (bLocal_338)
				{
					__LIB_0__::func_507(2555.9321f, 1645.3575f, 27.9926f, 89f);
				}
				__LIB_0__::func_429();
				__LIB_0__::func_0(&iLocal_68);
				__LIB_0__::func_0(&iLocal_69);
				__LIB_0__::func_123(&iLocal_71);
				__LIB_0__::func_0(&iLocal_70);
				if (ENTITY::DOES_ENTITY_EXIST(Local_63.f_0))
				{
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Local_63.f_0);
				}
				__LIB_8__::func_397(&Local_63);
				if (ENTITY::DOES_ENTITY_EXIST(Local_314.f_0))
				{
					VEHICLE::DELETE_MISSION_TRAIN(&Local_314);
				}
				func_584();
			}
			break;
	}
}

void func_548(bool bParam0)//Position - 0x3C5C9
{
	func_554(1, 1);
	if (bParam0)
	{
		__LIB_0__::func_427(2605.4436f, 1890.1893f, 26.1751f, 196.5f, 1, 0);
	}
	else if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2605.4436f, 1890.1893f, 26.1751f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 196.5f);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_03_MIX_SETTINGS"))
	{
		AUDIO::STOP_AUDIO_SCENE("NIGEL_03_MIX_SETTINGS");
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_03_JOURNEY_MIX"))
	{
		AUDIO::START_AUDIO_SCENE("NIGEL_03_JOURNEY_MIX");
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Nigel"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_MRS_Thornhill"));
	STREAMING::REQUEST_MODEL(Local_63.f_1);
	while (!ENTITY::DOES_ENTITY_EXIST(Local_63.f_0))
	{
		func_436(2621.2988f, 1868.0214f, 26.4687f, 60.4f, 0);
		SYSTEM::WAIT(0);
	}
	if (__LIB_0__::func_121(Local_63.f_0))
	{
		VEHICLE::EXPLODE_VEHICLE_IN_CUTSCENE(Local_63.f_0, true);
	}
	VEHICLE::SET_RANDOM_TRAINS(false);
	__LIB_0__::func_0(&(Local_314.f_6));
	VEHICLE::DELETE_ALL_TRAINS();
	bLocal_111 = false;
	iLocal_376 = 0;
	iLocal_55 = 10;
	iLocal_56 = 0;
	if (bParam0)
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_0__::func_433(0, -1, 1);
	}
	else
	{
		__LIB_14__::func_748(2605.4436f, 1890.1893f, 26.1751f, 1112014848, 12, 5000, 0, 0);
	}
	SYSTEM::WAIT(1000);
	__LIB_14__::func_879(1, 1, 1);
}

void func_554(bool bParam0, bool bParam1)//Position - 0x3C8FF
{
	if (bParam0)
	{
		__LIB_17__::func_25(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_239(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_556(bool bParam0)//Position - 0x3C991
{
	func_554(1, 1);
	__LIB_0__::func_0(&(Local_314.f_6));
	if (ENTITY::DOES_ENTITY_EXIST(Local_314.f_0))
	{
		VEHICLE::DELETE_MISSION_TRAIN(&Local_314);
	}
	VEHICLE::SET_RANDOM_TRAINS(false);
	VEHICLE::DELETE_ALL_TRAINS();
	bLocal_111 = false;
	if (bParam0)
	{
		__LIB_0__::func_427(Local_108, 0f, 1, 0);
	}
	else if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_108, true, false, false, true);
	}
	if (iLocal_82)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_81);
	}
	__LIB_14__::func_840(&Local_54, 1);
	__LIB_0__::func_0(&iLocal_69);
	__LIB_0__::func_123(&iLocal_71);
	__LIB_0__::func_0(&iLocal_70);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Nigel"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_MRS_Thornhill"));
	iLocal_318 = 0;
	__LIB_0__::func_0(&iLocal_68);
	__LIB_14__::func_859(&Local_54, 1);
	__LIB_8__::func_397(&Local_63);
	STREAMING::REQUEST_MODEL(Local_63.f_1);
	while (!ENTITY::DOES_ENTITY_EXIST(Local_63.f_0))
	{
		func_436(Local_108, 0f, 0);
		SYSTEM::WAIT(0);
	}
	if (__LIB_0__::func_121(Local_63.f_0))
	{
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_63.f_0);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_63.f_0, true, true, false);
	}
	while (!ENTITY::DOES_ENTITY_EXIST(iLocal_68))
	{
		func_422();
		SYSTEM::WAIT(0);
	}
	iLocal_343 = 0;
	iLocal_114 = 2;
	iLocal_58 = 6;
	iLocal_292 = 1;
	bLocal_338 = false;
	bLocal_344 = false;
	iLocal_346 = 0;
	bLocal_347 = false;
	iLocal_376 = 0;
	iLocal_55 = 6;
	iLocal_56 = 0;
	if (bParam0)
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_0__::func_433(Local_63.f_0, -1, 0);
	}
	else
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(Local_63.f_0))
		{
			__LIB_4__::func_925(PLAYER::PLAYER_PED_ID(), Local_63.f_0, -1, 0);
		}
		__LIB_14__::func_748(Local_108, 1112014848, 12, 5000, 0, 0);
	}
	if (__LIB_0__::func_121(Local_63.f_0))
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_63.f_0, 10f);
	}
	__LIB_14__::func_879(1, 1, 1);
}

void func_558(bool bParam0)//Position - 0x3CB94
{
	func_554(1, 1);
	if (bParam0)
	{
		__LIB_0__::func_427(-43.6338f, -1289.3225f, 28.0753f, 87.6522f, 1, 0);
	}
	else if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -43.6338f, -1289.3225f, 28.0753f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 87.6522f);
	}
	STREAMING::REQUEST_MODEL(Local_63.f_1);
	func_498();
	iLocal_55 = 3;
	iLocal_56 = 0;
	iLocal_58 = 0;
	iLocal_59 = 0;
	iLocal_60 = 0;
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_03_MIX_SETTINGS"))
	{
		AUDIO::STOP_AUDIO_SCENE("NIGEL_03_MIX_SETTINGS");
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_03_JOURNEY_MIX"))
	{
		AUDIO::START_AUDIO_SCENE("NIGEL_03_JOURNEY_MIX");
	}
	if (iLocal_82)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_81);
	}
	__LIB_14__::func_840(&Local_54, 1);
	if (!__LIB_0__::func_121(iLocal_69))
	{
		while (!__LIB_14__::func_842(&iLocal_69, 64, -44.76f, -1289.19f, 29.22f, -109.3f, "RC_NIGEL", 1))
		{
			SYSTEM::WAIT(0);
		}
	}
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_69, -44.76f, -1289.19f, 29.22f, false, false, true);
	ENTITY::SET_ENTITY_HEADING(iLocal_69, -109.3f);
	if (!__LIB_0__::func_121(iLocal_70))
	{
		while (!__LIB_14__::func_842(&iLocal_70, 63, -45.11f, -1289.77f, 29.24f, -96.8f, "RC_MRS_THORNHILL", 1))
		{
			SYSTEM::WAIT(0);
		}
	}
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_70, -45.11f, -1289.77f, 29.24f, false, false, true);
	ENTITY::SET_ENTITY_HEADING(iLocal_70, -96.8f);
	iLocal_79 = 0;
	while (!func_559())
	{
		SYSTEM::WAIT(0);
	}
	if (__LIB_0__::func_121(iLocal_69) && __LIB_0__::func_121(iLocal_70))
	{
		func_427();
		func_428();
	}
	__LIB_14__::func_859(&Local_54, 1);
	__LIB_0__::func_0(&iLocal_68);
	__LIB_8__::func_397(&Local_63);
	while (!STREAMING::HAS_MODEL_LOADED(Local_63.f_1))
	{
		SYSTEM::WAIT(0);
	}
	while (!ENTITY::DOES_ENTITY_EXIST(Local_63.f_0))
	{
		func_436(Local_63.f_2, Local_63.f_5, 0);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	if (__LIB_0__::func_121(Local_63.f_0))
	{
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_63.f_0);
	}
	bLocal_111 = true;
	iLocal_113 = 0;
	iLocal_114 = 0;
	iLocal_292 = 0;
	iLocal_293 = 0;
	bLocal_294 = false;
	bLocal_295 = false;
	iLocal_297 = 0;
	iLocal_97 = 0;
	bLocal_299 = false;
	iLocal_315 = 0;
	iLocal_316 = 0;
	iLocal_317 = 0;
	iLocal_318 = 1;
	bLocal_338 = false;
	bLocal_344 = false;
	iLocal_346 = 0;
	bLocal_347 = false;
	iLocal_376 = 0;
	SYSTEM::WAIT(0);
	if (bParam0)
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_0__::func_433(0, -1, 1);
	}
	__LIB_14__::func_879(1, 1, 1);
}

int func_559()//Position - 0x3CE05
{
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_72))
	{
		return 0;
	}
	return 1;
}

void func_565()//Position - 0x3CF9D
{
	func_580(&Local_63, func_581(), -39.9698f, -1285.9698f, 28.8324f, -178.98f);
	func_580(&Local_314, joaat("freight"), 2574.291f, 2173.551f, 31.4003f, 210.2f);
	Local_314.f_7 = joaat("S_M_M_LSMetro_01");
	STREAMING::REQUEST_MODEL(joaat("IG_Nigel"));
	STREAMING::REQUEST_MODEL(joaat("IG_MRS_Thornhill"));
	STREAMING::REQUEST_MODEL(Local_63.f_1);
	STREAMING::REQUEST_MODEL(joaat("U_M_M_Aldinapoli"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_handbag_s"));
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("IG_Nigel"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("IG_MRS_Thornhill"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("U_M_M_Aldinapoli"), true);
	HUD::REQUEST_ADDITIONAL_TEXT("NIGEL3", 0);
	__LIB_0__::func_712(64, 2, 0);
	MISC::CLEAR_BIT(&(Global_113386.f_18574.f_382), 5);
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_222(&uLocal_115, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	func_572();
	func_571();
	iLocal_114 = 0;
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_TRUNK_THUMPS", false, -1);
	iLocal_281 = AUDIO::GET_SOUND_ID();
	iLocal_359 = AUDIO::GET_SOUND_ID();
	iLocal_360 = AUDIO::GET_SOUND_ID();
	Local_86[0 /*7*/][0 /*3*/] = { -92f, -1271f, 25f };
	Local_86[0 /*7*/][1 /*3*/] = { -27f, -1247f, 30f };
	Local_86[1 /*7*/][0 /*3*/] = { 2649.08f, 1643.26f, 20f };
	Local_86[1 /*7*/][1 /*3*/] = { 2688.73f, 1675.07f, 30f };
	Local_86[2 /*7*/][0 /*3*/] = { 2649.08f, 1608.6f, 20f };
	Local_86[2 /*7*/][1 /*3*/] = { 2692.73f, 1640.4f, 30f };
	Local_109[0 /*3*/] = { 2611.25f, 1800.09f, 25.4f };
	Local_109[1 /*3*/] = { 2611.25f, 1950.31f, 29.68f };
	Local_109.f_7 = 3f;
	Local_110[0 /*3*/] = { 2611f, 1630f, 24.61f };
	Local_110[1 /*3*/] = { 2611.28f, 1856.65f, 30.73f };
	Local_110.f_7 = 1.75f;
	Local_375[0 /*8*/][0 /*3*/] = { 2611f, 1601.95f, 31.48f };
	Local_375[0 /*8*/][1 /*3*/] = { 2611f, 2050f, 24.36f };
	Local_375[0 /*8*/].f_7 = 6.5f;
	Local_375[1 /*8*/][0 /*3*/] = { 2611f, 1786.85f, 34.44f };
	Local_375[1 /*8*/][1 /*3*/] = { 2611f, 2050f, 22.22f };
	Local_375[1 /*8*/].f_7 = 30f;
	Local_375[2 /*8*/][0 /*3*/] = { 2625.47f, 1707.78f, 29.52f };
	Local_375[2 /*8*/][1 /*3*/] = { 2611.65f, 1749.99f, 23.39f };
	Local_375[2 /*8*/].f_7 = 8f;
	Local_375[3 /*8*/][0 /*3*/] = { 2617.39f, 1709.61f, 29.56f };
	Local_375[3 /*8*/][1 /*3*/] = { 2611.65f, 1749.99f, 23.39f };
	Local_375[3 /*8*/].f_7 = 8f;
	Local_91[0 /*3*/] = { 0f, -3.45f, 1.15f };
	Local_91[1 /*3*/] = { 0f, -3.45f, 0.15f };
	Local_92[0 /*3*/] = { 2f, 2f, 1.3f };
	Local_92[1 /*3*/] = { 1.6f, 2f, 0.7f };
	Local_91[2 /*3*/] = { 0f, -5.45f, 1.15f };
	Local_91[3 /*3*/] = { 0f, -5.45f, 0.15f };
	Local_92[2 /*3*/] = { 1.5f, 6f, 1.3f };
	Local_92[3 /*3*/] = { 1.2f, 6f, 0.7f };
	iLocal_80 = 0;
	__LIB_28__::func_216(1);
	func_566(1);
	sLocal_378 = "DEFAULT" /* GXT: _ */;
	iLocal_343 = 0;
}

void func_566(bool bParam0)//Position - 0x3D34A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (bParam0)
		{
			iLocal_85[iVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(Local_86[iVar0 /*7*/][0 /*3*/], Local_86[iVar0 /*7*/][1 /*3*/], false, true, true, true);
		}
		else
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_85[iVar0], false);
		}
		iVar0++;
	}
}

void func_571()//Position - 0x3D4EE
{
	Local_112[0 /*8*/] = "NIGE3AU";
	Local_112[0 /*8*/].f_1 = "NIGEL3_C1";
	Local_112[0 /*8*/].f_2 = 200f;
	Local_112[0 /*8*/].f_7 = 3000;
	Local_112[1 /*8*/] = "NIGE3AU";
	Local_112[1 /*8*/].f_1 = "NIGEL3_C2";
	Local_112[1 /*8*/].f_2 = 1000f;
	Local_112[1 /*8*/].f_7 = 5000;
	Local_112[2 /*8*/] = "NIGE3AU";
	Local_112[2 /*8*/].f_1 = "NIGEL3_C3";
	Local_112[2 /*8*/].f_2 = 1800f;
	Local_112[2 /*8*/].f_7 = 10000;
	Local_112[3 /*8*/] = "NIGE3AU";
	Local_112[3 /*8*/].f_1 = "NIGEL3_C4";
	Local_112[3 /*8*/].f_2 = 2250f;
	Local_112[3 /*8*/].f_7 = 10000;
	Local_112[0 /*8*/].f_3 = { 165.8198f, -1241.9022f, 37.1128f };
	Local_112[0 /*8*/].f_6 = 287.4437f;
	Local_112[1 /*8*/].f_3 = { 997.1073f, -1193.7147f, 53.655f };
	Local_112[1 /*8*/].f_6 = 273.9958f;
	Local_112[2 /*8*/].f_3 = { 1880.1357f, -780.5549f, 80.6259f };
	Local_112[2 /*8*/].f_6 = 304.6608f;
	Local_112[3 /*8*/].f_3 = { 2483.9358f, 946.1223f, 85.4867f };
	Local_112[3 /*8*/].f_6 = 38.84f;
}

void func_572()//Position - 0x3D646
{
	Local_319[0 /*8*/] = "NIGE3AU";
	Local_319[0 /*8*/].f_1 = "NIGEL3_N1";
	Local_319[1 /*8*/] = "NIGE3AU";
	Local_319[1 /*8*/].f_1 = "NIGEL3_N2";
	Local_319[2 /*8*/] = "NIGE3AU";
	Local_319[2 /*8*/].f_1 = "NIGEL3_N3";
	sLocal_322[0] = "NIGEL3_DAWD_1";
	sLocal_322[1] = "NIGEL3_DAWD_3";
	sLocal_322[2] = "NIGEL3_DAWD_5";
	sLocal_322[3] = "NIGEL3_DAWD_7";
	sLocal_322[4] = "NIGEL3_DAWD_9";
	sLocal_322[5] = "NIGEL3_DAWD_11";
}

void func_580(int iParam0, int iParam1, struct<3> Param2, float fParam3)//Position - 0x3D9B0
{
	iParam0->f_1 = iParam1;
	iParam0->f_2 = { Param2 };
	iParam0->f_5 = fParam3;
}

int func_581()//Position - 0x3D9CE
{
	return iLocal_41;
}

void func_584()//Position - 0x3DA2B
{
	__LIB_14__::func_841();
	if (__LIB_14__::func_843())
	{
	}
	__LIB_14__::func_871(&Local_54, 1, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_63.f_0))
	{
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Local_63.f_0);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_63);
	}
	if (__LIB_0__::func_75())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
	}
	VEHICLE::SET_RANDOM_TRAINS(true);
	func_566(0);
	__LIB_0__::func_714(&iLocal_107);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_68) && !iLocal_297)
	{
		__LIB_0__::func_0(&iLocal_68);
	}
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("IG_Nigel"), false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("IG_MRS_Thornhill"), false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("U_M_M_Aldinapoli"), false);
	if (iLocal_80)
	{
		STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_impatient@female@no_sign@idle_a");
		STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_impatient@male@no_sign@idle_a");
	}
	__LIB_0__::func_122(&iLocal_83, 0);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	if (iLocal_82)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_81);
	}
	__LIB_28__::func_216(0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

