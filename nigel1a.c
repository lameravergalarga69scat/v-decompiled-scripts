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
	var uLocal_21 = 0;
	var uLocal_22 = -1;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 1000;
	var uLocal_30 = 1000;
	var uLocal_31 = 0;
	char* sLocal_32 = NULL;
	float fLocal_33 = 0f;
	struct<3> Local_34 = { 0, 0, 0 } ;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<4> Local_47[10];
	bool bLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
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
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	struct<61> Local_72 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int* iLocal_73 = NULL;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	int iLocal_94 = 0;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	bool bLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_114[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120[5] = { 0, 0, 0, 0, 0 };
	int iLocal_121[5] = { 0, 0, 0, 0, 0 };
	int iLocal_122 = 0;
	float fLocal_123 = 0f;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	char* sLocal_130 = NULL;
	char* sLocal_131 = NULL;
	var uLocal_132 = 16;
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
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	struct<19> Local_297[5];
	struct<19> Local_298 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_299 = { 0, 0, 0, 0, 0, 0, 738282662, 0 } ;
	struct<6> Local_300 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_301 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_302 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_303[48] = "";
	char cLocal_304[32] = "";
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	char cLocal_309[32] = "";
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	char cLocal_314[32] = "";
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	struct<3> Local_319 = { 0, 0, 0 } ;
	struct<3> Local_320 = { 0, 0, 0 } ;
	struct<3> Local_321 = { 0, 0, 0 } ;
	struct<3> Local_322 = { 0, 0, 0 } ;
	struct<3> Local_323 = { 0, 0, 0 } ;
	struct<3> Local_324 = { 0, 0, 0 } ;
	struct<3> Local_325 = { 0, 0, 0 } ;
	struct<3> Local_326 = { 0, 0, 0 } ;
	struct<3> Local_327 = { 0, 0, 0 } ;
	int iLocal_328 = 0;
	struct<61> Local_329 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_32 = "NULL";
	fLocal_33 = 0f;
	fLocal_35 = -0.0375f;
	fLocal_36 = 0.17f;
	fLocal_40 = 80f;
	fLocal_41 = 140f;
	fLocal_42 = 180f;
	iLocal_45 = 3;
	uLocal_50 = __LIB_17__::func_29(64);
	uLocal_51 = __LIB_17__::func_29(63);
	iLocal_52 = joaat("U_M_M_Aldinapoli");
	iLocal_53 = joaat("premier");
	bLocal_93 = true;
	sLocal_130 = "NULL";
	sLocal_131 = "NIG1AAU";
	StringCopy(&Local_301, "", 24);
	StringCopy(&Local_302, "", 24);
	StringCopy(&cLocal_303, "", 24);
	StringCopy(&cLocal_304, "rcmnigel1a_band_groupies", 32);
	StringCopy(&cLocal_309, "rcmnigel1aig_1", 32);
	StringCopy(&cLocal_314, "rcmnigel1aig_3", 32);
	Local_72 = { ScriptParam_329 };
	__LIB_14__::func_801(&Local_72);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_72.f_59))
	{
		PED::TAKE_OWNERSHIP_OF_SYNCHRONIZED_SCENE(Local_72.f_59);
	}
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_38__::func_291(1);
		func_665();
	}
	func_642();
	if (__LIB_0__::func_323())
	{
		iVar0 = __LIB_0__::func_344();
		if (Global_94618 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				__LIB_0__::func_427(Local_327, fLocal_123, 1, 0);
				__LIB_37__::func_872(&iLocal_328, -590.5827f, 250.188f, 81.2377f, 266.6357f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
				func_506(0, 0);
				break;
			case 1:
				__LIB_0__::func_427(-554.1479f, 287.9976f, 81.1763f, 152.338f, 1, 0);
				__LIB_37__::func_872(&iLocal_328, -590.5827f, 250.188f, 81.2377f, 266.6357f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
				iLocal_78 = 1;
				iLocal_76 = 1;
				func_506(4, 0);
				break;
			case 2:
				__LIB_0__::func_427(-462.2627f, -156.776f, 37.0557f, 112.4431f, 1, 0);
				func_506(6, 0);
				break;
			default:
				break;
		}
	}
	else if (__LIB_0__::func_2(0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_14__::func_739(PLAYER::PLAYER_PED_ID(), Local_327, fLocal_123, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_VSW", 0);
		func_486(Local_72.f_9, 0, 0, 0, 0, 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_484();
			func_480();
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			switch (iLocal_69)
			{
				case 0:
					func_478();
					break;
				case 1:
					func_474();
					break;
				case 2:
					func_441();
					break;
				case 3:
					func_435();
					break;
				case 4:
					func_359();
					break;
				case 7:
					func_355();
					break;
				case 5:
					func_265();
					break;
				case 6:
					func_64();
					break;
				case 8:
					func_47();
					break;
				case 9:
					break;
				}
		}
		if (bLocal_93 == 0)
		{
			func_1(iLocal_70);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x2FE
{
	if (iLocal_69 == iParam0)
	{
		if (__LIB_0__::func_324())
		{
			__LIB_0__::func_433(0, -1, 0);
		}
		if (iLocal_69 == 4)
		{
			SYSTEM::WAIT(500);
			func_41();
			iLocal_117 = (MISC::GET_GAME_TIMER() - 4000);
		}
		__LIB_38__::func_292(1, 1, 1);
		bLocal_93 = true;
		iLocal_94 = 0;
		if (iLocal_69 == 6)
		{
			__LIB_0__::func_84(500, 1);
		}
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x358
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_325();
		if (__LIB_0__::func_75())
		{
			__LIB_0__::func_429();
		}
		HUD::CLEAR_PRINTS();
		switch (iLocal_69)
		{
			case 0:
				if (iLocal_71 == 1)
				{
					if (!__LIB_0__::func_324())
					{
						__LIB_14__::func_739(PLAYER::PLAYER_PED_ID(), -563.073f, 292.5788f, 86.5763f, 79.2186f, 0, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						if (iLocal_94 == 0)
						{
							if (iLocal_70 == 1)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 25f, 13, 5000, 0, 0);
									iLocal_94 = 1;
								}
							}
						}
					}
					iLocal_71 = 2;
				}
				break;
			case 1:
				if (iLocal_71 == 1)
				{
					if (!__LIB_0__::func_324())
					{
						__LIB_14__::func_739(PLAYER::PLAYER_PED_ID(), -556.3416f, 283.2208f, 81.1763f, 328.4892f, 0, 1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						if (iLocal_94 == 0)
						{
							if (iLocal_70 == 2)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 25f, 13, 5000, 0, 0);
									iLocal_94 = 1;
								}
							}
						}
					}
					func_41();
					iLocal_71 = 2;
				}
				break;
			case 2:
				if (iLocal_71 == 1)
				{
					if (!__LIB_0__::func_324())
					{
						if (Local_298.f_10 < 12)
						{
							__LIB_14__::func_739(PLAYER::PLAYER_PED_ID(), -554.1479f, 287.9976f, 81.1763f, 152.338f, 0, 1);
						}
						if (iLocal_94 == 0)
						{
							if (iLocal_70 == 3)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_94 = 1;
								}
							}
						}
					}
					iLocal_107 = 1;
					if (__LIB_0__::func_692(Local_297[4 /*19*/].f_9))
					{
						if (__LIB_6__::func_572(Local_297[4 /*19*/].f_9, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_297[4 /*19*/].f_9, -1000f, true);
						}
						ENTITY::FREEZE_ENTITY_POSITION(Local_297[4 /*19*/].f_9, false);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_297[4 /*19*/].f_9);
						func_16(Local_297[4 /*19*/].f_9, PLAYER::PLAYER_PED_ID());
						Local_297[4 /*19*/].f_10 = 20;
					}
					if (__LIB_0__::func_692(Local_298.f_9))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_298.f_9, false);
						if (__LIB_6__::func_572(Local_298.f_9, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_298.f_9, -1000f, true);
						}
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_298.f_9);
						__LIB_14__::func_739(Local_298.f_9, -554.01f, 286.01f, 81.1762f, 27.18f, 0, 0);
						func_16(Local_298.f_9, PLAYER::PLAYER_PED_ID());
						PED::SET_PED_CAN_RAGDOLL(Local_298.f_9, true);
						if (IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_298.f_9)) >= 137.5f)
						{
							ENTITY::SET_ENTITY_HEALTH(Local_298.f_9, 135, 0);
						}
					}
					if (!__LIB_0__::func_324())
					{
						func_16(PLAYER::PLAYER_PED_ID(), Local_298.f_9);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					}
					iLocal_80 = 1;
					Local_298.f_10 = 13;
					iLocal_124 = 4;
					func_41();
					iLocal_71 = 2;
				}
				break;
			case 3:
				if (iLocal_71 == 1)
				{
					if (!__LIB_0__::func_324())
					{
						if (OBJECT::DOES_PICKUP_EXIST(Local_299.f_0))
						{
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(Local_299.f_0))
							{
								Var0 = { OBJECT::GET_PICKUP_COORDS(Local_299.f_0) };
								Var0.f_2 = (Var0.f_2 + 1.5f);
								if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), false, false))
								{
									Var0.f_2 = (Var0.f_2 + 0.25f);
									fVar1 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
									__LIB_14__::func_739(PLAYER::PLAYER_PED_ID(), Var0, fVar1, 0, 0);
									func_16(PLAYER::PLAYER_PED_ID(), Local_298.f_9);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
									SYSTEM::WAIT(0);
								}
							}
						}
					}
					__LIB_39__::func_33(&Local_299);
					if (!__LIB_0__::func_324())
					{
						if (iLocal_94 == 0)
						{
							if (iLocal_70 == 4)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_94 = 1;
								}
							}
						}
					}
					iVar2 = 0;
					while (iVar2 <= 4)
					{
						__LIB_14__::func_728(&(Local_297[iVar2 /*19*/].f_9), 1);
						iVar2++;
					}
					if (Local_298.f_10 != 21)
					{
						func_11();
						Local_298.f_10 = 21;
					}
					iLocal_124 = 5;
					func_41();
					iLocal_71 = 2;
				}
				break;
			case 4:
				if (iLocal_71 == 1)
				{
					if (!__LIB_0__::func_324())
					{
						__LIB_14__::func_739(PLAYER::PLAYER_PED_ID(), -462.2575f, -156.7884f, 37.0458f, 112.5754f, 0, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						if (iLocal_94 == 0)
						{
							if (iLocal_70 == 5)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_94 = 1;
								}
							}
						}
					}
					func_41();
					SYSTEM::WAIT(0);
					iLocal_71 = 2;
				}
				break;
			case 5:
				if (__LIB_0__::func_77(0))
				{
					__LIB_0__::func_366(0);
				}
				if (!iLocal_97)
				{
					iLocal_71 = 2;
				}
				else
				{
					while (__LIB_0__::func_75())
					{
						__LIB_16__::func_297();
						__LIB_0__::func_325();
						SYSTEM::WAIT(0);
					}
				}
				break;
			case 7:
				if (iLocal_71 == 1)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				break;
			default:
				break;
			}
	}
}

void func_11()//Position - 0xA0A
{
	if (__LIB_0__::func_692(Local_298.f_9))
	{
		TASK::CLEAR_PED_TASKS(Local_298.f_9);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_298.f_9, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_298.f_9, 5, false);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_298.f_9, 64, false);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_298.f_9, 128, false);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_298.f_9, 2, false);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_298.f_9, 8, true);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_298.f_9, 1, false);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_298.f_9, 32, false);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_298.f_9, 2f);
		if (__LIB_6__::func_572(Local_298.f_9, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_298.f_9, -16f, true);
		}
		TASK::OPEN_SEQUENCE_TASK(&iLocal_129);
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_298.f_9, false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 64);
		}
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, true, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_129);
		TASK::TASK_PERFORM_SEQUENCE(Local_298.f_9, iLocal_129);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_129);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_298.f_9, true);
	}
}

void func_16(int iParam0, int iParam1)//Position - 0xBC7
{
	if (__LIB_0__::func_121(iParam0) && __LIB_0__::func_121(iParam1))
	{
		__LIB_15__::func_275(iParam0, iParam1);
	}
}

void func_41()//Position - 0x11E5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Local_297[iVar0 /*19*/].f_16 = 0;
		Local_297[iVar0 /*19*/].f_17 = 0;
		Local_297[iVar0 /*19*/].f_18 = 0;
		func_42(PLAYER::PLAYER_PED_ID(), Local_297[iVar0 /*19*/].f_9);
		iVar0++;
	}
	Local_298.f_16 = 0;
	Local_298.f_17 = 0;
	Local_298.f_18 = 0;
	func_42(PLAYER::PLAYER_PED_ID(), Local_298.f_9);
}

int func_42(int iParam0, int iParam1)//Position - 0x124F
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Local_47.f_0)
	{
		if (Local_47[iVar0 /*4*/].f_1 == iParam0 && Local_47[iVar0 /*4*/].f_2 == iParam1)
		{
			__LIB_13__::func_439(&(Local_47[iVar0 /*4*/]));
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_47()//Position - 0x13B3
{
	char* sVar0;
	sVar0 = 0;
	Local_322 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iLocal_125 = func_63(PLAYER::PLAYER_PED_ID(), 0);
	func_62(iLocal_125);
	switch (iLocal_71)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			if (__LIB_0__::func_75())
			{
				__LIB_0__::func_325();
			}
			func_60();
			switch (iLocal_108)
			{
				case 1:
					sVar0 = "NIG1A_F_01";
					break;
				case 0:
					break;
			}
			if (iLocal_108 == 0)
			{
				__LIB_38__::func_291(1);
			}
			else
			{
				__LIB_42__::func_486(sVar0, 1);
			}
			iLocal_71 = 1;
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				if (iLocal_125 != 12 && iLocal_125 != 13)
				{
					__LIB_0__::func_507(-571.1343f, 271.7024f, 81.9336f, 132.6751f);
					__LIB_14__::func_555(-575.523f, 269.2646f, 81.6734f, 83.1558f);
				}
				func_48(1);
				MISC::CLEAR_AREA(Local_321, 45f, true, false, false, false);
				func_665();
			}
			break;
	}
}

void func_48(bool bParam0)//Position - 0x14AC
{
	int iVar0;
	__LIB_39__::func_33(&Local_299);
	if (__LIB_0__::func_692(Local_298.f_9))
	{
		PED::SET_PED_KEEP_TASK(Local_298.f_9, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_298.f_9, false, 1);
		AUDIO::STOP_PED_SPEAKING(Local_298.f_9, false);
	}
	__LIB_14__::func_728(&(Local_298.f_9), bParam0);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_0__::func_692(Local_297[iVar0 /*19*/].f_9))
		{
			PED::SET_PED_KEEP_TASK(Local_297[iVar0 /*19*/].f_9, true);
		}
		__LIB_14__::func_728(&(Local_297[iVar0 /*19*/].f_9), bParam0);
		iVar0++;
	}
	if (__LIB_0__::func_695(Local_300.f_0))
	{
		ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_300.f_0, true);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_300.f_0, true);
	}
	__LIB_14__::func_745(&Local_300, bParam0);
	__LIB_14__::func_745(&iLocal_328, bParam0);
}

void func_60()//Position - 0x1798
{
	__LIB_0__::func_714(&iLocal_73);
	__LIB_0__::func_714(&(Local_298.f_8));
	__LIB_0__::func_714(&(Local_299.f_2));
}

void func_62(int iParam0)//Position - 0x17D8
{
	if (iParam0 == 12 || iParam0 == 13)
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1A_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("NIGEL_1A_SCENE");
		}
	}
	else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1A_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("NIGEL_1A_SCENE");
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1A_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("NIGEL_1A_SCENE");
	}
}

int func_63(int iParam0, bool bParam1)//Position - 0x183B
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (bParam1)
	{
		if (!__LIB_0__::func_121(iParam0))
		{
			return 12;
		}
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if (INTERIOR::GET_INTERIOR_AT_COORDS(Var0) == iLocal_122)
	{
		iVar1 = INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(iParam0);
		iVar3 = 0;
		while (iVar3 <= (13 - 1))
		{
			iVar2 = iVar3;
			if (iVar2 != 12)
			{
				if (iVar1 == iLocal_114[iVar2])
				{
					return iVar2;
				}
			}
			iVar3++;
		}
	}
	return 12;
}

void func_64()//Position - 0x18AA
{
	__LIB_0__::func_84(500, 1);
	func_65(96, 1);
	func_665();
}

