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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
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
	struct<4> Local_52[10];
	bool bLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 16;
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
	char* sLocal_232 = NULL;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	char* sLocal_235 = NULL;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	char* sLocal_241 = NULL;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	struct<3> Local_247 = { 0, 0, 0 } ;
	struct<3> Local_248 = { 0, 0, 0 } ;
	struct<3> Local_249 = { 0, 0, 0 } ;
	struct<3> Local_250 = { 0, 0, 0 } ;
	int iLocal_251 = 0;
	bool bLocal_252 = 0;
	char* sLocal_253[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	bool bLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	char* sLocal_269[6] = { NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	char* sLocal_272[3] = { NULL, NULL, NULL };
	char* sLocal_273[3] = { NULL, NULL, NULL };
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	char* sLocal_277[3] = { NULL, NULL, NULL };
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	char* sLocal_280[4] = { NULL, NULL, NULL, NULL };
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	char* sLocal_284[12] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	bool bLocal_289 = 0;
	struct<3> Local_290 = { 0, 0, 0 } ;
	struct<3> Local_291 = { 0, 0, 0 } ;
	struct<3> Local_292 = { 0, 0, 0 } ;
	float fLocal_293 = 0f;
	float fLocal_294 = 0f;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int* iLocal_298 = NULL;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301[3] = { 0, 0, 0 };
	int iLocal_302[3] = { 0, 0, 0 };
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	struct<3> Local_306 = { 0, 0, 0 } ;
	float fLocal_307 = 0f;
	struct<3> Local_308 = { 0, 0, 0 } ;
	struct<3> Local_309 = { 0, 0, 0 } ;
	struct<3> Local_310 = { 0, 0, 0 } ;
	struct<3> Local_311 = { 0, 0, 0 } ;
	struct<3> Local_312 = { 0, 0, 0 } ;
	struct<3> Local_313 = { 0, 0, 0 } ;
	struct<3> Local_314 = { 0, 0, 0 } ;
	struct<3> Local_315 = { 0, 0, 0 } ;
	float fLocal_316 = 0f;
	float fLocal_317 = 0f;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	bool bLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	struct<3> Local_325 = { 0, 0, 0 } ;
	struct<3> Local_326 = { 0, 0, 0 } ;
	float fLocal_327 = 0f;
	struct<3> Local_328 = { 0, 0, 0 } ;
	float fLocal_329 = 0f;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	float fLocal_332 = 0f;
	var uLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	var uLocal_336 = 0;
	char* sLocal_337 = NULL;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	char[] cLocal_343[8] = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_57 = 1;
	iLocal_58 = 65;
	iLocal_59 = 49;
	iLocal_60 = 64;
	iLocal_65 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_66 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	sLocal_232 = "missmej1ig_1";
	sLocal_235 = "seat_pside_r";
	iLocal_236 = 115;
	iLocal_239 = -1;
	iLocal_240 = -1;
	Local_247 = { -814.3175f, 179.01758f, 71.159195f };
	Local_248 = { -806.1814f, 184.28976f, 71.347694f };
	Local_249 = { -801.9036f, 182.9307f, 71.6055f };
	Local_250 = { -1368.2787f, 355.90182f, 63.08109f };
	iLocal_254 = -1;
	iLocal_255 = -1;
	iLocal_256 = -1;
	iLocal_259 = 1;
	iLocal_260 = 1;
	iLocal_261 = 1;
	iLocal_267 = -1;
	iLocal_288 = 1;
	bLocal_289 = true;
	Local_290 = { -2271.74f, 1070.36f, 198.2f };
	Local_291 = { -825.50354f, 179.02661f, 70.36901f };
	Local_292 = { -1378.4454f, 367.812f, 63.0445f };
	fLocal_293 = 800f;
	fLocal_294 = 100f;
	iLocal_303 = joaat("A_M_M_GenFat_01");
	iLocal_305 = joaat("landstalker");
	Local_306 = { -2271.74f, 1070.36f, 198.2f };
	fLocal_307 = 135.06f;
	Local_308 = { -2223.2158f, 1009.2747f, 163.51175f };
	Local_309 = { -2226.5881f, 1147.9331f, 270.95654f };
	Local_310 = { -2269.847f, 891.10675f, 192.30278f };
	Local_311 = { -2161.119f, 1225.7269f, 500.54352f };
	Local_312 = { -2402.3289f, 1057.2286f, 189.97539f };
	Local_313 = { -2410.82f, 1005.2604f, 200.85915f };
	Local_314 = { -2328.859f, 892.1643f, 196.73659f };
	Local_315 = { -2333.4116f, 1221.6926f, 495.6477f };
	fLocal_316 = 90f;
	fLocal_317 = 200f;
	iLocal_318 = 1;
	iLocal_319 = 1;
	iLocal_321 = 1;
	Local_325 = { -826.6968f, 178.02092f, 69.18726f };
	Local_326 = { -817.75287f, 185.95036f, 72.3539f };
	fLocal_327 = 7f;
	Local_328 = { -826f, 157.66f, 69.06f };
	fLocal_329 = 273.51f;
	fLocal_332 = 0f;
	iLocal_335 = joaat("tailgater");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_530();
		func_529(1);
	}
	MISC::SET_MISSION_FLAG(true);
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_PO", 0);
		switch (iLocal_295)
		{
			case 0:
				func_401();
				break;
			case 1:
				func_393();
				break;
			case 2:
				func_340();
				break;
			case 3:
				func_246();
				break;
			case 4:
				func_243();
				break;
			case 5:
				func_222();
				break;
			case 6:
				func_212();
				break;
			case 7:
				func_68();
				break;
			case 8:
				func_43();
				break;
		}
		func_3();
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x340
{
	int iVar0;
	if (iLocal_295 == 8)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_301[iVar0]))
		{
			if (PED::IS_PED_INJURED(iLocal_301[iVar0]))
			{
				func_2(5);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)//Position - 0x389
{
	iLocal_297 = iParam0;
	iLocal_295 = 8;
	iLocal_296 = 0;
}

void func_3()//Position - 0x39F
{
	int iVar0;
	if (iLocal_295 == 8)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_299) && PED::IS_PED_INJURED(iLocal_299))
	{
		func_2(2);
	}
	else if (__LIB_0__::func_692(iLocal_299) && __LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_299, true), 2f) && !FIRE::IS_EXPLOSION_IN_SPHERE(13, ENTITY::GET_ENTITY_COORDS(iLocal_299, true), 2f))
		{
			PED::SET_PED_CAN_RAGDOLL(iLocal_299, true);
			PED::SET_PED_TO_RAGDOLL(iLocal_299, 500, 1000, 0, false, false, false);
			ENTITY::SET_ENTITY_HEALTH(iLocal_299, 99, 0);
			ENTITY::SET_ENTITY_COLLISION(iLocal_299, true, false);
			func_2(2);
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_299, PLAYER::PLAYER_PED_ID(), true))
		{
			if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iLocal_299, 0, 2) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_299))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_299);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_299, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4416);
				}
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_299, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				func_2(1);
			}
		}
		else
		{
			if (__LIB_0__::func_121(iLocal_304) && (((((PED::IS_PED_IN_VEHICLE(iLocal_299, iLocal_304, false) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_299, sLocal_232, "back", 2)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_299, sLocal_232, "base", 2)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_299, sLocal_232, "enter_back", 2)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_299, sLocal_232, "enter_backseat", 2)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_299, sLocal_232, "exit_back", 2)))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(iLocal_304))
				{
					func_2(1);
				}
			}
			if (((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_299, 50f, 1)) && __LIB_43__::func_557(iLocal_299, 1126825984)) && __LIB_42__::func_555(PLAYER::PLAYER_PED_ID(), iLocal_299, 90f, 1, 250, 7))
			{
				if (iLocal_281 < 4 && MISC::GET_GAME_TIMER() > iLocal_279)
				{
					__LIB_0__::func_429();
					if (!__LIB_0__::func_75())
					{
						if (__LIB_14__::func_535(&uLocal_67, "MEJ1AUD", "MEJ1_INJURE", sLocal_280[iLocal_281], 7, 0, 0))
						{
							iLocal_281++;
							iLocal_279 = MISC::GET_GAME_TIMER() + 9000;
						}
					}
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_299, joaat("SCRIPT_TASK_HANDS_UP")) != 1)
				{
					TASK::TASK_HANDS_UP(iLocal_299, -1, 0, -1, 0);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_299, joaat("SCRIPT_TASK_HANDS_UP")) == 1)
			{
				TASK::CLEAR_PED_TASKS(iLocal_299);
			}
		}
	}
}

void func_43()//Position - 0x141A
{
	char* sVar0;
	switch (iLocal_296)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			__LIB_0__::func_714(&iLocal_298);
			__LIB_0__::func_429();
			iLocal_322 = 1;
			if (iLocal_297 == 1)
			{
				iLocal_322 = 0;
				iLocal_334 = -1;
			}
			switch (iLocal_297)
			{
				case 0:
					break;
				case 1:
					sVar0 = "MEJ1_FAIL4";
					break;
				case 2:
					sVar0 = "MEJ1_FAIL1";
					break;
				case 3:
					sVar0 = "MEJ1_FAIL2";
					break;
				case 4:
					sVar0 = "MEJ1_FAIL3";
					break;
				case 5:
					sVar0 = "MEJ1_FAIL5";
					break;
			}
			if (iLocal_297 == 0)
			{
				func_58(0);
			}
			else
			{
				func_56(sVar0);
			}
			iLocal_296 = 1;
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				func_46(1, 0);
				func_529(1);
			}
			else if (iLocal_322 == 0)
			{
				if (__LIB_0__::func_692(iLocal_299))
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_2__::func_859(&uLocal_67, "MEJ1AUD", "MEJ1_INJURE", 7, 1, 0, 0) || __LIB_38__::func_201(&iLocal_334, 5000))
						{
							iLocal_322 = 1;
						}
					}
				}
			}
			break;
	}
}

