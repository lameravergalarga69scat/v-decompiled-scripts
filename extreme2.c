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
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = -1;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 1000;
	var uLocal_50 = 1000;
	var uLocal_51 = 0;
	struct<61> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	char* sLocal_57 = NULL;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int* iLocal_71 = NULL;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74[5] = { 0, 0, 0, 0, 0 };
	var uLocal_75[2] = { 0, 0 };
	struct<3> Local_76[2];
	struct<3> Local_77[2];
	float fLocal_78[2] = { 0f, 0f };
	int iLocal_79 = 0;
	int* iLocal_80 = NULL;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83[3] = { 0, 0, 0 };
	struct<3> Local_84 = { 0, 0, 0 } ;
	int* iLocal_85 = NULL;
	struct<3> Local_86 = { 0, 0, 0 } ;
	var uLocal_87[2] = { 0, 0 };
	int* iLocal_88 = NULL;
	int* iLocal_89 = NULL;
	int* iLocal_90 = NULL;
	int* iLocal_91 = NULL;
	int* iLocal_92 = NULL;
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<3> Local_94 = { 0, 0, 0 } ;
	struct<3> Local_95 = { 0, 0, 0 } ;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	int iLocal_98 = 0;
	struct<3> Local_99[4];
	struct<3> Local_100[4];
	struct<3> Local_101[4];
	struct<3> Local_102[4];
	var uLocal_103 = 16;
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
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	struct<3> Local_287 = { 0, 0, 0 } ;
	int* iLocal_288 = NULL;
	struct<3> Local_289 = { 0, 0, 0 } ;
	struct<3> Local_290 = { 0, 0, 0 } ;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	float fLocal_299 = 0f;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int* iLocal_302 = NULL;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	struct<3> Local_308 = { 0, 0, 0 } ;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int* iLocal_311 = NULL;
	struct<3> Local_312 = { 0, 0, 0 } ;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	float fLocal_318 = 0f;
	float fLocal_319 = 0f;
	float fLocal_320 = 0f;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	float fLocal_326 = 0f;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	var uLocal_329 = 0;
	char* sLocal_330 = NULL;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	char[] cLocal_336[8] = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	struct<6> Local_342 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int* iLocal_345 = NULL;
	struct<61> Local_346 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	uLocal_38 = __LIB_2__::func_910(52);
	iLocal_39 = joaat("A_C_Retriever");
	iLocal_53 = 1;
	Local_64 = { -964.1799f, -2751.0134f, 12.7848f };
	Local_65 = { 139.8692f, 3660.7466f, 30.4814f };
	Local_84 = { -948.2926f, -2755.0151f, 12.8068f };
	Local_86 = { -966.79f, -2799.24f, 12.96f };
	Local_287 = { 145.57f, 3661.28f, 30.49f };
	Local_289 = { 156f, 3665.3f, 31.6f };
	Local_290 = { -90f, 0f, 0f };
	iLocal_300 = AUDIO::GET_SOUND_ID();
	iLocal_303 = AUDIO::GET_SOUND_ID();
	Local_308 = { 181.8f, 3676f, 35f };
	Local_312 = { -957.23f, -2764.89f, 13.99f };
	fLocal_326 = 0f;
	Local_52 = { ScriptParam_346 };
	__LIB_14__::func_801(&Local_52);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		if (__LIB_0__::func_121(iLocal_91))
		{
			func_866(iLocal_91);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_91, true);
			VEHICLE::SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(iLocal_91, true);
		}
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_14__::func_872(1);
		func_848();
	}
	__LIB_0__::func_712(52, 1, 0);
	func_838();
	if (__LIB_0__::func_323())
	{
		__LIB_14__::func_871(&Local_52, 1, 1, 0);
		iVar0 = __LIB_0__::func_344();
		if (Global_94618 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				__LIB_0__::func_427(Local_84, 331.4214f, 1, 0);
				func_726(1);
				break;
			case 1:
				__LIB_0__::func_427(Local_76[0 /*3*/], 0f, 1, 0);
				func_726(2);
				break;
			case 2:
				__LIB_0__::func_427(Local_65, 288.2311f, 1, 0);
				func_726(3);
				break;
			case 3:
				__LIB_0__::func_427(Local_65, 288.2311f, 1, 0);
				func_726(4);
				break;
			}
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		__LIB_14__::func_863(Local_52.f_9, 0, 0, 0, 0, 0);
		func_691();
		switch (iLocal_53)
		{
			case 1:
				func_647();
				break;
			case 2:
				func_625();
				break;
			case 3:
				func_611();
				break;
			case 4:
				func_530();
				break;
			case 5:
				func_474();
				break;
			case 6:
				func_458();
				break;
			case 7:
				func_434();
				break;
			case 8:
				func_356();
				break;
			case 9:
				func_1();
				break;
		}
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_Extreme2", 0);
	}
}

void func_1()//Position - 0x2CC
{
	switch (iLocal_55)
	{
		case 0:
			func_355();
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			func_353();
			__LIB_0__::func_429();
			AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_FAIL");
			func_350();
			iLocal_273 = 0;
			switch (iLocal_56)
			{
				case 0:
					break;
				case 1:
					sLocal_57 = "EXT2_F1";
					break;
				case 2:
					sLocal_57 = "EXT2_F3";
					break;
				case 3:
					sLocal_57 = "EXT2_F2";
					break;
				case 4:
					sLocal_57 = "EXT2_F5";
					break;
				case 5:
					sLocal_57 = "EXT2_F7";
					break;
				case 6:
					sLocal_57 = "EXT2_F8";
					break;
				case 7:
					sLocal_57 = "EXT2_F9";
					break;
				case 8:
					sLocal_57 = "EXT2_F10";
					break;
				case 9:
					sLocal_57 = "EXT2_F11";
					break;
				case 10:
					sLocal_57 = "EXT2_F12";
					break;
				case 11:
					sLocal_57 = "EXT2_F13";
					break;
				case 12:
					sLocal_57 = "EXT2_F4";
					break;
			}
			if (iLocal_56 == 0)
			{
				__LIB_14__::func_872(1);
			}
			else
			{
				__LIB_14__::func_880(sLocal_57, 1);
			}
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				func_346();
				func_35(0);
				if (__LIB_0__::func_121(iLocal_91))
				{
					__LIB_0__::func_507(-1036.1206f, -2731.8335f, 12.7565f, 332.5734f);
					__LIB_14__::func_555(-1023.8408f, -2728.1885f, 12.7005f, 238.436f);
				}
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_296))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_296, false);
				}
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_297))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_297, false);
				}
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_298))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_298, false);
				}
				AUDIO::STOP_SOUND(iLocal_300);
				func_866(iLocal_90);
				func_866(iLocal_91);
				func_866(uLocal_75[1]);
				__LIB_0__::func_123(&iLocal_302);
				__LIB_0__::func_0(&iLocal_71);
				__LIB_0__::func_0(&iLocal_85);
				__LIB_8__::func_397(&(uLocal_75[0]));
				__LIB_8__::func_397(&(uLocal_75[1]));
				__LIB_8__::func_397(&iLocal_90);
				__LIB_8__::func_397(&iLocal_91);
				__LIB_0__::func_497(759, 0, 1);
				func_848();
			}
			else
			{
				func_2();
			}
			break;
	}
}

void func_2()//Position - 0x4BF
{
	if ((iLocal_56 == 9 && iLocal_273 == 0) && __LIB_2__::func_859(&uLocal_103, "EXT2AU", "EXT2_THREAT", 8, 0, 0, 0))
	{
		iLocal_273 = 1;
	}
}