void func_65(int iParam0, bool bParam1)//Position - 0x18C5
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
	__LIB_37__::func_199(iVar0, 1, 0, 0);
	__LIB_0__::func_46(0, 0);
	MemCopy(&sVar1, {__LIB_0__::func_330(iVar0)}, 4);
	__LIB_0__::func_44(&sVar1, __LIB_16__::func_597());
	func_90();
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

void func_90()//Position - 0x2A1A
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
			iVar3 = __LIB_13__::func_716(iVar1);
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
				if (func_208(iVar1, 14, iVar2))
				{
					func_91(iVar1, 14, iVar2);
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

int func_91(int iParam0, int iParam1, int iParam2)//Position - 0x2ADB
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
	if (!func_208(iParam0, iParam1, iParam2))
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
				func_91(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_91(iParam0, 14, uVar5[iVar3]))
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
	if (func_134(iParam0, iVar0, &iVar7, 0))
	{
		func_94(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_92(iParam0, iVar0, &iVar7))
	{
		func_94(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_92(int iParam0, int iParam1, int iParam2)//Position - 0x2C97
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_208(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_94(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x2D5E
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
										func_94(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_94(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_100(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_134(iParam0, iVar10, &iVar4, 1))
							{
								func_94(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_94(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_94(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_94(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_94(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_94(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_94(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_94(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_94(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_94(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_134(iParam0, iVar10, &iVar4, 0))
		{
			func_94(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_92(iParam0, iVar10, &iVar4))
		{
			func_94(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_100(int iParam0, int iParam1, int iParam2)//Position - 0x3D9B
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
				if (func_208(iParam0, iParam1, iVar0))
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
				if (func_208(iParam0, iParam1, iVar1))
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

int func_134(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA475
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_208(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_208(int iParam0, int iParam1, int iParam2)//Position - 0x20BFD
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
				if (!func_208(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_208(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_208(iParam0, 14, iVar4))
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
			if (!func_208(iParam0, 14, uVar8[iVar7]))
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

void func_265()//Position - 0x2815D
{
	Local_322 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iLocal_125 = func_63(PLAYER::PLAYER_PED_ID(), 0);
	func_62(iLocal_125);
	func_336();
	func_286();
	switch (iLocal_71)
	{
		case 0:
			if (__LIB_0__::func_75())
			{
				__LIB_0__::func_429();
				__LIB_16__::func_297();
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_0__::func_222(&uLocal_132, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			}
			__LIB_0__::func_222(&uLocal_132, 3, 0, "NIGEL", 0, 1);
			iLocal_115 = MISC::GET_GAME_TIMER();
			iLocal_71 = 1;
			break;
		case 1:
			if (!iLocal_97)
			{
				if (__LIB_14__::func_684(iLocal_115, 2500))
				{
					if (__LIB_16__::func_8(&uLocal_132, 64, sLocal_131, "NIG1A_CP2", 11, 1, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 4f, 1);
						iLocal_97 = 1;
					}
				}
				else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_268(7);
				}
			}
			else if (!__LIB_0__::func_75())
			{
				if (__LIB_14__::func_521())
				{
					if (__LIB_16__::func_599())
					{
						iLocal_97 = 0;
					}
					else
					{
						iLocal_71 = 2;
					}
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_75())
			{
				__LIB_0__::func_429();
				__LIB_16__::func_297();
			}
			__LIB_0__::func_325();
			func_268(6);
			break;
	}
}

void func_268(int iParam0)//Position - 0x282A5
{
	iLocal_69 = iParam0;
	iLocal_71 = 0;
}

void func_286()//Position - 0x28A58
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_329(Local_297[iVar0 /*19*/].f_9, &(Local_297[iVar0 /*19*/].f_18), 1126825984);
		iVar0++;
	}
	if (Local_297[4 /*19*/].f_10 < 20)
	{
		if ((iLocal_124 != 0 || func_325(Local_297[4 /*19*/].f_9, Local_297[4 /*19*/].f_18, 1, 1101004800, 1090519040, 1097859072)) || (iLocal_125 == 0 && PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)))
		{
			Local_297[4 /*19*/].f_10 = 20;
			__LIB_14__::func_731(Local_297[4 /*19*/].f_9, 1);
		}
		else if (bLocal_79)
		{
		}
	}
	if (!bLocal_96)
	{
		if (iLocal_125 == 9)
		{
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				if (iVar0 != 4)
				{
					if (__LIB_14__::func_733("NIG1A_B1", 1))
					{
						if (Local_297[iVar0 /*19*/].f_10 == 1)
						{
							Local_297[iVar0 /*19*/].f_17 = MISC::GET_GAME_TIMER();
							Local_297[iVar0 /*19*/].f_10 = 5;
						}
						Local_297[3 /*19*/].f_16 = MISC::GET_GAME_TIMER();
					}
					else if (Local_297[iVar0 /*19*/].f_10 == 5 || Local_297[iVar0 /*19*/].f_10 == 6)
					{
						Local_297[iVar0 /*19*/].f_17 = MISC::GET_GAME_TIMER();
						Local_297[iVar0 /*19*/].f_10 = 1;
					}
				}
				iVar0++;
			}
			if (!__LIB_14__::func_733("NIG1A_B1", 1))
			{
				func_317(&(Local_297[3 /*19*/].f_16));
			}
			else
			{
				func_315(0);
			}
		}
		else if (iLocal_125 == 8)
		{
			func_317(&(Local_297[3 /*19*/].f_16));
		}
		else
		{
			func_313(1);
		}
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iVar0 != 4)
			{
				if (Local_297[iVar0 /*19*/].f_10 != 20 && Local_297[iVar0 /*19*/].f_10 != 21)
				{
					if (iLocal_124 != 0)
					{
						bLocal_96 = true;
						func_310(0);
						Local_297[iVar0 /*19*/].f_17 = MISC::GET_GAME_TIMER();
						Local_297[iVar0 /*19*/].f_10 = 20;
						__LIB_14__::func_731(Local_297[iVar0 /*19*/].f_9, 1);
						AUDIO::FORCE_PED_PANIC_WALLA();
					}
					else if (func_325(Local_297[iVar0 /*19*/].f_9, Local_297[iVar0 /*19*/].f_18, 0, 1101004800, 1090519040, 1097859072))
					{
						bLocal_96 = true;
						func_310(0);
						Local_297[iVar0 /*19*/].f_17 = 0;
						Local_297[iVar0 /*19*/].f_10 = 20;
						__LIB_14__::func_731(Local_297[iVar0 /*19*/].f_9, 1);
						AUDIO::FORCE_PED_PANIC_WALLA();
					}
					else if (iLocal_125 != 12 && __LIB_17__::func_542(Local_297[iVar0 /*19*/].f_9, 1090519040, 1097859072))
					{
						func_310(0);
						bLocal_96 = true;
						Local_297[iVar0 /*19*/].f_17 = 0;
						Local_297[iVar0 /*19*/].f_10 = 20;
						__LIB_14__::func_731(Local_297[iVar0 /*19*/].f_9, 1);
						AUDIO::FORCE_PED_PANIC_WALLA();
					}
					else if ((iLocal_125 == 9 && PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_303(Local_298.f_9, 9, 1))
					{
						func_310(0);
						bLocal_96 = true;
						Local_297[iVar0 /*19*/].f_17 = MISC::GET_GAME_TIMER();
						Local_297[iVar0 /*19*/].f_10 = 20;
						__LIB_14__::func_731(Local_297[iVar0 /*19*/].f_9, 1);
						AUDIO::FORCE_PED_PANIC_WALLA();
					}
					if (func_301(iVar0))
					{
						func_310(0);
						func_300(iVar0);
						func_299(iVar0);
						bLocal_96 = true;
						Local_297[iVar0 /*19*/].f_17 = 0;
						Local_297[iVar0 /*19*/].f_10 = 20;
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iVar0 != 4)
			{
				if (Local_297[iVar0 /*19*/].f_10 != 20 && Local_297[iVar0 /*19*/].f_10 != 21)
				{
					Local_297[iVar0 /*19*/].f_17 = MISC::GET_GAME_TIMER();
					Local_297[iVar0 /*19*/].f_10 = 20;
				}
			}
			iVar0++;
		}
		if (!iLocal_88)
		{
			func_310(0);
			if (__LIB_0__::func_692(Local_297[3 /*19*/].f_9))
			{
				if (__LIB_0__::func_725(Local_297[3 /*19*/].f_9, Local_322, 20f, 1))
				{
					if (func_297(1, 0, 1) && (WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RELOADING(PLAYER::PLAYER_PED_ID())))
					{
						StringCopy(&Var1, "NIG1A_B2", 24);
					}
					else
					{
						StringCopy(&Var1, "NIG1A_B3", 24);
					}
					if (iLocal_125 == 9)
					{
						if (__LIB_0__::func_75())
						{
							__LIB_0__::func_429();
						}
						if (func_294(&uLocal_132, sLocal_131, &Var1, 7, __LIB_38__::func_288(), 0, 0))
						{
							AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
							iLocal_88 = 1;
						}
					}
					else if (iLocal_125 == 8)
					{
						if (!__LIB_0__::func_75())
						{
							if (func_294(&uLocal_132, sLocal_131, &Var1, 7, __LIB_38__::func_288(), 0, 0))
							{
								AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
								iLocal_88 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_88 = 1;
			}
		}
	}
	func_287(iLocal_109);
	if (iLocal_109 >= 4)
	{
		iLocal_109 = 0;
	}
	else
	{
		iLocal_109++;
	}
}

void func_287(int iParam0)//Position - 0x28EE3
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_692(Local_297[iParam0 /*19*/].f_9))
	{
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			switch (Local_297[iParam0 /*19*/].f_10)
			{
				case 0:
					break;
				case 1:
					if (__LIB_14__::func_684(Local_297[iParam0 /*19*/].f_17, MISC::GET_RANDOM_INT_IN_RANGE(0, 2500)))
					{
						if (!__LIB_16__::func_440(Local_297[iParam0 /*19*/].f_9, Local_297[iParam0 /*19*/].f_15, 30f))
						{
							if (!__LIB_6__::func_572(Local_297[iParam0 /*19*/].f_9, joaat("SCRIPT_TASK_ACHIEVE_HEADING")))
							{
								TASK::TASK_ACHIEVE_HEADING(Local_297[iParam0 /*19*/].f_9, Local_297[iParam0 /*19*/].f_15, 0);
							}
						}
						else
						{
							switch (iParam0)
							{
								case 1:
									if (!PED::IS_PED_USING_SCENARIO(Local_297[iParam0 /*19*/].f_9, "WORLD_HUMAN_STAND_IMPATIENT"))
									{
										TASK::TASK_START_SCENARIO_IN_PLACE(Local_297[iParam0 /*19*/].f_9, "WORLD_HUMAN_STAND_IMPATIENT", -1, false);
									}
									break;
								case 4:
								case 2:
								case 0:
									if (!PED::IS_PED_USING_SCENARIO(Local_297[iParam0 /*19*/].f_9, "WORLD_HUMAN_HANG_OUT_STREET"))
									{
										TASK::TASK_START_SCENARIO_IN_PLACE(Local_297[iParam0 /*19*/].f_9, "WORLD_HUMAN_HANG_OUT_STREET", -1, false);
									}
									break;
								}
							}
					}
					if (__LIB_0__::func_725(Local_297[iParam0 /*19*/].f_9, Local_322, 7f, 1) || func_63(Local_297[iParam0 /*19*/].f_9, 0) == iLocal_125)
					{
						if (!PED::IS_PED_HEADTRACKING_PED(Local_297[iParam0 /*19*/].f_9, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_297[iParam0 /*19*/].f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
					}
					else if (PED::IS_PED_HEADTRACKING_PED(Local_297[iParam0 /*19*/].f_9, PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_297[iParam0 /*19*/].f_9);
					}
					break;
				case 2:
					break;
				case 5:
					if (__LIB_14__::func_684(Local_297[iParam0 /*19*/].f_17, MISC::GET_RANDOM_INT_IN_RANGE(0, 2000)))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(Local_297[iParam0 /*19*/].f_9))
						{
							PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_297[iParam0 /*19*/].f_9);
						}
						switch (iParam0)
						{
							case 3:
							case 1:
								TASK::TASK_LOOK_AT_ENTITY(Local_297[iParam0 /*19*/].f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								break;
							default:
								TASK::TASK_LOOK_AT_ENTITY(Local_297[iParam0 /*19*/].f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_297[iParam0 /*19*/].f_9, PLAYER::PLAYER_PED_ID(), -1);
								break;
						}
						Local_297[iParam0 /*19*/].f_10 = 6;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 3:
						case 1:
							if (!__LIB_6__::func_572(Local_297[iParam0 /*19*/].f_9, joaat("SCRIPT_TASK_LOOK_AT_ENTITY")))
							{
								Local_297[iParam0 /*19*/].f_17 = (MISC::GET_GAME_TIMER() - 5000);
								Local_297[iParam0 /*19*/].f_10 = 5;
							}
							break;
						default:
							if (!__LIB_6__::func_572(Local_297[iParam0 /*19*/].f_9, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
							{
								Local_297[iParam0 /*19*/].f_17 = (MISC::GET_GAME_TIMER() - 5000);
								Local_297[iParam0 /*19*/].f_10 = 5;
							}
							break;
					}
					break;
				case 20:
					iVar0 = 0;
					iVar1 = 1200;
					if (iParam0 == 4)
					{
						if (!func_291(0))
						{
							iVar0 = 50000;
							iVar1 = 90000;
							Local_297[iParam0 /*19*/].f_17 = MISC::GET_GAME_TIMER();
						}
						else
						{
							iVar1 = 0;
						}
					}
					if (__LIB_14__::func_684(Local_297[iParam0 /*19*/].f_17, MISC::GET_RANDOM_INT_IN_RANGE(iVar0, iVar1)))
					{
						PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*19*/].f_9, 64, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*19*/].f_9, 128, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*19*/].f_9, 2, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*19*/].f_9, 8, true);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*19*/].f_9, 1, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*19*/].f_9, 32, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*19*/].f_9, 4, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_297[iParam0 /*19*/].f_9, 5, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_297[iParam0 /*19*/].f_9, 17, true);
						if (iParam0 != 3)
						{
							AUDIO::STOP_PED_SPEAKING(Local_297[iParam0 /*19*/].f_9, false);
						}
						if (func_288(iParam0))
						{
							if (PED::IS_PED_USING_ANY_SCENARIO(Local_297[iParam0 /*19*/].f_9))
							{
								PED::SET_PED_PANIC_EXIT_SCENARIO(Local_297[iParam0 /*19*/].f_9, Local_322);
							}
							switch (iParam0)
							{
								case 3:
									break;
								case 0:
								case 1:
									break;
								default:
									break;
							}
							TASK::TASK_SMART_FLEE_PED(Local_297[iParam0 /*19*/].f_9, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
							PED::SET_PED_KEEP_TASK(Local_297[iParam0 /*19*/].f_9, true);
							Local_297[iParam0 /*19*/].f_10 = 21;
						}
					}
					break;
				case 21:
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_297[iParam0 /*19*/].f_9) || (((!__LIB_6__::func_572(Local_297[iParam0 /*19*/].f_9, joaat("SCRIPT_TASK_SMART_FLEE_PED")) && !__LIB_6__::func_572(Local_297[iParam0 /*19*/].f_9, joaat("SCRIPT_TASK_COWER"))) && !__LIB_6__::func_572(Local_297[iParam0 /*19*/].f_9, joaat("SCRIPT_TASK_HANDS_UP"))) && !PED::IS_PED_FLEEING(Local_297[iParam0 /*19*/].f_9)))
					{
						Local_297[iParam0 /*19*/].f_17 = (MISC::GET_GAME_TIMER() - 5000);
						Local_297[iParam0 /*19*/].f_10 = 20;
					}
					break;
				}
			}
	}
}

int func_288(int iParam0)//Position - 0x293AF
{
	struct<6> Var0;
	char* sVar1;
	struct<6> Var2;
	char* sVar3;
	if (__LIB_0__::func_692(Local_297[iParam0 /*19*/].f_9))
	{
		if (iParam0 == 4)
		{
			return 1;
		}
		Var0 = { func_290(iParam0, 4) };
		sVar1 = __LIB_1__::func_601(&Var0);
		if (__LIB_6__::func_572(Local_297[iParam0 /*19*/].f_9, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_297[iParam0 /*19*/].f_9, -8f, false);
			TASK::TASK_PLAY_ANIM(Local_297[iParam0 /*19*/].f_9, &cLocal_304, sVar1, 8f, -4f, -1, 0, 0f, false, false, false);
			if (bLocal_93)
			{
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_297[iParam0 /*19*/].f_9, false, false);
			}
		}
		else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_297[iParam0 /*19*/].f_9, &cLocal_304, sVar1, 3))
		{
			if (iParam0 == 3 || iParam0 == 1)
			{
				Var2 = { func_290(iParam0, 4) };
				sVar3 = __LIB_1__::func_601(&Var2);
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_297[iParam0 /*19*/].f_9, &cLocal_304, sVar3, 3))
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

struct<6> func_290(int iParam0, int iParam1)//Position - 0x294AA
{
	struct<6> Var0;
	char cVar1[24];
	StringCopy(&Var0, "", 24);
	switch (iParam1)
	{
		case 0:
			StringCopy(&Var0, "BASE_", 24);
			break;
		case 3:
			if (iParam0 != 3 && iParam0 != 1)
			{
				return Var0;
			}
			else
			{
				StringCopy(&Var0, "BUMP_", 24);
			}
			break;
		case 1:
			StringCopy(&Var0, "IDLE_A_", 24);
			break;
		case 2:
			StringCopy(&Var0, "IDLE_B_", 24);
			break;
		case 4:
			StringCopy(&Var0, "OUTRO_", 24);
			break;
		default:
			break;
	}
	StringCopy(&cVar1, "", 24);
	switch (iParam0)
	{
		case 3:
			StringCopy(&cVar1, "M1", 24);
			break;
		case 2:
			StringCopy(&cVar1, "M2", 24);
			break;
		case 0:
			StringCopy(&cVar1, "F2", 24);
			break;
		case 1:
			StringCopy(&cVar1, "F1", 24);
			break;
		default:
			break;
	}
	StringConCat(&Var0, &cVar1, 24);
	return Var0;
}

int func_291(bool bParam0)//Position - 0x29591
{
	int iVar0;
	if (!iLocal_107)
	{
		func_292(4);
		iLocal_107 = 1;
	}
	else
	{
		iVar0 = Local_297[4 /*19*/].f_9;
		if (bParam0)
		{
			iVar0 = Local_298.f_9;
		}
		if (__LIB_0__::func_692(iVar0))
		{
			if (!__LIB_6__::func_572(iVar0, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
			{
				return 1;
			}
			else if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_121[4]))
			{
				return 1;
			}
			else
			{
				if (bParam0)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_121[4]) > 0.85f)
					{
						return 1;
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_RATE(iLocal_121[4]) < 1.25f)
				{
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_121[4], 1.25f);
				}
			}
		}
	}
	return 0;
}

void func_292(int iParam0)//Position - 0x2962F
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	char cVar6[24];
	char cVar7[24];
	bVar1 = false;
	bVar2 = false;
	bVar3 = false;
	bVar4 = false;
	fVar5 = 8f;
	switch (iParam0)
	{
		case 0:
			bVar1 = true;
			bVar2 = false;
			bVar3 = false;
			StringCopy(&cVar6, "BASE_Willie", 24);
			StringCopy(&cVar7, "BASE_GIRL", 24);
			break;
		case 1:
			bVar1 = true;
			bVar2 = false;
			bVar3 = false;
			StringCopy(&cVar6, "BASE_02_Willie", 24);
			StringCopy(&cVar7, "BASE_02_GIRL", 24);
			break;
		case 2:
			bVar1 = false;
			bVar2 = true;
			bVar3 = true;
			fVar5 = 4f;
			StringCopy(&cVar6, "THIS_IS_AWKWARD_Willie", 24);
			StringCopy(&cVar7, "THIS_IS_AWKWARD_GIRL", 24);
			break;
		case 3:
			bVar1 = false;
			bVar2 = true;
			bVar3 = true;
			fVar5 = 4f;
			StringCopy(&cVar6, "YOU_KNOW_Willie", 24);
			StringCopy(&cVar7, "YOU_KNOW_GIRL", 24);
			break;
		case 4:
			bVar1 = false;
			bVar2 = false;
			bVar3 = true;
			bVar4 = true;
			fVar5 = 4f;
			StringCopy(&cVar6, "EXIT_Willie", 24);
			StringCopy(&cVar7, "EXIT_GIRL", 24);
			break;
		default:
			break;
	}
	if (!bVar3)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_121[0]) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_121[1]))
		{
			return;
		}
	}
	if (!bVar4)
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			if (iVar0 != 0 && iVar0 != 1)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_121[iVar0]))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_121[iVar0]) < 0.95f)
					{
						return;
					}
				}
			}
			iVar0++;
		}
	}
	if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_121[iParam0]))
	{
		iLocal_121[iParam0] = PED::CREATE_SYNCHRONIZED_SCENE(Local_325, Local_326, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_121[iParam0], bVar1);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_121[iParam0], bVar2);
		if (__LIB_0__::func_692(Local_298.f_9))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_298.f_9, &cLocal_309, &cVar6, 3))
			{
			}
			else
			{
				if (__LIB_6__::func_572(Local_298.f_9, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_298.f_9, -8f, false);
				}
				TASK::TASK_SYNCHRONIZED_SCENE(Local_298.f_9, iLocal_121[iParam0], &cLocal_309, &cVar6, fVar5, -8f, 17, 0, 1000f, 0);
				if (bLocal_93)
				{
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_298.f_9, false, false);
				}
			}
		}
		if (__LIB_0__::func_692(Local_297[4 /*19*/].f_9))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_297[4 /*19*/].f_9, &cLocal_309, &cVar7, 3))
			{
			}
			else
			{
				if (__LIB_6__::func_572(Local_297[4 /*19*/].f_9, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_297[4 /*19*/].f_9, -8f, false);
				}
				TASK::TASK_SYNCHRONIZED_SCENE(Local_297[4 /*19*/].f_9, iLocal_121[iParam0], &cLocal_309, &cVar7, fVar5, -8f, 17, 0, 1000f, 0);
				if (bLocal_93)
				{
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_297[4 /*19*/].f_9, false, false);
				}
			}
		}
	}
}