void func_46(bool bParam0, bool bParam1)//Position - 0x159C
{
	int iVar0;
	if (bParam0)
	{
		__LIB_0__::func_0(&iLocal_299);
	}
	else
	{
		if (__LIB_0__::func_692(iLocal_299) && PED::IS_PED_IN_GROUP(iLocal_299))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_299);
		}
		if (bParam1)
		{
			__LIB_0__::func_124(&iLocal_299, 1, 0, 1);
		}
		else if (__LIB_0__::func_692(iLocal_299) && ENTITY::IS_ENTITY_AT_COORD(iLocal_299, Local_291, 50f, 50f, 50f, false, true, 0))
		{
			__LIB_38__::func_214(iLocal_299);
		}
		else
		{
			__LIB_0__::func_124(&iLocal_299, 1, 0, 1);
		}
	}
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			__LIB_0__::func_0(&(iLocal_301[iVar0]));
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			__LIB_0__::func_124(&(iLocal_301[iVar0]), 1, 0, 1);
			iVar0++;
		}
	}
	__LIB_0__::func_714(&iLocal_298);
	AUDIO::STOP_AUDIO_SCENES();
	if (__LIB_0__::func_695(iLocal_304))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_304, 0f);
	}
	if (bParam0)
	{
		__LIB_8__::func_397(&iLocal_304);
	}
	else
	{
		__LIB_0__::func_106(&iLocal_304);
	}
}

void func_56(char* sParam0)//Position - 0x1A05
{
	__LIB_0__::func_381(sParam0);
	func_58(0);
}

void func_58(int iParam0)//Position - 0x1A57
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_59(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_59(int iParam0)//Position - 0x1A9C
{
	int iVar0;
	int iVar1;
	__LIB_14__::func_534();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_60(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_113386.f_9085.f_330[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085)
		{
		}
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_60(var uParam0, int iParam1)//Position - 0x1BAC
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
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_62(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_62(int iParam0, var uParam1, float fParam2)//Position - 0x1D80
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
			return func_62(8, uParam1, fParam2);
			break;
		case 10:
			return func_62(8, uParam1, fParam2);
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

void func_68()//Position - 0x288E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_692(iLocal_299))
	{
		PED::SET_PED_RESET_FLAG(iLocal_299, 60, true);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		switch (iLocal_296)
		{
			case 0:
				__LIB_0__::func_638();
				__LIB_16__::func_294();
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_JIMMY_DRIVE_HOME"))
				{
					AUDIO::STOP_AUDIO_SCENE("M_E_JIMMY_DRIVE_HOME");
				}
				__LIB_0__::func_714(&iLocal_298);
				func_89(0f, 0f, 0f, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_299, -1, 2050, 4);
				if (__LIB_0__::func_695(iVar0))
				{
					__LIB_0__::func_213(iVar0, 1093140480, 1, 1056964608, 0, 1, 0);
				}
				else
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_299, 0);
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_250, 1f, 20000, 0.25f, 0, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iVar1);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_299, iVar1);
					TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				}
				if (__LIB_0__::func_692(iLocal_299) && PED::IS_PED_IN_GROUP(iLocal_299))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_299);
				}
				iLocal_334 = -1;
				bLocal_252 = false;
				if ((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) || (PED::IS_PED_IN_ANY_VEHICLE(iLocal_299, true) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_299))) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(iLocal_299))
				{
					__LIB_14__::func_806(500, 1);
					SYSTEM::WAIT(1000);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), -1374.11f, 363.81f, 64.25f, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 117.46f);
					if (__LIB_0__::func_692(iLocal_299))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_299, -1375.82f, 362.3f, 64.17f, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_299, -49.27f);
					}
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_299, 0);
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_250, 1f, 20000, 0.25f, 0, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_299, iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					__LIB_0__::func_84(500, 1);
				}
				iLocal_296 = 1;
				break;
			case 1:
				if (__LIB_0__::func_695(iVar0))
				{
					__LIB_0__::func_213(iVar0, 1093140480, 1, 1056964608, 0, 1, 0);
				}
				if (!__LIB_0__::func_75())
				{
					if (((__LIB_0__::func_695(iLocal_304) && __LIB_0__::func_692(iLocal_299)) && PED::IS_PED_IN_VEHICLE(iLocal_299, iLocal_304, false)) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_304, 0, false))
					{
						if (__LIB_2__::func_859(&uLocal_67, "MEJ1AUD", "MEJ1_HOME2", 7, 0, 0, 0) || __LIB_38__::func_201(&iLocal_334, 5000))
						{
							iLocal_296 = 2;
						}
					}
					else if (__LIB_2__::func_859(&uLocal_67, "MEJ1AUD", "MEJ1_HOME", 7, 0, 0, 0) || __LIB_38__::func_201(&iLocal_334, 5000))
					{
						iLocal_296 = 2;
					}
				}
				if (__LIB_0__::func_645(1000))
				{
					bLocal_252 = true;
					__LIB_14__::func_806(500, 1);
					iLocal_296 = 3;
				}
				break;
			case 2:
				if (__LIB_0__::func_695(iVar0))
				{
					__LIB_0__::func_213(iVar0, 1093140480, 1, 1056964608, 0, 1, 0);
					if (VEHICLE::IS_VEHICLE_STOPPED(iVar0))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar3);
						TASK::TASK_PAUSE(0, 6500);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_250, 1f, 20000, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iVar3);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_299, iVar3);
						TASK::CLEAR_SEQUENCE_TASK(&iVar3);
						iLocal_251 = MISC::GET_GAME_TIMER() + 25000;
						iLocal_296 = 3;
					}
				}
				else
				{
					iLocal_251 = MISC::GET_GAME_TIMER() + 25000;
					iLocal_296 = 3;
				}
				if (__LIB_0__::func_645(1000))
				{
					bLocal_252 = true;
					__LIB_14__::func_806(500, 1);
					iLocal_296 = 3;
				}
				break;
			case 3:
				if (__LIB_0__::func_645(1000))
				{
					__LIB_14__::func_806(500, 1);
					bLocal_252 = true;
				}
				if (((!__LIB_0__::func_75() && __LIB_16__::func_326(iLocal_299, Local_250, 4f)) || bLocal_252) || MISC::GET_GAME_TIMER() > iLocal_251)
				{
					if (bLocal_252)
					{
						if (__LIB_0__::func_75())
						{
							__LIB_0__::func_429();
						}
						SYSTEM::WAIT(1000);
					}
					if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					}
					__LIB_0__::func_0(&iLocal_299);
					__LIB_0__::func_84(500, 1);
					__LIB_17__::func_551(1, 1, 1, 1);
					func_69();
				}
				break;
			}
	}
}

void func_69()//Position - 0x2D10
{
	__LIB_0__::func_526(0, 0);
	func_529(0);
}