void func_35(int iParam0)//Position - 0x105E
{
	if (iParam0 == 1)
	{
		func_340(PLAYER::PLAYER_PED_ID(), 0);
		__LIB_17__::func_41(PLAYER::PLAYER_PED_ID(), 10);
		__LIB_17__::func_41(PLAYER::PLAYER_PED_ID(), 1);
		while (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
		{
			SYSTEM::WAIT(0);
		}
		func_324(PLAYER::PLAYER_PED_ID(), 12, 10, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_324(PLAYER::PLAYER_PED_ID(), 8, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_PED_ID(), 1);
		__LIB_17__::func_120(1);
		func_324(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	else
	{
		func_322(PLAYER::PLAYER_PED_ID(), 14, 158);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_37(PLAYER::PLAYER_PED_ID());
			__LIB_17__::func_119(1, uLocal_63);
		}
	}
}

void func_37(int iParam0)//Position - 0x1144
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_0__::func_216(iParam0);
	if (__LIB_0__::func_43(iVar0))
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
		func_139(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_124(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_38(__LIB_0__::func_154(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_124(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_124(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_38(__LIB_0__::func_154(0), 3, 70, 1, 0, 0, 0);
					func_38(__LIB_0__::func_154(0), 3, 71, 1, 0, 0, 0);
					func_38(__LIB_0__::func_154(0), 3, 72, 1, 0, 0, 0);
					func_38(__LIB_0__::func_154(0), 3, 73, 1, 0, 0, 0);
					func_38(__LIB_0__::func_154(0), 3, 74, 1, 0, 0, 0);
					func_38(__LIB_0__::func_154(0), 3, 75, 1, 0, 0, 0);
					func_38(__LIB_0__::func_154(0), 4, 41, 1, 0, 0, 0);
					func_38(__LIB_0__::func_154(0), 4, 42, 1, 0, 0, 0);
					func_38(__LIB_0__::func_154(0), 4, 43, 1, 0, 0, 0);
					func_38(__LIB_0__::func_154(0), 4, 44, 1, 0, 0, 0);
					func_38(__LIB_0__::func_154(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_124(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_139(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_38(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x13A1
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_111(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_111(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x18129
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
								func_111(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_111(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_111(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_111(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_111(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_111(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_111(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_111(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_111(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_111(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_111(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_111(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_111(iParam0, 14, iVar5, 1, 0);
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
								func_111(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_111(iParam0, 14, 17, 1, 0);
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

int func_124(int iParam0, int iParam1, int iParam2)//Position - 0x1B6B7
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
				if (func_131(iParam0, iParam1, iVar0))
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
				if (func_131(iParam0, iParam1, iVar1))
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

int func_131(int iParam0, int iParam1, int iParam2)//Position - 0x1BB15
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
				if (!func_131(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_131(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_131(iParam0, 14, iVar4))
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
			if (!func_131(iParam0, 14, uVar8[iVar7]))
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

void func_139(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x1CECF
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
		iVar0 = __LIB_0__::func_216(iParam0);
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
		if (__LIB_0__::func_43(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_319(iParam0, iVar1, &iVar2, 0))
			{
				func_324(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_317(iParam0, iVar1, &iVar2))
			{
				func_324(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_315(iParam0);
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
			func_142(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_142(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_142(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_142(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x1D3AB
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
			func_273(iVar5, iParam1, iParam2, 1);
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
						func_273(iVar5, 10, 0, 1);
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
									func_273(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_142(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_273(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_271(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_142(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_265(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_273(iVar5, 14, uVar18[iVar1], 1);
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
							func_142(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_273(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_142(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_256(iParam0);
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
						func_142(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_142(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_255(iVar5, iVar24, iVar23, iVar25);
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
							func_142(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_142(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_142(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_142(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_142(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_142(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_142(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_265(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_255(iVar5, func_271(iParam0, 8, -1), iParam2, func_271(iParam0, 4, -1));
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
				func_189(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_255(iVar5, iParam2, iVar44, iVar45);
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
			func_265(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_255(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_142(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_142(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_255(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_255(iVar5, iVar58, iVar57, iParam2);
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
						func_142(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_255(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_142(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_166(iParam0, 9, iVar63))
						{
							func_142(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_142(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_142(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_142(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_271(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_271(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_142(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_142(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_142(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_142(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_142(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_142(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_142(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_142(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_142(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_142(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_256(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_142(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_142(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_143(iParam0, &uVar4))
		{
			func_142(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_142(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_142(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_142(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_271(iParam0, 3, -1), iVar10);
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
				func_142(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_143(int iParam0, var uParam1)//Position - 0x1F255
{
	int iVar0;
	int iVar1;
	*uParam1 = func_271(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_166(iParam0, iVar1, iVar0))
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

int func_166(int iParam0, int iParam1, int iParam2)//Position - 0x2360F
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
				if (!func_166(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_166(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_166(iParam0, 14, iVar6))
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
			if (!func_166(iParam0, 14, uVar11[iVar10]))
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
						return func_166(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_166(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_189(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2A326
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
	func_190(iParam0, bParam3, 0, -1);
}

void func_190(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x2A373
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
		bVar3 = func_235(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_226(iParam0, iParam3);
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

int func_226(int iParam0, int iParam1)//Position - 0x39449
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
				iVar3 = func_271(iParam0, 11, -1);
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
				iVar5 = func_271(iParam0, 11, -1);
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

int func_235(int iParam0, bool bParam1)//Position - 0x398A7
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_271(iParam0, 11, -1), 0);
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
						iVar3 = func_271(iParam0, 11, -1);
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
						iVar5 = func_271(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_271(iParam0, 11, -1), 0);
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
						iVar8 = func_271(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_271(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_271(iParam0, 11, -1), 0);
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
						iVar12 = func_271(iParam0, 8, -1);
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

int func_255(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x42737
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
					iVar0 = func_255(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_255(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_256(int iParam0)//Position - 0x43A72
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
		if (!func_261(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_261(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_261(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4443D
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_271(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_265(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x46E25
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_315(iParam0))
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

int func_271(int iParam0, int iParam1, int iParam2)//Position - 0x470D4
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
				if (func_166(iParam0, iParam1, iVar0))
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
				if (func_166(iParam0, iParam1, iVar1))
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

void func_273(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4720D
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
							func_273(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_273(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_273(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_273(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_273(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_273(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_273(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_273(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_273(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_273(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_315(int iParam0)//Position - 0x5FEAA
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
				iVar1 = func_271(iParam0, 11, -1);
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
				iVar3 = func_271(iParam0, 11, -1);
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

int func_317(int iParam0, int iParam1, int iParam2)//Position - 0x60207
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_131(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_319(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x602CE
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_131(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_322(int iParam0, int iParam1, int iParam2)//Position - 0x60621
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
	if (!func_131(iParam0, iParam1, iParam2))
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
				func_322(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_322(iParam0, 14, uVar5[iVar3]))
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
	if (func_319(iParam0, iVar0, &iVar7, 0))
	{
		func_324(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_317(iParam0, iVar0, &iVar7))
	{
		func_324(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_324(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x60804
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
										func_324(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_324(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_124(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_319(iParam0, iVar10, &iVar4, 1))
							{
								func_324(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_324(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_324(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_324(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_324(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_324(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_324(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_324(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_324(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_324(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_319(iParam0, iVar10, &iVar4, 0))
		{
			func_324(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_317(iParam0, iVar10, &iVar4))
		{
			func_324(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

void func_340(int iParam0, int iParam1)//Position - 0x62EC3
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_0__::func_216(iParam0);
		if (__LIB_0__::func_43(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_124(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_139(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_14__::func_529(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_17__::func_127();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::isGlobal_43052EqualsValue(0) && !__LIB_0__::isGlobal_43052EqualsValue(1)) && !__LIB_0__::isGlobal_43052EqualsValue(2)) && !__LIB_0__::isGlobal_43052EqualsValue(3)) && !__LIB_0__::isGlobal_43052EqualsValue(4)) && !__LIB_0__::isGlobal_43052EqualsValue(9)) && !__LIB_0__::isGlobal_43052EqualsValue(10)))
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

void func_346()//Position - 0x63DA3
{
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	if (iLocal_54 == 0)
	{
		iLocal_53++;
	}
	else
	{
		iLocal_53 = iLocal_54;
	}
	iLocal_54 = 0;
	iLocal_55 = 0;
}

void func_350()//Position - 0x63E4D
{
	if ((__LIB_0__::func_121(iLocal_71) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_71, false)) && PED::GET_PED_PARACHUTE_STATE(iLocal_71) == -1)
	{
		TASK::CLEAR_PED_TASKS(iLocal_71);
		PED::SET_PED_KEEP_TASK(iLocal_71, true);
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
		}
		else
		{
			TASK::TASK_WANDER_STANDARD(iLocal_71, 40000f, 0);
		}
	}
}

void func_353()//Position - 0x63EE2
{
	__LIB_0__::func_714(&iLocal_88);
	__LIB_0__::func_714(&iLocal_92);
	__LIB_0__::func_714(&iLocal_89);
	__LIB_0__::func_714(&iLocal_288);
}

void func_355()//Position - 0x63F23
{
	iLocal_61 = 0;
	iLocal_55 = 1;
}

void func_356()//Position - 0x63F31
{
	func_357(82, 1);
	func_848();
}

void func_357(int iParam0, bool bParam1)//Position - 0x63F44
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
	func_383();
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

void func_383()//Position - 0x650E1
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
				if (func_131(iVar1, 14, iVar2))
				{
					func_322(iVar1, 14, iVar2);
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

void func_434()//Position - 0x6C52E
{
	switch (iLocal_55)
	{
		case 0:
			func_355();
			func_457(7, 1);
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(iLocal_71))
			{
				iLocal_344 = PED::CREATE_SYNCHRONIZED_SCENE(Local_65.f_0, (Local_65.f_1 + 2.3f), (Local_65.f_2 + 1.05f), 0f, 0f, 110f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_344, "rcmextreme2", "banter_franklin", 1000f, -4f, 7, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_71, iLocal_344, "rcmextreme2", "banter_dom", 1000f, -4f, 7, 0, 1000f, 0);
				iLocal_67 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_67, iLocal_344, "banter_cam", "rcmextreme2");
				func_454(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				MISC::CLEAR_AREA(Local_287, 10f, true, false, false, false);
				func_322(PLAYER::PLAYER_PED_ID(), 14, 158);
			}
			RECORDING::REPLAY_START_EVENT(1);
			iLocal_68 = 0;
			iLocal_62 = MISC::GET_GAME_TIMER();
			break;
		case 1:
			if (__LIB_0__::func_645(1000))
			{
				__LIB_14__::func_806(500, 1);
				__LIB_0__::func_429();
				func_438(0);
				SYSTEM::WAIT(250);
				__LIB_0__::func_84(500, 1);
				iLocal_55 = 2;
			}
			else
			{
				switch (iLocal_68)
				{
					case 0:
						__LIB_0__::func_84(500, 1);
						if (func_435(1) && __LIB_2__::func_859(&uLocal_103, "EXT2AU", "EXT2_OUTRO", 8, 0, 0, 0))
						{
							iLocal_68++;
						}
						break;
					case 1:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_344) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_344) > 0.99f)
						{
							func_438(1);
							iLocal_55 = 2;
						}
						break;
					}
			}
			break;
		case 2:
			RECORDING::REPLAY_STOP_EVENT();
			func_346();
			break;
	}
}

int func_435(int iParam0)//Position - 0x6C6F5
{
	if (iLocal_61 == 1)
	{
		return 0;
	}
	if ((iParam0 == 1 && HUD::IS_MESSAGE_BEING_DISPLAYED()) && MISC::GET_PROFILE_SETTING(203) > 0)
	{
		return 0;
	}
	if (__LIB_0__::func_75())
	{
		return 0;
	}
	return 1;
}

void func_438(int iParam0)//Position - 0x6C792
{
	int iVar0;
	if (iParam0 == 1)
	{
		iVar0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
		CAM::SET_CAM_PARAMS(iVar0, CAM::GET_CAM_COORD(iLocal_67), CAM::GET_CAM_ROT(iLocal_67, 2), CAM::GET_CAM_FOV(iLocal_67), 0, 1, 1, 2);
		CAM::SET_CAM_PARAMS(iVar0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -0.25f, -1.5f, 0.5f), 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), CAM::GET_CAM_FOV(iLocal_67), 2000, 3, 3, 2);
	}
	else
	{
		CAM::DESTROY_ALL_CAMS(false);
		SYSTEM::WAIT(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(10f);
	}
	if (__LIB_0__::func_121(iLocal_71))
	{
		if (iParam0 == 1)
		{
			TASK::CLEAR_PED_TASKS(iLocal_71);
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_71);
			__LIB_14__::func_659(iLocal_71, 149.8338f, 3664.612f, 30.5093f, 282.082f, 0, 1);
		}
		if ((__LIB_0__::func_695(iLocal_307) && __LIB_0__::func_725(iLocal_307, Local_308, 20f, 1)) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_307, -1, false))
		{
			VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_307, true);
			VEHICLE::SET_BOAT_ANCHOR(iLocal_307, false);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_309);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 171.4f, 3662f, 31.5f, 2f, 20000, 0.25f, 1, 40000f);
			TASK::TASK_ENTER_VEHICLE(0, iLocal_307, 20000, -1, 2f, 1, 0);
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_307, 2368.1108f, 4503.1675f, 29.5964f, 30f, 0, iLocal_74[3], 64, 50f, 100f);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_309);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_71, iLocal_309);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_309);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_71, false);
			TASK::TASK_WANDER_STANDARD(iLocal_71, 40000f, 0);
		}
		PED::SET_PED_KEEP_TASK(iLocal_71, true);
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			SYSTEM::WAIT(2000);
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), 145.6766f, 3661.6016f, 30.4832f, 260.1765f, 0, 1);
		}
	}
	if (CAM::DOES_CAM_EXIST(iLocal_67))
	{
		CAM::DESTROY_CAM(iLocal_67, false);
	}
	if (iParam0 == 1)
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	__LIB_14__::func_870(1, 1, 1, 1);
}

void func_454(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x6CE34
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
					if (func_131(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_324(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_131(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_324(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_131(PLAYER::PLAYER_PED_ID(), 8, 1) || func_131(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_324(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_131(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_324(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

void func_457(int iParam0, int iParam1)//Position - 0x6D044
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
			STREAMING::REQUEST_MODEL(iLocal_74[0]);
			STREAMING::REQUEST_MODEL(iLocal_74[4]);
			STREAMING::REQUEST_MODEL(iLocal_74[1]);
			STREAMING::REQUEST_MODEL(iLocal_74[2]);
			STREAMING::REQUEST_MODEL(iLocal_83[1]);
			STREAMING::REQUEST_MODEL(iLocal_83[0]);
			STREAMING::REQUEST_MODEL(iLocal_83[2]);
			STREAMING::REQUEST_MODEL(iLocal_301);
			VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Ext2_DomIntoAirport");
			VEHICLE::REQUEST_VEHICLE_RECORDING(502, "Ext2_AirportVeh");
			VEHICLE::REQUEST_VEHICLE_RECORDING(503, "Ext2_CargoTakeOff");
			STREAMING::REQUEST_PTFX_ASSET();
			break;
		case 4:
			STREAMING::REQUEST_MODEL(iLocal_74[0]);
			STREAMING::REQUEST_MODEL(iLocal_74[1]);
			STREAMING::REQUEST_MODEL(iLocal_74[3]);
			STREAMING::REQUEST_MODEL(iLocal_83[1]);
			STREAMING::REQUEST_MODEL(iLocal_83[2]);
			VEHICLE::REQUEST_VEHICLE_RECORDING(600, "Ext2_CargoFlight");
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_ANIM_DICT("rcmextreme2atv");
			STREAMING::REQUEST_ANIM_DICT("rcmjosh1@impatient");
			break;
		case 7:
			STREAMING::REQUEST_MODEL(iLocal_74[3]);
			STREAMING::REQUEST_ANIM_DICT("rcmextreme2");
			break;
	}
	if (iParam1 == 1)
	{
		iVar0 = 0;
		while (iVar0 == 0)
		{
			switch (iParam0)
			{
				case 1:
					if (((((((((((((STREAMING::HAS_MODEL_LOADED(iLocal_74[0]) && STREAMING::HAS_MODEL_LOADED(iLocal_74[4])) && STREAMING::HAS_MODEL_LOADED(iLocal_74[1])) && STREAMING::HAS_MODEL_LOADED(iLocal_74[2])) && STREAMING::HAS_MODEL_LOADED(iLocal_83[1])) && STREAMING::HAS_MODEL_LOADED(iLocal_83[0])) && STREAMING::HAS_MODEL_LOADED(iLocal_83[2])) && STREAMING::HAS_MODEL_LOADED(iLocal_301)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(500, "Ext2_DomIntoAirport")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(502, "Ext2_AirportVeh")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(503, "Ext2_CargoTakeOff")) && STREAMING::HAS_PTFX_ASSET_LOADED()) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\CARGO_PLANE_PH", false, -1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\CARGO_PLANE_PH_B", false, -1))
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_74[0], true);
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_74[1], true);
						iVar0 = 1;
					}
					break;
				case 4:
					if ((((((((STREAMING::HAS_MODEL_LOADED(iLocal_74[0]) && STREAMING::HAS_MODEL_LOADED(iLocal_74[1])) && STREAMING::HAS_MODEL_LOADED(iLocal_74[3])) && STREAMING::HAS_MODEL_LOADED(iLocal_83[1])) && STREAMING::HAS_MODEL_LOADED(iLocal_83[2])) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(600, "Ext2_CargoFlight")) && STREAMING::HAS_PTFX_ASSET_LOADED()) && STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme2atv")) && STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh1@impatient"))
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_74[0], true);
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_74[1], true);
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_74[3], true);
						iVar0 = 1;
					}
					break;
				case 7:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_74[3]) && STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme2"))
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_74[3], true);
						iVar0 = 1;
					}
					break;
			}
			SYSTEM::WAIT(0);
		}
	}
}

void func_458()//Position - 0x6D317
{
	switch (iLocal_55)
	{
		case 0:
			func_355();
			__LIB_0__::func_714(&iLocal_288);
			if (__LIB_0__::func_121(iLocal_71))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_71, false, false, false, false, false, false, false, false);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_71, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_71, 185, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_71, true);
				if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_71, 15f, 1))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_88))
					{
						iLocal_88 = __LIB_14__::func_661(iLocal_71, 1, 1, 5);
					}
					if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_287, 10f, 1))
					{
						__LIB_0__::func_229("EXT2_01", 7500, 1);
					}
					else
					{
						__LIB_0__::func_229("EXT2_04", 7500, 1);
					}
					__LIB_14__::func_875(&uLocal_329);
				}
			}
			__LIB_8__::func_397(&iLocal_91);
			iLocal_327 = 0;
			iLocal_328 = 0;
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			break;
		case 1:
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				func_468();
				if (iLocal_327 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_289, false) > 500f)
					{
						func_467(3);
					}
					else if (__LIB_0__::func_121(iLocal_71))
					{
						if (iLocal_328 == 0 && __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_71, 20f, 1))
						{
							__LIB_17__::func_121(&uLocal_329);
							__LIB_0__::func_638();
							iLocal_328 = 1;
						}
						if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_71, 10f, 1) && __LIB_0__::func_725(iLocal_71, Local_287, 10f, 1))
						{
							iLocal_327 = 1;
						}
						else if (iLocal_328 == 0)
						{
							__LIB_14__::func_881(&uLocal_329, &uLocal_103, "EXT2AU", &sLocal_330, &cLocal_336);
						}
					}
				}
				else if (!__LIB_0__::func_75())
				{
					iLocal_55 = 2;
				}
			}
			break;
		case 2:
			func_346();
			__LIB_0__::func_714(&iLocal_88);
			break;
	}
}

void func_467(int iParam0)//Position - 0x6D74D
{
	if (iLocal_61 == 0)
	{
		iLocal_56 = iParam0;
		iLocal_55 = 2;
		iLocal_54 = 9;
	}
}

void func_468()//Position - 0x6D766
{
	if (__LIB_0__::func_121(iLocal_71))
	{
		if (__LIB_0__::func_725(iLocal_71, Local_287, 2f, 1))
		{
			if (!PED::IS_PED_FACING_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 20f))
			{
				if (!__LIB_6__::func_572(iLocal_71, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) && !__LIB_6__::func_572(iLocal_71, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), 0);
				}
			}
			else if (!__LIB_6__::func_572(iLocal_71, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_72);
				TASK::TASK_PLAY_ANIM(0, "rcmjosh1@impatient", "enter", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "rcmjosh1@impatient", "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "rcmjosh1@impatient", "exit", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_72);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_71, iLocal_72);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_72);
			}
		}
		else if (!__LIB_6__::func_572(iLocal_71, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_71, Local_287, 2f, 20000, 0.25f, 0, 40000f);
		}
	}
}

void func_474()//Position - 0x6D971
{
	switch (iLocal_55)
	{
		case 0:
			func_355();
			if (__LIB_0__::func_121(iLocal_71) && !HUD::DOES_BLIP_EXIST(iLocal_88))
			{
				iLocal_88 = __LIB_14__::func_661(iLocal_71, 1, 1, 5);
			}
			iLocal_79 = 0;
			iLocal_291 = 0;
			iLocal_292 = 0;
			iLocal_278 = 0;
			iLocal_279 = 0;
			iLocal_280 = 0;
			iLocal_281 = 0;
			iLocal_283 = 0;
			iLocal_73 = 0;
			iLocal_316 = 0;
			iLocal_317 = 1;
			iLocal_323 = 0;
			iLocal_324 = 0;
			iLocal_293 = 0;
			iLocal_294 = 0;
			if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), false))
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, false, false);
			}
			func_527();
			__LIB_17__::func_122("EXTREME_02_INSIDE_PLANE", 0);
			__LIB_17__::func_122("EXTREME_02_SKYDIVE", 1);
			if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(uLocal_75[0])) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_75[0], false))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_303, "PLAYER_AT_SPEED_FREEFALL_MASTER", uLocal_75[0], 0, false, 0);
			}
			break;
		case 1:
			if (iLocal_60 != 4)
			{
				func_522();
				func_521();
				func_478();
				__LIB_14__::func_881(&uLocal_329, &uLocal_103, "EXT2AU", &sLocal_330, &cLocal_336);
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_295) > 3000)
			{
				func_467(10);
			}
			break;
		case 2:
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(15f, 0f, 3);
			func_346();
			__LIB_0__::func_345(&uLocal_40, 0, 0);
			if (iLocal_316 == 0)
			{
				__LIB_0__::func_630(758);
			}
			break;
	}
}

void func_478()//Position - 0x6DC39
{
	switch (iLocal_60)
	{
		case 0:
			func_519();
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				HUD::CLEAR_HELP(true);
				__LIB_0__::func_638();
				AUDIO::STOP_SOUND(iLocal_303);
				iLocal_60 = 1;
			}
			else
			{
				func_518();
				func_515();
				if (iLocal_291 == 0)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_314) > 1000)
					{
						__LIB_0__::func_151("EXT2_05", 7500);
						iLocal_291 = 1;
					}
				}
				else if (iLocal_292 == 0)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						__LIB_0__::func_151("EXT2_16", -1);
						iLocal_292 = 1;
					}
				}
				if (__LIB_0__::func_121(uLocal_75[0]) && ENTITY::IS_ENTITY_IN_WATER(uLocal_75[0]))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 320);
					__LIB_0__::func_345(&uLocal_40, 0, 0);
					HUD::CLEAR_HELP(true);
					iLocal_60 = 3;
				}
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_0__::func_345(&uLocal_40, 0, 0);
				HUD::CLEAR_HELP(true);
				iLocal_60 = 3;
			}
			else
			{
				switch (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()))
				{
					case 0:
						if (iLocal_323 == 0)
						{
							AUDIO::PREPARE_MUSIC_EVENT("EXTREME2_PARA");
							iLocal_323 = 1;
						}
						func_519();
						func_513();
						break;
					case 1:
						func_512();
						if (iLocal_316 == 0)
						{
							__LIB_17__::func_122("EXTREME_02_SKYDIVE", 0);
							__LIB_17__::func_122("EXTREME_02_OPEN_PARACHUTE", 1);
							iLocal_316 = 1;
						}
						break;
					case 2:
						if (iLocal_324 == 0)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_PARA");
							iLocal_324 = 1;
							__LIB_0__::func_638();
							if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								HUD::CLEAR_HELP(true);
								HUD::CLEAR_PRINTS();
							}
						}
						func_508();
						func_512();
						func_507();
						break;
					case 3:
					case -1:
						if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID()) > 50f)
						{
							if (iLocal_323 == 1 && !PLAYER::GET_PLAYER_HAS_RESERVE_PARACHUTE(PLAYER::PLAYER_ID()))
							{
								func_467(11);
							}
						}
						else
						{
							iLocal_60 = 2;
						}
						break;
					}
			}
			break;
		case 2:
			__LIB_0__::func_345(&uLocal_40, 0, 0);
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(true);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_STOP");
			__LIB_17__::func_122("EXTREME_02_SKYDIVE", 0);
			__LIB_17__::func_122("EXTREME_02_OPEN_PARACHUTE", 0);
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_289, true) < 500f)
			{
				iLocal_60 = 3;
			}
			else
			{
				__LIB_0__::func_714(&iLocal_88);
				iLocal_295 = MISC::GET_GAME_TIMER();
				iLocal_60 = 4;
			}
			break;
		case 3:
			if (iLocal_58 == 4)
			{
				iLocal_55 = 2;
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
				func_479();
				if (iLocal_293 == 0)
				{
					iLocal_293 = 1;
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_289, true) > 15f)
					{
						__LIB_0__::func_229("EXT2_03", 7500, 1);
						__LIB_14__::func_875(&uLocal_329);
					}
				}
				else if (iLocal_294 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_289, true) < 15f)
					{
						__LIB_0__::func_714(&iLocal_288);
						__LIB_0__::func_229("EXT2_07", 7500, 1);
						__LIB_14__::func_875(&uLocal_329);
						iLocal_294 = 1;
					}
				}
			}
			break;
		case 4:
			break;
	}
}

void func_479()//Position - 0x6DF18
{
	if (__LIB_0__::func_121(iLocal_71))
	{
		__LIB_17__::func_118(&uLocal_40, iLocal_71, 0, 0, 1, 1, 1);
	}
}

void func_507()//Position - 0x6EFDE
{
	if ((iLocal_283 == 0 && func_435(0)) && __LIB_0__::func_121(iLocal_71))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_71, false))
		{
			if (__LIB_2__::func_859(&uLocal_103, "EXT2AU", "EXT2_DEPLOY", 8, 0, 0, 0))
			{
				iLocal_283 = 1;
			}
		}
		else if (__LIB_2__::func_859(&uLocal_103, "EXT2AU", "EXT2_DEPLOY2", 8, 0, 0, 0))
		{
			iLocal_283 = 1;
		}
	}
}

void func_508()//Position - 0x6F046
{
	func_509(&uLocal_40, Local_289, "EXT2_15", 0, 1, 1, 1);
}

void func_509(var uParam0, struct<3> Param1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x6F062
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		__LIB_0__::func_345(uParam0, 0, 0);
	}
	uParam0->f_6 = 1;
	__LIB_17__::func_116(uParam0, Param1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_512()//Position - 0x6F415
{
	GRAPHICS::DRAW_MARKER(6, Local_289, 0f, 0f, 0f, Local_290, 4f, 4f, 4f, 255, 120, 0, 100, false, false, 2, false, 0, 0, false);
	GRAPHICS::DRAW_MARKER(6, Local_289, 0f, 0f, 0f, Local_290, 9f, 9f, 9f, 255, 120, 0, 100, false, false, 2, false, 0, 0, false);
	GRAPHICS::DRAW_MARKER(6, Local_289, 0f, 0f, 0f, Local_290, 14f, 14f, 14f, 255, 120, 0, 100, false, false, 2, false, 0, 0, false);
}

void func_513()//Position - 0x6F49B
{
	if (iLocal_274 == 0)
	{
		if (func_435(0) && __LIB_2__::func_859(&uLocal_103, "EXT2AU", "EXT2_NOATV", 8, 1, 0, 0))
		{
			iLocal_274 = 1;
		}
	}
	else if ((iLocal_281 == 0 && func_435(0)) && __LIB_2__::func_859(&uLocal_103, "EXT2AU", "EXT2_JUMPOFF", 8, 0, 0, 0))
	{
		iLocal_281 = 1;
	}
}

void func_515()//Position - 0x6F518
{
	if (__LIB_0__::func_121(uLocal_75[0]) && func_516())
	{
		__LIB_0__::func_497(759, 1, 0);
		iLocal_317 = 1;
	}
}

int func_516()//Position - 0x6F542
{
	float fVar0;
	fLocal_319 = ENTITY::GET_ENTITY_PITCH(uLocal_75[0]);
	if (iLocal_317 == 1)
	{
		fLocal_320 = 0f;
		fLocal_318 = fLocal_319;
		iLocal_317 = 0;
	}
	fVar0 = MISC::ABSF((MISC::ABSF(fLocal_319) - MISC::ABSF(fLocal_318)));
	if (func_517())
	{
		fLocal_320 = (fLocal_320 + fVar0);
	}
	else
	{
		fLocal_320 = (fLocal_320 - fVar0);
	}
	fLocal_318 = fLocal_319;
	if (fLocal_320 < -360f || fLocal_320 > 360f)
	{
		return 1;
	}
	return 0;
}

int func_517()//Position - 0x6F5C2
{
	float fVar0;
	fVar0 = (fLocal_319 - fLocal_318);
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > 0f)
	{
		return 1;
	}
	return 0;
}

void func_518()//Position - 0x6F609
{
	if (iLocal_278 == 0)
	{
		if (func_435(0) && __LIB_2__::func_859(&uLocal_103, "EXT2AU", "EXT2_TRICKS", 8, 1, 0, 0))
		{
			iLocal_278 = 1;
		}
	}
	else if (iLocal_279 == 0)
	{
		if (__LIB_0__::func_75())
		{
			Local_342 = { __LIB_0__::func_485() };
			if (MISC::ARE_STRINGS_EQUAL(&Local_342, "EXT2_TRICKS_3"))
			{
				__LIB_0__::func_638();
				iLocal_279 = 1;
			}
		}
	}
	else if (iLocal_280 == 0)
	{
		if (func_435(0) && __LIB_14__::func_782(&uLocal_103, "EXT2AU", "EXT2_TRICKS", &Local_342, 8, 0, 0))
		{
			iLocal_280 = 1;
		}
	}
}

void func_519()//Position - 0x6F69F
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_288))
	{
		iLocal_288 = __LIB_14__::func_704(Local_289, 5, 0);
		__LIB_0__::func_229("EXT2_10", 7500, 1);
		iLocal_314 = MISC::GET_GAME_TIMER();
	}
	else
	{
		func_512();
	}
}

void func_521()//Position - 0x6F709
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_297) && __LIB_0__::func_121(iLocal_91))
	{
		Local_93 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_91, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
		if (Local_93.f_2 < -35f)
		{
			if (fLocal_299 <= 0f)
			{
				GRAPHICS::REMOVE_PARTICLE_FX(iLocal_297, false);
				GRAPHICS::REMOVE_PARTICLE_FX(iLocal_298, false);
				STREAMING::REMOVE_PTFX_ASSET();
			}
			else
			{
				fLocal_299 = (fLocal_299 - 0.01f);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(iLocal_297, fLocal_299);
			}
		}
	}
}

void func_522()//Position - 0x6F77B
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	if (__LIB_0__::func_121(iLocal_71))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iLocal_71))
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_71, 0, 0);
		}
		switch (iLocal_58)
		{
			case 0:
				if ((((MISC::GET_GAME_TIMER() - iLocal_313) > 240000 || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					AUDIO::PREPARE_MUSIC_EVENT("EXTREME2_JUMP");
					ENTITY::SET_ENTITY_PROOFS(iLocal_71, true, true, true, true, true, false, false, false);
					PED::SET_PED_CAN_TORSO_VEHICLE_IK(iLocal_71, false);
					if (__LIB_0__::func_121(uLocal_75[1]) && __LIB_0__::func_121(iLocal_91))
					{
						Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_91, -1f, -50f, -4f) };
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_71, true);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_71, uLocal_75[1], Var0, 60f, 0, iLocal_74[0], 4, 3f, 100f);
						iLocal_271 = 1;
						iLocal_58 = 1;
					}
				}
				break;
			case 1:
				if (__LIB_0__::func_121(iLocal_91))
				{
					Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_71, true) };
					Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_91, true) };
					iVar3 = SYSTEM::ROUND(Var1.f_2);
					iVar4 = SYSTEM::ROUND(Var2.f_2);
					if (IntToFloat(iVar3) < 250f)
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_71);
						TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_71, 0, 0);
						iLocal_58 = 2;
					}
					else if (iVar3 < (iVar4 - 4))
					{
						if (iLocal_73 == 0)
						{
							iLocal_73 = 1;
							bVar5 = 4127;
							TASK::OPEN_SEQUENCE_TASK(&iLocal_72);
							TASK::TASK_PLAY_ANIM(0, "rcmextreme2atv", "idle_a", 8f, -8f, -1, 8, 0f, false, bVar5, false);
							TASK::TASK_PLAY_ANIM(0, "rcmextreme2atv", "idle_b", 8f, -8f, -1, 8, 0f, false, bVar5, false);
							TASK::TASK_PLAY_ANIM(0, "rcmextreme2atv", "idle_d", 8f, -8f, -1, 8, 0f, false, bVar5, false);
							TASK::TASK_PLAY_ANIM(0, "rcmextreme2atv", "idle_c", 8f, -8f, -1, 8, 0f, false, bVar5, false);
							TASK::TASK_PLAY_ANIM(0, "rcmextreme2atv", "idle_e", 8f, -8f, -1, 8, 0f, false, bVar5, false);
							TASK::SET_SEQUENCE_TO_REPEAT(iLocal_72, true);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_72);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_71, iLocal_72);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_72);
						}
					}
					else
					{
						func_525();
					}
				}
				break;
			case 2:
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_71, false))
				{
					TASK::TASK_PARACHUTE_TO_TARGET(iLocal_71, Local_287);
					iLocal_58 = 3;
				}
				break;
			case 3:
				if (PED::GET_PED_PARACHUTE_STATE(iLocal_71) == -1)
				{
					PED::SET_PED_COMPONENT_VARIATION(iLocal_71, 8, 2, 0, 0);
					if (iLocal_53 == 4)
					{
						func_467(12);
					}
					iLocal_282 = 0;
					iLocal_58 = 4;
				}
				break;
			case 4:
				func_523();
				func_468();
				break;
			}
	}
}

void func_523()//Position - 0x6FA05
{
	struct<6> Var0;
	struct<6> Var1;
	if (iLocal_282 == 0 && __LIB_0__::func_75())
	{
		Var0 = { __LIB_0__::func_486() };
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "EXT2_JUMPOFF"))
		{
			Var1 = { __LIB_13__::func_743() };
			if ((MISC::ARE_STRINGS_EQUAL(&Var1, "EXT2_JUMPOFF_1") || MISC::ARE_STRINGS_EQUAL(&Var1, "EXT2_JUMPOFF_2")) || MISC::ARE_STRINGS_EQUAL(&Var1, "EXT2_JUMPOFF_3"))
			{
			}
			else
			{
				iLocal_282 = 1;
				__LIB_0__::func_638();
			}
		}
	}
}

void func_525()//Position - 0x6FABD
{
	if ((iLocal_272 == 0 && func_435(1)) && __LIB_2__::func_859(&uLocal_103, "EXT2AU", "EXT2_DRIVE", 8, 0, 0, 0))
	{
		iLocal_272 = 1;
	}
}

void func_527()//Position - 0x6FB25
{
	Vector3 vVar0;
	func_457(7, 1);
	WATER::GET_WATER_HEIGHT(Local_308, &vVar0);
	func_528(&iLocal_307, iLocal_74[3], Local_308.f_0, Local_308.f_1, vVar0, -71.71291f, -1, 0f, 0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_307, false, true, false);
	VEHICLE::SET_BOAT_ANCHOR(iLocal_307, true);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_307, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_74[3]);
}

void func_528(int* iParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, float fParam5, int iParam6)//Position - 0x6FB80
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			__LIB_17__::func_123(iParam1);
			*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, true, true, false);
			if (iParam4 >= 0)
			{
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam4, iParam4);
			}
			if (iParam6 > -1)
			{
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, iParam6);
			}
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, fParam5);
		}
	}
}

void func_530()//Position - 0x6FC07
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
	}
	if (__LIB_0__::func_121(iLocal_91))
	{
		func_610(iLocal_91);
		VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(iLocal_91, true);
	}
	func_609();
	switch (iLocal_55)
	{
		case 0:
			func_355();
			__LIB_14__::func_874(1, "ATV skydive", 0, 0, 0, 1);
			if (__LIB_0__::func_121(uLocal_75[1]) && !VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(uLocal_75[1]))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_75[1], true, true, false);
			}
			iLocal_313 = MISC::GET_GAME_TIMER();
			iLocal_58 = 0;
			iLocal_286 = 0;
			iLocal_79 = 1;
			iLocal_304 = 0;
			iLocal_270 = 0;
			iLocal_271 = 0;
			iLocal_272 = 0;
			iLocal_325 = 0;
			iLocal_305 = 0;
			PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 66);
			if (__LIB_0__::func_323())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_RESTART2");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_READY");
			}
			break;
		case 1:
			func_537();
			func_536(iLocal_91, 0f);
			func_522();
			func_535();
			func_534();
			func_532();
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(iLocal_91))
			{
				Local_93 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_91, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
				if (Local_93.f_2 < -6.5f || Local_93.f_1 < -40f)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 2f, 3);
					if (iLocal_286 == 1)
					{
						iLocal_274 = 1;
						iLocal_60 = 0;
					}
					else
					{
						iLocal_274 = 0;
						iLocal_60 = 1;
					}
					if (__LIB_0__::func_121(iLocal_91))
					{
						VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(iLocal_91, false);
						VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_91);
					}
					AUDIO::STOP_STREAM();
					AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_JUMP");
					func_531(0);
					__LIB_0__::func_714(&iLocal_89);
					if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 0);
					}
					iLocal_55 = 2;
				}
			}
			break;
		case 2:
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 15f, 1);
			func_346();
			break;
	}
}

void func_531(int iParam0)//Position - 0x6FDC4
{
	if (iParam0 == 1)
	{
		if (__LIB_0__::func_121(iLocal_91))
		{
			VEHICLE::DISABLE_VEHCILE_DYNAMIC_AMBIENT_SCALES(iLocal_91, 255, 255);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_345))
			{
				iLocal_345 = OBJECT::CREATE_OBJECT(joaat("exile1_lightrig"), ENTITY::GET_ENTITY_COORDS(iLocal_91, true), true, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_345, ENTITY::GET_ENTITY_ROTATION(iLocal_91, 2), 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_345, true);
				ENTITY::SET_ENTITY_COLLISION(iLocal_345, false, false);
			}
		}
	}
	else
	{
		if (__LIB_0__::func_121(iLocal_91))
		{
			VEHICLE::ENABLE_VEHICLE_DYNAMIC_AMBIENT_SCALES(iLocal_91);
		}
		__LIB_0__::func_123(&iLocal_345);
	}
}

void func_532()//Position - 0x6FE3F
{
	if (__LIB_0__::func_121(uLocal_75[0]))
	{
		if (iLocal_286 == 1)
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_75[0], false))
			{
				HUD::CLEAR_PRINTS();
				if (iLocal_53 == 2)
				{
					__LIB_0__::func_714(&iLocal_88);
					__LIB_0__::func_714(&iLocal_92);
				}
				if (iLocal_304 == 0)
				{
					__LIB_0__::func_229("EXT2_09", 7500, 1);
					iLocal_304 = 1;
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_89))
				{
					iLocal_89 = __LIB_14__::func_866(uLocal_75[0], 1, 5);
				}
				iLocal_286 = 0;
			}
		}
		else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_75[0], false))
		{
			HUD::CLEAR_PRINTS();
			__LIB_0__::func_714(&iLocal_89);
			switch (iLocal_53)
			{
				case 2:
					if (__LIB_0__::func_121(iLocal_90) && !HUD::DOES_BLIP_EXIST(iLocal_92))
					{
						iLocal_92 = __LIB_14__::func_866(iLocal_90, 1, 5);
					}
					if (iLocal_305 < 2)
					{
						__LIB_0__::func_229("EXT2_02", 7500, 1);
						iLocal_305++;
					}
					break;
				case 4:
					if (iLocal_305 < 2)
					{
						__LIB_0__::func_229("EXT2_08", 7500, 1);
						iLocal_305++;
					}
					break;
			}
			iLocal_286 = 1;
		}
	}
}

void func_534()//Position - 0x6FF7C
{
	if (((iLocal_271 == 0 && func_435(1)) && (MISC::GET_GAME_TIMER() - iLocal_313) > 30000) && __LIB_2__::func_859(&uLocal_103, "EXT2AU", "EXT2_COMEON", 8, 0, 0, 0))
	{
		iLocal_271 = 1;
	}
}

void func_535()//Position - 0x6FFC4
{
	if ((iLocal_270 == 0 && func_435(1)) && __LIB_2__::func_859(&uLocal_103, "EXT2AU", "EXT2_LETSGO", 8, 1, 0, 0))
	{
		iLocal_270 = 1;
	}
}

void func_536(int iParam0, float fParam1)//Position - 0x6FFFB
{
	struct<3> Var0;
	float fVar1;
	if (__LIB_0__::func_121(iParam0))
	{
		if (iLocal_325 == 0)
		{
			if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iParam0, 200f, 1) && AUDIO::LOAD_STREAM("Plane_Interior", "EXTREME_02_SOUNDSET"))
			{
				AUDIO::PLAY_STREAM_FRONTEND();
				AUDIO::SET_VARIABLE_ON_STREAM("INOUT", fParam1);
				iLocal_325 = 1;
			}
		}
		else
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
			if ((((Var0.f_0 < 2.5f && Var0.f_0 > -2.5f) && Var0.f_2 > -6f) && Var0.f_1 < 30f) && Var0.f_1 > -40f)
			{
				fVar1 = ((Var0.f_1 - 30f) / 70f);
				fLocal_326 = MISC::ABSF(fVar1);
			}
			else
			{
				fLocal_326 = 1f;
			}
			if (fLocal_326 < 0f)
			{
				fLocal_326 = 0f;
			}
			else if (fLocal_326 > 1f)
			{
				fLocal_326 = 1f;
			}
			AUDIO::SET_VARIABLE_ON_STREAM("INOUT", fLocal_326);
		}
	}
}

void func_537()//Position - 0x700F5
{
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_297))
	{
		if (__LIB_0__::func_121(iLocal_91))
		{
			fLocal_299 = 0.4f;
			iLocal_297 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_extrm2_moving_cloud", iLocal_91, 0f, -20f, -13f, 0f, 0f, 0f, 1f, false, false, false);
		}
	}
	else
	{
		GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(iLocal_297, fLocal_299);
	}
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_298))
	{
		iLocal_298 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_rcext2_cargo_smoke", 417f, 3920f, 1449f, 0f, 0f, 0f, 1f, false, false, false, false);
	}
}

void func_609()//Position - 0x76904
{
	struct<3> Var0;
	if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
	{
		if (__LIB_0__::func_121(iLocal_91))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_91, true) };
			HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakeCargoPlaneClimb"), Var0.f_0, Var0.f_1, SYSTEM::FLOOR(ENTITY::GET_ENTITY_HEADING(iLocal_91)), 1);
		}
		if (HUD::IS_HUD_HIDDEN())
		{
			HUD::DISPLAY_HUD(true);
		}
		if (HUD::IS_RADAR_HIDDEN())
		{
			HUD::DISPLAY_RADAR(true);
		}
	}
}

void func_610(int iParam0)//Position - 0x76968
{
	if (__LIB_0__::func_121(iParam0))
	{
		VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iParam0);
		if (VEHICLE::IS_VEHICLE_HIGH_DETAIL(iParam0))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(iParam0, true);
		}
	}
}