int func_294(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x29958
{
	if (iParam4 == 0)
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (MISC::GET_PROFILE_SETTING(203) != 0)
			{
				return 0;
			}
		}
	}
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (__LIB_16__::func_7(uParam0, sParam1, sParam2, iParam3, iParam4, iParam5, iParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_297(bool bParam0, bool bParam1, bool bParam2)//Position - 0x299FE
{
	int iVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
	switch (iVar0)
	{
		case joaat("WEAPON_PISTOL"):
		case joaat("WEAPON_COMBATPISTOL"):
		case joaat("WEAPON_APPISTOL"):
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_SNSPISTOL"):
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_ADVANCEDRIFLE"):
		case joaat("WEAPON_MG"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
		case joaat("WEAPON_SNIPERRIFLE"):
		case joaat("WEAPON_HEAVYSNIPER"):
		case joaat("WEAPON_REMOTESNIPER"):
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_RPG"):
		case joaat("WEAPON_MINIGUN"):
			return 1;
		default:
	}
	if (bParam0)
	{
		switch (iVar0)
		{
			case joaat("WEAPON_GRENADE"):
			case joaat("WEAPON_STICKYBOMB"):
			case joaat("WEAPON_MOLOTOV"):
				return 1;
			}
		default:
	}
	if (bParam1)
	{
		switch (iVar0)
		{
			case joaat("WEAPON_KNIFE"):
			case joaat("WEAPON_HAMMER"):
			case joaat("WEAPON_CROWBAR"):
			case joaat("WEAPON_BOTTLE"):
			case default:
			}
	}
	if (bParam2)
	{
		if (iVar0 == joaat("WEAPON_STUNGUN"))
		{
			return 1;
		}
	}
	return 0;
}

void func_299(int iParam0)//Position - 0x29B13
{
	struct<6> Var0;
	char* sVar1;
	if (iParam0 == 3 || iParam0 == 1)
	{
		if (__LIB_0__::func_692(Local_297[iParam0 /*19*/].f_9))
		{
			Var0 = { func_290(iParam0, 3) };
			sVar1 = __LIB_1__::func_601(&Var0);
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_297[iParam0 /*19*/].f_9, &cLocal_304, sVar1, 3))
			{
				if (__LIB_6__::func_572(Local_297[iParam0 /*19*/].f_9, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_297[iParam0 /*19*/].f_9, -8f, false);
				}
				TASK::TASK_PLAY_ANIM(Local_297[iParam0 /*19*/].f_9, &cLocal_304, sVar1, 8f, -8f, -1, 0, 0f, false, false, false);
				if (bLocal_93)
				{
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_297[iParam0 /*19*/].f_9, false, false);
				}
			}
		}
	}
}

int func_300(int iParam0)//Position - 0x29BC5
{
	char* sVar0;
	if (!__LIB_0__::func_75())
	{
		sVar0 = "NULL";
		switch (iParam0)
		{
			case 3:
				sVar0 = "NIG1A_BUMPM";
				break;
			case 2:
				sVar0 = "NIG1A_BUMPR";
				break;
			case 0:
				sVar0 = "NIG1A_BUMPG1";
				break;
			case 1:
				sVar0 = "NIG1A_BUMPG2";
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			if (func_294(&uLocal_132, sLocal_131, sVar0, 7, __LIB_38__::func_288(), 0, 0))
			{
			}
		}
	}
	return 0;
}

int func_301(int iParam0)//Position - 0x29C3D
{
	if (iParam0 == 3 || iParam0 == 1)
	{
		if (__LIB_0__::func_692(Local_297[iParam0 /*19*/].f_9))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_297[iParam0 /*19*/].f_9, PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	else if (func_302(Local_297[iParam0 /*19*/].f_9))
	{
		return 1;
	}
	return 0;
}

int func_302(int iParam0)//Position - 0x29C96
{
	if (__LIB_0__::func_692(iParam0))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::HAS_PED_RECEIVED_EVENT(iParam0, 51))
		{
			return 1;
		}
	}
	return 0;
}

int func_303(int iParam0, int iParam1, bool bParam2)//Position - 0x29CD1
{
	struct<3> Var0;
	int iVar1;
	if (bParam2)
	{
		if (!__LIB_0__::func_121(iParam0))
		{
			return 0;
		}
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if (INTERIOR::GET_INTERIOR_AT_COORDS(Var0) == iLocal_122)
	{
		iVar1 = INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(iParam0);
		if (iVar1 == iLocal_114[iParam1])
		{
			return 1;
		}
	}
	if (iParam1 == 12)
	{
		return 1;
	}
	return 0;
}

int func_310(bool bParam0)//Position - 0x29FEF
{
	if (__LIB_0__::func_75())
	{
		if (((__LIB_14__::func_733("NIG1A_BAN1", 0) || __LIB_14__::func_733("NIG1A_BAN2", 0)) || __LIB_14__::func_733("NIG1A_BAN3", 0)) || __LIB_14__::func_733("NIG1A_IDLE1", 0))
		{
			if (bParam0)
			{
				__LIB_0__::func_638();
			}
			else
			{
				__LIB_0__::func_429();
			}
			return 1;
		}
	}
	return 0;
}

int func_313(bool bParam0)//Position - 0x2A080
{
	struct<6> Var0;
	if (!iLocal_100)
	{
		if ((__LIB_14__::func_733("NIG1A_BAN1", 0) || __LIB_14__::func_733("NIG1A_BAN2", 0)) || __LIB_14__::func_733("NIG1A_BAN3", 0))
		{
			Var0 = { __LIB_0__::func_485() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				iLocal_100 = 1;
				if (iLocal_118 > 0)
				{
					iLocal_118 = (iLocal_118 - 1);
				}
				Local_302 = { Var0 };
				if (bParam0)
				{
					__LIB_0__::func_638();
				}
				else
				{
					__LIB_0__::func_429();
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_315(int iParam0)//Position - 0x2A1A3
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	bVar1 = false;
	bVar2 = false;
	bVar3 = false;
	bVar4 = false;
	fVar5 = 8f;
	switch (iParam0)
	{
		case 0:
			bVar1 = true;
			bVar2 = false;
			bVar3 = false;
			break;
		case 3:
			bVar1 = false;
			bVar2 = false;
			bVar3 = true;
			break;
		case 1:
			bVar1 = false;
			bVar2 = false;
			bVar3 = true;
			break;
		case 2:
			bVar1 = false;
			bVar2 = false;
			bVar3 = true;
			bVar4 = true;
			fVar5 = 4f;
			break;
		case 4:
			bVar1 = false;
			bVar2 = false;
			bVar3 = true;
			bVar4 = true;
			fVar5 = 4f;
			break;
		default:
			break;
	}
	if (!bVar3)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_120[0]))
		{
			return;
		}
	}
	if (!bVar4)
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			if (iVar0 != 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_120[iVar0]))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_120[iVar0]) < 0.95f)
					{
						return;
					}
				}
			}
			iVar0++;
		}
	}
	if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_121[iParam0]))
	{
		iLocal_120[iParam0] = PED::CREATE_SYNCHRONIZED_SCENE(Local_323, Local_324, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_120[iParam0], bVar1);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_120[iParam0], bVar2);
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iVar0 != 4)
			{
				func_316(iVar0, iLocal_120[iParam0], iParam0, fVar5);
			}
			iVar0++;
		}
	}
}

void func_316(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x2A2E9
{
	struct<6> Var0;
	char* sVar1;
	if (iParam0 != 4)
	{
		if (__LIB_0__::func_692(Local_297[iParam0 /*19*/].f_9))
		{
			Var0 = { func_290(iParam0, iParam2) };
			sVar1 = __LIB_1__::func_601(&Var0);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_297[iParam0 /*19*/].f_9, &cLocal_304, sVar1, 3))
			{
			}
			else
			{
				if (__LIB_6__::func_572(Local_297[iParam0 /*19*/].f_9, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_297[iParam0 /*19*/].f_9, -8f, false);
				}
				TASK::TASK_SYNCHRONIZED_SCENE(Local_297[iParam0 /*19*/].f_9, iParam1, &cLocal_304, sVar1, fParam3, -8f, 17, 0, 1000f, 0);
				if (bLocal_93)
				{
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_297[iParam0 /*19*/].f_9, false, false);
				}
			}
		}
	}
}

int func_317(var uParam0)//Position - 0x2A395
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	int iVar3;
	iVar0 = 0;
	if (__LIB_0__::func_75())
	{
		if (!iLocal_100)
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iVar1 = 4;
		StringCopy(&Var2, "", 24);
		if (iLocal_118 < iVar1)
		{
			iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000);
			if (iLocal_118 == 0 || iLocal_100)
			{
				iVar3 = 100;
			}
			if (__LIB_14__::func_684(*uParam0, iVar3))
			{
				switch (iLocal_118)
				{
					case 0:
						StringCopy(&Var2, "NIG1A_BAN1", 24);
						iVar0 = 1;
						break;
					case 1:
						StringCopy(&Var2, "NIG1A_BAN2", 24);
						iVar0 = 1;
						break;
					case 2:
						StringCopy(&Var2, "NIG1A_BAN3", 24);
						iVar0 = 1;
						break;
					case 3:
						StringCopy(&Var2, "NIG1A_IDLE1", 24);
						iVar0 = 2;
						break;
				}
				if (iLocal_100)
				{
					if (func_318(&uLocal_132, sLocal_131, &Var2, &Local_302, 7, 0, 0))
					{
						iLocal_100 = 0;
						*uParam0 = MISC::GET_GAME_TIMER();
						iLocal_118++;
						func_315(iVar0);
						return 1;
					}
				}
				else if (func_294(&uLocal_132, sLocal_131, &Var2, 7, 0, 0, 0))
				{
					iLocal_100 = 0;
					*uParam0 = MISC::GET_GAME_TIMER();
					iLocal_118++;
					func_315(iVar0);
					return 1;
				}
			}
		}
	}
	func_315(0);
	return 0;
}

