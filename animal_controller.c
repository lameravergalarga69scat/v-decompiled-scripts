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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	int iLocal_53 = 0;
	struct<22> Local_54 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	struct<29> Local_58 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	struct<46> Local_93[4];
	struct<46> Local_94[4];
	struct<46> Local_95[4];
	struct<16> Local_96[4];
	struct<16> Local_97[4];
	struct<46> Local_98[4];
	struct<16> Local_99[4];
	struct<46> Local_100[4];
	struct<16> Local_101[4];
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	bool bLocal_106 = 0;
	var uLocal_107[4] = { 0, 0, 0, 0 };
	var uLocal_108[4] = { 0, 0, 0, 0 };
	int iLocal_109[4] = { 0, 0, 0, 0 };
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112[4] = { 0, 0, 0, 0 };
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	bool bLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	struct<16> Local_122[4];
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int* iLocal_125 = NULL;
	int iLocal_126 = 0;
	var uLocal_127 = 16;
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
	char* sLocal_292 = NULL;
	int iLocal_293 = 0;
	struct<3> Local_294 = { 0, 0, 0 } ;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	var uLocal_298 = 12;
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
	var uLocal_311 = 12;
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
	var uLocal_324 = 12;
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
	var uLocal_337 = 9;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 9;
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
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	struct<3> Local_365 = { 0, 0, 0 } ;
	float fLocal_366 = 0f;
	struct<3> Local_367 = { 0, 0, 0 } ;
	float fLocal_368 = 0f;
	int iLocal_369 = 0;
	bool bLocal_370 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_47 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_49 = 1;
	iLocal_50 = 1;
	fLocal_51 = 10000f;
	fLocal_52 = 12100f;
	iLocal_76 = -1;
	iLocal_77 = -1;
	iLocal_79 = -1;
	iLocal_80 = -1;
	iLocal_81 = -1;
	iLocal_82 = -1;
	iLocal_83 = 145;
	iLocal_85 = 1;
	iLocal_89 = -1;
	iLocal_103 = -1;
	iLocal_110 = -1;
	iLocal_111 = -1;
	iLocal_119 = 1;
	iLocal_126 = joaat("prop_peyote_chunk_01");
	sLocal_292 = "";
	iLocal_293 = MISC::GET_GAME_TIMER();
	Local_294 = { 0f, 0f, 0f };
	iLocal_295 = -1;
	iLocal_296 = -1;
	iLocal_297 = -1;
	Local_365 = { 0f, 0f, 0f };
	fLocal_366 = 0f;
	Local_367 = { 0f, 0f, 0f };
	fLocal_368 = 0f;
	iLocal_369 = MISC::GET_GAME_TIMER();
	if (__LIB_0__::func_39(14) || HUD::HAS_DIRECTOR_MODE_BEEN_LAUNCHED_BY_CODE())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_647();
	func_645();
	func_643();
	Global_32115 = 0;
	Global_32116 = -1;
	iLocal_105 = 0;
	AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", true);
	while (true)
	{
		if (!iLocal_74)
		{
			iLocal_74 = 1;
			if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
			{
				func_642();
				GRAPHICS::ANIMPOSTFX_STOP_ALL();
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), true);
					ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
				}
				func_639();
				iLocal_295 = -1;
			}
		}
		if (Global_32117 || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			Global_32117 = 0;
			if (BitTest(uLocal_78, 1))
			{
				func_638();
				iLocal_295 = -1;
			}
			else
			{
				func_642();
				GRAPHICS::ANIMPOSTFX_STOP_ALL();
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), true);
					ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
				}
				func_639();
				iLocal_295 = -1;
			}
		}
		func_636();
		func_629();
		if ((((!__LIB_0__::func_215(13) && !__LIB_0__::func_39(13)) && !__LIB_0__::func_39(14)) && !__LIB_0__::func_39(17)) || (__LIB_0__::func_39(14) || HUD::HAS_DIRECTOR_MODE_BEEN_LAUNCHED_BY_CODE()))
		{
			func_639();
		}
		iVar0 = __LIB_13__::func_716(PLAYER::PLAYER_PED_ID());
		if (iVar0 != 145)
		{
			if (iVar0 != iLocal_83)
			{
				func_625(iVar0);
			}
		}
		switch (iLocal_53)
		{
			case 0:
				if (BitTest(uLocal_78, 0))
				{
					if (STREAMING::HAS_MODEL_LOADED(__LIB_12__::func_894(iLocal_83)))
					{
						iLocal_53 = 1;
					}
				}
				break;
			case 1:
				iVar1 = 0;
				while (iVar1 < 4)
				{
					iVar3 = func_622(iVar1);
					iVar2 = 0;
					while (iVar2 < iVar3)
					{
						if (iLocal_53 == 1)
						{
							if (func_616(iVar1, iVar2))
							{
								iLocal_113 = uLocal_112[iVar1];
								iLocal_114 = iVar1;
								bLocal_115 = iVar2;
								if (!Global_113386.f_10049.f_144)
								{
									MISC::SET_BIT(&(Global_113386.f_10049.f_138[iVar1]), iVar2);
									MISC::SET_BIT(&(Global_113386.f_10049.f_143), uLocal_112[iVar1]);
									iLocal_295 = iVar2;
									func_615();
								}
								iLocal_104 = __LIB_37__::func_422(iLocal_113);
								bLocal_370 = BitTest(Global_113386.f_26434.f_3, iLocal_104);
								__LIB_43__::func_500(iLocal_113, 1);
								PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 200, 250);
								STATS::STAT_DISABLE_STATS_TRACKING();
								__LIB_0__::func_366(1);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 27 /*INPUT_PHONE*/, true);
								iLocal_53 = 2;
							}
						}
						iVar2++;
					}
					iVar1++;
				}
				if (!Global_113386.f_10049.f_144)
				{
					if ((MISC::GET_FRAME_COUNT() % 1000) == 0)
					{
						func_602();
					}
				}
				break;
			case 2:
				switch (__LIB_15__::func_282(&iLocal_80, 6, 13, 0, 0))
				{
					case 1:
						STREAMING::REQUEST_MODEL(func_599(iLocal_113));
						if (!Global_113386.f_10049.f_144)
						{
							__LIB_0__::func_734(1, 1);
							__LIB_0__::func_210();
						}
						iLocal_53 = 3;
						break;
					case 0:
						iLocal_53 = 1;
						break;
				}
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 27 /*INPUT_PHONE*/, true);
				break;
			case 3:
				if (func_533())
				{
					func_530();
					func_494();
					iLocal_53 = 4;
				}
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 27 /*INPUT_PHONE*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				func_493();
				break;
			case 4:
				__LIB_31__::func_959(func_599(iLocal_113), &iLocal_81, 1);
				func_486();
				if (!BitTest(uLocal_78, 12))
				{
					if (__LIB_15__::func_872(&uLocal_127, "ANIMLAU", sLocal_292, 3, 0, 0, 0))
					{
						MISC::SET_BIT(&uLocal_78, 12);
					}
				}
				AUDIO::LOAD_STREAM("PEYOTE_TRANSITION_OUT", 0);
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
				{
					if (iLocal_79 == -1)
					{
						iLocal_79 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_79) > 1250)
					{
						func_470();
						iLocal_53 = 5;
					}
				}
				else if (iLocal_79 != -1)
				{
					iLocal_79 = -1;
				}
				if (__LIB_41__::func_19(&iLocal_369))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						PED::SET_PED_TO_RAGDOLL(PLAYER::PLAYER_PED_ID(), 1000, 3000, 0, true, true, false);
					}
					func_470();
					iLocal_53 = 5;
				}
				break;
			case 5:
				if (func_16())
				{
					if (iLocal_104 != -1 && !bLocal_370)
					{
						__LIB_0__::func_68(__LIB_37__::func_421(iLocal_104));
					}
					MISC::CLEAR_BIT(&uLocal_78, 12);
					__LIB_15__::func_281(&iLocal_80);
					iLocal_53 = 1;
				}
				else
				{
					CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 27 /*INPUT_PHONE*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				}
				break;
		}
		func_4(&iLocal_118, &iLocal_119, &uLocal_120, 6, &uLocal_121, &iLocal_125, "PEY_TITLE" /* GXT: Peyote Collected~s~ */, "PEY_COLLECT" /* GXT: ~1~/27 peyote plants collected. */);
		func_2();
		if (iLocal_82 != -1)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
			__LIB_0__::func_189();
		}
		SYSTEM::WAIT(0);
	}
}

void func_2()//Position - 0x55E
{
	int iVar0;
	float fVar1;
	if (bLocal_84)
	{
		iVar0 = (iLocal_89 - MISC::GET_GAME_TIMER());
		if (iLocal_85)
		{
			fVar1 = (255f - (IntToFloat(iVar0) * 0.51f));
			if (fVar1 >= 0f)
			{
				iLocal_90 = SYSTEM::ROUND(fVar1);
			}
			if (MISC::GET_GAME_TIMER() > iLocal_89)
			{
				iLocal_90 = 255;
			}
		}
		else
		{
			fVar1 = (IntToFloat(iVar0) * 0.51f);
			if (fVar1 >= 0f)
			{
				iLocal_90 = SYSTEM::ROUND(fVar1);
			}
			if (iLocal_90 < 0)
			{
				iLocal_90 = 0;
			}
			if (MISC::GET_GAME_TIMER() > iLocal_89)
			{
				func_3();
			}
		}
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 255, 255, 255, iLocal_90, false);
	}
}

void func_3()//Position - 0x5F0
{
	bLocal_84 = false;
	iLocal_85 = 1;
	iLocal_89 = -1;
	iLocal_90 = 0;
}

void func_4(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int* iParam5, char* sParam6, char* sParam7)//Position - 0x604
{
	int iVar0;
	__LIB_0__::func_732(0);
	if (*iParam0)
	{
		switch (*uParam4)
		{
			case 0:
				*iParam5 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
				{
					iVar0 = AUDIO::GET_SOUND_ID();
					if (iParam3 == 6)
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", true);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar0, "COLLECTED", "HUD_AWARDS", true);
					}
					*uParam4++;
				}
				break;
			case 1:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam6);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
				HUD::ADD_TEXT_COMPONENT_INTEGER(__LIB_12__::func_895(iParam3));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				*uParam2 = MISC::GET_GAME_TIMER();
				*uParam4++;
				break;
			case 2:
				if ((MISC::GET_GAME_TIMER() - *uParam2) > 7000)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam5, "SHARD_ANIM_OUT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					*uParam4++;
				}
				else if (!__LIB_0__::func_691())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
					{
						__LIB_0__::func_732(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			case 3:
				if ((MISC::GET_GAME_TIMER() - *uParam2) > 7500)
				{
					*uParam4++;
				}
				else if (!__LIB_0__::func_691())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
					{
						__LIB_0__::func_732(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			case 4:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam5);
				}
				__LIB_0__::func_732(0);
				*iParam1 = 0;
				*iParam0 = 0;
				*uParam4 = 0;
				break;
			}
	}
}

int func_16()//Position - 0xB36
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	iVar0 = __LIB_12__::func_894(iLocal_83);
	if (!BitTest(uLocal_78, 6))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_54.f_3))
		{
			STREAMING::REMOVE_ANIM_DICT(Local_54.f_3);
		}
		func_464(&Local_54, iLocal_113);
		MISC::SET_BIT(&uLocal_78, 6);
	}
	if (iLocal_111 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_111);
		AUDIO::RELEASE_SOUND_ID(iLocal_111);
		iLocal_111 = -1;
	}
	bVar1 = true;
	if (MISC::ARE_STRINGS_EQUAL(Local_54.f_0, "random@peyote@generic"))
	{
		bVar1 = AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Taxi_Vomit", false, -1);
	}
	STREAMING::REQUEST_ANIM_DICT(Local_54.f_3);
	STREAMING::REQUEST_ANIM_DICT(Local_54.f_0);
	STREAMING::REQUEST_MODEL(iVar0);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(uLocal_78, 7))
		{
			__LIB_0__::func_646();
			if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PeyoteEndIn") && MISC::GET_GAME_TIMER() > (iLocal_92 - 500))
			{
				if (!bLocal_84)
				{
					func_461();
				}
			}
			if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PeyoteEndIn") && MISC::GET_GAME_TIMER() > iLocal_92)
			{
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					HUD::CLEAR_HELP(true);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_98[iLocal_114 /*46*/][bLocal_115 /*3*/], true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_99[iLocal_114 /*16*/][bLocal_115]);
					func_460(&iLocal_297);
					GRAPHICS::PROCGRASS_DISABLE_CULLSPHERE(1);
					STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_98[iLocal_114 /*46*/][bLocal_115 /*3*/], 1000f, 0);
					iLocal_77 = MISC::GET_GAME_TIMER();
				}
				else if (((((STREAMING::IS_NEW_LOAD_SCENE_LOADED() || (MISC::GET_GAME_TIMER() - iLocal_77) > 12000) && STREAMING::HAS_MODEL_LOADED(iVar0)) && STREAMING::HAS_ANIM_DICT_LOADED(Local_54.f_0)) && STREAMING::HAS_ANIM_DICT_LOADED(Local_54.f_3)) && bVar1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), iVar0);
					MISC::SET_PLAYER_IS_IN_ANIMAL_FORM(false);
					STREAMING::NEW_LOAD_SCENE_STOP();
					MISC::CLEAR_AREA(Local_98[iLocal_114 /*46*/][bLocal_115 /*3*/], 30f, true, false, false, false);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_REST", false);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", false);
					func_63(&Global_103950, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iLocal_116, false);
					iVar2 = __LIB_11__::func_762();
					iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(5, 30);
					__LIB_13__::func_827(&iVar2, 0, iVar3, 0, 0, 0, 0);
					CLOCK::SET_CLOCK_TIME(__LIB_0__::func_199(iVar2), __LIB_0__::func_198(iVar2), __LIB_0__::func_615(iVar2));
					CLOCK::SET_CLOCK_DATE(__LIB_0__::func_614(iVar2), __LIB_0__::func_553(iVar2), __LIB_0__::func_214(iVar2));
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_98[iLocal_114 /*46*/][bLocal_115 /*3*/], true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_99[iLocal_114 /*16*/][bLocal_115]);
					MISC::SET_BIT(&(uLocal_108[iLocal_114]), bLocal_115);
					MISC::SET_BIT(&uLocal_78, 7);
					MISC::CLEAR_BIT(&uLocal_78, 8);
					MISC::CLEAR_BIT(&uLocal_78, 9);
					MISC::CLEAR_BIT(&uLocal_78, 1);
				}
			}
		}
		else if (!BitTest(uLocal_78, 8))
		{
			__LIB_0__::func_646();
			if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
			{
				CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_117);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				__LIB_0__::func_734(0, 0);
				func_643();
				if (iLocal_124 != 0 && !ENTITY::DOES_ENTITY_EXIST(iLocal_124))
				{
					__LIB_0__::func_364(24, 1);
					Global_77137[24] = 0;
				}
				AUDIO::STOP_AUDIO_SCENES();
				func_29();
				func_28(0);
				AUDIO::TRIGGER_MUSIC_EVENT("PEYOTE_TRIPS_STOP");
				if (!STREAMING::HAS_ANIM_DICT_LOADED(Local_54.f_0))
				{
				}
				Var4 = { Local_98[iLocal_114 /*46*/][bLocal_115 /*3*/] };
				if (iLocal_114 != 2)
				{
					Var4.f_2 = (Var4.f_2 + 0.25f);
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
				}
				Var5 = { 0f, 0f, Local_99[iLocal_114 /*16*/][bLocal_115] };
				iLocal_88 = PED::CREATE_SYNCHRONIZED_SCENE(Var4, Var5, 2);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_88, true);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_88, false);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_88, Local_54.f_0, Local_54.f_1, 1000f, -4f, 0, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				func_27();
				GRAPHICS::ANIMPOSTFX_STOP("PeyoteEndIn");
				GRAPHICS::ANIMPOSTFX_PLAY("PeyoteEndOut", 0, false);
				MISC::SET_BIT(&uLocal_78, 8);
			}
		}
		else if (!BitTest(uLocal_78, 9))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), Local_54.f_0, Local_54.f_1, 3))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("interrupt")))
				{
					if (!Global_113386.f_10049.f_144)
					{
						iLocal_118 = 1;
						iLocal_119 = 1;
					}
					MISC::SET_BIT(&uLocal_78, 10);
					MISC::SET_BIT(&uLocal_78, 9);
				}
			}
			else
			{
				MISC::SET_BIT(&uLocal_78, 9);
			}
		}
		else if (BitTest(uLocal_78, 10))
		{
			if (BitTest(uLocal_78, 11))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
				{
					MISC::CLEAR_BIT(&uLocal_78, 10);
				}
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_88) == 1f)
			{
				if (!BitTest(uLocal_78, 11))
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), Local_54.f_3, Local_54.f_4, 4f, -4f, -1, 0, 0f, false, false, false);
					MISC::SET_BIT(&uLocal_78, 11);
				}
			}
			if (func_26())
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), -0.5f, true);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), Local_54.f_3, Local_54.f_4, 3))
				{
					ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), Local_54.f_4, Local_54.f_3, -0.5f);
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				MISC::CLEAR_BIT(&uLocal_78, 10);
			}
		}
		else
		{
			STREAMING::REMOVE_ANIM_DICT(Local_54.f_0);
			STREAMING::REMOVE_ANIM_DICT(Local_54.f_3);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_54.f_5)))
			{
				STREAMING::REMOVE_ANIM_DICT(&(Local_54.f_5));
				StringCopy(&(Local_54.f_5), "", 64);
				StringCopy(&(Local_54.f_21), "", 16);
			}
			MISC::CLEAR_BIT(&uLocal_78, 6);
			MISC::CLEAR_BIT(&uLocal_78, 7);
			MISC::CLEAR_BIT(&uLocal_78, 8);
			MISC::CLEAR_BIT(&uLocal_78, 9);
			MISC::CLEAR_BIT(&uLocal_78, 11);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			TASK::RESET_SCENARIO_TYPES_ENABLED();
			if (iLocal_117 == 4)
			{
				CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_117);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			iLocal_81 = -1;
			sLocal_292 = "";
			__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
			STATS::STAT_ENABLE_STATS_TRACKING();
			return 1;
		}
	}
	return 0;
}

