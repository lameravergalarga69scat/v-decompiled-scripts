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
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	char* sLocal_46 = NULL;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	struct<3> Local_50[20];
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<6> Local_55 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_56 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_57[24] = "";
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	struct<3> Local_61 = { 0, 0, 0 } ;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	struct<6> Local_66[25];
	float fLocal_67 = 0f;
	struct<4> Local_68[8];
	struct<10> Local_69[36];
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	struct<7> Local_72[49];
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_79 = 0;
	int iLocal_80[4] = { 0, 0, 0, 0 };
	int iLocal_81 = 0;
	int iLocal_82[2] = { 0, 0 };
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int* iLocal_86 = NULL;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = 0;
	int iLocal_92 = 0;
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<14> Local_94[27];
	struct<2> Local_95[10];
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	struct<10> Local_102[16];
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	char[] cLocal_107[8] = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	struct<12> Local_111[5];
	var uLocal_112 = 0;
	struct<6> Local_113[20];
	bool bLocal_114 = 0;
	char* sLocal_115 = NULL;
	var uLocal_116 = 4;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 4;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 4;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 4;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 4;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 4;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 4;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 8;
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
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	struct<3> Local_205[9];
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	char* sLocal_213 = NULL;
	struct<14> Local_214 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 3;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 21;
	var uLocal_236 = 6;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_241[5] = { 0, 0, 0, 0, 0 };
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	struct<3> Local_250[10];
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	struct<7> Local_254[3];
	struct<3> Local_255[31];
	int iLocal_256[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_257 = NULL;
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
	float fLocal_268 = 0f;
	int iLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = -1;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 1000;
	var uLocal_280 = 1000;
	var uLocal_281 = 0;
	struct<3> Local_282 = { 0, 0, 0 } ;
	float fLocal_283 = 0f;
	float fLocal_284 = 0f;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	char* sLocal_288 = NULL;
	char* sLocal_289 = NULL;
	int iLocal_290[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_291 = NULL;
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
	float fLocal_303 = 0f;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	int iVar1;
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
	fLocal_67 = 0.45f;
	iLocal_79 = -1;
	iLocal_88 = 1;
	Local_93 = { 0f, 0f, 0f };
	iLocal_110 = -1;
	iLocal_265 = -1;
	Local_282 = { -1110.31f, -1603.0426f, 3.6765f };
	fLocal_283 = 95f;
	fLocal_284 = 0.27f;
	iLocal_296 = -1;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_677();
		func_676(2);
	}
	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 45f);
	iLocal_92 = 0;
	func_673();
	func_671();
	if (__LIB_0__::func_323())
	{
		iVar1 = __LIB_0__::func_344();
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		if (Global_94618 == 1)
		{
			iVar1++;
		}
		switch (iVar1)
		{
			case 0:
				iLocal_92 = 1;
				func_608(1, 1, 0);
				break;
			case 1:
				iLocal_92 = 2;
				func_608(1, 1, 0);
				break;
			case 2:
				if (Global_94618)
				{
					bVar0 = true;
					iLocal_92 = 6;
				}
				else
				{
					iLocal_92 = 7;
				}
				func_608(1, 1, 0);
				break;
			case 3:
				iLocal_92 = 9;
				func_608(1, 1, 0);
				break;
			case 4:
				if (Global_94618)
				{
					bVar0 = true;
				}
				iLocal_92 = 11;
				func_608(1, 1, 0);
				break;
		}
	}
	else if (__LIB_0__::func_2(0))
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_92 = 0;
		func_608(1, 0, 1);
		bVar0 = true;
	}
	else
	{
		func_605(0);
	}
	if (!bVar0)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
	}
	while (true)
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		if (!__LIB_0__::func_425(138))
		{
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				__LIB_0__::func_681(138, 1);
			}
		}
		func_601();
		func_598();
		func_125();
		func_36();
		func_35();
		func_25();
		func_24();
		func_23();
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("m_Repossession", 0);
		if (iLocal_74 > MISC::GET_GAME_TIMER())
		{
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		}
		__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), 17);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			__LIB_0__::func_377(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 12);
			__LIB_0__::func_505(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 16);
		}
		else
		{
			__LIB_0__::func_377(0, 12);
			__LIB_0__::func_505(0, 16);
		}
		if (bLocal_114)
		{
			func_1(sLocal_115, iLocal_87);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(char* sParam0, int iParam1)//Position - 0x282
{
	int iVar0;
	while (!AUDIO::TRIGGER_MUSIC_EVENT("ARM2_MISSION_FAIL"))
	{
		func_20(21, 0);
	}
	if (MISC::IS_STRING_NULL(sParam0))
	{
		sParam0 = "ARM2_FAIL";
	}
	iVar0 = (MISC::GET_GAME_TIMER() + iParam1);
	if (iParam1 > 0)
	{
		while (MISC::GET_GAME_TIMER() < iVar0)
		{
			SYSTEM::WAIT(0);
		}
	}
	func_3(sParam0);
	while (!__LIB_0__::func_223())
	{
		SYSTEM::WAIT(0);
	}
	func_676(1);
}

void func_3(char* sParam0)//Position - 0x315
{
	__LIB_0__::func_381(sParam0);
	func_4(0);
}

void func_4(int iParam0)//Position - 0x328
{
	int iVar0;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_5(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_5(int iParam0)//Position - 0x36D
{
	int iVar0;
	int iVar1;
	__LIB_37__::func_360();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_6(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive)
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

void func_6(var uParam0, int iParam1)//Position - 0x47D
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
			if (!func_8(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_8(int iParam0, var uParam1, float fParam2)//Position - 0x651
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
			return func_8(8, uParam1, fParam2);
			break;
		case 10:
			return func_8(8, uParam1, fParam2);
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

void func_20(int iParam0, int iParam1)//Position - 0x12F7
{
	iParam0 = iParam0;
	SYSTEM::WAIT(iParam1);
}

void func_23()//Position - 0x1386
{
	if (iLocal_285)
	{
		if (iLocal_286)
		{
			if (AUDIO::PREPARE_MUSIC_EVENT(sLocal_288))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_288))
				{
					iLocal_285 = 0;
					iLocal_286 = 0;
				}
			}
		}
		else if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_288))
		{
			iLocal_285 = 0;
		}
	}
	else if (iLocal_287)
	{
		if (AUDIO::PREPARE_MUSIC_EVENT(sLocal_289))
		{
			iLocal_287 = 0;
		}
	}
}

void func_24()//Position - 0x13DE
{
	var uVar0;
	switch (iLocal_301)
	{
		case 0:
			OBJECT::ADD_DOOR_TO_SYSTEM(-913931260, joaat("prop_arm_gate_l"), -1127.1f, -1586.96f, 5.09f, false, true, false);
			OBJECT::ADD_DOOR_TO_SYSTEM(-2077066915, joaat("prop_arm_gate_l"), -1131.99f, -1590.4f, 5.09f, false, true, false);
			iLocal_301 = 1;
			break;
		case 2:
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-913931260) && OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2077066915))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-913931260, 0f, false, false);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-913931260, 4, false, true);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2077066915, 0f, false, false);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2077066915, 4, false, true);
				iLocal_301 = 1;
			}
			else
			{
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-913931260))
				{
					OBJECT::ADD_DOOR_TO_SYSTEM(-913931260, joaat("prop_arm_gate_l"), -1127.1f, -1586.96f, 5.09f, false, true, false);
				}
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2077066915))
				{
					OBJECT::ADD_DOOR_TO_SYSTEM(-2077066915, joaat("prop_arm_gate_l"), -1131.99f, -1590.4f, 5.09f, false, true, false);
				}
			}
			break;
		case 3:
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-913931260, 0, false, true);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2077066915, 0, false, true);
			iLocal_301 = 1;
			break;
		case 5:
			switch (iLocal_302)
			{
				case 0:
					fLocal_303 = 1f;
					iLocal_302 = 1;
					break;
				case 1:
					if (!PED::IS_PED_INJURED(Local_94[4 /*14*/]))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_94[4 /*14*/], -1133.818f, -1583.4099f, 2.790712f, -1123.0552f, -1598.9205f, 5.836129f, 7.625f, false, true, 0))
						{
							iLocal_302 = 2;
						}
					}
					break;
				case 2:
					fLocal_303 = (fLocal_303 + (-0.13f * SYSTEM::TIMESTEP()));
					if (fLocal_303 <= 0f)
					{
						fLocal_303 = 0f;
						iLocal_301 = 1;
					}
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-913931260, fLocal_303, false, true);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2077066915, (fLocal_303 * -1f), false, true);
					break;
			}
			break;
		case 4:
			if (!PED::IS_PED_INJURED(Local_94[4 /*14*/]))
			{
				switch (iLocal_302)
				{
					case 0:
						fLocal_303 = 0f;
						iLocal_302 = 1;
						break;
					case 1:
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_94[4 /*14*/], -1129.0234f, -1590.4083f, 2.9455f, -1123.0552f, -1598.9205f, 5.836129f, 7.625f, false, true, 0))
						{
							fLocal_303 = (fLocal_303 + (0.13f * SYSTEM::TIMESTEP()));
							if (fLocal_303 >= 1f)
							{
								fLocal_303 = 1f;
								iLocal_301 = 5;
							}
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-913931260, fLocal_303, false, true);
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2077066915, (fLocal_303 * -1f), false, true);
						}
						break;
					}
			}
			break;
		case 6:
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-913931260, 0f, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-913931260, 0, false, true);
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2077066915, 0f, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2077066915, 0, false, true);
			iLocal_301 = 1;
			break;
		case 7:
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-913931260, 0, false, true);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2077066915, 0, false, true);
			iLocal_301 = 1;
			break;
		case 8:
		case 9:
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_94[4 /*14*/]))
			{
				if (!PED::IS_PED_INJURED(Local_94[4 /*14*/]))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_94[4 /*14*/], -1129.0234f, -1590.4083f, 2.9455f, -1123.0552f, -1598.9205f, 5.836129f, 7.625f, false, true, 0))
					{
						iLocal_301 = 4;
					}
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 7f)
				{
					if (iLocal_301 != 8 && iLocal_301 != 9)
					{
						iLocal_301 = 8;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-913931260, 0, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2077066915, 0, false, true);
					}
				}
				else if (iLocal_301 == 8 && iLocal_301 != 9)
				{
					iLocal_301 = 2;
				}
			}
			else if (iLocal_301 == 8 && iLocal_301 != 9)
			{
				iLocal_301 = 2;
			}
			if ((iLocal_301 == 8 || iLocal_301 == 1) || iLocal_301 == 2)
			{
				uVar0 = uVar0;
				if (MISC::GET_GAME_TIMER() > iLocal_73)
				{
					OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_arm_gate_l"), -1131.99f, -1590.4f, 5.09f, &uVar0, &fLocal_303);
					if (MISC::ABSF(fLocal_303) > 0.02f)
					{
						iLocal_301 = 9;
					}
					OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_arm_gate_l"), -1127f, -1587f, 5f, &uVar0, &fLocal_303);
					if (MISC::ABSF(fLocal_303) > 0.02f)
					{
						iLocal_301 = 9;
					}
					iLocal_73 = MISC::GET_GAME_TIMER() + 200;
				}
			}
			break;
	}
}

void func_25()//Position - 0x185C
{
	var uVar0;
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || __LIB_8__::func_943())
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			iLocal_300 = 0;
		}
		else if (iLocal_300 == 0)
		{
			iLocal_300 = MISC::GET_GAME_TIMER() + 3000;
		}
		if (__LIB_0__::func_1("ARM2_HLP09"))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/))
					{
						HUD::CLEAR_HELP(false);
						if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
						{
							__LIB_0__::func_151("ARM2_HLP19", 12000);
						}
					}
				}
				else
				{
					HUD::CLEAR_HELP(true);
				}
			}
		}
		if (__LIB_0__::func_1("ARM2_HLP19"))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && MISC::GET_GAME_TIMER() > iLocal_300)
			{
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar0, true);
				if (((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4)) && CAM::IS_AIM_CAM_ACTIVE_IN_ACCURATE_MODE()) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1091.0858f, -1671.047f, 3.0388f, -1069.4282f, -1653.9392f, 6.0045f, 9.625f, false, true, 0))
				{
					HUD::CLEAR_HELP(true);
				}
			}
		}
		if (__LIB_0__::func_1("ARM2_HLP16"))
		{
			if (func_26(3) || (ENTITY::IS_ENTITY_DEAD(Local_94[13 /*14*/], false) && ENTITY::IS_ENTITY_DEAD(Local_94[14 /*14*/], false)))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_300)
				{
					HUD::CLEAR_HELP(true);
				}
			}
		}
		if (__LIB_0__::func_1("ARM2_HLP13"))
		{
			if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(-1100.5414f, -1634.1962f, 3.5236f, 20f) > 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_208))
				{
					OBJECT::DELETE_OBJECT(&iLocal_208);
				}
			}
		}
	}
}

int func_26(int iParam0)//Position - 0x19E6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_113[iVar0 /*6*/] == iParam0)
		{
			if (Local_113[iVar0 /*6*/].f_1 == 1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_35()//Position - 0x1BBB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_94.f_0)
	{
		if (HUD::DOES_BLIP_EXIST(Local_94[iVar0 /*14*/].f_1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_94[iVar0 /*14*/]))
			{
				if (PED::IS_PED_INJURED(Local_94[iVar0 /*14*/]))
				{
					HUD::REMOVE_BLIP(&(Local_94[iVar0 /*14*/].f_1));
				}
			}
			else
			{
				HUD::REMOVE_BLIP(&(Local_94[iVar0 /*14*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_36()//Position - 0x1C20
{
	switch (iLocal_305)
	{
		case 0:
			if (iLocal_92 >= 2)
			{
				__LIB_44__::func_106(1, "Follow Lemar down the alley", 0, 0, 0, 1);
				iLocal_305++;
			}
			break;
		case 1:
			if (iLocal_92 >= 7)
			{
				__LIB_44__::func_106(2, "Alleyway shootout", 0, 0, 0, 1);
				iLocal_305++;
			}
			break;
		case 2:
			if (iLocal_92 >= 9)
			{
				__LIB_44__::func_106(3, "Chase bike", 1, 0, 0, 1);
				iLocal_305++;
			}
			break;
	}
}

void func_125()//Position - 0xA93D
{
	switch (iLocal_92)
	{
		case 0:
			if (func_593())
			{
				func_588(14);
			}
			break;
		case 1:
			if (func_587())
			{
				func_588(14);
			}
			break;
		case 2:
			if (func_586())
			{
				func_588(14);
			}
			break;
		case 3:
			if (func_586())
			{
				func_588(14);
			}
			break;
		case 4:
			if (func_586())
			{
				func_588(14);
			}
			break;
		case 5:
			if (func_586())
			{
				func_588(14);
			}
			break;
		case 6:
			if (func_579())
			{
				func_588(14);
			}
			break;
		case 7:
			if (func_576())
			{
				func_588(14);
			}
			break;
		case 8:
			if (func_576())
			{
				func_588(14);
			}
			break;
		case 9:
			if (func_575())
			{
				func_588(14);
			}
			break;
		case 10:
			if (func_263())
			{
				func_588(14);
			}
			break;
		case 11:
			if (func_167())
			{
				func_588(14);
			}
			break;
		case 12:
			func_164();
			break;
	}
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	func_163();
	func_126(0);
}

void func_126(int iParam0)//Position - 0xAA77
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar1 = 0;
	iVar2 = 19;
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Local_113[iVar0 /*6*/] == iParam0)
			{
				iVar1 = iVar0;
				iVar2 = iVar0;
			}
			iVar0++;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Local_113[iVar0 /*6*/].f_1 == 1)
			{
				if (iLocal_92 >= Local_113[iVar0 /*6*/].f_5)
				{
					Local_113[iVar0 /*6*/].f_2 = 99;
				}
				switch (Local_113[iVar0 /*6*/])
				{
					case 1:
						switch (Local_113[iVar0 /*6*/].f_2)
						{
							case 0:
								if (iLocal_92 == 1)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1139.0737f, -1575.9607f, 3.3289f, true) < 200f)
									{
										func_605(2);
										Local_113[iVar0 /*6*/].f_2++;
									}
								}
								else
								{
									if (iLocal_51 < 2)
									{
										func_605(2);
									}
									Local_113[iVar0 /*6*/].f_2++;
								}
								break;
							case 1:
								if (!iLocal_52)
								{
									MISC::CLEAR_AREA(-1101.8131f, -1618.129f, 3.5544f, 3f, true, false, false, false);
									func_162(3, 12, 0);
									PATHFIND::SET_PED_PATHS_IN_AREA(Vector(3.943655f, -1586.0956f, -1131.8706f) - Vector(1.125f, 6.6875f, 5.5625f), Vector(3.943655f, -1586.0956f, -1131.8706f) + Vector(1.125f, 6.6875f, 5.5625f), false, 0);
									PATHFIND::SET_PED_PATHS_IN_AREA(Vector(4.110459f, -1656.1404f, -1090.723f) - Vector(1f, 2.125f, 2.125f), Vector(4.110459f, -1656.1404f, -1090.723f) + Vector(1f, 2.125f, 2.125f), false, 0);
									if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
									{
										ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_94[2 /*14*/], true, 1);
									}
									PED::ADD_SCENARIO_BLOCKING_AREA(Vector(4.7285f, -1719.19f, -1078.01f) - Vector(20f, 50f, 50f), Vector(4.7285f, -1719.19f, -1078.01f) + Vector(20f, 50f, 50f), false, true, true, true);
									PED::ADD_SCENARIO_BLOCKING_AREA(Vector(4.712814f, -1595.9763f, -1077.1224f) - Vector(20f, 50f, 50f), Vector(4.712814f, -1595.9763f, -1077.1224f) + Vector(20f, 50f, 50f), false, true, true, true);
									PED::ADD_SCENARIO_BLOCKING_AREA(Vector(4.623703f, -1649.8368f, -1144.8533f) - Vector(20f, 50f, 50f), Vector(4.623703f, -1649.8368f, -1144.8533f) + Vector(20f, 50f, 50f), false, true, true, true);
									PED::ADD_SCENARIO_BLOCKING_AREA(Vector(4.776398f, -1654.28f, -1018.07f) - Vector(20f, 50f, 50f), Vector(4.776398f, -1654.28f, -1018.07f) + Vector(20f, 50f, 50f), false, true, true, true);
									PED::ADD_SCENARIO_BLOCKING_AREA(-2000f, -1846f, 68f, -1120f, -580f, 83f, false, true, true, true);
									MISC::CLEAR_AREA(-1090.9822f, -1632.9275f, 3.7328f, 2f, true, false, false, false);
									MISC::CLEAR_AREA(-1100.8934f, -1618.5619f, 3.7723f, 5f, true, false, false, false);
									if (iLocal_92 <= 4)
									{
										func_161(1, joaat("bison"), -1090.0382f, -1634.9688f, 4.1764f, 125.6f, -1027080192);
										ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_95[1 /*2*/], true);
										VEHICLE::SET_VEHICLE_COLOURS(Local_95[1 /*2*/], 58, 63);
										Local_94[4 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_95[1 /*2*/], 26, iLocal_259, -1, true, true);
										Local_94[5 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_95[1 /*2*/], 26, iLocal_259, 0, true, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[4 /*14*/], 3, false);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[5 /*14*/], 3, false);
										VEHICLE::SET_VEHICLE_LIGHTS(Local_95[1 /*2*/], 1);
										VEHICLE::SET_VEHICLE_ENGINE_ON(Local_95[1 /*2*/], false, true, false);
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_95[1 /*2*/], 3);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[4 /*14*/], 14, false);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[5 /*14*/], 14, false);
									}
									OBJECT::ADD_DOOR_TO_SYSTEM(-967780114, joaat("prop_gar_door_03_ld"), -1074.65f, -1676.13f, 4.66f, false, true, false);
									func_161(2, joaat("bison"), -1078.2278f, -1651.6323f, 4.192808f, -56.0181f, -1027080192);
									VEHICLE::SET_VEHICLE_COLOURS(Local_95[2 /*2*/], 124, 124);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_95[2 /*2*/], 7);
									VEHICLE::SET_VEHICLE_ALARM(Local_95[2 /*2*/], true);
									if (iLocal_92 <= 8)
									{
										func_161(6, joaat("penumbra"), -1090.6084f, -1631.2157f, 3.7328f, 307.1f, -1027080192);
										VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_95[6 /*2*/], true);
										VEHICLE::SET_VEHICLE_COLOURS(Local_95[6 /*2*/], 73, 73);
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_95[6 /*2*/], 7);
										VEHICLE::SET_VEHICLE_ALARM(Local_95[6 /*2*/], true);
										ENTITY::FREEZE_ENTITY_POSITION(Local_95[6 /*2*/], true);
									}
									iLocal_75 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1090.411f, -1648.12f, 3.507f, 2.225f, 3.1754f, 1f, __LIB_12__::func_418(36f), false, 7);
									iLocal_76 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1095f, -1655f, 4f, 14.648f, 8.071f, 2f, __LIB_12__::func_418(33.48f), false, 7);
									__LIB_41__::func_48(94, 4);
									__LIB_41__::func_48(95, 4);
									if (OBJECT::DOES_PICKUP_EXIST(iLocal_77))
									{
										OBJECT::REMOVE_PICKUP(iLocal_77);
									}
									iLocal_263 = 0;
									MISC::SET_BIT(&iLocal_263, 1);
									iLocal_77 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_ARMOUR_STANDARD"), -1064.439f, -1664.4841f, 3.6409f, -90f, 0f, 83.88f, iLocal_263, -1, 2, true, 0);
									Local_113[iVar0 /*6*/].f_2++;
								}
								break;
							case 2:
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_209))
								{
									iLocal_209 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1067f, -1665.61f, 4.79f, 1f, joaat("prop_gar_door_01"), true, false, true);
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_210))
								{
									iLocal_210 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1064.76f, -1668.76f, 4.79f, 1f, joaat("prop_gar_door_02"), true, false, true);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_209) && ENTITY::DOES_ENTITY_EXIST(iLocal_210))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_209, true);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_210, true);
									Local_113[iVar0 /*6*/].f_1 = 0;
								}
								break;
						}
						break;
					case 2:
						iVar3 = joaat("WEAPON_UNARMED");
						switch (Local_113[iVar0 /*6*/].f_2)
						{
							case 0:
								Local_113[iVar0 /*6*/].f_2++;
								break;
							case 1:
								WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, true);
								if (iVar3 != joaat("WEAPON_UNARMED"))
								{
									Local_113[iVar0 /*6*/].f_2++;
								}
								break;
							case 2:
								if (MISC::GET_GAME_TIMER() > Local_113[iVar0 /*6*/].f_3 + 3000 || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									if (PAD::GET_IS_USING_ALTERNATE_DRIVEBY())
									{
										__LIB_0__::func_151("ARM2_HLP18ALT", 12000);
									}
									else
									{
										__LIB_0__::func_151("ARM2_HLP18", 12000);
									}
									Local_113[iVar0 /*6*/].f_2++;
								}
								break;
							case 3:
								if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_INJURED(Local_94[8 /*14*/]))
								{
									Local_113[iVar0 /*6*/].f_2++;
									Local_113[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 1000;
								}
								break;
							case 4:
								if (MISC::GET_GAME_TIMER() > Local_113[iVar0 /*6*/].f_3)
								{
									if (__LIB_0__::func_1("ARM2_HLP18") || __LIB_0__::func_1("ARM2_HLP18ALT"))
									{
										HUD::CLEAR_HELP(true);
									}
									Local_113[iVar0 /*6*/].f_1 = 0;
								}
								break;
						}
						break;
					case 4:
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
						{
							if ((OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_206) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_206) == 10) || iLocal_92 == 9)
							{
								PHYSICS::RESET_DISABLE_BREAKING(iLocal_85);
								Local_113[iVar0 /*6*/].f_1 = 0;
							}
						}
						break;
					case 3:
						switch (Local_113[iVar0 /*6*/].f_2)
						{
							case 0:
								if (iLocal_92 > 1)
								{
									iLocal_206 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-1093.4f, -1653.1f, 3f, 10f, "DES_Scaffolding");
									if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_206))
									{
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_206, 2);
										__LIB_0__::func_544(79, 0, 0, 1, 0);
										Local_113[iVar0 /*6*/].f_2++;
									}
								}
								break;
							case 1:
								if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_206))
								{
									if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_206) == 3)
									{
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_206, 4);
									}
								}
								if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_206))
								{
									if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_206) == 5)
									{
										Local_113[iVar0 /*6*/].f_2 = 2;
									}
								}
								break;
							case 2:
								if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_206))
								{
									if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_206) == 5)
									{
										if (MISC::IS_BULLET_IN_ANGLED_AREA(-1087.8014f, -1655.3491f, 6.6f, -1089.4009f, -1654.4635f, 7.555488f, 1f, true))
										{
											iLocal_85 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1081.0177f, -1647.606f, 4.1603f, 0.5f, joaat("prop_wallchunk_01"), true, false, true);
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_85, false))
												{
													PHYSICS::SET_DISABLE_BREAKING(iLocal_85, true);
												}
											}
											Local_113[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 250;
											Local_113[iVar0 /*6*/].f_2 = 3;
										}
										if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -1087.8014f, -1655.3491f, 6.691953f, -1089.4009f, -1654.4635f, 7.555488f, 1f))
										{
											if (((FIRE::IS_EXPLOSION_IN_ANGLED_AREA(0, -1087.8014f, -1655.3491f, 6.691953f, -1089.4009f, -1654.4635f, 7.555488f, 1f) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(4, -1087.8014f, -1655.3491f, 6.691953f, -1089.4009f, -1654.4635f, 7.555488f, 1f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(1, -1087.8014f, -1655.3491f, 6.691953f, -1089.4009f, -1654.4635f, 7.555488f, 1f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(2, -1087.8014f, -1655.3491f, 6.691953f, -1089.4009f, -1654.4635f, 7.555488f, 1f))
											{
												iLocal_85 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1081.0177f, -1647.606f, 4.1603f, 0.5f, joaat("prop_wallchunk_01"), true, false, true);
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
												{
													if (!ENTITY::IS_ENTITY_DEAD(iLocal_85, false))
													{
														PHYSICS::SET_DISABLE_BREAKING(iLocal_85, true);
													}
												}
												Local_113[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 250;
												Local_113[iVar0 /*6*/].f_2 = 3;
											}
										}
										if (Local_113[iVar0 /*6*/].f_2 == 3)
										{
											RECORDING::REPLAY_START_EVENT(3);
										}
									}
									else
									{
										Local_113[iVar0 /*6*/].f_2 = 0;
									}
								}
								break;
							case 3:
								if (MISC::GET_GAME_TIMER() > Local_113[iVar0 /*6*/].f_3)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_207))
									{
										if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_207))
										{
											OBJECT::SET_OBJECT_TARGETTABLE(iLocal_207, false);
											OBJECT::DELETE_OBJECT(&iLocal_207);
										}
										else
										{
											OBJECT::SET_OBJECT_TARGETTABLE(iLocal_207, false);
											ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_207);
										}
									}
									func_141(101, 1);
									if (!PED::IS_PED_INJURED(Local_94[13 /*14*/]))
									{
										func_139(33, 87, 1);
									}
									Local_113[iVar0 /*6*/].f_2 = 4;
								}
								break;
							case 4:
								if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_206))
								{
									if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_206) == 5)
									{
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_206, 6);
										AUDIO::START_AUDIO_SCENE("ARM_2_RAYFIRE");
										Local_113[iVar0 /*6*/].f_2++;
									}
								}
								break;
							case 5:
								if (MISC::GET_GAME_TIMER() > Local_113[iVar0 /*6*/].f_3)
								{
									if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
									{
										ENTITY::SET_ENTITY_PROOFS(Local_94[2 /*14*/], false, true, true, true, false, false, false, false);
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[2 /*2*/], false))
									{
										ENTITY::SET_ENTITY_PROOFS(Local_95[2 /*2*/], false, false, true, false, false, false, false, false);
									}
									if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1090.74f, -1654.78f, 3.4f, 1) > 4.875f)
									{
										ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, true, false, false, false, false, false);
									}
									FIRE::ADD_EXPLOSION(-1091.2448f, -1653.5312f, 7.07065f, 34, 4f, false, true, 1f, false);
									FIRE::ADD_EXPLOSION(-1088.8958f, -1654.3989f, 4.2178f, 34, 3.5f, false, true, 1f, false);
									AUDIO::PLAY_SOUND_FROM_COORD(-1, "Gas_Explosion", -1088.8005f, -1655.5457f, 7.3146f, "ARM_2_REPO_SOUNDS", false, 0, false);
									iLocal_74 = MISC::GET_GAME_TIMER() + 1500;
									if (!PED::IS_PED_INJURED(Local_94[13 /*14*/]))
									{
										if (__LIB_0__::func_724(Local_94[13 /*14*/], -1091.2448f, -1653.5312f, 7.07065f, 1) < 4f)
										{
											PED::SET_PED_TO_RAGDOLL(Local_94[13 /*14*/], 5000, 5000, 0, true, true, false);
											ENTITY::SET_ENTITY_HEALTH(Local_94[13 /*14*/], 0, 0);
											FIRE::START_ENTITY_FIRE(Local_94[13 /*14*/]);
										}
									}
									Local_113[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 1000;
									Local_113[iVar0 /*6*/].f_2++;
								}
								break;
							case 6:
								if (MISC::GET_GAME_TIMER() > Local_113[iVar0 /*6*/].f_3)
								{
									ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[2 /*2*/], false))
									{
										ENTITY::SET_ENTITY_PROOFS(Local_95[2 /*2*/], false, false, false, false, false, false, false, false);
									}
									Local_113[iVar0 /*6*/].f_1 = 0;
								}
								break;
						}
						break;
					case 5:
						if (iLocal_92 >= 2)
						{
							switch (Local_113[iVar0 /*6*/].f_2)
							{
								case 0:
									STREAMING::REQUEST_ANIM_SET("ANIM_GROUP_MOVE_LEMAR_ALLEY");
									Local_113[iVar0 /*6*/].f_2++;
									break;
								case 1:
									if (STREAMING::HAS_ANIM_SET_LOADED("ANIM_GROUP_MOVE_LEMAR_ALLEY"))
									{
										if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
										{
											PED::SET_PED_MOVEMENT_CLIPSET(Local_94[2 /*14*/], "ANIM_GROUP_MOVE_LEMAR_ALLEY", 0.25f);
											Local_113[iVar0 /*6*/].f_1 = 0;
										}
									}
									break;
								}
						}
						break;
					case 6:
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							switch (Local_113[iVar0 /*6*/].f_2)
							{
								case 0:
									if (CUTSCENE::IS_CUTSCENE_PLAYING())
									{
										Local_113[iVar0 /*6*/].f_2++;
									}
									break;
								case 1:
									if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", ENTITY::GET_ENTITY_MODEL(Local_94[2 /*14*/])) || CUTSCENE::HAS_CUTSCENE_FINISHED())
									{
										if (CUTSCENE::HAS_CUTSCENE_FINISHED())
										{
											PED::FORCE_PED_MOTION_STATE(Local_94[2 /*14*/], joaat("MotionState_Run"), false, 0, false);
										}
										else
										{
											PED::FORCE_PED_MOTION_STATE(Local_94[2 /*14*/], joaat("MotionState_Run"), false, 1, false);
										}
										PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_94[2 /*14*/], 2f);
										TASK::SET_PED_PATH_CLIMB_COST_MODIFIER(Local_94[2 /*14*/], 0.1f);
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
										{
											func_137();
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1130.3208f, -1589.826f, 3.3891f, 2f, 20000, 0.25f, 0, 39f);
											TASK::TASK_CLIMB(0, true);
											func_136(Local_94[2 /*14*/], 0);
										}
										Local_113[iVar0 /*6*/].f_2 = 2;
										Local_113[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 2000;
									}
									break;
								case 2:
									if (MISC::GET_GAME_TIMER() < Local_113[iVar0 /*6*/].f_3)
									{
										PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_94[2 /*14*/], 2f);
									}
									else
									{
										Local_113[iVar0 /*6*/].f_1 = 0;
									}
									break;
								}
						}
						break;
					case 7:
						switch (Local_113[iVar0 /*6*/].f_2)
						{
							case 0:
								if (CUTSCENE::IS_CUTSCENE_PLAYING())
								{
									Local_113[iVar0 /*6*/].f_2++;
								}
								break;
							case 1:
								if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0) || CUTSCENE::HAS_CUTSCENE_FINISHED())
								{
									if (!CUTSCENE::IS_CUTSCENE_PLAYING())
									{
										PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 0, false);
									}
									else
									{
										PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 1, false);
									}
									PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
									Local_113[iVar0 /*6*/].f_2 = 2;
									Local_113[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 2000;
								}
								break;
							case 2:
								if (MISC::GET_GAME_TIMER() < Local_113[iVar0 /*6*/].f_3)
								{
									PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
								}
								else
								{
									Local_113[iVar0 /*6*/].f_1 = 0;
								}
								break;
						}
						break;
					case 8:
						if (ENTITY::DOES_ENTITY_EXIST(Local_95[4 /*2*/]))
						{
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[4 /*2*/], false))
							{
								func_135("ARM2_F03");
							}
							else if ((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_95[4 /*2*/], 3, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_95[4 /*2*/], 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_95[4 /*2*/], 0, 7000))
							{
								func_135("ARM2_F03");
							}
						}
						if (iLocal_92 >= 2 && iLocal_92 < 9)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
							{
								func_135("ARM2_F04");
							}
						}
						break;
					case 9:
						if (Local_113[iVar0 /*6*/].f_2 == 0)
						{
							PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(1f);
							VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
							PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(1f, 1f);
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1121.8112f, -1599.7185f, 1.023538f, -1066.7083f, -1676.4952f, 11.544231f, 34.4375f, false, true, 0))
							{
								Local_113[iVar0 /*6*/].f_2 = 1;
							}
						}
						else if (Local_113[iVar0 /*6*/].f_2 == 1)
						{
							PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
							VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
							PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1121.8112f, -1599.7185f, 1.023538f, -1066.7083f, -1676.4952f, 11.544231f, 34.4375f, false, true, 0))
							{
								Local_113[iVar0 /*6*/].f_2 = 0;
							}
						}
						break;
					case 10:
						if (Local_113[iVar0 /*6*/].f_2 == 0)
						{
							if (CUTSCENE::IS_CUTSCENE_PLAYING())
							{
								__LIB_42__::func_361(-19.289612f, -1085.2947f, 25.310959f, -35.263798f, -1079.3585f, 30.06847f, 12.625f, -27.3711f, -1082.1107f, 25.589f, 249.7235f, 4f, 20f, 10f, 1, 1, 1, 0, 0);
								__LIB_42__::func_361(-29.77057f, -1086.7f, 24.113047f, -33.119946f, -1094.0564f, 29.047302f, 6.3125f, -27.3711f, -1082.1107f, 25.589f, 249.7235f, 4f, 20f, 10f, 1, 1, 1, 0, 0);
								__LIB_42__::func_361(-31.77917f, -1094.7704f, 25.109842f, -35.30418f, -1104.3666f, 28.234842f, 5.9375f, -27.3711f, -1082.1107f, 25.589f, 249.7235f, 4f, 20f, 10f, 1, 1, 1, 0, 0);
								__LIB_42__::func_361(-20.769154f, -1077.8989f, 24.251143f, -4.940775f, -1083.3789f, 29.297075f, 5.8125f, -14.9697f, -1085.4008f, 25.6721f, 238.037f, 6f, 10f, 10f, 1, 1, 1, 0, 0);
								Local_95[0 /*2*/] = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								if (ENTITY::DOES_ENTITY_EXIST(Local_95[0 /*2*/]))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_95[0 /*2*/], true, true);
										ENTITY::SET_ENTITY_HEALTH(Local_95[0 /*2*/], 1800, 0);
									}
								}
								MISC::CLEAR_AREA(-12.8803f, -1080.6093f, 25.6721f, 20f, true, false, false, false);
								Local_113[iVar0 /*6*/].f_1 = 0;
							}
						}
						break;
					case 11:
						switch (Local_113[iVar0 /*6*/].f_2)
						{
							case 0:
								if (CUTSCENE::IS_CUTSCENE_PLAYING())
								{
									Local_113[iVar0 /*6*/].f_2++;
								}
								break;
							case 1:
								if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0) || CUTSCENE::HAS_CUTSCENE_FINISHED())
								{
									if (__LIB_7__::func_691())
									{
										PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Aiming"), true, 0, false);
										PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
									}
									else
									{
										PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), true, 0, false);
										PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1000, 0f, true, false);
									}
									Local_113[iVar0 /*6*/].f_2 = 2;
									Local_113[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 1000;
								}
								break;
							case 2:
								if (MISC::GET_GAME_TIMER() < Local_113[iVar0 /*6*/].f_3)
								{
								}
								else
								{
									Local_113[iVar0 /*6*/].f_1 = 0;
								}
								break;
						}
						break;
					case 12:
						if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -39.62799f, -1099.2401f, 25.25259f, 1) < 150.5f)
						{
							if (MISC::HAS_BULLET_IMPACTED_IN_AREA(-39.62799f, -1099.2401f, 25.25259f, 26.5f, true, true))
							{
								func_135("ARM2_F07");
							}
							if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, -39.62799f, -1099.2401f, 25.25259f, 26.5f))
							{
								func_135("ARM2_F07");
							}
							if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -39.62799f, -1099.2401f, 25.25259f, 1) < 26.5f)
							{
								if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
								{
									iVar4 = joaat("WEAPON_UNARMED");
									WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar4, true);
									switch (iVar4)
									{
										case joaat("WEAPON_BAT"):
										case joaat("WEAPON_CROWBAR"):
										case joaat("WEAPON_HAMMER"):
										case joaat("WEAPON_KNIFE"):
										case joaat("WEAPON_NIGHTSTICK"):
										case joaat("WEAPON_PETROLCAN"):
										case joaat("WEAPON_STICKYBOMB"):
										case joaat("WEAPON_GRENADE"):
										case joaat("WEAPON_BOTTLE"):
											break;
										default:
											func_135("ARM2_F07");
											break;
										}
									}
								}
						}
						break;
				}
				if (Local_113[iVar0 /*6*/].f_2 == 99)
				{
					Local_113[iVar0 /*6*/].f_1 = 0;
				}
			}
			iVar0++;
		}
	}
}

void func_135(char* sParam0)//Position - 0xC7B8
{
	bLocal_114 = true;
	bLocal_114 = bLocal_114;
	sLocal_115 = sLocal_115;
	sLocal_115 = sParam0;
}

void func_136(int iParam0, bool bParam1)//Position - 0xC7D5
{
	if (bParam1)
	{
		TASK::SET_SEQUENCE_TO_REPEAT(iLocal_298, true);
	}
	TASK::CLOSE_SEQUENCE_TASK(iLocal_298);
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_298);
	}
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_298);
}

void func_137()//Position - 0xC80B
{
	TASK::OPEN_SEQUENCE_TASK(&iLocal_298);
}

void func_139(int iParam0, int iParam1, int iParam2)//Position - 0xC854
{
	char cVar0[64];
	if (Local_69[iParam0 /*10*/] == iParam1)
	{
		Local_69[iParam0 /*10*/].f_6 = iParam2;
	}
	else
	{
		StringCopy(&cVar0, "", 64);
		StringConCat(&cVar0, "SET_ACTION_FLAG() fail:", 64);
		StringConCat(&cVar0, func_140(iParam1), 64);
	}
}

char* func_140(int iParam0)//Position - 0xC88F
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "	ACT_NULL	 ";
			break;
		case 1:
			sVar0 = "	ACT_LAMAR_RUNS_UP_TO_CAR	 ";
			break;
		case 2:
			sVar0 = "	ACT_LAMAR_FOLLOWS_PLAYER	 ";
			break;
		case 3:
			sVar0 = "	ACT_SET_GARAGE_DOORS_LOCKED	 ";
			break;
		case 4:
			sVar0 = "	ACT_STOP_FOLLOWING_LAMAR_DOWN_ALLEY	 ";
			break;
		case 5:
			sVar0 = "	ACT_GET_PLAYER_CAR	 ";
			break;
		case 6:
			sVar0 = "	ACT_GPS_CUSTOM_ROUTE	 ";
			break;
		case 7:
			sVar0 = "	ACT_SIMEON	 ";
			break;
		case 8:
			sVar0 = "	ACT_SET_PLAYER_THROUGH_DRIVER_DOOR	 ";
			break;
		case 9:
			sVar0 = "	ACT_TURN_ON_CAR_RADIO	 ";
			break;
		case 10:
			sVar0 = "	ACT_LOCK_SHOWROOM_CARS	 ";
			break;
		case 11:
			sVar0 = "	ACT_AUDIO_SCENE_ARM_2_DRIVE_TO_ALLEY	 ";
			break;
		case 12:
			sVar0 = "	ACT_SET_GARAGE_VEHICLES_AS_NO_LONGER_NEEDED	 ";
			break;
		case 13:
			sVar0 = "	ACT_RELEASE_MISSION_TRIGGER	 ";
			break;
		case 14:
			sVar0 = "	ACT_SPAWN_FAIL_RESPONSE_ELSALVS	 ";
			break;
		case 15:
			sVar0 = "	ACT_BUDDY_HEAD_TRACKING	 ";
			break;
		case 16:
			sVar0 = "	ACT_LEMAR_EXITS_CAR	 ";
			break;
		case 17:
			sVar0 = "	action_LEMAR_APPROACHES_GATE	 ";
			break;
		case 18:
			sVar0 = "	action_player_exits_car	 ";
			break;
		case 19:
			sVar0 = "	ACTION_BUM_STAGGERS_FROM_GARAGE	 ";
			break;
		case 20:
			sVar0 = "	ACTION_LEMAR_WALKS_TOWARDS_BUM	 ";
			break;
		case 21:
			sVar0 = "	ACTION_LEMAR_INTERRACTS_WITH_BUM	 ";
			break;
		case 22:
			sVar0 = "	ACTION_LEMAR_IGNORES_BUM_IF_HIT	 ";
			break;
		case 23:
			sVar0 = "	ACTION_BUM_RETURNS_TO_GARAGE	 ";
			break;
		case 24:
			sVar0 = "	ACTION_WAIT_FOR_PLAYER_TO_CLIMB_GATE	 ";
			break;
		case 25:
			sVar0 = "	ACTION_VEHICLE_DRIVES_OFF	 ";
			break;
		case 26:
			sVar0 = "	ACTION_PLAYER_LOOK_ABOUT	 ";
			break;
		case 27:
			sVar0 = "	ACTION_LEMAR_LOOKS_AT_PASSING_CAR	 ";
			break;
		case 28:
			sVar0 = "	ACTION_DRUNK_GETS_UP_AFTER_LEMAR_INTERACTION	 ";
			break;
		case 29:
			sVar0 = "	ACTION_VEHICLE_BLOCKED_BY_PLAYER	 ";
			break;
		case 30:
			sVar0 = "	ACTION_VEHICLE_CONTINUES_DRIVING	 ";
			break;
		case 31:
			sVar0 = "	ACTION_LEMAR_REACTS_TO_PLAYER_BLOCKING_ELSAL	 ";
			break;
		case 32:
			sVar0 = "	ACTION_LEMAR_WAITS_FOR_PLAYER	 ";
			break;
		case 33:
			sVar0 = "	ACTION_LEMAR_RESUMES_WALK_DOWN_ALLEY	 ";
			break;
		case 34:
			sVar0 = "	ACTION_LEMAR_FOLLOWS_PLAYER_AT_GARAGES	 ";
			break;
		case 35:
			sVar0 = "	ACTION_PLAY_IDLES	 ";
			break;
		case 37:
			sVar0 = "	ACTION_LOAD_CUTSCENE	 ";
			break;
		case 38:
			sVar0 = "	ACTION_OPEN_GARAGE_1	 ";
			break;
		case 39:
			sVar0 = "	ACTION_OPEN_GARAGE_2	 ";
			break;
		case 40:
			sVar0 = "	ACTION_OPEN_GARAGE_3	 ";
			break;
		case 41:
			sVar0 = "	ACTION_LOCK_GARAGE_3	 ";
			break;
		case 42:
			sVar0 = "	ACTION_MUSIC_AT_BUM	 ";
			break;
		case 43:
			sVar0 = "	ACTION_INITIALISE_DRIVEOFF_VEHICLE	 ";
			break;
		case 44:
			sVar0 = "	ACT_UNFREEZE_DRIVEOFF_CAR	 ";
			break;
		case 45:
			sVar0 = "	ACT_LAMAR_LOOK_AT_GARAGES_ON_APPROACH	 ";
			break;
		case 46:
			sVar0 = "	ACT_REDUCE_PLAYER_SPEED	 ";
			break;
		case 47:
			sVar0 = "	ACT_ADUIO_END_ARM_2_DRIVE_TO_ALLEY	 ";
			break;
		case 48:
			sVar0 = "	ACTION_UPDATE_LAMAR_PROGRESS	 ";
			break;
		case 49:
			sVar0 = "	ACT_DRIVERS_LOOK_AT_PLAYER	 ";
			break;
		case 50:
			sVar0 = "	ACTION_LOCK_OPEN_GARAGE_3	 ";
			break;
		case 52:
			sVar0 = "	ACTION_LEMAR_EXITS_GARAGE	 ";
			break;
		case 53:
			sVar0 = "	ACTION_LEMAR_ADVANCES_TO_POST	 ";
			break;
		case 54:
			sVar0 = "	ACTION_MAKE_LAMAR_INVINCIBLE	 ";
			break;
		case 55:
			sVar0 = "	ACTION_LEMAR_ADVANCES_TO_PORTALOO	 ";
			break;
		case 56:
			sVar0 = "	ACTION_LEMAR_DIVERTS_TO_BISON	 ";
			break;
		case 58:
			sVar0 = "	ACTION_LEMAR_REACTS_TO_GUNFIRE	 ";
			break;
		case 59:
			sVar0 = "	ACTION_LEMAR_ADVANCES_AFTER_PORTALOO	 ";
			break;
		case 60:
			sVar0 = "	ACTION_LEMAR_MOVES_TO_COVER	 ";
			break;
		case 61:
			sVar0 = "	ACTION_LAMAR_SHOOTS_CAR	 ";
			break;
		case 62:
			sVar0 = "	acTION_lemar_RUN_TOWARDS_GATE	 ";
			break;
		case 63:
			sVar0 = "	ACTION_FORCE_GARAGE	 ";
			break;
		case 64:
			sVar0 = "	action_make_balcony_destructible	 ";
			break;
		case 65:
			sVar0 = "	ACTION_MAKE_CAR_TYRE_BURST	 ";
			break;
		case 66:
			sVar0 = "	ACTION_SET_STAGE_STUFF	 ";
			break;
		case 67:
			sVar0 = "	ACTION_ENEMY_BACKS_OFF	 ";
			break;
		case 68:
			sVar0 = "	ACTION_ENEMY_BY_BISON	 ";
			break;
		case 69:
			sVar0 = "	ACTION_ENEMY_FROM_LEFT	 ";
			break;
		case 70:
			sVar0 = "	ACTION_ENEMY_FROM_SKIP	 ";
			break;
		case 71:
			sVar0 = "	ACTION_ENEMY_FROM_SCAFFOLD	 ";
			break;
		case 72:
			sVar0 = "	ACTION_SCAFFOLD_PED_DROPS	 ";
			break;
		case 73:
			sVar0 = "	ACTION_ENEMY_AFTER_SCAFFOLD	 ";
			break;
		case 74:
			sVar0 = "	ACTION_ENEMY_ON_VERANDA	 ";
			break;
		case 75:
			sVar0 = "	ACTION_ENEMY_ON_BALCONY	 ";
			break;
		case 76:
			sVar0 = "	ACTION_ENEMY_FROM_DOOR	 ";
			break;
		case 77:
			sVar0 = "	ACTION_DRIVER_RUNS_TO_CAR	 ";
			break;
		case 78:
			sVar0 = "	ACTION_DRIVER_DRIVES_OFF	 ";
			break;
		case 79:
			sVar0 = "	ACTION_FLEEING_CAR_DAMAGE	 ";
			break;
		case 80:
			sVar0 = "	ACTION_PETROL_TRAIL	 ";
			break;
		case 81:
			sVar0 = "	ACTION_EXPLODE_CAR	 ";
			break;
		case 82:
			sVar0 = "	ACTION_LOCK_ON_TO_GAS	 ";
			break;
		case 83:
			sVar0 = "	ACTION_LOCK_ON_TO_GAS_TRAIL	 ";
			break;
		case 84:
		case 85:
			sVar0 = "	ACTION_MUSIC_SHOOTOUT	 ";
			break;
		case 86:
			sVar0 = "	ACTION_UNFREEZE_FLEE_CAR_IF_ENTERED 	 ";
			break;
		case 87:
			sVar0 = "	ACT_STAT_PROPANE 	 ";
			break;
		case 91:
		case 92:
			sVar0 = "	ACTION_REMOVE_ALLEYWAY_ASSETS	 ";
			break;
		case 93:
			sVar0 = "	ACTION_PREP_CHASE_STAGE	 ";
			break;
		case 94:
			sVar0 = "	ACTION_DEAL_WITH_STUCK_BIKER	 ";
			break;
		case 95:
			sVar0 = "	ACTION_BIKER_FLEES	 ";
			break;
		case 96:
			sVar0 = "	ACTION_LEMAR_FOLLOW_PLAYER	 ";
			break;
		case 97:
			sVar0 = "	ACTION_BIKER_REACTS_TO_PLAYER_CLOSING_IN	 ";
			break;
		case 98:
			sVar0 = "	ACTION_BIKER_REACTS_TO_BEING_JACKED	 ";
			break;
		case 99:
			sVar0 = "	ACTION_BIKER_REACTS_TO_COMING_OFF_BIKE	 ";
			break;
		case 100:
			sVar0 = "	ACTION_MUSIC_CHASE	 ";
			break;
		case 101:
			sVar0 = "	ACTION_MUSIC_IN_CAR	 ";
			break;
		case 102:
			sVar0 = "	ACTION_MUSIC_BIKER_DOWN	 ";
			break;
		case 103:
			sVar0 = "	ACTION_ENSURE_LAMAR_CLIMBS_GATE	 ";
			break;
		case 104:
			sVar0 = "	ACTION_LAMAR_GETS_IN_PLAYER_CAR	 ";
			break;
		case 108:
			sVar0 = "	ACT_SET_LAMAR_FOR_STAGE	 ";
			break;
		case 109:
			sVar0 = "	ACT_LAMAR_GETS_IN_DRIVER_SEAT	 ";
			break;
		case 110:
			sVar0 = "	ACT_LAMAR_HEADS_BACK_HOME	 ";
			break;
		case 112:
			sVar0 = "	ACT_LAMAR_DRIVES_BACK_TO_HOME	 ";
			break;
		case 113:
			sVar0 = "	ACT_LAMAR_EXITS_UNDRIVEABLE_CAR	 ";
			break;
		case 114:
			sVar0 = "	ACT_LAMAR_GETS_IN_ANY_CAR	 ";
			break;
		case 116:
			sVar0 = "	ACT_STUCK_BIKE_CHECK	 ";
			break;
		case 117:
			sVar0 = "	ACT_LOAD_CUTSENE	 ";
			break;
		case 118:
			sVar0 = "	ACT_WARP_LAMAR_BACK	 ";
			break;
		case 119:
			sVar0 = "	ACT_STAT_BIKE_DAMAGE	 ";
			break;
		case 120:
			sVar0 = "	ACT_DO_HINT_CAM	 ";
			break;
		case 121:
			sVar0 = "	ACT_CUTSCENE_LEAD_IN	 ";
			break;
		default:
			sVar0 = " -NOT DEFINED-";
			break;
	}
	return sVar0;
}

int func_141(int iParam0, int iParam1)//Position - 0xCF18
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_72.f_0)
	{
		if (iParam0 == Local_72[iVar0 /*7*/])
		{
			if (iParam1 == 1)
			{
				Local_72[iVar0 /*7*/].f_2 = 1;
			}
			else
			{
				Local_72[iVar0 /*7*/].f_2 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_161(int iParam0, int iParam1, struct<3> Param2, float fParam3, float fParam4)//Position - 0x15105
{
	if (iParam0 == -1 || iParam0 >= 10)
	{
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[iParam0 /*2*/], false))
	{
		if (ENTITY::GET_ENTITY_MODEL(Local_95[iParam0 /*2*/]) != iParam1 && iParam1 != 0)
		{
			VEHICLE::DELETE_VEHICLE(&(Local_95[iParam0 /*2*/]));
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_95[iParam0 /*2*/]))
	{
		Local_95[iParam0 /*2*/] = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, true, true, false);
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_95[iParam0 /*2*/], false))
	{
		ENTITY::SET_ENTITY_COORDS(Local_95[iParam0 /*2*/], Param2, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_95[iParam0 /*2*/], fParam3);
	}
	else
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_95[iParam0 /*2*/]));
		Local_95[iParam0 /*2*/] = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, true, true, false);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[iParam0 /*2*/], false))
	{
		if (fParam4 != -100f)
		{
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_95[iParam0 /*2*/], fParam4);
		}
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_95[iParam0 /*2*/]))
		{
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_95[iParam0 /*2*/], false);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_95[iParam0 /*2*/], false);
		}
	}
}

int func_162(int iParam0, int iParam1, int iParam2)//Position - 0x1521C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_113[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_113[iVar0 /*6*/] == iParam0)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_113[iVar0 /*6*/].f_1 == 0)
		{
			Local_113[iVar0 /*6*/].f_1 = 1;
			Local_113[iVar0 /*6*/] = iParam0;
			Local_113[iVar0 /*6*/].f_2 = 0;
			Local_113[iVar0 /*6*/].f_4 = iParam2;
			Local_113[iVar0 /*6*/].f_5 = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_163()//Position - 0x152AC
{
	if (iLocal_261 == 1)
	{
		GRAPHICS::DRAW_LIGHT_WITH_RANGE(-1089.7656f, -1631.0648f, 8.9467f, 255, 255, 200, 7f, 1f);
	}
	if (iLocal_262 == 1)
	{
		GRAPHICS::DRAW_LIGHT_WITH_RANGE(-1085.957f, -1662.7239f, 8.6111f, 255, 255, 200, 7f, 1f);
	}
}

void func_164()//Position - 0x152F4
{
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
	HUD::CLEAR_PRINTS();
	__LIB_0__::func_526(0, 0);
	func_676(0);
}

int func_167()//Position - 0x15427
{
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
	if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
		iLocal_96 = 3;
	}
	switch (iLocal_96)
	{
		case 0:
			sLocal_213 = "Armenian_2_mcs_6";
			func_260();
			CUTSCENE::REQUEST_CUTSCENE(sLocal_213, 8);
			iLocal_96 = 1;
			break;
		case 1:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_43__::func_498("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
				if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 0, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 1, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 2, 2, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 3, 2, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 4, 3, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 5, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 7, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 8, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 9, 0, 0, 0);
				}
			}
			if (__LIB_0__::func_90())
			{
				func_605(11);
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[4 /*2*/], false))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_95[4 /*2*/], true);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95[4 /*2*/], "Armenian_bike", 1, joaat("bagger"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_94[2 /*14*/]))
				{
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_94[2 /*14*/], "Lamar", 1, joaat("IG_LamarDavis"), 3);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_211))
				{
					OBJECT::DELETE_OBJECT(&iLocal_211);
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_RIDE_BIKE_BACK"))
				{
					AUDIO::STOP_AUDIO_SCENE("ARM_2_RIDE_BIKE_BACK");
				}
				CUTSCENE::START_CUTSCENE(0);
				PED::REMOVE_SCENARIO_BLOCKING_AREAS();
				PED::ADD_SCENARIO_BLOCKING_AREA(-21.8129f, -1454.3429f, 20.7942f, -17.8129f, -1450.3429f, 40.7942f, false, true, true, true);
				PATHFIND::SET_PED_PATHS_IN_AREA(-21.8129f, -1454.3429f, 20.7942f, -17.8129f, -1450.3429f, 40.7942f, false, 0);
				PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(-12.5851f, -1471.319f, 30.9463f, 6f, 1);
				RECORDING::REPLAY_START_EVENT(4);
				iLocal_96 = 2;
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
				{
					__LIB_42__::func_361(-9.370698f, -1402.7454f, 26.931702f, -9.507262f, -1386.3033f, 32.583607f, 270.39f, -17.2307f, -1412.0204f, 28.3117f, 0f, 6f, 20f, 10f, 1, 1, 1, 0, 0);
					if (__LIB_0__::func_724(Local_95[0 /*2*/], -5.3f, -1396f, 29f, 1) < 7f)
					{
						MISC::CLEAR_AREA(-17.347f, -1401.3712f, 28.3343f, 3f, true, false, false, false);
						ENTITY::SET_ENTITY_COORDS(Local_95[0 /*2*/], -17.347f, -1401.3712f, 28.3343f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_95[0 /*2*/], 270f);
					}
				}
				MISC::CLEAR_AREA(-5.3f, -1396f, 29f, 5f, true, false, false, false);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				CAM::STOP_GAMEPLAY_HINT(true);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
				MISC::CLEAR_AREA_OF_PROJECTILES(-17.0167f, -1456.2312f, 29.6774f, 40f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-17.0167f, -1456.2312f, 29.6774f, 40f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_PEDS(-17.0167f, -1456.2312f, 29.6774f, 8f, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				}
				iLocal_96 = 3;
			}
			break;
		case 3:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
				RECORDING::REPLAY_STOP_EVENT();
				return 1;
			}
			break;
	}
	return 0;
}

void func_260()//Position - 0x2DC07
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_111.f_0 - 1))
	{
		Local_111[iVar0 /*12*/] = 0;
		Local_111[iVar0 /*12*/].f_1 = -1;
		Local_111[iVar0 /*12*/].f_2 = -1;
		Local_111[iVar0 /*12*/].f_3 = 0;
		Local_111[iVar0 /*12*/].f_5 = -1;
		Local_111[iVar0 /*12*/].f_10 = 0;
		iVar0++;
	}
	HUD::CLEAR_HELP(true);
	__LIB_1__::func_674(1);
}

int func_263()//Position - 0x2DD01
{
	func_566(137, 156);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	func_487(0, 25, 2, 145, 1, 0, 1, 0);
	func_487(1, 26, 2, 145, 1, 0, 1, 0);
	func_487(2, 27, 3, 145, 1, 0, 1, 0);
	func_350(0, 108, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(1, 109, 1, 2, 139, 5, 140, 4, 144, 1, 0, 1, 0);
	func_350(2, 110, 0, 2, 143, 5, 140, 1, 0, 1, 0, 1, 0);
	func_350(3, 114, 1, 3, 141, 4, 144, 5, 140, 1, 0, 1, 0);
	func_350(14, 115, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(4, 113, 1, 2, 141, 4, 142, 5, 140, 1, 0, 1, 0);
	func_350(7, 118, 0, 2, 150, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(6, 117, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(8, 119, 0, 2, 145, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(9, 121, 0, 2, 151, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(10, 120, 0, 2, 151, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(5, 116, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(11, 92, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(12, 105, 1, 2, 153, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(13, 107, 0, 2, 145, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(15, 106, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_308(0, 69, 0, 0, 1, 0, 1, 0, 1, 0);
	func_306(1, 70, 0, 69, 2, 143, 6, 149, 1, 0, 1, 0);
	func_306(2, 71, 0, 69, 2, 152, 1, 0, 1, 0, 1, 0);
	func_308(3, 72, 2, 153, 5, 154, 5, 155, 1, 0);
	func_308(4, 73, 2, 153, 4, 155, 1, 0, 1, 0);
	func_265(7, 0, 0, 1, 0);
	func_265(9, 0, 0, 1, 0);
	if (func_264(9, 121))
	{
		return 1;
	}
	return 0;
}

int func_264(int iParam0, int iParam1)//Position - 0x2DEEE
{
	if (Local_69[iParam0 /*10*/] == iParam1)
	{
		if (Local_69[iParam0 /*10*/].f_3 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_265(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2DF14
{
	if (func_300(iParam1, iParam2, iParam3, iParam4, 1, 0, 1, 0, 1, 0))
	{
		switch (iParam0)
		{
			case 1:
				if (!PED::IS_PED_INJURED(Local_94[4 /*14*/]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_94[4 /*14*/], joaat("WEAPON_PISTOL"), -1, true, true);
					func_137();
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					func_136(Local_94[4 /*14*/], 0);
				}
				if (!PED::IS_PED_INJURED(Local_94[5 /*14*/]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_94[5 /*14*/], joaat("WEAPON_PISTOL"), -1, true, true);
					func_137();
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					func_136(Local_94[5 /*14*/], 0);
				}
				func_1("ARM2_F01", 2000);
				break;
			case 2:
				if (!PED::IS_PED_INJURED(Local_94[4 /*14*/]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_94[4 /*14*/], joaat("WEAPON_PISTOL"), -1, true, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[4 /*14*/], 2, true);
					func_137();
					if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_COORDS(Local_94[4 /*14*/], 0, 0f, 0f, 0f), 1) > 1.4f)
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					}
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					func_136(Local_94[4 /*14*/], 0);
				}
				if (!PED::IS_PED_INJURED(Local_94[5 /*14*/]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_94[5 /*14*/], joaat("WEAPON_PISTOL"), -1, true, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[5 /*14*/], 2, true);
					func_137();
					if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_COORDS(Local_94[5 /*14*/], 0, 0f, 0f, 0f), 1) > 1.4f)
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					}
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					func_136(Local_94[5 /*14*/], 0);
				}
				func_1("ARM2_F01", 1500);
				break;
			case 14:
				func_1("ARM2_F01", 2000);
				break;
			case 15:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[1 /*2*/], false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_95[1 /*2*/]))
					{
						if (iLocal_301 == 4 && fLocal_303 == 1f)
						{
							if (!__LIB_38__::func_124(Local_94[2 /*14*/], -1133.0366f, -1583.8027f, 2.556583f, -1129.5211f, -1588.6295f, 6.842f, 5.125f))
							{
								if (!PED::IS_PED_INJURED(Local_94[4 /*14*/]))
								{
									WEAPON::GIVE_WEAPON_TO_PED(Local_94[4 /*14*/], joaat("WEAPON_PISTOL"), -1, true, true);
									func_137();
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
									TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
									func_136(Local_94[4 /*14*/], 0);
								}
								if (!PED::IS_PED_INJURED(Local_94[5 /*14*/]))
								{
									WEAPON::GIVE_WEAPON_TO_PED(Local_94[5 /*14*/], joaat("WEAPON_PISTOL"), -1, true, true);
									func_137();
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
									TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
									func_136(Local_94[5 /*14*/], 0);
								}
								while (!func_279("AR2_BLOCK2", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									SYSTEM::WAIT(0);
								}
								func_1("ARM2_F01", 2000);
							}
						}
					}
				}
				break;
			case 3:
				func_1("ARM2_F01", 2000);
				break;
			case 4:
				if (iLocal_301 == 9)
				{
					func_277(22, -1128.1415f, -1605.52f, 3.3985f, 341.9648f, joaat("WEAPON_PISTOL"), 0, 0, -1);
					func_277(23, -1127.1313f, -1607.1345f, 3.3985f, 2.1088f, joaat("WEAPON_PISTOL"), 0, 0, -1);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()), iLocal_98);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_98, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
					PED::SET_PED_TARGET_LOSS_RESPONSE(Local_94[22 /*14*/], 1);
					PED::SET_PED_TARGET_LOSS_RESPONSE(Local_94[23 /*14*/], 1);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_94[22 /*14*/], 150f, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_94[23 /*14*/], 150f, 0);
					PED::SET_COMBAT_FLOAT(Local_94[22 /*14*/], 2, 6f);
					PED::SET_COMBAT_FLOAT(Local_94[22 /*14*/], 13, 5f);
					PED::SET_COMBAT_FLOAT(Local_94[23 /*14*/], 2, 6f);
					PED::SET_COMBAT_FLOAT(Local_94[23 /*14*/], 13, 5f);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[22 /*14*/], 50, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[23 /*14*/], 50, true);
					__LIB_0__::func_666(Local_94[22 /*14*/], 1, 145);
					__LIB_0__::func_666(Local_94[23 /*14*/], 1, 145);
					__LIB_0__::func_429();
					HUD::CLEAR_PRINTS();
					while (!func_279("ARM2_GET4", 8, Local_94[22 /*14*/], "ARM2VAGOS4", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						SYSTEM::WAIT(0);
					}
					func_1("ARM2_F11", 2000);
				}
				break;
			case 6:
				if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[2 /*14*/], 1) > 100f && !__LIB_0__::func_329())
					{
						func_1("ARM2_F05", 0);
					}
					if (iLocal_92 < 9 && iLocal_92 >= 7)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1136.1719f, -1579.0503f, 2.68122f, -1129.5428f, -1588.6448f, 7.067074f, 56.75f, false, true, 0))
						{
							func_1("ARM2_F05", 0);
						}
					}
				}
				break;
			case 8:
				if (ENTITY::DOES_ENTITY_EXIST(Local_95[4 /*2*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[4 /*2*/], false))
					{
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_95[4 /*2*/], 1) > 500f)
						{
							func_266("ARM2_F06", "ARM2_LOSEB");
						}
					}
				}
				break;
			case 7:
				if (ENTITY::DOES_ENTITY_EXIST(Local_95[4 /*2*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[4 /*2*/], false))
					{
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_95[4 /*2*/], 1) > 500f)
						{
							func_1("ARM2_F09", 0);
						}
					}
				}
				break;
			case 5:
				func_1("ARM2_F07", 0);
				break;
			case 9:
				if (ENTITY::DOES_ENTITY_EXIST(Local_94[2 /*14*/]))
				{
					if (PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						func_1("ARM2_F02", 0);
					}
				}
				break;
			case 10:
				if (ENTITY::DOES_ENTITY_EXIST(Local_94[3 /*14*/]))
				{
					if (PED::IS_PED_INJURED(Local_94[3 /*14*/]))
					{
						func_1("ARM2_F10", 0);
					}
				}
				break;
			case 11:
				break;
			case 12:
				if (iLocal_304 > 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_94[22 /*14*/]))
					{
						iLocal_304 = -1;
					}
				}
				if (iLocal_304 == 0)
				{
					iLocal_304 = MISC::GET_GAME_TIMER() + 4000;
				}
				if (MISC::GET_GAME_TIMER() > iLocal_304)
				{
					func_1("ARM2_F01", 0);
				}
				break;
			case 13:
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					func_1("ARM2_F01", 0);
				}
				break;
			}
	}
}

void func_266(char* sParam0, char* sParam1)//Position - 0x2E56C
{
	__LIB_0__::func_638();
	while (!func_279(sParam1, 0, PLAYER::PLAYER_PED_ID(), "Franklin", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
	{
		func_20(18, 0);
	}
	while (!__LIB_15__::func_965(sParam1))
	{
		func_20(19, 0);
	}
	while (__LIB_15__::func_965(sParam1))
	{
		func_20(20, 0);
	}
	while (!AUDIO::TRIGGER_MUSIC_EVENT("ARM2_MISSION_FAIL"))
	{
		func_20(21, 0);
	}
	func_3(sParam0);
	while (!__LIB_0__::func_223())
	{
		SYSTEM::WAIT(0);
	}
	func_676(1);
}

int func_277(int iParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2E80B
{
	int iVar0;
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
	{
		iVar0 = iLocal_259;
	}
	else
	{
		iVar0 = iLocal_260;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_94[iParam0 /*14*/]))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_94[iParam0 /*14*/]));
	}
	if (iParam5 == 0)
	{
		Local_94[iParam0 /*14*/] = PED::CREATE_PED(26, iVar0, Param1, fParam2, true, true);
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iParam5, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam5, iParam6, false))
		{
			Local_94[iParam0 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(iParam5, 26, iVar0, iParam6, true, true);
		}
	}
	WEAPON::GIVE_WEAPON_TO_PED(Local_94[iParam0 /*14*/], iParam3, 1000, true, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_94[iParam0 /*14*/], iLocal_98);
	if (iParam4 == 1)
	{
	}
	else
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[iParam0 /*14*/], 8, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[iParam0 /*14*/], 9, false);
		PED::SET_PED_CONFIG_FLAG(Local_94[iParam0 /*14*/], 118, false);
	}
	PED::SET_PED_DIES_WHEN_INJURED(Local_94[iParam0 /*14*/], true);
	ENTITY::SET_ENTITY_HEALTH(Local_94[iParam0 /*14*/], 130, 0);
	PED::SET_PED_MAX_HEALTH(Local_94[iParam0 /*14*/], 130);
	PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_94[iParam0 /*14*/], 100f);
	PED::SET_PED_TARGET_LOSS_RESPONSE(Local_94[iParam0 /*14*/], 1);
	PED::SET_PED_ACCURACY(Local_94[iParam0 /*14*/], 30);
	__LIB_0__::func_609(Local_94[iParam0 /*14*/], 0);
	if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
	{
		PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_94[2 /*14*/], 100f);
	}
	iLocal_74 = MISC::GET_GAME_TIMER() + 1000;
	return 1;
}

int func_279(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)//Position - 0x2EA01
{
	if (!__LIB_0__::func_75())
	{
		func_297(sParam0, iParam1, iParam4, iParam7, iParam10);
		func_294(iParam1, iParam2, sParam3);
		if (iParam4 != -1)
		{
			func_294(iParam4, iParam5, sParam6);
		}
		if (iParam7 != -1)
		{
			func_294(iParam7, iParam8, sParam9);
		}
		if (iParam10 != -1)
		{
			func_294(iParam10, iParam11, sParam12);
		}
		if (HUD::IS_MESSAGE_BEING_DISPLAYED() && HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (__LIB_38__::func_746(&Local_102, cLocal_107, sParam0, iParam13, 1, 0, 0))
			{
				bLocal_49 = true;
				return 1;
			}
		}
		else if (__LIB_38__::func_746(&Local_102, cLocal_107, sParam0, iParam13, 0, 0, 0))
		{
			bLocal_49 = false;
			return 1;
		}
	}
	return 0;
}

void func_294(int iParam0, int iParam1, char* sParam2)//Position - 0x2F1BE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_290)
	{
		if (iLocal_290[iVar0] == iParam1)
		{
			__LIB_0__::func_221(&Local_102, iVar0);
			iLocal_290[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_290[iParam0] != 0)
	{
		__LIB_0__::func_221(&Local_102, iParam0);
	}
	__LIB_0__::func_222(&Local_102, iParam0, iParam1, sParam2, 0, 1);
	iLocal_290[iParam0] = iParam1;
}

void func_297(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2F2DB
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_291) || !MISC::ARE_STRINGS_EQUAL(sLocal_291, sParam0))
	{
		sLocal_291 = sParam0;
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (Local_102[iVar0 /*10*/].f_7)
			{
				if (((iVar0 != iParam1 && iVar0 != iParam2) && iVar0 != iParam3) && iVar0 != iParam4)
				{
					__LIB_0__::func_221(&Local_102, iVar0);
				}
			}
			iVar0++;
		}
	}
}

int func_300(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x2F3D3
{
	bLocal_70 = false;
	iLocal_71 = 0;
	if (func_301(&bLocal_70, &iLocal_71, iParam0, iParam1))
	{
		if (func_301(&bLocal_70, &iLocal_71, iParam2, iParam3))
		{
			if (func_301(&bLocal_70, &iLocal_71, iParam4, iParam5))
			{
				if (func_301(&bLocal_70, &iLocal_71, iParam6, iParam7))
				{
					if (func_301(&bLocal_70, &iLocal_71, iParam8, iParam9))
					{
					}
				}
			}
		}
	}
	if (bLocal_70)
	{
		return 1;
	}
	return 0;
}

int func_301(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2F443
{
	switch (iParam2)
	{
		case 0:
			*iParam0 = 1;
			break;
		case 1:
			return 0;
			break;
		case 2:
			if (iParam3 == 0 || (iParam3 != 0 && func_305(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		case 3:
			if (iParam3 == 0 || (iParam3 != 0 && func_304(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		case 6:
			if (iParam3 == 0 || (iParam3 != 0 && func_305(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		case 8:
			if (*iParam0)
			{
				return 0;
			}
			else
			{
				*iParam1 = 1;
				if (iParam3 == 0 || (iParam3 != 0 && func_305(iParam3)))
				{
					*iParam0 = 1;
				}
			}
			break;
		case 4:
			if (iParam3 != 0 && func_304(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		case 5:
			if (iParam3 != 0 && func_305(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		case 7:
			if (func_303(iParam3))
			{
				if (func_304(iParam3))
				{
					*iParam0 = 1;
				}
				else
				{
					*iParam0 = 0;
				}
			}
			else
			{
				if (func_305(iParam3))
				{
					func_302(iParam3);
				}
				*iParam0 = 0;
			}
			break;
	}
	return 1;
}

void func_302(int iParam0)//Position - 0x2F59C
{
	int iVar0;
	iVar0 = (iParam0 - Local_72[0 /*7*/]);
	if (Local_72[iVar0 /*7*/] == iParam0)
	{
		Local_72[iVar0 /*7*/].f_3 = 1;
	}
}

int func_303(int iParam0)//Position - 0x2F5C8
{
	int iVar0;
	iVar0 = (iParam0 - Local_72[0 /*7*/]);
	if (Local_72[iVar0 /*7*/] == iParam0)
	{
		if (Local_72[iVar0 /*7*/].f_1 && Local_72[iVar0 /*7*/].f_3)
		{
			return 1;
		}
	}
	return 0;
}

int func_304(int iParam0)//Position - 0x2F609
{
	int iVar0;
	iVar0 = (iParam0 - Local_72[0 /*7*/]);
	if (Local_72[iVar0 /*7*/] == iParam0)
	{
		if (Local_72[iVar0 /*7*/].f_1 && !Local_72[iVar0 /*7*/].f_2)
		{
			return 1;
		}
	}
	return 0;
}

int func_305(int iParam0)//Position - 0x2F64B
{
	int iVar0;
	iVar0 = (iParam0 - Local_72[0 /*7*/]);
	if (Local_72[iVar0 /*7*/] == iParam0)
	{
		if (Local_72[iVar0 /*7*/].f_1 && Local_72[iVar0 /*7*/].f_2)
		{
			return 1;
		}
	}
	return 0;
}

void func_306(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x2F68C
{
	if (!Local_66[iParam0 /*6*/].f_1)
	{
		if (func_307(iParam2, iParam3))
		{
			func_308(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11);
		}
	}
}

int func_307(int iParam0, int iParam1)//Position - 0x2F6C3
{
	if (Local_66[iParam0 /*6*/] == iParam1)
	{
		if (Local_66[iParam0 /*6*/].f_1)
		{
			return 1;
		}
	}
	else if (Local_66[iParam0 /*6*/] != 0)
	{
	}
	return 0;
}

void func_308(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x2F6F3
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (Local_66[iParam0 /*6*/] != iParam1)
	{
		Local_66[iParam0 /*6*/].f_1 = 0;
		Local_66[iParam0 /*6*/] = iParam1;
	}
	if (!Local_66[iParam0 /*6*/].f_1)
	{
		if (func_300(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 1, 0) && !bLocal_114)
		{
			if (!Local_66[iParam0 /*6*/].f_2)
			{
				Local_66[iParam0 /*6*/].f_2 = 1;
			}
			switch (Local_66[iParam0 /*6*/])
			{
				case 0:
					break;
				case 1:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (bLocal_49)
							{
								if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
									{
										cLocal_57 = { __LIB_0__::func_485() };
										if (!__LIB_15__::func_954(&cLocal_57))
										{
											Local_61 = { __LIB_0__::func_486() };
										}
										__LIB_0__::func_638();
										Local_66[iParam0 /*6*/].f_3++;
									}
								}
							}
							break;
						case 1:
							if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Local_66[iParam0 /*6*/].f_3 = 0;
							}
							break;
					}
					break;
				case 2:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_279("AR2_BU01b", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3++;
								Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 3000;
							}
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_66[iParam0 /*6*/].f_4)
							{
								if (__LIB_0__::func_786(6, 0))
								{
									if (__LIB_0__::func_786(6, 1))
									{
										iLocal_269 = func_329(PLAYER::PLAYER_PED_ID(), 2);
										if (iLocal_269 == 3)
										{
											if (func_279("AR2_BU27", 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_48 = 1;
												__LIB_13__::func_782(6, 0, 0);
												Local_66[iParam0 /*6*/].f_3++;
											}
										}
										if (iLocal_269 == 1)
										{
											if (func_279("AR2_BU27b", 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_48 = 1;
												__LIB_13__::func_782(6, 0, 0);
												Local_66[iParam0 /*6*/].f_3++;
											}
										}
										if (iLocal_269 == 2)
										{
											if (func_279("AR2_BU27", 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_48 = 1;
												__LIB_13__::func_782(6, 0, 0);
												Local_66[iParam0 /*6*/].f_3++;
											}
										}
										if (iLocal_269 == 4)
										{
											if (func_279("AR2_BU27b", 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_48 = 1;
												__LIB_13__::func_782(6, 0, 0);
												Local_66[iParam0 /*6*/].f_3++;
											}
										}
									}
									else if (func_279("AR2_BU31", 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_48 = 1;
										Local_66[iParam0 /*6*/].f_3++;
									}
								}
							}
							break;
						case 2:
							if (!__LIB_0__::func_75())
							{
								Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 3000;
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						case 3:
							if (func_305(6) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
							{
								if (func_279("inCar", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_66[iParam0 /*6*/].f_3++;
									Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 9000;
								}
							}
							else if (MISC::GET_GAME_TIMER() > Local_66[iParam0 /*6*/].f_4)
							{
								if (func_279("get_wheels", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_66[iParam0 /*6*/].f_3++;
									Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 11000;
								}
							}
							break;
						case 4:
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							else if (MISC::GET_GAME_TIMER() > Local_66[iParam0 /*6*/].f_4)
							{
								if (func_279("ARM2_NODRIVE", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_66[iParam0 /*6*/].f_4 = (MISC::GET_GAME_TIMER() + 10000 + Local_66[iParam0 /*6*/].f_5 * 7000);
									Local_66[iParam0 /*6*/].f_5++;
									if (Local_66[iParam0 /*6*/].f_5 == 3)
									{
										Local_66[iParam0 /*6*/].f_1 = 1;
									}
								}
							}
							break;
					}
					break;
				case 10:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (!PED::IS_PED_INJURED(Local_94[3 /*14*/]))
							{
								if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -31.3082f, -1102.6906f, 25.4223f, 1) < 3.25f)
								{
									if (func_279("AR2_SIEMON", 5, Local_94[3 /*14*/], "SIMEON", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_66[iParam0 /*6*/].f_3++;
										Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 10000;
										Local_66[iParam0 /*6*/].f_5++;
									}
								}
							}
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_66[iParam0 /*6*/].f_4)
							{
								if (Local_66[iParam0 /*6*/].f_5 == 3)
								{
									Local_66[iParam0 /*6*/].f_1 = 1;
								}
								else
								{
									Local_66[iParam0 /*6*/].f_3 = 0;
								}
							}
							break;
					}
					break;
				case 11:
					if (func_279("AR2_MESS", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 12:
					if (!PED::IS_PED_INJURED(Local_94[22 /*14*/]))
					{
						HUD::CLEAR_PRINTS();
						__LIB_0__::func_429();
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (func_279("ARM2_GET4", 8, Local_94[22 /*14*/], "ARM2VAGOS4", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
						}
					}
					break;
				case 5:
					if (Local_66[iParam0 /*6*/].f_4 < 2)
					{
						if (func_279("ARM2_WANT", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
						{
							func_141(18, 0);
							Local_66[iParam0 /*6*/].f_4++;
						}
					}
					else if (Local_66[iParam0 /*6*/].f_4 < 6)
					{
						if (func_279("ARM2_WANTb", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
						{
							func_141(18, 0);
							Local_66[iParam0 /*6*/].f_4++;
						}
					}
					break;
				case 6:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Local_95[0 /*2*/])))
						{
							if (Local_66[iParam0 /*6*/].f_5 < 2)
							{
								if (func_279("AR2_GETON", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									func_141(15, 0);
									Local_66[iParam0 /*6*/].f_5++;
								}
							}
						}
						else if (Local_66[iParam0 /*6*/].f_4 < 5)
						{
							if (func_279("ARM2_OUTCAR", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								func_141(15, 0);
								Local_66[iParam0 /*6*/].f_4++;
							}
						}
					}
					break;
				case 68:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Local_95[0 /*2*/])))
						{
							if (Local_66[iParam0 /*6*/].f_5 < 2)
							{
								if (func_279("AR2_GETON", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									func_141(15, 0);
									Local_66[iParam0 /*6*/].f_5++;
								}
							}
						}
						else if (Local_66[iParam0 /*6*/].f_4 < 5)
						{
							if (func_279("ARM2_BACKCH", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								func_141(15, 0);
								Local_66[iParam0 /*6*/].f_4++;
							}
						}
					}
					break;
				case 7:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
					{
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[2 /*14*/], 1) < 10f)
						{
							if (Local_66[iParam0 /*6*/].f_4 < 5)
							{
								if (func_279("ARM2_OUTCARB", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									func_141(17, 0);
									Local_66[iParam0 /*6*/].f_4++;
								}
							}
						}
					}
					break;
				case 8:
					if (Local_66[iParam0 /*6*/].f_4 < 5)
					{
						if (func_279("ARM2_BACKIN", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
						{
							func_141(16, 0);
							Local_66[iParam0 /*6*/].f_4++;
						}
					}
					break;
				case 64:
					if (Local_66[iParam0 /*6*/].f_4 < 5)
					{
						func_141(16, 0);
					}
					break;
				case 3:
					if (func_305(2) && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_61))
					{
						if (func_326(&Local_61, &cLocal_57, 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, 8))
						{
							iLocal_48 = 1;
							StringCopy(&Local_61, "", 24);
							StringCopy(&cLocal_57, "", 24);
							func_141(2, 0);
						}
					}
					else if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1134.2f, -1574.5f, 5.1f, 1) > 60f)
					{
						switch (Local_66[iParam0 /*6*/].f_3)
						{
							case 0:
								if (__LIB_0__::func_178(43))
								{
									if (func_279("AR2_BU02d", 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_48 = 1;
										Local_66[iParam0 /*6*/].f_3 = 4;
									}
								}
								else if (__LIB_0__::func_178(40))
								{
									if (func_279("AR2_BU02c", 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_48 = 1;
										Local_66[iParam0 /*6*/].f_3 = 4;
									}
								}
								else if (func_279("AR2_BU02", 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
								{
									iLocal_48 = 1;
									Local_66[iParam0 /*6*/].f_3 = 3;
								}
								break;
							case 3:
								if (func_279("AR2_BU02b", 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
								{
									iLocal_48 = 1;
									Local_66[iParam0 /*6*/].f_3++;
								}
								break;
							case 4:
								if (__LIB_0__::func_75())
								{
									Local_66[iParam0 /*6*/].f_3 = 7;
								}
								break;
							case 7:
								if (func_279("driveBant", 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
								{
									iLocal_48 = 1;
									Local_66[iParam0 /*6*/].f_3++;
								}
								break;
							case 9:
								if (__LIB_0__::func_75())
								{
									__LIB_0__::func_638();
									Local_66[iParam0 /*6*/].f_3++;
								}
								break;
							case 10:
								if (func_279("DriveApp1", 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
								{
									iLocal_48 = 1;
									Local_66[iParam0 /*6*/].f_3++;
								}
								break;
						}
					}
					else
					{
						__LIB_0__::func_638();
						iLocal_48 = 0;
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 14:
					if (func_279("AR2_BU04", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 13:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							__LIB_0__::func_638();
							Local_66[iParam0 /*6*/].f_3++;
							break;
						case 1:
							if (func_279("AR2_BU03", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						case 2:
							if (!__LIB_15__::func_965("AR2_BU03"))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 15:
					if (func_279("AR2_AN04", 3, Local_94[2 /*14*/], "Lamar", 1, Local_94[3 /*14*/], "Arm2bum", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 16:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_323("AR2_AN04b", "AR2_AN04b_1", 3, Local_94[2 /*14*/], "Lamar", 1, Local_94[3 /*14*/], "Arm2bum", -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						case 1:
							if (func_323("AR2_AN04b", "AR2_AN04b_2", 3, Local_94[2 /*14*/], "Lamar", 1, Local_94[3 /*14*/], "Arm2bum", -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 17:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 1000;
							Local_66[iParam0 /*6*/].f_3++;
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_66[iParam0 /*6*/].f_4)
							{
								if (func_323("AR2_AN04b", "AR2_AN04b_4", 3, Local_94[2 /*14*/], "Lamar", 1, Local_94[3 /*14*/], "Arm2bum", -1, 0, 0, 8))
								{
									Local_66[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
						case 2:
							if (!__LIB_15__::func_965("AR2_AN04b"))
							{
								AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_94[3 /*14*/], "AR2_DFAH", "ARM2bum", "SPEECH_PARAMS_FORCE_SHOUTED", false);
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 18:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							__LIB_0__::func_638();
							Local_66[iParam0 /*6*/].f_3++;
							break;
						case 1:
							if (func_279("AR2_AN04d", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 20:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 1000;
							Local_66[iParam0 /*6*/].f_3++;
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_66[iParam0 /*6*/].f_4)
							{
								if (func_279("AR2_see", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_66[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				case 39:
					if (!func_305(64))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[1 /*2*/], false))
						{
							if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
							{
								switch (Local_66[iParam0 /*6*/].f_3)
								{
									case 0:
										if (__LIB_0__::func_76(Local_95[1 /*2*/], Local_94[2 /*14*/], 1) < 6f)
										{
											Local_66[iParam0 /*6*/].f_3++;
										}
										break;
									case 1:
										if (func_279("AR2_AN05", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
										{
											Local_66[iParam0 /*6*/].f_1 = 1;
										}
										break;
									}
								}
						}
					}
					else
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 21:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_279("ARM2_OUT", 4, Local_94[4 /*14*/], "arm2VAGOSCAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						case 1:
							if (__LIB_15__::func_965("move"))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						case 2:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[1 /*2*/], false))
							{
								if (ENTITY::GET_ENTITY_SPEED(Local_95[1 /*2*/]) > 1f)
								{
									if (func_279("ARM2_OUT2", 4, Local_94[4 /*14*/], "arm2VAGOSCAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_66[iParam0 /*6*/].f_3++;
									}
								}
								else if (func_323("ARM2_OUT2", "ARM2_OUT2_2", 4, Local_94[4 /*14*/], "arm2VAGOSCAR", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_66[iParam0 /*6*/].f_3++;
								}
							}
							break;
						case 3:
							if (func_279("ARM2_OUT3", 4, Local_94[4 /*14*/], "arm2VAGOSCAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						case 4:
							if (func_279("ARM2_OUT4", 4, Local_94[4 /*14*/], "arm2VAGOSCAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 23:
					if (func_279("ARM2_GET4", 8, Local_94[4 /*14*/], "arm2VAGOS4", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						if (!PED::IS_PED_INJURED(Local_94[4 /*14*/]))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_94[4 /*14*/], joaat("WEAPON_PISTOL"), -1, true, true);
							func_137();
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							func_136(Local_94[4 /*14*/], 0);
						}
						if (!PED::IS_PED_INJURED(Local_94[5 /*14*/]))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_94[5 /*14*/], joaat("WEAPON_PISTOL"), -1, true, true);
							func_137();
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							func_136(Local_94[5 /*14*/], 0);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[1 /*2*/], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_95[1 /*2*/]))
							{
								Var0 = { ENTITY::GET_ENTITY_VELOCITY(Local_95[1 /*2*/]) };
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_95[1 /*2*/]);
								ENTITY::SET_ENTITY_VELOCITY(Local_95[1 /*2*/], Var0);
							}
						}
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 22:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (__LIB_15__::func_965("ARM2_OUT"))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						case 1:
							if (func_279("move", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 24:
					if (func_279("AR2_BU12", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 25:
					if (!PED::IS_PED_INJURED(Local_94[4 /*14*/]) && !PED::IS_PED_INJURED(Local_94[5 /*14*/]))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_DISABLED(Local_94[5 /*14*/]))
						{
							AUDIO::STOP_PED_SPEAKING(Local_94[5 /*14*/], true);
						}
						if (!AUDIO::IS_AMBIENT_SPEECH_DISABLED(Local_94[4 /*14*/]))
						{
							AUDIO::STOP_PED_SPEAKING(Local_94[4 /*14*/], true);
						}
						switch (Local_66[iParam0 /*6*/].f_3)
						{
							case 0:
								if (MISC::GET_GAME_TIMER() > Local_66[iParam0 /*6*/].f_4)
								{
									if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[4 /*14*/], 1) < 15f)
									{
										if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
										{
											AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_94[4 /*14*/], "CHAT_STATE", "SPEECH_PARAMS_FORCE", 1);
											Local_66[iParam0 /*6*/].f_3 = 2;
										}
										else
										{
											AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_94[5 /*14*/], "CHAT_STATE", "SPEECH_PARAMS_FORCE", 1);
											Local_66[iParam0 /*6*/].f_3 = 3;
										}
									}
								}
								break;
							case 2:
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_94[4 /*14*/]))
								{
									AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_94[5 /*14*/], "CHAT_RESP", "SPEECH_PARAMS_FORCE", 1);
									Local_66[iParam0 /*6*/].f_3 = 4;
								}
								break;
							case 3:
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_94[5 /*14*/]))
								{
									AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_94[4 /*14*/], "CHAT_RESP", "SPEECH_PARAMS_FORCE", 1);
									Local_66[iParam0 /*6*/].f_3 = 4;
								}
								break;
							case 4:
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_94[4 /*14*/]) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_94[5 /*14*/]))
								{
									Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 9000;
									Local_66[iParam0 /*6*/].f_3 = 0;
								}
								break;
							}
					}
					break;
				case 26:
					if (func_279("AR2_BU12", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 27:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 10000;
							Local_66[iParam0 /*6*/].f_3++;
							break;
						case 1:
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[2 /*14*/], 1) < 15f)
							{
								if (func_279("AR2_BU07", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_66[iParam0 /*6*/].f_1 = 1;
								}
							}
							else if (MISC::GET_GAME_TIMER() > Local_66[iParam0 /*6*/].f_4)
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 28:
					if (func_279("ARM2_adoor", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 29:
					if (func_279("ARM2_nextone", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 30:
					if (func_279("ARM2_last", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 31:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (__LIB_0__::func_501("ARM2_INS07", 0, 0))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						case 1:
							if (Local_66[iParam0 /*6*/].f_4 < 3)
							{
								if (func_279("WaitAtGar", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_66[iParam0 /*6*/].f_3++;
									Local_66[iParam0 /*6*/].f_4++;
									Local_66[iParam0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 4000;
									if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
									{
										__LIB_37__::func_204(Local_94[2 /*14*/]);
										TASK::TASK_LOOK_AT_ENTITY(Local_94[2 /*14*/], PLAYER::PLAYER_PED_ID(), 4000, 0, 2);
									}
								}
							}
							else
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
						default:
							if (MISC::GET_GAME_TIMER() > Local_66[iParam0 /*6*/].f_3)
							{
								__LIB_37__::func_205(Local_94[2 /*14*/], 1);
								Local_66[iParam0 /*6*/].f_3 = 1;
							}
							break;
					}
					break;
				case 19:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_319(14, 32) > 0)
							{
								if (!func_305(55))
								{
									if (func_279("AR2_BU12", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_66[iParam0 /*6*/].f_3 = 1;
									}
								}
								else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_94[2 /*14*/], true) - Vector(5f, 0f, 0f), -1065.5553f, -1675.3551f, 24.193195f, 150f, false, true, 0))
								{
									if (func_279("AR2_LEAVE2", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_66[iParam0 /*6*/].f_3 = 1;
									}
								}
								else if (func_279("AR2_LEAVE1", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_66[iParam0 /*6*/].f_3 = 1;
								}
							}
							break;
						case 1:
							if (func_319(14, 32) == 0)
							{
								Local_66[iParam0 /*6*/].f_3 = 0;
							}
							break;
					}
					break;
				case 33:
					if (func_279("ARM2_UPTO", 4, Local_94[4 /*14*/], "ARM2VAGOSCAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_4++;
					}
					if (Local_66[iParam0 /*6*/].f_4 >= 5)
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 34:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 3000;
							Local_66[iParam0 /*6*/].f_3++;
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_66[iParam0 /*6*/].f_4)
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							if (func_279("frank_hit", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 36:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 10000;
							Local_66[iParam0 /*6*/].f_3++;
							break;
						case 1:
							if (__LIB_0__::func_75())
							{
								Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 10000;
							}
							if (MISC::GET_GAME_TIMER() > Local_66[iParam0 /*6*/].f_4)
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						case 2:
							if (func_318("ARM2_HURRY", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3++;
								Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 12000;
							}
							break;
						case 3:
							if (__LIB_0__::func_75())
							{
								Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 10000;
							}
							if (MISC::GET_GAME_TIMER() > Local_66[iParam0 /*6*/].f_4)
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						case 4:
							if (func_318("openit", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3 = 1;
								Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 12000;
								Local_66[iParam0 /*6*/].f_5++;
								if (Local_66[iParam0 /*6*/].f_5 == 2)
								{
									Local_66[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				case 37:
					if (Local_66[iParam0 /*6*/].f_5 < 6)
					{
						if (MISC::GET_GAME_TIMER() > Local_66[iParam0 /*6*/].f_4)
						{
							if (func_279("AR2_MESS", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								func_141(87, 0);
								Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 5000;
								Local_66[iParam0 /*6*/].f_5++;
							}
						}
					}
					else
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 38:
					if (Local_66[iParam0 /*6*/].f_5 < 2)
					{
						if (MISC::GET_GAME_TIMER() > Local_66[iParam0 /*6*/].f_4)
						{
							if (func_279("AR2_BLOCK", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								func_141(86, 0);
								Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 8000;
								Local_66[iParam0 /*6*/].f_5++;
							}
						}
					}
					else
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 40:
					if (func_279("ARM2_GET", 5, Local_94[9 /*14*/], "ARM2VAGOS1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 41:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_317("ARM2_ATTACK", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 7))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						case 1:
							if (func_323("ARM2_COVER", "ARM2_COVER_1", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 43:
					if (func_317("AR2_MCS_4_LO", 0, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 7))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 42:
					if (func_279("AR2_HELP", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 44:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 3000;
							Local_66[iParam0 /*6*/].f_3++;
							break;
						case 1:
							if (!PED::IS_PED_INJURED(Local_94[11 /*14*/]) && MISC::GET_GAME_TIMER() < Local_66[iParam0 /*6*/].f_4)
							{
								if (func_279("AR2_BU40", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_66[iParam0 /*6*/].f_1 = 1;
								}
							}
							else
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 45:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_279("ARM2_MORE", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						case 1:
							if (func_279("AR2_BU18", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								__LIB_0__::func_151("ARM2_HLP15", 12000);
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 46:
					if (func_279("AR2_BU37", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						func_141(130, 1);
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 47:
					if (!PED::IS_PED_INJURED(Local_94[13 /*14*/]))
					{
						if (func_323("AR2_BU37b", "AR2_BU37b_2", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 8))
						{
							func_141(130, 1);
							Local_66[iParam0 /*6*/].f_1 = 1;
						}
					}
					else
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 48:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (!__LIB_0__::func_75())
							{
								Local_66[iParam0 /*6*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 14000));
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_66[iParam0 /*6*/].f_4)
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							else if (__LIB_0__::func_75())
							{
								Local_66[iParam0 /*6*/].f_3 = 0;
							}
							break;
						case 2:
							iVar1 = 0;
							if (iLocal_78[0] < 8 && iLocal_79 != 0)
							{
								iLocal_80[0] = 0;
								iVar1++;
							}
							if (((iLocal_78[1] == 0 || iLocal_78[2] == 0) || iLocal_78[3] == 0) || iLocal_78[4] == 0)
							{
								if (iLocal_79 != 1)
								{
									iLocal_80[iVar1] = 1;
									iVar1++;
								}
							}
							if (((iLocal_78[5] < 3 || iLocal_78[6] < 3) || iLocal_78[7] < 3) || iLocal_78[8] < 3)
							{
								if (iLocal_79 != 2)
								{
									iLocal_80[iVar1] = 2;
									iVar1++;
								}
							}
							if (iLocal_78[9] < 8 && iLocal_79 != 3)
							{
								iLocal_80[iVar1] = 3;
								iVar1++;
							}
							if (iVar1 > 0)
							{
								Local_66[iParam0 /*6*/].f_4 = iLocal_80[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1)];
								Local_66[iParam0 /*6*/].f_3++;
							}
							else if (iLocal_79 == -1)
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							iLocal_79 = -1;
							break;
						case 3:
							if (!__LIB_0__::func_75())
							{
								switch (Local_66[iParam0 /*6*/].f_4)
								{
									case 0:
										if (func_279("ARM2_SHOUT", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_66[iParam0 /*6*/].f_3 = 0;
											iLocal_78[0]++;
											iLocal_79 = 0;
										}
										break;
									case 1:
										iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
										while (iVar2 > 0)
										{
											switch ((iVar2 % 4))
											{
												case 0:
													if (iLocal_78[1] == 0)
													{
														iVar3 = 0;
													}
													break;
												case 1:
													if (iLocal_78[2] == 0)
													{
														iVar3 = 1;
													}
													break;
												case 2:
													if (iLocal_78[3] == 0)
													{
														iVar3 = 2;
													}
													break;
												case 3:
													if (iLocal_78[4] == 0)
													{
														iVar3 = 3;
													}
													break;
											}
											iVar2 = (iVar2 - 1);
										}
										Local_66[iParam0 /*6*/].f_3 = 4;
										iLocal_79 = 1;
										Local_66[iParam0 /*6*/].f_4 = iVar3;
										break;
									case 2:
										iVar6 = 0;
										iVar5 = -1;
										iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
										while (iVar5 == -1)
										{
											iVar6++;
											switch (iVar4)
											{
												case 0:
													if (iLocal_78[5] < 3)
													{
														iVar5 = 0;
													}
													else
													{
														iVar4++;
													}
													break;
												case 1:
													if (iLocal_78[6] < 3)
													{
														iVar5 = 1;
													}
													else
													{
														iVar4++;
													}
													break;
												case 2:
													if (iLocal_78[7] < 3)
													{
														iVar5 = 2;
													}
													else
													{
														iVar4++;
													}
													break;
												case 3:
													if (iLocal_78[8] < 3)
													{
														iVar5 = 3;
													}
													else
													{
														iVar4 = 0;
													}
													break;
											}
											if (iVar6 == 5)
											{
												iVar5 = 10;
											}
										}
										if (iVar5 != 10)
										{
											Local_66[iParam0 /*6*/].f_3 = 5;
											iLocal_79 = 2;
											Local_66[iParam0 /*6*/].f_4 = iVar5;
										}
										else
										{
											Local_66[iParam0 /*6*/].f_3 = 0;
										}
										break;
									case 3:
										if (func_279("AR2_tnt", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_66[iParam0 /*6*/].f_3 = 0;
											iLocal_78[9]++;
											iLocal_79 = 3;
										}
										break;
								}
							}
							else
							{
								Local_66[iParam0 /*6*/].f_3 = 0;
							}
							break;
						case 4:
							switch (Local_66[iParam0 /*6*/].f_4)
							{
								case 0:
									if (func_279("shtchat1", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 2, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_66[iParam0 /*6*/].f_3 = 0;
										iLocal_78[1] = 1;
									}
									break;
								case 1:
									if (func_279("shtchat2", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_66[iParam0 /*6*/].f_3 = 0;
										iLocal_78[2] = 1;
									}
									break;
								case 2:
									if (func_279("shtchat3", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_66[iParam0 /*6*/].f_3 = 0;
										iLocal_78[3] = 1;
									}
									break;
								case 3:
									if (func_279("shtchat4", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_66[iParam0 /*6*/].f_3 = 0;
										iLocal_78[4] = 1;
									}
									break;
							}
							break;
						case 5:
							iVar7 = func_316();
							if (iVar7 != -1)
							{
								switch (Local_66[iParam0 /*6*/].f_4)
								{
									case 0:
										if (func_279("ARM2_GET", 5, Local_94[iVar7 /*14*/], "ARM2VAGOS1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_66[iParam0 /*6*/].f_3 = 0;
											iLocal_78[5]++;
										}
										break;
									case 1:
										if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
										{
											if (func_279("ARM2_GET2", 6, Local_94[iVar7 /*14*/], "ARM2VAGOS2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_66[iParam0 /*6*/].f_3 = 0;
												iLocal_78[6]++;
											}
										}
										else if (func_279("ARM2_NOGO", 5, Local_94[iVar7 /*14*/], "ARM2VAGOS1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_66[iParam0 /*6*/].f_3 = 0;
											iLocal_78[6]++;
										}
										break;
									case 2:
										if (func_279("ARM2_GET3", 7, Local_94[iVar7 /*14*/], "ARM2VAGOS3", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_66[iParam0 /*6*/].f_3 = 0;
											iLocal_78[7]++;
										}
										break;
									case 3:
										if (func_279("ARM2_GET4", 8, Local_94[iVar7 /*14*/], "ARM2VAGOS4", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_66[iParam0 /*6*/].f_3 = 0;
											iLocal_78[8]++;
										}
										break;
									}
							}
							break;
					}
					break;
				case 49:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (__LIB_15__::func_965("AR2_BU37"))
							{
								__LIB_0__::func_429();
							}
							if (func_279("AR2_BLOWUP", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 670;
							Local_66[iParam0 /*6*/].f_3++;
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_66[iParam0 /*6*/].f_4)
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							else if (func_279("AR2_BLOWUP", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 50:
					if (func_305(101))
					{
						if (func_279("AR2_godst", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
						{
							Local_66[iParam0 /*6*/].f_1 = 1;
						}
					}
					else if (func_323("AR2_godst", "AR2_godst_3", 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 51:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_279("AR2_BU19", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						case 1:
							if (func_279("AR2_BU19b", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 52:
					if (ENTITY::DOES_ENTITY_EXIST(Local_94[18 /*14*/]))
					{
						if (!PED::IS_PED_INJURED(Local_94[18 /*14*/]))
						{
							if (func_279("ARM2_BALCON", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
						}
						else
						{
							Local_66[iParam0 /*6*/].f_1 = 1;
						}
					}
					break;
				case 53:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (!__LIB_0__::func_75())
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						case 1:
							if (ENTITY::DOES_ENTITY_EXIST(Local_94[19 /*14*/]))
							{
								if (!PED::IS_PED_INJURED(Local_94[19 /*14*/]))
								{
									if (func_323("AR2_BU20b", "AR2_BU20b_1", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, 8))
									{
										Local_66[iParam0 /*6*/].f_1 = 1;
									}
								}
								else
								{
									Local_66[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				case 54:
					if (ENTITY::DOES_ENTITY_EXIST(Local_94[21 /*14*/]))
					{
						if (!PED::IS_PED_INJURED(Local_94[21 /*14*/]))
						{
							if (func_279("AR2_DOOR", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
						}
						else
						{
							Local_66[iParam0 /*6*/].f_1 = 1;
						}
					}
					break;
				case 55:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[6 /*2*/], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_95[6 /*2*/]))
						{
							if (func_279("AR2_BU26", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
						}
						else
						{
							Local_66[iParam0 /*6*/].f_1 = 1;
						}
					}
					else
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 57:
					if (bLocal_91)
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					else if (func_279("AR2_BU36", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 56:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_279("ARM2_MORE2", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						case 1:
							if (func_279("ARM2_MORE2", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 58:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 500;
							Local_66[iParam0 /*6*/].f_3++;
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_66[iParam0 /*6*/].f_4)
							{
								if (func_279("AR2_safe", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_66[iParam0 /*6*/].f_1 = 1;
								}
							}
							if (MISC::GET_GAME_TIMER() > Local_66[iParam0 /*6*/].f_4 + 4000)
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 59:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[4 /*2*/], false))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_95[4 /*2*/], -1129.5961f, -1588.691f, -0.139362f, -1141.044f, -1572.9304f, 7.562129f, 25.25f, false, true, 0))
								{
									Local_66[iParam0 /*6*/].f_3++;
								}
							}
							break;
						case 1:
							if (func_279("AR2_MCS5_LI", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 1, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 63:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_279("AR2_BU23", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						case 1:
							if (func_279("ARM2_GOBIKE", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						case 2:
							if (func_305(30))
							{
								if (func_304(33))
								{
									if (func_279("get_wheels", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_66[iParam0 /*6*/].f_1 = 1;
									}
								}
								else
								{
									Local_66[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				case 60:
					if (func_279("ARM2_burn", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 61:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 4500;
							Local_66[iParam0 /*6*/].f_3++;
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_66[iParam0 /*6*/].f_4)
							{
								if (func_304(101) && func_304(110))
								{
									if (func_279("AR2_BU24", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_66[iParam0 /*6*/].f_1 = 1;
									}
								}
								else
								{
									Local_66[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				case 62:
					if (func_279("AR2_LEAVE3", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 65:
					if (func_305(31) && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_61))
					{
						if (func_326(&Local_61, &cLocal_57, 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, 8))
						{
							iLocal_48 = 1;
							StringCopy(&Local_61, "", 24);
							StringCopy(&cLocal_57, "", 24);
							func_141(31, 0);
						}
					}
					else
					{
						switch (Local_66[iParam0 /*6*/].f_3)
						{
							case 0:
								func_314(1);
								Local_66[iParam0 /*6*/].f_3++;
								break;
							case 1:
								func_314(0);
								break;
							}
					}
					break;
				case 66:
					if (!PED::IS_PED_INJURED(Local_94[8 /*14*/]))
					{
						if (MISC::GET_GAME_TIMER() > Local_66[iParam0 /*6*/].f_4)
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[8 /*14*/], 1) < 40f)
							{
								AUDIO::SET_AMBIENT_VOICE_NAME(Local_94[8 /*14*/], "G_M_Y_SalvaGoon_02_SALVADORIAN_MINI_02");
								__LIB_0__::func_640(Local_94[8 /*14*/], "GENERIC_INSULT_HIGH", 10);
								Local_66[iParam0 /*6*/].f_3++;
								Local_66[iParam0 /*6*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2500, 4000));
							}
						}
					}
					break;
				case 67:
					if (func_279("ARM2_GETIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 69:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							__LIB_0__::func_429();
							Local_66[iParam0 /*6*/].f_3 = 100;
							break;
						case 100:
							if (func_279("AR2_AN14", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3 = 1;
							}
							break;
						case 1:
							if (func_279("AR2_BU34", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 70:
					if (func_279("AR2_bye", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 71:
					if (func_279("AR2_FINDCAR", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 72:
					if (Local_66[iParam0 /*6*/].f_5 < 3)
					{
						if (MISC::GET_GAME_TIMER() > Local_66[iParam0 /*6*/].f_4)
						{
							if (func_311(6, 117) == 2)
							{
								__LIB_0__::func_325();
							}
							if (func_279("AR2_BRING", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								func_309(6, 117, 0);
								Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 8000;
								Local_66[iParam0 /*6*/].f_5++;
							}
						}
					}
					else
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 73:
					if (Local_66[iParam0 /*6*/].f_5 < 3)
					{
						if (MISC::GET_GAME_TIMER() > Local_66[iParam0 /*6*/].f_4)
						{
							if (func_311(6, 117) == 2)
							{
								__LIB_0__::func_325();
							}
							if (func_279("AR2_NOBIKE", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								func_309(6, 117, 0);
								Local_66[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 8000;
								Local_66[iParam0 /*6*/].f_5++;
							}
						}
					}
					else
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				}
			}
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Local_55 = { __LIB_0__::func_486() };
	}
	else
	{
		Local_56 = { Local_55 };
		Local_56 = { Local_56 };
	}
}

void func_309(int iParam0, int iParam1, int iParam2)//Position - 0x32794
{
	if (Local_69[iParam0 /*10*/] == iParam1)
	{
		Local_69[iParam0 /*10*/].f_8 = iParam2;
	}
}

int func_311(int iParam0, int iParam1)//Position - 0x327C6
{
	if (Local_69[iParam0 /*10*/] == iParam1)
	{
		return Local_69[iParam0 /*10*/].f_8;
	}
	return -1;
}

void func_314(int iParam0)//Position - 0x32A1B
{
	if (iParam0 == 1)
	{
		iLocal_294 = 1;
		iLocal_293 = 0;
		iLocal_292 = 1;
		iLocal_295 = 10;
		iLocal_86 = 0;
	}
	else if (!PED::IS_PED_INJURED(Local_94[8 /*14*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_95[4 /*2*/], (ENTITY::GET_ENTITY_SPEED(Local_95[0 /*2*/]) * 3.5f), (ENTITY::GET_ENTITY_SPEED(Local_95[0 /*2*/]) * 3.5f), 20f, false, true, 0))
		{
			if (iLocal_292 == 1)
			{
				iLocal_294 = 3;
				__LIB_0__::func_638();
			}
		}
		switch (iLocal_294)
		{
			case 2:
				if (iLocal_296 == -1)
				{
					iLocal_296 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				}
				if (iLocal_296 == 0)
				{
					if (func_279("AR2_AN09", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						iLocal_296 = -1;
						iLocal_294 = 4;
					}
				}
				else if (func_279("ARM2_BIKE", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
				{
					iLocal_296 = -1;
					iLocal_294 = 4;
				}
				break;
			case 4:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_257))
				{
					if (func_279(sLocal_257, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						sLocal_257 = "";
					}
				}
				else if (!__LIB_0__::func_75())
				{
					iLocal_293 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 6000));
					iLocal_294 = 5;
				}
				break;
			case 5:
				if (MISC::GET_GAME_TIMER() > iLocal_293)
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[8 /*14*/], 1) < 50f)
					{
						iLocal_295 = 11;
						iLocal_294 = 4;
						sLocal_257 = "AR2_AN13";
					}
					else if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[8 /*14*/], 1) > 100f)
					{
						if (iLocal_295 == 11)
						{
							if (func_279("AR2_lost", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								iLocal_294 = 4;
								iLocal_295 = 10;
							}
						}
						else
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_257))
							{
							}
							else if (func_315(&iLocal_264, &iLocal_86, 0, 2, 0, 0))
							{
								if (iLocal_264 == 0)
								{
									sLocal_257 = "AR2_AN10";
								}
								else if (iLocal_264 == 1)
								{
									sLocal_257 = "AR2_AN11";
								}
								else if (iLocal_264 == 2)
								{
									sLocal_257 = "AR2_AN12";
								}
								iLocal_294 = 4;
							}
							iLocal_295 = 10;
						}
					}
				}
				break;
			case 3:
				iLocal_292 = 0;
				if (WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false) != joaat("WEAPON_UNARMED"))
				{
					if (func_279("AR2_AN15", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						iLocal_294 = 7;
					}
				}
				else if (func_279("AR2_AN15b", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
				{
					iLocal_294 = 9;
				}
				break;
			case 7:
				if (!__LIB_0__::func_75())
				{
					func_162(2, 12, 0);
					iLocal_294 = 5;
				}
				break;
			case 8:
				iLocal_294 = 5;
				break;
			case 9:
				if (!__LIB_0__::func_75())
				{
					iLocal_294 = 5;
				}
				break;
			case 1:
				if (!__LIB_0__::func_75())
				{
					iLocal_294 = 2;
				}
				break;
			}
	}
}

int func_315(var uParam0, int* iParam1, bool bParam2, int iParam3, int iParam4, int iParam5)//Position - 0x32D59
{
	bool bVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	bVar0 = bParam2;
	while (bVar0 <= iParam3)
	{
		if (!BitTest(*iParam1, bVar0))
		{
			iVar1++;
		}
		bVar0++;
	}
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	bVar0 = bParam2;
	while (bVar0 <= iParam3)
	{
		if (!BitTest(*iParam1, bVar0))
		{
			if (iVar2 == 0)
			{
				if (iParam4 == 1)
				{
					*iParam1 = 0;
				}
				MISC::SET_BIT(iParam1, bVar0);
				*uParam0 = bVar0;
				return 1;
			}
			else
			{
				iVar2 = (iVar2 - 1);
			}
		}
		bVar0++;
	}
	if (iParam5 == 1)
	{
		*iParam1 = 0;
		*uParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		MISC::SET_BIT(iParam1, *uParam0);
		return 1;
	}
	return 0;
}

int func_316()//Position - 0x32DFB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_94.f_0)
	{
		if (!PED::IS_PED_INJURED(Local_94[iVar0 /*14*/]))
		{
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_94[iVar0 /*14*/]) == iLocal_98)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_317(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10)//Position - 0x32E3D
{
	func_297(sParam0, iParam1, iParam4, iParam7, -1);
	func_294(iParam1, iParam2, sParam3);
	if (iParam4 != -1)
	{
		func_294(iParam4, iParam5, sParam6);
	}
	if (iParam7 != -1)
	{
		func_294(iParam7, iParam8, sParam9);
	}
	if (__LIB_38__::func_746(&Local_102, cLocal_107, sParam0, iParam10, 1, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_318(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)//Position - 0x32E95
{
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (func_279(sParam0, iParam1, iParam2, sParam3, iParam4, iParam5, sParam6, iParam7, iParam8, sParam9, iParam10, iParam11, sParam12, iParam13))
		{
			return 1;
		}
	}
	return 0;
}

int func_319(int iParam0, int iParam1)//Position - 0x32ECD
{
	if (Local_69[iParam0 /*10*/] == iParam1)
	{
		return Local_69[iParam0 /*10*/].f_6;
	}
	return -1;
}

int func_323(char* sParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, char* sParam10, int iParam11)//Position - 0x32FB8
{
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		func_297(sParam0, iParam2, iParam5, iParam8, -1);
		func_294(iParam2, iParam3, sParam4);
		if (iParam5 != -1)
		{
			func_294(iParam5, iParam6, sParam7);
		}
		if (iParam8 != -1)
		{
			func_294(iParam8, iParam9, sParam10);
		}
		if (__LIB_41__::func_46(&Local_102, cLocal_107, sParam0, sParam1, iParam11, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_326(char* sParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, char* sParam10, int iParam11)//Position - 0x330A4
{
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		func_297(sParam0, iParam2, iParam5, iParam8, -1);
		func_294(iParam2, iParam3, sParam4);
		if (iParam5 != -1)
		{
			func_294(iParam5, iParam6, sParam7);
		}
		if (iParam8 != -1)
		{
			func_294(iParam8, iParam9, sParam10);
		}
		if (__LIB_41__::func_47(&Local_102, cLocal_107, sParam0, sParam1, iParam11, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_329(int iParam0, int iParam1)//Position - 0x331E6
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!__LIB_37__::func_210(iVar0, 0))
	{
		return 2;
	}
	iVar1 = func_330(iParam0, iParam1, -1);
	if (iVar1 == -99)
	{
		return 0;
	}
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, iVar1, -1) };
	return Global_78130[1 /*14*/];
}

int func_330(int iParam0, int iParam1, int iParam2)//Position - 0x3323C
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
				if (func_333(iParam0, iParam1, iVar0))
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
				if (func_333(iParam0, iParam1, iVar1))
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

int func_333(int iParam0, int iParam1, int iParam2)//Position - 0x33383
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
				if (!func_333(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_333(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_333(iParam0, 14, iVar4))
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
			if (!func_333(iParam0, 14, uVar8[iVar7]))
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

void func_350(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x37417
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	struct<3> Var14;
	struct<3> Var15;
	struct<3> Var16;
	float fVar17;
	float fVar18;
	struct<3> Var19;
	struct<3> Var20;
	float fVar21;
	float fVar22;
	struct<3> Var23;
	struct<3> Var24;
	struct<3> Var25;
	struct<3> Var26;
	bool bVar27;
	float fVar28;
	float fVar29;
	int iVar30;
	struct<3> Var31;
	struct<3> Var32;
	int iVar33;
	int iVar34;
	struct<3> Var35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	if (Local_69[iParam0 /*10*/] != iParam1 || Local_69[iParam0 /*10*/].f_1 == 0)
	{
		Local_69[iParam0 /*10*/] = iParam1;
		Local_69[iParam0 /*10*/].f_1 = 1;
		Local_69[iParam0 /*10*/].f_3 = 0;
		Local_69[iParam0 /*10*/].f_6 = 0;
		Local_69[iParam0 /*10*/].f_4 = 0;
		Local_69[iParam0 /*10*/].f_7 = 0;
		Local_69[iParam0 /*10*/].f_8 = 0;
		Local_69[iParam0 /*10*/].f_9 = 0f;
	}
	if (Local_69[iParam0 /*10*/].f_2 && iParam2 == 0)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = func_300(iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12);
	}
	if (iParam2 == 1 && !bVar0)
	{
		Local_69[iParam0 /*10*/].f_2 = 0;
	}
	if (!bLocal_114 || Local_69[iParam0 /*10*/].f_6 == 99)
	{
		if (Local_69[iParam0 /*10*/].f_3 == 0 || Local_69[iParam0 /*10*/].f_6 == 99)
		{
			if (bVar0 == 1)
			{
				if (!Local_69[iParam0 /*10*/].f_2)
				{
					Local_69[iParam0 /*10*/].f_2 = 1;
				}
				switch (Local_69[iParam0 /*10*/])
				{
					case 2:
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (!PED::IS_PED_IN_GROUP(Local_94[2 /*14*/]))
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[2 /*14*/], 1) < 50f)
								{
									PED::SET_PED_AS_GROUP_MEMBER(Local_94[2 /*14*/], PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()));
									PED::SET_GROUP_SEPARATION_RANGE(PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()), 100f);
								}
							}
						}
						break;
					case 3:
						if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-967780114))
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-967780114, 0f, false, true);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-967780114, 4, false, true);
							Local_69[iParam0 /*10*/].f_3 = 0;
						}
						break;
					case 4:
						Local_69[1 /*10*/].f_2 = 0;
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (PED::IS_PED_IN_GROUP(Local_94[2 /*14*/]))
							{
								PED::REMOVE_PED_FROM_GROUP(Local_94[2 /*14*/]);
							}
						}
						break;
					case 1:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
								{
									if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
									{
										TASK::TASK_ENTER_VEHICLE(Local_94[2 /*14*/], Local_95[0 /*2*/], 20000, -1, 2f, 1, 0);
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								else
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
							case 1:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false) && !PED::IS_PED_INJURED(Local_94[2 /*14*/]))
								{
									if (PED::IS_PED_IN_VEHICLE(Local_94[2 /*14*/], Local_95[0 /*2*/], false))
									{
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					case 5:
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != Local_95[0 /*2*/])
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_95[0 /*2*/]))
								{
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_95[0 /*2*/]));
								}
								Local_95[0 /*2*/] = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_95[0 /*2*/], true, true);
							}
						}
						break;
					case 11:
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							AUDIO::START_AUDIO_SCENE("ARM_2_DRIVE_TO_ALLEY");
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					case 12:
						iVar1 = 0;
						while (iVar1 < iLocal_241)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_241[iVar1]))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_241[iVar1], false))
								{
									if (Local_95[0 /*2*/] != iLocal_241[iVar1])
									{
										ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_241[iVar1]));
									}
								}
							}
							iVar1++;
						}
						VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(25.859827f, -1098.9319f, -43.781937f) - Vector(2.5625f, 6.75f, 9.75f), Vector(25.859827f, -1098.9319f, -43.781937f) + Vector(2.5625f, 6.75f, 9.75f), true, true);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					case 13:
						__LIB_0__::func_468(1);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					case 14:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								fVar3 = 1000f;
								iVar5 = 0;
								while (iVar5 < Local_250.f_0)
								{
									if (!CAM::IS_SPHERE_VISIBLE(Local_250[iVar5 /*3*/], 2f))
									{
										fVar2 = __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_250[iVar5 /*3*/], 1);
										if (fVar2 < fVar3 && fVar2 > 10f)
										{
											fVar3 = fVar2;
											iVar4 = iVar5;
										}
									}
									iVar5++;
								}
								if (fVar3 != 1000f)
								{
									func_277(22, Local_250[iVar4 /*3*/] - Vector(0f, 0.5f, 0.5f), __LIB_6__::func_252(Local_250[iVar4 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1), joaat("WEAPON_PISTOL"), 0, 0, -1);
									func_277(23, Local_250[iVar4 /*3*/] - Vector(0f, 0.5f, 0.5f), __LIB_6__::func_252(Local_250[iVar4 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1), joaat("WEAPON_PISTOL"), 0, 0, -1);
									PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()), iLocal_98);
									PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_98, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
									PED::SET_PED_TARGET_LOSS_RESPONSE(Local_94[22 /*14*/], 1);
									PED::SET_PED_TARGET_LOSS_RESPONSE(Local_94[23 /*14*/], 1);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_94[22 /*14*/], 150f, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_94[23 /*14*/], 150f, 0);
									PED::SET_COMBAT_FLOAT(Local_94[22 /*14*/], 2, 6f);
									PED::SET_COMBAT_FLOAT(Local_94[22 /*14*/], 13, 5f);
									PED::SET_COMBAT_FLOAT(Local_94[23 /*14*/], 2, 6f);
									PED::SET_COMBAT_FLOAT(Local_94[23 /*14*/], 13, 5f);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[22 /*14*/], 50, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[23 /*14*/], 50, true);
									if (HUD::DOES_BLIP_EXIST(iLocal_244))
									{
										HUD::REMOVE_BLIP(&iLocal_244);
									}
									Local_69[iParam0 /*10*/].f_6++;
									Local_69[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 1500;
								}
								else
								{
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							case 1:
								if (MISC::GET_GAME_TIMER() > Local_69[iParam0 /*10*/].f_7)
								{
									if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[2 /*14*/], false);
										WEAPON::GIVE_WEAPON_TO_PED(Local_94[2 /*14*/], joaat("WEAPON_MICROSMG"), 2000, true, true);
										TASK::CLEAR_PED_TASKS(Local_94[2 /*14*/]);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_94[2 /*14*/], 150f, 0);
										Local_69[iParam0 /*10*/].f_6++;
										Local_69[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 1500;
									}
								}
								break;
							case 2:
								if (MISC::GET_GAME_TIMER() > Local_69[iParam0 /*10*/].f_7)
								{
									if (!PED::IS_PED_INJURED(Local_94[22 /*14*/]))
									{
										PED::SET_COMBAT_FLOAT(Local_94[22 /*14*/], 2, 100f);
									}
									if (!PED::IS_PED_INJURED(Local_94[23 /*14*/]))
									{
										PED::SET_COMBAT_FLOAT(Local_94[23 /*14*/], 2, 100f);
									}
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					case 6:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (HUD::DOES_BLIP_EXIST(iLocal_244))
								{
									Var6 = { HUD::GET_BLIP_INFO_ID_COORD(iLocal_244) };
									if (__LIB_0__::func_78(Var6, -1141.0928f, -1576.7594f, 3.3048f, 0))
									{
										if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -39.159054f, -1078.176f, 23.773207f, -3.364391f, -1091.2808f, 40.839222f, 23.8125f, false, true, 0))
										{
											HUD::START_GPS_MULTI_ROUTE(156, true, false);
											HUD::ADD_POINT_TO_GPS_CUSTOM_ROUTE(-13.445f, -1090.9459f, 25.6721f);
											HUD::ADD_POINT_TO_GPS_CUSTOM_ROUTE(-23.5158f, -1119.8385f, 25.8719f);
											HUD::ADD_POINT_TO_GPS_CUSTOM_ROUTE(-1141.0928f, -1576.7594f, 3.3048f);
											HUD::SET_GPS_MULTI_ROUTE_RENDER(true);
											HUD::SET_BLIP_ROUTE(iLocal_244, false);
											Local_69[iParam0 /*10*/].f_6++;
										}
										else
										{
											Local_69[iParam0 /*10*/].f_6++;
										}
									}
								}
								break;
							case 1:
								if (HUD::DOES_BLIP_EXIST(iLocal_244))
								{
									Var7 = { HUD::GET_BLIP_INFO_ID_COORD(iLocal_244) };
									if (!__LIB_0__::func_78(Var7, -1141.0928f, -1576.7594f, 3.3048f, 0))
									{
										Local_69[iParam0 /*10*/].f_6 = 0;
									}
									else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -39.159054f, -1078.176f, 23.773207f, -3.364391f, -1091.2808f, 40.839222f, 23.8125f, false, true, 0))
									{
										HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
										HUD::SET_BLIP_ROUTE(iLocal_244, true);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					case 7:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (func_484(17))
								{
									if (!ENTITY::DOES_ENTITY_EXIST(Local_94[3 /*14*/]))
									{
										Local_94[3 /*14*/] = PED::CREATE_PED(26, joaat("IG_SiemonYetarian"), -31.4785f, -1107.0975f, 25.4223f, 7.5788f, true, true);
										PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_94[3 /*14*/]);
										PED::SET_PED_COMPONENT_VARIATION(Local_94[3 /*14*/], 0, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_94[3 /*14*/], 3, 0, 1, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_94[3 /*14*/], 4, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_94[3 /*14*/], 5, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_94[3 /*14*/], 7, 0, 0, 0);
									}
									if (!PED::IS_PED_INJURED(Local_94[3 /*14*/]))
									{
										ENTITY::SET_ENTITY_COORDS(Local_94[3 /*14*/], -31.4785f, -1107.0975f, 25.4223f, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(Local_94[3 /*14*/], 7f);
										TASK::TASK_START_SCENARIO_IN_PLACE(Local_94[3 /*14*/], "WORLD_HUMAN_STAND_MOBILE", 0, false);
										if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-31.72f, -1101.85f, 26.57f, 1f, joaat("v_ilev_fib_door1"), false))
										{
											iVar8 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-31.72f, -1101.85f, 26.57f, 1f, joaat("v_ilev_fib_door1"), false, false, true);
											if (iVar8 != 0)
											{
												if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar8))
												{
													ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(-31.72f, -1101.85f, 26.57f, 1f, joaat("v_ilev_fib_door1"), -1000f);
												}
											}
										}
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							case 1:
								if (MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-1831288286)) < 0.05f && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -32.476147f, -1104.2987f, 25.443802f, -27.751446f, -1106.0001f, 27.922344f, 6f, false, true, 0))
								{
									__LIB_41__::func_48(97, 2);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							case 2:
								if (__LIB_0__::func_76(Local_94[3 /*14*/], PLAYER::PLAYER_PED_ID(), 1) > 200f)
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_94[3 /*14*/]))
									{
										PED::DELETE_PED(&(Local_94[3 /*14*/]));
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_SiemonYetarian"));
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					case 8:
						PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, true);
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (iLocal_92 == 9)
							{
								PED::SET_PED_RESET_FLAG(Local_94[2 /*14*/], 96, true);
							}
						}
						break;
					case 9:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95[0 /*2*/], false))
							{
								AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_95[0 /*2*/], true);
								Local_69[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					case 10:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								iLocal_65 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-41.3822f, -1101.6371f, 26.6294f, "v_carshowroom");
								if (INTERIOR::IS_INTERIOR_READY(iLocal_65))
								{
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							case 1:
								if (iLocal_65 != 0)
								{
									if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_65)
									{
										if (!BitTest(Local_69[iParam0 /*10*/].f_7, 0))
										{
											iVar9 = VEHICLE::GET_CLOSEST_VEHICLE(-36.5853f, -1101.4738f, 26.3444f, 5f, joaat("bjxl"), 4);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar9, false))
											{
												VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar9, 10);
												VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar9, false);
												MISC::SET_BIT(&(Local_69[iParam0 /*10*/].f_7), 0);
											}
										}
										if (!BitTest(Local_69[iParam0 /*10*/].f_7, 1))
										{
											iVar9 = VEHICLE::GET_CLOSEST_VEHICLE(-46.2594f, -1097.8386f, 26.3444f, 5f, joaat("bjxl"), 4);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar9, false))
											{
												VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar9, 10);
												VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar9, false);
												MISC::SET_BIT(&(Local_69[iParam0 /*10*/].f_7), 1);
											}
										}
										if (!BitTest(Local_69[iParam0 /*10*/].f_7, 2))
										{
											iVar9 = VEHICLE::GET_CLOSEST_VEHICLE(-50.08f, -1094.4625f, 26.0671f, 5f, joaat("tailgater"), 4);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar9, false))
											{
												VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar9, 10);
												VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar9, false);
												MISC::SET_BIT(&(Local_69[iParam0 /*10*/].f_7), 2);
											}
										}
										if (!BitTest(Local_69[iParam0 /*10*/].f_7, 3))
										{
											iVar9 = VEHICLE::GET_CLOSEST_VEHICLE(-37.4128f, -1088.5618f, 26.0671f, 5f, joaat("tailgater"), 4);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar9, false))
											{
												VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar9, 10);
												VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar9, false);
												MISC::SET_BIT(&(Local_69[iParam0 /*10*/].f_7), 3);
											}
										}
										if (!BitTest(Local_69[iParam0 /*10*/].f_7, 4))
										{
											iVar9 = VEHICLE::GET_CLOSEST_VEHICLE(-41.4259f, -1099.6481f, 26.0534f, 5f, joaat("tailgater"), 4);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar9, false))
											{
												VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar9, 10);
												VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar9, false);
												MISC::SET_BIT(&(Local_69[iParam0 /*10*/].f_7), 4);
											}
										}
									}
								}
								break;
						}
						break;
					case 15:
						__LIB_0__::func_496();
						break;
					case 18:
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							func_137();
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_LOOK_AT_COORD(0, -1129.6185f, -1588.3438f, 4.7752f, 5000, 0, 2);
							iVar10 = PLAYER::PLAYER_PED_ID();
							func_136(iVar10, 0);
							Local_69[iParam0 /*10*/].f_3 = 1;
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 2f, 4);
						}
						break;
					case 16:
						TASK::TASK_LEAVE_ANY_VEHICLE(Local_94[2 /*14*/], 0, 0);
						__LIB_37__::func_204(Local_94[2 /*14*/]);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					case 17:
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(Local_94[2 /*14*/], false))
							{
								if (!__LIB_38__::func_124(Local_94[2 /*14*/], -1128.1924f, -1587.6005f, 3.26637f, -1128.8821f, -1584.6533f, 5.953067f, 1.25f))
								{
									bVar11 = true;
								}
								if (!__LIB_38__::func_124(Local_94[2 /*14*/], -1131.2926f, -1590.1941f, 3.252203f, -1134.2761f, -1587.549f, 5.917865f, 1.25f))
								{
									bVar12 = true;
								}
								if (bVar11 || bVar12)
								{
									func_141(86, 1);
								}
								else
								{
									func_141(86, 0);
								}
								switch (Local_69[iParam0 /*10*/].f_6)
								{
									case 0:
										if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[2 /*14*/], 1) > 1.5f)
										{
											if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1129.4585f, -1585.9628f, 3.079151f, -1125.517f, -1591.6439f, 7.022579f, 3.0625f, false, true, 0) && !bVar11)
											{
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_94[2 /*14*/], -1128.4171f, -1587.4418f, 3.3875f, 1f, 20000, 0.2f, 0, 221f);
												Local_69[iParam0 /*10*/].f_6 = 2;
											}
											else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1132.3417f, -1587.7692f, 3.071801f, -1127.9677f, -1593.9532f, 6.90706f, 3.0625f, false, true, 0) && !bVar12)
											{
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_94[2 /*14*/], -1131.7043f, -1589.4529f, 3.3934f, 1f, 20000, 0.2f, 0, 221f);
												Local_69[iParam0 /*10*/].f_6 = 3;
											}
											else
											{
												Local_69[iParam0 /*10*/].f_6 = 5;
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_94[2 /*14*/], PLAYER::PLAYER_PED_ID(), -1);
											}
										}
										else if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1131.7043f, -1589.4529f, 4.3934f, 1) > __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1128.4171f, -1587.4418f, 3.3875f, 1))
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_94[2 /*14*/], -1131.7043f, -1589.4529f, 3.3934f, 1f, 20000, 0.2f, 0, 221f);
											Local_69[iParam0 /*10*/].f_6 = 3;
										}
										else
										{
											Local_69[iParam0 /*10*/].f_6 = 2;
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_94[2 /*14*/], -1128.4171f, -1587.4418f, 3.3875f, 1f, 20000, 0.2f, 0, 221f);
										}
										break;
									case 2:
									case 3:
										if (((Local_69[iParam0 /*10*/].f_6 == 2 && !bVar11) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1129.4585f, -1585.9628f, 3.079151f, -1125.517f, -1591.6439f, 7.022579f, 3.0625f, false, true, 0)) || ((Local_69[iParam0 /*10*/].f_6 == 3 && !bVar12) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1132.3417f, -1587.7692f, 3.071801f, -1127.9677f, -1593.9532f, 6.90706f, 3.0625f, false, true, 0)))
										{
											if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_94[2 /*14*/], -1132.4854f, -1590.0051f, 2.394994f, -1127.201f, -1586.4602f, 6.384637f, 1.5f, false, true, 0))
											{
												if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[2 /*14*/], 1) > 1.5f)
												{
													fLocal_268 = MISC::ABSF(__LIB_13__::func_785((ENTITY::GET_ENTITY_HEADING(Local_94[2 /*14*/]) - 221f), -1020002304, 1127481344));
													if (fLocal_268 < 20f)
													{
														TASK::TASK_CLIMB(Local_94[2 /*14*/], false);
														Local_69[iParam0 /*10*/].f_6 = 4;
													}
													else
													{
														func_137();
														TASK::TASK_ACHIEVE_HEADING(0, 221f, 0);
														func_136(Local_94[2 /*14*/], 0);
													}
												}
												else if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 7)
												{
													func_141(87, 1);
													Local_69[iParam0 /*10*/].f_6 = 0;
													TASK::CLEAR_PED_TASKS(Local_94[2 /*14*/]);
												}
											}
											else if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 7)
											{
												Local_69[iParam0 /*10*/].f_6 = 0;
											}
										}
										else
										{
											Local_69[iParam0 /*10*/].f_6 = 0;
											TASK::CLEAR_PED_TASKS(Local_94[2 /*14*/]);
										}
										break;
									case 4:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_CLIMB")) == 2)
										{
											if (!func_305(49))
											{
												Local_69[iParam0 /*10*/].f_6 = 0;
											}
											else
											{
												Local_69[iParam0 /*10*/].f_3 = 1;
											}
										}
										else if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_CLIMB")) == 7)
										{
											if (func_305(49))
											{
												RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 6f, 4);
												Local_69[iParam0 /*10*/].f_3 = 1;
											}
											else
											{
												Local_69[iParam0 /*10*/].f_6 = 0;
											}
										}
										break;
									case 5:
										if (!bVar11 || !bVar12)
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_94[2 /*14*/], -1128.4171f, -1587.4418f, 3.3875f, 1f, 20000, 0.2f, 0, 221f);
											Local_69[iParam0 /*10*/].f_6 = 0;
										}
										break;
									}
								}
						}
						break;
					case 20:
						if (!func_305(50))
						{
							if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
							{
								if (!ENTITY::IS_ENTITY_IN_AIR(Local_94[2 /*14*/]))
								{
									func_137();
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1116.379f, -1603.855f, 4.439f, 1f, 20000, 0.25f, 1, 40000f);
									func_136(Local_94[2 /*14*/], 0);
									Local_69[iParam0 /*10*/].f_3 = 1;
									Local_69[iParam0 /*10*/].f_6++;
								}
							}
						}
						else
						{
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					case 21:
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]) && !PED::IS_PED_INJURED(Local_94[3 /*14*/]))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									if (!ENTITY::IS_ENTITY_ATTACHED(Local_94[2 /*14*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_94[3 /*14*/]))
									{
										ENTITY::SET_ENTITY_HEADING(Local_94[2 /*14*/], 220f);
										TASK::TASK_PLAY_ANIM(Local_94[2 /*14*/], "missarmenian2", "fake_punch_walk_by_lamar", 1.5f, -1.5f, -1, 49152, 0f, false, false, false);
										TASK::TASK_PLAY_ANIM(Local_94[3 /*14*/], "missarmenian2", "PUNCH_REACTION_&_FALL_DRUNK", 4f, -4f, -1, 8, 0f, false, false, false);
										Local_69[iParam0 /*10*/].f_6++;
									}
									break;
								case 1:
									PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_94[2 /*14*/], 1f);
									if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_94[2 /*14*/], MISC::GET_HASH_KEY("Alternate_Walk_Finished")))
									{
										bVar13 = true;
									}
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_94[2 /*14*/], "missarmenian2", "fake_punch_walk_by_lamar", 3))
									{
										bVar13 = true;
									}
									if (bVar13)
									{
										PED::FORCE_PED_MOTION_STATE(Local_94[2 /*14*/], joaat("MotionState_Walk"), true, 0, false);
										func_137();
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "arm2", 0, 8, -1);
										func_136(Local_94[2 /*14*/], 0);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
									break;
								}
						}
						break;
					case 22:
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_94[2 /*14*/]);
							func_137();
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "arm2", 0, 12, -1);
							func_136(Local_94[2 /*14*/], 0);
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					case 19:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								func_605(3);
								Local_69[iParam0 /*10*/].f_6++;
								break;
							case 1:
								RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
								if (func_481(3))
								{
									if (STREAMING::HAS_MODEL_LOADED(iLocal_258))
									{
									}
									func_480(3, iLocal_258, Local_282, fLocal_283, 4, 0, 0);
									PED::SET_PED_CONFIG_FLAG(Local_94[3 /*14*/], 42, true);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							case 2:
								RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
								if (!PED::IS_PED_INJURED(Local_94[3 /*14*/]))
								{
									if (!PED::IS_PED_FALLING(Local_94[3 /*14*/]))
									{
										ENTITY::SET_ENTITY_HEADING(Local_94[3 /*14*/], fLocal_283);
										PED::SET_PED_CAN_BE_TARGETTED(Local_94[3 /*14*/], true);
										PED::SET_PED_CONFIG_FLAG(Local_94[3 /*14*/], 122, true);
										AUDIO::STOP_PED_SPEAKING(Local_94[3 /*14*/], true);
										func_137();
										TASK::TASK_PLAY_ANIM(0, "missarmenian2", "exit_garage_drunk", 8f, -8f, -1, 0, 0f, false, false, false);
										TASK::TASK_PLAY_ANIM(0, "missarmenian2", "standing_idle_loop_drunk", 8f, -8f, -1, 1, 0f, false, false, false);
										func_136(Local_94[3 /*14*/], 0);
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							case 3:
								if (!PED::IS_PED_INJURED(Local_94[3 /*14*/]))
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_94[3 /*14*/], "missarmenian2", "exit_garage_drunk", 3))
									{
										ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(Local_94[3 /*14*/], "missarmenian2", "exit_garage_drunk", fLocal_284);
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							case 4:
								if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]) && !PED::IS_PED_INJURED(Local_94[3 /*14*/]))
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_94[3 /*14*/], "missarmenian2", "PUNCH_REACTION_&_FALL_DRUNK", 3))
									{
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							case 5:
								if (!PED::IS_PED_INJURED(Local_94[3 /*14*/]))
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_94[3 /*14*/], "missarmenian2", "PUNCH_REACTION_&_FALL_DRUNK", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_94[3 /*14*/], "missarmenian2", "PUNCH_REACTION_&_FALL_DRUNK") > 0.155f)
										{
											TASK::CLEAR_PED_TASKS(Local_94[3 /*14*/]);
											TASK::SET_HIGH_FALL_TASK(Local_94[3 /*14*/], 13000, 15000, 4);
											Local_69[iParam0 /*10*/].f_3 = 1;
										}
									}
								}
								break;
						}
						break;
					case 23:
						if (!PED::IS_PED_INJURED(Local_94[3 /*14*/]))
						{
							if (!PED::IS_PED_RAGDOLL(Local_94[3 /*14*/]))
							{
								__LIB_16__::func_303(Local_94[3 /*14*/]);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[3 /*14*/], true);
								func_137();
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1105.9116f, -1601.9027f, 3.6709f, 1f, 20000, 0.25f, 0, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1105.2798f, -1601.1309f, 3.6709f, 1f, 20000, 0.25f, 0, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1106.2308f, -1601.9624f, 3.6709f, 1f, 20000, 0.25f, 0, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1108.1498f, -1601.9852f, 3.668f, 1f, 20000, 0.25f, 0, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1107.3807f, -1603.7518f, 3.6879f, 1f, 20000, 0.25f, 0, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1104.6519f, -1601.9994f, 3.6709f, 1f, 20000, 0.25f, 0, 40000f);
								func_136(Local_94[3 /*14*/], 1);
								Local_69[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					case 24:
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (__LIB_15__::func_965("AR2_BU12"))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_PLAY_ANIM")) != 1)
								{
									TASK::TASK_PLAY_ANIM(Local_94[2 /*14*/], "MISSARMENIAN2", "lamar_impatient_c", 8f, -8f, -1, 0, 0f, false, false, false);
								}
							}
							else
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_94[2 /*14*/], PLAYER::PLAYER_PED_ID(), 0);
								if (func_305(55))
								{
									if (func_305(53))
									{
										func_137();
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "arm2", 0, 12, -1);
										func_136(Local_94[2 /*14*/], 0);
									}
									else
									{
										func_137();
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1117.7394f, -1601.9032f, 3.39776f, 1f, 20000, 0.25f, 1, 40000f);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1115.4153f, -1605.2369f, 3.44196f, 1f, 20000, 0.25f, 1, 40000f);
										func_136(Local_94[2 /*14*/], 0);
									}
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						break;
					case 25:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[1 /*2*/], false))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									func_605(4);
									Local_69[iParam0 /*10*/].f_6++;
									break;
								case 1:
									if (func_481(4))
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_95[1 /*2*/], false))
										{
											if (!PED::IS_PED_INJURED(Local_94[4 /*14*/]) && !PED::IS_PED_INJURED(Local_94[5 /*14*/]))
											{
												VEHICLE::SET_VEHICLE_LIGHTS(Local_95[1 /*2*/], 2);
												VEHICLE::SET_VEHICLE_ENGINE_ON(Local_95[1 /*2*/], true, true, false);
												AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_95[1 /*2*/], true);
												AUDIO::SET_VEHICLE_RADIO_LOUD(Local_95[1 /*2*/], true);
												VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_95[1 /*2*/]);
												if (!PED::IS_PED_INJURED(Local_94[4 /*14*/]) && !PED::IS_PED_INJURED(Local_94[5 /*14*/]))
												{
													TASK::TASK_PLAY_ANIM(Local_94[4 /*14*/], "missarmenian2", "car_react_gang_ds", 1f, -8f, -1, 0, 0f, false, false, false);
													TASK::TASK_PLAY_ANIM(Local_94[5 /*14*/], "missarmenian2", "car_react_gang_ps", 1f, -8f, -1, 0, 0f, false, false, false);
												}
												AUDIO::START_AUDIO_SCENE("ARM_2_GANG_DRIVE_PAST");
												AUDIO::SET_VEH_RADIO_STATION(Local_95[1 /*2*/], "RADIO_03_HIPHOP_NEW" /* GXT: Radio Los Santos */);
												AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_95[1 /*2*/], "ARM_2_GANG_CAR_GROUP", 0f);
												func_474(1);
												Local_69[iParam0 /*10*/].f_6++;
											}
										}
									}
									break;
								case 2:
									if (func_305(86))
									{
										if (!__LIB_13__::func_784(-1133.9783f, -1581.5763f, 5.2445f, 20f, 150f))
										{
											if (Local_69[iParam0 /*10*/].f_7 == 0)
											{
												Local_69[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 7000;
											}
											else if (MISC::GET_GAME_TIMER() > Local_69[iParam0 /*10*/].f_7)
											{
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
												{
													ENTITY::SET_ENTITY_COORDS(Local_95[0 /*2*/], -1139.0104f, -1575.6481f, 3.3153f, true, false, false, true);
													ENTITY::SET_ENTITY_HEADING(Local_95[0 /*2*/], 304f);
												}
											}
										}
										else
										{
											Local_69[iParam0 /*10*/].f_7 = 0;
										}
									}
									if (!ENTITY::IS_ENTITY_DEAD(Local_95[1 /*2*/], false))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[1 /*2*/], false))
										{
											if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_95[1 /*2*/]))
											{
												if (!PED::IS_PED_INJURED(Local_94[4 /*14*/]))
												{
													TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_94[4 /*14*/], Local_95[1 /*2*/], -1114.7998f, -1567.4254f, 3.3492f, 7f, 0, 0, 786469, 5f, 5f);
												}
												Local_69[iParam0 /*10*/].f_6++;
												if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_GANG_DRIVE_PAST"))
												{
													AUDIO::STOP_AUDIO_SCENE("ARM_2_GANG_DRIVE_PAST");
													AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_95[1 /*2*/], 0f);
												}
											}
										}
									}
									break;
								case 3:
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[1 /*2*/], false))
									{
										if (!PED::IS_PED_INJURED(Local_94[4 /*14*/]))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[4 /*14*/], joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD")) != 1)
											{
												TASK::TASK_VEHICLE_DRIVE_WANDER(Local_94[4 /*14*/], Local_95[1 /*2*/], 15f, 786599);
												PED::SET_PED_KEEP_TASK(Local_94[4 /*14*/], true);
												ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_95[1 /*2*/]));
												ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_94[4 /*14*/]));
												if (!PED::IS_PED_INJURED(Local_94[5 /*14*/]))
												{
													TASK::TASK_PAUSE(Local_94[5 /*14*/], -1);
													PED::SET_PED_KEEP_TASK(Local_94[5 /*14*/], true);
													ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_94[5 /*14*/]));
												}
												Local_69[iParam0 /*10*/].f_6++;
											}
										}
									}
									break;
								}
						}
						break;
					case 26:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_94[2 /*14*/], 5000, 0, 2);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							case 1:
								if (func_305(57))
								{
									if (!PED::IS_PED_INJURED(Local_94[3 /*14*/]))
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_94[3 /*14*/], 9000, 0, 2);
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							case 2:
								if (func_305(52))
								{
									if (!PED::IS_PED_INJURED(Local_94[3 /*14*/]))
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_94[3 /*14*/], 15000, 0, 2);
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							case 3:
								if (func_305(61))
								{
									if (!PED::IS_PED_INJURED(Local_94[4 /*14*/]))
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_94[4 /*14*/], 10000, 0, 2);
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
						}
						break;
					case 27:
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									PED::SET_PED_ALTERNATE_WALK_ANIM(Local_94[2 /*14*/], "missarmenian2", "car_react", 1f, false);
									Local_69[iParam0 /*10*/].f_6++;
									Local_69[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 10000;
									break;
								case 1:
									if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_94[2 /*14*/], MISC::GET_HASH_KEY("Alternate_Walk_Finished")))
									{
										PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_94[2 /*14*/], -8f);
									}
									break;
								}
						}
						break;
					case 28:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_94[3 /*14*/]))
								{
									Var14 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missarmenian2", "drunk_getup", ENTITY::GET_ENTITY_COORDS(Local_94[3 /*14*/], true), 0f, 0f, ENTITY::GET_ENTITY_HEADING(Local_94[3 /*14*/]), 0f, 2) };
									Var15 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missarmenian2", "drunk_getup", ENTITY::GET_ENTITY_COORDS(Local_94[3 /*14*/], true), 0f, 0f, ENTITY::GET_ENTITY_HEADING(Local_94[3 /*14*/]), 0f, 2) };
									iLocal_267 = PED::CREATE_SYNCHRONIZED_SCENE(Var14, Var15, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_94[3 /*14*/], iLocal_267, "missarmenian2", "drunk_getup", 4f, -4f, 1, 0, 1000f, 0);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							case 1:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_267))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_267) >= 1f)
									{
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					case 29:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[1 /*2*/], false))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									Local_69[iParam0 /*10*/].f_9 = 1f;
									Local_69[iParam0 /*10*/].f_6++;
									break;
								case 1:
									Local_69[iParam0 /*10*/].f_9 = (Local_69[iParam0 /*10*/].f_9 - SYSTEM::TIMESTEP());
									if (Local_69[iParam0 /*10*/].f_9 < 0f)
									{
										Local_69[iParam0 /*10*/].f_9 = 0f;
										Local_69[iParam0 /*10*/].f_3 = 1;
										func_472(12, 30);
									}
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_95[1 /*2*/]))
									{
										VEHICLE::SET_PLAYBACK_SPEED(Local_95[1 /*2*/], Local_69[iParam0 /*10*/].f_9);
									}
									break;
								}
						}
						break;
					case 30:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[1 /*2*/], false))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									Local_69[iParam0 /*10*/].f_9 = 0f;
									Local_69[iParam0 /*10*/].f_6++;
									break;
								case 1:
									Local_69[iParam0 /*10*/].f_9 = (Local_69[iParam0 /*10*/].f_9 + SYSTEM::TIMESTEP());
									if (Local_69[iParam0 /*10*/].f_9 >= 1f)
									{
										Local_69[iParam0 /*10*/].f_9 = 1f;
										Local_69[iParam0 /*10*/].f_3 = 1;
										func_472(11, 29);
									}
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_95[1 /*2*/]))
									{
										VEHICLE::SET_PLAYBACK_SPEED(Local_95[1 /*2*/], Local_69[iParam0 /*10*/].f_9);
									}
									break;
								}
						}
						break;
					case 31:
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_94[2 /*14*/], -8f);
									func_471(9, 27, 1, 0);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_94[2 /*14*/], PLAYER::PLAYER_PED_ID(), 4000);
									if (__LIB_15__::func_965("move"))
									{
										Local_69[iParam0 /*10*/].f_6++;
									}
									if (__LIB_15__::func_965("AR2_BU12"))
									{
										Local_69[iParam0 /*10*/].f_6 = 3;
									}
									break;
								case 1:
									TASK::TASK_PLAY_ANIM(Local_94[2 /*14*/], "MISSARMENIAN2", "lamar_impatient_c", 8f, -8f, -1, 48, 0f, false, false, false);
									Local_69[iParam0 /*10*/].f_6++;
									break;
								case 2:
									if (__LIB_15__::func_965("AR2_BU12"))
									{
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_94[2 /*14*/], "arm2", 0, 8, -1);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
									break;
								case 3:
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_94[2 /*14*/], "arm2", 0, 8, -1);
									Local_69[iParam0 /*10*/].f_3 = 1;
									break;
								}
						}
						break;
					case 32:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if ((iLocal_47 == 5 || iLocal_47 == 7) || iLocal_47 == 3)
								{
									if (func_305(71))
									{
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							case 1:
								if (func_305(71))
								{
									if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
									{
										if ((TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) == 2) || TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) == 0)
										{
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_94[2 /*14*/], PLAYER::PLAYER_PED_ID(), 1000);
										}
										else
										{
											TASK::CLEAR_PED_TASKS(Local_94[2 /*14*/]);
											PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_94[2 /*14*/], -8f);
											func_471(9, 27, 1, 0);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_94[2 /*14*/], PLAYER::PLAYER_PED_ID(), 1000);
										}
									}
								}
								else
								{
									switch (iLocal_47)
									{
										case 3:
											Var16 = { ENTITY::GET_ENTITY_COORDS(Local_94[2 /*14*/], true) };
											if (Var16.f_1 < -1601.9032f)
											{
												func_137();
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1115.4153f, -1605.2369f, 3.44196f, 1f, 20000, 0.25f, 1, 40000f);
												func_136(Local_94[2 /*14*/], 0);
											}
											else
											{
												func_137();
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1117.7394f, -1601.9032f, 3.39776f, 1f, 20000, 0.25f, 1, 40000f);
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1115.4153f, -1605.2369f, 3.44196f, 1f, 20000, 0.25f, 1, 40000f);
												func_136(Local_94[2 /*14*/], 0);
											}
											Local_69[iParam0 /*10*/].f_6 = 0;
											break;
										case 5:
										case 7:
											func_137();
											TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "arm2", 0, 8, -1);
											func_136(Local_94[2 /*14*/], 0);
											Local_69[iParam0 /*10*/].f_6 = 0;
											break;
										}
								}
								break;
						}
						break;
					case 33:
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_94[2 /*14*/], "arm2", 0, 8, -1);
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					case 34:
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1065.3481f, -1667.9664f, 2.260047f, -1074.5754f, -1676.1862f, 6.517583f, 11.875f, false, true, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
									{
										PED::SET_PED_AS_GROUP_MEMBER(Local_94[2 /*14*/], PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()));
										Local_69[iParam0 /*10*/].f_6++;
									}
									break;
								case 1:
									if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1065.3481f, -1667.9664f, 2.260047f, -1074.5754f, -1676.1862f, 6.517583f, 11.875f, false, true, 0) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_94[2 /*14*/], PLAYER::PLAYER_PED_ID(), 3000);
										PED::REMOVE_PED_FROM_GROUP(Local_94[2 /*14*/]);
										Local_69[iParam0 /*10*/].f_6 = 0;
									}
									break;
								}
						}
						break;
					case 38:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 99:
								break;
							case 0:
								STREAMING::REQUEST_MODEL(joaat("prop_gar_door_plug"));
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
									Local_94[0 /*14*/] = PLAYER::PLAYER_PED_ID();
									func_137();
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Vector(3.55f, -1665.66f, -1067.02f) + Vector(0f, -0.78f, -0.63f), 1f, 20000, 0.1f, 4608, -55f);
									TASK::TASK_SWAP_WEAPON(0, false);
									TASK::TASK_PLAY_ANIM(0, "MISSARMENIAN2", "open_garage_franklin", 4f, 2f, -1, 0, 0f, false, false, false);
									func_136(Local_94[0 /*14*/], 0);
									Local_69[iParam0 /*10*/].f_6++;
									STREAMING::REQUEST_MODEL(joaat("prop_gar_door_plug"));
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 3);
								}
								break;
							case 1:
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin", 3))
								{
									fVar17 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin");
									fVar17 = (fVar17 / ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin"));
									if (fVar17 < 0f || fVar17 > 1f)
									{
										fVar17 = 0f;
									}
									ENTITY::PLAY_ENTITY_ANIM(iLocal_209, "open_garage_door", "MISSARMENIAN2", 16f, false, true, false, 0f, 0);
									ENTITY::SET_ENTITY_COLLISION(iLocal_209, false, false);
									PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
									iLocal_82[0] = OBJECT::CREATE_OBJECT(joaat("prop_gar_door_plug"), -1066.72f, -1665.41f, 4.5f, true, true, false);
									ENTITY::SET_ENTITY_ROTATION(iLocal_82[0], -90f, 0f, -55.93f, 2, true);
									ENTITY::SET_ENTITY_VISIBLE(iLocal_82[0], false, false);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_82[0], true);
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 3);
									Local_69[iParam0 /*10*/].f_6 = 2;
								}
								break;
							case 2:
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin", 3))
								{
									fVar18 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin");
									fVar18 = (fVar18 / ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin"));
									if (fVar18 < 0f || fVar18 > 1f)
									{
										fVar18 = 0f;
									}
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_209, false))
									{
										if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_209, "MISSARMENIAN2", "open_garage_door", 3))
										{
											ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_209, "MISSARMENIAN2", "open_garage_door", fVar18);
										}
									}
									Local_69[iParam0 /*10*/].f_6 = 3;
								}
								break;
							case 3:
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_82[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_210, false))
								{
									ENTITY::SET_ENTITY_COORDS(iLocal_82[0], ENTITY::GET_ENTITY_COORDS(iLocal_209, true), true, false, false, true);
									ENTITY::SET_ENTITY_ROTATION(iLocal_82[0], ENTITY::GET_ENTITY_ROTATION(iLocal_209, 2), 2, true);
									Var19 = { ENTITY::GET_ENTITY_COORDS(iLocal_209, true) };
									Var20 = { ENTITY::GET_ENTITY_ROTATION(iLocal_209, 2) };
								}
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin") > 0.22f)
									{
										AUDIO::PLAY_SOUND_FROM_COORD(-1, "Garage_Open_01", -1066.9491f, -1665.6501f, 4.7981f, "ARM_2_REPO_SOUNDS", false, 0, false);
										Local_69[iParam0 /*10*/].f_6 = 4;
									}
								}
								break;
							case 4:
								if (STREAMING::HAS_MODEL_LOADED(joaat("prop_gar_door_plug")))
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin") > 0.77f)
										{
											TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
											if (HUD::DOES_BLIP_EXIST(iLocal_246))
											{
												HUD::REMOVE_BLIP(&iLocal_246);
											}
											PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
											TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), -1064.0494f, -1663.4165f, 4.8837f, 3000, 0, 2);
											if (!ENTITY::IS_ENTITY_DEAD(iLocal_82[0], false))
											{
												ENTITY::SET_ENTITY_COORDS(iLocal_82[0], -1066.72f, -1665.41f, 5.73f, true, false, false, true);
												ENTITY::SET_ENTITY_ROTATION(iLocal_82[0], -90f, 0f, -55.93f, 2, true);
											}
											iLocal_81++;
											Local_69[iParam0 /*10*/].f_3 = 1;
										}
									}
								}
								break;
						}
						break;
					case 39:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 99:
								break;
							case 0:
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									STREAMING::REQUEST_MODEL(joaat("prop_gar_door_plug"));
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
									Local_94[0 /*14*/] = PLAYER::PLAYER_PED_ID();
									func_137();
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Vector(3.55f, -1668.82f, -1064.81f) + Vector(0f, -0.78f, -0.63f), 1f, 20000, 0.1f, 4608, -55f);
									TASK::TASK_SWAP_WEAPON(0, false);
									TASK::TASK_PLAY_ANIM(0, "MISSARMENIAN2", "open_garage_franklin", 4f, -8f, -1, 0, 0f, false, false, false);
									func_136(Local_94[0 /*14*/], 0);
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2.5f, 3.5f, 4);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							case 1:
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin", 3))
								{
									fVar21 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin");
									fVar21 = (fVar21 / ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin"));
									if (fVar21 < 0f || fVar21 > 1f)
									{
										fVar21 = 0f;
									}
									ENTITY::PLAY_ENTITY_ANIM(iLocal_210, "open_garage_door", "MISSARMENIAN2", 16f, false, true, false, 0f, 0);
									ENTITY::SET_ENTITY_COLLISION(iLocal_210, false, false);
									PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
									Local_69[iParam0 /*10*/].f_6 = 2;
								}
								break;
							case 2:
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin", 3))
								{
									fVar22 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin");
									fVar22 = (fVar22 / ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin"));
									if (fVar22 < 0f || fVar22 > 1f)
									{
										fVar22 = 0f;
									}
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_210, false))
									{
										if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_210, "MISSARMENIAN2", "open_garage_door", 3))
										{
											ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_210, "MISSARMENIAN2", "open_garage_door", fVar22);
										}
									}
									if (STREAMING::HAS_MODEL_LOADED(joaat("prop_gar_door_plug")))
									{
										iLocal_82[1] = OBJECT::CREATE_OBJECT(joaat("prop_gar_door_plug"), -1064.45f, -1668.56f, 4.5f, true, true, false);
										ENTITY::SET_ENTITY_ROTATION(iLocal_82[1], -90f, 0f, -55.93f, 2, true);
										ENTITY::SET_ENTITY_VISIBLE(iLocal_82[1], false, false);
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_82[1], true);
									}
									Local_69[iParam0 /*10*/].f_6 = 3;
								}
								break;
							case 3:
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_82[1], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_210, false))
								{
									ENTITY::SET_ENTITY_COORDS(iLocal_82[1], ENTITY::GET_ENTITY_COORDS(iLocal_210, true), true, false, false, true);
									ENTITY::SET_ENTITY_ROTATION(iLocal_82[1], ENTITY::GET_ENTITY_ROTATION(iLocal_210, 2), 2, true);
									Var23 = { ENTITY::GET_ENTITY_COORDS(iLocal_210, true) };
									Var24 = { ENTITY::GET_ENTITY_ROTATION(iLocal_210, 2) };
								}
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin") > 0.25f)
									{
										AUDIO::PLAY_SOUND_FROM_COORD(-1, "Garage_Open_02", -1064.632f, -1668.981f, 4.8996f, "ARM_2_REPO_SOUNDS", false, 0, false);
										Local_69[iParam0 /*10*/].f_6 = 4;
									}
								}
								break;
							case 4:
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin") > 0.77f)
									{
										TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
										if (HUD::DOES_BLIP_EXIST(iLocal_247))
										{
											HUD::REMOVE_BLIP(&iLocal_247);
										}
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
										iLocal_81++;
										TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), -1063.1434f, -1667.3312f, 4.9339f, 3000, 0, 2);
										if (!ENTITY::IS_ENTITY_DEAD(iLocal_82[1], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_210, false))
										{
											ENTITY::SET_ENTITY_COORDS(iLocal_82[1], -1064.45f, -1668.56f, 5.73f, true, false, false, true);
											ENTITY::SET_ENTITY_ROTATION(iLocal_82[1], -90f, 0f, -55.93f, 2, true);
										}
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					case 40:
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Var25 = { 0f, 0f, 0f };
							if (__LIB_14__::func_797(&Var25, -1076.163f, -1673.7227f, 3.61753f, -1073.07f, -1678.3395f, 3.59893f, __LIB_0__::func_79(1.41f, -2f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
							{
								Local_69[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					case 41:
						if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-967780114))
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-967780114, 0f, false, true);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-967780114, 4, false, true);
						}
						break;
					case 50:
						if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-967780114))
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-967780114, 1f, false, true);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-967780114, 4, false, true);
						}
						break;
					case 51:
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							if (CUTSCENE::GET_CUTSCENE_TIME() > 16757)
							{
								if (!PED::IS_PED_INJURED(iLocal_202))
								{
									PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_202, 0, 0.875f, 0.758f, 279.331f, 1f, 6, 0f, "BulletLarge");
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						break;
					case 42:
						func_468("ARM2_MISSION_START", 0, "ARM2_FIGHT_START");
						AUDIO::START_AUDIO_SCENE("ARM_2_SEARCH_FOR_BIKE");
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					case 43:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[1 /*2*/], false))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									if (func_484(9))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_95[1 /*2*/], 1, "ARM2", true);
										Local_69[iParam0 /*10*/].f_6++;
									}
									break;
								case 1:
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_95[1 /*2*/]))
									{
										VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_95[1 /*2*/]);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
									break;
								}
						}
						break;
					case 44:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[6 /*2*/], false))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									if (PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()) == Local_95[6 /*2*/] || PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == Local_95[6 /*2*/])
									{
										ENTITY::FREEZE_ENTITY_POSITION(Local_95[6 /*2*/], false);
										Local_69[iParam0 /*10*/].f_6++;
									}
									break;
								case 1:
									if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95[6 /*2*/], false))
									{
										ENTITY::FREEZE_ENTITY_POSITION(Local_95[6 /*2*/], true);
										Local_69[iParam0 /*10*/].f_6 = 0;
									}
									break;
								}
						}
						break;
					case 47:
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_DRIVE_TO_ALLEY"))
							{
								AUDIO::STOP_AUDIO_SCENE("ARM_2_DRIVE_TO_ALLEY");
								Local_69[iParam0 /*10*/].f_3 = 1;
							}
							else
							{
								Local_69[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					case 49:
						if (MISC::GET_GAME_TIMER() > Local_69[iParam0 /*10*/].f_7)
						{
							if (!PED::IS_PED_INJURED(Local_94[4 /*14*/]) && !PED::IS_PED_INJURED(Local_94[5 /*14*/]))
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[4 /*14*/], 1) < 15f)
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_94[4 /*14*/], PLAYER::PLAYER_PED_ID(), 15000, 0, 2);
									TASK::TASK_LOOK_AT_ENTITY(Local_94[5 /*14*/], PLAYER::PLAYER_PED_ID(), 15000, 0, 2);
									Local_69[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 15000;
								}
							}
						}
						break;
					case 48:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								iLocal_47 = 1;
								Local_69[iParam0 /*10*/].f_6++;
								break;
							case 1:
								if (func_305(49))
								{
									iLocal_47 = 3;
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							case 2:
								Var26 = { ENTITY::GET_ENTITY_COORDS(Local_94[2 /*14*/], true) };
								if ((ENTITY::IS_ENTITY_PLAYING_ANIM(Local_94[2 /*14*/], "missarmenian2", "fake_punch_walk_by_lamar", 3) || Var26.f_1 < -1601f) || func_467(4, 17) > 0)
								{
									iLocal_47 = 4;
									Local_69[iParam0 /*10*/].f_6++;
								}
								else if (func_305(53))
								{
									Local_69[iParam0 /*10*/].f_6 = 4;
									iLocal_47 = 5;
								}
								break;
							case 3:
								if (func_305(53) || func_264(3, 21))
								{
									Local_69[iParam0 /*10*/].f_6 = 4;
									iLocal_47 = 5;
								}
								break;
							case 4:
								if (func_305(62) && !func_305(64))
								{
									Local_69[iParam0 /*10*/].f_6 = 5;
									iLocal_47 = 6;
								}
								break;
							case 5:
								if (func_305(64) || func_264(9, 27))
								{
									Local_69[iParam0 /*10*/].f_6 = 6;
									iLocal_47 = 7;
								}
								break;
						}
						break;
					case 45:
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									TASK::TASK_LOOK_AT_COORD(Local_94[2 /*14*/], -1074.4366f, -1674.6985f, 5.0856f, 3000, 0, 2);
									Local_69[iParam0 /*10*/].f_6++;
									Local_69[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 3000;
									break;
								case 1:
									if (MISC::GET_GAME_TIMER() > 3000)
									{
										TASK::TASK_LOOK_AT_COORD(Local_94[2 /*14*/], -1068.4233f, -1665.6406f, 4.9303f, 3000, 0, 2);
										Local_69[iParam0 /*10*/].f_6++;
										Local_69[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 3000;
									}
									break;
								case 2:
									if (MISC::GET_GAME_TIMER() > 3000)
									{
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
									break;
								}
						}
						break;
					case 46:
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1066.2876f, -1675.8617f, 2.403591f, -1074.1538f, -1664.7532f, 8.428232f, 13.4375f, false, true, 0))
						{
							bVar27 = true;
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
						}
						if (iLocal_92 > 1 && iLocal_92 < 6)
						{
							if (!PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) && ((!PED::IS_PED_INJURED(Local_94[2 /*14*/]) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_94[2 /*14*/], false) - Vector(2f, 0f, 0f), -1064.0027f, -1679.9027f, 7.516632f, 52.5f, false, true, 0)) || iLocal_266))
							{
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
								if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
								{
									iLocal_266 = 1;
								}
								bVar27 = true;
							}
						}
						if (iLocal_266)
						{
							fVar28 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_94[2 /*14*/], true), -1064.0027f, -1679.9027f, 7.516632f, false);
							fVar29 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1064.0027f, -1679.9027f, 7.516632f, false);
							if (fVar29 > (fVar28 + 3f) || CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
							{
								iLocal_266 = 0;
							}
						}
						if (!bVar27)
						{
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
							iLocal_266 = 0;
						}
						break;
					case 35:
						Local_69[iParam0 /*10*/].f_6 = 2;
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
								{
									TASK::TASK_GO_STRAIGHT_TO_COORD(Local_94[2 /*14*/], -1074.4803f, -1673.2312f, 3.4137f, 1f, 20000, 40000f, 0.5f);
									if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
									{
										PED::SET_PED_ALTERNATE_WALK_ANIM(Local_94[2 /*14*/], "missarmenian2", "LEMAR_INDICATE_GARAGE", 8f, true);
									}
									if (HUD::DOES_BLIP_EXIST(iLocal_244))
									{
										HUD::REMOVE_BLIP(&iLocal_244);
									}
									iLocal_244 = __LIB_0__::func_488(-1073.5753f, -1675.6047f, 3.4401f, 0);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							case 1:
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 7)
								{
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							case 2:
								if (func_484(15))
								{
									if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[2 /*14*/], 1) < 5f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
									{
										if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
										{
											if (!PED::IS_PED_IN_ANY_VEHICLE(Local_94[2 /*14*/], false) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_94[2 /*14*/]))
											{
												if (PED::IS_PED_STOPPED(Local_94[2 /*14*/]))
												{
													if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_94[2 /*14*/], "missarmenian2", "GARAGE_POINT_lemar", 3))
													{
														func_465(&(Local_69[iParam0 /*10*/].f_8), &(Local_69[iParam0 /*10*/].f_7));
													}
												}
											}
										}
									}
									else if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_PLAY_ANIM")) == 1)
									{
										TASK::CLEAR_PED_TASKS(Local_94[2 /*14*/]);
									}
								}
								break;
						}
						break;
					case 36:
						if (func_305(13))
						{
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						else
						{
							if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
							{
								TASK::CLEAR_PED_TASKS(Local_94[2 /*14*/]);
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_94[2 /*14*/], false))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(Local_94[2 /*14*/], 0, 0);
								}
							}
							MISC::CLEAR_BIT(&(Local_214.f_13), 26);
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					case 37:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								func_605(5);
								CUTSCENE::REQUEST_CUTSCENE("Arm_2_mcs_4", 8);
								Local_69[iParam0 /*10*/].f_6++;
								break;
							case 1:
								if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
								{
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 0, 0, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 1, 0, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 2, 2, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 3, 2, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 4, 3, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 5, 0, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 6, 1, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 7, 0, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 8, 0, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 9, 0, 0, 0);
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					case 66:
						if (!PED::IS_PED_INJURED(Local_94[3 /*14*/]))
						{
							PED::DELETE_PED(&(Local_94[3 /*14*/]));
						}
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
							PLAYER::SET_MAX_WANTED_LEVEL(0);
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
						}
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()), iLocal_98);
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_98, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
							PED::SET_PED_ACCURACY(Local_94[2 /*14*/], 15);
							PED::REMOVE_PED_FROM_GROUP(Local_94[2 /*14*/]);
						}
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(Local_94[2 /*14*/]))
							{
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_94[2 /*14*/], PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
							}
						}
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (!HUD::DOES_BLIP_EXIST(Local_94[2 /*14*/].f_1))
							{
								Local_94[2 /*14*/].f_1 = __LIB_0__::func_666(Local_94[2 /*14*/], 0, 145);
							}
						}
						MISC::SET_INSTANCE_PRIORITY_HINT(1);
						PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
						iLocal_263 = 0;
						MISC::SET_BIT(&iLocal_263, 3);
						MISC::SET_BIT(&iLocal_263, 4);
						iLocal_226 = OBJECT::CREATE_PICKUP(joaat("PICKUP_WEAPON_PUMPSHOTGUN"), -1082.8522f, -1651.9196f, 3.3987f, iLocal_263, 40, true, 0);
						iLocal_196 = TASK::ADD_COVER_POINT(-1071.3256f, -1663.0614f, 3.4888f, 27f, 1, 0, 1, true);
						iLocal_197 = TASK::ADD_COVER_POINT(-1082.3966f, -1649.0983f, 3.5038f, 27f, 1, 0, 1, true);
						iLocal_198 = TASK::ADD_COVER_POINT(-1089.4329f, -1639.4565f, 3.4724f, 27f, 1, 0, 1, true);
						iLocal_200 = TASK::ADD_COVER_POINT(-1073.5054f, -1657.7539f, 3.394f, 226.1309f, 0, 2, 0, true);
						iLocal_199 = TASK::ADD_COVER_POINT(-1079.18f, -1653.95f, 3.4f, 27f, 1, 0, 1, true);
						AUDIO::START_AUDIO_SCENE("ARM_2_SHOOTOUT");
						__LIB_37__::func_205(Local_94[2 /*14*/], 1);
						func_162(4, 12, 0);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					case 65:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[2 /*2*/], false))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_95[2 /*2*/], PLAYER::PLAYER_PED_ID(), true))
							{
								if (ENTITY::GET_ENTITY_HEALTH(Local_95[2 /*2*/]) < 950)
								{
									VEHICLE::SET_VEHICLE_TYRE_BURST(Local_95[2 /*2*/], 5, false, 1000f);
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						break;
					case 54:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
								{
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_94[2 /*14*/], true);
									Local_69[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 9000;
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							case 1:
								if (MISC::GET_GAME_TIMER() > Local_69[iParam0 /*10*/].f_7)
								{
									if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
									{
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_94[2 /*14*/], false);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					case 64:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								STREAMING::REQUEST_MODEL(joaat("prop_ld_balcfnc_02b"));
								Local_69[iParam0 /*10*/].f_6 = 1;
								break;
							case 1:
								if (STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_balcfnc_02b")))
								{
									ENTITY::CREATE_MODEL_HIDE(-1089.8f, -1637.8f, 7.3f, 1f, joaat("prop_ld_balcfnc_02a"), true);
									iVar30 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_balcfnc_02b"), -1089.83f, -1637.81f, 7.35f, true, true, false);
									ENTITY::SET_ENTITY_ROTATION(iVar30, 0f, 0f, 32.65f, 2, true);
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					case 52:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								WEAPON::SET_CURRENT_PED_WEAPON(Local_94[2 /*14*/], WEAPON::GET_BEST_PED_WEAPON(Local_94[2 /*14*/], false), false);
								iLocal_195 = TASK::ADD_COVER_POINT(Vector(3.429f, -1671.3015f, -1076.6744f) + Vector(0.03f, -0.29f, -0.1f), 31f, 0, 0, 1, false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_94[2 /*14*/], -1076.6666f, -1671.3312f, 3.4299f, 2f, false, false);
								func_137();
								TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, iLocal_195, -1087.8435f, -1645.8905f, 3.3987f, 30000, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
								func_136(Local_94[2 /*14*/], 0);
								Local_69[iParam0 /*10*/].f_3 = 1;
								break;
						}
						break;
					case 53:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
								{
									TASK::REMOVE_COVER_POINT(iLocal_195);
									iLocal_195 = TASK::ADD_COVER_POINT(-1081.219f, -1667.3441f, 3.8438f, 16f, 0, 2, 3, false);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_94[2 /*14*/], -1082.5115f, -1666.6372f, 3.483845f, 2.437f, false, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[2 /*14*/], 29, true);
									TASK::TASK_SEEK_COVER_TO_COVER_POINT(Local_94[2 /*14*/], iLocal_195, -1085.3137f, -1653.031f, 4.7843f, -1, true);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							case 1:
								if (__LIB_0__::func_724(Local_94[2 /*14*/], -1083.49f, -1667.09f, 3.71f, 1) < 2.8f)
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					case 55:
						if (func_304(110))
						{
							if (func_264(7, 53))
							{
								if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
								{
									switch (Local_69[iParam0 /*10*/].f_6)
									{
										case 0:
											TASK::REMOVE_COVER_POINT(iLocal_195);
											iLocal_195 = TASK::ADD_COVER_POINT(-1085.27f, -1655.59f, 3.4f, 16f, 1, 2, 4, false);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_94[2 /*14*/], -1084.7499f, -1656.7655f, 3.398659f, 6f, false, false);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[2 /*14*/], true);
											func_137();
											TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, iLocal_195, -1085.27f, -1655.59f, 3.4f, -1, false);
											TASK::TASK_STAY_IN_COVER(0);
											func_136(Local_94[2 /*14*/], 0);
											Local_69[iParam0 /*10*/].f_6++;
											break;
										case 1:
											if (__LIB_0__::func_724(Local_94[2 /*14*/], -1084.7499f, -1656.7655f, 3.398659f, 1) < 3f)
											{
												if (!PED::IS_PED_INJURED(Local_94[13 /*14*/]))
												{
													if (TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(-1085.27f, -1655.59f, 3.4f))
													{
														Local_69[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 1000;
													}
												}
												Local_69[iParam0 /*10*/].f_6++;
											}
											break;
										case 2:
											if (TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(-1085.27f, -1655.59f, 3.4f))
											{
												ENTITY::IS_ENTITY_DEAD(Local_94[13 /*14*/], false);
												if (((ENTITY::DOES_ENTITY_EXIST(Local_94[13 /*14*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_94[13 /*14*/])) || func_305(109)) || func_305(101))
												{
													TASK::REMOVE_COVER_POINT(iLocal_195);
													TASK::CLEAR_PED_TASKS(Local_94[2 /*14*/]);
													func_137();
													TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -1084.2192f, -1657.1465f, 3.3987f, -1088.6019f, -1655.9978f, 6.9797f, 1f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
													TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
													TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
													func_136(Local_94[2 /*14*/], 0);
													func_471(12, 58, 1, 0);
													Local_69[iParam0 /*10*/].f_3 = 1;
												}
											}
											else
											{
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[2 /*14*/], false);
												TASK::CLEAR_PED_TASKS(Local_94[2 /*14*/]);
												func_137();
												TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -1084.2192f, -1657.1465f, 3.3987f, -1088.6019f, -1655.9978f, 6.9797f, 1f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
												TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
												TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
												func_136(Local_94[2 /*14*/], 0);
												func_471(12, 58, 1, 0);
												Local_69[iParam0 /*10*/].f_3 = 1;
											}
											break;
										}
									}
							}
						}
						else
						{
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					case 56:
						TASK::CLEAR_PED_TASKS(Local_94[2 /*14*/]);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_94[2 /*14*/], -1085.27f, -1655.59f, 3.4f, 3f, false, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[2 /*14*/], false);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					case 57:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (__LIB_0__::func_724(Local_94[2 /*14*/], -1089.2f, -1655.05f, 3.42f, 0) < 6.375f)
								{
									func_471(3, 52, 1, 0);
									func_471(7, 53, 1, 0);
									func_471(10, 55, 1, 0);
									func_471(12, 58, 1, 0);
									func_471(13, 56, 1, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[2 /*14*/], true);
									TASK::TASK_PLAY_ANIM(Local_94[2 /*14*/], "missarmenian2lamar_in_cover", "lamar_explosion_react", 8f, -1f, -1, 131080, 0f, false, false, false);
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 4f, 4);
									Local_69[iParam0 /*10*/].f_6++;
								}
								else
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
							case 1:
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_PLAY_ANIM")) == 7 || (TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_PLAY_ANIM")) == 1 && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_94[2 /*14*/], "missarmenian2lamar_in_cover", "lamar_explosion_react") > 0.78f))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[2 /*14*/], false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_94[2 /*14*/], 100f, 0);
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					case 58:
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									func_137();
									TASK::TASK_PLAY_ANIM(0, "missarmenian2lamar_in_cover", "lamar_cover_intro", 4f, -4f, -1, 0, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(0, "missarmenian2lamar_in_cover", "lamar_cover_idle_a", 4f, -4f, -1, 0, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(0, "missarmenian2lamar_in_cover", "lamar_cover_loop", 4f, -4f, -1, 1, 0f, false, false, false);
									func_136(Local_94[2 /*14*/], 0);
									Local_69[iParam0 /*10*/].f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(800, 2800));
									Local_69[iParam0 /*10*/].f_8 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3800, 6800));
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 1f, 4);
									PED::SET_COMBAT_FLOAT(Local_94[2 /*14*/], 5, 1f);
									Local_69[iParam0 /*10*/].f_6++;
									break;
								case 1:
									if (MISC::GET_GAME_TIMER() > Local_69[iParam0 /*10*/].f_7)
									{
										if (func_264(14, 59))
										{
											Local_69[iParam0 /*10*/].f_3 = 1;
										}
										else if (func_304(102))
										{
											if (!func_464(14, 59))
											{
												if (!PED::IS_PED_IN_COVER(Local_94[2 /*14*/], false) || (PED::IS_PED_IN_COVER(Local_94[2 /*14*/], false) && __LIB_0__::func_724(Local_94[2 /*14*/], -1085.27f, -1655.59f, 3.4f, 1) > 1f))
												{
													if (TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(-1085.27f, -1655.59f, 3.4f))
													{
														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[2 /*14*/], false);
														TASK::TASK_SEEK_COVER_TO_COVER_POINT(Local_94[2 /*14*/], iLocal_195, -1085.27f, -1655.59f, 3.4f, -1, false);
													}
												}
											}
											Local_69[iParam0 /*10*/].f_3 = 1;
										}
									}
									if (MISC::GET_GAME_TIMER() > Local_69[iParam0 /*10*/].f_8)
									{
										if (!func_464(14, 59) && !func_264(14, 59))
										{
											func_137();
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
											{
												TASK::TASK_PLAY_ANIM(0, "missarmenian2lamar_in_cover", "lamar_cover_idle_a", 4f, -4f, -1, 0, 0f, false, false, false);
											}
											else
											{
												TASK::TASK_PLAY_ANIM(0, "missarmenian2lamar_in_cover", "lamar_cover_idle_b", 4f, -4f, -1, 0, 0f, false, false, false);
											}
											TASK::TASK_PLAY_ANIM(0, "missarmenian2lamar_in_cover", "lamar_cover_loop", 4f, -4f, -1, 1, 0f, false, false, false);
											func_136(Local_94[2 /*14*/], 0);
											Local_69[iParam0 /*10*/].f_8 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3800, 6800));
										}
										else
										{
											Local_69[iParam0 /*10*/].f_3 = 1;
										}
									}
									break;
								}
						}
						break;
					case 59:
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (!func_464(35, 57))
							{
								func_471(3, 52, 1, 0);
								func_471(7, 53, 1, 0);
								func_471(10, 55, 1, 0);
								func_471(12, 58, 1, 0);
								func_471(13, 56, 1, 0);
								TASK::REMOVE_COVER_POINT(iLocal_195);
								iLocal_195 = TASK::ADD_COVER_POINT(-1086.16f, -1651.64f, 3.4f, 40f, 0, 2, 1, false);
								PED::SET_COMBAT_FLOAT(Local_94[2 /*14*/], 3, 0.5f);
								PED::SET_COMBAT_FLOAT(Local_94[2 /*14*/], 4, 1000f);
								PED::SET_COMBAT_FLOAT(Local_94[2 /*14*/], 0, 0f);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_94[2 /*14*/], -1086.11f, -1651.8f, 3.4f, 3f, false, false);
								func_137();
								if (ENTITY::IS_ENTITY_AT_COORD(Local_94[2 /*14*/], -1085.5148f, -1656.0714f, 4.39866f, 0.75f, 0.8125f, 1f, false, true, 0))
								{
									TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -1084.2192f, -1657.1465f, 3.3987f, -1087.1493f, -1646.5332f, 4.662f, 1f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
								}
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
								func_136(Local_94[2 /*14*/], 0);
								Local_69[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					case 63:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-967780114))
								{
									OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-967780114, 1f, false, true);
									OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-967780114, 4, false, true);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							case 1:
								if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-967780114))
								{
									if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-967780114) > 0.8f)
									{
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					case 67:
						func_277(9, -1075.8479f, -1663.647f, 3.3987f, 175.1524f, joaat("WEAPON_PISTOL"), 0, 0, -1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_94[9 /*14*/], -1073.7207f, -1657.5756f, 3.401901f, 3f, false, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[9 /*14*/], 11, true);
						func_137();
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_SHOOT_AT_COORD(0, -1075.5133f, -1679.8137f, 4.9952f, 1500, joaat("FIRING_PATTERN_BURST_FIRE"));
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
						func_136(Local_94[9 /*14*/], 0);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					case 68:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								func_277(10, -1080.6929f, -1650.7874f, 3.4234f, 196f, joaat("WEAPON_PISTOL"), 0, 0, -1);
								PED::SET_COMBAT_FLOAT(Local_94[10 /*14*/], 3, 0.5f);
								PED::SET_COMBAT_FLOAT(Local_94[10 /*14*/], 4, 1000f);
								PED::SET_COMBAT_FLOAT(Local_94[10 /*14*/], 0, 0f);
								PED::SET_PED_CONFIG_FLAG(Local_94[10 /*14*/], 188, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[10 /*14*/], 12, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[10 /*14*/], 8, false);
								PED::SET_PED_PINNED_DOWN(Local_94[10 /*14*/], false, -1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[10 /*14*/], 34, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[10 /*14*/], 50, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_94[10 /*14*/], 50f, 0);
								Local_69[iParam0 /*10*/].f_6++;
								break;
							case 1:
								if (ENTITY::DOES_ENTITY_EXIST(Local_94[12 /*14*/]) && PED::IS_PED_INJURED(Local_94[12 /*14*/]))
								{
									if (!PED::IS_PED_INJURED(Local_94[10 /*14*/]))
									{
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_94[10 /*14*/], -1084.3212f, -1648.2567f, 3.3987f, 2f, false, false);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					case 69:
						func_277(11, -1092.9165f, -1660.4343f, 3.5354f, 296f, joaat("WEAPON_PISTOL"), 0, 0, -1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_94[11 /*14*/], -1081.7593f, -1657.3408f, 3.398672f, 2.25f, false, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[11 /*14*/], 50, true);
						PED::SET_PED_COMBAT_MOVEMENT(Local_94[11 /*14*/], 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[11 /*14*/], 51, true);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_94[11 /*14*/], 50f, 0);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					case 70:
						Var32 = { Vector(4.47f, -1649.87f, -1088.97f) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						Var32 = { __LIB_0__::func_79(Var32) };
						Var32 = { Var32 * Vector(4.48f, 4.48f, 4.48f) };
						Var31 = { Vector(3.4f, -1649.87f, -1088.97f) + Vector(0f, Var32.f_1, Var32.f_0) };
						iLocal_201 = TASK::ADD_COVER_POINT(Var31, -148f, 2, 0, 0, false);
						func_277(12, Var31, 222f, joaat("WEAPON_PISTOL"), 0, 0, -1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[12 /*14*/], 29, true);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_94[12 /*14*/], -1085.3022f, -1653.6796f, 3.469686f, 2.125f, false, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[12 /*14*/], 50, true);
						PED::SET_PED_COMBAT_MOVEMENT(Local_94[12 /*14*/], 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[12 /*14*/], 51, true);
						func_137();
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -1089.0614f, -1648.2094f, 3.3985f, 500, false, -1f, true, false, iLocal_201, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
						func_136(Local_94[12 /*14*/], 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_94[12 /*14*/], true, false);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					case 71:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
								{
									if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_206))
									{
										if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_206) == 7)
										{
											func_277(13, -1104.9807f, -1665.0115f, 6.3488f, 307f, joaat("WEAPON_MICROSMG"), 0, 0, -1);
										}
										else
										{
											func_277(13, -1098.2137f, -1660.4208f, 6.2581f, 307f, joaat("WEAPON_MICROSMG"), 0, 0, -1);
										}
									}
									else
									{
										func_277(13, -1098.2137f, -1660.4208f, 6.2581f, 307f, joaat("WEAPON_MICROSMG"), 0, 0, -1);
									}
									PED::SET_PED_ACCURACY(Local_94[13 /*14*/], 0);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_94[13 /*14*/], -1089.65f, -1655.94f, 6.36f, 1.875f, false, false);
									if (func_305(101))
									{
										func_137();
										TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1089.7052f, -1656.5057f, 6.3482f, 2f, 20000, 0.25f, 0, 40000f);
										TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
										TASK::TASK_SHOOT_AT_ENTITY(0, Local_94[2 /*14*/], -1, joaat("FIRING_PATTERN_FULL_AUTO"));
										func_136(Local_94[13 /*14*/], 0);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
									else
									{
										PED::SET_PED_ACCURACY(Local_94[13 /*14*/], 0);
										func_137();
										TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1089.7052f, -1656.5057f, 6.3482f, Local_94[2 /*14*/], 2f, true, 0.25f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
										TASK::TASK_SHOOT_AT_ENTITY(0, Local_94[2 /*14*/], -1, joaat("FIRING_PATTERN_FULL_AUTO"));
										func_136(Local_94[13 /*14*/], 0);
										PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_94[13 /*14*/], 2f);
									}
									PED::FORCE_PED_MOTION_STATE(Local_94[13 /*14*/], joaat("MotionState_Run"), false, 0, false);
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1f, 3f, 3);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							case 1:
								if (PED::IS_PED_INJURED(Local_94[13 /*14*/]))
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								else if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1089.8652f, -1656.4861f, 6.202436f, 1) < 4.625f || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_94[13 /*14*/]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[13 /*14*/], false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_94[13 /*14*/], 70f, 0);
									PED::SET_PED_ACCURACY(Local_94[13 /*14*/], 30);
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
							case 2:
								if (PED::IS_PED_INJURED(Local_94[13 /*14*/]))
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								else if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1089.8652f, -1656.4861f, 6.202436f, 1) < 4.625f || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_94[13 /*14*/]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[13 /*14*/], false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_94[13 /*14*/], 70f, 0);
									PED::SET_PED_ACCURACY(Local_94[13 /*14*/], 30);
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					case 72:
						if (!PED::IS_PED_INJURED(Local_94[13 /*14*/]))
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_94[13 /*14*/], ENTITY::GET_ENTITY_COORDS(Local_94[13 /*14*/], true), 5.25f, false, false);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_94[13 /*14*/], 50f, 0);
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					case 73:
						func_277(16, -1108.8895f, -1637.4775f, 3.6162f, 300f, joaat("WEAPON_PISTOL"), 0, 0, -1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_94[16 /*14*/], -1098.4191f, -1629.1586f, 3.3987f, 2.5f, false, false);
						PED::SET_PED_COMBAT_MOVEMENT(Local_94[16 /*14*/], 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[16 /*14*/], 51, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[16 /*14*/], 50, true);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_94[16 /*14*/], 100f, 0);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					case 74:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								func_277(18, -1090.4824f, -1635.0518f, 6.7641f, 167f, joaat("WEAPON_PISTOL"), 0, 0, -1);
								PED::SET_COMBAT_FLOAT(Local_94[18 /*14*/], 4, 10f);
								PED::SET_PED_TARGET_LOSS_RESPONSE(Local_94[18 /*14*/], 1);
								PED::SET_PED_CONFIG_FLAG(Local_94[18 /*14*/], 188, true);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_94[18 /*14*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_94[18 /*14*/], -1090.1465f, -1636.2036f, 6.716715f, 2.375f, false, false);
								ENTITY::SET_ENTITY_HEALTH(Local_94[18 /*14*/], 350, 0);
								PED::SET_PED_MAX_HEALTH(Local_94[18 /*14*/], 350);
								PED::FORCE_PED_MOTION_STATE(Local_94[18 /*14*/], joaat("MotionState_Run"), true, 0, false);
								PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_94[18 /*14*/], 150f);
								func_137();
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1090.2764f, -1637.3666f, 6.7641f, 2f, 20000, 0.4f, 0, 40000f);
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 150f, 0);
								func_136(Local_94[18 /*14*/], 0);
								Local_69[iParam0 /*10*/].f_6++;
								break;
							case 1:
								if (!PED::IS_PED_INJURED(Local_94[18 /*14*/]))
								{
									if (PED::IS_PED_RAGDOLL(Local_94[18 /*14*/]))
									{
										ENTITY::SET_ENTITY_HEALTH(Local_94[18 /*14*/], 0, 0);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
									else if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[18 /*14*/], joaat("SCRIPT_TASK_ANY")) != 1)
									{
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_94[18 /*14*/], 150f, 0);
									}
								}
								else
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								if (Local_69[iParam0 /*10*/].f_7 == 0)
								{
									if (func_305(97))
									{
										if (!PED::IS_PED_INJURED(Local_94[18 /*14*/]))
										{
											PED::SET_PED_ALLOWED_TO_DUCK(Local_94[18 /*14*/], false);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[18 /*14*/], 12, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[18 /*14*/], 0, false);
										}
										Local_69[iParam0 /*10*/].f_7 = 1;
									}
								}
								else if (func_304(97))
								{
									if (!PED::IS_PED_INJURED(Local_94[18 /*14*/]))
									{
										PED::SET_PED_ALLOWED_TO_DUCK(Local_94[18 /*14*/], true);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[18 /*14*/], 12, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[18 /*14*/], 0, true);
									}
									Local_69[iParam0 /*10*/].f_7 = 0;
								}
								break;
						}
						break;
					case 75:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								func_277(19, -1098.6907f, -1626.7164f, 9.9315f, 209.2257f, joaat("WEAPON_PISTOL"), 0, 0, -1);
								WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_94[19 /*14*/], WEAPON::GET_BEST_PED_WEAPON(Local_94[19 /*14*/], false));
								PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_94[19 /*14*/], -1095.9185f, -1630.0737f, 9.936975f, -1097.0034f, -1630.8312f, 10.911861f, 1f, false, false);
								PED::FORCE_PED_MOTION_STATE(Local_94[19 /*14*/], joaat("MotionState_Run"), true, 0, false);
								PED::SET_PED_CONFIG_FLAG(Local_94[19 /*14*/], 188, true);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_94[19 /*14*/], true);
								PED::SET_PED_ALLOWED_TO_DUCK(Local_94[19 /*14*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[19 /*14*/], 12, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[19 /*14*/], 0, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[19 /*14*/], 29, false);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_94[19 /*14*/], 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_94[19 /*14*/], 150f, 0);
								Local_69[iParam0 /*10*/].f_6++;
								break;
							case 1:
								if (!PED::IS_PED_INJURED(Local_94[19 /*14*/]))
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_94[19 /*14*/], -1095.9185f, -1630.0737f, 9.936975f, -1097.0034f, -1630.8312f, 10.911861f, 1f, false, true, 0))
									{
										if (PED::GET_PED_COMBAT_MOVEMENT(Local_94[19 /*14*/]) != 0)
										{
											PED::SET_PED_COMBAT_MOVEMENT(Local_94[19 /*14*/], 0);
										}
									}
									if (PED::IS_PED_RAGDOLL(Local_94[19 /*14*/]))
									{
										ENTITY::SET_ENTITY_HEALTH(Local_94[19 /*14*/], 0, 0);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								else
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					case 76:
						if (ENTITY::DOES_ENTITY_EXIST(Local_94[21 /*14*/]))
						{
							if (PED::IS_PED_INJURED(Local_94[21 /*14*/]))
							{
								TASK::REMOVE_WAYPOINT_RECORDING("arm2_15");
								Local_69[iParam0 /*10*/].f_3 = 1;
							}
						}
						Local_69[iParam0 /*10*/].f_9 = (Local_69[iParam0 /*10*/].f_9 + (-2f * SYSTEM::TIMESTEP()));
						if (Local_69[iParam0 /*10*/].f_9 <= -1f)
						{
							Local_69[iParam0 /*10*/].f_9 = -1f;
						}
						__LIB_15__::func_953(joaat("prop_map_door_01"), -1104.6572f, -1638.4814f, 4.6754f, 1, Local_69[iParam0 /*10*/].f_9);
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 99:
								break;
							case 0:
								TASK::REQUEST_WAYPOINT_RECORDING("arm2_15");
								Local_69[iParam0 /*10*/].f_6++;
								Local_69[iParam0 /*10*/].f_4 = 1;
								break;
							case 1:
								if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("arm2_15"))
								{
									func_277(21, -1106.8759f, -1638.6997f, 3.6407f, 288.3654f, joaat("WEAPON_PISTOL"), 0, 0, -1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_94[21 /*14*/], -1100.4769f, -1641.0421f, 3.616217f, 2.75f, false, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[21 /*14*/], 29, false);
									PED::SET_PED_COMBAT_MOVEMENT(Local_94[21 /*14*/], 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[21 /*14*/], 51, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[21 /*14*/], 50, true);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_94[21 /*14*/], 100f, 0);
									AUDIO::PLAY_SOUND_FROM_COORD(-1, "ARM_2_REPO_DOOR_KICK_OPEN", -1104.3594f, -1637.5748f, 2.366156f, 0, false, 0, false);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							case 2:
								break;
							case 3:
								if (!PED::IS_PED_INJURED(Local_94[21 /*14*/]))
								{
									PED::SET_PED_CAPSULE(Local_94[21 /*14*/], 1f);
									if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_94[21 /*14*/]))
									{
										TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_PED(Local_94[21 /*14*/], PLAYER::PLAYER_PED_ID(), false);
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							case 4:
								if (!PED::IS_PED_INJURED(Local_94[21 /*14*/]))
								{
									PED::SET_PED_CAPSULE(Local_94[21 /*14*/], 1f);
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_94[21 /*14*/], -1104.3594f, -1637.5748f, 2.366156f, -1105.299f, -1638.2491f, 6.828245f, 1.5625f, false, true, 0))
									{
										AUDIO::PLAY_SOUND_FROM_COORD(-1, "ARM_2_REPO_DOOR_KICK_OPEN", -1104.3594f, -1637.5748f, 2.366156f, 0, false, 0, false);
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							case 5:
								if (!PED::IS_PED_INJURED(Local_94[21 /*14*/]))
								{
									PED::SET_PED_CAPSULE(Local_94[21 /*14*/], 1f);
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_94[21 /*14*/], -1103.139f, -1638.565f, 2.803717f, -1104.7351f, -1636.1798f, 4.803716f, 1.375f, false, true, 0))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[21 /*14*/], false);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_94[21 /*14*/], 100f, 0);
										__LIB_41__::func_48(96, 4);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					case 60:
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_94[2 /*14*/], -1100.6936f, -1647.6597f, 2.457902f, -1092.784f, -1647.7041f, 5.39866f, 2.375f, false, false);
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					case 77:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[6 /*2*/], false))
								{
									Local_94[20 /*14*/] = PED::CREATE_PED(26, iLocal_259, -1084.3834f, -1633.0228f, 3.7424f, 81f, true, true);
									PED::SET_PED_CAN_BE_TARGETTED(Local_94[20 /*14*/], false);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_95[6 /*2*/], 1);
									VEHICLE::SET_VEHICLE_ALARM(Local_95[6 /*2*/], false);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[20 /*14*/], true);
									TASK::TASK_ENTER_VEHICLE(Local_94[20 /*14*/], Local_95[6 /*2*/], 20000, -1, 2f, 262144, 0);
									ENTITY::FREEZE_ENTITY_POSITION(Local_95[6 /*2*/], false);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							case 1:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[6 /*2*/], false))
								{
									if (!PED::IS_PED_INJURED(Local_94[20 /*14*/]))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(Local_94[20 /*14*/], Local_95[6 /*2*/]))
										{
											TASK::TASK_PLAY_ANIM(Local_94[20 /*14*/], "missarmenian2", "In_Car_Nervous", 8f, -8f, -1, 1, 0f, false, false, false);
											Local_69[iParam0 /*10*/].f_6++;
										}
										else if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[20 /*14*/], joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 7)
										{
											TASK::TASK_ENTER_VEHICLE(Local_94[20 /*14*/], Local_95[6 /*2*/], 20000, -1, 2f, 262144, 0);
										}
									}
								}
								break;
							case 2:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[6 /*2*/], false))
								{
									if (!PED::IS_PED_INJURED(Local_94[20 /*14*/]))
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_94[20 /*14*/], Local_95[6 /*2*/]))
										{
											TASK::TASK_SMART_FLEE_PED(Local_94[20 /*14*/], PLAYER::PLAYER_PED_ID(), 70f, -1, false, false);
											PED::SET_PED_KEEP_TASK(Local_94[20 /*14*/], true);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_94[20 /*14*/]));
											Local_69[iParam0 /*10*/].f_3 = 1;
										}
									}
									else
									{
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					case 78:
						if (!PED::IS_PED_INJURED(Local_94[20 /*14*/]))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[6 /*2*/], false))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(Local_94[20 /*14*/], Local_95[6 /*2*/]))
										{
											if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING(Local_95[6 /*2*/]) - 307.1f)) < 0.5f)
											{
												PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[20 /*14*/], 3, false);
												ENTITY::SET_ENTITY_PROOFS(Local_94[20 /*14*/], true, false, false, false, false, false, false, false);
												PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_94[20 /*14*/], iLocal_98);
												PED::SET_PED_CONFIG_FLAG(Local_94[20 /*14*/], 116, false);
												ENTITY::FREEZE_ENTITY_POSITION(Local_95[6 /*2*/], false);
												VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_95[6 /*2*/], 6, "ARM2", true);
												AUDIO::ENABLE_VEHICLE_EXHAUST_POPS(Local_95[6 /*2*/], false);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[20 /*14*/], true);
												AUDIO::START_AUDIO_SCENE("ARM_2_GAS_TRAIL");
												AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_95[6 /*2*/], "ARM_2_GAS_TRAIL_CAR_GROUP", 0f);
												RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 7f, 4);
												Local_69[iParam0 /*10*/].f_6++;
											}
											else
											{
												TASK::TASK_SMART_FLEE_PED(Local_94[20 /*14*/], PLAYER::PLAYER_PED_ID(), 100f, 100000, false, false);
												PED::SET_PED_KEEP_TASK(Local_94[20 /*14*/], true);
												ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_94[20 /*14*/]));
												Local_69[iParam0 /*10*/].f_3 = 1;
											}
										}
										else
										{
											TASK::TASK_SMART_FLEE_PED(Local_94[20 /*14*/], PLAYER::PLAYER_PED_ID(), 100f, 100000, false, false);
											PED::SET_PED_KEEP_TASK(Local_94[20 /*14*/], true);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_94[20 /*14*/]));
											Local_69[iParam0 /*10*/].f_3 = 1;
										}
									}
									else
									{
										TASK::TASK_SMART_FLEE_PED(Local_94[20 /*14*/], PLAYER::PLAYER_PED_ID(), 100f, 100000, false, false);
										PED::SET_PED_KEEP_TASK(Local_94[20 /*14*/], true);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_94[20 /*14*/]));
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
									break;
								case 1:
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[6 /*2*/], false))
									{
										if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_95[6 /*2*/]))
										{
											ENTITY::SET_ENTITY_INVINCIBLE(Local_94[20 /*14*/], false);
											ENTITY::SET_ENTITY_HEALTH(Local_94[20 /*14*/], 0, 0);
											Local_69[iParam0 /*10*/].f_3 = 1;
										}
									}
									break;
								}
						}
						break;
					case 79:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								Local_69[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER();
								Local_69[iParam0 /*10*/].f_6++;
								break;
							case 1:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[6 /*2*/], false))
								{
									if (ENTITY::GET_ENTITY_HEALTH(Local_95[6 /*2*/]) < 300)
									{
										ENTITY::SET_ENTITY_HEALTH(Local_95[6 /*2*/], 300, 0);
									}
									if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_95[6 /*2*/]) < 200f)
									{
										VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_95[6 /*2*/], 200f);
									}
									if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_95[6 /*2*/]) < 150f)
									{
										VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_95[6 /*2*/], 150f);
									}
									Local_69[iParam0 /*10*/].f_8 = (MISC::GET_GAME_TIMER() - Local_69[iParam0 /*10*/].f_7);
									iVar33 = 0;
									iVar33 = 0;
									while (iVar33 <= 8)
									{
										if (Local_69[iParam0 /*10*/].f_8 > Local_205[iVar33 /*3*/])
										{
											if (Local_205[iVar33 /*3*/].f_1 == 0)
											{
												Local_205[iVar33 /*3*/].f_1 = 1;
												switch (Local_205[iVar33 /*3*/].f_2)
												{
													case 0:
														VEHICLE::POP_OUT_VEHICLE_WINDSCREEN(Local_95[6 /*2*/]);
														break;
													case 1:
														VEHICLE::SMASH_VEHICLE_WINDOW(Local_95[6 /*2*/], 3);
														break;
													case 2:
														VEHICLE::SET_VEHICLE_TYRE_BURST(Local_95[6 /*2*/], 1, false, 1000f);
														break;
													case 3:
														VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_95[6 /*2*/], true);
														VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_95[6 /*2*/], 200f);
														VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_95[6 /*2*/], 150f);
														VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_95[6 /*2*/], 2);
														break;
													case 4:
														VEHICLE::SMASH_VEHICLE_WINDOW(Local_95[6 /*2*/], 1);
														break;
													case 5:
														VEHICLE::SET_VEHICLE_DOOR_LATCHED(Local_95[6 /*2*/], 5, false, false, true);
														VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_95[6 /*2*/], 5, 3, 0.25f);
														break;
													case 7:
														VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_95[6 /*2*/], 2, false);
														Local_69[iParam0 /*10*/].f_3 = 1;
														break;
													case 6:
														VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_95[6 /*2*/], 3, false);
														break;
													case 8:
														VEHICLE::SET_VEHICLE_DAMAGE(Local_95[6 /*2*/], 0f, -2f, 0f, 5f, 0.3f, true);
														if (!PED::IS_PED_INJURED(Local_94[20 /*14*/]))
														{
															PED::SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(Local_94[20 /*14*/], true);
															ENTITY::SET_ENTITY_HEALTH(Local_94[20 /*14*/], 0, 0);
														}
														break;
													}
												}
										}
										iVar33++;
									}
								}
								break;
						}
						break;
					case 84:
						func_277(22, -1117.1775f, -1625.5195f, 3.4419f, 289.343f, joaat("WEAPON_PISTOL"), 0, 0, -1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[22 /*14*/], 29, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[22 /*14*/], 51, true);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_94[22 /*14*/], -1105.6226f, -1627.5686f, 3.4014f, 3f, false, false);
						PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_94[22 /*14*/], 200f);
						PED::SET_PED_TARGET_LOSS_RESPONSE(Local_94[22 /*14*/], 1);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_94[22 /*14*/], 100f, 0);
						func_277(24, -1100.0413f, -1619.9288f, 3.7226f, 115.4267f, joaat("WEAPON_PISTOL"), 0, 0, -1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[24 /*14*/], 29, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[24 /*14*/], 51, true);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_94[24 /*14*/], -1107.3348f, -1630.7046f, 3.5958f, 3f, false, false);
						PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_94[24 /*14*/], 200f);
						PED::SET_PED_TARGET_LOSS_RESPONSE(Local_94[24 /*14*/], 1);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_94[24 /*14*/], 100f, 0);
						func_605(7);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					case 85:
						func_468("ARM2_FIGHT_START", 1, "ARM2_CAR");
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					case 86:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[6 /*2*/], false))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_95[6 /*2*/], false);
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					case 87:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								break;
							case 1:
								if (!PED::IS_PED_INJURED(Local_94[13 /*14*/]))
								{
									Local_69[iParam0 /*10*/].f_6++;
									Local_69[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 500;
								}
								else
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
							case 2:
								if (MISC::GET_GAME_TIMER() > Local_69[iParam0 /*10*/].f_7)
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								else if (PED::IS_PED_INJURED(Local_94[13 /*14*/]))
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					case 88:
						if (ENTITY::DOES_ENTITY_EXIST(Local_94[8 /*14*/]))
						{
							if (!PED::IS_PED_INJURED(Local_94[8 /*14*/]))
							{
								if (!WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_94[8 /*14*/], 0, 2))
								{
									__LIB_0__::func_630(19);
								}
							}
							else if (PED::GET_PED_CAUSE_OF_DEATH(Local_94[8 /*14*/]) == 0)
							{
								__LIB_0__::func_630(19);
							}
						}
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					case 89:
						func_468("ARM2_GATE", 0, "ARM2_CHASE_START");
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					case 90:
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE() && func_305(6))
						{
							if (Local_69[iParam0 /*10*/].f_7 == 0)
							{
								if (AUDIO::START_AUDIO_SCENE("ARM_2_FOCUS_ON_BIKE"))
								{
									Local_69[iParam0 /*10*/].f_7 = 1;
								}
							}
						}
						else if (Local_69[iParam0 /*10*/].f_7 == 1)
						{
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_FOCUS_ON_BIKE"))
							{
								AUDIO::STOP_AUDIO_SCENE("ARM_2_FOCUS_ON_BIKE");
							}
							Local_69[iParam0 /*10*/].f_7 = 0;
						}
						break;
					case 91:
						if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_206))
						{
							if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_206) == 10)
							{
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_RAYFIRE"))
								{
									AUDIO::STOP_AUDIO_SCENE("ARM_2_RAYFIRE");
								}
								else
								{
									RECORDING::REPLAY_STOP_EVENT();
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						break;
					case 80:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								func_461(&(Local_254[0 /*7*/]), 0f, -1095.3407f, -1643.9155f, 3.4784f, -1.0505f, 2.4131f, 0f);
								func_461(&(Local_254[1 /*7*/]), 1f, -1097.3011f, -1637.0286f, 3.463f, 0.0203f, 2.7398f, 0f);
								func_461(&(Local_254[2 /*7*/]), 2f, -1104.4421f, -1629.7052f, 3.4128f, -4.9086f, 2.179f, 0f);
								Local_69[iParam0 /*10*/].f_6++;
								break;
							case 1:
								if (func_458(&bLocal_91))
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								if (bLocal_91)
								{
									__LIB_0__::func_630(10);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							case 2:
								if (func_458(&bLocal_91))
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					case 81:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								Local_69[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 2200;
								Local_69[iParam0 /*10*/].f_6++;
								break;
							case 1:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[6 /*2*/], false))
								{
									if (MISC::GET_GAME_TIMER() > Local_69[iParam0 /*10*/].f_7)
									{
										if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_GAS_TRAIL"))
										{
											AUDIO::STOP_AUDIO_SCENE("ARM_2_GAS_TRAIL");
											AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_95[6 /*2*/], 0f);
										}
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_95[6 /*2*/], 11, "ARM2", 16, 0, 786603);
										NETWORK::NETWORK_EXPLODE_VEHICLE(Local_95[6 /*2*/], true, false, -1);
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 4f, 4);
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							case 2:
								func_468("ARM2_CAR", 1, "ARM2_CHASE_START");
								Local_69[iParam0 /*10*/].f_3 = 1;
								break;
						}
						break;
					case 61:
						func_137();
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_SHOOT_AT_ENTITY(0, Local_95[6 /*2*/], 4000, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 60f, 0);
						func_136(Local_94[2 /*14*/], 0);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					case 62:
						func_437(iParam0);
						break;
					case 82:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								iLocal_207 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_test_01"), -1087.8252f, -1655.3612f, 7.1638f, true, true, false);
								ENTITY::SET_ENTITY_VISIBLE(iLocal_207, false, false);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_207, true);
								ENTITY::SET_ENTITY_PROOFS(iLocal_207, true, true, true, true, true, false, false, false);
								ENTITY::SET_ENTITY_INVINCIBLE(iLocal_207, true);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_207, true);
								ENTITY::SET_ENTITY_COLLISION(iLocal_207, false, false);
								OBJECT::SET_OBJECT_TARGETTABLE(iLocal_207, true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_207, true, 30f);
								Local_69[iParam0 /*10*/].f_6++;
								break;
							case 1:
								if (func_305(110))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_207))
									{
										OBJECT::DELETE_OBJECT(&iLocal_207);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					case 83:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								iLocal_208 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_test_01"), -1097.36f, -1636.76f, 3.4f, true, true, false);
								ENTITY::SET_ENTITY_VISIBLE(iLocal_208, false, false);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_208, true);
								ENTITY::SET_ENTITY_PROOFS(iLocal_208, true, true, true, true, true, false, false, false);
								ENTITY::SET_ENTITY_INVINCIBLE(iLocal_208, true);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_208, true);
								ENTITY::SET_ENTITY_COLLISION(iLocal_208, false, false);
								OBJECT::SET_OBJECT_TARGETTABLE(iLocal_208, true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_208, true, 30f);
								Local_69[iParam0 /*10*/].f_6++;
								break;
							case 1:
								if (func_305(121) || bLocal_91)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_208))
									{
										OBJECT::DELETE_OBJECT(&iLocal_208);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					case 92:
						if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1106.28f, -1624.36f, 3.4f, 1) > 70f)
						{
							iVar34 = 0;
							while (iVar34 < Local_94.f_0)
							{
								if ((iVar34 != 2 && iVar34 != 0) && iVar34 != 8)
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_94[iVar34 /*14*/]))
									{
										if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_94[iVar34 /*14*/], false))
										{
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_94[iVar34 /*14*/]));
										}
									}
								}
								iVar34++;
							}
							iVar34 = 0;
							while (iVar34 < Local_95.f_0)
							{
								if (iVar34 != 0 && iVar34 != 4)
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_95[iVar34 /*2*/]))
									{
										if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_95[iVar34 /*2*/]))
										{
											if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_95[iVar34 /*2*/], false))
											{
												ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_95[iVar34 /*2*/]));
											}
										}
									}
								}
								iVar34++;
							}
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_bin_07c"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_MexGoon_01"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_MexGoon_03"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison"));
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					case 93:
						if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
						{
							Local_95[7 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("bison"), -1149.3323f, -1593.024f, 3.2546f, 307.5245f, true, true, false);
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_95[7 /*2*/]));
						}
						else if (__LIB_0__::func_724(Local_95[0 /*2*/], -1139.4564f, -1579.8008f, 3.365427f, 1) > 32.8f)
						{
							if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_95[0 /*2*/], true))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_95[0 /*2*/], true, false);
								VEHICLE::DELETE_VEHICLE(&(Local_95[0 /*2*/]));
							}
							Local_95[7 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("bison"), -1149.3323f, -1593.024f, 3.2546f, 307.5245f, true, true, false);
						}
						MISC::SET_INSTANCE_PRIORITY_HINT(2);
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(Local_94[2 /*14*/], false);
						}
						PED::SET_CREATE_RANDOM_COPS(true);
						if (!ENTITY::DOES_ENTITY_EXIST(Local_95[4 /*2*/]))
						{
							while (!__LIB_17__::func_245(&(Local_95[4 /*2*/]), 1, -1134.0778f, -1582.0682f, 3.2928f, 300f, 1, 2))
							{
								func_20(2, 0);
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[4 /*2*/], false))
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_95[4 /*2*/], true, 1);
						}
						PATHFIND::SET_ROADS_IN_ANGLED_AREA(-966.15936f, -1187.3041f, -0.770555f, -1094.6553f, -964.7231f, 15.130554f, 10.3125f, false, false, true);
						if (HUD::DOES_BLIP_EXIST(Local_94[2 /*14*/].f_1))
						{
							HUD::REMOVE_BLIP(&(Local_94[2 /*14*/].f_1));
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[4 /*2*/], false))
						{
							Local_95[4 /*2*/].f_1 = __LIB_0__::func_639(Local_95[4 /*2*/], 0, 0);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[4 /*2*/], false))
						{
							AUDIO::START_AUDIO_SCENE("ARM_2_GET_TO_THE_CAR");
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_95[4 /*2*/], "ARM_2_BAGGER_GROUP", 0f);
						}
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[2 /*14*/], true);
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_GAS_TRAIL"))
						{
							AUDIO::STOP_AUDIO_SCENE("ARM_2_GAS_TRAIL");
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_95[6 /*2*/], 0f);
						}
						func_605(8);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					case 94:
						break;
					case 95:
						PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(-1549f, -1712f, -950f, -100f);
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(-1549f, -1712f, -950f, -100f))
								{
									func_137();
									TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_95[4 /*2*/], -1082.1672f, -1544.5271f, 3.5825f, 25f, 1, 0, 571211828, 10f, 5f);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_95[4 /*2*/], -1068.1123f, -1535.1061f, 3.8693f, 25f, 1, 0, 571211828, 10f, 5f);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_95[4 /*2*/], -1106.4408f, -943.8071f, 1.5151f, 25f, 1, 0, 571211828, 10f, 5f);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_95[4 /*2*/], -1188.9546f, -728.5704f, 19.7766f, 25f, 1, 0, 571211828, 10f, 5f);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_95[4 /*2*/], -1322.462f, -579.8076f, 28.4281f, 25f, 1, 0, 571211828, 10f, 5f);
									TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_95[4 /*2*/], 25f, 537657381);
									func_136(Local_94[8 /*14*/], 0);
									if (!ENTITY::IS_ENTITY_DEAD(Local_95[4 /*2*/], false))
									{
										VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_95[4 /*2*/], false);
										VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_95[4 /*2*/], 5f);
									}
									if (!PED::IS_PED_INJURED(Local_94[8 /*14*/]))
									{
										ENTITY::SET_ENTITY_HEALTH(Local_94[8 /*14*/], 100, 0);
										PED::SET_PED_CAN_BE_TARGETTED(Local_94[8 /*14*/], true);
										ENTITY::SET_ENTITY_PROOFS(Local_94[8 /*14*/], false, false, false, false, false, false, false, false);
									}
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 5f, 4);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
						}
						break;
					case 96:
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (!PED::IS_PED_GROUP_MEMBER(Local_94[2 /*14*/], PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID())))
							{
								if (__LIB_0__::func_76(Local_94[2 /*14*/], PLAYER::PLAYER_PED_ID(), 1) < 30f)
								{
									PED::SET_PED_AS_GROUP_MEMBER(Local_94[2 /*14*/], PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()));
									PED::SET_GROUP_SEPARATION_RANGE(PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()), 45f);
									PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Local_94[2 /*14*/], PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()), true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Local_94[2 /*14*/], 0);
									PED::SET_PED_CONFIG_FLAG(Local_94[2 /*14*/], 268, true);
								}
							}
						}
						break;
					case 97:
						if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(-1549f, -1712f, -950f, -100f))
						{
							if (!PED::IS_PED_INJURED(Local_94[8 /*14*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[8 /*14*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
								{
									func_137();
									if (TASK::GET_SEQUENCE_PROGRESS(Local_94[8 /*14*/]) <= 0)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_95[4 /*2*/], -1061.8494f, -1530.7161f, 4.0065f, 30f, 1, 0, 571211828, 5f, 5f);
									}
									if (TASK::GET_SEQUENCE_PROGRESS(Local_94[8 /*14*/]) <= 1)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_95[4 /*2*/], -1068.1123f, -1535.1061f, 3.8693f, 30f, 1, 0, 571211828, 5f, 5f);
									}
									if (TASK::GET_SEQUENCE_PROGRESS(Local_94[8 /*14*/]) <= 2)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_95[4 /*2*/], -1106.4408f, -943.8071f, 1.5151f, 30f, 1, 0, 571211828, 5f, 5f);
									}
									if (TASK::GET_SEQUENCE_PROGRESS(Local_94[8 /*14*/]) <= 3)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_95[4 /*2*/], -1188.9546f, -728.5704f, 19.7766f, 30f, 1, 0, 571211828, 5f, 5f);
									}
									if (TASK::GET_SEQUENCE_PROGRESS(Local_94[8 /*14*/]) <= 4)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_95[4 /*2*/], -1322.462f, -579.8076f, 28.4281f, 30f, 1, 0, 571211828, 5f, 5f);
									}
									TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, PED::GET_VEHICLE_PED_IS_USING(Local_94[8 /*14*/]), PLAYER::PLAYER_PED_ID(), 8, 25f, 537657380, 10f, 15f, true);
									func_136(Local_94[8 /*14*/], 0);
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								else
								{
									TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_94[8 /*14*/], PED::GET_VEHICLE_PED_IS_USING(Local_94[8 /*14*/]), PLAYER::PLAYER_PED_ID(), 8, 25f, 571211828, 10f, 15f, true);
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						break;
					case 98:
						if (!PED::IS_PED_INJURED(Local_94[8 /*14*/]))
						{
							if (PED::IS_PED_BEING_JACKED(Local_94[8 /*14*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_94[8 /*14*/], PLAYER::PLAYER_PED_ID(), 100f, 100000, false, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[8 /*14*/], false);
								PED::SET_PED_KEEP_TASK(Local_94[8 /*14*/], true);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_94[8 /*14*/]));
								PED::SET_PED_CAN_BE_TARGETTED(Local_94[8 /*14*/], true);
								Local_69[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					case 99:
						if (!PED::IS_PED_INJURED(Local_94[8 /*14*/]))
						{
							TASK::TASK_SMART_FLEE_PED(Local_94[8 /*14*/], PLAYER::PLAYER_PED_ID(), 100f, 100000, false, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[8 /*14*/], false);
							PED::SET_PED_KEEP_TASK(Local_94[8 /*14*/], true);
							PED::SET_PED_CAN_BE_TARGETTED(Local_94[8 /*14*/], true);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_94[8 /*14*/]));
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					case 100:
						func_468("ARM2_CHASE_START", 0, "ARM2_CHASE_MID");
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					case 101:
						func_468("ARM2_CHASE_MID", 1, "ARM2_STOP_TRACK");
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_GET_TO_THE_CAR"))
						{
							AUDIO::STOP_AUDIO_SCENE("ARM_2_GET_TO_THE_CAR");
						}
						AUDIO::START_AUDIO_SCENE("ARM_2_CHASE_THE_BIKE");
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					case 102:
						if (!iLocal_287)
						{
							func_468("ARM2_STOP_TRACK", 1, "");
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_CHASE_THE_BIKE"))
							{
								AUDIO::STOP_AUDIO_SCENE("ARM_2_CHASE_THE_BIKE");
							}
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					case 103:
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
							{
								func_137();
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1130.3208f, -1589.826f, 3.3891f, 2f, 20000, 0.25f, 0, 39f);
								TASK::TASK_CLIMB(0, true);
								func_136(Local_94[2 /*14*/], 0);
							}
						}
						break;
					case 104:
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (!PED::IS_PED_IN_GROUP(Local_94[2 /*14*/]))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
								{
									TASK::TASK_ENTER_VEHICLE(Local_94[2 /*14*/], Local_95[0 /*2*/], -1, 0, 2f, 1, 0);
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						break;
					case 105:
						if (MISC::GET_GAME_TIMER() > Local_69[iParam0 /*10*/].f_7)
						{
							if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_94[2 /*14*/], PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
								Local_69[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 2500;
							}
						}
						break;
					case 106:
						Var35 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						if (Var35.f_0 > -77f && Var35.f_1 > -1107.3765f)
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									STREAMING::REQUEST_MODEL(joaat("prop_employee_month_02"));
									Local_69[iParam0 /*10*/].f_6++;
									break;
								case 1:
									if (STREAMING::HAS_MODEL_LOADED(joaat("prop_employee_month_02")))
									{
										iLocal_83 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-29.13f, -1102.377f, 27.26f, 0.5f, joaat("prop_employee_month_01"), true, false, true);
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_83))
										{
											if (ENTITY::IS_ENTITY_VISIBLE(iLocal_83))
											{
												ENTITY::SET_ENTITY_VISIBLE(iLocal_83, false, false);
												iLocal_84 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_employee_month_02"), ENTITY::GET_ENTITY_COORDS(iLocal_83, true), true, true, false);
												ENTITY::SET_ENTITY_ROTATION(iLocal_84, 0f, 0f, -20f, 2, true);
												Local_69[iParam0 /*10*/].f_6++;
											}
										}
									}
									break;
							}
						}
						else
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 1:
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_employee_month_02"));
									Local_69[iParam0 /*10*/].f_6 = 0;
									break;
								case 2:
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_84))
									{
										OBJECT::DELETE_OBJECT(&iLocal_84);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_employee_month_02"));
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_83))
									{
										ENTITY::SET_ENTITY_VISIBLE(iLocal_83, true, false);
										ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_83);
									}
									Local_69[iParam0 /*10*/].f_6 = 0;
									break;
								}
						}
						break;
					case 107:
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						PLAYER::SET_MAX_WANTED_LEVEL(6);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					case 108:
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (PED::IS_PED_IN_GROUP(Local_94[2 /*14*/]))
							{
								PED::REMOVE_PED_FROM_GROUP(Local_94[2 /*14*/]);
								PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(Local_94[2 /*14*/], true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[2 /*14*/], true);
								Local_69[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					case 109:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(Local_94[2 /*14*/], false))
									{
										iVar36 = PED::GET_VEHICLE_PED_IS_USING(Local_94[2 /*14*/]);
										if (PED::IS_PED_SITTING_IN_VEHICLE(Local_94[2 /*14*/], iVar36))
										{
											if (__LIB_2__::func_837(Local_94[2 /*14*/], iVar36) == 0)
											{
												if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar36, -1, false))
												{
													Local_69[iParam0 /*10*/].f_6++;
													Local_69[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 1000;
												}
											}
										}
									}
								}
								break;
							case 1:
								if (MISC::GET_GAME_TIMER() > Local_69[iParam0 /*10*/].f_7)
								{
									iVar37 = PED::GET_VEHICLE_PED_IS_USING(Local_94[2 /*14*/]);
									if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar37, -1, false) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										if ((!VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar37)) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar37))) && ENTITY::GET_ENTITY_MODEL(iVar37) != joaat("bus"))
										{
											if (VEHICLE::CAN_SHUFFLE_SEAT(iVar37, 0))
											{
												TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_94[2 /*14*/], iVar37, false);
												Local_69[iParam0 /*10*/].f_3 = 1;
											}
											else
											{
												TASK::TASK_ENTER_VEHICLE(Local_94[2 /*14*/], iVar37, 20000, -1, 2f, 1, 0);
												Local_69[iParam0 /*10*/].f_3 = 1;
											}
										}
										else if (!ENTITY::IS_ENTITY_IN_AIR(iVar37))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(Local_94[2 /*14*/], 0, 0);
											Local_69[iParam0 /*10*/].f_3 = 1;
										}
									}
								}
								break;
						}
						break;
					case 110:
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									if (func_305(144))
									{
										if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_94[2 /*14*/]))
										{
											iVar38 = PED::GET_VEHICLE_PED_IS_IN(Local_94[2 /*14*/], false);
											Local_95[8 /*2*/] = iVar38;
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar38, false))
											{
												if (__LIB_2__::func_837(Local_94[2 /*14*/], iVar38) == -1)
												{
													TASK::TASK_VEHICLE_DRIVE_WANDER(Local_94[2 /*14*/], iVar38, 10f, 786619);
													Local_69[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 5000;
													Local_69[iParam0 /*10*/].f_6++;
												}
											}
										}
									}
									break;
								case 1:
									if (MISC::GET_GAME_TIMER() > Local_69[iParam0 /*10*/].f_7)
									{
										if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_94[2 /*14*/]))
										{
											iVar39 = PED::GET_VEHICLE_PED_IS_IN(Local_94[2 /*14*/], false);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar39, false))
											{
												if (__LIB_2__::func_837(Local_94[2 /*14*/], iVar39) == -1)
												{
													if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
													{
														func_137();
														TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, iVar39, -230.4853f, -888.2496f, 28.985f, 20f, 786484, 5f);
														TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, iVar39, -472.5658f, -1092.5901f, 25.8562f, 20f, 786484, 5f);
														func_136(Local_94[2 /*14*/], 1);
														Local_69[iParam0 /*10*/].f_6 = 3;
													}
													else
													{
														func_137();
														TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, iVar39, -230.4853f, -888.2496f, 28.985f, 12f, 786603, 5f);
														TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, iVar39, -472.5658f, -1092.5901f, 25.8562f, 12f, 786603, 5f);
														func_136(Local_94[2 /*14*/], 1);
														Local_69[iParam0 /*10*/].f_6++;
													}
												}
											}
										}
									}
									break;
								case 2:
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_94[2 /*14*/]))
									{
										iVar40 = PED::GET_VEHICLE_PED_IS_IN(Local_94[2 /*14*/], false);
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar40, false))
										{
											if (__LIB_2__::func_837(Local_94[2 /*14*/], iVar40) == -1)
											{
												if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
												{
													func_137();
													TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, iVar40, -230.4853f, -888.2496f, 28.985f, 20f, 786468, 5f);
													TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, iVar40, -472.5658f, -1092.5901f, 25.8562f, 20f, 786468, 5f);
													func_136(Local_94[2 /*14*/], 1);
													Local_69[iParam0 /*10*/].f_6 = 3;
												}
											}
										}
									}
									break;
								}
						}
						break;
					case 113:
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 7)
							{
								if (!ENTITY::IS_ENTITY_IN_AIR(Local_94[2 /*14*/]))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(Local_94[2 /*14*/], 0, 0);
								}
							}
						}
						break;
					case 116:
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					case 114:
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							iVar41 = func_386();
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar41, false))
							{
								func_141(152, 1);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar41, false);
								TASK::TASK_ENTER_VEHICLE(Local_94[2 /*14*/], iVar41, -1, -1, 2f, 9, 0);
								func_139(2, 110, 0);
								Local_95[8 /*2*/] = iVar41;
							}
							else if ((TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_ANY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_ANY")) != 0) && TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_ANY")) != 2)
							{
								TASK::TASK_WANDER_STANDARD(Local_94[2 /*14*/], 40000f, 0);
								PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_94[2 /*14*/], 2f);
							}
						}
						break;
					case 115:
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									if (PED::IS_PED_IN_COMBAT(Local_94[2 /*14*/], 0))
									{
										Local_69[iParam0 /*10*/].f_6++;
										Local_69[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 5000;
									}
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1)
									{
										if (MISC::GET_GAME_TIMER() > Local_69[iParam0 /*10*/].f_8)
										{
											Local_69[iParam0 /*10*/].f_8 = MISC::GET_GAME_TIMER() + 5000;
											iVar42 = func_386();
											if (iVar42 != PED::GET_VEHICLE_PED_IS_ENTERING(Local_94[2 /*14*/]))
											{
												TASK::CLEAR_PED_TASKS(Local_94[2 /*14*/]);
											}
										}
									}
									break;
								case 1:
									TASK::CLEAR_PED_TASKS(Local_94[2 /*14*/]);
									Local_69[iParam0 /*10*/].f_6 = 0;
									break;
								}
						}
						break;
					case 117:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -19.0794f, -1452.7043f, 29.524f, 1) < (100f + 100f))
								{
									STREAMING::REQUEST_ANIM_DICT("MISSARMENIAN2LeadInOutMCS_6");
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							case 1:
								if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -19.0794f, -1452.7043f, 29.524f, 1) < 100f && !__LIB_6__::func_181())
								{
									CUTSCENE::REQUEST_CUTSCENE("Armenian_2_mcs_6", 8);
									func_605(10);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							case 2:
								if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
								{
									__LIB_43__::func_498("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 0, 0, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 1, 0, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 2, 2, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 3, 2, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 4, 3, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 5, 0, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 6, 1, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 7, 0, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 8, 0, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 9, 0, 0, 0);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							case 3:
								if (Local_69[iParam0 /*10*/].f_8 == 0)
								{
									__LIB_0__::func_221(&Local_102, 1);
									func_294(1, PLAYER::PLAYER_PED_ID(), "Franklin");
									Local_69[iParam0 /*10*/].f_8 = 1;
								}
								else if (Local_69[iParam0 /*10*/].f_8 == 1)
								{
									if (__LIB_42__::func_532(&Local_102, "AR2AUD", "AR2_MCS6_LI", 7, 0, 0, 0, 0))
									{
										Local_69[iParam0 /*10*/].f_8 = 2;
									}
								}
								if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -19.0794f, -1452.7043f, 29.524f, 1) > (100f + 100f) || __LIB_6__::func_181())
								{
									CUTSCENE::REMOVE_CUTSCENE();
									Local_69[iParam0 /*10*/].f_6 = 1;
								}
								break;
						}
						break;
					case 118:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (iLocal_265 < 0)
								{
									iLocal_265 = MISC::GET_GAME_TIMER();
								}
								if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_94[2 /*14*/]) && ((PED::IS_PED_IN_ANY_VEHICLE(Local_94[2 /*14*/], false) || MISC::GET_GAME_TIMER() >= iLocal_265 + 15000) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -4.03f, -1401.22f, 28.28f, 200f, 200f, 200f, false, false, 0)))
									{
										MISC::CLEAR_AREA_OF_VEHICLES(-17.2737f, -1401.2848f, 28.3354f, 5f, false, false, false, false, false, false, 0);
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
										{
											if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95[0 /*2*/], false))
											{
												if (__LIB_13__::func_794(Local_95[0 /*2*/], 145, 0) && ENTITY::GET_ENTITY_MODEL(Local_95[0 /*2*/]) == __LIB_13__::func_741(1, 1))
												{
													ENTITY::SET_ENTITY_COORDS(Local_95[0 /*2*/], -17.347f, -1401.3712f, 28.3343f, true, false, false, true);
													ENTITY::SET_ENTITY_HEADING(Local_95[0 /*2*/], 270f);
													__LIB_31__::func_730(Local_95[0 /*2*/], -17.347f, -1401.3712f, 28.3343f, 270f, 24, 0);
													ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_95[0 /*2*/], true, 1);
													ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_95[0 /*2*/], true);
													VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_95[0 /*2*/], true);
												}
												else if (PED::IS_PED_IN_ANY_VEHICLE(Local_94[2 /*14*/], false))
												{
													iVar43 = PED::GET_VEHICLE_PED_IS_IN(Local_94[2 /*14*/], false);
													if (iVar43 == Local_95[0 /*2*/])
													{
														if (!VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(Local_95[0 /*2*/])) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Local_95[0 /*2*/])))
														{
															ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_95[0 /*2*/], true, false);
															ENTITY::SET_ENTITY_COORDS(Local_95[0 /*2*/], -17.347f, -1401.3712f, 28.3343f, true, false, false, true);
															ENTITY::SET_ENTITY_HEADING(Local_95[0 /*2*/], 270f);
															ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_95[0 /*2*/], true, 1);
															ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_95[0 /*2*/], true);
														}
														VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_95[0 /*2*/], true);
														__LIB_31__::func_730(Local_95[0 /*2*/], 0f, 0f, 0f, 0f, 24, 0);
													}
													else
													{
														if (!VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(Local_95[0 /*2*/])) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Local_95[0 /*2*/])))
														{
															ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_95[0 /*2*/], true, false);
														}
														__LIB_31__::func_730(Local_95[0 /*2*/], 0f, 0f, 0f, 0f, 24, 0);
														if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar43, false))
														{
															ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar43, true, true);
															ENTITY::SET_ENTITY_COORDS(iVar43, -17.347f, -1401.3712f, 28.3343f, true, false, false, true);
															ENTITY::SET_ENTITY_HEADING(iVar43, 270f);
															ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iVar43, true, 1);
															ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar43, true);
															VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar43, true);
														}
													}
												}
											}
										}
										ENTITY::SET_ENTITY_COORDS(Local_94[2 /*14*/], -4.03f, -1401.22f, 28.28f, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(Local_94[2 /*14*/], 77.9221f);
										func_354(0);
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_94[2 /*14*/]);
										func_471(1, 109, 1, 0);
										func_471(2, 110, 1, 0);
										func_471(3, 112, 1, 0);
										func_471(4, 113, 1, 0);
										func_471(5, 114, 1, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[2 /*14*/], true);
										func_141(140, 1);
										PED::ADD_SCENARIO_BLOCKING_AREA(Vector(28.5742f, -1391.9436f, 25.3192f) - Vector(20f, 40f, 40f), Vector(28.5742f, -1391.9436f, 25.3192f) + Vector(20f, 40f, 40f), false, true, true, true);
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							case 1:
								__LIB_42__::func_361(-9.370698f, -1402.7454f, 26.931702f, -9.507262f, -1386.3033f, 32.583607f, 9.9375f, -17.384f, -1406.2609f, 28.3184f, 0f, 6f, 20f, 10f, 1, 1, 1, 0, 0);
								STREAMING::REQUEST_MODEL(joaat("prop_npc_phone"));
								Local_69[iParam0 /*10*/].f_6++;
								break;
							case 2:
								if (STREAMING::HAS_MODEL_LOADED(joaat("prop_npc_phone")))
								{
									if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
									{
										iLocal_211 = OBJECT::CREATE_OBJECT(joaat("prop_npc_phone"), -4.7755f, -1402.0266f, 28.2746f, true, true, false);
										ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_211, Local_94[2 /*14*/], PED::GET_PED_BONE_INDEX(Local_94[2 /*14*/], 60309), Local_93, Local_93, false, false, false, false, 2, true, 0);
										TASK::TASK_PLAY_ANIM(Local_94[2 /*14*/], "missarmenian2", "lamar_texting", 8f, -8f, -1, 262145, 0f, false, false, false);
									}
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							case 3:
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_PLAY_ANIM")) == 7 && TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
								{
									if (__LIB_0__::func_724(Local_94[2 /*14*/], -4.03f, -1401.22f, 28.28f, 0) <= 0.5f)
									{
										TASK::TASK_PLAY_ANIM(Local_94[2 /*14*/], "missarmenian2", "lamar_texting", 8f, -8f, -1, 1, 0f, false, false, false);
									}
								}
								if (__LIB_0__::func_724(Local_94[2 /*14*/], -4.03f, -1401.22f, 28.28f, 0) > 0.5f)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
									{
										func_137();
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -4.03f, -1401.22f, 28.28f, 1f, 20000, 0.25f, 0, 40000f);
										TASK::TASK_ACHIEVE_HEADING(0, 77.9221f, 0);
										func_136(Local_94[2 /*14*/], 0);
									}
								}
								break;
						}
						break;
					case 119:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[4 /*2*/], false))
						{
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					case 120:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) != 4)
								{
									CAM::SET_GAMEPLAY_COORD_HINT(ENTITY::GET_ENTITY_COORDS(Local_94[2 /*14*/], true), -1, 5000, 2000, 0);
									CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.51f);
									CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(0.4f);
									CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(-0.925f);
									CAM::SET_GAMEPLAY_HINT_FOV(30f);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							case 1:
								if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										CAM::STOP_GAMEPLAY_HINT(false);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								else
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					case 121:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
								if (__LIB_0__::func_213(Local_95[4 /*2*/], 4f, 2, 1056964608, 0, 1, 0))
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
									else if (STREAMING::HAS_ANIM_DICT_LOADED("MISSARMENIAN2LeadInOutMCS_6"))
									{
										func_137();
										TASK::TASK_LOOK_AT_ENTITY(0, Local_94[2 /*14*/], 12000, 0, 2);
										TASK::TASK_PLAY_ANIM(0, "MISSARMENIAN2LeadInOutMCS_6", "_leadin_fra", 8f, -8f, -1, 2, 0f, false, false, false);
										func_136(PLAYER::PLAYER_PED_ID(), 0);
										Local_69[iParam0 /*10*/].f_6 = 2;
									}
									else
									{
										STREAMING::REQUEST_ANIM_DICT("MISSARMENIAN2LeadInOutMCS_6");
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							case 1:
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								else if (STREAMING::HAS_ANIM_DICT_LOADED("MISSARMENIAN2LeadInOutMCS_6"))
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
									else
									{
										func_137();
										TASK::TASK_LOOK_AT_ENTITY(0, Local_94[2 /*14*/], 12000, 0, 2);
										TASK::TASK_PLAY_ANIM(0, "MISSARMENIAN2LeadInOutMCS_6", "_leadin_fra", 8f, -8f, -1, 2, 0f, false, false, false);
										func_136(PLAYER::PLAYER_PED_ID(), 0);
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							case 2:
								__LIB_13__::func_783();
								Local_69[iParam0 /*10*/].f_6++;
								break;
							case 3:
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2LeadInOutMCS_6", "_leadin_fra", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2LeadInOutMCS_6", "_leadin_fra") == 1f)
									{
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								else
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
				}
				if (Local_69[iParam0 /*10*/].f_6 == 99)
				{
					Local_69[iParam0 /*10*/].f_3 = 1;
					Local_69[iParam0 /*10*/].f_6 = 0;
					Local_69[iParam0 /*10*/].f_1 = 0;
				}
			}
		}
	}
}

void func_354(bool bParam0)//Position - 0x3F2B1
{
	if (!PED::IS_PED_DEAD_OR_DYING(Local_94[2 /*14*/], true))
	{
		PED::SET_PED_CAN_BE_TARGETTED(Local_94[2 /*14*/], false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_94[2 /*14*/], PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[2 /*14*/], 8, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[2 /*14*/], 29, true);
		PED::SET_COMBAT_FLOAT(Local_94[2 /*14*/], 12, 3f);
		PED::SET_PED_COMBAT_RANGE(Local_94[2 /*14*/], 2);
		PED::SET_PED_HEARING_RANGE(Local_94[2 /*14*/], 50f);
		PED::SET_PED_SEEING_RANGE(Local_94[2 /*14*/], 50f);
		PED::SET_PED_MAX_HEALTH(Local_94[2 /*14*/], 500);
		ENTITY::SET_ENTITY_HEALTH(Local_94[2 /*14*/], 500, 0);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_94[2 /*14*/], false);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_94[2 /*14*/], 17);
		PED::SET_PED_CONFIG_FLAG(Local_94[2 /*14*/], 188, true);
		PED::SET_PED_CONFIG_FLAG(Local_94[2 /*14*/], 182, true);
		PED::SET_PED_RESET_FLAG(Local_94[2 /*14*/], 64, true);
		__LIB_37__::func_205(Local_94[2 /*14*/], 1);
		if (iLocal_92 <= 9)
		{
			func_162(5, 10, 0);
		}
		PED::SET_PED_ACCURACY(Local_94[2 /*14*/], 15);
		if (bParam0)
		{
			if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
			{
				while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_94[2 /*14*/]))
				{
					func_20(1, 0);
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
					}
				}
				if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_94[2 /*14*/]);
					PED::SET_PED_COMPONENT_VARIATION(Local_94[2 /*14*/], 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_94[2 /*14*/], 1, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_94[2 /*14*/], 2, 2, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_94[2 /*14*/], 3, 2, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_94[2 /*14*/], 4, 3, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_94[2 /*14*/], 5, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_94[2 /*14*/], 6, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_94[2 /*14*/], 7, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_94[2 /*14*/], 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_94[2 /*14*/], 9, 0, 0, 0);
				}
			}
		}
		PED::SET_PED_CONFIG_FLAG(Local_94[2 /*14*/], 118, false);
		PED::SET_PED_CONFIG_FLAG(Local_94[2 /*14*/], 32, false);
		PED::SET_PED_CONFIG_FLAG(Local_94[2 /*14*/], 185, true);
		PED::SET_PED_TARGET_LOSS_RESPONSE(Local_94[2 /*14*/], 1);
		PED::SET_PED_CONFIG_FLAG(Local_94[2 /*14*/], 118, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[2 /*14*/], 26, true);
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Local_94[2 /*14*/], 0);
		ENTITY::SET_ENTITY_PROOFS(Local_94[2 /*14*/], false, true, false, false, false, false, false, false);
		PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Local_94[2 /*14*/]);
		PED::SET_PED_CAN_BE_TARGETTED(Local_94[2 /*14*/], false);
	}
}

int func_386()//Position - 0x44EA6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	iVar2 = PED::GET_PED_NEARBY_VEHICLES(Local_94[2 /*14*/], &uLocal_240);
	fVar4 = 1000f;
	iVar3 = 0;
	while (iVar3 <= (iVar2 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_240[iVar3]))
		{
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_240[iVar3], false) && !ENTITY::IS_ENTITY_UPSIDEDOWN(uLocal_240[iVar3])) && !FIRE::IS_ENTITY_ON_FIRE(uLocal_240[iVar3]))
			{
				if ((((!VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(uLocal_240[iVar3])) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(uLocal_240[iVar3]))) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_240[iVar3], true)) && !__LIB_12__::func_390(ENTITY::GET_ENTITY_MODEL(uLocal_240[iVar3]))) && uLocal_240[iVar3] != Local_95[4 /*2*/])
				{
					fVar5 = __LIB_0__::func_76(Local_94[2 /*14*/], uLocal_240[iVar3], 1);
					if (__LIB_2__::func_925(uLocal_240[iVar3], 0, 0, 0, 0, 0, 1, 0, 1))
					{
						if (fVar5 < fVar4)
						{
							fVar4 = fVar5;
							iVar0 = uLocal_240[iVar3];
						}
					}
					else if (fVar5 < fVar4)
					{
						fVar4 = fVar5;
						iVar1 = uLocal_240[iVar3];
					}
				}
			}
		}
		iVar3++;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		return iVar0;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
	{
		return iVar1;
	}
	return 0;
}

void func_437(int iParam0)//Position - 0x4A0EF
{
	switch (Local_69[iParam0 /*10*/].f_6)
	{
		case 0:
			if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_95[6 /*2*/]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_95[6 /*2*/]) > 1600f) || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_95[6 /*2*/]))
			{
				TASK::SET_PED_PATH_AVOID_FIRE(Local_94[2 /*14*/], false);
				func_471(14, 59, 1, 0);
				func_471(20, 60, 1, 0);
				func_471(30, 61, 1, 0);
				if (!func_307(17, 58))
				{
					func_137();
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -1094.1544f, -1640.4307f, 3.3985f, -1112.1978f, -1614.2959f, 5.2204f, 1f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_COORD(0, -1094.1544f, -1640.4307f, 3.3985f, 3000, false, false);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -1095.3619f, -1640.8287f, 3.3985f, -1090.0018f, -1625.8185f, 5.072f, 1f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_COORD(0, -1090.0018f, -1625.8185f, 5.072f, 4000, false, false);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -1095.3619f, -1640.8287f, 3.3985f, -1090.0018f, -1625.8185f, 5.072f, 1f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_COORD(0, -1090.0018f, -1625.8185f, 5.072f, 3000, false, false);
					func_136(Local_94[2 /*14*/], 1);
				}
				Local_69[iParam0 /*10*/].f_6++;
			}
			break;
		case 1:
			if (func_307(17, 58))
			{
				Local_69[iParam0 /*10*/].f_6 = 3;
				WEAPON::SET_CURRENT_PED_WEAPON(Local_94[2 /*14*/], joaat("WEAPON_UNARMED"), true);
				func_137();
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "arm2_fire", 0, 0, -1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1114.0529f, -1612.6786f, 3.2403f, 2f, 20000, 0.25f, 1, 40000f);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_94[2 /*14*/], 2f);
				func_136(Local_94[2 /*14*/], 0);
				Local_69[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 4800;
				Local_69[iParam0 /*10*/].f_8 = 0;
			}
			break;
		case 3:
			if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
			{
				if (Local_69[iParam0 /*10*/].f_8 == 0)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_94[2 /*14*/], 2f);
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_94[2 /*14*/]))
					{
						if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_94[2 /*14*/]) > 8)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_94[2 /*14*/], -1114.0529f, -1612.6786f, 3.2403f, 2f, 20000, 0.25f, 1, 40000f);
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_94[2 /*14*/], 2f);
							Local_69[iParam0 /*10*/].f_8 = 1;
						}
					}
				}
				else
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_94[2 /*14*/], 2f);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_94[2 /*14*/], 2f);
				}
			}
			if (MISC::GET_GAME_TIMER() > Local_69[iParam0 /*10*/].f_7 && STREAMING::HAS_MODEL_LOADED(joaat("bagger")))
			{
				if (__LIB_17__::func_245(&(Local_95[4 /*2*/]), 1, -1126.0166f, -1575.3572f, 3.3486f, 301f, 1, 2))
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_95[4 /*2*/], false);
					func_438(8, iLocal_260, Local_93, 0f, Local_95[4 /*2*/], -1, 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_94[8 /*14*/], 0, 1, 2, 0);
					PED::SET_PED_MONEY(Local_94[8 /*14*/], 80);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[8 /*14*/], true);
					Local_69[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(-1126.46f, -1584.626f, 3.437f, 0f, 0f, -139.68f, 2);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_69[iParam0 /*10*/].f_7, true);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_94[8 /*14*/], Local_69[iParam0 /*10*/].f_7, "missarmenian2_mcs_5", "_rider", 1000f, -1000f, 0, 0, 1000f, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_95[4 /*2*/], Local_69[iParam0 /*10*/].f_7, "_bike", "missarmenian2_mcs_5", 1000f, 8f, 0, 1000f);
					ENTITY::SET_ENTITY_HEALTH(Local_94[8 /*14*/], 1000, 0);
					PED::SET_PED_CAN_BE_TARGETTED(Local_94[8 /*14*/], false);
					Local_69[iParam0 /*10*/].f_6++;
				}
			}
			break;
		case 4:
			if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[4 /*2*/], false))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_94[2 /*14*/], 2f);
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_95[4 /*2*/], -1129.5961f, -1588.691f, -0.139362f, -1141.044f, -1572.9304f, 7.562129f, 9.25f, false, true, 0))
				{
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_94[2 /*14*/], false);
					func_468("ARM2_FIGHT_END", 0, "ARM2_CHASE_START");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_SHOOTOUT"))
					{
						AUDIO::STOP_AUDIO_SCENE("ARM_2_SHOOTOUT");
					}
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_94[2 /*14*/], -8f);
						PED::RESET_PED_MOVEMENT_CLIPSET(Local_94[2 /*14*/], 0.25f);
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 7.5f, 4);
					func_137();
					TASK::TASK_PAUSE(0, 500);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 1028, 2);
					TASK::TASK_PLAY_ANIM(0, "reaction@points@", "loop_0", 4f, -1.5f, 3500, 49168, 0f, false, false, false);
					TASK::TASK_PAUSE(0, 100);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1130.3208f, -1589.826f, 3.3891f, 2f, -1, 0.25f, 0, 39f);
					TASK::TASK_CLIMB(0, true);
					func_136(Local_94[2 /*14*/], 0);
					Local_69[iParam0 /*10*/].f_8 = 0;
					Local_69[iParam0 /*10*/].f_6++;
				}
			}
			break;
		case 5:
			if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_94[2 /*14*/], "reaction@points@", "loop_0", 3))
				{
					if (ENTITY::GET_ENTITY_HEADING(Local_94[2 /*14*/]) < 20f || ENTITY::GET_ENTITY_HEADING(Local_94[2 /*14*/]) > 40f)
					{
						TASK::STOP_ANIM_TASK(Local_94[2 /*14*/], "reaction@points@", "loop_0", -16f);
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[4 /*2*/], false))
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_69[iParam0 /*10*/].f_7) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_69[iParam0 /*10*/].f_7) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_69[iParam0 /*10*/].f_7) >= 0.811f))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_69[iParam0 /*10*/].f_7))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_95[4 /*2*/], 1000f, true);
					}
					if (!PED::IS_PED_INJURED(Local_94[8 /*14*/]))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_94[8 /*14*/]);
						PED::SET_PED_INTO_VEHICLE(Local_94[8 /*14*/], Local_95[4 /*2*/], -1);
						ENTITY::SET_ENTITY_HEADING(Local_95[4 /*2*/], 302f);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_95[4 /*2*/], 10f);
					}
					Local_69[iParam0 /*10*/].f_3 = 1;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[4 /*2*/], false))
			{
				if (!PED::IS_PED_INJURED(Local_94[8 /*14*/]))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_94[8 /*14*/], true))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[8 /*14*/], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 1)
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_69[iParam0 /*10*/].f_7))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_95[4 /*2*/], 2f, true);
								Local_69[iParam0 /*10*/].f_3 = 1;
							}
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_69[iParam0 /*10*/].f_7))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_95[4 /*2*/], 2f, true);
					Local_69[iParam0 /*10*/].f_3 = 1;
				}
			}
			if (Local_69[iParam0 /*10*/].f_8 == 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_69[iParam0 /*10*/].f_7))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_69[iParam0 /*10*/].f_7) >= fLocal_67)
					{
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "Biker_Ride_Off", -1130.7015f, -1584.5844f, 4.1201f, "ARM_2_REPO_SOUNDS", false, 0, false);
						Local_69[iParam0 /*10*/].f_8 = 1;
					}
				}
			}
			break;
	}
	if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
	{
		FIRE::STOP_ENTITY_FIRE(Local_94[2 /*14*/]);
		ENTITY::SET_ENTITY_PROOFS(Local_94[2 /*14*/], false, true, false, false, false, false, false, false);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
	}
}

void func_438(int iParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9)//Position - 0x4A8BF
{
	struct<3> Var0;
	if (iParam0 == -1 || iParam0 >= 27)
	{
	}
	if (iParam0 != 0)
	{
		if (PED::IS_PED_INJURED(Local_94[iParam0 /*14*/]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_94[iParam0 /*14*/]));
		}
		else if (Local_94[iParam0 /*14*/] == PLAYER::PLAYER_PED_ID())
		{
			if (ENTITY::GET_ENTITY_MODEL(Local_94[iParam0 /*14*/]) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
			{
				Local_94[iParam0 /*14*/] = 0;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(Local_94[iParam0 /*14*/]) != iParam1 && iParam1 != 0)
		{
			PED::DELETE_PED(&(Local_94[iParam0 /*14*/]));
			Local_94[iParam0 /*14*/] = 0;
		}
	}
	iLocal_96 = iLocal_96;
	if (iParam4 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_94[iParam0 /*14*/]) && iParam0 != 0)
		{
			if (iParam1 == 0)
			{
				if (PED::CAN_CREATE_RANDOM_PED(false))
				{
					Local_94[iParam0 /*14*/] = PED::CREATE_RANDOM_PED(Param2);
					ENTITY::SET_ENTITY_HEADING(Local_94[iParam0 /*14*/], fParam3);
				}
			}
			else
			{
				Local_94[iParam0 /*14*/] = PED::CREATE_PED(26, iParam1, Param2, fParam3, true, true);
				if (iParam9 == 1)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_94[iParam0 /*14*/], Param2, false, false, true);
				}
			}
		}
		else if (!__LIB_0__::func_86(Param2))
		{
			if (iParam0 == 0)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param2, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
			}
			else if (!PED::IS_PED_INJURED(Local_94[iParam0 /*14*/]))
			{
				if (iParam9 == 1)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_94[iParam0 /*14*/], Param2, false, false, true);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(Local_94[iParam0 /*14*/], Param2, true, false, false, true);
				}
				ENTITY::SET_ENTITY_HEADING(Local_94[iParam0 /*14*/], fParam3);
			}
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Local_94[iParam0 /*14*/]) && iParam0 != 0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam4, false))
		{
			Local_94[iParam0 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(iParam4, 26, iParam1, iParam5, true, true);
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(Local_94[iParam0 /*14*/]))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(Local_94[iParam0 /*14*/], true) };
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam4, false))
		{
			if (iParam0 == 0)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam4, iParam5);
				}
			}
			else if (!PED::IS_PED_INJURED(Local_94[iParam0 /*14*/]))
			{
				PED::SET_PED_INTO_VEHICLE(Local_94[iParam0 /*14*/], iParam4, iParam5);
			}
		}
	}
	if (Local_94[iParam0 /*14*/] != PLAYER::PLAYER_PED_ID())
	{
		if (!PED::IS_PED_INJURED(Local_94[iParam0 /*14*/]))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_94[iParam0 /*14*/], true);
			if (bParam8)
			{
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(Local_94[iParam0 /*14*/], 0);
			}
			else
			{
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_94[iParam0 /*14*/]);
			}
		}
	}
	if (iParam6 != 0)
	{
		if (!PED::IS_PED_INJURED(Local_94[iParam0 /*14*/]))
		{
			switch (iParam6)
			{
				case 1:
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_94[iParam0 /*14*/], iLocal_98);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[iParam0 /*14*/], 13, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[iParam0 /*14*/], 12, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[iParam0 /*14*/], 14, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[iParam0 /*14*/], 3, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[iParam0 /*14*/], 0, true);
					if (iParam7 != 0)
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_94[iParam0 /*14*/], iParam7, false))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_94[iParam0 /*14*/], iParam7, 500, true, true);
						}
					}
					else if (!WEAPON::HAS_PED_GOT_WEAPON(Local_94[iParam0 /*14*/], joaat("WEAPON_PISTOL"), false))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_94[iParam0 /*14*/], joaat("WEAPON_PISTOL"), 500, true, true);
					}
					if (!HUD::DOES_BLIP_EXIST(Local_94[iParam0 /*14*/].f_1))
					{
						Local_94[iParam0 /*14*/].f_1 = __LIB_0__::func_639(Local_94[iParam0 /*14*/], 1, 0);
					}
					break;
				case 3:
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_94[iParam0 /*14*/], iLocal_97);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[iParam0 /*14*/], 13, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[iParam0 /*14*/], 12, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[iParam0 /*14*/], 14, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[iParam0 /*14*/], 3, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[iParam0 /*14*/], 0, true);
					PED::SET_PED_CAN_BE_TARGETTED(Local_94[iParam0 /*14*/], false);
					if (iParam7 != joaat("WEAPON_UNARMED"))
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_94[iParam0 /*14*/], iParam7, false))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_94[iParam0 /*14*/], iParam7, 500, true, true);
						}
					}
					else if (!WEAPON::HAS_PED_GOT_WEAPON(Local_94[iParam0 /*14*/], joaat("WEAPON_PISTOL"), false))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_94[iParam0 /*14*/], joaat("WEAPON_PISTOL"), 500, true, true);
					}
					break;
				case 5:
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_94[iParam0 /*14*/], iLocal_98);
					if (iParam7 != 0)
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_94[iParam0 /*14*/], iParam7, false))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_94[iParam0 /*14*/], iParam7, 500, true, true);
						}
					}
					else if (!WEAPON::HAS_PED_GOT_WEAPON(Local_94[iParam0 /*14*/], joaat("WEAPON_PUMPSHOTGUN"), false) && !WEAPON::HAS_PED_GOT_WEAPON(Local_94[iParam0 /*14*/], joaat("WEAPON_PISTOL"), false))
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_94[iParam0 /*14*/], joaat("WEAPON_PUMPSHOTGUN"), 500, true, true);
						}
						else
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_94[iParam0 /*14*/], joaat("WEAPON_PISTOL"), 500, true, true);
						}
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[iParam0 /*14*/], 13, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[iParam0 /*14*/], 12, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[iParam0 /*14*/], 14, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[iParam0 /*14*/], 3, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[iParam0 /*14*/], 0, true);
					if (!HUD::DOES_BLIP_EXIST(Local_94[iParam0 /*14*/].f_1))
					{
						Local_94[iParam0 /*14*/].f_1 = __LIB_0__::func_639(Local_94[iParam0 /*14*/], 1, 0);
					}
					break;
				case 6:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[iParam0 /*14*/], true);
					if (iParam7 != 0 && iParam7 != joaat("WEAPON_UNARMED"))
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_94[iParam0 /*14*/], iParam7, false))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_94[iParam0 /*14*/], iParam7, 500, true, true);
						}
					}
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_94[iParam0 /*14*/], iLocal_99);
					if (!HUD::DOES_BLIP_EXIST(Local_94[iParam0 /*14*/].f_1))
					{
						Local_94[iParam0 /*14*/].f_1 = __LIB_0__::func_639(Local_94[iParam0 /*14*/], 1, 0);
					}
					break;
				case 8:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[iParam0 /*14*/], true);
					if (iParam7 != 0 && iParam7 != joaat("WEAPON_UNARMED"))
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_94[iParam0 /*14*/], iParam7, false))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_94[iParam0 /*14*/], iParam7, 500, true, true);
						}
					}
					PED::SET_PED_CAN_BE_TARGETTED(Local_94[iParam0 /*14*/], true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_94[iParam0 /*14*/], iLocal_99);
					break;
				case 4:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[iParam0 /*14*/], true);
					if (iParam7 != 0 && iParam7 != joaat("WEAPON_UNARMED"))
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_94[iParam0 /*14*/], iParam7, false))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_94[iParam0 /*14*/], iParam7, 500, true, true);
						}
					}
					PED::SET_PED_CAN_BE_TARGETTED(Local_94[iParam0 /*14*/], false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_94[iParam0 /*14*/], iLocal_99);
					break;
				case 2:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[iParam0 /*14*/], true);
					if (iParam7 != 0 && iParam7 != joaat("WEAPON_UNARMED"))
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_94[iParam0 /*14*/], iParam7, false))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_94[iParam0 /*14*/], iParam7, 500, true, true);
						}
					}
					PED::SET_PED_CAN_BE_TARGETTED(Local_94[iParam0 /*14*/], false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_94[iParam0 /*14*/], 17, true);
					break;
				case 7:
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_94[iParam0 /*14*/], iLocal_100);
					break;
				}
			}
	}
	if (iLocal_101 == 1)
	{
		if (!PED::IS_PED_INJURED(Local_94[iParam0 /*14*/]))
		{
			if (ENTITY::GET_ENTITY_MODEL(Local_94[iParam0 /*14*/]) == __LIB_17__::func_706(1))
			{
				func_439(Local_94[iParam0 /*14*/], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			if (ENTITY::GET_ENTITY_MODEL(Local_94[iParam0 /*14*/]) == __LIB_17__::func_706(2))
			{
				func_439(Local_94[iParam0 /*14*/], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			if (ENTITY::GET_ENTITY_MODEL(Local_94[iParam0 /*14*/]) == __LIB_17__::func_706(0))
			{
				func_439(Local_94[iParam0 /*14*/], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
}

int func_439(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x4B074
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
										func_439(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_439(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_330(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_444(iParam0, iVar10, &iVar4, 1))
							{
								func_439(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_439(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_439(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_439(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_439(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_439(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_439(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_439(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_439(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_439(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_444(iParam0, iVar10, &iVar4, 0))
		{
			func_439(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_440(iParam0, iVar10, &iVar4))
		{
			func_439(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_440(int iParam0, int iParam1, int iParam2)//Position - 0x4B884
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_333(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_444(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4BAA0
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_333(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_458(bool bParam0)//Position - 0x4D31E
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	float fVar5;
	int iVar6;
	bLocal_91 = false;
	iVar0 = 0;
	fVar2 = 0f;
	if (iLocal_253 == 0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[6 /*2*/], false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_95[6 /*2*/]))
			{
				fVar5 = ((VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_95[6 /*2*/]) - 4255f) / 2300f);
				if (fVar5 < 0f)
				{
					fVar5 = 0f;
				}
				if (fVar5 > 1f)
				{
					fVar5 = 1f;
				}
				fVar5 = (fVar5 * 2f);
			}
		}
		else
		{
			fVar5 = 2f;
		}
	}
	if (fVar5 >= 1.9f || iLocal_253 == 1)
	{
		fVar5 = 2f;
		iLocal_253 = 1;
	}
	switch (iLocal_253)
	{
		case 0:
		case 1:
			while (fVar2 <= 2f)
			{
				if (fVar2 < fVar5)
				{
					iVar0 = SYSTEM::FLOOR(fVar2);
					func_459(fVar2, Local_254[__LIB_0__::func_340(iVar0, 0, 2) /*7*/], Local_254[__LIB_0__::func_340(iVar0 + 1, 0, 2) /*7*/], &Var4);
					if (MISC::IS_BULLET_IN_AREA(Var4, 0.4f, true))
					{
						iLocal_252 = SYSTEM::FLOOR((fVar2 * 15f));
						iVar1 = 0;
						while (iVar1 <= 30)
						{
							Local_255[iVar1 /*3*/].f_2 = (MISC::GET_GAME_TIMER() + (100 * MISC::ABSI((iVar1 - iLocal_252))));
							iVar1++;
						}
						iLocal_253 = 2;
						*bParam0 = 1;
						iVar6 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "ARM_2_Repo_Ignite_Petrol", -1099.07f, -1636.112f, 3.7352f, 0, false, 0, false);
						AUDIO::SET_VARIABLE_ON_SOUND(iVar6, "TargetPan", __LIB_6__::func_252(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1105.9711f, -1628.7932f, 3.8508f, 0));
						fVar2 = 5f;
					}
					fVar2 = (fVar2 + 0.1f);
				}
				else
				{
					fVar2 = 5f;
				}
			}
			break;
		case 2:
			*bParam0 = 1;
			iVar3 = 1;
			iVar1 = 0;
			while (iVar1 <= 30)
			{
				if (Local_255[iVar1 /*3*/].f_1 == 0)
				{
					if (MISC::GET_GAME_TIMER() > Local_255[iVar1 /*3*/].f_2 && (MISC::GET_GAME_TIMER() - Local_255[iVar1 /*3*/].f_2) < 1000)
					{
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) / 15f));
						func_459((SYSTEM::TO_FLOAT(iVar1) / 15f), Local_254[__LIB_0__::func_340(iVar0, 0, 2) /*7*/], Local_254[__LIB_0__::func_340(iVar0 + 1, 0, 2) /*7*/], &Var4);
						if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_255[iVar1 /*3*/]))
						{
							iLocal_256[iVar1] = FIRE::START_SCRIPT_FIRE(Var4, 0, true);
						}
						GRAPHICS::FADE_DECALS_IN_RANGE(Var4, 1f, 1f);
						Local_255[iVar1 /*3*/].f_1 = 1;
					}
				}
				if (Local_255[iVar1 /*3*/].f_1 == 1)
				{
					iVar3 = 0;
					iLocal_251 = (MISC::GET_GAME_TIMER() - Local_255[iVar1 /*3*/].f_2);
					if (iLocal_251 > 2000)
					{
						FIRE::REMOVE_SCRIPT_FIRE(iLocal_256[iVar1]);
						Local_255[iVar1 /*3*/] = 0;
						Local_255[iVar1 /*3*/].f_1 = 0;
					}
				}
				iVar1++;
			}
			if (iVar3 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_459(float fParam0, struct<5> Param1, var uParam2, var uParam3, struct<5> Param4, var uParam5, var uParam6, var uParam7)//Position - 0x4D5D6
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	fVar5 = (fParam0 - SYSTEM::TO_FLOAT(SYSTEM::FLOOR(fParam0)));
	if (!__LIB_0__::func_78(Param1.f_4, Param4.f_4, 0))
	{
		Var0 = { Param1.f_4 };
		Var1 = { Param1.f_4 + Param1.f_1 };
		Var2 = { Param4.f_4 - Param4.f_1 };
		Var3 = { Param4.f_4 };
		Var4.f_0 = (((((((1f - fVar5) * (1f - fVar5)) * (1f - fVar5)) * Var0.f_0) + (((3f * ((1f - fVar5) * (1f - fVar5))) * fVar5) * Var1.f_0)) + (((3f * (1f - fVar5)) * (fVar5 * fVar5)) * Var2.f_0)) + (((fVar5 * fVar5) * fVar5) * Var3.f_0));
		Var4.f_1 = (((((((1f - fVar5) * (1f - fVar5)) * (1f - fVar5)) * Var0.f_1) + (((3f * ((1f - fVar5) * (1f - fVar5))) * fVar5) * Var1.f_1)) + (((3f * (1f - fVar5)) * (fVar5 * fVar5)) * Var2.f_1)) + (((fVar5 * fVar5) * fVar5) * Var3.f_1));
		Var4.f_2 = (((((((1f - fVar5) * (1f - fVar5)) * (1f - fVar5)) * Var0.f_2) + (((3f * ((1f - fVar5) * (1f - fVar5))) * fVar5) * Var1.f_2)) + (((3f * (1f - fVar5)) * (fVar5 * fVar5)) * Var2.f_2)) + (((fVar5 * fVar5) * fVar5) * Var3.f_2));
		*uParam7 = { Var4 };
	}
	else
	{
		*uParam7 = { Param1.f_4 };
	}
}

void func_461(var uParam0, float fParam1, struct<3> Param2, struct<3> Param3)//Position - 0x4D749
{
	*uParam0 = fParam1;
	uParam0->f_4 = { Param2 };
	uParam0->f_1 = { Param3 };
}

int func_464(int iParam0, int iParam1)//Position - 0x4D855
{
	if (Local_69[iParam0 /*10*/] == iParam1)
	{
		if (Local_69[iParam0 /*10*/].f_1 == 1 && Local_69[iParam0 /*10*/].f_2 == 1)
		{
			if (Local_69[iParam0 /*10*/].f_3 == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_465(int* iParam0, var uParam1)//Position - 0x4D899
{
	int iVar0;
	if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
	{
		switch (iLocal_297)
		{
			case 0:
				if (!func_315(&iVar0, iParam0, 0, 5, 0, 0))
				{
					*iParam0 = 0;
				}
				else
				{
					switch (iVar0)
					{
						case 0:
							TASK::TASK_PLAY_ANIM(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_look_behind_left", 4f, -4f, -1, 262144, 0f, false, false, false);
							iLocal_297 = 1;
							break;
						case 1:
							TASK::TASK_PLAY_ANIM(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_look_behind_right", 4f, -4f, -1, 262144, 0f, false, false, false);
							iLocal_297 = 1;
							break;
						case 2:
							switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
							{
								case 0:
									TASK::TASK_PLAY_ANIM(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_look_left", 4f, -4f, -1, 262144, 0f, false, false, false);
									iLocal_297 = 1;
									break;
								case 1:
									TASK::TASK_PLAY_ANIM(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_look_right", 4f, -4f, -1, 262144, 0f, false, false, false);
									iLocal_297 = 1;
									break;
							}
							break;
						case 3:
							TASK::TASK_PLAY_ANIM(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_a", 4f, -4f, -1, 262144, 0f, false, false, false);
							iLocal_297 = 1;
							break;
						case 4:
							TASK::TASK_PLAY_ANIM(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_b", 4f, -4f, -1, 262144, 0f, false, false, false);
							iLocal_297 = 1;
							break;
						case 5:
							TASK::TASK_PLAY_ANIM(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_c", 4f, -4f, -1, 262144, 0f, false, false, false);
							iLocal_297 = 1;
							break;
						case 6:
							TASK::TASK_PLAY_ANIM(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_d", 4f, -4f, -1, 262144, 0f, false, false, false);
							iLocal_297 = 1;
							break;
						case 7:
							TASK::TASK_PLAY_ANIM(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_e", 4f, -4f, -1, 262144, 0f, false, false, false);
							iLocal_297 = 1;
							break;
						case 8:
							TASK::TASK_PLAY_ANIM(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_f", 4f, -4f, -1, 262144, 0f, false, false, false);
							iLocal_297 = 1;
							break;
						case 9:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1079.2294f, -1659.5518f, 1.961159f, -1103.8812f, -1626.4319f, 10.148659f, 11.75f, false, true, 0))
							{
								TASK::TASK_PLAY_ANIM(Local_94[2 /*14*/], "missarmenian2", "arm2_lamar_idle_02", 4f, -4f, -1, 262144, 0f, false, false, false);
								iLocal_297 = 1;
							}
							else
							{
								iLocal_297 = 0;
							}
							break;
						case 10:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1079.2294f, -1659.5518f, 1.961159f, -1103.8812f, -1626.4319f, 10.148659f, 11.75f, false, true, 0))
							{
								TASK::TASK_PLAY_ANIM(Local_94[2 /*14*/], "missarmenian2", "arm2_lamar_idle_03", 4f, -4f, -1, 262144, 0f, false, false, false);
								iLocal_297 = 1;
							}
							else
							{
								iLocal_297 = 0;
							}
							break;
						}
				}
				break;
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_a", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_a")));
					iLocal_297 = 2;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_b", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_b")));
					iLocal_297 = 2;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_c", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_c")));
					iLocal_297 = 2;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_d", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_d")));
					iLocal_297 = 2;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_e", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_e")));
					iLocal_297 = 2;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_f", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_f")));
					iLocal_297 = 2;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_look_behind_left", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_look_behind_left")));
					iLocal_297 = 2;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_look_behind_right", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_look_behind_right")));
					iLocal_297 = 2;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_look_left", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_look_left")));
					iLocal_297 = 2;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_look_right", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_94[2 /*14*/], "missarmenian2lamar_idles", "idle_look_right")));
					iLocal_297 = 2;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_94[2 /*14*/], "missarmenian2", "arm2_lamar_idle_02", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_94[2 /*14*/], "missarmenian2", "arm2_lamar_idle_02")));
					iLocal_297 = 2;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_94[2 /*14*/], "missarmenian2", "arm2_lamar_idle_03", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_94[2 /*14*/], "missarmenian2", "arm2_lamar_idle_03")));
					iLocal_297 = 2;
				}
				break;
			case 2:
				if (MISC::GET_GAME_TIMER() > *uParam1)
				{
					iLocal_297 = 0;
				}
				break;
			}
	}
}

int func_467(int iParam0, int iParam1)//Position - 0x4DEE2
{
	if (Local_66[iParam0 /*6*/] == iParam1)
	{
		return Local_66[iParam0 /*6*/].f_3;
	}
	return 0;
}

void func_468(char* sParam0, int iParam1, char* sParam2)//Position - 0x4DF01
{
	iLocal_285 = 1;
	iLocal_286 = iParam1;
	sLocal_288 = sParam0;
	sLocal_289 = sParam2;
}

void func_471(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4DFBD
{
	Local_69[iParam0 /*10*/] = iParam1;
	Local_69[iParam0 /*10*/].f_1 = 1;
	Local_69[iParam0 /*10*/].f_3 = iParam2;
	Local_69[iParam0 /*10*/].f_2 = iParam3;
	Local_69[iParam0 /*10*/].f_6 = 0;
	Local_69[iParam0 /*10*/].f_4 = 0;
	Local_69[iParam0 /*10*/].f_7 = 0;
	Local_69[iParam0 /*10*/].f_8 = 0;
	Local_69[iParam0 /*10*/].f_9 = 0f;
}

void func_472(int iParam0, int iParam1)//Position - 0x4E020
{
	if (Local_69[iParam0 /*10*/] == iParam1)
	{
		if (Local_69[iParam0 /*10*/].f_1 == 1)
		{
			Local_69[iParam0 /*10*/].f_3 = 0;
			Local_69[iParam0 /*10*/].f_2 = 0;
			Local_69[iParam0 /*10*/].f_6 = 0;
			Local_69[iParam0 /*10*/].f_7 = 0;
			Local_69[iParam0 /*10*/].f_8 = 0;
			Local_69[iParam0 /*10*/].f_9 = 0f;
			Local_69[iParam0 /*10*/].f_5 = 0;
		}
	}
}

void func_474(int iParam0)//Position - 0x4E0D2
{
	iLocal_301 = iParam0;
	iLocal_302 = 0;
}

void func_480(int iParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x4E250
{
	func_438(iParam0, iParam1, Param2, fParam3, 0, -1, iParam4, iParam5, bParam6, 0);
}

int func_481(int iParam0)//Position - 0x4E26F
{
	if (!iLocal_52 && iLocal_51 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_484(int iParam0)//Position - 0x4E32D
{
	int iVar0;
	iVar0 = iParam0;
	if (Local_50[iVar0 /*3*/].f_2 == 2 || Local_50[iVar0 /*3*/].f_2 == 3)
	{
		switch (iVar0)
		{
			case 0:
				if (STREAMING::HAS_MODEL_LOADED(iLocal_249))
				{
					return 1;
				}
				break;
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(iLocal_259))
				{
					return 1;
				}
				break;
			case 2:
				if ((WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_PISTOL")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_MICROSMG"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_PUMPSHOTGUN")))
				{
					return 1;
				}
				break;
			case 3:
				if (STREAMING::HAS_MODEL_LOADED(iLocal_258))
				{
					return 1;
				}
				break;
			case 4:
				if (STREAMING::HAS_MODEL_LOADED(joaat("bagger")))
				{
					return 1;
				}
				break;
			case 5:
				if (STREAMING::HAS_ANIM_DICT_LOADED("MISSARMENIAN2"))
				{
					return 1;
				}
				break;
			case 6:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missarmenian2_mcs_5") && STREAMING::HAS_ANIM_DICT_LOADED("reaction@points@"))
				{
					return 1;
				}
				break;
			case 7:
				if (STREAMING::HAS_MODEL_LOADED(joaat("bison")))
				{
					return 1;
				}
				break;
			case 8:
				if (STREAMING::HAS_MODEL_LOADED(joaat("penumbra")))
				{
					return 1;
				}
				break;
			case 9:
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, sLocal_46))
				{
					return 1;
				}
				break;
			case 10:
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, sLocal_46) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, sLocal_46))
				{
					return 1;
				}
				break;
			case 11:
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("arm2_15"))
				{
					return 1;
				}
				break;
			case 12:
				if (STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01")))
				{
					return 1;
				}
				break;
			case 13:
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("ARM2"))
				{
					return 1;
				}
				break;
			case 14:
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("ARM2_FIRE"))
				{
					return 1;
				}
				break;
			case 15:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missarmenian2lamar_idles"))
				{
					return 1;
				}
				break;
			case 16:
				if (((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ARM_2_REPO_01", false, -1) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ARM_2_GAS_EXPLOSION", false, -1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ARM_2_GARAGE_DOORS", false, -1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ARM_2_BIKER_DRIVE_OFF", false, -1))
				{
					return 1;
				}
				break;
			case 17:
				if (STREAMING::HAS_MODEL_LOADED(joaat("IG_SiemonYetarian")))
				{
					return 1;
				}
				break;
			case 18:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missarmenian2lamar_in_cover"))
				{
					return 1;
				}
				break;
			case 19:
				if (STREAMING::HAS_MODEL_LOADED(joaat("prop_arm_gate_l")))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_487(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x4E63A
{
	struct<3> Var0;
	int iVar1;
	if (Local_68[iParam0 /*4*/] != iParam1)
	{
		Local_68[iParam0 /*4*/].f_1 = 0;
		Local_68[iParam0 /*4*/] = iParam1;
	}
	if (!Local_68[iParam0 /*4*/].f_1)
	{
		if (func_300(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, 1, 0, 1, 0))
		{
			switch (Local_68[iParam0 /*4*/])
			{
				case 1:
					if (HUD::DOES_BLIP_EXIST(iLocal_244))
					{
						HUD::REMOVE_BLIP(&iLocal_244);
					}
					switch (Local_68[iParam0 /*4*/].f_2)
					{
						case 0:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
							{
								__LIB_13__::func_787(&Local_214, Local_95[0 /*2*/]);
							}
							Local_68[iParam0 /*4*/].f_2++;
							break;
						case 1:
							if (func_563(&Local_214, -1141.0928f, -1576.7594f, 3.3048f, Global_19, 1, Local_94[2 /*14*/], "ARM2_INS02", "ARM2_INS18", 0, 1, 1, -1))
							{
								__LIB_31__::func_968(&Local_214, 1, 0);
								__LIB_16__::func_901(&Local_214);
								Local_68[iParam0 /*4*/].f_2++;
							}
							break;
						case 2:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95[0 /*2*/], false))
							{
								if (__LIB_0__::func_213(Local_95[0 /*2*/], 4f, 1, 1056964608, 0, 1, 0))
								{
									Local_68[iParam0 /*4*/].f_1 = 1;
								}
							}
							else
							{
								Local_68[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				case 2:
					if (!HUD::DOES_BLIP_EXIST(iLocal_244))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_94[22 /*14*/]))
						{
							__LIB_31__::func_968(&Local_214, 1, 0);
							__LIB_16__::func_901(&Local_214);
							if (!__LIB_0__::func_501("ARM2_INS18", 0, 0))
							{
								__LIB_0__::func_382("ARM2_INS18", 7500, 1);
							}
							iLocal_244 = __LIB_0__::func_639(Local_94[2 /*14*/], 0, 0);
						}
					}
					break;
				case 5:
					switch (Local_68[iParam0 /*4*/].f_2)
					{
						case 0:
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								Local_68[iParam0 /*4*/].f_2++;
								Local_68[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 10000;
							}
							break;
						case 1:
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (MISC::GET_GAME_TIMER() > Local_68[iParam0 /*4*/].f_3)
								{
									__LIB_0__::func_151("ARM2_HLP29", 12000);
									Local_68[iParam0 /*4*/].f_2++;
								}
							}
							break;
						case 2:
							if (__LIB_0__::func_1("ARM2_HLP29"))
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/))
								{
									HUD::CLEAR_HELP(true);
								}
							}
							else
							{
								Local_68[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				case 3:
					switch (Local_68[iParam0 /*4*/].f_2)
					{
						case 0:
							__LIB_0__::func_229("LOSE_WANTED" /* GXT: Lose the Cops. */, 7500, 1);
							if (HUD::DOES_BLIP_EXIST(iLocal_244))
							{
								HUD::REMOVE_BLIP(&iLocal_244);
							}
							Local_68[iParam0 /*4*/].f_2++;
							break;
						case 1:
							if (HUD::DOES_BLIP_EXIST(iLocal_244))
							{
								HUD::REMOVE_BLIP(&iLocal_244);
							}
							break;
					}
					break;
				case 4:
					switch (Local_68[iParam0 /*4*/].f_2)
					{
						case 0:
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (HUD::DOES_BLIP_EXIST(iLocal_244))
								{
									HUD::REMOVE_BLIP(&iLocal_244);
								}
								HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
								iLocal_244 = __LIB_0__::func_639(Local_94[2 /*14*/], 0, 0);
								__LIB_0__::func_382("ARM2_INS18", 7500, 1);
								Local_68[iParam0 /*4*/].f_2++;
							}
							break;
						case 1:
							Var0 = { HUD::GET_BLIP_INFO_ID_COORD(iLocal_244) };
							if (__LIB_0__::func_78(Var0, -1141.0928f, -1576.7594f, 3.3048f, 0))
							{
								if (HUD::DOES_BLIP_EXIST(iLocal_244))
								{
									HUD::REMOVE_BLIP(&iLocal_244);
								}
								iLocal_244 = __LIB_0__::func_639(Local_94[2 /*14*/], 0, 0);
							}
							break;
					}
					break;
				case 6:
					switch (Local_68[iParam0 /*4*/].f_2)
					{
						case 0:
							__LIB_0__::func_229("ARM2_INS03", 3000, 1);
							if (HUD::DOES_BLIP_EXIST(iLocal_244))
							{
								HUD::REMOVE_BLIP(&iLocal_244);
							}
							iLocal_244 = __LIB_0__::func_639(Local_94[2 /*14*/], 0, 0);
							Local_68[iParam0 /*4*/].f_2++;
							break;
						case 1:
							if (func_305(55))
							{
								if (__LIB_0__::func_1("ARM2_INS05"))
								{
									HUD::CLEAR_HELP(true);
									Local_68[iParam0 /*4*/].f_1 = 1;
								}
								else
								{
									Local_68[iParam0 /*4*/].f_1 = 1;
								}
							}
							break;
						case 2:
							__LIB_0__::func_151("ARM2_HLP22", 12000);
							Local_68[iParam0 /*4*/].f_1 = 1;
							break;
					}
					break;
				case 7:
					switch (Local_68[iParam0 /*4*/].f_2)
					{
						case 0:
							if (!__LIB_0__::func_75())
							{
								__LIB_0__::func_229("ARM2_INS07b", 7500, 1);
								iLocal_246 = __LIB_0__::func_488(-1067.4984f, -1665.7689f, 3.5431f, 0);
								iLocal_247 = __LIB_0__::func_488(-1064.8322f, -1669.313f, 3.5348f, 0);
								iLocal_248 = __LIB_0__::func_488(-1073.8386f, -1675.4724f, 3.5162f, 0);
								if (HUD::DOES_BLIP_EXIST(iLocal_244))
								{
									HUD::REMOVE_BLIP(&iLocal_244);
								}
								if (HUD::DOES_BLIP_EXIST(Local_94[2 /*14*/].f_1))
								{
									HUD::REMOVE_BLIP(&(Local_94[2 /*14*/].f_1));
								}
								Local_68[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 2000;
								Local_68[iParam0 /*4*/].f_2++;
							}
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_68[iParam0 /*4*/].f_3)
							{
								Local_68[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				case 8:
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						switch (Local_68[iParam0 /*4*/].f_2)
						{
							case 0:
								if ((__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[2 /*14*/], 1) > 70f || ((iLocal_92 == 2 && func_319(14, 32) > 0) && !func_305(73))) || (iLocal_92 >= 7 && func_305(133)))
								{
									if (!__LIB_0__::func_75())
									{
										Local_68[iParam0 /*4*/].f_3 = 0;
										if (HUD::DOES_BLIP_EXIST(iLocal_246))
										{
											MISC::SET_BIT(&(Local_68[iParam0 /*4*/].f_3), 0);
											HUD::REMOVE_BLIP(&iLocal_246);
										}
										if (HUD::DOES_BLIP_EXIST(iLocal_247))
										{
											MISC::SET_BIT(&(Local_68[iParam0 /*4*/].f_3), 1);
											HUD::REMOVE_BLIP(&iLocal_247);
										}
										if (HUD::DOES_BLIP_EXIST(iLocal_248))
										{
											MISC::SET_BIT(&(Local_68[iParam0 /*4*/].f_3), 2);
											HUD::REMOVE_BLIP(&iLocal_248);
										}
										if (Local_68[iParam0 /*4*/].f_3 != 0)
										{
											iLocal_244 = __LIB_0__::func_639(Local_94[2 /*14*/], 0, 0);
										}
										__LIB_0__::func_382("CMN_LLEAVE" /* GXT: ~s~Return to ~b~Lamar.~s~ */, -1, 1);
										Local_68[iParam0 /*4*/].f_2++;
									}
								}
								break;
							case 1:
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[2 /*14*/], 1) < 30f)
								{
									if (((iLocal_92 >= 2 && iLocal_92 < 6) && func_319(14, 32) == 0) || (iLocal_92 >= 7 && !func_305(133)))
									{
										if (BitTest(Local_68[iParam0 /*4*/].f_3, 0))
										{
											if (HUD::DOES_BLIP_EXIST(iLocal_244))
											{
												HUD::REMOVE_BLIP(&iLocal_244);
											}
											iLocal_246 = __LIB_0__::func_488(-1067.4984f, -1665.7689f, 3.5431f, 0);
										}
										if (BitTest(Local_68[iParam0 /*4*/].f_3, 1))
										{
											iLocal_247 = __LIB_0__::func_488(-1064.8322f, -1669.313f, 3.5348f, 0);
										}
										if (BitTest(Local_68[iParam0 /*4*/].f_3, 2))
										{
											iLocal_248 = __LIB_0__::func_488(-1073.8386f, -1675.4724f, 3.5162f, 0);
										}
										HUD::CLEAR_PRINTS();
										Local_68[iParam0 /*4*/].f_2 = 0;
									}
								}
								break;
							}
					}
					break;
				case 9:
					switch (Local_68[iParam0 /*4*/].f_2)
					{
						case 0:
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (__LIB_0__::func_501("ARM2_INS03", 0, 0))
								{
									Local_68[iParam0 /*4*/].f_2++;
								}
								if (func_305(59))
								{
									Local_68[iParam0 /*4*/].f_1 = 1;
								}
							}
							break;
						case 1:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1126.5732f, -1581.5035f, 2.723826f, -1137.8044f, -1589.2766f, 6.146455f, 10.625f, false, true, 0))
							{
								__LIB_0__::func_151("ARM2_INS05", 12000);
								Local_68[iParam0 /*4*/].f_2++;
								Local_68[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 2000;
							}
							break;
						case 2:
							if (__LIB_0__::func_1("ARM2_INS05"))
							{
								if (func_305(55) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
								{
									if (MISC::GET_GAME_TIMER() > Local_68[iParam0 /*4*/].f_3)
									{
										HUD::CLEAR_HELP(true);
										Local_68[iParam0 /*4*/].f_1 = 1;
									}
								}
							}
							else
							{
								Local_68[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				case 10:
					switch (Local_68[iParam0 /*4*/].f_2)
					{
						case 0:
							if (!PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
							{
								if (!__LIB_0__::func_425(138))
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										__LIB_0__::func_151("CMN_FPSHELP" /* GXT: ~s~To play GTAV in first-person mode cycle the camera using ~INPUT_NEXT_CAMERA~ */, 10000);
										Local_68[iParam0 /*4*/].f_2++;
									}
								}
								else
								{
									Local_68[iParam0 /*4*/].f_1 = 1;
								}
							}
							break;
						case 1:
							if (__LIB_0__::func_425(138))
							{
								if (__LIB_0__::func_1("CMN_FPSHELP" /* GXT: ~s~To play GTAV in first-person mode cycle the camera using ~INPUT_NEXT_CAMERA~ */))
								{
									HUD::CLEAR_HELP(true);
								}
								Local_68[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				case 12:
					HUD::CLEAR_PRINTS();
					__LIB_0__::func_382("ARM2_INS09", 3000, 1);
					Local_68[iParam0 /*4*/].f_1 = 1;
					break;
				case 11:
					switch (Local_68[iParam0 /*4*/].f_2)
					{
						case 0:
							if (!func_305(94))
							{
								if (__LIB_15__::func_965("AR2_MCS_4_LO"))
								{
									__LIB_0__::func_151("ARM2_HLP06", 12000);
									__LIB_0__::func_382("ARM2_INS08", 7500, 1);
									Local_68[iParam0 /*4*/].f_2++;
								}
							}
							break;
						case 1:
							if (__LIB_0__::func_501("ARM2_INS08", 0, 0))
							{
								if (OBJECT::DOES_PICKUP_EXIST(iLocal_227))
								{
									if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_227))
									{
										Global_96876 = 1;
										Local_68[iParam0 /*4*/].f_1 = 1;
										HUD::CLEAR_PRINTS();
										if (__LIB_0__::func_1("ARM2_HLP06"))
										{
											HUD::CLEAR_HELP(true);
										}
									}
								}
							}
							else
							{
								Local_68[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				case 13:
					if (!func_305(125))
					{
						switch (Local_68[iParam0 /*4*/].f_2)
						{
							case 0:
								Local_68[iParam0 /*4*/].f_2++;
								break;
							case 1:
								if (!__LIB_0__::func_1("PU_QS_HLP" /* GXT: Press ~PAD_LB~ to switch to the weapon just picked up. */))
								{
									if (MISC::GET_GAME_TIMER() > Local_68[iParam0 /*4*/].f_3)
									{
										HUD::CLEAR_HELP(true);
										__LIB_0__::func_151("ARM2_HLP07", 12000);
										Local_68[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 1500;
										Local_68[iParam0 /*4*/].f_2++;
									}
								}
								break;
							case 2:
								if (__LIB_0__::func_1("ARM2_HLP07"))
								{
									if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/))
									{
										Local_68[iParam0 /*4*/].f_2++;
									}
								}
								else
								{
									__LIB_0__::func_151("ARM2_HLP07b", 12000);
									Local_68[iParam0 /*4*/].f_2++;
								}
								break;
							case 3:
								if (MISC::GET_GAME_TIMER() > Local_68[iParam0 /*4*/].f_3)
								{
									HUD::CLEAR_HELP(true);
									__LIB_0__::func_151("ARM2_HLP07b", 12000);
									Local_68[iParam0 /*4*/].f_2++;
								}
								break;
							case 4:
								if (__LIB_0__::func_1("ARM2_HLP07b"))
								{
									if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/))
									{
										Local_68[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 3000;
										Local_68[iParam0 /*4*/].f_2++;
									}
								}
								else
								{
									Local_68[iParam0 /*4*/].f_1 = 1;
								}
								break;
							case 5:
								if (MISC::GET_GAME_TIMER() > Local_68[iParam0 /*4*/].f_3)
								{
									if (__LIB_0__::func_1("ARM2_HLP07b"))
									{
										HUD::CLEAR_HELP(true);
									}
									Local_68[iParam0 /*4*/].f_1 = 1;
								}
								break;
						}
					}
					else if (__LIB_0__::func_1("ARM2_HLP07") || __LIB_0__::func_1("ARM2_HLP07b"))
					{
						HUD::CLEAR_HELP(true);
						Local_68[iParam0 /*4*/].f_1 = 1;
					}
					break;
				case 15:
					switch (Local_68[iParam0 /*4*/].f_2)
					{
						case 0:
							if (__LIB_0__::func_1("ARM2_HLP08"))
							{
								HUD::CLEAR_HELP(true);
							}
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								__LIB_0__::func_151("ARM2_HLP14", 12000);
								Local_68[iParam0 /*4*/].f_2++;
							}
							break;
						case 1:
							if (__LIB_0__::func_1("ARM2_HLP14"))
							{
								if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/) && !PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/))
								{
									HUD::CLEAR_HELP(true);
									Local_68[iParam0 /*4*/].f_1 = 1;
								}
							}
							else
							{
								Local_68[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				case 16:
					switch (Local_68[iParam0 /*4*/].f_2)
					{
						case 0:
							Local_68[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 1500;
							Local_68[iParam0 /*4*/].f_2++;
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_68[iParam0 /*4*/].f_3)
							{
								if (bLocal_91)
								{
									Local_68[iParam0 /*4*/].f_1 = 1;
								}
								else
								{
									HUD::CLEAR_HELP(true);
									__LIB_0__::func_151("ARM2_HLP13", 12000);
								}
								Local_68[iParam0 /*4*/].f_2++;
								Local_68[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER();
							}
							else if (bLocal_91)
							{
								Local_68[iParam0 /*4*/].f_1 = 1;
							}
							break;
						case 2:
							if (__LIB_0__::func_1("ARM2_HLP13"))
							{
								if (bLocal_91)
								{
									if ((MISC::GET_GAME_TIMER() - Local_68[iParam0 /*4*/].f_3) > 2000)
									{
										HUD::CLEAR_HELP(true);
										Local_68[iParam0 /*4*/].f_1 = 1;
									}
								}
							}
							else
							{
								Local_68[iParam0 /*4*/].f_1 = 1;
							}
							break;
						case 3:
							if (__LIB_0__::func_1("ARM2_HLP13"))
							{
								if ((MISC::GET_GAME_TIMER() - Local_68[iParam0 /*4*/].f_3) > 2000)
								{
									HUD::CLEAR_HELP(true);
									Local_68[iParam0 /*4*/].f_1 = 1;
								}
							}
							else
							{
								Local_68[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				case 17:
					__LIB_0__::func_151("ARM2_HLP07b", 12000);
					Local_68[iParam0 /*4*/].f_1 = 1;
					break;
				case 19:
					__LIB_0__::func_229("ARM2_INS12", 5000, 1);
					Local_68[iParam0 /*4*/].f_1 = 1;
					break;
				case 20:
					switch (Local_68[iParam0 /*4*/].f_2)
					{
						case 0:
							if (Global_113386.f_10049.f_100 >= 3)
							{
								Global_113386.f_10049.f_100 = 2;
							}
							Local_68[iParam0 /*4*/].f_2++;
							break;
						case 1:
							if (func_305(6))
							{
								if (!PED::IS_PED_INJURED(Local_94[8 /*14*/]))
								{
									__LIB_14__::func_615(&uLocal_270, Local_94[8 /*14*/], 0, 0, 1, 1, 1);
								}
								else
								{
									__LIB_0__::func_345(&uLocal_270, 0, 0);
									Local_68[iParam0 /*4*/].f_1 = 1;
								}
							}
							else
							{
								__LIB_0__::func_345(&uLocal_270, 0, 0);
								Local_68[iParam0 /*4*/].f_2++;
							}
							break;
						case 2:
							if (!PED::IS_PED_INJURED(Local_94[8 /*14*/]))
							{
								if (func_305(6))
								{
									Local_68[iParam0 /*4*/].f_2 = 1;
								}
							}
							else
							{
								Local_68[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				case 21:
					switch (Local_68[iParam0 /*4*/].f_2)
					{
						case 0:
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								Local_68[iParam0 /*4*/].f_3 = (Local_68[iParam0 /*4*/].f_3 + SYSTEM::FLOOR((SYSTEM::TIMESTEP() * 1000f)));
								if (Local_68[iParam0 /*4*/].f_3 > 5000)
								{
									__LIB_0__::func_151("ARM2_HLP27", 12000);
									Local_68[iParam0 /*4*/].f_2++;
								}
							}
							else
							{
								Local_68[iParam0 /*4*/].f_3 = 0;
							}
							break;
						case 1:
							if (__LIB_0__::func_1("ARM2_HLP27"))
							{
								if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 48 /*INPUT_HUD_SPECIAL*/))
								{
									HUD::CLEAR_HELP(true);
									Local_68[iParam0 /*4*/].f_1 = 1;
								}
							}
							else
							{
								Local_68[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				case 22:
					__LIB_0__::func_151("ARM2_HLP30", 12000);
					Local_68[iParam0 /*4*/].f_1 = 1;
					break;
				case 23:
					switch (Local_68[iParam0 /*4*/].f_2)
					{
						case 0:
							if (func_305(32))
							{
								HUD::CLEAR_PRINTS();
								__LIB_0__::func_229("ARM2_INS22", 5000, 1);
								Local_94[2 /*14*/].f_1 = __LIB_0__::func_639(Local_94[2 /*14*/], 0, 0);
								if (HUD::DOES_BLIP_EXIST(Local_95[4 /*2*/].f_1))
								{
									HUD::REMOVE_BLIP(&(Local_95[4 /*2*/].f_1));
								}
								Local_68[iParam0 /*4*/].f_2++;
							}
							break;
						case 1:
							if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[4 /*2*/], false))
							{
								if (PED::IS_PED_IN_GROUP(Local_94[2 /*14*/]))
								{
									if (HUD::DOES_BLIP_EXIST(Local_94[2 /*14*/].f_1))
									{
										HUD::REMOVE_BLIP(&(Local_94[2 /*14*/].f_1));
										Local_95[4 /*2*/].f_1 = __LIB_0__::func_639(Local_95[4 /*2*/], 0, 0);
										Local_68[iParam0 /*4*/].f_2 = 0;
									}
								}
							}
							break;
					}
					break;
				case 24:
					switch (Local_68[iParam0 /*4*/].f_2)
					{
						case 0:
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
								{
									if (PED::IS_PED_IN_VEHICLE(Local_94[2 /*14*/], iVar1, false))
									{
										Local_68[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 30000;
										Local_68[iParam0 /*4*/].f_2++;
									}
								}
							}
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_68[iParam0 /*4*/].f_3)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[4 /*2*/], false))
								{
									if (!PED::IS_PED_INJURED(Local_94[8 /*14*/]))
									{
										if (PED::IS_PED_IN_VEHICLE(Local_94[8 /*14*/], Local_95[4 /*2*/], false))
										{
											if (func_279("drive_good", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
												{
													__LIB_0__::func_151("ARM2_HLP21_KM", 9500);
												}
												else
												{
													__LIB_0__::func_151("ARM2_HLP21", 9500);
												}
												Local_68[iParam0 /*4*/].f_1 = 1;
											}
										}
									}
								}
							}
							break;
					}
					break;
				case 25:
					switch (Local_68[iParam0 /*4*/].f_2)
					{
						case 0:
							Local_68[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 2000;
							Local_68[iParam0 /*4*/].f_2++;
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_68[iParam0 /*4*/].f_3)
							{
								__LIB_0__::func_151("ARM2_HLP24", 12000);
								Local_68[iParam0 /*4*/].f_2++;
							}
							break;
						case 2:
							if (!__LIB_0__::func_1("ARM2_HLP24"))
							{
								Local_68[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 500;
								Local_68[iParam0 /*4*/].f_2++;
							}
							break;
						case 3:
							if (MISC::GET_GAME_TIMER() > Local_68[iParam0 /*4*/].f_3)
							{
								__LIB_0__::func_151("ARM2_HLP25", 12000);
								Local_68[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				case 26:
					switch (Local_68[iParam0 /*4*/].f_2)
					{
						case 0:
							if (HUD::DOES_BLIP_EXIST(Local_95[4 /*2*/].f_1))
							{
								HUD::REMOVE_BLIP(&(Local_95[4 /*2*/].f_1));
							}
							AUDIO::START_AUDIO_SCENE("ARM_2_RIDE_BIKE_BACK");
							Local_68[iParam0 /*4*/].f_2++;
							break;
						case 1:
							func_529(&Local_214);
							if (__LIB_41__::func_20(&Local_214, -6.62f, -1393.36f, 28.32f, 4f, 4f, 2f, 1, Local_95[4 /*2*/], "ARM2_INS13", "CMN_GENGETINBK" /* GXT: ~s~Get on the ~b~bike. */, "CMN_GENGETBCKBK" /* GXT: ~s~Get on the ~b~bike. */, 1, 0, 1, -1))
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
								Local_68[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				case 27:
					switch (Local_68[iParam0 /*4*/].f_2)
					{
						case 0:
							if (func_489(69))
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !__LIB_0__::func_75())
								{
									__LIB_0__::func_229("ARM2_INS14", 5000, 1);
									Local_68[iParam0 /*4*/].f_2++;
									Local_68[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 2000;
								}
							}
							break;
						case 1:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[4 /*2*/], false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95[4 /*2*/], false))
								{
									if (__LIB_0__::func_501("ARM2_INS14", 0, 0))
									{
										if (MISC::GET_GAME_TIMER() > Local_68[iParam0 /*4*/].f_3)
										{
											HUD::CLEAR_PRINTS();
											Local_68[iParam0 /*4*/].f_1 = 1;
										}
									}
									else
									{
										Local_68[iParam0 /*4*/].f_1 = 1;
									}
								}
							}
							break;
					}
					break;
				case 14:
					if (!func_488(7, 17))
					{
						switch (Local_68[iParam0 /*4*/].f_2)
						{
							case 0:
								Local_68[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 1500;
								Local_68[iParam0 /*4*/].f_2++;
								break;
							case 1:
								if (MISC::GET_GAME_TIMER() > Local_68[iParam0 /*4*/].f_3)
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										__LIB_0__::func_151("ARM2_HLP08", 12000);
										Local_68[iParam0 /*4*/].f_2++;
									}
								}
								break;
							case 2:
								if (__LIB_0__::func_1("ARM2_HLP08"))
								{
									if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
									{
										HUD::CLEAR_HELP(true);
									}
								}
								else
								{
									Local_68[iParam0 /*4*/].f_1 = 1;
								}
								break;
						}
					}
					else
					{
						Local_68[iParam0 /*4*/].f_1 = 1;
					}
					break;
				}
			}
	}
}

int func_488(int iParam0, int iParam1)//Position - 0x4FB54
{
	if (Local_68[iParam0 /*4*/] == iParam1)
	{
		if (Local_68[iParam0 /*4*/].f_1 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_489(int iParam0)//Position - 0x4FB7A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_66.f_0)
	{
		if (Local_66[iVar0 /*6*/] == iParam0)
		{
			if (Local_66[iVar0 /*6*/].f_1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_529(int* iParam0)//Position - 0x52155
{
	MISC::SET_BIT(&(iParam0->f_13), 7);
}

bool func_563(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, var uParam4, char* sParam5, char* sParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)//Position - 0x534E9
{
	return func_564(iParam0, Param1, Param2, bParam3, uParam4, 0, 0, sParam5, sParam6, sParam6, sParam6, sParam6, bParam7, bParam8, bParam9, iParam10);
}

int func_564(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, var uParam4, int iParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)//Position - 0x53517
{
	return __LIB_37__::func_187(iParam0, Param1, Param2, __LIB_0__::func_613(), __LIB_0__::func_613(), bParam3, 1, uParam4, iParam5, iParam6, 0, sParam7, sParam8, sParam9, sParam10, sParam11, __LIB_0__::func_591(), bParam12, bParam13, __LIB_0__::func_591(), 0, 0, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

void func_566(int iParam0, int iParam1)//Position - 0x53587
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<3> Var16;
	struct<3> Var17;
	int iVar18;
	struct<3> Var19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	iVar0 = (iParam1 - iParam0);
	if (Local_72[0 /*7*/] != iParam0 && Local_72[iVar0 /*7*/] != iParam1)
	{
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 < Local_72.f_0)
		{
			if (iVar1 <= iVar0)
			{
				Local_72[iVar1 /*7*/] = (iParam0 + iVar2);
				Local_72[iVar1 /*7*/].f_1 = 1;
				Local_72[iVar1 /*7*/].f_2 = 0;
				Local_72[iVar1 /*7*/].f_3 = 0;
				Local_72[iVar1 /*7*/].f_4 = 0;
				Local_72[iVar1 /*7*/].f_5 = 0;
				Local_72[iVar1 /*7*/].f_6 = 0f;
				iVar2++;
			}
			else
			{
				Local_72[iVar1 /*7*/].f_1 = 0;
			}
			iVar1++;
		}
	}
	iVar3 = 0;
	while (iVar3 < Local_72.f_0)
	{
		if (Local_72[iVar3 /*7*/].f_1)
		{
			switch (Local_72[iVar3 /*7*/])
			{
				case 6:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					else
					{
						Local_72[iVar3 /*7*/].f_2 = 0;
					}
					break;
				case 8:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[2 /*14*/], 1) > 30f)
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 7:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					break;
				case 9:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false) && !PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						if (PED::IS_PED_IN_VEHICLE(Local_94[2 /*14*/], Local_95[0 /*2*/], false) || PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_94[2 /*14*/]))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
						else
						{
							Local_72[iVar3 /*7*/].f_2 = 0;
						}
					}
					break;
				case 10:
					switch (Local_72[iVar3 /*7*/].f_4)
					{
						case 0:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_95[0 /*2*/], 1) < 8f)
								{
									Local_72[iVar3 /*7*/].f_4++;
								}
							}
							break;
						case 1:
							Local_72[iVar3 /*7*/].f_2 = 0;
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_95[0 /*2*/], 1) > 12f)
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
							}
							break;
					}
					break;
				case 11:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (func_305(6) && !func_305(9))
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					break;
				case 12:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_94[2 /*14*/], false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != PED::GET_VEHICLE_PED_IS_USING(Local_94[2 /*14*/]))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 13:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_94[2 /*14*/], false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == PED::GET_VEHICLE_PED_IS_USING(Local_94[2 /*14*/]))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 14:
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					else
					{
						Local_72[iVar3 /*7*/].f_2 = 0;
					}
					break;
				case 15:
					switch (Local_72[iVar3 /*7*/].f_4)
					{
						case 0:
							if (func_305(13))
							{
								Local_72[iVar3 /*7*/].f_2 = 0;
								Local_72[iVar3 /*7*/].f_4++;
							}
							break;
						case 1:
							if (func_304(13))
							{
								Local_72[iVar3 /*7*/].f_4 = 0;
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
							break;
					}
					break;
				case 16:
					switch (Local_72[iVar3 /*7*/].f_4)
					{
						case 0:
							if (func_305(13))
							{
								Local_72[iVar3 /*7*/].f_4++;
							}
							break;
						case 1:
							if (func_304(13))
							{
								Local_72[iVar3 /*7*/].f_4++;
								Local_72[iVar3 /*7*/].f_2 = 0;
							}
							break;
						case 2:
							if (func_305(13))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
								Local_72[iVar3 /*7*/].f_4 = 1;
							}
							break;
					}
					break;
				case 17:
					switch (Local_72[iVar3 /*7*/].f_4)
					{
						case 0:
							if (func_305(10) || func_305(12))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
								Local_72[iVar3 /*7*/].f_4++;
							}
							break;
						case 1:
							if (func_304(10) && func_304(12))
							{
								Local_72[iVar3 /*7*/].f_2 = 0;
								Local_72[iVar3 /*7*/].f_4 = 0;
							}
							break;
					}
					break;
				case 18:
					switch (Local_72[iVar3 /*7*/].f_4)
					{
						case 0:
							if (func_305(7))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
								Local_72[iVar3 /*7*/].f_4++;
							}
							break;
						case 1:
							if (func_304(7))
							{
								Local_72[iVar3 /*7*/].f_2 = 0;
								Local_72[iVar3 /*7*/].f_4 = 0;
							}
							break;
					}
					break;
				case 3:
					switch (Local_72[iVar3 /*7*/].f_4)
					{
						case 0:
							if (func_304(7))
							{
								if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1141.0928f, -1576.7594f, 3.3048f, Global_19, true, true, 0) && ENTITY::IS_ENTITY_AT_COORD(Local_94[2 /*14*/], -1141.0928f, -1576.7594f, 3.3048f, Global_19, false, true, 0))
									{
										if (func_305(13))
										{
											Local_72[iVar3 /*7*/].f_4 = 1;
										}
										else
										{
											Local_72[iVar3 /*7*/].f_2 = 1;
											Local_72[iVar3 /*7*/].f_4 = 2;
										}
									}
								}
							}
							break;
						case 1:
							if (func_304(7))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
								{
									if (__LIB_0__::func_213(Local_95[0 /*2*/], 4f, 1, 1056964608, 0, 1, 0))
									{
										Local_72[iVar3 /*7*/].f_2 = 1;
									}
								}
							}
							else
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
								Local_72[iVar3 /*7*/].f_4 = 0;
							}
							break;
					}
					break;
				case 4:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -17.2f, -1083.98f, 25.66f, 1) < 6f || __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -39.38f, -1078.51f, 25.65f, 1) < 6f)
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 103:
					if (func_305(132))
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					else
					{
						Local_72[iVar3 /*7*/].f_2 = 0;
					}
					break;
				case 19:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						if (!PED::IS_PED_IN_GROUP(Local_94[2 /*14*/]))
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[2 /*14*/], 1) > 4f)
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 20:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -58.0408f, -1114.9807f, 25.4358f, 1) > 200f)
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 21:
					Local_72[iVar3 /*7*/].f_4 = Local_72[iVar3 /*7*/].f_5;
					Local_72[iVar3 /*7*/].f_5 = 0;
					iVar4 = VEHICLE::GET_CLOSEST_VEHICLE(-36.5853f, -1101.4738f, 26.3444f, 5f, joaat("bjxl"), 4);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, false))
					{
						Local_72[iVar3 /*7*/].f_5 = (Local_72[iVar3 /*7*/].f_5 + ENTITY::GET_ENTITY_HEALTH(iVar4));
					}
					iVar4 = VEHICLE::GET_CLOSEST_VEHICLE(-46.2594f, -1097.8386f, 26.3444f, 5f, joaat("schwarzer"), 2);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, false))
					{
						Local_72[iVar3 /*7*/].f_5 = (Local_72[iVar3 /*7*/].f_5 + ENTITY::GET_ENTITY_HEALTH(iVar4));
					}
					iVar4 = VEHICLE::GET_CLOSEST_VEHICLE(-50.08f, -1094.4625f, 26.0671f, 5f, joaat("tailgater"), 4);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, false))
					{
						Local_72[iVar3 /*7*/].f_5 = (Local_72[iVar3 /*7*/].f_5 + ENTITY::GET_ENTITY_HEALTH(iVar4));
					}
					iVar4 = VEHICLE::GET_CLOSEST_VEHICLE(-37.4128f, -1088.5618f, 26.0671f, 5f, joaat("tailgater"), 4);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, false))
					{
						Local_72[iVar3 /*7*/].f_5 = (Local_72[iVar3 /*7*/].f_5 + ENTITY::GET_ENTITY_HEALTH(iVar4));
					}
					iVar4 = VEHICLE::GET_CLOSEST_VEHICLE(-41.4259f, -1099.6481f, 26.0534f, 5f, joaat("baller"), 2);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, false))
					{
						Local_72[iVar3 /*7*/].f_5 = (Local_72[iVar3 /*7*/].f_5 + ENTITY::GET_ENTITY_HEALTH(iVar4));
					}
					if (PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 316))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -59.357796f, -1092.6195f, 24.917713f, -27.430742f, -1104.519f, 28.711697f, 16.25f, false, true, 0))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_94[3 /*14*/]))
					{
						if (!PED::IS_PED_INJURED(Local_94[3 /*14*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[3 /*14*/], joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")) == 2)
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -39.62799f, -1099.2401f, 25.25259f, 1) < 150.5f)
					{
						if (MISC::HAS_BULLET_IMPACTED_IN_AREA(-39.62799f, -1099.2401f, 25.25259f, 26.5f, true, true))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, -39.62799f, -1099.2401f, 25.25259f, 26.5f))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
						if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -39.62799f, -1099.2401f, 25.25259f, 1) < 26.5f)
						{
							if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
							{
								iVar5 = joaat("WEAPON_UNARMED");
								WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar5, true);
								switch (iVar5)
								{
									case joaat("WEAPON_BAT"):
									case joaat("WEAPON_CROWBAR"):
									case joaat("WEAPON_HAMMER"):
									case joaat("WEAPON_KNIFE"):
									case joaat("WEAPON_NIGHTSTICK"):
									case joaat("WEAPON_PETROLCAN"):
									case joaat("WEAPON_STICKYBOMB"):
									case joaat("WEAPON_GRENADE"):
									case joaat("WEAPON_BOTTLE"):
										break;
									default:
										Local_72[iVar3 /*7*/].f_2 = 1;
										break;
									}
								}
							}
					}
					if (Local_72[iVar3 /*7*/].f_4 != 0)
					{
						if (MISC::ABSI((Local_72[iVar3 /*7*/].f_4 - Local_72[iVar3 /*7*/].f_5)) < 200 && MISC::ABSI((Local_72[iVar3 /*7*/].f_4 - Local_72[iVar3 /*7*/].f_5)) > 10)
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 22:
					if (func_264(0, 1))
					{
						Local_72[iVar3 /*7*/].f_2 = 0;
						if ((((func_305(12) || func_305(10)) || func_305(13)) || func_305(11)) || func_305(19))
						{
							if (func_304(23))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 23:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1073.5398f, -1666.4523f, 3.12654f, -1120.646f, -1599.4963f, 21.711151f, 51f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1061.8755f, -1671.4537f, 1.990468f, -1073.0575f, -1659.6667f, 21.70061f, 40.0625f, false, true, 0))
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					break;
				case 24:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (func_305(23))
						{
							if (Local_72[iVar3 /*7*/].f_5 == 0)
							{
								Local_72[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 4000;
							}
							else if (MISC::GET_GAME_TIMER() > Local_72[iVar3 /*7*/].f_5)
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
						else
						{
							Local_72[iVar3 /*7*/].f_5 = 0;
						}
					}
					break;
				case 26:
					if (!PED::IS_PED_INJURED(Local_94[22 /*14*/]))
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					break;
				case 25:
					iVar6 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar6))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar6, false))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar6, -1130.1235f, -1589.1427f, 2.21117f, -1067.2261f, -1677.451f, 9.856807f, 33.0625f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar6, -1126.9999f, -1586.8467f, 2.961027f, -1132.1338f, -1590.4432f, 7.032865f, 1.4375f, false, true, 0))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 27:
					if (func_264(12, 14))
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					break;
				case 2:
					if (((func_305(15) || func_305(16)) || func_305(17)) || func_305(18))
					{
						if (iLocal_48)
						{
							if (__LIB_0__::func_75())
							{
								cLocal_57 = { __LIB_0__::func_485() };
								if (!__LIB_15__::func_954(&cLocal_57))
								{
									Local_61 = { __LIB_0__::func_486() };
								}
								__LIB_0__::func_638();
								iLocal_48 = 1;
							}
							iLocal_48 = 0;
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
						else
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 31:
					if (((func_305(15) || func_305(16)) || func_305(17)) || func_305(18))
					{
						if (iLocal_48)
						{
							if (__LIB_0__::func_75())
							{
								cLocal_57 = { __LIB_0__::func_485() };
								if (!__LIB_15__::func_954(&cLocal_57))
								{
									Local_61 = { __LIB_0__::func_486() };
								}
								__LIB_0__::func_638();
								iLocal_48 = 1;
							}
							iLocal_48 = 0;
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
						else
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 47:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_94[2 /*14*/], false))
							{
								iVar7 = PED::GET_VEHICLE_PED_IS_IN(Local_94[2 /*14*/], false);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar7, false))
								{
									if (ENTITY::GET_ENTITY_SPEED(iVar7) < 1f)
									{
										Local_72[iVar3 /*7*/].f_2 = 1;
									}
								}
							}
						}
					}
					break;
				case 48:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_94[2 /*14*/], -1127.0898f, -1586.7543f, 4.648631f, -1132.2463f, -1590.3468f, 6.931557f, 1.875f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1129.4653f, -1588.787f, 2.398673f, -1109.2434f, -1619.0516f, 5.773672f, 25.75f, false, true, 0))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 49:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_94[2 /*14*/], -1129.4653f, -1588.787f, 2.398673f, -1109.2434f, -1619.0516f, 5.773672f, 25.75f, false, true, 0))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 50:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_94[2 /*14*/], -1112.3938f, -1602.3597f, 2.913989f, -1119.8629f, -1607.588f, 6.320321f, 2.1875f, false, true, 0))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 51:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						switch (Local_72[iVar3 /*7*/].f_4)
						{
							case 0:
								if (ENTITY::DOES_ENTITY_EXIST(Local_94[3 /*14*/]))
								{
									if (!PED::IS_PED_INJURED(Local_94[3 /*14*/]))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[3 /*14*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
										{
											Local_72[iVar3 /*7*/].f_4++;
										}
									}
									else
									{
										Local_72[iVar3 /*7*/].f_2 = 1;
									}
								}
								break;
							case 1:
								if (!PED::IS_PED_INJURED(Local_94[3 /*14*/]))
								{
									if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_94[3 /*14*/], PLAYER::PLAYER_PED_ID(), true) || TASK::GET_SCRIPT_TASK_STATUS(Local_94[3 /*14*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 2)
									{
										Local_72[iVar3 /*7*/].f_2 = 1;
									}
								}
								else
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
								break;
							}
					}
					break;
				case 53:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if ((func_305(51) || TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_PLAY_ANIM")) == 2) || (func_305(50) && PED::IS_PED_RAGDOLL(Local_94[2 /*14*/])))
							{
								if (!func_264(1, 19))
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				case 52:
					if (func_464(3, 21))
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					break;
				case 54:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_94[2 /*14*/], -1127.8269f, -1584.6648f, 1.898767f, -1133.9753f, -1589.0413f, 5.765991f, 4.25f, false, true, 0))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 55:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1130.1235f, -1589.1427f, 2.21117f, -1067.2261f, -1677.451f, 9.856807f, 33.0625f, false, true, 0) || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1126.9999f, -1586.8467f, 2.961027f, -1132.1338f, -1590.4432f, 7.032865f, 1.4375f, false, true, 0) && PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())))
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					break;
				case 56:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						switch (Local_72[iVar3 /*7*/].f_4)
						{
							case 0:
								if (__LIB_15__::func_965("AR2_BU03"))
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0.5f, 4f, 3);
									Local_72[iVar3 /*7*/].f_4++;
								}
								break;
							case 1:
								if (!__LIB_15__::func_965("AR2_BU03"))
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
								break;
							}
					}
					break;
				case 57:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (__LIB_15__::func_965("AR2_AN04"))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 58:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_94[2 /*14*/], -1125.5931f, -1595.3358f, 3.075586f, -1117.4877f, -1606.9396f, 7.334638f, 6.875f, false, true, 0))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 59:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1129.2332f, -1587.6239f, 4.697088f, -1128.4055f, -1588.8068f, 7.398672f, 6.875f, false, true, 0))
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					break;
				case 60:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[2 /*14*/], 1) < 50f)
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 61:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_94[2 /*14*/], -1111.9186f, -1608.7102f, 2.749123f, -1107.077f, -1615.7148f, 6.152816f, 22.4375f, false, true, 0))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 62:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[1 /*2*/], false) && !PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (__LIB_0__::func_76(Local_95[1 /*2*/], Local_94[2 /*14*/], 1) < 20f)
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 63:
					if (func_464(9, 27) && !func_264(9, 27))
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					else
					{
						Local_72[iVar3 /*7*/].f_2 = 0;
					}
					break;
				case 64:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[1 /*2*/], false))
					{
						switch (Local_72[iVar3 /*7*/].f_4)
						{
							case 0:
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_95[1 /*2*/]))
								{
									Local_72[iVar3 /*7*/].f_4++;
								}
								break;
							case 1:
								if (func_574(Local_95[1 /*2*/], PLAYER::PLAYER_PED_ID(), &fLocal_268, 15f, 2.4f, 0f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1131.6692f, -1587.0656f, 0.197111f, -1083.117f, -1654.0173f, 6.711177f, 18.4375f, false, true, 0))
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
								break;
							}
					}
					break;
				case 77:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[1 /*2*/], false))
					{
						if (ENTITY::GET_ENTITY_SPEED(Local_95[1 /*2*/]) < 1f)
						{
							if (__LIB_0__::func_76(Local_95[1 /*2*/], PLAYER::PLAYER_PED_ID(), 1) < 3f)
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					else
					{
						Local_72[iVar3 /*7*/].f_1 = 0;
					}
					break;
				case 78:
					if (func_305(82))
					{
						if (!func_305(78))
						{
							fVar8 = MISC::ABSF((ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) - __LIB_6__::func_252(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1067.1561f, -1665.4717f, 3.55f, 1)));
							if (fVar8 > 180f)
							{
								fVar8 = MISC::ABSF((fVar8 - 360f));
							}
							fVar9 = (60f - fVar8);
							if (fVar9 < 0f)
							{
								fVar9 = 0f;
							}
							fVar9 = (fVar9 * 0.0433f);
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1068.6707f, -1664.6268f, 3.04523f, -1066.6667f, -1667.6683f, 5.714818f, (1.4f + fVar9), false, true, 0) && fVar8 < 90f)
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 79:
					if (func_305(82))
					{
						if (!func_305(79))
						{
							fVar10 = MISC::ABSF((ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) - __LIB_6__::func_252(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1064.92f, -1668.6212f, 3.546325f, 1)));
							if (fVar10 > 180f)
							{
								fVar10 = MISC::ABSF((fVar10 - 360f));
							}
							fVar11 = (60f - fVar10);
							if (fVar11 < 0f)
							{
								fVar11 = 0f;
							}
							fVar11 = (fVar11 * 0.0433f);
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1064.5602f, -1670.8068f, 3.018936f, -1066.6667f, -1667.6683f, 5.714818f, (1.4f + fVar11), false, true, 0) && fVar10 < 90f)
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 80:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (func_305(72))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1071.8099f, -1677.7954f, 1.909934f, -1075.7677f, -1672.8856f, 5.900661f, 3.25f, false, true, 0))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 81:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (func_305(61))
						{
							if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[1 /*2*/], false))
								{
									if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_95[1 /*2*/], 1) < 5f)
									{
										Local_72[iVar3 /*7*/].f_2 = 1;
									}
								}
							}
						}
					}
					break;
				case 65:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (func_264(13, 31))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 66:
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						if (func_305(53) || func_264(3, 21))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 67:
					if (func_264(1, 19))
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					break;
				case 68:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[1 /*2*/], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_95[1 /*2*/]))
						{
							if (func_264(11, 29))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 84:
					switch (Local_72[iVar3 /*7*/].f_4)
					{
						case 0:
							if (__LIB_15__::func_965("ARM2_OUT4") || func_489(33))
							{
								Local_72[iVar3 /*7*/].f_4++;
							}
							break;
						case 1:
							if (func_489(21) || func_489(33))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
							break;
					}
					break;
				case 69:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[6 /*2*/], false))
					{
						if (VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(Local_95[6 /*2*/]))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[2 /*2*/], false))
					{
						if (VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(Local_95[2 /*2*/]))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 70:
					switch (Local_72[iVar3 /*7*/].f_4)
					{
						case 0:
							if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_94[2 /*14*/], -1098.3583f, -1632.9222f, -0.601469f, -1065.5553f, -1675.3551f, 24.193195f, 19.75f, false, true, 0))
								{
									if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[2 /*14*/], 1) > 20f)
									{
										Local_72[iVar3 /*7*/].f_2 = 1;
										Local_72[iVar3 /*7*/].f_4++;
									}
								}
							}
							break;
						case 1:
							if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[2 /*14*/], 1) < 15f)
								{
									Local_72[iVar3 /*7*/].f_2 = 0;
									Local_72[iVar3 /*7*/].f_4 = 0;
								}
							}
							break;
					}
					break;
				case 71:
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						if (!Local_72[iVar3 /*7*/].f_2)
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[2 /*14*/], 1) > 20f)
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
						else if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[2 /*14*/], 1) < 15f)
						{
							Local_72[iVar3 /*7*/].f_2 = 0;
						}
					}
					break;
				case 72:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (__LIB_0__::func_724(Local_94[2 /*14*/], -1071.4895f, -1672.0685f, 3.709275f, 1) < 48.75f)
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					break;
				case 73:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (__LIB_0__::func_724(Local_94[2 /*14*/], -1073.1094f, -1670.5283f, 3.468073f, 1) < 12.8125f)
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 74:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[1 /*2*/], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_95[1 /*2*/]))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_95[1 /*2*/]) > 5000f)
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				case 82:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						switch (Local_72[iVar3 /*7*/].f_4)
						{
							case 0:
								if (func_305(73))
								{
									if (__LIB_0__::func_501("ARM2_INS07b", 0, 0))
									{
										Local_72[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 1000;
										Local_72[iVar3 /*7*/].f_4++;
									}
								}
								break;
							case 1:
								if (MISC::GET_GAME_TIMER() > Local_72[iVar3 /*7*/].f_5)
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
								break;
							}
					}
					break;
				case 83:
					switch (Local_72[iVar3 /*7*/].f_4)
					{
						case 0:
							if (func_305(73))
							{
								Local_72[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 12000;
								Local_72[iVar3 /*7*/].f_4++;
							}
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_72[iVar3 /*7*/].f_5)
							{
								if (!func_305(75) && !func_305(76))
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
								else
								{
									Local_72[iVar3 /*7*/].f_2 = 0;
								}
							}
							break;
					}
					break;
				case 44:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_ANY")) == 7 || TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_ANY")) == 3)
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 43:
					if (ENTITY::DOES_ENTITY_EXIST(Local_95[1 /*2*/]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_94[4 /*14*/]))
						{
							if (!PED::IS_PED_INJURED(Local_94[4 /*14*/]))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_94[4 /*14*/], PLAYER::PLAYER_PED_ID(), true))
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
								if (!ENTITY::IS_ENTITY_DEAD(Local_95[1 /*2*/], false))
								{
									if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == Local_95[1 /*2*/])
									{
										if (((VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_95[1 /*2*/], 1) > 0f || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_95[1 /*2*/], 0) > 0f) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_95[1 /*2*/], 2) > 0f) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_95[1 /*2*/], 3) > 0f)
										{
											Local_72[iVar3 /*7*/].f_2 = 1;
										}
									}
								}
								if (PED::IS_PED_IN_COMBAT(Local_94[4 /*14*/], PLAYER::PLAYER_PED_ID()))
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
							}
							else
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
						if (iLocal_92 < 7)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_94[5 /*14*/]))
							{
								if (!PED::IS_PED_INJURED(Local_94[5 /*14*/]))
								{
									if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_94[5 /*14*/], PLAYER::PLAYER_PED_ID(), true))
									{
										Local_72[iVar3 /*7*/].f_2 = 1;
									}
									if (!ENTITY::IS_ENTITY_DEAD(Local_95[1 /*2*/], false))
									{
										if (!PED::IS_PED_IN_VEHICLE(Local_94[5 /*14*/], Local_95[1 /*2*/], false))
										{
											if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[5 /*14*/], 1) < 10f)
											{
												Local_72[iVar3 /*7*/].f_2 = 1;
											}
										}
									}
									if (PED::IS_PED_IN_COMBAT(Local_94[5 /*14*/], PLAYER::PLAYER_PED_ID()))
									{
										Local_72[iVar3 /*7*/].f_2 = 1;
									}
								}
								else
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_95[1 /*2*/], false))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_95[1 /*2*/], PLAYER::PLAYER_PED_ID(), true))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[1 /*2*/], false))
							{
								if (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95[1 /*2*/]) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_95[1 /*2*/]))
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				case 28:
					if (ENTITY::DOES_ENTITY_EXIST(Local_95[1 /*2*/]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_94[4 /*14*/]))
						{
							if (!PED::IS_PED_INJURED(Local_94[4 /*14*/]))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_94[4 /*14*/], PLAYER::PLAYER_PED_ID(), true))
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
								if (!ENTITY::IS_ENTITY_DEAD(Local_95[1 /*2*/], false))
								{
									if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == Local_95[1 /*2*/])
									{
										if (((VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_95[1 /*2*/], 1) > 0f || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_95[1 /*2*/], 0) > 0f) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_95[1 /*2*/], 2) > 0f) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_95[1 /*2*/], 3) > 0f)
										{
											Local_72[iVar3 /*7*/].f_2 = 1;
										}
									}
								}
								if (PED::IS_PED_IN_COMBAT(Local_94[4 /*14*/], PLAYER::PLAYER_PED_ID()))
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
							}
							else
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
						if (iLocal_92 < 7)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_94[5 /*14*/]))
							{
								if (!PED::IS_PED_INJURED(Local_94[5 /*14*/]))
								{
									if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_94[5 /*14*/], PLAYER::PLAYER_PED_ID(), true))
									{
										Local_72[iVar3 /*7*/].f_2 = 1;
									}
									if (!ENTITY::IS_ENTITY_DEAD(Local_95[1 /*2*/], false))
									{
										if (!PED::IS_PED_IN_VEHICLE(Local_94[5 /*14*/], Local_95[1 /*2*/], false))
										{
											if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[5 /*14*/], 1) < 10f)
											{
												Local_72[iVar3 /*7*/].f_2 = 1;
											}
										}
									}
									if (PED::IS_PED_IN_COMBAT(Local_94[5 /*14*/], PLAYER::PLAYER_PED_ID()))
									{
										Local_72[iVar3 /*7*/].f_2 = 1;
									}
								}
								else
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_95[1 /*2*/], false))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_95[1 /*2*/], PLAYER::PLAYER_PED_ID(), true))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[1 /*2*/], false))
							{
								if (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95[1 /*2*/]))
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				case 85:
					if (func_305(43))
					{
						if (Local_72[iVar3 /*7*/].f_5 == 0)
						{
							Local_72[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 4000;
						}
						else if (MISC::GET_GAME_TIMER() > Local_72[iVar3 /*7*/].f_5)
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 88:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_94[2 /*14*/], -1123.6735f, -1597.1025f, 3.37023f, -1118.749f, -1604.2703f, 6.259631f, 10.25f, false, true, 0))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 46:
					iVar12 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar12))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar12, false))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar12, -1130.1235f, -1589.1427f, 2.21117f, -1067.2261f, -1677.451f, 9.856807f, 33.0625f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar12, -1126.9999f, -1586.8467f, 2.961027f, -1132.1338f, -1590.4432f, 7.032865f, 1.4375f, false, true, 0))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						if (func_305(55))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
						else if (MISC::IS_BULLET_IN_ANGLED_AREA(-1067.5599f, -1677.3331f, 1.841916f, -1130.009f, -1588.9865f, 11.97924f, 33.125f, true))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					iVar13 = 0;
					if (PLAYER::GET_PLAYER_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar13))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar13))
						{
							iVar14 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar13);
							if (!PED::IS_PED_INJURED(iVar14))
							{
								if (iVar14 == Local_94[4 /*14*/] || iVar14 == Local_94[5 /*14*/])
								{
									if (MISC::ABSF(__LIB_16__::func_325(iVar14, PLAYER::PLAYER_PED_ID())) < 70f)
									{
										if (__LIB_0__::func_76(iVar14, PLAYER::PLAYER_PED_ID(), 1) < 30f)
										{
											Local_72[iVar3 /*7*/].f_2 = 1;
										}
									}
								}
							}
						}
					}
					if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar13))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar13))
						{
							iVar15 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar13);
							if (!PED::IS_PED_INJURED(iVar15))
							{
								if (iVar15 == Local_94[4 /*14*/] || iVar15 == Local_94[5 /*14*/])
								{
									if (MISC::ABSF(__LIB_16__::func_325(iVar15, PLAYER::PLAYER_PED_ID())) < 70f)
									{
										if (__LIB_0__::func_76(iVar15, PLAYER::PLAYER_PED_ID(), 1) < 30f)
										{
											Local_72[iVar3 /*7*/].f_2 = 1;
										}
									}
								}
							}
						}
					}
					break;
				case 75:
					if (iLocal_81 == 1)
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					break;
				case 76:
					if (iLocal_81 == 2)
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					break;
				case 91:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (__LIB_15__::func_965("ARM2_GET"))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 92:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						switch (Local_72[iVar3 /*7*/].f_4)
						{
							case 0:
								if (__LIB_15__::func_965("ARM2_ATTACK"))
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
								break;
							case 1:
								if (!__LIB_15__::func_965("ARM2_ATTACK"))
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
								break;
							}
					}
					break;
				case 94:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (!OBJECT::DOES_PICKUP_EXIST(iLocal_227) || func_570(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (OBJECT::DOES_PICKUP_EXIST(iLocal_227))
							{
								HUD::REMOVE_BLIP(&iLocal_245);
							}
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 93:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1074.7802f, -1676.1974f, 3.137903f, -1080.7532f, -1680.3275f, 5.637903f, 7f, false, true, 0))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 95:
					if (!Local_72[iVar3 /*7*/].f_2 == 1)
					{
						switch (Local_72[iVar3 /*7*/].f_4)
						{
							case 0:
								if (__LIB_0__::func_501("ARM2_INS09", 0, 0))
								{
									Local_72[iVar3 /*7*/].f_4++;
								}
								break;
							case 1:
								if (!__LIB_0__::func_501("ARM2_INS09", 0, 0))
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
								break;
							}
					}
					break;
				case 96:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1066.2811f, -1677.0483f, -0.401059f, -1076.836f, -1663.6277f, 5.898672f, 27.8125f, false, true, 0))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 97:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (func_569() <= 1)
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					break;
				case 98:
					if (!PED::IS_PED_INJURED(Local_94[11 /*14*/]))
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					break;
				case 99:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (func_569() == 0)
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					break;
				case 100:
					if ((((ENTITY::DOES_ENTITY_EXIST(Local_94[9 /*14*/]) && PED::IS_PED_INJURED(Local_94[9 /*14*/])) && (ENTITY::DOES_ENTITY_EXIST(Local_94[9 /*14*/]) && PED::IS_PED_INJURED(Local_94[10 /*14*/]))) && (ENTITY::DOES_ENTITY_EXIST(Local_94[9 /*14*/]) && PED::IS_PED_INJURED(Local_94[11 /*14*/]))) && (ENTITY::DOES_ENTITY_EXIST(Local_94[9 /*14*/]) && PED::IS_PED_INJURED(Local_94[12 /*14*/])))
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					break;
				case 101:
					break;
				case 102:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_94[13 /*14*/]))
						{
							switch (Local_72[iVar3 /*7*/].f_4)
							{
								case 0:
									if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
									{
										if (PED::IS_PED_SHOOTING(Local_94[13 /*14*/]))
										{
											Local_72[iVar3 /*7*/].f_2 = 1;
										}
									}
									break;
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(Local_94[13 /*14*/]))
						{
							Local_72[iVar3 /*7*/].f_2 = 0;
						}
					}
					else if (PED::IS_PED_INJURED(Local_94[13 /*14*/]))
					{
						Local_72[iVar3 /*7*/].f_2 = 0;
					}
					break;
				case 108:
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						if (PED::IS_PED_IN_COVER(Local_94[2 /*14*/], false))
						{
							if (__LIB_0__::func_724(Local_94[2 /*14*/], -1085.6464f, -1655.8777f, 3.687f, 1) < 3f)
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 105:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_94[13 /*14*/]))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 107:
					if (func_464(10, 55))
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					break;
				case 106:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (func_305(107))
					{
						if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1085.2633f, -1656.0336f, 3.3987f, 1) < 1.5f)
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 104:
					if (func_464(12, 58))
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					break;
				case 109:
					if (!PED::IS_PED_INJURED(Local_94[13 /*14*/]))
					{
						Var16 = { ENTITY::GET_ENTITY_COORDS(Local_94[13 /*14*/], true) };
						if (Var16.f_2 < 6.6f)
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 110:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (func_305(105))
						{
							if ((((PED::IS_PED_INJURED(Local_94[13 /*14*/]) && PED::IS_PED_INJURED(Local_94[9 /*14*/])) && PED::IS_PED_INJURED(Local_94[10 /*14*/])) && PED::IS_PED_INJURED(Local_94[11 /*14*/])) && PED::IS_PED_INJURED(Local_94[12 /*14*/]))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 111:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						Var17 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1062.1962f, -1672.2826f, 2.088862f, -1090.9015f, -1644.2001f, 17.336174f, 48.3125f, false, true, 0) || Var17.f_2 > 6f)
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 112:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (func_305(110))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_94[16 /*14*/]))
							{
								if (PED::IS_PED_INJURED(Local_94[16 /*14*/]))
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				case 113:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (func_305(110))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_94[18 /*14*/]))
							{
								if (PED::IS_PED_INJURED(Local_94[18 /*14*/]))
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				case 114:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (func_305(110))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_94[19 /*14*/]))
							{
								if (PED::IS_PED_INJURED(Local_94[19 /*14*/]))
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				case 115:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (((ENTITY::DOES_ENTITY_EXIST(Local_94[21 /*14*/]) && ENTITY::DOES_ENTITY_EXIST(Local_94[18 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_94[19 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_94[16 /*14*/]))
						{
							if (((PED::IS_PED_INJURED(Local_94[21 /*14*/]) && PED::IS_PED_INJURED(Local_94[18 /*14*/])) && PED::IS_PED_INJURED(Local_94[19 /*14*/])) && PED::IS_PED_INJURED(Local_94[16 /*14*/]))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 121:
					if (func_305(110) && func_305(115))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_94[22 /*14*/]) && ENTITY::DOES_ENTITY_EXIST(Local_94[24 /*14*/]))
						{
							if (PED::IS_PED_INJURED(Local_94[22 /*14*/]) && PED::IS_PED_INJURED(Local_94[24 /*14*/]))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 122:
					if (ENTITY::DOES_ENTITY_EXIST(Local_94[22 /*14*/]) && ENTITY::DOES_ENTITY_EXIST(Local_94[24 /*14*/]))
					{
						iVar18 = Local_72[iVar3 /*7*/].f_5;
						Local_72[iVar3 /*7*/].f_5 = 0;
						if (!PED::IS_PED_INJURED(Local_94[22 /*14*/]))
						{
							Local_72[iVar3 /*7*/].f_5++;
						}
						if (!PED::IS_PED_INJURED(Local_94[24 /*14*/]))
						{
							Local_72[iVar3 /*7*/].f_5++;
						}
						if (Local_72[iVar3 /*7*/].f_5 < iVar18)
						{
							if (Local_72[iVar3 /*7*/].f_4 != 0)
							{
								if ((MISC::GET_GAME_TIMER() - Local_72[iVar3 /*7*/].f_4) < 400)
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, -1107.71f, -1629.62f, 3.57f, 5f))
						{
							Local_72[iVar3 /*7*/].f_4 = MISC::GET_GAME_TIMER();
						}
					}
					break;
				case 116:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (func_305(110))
						{
							if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_94[2 /*14*/], -1083.3032f, -1651.2501f, 1.586172f, -1086.8568f, -1646.7357f, 6.398672f, 5.625f, false, true, 0))
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				case 117:
					switch (Local_72[iVar3 /*7*/].f_4)
					{
						case 0:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[6 /*2*/], false))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_95[6 /*2*/]))
								{
									Local_72[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 1000;
									Local_72[iVar3 /*7*/].f_4++;
								}
							}
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_72[iVar3 /*7*/].f_5)
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
								Local_72[iVar3 /*7*/].f_4++;
							}
							break;
					}
					break;
				case 118:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[6 /*2*/], false) && !PED::IS_PED_INJURED(Local_94[20 /*14*/]))
					{
						if (__LIB_1__::func_606(Local_94[20 /*14*/], Local_95[6 /*2*/], -1))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					else
					{
						Local_72[iVar3 /*7*/].f_2 = 0;
					}
					break;
				case 119:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						switch (Local_72[iVar3 /*7*/].f_4)
						{
							case 0:
								if (func_305(111))
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
								else if (func_305(115))
								{
									if (func_305(118))
									{
										if (func_305(117))
										{
											Local_72[iVar3 /*7*/].f_4++;
											Local_72[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 2000;
										}
									}
									else
									{
										Local_72[iVar3 /*7*/].f_2 = 1;
									}
								}
								break;
							case 1:
								if (MISC::GET_GAME_TIMER() > Local_72[iVar3 /*7*/].f_5)
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
								break;
							}
					}
					break;
				case 120:
					if (func_305(115))
					{
						if (func_489(56))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 135:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (func_307(17, 58))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 134:
				case 41:
					switch (Local_72[iVar3 /*7*/].f_4)
					{
						case 0:
							if (iLocal_92 == 9)
							{
								Local_72[iVar3 /*7*/].f_4++;
							}
							else if (func_305(117))
							{
								Local_72[iVar3 /*7*/].f_4++;
							}
							break;
						case 1:
							if (bLocal_91)
							{
								if (Local_72[iVar3 /*7*/].f_5 != 0)
								{
									if (MISC::GET_GAME_TIMER() > Local_72[iVar3 /*7*/].f_5)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[6 /*2*/], false))
										{
											if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_95[6 /*2*/]))
											{
												Local_72[iVar3 /*7*/].f_2 = 1;
											}
										}
									}
								}
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[6 /*2*/], false))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_95[6 /*2*/]))
								{
									Var19 = { 0f, 0f, 0f };
									FIRE::GET_CLOSEST_FIRE_POS(&Var19, ENTITY::GET_ENTITY_COORDS(Local_95[6 /*2*/], true));
									if (__LIB_0__::func_724(Local_95[6 /*2*/], Var19, 1) < 3f)
									{
										Local_72[iVar3 /*7*/].f_2 = 1;
									}
								}
								else if (Local_72[iVar3 /*7*/].f_5 == 0)
								{
									Local_72[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 7000;
								}
							}
							break;
					}
					break;
				case 123:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_94[2 /*14*/], -1119.603f, -1625.5784f, 3.098616f, -1101.0157f, -1613.749f, 11.687337f, 7.5f, false, true, 0) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1105.9408f, -1627.4116f, 2.648617f, -1083.9928f, -1658.7023f, 7.711175f, 25.9375f, false, true, 0))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 124:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (func_567(6, 46))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 125:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						iVar20 = joaat("WEAPON_UNARMED");
						if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar20, true))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 126:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 127:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[6 /*2*/], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_95[6 /*2*/]))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_95[6 /*2*/]) > 4503f)
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				case 128:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[6 /*2*/], false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95[6 /*2*/], true))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
						else
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 129:
					switch (Local_72[iVar3 /*7*/].f_4)
					{
						case 0:
							if (OBJECT::DOES_PICKUP_EXIST(iLocal_226))
							{
								Local_72[iVar3 /*7*/].f_4++;
							}
							break;
						case 1:
							if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_226))
							{
								Local_72[iVar3 /*7*/].f_4++;
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
							break;
					}
					break;
				case 131:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (OBJECT::DOES_PICKUP_EXIST(iLocal_226))
					{
						if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), OBJECT::GET_PICKUP_COORDS(iLocal_226), 1) < 10f)
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 132:
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[2 /*14*/], 1) > 40f)
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					break;
				case 133:
					if (func_305(121))
					{
						Local_72[iVar3 /*7*/].f_2 = 0;
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[2 /*14*/], 1) > 17f)
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 30:
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_94[2 /*14*/], -1126.6207f, -1585.5457f, 2.137227f, -1132.6566f, -1589.7505f, 15.009974f, 1.625f, false, true, 0))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 32:
					switch (Local_72[iVar3 /*7*/].f_4)
					{
						case 0:
							if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
							{
								if (PED::IS_PED_IN_GROUP(Local_94[2 /*14*/]))
								{
									Local_72[iVar3 /*7*/].f_4++;
									Local_72[iVar3 /*7*/].f_2 = 0;
								}
							}
							break;
						case 1:
							if (!PED::IS_PED_IN_GROUP(Local_94[2 /*14*/]))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
								Local_72[iVar3 /*7*/].f_4 = 0;
							}
							break;
					}
					break;
				case 33:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
						{
							if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[2 /*14*/], 1) < 25f)
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				case 34:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[4 /*2*/], false))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_95[4 /*2*/], (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) * 4.5f), (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) * 4.5f), 20f, false, true, 0))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 35:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_94[8 /*14*/]))
						{
							if (PED::IS_PED_BEING_JACKED(Local_94[8 /*14*/]))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 36:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[2 /*14*/], 1) > 20f)
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 38:
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1068.804f, -1672.535f, 1.794577f, -1129.4589f, -1588.8394f, 18.698132f, 42.9375f, false, true, 0))
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					break;
				case 39:
					switch (Local_72[iVar3 /*7*/].f_4)
					{
						case 0:
							Local_72[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 15000;
							Local_72[iVar3 /*7*/].f_4++;
							break;
						case 1:
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								Local_72[iVar3 /*7*/].f_4++;
							}
							else if (MISC::GET_GAME_TIMER() > Local_72[iVar3 /*7*/].f_5)
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
							break;
					}
					break;
				case 40:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (func_305(30) && func_305(38))
						{
							if (((func_305(13) || func_305(14)) || func_305(36)) || func_305(12))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 37:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_94[8 /*14*/]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[4 /*2*/], false))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_94[8 /*14*/], Local_95[4 /*2*/], false))
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
						else
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 145:
					if (!Local_72[iVar3 /*7*/].f_2)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[4 /*2*/], false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95[4 /*2*/], false))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 154:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[4 /*2*/], false))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95[4 /*2*/], false))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 155:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[4 /*2*/], false))
					{
						if (__LIB_0__::func_724(Local_95[4 /*2*/], -12.81f, -1402.07f, 28.32f, 1) > 18f)
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 138:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_94[2 /*14*/], false))
						{
							iVar21 = PED::GET_VEHICLE_PED_IS_USING(Local_94[2 /*14*/]);
							if (PED::IS_PED_SITTING_IN_VEHICLE(Local_94[2 /*14*/], iVar21))
							{
								if (__LIB_2__::func_837(Local_94[2 /*14*/], iVar21) != -1)
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar21))
									{
										if (__LIB_2__::func_837(PLAYER::PLAYER_PED_ID(), iVar21) == -1)
										{
											Local_72[iVar3 /*7*/].f_2 = 1;
										}
									}
								}
							}
						}
					}
					break;
				case 139:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_94[2 /*14*/], false))
						{
							iVar22 = PED::GET_VEHICLE_PED_IS_USING(Local_94[2 /*14*/]);
							if (PED::IS_PED_SITTING_IN_VEHICLE(Local_94[2 /*14*/], iVar22))
							{
								if (__LIB_2__::func_837(Local_94[2 /*14*/], iVar22) != -1)
								{
									if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar22, false))
									{
										Local_72[iVar3 /*7*/].f_2 = 1;
									}
								}
							}
						}
					}
					break;
				case 141:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_94[2 /*14*/], true))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 143:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_94[2 /*14*/], false))
						{
							iVar23 = PED::GET_VEHICLE_PED_IS_IN(Local_94[2 /*14*/], false);
							if (PED::IS_PED_SITTING_IN_VEHICLE(Local_94[2 /*14*/], iVar23))
							{
								if (__LIB_2__::func_837(Local_94[2 /*14*/], iVar23) == -1)
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
							}
							if (Local_95[8 /*2*/] != iVar23)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_95[8 /*2*/]))
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_95[8 /*2*/]) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_95[8 /*2*/], false))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_95[8 /*2*/], true, true);
									}
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_95[8 /*2*/]));
								}
								Local_95[8 /*2*/] = iVar23;
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[8 /*2*/], false))
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_95[8 /*2*/]) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_95[8 /*2*/], false))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_95[8 /*2*/], true, true);
									}
									VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_95[8 /*2*/], true);
								}
							}
						}
					}
					break;
				case 146:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_94[2 /*14*/]))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
						if (((TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT")) == 2) || TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 2)
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 144:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						if ((TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_ANY")) == 7 || TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_ANY")) == 3) || TASK::GET_SCRIPT_TASK_STATUS(Local_94[2 /*14*/], joaat("SCRIPT_TASK_WANDER_STANDARD")) == 1)
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 142:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (ENTITY::DOES_ENTITY_EXIST(Local_95[8 /*2*/]))
					{
						if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[8 /*2*/], false) || func_264(7, 118))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
						else if (ENTITY::IS_ENTITY_UPSIDEDOWN(Local_95[8 /*2*/]))
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[8 /*2*/], false))
						{
							iVar24 = ENTITY::GET_ENTITY_MODEL(Local_95[8 /*2*/]);
							if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar24) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar24))
							{
								Local_72[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				case 147:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						iVar25 = PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(Local_94[2 /*14*/]);
					}
					iVar26 = iVar25;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar26, false))
					{
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							if (Local_72[iVar3 /*7*/].f_6 == 0f)
							{
								Local_72[iVar3 /*7*/].f_6 = __LIB_0__::func_76(Local_94[2 /*14*/], iVar26, 1);
							}
							else
							{
								if (__LIB_0__::func_76(Local_94[2 /*14*/], iVar26, 1) > Local_72[iVar3 /*7*/].f_6)
								{
									Local_72[iVar3 /*7*/].f_5 = (Local_72[iVar3 /*7*/].f_5 + SYSTEM::FLOOR((SYSTEM::TIMESTEP() * 1000f)));
									Local_72[iVar3 /*7*/].f_6 = __LIB_0__::func_76(Local_94[2 /*14*/], iVar26, 1);
								}
								else
								{
									Local_72[iVar3 /*7*/].f_6 = __LIB_0__::func_76(Local_94[2 /*14*/], iVar26, 1);
									Local_72[iVar3 /*7*/].f_5 = 0;
								}
								if (Local_72[iVar3 /*7*/].f_5 > 4000)
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					else
					{
						Local_72[iVar3 /*7*/].f_6 = 0f;
						Local_72[iVar3 /*7*/].f_5 = 0;
					}
					break;
				case 148:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[4 /*2*/], false))
					{
						switch (Local_72[iVar3 /*7*/].f_4)
						{
							case 0:
								VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_95[4 /*2*/]);
								Local_72[iVar3 /*7*/].f_4++;
								break;
							case 1:
								if (ENTITY::IS_ENTITY_UPSIDEDOWN(Local_95[4 /*2*/]))
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
								break;
							}
					}
					break;
				case 149:
					Local_72[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						if (__LIB_0__::func_76(Local_94[2 /*14*/], PLAYER::PLAYER_PED_ID(), 1) > 10f)
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 150:
					if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
					{
						if (__LIB_0__::func_76(Local_94[2 /*14*/], PLAYER::PLAYER_PED_ID(), 1) > 100f)
						{
							Local_72[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				case 151:
					if (func_488(1, 26))
					{
						Local_72[iVar3 /*7*/].f_2 = 1;
					}
					break;
				case 153:
					switch (Local_72[iVar3 /*7*/].f_4)
					{
						case 0:
							if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
							{
								if (__LIB_0__::func_724(Local_94[2 /*14*/], -4.03f, -1401.22f, 28.28f, 1) < 5f)
								{
									Local_72[iVar3 /*7*/].f_4++;
								}
							}
							break;
						case 1:
							if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
							{
								Local_72[iVar3 /*7*/].f_2 = 0;
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_94[2 /*14*/], 1) < 8f)
								{
									Local_72[iVar3 /*7*/].f_2 = 1;
								}
							}
							break;
					}
					break;
				}
		}
		iVar3++;
	}
}

int func_567(int iParam0, int iParam1)//Position - 0x572AA
{
	if (Local_66[iParam0 /*6*/] == iParam1)
	{
		if (Local_66[iParam0 /*6*/].f_2 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_569()//Position - 0x5730C
{
	int iVar0;
	if (iLocal_88)
	{
		iLocal_88 = 0;
		iLocal_89 = 0;
		iVar0 = 0;
		while (iVar0 < Local_94.f_0)
		{
			if (!PED::IS_PED_INJURED(Local_94[iVar0 /*14*/]))
			{
				if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_94[iVar0 /*14*/]) == iLocal_98)
				{
					iLocal_89++;
				}
			}
			iVar0++;
		}
	}
	return iLocal_89;
}

int func_570(int iParam0, bool bParam1)//Position - 0x57361
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (((((((((((((((((((((((((((((((((((((((((func_571(iParam0, joaat("WEAPON_PISTOL")) || func_571(iParam0, joaat("WEAPON_COMBATPISTOL"))) || func_571(iParam0, joaat("WEAPON_APPISTOL"))) || func_571(iParam0, joaat("WEAPON_SNSPISTOL"))) || func_571(iParam0, joaat("WEAPON_HEAVYPISTOL"))) || func_571(iParam0, joaat("WEAPON_MARKSMANPISTOL"))) || func_571(iParam0, joaat("WEAPON_MACHINEPISTOL"))) || func_571(iParam0, joaat("WEAPON_MICROSMG"))) || func_571(iParam0, joaat("WEAPON_SMG"))) || func_571(iParam0, joaat("WEAPON_COMBATPDW"))) || func_571(iParam0, joaat("WEAPON_ASSAULTRIFLE"))) || func_571(iParam0, joaat("WEAPON_CARBINERIFLE"))) || func_571(iParam0, joaat("WEAPON_SPECIALCARBINE"))) || func_571(iParam0, joaat("WEAPON_ADVANCEDRIFLE"))) || func_571(iParam0, joaat("WEAPON_BULLPUPRIFLE"))) || func_571(iParam0, joaat("WEAPON_GUSENBERG"))) || func_571(iParam0, joaat("WEAPON_MUSKET"))) || func_571(iParam0, joaat("WEAPON_COMPACTRIFLE"))) || func_571(iParam0, joaat("WEAPON_MG"))) || func_571(iParam0, joaat("WEAPON_COMBATMG"))) || func_571(iParam0, joaat("WEAPON_PUMPSHOTGUN"))) || func_571(iParam0, joaat("WEAPON_SAWNOFFSHOTGUN"))) || func_571(iParam0, joaat("WEAPON_ASSAULTSHOTGUN"))) || func_571(iParam0, joaat("WEAPON_HEAVYSHOTGUN"))) || func_571(iParam0, joaat("WEAPON_DBSHOTGUN"))) || func_571(iParam0, joaat("WEAPON_SNIPERRIFLE"))) || func_571(iParam0, joaat("WEAPON_HEAVYSNIPER"))) || func_571(iParam0, joaat("WEAPON_REMOTESNIPER"))) || func_571(iParam0, joaat("WEAPON_MARKSMANRIFLE"))) || func_571(iParam0, joaat("WEAPON_GRENADELAUNCHER"))) || func_571(iParam0, joaat("WEAPON_GRENADELAUNCHER_SMOKE"))) || func_571(iParam0, joaat("WEAPON_RPG"))) || func_571(iParam0, joaat("WEAPON_MINIGUN"))) || func_571(iParam0, joaat("WEAPON_HOMINGLAUNCHER"))) || func_571(iParam0, joaat("WEAPON_STUNGUN"))) || func_571(iParam0, joaat("WEAPON_PETROLCAN"))) || func_571(iParam0, joaat("WEAPON_DIGISCANNER"))) || func_571(iParam0, joaat("WEAPON_FIREWORK"))) || func_571(iParam0, joaat("WEAPON_FLAREGUN"))) || func_571(iParam0, joaat("WEAPON_COMPACTLAUNCHER"))) || func_571(iParam0, joaat("WEAPON_AUTOSHOTGUN"))) || func_571(iParam0, joaat("WEAPON_MINISMG")))
	{
		return 1;
	}
	if (bParam1)
	{
		if (((((func_571(iParam0, joaat("WEAPON_GRENADE")) || func_571(iParam0, joaat("WEAPON_SMOKEGRENADE"))) || func_571(iParam0, joaat("WEAPON_STICKYBOMB"))) || func_571(iParam0, joaat("WEAPON_MOLOTOV"))) || func_571(iParam0, joaat("WEAPON_PROXMINE"))) || func_571(iParam0, joaat("WEAPON_PIPEBOMB")))
		{
			return 1;
		}
	}
	return 0;
}

int func_571(int iParam0, int iParam1)//Position - 0x576AE
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (WEAPON::IS_WEAPON_VALID(iParam1))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, false))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iParam1) > 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_574(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x57751
{
	struct<3> Var0;
	float fVar1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
		Var0 = { __LIB_0__::func_79(Var0) };
		Var0 = { Var0 * Vector(fParam3, fParam3, fParam3) };
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(iParam0, true) + Var0, fParam4, false, false, 0))
		{
			fVar1 = __LIB_0__::func_76(iParam0, iParam1, 1);
			if ((fVar1 / ENTITY::GET_ENTITY_SPEED(iParam0)) < fParam5 || fParam5 <= 0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_575()//Position - 0x577DD
{
	func_566(5, 45);
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	func_350(0, 92, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(1, 93, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(2, 94, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(3, 95, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(4, 96, 0, 2, 40, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(5, 98, 0, 2, 35, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(6, 99, 0, 2, 37, 5, 35, 1, 0, 1, 0, 1, 0);
	func_350(7, 100, 0, 3, 37, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(8, 101, 0, 2, 6, 5, 37, 1, 0, 1, 0, 1, 0);
	func_350(9, 102, 0, 2, 37, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(10, 103, 1, 3, 30, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(11, 104, 0, 2, 30, 5, 36, 4, 33, 1, 0, 1, 0);
	func_350(12, 97, 0, 2, 34, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(13, 15, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(14, 8, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(15, 81, 0, 2, 41, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(16, 88, 0, 2, 37, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(17, 89, 0, 2, 38, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(18, 90, 0, 2, 6, 1, 0, 1, 0, 1, 0, 1, 0);
	func_487(0, 19, 0, 0, 1, 0, 1, 0);
	func_487(1, 23, 0, 0, 1, 0, 1, 0);
	func_487(2, 20, 0, 0, 1, 0, 1, 0);
	func_487(3, 21, 2, 6, 1, 0, 1, 0);
	func_487(4, 22, 3, 6, 1, 0, 1, 0);
	func_308(0, 63, 0, 0, 1, 0, 1, 0, 1, 0);
	func_308(1, 1, 0, 0, 1, 0, 1, 0, 1, 0);
	func_308(2, 68, 2, 15, 4, 31, 1, 0, 1, 0);
	func_308(3, 7, 2, 17, 6, 12, 4, 31, 1, 0);
	func_308(4, 64, 2, 16, 4, 31, 1, 0, 1, 0);
	func_308(5, 65, 2, 13, 5, 7, 1, 0, 1, 0);
	func_308(6, 66, 0, 0, 1, 0, 1, 0, 1, 0);
	func_308(7, 67, 2, 39, 1, 0, 1, 0, 1, 0);
	func_265(8, 0, 0, 1, 0);
	func_265(6, 0, 0, 1, 0);
	func_265(9, 0, 0, 1, 0);
	if (func_305(37))
	{
		func_605(9);
		__LIB_0__::func_345(&uLocal_270, 0, 0);
		return 1;
	}
	return 0;
}

int func_576()//Position - 0x57A4F
{
	iLocal_88 = 1;
	func_566(90, 136);
	func_350(0, 66, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(1, 65, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(2, 54, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(8, 63, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(28, 82, 0, 2, 124, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(29, 83, 0, 2, 117, 4, 120, 4, 127, 1, 0, 1, 0);
	func_350(31, 85, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(32, 86, 0, 2, 128, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(33, 87, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(34, 91, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(3, 52, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_578(7, 53, 3, 52, 2, 98, 1, 0, 1, 0);
	func_578(10, 55, 7, 53, 2, 98, 4, 99, 6, 96);
	func_350(12, 58, 0, 2, 102, 4, 108, 1, 0, 1, 0, 1, 0);
	func_350(13, 56, 0, 2, 106, 4, 107, 1, 0, 1, 0, 1, 0);
	func_350(35, 57, 0, 2, 101, 5, 110, 1, 0, 1, 0, 1, 0);
	func_350(14, 59, 0, 2, 110, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(20, 60, 0, 2, 110, 4, 113, 1, 0, 1, 0, 1, 0);
	func_350(30, 61, 0, 2, 117, 5, 121, 1, 0, 1, 0, 1, 0);
	func_350(27, 62, 0, 2, 121, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(4, 67, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(5, 68, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(6, 69, 0, 2, 92, 4, 97, 6, 96, 1, 0, 1, 0);
	func_350(9, 70, 0, 2, 98, 4, 97, 6, 96, 1, 0, 1, 0);
	func_350(11, 71, 0, 2, 98, 4, 99, 6, 96, 1, 0, 1, 0);
	func_350(15, 72, 0, 2, 109, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(16, 73, 0, 2, 110, 6, 111, 1, 0, 1, 0, 1, 0);
	func_350(17, 74, 0, 2, 110, 4, 112, 6, 111, 1, 0, 1, 0);
	func_350(18, 75, 0, 2, 110, 4, 113, 6, 111, 1, 0, 1, 0);
	func_350(19, 76, 0, 2, 110, 4, 114, 6, 111, 1, 0, 1, 0);
	func_350(21, 77, 0, 2, 110, 6, 111, 1, 0, 1, 0, 1, 0);
	func_350(22, 78, 0, 2, 110, 4, 118, 4, 115, 8, 119, 4, 118);
	func_350(23, 84, 0, 2, 119, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(24, 79, 0, 2, 117, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(25, 80, 0, 2, 118, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(26, 81, 0, 2, 134, 1, 0, 1, 0, 1, 0, 1, 0);
	func_308(2, 43, 3, 94, 1, 0, 1, 0, 1, 0);
	func_308(0, 40, 0, 0, 1, 0, 1, 0, 1, 0);
	func_308(1, 41, 2, 91, 4, 94, 1, 0, 1, 0);
	func_308(3, 42, 2, 94, 5, 93, 4, 95, 1, 0);
	func_308(4, 44, 2, 98, 1, 0, 1, 0, 1, 0);
	func_308(5, 48, 2, 92, 5, 103, 5, 121, 1, 0);
	func_308(6, 46, 2, 104, 5, 101, 5, 109, 5, 130);
	func_308(7, 47, 2, 101, 5, 109, 5, 130, 1, 0);
	func_308(8, 45, 2, 105, 5, 96, 5, 101, 5, 110);
	func_308(9, 49, 2, 101, 4, 108, 1, 0, 1, 0);
	func_308(23, 50, 2, 110, 1, 0, 1, 0, 1, 0);
	func_308(10, 51, 2, 110, 4, 116, 1, 0, 1, 0);
	func_308(11, 52, 2, 112, 5, 113, 1, 0, 1, 0);
	func_308(12, 53, 2, 113, 5, 114, 1, 0, 1, 0);
	func_308(13, 54, 2, 114, 5, 115, 1, 0, 1, 0);
	func_308(14, 55, 2, 117, 1, 0, 1, 0, 1, 0);
	func_308(15, 56, 2, 119, 1, 0, 1, 0, 1, 0);
	func_308(16, 57, 2, 127, 5, 121, 1, 0, 1, 0);
	func_308(17, 58, 2, 121, 5, 133, 1, 0, 1, 0);
	func_308(18, 60, 2, 122, 1, 0, 1, 0, 1, 0);
	func_308(19, 61, 2, 131, 4, 130, 1, 0, 1, 0);
	func_308(20, 62, 2, 132, 5, 121, 1, 0, 1, 0);
	func_308(21, 62, 2, 133, 4, 121, 5, 135, 1, 0);
	func_306(22, 59, 17, 58, 0, 0, 1, 0, 1, 0, 1, 0);
	func_487(0, 11, 0, 0, 1, 0, 1, 0);
	func_487(1, 12, 2, 92, 4, 94, 1, 0);
	func_487(2, 13, 2, 94, 1, 0, 1, 0);
	func_487(3, 15, 2, 125, 4, 126, 1, 0);
	func_487(4, 16, 2, 127, 1, 0, 1, 0);
	func_577(5, 14, 2, 13, 3, 126, 1, 0, 1, 0);
	func_487(6, 8, 3, 135, 1, 0, 1, 0);
	func_487(7, 17, 2, 129, 1, 0, 1, 0);
	func_265(6, 0, 0, 1, 0);
	func_265(9, 0, 0, 1, 0);
	if (func_264(27, 62))
	{
		return 1;
	}
	return 0;
}

void func_577(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x57F49
{
	if (Local_68[iParam0 /*4*/] != iParam1)
	{
		Local_68[iParam0 /*4*/] = iParam1;
		Local_68[iParam0 /*4*/].f_1 = 0;
		Local_68[iParam0 /*4*/].f_2 = 0;
		Local_68[iParam0 /*4*/].f_3 = 0;
	}
	if (Local_68[iParam0 /*4*/].f_1 == 0)
	{
		if (Local_68[iParam2 /*4*/].f_1)
		{
			iParam3 = iParam3;
			func_487(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
		}
	}
}

void func_578(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x57FB5
{
	if (Local_69[iParam0 /*10*/] != iParam1 || Local_69[iParam0 /*10*/].f_1 == 0)
	{
		Local_69[iParam0 /*10*/] = iParam1;
		Local_69[iParam0 /*10*/].f_1 = 1;
		Local_69[iParam0 /*10*/].f_2 = 0;
		Local_69[iParam0 /*10*/].f_3 = 0;
		Local_69[iParam0 /*10*/].f_6 = 0;
		Local_69[iParam0 /*10*/].f_4 = 0;
		Local_69[iParam0 /*10*/].f_7 = 0;
		Local_69[iParam0 /*10*/].f_8 = 0;
		Local_69[iParam0 /*10*/].f_9 = 0f;
	}
	if (Local_69[iParam0 /*10*/].f_3 == 0)
	{
		if (Local_69[iParam2 /*10*/].f_3)
		{
			iParam3 = iParam3;
			func_350(iParam0, iParam1, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 1, 0, 1, 0);
		}
	}
}

int func_579()//Position - 0x5806C
{
	func_350(1, 51, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	switch (iLocal_96)
	{
		case 0:
			func_605(6);
			PED::SET_CREATE_RANDOM_COPS(false);
			func_260();
			if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
			{
				PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_94[2 /*14*/], -8f);
			}
			if (!CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REQUEST_CUTSCENE("Arm_2_mcs_4", 8);
			}
			iLocal_96 = 1;
			break;
		case 1:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 1, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 2, 2, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 3, 2, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 4, 3, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 5, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 6, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 7, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 8, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 9, 0, 0, 0);
			}
			if (__LIB_0__::func_90())
			{
				func_468("ARM2_OPEN_DOOR", 0, "ARM2_FIGHT_START");
				iLocal_96 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_90())
			{
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
				{
				}
				if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_94[2 /*14*/], joaat("WEAPON_MICROSMG"), 2000, true, true);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_94[2 /*14*/], joaat("WEAPON_MICROSMG"), true);
					iLocal_212 = __LIB_42__::func_751(Local_94[2 /*14*/], 1, 0, 0, 0, 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Franklins_weapon", 2, WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_PISTOL")), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_212, "Lamars_weapon", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Mexgoon_1", 2, joaat("G_M_Y_MexGoon_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_94[2 /*14*/], "Lamar", 0, 0, 0);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_SEARCH_FOR_BIKE"))
				{
					AUDIO::STOP_AUDIO_SCENE("ARM_2_SEARCH_FOR_BIKE");
				}
				CUTSCENE::START_CUTSCENE(16);
				iLocal_54 = joaat("WEAPON_UNARMED");
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_54, true);
				if (HUD::DOES_BLIP_EXIST(iLocal_248))
				{
					HUD::REMOVE_BLIP(&iLocal_248);
				}
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
				RECORDING::REPLAY_START_EVENT(4);
				iLocal_96 = 3;
			}
			break;
		case 3:
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_202))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Mexgoon_1", 0)))
				{
					iLocal_202 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Mexgoon_1", 0));
				}
			}
			if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Local_94[2 /*14*/], joaat("WEAPON_MICROSMG"), true);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamars_weapon", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_212))
				{
					OBJECT::DELETE_OBJECT(&iLocal_212);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Local_94[2 /*14*/], WEAPON::GET_BEST_PED_WEAPON(Local_94[2 /*14*/], false), false);
			}
			if (!PED::IS_PED_INJURED(iLocal_202))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Mexgoon_1", joaat("G_M_Y_MexGoon_01")))
				{
					ENTITY::SET_ENTITY_HEALTH(iLocal_202, 0, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklins_weapon", 0))
			{
				iLocal_263 = 0;
				iLocal_227 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_PISTOL"), -1075.7982f, -1675.7168f, 3.5903f, -90f, 0f, -15f, 0, 145, 2, true, 0);
				if (!func_570(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_245 = __LIB_16__::func_324(iLocal_227);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1077.508f, -1677.0575f, 3.5752f, 1f, 20000, 0.25f, 1, 40000f);
			}
			func_350(0, 50, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
			if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
			}
			else
			{
				iLocal_96 = 4;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				RECORDING::REPLAY_STOP_EVENT();
				if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_94[2 /*14*/]);
				}
				__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-1069.3231f, -1668.1176f, 3.055831f, 8.5f, false, false, false, false, false, false, 0);
				CUTSCENE::REMOVE_CUTSCENE();
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_54, false);
				return 1;
			}
			break;
	}
	return 0;
}

int func_586()//Position - 0x589F4
{
	func_566(42, 89);
	if (iLocal_304 == 0)
	{
		func_350(0, 17, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		func_350(26, 16, 0, 2, 47, 1, 0, 1, 0, 1, 0, 1, 0);
		func_350(1, 19, 0, 2, 48, 1, 0, 1, 0, 1, 0, 1, 0);
		func_350(2, 20, 1, 2, 49, 5, 53, 1, 0, 1, 0, 1, 0);
		func_350(3, 21, 0, 2, 50, 5, 53, 5, 64, 1, 0, 1, 0);
		func_350(4, 22, 0, 2, 53, 4, 49, 1, 0, 1, 0, 1, 0);
		func_350(5, 23, 0, 2, 53, 6, 67, 1, 0, 1, 0, 1, 0);
		func_350(6, 24, 0, 2, 58, 5, 55, 5, 52, 1, 0, 1, 0);
		func_350(7, 25, 0, 2, 61, 5, 71, 1, 0, 1, 0, 1, 0);
		func_350(8, 26, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		func_350(9, 27, 0, 2, 62, 5, 64, 1, 0, 1, 0, 1, 0);
		func_350(11, 29, 0, 2, 64, 1, 0, 1, 0, 1, 0, 1, 0);
		func_350(12, 30, 0, 2, 68, 5, 64, 1, 0, 1, 0, 1, 0);
		func_350(13, 31, 0, 2, 64, 1, 0, 1, 0, 1, 0, 1, 0);
		func_350(14, 32, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		func_350(16, 35, 0, 2, 73, 1, 0, 1, 0, 1, 0, 1, 0);
		func_350(17, 37, 0, 2, 72, 1, 0, 1, 0, 1, 0, 1, 0);
		func_350(18, 49, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		func_350(20, 34, 0, 2, 73, 1, 0, 1, 0, 1, 0, 1, 0);
		func_350(21, 38, 0, 2, 78, 4, 82, 1, 0, 1, 0, 1, 0);
		func_350(22, 39, 0, 2, 79, 4, 82, 1, 0, 1, 0, 1, 0);
		func_350(23, 41, 1, 3, 80, 3, 82, 1, 0, 1, 0, 1, 0);
		func_350(24, 42, 0, 2, 66, 6, 51, 1, 0, 1, 0, 1, 0);
		func_350(25, 40, 0, 2, 80, 4, 82, 1, 0, 1, 0, 1, 0);
		func_350(27, 43, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		func_350(28, 44, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		func_350(29, 47, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		func_350(30, 45, 0, 2, 73, 1, 0, 1, 0, 1, 0, 1, 0);
		func_350(31, 46, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		func_350(10, 48, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		func_308(0, 13, 0, 0, 1, 0, 1, 0, 1, 0);
		func_306(1, 14, 0, 13, 2, 54, 5, 55, 5, 49, 5, 59);
		func_308(2, 15, 2, 48, 1, 0, 1, 0, 1, 0);
		func_308(3, 16, 2, 57, 5, 53, 4, 88, 1, 0);
		func_308(4, 17, 2, 52, 5, 53, 1, 0, 1, 0);
		func_308(5, 18, 2, 53, 5, 61, 1, 0, 1, 0);
		func_308(6, 19, 0, 0, 1, 0, 1, 0, 1, 0);
		func_308(7, 20, 2, 61, 5, 71, 5, 74, 1, 0);
		func_306(23, 39, 7, 20, 0, 0, 1, 0, 1, 0, 1, 0);
		func_308(8, 21, 2, 64, 1, 0, 1, 0, 1, 0);
		func_308(9, 22, 2, 64, 1, 0, 1, 0, 1, 0);
		func_308(10, 24, 7, 64, 1, 0, 1, 0, 1, 0);
		func_308(11, 25, 3, 61, 5, 64, 1, 0, 1, 0);
		func_308(12, 27, 2, 72, 5, 70, 5, 64, 1, 0);
		func_308(13, 28, 2, 73, 5, 71, 1, 0, 1, 0);
		func_308(14, 29, 2, 75, 1, 0, 1, 0, 1, 0);
		func_308(15, 30, 2, 76, 1, 0, 1, 0, 1, 0);
		func_308(17, 33, 2, 77, 1, 0, 1, 0, 1, 0);
		func_308(18, 34, 2, 81, 1, 0, 1, 0, 1, 0);
		func_308(20, 36, 2, 73, 1, 0, 1, 0, 1, 0);
		func_308(21, 23, 2, 43, 1, 0, 1, 0, 1, 0);
		func_308(22, 37, 2, 87, 1, 0, 1, 0, 1, 0);
		func_308(24, 38, 2, 86, 1, 0, 1, 0, 1, 0);
		func_487(0, 6, 2, 56, 1, 0, 1, 0);
		func_487(1, 7, 2, 73, 1, 0, 1, 0);
		func_487(2, 9, 0, 0, 1, 0, 1, 0);
		func_487(3, 8, 0, 0, 1, 0, 1, 0);
		func_487(4, 10, 2, 55, 5, 59, 1, 0);
	}
	else
	{
		func_350(15, 14, 0, 2, 46, 1, 0, 1, 0, 1, 0, 1, 0);
		func_308(16, 12, 2, 46, 1, 0, 1, 0, 1, 0);
	}
	func_265(1, 2, 84, 1, 0);
	func_265(3, 2, 69, 1, 0);
	func_265(4, 0, 0, 1, 0);
	func_265(6, 0, 0, 1, 0);
	func_265(2, 2, 43, 1, 0);
	func_265(9, 0, 0, 1, 0);
	func_265(12, 2, 46, 1, 0);
	func_265(15, 0, 0, 1, 0);
	if (func_264(25, 40))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_244))
		{
			HUD::REMOVE_BLIP(&iLocal_244);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_246))
		{
			HUD::REMOVE_BLIP(&iLocal_246);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_248))
		{
			HUD::REMOVE_BLIP(&iLocal_248);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_247))
		{
			HUD::REMOVE_BLIP(&iLocal_247);
		}
		__LIB_0__::func_325();
		HUD::CLEAR_PRINTS();
		func_260();
		return 1;
	}
	return 0;
}

int func_587()//Position - 0x58EE1
{
	func_566(1, 29);
	func_487(0, 1, 3, 26, 1, 0, 1, 0);
	func_487(1, 5, 0, 0, 1, 0, 1, 0);
	func_350(0, 3, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(11, 4, 1, 2, 23, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(2, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(3, 6, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(4, 7, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(5, 8, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(6, 9, 0, 2, 11, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(7, 10, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(8, 15, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(9, 11, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(10, 12, 0, 2, 20, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(1, 13, 0, 2, 20, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(12, 14, 0, 2, 24, 6, 25, 1, 0, 1, 0, 1, 0);
	func_350(13, 49, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(14, 35, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_350(15, 36, 0, 2, 4, 1, 0, 1, 0, 1, 0, 1, 0);
	func_308(0, 2, 0, 0, 1, 0, 1, 0, 1, 0);
	func_308(1, 1, 0, 0, 1, 0, 1, 0, 1, 0);
	func_308(2, 10, 0, 0, 1, 0, 1, 0, 1, 0);
	func_308(3, 5, 2, 18, 4, 2, 1, 0, 1, 0);
	func_308(4, 6, 2, 15, 4, 2, 1, 0, 1, 0);
	func_308(5, 7, 2, 17, 6, 12, 4, 2, 1, 0);
	func_308(6, 8, 2, 16, 4, 2, 1, 0, 1, 0);
	func_308(8, 3, 2, 13, 5, 7, 1, 0, 1, 0);
	func_308(9, 11, 2, 23, 1, 0, 1, 0, 1, 0);
	func_308(10, 12, 2, 24, 6, 25, 1, 0, 1, 0);
	func_265(6, 0, 0, 1, 0);
	func_265(5, 2, 21, 1, 0);
	func_265(9, 0, 0, 1, 0);
	func_265(10, 0, 0, 1, 0);
	func_265(14, 2, 27, 1, 0);
	func_265(12, 2, 25, 1, 0);
	func_265(2, 2, 28, 1, 0);
	if (func_488(0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_244))
		{
			HUD::CLEAR_GPS_MULTI_ROUTE();
			HUD::REMOVE_BLIP(&iLocal_244);
		}
		__LIB_16__::func_901(&Local_214);
		__LIB_31__::func_968(&Local_214, 1, 0);
		iLocal_244 = __LIB_0__::func_639(Local_94[2 /*14*/], 0, 0);
		if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_94[2 /*14*/]);
		}
		__LIB_0__::func_325();
		return 1;
	}
	return 0;
}

void func_588(int iParam0)//Position - 0x5916A
{
	int iVar0;
	if (iLocal_92 >= 2 && iLocal_92 < 6)
	{
		iParam0 = 6;
	}
	else if (iLocal_92 >= 7 && iLocal_92 <= 8)
	{
		iParam0 = 9;
	}
	else
	{
		iVar0 = iLocal_92;
		iVar0++;
	}
	if (iParam0 == 14)
	{
		iLocal_92 = iVar0;
	}
	else
	{
		iLocal_92 = iParam0;
	}
	func_592();
	func_591();
	func_590();
	func_589();
	iLocal_96 = 0;
}

void func_589()//Position - 0x591D7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_66.f_0)
	{
		Local_66[iVar0 /*6*/] = 0;
		Local_66[iVar0 /*6*/].f_1 = 0;
		Local_66[iVar0 /*6*/].f_3 = 0;
		Local_66[iVar0 /*6*/].f_2 = 0;
		iVar0++;
	}
}

void func_590()//Position - 0x59214
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_68.f_0)
	{
		Local_68[iVar0 /*4*/] = 0;
		Local_68[iVar0 /*4*/].f_1 = 0;
		Local_68[iVar0 /*4*/].f_2 = 0;
		Local_68[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
}

void func_591()//Position - 0x59256
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_69.f_0)
	{
		if (Local_69[iVar0 /*10*/].f_4)
		{
			Local_69[iVar0 /*10*/].f_1 = 1;
			Local_69[iVar0 /*10*/].f_6 = 99;
			func_350(iVar0, Local_69[iVar0 /*10*/], 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		}
		Local_69[iVar0 /*10*/] = 0;
		Local_69[iVar0 /*10*/].f_1 = 0;
		Local_69[iVar0 /*10*/].f_2 = 0;
		Local_69[iVar0 /*10*/].f_3 = 0;
		Local_69[iVar0 /*10*/].f_6 = 0;
		Local_69[iVar0 /*10*/].f_4 = 0;
		Local_69[iVar0 /*10*/].f_5 = 0;
		Local_69[iVar0 /*10*/].f_7 = 0;
		iVar0++;
	}
}

void func_592()//Position - 0x592F9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_72.f_0)
	{
		Local_72[iVar0 /*7*/] = 0;
		Local_72[iVar0 /*7*/].f_1 = 0;
		Local_72[iVar0 /*7*/].f_2 = 0;
		Local_72[iVar0 /*7*/].f_3 = 0;
		Local_72[iVar0 /*7*/].f_4 = 0;
		iVar0++;
	}
}

int func_593()//Position - 0x59345
{
	switch (iLocal_96)
	{
		case 0:
			sLocal_213 = "Armenian_2_int";
			func_260();
			CUTSCENE::REQUEST_CUTSCENE(sLocal_213, 8);
			iLocal_96 = 1002;
			break;
		case 1002:
			if (__LIB_0__::func_90())
			{
				func_162(10, 2, 0);
				func_126(10);
				func_162(11, 12, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
				{
					Local_94[3 /*14*/] = Global_96938.f_9[0];
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_94[3 /*14*/], true, true);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_94[3 /*14*/], "Siemon", 0, joaat("IG_SiemonYetarian"), 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Siemon", 2, joaat("IG_SiemonYetarian"), 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Lamar", 2, iLocal_249, 0);
				__LIB_41__::func_48(97, 0);
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				if (Global_97361)
				{
					__LIB_17__::func_467();
				}
				func_605(1);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
				SYSTEM::SETTIMERB(0);
				CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(false);
				if (__LIB_0__::func_2(0))
				{
					if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
				}
				iLocal_96 = 1005;
			}
			break;
		case 1004:
			if (func_26(10) && func_481(1))
			{
				CAM::STOP_GAMEPLAY_HINT(true);
				iLocal_96++;
			}
			break;
		case 1005:
			CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(true);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_94[2 /*14*/]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lamar", 0)))
				{
					Local_94[2 /*14*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lamar", 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_94[3 /*14*/]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Siemon", 0)))
				{
					Local_94[3 /*14*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Siemon", 0));
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				RECORDING::REPLAY_STOP_EVENT();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_94[2 /*14*/]))
			{
				if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", 0))
					{
						func_594(&uLocal_228, 0, 0, 2000, 0, 0, 0, 1);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_94[2 /*14*/], -25.945f, -1084.278f, 25.5736f, 1f, 20000, 0.1f, 8192, 40000f);
						}
						if (!PED::IS_PED_INJURED(Local_94[2 /*14*/]))
						{
							PED::FORCE_PED_MOTION_STATE(Local_94[2 /*14*/], joaat("MotionState_Walk"), false, 1, false);
						}
						PED::SET_PED_COMPONENT_VARIATION(Local_94[2 /*14*/], 1, 1, 0, 0);
						func_354(0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[2 /*14*/], false);
						iLocal_96++;
					}
				}
			}
			break;
		case 1006:
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_95[0 /*2*/], true, true, false);
				}
				PED::REMOVE_SCENARIO_BLOCKING_AREAS();
				func_162(1, 9, 0);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(25.859827f, -1098.9319f, -43.781937f) - Vector(2.5625f, 6.75f, 9.75f), Vector(25.859827f, -1098.9319f, -43.781937f) + Vector(2.5625f, 6.75f, 9.75f), true, true);
				return 1;
			}
			break;
	}
	return 0;
}

void func_594(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x5965D
{
	int iVar0;
	if (iParam4 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), 64);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
		}
	}
	if (!bParam1 && iParam6)
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(bParam1, bParam2, iParam3, true, false, 0);
	}
	if (bParam1)
	{
		HUD::CLEAR_HELP(true);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_4))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_4, false);
			}
			CAM::DESTROY_CAM(uParam0->f_4, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		}
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
	}
	__LIB_0__::func_532(bParam1, 1, 0, 0, 0, 0, 0);
	__LIB_13__::func_788();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	if (!bParam1)
	{
		if (Global_113386.f_32749.f_4801 != -15)
		{
			Global_113386.f_32749.f_4801 = __LIB_0__::func_464();
		}
	}
}

void func_598()//Position - 0x599A6
{
	int iVar0;
	if (iLocal_92 >= 1 && iLocal_92 <= 8)
	{
		iVar0 = 0;
		while (iVar0 < Local_94.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_94[iVar0 /*14*/]))
			{
				if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_94[iVar0 /*14*/]) == iLocal_98)
				{
					if (PED::IS_PED_INJURED(Local_94[iVar0 /*14*/]))
					{
						if (!Local_94[iVar0 /*14*/].f_13)
						{
							Local_94[iVar0 /*14*/].f_13 = 1;
							__LIB_0__::func_497(15, 1, 0);
						}
					}
					if (iLocal_92 < 7)
					{
						__LIB_0__::func_631(Local_94[iVar0 /*14*/], &(Local_94[iVar0 /*14*/].f_5), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
					}
					else
					{
						__LIB_0__::func_631(Local_94[iVar0 /*14*/], &(Local_94[iVar0 /*14*/].f_5), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_601()//Position - 0x59D09
{
	if (iLocal_52)
	{
		if (func_602())
		{
			iLocal_52 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_602()//Position - 0x59D2C
{
	int iVar0;
	iLocal_52 = 0;
	iVar0 = 0;
	while (iVar0 < Local_50.f_0)
	{
		if (Local_50[iVar0 /*3*/].f_2 == 2)
		{
			if (func_484(iVar0))
			{
				Local_50[iVar0 /*3*/].f_2 = 3;
				iLocal_53 = 0;
			}
		}
		else if (Local_50[iVar0 /*3*/].f_2 == 1 && !iLocal_53)
		{
			switch (iVar0)
			{
				case 0:
					STREAMING::REQUEST_MODEL(iLocal_249);
					break;
				case 1:
					STREAMING::REQUEST_MODEL(iLocal_259);
					STREAMING::REQUEST_MODEL(iLocal_260);
					break;
				case 2:
					WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PISTOL"), 31, 0);
					WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_MICROSMG"), 31, 0);
					WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PUMPSHOTGUN"), 31, 0);
					break;
				case 3:
					STREAMING::REQUEST_MODEL(iLocal_258);
					break;
				case 4:
					STREAMING::REQUEST_MODEL(joaat("bagger"));
					break;
				case 5:
					STREAMING::REQUEST_ANIM_DICT("MISSARMENIAN2");
					break;
				case 6:
					STREAMING::REQUEST_ANIM_DICT("missarmenian2_mcs_5");
					STREAMING::REQUEST_ANIM_DICT("reaction@points@");
					break;
				case 7:
					STREAMING::REQUEST_MODEL(joaat("bison"));
					break;
				case 8:
					STREAMING::REQUEST_MODEL(joaat("penumbra"));
					break;
				case 9:
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_46);
					break;
				case 10:
					VEHICLE::REQUEST_VEHICLE_RECORDING(6, sLocal_46);
					VEHICLE::REQUEST_VEHICLE_RECORDING(11, sLocal_46);
					break;
				case 11:
					TASK::REQUEST_WAYPOINT_RECORDING("arm2_15");
					break;
				case 12:
					STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
					break;
				case 13:
					TASK::REQUEST_WAYPOINT_RECORDING("ARM2");
					break;
				case 14:
					TASK::REQUEST_WAYPOINT_RECORDING("ARM2_FIRE");
					break;
				case 15:
					STREAMING::REQUEST_ANIM_DICT("missarmenian2lamar_idles");
					break;
				case 16:
					break;
				case 17:
					STREAMING::REQUEST_MODEL(joaat("IG_SiemonYetarian"));
					break;
				case 18:
					STREAMING::REQUEST_ANIM_DICT("missarmenian2lamar_in_cover");
					break;
				case 19:
					STREAMING::REQUEST_MODEL(joaat("prop_arm_gate_l"));
					break;
			}
			Local_50[iVar0 /*3*/].f_2 = 2;
			iLocal_53 = 1;
		}
		if (Local_50[iVar0 /*3*/].f_2 == 2 || Local_50[iVar0 /*3*/].f_2 == 1)
		{
			iLocal_52 = 1;
		}
		iVar0++;
	}
	if (!iLocal_52)
	{
		return 1;
	}
	return 0;
}

void func_605(int iParam0)//Position - 0x59FBB
{
	iLocal_52 = 1;
	iLocal_53 = 0;
	iLocal_51 = iParam0;
	func_606(iParam0);
}

void func_606(int iParam0)//Position - 0x59FD3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_50.f_0)
	{
		if (iParam0 >= Local_50[iVar0 /*3*/] && iParam0 < Local_50[iVar0 /*3*/].f_1)
		{
			Local_50[iVar0 /*3*/].f_2 = 1;
		}
		else if (Local_50[iVar0 /*3*/].f_2 == 2 || Local_50[iVar0 /*3*/].f_2 == 3)
		{
			switch (iVar0)
			{
				case 0:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_249);
					break;
				case 1:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_259);
					break;
				case 2:
					WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_PISTOL"));
					WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_MICROSMG"));
					WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_PUMPSHOTGUN"));
					break;
				case 3:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_258);
					break;
				case 4:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bagger"));
					break;
				case 5:
					STREAMING::REMOVE_ANIM_DICT("MISSARMENIAN2");
					break;
				case 6:
					STREAMING::REMOVE_ANIM_DICT("missarmenian2_mcs_5");
					STREAMING::REMOVE_ANIM_DICT("reaction@points@");
					break;
				case 7:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison"));
					break;
				case 8:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("penumbra"));
					break;
				case 9:
					VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_46);
					break;
				case 10:
					VEHICLE::REMOVE_VEHICLE_RECORDING(6, sLocal_46);
					VEHICLE::REMOVE_VEHICLE_RECORDING(11, sLocal_46);
					break;
				case 11:
					TASK::REMOVE_WAYPOINT_RECORDING("arm2_15");
					break;
				case 12:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_test_01"));
					break;
				case 13:
					TASK::REMOVE_WAYPOINT_RECORDING("ARM2");
					break;
				case 14:
					TASK::REMOVE_WAYPOINT_RECORDING("ARM2_FIRE");
					break;
				case 15:
					STREAMING::REMOVE_ANIM_DICT("missarmenian2lamar_idles");
					break;
				case 16:
					AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
					break;
				case 17:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_SiemonYetarian"));
					break;
				case 18:
					STREAMING::REMOVE_ANIM_DICT("missarmenian2lamar_in_cover");
					break;
				case 19:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_arm_gate_l"));
					break;
			}
			Local_50[iVar0 /*3*/].f_2 = 0;
		}
		iVar0++;
	}
}

void func_608(int iParam0, bool bParam1, int iParam2)//Position - 0x5A1E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (iParam0 == 1)
	{
		func_663(3);
		MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
		switch (iLocal_92)
		{
			case 0:
				MISC::CLEAR_AREA(-36.769f, -1097.2094f, 25.643f, 100f, true, false, false, false);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(25.859827f, -1098.9319f, -43.781937f) - Vector(2.5625f, 6.75f, 9.75f), Vector(25.859827f, -1098.9319f, -43.781937f) + Vector(2.5625f, 6.75f, 9.75f), false, true);
				func_662(0);
				CUTSCENE::REQUEST_CUTSCENE("Armenian_2_int", 8);
				while (!CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					func_20(57, 0);
				}
				func_474(2);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -32.5669f, -1094.2974f, 25.4223f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 141f);
				}
				if (__LIB_0__::func_2(0))
				{
					STREAMING::REQUEST_MODEL(joaat("baller"));
					STREAMING::REQUEST_MODEL(joaat("schwarzer"));
					STREAMING::REQUEST_MODEL(joaat("bullet"));
					STREAMING::REQUEST_MODEL(joaat("prop_employee_month_02"));
					while ((!STREAMING::HAS_MODEL_LOADED(joaat("baller")) || !STREAMING::HAS_MODEL_LOADED(joaat("schwarzer"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bullet")))
					{
						func_20(65, 0);
					}
					MISC::CLEAR_AREA_OF_VEHICLES(-11.3885f, -1080.6869f, 25.6721f, 8f, false, false, false, false, false, false, 0);
					iLocal_241[0] = VEHICLE::CREATE_VEHICLE(joaat("baller"), -7.6801f, -1082.4365f, 25.6721f, 159.3786f, true, true, false);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_241[0], 3, 1);
					iLocal_241[1] = VEHICLE::CREATE_VEHICLE(joaat("schwarzer"), -11.3885f, -1080.6869f, 25.6721f, 160.6359f, true, true, false);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_241[1], 37, 37);
					iLocal_241[2] = VEHICLE::CREATE_VEHICLE(joaat("bullet"), -17.3168f, -1079.2955f, 25.6721f, 204.3207f, true, true, false);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_241[2], 52, 10);
					MISC::CLEAR_AREA_OF_VEHICLES(-41.4259f, -1099.6481f, 26.0534f, 4f, false, false, false, false, false, false, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(-46.2594f, -1097.8386f, 26.3444f, 4f, false, false, false, false, false, false, 0);
					iLocal_241[3] = VEHICLE::CREATE_VEHICLE(joaat("baller"), -41.4259f, -1099.6481f, 26.0534f, 132.3786f, true, true, false);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_241[3], 10);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_241[3], false);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_241[3], 25, 16);
					iLocal_241[4] = VEHICLE::CREATE_VEHICLE(joaat("schwarzer"), -46.2594f, -1097.8386f, 26.3444f, 113.3786f, true, true, false);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_241[4], 10);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_241[4], false);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_241[4], 32, 17);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("baller"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("schwarzer"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bullet"));
				}
				if (iParam2 || bParam1)
				{
					iLocal_83 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-29.13f, -1102.377f, 27.26f, 0.5f, joaat("prop_employee_month_01"), true, false, true);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_83))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_83, false, false);
						iLocal_84 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_employee_month_02"), ENTITY::GET_ENTITY_COORDS(iLocal_83, true), true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_84, 0f, 0f, -20f, 2, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_employee_month_02"));
					}
				}
				break;
			case 1:
				if (bParam1)
				{
					__LIB_0__::func_427(-27.8988f, -1083.528f, 25.5772f, 284f, 1, 0);
				}
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(25.859827f, -1098.9319f, -43.781937f) - Vector(2.5625f, 6.75f, 9.75f), Vector(25.859827f, -1098.9319f, -43.781937f) + Vector(2.5625f, 6.75f, 9.75f), false, true);
				func_662(1);
				MISC::CLEAR_AREA_OF_PEDS(-11.3885f, -1080.6869f, 25.6721f, 100f, 0);
				func_162(1, 9, 0);
				STREAMING::REQUEST_MODEL(joaat("baller"));
				STREAMING::REQUEST_MODEL(joaat("schwarzer"));
				STREAMING::REQUEST_MODEL(joaat("bullet"));
				STREAMING::REQUEST_MODEL(joaat("prop_employee_month_02"));
				while (((!STREAMING::HAS_MODEL_LOADED(joaat("baller")) || !STREAMING::HAS_MODEL_LOADED(joaat("schwarzer"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bullet"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_employee_month_02")))
				{
					func_20(65, 0);
				}
				func_626(&(Local_95[0 /*2*/]), -23.2436f, -1083.2417f, 25.5872f, 250.0066f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_95[0 /*2*/], 1600, 0);
					if (VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(Local_95[0 /*2*/])) > 1)
					{
						while (!__LIB_15__::func_938(&(Local_94[2 /*14*/]), 19, Local_95[0 /*2*/], 0, 1))
						{
							func_20(5, 0);
						}
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95[0 /*2*/], -1);
					}
					else
					{
						while (!__LIB_0__::func_648(&(Local_94[2 /*14*/]), 19, -27.3368f, -1084.9879f, 25.5727f, 275.7097f, 1))
						{
							func_20(6, 0);
						}
					}
				}
				else
				{
					while (!__LIB_0__::func_648(&(Local_94[2 /*14*/]), 19, -27.3368f, -1084.9879f, 25.5727f, 275.7097f, 1))
					{
						func_20(6, 0);
					}
					if (!bParam1)
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -27.8988f, -1083.528f, 25.5772f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 284f);
					}
				}
				func_354(1);
				func_474(2);
				if (bParam1)
				{
					__LIB_0__::func_433(0, -1, 1);
				}
				MISC::CLEAR_AREA_OF_VEHICLES(-11.3885f, -1080.6869f, 25.6721f, 8f, false, false, false, false, false, false, 0);
				iVar0 = VEHICLE::CREATE_VEHICLE(joaat("baller"), -7.6801f, -1082.4365f, 25.6721f, 159.3786f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iVar0, 3, 1);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
				iVar0 = VEHICLE::CREATE_VEHICLE(joaat("schwarzer"), -11.3885f, -1080.6869f, 25.6721f, 160.6359f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iVar0, 37, 37);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
				iVar0 = VEHICLE::CREATE_VEHICLE(joaat("bullet"), -17.3168f, -1079.2955f, 25.6721f, 204.3207f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iVar0, 52, 10);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
				MISC::CLEAR_AREA_OF_VEHICLES(-41.4259f, -1099.6481f, 26.0534f, 4f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-46.2594f, -1097.8386f, 26.3444f, 4f, false, false, false, false, false, false, 0);
				iVar0 = VEHICLE::CREATE_VEHICLE(joaat("baller"), -41.4259f, -1099.6481f, 26.0534f, 132.3786f, true, true, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 10);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar0, false);
				VEHICLE::SET_VEHICLE_COLOURS(iVar0, 25, 16);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
				iVar0 = VEHICLE::CREATE_VEHICLE(joaat("schwarzer"), -46.2594f, -1097.8386f, 26.3444f, 113.3786f, true, true, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 10);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar0, false);
				VEHICLE::SET_VEHICLE_COLOURS(iVar0, 32, 17);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("baller"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("schwarzer"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bullet"));
				if (iParam2 || bParam1)
				{
					iLocal_83 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-29.13f, -1102.377f, 27.26f, 0.5f, joaat("prop_employee_month_01"), true, false, true);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_83))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_83, false, false);
						iLocal_84 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_employee_month_02"), ENTITY::GET_ENTITY_COORDS(iLocal_83, true), true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_84, 0f, 0f, -20f, 2, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_employee_month_02"));
					}
				}
				break;
			case 2:
				if (bParam1)
				{
					__LIB_0__::func_427(-1133.8412f, -1578.5286f, 3.4006f, 198f, 1, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1133.8412f, -1578.5286f, 3.4006f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 198f);
					STREAMING::LOAD_SCENE(-1133.0406f, -1574.603f, 3.3957f);
					SYSTEM::WAIT(10);
				}
				func_162(1, 9, 0);
				MISC::CLEAR_AREA(-1133.0406f, -1574.603f, 3.3957f, 120f, true, false, false, false);
				func_662(2);
				func_615();
				ENTITY::SET_ENTITY_HEALTH(Local_95[0 /*2*/], 1600, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(Local_95[0 /*2*/]), 3);
					while (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(ENTITY::GET_ENTITY_MODEL(Local_95[0 /*2*/])))
					{
						SYSTEM::WAIT(0);
					}
				}
				if (__LIB_13__::func_821())
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95[0 /*2*/], -1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_95[0 /*2*/], true, true, false);
						while (!__LIB_15__::func_938(&(Local_94[2 /*14*/]), 19, Local_95[0 /*2*/], 0, 1))
						{
							func_20(7, 0);
						}
					}
				}
				else
				{
					while (!__LIB_0__::func_648(&(Local_94[2 /*14*/]), 19, -1136.0333f, -1579.8708f, 3.3956f, 187f, 1))
					{
						func_20(8, 0);
					}
				}
				func_354(1);
				__LIB_37__::func_204(Local_94[2 /*14*/]);
				func_474(2);
				while (iLocal_301 != 1)
				{
					func_24();
					func_20(9, 0);
				}
				if (bParam1)
				{
					__LIB_0__::func_433(0, -1, 1);
				}
				break;
			case 3:
				func_162(1, 9, 0);
				func_615();
				ENTITY::SET_ENTITY_HEALTH(Local_95[0 /*2*/], 1600, 0);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1125.6288f, -1593.4801f, 3.355f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 189f);
					MISC::CLEAR_AREA(-1125.6288f, -1593.4801f, 3.355f, 120f, true, false, false, false);
					SYSTEM::WAIT(1);
				}
				func_662(3);
				while (!__LIB_0__::func_648(&(Local_94[2 /*14*/]), 19, -1129.5408f, -1590.5742f, 3.3645f, 201f, 1))
				{
					func_20(7, 0);
				}
				func_354(1);
				if (!HUD::DOES_BLIP_EXIST(Local_94[2 /*14*/].f_1))
				{
					Local_94[2 /*14*/].f_1 = __LIB_0__::func_666(Local_94[2 /*14*/], 0, 145);
				}
				func_474(2);
				func_566(42, 89);
				func_141(57, 1);
				func_141(49, 1);
				func_471(0, 17, 1, 0);
				func_471(1, 19, 0, 1);
				func_471(6, 24, 1, 0);
				func_471(10, 48, 0, 1);
				func_139(10, 48, 1);
				func_612(0, 13, 1);
				func_612(1, 14, 1);
				func_612(2, 15, 1);
				func_141(57, 1);
				__LIB_37__::func_204(Local_94[2 /*14*/]);
				break;
			case 4:
				func_162(1, 9, 0);
				func_662(4);
				func_615();
				ENTITY::SET_ENTITY_HEALTH(Local_95[0 /*2*/], 1600, 0);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1115.0737f, -1604.6517f, 3.4684f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 208f);
					MISC::CLEAR_AREA(-1115.0737f, -1604.6517f, 3.4684f, 120f, true, false, false, false);
					STREAMING::LOAD_SCENE(-1115.0737f, -1604.6517f, 3.4684f);
					SYSTEM::WAIT(10);
				}
				while (!__LIB_0__::func_648(&(Local_94[2 /*14*/]), 19, -1109.8315f, -1610.525f, 3.5653f, 215f, 1))
				{
					func_20(7, 0);
				}
				func_354(1);
				func_137();
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "arm2", 0, 0, -1);
				func_136(Local_94[2 /*14*/], 0);
				if (!HUD::DOES_BLIP_EXIST(Local_94[2 /*14*/].f_1))
				{
					Local_94[2 /*14*/].f_1 = __LIB_0__::func_666(Local_94[2 /*14*/], 0, 145);
				}
				func_474(2);
				func_566(42, 89);
				func_141(57, 1);
				func_141(67, 1);
				func_471(0, 17, 1, 0);
				func_471(1, 19, 1, 0);
				func_471(2, 20, 1, 0);
				func_471(3, 21, 1, 0);
				func_471(4, 22, 1, 0);
				func_471(6, 24, 1, 0);
				func_471(24, 42, 1, 0);
				func_612(0, 13, 1);
				func_612(1, 14, 1);
				func_612(2, 15, 1);
				func_612(3, 16, 1);
				func_612(4, 17, 1);
				func_612(5, 18, 1);
				func_612(6, 19, 1);
				func_471(10, 48, 0, 1);
				func_139(10, 48, 4);
				iLocal_47 = 5;
				func_468("ARM2_DRIVE_RESTART", 0, "ARM2_FIGHT_START");
				__LIB_37__::func_204(Local_94[2 /*14*/]);
				break;
			case 5:
				func_162(1, 9, 0);
				func_662(5);
				func_615();
				ENTITY::SET_ENTITY_HEALTH(Local_95[0 /*2*/], 1600, 0);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1078.0042f, -1661.6893f, 3.3987f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 204.7912f);
					MISC::CLEAR_AREA(-1077.4958f, -1679.3835f, 3.5754f, 120f, true, false, false, false);
					STREAMING::LOAD_SCENE(-1078.0042f, -1661.6893f, 3.3987f);
					SYSTEM::WAIT(1);
				}
				while (!__LIB_0__::func_648(&(Local_94[2 /*14*/]), 19, -1074.5681f, -1666.2999f, 3.4449f, 218.3193f, 1))
				{
					func_20(7, 0);
				}
				func_354(1);
				if (!HUD::DOES_BLIP_EXIST(Local_94[2 /*14*/].f_1))
				{
					Local_94[2 /*14*/].f_1 = __LIB_0__::func_666(Local_94[2 /*14*/], 0, 145);
				}
				func_474(2);
				func_566(42, 89);
				func_141(57, 1);
				func_141(67, 1);
				func_471(0, 17, 1, 0);
				func_471(1, 19, 1, 0);
				func_471(2, 20, 1, 0);
				func_471(3, 21, 1, 0);
				func_471(4, 22, 1, 0);
				func_471(6, 24, 1, 0);
				func_471(7, 25, 1, 0);
				func_471(9, 27, 1, 0);
				func_471(10, 28, 1, 0);
				func_471(11, 29, 1, 0);
				func_471(12, 30, 1, 0);
				func_471(13, 31, 1, 0);
				func_471(15, 33, 1, 0);
				func_471(18, 32, 1, 0);
				func_471(19, 33, 1, 0);
				func_612(0, 13, 1);
				func_612(1, 14, 1);
				func_612(2, 15, 1);
				func_612(3, 16, 1);
				func_612(4, 17, 1);
				func_612(5, 18, 1);
				func_612(6, 19, 1);
				func_612(7, 20, 1);
				func_612(8, 21, 1);
				func_612(9, 22, 1);
				func_612(10, 24, 1);
				func_612(11, 26, 1);
				func_612(12, 27, 1);
				func_612(16, 32, 1);
				func_471(24, 42, 1, 0);
				func_471(10, 48, 0, 1);
				func_139(10, 48, 6);
				iLocal_47 = 7;
				func_468("ARM2_GARAGES_RESTART", 0, "ARM2_FIGHT_START");
				__LIB_37__::func_204(Local_94[2 /*14*/]);
				break;
			case 6:
				if (bParam1)
				{
					__LIB_0__::func_427(-1072.4558f, -1675.5233f, 3.4485f, 113f, 1, 0);
				}
				else if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1072.4558f, -1675.5233f, 3.4485f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 113f);
					STREAMING::LOAD_SCENE(-1072.4558f, -1675.5233f, 3.4485f);
					SYSTEM::WAIT(10);
				}
				MISC::CLEAR_AREA(-1077.4958f, -1679.3835f, 3.5754f, 120f, true, false, false, false);
				func_162(1, 9, 0);
				func_615();
				ENTITY::SET_ENTITY_HEALTH(Local_95[0 /*2*/], 1600, 0);
				func_662(5);
				while (!__LIB_0__::func_648(&(Local_94[2 /*14*/]), 19, -1074.4803f, -1673.2312f, 3.4137f, 130f, 1))
				{
					func_20(7, 0);
				}
				func_354(1);
				if (!HUD::DOES_BLIP_EXIST(Local_94[2 /*14*/].f_1))
				{
					Local_94[2 /*14*/].f_1 = __LIB_0__::func_666(Local_94[2 /*14*/], 0, 145);
				}
				func_474(2);
				func_468("ARM2_DOOR_RESTART", 0, "ARM2_FIGHT_START");
				__LIB_37__::func_204(Local_94[2 /*14*/]);
				if (bParam1)
				{
					__LIB_0__::func_433(0, -1, 1);
				}
				break;
			case 7:
				if (bParam1)
				{
					__LIB_0__::func_427(-1077.8508f, -1678.8998f, 3.5754f, 346f, 1, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1077.8508f, -1678.8998f, 3.5754f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 346.6853f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
					STREAMING::LOAD_SCENE(-1077.4958f, -1679.3835f, 3.5754f);
					SYSTEM::WAIT(10);
				}
				MISC::CLEAR_AREA_OF_PEDS(-1077.8508f, -1678.8998f, 3.5754f, 100f, 0);
				PED::SET_CREATE_RANDOM_COPS(false);
				func_611(1, 9, 0);
				func_615();
				if (!Global_96876)
				{
					iLocal_227 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_PISTOL"), -1075.7982f, -1675.7168f, 3.5903f, -90f, 0f, -15f, 0, 145, 2, true, 0);
					if (!func_570(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_245 = __LIB_16__::func_324(iLocal_227);
					}
				}
				ENTITY::SET_ENTITY_HEALTH(Local_95[0 /*2*/], 1600, 0);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (Global_96876)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), false))
						{
							iVar1 = (75 - WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL")));
						}
						else
						{
							iVar1 = 75;
						}
						if (iVar1 > 0)
						{
							WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), iVar1, true, true);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), true);
					}
					MISC::CLEAR_AREA(-1077.4958f, -1679.3835f, 3.5754f, 120f, true, false, false, false);
				}
				func_662(6);
				while (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-967780114))
				{
					func_126(1);
					func_20(10, 0);
				}
				func_350(8, 63, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
				while (!func_264(8, 63))
				{
					func_350(8, 63, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
					func_20(11, 0);
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
				}
				STREAMING::REQUEST_ANIM_DICT("DEAD");
				while (!STREAMING::HAS_ANIM_DICT_LOADED("DEAD"))
				{
					func_20(17, 0);
				}
				iLocal_202 = PED::CREATE_PED(26, iLocal_259, -1070.169f, -1672.8701f, 3.4807f, 121f, true, true);
				AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_202, true);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_202);
				TASK::TASK_PLAY_ANIM(iLocal_202, "dead", "dead_a", 1000f, -1000f, -1, 1, 0f, false, false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_202, true, false);
				func_20(12, 0);
				if (!PED::IS_PED_DEAD_OR_DYING(iLocal_202, true))
				{
					ENTITY::SET_ENTITY_HEALTH(iLocal_202, 0, 0);
				}
				STREAMING::REMOVE_ANIM_DICT("DEAD");
				while (!__LIB_0__::func_648(&(Local_94[2 /*14*/]), 19, -1077.8018f, -1677.2123f, 3.5754f, 312.619f, 1))
				{
					func_20(13, 0);
				}
				func_354(1);
				PED::FORCE_PED_MOTION_STATE(Local_94[2 /*14*/], joaat("MotionState_Run"), false, 0, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_94[2 /*14*/], false, false);
				WEAPON::GIVE_WEAPON_TO_PED(Local_94[2 /*14*/], joaat("WEAPON_MICROSMG"), 2000, true, true);
				if (!HUD::DOES_BLIP_EXIST(Local_94[2 /*14*/].f_1))
				{
					Local_94[2 /*14*/].f_1 = __LIB_0__::func_666(Local_94[2 /*14*/], 0, 145);
				}
				func_471(31, 85, 1, 0);
				if (Global_96876)
				{
					func_610(2, 13, 1);
				}
				func_468("ARM2_FIGHT_RESTART", 0, "ARM2_CAR");
				if (bParam1)
				{
					__LIB_0__::func_433(0, -1, 1);
				}
				break;
			case 8:
				PED::SET_CREATE_RANDOM_COPS(false);
				func_162(1, 9, 0);
				func_615();
				ENTITY::SET_ENTITY_HEALTH(Local_95[0 /*2*/], 1600, 0);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1085.5415f, -1647.4877f, 3.3985f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 51.1491f);
					MISC::CLEAR_AREA(-1077.4958f, -1679.3835f, 3.5754f, 120f, true, false, false, false);
					STREAMING::LOAD_SCENE(-1089.8136f, -1649.0557f, 3.3986f);
					SYSTEM::WAIT(10);
					if (!bParam1)
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), false))
						{
							WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 200, false, true);
						}
						if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), false))
						{
							WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), 200, false, true);
						}
					}
				}
				func_662(6);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				}
				while (!__LIB_0__::func_648(&(Local_94[2 /*14*/]), 19, -1086.4666f, -1649.2032f, 3.3985f, 51.1439f, 1))
				{
					func_20(7, 0);
				}
				func_354(1);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
				}
				WEAPON::GIVE_WEAPON_TO_PED(Local_94[2 /*14*/], joaat("WEAPON_MICROSMG"), 2000, true, true);
				PED::SET_PED_DUCKING(Local_94[2 /*14*/], true);
				if (HUD::DOES_BLIP_EXIST(iLocal_244))
				{
					HUD::REMOVE_BLIP(&iLocal_244);
				}
				if (!HUD::DOES_BLIP_EXIST(Local_94[2 /*14*/].f_1))
				{
					Local_94[2 /*14*/].f_1 = __LIB_0__::func_666(Local_94[2 /*14*/], 0, 145);
				}
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), false))
				{
					iVar2 = (75 - WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL")));
				}
				else
				{
					iVar2 = 75;
				}
				if (iVar2 > 0)
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), iVar2, true, true);
				}
				iLocal_261 = 1;
				func_566(90, 136);
				func_141(110, 1);
				func_141(91, 1);
				func_141(92, 1);
				func_141(93, 1);
				func_141(94, 1);
				func_141(95, 1);
				func_141(96, 1);
				func_141(98, 1);
				func_141(107, 1);
				func_141(110, 1);
				func_141(124, 1);
				func_141(125, 1);
				func_141(132, 0);
				func_471(3, 52, 1, 0);
				func_471(7, 53, 1, 0);
				func_471(10, 55, 1, 0);
				func_471(12, 58, 1, 0);
				func_471(13, 56, 1, 0);
				func_471(4, 67, 1, 0);
				func_471(5, 68, 1, 0);
				func_471(6, 69, 1, 0);
				func_471(9, 70, 1, 0);
				func_471(11, 71, 1, 0);
				func_471(15, 72, 1, 0);
				func_612(0, 40, 1);
				func_612(1, 41, 1);
				func_612(2, 43, 1);
				func_612(3, 42, 1);
				func_612(4, 44, 1);
				func_612(6, 46, 1);
				func_612(7, 47, 1);
				func_612(8, 45, 1);
				func_612(9, 49, 1);
				func_612(23, 50, 1);
				func_610(0, 11, 1);
				func_610(1, 12, 1);
				func_610(2, 13, 1);
				func_610(3, 15, 1);
				func_474(2);
				func_468("ARM2_SKIP_RESTART", 1, "ARM2_CAR");
				break;
			case 9:
				if (bParam1)
				{
					__LIB_0__::func_427(-1118.2053f, -1602.7607f, 3.3986f, 30f, 1, 0);
				}
				else if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1118.2053f, -1602.7607f, 3.3986f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 30f);
					STREAMING::LOAD_SCENE(-1118.2053f, -1602.7607f, 3.3986f);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					SYSTEM::WAIT(10);
				}
				func_474(2);
				func_162(1, 10, 0);
				MISC::CLEAR_AREA(-1118.2053f, -1602.7607f, 3.3986f, 100f, true, false, false, false);
				func_662(7);
				func_474(2);
				func_615();
				ENTITY::SET_ENTITY_HEALTH(Local_95[0 /*2*/], 1600, 0);
				while (!__LIB_17__::func_245(&(Local_95[4 /*2*/]), 1, -1126.0166f, -1575.3572f, 3.3486f, 301f, 1, 2))
				{
					func_20(14, 0);
				}
				STREAMING::REQUEST_MODEL(iLocal_259);
				while (!__LIB_0__::func_648(&(Local_94[2 /*14*/]), 19, -1121.5697f, -1603.1362f, 3.3986f, 38f, 1))
				{
					func_20(7, 0);
				}
				func_354(1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_94[2 /*14*/]);
				WEAPON::GIVE_WEAPON_TO_PED(Local_94[2 /*14*/], joaat("WEAPON_MICROSMG"), 2000, true, true);
				func_162(6, 12, 0);
				func_162(7, 12, 0);
				func_609(6, 1);
				func_609(7, 1);
				func_126(6);
				func_126(7);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[4 /*2*/], false))
				{
					while (!STREAMING::HAS_MODEL_LOADED(iLocal_259))
					{
						func_20(16, 0);
					}
					func_438(8, iLocal_260, Local_93, 0f, Local_95[4 /*2*/], -1, 0, 0, 0, 0);
					ENTITY::SET_ENTITY_HEALTH(Local_94[8 /*14*/], 100, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_94[8 /*14*/], true);
					PED::SET_PED_MONEY(Local_94[8 /*14*/], 80);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_95[4 /*2*/], false))
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_95[4 /*2*/], false);
				}
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), false))
				{
					iVar3 = (75 - WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL")));
				}
				else
				{
					iVar3 = 75;
				}
				if (iVar3 > 0)
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), iVar3, true, true);
				}
				func_471(7, 100, 1, 0);
				func_468("ARM2_FIGHT_END_RESTART", 0, "ARM2_CHASE_START");
				if (bParam1)
				{
					__LIB_0__::func_433(0, -1, 1);
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				break;
			case 10:
				if (bParam1)
				{
					__LIB_0__::func_427(-1002.0295f, -1263.1501f, 4.881f, 113f, 1, 0);
				}
				MISC::CLEAR_AREA(-1002.0295f, -1263.1501f, 4.881f, 100f, true, false, false, false);
				func_474(2);
				func_626(&(Local_95[0 /*2*/]), -1000.0295f, -1263.1501f, 4.881f, 301f, 0, 0, 1, 0, 1, joaat("asterope"), 0, 145, 1);
				ENTITY::SET_ENTITY_HEALTH(Local_95[0 /*2*/], 1600, 0);
				while (!__LIB_17__::func_245(&(Local_95[4 /*2*/]), 1, -991.7125f, -1257.0267f, 4.7688f, 281f, 1, 2))
				{
					SYSTEM::WAIT(0);
				}
				func_662(9);
				if (!ENTITY::IS_ENTITY_DEAD(Local_95[4 /*2*/], false))
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_95[4 /*2*/], false);
					Local_95[4 /*2*/].f_1 = __LIB_0__::func_639(Local_95[4 /*2*/], 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_95[0 /*2*/], false))
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95[0 /*2*/], -1);
					}
					while (!__LIB_15__::func_938(&(Local_94[2 /*14*/]), 19, Local_95[0 /*2*/], 0, 1))
					{
						func_20(7, 0);
					}
					func_354(1);
				}
				if (bParam1)
				{
					__LIB_0__::func_433(0, -1, 1);
				}
				break;
			case 11:
				if (bParam1)
				{
					__LIB_0__::func_427(-19.0893f, -1404.9318f, 28.3219f, 113f, 1, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -19.0893f, -1404.9318f, 28.3219f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 113f);
					STREAMING::LOAD_SCENE(-17.0893f, -1404.9318f, 28.3219f);
					SYSTEM::WAIT(10);
				}
				MISC::CLEAR_AREA(-19.0893f, -1404.9318f, 28.3219f, 100f, true, false, false, false);
				func_474(2);
				while (!__LIB_17__::func_245(&(Local_95[0 /*2*/]), 1, -17.0893f, -1404.9318f, 28.3219f, 270f, 1, 0))
				{
					SYSTEM::WAIT(0);
				}
				while (!__LIB_17__::func_245(&(Local_95[4 /*2*/]), 1, -5.8908f, -1391.7681f, 28.3421f, 185.974f, 1, 2))
				{
					SYSTEM::WAIT(0);
				}
				func_662(10);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_95[0 /*2*/], 1600, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_95[4 /*2*/], false))
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_95[4 /*2*/], false);
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95[4 /*2*/], -1);
					}
				}
				if (bParam1)
				{
					__LIB_0__::func_433(0, -1, 1);
				}
				break;
			case 12:
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -19.9686f, -1454.1509f, 29.5843f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 231.0765f);
				}
				while (!__LIB_17__::func_245(&(Local_95[0 /*2*/]), 1, -17.0893f, -1404.9318f, 28.3219f, 270.1911f, 1, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[0 /*2*/], false))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_95[0 /*2*/], 1600, 0);
				}
				func_662(11);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_95[0 /*2*/]));
				STREAMING::LOAD_SCENE(-19.9686f, -1454.1509f, 29.5843f);
				SYSTEM::WAIT(10);
				break;
		}
		MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 200f, 0);
		SYSTEM::WAIT(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
	}
}

int func_609(int iParam0, int iParam1)//Position - 0x5BDBD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_113[iVar0 /*6*/] == iParam0)
		{
			if (Local_113[iVar0 /*6*/].f_1 == 1)
			{
				Local_113[iVar0 /*6*/].f_2 = iParam1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_610(int iParam0, int iParam1, int iParam2)//Position - 0x5BE01
{
	Local_68[iParam0 /*4*/].f_1 = iParam2;
	Local_68[iParam0 /*4*/] = iParam1;
}

void func_611(int iParam0, int iParam1, int iParam2)//Position - 0x5BE1D
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_113[iVar0 /*6*/] == iParam0)
		{
			Local_113[iVar0 /*6*/].f_1 = 1;
			Local_113[iVar0 /*6*/].f_2 = 0;
			Local_113[iVar0 /*6*/].f_3 = 0;
			Local_113[iVar0 /*6*/].f_4 = iParam2;
			Local_113[iVar0 /*6*/].f_5 = iParam1;
			bVar1 = true;
		}
		iVar0++;
	}
	if (!bVar1)
	{
		func_162(iParam0, iParam1, iParam2);
	}
}

void func_612(int iParam0, int iParam1, int iParam2)//Position - 0x5BE8C
{
	Local_66[iParam0 /*6*/].f_1 = iParam2;
	Local_66[iParam0 /*6*/] = iParam1;
}

void func_615()//Position - 0x5BF18
{
	bool bVar0;
	var uVar1;
	var uVar2;
	if (__LIB_13__::func_821())
	{
		if (!__LIB_14__::func_660(__LIB_13__::func_791(), 13f, 30f, 20f, 1))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		func_626(&(Local_95[0 /*2*/]), -1149.3313f, -1587.6368f, 3.4344f, 305f, 0, 0, 1, 0, 1, joaat("asterope"), 0, 145, 1);
	}
	else
	{
		func_626(&(Local_95[0 /*2*/]), -1133.4789f, -1574.0167f, 3.3788f, 300f, 0, 0, 1, 0, 1, joaat("asterope"), 0, 145, 1);
	}
	VEHICLE::GET_VEHICLE_SIZE(Local_95[0 /*2*/], &uVar1, &uVar2);
}

void func_626(int iParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x5C2C1
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_0__::func_323() || !__LIB_13__::func_821())
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		if (!__LIB_14__::func_750(iParam4, iParam5, iParam6, iParam11))
		{
			iVar0 = 0;
		}
	}
	if (iVar0 == 1)
	{
		__LIB_14__::func_532();
		while (!__LIB_14__::func_531())
		{
			SYSTEM::WAIT(0);
		}
		*iParam0 = __LIB_31__::func_966(Param1, fParam2);
	}
	else if (iParam7 == 1)
	{
		if (__LIB_0__::func_78(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { Global_106934.f_2890 };
			fParam2 = Global_106934.f_2890.f_6;
		}
		MISC::CLEAR_AREA(Param1, 5f, true, false, false, false);
		__LIB_17__::func_454(Param1, 5f, 0);
		if (__LIB_0__::func_374(bParam10))
		{
			__LIB_16__::func_850(bParam10, 0);
			while (!__LIB_17__::func_245(iParam0, bParam10, Param1, fParam2, 1, 0))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(iParam8);
			while (!STREAMING::HAS_MODEL_LOADED(iParam8))
			{
				SYSTEM::WAIT(0);
			}
			*iParam0 = VEHICLE::CREATE_VEHICLE(iParam8, Param1, fParam2, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0, false))
			{
				if (iParam9 == 0)
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, 0);
				}
				else if (iParam9 > 0)
				{
					VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam9, iParam9);
				}
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam8);
		}
	}
	if (iParam3 == 1)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0, false)) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, -1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
		}
	}
}

void func_662(int iParam0)//Position - 0x5D9D3
{
	iLocal_52 = 1;
	iLocal_53 = 0;
	iLocal_51 = iParam0;
	func_606(iParam0);
	while (iLocal_52)
	{
		func_601();
		func_20(0, 0);
	}
}

void func_663(int iParam0)//Position - 0x5D9FE
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	__LIB_0__::func_468(1);
	if (iParam0 != 0)
	{
		while (!AUDIO::TRIGGER_MUSIC_EVENT("ARM2_MISSION_FAIL"))
		{
			func_20(4, 0);
		}
	}
	func_592();
	func_591();
	func_590();
	func_589();
	while (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE(true);
		}
		else
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		func_20(3, 0);
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	if (iParam0 != 3)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bagger"), false);
	}
	AUDIO::STOP_STREAM();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
	}
	if (iParam0 != 3)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2LeadInOutMCS_6", "_leadin_fra", 3))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
	iLocal_285 = 0;
	iLocal_286 = 0;
	iLocal_287 = 0;
	sLocal_288 = "";
	sLocal_289 = "";
	iLocal_47 = 0;
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_77))
	{
		OBJECT::REMOVE_PICKUP(iLocal_77);
	}
	__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	CAM::DESTROY_ALL_CAMS(false);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	__LIB_0__::func_429();
	__LIB_0__::func_325();
	AUDIO::STOP_SCRIPTED_CONVERSATION(true);
	iLocal_48 = 0;
	bLocal_49 = false;
	iLocal_90 = 0;
	iLocal_90 = iLocal_90;
	bLocal_91 = false;
	func_260();
	HUD::CLEAR_PRINTS();
	func_668(1);
	func_126(0);
	if (iParam0 != 3)
	{
		TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
		PED::SET_PED_ALLOW_HURT_COMBAT_FOR_ALL_MISSION_PEDS(true);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_209))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_209, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_210))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_210, false);
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		__LIB_41__::func_48(96, 6);
		__LIB_15__::func_953(joaat("prop_map_door_01"), -1104.6572f, -1638.4814f, 4.6754f, 1, 0f);
	}
	else
	{
		__LIB_17__::func_162(0);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_75))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_75);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_76))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_76);
	}
	__LIB_0__::func_345(&uLocal_270, 0, 0);
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_95[iVar0 /*2*/]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[iVar0 /*2*/], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_95[iVar0 /*2*/], false);
			}
			if (iParam0 == 3)
			{
				if (HUD::DOES_BLIP_EXIST(Local_95[iVar0 /*2*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_95[iVar0 /*2*/].f_1));
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95[iVar0 /*2*/], false))
				{
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_95[iVar0 /*2*/], true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_95[iVar0 /*2*/], true, true);
					}
					VEHICLE::DELETE_VEHICLE(&(Local_95[iVar0 /*2*/]));
				}
				else if (ENTITY::DOES_ENTITY_EXIST(Local_95[iVar0 /*2*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_95[iVar0 /*2*/]));
				}
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < iLocal_241)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_241[iVar1]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_241[iVar1], false))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_241[iVar1]));
			}
		}
		iVar1++;
	}
	func_666();
	__LIB_0__::func_753();
	iVar0 = 0;
	while (iVar0 < Local_205.f_0)
	{
		Local_205[iVar0 /*3*/].f_1 = 0;
		iVar0++;
	}
	iVar0 = 1;
	while (iVar0 <= 26)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_94[iVar0 /*14*/]))
		{
			if (iParam0 == 2)
			{
				if (!PED::IS_PED_INJURED(Local_94[iVar0 /*14*/]))
				{
					if (PED::IS_PED_IN_GROUP(Local_94[iVar0 /*14*/]))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_94[iVar0 /*14*/]);
					}
					PED::SET_PED_KEEP_TASK(Local_94[iVar0 /*14*/], true);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_94[iVar0 /*14*/]));
			}
			else
			{
				PED::DELETE_PED(&(Local_94[iVar0 /*14*/]));
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_202))
	{
		PED::DELETE_PED(&iLocal_202);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_203))
	{
		PED::DELETE_PED(&iLocal_203);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_204))
	{
		PED::DELETE_PED(&iLocal_204);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_207))
	{
		OBJECT::SET_OBJECT_TARGETTABLE(iLocal_207, false);
		OBJECT::DELETE_OBJECT(&iLocal_207);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_245))
	{
		HUD::REMOVE_BLIP(&iLocal_245);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_246))
	{
		HUD::REMOVE_BLIP(&iLocal_246);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_247))
	{
		HUD::REMOVE_BLIP(&iLocal_247);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_244))
	{
		HUD::REMOVE_BLIP(&iLocal_244);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_248))
	{
		HUD::REMOVE_BLIP(&iLocal_248);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_208))
	{
		OBJECT::DELETE_OBJECT(&iLocal_208);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_82[0]))
	{
		OBJECT::DELETE_OBJECT(&(iLocal_82[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_82[1]))
	{
		OBJECT::DELETE_OBJECT(&(iLocal_82[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_83))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_83, true, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_84))
	{
		OBJECT::DELETE_OBJECT(&iLocal_84);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_gar_door_plug"));
	PED::SET_CREATE_RANDOM_COPS(true);
	iLocal_86 = 0;
	iLocal_81 = 0;
	sLocal_257 = "";
	iLocal_253 = 0;
	iLocal_299 = 0;
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_227))
	{
		OBJECT::REMOVE_PICKUP(iLocal_227);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_226))
	{
		OBJECT::REMOVE_PICKUP(iLocal_226);
	}
	OBJECT::REMOVE_ALL_PICKUPS_OF_TYPE(joaat("PICKUP_WEAPON_PISTOL"));
	__LIB_31__::func_968(&Local_214, 1, 0);
	HUD::CLEAR_GPS_MULTI_ROUTE();
	if (iParam0 == 3)
	{
		__LIB_41__::func_48(94, 4);
		__LIB_41__::func_48(95, 4);
		__LIB_41__::func_48(94, 6);
		__LIB_41__::func_48(95, 6);
	}
	else if (iParam0 == 0)
	{
		__LIB_41__::func_48(94, 0);
		__LIB_41__::func_48(95, 0);
	}
	else
	{
		__LIB_41__::func_48(94, 4);
		__LIB_41__::func_48(95, 4);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-967780114))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(-967780114, 0);
	}
	TASK::REMOVE_COVER_POINT(iLocal_195);
	TASK::REMOVE_COVER_POINT(iLocal_242);
	TASK::REMOVE_COVER_POINT(iLocal_243);
	TASK::REMOVE_COVER_POINT(iLocal_196);
	TASK::REMOVE_COVER_POINT(iLocal_197);
	TASK::REMOVE_COVER_POINT(iLocal_198);
	TASK::REMOVE_COVER_POINT(iLocal_199);
	TASK::REMOVE_COVER_POINT(iLocal_200);
	TASK::REMOVE_COVER_POINT(iLocal_201);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_DRIVE_TO_ALLEY"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_2_DRIVE_TO_ALLEY");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_SEARCH_FOR_BIKE"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_2_SEARCH_FOR_BIKE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_GANG_DRIVE_PAST"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_2_GANG_DRIVE_PAST");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_SHOOTOUT"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_2_SHOOTOUT");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_RAYFIRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_2_RAYFIRE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_GAS_TRAIL"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_2_GAS_TRAIL");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_GET_TO_THE_CAR"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_2_GET_TO_THE_CAR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_CHASE_THE_BIKE"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_2_CHASE_THE_BIKE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_RIDE_BIKE_BACK"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_2_RIDE_BIKE_BACK");
	}
	iVar2 = 0;
	while (iVar2 <= 30)
	{
		if (Local_255[iVar2 /*3*/] != 0)
		{
			GRAPHICS::REMOVE_PARTICLE_FX(Local_255[iVar2 /*3*/], false);
		}
		Local_255[iVar2 /*3*/].f_1 = 0;
		Local_255[iVar2 /*3*/].f_2 = 0;
		Local_255[iVar2 /*3*/] = 0;
		iVar2++;
	}
	iLocal_96 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
	}
	if (iParam0 == 3)
	{
		MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1061.5536f, -1683.2095f, 3.436779f, -1141.4136f, -1572.9982f, 8.292084f, 66.75f, false, false, false, false, false, 0, 0);
		MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-17.6177f, -958.4838f, 11.38287f, -90.49478f, -1259.3378f, 76.55168f, 250f, false, false, false, false, false, 0, 0);
		MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, 0);
		MISC::CLEAR_AREA_OF_OBJECTS(-1094.1509f, -1641.675f, 3.4598f, 80f, 0);
		MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 200f, true, false, false, false);
		func_474(2);
	}
	else
	{
		func_474(7);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
	}
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	if (iParam0 != 3)
	{
		PATHFIND::SET_ROADS_IN_AREA(12.0272f, -1443.6243f, 33.436f, -58.0394f, -1501.2678f, 29.8437f, true, true);
		PATHFIND::SET_ROADS_IN_AREA(-1159.5867f, -1594.7542f, 0.2391f, -1119.5867f, -1554.7542f, 13.2391f, true, true);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-966.15936f, -1187.3041f, -0.770555f, -1094.6553f, -964.7231f, 15.130554f, 10.3125f, 1);
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-21.8129f, -1454.3429f, 20.7942f, -17.8129f, -1450.3429f, 40.7942f, 0);
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Vector(3.943655f, -1586.0956f, -1131.8706f) - Vector(1.125f, 6.6875f, 5.5625f), Vector(3.943655f, -1586.0956f, -1131.8706f) + Vector(1.125f, 6.6875f, 5.5625f), 0);
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Vector(4.110459f, -1656.1404f, -1090.723f) - Vector(1f, 2.125f, 2.125f), Vector(4.110459f, -1656.1404f, -1090.723f) + Vector(1f, 2.125f, 2.125f), 0);
		PED::CLEAR_PED_NON_CREATION_AREA();
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(6);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), false);
		ENTITY::REMOVE_MODEL_HIDE(-1089.8f, -1637.8f, 7.3f, 1f, joaat("prop_ld_balcfnc_02a"), true);
		Global_32109 = 0;
	}
	VEHICLE::REMOVE_VEHICLE_ASSET(joaat("burrito"));
	if (iParam0 != 3)
	{
	}
	if (iParam0 == 3)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true, false, false, true);
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1062.0024f, -1662.2129f, 3.562896f, -1066.9423f, -1665.5287f, 6.366508f, 3.3125f, false, true, 0))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1072.0076f, -1670.0237f, 3.4501f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 32.8933f);
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1065.1184f, -1668.9283f, 6.39261f, -1058.9902f, -1664.4839f, 3.43099f, 4f, false, true, 0))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1072.0076f, -1670.0237f, 3.4501f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 32.8933f);
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1104.5348f, -1638.8877f, 3.640529f, -1109.6483f, -1642.4749f, 6.45303f, 4.875f, false, true, 0))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1102.954f, -1636.6654f, 3.5846f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 7.4969f);
		}
	}
	if (iParam0 == 1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (__LIB_14__::func_852())
			{
				if (PATHFIND::GET_SAFE_COORD_FOR_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true, &Var3, 0))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var3, true, false, false, true);
				}
			}
		}
	}
	TASK::SET_SCENARIO_GROUP_ENABLED("ARMENIAN_CATS", false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(25.859827f, -1098.9319f, -43.781937f) - Vector(2.5625f, 6.75f, 9.75f), Vector(25.859827f, -1098.9319f, -43.781937f) + Vector(2.5625f, 6.75f, 9.75f), true, true);
}

void func_666()//Position - 0x5E4DD
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_209, false))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_209, "MISSARMENIAN2", "open_garage_door", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(iLocal_209, "open_garage_door", "MISSARMENIAN2", -1f);
		}
		ENTITY::SET_ENTITY_COLLISION(iLocal_209, true, false);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_209);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_210, false))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_210, "MISSARMENIAN2", "open_garage_door", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(iLocal_210, "open_garage_door", "MISSARMENIAN2", -1f);
		}
		ENTITY::SET_ENTITY_COLLISION(iLocal_210, true, false);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_210);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_211))
	{
		OBJECT::DELETE_OBJECT(&iLocal_211);
	}
}

void func_668(int iParam0)//Position - 0x5E5A0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_113[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_113[iVar0 /*6*/].f_4 == 0 || (Local_113[iVar0 /*6*/].f_4 == 1 && iParam0 == 0))
			{
				Local_113[iVar0 /*6*/].f_2 = 99;
				Local_113[iVar0 /*6*/].f_3 = 0;
			}
		}
		iVar0++;
	}
}

int func_671()//Position - 0x5E653
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bagger"), true);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), false);
	}
	PED::SET_PED_NON_CREATION_AREA(Vector(9.711103f, -1633.0743f, -1099.0319f) - Vector(7.8125f, 63.25f, 46.375f), Vector(9.711103f, -1633.0743f, -1099.0319f) + Vector(7.8125f, 63.25f, 46.375f));
	func_474(2);
	Global_113386.f_2363.f_4863 = func_672(PLAYER::PLAYER_PED_ID());
	MISC::CLEAR_AREA(-60.8903f, -1111.1042f, 25.4353f, 5f, true, true, false, false);
	MISC::CLEAR_AREA(-1098.6625f, -1634.21f, 3.5739f, 100f, true, true, false, false);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	HUD::REQUEST_ADDITIONAL_TEXT("ARM2", 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(4.7111f, -1657.686f, -1081.5468f) - Vector(4f, 10f, 11f), Vector(4.7111f, -1657.686f, -1081.5468f) + Vector(4f, 10f, 11f), false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(3.5395f, -1615.618f, -1113.8973f) - Vector(2f, 1.8f, 1.6f), Vector(3.5395f, -1615.618f, -1113.8973f) + Vector(2f, 1.8f, 1.6f), false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(5.211141f, -1671.8483f, -1070.388f) - Vector(2.125f, 8.9375f, 9.25f), Vector(5.211141f, -1671.8483f, -1070.388f) + Vector(2.125f, 8.9375f, 9.25f), false, true);
	PATHFIND::SET_ROADS_IN_AREA(-1159.5867f, -1594.7542f, 0.2391f, -1119.5867f, -1554.7542f, 13.2391f, false, true);
	TASK::ADD_COVER_BLOCKING_AREA(Vector(3.4f, -1654.1f, -1079f) - Vector(1f, 1f, 1f), Vector(3.4f, -1654.1f, -1079f) + Vector(1f, 1f, 1f), true, true, true, false);
	TASK::SET_SCENARIO_GROUP_ENABLED("ARMENIAN_CATS", true);
	Local_205[0 /*3*/] = 1000;
	Local_205[0 /*3*/].f_1 = 0;
	Local_205[0 /*3*/].f_2 = 0;
	Local_205[1 /*3*/] = 1600;
	Local_205[1 /*3*/].f_1 = 0;
	Local_205[1 /*3*/].f_2 = 1;
	Local_205[2 /*3*/] = 2200;
	Local_205[2 /*3*/].f_1 = 0;
	Local_205[2 /*3*/].f_2 = 2;
	Local_205[3 /*3*/] = 2700;
	Local_205[3 /*3*/].f_1 = 0;
	Local_205[3 /*3*/].f_2 = 3;
	Local_205[4 /*3*/] = 3000;
	Local_205[4 /*3*/].f_1 = 0;
	Local_205[4 /*3*/].f_2 = 5;
	Local_205[5 /*3*/] = 3400;
	Local_205[5 /*3*/].f_1 = 0;
	Local_205[5 /*3*/].f_2 = 4;
	Local_205[6 /*3*/] = 4000;
	Local_205[6 /*3*/].f_1 = 0;
	Local_205[6 /*3*/].f_2 = 6;
	Local_205[7 /*3*/] = 6500;
	Local_205[7 /*3*/].f_1 = 0;
	Local_205[7 /*3*/].f_2 = 7;
	Local_250[0 /*3*/] = { -1118.9967f, -1591.6809f, 3.576f };
	Local_250[1 /*3*/] = { -1128.4098f, -1608.9891f, 3.3985f };
	Local_250[2 /*3*/] = { -1104.139f, -1613.4166f, 3.7148f };
	Local_250[3 /*3*/] = { -1108.5714f, -1632.442f, 3.6161f };
	Local_250[4 /*3*/] = { -1088.9132f, -1632.3376f, 3.7329f };
	Local_250[5 /*3*/] = { -1095.361f, -1648.2563f, 3.3985f };
	Local_250[6 /*3*/] = { -1076.7117f, -1651.3168f, 3.5013f };
	Local_250[7 /*3*/] = { -1083.7156f, -1672.5491f, 3.7051f };
	Local_250[8 /*3*/] = { -1067.6807f, -1662.1759f, 3.6078f };
	Local_250[9 /*3*/] = { -1067.0642f, -1670.2799f, 3.4729f };
	func_162(8, 12, 1);
	func_162(9, 12, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(__LIB_13__::func_741(1, 0), true);
	return 1;
}

int func_672(int iParam0)//Position - 0x5EA13
{
	int iVar0;
	int iVar1;
	iVar0 = func_330(iParam0, 3, -1);
	iVar1 = func_330(iParam0, 4, -1);
	return (iVar0 + iVar1 * 100);
}

void func_673()//Position - 0x5EA36
{
	func_675();
	sLocal_46 = "ARM2";
	cLocal_107 = "AR2AUD";
	iLocal_258 = joaat("U_M_O_Tramp_01");
	iLocal_259 = joaat("G_M_Y_MexGoon_01");
	iLocal_260 = joaat("G_M_Y_MexGoon_03");
	iLocal_249 = joaat("IG_LamarDavis");
	Local_94[0 /*14*/] = PLAYER::PLAYER_PED_ID();
	func_674(17, 0, 2);
	func_674(0, 0, 11);
	func_674(1, 2, 9);
	func_674(2, 2, 8);
	func_674(3, 3, 4);
	func_674(4, 7, 10);
	func_674(5, 0, 11);
	func_674(6, 7, 8);
	func_674(7, 2, 9);
	func_674(8, 2, 8);
	func_674(9, 2, 6);
	func_674(10, 6, 8);
	func_674(11, 6, 8);
	func_674(12, 2, 8);
	func_674(13, 2, 6);
	func_674(14, 6, 8);
	func_674(15, 0, 6);
	func_674(16, 4, 8);
	func_674(18, 6, 8);
	func_674(19, 2, 6);
	PED::SET_PED_ALLOW_HURT_COMBAT_FOR_ALL_MISSION_PEDS(false);
}

void func_674(int iParam0, int iParam1, int iParam2)//Position - 0x5EB26
{
	Local_50[iParam0 /*3*/] = iParam1;
	Local_50[iParam0 /*3*/].f_1 = iParam2;
}

void func_675()//Position - 0x5EB40
{
	Local_93 = { Local_93 };
	PED::ADD_RELATIONSHIP_GROUP("MYFRIEND", &iLocal_97);
	PED::ADD_RELATIONSHIP_GROUP("FOE", &iLocal_98);
	PED::ADD_RELATIONSHIP_GROUP("WARY", &iLocal_100);
	PED::ADD_RELATIONSHIP_GROUP("IGNORE", &iLocal_99);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_97, iLocal_98);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_98, iLocal_97);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_97, iLocal_99);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_98, iLocal_99);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_98, iLocal_100);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_99, iLocal_97);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_99, iLocal_98);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_100, iLocal_97);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_100, iLocal_99);
}

void func_676(int iParam0)//Position - 0x5EBE9
{
	func_663(iParam0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_677()//Position - 0x5EBFB
{
	int iVar0;
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		if (!__LIB_0__::func_134())
		{
			iVar0 = __LIB_0__::func_380();
			if (iVar0 != -1)
			{
				if (!func_5(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_37__::func_360();
		}
	}
}