void func_611()//Position - 0x7698F
{
	func_610(iLocal_90);
	func_610(iLocal_91);
	switch (iLocal_55)
	{
		case 0:
			func_355();
			__LIB_0__::func_638();
			__LIB_17__::func_122("EXTREME_02_DRIVE_UP_RAMP", 0);
			__LIB_17__::func_122("EXTREME_02_PLANE_TAKEOFF_CUTSCENE", 1);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 0f, 3);
			RECORDING::REPLAY_START_EVENT(1);
			if (__LIB_0__::func_121(iLocal_90))
			{
				if (__LIB_0__::func_121(uLocal_75[0]))
				{
					if (func_624(2f, -2f, -24f, -4f))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_75[0], iLocal_90, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_90, ENTITY::GET_ENTITY_COORDS(uLocal_75[0], true)), 0f, 0f, 0f, false, false, true, false, 2, true, 0);
					}
					else
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_75[0], iLocal_90, 0, 0f, -24f, -3f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					}
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_75[0], false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_75[0], -1);
					}
				}
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_90, true);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_90))
				{
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_90, (12000f - VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_90)));
				}
				VEHICLE::CONTROL_LANDING_GEAR(iLocal_90, 1);
				SYSTEM::WAIT(0);
			}
			iLocal_67 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
			CAM::SET_CAM_PARAMS(iLocal_67, -1359.8f, -2217.8f, 14.2f, 5.6f, 0f, 160.7f, 50f, 0, 1, 1, 2);
			CAM::SET_CAM_PARAMS(iLocal_67, -1348.5f, -2198.4f, 14.2f, 11.5f, 0f, 168.1f, 50f, 5000, 0, 0, 2);
			func_454(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			if ((__LIB_0__::func_121(uLocal_75[1]) && !ENTITY::IS_ENTITY_ATTACHED(uLocal_75[1])) && __LIB_0__::func_121(iLocal_90))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_75[1], iLocal_90, 0, 0.902488f, -6f, -3.55149f, 0f, 0f, 0f, false, false, true, false, 2, true, 0);
			}
			AUDIO::STOP_STREAM();
			func_866(iLocal_80);
			func_866(uLocal_75[1]);
			VEHICLE::REMOVE_VEHICLE_RECORDING(500, "Ext2_DomIntoAirport");
			VEHICLE::REMOVE_VEHICLE_RECORDING(502, "Ext2_AirportVeh");
			__LIB_0__::func_0(&(uLocal_87[1]));
			__LIB_8__::func_397(&iLocal_80);
			iLocal_343 = STREAMING::STREAMVOL_CREATE_SPHERE(-1389.5f, -2218.5f, 33.7f, 400f, 12, 127);
			__LIB_17__::func_41(PLAYER::PLAYER_PED_ID(), 10);
			__LIB_17__::func_41(PLAYER::PLAYER_PED_ID(), 1);
			iLocal_68 = 0;
			iLocal_62 = MISC::GET_GAME_TIMER();
			break;
		case 1:
			if (__LIB_0__::func_121(iLocal_90) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_90))
			{
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_90, 0.9f);
			}
			if (__LIB_0__::func_645(1000))
			{
				iLocal_68 = 5;
			}
			switch (iLocal_68)
			{
				case 0:
					if (AUDIO::LOAD_STREAM("Plane_Flyby", "EXTREME_02_SOUNDSET"))
					{
						AUDIO::PLAY_STREAM_FRONTEND();
						iLocal_68++;
					}
					break;
				case 1:
					if ((MISC::GET_GAME_TIMER() - iLocal_62) > 500)
					{
						iLocal_68++;
					}
					break;
				case 2:
					if (func_435(1) && __LIB_2__::func_859(&uLocal_103, "EXT2AU", "EXT2_MIDTRO", 8, 0, 0, 0))
					{
						iLocal_68++;
					}
					break;
				case 3:
					if ((__LIB_0__::func_121(iLocal_90) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_90)) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_90) > 16000f)
					{
						CAM::SET_CAM_PARAMS(iLocal_67, -1389.5f, -2218.5f, 33.8f, 4.4f, 0f, -44.2f, 40f, 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(iLocal_67, -1322f, -2143.9f, 69.7f, 2.1f, 0f, -43f, 40f, 25000, 0, 0, 2);
						iLocal_68++;
					}
					break;
				case 4:
					if (func_435(1))
					{
						iLocal_68++;
					}
					break;
				case 5:
					__LIB_14__::func_806(500, 1);
					__LIB_0__::func_429();
					func_612();
					CAM::RENDER_SCRIPT_CAMS(false, false, 0, true, false, 0);
					CAM::DESTROY_ALL_CAMS(false);
					AUDIO::STOP_SOUND(iLocal_300);
					__LIB_17__::func_122("EXTREME_02_PLANE_TAKEOFF_CUTSCENE", 0);
					__LIB_0__::func_123(&iLocal_302);
					func_866(iLocal_90);
					VEHICLE::REMOVE_VEHICLE_RECORDING(503, "Ext2_CargoTakeOff");
					__LIB_0__::func_0(&(uLocal_87[0]));
					__LIB_8__::func_397(&iLocal_90);
					if (STREAMING::STREAMVOL_IS_VALID(iLocal_343))
					{
						STREAMING::STREAMVOL_DELETE(iLocal_343);
					}
					SYSTEM::WAIT(1000);
					__LIB_14__::func_870(1, 1, 0, 1);
					__LIB_17__::func_122("EXTREME_02_INSIDE_PLANE", 1);
					__LIB_0__::func_84(500, 1);
					iLocal_55 = 2;
					break;
			}
			break;
		case 2:
			RECORDING::REPLAY_STOP_EVENT();
			func_346();
			break;
	}
}

