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
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
	float fLocal_24 = 0f;
	struct<3> Local_25 = { 0, 0, 0 } ;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<4> Local_50[10];
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	struct<61> Local_56 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int* iLocal_57 = NULL;
	var uLocal_58 = 16;
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
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	struct<3> Local_226 = { 0, 0, 0 } ;
	struct<3> Local_227 = { 0, 0, 0 } ;
	float fLocal_228 = 0f;
	var uLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	char* sLocal_233[4] = { NULL, NULL, NULL, NULL };
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	struct<3> Local_236 = { 0, 0, 0 } ;
	struct<3> Local_237 = { 0, 0, 0 } ;
	struct<3> Local_238 = { 0, 0, 0 } ;
	struct<3> Local_239 = { 0, 0, 0 } ;
	int iLocal_240 = 0;
	struct<3> Local_241 = { 0, 0, 0 } ;
	struct<3> Local_242 = { 0, 0, 0 } ;
	float fLocal_243 = 0f;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	char* sLocal_246[3] = { NULL, NULL, NULL };
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	char* sLocal_252 = NULL;
	char* sLocal_253 = NULL;
	char* sLocal_254 = NULL;
	char* sLocal_255 = NULL;
	char* sLocal_256 = NULL;
	char* sLocal_257 = NULL;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	bool bLocal_261 = 0;
	int iLocal_262 = 0;
	bool bLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	bool bLocal_266 = 0;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	char* sLocal_269 = NULL;
	char* sLocal_270 = NULL;
	char* sLocal_271 = NULL;
	char* sLocal_272 = NULL;
	char* sLocal_273 = NULL;
	char* sLocal_274 = NULL;
	char* sLocal_275 = NULL;
	struct<3> Local_276 = { 0, 0, 0 } ;
	struct<3> Local_277 = { 0, 0, 0 } ;
	bool bLocal_278 = 0;
	bool bLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	struct<3> Local_283 = { 0, 0, 0 } ;
	struct<3> Local_284 = { 0, 0, 0 } ;
	struct<3> Local_285 = { 0, 0, 0 } ;
	struct<3> Local_286 = { 0, 0, 0 } ;
	struct<3> Local_287 = { 0, 0, 0 } ;
	float fLocal_288 = 0f;
	float fLocal_289 = 0f;
	float fLocal_290 = 0f;
	float fLocal_291 = 0f;
	float fLocal_292 = 0f;
	struct<3> Local_293 = { 0, 0, 0 } ;
	float fLocal_294 = 0f;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	struct<3> Local_297 = { 0, 0, 0 } ;
	struct<3> Local_298 = { 0, 0, 0 } ;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	char* sLocal_301[3] = { NULL, NULL, NULL };
	char* sLocal_302[4] = { NULL, NULL, NULL, NULL };
	int iLocal_303[4] = { 0, 0, 0, 0 };
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	bool bLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	struct<3> Local_311 = { 0, 0, 0 } ;
	struct<3> Local_312 = { 0, 0, 0 } ;
	struct<3> Local_313 = { 0, 0, 0 } ;
	struct<3> Local_314 = { 0, 0, 0 } ;
	float fLocal_315 = 0f;
	char* sLocal_316 = NULL;
	char* sLocal_317 = NULL;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	struct<3> Local_320 = { 0, 0, 0 } ;
	float fLocal_321 = 0f;
	int iLocal_322 = 0;
	char* sLocal_323 = NULL;
	char* sLocal_324 = NULL;
	bool bLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	struct<61> Local_328 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_23 = "NULL";
	fLocal_24 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_47 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_48 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	uLocal_53 = __LIB_2__.func_108(50);
	iLocal_54 = joaat("pcj");
	Local_226 = { -498.84396f, 230.90865f, 81.10313f };
	Local_227 = { -487.0969f, 230.15756f, 84.066666f };
	fLocal_228 = 11f;
	Local_236 = { 0f, 0f, 0f };
	Local_237 = { 0f, 0f, 0f };
	Local_238 = { 0.1181f, 0.2229f, -0.1535f };
	Local_239 = { 259.2501f, 24.08f, -51.2899f };
	iLocal_240 = -1;
	Local_241 = { -512.9788f, 225.16649f, 80.20329f };
	Local_242 = { -463.98053f, 219.81311f, 84.14708f };
	fLocal_243 = 18.5f;
	iLocal_245 = -1;
	sLocal_252 = "rcmpaparazzo_4";
	sLocal_253 = "lift_hands_in_air_loop";
	sLocal_254 = "MISSCOMMON@HANDS_UP_FLINCH";
	sLocal_255 = "reaction@back_away@f";
	sLocal_256 = "random@escape_paparazzi@standing@";
	sLocal_257 = "0";
	iLocal_260 = 1;
	bLocal_266 = true;
	sLocal_267 = "base_pap";
	sLocal_268 = "base_camman";
	sLocal_269 = "base_prod";
	sLocal_270 = "gesture_to_cam_pap";
	sLocal_271 = "gesture_to_cam_camman";
	sLocal_272 = "gesture_to_cam_prod";
	sLocal_273 = "idle_pap";
	sLocal_274 = "idle_camman";
	sLocal_275 = "idle_prod";
	Local_276 = { -493.76434f, 232.17636f, 82.057274f };
	Local_277 = { 0f, 0f, 0f };
	bLocal_278 = true;
	bLocal_279 = true;
	Local_283 = { -489.37982f, 232.07132f, 82.05263f };
	Local_284 = { -488.27f, 229.89f, 83.23f };
	Local_285 = { -493.3992f, 226.2236f, 82.1179f };
	Local_286 = { -497.99f, 224.97f, 82.67f };
	Local_287 = { -501.55f, 230.7f, 83.1f };
	fLocal_288 = 115.15f;
	fLocal_289 = -64.85f;
	fLocal_290 = 296.4216f;
	fLocal_291 = 266.5f;
	fLocal_292 = 233.87f;
	Local_293 = { -489.4534f, 233.7212f, 82.0251f };
	fLocal_294 = 294.5672f;
	Local_297 = { -494.3458f, 229.29216f, 82.11426f };
	Local_298 = { -499.68f, 232.26f, 82.1f };
	iLocal_305 = 1;
	iLocal_310 = 1;
	Local_311 = { -477.6708f, 236.90958f, 84.02463f };
	Local_312 = { -488.68292f, 232.33574f, 81.01718f };
	Local_313 = { -526.3283f, 245.77834f, 80.97247f };
	Local_314 = { -439.6462f, 235.06168f, 84.04542f };
	fLocal_315 = 6f;
	sLocal_316 = "pap4_BevRoute";
	sLocal_317 = "pap4_CamRoute";
	iLocal_318 = 20;
	iLocal_319 = 15;
	Local_320 = { -492.67786f, 227.60219f, 82.13477f };
	fLocal_321 = 15f;
	sLocal_323 = "PAPARAZZO_04_SOUNDSET";
	sLocal_324 = "CAMERA";
	iLocal_326 = -1;
	iLocal_327 = 1;
	Local_56 = { ScriptParam_328 };
	__LIB_20__.func_264(&Local_56);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__.func_135("Force cleanup [TERMINATING]");
		__LIB_38__.func_39(1);
		func_400();
	}
	if (__LIB_0__.func_294())
	{
		Global_78564 = 1;
		iLocal_52 = 0;
		while (!func_389(&Local_56))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_10__.func_700(&Local_56, 0, 1);
		Global_78564 = 0;
	}
	__LIB_24__.func_951(50, 1, 0);
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_PRC", 0);
		SYSTEM::WAIT(0);
		__LIB_40__.func_690(Local_56.f_9, 0, 0, 0, 0, 0);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
		switch (iLocal_224)
		{
			case 0:
				func_351();
				break;
			case 1:
				func_312();
				break;
			case 2:
				func_286();
				break;
			case 3:
				func_212();
				break;
			case 4:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x40B
{
	switch (iLocal_225)
	{
		case 0:
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 0f, 1);
			iLocal_232 = MISC::GET_GAME_TIMER() + 500;
			iLocal_225 = 1;
			break;
		case 1:
			func_211();
			if (__LIB_1__.func_197(Local_56.f_28[1]) && !FIRE::IS_ENTITY_ON_FIRE(Local_56.f_28[1]))
			{
				if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_FLEEING(Local_56.f_28[1]) && !PED::IS_PED_IN_ANY_VEHICLE(Local_56.f_28[1], true))
					{
						PED::SET_PED_FLEE_ATTRIBUTES(Local_56.f_28[1], 128, true);
						TASK::TASK_SMART_FLEE_PED(Local_56.f_28[1], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
					}
				}
				else
				{
					TASK::TASK_WANDER_STANDARD(Local_56.f_28[1], 40000f, 0);
				}
			}
			if (MISC::GET_GAME_TIMER() > iLocal_232)
			{
				iLocal_225 = 2;
			}
			break;
		case 2:
			func_211();
			func_2();
			break;
	}
}

void func_2()//Position - 0x4ED
{
	__LIB_0__.func_296();
	func_4(105, 1);
	HUD::CLEAR_PRINTS();
	if (bLocal_325)
	{
		__LIB_0__.func_498(806);
	}
	func_400();
}

