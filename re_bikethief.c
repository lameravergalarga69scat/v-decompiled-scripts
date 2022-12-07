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
	var uLocal_43 = 0;
	struct<4> Local_44[10];
	bool bLocal_45 = 0;
	struct<3> Local_46 = { 0, 0, 0 } ;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	struct<3> Local_54 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_57 = { 0, 0, 0 } ;
	struct<3> Local_58 = { 0, 0, 0 } ;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	float fLocal_63 = 0f;
	float fLocal_64 = 0f;
	float fLocal_65 = 0f;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	float fLocal_72 = 0f;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int* iLocal_79 = NULL;
	int* iLocal_80 = NULL;
	int* iLocal_81 = NULL;
	var uLocal_82 = 16;
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
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	char* sLocal_247 = NULL;
	char* sLocal_248 = NULL;
	char* sLocal_249 = NULL;
	char* sLocal_250 = NULL;
	char* sLocal_251 = NULL;
	char* sLocal_252 = NULL;
	char* sLocal_253 = NULL;
	char* sLocal_254 = NULL;
	char* sLocal_255 = NULL;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	struct<3> Local_261 = { 0, 0, 0 } ;
	int iLocal_262 = 0;
	bool bLocal_263 = 0;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	char* sLocal_269 = NULL;
	char* sLocal_270 = NULL;
	int iLocal_271 = 0;
	bool bLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = -1;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 1000;
	var uLocal_286 = 1000;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	struct<2> Local_291 = { 0, 5 } ;
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
	var uLocal_307 = 5;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
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
	iLocal_67 = 1;
	sLocal_250 = "REBTH_HANGAR";
	sLocal_251 = "REBTH_RUNSOF";
	sLocal_252 = "REBTH_TAUNT";
	sLocal_264 = "RANDOM@BICYCLE_THIEF@BASE";
	sLocal_265 = "RANDOM@BICYCLE_THIEF@ASK_HELP";
	sLocal_267 = "RANDOM@BICYCLE_THIEF@IDLE_A";
	sLocal_268 = "RANDOM@BICYCLE_THIEF@GET_OFF_BIKE";
	sLocal_269 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	sLocal_270 = "RANDOM@BICYCLE_THIEF@THANKS";
	Local_54 = { ScriptParam_291.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_226();
	}
	if (SYSTEM::VDIST2(Local_54, 421.92f, -1930.95f, 23.18f) < 16f)
	{
		bLocal_263 = true;
	}
	else if (SYSTEM::VDIST2(Local_54, 769.3f, -151.66f, 73.79f) < 16f)
	{
		bLocal_263 = 2;
	}
	else if (SYSTEM::VDIST2(Local_54, -1923.93f, 254.48f, 85.7f) < 16f)
	{
		bLocal_263 = 3;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		else if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), Local_54, 1) < 100f)
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	if (bLocal_263 != 3)
	{
		if (__LIB_42__::func_568(Local_54, 26, bLocal_263, 0, 0))
		{
			__LIB_35__::func_176(26);
		}
		else
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	else if (__LIB_42__::func_568(Local_54, 8, 0, 0, 0))
	{
		__LIB_35__::func_176(8);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iLocal_262 = func_180();
	iLocal_271 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_54 - Vector(20f, 20f, 20f), Local_54 + Vector(20f, 20f, 20f), false, true, true, true);
	while (true)
	{
		SYSTEM::WAIT(0);
		__LIB_0__::func_371();
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 28);
			PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 13);
			PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 35);
		}
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_47 > 1)
		{
			if (func_159())
			{
				func_158();
				func_226();
			}
			else
			{
				switch (iLocal_47)
				{
					case 0:
						func_155();
						break;
					case 1:
						if (func_154())
						{
							func_158();
							func_226();
						}
						else
						{
							func_142();
						}
						break;
					case 2:
						func_111();
						func_107();
						func_106();
						func_105();
						func_103();
						func_102();
						func_94();
						break;
					case 3:
						func_92();
						func_74();
						func_65();
						break;
					case 4:
						func_1();
						break;
					}
			}
		}
		else
		{
			func_226();
		}
	}
}

void func_1()//Position - 0x2D4
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(iLocal_50))
	{
		if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_50, 1) > 50f)
		{
			__LIB_30__::func_870(8);
			func_26();
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_77) > 10000)
		{
			__LIB_30__::func_870(8);
			func_26();
		}
		else if ((iLocal_275 == 0 && !__LIB_0__::func_75()) && __LIB_35__::func_536(&uLocal_82, "REBTHAU", sLocal_249, 4, 0, 0, 0))
		{
			iLocal_275 = 1;
		}
	}
}