void func_89(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x3456
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
					if (func_206(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_91(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_206(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_91(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_206(PLAYER::PLAYER_PED_ID(), 8, 1) || func_206(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_91(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_206(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_91(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			iLocal_36 = 0;
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_36 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__::func_84(500, 0);
		}
	}
}

int func_91(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x3627
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
										func_91(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_91(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
							if (func_99(iParam0, iVar10, &iVar4, 1))
							{
								func_91(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_91(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_91(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_91(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_91(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_91(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_91(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_91(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_91(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_91(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_99(iParam0, iVar10, &iVar4, 0))
		{
			func_91(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_92(iParam0, iVar10, &iVar4))
		{
			func_91(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_92(int iParam0, int iParam1, int iParam2)//Position - 0x3E37
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_206(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_99(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x472D
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_206(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_100(int iParam0, int iParam1, int iParam2)//Position - 0x47C3
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
				if (func_206(iParam0, iParam1, iVar0))
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
				if (func_206(iParam0, iParam1, iVar1))
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

int func_206(int iParam0, int iParam1, int iParam2)//Position - 0x21663
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
				if (!func_206(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_206(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_206(iParam0, 14, iVar4))
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
			if (!func_206(iParam0, 14, uVar8[iVar7]))
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

void func_212()//Position - 0x21975
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_692(iLocal_299))
	{
		PED::SET_PED_RESET_FLAG(iLocal_299, 60, true);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		switch (iLocal_296)
		{
			case 0:
				__LIB_0__::func_638();
				__LIB_16__::func_294();
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_JIMMY_DRIVE_HOME"))
				{
					AUDIO::STOP_AUDIO_SCENE("M_E_JIMMY_DRIVE_HOME");
				}
				__LIB_0__::func_714(&iLocal_298);
				func_89(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				if (__LIB_0__::func_695(iVar0))
				{
					__LIB_0__::func_213(iVar0, 1093140480, 1, 1056964608, 0, 1, 0);
				}
				else
				{
					__LIB_14__::func_614(Local_325, Local_326, fLocal_327, Local_328, fLocal_329, __LIB_13__::func_790(), 1, 1, 1, 0, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_299, 0);
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_249, 1f, 20000, 0.25f, 0, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iVar1);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_299, iVar1);
					TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				}
				if (__LIB_0__::func_692(iLocal_299) && PED::IS_PED_IN_GROUP(iLocal_299))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_299);
				}
				iLocal_334 = -1;
				bLocal_252 = false;
				iLocal_296 = 1;
				break;
			case 1:
				if (__LIB_0__::func_695(iVar0))
				{
					__LIB_0__::func_213(iVar0, 1093140480, 1, 1056964608, 0, 1, 0);
				}
				if (!__LIB_0__::func_75())
				{
					if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_299, 5f, 1))
					{
						if (((__LIB_0__::func_695(iLocal_304) && __LIB_0__::func_692(iLocal_299)) && PED::IS_PED_IN_VEHICLE(iLocal_299, iLocal_304, false)) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_304, 0, false))
						{
							if (__LIB_2__::func_859(&uLocal_67, "MEJ1AUD", "MEJ1_HOME2", 7, 0, 0, 0) || __LIB_38__::func_201(&iLocal_334, 5000))
							{
								iLocal_296 = 2;
							}
						}
						else if (__LIB_2__::func_859(&uLocal_67, "MEJ1AUD", "MEJ1_HOME", 7, 0, 0, 0) || __LIB_38__::func_201(&iLocal_334, 5000))
						{
							iLocal_296 = 2;
						}
					}
				}
				if (__LIB_0__::func_645(1000))
				{
					bLocal_252 = true;
					__LIB_14__::func_806(500, 1);
					iLocal_296 = 3;
				}
				break;
			case 2:
				if (__LIB_0__::func_695(iVar0))
				{
					__LIB_0__::func_213(iVar0, 1093140480, 1, 1056964608, 0, 1, 0);
					if (VEHICLE::IS_VEHICLE_STOPPED(iVar0))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						TASK::TASK_PAUSE(0, 6500);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_249, 1f, 20000, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iVar2);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_299, iVar2);
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						iLocal_251 = MISC::GET_GAME_TIMER() + 25000;
						iLocal_296 = 3;
					}
				}
				else
				{
					iLocal_251 = MISC::GET_GAME_TIMER() + 25000;
					iLocal_296 = 3;
				}
				if (__LIB_0__::func_645(1000))
				{
					bLocal_252 = true;
					__LIB_14__::func_806(500, 1);
					iLocal_296 = 3;
				}
				break;
			case 3:
				if (__LIB_0__::func_645(1000))
				{
					__LIB_14__::func_806(500, 1);
					bLocal_252 = true;
				}
				if (((!__LIB_0__::func_75() && (__LIB_16__::func_326(iLocal_299, Local_247, 2f) || __LIB_16__::func_326(iLocal_299, Local_248, 2f))) || bLocal_252) || MISC::GET_GAME_TIMER() > iLocal_251)
				{
					if (bLocal_252)
					{
						if (__LIB_0__::func_75())
						{
							__LIB_0__::func_429();
						}
						if (__LIB_0__::func_692(iLocal_299))
						{
							TASK::CLEAR_PED_TASKS(iLocal_299);
							ENTITY::SET_ENTITY_COORDS(iLocal_299, Local_249, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_299, 90f);
						}
						SYSTEM::WAIT(1000);
					}
					if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
					__LIB_0__::func_84(500, 1);
					__LIB_17__::func_551(1, 1, 1, 1);
					func_69();
				}
				break;
			}
	}
}

void func_222()//Position - 0x226F7
{
	__LIB_0__::func_496();
	__LIB_14__::func_881(&uLocal_336, &uLocal_67, "MEJ1AUD", &sLocal_337, &cLocal_343);
	switch (iLocal_296)
	{
		case 0:
			__LIB_0__::func_714(&iLocal_298);
			__LIB_0__::func_229("MEJ1_06", 7500, 1);
			__LIB_14__::func_875(&uLocal_336);
			if (__LIB_0__::func_692(iLocal_299) && !PED::IS_PED_GROUP_MEMBER(iLocal_299, __LIB_0__::func_495()))
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_299, __LIB_0__::func_495());
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_299, 0);
				PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_299, true);
				PED::SET_PED_DIES_INSTANTLY_IN_WATER(iLocal_299, false);
			}
			iLocal_296 = 1;
			break;
		case 1:
			if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_692(iLocal_299))
			{
				func_233();
				func_229();
				func_228();
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					iLocal_296 = 0;
					iLocal_295 = 3;
				}
				if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_299) > 15f)
				{
					__LIB_0__::func_429();
					iLocal_296 = 0;
					iLocal_295 = 4;
				}
			}
			break;
	}
	func_223();
	if (__LIB_0__::func_692(iLocal_299))
	{
		PED::SET_PED_RESET_FLAG(iLocal_299, 124, true);
	}
}

void func_223()//Position - 0x227FA
{
	if (__LIB_0__::func_692(iLocal_299) && __LIB_0__::func_695(iLocal_304))
	{
		switch (iLocal_234)
		{
			case 0:
				if (iLocal_237 || !VEHICLE::IS_VEHICLE_WINDOW_INTACT(iLocal_304, 7))
				{
					iLocal_234 = 15;
				}
				break;
			case 2:
				iLocal_233 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_233, 0f);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_233, false);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_233, true);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_233, iLocal_304, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_304, sLocal_235));
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_299, iLocal_233, sLocal_232, "enter_back", 8f, -8f, 4, iLocal_236, 1000f, 0);
				iLocal_266 = 0;
				iLocal_267 = -1;
				iLocal_234 = 12;
				break;
			case 3:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_233))
				{
					if (iLocal_237 || !VEHICLE::IS_VEHICLE_WINDOW_INTACT(iLocal_304, 7))
					{
						iLocal_234 = 14;
					}
					else
					{
						switch (func_225())
						{
							case 0:
								iLocal_234 = 4;
								break;
							case 2:
								iLocal_234 = 8;
								break;
							}
						}
				}
				break;
			case 4:
				iLocal_233 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_233, 0f);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_233, false);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_233, true);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_233, iLocal_304, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_304, sLocal_235));
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_299, iLocal_233, sLocal_232, "enter_left", 8f, -8f, 4, iLocal_236, 1000f, 0);
				iLocal_234 = 5;
				break;
			case 5:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_233))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_233) >= 0.9f)
					{
						iLocal_233 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_233, true);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_233, false);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_233, iLocal_304, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_304, sLocal_235));
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_299, iLocal_233, sLocal_232, "left", 8f, -8f, 4, iLocal_236, 1000f, 0);
						iLocal_234 = 6;
					}
				}
				break;
			case 6:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_233))
				{
					if (iLocal_237 || !VEHICLE::IS_VEHICLE_WINDOW_INTACT(iLocal_304, 7))
					{
						iLocal_234 = 7;
					}
					else
					{
						switch (func_225())
						{
							case 1:
							case 2:
								iLocal_234 = 7;
								break;
							}
						}
				}
				break;
			case 7:
				iLocal_233 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_233, 0f);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_233, false);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_233, true);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_233, iLocal_304, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_304, sLocal_235));
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_299, iLocal_233, sLocal_232, "exit_left", 8f, -8f, 4, iLocal_236, 1000f, 0);
				if (iLocal_237 || (__LIB_0__::func_695(iLocal_304) && !VEHICLE::IS_VEHICLE_WINDOW_INTACT(iLocal_304, 7)))
				{
					iLocal_234 = 13;
				}
				else
				{
					iLocal_234 = 12;
				}
				break;
			case 8:
				iLocal_233 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_233, 0f);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_233, false);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_233, true);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_233, iLocal_304, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_304, sLocal_235));
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_299, iLocal_233, sLocal_232, "enter_right", 8f, -8f, 4, iLocal_236, 1000f, 0);
				iLocal_234 = 9;
				break;
			case 9:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_233))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_233) >= 0.9f)
					{
						iLocal_233 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_233, true);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_233, false);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_233, iLocal_304, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_304, sLocal_235));
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_299, iLocal_233, sLocal_232, "right", 8f, -8f, 4, iLocal_236, 1000f, 0);
						iLocal_234 = 10;
					}
				}
				break;
			case 10:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_233))
				{
					if (iLocal_237 || !VEHICLE::IS_VEHICLE_WINDOW_INTACT(iLocal_304, 7))
					{
						iLocal_234 = 11;
					}
					else
					{
						switch (func_225())
						{
							case 1:
							case 0:
								iLocal_234 = 11;
								break;
							}
						}
				}
				break;
			case 11:
				iLocal_233 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_233, 0f);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_233, false);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_233, true);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_233, iLocal_304, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_304, sLocal_235));
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_299, iLocal_233, sLocal_232, "exit_right", 8f, -8f, 4, iLocal_236, 1000f, 0);
				if (iLocal_237 || !VEHICLE::IS_VEHICLE_WINDOW_INTACT(iLocal_304, 7))
				{
					iLocal_234 = 13;
				}
				else
				{
					iLocal_234 = 12;
				}
				break;
			case 12:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_233))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_233) >= 0.9f)
					{
						if (iLocal_267 < 0)
						{
							iLocal_266 = 1;
							iLocal_267 = MISC::GET_GAME_TIMER() + 1000;
						}
						iLocal_233 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_233, true);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_233, false);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_233, iLocal_304, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_304, sLocal_235));
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_299, iLocal_233, sLocal_232, "back", 8f, -8f, 4, iLocal_236, 1000f, 0);
						iLocal_234 = 3;
					}
				}
				break;
			case 13:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_233))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_233) >= 0.7f)
					{
						iLocal_234 = 14;
					}
				}
				break;
			case 14:
				iLocal_233 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_233, 0f);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_233, false);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_233, true);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_233, iLocal_304, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_304, sLocal_235));
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_299, iLocal_233, sLocal_232, "exit_back", 4f, -8f, 4, iLocal_236, 1000f, 0);
				iLocal_234 = 15;
				break;
			case 15:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_233))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_233) >= 0.95f)
					{
						iLocal_233 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_233, 0f);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_233, false);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_233, true);
						if (__LIB_0__::func_695(iLocal_304))
						{
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_233, iLocal_304, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_304, sLocal_235));
						}
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_299, iLocal_233, sLocal_232, "enter_backseat", 8f, -8f, 4, iLocal_236, 1000f, 0);
						iLocal_234 = 16;
					}
				}
				else
				{
					iLocal_233 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_233, false);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_233, true);
					if (__LIB_0__::func_695(iLocal_304))
					{
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_233, iLocal_304, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_304, sLocal_235));
					}
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_299, iLocal_233, sLocal_232, "enter_backseat", 8f, -8f, 4, iLocal_236, 1000f, 0);
					iLocal_234 = 16;
				}
				break;
			case 16:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_233))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_233) >= 0.85f)
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_299, -4f, true);
						__LIB_4__::func_925(iLocal_299, iLocal_304, 2, 0);
						iLocal_234 = 17;
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COLLISION(iLocal_299, true, false);
					__LIB_4__::func_925(iLocal_299, iLocal_304, 2, 0);
					iLocal_234 = 17;
				}
				break;
			case 17:
				if (PED::IS_PED_IN_VEHICLE(iLocal_299, iLocal_304, false) && iLocal_237)
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_304, false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_299, 0, 65536);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 3);
					}
					iLocal_234 = 1;
				}
				break;
			}
	}
}