void func_4(int iParam0, bool bParam1)//Position - 0x586
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_18__.func_205();
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
	__LIB_38__.func_136(iVar0, 0);
	MISC::SET_BIT(&Global_78567, 1);
	if (Global_112473[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		__LIB_0__.func_56(&(Global_112473[iVar0 /*10*/].f_9));
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
	__LIB_32__.func_577(iVar0, 1, 0, 0);
	__LIB_0__.func_46(0, 0);
	MemCopy(&sVar1, {__LIB_0__.func_339(iVar0)}, 4);
	__LIB_0__.func_44(&sVar1, __LIB_26__.func_250());
	func_32();
	if (BitTest(Global_113386.f_10016.f_25, 3))
	{
		__LIB_0__.func_18();
	}
	__LIB_35__.func_897();
	if (iParam0 == 210 || iParam0 == 211)
	{
		__LIB_24__.func_943(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		__LIB_24__.func_943(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		__LIB_24__.func_943(iParam0, 0, 0);
	}
	__LIB_0__.func_533();
}

void func_32()//Position - 0x173D
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
			iVar3 = __LIB_18__.func_168(iVar1);
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
				if (func_150(iVar1, 14, iVar2))
				{
					func_33(iVar1, 14, iVar2);
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

int func_33(int iParam0, int iParam1, int iParam2)//Position - 0x17FE
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_150(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { __LIB_18__.func_180(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_33(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_33(iParam0, 14, uVar5[iVar3]))
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
		uVar6 = { __LIB_18__.func_180(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__.func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
		}
	}
	if (func_76(iParam0, iVar0, &iVar7, 0))
	{
		func_36(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_34(iParam0, iVar0, &iVar7))
	{
		func_36(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_34(int iParam0, int iParam1, int iParam2)//Position - 0x19BA
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_150(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_36(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x1A81
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
		Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__.func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_20__.func_322(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_6__.func_795(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_6__.func_795(iParam0, 9);
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
			iVar7 = __LIB_6__.func_788(iParam0, 1);
			if (!__LIB_6__.func_780(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_6__.func_788(iParam0, 0);
			if (!__LIB_6__.func_779(iVar10, 14, iVar8, -1) && !__LIB_6__.func_827(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_6__.func_788(iParam0, 2);
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
			uVar11 = { __LIB_18__.func_180(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, uVar11[iVar0], -1) };
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
							uVar12 = { __LIB_18__.func_247(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_20__.func_322(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_40__.func_943(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_36(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
							__LIB_0__.func_211(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_20__.func_322(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_40__.func_943(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_36(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, func_42(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_76(iParam0, iVar10, &iVar4, 1))
							{
								func_36(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_36(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_35__.func_896(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_36(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_36(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_36(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_36(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_36(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_18__.func_247(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_20__.func_322(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_943(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_36(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_20__.func_322(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__.func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_36(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__.func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_36(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_39__.func_857(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_76(iParam0, iVar10, &iVar4, 0))
		{
			func_36(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_34(iParam0, iVar10, &iVar4))
		{
			func_36(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_42(int iParam0, int iParam1, int iParam2)//Position - 0x2ABE
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
				if (func_150(iParam0, iParam1, iVar0))
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
				if (func_150(iParam0, iParam1, iVar1))
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
				return __LIB_6__.func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__.func_795(iParam0, iParam1);
		}
	}
	return -99;
}

int func_76(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x919D
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_150(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_150(int iParam0, int iParam1, int iParam2)//Position - 0x1F7F1
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_18__.func_180(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_150(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_150(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_150(iParam0, 14, iVar4))
										{
											if (!__LIB_24__.func_955(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__.func_795(iParam0, iVar2);
						Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_24__.func_955(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
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
		uVar8 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_150(iParam0, 14, uVar8[iVar7]))
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
	else if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_211()//Position - 0x26F4E
{
	if (!bLocal_325)
	{
		if (iLocal_326 == -1)
		{
			if ((!__LIB_1__.func_197(Local_56.f_28[0]) || !__LIB_1__.func_197(Local_56.f_28[1])) || !__LIB_1__.func_197(Local_56.f_28[2]))
			{
				iLocal_326 = MISC::GET_GAME_TIMER() + 500;
			}
		}
		else if (iLocal_326 > MISC::GET_GAME_TIMER())
		{
			if ((!__LIB_1__.func_197(Local_56.f_28[0]) && !__LIB_1__.func_197(Local_56.f_28[1])) && !__LIB_1__.func_197(Local_56.f_28[2]))
			{
				bLocal_325 = true;
			}
		}
	}
}

void func_212()//Position - 0x26FE3
{
	switch (iLocal_225)
	{
		case 0:
			iLocal_225 = 1;
			break;
		case 1:
			func_278();
			func_277();
			func_276();
			func_255();
			func_252();
			func_234();
			__LIB_30__.func_191(&iLocal_57, "", "", &uLocal_229, iLocal_230, 0);
			func_228();
			func_225();
			func_222();
			func_219();
			func_217();
			func_211();
			break;
		case 2:
			func_216(0);
			__LIB_0__.func_523(&iLocal_57);
			__LIB_6__.func_833();
			break;
		case 3:
			iLocal_224 = 4;
			break;
	}
}

void func_216(bool bParam0)//Position - 0x270C8
{
	iLocal_223 = iLocal_224;
	if (!bParam0)
	{
		iLocal_224 = iLocal_223 + 1;
	}
	else if (iLocal_223 > 0)
	{
		iLocal_224 = (iLocal_223 - 1);
	}
	iLocal_225 = 0;
}

void func_217()//Position - 0x270FA
{
	if ((__LIB_1__.func_197(Local_56.f_28[0]) && __LIB_1__.func_183(Local_56.f_35[0])) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_316))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_56.f_35[0]))
		{
			if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(Local_56.f_35[0]) >= iLocal_318)
			{
				if (bLocal_278)
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_56.f_28[0], Local_56.f_35[0], PLAYER::PLAYER_PED_ID(), 8, 15f, 786468, 100f, 1f, true);
				}
				else
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_56.f_28[0], Local_56.f_35[0], PLAYER::PLAYER_PED_ID(), 8, 40f, 786468, 100f, 1f, true);
				}
			}
		}
	}
	if ((__LIB_1__.func_197(Local_56.f_28[1]) && __LIB_1__.func_183(Local_56.f_35[1])) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_317))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_56.f_35[1]))
		{
			if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(Local_56.f_35[1]) >= iLocal_319)
			{
				if (__LIB_1__.func_197(Local_56.f_28[0]))
				{
					if (bLocal_278)
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_56.f_28[1], Local_56.f_35[1], Local_56.f_28[0], 7, 15f, 786468, 100f, 1f, true);
					}
					else
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_56.f_28[1], Local_56.f_35[1], Local_56.f_28[0], 7, 40f, 786468, 100f, 1f, true);
					}
				}
				else
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_56.f_28[1], Local_56.f_35[1], 15f, 786597);
				}
			}
		}
	}
}

void func_219()//Position - 0x272A0
{
	if ((iLocal_309 && __LIB_1__.func_197(Local_56.f_28[2])) && !FIRE::IS_ENTITY_ON_FIRE(Local_56.f_28[2]))
	{
		if (((((!PED::IS_PED_FLEEING(Local_56.f_28[2]) && !TASK::IS_PED_GETTING_UP(Local_56.f_28[2])) && !PED::IS_PED_PRONE(Local_56.f_28[2])) && !PED::IS_PED_RAGDOLL(Local_56.f_28[2])) && !__LIB_4__.func_465(Local_56.f_28[2], joaat("SCRIPT_TASK_PAUSE"))) && !__LIB_4__.func_465(Local_56.f_28[2], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
		{
			if ((!PED::IS_PED_IN_ANY_VEHICLE(Local_56.f_28[2], true) || (__LIB_1__.func_183(Local_56.f_35[1]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_56.f_35[1], true))) || (__LIB_1__.func_183(Local_56.f_35[0]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_56.f_35[0], true)))
			{
				func_220(1);
				if (PED::IS_PED_IN_GROUP(Local_56.f_28[2]))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_56.f_28[2]);
				}
				PED::SET_PED_FLEE_ATTRIBUTES(Local_56.f_28[2], 128, true);
				TASK::TASK_SMART_FLEE_PED(Local_56.f_28[2], PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
			}
		}
	}
}

void func_220(bool bParam0)//Position - 0x273DC
{
	if (bParam0)
	{
		PATHFIND::SET_PED_PATHS_IN_AREA(Local_311, Local_312, true, 0);
	}
	else
	{
		PATHFIND::SET_PED_PATHS_IN_AREA(Local_311, Local_312, false, 0);
	}
}

void func_222()//Position - 0x2743F
{
	if ((bLocal_308 && __LIB_1__.func_197(Local_56.f_28[1])) && !FIRE::IS_ENTITY_ON_FIRE(Local_56.f_28[1]))
	{
		if ((((((!PED::IS_PED_FLEEING(Local_56.f_28[1]) && !PED::IS_PED_IN_ANY_VEHICLE(Local_56.f_28[1], true)) && !TASK::IS_PED_GETTING_UP(Local_56.f_28[1])) && !PED::IS_PED_PRONE(Local_56.f_28[1])) && !PED::IS_PED_RAGDOLL(Local_56.f_28[1])) && !__LIB_4__.func_465(Local_56.f_28[1], joaat("SCRIPT_TASK_PAUSE"))) && !__LIB_4__.func_465(Local_56.f_28[1], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
		{
			func_220(1);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_56.f_28[1], 128, true);
			TASK::TASK_SMART_FLEE_PED(Local_56.f_28[1], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
			__LIB_6__.func_771();
			iLocal_304 = 3;
		}
	}
}

void func_225()//Position - 0x27551
{
	if (__LIB_1__.func_197(Local_56.f_28[1]) && ENTITY::DOES_ENTITY_EXIST(Local_56.f_41[1]))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_56.f_28[1], sLocal_252, sLocal_268, 3))
		{
			if (PED::IS_PED_BEING_STEALTH_KILLED(Local_56.f_28[1]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_56.f_41[1]))
				{
					AUDIO::STOP_SOUND(iLocal_322);
					__LIB_0__.func_122(&(Local_56.f_41[1]), 0);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_265))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_56.f_28[1], -4f, true);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_265, 1f);
				}
				else
				{
					TASK::STOP_ANIM_TASK(Local_56.f_28[1], sLocal_252, sLocal_268, -8f);
				}
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(Local_56.f_28[1], true))
			{
				AUDIO::STOP_SOUND(iLocal_322);
				__LIB_0__.func_123(&(Local_56.f_41[1]));
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_265))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_56.f_28[1], -4f, true);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_265, 1f);
				}
				else
				{
					TASK::STOP_ANIM_TASK(Local_56.f_28[1], sLocal_252, sLocal_268, -8f);
				}
			}
		}
		else if ((((((((!bLocal_308 && !__LIB_4__.func_465(Local_56.f_28[1], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"))) && !PED::IS_PED_IN_COMBAT(Local_56.f_28[1], 0)) && !PED::IS_PED_IN_MELEE_COMBAT(Local_56.f_28[1])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_56.f_28[1], true)) && ENTITY::DOES_ENTITY_EXIST(Local_56.f_41[1])) && !PED::IS_PED_FLEEING(Local_56.f_28[1])) && !__LIB_4__.func_465(Local_56.f_28[1], joaat("SCRIPT_TASK_SMART_FLEE_PED"))) && ENTITY::DOES_ENTITY_EXIST(Local_56.f_41[1]))
		{
			TASK::TASK_PLAY_ANIM(Local_56.f_28[1], sLocal_252, sLocal_268, 1000f, -8f, -1, 57, 0f, false, false, false);
		}
	}
}

void func_228()//Position - 0x2777D
{
	if (!__LIB_1__.func_197(Local_56.f_28[0]) || (__LIB_8__.func_538(PLAYER::PLAYER_PED_ID(), Local_56.f_28[0]) > 150f && (!ENTITY::IS_ENTITY_ON_SCREEN(Local_56.f_28[0]) || !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_56.f_28[0], 17))))
	{
		if (!__LIB_1__.func_197(Local_56.f_28[0]))
		{
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 0);
		}
		iLocal_225 = 0;
		iLocal_224 = 4;
	}
}

void func_234()//Position - 0x27997
{
	if ((!bLocal_279 && __LIB_1__.func_197(Local_56.f_28[1])) && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
	{
		if (((((((iLocal_234 < 4 && !PED::IS_PED_FLEEING(Local_56.f_28[1])) && !__LIB_0__.func_75()) && MISC::GET_GAME_TIMER() > iLocal_235) && __LIB_8__.func_538(Local_56.f_28[1], PLAYER::PLAYER_PED_ID()) < 10f) && !PED::IS_PED_IN_COMBAT(Local_56.f_28[1], 0)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_56.f_28[1], true)) && !PED::IS_PED_FLEEING(Local_56.f_28[1]))
		{
			if (__LIB_35__.func_901(&uLocal_58, "PAP4AUD", "PAP4_CAMERA", sLocal_233[iLocal_234], 7, 0, 0))
			{
				iLocal_234++;
				iLocal_235 = MISC::GET_GAME_TIMER() + 15000;
			}
		}
	}
}

int func_252()//Position - 0x281A8
{
	int iVar0;
	int iVar1;
	if (!bLocal_278)
	{
		return 0;
	}
	iVar1 = 0;
	iVar0 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_56.f_35[0], 0f, 2f, 0f), 2f, 0, 94);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!iVar0 == Local_56.f_35[0])
		{
			if (iVar0 == PLAYER::GET_PLAYERS_LAST_VEHICLE() || (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false) && VEHICLE::IS_VEHICLE_STOPPED(iVar0)))
			{
				bLocal_266 = false;
				iVar1 = 1;
			}
		}
	}
	if (__LIB_30__.func_558(Local_56.f_35[0]) || iVar1)
	{
		if (PED::IS_PED_IN_VEHICLE(Local_56.f_28[0], Local_56.f_35[0], false))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_56.f_35[0]))
			{
				if (__LIB_35__.func_536(&uLocal_58, "PAP4AUD", "PAP4_BLOCKED", 7, 0, 0, 0))
				{
					if (((__LIB_1__.func_197(Local_56.f_28[0]) && !PED::IS_PED_IN_COMBAT(Local_56.f_28[0], 0)) && !PED::IS_PED_IN_MELEE_COMBAT(Local_56.f_28[0])) && !PED::IS_PED_FLEEING(Local_56.f_28[0]))
					{
						TASK::TASK_COMBAT_PED(Local_56.f_28[0], PLAYER::PLAYER_PED_ID(), 0, 16);
						__LIB_0__.func_122(&(Local_56.f_41[0]), 0);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_57))
					{
						HUD::SET_BLIP_SCALE(iLocal_57, 0.7f);
					}
				}
			}
		}
		else if (!PED::IS_PED_IN_ANY_VEHICLE(Local_56.f_28[0], false))
		{
			if (!__LIB_0__.func_75())
			{
				iLocal_305 = 0;
				iLocal_304 = 3;
				if (((__LIB_1__.func_197(Local_56.f_28[0]) && !PED::IS_PED_IN_COMBAT(Local_56.f_28[0], 0)) && !PED::IS_PED_IN_MELEE_COMBAT(Local_56.f_28[0])) && !PED::IS_PED_FLEEING(Local_56.f_28[0]))
				{
					TASK::TASK_COMBAT_PED(Local_56.f_28[0], PLAYER::PLAYER_PED_ID(), 0, 16);
					__LIB_0__.func_122(&(Local_56.f_41[0]), 0);
				}
			}
		}
		bLocal_266 = false;
		return 1;
	}
	return 0;
}

void func_255()//Position - 0x283FB
{
	if (((!bLocal_279 && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID())) && __LIB_1__.func_197(Local_56.f_28[0])) && __LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), Local_56.f_28[0], 5f, 1))
	{
		if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || __LIB_42__.func_340(Local_56.f_28[0], 1, 1116471296, 1126825984, 0, 0, 0, 0)) || __LIB_42__.func_340(Local_56.f_28[1], 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			if (MISC::GET_GAME_TIMER() > iLocal_248)
			{
				if (!__LIB_0__.func_75())
				{
					if (iLocal_247 < 3)
					{
						if (__LIB_35__.func_901(&uLocal_58, "PAP4AUD", "PAP4_ATTACK", sLocal_246[iLocal_247], 7, 0, 0))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_56.f_28[0]);
							iLocal_247++;
							iLocal_248 = MISC::GET_GAME_TIMER() + 15000;
						}
					}
					else if (__LIB_35__.func_536(&uLocal_58, "PAP4AUD", "PAP4_BEG", 7, 0, 0, 0))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_56.f_28[0]);
						iLocal_248 = MISC::GET_GAME_TIMER() + 15000;
					}
				}
			}
		}
	}
}

void func_276()//Position - 0x28E9A
{
	if (__LIB_1__.func_197(Local_56.f_28[1]) && __LIB_1__.func_183(Local_56.f_35[1]))
	{
		if (PED::IS_PED_IN_VEHICLE(Local_56.f_28[1], Local_56.f_35[1], false))
		{
			TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_56.f_28[1], Local_56.f_35[1], sLocal_317, 786597, 0, 8, -1, -1f, false, 2f);
		}
	}
}

void func_277()//Position - 0x28EFE
{
	if ((__LIB_1__.func_183(Local_56.f_35[1]) && (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_56.f_35[1]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_56.f_35[1], PLAYER::PLAYER_PED_ID(), true))) && !bLocal_263)
	{
		if ((__LIB_1__.func_197(Local_56.f_28[1]) && !PED::IS_PED_FLEEING(Local_56.f_28[1])) && !PED::IS_PED_IN_COMBAT(Local_56.f_28[1], 0))
		{
			if (__LIB_0__.func_75())
			{
				__LIB_6__.func_771();
			}
			__LIB_35__.func_536(&uLocal_58, "PAP4AUD", "PAP4_VSTEAL", 8, 0, 0, 0);
			func_220(1);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_56.f_28[1], sLocal_252, sLocal_268, 3))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_265))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_56.f_28[1], -4f, true);
				}
				else
				{
					TASK::STOP_ANIM_TASK(Local_56.f_28[1], sLocal_252, sLocal_268, -8f);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_56.f_41[1]))
			{
				AUDIO::STOP_SOUND(iLocal_322);
				__LIB_0__.func_122(&(Local_56.f_41[1]), 0);
			}
			TASK::TASK_COMBAT_PED(Local_56.f_28[1], PLAYER::PLAYER_PED_ID(), 0, 16);
			bLocal_263 = true;
		}
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_56.f_35[1]);
		bLocal_266 = false;
		iLocal_304 = 3;
		__LIB_6__.func_771();
		if (__LIB_1__.func_197(Local_56.f_28[0]))
		{
			if ((!PED::IS_PED_IN_COMBAT(Local_56.f_28[0], 0) && !PED::IS_PED_IN_MELEE_COMBAT(Local_56.f_28[0])) && !PED::IS_PED_FLEEING(Local_56.f_28[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_56.f_28[0], sLocal_252, sLocal_253, 3))
				{
					TASK::STOP_ANIM_TASK(Local_56.f_28[0], sLocal_252, sLocal_253, -8f);
					TASK::TASK_SMART_FLEE_PED(Local_56.f_28[0], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
					__LIB_0__.func_122(&(Local_56.f_41[0]), 0);
				}
				else
				{
					TASK::TASK_COMBAT_PED(Local_56.f_28[0], PLAYER::PLAYER_PED_ID(), 0, 16);
					__LIB_0__.func_122(&(Local_56.f_41[0]), 0);
				}
			}
		}
	}
}

void func_278()//Position - 0x290E3
{
	if (((__LIB_1__.func_197(Local_56.f_28[0]) && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID())) && !FIRE::IS_ENTITY_ON_FIRE(Local_56.f_28[0])) && !PED::IS_PED_FLEEING(Local_56.f_28[0]))
	{
		if (__LIB_1__.func_183(Local_56.f_35[0]))
		{
			if (iLocal_224 == 2)
			{
				if (iLocal_295 == 0)
				{
					if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_56.f_35[0], false) || PED::IS_PED_BEING_JACKED(Local_56.f_28[0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_56.f_35[0], PLAYER::PLAYER_PED_ID(), true)) || __LIB_20__.func_625(Local_56.f_35[0]))
					{
						iLocal_295 = 1;
						iLocal_224 = 2;
					}
				}
				else
				{
					func_281();
				}
			}
			else if (iLocal_224 == 3)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_56.f_35[0], PLAYER::PLAYER_PED_ID(), true))
				{
					func_279();
				}
			}
		}
		else if (!PED::IS_PED_FLEEING(Local_56.f_28[0]))
		{
			func_220(1);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_56.f_28[0], sLocal_252, sLocal_253, 3))
			{
				TASK::STOP_ANIM_TASK(Local_56.f_28[0], sLocal_252, sLocal_253, -8f);
			}
			PED::SET_PED_FLEE_ATTRIBUTES(Local_56.f_28[0], 2, false);
			iLocal_264 = 1;
			TASK::TASK_SMART_FLEE_PED(Local_56.f_28[0], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
			__LIB_0__.func_122(&(Local_56.f_41[0]), 0);
			__LIB_6__.func_771();
			iLocal_304 = 3;
			bLocal_266 = false;
		}
	}
}