void func_612()//Position - 0x76DCD
{
	int iVar0;
	if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, false, false);
	}
	func_457(4, 1);
	func_528(&iLocal_91, iLocal_74[1], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(600, "Ext2_CargoFlight"), 0f), -73.33857f, -1, 0, -1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_74[1]);
	__LIB_31__::func_995(iLocal_91, &(uLocal_87[0]), iLocal_83[2], -1);
	if (__LIB_0__::func_121(uLocal_87[0]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_87[0], true);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_83[2]);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_91, 600, "Ext2_CargoFlight", true);
	VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_91);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_91, true, true, false);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_91, false);
	VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_91, false);
	VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_91, false);
	ENTITY::SET_ENTITY_PROOFS(iLocal_91, true, true, true, true, true, false, false, false);
	VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_91, 2, false, false);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_91, 10000);
	if (!__LIB_0__::func_324())
	{
		__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), Local_76[0 /*3*/], 0f, 0, 1);
	}
	__LIB_0__::func_0(&iLocal_71);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_8__::func_397(&(uLocal_75[iVar0]));
		func_528(&(uLocal_75[iVar0]), iLocal_74[0], Local_76[iVar0 /*3*/], 91f, -1, 0f, iVar0);
		func_621(iVar0);
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_74[0]);
	if (!__LIB_0__::func_324() && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_75[0], false))
	{
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_75[0], -1);
	}
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_75[1], false);
	func_613(1, 1);
	func_35(1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLOUDS");
	func_531(1);
}