int func_225()//Position - 0x22FBA
{
	struct<3> Var0;
	if (__LIB_0__::func_695(iLocal_304) && __LIB_0__::func_687(iLocal_304, PLAYER::PLAYER_PED_ID(), 10f, 1))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_304, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
		if (Var0.f_1 < -1f)
		{
			return 1;
		}
		else if (Var0.f_0 < -1f)
		{
			return 2;
		}
		else if (Var0.f_0 > 1f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 3;
}

void func_228()//Position - 0x23096
{
	int iVar0;
	if (__LIB_0__::func_692(iLocal_299))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_299, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_299, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false) && ENTITY::IS_ENTITY_IN_WATER(iVar0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_299, 0, 4416);
				}
			}
		}
	}
}

void func_229()//Position - 0x230E7
{
	if ((iLocal_278 < 3 && MISC::GET_GAME_TIMER() > iLocal_275) && (func_232() || func_231()))
	{
		if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_276++;
			if (iLocal_276 > 60)
			{
				if (!__LIB_0__::func_75() && __LIB_38__::func_202())
				{
					if (__LIB_14__::func_535(&uLocal_67, "MEJ1AUD", "MEJ1_STILL", sLocal_277[iLocal_278], 7, 0, 0))
					{
						iLocal_278++;
						iLocal_276 = 0;
						iLocal_275 = MISC::GET_GAME_TIMER() + 9000;
					}
				}
			}
		}
		else
		{
			iLocal_276 = 0;
		}
	}
}

int func_231()//Position - 0x2319E
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_IN_ANY_VEHICLE(iLocal_299, false))
	{
		return 0;
	}
	return 1;
}

int func_232()//Position - 0x231C5
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (__LIB_0__::func_695(iVar0) && PED::IS_PED_IN_VEHICLE(iLocal_299, iVar0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_233()//Position - 0x23201
{
	int iVar0;
	bool bVar1;
	if ((iLocal_270 < 6 && MISC::GET_GAME_TIMER() > iLocal_268) && func_232())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_0__::func_695(iVar0))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iVar0))
				{
					bVar1 = false;
					if (__LIB_38__::func_202())
					{
						bVar1 = __LIB_14__::func_535(&uLocal_67, "MEJ1AUD", "MEJ1_CRASH", sLocal_269[iLocal_270], 7, 0, 0);
					}
					else
					{
						bVar1 = __LIB_14__::func_535(&uLocal_67, "MEJ1AUD", "MEJ1_CRASH", sLocal_269[iLocal_270], 7, 1, 0);
					}
					if (bVar1)
					{
						iLocal_270++;
						iLocal_268 = MISC::GET_GAME_TIMER() + 9000;
					}
				}
			}
		}
	}
}

void func_243()//Position - 0x235BB
{
	__LIB_0__::func_496();
	__LIB_14__::func_881(&uLocal_336, &uLocal_67, "MEJ1AUD", &sLocal_337, &cLocal_343);
	switch (iLocal_296)
	{
		case 0:
			__LIB_0__::func_714(&iLocal_298);
			iLocal_298 = __LIB_14__::func_661(iLocal_299, 1, 1, 5);
			if (iLocal_319)
			{
				__LIB_0__::func_229("MEJ1_05", 7500, 1);
				__LIB_14__::func_875(&uLocal_336);
				iLocal_319 = 0;
			}
			iLocal_296 = 1;
			break;
		case 1:
			func_228();
			if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_692(iLocal_299))
			{
				if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_299) < 5f)
				{
					HUD::CLEAR_THIS_PRINT("MEJ1_05");
					iLocal_296 = 0;
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						iLocal_295 = 3;
					}
					else
					{
						iLocal_295 = 5;
					}
				}
			}
			break;
	}
	func_244();
}

void func_244()//Position - 0x2367A
{
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_692(iLocal_299))
	{
		if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_299) > fLocal_293)
		{
			if (iLocal_295 == 2 && iLocal_296 == 1)
			{
				func_2(3);
			}
			else
			{
				func_2(4);
			}
		}
	}
}

void func_246()//Position - 0x2371C
{
	__LIB_0__::func_496();
	__LIB_14__::func_881(&uLocal_336, &uLocal_67, "MEJ1AUD", &sLocal_337, &cLocal_343);
	switch (iLocal_296)
	{
		case 0:
			__LIB_0__::func_714(&iLocal_298);
			if (__LIB_17__::func_248() == 1)
			{
				iLocal_298 = __LIB_14__::func_704(Local_292, 5, 1);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_292 - Vector(10f, 10f, 10f), Local_292 + Vector(10f, 10f, 10f), false, true);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_292, 10f, false, false, false, false, false, false, 0);
			}
			else
			{
				iLocal_298 = __LIB_14__::func_704(Local_291, 5, 1);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_JIMMY_STOP_KIDNAPPERS"))
			{
				AUDIO::STOP_AUDIO_SCENE("M_E_JIMMY_STOP_KIDNAPPERS");
			}
			if (iLocal_318)
			{
				__LIB_0__::func_229("MEJ1_04", 7500, 1);
				__LIB_14__::func_875(&uLocal_336);
				AUDIO::START_AUDIO_SCENE("M_E_JIMMY_DRIVE_HOME");
				iLocal_318 = 0;
				iLocal_319 = 1;
				iLocal_281 = 0;
				iLocal_238 = 0;
			}
			if (__LIB_0__::func_692(iLocal_299) && !PED::IS_PED_GROUP_MEMBER(iLocal_299, __LIB_0__::func_495()))
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_299, __LIB_0__::func_495());
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_299, 0);
				PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_299, true);
				PED::SET_PED_DIES_INSTANTLY_IN_WATER(iLocal_299, false);
				ENTITY::SET_ENTITY_PROOFS(iLocal_299, true, false, false, false, true, false, false, false);
				PED::SET_PED_CAN_RAGDOLL(iLocal_299, true);
			}
			__LIB_14__::func_874(2, "Drive Home", 1, 0, 0, 1);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			iLocal_296 = 1;
			break;
		case 1:
			if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_692(iLocal_299))
			{
				func_253();
				func_252();
				func_251();
				func_233();
				func_229();
				func_250();
				func_249();
				func_248();
				func_228();
				func_247();
				if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_299) > 15f)
				{
					__LIB_0__::func_429();
					iLocal_296 = 0;
					iLocal_295 = 4;
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					iLocal_296 = 0;
					iLocal_295 = 5;
				}
			}
			break;
	}
	func_223();
	func_244();
}

void func_247()//Position - 0x238FD
{
	struct<3> Var0;
	bool bVar1;
	int iVar2;
	if (__LIB_17__::func_248() == 1)
	{
		Var0 = { Local_292 };
	}
	else
	{
		Var0 = { Local_291 };
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, 1f, 1f, 2f, true, true, 0) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0, true) < 2.75f)
	{
		bVar1 = false;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_0__::func_695(iVar2))
			{
				if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2))
				{
					bVar1 = true;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			iLocal_296 = 0;
			if (__LIB_17__::func_248() == 1)
			{
				iLocal_295 = 7;
			}
			else
			{
				iLocal_295 = 6;
			}
		}
	}
}

void func_248()//Position - 0x239B2
{
	int iVar0;
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()) && MISC::GET_GAME_TIMER() > iLocal_287)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (iVar0 != iLocal_286)
			{
				if (__LIB_0__::func_695(iLocal_286))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_286);
				}
				iLocal_286 = iVar0;
			}
		}
		iLocal_287 = MISC::GET_GAME_TIMER() + 1000;
	}
}

void func_249()//Position - 0x23A11
{
	if (MISC::GET_GAME_TIMER() > iLocal_282)
	{
		if ((!__LIB_0__::func_75() && __LIB_38__::func_202()) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_2__::func_859(&uLocal_67, "MEJ1AUD", "MEJ1_SHOOT", 7, 0, 0, 0))
			{
				iLocal_282 = MISC::GET_GAME_TIMER() + 10000;
			}
		}
	}
}

void func_250()//Position - 0x23A5F
{
	if ((iLocal_285 < 12 && MISC::GET_GAME_TIMER() > iLocal_283) && __LIB_0__::func_692(iLocal_301[0]))
	{
		if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_301[0]) < 30f)
		{
			if (!__LIB_0__::func_75() && __LIB_38__::func_202())
			{
				if (__LIB_14__::func_535(&uLocal_67, "MEJ1AUD", "MEJ1_FLEE", sLocal_284[iLocal_285], 7, 0, 0))
				{
					iLocal_285++;
					iLocal_283 = MISC::GET_GAME_TIMER() + 9000;
				}
			}
		}
	}
}