void func_26()//Position - 0xC66
{
	int iVar0;
	if (bLocal_263 == 3)
	{
		__LIB_26__::func_515(__LIB_18__::func_168(PLAYER::PLAYER_PED_ID()), 4, 5);
	}
	else
	{
		__LIB_26__::func_515(__LIB_18__::func_168(PLAYER::PLAYER_PED_ID()), 1, 3);
	}
	if (bLocal_263 != 3)
	{
		func_39(26, bLocal_263);
	}
	else
	{
		func_39(8, 0);
	}
	if (bLocal_263 == 1)
	{
		iVar0 = __LIB_18__::func_173();
		switch (iVar0)
		{
			case 0:
				while (!__LIB_26__::func_490(-1551606815, 6, 1, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					SYSTEM::WAIT(0);
				}
				break;
			case 1:
				while (!__LIB_26__::func_490(-980148216, 6, 2, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					SYSTEM::WAIT(0);
				}
				break;
			case 2:
				while (!__LIB_26__::func_490(-1857996981, 6, 4, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					SYSTEM::WAIT(0);
				}
				break;
			}
	}
	__LIB_20__::func_174();
	func_226();
}

void func_39(int iParam0, bool bParam1)//Position - 0x11C2
{
	if (iParam0 == -1)
	{
		iParam0 = __LIB_35__::func_171();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= __LIB_30__::func_873(iParam0))
	{
		__LIB_30__::func_872(iParam0, bParam1);
		if (!__LIB_0__::func_67(51))
		{
			__LIB_18__::func_203("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, __LIB_26__::func_250(), 0, 138, 0);
			__LIB_0__::func_460(51);
		}
		if (__LIB_30__::func_859(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (__LIB_30__::func_871(iParam0, bParam1) != 322)
		{
			__LIB_37__::func_544(__LIB_30__::func_871(iParam0, bParam1), Local_46.f_0, Local_46.f_1);
		}
		Global_113374 = bParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				__LIB_30__::func_870(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				__LIB_30__::func_870(7);
			}
			else
			{
				__LIB_30__::func_870(1);
			}
		}
	}
}

void func_65()//Position - 0x2546
{
	if (__LIB_0__::func_121(iLocal_50) && __LIB_1__::func_183(iLocal_51))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_51, false))
		{
			__LIB_30__::func_888(&uLocal_288);
			__LIB_0__::func_523(&iLocal_80);
			if (iLocal_78 == 0 && !HUD::DOES_BLIP_EXIST(iLocal_79))
			{
				iLocal_79 = __LIB_6__::func_825(iLocal_51, 0, 0);
			}
		}
		else
		{
			__LIB_0__::func_523(&iLocal_79);
			if (!HUD::DOES_BLIP_EXIST(iLocal_80))
			{
				iLocal_80 = __LIB_6__::func_850(iLocal_50, 0, 145);
				if (iLocal_289 == 0)
				{
					__LIB_30__::func_878(&uLocal_288);
					iLocal_289 = 1;
				}
			}
		}
	}
}

void func_74()//Position - 0x274E
{
	float fVar0;
	if (__LIB_0__::func_121(iLocal_50) && __LIB_1__::func_183(iLocal_51))
	{
		__LIB_30__::func_879(iLocal_80, &uLocal_288);
		if (fLocal_72 > 0f)
		{
			fVar0 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_50, 1);
			if (fVar0 > (fLocal_72 + fLocal_65))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_51, false))
				{
					__LIB_30__::func_870(7);
					func_26();
				}
				else
				{
					func_226();
				}
			}
		}
		else
		{
			fLocal_72 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_50, 1);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_51, 0f);
				AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
			}
		}
		if (iLocal_256 == 0)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50, 40f, 40f, 40f, false, true, 0))
			{
				func_90();
				if (iLocal_259 == 0)
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50, 25f, 25f, 25f, false, true, 0))
					{
						if (((((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_51, false) && PED::IS_PED_FACING_PED(iLocal_50, PLAYER::PLAYER_PED_ID(), 30f)) && func_81(iLocal_50, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7)) && !PED::IS_PED_RAGDOLL(iLocal_50)) && !TASK::IS_PED_GETTING_UP(iLocal_50)) && __LIB_35__::func_536(&uLocal_82, "REBTHAU", "REBTH_APEBIK", 4, 0, 0, 0))
						{
							TASK::TASK_PLAY_ANIM(iLocal_50, sLocal_269, "RETURNING_FRONT_B", 8f, -8f, -1, 0, 0f, false, false, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							iLocal_259 = 1;
						}
					}
					else
					{
						iLocal_259 = 1;
					}
				}
			}
		}
		else if (((!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_51, iLocal_50, 35f, 35f, 35f, false, true, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_51, false)) && !func_80()) && __LIB_35__::func_536(&uLocal_82, "REBTHAU", "REBTH_PLASTE", 4, 0, 0, 0))
		{
			func_78(0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50, false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_70, joaat("PLAYER"));
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_50, true);
			TASK::TASK_COMBAT_PED(iLocal_50, PLAYER::PLAYER_PED_ID(), 0, 16);
			PED::SET_PED_KEEP_TASK(iLocal_50, true);
			SYSTEM::WAIT(0);
			__LIB_30__::func_870(7);
			func_26();
		}
		if (PED::IS_PED_IN_VEHICLE(iLocal_50, iLocal_51, false))
		{
			if (!__LIB_0__::func_75() && __LIB_35__::func_536(&uLocal_82, "REBTHAU", "REBTH_GETOFF", 4, 0, 0, 0))
			{
			}
			iLocal_77 = MISC::GET_GAME_TIMER();
			iLocal_47 = 4;
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_51, iLocal_50, 20f, 20f, 20f, false, true, 0))
		{
			if (func_77())
			{
				if (!__LIB_4__::func_465(iLocal_50, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
				{
					iLocal_78 = 1;
					func_78(0);
					__LIB_30__::func_888(&uLocal_288);
					__LIB_0__::func_523(&iLocal_80);
					__LIB_0__::func_523(&iLocal_79);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_51, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_53);
					if (iLocal_256 == 0)
					{
						TASK::TASK_ENTER_VEHICLE(0, iLocal_51, 20000, -1, 2f, 8, 0);
					}
					else
					{
						TASK::TASK_ENTER_VEHICLE(0, iLocal_51, 20000, -1, 2f, 262152, 0);
					}
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_51, fLocal_62, 786485);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_53);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_50, iLocal_53);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_53);
					PED::SET_PED_KEEP_TASK(iLocal_50, true);
				}
			}
			else
			{
				switch (iLocal_256)
				{
					case 0:
						if ((((iLocal_259 == 1 && !__LIB_4__::func_465(iLocal_50, joaat("SCRIPT_TASK_PLAY_ANIM"))) && !PED::IS_PED_RAGDOLL(iLocal_50)) && !TASK::IS_PED_GETTING_UP(iLocal_50)) && __LIB_35__::func_536(&uLocal_82, "REBTHAU", "REBTH_THANKS", 4, 0, 0, 0))
						{
							if (PED::IS_PED_FACING_PED(iLocal_50, PLAYER::PLAYER_PED_ID(), 30f) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_50, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) == 7)
							{
								TASK::TASK_PLAY_ANIM(iLocal_50, sLocal_269, "RETURNING_FRONT_A", 8f, -8f, -1, 0, 0f, false, false, false);
							}
							iLocal_257 = MISC::GET_GAME_TIMER();
							iLocal_256++;
						}
						else
						{
							func_90();
						}
						break;
					case 1:
						if (((((MISC::GET_GAME_TIMER() - iLocal_257) > 10000 && !__LIB_4__::func_465(iLocal_50, joaat("SCRIPT_TASK_PLAY_ANIM"))) && !PED::IS_PED_RAGDOLL(iLocal_50)) && !TASK::IS_PED_GETTING_UP(iLocal_50)) && __LIB_35__::func_536(&uLocal_82, "REBTHAU", sLocal_253, 4, 0, 0, 0))
						{
							if (PED::IS_PED_FACING_PED(iLocal_50, PLAYER::PLAYER_PED_ID(), 30f))
							{
								func_78(0);
								TASK::TASK_PLAY_ANIM(iLocal_50, sLocal_270, "THANKS_A", 8f, -8f, -1, 0, 0f, false, false, false);
							}
							iLocal_257 = MISC::GET_GAME_TIMER();
							iLocal_256++;
						}
						else
						{
							func_78(1);
						}
						break;
					case 2:
						if (((((MISC::GET_GAME_TIMER() - iLocal_257) > 10000 && !__LIB_4__::func_465(iLocal_50, joaat("SCRIPT_TASK_PLAY_ANIM"))) && !PED::IS_PED_RAGDOLL(iLocal_50)) && !TASK::IS_PED_GETTING_UP(iLocal_50)) && __LIB_35__::func_536(&uLocal_82, "REBTHAU", sLocal_254, 4, 0, 0, 0))
						{
							if (PED::IS_PED_FACING_PED(iLocal_50, PLAYER::PLAYER_PED_ID(), 30f))
							{
								func_78(0);
								TASK::TASK_PLAY_ANIM(iLocal_50, sLocal_268, "BIKE_BACK_NOW_A", 8f, -8f, -1, 0, 0f, false, false, false);
							}
							iLocal_256++;
						}
						else
						{
							func_78(1);
						}
						break;
					default:
						func_78(1);
						break;
					}
				}
			}
	}
}

