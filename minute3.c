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
	var uLocal_36 = -1;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 1000;
	var uLocal_44 = 1000;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<4> Local_50[10];
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	struct<61> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	char* sLocal_74 = NULL;
	char* sLocal_75 = NULL;
	struct<3> Local_76 = { 0, 0, 0 } ;
	struct<3> Local_77 = { 0, 0, 0 } ;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
	int* iLocal_80 = NULL;
	int* iLocal_81 = NULL;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	struct<2> Local_91 = { 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	float fLocal_93 = 0f;
	struct<2> Local_94 = { 0, 0 } ;
	struct<3> Local_95 = { 0, 0, 0 } ;
	float fLocal_96 = 0f;
	int iLocal_97 = 0;
	int iLocal_98[5] = { 0, 0, 0, 0, 0 };
	struct<3> Local_99[5];
	float fLocal_100[5] = { 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_101[5];
	int iLocal_102[5] = { 0, 0, 0, 0, 0 };
	int iLocal_103[3] = { 0, 0, 0 };
	struct<3> Local_104[3];
	float fLocal_105[3] = { 0f, 0f, 0f };
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int* iLocal_110 = NULL;
	struct<3> Local_111 = { 0, 0, 0 } ;
	float fLocal_112 = 0f;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int* iLocal_115 = NULL;
	int iLocal_116 = 0;
	struct<3> Local_117 = { 0, 0, 0 } ;
	float fLocal_118 = 0f;
	int iLocal_119 = 0;
	struct<3> Local_120 = { 0, 0, 0 } ;
	float fLocal_121 = 0f;
	int* iLocal_122 = NULL;
	struct<3> Local_123 = { 0, 0, 0 } ;
	float fLocal_124 = 0f;
	struct<3> Local_125 = { 0, 0, 0 } ;
	float fLocal_126 = 0f;
	float fLocal_127 = 0f;
	float fLocal_128 = 0f;
	float fLocal_129 = 0f;
	int iLocal_130 = 0;
	char* sLocal_131 = NULL;
	char* sLocal_132 = NULL;
	char* sLocal_133 = NULL;
	int iLocal_134 = 0;
	struct<3> Local_135 = { 0, 0, 0 } ;
	struct<3> Local_136 = { 0, 0, 0 } ;
	float fLocal_137 = 0f;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	struct<3> Local_140 = { 0, 0, 0 } ;
	struct<3> Local_141 = { 0, 0, 0 } ;
	struct<3> Local_142 = { 0, 0, 0 } ;
	struct<3> Local_143 = { 0, 0, 0 } ;
	float fLocal_144 = 0f;
	struct<3> Local_145 = { 0, 0, 0 } ;
	struct<3> Local_146 = { 0, 0, 0 } ;
	float fLocal_147 = 0f;
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
	char* sLocal_317[4] = { NULL, NULL, NULL, NULL };
	int iLocal_318 = 0;
	char* sLocal_319[6] = { NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_320 = 0;
	char* sLocal_321[5] = { NULL, NULL, NULL, NULL, NULL };
	int iLocal_322 = 0;
	char* sLocal_323[3] = { NULL, NULL, NULL };
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	struct<3> Local_330 = { 0, 0, 0 } ;
	float fLocal_331 = 0f;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	struct<3> Local_334 = { 0, 0, 0 } ;
	float fLocal_335 = 0f;
	char* sLocal_336 = NULL;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	struct<3> Local_340 = { 0, 0, 0 } ;
	float fLocal_341 = 0f;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	bool bLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	var uLocal_353 = 15;
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
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	float fLocal_409 = 0f;
	var uLocal_410 = 0;
	int iLocal_411 = 0;
	struct<3> Local_412 = { 0, 0, 0 } ;
	float fLocal_413 = 0f;
	struct<3> Local_414 = { 0, 0, 0 } ;
	struct<3> Local_415 = { 0, 0, 0 } ;
	float fLocal_416 = 0f;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	struct<61> Local_419 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	uLocal_53 = __LIB_2__::func_910(56);
	uLocal_54 = __LIB_2__::func_910(57);
	iLocal_55 = __LIB_2__::func_910(59);
	iLocal_56 = joaat("pranger");
	iLocal_60 = 1;
	iLocal_61 = 65;
	iLocal_62 = 49;
	iLocal_63 = 64;
	iLocal_67 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_68 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	sLocal_74 = "rcmminute3glances";
	sLocal_75 = "rcmminute3panic";
	Local_76 = { 423.5757f, 6478.8687f, 32.815613f };
	Local_77 = { 250f, 250f, 250f };
	fLocal_78 = 35f;
	fLocal_79 = 45f;
	iLocal_82 = joaat("prop_barn_door_l");
	iLocal_83 = joaat("prop_barn_door_r");
	iLocal_87 = 1;
	iLocal_88 = -1;
	iLocal_89 = -1;
	iLocal_90 = -1;
	Local_92 = { 426.96f, 6513.8f, 27.72f };
	fLocal_93 = -108.29f;
	Local_95 = { 429.98f, 6470.58f, 28.78f };
	fLocal_96 = -126.05f;
	iLocal_106 = joaat("S_M_M_Migrant_01");
	iLocal_107 = joaat("S_F_Y_Migrant_01");
	iLocal_108 = 56;
	iLocal_109 = 57;
	Local_111 = { 416.4f, 6499.5f, 28f };
	fLocal_112 = 170.4f;
	iLocal_113 = joaat("tractor2");
	iLocal_116 = joaat("blazer");
	Local_117 = { 422.357f, 6486.7886f, 27.7595f };
	fLocal_118 = 83.28f;
	Local_120 = { -300.739f, 6212.611f, 30.3998f };
	fLocal_121 = 249.7937f;
	Local_123 = { 430.01f, 6467.49f, 28.41f };
	fLocal_124 = 50.92f;
	Local_125 = { 427.6566f, 6469.3843f, 28.4275f };
	fLocal_126 = 0.0014f;
	fLocal_127 = 0.0015f;
	fLocal_128 = 0.3467f;
	fLocal_129 = 0.938f;
	sLocal_131 = "min3_JandJ01";
	sLocal_132 = "min3_JandJ02";
	Local_135 = { 409.9579f, 6488.018f, 25.749815f };
	Local_136 = { 151.11685f, 6485.8354f, 31.627085f };
	fLocal_137 = 50f;
	Local_140 = { 144.36932f, 6368.498f, 25.529602f };
	Local_141 = { 489.02145f, 6573.715f, 35.059155f };
	Local_142 = { 443.04343f, 6456.974f, 26.783266f };
	Local_143 = { 422.0196f, 6474.672f, 30.813354f };
	fLocal_144 = 17f;
	Local_145 = { 444.22525f, 6456.485f, 26.768524f };
	Local_146 = { 420.5262f, 6475.384f, 29.812666f };
	fLocal_147 = 10f;
	iLocal_313 = 1;
	iLocal_314 = 1;
	iLocal_326 = 1;
	iLocal_329 = joaat("tornado3");
	Local_330 = { 57f, 6463.62f, 31.11f };
	fLocal_331 = 134.03f;
	iLocal_333 = joaat("A_M_O_Salton_01");
	Local_334 = { 55.26922f, 6461.805f, 31.394144f };
	fLocal_335 = 310.2723f;
	sLocal_336 = "BREAKDOWN_IDLE_B";
	iLocal_339 = joaat("towtruck");
	Local_340 = { 52.61f, 6458.64f, 31.37f };
	fLocal_341 = 135.1f;
	iLocal_342 = joaat("S_M_M_AutoShop_02");
	iLocal_348 = -1;
	iLocal_405 = 1;
	fLocal_409 = 0f;
	iLocal_411 = -1;
	Local_412 = { -297.7666f, 6214.2837f, 30.3288f };
	fLocal_413 = 237.7338f;
	Local_414 = { -299.50217f, 6211.962f, 29.45011f };
	Local_415 = { -305.56082f, 6211.8813f, 32.47858f };
	fLocal_416 = 4f;
	Local_69 = { ScriptParam_419 };
	__LIB_14__::func_801(&Local_69);
	iLocal_70 = __LIB_37__::func_960();
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		AUDIO::TRIGGER_MUSIC_EVENT("MM3_FAIL");
		__LIB_14__::func_872(1);
		func_642();
	}
	if (__LIB_0__::func_323())
	{
		if (__LIB_0__::func_344() == 0)
		{
			Global_78564 = 1;
			iLocal_52 = 0;
			while (!func_630(&Local_69))
			{
				SYSTEM::WAIT(0);
			}
			__LIB_14__::func_800(&Local_69, 0, 1);
			Global_78564 = 0;
		}
	}
	__LIB_0__::func_712(56, 2, 0);
	__LIB_0__::func_712(57, 2, 0);
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_MMB", 0);
		SYSTEM::WAIT(0);
		__LIB_14__::func_863(Local_69.f_9, 0, 0, 0, 0, 0);
		func_605();
		func_604();
		if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
		{
			switch (iLocal_71)
			{
				case 0:
					func_479();
					break;
				case 1:
					func_443();
					break;
				case 2:
					func_428();
					break;
				case 3:
					func_405();
					break;
				case 4:
					func_401();
					break;
				case 5:
					func_397();
					break;
				case 6:
					func_310();
					break;
				case 7:
					func_254();
					break;
				case 8:
					func_52();
					break;
				case 9:
					func_44();
					break;
				}
		}
		if (((iLocal_71 != 9 && iLocal_71 != 0) && iLocal_71 != 1) && iLocal_71 != 2)
		{
			func_43(Local_69.f_28[0]);
			func_42(Local_69.f_28[0]);
			func_1();
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 5)
			{
				func_43(iLocal_98[iVar0]);
				func_42(iLocal_98[iVar0]);
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_43(iLocal_103[iVar0]);
				func_42(iLocal_103[iVar0]);
				iVar0++;
			}
		}
	}
}

void func_1()//Position - 0x56A
{
	bool bVar0;
	int iVar1;
	if (!iLocal_71 == 9)
	{
		if (__LIB_0__::func_692(Local_69.f_28[0]))
		{
			if (((!__LIB_0__::func_695(Local_69.f_35[1]) || __LIB_14__::func_858(Local_69.f_28[0], 0, 0, 0, 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_69.f_35[1], 0, 2)) || (PED::IS_PED_BEING_JACKED(Local_69.f_28[0]) && PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())))
			{
				TASK::TASK_SMART_FLEE_PED(Local_69.f_28[0], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				func_28(Local_69.f_28[0]);
			}
			else if (iLocal_417 == 0)
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_69.f_35[1], true))
				{
					bVar0 = false;
					if (__LIB_0__::func_75())
					{
						bVar0 = true;
					}
					else if (__LIB_0__::func_501("MIN3_06", 0, 0))
					{
						bVar0 = __LIB_2__::func_859(&uLocal_148, "MIN3AUD", "MIN3_STEAL", 8, 1, 0, 0);
					}
					else
					{
						bVar0 = __LIB_2__::func_859(&uLocal_148, "MIN3AUD", "MIN3_STEAL", 8, 0, 0, 0);
					}
					if (bVar0)
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
						TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(Local_69.f_28[0], iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
						iLocal_417 = 1;
					}
				}
				else if (__LIB_38__::func_492(Local_69.f_35[1]))
				{
					TASK::TASK_WANDER_STANDARD(Local_69.f_28[0], 40000f, 0);
					iLocal_417 = 1;
				}
			}
		}
	}
}