void func_279()//Position - 0x29241
{
	if (__LIB_1__.func_197(Local_56.f_28[0]))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Local_56.f_28[0], true))
		{
			if ((((!bLocal_261 && iLocal_260) && !func_280(Local_56.f_28[0])) && !FIRE::IS_ENTITY_ON_FIRE(Local_56.f_28[0])) && !PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_COMBAT(Local_56.f_28[0], 0) || PED::IS_PED_IN_MELEE_COMBAT(Local_56.f_28[0]))
				{
					TASK::CLEAR_PED_TASKS(Local_56.f_28[0]);
				}
				PED::SET_PED_FLEE_ATTRIBUTES(Local_56.f_28[0], 2, false);
				__LIB_0__.func_122(&(Local_56.f_41[0]), 0);
				iLocal_264 = 1;
				TASK::TASK_SMART_FLEE_PED(Local_56.f_28[0], PLAYER::PLAYER_PED_ID(), 400f, -1, true, false);
				__LIB_6__.func_771();
				iLocal_304 = 3;
				iLocal_260 = 0;
				bLocal_261 = true;
			}
		}
		else if ((((!bLocal_261 && iLocal_260) && !func_280(Local_56.f_28[0])) && !FIRE::IS_ENTITY_ON_FIRE(Local_56.f_28[0])) && !PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_COMBAT(Local_56.f_28[0], 0) || PED::IS_PED_IN_MELEE_COMBAT(Local_56.f_28[0]))
			{
				TASK::CLEAR_PED_TASKS(Local_56.f_28[0]);
			}
			PED::SET_PED_FLEE_ATTRIBUTES(Local_56.f_28[0], 2, true);
			TASK::TASK_SMART_FLEE_PED(Local_56.f_28[0], PLAYER::PLAYER_PED_ID(), 400f, -1, true, false);
			__LIB_0__.func_122(&(Local_56.f_41[0]), 0);
			__LIB_6__.func_771();
			iLocal_304 = 3;
			iLocal_260 = 0;
			bLocal_261 = true;
		}
		iLocal_235 = MISC::GET_GAME_TIMER() + 15000;
	}
}