int func_26()//Position - 0x1389
{
	if (((((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 32 /*INPUT_MOVE_UP_ONLY*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 33 /*INPUT_MOVE_DOWN_ONLY*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 34 /*INPUT_MOVE_LEFT_ONLY*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 35 /*INPUT_MOVE_RIGHT_ONLY*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 45 /*INPUT_RELOAD*/))
	{
		return 1;
	}
	return 0;
}

void func_27()//Position - 0x13E1
{
	bLocal_84 = true;
	iLocal_85 = 0;
	iLocal_89 = MISC::GET_GAME_TIMER() + 500;
	iLocal_90 = 255;
}

void func_28(bool bParam0)//Position - 0x13FC
{
	if (bParam0)
	{
		MISC::SET_FADE_OUT_AFTER_DEATH(false);
		MISC::SET_FADE_OUT_AFTER_ARREST(false);
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		MISC::SET_RESTART_COORD_OVERRIDE(Local_98[iLocal_114 /*46*/][bLocal_115 /*3*/], Local_99[iLocal_114 /*16*/][bLocal_115]);
	}
	else
	{
		MISC::SET_FADE_OUT_AFTER_DEATH(true);
		MISC::SET_FADE_OUT_AFTER_ARREST(true);
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(true);
		MISC::CLEAR_RESTART_COORD_OVERRIDE();
		MISC::IGNORE_NEXT_RESTART(false);
		MISC::PAUSE_DEATH_ARREST_RESTART(false);
	}
}

void func_29()//Position - 0x1458
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 157, true);
		ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 200, 0);
	}
	PED::SET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), 200);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 189, false);
	PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
	PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
	PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f, true);
	__LIB_14__::func_804(0);
	Global_113330 = 0;
	Global_31963 = 0;
	__LIB_0__::func_424(0);
	HUD::DISPLAY_RADAR(true);
	if (!__LIB_0__::func_39(14))
	{
		HUD::THEFEED_RESUME();
	}
	PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), true);
	MISC::SET_STUNT_JUMPS_CAN_TRIGGER(true);
	MISC::WATER_OVERRIDE_SET_STRENGTH(0f);
	__LIB_12__::func_849(0, 0);
	__LIB_12__::func_849(1, 0);
	__LIB_12__::func_849(2, 0);
	__LIB_12__::func_849(3, 0);
	__LIB_12__::func_849(4, 0);
	__LIB_12__::func_849(5, 0);
	__LIB_12__::func_849(6, 0);
	__LIB_12__::func_849(7, 0);
	__LIB_12__::func_849(8, 0);
	__LIB_12__::func_849(9, 0);
	__LIB_12__::func_849(10, 0);
	__LIB_12__::func_849(11, 0);
	__LIB_12__::func_849(12, 0);
	__LIB_12__::func_849(13, 0);
	__LIB_12__::func_849(14, 0);
	__LIB_12__::func_849(15, 0);
	__LIB_12__::func_849(16, 0);
	__LIB_12__::func_849(17, 0);
	__LIB_12__::func_849(18, 0);
	__LIB_12__::func_849(19, 0);
	__LIB_12__::func_849(20, 0);
	Global_100480 = 0;
	if (Global_32115 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Global_32115);
	}
	__LIB_15__::func_306(0);
	NETWORK::NETWORK_BLOCK_INVITES(false);
}