void func_28(int iParam0)//Position - 0x103D
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam0 == Local_69.f_28[0])
		{
			if (PED::IS_PED_INJURED(iParam0))
			{
				iLocal_72 = 1;
			}
			else if ((PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_BEING_STEALTH_KILLED(iParam0)) || PED::WAS_PED_KILLED_BY_TAKEDOWN(iParam0))
			{
				iLocal_72 = 1;
			}
			else
			{
				iLocal_72 = 3;
			}
		}
		else if (PED::IS_PED_INJURED(iParam0))
		{
			if (bLocal_349)
			{
				iLocal_72 = 6;
			}
			else
			{
				iLocal_72 = 2;
			}
		}
		else if ((PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_BEING_STEALTH_KILLED(iParam0)) || PED::WAS_PED_KILLED_BY_TAKEDOWN(iParam0))
		{
			iLocal_72 = 2;
		}
		else
		{
			iLocal_72 = 4;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (__LIB_0__::func_692(iLocal_98[iVar0]))
			{
				if (!PED::IS_PED_FLEEING(iLocal_98[iVar0]))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_98[iVar0], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				}
			}
			iVar0++;
		}
		if (__LIB_0__::func_692(Local_91.f_0) && __LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_COMBAT_PED(Local_91.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
		}
		func_31();
		__LIB_0__::func_429();
		iLocal_73 = 0;
		iLocal_71 = 9;
	}
}

void func_31()//Position - 0x1186
{
	__LIB_0__::func_714(&(Local_91.f_1));
	__LIB_0__::func_714(&(Local_94.f_1));
}

void func_42(int iParam0)//Position - 0x15DB
{
	if (!iLocal_71 == 9)
	{
		if (__LIB_0__::func_692(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				func_28(iParam0);
			}
		}
	}
}

void func_43(int iParam0)//Position - 0x161B
{
	if (!iLocal_71 == 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (PED::IS_PED_INJURED(iParam0))
			{
				func_28(iParam0);
			}
		}
	}
}

void func_44()//Position - 0x1644
{
	char* sVar0;
	switch (iLocal_73)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			func_31();
			if (ENTITY::DOES_ENTITY_EXIST(Local_69.f_28[0]))
			{
				if (PED::IS_PED_INJURED(Local_69.f_28[0]))
				{
					iLocal_72 = 1;
				}
			}
			switch (iLocal_72)
			{
				case 0:
					break;
				case 1:
					sVar0 = "MIN3_FAIL1";
					break;
				case 2:
					sVar0 = "MIN3_FAIL2";
					break;
				case 3:
					sVar0 = "MIN3_FAIL3";
					break;
				case 4:
					sVar0 = "MIN3_FAIL4";
					break;
				case 5:
					sVar0 = "MIN3_FAIL5";
					break;
				case 6:
					sVar0 = "MIN3_FAIL8";
					break;
			}
			AUDIO::TRIGGER_MUSIC_EVENT("MM3_FAIL");
			if (iLocal_72 == 0)
			{
				__LIB_14__::func_872(1);
			}
			else
			{
				__LIB_14__::func_880(sVar0, 1);
			}
			iLocal_73 = 1;
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				func_45();
				func_642();
			}
			break;
	}
}

void func_45()//Position - 0x171F
{
	int iVar0;
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_97);
	__LIB_0__::func_0(&Local_91);
	__LIB_0__::func_0(&Local_94);
	__LIB_0__::func_0(&(Local_69.f_28[0]));
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_0__::func_0(&(iLocal_98[iVar0]));
		iVar0++;
	}
	__LIB_8__::func_397(&iLocal_110);
	__LIB_8__::func_397(&iLocal_115);
	__LIB_8__::func_397(&iLocal_122);
	__LIB_0__::func_123(&iLocal_80);
	__LIB_0__::func_123(&iLocal_81);
}

void func_52()//Position - 0x190C
{
	switch (iLocal_73)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			func_31();
			__LIB_0__::func_429();
			__LIB_0__::func_221(&uLocal_148, 5);
			__LIB_0__::func_221(&uLocal_148, 4);
			AUDIO::TRIGGER_MUSIC_EVENT("MM3_STOP");
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 4f, 1);
			iLocal_73 = 1;
			break;
		case 1:
			if (!__LIB_0__::func_75())
			{
				if (__LIB_14__::func_535(&uLocal_148, "MIN3AUD", "MIN3_KILL", "MIN3_KILL_2", 8, 0, 0))
				{
					iLocal_73 = 4;
				}
			}
			break;
		case 4:
			if (!__LIB_0__::func_75())
			{
				func_53();
			}
			break;
	}
}

void func_53()//Position - 0x1992
{
	if (iLocal_350 && iLocal_351)
	{
		__LIB_0__::func_630(783);
	}
	if (iLocal_352)
	{
		__LIB_0__::func_630(784);
	}
	func_54(94, 1);
	func_642();
}

void func_54(int iParam0, bool bParam1)//Position - 0x19C7
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
	func_82();
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

void func_82()//Position - 0x2B79
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
				if (func_199(iVar1, 14, iVar2))
				{
					func_83(iVar1, 14, iVar2);
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

int func_83(int iParam0, int iParam1, int iParam2)//Position - 0x2C3A
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
	if (!func_199(iParam0, iParam1, iParam2))
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
				func_83(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_83(iParam0, 14, uVar5[iVar3]))
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
	if (func_126(iParam0, iVar0, &iVar7, 0))
	{
		func_86(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_84(iParam0, iVar0, &iVar7))
	{
		func_86(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_84(int iParam0, int iParam1, int iParam2)//Position - 0x2DF6
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_199(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_86(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x2EBD
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
										func_86(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_86(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_92(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_126(iParam0, iVar10, &iVar4, 1))
							{
								func_86(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_86(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_86(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_86(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_86(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_86(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_86(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_86(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_86(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_86(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_126(iParam0, iVar10, &iVar4, 0))
		{
			func_86(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_84(iParam0, iVar10, &iVar4))
		{
			func_86(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_92(int iParam0, int iParam1, int iParam2)//Position - 0x3EFA
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
				if (func_199(iParam0, iParam1, iVar0))
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
				if (func_199(iParam0, iParam1, iVar1))
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

int func_126(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA5D7
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_199(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_199(int iParam0, int iParam1, int iParam2)//Position - 0x20BFD
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
				if (!func_199(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_199(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_199(iParam0, 14, iVar4))
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
			if (!func_199(iParam0, 14, uVar8[iVar7]))
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

void func_254()//Position - 0x280C6
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	if (func_308())
	{
		return;
	}
	func_305();
	func_304();
	func_300();
	func_297();
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_337) && !ENTITY::DOES_ENTITY_EXIST(iLocal_338))
	{
		func_295();
	}
	func_293();
	__LIB_14__::func_655(Local_94.f_1, Local_94.f_0, 250f, 1061158912, 0);
	func_291();
	bVar0 = false;
	if (__LIB_0__::func_692(Local_94.f_0))
	{
		TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_94.f_0, 2f);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_94.f_0, 2f);
		bVar0 = true;
	}
	bVar1 = false;
	if (__LIB_0__::func_692(Local_91.f_0))
	{
		TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_91.f_0, 2f);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_91.f_0, 2f);
		bVar1 = true;
	}
	if (bVar0 && bVar1)
	{
		fVar2 = __LIB_9__::func_694(Local_94.f_0, PLAYER::PLAYER_PED_ID());
		fVar3 = __LIB_9__::func_694(Local_91.f_0, PLAYER::PLAYER_PED_ID());
		if (fVar2 < fVar3)
		{
			__LIB_14__::func_615(&uLocal_34, Local_94.f_0, 0, 0, 1, 1, 1);
		}
		else
		{
			__LIB_14__::func_615(&uLocal_34, Local_91.f_0, 0, 0, 1, 1, 1);
		}
	}
	else if (bVar0)
	{
		__LIB_14__::func_615(&uLocal_34, Local_94.f_0, 0, 0, 1, 1, 1);
	}
	else if (bVar1)
	{
		__LIB_14__::func_615(&uLocal_34, Local_91.f_0, 0, 0, 1, 1, 1);
	}
	if (iLocal_405)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_406)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("MM3_START_STA");
			iLocal_405 = 0;
		}
	}
	if (func_255())
	{
		return;
	}
}

int func_255()//Position - 0x281F5
{
	float fVar0;
	fVar0 = 0f;
	if (__LIB_0__::func_692(Local_94.f_0))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_94.f_0) || !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_94.f_0, 17))
		{
			fVar0 = __LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), Local_94.f_0);
			iLocal_72 = 5;
		}
	}
	if (fVar0 > 250f)
	{
		func_31();
		__LIB_0__::func_325();
		iLocal_73 = 0;
		iLocal_71 = 9;
		return 1;
	}
	return 0;
}

void func_291()//Position - 0x294D2
{
	if (__LIB_0__::func_692(Local_94.f_0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_94.f_0, Local_145, Local_146, fLocal_147, false, true, 0) && !PED::IS_PED_IN_ANY_VEHICLE(Local_94.f_0, false))
		{
			PED::SET_PED_CAPSULE(Local_94.f_0, 0.35f);
		}
	}
}

void func_293()//Position - 0x2966D
{
	int iVar0;
	if (__LIB_0__::func_695(iLocal_337))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_332))
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_333))
			{
				iLocal_332 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_337, 4, iLocal_333, 0, true, true);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_332, false);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_338))
		{
			if (__LIB_0__::func_695(iLocal_328))
			{
				if (iLocal_343)
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_337, 1) < 100f)
					{
						if (__LIB_0__::func_692(iLocal_338) && !__LIB_6__::func_572(iLocal_338, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_337, false);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_328, false);
							PED::SET_PED_CAN_BE_TARGETTED(iLocal_338, false);
							VEHICLE::ATTACH_VEHICLE_TO_TOW_TRUCK(iLocal_337, iLocal_328, -1, 0f, 1.5f, 0f);
							VEHICLE::SET_VEHICLE_TOW_TRUCK_ARM_POSITION(iLocal_337, 0.5f);
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_337, 41.5323f, 6429.8125f, 30.3523f, 10f, 0, iLocal_339, 17563813, 4f, 10f);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_337, 10f, 786597);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_338, iVar0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						}
					}
				}
				else
				{
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_339, true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_337, true, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_339);
					VEHICLE::SET_VEHICLE_TOW_TRUCK_ARM_POSITION(iLocal_337, 0f);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_337, true);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_329, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_329);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_328, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_328, 3);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_328, true, 0);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_328, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_342);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_333);
					iLocal_343 = 1;
				}
			}
			else if (STREAMING::HAS_MODEL_LOADED(iLocal_329))
			{
				iLocal_328 = VEHICLE::CREATE_VEHICLE(iLocal_329, Local_330, fLocal_331, true, true, false);
			}
		}
		else if (STREAMING::HAS_MODEL_LOADED(iLocal_342))
		{
			iLocal_338 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_337, 4, iLocal_342, -1, true, true);
		}
	}
	else
	{
		func_295();
		if (STREAMING::HAS_MODEL_LOADED(iLocal_339))
		{
			iLocal_337 = VEHICLE::CREATE_VEHICLE(iLocal_339, Local_340, fLocal_341, true, true, false);
		}
	}
}