int func_280(int iParam0)//Position - 0x293CC
{
	if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()) && __LIB_1__.func_197(iParam0))
	{
		if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_281()//Position - 0x29405
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (iLocal_295)
	{
		case 1:
			iLocal_305 = 0;
			bLocal_266 = false;
			iLocal_304 = 3;
			bVar0 = false;
			__LIB_6__.func_771();
			if ((__LIB_1__.func_183(Local_56.f_35[0]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_56.f_35[0], PLAYER::PLAYER_PED_ID(), true)) && __LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), Local_56.f_28[0], 5f, 1))
			{
				bVar0 = __LIB_35__.func_536(&uLocal_58, "PAP4AUD", "PAP4_CARSHOT", 7, 0, 0, 0);
			}
			else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_56.f_35[0], false) || __LIB_20__.func_625(Local_56.f_35[0]))
			{
				bVar0 = __LIB_35__.func_536(&uLocal_58, "PAP4AUD", "PAP4_STEAL", 7, 0, 0, 0);
			}
			else
			{
				bVar0 = __LIB_35__.func_901(&uLocal_58, "PAP4AUD", "PAP4_STEAL", "PAP4_STEAL_1", 7, 0, 0);
			}
			if (bVar0)
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_56.f_28[0], sLocal_252, sLocal_253, 3))
				{
					TASK::CLEAR_PED_TASKS(Local_56.f_28[0]);
					TASK::CLEAR_PED_SECONDARY_TASK(Local_56.f_28[0]);
					PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_56.f_28[0]);
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_56.f_35[0], false))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_297, 2f, 20000, 0.25f, 0, 40000f);
				}
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(Local_56.f_28[0], iVar1);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				__LIB_0__.func_122(&(Local_56.f_41[0]), 0);
				if (__LIB_1__.func_197(Local_56.f_28[1]) && !PED::IS_PED_FLEEING(Local_56.f_28[1]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_56.f_28[1], false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(Local_56.f_28[1], 0, 0);
					}
					else
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_56.f_28[1], Local_56.f_28[0], -1);
					}
				}
				if ((((__LIB_1__.func_197(Local_56.f_28[2]) && !PED::IS_PED_FLEEING(Local_56.f_28[2])) && !iLocal_262) && !iLocal_309) && !PED::IS_PED_RAGDOLL(Local_56.f_28[2]))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_56.f_35[0], PLAYER::PLAYER_PED_ID(), true))
					{
						TASK::TASK_SMART_FLEE_PED(Local_56.f_28[2], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Local_56.f_28[2], false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(Local_56.f_28[2], 0, 4416);
					}
					else
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_56.f_28[2], PLAYER::PLAYER_PED_ID(), -1);
					}
				}
				iLocal_296 = MISC::GET_GAME_TIMER() + 3000;
				if (HUD::DOES_BLIP_EXIST(iLocal_57))
				{
					HUD::SET_BLIP_SCALE(iLocal_57, 0.7f);
				}
				iLocal_295 = 2;
			}
			break;
		case 2:
			if (__LIB_8__.func_538(PLAYER::PLAYER_PED_ID(), Local_56.f_28[0]) > 20f)
			{
				iLocal_295 = 4;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_296)
			{
				if ((__LIB_1__.func_197(Local_56.f_28[0]) && !PED::IS_PED_IN_COMBAT(Local_56.f_28[0], 0)) && iLocal_260)
				{
					if (iLocal_299)
					{
						TASK::TASK_COMBAT_PED(Local_56.f_28[0], PLAYER::PLAYER_PED_ID(), 0, 16);
						__LIB_0__.func_122(&(Local_56.f_41[0]), 0);
						iLocal_295 = 3;
					}
					else if (__LIB_35__.func_536(&uLocal_58, "PAP4AUD", "PAP4_RETAL", 7, 0, 0, 0))
					{
						iLocal_299 = 1;
						TASK::TASK_COMBAT_PED(Local_56.f_28[0], PLAYER::PLAYER_PED_ID(), 0, 16);
						__LIB_0__.func_122(&(Local_56.f_41[0]), 0);
						iLocal_295 = 3;
					}
					if ((((__LIB_1__.func_197(Local_56.f_28[2]) && !PED::IS_PED_FLEEING(Local_56.f_28[2])) && !iLocal_262) && !iLocal_309) && !PED::IS_PED_RAGDOLL(Local_56.f_28[2]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_298, 2f, 20000, 0.25f, 0, 40000f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::CLOSE_SEQUENCE_TASK(iVar2);
						TASK::TASK_PERFORM_SEQUENCE(Local_56.f_28[2], iVar2);
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_57))
					{
						HUD::SET_BLIP_SCALE(iLocal_57, 0.7f);
					}
				}
				else if (iLocal_260 == 0 && !PED::IS_PED_IN_ANY_VEHICLE(Local_56.f_28[0], true))
				{
					if (!PED::IS_PED_FLEEING(Local_56.f_28[0]))
					{
						PED::SET_PED_FLEE_ATTRIBUTES(Local_56.f_28[0], 2, false);
						iLocal_264 = 1;
						TASK::TASK_SMART_FLEE_PED(Local_56.f_28[0], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
						__LIB_0__.func_122(&(Local_56.f_41[0]), 0);
						__LIB_6__.func_771();
						iLocal_304 = 3;
						iLocal_295 = 5;
					}
				}
			}
			func_284();
			break;
		case 3:
			if (__LIB_8__.func_538(PLAYER::PLAYER_PED_ID(), Local_56.f_28[0]) > 20f)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_297, 1f, 20000, 0.25f, 0, 40000f);
				if (__LIB_1__.func_197(Local_56.f_28[1]))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_56.f_28[1], -1);
				}
				else
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				}
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(Local_56.f_28[0], iVar3);
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				if (HUD::DOES_BLIP_EXIST(iLocal_57))
				{
					HUD::SET_BLIP_SCALE(iLocal_57, 0.7f);
				}
				iLocal_295 = 4;
			}
			func_284();
			break;
		case 4:
			func_282();
			func_284();
			break;
	}
}

void func_282()//Position - 0x298FC
{
	if (__LIB_8__.func_538(PLAYER::PLAYER_PED_ID(), Local_56.f_28[0]) < 10f)
	{
		if (iLocal_300 || !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_56.f_35[0], false))
		{
			func_283();
		}
		else if (__LIB_35__.func_536(&uLocal_58, "PAP4AUD", "PAP4_RETURN", 7, 0, 0, 0))
		{
			iLocal_300 = 1;
			func_283();
		}
	}
}

void func_283()//Position - 0x2995D
{
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_56.f_28[0], PLAYER::PLAYER_PED_ID(), -1);
	iLocal_296 = MISC::GET_GAME_TIMER() + 3000;
	if (HUD::DOES_BLIP_EXIST(iLocal_57))
	{
		HUD::SET_BLIP_SCALE(iLocal_57, 0.7f);
	}
	iLocal_295 = 2;
}

void func_284()//Position - 0x29997
{
	float fVar0;
	if (((__LIB_1__.func_197(Local_56.f_28[1]) && __LIB_1__.func_197(Local_56.f_28[0])) && !PED::IS_PED_FLEEING(Local_56.f_28[1])) && !PED::IS_PED_IN_COMBAT(Local_56.f_28[1], 0))
	{
		fVar0 = __LIB_8__.func_538(Local_56.f_28[1], Local_56.f_28[0]);
		if (fVar0 > 20f)
		{
			if (!__LIB_4__.func_465(Local_56.f_28[1], joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
			{
				TASK::TASK_GOTO_ENTITY_OFFSET(Local_56.f_28[1], Local_56.f_28[0], 20000, 0.5f, 0f, 2f, 2);
			}
		}
		else if (fVar0 < 10f)
		{
			if (!__LIB_4__.func_465(Local_56.f_28[1], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_56.f_28[1], Local_56.f_28[0], -1);
			}
		}
	}
}

void func_286()//Position - 0x29AD1
{
	switch (iLocal_225)
	{
		case 0:
			if (__LIB_1__.func_197(Local_56.f_28[0]) && __LIB_1__.func_197(Local_56.f_28[1]))
			{
				if (__LIB_35__.func_536(&uLocal_58, "PAP4AUD", "PAP4_TV_TALK", 7, 0, 0, 0))
				{
					iLocal_57 = __LIB_10__.func_711(Local_56.f_28[0], 1, 0, 5);
					__LIB_30__.func_192(&iLocal_57, "", "", &uLocal_229, &iLocal_230, 1, 0);
					PED::SET_PED_DIES_WHEN_INJURED(Local_56.f_28[0], true);
					iLocal_247 = 0;
					iLocal_234 = 0;
					bLocal_278 = true;
					bLocal_279 = true;
					iLocal_260 = 1;
					iLocal_304 = 0;
					iLocal_305 = 1;
					iLocal_306 = 0;
					iLocal_307 = 0;
					iLocal_248 = 0;
					iLocal_231 = 0;
					iLocal_251 = 0;
					iLocal_310 = 1;
					iLocal_264 = 0;
					iLocal_225 = 1;
				}
			}
			break;
		case 1:
			func_308(0, 0);
			func_307();
			func_276();
			func_278();
			func_305();
			func_252();
			func_277();
			func_296();
			func_295();
			func_255();
			func_234();
			func_294(0);
			func_291();
			__LIB_30__.func_191(&iLocal_57, "", "", &uLocal_229, iLocal_230, 0);
			func_228();
			func_225();
			func_290();
			func_287();
			func_222();
			func_219();
			func_211();
			break;
		case 2:
			func_216(0);
			__LIB_0__.func_523(&iLocal_57);
			__LIB_6__.func_833();
			break;
		case 3:
			iLocal_224 = 4;
			break;
	}
}

void func_287()//Position - 0x29C22
{
	if ((((__LIB_1__.func_197(Local_56.f_28[0]) && __LIB_1__.func_197(Local_56.f_28[1])) && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID())) && !bLocal_263) && ENTITY::DOES_ENTITY_EXIST(Local_56.f_41[1]))
	{
		if (PED::IS_PED_IN_COMBAT(Local_56.f_28[0], 0))
		{
			if (MISC::GET_GAME_TIMER() > iLocal_280)
			{
				func_288();
				iLocal_280 = MISC::GET_GAME_TIMER() + 10000;
			}
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_56.f_28[0], sLocal_252, sLocal_253, 3))
		{
			if (MISC::GET_GAME_TIMER() > iLocal_281)
			{
				if (iLocal_282)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_56.f_28[1], Local_56.f_28[0], -1);
					iLocal_282 = 0;
				}
				else
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_56.f_28[1], PLAYER::PLAYER_PED_ID(), -1);
					iLocal_282 = 1;
				}
				iLocal_281 = (MISC::GET_GAME_TIMER() + 4000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 20) * 100);
			}
		}
	}
}

void func_288()//Position - 0x29CFF
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	int iVar5;
	if ((((!bLocal_308 && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID())) && __LIB_1__.func_197(Local_56.f_28[1])) && __LIB_1__.func_197(Local_56.f_28[0])) && !PED::IS_PED_IN_COMBAT(Local_56.f_28[1], 0))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_56.f_28[0], 3f, 0f, 0f) };
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_56.f_28[0], -3f, 0f, 0f) };
		fVar2 = __LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Var0, 1);
		fVar3 = __LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Var1, 1);
		if (fVar2 < fVar3)
		{
			Var4 = { Var1 };
		}
		else
		{
			Var4 = { Var0 };
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar5);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var4, 3f, 20000, 0.25f, 0, 40000f);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_56.f_28[0], 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar5);
		TASK::TASK_PERFORM_SEQUENCE(Local_56.f_28[1], iVar5);
		TASK::CLEAR_SEQUENCE_TASK(&iVar5);
	}
}

void func_290()//Position - 0x29E2C
{
	if ((iLocal_260 == 0 && __LIB_1__.func_197(Local_56.f_28[0])) && iLocal_295 == 0)
	{
		if ((((((!TASK::IS_PED_GETTING_UP(Local_56.f_28[0]) && !PED::IS_PED_PRONE(Local_56.f_28[0])) && !PED::IS_PED_RAGDOLL(Local_56.f_28[0])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_56.f_28[0], true)) && !__LIB_4__.func_465(Local_56.f_28[0], joaat("SCRIPT_TASK_ENTER_VEHICLE"))) && !PED::IS_PED_FLEEING(Local_56.f_28[0])) || PED::IS_PED_BEING_STEALTH_KILLED(Local_56.f_28[0]))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_56.f_28[0], sLocal_252, sLocal_253, 3) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_252))
			{
				TASK::TASK_PLAY_ANIM(Local_56.f_28[0], sLocal_252, sLocal_253, 4f, -8f, -1, 57, 0f, false, false, false);
			}
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_56.f_28[0], sLocal_252, sLocal_253, 3))
		{
			TASK::STOP_ANIM_TASK(Local_56.f_28[0], sLocal_252, sLocal_253, -8f);
		}
	}
}

void func_291()//Position - 0x29F3F
{
	int iVar0;
	int iVar1;
	if (((iLocal_304 != 3 && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID())) && __LIB_1__.func_197(Local_56.f_28[0])) && __LIB_1__.func_197(Local_56.f_28[1]))
	{
		switch (iLocal_304)
		{
			case 0:
				if (iLocal_306 < 3)
				{
					if (func_293() && func_292())
					{
						iLocal_305 = 0;
						__LIB_6__.func_771();
						iLocal_304 = 1;
					}
				}
				else
				{
					iLocal_305 = 1;
					iLocal_304 = 3;
				}
				break;
			case 1:
				if (iLocal_307 < 4)
				{
					if (HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						iVar0 = 1;
					}
					else
					{
						iVar0 = 0;
					}
					if (__LIB_35__.func_901(&uLocal_58, "PAP4AUD", "PAP4_BLOCK", sLocal_302[iLocal_307], 7, iVar0, 0))
					{
						iLocal_307++;
						iLocal_304 = 2;
					}
				}
				else
				{
					iLocal_305 = 1;
					iLocal_304 = 3;
				}
				break;
			case 2:
				if (!__LIB_0__.func_75())
				{
					if (func_293())
					{
						iLocal_305 = 0;
						iLocal_304 = 1;
					}
					else if (iLocal_306 < 3)
					{
						if (HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							iVar1 = 1;
						}
						else
						{
							iVar1 = 0;
						}
						if (__LIB_35__.func_536(&uLocal_58, "PAP4AUD", sLocal_301[iLocal_306], 7, iVar1, 0, 0))
						{
							iLocal_305 = 1;
							iLocal_306++;
							iLocal_304 = 0;
						}
					}
					else
					{
						iLocal_305 = 1;
						iLocal_304 = 3;
					}
				}
				break;
			}
	}
}