void func_251()//Position - 0x23AE1
{
	bool bVar0;
	if ((iLocal_274 < 3 && MISC::GET_GAME_TIMER() > iLocal_271) && (func_232() || func_231()))
	{
		if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
		{
			if (bLocal_289)
			{
				bVar0 = false;
				if (__LIB_38__::func_202())
				{
					bVar0 = __LIB_14__::func_535(&uLocal_67, "MEJ1AUD", "MEJ1_NOKILL", sLocal_273[iLocal_274], 7, 0, 0);
				}
				else
				{
					bVar0 = __LIB_14__::func_535(&uLocal_67, "MEJ1AUD", "MEJ1_NOKILL", sLocal_273[iLocal_274], 7, 1, 0);
				}
				if (bVar0)
				{
					iLocal_274++;
					iLocal_271 = MISC::GET_GAME_TIMER() + 9000;
					PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
				}
			}
			else if (!__LIB_0__::func_75())
			{
				if (__LIB_14__::func_535(&uLocal_67, "MEJ1AUD", "MEJ1_HITKILL", sLocal_272[iLocal_274], 7, 0, 0))
				{
					iLocal_274++;
					iLocal_271 = MISC::GET_GAME_TIMER() + 9000;
					PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
				}
			}
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
		}
	}
}

void func_252()//Position - 0x23BCA
{
	if (iLocal_238 == 0)
	{
		if (((iLocal_240 == -1 && !__LIB_0__::func_75()) && __LIB_38__::func_202()) && func_232())
		{
			if (iLocal_240 == iLocal_239)
			{
				iLocal_239++;
				iLocal_263 = MISC::GET_GAME_TIMER() + 10000;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_263)
			{
				if (__LIB_2__::func_859(&uLocal_67, "MEJ1AUD", "MEJ1_DRIVE1", 7, 0, 0, 0))
				{
					iLocal_240 = iLocal_239;
					iLocal_238 = 2;
				}
			}
		}
	}
	else if (iLocal_238 == 1)
	{
		if (((!__LIB_0__::func_75() && __LIB_38__::func_202()) && func_232()) && MISC::GET_GAME_TIMER() > iLocal_263)
		{
			if (__LIB_14__::func_782(&uLocal_67, "MEJ1AUD", "MEJ1_DRIVE1", &sLocal_241, 7, 0, 0))
			{
				iLocal_238 = 2;
			}
		}
	}
}

void func_253()//Position - 0x23C8E
{
	if (((((iLocal_288 && ENTITY::DOES_ENTITY_EXIST(iLocal_301[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_301[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_301[2])) && __LIB_0__::func_692(iLocal_299)) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (__LIB_2__::func_859(&uLocal_67, "MEJ1AUD", "MEJ1_THANK", 7, 0, 0, 0))
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			iLocal_288 = 0;
		}
	}
}

void func_340()//Position - 0x2C8E3
{
	int iVar0;
	int* iVar1;
	int iVar2;
	int iVar3;
	__LIB_14__::func_881(&uLocal_336, &uLocal_67, "MEJ1AUD", &sLocal_337, &cLocal_343);
	switch (iLocal_296)
	{
		case 0:
			__LIB_0__::func_429();
			__LIB_0__::func_714(&iLocal_298);
			if ((((__LIB_0__::func_695(iLocal_304) && __LIB_0__::func_692(iLocal_301[0])) && __LIB_0__::func_692(iLocal_301[1])) && __LIB_0__::func_692(iLocal_301[2])) && __LIB_0__::func_692(iLocal_299))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_304, true, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_304, true);
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < 3)
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_301[iVar0], true, false);
					iVar0++;
				}
				ENTITY::SET_ENTITY_VISIBLE(iLocal_299, true, false);
				PED::SET_PED_DIES_INSTANTLY_IN_WATER(iLocal_299, true);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_304, 12f);
				TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_301[0], iLocal_304, 12f, 786468);
				VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_305, 3);
				iLocal_298 = __LIB_14__::func_866(iLocal_304, 0, 5);
				__LIB_0__::func_229("MEJ1_02", 7500, 1);
				__LIB_14__::func_875(&uLocal_336);
				__LIB_0__::func_151("MEJ1_WARN", -1);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, false);
					if (__LIB_0__::func_121(iVar1))
					{
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar1, true);
					}
					__LIB_0__::func_106(&iVar1);
				}
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_JIMMY_GO_TO_JIMMY"))
			{
				AUDIO::STOP_AUDIO_SCENE("M_E_JIMMY_GO_TO_JIMMY");
			}
			AUDIO::START_AUDIO_SCENE("M_E_JIMMY_STOP_KIDNAPPERS");
			iLocal_254 = -1;
			iLocal_255 = -1;
			iLocal_256 = -1;
			iLocal_262 = 0;
			iLocal_323 = 0;
			bLocal_320 = false;
			bLocal_289 = true;
			bLocal_257 = false;
			iLocal_258 = 0;
			iLocal_259 = 1;
			iLocal_237 = 0;
			iLocal_261 = 1;
			__LIB_38__::func_282(&uLocal_331, &uLocal_333, &uLocal_330, &fLocal_332);
			fLocal_293 = 800f;
			fLocal_294 = 100f;
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			STREAMING::REQUEST_ANIM_DICT("missfam3");
			__LIB_14__::func_874(1, "Rescue Jimmy", 0, 0, 0, 1);
			iLocal_296 = 1;
			break;
		case 1:
			func_386();
			func_384();
			func_382();
			__LIB_14__::func_655(iLocal_298, iLocal_299, fLocal_293, 1061158912, 0);
			if (__LIB_0__::func_695(iLocal_304) && ENTITY::DOES_ENTITY_EXIST(iLocal_301[0]))
			{
				if (iLocal_266 && MISC::GET_GAME_TIMER() > iLocal_267)
				{
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_304, true);
					iLocal_266 = 0;
				}
				__LIB_17__::func_109(&uLocal_40, iLocal_304, 0, 0, 1, 1, 1);
				if ((((((((((ENTITY::GET_ENTITY_HEALTH(iLocal_304) < 850 || func_353()) || func_351()) || __LIB_38__::func_203(iLocal_304, &uLocal_331, &uLocal_333, &uLocal_330, &fLocal_332, 6, 1082130432)) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_304) < 50f) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_304) < 50f) || (__LIB_0__::func_692(iLocal_301[0]) && !PED::IS_PED_IN_VEHICLE(iLocal_301[0], iLocal_304, false))) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_304, 2, 5000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_304, 3, 5000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_304, 0, 5000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_304, 1, 5000))
				{
					if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
					{
						__LIB_16__::func_294();
					}
					if (__LIB_0__::func_692(iLocal_301[0]))
					{
						TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_301[0], iLocal_304, 20, 1000);
					}
					VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_304, 20f, 1, false);
					STREAMING::REMOVE_ANIM_DICT("missfam3");
					iLocal_296 = 2;
				}
				if (FIRE::IS_ENTITY_ON_FIRE(iLocal_304))
				{
					PED::SET_PED_CAN_RAGDOLL(iLocal_299, true);
					PED::SET_PED_TO_RAGDOLL(iLocal_299, 500, 1000, 0, false, false, false);
					ENTITY::SET_ENTITY_HEALTH(iLocal_299, 99, 0);
					func_2(2);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_304))
			{
				STREAMING::REMOVE_ANIM_DICT("missfam3");
				if (FIRE::IS_ENTITY_ON_FIRE(iLocal_304))
				{
					PED::SET_PED_CAN_RAGDOLL(iLocal_299, true);
					PED::SET_PED_TO_RAGDOLL(iLocal_299, 500, 1000, 0, false, false, false);
					ENTITY::SET_ENTITY_HEALTH(iLocal_299, 99, 0);
					func_2(2);
				}
			}
			break;
		case 2:
			__LIB_14__::func_655(iLocal_298, iLocal_299, fLocal_293, 1061158912, 0);
			if (__LIB_0__::func_695(iLocal_304))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_304))
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (__LIB_0__::func_692(iLocal_301[iVar2]))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar3);
							TASK::TASK_PAUSE(0, iVar2 * 1000);
							if (PED::IS_PED_IN_VEHICLE(iLocal_301[iVar2], iLocal_304, false))
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 257);
							}
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iVar3);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_301[iVar2], iVar3);
							TASK::CLEAR_SEQUENCE_TASK(&iVar3);
							if (iVar2 == 0 && !func_351())
							{
								__LIB_0__::func_429();
								__LIB_14__::func_535(&uLocal_67, "MEJ1AUD", "MEJ1_NERD", "MEJ1_NERD_1", 7, 1, 0);
							}
							else if (((iVar2 == 1 && !__LIB_0__::func_692(iLocal_301[0])) || ((iVar2 == 2 && !__LIB_0__::func_692(iLocal_301[0])) && !__LIB_0__::func_692(iLocal_301[1]))) && !func_351())
							{
								__LIB_0__::func_222(&uLocal_67, 6, iLocal_301[iVar2], "MEJimmyKidnapper2", 1, 1);
								__LIB_0__::func_429();
								__LIB_14__::func_535(&uLocal_67, "MEJ1AUD", "MEJ1_NERD", "MEJ1_NERD_2", 7, 0, 0);
							}
							else if ((iVar2 == 1 && __LIB_0__::func_692(iLocal_301[0])) || (iVar2 == 2 && (__LIB_0__::func_692(iLocal_301[0]) || __LIB_0__::func_692(iLocal_301[1]))))
							{
								__LIB_14__::func_731(iLocal_301[iVar2], 1);
							}
						}
						iVar2++;
					}
					__LIB_0__::func_714(&iLocal_298);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_304, false);
					__LIB_0__::func_345(&uLocal_40, 0, 0);
					iLocal_285 = 0;
					iLocal_283 = MISC::GET_GAME_TIMER() + 9000;
					if (__LIB_0__::func_692(iLocal_299) && (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_304, 2, 5000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_304, 3, 5000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_304, 0, 5000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_304, 1, 5000)))
					{
						if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_299) > (5f + 1f))
						{
							iLocal_298 = __LIB_14__::func_661(iLocal_299, 1, 1, 5);
							__LIB_0__::func_229("MEJ1_07", 7500, 1);
							__LIB_14__::func_875(&uLocal_336);
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_JIMMY_STOP_KIDNAPPERS"))
							{
								AUDIO::STOP_AUDIO_SCENE("M_E_JIMMY_STOP_KIDNAPPERS");
							}
							bLocal_320 = true;
							iLocal_237 = 1;
							iLocal_283 = MISC::GET_GAME_TIMER() + 9000;
							iLocal_296 = 3;
						}
						else
						{
							iLocal_237 = 1;
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_JIMMY_STOP_KIDNAPPERS"))
							{
								AUDIO::STOP_AUDIO_SCENE("M_E_JIMMY_STOP_KIDNAPPERS");
							}
							func_342();
						}
					}
					else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_304, false))
					{
						iLocal_237 = 1;
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_JIMMY_STOP_KIDNAPPERS"))
						{
							AUDIO::STOP_AUDIO_SCENE("M_E_JIMMY_STOP_KIDNAPPERS");
						}
						func_342();
					}
					else
					{
						iLocal_298 = __LIB_14__::func_866(iLocal_304, 1, 5);
						__LIB_0__::func_229("MEJ1_03", 7500, 1);
						__LIB_14__::func_875(&uLocal_336);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_JIMMY_STOP_KIDNAPPERS"))
						{
							AUDIO::STOP_AUDIO_SCENE("M_E_JIMMY_STOP_KIDNAPPERS");
						}
						iLocal_283 = MISC::GET_GAME_TIMER() + 9000;
						iLocal_296 = 3;
					}
				}
			}
			break;
		case 3:
			func_250();
			func_341();
			if ((__LIB_0__::func_695(iLocal_304) && __LIB_0__::func_692(PLAYER::PLAYER_PED_ID())) && __LIB_0__::func_692(iLocal_299))
			{
				if (iLocal_321 && __LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_299) > fLocal_294)
				{
					__LIB_0__::func_229("MEJ1_08", 7500, 1);
					__LIB_14__::func_875(&uLocal_336);
					iLocal_321 = 0;
				}
				if (bLocal_320)
				{
					if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_299) < 5f)
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_299);
						func_342();
					}
				}
				else if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_304, 1) < (5f - 1f))
				{
					iLocal_237 = 1;
					func_342();
				}
			}
			break;
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_JIMMY_FOCUS_CAM"))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			AUDIO::START_AUDIO_SCENE("M_E_JIMMY_FOCUS_CAM");
		}
	}
	else if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		AUDIO::STOP_AUDIO_SCENE("M_E_JIMMY_FOCUS_CAM");
	}
	if (__LIB_0__::func_692(iLocal_299))
	{
		PED::SET_PED_RESET_FLAG(iLocal_299, 249, true);
		PED::SET_PED_RESET_FLAG(iLocal_299, 248, true);
		PED::SET_PED_RESET_FLAG(iLocal_299, 124, true);
	}
	func_223();
	func_244();
}