void func_295()//Position - 0x2988C
{
	__LIB_0__::func_799(iLocal_339);
	__LIB_0__::func_799(iLocal_342);
	__LIB_0__::func_799(iLocal_329);
	__LIB_0__::func_799(iLocal_333);
	__LIB_0__::func_0(&iLocal_332);
	__LIB_8__::func_397(&iLocal_328);
}

void func_297()//Position - 0x298E0
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = (MISC::GET_GAME_TIMER() - iLocal_325);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_298())
		{
			if (__LIB_0__::func_692(iLocal_103[iVar0]))
			{
				if (!PED::IS_PED_FLEEING(iLocal_103[iVar0]) && iVar1 > iVar0 * 1000 + 5000)
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_103[iVar0]))
					{
						PED::SET_PED_PANIC_EXIT_SCENARIO(iLocal_103[iVar0], ENTITY::GET_ENTITY_COORDS(iLocal_103[iVar0], true));
					}
					if (!func_298())
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_103[iVar0], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
					}
				}
			}
		}
		iVar0++;
	}
}

int func_298()//Position - 0x29981
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (__LIB_0__::func_695(iVar0))
	{
		if (__LIB_16__::func_329(iVar0, 422.56882f, 6474.531f, 27.811201f, 7f))
		{
			return 1;
		}
	}
	return 0;
}

void func_300()//Position - 0x299EB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	iVar1 = (MISC::GET_GAME_TIMER() - iLocal_325);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(100, 300);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_0__::func_692(iLocal_98[iVar0]))
		{
			if ((!PED::IS_PED_FLEEING(iLocal_98[iVar0]) && !__LIB_6__::func_572(iLocal_98[iVar0], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"))) && iVar1 > (iVar0 * iVar2))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_101[iVar0 /*3*/], 3f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_98[iVar0]))
				{
					PED::SET_PED_PANIC_EXIT_SCENARIO(iLocal_98[iVar0], ENTITY::GET_ENTITY_COORDS(iLocal_98[iVar0], true));
				}
				TASK::TASK_PERFORM_SEQUENCE(iLocal_98[iVar0], iVar3);
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
			}
			if (iLocal_102[iVar0] && iVar1 > iVar0 * 1500)
			{
				__LIB_14__::func_731(iLocal_98[iVar0], 1);
				iLocal_102[iVar0] = 0;
			}
		}
		iVar0++;
	}
}

void func_304()//Position - 0x29D6F
{
	int iVar0;
	if (__LIB_0__::func_695(iLocal_122) && __LIB_0__::func_692(Local_94.f_0))
	{
		if (__LIB_6__::func_572(Local_94.f_0, joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_133))
		{
			if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_133, ENTITY::GET_ENTITY_COORDS(iLocal_122, true), &iVar0))
			{
				if ((iVar0 > iLocal_134 && iLocal_313) && !iLocal_315)
				{
					if (((!TASK::GET_SCRIPT_TASK_STATUS(Local_94.f_0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1 && !TASK::GET_SCRIPT_TASK_STATUS(Local_94.f_0, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 1) && !PED::IS_PED_FLEEING(Local_94.f_0)) && !TASK::GET_SCRIPT_TASK_STATUS(Local_94.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
					{
						TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(Local_94.f_0, 15f);
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_94.f_0, iLocal_122, PLAYER::PLAYER_PED_ID(), 8, 15f, 786468, 100f, 1f, true);
						iLocal_313 = 0;
					}
				}
			}
		}
	}
}

void func_305()//Position - 0x29E45
{
	int iVar0;
	if ((MISC::GET_GAME_TIMER() > iLocal_346 && func_307()) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == 0)
	{
		if (!__LIB_0__::func_75() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
		{
			iVar0 = func_306();
			switch (iVar0)
			{
				case 1:
					if (iLocal_322 < 3)
					{
						if (__LIB_2__::func_859(&uLocal_148, "MIN3AUD", sLocal_323[iLocal_322], 8, 0, 0, 0))
						{
							iLocal_322++;
							iLocal_346 = MISC::GET_GAME_TIMER() + 20000;
						}
					}
					break;
				case 0:
					if (iLocal_320 < 5)
					{
						if (__LIB_14__::func_535(&uLocal_148, "MIN3AUD", "MIN3_CHASE", sLocal_321[iLocal_320], 8, 0, 0))
						{
							iLocal_320++;
							iLocal_346 = MISC::GET_GAME_TIMER() + 20000;
						}
					}
					break;
				}
			}
	}
}

int func_306()//Position - 0x29F18
{
	float fVar0;
	float fVar1;
	int iVar2;
	fVar0 = 0f;
	fVar1 = 10f;
	iVar2 = 0;
	if (__LIB_0__::func_692(Local_94.f_0) && iLocal_322 < 3)
	{
		fVar0 = __LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), Local_94.f_0);
		if (fVar0 < fVar1)
		{
			fVar1 = fVar0;
			iVar2 = 1;
		}
	}
	if (__LIB_0__::func_692(Local_91.f_0) && iLocal_324 < 3)
	{
		fVar0 = __LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), Local_91.f_0);
		if (fVar0 < fVar1)
		{
			iVar2 = 2;
		}
	}
	return iVar2;
}

int func_307()//Position - 0x29F87
{
	float fVar0;
	float fVar1;
	fVar0 = 0f;
	fVar1 = 9999.9f;
	if (__LIB_0__::func_692(Local_94.f_0))
	{
		fVar1 = __LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), Local_94.f_0);
	}
	if (__LIB_0__::func_692(Local_91.f_0))
	{
		fVar0 = __LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), Local_91.f_0);
	}
	if (fVar0 < fVar1)
	{
		fVar1 = fVar0;
	}
	if (fVar1 < 75f)
	{
		return 1;
	}
	return 0;
}

int func_308()//Position - 0x29FE2
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_94.f_0))
	{
		if (PED::IS_PED_INJURED(Local_94.f_0))
		{
			iLocal_73 = 0;
			iLocal_71 = 8;
			if (__LIB_16__::func_328(&uLocal_353, ENTITY::GET_ENTITY_COORDS(Local_94.f_0, false)))
			{
				iLocal_352 = 1;
			}
			return 1;
		}
	}
	return 0;
}

void func_310()//Position - 0x2A0D9
{
	int iVar0;
	if (func_308() || func_255())
	{
		return;
	}
	if (__LIB_0__::func_692(Local_94.f_0))
	{
		__LIB_14__::func_615(&uLocal_34, Local_94.f_0, 0, 0, 1, 1, 1);
	}
	func_300();
	func_291();
	switch (iLocal_73)
	{
		case 0:
			__LIB_0__::func_714(&(Local_91.f_1));
			if (__LIB_0__::func_692(Local_94.f_0))
			{
				if (((__LIB_0__::func_695(iLocal_122) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_122, -1, false)) && !func_396()) && !func_298())
				{
					__LIB_0__::func_222(&uLocal_148, 4, Local_94.f_0, "JOE", 1, 1);
					if (ENTITY::IS_ENTITY_ON_SCREEN(Local_94.f_0) && (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), 420.73285f, 6463.8604f, 27.90358f, 5f, 1) || __LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), 434.05658f, 6476.1997f, 27.833858f, 10f, 1)))
					{
						TASK::TASK_ENTER_VEHICLE(Local_94.f_0, iLocal_122, 20000, -1, 2f, 1, 0);
					}
					else
					{
						TASK::TASK_WARP_PED_INTO_VEHICLE(Local_94.f_0, iLocal_122, -1);
					}
					if (iLocal_405)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("MM3_START_FORA");
						iLocal_406 = MISC::GET_GAME_TIMER() + 5000;
					}
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
					AUDIO::PREPARE_MUSIC_EVENT("MM3_TRACTOR");
					__LIB_37__::func_957(&uLocal_408, &uLocal_410, &uLocal_407, &fLocal_409);
					iLocal_73 = 1;
				}
				else
				{
					TASK::TASK_COMBAT_PED(Local_94.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
					if (iLocal_405)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("MM3_START_FORA");
						iLocal_406 = MISC::GET_GAME_TIMER() + 5000;
					}
					func_391();
					__LIB_14__::func_874(2, "Kill Joe", 1, 0, 0, 1);
					iLocal_71 = 7;
				}
			}
			break;
		case 1:
			if ((((__LIB_0__::func_692(Local_94.f_0) && __LIB_0__::func_695(iLocal_122)) && PED::IS_PED_IN_VEHICLE(Local_94.f_0, iLocal_122, false)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_131)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_132))
			{
				__LIB_0__::func_429();
				if (__LIB_2__::func_859(&uLocal_148, "MIN3AUD", "MIN3_T_BARN", 7, 0, 0, 0))
				{
					func_391();
					iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (__LIB_0__::func_695(iVar0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Local_135, Local_136, fLocal_137, false, true, 0))
					{
						sLocal_133 = sLocal_132;
						iLocal_134 = 19;
					}
					else
					{
						sLocal_133 = sLocal_131;
						iLocal_134 = 37;
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 0);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_94.f_0, iLocal_122, sLocal_133, 262144, 0, 4, -1, -1f, false, 2f);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_122, 15f);
					func_295();
					iLocal_346 = MISC::GET_GAME_TIMER() + 20000;
					iLocal_325 = MISC::GET_GAME_TIMER();
					iLocal_326 = 1;
					iLocal_327 = MISC::GET_GAME_TIMER() + 5000;
					__LIB_0__::func_714(&(Local_94.f_1));
					Local_94.f_1 = __LIB_14__::func_661(Local_94.f_0, 1, 0, 5);
					HUD::SET_BLIP_SCALE(Local_94.f_1, 1f);
					AUDIO::TRIGGER_MUSIC_EVENT("MM3_TRACTOR");
					iLocal_73 = 2;
				}
			}
			break;
		case 2:
			func_304();
			func_293();
			func_297();
			func_305();
			func_311();
			if (iLocal_405)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_406)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("MM3_START_STA");
					iLocal_405 = 0;
				}
			}
			if (iLocal_326 && MISC::GET_GAME_TIMER() > iLocal_327)
			{
				__LIB_14__::func_874(2, "Kill Joe", 1, 0, 0, 1);
				iLocal_326 = 0;
			}
			__LIB_14__::func_655(Local_94.f_1, Local_94.f_0, 250f, 1061158912, 0);
			break;
	}
}