int func_292()//Position - 0x2A07E
{
	if (__LIB_0__.func_75() && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() < iLocal_303[iLocal_306])
	{
		return 1;
	}
	return 0;
}

int func_293()//Position - 0x2A0A4
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_56.f_28[0], true) + Vector(1f, 0f, 0f) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(Local_56.f_28[1], true) - Vector(1f, 0f, 0f) };
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, 0.5f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_294(bool bParam0)//Position - 0x2A0F4
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	float fVar4;
	if (bLocal_266)
	{
		if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_265))
		{
			iLocal_265 = PED::CREATE_SYNCHRONIZED_SCENE(Local_276, Local_277, 2);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_265, false);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_265, false);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					sVar1 = sLocal_267;
					sVar2 = sLocal_268;
					sVar3 = sLocal_269;
					break;
				case 1:
					sVar1 = sLocal_270;
					sVar2 = sLocal_271;
					sVar3 = sLocal_272;
					break;
				default:
					sVar1 = sLocal_273;
					sVar2 = sLocal_274;
					sVar3 = sLocal_275;
					break;
			}
			if (bParam0)
			{
				fVar4 = 1000f;
			}
			else
			{
				fVar4 = 4f;
			}
			if (__LIB_1__.func_197(Local_56.f_28[0]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(Local_56.f_28[0], iLocal_265, sLocal_252, sVar1, fVar4, -4f, 1, 16, 1000f, 0);
			}
			if (__LIB_1__.func_197(Local_56.f_28[1]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(Local_56.f_28[1], iLocal_265, sLocal_252, sVar2, 1000f, -2f, 1, 16, 1000f, 0);
			}
			if (__LIB_1__.func_197(Local_56.f_28[2]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(Local_56.f_28[2], iLocal_265, sLocal_252, sVar3, fVar4, -4f, 1, 16, 1000f, 0);
			}
		}
	}
	else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_265))
	{
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_56.f_28[0], -4f, true);
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_56.f_28[1], -2f, true);
		if ((((((!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_56.f_28[1], sLocal_252, sLocal_268, 3) && !PED::IS_PED_FLEEING(Local_56.f_28[1])) && !__LIB_4__.func_465(Local_56.f_28[1], joaat("SCRIPT_TASK_SMART_FLEE_PED"))) && !bLocal_308) && !PED::IS_PED_IN_COMBAT(Local_56.f_28[1], 0)) && !PED::IS_PED_IN_MELEE_COMBAT(Local_56.f_28[1])) && ENTITY::DOES_ENTITY_EXIST(Local_56.f_41[1]))
		{
			TASK::TASK_PLAY_ANIM(Local_56.f_28[1], sLocal_252, sLocal_268, 1000f, -8f, -1, 57, 0f, false, false, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_56.f_28[1], false, false);
		}
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_56.f_28[2], -4f, true);
		PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_265, 1f);
	}
}

void func_295()//Position - 0x2A31B
{
	if (__LIB_1__.func_197(Local_56.f_28[0]) && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_COMBAT(Local_56.f_28[0], 0))
		{
			if (MISC::GET_GAME_TIMER() > iLocal_249)
			{
				if (__LIB_35__.func_536(&uLocal_58, "PAP4AUD", "PAP4_FIST", 7, 0, 0, 0))
				{
					iLocal_249 = MISC::GET_GAME_TIMER() + 5000;
				}
			}
		}
	}
}

void func_296()//Position - 0x2A376
{
	struct<6> Var0;
	char* sVar1;
	struct<6> Var2;
	char* sVar3;
	struct<6> Var4;
	char* sVar5;
	struct<6> Var6;
	char* sVar7;
	struct<6> Var8;
	char* sVar9;
	struct<6> Var10;
	char* sVar11;
	if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
	{
		if (bLocal_278)
		{
			if ((((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && func_304()) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_320, fLocal_321)) || !__LIB_1__.func_197(Local_56.f_28[1])) || !__LIB_1__.func_197(Local_56.f_28[2]))
			{
				iLocal_305 = 1;
				iLocal_304 = 3;
				iLocal_295 = 5;
				func_279();
				bLocal_266 = false;
				bLocal_278 = false;
				func_288();
				if (__LIB_0__.func_75())
				{
					Var0 = { __LIB_0__.func_390() };
					sVar1 = __LIB_1__.func_192(&Var0);
					if (!MISC::ARE_STRINGS_EQUAL(sVar1, "PAP4_THREAT"))
					{
						__LIB_6__.func_771();
					}
				}
				__LIB_0__.func_122(&(Local_56.f_41[0]), 0);
			}
			else if ((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_56.f_28[1], PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_56.f_28[2], PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_56.f_28[0], PLAYER::PLAYER_PED_ID(), true)) && __LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED")) && __LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) != joaat("OBJECT"))
			{
				func_279();
				iLocal_305 = 1;
				iLocal_304 = 3;
				iLocal_295 = 5;
				bLocal_266 = false;
				bLocal_278 = false;
				bLocal_279 = false;
				func_288();
				if (__LIB_0__.func_75())
				{
					Var2 = { __LIB_0__.func_390() };
					sVar3 = __LIB_1__.func_192(&Var2);
					if (!MISC::ARE_STRINGS_EQUAL(sVar3, "PAP4_THREAT"))
					{
						__LIB_6__.func_771();
					}
				}
			}
			else if ((((__LIB_41__.func_417(Local_56.f_28[0], 1126825984) && func_304()) && __LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED")) && __LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) != joaat("OBJECT")) || PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_4__.func_465(Local_56.f_28[0], joaat("SCRIPT_TASK_COMBAT")))
				{
					iLocal_305 = 1;
					iLocal_304 = 3;
					iLocal_295 = 5;
					bLocal_266 = false;
					bLocal_278 = false;
					func_279();
					func_288();
					if (__LIB_0__.func_75())
					{
						Var4 = { __LIB_0__.func_390() };
						sVar5 = __LIB_1__.func_192(&Var4);
						if (!MISC::ARE_STRINGS_EQUAL(sVar5, "PAP4_THREAT"))
						{
							__LIB_6__.func_771();
						}
					}
					__LIB_0__.func_122(&(Local_56.f_41[0]), 0);
				}
				else
				{
					iLocal_305 = 1;
					iLocal_304 = 3;
					iLocal_295 = 5;
					bLocal_266 = false;
					bLocal_278 = false;
					func_300();
					func_288();
					if (__LIB_0__.func_75())
					{
						Var6 = { __LIB_0__.func_390() };
						sVar7 = __LIB_1__.func_192(&Var6);
						if (!MISC::ARE_STRINGS_EQUAL(sVar7, "PAP4_THREAT"))
						{
							__LIB_6__.func_771();
						}
					}
					__LIB_0__.func_122(&(Local_56.f_41[0]), 0);
				}
			}
			else if (((((__LIB_41__.func_417(Local_56.f_28[0], 1126825984) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_56.f_28[1], PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_56.f_28[2], PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_56.f_28[0], PLAYER::PLAYER_PED_ID(), true)) || iLocal_262) && (__LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_UNARMED") || __LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) == joaat("OBJECT")))
			{
				if (__LIB_1__.func_197(Local_56.f_28[0]) && !PED::IS_PED_IN_COMBAT(Local_56.f_28[0], 0))
				{
					TASK::TASK_COMBAT_PED(Local_56.f_28[0], PLAYER::PLAYER_PED_ID(), 0, 16);
					__LIB_0__.func_122(&(Local_56.f_41[0]), 0);
					bLocal_266 = false;
					iLocal_249 = MISC::GET_GAME_TIMER();
					__LIB_6__.func_771();
					__LIB_0__.func_122(&(Local_56.f_41[0]), 0);
				}
			}
		}
		else
		{
			if (bLocal_279)
			{
				__LIB_6__.func_771();
				if (__LIB_1__.func_197(Local_56.f_28[0]) && !func_280(Local_56.f_28[0]))
				{
					if (HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (__LIB_35__.func_536(&uLocal_58, "PAP4AUD", "PAP4_THREAT", 7, 1, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 2f, 0);
							bLocal_279 = false;
						}
					}
					else if (__LIB_35__.func_536(&uLocal_58, "PAP4AUD", "PAP4_THREAT", 7, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 2f, 0);
						bLocal_279 = false;
					}
				}
			}
			else if ((__LIB_1__.func_197(Local_56.f_28[0]) && !FIRE::IS_ENTITY_ON_FIRE(Local_56.f_28[0])) && (((((((ENTITY::GET_ENTITY_HEALTH(Local_56.f_28[0]) < 150 || (__LIB_32__.func_572(Local_56.f_28[0], 0, 0, 0, 0) && func_304())) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_56.f_28[0], PLAYER::PLAYER_PED_ID(), true) && __LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_STUNGUN"))) || !__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), Local_56.f_28[0], 20f, 1)) || (__LIB_1__.func_197(Local_56.f_28[1]) && PED::IS_PED_IN_COMBAT(Local_56.f_28[1], 0))) || (__LIB_1__.func_197(Local_56.f_28[1]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_56.f_28[1], PLAYER::PLAYER_PED_ID(), true))) || (__LIB_1__.func_197(Local_56.f_28[2]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_56.f_28[2], PLAYER::PLAYER_PED_ID(), true))) || iLocal_259))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_56.f_28[0], sLocal_252, sLocal_253, 3))
				{
					iLocal_259 = 1;
				}
				switch (iLocal_258)
				{
					case 0:
						if (iLocal_259 == 0)
						{
							iLocal_258++;
						}
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_56.f_28[0], sLocal_254, "flinch_additive_a", 3))
						{
							TASK::TASK_PLAY_ANIM(Local_56.f_28[0], sLocal_254, "flinch_additive_a", 4f, -8f, -1, 272, 0f, false, false, false);
						}
						else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_56.f_28[0], sLocal_254, "flinch_additive_a") > 0.7f)
						{
							TASK::STOP_ANIM_TASK(Local_56.f_28[0], sLocal_254, "flinch_additive_a", -8f);
							iLocal_258++;
						}
						break;
					case 1:
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_56.f_28[0], false))
						{
							__LIB_0__.func_122(&(Local_56.f_41[0]), 0);
							iLocal_260 = 0;
							if (!PED::IS_PED_FLEEING(Local_56.f_28[0]))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(Local_56.f_28[0]);
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_56.f_28[0], sLocal_252, sLocal_253, 3))
								{
									TASK::STOP_ANIM_TASK(Local_56.f_28[0], sLocal_252, sLocal_253, -8f);
								}
								__LIB_0__.func_122(&(Local_56.f_41[0]), 0);
								func_220(1);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_56.f_28[0], 2, false);
								iLocal_264 = 1;
								TASK::TASK_SMART_FLEE_PED(Local_56.f_28[0], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
								__LIB_6__.func_771();
								iLocal_304 = 3;
								iLocal_295 = 5;
							}
						}
						iLocal_258++;
						break;
					}
			}
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_56.f_28[0]);
		}
		if (__LIB_1__.func_197(Local_56.f_28[1]))
		{
			if (((((((((__LIB_32__.func_572(Local_56.f_28[1], 0, 0, 0, 0) && func_304()) || ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_56.f_28[1], PLAYER::PLAYER_PED_ID(), true) && __LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED")) && __LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) != joaat("OBJECT"))) || ((__LIB_41__.func_417(Local_56.f_28[1], 1126825984) && __LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED")) && __LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) != joaat("OBJECT"))) || !__LIB_1__.func_183(Local_56.f_35[1])) || PED::IS_PED_RAGDOLL(Local_56.f_28[1])) || func_298(Local_56.f_28[1])) || func_280(Local_56.f_28[0])) || func_280(Local_56.f_28[2])) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_320, fLocal_321))
			{
				if (!PED::IS_PED_FLEEING(Local_56.f_28[1]) && !PED::IS_PED_IN_ANY_VEHICLE(Local_56.f_28[1], false))
				{
					if (__LIB_0__.func_75())
					{
						Var8 = { __LIB_0__.func_390() };
						sVar9 = __LIB_1__.func_192(&Var8);
						if (!MISC::ARE_STRINGS_EQUAL(sVar9, "PAP4_THREAT") && !MISC::ARE_STRINGS_EQUAL(sVar9, "PAP4_ATTACK"))
						{
							__LIB_6__.func_771();
						}
					}
					__LIB_35__.func_536(&uLocal_58, "PAP4AUD", "PAP4_CAMFLEE", 7, 0, 0, 0);
					func_297();
					iLocal_262 = 1;
					func_279();
				}
			}
		}
		if (__LIB_1__.func_197(Local_56.f_28[2]) && !iLocal_309)
		{
			if (((((((((((__LIB_42__.func_340(Local_56.f_28[2], 1, 1116471296, 1126825984, 0, 0, 0, 0) && func_304()) || (__LIB_42__.func_340(Local_56.f_28[0], 1, 1116471296, 1126825984, 0, 0, 0, 0) && func_304())) || (__LIB_42__.func_340(Local_56.f_28[1], 1, 1116471296, 1126825984, 0, 0, 0, 0) && func_304())) || func_298(Local_56.f_28[2])) || func_298(Local_56.f_28[0])) || func_298(Local_56.f_28[1])) || PED::IS_PED_RAGDOLL(Local_56.f_28[2])) || !__LIB_1__.func_183(Local_56.f_35[1])) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_320, fLocal_321)) || func_280(Local_56.f_28[0])) || func_280(Local_56.f_28[1]))
			{
				if (!PED::IS_PED_FLEEING(Local_56.f_28[2]) && !PED::IS_PED_IN_ANY_VEHICLE(Local_56.f_28[2], false))
				{
					if (__LIB_0__.func_75())
					{
						Var10 = { __LIB_0__.func_390() };
						sVar11 = __LIB_1__.func_192(&Var10);
						if (!MISC::ARE_STRINGS_EQUAL(sVar11, "PAP4_THREAT") && !MISC::ARE_STRINGS_EQUAL(sVar11, "PAP4_ATTACK"))
						{
							__LIB_6__.func_771();
						}
					}
					func_220(1);
					iLocal_309 = 1;
					bLocal_266 = false;
					iLocal_262 = 1;
					if (__LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED"))
					{
						func_279();
					}
					iLocal_304 = 3;
				}
			}
		}
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			func_279();
			func_297();
		}
	}
}