int func_77()//Position - 0x2C89
{
	if (iLocal_78 == 1)
	{
		return 1;
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_76) < 4000)
	{
		return 0;
	}
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_51, true))
	{
		return 0;
	}
	if (__LIB_0__::func_121(iLocal_49) && PED::IS_PED_BEING_JACKED(iLocal_49))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_51, -1, false))
	{
		return 0;
	}
	return 1;
}

void func_78(int iParam0)//Position - 0x2CE7
{
	if (__LIB_0__::func_121(iLocal_50))
	{
		if (iParam0 == 1)
		{
			if (!PED::IS_PED_IN_GROUP(iLocal_50) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_50, PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()));
				PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_50, true);
				PED::SET_GROUP_FORMATION_SPACING(__LIB_0__::func_399(), 2f, -1f, -1f);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_50, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
		}
		else if (PED::IS_PED_IN_GROUP(iLocal_50))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_50);
		}
	}
}

int func_80()//Position - 0x2D6C
{
	if (bLocal_263 == 3)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1875.8583f, 262.3736f, 82.96029f, -1927.3792f, 234.79507f, 90.71558f, 50.25f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_81(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2DB1
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	iVar2 = func_89(iParam0, iParam1);
	if (!__LIB_0__::func_121(iParam0) || !__LIB_0__::func_121(iParam1))
	{
		if (iVar2 != -1)
		{
			__LIB_9__::func_801(&(Local_44[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!__LIB_11__::func_747(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_84();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_44[iVar2 /*4*/].f_1 = iParam0;
		Local_44[iVar2 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_82(&(Local_44[iVar2 /*4*/]), Var1, iParam1, &(Local_44[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_44[iVar2 /*4*/].f_3) < iParam4);
}

int func_82(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5)//Position - 0x2E72
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	iVar3 = 0;
	if (!__LIB_0__::func_121(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { __LIB_10__::func_616(iParam2, iParam5) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &Var1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (ENTITY::IS_ENTITY_A_PED(iVar3))
	{
		__LIB_0__::func_121(iVar3);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3) == iParam2)
		{
			if (bLocal_45)
			{
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = MISC::GET_GAME_TIMER();
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar3))
	{
		__LIB_0__::func_121(iVar3);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam2, false))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar3) == PED::GET_VEHICLE_PED_IS_IN(iParam2, false))
			{
				if (bLocal_45)
				{
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

int func_84()//Position - 0x3063
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_44.f_0)
	{
		if ((Local_44[iVar0 /*4*/] == 0 && Local_44[iVar0 /*4*/].f_1 == 0) && Local_44[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_89(int iParam0, int iParam1)//Position - 0x31B9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_44.f_0)
	{
		if (Local_44[iVar0 /*4*/].f_1 == iParam0 && Local_44[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_90()//Position - 0x31F8
{
	if (iLocal_78 == 0 && __LIB_0__::func_121(iLocal_50))
	{
		if (__LIB_4__::func_465(iLocal_50, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
		{
			TASK::CLEAR_PED_TASKS(iLocal_50);
		}
		if ((((!__LIB_4__::func_465(iLocal_50, joaat("SCRIPT_TASK_PLAY_ANIM")) && !PED::IS_PED_FACING_PED(iLocal_50, PLAYER::PLAYER_PED_ID(), 20f)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_50, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) == 7) && !PED::IS_PED_RAGDOLL(iLocal_50)) && !TASK::IS_PED_GETTING_UP(iLocal_50))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_50, PLAYER::PLAYER_PED_ID(), 0);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_50, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		}
	}
}

void func_92()//Position - 0x332B
{
	if (__LIB_0__::func_121(iLocal_49))
	{
		if (iLocal_68 == 0)
		{
			PED::SET_PED_FLEE_ATTRIBUTES(iLocal_49, 2, false);
			TASK::CLEAR_PED_TASKS(iLocal_49);
			if (__LIB_1__::func_183(iLocal_51))
			{
				if (bLocal_263 == 2)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_51))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_51);
					}
					VEHICLE::REMOVE_VEHICLE_RECORDING(1, "RE_BikeThief2");
				}
				if (PED::IS_PED_IN_VEHICLE(iLocal_49, iLocal_51, true))
				{
					PED::KNOCK_PED_OFF_VEHICLE(iLocal_49);
				}
			}
			PED::SET_PED_KEEP_TASK(iLocal_49, true);
			TASK::TASK_SMART_FLEE_PED(iLocal_49, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
			iLocal_68 = 1;
		}
		else
		{
			if (((((iLocal_69 == 0 && __LIB_0__::func_76(iLocal_49, PLAYER::PLAYER_PED_ID(), 1) < 30f) && !PED::IS_PED_RAGDOLL(iLocal_49)) && __LIB_4__::func_465(iLocal_49, joaat("SCRIPT_TASK_SMART_FLEE_PED"))) && !__LIB_0__::func_75()) && __LIB_35__::func_536(&uLocal_82, "REBTHAU", sLocal_251, 4, 0, 0, 0))
			{
				iLocal_69 = 1;
			}
			if (__LIB_0__::func_76(iLocal_49, PLAYER::PLAYER_PED_ID(), 1) > 50f)
			{
				__LIB_0__::func_124(&iLocal_49, 1, 0, 1);
			}
		}
	}
}

void func_94()//Position - 0x3471
{
	if ((__LIB_0__::func_121(iLocal_49) && __LIB_0__::func_121(iLocal_50)) && __LIB_1__::func_183(iLocal_51))
	{
		if (func_101())
		{
			__LIB_9__::func_981(&uLocal_276, 0, 0);
			__LIB_0__::func_0(&iLocal_49);
			__LIB_11__::func_32(&iLocal_51);
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_50, PLAYER::PLAYER_PED_ID(), 25f, 25f, 25f, false, true, 0) && __LIB_35__::func_536(&uLocal_82, "REBTHAU", sLocal_255, 4, 0, 0, 0))
			{
			}
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_50, "WORLD_HUMAN_STAND_MOBILE", 0, true);
			func_96();
		}
		else
		{
			__LIB_10__::func_618(iLocal_79, iLocal_51, fLocal_65, 1061158912, 0);
		}
	}
}

void func_96()//Position - 0x3664
{
	func_226();
}

int func_101()//Position - 0x383A
{
	if (__LIB_0__::func_76(iLocal_51, PLAYER::PLAYER_PED_ID(), 1) > (fLocal_65 + 100f))
	{
		return 1;
	}
	if (__LIB_0__::func_76(iLocal_51, PLAYER::PLAYER_PED_ID(), 1) > fLocal_65)
	{
		if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50, sLocal_267, "IDLE_A", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_50, sLocal_267, "IDLE_A") > 0.99f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50, sLocal_267, "IDLE_B", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_50, sLocal_267, "IDLE_B") > 0.99f)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50, sLocal_267, "IDLE_C", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_50, sLocal_267, "IDLE_C") > 0.99f))
		{
			return 1;
		}
	}
	return 0;
}

void func_102()//Position - 0x38F4
{
	if ((((((((((iLocal_75 > -1 && (MISC::GET_GAME_TIMER() - iLocal_75) > 5000) && !__LIB_0__::func_75()) && __LIB_0__::func_121(iLocal_49)) && __LIB_0__::func_121(iLocal_50)) && __LIB_1__::func_183(iLocal_51)) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49, 13f, 13f, 13f, false, true, 0)) && !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_50, iLocal_49, 13f, 13f, 13f, false, true, 0)) && PED::IS_PED_IN_VEHICLE(iLocal_49, iLocal_51, false)) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_50, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, false, true, 0)) && __LIB_35__::func_536(&uLocal_82, "REBTHAU", sLocal_250, 4, 0, 0, 0))
	{
		iLocal_75 = -1;
	}
}