void func_311()//Position - 0x2A3EC
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_122))
	{
		if ((((((((!__LIB_0__::func_695(iLocal_122) || FIRE::IS_ENTITY_ON_FIRE(iLocal_122)) || ENTITY::GET_ENTITY_HEALTH(iLocal_122) < 700) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_122) < 50f) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_122) < 50f) || func_314()) || func_313()) || __LIB_37__::func_878(iLocal_122, &uLocal_408, &uLocal_410, &uLocal_407, &fLocal_409, 11, 5f)) || ENTITY::IS_ENTITY_IN_WATER(iLocal_122))
		{
			if (__LIB_0__::func_692(Local_94.f_0))
			{
				if (HUD::DOES_BLIP_EXIST(Local_94.f_1))
				{
					HUD::SET_BLIP_SCALE(Local_94.f_1, 0.7f);
				}
				else
				{
					Local_94.f_1 = __LIB_14__::func_661(Local_94.f_0, 1, 0, 5);
				}
				PED::SET_PED_FLEE_ATTRIBUTES(Local_94.f_0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(Local_94.f_0, 2, false);
				TASK::TASK_SMART_FLEE_PED(Local_94.f_0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
			}
			iLocal_325 = MISC::GET_GAME_TIMER();
			iLocal_71 = 7;
			return;
		}
	}
	if (__LIB_0__::func_692(Local_94.f_0))
	{
		if (PED::IS_PED_BEING_JACKED(Local_94.f_0) || !PED::IS_PED_IN_ANY_VEHICLE(Local_94.f_0, false))
		{
			if (HUD::DOES_BLIP_EXIST(Local_94.f_1))
			{
				HUD::SET_BLIP_SCALE(Local_94.f_1, 0.7f);
			}
			else
			{
				Local_94.f_1 = __LIB_14__::func_661(Local_94.f_0, 1, 0, 5);
			}
			TASK::TASK_SMART_FLEE_PED(Local_94.f_0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
			if (__LIB_0__::func_695(iLocal_122) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_122))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_122);
			}
			iLocal_315 = 1;
			iLocal_71 = 7;
		}
	}
}

int func_313()//Position - 0x2A61C
{
	if (__LIB_0__::func_695(iLocal_110))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_110, 2, 1000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_110, 3, 1000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_110, 0, 1000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_110, 1, 1000))
		{
			return 1;
		}
	}
	return 0;
}

int func_314()//Position - 0x2A674
{
	int iVar0;
	if (iLocal_138)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_139)
		{
			return 1;
		}
	}
	else if (__LIB_0__::func_695(iLocal_122) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_122))
	{
		iVar0 = 0;
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_122, 0, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_122, 1, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_122, 4, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_122, 5, false))
		{
			iVar0++;
		}
		if (iVar0 > 0)
		{
			iLocal_138 = 1;
			iLocal_139 = MISC::GET_GAME_TIMER() + 1000;
		}
	}
	return 0;
}

void func_391()//Position - 0x31884
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, false);
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iLocal_82, 424.32f, 6477.74f, 30.79f, false, 0f, false);
		__LIB_0__::func_122(&iLocal_80, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_81))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_81, false);
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iLocal_83, 419.3f, 6471.71f, 30.74f, false, 0f, false);
		__LIB_0__::func_122(&iLocal_81, 0);
	}
}

int func_396()//Position - 0x319F6
{
	struct<3> Var0;
	if (__LIB_0__::func_695(iLocal_122))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_122, 0f, 6f, 0f) };
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Var0, 5f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_122, Local_142, Local_143, fLocal_144, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_397()//Position - 0x31A43
{
	if (func_308())
	{
		return;
	}
	func_400();
	func_291();
	switch (iLocal_73)
	{
		case 0:
			__LIB_0__::func_714(&(Local_91.f_1));
			iLocal_325 = MISC::GET_GAME_TIMER();
			func_300();
			iLocal_344 = MISC::GET_GAME_TIMER() + 30000;
			iLocal_314 = 1;
			if (iLocal_405)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("MM3_START_FORA");
				iLocal_406 = MISC::GET_GAME_TIMER() + 5000;
			}
			iLocal_73 = 1;
			break;
		case 1:
			func_300();
			func_398(1);
			if (iLocal_405)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_406)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("MM3_START_STA");
					iLocal_405 = 0;
				}
			}
			break;
	}
}

bool func_398(int iParam0)//Position - 0x31ADA
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return func_399(fLocal_79, iParam0);
	}
	return func_399(fLocal_78, iParam0);
}

int func_399(float fParam0, var uParam1)//Position - 0x31B04
{
	if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_95, fParam0, 1) || (uParam1 && MISC::GET_GAME_TIMER() > iLocal_344))
	{
		iLocal_73 = 0;
		iLocal_71 = 6;
		return 1;
	}
	return 0;
}

void func_400()//Position - 0x31B3E
{
	if (iLocal_318 < 6)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 408.37033f, 6485.697f, 25.787706f, 452.99408f, 6449.248f, 33.708237f, 50f, false, true, 0))
		{
			if (__LIB_0__::func_692(Local_94.f_0) && MISC::GET_GAME_TIMER() > iLocal_347)
			{
				__LIB_0__::func_709(Local_94.f_0, sLocal_319[iLocal_318], "JOE", 24);
				iLocal_318++;
				iLocal_347 = MISC::GET_GAME_TIMER() + 10000;
			}
		}
	}
}

void func_401()//Position - 0x31BBA
{
	func_404();
	func_400();
	switch (iLocal_73)
	{
		case 0:
			if (__LIB_0__::func_692(Local_91.f_0))
			{
				PED::SET_PED_RESET_FLAG(Local_91.f_0, 156, true);
			}
			if (MISC::GET_GAME_TIMER() > iLocal_345)
			{
				if (__LIB_0__::func_692(Local_91.f_0))
				{
					TASK::TASK_COMBAT_PED(Local_91.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				func_402();
				iLocal_325 = MISC::GET_GAME_TIMER();
				__LIB_14__::func_874(1, "Kill Josef", 0, 0, 0, 1);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
				iLocal_73 = 1;
			}
			break;
		case 1:
			func_300();
			if (!__LIB_0__::func_692(Local_91.f_0))
			{
				if (__LIB_0__::func_692(Local_94.f_0))
				{
					if (!func_398(0))
					{
						__LIB_0__::func_345(&uLocal_34, 0, 0);
						if (iLocal_314)
						{
							if (__LIB_14__::func_535(&uLocal_148, "MIN3AUD", "MIN3_KILL", "MIN3_KILL_1", 8, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 0);
								iLocal_314 = 0;
								iLocal_73 = 0;
								iLocal_71 = 5;
							}
						}
					}
				}
				else
				{
					iLocal_73 = 0;
					iLocal_71 = 8;
				}
			}
			if (iLocal_405)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_406)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("MM3_START_STA");
					iLocal_405 = 0;
				}
			}
			if (__LIB_0__::func_121(Local_91.f_0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_14__::func_615(&uLocal_34, Local_91.f_0, 0, 0, 1, 1, 1);
			}
			break;
	}
}

void func_402()//Position - 0x31CDF
{
	if (__LIB_0__::func_692(Local_94.f_0))
	{
		__LIB_0__::func_714(&(Local_94.f_1));
		Local_94.f_1 = __LIB_14__::func_661(Local_94.f_0, 1, 0, 5);
		__LIB_16__::func_17(&(Local_94.f_1), 405.69f, 6557.56f, 27.04f, 266.03f);
	}
	if (__LIB_0__::func_692(Local_91.f_0))
	{
		__LIB_0__::func_714(&(Local_91.f_1));
		Local_91.f_1 = __LIB_14__::func_661(Local_91.f_0, 1, 0, 5);
		__LIB_16__::func_17(&(Local_91.f_1), 405.69f, 6557.56f, 27.04f, 266.03f);
	}
}

void func_404()//Position - 0x31D84
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_94.f_0))
	{
		if (PED::IS_PED_INJURED(Local_94.f_0))
		{
			__LIB_0__::func_714(&(Local_94.f_1));
			if (__LIB_16__::func_328(&uLocal_353, ENTITY::GET_ENTITY_COORDS(Local_94.f_0, false)))
			{
				iLocal_352 = 1;
			}
		}
	}
}

void func_405()//Position - 0x31DBB
{
	int iVar0;
	int iVar1;
	func_404();
	switch (iLocal_73)
	{
		case 0:
			PATHFIND::SET_GPS_DISABLED_ZONE(168.89452f, 6408.563f, 27.1361f, 401.467f, 6519.5625f, 29.83689f);
			iLocal_346 = MISC::GET_GAME_TIMER() + 20000;
			iLocal_89 = MISC::GET_GAME_TIMER() + 2000;
			iLocal_90 = 0;
			iLocal_411 = -1;
			iLocal_417 = 0;
			func_427();
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 0);
			iLocal_73 = 1;
			break;
		case 1:
			if (!__LIB_0__::func_75() || __LIB_37__::func_876(&iLocal_411, 15000))
			{
				if (__LIB_14__::func_535(&uLocal_148, "MIN3AUD", "MIN3_MANUEL", "MIN3_MANUEL_2", 7, 0, 0))
				{
					iLocal_73 = 2;
				}
			}
			break;
		case 2:
			func_425();
			if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_92, 1) > 100f)
			{
				func_423();
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_92, Local_77, false, true, 0))
			{
				func_422();
				func_421();
				iLocal_73 = 3;
			}
			break;
		case 3:
			func_420();
			func_419();
			func_400();
			if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_92, 1) > 150f)
			{
				func_423();
			}
			else
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			}
			if (__LIB_0__::func_692(Local_91.f_0) && __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_92, 1) < 45f)
			{
				if (__LIB_2__::func_859(&uLocal_148, "MIN3AUD", "MIN3_J_FARM", 7, 0, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 0);
					iLocal_73 = 4;
				}
			}
			break;
		case 4:
			func_400();
			if (__LIB_0__::func_692(Local_91.f_0))
			{
				PED::SET_PED_RESET_FLAG(Local_91.f_0, 156, true);
				if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_92, 1) < 25f)
				{
					if (__LIB_42__::func_442(Local_91.f_0, 90f) || (__LIB_42__::func_442(Local_91.f_0, 0f) && !PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID())))
					{
						__LIB_0__::func_429();
						if (__LIB_2__::func_859(&uLocal_148, "MIN3AUD", "MIN3_T_FARM", 7, 0, 0, 0))
						{
							func_410(1500);
						}
					}
				}
				else if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_92, 1) > 100f)
				{
					if (__LIB_0__::func_75())
					{
						__LIB_0__::func_429();
					}
				}
				else if (__LIB_0__::func_692(iLocal_98[0]))
				{
					if (iLocal_348 > 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_348)
						{
							if (bLocal_349)
							{
								if (!__LIB_0__::func_75() && !PED::IS_PED_IN_COMBAT(Local_91.f_0, 0))
								{
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_98[0], false);
									ENTITY::SET_ENTITY_HEALTH(iLocal_98[0], 110, 0);
									PED::SET_PED_ACCURACY(Local_91.f_0, 100);
									TASK::TASK_COMBAT_PED(Local_91.f_0, iLocal_98[0], 0, 16);
								}
							}
							else
							{
								bLocal_349 = __LIB_2__::func_859(&uLocal_148, "MIN3AUD", "MIN3_REPLY", 7, 0, 0, 0);
							}
						}
					}
					else if (!__LIB_0__::func_75())
					{
						iLocal_348 = MISC::GET_GAME_TIMER() + 7500;
						__LIB_0__::func_222(&uLocal_148, 6, iLocal_98[0], "Min3Mexican0", 1, 1);
					}
				}
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
				{
					iLocal_72 = 6;
					iLocal_73 = 0;
					iLocal_71 = 9;
				}
			}
			break;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_110) && (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_110, PLAYER::PLAYER_PED_ID(), true) || !__LIB_0__::func_121(iLocal_110))) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_92, 50f))
	{
		func_410(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_91.f_0))
	{
		if (PED::IS_PED_INJURED(Local_91.f_0))
		{
			if (!func_398(0))
			{
				if (iLocal_314)
				{
					if (__LIB_14__::func_535(&uLocal_148, "MIN3AUD", "MIN3_KILL", "MIN3_KILL_1", 8, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 0);
						iLocal_314 = 0;
						iLocal_73 = 0;
						iLocal_71 = 5;
					}
				}
			}
		}
		else if (__LIB_14__::func_858(Local_91.f_0, 1, 0, 0, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_91.f_0, PLAYER::PLAYER_PED_ID(), true))
		{
			func_410(0);
		}
	}
	if (__LIB_0__::func_692(Local_69.f_28[0]))
	{
		if (!PED::IS_PED_FLEEING(Local_69.f_28[0]) && !PED::IS_PED_IN_ANY_VEHICLE(Local_69.f_28[0], true))
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_0__::func_429();
				if (__LIB_2__::func_859(&uLocal_148, "MIN3AUD", "MIN3_THREAT", 7, 1, 0, 0))
				{
					TASK::TASK_SMART_FLEE_PED(Local_69.f_28[0], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				}
			}
			else if (iLocal_87 && __LIB_42__::func_510(Local_69.f_28[0], 1126825984))
			{
				__LIB_0__::func_429();
				if (__LIB_2__::func_859(&uLocal_148, "MIN3AUD", "MIN3_AIM", 7, 1, 0, 0))
				{
					if (!__LIB_6__::func_572(Local_69.f_28[0], joaat("SCRIPT_TASK_WANDER_STANDARD")))
					{
						TASK::TASK_WANDER_STANDARD(Local_69.f_28[0], 40000f, 0);
					}
					iLocal_87 = 0;
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_69.f_28[0], false))
		{
			if (PED::IS_PED_STOPPED(Local_69.f_28[0]))
			{
				if (iLocal_88 == -1)
				{
					iLocal_88 = MISC::GET_GAME_TIMER() + 10000;
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_88)
				{
					if (!__LIB_6__::func_572(Local_69.f_28[0], joaat("SCRIPT_TASK_WANDER_STANDARD")))
					{
						TASK::TASK_WANDER_STANDARD(Local_69.f_28[0], 40000f, 0);
					}
				}
			}
			else if (iLocal_88 > -1)
			{
				iLocal_88 = -1;
			}
		}
		if (MISC::GET_GAME_TIMER() > iLocal_90 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_69.f_28[0]))
		{
			iVar0 = 0;
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				iVar0 = 1;
			}
			if (__LIB_2__::func_859(&uLocal_148, "MIN3AUD", "MIN3_BUMP", 7, iVar0, 0, 0))
			{
				iLocal_90 = MISC::GET_GAME_TIMER() + 1000;
			}
		}
		if (MISC::GET_GAME_TIMER() > iLocal_89 && __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_69.f_28[0], 15f, 1))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_69.f_28[0], false) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar1 = 0;
				if (HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					iVar1 = 1;
				}
				if (__LIB_2__::func_859(&uLocal_148, "MIN3AUD", "MIN3_FOLLOW", 7, iVar1, 0, 0))
				{
					iLocal_89 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_69.f_28[0], 100f, 100f, 2.5f, false, true, 0))
		{
			__LIB_0__::func_221(&uLocal_148, 3);
			__LIB_0__::func_124(&(Local_69.f_28[0]), 1, 0, 1);
		}
	}
}