int func_318(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2A4B4
{
	if (iParam5 == 0)
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (MISC::GET_PROFILE_SETTING(203) != 0)
			{
				return 0;
			}
		}
	}
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (__LIB_16__::func_936(uParam0, sParam1, sParam2, sParam3, iParam4, iParam5, iParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_325(int iParam0, int iParam1, bool bParam2, float fParam3, float fParam4, float fParam5)//Position - 0x2A82A
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	if (__LIB_0__::func_692(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		if (MISC::IS_BULLET_IN_AREA(Var0, fParam4, true))
		{
			return 1;
		}
		if (__LIB_0__::func_725(iParam0, Local_322, fParam3, 1))
		{
			if (!__LIB_14__::func_695(iParam1, 10))
			{
				if (func_297(1, 0, 1))
				{
					if (WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RELOADING(PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
				}
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
				{
					return 1;
				}
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
				if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
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
		if (bParam2)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
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
			if (func_327(iParam0, 1))
			{
				if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(Var1, Var2, joaat("WEAPON_GRENADE"), &Var3, false))
				{
				}
				else if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(Var1, Var2, joaat("WEAPON_SMOKEGRENADE"), &Var3, false))
				{
				}
				else if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(Var1, Var2, joaat("WEAPON_STICKYBOMB"), &Var3, false))
				{
				}
				else if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(Var1, Var2, joaat("WEAPON_MOLOTOV"), &Var3, false))
				{
					if (func_326(Var3))
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
	}
	return 0;
}

int func_326(struct<3> Param0)//Position - 0x2AA01
{
	int iVar0;
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
		if (iVar0 == iLocal_122)
		{
			return 1;
		}
	}
	return 0;
}

int func_327(int iParam0, bool bParam1)//Position - 0x2AA2C
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	if (bParam1)
	{
		if (__LIB_0__::func_121(iParam0))
		{
			iVar2 = INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(iParam0);
			iVar1 = 0;
			while (iVar1 <= (13 - 1))
			{
				iVar0 = iVar1;
				if (iVar0 != 12)
				{
					if (iVar2 == iLocal_114[iVar0])
					{
						return 1;
					}
				}
				iVar1++;
			}
		}
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		if (INTERIOR::GET_INTERIOR_AT_COORDS(Var3) == iLocal_122)
		{
			return 1;
		}
	}
	return 0;
}

void func_329(int iParam0, var uParam1, float fParam2)//Position - 0x2AAAC
{
	if (__LIB_0__::func_121(iParam0))
	{
		if (__LIB_38__::func_289(iParam0, PLAYER::PLAYER_PED_ID(), fParam2, 1, 250, 7))
		{
			*uParam1 = MISC::GET_FRAME_COUNT();
		}
	}
}

void func_336()//Position - 0x2AEA3
{
	struct<6> Var0;
	int iVar1;
	struct<3> Var2;
	if (__LIB_0__::func_692(Local_298.f_9))
	{
		func_329(Local_298.f_9, &(Local_298.f_18), 1126825984);
		switch (iLocal_124)
		{
			case 0:
				if (!bLocal_79)
				{
					func_354(&(Local_298.f_16));
					if (iLocal_125 == 0)
					{
						if (__LIB_0__::func_692(Local_298.f_9) && SYSTEM::VDIST(Local_322, ENTITY::GET_ENTITY_COORDS(Local_298.f_9, true)) <= 5.5f)
						{
							func_353(0);
							if (__LIB_0__::func_75())
							{
								__LIB_0__::func_429();
							}
							if (iLocal_99)
							{
								if (func_297(1, 0, 1) && !MISC::ARE_STRINGS_EQUAL(sLocal_130, "NIG1A_MSP3"))
								{
									iLocal_99 = 0;
								}
								else if (func_318(&uLocal_132, sLocal_131, sLocal_130, &Local_301, 7, 0, 0))
								{
									iLocal_99 = 0;
									bLocal_79 = true;
								}
							}
							else if (func_297(1, 0, 1))
							{
								if (func_294(&uLocal_132, sLocal_131, "NIG1A_MSP3", 7, 0, 0, 0))
								{
									sLocal_130 = "NIG1A_MSP3";
									bLocal_79 = true;
								}
							}
							else if (func_294(&uLocal_132, sLocal_131, "NIG1A_MSP1", 7, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 4.5f, 0);
								sLocal_130 = "NIG1A_MSP1";
								bLocal_79 = true;
							}
						}
					}
				}
				else if (__LIB_14__::func_733(sLocal_130, 1))
				{
					if (iLocal_125 != 0)
					{
						Var0 = { __LIB_0__::func_485() };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
						{
							iLocal_99 = 1;
							bLocal_79 = false;
							Local_301 = { Var0 };
							__LIB_0__::func_638();
						}
					}
				}
				iLocal_98 = func_346(Local_297[4 /*19*/].f_9);
				if ((iLocal_98 || func_345(Local_298.f_9, Local_298.f_18, 1, 1092616192)) || (iLocal_125 == 0 && PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)))
				{
					Local_298.f_17 = MISC::GET_GAME_TIMER();
					Local_298.f_10 = 9;
					Local_298.f_16 = MISC::GET_GAME_TIMER();
					if (!bLocal_95)
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_298.f_9, PLAYER::PLAYER_PED_ID(), true))
						{
							bLocal_95 = true;
							iLocal_80 = 1;
							Local_298.f_17 = (MISC::GET_GAME_TIMER() - 1000);
							Local_298.f_16 = (MISC::GET_GAME_TIMER() - 1000);
						}
					}
					func_344(0);
					if (__LIB_14__::func_733(sLocal_130, 1))
					{
						__LIB_0__::func_429();
					}
					__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), -1);
					iLocal_124 = 1;
				}
				if (func_342(Local_298.f_9, Local_298.f_18, 1, 10f, 1090519040, 1097859072) || (iLocal_125 != 12 && __LIB_17__::func_542(Local_298.f_9, 1090519040, 1097859072)))
				{
					Local_298.f_10 = 26;
					Local_298.f_17 = MISC::GET_GAME_TIMER();
					Local_298.f_16 = MISC::GET_GAME_TIMER();
					if (__LIB_0__::func_692(Local_298.f_9))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_298.f_9);
						WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(Local_298.f_9);
						PED::CLEAR_PED_LAST_DAMAGE_BONE(Local_298.f_9);
					}
					func_344(0);
					if (__LIB_14__::func_733(sLocal_130, 1))
					{
						__LIB_0__::func_429();
					}
					iLocal_124 = 2;
				}
				break;
			case 1:
				if (!bLocal_95)
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_298.f_9, PLAYER::PLAYER_PED_ID(), true))
					{
						bLocal_95 = true;
						iLocal_80 = 1;
					}
				}
				if (!iLocal_80)
				{
					func_344(0);
					if (!__LIB_14__::func_733("NIG1A_SD3", 1) && !__LIB_14__::func_733("NIG1A_SD5", 1))
					{
						if (__LIB_14__::func_684(Local_298.f_16, 500) && Local_298.f_10 == 10)
						{
							if (!__LIB_14__::func_695(Local_298.f_18, 10))
							{
								if (func_294(&uLocal_132, sLocal_131, "NIG1A_MSP4", 7, __LIB_38__::func_288(), 0, 0))
								{
									AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
									iLocal_80 = 1;
								}
							}
						}
					}
				}
				else
				{
					if (!iLocal_87)
					{
						if (bLocal_95)
						{
							if (__LIB_0__::func_75())
							{
								__LIB_0__::func_429();
							}
							func_344(0);
							if (func_294(&uLocal_132, sLocal_131, "NIG1A_M1", 7, __LIB_38__::func_288(), 0, 0))
							{
								AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
								iLocal_87 = 1;
							}
						}
					}
					if (__LIB_0__::func_75())
					{
						Local_298.f_16 = MISC::GET_GAME_TIMER();
					}
					else if (__LIB_14__::func_684(Local_298.f_16, (2500 + MISC::GET_RANDOM_INT_IN_RANGE(0, 1000))))
					{
						if (Local_298.f_10 == 9 || Local_298.f_10 == 10)
						{
							if (__LIB_0__::func_725(Local_298.f_9, Local_322, 8f, 1))
							{
								if (!iLocal_83)
								{
									if (iLocal_112 < 3)
									{
										if (func_294(&uLocal_132, sLocal_131, "NIG1A_MP3", 7, __LIB_38__::func_288(), 0, 0))
										{
											iLocal_112++;
											Local_298.f_16 = MISC::GET_GAME_TIMER();
											iLocal_83 = 1;
										}
									}
									else
									{
										iLocal_83 = 1;
									}
								}
								else if (__LIB_14__::func_684(Local_298.f_16, (2500 + MISC::GET_RANDOM_INT_IN_RANGE(15000, 5000))))
								{
									if (func_294(&uLocal_132, sLocal_131, "NIG1A_BRAWL", 7, __LIB_38__::func_288(), 0, 0))
									{
										Local_298.f_16 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						if ((Local_298.f_10 == 16 || Local_298.f_10 == 17) || (iLocal_125 == 12 && !__LIB_0__::func_725(Local_298.f_9, Local_322, 12f, 1)))
						{
							if (iLocal_110 < 3)
							{
								if (__LIB_0__::func_725(Local_298.f_9, Local_322, 50f, 1))
								{
									if (func_294(&uLocal_132, sLocal_131, "NIG1A_MP1", 7, __LIB_38__::func_288(), 0, 0))
									{
										iLocal_110++;
										Local_298.f_16 = MISC::GET_GAME_TIMER();
										iLocal_83 = 0;
									}
								}
							}
							else
							{
								iLocal_83 = 0;
							}
						}
						else if (Local_298.f_10 == 18 || Local_298.f_10 == 19)
						{
							if (iLocal_111 < 3)
							{
								if (func_294(&uLocal_132, sLocal_131, "NIG1A_MP2", 7, __LIB_38__::func_288(), 0, 0))
								{
									iLocal_111++;
									Local_298.f_16 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					if (func_341(Local_298.f_9, 1, 180))
					{
						Local_298.f_10 = 11;
						if (IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_298.f_9)) < 180f)
						{
							ENTITY::SET_ENTITY_HEALTH(Local_298.f_9, 180, 0);
						}
						iLocal_116 = MISC::GET_GAME_TIMER();
						Local_298.f_16 = MISC::GET_GAME_TIMER();
						__LIB_0__::func_377(0, -1);
						iLocal_124 = 3;
					}
				}
				if (func_342(Local_298.f_9, Local_298.f_18, 1, 1112014848, 1090519040, 1097859072) || (iLocal_125 != 12 && __LIB_17__::func_542(Local_298.f_9, 1090519040, 1097859072)))
				{
					Local_298.f_10 = 26;
					if (__LIB_0__::func_692(Local_298.f_9))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_298.f_9);
						WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(Local_298.f_9);
						PED::CLEAR_PED_LAST_DAMAGE_BONE(Local_298.f_9);
					}
					__LIB_0__::func_377(0, -1);
					iLocal_124 = 2;
				}
				break;
			case 2:
				if (!iLocal_81)
				{
					if (__LIB_0__::func_725(Local_298.f_9, Local_322, 15f, 1))
					{
						if (!__LIB_14__::func_733("NIG1A_SD7", 1) && !__LIB_14__::func_733("NIG1A_MSP3", 1))
						{
							if (!__LIB_14__::func_695(Local_298.f_18, 10))
							{
								if (func_294(&uLocal_132, sLocal_131, "NIG1A_MSU2", 7, __LIB_38__::func_288(), 0, 0))
								{
									AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
									Local_298.f_16 = MISC::GET_GAME_TIMER();
									iLocal_81 = 1;
								}
							}
						}
					}
				}
				else if (Local_298.f_10 == 26 || Local_298.f_10 == 27)
				{
					if (__LIB_14__::func_733("NIG1A_MSU2", 1))
					{
						Local_298.f_16 = MISC::GET_GAME_TIMER();
					}
					else if (__LIB_14__::func_684(Local_298.f_16, 3500))
					{
						if (Local_298.f_10 == 27)
						{
							Local_298.f_10 = 20;
						}
					}
				}
				else if (Local_298.f_10 == 20 || Local_298.f_10 == 21)
				{
					if (__LIB_0__::func_75())
					{
						Local_298.f_16 = MISC::GET_GAME_TIMER();
					}
					else if (__LIB_14__::func_684(Local_298.f_16, (2500 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2500))))
					{
						if (__LIB_0__::func_725(Local_298.f_9, Local_322, 25f, 1))
						{
							if ((!func_327(Local_298.f_9, 1) && iLocal_125 == 12) || func_303(Local_298.f_9, iLocal_125, 1))
							{
								if (func_294(&uLocal_132, sLocal_131, "NIG1A_FLEE", 7, 0, 0, 0))
								{
									Local_298.f_16 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
				if (bLocal_102)
				{
					if (!iLocal_82)
					{
						if (!__LIB_0__::func_75())
						{
							if (func_294(&uLocal_132, sLocal_131, "NIG1A_MCSG", 7, __LIB_38__::func_288(), 0, 0))
							{
								AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
								iLocal_82 = 1;
							}
						}
					}
				}
				if (__LIB_0__::func_692(Local_298.f_9) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_298.f_9, PLAYER::PLAYER_PED_ID(), true))
				{
					if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_298.f_9, 0, 2))
					{
						if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_298.f_9, joaat("WEAPON_UNARMED"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_298.f_9, 0, 1)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_298.f_9, joaat("WEAPON_STUNGUN"), 0))
						{
							Local_298.f_10 = 11;
							iLocal_116 = MISC::GET_GAME_TIMER();
							iLocal_124 = 3;
						}
						else
						{
							if (!PED::IS_PED_BEING_STUNNED(Local_298.f_9, 0))
							{
								if (func_297(1, 0, 0))
								{
									if (PED::GET_PED_LAST_DAMAGE_BONE(Local_298.f_9, &iVar1))
									{
										switch (iVar1)
										{
											case 11816:
											case 23553:
											case 24816:
											case 24817:
											case 24818:
											case 39317:
											case 31086:
												ENTITY::SET_ENTITY_HEALTH(Local_298.f_9, 0, 0);
												break;
											default:
												break;
											}
										}
									}
							}
							bLocal_102 = true;
							Local_298.f_10 = 11;
							iLocal_116 = MISC::GET_GAME_TIMER();
							iLocal_124 = 3;
						}
					}
				}
				if (func_340(Local_298.f_9, Local_322))
				{
					Local_298.f_10 = 11;
					iLocal_116 = MISC::GET_GAME_TIMER();
					iLocal_124 = 3;
				}
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_298.f_9);
				WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(Local_298.f_9);
				if (!bLocal_104)
				{
					if (iLocal_125 != 12)
					{
						if (iLocal_117 == 0)
						{
							iLocal_117 = MISC::GET_GAME_TIMER();
						}
						bLocal_104 = true;
					}
				}
				break;
			case 3:
				if (!iLocal_77)
				{
					if (__LIB_0__::func_75())
					{
						__LIB_0__::func_429();
					}
					func_344(0);
					if (bLocal_102)
					{
						if (func_294(&uLocal_132, sLocal_131, "NIG1A_MCSG", 7, __LIB_38__::func_288(), 0, 0))
						{
							AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
							iLocal_77 = 1;
						}
					}
					else if (func_294(&uLocal_132, sLocal_131, "NIG1A_MKD", 7, __LIB_38__::func_288(), 0, 0))
					{
						AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
						iLocal_77 = 1;
					}
				}
				if (!PED::IS_PED_RAGDOLL(Local_298.f_9) || __LIB_14__::func_684(iLocal_116, 2000))
				{
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_298.f_9, false);
					iLocal_124 = 4;
				}
				break;
			case 4:
				break;
			case 5:
				if (__LIB_0__::func_75())
				{
					Local_298.f_16 = MISC::GET_GAME_TIMER();
				}
				else if (__LIB_14__::func_684(Local_298.f_16, (2500 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2500))))
				{
					if (__LIB_0__::func_725(Local_298.f_9, Local_322, 25f, 1))
					{
						if ((!func_327(Local_298.f_9, 1) && iLocal_125 == 12) || func_303(Local_298.f_9, iLocal_125, 1))
						{
							if (func_294(&uLocal_132, sLocal_131, "NIG1A_FLEE", 7, __LIB_38__::func_288(), 0, 0))
							{
								Local_298.f_16 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				break;
		}
		func_337();
	}
	else
	{
		if (iLocal_124 != 6)
		{
			if (!BitTest(Global_113386.f_18574.f_382, 2))
			{
				MISC::SET_BIT(&(Global_113386.f_18574.f_382), 2);
			}
			iLocal_124 = 6;
		}
		if (!iLocal_85)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_298.f_9))
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(Local_298.f_9, false) };
				if (!__LIB_0__::func_75())
				{
					if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Var2, 15f, 1))
					{
						if (func_294(&uLocal_132, sLocal_131, "NIG1A_TC3", 7, __LIB_38__::func_288(), 0, 0))
						{
							iLocal_85 = 1;
						}
					}
				}
			}
		}
	}
}