void func_297()//Position - 0x2ACF3
{
	if (__LIB_1__.func_197(Local_56.f_28[1]))
	{
		if (PED::IS_PED_IN_GROUP(Local_56.f_28[1]))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_56.f_28[1]);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_56.f_28[1], sLocal_252, sLocal_268, 3))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_265))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_56.f_28[1], -4f, true);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_265, 1f);
			}
			else
			{
				TASK::STOP_ANIM_TASK(Local_56.f_28[1], sLocal_252, sLocal_268, -8f);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_56.f_41[1]))
		{
			AUDIO::STOP_SOUND(iLocal_322);
			__LIB_0__.func_122(&(Local_56.f_41[1]), 0);
		}
		bLocal_308 = true;
		bLocal_266 = false;
		iLocal_304 = 3;
	}
}

int func_298(int iParam0)//Position - 0x2ADA1
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (__LIB_1__.func_183(iVar0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iVar0) && !__LIB_0__.func_455(iVar0))
			{
				TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
				return 1;
			}
		}
	}
	return 0;
}

void func_300()//Position - 0x2AE2F
{
	if (__LIB_1__.func_197(Local_56.f_28[0]))
	{
		if ((((((!PED::IS_PED_IN_ANY_VEHICLE(Local_56.f_28[0], true) && iLocal_260) && !bLocal_261) && !func_280(Local_56.f_28[0])) && !FIRE::IS_ENTITY_ON_FIRE(Local_56.f_28[0])) && !PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID())) && iLocal_295 == 0)
		{
			if (PED::IS_PED_IN_COMBAT(Local_56.f_28[0], 0) || PED::IS_PED_IN_MELEE_COMBAT(Local_56.f_28[0]))
			{
				TASK::CLEAR_PED_TASKS(Local_56.f_28[0]);
			}
			if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_252))
			{
				TASK::TASK_PLAY_ANIM(Local_56.f_28[0], sLocal_252, sLocal_253, 4f, -8f, -1, 57, 0f, false, false, false);
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_56.f_28[0], PLAYER::PLAYER_PED_ID(), -1);
			iLocal_260 = 0;
		}
	}
	iLocal_235 = MISC::GET_GAME_TIMER() + 15000;
}

int func_304()//Position - 0x2AF53
{
	if (__LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_STICKYBOMB"))
	{
		if ((__LIB_39__.func_502(Local_56.f_28[0], 1126825984) || __LIB_39__.func_502(Local_56.f_28[1], 1126825984)) || __LIB_39__.func_502(Local_56.f_28[2], 1126825984))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_305()//Position - 0x2AFB6
{
	if ((((((bLocal_278 && iLocal_260) && iLocal_305) && __LIB_1__.func_183(Local_56.f_35[0])) && __LIB_1__.func_197(Local_56.f_28[0])) && !__LIB_0__.func_75()) && __LIB_4__.func_465(Local_56.f_28[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_231)
		{
			func_306();
			iLocal_231 = MISC::GET_GAME_TIMER() + 1000;
		}
	}
}

int func_306()//Position - 0x2B02C
{
	bool bVar0;
	bool bVar1;
	bVar0 = VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(Local_56.f_28[0], Local_56.f_35[0], -1, false, false);
	bVar1 = VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(Local_56.f_28[0], Local_56.f_35[0], 0, false, false);
	if (!bVar0 && !bVar1)
	{
		iLocal_305 = 0;
		iLocal_304 = 3;
		bLocal_266 = false;
		if (((__LIB_1__.func_197(Local_56.f_28[0]) && !PED::IS_PED_IN_COMBAT(Local_56.f_28[0], 0)) && !PED::IS_PED_IN_MELEE_COMBAT(Local_56.f_28[0])) && !PED::IS_PED_FLEEING(Local_56.f_28[0]))
		{
			TASK::TASK_COMBAT_PED(Local_56.f_28[0], PLAYER::PLAYER_PED_ID(), 0, 16);
			__LIB_0__.func_122(&(Local_56.f_41[0]), 0);
		}
		if (((__LIB_1__.func_197(Local_56.f_28[1]) && !PED::IS_PED_IN_COMBAT(Local_56.f_28[1], 0)) && !PED::IS_PED_IN_MELEE_COMBAT(Local_56.f_28[1])) && !PED::IS_PED_FLEEING(Local_56.f_28[1]))
		{
			TASK::TASK_COMBAT_PED(Local_56.f_28[1], PLAYER::PLAYER_PED_ID(), 0, 16);
			__LIB_0__.func_122(&(Local_56.f_41[1]), 0);
		}
		if (((__LIB_1__.func_197(Local_56.f_28[2]) && !PED::IS_PED_IN_COMBAT(Local_56.f_28[2], 0)) && !PED::IS_PED_IN_MELEE_COMBAT(Local_56.f_28[2])) && !PED::IS_PED_FLEEING(Local_56.f_28[2]))
		{
			TASK::TASK_SMART_FLEE_PED(Local_56.f_28[2], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
		}
		return 1;
	}
	return 0;
}

void func_307()//Position - 0x2B19A
{
	if (__LIB_1__.func_197(Local_56.f_28[0]))
	{
		if (__LIB_1__.func_183(Local_56.f_35[0]) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_316))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(Local_56.f_28[0], Local_56.f_35[0]) && !__LIB_4__.func_465(Local_56.f_28[0], joaat("SCRIPT_TASK_VEHICLE_MISSION")))
			{
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_313, Local_314, fLocal_315, false, true, true);
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_56.f_28[0], Local_56.f_35[0], sLocal_316, 786597, 0, 8, -1, -1f, false, 2f);
				if (HUD::DOES_BLIP_EXIST(iLocal_57))
				{
					HUD::SET_BLIP_SCALE(iLocal_57, 1f);
				}
				func_216(0);
			}
			else if (PED::IS_PED_IN_VEHICLE(Local_56.f_28[0], Local_56.f_35[0], true))
			{
				__LIB_0__.func_123(&(Local_56.f_41[0]));
			}
		}
		if (__LIB_1__.func_183(Local_56.f_35[1]))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(Local_56.f_28[0], Local_56.f_35[1]))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_57))
				{
					HUD::SET_BLIP_SCALE(iLocal_57, 1f);
				}
				func_216(0);
			}
		}
	}
}

void func_308(bool bParam0, bool bParam1)//Position - 0x2B2A2
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if ((((((__LIB_1__.func_183(Local_56.f_35[0]) && __LIB_1__.func_197(Local_56.f_28[0])) && bLocal_278) && iLocal_260) && !PED::IS_PED_IN_COMBAT(Local_56.f_28[0], 0)) && !PED::IS_PED_FLEEING(Local_56.f_28[0])) && !iLocal_264)
	{
		if (iLocal_251 && MISC::GET_GAME_TIMER() > iLocal_250)
		{
			if (iLocal_295 == 0)
			{
				func_309();
			}
		}
		else if ((bParam0 || !__LIB_0__.func_75()) || !__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), Local_56.f_28[0], 30f, 1))
		{
			if (((((iLocal_305 && !__LIB_4__.func_465(Local_56.f_28[0], joaat("SCRIPT_TASK_ENTER_VEHICLE"))) && !__LIB_4__.func_465(Local_56.f_28[0], joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT"))) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_56.f_35[0], -1, false)) && !PED::IS_PED_FLEEING(Local_56.f_28[0])) && !iLocal_264)
			{
				if (!func_306() && !func_252())
				{
					bVar0 = false;
					if (!bParam0)
					{
						if (__LIB_0__.func_75())
						{
							__LIB_6__.func_833();
						}
						iVar1 = 0;
						if (!__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), Local_56.f_28[0], 30f, 1))
						{
							iVar1 = 1;
						}
						if (iLocal_307 > 1)
						{
							bVar0 = __LIB_35__.func_536(&uLocal_58, "PAP4AUD", "PAP4_LEAVE2", 7, iVar1, 0, 0);
						}
						else
						{
							bVar0 = __LIB_35__.func_536(&uLocal_58, "PAP4AUD", "PAP4_LEAVE", 7, iVar1, 0, 0);
						}
					}
					if (bVar0 || bParam0)
					{
						func_220(1);
						PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_56.f_28[0], sLocal_256);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_56.f_28[0], false, false);
						if (bParam1)
						{
							TASK::TASK_ENTER_VEHICLE(Local_56.f_28[0], Local_56.f_35[0], 20000, -1, 2f, 1, 0);
						}
						else
						{
							TASK::TASK_ENTER_VEHICLE(Local_56.f_28[0], Local_56.f_35[0], 20000, -1, 1f, 1, 0);
						}
						if (__LIB_1__.func_197(Local_56.f_28[1]))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_56.f_28[1], Local_56.f_28[0], -1);
						}
						if ((((__LIB_1__.func_197(Local_56.f_28[2]) && !PED::IS_PED_FLEEING(Local_56.f_28[2])) && !iLocal_262) && !iLocal_309) && !PED::IS_PED_RAGDOLL(Local_56.f_28[2]))
						{
							if (bParam0 || (__LIB_1__.func_183(Local_56.f_35[1]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_56.f_35[1], true)))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_56.f_35[0]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_56.f_35[0], PLAYER::PLAYER_PED_ID(), true))
								{
									TASK::TASK_SMART_FLEE_PED(Local_56.f_28[2], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
								}
								else if (__LIB_1__.func_183(Local_56.f_35[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iVar2);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1500);
									TASK::TASK_ENTER_VEHICLE(0, Local_56.f_35[0], 20000, 0, 2f, 1, 0);
									TASK::CLOSE_SEQUENCE_TASK(iVar2);
									TASK::TASK_PERFORM_SEQUENCE(Local_56.f_28[2], iVar2);
									TASK::CLEAR_SEQUENCE_TASK(&iVar2);
								}
								else
								{
									TASK::TASK_SMART_FLEE_PED(Local_56.f_28[2], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
								}
							}
							else if (__LIB_1__.func_183(Local_56.f_35[1]) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_56.f_35[1], 0, false))
							{
								TASK::TASK_ENTER_VEHICLE(Local_56.f_28[2], Local_56.f_35[1], 20000, 0, 1f, 1, 0);
							}
						}
						iLocal_250 = MISC::GET_GAME_TIMER() + 1500;
						iLocal_251 = 1;
						iLocal_304 = 3;
						bLocal_266 = false;
					}
				}
			}
		}
	}
}