void func_410(int iParam0)//Position - 0x32476
{
	iLocal_345 = (MISC::GET_GAME_TIMER() + iParam0);
	AUDIO::TRIGGER_MUSIC_EVENT("MM3_START_FORA");
	iLocal_405 = 1;
	iLocal_406 = MISC::GET_GAME_TIMER() + 5000;
	iLocal_73 = 0;
	iLocal_71 = 4;
}

void func_419()//Position - 0x328A4
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_695(iLocal_122) && __LIB_0__::func_695(iLocal_110))
	{
		if (!iLocal_130 && !iLocal_114)
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_113, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_113);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_110, 5f);
			ENTITY::SET_ENTITY_COORDS(iLocal_122, Local_125, true, false, false, true);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_122, fLocal_126, fLocal_127, fLocal_128, fLocal_129);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_122, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_122, true, true, false);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_122, 1, false, false);
			iLocal_114 = 1;
			iLocal_130 = 1;
		}
	}
	if (!__LIB_0__::func_695(iLocal_122))
	{
		if (STREAMING::HAS_MODEL_LOADED(iLocal_113))
		{
			iLocal_122 = VEHICLE::CREATE_VEHICLE(iLocal_113, Local_123, fLocal_124, true, true, false);
		}
	}
	if (__LIB_0__::func_692(Local_94.f_0))
	{
		if (!__LIB_6__::func_572(Local_94.f_0, joaat("SCRIPT_TASK_AIM_GUN_AT_COORD")))
		{
			WEAPON::GIVE_WEAPON_TO_PED(Local_94.f_0, joaat("WEAPON_SAWNOFFSHOTGUN"), -1, true, true);
			TASK::TASK_AIM_GUN_AT_COORD(Local_94.f_0, Local_104[0 /*3*/], -1, false, false);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_94.f_0, true, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94.f_0, true);
			PED::SET_PED_CONFIG_FLAG(Local_94.f_0, 116, false);
			PED::SET_PED_CONFIG_FLAG(Local_94.f_0, 29, false);
			PED::SET_PED_CONFIG_FLAG(Local_94.f_0, 177, true);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_94.f_0, false);
			PED::SET_PED_PROP_INDEX(Local_94.f_0, 1, 0, 0, false);
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(__LIB_2__::func_910(iLocal_108)))
	{
		Local_94.f_0 = PED::CREATE_PED(26, __LIB_2__::func_910(iLocal_108), Local_95, fLocal_96, true, true);
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__::func_692(iLocal_103[iVar0]))
		{
			iVar1++;
			if (!__LIB_6__::func_572(iLocal_103[iVar0], joaat("SCRIPT_TASK_HANDS_UP")) && !__LIB_6__::func_572(iLocal_103[iVar0], joaat("SCRIPT_TASK_COWER")))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_103[iVar0], Local_104[iVar0 /*3*/], false, false, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_103[iVar0], true);
				TASK::SET_PED_PATH_CAN_USE_LADDERS(iLocal_103[iVar0], false);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_103[iVar0], false);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_103[iVar0], 4, true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_103[iVar0], true);
				if ((iVar0 % 2) == 0)
				{
					TASK::TASK_HANDS_UP(iLocal_103[iVar0], -1, 0, -1, 0);
				}
				else
				{
					TASK::TASK_COWER(iLocal_103[iVar0], -1);
				}
			}
		}
		else if (STREAMING::HAS_MODEL_LOADED(iLocal_107) && STREAMING::HAS_MODEL_LOADED(iLocal_106))
		{
			if (iVar0 < 2)
			{
				iLocal_103[iVar0] = PED::CREATE_PED(5, iLocal_107, Local_104[iVar0 /*3*/], fLocal_105[iVar0], true, true);
			}
			else
			{
				iLocal_103[iVar0] = PED::CREATE_PED(4, iLocal_106, Local_104[iVar0 /*3*/], fLocal_105[iVar0], true, true);
			}
		}
		iVar0++;
	}
	if (iVar1 == 3)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_107);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_106);
	}
	if (__LIB_0__::func_695(iLocal_115))
	{
		if (!iLocal_119)
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_115, 5f);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_116, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_116);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_131);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_132);
			iLocal_119 = 1;
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(iLocal_116))
	{
		iLocal_115 = VEHICLE::CREATE_VEHICLE(iLocal_116, Local_117, fLocal_118, true, true, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
	{
		if (!iLocal_84)
		{
			ENTITY::SET_ENTITY_HEADING(iLocal_80, -131.39f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, true);
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iLocal_82, 424.32f, 6477.74f, 30.79f, true, 0f, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_82);
			iLocal_84 = 1;
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(iLocal_82))
	{
		iLocal_80 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_82, 424.32f, 6477.74f, 30.79f, true, true, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_81))
	{
		if (!iLocal_85)
		{
			ENTITY::SET_ENTITY_HEADING(iLocal_81, -128.34f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_81, true);
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iLocal_83, 419.3f, 6471.71f, 30.74f, true, 0f, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_83);
			iLocal_85 = 1;
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(iLocal_83))
	{
		iLocal_81 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_83, 419.3f, 6471.71f, 30.74f, true, true, false);
	}
}

void func_420()//Position - 0x32C72
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_0__::func_692(iLocal_98[iVar0]))
		{
			if (!__LIB_6__::func_572(iLocal_98[iVar0], joaat("SCRIPT_TASK_HANDS_UP")) && !__LIB_6__::func_572(iLocal_98[iVar0], joaat("SCRIPT_TASK_COWER")))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_98[iVar0], Local_99[iVar0 /*3*/], false, false, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_98[iVar0], true);
				TASK::SET_PED_PATH_CAN_USE_LADDERS(iLocal_98[iVar0], false);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_98[iVar0], false);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_98[iVar0], 4, true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_98[iVar0], true);
				if ((iVar0 % 2) == 0)
				{
					TASK::TASK_HANDS_UP(iLocal_98[iVar0], -1, 0, -1, 0);
				}
				else
				{
					TASK::TASK_COWER(iLocal_98[iVar0], -1);
				}
			}
		}
		else if (STREAMING::HAS_MODEL_LOADED(iLocal_107) && STREAMING::HAS_MODEL_LOADED(iLocal_106))
		{
			if (iVar0 < 2)
			{
				iLocal_98[iVar0] = PED::CREATE_PED(5, iLocal_107, Local_99[iVar0 /*3*/], fLocal_100[iVar0], true, true);
			}
			else
			{
				iLocal_98[iVar0] = PED::CREATE_PED(4, iLocal_106, Local_99[iVar0 /*3*/], fLocal_100[iVar0], true, true);
			}
		}
		iVar0++;
	}
	if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_74) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_75))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_91.f_0))
		{
			if (!PED::IS_PED_INJURED(Local_91.f_0))
			{
				if (!__LIB_6__::func_572(Local_91.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_91.f_0, true, 1);
					WEAPON::GIVE_WEAPON_TO_PED(Local_91.f_0, joaat("WEAPON_SAWNOFFSHOTGUN"), -1, true, true);
					PED::SET_PED_ACCURACY(Local_91.f_0, 25);
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_PLAY_ANIM(0, sLocal_74, "0", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_74, "180", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_75, "-90", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_74, "90", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_75, "90", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_74, "-90", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_75, "180", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_74, "-180", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_75, "0", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_75, "-180", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::SET_SEQUENCE_TO_REPEAT(iVar1, true);
					TASK::CLOSE_SEQUENCE_TASK(iVar1);
					TASK::TASK_PERFORM_SEQUENCE(Local_91.f_0, iVar1);
					TASK::CLEAR_SEQUENCE_TASK(&iVar1);
					__LIB_0__::func_222(&uLocal_148, 5, Local_91.f_0, "JOSEF", 1, 1);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_91.f_0, Local_92, false, false, true);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_91.f_0, Local_92, 25f, false, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_91.f_0, true);
					PED::SET_PED_CONFIG_FLAG(Local_91.f_0, 116, false);
					PED::SET_PED_CONFIG_FLAG(Local_91.f_0, 29, false);
					PED::SET_PED_CONFIG_FLAG(Local_91.f_0, 177, true);
					PED::SET_PED_PROP_INDEX(Local_91.f_0, 0, 0, 0, false);
					PED::SET_PED_PROP_INDEX(Local_91.f_0, 1, 0, 0, false);
					TASK::REQUEST_WAYPOINT_RECORDING(sLocal_131);
					TASK::REQUEST_WAYPOINT_RECORDING(sLocal_132);
				}
			}
		}
		else if (STREAMING::HAS_MODEL_LOADED(__LIB_2__::func_910(iLocal_109)))
		{
			Local_91.f_0 = PED::CREATE_PED(26, __LIB_2__::func_910(iLocal_109), Local_92, fLocal_93, true, true);
		}
	}
	if (!__LIB_0__::func_695(iLocal_110))
	{
		if (STREAMING::HAS_MODEL_LOADED(iLocal_113))
		{
			iLocal_110 = VEHICLE::CREATE_VEHICLE(iLocal_113, Local_111, fLocal_112, true, true, false);
		}
	}
	if (__LIB_0__::func_695(iLocal_115))
	{
		if (!iLocal_119)
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_115, 5f);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_116, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_116);
			iLocal_119 = 1;
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(iLocal_116))
	{
		iLocal_115 = VEHICLE::CREATE_VEHICLE(iLocal_116, Local_117, fLocal_118, true, true, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
	{
		if (!iLocal_85)
		{
			ENTITY::SET_ENTITY_HEADING(iLocal_80, -131.39f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, true);
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iLocal_82, 424.32f, 6477.74f, 30.79f, true, 0f, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_82);
			iLocal_85 = 1;
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(iLocal_82))
	{
		iLocal_80 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_82, 424.32f, 6477.74f, 30.79f, true, true, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_81))
	{
		if (!iLocal_84)
		{
			ENTITY::SET_ENTITY_HEADING(iLocal_81, -128.34f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_81, true);
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iLocal_83, 419.3f, 6471.71f, 30.74f, true, 0f, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_83);
			iLocal_84 = 1;
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(iLocal_83))
	{
		iLocal_81 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_83, 419.3f, 6471.71f, 30.74f, true, true, false);
	}
}