void func_613(int iParam0, int iParam1)//Position - 0x76F78
{
	__LIB_17__::func_123(iLocal_83[1]);
	if (__LIB_0__::func_121(iLocal_71))
	{
		if (__LIB_0__::func_121(uLocal_75[1]) && !PED::IS_PED_IN_VEHICLE(iLocal_71, uLocal_75[1], false))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_71, uLocal_75[1], -1);
		}
	}
	else if (iParam0 == 1)
	{
		if (__LIB_0__::func_121(uLocal_75[1]))
		{
			__LIB_31__::func_995(uLocal_75[1], &iLocal_71, iLocal_83[1], -1);
		}
	}
	else
	{
		__LIB_31__::func_994(&iLocal_71, iLocal_83[1], Local_287, (288.2311f - 180f));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_83[1]);
	func_619(iLocal_71);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_71, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_71, 500);
	__LIB_0__::func_222(&uLocal_103, 3, iLocal_71, "DOM", 0, 1);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_71, true);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_71, false);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_71, true, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_71, true);
	PED::SET_PED_PROP_INDEX(iLocal_71, 2, 0, 0, false);
	PED::SET_PED_HELMET(iLocal_71, false);
	PED::SET_PED_DIES_IN_WATER(iLocal_71, false);
	PED::SET_PED_PARACHUTE_TINT_INDEX(iLocal_71, 6);
	if (iParam1 == 1)
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_71, 8, 1, 0, 0);
		if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_71, joaat("GADGET_PARACHUTE"), false))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_71, joaat("GADGET_PARACHUTE"), 1, false, false);
		}
	}
	else
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_71, 8, 2, 0, 0);
	}
	if (iParam0 == 1 && AUDIO::IS_AUDIO_SCENE_ACTIVE("EXTREME_02_DRIVE_TO_PLANE"))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_75[1], "EXTREME_02_DOMS_ATV", 0f);
	}
	func_614(iLocal_71, 1);
}

void func_614(int iParam0, int iParam1)//Position - 0x770D4
{
	if (__LIB_0__::func_121(iParam0))
	{
		if (iParam1 == 1)
		{
			if (!__LIB_0__::func_478(17, iParam0))
			{
				__LIB_0__::func_635(17, iParam0);
			}
		}
		else if (__LIB_0__::func_478(17, iParam0))
		{
			__LIB_0__::func_483(17, iParam0, 0);
		}
	}
}

void func_619(int iParam0)//Position - 0x77358
{
	if (__LIB_0__::func_121(iParam0))
	{
		iLocal_310 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_310);
		PED::SET_PED_CONFIG_FLAG(iParam0, 132, true);
	}
}

void func_621(int iParam0)//Position - 0x773C1
{
	if (__LIB_0__::func_121(uLocal_75[iParam0]))
	{
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uLocal_75[iParam0], false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uLocal_75[iParam0], false);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_75[iParam0], 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uLocal_75[iParam0], true);
		if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(uLocal_75[iParam0]))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_75[iParam0], true, true, false);
		}
		if (iParam0 == 1)
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_75[iParam0], true);
		}
	}
}