void func_309()//Position - 0x2B616
{
	int iVar0;
	if (__LIB_1__.func_197(Local_56.f_28[1]))
	{
		if ((((!__LIB_4__.func_465(Local_56.f_28[1], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) && !PED::IS_PED_FLEEING(Local_56.f_28[1])) && !PED::IS_PED_IN_COMBAT(Local_56.f_28[1], 0)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_317)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_56.f_28[1], false))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (__LIB_1__.func_197(Local_56.f_28[0]))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_56.f_28[0], 6000);
			}
			if (__LIB_1__.func_183(Local_56.f_35[1]) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_56.f_35[1], -1, false))
			{
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_313, Local_314, fLocal_315, false, true, true);
				TASK::TASK_ENTER_VEHICLE(0, Local_56.f_35[1], 20000, -1, 2f, 1, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_56.f_28[1], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
	}
}

void func_312()//Position - 0x2B802
{
	switch (iLocal_225)
	{
		case 0:
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
			if (MISC::GET_GAME_TIMER() > iLocal_240)
			{
				__LIB_26__.func_478("pap_4_rcm", 0);
				if (__LIB_18__.func_170(1, 1093140480, 0))
				{
					if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_241, Local_242, fLocal_243, false, true, 0))
						{
							iLocal_244 = 1;
						}
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 0);
					}
					if (__LIB_1__.func_197(Local_56.f_28[0]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_56.f_28[0], "Beverley", 0, 0, 0);
					}
					if (__LIB_1__.func_197(Local_56.f_28[1]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_56.f_28[1], "film_guy", 0, 0, 0);
					}
					if (__LIB_1__.func_197(Local_56.f_28[2]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_56.f_28[2], "makeup_artist", 0, 0, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_56.f_41[0]))
					{
						ENTITY::DETACH_ENTITY(Local_56.f_41[0], false, true);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_56.f_41[0], "Beverlys_camera", 0, 0, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_56.f_41[1]))
					{
						ENTITY::DETACH_ENTITY(Local_56.f_41[1], false, true);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_56.f_41[1], "Video_camera_forMan", 0, 0, 0);
					}
					__LIB_26__.func_252();
					RECORDING::REPLAY_START_EVENT(1);
					CUTSCENE::START_CUTSCENE(0);
					SYSTEM::WAIT(0);
					if (iLocal_244)
					{
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
						iLocal_245 = -1;
					}
					__LIB_0__.func_84(500, 0);
					if (__LIB_1__.func_183(Local_56.f_35[0]))
					{
						__LIB_10__.func_701(Local_56.f_35[0], Local_286, fLocal_291, 0, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_56.f_35[0], 5f);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_56.f_35[0], 1);
					}
					if (__LIB_1__.func_183(Local_56.f_35[1]))
					{
						__LIB_10__.func_701(Local_56.f_35[1], Local_287, fLocal_292, 0, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_56.f_35[1], 5f);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_56.f_35[1], 1);
					}
					__LIB_32__.func_742(Local_226, Local_227, fLocal_228, -500.71f, 241.83f, 82.46f, 262.59f, 1, 1, 1, 0, 0);
					func_334(-484.2f, 229.68f, 82.21f, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1);
					MISC::CLEAR_AREA_OF_PEDS(-483.50372f, 231.05586f, 82.1456f, 15f, 0);
					MISC::CLEAR_AREA_OF_OBJECTS(-483.50372f, 231.05586f, 82.1456f, 15f, 0);
					iLocal_327 = 1;
					iLocal_225 = 1;
				}
			}
			else
			{
				__LIB_24__.func_930();
			}
			break;
		case 1:
			if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0f, true, false);
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
				}
				else if (iLocal_327)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					iLocal_327 = 0;
				}
			}
			if ((((__LIB_1__.func_197(Local_56.f_28[0]) && __LIB_1__.func_197(Local_56.f_28[1])) && __LIB_1__.func_197(Local_56.f_28[2])) && ENTITY::DOES_ENTITY_EXIST(Local_56.f_41[0])) && ENTITY::DOES_ENTITY_EXIST(Local_56.f_41[1]))
			{
				if ((((CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Beverley", 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("film_guy", 0)) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("makeup_artist", 0)) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Beverlys_camera", 0)) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Video_camera_forMan", 0))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_56.f_41[0], Local_56.f_28[0], PED::GET_PED_BONE_INDEX(Local_56.f_28[0], 28422), Local_236, Local_237, false, false, false, false, 2, true, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_56.f_41[1], Local_56.f_28[1], PED::GET_PED_BONE_INDEX(Local_56.f_28[1], 57005), Local_238, Local_239, false, false, false, false, 2, true, 0);
					func_322();
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
				if (iLocal_244 && MISC::GET_GAME_TIMER() > iLocal_245)
				{
					if (iLocal_245 < 0)
					{
						iLocal_245 = MISC::GET_GAME_TIMER() + 4000;
					}
					else
					{
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
						iLocal_244 = 0;
					}
				}
			}
			else
			{
				iLocal_225 = 2;
			}
			break;
		case 3:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::STOP_CUTSCENE(false);
			}
			else
			{
				iLocal_225 = 2;
			}
			break;
		case 2:
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
			if ((__LIB_1__.func_197(Local_56.f_28[0]) && __LIB_1__.func_197(Local_56.f_28[1])) && __LIB_1__.func_197(Local_56.f_28[2]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_56.f_28[0], true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_56.f_28[1], true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_56.f_28[2], true);
				PED::SET_PED_CONFIG_FLAG(Local_56.f_28[0], 177, true);
				PED::SET_PED_CONFIG_FLAG(Local_56.f_28[0], 214, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_56.f_28[0], true, 1);
				PED::SET_PED_LOD_MULTIPLIER(Local_56.f_28[0], 1.5f);
				PED::SET_PED_LOD_MULTIPLIER(Local_56.f_28[1], 1.5f);
				PED::SET_PED_LOD_MULTIPLIER(Local_56.f_28[2], 1.5f);
				if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					}
				}
			}
			bLocal_308 = false;
			iLocal_309 = 0;
			__LIB_39__.func_503(1, 1, 1, 1);
			__LIB_10__.func_700(&Local_56, 0, 1);
			func_216(0);
			break;
	}
}

void func_322()//Position - 0x2C07F
{
	iLocal_265 = PED::CREATE_SYNCHRONIZED_SCENE(Local_276, Local_277, 2);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_265, false);
	PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_265, false);
	if (__LIB_1__.func_197(Local_56.f_28[0]))
	{
		TASK::TASK_SYNCHRONIZED_SCENE(Local_56.f_28[0], iLocal_265, sLocal_252, sLocal_267, 1000f, -4f, 1, 16, 1000f, 0);
	}
	if (__LIB_1__.func_197(Local_56.f_28[1]))
	{
		TASK::TASK_SYNCHRONIZED_SCENE(Local_56.f_28[1], iLocal_265, sLocal_252, sLocal_268, 1000f, -4f, 1, 16, 1000f, 0);
	}
	if (__LIB_1__.func_197(Local_56.f_28[2]))
	{
		TASK::TASK_SYNCHRONIZED_SCENE(Local_56.f_28[2], iLocal_265, sLocal_252, sLocal_269, 1000f, -4f, 1, 16, 1000f, 0);
	}
	bLocal_266 = true;
}

void func_334(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x2C573
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_26__.func_258(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_18__.func_173())
			{
				case 0:
					if (func_150(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_36(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_150(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_36(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_150(PLAYER::PLAYER_PED_ID(), 8, 1) || func_150(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_36(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_150(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_36(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam4 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(__LIB_0__.func_85(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
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
			iLocal_49 = 0;
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_49 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__.func_84(500, 0);
		}
	}
}

void func_351()//Position - 0x2D2E7
{
	switch (iLocal_225)
	{
		case 0:
			HUD::REQUEST_ADDITIONAL_TEXT("PAP4", 0);
			STREAMING::REQUEST_ANIM_DICT(sLocal_252);
			STREAMING::REQUEST_ANIM_DICT(sLocal_255);
			STREAMING::REQUEST_ANIM_DICT(sLocal_254);
			STREAMING::REQUEST_CLIP_SET(sLocal_256);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_316);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_317);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_0__.func_203(&uLocal_58, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				}
				func_363();
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_313, Local_314, fLocal_315, false, false, true);
				MISC::ACTION_MANAGER_ENABLE_ACTION(MISC::GET_HASH_KEY("ACT_takedown_a"), false);
				MISC::ACTION_MANAGER_ENABLE_ACTION(MISC::GET_HASH_KEY("ACT_takedown_heavy"), false);
				MISC::ACTION_MANAGER_ENABLE_ACTION(MISC::GET_HASH_KEY("ACT_armed_takedown"), false);
				sLocal_246[0] = "PAP4_ATTACK_1";
				sLocal_246[1] = "PAP4_ATTACK_2";
				sLocal_246[2] = "PAP4_ATTACK_3";
				sLocal_233[0] = "PAP4_CAMERA_1";
				sLocal_233[1] = "PAP4_CAMERA_2";
				sLocal_233[2] = "PAP4_CAMERA_3";
				sLocal_233[3] = "PAP4_CAMERA_4";
				sLocal_301[0] = "PAP4_TV_2";
				sLocal_301[1] = "PAP4_TV_3";
				sLocal_301[2] = "PAP4_TV_4";
				sLocal_302[0] = "PAP4_BLOCK_1";
				sLocal_302[1] = "PAP4_BLOCK_2";
				sLocal_302[2] = "PAP4_BLOCK_3";
				sLocal_302[3] = "PAP4_BLOCK_4";
				iLocal_303[0] = 17;
				iLocal_303[1] = 8;
				iLocal_303[2] = 5;
				iLocal_303[3] = 2;
				func_220(0);
				iLocal_322 = AUDIO::GET_SOUND_ID();
				if (ENTITY::DOES_ENTITY_EXIST(Local_56.f_41[1]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_322, sLocal_324, Local_56.f_41[1], sLocal_323, false, 0);
				}
				iLocal_225 = 2;
			}
			break;
		case 2:
			if (__LIB_0__.func_294())
			{
				__LIB_0__.func_370(Local_293, fLocal_294, 1, 0);
				func_352();
			}
			else
			{
				if (__LIB_0__.func_2(0))
				{
					CUTSCENE::REQUEST_CUTSCENE("pap_4_rcm", 8);
					while (!__LIB_0__.func_90())
					{
						SYSTEM::WAIT(0);
					}
					func_363();
				}
				if ((CAM::IS_SCREEN_FADED_IN() && __LIB_0__.func_121(Local_56.f_28[0])) && __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_56.f_28[0], 1) > 6f)
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(Local_56.f_28[0], 0f, 0f, 0f, true, -1, 3000, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.45f);
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.01f);
					CAM::SET_GAMEPLAY_HINT_FOV(30f);
					CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_56.f_28[0], -1, 0, 2);
					iLocal_240 = MISC::GET_GAME_TIMER() + 3000;
				}
				else
				{
					iLocal_240 = -1;
				}
				func_216(0);
			}
			break;
	}
}

void func_352()//Position - 0x2D555
{
	func_360(1, 1);
	iLocal_224 = 1;
	iLocal_225 = 2;
	if (__LIB_1__.func_197(Local_56.f_28[1]))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_56.f_28[1], Local_284, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_56.f_28[1], fLocal_289);
	}
	if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()) && !__LIB_0__.func_295())
	{
		__LIB_10__.func_698(PLAYER::PLAYER_PED_ID(), Local_293);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_294);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (__LIB_1__.func_183(Local_56.f_35[0]))
	{
		__LIB_10__.func_701(Local_56.f_35[0], Local_286, fLocal_291, 0, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_56.f_35[0], 5f);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_56.f_35[0], 1);
	}
	if (__LIB_1__.func_183(Local_56.f_35[1]))
	{
		__LIB_10__.func_701(Local_56.f_35[1], Local_287, fLocal_292, 0, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_56.f_35[1], 5f);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_56.f_35[1], 1);
	}
	MISC::CLEAR_AREA_OF_VEHICLES(Local_283, 50f, false, false, false, false, false, false, 0);
	func_322();
	if (__LIB_0__.func_295())
	{
		__LIB_6__.func_775(0, -1, 1);
	}
	else
	{
		__LIB_20__.func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1112014848, 12, 5000, 0, 0);
	}
	__LIB_41__.func_440(1, 1, 1);
}