void func_421()//Position - 0x330FD
{
	PED::SET_PED_NON_CREATION_AREA(Local_140, Local_141);
	iLocal_418 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_140, Local_141, false, true, true, true);
	PATHFIND::SET_PED_PATHS_IN_AREA(Local_140, Local_141, false, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_140, Local_141, false, true);
	MISC::CLEAR_AREA_OF_PEDS(Local_76, 500f, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(Local_76, 500f, false, false, true, true, false, false, 0);
}

void func_422()//Position - 0x3316A
{
	__LIB_0__::func_799(iLocal_107);
	__LIB_0__::func_799(iLocal_106);
	__LIB_0__::func_799(__LIB_2__::func_910(iLocal_109));
	__LIB_0__::func_799(__LIB_2__::func_910(iLocal_108));
	__LIB_0__::func_799(iLocal_113);
	__LIB_0__::func_799(iLocal_116);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_113, true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_116, true);
	__LIB_0__::func_799(iLocal_82);
	__LIB_0__::func_799(iLocal_83);
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_97);
}

void func_423()//Position - 0x331D3
{
	if (iLocal_316 < 4 && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == 0)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_346)
		{
			if (!__LIB_0__::func_75())
			{
				if (__LIB_14__::func_535(&uLocal_148, "MIN3AUD", "MIN3_DRIVE", sLocal_317[iLocal_316], 8, 0, 0))
				{
					iLocal_316++;
					iLocal_346 = MISC::GET_GAME_TIMER() + 20000;
				}
			}
		}
	}
}

void func_425()//Position - 0x3326D
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_328))
	{
		if (__LIB_0__::func_695(iLocal_328))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_329, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_329);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_328, 4, false, false);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_328, 1);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_328, -1f);
			VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(iLocal_328, true);
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(iLocal_329))
	{
		iLocal_328 = VEHICLE::CREATE_VEHICLE(iLocal_329, Local_330, fLocal_331, true, true, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_332))
	{
		if (__LIB_0__::func_692(iLocal_332) && !__LIB_6__::func_572(iLocal_332, joaat("SCRIPT_TASK_PLAY_ANIM")))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_333);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_332, false);
			TASK::TASK_PLAY_ANIM(iLocal_332, sLocal_74, sLocal_336, 8f, -8f, -1, 9, 0f, false, false, false);
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(iLocal_333) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_74))
	{
		iLocal_332 = PED::CREATE_PED(4, iLocal_333, Local_334, fLocal_335, true, true);
	}
}

void func_427()//Position - 0x33386
{
	__LIB_0__::func_799(iLocal_329);
	__LIB_0__::func_799(iLocal_333);
}

void func_428()//Position - 0x3339E
{
	int iVar0;
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(iLocal_86))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_weapon", 0))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), false))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), true);
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_APPISTOL"), false))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_APPISTOL"), true);
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL"), false))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL"), true);
			}
			OBJECT::DELETE_OBJECT(&iLocal_86);
		}
	}
	if (__LIB_0__::func_692(Local_69.f_28[0]))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Manuel", 0))
		{
			__LIB_14__::func_808(Local_69.f_28[0], Local_120);
			ENTITY::SET_ENTITY_HEADING(Local_69.f_28[0], fLocal_121);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if ((__LIB_0__::func_695(Local_69.f_35[1]) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_69.f_35[1], -1, false)) && __LIB_0__::func_687(Local_69.f_35[1], Local_69.f_28[0], 25f, 1))
			{
				TASK::TASK_ENTER_VEHICLE(0, Local_69.f_35[1], 20000, -1, 1f, 1, 0);
				TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_69.f_35[1], 20f, 786469);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_69.f_28[0], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
	{
		RECORDING::REPLAY_STOP_EVENT();
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	else if (__LIB_0__::func_692(Local_69.f_28[0]))
	{
		if (__LIB_14__::func_535(&uLocal_148, "MIN3AUD", "MIN3_MANUEL", "MIN3_MANUEL_1", 7, 1, 0))
		{
			__LIB_37__::func_962(1, 0, 1, 1);
			__LIB_14__::func_800(&Local_69, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_69.f_28[0], true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_69.f_28[0], true);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_69.f_28[0], false);
			PED::SET_PED_CAN_BE_TARGETTED(Local_69.f_28[0], false);
			func_421();
			if (__LIB_0__::func_121(Local_69.f_41[0]))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_69.f_41[0], true, false);
				ENTITY::FREEZE_ENTITY_POSITION(Local_69.f_41[0], false);
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MINUTE_03_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("MINUTE_03_SCENE");
			}
			__LIB_0__::func_229("MIN3_06", 7500, 1);
			func_429();
			iLocal_73 = 0;
			iLocal_71 = 3;
		}
	}
}

void func_429()//Position - 0x335F8
{
	__LIB_0__::func_714(&(Local_94.f_1));
	Local_94.f_1 = __LIB_14__::func_704(Local_95, 5, 0);
	HUD::SET_BLIP_COLOUR(Local_94.f_1, 1);
	HUD::SET_BLIP_SCALE(Local_94.f_1, 0.7f);
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_94.f_1, "BLIP_ENEMY" /* GXT: Enemy */);
	__LIB_0__::func_714(&(Local_91.f_1));
	Local_91.f_1 = __LIB_14__::func_704(Local_92, 5, 0);
	HUD::SET_BLIP_COLOUR(Local_91.f_1, 1);
	HUD::SET_BLIP_SCALE(Local_91.f_1, 0.7f);
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_91.f_1, "BLIP_ENEMY" /* GXT: Enemy */);
	HUD::SET_BLIP_ROUTE(Local_91.f_1, true);
	__LIB_16__::func_17(&(Local_94.f_1), 405.69f, 6557.56f, 27.04f, 266.03f);
	__LIB_16__::func_17(&(Local_91.f_1), 405.69f, 6557.56f, 27.04f, 266.03f);
}

void func_443()//Position - 0x33A92
{
	__LIB_14__::func_862();
	switch (iLocal_73)
	{
		case 0:
			__LIB_0__::func_222(&uLocal_148, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			__LIB_0__::func_222(&uLocal_148, 3, Local_69.f_28[0], "MANUEL", 0, 1);
			func_471();
			iLocal_411 = -1;
			if (CAM::IS_SCREEN_FADED_IN() && __LIB_0__::func_121(Local_69.f_28[0]))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_69.f_28[0], 0f, 0f, 0f, true, -1, 3000, 2000, 0);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.45f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.01f);
				CAM::SET_GAMEPLAY_HINT_FOV(25f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
			}
			__LIB_13__::func_824(24, 1);
			iLocal_73 = 1;
			break;
		case 1:
			if (__LIB_2__::func_859(&uLocal_148, "MIN3AUD", "MIN3_INT_LI", 7, 0, 0, 0) || __LIB_37__::func_876(&iLocal_411, 5000))
			{
				iLocal_73 = 2;
			}
			func_471();
			break;
		case 2:
			if (!__LIB_0__::func_75())
			{
				iLocal_73 = 4;
			}
			func_471();
			break;
		case 4:
			if (__LIB_0__::func_2(0))
			{
				CUTSCENE::REQUEST_CUTSCENE("mmb_3_rcm", 8);
				while (!__LIB_0__::func_90())
				{
					SYSTEM::WAIT(0);
				}
			}
			if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			__LIB_13__::func_824(24, 0);
			func_444();
			break;
	}
}

void func_444()//Position - 0x33BCB
{
	__LIB_14__::func_851("mmb_3_rcm", 0);
	if (__LIB_14__::func_740(1, 1093140480, 0))
	{
		func_461();
		if (__LIB_0__::func_692(Local_69.f_28[0]))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_69.f_28[0], "Manuel", 0, 0, 0);
			__LIB_0__::func_222(&uLocal_148, 3, Local_69.f_28[0], "MANUEL", 1, 1);
			TASK::TASK_CLEAR_LOOK_AT(Local_69.f_28[0]);
		}
		if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
			__LIB_0__::func_222(&uLocal_148, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 1, 1);
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), false))
			{
				iLocal_86 = __LIB_8__::func_6(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 1, 0, 0, 0, 0, 0, 0);
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_APPISTOL"), false))
			{
				iLocal_86 = __LIB_8__::func_6(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_APPISTOL"), 1, 0, 0, 0, 0, 0, 0);
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL"), false))
			{
				iLocal_86 = __LIB_8__::func_6(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL"), 1, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 12, false, true);
				iLocal_86 = __LIB_8__::func_6(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 1, 0, 0, 0, 0, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_86))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_86, "Trevors_weapon", 0, 0, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_69.f_41[0]))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_69.f_41[0], "MMB_Chair", 0, 0, 0);
		}
		__LIB_0__::func_84(500, 0);
		__LIB_14__::func_841();
		RECORDING::REPLAY_START_EVENT(1);
		CUTSCENE::START_CUTSCENE(0);
		SYSTEM::WAIT(0);
		__LIB_0__::func_123(&(Local_69.f_41[1]));
		__LIB_14__::func_614(Local_414, Local_415, fLocal_416, Local_412, fLocal_413, __LIB_13__::func_790(), 1, 1, 1, 0, 0);
		func_445(-303.82f, 6211.29f, 31.05f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
		iLocal_71 = 2;
	}
}