void func_341()//Position - 0x2D0AA
{
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_692(iLocal_299))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_262)
		{
			if (!__LIB_0__::func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (__LIB_2__::func_859(&uLocal_67, "MEJ1AUD", "MEJ1_HERE", 7, 0, 0, 0))
				{
					iLocal_262 = MISC::GET_GAME_TIMER() + 15000;
				}
			}
		}
	}
}

void func_342()//Position - 0x2D103
{
	if (!__LIB_0__::func_75())
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			__LIB_14__::func_535(&uLocal_67, "MEJ1AUD", "MEJ1_WHERE", "MEJ1_WHERE_2", 7, 1, 0);
		}
		else
		{
			__LIB_14__::func_535(&uLocal_67, "MEJ1AUD", "MEJ1_WHERE", "MEJ1_WHERE_2", 7, 0, 0);
		}
	}
	func_343();
}

void func_343()//Position - 0x2D14B
{
	iLocal_283 = MISC::GET_GAME_TIMER() + 9000;
	iLocal_296 = 0;
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		iLocal_295 = 3;
	}
	else
	{
		iLocal_295 = 5;
	}
}

int func_351()//Position - 0x2D630
{
	int iVar0;
	int iVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_0__::func_695(iLocal_304))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (__LIB_0__::func_695(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if ((((__LIB_12__::func_390(iVar1) || iVar1 == joaat("police4")) || iVar1 == joaat("policeold1")) || iVar1 == joaat("policeold2")) || iVar1 == joaat("fbi"))
			{
				if (VEHICLE::IS_VEHICLE_SIREN_ON(iVar0) && __LIB_0__::func_687(iVar0, iLocal_304, 15f, 1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_353()//Position - 0x2D728
{
	int iVar0;
	if (iLocal_323)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_324)
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_304, 0, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_304, 1, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_304, 4, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_304, 5, false))
		{
			iVar0++;
		}
		if (iVar0 > 2)
		{
			iLocal_323 = 1;
			iLocal_324 = MISC::GET_GAME_TIMER() + 1000;
		}
	}
	return 0;
}

void func_382()//Position - 0x2E981
{
	if (iLocal_256 > 0 && MISC::GET_GAME_TIMER() > iLocal_256)
	{
		if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_692(iLocal_299))
		{
			if ((__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_299) < 50f && !__LIB_0__::func_75()) && !__LIB_0__::func_501("MEJ1_02", 0, 0))
			{
				if (iLocal_259)
				{
					if (__LIB_2__::func_859(&uLocal_67, "MEJ1AUD", "MEJ1_DONT", 7, 0, 0, 0))
					{
						iLocal_256 = MISC::GET_GAME_TIMER() + 10000;
						iLocal_259 = 0;
					}
				}
				else if (__LIB_2__::func_859(&uLocal_67, "MEJ1AUD", "MEJ1_CALL", 7, 0, 0, 0))
				{
					iLocal_256 = MISC::GET_GAME_TIMER() + 10000;
				}
			}
		}
	}
}

void func_384()//Position - 0x2EA4A
{
	bool bVar0;
	if ((__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_692(iLocal_301[0])) && __LIB_0__::func_695(iLocal_304))
	{
		if (iLocal_254 == -1 && iLocal_255 == -1)
		{
			if (!bLocal_257)
			{
				bLocal_257 = ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_304, PLAYER::PLAYER_PED_ID());
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_304, PLAYER::PLAYER_PED_ID(), true) || bLocal_257)
			{
				__LIB_16__::func_294();
				__LIB_0__::func_429();
				if (__LIB_14__::func_535(&uLocal_67, "MEJ1AUD", "MEJ1_RAM", "MEJ1_RAM_3", 7, 0, 0))
				{
					iLocal_260 = 1;
					iLocal_254++;
					iLocal_263 = MISC::GET_GAME_TIMER();
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_301[0], iLocal_304, PLAYER::PLAYER_PED_ID(), 8, 25f, 786468, 100f, 1f, true);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 3);
					iLocal_234 = 2;
					fLocal_293 = 200f;
					fLocal_294 = 500f;
				}
			}
			else if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_301[0]) < 50f && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_304))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_264)
				{
					bVar0 = false;
					if (HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						bVar0 = __LIB_2__::func_859(&uLocal_67, "MEJ1AUD", "MEJ1_SEES", 7, 1, 0, 0);
					}
					else
					{
						bVar0 = __LIB_2__::func_859(&uLocal_67, "MEJ1AUD", "MEJ1_SEES", 7, 0, 0, 0);
					}
					if (iLocal_261)
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 3);
						iLocal_261 = 0;
					}
					if (bVar0)
					{
						iLocal_264 = MISC::GET_GAME_TIMER() + 10000;
					}
				}
			}
		}
		else if (iLocal_260)
		{
			if (!__LIB_0__::func_75())
			{
				if (__LIB_3__::func_74(&uLocal_67, 14, "MEJ1AUD", "MEJ1_DAD", 7, 0, 0, 1))
				{
					iLocal_260 = 0;
				}
			}
		}
		else if (((iLocal_254 < 8 && __LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_301[0]) < 50f) && !__LIB_0__::func_75()) && !__LIB_0__::func_501("MEJ1_02", 0, 0))
		{
			if (!iLocal_258 && __LIB_2__::func_859(&uLocal_67, "MEJ1AUD", "MEJ1_DSPOT", 7, 0, 0, 0))
			{
				iLocal_263 = MISC::GET_GAME_TIMER() + 5000;
				iLocal_258 = 1;
				iLocal_256 = MISC::GET_GAME_TIMER() + 10000;
			}
			else if (iLocal_255 == iLocal_254)
			{
				iLocal_254++;
				iLocal_263 = MISC::GET_GAME_TIMER() + 5000;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_263)
			{
				if (__LIB_14__::func_535(&uLocal_67, "MEJ1AUD", "MEJ1_MRAM", sLocal_253[iLocal_254], 7, 0, 0))
				{
					iLocal_255 = iLocal_254;
				}
			}
		}
	}
}