int func_624(float fParam0, float fParam1, float fParam2, float fParam3)//Position - 0x77483
{
	struct<3> Var0;
	if (__LIB_0__::func_121(iLocal_90))
	{
		Local_94 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_90, 0f, -20f, -3f) };
		if (__LIB_0__::func_121(uLocal_75[0]))
		{
			Local_93 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_90, ENTITY::GET_ENTITY_COORDS(uLocal_75[0], true)) };
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_90, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
			if (((((((((Var0.f_0 < fParam0 && Var0.f_0 > fParam1) && Var0.f_1 > fParam2) && Var0.f_1 < 25f) && Var0.f_2 > fParam3) && Local_93.f_0 < fParam0) && Local_93.f_0 > fParam1) && Local_93.f_1 > fParam2) && Local_93.f_1 < 25f) && Local_93.f_2 > fParam3)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_625()//Position - 0x77555
{
	if (iLocal_81 > -1)
	{
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/);
	}
	func_610(uLocal_75[1]);
	func_610(iLocal_90);
	switch (iLocal_55)
	{
		case 0:
			func_355();
			if (__LIB_0__::func_121(uLocal_75[1]))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_75[1], false);
				ENTITY::SET_ENTITY_LOD_DIST(uLocal_75[1], 500);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_75[1]))
				{
					VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(uLocal_75[1]);
				}
				else
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_75[1], 500, "Ext2_DomIntoAirport", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uLocal_75[1], 1000f);
				}
			}
			if (__LIB_0__::func_121(iLocal_71))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_88))
				{
					iLocal_88 = __LIB_14__::func_661(iLocal_71, 1, 1, 5);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_88))
				{
					HUD::SET_BLIP_SCALE(iLocal_88, 0.7f);
				}
			}
			func_457(1, 1);
			func_646();
			func_645();
			if (__LIB_0__::func_121(iLocal_90) && !HUD::DOES_BLIP_EXIST(iLocal_92))
			{
				iLocal_92 = __LIB_14__::func_866(iLocal_90, 1, 5);
			}
			__LIB_0__::func_229("EXT2_02", 7500, 1);
			func_644();
			func_324(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			iLocal_286 = 1;
			iLocal_79 = 1;
			iLocal_304 = 0;
			iLocal_305 = 1;
			iLocal_306 = 0;
			iLocal_275 = 0;
			iLocal_276 = 0;
			iLocal_277 = 0;
			iLocal_268 = 0;
			iLocal_269 = 0;
			iLocal_321 = 0;
			iLocal_322 = 0;
			iLocal_325 = 0;
			iLocal_81 = -1;
			iLocal_284 = 0;
			iLocal_285 = MISC::GET_GAME_TIMER();
			iLocal_82 = MISC::GET_GAME_TIMER();
			iLocal_59 = 0;
			iLocal_98 = MISC::GET_GAME_TIMER();
			if (!__LIB_0__::func_323())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_START");
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			__LIB_17__::func_124(17, 1);
			MISC::CLEAR_AREA_OF_VEHICLES(-1028f, -2879f, 14f, 50f, false, false, false, false, false, false, 0);
			break;
		case 1:
			func_536(iLocal_90, 1f);
			if (iLocal_81 == -1)
			{
				func_640();
				func_639();
				func_636();
				func_635();
				func_532();
				func_633();
				func_630();
				func_629();
			}
			else if (((MISC::GET_GAME_TIMER() - iLocal_81) > 1500 && !__LIB_0__::func_75()) || func_624(2f, -2f, -12f, -4f))
			{
				iLocal_55 = 2;
			}
			else
			{
				func_628();
			}
			break;
		case 2:
			func_346();
			__LIB_0__::func_714(&iLocal_88);
			__LIB_0__::func_714(&iLocal_92);
			__LIB_0__::func_106(&iLocal_311);
			__LIB_0__::func_124(&iLocal_85, 1, 0, 1);
			__LIB_0__::func_124(&(uLocal_87[1]), 1, 0, 1);
			__LIB_0__::func_106(&iLocal_80);
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_296))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_296, false);
			}
			STREAMING::REMOVE_PTFX_ASSET();
			__LIB_0__::func_345(&uLocal_40, 0, 0);
			break;
	}
}

void func_628()//Position - 0x77851
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (iLocal_306 == 1)
	{
		fVar2 = 0.65f;
	}
	else if (iLocal_59 == 2)
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_94, true);
			if (fVar0 > 80f)
			{
				fVar0 = 80f;
			}
			fVar1 = ((fVar0 / 100f) / 2f);
			if (fVar0 < 40f)
			{
				fVar2 = (0.25f + fVar1);
			}
			else
			{
				fVar2 = (0.65f - fVar1);
			}
		}
	}
	else
	{
		fVar2 = 0.35f;
	}
	if (__LIB_0__::func_121(iLocal_90) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_90))
	{
		VEHICLE::SET_PLAYBACK_SPEED(iLocal_90, fVar2);
		if (iLocal_306 == 0 && VEHICLE::GET_POSITION_IN_RECORDING(iLocal_90) > 340f)
		{
			if (func_624(2f, -2f, -40f, -7f))
			{
				iLocal_55 = 2;
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_296))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_296, false);
			}
			VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_90, false);
			iLocal_306 = 1;
		}
	}
}

void func_629()//Position - 0x77945
{
	if (__LIB_0__::func_121(iLocal_80) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_80))
	{
		VEHICLE::SET_PLAYBACK_SPEED(iLocal_80, 0.32f);
	}
}

void func_630()//Position - 0x7796C
{
	int iVar0;
	struct<3> Var1;
	if ((MISC::GET_GAME_TIMER() - iLocal_98) > 250)
	{
		if (__LIB_0__::func_121(iLocal_80))
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_80, Local_99[iVar0 /*3*/]) };
				func_631(Var1);
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_80, Local_100[iVar0 /*3*/]) };
				func_631(Var1);
				iVar0++;
			}
		}
		if (__LIB_0__::func_121(iLocal_90))
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_90, Local_101[iVar0 /*3*/]) };
				func_631(Var1);
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_90, Local_102[iVar0 /*3*/]) };
				func_631(Var1);
				iVar0++;
			}
		}
	}
}

void func_631(struct<3> Param0)//Position - 0x77A50
{
	struct<3> Var0;
	struct<3> Var1;
	iLocal_98 = MISC::GET_GAME_TIMER();
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Param0, 4f, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::KNOCK_PED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID());
		}
		else if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(PLAYER::PLAYER_PED_ID()))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			Var1 = { __LIB_0__::func_79(Param0 - Var0) };
			Var1 = { Var1 * Vector(15f, 15f, 15f) };
			PED::SET_PED_TO_RAGDOLL(PLAYER::PLAYER_PED_ID(), 0, 1000, 0, false, true, false);
			ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, Var1, 0f, 0f, 1f, 0, false, true, true, false, true);
		}
	}
}

void func_633()//Position - 0x77B40
{
	if (iLocal_61 == 0 && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_71, 1) > 500f)
	{
		if (iLocal_59 == 1 || iLocal_59 == 2)
		{
			func_467(8);
		}
		else
		{
			func_467(4);
		}
	}
}

void func_635()//Position - 0x77BE2
{
	if (((iLocal_321 == 0 && __LIB_0__::func_121(uLocal_75[0])) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_75[0], false)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_75[0], -1648.9263f, -2752.3113f, 11.944445f, -1327.8447f, -2196.041f, 17.944447f, 50f, false, true, 0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_RUNWAY");
		iLocal_321 = 1;
	}
}

void func_636()//Position - 0x77C55
{
	struct<3> Var0;
	if (__LIB_0__::func_121(uLocal_75[1]))
	{
		switch (iLocal_59)
		{
			case 0:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_75[1]))
				{
					fLocal_96 = VEHICLE::GET_POSITION_IN_RECORDING(uLocal_75[1]);
					VEHICLE::SET_PLAYBACK_SPEED(uLocal_75[1], 1.04f);
					if (iLocal_268 == 0)
					{
						if (func_435(0) && __LIB_2__::func_859(&uLocal_103, "EXT2AU", "EXT2_START", 8, 1, 0, 0))
						{
							iLocal_268 = 1;
						}
					}
					else if (iLocal_269 == 0)
					{
						if (((func_435(0) && __LIB_0__::func_121(iLocal_71)) && __LIB_0__::func_121(iLocal_85)) && __LIB_2__::func_859(&uLocal_103, "EXT2AU", "EXT2_GATE", 8, 0, 0, 0))
						{
							iLocal_269 = 1;
							TASK::TASK_LOOK_AT_ENTITY(iLocal_71, iLocal_85, 2000, 0, 2);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_85, iLocal_71, 4000, 0, 2);
						}
					}
					if (fLocal_96 > 265f)
					{
						__LIB_0__::func_124(&iLocal_85, 1, 0, 1);
						__LIB_17__::func_124(17, 0);
						if (__LIB_0__::func_121(iLocal_90))
						{
							VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_90);
							iLocal_296 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_rcext2_ramp_scrape", iLocal_90, 0f, -40f, -6.45f, 0f, 0f, 0f, 1f, false, false, false);
							iLocal_302 = OBJECT::CREATE_OBJECT(iLocal_301, ENTITY::GET_ENTITY_COORDS(iLocal_90, true), true, true, false);
							ENTITY::SET_ENTITY_COLLISION(iLocal_302, false, false);
							ENTITY::SET_ENTITY_VISIBLE(iLocal_302, false, false);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_302, iLocal_90, 0, 0f, -40f, -6.45f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_300, "Scraping_Ramp", iLocal_302, "EXTREME_02_SOUNDSET", false, 0);
						}
						iLocal_305 = 0;
						iLocal_59 = 1;
					}
				}
				break;
			case 1:
				func_638();
				func_628();
				func_637();
				if (__LIB_0__::func_121(iLocal_90))
				{
					Local_95 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_90, ENTITY::GET_ENTITY_COORDS(uLocal_75[1], true)) };
					if (((Local_95.f_0 < 3f && Local_95.f_0 > -3f) && Local_95.f_1 > -8f) && Local_95.f_2 > -7f)
					{
						__LIB_0__::func_714(&iLocal_88);
						func_866(uLocal_75[1]);
						Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_90, ENTITY::GET_ENTITY_COORDS(uLocal_75[1], true)) };
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_75[1], iLocal_90, 0, Var0, 0f, 0f, 0f, false, false, true, false, 2, true, 0);
						iLocal_59 = 2;
					}
				}
				break;
			case 2:
				func_638();
				func_628();
				break;
			}
	}
}

void func_637()//Position - 0x77E8E
{
	if (((iLocal_284 < 3 && (MISC::GET_GAME_TIMER() - iLocal_285) > 9000) && func_435(1)) && __LIB_2__::func_859(&uLocal_103, "EXT2AU", "EXT2_REMIND", 8, 0, 0, 0))
	{
		iLocal_284++;
		iLocal_285 = MISC::GET_GAME_TIMER();
	}
}

void func_638()//Position - 0x77EE1
{
	if (__LIB_0__::func_121(iLocal_90) && __LIB_0__::func_121(uLocal_75[0]))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_75[0], false))
		{
			if (__LIB_0__::func_76(iLocal_90, uLocal_75[0], 1) < 500f)
			{
				__LIB_17__::func_118(&uLocal_40, iLocal_90, "EXT2_12", 0, 1, 1, 1);
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					__LIB_17__::func_122("EXTREME_02_FOCUS_ON_PLANE", 1);
				}
				else
				{
					__LIB_17__::func_122("EXTREME_02_FOCUS_ON_PLANE", 0);
				}
			}
		}
		else if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			__LIB_0__::func_345(&uLocal_40, 0, 0);
		}
	}
}

void func_639()//Position - 0x77F67
{
	if ((iLocal_59 == 2 && __LIB_0__::func_121(iLocal_90)) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_90))
	{
		fLocal_97 = VEHICLE::GET_POSITION_IN_RECORDING(iLocal_90);
		if (fLocal_97 > 450f)
		{
			VEHICLE::CONTROL_LANDING_GEAR(iLocal_90, 1);
			func_467(8);
		}
		else if ((__LIB_0__::func_121(iLocal_71) && func_435(1)) && __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_71, 50f, 1))
		{
			if ((iLocal_275 == 0 && fLocal_97 < 200f) && __LIB_2__::func_859(&uLocal_103, "EXT2AU", "EXT2_REMIND1", 7, 0, 0, 0))
			{
				iLocal_275 = 1;
			}
			if (((iLocal_276 == 0 && fLocal_97 > 200f) && fLocal_97 < 325f) && __LIB_2__::func_859(&uLocal_103, "EXT2AU", "EXT2_REMIND2", 7, 0, 0, 0))
			{
				iLocal_276 = 1;
			}
		}
	}
}

void func_640()//Position - 0x78048
{
	if (__LIB_0__::func_121(iLocal_90))
	{
		if (func_624(2f, -2f, -24f, -4f))
		{
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
			iLocal_81 = MISC::GET_GAME_TIMER();
			__LIB_0__::func_345(&uLocal_40, 0, 0);
			__LIB_0__::func_325();
		}
		if ((((iLocal_277 == 0 && func_435(1)) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID())) && func_624(1.5f, -1.5f, -50f, -10f)) && __LIB_2__::func_859(&uLocal_103, "EXT2AU", "EXT2_BACK", 7, 0, 0, 0))
		{
			iLocal_277 = 1;
			__LIB_17__::func_122("EXTREME_02_DRIVE_TO_PLANE", 0);
			__LIB_17__::func_122("EXTREME_02_DRIVE_UP_RAMP", 1);
		}
		if (iLocal_322 == 0 && func_624(2f, -2f, -30f, -10f))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_ENTER");
			iLocal_322 = 1;
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_82) > 50)
		{
			iLocal_82 = MISC::GET_GAME_TIMER();
			if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID())) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				if (func_624(3.5f, 1.6f, -40f, -5.75f) || func_624(-1.6f, -3.5f, -40f, -5.75f))
				{
					__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "GENERIC_CURSE_HIGH", 17);
				}
			}
		}
	}
}