void func_445(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x33D9D
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
					if (func_199(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_86(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_199(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_86(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_199(PLAYER::PLAYER_PED_ID(), 8, 1) || func_199(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_86(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_199(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_86(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			iLocal_46 = 0;
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_46 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__::func_84(500, 0);
		}
	}
}

void func_461()//Position - 0x34D94
{
	Local_99[0 /*3*/] = { 433.29074f, 6508.464f, 28.314806f };
	fLocal_100[0] = 81.59f;
	Local_101[0 /*3*/] = { 444.1198f, 6489.084f, 28.5351f };
	Local_99[1 /*3*/] = { 434.6316f, 6511.0083f, 28.394669f };
	fLocal_100[1] = 67.03f;
	Local_101[1 /*3*/] = { 445.7498f, 6483.2534f, 28.628f };
	Local_99[2 /*3*/] = { 435.3931f, 6507.186f, 28.420036f };
	fLocal_100[2] = 50.1f;
	Local_101[2 /*3*/] = { 445.4445f, 6521.4688f, 27.8593f };
	Local_99[3 /*3*/] = { 436.2267f, 6509.413f, 28.451788f };
	fLocal_100[3] = 55f;
	Local_101[3 /*3*/] = { 442.8672f, 6527.345f, 27.4831f };
	Local_99[4 /*3*/] = { 436.5088f, 6511.723f, 28.522154f };
	fLocal_100[4] = 48.2f;
	Local_101[4 /*3*/] = { 440.3789f, 6533.7314f, 27.1066f };
	Local_104[0 /*3*/] = { 435.5727f, 6465.7324f, 27.7508f };
	fLocal_105[0] = 47.74f;
	Local_104[1 /*3*/] = { 436.2014f, 6464.4033f, 27.7476f };
	fLocal_105[1] = 50.1f;
	Local_104[2 /*3*/] = { 436.5488f, 6461.785f, 27.7461f };
	fLocal_105[2] = 48.2f;
}

void func_471()//Position - 0x3534D
{
	if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), -303.6752f, 6212.527f, 30.455961f, 2f, 1))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
		if (!__LIB_6__::func_572(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) && __LIB_0__::func_692(Local_69.f_28[0]))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_69.f_28[0], -1);
		}
	}
}

void func_479()//Position - 0x35576
{
	int iVar0;
	int iVar1;
	sLocal_317[0] = "MIN3_DRIVE_1";
	sLocal_317[1] = "MIN3_DRIVE_2";
	sLocal_317[2] = "MIN3_DRIVE_3";
	sLocal_317[3] = "MIN3_DRIVE_4";
	sLocal_319[0] = "MIN3_ASAA";
	sLocal_319[1] = "MIN3_ASAB";
	sLocal_319[2] = "MIN3_ASAC";
	sLocal_319[3] = "MIN3_ASAD";
	sLocal_319[4] = "MIN3_ASAE";
	sLocal_319[5] = "MIN3_ASAF";
	sLocal_321[0] = "MIN3_CHASE_1";
	sLocal_321[1] = "MIN3_CHASE_2";
	sLocal_321[2] = "MIN3_CHASE_3";
	sLocal_321[3] = "MIN3_CHASE_4";
	sLocal_321[4] = "MIN3_CHASE_5";
	sLocal_323[0] = "MIN3_JOE1";
	sLocal_323[1] = "MIN3_JOE2";
	sLocal_323[2] = "MIN3_JOE3";
	iLocal_102[0] = 1;
	iLocal_102[1] = 1;
	iLocal_102[2] = 1;
	iLocal_102[3] = 1;
	iLocal_102[4] = 1;
	STREAMING::REQUEST_ANIM_DICT(sLocal_74);
	STREAMING::REQUEST_ANIM_DICT(sLocal_75);
	HUD::REQUEST_ADDITIONAL_TEXT("MIN3", 0);
	PED::SET_CREATE_RANDOM_COPS(false);
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		__LIB_16__::func_332(&uLocal_353);
		__LIB_16__::func_331(&uLocal_353, 468.64038f, 6547.756f, 26.09223f);
		__LIB_16__::func_331(&uLocal_353, 477.9092f, 6447.2783f, 29.429457f);
		__LIB_16__::func_331(&uLocal_353, 240.05112f, 6414.416f, 30.429955f);
		__LIB_16__::func_331(&uLocal_353, 148.91687f, 6500.049f, 30.583202f);
		__LIB_16__::func_331(&uLocal_353, 229.88852f, 6546.0303f, 30.67927f);
		__LIB_16__::func_330(&uLocal_353);
		if (__LIB_0__::func_323())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MINUTE_03_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("MINUTE_03_SCENE");
			}
			if (__LIB_0__::func_692(Local_69.f_28[0]))
			{
				TASK::TASK_CLEAR_LOOK_AT(Local_69.f_28[0]);
			}
			iVar0 = __LIB_0__::func_344();
			if (Global_94618 == 1)
			{
				iVar0++;
			}
			__LIB_0__::func_123(&(Local_69.f_41[1]));
			switch (iVar0)
			{
				case 0:
					__LIB_0__::func_427(-303.3698f, 6212.355f, 30.4696f, 229.2303f, 1, 0);
					func_598();
					break;
				case 1:
					__LIB_0__::func_222(&uLocal_148, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 1, 1);
					__LIB_0__::func_427(389.4927f, 6554.734f, 26.6191f, 270.5771f, 1, 0);
					func_596();
					break;
				case 2:
					__LIB_0__::func_222(&uLocal_148, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 1, 1);
					__LIB_0__::func_427(423.6803f, 6519.71f, 26.6747f, 170.9605f, 1, 0);
					func_584();
					break;
				case 3:
					__LIB_0__::func_427(428.21f, 6509.16f, 27.92f, 161.97f, 1, 0);
					__LIB_14__::func_865(&iVar1, 424.07f, 6509.42f, 27.33f, 181.39f, 0, 0, 1, 1, 1, joaat("sabregt"), 0, 145, 1);
					__LIB_0__::func_433(0, -1, 1);
					__LIB_0__::func_84(500, 1);
					__LIB_38__::func_292(1, 1, 1);
					func_53();
					break;
				default:
					break;
			}
		}
		else
		{
			iLocal_73 = 0;
			iLocal_71 = 1;
		}
	}
}

void func_584()//Position - 0x413D6
{
	int iVar0;
	func_594(1, 1);
	__LIB_0__::func_429();
	func_593();
	if (!__LIB_0__::func_324())
	{
		func_591(423.6803f, 6519.71f, 26.6747f, 170.9605f);
	}
	func_461();
	func_590();
	func_422();
	func_427();
	while (!func_589())
	{
		SYSTEM::WAIT(0);
	}
	func_419();
	while (!func_588())
	{
		func_419();
		SYSTEM::WAIT(0);
	}
	func_419();
	func_402();
	func_587();
	iLocal_73 = 0;
	iLocal_71 = 5;
	func_421();
	__LIB_14__::func_874(2, "Kill Joe", 1, 0, 0, 1);
	if (__LIB_0__::func_324())
	{
		__LIB_14__::func_865(&iVar0, 423.6803f, 6519.71f, 26.6747f, 170.9605f, 0, 0, 1, 1, 1, joaat("sabregt"), 0, 145, 1);
		__LIB_0__::func_433(iVar0, -1, 1);
	}
	else
	{
		__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1112014848, 12, 5000, 0, 0);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("MM3_RESTART1");
	__LIB_38__::func_292(1, 1, 1);
}

void func_587()//Position - 0x41549
{
	int iVar0;
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), false))
	{
		iVar0 = WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"));
		if (WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), iVar0) < 12)
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 12, true, true);
		}
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_APPISTOL"), false))
	{
		iVar0 = WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_APPISTOL"));
		if (WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), iVar0) < 12)
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 12, true, true);
		}
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL"), false))
	{
		iVar0 = WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL"));
		if (WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), iVar0) < 12)
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 12, true, true);
		}
	}
	else
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 12, true, true);
	}
}

int func_588()//Position - 0x4162B
{
	if ((((__LIB_0__::func_692(Local_94.f_0) && __LIB_0__::func_695(iLocal_122)) && __LIB_0__::func_692(iLocal_103[0])) && __LIB_0__::func_692(iLocal_103[1])) && __LIB_0__::func_692(iLocal_103[2]))
	{
		return 1;
	}
	return 0;
}

int func_589()//Position - 0x4167A
{
	if (((((((((STREAMING::HAS_MODEL_LOADED(iLocal_107) && STREAMING::HAS_MODEL_LOADED(iLocal_106)) && STREAMING::HAS_MODEL_LOADED(__LIB_2__::func_910(iLocal_109))) && STREAMING::HAS_MODEL_LOADED(__LIB_2__::func_910(iLocal_108))) && STREAMING::HAS_MODEL_LOADED(iLocal_113)) && STREAMING::HAS_MODEL_LOADED(iLocal_116)) && STREAMING::HAS_MODEL_LOADED(iLocal_82)) && STREAMING::HAS_MODEL_LOADED(iLocal_83)) && STREAMING::HAS_MODEL_LOADED(iLocal_329)) && STREAMING::HAS_MODEL_LOADED(iLocal_333))
	{
		return 1;
	}
	return 0;
}

void func_590()//Position - 0x41703
{
	iLocal_346 = MISC::GET_GAME_TIMER() + 20000;
	iLocal_316 = 0;
	iLocal_318 = 0;
	iLocal_320 = 0;
	iLocal_322 = 0;
	iLocal_324 = 0;
	iLocal_314 = 1;
	iLocal_138 = 0;
	iLocal_315 = 0;
	iLocal_313 = 1;
	iLocal_139 = 0;
	iLocal_102[0] = 1;
	iLocal_102[1] = 1;
	iLocal_102[2] = 1;
	iLocal_102[3] = 1;
	iLocal_102[4] = 1;
	iLocal_350 = 0;
	iLocal_351 = 0;
	iLocal_352 = 0;
	iLocal_130 = 0;
	iLocal_119 = 0;
	iLocal_114 = 0;
	iLocal_84 = 0;
	iLocal_85 = 0;
	iLocal_343 = 0;
	iLocal_348 = -1;
	bLocal_349 = false;
	iLocal_87 = 1;
	iLocal_405 = 1;
	iLocal_88 = -1;
	iLocal_89 = -1;
	iLocal_90 = -1;
}