void func_386()//Position - 0x2ECE3
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	if (STREAMING::HAS_ANIM_DICT_LOADED("missfam3"))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_265)
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_304, 0f, -20f, 0f) };
			if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Var0, 20f, 1))
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, iLocal_301);
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
				iVar2 *= 1000;
				func_387(iLocal_301[iVar1], iVar2, 0);
				iLocal_265 = (MISC::GET_GAME_TIMER() + iVar2);
			}
		}
	}
}

void func_387(int iParam0, int iParam1, int iParam2)//Position - 0x2ED58
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
			{
				iVar5 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
				if (__LIB_0__::func_695(iVar5))
				{
					iVar4 = __LIB_2__::func_837(iParam0, iVar5);
					switch (iVar4)
					{
						case -1:
						case 1:
							sVar0 = "incar_lookbehind_enter_driver";
							sVar1 = "incar_lookbehind_idle_driver";
							sVar2 = "incar_lookbehind_exit_driver";
							break;
						case 0:
						case 2:
							sVar0 = "incar_lookbehind_enter_passenger";
							sVar1 = "incar_lookbehind_idle_passenger";
							sVar2 = "incar_lookbehind_exit_passenger";
							break;
					}
					TASK::CLEAR_SEQUENCE_TASK(&iVar3);
					TASK::OPEN_SEQUENCE_TASK(&iVar3);
					TASK::TASK_PLAY_ANIM(0, "missfam3", sVar0, 4f, -8f, -1, 16 | iParam2, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "missfam3", sVar1, 8f, -8f, iParam1, 16 | iParam2 | 1, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "missfam3", sVar2, 8f, -4f, -1, 16 | iParam2, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar3);
					TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar3);
					TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				}
			}
		}
	}
}

void func_393()//Position - 0x2EF52
{
	__LIB_14__::func_881(&uLocal_336, &uLocal_67, "MEJ1AUD", &sLocal_337, &cLocal_343);
	switch (iLocal_296)
	{
		case 0:
			__LIB_0__::func_714(&iLocal_298);
			iLocal_298 = __LIB_14__::func_704(Local_290, 5, 0);
			HUD::SET_BLIP_COLOUR(iLocal_298, 3);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_298, "MEJ1_JIM");
			HUD::SET_BLIP_ROUTE(iLocal_298, true);
			__LIB_14__::func_611(&iLocal_298, -2086.9126f, 951.6347f, 183.7526f, 75.8f);
			__LIB_0__::func_229("MEJ1_01", 7500, 1);
			__LIB_14__::func_875(&uLocal_336);
			func_398();
			if (__LIB_0__::func_323())
			{
				iLocal_296 = 3;
			}
			else
			{
				iLocal_296 = 1;
			}
			break;
		case 1:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_290, true) < 1400f)
			{
				iLocal_296 = 2;
			}
			break;
		case 2:
			func_395();
			if (func_394())
			{
				if (__LIB_2__::func_859(&uLocal_67, "MEJ1AUD", "MEJ1_RAM2", 7, 0, 0, 0) || __LIB_0__::func_75())
				{
					iLocal_296 = 0;
					iLocal_295 = 2;
				}
			}
			if (__LIB_0__::func_692(iLocal_299) && __LIB_0__::func_692(iLocal_301[0]))
			{
				if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_290, 150f, 1) || __LIB_3__::func_74(&uLocal_67, 14, "MEJ1AUD", "MEJ1_CLOSE", 7, 0, 0, 1))
				{
					iLocal_296 = 3;
				}
			}
			break;
		case 3:
			func_395();
			if (func_394())
			{
				if (__LIB_2__::func_859(&uLocal_67, "MEJ1AUD", "MEJ1_RAM2", 7, 0, 0, 0) || __LIB_0__::func_75())
				{
					iLocal_296 = 0;
					iLocal_295 = 2;
				}
			}
			break;
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_JIMMY_GO_TO_JIMMY"))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			AUDIO::START_AUDIO_SCENE("M_E_JIMMY_GO_TO_JIMMY");
		}
	}
}

int func_394()//Position - 0x2F0FA
{
	if (((__LIB_0__::func_695(iLocal_304) && __LIB_0__::func_692(PLAYER::PLAYER_PED_ID())) && __LIB_0__::func_692(iLocal_301[0])) && __LIB_0__::func_692(iLocal_299))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_308, Local_309, fLocal_316, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_310, Local_311, fLocal_317, false, true, 0))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_304, Local_306, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_304, fLocal_307);
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_312, Local_313, fLocal_316, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_314, Local_315, fLocal_317, false, true, 0))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_304, Local_306, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_304, fLocal_307);
			return 1;
		}
	}
	return 0;
}

void func_395()//Position - 0x2F1E6
{
	int iVar0;
	if (__LIB_0__::func_695(iLocal_304))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!__LIB_0__::func_692(iLocal_301[iVar0]))
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_303))
				{
					iLocal_301[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_304, 4, iLocal_303, iLocal_302[iVar0], true, true);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_301[iVar0], 0, iVar0, iVar0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_301[iVar0], 2, iVar0, iVar0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_301[iVar0], 3, iVar0, iVar0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_301[iVar0], 4, iVar0, iVar0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_301[iVar0], true);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_301[iVar0], false, false);
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_301[iVar0], 2, false);
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_301[iVar0], 128, false);
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_301[iVar0], 65536, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_301[iVar0], 17, true);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_301[iVar0], true);
					if (iVar0 == 0)
					{
						__LIB_0__::func_222(&uLocal_67, 5, iLocal_301[iVar0], "MEJimmyKidnapper", 1, 1);
					}
				}
			}
			iVar0++;
		}
		if (!__LIB_0__::func_692(iLocal_299))
		{
			if (STREAMING::HAS_MODEL_LOADED(__LIB_2__::func_910(14)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_232))
			{
				func_396(&iLocal_299, Local_306, fLocal_307, 1);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_299, false, false);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_299, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_299, 29, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_299, 116, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_299, 104, true);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_299, true);
				TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(iLocal_299, true);
				PED::SET_PED_HELMET(iLocal_299, false);
				ENTITY::SET_ENTITY_PROOFS(iLocal_299, true, false, false, true, true, false, false, false);
				PED::SET_PED_CAN_RAGDOLL(iLocal_299, false);
				PED::SET_PED_RESET_FLAG(iLocal_299, 249, true);
				PED::SET_PED_RESET_FLAG(iLocal_299, 248, true);
				PED::SET_PED_RESET_FLAG(iLocal_299, 124, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_299, true);
				PED::SET_PED_DIES_IN_WATER(iLocal_299, true);
				PED::SET_PED_DIES_IN_SINKING_VEHICLE(iLocal_299, true);
				__LIB_0__::func_222(&uLocal_67, 3, iLocal_299, "JIMMY", 1, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_300);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_299, iLocal_300);
				ENTITY::SET_ENTITY_COLLISION(iLocal_299, false, false);
				iLocal_233 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_233, true);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_233, false);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_233, iLocal_304, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_304, sLocal_235));
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_299, iLocal_233, sLocal_232, "base", 8f, -8f, 4, iLocal_236, 1000f, 0);
				iLocal_234 = 0;
			}
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(iLocal_305))
	{
		iLocal_304 = VEHICLE::CREATE_VEHICLE(iLocal_305, Local_306, fLocal_307, true, true, false);
		VEHICLE::SET_VEHICLE_COLOURS(iLocal_304, 22, 22);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_304, 0, 8);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_304, false, false);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_304, true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_305, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_305);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_304, true, 1);
		VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_304, false);
		iLocal_266 = 0;
		iLocal_267 = -1;
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_304, "M_E_JIMMY_ENEMY_VEHICLE_GROUP", 0f);
	}
}

int func_396(int* iParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x2F4C9
{
	int iVar0;
	iVar0 = __LIB_2__::func_910(14);
	STREAMING::REQUEST_MODEL(iVar0);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		__LIB_0__::func_0(iParam0);
		*iParam0 = PED::CREATE_PED(26, iVar0, Param1, fParam2, false, false);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 3, 6, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 1, 3, 0, 0);
		if (bParam3)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
		return 1;
	}
	return 0;
}

void func_398()//Position - 0x2F561
{
	__LIB_0__::func_799(iLocal_303);
	__LIB_0__::func_799(__LIB_2__::func_910(14));
	__LIB_0__::func_799(iLocal_305);
}