void func_103()//Position - 0x39C7
{
	if (func_104())
	{
		iLocal_76 = MISC::GET_GAME_TIMER();
		__LIB_0__::func_523(&iLocal_79);
		__LIB_9__::func_981(&uLocal_276, 0, 0);
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			iLocal_52 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_52, true, true);
		}
		if (__LIB_0__::func_121(iLocal_50))
		{
			TASK::TASK_CLEAR_LOOK_AT(iLocal_50);
		}
		if ((__LIB_0__::func_121(iLocal_49) && !__LIB_0__::func_75()) && __LIB_35__::func_536(&uLocal_82, "REBTHAU", "REBTH_INAIR", 4, 0, 0, 0))
		{
		}
		iLocal_47 = 3;
	}
	else
	{
		if (((bLocal_272 == 0 && HUD::DOES_BLIP_EXIST(iLocal_79)) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID())) && __LIB_0__::func_121(iLocal_49))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_49, 1) < 30f || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_49, true), 10f, true))
			{
				bLocal_272 = true;
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_79, bLocal_272);
			}
		}
		if (((bLocal_263 == 2 && __LIB_0__::func_121(iLocal_49)) && __LIB_1__::func_183(iLocal_51)) && PED::IS_PED_IN_VEHICLE(iLocal_49, iLocal_51, false))
		{
			if (iLocal_260 == 0)
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_51, 1, "RE_BikeThief2", 30f, 786468);
				iLocal_260 = 1;
				Local_261 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "RE_BikeThief2"), VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "RE_BikeThief2")) };
			}
			else if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_51) || __LIB_0__::func_529(iLocal_51, Local_261, 1) < 5f)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_51))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_51);
				}
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_49, iLocal_51, PLAYER::PLAYER_PED_ID(), 8, fLocal_62, 786468, 10f, 1f, false);
			}
		}
	}
}