void func_337()//Position - 0x2B968
{
	int iVar0;
	if (__LIB_0__::func_692(Local_298.f_9))
	{
		PED::SET_PED_RESET_FLAG(Local_298.f_9, 187, true);
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			switch (Local_298.f_10)
			{
				case 0:
					Local_298.f_10 = 1;
					break;
				case 1:
					if (__LIB_0__::func_725(Local_298.f_9, Local_322, 8f, 1))
					{
						if (!PED::IS_PED_HEADTRACKING_PED(Local_298.f_9, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_298.f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
					}
					else if (PED::IS_PED_HEADTRACKING_PED(Local_298.f_9, PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_298.f_9);
					}
					break;
				case 2:
					break;
				case 9:
					if (func_291(1))
					{
						if (__LIB_6__::func_572(Local_298.f_9, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_298.f_9, -16f, true);
						}
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_298.f_9, 5, true);
						TASK::TASK_COMBAT_PED(Local_298.f_9, PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_298.f_9, true);
						Local_298.f_10 = 10;
					}
					break;
				case 10:
					if (!__LIB_6__::func_572(Local_298.f_9, joaat("SCRIPT_TASK_COMBAT")))
					{
						Local_298.f_10 = 9;
					}
					break;
				case 11:
					if (PED::IS_PED_FLEEING(Local_298.f_9) || __LIB_6__::func_572(Local_298.f_9, joaat("SCRIPT_TASK_SMART_FLEE_PED")))
					{
						TASK::CLEAR_PED_TASKS(Local_298.f_9);
					}
					STREAMING::REQUEST_ANIM_DICT(&cLocal_314);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_298.f_9, 5, false);
					PED::SET_PED_CAN_RAGDOLL(Local_298.f_9, true);
					if (!PED::IS_PED_RAGDOLL(Local_298.f_9))
					{
						PED::SET_PED_TO_RAGDOLL(Local_298.f_9, 1000, 1000, 0, true, true, false);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_298.f_9, true);
					Local_298.f_10 = 12;
					break;
				case 12:
					if (!PED::IS_PED_RAGDOLL(Local_298.f_9))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_298.f_9, true);
						Local_298.f_10 = 13;
					}
					break;
				case 13:
					STREAMING::REQUEST_ANIM_DICT(&cLocal_314);
					if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_314))
					{
						if ((!TASK::IS_PED_GETTING_UP(Local_298.f_9) && !PED::IS_PED_RAGDOLL(Local_298.f_9)) && !PED::IS_PED_BEING_STUNNED(Local_298.f_9, 0))
						{
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_298.f_9, true);
							TASK::TASK_CLEAR_LOOK_AT(Local_298.f_9);
							PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_298.f_9, false);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_129);
							TASK::TASK_PLAY_ANIM(0, &cLocal_314, "enter_willie", 4f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, &cLocal_314, "base_willie", 8f, -8f, 2000, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, &cLocal_314, "exit_willie", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_129);
							TASK::TASK_PERFORM_SEQUENCE(Local_298.f_9, iLocal_129);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_129);
							STREAMING::REMOVE_ANIM_DICT(&cLocal_314);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_298.f_9, true);
							Local_298.f_16 = MISC::GET_GAME_TIMER();
							Local_298.f_17 = MISC::GET_GAME_TIMER();
							Local_298.f_10 = 14;
						}
					}
					break;
				case 14:
					if (!__LIB_6__::func_572(Local_298.f_9, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						Local_298.f_10 = 15;
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_298.f_9, &cLocal_314, "enter_willie", 3))
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(Local_298.f_9, &cLocal_314, "enter_willie", 1.4f);
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_298.f_9, &cLocal_314, "exit_willie", 3))
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(Local_298.f_9, &cLocal_314, "exit_willie", 1.2f);
					}
					break;
				case 15:
					if (!PED::IS_PED_HEADTRACKING_PED(Local_298.f_9, PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_298.f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_298.f_9, true);
					}
					if (!PED::IS_PED_FACING_PED(Local_298.f_9, PLAYER::PLAYER_PED_ID(), 90f))
					{
						if (!__LIB_6__::func_572(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_298.f_9, PLAYER::PLAYER_PED_ID(), -1);
						}
					}
					break;
				case 16:
					TASK::OPEN_SEQUENCE_TASK(&iLocal_129);
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_298.f_9, true), Local_321) >= 10f)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_321, 1f, 20000, 2f, 0, 40000f);
					}
					else
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1);
					}
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000), 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_129);
					TASK::TASK_PERFORM_SEQUENCE(Local_298.f_9, iLocal_129);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_129);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_298.f_9, true);
					Local_298.f_17 = MISC::GET_GAME_TIMER();
					Local_298.f_10 = 17;
					break;
				case 17:
					if (iLocal_125 == 0)
					{
						if (func_303(Local_298.f_9, 0, 0))
						{
							if (Local_298.f_18 == MISC::GET_FRAME_COUNT())
							{
								Local_298.f_10 = 9;
								return;
							}
						}
					}
					if (!__LIB_6__::func_572(Local_298.f_9, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						Local_298.f_10 = 16;
					}
					else if (TASK::GET_SEQUENCE_PROGRESS(Local_298.f_9) >= 4)
					{
						if (__LIB_14__::func_684(Local_298.f_17, MISC::GET_RANDOM_INT_IN_RANGE(4000, 8000)))
						{
							Local_298.f_10 = 16;
						}
					}
					else
					{
						Local_298.f_17 = MISC::GET_GAME_TIMER();
					}
					break;
				case 18:
					TASK::OPEN_SEQUENCE_TASK(&iLocal_129);
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					switch (iVar0)
					{
						case 0:
							TASK::TASK_PLAY_ANIM(0, "rcmnigel1a", "threaten", 8f, -8f, -1, 16, 0f, false, false, false);
							break;
						case 1:
							TASK::TASK_PLAY_ANIM(0, "rcmnigel1a", "anger_a", 8f, -8f, -1, 16, 0f, false, false, false);
							break;
						case 2:
							TASK::TASK_PLAY_ANIM(0, "rcmnigel1a", "screw_you", 8f, -8f, -1, 16, 0f, false, false, false);
							break;
					}
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000), 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_129);
					TASK::TASK_PERFORM_SEQUENCE(Local_298.f_9, iLocal_129);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_129);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_298.f_9, true);
					Local_298.f_17 = MISC::GET_GAME_TIMER();
					Local_298.f_10 = 19;
					break;
				case 19:
					if (!func_339(ENTITY::GET_ENTITY_COORDS(Local_298.f_9, true), Local_322, 0.25f))
					{
						Local_298.f_10 = 9;
					}
					else if (!__LIB_6__::func_572(Local_298.f_9, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						Local_298.f_10 = 18;
					}
					else if (TASK::GET_SEQUENCE_PROGRESS(Local_298.f_9) >= 3)
					{
						if (__LIB_14__::func_684(Local_298.f_17, MISC::GET_RANDOM_INT_IN_RANGE(4000, 8000)))
						{
							Local_298.f_10 = 18;
						}
					}
					else
					{
						Local_298.f_17 = MISC::GET_GAME_TIMER();
					}
					break;
				case 20:
					if (func_291(1))
					{
						func_11();
						Local_298.f_10 = 21;
					}
					break;
				case 21:
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_298.f_9, 2f);
					if (!__LIB_6__::func_572(Local_298.f_9, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						Local_298.f_10 = 20;
					}
					break;
				case 22:
					PED::SET_PED_FLEE_ATTRIBUTES(Local_298.f_9, 64, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_298.f_9, 128, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_298.f_9, 5, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_298.f_9, 2, true);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_298.f_9, 8, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_298.f_9, 1, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_298.f_9, 32, false);
					if (__LIB_0__::func_695(Local_300.f_0))
					{
						if ((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_300.f_0, false) && __LIB_0__::func_725(Local_300.f_0, Local_300.f_2, 3f, 1)) && __LIB_14__::func_697(ENTITY::GET_ENTITY_HEADING(Local_300.f_0), Local_300.f_5, 20f))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_298.f_9, Local_300.f_0, false) && !PED::IS_PED_BEING_JACKED(Local_298.f_9))
							{
								Local_298.f_10 = 23;
							}
							else
							{
								TASK::CLEAR_PED_TASKS(Local_298.f_9);
								TASK::TASK_ENTER_VEHICLE(Local_298.f_9, Local_300.f_0, 25000, -1, 2f, 1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_298.f_9, true);
								Local_298.f_10 = 23;
							}
						}
						else
						{
							Local_298.f_10 = 20;
						}
					}
					else
					{
						Local_298.f_10 = 20;
					}
					break;
				case 23:
					if (!__LIB_0__::func_695(Local_300.f_0))
					{
						Local_298.f_10 = 20;
					}
					else if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_300.f_0, false) || PED::IS_PED_BEING_JACKED(Local_298.f_9)) || !__LIB_0__::func_725(Local_300.f_0, Local_300.f_2, 3f, 1)) || !__LIB_14__::func_697(ENTITY::GET_ENTITY_HEADING(Local_300.f_0), Local_300.f_5, 20f))
					{
						Local_298.f_10 = 20;
					}
					else if (PED::IS_PED_SITTING_IN_VEHICLE(Local_298.f_9, Local_300.f_0))
					{
						Local_298.f_10 = 24;
					}
					else if (!__LIB_6__::func_572(Local_298.f_9, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
					{
						Local_298.f_10 = 22;
					}
					break;
				case 24:
					if (__LIB_0__::func_695(Local_300.f_0) && PED::IS_PED_SITTING_IN_VEHICLE(Local_298.f_9, Local_300.f_0))
					{
						TASK::CLEAR_PED_TASKS(Local_298.f_9);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_129);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_300.f_0, -533.7831f, 317.3689f, 82.0616f, 60f, 0, Local_300.f_1, 786468, 8f, -1f);
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, Local_300.f_0, PLAYER::PLAYER_PED_ID(), 8, 80f, 786468, 500f, -1f, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_129);
						TASK::TASK_PERFORM_SEQUENCE(Local_298.f_9, iLocal_129);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_129);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_298.f_9, true);
						Local_298.f_10 = 25;
					}
					else
					{
						Local_298.f_10 = 20;
					}
					break;
				case 25:
					if (!__LIB_6__::func_572(Local_298.f_9, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						Local_298.f_10 = 24;
					}
					break;
				case 26:
					if (func_291(1))
					{
						if ((!PED::IS_PED_RAGDOLL(Local_298.f_9) && !TASK::IS_PED_GETTING_UP(Local_298.f_9)) && !PED::IS_PED_BEING_STUNNED(Local_298.f_9, 0))
						{
							if (__LIB_6__::func_572(Local_298.f_9, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_298.f_9, -16f, true);
							}
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_298.f_9, 5, false);
							TASK::TASK_LOOK_AT_ENTITY(Local_298.f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_HANDS_UP(Local_298.f_9, -1, PLAYER::PLAYER_PED_ID(), -1, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_298.f_9, true);
							if (PED::IS_PED_IN_COMBAT(Local_298.f_9, 0))
							{
							}
							Local_298.f_10 = 27;
						}
					}
					break;
				case 27:
					if (!__LIB_6__::func_572(Local_298.f_9, joaat("SCRIPT_TASK_HANDS_UP")))
					{
						Local_298.f_10 = 26;
					}
					if (PED::IS_PED_IN_COMBAT(Local_298.f_9, 0))
					{
					}
					break;
				case 28:
					TASK::CLEAR_PED_TASKS(Local_298.f_9);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_298.f_9, 5, false);
					TASK::TASK_COWER(Local_298.f_9, -1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_298.f_9, true);
					Local_298.f_10 = 29;
					break;
				case 29:
					if (!PED::IS_PED_RAGDOLL(Local_298.f_9))
					{
						if (!__LIB_6__::func_572(Local_298.f_9, joaat("SCRIPT_TASK_COWER")))
						{
							Local_298.f_10 = 28;
						}
					}
					break;
				default:
					break;
				}
			}
	}
}

int func_339(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x2C3F3
{
	float fVar0;
	fVar0 = Param0.f_2;
	fVar0 = (fVar0 - Param1.f_2);
	fVar0 = MISC::ABSF(fVar0);
	if (fVar0 > fParam2)
	{
		return 1;
	}
	return 0;
}

int func_340(int iParam0, struct<3> Param1)//Position - 0x2C41F
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) >= 0 && PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) < 500)
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				if (__LIB_0__::func_725(iParam0, Param1, 3.5f, 1) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_341(int iParam0, bool bParam1, int iParam2)//Position - 0x2C487
{
	if (__LIB_0__::func_692(iParam0))
	{
		if (ENTITY::GET_ENTITY_HEALTH(iParam0) <= iParam2)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_298.f_9, PLAYER::PLAYER_PED_ID(), true))
			{
				if (bParam1)
				{
					if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_298.f_9, 0, 1) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_298.f_9, joaat("WEAPON_UNARMED"), 0))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
						WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iParam0);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
	}
	ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
	WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iParam0);
	return 0;
}

int func_342(int iParam0, int iParam1, bool bParam2, float fParam3, float fParam4, float fParam5)//Position - 0x2C500
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	if (__LIB_0__::func_692(iParam0))
	{
		if (func_297(1, 0, 1))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			if (MISC::IS_BULLET_IN_AREA(Var0, fParam4, true))
			{
				return 1;
			}
			if (__LIB_0__::func_725(iParam0, Local_322, fParam3, 1))
			{
				if (!__LIB_14__::func_695(iParam1, 10))
				{
					if (bParam2)
					{
						if (iLocal_125 != 12 && iLocal_125 != 13)
						{
							if (WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RELOADING(PLAYER::PLAYER_PED_ID()))
							{
								return 1;
							}
						}
					}
					if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						return 1;
					}
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						return 1;
					}
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
				if (func_327(iParam0, 1))
				{
					if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(Var1, Var2, joaat("WEAPON_GRENADE"), &Var3, false))
					{
					}
					else if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(Var1, Var2, joaat("WEAPON_SMOKEGRENADE"), &Var3, false))
					{
					}
					else if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(Var1, Var2, joaat("WEAPON_STICKYBOMB"), &Var3, false))
					{
					}
					else if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(Var1, Var2, joaat("WEAPON_MOLOTOV"), &Var3, false))
					{
						if (func_326(Var3))
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
		}
	}
	return 0;
}

int func_344(bool bParam0)//Position - 0x2C73C
{
	if (__LIB_0__::func_75())
	{
		if (((__LIB_14__::func_733("NIG1A_WILL1", 0) || __LIB_14__::func_733("NIG1A_WILL2", 0)) || __LIB_14__::func_733("NIG1A_WILL3", 0)) || __LIB_14__::func_733("NIG1A_IDLE2", 0))
		{
			if (bParam0)
			{
				__LIB_0__::func_638();
			}
			else
			{
				__LIB_0__::func_429();
			}
			return 1;
		}
	}
	return 0;
}

int func_345(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x2C799
{
	if (__LIB_0__::func_692(iParam0))
	{
		if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0) || (iParam2 && PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())))
		{
			if (__LIB_0__::func_725(iParam0, Local_322, fParam3, 1))
			{
				if (!__LIB_14__::func_695(iParam1, 10))
				{
					return 1;
				}
			}
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_346(int iParam0)//Position - 0x2C811
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
	{
		iVar0 = 0;
		if (__LIB_14__::func_351())
		{
			bVar2 = false;
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < __LIB_13__::func_680())
			{
				if (ENTITY::DOES_ENTITY_EXIST(__LIB_13__::func_679(iVar0)))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(__LIB_13__::func_679(iVar0));
					if (iVar1 == iParam0)
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), true))
						{
							if (iLocal_125 == 0 || Local_298.f_18 == MISC::GET_FRAME_COUNT())
							{
								bVar2 = true;
							}
						}
					}
				}
				iVar0++;
			}
			if (bVar2)
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
				return 1;
			}
		}
		if (__LIB_37__::func_97())
		{
			bVar3 = false;
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < __LIB_37__::func_96())
			{
				if (ENTITY::DOES_ENTITY_EXIST(__LIB_37__::func_95(iVar0)))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(__LIB_37__::func_95(iVar0));
					if (iVar1 == iParam0)
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), true))
						{
							if (iLocal_125 == 0 || Local_298.f_18 == MISC::GET_FRAME_COUNT())
							{
								bVar3 = true;
							}
						}
					}
				}
				iVar0++;
			}
			if (bVar3)
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
				return 1;
			}
		}
		PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
	}
	return 0;
}