void func_644()//Position - 0x78408
{
	__LIB_31__::func_994(&iLocal_85, iLocal_83[0], Local_86, 58.77041f);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_83[0]);
	func_619(iLocal_85);
	PED::SET_PED_MAX_HEALTH(iLocal_85, 1);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_85, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_85, true);
	TASK::TASK_STAND_STILL(iLocal_85, -1);
	PED::SET_PED_KEEP_TASK(iLocal_85, true);
	if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_85, joaat("WEAPON_SMG"), false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_85, joaat("WEAPON_SMG"), 30, true, true);
	}
}

void func_645()//Position - 0x78475
{
	struct<3> Var0;
	Var0 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(503, "Ext2_CargoTakeOff"), 0f) };
	func_528(&iLocal_90, iLocal_74[1], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(503, "Ext2_CargoTakeOff"), 0f), Var0.f_2, -1, 0, -1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_74[1]);
	if (__LIB_0__::func_121(iLocal_90))
	{
		__LIB_31__::func_995(iLocal_90, &(uLocal_87[0]), iLocal_83[2], -1);
		if (__LIB_0__::func_121(uLocal_87[0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_87[0], true);
		}
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_90, true, 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_90, false);
		VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_90, false);
		VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_90, false);
		ENTITY::SET_ENTITY_PROOFS(iLocal_90, true, true, true, true, true, false, false, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_90, 2, false, false);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_90, 10000);
		VEHICLE::CONTROL_LANDING_GEAR(iLocal_90, 2);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_90, 503, "Ext2_CargoTakeOff", true);
		VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_90);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_90, true, true, false);
	}
	func_528(&iLocal_80, iLocal_74[2], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(502, "Ext2_AirportVeh"), 0f), 161.56927f, 0, 0f, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_74[2]);
	if (__LIB_0__::func_121(iLocal_80))
	{
		__LIB_31__::func_995(iLocal_80, &(uLocal_87[1]), iLocal_83[2], -1);
		if (__LIB_0__::func_121(uLocal_87[1]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_87[1], true);
		}
		VEHICLE::SET_VEHICLE_LIVERY(iLocal_80, 0);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_80, 5000);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_80, false);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_80, 502, "Ext2_AirportVeh", true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_80, true, true, false);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_83[2]);
}

void func_646()//Position - 0x785E5
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_311))
	{
		func_528(&iLocal_311, iLocal_74[4], Local_312, 147.61f, 2, 0f, -1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_311, 5f);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_74[4]);
	if (__LIB_0__::func_121(iLocal_311))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_311, 2);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_311, false);
	}
}

void func_647()//Position - 0x78641
{
	struct<3> Var0;
	struct<3> Var1;
	func_690();
	if (__LIB_0__::func_121(uLocal_75[1]))
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(uLocal_75[1], true);
	}
	switch (iLocal_55)
	{
		case 0:
			func_355();
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				if (((CAM::IS_SCREEN_FADED_IN() && !__LIB_0__::func_323()) && __LIB_0__::func_121(Local_52.f_28[0])) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -954.5357f, -2760.5532f, 11.916363f, -947.6847f, -2749.719f, 15.631608f, 26f, false, true, 0))
				{
					CUTSCENE::REMOVE_CUTSCENE();
					__LIB_14__::func_747(0);
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("es_2_rcm_concat", 6, 8);
					iLocal_68 = 0;
					CAM::SET_GAMEPLAY_ENTITY_HINT(Local_52.f_28[0], 0f, 0f, 0.5f, true, -1, 3000, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.45f);
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.9f);
					CAM::SET_GAMEPLAY_HINT_FOV(30f);
					CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_66);
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					}
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_52.f_28[0], 1) > 6f)
					{
						TASK::TASK_GO_TO_ENTITY(0, Local_52.f_28[0], 20000, 6f, 1f, 2f, 0);
					}
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_52.f_28[0], 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_66);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_66);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_66);
					iLocal_70 = MISC::GET_GAME_TIMER();
				}
				else
				{
					__LIB_14__::func_851("es_2_rcm_concat", 0);
					iLocal_68 = 2;
				}
			}
			if (__LIB_0__::func_121(Local_52.f_35[2]))
			{
				iLocal_311 = Local_52.f_35[2];
				if (__LIB_0__::func_121(iLocal_311))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_311, true, true);
					__LIB_14__::func_659(iLocal_311, Local_312, 147.61f, 0, 1);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_311);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_311, true);
				}
			}
			iLocal_69 = 0;
			break;
		case 1:
			if (iLocal_68 == 0 || iLocal_68 == 1)
			{
				if (((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_6__::func_572(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE"))) && __LIB_0__::func_121(Local_52.f_28[0])) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_52.f_28[0], 1) < 5f)
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_52.f_28[0], 0);
				}
			}
			switch (iLocal_68)
			{
				case 0:
					if (__LIB_0__::func_121(Local_52.f_28[0]))
					{
						STREAMING::REQUEST_ANIM_DICT("rcmextreme2");
						if (STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme2"))
						{
							__LIB_0__::func_222(&uLocal_103, 0, Local_52.f_28[0], "DOM", 0, 1);
							__LIB_0__::func_222(&uLocal_103, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
							if (!__LIB_0__::func_75() && __LIB_2__::func_859(&uLocal_103, "EXT2AU", "EXT2_INT_LI", 8, 0, 0, 0))
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_52.f_28[0], false);
								TASK::TASK_PLAY_ANIM(Local_52.f_28[0], "rcmextreme2", "leadin", 8f, -8f, -1, 2050, 0f, false, false, false);
								TASK::TASK_LOOK_AT_ENTITY(Local_52.f_28[0], PLAYER::PLAYER_PED_ID(), -1, 48, 2);
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_52.f_28[0], -1, 0, 2);
								PED::PLAY_FACIAL_ANIM(Local_52.f_28[0], "leadin_facial", "rcmextreme2");
								STREAMING::REQUEST_MODEL(iLocal_74[0]);
								VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Ext2_DomIntoAirport");
								iLocal_68++;
							}
						}
					}
					break;
				case 1:
					if ((MISC::GET_GAME_TIMER() - iLocal_70) > 3000)
					{
						if (!__LIB_0__::func_75())
						{
							__LIB_0__::func_221(&uLocal_103, 0);
							iLocal_68++;
						}
					}
					break;
				case 2:
					STREAMING::REQUEST_MODEL(iLocal_74[0]);
					VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Ext2_DomIntoAirport");
					if ((__LIB_14__::func_740(1, 1093140480, 0) && STREAMING::HAS_MODEL_LOADED(iLocal_74[0])) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(500, "Ext2_DomIntoAirport"))
					{
						if (__LIB_0__::func_121(Local_52.f_28[0]))
						{
							iLocal_71 = Local_52.f_28[0];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_71, true, true);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_71, "Dom", 0, iLocal_83[1], 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_71, "Dom", 2, iLocal_83[1], 0);
						}
						if (__LIB_0__::func_121(Local_52.f_35[0]))
						{
							uLocal_75[0] = Local_52.f_35[0];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_75[0], true, true);
						}
						else
						{
							func_682(0);
						}
						if (__LIB_0__::func_121(uLocal_75[0]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_75[0], "Franklin_Quad", 0, iLocal_83[0], 0);
						}
						if (__LIB_0__::func_121(Local_52.f_35[1]))
						{
							uLocal_75[1] = Local_52.f_35[1];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_75[1], true, true);
						}
						else
						{
							func_682(1);
						}
						if (__LIB_0__::func_121(uLocal_75[1]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_75[1], "DOM_Quad", 0, iLocal_83[0], 0);
						}
						if (__LIB_0__::func_121(iLocal_311))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_311, "DOM_Flatbed_truck", 0, iLocal_74[4], 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_311, "DOM_Flatbed_truck", 2, iLocal_74[4], 0);
						}
						__LIB_14__::func_841();
						CUTSCENE::START_CUTSCENE(0);
						if (__LIB_0__::func_121(uLocal_75[0]))
						{
							CUTSCENE::SET_VEHICLE_MODEL_PLAYER_WILL_EXIT_SCENE(ENTITY::GET_ENTITY_MODEL(uLocal_75[0]));
						}
						RECORDING::REPLAY_START_EVENT(1);
						iLocal_68++;
					}
					break;
				case 3:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							CAM::STOP_GAMEPLAY_HINT(false);
						}
						__LIB_14__::func_592(-954.77423f, -2761.5667f, 11.944938f, -947.8115f, -2750.9712f, 15.674092f, 9f, Local_64, 273.2345f, 1, 1, 1, 0, 0);
						__LIB_14__::func_592(-945.4674f, -2754.3022f, 11.870284f, -989.59656f, -2835.255f, 15.964786f, 7f, Local_64, 273.2345f, 1, 1, 1, 0, 0);
						__LIB_14__::func_785(Local_64, 273.2345f, 0, 145);
						func_454(-954.19f, -2760.05f, 14.64f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						__LIB_0__::func_84(500, 0);
						__LIB_14__::func_659(uLocal_75[0], Local_77[0 /*3*/], fLocal_78[0], 0, 1);
						__LIB_14__::func_659(uLocal_75[1], Local_77[1 /*3*/], fLocal_78[1], 0, 1);
						func_457(1, 0);
						iLocal_68++;
					}
					break;
				case 4:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_71) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Dom", 0)))
						{
							iLocal_71 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Dom", 0));
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_71, true, true);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_311) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("DOM_Flatbed_truck", 0)))
						{
							iLocal_311 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("DOM_Flatbed_truck", 0));
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_311, true, true);
						}
						if ((__LIB_0__::func_121(iLocal_71) && __LIB_0__::func_121(uLocal_75[1])) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Dom", 0))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_71, uLocal_75[1], -1);
							if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_75[1], 500, "Ext2_DomIntoAirport", true);
								VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(uLocal_75[1]);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uLocal_75[1], 1000f);
							}
							else
							{
								Var0 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(500, "Ext2_DomIntoAirport"), 1000f) };
								Var1 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(500, "Ext2_DomIntoAirport"), 1000f) };
								__LIB_14__::func_659(uLocal_75[1], Var0, Var1.f_2, 0, 1);
							}
							VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_75[1], true, true, false);
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uLocal_75[1]);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_71, false, false);
						}
						if (__LIB_0__::func_121(uLocal_75[0]))
						{
							if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
							{
								if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_75[0], false))
								{
									PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_75[0], -1);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
								}
							}
							if ((!CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin_Quad", 0) && __LIB_0__::func_121(uLocal_75[0])) && ENTITY::IS_ENTITY_VISIBLE(uLocal_75[0]))
							{
								VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(uLocal_75[0], true, false, true);
							}
						}
						if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
						{
							iLocal_69 = 1;
						}
					}
					else
					{
						if (iLocal_69 == 1)
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						}
						__LIB_14__::func_870(1, 1, 1, 1);
						if (__LIB_0__::func_121(iLocal_311))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_311, false);
						}
						func_649();
						iLocal_55 = 2;
					}
					break;
			}
			break;
		case 2:
			RECORDING::REPLAY_STOP_EVENT();
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 3);
			func_346();
			__LIB_14__::func_800(&Local_52, 0, 1);
			break;
	}
}

void func_649()//Position - 0x78F48
{
	int iVar0;
	func_457(1, 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_682(iVar0);
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_74[0]);
	if (!__LIB_0__::func_324() && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), Local_84, 331.4214f, 0, 1);
		}
		if (__LIB_0__::func_121(uLocal_75[0]) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_75[0], false))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_75[0], -1);
		}
	}
	__LIB_17__::func_122("EXTREME_02_DRIVE_TO_PLANE", 1);
	func_613(1, 1);
	__LIB_0__::func_222(&uLocal_103, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
}

void func_682(int iParam0)//Position - 0x7F22B
{
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_75[iParam0]))
	{
		func_528(&(uLocal_75[iParam0]), iLocal_74[0], Local_77[iParam0 /*3*/], fLocal_78[iParam0], -1, 0f, iParam0);
	}
	func_621(iParam0);
}

void func_690()//Position - 0x7F5A7
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (__LIB_0__::func_121(Local_52.f_28[0]))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Dom", Local_52.f_28[0], 0);
		}
		else if (__LIB_0__::func_121(iLocal_71))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Dom", iLocal_71, 0);
		}
	}
}