int func_104()//Position - 0x3B61
{
	if (!__LIB_0__::func_121(iLocal_49))
	{
		return 1;
	}
	else if (__LIB_0__::func_121(iLocal_51))
	{
		if (iLocal_290 == 0)
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_49, iLocal_51, false))
			{
				iLocal_290 = 1;
			}
		}
		else if (!PED::IS_PED_IN_VEHICLE(iLocal_49, iLocal_51, false))
		{
			return 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	return 0;
}

void func_105()//Position - 0x3BC1
{
	if ((__LIB_0__::func_121(iLocal_49) && __LIB_1__::func_183(iLocal_51)) && PED::IS_PED_IN_VEHICLE(iLocal_49, iLocal_51, false))
	{
		if (iLocal_67)
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49, 40f, 40f, 40f, false, true, 0))
			{
				fLocal_62 = fLocal_64;
				TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_49, fLocal_62);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_49, PLAYER::PLAYER_PED_ID(), 20000, 16, 2);
				iLocal_67 = 0;
			}
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49, 40f, 40f, 40f, false, true, 0))
		{
			fLocal_62 = fLocal_63;
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_49, fLocal_62);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_49, PLAYER::PLAYER_PED_ID(), 20000, 16, 2);
			iLocal_67 = 1;
		}
	}
}

void func_106()//Position - 0x3C70
{
	if (((((((((iLocal_73 < 5 && !__LIB_0__::func_75()) && __LIB_0__::func_121(iLocal_49)) && __LIB_0__::func_121(iLocal_50)) && __LIB_1__::func_183(iLocal_51)) && PED::IS_PED_IN_VEHICLE(iLocal_49, iLocal_51, false)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49, 13f, 13f, 13f, false, true, 0)) && !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_50, iLocal_49, 13f, 13f, 13f, false, true, 0)) && (MISC::GET_GAME_TIMER() - iLocal_74) > 15000) && __LIB_35__::func_536(&uLocal_82, "REBTHAU", sLocal_252, 4, 0, 0, 0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_49, joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1 && !TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_49))
		{
			TASK::TASK_DRIVE_BY(iLocal_49, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 15f, 50, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
		}
		iLocal_74 = MISC::GET_GAME_TIMER();
		iLocal_73++;
	}
}

void func_107()//Position - 0x3D61
{
	if ((((iLocal_258 == 0 && __LIB_0__::func_121(iLocal_50)) && __LIB_0__::func_121(iLocal_49)) && __LIB_1__::func_183(iLocal_51)) && PED::IS_PED_IN_VEHICLE(iLocal_49, iLocal_51, false))
	{
		if (iLocal_273 == 0)
		{
			if (__LIB_35__::func_536(&uLocal_82, "REBTHAU", sLocal_247, 4, func_110(), 0, 0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_50);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_53);
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_49, -1, 2048, 2);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_57, 2f, 20000, 40000f, 0.5f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_51, 1000);
				TASK::TASK_PLAY_ANIM(0, sLocal_265, sLocal_266, 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_267, "IDLE_A", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_267, "IDLE_B", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_267, "IDLE_C", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_267, "IDLE_B", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_267, "IDLE_A", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_267, "IDLE_B", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_267, "IDLE_C", 8f, -8f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_53);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_50, iLocal_53);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_53);
				iLocal_74 = MISC::GET_GAME_TIMER();
				iLocal_75 = MISC::GET_GAME_TIMER();
				if (bLocal_263 == 3)
				{
					sLocal_248 = "REBTH_HELP2X";
				}
				else
				{
					sLocal_248 = "REBTH_HELP2";
				}
				iLocal_273 = 1;
			}
		}
		else if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_50, 1) < 30f)
			{
				if (!__LIB_0__::func_75())
				{
					if (__LIB_35__::func_536(&uLocal_82, "REBTHAU", sLocal_248, 4, 0, 0, 0))
					{
						iLocal_258 = 1;
					}
				}
				else if (iLocal_274 == 0)
				{
					__LIB_6__::func_833();
					iLocal_274 = 1;
				}
			}
		}
	}
}