int func_353(bool bParam0)//Position - 0x2C982
{
	struct<6> Var0;
	if (!iLocal_101)
	{
		if ((__LIB_14__::func_733("NIG1A_WILL1", 0) || __LIB_14__::func_733("NIG1A_WILL2", 0)) || __LIB_14__::func_733("NIG1A_WILL3", 0))
		{
			Var0 = { __LIB_0__::func_485() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				iLocal_101 = 1;
				if (iLocal_119 > 0)
				{
					iLocal_119 = (iLocal_119 - 1);
				}
				cLocal_303 = { Var0 };
				if (bParam0)
				{
					__LIB_0__::func_638();
				}
				else
				{
					__LIB_0__::func_429();
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_354(var uParam0)//Position - 0x2C9F9
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	int iVar3;
	if (bLocal_93)
	{
		iVar0 = 1;
		if (iLocal_119 == 3)
		{
			iVar0 = 0;
		}
		if (__LIB_0__::func_75())
		{
			if (!iLocal_101)
			{
				*uParam0 = MISC::GET_GAME_TIMER();
				if (iLocal_125 != 0 && ENTITY::IS_ENTITY_OCCLUDED(Local_298.f_9))
				{
					if (func_353(1))
					{
					}
				}
			}
		}
		else if (iLocal_125 == 0)
		{
			iVar1 = 4;
			StringCopy(&Var2, "", 24);
			if (iLocal_119 < iVar1)
			{
				iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000);
				if (iLocal_119 == 3)
				{
					iVar3 = 2500;
				}
				if (iLocal_101)
				{
					iVar3 = 100;
				}
				if (__LIB_14__::func_684(*uParam0, iVar3))
				{
					switch (iLocal_119)
					{
						case 0:
							StringCopy(&Var2, "NIG1A_WILL1", 24);
							break;
						case 1:
							StringCopy(&Var2, "NIG1A_WILL2", 24);
							break;
						case 2:
							StringCopy(&Var2, "NIG1A_WILL3", 24);
							iVar0 = 3;
							break;
						case 3:
							StringCopy(&Var2, "NIG1A_IDLE2", 24);
							iVar0 = 2;
							break;
					}
					if (__LIB_0__::func_692(Local_297[4 /*19*/].f_9))
					{
						if (iLocal_101)
						{
							if (func_318(&uLocal_132, sLocal_131, &Var2, &cLocal_303, 7, 0, 0))
							{
								iLocal_101 = 0;
								*uParam0 = MISC::GET_GAME_TIMER();
								iLocal_119++;
								func_292(iVar0);
								return 1;
							}
						}
						else if (func_294(&uLocal_132, sLocal_131, &Var2, 7, 0, 0, 0))
						{
							iLocal_101 = 0;
							*uParam0 = MISC::GET_GAME_TIMER();
							func_292(iVar0);
							iLocal_119++;
							return 1;
						}
					}
				}
			}
		}
		func_292(iVar0);
	}
	return 0;
}

void func_355()//Position - 0x2CB56
{
	Local_322 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iLocal_125 = func_63(PLAYER::PLAYER_PED_ID(), 0);
	func_62(iLocal_125);
	func_336();
	func_286();
	switch (iLocal_71)
	{
		case 0:
			func_358();
			iLocal_74 = 0;
			iLocal_71 = 1;
			break;
		case 1:
			func_358();
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (__LIB_0__::func_501("NIG1A_OBJ_05", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("NIG1A_OBJ_05");
				}
				if (!__LIB_0__::func_75())
				{
					iLocal_71 = 2;
				}
			}
			else if (!iLocal_74)
			{
				if (!__LIB_0__::func_501("NIG1A_OBJ_05", 0, 0))
				{
					__LIB_0__::func_229("NIG1A_OBJ_05", 7500, 0);
					iLocal_74 = 1;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_501("NIG1A_OBJ_05", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("NIG1A_OBJ_05");
			}
			func_268(5);
			break;
	}
}

void func_358()//Position - 0x2CC5B
{
	int iVar0;
	if (bLocal_104 || iLocal_105)
	{
		if (!iLocal_103)
		{
			iVar0 = 0;
			if (iLocal_105)
			{
				iVar0 = 5000;
			}
			else if (bLocal_104)
			{
				iVar0 = 10000;
			}
			if (iVar0 != 0)
			{
				if (__LIB_14__::func_684(iLocal_117, iVar0))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
					if (iLocal_105)
					{
						if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_321, 60f, 1))
						{
							AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_NIGEL_1A_01", 0f);
						}
					}
					iLocal_103 = 1;
				}
			}
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (iLocal_125 != 12 && iLocal_125 != 13)
			{
				PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
			}
			else if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_321, 60f, 1))
			{
				PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
			}
		}
	}
}

void func_359()//Position - 0x2CD30
{
	int iVar0;
	Local_322 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iLocal_125 = func_63(PLAYER::PLAYER_PED_ID(), 0);
	func_62(iLocal_125);
	func_358();
	func_336();
	func_286();
	iVar0 = 0;
	switch (iLocal_71)
	{
		case 0:
			func_360(1, "Leave the area.", 1, 0, 0, 1);
			iLocal_71 = 1;
			break;
		case 1:
			if (!iLocal_78)
			{
				if (__LIB_0__::func_692(Local_298.f_9))
				{
					if (__LIB_0__::func_75())
					{
						__LIB_0__::func_429();
					}
					if (func_294(&uLocal_132, sLocal_131, "NIG1A_MCS", 7, __LIB_38__::func_288(), 0, 0))
					{
						iLocal_78 = 1;
					}
				}
				else
				{
					iLocal_78 = 1;
				}
			}
			else if (!iLocal_76)
			{
				if (__LIB_0__::func_692(Local_298.f_9))
				{
					if (Local_298.f_10 == 15)
					{
						if (!__LIB_14__::func_733("NIG1A_MCS", 1))
						{
							if (func_294(&uLocal_132, sLocal_131, "NIG1A_ML", 7, __LIB_38__::func_288(), 0, 0))
							{
								AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
								if (iLocal_124 == 4)
								{
									Local_298.f_10 = 20;
									iLocal_124 = 5;
								}
								iLocal_76 = 1;
							}
						}
					}
				}
				else
				{
					iLocal_76 = 1;
				}
			}
			else if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_321, 60f, 1))
			{
				if (!iLocal_91)
				{
					if (!__LIB_0__::func_75())
					{
						__LIB_0__::func_229("NIG1A_OBJ_04", 10000, 0);
						iLocal_91 = 1;
					}
					else if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (!__LIB_14__::func_733("NIG1A_ML", 1))
						{
							__LIB_0__::func_229("NIG1A_OBJ_04", 10000, 0);
							iLocal_91 = 1;
						}
					}
				}
				else if (!iLocal_86)
				{
					if (!__LIB_0__::func_75())
					{
						if (!func_327(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (func_294(&uLocal_132, sLocal_131, "NIG1A_TLA", 7, __LIB_38__::func_288(), 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 3f, 0);
								iLocal_86 = 1;
							}
						}
					}
				}
			}
			else if (!__LIB_0__::func_75())
			{
				iLocal_71 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_501("NIG1A_OBJ_04", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("NIG1A_OBJ_04");
			}
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				__LIB_14__::func_728(&(Local_297[iVar0 /*19*/].f_9), 0);
				iVar0++;
			}
			AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", false);
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_268(7);
			}
			else
			{
				func_268(5);
			}
			break;
	}
}

void func_360(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2CF41
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
		__LIB_0__::func_179(1);
		if (iParam0 <= Global_100478)
		{
		}
		iVar1 = __LIB_0__::func_365(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113386.f_9085.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = __LIB_0__::func_510(iVar1);
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
			iVar4 = __LIB_0__::func_531(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
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
		func_361(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_361(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2D0B6
{
	func_362(&Global_106934, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_362(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x2D0D2
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_14__::func_466();
	uParam0->f_1 = __LIB_0__::func_464();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_15__::func_985(&(uParam0->f_2884), 0);
		__LIB_37__::func_232(PLAYER::PLAYER_PED_ID());
		__LIB_37__::func_235(PLAYER::PLAYER_PED_ID(), 0);
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
			__LIB_37__::func_200(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
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
		__LIB_16__::func_897(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__::func_384(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

void func_435()//Position - 0x3401F
{
	struct<3> Var0;
	Local_322 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iLocal_125 = func_63(PLAYER::PLAYER_PED_ID(), 0);
	func_62(iLocal_125);
	func_358();
	func_336();
	func_286();
	switch (iLocal_71)
	{
		case 0:
			if (func_440())
			{
				if (!OBJECT::DOES_PICKUP_EXIST(Local_299.f_0))
				{
					if (func_438(&(Local_299.f_3), 1065353216))
					{
						Local_299.f_0 = OBJECT::CREATE_PICKUP(Local_299.f_6, Local_299.f_3, Local_299.f_7, -1, true, Local_299.f_1);
						if (OBJECT::DOES_PICKUP_EXIST(Local_299.f_0))
						{
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(Local_299.f_0))
							{
								if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_1A_TOOTH", false, -1))
								{
									Var0 = { OBJECT::GET_PICKUP_COORDS(Local_299.f_0) };
									Var0.f_2 = (Var0.f_2 + 0.35f);
									AUDIO::PLAY_SOUND_FROM_COORD(-1, "TOOTH_PING", Var0, "NIGEL_1A_SOUNDSET", false, 0, false);
								}
								if (!HUD::DOES_BLIP_EXIST(Local_299.f_2))
								{
									Local_299.f_2 = __LIB_16__::func_324(Local_299.f_0);
								}
								if (HUD::DOES_BLIP_EXIST(Local_299.f_2))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_299.f_2, "NIG1A_TP_BLIP");
								}
							}
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_299.f_1);
						if (!iLocal_105)
						{
							if (iLocal_117 == 0)
							{
								iLocal_117 = MISC::GET_GAME_TIMER();
							}
							iLocal_105 = 1;
						}
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 0f, 0);
						iLocal_71 = 1;
					}
				}
			}
			break;
		case 1:
			if (!iLocal_78)
			{
				if (__LIB_0__::func_692(Local_298.f_9))
				{
					if (__LIB_0__::func_75())
					{
						__LIB_0__::func_429();
					}
					if (func_294(&uLocal_132, sLocal_131, "NIG1A_MCS", 7, __LIB_38__::func_288(), 0, 0))
					{
						AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
						iLocal_78 = 1;
					}
				}
				else
				{
					iLocal_78 = 1;
				}
			}
			else if (!iLocal_90)
			{
				if (!__LIB_14__::func_733("NIG1A_MCS", 1))
				{
					__LIB_0__::func_229("NIG1A_OBJ_03", 7500, 1);
					iLocal_90 = 1;
				}
			}
			else if (!iLocal_76)
			{
				if (__LIB_0__::func_692(Local_298.f_9))
				{
					if (Local_298.f_10 == 15)
					{
						if (!__LIB_14__::func_733("NIG1A_MCS", 1))
						{
							if (func_294(&uLocal_132, sLocal_131, "NIG1A_ML", 7, __LIB_38__::func_288(), 0, 0))
							{
								AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
								if (iLocal_124 == 4)
								{
									Local_298.f_10 = 20;
									iLocal_124 = 5;
								}
								iLocal_76 = 1;
							}
						}
					}
				}
				else
				{
					iLocal_76 = 1;
				}
			}
			if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(Local_299.f_0))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 8f, 1);
				iLocal_71 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_501("NIG1A_OBJ_03", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("NIG1A_OBJ_03");
			}
			iLocal_90 = 1;
			__LIB_0__::func_714(&(Local_299.f_2));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_299.f_1);
			__LIB_39__::func_33(&Local_299);
			func_268(4);
			break;
	}
}

int func_438(var uParam0, float fParam1)//Position - 0x342E1
{
	*uParam0 = { 0f, 0f, 0f };
	if (ENTITY::DOES_ENTITY_EXIST(Local_298.f_9))
	{
		*uParam0 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(Local_298.f_9, false), 1.5f, 4f) };
		if (!__LIB_0__::func_78(*uParam0, 0f, 0f, 0f, 0))
		{
			if (func_439(uParam0, fParam1))
			{
				if (SYSTEM::VDIST(Local_322, *uParam0) > (0.75f + fParam1))
				{
					return 1;
				}
			}
		}
	}
	*uParam0 = { 0f, 0f, 0f };
	return 0;
}

int func_439(var uParam0, float fParam1)//Position - 0x34354
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bVar3 = false;
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, -552.33905f, 288.7169f, 79.176384f, -549.2252f, 288.55338f, 86.37862f, 5.5f, false, true))
	{
		bVar3 = true;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, -552.9021f, 281.6948f, 79.976616f, -549.6599f, 281.1817f, 89.67716f, 4f, false, true))
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		iVar1 = 0;
		iVar2 = 12;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			switch (iVar1)
			{
				case 0:
					Var0 = { -552.7071f, 290.0112f, 81.2f };
					break;
				case 1:
					Var0 = { -552.81635f, 287.68204f, 81.2f };
					break;
				case 2:
					Var0 = { -553.0605f, 285.44385f, 81.2f };
					break;
				case 3:
					Var0 = { -553.4389f, 282.57767f, 81.2f };
					break;
				case 4:
					Var0 = { -553.9162f, 279.92017f, 81.2f };
					break;
				case 5:
					Var0 = { -555.1916f, 290.48895f, 81.2f };
					break;
				case 6:
					Var0 = { -555.4751f, 287.19907f, 81.2f };
					break;
				case 7:
					Var0 = { -555.2084f, 284.9002f, 81.2f };
					break;
				case 8:
					Var0 = { -555.4406f, 282.68533f, 81.2f };
					break;
				case 9:
					Var0 = { -555.8541f, 280.33383f, 81.2f };
					break;
				case 10:
					Var0 = { -557.7944f, 289.95535f, 81.2f };
					break;
				case 11:
					Var0 = { -558.2978f, 284.79138f, 81.2f };
					break;
			}
			if (SYSTEM::VDIST(Local_322, *uParam0) > (0.75f + fParam1))
			{
				*uParam0 = { Var0 };
				return 1;
			}
			iVar1++;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_440()//Position - 0x34567
{
	STREAMING::REQUEST_MODEL(Local_299.f_1);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_1A_TOOTH", false, -1);
	if (STREAMING::HAS_MODEL_LOADED(Local_299.f_1) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_1A_TOOTH", false, -1))
	{
		return 1;
	}
	return 0;
}

void func_441()//Position - 0x345A5
{
	Local_322 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iLocal_125 = func_63(PLAYER::PLAYER_PED_ID(), 0);
	func_62(iLocal_125);
	func_358();
	func_336();
	func_286();
	switch (iLocal_71)
	{
		case 0:
			if (__LIB_0__::func_692(Local_298.f_9))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_298.f_8))
				{
					Local_298.f_8 = __LIB_14__::func_661(Local_298.f_9, 1, 0, 5);
				}
			}
			func_440();
			iLocal_116 = MISC::GET_GAME_TIMER();
			iLocal_71 = 1;
			break;
		case 1:
			if (iLocal_124 == 4)
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 8f, 1);
				iLocal_71 = 2;
			}
			else
			{
				if (!iLocal_89)
				{
					if ((bLocal_79 && !__LIB_14__::func_733(sLocal_130, 1)) || iLocal_124 != 0)
					{
						if (!__LIB_0__::func_75())
						{
							__LIB_0__::func_229("NIG1A_OBJ_02", 7500, 1);
							iLocal_89 = 1;
						}
						else if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (!__LIB_14__::func_733("NIG1A_MSP4", 1) && !__LIB_14__::func_733("NIG1A_MSU2", 1))
							{
								__LIB_0__::func_229("NIG1A_OBJ_02", 7500, 1);
								iLocal_89 = 1;
							}
						}
					}
				}
				func_472();
				if (__LIB_0__::func_692(Local_298.f_9))
				{
					__LIB_14__::func_615(&uLocal_20, Local_298.f_9, 0, 0, 1, 1, 1);
				}
			}
			break;
		case 2:
			__LIB_0__::func_714(&(Local_298.f_8));
			__LIB_0__::func_345(&uLocal_20, 0, 0);
			if (__LIB_0__::func_501("NIG1A_OBJ_02", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("NIG1A_OBJ_02");
			}
			if (__LIB_0__::func_692(Local_298.f_9))
			{
				if (IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_298.f_9)) >= 137.5f)
				{
					ENTITY::SET_ENTITY_HEALTH(Local_298.f_9, 135, 0);
				}
			}
			func_268(3);
			break;
	}
}