void func_401()//Position - 0x2F5CB
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int* iVar4;
	HUD::REQUEST_ADDITIONAL_TEXT("MEJ1", 0);
	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_0__::func_222(&uLocal_67, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 1, 1);
		}
		__LIB_0__::func_222(&uLocal_67, 4, 0, "JIMMY", 0, 1);
		if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_300 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
		}
		__LIB_0__::func_424(1);
		MISC::SET_INSTANCE_PRIORITY_HINT(2);
		STREAMING::REQUEST_ANIM_DICT(sLocal_232);
		sLocal_253[0] = "MEJ1_MRAM_1";
		sLocal_253[1] = "MEJ1_MRAM_2";
		sLocal_253[2] = "MEJ1_MRAM_3";
		sLocal_253[3] = "MEJ1_MRAM_4";
		sLocal_253[4] = "MEJ1_MRAM_5";
		sLocal_253[2] = "MEJ1_MRAM_6";
		sLocal_253[3] = "MEJ1_MRAM_7";
		sLocal_253[4] = "MEJ1_MRAM_8";
		sLocal_269[0] = "MEJ1_CRASH_1";
		sLocal_269[1] = "MEJ1_CRASH_2";
		sLocal_269[2] = "MEJ1_CRASH_3";
		sLocal_269[3] = "MEJ1_CRASH_4";
		sLocal_269[4] = "MEJ1_CRASH_5";
		sLocal_269[5] = "MEJ1_CRASH_6";
		sLocal_272[0] = "MEJ1_HITKILL_1";
		sLocal_272[1] = "MEJ1_HITKILL_2";
		sLocal_272[2] = "MEJ1_HITKILL_3";
		sLocal_273[0] = "MEJ1_NOKILL_1";
		sLocal_273[1] = "MEJ1_NOKILL_2";
		sLocal_273[2] = "MEJ1_NOKILL_3";
		sLocal_277[0] = "MEJ1_STILL_1";
		sLocal_277[1] = "MEJ1_STILL_2";
		sLocal_277[2] = "MEJ1_STILL_3";
		sLocal_280[0] = "MEJ1_INJURE_1";
		sLocal_280[1] = "MEJ1_INJURE_2";
		sLocal_280[2] = "MEJ1_INJURE_3";
		sLocal_280[3] = "MEJ1_INJURE_4";
		sLocal_284[0] = "MEJ1_FLEE_1";
		sLocal_284[1] = "MEJ1_FLEE_2";
		sLocal_284[2] = "MEJ1_FLEE_3";
		sLocal_284[3] = "MEJ1_FLEE_4";
		sLocal_284[4] = "MEJ1_FLEE_5";
		sLocal_284[5] = "MEJ1_FLEE_6";
		sLocal_284[6] = "MEJ1_FLEE_7";
		sLocal_284[7] = "MEJ1_FLEE_8";
		sLocal_284[8] = "MEJ1_FLEE_9";
		sLocal_284[9] = "MEJ1_FLEE_10";
		sLocal_284[10] = "MEJ1_FLEE_11";
		sLocal_284[11] = "MEJ1_FLEE_12";
		iLocal_302[0] = -1;
		iLocal_302[1] = 0;
		iLocal_302[2] = 1;
		if (__LIB_0__::func_2(0) && __LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			fVar2 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			__LIB_14__::func_865(&iVar0, Var1, fVar2, 1, 0, 1, 1, 1, joaat("asterope"), 0, 145, 1);
		}
		if (__LIB_0__::func_323())
		{
			iVar3 = __LIB_0__::func_344();
			if (Global_94618 == 1)
			{
				iVar3++;
			}
			switch (iVar3)
			{
				case 0:
					__LIB_38__::func_208(&iVar4, 1, 1, 1, 1, iLocal_335, 0, 145);
					if (__LIB_0__::func_725(iVar4, -811.34375f, 187.43669f, 71.47861f, 6f, 1))
					{
						ENTITY::SET_ENTITY_COORDS(iVar4, -822.4044f, 182.60785f, 71.37809f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iVar4, 135.65408f);
					}
					__LIB_0__::func_106(&iVar4);
					__LIB_38__::func_205();
					__LIB_0__::func_84(500, 1);
					iLocal_296 = 0;
					iLocal_295 = 1;
					break;
				case 1:
					func_418();
					__LIB_38__::func_205();
					iLocal_296 = 0;
					iLocal_295 = 1;
					break;
				case 2:
					func_416(1, 1);
					func_410(0);
					__LIB_38__::func_205();
					SYSTEM::WAIT(500);
					__LIB_33__::func_561(1, 1, 1);
					break;
				case 3:
					__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1112014848, 12, 5000, 0, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					__LIB_0__::func_84(500, 1);
					__LIB_33__::func_561(1, 1, 1);
					func_69();
					break;
				default:
					break;
			}
		}
		else
		{
			__LIB_38__::func_205();
			__LIB_0__::func_84(500, 1);
			iLocal_296 = 0;
			iLocal_295 = 1;
		}
	}
}

void func_410(bool bParam0)//Position - 0x2FB4A
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	func_46(1, 0);
	func_413();
	ENTITY::SET_ENTITY_VISIBLE(iLocal_304, true, false);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_299, true, false);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_0__::func_0(&(iLocal_301[iVar0]));
		iVar0++;
	}
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_692(iLocal_299))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_299, true, false);
		if (bParam0)
		{
			if ((__LIB_0__::func_695(iLocal_304) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_304, -1, false)) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_304, 0, false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_304, -1);
				PED::SET_PED_INTO_VEHICLE(iLocal_299, iLocal_304, 0);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_304, true, true, false);
			}
		}
		else
		{
			Var2 = { __LIB_38__::func_204() };
			func_411(&Var2, &fVar3);
			__LIB_14__::func_865(&iVar1, Var2, fVar3, 1, 0, 1, 1, 1, joaat("asterope"), 0, 145, 1);
			if ((__LIB_0__::func_695(iVar1) && VEHICLE::IS_VEHICLE_SEAT_FREE(iVar1, 0, false)) && __LIB_0__::func_692(iLocal_299))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_299, iVar1, 0);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iVar1, true, true, false);
				__LIB_0__::func_106(&iLocal_304);
			}
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	}
	__LIB_0__::func_429();
	iLocal_318 = 1;
	iLocal_319 = 1;
	iLocal_288 = 1;
	iLocal_239 = -1;
	iLocal_240 = -1;
	iLocal_270 = 0;
	iLocal_274 = 0;
	iLocal_278 = 0;
	iLocal_268 = 0;
	iLocal_271 = 0;
	iLocal_275 = 0;
	__LIB_14__::func_874(2, "Drive Home", 1, 0, 0, 1);
	iLocal_296 = 0;
	iLocal_295 = 3;
}

void func_411(var uParam0, var uParam1)//Position - 0x2FCCA
{
	struct<3> Var0[5];
	float fVar1[5];
	int iVar2;
	int iVar3;
	Var0[0 /*3*/] = { -2539.17f, 1866.73f, 166.1f };
	fVar1[0] = 216.03f;
	Var0[1 /*3*/] = { -2022.33f, 826.23f, 162.32f };
	fVar1[1] = 172.12f;
	Var0[2 /*3*/] = { -1038.3f, 253f, 64.21f };
	fVar1[2] = 270.02f;
	Var0[3 /*3*/] = { -3140.89f, 1024.06f, 18.33f };
	fVar1[3] = 152.08f;
	Var0[4 /*3*/] = { -2641.3f, -110.03f, 18.7f };
	fVar1[4] = 221.35f;
	iVar2 = 0;
	iVar3 = 1;
	while (iVar3 < 5)
	{
		if (SYSTEM::VDIST2(Var0[iVar3 /*3*/], *uParam0) < SYSTEM::VDIST2(Var0[iVar2 /*3*/], *uParam0))
		{
			iVar2 = iVar3;
		}
		iVar3++;
	}
	*uParam0 = { Var0[iVar2 /*3*/] };
	*uParam1 = fVar1[iVar2];
}

void func_413()//Position - 0x2FDDF
{
	int iVar0;
	iVar0 = -1;
	func_398();
	while (!func_415(&iVar0))
	{
		SYSTEM::WAIT(0);
	}
	iVar0 = -1;
	func_395();
	while (!func_414(&iVar0))
	{
		func_395();
		SYSTEM::WAIT(0);
	}
}

int func_414(int iParam0)//Position - 0x2FE1D
{
	if (*iParam0 < 0)
	{
		*iParam0 = MISC::GET_GAME_TIMER() + 1000;
	}
	else if (MISC::GET_GAME_TIMER() > *iParam0)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_304))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_301[0]))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_301[1]))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_301[2]))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_299))
	{
		return 0;
	}
	return 1;
}

int func_415(int iParam0)//Position - 0x2FE9C
{
	if (*iParam0 < 0)
	{
		*iParam0 = MISC::GET_GAME_TIMER() + 1000;
	}
	else if (MISC::GET_GAME_TIMER() > *iParam0)
	{
		return 1;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_305))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_303))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_2__::func_910(14)))
	{
		return 0;
	}
	return 1;
}

void func_416(bool bParam0, bool bParam1)//Position - 0x2FEF7
{
	if (bParam0)
	{
		__LIB_33__::func_562(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_89(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_418()//Position - 0x2FF89
{
	int iVar0;
	func_416(1, 1);
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		func_46(1, 0);
		func_398();
		__LIB_14__::func_865(&iVar0, -2086.9126f, 951.6347f, 183.7526f, 75.8f, 1, 1, 0, 1, 1, iLocal_335, 0, 145, 1);
		if (__LIB_0__::func_695(iVar0))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, true, true, false);
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		func_395();
		while (((!__LIB_0__::func_692(iLocal_299) && !__LIB_0__::func_692(iLocal_301[0])) && !__LIB_0__::func_692(iLocal_301[1])) && !__LIB_0__::func_692(iLocal_301[2]))
		{
			func_395();
			SYSTEM::WAIT(0);
		}
		__LIB_0__::func_429();
		__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1112014848, 12, 5000, 0, 0);
		if (__LIB_0__::func_695(iVar0))
		{
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 25f);
		}
	}
	__LIB_33__::func_561(1, 1, 1);
}

void func_529(bool bParam0)//Position - 0x3BBDA
{
	func_46(0, bParam0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	HUD::CLEAR_PRINTS();
	__LIB_0__::func_638();
	STREAMING::REMOVE_ANIM_DICT(sLocal_232);
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_292 - Vector(10f, 10f, 10f), Local_292 + Vector(10f, 10f, 10f), true, true);
	__LIB_0__::func_424(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_530()//Position - 0x3BC41
{
	int iVar0;
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		if (!__LIB_0__::func_134())
		{
			iVar0 = __LIB_0__::func_380();
			if (iVar0 != -1)
			{
				if (!func_59(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_14__::func_534();
		}
	}
}