int func_110()//Position - 0x3F98
{
	int iVar0;
	struct<3> Var1;
	Var1 = { 100f, 100f, 20f };
	if (!PED::IS_PED_INJURED(iLocal_50))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_50, PLAYER::PLAYER_PED_ID(), Var1, false, true, 0))
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_111()//Position - 0x3FDC
{
	if ((__LIB_0__::func_121(iLocal_49) && __LIB_1__::func_183(iLocal_51)) && PED::IS_PED_IN_VEHICLE(iLocal_49, iLocal_51, false))
	{
		__LIB_39__::func_909(&uLocal_276, iLocal_51, 0, 0, 1, 1, 1);
	}
}

void func_142()//Position - 0x512B
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_49))
	{
		if (PED::IS_PED_INJURED(iLocal_49))
		{
			func_158();
			func_226();
		}
		else if (func_153())
		{
			if (__LIB_18__::func_173() == 0)
			{
				__LIB_0__::func_203(&uLocal_82, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				sLocal_249 = "REBTH_RESPM";
			}
			else if (__LIB_18__::func_173() == 1)
			{
				__LIB_0__::func_203(&uLocal_82, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				sLocal_249 = "REBTH_RESPF";
			}
			else if (__LIB_18__::func_173() == 2)
			{
				__LIB_0__::func_203(&uLocal_82, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				sLocal_249 = "REBTH_RESPT";
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_51, false) && !PED::IS_PED_INJURED(iLocal_49))
			{
				if (bLocal_263 == 2)
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_49, iLocal_51, 20000, -1, 2f, 1, 0);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_53);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_51, 20000, -1, 2f, 1, 0);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_51, PLAYER::PLAYER_PED_ID(), 8, fLocal_62, 786468, 10f, 1f, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_53);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_49, iLocal_53);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_53);
					PED::SET_PED_KEEP_TASK(iLocal_49, true);
				}
			}
			__LIB_0__::func_523(&iLocal_81);
			iLocal_79 = __LIB_6__::func_850(iLocal_49, 1, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_79, bLocal_272);
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			if (bLocal_263 == 1)
			{
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(472.19504f, -1974.9023f, 18.577868f, 572.74677f, -1921.2164f, 28.686325f, 75f, false, false, true);
			}
			iLocal_47 = 2;
			__LIB_40__::func_733(1);
		}
	}
}