void func_472()//Position - 0x358AC
{
	if (iLocal_124 == 0)
	{
		if (__LIB_0__::func_121(Local_298.f_9))
		{
			if (iLocal_125 == 0)
			{
				if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Local_298.f_9))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_298.f_9, -1, 0, 2);
				}
			}
			else if (PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Local_298.f_9))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
		}
	}
}

void func_474()//Position - 0x3595C
{
	Local_322 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iLocal_125 = func_63(PLAYER::PLAYER_PED_ID(), 0);
	func_62(iLocal_125);
	func_358();
	func_336();
	func_286();
	switch (iLocal_71)
	{
		case 0:
			iLocal_71 = 1;
			break;
		case 1:
			if (iLocal_125 != 12 && iLocal_125 != 13)
			{
				__LIB_0__::func_714(&iLocal_73);
			}
			else if (!HUD::DOES_BLIP_EXIST(iLocal_73))
			{
				iLocal_73 = __LIB_14__::func_704(Local_321, 5, 1);
			}
			func_472();
			if (!iLocal_75)
			{
				if (!bLocal_96)
				{
					if (iLocal_125 == 9)
					{
						if (__LIB_0__::func_75())
						{
							func_313(0);
						}
						if (func_294(&uLocal_132, sLocal_131, "NIG1A_B1", 7, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 8f, 1);
							func_315(2);
							iLocal_75 = 1;
						}
					}
				}
			}
			else if (bLocal_96)
			{
				if (__LIB_14__::func_733("NIG1A_B1", 1))
				{
					__LIB_0__::func_429();
				}
			}
			else if (!__LIB_14__::func_733("NIG1A_B1", 1))
			{
				__LIB_0__::func_630(786);
				iLocal_71 = 2;
			}
			if (bLocal_79)
			{
				if (!__LIB_14__::func_733(sLocal_130, 1))
				{
					iLocal_71 = 2;
				}
			}
			if (!iLocal_84)
			{
				if (iLocal_125 == 11)
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_38__::func_293(PLAYER::PLAYER_PED_ID(), 1) != 1)
						{
							if (func_294(&uLocal_132, sLocal_131, "NIG1A_TBE1", 7, 0, 0, 0))
							{
								iLocal_84 = 1;
							}
						}
						else
						{
							iLocal_84 = 1;
						}
					}
				}
				else
				{
					iLocal_84 = 1;
				}
			}
			if (iLocal_124 != 0)
			{
				iLocal_71 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_501("NIG1A_OBJ_01", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("NIG1A_OBJ_01");
			}
			iLocal_84 = 1;
			__LIB_0__::func_714(&iLocal_73);
			func_268(2);
			break;
	}
}

void func_478()//Position - 0x35C19
{
	Local_322 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iLocal_125 = func_63(PLAYER::PLAYER_PED_ID(), 0);
	func_62(iLocal_125);
	switch (iLocal_71)
	{
		case 0:
			if (__LIB_0__::func_692(Local_297[0 /*19*/].f_9))
			{
				__LIB_0__::func_222(&uLocal_132, 4, Local_297[0 /*19*/].f_9, "Nigel1AGroupie01", 0, 1);
			}
			if (__LIB_0__::func_692(Local_297[3 /*19*/].f_9))
			{
				__LIB_0__::func_222(&uLocal_132, 5, Local_297[3 /*19*/].f_9, "Nigel1AManager", 0, 1);
			}
			if (__LIB_0__::func_692(Local_298.f_9))
			{
				__LIB_0__::func_222(&uLocal_132, 8, Local_298.f_9, "Willy", 0, 1);
			}
			if (__LIB_0__::func_692(Local_297[1 /*19*/].f_9))
			{
				__LIB_0__::func_222(&uLocal_132, __LIB_13__::func_103("A"), Local_297[1 /*19*/].f_9, "Nigel1AGroupie02", 0, 1);
			}
			if (__LIB_0__::func_692(Local_297[2 /*19*/].f_9))
			{
				__LIB_0__::func_222(&uLocal_132, __LIB_13__::func_103("B"), Local_297[2 /*19*/].f_9, "Nigel1ARoadie", 0, 1);
			}
			if (__LIB_0__::func_692(Local_297[4 /*19*/].f_9))
			{
				__LIB_0__::func_222(&uLocal_132, __LIB_13__::func_103("C"), Local_297[4 /*19*/].f_9, "Nigel1AGroupie03", 0, 1);
			}
			if (bLocal_93)
			{
				__LIB_0__::func_84(800, 0);
			}
			iLocal_71 = 1;
			break;
		case 1:
			func_336();
			func_286();
			if (iLocal_125 != 12 && iLocal_125 != 13)
			{
				iLocal_71 = 2;
			}
			else if (!iLocal_92)
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 8f, 1);
				__LIB_0__::func_229("NIG1A_OBJ_01", 7500, 0);
				if (!HUD::DOES_BLIP_EXIST(iLocal_73))
				{
					iLocal_73 = __LIB_14__::func_704(Local_321, 5, 1);
				}
				iLocal_92 = 1;
			}
			break;
		case 2:
			func_336();
			func_286();
			__LIB_0__::func_714(&iLocal_73);
			if (__LIB_0__::func_501("NIG1A_OBJ_01", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("NIG1A_OBJ_01");
			}
			func_268(1);
			break;
	}
}

void func_480()//Position - 0x360AD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (iLocal_106[iVar0] == 0)
		{
			if (func_483(iVar0))
			{
				switch (iVar0)
				{
					case 0:
						func_482(0, 1f, 1, 0);
						func_481(0, 5, 1);
						break;
					case 1:
						func_482(1, 1f, 1, 0);
						func_481(1, 5, 1);
						break;
					case 2:
						func_482(2, 0f, 0, 0);
						func_481(2, 6, 1);
						func_481(2, 5, 1);
						break;
					case 3:
						func_482(3, 0f, 0, 0);
						func_481(3, 6, 1);
						func_481(3, 5, 1);
						break;
					case 4:
						func_482(4, 0f, 0, 0);
						func_481(4, 6, 1);
						func_481(4, 5, 1);
						break;
					case 5:
						func_482(5, 0f, 0, 0);
						func_481(5, 6, 1);
						func_481(5, 5, 1);
						break;
					default:
						break;
				}
				iLocal_106[iVar0] = 1;
			}
		}
		iVar0++;
	}
}

int func_481(int iParam0, int iParam1, bool bParam2)//Position - 0x361A9
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_113[iParam0]))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_113[iParam0], iParam1, false, bParam2);
		return 1;
	}
	return 0;
}

int func_482(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0x361D2
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_113[iParam0]))
	{
		OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(iLocal_113[iParam0], bParam2);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_113[iParam0], fParam1, false, bParam3);
		return 1;
	}
	return 0;
}

int func_483(int iParam0)//Position - 0x36207
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_113[iParam0]))
	{
		return 1;
	}
	return 0;
}

void func_484()//Position - 0x36221
{
	if (bLocal_93)
	{
		if (iLocal_69 != 8 && iLocal_69 != 6)
		{
			func_485();
			if (iLocal_108 != 0)
			{
				func_268(8);
			}
		}
	}
}

void func_485()//Position - 0x3624F
{
	if (iLocal_69 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_298.f_9))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_298.f_9, false) || PED::IS_PED_INJURED(Local_298.f_9))
			{
				iLocal_108 = 1;
				return;
			}
		}
	}
}

void func_486(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x3628B
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	if (Global_78573 != 6)
	{
		if (Global_78575 == -1)
		{
			if (__LIB_14__::func_848(1, Param0))
			{
				if (Global_78576 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_33 > fVar0)
				{
					Global_78575 = MISC::GET_GAME_TIMER();
					Local_34 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_33 = 0f;
				}
				else
				{
					fLocal_33 = (fLocal_33 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_33 = 0f;
			}
		}
		else
		{
			if (!__LIB_14__::func_848(0, Param0))
			{
				Global_78575 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_78575);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_78573)
				{
					case 3:
					case 5:
						if (iParam1 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.07f;
						}
						else if (iParam2 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.077f;
						}
						else if (iParam3 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.05f;
						}
						else if (iParam4 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.035f;
						}
						else
						{
							fVar5 = 0f;
							fVar6 = -0.014f;
						}
						break;
					default:
						fVar5 = 0f;
						fVar6 = -0.014f;
						break;
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar11 = __LIB_14__::func_466();
				if (Global_78576 == 1 && Global_78574 == 62)
				{
					iVar11 = Global_113386.f_2363.f_539.f_4322;
				}
				switch (iVar11)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					default:
						iVar7 = 240;
						iVar8 = 200;
						iVar9 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar7, iVar8, iVar9, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { __LIB_14__::func_835(Global_78574, Global_78576, iParam5) };
				if (fVar6 == -0.014f)
				{
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar5, fVar6, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_36 = 0.14f;
				}
				else
				{
					fLocal_36 = 0.17f;
				}
				if (fVar6 == -0.014f)
				{
					if (__LIB_0__::func_95(&Var4) > fLocal_36)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_34.f_0, (Local_34.f_1 + fLocal_35));
							Global_78578 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar5, fVar6, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (Global_78577 == 1)
				{
					__LIB_0__::func_55();
					fLocal_33 = 0f;
				}
			}
			else
			{
				__LIB_0__::func_55();
				fLocal_33 = 0f;
			}
		}
	}
}

void func_506(int iParam0, bool bParam1)//Position - 0x36D96
{
	func_534(bParam1, 1);
	if (bParam1)
	{
		func_507();
	}
	iLocal_70 = iParam0;
	bLocal_93 = false;
	if (__LIB_0__::func_324())
	{
		iLocal_94 = 1;
	}
	else
	{
		iLocal_94 = 0;
	}
	if (!__LIB_0__::func_324())
	{
		if (iLocal_70 == 0)
		{
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_14__::func_739(PLAYER::PLAYER_PED_ID(), Local_327, fLocal_123, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
				iLocal_94 = 1;
			}
		}
	}
	func_1(iLocal_70);
}

void func_507()//Position - 0x36E21
{
	func_508(1, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		if (!__LIB_0__::func_324())
		{
			__LIB_14__::func_739(PLAYER::PLAYER_PED_ID(), Local_327, fLocal_123, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	}
	func_642();
	func_268(0);
}

void func_508(bool bParam0, bool bParam1)//Position - 0x36E88
{
	int iVar0;
	HUD::CLEAR_PRINTS();
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
	__LIB_0__::func_325();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	__LIB_0__::func_671(0);
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
	MISC::SET_TIME_SCALE(1f);
	__LIB_0__::func_203(0, 0);
	MISC::ENABLE_DISPATCH_SERVICE(2, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	MISC::ENABLE_DISPATCH_SERVICE(4, true);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	PED::SET_CREATE_RANDOM_COPS(true);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_128, false);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_GUARD_STAND", true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_CLIPBOARD", true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_Y_Doorman_01"), false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_M_Bouncer_01"), false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_320, Local_319, true, true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_300.f_1, false);
	__LIB_0__::func_221(&uLocal_132, 2);
	__LIB_0__::func_221(&uLocal_132, 3);
	__LIB_0__::func_221(&uLocal_132, 4);
	__LIB_0__::func_221(&uLocal_132, 5);
	__LIB_0__::func_345(&uLocal_20, 0, 0);
	__LIB_38__::func_290(1, 1, 1);
	__LIB_16__::func_873(-564.671f, 275.48468f, 82.01414f, -564.3256f, 278.74033f, 84.25044f, 2.1f, -564.6144f, 274.18298f, 82.01967f, 86f, 1, 1, 1, 0, 0);
	__LIB_16__::func_873(-561.8617f, 294.4707f, 86.49855f, -562.15326f, 291.70157f, 88.57632f, 1.5f, -554.927f, 294.07227f, 84.36716f, -95f, 1, 1, 1, 0, 0);
	__LIB_16__::func_322(140, 1);
	__LIB_16__::func_322(139, 1);
	__LIB_10__::func_347(4, 1);
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_113[iVar0]))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_113[iVar0], 0);
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_126);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_127);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1A_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("NIGEL_1A_SCENE");
	}
	AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", false);
	func_510();
	func_60();
	func_48(bParam0);
	func_509(bParam1);
}

void func_509(bool bParam0)//Position - 0x3707E
{
	int iVar0;
	STREAMING::REMOVE_ANIM_DICT("rcmnigel1a");
	STREAMING::REMOVE_ANIM_DICT(&cLocal_304);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_309);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_314);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_300.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_299.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_298.f_11);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_297[iVar0 /*19*/].f_11);
		iVar0++;
	}
	if (INTERIOR::IS_INTERIOR_READY(iLocal_122))
	{
		STREAMING::SET_INTERIOR_ACTIVE(iLocal_122, false);
		INTERIOR::UNPIN_INTERIOR(iLocal_122);
	}
	if (bParam0)
	{
		HUD::CLEAR_ADDITIONAL_TEXT(0, true);
	}
}

void func_510()//Position - 0x37109
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_47.f_0)
	{
		__LIB_13__::func_439(&(Local_47[iVar0 /*4*/]));
		iVar0++;
	}
}