void func_360(bool bParam0, bool bParam1)//Position - 0x2D890
{
	if (bParam0)
	{
		__LIB_40__.func_689(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_334(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_363()//Position - 0x2D9B7
{
	if (__LIB_1__.func_197(Local_56.f_28[0]))
	{
		PED::SET_PED_MONEY(Local_56.f_28[0], 2000);
		PED::SET_PED_DIES_WHEN_INJURED(Local_56.f_28[0], true);
		__LIB_0__.func_203(&uLocal_58, 3, Local_56.f_28[0], "BEVERLY", 0, 1);
	}
	if (__LIB_1__.func_197(Local_56.f_28[1]))
	{
		__LIB_0__.func_203(&uLocal_58, 4, Local_56.f_28[1], "Pap4Cameraman", 0, 1);
	}
}

int func_389(var uParam0)//Position - 0x2E8B5
{
	int iVar0[7];
	char* sVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	sVar1 = "rcmpaparazzo_4";
	iVar0[0] = uLocal_53;
	iVar0[1] = joaat("issi2");
	iVar0[2] = joaat("rumpo");
	iVar0[3] = joaat("S_M_Y_Grip_01");
	iVar0[4] = joaat("A_F_Y_BevHills_02");
	iVar0[5] = joaat("prop_pap_camera_01");
	iVar0[6] = joaat("prop_v_cam_01");
	switch (iLocal_52)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -476.36862f, 229.57437f, 82.07077f };
			uParam0->f_17[1 /*3*/] = { -513.6883f, 234.2165f, 87.28937f };
			uParam0->f_24 = 25f;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "PAP_4_RCM", 24);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar2]);
				iVar2++;
			}
			STREAMING::REQUEST_ANIM_DICT(sVar1);
			iLocal_52 = 1;
			break;
		case 1:
			if (!__LIB_10__.func_716(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
			{
				return 0;
			}
			iLocal_52 = 2;
			break;
		case 2:
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_26__.func_256(&(uParam0->f_28[0]), 50, -490.809f, 232.39f, 82.018f, 33.84f, "PAPARAZZO LAUNCHER RC", 0))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 1, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], true);
					iVar3 = PED::CREATE_SYNCHRONIZED_SCENE(-490.809f, 232.39f, 82.018f, 0f, 0f, 33.84f, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar3, true);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iVar3, false);
					TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], iVar3, "rcmpaparazzo_4", "pap_4_rcm_leadin", 8f, -8f, 1, 16, 1000f, 0);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[1]))
			{
				__LIB_11__.func_798(&(uParam0->f_28[1]), iVar0[3], -498.16565f, 228.62839f, 82.09948f, 292.9763f, 26);
				if (__LIB_1__.func_197(uParam0->f_28[1]))
				{
					PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "Camera Man");
					TASK::TASK_PLAY_ANIM(uParam0->f_28[1], "rcmpaparazzo_4", "Idle_Camman", 8f, -8f, -1, 57, 0f, false, false, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[1], true);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 0, 0, 1);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[2]))
			{
				__LIB_11__.func_798(&(uParam0->f_28[2]), iVar0[4], -498.30902f, 227.91116f, 82.105995f, 296.4216f, 26);
				if (__LIB_1__.func_197(uParam0->f_28[2]))
				{
					PED::SET_PED_NAME_DEBUG(uParam0->f_28[2], "Makeup Woman");
					TASK::TASK_PLAY_ANIM(uParam0->f_28[2], "rcmpaparazzo_4", "Idle_Prod", 8f, -8f, -1, 57, 0f, false, false, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[2], true);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 2, 3, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 3, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 9, 0, 0, 0);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_20__.func_649(&(uParam0->f_35[0]), iVar0[1], -497.99f, 224.97f, 82.67f, 266.5f);
				if (__LIB_1__.func_183(uParam0->f_35[0]))
				{
					VEHICLE::LOWER_CONVERTIBLE_ROOF(uParam0->f_35[0], true);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 2);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				__LIB_20__.func_649(&(uParam0->f_35[1]), iVar0[2], -501.55f, 230.7f, 83.1f, 233.93f);
				if (__LIB_1__.func_183(uParam0->f_35[1]))
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[1], 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[1], 2);
					VEHICLE::SET_VEHICLE_LIVERY(uParam0->f_35[1], 0);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				__LIB_10__.func_697(&(uParam0->f_41[0]), iVar0[5], -490.11f, 233.15f, 82.1f, 0f);
				if (__LIB_0__.func_121(uParam0->f_28[0]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 57005), 0.1561f, -0.003f, -0.0344f, 202.8703f, -124.43f, -121.5398f, false, false, false, false, 2, true, 0);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				__LIB_10__.func_697(&(uParam0->f_41[1]), iVar0[6], -490.11f, 233.15f, 82.1f, 0f);
				if (__LIB_0__.func_121(uParam0->f_28[1]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[1], PED::GET_PED_BONE_INDEX(uParam0->f_28[1], 57005), 0.1181f, 0.2229f, -0.1535f, 259.2501f, 24.08f, -51.2899f, false, false, false, false, 2, true, 0);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (bVar4)
			{
				iLocal_52 = 3;
			}
			break;
		case 3:
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar2]);
				iVar2++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_400()//Position - 0x2F15E
{
	__LIB_26__.func_252();
	if (__LIB_26__.func_257())
	{
		func_410();
	}
	__LIB_32__.func_757(&Local_56, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_410()//Position - 0x2F31C
{
	int iVar0;
	int iVar1;
	func_220(1);
	if (__LIB_1__.func_197(Local_56.f_28[0]))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_56.f_28[0], false, 1);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_56.f_28[0], sLocal_252, sLocal_253, 3))
		{
			TASK::STOP_ANIM_TASK(Local_56.f_28[0], sLocal_252, sLocal_253, -8f);
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(Local_56.f_28[0], false))
		{
			TASK::TASK_WANDER_STANDARD(Local_56.f_28[0], 40000f, 0);
		}
	}
	if (__LIB_1__.func_197(Local_56.f_28[1]) && !FIRE::IS_ENTITY_ON_FIRE(Local_56.f_28[1]))
	{
		if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_1__.func_197(Local_56.f_28[0]) && __LIB_1__.func_183(Local_56.f_35[1]))
			{
				TASK::TASK_VEHICLE_DRIVE_WANDER(Local_56.f_28[1], Local_56.f_35[1], 20f, 786597);
			}
			else if (!PED::IS_PED_FLEEING(Local_56.f_28[1]) && !PED::IS_PED_IN_ANY_VEHICLE(Local_56.f_28[1], true))
			{
				func_297();
				PED::SET_PED_FLEE_ATTRIBUTES(Local_56.f_28[1], 128, true);
				func_411(&(Local_56.f_28[1]), 500, 0);
			}
		}
		else
		{
			TASK::TASK_WANDER_STANDARD(Local_56.f_28[1], 40000f, 0);
		}
	}
	if (__LIB_1__.func_197(Local_56.f_28[2]) && !FIRE::IS_ENTITY_ON_FIRE(Local_56.f_28[2]))
	{
		if (PED::IS_PED_IN_GROUP(Local_56.f_28[2]))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_56.f_28[2]);
		}
		if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_56.f_28[2], true))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_56.f_28[2], true);
				if (__LIB_1__.func_183(iVar0) && (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, true) || !__LIB_1__.func_197(Local_56.f_28[0])))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 320);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar1);
					TASK::TASK_PERFORM_SEQUENCE(Local_56.f_28[2], iVar1);
					TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				}
			}
			else if (!PED::IS_PED_FLEEING(Local_56.f_28[2]))
			{
				PED::SET_PED_FLEE_ATTRIBUTES(Local_56.f_28[2], 128, true);
				func_411(&(Local_56.f_28[2]), 350, 1);
			}
		}
		else
		{
			TASK::TASK_WANDER_STANDARD(Local_56.f_28[2], 40000f, 0);
		}
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::ACTION_MANAGER_ENABLE_ACTION(MISC::GET_HASH_KEY("ACT_takedown_a"), true);
	MISC::ACTION_MANAGER_ENABLE_ACTION(MISC::GET_HASH_KEY("ACT_takedown_heavy"), true);
	MISC::ACTION_MANAGER_ENABLE_ACTION(MISC::GET_HASH_KEY("ACT_armed_takedown"), true);
	STREAMING::REMOVE_ANIM_DICT(sLocal_252);
	STREAMING::REMOVE_ANIM_DICT(sLocal_255);
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_316))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_316);
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_317))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_317);
	}
	AUDIO::STOP_SOUND(iLocal_322);
	__LIB_0__.func_523(&iLocal_57);
	__LIB_0__.func_122(&(Local_56.f_41[0]), 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_56.f_41[1]))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_56.f_41[1]));
	}
	__LIB_0__.func_124(&(Local_56.f_28[0]), 1, 0, 1);
	__LIB_0__.func_124(&(Local_56.f_28[1]), 1, 0, 1);
	__LIB_0__.func_124(&(Local_56.f_28[2]), 1, 0, 1);
	__LIB_0__.func_106(&(Local_56.f_35[0]));
	__LIB_0__.func_106(&(Local_56.f_35[1]));
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_313, Local_314, fLocal_315, 1);
	__LIB_6__.func_833();
}

void func_411(var uParam0, int iParam1, int iParam2)//Position - 0x2F637
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_PAUSE(0, iParam1);
	if ((iParam2 && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_255)) && iLocal_310)
	{
		TASK::TASK_PLAY_ANIM(0, sLocal_255, sLocal_257, 8f, -8f, -1, 8192, 0f, false, false, false);
		iLocal_310 = 0;
	}
	TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