int func_153()//Position - 0x5872
{
	switch (bLocal_263)
	{
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 365.9538f, -1971.7162f, 18.34454f, 526.409f, -1861.9406f, 34.529064f, 100f, false, true, 0))
			{
				return 1;
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 886.14014f, -229.93735f, 67.42569f, 652.7365f, -91.95201f, 83.21314f, 60f, false, true, 0))
			{
				return 1;
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1969.382f, 382.13315f, 68.15017f, -1878.1522f, 158.40523f, 104.85044f, 100f, false, true, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_154()//Position - 0x593D
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { 16f, 16f, 6f };
	Var1 = { -16f, -16f, -6f };
	if (__LIB_0__::func_121(iLocal_49))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (__LIB_1__::func_183(iLocal_51))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_51, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (__LIB_0__::func_121(iLocal_50))
	{
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_50, 31086, 0f, 0f, 0f), 3f, true))
		{
			return 1;
		}
		Var0 = { Var0 + PED::GET_PED_BONE_COORDS(iLocal_50, 31086, 0f, 0f, 0f) };
		Var1 = { Var1 + PED::GET_PED_BONE_COORDS(iLocal_50, 31086, 0f, 0f, 0f) };
		if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("WEAPON_SMOKEGRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("WEAPON_GRENADE"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("WEAPON_STICKYBOMB"), true))
		{
			return 1;
		}
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_50, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(iLocal_50, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
		if (PED::IS_PED_FLEEING(iLocal_50))
		{
			return 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	return 0;
}

void func_155()//Position - 0x5A91
{
	if (iLocal_66 == 0)
	{
		switch (bLocal_263)
		{
			case 1:
				Local_56 = { 433.57f, -1916.68f, 24.04f };
				fLocal_60 = 248.5f;
				Local_57 = { 439.054f, -1920.1454f, 23.5581f };
				Local_58 = { 434.31f, -1908.87f, 25.92f };
				fLocal_61 = -163.17f;
				Local_55 = { 435.18f, -1915.18f, 24.68f };
				fLocal_59 = 226.13f;
				fLocal_63 = 10f;
				fLocal_64 = 20f;
				iLocal_48 = joaat("scorcher");
				fLocal_65 = 250f;
				sLocal_253 = "REBTH_THX2";
				sLocal_254 = "REBTH_THX3";
				sLocal_255 = "REBTH_GONE";
				break;
			case 2:
				Local_56 = { 774.06f, -155.63f, 73.44f };
				fLocal_60 = 144.3932f;
				Local_57 = { 769.8723f, -156.9548f, 73.5144f };
				Local_58 = { 773.632f, -150.3134f, 74.6217f };
				fLocal_61 = 151.6004f;
				Local_55 = { 771.41f, -154.29f, 74.09f };
				fLocal_59 = 150.54f;
				fLocal_63 = 10f;
				fLocal_64 = 20f;
				iLocal_48 = joaat("scorcher");
				fLocal_65 = 250f;
				sLocal_253 = "REBTH_THX2";
				sLocal_254 = "REBTH_THX3";
				sLocal_255 = "REBTH_GONE";
				break;
			case 3:
				Local_56 = { -1927.94f, 254.7125f, 84.4018f };
				fLocal_60 = 285.0046f;
				Local_57 = { -1934.7849f, 253.2105f, 83.8164f };
				Local_58 = { -1931.04f, 252.19f, 84.99f };
				fLocal_61 = 42.33f;
				Local_55 = { -1932.27f, 254.5f, 84.4f };
				fLocal_59 = 96.81f;
				fLocal_63 = 10f;
				fLocal_64 = 35f;
				iLocal_48 = joaat("bati");
				fLocal_65 = 400f;
				sLocal_253 = "REBTH_THX2X";
				sLocal_254 = "REBTH_THX3X";
				sLocal_255 = "REBTH_GONEX";
				break;
		}
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_56 - Vector(20f, 20f, 20f), Local_56 + Vector(20f, 20f, 20f), false, true);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_56 - Vector(20f, 20f, 20f), Local_56 + Vector(20f, 20f, 20f), 0);
		MISC::CLEAR_AREA(Local_56, 20f, true, false, false, false);
		iLocal_66 = 1;
	}
	STREAMING::REQUEST_MODEL(joaat("G_M_Y_StrPunk_01"));
	STREAMING::REQUEST_MODEL(joaat("A_M_Y_BeachVesp_01"));
	STREAMING::REQUEST_MODEL(iLocal_48);
	if ((((STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_StrPunk_01")) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_BeachVesp_01"))) && STREAMING::HAS_MODEL_LOADED(iLocal_48)) && func_157()) && func_156())
	{
		iLocal_51 = VEHICLE::CREATE_VEHICLE(iLocal_48, Local_55, fLocal_59, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_48);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_48, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_51, true, true, false);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_51, false);
		VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(iLocal_51, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_51, true);
		AUDIO::START_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_51, "RE_CAR_STEAL_STOLEN_VEHICLE", 0f);
		fLocal_62 = fLocal_64;
		if (bLocal_263 == 3)
		{
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_51, 49, 0);
			VEHICLE::SET_VEHICLE_MOD_KIT(iLocal_51, 0);
			VEHICLE::SET_VEHICLE_MOD(iLocal_51, 16, 2, false);
			VEHICLE::SET_VEHICLE_MOD(iLocal_51, 11, 3, false);
			VEHICLE::SET_VEHICLE_MOD(iLocal_51, 12, 2, false);
			VEHICLE::SET_VEHICLE_MOD(iLocal_51, 13, 2, false);
			VEHICLE::SET_VEHICLE_MOD(iLocal_51, 23, 10, false);
			VEHICLE::SET_VEHICLE_MOD(iLocal_51, 24, 10, false);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_51, 22, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_51, 17, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_51, 21, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_51, 20, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_51, 19, true);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_51, 89, 89);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_51, 0, 1);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iLocal_51, 1);
		}
		PED::ADD_RELATIONSHIP_GROUP("re_bikethief_relGroupVictim", &iLocal_70);
		PED::ADD_RELATIONSHIP_GROUP("re_bikethief_relGroupThief", &iLocal_71);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_71, iLocal_70);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_71, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_70, joaat("PLAYER"));
		iLocal_49 = PED::CREATE_PED(19, joaat("G_M_Y_StrPunk_01"), Local_58, fLocal_61, true, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_StrPunk_01"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49, true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_49, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_49, iLocal_71);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_49, 3);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49, 17, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49, 13, false);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_49, 1, true);
		PED::SET_PED_HELMET(iLocal_49, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_49, 42, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_49, 281, true);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_49, 2);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_49, "G_M_Y_StreetPunk_01_BLACK_MINI_03");
		TASK::TASK_PLAY_ANIM(iLocal_49, sLocal_264, "base", 8f, -8f, -1, 1, 0f, false, false, false);
		iLocal_50 = PED::CREATE_PED(19, joaat("A_M_Y_BeachVesp_01"), Local_56, fLocal_60, true, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_BeachVesp_01"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50, true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_50, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_50, 8, true);
		if (bLocal_263 == 3)
		{
			PED::SET_PED_HELMET(iLocal_50, true);
		}
		else
		{
			PED::SET_PED_HELMET(iLocal_50, false);
		}
		PED::SET_PED_CONFIG_FLAG(iLocal_50, 26, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_50, 42, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_50, 167, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_50, 281, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_50, iLocal_70);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_50, false);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_50, "A_M_Y_BeachVesp_01_LATINO_MINI_01");
		TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_50, "WORLD_HUMAN_STAND_MOBILE", 0, true);
		__LIB_0__::func_203(&uLocal_82, 1, iLocal_49, "BThief", 0, 1);
		__LIB_0__::func_203(&uLocal_82, 2, iLocal_50, "BThiefVictim", 0, 1);
		if (iLocal_262 == 0)
		{
			if (bLocal_263 == 3)
			{
				sLocal_247 = "REBTH_HELPX";
			}
			else
			{
				sLocal_247 = "REBTH_HELP";
			}
			sLocal_251 = "REBTH_RUNSOF";
			sLocal_252 = "REBTH_TAUNT";
			sLocal_266 = "I_CANT_CATCH_HIM_ON_FOOT";
		}
		else if (iLocal_262 == 1)
		{
			if (bLocal_263 == 3)
			{
				sLocal_247 = "REBTH_HLPBX";
			}
			else
			{
				sLocal_247 = "REBTH_HLPB";
			}
			sLocal_251 = "REBTH_RUNB";
			sLocal_252 = "REBTH_TNTB";
			sLocal_266 = "MY_DADS_GOING_TO_KILL_ME";
		}
		else
		{
			sLocal_247 = "REBTH_HLPC";
			sLocal_251 = "REBTH_RUNC";
			sLocal_252 = "REBTH_TNTC";
			sLocal_266 = "PLEASE_MAN_YOU_GOTTA_HELP_ME";
		}
		PED::SET_CREATE_RANDOM_COPS(false);
		iLocal_47 = 1;
	}
}