void func_691()//Position - 0x7F5ED
{
	if (iLocal_53 < (10 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_71))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_71, false))
			{
				func_467(1);
			}
			else
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_467(9);
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), true))
				{
					if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iLocal_71, 0, 2))
					{
						func_467(5);
					}
				}
				else if (__LIB_17__::func_126(iLocal_71, 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					func_467(9);
				}
				else if (__LIB_0__::func_121(uLocal_75[1]))
				{
					if (iLocal_53 == 2 && !PED::IS_PED_IN_VEHICLE(iLocal_71, uLocal_75[1], false))
					{
						func_467(9);
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_75[1], PLAYER::PLAYER_PED_ID(), true) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uLocal_75[1], 0, 2))
					{
						func_467(6);
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_85, false))
			{
				func_467(7);
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), true) && WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iLocal_85, 0, 2))
			{
				func_467(7);
			}
		}
		if ((iLocal_79 == 1 && ENTITY::DOES_ENTITY_EXIST(uLocal_75[0])) && ENTITY::IS_ENTITY_DEAD(uLocal_75[0], false))
		{
			func_467(2);
		}
	}
}

void func_726(int iParam0)//Position - 0x80A92
{
	func_825(1, 1);
	iLocal_68 = -1;
	iLocal_61 = 1;
	if (!__LIB_0__::func_324())
	{
		__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0, 0, 1);
	}
	func_35(0);
	func_819(1, 0);
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, true, false, false, false);
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_AREA_OF_OBJECTS(Local_312, 100f, 0);
			iLocal_54 = 1;
			break;
		case 1:
			MISC::CLEAR_AREA_OF_OBJECTS(Local_312, 100f, 0);
			func_457(1, 1);
			func_649();
			if (__LIB_0__::func_121(uLocal_75[1]))
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_75[1], 500, "Ext2_DomIntoAirport", true);
				VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(uLocal_75[1]);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uLocal_75[1], 1000f);
			}
			__LIB_14__::func_865(&iLocal_315, Local_64, 273.2345f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
			func_646();
			iLocal_54 = 2;
			break;
		case 2:
			func_612();
			__LIB_17__::func_122("EXTREME_02_INSIDE_PLANE", 1);
			iLocal_54 = 4;
			break;
		case 3:
			func_613(0, 0);
			if (!__LIB_0__::func_324())
			{
				__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), Local_65, 288.2311f, 0, 1);
			}
			func_35(1);
			func_527();
			iLocal_54 = 7;
			break;
		case 4:
			if (!__LIB_0__::func_324())
			{
				__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), Local_65, 288.2311f, 0, 1);
			}
			iLocal_54 = 8;
			break;
	}
	__LIB_0__::func_222(&uLocal_103, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	if (!__LIB_0__::func_324())
	{
		__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1112014848, 12, 5000, 0, 0);
	}
	if (iParam0 == 1)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_RESTART1");
	}
	else if (iParam0 == 2)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_RESTART2");
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		__LIB_0__::func_433(uLocal_75[0], -1, 1);
		SYSTEM::WAIT(500);
	}
	else
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	if (iParam0 == 4)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		__LIB_0__::func_84(500, 1);
	}
	if (iParam0 == 0 || iParam0 == 3)
	{
		__LIB_14__::func_879(1, 0, 1);
	}
	else if (iParam0 == 2)
	{
		__LIB_14__::func_879(1, 1, 0);
		func_324(PLAYER::PLAYER_PED_ID(), 8, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	else
	{
		__LIB_14__::func_879(1, 1, 1);
	}
	iLocal_55 = 2;
}

void func_819(int iParam0, int iParam1)//Position - 0x875AB
{
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	__LIB_0__::func_429();
	__LIB_0__::func_345(&uLocal_40, 0, 0);
	AUDIO::STOP_SOUND(iLocal_300);
	AUDIO::STOP_SOUND(iLocal_303);
	__LIB_17__::func_122("EXTREME_02_DRIVE_TO_PLANE", 0);
	__LIB_17__::func_122("EXTREME_02_FOCUS_ON_PLANE", 0);
	__LIB_17__::func_122("EXTREME_02_DRIVE_UP_RAMP", 0);
	__LIB_17__::func_122("EXTREME_02_PLANE_TAKEOFF_CUTSCENE", 0);
	__LIB_17__::func_122("EXTREME_02_INSIDE_PLANE", 0);
	__LIB_17__::func_122("EXTREME_02_SKYDIVE", 0);
	__LIB_17__::func_122("EXTREME_02_OPEN_PARACHUTE", 0);
	AUDIO::STOP_STREAM();
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	func_866(iLocal_90);
	func_866(iLocal_91);
	func_866(iLocal_80);
	func_866(uLocal_75[1]);
	VEHICLE::REMOVE_VEHICLE_RECORDING(500, "Ext2_DomIntoAirport");
	VEHICLE::REMOVE_VEHICLE_RECORDING(502, "Ext2_AirportVeh");
	VEHICLE::REMOVE_VEHICLE_RECORDING(503, "Ext2_CargoTakeOff");
	VEHICLE::REMOVE_VEHICLE_RECORDING(600, "Ext2_CargoFlight");
	STREAMING::REMOVE_ANIM_DICT("rcmextreme2atv");
	STREAMING::REMOVE_ANIM_DICT("rcmjosh1@impatient");
	func_614(PLAYER::PLAYER_PED_ID(), 0);
	func_614(iLocal_71, 0);
	func_531(0);
	func_353();
	func_823(iParam0);
	func_822(iParam0);
	func_821();
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_297))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_297, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_296))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_296, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_298))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_298, false);
	}
	STREAMING::REMOVE_PTFX_ASSET();
	__LIB_0__::func_123(&iLocal_302);
	VEHICLE::REMOVE_VEHICLE_ASSET(iLocal_74[0]);
	if (CAM::DOES_CAM_EXIST(iLocal_67))
	{
		CAM::DESTROY_CAM(iLocal_67, false);
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 0);
		func_322(PLAYER::PLAYER_PED_ID(), 14, 158);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_STOP");
	if (STREAMING::STREAMVOL_IS_VALID(iLocal_343))
	{
		STREAMING::STREAMVOL_DELETE(iLocal_343);
	}
	__LIB_14__::func_871(&Local_52, 0, 0, 0);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	__LIB_17__::func_124(17, 0);
	if (iParam1 == 1)
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
		}
		__LIB_0__::func_221(&uLocal_103, 1);
		__LIB_0__::func_221(&uLocal_103, 3);
		if (TASK::DOES_SCENARIO_GROUP_EXIST("LSA_Planes") && !TASK::IS_SCENARIO_GROUP_ENABLED("LSA_Planes"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("LSA_Planes", true);
		}
		__LIB_16__::func_793(2, 0);
		PED::SET_CREATE_RANDOM_COPS(true);
	}
}

void func_821()//Position - 0x877E6
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_74[iVar0]);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_74[iVar0], false);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_83[iVar0]);
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_301);
}

void func_822(int iParam0)//Position - 0x8783E
{
	if (__LIB_0__::func_121(iLocal_90))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_90, false, 1);
	}
	if (__LIB_0__::func_121(uLocal_75[1]))
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_75[1], false);
	}
	if (iParam0 == 1)
	{
		__LIB_8__::func_397(&(uLocal_75[0]));
		__LIB_8__::func_397(&(uLocal_75[1]));
		__LIB_8__::func_397(&iLocal_80);
		__LIB_8__::func_397(&iLocal_307);
		__LIB_8__::func_397(&iLocal_90);
		__LIB_8__::func_397(&iLocal_91);
		__LIB_8__::func_397(&iLocal_311);
		__LIB_8__::func_397(&iLocal_315);
	}
	else
	{
		__LIB_0__::func_106(&(uLocal_75[0]));
		__LIB_0__::func_106(&(uLocal_75[1]));
		__LIB_0__::func_106(&iLocal_80);
		__LIB_0__::func_106(&iLocal_307);
		__LIB_0__::func_106(&iLocal_90);
		__LIB_0__::func_106(&iLocal_91);
		__LIB_0__::func_106(&iLocal_311);
		__LIB_0__::func_106(&iLocal_315);
	}
}

void func_823(int iParam0)//Position - 0x878E8
{
	if (__LIB_0__::func_121(iLocal_71))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_71, false, 1);
	}
	if (iParam0 == 1)
	{
		__LIB_0__::func_0(&iLocal_85);
		__LIB_0__::func_0(&iLocal_71);
		__LIB_0__::func_0(&(uLocal_87[0]));
		__LIB_0__::func_0(&(uLocal_87[1]));
	}
	else
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			func_824();
		}
		else
		{
			func_350();
		}
		__LIB_0__::func_124(&iLocal_85, 1, 0, 1);
		__LIB_0__::func_124(&iLocal_71, 1, 0, 1);
		__LIB_0__::func_124(&(uLocal_87[0]), 1, 0, 1);
		__LIB_0__::func_124(&(uLocal_87[1]), 1, 0, 1);
	}
}

void func_824()//Position - 0x87968
{
	if ((((((__LIB_0__::func_121(iLocal_71) && !__LIB_6__::func_572(iLocal_71, joaat("SCRIPT_TASK_WANDER_STANDARD"))) && !__LIB_6__::func_572(iLocal_71, joaat("SCRIPT_TASK_SMART_FLEE_PED"))) && !__LIB_6__::func_572(iLocal_71, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"))) && !__LIB_6__::func_572(iLocal_71, joaat("SCRIPT_TASK_SMART_FLEE_PED"))) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_71, false)) && PED::GET_PED_PARACHUTE_STATE(iLocal_71) == -1)
	{
		PED::SET_PED_KEEP_TASK(iLocal_71, true);
		TASK::TASK_WANDER_STANDARD(iLocal_71, 40000f, 0);
	}
}

void func_825(bool bParam0, bool bParam1)//Position - 0x879EA
{
	if (bParam0)
	{
		__LIB_17__::func_28(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_454(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_838()//Position - 0x87CAC
{
	iLocal_56 = 0;
	HUD::REQUEST_ADDITIONAL_TEXT("EXT2", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	PED::SET_CREATE_RANDOM_COPS(false);
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), false);
		PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false);
	}
	iLocal_74[0] = joaat("blazer");
	iLocal_74[1] = joaat("cargoplane");
	iLocal_74[2] = joaat("jet");
	iLocal_74[3] = joaat("seashark");
	iLocal_74[4] = joaat("flatbed");
	iLocal_83[0] = joaat("S_M_M_Security_01");
	iLocal_83[1] = __LIB_2__::func_910(52);
	iLocal_83[2] = joaat("S_M_M_Pilot_01");
	iLocal_301 = joaat("prop_ld_test_01");
	Local_77[0 /*3*/] = { -950.8f, -2751.98f, 13.21f };
	fLocal_78[0] = 199.05f;
	Local_77[1 /*3*/] = { -950.192f, -2755.96f, 13.3639f };
	fLocal_78[1] = -178.182f;
	Local_76[0 /*3*/] = { 444.8519f, 3921.2214f, 2398.1f };
	Local_76[1 /*3*/] = { 443.3347f, 3923.1145f, 2398.1f };
	__LIB_15__::func_955(2, 1);
	if (TASK::DOES_SCENARIO_GROUP_EXIST("LSA_Planes") && TASK::IS_SCENARIO_GROUP_ENABLED("LSA_Planes"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("LSA_Planes", false);
	}
	uLocal_63 = __LIB_17__::func_125(1);
	Local_99[0 /*3*/] = { 12.75f, 6f, -7f };
	Local_99[1 /*3*/] = { 22.75f, -4f, -7f };
	Local_99[2 /*3*/] = { -12.75f, 6f, -7f };
	Local_99[3 /*3*/] = { -22.75f, -4f, -7f };
	Local_100[0 /*3*/] = { 12.75f, 15f, -7f };
	Local_100[1 /*3*/] = { 22.75f, 5f, -7f };
	Local_100[2 /*3*/] = { -12.75f, 15f, -7f };
	Local_100[3 /*3*/] = { -22.75f, 5f, -7f };
	Local_101[0 /*3*/] = { 15f, -8f, -4f };
	Local_101[1 /*3*/] = { 29f, -17f, -4f };
	Local_101[2 /*3*/] = { -15f, -8f, -4f };
	Local_101[3 /*3*/] = { -29f, -17f, -4f };
	Local_102[0 /*3*/] = { 15f, 8f, -4f };
	Local_102[1 /*3*/] = { 29f, -1f, -4f };
	Local_102[2 /*3*/] = { -15f, 8f, -4f };
	Local_102[3 /*3*/] = { -29f, -1f, -4f };
	VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_74[0], 3);
	func_614(PLAYER::PLAYER_PED_ID(), 1);
}

void func_848()//Position - 0x88287
{
	__LIB_14__::func_841();
	if (__LIB_14__::func_843())
	{
		func_819(0, 1);
	}
	__LIB_14__::func_871(&Local_52, 0, 0, 0);
	MISC::SET_BIT(&(Global_113386.f_24976.f_2), 2);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_866(int iParam0)//Position - 0x88936
{
	if (__LIB_0__::func_121(iParam0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0);
	}
}