void func_591(struct<3> Param0, float fParam1)//Position - 0x41795
{
	int* iVar0;
	int* iVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Param0);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (__LIB_0__::func_695(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		__LIB_8__::func_397(&iVar0);
		__LIB_14__::func_865(&iVar1, Param0, fParam1, 1, 0, 1, 1, 1, joaat("sabregt"), 0, 145, 1);
		__LIB_0__::func_106(&iVar1);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
}

void func_593()//Position - 0x41846
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_69.f_28[0]))
	{
		__LIB_0__::func_221(&uLocal_148, 3);
		__LIB_0__::func_0(&(Local_69.f_28[0]));
	}
	func_31();
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_97);
	if (ENTITY::DOES_ENTITY_EXIST(Local_91.f_0))
	{
		if (!PED::IS_PED_INJURED(Local_91.f_0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_91.f_0, false, 1);
		}
		__LIB_0__::func_221(&uLocal_148, 5);
		__LIB_0__::func_0(&Local_91);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_94.f_0))
	{
		if (!PED::IS_PED_INJURED(Local_94.f_0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_94.f_0, false, 1);
		}
		__LIB_0__::func_221(&uLocal_148, 4);
		__LIB_0__::func_0(&Local_94);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_0__::func_0(&(iLocal_98[iVar0]));
		iVar0++;
	}
	__LIB_0__::func_0(&iLocal_332);
	if (__LIB_0__::func_692(iLocal_338))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_338, false, 1);
	}
	__LIB_0__::func_0(&iLocal_338);
	__LIB_8__::func_397(&(Local_69.f_35[0]));
	__LIB_8__::func_397(&iLocal_110);
	__LIB_8__::func_397(&iLocal_115);
	__LIB_8__::func_397(&iLocal_122);
	__LIB_8__::func_397(&iLocal_328);
	__LIB_8__::func_397(&iLocal_337);
	__LIB_0__::func_123(&iLocal_80);
	__LIB_0__::func_123(&iLocal_81);
}

void func_594(bool bParam0, bool bParam1)//Position - 0x41945
{
	if (bParam0)
	{
		__LIB_38__::func_290(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_445(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_596()//Position - 0x419D7
{
	int iVar0;
	func_594(1, 1);
	__LIB_0__::func_429();
	func_593();
	if (!__LIB_0__::func_324())
	{
		func_591(389.4927f, 6554.734f, 26.6191f, 270.5771f);
	}
	func_461();
	func_590();
	func_422();
	func_427();
	while (!func_589())
	{
		SYSTEM::WAIT(0);
	}
	func_420();
	while (!func_597())
	{
		func_420();
		SYSTEM::WAIT(0);
	}
	func_420();
	func_419();
	while (!func_588())
	{
		func_419();
		SYSTEM::WAIT(0);
	}
	func_419();
	func_587();
	iLocal_73 = 3;
	iLocal_71 = 3;
	__LIB_14__::func_874(1, "Kill Josef", 0, 0, 0, 1);
	if (!__LIB_0__::func_324())
	{
		__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1112014848, 12, 5000, 0, 0);
	}
	__LIB_0__::func_229("MIN3_06", 7500, 1);
	func_429();
	func_421();
	if (__LIB_0__::func_324())
	{
		__LIB_14__::func_865(&iVar0, 389.4927f, 6554.734f, 26.6191f, 270.5771f, 0, 0, 1, 1, 1, joaat("sabregt"), 0, 145, 1);
		__LIB_0__::func_433(iVar0, -1, 1);
	}
	__LIB_38__::func_292(1, 1, 1);
}

int func_597()//Position - 0x41AEE
{
	if (((((((((__LIB_0__::func_692(Local_91.f_0) && __LIB_0__::func_695(iLocal_110)) && __LIB_0__::func_695(iLocal_115)) && __LIB_0__::func_692(iLocal_98[0])) && __LIB_0__::func_692(iLocal_98[1])) && __LIB_0__::func_692(iLocal_98[2])) && __LIB_0__::func_692(iLocal_98[3])) && __LIB_0__::func_692(iLocal_98[4])) && ENTITY::DOES_ENTITY_EXIST(iLocal_80)) && ENTITY::DOES_ENTITY_EXIST(iLocal_81))
	{
		return 1;
	}
	return 0;
}

void func_598()//Position - 0x41B78
{
	int iVar0;
	int iVar1;
	func_594(1, 1);
	__LIB_0__::func_429();
	func_461();
	if (__LIB_0__::func_692(Local_69.f_28[0]))
	{
		__LIB_0__::func_222(&uLocal_148, 3, Local_69.f_28[0], "MANUEL", 1, 1);
		__LIB_14__::func_808(Local_69.f_28[0], Local_120);
		ENTITY::SET_ENTITY_HEADING(Local_69.f_28[0], fLocal_121);
	}
	func_587();
	__LIB_0__::func_222(&uLocal_148, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 1, 1);
	if (!__LIB_0__::func_324())
	{
		__LIB_14__::func_808(PLAYER::PLAYER_PED_ID(), -303.3698f, 6212.355f, 30.4696f);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 229.2303f);
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-297.9875f, 6193.3115f, 28.87423f, -274.15936f, 6209.0376f, 32.357018f, false, true);
	__LIB_14__::func_588(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, false, false, false, false, false, false, 0);
	iLocal_71 = 2;
	if (!__LIB_0__::func_324())
	{
		__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1112014848, 12, 5000, 0, 0);
	}
	if (__LIB_0__::func_692(Local_69.f_28[0]))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (__LIB_0__::func_695(Local_69.f_35[1]) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_69.f_35[1], -1, false))
		{
			TASK::TASK_ENTER_VEHICLE(0, Local_69.f_35[1], 20000, -1, 1f, 1, 0);
			TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_69.f_35[1], 20f, 786469);
		}
		else
		{
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
		}
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(Local_69.f_28[0], iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
	if (__LIB_0__::func_121(Local_69.f_41[0]))
	{
		ENTITY::SET_ENTITY_COLLISION(Local_69.f_41[0], true, false);
		ENTITY::FREEZE_ENTITY_POSITION(Local_69.f_41[0], false);
	}
	if (__LIB_0__::func_324())
	{
		__LIB_14__::func_865(&iVar1, -283.27f, 6216.75f, 31.84f, 43.56f, 0, 0, 1, 1, 1, joaat("sabregt"), 0, 145, 1);
		__LIB_0__::func_433(0, -1, 1);
	}
	__LIB_38__::func_292(1, 1, 1);
}

void func_604()//Position - 0x41F1F
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
		{
			__LIB_0__::func_429();
		}
	}
}

void func_605()//Position - 0x41F3E
{
	if (!iLocal_350)
	{
		if (__LIB_0__::func_692(Local_91.f_0))
		{
			if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_91.f_0, joaat("WEAPON_STUNGUN"), 0))
			{
				iLocal_350 = 1;
			}
		}
	}
	if (__LIB_0__::func_692(Local_94.f_0))
	{
		if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_94.f_0, joaat("WEAPON_STUNGUN"), 0))
		{
			if (!iLocal_351)
			{
				iLocal_351 = 1;
			}
			WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Local_94.f_0);
		}
	}
}

int func_630(var uParam0)//Position - 0x42DA5
{
	int iVar0[5];
	int iVar1;
	bool bVar2;
	iVar0[0] = joaat("sabregt");
	iVar0[1] = joaat("bison");
	iVar0[2] = iLocal_55;
	iVar0[3] = joaat("prop_table_03_chr");
	iVar0[4] = joaat("prop_cs_rolled_paper");
	switch (iLocal_52)
	{
		case 0:
			uParam0->f_16 = 4;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "MMB_3_RCM", 24);
			uParam0->f_25 = 1;
			uParam0->f_17[0 /*3*/] = { -303.51196f, 6211.8096f, 30.487585f };
			uParam0->f_17[1 /*3*/] = { 20f, 20f, 3f };
			__LIB_14__::func_825(&(uParam0->f_48), "rcmminute3base", "base", "beckon");
			uParam0->f_48.f_5 = { -303.73f, 6211.56f, 31.49f };
			uParam0->f_48.f_8 = { 0f, 0f, -2.8f };
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			iLocal_52 = 1;
			return 0;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !__LIB_14__::func_856(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_52 = 2;
			return 0;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				__LIB_14__::func_807(&(uParam0->f_41[0]), iVar0[3], -303.74f, 6211.56f, 30.49f, -176.77f);
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], false, false);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], true);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_14__::func_842(&(uParam0->f_28[0]), 59, uParam0->f_48.f_5, -2.8f, "RCM MINUTE - MANUEL", 1))
				{
					PED::SET_PED_PROP_INDEX(uParam0->f_28[0], 0, 0, 0, false);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_28[0], false);
					if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 2050, 4);
					}
				}
				else
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_17__::func_25(&(uParam0->f_35[0]), iVar0[0], -281.93f, 6198.32f, 30.77f, -135.32f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[0], true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				__LIB_17__::func_25(&(uParam0->f_35[1]), iVar0[1], -291.72f, 6208.33f, 30.87f, -134.50163f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[1], 0);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[1], true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				__LIB_14__::func_807(&(uParam0->f_41[1]), iVar0[4], -303.74f, 6211.56f, 30.49f, -176.77f);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 18905), 0.12f, 0f, 0.03f, 90f, 0f, 90f, false, false, false, false, 2, true, 0);
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

void func_642()//Position - 0x4336F
{
	__LIB_14__::func_841();
	if (__LIB_14__::func_843())
	{
		func_650();
	}
	HUD::CLEAR_PRINTS();
	__LIB_0__::func_429();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	__LIB_14__::func_871(&Local_69, 0, 0, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_70, false);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_650()//Position - 0x434B9
{
	int iVar0;
	func_31();
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_97);
	if (__LIB_0__::func_692(Local_91.f_0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_91.f_0, false, 1);
	}
	if (__LIB_0__::func_692(Local_94.f_0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_94.f_0, false, 1);
	}
	__LIB_0__::func_124(&Local_91, 1, 0, 1);
	__LIB_0__::func_124(&Local_94, 1, 0, 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_98[iVar0]))
			{
				if (!(__LIB_6__::func_572(iLocal_98[iVar0], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) || PED::IS_PED_FLEEING(iLocal_98[iVar0])))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_98[iVar0], Local_101[iVar0 /*3*/], 2f, 20000, 0.25f, 0, 40000f);
				}
				PED::SET_PED_KEEP_TASK(iLocal_98[iVar0], true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_98[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_103[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_103[iVar0]))
			{
				PED::SET_PED_KEEP_TASK(iLocal_103[iVar0], true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_103[iVar0]));
			}
		}
		iVar0++;
	}
	__LIB_0__::func_124(&iLocal_332, 1, 0, 1);
	if (__LIB_0__::func_692(iLocal_338))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_338, false, 1);
	}
	__LIB_0__::func_124(&iLocal_338, 1, 0, 1);
	__LIB_0__::func_106(&iLocal_110);
	__LIB_0__::func_106(&iLocal_115);
	__LIB_0__::func_106(&iLocal_122);
	__LIB_0__::func_106(&iLocal_328);
	__LIB_0__::func_106(&iLocal_337);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_81))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_81, false);
	}
	__LIB_0__::func_122(&iLocal_80, 0);
	__LIB_0__::func_122(&iLocal_81, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_418, false);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Local_140, Local_141, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MINUTE_03_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("MINUTE_03_SCENE");
	}
	PED::SET_CREATE_RANDOM_COPS(true);
	PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
	__LIB_0__::func_345(&uLocal_34, 0, 0);
	__LIB_0__::func_325();
}