int func_156()//Position - 0x603A
{
	if (bLocal_263 == 2)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "RE_BikeThief2");
		if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "RE_BikeThief2"))
		{
			return 0;
		}
	}
	return 1;
}

int func_157()//Position - 0x6064
{
	STREAMING::REQUEST_ANIM_DICT(sLocal_264);
	STREAMING::REQUEST_ANIM_DICT(sLocal_265);
	STREAMING::REQUEST_ANIM_DICT(sLocal_267);
	STREAMING::REQUEST_ANIM_DICT(sLocal_268);
	STREAMING::REQUEST_ANIM_DICT(sLocal_270);
	STREAMING::REQUEST_ANIM_DICT(sLocal_269);
	if (((((STREAMING::HAS_ANIM_DICT_LOADED(sLocal_264) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_265)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_267)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_268)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_270)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_269))
	{
		return 1;
	}
	return 0;
}

void func_158()//Position - 0x60E1
{
	if (!PED::IS_PED_INJURED(iLocal_50))
	{
		if (__LIB_4__::func_465(iLocal_50, joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_50);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(iLocal_50);
		}
		PED::SET_PED_KEEP_TASK(iLocal_50, true);
		TASK::TASK_SMART_FLEE_PED(iLocal_50, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
	}
	if (!PED::IS_PED_INJURED(iLocal_49))
	{
		PED::SET_PED_KEEP_TASK(iLocal_49, true);
		TASK::TASK_SMART_FLEE_PED(iLocal_49, PLAYER::PLAYER_PED_ID(), 100f, -1, false, true);
	}
}

int func_159()//Position - 0x614C
{
	if (iLocal_47 == 0 && __LIB_41__::func_468())
	{
		return 1;
	}
	if (iLocal_47 == 1 && __LIB_40__::func_735())
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_50))
	{
		if (PED::IS_PED_INJURED(iLocal_50))
		{
			return 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50, PLAYER::PLAYER_PED_ID(), true))
		{
			__LIB_6__::func_771();
			__LIB_10__::func_617(&uLocal_82, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return 1;
		}
		else if (func_160(iLocal_50, 170f))
		{
			__LIB_6__::func_771();
			__LIB_10__::func_617(&uLocal_82, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return 1;
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_259 == 1)
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_51) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_51, false))
	{
		return 1;
	}
	return 0;
}

int func_160(int iParam0, float fParam1)//Position - 0x621A
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
				if (func_161(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_161(int iParam0, float fParam1)//Position - 0x6290
{
	return func_81(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

int func_180()//Position - 0x7F81
{
	int iVar0;
	if (__LIB_30__::func_866(26, 1))
	{
		iVar0++;
	}
	if (__LIB_30__::func_866(26, 2))
	{
		iVar0++;
	}
	if (__LIB_30__::func_866(8, 0))
	{
		iVar0++;
	}
	return iVar0;
}

void func_226()//Position - 0x96A6
{
	__LIB_9__::func_981(&uLocal_276, 0, 0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_51, false))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_51, 0f);
		}
		AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
	}
	if (bLocal_263 != 3)
	{
		__LIB_41__::func_466(26);
	}
	else
	{
		__LIB_41__::func_466(8);
	}
	if (bLocal_263 == 1)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(472.19504f, -1974.9023f, 18.577868f, 572.74677f, -1921.2164f, 28.686325f, 75f, 1);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_271, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_56 - Vector(20f, 20f, 20f), Local_56 + Vector(20f, 20f, 20f), true, true);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_51, false))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_51, true);
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_51))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_51);
		}
	}
	if (bLocal_263 == 2)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(1, "RE_BikeThief2");
	}
	__LIB_0__::func_523(&iLocal_81);
	__LIB_0__::func_523(&iLocal_79);
	__LIB_30__::func_888(&uLocal_288);
	__LIB_0__::func_523(&iLocal_80);
	func_78(0);
	__LIB_0__::func_202(&uLocal_82, 0);
	__LIB_0__::func_202(&uLocal_82, 1);
	__LIB_0__::func_202(&uLocal_82, 2);
	if ((__LIB_0__::func_121(iLocal_50) && __LIB_0__::func_121(iLocal_51)) && PED::IS_PED_IN_VEHICLE(iLocal_50, iLocal_51, false))
	{
		TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_50, iLocal_51, fLocal_62, 786485);
		PED::SET_PED_KEEP_TASK(iLocal_50, true);
	}
	__LIB_0__::func_124(&iLocal_49, 1, 0, 1);
	__LIB_0__::func_124(&iLocal_50, 1, 0, 1);
	__LIB_0__::func_106(&iLocal_51);
	if (__LIB_0__::func_121(iLocal_52))
	{
		VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_52);
		__LIB_0__::func_106(&iLocal_52);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_StrPunk_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_BeachVesp_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("scorcher"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bati"));
	STREAMING::REMOVE_ANIM_DICT(sLocal_264);
	STREAMING::REMOVE_ANIM_DICT(sLocal_265);
	STREAMING::REMOVE_ANIM_DICT(sLocal_267);
	STREAMING::REMOVE_ANIM_DICT(sLocal_268);
	STREAMING::REMOVE_ANIM_DICT(sLocal_269);
	STREAMING::REMOVE_ANIM_DICT(sLocal_270);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