void func_534(bool bParam0, bool bParam1)//Position - 0x3BA01
{
	if (bParam0)
	{
		__LIB_38__::func_290(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_535(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_535(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x3BA34
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
			switch (__LIB_14__::func_466())
			{
				case 0:
					if (func_208(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_94(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_208(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_94(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_208(PLAYER::PLAYER_PED_ID(), 8, 1) || func_208(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_94(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_208(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_94(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

void func_642()//Position - 0x47780
{
	func_663();
	__LIB_14__::func_841();
	func_656();
	while (!func_653())
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	__LIB_15__::func_780(64, 2, 0);
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_222(&uLocal_132, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), true);
	}
	MISC::CLEAR_BIT(&(Global_113386.f_18574.f_382), 2);
	func_643();
}

void func_643()//Position - 0x477EA
{
	int iVar0;
	char* sVar1;
	struct<6> Var2;
	if (ENTITY::DOES_ENTITY_EXIST(Local_72.f_35[0]))
	{
		Local_300.f_0 = Local_72.f_35[0];
	}
	else
	{
		func_644(&Local_300, Local_300.f_1, Local_300.f_2, Local_300.f_5, 1);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_300.f_1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_72.f_28[0]))
	{
		Local_298.f_9 = Local_72.f_28[0];
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Local_298.f_9))
	{
		Local_298.f_9 = PED::CREATE_PED(26, Local_298.f_11, Local_298.f_12, Local_298.f_15, true, true);
	}
	if (__LIB_0__::func_692(Local_298.f_9))
	{
		PED::SET_PED_CAN_BE_TARGETTED(Local_298.f_9, true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_298.f_9, true);
		PED::SET_PED_DIES_WHEN_INJURED(Local_298.f_9, true);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_298.f_9, true);
		PED::SET_PED_CONFIG_FLAG(Local_298.f_9, 42, true);
		PED::SET_PED_CONFIG_FLAG(Local_298.f_9, 259, true);
		AUDIO::STOP_PED_SPEAKING(Local_298.f_9, true);
		PED::SET_PED_LOD_MULTIPLIER(Local_298.f_9, 4f);
		if (PED::IS_PED_IN_GROUP(Local_298.f_9))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_298.f_9);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_298.f_9, iLocal_126);
		PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(Local_298.f_9, 10f, 5);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_298.f_9);
		ENTITY::SET_ENTITY_HEALTH(Local_298.f_9, 250, 0);
		PED::SET_PED_COMBAT_MOVEMENT(Local_298.f_9, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_298.f_9, true, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_298.f_9, true);
		STREAMING::REQUEST_ANIM_DICT(&cLocal_309);
		if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_309))
		{
			PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_298.f_9, 0, &cLocal_309, "base", 8f, true);
			PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_298.f_9, 1, &cLocal_309, "walk", 8f, true);
			PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_298.f_9, 2, &cLocal_309, "run", 8f, true);
		}
		Local_298.f_10 = 2;
		Local_298.f_16 = 0;
		Local_298.f_17 = 0;
		Local_298.f_18 = 0;
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_298.f_9, true);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_298.f_11);
	if (ENTITY::DOES_ENTITY_EXIST(Local_72.f_28[1]))
	{
		Local_297[4 /*19*/].f_9 = Local_72.f_28[1];
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_72.f_28[2]))
	{
		Local_297[0 /*19*/].f_9 = Local_72.f_28[2];
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_72.f_28[3]))
	{
		Local_297[1 /*19*/].f_9 = Local_72.f_28[3];
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_72.f_28[4]))
	{
		Local_297[3 /*19*/].f_9 = Local_72.f_28[4];
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_72.f_28[5]))
	{
		Local_297[2 /*19*/].f_9 = Local_72.f_28[5];
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_297[iVar0 /*19*/].f_9))
		{
			Local_297[iVar0 /*19*/].f_9 = PED::CREATE_PED(26, Local_297[iVar0 /*19*/].f_11, Local_297[iVar0 /*19*/].f_12, Local_297[iVar0 /*19*/].f_15, true, true);
		}
		iVar0++;
	}
	iLocal_120[0] = PED::CREATE_SYNCHRONIZED_SCENE(Local_323, Local_324, 2);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_120[0], true);
	PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_120[0], false);
	sVar1 = "";
	StringCopy(&Var2, "", 24);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_0__::func_692(Local_297[iVar0 /*19*/].f_9))
		{
			PED::SET_PED_DIES_WHEN_INJURED(Local_297[iVar0 /*19*/].f_9, true);
			PED::SET_PED_CONFIG_FLAG(Local_297[iVar0 /*19*/].f_9, 42, true);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_297[iVar0 /*19*/].f_9, true);
			if (PED::IS_PED_IN_GROUP(Local_297[iVar0 /*19*/].f_9))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_297[iVar0 /*19*/].f_9);
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_297[iVar0 /*19*/].f_9, iLocal_127);
			PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(Local_297[iVar0 /*19*/].f_9, 10f, 5);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iVar0 /*19*/].f_9, 64, false);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iVar0 /*19*/].f_9, 128, false);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iVar0 /*19*/].f_9, 2, false);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iVar0 /*19*/].f_9, 1, false);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iVar0 /*19*/].f_9, 32, false);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iVar0 /*19*/].f_9, 4, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_297[iVar0 /*19*/].f_9, 5, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_297[iVar0 /*19*/].f_9, 17, true);
			PED::SET_PED_COMBAT_MOVEMENT(Local_297[iVar0 /*19*/].f_9, 1);
			switch (iVar0)
			{
				case 3:
					PED::SET_PED_CAN_BE_TARGETTED(Local_297[iVar0 /*19*/].f_9, true);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 2, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 3, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 8, 0, 0, 0);
					Var2 = { func_290(iVar0, 0) };
					sVar1 = __LIB_1__::func_601(&Var2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_297[iVar0 /*19*/].f_9, iLocal_120[0], &cLocal_304, sVar1, 1000f, -8f, 17, 0, 1000f, 0);
					Local_297[iVar0 /*19*/].f_10 = 2;
					break;
				case 2:
					PED::SET_PED_CAN_BE_TARGETTED(Local_297[iVar0 /*19*/].f_9, true);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 2, 2, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 3, 0, 3, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 4, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 8, 0, 2, 0);
					Var2 = { func_290(iVar0, 0) };
					sVar1 = __LIB_1__::func_601(&Var2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_297[iVar0 /*19*/].f_9, iLocal_120[0], &cLocal_304, sVar1, 1000f, -8f, 17, 16, 1000f, 0);
					Local_297[iVar0 /*19*/].f_10 = 2;
					break;
				case 4:
					PED::SET_PED_CAN_BE_TARGETTED(Local_297[iVar0 /*19*/].f_9, false);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 2, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 3, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 7, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 8, 1, 0, 0);
					Local_297[iVar0 /*19*/].f_10 = 2;
					func_292(1);
					break;
				case 0:
					PED::SET_PED_CAN_BE_TARGETTED(Local_297[iVar0 /*19*/].f_9, false);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 0, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 2, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 3, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 4, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 7, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 8, 1, 0, 0);
					Var2 = { func_290(iVar0, 0) };
					sVar1 = __LIB_1__::func_601(&Var2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_297[iVar0 /*19*/].f_9, iLocal_120[0], &cLocal_304, sVar1, 1000f, -8f, 17, 16, 1000f, 0);
					Local_297[iVar0 /*19*/].f_10 = 2;
					break;
				case 1:
					PED::SET_PED_CAN_BE_TARGETTED(Local_297[iVar0 /*19*/].f_9, false);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 0, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 2, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 3, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 4, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 7, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_297[iVar0 /*19*/].f_9, 8, 1, 0, 0);
					Var2 = { func_290(iVar0, 0) };
					sVar1 = __LIB_1__::func_601(&Var2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_297[iVar0 /*19*/].f_9, iLocal_120[0], &cLocal_304, sVar1, 1000f, -8f, 17, 16, 1000f, 0);
					Local_297[iVar0 /*19*/].f_10 = 2;
					break;
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iVar0 /*19*/].f_9, true);
			Local_297[iVar0 /*19*/].f_16 = 0;
			Local_297[iVar0 /*19*/].f_17 = 0;
			Local_297[iVar0 /*19*/].f_18 = 0;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_297[iVar0 /*19*/].f_11);
		iVar0++;
	}
}

int func_644(int* iParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4)//Position - 0x47FAE
{
	STREAMING::REQUEST_MODEL(iParam1);
	if (iParam4 == 1)
	{
		while (!STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (!STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		return 0;
	}
	__LIB_17__::func_25(iParam0, iParam1, Param2, fParam3);
	if (__LIB_0__::func_121(*iParam0))
	{
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, 1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam0, 1);
		ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(*iParam0, false);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
	return 1;
}

int func_653()//Position - 0x48346
{
	STREAMING::REQUEST_MODEL(Local_299.f_1);
	STREAMING::REQUEST_MODEL(Local_298.f_11);
	STREAMING::REQUEST_MODEL(Local_300.f_1);
	STREAMING::REQUEST_ANIM_DICT("rcmnigel1a");
	STREAMING::REQUEST_ANIM_DICT(&cLocal_304);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_309);
	HUD::REQUEST_ADDITIONAL_TEXT("NIGEL1A", 0);
	if (((((((STREAMING::HAS_MODEL_LOADED(Local_298.f_11) && STREAMING::HAS_MODEL_LOADED(Local_300.f_1)) && STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel1a")) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_304)) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_309)) && func_655()) && func_654(1)) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		return 1;
	}
	return 0;
}

int func_654(bool bParam0)//Position - 0x483EA
{
	if (!INTERIOR::IS_INTERIOR_READY(iLocal_122))
	{
		if (bParam0)
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_122);
		}
		return 0;
	}
	STREAMING::SET_INTERIOR_ACTIVE(iLocal_122, true);
	return 1;
}

int func_655()//Position - 0x48419
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		STREAMING::REQUEST_MODEL(Local_297[iVar0 /*19*/].f_11);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!STREAMING::HAS_MODEL_LOADED(Local_297[iVar0 /*19*/].f_11))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_656()//Position - 0x48468
{
	int iVar0;
	if (__LIB_0__::func_323() || !bLocal_93)
	{
		__LIB_11__::func_816(4, 0);
	}
	MISC::ENABLE_DISPATCH_SERVICE(2, false);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	MISC::ENABLE_DISPATCH_SERVICE(4, false);
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	PED::SET_CREATE_RANDOM_COPS(false);
	PED::SET_PED_NON_CREATION_AREA(Local_320, Local_319);
	iLocal_128 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_320, Local_319, false, true, true, true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_GUARD_STAND", false);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_CLIPBOARD", false);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_Y_Doorman_01"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_M_Bouncer_01"), true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_320, Local_319, false, true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_300.f_1, true);
	if (((__LIB_0__::func_323() || __LIB_0__::func_2(0)) || __LIB_0__::func_324()) || !bLocal_93)
	{
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_320, Local_319, 0);
		MISC::CLEAR_AREA(Local_321, 15f, true, false, false, false);
		MISC::CLEAR_AREA(-573.39404f, 289.3696f, 79.06918f, 15f, true, false, false, false);
		MISC::CLEAR_AREA(-554.17f, 307.68f, 82.84f, 2f, true, false, false, false);
	}
	__LIB_16__::func_322(140, 0);
	__LIB_16__::func_322(139, 0);
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		iLocal_106[iVar0] = 1;
		iVar0++;
	}
	func_482(0, 1f, 1, 0);
	func_482(1, 1f, 1, 0);
	func_482(2, 0f, 0, 0);
	func_482(3, 0f, 0, 0);
	func_482(4, 0f, 0, 0);
	func_482(5, 0f, 0, 0);
	func_481(2, 6, 1);
	func_481(3, 6, 1);
	func_481(4, 6, 1);
	func_481(5, 6, 1);
	SYSTEM::WAIT(0);
	func_481(0, 5, 1);
	func_481(1, 5, 1);
	func_481(2, 5, 1);
	func_481(3, 5, 1);
	func_481(4, 5, 1);
	func_481(5, 5, 1);
}

void func_663()//Position - 0x4BC93
{
	int iVar0;
	iLocal_74 = 0;
	iLocal_75 = 0;
	iLocal_76 = 0;
	iLocal_77 = 0;
	iLocal_78 = 0;
	bLocal_79 = false;
	iLocal_80 = 0;
	iLocal_81 = 0;
	iLocal_82 = 0;
	iLocal_83 = 1;
	iLocal_84 = 0;
	iLocal_85 = 0;
	iLocal_86 = 0;
	iLocal_87 = 0;
	iLocal_88 = 0;
	iLocal_89 = 0;
	iLocal_90 = 0;
	iLocal_91 = 0;
	iLocal_92 = 0;
	bLocal_95 = false;
	bLocal_96 = false;
	iLocal_97 = 0;
	iLocal_98 = 0;
	iLocal_99 = 0;
	iLocal_100 = 0;
	iLocal_101 = 0;
	bLocal_102 = false;
	iLocal_103 = 0;
	bLocal_104 = false;
	iLocal_105 = 0;
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		iLocal_106[iVar0] = 0;
		iVar0++;
	}
	iLocal_107 = 0;
	iLocal_109 = 0;
	iLocal_110 = 0;
	iLocal_111 = 0;
	iLocal_112 = 0;
	iLocal_116 = 0;
	iLocal_115 = 0;
	iLocal_117 = 0;
	iLocal_118 = 0;
	iLocal_119 = 0;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		iLocal_120[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		iLocal_121[iVar0] = -1;
		iVar0++;
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_72.f_59))
	{
		iLocal_121[1] = Local_72.f_59;
	}
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		iLocal_113[iVar0] = 0;
		iVar0++;
	}
	iLocal_114[0] = MISC::GET_HASH_KEY("V_64_Dance");
	iLocal_114[1] = MISC::GET_HASH_KEY("V_64_Entry_Trans");
	iLocal_114[2] = MISC::GET_HASH_KEY("V_64_Entry");
	iLocal_114[3] = MISC::GET_HASH_KEY("V_64_Back");
	iLocal_114[4] = MISC::GET_HASH_KEY("V_64_Back_Lower");
	iLocal_114[5] = MISC::GET_HASH_KEY("V_64_Base2");
	iLocal_114[6] = MISC::GET_HASH_KEY("V_64_Cloak");
	iLocal_114[7] = MISC::GET_HASH_KEY("V_64_Side");
	iLocal_114[8] = MISC::GET_HASH_KEY("V_64_Side_Upper");
	iLocal_114[9] = MISC::GET_HASH_KEY("V_64_Upper");
	iLocal_114[10] = MISC::GET_HASH_KEY("V_64_Rear");
	iLocal_114[11] = MISC::GET_HASH_KEY("V_64_Rear_Trans");
	iLocal_110 = 0;
	iLocal_112 = 0;
	iLocal_111 = 0;
	fLocal_123 = 341.468f;
	iLocal_108 = 0;
	StringCopy(&Local_301, "", 24);
	Local_321 = { -558.2858f, 284.4073f, 81.1764f };
	Local_320 = { -577.27405f, 270.65054f, 77f };
	Local_319 = { -543.17926f, 315.29727f, 94f };
	Local_323 = { -559.9f, 289.366f, 84.376f };
	Local_324 = { 0f, 0f, -6f };
	Local_325 = { -552.18f, 285.476f, 81.976f };
	Local_326 = { 0f, 0f, 79.5f };
	Local_327 = { -573.0122f, 244.784f, 81.9076f };
	Local_298.f_11 = joaat("U_M_M_WillyFist");
	Local_298.f_12 = { -552.66f, 287.75f, 82.18f };
	Local_298.f_15 = 123.75f;
	Local_297[4 /*19*/].f_11 = joaat("A_F_Y_BevHills_03");
	Local_297[4 /*19*/].f_12 = { -553.46f, 287.34f, 82.18f };
	Local_297[4 /*19*/].f_15 = -65.86f;
	Local_297[0 /*19*/].f_11 = joaat("A_F_Y_BevHills_03");
	Local_297[0 /*19*/].f_12 = { -559.94f, 285.99f, 85.38f };
	Local_297[0 /*19*/].f_15 = -59.06f;
	Local_297[1 /*19*/].f_11 = joaat("A_F_Y_BevHills_03");
	Local_297[1 /*19*/].f_12 = { -558.87f, 289.79f, 85.38f };
	Local_297[1 /*19*/].f_15 = 162.44f;
	Local_297[3 /*19*/].f_11 = joaat("A_M_Y_Vinewood_04");
	Local_297[3 /*19*/].f_12 = { -559f, 286.09f, 85.38f };
	Local_297[3 /*19*/].f_15 = 65.92f;
	Local_297[2 /*19*/].f_11 = joaat("A_M_Y_Gay_01");
	Local_297[2 /*19*/].f_12 = { -558.84f, 288.97f, 85.38f };
	Local_297[2 /*19*/].f_15 = -7.72f;
	func_41();
	func_510();
	Local_300.f_1 = joaat("gauntlet");
	Local_300.f_2 = { -553.55f, 308.61f, 82.81f };
	Local_300.f_5 = 202.78f;
	Local_299.f_1 = joaat("prop_ld_gold_tooth");
	Local_299.f_6 = joaat("PICKUP_CUSTOM_SCRIPT");
	Local_299.f_3 = { -554.23f, 300.55f, 82.19f };
	Local_299.f_7 = 0;
	MISC::SET_BIT(&(Local_299.f_7), 3);
	MISC::SET_BIT(&(Local_299.f_7), 4);
	MISC::SET_BIT(&(Local_299.f_7), 1);
	iLocal_124 = 0;
	iLocal_125 = 12;
	PED::ADD_RELATIONSHIP_GROUP("N1A_PLAYER_HATE_GROUP", &iLocal_126);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_126, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_126);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_126, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_126);
	PED::ADD_RELATIONSHIP_GROUP("N1A_UNAGRESSIVE", &iLocal_127);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_127, iLocal_126);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_126, iLocal_127);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_127, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_127);
	iLocal_122 = INTERIOR::GET_INTERIOR_AT_COORDS(-555.5934f, 285.7738f, 81.1763f);
	func_664(0, joaat("v_ilev_roc_door1_l"), -561.35f, 278.58f, 83.13f);
	func_664(1, joaat("v_ilev_roc_door1_r"), -559.55f, 278.42f, 83.13f);
	func_664(2, joaat("v_ilev_roc_door3"), -568.88f, 281.11f, 83.13f);
	func_664(3, joaat("v_ilev_ss_door5_r"), -567.94f, 291.93f, 85.52f);
	func_664(4, joaat("v_ilev_roc_door2"), -560.24f, 293.01f, 82.33f);
	func_664(5, joaat("v_ilev_roc_door2"), -569.8f, 293.77f, 79.33f);
}

void func_664(int iParam0, int iParam1, struct<3> Param2)//Position - 0x4C1C8
{
	char cVar0[24];
	StringCopy(&cVar0, "N1A_", 24);
	StringIntConCat(&cVar0, iParam0, 24);
	iLocal_113[iParam0] = MISC::GET_HASH_KEY(&cVar0);
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_113[iParam0]))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_113[iParam0], iParam1, Param2, false, true, false);
	}
}

void func_665()//Position - 0x4C20C
{
	if (__LIB_14__::func_843())
	{
		func_508(0, 1);
	}
	__LIB_14__::func_871(&Local_72, 1, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