void func_63(var uParam0, bool bParam1)//Position - 0x2168
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	CLOCK::SET_CLOCK_TIME(__LIB_0__::func_199(uParam0->f_1), __LIB_0__::func_198(uParam0->f_1), __LIB_0__::func_615(uParam0->f_1));
	CLOCK::SET_CLOCK_DATE(__LIB_0__::func_614(uParam0->f_1), __LIB_0__::func_553(uParam0->f_1), __LIB_0__::func_214(uParam0->f_1));
	MISC::SET_CURR_WEATHER_STATE(uParam0->f_6, uParam0->f_7, uParam0->f_8);
	if (!bParam1)
	{
		if (!func_386(*uParam0))
		{
			return;
		}
		__LIB_15__::func_986(uParam0);
		__LIB_16__::func_840(uParam0);
		STATS::STAT_SET_INT(joaat("SP0_SPECIAL_ABILITY"), uParam0->f_2341[0], true);
		STATS::STAT_SET_INT(joaat("SP1_SPECIAL_ABILITY"), uParam0->f_2341[1], true);
		STATS::STAT_SET_INT(joaat("SP2_SPECIAL_ABILITY"), uParam0->f_2341[2], true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::UPDATE_SPECIAL_ABILITY_FROM_STAT(PLAYER::PLAYER_ID(), 0);
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 34)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_14141[iVar1 /*104*/])) && (iVar1 <= 20 || iVar1 >= 24))
			{
				if (Global_113386.f_14141[iVar1 /*104*/].f_18.f_3 == 31)
				{
				}
				__LIB_8__::func_909(&iVar0, Global_113386.f_14141[iVar1 /*104*/].f_18, Global_113386.f_14141[iVar1 /*104*/].f_18.f_1, Global_113386.f_14141[iVar1 /*104*/].f_18.f_2, Global_113386.f_14141[iVar1 /*104*/].f_18.f_3, (Global_113386.f_14141[iVar1 /*104*/].f_18.f_4 - 1), Global_113386.f_14141[iVar1 /*104*/].f_18.f_5);
				if (__LIB_11__::func_761(iVar0, uParam0->f_1))
				{
					__LIB_12__::func_518(&(Global_113386.f_14141[iVar1 /*104*/]), 1);
					__LIB_16__::func_839(&(Global_113386.f_14141[iVar1 /*104*/]));
				}
			}
			iVar1++;
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		iVar2 = 0;
		while (iVar2 < 3)
		{
			Global_113386.f_2363.f_539.f_2407[0 /*295*/][iVar2 /*98*/] = { uParam0->f_25[0 /*295*/][iVar2 /*98*/] };
			Global_113386.f_2363.f_539.f_2407[1 /*295*/][iVar2 /*98*/] = { uParam0->f_25[1 /*295*/][iVar2 /*98*/] };
			if (Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 != uParam0->f_9[iVar2])
			{
				while (Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 != uParam0->f_9[iVar2] && iVar3 < 11)
				{
					__LIB_16__::func_831(iVar2);
					iVar3++;
				}
			}
			iVar5 = (Global_60328_SPN_TOTAL_CASH[iVar2] - uParam0->f_13[iVar2]);
			if (iVar5 != 0)
			{
				Global_60328_SPN_TOTAL_CASH[iVar2] = uParam0->f_13[iVar2];
				__LIB_0__::saveTotalCashToStatsByCharacterIndex(iVar2);
			}
			iVar4 = 0;
			while (iVar4 <= 3)
			{
				Global_113386.f_2363.f_493[iVar2 /*15*/][iVar4] = uParam0->f_2838[iVar2 /*15*/][iVar4];
				Global_113386.f_2363.f_493[iVar2 /*15*/].f_5[iVar4] = uParam0->f_2838[iVar2 /*15*/].f_5[iVar4];
				Global_113386.f_2363.f_493[iVar2 /*15*/].f_10[iVar4] = uParam0->f_2838[iVar2 /*15*/].f_10[iVar4];
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 <= 2)
			{
				Global_113386.f_2363[iVar2 /*164*/][iVar4] = uParam0->f_2345[iVar2 /*164*/][iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_4[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_4[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_8[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_8[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_12[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_12[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_16[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_16[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_20[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_20[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_24[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_24[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_28[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_28[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_32[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_32[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_36[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_36[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_40[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_40[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_44[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_44[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_48[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_48[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_52[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_52[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_56[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_56[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_60[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_60[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_64[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_64[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_68[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_68[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_72[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_72[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_76[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_76[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_80[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_80[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_84[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_84[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_88[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_88[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_92[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_92[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_96[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_96[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_100[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_100[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_104[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_104[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_108[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_108[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_112[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_112[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_116[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_116[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_120[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_120[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_124[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_124[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_128[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_128[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_132[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_132[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_136[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_136[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_140[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_140[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_144[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_144[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_148[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_148[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_152[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_152[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_156[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_156[iVar4];
				Global_113386.f_2363[iVar2 /*164*/].f_160[iVar4] = uParam0->f_2345[iVar2 /*164*/].f_160[iVar4];
				iVar4++;
			}
			iVar2++;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_0__::func_374(__LIB_13__::func_716(PLAYER::PLAYER_PED_ID())))
			{
				func_97(PLAYER::PLAYER_PED_ID(), &(Global_100166[__LIB_13__::func_716(PLAYER::PLAYER_PED_ID()) /*65*/]), 0, 0, 1, 0);
			}
			__LIB_15__::func_977(PLAYER::PLAYER_PED_ID());
			__LIB_15__::func_980(PLAYER::PLAYER_PED_ID(), 1, 0);
			PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
			PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), uParam0->f_2, false))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), uParam0->f_2, true);
			}
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0);
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
			}
			__LIB_15__::func_976(PLAYER::PLAYER_PED_ID());
		}
	}
	__LIB_0__::func_342(0);
	__LIB_0__::func_342(1);
	__LIB_0__::func_342(2);
	__LIB_0__::func_342(3);
	__LIB_0__::func_342(4);
	__LIB_0__::func_342(5);
	__LIB_0__::func_342(6);
	__LIB_0__::func_342(7);
	__LIB_0__::func_342(8);
	func_64(&(Global_113386.f_2363.f_539), -1);
}

void func_64(var uParam0, int iParam1)//Position - 0x2A70
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113386.f_18533[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_66(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				__LIB_0__::func_17(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_97831[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_9 = 0f;
				Global_97831[iVar0 /*29*/].f_12 = 0f;
				Global_97831[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_10 = 0f;
				Global_97831[iVar0 /*29*/].f_13 = 0f;
				Global_97831[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_11 = 0f;
				Global_97831[iVar0 /*29*/].f_14 = 0f;
				Global_97831[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_26 = 0f;
				Global_97831[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_27 = 0f;
				Global_97831[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

int func_66(int iParam0, var uParam1, float fParam2)//Position - 0x2C44
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		case 9:
			return func_66(8, uParam1, fParam2);
			break;
		case 10:
			return func_66(8, uParam1, fParam2);
			break;
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.3408f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		default:
			break;
	}
	return 0;
}

void func_97(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x8C5C
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
		iVar0 = __LIB_13__::func_716(iParam0);
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
		if (__LIB_0__::func_374(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_374(iParam0, iVar1, &iVar2, 0))
			{
				func_359(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_300(iParam0, iVar1, &iVar2))
			{
				func_359(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_297(iParam0);
			__LIB_0__::func_413(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_0__::func_413(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__::func_206(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_0__::func_463(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_0__::func_462(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_108(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_108(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_108(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_0__::func_463(iVar9);
			}
			else
			{
				iVar9 = __LIB_0__::func_462(iVar9);
			}
			__LIB_0__::func_413(753, iVar9, Global_78127, 1, 0);
			__LIB_0__::func_413(2053, iVar9, Global_78127, 1, 0);
			__LIB_0__::func_513(161, 1, -1, 1);
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

int func_108(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x99CA
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
		Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
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
			func_245(iVar5, iParam1, iParam2, 1);
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
			uVar14 = { __LIB_0__::func_459(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 10, 0, -1) };
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
						func_245(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, uVar14[iVar0], -1) };
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
								uVar15 = { __LIB_0__::func_466(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_245(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_108(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_245(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_235(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_108(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_0__::func_662();
			if (iVar17 != -1)
			{
				__LIB_0__::func_661(iVar17, 0, iParam10);
			}
			func_229(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_0__::func_466(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_245(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_12__::func_901(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_108(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_245(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_108(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_220(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_108(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_108(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar23 = __LIB_0__::func_350(iParam0, 11);
				iVar24 = __LIB_0__::func_350(iParam0, 8);
				iVar25 = __LIB_0__::func_350(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_205(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_0__::func_350(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_217(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_12__::func_901(iParam0, iVar5, 11, iVar23, 3, 0);
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
							iVar22 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
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
							if (__LIB_0__::func_282(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_0__::func_350(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__::func_205(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_108(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_0__::func_280(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__::func_205(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__::func_205(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_0__::func_280(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_3__::func_523(iParam0, iParam2);
							iVar31 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_108(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_108(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_0__::func_452(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__::func_205(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_108(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_3__::func_523(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_0__::func_357(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__::func_205(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__::func_278(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_205(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_205(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_0__::func_451(iVar5, __LIB_0__::func_350(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_0__::func_451(iVar5, __LIB_0__::func_350(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_108(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_108(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_108(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_3__::func_520(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_229(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_217(iVar5, func_235(iParam0, 8, -1), iParam2, func_235(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__::func_369(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__::func_369(2160, iParam10, 0);
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
						iVar42 = __LIB_0__::func_463(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_0__::func_462(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_160(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_217(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_12__::func_901(iParam0, iVar5, 11, iVar44, 3, 0);
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
						iVar47 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__::func_282(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_229(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_217(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_0__::func_350(iParam0, 7);
				if (!__LIB_0__::func_547(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_0__::func_369(2100, iParam10, 0);
				iVar53 = __LIB_0__::func_369(2101, iParam10, 0);
				iVar54 = __LIB_0__::func_369(2102, iParam10, 0);
				fVar55 = __LIB_0__::func_412(135, iParam10);
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
				__LIB_3__::func_345(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_0__::func_350(iParam0, 11);
			iVar58 = __LIB_0__::func_350(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_108(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_108(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_217(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_217(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_12__::func_901(iParam0, iVar5, 11, iVar57, 3, 0);
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
						iVar61 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__::func_282(iVar5, iVar60, iVar62) == iVar59)
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
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_108(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_217(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_108(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__::func_248(iParam0))
				{
					iVar63 = __LIB_0__::func_442(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_132(iParam0, 9, iVar63))
						{
							func_108(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_108(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_108(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__::func_369(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_0__::func_533(iParam0, iVar64), __LIB_0__::func_242(iParam0, iVar64), __LIB_0__::func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_0__::func_533(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__::func_242(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_0__::func_440(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_108(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_235(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_235(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_108(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_108(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar74 = __LIB_0__::func_350(iParam0, 4);
				iVar75 = __LIB_0__::func_350(iParam0, 6);
				if (__LIB_0__::func_238(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_0__::func_439(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_108(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_108(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_0__::func_237(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_108(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_108(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__::func_238(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_0__::func_237(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_108(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_108(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_0__::func_439(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_108(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_108(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_220(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_108(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_108(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_109(iParam0, &uVar4))
		{
			func_108(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_108(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_108(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_108(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_235(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_0__::func_204(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_0__::func_204(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_108(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_109(int iParam0, var uParam1)//Position - 0xB874
{
	int iVar0;
	int iVar1;
	*uParam1 = func_235(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_0__::func_369(754, Global_78127, 0) != -99 && __LIB_0__::func_438())
	{
		if (__LIB_0__::func_236() == 4)
		{
			return 1;
		}
		if (__LIB_0__::func_369(754, Global_78127, 0) == 0 && __LIB_0__::func_369(755, Global_78127, 0) == 0)
		{
			if (__LIB_0__::func_351(161, Global_78127))
			{
				if (__LIB_0__::func_369(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_0__::func_369(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_0__::func_369(754, Global_78127, 0);
		iVar1 = __LIB_0__::func_369(755, Global_78127, 0);
		if (!func_132(iParam0, iVar1, iVar0))
		{
			if (__LIB_0__::func_351(161, Global_78127))
			{
				*uParam1 = __LIB_0__::func_369(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_0__::func_369(753, Global_78127, 0);
			}
			__LIB_0__::func_413(754, -99, Global_78127, 1, 0);
			__LIB_0__::func_413(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_132(int iParam0, int iParam1, int iParam2)//Position - 0xFB9C
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
	Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_0__::func_459(iVar0, iParam2) };
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
				if (!func_132(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_0__::func_466(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_132(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_132(iParam0, 14, iVar6))
										{
											if (!__LIB_0__::func_551(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_0__::func_350(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_0__::func_551(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
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
			if (__LIB_0__::func_369(1759, Global_78127, 0) != uVar8[10])
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
		uVar11 = { __LIB_0__::func_466(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_132(iParam0, 14, uVar11[iVar10]))
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
				if (__LIB_0__::func_240(iVar0, 11, __LIB_0__::func_350(iParam0, 11), -1))
				{
					if (__LIB_0__::func_353(iVar0, 4, iParam2, &uVar18))
					{
						return func_132(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_132(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_160(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x178E5
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_3__::func_346(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_0__::func_450(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_0__::func_661(iVar1, 1, iParam2);
	}
	func_161(iParam0, bParam3, 0, -1);
}

void func_161(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x17932
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
		iVar2 = __LIB_0__::func_276(iParam0);
		bVar3 = func_197(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_188(iParam0, iParam3);
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
			if (__LIB_0__::func_549(iVar6, iVar0))
			{
				if (__LIB_0__::func_445(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_0__::func_674(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_0__::func_549(123, iVar0))
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
					if (__LIB_0__::func_549(iVar10, iVar0))
					{
						if (__LIB_0__::func_674(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_3__::func_348(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__::func_260(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_188(int iParam0, int iParam1)//Position - 0x23558
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
			iVar2 = __LIB_0__::func_369(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_235(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
			iVar2 = __LIB_0__::func_369(1759, -1, 0);
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
				iVar5 = func_235(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
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

int func_197(int iParam0, bool bParam1)//Position - 0x239B6
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_235(iParam0, 11, -1), 0);
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
						if (__LIB_0__::func_549(13, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(14, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(15, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(16, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(71, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(72, -1))
						{
						}
						else if (__LIB_0__::func_536(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_235(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
						iVar5 = func_235(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_235(iParam0, 11, -1), 0);
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
						iVar8 = func_235(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_235(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_235(iParam0, 11, -1), 0);
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
						iVar12 = func_235(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
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

int func_217(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2C846
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
				iVar2 = __LIB_0__::func_205(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__::func_278(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__::func_205(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__::func_278(iVar4);
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
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_217(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
									iVar0 = __LIB_0__::func_204(iParam0, iVar7, 3, 3);
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
				iVar2 = __LIB_0__::func_205(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__::func_278(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__::func_205(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__::func_278(iVar4);
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
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_217(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_0__::func_280(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
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
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
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
									iVar0 = __LIB_0__::func_204(iParam0, iVar12, 3, 4);
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

void func_220(int iParam0)//Position - 0x2DCFB
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
		if (!func_225(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_0__::func_286(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_285(iVar13, 11, -1))
				{
					if (__LIB_0__::func_285(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_284(iVar13, 10, &iVar17, -1))
					{
						if (__LIB_0__::func_285(iVar17, 11, Var15.f_1))
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
			if (__LIB_0__::func_286(iVar9, 1, 0, &iVar19))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar19, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_285(iVar13, 11, -1))
				{
					if (__LIB_0__::func_285(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_284(iVar13, 10, &iVar20, -1))
					{
						if (__LIB_0__::func_285(iVar20, 11, Var15.f_1))
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
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("HAZ_HOOD"), 0) || __LIB_0__::func_283(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_225(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_225(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2E6C5
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_235(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_229(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x310AD
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_297(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_0__::func_280(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_0__::func_350(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_0__::func_350(iParam0, 11);
				if (!__LIB_0__::func_280(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_3__::func_346(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_3__::func_347(iVar0, iParam2, 13) && !__LIB_3__::func_347(iVar0, iParam2, 14)) && !__LIB_3__::func_347(iVar0, iParam2, 15)) && !__LIB_3__::func_347(iVar0, iParam2, 16)) && !__LIB_3__::func_347(iVar0, iParam2, 71)) && !__LIB_3__::func_347(iVar0, iParam2, 72))
				{
					__LIB_3__::func_346(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_0__::func_676(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_0__::func_660(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_0__::func_661(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_235(int iParam0, int iParam1, int iParam2)//Position - 0x3135C
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
				if (func_132(iParam0, iParam1, iVar0))
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
				if (func_132(iParam0, iParam1, iVar1))
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

void func_245(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x340D0
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
		if (Global_78127 != __LIB_0__::getGlobal_1574918() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_0__::func_538(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_0__::func_538(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_0__::func_538(Global_2883588, 2, 1, 1, -1);
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
							__LIB_0__::func_538(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_245(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_245(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_245(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_0__::func_369(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__::func_413(iVar6, iVar7, Global_78127, 1, 0);
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
							func_245(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_245(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_245(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_245(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_245(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_245(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_245(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_245(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_245(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_245(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_245(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_245(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_245(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_245(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_245(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_245(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_245(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_297(int iParam0)//Position - 0x511C7
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_235(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_235(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
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

int func_300(int iParam0, int iParam1, int iParam2)//Position - 0x51539
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_301(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_301(int iParam0, int iParam1, int iParam2)//Position - 0x515C5
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
				if (!func_301(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_301(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_301(iParam0, 14, iVar4))
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
			if (!func_301(iParam0, 14, uVar8[iVar7]))
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

int func_359(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x641D1
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
										func_359(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_359(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_363(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_374(iParam0, iVar10, &iVar4, 1))
							{
								func_359(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_359(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_359(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_359(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_359(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_359(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_359(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_359(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_359(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_359(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_374(iParam0, iVar10, &iVar4, 0))
		{
			func_359(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_300(iParam0, iVar10, &iVar4))
		{
			func_359(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_363(int iParam0, int iParam1, int iParam2)//Position - 0x64B71
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
				if (func_301(iParam0, iParam1, iVar0))
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
				if (func_301(iParam0, iParam1, iVar1))
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

int func_374(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6682E
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_301(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_386(int iParam0)//Position - 0x67611
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	int iVar4;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
		default:
			return 0;
			break;
	}
	iVar4 = __LIB_14__::func_466();
	if (iVar4 != 145)
	{
		Var1 = { Global_113386.f_2363.f_539.f_2300[iVar4 /*3*/] };
		uVar2 = Global_113386.f_2363.f_539.f_2310[iVar4];
		uVar3 = Global_113386.f_2363.f_539.f_2314[iVar4];
	}
	while (!func_387(iVar0, 1))
	{
		SYSTEM::WAIT(0);
	}
	if (iVar4 != 145)
	{
		Global_113386.f_2363.f_539.f_2300[iVar4 /*3*/] = { Var1 };
		Global_113386.f_2363.f_539.f_2310[iVar4] = uVar2;
		Global_113386.f_2363.f_539.f_2314[iVar4] = uVar3;
	}
	return 1;
}

int func_387(int iParam0, bool bParam1)//Position - 0x676ED
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	Global_23011.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = __LIB_0__::func_484(iParam0);
	iVar1 = __LIB_12__::func_894(iVar0);
	if (iVar1 == 0)
	{
		return 1;
	}
	if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), iVar1))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar1);
	if (!STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false))
		{
			iVar3 = -1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 0, false))
		{
			iVar3 = 0;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 1, false))
		{
			iVar3 = 1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 2, false))
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = -1;
		}
	}
	else
	{
		iVar2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_457(&(Global_22965[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_438(&(Global_22965[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	func_390(&Global_22965, 0, 0, 0);
	__LIB_0__::func_649(iParam0);
	return 1;
}

int func_390(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x678AB
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar7;
	var uVar8;
	char* sVar9;
	if (!uParam0->f_39)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID()
	{
	}
	if ((!PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
		if (!bParam2)
		{
			if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if ((PED::IS_PED_RAGDOLL((*uParam0)[uParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*uParam0)[uParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*uParam0)[uParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[uParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = __LIB_14__::func_466();
		if (!uParam0->f_23)
		{
			func_429(iVar0, 0);
		}
		__LIB_13__::func_813(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, true);
		iVar2 = __LIB_0__::func_484(uParam0->f_7);
		func_429((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (__LIB_13__::func_716(PLAYER::PLAYER_PED_ID()))
		{
			case 0:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTime"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTime");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTimeOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTimeOut");
				}
				break;
			case 1:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocus"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocus");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocusOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocusOut");
				}
				break;
			case 2:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMIST"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMIST");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMISTOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMISTOut");
				}
				break;
		}
		if (__LIB_0__::func_374(__LIB_14__::func_466()))
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
			}
		}
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*uParam0)[uParam0->f_7], bParam2, false);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, false);
		}
		if (__LIB_0__::func_540(0) || __LIB_0__::func_540(3))
		{
			if (Global_23011.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (BitTest(Global_91193[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_91193[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_91229[Global_78588.f_109[iVar5 /*4*/] /*34*/]), 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_23011.f_13 = 0;
		uParam0->f_5 = __LIB_0__::func_682(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = __LIB_0__::func_682(iVar2);
		uParam0->f_7 = 4;
		iVar7 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		__LIB_15__::func_974(iVar7);
		PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(iVar7, false, 0);
		if (fVar3 < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((((25f / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) - 100f)) + 100f)), 0);
		}
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
				__LIB_15__::func_974(iVar0);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(iVar0, false, 0);
				PED::SET_PED_STEALTH_MOVEMENT(iVar0, false, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			sVar9 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar8);
			if (!MISC::IS_STRING_NULL(sVar9))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sVar9, SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, false, true);
				}
				PED::DELETE_PED(&iVar0);
			}
		}
		Global_97723 = 1;
		__LIB_0__::func_481(PLAYER::PLAYER_PED_ID());
		__LIB_15__::func_979();
		__LIB_13__::func_799(iVar2);
		__LIB_15__::func_983();
		__LIB_13__::func_822(iVar2);
		__LIB_16__::func_847(__LIB_0__::func_517(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), __LIB_0__::func_425(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), __LIB_0__::func_425(68));
		}
		__LIB_13__::func_818(iVar2, &iVar7);
		if (((__LIB_0__::func_39(0) || __LIB_0__::func_39(3)) || __LIB_0__::func_39(2)) || __LIB_0__::func_39(4))
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, false);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, false);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, true);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, true);
		}
		if (!__LIB_0__::func_477())
		{
			__LIB_16__::func_844();
		}
		Global_97360 = 0;
		return 1;
	}
	else
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}

void func_429(int iParam0, bool bParam1)//Position - 0x6D840
{
	__LIB_15__::func_227(iParam0);
	__LIB_17__::func_471(iParam0, bParam1);
	__LIB_14__::func_631(iParam0);
	__LIB_14__::func_630(iParam0);
	__LIB_14__::func_629(iParam0);
	__LIB_14__::func_628(iParam0);
	__LIB_14__::func_627(iParam0);
}

int func_438(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x6DED4
{
	int iVar0;
	if (__LIB_0__::func_374(iParam1))
	{
		iVar0 = __LIB_12__::func_894(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_13__::func_823(*iParam0, iParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_449(*iParam0);
			__LIB_15__::func_980(*iParam0, 1, 0);
			__LIB_15__::func_977(*iParam0);
			__LIB_15__::func_976(*iParam0);
			func_440(*iParam0, bParam6);
			__LIB_0__::func_405(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_440(int iParam0, bool bParam1)//Position - 0x6DFEC
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_13__::func_804(iVar0))
	{
		__LIB_13__::func_803(iVar0, 0);
		func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_444(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_13__::func_803(iVar0, 0);
			func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_444(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[120] && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122])
			{
				func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_301(iParam0, 3, 169))
					{
						func_359(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_301(iParam0, 12, 6))
			{
				func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_301(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_301(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_301(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_301(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_301(iParam0, 12, 11))
			{
				func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_301(iParam0, 12, 10))
			{
				func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_301(iParam0, 12, 50))
			{
				func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_301(iParam0, 14, 59))
			{
				func_359(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_301(iParam0, 8, 22))
			{
				func_359(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_301(iParam0, 12, 14))
			{
				func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_301(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_301(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_301(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_301(iParam0, 12, 4))
			{
				func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_301(iParam0, 12, 3))
			{
				func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_301(iParam0, 14, 82))
			{
				func_359(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_301(iParam0, 8, 76))
			{
				func_359(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_301(iParam0, 12, 1))
			{
				func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_301(iParam0, 12, 12))
			{
				func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_301(iParam0, 12, 15))
			{
				func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_301(iParam0, 3, 71))
				{
					func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_301(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_301(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_301(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_301(iParam0, 12, 7))
			{
				func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_301(iParam0, 12, 6))
			{
				func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_301(iParam0, 14, 88))
			{
				func_359(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_301(iParam0, 8, 17))
			{
				func_359(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_301(iParam0, 12, 11))
			{
				func_359(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_444(int iParam0, int iParam1)//Position - 0x6E77D
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_13__::func_716(iParam0);
		if (__LIB_0__::func_374(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_363(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_97(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_15__::func_225(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_15__::func_983();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
				{
					Global_113386.f_2363.f_539[iVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_407(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					if (iVar0 == 0)
					{
						if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121])
						{
							Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

void func_449(int iParam0)//Position - 0x6EC72
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_0__::func_374(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__::func_407(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_13__::func_802(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_407(iParam0);
				}
			}
		}
		func_97(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_363(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_450(__LIB_12__::func_894(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_363(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_363(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_450(__LIB_12__::func_894(0), 3, 70, 1, 0, 0, 0);
					func_450(__LIB_12__::func_894(0), 3, 71, 1, 0, 0, 0);
					func_450(__LIB_12__::func_894(0), 3, 72, 1, 0, 0, 0);
					func_450(__LIB_12__::func_894(0), 3, 73, 1, 0, 0, 0);
					func_450(__LIB_12__::func_894(0), 3, 74, 1, 0, 0, 0);
					func_450(__LIB_12__::func_894(0), 3, 75, 1, 0, 0, 0);
					func_450(__LIB_12__::func_894(0), 4, 41, 1, 0, 0, 0);
					func_450(__LIB_12__::func_894(0), 4, 42, 1, 0, 0, 0);
					func_450(__LIB_12__::func_894(0), 4, 43, 1, 0, 0, 0);
					func_450(__LIB_12__::func_894(0), 4, 44, 1, 0, 0, 0);
					func_450(__LIB_12__::func_894(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_363(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_97(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_450(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x6EECF
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_453(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_453(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x6F08A
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
			if (iParam1 == 12)
			{
				iVar0 = 1;
				if (iParam0 == joaat("Player_Zero"))
				{
					if (iParam2 == 31)
					{
						iVar0 = 0;
					}
				}
				if (iVar0 == 1)
				{
					uVar3 = { __LIB_0__::func_459(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_453(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_453(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_15__::func_950(iParam0, 14, uVar4[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
		}
		if (iParam4 == 1 && bParam3 == 1)
		{
			switch (iParam0)
			{
				case joaat("Player_Zero"):
					break;
				case joaat("Player_One"):
					switch (iParam1)
					{
						case 3:
							if (iParam2 >= 176 && iParam2 <= 191)
							{
								iVar5 = (227 + Global_78130[1 /*14*/].f_4);
								func_453(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_453(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_453(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_453(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_453(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_453(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_453(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_453(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_453(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_453(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_453(iParam0, 14, iVar5, 1, 0);
							}
							break;
					}
					break;
				case joaat("Player_Two"):
					switch (iParam1)
					{
						case 4:
							if (iParam2 >= 81 && iParam2 <= 90)
							{
								iVar5 = (94 + Global_78130[1 /*14*/].f_4);
								func_453(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_453(iParam0, 14, 17, 1, 0);
							}
							break;
					}
					break;
				}
		}
		return 1;
	}
	return 0;
}

int func_457(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x6F66F
{
	int iVar0;
	if (__LIB_0__::func_374(iParam1))
	{
		iVar0 = __LIB_12__::func_894(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
			{
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, true, true);
				__LIB_13__::func_823(*iParam0, iParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_449(*iParam0);
				__LIB_15__::func_980(*iParam0, 1, 0);
				__LIB_15__::func_977(*iParam0);
				__LIB_15__::func_976(*iParam0);
				func_440(*iParam0, bParam6);
				__LIB_0__::func_405(*iParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_460(int iParam0)//Position - 0x6F768
{
	if (*iParam0 > -1 && *iParam0 < 8)
	{
		GRAPHICS::PROCGRASS_DISABLE_CULLSPHERE(*iParam0);
		*iParam0 = -1;
	}
}

void func_461()//Position - 0x6F78E
{
	bLocal_84 = true;
	iLocal_85 = 1;
	iLocal_89 = MISC::GET_GAME_TIMER() + 500;
	iLocal_90 = 0;
}

void func_464(var uParam0, int iParam1)//Position - 0x6F7C6
{
	uParam0->f_1 = "wakeup";
	switch (iParam1)
	{
		case 0:
			*uParam0 = "random@peyote@deer";
			break;
		case 1:
			*uParam0 = "random@peyote@cat";
			break;
		case 2:
			*uParam0 = "random@peyote@deer";
			break;
		case 3:
			*uParam0 = "random@peyote@dog";
			break;
		case 4:
			*uParam0 = "random@peyote@deer";
			break;
		case 5:
			*uParam0 = "random@peyote@dog";
			break;
		case 6:
			*uParam0 = "random@peyote@cat";
			break;
		case 7:
			*uParam0 = "random@peyote@deer";
			break;
		case 8:
			*uParam0 = "random@peyote@dog";
			break;
		case 9:
			*uParam0 = "random@peyote@dog";
			break;
		case 10:
			*uParam0 = "random@peyote@rabbit";
			break;
		case 11:
			*uParam0 = "random@peyote@dog";
			break;
		case 12:
			*uParam0 = "random@peyote@dog";
			break;
		case 13:
			*uParam0 = "random@peyote@dog";
			break;
		case 14:
			*uParam0 = "random@peyote@dog";
			break;
		case 15:
			*uParam0 = "random@peyote@bird";
			break;
		case 16:
			*uParam0 = "random@peyote@bird";
			break;
		case 17:
			*uParam0 = "random@peyote@bird";
			break;
		case 18:
			*uParam0 = "random@peyote@chicken";
			break;
		case 19:
			*uParam0 = "random@peyote@bird";
			break;
		case 20:
			*uParam0 = "random@peyote@bird";
			break;
		case 21:
			*uParam0 = "random@peyote@fish";
			break;
		case 22:
			*uParam0 = "random@peyote@fish";
			break;
		case 23:
			*uParam0 = "random@peyote@fish";
			break;
		case 24:
			*uParam0 = "random@peyote@fish";
			break;
		case 25:
			*uParam0 = "random@peyote@fish";
			break;
		case 26:
			*uParam0 = "random@peyote@fish";
			break;
		case 27:
			*uParam0 = "random@peyote@generic";
			break;
		default:
			break;
	}
	if (iLocal_114 == 2)
	{
		Local_54.f_3 = "SWIMMING@BASE";
		Local_54.f_4 = "DIVE_IDLE";
	}
	else
	{
		Local_54.f_4 = "idle_intro";
		switch (iLocal_83)
		{
			case 0:
				Local_54.f_3 = "move_p_m_zero";
				break;
			case 1:
				Local_54.f_3 = "move_p_m_one";
				break;
			case 2:
				Local_54.f_3 = "move_p_m_two";
				break;
			default:
				break;
			}
	}
}

void func_470()//Position - 0x6FC76
{
	GRAPHICS::ANIMPOSTFX_PLAY("PeyoteEndIn", 0, false);
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PEYOTE_TRANSITION_OUT_SCENE"))
	{
		AUDIO::START_AUDIO_SCENE("PEYOTE_TRANSITION_OUT_SCENE");
	}
	if (AUDIO::LOAD_STREAM("PEYOTE_TRANSITION_OUT", 0))
	{
		AUDIO::PLAY_STREAM_FRONTEND();
	}
	iLocal_92 = MISC::GET_GAME_TIMER() + 2500;
	__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
	__LIB_0__::func_638();
}

void func_486()//Position - 0x703FC
{
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/))
	{
		func_487(&(Local_54.f_5), &(Local_54.f_21), &iLocal_293, iLocal_83, &iLocal_111, &(Local_58.f_28));
	}
}

void func_487(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5)//Position - 0x70426
{
	if ((((!__LIB_0__::func_75() && !AUDIO::IS_ANIMAL_VOCALIZATION_PLAYING(PLAYER::PLAYER_PED_ID())) && (MISC::IS_STRING_NULL_OR_EMPTY(sParam0) || !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sParam0, sParam1, 3))) && MISC::GET_GAME_TIMER() > *iParam2) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
		switch (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			case joaat("A_C_Fish"):
			case joaat("A_C_SharkHammer"):
			case joaat("A_C_SharkTiger"):
			case joaat("A_C_Stingray"):
				switch (iParam3)
				{
					case 0:
						AUDIO::PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE("DROWNING", "WAVELOAD_PAIN_MICHAEL", 0f, 0f, 0f, "SPEECH_PARAMS_FORCE_FRONTEND");
						break;
					case 1:
						AUDIO::PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE("DROWNING", "WAVELOAD_PAIN_FRANKLIN", 0f, 0f, 0f, "SPEECH_PARAMS_FORCE_FRONTEND");
						break;
					case 2:
						AUDIO::PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE("DROWNING", "WAVELOAD_PAIN_TREVOR", 0f, 0f, 0f, "SPEECH_PARAMS_FORCE_FRONTEND");
						break;
					default:
						AUDIO::PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE("DROWNING", "WAVELOAD_PAIN_MICHAEL", 0f, 0f, 0f, "SPEECH_PARAMS_FORCE_FRONTEND");
						break;
				}
				break;
			case joaat("IG_Orleans"):
				if (*iParam4 == -1)
				{
					*iParam4 = AUDIO::GET_SOUND_ID();
				}
				AUDIO::PLAY_SOUND_FROM_ENTITY(*iParam4, sParam5, PLAYER::PLAYER_PED_ID(), 0, false, 0);
				break;
			default:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				{
					AUDIO::PLAY_ANIMAL_VOCALIZATION(PLAYER::PLAYER_PED_ID(), -1, sParam5);
				}
				break;
		}
		AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sParam0, sParam1, 8f, -4f, -1, 32, 0f, false, false, false);
			*iParam2 = MISC::GET_GAME_TIMER() + 500;
		}
	}
}

void func_493()//Position - 0x708BE
{
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_124) && !ENTITY::IS_ENTITY_DEAD(iLocal_124, false)) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_124, -1, false))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_124, Local_365, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_124, fLocal_366);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_124, 5f);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_124);
		iLocal_124 = 0;
		Local_367 = { 0f, 0f, 0f };
		fLocal_368 = 0f;
		Local_365 = { 0f, 0f, 0f };
		fLocal_366 = 0f;
	}
}

void func_494()//Position - 0x70937
{
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_124) && !ENTITY::IS_ENTITY_DEAD(iLocal_124, false)) && __LIB_31__::func_649(iLocal_124))
	{
		__LIB_17__::func_201(iLocal_124, Local_367, fLocal_368, 24, 0);
		Local_367 = { 0f, 0f, 0f };
		fLocal_368 = 0f;
		Local_365 = { 0f, 0f, 0f };
		fLocal_366 = 0f;
	}
}

void func_530()//Position - 0x76C03
{
	struct<6> Var0;
	switch (iLocal_114)
	{
		case 2:
			if (iLocal_113 == 26 || iLocal_113 == 21)
			{
				StringCopy(&Var0, "PEY_W" /* GXT: Hold ~INPUT_CONTEXT~ to end the hallucination.~n~Tap ~INPUT_SPRINT~ to swim faster. */, 24);
				func_532(Var0);
			}
			else if (iLocal_113 == 22)
			{
				func_531("PEY_GENERAL" /* GXT: Hold ~INPUT_CONTEXT~ to end the hallucination. */);
			}
			else
			{
				StringCopy(&Var0, "PEY_W_A" /* GXT: Hold ~INPUT_CONTEXT~ to end the hallucination.~n~Tap ~INPUT_SPRINT~ to swim faster.~n~Press ~INPUT_ATTACK~ to attack. */, 24);
				func_532(Var0);
			}
			break;
		case 3:
			StringCopy(&Var0, "PEY_L_A" /* GXT: Hold ~INPUT_CONTEXT~ to end the hallucination.~n~Tap ~INPUT_SPRINT~ to sprint.~n~Press ~INPUT_ATTACK~ to attack. */, 24);
			func_532(Var0);
			break;
		case 0:
			if ((iLocal_113 == 2 || iLocal_113 == 1) || iLocal_113 == 10)
			{
				StringCopy(&Var0, "PEY_L" /* GXT: Hold ~INPUT_CONTEXT~ to end the hallucination.~n~Tap ~INPUT_SPRINT~ to sprint. */, 24);
				func_532(Var0);
			}
			else
			{
				StringCopy(&Var0, "PEY_L_A" /* GXT: Hold ~INPUT_CONTEXT~ to end the hallucination.~n~Tap ~INPUT_SPRINT~ to sprint.~n~Press ~INPUT_ATTACK~ to attack. */, 24);
				func_532(Var0);
			}
			break;
		default:
			switch (iLocal_113)
			{
				case 18:
				case 2:
					StringCopy(&Var0, "PEY_L" /* GXT: Hold ~INPUT_CONTEXT~ to end the hallucination.~n~Tap ~INPUT_SPRINT~ to sprint. */, 24);
					func_532(Var0);
					break;
				case 15:
				case 16:
				case 17:
				case 19:
				case 20:
					func_531("PEY_HIGH" /* GXT: Hold ~INPUT_CONTEXT~ to end the hallucination.~n~Press ~INPUT_SPRINT~ to take off.~n~Press ~INPUT_JUMP~ when flying near the ground to land.~n~Press ~INPUT_ATTACK~ for aerial attack. */);
					break;
				default:
					StringCopy(&Var0, "PEY_L_A" /* GXT: Hold ~INPUT_CONTEXT~ to end the hallucination.~n~Tap ~INPUT_SPRINT~ to sprint.~n~Press ~INPUT_ATTACK~ to attack. */, 24);
					func_532(Var0);
					break;
			}
			break;
	}
}

void func_531(char* sParam0)//Position - 0x76D3A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, -1);
}

void func_532(struct<3> Param0, char[4] cParam1, char[4] cParam2, char[4] cParam3)//Position - 0x76D50
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		StringConCat(&Param0, "_PC", 24);
	}
	func_531(&Param0);
}

int func_533()//Position - 0x76D6F
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<3> Var3;
	int iVar4;
	char* sVar5;
	int iVar6;
	iVar0 = func_599(iLocal_113);
	STREAMING::REQUEST_MODEL(iVar0);
	if (!BitTest(uLocal_78, 2))
	{
		func_593(&Local_54, func_595(iLocal_114, bLocal_115));
		__LIB_16__::func_819(&(Local_54.f_5), &(Local_54.f_21), iVar0);
		func_591();
		func_590(iLocal_113);
		MISC::SET_BIT(&uLocal_78, 2);
	}
	if (BitTest(uLocal_78, 3))
	{
		HUD::THEFEED_HIDE_THIS_FRAME();
	}
	if (!BitTest(uLocal_78, 3))
	{
		STREAMING::REQUEST_ANIM_DICT(Local_54.f_0);
		STREAMING::REQUEST_MODEL(iLocal_126);
		bVar1 = true;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_54.f_5)))
		{
			STREAMING::REQUEST_ANIM_DICT(&(Local_54.f_5));
			bVar1 = STREAMING::HAS_ANIM_DICT_LOADED(&(Local_54.f_5));
		}
		bVar2 = true;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_54.f_3))
		{
			STREAMING::REQUEST_ANIM_DICT(Local_54.f_3);
			bVar2 = STREAMING::HAS_ANIM_DICT_LOADED(Local_54.f_3);
		}
		if (((((STREAMING::HAS_ANIM_DICT_LOADED(Local_54.f_0) && bVar1) && bVar2) && STREAMING::HAS_MODEL_LOADED(iLocal_126)) && AUDIO::LOAD_STREAM("PEYOTE_TRANSITION_IN", 0)) && func_586())
		{
			func_581(iLocal_114, bLocal_115);
			__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
			FIRE::STOP_FIRE_IN_RANGE(Local_93[iLocal_114 /*46*/][bLocal_115 /*3*/], 10f);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2f, true, false, false, false);
			}
			HUD::DISPLAY_RADAR(false);
			HUD::THEFEED_PAUSE();
			iLocal_88 = PED::CREATE_SYNCHRONIZED_SCENE(Local_93[iLocal_114 /*46*/][bLocal_115 /*3*/], Local_94[iLocal_114 /*46*/][bLocal_115 /*3*/], 2);
			iLocal_86 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_88, false);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_88, false);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_88, Local_54.f_0, Local_54.f_1, 1000f, -1000f, 0, 0, 1000f, 0);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_86, iLocal_88, Local_54.f_2, Local_54.f_0);
			PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_88, 0.1f);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PEYOTE_TRANSITION_IN_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("PEYOTE_TRANSITION_IN_SCENE");
			}
			if (AUDIO::LOAD_STREAM("PEYOTE_TRANSITION_IN", 0))
			{
				AUDIO::PLAY_STREAM_FRONTEND();
			}
			MISC::SET_BIT(&uLocal_78, 3);
		}
	}
	else if (!BitTest(uLocal_78, 4))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("Create_Peyote")))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_123))
			{
				iLocal_123 = OBJECT::CREATE_OBJECT(iLocal_126, Local_93[iLocal_114 /*46*/][bLocal_115 /*3*/], true, true, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_126);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_123))
		{
			if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_123))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_123, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("Destroy_Peyote")))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_123))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_123))
				{
					ENTITY::DETACH_ENTITY(iLocal_123, true, true);
					OBJECT::DELETE_OBJECT(&iLocal_123);
					GRAPHICS::ANIMPOSTFX_PLAY("PeyoteIn", 0, false);
					iLocal_92 = MISC::GET_GAME_TIMER() + 10000;
					MISC::SET_BIT(&uLocal_78, 4);
				}
			}
		}
	}
	if (BitTest(uLocal_78, 4))
	{
		if (!BitTest(uLocal_78, 5))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("Ragdoll")))
			{
				PED::SET_PED_TO_RAGDOLL(PLAYER::PLAYER_PED_ID(), 4000, 5000, 1, true, true, false);
				PED::CREATE_NM_MESSAGE(true, 34);
				PED::GIVE_PED_NM_MESSAGE(PLAYER::PLAYER_PED_ID());
				MISC::SET_BIT(&uLocal_78, 5);
			}
		}
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PeyoteIn") && MISC::GET_GAME_TIMER() > (iLocal_92 - 9750))
		{
			if ((iLocal_114 == 1 && bLocal_115 == 3) || (iLocal_114 == 0 && bLocal_115 == 2))
			{
			}
			else
			{
				func_579();
			}
		}
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PeyoteIn") && MISC::GET_GAME_TIMER() > (iLocal_92 - 500))
		{
			if (!bLocal_84)
			{
				func_461();
			}
		}
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PeyoteIn") && MISC::GET_GAME_TIMER() > iLocal_92)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_88))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						STREAMING::REMOVE_ANIM_DICT(Local_54.f_0);
					}
					if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_95[iLocal_114 /*46*/][bLocal_115 /*3*/], true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_96[iLocal_114 /*16*/][bLocal_115]);
						STREAMING::NEW_LOAD_SCENE_START(Local_95[iLocal_114 /*46*/][bLocal_115 /*3*/], 0f, 0f, Local_96[iLocal_114 /*16*/][bLocal_115], 1000f, 0);
						iLocal_77 = MISC::GET_GAME_TIMER();
					}
					else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || (MISC::GET_GAME_TIMER() - iLocal_77) > 12000)
					{
						if (!__LIB_0__::func_718())
						{
							if (iLocal_76 == -1)
							{
								iLocal_76 = MISC::GET_GAME_TIMER();
								if (iLocal_363)
								{
									func_97(PLAYER::PLAYER_PED_ID(), &uLocal_298, 0, 0, 1, 0);
									iLocal_363 = 0;
								}
								if (iLocal_364)
								{
									PED::SET_PED_SCUBA_GEAR_VARIATION(PLAYER::PLAYER_PED_ID());
									iLocal_364 = 0;
								}
								func_543("animal_controller", 1, 0);
								iLocal_116 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
								iLocal_117 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(Local_97[iLocal_114 /*16*/][bLocal_115], 1f);
								PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), iVar0);
								PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
								func_542(&Var3, iLocal_113);
								iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, Var3.f_2);
								func_540(&iVar4);
								PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, Var3.f_0), 0);
								PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, Var3.f_1), 0);
								PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 0, iVar4, 0);
								MISC::SET_PLAYER_IS_IN_ANIMAL_FORM(true);
								func_539(func_599(iLocal_113), 1, 1);
								func_28(1);
								MISC::CLEAR_AREA(Local_95[iLocal_114 /*46*/][bLocal_115 /*3*/], 15f, true, false, false, false);
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), false);
									ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
								}
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_95[iLocal_114 /*46*/][bLocal_115 /*3*/], true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_96[iLocal_114 /*16*/][bLocal_115]);
								func_537(&iLocal_297, Local_95[iLocal_114 /*46*/][bLocal_115 /*3*/], 2.5f);
								CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
								CAM::DESTROY_CAM(iLocal_86, false);
								MISC::SET_BIT(&uLocal_78, 1);
								iLocal_295 = -1;
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_76) > 250)
							{
								if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
								{
									STREAMING::NEW_LOAD_SCENE_STOP();
									if (iLocal_117 == 2 || func_536(iLocal_113) == 1)
									{
										CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(2);
									}
									else
									{
										CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(1);
									}
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(Local_97[iLocal_114 /*16*/][bLocal_115], 1f);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
									STREAMING::REMOVE_ANIM_DICT(Local_54.f_0);
									MISC::CLEAR_BIT(&uLocal_78, 2);
									MISC::CLEAR_BIT(&uLocal_78, 3);
									MISC::CLEAR_BIT(&uLocal_78, 4);
									MISC::CLEAR_BIT(&uLocal_78, 5);
									AUDIO::SET_ANIMAL_MOOD(PLAYER::PLAYER_PED_ID(), 1);
									func_535(iLocal_113);
									if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_54.f_3))
									{
										TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), Local_54.f_3, Local_54.f_4, 1000f, -8f, -1, 0, 0f, false, false, false);
									}
									func_27();
									GRAPHICS::ANIMPOSTFX_STOP("PeyoteIn");
									GRAPHICS::ANIMPOSTFX_PLAY("PeyoteOut", 0, false);
									AUDIO::TRIGGER_MUSIC_EVENT("PEYOTE_TRIPS_START");
									if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_292))
									{
										switch (iLocal_83)
										{
											case 0:
												sVar5 = "MICHAEL";
												iVar6 = 0;
												break;
											case 1:
												sVar5 = "FRANKLIN";
												iVar6 = 1;
												break;
											case 2:
												sVar5 = "TREVOR";
												iVar6 = 1;
												break;
										}
										__LIB_0__::func_222(&uLocal_127, iVar6, PLAYER::PLAYER_PED_ID(), sVar5, 0, 0);
									}
									else
									{
										MISC::SET_BIT(&uLocal_78, 12);
									}
									iLocal_76 = -1;
									__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
									if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
									{
										PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), true);
										ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
									}
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

void func_535(int iParam0)//Position - 0x775AE
{
	switch (func_536(iParam0))
	{
		case 0:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PLAYER_AS_ANIMAL_LAND_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("PLAYER_AS_ANIMAL_LAND_SCENE");
			}
			break;
		case 1:
			if (iParam0 != 18)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PLAYER_AS_ANIMAL_AIR_SCENE"))
				{
					AUDIO::START_AUDIO_SCENE("PLAYER_AS_ANIMAL_AIR_SCENE");
				}
			}
			else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PLAYER_AS_ANIMAL_LAND_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("PLAYER_AS_ANIMAL_LAND_SCENE");
			}
			break;
		case 2:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PLAYER_AS_ANIMAL_WATER_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("PLAYER_AS_ANIMAL_WATER_SCENE");
			}
			break;
		case 3:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PLAYER_AS_SASQUATCH_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("PLAYER_AS_SASQUATCH_SCENE");
			}
			break;
	}
}

int func_536(int iParam0)//Position - 0x77662
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 28:
			return 0;
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			return 1;
			break;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 29:
			return 2;
			break;
		case 27:
			return 3;
			break;
	}
	return -1;
}

void func_537(int iParam0, struct<3> Param1, float fParam2)//Position - 0x77742
{
	var uVar0;
	if (__LIB_12__::func_851(&uVar0))
	{
		*iParam0 = uVar0;
		GRAPHICS::PROCGRASS_ENABLE_CULLSPHERE(*iParam0, Param1, fParam2);
	}
}

void func_539(int iParam0, bool bParam1, bool bParam2)//Position - 0x7779F
{
	if (!__LIB_16__::func_796(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(false);
		if (!__LIB_0__::func_39(14))
		{
			HUD::THEFEED_PAUSE();
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false);
		if (iParam0 != joaat("IG_Orleans"))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false);
			ENTITY::SET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), 200);
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 200, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 189, true);
			PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 100f, true);
			PED::SET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), 5000);
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 5000, 0);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 157, false);
		if (bParam2)
		{
			switch (iParam0)
			{
				case joaat("A_C_MtLion"):
				case joaat("A_C_Boar"):
				case joaat("A_C_Cow"):
				case joaat("A_C_Coyote"):
				case joaat("IG_Orleans"):
					Global_32115 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(83 /*EVENT_SHOCKING_DANGEROUS_ANIMAL*/, PLAYER::PLAYER_PED_ID(), 0f);
					if (Global_32115 == 0)
					{
					}
					break;
				}
			}
	}
	__LIB_14__::func_804(1);
	Global_113330 = 1;
	Global_31963 = 1;
	__LIB_0__::func_424(1);
	MISC::SET_STUNT_JUMPS_CAN_TRIGGER(false);
	MISC::WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE(0f);
	MISC::WATER_OVERRIDE_SET_SHOREWAVEMINAMPLITUDE(0f);
	MISC::WATER_OVERRIDE_SET_SHOREWAVEMAXAMPLITUDE(0f);
	MISC::WATER_OVERRIDE_SET_OCEANNOISEMINAMPLITUDE(0f);
	MISC::WATER_OVERRIDE_SET_OCEANWAVEAMPLITUDE(0f);
	MISC::WATER_OVERRIDE_SET_OCEANWAVEMINAMPLITUDE(0f);
	MISC::WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE(0f);
	MISC::WATER_OVERRIDE_SET_RIPPLEBUMPINESS(0f);
	MISC::WATER_OVERRIDE_SET_RIPPLEMINBUMPINESS(0f);
	MISC::WATER_OVERRIDE_SET_RIPPLEMAXBUMPINESS(0f);
	MISC::WATER_OVERRIDE_SET_RIPPLEDISTURB(0f);
	MISC::WATER_OVERRIDE_SET_STRENGTH(0.1f);
	if (iParam0 != joaat("IG_Orleans"))
	{
		__LIB_12__::func_849(0, 1);
		__LIB_12__::func_849(1, 1);
		__LIB_12__::func_849(2, 1);
		__LIB_12__::func_849(3, 1);
		__LIB_12__::func_849(4, 1);
		__LIB_12__::func_849(5, 1);
		__LIB_12__::func_849(6, 1);
		__LIB_12__::func_849(7, 1);
		__LIB_12__::func_849(8, 1);
		__LIB_12__::func_849(9, 1);
		__LIB_12__::func_849(10, 1);
		__LIB_12__::func_849(11, 1);
		__LIB_12__::func_849(12, 1);
		__LIB_12__::func_849(13, 1);
		__LIB_12__::func_849(14, 1);
		__LIB_12__::func_849(15, 1);
		__LIB_12__::func_849(16, 1);
		__LIB_12__::func_849(17, 1);
		__LIB_12__::func_849(18, 1);
		__LIB_12__::func_849(19, 1);
		__LIB_12__::func_849(20, 1);
	}
	__LIB_15__::func_306(1);
	NETWORK::NETWORK_BLOCK_INVITES(true);
}

void func_540(int iParam0)//Position - 0x7798B
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	if (iLocal_113 == 12)
	{
		if (*iParam0 == 0)
		{
			sVar0 = "";
			sVar1 = "";
			bVar2 = 30;
			switch (iLocal_83)
			{
				case 0:
					sVar0 = "ANIML_MCHOP";
					sVar1 = "ANIML_MCHOP2";
					if (BitTest(Global_32218, bVar2))
					{
						sLocal_292 = sVar1;
						MISC::CLEAR_BIT(&Global_32218, bVar2);
					}
					else if (BitTest(Global_32221, bVar2))
					{
						sLocal_292 = sVar0;
						MISC::CLEAR_BIT(&Global_32221, bVar2);
					}
					else if (__LIB_0__::func_680())
					{
						sLocal_292 = sVar0;
						MISC::SET_BIT(&Global_32218, bVar2);
					}
					else
					{
						sLocal_292 = sVar1;
						MISC::SET_BIT(&Global_32221, bVar2);
					}
					break;
				case 1:
					sVar0 = "ANIML_FCHOP";
					sVar1 = "ANIML_FCHOP2";
					if (BitTest(Global_32217, bVar2))
					{
						sLocal_292 = sVar1;
						MISC::CLEAR_BIT(&Global_32217, bVar2);
					}
					else if (BitTest(Global_32220, bVar2))
					{
						sLocal_292 = sVar0;
						MISC::CLEAR_BIT(&Global_32220, bVar2);
					}
					else if (__LIB_0__::func_680())
					{
						sLocal_292 = sVar0;
						MISC::SET_BIT(&Global_32217, bVar2);
					}
					else
					{
						sLocal_292 = sVar1;
						MISC::SET_BIT(&Global_32220, bVar2);
					}
					break;
				case 2:
					sVar0 = "ANIML_TCHOP";
					sVar1 = "ANIML_TCHOP2";
					if (BitTest(Global_32219, bVar2))
					{
						sLocal_292 = sVar1;
						MISC::CLEAR_BIT(&Global_32219, bVar2);
					}
					else if (BitTest(Global_32222, bVar2))
					{
						sLocal_292 = sVar0;
						MISC::CLEAR_BIT(&Global_32222, bVar2);
					}
					else if (__LIB_0__::func_680())
					{
						sLocal_292 = sVar0;
						MISC::SET_BIT(&Global_32219, bVar2);
					}
					else
					{
						sLocal_292 = sVar1;
						MISC::SET_BIT(&Global_32222, bVar2);
					}
					break;
				}
			}
	}
	if (iLocal_113 == 14)
	{
		if ((MISC::ARE_STRINGS_EQUAL(sLocal_292, "ANIML_FWST") || MISC::ARE_STRINGS_EQUAL(sLocal_292, "ANIML_FWST2")) || MISC::ARE_STRINGS_EQUAL(sLocal_292, "ANIML_TWST2"))
		{
			*iParam0 = 0;
		}
	}
}

void func_542(var uParam0, int iParam1)//Position - 0x77B65
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 4;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		case 1:
			*uParam0 = 3;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		case 2:
			*uParam0 = 4;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		case 3:
			*uParam0 = 5;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		case 4:
			*uParam0 = 3;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 1, 0, 0);
			break;
		case 5:
			*uParam0 = 3;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		case 6:
			*uParam0 = 3;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		case 7:
			*uParam0 = 3;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		case 8:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		case 9:
			*uParam0 = 1;
			uParam0->f_1 = 6;
			uParam0->f_2 = 4;
			break;
		case 10:
			*uParam0 = 4;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		case 11:
			*uParam0 = 4;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		case 12:
			*uParam0 = 1;
			uParam0->f_1 = 4;
			uParam0->f_2 = 3;
			break;
		case 13:
			*uParam0 = 3;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		case 14:
			*uParam0 = 1;
			uParam0->f_1 = 6;
			uParam0->f_2 = 3;
			break;
		case 15:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		case 16:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		case 17:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		case 18:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		case 19:
			*uParam0 = 1;
			uParam0->f_1 = 4;
			uParam0->f_2 = 1;
			break;
		case 20:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		case 21:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		case 22:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		case 23:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		case 24:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		case 25:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		case 26:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		case 27:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		default:
			break;
	}
}

void func_543(char[4] cParam0, int iParam1, int iParam2)//Position - 0x77E08
{
	if (Global_100441 != 10 && Global_100441 != 9)
	{
		StringCopy(&Global_103942, cParam0, 32);
		func_545(&Global_103950, cParam0, 0, "Start", iParam1, iParam2);
		__LIB_0__::func_757();
		Global_94619 = 0;
	}
}

void func_545(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x78AE3
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_14__::func_466();
	uParam0->f_1 = __LIB_11__::func_762();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_15__::func_985(&(uParam0->f_2884), 0);
		__LIB_14__::func_630(PLAYER::PLAYER_PED_ID());
		__LIB_17__::func_471(PLAYER::PLAYER_PED_ID(), 0);
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
		if (iVar1 == __LIB_14__::func_466())
		{
			__LIB_15__::func_225(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
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
		uParam0->f_13[iVar1] = Global_60328_SPN_TOTAL_CASH[iVar1];
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
		__LIB_17__::func_95(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__::func_384(&(uParam0->f_2980));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

void func_579()//Position - 0x7C7A7
{
	float fVar0;
	int iVar1;
	float fVar2;
	fVar0 = 1f;
	iVar1 = 100;
	fVar2 = 4f;
	if (CAM::DOES_CAM_EXIST(iLocal_86))
	{
		if (!CAM::IS_CAM_SHAKING(iLocal_86))
		{
			fLocal_87 = fVar0;
			CAM::SHAKE_CAM(iLocal_86, "DRUNK_SHAKE", fLocal_87);
			iLocal_91 = (MISC::GET_GAME_TIMER() + iVar1);
		}
		else
		{
			fLocal_87 = __LIB_0__::func_331((fLocal_87 + (0.4f * SYSTEM::TIMESTEP())), fVar0, fVar2);
			if (fLocal_87 < fVar2 && MISC::GET_GAME_TIMER() > iLocal_91)
			{
				CAM::SET_CAM_SHAKE_AMPLITUDE(iLocal_86, fLocal_87);
				iLocal_91 = (MISC::GET_GAME_TIMER() + iVar1);
			}
		}
	}
}

void func_581(int iParam0, bool bParam1)//Position - 0x7C84C
{
	struct<3> Var0;
	float fVar1;
	iLocal_124 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_124) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_124, -1, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_124, false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_124, false, true);
			if (!func_585(iLocal_124))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_124, false, true, false);
			}
			if ((!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_124)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_124))) && !func_584(iLocal_124))
			{
				if (iParam0 == 1 && VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_124)))
				{
					Var0 = { func_583(bParam1) };
					fVar1 = func_582(bParam1);
				}
				else
				{
					Var0 = { Local_100[iParam0 /*46*/][bParam1 /*3*/] };
					fVar1 = Local_101[iParam0 /*16*/][bParam1];
				}
				MISC::CLEAR_AREA(Var0, 9f, true, false, false, false);
				Local_365 = { ENTITY::GET_ENTITY_COORDS(iLocal_124, true) };
				fLocal_366 = ENTITY::GET_ENTITY_HEADING(iLocal_124);
				ENTITY::SET_ENTITY_COORDS(iLocal_124, Var0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_124, fVar1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_124, 5f);
				if (!__LIB_31__::func_649(iLocal_124))
				{
					__LIB_17__::func_201(iLocal_124, Var0, fVar1, 24, 0);
					Local_365 = { 0f, 0f, 0f };
					fLocal_366 = 0f;
				}
				else
				{
					Local_367 = { Var0 };
					fLocal_368 = fVar1;
				}
			}
			else
			{
				__LIB_17__::func_201(iLocal_124, ENTITY::GET_ENTITY_COORDS(iLocal_124, true), ENTITY::GET_ENTITY_HEADING(iLocal_124), 24, 0);
			}
		}
	}
}

float func_582(int iParam0)//Position - 0x7C9B4
{
	switch (iParam0)
	{
		case 0:
			return 189.2918f;
			break;
		case 1:
			return 299.4451f;
			break;
		case 2:
			return 288.5849f;
			break;
		case 3:
			return 207.4062f;
			break;
		case 4:
			return 214.5423f;
			break;
		case 5:
			return 150.8355f;
			break;
	}
	return 0f;
}

Vector3 func_583(int iParam0)//Position - 0x7CA2A
{
	switch (iParam0)
	{
		case 0:
			return -124.688f, 426.3544f, 112.4759f;
			break;
		case 1:
			return -1349.7454f, -1071.8394f, 10.4666f;
			break;
		case 2:
			return 1495.2583f, 6032.542f, 308.7726f;
			break;
		case 3:
			return 506.5558f, 5533.214f, 776.3751f;
			break;
		case 4:
			return 3293.0806f, -146.4574f, 15.0023f;
			break;
		case 5:
			return -1001.4104f, 4512.1934f, 158.1028f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_584(int iParam0)//Position - 0x7CADE
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar0 == joaat("submersible2") || iVar0 == joaat("submersible"))
	{
		return 1;
	}
	return 0;
}

int func_585(int iParam0)//Position - 0x7CB0C
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar0 == joaat("dodo"))
	{
		return 1;
	}
	return 0;
}

int func_586()//Position - 0x7CB2B
{
	int iVar0;
	if (!iLocal_364 && func_589())
	{
		iLocal_364 = 1;
		PED::CLEAR_PED_SCUBA_GEAR_VARIATION(PLAYER::PLAYER_PED_ID());
	}
	else if ((!iLocal_364 && !iLocal_363) && __LIB_16__::func_373(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_363 = 1;
		__LIB_15__::func_225(PLAYER::PLAYER_PED_ID(), &uLocal_298, 1, -1);
		iVar0 = 410065/*func_359*/;
		func_587(PLAYER::PLAYER_PED_ID(), &iVar0);
	}
	else if ((!iLocal_363 && !iLocal_364) || PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	return 0;
}

int func_587(int iParam0, int iParam1)//Position - 0x7CBB7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		iVar2 = iVar1;
		iVar4 = __LIB_0__::func_453(iParam0, iVar2);
		if (__LIB_0__::func_233(iVar5, 14, iVar4, -1))
		{
			iVar6 = __LIB_0__::func_279(iVar5, 14, iVar1);
			Stack.Push(iParam0);
			Stack.Push(14);
			Stack.Push(iVar6);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*iParam1);
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		iVar3 = iVar0;
		if ((iVar3 != 12 && iVar3 != 13) && iVar3 != 14)
		{
			iVar4 = __LIB_0__::func_350(iParam0, iVar3);
			if (__LIB_0__::func_233(iVar5, iVar3, iVar4, -1))
			{
				iVar6 = __LIB_0__::func_279(iVar5, iVar3, -1);
				Stack.Push(iParam0);
				Stack.Push(iVar3);
				Stack.Push(iVar6);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(*iParam1);
			}
		}
		iVar0++;
	}
	return 0;
}

int func_589()//Position - 0x7CD6A
{
	switch (iLocal_83)
	{
		case 0:
			if (func_301(PLAYER::PLAYER_PED_ID(), 8, 22))
			{
				return 1;
			}
			break;
		case 1:
			if (func_301(PLAYER::PLAYER_PED_ID(), 8, 76))
			{
				return 1;
			}
			break;
		case 2:
			if (func_301(PLAYER::PLAYER_PED_ID(), 8, 17))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_590(int iParam0)//Position - 0x7CDCB
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	bVar0 = iParam0;
	sVar1 = "";
	sVar2 = "";
	switch (iLocal_83)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					sVar1 = "ANIML_MBOAR";
					sVar2 = "ANIML_MBOAR2";
					break;
				case 1:
					sVar1 = "ANIML_MCAT";
					sVar2 = "ANIML_MCAT2";
					break;
				case 2:
					sVar1 = "ANIML_MCOW";
					sVar2 = "";
					break;
				case 3:
					sVar1 = "ANIML_MCYT";
					sVar2 = "ANIML_MCYT2";
					break;
				case 4:
					sVar1 = "ANIML_MDEER";
					sVar2 = "ANIML_MDEER2";
					break;
				case 5:
					sVar1 = "ANIML_MHSK";
					sVar2 = "ANIML_MHSK2";
					break;
				case 6:
					sVar1 = "ANIML_MLION";
					sVar2 = "ANIML_MLION2";
					break;
				case 7:
					sVar1 = "ANIML_MPIG";
					sVar2 = "ANIML_MPIG2";
					break;
				case 8:
					sVar1 = "ANIML_MPDL";
					sVar2 = "ANIML_MPDL2";
					break;
				case 9:
					sVar1 = "ANIML_MPUG";
					sVar2 = "ANIML_MPUG2";
					break;
				case 10:
					sVar1 = "ANIML_MBUN";
					sVar2 = "ANIML_MBUN2";
					break;
				case 11:
					sVar1 = "ANIML_MRET";
					sVar2 = "ANIML_MRET2";
					break;
				case 12:
					sVar1 = "ANIML_MRTW";
					sVar2 = "ANIML_MRTW2";
					break;
				case 13:
					sVar1 = "ANIML_MSPD";
					sVar2 = "ANIML_MSPD2";
					break;
				case 14:
					sVar1 = "ANIML_MWST";
					sVar2 = "ANIML_MWST2";
					break;
				case 15:
					sVar1 = "ANIML_MHWK";
					sVar2 = "ANIML_MHWK2";
					break;
				case 16:
					sVar1 = "ANIML_MCMT";
					sVar2 = "ANIML_MCMT2";
					break;
				case 17:
					sVar1 = "ANIML_MCROW";
					sVar2 = "ANIML_MCROW2";
					break;
				case 18:
					sVar1 = "ANIML_MHEN";
					sVar2 = "ANIML_MHEN2";
					break;
				case 19:
					sVar1 = "ANIML_MPGN";
					sVar2 = "ANIML_MPGN2";
					break;
				case 20:
					sVar1 = "ANIML_MGUL";
					sVar2 = "ANIML_MGUL2";
					break;
				case 21:
					sVar1 = "ANIML_MDOL";
					sVar2 = "ANIML_MDOL2";
					break;
				case 22:
					sVar1 = "ANIML_MFISH";
					sVar2 = "ANIML_MFISH2";
					break;
				case 23:
					sVar1 = "ANIML_MKILL";
					sVar2 = "ANIML_MKILL2";
					break;
				case 24:
					sVar1 = "ANIML_MHSHK";
					sVar2 = "ANIML_MHSHK2";
					break;
				case 25:
					sVar1 = "ANIML_MTSHK";
					sVar2 = "ANIML_MTSHK2";
					break;
				case 26:
					sVar1 = "ANIML_MRAY";
					sVar2 = "ANIML_MRAY2";
					break;
				case 27:
					sVar1 = "ANIML_MGE";
					sVar2 = "";
					break;
				case 28:
					sVar1 = "";
					sVar2 = "";
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					sVar1 = "ANIML_FBOAR";
					sVar2 = "ANIML_FBOAR2";
					break;
				case 1:
					sVar1 = "ANIML_FCAT";
					sVar2 = "ANIML_FCAT2";
					break;
				case 2:
					sVar1 = "ANIML_FCOW";
					sVar2 = "ANIML_FCOW2";
					break;
				case 3:
					sVar1 = "ANIML_FCYT";
					sVar2 = "ANIML_FCYT2";
					break;
				case 4:
					sVar1 = "ANIML_FDEER";
					sVar2 = "ANIML_FDEER2";
					break;
				case 5:
					sVar1 = "ANIML_FHSK";
					sVar2 = "ANIML_FHSK2";
					break;
				case 6:
					sVar1 = "ANIML_FLION";
					sVar2 = "ANIML_FLION2";
					break;
				case 7:
					sVar1 = "ANIML_FPIG";
					sVar2 = "ANIML_FPIG2";
					break;
				case 8:
					sVar1 = "ANIML_FPDL";
					sVar2 = "ANIML_FPDL2";
					break;
				case 9:
					sVar1 = "ANIML_FPUG";
					sVar2 = "ANIML_FPUG2";
					break;
				case 10:
					sVar1 = "ANIML_FBUN";
					sVar2 = "ANIML_FBUN2";
					break;
				case 11:
					sVar1 = "ANIML_FRET";
					sVar2 = "ANIML_FRET2";
					break;
				case 12:
					sVar1 = "ANIML_FRTW";
					sVar2 = "ANIML_FRTW2";
					break;
				case 13:
					sVar1 = "ANIML_FSPD";
					sVar2 = "ANIML_FSPD2";
					break;
				case 14:
					sVar1 = "ANIML_FWST";
					sVar2 = "ANIML_FWST2";
					break;
				case 15:
					sVar1 = "ANIML_FHWK";
					sVar2 = "ANIML_FHWK2";
					break;
				case 16:
					sVar1 = "ANIML_FCMT";
					sVar2 = "ANIML_FCMT2";
					break;
				case 17:
					sVar1 = "ANIML_FCROW";
					sVar2 = "ANIML_FCROW2";
					break;
				case 18:
					sVar1 = "ANIML_FHEN";
					sVar2 = "ANIML_FHEN2";
					break;
				case 19:
					sVar1 = "ANIML_FPGN";
					sVar2 = "ANIML_FPGN2";
					break;
				case 20:
					sVar1 = "ANIML_FGUL";
					sVar2 = "ANIML_FGUL2";
					break;
				case 21:
					sVar1 = "ANIML_FDOL";
					sVar2 = "ANIML_FDOL2";
					break;
				case 22:
					sVar1 = "ANIML_FFISH";
					sVar2 = "ANIML_FFISH2";
					break;
				case 23:
					sVar1 = "ANIML_FKILL";
					sVar2 = "";
					break;
				case 24:
					sVar1 = "ANIML_FHSHK";
					sVar2 = "ANIML_FHSHK2";
					break;
				case 25:
					sVar1 = "ANIML_TSHK";
					sVar2 = "ANIML_TSHK2";
					break;
				case 26:
					sVar1 = "ANIML_FRAY";
					sVar2 = "ANIML_FRAY2";
					break;
				case 27:
					sVar1 = "";
					sVar2 = "";
					break;
				case 28:
					sVar1 = "";
					sVar2 = "";
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					sVar1 = "ANIML_TBOAR";
					sVar2 = "ANIML_TBOAR2";
					break;
				case 1:
					sVar1 = "ANIML_TCAT";
					sVar2 = "ANIML_TCAT2";
					break;
				case 2:
					sVar1 = "ANIML_TCOW";
					sVar2 = "";
					break;
				case 3:
					sVar1 = "ANIML_TCYT";
					sVar2 = "ANIML_TCYT2";
					break;
				case 4:
					sVar1 = "ANIML_TDEER";
					sVar2 = "ANIML_TDEER2";
					break;
				case 5:
					sVar1 = "ANIML_THSK";
					sVar2 = "ANIML_THSK2";
					break;
				case 6:
					sVar1 = "ANIML_TLION";
					sVar2 = "ANIML_TLION2";
					break;
				case 7:
					sVar1 = "ANIML_TPIG";
					sVar2 = "ANIML_TPIG2";
					break;
				case 8:
					sVar1 = "ANIML_TPDL";
					sVar2 = "ANIML_TPDL2";
					break;
				case 9:
					sVar1 = "ANIML_TPUG";
					sVar2 = "ANIML_TPUG2";
					break;
				case 10:
					sVar1 = "ANIML_TBUN";
					sVar2 = "ANIML_TBUN2";
					break;
				case 11:
					sVar1 = "ANIML_TRET";
					sVar2 = "ANIML_TRET2";
					break;
				case 12:
					sVar1 = "ANIML_TRTW1";
					sVar2 = "ANIML_TRTW2";
					break;
				case 13:
					sVar1 = "ANIML_TSPD";
					sVar2 = "ANIML_TSPD2";
					break;
				case 14:
					sVar1 = "ANIML_TWST";
					sVar2 = "ANIML_TWST2";
					break;
				case 15:
					sVar1 = "ANIML_THWK";
					sVar2 = "ANIML_THWK2";
					break;
				case 16:
					sVar1 = "ANIML_TCMT";
					sVar2 = "ANIML_TCMT2";
					break;
				case 17:
					sVar1 = "ANIML_TCROW";
					sVar2 = "ANIML_TCROW2";
					break;
				case 18:
					sVar1 = "ANIML_THEN";
					sVar2 = "ANIML_THEN2";
					break;
				case 19:
					sVar1 = "ANIML_TPGN";
					sVar2 = "ANIML_TPGN2";
					break;
				case 20:
					sVar1 = "ANIML_TGUL";
					sVar2 = "ANIML_TGUL2";
					break;
				case 21:
					sVar1 = "ANIML_TDOL";
					sVar2 = "ANIML_TDOL2";
					break;
				case 22:
					sVar1 = "ANIML_TFISH";
					sVar2 = "ANIML_TFISH2";
					break;
				case 23:
					sVar1 = "ANIML_TKILL";
					sVar2 = "ANIML_TKILL2";
					break;
				case 24:
					sVar1 = "ANIML_HSHK";
					sVar2 = "ANIML_HSHK2";
					break;
				case 25:
					sVar1 = "ANIML_TTSHK";
					sVar2 = "ANIML_TTSHK2";
					break;
				case 26:
					sVar1 = "ANIML_TRAY";
					sVar2 = "ANIML_TRAY2";
					break;
				case 27:
					sVar1 = "";
					sVar2 = "";
					break;
				case 28:
					sVar1 = "";
					sVar2 = "";
					break;
			}
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		sLocal_292 = "";
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		sLocal_292 = sVar1;
	}
	else
	{
		switch (iLocal_83)
		{
			case 0:
				if (BitTest(Global_32218, bVar0))
				{
					sLocal_292 = sVar2;
					MISC::CLEAR_BIT(&Global_32218, bVar0);
				}
				else if (BitTest(Global_32221, bVar0))
				{
					sLocal_292 = sVar1;
					MISC::CLEAR_BIT(&Global_32221, bVar0);
				}
				else if (__LIB_0__::func_680())
				{
					sLocal_292 = sVar1;
					MISC::SET_BIT(&Global_32218, bVar0);
				}
				else
				{
					sLocal_292 = sVar2;
					MISC::SET_BIT(&Global_32221, bVar0);
				}
				break;
			case 1:
				if (BitTest(Global_32217, bVar0))
				{
					sLocal_292 = sVar2;
					MISC::CLEAR_BIT(&Global_32217, bVar0);
				}
				else if (BitTest(Global_32220, bVar0))
				{
					sLocal_292 = sVar1;
					MISC::CLEAR_BIT(&Global_32220, bVar0);
				}
				else if (__LIB_0__::func_680())
				{
					sLocal_292 = sVar1;
					MISC::SET_BIT(&Global_32217, bVar0);
				}
				else
				{
					sLocal_292 = sVar2;
					MISC::SET_BIT(&Global_32220, bVar0);
				}
				break;
			case 2:
				if (BitTest(Global_32219, bVar0))
				{
					sLocal_292 = sVar2;
					MISC::CLEAR_BIT(&Global_32219, bVar0);
				}
				else if (BitTest(Global_32222, bVar0))
				{
					sLocal_292 = sVar1;
					MISC::CLEAR_BIT(&Global_32222, bVar0);
				}
				else if (__LIB_0__::func_680())
				{
					sLocal_292 = sVar1;
					MISC::SET_BIT(&Global_32219, bVar0);
				}
				else
				{
					sLocal_292 = sVar2;
					MISC::SET_BIT(&Global_32222, bVar0);
				}
				break;
			}
	}
}

void func_591()//Position - 0x7D70F
{
	switch (iLocal_113)
	{
		case 0:
			Local_54.f_3 = "creatures@boar@amb@peyote@enter";
			break;
		case 1:
			Local_54.f_3 = "creatures@cat@amb@peyote@enter";
			break;
		case 2:
			Local_54.f_3 = "creatures@cow@amb@peyote@enter";
			break;
		case 3:
			Local_54.f_3 = "creatures@coyote@amb@peyote@enter";
			break;
		case 4:
			Local_54.f_3 = "creatures@deer@amb@peyote@enter";
			break;
		case 5:
			Local_54.f_3 = "creatures@retriever@amb@peyote@enter";
			break;
		case 6:
			Local_54.f_3 = "creatures@cougar@amb@peyote@enter";
			break;
		case 7:
			Local_54.f_3 = "creatures@pig@amb@peyote@enter";
			break;
		case 8:
			Local_54.f_3 = "creatures@pug@amb@peyote@enter";
			break;
		case 9:
			Local_54.f_3 = "creatures@pug@amb@peyote@enter";
			break;
		case 10:
			Local_54.f_3 = "creatures@rabbit@amb@peyote@enter";
			break;
		case 11:
			Local_54.f_3 = "creatures@retriever@amb@peyote@enter";
			break;
		case 12:
			Local_54.f_3 = "creatures@rottweiler@amb@peyote@enter";
			break;
		case 13:
			Local_54.f_3 = "creatures@rottweiler@amb@peyote@enter";
			break;
		case 14:
			Local_54.f_3 = "creatures@pug@amb@peyote@enter";
			break;
		case 15:
			Local_54.f_3 = "";
			break;
		case 16:
			Local_54.f_3 = "";
			break;
		case 17:
			Local_54.f_3 = "";
			break;
		case 18:
			Local_54.f_3 = "creatures@hen@amb@peyote@enter";
			break;
		case 19:
			Local_54.f_3 = "";
			break;
		case 20:
			Local_54.f_3 = "";
			break;
		case 21:
			Local_54.f_3 = "";
			break;
		case 22:
			Local_54.f_3 = "";
			break;
		case 23:
			Local_54.f_3 = "";
			break;
		case 24:
			Local_54.f_3 = "";
			break;
		case 25:
			Local_54.f_3 = "";
			break;
		case 26:
			Local_54.f_3 = "";
			break;
		case 27:
			Local_54.f_3 = "";
			break;
		default:
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_54.f_3))
	{
		Local_54.f_4 = "enter";
	}
}

void func_593(char* sParam0, int iParam1)//Position - 0x7DAE9
{
	switch (iParam1)
	{
		case joaat("prop_peyote_lowland_01"):
		case joaat("prop_peyote_highland_01"):
		case joaat("prop_peyote_gold_01"):
			*sParam0 = "random@peyote@eat";
			sParam0->f_1 = "eat_peyote";
			break;
		case joaat("prop_peyote_lowland_02"):
		case joaat("prop_peyote_highland_02"):
			*sParam0 = "random@peyote@eat";
			sParam0->f_1 = "eat_peyote_plantpot";
			break;
		case joaat("prop_peyote_water_01"):
			*sParam0 = "random@peyote@eatswimming";
			sParam0->f_1 = "eat_peyote";
			break;
		default:
			break;
	}
	sParam0->f_2 = func_594();
}

char* func_594()//Position - 0x7DB63
{
	char* sVar0;
	sVar0 = "";
	switch (iLocal_114)
	{
		case 0:
			switch (bLocal_115)
			{
				case 0:
				case 3:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
				case 13:
				case 14:
					if (__LIB_0__::func_680())
					{
						sVar0 = "eat_peyote_cam1";
					}
					else
					{
						sVar0 = "eat_peyote_cam2";
					}
					break;
				case 1:
				case 2:
				case 4:
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
					{
						case 0:
							sVar0 = "eat_peyote_cam1";
							break;
						case 1:
							sVar0 = "eat_peyote_cam2";
							break;
						case 2:
							sVar0 = "eat_peyote_cam4";
							break;
					}
					break;
				case 5:
					sVar0 = "eat_peyote_plantpot_cam1";
					break;
			}
			break;
		case 1:
			switch (bLocal_115)
			{
				case 0:
				case 1:
					sVar0 = "eat_peyote_plantpot_cam1";
					break;
				case 2:
				case 5:
					if (__LIB_0__::func_680())
					{
						sVar0 = "eat_peyote_cam1";
					}
					else
					{
						sVar0 = "eat_peyote_cam2";
					}
					break;
				case 3:
				case 4:
					sVar0 = "eat_peyote_cam2";
					break;
			}
			break;
		case 2:
			switch (bLocal_115)
			{
				case 0:
					sVar0 = "eat_peyote_cam2";
					break;
				default:
					sVar0 = "eat_peyote_cam1";
					break;
			}
			break;
		case 3:
			sVar0 = "eat_peyote_cam1";
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
	}
	return sVar0;
}

int func_595(int iParam0, bool bParam1)//Position - 0x7DCEF
{
	switch (iParam0)
	{
		case 0:
			switch (bParam1)
			{
				case 5:
					return joaat("prop_peyote_lowland_02");
					break;
				default:
					return joaat("prop_peyote_lowland_01");
					break;
			}
			break;
		case 1:
			switch (bParam1)
			{
				case 0:
					return joaat("prop_peyote_highland_02");
					break;
				case 1:
					return joaat("prop_peyote_highland_02");
					break;
				default:
					return joaat("prop_peyote_highland_01");
					break;
			}
			break;
		case 2:
			return joaat("prop_peyote_water_01");
			break;
		case 3:
			return joaat("prop_peyote_gold_01");
			break;
	}
	return joaat("prop_peyote_lowland_01");
}

int func_599(int iParam0)//Position - 0x7DE19
{
	switch (iParam0)
	{
		case 0:
			return joaat("A_C_Boar");
			break;
		case 1:
			return joaat("A_C_Cat_01");
			break;
		case 2:
			return joaat("A_C_Cow");
			break;
		case 3:
			return joaat("A_C_Coyote");
			break;
		case 4:
			return joaat("A_C_Deer");
			break;
		case 5:
			return joaat("A_C_Husky");
			break;
		case 6:
			return joaat("A_C_MtLion");
			break;
		case 7:
			return joaat("A_C_Pig");
			break;
		case 8:
			return joaat("A_C_Poodle");
			break;
		case 9:
			return joaat("A_C_Pug");
			break;
		case 10:
			return joaat("A_C_Rabbit_01");
			break;
		case 11:
			return joaat("A_C_Retriever");
			break;
		case 12:
			return joaat("A_C_Rottweiler");
			break;
		case 13:
			return joaat("A_C_shepherd");
			break;
		case 14:
			return joaat("A_C_Westy");
			break;
		case 15:
			return joaat("A_C_Chickenhawk");
			break;
		case 16:
			return joaat("A_C_Cormorant");
			break;
		case 17:
			return joaat("A_C_Crow");
			break;
		case 18:
			return joaat("A_C_Hen");
			break;
		case 19:
			return joaat("A_C_Pigeon");
			break;
		case 20:
			return joaat("A_C_Seagull");
			break;
		case 21:
			return joaat("A_C_Dolphin");
			break;
		case 22:
			return joaat("A_C_Fish");
			break;
		case 23:
			return joaat("A_C_KillerWhale");
			break;
		case 24:
			return joaat("A_C_SharkHammer");
			break;
		case 25:
			return joaat("A_C_SharkTiger");
			break;
		case 26:
			return joaat("A_C_Stingray");
			break;
		case 27:
			return joaat("IG_Orleans");
			break;
	}
	return 0;
}

void func_602()//Position - 0x7E18B
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		bVar1 = false;
		while (bVar1 < func_622(iVar0))
		{
			if (!BitTest(Global_113386.f_10049.f_138[iVar0], bVar1))
			{
				return;
			}
			bVar1++;
		}
		iVar0++;
	}
	Global_113386.f_10049.f_144 = 1;
	func_643();
	__LIB_0__::func_210();
}

void func_615()//Position - 0x7E86A
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < (4 - 1))
	{
		bVar1 = false;
		while (bVar1 < func_622(iVar0))
		{
			if (BitTest(Global_113386.f_10049.f_138[iVar0], bVar1))
			{
				iVar2++;
			}
			bVar1++;
		}
		iVar0++;
	}
	STATS::STAT_SET_INT(joaat("NUM_HIDDEN_PACKAGES_5"), iVar2, true);
}

int func_616(int iParam0, int iParam1)//Position - 0x7E8C6
{
	struct<3> Var0;
	float fVar1;
	if (ENTITY::DOES_ENTITY_EXIST(Local_122[iParam0 /*16*/][iParam1]))
	{
		if ((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && !__LIB_0__::func_193()) && !__LIB_0__::func_39(14)) && !HUD::HAS_DIRECTOR_MODE_BEEN_LAUNCHED_BY_CODE())
		{
			Var0 = { Local_93[iParam0 /*46*/][iParam1 /*3*/] };
			Var0.f_2 = (Var0.f_2 + 0.8f);
			fVar1 = 0.49f;
			if (iParam0 == 2)
			{
				fVar1 = 0.81f;
			}
			if (__LIB_0__::func_78(Local_294, 0f, 0f, 0f, 0))
			{
				Local_294 = { Var0 };
			}
			if (__LIB_0__::func_78(Local_294, Var0, 0))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_294) < fVar1)
				{
					if (iLocal_82 == -1)
					{
						__LIB_7__::func_954(&iLocal_82, 2, "PEY_PICKUP" /* GXT: Press ~INPUT_CONTEXT~ to eat the Peyote. */, 0, 0, 0, 0);
					}
					else if (__LIB_3__::func_113(iLocal_82, 1))
					{
						__LIB_3__::func_422(&iLocal_82);
						Local_294 = { 0f, 0f, 0f };
						return 1;
					}
				}
				else
				{
					if (iLocal_82 != -1)
					{
						__LIB_3__::func_422(&iLocal_82);
					}
					Local_294 = { 0f, 0f, 0f };
				}
			}
			else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_294) > fLocal_51)
			{
				if (iLocal_82 != -1)
				{
					__LIB_3__::func_422(&iLocal_82);
				}
				Local_294 = { 0f, 0f, 0f };
			}
		}
	}
	return 0;
}

int func_622(int iParam0)//Position - 0x7EC95
{
	switch (iParam0)
	{
		case 0:
			return 15;
			break;
		case 1:
			return 6;
			break;
		case 2:
			return 6;
			break;
		case 3:
			return 7;
			break;
	}
	return -1;
}

void func_625(int iParam0)//Position - 0x7ED0E
{
	if (__LIB_0__::func_374(iParam0))
	{
		if (BitTest(uLocal_78, 0))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_12__::func_894(iLocal_83));
		}
		iLocal_83 = iParam0;
		STREAMING::REQUEST_MODEL(__LIB_12__::func_894(iLocal_83));
		MISC::SET_BIT(&uLocal_78, 0);
	}
}

void func_629()//Position - 0x7EF77
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar0++;
		if (!iLocal_105)
		{
			bLocal_106++;
			if (bLocal_106 >= func_622(iLocal_102))
			{
				bLocal_106 = false;
				iVar1 = iLocal_102;
				iVar1++;
				if (Global_113386.f_10049.f_144)
				{
					if (iVar1 >= 4)
					{
						iVar1 = 0;
					}
				}
				else if (iVar1 >= 3)
				{
					iVar1 = 0;
				}
				iLocal_102 = iVar1;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!BitTest(uLocal_107[iLocal_102], bLocal_106))
			{
				if (!BitTest(uLocal_108[iLocal_102], bLocal_106))
				{
					if (((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_93[iLocal_102 /*46*/][bLocal_106 /*3*/]) <= fLocal_51 && !__LIB_0__::func_39(13)) && !__LIB_0__::func_39(14)) && func_635())
					{
						if (Global_113386.f_10049.f_144 || !BitTest(Global_113386.f_10049.f_138[iLocal_102], bLocal_106))
						{
							if (iLocal_102 != 3 || func_632(bLocal_106))
							{
								iLocal_105 = 1;
								iVar2 = uLocal_112[iLocal_102];
								iVar3 = func_599(iVar2);
								iVar4 = func_595(iLocal_102, bLocal_106);
								if (iLocal_103 != iVar2)
								{
									if (iLocal_110 != -1)
									{
										AUDIO::STOP_SOUND(iLocal_110);
										AUDIO::RELEASE_SOUND_ID(iLocal_110);
										iLocal_110 = -1;
									}
									if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_58))
									{
										if (!MISC::ARE_STRINGS_EQUAL(&Local_58, "NONE" /* GXT: None */))
										{
											AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(&Local_58);
										}
									}
									__LIB_16__::func_820(&Local_58, iVar3);
									iLocal_103 = iVar2;
								}
								STREAMING::REQUEST_MODEL(iVar3);
								STREAMING::REQUEST_MODEL(iVar4);
								bVar5 = true;
								if (!MISC::ARE_STRINGS_EQUAL(&Local_58, "NONE" /* GXT: None */))
								{
									bVar5 = AUDIO::REQUEST_SCRIPT_AUDIO_BANK(&Local_58, false, -1);
								}
								bVar6 = true;
								if (iLocal_103 == 27)
								{
									bVar6 = AUDIO::REQUEST_SCRIPT_AUDIO_BANK(&(Local_58.f_24), false, -1);
								}
								if (((STREAMING::HAS_MODEL_LOADED(iVar3) && STREAMING::HAS_MODEL_LOADED(iVar4)) && bVar5) && bVar6)
								{
									iVar7 = 0;
									MISC::SET_BIT(&iVar7, 1);
									MISC::SET_BIT(&iVar7, 5);
									Local_122[iLocal_102 /*16*/][bLocal_106] = OBJECT::CREATE_OBJECT(iVar4, Local_93[iLocal_102 /*46*/][bLocal_106 /*3*/], true, true, false);
									ENTITY::SET_ENTITY_ROTATION(Local_122[iLocal_102 /*16*/][bLocal_106], Local_94[iLocal_102 /*46*/][bLocal_106 /*3*/], 2, true);
									ENTITY::FREEZE_ENTITY_POSITION(Local_122[iLocal_102 /*16*/][bLocal_106], true);
									func_537(&iLocal_296, Local_93[iLocal_102 /*46*/][bLocal_106 /*3*/], 2.5f);
									if (!MISC::ARE_STRINGS_EQUAL(&Local_58, "NONE" /* GXT: None */) && !MISC::ARE_STRINGS_EQUAL(&(Local_58.f_16), "NONE" /* GXT: None */))
									{
										iLocal_110 = AUDIO::GET_SOUND_ID();
										AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_110, &(Local_58.f_16), Local_122[iLocal_102 /*16*/][bLocal_106], "PEYOTE_ATTRACT_SOUNDSET", false, 0);
									}
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar4);
									MISC::SET_BIT(&(uLocal_107[iLocal_102]), bLocal_106);
									iLocal_105 = 0;
								}
							}
						}
					}
				}
			}
			else if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_93[iLocal_102 /*46*/][bLocal_106 /*3*/]) >= fLocal_52 || BitTest(uLocal_78, 1)) || !func_635())
			{
				if (iLocal_110 != -1)
				{
					AUDIO::STOP_SOUND(iLocal_110);
					AUDIO::RELEASE_SOUND_ID(iLocal_110);
					iLocal_110 = -1;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_122[iLocal_102 /*16*/][bLocal_106]))
				{
					OBJECT::DELETE_OBJECT(&(Local_122[iLocal_102 /*16*/][bLocal_106]));
				}
				func_460(&iLocal_296);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_595(iLocal_102, bLocal_106));
				func_630(iLocal_102);
				MISC::CLEAR_BIT(&(uLocal_107[iLocal_102]), bLocal_106);
			}
		}
	}
}

void func_630(int iParam0)//Position - 0x7F2E1
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = iVar0;
		if (func_536(iVar1) == iParam0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_599(iVar1));
		}
		iVar0++;
	}
}

int func_632(bool bParam0)//Position - 0x7F763
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	sVar0 = "His quarry seemed familiar.";
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
	}
	if (Global_113386.f_10049.f_144)
	{
		iVar1 = __LIB_11__::func_762();
		iVar2 = iVar1;
		__LIB_0__::func_142(&iVar1, 5);
		__LIB_0__::func_143(&iVar1, 30);
		__LIB_0__::func_144(&iVar1, 0);
		__LIB_0__::func_142(&iVar2, 8);
		__LIB_0__::func_143(&iVar2, 0);
		__LIB_0__::func_144(&iVar2, 0);
		if (__LIB_14__::func_793(iVar1) && !__LIB_14__::func_793(iVar2))
		{
			if (__LIB_0__::func_720(57))
			{
				if (CLOCK::GET_CLOCK_DAY_OF_WEEK() == bParam0)
				{
					MISC::GET_CURR_WEATHER_STATE(&iVar3, &iVar4, &fVar5);
					if ((((iVar3 == joaat("foggy") && fVar5 <= 0.5f) || (iVar4 == joaat("foggy") && fVar5 >= 0.5f)) || (iVar3 == joaat("xmas") && fVar5 <= 0.5f)) || (iVar4 == joaat("xmas") && fVar5 >= 0.5f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_635()//Position - 0x7F899
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f)
		{
			return 0;
		}
	}
	return 1;
}

void func_636()//Position - 0x7F8C7
{
	struct<3> Var0;
	int iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (BitTest(uLocal_108[iVar1], iLocal_109[iVar1]))
			{
				if (SYSTEM::VDIST2(Var0, Local_93[iVar1 /*46*/][iLocal_109[iVar1] /*3*/]) > fLocal_51 || CAM::IS_SCREEN_FADED_OUT())
				{
					func_637(iVar1, iLocal_109[iVar1]);
				}
			}
			iLocal_109[iVar1]++;
			if (iLocal_109[iVar1] >= func_622(iVar1))
			{
				iLocal_109[iVar1] = 0;
			}
			iVar1++;
		}
	}
}

void func_637(int iParam0, int iParam1)//Position - 0x7F96B
{
	MISC::CLEAR_BIT(&(uLocal_108[iParam0]), iParam1);
}

void func_638()//Position - 0x7F980
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (iLocal_53 != 5)
	{
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), true);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	}
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("PeyoteEndIn"))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("PeyoteEndIn", 0, false);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PEYOTE_TRANSITION_OUT_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("PEYOTE_TRANSITION_OUT_SCENE");
		}
		if (AUDIO::LOAD_STREAM("PEYOTE_TRANSITION_OUT", 0))
		{
			AUDIO::PLAY_STREAM_FRONTEND();
		}
		iLocal_92 = MISC::GET_GAME_TIMER() + 2500;
	}
	__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
	while (MISC::GET_GAME_TIMER() < iLocal_92)
	{
		if (MISC::GET_GAME_TIMER() > (iLocal_92 - 500))
		{
			if (!bLocal_84)
			{
				func_461();
			}
			func_2();
		}
		__LIB_31__::func_959(func_599(iLocal_113), &iLocal_81, 1);
		SYSTEM::WAIT(0);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < func_622(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_122[iVar0 /*16*/][iVar1]))
			{
				OBJECT::DELETE_OBJECT(&(Local_122[iVar0 /*16*/][iVar1]));
				func_460(&iLocal_296);
			}
			iVar1++;
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_lowland_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_lowland_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_highland_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_highland_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_water_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_gold_01"));
	bVar2 = false;
	while (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!bVar2)
		{
			MISC::IGNORE_NEXT_RESTART(true);
			MISC::PAUSE_DEATH_ARREST_RESTART(false);
			bVar2 = true;
		}
		func_2();
		SYSTEM::WAIT(0);
	}
	iLocal_76 = -1;
	iLocal_53 = 5;
}

void func_639()//Position - 0x7FAF4
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < func_622(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_122[iVar0 /*16*/][iVar1]))
			{
				OBJECT::DELETE_OBJECT(&(Local_122[iVar0 /*16*/][iVar1]));
				func_460(&iLocal_296);
			}
			iVar1++;
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (BitTest(uLocal_78, 1))
		{
			func_640();
		}
	}
	if (iLocal_363)
	{
		func_97(PLAYER::PLAYER_PED_ID(), &uLocal_298, 0, 0, 1, 0);
	}
	if (iLocal_364)
	{
		PED::SET_PED_SCUBA_GEAR_VARIATION(PLAYER::PLAYER_PED_ID());
		iLocal_364 = 0;
	}
	if (Global_32115 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Global_32115);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_lowland_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_lowland_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_highland_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_highland_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_water_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_gold_01"));
	if (BitTest(uLocal_78, 0))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_12__::func_894(iLocal_83));
		MISC::CLEAR_BIT(&uLocal_78, 0);
	}
	if (iLocal_80 != -1)
	{
		func_29();
		func_28(0);
		__LIB_15__::func_281(&iLocal_80);
	}
	if (iLocal_110 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_110);
		AUDIO::RELEASE_SOUND_ID(iLocal_110);
		iLocal_110 = -1;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_58))
	{
		if (!MISC::ARE_STRINGS_EQUAL(&Local_58, "NONE" /* GXT: None */))
		{
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(&Local_58);
		}
	}
	if (iLocal_82 != -1)
	{
		__LIB_3__::func_422(&iLocal_82);
	}
	if (!__LIB_0__::func_39(14) && !HUD::HAS_DIRECTOR_MODE_BEEN_LAUNCHED_BY_CODE())
	{
		STATS::STAT_ENABLE_STATS_TRACKING();
	}
	iLocal_295 = -1;
	AUDIO::STOP_AUDIO_SCENES();
	TASK::RESET_SCENARIO_TYPES_ENABLED();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_292))
	{
		__LIB_0__::func_638();
		sLocal_292 = "";
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_54.f_5)))
	{
		STREAMING::REMOVE_ANIM_DICT(&(Local_54.f_5));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_54.f_3))
	{
		STREAMING::REMOVE_ANIM_DICT(Local_54.f_3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_54.f_0))
	{
		STREAMING::REMOVE_ANIM_DICT(Local_54.f_0);
	}
	__LIB_0__::func_532(0, 1, 0, 0, 0, 0, 0);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	if (CAM::DOES_CAM_EXIST(iLocal_86))
	{
		CAM::DESTROY_CAM(iLocal_86, false);
	}
	__LIB_15__::func_306(0);
	AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", false);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_640()//Position - 0x7FCE7
{
	HUD::CLEAR_HELP(true);
	func_460(&iLocal_297);
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iLocal_116, false);
	if (iLocal_111 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_111);
		AUDIO::RELEASE_SOUND_ID(iLocal_111);
		iLocal_111 = -1;
	}
	if (iLocal_124 != 0 && !ENTITY::DOES_ENTITY_EXIST(iLocal_124))
	{
		__LIB_0__::func_364(24, 1);
		Global_77137[24] = 0;
	}
	__LIB_0__::func_734(0, 0);
	AUDIO::STOP_AUDIO_SCENES();
	func_29();
	func_28(0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_599(iLocal_113));
}

void func_642()//Position - 0x7FD84
{
	if ((!Global_113386.f_10049.f_144 && iLocal_295 != -1) && iLocal_295 == bLocal_115)
	{
		if (BitTest(Global_113386.f_10049.f_138[iLocal_114], iLocal_295))
		{
			MISC::CLEAR_BIT(&(Global_113386.f_10049.f_138[iLocal_114]), iLocal_295);
			MISC::CLEAR_BIT(&(Global_113386.f_10049.f_143), uLocal_112[iLocal_114]);
			STATS::STAT_GET_INT(joaat("NUM_HIDDEN_PACKAGES_5"), &iLocal_75, -1);
			iLocal_75 = (iLocal_75 - 1);
			STATS::STAT_SET_INT(joaat("NUM_HIDDEN_PACKAGES_5"), iLocal_75, true);
		}
	}
}

void func_643()//Position - 0x7FE0E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uLocal_112[iVar0] = func_644(iVar0);
		iVar0++;
	}
}

var func_644(int iParam0)//Position - 0x7FE35
{
	int iVar0;
	bool bVar1[15];
	bool bVar2;
	int iVar3;
	int iVar4;
	iVar0 = iParam0;
	if (iParam0 == 1)
	{
		if (Global_113386.f_10049.f_144 && MISC::GET_RANDOM_INT_IN_RANGE(0, 51) == 50)
		{
			iVar0 = 0;
		}
	}
	iVar3 = 0;
	bVar2 = false;
	while (bVar2 < 30)
	{
		if (bVar2 != 28)
		{
			if (func_536(bVar2) == iVar0)
			{
				if (!BitTest(Global_113386.f_10049.f_143, bVar2) || Global_113386.f_10049.f_144)
				{
					bVar1[iVar3] = bVar2;
					iVar3++;
				}
			}
		}
		bVar2++;
	}
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar3);
	return bVar1[iVar4];
}

void func_645()//Position - 0x7FECF
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < func_622(iVar0))
		{
			func_646(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_646(int iParam0, int iParam1)//Position - 0x7FF08
{
	MISC::SET_BIT(&(uLocal_108[iParam0]), iParam1);
}

void func_647()//Position - 0x7FF1D
{
	func_648();
	Local_93[0 /*46*/][0 /*3*/] = { -529.82f, 4188.161f, 191.65f };
	Local_94[0 /*46*/][0 /*3*/] = { -2.16f, 17.28f, -80f };
	Local_93[0 /*46*/][1 /*3*/] = { -116.178f, 1428.289f, 293.404f };
	Local_94[0 /*46*/][1 /*3*/] = { -3.6f, 6.48f, 100f };
	Local_93[0 /*46*/][2 /*3*/] = { 2592.256f, 6156.699f, 165.061f };
	Local_94[0 /*46*/][2 /*3*/] = { 5f, -10f, 25f };
	Local_93[0 /*46*/][3 /*3*/] = { 2347.476f, 2551.505f, 45.668f };
	Local_94[0 /*46*/][3 /*3*/] = { 4f, 0f, 90f };
	Local_93[0 /*46*/][4 /*3*/] = { 1422.945f, -2615.256f, 46.688f };
	Local_94[0 /*46*/][4 /*3*/] = { -8f, 0f, 180f };
	Local_93[0 /*46*/][5 /*3*/] = { 1328.343f, -607.007f, 73.513f };
	Local_94[0 /*46*/][5 /*3*/] = { 0f, 0f, 55f };
	Local_93[0 /*46*/][6 /*3*/] = { -320.583f, -1652.426f, 30.849f };
	Local_94[0 /*46*/][6 /*3*/] = { 1f, 4f, 155f };
	Local_93[0 /*46*/][7 /*3*/] = { -1162.315f, -1998.3f, 12.16f };
	Local_94[0 /*46*/][7 /*3*/] = { 6f, 1f, 245f };
	Local_93[0 /*46*/][8 /*3*/] = { -2001.561f, 3518.889f, 56.035f };
	Local_94[0 /*46*/][8 /*3*/] = { 12.96f, 0f, -51.84f };
	Local_93[0 /*46*/][9 /*3*/] = { -1615.908f, 2072.896f, 76.997f };
	Local_94[0 /*46*/][9 /*3*/] = { 11.52f, -7.92f, 210f };
	Local_93[0 /*46*/][10 /*3*/] = { 513.941f, 3009.893f, 39.797f };
	Local_94[0 /*46*/][10 /*3*/] = { 3f, 8f, 140f };
	Local_93[0 /*46*/][11 /*3*/] = { -1038.658f, 881.085f, 161.007f };
	Local_94[0 /*46*/][11 /*3*/] = { -2f, 0f, 160f };
	Local_93[0 /*46*/][12 /*3*/] = { 1306.135f, 2105.401f, 81.951f };
	Local_94[0 /*46*/][12 /*3*/] = { 3f, 10f, 165f };
	Local_93[0 /*46*/][13 /*3*/] = { 142.407f, 6865.949f, 27.324f };
	Local_94[0 /*46*/][13 /*3*/] = { 1f, 3f, 120f };
	Local_93[0 /*46*/][14 /*3*/] = { 437.683f, 782.841f, 192.166f };
	Local_94[0 /*46*/][14 /*3*/] = { -9f, -3.6f, 125.28f };
	Local_93[1 /*46*/][0 /*3*/] = { -95.011f, 321.923f, 141.565f };
	Local_94[1 /*46*/][0 /*3*/] = { 1f, 0.5f, 80f };
	Local_93[1 /*46*/][1 /*3*/] = { -1334.848f, -1066.133f, 11.307f };
	Local_94[1 /*46*/][1 /*3*/] = { 1f, 2f, 135f };
	Local_93[1 /*46*/][2 /*3*/] = { 1483.204f, 6029.105f, 310.793f };
	Local_94[1 /*46*/][2 /*3*/] = { 5f, 2f, 100f };
	Local_93[1 /*46*/][3 /*3*/] = { 502.151f, 5506.052f, 773.54f };
	Local_94[1 /*46*/][3 /*3*/] = { 1f, 2f, 245f };
	Local_93[1 /*46*/][4 /*3*/] = { 3336.348f, -274.956f, 3.965f };
	Local_94[1 /*46*/][4 /*3*/] = { 0f, 6f, 100f };
	Local_93[1 /*46*/][5 /*3*/] = { -1002.453f, 4499.704f, 156.972f };
	Local_94[1 /*46*/][5 /*3*/] = { 0f, 0f, 25f };
	Local_93[2 /*46*/][0 /*3*/] = { 87.199f, 4315.681f, 20.717f };
	Local_94[2 /*46*/][0 /*3*/] = { -8f, 3f, 180f };
	Local_93[2 /*46*/][1 /*3*/] = { -1845.74f, -1257.063f, -23.453f };
	Local_94[2 /*46*/][1 /*3*/] = { 8f, 0f, 0f };
	Local_93[2 /*46*/][2 /*3*/] = { -563.346f, -2481.856f, -17.769f };
	Local_94[2 /*46*/][2 /*3*/] = { -2f, 2f, 195f };
	Local_93[2 /*46*/][3 /*3*/] = { 4164.94f, 3569.537f, -48.4f };
	Local_94[2 /*46*/][3 /*3*/] = { 2.16f, -15.12f, 170f };
	Local_93[2 /*46*/][4 /*3*/] = { -781f, 6619.869f, -19.919f };
	Local_94[2 /*46*/][4 /*3*/] = { -15.84f, 4f, 100f };
	Local_93[2 /*46*/][5 /*3*/] = { -2873f, 2594.401f, -11.424f };
	Local_94[2 /*46*/][5 /*3*/] = { 5.76f, 0f, 330f };
	Local_93[3 /*46*/][0 /*3*/] = { -1597.148f, 4593.326f, 38.139f };
	Local_94[3 /*46*/][0 /*3*/] = { 5f, 20f, 0f };
	Local_93[3 /*46*/][1 /*3*/] = { -1562.325f, 4462.752f, 17.231f };
	Local_94[3 /*46*/][1 /*3*/] = { -11f, 2f, 200f };
	Local_93[3 /*46*/][2 /*3*/] = { -1472.531f, 4439.456f, 18.862f };
	Local_94[3 /*46*/][2 /*3*/] = { -10f, -5f, 0f };
	Local_93[3 /*46*/][3 /*3*/] = { 34.291f, 4322.551f, 42.358f };
	Local_94[3 /*46*/][3 /*3*/] = { 0f, 3f, 5f };
	Local_93[3 /*46*/][4 /*3*/] = { 295.732f, 4275.579f, 40.985f };
	Local_94[3 /*46*/][4 /*3*/] = { 7.92f, 0f, 0f };
	Local_93[3 /*46*/][5 /*3*/] = { 1106.727f, 4520.82f, 50.421f };
	Local_94[3 /*46*/][5 /*3*/] = { -1f, -2f, 310f };
	Local_93[3 /*46*/][6 /*3*/] = { 1662.614f, 5152.309f, 151.377f };
	Local_94[3 /*46*/][6 /*3*/] = { -5f, 0f, 260f };
	Local_95[0 /*46*/][0 /*3*/] = { -531.5155f, 4192.8955f, 192.3638f };
	Local_96[0 /*16*/][0] = 184.6266f;
	Local_97[0 /*16*/][0] = -12f;
	Local_95[0 /*46*/][1 /*3*/] = { -112.5678f, 1425.685f, 293.9277f };
	Local_96[0 /*16*/][1] = 4.5629f;
	Local_97[0 /*16*/][1] = -12f;
	Local_95[0 /*46*/][2 /*3*/] = { 2584.312f, 6161.1787f, 163.9988f };
	Local_96[0 /*16*/][2] = 358.1584f;
	Local_97[0 /*16*/][2] = -12f;
	Local_95[0 /*46*/][3 /*3*/] = { 2347.6477f, 2549.3523f, 45.6677f };
	Local_96[0 /*16*/][3] = 349.2026f;
	Local_97[0 /*16*/][3] = -12f;
	Local_95[0 /*46*/][4 /*3*/] = { 1422.3647f, -2612.9714f, 46.7801f };
	Local_96[0 /*16*/][4] = 3.9096f;
	Local_97[0 /*16*/][4] = -12f;
	Local_95[0 /*46*/][5 /*3*/] = { 1328.1217f, -609.4195f, 73.3241f };
	Local_96[0 /*16*/][5] = 232.2858f;
	Local_97[0 /*16*/][5] = -12f;
	Local_95[0 /*46*/][6 /*3*/] = { -303.2847f, -1658.9226f, 30.8488f };
	Local_96[0 /*16*/][6] = 332.2989f;
	Local_97[0 /*16*/][6] = -15f;
	Local_95[0 /*46*/][7 /*3*/] = { -1172.1837f, -2018.7661f, 12.1605f };
	Local_96[0 /*16*/][7] = 180.8184f;
	Local_97[0 /*16*/][7] = -12f;
	Local_95[0 /*46*/][8 /*3*/] = { -2003.7185f, 3526.0918f, 56.6927f };
	Local_96[0 /*16*/][8] = 164.7774f;
	Local_97[0 /*16*/][8] = -12f;
	Local_95[0 /*46*/][9 /*3*/] = { -1617.1471f, 2073.6863f, 76.9415f };
	Local_96[0 /*16*/][9] = 66.5177f;
	Local_97[0 /*16*/][9] = -12f;
	Local_95[0 /*46*/][10 /*3*/] = { 512.3995f, 3013.7869f, 39.7735f };
	Local_96[0 /*16*/][10] = 119.1231f;
	Local_97[0 /*16*/][10] = -12f;
	Local_95[0 /*46*/][11 /*3*/] = { -1032.4998f, 891.1083f, 167.2734f };
	Local_96[0 /*16*/][11] = 139.8774f;
	Local_97[0 /*16*/][11] = -12f;
	Local_95[0 /*46*/][12 /*3*/] = { 1299.4652f, 2105.8928f, 80.0829f };
	Local_96[0 /*16*/][12] = 97.5191f;
	Local_97[0 /*16*/][12] = -12f;
	Local_95[0 /*46*/][13 /*3*/] = { 143.9502f, 6867.6396f, 27.3547f };
	Local_96[0 /*16*/][13] = 335.161f;
	Local_97[0 /*16*/][13] = -12f;
	Local_95[0 /*46*/][14 /*3*/] = { 436.9434f, 783.1006f, 192.1307f };
	Local_96[0 /*16*/][14] = 116.2676f;
	Local_97[0 /*16*/][14] = -12f;
	Local_95[1 /*46*/][0 /*3*/] = { -90.1056f, 318.6911f, 142.8513f };
	Local_96[1 /*16*/][0] = 155.7856f;
	Local_97[1 /*16*/][0] = -15f;
	Local_95[1 /*46*/][1 /*3*/] = { -1352.2411f, -1090.4954f, 19.1143f };
	Local_96[1 /*16*/][1] = 81.1243f;
	Local_97[1 /*16*/][1] = -5f;
	Local_95[1 /*46*/][2 /*3*/] = { 1466.0331f, 6043.335f, 303.1763f };
	Local_96[1 /*16*/][2] = 329.329f;
	Local_97[1 /*16*/][2] = -28.5f;
	Local_95[1 /*46*/][3 /*3*/] = { 499.6498f, 5515.7427f, 777.0497f };
	Local_96[1 /*16*/][3] = 202.7672f;
	Local_97[1 /*16*/][3] = -20f;
	Local_95[1 /*46*/][4 /*3*/] = { 3339.192f, -273.7192f, 4.1283f };
	Local_96[1 /*16*/][4] = 349.233f;
	Local_97[1 /*16*/][4] = -9f;
	Local_95[1 /*46*/][5 /*3*/] = { -983.5906f, 4484.869f, 145.7952f };
	Local_96[1 /*16*/][5] = 256.3761f;
	Local_97[1 /*16*/][5] = -18f;
	Local_95[2 /*46*/][0 /*3*/] = { 91.3454f, 4318.5913f, 26.4644f };
	Local_96[2 /*16*/][0] = 171.3796f;
	Local_97[2 /*16*/][0] = -2f;
	Local_95[2 /*46*/][1 /*3*/] = { -1831.9692f, -1223.177f, -2.9458f };
	Local_96[2 /*16*/][1] = 228.1f;
	Local_97[2 /*16*/][1] = -2f;
	Local_95[2 /*46*/][2 /*3*/] = { -574.5851f, -2478.375f, -11.061f };
	Local_96[2 /*16*/][2] = 262.1271f;
	Local_97[2 /*16*/][2] = -2f;
	Local_95[2 /*46*/][3 /*3*/] = { 4155.3315f, 3566.998f, -39.9966f };
	Local_96[2 /*16*/][3] = 183.5475f;
	Local_97[2 /*16*/][3] = -2f;
	Local_95[2 /*46*/][4 /*3*/] = { -750.1962f, 6603.149f, -11.7596f };
	Local_96[2 /*16*/][4] = 61.7154f;
	Local_97[2 /*16*/][4] = -2f;
	Local_95[2 /*46*/][5 /*3*/] = { -2871.6328f, 2613.862f, -4.2648f };
	Local_96[2 /*16*/][5] = 180.3624f;
	Local_97[2 /*16*/][5] = -2f;
	Local_95[3 /*46*/][0 /*3*/] = { -1596.128f, 4595.778f, 40.5927f };
	Local_96[3 /*16*/][0] = 200.6605f;
	Local_97[3 /*16*/][0] = -12f;
	Local_95[3 /*46*/][1 /*3*/] = { -1567.3816f, 4464.305f, 17.4783f };
	Local_96[3 /*16*/][1] = 118.7467f;
	Local_97[3 /*16*/][1] = -12f;
	Local_95[3 /*46*/][2 /*3*/] = { -1436.3053f, 4428.8013f, 44.8536f };
	Local_96[3 /*16*/][2] = 43.5218f;
	Local_97[3 /*16*/][2] = -12f;
	Local_95[3 /*46*/][3 /*3*/] = { 31.2408f, 4328.0522f, 43.9517f };
	Local_96[3 /*16*/][3] = 163.1396f;
	Local_97[3 /*16*/][3] = -12f;
	Local_95[3 /*46*/][4 /*3*/] = { 278.1924f, 4276.504f, 39.3595f };
	Local_96[3 /*16*/][4] = 75.6033f;
	Local_97[3 /*16*/][4] = -12f;
	Local_95[3 /*46*/][5 /*3*/] = { 1116.002f, 4506.765f, 64.8542f };
	Local_96[3 /*16*/][5] = 116.3962f;
	Local_97[3 /*16*/][5] = -12f;
	Local_95[3 /*46*/][6 /*3*/] = { 1676.1929f, 5139.87f, 149.3976f };
	Local_96[3 /*16*/][6] = 232.4278f;
	Local_97[3 /*16*/][6] = -15f;
	Local_98[0 /*46*/][0 /*3*/] = { -524.6988f, 4192.316f, 192.736f };
	Local_99[0 /*16*/][0] = 227.6253f;
	Local_98[0 /*46*/][1 /*3*/] = { -117.8253f, 1442.464f, 293.5365f };
	Local_99[0 /*16*/][1] = 87.7333f;
	Local_98[0 /*46*/][2 /*3*/] = { 2557.46f, 6175.38f, 162.3287f };
	Local_99[0 /*16*/][2] = 288.4795f;
	Local_98[0 /*46*/][3 /*3*/] = { 2348.4385f, 2558.8052f, 45.6677f };
	Local_99[0 /*16*/][3] = 148.4075f;
	Local_98[0 /*46*/][4 /*3*/] = { 1430.1506f, -2603.417f, 47.0881f };
	Local_99[0 /*16*/][4] = 267.3886f;
	Local_98[0 /*46*/][5 /*3*/] = { 1333.4773f, -612.6886f, 73.3284f };
	Local_99[0 /*16*/][5] = 63.2009f;
	Local_98[0 /*46*/][6 /*3*/] = { -297.3636f, -1640.2587f, 30.8488f };
	Local_99[0 /*16*/][6] = 289.2072f;
	Local_98[0 /*46*/][7 /*3*/] = { -1165.9183f, -2057.012f, 13.2056f };
	Local_99[0 /*16*/][7] = 315.7894f;
	Local_98[0 /*46*/][8 /*3*/] = { -1994.0844f, 3425.9937f, 30.1122f };
	Local_99[0 /*16*/][8] = 108.6822f;
	Local_98[0 /*46*/][9 /*3*/] = { -1639.0577f, 2098.2478f, 84.2193f };
	Local_99[0 /*16*/][9] = 338.7872f;
	Local_98[0 /*46*/][10 /*3*/] = { 495.2835f, 3013.3164f, 40.0883f };
	Local_99[0 /*16*/][10] = 198.0553f;
	Local_98[0 /*46*/][11 /*3*/] = { -1066.2367f, 846.7995f, 165.8318f };
	Local_99[0 /*16*/][11] = 94.0064f;
	Local_98[0 /*46*/][12 /*3*/] = { 1383.1772f, 2158.0913f, 96.6152f };
	Local_99[0 /*16*/][12] = 79.592f;
	Local_98[0 /*46*/][13 /*3*/] = { 103.1246f, 6858.5254f, 14.4039f };
	Local_99[0 /*16*/][13] = 332.0037f;
	Local_98[0 /*46*/][14 /*3*/] = { 391.7144f, 799.85f, 186.6764f };
	Local_99[0 /*16*/][14] = 191.2877f;
	Local_98[1 /*46*/][0 /*3*/] = { -109.7514f, 360.1761f, 111.6961f };
	Local_99[1 /*16*/][0] = 145.6437f;
	Local_98[1 /*46*/][1 /*3*/] = { -1298.9086f, -1037.6077f, 11.4803f };
	Local_99[1 /*16*/][1] = 117.7394f;
	Local_98[1 /*46*/][2 /*3*/] = { 1479.4984f, 6030.3364f, 310.9688f };
	Local_99[1 /*16*/][2] = 64.9945f;
	Local_98[1 /*46*/][3 /*3*/] = { 517.0012f, 5505.4873f, 769.9974f };
	Local_99[1 /*16*/][3] = 181.1102f;
	Local_98[1 /*46*/][4 /*3*/] = { 3334.1162f, -278.0879f, 3.241f };
	Local_99[1 /*16*/][4] = 253.444f;
	Local_98[1 /*46*/][5 /*3*/] = { -1019.0459f, 4507.2334f, 156.9224f };
	Local_99[1 /*16*/][5] = 109.9727f;
	Local_98[2 /*46*/][0 /*3*/] = { 93.9209f, 4327.622f, 25.8346f };
	Local_99[2 /*16*/][0] = 125.689f;
	Local_98[2 /*46*/][1 /*3*/] = { -1797.591f, -1234.8378f, -5f };
	Local_99[2 /*16*/][1] = 311.2352f;
	Local_98[2 /*46*/][2 /*3*/] = { -559.9407f, -2481.411f, -4.2611f };
	Local_99[2 /*16*/][2] = 254.542f;
	Local_98[2 /*46*/][3 /*3*/] = { 4141.1323f, 3552.249f, -4.0547f };
	Local_99[2 /*16*/][3] = 116.5838f;
	Local_98[2 /*46*/][4 /*3*/] = { -772.8342f, 6616.065f, -4.3376f };
	Local_99[2 /*16*/][4] = 218.2574f;
	Local_98[2 /*46*/][5 /*3*/] = { -2865.131f, 2603.2021f, -4.1572f };
	Local_99[2 /*16*/][5] = 239.9374f;
	Local_98[3 /*46*/][0 /*3*/] = { -1634.9861f, 4588.821f, 43.2674f };
	Local_99[3 /*16*/][0] = 37.7429f;
	Local_98[3 /*46*/][1 /*3*/] = { -1632.2286f, 4436.8857f, 0.1957f };
	Local_99[3 /*16*/][1] = 47.7317f;
	Local_98[3 /*46*/][2 /*3*/] = { -1433.1962f, 4421.3945f, 46.2258f };
	Local_99[3 /*16*/][2] = 66.4789f;
	Local_98[3 /*46*/][3 /*3*/] = { 39.512f, 4326.823f, 42.841f };
	Local_99[3 /*16*/][3] = 248.584f;
	Local_98[3 /*46*/][4 /*3*/] = { 282.5654f, 4272.012f, 39.3133f };
	Local_99[3 /*16*/][4] = 93.8162f;
	Local_98[3 /*46*/][5 /*3*/] = { 1111.1002f, 4539.971f, 52.7703f };
	Local_99[3 /*16*/][5] = 161.8738f;
	Local_98[3 /*46*/][6 /*3*/] = { 1674.5198f, 5146.0874f, 149.8852f };
	Local_99[3 /*16*/][6] = 302.0059f;
	Local_100[0 /*46*/][0 /*3*/] = { -538.6052f, 4192.4507f, 191.9071f };
	Local_101[0 /*16*/][0] = 117.3685f;
	Local_100[0 /*46*/][1 /*3*/] = { -130.9344f, 1467.0774f, 292.8185f };
	Local_101[0 /*16*/][1] = 9.6516f;
	Local_100[0 /*46*/][2 /*3*/] = { 2592.9504f, 6179.6523f, 165.768f };
	Local_101[0 /*16*/][2] = 22.0803f;
	Local_100[0 /*46*/][3 /*3*/] = { 2330.055f, 2546.652f, 45.6677f };
	Local_101[0 /*16*/][3] = 1.6841f;
	Local_100[0 /*46*/][4 /*3*/] = { 1440.2496f, -2611.4546f, 47.2619f };
	Local_101[0 /*16*/][4] = 344.7832f;
	Local_100[0 /*46*/][5 /*3*/] = { 1347.1837f, -606.6709f, 73.3589f };
	Local_101[0 /*16*/][5] = 323.1254f;
	Local_100[0 /*46*/][6 /*3*/] = { -248.152f, -1689.0166f, 32.4828f };
	Local_101[0 /*16*/][6] = 179.6259f;
	Local_100[0 /*46*/][7 /*3*/] = { -1155.6938f, -2036.0483f, 12.1606f };
	Local_101[0 /*16*/][7] = 135.3064f;
	Local_100[0 /*46*/][8 /*3*/] = { -2016.4073f, 3412.073f, 30.1195f };
	Local_101[0 /*16*/][8] = 2.2746f;
	Local_100[0 /*46*/][9 /*3*/] = { -1585.8943f, 2102.4768f, 66.8681f };
	Local_101[0 /*16*/][9] = 176.9579f;
	Local_100[0 /*46*/][10 /*3*/] = { 522.2675f, 3030.5461f, 38.8381f };
	Local_101[0 /*16*/][10] = 222.1449f;
	Local_100[0 /*46*/][11 /*3*/] = { -1086.9869f, 787.2667f, 163.7984f };
	Local_101[0 /*16*/][11] = 98.3083f;
	Local_100[0 /*46*/][12 /*3*/] = { 1413.958f, 2160.102f, 97.1414f };
	Local_101[0 /*16*/][12] = 11.7878f;
	Local_100[0 /*46*/][13 /*3*/] = { 106.1145f, 6857.8354f, 14.5062f };
	Local_101[0 /*16*/][13] = 184.1832f;
	Local_100[0 /*46*/][14 /*3*/] = { 402.4059f, 783.2064f, 186.6439f };
	Local_101[0 /*16*/][14] = 134.5921f;
	Local_100[1 /*46*/][0 /*3*/] = { -128.1134f, 379.8373f, 111.7576f };
	Local_101[1 /*16*/][0] = 154.6337f;
	Local_100[1 /*46*/][1 /*3*/] = { -1312.176f, -1068.4644f, 5.8127f };
	Local_101[1 /*16*/][1] = 29.1101f;
	Local_100[1 /*46*/][2 /*3*/] = { 1495.2583f, 6032.542f, 308.7726f };
	Local_101[1 /*16*/][2] = 288.5849f;
	Local_100[1 /*46*/][3 /*3*/] = { 506.5558f, 5533.214f, 776.3751f };
	Local_101[1 /*16*/][3] = 207.4062f;
	Local_100[1 /*46*/][4 /*3*/] = { 2852.0632f, -111.2995f, 1.0301f };
	Local_101[1 /*16*/][4] = 42.0921f;
	Local_100[1 /*46*/][5 /*3*/] = { -972.9418f, 4549.8477f, 126.8038f };
	Local_101[1 /*16*/][5] = 262.626f;
	Local_100[2 /*46*/][0 /*3*/] = { 12.7101f, 4443.635f, 58.5636f };
	Local_101[2 /*16*/][0] = 276.7658f;
	Local_100[2 /*46*/][1 /*3*/] = { -1811.7888f, -1240.5096f, 12.0174f };
	Local_101[2 /*16*/][1] = 51.5445f;
	Local_100[2 /*46*/][2 /*3*/] = { -439.6339f, -2460.336f, 5.0008f };
	Local_101[2 /*16*/][2] = 228.8953f;
	Local_100[2 /*46*/][3 /*3*/] = { 3911.2756f, 3453.272f, 4.3854f };
	Local_101[2 /*16*/][3] = 64.5589f;
	Local_100[2 /*46*/][4 /*3*/] = { -543.1194f, 6411.564f, 1.7985f };
	Local_101[2 /*16*/][4] = 288.9971f;
	Local_100[2 /*46*/][5 /*3*/] = { -2780.5483f, 2534.499f, 1.5562f };
	Local_101[2 /*16*/][5] = 137.5726f;
	Local_100[3 /*46*/][0 /*3*/] = { -1643.0061f, 4603.595f, 44.1547f };
	Local_101[3 /*16*/][0] = 280.9118f;
	Local_100[3 /*46*/][1 /*3*/] = { -1634.6913f, 4412.9478f, 1.6828f };
	Local_101[3 /*16*/][1] = 32.5647f;
	Local_100[3 /*46*/][2 /*3*/] = { -1460.9769f, 4480.4946f, 18.2185f };
	Local_101[3 /*16*/][2] = 289.6174f;
	Local_100[3 /*46*/][3 /*3*/] = { 12.7101f, 4443.635f, 58.5636f };
	Local_101[3 /*16*/][3] = 276.7658f;
	Local_100[3 /*46*/][4 /*3*/] = { 282.5648f, 4300.9976f, 43.2166f };
	Local_101[3 /*16*/][4] = 355.7436f;
	Local_100[3 /*46*/][5 /*3*/] = { 1061.7312f, 4453.175f, 54.9683f };
	Local_101[3 /*16*/][5] = 263.9897f;
	Local_100[3 /*46*/][6 /*3*/] = { 1684.7528f, 5173.5146f, 145.7554f };
	Local_101[3 /*16*/][6] = 221.6928f;
}

void func_648()//Position - 0x8174B
{
	if (MISC::IS_PC_VERSION())
	{
		fLocal_51 = 65025f;
		fLocal_52 = 70225f;
	}
	else
	{
		fLocal_51 = 10000f;
		fLocal_52 = 12100f;
	}
}

