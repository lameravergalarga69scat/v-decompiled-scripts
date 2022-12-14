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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
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
	var uLocal_85 = -1;
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
	int iLocal_101 = 0;
	bool bLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	struct<270> Local_109 = { 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1, -1, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	struct<11> Local_110[32];
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	bool bLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	struct<8> Local_130[10];
	var uLocal_131[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	var uLocal_136 = 0;
	int iLocal_137 = 0;
	char* sLocal_138 = NULL;
	var uLocal_139 = 16;
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
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	int iLocal_306 = 0;
	struct<21> Local_307 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_114 = -2;
	iLocal_115 = -1;
	sLocal_138 = "";
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_5666(ScriptParam_307);
	}
	else
	{
		func_5611();
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_5611();
		}
		Global_1943929.f_2 = Local_109.f_267;
		Global_1943929.f_3 = Local_109.f_268;
		switch (func_5605(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ALARM_BELL_02", false, -1))
				{
					if (func_5604() == 1)
					{
						if (func_5603())
						{
							func_5602();
							if (func_5601())
							{
								__LIB_30__::func_713(169, 1, func_5599(), 0);
								func_5583();
								__LIB_22__::func_262();
							}
							else
							{
								__LIB_30__::func_713(169, 0, func_5599(), 0);
							}
							Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/] = 1;
						}
					}
					else if (func_5604() == 4)
					{
						Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/] = 3;
					}
				}
				break;
			case 1:
				if (__LIB_30__::func_667(1))
				{
					Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/] = 2;
				}
				if (func_5604() == 1)
				{
					func_5565();
					func_1152();
					func_460();
					func_444();
					if (!func_443())
					{
						if (func_5601() || func_441())
						{
							__LIB_31__::func_599(&(Global_1637407.f_534), &Global_1637407, 28, &(Global_1637407.f_1), &(Global_1637407.f_117), -1, 0, 0);
						}
					}
					else
					{
						func_278();
					}
					func_220();
					func_219();
				}
				else if (func_5604() == 4)
				{
					Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/] = 3;
				}
				func_213();
				break;
			case 3:
				__LIB_1__::func_399(&(Local_109.f_224));
				if (__LIB_1__::func_398(&(Local_109.f_224)))
				{
					Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/] = 4;
				}
				break;
			case 2:
				Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/] = 4;
			case 4:
				func_5611();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_5604())
			{
				case 0:
					if (func_5599() > -1)
					{
						func_209();
						func_207();
						func_206();
						func_203();
						if (func_43())
						{
							STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_109.f_267), &(Local_109.f_268));
							func_37();
							Local_109.f_0 = 1;
							Local_109.f_218 = NETWORK::PARTICIPANT_ID_TO_INT();
							Local_109.f_219 = PLAYER::PLAYER_ID();
							__LIB_30__::func_713(169, 1, func_5599(), 0);
						}
					}
					break;
				case 1:
					func_29();
					func_203();
					func_22();
					func_4();
					if (func_2())
					{
						Local_109.f_0 = 4;
					}
					else if (__LIB_15__::func_374())
					{
						Local_109.f_0 = 4;
					}
					break;
				case 4:
					break;
				}
		}
	}
}

int func_2()//Position - 0x30A
{
	if (__LIB_0__::func_114())
	{
		return 1;
	}
	if (BitTest(Local_109.f_1, 2))
	{
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x334
{
	switch (Local_109.f_214)
	{
		case 0:
			func_19();
			func_17();
			if (func_443())
			{
				func_15();
				func_5();
			}
			if (BitTest(Local_109.f_1, 1))
			{
				Local_109.f_214 = 2;
			}
			else if (BitTest(Local_109.f_1, 3))
			{
				Local_109.f_214 = 2;
			}
			else if (BitTest(Local_109.f_1, 4))
			{
				Local_109.f_214 = 2;
			}
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

void func_5()//Position - 0x3A7
{
	int iVar0;
	int iVar1;
	if (Local_109.f_215 > -1)
	{
		return;
	}
	if (!func_12())
	{
		return;
	}
	if (!__LIB_0__::func_864(&(Local_109.f_228)))
	{
		if (BitTest(Local_109.f_1, 6))
		{
			if (BitTest(Local_109.f_1, 11))
			{
				if (!BitTest(Local_109.f_1, 7))
				{
					__LIB_0__::func_795(&(Local_109.f_228), 0, 0);
				}
			}
		}
	}
	if (__LIB_0__::func_864(&(Local_109.f_228)))
	{
		if (Local_109.f_222 > 0)
		{
			if (BitTest(Local_109.f_1, 7))
			{
				__LIB_0__::func_794(&(Local_109.f_228));
				Local_109.f_222 = 255;
			}
			else
			{
				iVar0 = __LIB_15__::func_503();
				iVar1 = __LIB_15__::func_288();
				if (__LIB_0__::func_937(&(Local_109.f_228), iVar0, 0))
				{
					__LIB_0__::func_794(&(Local_109.f_228));
					Local_109.f_222 = (Local_109.f_222 - iVar1);
					if (Local_109.f_222 < 0)
					{
						Local_109.f_222 = 0;
					}
				}
			}
		}
		if (Local_109.f_222 <= 0)
		{
			if (!BitTest(Local_109.f_1, 9))
			{
				MISC::SET_BIT(&(Local_109.f_1), 9);
			}
		}
	}
}

int func_12()//Position - 0x54D
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_2))
	{
		if (__LIB_0__::func_939(Local_109.f_2[0 /*10*/].f_2))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2), -1, false);
			if (iVar0 != 0)
			{
				if (!PED::IS_PED_INJURED(iVar0))
				{
					if (!PED::IS_PED_A_PLAYER(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_15()//Position - 0x602
{
	if (!func_443())
	{
		return;
	}
	if (!BitTest(Local_109.f_1, 6))
	{
		if (!__LIB_0__::func_864(&(Local_109.f_234)))
		{
			__LIB_0__::func_795(&(Local_109.f_234), 0, 0);
		}
		if (__LIB_0__::func_937(&(Local_109.f_234), __LIB_21__::func_377(), 0))
		{
			MISC::SET_BIT(&(Local_109.f_1), 6);
		}
	}
}

void func_17()//Position - 0x65A
{
	if (!func_443())
	{
		return;
	}
	if (!__LIB_0__::func_864(&(Local_109.f_238)))
	{
		__LIB_0__::func_795(&(Local_109.f_238), 0, 0);
	}
	else if (__LIB_0__::func_937(&(Local_109.f_238), __LIB_30__::func_680(), 0))
	{
		MISC::SET_BIT(&(Local_109.f_1), 15);
	}
}

void func_19()//Position - 0x6AC
{
	if (func_443())
	{
		return;
	}
	if (!__LIB_0__::func_864(&(Local_109.f_236)))
	{
		__LIB_0__::func_795(&(Local_109.f_236), 0, 0);
		return;
	}
	else if (!__LIB_0__::func_937(&(Local_109.f_236), func_21(), 0))
	{
		return;
	}
	if (!__LIB_0__::func_864(&(Local_109.f_226)))
	{
		__LIB_0__::func_795(&(Local_109.f_226), 0, 0);
	}
	else if (__LIB_0__::func_937(&(Local_109.f_226), func_20(), 0))
	{
		MISC::SET_BIT(&(Local_109.f_1), 3);
	}
}

int func_20()//Position - 0x720
{
	return Global_262145.f_16654 /* Tunable: EXEC_DEFEND_TIMER_UNDER_ATTACK */;
}

int func_21()//Position - 0x72F
{
	return Local_109.f_223;
}

void func_22()//Position - 0x73B
{
	int iVar0;
	bool bVar1;
	if (func_28())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		bVar1 = false;
		while (bVar1 < 10)
		{
			switch (Local_109.f_2[bVar1 /*10*/].f_9)
			{
				case 0:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[bVar1 /*10*/].f_1))
					{
						if (func_443())
						{
							Local_109.f_2[bVar1 /*10*/].f_9 = 8;
						}
						else
						{
							Local_109.f_2[bVar1 /*10*/].f_9 = 6;
						}
					}
					break;
				case 8:
					if (BitTest(Local_109.f_1, 6))
					{
						Local_109.f_2[bVar1 /*10*/].f_9 = 1;
					}
					else
					{
						func_25(iVar0, bVar1);
					}
					break;
				case 1:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[bVar1 /*10*/].f_1))
					{
						if (func_443())
						{
							func_25(iVar0, bVar1);
						}
					}
					break;
				case 2:
					break;
				case 3:
					if (func_443())
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[bVar1 /*10*/].f_1))
						{
							if (!__LIB_0__::func_951(Local_109.f_2[bVar1 /*10*/].f_1))
							{
								if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_109.f_2[bVar1 /*10*/].f_1)))
								{
									Local_109.f_2[bVar1 /*10*/].f_9 = 7;
								}
							}
						}
					}
					break;
				case 5:
					break;
				case 4:
					break;
				case 6:
					break;
				case 7:
					func_23(bVar1);
					break;
			}
			bVar1++;
		}
	}
}

void func_23(bool bParam0)//Position - 0x889
{
	if (func_443())
	{
		if (bParam0 == 1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[bParam0 /*10*/].f_1))
			{
				if (!__LIB_0__::func_951(Local_109.f_2[bParam0 /*10*/].f_1))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_109.f_2[bParam0 /*10*/].f_1)))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_1))
						{
							if (__LIB_0__::func_951(Local_109.f_2[0 /*10*/].f_1))
							{
								Local_109.f_2[bParam0 /*10*/].f_9 = 3;
							}
						}
					}
				}
			}
		}
	}
}

void func_25(int iParam0, bool bParam1)//Position - 0x920
{
	if (!__LIB_0__::func_951(Local_109.f_2[bParam1 /*10*/].f_1))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_109.f_2[bParam1 /*10*/].f_1)))
		{
			if (BitTest(Local_109.f_205, bParam1))
			{
				MISC::SET_BIT(&(Local_109.f_204), bParam1);
				iParam0 = NETWORK::NET_TO_PED(Local_109.f_2[bParam1 /*10*/].f_1);
				if (__LIB_12__::func_748(&iParam0))
				{
					Local_109.f_2[bParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_109.f_2[bParam1 /*10*/].f_9 = 7;
				}
			}
			else if (BitTest(Local_109.f_206, bParam1))
			{
				MISC::SET_BIT(&(Local_109.f_204), bParam1);
				iParam0 = NETWORK::NET_TO_PED(Local_109.f_2[bParam1 /*10*/].f_1);
				if (__LIB_12__::func_748(&iParam0))
				{
					Local_109.f_2[bParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_109.f_2[bParam1 /*10*/].f_9 = 7;
				}
			}
			else if (BitTest(Local_109.f_207, bParam1))
			{
				MISC::SET_BIT(&(Local_109.f_204), bParam1);
				iParam0 = NETWORK::NET_TO_PED(Local_109.f_2[bParam1 /*10*/].f_1);
				if (__LIB_12__::func_748(&iParam0))
				{
					Local_109.f_2[bParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_109.f_2[bParam1 /*10*/].f_9 = 7;
				}
			}
			else if (func_26())
			{
				MISC::SET_BIT(&(Local_109.f_204), bParam1);
				iParam0 = NETWORK::NET_TO_PED(Local_109.f_2[bParam1 /*10*/].f_1);
				if (__LIB_12__::func_748(&iParam0))
				{
					Local_109.f_2[bParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_109.f_2[bParam1 /*10*/].f_9 = 7;
				}
			}
			else
			{
				func_23(bParam1);
			}
		}
		else if (Local_109.f_2[bParam1 /*10*/].f_9 != 7)
		{
			Local_109.f_2[bParam1 /*10*/].f_9 = 7;
		}
	}
}

int func_26()//Position - 0xA92
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_1))
	{
		if (__LIB_0__::func_951(Local_109.f_2[0 /*10*/].f_1))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[1 /*10*/].f_1))
	{
		if (__LIB_0__::func_951(Local_109.f_2[1 /*10*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_28()//Position - 0xB0E
{
	return ((((((BitTest(Local_109.f_1, 1) || BitTest(Local_109.f_1, 3)) || BitTest(Local_109.f_1, 4)) || BitTest(Local_109.f_1, 5)) || BitTest(Local_109.f_1, 8)) || BitTest(Local_109.f_1, 9)) || BitTest(Local_109.f_1, 15));
}

void func_29()//Position - 0xB67
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	iVar0 = 0;
	bVar1 = false;
	bVar2 = -1;
	bVar3 = false;
	bVar4 = true;
	if (Local_109.f_0 != 4)
	{
		bLocal_113 = false;
		while (bLocal_113 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bLocal_113)))
			{
				bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bLocal_113));
				if (!__LIB_2__::func_40(bVar5, 0))
				{
					if (__LIB_1__::func_693(bVar5, 1, 1))
					{
					}
					func_33(bLocal_113);
					func_32(bLocal_113);
					if (func_443())
					{
						if (!BitTest(Local_109.f_1, 8))
						{
							if (BitTest(Local_110[bLocal_113 /*11*/].f_1, 9))
							{
								MISC::SET_BIT(&(Local_109.f_1), 8);
							}
						}
						if (!BitTest(Local_109.f_1, 6))
						{
							if (BitTest(Local_110[bLocal_113 /*11*/].f_1, 7))
							{
								MISC::SET_BIT(&(Local_109.f_1), 6);
							}
						}
						if (!BitTest(Local_109.f_1, 11))
						{
							if (BitTest(Local_110[bLocal_113 /*11*/].f_1, 10))
							{
								MISC::SET_BIT(&(Local_109.f_1), 11);
							}
						}
						if (!BitTest(Local_109.f_217, bLocal_113))
						{
							if (BitTest(Local_110[bLocal_113 /*11*/].f_1, 8))
							{
								MISC::SET_BIT(&(Local_109.f_217), bLocal_113);
							}
						}
						else if (!BitTest(Local_110[bLocal_113 /*11*/].f_1, 8))
						{
							MISC::CLEAR_BIT(&(Local_109.f_217), bLocal_113);
						}
						if (bVar2 == -1)
						{
							if (BitTest(Local_110[bLocal_113 /*11*/].f_1, 3))
							{
								bVar2 = bLocal_113;
							}
						}
						if (!BitTest(Local_109.f_1, 4))
						{
							if (BitTest(Local_110[bLocal_113 /*11*/].f_1, 2))
							{
								MISC::SET_BIT(&(Local_109.f_1), 4);
								Local_109.f_221 = Local_109.f_216;
							}
						}
						if (!BitTest(Local_109.f_1, 17))
						{
							if (BitTest(Local_110[bLocal_113 /*11*/].f_1, 15))
							{
								MISC::SET_BIT(&(Local_109.f_1), 17);
							}
						}
						if (bVar4)
						{
							if (BitTest(Local_109.f_1, 4))
							{
								if (!BitTest(Local_110[bLocal_113 /*11*/].f_1, 14))
								{
									bVar4 = false;
								}
							}
							else
							{
								bVar4 = false;
							}
						}
					}
					else if (!BitTest(Local_109.f_1, 13))
					{
						if (BitTest(Local_110[bLocal_113 /*11*/].f_1, 11))
						{
							MISC::SET_BIT(&(Local_109.f_1), 13);
						}
					}
					if (!BitTest(Local_109.f_1, 2))
					{
						if (!bVar3)
						{
							if (func_28())
							{
								if (!BitTest(Local_110[bLocal_113 /*11*/].f_1, 4))
								{
									bVar3 = true;
								}
							}
							else
							{
								bVar3 = true;
							}
						}
					}
					if (!BitTest(Local_109.f_1, 16))
					{
						if (BitTest(Local_110[bLocal_113 /*11*/].f_1, 13))
						{
							MISC::SET_BIT(&(Local_109.f_1), 16);
						}
					}
				}
			}
			else if (!BitTest(Local_109.f_1, 5))
			{
				if (Local_109.f_218 > -1)
				{
					if (bLocal_113 == Local_109.f_218)
					{
						MISC::SET_BIT(&(Local_109.f_1), 5);
					}
				}
			}
			bLocal_113++;
		}
		func_31();
		bVar1 = false;
		while (bVar1 < 10)
		{
			if (BitTest(Local_109.f_209, bVar1))
			{
				iVar0++;
			}
			bVar1++;
		}
		if (Local_109.f_213 != iVar0)
		{
			Local_109.f_213 = iVar0;
		}
		if (!BitTest(Local_109.f_1, 1))
		{
			if (iVar0 >= func_30())
			{
				MISC::SET_BIT(&(Local_109.f_1), 1);
			}
		}
		if (func_443())
		{
			if (!BitTest(Local_109.f_1, 7))
			{
				if (Local_109.f_217 != 0)
				{
					MISC::SET_BIT(&(Local_109.f_1), 7);
				}
			}
			else if (Local_109.f_217 == 0)
			{
				MISC::CLEAR_BIT(&(Local_109.f_1), 7);
			}
			if (!func_28())
			{
				if (Local_109.f_215 != bVar2)
				{
					Local_109.f_215 = bVar2;
					if (Local_109.f_215 > -1)
					{
						iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_109.f_215));
						Local_109.f_216 = iVar6;
					}
					else
					{
						Local_109.f_216 = -1;
					}
				}
			}
			if (!BitTest(Local_109.f_1, 18))
			{
				if (bVar4)
				{
					MISC::SET_BIT(&(Local_109.f_1), 18);
				}
			}
		}
		if (!BitTest(Local_109.f_1, 2))
		{
			if (!bVar3)
			{
				MISC::SET_BIT(&(Local_109.f_1), 2);
			}
		}
	}
}

int func_30()//Position - 0xEC1
{
	switch (Local_109.f_197)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 8:
			return 6;
			break;
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 20:
			return 8;
			break;
		case 7:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 21:
			return 10;
			break;
	}
	return 8;
}

void func_31()//Position - 0xF69
{
	bool bVar0;
	if (func_443())
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[bVar0 /*10*/].f_1))
		{
			if (!BitTest(Local_109.f_209, bVar0))
			{
				if (!__LIB_0__::func_864(&(Local_109.f_240[bVar0 /*2*/])))
				{
					if (__LIB_0__::func_951(Local_109.f_2[bVar0 /*10*/].f_1))
					{
						__LIB_0__::func_795(&(Local_109.f_240[bVar0 /*2*/]), 0, 0);
					}
				}
				else if (__LIB_0__::func_937(&(Local_109.f_240[bVar0 /*2*/]), 10000, 0))
				{
					MISC::SET_BIT(&(Local_109.f_209), bVar0);
				}
			}
		}
		bVar0++;
	}
}

void func_32(bool bParam0)//Position - 0xFF9
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (!BitTest(Local_109.f_205, bVar0))
		{
			if (BitTest(Local_110[bParam0 /*11*/].f_5, bVar0))
			{
				MISC::SET_BIT(&(Local_109.f_205), bVar0);
			}
		}
		if (!BitTest(Local_109.f_206, bVar0))
		{
			if (BitTest(Local_110[bParam0 /*11*/].f_2, bVar0))
			{
				MISC::SET_BIT(&(Local_109.f_206), bVar0);
			}
		}
		if (!BitTest(Local_109.f_208, bVar0))
		{
			if (BitTest(Local_110[bParam0 /*11*/].f_3, bVar0))
			{
				MISC::SET_BIT(&(Local_109.f_208), bVar0);
			}
		}
		if (!BitTest(Local_109.f_207, bVar0))
		{
			if (BitTest(Local_110[bParam0 /*11*/].f_4, bVar0))
			{
				MISC::SET_BIT(&(Local_109.f_207), bVar0);
			}
		}
		if (!BitTest(Local_109.f_209, bVar0))
		{
			if (BitTest(Local_110[bParam0 /*11*/].f_6, bVar0))
			{
				MISC::SET_BIT(&(Local_109.f_209), bVar0);
			}
			else if (BitTest(Local_110[bParam0 /*11*/].f_7, bVar0))
			{
				MISC::SET_BIT(&(Local_109.f_209), bVar0);
			}
			else if (BitTest(Local_110[bParam0 /*11*/].f_8, bVar0))
			{
				MISC::SET_BIT(&(Local_109.f_209), bVar0);
			}
		}
		bVar0++;
	}
}

void func_33(bool bParam0)//Position - 0x1100
{
	int iVar0;
	if (func_443())
	{
		return;
	}
	if (!BitTest(Local_109.f_210, bParam0))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[iVar0 /*10*/].f_2))
			{
				if (__LIB_0__::func_939(Local_109.f_2[iVar0 /*10*/].f_2))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_109.f_2[iVar0 /*10*/].f_2), NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bParam0)), true);
					MISC::SET_BIT(&(Local_109.f_210), bParam0);
				}
			}
			else
			{
				MISC::SET_BIT(&(Local_109.f_210), bParam0);
			}
			iVar0++;
		}
	}
}

void func_37()//Position - 0x121E
{
	struct<3> Var0;
	Var0 = { func_40() };
	if (!__LIB_0__::func_86(Var0))
	{
		__LIB_30__::func_754(&(Local_109.f_269), Var0, 1, 1103626240);
	}
}

Vector3 func_40()//Position - 0x12BB
{
	return __LIB_15__::func_340(Local_109.f_197 + 1);
}

int func_43()//Position - 0x157F
{
	int iVar0;
	if (func_443())
	{
		func_66();
		if (!func_65())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < func_30())
		{
			func_44(iVar0);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < func_30())
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[iVar0 /*10*/].f_1))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_44(int iParam0)//Position - 0x15ED
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	iVar0 = func_64();
	fVar3 = __LIB_20__::func_120();
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[iParam0 /*10*/].f_1))
	{
		if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
		{
			if (__LIB_0__::func_799(iVar0))
			{
				if (__LIB_0__::func_78(Local_109.f_2[iParam0 /*10*/].f_5, 0f, 0f, 0f, 0))
				{
					if (func_47(iParam0, &Var1, &uVar2))
					{
						Local_109.f_2[iParam0 /*10*/].f_5 = { Var1 };
						Local_109.f_2[iParam0 /*10*/].f_8 = uVar2;
					}
				}
				else if (__LIB_1__::func_672(&(Local_109.f_2[iParam0 /*10*/].f_1), 22, iVar0, Local_109.f_2[iParam0 /*10*/].f_5, Local_109.f_2[iParam0 /*10*/].f_8, 1, 1, 1))
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_109.f_2[iParam0 /*10*/].f_1), true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_109.f_2[iParam0 /*10*/].f_1), true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_109.f_2[iParam0 /*10*/].f_1), Global_1837197);
					PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_109.f_2[iParam0 /*10*/].f_1), true);
					if ((iParam0 % 2) == 0)
					{
						iVar4 = ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_109.f_2[iParam0 /*10*/].f_1));
						fVar5 = SYSTEM::TO_FLOAT(iVar4);
						if (fVar3 != 0f)
						{
							fVar5 = (fVar5 * fVar3);
						}
						iVar4 = SYSTEM::ROUND(fVar5);
						ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_PED(Local_109.f_2[iParam0 /*10*/].f_1), iVar4);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_109.f_2[iParam0 /*10*/].f_1), iVar4, 0);
						PED::SET_PED_ARMOUR(NETWORK::NET_TO_PED(Local_109.f_2[iParam0 /*10*/].f_1), 100);
						WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_109.f_2[iParam0 /*10*/].f_1), joaat("WEAPON_ASSAULTRIFLE"), 9999999, false, true);
					}
					else
					{
						WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_109.f_2[iParam0 /*10*/].f_1), joaat("WEAPON_ASSAULTRIFLE"), 9999999, false, true);
					}
					PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_109.f_2[iParam0 /*10*/].f_1), 281, true);
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_109.f_2[iParam0 /*10*/].f_1), 1);
					PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_109.f_2[iParam0 /*10*/].f_1), 42, true);
					PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_109.f_2[iParam0 /*10*/].f_1), true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_109.f_2[iParam0 /*10*/].f_1), 43, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_109.f_2[iParam0 /*10*/].f_1), 44, true);
					PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_109.f_2[iParam0 /*10*/].f_1), 1);
					if (func_45(iParam0))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_109.f_2[iParam0 /*10*/].f_1), 0, false);
					}
					PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_109.f_2[iParam0 /*10*/].f_1), 146, true);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_109.f_2[iParam0 /*10*/].f_1), Local_109.f_2[iParam0 /*10*/].f_5, 7f, false, false);
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_109.f_2[iParam0 /*10*/].f_1), true);
					MISC::SET_BIT(&(Local_109.f_203), iParam0);
				}
			}
		}
	}
	return 0;
}

int func_45(int iParam0)//Position - 0x1897
{
	switch (Local_109.f_197)
	{
		case 1:
			if (iParam0 == 0 || iParam0 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_47(int iParam0, var uParam1, var uParam2)//Position - 0x1926
{
	bool bVar0;
	bool bVar1;
	bVar0 = iParam0;
	if (!__LIB_0__::func_78(Local_109.f_103[bVar0 /*5*/], 0f, 0f, 0f, 0))
	{
		if (!Local_109.f_103[bVar0 /*5*/].f_4)
		{
			if (__LIB_31__::func_589(Local_109.f_103[bVar0 /*5*/], 1f, 1065353216, 1065353216, 1084227584, 0, 0, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam1 = { Local_109.f_103[bVar0 /*5*/] };
				*uParam2 = Local_109.f_103[bVar0 /*5*/].f_3;
				Local_109.f_103[bVar0 /*5*/].f_4 = 1;
				return 1;
			}
			else
			{
				if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Local_109.f_103[bVar0 /*5*/], 1f))
				{
					bVar1 = true;
				}
				else if (PED::IS_ANY_PED_NEAR_POINT(Local_109.f_103[bVar0 /*5*/], Local_109.f_103[bVar0 /*5*/].f_1, (Local_109.f_103[bVar0 /*5*/].f_2 + 1f), 1f) || PED::IS_ANY_PED_NEAR_POINT(Local_109.f_103[bVar0 /*5*/], 1f))
				{
					bVar1 = true;
				}
				if (bVar1)
				{
					if (!BitTest(Local_109.f_212, bVar0))
					{
						MISC::CLEAR_AREA(Local_109.f_103[bVar0 /*5*/], 5f, true, false, false, true);
						MISC::SET_BIT(&(Local_109.f_212), bVar0);
					}
				}
			}
		}
	}
	return 0;
}

int func_64()//Position - 0x2038
{
	int iVar0;
	switch (Local_109.f_195)
	{
		case 0:
			iVar0 = joaat("G_M_M_ArmGoon_01");
			break;
		case 1:
			iVar0 = joaat("G_M_M_MexBoss_01");
			break;
		case 2:
			iVar0 = joaat("G_M_Y_Korean_02");
			break;
	}
	return iVar0;
}

int func_65()//Position - 0x207B
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_2))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[1 /*10*/].f_1))
	{
		return 0;
	}
	return 1;
}

int func_66()//Position - 0x20C3
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	struct<31> Var4;
	struct<3> Var5;
	iVar0 = func_202();
	iVar1 = func_64();
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_2))
	{
		if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
		{
			if (__LIB_0__::func_799(iVar0))
			{
				if (!__LIB_0__::func_78(Local_109.f_262, 0f, 0f, 0f, 0))
				{
					Var2 = { Local_109.f_262 };
					fVar3 = Local_109.f_265;
					if (!BitTest(Local_109.f_211, 0))
					{
						MISC::CLEAR_AREA(Var2, 5f, true, false, false, true);
						MISC::SET_BIT(&(Local_109.f_211), 0);
					}
					if (__LIB_0__::func_957(&(Local_109.f_2[0 /*10*/].f_2), iVar0, Var2, fVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(NETWORK::NET_TO_PED(Local_109.f_2[0 /*10*/].f_2), true);
						func_198(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2));
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2), false);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2), false, 0);
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2), true);
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2), false);
						VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2), true);
						VEHICLE::SET_VEHICLE_DAMAGE_SCALE(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2), 0.08f);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2), Global_262145.f_15597 /* Tunable: EXEC_CONTRABAND_BUY_HEALTH */, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2), true);
						VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2), true);
						VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2), true);
						VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2), 2, 2);
						VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2), 3, 2);
					}
				}
				else
				{
					Var4.f_4 = 1125515264;
					Var4.f_5 = 1;
					Var4.f_6 = 1;
					Var4.f_8 = 1082130432;
					Var4.f_9 = 1176255488;
					Var4.f_10 = 1;
					Var4.f_13 = 1;
					Var4.f_15 = 2;
					Var4.f_22 = 2;
					Var4.f_25 = 1;
					Var4.f_26 = 1;
					Var4.f_29 = 1123024896;
					Var4.f_30 = 1;
					Var4.f_0 = 0f;
					Var4.f_1 = 0;
					Var4.f_4 = 200f;
					Var4.f_5 = 1;
					Var4.f_6 = 1;
					Var4.f_12 = 1;
					Var4.f_3 = 1;
					Var5 = { __LIB_30__::func_409(Local_109.f_2[0 /*10*/].f_5, Local_109.f_2[0 /*10*/].f_8, 20f) };
					if (func_68(Local_109.f_2[0 /*10*/].f_5, Var5, iVar0, 0, &(Local_109.f_262), &(Local_109.f_2[0 /*10*/].f_8), &Var4))
					{
						Local_109.f_265 = Local_109.f_2[0 /*10*/].f_8;
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_2))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_1))
		{
			if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
			{
				if (__LIB_0__::func_799(iVar1))
				{
					if (__LIB_0__::func_930(&(Local_109.f_2[0 /*10*/].f_1), Local_109.f_2[0 /*10*/].f_2, 22, iVar1, -1, 1, 1, 1))
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_109.f_2[0 /*10*/].f_1), true);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_109.f_2[0 /*10*/].f_1), true, 0f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_109.f_2[0 /*10*/].f_1), true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_109.f_2[0 /*10*/].f_1), Global_1837197);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_109.f_2[0 /*10*/].f_1), 42, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_109.f_2[0 /*10*/].f_1), 3, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_109.f_2[0 /*10*/].f_1), 2, true);
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_1))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[1 /*10*/].f_1))
		{
			if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
			{
				if (__LIB_0__::func_799(iVar1))
				{
					if (__LIB_0__::func_930(&(Local_109.f_2[1 /*10*/].f_1), Local_109.f_2[0 /*10*/].f_2, 22, iVar1, 0, 1, 1, 1))
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_109.f_2[1 /*10*/].f_1), true);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_109.f_2[1 /*10*/].f_1), true, 0f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_109.f_2[1 /*10*/].f_1), true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_109.f_2[1 /*10*/].f_1), Global_1837197);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_109.f_2[1 /*10*/].f_1), 42, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_109.f_2[1 /*10*/].f_1), 3, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_109.f_2[1 /*10*/].f_1), 2, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_109.f_2[1 /*10*/].f_1), 5, true);
						WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_109.f_2[1 /*10*/].f_1), joaat("WEAPON_MICROSMG"), 9999999, false, true);
						Local_109.f_2[1 /*10*/].f_2 = Local_109.f_2[0 /*10*/].f_2;
					}
				}
			}
		}
	}
	return 0;
}

int func_68(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x25C8
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<61> Var5;
	struct<61> Var6;
	bVar0 = false;
	if (uParam6->f_14)
	{
		if (uParam6->f_25)
		{
			uParam6->f_25 = 0;
		}
	}
	if (!__LIB_1__::func_533())
	{
		return 0;
	}
	if (__LIB_1__::func_479() && !Global_2667225.f_680 == MISC::GET_FRAME_COUNT())
	{
		if (!Global_2667225.f_676 == 0)
		{
			Global_2667225.f_676 = 0;
			__LIB_0__::func_854();
			__LIB_0__::func_814();
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_675)
	{
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_853(0))
			{
				return 0;
			}
			else
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	else
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_677) > 30000)
		{
			Global_2667225.f_676 = 0;
		}
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) > __LIB_0__::func_853(1))
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_182(Param0))
		{
			if (__LIB_1__::func_558(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2667225.f_676 == 0)
	{
		if (SYSTEM::VDIST(Global_2667225.f_695, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2667225.f_698 != iParam2)
		{
			return 0;
		}
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2667225.f_676 == 0)
	{
		Global_2667225.f_682 = 0;
		Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_675 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_695 = { Param0 };
		Global_2667225.f_698 = iParam2;
		Global_2667225.f_681 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		__LIB_0__::func_851();
		__LIB_0__::func_854();
		if (!uParam6->f_27 || (((((((__LIB_22__::func_428(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2815059.f_924) && !Global_2815059.f_913) && !Global_2815059.f_921) && !Global_2815059.f_925) && !Global_2815059.f_933) && !Global_2815059.f_945))
		{
			__LIB_36__::func_245(Param0, iParam2);
		}
		if (__LIB_36__::func_244(Param0))
		{
			__LIB_36__::func_245(Param0, iParam2);
		}
		Global_2667225.f_676 = 2;
	}
	switch (Global_2667225.f_676)
	{
		case 2:
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2667225.f_683 = { Param0 };
				Global_2667225.f_686 = 0f;
				if (Global_2815059.f_924)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam6->f_3 && __LIB_31__::func_589(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !__LIB_4__::func_986(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0))
				{
					Global_2667225.f_683 = { Param0 };
					Global_2667225.f_686 = *uParam5;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam3;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam6->f_5;
					Var5.f_4 = *uParam6;
					Var5.f_13 = uParam6->f_1;
					Var5.f_14 = uParam6->f_2;
					Var5.f_5 = uParam6->f_4;
					Var5.f_15 = uParam6->f_6;
					Var5.f_11 = uParam6->f_7;
					Var5.f_6 = uParam6->f_8;
					Var5.f_7 = uParam6->f_9;
					Var5.f_16 = uParam6->f_10;
					Var5.f_17 = uParam6->f_11;
					Var5 = { Param1 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam2;
					Var5.f_31 = uParam6->f_13;
					if (uParam6->f_32 && Global_2667225.f_682 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam6->f_30;
						Var5.f_29 = uParam6->f_31;
					}
					Var5.f_48 = uParam6->f_14;
					Var5.f_56 = uParam6->f_25;
					Var5.f_57 = uParam6->f_26;
					Var5.f_49 = uParam6->f_29;
					Var5.f_59 = uParam6->f_33;
					Var5.f_60 = uParam6->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam6->f_22[iVar1];
						iVar1++;
					}
					func_89(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var5);
				}
				__LIB_6__::func_433(Global_2667225.f_683, Global_2667225.f_686, iParam2, &(Global_2667225.f_673));
				Global_2667225.f_671 = 0;
				Global_2667225.f_672 = 0;
				Global_2667225.f_682++;
				Global_2667225.f_678 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_676 = 3;
			}
			break;
		case 3:
			if (Global_2667225.f_671)
			{
				if (Global_2667225.f_673 == Global_2667225.f_674)
				{
					if (Global_2667225.f_672)
					{
						if (uParam6->f_12 && !uParam6->f_11)
						{
							if (__LIB_2__::func_765(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 1036831949))
							{
								Global_2667225.f_676 = 4;
								Global_2667225.f_700 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_83(Global_2667225.f_683, 0);
						__LIB_0__::func_821(-1);
					}
				}
				else
				{
					Global_2667225.f_671 = 0;
					Global_2667225.f_672 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_678) > 3000)
			{
				__LIB_0__::func_821(-1);
			}
			break;
		case 4:
			if (uParam6->f_12 && !uParam6->f_11)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_700) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_699))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2667225.f_699))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2667225.f_699))
							{
								if (__LIB_36__::func_491(Global_2667225.f_683, Global_2667225.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || __LIB_8__::func_243(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_83(Global_2667225.f_683, 0);
									__LIB_0__::func_821(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_83(Global_2667225.f_683, 0);
								__LIB_0__::func_821(-1);
							}
						}
					}
					else
					{
						__LIB_0__::func_821(-1);
					}
				}
				else
				{
					__LIB_0__::func_821(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 5:
			Global_2667225.f_683 = { Param0 };
			Global_2667225.f_686 = 0f;
			Var6.f_6 = 1082130432;
			Var6.f_7 = 1176255488;
			Var6.f_8 = 1;
			Var6.f_10 = 1;
			Var6.f_13 = 1;
			Var6.f_15 = 1;
			Var6.f_16 = 1;
			Var6.f_31 = 1;
			Var6.f_34 = joaat("tailgater");
			Var6.f_38 = 2;
			Var6.f_45 = 2;
			Var6.f_49 = 1123024896;
			Var6.f_53 = 999;
			Var6.f_54 = 1176256410;
			Var6.f_55 = 1;
			Var6.f_56 = 1;
			Var6.f_57 = 1;
			Var6.f_9 = iParam3;
			Var6.f_3 = 3.5f;
			Var6.f_10 = uParam6->f_5;
			Var6.f_4 = *uParam6;
			Var6.f_12 = 1;
			Var6.f_13 = 0;
			Var6.f_15 = uParam6->f_6;
			Var6.f_11 = uParam6->f_7;
			Var6.f_6 = uParam6->f_8;
			Var6.f_7 = uParam6->f_9;
			Var6 = { Param1 };
			Var6.f_34 = iParam2;
			Var6.f_31 = uParam6->f_13;
			Var6.f_30 = 1;
			Var6.f_48 = uParam6->f_14;
			Var6.f_56 = uParam6->f_25;
			Var6.f_57 = uParam6->f_26;
			Var6.f_30 = uParam6->f_30;
			Var6.f_29 = uParam6->f_31;
			Var6.f_59 = uParam6->f_33;
			Var6.f_60 = uParam6->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var6.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
				Var6.f_45[iVar1] = uParam6->f_22[iVar1];
				iVar1++;
			}
			Var6.f_49 = uParam6->f_29;
			func_89(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var6);
			Global_2667225.f_676 = 6;
			break;
		case 6:
			bVar0 = true;
			break;
	}
	Global_2667225.f_695 = { Param0 };
	Global_2667225.f_698 = iParam2;
	Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (bVar0)
	{
		Global_2667225.f_516 = 0;
		*uParam4 = { Global_2667225.f_683 };
		*uParam5 = Global_2667225.f_686;
		__LIB_1__::func_527(1);
		return 1;
	}
	return 0;
}

void func_83(struct<3> Param0, int iParam1)//Position - 0x3895
{
	struct<3> Var0;
	if (iParam1 == 0 && __LIB_0__::func_822(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2667225.f_2737[iParam1 /*3*/] };
		Global_2667225.f_2737[iParam1 /*3*/] = { Param0 };
		func_83(Var0, iParam1 + 1);
	}
}

void func_89(var uParam0, var uParam1, var uParam2)//Position - 0x3B0C
{
	int iVar0;
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_138(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_90(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_90(var uParam0, var uParam1, var uParam2)//Position - 0x3B7B
{
	int iVar0;
	struct<3> Var1;
	float* fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar26;
	struct<3> Var27;
	float* fVar28;
	bool bVar29;
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_134(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (__LIB_1__::func_572(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	bVar8 = true;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		bVar8 = false;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		bVar8 = false;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2674786.f_162 = 0;
	Global_2674786.f_163 = 0;
	Global_2674786.f_164 = -99;
	Global_2674786.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2674786.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (__LIB_1__::func_452(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &Var1);
			bVar10 = false;
			if (Global_2674786.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2674786.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar6)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar6))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!__LIB_2__::func_784(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!__LIB_1__::func_434(Var1))
									{
										Var1 = { __LIB_2__::func_783(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, bVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!__LIB_2__::func_990(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (__LIB_1__::func_546(Var1, uParam2))
														{
															if ((uParam2->f_48 && !__LIB_1__::func_572(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_108(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_134(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!__LIB_2__::func_989(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (__LIB_31__::func_589(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (__LIB_31__::func_589(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_8__::func_243(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = __LIB_36__::func_243(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162)
																										{
																											Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2674786.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2674786.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2674786.f_162 == 0)
																									{
																										Global_2674786[0 /*3*/] = { Var1 };
																										Global_2674786.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_98(Var1, fVar2, iVar14);
																													iVar14 = Global_2674786.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2674786.f_162++;
																									if (Global_2674786.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2674786[Global_2674786.f_162 /*3*/] = { Var1 };
																									Global_2674786.f_121[Global_2674786.f_162] = fVar2;
																									Global_2674786.f_162++;
																									if (__LIB_1__::func_546(Var1, uParam2))
																									{
																										Global_2674786.f_163++;
																									}
																									if (Global_2674786.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2674786.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
						{
							func_96(0, uParam2);
						}
						iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						Var25 = { Global_2674786[0 /*3*/] };
						uVar26 = Global_2674786.f_121[0];
						Global_2674786[0 /*3*/] = { Global_2674786[iVar24 /*3*/] };
						Global_2674786.f_121[0] = Global_2674786.f_121[iVar24];
						Global_2674786[iVar24 /*3*/] = { Var25 };
						Global_2674786.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						__LIB_2__::func_856(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, bVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_134(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || __LIB_1__::func_572(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				__LIB_6__::func_448(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2674786.f_164 = iVar6;
	}
	return 0;
}

void func_96(int iParam0, var uParam1)//Position - 0x48DE
{
	if (!__LIB_1__::func_546(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		__LIB_0__::func_824(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_96(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_96(iParam0 + 1, uParam1);
	}
}

void func_98(struct<3> Param0, float fParam1, int iParam2)//Position - 0x4984
{
	struct<3> Var0;
	var uVar1;
	Var0 = { Global_2674786[iParam2 /*3*/] };
	uVar1 = Global_2674786.f_121[iParam2];
	Global_2674786[iParam2 /*3*/] = { Param0 };
	Global_2674786.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2674786.f_162 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_98(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_108(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x4E61
{
	if (__LIB_36__::func_491(Param0, fParam1, iParam2, iParam3, iParam4) || __LIB_4__::func_986(Param0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_134(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x6349
{
	int iVar0;
	bool bVar1;
	if (func_182(Param0))
	{
		if (func_137(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (__LIB_2__::func_766(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (__LIB_0__::func_822(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				__LIB_1__::func_450(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_137(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x6593
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2672169[iVar0 /*17*/].f_16))
			{
				if (__LIB_1__::func_528(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2672169[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2672169[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_137(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_138(var uParam0, var uParam1, var uParam2)//Position - 0x666E
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	var uVar14;
	if (Global_2667225.f_1754 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_134(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (__LIB_1__::func_572(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2674786.f_162 = 0;
		Global_2674786.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2674786.f_121[iVar5] = 0f;
			iVar5++;
		}
		if (uParam2->f_30)
		{
			__LIB_1__::func_454(*uParam0);
		}
		else if (uParam2->f_29)
		{
			__LIB_0__::func_838();
		}
		else
		{
			__LIB_0__::func_837();
		}
		iVar1 = 0;
		while (iVar1 < Global_2667225.f_1754)
		{
			iVar2 = Global_2667225.f_2160[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2667225.f_1755[iVar2 /*4*/] };
				fVar4 = Global_2667225.f_1755[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_108(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_134(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar6 = uParam2->f_31;
										bVar7 = true;
										iVar8 = 1;
										fVar9 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											fVar9 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0.375f);
											}
										}
										else
										{
											bVar7 = true;
											iVar8 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar9 = (fVar9 * 0.375f);
												}
											}
										}
										bVar10 = false;
										if (!__LIB_2__::func_989(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (__LIB_31__::func_589(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (__LIB_31__::func_589(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_8__::func_243(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar10 = true;
											}
										}
										if (bVar10)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar12 = 0f;
												if (uParam2->f_52)
												{
													iVar11 = __LIB_36__::func_243(Var3, uParam2->f_54, &fVar12);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar11 < uParam2->f_53)
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162)
															{
																Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
																Global_2674786.f_121[iVar5] = 0f;
																iVar5++;
															}
															Global_2674786.f_162 = 0;
															uParam2->f_53 = iVar11;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2674786.f_162 == 0)
														{
															Global_2674786[0 /*3*/] = { Var3 };
															Global_2674786.f_121[0] = fVar4;
														}
														else
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162 + 1)
															{
																if (iVar5 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar5 /*3*/], uParam2->f_35))
																	{
																		func_98(Var3, fVar4, iVar5);
																		iVar5 = Global_2674786.f_162 + 1;
																	}
																}
																iVar5++;
															}
														}
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
													else
													{
														Global_2674786[Global_2674786.f_162 /*3*/] = { Var3 };
														Global_2674786.f_121[Global_2674786.f_162] = fVar4;
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar4;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2674786.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
				{
					func_96(0, uParam2);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
				Var13 = { Global_2674786[0 /*3*/] };
				uVar14 = Global_2674786.f_121[0];
				Global_2674786[0 /*3*/] = { Global_2674786[iVar0 /*3*/] };
				Global_2674786.f_121[0] = Global_2674786.f_121[iVar0];
				Global_2674786[iVar0 /*3*/] = { Var13 };
				Global_2674786.f_121[iVar0] = uVar14;
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2667225.f_1754 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_1754);
				*uParam0 = { Global_2667225.f_1755[iVar0 /*4*/] };
				*uParam1 = Global_2667225.f_1755[iVar0 /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_182(struct<3> Param0)//Position - 0xFBEE
{
	int iVar0;
	struct<3> Var1;
	if (!Global_2667225.f_515 && !Global_2667225.f_516)
	{
		if (!Global_2667225.f_45.f_317)
		{
			if (!__LIB_4__::func_934(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!__LIB_1__::func_560(Param0, 1008981770))
			{
				if (!func_137(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_137(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = __LIB_1__::func_559(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { __LIB_0__::func_852(&(Global_2667225.f_45[iVar0 /*12*/])) };
					if (!func_137(&Var1, 0, 0, 0, 1))
					{
						if (!func_137(&Param0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_198(int iParam0)//Position - 0x1002A
{
	if (!func_443())
	{
		switch (Local_109.f_195)
		{
			case 0:
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iParam0, 0);
				break;
			case 1:
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iParam0, 2);
				break;
			case 2:
				break;
		}
	}
	else
	{
		VEHICLE::SET_VEHICLE_COLOURS(iParam0, 15, 1);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 0, 156);
	}
}

int func_202()//Position - 0x102FB
{
	int iVar0;
	switch (Local_109.f_195)
	{
		case 0:
			iVar0 = joaat("mule");
			break;
		case 1:
			iVar0 = joaat("mule");
			break;
		case 2:
			iVar0 = joaat("mule");
			break;
	}
	return iVar0;
}

void func_203()//Position - 0x1033E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (func_443())
	{
		return;
	}
	if (Local_109.f_209 != 0)
	{
		return;
	}
	if (!__LIB_0__::func_864(&(Local_109.f_230)))
	{
		__LIB_0__::func_795(&(Local_109.f_230), 0, 0);
	}
	iVar1 = func_205();
	if (!__LIB_0__::func_937(&(Local_109.f_230), 15000, 0))
	{
		bVar0 = false;
		while (bVar0 < func_204())
		{
			iVar2 = 0;
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_199[bVar0]))
			{
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (__LIB_0__::func_799(iVar1))
					{
						if (!__LIB_0__::func_78(Local_109.f_179[bVar0 /*5*/], 0f, 0f, 0f, 0))
						{
							if (__LIB_31__::func_589(Local_109.f_179[bVar0 /*5*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								if (!BitTest(Local_109.f_211, bVar0))
								{
									MISC::CLEAR_AREA(Local_109.f_179[bVar0 /*5*/], 5f, true, false, false, true);
									MISC::SET_BIT(&(Local_109.f_211), bVar0);
								}
								if (__LIB_0__::func_957(&(Local_109.f_199[bVar0]), iVar1, Local_109.f_179[bVar0 /*5*/], Local_109.f_179[bVar0 /*5*/].f_3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(NETWORK::NET_TO_VEH(Local_109.f_199[bVar0]), true);
									func_198(NETWORK::NET_TO_VEH(Local_109.f_199[bVar0]));
								}
							}
							else
							{
								if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Local_109.f_179[bVar0 /*5*/], 6f))
								{
									iVar2 = 1;
								}
								else if (PED::IS_ANY_PED_NEAR_POINT(Local_109.f_179[bVar0 /*5*/], Local_109.f_179[bVar0 /*5*/].f_1, (Local_109.f_179[bVar0 /*5*/].f_2 + 1f), 1f) || PED::IS_ANY_PED_NEAR_POINT(Local_109.f_179[bVar0 /*5*/], 1f))
								{
									iVar2 = 1;
								}
								if (iVar2 == 1)
								{
									if (!BitTest(Local_109.f_211, bVar0))
									{
										MISC::CLEAR_AREA(Local_109.f_179[bVar0 /*5*/], 6f, true, false, false, true);
										MISC::SET_BIT(&(Local_109.f_211), bVar0);
									}
								}
							}
						}
					}
				}
			}
			bVar0++;
		}
	}
}

int func_204()//Position - 0x10518
{
	switch (Local_109.f_197)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 8:
			return 2;
			break;
	}
	return 3;
}

int func_205()//Position - 0x1055B
{
	int iVar0;
	switch (Local_109.f_195)
	{
		case 0:
			iVar0 = joaat("speedo");
			break;
		case 1:
			iVar0 = joaat("burrito3");
			break;
		case 2:
			iVar0 = joaat("gburrito2");
			break;
	}
	return iVar0;
}

void func_206()//Position - 0x1059E
{
	if (BitTest(Local_109.f_1, 12))
	{
		return;
	}
	switch (Local_109.f_197)
	{
		case 0:
			Local_109.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(31.1862f, -2594.6572f, -50f, 68.0247f, -2551.956f, 50f, true, true, true, true);
			break;
		case 1:
			Local_109.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(-1109.6642f, -1297.6097f, -50f, -1074.6531f, -1223.7249f, 50f, true, true, true, true);
			break;
		case 2:
			Local_109.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(859.394f, -1082.3821f, -50f, 914.3219f, -1008.5259f, 50f, true, true, true, true);
			break;
		case 3:
			Local_109.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(240.8218f, -1997.9752f, -50f, 243.8696f, -1933.8944f, 50f, true, true, true, true);
			break;
		case 4:
			Local_109.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(-451.6602f, 171.9769f, -50f, -397.3188f, 222.9419f, 50f, true, true, true, true);
			break;
		case 5:
			Local_109.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(-1059.2943f, -2044.054f, -50f, -1011.896f, -1884.0565f, 140.3546f, true, true, true, true);
			break;
		case 6:
			Local_109.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(-1284.7428f, -836.3273f, -50f, -1246.3171f, -774.2995f, 50f, true, true, true, true);
			break;
		case 7:
			Local_109.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(-924.5807f, -2758.8704f, -50.9462f, -789.014f, -2731.5176f, 112.94f, true, true, true, true);
			break;
		case 8:
			Local_109.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(253.779f, -3039.7131f, -50f, 308.8536f, -2986.068f, 50f, true, true, true, true);
			break;
		case 9:
			Local_109.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(1515.6313f, -2191.2659f, -50f, 1597.1119f, -2059.625f, 150f, true, true, true, true);
			break;
		case 10:
			Local_109.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(-348.6945f, -2731.759f, -50f, -230.5551f, -2670.3486f, 50.0003f, true, true, true, true);
			break;
		case 11:
			Local_109.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(464.591f, -669.6168f, -50f, 598.1423f, -499.8008f, 50f, true, true, true, true);
			break;
		case 12:
			Local_109.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(-564.2241f, -1836.4879f, -50f, -498.0586f, -1768.2267f, 50f, true, true, true, true);
			break;
		case 13:
			Local_109.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(-357.3719f, -1413.9023f, -50f, -287.5592f, -1320.6299f, 50f, true, true, true, true);
			break;
		case 14:
			Local_109.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(302.4282f, 333.8127f, -50f, 359.9608f, 361.1776f, 150f, true, true, true, true);
			break;
		case 15:
			Local_109.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(883.963f, -1600.5353f, -50f, 980.0828f, -1532.5786f, 50f, true, true, true, true);
			break;
		case 16:
			Local_109.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(691.8906f, -946.6288f, -50f, 792.8187f, -856.2645f, 50f, true, true, true, true);
			break;
		case 17:
			Local_109.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(931.0925f, -2203.3213f, -50f, 1054.6865f, -2104.6958f, 50f, true, true, true, true);
			break;
		case 18:
			Local_109.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(909.5201f, -2548.7773f, -50f, 1079.5756f, -2480.2214f, 50f, true, true, true, true);
			break;
		case 19:
			Local_109.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(-285.6858f, 169.6409f, -50f, -231.663f, 249.5953f, 150f, true, true, true, true);
			break;
		case 20:
			Local_109.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(490.689f, -2005.8566f, -50f, 557.8708f, -1886.3623f, 124.4746f, true, true, true, true);
			break;
		case 21:
			Local_109.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(88.2044f, -2235.0532f, -50f, 199.7525f, -2183.485f, 50f, true, true, true, true);
			break;
	}
	MISC::SET_BIT(&(Local_109.f_1), 12);
}

void func_207()//Position - 0x10A3E
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (Local_109.f_223 == 0)
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		Var1 = { func_208() };
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, false);
		if (fVar2 > 2500f)
		{
			Local_109.f_223 = Global_262145.f_16649 /* Tunable: EXEC_DEFEND_GRACE_TIMER_TIER1 */;
		}
		else if (fVar2 > 2000f)
		{
			Local_109.f_223 = Global_262145.f_16650 /* Tunable: EXEC_DEFEND_GRACE_TIMER_TIER2 */;
		}
		else if (fVar2 > 1500f)
		{
			Local_109.f_223 = Global_262145.f_16651 /* Tunable: EXEC_DEFEND_GRACE_TIMER_TIER3 */;
		}
		else if (fVar2 > 1000f)
		{
			Local_109.f_223 = Global_262145.f_16652 /* Tunable: EXEC_DEFEND_GRACE_TIMER_TIER4 */;
		}
		else
		{
			Local_109.f_223 = Global_262145.f_16653 /* Tunable: EXEC_DEFEND_GRACE_TIMER_TIER5 */;
		}
	}
}

Vector3 func_208()//Position - 0x10AE1
{
	switch (Local_109.f_197)
	{
		case 0:
			return 57.4898f, -2566.763f, 5.2753f;
		case 1:
			return -1080.1978f, -1262.1761f, 4.6922f;
		case 2:
			return 902.1754f, -1028.3446f, 33.9666f;
		case 3:
			return 248.97f, -1955.6112f, 22.1629f;
		case 4:
			return -420.2774f, 183.9635f, 79.5661f;
		case 5:
			return -1048.9014f, -2013.7379f, 12.1616f;
		case 6:
			return -1269.405f, -811.931f, 16.1114f;
		case 7:
			return -872.9662f, -2735.341f, 12.9538f;
		case 8:
			return 273.7365f, -3019.4114f, 4.7024f;
		case 9:
			return 1561.4086f, -2134.2717f, 76.4751f;
		case 10:
			return -304.1417f, -2695.4072f, 5.0003f;
		case 11:
			return 504.3576f, -651.182f, 23.7512f;
		case 12:
			return -529.7162f, -1779.5006f, 20.3865f;
		case 13:
			return -297.2056f, -1362.5072f, 30.2971f;
		case 14:
			return 346.6934f, 338.6926f, 104.2013f;
		case 15:
			return 962.1667f, -1557.6842f, 29.8012f;
		case 16:
			return 749.9839f, -887.2051f, 24.0879f;
		case 17:
			return 1008.7801f, -2144.6582f, 29.5516f;
		case 18:
			return 1010.923f, -2523.4255f, 27.3091f;
		case 19:
			return -259.173f, 200.7894f, 84.0941f;
		case 20:
			return 540.001f, -1945.5951f, 23.9847f;
		case 21:
			return 95.5855f, -2215.1797f, 5.1712f;
		default:
	}
	return 941.8403f, -1560.5939f, 30.9244f;
}

void func_209()//Position - 0x10D11
{
	int iVar0;
	if (!__LIB_0__::func_78(Local_109.f_103[0 /*5*/], 0f, 0f, 0f, 0))
	{
		return;
	}
	func_210();
	iVar0 = func_5599();
	switch (iVar0)
	{
		case 99:
			switch (Local_109.f_197)
			{
				case 0:
					Local_109.f_2[0 /*10*/].f_5 = { 81.7918f, -2554.3748f, 5f };
					Local_109.f_2[0 /*10*/].f_8 = 268.2536f;
					break;
				case 1:
					Local_109.f_2[0 /*10*/].f_5 = { -1065.6927f, -1275.4443f, 4.9818f };
					Local_109.f_2[0 /*10*/].f_8 = 120.7465f;
					break;
				case 2:
					Local_109.f_2[0 /*10*/].f_5 = { 905.6629f, -1003.3467f, 33.8966f };
					Local_109.f_2[0 /*10*/].f_8 = 271.0984f;
					break;
				case 3:
					Local_109.f_2[0 /*10*/].f_5 = { 231.9853f, -1935.5781f, 22.4437f };
					Local_109.f_2[0 /*10*/].f_8 = 322.2929f;
					break;
				case 4:
					Local_109.f_2[0 /*10*/].f_5 = { -399.3887f, 230.6774f, 82.492f };
					Local_109.f_2[0 /*10*/].f_8 = 270.2787f;
					break;
				case 5:
					Local_109.f_2[0 /*10*/].f_5 = { -1086.6389f, -2005.4624f, 12.0063f };
					Local_109.f_2[0 /*10*/].f_8 = 11.8952f;
					break;
				case 6:
					Local_109.f_2[0 /*10*/].f_5 = { -1244.4287f, -884.493f, 11.165f };
					Local_109.f_2[0 /*10*/].f_8 = 126.962f;
					break;
				case 7:
					Local_109.f_2[0 /*10*/].f_5 = { -835.0118f, -2630.9985f, 12.9249f };
					Local_109.f_2[0 /*10*/].f_8 = 328.7649f;
					break;
				case 8:
					Local_109.f_2[0 /*10*/].f_5 = { 296.2087f, -3013.9534f, 4.9212f };
					Local_109.f_2[0 /*10*/].f_8 = 0.24f;
					break;
				case 9:
					Local_109.f_2[0 /*10*/].f_5 = { 1413.2491f, -1954.9441f, 64.6238f };
					Local_109.f_2[0 /*10*/].f_8 = 326.5977f;
					break;
				case 10:
					Local_109.f_2[0 /*10*/].f_5 = { -318.5519f, -2671.6782f, 5.0502f };
					Local_109.f_2[0 /*10*/].f_8 = 318.3914f;
					break;
				case 11:
					Local_109.f_2[0 /*10*/].f_5 = { 504.8237f, -711.9799f, 23.9127f };
					Local_109.f_2[0 /*10*/].f_8 = 177.966f;
					break;
				case 12:
					Local_109.f_2[0 /*10*/].f_5 = { -524.3798f, -1770.9642f, 20.3834f };
					Local_109.f_2[0 /*10*/].f_8 = 245.3696f;
					break;
				case 13:
					Local_109.f_2[0 /*10*/].f_5 = { -286.5591f, -1359.2378f, 30.3043f };
					Local_109.f_2[0 /*10*/].f_8 = 180.1492f;
					break;
				case 14:
					Local_109.f_2[0 /*10*/].f_5 = { 343.9299f, 321.1165f, 103.4987f };
					Local_109.f_2[0 /*10*/].f_8 = 75.8829f;
					break;
				case 15:
					Local_109.f_2[0 /*10*/].f_5 = { 974.6287f, -1540.7456f, 29.4172f };
					Local_109.f_2[0 /*10*/].f_8 = 4.069f;
					break;
				case 16:
					Local_109.f_2[0 /*10*/].f_5 = { 777.0914f, -937.4927f, 24.7044f };
					Local_109.f_2[0 /*10*/].f_8 = 186.7581f;
					break;
				case 17:
					Local_109.f_2[0 /*10*/].f_5 = { 997.4642f, -2087.7593f, 30.2136f };
					Local_109.f_2[0 /*10*/].f_8 = 275.8696f;
					break;
				case 18:
					Local_109.f_2[0 /*10*/].f_5 = { 987.9297f, -2461.6755f, 27.3773f };
					Local_109.f_2[0 /*10*/].f_8 = 85.6201f;
					break;
				case 19:
					Local_109.f_2[0 /*10*/].f_5 = { -227.6549f, 188.3366f, 78.676f };
					Local_109.f_2[0 /*10*/].f_8 = 178.634f;
					break;
				case 20:
					Local_109.f_2[0 /*10*/].f_5 = { 460.4135f, -1932.8925f, 23.6765f };
					Local_109.f_2[0 /*10*/].f_8 = 295.2699f;
					break;
				case 21:
					Local_109.f_2[0 /*10*/].f_5 = { 241.4945f, -2093.446f, 16.3114f };
					Local_109.f_2[0 /*10*/].f_8 = 225.7471f;
					break;
				default:
					Local_109.f_2[0 /*10*/].f_5 = { 974.6287f, -1540.7456f, 29.4172f };
					Local_109.f_2[0 /*10*/].f_8 = 4.069f;
					break;
			}
			break;
		case 0:
			switch (Local_109.f_197)
			{
				case 0:
					Local_109.f_103[0 /*5*/] = { 48.6581f, -2562.1414f, 5f };
					Local_109.f_103[0 /*5*/].f_3 = 18.2728f;
					Local_109.f_103[1 /*5*/] = { 51.6031f, -2571.1228f, 5.0046f };
					Local_109.f_103[1 /*5*/].f_3 = 345.3663f;
					Local_109.f_103[2 /*5*/] = { 56.6838f, -2564.7573f, 5.0641f };
					Local_109.f_103[2 /*5*/].f_3 = 55.4785f;
					Local_109.f_103[3 /*5*/] = { 62.9447f, -2585.068f, 5.0046f };
					Local_109.f_103[3 /*5*/].f_3 = 271.0223f;
					Local_109.f_103[4 /*5*/] = { 65.0669f, -2563.4424f, 5f };
					Local_109.f_103[4 /*5*/].f_3 = 316.6382f;
					Local_109.f_103[5 /*5*/] = { 47.7942f, -2575.388f, 9.0407f };
					Local_109.f_103[5 /*5*/].f_3 = 37.4409f;
					Local_109.f_179[0 /*5*/] = { 61.478f, -2560.5059f, 5f };
					Local_109.f_179[0 /*5*/].f_3 = 238.6826f;
					Local_109.f_179[1 /*5*/] = { 49.6015f, -2564.766f, 5.0046f };
					Local_109.f_179[1 /*5*/].f_3 = 154.2891f;
					break;
				case 1:
					Local_109.f_103[0 /*5*/] = { -1078.7441f, -1271.7002f, 9.5625f };
					Local_109.f_103[0 /*5*/].f_3 = 274.4253f;
					Local_109.f_103[1 /*5*/] = { -1087.2325f, -1257.1041f, 9.5625f };
					Local_109.f_103[1 /*5*/].f_3 = 354.2453f;
					Local_109.f_103[2 /*5*/] = { -1072.7245f, -1267.8407f, 4.9577f };
					Local_109.f_103[2 /*5*/].f_3 = 193.2412f;
					Local_109.f_103[3 /*5*/] = { -1085.99f, -1254.8246f, 4.431f };
					Local_109.f_103[3 /*5*/].f_3 = 304.0791f;
					Local_109.f_103[4 /*5*/] = { -1081.9518f, -1259.0288f, 4.5607f };
					Local_109.f_103[4 /*5*/].f_3 = 251.1138f;
					Local_109.f_103[5 /*5*/] = { -1063.5377f, -1257.8419f, 5.0206f };
					Local_109.f_103[5 /*5*/].f_3 = 31.8546f;
					Local_109.f_179[0 /*5*/] = { -1063.2668f, -1260.4924f, 5.0582f };
					Local_109.f_179[0 /*5*/].f_3 = 134.6062f;
					Local_109.f_179[1 /*5*/] = { -1080.0712f, -1255.5256f, 4.4927f };
					Local_109.f_179[1 /*5*/].f_3 = 282.3716f;
					break;
				case 2:
					Local_109.f_103[0 /*5*/] = { 902.5689f, -1021.5115f, 33.9664f };
					Local_109.f_103[0 /*5*/].f_3 = 337.3475f;
					Local_109.f_103[1 /*5*/] = { 894.0451f, -1020.7263f, 33.9665f };
					Local_109.f_103[1 /*5*/].f_3 = 303.745f;
					Local_109.f_103[2 /*5*/] = { 901.3245f, -1033.8204f, 33.9661f };
					Local_109.f_103[2 /*5*/].f_3 = 343.5762f;
					Local_109.f_103[3 /*5*/] = { 909.4354f, -1035.1904f, 33.9662f };
					Local_109.f_103[3 /*5*/].f_3 = 175.276f;
					Local_109.f_103[4 /*5*/] = { 900.9361f, -1044.5077f, 38.9808f };
					Local_109.f_103[4 /*5*/].f_3 = 150.7164f;
					Local_109.f_103[5 /*5*/] = { 894.3841f, -1032.6805f, 38.9808f };
					Local_109.f_103[5 /*5*/].f_3 = 327.9728f;
					Local_109.f_179[0 /*5*/] = { 900.9302f, -1019.0526f, 33.967f };
					Local_109.f_179[0 /*5*/].f_3 = 294.1935f;
					Local_109.f_179[1 /*5*/] = { 905.7681f, -1034.471f, 33.9661f };
					Local_109.f_179[1 /*5*/].f_3 = 222.0787f;
					break;
				case 3:
					Local_109.f_103[0 /*5*/] = { 241.6933f, -1941.7563f, 22.6063f };
					Local_109.f_103[0 /*5*/].f_3 = 54.0685f;
					Local_109.f_103[1 /*5*/] = { 247.0794f, -1955.0525f, 22.2033f };
					Local_109.f_103[1 /*5*/].f_3 = 350.0075f;
					Local_109.f_103[2 /*5*/] = { 260.179f, -1959.1653f, 22.0967f };
					Local_109.f_103[2 /*5*/].f_3 = 284.5439f;
					Local_109.f_103[3 /*5*/] = { 258.183f, -1967.2618f, 21.487f };
					Local_109.f_103[3 /*5*/].f_3 = 173.9707f;
					Local_109.f_103[4 /*5*/] = { 248.7987f, -1959.507f, 27.2402f };
					Local_109.f_103[4 /*5*/].f_3 = 231.9236f;
					Local_109.f_103[5 /*5*/] = { 233.8911f, -1946.9797f, 27.2402f };
					Local_109.f_103[5 /*5*/].f_3 = 342.0352f;
					Local_109.f_179[0 /*5*/] = { 260.5989f, -1964.07f, 21.7532f };
					Local_109.f_179[0 /*5*/].f_3 = 147.0433f;
					Local_109.f_179[1 /*5*/] = { 241.5964f, -1944.4635f, 22.3678f };
					Local_109.f_179[1 /*5*/].f_3 = 73.2698f;
					break;
				case 4:
					Local_109.f_103[0 /*5*/] = { -405.6343f, 182.3138f, 79.2232f };
					Local_109.f_103[0 /*5*/].f_3 = 306.9303f;
					Local_109.f_103[1 /*5*/] = { -420.0244f, 184.8413f, 79.6851f };
					Local_109.f_103[1 /*5*/].f_3 = 228.321f;
					Local_109.f_103[2 /*5*/] = { -428.4716f, 185.8607f, 79.7578f };
					Local_109.f_103[2 /*5*/].f_3 = 44.5389f;
					Local_109.f_103[3 /*5*/] = { -435.6789f, 179.3023f, 74.3213f };
					Local_109.f_103[3 /*5*/].f_3 = 85.0906f;
					Local_109.f_103[4 /*5*/] = { -399.305f, 190.302f, 80.5987f };
					Local_109.f_103[4 /*5*/].f_3 = 85.1506f;
					Local_109.f_103[5 /*5*/] = { -438.713f, 183.3993f, 74.2764f };
					Local_109.f_103[5 /*5*/].f_3 = 351.0685f;
					Local_109.f_179[0 /*5*/] = { -436.8526f, 183.3829f, 74.3109f };
					Local_109.f_179[0 /*5*/].f_3 = 7.2644f;
					Local_109.f_179[1 /*5*/] = { -405.3793f, 187.1801f, 79.9864f };
					Local_109.f_179[1 /*5*/].f_3 = 354.7918f;
					break;
				case 5:
					Local_109.f_103[0 /*5*/] = { -1069.2056f, -2014.5576f, 12.1616f };
					Local_109.f_103[0 /*5*/].f_3 = 201.0558f;
					Local_109.f_103[1 /*5*/] = { -1063.069f, -2014.7148f, 12.1616f };
					Local_109.f_103[1 /*5*/].f_3 = 141.4469f;
					Local_109.f_103[2 /*5*/] = { -1067.4268f, -2023.773f, 12.2027f };
					Local_109.f_103[2 /*5*/].f_3 = 197.023f;
					Local_109.f_103[3 /*5*/] = { -1060.4391f, -2024.766f, 12.1616f };
					Local_109.f_103[3 /*5*/].f_3 = 152.4942f;
					Local_109.f_103[4 /*5*/] = { -1052.16f, -2022.2394f, 12.1616f };
					Local_109.f_103[4 /*5*/].f_3 = 146.7409f;
					Local_109.f_103[5 /*5*/] = { -1051.7548f, -2029.1405f, 12.1616f };
					Local_109.f_103[5 /*5*/].f_3 = 82.1706f;
					Local_109.f_103[6 /*5*/] = { -1073.1353f, -2011.0293f, 12.6172f };
					Local_109.f_103[6 /*5*/].f_3 = 214.1918f;
					Local_109.f_103[7 /*5*/] = { -1071.4408f, -2002.9307f, 14.7905f };
					Local_109.f_103[7 /*5*/].f_3 = 187.3056f;
					Local_109.f_179[0 /*5*/] = { -1052.3535f, -2025.6106f, 12.1616f };
					Local_109.f_179[0 /*5*/].f_3 = 358.8676f;
					Local_109.f_179[1 /*5*/] = { -1066.6106f, -2016.2993f, 12.1616f };
					Local_109.f_179[1 /*5*/].f_3 = 280.333f;
					Local_109.f_179[2 /*5*/] = { -1063.965f, -2024.6229f, 12.1831f };
					Local_109.f_179[2 /*5*/].f_3 = 269.67f;
					break;
				case 6:
					Local_109.f_103[0 /*5*/] = { -1280.0757f, -805.8421f, 16.508f };
					Local_109.f_103[0 /*5*/].f_3 = 57.9953f;
					Local_109.f_103[1 /*5*/] = { -1286.2313f, -811.6383f, 16.4521f };
					Local_109.f_103[1 /*5*/].f_3 = 35.4979f;
					Local_109.f_103[2 /*5*/] = { -1277.371f, -821.9402f, 16.1003f };
					Local_109.f_103[2 /*5*/].f_3 = 239.3392f;
					Local_109.f_103[3 /*5*/] = { -1267.4879f, -824.3138f, 16.0992f };
					Local_109.f_103[3 /*5*/].f_3 = 144.6389f;
					Local_109.f_103[4 /*5*/] = { -1262.1808f, -824.9617f, 16.0996f };
					Local_109.f_103[4 /*5*/].f_3 = 39.795f;
					Local_109.f_103[5 /*5*/] = { -1287.2303f, -791.7753f, 16.5858f };
					Local_109.f_103[5 /*5*/].f_3 = 140.3937f;
					Local_109.f_179[0 /*5*/] = { -1273.3267f, -823.6479f, 16.0992f };
					Local_109.f_179[0 /*5*/].f_3 = 254.419f;
					Local_109.f_179[1 /*5*/] = { -1285.171f, -807.566f, 16.5295f };
					Local_109.f_179[1 /*5*/].f_3 = 146.8347f;
					break;
				case 7:
					Local_109.f_103[0 /*5*/] = { -886.5272f, -2713.6912f, 12.8285f };
					Local_109.f_103[0 /*5*/].f_3 = 330.9706f;
					Local_109.f_103[1 /*5*/] = { -876.2014f, -2718.6611f, 12.9446f };
					Local_109.f_103[1 /*5*/].f_3 = 335.853f;
					Local_109.f_103[2 /*5*/] = { -882.2947f, -2732.5527f, 12.8285f };
					Local_109.f_103[2 /*5*/].f_3 = 33.564f;
					Local_109.f_103[3 /*5*/] = { -884.4581f, -2724.4863f, 12.8285f };
					Local_109.f_103[3 /*5*/].f_3 = 22.4268f;
					Local_109.f_103[4 /*5*/] = { -887.4197f, -2737.2673f, 12.8285f };
					Local_109.f_103[4 /*5*/].f_3 = 356.0724f;
					Local_109.f_103[5 /*5*/] = { -894.7762f, -2736.815f, 12.8285f };
					Local_109.f_103[5 /*5*/].f_3 = 164.3784f;
					Local_109.f_103[6 /*5*/] = { -897.211f, -2750.0132f, 12.9445f };
					Local_109.f_103[6 /*5*/].f_3 = 321.2128f;
					Local_109.f_103[7 /*5*/] = { -882.6691f, -2745.8525f, 12.9362f };
					Local_109.f_103[7 /*5*/].f_3 = 64.3587f;
					Local_109.f_103[8 /*5*/] = { -907.6017f, -2749.353f, 12.9445f };
					Local_109.f_103[8 /*5*/].f_3 = 335.7514f;
					Local_109.f_103[9 /*5*/] = { -869.9126f, -2715.025f, 12.9446f };
					Local_109.f_103[9 /*5*/].f_3 = 8.2036f;
					Local_109.f_179[0 /*5*/] = { -882.8745f, -2713.6868f, 12.8285f };
					Local_109.f_179[0 /*5*/].f_3 = 239.8798f;
					Local_109.f_179[1 /*5*/] = { -883.874f, -2728.7856f, 12.8285f };
					Local_109.f_179[1 /*5*/].f_3 = 201.2263f;
					Local_109.f_179[2 /*5*/] = { -891.2535f, -2737.4111f, 12.8285f };
					Local_109.f_179[2 /*5*/].f_3 = 92.5365f;
					break;
				case 8:
					Local_109.f_103[0 /*5*/] = { 258.4958f, -3019.8877f, 4.7612f };
					Local_109.f_103[0 /*5*/].f_3 = 190.0675f;
					Local_109.f_103[1 /*5*/] = { 273.9505f, -3013.1594f, 4.7016f };
					Local_109.f_103[1 /*5*/].f_3 = 68.4427f;
					Local_109.f_103[2 /*5*/] = { 273.0544f, -3016.9243f, 4.7049f };
					Local_109.f_103[2 /*5*/].f_3 = 136.0059f;
					Local_109.f_103[3 /*5*/] = { 274.0455f, -2995.704f, 4.7009f };
					Local_109.f_103[3 /*5*/].f_3 = 145.0681f;
					Local_109.f_103[4 /*5*/] = { 277.7727f, -3020.6057f, 10.5614f };
					Local_109.f_103[4 /*5*/].f_3 = 59.5107f;
					Local_109.f_103[5 /*5*/] = { 277.1279f, -3034.7185f, 10.5614f };
					Local_109.f_103[5 /*5*/].f_3 = 113.9025f;
					Local_109.f_179[0 /*5*/] = { 266.3998f, -3022.1362f, 4.7302f };
					Local_109.f_179[0 /*5*/].f_3 = 14.1592f;
					Local_109.f_179[1 /*5*/] = { 270.9944f, -2999.3833f, 4.7128f };
					Local_109.f_179[1 /*5*/].f_3 = 145.314f;
					break;
				case 9:
					Local_109.f_103[0 /*5*/] = { 1546.3346f, -2124.2893f, 76.1382f };
					Local_109.f_103[0 /*5*/].f_3 = 17.7805f;
					Local_109.f_103[1 /*5*/] = { 1554.3855f, -2125.2217f, 76.3125f };
					Local_109.f_103[1 /*5*/].f_3 = 10.9741f;
					Local_109.f_103[2 /*5*/] = { 1558.2241f, -2118.5322f, 76.3765f };
					Local_109.f_103[2 /*5*/].f_3 = 15.6854f;
					Local_109.f_103[3 /*5*/] = { 1547.7495f, -2143.7085f, 76.4844f };
					Local_109.f_103[3 /*5*/].f_3 = 154.3238f;
					Local_109.f_103[4 /*5*/] = { 1552.0504f, -2147.1724f, 76.5383f };
					Local_109.f_103[4 /*5*/].f_3 = 147.9245f;
					Local_109.f_103[5 /*5*/] = { 1563.3412f, -2138.1023f, 76.5841f };
					Local_109.f_103[5 /*5*/].f_3 = 149.5447f;
					Local_109.f_103[6 /*5*/] = { 1561.2439f, -2133.029f, 76.4828f };
					Local_109.f_103[6 /*5*/].f_3 = 76.8144f;
					Local_109.f_103[7 /*5*/] = { 1569.2769f, -2130.6277f, 77.3351f };
					Local_109.f_103[7 /*5*/].f_3 = 112.2364f;
					Local_109.f_179[0 /*5*/] = { 1550.6008f, -2145.9573f, 76.5271f };
					Local_109.f_179[0 /*5*/].f_3 = 296.1894f;
					Local_109.f_179[1 /*5*/] = { 1563.1381f, -2135.9429f, 76.5206f };
					Local_109.f_179[1 /*5*/].f_3 = 260.3118f;
					Local_109.f_179[2 /*5*/] = { 1550.3801f, -2123.1587f, 76.2165f };
					Local_109.f_179[2 /*5*/].f_3 = 235.2799f;
					break;
				case 10:
					Local_109.f_103[0 /*5*/] = { -307.7643f, -2684.1453f, 5.0079f };
					Local_109.f_103[0 /*5*/].f_3 = 10.2057f;
					Local_109.f_103[1 /*5*/] = { -298.4151f, -2685.3293f, 5.1595f };
					Local_109.f_103[1 /*5*/].f_3 = 34.7011f;
					Local_109.f_103[2 /*5*/] = { -309.9699f, -2692.3767f, 5.1532f };
					Local_109.f_103[2 /*5*/].f_3 = 231.6414f;
					Local_109.f_103[3 /*5*/] = { -315.5637f, -2698.447f, 6.55f };
					Local_109.f_103[3 /*5*/].f_3 = 279.1803f;
					Local_109.f_103[4 /*5*/] = { -307.4792f, -2699.0718f, 5.0003f };
					Local_109.f_103[4 /*5*/].f_3 = 2.2931f;
					Local_109.f_103[5 /*5*/] = { -304.3626f, -2700.868f, 5.0003f };
					Local_109.f_103[5 /*5*/].f_3 = 253.2487f;
					Local_109.f_103[6 /*5*/] = { -306.5913f, -2707.8364f, 5.1532f };
					Local_109.f_103[6 /*5*/].f_3 = 313.0547f;
					Local_109.f_103[7 /*5*/] = { -303.2011f, -2711.4126f, 5.0003f };
					Local_109.f_103[7 /*5*/].f_3 = 288.4283f;
					Local_109.f_179[0 /*5*/] = { -304.9815f, -2709.6204f, 5.0003f };
					Local_109.f_179[0 /*5*/].f_3 = 135.5251f;
					Local_109.f_179[1 /*5*/] = { -305.7259f, -2696.407f, 5.0003f };
					Local_109.f_179[1 /*5*/].f_3 = 207.3978f;
					Local_109.f_179[2 /*5*/] = { -303.8944f, -2685.3044f, 5.0003f };
					Local_109.f_179[2 /*5*/].f_3 = 255.2084f;
					break;
				case 11:
					Local_109.f_103[0 /*5*/] = { 518.3859f, -657.3704f, 23.7512f };
					Local_109.f_103[0 /*5*/].f_3 = 138.1634f;
					Local_109.f_103[1 /*5*/] = { 519.1835f, -649.9944f, 23.7512f };
					Local_109.f_103[1 /*5*/].f_3 = 17.4978f;
					Local_109.f_103[2 /*5*/] = { 495.9756f, -648.6689f, 31.7074f };
					Local_109.f_103[2 /*5*/].f_3 = 283.3737f;
					Local_109.f_103[3 /*5*/] = { 504.1287f, -641.0121f, 23.7369f };
					Local_109.f_103[3 /*5*/].f_3 = 303.125f;
					Local_109.f_103[4 /*5*/] = { 498.1048f, -638.1683f, 23.9727f };
					Local_109.f_103[4 /*5*/].f_3 = 289.9783f;
					Local_109.f_103[5 /*5*/] = { 499.259f, -630.4283f, 23.7512f };
					Local_109.f_103[5 /*5*/].f_3 = 194.1317f;
					Local_109.f_103[6 /*5*/] = { 508.6016f, -626.3681f, 23.7571f };
					Local_109.f_103[6 /*5*/].f_3 = 343.9152f;
					Local_109.f_103[7 /*5*/] = { 497.44f, -661.5337f, 27.617f };
					Local_109.f_103[7 /*5*/].f_3 = 199.5863f;
					Local_109.f_179[0 /*5*/] = { 517.3517f, -654.2748f, 23.7512f };
					Local_109.f_179[0 /*5*/].f_3 = 150.2542f;
					Local_109.f_179[1 /*5*/] = { 505.3363f, -645.2184f, 23.7512f };
					Local_109.f_179[1 /*5*/].f_3 = 23.9108f;
					Local_109.f_179[2 /*5*/] = { 508.3529f, -630.1296f, 23.7512f };
					Local_109.f_179[2 /*5*/].f_3 = 127.1383f;
					break;
				case 12:
					Local_109.f_103[0 /*5*/] = { -546.3519f, -1769.6938f, 20.5902f };
					Local_109.f_103[0 /*5*/].f_3 = 277.4846f;
					Local_109.f_103[1 /*5*/] = { -541.7958f, -1776.4576f, 20.5973f };
					Local_109.f_103[1 /*5*/].f_3 = 356.3462f;
					Local_109.f_103[2 /*5*/] = { -534.571f, -1772.5646f, 20.4432f };
					Local_109.f_103[2 /*5*/].f_3 = 23.1421f;
					Local_109.f_103[3 /*5*/] = { -527.7571f, -1776.2736f, 20.367f };
					Local_109.f_103[3 /*5*/].f_3 = 255.9772f;
					Local_109.f_103[4 /*5*/] = { -531.6744f, -1781.5162f, 20.4994f };
					Local_109.f_103[4 /*5*/].f_3 = 295.9945f;
					Local_109.f_103[5 /*5*/] = { -555.2966f, -1799.1818f, 21.5471f };
					Local_109.f_103[5 /*5*/].f_3 = 327.6154f;
					Local_109.f_103[6 /*5*/] = { -549.1064f, -1786.5673f, 21.012f };
					Local_109.f_103[6 /*5*/].f_3 = 334.4709f;
					Local_109.f_103[7 /*5*/] = { -518.8139f, -1785.7543f, 20.6425f };
					Local_109.f_103[7 /*5*/].f_3 = 206.6088f;
					Local_109.f_179[0 /*5*/] = { -556.8245f, -1795.3826f, 21.5195f };
					Local_109.f_179[0 /*5*/].f_3 = 204.3955f;
					Local_109.f_179[1 /*5*/] = { -531.0875f, -1774.3502f, 20.4042f };
					Local_109.f_179[1 /*5*/].f_3 = 77.9003f;
					Local_109.f_179[2 /*5*/] = { -548.1949f, -1767.8684f, 20.6224f };
					Local_109.f_179[2 /*5*/].f_3 = 102.3641f;
					break;
				case 13:
					Local_109.f_103[0 /*5*/] = { -295.7925f, -1366.3013f, 30.3114f };
					Local_109.f_103[0 /*5*/].f_3 = 200.7773f;
					Local_109.f_103[1 /*5*/] = { -294.7914f, -1361.4392f, 30.3099f };
					Local_109.f_103[1 /*5*/].f_3 = 280.8006f;
					Local_109.f_103[2 /*5*/] = { -294.8237f, -1355.1669f, 30.3168f };
					Local_109.f_103[2 /*5*/].f_3 = 223.8718f;
					Local_109.f_103[3 /*5*/] = { -291.4968f, -1352.2014f, 30.2753f };
					Local_109.f_103[3 /*5*/].f_3 = 205.2611f;
					Local_109.f_103[4 /*5*/] = { -294.7546f, -1345.7133f, 30.3095f };
					Local_109.f_103[4 /*5*/].f_3 = 323.2399f;
					Local_109.f_103[5 /*5*/] = { -291.2322f, -1339.2616f, 30.2775f };
					Local_109.f_103[5 /*5*/].f_3 = 257.2056f;
					Local_109.f_103[6 /*5*/] = { -295.7278f, -1331.4904f, 30.3084f };
					Local_109.f_103[6 /*5*/].f_3 = 75.2552f;
					Local_109.f_103[7 /*5*/] = { -293.849f, -1328.7565f, 30.2182f };
					Local_109.f_103[7 /*5*/].f_3 = 328.9491f;
					Local_109.f_179[0 /*5*/] = { -292.8152f, -1332.3851f, 30.1537f };
					Local_109.f_179[0 /*5*/].f_3 = 29.6972f;
					Local_109.f_179[1 /*5*/] = { -291.6872f, -1348.131f, 30.282f };
					Local_109.f_179[1 /*5*/].f_3 = 166.5207f;
					Local_109.f_179[2 /*5*/] = { -295.23f, -1364.2009f, 30.3097f };
					Local_109.f_179[2 /*5*/].f_3 = 108.2429f;
					break;
				case 14:
					Local_109.f_103[0 /*5*/] = { 344.5797f, 336.7456f, 104.1594f };
					Local_109.f_103[0 /*5*/].f_3 = 346.2658f;
					Local_109.f_103[1 /*5*/] = { 342.3423f, 332.3715f, 103.7572f };
					Local_109.f_103[1 /*5*/].f_3 = 102.4295f;
					Local_109.f_103[2 /*5*/] = { 341.1604f, 310.392f, 103.4193f };
					Local_109.f_103[2 /*5*/].f_3 = 61.0026f;
					Local_109.f_103[3 /*5*/] = { 346.6567f, 309.6925f, 103.1454f };
					Local_109.f_103[3 /*5*/].f_3 = 257.871f;
					Local_109.f_103[4 /*5*/] = { 350.7382f, 328.2918f, 103.2696f };
					Local_109.f_103[4 /*5*/].f_3 = 117.8644f;
					Local_109.f_103[5 /*5*/] = { 354.2978f, 327.3369f, 103.0974f };
					Local_109.f_103[5 /*5*/].f_3 = 177.6163f;
					Local_109.f_103[6 /*5*/] = { 366.9816f, 326.3944f, 102.6179f };
					Local_109.f_103[6 /*5*/].f_3 = 201.951f;
					Local_109.f_103[7 /*5*/] = { 363.9641f, 322.1239f, 102.6943f };
					Local_109.f_103[7 /*5*/].f_3 = 243.2871f;
					Local_109.f_179[0 /*5*/] = { 343.0425f, 312.0052f, 103.3437f };
					Local_109.f_179[0 /*5*/].f_3 = 258.1888f;
					Local_109.f_179[1 /*5*/] = { 360.5493f, 322.6658f, 102.7946f };
					Local_109.f_179[1 /*5*/].f_3 = 286.3943f;
					Local_109.f_179[2 /*5*/] = { 343.9996f, 332.1288f, 103.7176f };
					Local_109.f_179[2 /*5*/].f_3 = 7.4532f;
					break;
				case 15:
					Local_109.f_103[0 /*5*/] = { 962.8411f, -1572.7764f, 29.5579f };
					Local_109.f_103[0 /*5*/].f_3 = 198.1588f;
					Local_109.f_103[1 /*5*/] = { 958.9659f, -1572.3918f, 29.6097f };
					Local_109.f_103[1 /*5*/].f_3 = 93.0019f;
					Local_109.f_103[2 /*5*/] = { 974.9329f, -1566.8577f, 29.5658f };
					Local_109.f_103[2 /*5*/].f_3 = 171.6639f;
					Local_109.f_103[3 /*5*/] = { 977.1616f, -1563.3326f, 29.6385f };
					Local_109.f_103[3 /*5*/].f_3 = 4.8635f;
					Local_109.f_103[4 /*5*/] = { 961.7667f, -1559.2333f, 29.8001f };
					Local_109.f_103[4 /*5*/].f_3 = 241.449f;
					Local_109.f_103[5 /*5*/] = { 961.8814f, -1556.3632f, 29.807f };
					Local_109.f_103[5 /*5*/].f_3 = 275.0858f;
					Local_109.f_103[6 /*5*/] = { 968.3688f, -1552.0865f, 29.6598f };
					Local_109.f_103[6 /*5*/].f_3 = 176.2653f;
					Local_109.f_103[7 /*5*/] = { 965.8116f, -1547.6611f, 29.6223f };
					Local_109.f_103[7 /*5*/].f_3 = 333.7709f;
					Local_109.f_103[8 /*5*/] = { 957.9225f, -1553.8552f, 33.7974f };
					Local_109.f_103[8 /*5*/].f_3 = 308.3917f;
					Local_109.f_103[9 /*5*/] = { 957.7077f, -1566.2161f, 33.7974f };
					Local_109.f_103[9 /*5*/].f_3 = 219.3558f;
					Local_109.f_179[0 /*5*/] = { 965.2025f, -1549.9515f, 29.6078f };
					Local_109.f_179[0 /*5*/].f_3 = 41.5896f;
					Local_109.f_179[1 /*5*/] = { 974.5963f, -1564.8795f, 29.5937f };
					Local_109.f_179[1 /*5*/].f_3 = 251.9554f;
					Local_109.f_179[2 /*5*/] = { 960.7539f, -1572.7747f, 29.6016f };
					Local_109.f_179[2 /*5*/].f_3 = 322.5412f;
					break;
				case 16:
					Local_109.f_103[0 /*5*/] = { 764.532f, -917.6445f, 24.3477f };
					Local_109.f_103[0 /*5*/].f_3 = 200.6824f;
					Local_109.f_103[1 /*5*/] = { 757.4073f, -914.5825f, 24.2703f };
					Local_109.f_103[1 /*5*/].f_3 = 268.7243f;
					Local_109.f_103[2 /*5*/] = { 763.8087f, -928.9955f, 24.4204f };
					Local_109.f_103[2 /*5*/].f_3 = 359.3907f;
					Local_109.f_103[3 /*5*/] = { 762.9298f, -935.2947f, 24.4307f };
					Local_109.f_103[3 /*5*/].f_3 = 337.1544f;
					Local_109.f_103[4 /*5*/] = { 720.5742f, -888.9393f, 23.2796f };
					Local_109.f_103[4 /*5*/].f_3 = 301.5278f;
					Local_109.f_103[5 /*5*/] = { 763.72f, -888.6782f, 24.0956f };
					Local_109.f_103[5 /*5*/].f_3 = 196.7567f;
					Local_109.f_103[6 /*5*/] = { 763.0903f, -884.3161f, 23.9395f };
					Local_109.f_103[6 /*5*/].f_3 = 321.9963f;
					Local_109.f_103[7 /*5*/] = { 743.7985f, -872.6409f, 24.0443f };
					Local_109.f_103[7 /*5*/].f_3 = 251.8575f;
					Local_109.f_103[8 /*5*/] = { 741.907f, -881.8726f, 24.0428f };
					Local_109.f_103[8 /*5*/].f_3 = 268.2814f;
					Local_109.f_103[9 /*5*/] = { 752.8027f, -884.268f, 24.1054f };
					Local_109.f_103[9 /*5*/].f_3 = 282.8442f;
					Local_109.f_179[0 /*5*/] = { 763.8987f, -886.4079f, 24.0887f };
					Local_109.f_179[0 /*5*/].f_3 = 85.7335f;
					Local_109.f_179[1 /*5*/] = { 744.0313f, -877.4133f, 24.0497f };
					Local_109.f_179[1 /*5*/].f_3 = 152.0251f;
					Local_109.f_179[2 /*5*/] = { 763.1165f, -916.4111f, 24.3315f };
					Local_109.f_179[2 /*5*/].f_3 = 133.3755f;
					break;
				case 17:
					Local_109.f_103[0 /*5*/] = { 1003.0531f, -2149.7136f, 37.3448f };
					Local_109.f_103[0 /*5*/].f_3 = 182.3138f;
					Local_109.f_103[1 /*5*/] = { 1010.1691f, -2135.276f, 29.5516f };
					Local_109.f_103[1 /*5*/].f_3 = 349.7712f;
					Local_109.f_103[2 /*5*/] = { 1011.6142f, -2142.5461f, 29.5516f };
					Local_109.f_103[2 /*5*/].f_3 = 2.675f;
					Local_109.f_103[3 /*5*/] = { 1018.4288f, -2145.4795f, 29.5994f };
					Local_109.f_103[3 /*5*/].f_3 = 263.1569f;
					Local_109.f_103[4 /*5*/] = { 1020.5693f, -2148.0835f, 30.5334f };
					Local_109.f_103[4 /*5*/].f_3 = 259.3002f;
					Local_109.f_103[5 /*5*/] = { 1011.4478f, -2146.6738f, 29.5516f };
					Local_109.f_103[5 /*5*/].f_3 = 139.4625f;
					Local_109.f_103[6 /*5*/] = { 1013.6879f, -2150.3494f, 30.5334f };
					Local_109.f_103[6 /*5*/].f_3 = 91.3056f;
					Local_109.f_103[7 /*5*/] = { 1011.5632f, -2153.0552f, 29.5516f };
					Local_109.f_103[7 /*5*/].f_3 = 44.0468f;
					Local_109.f_103[8 /*5*/] = { 1008.2098f, -2156.4746f, 29.5516f };
					Local_109.f_103[8 /*5*/].f_3 = 347.5848f;
					Local_109.f_103[9 /*5*/] = { 1007.3242f, -2161.7356f, 29.5516f };
					Local_109.f_103[9 /*5*/].f_3 = 172.5634f;
					Local_109.f_179[0 /*5*/] = { 1007.8724f, -2138.394f, 29.5516f };
					Local_109.f_179[0 /*5*/].f_3 = 139.8753f;
					Local_109.f_179[1 /*5*/] = { 1013.9819f, -2145.1382f, 29.5516f };
					Local_109.f_179[1 /*5*/].f_3 = 259.47f;
					Local_109.f_179[2 /*5*/] = { 1008.7667f, -2160.5925f, 29.5516f };
					Local_109.f_179[2 /*5*/].f_3 = 200.1719f;
					break;
				case 18:
					Local_109.f_103[0 /*5*/] = { 1016.825f, -2498.7522f, 27.3493f };
					Local_109.f_103[0 /*5*/].f_3 = 61.8849f;
					Local_109.f_103[1 /*5*/] = { 996.0087f, -2540.7988f, 27.3073f };
					Local_109.f_103[1 /*5*/].f_3 = 3.7927f;
					Local_109.f_103[2 /*5*/] = { 1017.77f, -2493.367f, 27.3879f };
					Local_109.f_103[2 /*5*/].f_3 = 88.4198f;
					Local_109.f_103[3 /*5*/] = { 1012.7147f, -2506.288f, 27.302f };
					Local_109.f_103[3 /*5*/].f_3 = 27.7498f;
					Local_109.f_103[4 /*5*/] = { 996.7639f, -2512.4849f, 27.302f };
					Local_109.f_103[4 /*5*/].f_3 = 40.6136f;
					Local_109.f_103[5 /*5*/] = { 1015.9149f, -2514.6455f, 27.3035f };
					Local_109.f_103[5 /*5*/].f_3 = 56.6315f;
					Local_109.f_103[6 /*5*/] = { 1011.236f, -2524.4907f, 27.3083f };
					Local_109.f_103[6 /*5*/].f_3 = 15.7729f;
					Local_109.f_103[7 /*5*/] = { 1006.9543f, -2527.8257f, 27.3043f };
					Local_109.f_103[7 /*5*/].f_3 = 101.1154f;
					Local_109.f_103[8 /*5*/] = { 999.3998f, -2523.023f, 27.302f };
					Local_109.f_103[8 /*5*/].f_3 = 354.1063f;
					Local_109.f_103[9 /*5*/] = { 994.9509f, -2527.176f, 27.302f };
					Local_109.f_103[9 /*5*/].f_3 = 125.381f;
					Local_109.f_179[0 /*5*/] = { 1012.6382f, -2502.169f, 27.302f };
					Local_109.f_179[0 /*5*/].f_3 = 316.6046f;
					Local_109.f_179[1 /*5*/] = { 1013.9861f, -2523.5295f, 27.3055f };
					Local_109.f_179[1 /*5*/].f_3 = 240.5153f;
					Local_109.f_179[2 /*5*/] = { 996.9083f, -2523.6643f, 27.302f };
					Local_109.f_179[2 /*5*/].f_3 = 164.8845f;
					break;
				case 19:
					Local_109.f_103[0 /*5*/] = { -266.5881f, 190.2768f, 84.3252f };
					Local_109.f_103[0 /*5*/].f_3 = 121.811f;
					Local_109.f_103[1 /*5*/] = { -271.8751f, 195.5884f, 84.6149f };
					Local_109.f_103[1 /*5*/].f_3 = 274.2204f;
					Local_109.f_103[2 /*5*/] = { -265.1418f, 201.9027f, 84.4806f };
					Local_109.f_103[2 /*5*/].f_3 = 181.8879f;
					Local_109.f_103[3 /*5*/] = { -261.9281f, 201.8817f, 84.2857f };
					Local_109.f_103[3 /*5*/].f_3 = 253.3033f;
					Local_109.f_103[4 /*5*/] = { -260.6143f, 186.3196f, 84.0337f };
					Local_109.f_103[4 /*5*/].f_3 = 4.0892f;
					Local_109.f_103[5 /*5*/] = { -255.9788f, 194.8307f, 83.7181f };
					Local_109.f_103[5 /*5*/].f_3 = 103.808f;
					Local_109.f_103[6 /*5*/] = { -252.9307f, 192.114f, 82.7736f };
					Local_109.f_103[6 /*5*/].f_3 = 262.768f;
					Local_109.f_103[7 /*5*/] = { -242.0461f, 190.5416f, 79.3582f };
					Local_109.f_103[7 /*5*/].f_3 = 200.5955f;
					Local_109.f_103[8 /*5*/] = { -241.619f, 202.893f, 82.2432f };
					Local_109.f_103[8 /*5*/].f_3 = 209.8882f;
					Local_109.f_103[9 /*5*/] = { -235.1685f, 202.9628f, 82.1429f };
					Local_109.f_103[9 /*5*/].f_3 = 338.4766f;
					Local_109.f_179[0 /*5*/] = { -237.4442f, 203.1399f, 82.1887f };
					Local_109.f_179[0 /*5*/].f_3 = 159.4961f;
					Local_109.f_179[1 /*5*/] = { -251.6716f, 193.9603f, 82.6293f };
					Local_109.f_179[1 /*5*/].f_3 = 87.8942f;
					Local_109.f_179[2 /*5*/] = { -266.8874f, 193.015f, 84.3937f };
					Local_109.f_179[2 /*5*/].f_3 = 65.6299f;
					break;
				case 20:
					Local_109.f_103[0 /*5*/] = { 534.4465f, -1941.3853f, 30.2292f };
					Local_109.f_103[0 /*5*/].f_3 = 311.177f;
					Local_109.f_103[1 /*5*/] = { 558.1476f, -1927.9094f, 23.7833f };
					Local_109.f_103[1 /*5*/].f_3 = 342.9807f;
					Local_109.f_103[2 /*5*/] = { 546.3505f, -1928.5997f, 23.8219f };
					Local_109.f_103[2 /*5*/].f_3 = 311.7955f;
					Local_109.f_103[3 /*5*/] = { 547.1193f, -1947.3772f, 23.9851f };
					Local_109.f_103[3 /*5*/].f_3 = 250.7509f;
					Local_109.f_103[4 /*5*/] = { 572.5258f, -1930.5751f, 23.7494f };
					Local_109.f_103[4 /*5*/].f_3 = 346.9088f;
					Local_109.f_103[5 /*5*/] = { 539.3912f, -1923.7773f, 23.9851f };
					Local_109.f_103[5 /*5*/].f_3 = 316.7842f;
					Local_109.f_103[6 /*5*/] = { 563.26f, -1920.3005f, 23.7598f };
					Local_109.f_103[6 /*5*/].f_3 = 325.4008f;
					Local_109.f_103[7 /*5*/] = { 533.5303f, -1938.4003f, 23.9851f };
					Local_109.f_103[7 /*5*/].f_3 = 309.4188f;
					Local_109.f_179[0 /*5*/] = { 548.8199f, -1930.1056f, 23.8175f };
					Local_109.f_179[0 /*5*/].f_3 = 159.5928f;
					Local_109.f_179[1 /*5*/] = { 551.0328f, -1946.8304f, 23.9851f };
					Local_109.f_179[1 /*5*/].f_3 = 84.4521f;
					Local_109.f_179[2 /*5*/] = { 561.5193f, -1927.5518f, 23.7627f };
					Local_109.f_179[2 /*5*/].f_3 = 80.685f;
					break;
				case 21:
					Local_109.f_103[0 /*5*/] = { 110.1075f, -2228.4336f, 5.1712f };
					Local_109.f_103[0 /*5*/].f_3 = 265.3441f;
					Local_109.f_103[1 /*5*/] = { 109.2036f, -2234.9495f, 5.0633f };
					Local_109.f_103[1 /*5*/].f_3 = 271.2665f;
					Local_109.f_103[2 /*5*/] = { 92.4692f, -2228.285f, 5.0333f };
					Local_109.f_103[2 /*5*/].f_3 = 246.2804f;
					Local_109.f_103[3 /*5*/] = { 89.8902f, -2221.8481f, 5.0483f };
					Local_109.f_103[3 /*5*/].f_3 = 77.5276f;
					Local_109.f_103[4 /*5*/] = { 119.3045f, -2188.5488f, 4.9608f };
					Local_109.f_103[4 /*5*/].f_3 = 260.6882f;
					Local_109.f_103[5 /*5*/] = { 135.5824f, -2185.0408f, 5.0909f };
					Local_109.f_103[5 /*5*/].f_3 = 248.253f;
					Local_109.f_103[6 /*5*/] = { 102.5402f, -2183.2031f, 4.953f };
					Local_109.f_103[6 /*5*/].f_3 = 254.5778f;
					Local_109.f_103[7 /*5*/] = { 93.2016f, -2199.761f, 5.0431f };
					Local_109.f_103[7 /*5*/].f_3 = 178.9871f;
					Local_109.f_103[8 /*5*/] = { 95.4634f, -2193.5583f, 5.0313f };
					Local_109.f_103[8 /*5*/].f_3 = 283.6666f;
					Local_109.f_103[9 /*5*/] = { 99.6321f, -2203.0037f, 5.181f };
					Local_109.f_103[9 /*5*/].f_3 = 312.4828f;
					Local_109.f_179[0 /*5*/] = { 95.909f, -2196.2788f, 5.0431f };
					Local_109.f_179[0 /*5*/].f_3 = 139.258f;
					Local_109.f_179[1 /*5*/] = { 120.4857f, -2191.8162f, 5.0209f };
					Local_109.f_179[1 /*5*/].f_3 = 159.3418f;
					Local_109.f_179[2 /*5*/] = { 109.2645f, -2231.5574f, 5.0333f };
					Local_109.f_179[2 /*5*/].f_3 = 62.2714f;
					break;
				default:
					Local_109.f_103[0 /*5*/] = { 968.5941f, -1557.8986f, 29.6842f };
					Local_109.f_103[0 /*5*/].f_3 = 114.28f;
					Local_109.f_103[1 /*5*/] = { 965.9659f, -1571.2141f, 29.5878f };
					Local_109.f_103[1 /*5*/].f_3 = 62.3577f;
					Local_109.f_103[2 /*5*/] = { 951.7892f, -1575.491f, 29.434f };
					Local_109.f_103[2 /*5*/].f_3 = 41.1548f;
					Local_109.f_103[3 /*5*/] = { 939.3943f, -1575.7871f, 29.345f };
					Local_109.f_103[3 /*5*/].f_3 = 85.4368f;
					Local_109.f_103[4 /*5*/] = { 928.4522f, -1577.3738f, 29.4239f };
					Local_109.f_103[4 /*5*/].f_3 = 336.8404f;
					Local_109.f_103[5 /*5*/] = { 921.6147f, -1573.9602f, 29.6373f };
					Local_109.f_103[5 /*5*/].f_3 = 337.606f;
					Local_109.f_103[6 /*5*/] = { 920.303f, -1564.1425f, 29.7523f };
					Local_109.f_103[6 /*5*/].f_3 = 52.3963f;
					Local_109.f_103[7 /*5*/] = { 918.5511f, -1552.1428f, 29.7808f };
					Local_109.f_103[7 /*5*/].f_3 = 244.4705f;
					Local_109.f_103[8 /*5*/] = { 922.5096f, -1543.6858f, 29.8074f };
					Local_109.f_103[8 /*5*/].f_3 = 8.0474f;
					Local_109.f_103[9 /*5*/] = { 910.6829f, -1547.7568f, 29.6528f };
					Local_109.f_103[9 /*5*/].f_3 = 217.9933f;
					Local_109.f_103[10 /*5*/] = { 910.2541f, -1557.9025f, 29.7034f };
					Local_109.f_103[10 /*5*/].f_3 = 237.5501f;
					Local_109.f_103[11 /*5*/] = { 909.9764f, -1572.0701f, 29.791f };
					Local_109.f_103[11 /*5*/].f_3 = 287.341f;
					Local_109.f_179[0 /*5*/] = { 912.0468f, -1562.4353f, 29.7522f };
					Local_109.f_179[0 /*5*/].f_3 = 305.0547f;
					Local_109.f_179[1 /*5*/] = { 903.5677f, -1559.3246f, 29.6796f };
					Local_109.f_179[1 /*5*/].f_3 = 301.2764f;
					Local_109.f_179[2 /*5*/] = { 970.6998f, -1558.5553f, 29.6813f };
					Local_109.f_179[2 /*5*/].f_3 = 43.0116f;
					break;
			}
			break;
	}
}

var func_210()//Position - 0x137C1
{
	if (Local_109.f_195 != -1)
	{
		return Local_109.f_195;
	}
	Local_109.f_195 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	return Local_109.f_195;
}

void func_213()//Position - 0x1382E
{
	char* sVar0;
	func_218();
	if (BitTest(uLocal_112, 9))
	{
		return;
	}
	if (func_5601())
	{
		if (!BitTest(uLocal_112, 0))
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			MISC::SET_BIT(&uLocal_112, 0);
		}
		if (!BitTest(uLocal_112, 1))
		{
			if (!func_443())
			{
				sVar0 = "EXEC1_UNDER_ATTACK_START";
			}
			else
			{
				sVar0 = "EXEC1_DEFEND_FLEEING_START";
			}
			if (AUDIO::TRIGGER_MUSIC_EVENT(sVar0))
			{
				MISC::SET_BIT(&uLocal_112, 1);
			}
		}
		if (!func_443())
		{
			if (!BitTest(uLocal_112, 3))
			{
				if (BitTest(Local_109.f_1, 13))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_UNDER_ATTACK_ARRIVE_SMA"))
					{
						MISC::SET_BIT(&uLocal_112, 3);
					}
				}
			}
		}
		if (!func_443())
		{
			if (BitTest(Local_109.f_1, 1))
			{
				if (!BitTest(uLocal_112, 4))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_UNDER_ATTACK_STOP"))
					{
						MISC::SET_BIT(&uLocal_112, 4);
					}
				}
			}
		}
		if (!BitTest(uLocal_112, 6))
		{
			if ((((BitTest(Local_109.f_1, 3) || BitTest(Local_109.f_1, 15)) || BitTest(Local_109.f_1, 5)) || BitTest(Local_109.f_1, 9)) || BitTest(Local_109.f_1, 8))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_UNDER_ATTACK_FAIL"))
				{
					MISC::SET_BIT(&uLocal_112, 6);
				}
			}
		}
		if (func_443())
		{
			if (!BitTest(uLocal_112, 16))
			{
				if (Local_109.f_215 == -1)
				{
					if (__LIB_3__::func_417("DCONTRA_OBJ4" /* GXT: Retrieve the ~b~Special Cargo. */))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_DEFEND_FLEEING_RETRIEVE_SMA"))
						{
							MISC::SET_BIT(&uLocal_112, 16);
						}
					}
				}
			}
			if (!BitTest(uLocal_112, 17))
			{
				if (Local_109.f_215 != -1)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_DEFEND_FLEEING_RETURN_SMA"))
					{
						MISC::SET_BIT(&uLocal_112, 17);
					}
				}
			}
			if (!BitTest(uLocal_112, 18))
			{
				if (BitTest(Local_109.f_1, 4))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_DEFEND_FLEEING_STOP"))
					{
						MISC::SET_BIT(&uLocal_112, 18);
					}
				}
			}
		}
	}
}

void func_218()//Position - 0x13AC1
{
	if (BitTest(uLocal_112, 8))
	{
		if (BitTest(uLocal_112, 9))
		{
			if (!BitTest(uLocal_112, 10))
			{
				if (BitTest(uLocal_112, 11))
				{
					if (!BitTest(uLocal_112, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
					}
				}
				if (!BitTest(uLocal_112, 15))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
					{
						MISC::SET_BIT(&uLocal_112, 15);
					}
				}
				if (BitTest(uLocal_112, 15))
				{
					if (!BitTest(uLocal_112, 13))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							MISC::SET_BIT(&uLocal_112, 13);
						}
					}
					if (BitTest(uLocal_112, 13))
					{
						MISC::SET_BIT(&uLocal_112, 10);
					}
				}
			}
		}
	}
}

void func_219()//Position - 0x13B5D
{
	struct<3> Var0;
	float fVar1;
	if (!func_5601() && !func_441())
	{
		return;
	}
	if (BitTest(uLocal_111, 15))
	{
		if (!BitTest(uLocal_111, 16))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
				{
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					MISC::SET_BIT(&uLocal_111, 16);
				}
			}
		}
		return;
	}
	if (func_443())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_2))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2), false) };
		}
	}
	else
	{
		Var0 = { func_40() };
	}
	fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0);
	if (!BitTest(uLocal_111, 17))
	{
		if (fVar1 < 250000f)
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			MISC::SET_BIT(&uLocal_111, 17);
		}
	}
	else if (fVar1 > 360000f)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&uLocal_111, 17);
	}
}

void func_220()//Position - 0x13C4F
{
	struct<3> Var0;
	if (!func_5601() && !func_441())
	{
		return;
	}
	if (func_443())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_2))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2), false) };
		}
	}
	else
	{
		Var0 = { func_40() };
	}
	if (!__LIB_0__::func_78(Var0, 0f, 0f, 0f, 0))
	{
		__LIB_30__::func_750(169, Var0, &uLocal_136, 1140457472, 1144750080, 0);
	}
}

void func_278()//Position - 0x150DD
{
	if (!func_443())
	{
		return;
	}
	if (!BitTest(Local_109.f_1, 4))
	{
		return;
	}
	if (!BitTest(Local_109.f_1, 18))
	{
		return;
	}
	if (BitTest(Local_109.f_1, 17))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_2) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_2[0 /*10*/].f_2))
		{
			if (__LIB_0__::func_939(Local_109.f_2[0 /*10*/].f_2))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2)))
				{
					__LIB_1__::func_445(&(Local_109.f_2[0 /*10*/].f_2));
				}
			}
		}
		return;
	}
	if (BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 15))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_2))
	{
		if (__LIB_0__::func_939(Local_109.f_2[0 /*10*/].f_2))
		{
			if (__LIB_15__::func_446(Local_109.f_2[0 /*10*/].f_2))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_2[0 /*10*/].f_2))
				{
					NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2), true, true);
					MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 15);
				}
			}
		}
	}
}

int func_441()//Position - 0x19002
{
	int iVar0;
	iVar0 = -1;
	if (!__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	else
	{
		iVar0 = __LIB_32__::func_190();
	}
	if (iVar0 != -1)
	{
		return BitTest(Local_110[iVar0 /*11*/].f_1, 1);
	}
	return 0;
}

bool func_443()//Position - 0x1907C
{
	return Local_109.f_196 == 99;
}

void func_444()//Position - 0x1908B
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 186:
				func_445(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_445(int iParam0)//Position - 0x190C8
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<14> Var6;
	bool bVar7;
	int iVar8;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		bVar7 = false;
		while (bVar7 < 10)
		{
			if (!BitTest(Local_109.f_209, bVar7))
			{
				if (!BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_6, bVar7))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
					{
						if (ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0))
						{
							if (!BitTest(Local_109.f_205, bVar7))
							{
								if (!BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_5, bVar7))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[bVar7 /*10*/].f_2))
									{
										if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_109.f_2[bVar7 /*10*/].f_2)))
										{
											if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0) == NETWORK::NET_TO_VEH(Local_109.f_2[bVar7 /*10*/].f_2))
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
														{
															if (func_5602() == Local_109.f_218)
															{
																MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_5), bVar7);
															}
														}
														else if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)))
														{
															iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1));
															if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar8))
															{
																MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_5), bVar7);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
						else if (ENTITY::IS_ENTITY_A_PED(Var0.f_0))
						{
							iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0);
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[bVar7 /*10*/].f_1))
							{
								if (iVar2 == NETWORK::NET_TO_PED(Local_109.f_2[bVar7 /*10*/].f_1))
								{
									if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
									{
										if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
										{
											iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
											if (PED::IS_PED_A_PLAYER(iVar1))
											{
												iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
												if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
												{
													if (Var0.f_5)
													{
														if (iVar4 == PLAYER::PLAYER_ID())
														{
															MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_6), bVar7);
															if (!func_443())
															{
																Var6.f_2 = 1895117223;
																Var6.f_10 = PLAYER::PLAYER_ID();
																__LIB_1__::func_634(Var6, __LIB_4__::func_970(0));
															}
														}
													}
												}
												else if (!BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_7, bVar7))
												{
													if (Var0.f_5)
													{
														MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_7), bVar7);
													}
												}
											}
											else if (!BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_8, bVar7))
											{
												if (Var0.f_5)
												{
													MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_8), bVar7);
												}
											}
										}
										else if (!BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_8, bVar7))
										{
											if (Var0.f_5)
											{
												MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_8), bVar7);
											}
										}
									}
								}
							}
						}
					}
				}
			}
			bVar7++;
		}
		if (!BitTest(uLocal_111, 15))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
			{
				if (ENTITY::IS_ENTITY_A_PED(Var0.f_0))
				{
					iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0);
					if (__LIB_31__::func_569(ENTITY::GET_ENTITY_MODEL(iVar2)))
					{
						MISC::SET_BIT(&uLocal_111, 15);
					}
				}
				else if (ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0))
				{
					if (__LIB_12__::func_390(ENTITY::GET_ENTITY_MODEL(Var0.f_0)))
					{
						if (!__LIB_2__::func_789(PLAYER::PLAYER_PED_ID(), ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0), 0))
						{
							if (!__LIB_27__::func_618(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0), 0, 1))
							{
								MISC::SET_BIT(&uLocal_111, 15);
							}
						}
					}
				}
			}
		}
	}
	if (func_441())
	{
		if (!__LIB_1__::func_906(PLAYER::PLAYER_ID(), 20))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
			{
				if (ENTITY::IS_ENTITY_A_PED(Var0.f_0))
				{
					iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0);
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
							{
								iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
								if (PED::IS_PED_A_PLAYER(iVar1))
								{
									iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
									if (iVar4 == PLAYER::PLAYER_ID())
									{
										if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
										{
											if (__LIB_2__::func_72(iVar3, 1))
											{
												if (Local_109.f_218 > -1)
												{
													iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_109.f_218));
													if (__LIB_2__::func_759(iVar3, iVar5, 1))
													{
														__LIB_31__::func_591(0);
														__LIB_22__::func_262();
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_460()//Position - 0x19AEE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
	{
		if (BitTest(uLocal_111, 10))
		{
			MISC::CLEAR_BIT(&uLocal_111, 10);
		}
		return;
	}
	iVar0 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775;
	if (!BitTest(uLocal_111, 10))
	{
		if (Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1 != 0)
		{
			Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1 = 0;
		}
		MISC::SET_BIT(&uLocal_111, 10);
	}
	if (!BitTest(uLocal_111, 11))
	{
		MISC::SET_BIT(&uLocal_111, 11);
		__LIB_3__::func_0();
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			iVar2 = iVar1;
			iVar3 = Local_110[iVar2 /*11*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_1019();
					func_1004();
					func_995();
					func_461();
					break;
				case 2:
					func_461();
					break;
				case 3:
					func_5611();
					break;
				}
			}
	}
}

void func_461()//Position - 0x19BD0
{
	struct<20> Var0;
	int iVar1;
	char* sVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	iVar1 = __LIB_0__::func_162();
	iVar4 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar5 = PLAYER::PLAYER_ID();
	if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
	{
		iVar4 = __LIB_32__::func_190();
		iVar5 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775;
	}
	if (!BitTest(Local_110[iVar4 /*11*/].f_1, 4))
	{
		if (!BitTest(uLocal_111, 3))
		{
			if (BitTest(Local_109.f_1, 1))
			{
				if (iVar4 == Local_109.f_218 || func_5602() == Local_109.f_218)
				{
					if (__LIB_30__::func_715(PLAYER::PLAYER_ID()) >= 2)
					{
						sVar2 = __LIB_22__::func_245(iVar5);
						uVar3 = __LIB_5__::func_706(iVar5);
						__LIB_30__::func_924(87, "BIGM_DEFENDED" /* GXT: DEFENDED */, "BIGM_CONTRAS" /* GXT: ~a~ ~s~defended the Warehouse */, sVar2, uVar3, 0, -1, -1, -1, 2, -1);
					}
					if (iVar5 == PLAYER::PLAYER_ID())
					{
						if (!BitTest(uLocal_111, 6))
						{
							__LIB_30__::func_946(1, 1, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
							MISC::SET_BIT(&uLocal_111, 6);
						}
						__LIB_31__::func_601(169, 1, &Var0, 0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
				}
				else if (func_441())
				{
				}
				iLocal_120 = func_20();
				iLocal_121 = (func_20() - __LIB_1__::func_724(&(Local_109.f_226), 0, 0));
				MISC::SET_BIT(&uLocal_111, 3);
			}
			else if (BitTest(Local_109.f_1, 4))
			{
				if (BitTest(Local_110[iVar4 /*11*/].f_1, 14))
				{
					if (Local_109.f_221 >= 0)
					{
						iVar1 = PLAYER::INT_TO_PLAYERINDEX(Local_109.f_221);
						if (iVar1 == iVar5)
						{
							__LIB_30__::func_651(87, "BIGM_SECURED" /* GXT: SECURED */, "BIGM_CONTRAYR" /* GXT: ~s~You returned the Special Cargo */, 1, -1, 2, 1, 0);
						}
						else if (__LIB_30__::func_715(iVar5) >= 2)
						{
							sVar2 = __LIB_22__::func_245(iVar5);
							uVar3 = __LIB_5__::func_706(iVar5);
							__LIB_30__::func_924(87, "BIGM_SECURED" /* GXT: SECURED */, "BIGM_CONTRAGR" /* GXT: ~a~ ~s~returned the Special Cargo */, sVar2, uVar3, 0, -1, -1, -1, 2, -1);
						}
					}
					if (iVar5 == PLAYER::PLAYER_ID())
					{
						if (!BitTest(uLocal_111, 6))
						{
							__LIB_30__::func_946(1, 1, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
							MISC::SET_BIT(&uLocal_111, 6);
						}
						__LIB_31__::func_601(169, 1, &Var0, 0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
					iLocal_120 = func_20();
					iLocal_121 = (func_20() - __LIB_1__::func_724(&(Local_109.f_226), 0, 0));
					MISC::SET_BIT(&uLocal_111, 3);
				}
			}
			else if (BitTest(Local_109.f_1, 3))
			{
				if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_109.f_218 || func_5602() == Local_109.f_218)
				{
					if (__LIB_30__::func_715(iVar5) >= 2)
					{
						sVar2 = __LIB_22__::func_245(iVar5);
						uVar3 = __LIB_5__::func_706(PLAYER::PLAYER_ID());
						__LIB_30__::func_924(88, "BIGM_DCLOST" /* GXT: DEFEND SPECIAL CARGO OVER */, "BIGM_CONTRAFD" /* GXT: Some of your Special Cargo was stolen */, sVar2, uVar3, 0, -1, -1, -1, 2, -1);
					}
					if (iVar5 == PLAYER::PLAYER_ID())
					{
						if (!BitTest(uLocal_111, 6))
						{
							__LIB_30__::func_946(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
							MISC::SET_BIT(&uLocal_111, 6);
						}
						__LIB_31__::func_601(169, 0, &Var0, 0);
					}
				}
				iLocal_120 = func_20();
				iLocal_121 = (func_20() - __LIB_1__::func_724(&(Local_109.f_226), 0, 0));
				MISC::SET_BIT(&uLocal_111, 3);
			}
			else if (BitTest(Local_109.f_1, 9))
			{
				if (func_551())
				{
					if (__LIB_30__::func_715(iVar5) >= 2)
					{
						sVar2 = __LIB_22__::func_245(iVar5);
						uVar3 = __LIB_5__::func_706(iVar5);
						__LIB_30__::func_924(88, "BIGM_DCLOST" /* GXT: DEFEND SPECIAL CARGO OVER */, "BIGM_CONTRALS" /* GXT: ~a~ ~s~failed to return the Special Cargo */, sVar2, uVar3, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar5 == PLAYER::PLAYER_ID())
				{
					if (!BitTest(uLocal_111, 6))
					{
						__LIB_30__::func_946(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
						MISC::SET_BIT(&uLocal_111, 6);
					}
					__LIB_31__::func_601(169, 0, &Var0, 0);
				}
				iLocal_120 = func_20();
				iLocal_121 = (func_20() - __LIB_1__::func_724(&(Local_109.f_226), 0, 0));
				MISC::SET_BIT(&uLocal_111, 3);
			}
			else if (BitTest(Local_109.f_1, 8))
			{
				if (func_551())
				{
					if (__LIB_30__::func_715(iVar5) >= 2)
					{
						sVar2 = __LIB_22__::func_245(iVar5);
						uVar3 = __LIB_5__::func_706(iVar5);
						__LIB_30__::func_924(88, "BIGM_DCLOST" /* GXT: DEFEND SPECIAL CARGO OVER */, "BIGM_CONTRALS" /* GXT: ~a~ ~s~failed to return the Special Cargo */, sVar2, uVar3, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar5 == PLAYER::PLAYER_ID())
				{
					if (!BitTest(uLocal_111, 6))
					{
						__LIB_30__::func_946(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
						MISC::SET_BIT(&uLocal_111, 6);
					}
					__LIB_31__::func_601(169, 0, &Var0, 0);
				}
				iLocal_120 = func_20();
				iLocal_121 = (func_20() - __LIB_1__::func_724(&(Local_109.f_226), 0, 0));
				MISC::SET_BIT(&uLocal_111, 3);
			}
			else if (BitTest(Local_109.f_1, 15))
			{
				if (func_551())
				{
					if (__LIB_30__::func_715(iVar5) >= 2)
					{
						sVar2 = __LIB_22__::func_245(iVar5);
						uVar3 = __LIB_5__::func_706(iVar5);
						__LIB_30__::func_924(88, "BIGM_DCLOST" /* GXT: DEFEND SPECIAL CARGO OVER */, "BIGM_CONTRALS" /* GXT: ~a~ ~s~failed to return the Special Cargo */, sVar2, uVar3, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar5 == PLAYER::PLAYER_ID())
				{
					if (!BitTest(uLocal_111, 6))
					{
						__LIB_30__::func_946(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
						MISC::SET_BIT(&uLocal_111, 6);
					}
					__LIB_31__::func_601(169, 0, &Var0, 0);
				}
				iLocal_120 = func_20();
				iLocal_121 = (func_20() - __LIB_1__::func_724(&(Local_109.f_226), 0, 0));
				MISC::SET_BIT(&uLocal_111, 3);
			}
			else if (BitTest(Local_109.f_1, 5))
			{
				if (func_551())
				{
					if (func_5601())
					{
						if (__LIB_30__::func_715(iVar5) >= 2)
						{
						}
					}
					else if (__LIB_30__::func_715(iVar5) >= 2)
					{
						__LIB_30__::func_651(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "BIGM_HUNTRBQ" /* GXT: The rival VIP quit the session */, 1, -1, 2, 1, 0);
					}
				}
				if (iVar5 == PLAYER::PLAYER_ID())
				{
					if (!BitTest(uLocal_111, 6))
					{
						__LIB_30__::func_946(0, 8, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
						MISC::SET_BIT(&uLocal_111, 6);
					}
					__LIB_31__::func_601(169, 0, &Var0, 0);
				}
				MISC::SET_BIT(&uLocal_111, 3);
			}
		}
		if (BitTest(uLocal_111, 3))
		{
			__LIB_3__::func_0();
			if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_109.f_218)
			{
				if (!BitTest(Local_109.f_1, 16) && !BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 13))
				{
					if ((((BitTest(Local_109.f_1, 15) || BitTest(Local_109.f_1, 8)) || BitTest(Local_109.f_1, 3)) || __LIB_0__::func_864(&(Local_109.f_226))) || (func_443() && BitTest(Local_109.f_1, 9)))
					{
						func_494();
					}
					else
					{
						MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 13);
						if (!__LIB_4__::func_862(38))
						{
							__LIB_1__::func_928(38);
						}
					}
					if (iLocal_122 == 2)
					{
						MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 13);
					}
					if (iLocal_122 == 3)
					{
						MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 13);
					}
				}
			}
			if (!BitTest(uLocal_112, 8))
			{
				func_490();
				func_488();
				MISC::SET_BIT(&uLocal_112, 8);
			}
			if (!BitTest(uLocal_111, 7))
			{
				if (Local_109.f_219 != -1)
				{
					if (BitTest(uLocal_111, 5))
					{
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_109.f_219)))
						{
							__LIB_12__::func_535(PLAYER::INT_TO_PLAYERINDEX(Local_109.f_219), 432, 0, 0);
							__LIB_12__::func_554(PLAYER::INT_TO_PLAYERINDEX(Local_109.f_219), 1, 0, 0);
							__LIB_15__::func_359(PLAYER::INT_TO_PLAYERINDEX(Local_109.f_219), 0, 0, 0);
							__LIB_3__::func_459(PLAYER::INT_TO_PLAYERINDEX(Local_109.f_219), 0);
							__LIB_22__::func_360(PLAYER::INT_TO_PLAYERINDEX(Local_109.f_219), Global_262145.f_12827 /* Tunable: GANGBOSS_JOB_BLIP_SCALE */, 0, 0);
							MISC::SET_BIT(&uLocal_111, 7);
						}
					}
				}
			}
			if (__LIB_31__::func_595(&uLocal_123, 1, 0) && (BitTest(Local_109.f_1, 16) || BitTest(Local_109.f_1, 5)))
			{
				if (iVar4 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 4);
				}
			}
		}
	}
}

void func_488()//Position - 0x1AFFE
{
	int iVar0;
	bool bVar1;
	if (!func_443())
	{
		return;
	}
	if (!BitTest(uLocal_111, 9))
	{
		MISC::SET_BIT(&uLocal_111, 9);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
			{
				if (bVar1 != PLAYER::PLAYER_ID())
				{
					__LIB_12__::func_535(bVar1, 478, 0, 0);
					__LIB_12__::func_554(bVar1, __LIB_1__::func_389(iLocal_135), 0, 0);
				}
			}
			iVar0++;
		}
	}
}

void func_490()//Position - 0x1B2D3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_131[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_131[iVar0]));
		}
		iVar0++;
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_134))
	{
		HUD::REMOVE_BLIP(&iLocal_134);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_132))
	{
		HUD::REMOVE_BLIP(&iLocal_132);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_133))
	{
		HUD::REMOVE_BLIP(&iLocal_133);
	}
	if (BitTest(uLocal_111, 12))
	{
		AUDIO::STOP_SOUND(iLocal_119);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("ALARM_BELL_02");
		MISC::CLEAR_BIT(&uLocal_111, 12);
	}
	if (((__LIB_0__::func_1("DCONTRA_HLP1" /* GXT: Kill the enemies before they steal the Special Cargo from your Warehouse. */) || __LIB_0__::func_1("DCONTRA_HLP2" /* GXT: Kill the enemies before they steal the Special Cargo from your CEO's Warehouse. */)) || __LIB_0__::func_1("DCONTRA_HLPVCR" /* GXT: You will lose Special Cargo while there are still enemies attacking your Warehouse. */)) || __LIB_0__::func_1("DCONTRA_HLPCR" /* GXT: Your CEO will lose Special Cargo while there are still enemies attacking your Warehouse. */))
	{
		HUD::CLEAR_HELP(true);
	}
	func_491();
}

void func_491()//Position - 0x1B397
{
	if (BitTest(uLocal_111, 14))
	{
		__LIB_2__::func_91();
		__LIB_12__::func_846(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		MISC::CLEAR_BIT(&uLocal_111, 14);
	}
}

void func_494()//Position - 0x1B433
{
	float fVar0;
	if (func_443())
	{
		if (BitTest(Local_109.f_1, 9) || BitTest(Local_109.f_1, 8))
		{
			func_495(func_550());
			if (!__LIB_4__::func_862(36))
			{
				__LIB_1__::func_928(36);
			}
		}
	}
	else if (__LIB_0__::func_864(&(Local_109.f_226)))
	{
		if (iLocal_121 <= 0)
		{
			func_495(func_550());
			if (!__LIB_4__::func_862(36))
			{
				__LIB_1__::func_928(36);
			}
		}
		else
		{
			fVar0 = (SYSTEM::TO_FLOAT((iLocal_120 - iLocal_121)) / SYSTEM::TO_FLOAT(iLocal_120));
			fVar0 = (fVar0 * 0.5f);
			func_495(fVar0);
			if (!__LIB_4__::func_862(37))
			{
				__LIB_1__::func_928(37);
			}
		}
	}
}

void func_495(float fParam0)//Position - 0x1B4D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = Local_109.f_197 + 1;
	iVar1 = __LIB_13__::func_137(iVar0);
	if (iVar1 > 0)
	{
		iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * fParam0));
		if (SYSTEM::TO_FLOAT(iVar2) > (SYSTEM::TO_FLOAT(iVar1) / 2f))
		{
			iVar2 = (iVar2 - 1);
		}
		func_496(iVar0, iVar2, 0, 0, &iLocal_122, 0);
	}
	else
	{
		MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 13);
	}
}

void func_496(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5)//Position - 0x1B540
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (iParam1 <= 0)
	{
		if (iParam1 == 0)
		{
		}
		*uParam4 = 3;
		return;
	}
	if (*uParam4 != 0 && *uParam4 != 1)
	{
		*uParam4 = 0;
	}
	iVar0 = __LIB_13__::func_137(iParam0);
	iVar1 = __LIB_8__::func_418(iParam0);
	if (!__LIB_0__::func_112())
	{
		if (iVar1 >= 0 && iVar0 >= iParam1)
		{
			iVar2 = (__LIB_13__::func_137(iParam0) - iParam1);
			iVar3 = 0;
			if (bParam5)
			{
				iVar3 = iParam1;
			}
			__LIB_31__::func_574(iParam0, iVar1, iVar2, iVar3, 0, 11);
			__LIB_1__::func_364(__LIB_28__::func_713(iVar1), iVar2, -1, 1);
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_114[iVar1 /*3*/].f_1 = iVar2;
			if (iVar3 != 0)
			{
				__LIB_31__::func_619(iParam0, iVar3);
				__LIB_31__::func_618(iParam0, iVar3);
			}
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				STATS::STAT_SET_OPEN_SAVETYPE_IN_JOB(10);
			}
			__LIB_1__::func_333(1490700264, 10, 0);
			*uParam4 = 2;
		}
		else
		{
			*uParam4 = 3;
		}
	}
	else if (iVar1 >= 0 && iVar0 >= iParam1)
	{
		iVar4 = (__LIB_13__::func_137(iParam0) - iParam1);
		iVar5 = 0;
		if (bParam5)
		{
			iVar5 = iParam1;
		}
		if (func_497(iVar1, iParam1, iVar5, iParam2, iParam3, uParam4, Global_2815059.f_5195.f_387))
		{
			if (*uParam4 == 2)
			{
				__LIB_31__::func_574(iParam0, iVar1, iVar4, iVar5, 0, 11);
				__LIB_1__::func_364(__LIB_28__::func_713(iVar1), iVar4, -1, 1);
				Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_114[iVar1 /*3*/].f_1 = iVar4;
				if (iVar5 != 0)
				{
					__LIB_31__::func_618(iParam0, iVar5);
				}
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					STATS::STAT_SET_OPEN_SAVETYPE_IN_JOB(10);
				}
				__LIB_1__::func_333(1490700264, 10, 0);
				*uParam4 = 2;
			}
			else if (*uParam4 == 3)
			{
				*uParam4 = 3;
			}
		}
	}
	else
	{
		*uParam4 = 3;
	}
}

bool func_497(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6)//Position - 0x1B6E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (*uParam5 != 0 && *uParam5 != 1)
	{
		*uParam5 = 0;
	}
	switch (*uParam5)
	{
		case 0:
			iVar0 = __LIB_13__::func_499(iParam0);
			iVar1 = __LIB_31__::func_571(0, iParam1, 0, -1);
			iVar2 = __LIB_28__::func_704(iParam0);
			iVar3 = __LIB_28__::func_703(iParam0);
			switch (iParam4)
			{
				case 0:
					iVar4 = joaat("CF_ATTACKED");
					break;
				case 1:
					iVar4 = joaat("CF_MISSION_STARTED");
					break;
				case 2:
					iVar4 = joaat("CF_MISSION_FAILED");
					break;
				case 3:
					iVar4 = joaat("CF_MISSION_PASSED");
					break;
			}
			if (iParam4 == 0 || __LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_CONTRABAND_MISSION"), iVar1, joaat("NET_SHOP_ACTION_REMOVE_CONTRABAND"), 1, 0, 1, 4, iVar0, 3))
			{
				if (__LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_QNTY"), iVar2, joaat("NET_SHOP_ACTION_REMOVE_CONTRABAND"), iParam1, 0, 1, 4, 0, 3))
				{
					if (iParam2 == 0 || __LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_QNTY"), iVar3, joaat("NET_SHOP_ACTION_REMOVE_CONTRABAND"), iParam2, 0, 1, 4, 0, 3))
					{
						if (__LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_FLAGS"), iVar4, joaat("NET_SHOP_ACTION_REMOVE_CONTRABAND"), 1, iParam3, 0, 4, iVar2, 3))
						{
							*uParam5 = 1;
						}
						else
						{
							*uParam5 = 3;
						}
					}
					else
					{
						*uParam5 = 3;
					}
				}
				else
				{
					*uParam5 = 3;
				}
			}
			else
			{
				*uParam5 = 3;
			}
			if (*uParam5 == 1 && __LIB_6__::func_360())
			{
			}
			else
			{
				*uParam5 = 3;
				__LIB_1__::func_34(__LIB_3__::func_534());
			}
			break;
		case 1:
			if (__LIB_2__::func_835(__LIB_3__::func_534()))
			{
				if (__LIB_2__::func_834(__LIB_3__::func_534()) == 2)
				{
					if (iParam3 > 0)
					{
						NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(__LIB_3__::func_534()));
						MONEY::NETWORK_EARN_FROM_CONTRABAND(iParam3, iParam6);
					}
					*uParam5 = 2;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
				else
				{
					*uParam5 = 3;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
			}
			break;
	}
	return *uParam5 != 1;
}

float func_550()//Position - 0x1ED87
{
	if (!func_443())
	{
		return (SYSTEM::TO_FLOAT(Global_262145.f_16647 /* Tunable: EXEC_DEFEND_CONTRABAND_LOST_CAP_UNDER_ATTACK */) * 0.01f);
	}
	return (SYSTEM::TO_FLOAT(Global_262145.f_16648 /* Tunable: EXEC_DEFEND_CONTRABAND_LOST_CAP_FLEEING */) * 0.01f);
}

int func_551()//Position - 0x1EDBF
{
	int iVar0;
	if (!__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
	{
		if (!Global_2703735.f_4.f_10)
		{
			if (BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 12))
			{
				MISC::CLEAR_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 12);
			}
			return 0;
		}
		if (__LIB_3__::func_290())
		{
			if (BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 12))
			{
				MISC::CLEAR_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 12);
			}
			return 0;
		}
		if (!BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 12))
		{
			MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 12);
		}
	}
	else
	{
		iVar0 = __LIB_32__::func_190();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!BitTest(Local_110[iVar0 /*11*/].f_1, 12))
		{
			return 0;
		}
	}
	return 1;
}

void func_995()//Position - 0x55C01
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (func_28())
	{
		return;
	}
	if (func_443())
	{
		if (__LIB_0__::func_864(&(Local_109.f_238)))
		{
			iVar1 = (__LIB_30__::func_680() - 300000);
			bVar0 = __LIB_0__::func_937(&(Local_109.f_238), iVar1, 0);
			if (bVar0)
			{
				__LIB_3__::func_238();
				if ((__LIB_30__::func_680() - __LIB_1__::func_724(&(Local_109.f_238), 0, 0)) > 0)
				{
					if ((__LIB_30__::func_680() - __LIB_1__::func_724(&(Local_109.f_238), 0, 0)) > 30000)
					{
						__LIB_1__::func_350((__LIB_30__::func_680() - __LIB_1__::func_724(&(Local_109.f_238), 0, 0)), "GB_WORK_END" /* GXT: VIP WORK END */, 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, -1);
					}
					else
					{
						__LIB_1__::func_350((__LIB_30__::func_680() - __LIB_1__::func_724(&(Local_109.f_238), 0, 0)), "GB_WORK_END" /* GXT: VIP WORK END */, 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					}
				}
				else
				{
					__LIB_1__::func_350(0, "GB_WORK_END" /* GXT: VIP WORK END */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				}
			}
		}
		return;
	}
	if (!func_5601() && !func_441())
	{
		return;
	}
	if (!func_551())
	{
		return;
	}
	iVar2 = PLAYER::PLAYER_ID();
	if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
	{
		iVar2 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775;
	}
	iVar3 = __LIB_30__::func_715(iVar2);
	if (iVar3 < 3)
	{
		return;
	}
	iVar4 = (func_30() - Local_109.f_213);
	if (BitTest(Local_109.f_1, 13))
	{
		__LIB_2__::func_131(iVar4, "DCONTRA_HUD1" /* GXT: ENEMIES REMAINING */, -1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (__LIB_0__::func_864(&(Local_109.f_226)))
	{
		iVar5 = func_20();
		iVar6 = (func_20() - __LIB_1__::func_724(&(Local_109.f_226), 0, 0));
		__LIB_7__::func_603(iVar6, iVar5, "DCONTRA_HUD2" /* GXT: SPECIAL CARGO REMAINING */, 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	else
	{
		iVar5 = func_20();
		iVar6 = func_20();
		__LIB_7__::func_603(iVar6, iVar5, "DCONTRA_HUD2" /* GXT: SPECIAL CARGO REMAINING */, 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
}

void func_1004()//Position - 0x5651D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar3 = PLAYER::PLAYER_ID();
	iVar4 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!BitTest(uLocal_111, 1))
	{
		return;
	}
	if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
	{
		iVar4 = __LIB_32__::func_190();
		iVar3 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775;
	}
	iVar5 = __LIB_30__::func_715(iVar3);
	if (!func_551())
	{
		if (__LIB_3__::func_417("DCONTRA_OBJ" /* GXT: Take out the ~r~enemies. */))
		{
			__LIB_3__::func_0();
		}
		if (__LIB_3__::func_417("DCONTRA_OBJ2" /* GXT: Stop the ~r~enemies ~s~stealing the Special Cargo. */))
		{
			__LIB_3__::func_0();
		}
		if (__LIB_3__::func_417("DCONTRA_OBJ3" /* GXT: Take the Special Cargo back to the ~y~Warehouse. */))
		{
			__LIB_3__::func_0();
		}
		if (__LIB_3__::func_417("DCONTRA_OBJ4" /* GXT: Retrieve the ~b~Special Cargo. */))
		{
			__LIB_3__::func_0();
		}
		if (__LIB_3__::func_417("DCONTRA_TOBJ" /* GXT: Help <C>~a~</C> ~s~kill the ~a~. */))
		{
			__LIB_3__::func_0();
		}
		if (__LIB_3__::func_417("DCONTRA_TOBJ2" /* GXT: Help <C>~a~</C> ~s~stop the ~a~ ~s~stealing the Special Cargo. */))
		{
			__LIB_3__::func_0();
		}
		if (__LIB_3__::func_417("DCONTRA_TOBJ3" /* GXT: Help take the ~a~ ~s~back to the ~y~Warehouse. */))
		{
			__LIB_3__::func_0();
		}
		if (__LIB_3__::func_417("DCONTRA_WOBJ" /* GXT: Go to the ~y~Warehouse. */))
		{
			__LIB_3__::func_0();
		}
		return;
	}
	if (iVar5 < 3)
	{
		if (__LIB_3__::func_417("DCONTRA_OBJ" /* GXT: Take out the ~r~enemies. */))
		{
			__LIB_3__::func_0();
		}
		if (__LIB_3__::func_417("DCONTRA_OBJ2" /* GXT: Stop the ~r~enemies ~s~stealing the Special Cargo. */))
		{
			__LIB_3__::func_0();
		}
		if (__LIB_3__::func_417("DCONTRA_OBJ3" /* GXT: Take the Special Cargo back to the ~y~Warehouse. */))
		{
			__LIB_3__::func_0();
		}
		if (__LIB_3__::func_417("DCONTRA_OBJ4" /* GXT: Retrieve the ~b~Special Cargo. */))
		{
			__LIB_3__::func_0();
		}
		if (__LIB_3__::func_417("DCONTRA_TOBJ" /* GXT: Help <C>~a~</C> ~s~kill the ~a~. */))
		{
			__LIB_3__::func_0();
		}
		if (__LIB_3__::func_417("DCONTRA_TOBJ2" /* GXT: Help <C>~a~</C> ~s~stop the ~a~ ~s~stealing the Special Cargo. */))
		{
			__LIB_3__::func_0();
		}
		if (__LIB_3__::func_417("DCONTRA_TOBJ3" /* GXT: Help take the ~a~ ~s~back to the ~y~Warehouse. */))
		{
			__LIB_3__::func_0();
		}
		if (__LIB_3__::func_417("DCONTRA_WOBJ" /* GXT: Go to the ~y~Warehouse. */))
		{
			__LIB_3__::func_0();
		}
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!func_443())
	{
		if (!BitTest(Local_109.f_1, 13) && !BitTest(Local_110[iVar4 /*11*/].f_1, 11))
		{
			if (!__LIB_3__::func_417("DCONTRA_WOBJ" /* GXT: Go to the ~y~Warehouse. */))
			{
				__LIB_3__::func_198("DCONTRA_WOBJ" /* GXT: Go to the ~y~Warehouse. */, 0);
			}
		}
		else if (iVar4 == Local_109.f_218)
		{
			if (!__LIB_3__::func_417("DCONTRA_OBJ" /* GXT: Take out the ~r~enemies. */))
			{
				__LIB_3__::func_198("DCONTRA_OBJ" /* GXT: Take out the ~r~enemies. */, 0);
			}
		}
		else if (func_5602() == Local_109.f_218)
		{
			if (!__LIB_3__::func_417("DCONTRA_OBJ" /* GXT: Take out the ~r~enemies. */))
			{
				__LIB_3__::func_198("DCONTRA_OBJ" /* GXT: Take out the ~r~enemies. */, 0);
			}
		}
	}
	else if (func_1017())
	{
		if (iVar4 == Local_109.f_218)
		{
			if (!__LIB_3__::func_417("DCONTRA_OBJ2" /* GXT: Stop the ~r~enemies ~s~stealing the Special Cargo. */))
			{
				__LIB_3__::func_198("DCONTRA_OBJ2" /* GXT: Stop the ~r~enemies ~s~stealing the Special Cargo. */, 0);
			}
		}
		else if (func_5602() == Local_109.f_218)
		{
			if (!__LIB_3__::func_417("DCONTRA_OBJ2" /* GXT: Stop the ~r~enemies ~s~stealing the Special Cargo. */))
			{
				__LIB_3__::func_198("DCONTRA_OBJ2" /* GXT: Stop the ~r~enemies ~s~stealing the Special Cargo. */, 0);
			}
		}
	}
	else
	{
		if (__LIB_3__::func_417("DCONTRA_OBJ2" /* GXT: Stop the ~r~enemies ~s~stealing the Special Cargo. */))
		{
			__LIB_3__::func_0();
		}
		if (__LIB_3__::func_417("DCONTRA_TOBJ2" /* GXT: Help <C>~a~</C> ~s~stop the ~a~ ~s~stealing the Special Cargo. */))
		{
			__LIB_3__::func_0();
		}
		if (Local_109.f_216 < 0)
		{
			if (!__LIB_3__::func_417("DCONTRA_OBJ4" /* GXT: Retrieve the ~b~Special Cargo. */))
			{
				__LIB_3__::func_198("DCONTRA_OBJ4" /* GXT: Retrieve the ~b~Special Cargo. */, 0);
			}
		}
		else
		{
			iVar2 = func_1016();
			if (iVar2 != __LIB_0__::func_162())
			{
				if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
				{
					if (iVar2 == iVar3)
					{
						if (!__LIB_3__::func_417("DCONTRA_OBJ3" /* GXT: Take the Special Cargo back to the ~y~Warehouse. */))
						{
							__LIB_3__::func_198("DCONTRA_OBJ3" /* GXT: Take the Special Cargo back to the ~y~Warehouse. */, 0);
						}
					}
					else if (!__LIB_3__::func_417("DCONTRA_TOBJ3" /* GXT: Help take the ~a~ ~s~back to the ~y~Warehouse. */))
					{
						iVar0 = __LIB_4__::func_909(iVar2);
						if (iVar0 > -1)
						{
							iVar1 = __LIB_1__::func_357(iVar0);
							__LIB_19__::func_873("DCONTRA_TOBJ3" /* GXT: Help take the ~a~ ~s~back to the ~y~Warehouse. */, "DCONTRA_CBAND" /* GXT: Special Cargo */, iVar1, 0);
						}
					}
				}
			}
		}
	}
}

int func_1016()//Position - 0x56CC8
{
	int iVar0;
	iVar0 = __LIB_0__::func_162();
	if (Local_109.f_216 > -1)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_109.f_216);
	}
	return iVar0;
}

int func_1017()//Position - 0x56CEA
{
	int iVar0;
	int iVar1;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_2))
	{
		if (__LIB_0__::func_939(Local_109.f_2[0 /*10*/].f_2))
		{
			iVar0 = NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2);
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_1))
			{
				if (!__LIB_0__::func_951(Local_109.f_2[0 /*10*/].f_1))
				{
					iVar1 = NETWORK::NET_TO_PED(Local_109.f_2[0 /*10*/].f_1);
					if (PED::IS_PED_IN_VEHICLE(iVar1, iVar0, false))
					{
						return 1;
					}
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[1 /*10*/].f_1))
			{
				if (!__LIB_0__::func_951(Local_109.f_2[1 /*10*/].f_1))
				{
					iVar1 = NETWORK::NET_TO_PED(Local_109.f_2[1 /*10*/].f_1);
					if (PED::IS_PED_IN_VEHICLE(iVar1, iVar0, false))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_1019()//Position - 0x56E0D
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!func_5601() && !func_441())
	{
		return;
	}
	if (!BitTest(uLocal_111, 18))
	{
		iVar0 = __LIB_30__::func_715(PLAYER::PLAYER_ID());
		if (iVar0 >= 2)
		{
			MISC::SET_BIT(&uLocal_111, 18);
			__LIB_30__::func_676(-1, 0, 0, -1, 0, 0);
		}
	}
	if (!func_551())
	{
		return;
	}
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar2 = PLAYER::PLAYER_ID();
	if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
	{
		iVar1 = __LIB_32__::func_190();
		iVar2 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775;
	}
	if (!BitTest(uLocal_111, 1))
	{
		iVar0 = __LIB_30__::func_715(iVar2);
		if (iVar0 >= 2)
		{
			if (iVar1 == Local_109.f_218)
			{
				if (func_443())
				{
					if (func_1047())
					{
						__LIB_30__::func_651(86, "BIGM_DEFEND" /* GXT: DEFEND SPECIAL CARGO */, "BIGM_DEFEND3" /* GXT: Retrieve the Special Cargo */, 1, -1, 2, 1, 0);
						MISC::SET_BIT(&uLocal_111, 1);
					}
				}
				else if (func_1047())
				{
					__LIB_30__::func_651(86, "BIGM_DEFEND" /* GXT: DEFEND SPECIAL CARGO */, "BIGM_DEFEND2" /* GXT: Defend your Warehouse */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_111, 1);
				}
				if (BitTest(uLocal_111, 1))
				{
					if (iVar2 == PLAYER::PLAYER_ID())
					{
						__LIB_30__::func_944(1);
					}
				}
			}
			else if (func_5602() == Local_109.f_218)
			{
				if (func_443())
				{
					if (__LIB_10__::func_712(__LIB_31__::func_575(1), "DCONTRA_TXT2" /* GXT: URGENT: there's been a raid on one of our warehouses. Surveillance made the vehicle, tracking on your GPS now. Get it back before we lose them for good. */, 2, 0, 0, 0, 0, 1, 0, 1))
					{
						__LIB_30__::func_651(86, "BIGM_DEFEND" /* GXT: DEFEND SPECIAL CARGO */, "BIGM_DEFEND3" /* GXT: Retrieve the Special Cargo */, 1, -1, 2, 1, 0);
					}
				}
				else if (__LIB_10__::func_712(__LIB_31__::func_575(1), "DCONTRA_TXT1" /* GXT: Not good! One of our warehouse alarms has been triggered. I'd get over there now to check it out. */, 2, 0, 0, 0, 0, 1, 0, 1))
				{
					__LIB_30__::func_651(86, "BIGM_DEFEND" /* GXT: DEFEND SPECIAL CARGO */, "BIGM_DEFEND4" /* GXT: Defend your organization's Warehouse */, 1, -1, 2, 1, 0);
				}
				if (iVar2 == PLAYER::PLAYER_ID())
				{
					__LIB_30__::func_944(1);
				}
				MISC::SET_BIT(&uLocal_111, 1);
			}
			else
			{
				MISC::SET_BIT(&uLocal_111, 1);
			}
		}
		else
		{
			MISC::SET_BIT(&uLocal_111, 1);
		}
	}
}

int func_1047()//Position - 0x583FE
{
	int iVar0;
	var uVar1;
	iVar0 = __LIB_31__::func_575(1);
	switch (iLocal_137)
	{
		case 0:
			sLocal_138 = func_1129();
			if (__LIB_11__::func_813(1))
			{
				__LIB_0__::func_222(&uLocal_139, 3, 0, "EXECPA_MALE", 0, 1);
			}
			else
			{
				__LIB_0__::func_222(&uLocal_139, 2, 0, "EXECPA_FEMALE", 0, 1);
			}
			iLocal_137++;
			break;
		case 1:
			if (__LIB_3__::func_446(0, 1, 0, 1))
			{
				MISC::SET_BIT(&uVar1, 4);
				if (__LIB_36__::func_49(&uLocal_139, iVar0, "EXCALAU", sLocal_138, uVar1, 0))
				{
					iLocal_137++;
					return 1;
				}
			}
			break;
		case 2:
			break;
	}
	return 0;
}

char* func_1129()//Position - 0x5A271
{
	bool bVar0;
	int iVar1;
	bVar0 = !__LIB_11__::func_813(1);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (!func_443())
	{
		if (bVar0)
		{
			switch (iVar1)
			{
				case 0:
					return "EXCAL_ATTAF";
				case 1:
					return "EXCAL_ATTAF2";
				default:
			}
			return "EXCAL_ATTAF3";
		}
		else
		{
			switch (iVar1)
			{
				case 0:
					return "EXCAL_ATTAM";
				case 1:
					return "EXCAL_ATTAM2";
				default:
			}
			return "EXCAL_ATTAM3";
		}
	}
	else if (bVar0)
	{
		switch (iVar1)
		{
			case 0:
				return "EXCAL_STOLEF";
			case 1:
				return "EXCAL_STOLF2";
			default:
		}
		return "EXCAL_STOLF3";
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				return "EXCAL_STOLEM";
			case 1:
				return "EXCAL_STOLM2";
			default:
		}
		return "EXCAL_STOLM3";
	}
	return "";
}

void func_1152()//Position - 0x62F5E
{
	if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	switch (Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_9)
	{
		case 0:
			func_5542();
			func_461();
			if (Local_109.f_214 == 2)
			{
				Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_9 = 2;
			}
			else if (Local_109.f_214 == 3)
			{
				Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_9 = 3;
			}
			break;
		case 2:
			func_1153();
			func_461();
			if (Local_109.f_214 == 3)
			{
				Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_9 = 3;
			}
			break;
		case 3:
			func_5611();
			break;
	}
}

void func_1153()//Position - 0x62FF3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar1 = Local_109.f_197 + 1;
	if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = __LIB_32__::func_190();
	}
	if (!func_443())
	{
		if (!BitTest(Local_110[iVar0 /*11*/].f_1, 14))
		{
			MISC::SET_BIT(&(Local_110[iVar0 /*11*/].f_1), 14);
		}
		return;
	}
	if (!func_5540())
	{
		if (!BitTest(Local_110[iVar0 /*11*/].f_1, 14))
		{
			MISC::SET_BIT(&(Local_110[iVar0 /*11*/].f_1), 14);
		}
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_2))
	{
		if (__LIB_0__::func_939(Local_109.f_2[0 /*10*/].f_2))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2), false))
			{
				return;
			}
		}
	}
	if (!BitTest(Local_110[iVar0 /*11*/].f_1, 14))
	{
		if (!func_1167(iVar1, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			if (!BitTest(uLocal_111, 13))
			{
				if (__LIB_31__::func_576(PLAYER::PLAYER_ID(), iVar1))
				{
					MISC::SET_BIT(&uLocal_111, 13);
				}
			}
			else
			{
				bVar4 = true;
				iVar2 = 0;
				while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
						if (__LIB_31__::func_576(iVar3, iVar1))
						{
							if (!__LIB_36__::func_242(iVar3, iVar1))
							{
								bVar4 = false;
							}
						}
					}
					iVar2++;
				}
				if (bVar4)
				{
					__LIB_31__::func_583();
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(Local_110[iVar0 /*11*/].f_1), 14);
		}
	}
}

int func_1167(int iParam0, int iParam1)//Position - 0x63751
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	iVar0 = __LIB_3__::func_38(iParam0);
	if (__LIB_5__::func_247(4, iVar0))
	{
		return 1;
	}
	else if (!__LIB_7__::func_565(iVar0))
	{
		if (__LIB_31__::func_534(iParam0, iParam1, &Var1, &uVar2))
		{
			func_1168(iVar0, 1, 1, Var1, uVar2, 0, 0, 0);
		}
		else
		{
			func_1168(iVar0, 1, 0, Var1, 0, 0, 0, 0);
		}
	}
	return 0;
}

int func_1168(int iParam0, bool bParam1, bool bParam2, struct<3> Param3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x637B2
{
	if (!__LIB_3__::func_967(iParam0))
	{
		return 0;
	}
	bParam5 = true;
	if (__LIB_5__::func_241(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!bParam5)
	{
		if (!(__LIB_12__::func_25(iParam0) || func_1173(iParam0, 0, 1)))
		{
			__LIB_28__::func_356(iParam0);
			return 0;
		}
	}
	else
	{
		__LIB_10__::func_402(2, iParam0);
	}
	if (__LIB_5__::func_247(0, iParam0))
	{
		return 0;
	}
	__LIB_10__::func_402(0, iParam0);
	__LIB_12__::func_178(4, iParam0);
	__LIB_30__::func_688(iParam0);
	if (bParam2)
	{
		__LIB_10__::func_402(1, iParam0);
		Global_1946250.f_2624[iParam0 /*3*/] = { Param3 };
		Global_1946250.f_3102[iParam0] = iParam4;
	}
	else
	{
		__LIB_12__::func_178(1, iParam0);
		Global_1946250.f_2624[iParam0 /*3*/] = { 0f, 0f, 0f };
		Global_1946250.f_3102[iParam0] = 0f;
	}
	if (bParam1)
	{
		__LIB_12__::func_178(3, iParam0);
	}
	else
	{
		__LIB_10__::func_402(3, iParam0);
	}
	__LIB_12__::func_178(10, iParam0);
	if (bParam6)
	{
		__LIB_10__::func_402(10, iParam0);
	}
	__LIB_12__::func_178(13, iParam0);
	if (bParam7)
	{
		__LIB_10__::func_402(13, iParam0);
	}
	__LIB_12__::func_248(1, iParam0);
	return 1;
}

int func_1173(int iParam0, int iParam1, int iParam2)//Position - 0x63C48
{
	int iVar0;
	if ((__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) || Global_2667225.f_2680) && (!__LIB_3__::func_779() || __LIB_31__::func_549()))
	{
		if (func_1190(iParam0))
		{
			return 0;
		}
		if (Global_1946250.f_3615 == iParam0)
		{
			return 0;
		}
		if (__LIB_0__::func_172(iParam0) == 5)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_15__::func_342())
				{
					if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 5))
					{
						return 1;
					}
				}
			}
			if (__LIB_4__::func_954(PLAYER::PLAYER_ID()))
			{
				if (__LIB_31__::func_549())
				{
					return 1;
				}
			}
		}
		if (__LIB_0__::func_172(iParam0) == 4)
		{
			if (__LIB_2__::func_730(PLAYER::PLAYER_ID()) || (__LIB_4__::func_671() && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)))
			{
				if (__LIB_31__::func_549())
				{
					if (__LIB_5__::func_631(Global_1853185) == iParam0)
					{
						return 1;
					}
				}
			}
		}
		if (__LIB_0__::func_172(iParam0) == 8)
		{
			if (__LIB_4__::func_955(PLAYER::PLAYER_ID()))
			{
				if (__LIB_31__::func_549())
				{
					return 1;
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_15__::func_342())
				{
					iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (__LIB_1__::func_693(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0), 1, 1))
						{
							if (BitTest(Global_2689235[NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0) /*453*/].f_318, 5) && __LIB_4__::func_529(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0)))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		if (__LIB_0__::func_172(iParam0) == 9)
		{
			if (__LIB_4__::func_952(PLAYER::PLAYER_ID()) || (__LIB_4__::func_451() && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)))
			{
				if (__LIB_31__::func_549())
				{
					if (__LIB_1__::func_651(__LIB_1__::func_652(Global_1853190)) == iParam0)
					{
						return 1;
					}
				}
			}
		}
		if (iParam0 == 122 && Global_2715699.f_6602)
		{
			return 0;
		}
		if (iParam2 && __LIB_31__::func_584(iParam0))
		{
			return 1;
		}
		else if (iParam1 && __LIB_29__::func_825(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1190(int iParam0)//Position - 0x6436F
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_1191(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1191(int iParam0)//Position - 0x6438F
{
	var uVar0;
	if (!Global_1946250.f_3634)
	{
		return 0;
	}
	uVar0 = { func_1192(iParam0) };
	return BitTest(uVar0[1], 22);
}

Vector3 func_1192(int iParam0)//Position - 0x643B8
{
	struct<3> Var0;
	struct<35> Var1;
	if (iParam0 == -1 || iParam0 == 159)
	{
		Var0 = 2;
		return Var0;
	}
	if (Global_1946250.f_14[iParam0 /*3*/][0] == -1 || !BitTest(Global_1946250, 3))
	{
		func_1193(iParam0, &Var1, 3);
		Stack.Push(iParam0);
		Call_Loc(Var1.f_34);
		Global_1946250.f_14[iParam0 /*3*/] = { StackVal, StackVal, StackVal };
	}
	return Global_1946250.f_14[iParam0 /*3*/];
}

void func_1193(int iParam0, var uParam1, int iParam2)//Position - 0x64427
{
	func_5525(uParam1, iParam2);
	func_5519(uParam1, iParam2);
	func_5511(uParam1, iParam2);
	func_1194(__LIB_0__::func_172(iParam0), uParam1, iParam2);
}

void func_1194(int iParam0, var uParam1, int iParam2)//Position - 0x64455
{
	switch (iParam0)
	{
		case 0:
			func_5442(uParam1, iParam2);
			break;
		case 1:
			func_5315(uParam1, iParam2);
			break;
		case 2:
			func_5240(uParam1, iParam2);
			break;
		case 3:
			func_5164(uParam1, iParam2);
			break;
		case 4:
			func_4998(uParam1, iParam2);
			break;
		case 5:
			func_4845(uParam1, iParam2);
			break;
		case 6:
			func_4783(uParam1, iParam2);
			break;
		case 7:
			func_4620(uParam1, iParam2);
			break;
		case 8:
			func_4456(uParam1, iParam2);
			break;
		case 9:
			func_4217(uParam1, iParam2);
			break;
		case 10:
			func_4139(uParam1, iParam2);
			break;
		case 11:
			func_3919(uParam1, iParam2);
			break;
		case 12:
			func_3781(uParam1, iParam2);
			break;
		case 13:
			func_3613(uParam1, iParam2);
			break;
		case 14:
			func_3455(uParam1, iParam2);
			break;
		case 15:
			func_3276(uParam1, iParam2);
			break;
		case 16:
			func_3167(uParam1, iParam2);
			break;
		case 17:
			func_2921(uParam1, iParam2);
			break;
		case 18:
			func_2827(uParam1, iParam2);
			break;
		case 19:
			func_2709(uParam1, iParam2);
			break;
		case 20:
			func_2287(uParam1, iParam2);
			break;
		case 21:
			func_2165(uParam1, iParam2);
			break;
		case 22:
			func_1994(uParam1, iParam2);
			break;
		case 23:
			func_1775(uParam1, iParam2);
			break;
		case 24:
			func_1195(uParam1, iParam2);
			break;
	}
}

void func_1195(var uParam0, int iParam1)//Position - 0x6460D
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 591356/*func_1774*/;
			break;
		case 111:
			uParam0->f_35 = 591342/*func_1773*/;
			break;
		case 1:
			uParam0->f_30 = 591244/*func_1772*/;
			break;
		case 2:
			uParam0->f_31 = 589899/*func_1766*/;
			break;
		case 3:
			uParam0->f_34 = 589668/*func_1765*/;
			break;
		case 4:
			uParam0->f_12 = 589655/*func_1764*/;
			break;
		case 5:
			uParam0->f_11 = 589645/*func_1763*/;
			break;
		case 37:
			uParam0->f_18 = 589448/*func_1762*/;
			break;
		case 38:
			uParam0->f_9 = 589400/*func_1761*/;
			break;
		case 42:
			uParam0->f_10 = 589371/*func_1760*/;
			break;
		case 6:
			uParam0->f_32 = 589062/*func_1759*/;
			break;
		case 11:
			uParam0->f_11 = 589053/*func_1758*/;
			break;
		case 12:
			uParam0->f_33 = 586385/*func_1750*/;
			break;
		case 14:
			uParam0->f_11 = 586376/*func_1749*/;
			break;
		case 109:
			uParam0->f_56 = 579765/*func_1746*/;
			break;
		case 8:
			uParam0->f_37 = 578890/*func_1745*/;
			break;
		case 7:
			uParam0->f_36 = 578773/*func_1744*/;
			break;
		case 79:
			*uParam0 = 578717/*func_1741*/;
			break;
		case 9:
			uParam0->f_29 = 578564/*func_1740*/;
			break;
		case 10:
			uParam0->f_27 = 578417/*func_1738*/;
			break;
		case 13:
			uParam0->f_2 = 578355/*func_1737*/;
			break;
		case 15:
			uParam0->f_2 = 576776/*func_1722*/;
			break;
		case 16:
			uParam0->f_5 = 575579/*func_1713*/;
			break;
		case 108:
			uParam0->f_55 = 533865/*func_1616*/;
			break;
		case 17:
			uParam0->f_17 = 532271/*func_1602*/;
			break;
		case 19:
			uParam0->f_17 = 532121/*func_1597*/;
			break;
		case 18:
			uParam0->f_8 = 532096/*func_1596*/;
			break;
		case 20:
			uParam0->f_3 = 531876/*func_1594*/;
			break;
		case 21:
			uParam0->f_3 = 530435/*func_1580*/;
			break;
		case 74:
			uParam0->f_53 = 530245/*func_1578*/;
			break;
		case 75:
			uParam0->f_4 = 529373/*func_1574*/;
			break;
		case 22:
			uParam0->f_24 = 529266/*func_1573*/;
			break;
		case 23:
			uParam0->f_26 = 529223/*func_1572*/;
			break;
		case 24:
			uParam0->f_26 = 529189/*func_1571*/;
			break;
		case 26:
			uParam0->f_38 = 529181/*func_1570*/;
			break;
		case 25:
			uParam0->f_23 = 526216/*func_1551*/;
			break;
		case 27:
			uParam0->f_25 = 526208/*func_1550*/;
			break;
		case 28:
			uParam0->f_24 = 526200/*func_1549*/;
			break;
		case 30:
			uParam0->f_8 = 526050/*func_1547*/;
			break;
		case 31:
			uParam0->f_39 = 525849/*func_1545*/;
			break;
		case 33:
			uParam0->f_40 = 524934/*func_1537*/;
			break;
		case 32:
			*uParam0 = 524879/*func_1536*/;
			break;
		case 76:
			uParam0->f_13 = 524868/*func_1535*/;
			break;
		case 34:
			uParam0->f_41 = 521115/*func_1532*/;
			break;
		case 36:
			uParam0->f_58 = 521070/*func_1531*/;
			break;
		case 35:
			uParam0->f_42 = 500065/*func_1528*/;
			break;
		case 45:
			uParam0->f_14 = 500056/*func_1527*/;
			break;
		case 46:
			uParam0->f_14 = 500047/*func_1526*/;
			break;
		case 110:
			uParam0->f_57 = 500039/*func_1525*/;
			break;
		case 77:
			uParam0->f_13 = 500016/*func_1524*/;
			break;
		case 82:
			uParam0->f_19 = 499970/*func_1522*/;
			break;
		case 47:
			uParam0->f_43 = 499838/*func_1521*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 498585/*func_1511*/;
			break;
		case 49:
			uParam0->f_8 = 498567/*func_1510*/;
			break;
		case 50:
			*uParam0 = 498253/*func_1507*/;
			break;
		case 51:
			*uParam0 = 498151/*func_1506*/;
			break;
		case 52:
			uParam0->f_15 = 498140/*func_1505*/;
			break;
		case 53:
			uParam0->f_13 = 498014/*func_1504*/;
			break;
		case 54:
			uParam0->f_45 = 497627/*func_1503*/;
			break;
		case 56:
			uParam0->f_46 = 497608/*func_1502*/;
			break;
		case 57:
			uParam0->f_11 = 497354/*func_1501*/;
			break;
		case 58:
			uParam0->f_13 = 497228/*func_1500*/;
			break;
		case 59:
			*uParam0 = 495735/*func_1488*/;
			break;
		case 60:
			*uParam0 = 495726/*func_1487*/;
			break;
		case 61:
			uParam0->f_15 = 495715/*func_1486*/;
			break;
		case 62:
			uParam0->f_13 = 495589/*func_1485*/;
			break;
		case 55:
			uParam0->f_45 = 495581/*func_1484*/;
			break;
		case 63:
			uParam0->f_11 = 495567/*func_1483*/;
			break;
		case 64:
			uParam0->f_47 = 495559/*func_1482*/;
			break;
		case 65:
			uParam0->f_21 = 493979/*func_1466*/;
			break;
		case 66:
			uParam0->f_21 = 493293/*func_1463*/;
			break;
		case 67:
			uParam0->f_21 = 493153/*func_1461*/;
			break;
		case 68:
			*uParam0 = 491948/*func_1456*/;
			break;
		case 69:
			*uParam0 = 491939/*func_1455*/;
			break;
		case 70:
			uParam0->f_48 = 491927/*func_1454*/;
			break;
		case 71:
			uParam0->f_49 = 491918/*func_1453*/;
			break;
		case 107:
			uParam0->f_50 = 491906/*func_1452*/;
			break;
		case 80:
			uParam0->f_7 = 491458/*func_1450*/;
			break;
		case 84:
			uParam0->f_1 = 491449/*func_1449*/;
			break;
		case 85:
			uParam0->f_1 = 431016/*func_1330*/;
			break;
		case 87:
			uParam0->f_1 = 428136/*func_1314*/;
			break;
		case 88:
			uParam0->f_1 = 428127/*func_1313*/;
			break;
		case 89:
			uParam0->f_54 = 428119/*func_1312*/;
			break;
		case 90:
			uParam0->f_1 = 427241/*func_1295*/;
			break;
		case 91:
			uParam0->f_1 = 427207/*func_1294*/;
			break;
		case 92:
			uParam0->f_1 = 425323/*func_1282*/;
			break;
		case 94:
			uParam0->f_1 = 423279/*func_1267*/;
			break;
		case 95:
			uParam0->f_22 = 419480/*func_1234*/;
			break;
		case 96:
			uParam0->f_1 = 419471/*func_1233*/;
			break;
		case 97:
			uParam0->f_1 = 419462/*func_1232*/;
			break;
		case 98:
			uParam0->f_1 = 419453/*func_1231*/;
			break;
		case 100:
			uParam0->f_22 = 419445/*func_1230*/;
			break;
		case 101:
			uParam0->f_22 = 419437/*func_1229*/;
			break;
		case 112:
			uParam0->f_13 = 419323/*func_1228*/;
			break;
		case 113:
			uParam0->f_3 = 419169/*func_1224*/;
			break;
		case 114:
			uParam0->f_16 = 418501/*func_1223*/;
			break;
		case 115:
			uParam0->f_3 = 418492/*func_1222*/;
			break;
		case 116:
			*uParam0 = 418483/*func_1221*/;
			break;
		case 117:
			uParam0->f_16 = 414067/*func_1220*/;
			break;
		case 118:
			uParam0->f_11 = 414058/*func_1219*/;
			break;
		case 119:
			uParam0->f_27 = 413931/*func_1214*/;
			break;
		case 120:
			uParam0->f_19 = 413876/*func_1211*/;
			break;
		case 78:
			uParam0->f_59 = 412961/*func_1198*/;
			break;
		case 124:
			uParam0->f_1 = 412952/*func_1197*/;
			break;
		case 125:
			uParam0->f_19 = 412944/*func_1196*/;
			break;
	}
}

int func_1330(int iParam0, var uParam1)//Position - 0x693A8
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || ENTITY::DOES_ENTITY_EXIST(uParam1->f_262))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_262))
		{
			iVar0 = uParam1->f_262;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1370(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1339(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_3__::func_632(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_3__::func_632(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_3__::func_631(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_3__::func_631(iParam0, &Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[0 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 1);
		}
		__LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

int func_1339(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x69B1D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	iVar2 = 8;
	if (bParam7)
	{
		iVar2 = -1;
	}
	iVar0 = -1;
	while (iVar0 <= iVar2)
	{
		iVar1 = iVar0 + 1;
		iVar3 = iVar0;
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, iVar3, false))
		{
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, iVar3, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && (__LIB_0__::func_121(iVar4) || bParam5))
			{
				if (bParam3 && !PED::IS_PED_A_PLAYER(iVar4))
				{
				}
				else
				{
					if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]))
					{
						func_1340(uParam2[iVar1], iVar4, bParam8, bParam6);
					}
					if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]) && (__LIB_0__::func_121((*uParam2)[iVar1]) || bParam5))
					{
						if (!PED::HAS_PED_HEAD_BLEND_FINISHED((*uParam2)[iVar1]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED((*uParam2)[iVar1]))
						{
							if (bParam4)
							{
								return 0;
							}
						}
						iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iVar3, false);
						if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
						{
							if (__LIB_0__::func_121(*uParam1))
							{
								ENTITY::FREEZE_ENTITY_POSITION((*uParam2)[iVar1], false);
								PED::SET_PED_INTO_VEHICLE((*uParam2)[iVar1], *uParam1, iVar3);
							}
						}
						if (iVar0 == 7 && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("insurgent3"))
						{
							VEHICLE::SET_VEHICLE_DOOR_CONTROL(*uParam1, 5, 5, 1f);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1340(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x69C7F
{
	struct<3> Var0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	*uParam0 = PED::CLONE_PED(iParam1, false, false, bParam2);
	if (__LIB_0__::func_121(iParam1))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
		__LIB_1__::func_494(*uParam0);
		if (func_1350(iParam1) || __LIB_1__::func_554(iParam1))
		{
			PED::SET_PED_HELMET(*uParam0, true);
		}
		else
		{
			PED::SET_PED_HELMET(*uParam0, false);
			PED::REMOVE_PED_HELMET(*uParam0, true);
			PED::CLEAR_PED_PROP(*uParam0, 0);
		}
		if (bParam3)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, false) };
			Var0.f_2 = (Var0.f_2 - 10f);
			ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, false, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
			ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
		return 1;
	}
	return 0;
}

int func_1350(int iParam0)//Position - 0x6A532
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_1352(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_1352(int iParam0, int iParam1, int iParam2)//Position - 0x6A633
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
				if (func_1353(iParam0, iParam1, iVar0))
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
				if (func_1353(iParam0, iParam1, iVar1))
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

int func_1353(int iParam0, int iParam1, int iParam2)//Position - 0x6A6D4
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
	Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar0, iParam1, iParam2, -1) };
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
				if (!func_1353(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_1353(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_310(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_1353(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_3__::func_310(iVar0, iVar4, iVar1, -1) };
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
			if (__LIB_1__::func_360(1759, Global_78127, 0) != uVar8[10])
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
			if (!func_1353(iParam0, 14, uVar11[iVar10]))
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
						return func_1353(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_1353(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

int func_1370(int iParam0, var uParam1, int iParam2)//Position - 0x6E736
{
	struct<101> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0) || ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (__LIB_0__::func_703(iParam2, 1))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam1, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam1, ENTITY::GET_ENTITY_COORDS(*iParam0, true), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*uParam1, ENTITY::GET_ENTITY_ROTATION(*iParam0, 2), 2, true);
		}
		if (__LIB_0__::func_703(iParam2, 2))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam1, 5f);
		}
		if (__LIB_0__::func_703(iParam2, 4))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_12, false))
			{
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(*uParam1, uParam1->f_12, 1f);
			}
		}
		return 1;
	}
	else if (func_1446(uParam1, *iParam0, 10f, 20f, 15f, ENTITY::GET_ENTITY_HEADING(*iParam0), 0, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			Var0.f_9 = 49;
			Var0.f_59 = 2;
			Var0.f_78 = -1;
			Var0.f_79 = -1;
			Var0.f_96 = -1;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_100 = -1;
			__LIB_6__::func_29(*iParam0, &Var0);
			__LIB_36__::func_246(*uParam1, &Var0, 1, 1, 0);
			__LIB_1__::func_495(*iParam0, uParam1);
			ENTITY::SET_ENTITY_COLLISION(*uParam1, false, false);
			ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(*uParam1, true);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(*uParam1, false);
			iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam1);
			if (((((!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1)) && !__LIB_0__::func_867(iVar1)) && !iVar1 == joaat("oppressor")) && !iVar1 == joaat("kosatka"))
			{
				VEHICLE::SET_VEHICLE_CAN_BREAK(*uParam1, false);
			}
			VEHICLE::GET_VEHICLE_LIGHTS_STATE(*iParam0, &iVar2, &iVar3);
			if (iVar2 != 0)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(*uParam1, 2);
			}
			if (iVar3 != 0)
			{
				VEHICLE::SET_VEHICLE_FULLBEAM(*uParam1, true);
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(*uParam1, true, true, false);
			if (!__LIB_0__::func_703(iParam2, 32))
			{
				func_1339(iParam0, uParam1, &(uParam1->f_1), __LIB_0__::func_703(iParam2, 16), __LIB_0__::func_703(iParam2, 128), __LIB_0__::func_703(iParam2, 64), !__LIB_0__::func_703(iParam2, 256), 0, 1);
			}
			if (__LIB_0__::func_703(iParam2, 4))
			{
				func_1371(iParam0, &(uParam1->f_12));
				if (__LIB_0__::func_703(iParam2, 8))
				{
					iVar4 = 0;
					while (iVar4 <= 7)
					{
						if (VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, false))
						{
							VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar4);
						}
						iVar4++;
					}
				}
			}
			if (__LIB_0__::func_703(iParam2, 8))
			{
				iVar5 = 0;
				while (iVar5 <= 7)
				{
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, false))
					{
						VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar5);
					}
					iVar5++;
				}
			}
		}
	}
	return 0;
}

int func_1371(var uParam0, var uParam1)//Position - 0x6E9E7
{
	int iVar0;
	struct<101> Var1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*uParam0, &iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (func_1446(uParam1, iVar0, 10f, 10f, 15f, ENTITY::GET_ENTITY_HEADING(iVar0), 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
				{
					Var1.f_9 = 49;
					Var1.f_59 = 2;
					Var1.f_78 = -1;
					Var1.f_79 = -1;
					Var1.f_96 = -1;
					Var1.f_97 = 1;
					Var1.f_99 = 132;
					Var1.f_100 = -1;
					__LIB_6__::func_29(iVar0, &Var1);
					__LIB_36__::func_246(*uParam1, &Var1, 1, 1, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1446(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5)//Position - 0x77D81
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_873(&Global_1966234);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
		__LIB_6__::func_29(iParam1, &Global_1966234);
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		*uParam0 = VEHICLE::CREATE_VEHICLE(iVar0, Param2, fParam3, bParam4, bParam5, false);
		__LIB_36__::func_246(*uParam0, &Global_1966234, 1, 1, 0);
		if (((!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0)) && iVar0 != joaat("kosatka")) && iVar0 != joaat("avisa"))
		{
			iVar1 = 0;
			while (iVar1 <= 5)
			{
				if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam1, iVar1))
				{
					VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, iVar1, true);
				}
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 <= 3)
			{
				if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(iParam1, iVar1))
				{
					VEHICLE::REMOVE_VEHICLE_WINDOW(*uParam0, iVar1);
				}
				iVar1++;
			}
		}
		if ((!VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0) && iVar0 != joaat("kosatka")) && iVar0 != joaat("avisa"))
		{
			iVar1 = 0;
			while (iVar1 <= 7)
			{
				if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, iVar1, true))
				{
					VEHICLE::SET_VEHICLE_TYRE_BURST(*uParam0, iVar1, true, 1000f);
				}
				else if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, iVar1, false))
				{
					VEHICLE::SET_VEHICLE_TYRE_BURST(*uParam0, iVar1, false, 1000f);
				}
				iVar1++;
			}
		}
		VEHICLE::COPY_VEHICLE_DAMAGES(iParam1, *uParam0);
		if ((iVar0 == joaat("dominator4") || iVar0 == joaat("dominator5")) || iVar0 == joaat("dominator6"))
		{
			if (!VEHICLE::GET_DOES_VEHICLE_HAVE_TOMBSTONE(iParam1))
			{
				VEHICLE::HIDE_TOMBSTONE(*uParam0, true);
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		return 1;
	}
	return 0;
}

void func_1503(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x797DB
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	if (__LIB_6__::func_601(iParam0))
	{
		if (*uParam3 != 1 && *uParam3 != 2)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			HUD::SET_BLIP_SCALE(*uParam1, 1.4f);
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 7000);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_826" /* GXT: Agency */);
			*uParam3 = 1;
			return;
		}
		else if (*uParam3 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::SET_BLIP_ROUTE(*uParam1, false);
				*uParam3 = 2;
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			*uParam3 = 1;
		}
	}
	else
	{
		if (*uParam3 == 1)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, false);
			HUD::SET_BLIP_SCALE(*uParam1, 1f);
			*uParam3 = 0;
		}
		bVar0 = false;
		if (!__LIB_6__::func_67(PLAYER::PLAYER_ID(), __LIB_3__::func_650(iParam0)) && __LIB_6__::func_67(__LIB_0__::func_797(), __LIB_3__::func_650(iParam0)))
		{
			iVar2 = 0;
			while (iVar2 < 32)
			{
				bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (__LIB_1__::func_693(bVar1, 1, 1) && bVar1 != PLAYER::PLAYER_ID())
				{
					if (__LIB_6__::func_67(bVar1, __LIB_3__::func_650(iParam0)))
					{
						Var3 = { __LIB_1__::func_696(bVar1) };
						if (__LIB_0__::func_800(Var3))
						{
							if (NETWORK::NETWORK_IS_FRIEND(&Var3))
							{
								iVar4 = joaat("FHQ_FRIEND");
								if (iVar4 != *uParam4)
								{
									*uParam4 = iVar4;
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "FHQ_FRIEND" /* GXT: Friend's Agency */);
								}
								bVar0 = true;
							}
							else
							{
								iVar2++;
							}
							if (!bVar0 && *uParam4 == joaat("FHQ_FRIEND"))
							{
								*uParam4 = joaat("BLIP_826");
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_826" /* GXT: Agency */);
							}
						}
Vector3 func_1504(int iParam0)//Position - 0x7995E
{
	switch (iParam0)
	{
		case 155:
			return 388.3036f, -74.6683f, 67.1805f;
			break;
		case 156:
			return -1016.5347f, -413.186f, 38.6161f;
			break;
		case 157:
			return -589.4908f, -707.4646f, 35.2844f;
			break;
		case 158:
			return -1039.0834f, -756.4792f, 18.8395f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_1551(int iParam0, int iParam1)//Position - 0x80788
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	iVar2 = __LIB_3__::func_616();
	Var3 = { __LIB_3__::func_681(iParam0, iVar2) };
	if (__LIB_7__::func_288(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_1561(iParam0, Var3, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if (!Global_2667225.f_2680 && !BitTest(Global_1946250, 27))
		{
			if ((((iVar2 == 0 || iVar2 == 1) || iVar2 == 4) || iVar2 == 5) || iVar2 == 6)
			{
				__LIB_3__::func_664(0);
			}
			else
			{
				__LIB_3__::func_664(1);
			}
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_10__::func_977(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var3, 1, 0, 0, 0, -1, -1, __LIB_6__::func_598());
			}
			__LIB_11__::func_327(iParam0, __LIB_6__::func_598());
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var3, 0, 0, 1, 0, -1, -1, __LIB_6__::func_598());
			}
			__LIB_11__::func_327(iParam0, __LIB_6__::func_598());
		}
	}
	else
	{
		if (__LIB_2__::func_159(0))
		{
			if (iVar2 == 3 && __LIB_6__::func_597(__LIB_0__::func_797()) == iParam0)
			{
				__LIB_3__::func_664(1);
			}
		}
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_1561(int iParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x80DD0
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<13> Var7;
	bool bVar8;
	iVar0 = -1;
	if (__LIB_1__::func_526())
	{
		iVar0 = __LIB_3__::func_680();
	}
	fVar1 = SYSTEM::POW(SYSTEM::TO_FLOAT(__LIB_3__::func_679(iParam0)), 2f);
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7;
	iVar4 = 0;
	while (iVar4 < 32)
	{
		bVar5 = iVar4;
		if (iVar2 == bVar5 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar5))
		{
		}
		else
		{
			iVar6 = PLAYER::GET_PLAYER_PED(bVar5);
			if (ENTITY::IS_ENTITY_DEAD(iVar6, false))
			{
			}
			else if (bParam5)
			{
				if (iVar3 != Global_2689235[bVar5 /*453*/].f_318.f_7)
				{
				}
				else
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true), Param1) <= fVar1)
					{
						Var7 = { __LIB_1__::func_696(bVar5) };
						bVar8 = false;
						if (__LIB_6__::func_70(bVar5) > -1)
						{
							if (iParam0 == 123 || iParam0 == 124)
							{
								bVar8 = true;
							}
						}
						if (bParam4 && !*iParam2)
						{
							if ((iVar0 != -1 && iVar0 == __LIB_3__::func_106(&Var7)) || NETWORK::NETWORK_IS_FRIEND(&Var7))
							{
								if (((((((((!__LIB_1__::func_907(bVar5, 1) && !__LIB_6__::func_279(bVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_2__::func_154(bVar5)) && !__LIB_4__::func_976(bVar5, 1)) && !((__LIB_2__::func_72(bVar5, 1) && !__LIB_3__::func_234(iVar2, bVar5)) && __LIB_6__::func_598() != 0)) && !func_1562(bVar5)) && !__LIB_3__::func_171(bVar5)) && !bVar8)
								{
									*iParam2 = 1;
								}
							}
						}
						if ((((((((((!*iParam3 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar5)) && !__LIB_6__::func_279(bVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_2__::func_154(bVar5)) && !__LIB_4__::func_976(bVar5, 1)) && __LIB_1__::func_744(PLAYER::PLAYER_ID())) && !func_1562(bVar5)) && !__LIB_3__::func_171(bVar5)) && !bVar8)
						{
							*iParam3 = 1;
						}
					}
					if (*iParam3 && *iParam2)
					{
					}
					else
					{
						iVar4++;
					}
				}
int func_1562(bool bParam0)//Position - 0x8100B
{
	int iVar0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2788198;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

char* func_1602(var uParam0, var uParam1, var uParam2)//Position - 0x81F2F
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (__LIB_5__::func_434())
	{
		return "SI_ENTR_BLCK26A" /* GXT: You cannot enter the Agency while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = __LIB_5__::func_185(PLAYER::PLAYER_ID());
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
		{
			switch (iVar0)
			{
				case 192:
					return "FHQ_P_BLCK_A" /* GXT: You can't enter the Agency while resupplying another business. */;
				case 190:
					return "FHQ_P_BLCK_B" /* GXT: You can't enter the Agency while selling goods from another business. */;
				case 167:
					return "FHQ_P_BLCK_C" /* GXT: You can't enter the Agency while acquiring goods for a Warehouse. */;
				case 168:
					return "FHQ_P_BLCK_D" /* GXT: You can't enter the Agency while selling goods from a Warehouse. */;
				case 178:
					return "FHQ_P_BLCK_E" /* GXT: You can't enter the Agency while acquiring a vehicle for a Warehouse. */;
				case 188:
					return "FHQ_P_BLCK_F" /* GXT: You can't enter the Agency while selling vehicles from a Warehouse. */;
				case 225:
					return "FHQ_P_BLCK_G" /* GXT: You can't enter the Agency while acquiring goods for a Bunker. */;
				case 226:
					return "FHQ_P_BLCK_H" /* GXT: You can't enter the Agency while selling goods from a Bunker. */;
				case 229:
					return "FHQ_P_BLCK_I" /* GXT: You can't enter the Agency while acquiring goods for a Hangar. */;
				case 230:
					return "FHQ_P_BLCK_J" /* GXT: You can't enter the Agency while selling goods from a Hangar. */;
				case 237:
					return "FHQ_P_BLCK_O" /* GXT: You can't enter the Agency while taking part in Nightclub business. */;
				case 243:
					return "FHQ_P_BLCK_P" /* GXT: You can't enter the Agency while working for Ms. Baker. */;
				case 271:
					return "FHQ_P_BLCK_U" /* GXT: You can't enter the Agency while conducting Auto Shop Business. */;
				}
			}
		default:
	}
	if (__LIB_3__::func_695())
	{
		return "FHQ_P_BLCK_K" /* GXT: You can't enter the Agency with a prostitute. */;
	}
	if (__LIB_2__::func_906())
	{
		return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
	}
	if (__LIB_3__::func_694(PLAYER::PLAYER_ID()))
	{
		return "FHQ_P_BLCK_L" /* GXT: You can't access the Agency as the Beast. */;
	}
	if (__LIB_3__::func_693() && !__LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
		{
			return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
		}
	}
	if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_692(PLAYER::PLAYER_ID()))
	{
		return "FHQ_P_BLCK_M" /* GXT: You can't access the Agency whilst wearing the Ballistic Equipment. */;
	}
	if ((__LIB_6__::func_72(PLAYER::PLAYER_ID()) && __LIB_1__::func_17(PLAYER::PLAYER_ID())) && __LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
			{
				return "FHQ_P_BLCK_N" /* GXT: You can't enter the Agency while taking part in a Business Battle. */;
			}
		}
		else
		{
			return "FHQ_P_BLCK_N" /* GXT: You can't enter the Agency while taking part in a Business Battle. */;
		}
	}
	if (!__LIB_5__::func_852(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar4 = __LIB_3__::func_392(iVar3, &uVar2, &uVar1);
			iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar5))
			{
				iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar5);
				if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
				{
					if (!__LIB_6__::func_279(PLAYER::PLAYER_ID()))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar3))
						{
							iVar7 = ENTITY::GET_ENTITY_ATTACHED_TO(iVar3);
							if ((__LIB_0__::func_121(iVar7) && !__LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar3))) && !__LIB_3__::func_690(iVar3))
							{
								return "PROP_BLOCK_TRAIL" /* GXT: Unable to enter garage. Please detach trailer. */;
							}
							else
							{
								return "FHQ_P_BLCK_Q" /* GXT: You can't enter the Agency with this vehicle. */;
							}
						}
						else if (__LIB_3__::func_690(iVar3))
						{
							return "FHQ_P_BLCK_R" /* GXT: You can't enter the Agency with the Mobile Operations Center. */;
						}
						else if ((((((__LIB_1__::func_589(iVar3) || __LIB_1__::func_819(ENTITY::GET_ENTITY_MODEL(iVar3))) || !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar3), 26)) || __LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar3))) || __LIB_1__::func_588(iVar3)) || (__LIB_3__::func_689(iVar3) && !__LIB_3__::func_601(iVar3, 1))) || (__LIB_0__::func_872(iVar3, 1) && iVar4 != iVar6))
						{
							if (__LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar3)) && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar3))
							{
								return "";
							}
							else
							{
								return "FHQ_P_BLCK_Q" /* GXT: You can't enter the Agency with this vehicle. */;
							}
						}
						else if (__LIB_0__::func_121(iVar3) && ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rcbandito"))
						{
							return "FHQ_P_BLCK_T" /* GXT: You can't enter the Agency with the RC Bandito. */;
						}
					}
				}
			}
		}
	}
	return "";
}

int func_1616(var uParam0, var uParam1, var uParam2)//Position - 0x82569
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	*uParam2 = 0;
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_588(iVar2))
			{
				__LIB_7__::func_484(uParam1);
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
			{
				__LIB_7__::func_484(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_7__::func_484(uParam1);
				return 0;
			}
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_3__::func_601(iVar2, 1)) && !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 26))
			{
				__LIB_7__::func_484(uParam1);
				return 0;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || PED::IS_PED_INJURED(iVar3))
			{
				__LIB_7__::func_484(uParam1);
				return 0;
			}
			bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
			if ((__LIB_0__::func_872(iVar2, 1) && __LIB_3__::func_251(iVar2) != bVar4) && !Global_1852994.f_171)
			{
				__LIB_7__::func_484(uParam1);
				return 0;
			}
			if (__LIB_3__::func_601(iVar2, 1) && __LIB_6__::func_373(iVar2) != bVar4)
			{
				__LIB_7__::func_484(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_872(iVar2, 1) && __LIB_3__::func_251(iVar2) == bVar4) && __LIB_2__::func_734()) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1)) && !__LIB_3__::func_644(PLAYER::PLAYER_ID()))
			{
				__LIB_7__::func_484(uParam1);
				return 0;
			}
			if (__LIB_3__::func_689(iVar2) && !__LIB_3__::func_601(iVar2, 1))
			{
				__LIB_7__::func_484(uParam1);
				return 0;
			}
			if (__LIB_0__::func_870(iVar2, 1) && __LIB_3__::func_249(iVar2, 1, 0) != bVar4)
			{
				__LIB_7__::func_484(uParam1);
				return 0;
			}
			if (__LIB_2__::func_116(iVar2, 1))
			{
				__LIB_7__::func_484(uParam1);
				return 0;
			}
			if (__LIB_0__::func_871(iVar2, 1))
			{
				__LIB_7__::func_484(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_693(bVar4, 1, 1) && __LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 26)) && __LIB_6__::func_72(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3)))
			{
				if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_872(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_463() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if (!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
					{
						if ((__LIB_5__::func_949(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) || Global_2689235[bVar4 /*453*/].f_318.f_10 != __LIB_0__::func_162()) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1.5f)))
						{
							if (func_1635(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_627(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_864(&(uParam1->f_397)) && !__LIB_0__::func_937(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 24))
								{
									if (__LIB_6__::func_282() || (__LIB_3__::func_644(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 24))
									{
										if ((__LIB_5__::func_949(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2))
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_5__::func_435(1, *uParam0);
											__LIB_6__::func_789(uParam1, 0);
											__LIB_7__::func_395(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 24)
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_7__::func_395(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_701(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
										{
											__LIB_5__::func_435(1, *uParam0);
											__LIB_6__::func_789(uParam1, 0);
											__LIB_7__::func_395(iVar2);
											return 1;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					__LIB_30__::func_751(*uParam0);
					bVar5 = __LIB_6__::func_73(bVar4) == uParam0->f_1;
					if (bVar5)
					{
						if (!__LIB_3__::func_697(uParam0->f_1))
						{
							bVar5 = false;
						}
					}
					else if (BitTest(Global_1946250.f_4523, 30))
					{
						bVar5 = true;
					}
					if (__LIB_3__::func_643(PLAYER::PLAYER_ID()) && bVar5)
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_3__::func_642();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_3__::func_122(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_5__::func_435(0, -1);
				}
				__LIB_6__::func_789(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (!bVar0)
		{
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_5__::func_435(0, -1);
	}
	__LIB_6__::func_789(uParam1, 1);
	return 0;
}

int func_1635(var uParam0, int iParam1, bool bParam2)//Position - 0x83197
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "ARC_GARAGE_T"))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1)) && !__LIB_3__::func_601(iParam1, 1))
		{
			if (!__LIB_32__::func_599(iParam1, 128, &Var0, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_1775(var uParam0, int iParam1)//Position - 0x90605
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 647299/*func_1993*/;
			break;
		case 111:
			uParam0->f_35 = 647290/*func_1992*/;
			break;
		case 1:
			uParam0->f_30 = 647210/*func_1990*/;
			break;
		case 2:
			uParam0->f_31 = 646573/*func_1986*/;
			break;
		case 3:
			uParam0->f_34 = 646307/*func_1985*/;
			break;
		case 4:
			uParam0->f_12 = 646294/*func_1984*/;
			break;
		case 6:
			uParam0->f_32 = 646195/*func_1983*/;
			break;
		case 37:
			uParam0->f_18 = 646059/*func_1982*/;
			break;
		case 38:
			uParam0->f_9 = 646011/*func_1981*/;
			break;
		case 39:
			uParam0->f_11 = 645976/*func_1980*/;
			break;
		case 41:
			uParam0->f_20 = 645857/*func_1977*/;
			break;
		case 42:
			uParam0->f_10 = 645828/*func_1976*/;
			break;
		case 11:
			uParam0->f_11 = 645818/*func_1975*/;
			break;
		case 12:
			uParam0->f_33 = 643667/*func_1971*/;
			break;
		case 14:
			uParam0->f_11 = 643658/*func_1970*/;
			break;
		case 109:
			uParam0->f_56 = 641087/*func_1967*/;
			break;
		case 8:
			uParam0->f_37 = 641079/*func_1966*/;
			break;
		case 7:
			uParam0->f_36 = 641070/*func_1965*/;
			break;
		case 79:
			*uParam0 = 641061/*func_1964*/;
			break;
		case 13:
			uParam0->f_2 = 640999/*func_1963*/;
			break;
		case 15:
			uParam0->f_2 = 640918/*func_1962*/;
			break;
		case 16:
			uParam0->f_5 = 640565/*func_1961*/;
			break;
		case 108:
			uParam0->f_55 = 636131/*func_1946*/;
			break;
		case 17:
			uParam0->f_17 = 634965/*func_1944*/;
			break;
		case 19:
			uParam0->f_17 = 634940/*func_1943*/;
			break;
		case 20:
			uParam0->f_3 = 634931/*func_1942*/;
			break;
		case 21:
			uParam0->f_3 = 634800/*func_1940*/;
			break;
		case 74:
			uParam0->f_53 = 634696/*func_1939*/;
			break;
		case 75:
			uParam0->f_4 = 634680/*func_1938*/;
			break;
		case 22:
			uParam0->f_24 = 634524/*func_1937*/;
			break;
		case 23:
			uParam0->f_26 = 634516/*func_1936*/;
			break;
		case 26:
			uParam0->f_38 = 626589/*func_1897*/;
			break;
		case 25:
			uParam0->f_23 = 625563/*func_1894*/;
			break;
		case 27:
			uParam0->f_25 = 625347/*func_1891*/;
			break;
		case 28:
			uParam0->f_24 = 625306/*func_1890*/;
			break;
		case 29:
			uParam0->f_28 = 625283/*func_1889*/;
			break;
		case 30:
			uParam0->f_8 = 625102/*func_1886*/;
			break;
		case 31:
			uParam0->f_39 = 625076/*func_1885*/;
			break;
		case 43:
			uParam0->f_8 = 624962/*func_1884*/;
			break;
		case 33:
			uParam0->f_40 = 624844/*func_1883*/;
			break;
		case 76:
			uParam0->f_13 = 624795/*func_1882*/;
			break;
		case 34:
			uParam0->f_41 = 615956/*func_1881*/;
			break;
		case 36:
			uParam0->f_58 = 615908/*func_1880*/;
			break;
		case 35:
			uParam0->f_42 = 604750/*func_1873*/;
			break;
		case 45:
			uParam0->f_14 = 604741/*func_1872*/;
			break;
		case 46:
			uParam0->f_14 = 604732/*func_1871*/;
			break;
		case 110:
			uParam0->f_57 = 604724/*func_1870*/;
			break;
		case 77:
			uParam0->f_13 = 604713/*func_1869*/;
			break;
		case 47:
			uParam0->f_43 = 604587/*func_1868*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 603702/*func_1855*/;
			break;
		case 49:
			uParam0->f_8 = 603693/*func_1854*/;
			break;
		case 50:
			*uParam0 = 603524/*func_1853*/;
			break;
		case 51:
			*uParam0 = 603515/*func_1852*/;
			break;
		case 52:
			uParam0->f_15 = 603504/*func_1851*/;
			break;
		case 53:
			uParam0->f_13 = 603481/*func_1850*/;
			break;
		case 54:
			uParam0->f_45 = 603432/*func_1849*/;
			break;
		case 56:
			uParam0->f_46 = 603414/*func_1848*/;
			break;
		case 57:
			uParam0->f_11 = 603372/*func_1846*/;
			break;
		case 58:
			uParam0->f_13 = 603330/*func_1845*/;
			break;
		case 59:
			*uParam0 = 603201/*func_1843*/;
			break;
		case 60:
			*uParam0 = 603192/*func_1842*/;
			break;
		case 61:
			uParam0->f_15 = 603181/*func_1841*/;
			break;
		case 62:
			uParam0->f_13 = 603158/*func_1840*/;
			break;
		case 63:
			uParam0->f_11 = 603149/*func_1839*/;
			break;
		case 55:
			uParam0->f_45 = 603107/*func_1838*/;
			break;
		case 64:
			uParam0->f_47 = 603099/*func_1837*/;
			break;
		case 65:
			uParam0->f_21 = 603091/*func_1836*/;
			break;
		case 66:
			uParam0->f_21 = 602820/*func_1835*/;
			break;
		case 67:
			uParam0->f_21 = 602750/*func_1834*/;
			break;
		case 68:
			*uParam0 = 602078/*func_1832*/;
			break;
		case 69:
			*uParam0 = 602069/*func_1831*/;
			break;
		case 70:
			uParam0->f_48 = 602057/*func_1830*/;
			break;
		case 71:
			uParam0->f_49 = 601837/*func_1829*/;
			break;
		case 107:
			uParam0->f_50 = 601825/*func_1828*/;
			break;
		case 80:
			uParam0->f_7 = 601289/*func_1824*/;
			break;
		case 84:
			uParam0->f_1 = 601174/*func_1819*/;
			break;
		case 85:
			uParam0->f_1 = 600270/*func_1817*/;
			break;
		case 87:
			uParam0->f_1 = 597641/*func_1808*/;
			break;
		case 88:
			uParam0->f_1 = 597632/*func_1807*/;
			break;
		case 89:
			uParam0->f_54 = 597624/*func_1806*/;
			break;
		case 96:
			uParam0->f_1 = 597615/*func_1805*/;
			break;
		case 97:
			uParam0->f_1 = 597606/*func_1804*/;
			break;
		case 98:
			uParam0->f_1 = 597597/*func_1803*/;
			break;
		case 100:
			uParam0->f_22 = 597589/*func_1802*/;
			break;
		case 101:
			uParam0->f_22 = 597581/*func_1801*/;
			break;
		case 112:
			uParam0->f_13 = 597546/*func_1799*/;
			break;
		case 113:
			uParam0->f_3 = 597537/*func_1798*/;
			break;
		case 114:
			uParam0->f_16 = 595599/*func_1796*/;
			break;
		case 115:
			uParam0->f_3 = 595590/*func_1795*/;
			break;
		case 116:
			*uParam0 = 595581/*func_1794*/;
			break;
		case 117:
			uParam0->f_16 = 594361/*func_1793*/;
			break;
		case 121:
			*uParam0 = 594279/*func_1792*/;
			break;
		case 122:
			*uParam0 = 594262/*func_1791*/;
			break;
		case 123:
			uParam0->f_19 = 594230/*func_1789*/;
			break;
		case 78:
			uParam0->f_59 = 593040/*func_1778*/;
			break;
		case 124:
			uParam0->f_1 = 593031/*func_1777*/;
			break;
		case 125:
			uParam0->f_19 = 593023/*func_1776*/;
			break;
	}
}

int func_1817(int iParam0, var uParam1)//Position - 0x928CE
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	var uVar7;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = __LIB_3__::func_616();
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1370(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1339(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_3__::func_752(iParam0, &Var2, &Var4, &uVar6, 1, iVar0);
		__LIB_3__::func_752(iParam0, &Var3, &Var5, &uVar7, 0, iVar0);
		__LIB_6__::func_27(&(Global_1946250.f_3638), 5000, "TD Shot", Var2, Var4, uVar6, Var3, Var5, uVar7, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_1894(int iParam0, int iParam1)//Position - 0x98B9B
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	bVar2 = !BitTest(iParam1->f_2, 7);
	iVar3 = __LIB_3__::func_616();
	iVar4 = 0;
	Var5 = { __LIB_3__::func_780(iVar3) };
	func_1561(iParam0, Var5, &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		switch (iVar3)
		{
			case 12:
			case 13:
			case 14:
			case 15:
				__LIB_5__::func_189(iParam1, 0, 1);
				__LIB_5__::func_189(iParam1, 1, 0);
				__LIB_5__::func_189(iParam1, 2, 0);
				if (__LIB_3__::func_661(0, iParam1))
				{
					__LIB_3__::func_664(1);
				}
				break;
			default:
				__LIB_5__::func_189(iParam1, 0, !bVar2);
				__LIB_5__::func_189(iParam1, 1, 0);
				__LIB_5__::func_189(iParam1, 2, 0);
				__LIB_3__::func_664(0);
				MISC::SET_BIT(&(iParam1->f_2), 6);
				break;
		}
		return;
	}
	else if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_5__::func_189(iParam1, 0, 1);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_7__::func_295(iParam0, -1);
		}
		if (((iVar3 == 12 || iVar3 == 13) || iVar3 == 14) || iVar3 == 15)
		{
			iVar4 = 1;
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_295(iParam0, -1);
			__LIB_3__::func_664(iVar4);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var5, 1, 0, 0, 0, -2, -1, iVar4);
			}
			__LIB_7__::func_612(iVar4, 1);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var5, 0, 0, 1, 0, -2, -1, iVar4);
			}
			__LIB_7__::func_612(iVar4, 1);
		}
	}
	else
	{
		__LIB_3__::func_664(iVar4);
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_1897(var uParam0, var uParam1)//Position - 0x98F9D
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	if (!__LIB_5__::func_797() && iVar0 != 1)
	{
		__LIB_3__::func_784(1);
	}
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_49(uParam0, uParam1);
			break;
		case 1:
			func_1898(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_1898(var uParam0, var uParam1)//Position - 0x98FF3
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4[3];
	var uVar5[3];
	char* sVar6;
	int iVar7;
	int iVar8;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	bVar2 = __LIB_5__::func_208();
	func_1561(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		if (bVar2 || (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_79[0 /*6*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[0 /*6*/]), __LIB_6__::func_455(0))))
		{
			uParam1->f_6 = 1;
			if (__LIB_3__::func_785() == 1)
			{
				uParam1->f_8 = 1;
				uParam1->f_11 = 10;
				uParam1->f_1 = 1;
				uParam1->f_10 = 1;
				__LIB_5__::func_462();
				if (bVar2)
				{
					__LIB_3__::func_664(1);
				}
				else if (BitTest(Global_1946250.f_8, 22))
				{
					__LIB_6__::func_454(PLAYER::PLAYER_ID());
				}
			}
			return;
		}
	}
	sVar6 = __LIB_3__::func_770();
	iVar8 = 0;
	while (iVar8 < 3)
	{
		uVar5[iVar7] = __LIB_6__::func_455(iVar8);
		if (__LIB_3__::func_782(iVar8, bVar0, bVar1))
		{
			iVar4[iVar7] = iVar8;
			if (!bVar3 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar7 /*6*/]), uVar5[iVar7]))
			{
				bVar3 = true;
			}
			iVar7++;
		}
		else if (!bVar3)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar7 /*6*/]), uVar5[iVar7]))
			{
				bVar3 = true;
			}
		}
		iVar8++;
	}
	if (uParam0->f_5 || bVar3)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CAR_MET_EXT_T" /* GXT: LS Car Meet */);
		__LIB_3__::func_566(1, sVar6, sVar6);
		__LIB_5__::func_270();
		iVar8 = 0;
		while (iVar8 < iVar7)
		{
			__LIB_10__::func_18(iVar8, uVar5[iVar8], 0, 1, 0, 0, 0);
			iVar8++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_3__::func_785() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			uParam1->f_10 = 1;
			__LIB_5__::func_462();
			if (bVar2)
			{
				__LIB_3__::func_664(1);
			}
			else if (BitTest(Global_1946250.f_8, 22))
			{
				__LIB_6__::func_454(PLAYER::PLAYER_ID());
			}
			if (iVar4[uParam0->f_4] != 0)
			{
				__LIB_8__::func_21(iVar4[uParam0->f_4], 154);
			}
		}
	}
	else if (uParam0->f_3)
	{
		uParam1->f_4 = !__LIB_5__::func_797();
		__LIB_5__::func_462();
		MISC::CLEAR_BIT(&(Global_1946250.f_8), 22);
	}
}

int func_1946(var uParam0, var uParam1, var uParam2)//Position - 0x9B4E3
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	*uParam2 = 0;
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_0__::func_121(iVar2))
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
				if (!__LIB_1__::func_841(iVar3))
				{
					return 0;
				}
				if (__LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
				{
					if (!__LIB_0__::func_872(iVar2, 1))
					{
						return 0;
					}
					if (uParam0->f_1 == 9 || uParam0->f_1 == 10)
					{
						if (!__LIB_1__::func_687(PLAYER::PLAYER_ID()))
						{
							return 0;
						}
					}
				}
			}
			if (__LIB_1__::func_588(iVar2))
			{
				__LIB_7__::func_488(uParam1);
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
			{
				__LIB_7__::func_488(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_7__::func_488(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 21))
			{
				__LIB_7__::func_488(uParam1);
				return 0;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4) || PED::IS_PED_INJURED(iVar4))
			{
				__LIB_7__::func_488(uParam1);
				return 0;
			}
			bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
			if ((__LIB_0__::func_872(iVar2, 1) && __LIB_3__::func_251(iVar2) != bVar5) && !Global_1852994.f_171)
			{
				__LIB_7__::func_488(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_872(iVar2, 1) && __LIB_3__::func_251(iVar2) == bVar5) && __LIB_2__::func_734()) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1)) && !__LIB_3__::func_644(PLAYER::PLAYER_ID()))
			{
				__LIB_7__::func_488(uParam1);
				return 0;
			}
			if (__LIB_3__::func_689(iVar2))
			{
				__LIB_7__::func_488(uParam1);
				return 0;
			}
			if (__LIB_0__::func_870(iVar2, 1) && __LIB_3__::func_249(iVar2, 1, 0) != bVar5)
			{
				__LIB_7__::func_488(uParam1);
				return 0;
			}
			if (__LIB_2__::func_116(iVar2, 1))
			{
				__LIB_7__::func_488(uParam1);
				return 0;
			}
			if (__LIB_0__::func_871(iVar2, 1))
			{
				__LIB_7__::func_488(uParam1);
				return 0;
			}
			if (__LIB_1__::func_693(bVar5, 1, 1) && __LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 21))
			{
				if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_872(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_463() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if (!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
					{
						if (__LIB_5__::func_949(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1.5f)))
						{
							if (func_1956(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_627(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_864(&(uParam1->f_397)) && !__LIB_0__::func_937(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || (((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_5__::func_196(PLAYER::PLAYER_ID()) != -1) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 23))
								{
									if (__LIB_6__::func_293() || ((__LIB_3__::func_644(PLAYER::PLAYER_ID()) && __LIB_5__::func_196(PLAYER::PLAYER_ID()) != -1) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 23))
									{
										if ((__LIB_5__::func_949(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2))
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_5__::func_435(1, *uParam0);
											__LIB_6__::func_794(uParam1, 0);
											__LIB_7__::func_395(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 23)
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_7__::func_395(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_701(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
										{
											__LIB_5__::func_435(1, *uParam0);
											__LIB_6__::func_794(uParam1, 0);
											__LIB_7__::func_395(iVar2);
											return 1;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					__LIB_30__::func_741(*uParam0);
					bVar6 = __LIB_6__::func_73(bVar5) == uParam0->f_1;
					if (bVar6)
					{
						if (!__LIB_3__::func_787(uParam0->f_1))
						{
							bVar6 = false;
						}
					}
					else if (BitTest(Global_1946250.f_4523, 30))
					{
						bVar6 = true;
					}
					if (__LIB_3__::func_643(PLAYER::PLAYER_ID()) && bVar6)
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_3__::func_642();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_3__::func_122(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_5__::func_435(0, -1);
				}
				__LIB_6__::func_794(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (!bVar0)
		{
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_5__::func_435(0, -1);
	}
	__LIB_6__::func_794(uParam1, 1);
	return 0;
}

int func_1956(var uParam0, int iParam1, bool bParam2)//Position - 0x9C27B
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "CAR_M_EXT_V_T" /* GXT: LS CAR MEET */))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1))
		{
			if (!__LIB_32__::func_599(iParam1, 125, &Var0, 0, 1, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_1994(var uParam0, int iParam1)//Position - 0x9E08C
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 687754/*func_2164*/;
			break;
		case 111:
			uParam0->f_35 = 687740/*func_2163*/;
			break;
		case 1:
			uParam0->f_30 = 687648/*func_2161*/;
			break;
		case 2:
			uParam0->f_31 = 687430/*func_2158*/;
			break;
		case 3:
			uParam0->f_34 = 687273/*func_2157*/;
			break;
		case 4:
			uParam0->f_12 = 687260/*func_2156*/;
			break;
		case 5:
			uParam0->f_11 = 687250/*func_2155*/;
			break;
		case 37:
			uParam0->f_18 = 687131/*func_2154*/;
			break;
		case 38:
			uParam0->f_9 = 687083/*func_2153*/;
			break;
		case 42:
			uParam0->f_10 = 687054/*func_2152*/;
			break;
		case 6:
			uParam0->f_32 = 686966/*func_2151*/;
			break;
		case 11:
			uParam0->f_11 = 686957/*func_2150*/;
			break;
		case 12:
			uParam0->f_33 = 685212/*func_2145*/;
			break;
		case 14:
			uParam0->f_11 = 685203/*func_2144*/;
			break;
		case 109:
			uParam0->f_56 = 681155/*func_2141*/;
			break;
		case 8:
			uParam0->f_37 = 680678/*func_2140*/;
			break;
		case 7:
			uParam0->f_36 = 680584/*func_2139*/;
			break;
		case 79:
			*uParam0 = 680575/*func_2138*/;
			break;
		case 13:
			uParam0->f_2 = 680513/*func_2137*/;
			break;
		case 15:
			uParam0->f_2 = 680432/*func_2136*/;
			break;
		case 16:
			uParam0->f_5 = 679534/*func_2134*/;
			break;
		case 108:
			uParam0->f_55 = 676254/*func_2122*/;
			break;
		case 17:
			uParam0->f_17 = 674985/*func_2119*/;
			break;
		case 19:
			uParam0->f_17 = 674960/*func_2118*/;
			break;
		case 20:
			uParam0->f_3 = 674746/*func_2116*/;
			break;
		case 21:
			uParam0->f_3 = 674682/*func_2115*/;
			break;
		case 74:
			uParam0->f_53 = 674578/*func_2114*/;
			break;
		case 75:
			uParam0->f_4 = 674562/*func_2113*/;
			break;
		case 22:
			uParam0->f_24 = 674455/*func_2112*/;
			break;
		case 23:
			uParam0->f_26 = 674447/*func_2111*/;
			break;
		case 26:
			uParam0->f_38 = 670441/*func_2092*/;
			break;
		case 25:
			uParam0->f_23 = 669991/*func_2089*/;
			break;
		case 27:
			uParam0->f_25 = 669983/*func_2088*/;
			break;
		case 28:
			uParam0->f_24 = 669975/*func_2087*/;
			break;
		case 30:
			uParam0->f_8 = 669338/*func_2082*/;
			break;
		case 31:
			uParam0->f_39 = 669208/*func_2081*/;
			break;
		case 33:
			uParam0->f_40 = 668334/*func_2072*/;
			break;
		case 32:
			*uParam0 = 668131/*func_2068*/;
			break;
		case 76:
			uParam0->f_13 = 667978/*func_2067*/;
			break;
		case 34:
			uParam0->f_41 = 666366/*func_2063*/;
			break;
		case 36:
			uParam0->f_58 = 666321/*func_2062*/;
			break;
		case 35:
			uParam0->f_42 = 657284/*func_2059*/;
			break;
		case 45:
			uParam0->f_14 = 657275/*func_2058*/;
			break;
		case 46:
			uParam0->f_14 = 657266/*func_2057*/;
			break;
		case 110:
			uParam0->f_57 = 657258/*func_2056*/;
			break;
		case 77:
			uParam0->f_13 = 657235/*func_2055*/;
			break;
		case 47:
			uParam0->f_43 = 657183/*func_2054*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 657045/*func_2052*/;
			break;
		case 49:
			uParam0->f_8 = 657027/*func_2051*/;
			break;
		case 50:
			*uParam0 = 656220/*func_2048*/;
			break;
		case 51:
			*uParam0 = 656118/*func_2047*/;
			break;
		case 52:
			uParam0->f_15 = 656107/*func_2046*/;
			break;
		case 53:
			uParam0->f_13 = 655954/*func_2045*/;
			break;
		case 54:
			uParam0->f_45 = 655719/*func_2044*/;
			break;
		case 56:
			uParam0->f_46 = 655710/*func_2043*/;
			break;
		case 57:
			uParam0->f_11 = 655295/*func_2039*/;
			break;
		case 58:
			uParam0->f_13 = 655142/*func_2038*/;
			break;
		case 59:
			*uParam0 = 655133/*func_2037*/;
			break;
		case 60:
			*uParam0 = 655124/*func_2036*/;
			break;
		case 61:
			uParam0->f_15 = 655113/*func_2035*/;
			break;
		case 62:
			uParam0->f_13 = 655102/*func_2034*/;
			break;
		case 63:
			uParam0->f_11 = 655093/*func_2033*/;
			break;
		case 64:
			uParam0->f_47 = 655085/*func_2032*/;
			break;
		case 65:
			uParam0->f_21 = 654029/*func_2029*/;
			break;
		case 66:
			uParam0->f_21 = 653809/*func_2028*/;
			break;
		case 67:
			uParam0->f_21 = 653734/*func_2027*/;
			break;
		case 68:
			*uParam0 = 653045/*func_2026*/;
			break;
		case 69:
			*uParam0 = 653036/*func_2025*/;
			break;
		case 70:
			uParam0->f_48 = 653024/*func_2024*/;
			break;
		case 71:
			uParam0->f_49 = 652932/*func_2023*/;
			break;
		case 107:
			uParam0->f_50 = 652920/*func_2022*/;
			break;
		case 80:
			uParam0->f_7 = 652553/*func_2021*/;
			break;
		case 84:
			uParam0->f_1 = 652544/*func_2020*/;
			break;
		case 85:
			uParam0->f_1 = 651751/*func_2018*/;
			break;
		case 87:
			uParam0->f_1 = 650373/*func_2011*/;
			break;
		case 88:
			uParam0->f_1 = 650364/*func_2010*/;
			break;
		case 89:
			uParam0->f_54 = 650356/*func_2009*/;
			break;
		case 96:
			uParam0->f_1 = 650347/*func_2008*/;
			break;
		case 97:
			uParam0->f_1 = 650338/*func_2007*/;
			break;
		case 98:
			uParam0->f_1 = 650329/*func_2006*/;
			break;
		case 100:
			uParam0->f_22 = 650321/*func_2005*/;
			break;
		case 101:
			uParam0->f_22 = 650313/*func_2004*/;
			break;
		case 112:
			uParam0->f_13 = 650301/*func_2003*/;
			break;
		case 113:
			uParam0->f_3 = 650292/*func_2002*/;
			break;
		case 114:
			uParam0->f_16 = 595599/*func_1796*/;
			break;
		case 115:
			uParam0->f_3 = 650283/*func_2001*/;
			break;
		case 116:
			*uParam0 = 650274/*func_2000*/;
			break;
		case 117:
			uParam0->f_16 = 649054/*func_1999*/;
			break;
		case 78:
			uParam0->f_59 = 648882/*func_1997*/;
			break;
		case 124:
			uParam0->f_1 = 648873/*func_1996*/;
			break;
		case 125:
			uParam0->f_19 = 648865/*func_1995*/;
			break;
	}
}

int func_2018(int iParam0, var uParam1)//Position - 0x9F1E7
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	var uVar5;
	var uVar6;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1370(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1339(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_3__::func_805(iParam0, &Var1, &Var3, &uVar5, 1);
		__LIB_3__::func_805(iParam0, &Var2, &Var4, &uVar6, 0);
		__LIB_6__::func_27(&(Global_1946250.f_3638), 5000, "TD Shot", Var1, Var3, uVar5, Var2, Var4, uVar6, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_2044(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xA0167
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	bVar0 = false;
	if (!__LIB_6__::func_79(PLAYER::PLAYER_ID(), __LIB_3__::func_810(iParam0)) && !__LIB_6__::func_79(__LIB_0__::func_797(), __LIB_3__::func_810(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_693(bVar1, 1, 1) && bVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_6__::func_79(bVar1, __LIB_3__::func_810(iParam0)) && __LIB_6__::func_295(bVar1))
				{
					Var3 = { __LIB_1__::func_696(bVar1) };
					if (__LIB_0__::func_800(Var3))
					{
						if (NETWORK::NETWORK_IS_FRIEND(&Var3))
						{
							iVar4 = joaat("AUT_SHP_FRIEND");
							if (iVar4 != *uParam4)
							{
								*uParam4 = iVar4;
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "AUT_SHP_FRIEND" /* GXT: Friend's Auto Shop */);
							}
							bVar0 = true;
						}
						else
						{
							iVar2++;
						}
						if (!bVar0 && *uParam4 == joaat("AUT_SHP_FRIEND"))
						{
							*uParam4 = joaat("AUT_SHP_EXT_T");
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "AUT_SHP_EXT_T" /* GXT: Auto Shop */);
						}
					}
Vector3 func_2045(int iParam0)//Position - 0xA0252
{
	switch (iParam0)
	{
		case 149:
			return 759.8774f, -677.6455f, 27.8356f;
			break;
		case 150:
			return -147.1386f, -1341.7018f, 28.9145f;
			break;
		case 151:
			return -171.7504f, -33.8705f, 51.256f;
			break;
		case 152:
			return 233.9541f, -1873.8497f, 25.5283f;
			break;
		case 153:
			return 489.2497f, -894.8347f, 24.7408f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_2089(int iParam0, int iParam1)//Position - 0xA3927
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_830(iParam0) };
	if (__LIB_6__::func_619(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_1561(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_614(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_986(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_986(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2092(var uParam0, var uParam1)//Position - 0xA3AE9
{
	if (__LIB_3__::func_616() == 2 || __LIB_3__::func_616() == 1)
	{
		func_2095(uParam0, uParam1);
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_6__::func_79(__LIB_2__::func_39(PLAYER::PLAYER_ID()), __LIB_3__::func_810(*uParam0)))
	{
		__LIB_6__::func_457(uParam0, uParam1);
	}
	else
	{
		__LIB_3__::func_831(uParam1);
	}
}

void func_2095(var uParam0, var uParam1)//Position - 0xA3BC8
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_15__::func_654(uParam0, uParam1);
			break;
		case 1:
			func_2108(uParam0, uParam1);
			break;
		case 2:
			__LIB_31__::func_592(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2108(var uParam0, var uParam1)//Position - 0xA47BB
{
	var uVar0;
	var uVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_1561(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
	bVar2 = (uVar0 || uVar1);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_10 = PLAYER::PLAYER_ID();
		bVar2 = false;
	}
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 0;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_5__::func_462();
		if (__LIB_7__::func_988(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			__LIB_1__::func_767("AUTOS_PROP_ET" /* GXT: AUTO SHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 0;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_7__::func_614(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

char* func_2119(int iParam0, var uParam1, var uParam2)//Position - 0xA4CA9
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (__LIB_5__::func_434())
	{
		return "SI_ENTR_BLCK24A" /* GXT: You cannot enter the Auto Shop while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = __LIB_5__::func_185(PLAYER::PLAYER_ID());
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
		{
			switch (iVar0)
			{
				case 192:
					return "AUS_P_BLCK_A" /* GXT: You can't enter the Auto Shop while resupplying another business. */;
				case 190:
					return "AUS_P_BLCK_B" /* GXT: You can't enter the Auto Shop while selling goods from another business. */;
				case 167:
					return "AUS_P_BLCK_C" /* GXT: You can't enter the Auto Shop while acquiring goods for a Warehouse. */;
				case 168:
					return "AUS_P_BLCK_D" /* GXT: You can't enter the Auto Shop while selling goods from a Warehouse. */;
				case 178:
					return "AUS_P_BLCK_E" /* GXT: You can't enter the Auto Shop while acquiring a vehicle for a Warehouse. */;
				case 188:
					return "AUS_P_BLCK_F" /* GXT: You can't enter the Auto Shop while selling vehicles from a Warehouse. */;
				case 225:
					return "AUS_P_BLCK_G" /* GXT: You can't enter the Auto Shop while acquiring goods for a Bunker. */;
				case 226:
					return "AUS_P_BLCK_H" /* GXT: You can't enter the Auto Shop while selling goods from a Bunker. */;
				case 229:
					return "AUS_P_BLCK_I" /* GXT: You can't enter the Auto Shop while acquiring goods for a Hangar. */;
				case 230:
					return "AUS_P_BLCK_J" /* GXT: You can't enter the Auto Shop while selling goods from a Hangar. */;
				case 237:
					return "AUS_P_BLCK_O" /* GXT: You can't enter the Auto Shop while taking part in Nightclub business. */;
				case 243:
					return "AUS_P_BLCK_P" /* GXT: You can't enter the Auto Shop while working for Ms. Baker. */;
				case 271:
					if (__LIB_2__::func_106(PLAYER::PLAYER_ID()))
					{
						return "";
					}
					break;
				}
			}
	}
	if (__LIB_3__::func_695())
	{
		return "AUS_P_BLCK_K" /* GXT: You can't enter the Auto Shop with a prostitute. */;
	}
	if (__LIB_2__::func_906())
	{
		return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
	}
	if (__LIB_3__::func_694(PLAYER::PLAYER_ID()))
	{
		return "AUS_P_BLCK_L" /* GXT: You can't access the Auto Shop as the Beast. */;
	}
	if (__LIB_3__::func_693() && !__LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
		{
			return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
		}
	}
	if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_812(PLAYER::PLAYER_ID()))
	{
		return "AUS_P_BLCK_M" /* GXT: You can't access the Auto Shop whilst wearing the Ballistic Equipment. */;
	}
	if ((__LIB_6__::func_82(PLAYER::PLAYER_ID()) && __LIB_1__::func_17(PLAYER::PLAYER_ID())) && __LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
			{
				return "AUS_P_BLCK_N" /* GXT: You can't enter the Auto Shop while taking part in a Business Battle. */;
			}
		}
		else
		{
			return "AUS_P_BLCK_N" /* GXT: You can't enter the Auto Shop while taking part in a Business Battle. */;
		}
	}
	if (!__LIB_5__::func_852(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar4 = __LIB_3__::func_392(iVar3, &uVar2, &uVar1);
			iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar5))
			{
				iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar5);
				if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
				{
					if (!__LIB_6__::func_279(PLAYER::PLAYER_ID()))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar3))
						{
							iVar7 = ENTITY::GET_ENTITY_ATTACHED_TO(iVar3);
							if ((__LIB_0__::func_121(iVar7) && !__LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar3))) && !__LIB_3__::func_690(iVar3))
							{
								return "PROP_BLOCK_TRAIL" /* GXT: Unable to enter garage. Please detach trailer. */;
							}
							else
							{
								return "AUS_P_BLCK_Q" /* GXT: You can't enter the Auto Shop with this vehicle. */;
							}
						}
						else if (__LIB_3__::func_690(iVar3))
						{
							return "AUS_P_BLCK_R" /* GXT: You can't enter the Auto Shop with the Mobile Operations Center. */;
						}
						else if ((((((__LIB_1__::func_589(iVar3) || __LIB_1__::func_819(ENTITY::GET_ENTITY_MODEL(iVar3))) || !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar3), 25)) || __LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar3))) || __LIB_1__::func_588(iVar3)) || __LIB_3__::func_689(iVar3)) || (__LIB_0__::func_872(iVar3, 1) && iVar4 != iVar6))
						{
							if (__LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar3)) && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar3))
							{
								return "";
							}
							else
							{
								return "AUS_P_BLCK_Q" /* GXT: You can't enter the Auto Shop with this vehicle. */;
							}
						}
						else if (__LIB_0__::func_121(iVar3) && ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rcbandito"))
						{
							return "AUS_P_BLCK_T" /* GXT: You can't enter the Auto Shop with the RC Bandito. */;
						}
					}
				}
			}
		}
	}
	if ((!__LIB_6__::func_79(PLAYER::PLAYER_ID(), __LIB_3__::func_810(iParam0)) && __LIB_7__::func_988(iParam0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar8 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar8) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar8, false))
		{
			if ((((((!__LIB_0__::func_872(iVar8, 1) || !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar8), 25)) || ENTITY::GET_ENTITY_MODEL(iVar8) == joaat("oppressor2")) || __LIB_5__::func_440(iVar8)) || __LIB_3__::func_832(ENTITY::GET_ENTITY_MODEL(iVar8))) || __LIB_3__::func_531(iVar8, 0)) || __LIB_3__::func_531(iVar8, 1))
			{
				return "AUS_P_BLCK_U" /* GXT: You can't enter the Auto Shop to modify this vehicle. */;
			}
		}
	}
	return "";
}

int func_2122(var uParam0, var uParam1, var uParam2)//Position - 0xA519E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	*uParam2 = 0;
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_588(iVar2))
			{
				__LIB_10__::func_683(uParam1);
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
			{
				__LIB_10__::func_683(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_10__::func_683(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 25))
			{
				__LIB_10__::func_683(uParam1);
				return 0;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || PED::IS_PED_INJURED(iVar3))
			{
				__LIB_10__::func_683(uParam1);
				return 0;
			}
			bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
			if ((__LIB_0__::func_872(iVar2, 1) && __LIB_3__::func_251(iVar2) != bVar4) && !Global_1852994.f_171)
			{
				__LIB_10__::func_683(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_872(iVar2, 1) && __LIB_3__::func_251(iVar2) == bVar4) && __LIB_2__::func_734()) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1)) && !__LIB_3__::func_644(PLAYER::PLAYER_ID()))
			{
				__LIB_10__::func_683(uParam1);
				return 0;
			}
			if (__LIB_3__::func_689(iVar2))
			{
				__LIB_10__::func_683(uParam1);
				return 0;
			}
			if (__LIB_0__::func_870(iVar2, 1) && __LIB_3__::func_249(iVar2, 1, 0) != bVar4)
			{
				__LIB_10__::func_683(uParam1);
				return 0;
			}
			if (__LIB_2__::func_116(iVar2, 1))
			{
				__LIB_10__::func_683(uParam1);
				return 0;
			}
			if (__LIB_0__::func_871(iVar2, 1))
			{
				__LIB_10__::func_683(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_693(bVar4, 1, 1) && __LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 25)) && (__LIB_6__::func_82(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3)) || __LIB_7__::func_988(*uParam0)))
			{
				if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_872(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_463() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if (!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
					{
						if ((__LIB_5__::func_949(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) || Global_2689235[bVar4 /*453*/].f_318.f_10 != __LIB_0__::func_162()) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1.5f)))
						{
							if (func_2129(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_627(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_864(&(uParam1->f_397)) && !__LIB_0__::func_937(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 22))
								{
									if (__LIB_6__::func_293() || (__LIB_3__::func_644(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 22))
									{
										if (((__LIB_5__::func_949(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5, 15))
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_5__::func_435(1, *uParam0);
											__LIB_7__::func_489(uParam1, 0);
											__LIB_7__::func_395(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 22)
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_7__::func_395(iVar2);
											return 1;
										}
										else if (((__LIB_3__::func_701(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5, 15))
										{
											__LIB_5__::func_435(1, *uParam0);
											__LIB_7__::func_489(uParam1, 0);
											__LIB_7__::func_395(iVar2);
											return 1;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					__LIB_30__::func_742(*uParam0);
					bVar5 = __LIB_6__::func_73(bVar4) == uParam0->f_1;
					if (bVar5)
					{
						if (!__LIB_3__::func_833(uParam0->f_1))
						{
							bVar5 = false;
						}
					}
					else if (BitTest(Global_1946250.f_4523, 30))
					{
						bVar5 = true;
					}
					if (__LIB_3__::func_643(PLAYER::PLAYER_ID()) && bVar5)
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_3__::func_642();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_3__::func_122(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_5__::func_435(0, -1);
				}
				__LIB_7__::func_489(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (!bVar0)
		{
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_5__::func_435(0, -1);
	}
	__LIB_7__::func_489(uParam1, 1);
	return 0;
}

int func_2129(var uParam0, int iParam1, bool bParam2)//Position - 0xA5AB4
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "ARC_GARAGE_T"))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1))
		{
			if (!__LIB_32__::func_599(iParam1, 127, &Var0, 0, 1, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_2141(int iParam0, var uParam1, int iParam2)//Position - 0xA64C3
{
	var uVar0;
	var uVar1;
	bool bVar2;
	__LIB_3__::func_836(iParam0, &(uParam1->f_22.f_59), &(uParam1->f_22.f_62), &(uParam1->f_22.f_65), &(uParam1->f_22.f_66), 0);
	switch (iParam0)
	{
		case 149:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_6__::func_621(iParam0))
					{
						uParam1->f_22.f_13 = { 759.2274f, -676.1144f, 28.4832f };
						uParam1->f_22.f_16 = { 1.6526f, -0.0281f, 163.8247f };
						uParam1->f_22.f_20 = { 759.1586f, -676.3341f, 28.4767f };
						uParam1->f_22.f_23 = { -1.2492f, -0.0281f, 162.718f };
						uParam1->f_22.f_28 = { 758.865f, -677.805f, 27.851f };
						uParam1->f_22.f_31 = { 0f, 0f, -169.56f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 35.9236f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 35.9236f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 762.6814f, -670.9703f, 29.2607f };
						uParam1->f_22.f_16 = { -2.2932f, 0f, 155.9849f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 761.751f, -671.6803f, 29.2137f };
						uParam1->f_22.f_23 = { -2.2932f, 0f, 142.145f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 758.817f, -675.19f, 27.859f };
						uParam1->f_22.f_31 = { 0f, 0f, 86.76f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 150:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_6__::func_621(iParam0))
					{
						uParam1->f_22.f_13 = { -148.8068f, -1342.0701f, 30.7246f };
						uParam1->f_22.f_16 = { -34.2644f, -0.0028f, -60.8442f };
						uParam1->f_22.f_20 = { -148.5539f, -1341.93f, 30.5286f };
						uParam1->f_22.f_23 = { -29.8713f, -0.0028f, -66.758f };
						uParam1->f_22.f_28 = { -147.294f, -1341.401f, 29.079f };
						uParam1->f_22.f_31 = { 0f, 0f, 90f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 32.2852f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 32.2852f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_right";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { -141.0062f, -1343.925f, 30.1565f };
						uParam1->f_22.f_16 = { -1.2453f, 0f, 70.4482f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { -141.8038f, -1342.8387f, 30.1565f };
						uParam1->f_22.f_23 = { -1.4974f, 0f, 68.1876f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { -144.657f, -1340.95f, 29.104f };
						uParam1->f_22.f_31 = { 0f, 0f, 0f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 151:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_6__::func_621(iParam0))
					{
						uParam1->f_22.f_13 = { -171.5194f, -36.1929f, 51.856f };
						uParam1->f_22.f_16 = { -3.0092f, -0.0019f, 21.9527f };
						uParam1->f_22.f_20 = { -171.757f, -35.6036f, 51.825f };
						uParam1->f_22.f_23 = { 0.3106f, -0.0019f, 21.9527f };
						uParam1->f_22.f_28 = { -172.462f, -33.763f, 51.213f };
						uParam1->f_22.f_31 = { 0f, 0f, 166.32f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 27.0608f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 27.0608f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_right";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { -168.9393f, -35.3119f, 53.2555f };
						uParam1->f_22.f_16 = { -6.5936f, 0f, 28.147f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { -169.9362f, -34.4523f, 53.1079f };
						uParam1->f_22.f_23 = { -5.7999f, 0f, 21.853f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { -171.681f, -31.278f, 51.263f };
						uParam1->f_22.f_31 = { 0f, 0f, 66.96f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 152:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_6__::func_621(iParam0))
					{
						uParam1->f_22.f_13 = { 232.6328f, -1874.2069f, 26.443f };
						uParam1->f_22.f_16 = { -21.7924f, 0.0013f, -18.5176f };
						uParam1->f_22.f_20 = { 232.7041f, -1873.9943f, 26.4045f };
						uParam1->f_22.f_23 = { -8.5978f, 0.0013f, -18.5176f };
						uParam1->f_22.f_28 = { 233.075f, -1873.188f, 25.563f };
						uParam1->f_22.f_31 = { -4.32f, 0f, 167.76f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 35.3225f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 35.3225f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 235.8221f, -1874.9221f, 26.8194f };
						uParam1->f_22.f_16 = { -3.3056f, 0f, 105.796f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 234.5172f, -1874.7244f, 26.7432f };
						uParam1->f_22.f_23 = { -3.3056f, 0f, 115.5265f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 231.176f, -1875.411f, 25.388f };
						uParam1->f_22.f_31 = { 0f, 0f, 44.28f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 153:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_6__::func_621(iParam0))
					{
						uParam1->f_22.f_13 = { 488.4486f, -893.36f, 25.3835f };
						uParam1->f_22.f_16 = { -0.6473f, 0.0003f, 172.6925f };
						uParam1->f_22.f_20 = { 488.4122f, -893.6423f, 25.3794f };
						uParam1->f_22.f_23 = { 0.1603f, 0.0201f, 172.7169f };
						uParam1->f_22.f_28 = { 488.413f, -895.15f, 24.75f };
						uParam1->f_22.f_31 = { 0f, 0f, -180f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 33.1011f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 33.1011f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 491.9715f, -894.7998f, 26.1521f };
						uParam1->f_22.f_16 = { -3.0471f, 0f, 145.4612f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 490.8015f, -895.3118f, 26.0841f };
						uParam1->f_22.f_23 = { -1.2604f, 0f, 144.274f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 488.463f, -897.537f, 24.813f };
						uParam1->f_22.f_31 = { 0f, 0f, 90f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_22.f_5) && MISC::GET_HASH_KEY(uParam1->f_22.f_5) != joaat("buzz_short"))
	{
		if (iParam2 == 0)
		{
			uParam1->f_22.f_42 = 1;
		}
		else
		{
			if (!__LIB_2__::func_159(1) || (__LIB_2__::func_50() && __LIB_6__::func_79(PLAYER::PLAYER_ID(), __LIB_3__::func_810(iParam0))))
			{
				func_1561(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
				bVar2 = (uVar0 || uVar1);
			}
			if (!bVar2 && !__LIB_7__::func_988(iParam0))
			{
				uParam1->f_22.f_42 = 1;
			}
			else
			{
				uParam1->f_22.f_42 = 0;
			}
		}
	}
	else
	{
		uParam1->f_22.f_42 = 0;
	}
}

void func_2165(var uParam0, int iParam1)//Position - 0xA7E93
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 704501/*func_2286*/;
			break;
		case 111:
			uParam0->f_35 = 704492/*func_2285*/;
			break;
		case 1:
			uParam0->f_30 = 704424/*func_2283*/;
			break;
		case 2:
			uParam0->f_31 = 703986/*func_2280*/;
			break;
		case 3:
			uParam0->f_34 = 703838/*func_2279*/;
			break;
		case 4:
			uParam0->f_12 = 703825/*func_2278*/;
			break;
		case 37:
			uParam0->f_18 = 703600/*func_2277*/;
			break;
		case 38:
			uParam0->f_9 = 703510/*func_2276*/;
			break;
		case 39:
			uParam0->f_11 = 703490/*func_2275*/;
			break;
		case 40:
			uParam0->f_6 = 703385/*func_2274*/;
			break;
		case 41:
			uParam0->f_20 = 703360/*func_2273*/;
			break;
		case 42:
			uParam0->f_10 = 703347/*func_2272*/;
			break;
		case 6:
			uParam0->f_32 = 703283/*func_2271*/;
			break;
		case 11:
			uParam0->f_11 = 703274/*func_2270*/;
			break;
		case 12:
			uParam0->f_33 = 702737/*func_2266*/;
			break;
		case 14:
			uParam0->f_11 = 702728/*func_2265*/;
			break;
		case 109:
			uParam0->f_56 = 701815/*func_2263*/;
			break;
		case 8:
			uParam0->f_37 = 701807/*func_2262*/;
			break;
		case 7:
			uParam0->f_36 = 701798/*func_2261*/;
			break;
		case 79:
			*uParam0 = 701789/*func_2260*/;
			break;
		case 13:
			uParam0->f_2 = 701727/*func_2259*/;
			break;
		case 15:
			uParam0->f_2 = 701646/*func_2258*/;
			break;
		case 16:
			uParam0->f_5 = 701319/*func_2257*/;
			break;
		case 108:
			uParam0->f_55 = 701310/*func_2256*/;
			break;
		case 17:
			uParam0->f_17 = 701300/*func_2255*/;
			break;
		case 19:
			uParam0->f_17 = 701290/*func_2254*/;
			break;
		case 18:
			uParam0->f_8 = 701248/*func_2252*/;
			break;
		case 20:
			uParam0->f_3 = 701239/*func_2251*/;
			break;
		case 21:
			uParam0->f_3 = 701191/*func_2250*/;
			break;
		case 74:
			uParam0->f_53 = 701036/*func_2248*/;
			break;
		case 75:
			uParam0->f_4 = 701027/*func_2247*/;
			break;
		case 22:
			uParam0->f_24 = 700920/*func_2246*/;
			break;
		case 23:
			uParam0->f_26 = 700912/*func_2245*/;
			break;
		case 25:
			uParam0->f_23 = 700485/*func_2242*/;
			break;
		case 27:
			uParam0->f_25 = 700477/*func_2241*/;
			break;
		case 28:
			uParam0->f_24 = 700469/*func_2240*/;
			break;
		case 30:
			uParam0->f_8 = 700434/*func_2239*/;
			break;
		case 31:
			uParam0->f_39 = 700408/*func_2238*/;
			break;
		case 33:
			uParam0->f_40 = 700241/*func_2237*/;
			break;
		case 76:
			uParam0->f_13 = 700218/*func_2236*/;
			break;
		case 34:
			uParam0->f_41 = 696604/*func_2233*/;
			break;
		case 36:
			uParam0->f_58 = 696559/*func_2232*/;
			break;
		case 35:
			uParam0->f_42 = 693365/*func_2228*/;
			break;
		case 45:
			uParam0->f_14 = 693356/*func_2227*/;
			break;
		case 46:
			uParam0->f_14 = 693347/*func_2226*/;
			break;
		case 110:
			uParam0->f_57 = 693339/*func_2225*/;
			break;
		case 77:
			uParam0->f_13 = 693328/*func_2224*/;
			break;
		case 47:
			uParam0->f_43 = 693157/*func_2223*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 691884/*func_2215*/;
			break;
		case 49:
			uParam0->f_8 = 691875/*func_2214*/;
			break;
		case 50:
			*uParam0 = 691450/*func_2207*/;
			break;
		case 51:
			*uParam0 = 691441/*func_2206*/;
			break;
		case 52:
			uParam0->f_15 = 691430/*func_2205*/;
			break;
		case 53:
			uParam0->f_13 = 691407/*func_2204*/;
			break;
		case 54:
			uParam0->f_45 = 691399/*func_2203*/;
			break;
		case 56:
			uParam0->f_46 = 691390/*func_2202*/;
			break;
		case 57:
			uParam0->f_11 = 691377/*func_2201*/;
			break;
		case 58:
			uParam0->f_13 = 691335/*func_2200*/;
			break;
		case 59:
			*uParam0 = 691326/*func_2199*/;
			break;
		case 60:
			*uParam0 = 691317/*func_2198*/;
			break;
		case 61:
			uParam0->f_15 = 691306/*func_2197*/;
			break;
		case 62:
			uParam0->f_13 = 691295/*func_2196*/;
			break;
		case 63:
			uParam0->f_11 = 691286/*func_2195*/;
			break;
		case 64:
			uParam0->f_47 = 691278/*func_2194*/;
			break;
		case 65:
			uParam0->f_21 = 691270/*func_2193*/;
			break;
		case 66:
			uParam0->f_21 = 690657/*func_2190*/;
			break;
		case 67:
			uParam0->f_21 = 690587/*func_2189*/;
			break;
		case 68:
			*uParam0 = 689898/*func_2188*/;
			break;
		case 69:
			*uParam0 = 689889/*func_2187*/;
			break;
		case 70:
			uParam0->f_48 = 689877/*func_2186*/;
			break;
		case 71:
			uParam0->f_49 = 689868/*func_2185*/;
			break;
		case 107:
			uParam0->f_50 = 689856/*func_2184*/;
			break;
		case 80:
			uParam0->f_7 = 689847/*func_2183*/;
			break;
		case 84:
			uParam0->f_1 = 689838/*func_2182*/;
			break;
		case 85:
			uParam0->f_1 = 689829/*func_2181*/;
			break;
		case 87:
			uParam0->f_1 = 689820/*func_2180*/;
			break;
		case 88:
			uParam0->f_1 = 689811/*func_2179*/;
			break;
		case 89:
			uParam0->f_54 = 689803/*func_2178*/;
			break;
		case 96:
			uParam0->f_1 = 689794/*func_2177*/;
			break;
		case 97:
			uParam0->f_1 = 689785/*func_2176*/;
			break;
		case 98:
			uParam0->f_1 = 689776/*func_2175*/;
			break;
		case 100:
			uParam0->f_22 = 689768/*func_2174*/;
			break;
		case 101:
			uParam0->f_22 = 689760/*func_2173*/;
			break;
		case 112:
			uParam0->f_13 = 689748/*func_2172*/;
			break;
		case 113:
			uParam0->f_3 = 689739/*func_2171*/;
			break;
		case 114:
			uParam0->f_16 = 595599/*func_1796*/;
			break;
		case 115:
			uParam0->f_3 = 689730/*func_2170*/;
			break;
		case 116:
			*uParam0 = 689721/*func_2169*/;
			break;
		case 117:
			uParam0->f_16 = 649054/*func_1999*/;
			break;
		case 78:
			uParam0->f_59 = 689713/*func_2168*/;
			break;
		case 124:
			uParam0->f_1 = 689704/*func_2167*/;
			break;
		case 125:
			uParam0->f_19 = 689696/*func_2166*/;
			break;
	}
}

void func_2215(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0xA8EAC
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	iVar0 = 0;
	iParam1 = (iParam1 - 1);
	iParam3->f_46 = __LIB_3__::func_854();
	MISC::SET_BIT(&(iParam3->f_2), 4);
	switch (iParam1)
	{
		case 0:
			__LIB_5__::func_189(iParam3, 0, 1);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 0);
			__LIB_5__::func_189(iParam3, 3, 1);
			__LIB_5__::func_189(iParam3, 4, 0);
			__LIB_5__::func_189(iParam3, 5, 0);
			break;
		case 1:
			__LIB_5__::func_189(iParam3, 0, 0);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 1);
			__LIB_5__::func_189(iParam3, 3, 1);
			__LIB_5__::func_189(iParam3, 4, 0);
			__LIB_5__::func_189(iParam3, 5, 0);
			break;
		case 3:
			__LIB_5__::func_189(iParam3, 0, 1);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 0);
			__LIB_5__::func_189(iParam3, 3, 0);
			__LIB_5__::func_189(iParam3, 4, 0);
			__LIB_5__::func_189(iParam3, 5, 0);
			break;
		case 2:
			__LIB_5__::func_189(iParam3, 0, 1);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 0);
			__LIB_5__::func_189(iParam3, 3, 0);
			break;
	}
	if (iParam1 == 2)
	{
		MISC::SET_BIT(&uVar3, PLAYER::PLAYER_ID());
		if (__LIB_7__::func_226(PLAYER::PLAYER_ID(), 148, uVar3, 1))
		{
			bVar1 = false;
			bVar2 = false;
		}
		else
		{
			func_1561(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar1, &bVar2, 1, 1);
		}
		__LIB_5__::func_189(iParam3, 4, bVar1);
		__LIB_5__::func_189(iParam3, 5, bVar2);
	}
	if (iParam3->f_3 != 0 && (iParam3->f_5 < iVar0 || iParam3->f_1 != 1))
	{
		return;
	}
	if (iParam3->f_3 == 0)
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	bVar4 = false;
	if (__LIB_3__::func_661(0, iParam3) || __LIB_3__::func_661(1, iParam3))
	{
		if (iParam1 == 2 || iParam1 == 3)
		{
			bVar4 = true;
			MISC::CLEAR_BIT(&(iParam3->f_2), 1);
		}
		else
		{
			return;
		}
	}
	else if (__LIB_3__::func_661(3, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 26);
		iParam3->f_5 = 0;
	}
	else if (__LIB_3__::func_661(2, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 27);
		iParam3->f_5 = 0;
	}
	else if (__LIB_3__::func_661(4, iParam3) || __LIB_3__::func_661(5, iParam3))
	{
		iVar5 = __LIB_7__::func_404(__LIB_3__::func_661(4, iParam3));
		__LIB_3__::func_852(iVar5);
		bVar4 = true;
	}
	if (bVar4)
	{
		if (__LIB_3__::func_845())
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 1);
		}
		else
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 0);
		}
		if (__LIB_5__::func_223())
		{
			MISC::SET_BIT(&(Global_1946250.f_6), 19);
		}
		else
		{
			__LIB_3__::func_768(iParam0, -1);
		}
	}
}

void func_2242(int iParam0, int iParam1)//Position - 0xAB045
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	int iVar3;
	if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar3 = __LIB_3__::func_616();
		Var2 = { __LIB_3__::func_859(iParam0, iVar3) };
		func_1561(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && Global_1946250.f_3606 != 148)
		{
			__LIB_7__::func_298(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_298(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_615();
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_615();
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2287(var uParam0, int iParam1)//Position - 0xABFFE
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 980553/*func_2708*/;
			break;
		case 1:
			uParam0->f_30 = 980497/*func_2707*/;
			break;
		case 2:
			uParam0->f_31 = 979835/*func_2705*/;
			break;
		case 3:
			uParam0->f_34 = 979708/*func_2704*/;
			break;
		case 4:
			uParam0->f_12 = 979674/*func_2703*/;
			break;
		case 5:
			uParam0->f_11 = 979663/*func_2702*/;
			break;
		case 6:
			uParam0->f_32 = 979599/*func_2701*/;
			break;
		case 111:
			uParam0->f_35 = 979576/*func_2700*/;
			break;
		case 79:
			*uParam0 = 979567/*func_2699*/;
			break;
		case 37:
			uParam0->f_18 = 979451/*func_2698*/;
			break;
		case 38:
			uParam0->f_9 = 979354/*func_2696*/;
			break;
		case 11:
			uParam0->f_11 = 979345/*func_2695*/;
			break;
		case 12:
			uParam0->f_33 = 978955/*func_2693*/;
			break;
		case 109:
			uParam0->f_56 = 978645/*func_2692*/;
			break;
		case 15:
			uParam0->f_2 = 976751/*func_2681*/;
			break;
		case 13:
			uParam0->f_2 = 976742/*func_2680*/;
			break;
		case 75:
			uParam0->f_4 = 976733/*func_2679*/;
			break;
		case 16:
			uParam0->f_5 = 976350/*func_2676*/;
			break;
		case 108:
			uParam0->f_55 = 972432/*func_2658*/;
			break;
		case 17:
			uParam0->f_17 = 971693/*func_2655*/;
			break;
		case 19:
			uParam0->f_17 = 971668/*func_2654*/;
			break;
		case 20:
			uParam0->f_3 = 971499/*func_2653*/;
			break;
		case 21:
			uParam0->f_3 = 971436/*func_2652*/;
			break;
		case 74:
			uParam0->f_53 = 971284/*func_2651*/;
			break;
		case 22:
			uParam0->f_24 = 971199/*func_2650*/;
			break;
		case 25:
			uParam0->f_23 = 970328/*func_2647*/;
			break;
		case 30:
			uParam0->f_8 = 969000/*func_2641*/;
			break;
		case 31:
			uParam0->f_39 = 968418/*func_2638*/;
			break;
		case 33:
			uParam0->f_40 = 967221/*func_2634*/;
			break;
		case 14:
			uParam0->f_11 = 967212/*func_2633*/;
			break;
		case 34:
			uParam0->f_41 = 964441/*func_2630*/;
			break;
		case 36:
			uParam0->f_58 = 964388/*func_2629*/;
			break;
		case 35:
			uParam0->f_42 = 958936/*func_2625*/;
			break;
		case 45:
			uParam0->f_14 = 958927/*func_2624*/;
			break;
		case 46:
			uParam0->f_14 = 958918/*func_2623*/;
			break;
		case 110:
			uParam0->f_57 = 958910/*func_2622*/;
			break;
		case 77:
			uParam0->f_13 = 958887/*func_2621*/;
			break;
		case 47:
			uParam0->f_43 = 958835/*func_2620*/;
			break;
		case 49:
			uParam0->f_8 = 958810/*func_2619*/;
			break;
		case 50:
			*uParam0 = 958772/*func_2618*/;
			break;
		case 51:
			*uParam0 = 958730/*func_2616*/;
			break;
		case 52:
			uParam0->f_15 = 958719/*func_2615*/;
			break;
		case 53:
			uParam0->f_13 = 958640/*func_2614*/;
			break;
		case 54:
			uParam0->f_45 = 958632/*func_2613*/;
			break;
		case 56:
			uParam0->f_46 = 958623/*func_2612*/;
			break;
		case 57:
			uParam0->f_11 = 958613/*func_2611*/;
			break;
		case 58:
			uParam0->f_13 = 958366/*func_2610*/;
			break;
		case 64:
			uParam0->f_47 = 957220/*func_2605*/;
			break;
		case 65:
			uParam0->f_21 = 956027/*func_2600*/;
			break;
		case 66:
			uParam0->f_21 = 954931/*func_2590*/;
			break;
		case 67:
			uParam0->f_21 = 954755/*func_2588*/;
			break;
		case 68:
			*uParam0 = 953428/*func_2582*/;
			break;
		case 69:
			*uParam0 = 953419/*func_2581*/;
			break;
		case 70:
			uParam0->f_48 = 953407/*func_2580*/;
			break;
		case 71:
			uParam0->f_49 = 953398/*func_2579*/;
			break;
		case 107:
			uParam0->f_50 = 953386/*func_2578*/;
			break;
		case 80:
			uParam0->f_7 = 952553/*func_2572*/;
			break;
		case 73:
			uParam0->f_51 = 952544/*func_2571*/;
			break;
		case 84:
			uParam0->f_1 = 951872/*func_2569*/;
			break;
		case 85:
			uParam0->f_1 = 950999/*func_2561*/;
			break;
		case 87:
			uParam0->f_1 = 949779/*func_2552*/;
			break;
		case 88:
			uParam0->f_1 = 949759/*func_2551*/;
			break;
		case 89:
			uParam0->f_54 = 949665/*func_2550*/;
			break;
		case 90:
			uParam0->f_1 = 949534/*func_2547*/;
			break;
		case 91:
			uParam0->f_1 = 948888/*func_2546*/;
			break;
		case 92:
			uParam0->f_1 = 948120/*func_2543*/;
			break;
		case 94:
			uParam0->f_1 = 947567/*func_2542*/;
			break;
		case 95:
			uParam0->f_22 = 946975/*func_2537*/;
			break;
		case 18:
			uParam0->f_8 = 946617/*func_2533*/;
			break;
		case 96:
			uParam0->f_1 = 946524/*func_2532*/;
			break;
		case 97:
			uParam0->f_1 = 945656/*func_2527*/;
			break;
		case 98:
			uParam0->f_1 = 711115/*func_2341*/;
			break;
		case 100:
			uParam0->f_22 = 707830/*func_2319*/;
			break;
		case 101:
			uParam0->f_22 = 706675/*func_2306*/;
			break;
		case 78:
			uParam0->f_59 = 706467/*func_2303*/;
			break;
		case 104:
			uParam0->f_1 = 706027/*func_2295*/;
			break;
		case 102:
			uParam0->f_1 = 706018/*func_2294*/;
			break;
		case 103:
			uParam0->f_22 = 705906/*func_2289*/;
			break;
		case 81:
			*uParam0 = 705863/*func_2288*/;
			break;
	}
}

int func_2341(var uParam0, var uParam1)//Position - 0xAD9CB
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (__LIB_3__::func_894())
	{
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		MISC::SET_BIT(&(Global_1946250.f_7), 24);
		if (uParam1->f_218 != -1)
		{
			uParam1->f_218 = -1;
		}
		return 1;
	}
	else if (__LIB_5__::func_232())
	{
		func_2358(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 1);
		if (__LIB_0__::func_121(uParam1->f_140[0]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[0]))
			{
				return 0;
			}
			bVar0 = (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_1__::func_365(PLAYER::PLAYER_PED_ID()));
			Var1 = { __LIB_3__::func_903(Global_1946250.f_3377) };
			Var2 = { __LIB_3__::func_902(Global_1946250.f_3377) };
			sVar3 = __LIB_3__::func_888(0, 1);
			sVar4 = __LIB_3__::func_901(0, 1);
			__LIB_3__::func_900(&(Global_1946250.f_4073), 2600, "sub_exit", Var1, Var2, sVar3, sVar4, 0, 0, 500, 0, 2);
			sVar3 = __LIB_3__::func_888(bVar0, 0);
			sVar4 = __LIB_3__::func_901(bVar0, 0);
			Global_1946250.f_4073.f_394 = PED::CREATE_SYNCHRONIZED_SCENE(Var1, Var2, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], Global_1946250.f_4073.f_394, sVar3, sVar4, 1000f, -1000f, 0, 0, 1000f, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_140[0], false, false);
			MISC::SET_BIT(&(Global_1946250.f_2), 20);
			MISC::SET_BIT(&(Global_1946250.f_5), 27);
			NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			return 1;
		}
	}
	else
	{
		Var6 = { uParam1->f_28 };
		Var7 = { uParam1->f_31 };
		iVar8 = -1;
		if (__LIB_3__::func_887(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("seasparrow3");
			iVar8 = 0;
			if (PLAYER::PLAYER_ID() == Global_1853194)
			{
				STREAMING::REQUEST_MODEL(joaat("seasparrow2"));
			}
			if (!__LIB_5__::func_863(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_3__::func_886(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("avisa");
			iVar8 = 1;
			if (!__LIB_5__::func_863(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_3__::func_879(PLAYER::PLAYER_ID()))
		{
			iVar5 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
			iVar8 = 2;
			if (!__LIB_5__::func_863(uParam1, iVar8))
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			iVar9 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			Var6 = { ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true) };
			Var7 = { ENTITY::GET_ENTITY_ROTATION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2) };
			func_1370(&iVar9, &(uParam1->f_109), 4);
			__LIB_3__::func_633(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var6, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam1->f_109, Var7, 2, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			if (__LIB_3__::func_879(PLAYER::PLAYER_ID()))
			{
				VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam1->f_109, false);
				VEHICLE::TRANSFORM_TO_SUBMARINE(uParam1->f_109, true);
			}
			__LIB_5__::func_489(uParam1->f_109);
			return 0;
		}
		__LIB_3__::func_882(1);
		if (__LIB_6__::func_625())
		{
			__LIB_5__::func_862(iVar8);
			__LIB_3__::func_900(&(Global_1946250.f_4073), 6000, "Submarine INT exit", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
			Global_1946250.f_4073.f_394 = PED::CREATE_SYNCHRONIZED_SCENE(uParam1->f_28, uParam1->f_31, 2);
			iVar10 = 0;
			while (iVar10 < uParam1->f_219)
			{
				if (iVar10 < 3)
				{
					if (__LIB_0__::func_121(uParam1->f_176[iVar10]))
					{
						if (iVar10 == 0)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_228))
							{
								uParam1->f_218 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FROM_ENTITY(uParam1->f_218, uParam1->f_230, uParam1->f_176[iVar10], uParam1->f_228, false, 0);
							}
							__LIB_3__::func_896(uParam1, uParam1->f_176[iVar10]);
						}
						__LIB_3__::func_895(&Var6, &Var7, uParam1, iVar10);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_176[iVar10], Var6, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(uParam1->f_176[iVar10], Var7, 2, true);
						if (!ENTITY::IS_ENTITY_VISIBLE(uParam1->f_176[iVar10]))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[iVar10], true, false);
						}
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam1->f_176[iVar10], Global_1946250.f_4073.f_394, uParam1->f_221[iVar10], uParam1->f_3, 1000f, -1000f, 0, 1000f);
					}
				}
				iVar10++;
			}
			if (__LIB_0__::func_121(uParam1->f_109))
			{
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam1->f_109, Global_1946250.f_4073.f_394, uParam1->f_7, uParam1->f_3, 1000f, -1000f, 0, 1000f);
			}
			MISC::SET_BIT(&(Global_1946250.f_7), 29);
			MISC::SET_BIT(&(Global_1946250.f_2), 20);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar5);
			return 1;
		}
	}
	return 0;
}

int func_2358(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xAE5FB
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_1340(uParam0, iVar0, bParam2, bParam3))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (!func_2359(uParam0, bParam1))
		{
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
	}
	return 1;
}

int func_2359(var uParam0, bool bParam1)//Position - 0xAE659
{
	int iVar0;
	struct<10> Var1;
	if (__LIB_5__::func_799(bParam1))
	{
		iVar0 = __LIB_7__::func_661(bParam1);
		Var1.f_1 = -1;
		Var1.f_2 = -1;
		Var1.f_3 = -1;
		Var1.f_4 = -1;
		Var1.f_8 = -1;
		Var1.f_9 = 50;
		Var1.f_0 = *uParam0;
		Var1.f_6 = 1;
		func_2363(&Var1, __LIB_3__::func_353(iVar0), 0, 1, 1, !__LIB_5__::func_723(), 0, __LIB_7__::func_475(), __LIB_3__::func_904(__LIB_6__::func_299(bParam1), 0), __LIB_3__::func_352(iVar0));
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(bParam1, 0), false);
		if (GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(bParam1, 0), __LIB_6__::func_626(bParam1, 2)))
		{
		}
		return 1;
	}
	return 0;
}

int func_2363(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0xAE776
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	struct<14> Var12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<4> Var17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	bool bVar24;
	int iVar25;
	var uVar26;
	var uVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	struct<7> Var35;
	struct<9> Var36;
	int iVar37;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Global_78200[iVar0] = -1;
		Global_78200.f_13[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_78200.f_26)
	{
		Global_78200.f_26[iVar0] = -1;
		Global_78200.f_36[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_78200.f_46)
	{
		Global_78200.f_46[iVar0] = -1;
		iVar0++;
	}
	if (!PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam0);
		if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
		{
			bVar2 = false;
			if (uParam0->f_1 != -1 && uParam0->f_1 != 1711)
			{
				bVar2 = true;
			}
			if (uParam0->f_2 != -1 && uParam0->f_2 != 334)
			{
				bVar2 = true;
			}
			else if ((uParam0->f_2 == -1 && bParam1) && bParam2)
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				bVar3 = false;
				if (!bParam2)
				{
					if (__LIB_6__::func_447(&Global_78200, *uParam0, bParam1))
					{
						bVar3 = true;
					}
				}
				if ((bParam1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
				{
					if (__LIB_3__::func_344(&Global_78200, *uParam0, bParam2, bParam4))
					{
						bVar3 = true;
					}
				}
				iVar4 = -1;
				if (uParam0->f_3 != -1)
				{
					if (__LIB_3__::func_376(*uParam0, &Global_78200, uParam0->f_3, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (uParam0->f_4 != -1)
				{
					if (__LIB_3__::func_376(*uParam0, &Global_78200, uParam0->f_4, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (bVar3)
				{
					switch (uParam0->f_6)
					{
						case 0:
							bVar5 = true;
							if (!__LIB_3__::func_337(uParam0, &Global_78200))
							{
								bVar5 = false;
							}
							if (bVar5)
							{
								uParam0->f_6 = 1;
							}
							break;
						case 1:
							if (!bParam6)
							{
								PED::CLEAR_ALL_PED_PROPS(*uParam0);
								PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
								PED::REMOVE_PED_HELMET(*uParam0, true);
								if (bParam3)
								{
									PED::CLEAR_PED_WETNESS(*uParam0);
									PED::CLEAR_PED_BLOOD_DAMAGE(*uParam0);
								}
								iVar6 = 0;
								iVar7 = PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 5);
								iVar8 = -1;
								iVar7 = iVar7;
								iVar8 = iVar8;
								if (__LIB_1__::func_608(*uParam0))
								{
									iVar6 = 1;
								}
								if (iVar6 && bParam5)
								{
									Global_78200[5] = 0;
									if (Global_78200.f_13[5] == -1)
									{
										Global_78200.f_13[5] = 0;
									}
								}
								if (bParam1)
								{
									if (((uParam0->f_2 != -1 && uParam0->f_2 != -2) && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										if (__LIB_3__::func_336(uParam0->f_2) == 22)
										{
											Global_78200.f_26[2] = -1;
										}
										else if ((((__LIB_3__::func_336(uParam0->f_2) == 8 || __LIB_3__::func_336(uParam0->f_2) == 50) || __LIB_3__::func_336(uParam0->f_2) == 47) || uParam0->f_2 == 286) || uParam0->f_2 == 287)
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
										}
										else
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
											Global_78200.f_26[0] = -1;
											if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
											{
												PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
											}
										}
										if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
										{
											if (__LIB_3__::func_343(iVar1, 7, __LIB_0__::func_206(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
											{
												Global_78200[7] = 0;
												Global_78200.f_13[7] = 0;
											}
										}
									}
									else if (uParam0->f_2 == -2)
									{
										iVar9 = FILES::GET_HASH_NAME_FOR_COMPONENT(*uParam0, 1, Global_78200[1], Global_78200.f_13[1]);
										if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("FORCE_PROP"), 0) && PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1) == Global_78200[1])
										{
										}
										else
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
											Global_78200.f_26[0] = -1;
											if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
											{
												if (__LIB_3__::func_343(iVar1, 7, __LIB_0__::func_206(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
												{
													Global_78200[7] = 0;
													Global_78200.f_13[7] = 0;
												}
											}
											if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
											{
												PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
											}
										}
									}
									else if (uParam0->f_2 == -1 && bParam2)
									{
										Global_78200.f_26[1] = -1;
										Global_78200.f_26[2] = -1;
										Global_78200.f_26[0] = -1;
										if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
										{
											PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
										}
									}
								}
								__LIB_4__::func_984(*uParam0, &Global_78200, uParam0->f_8);
								if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 != -1 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && PLAYER::PLAYER_ID() != -1)
								{
									if (BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12179, 4))
									{
										if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 7 || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 2)
										{
											PED::SET_PED_HEAD_OVERLAY(*uParam0, 4, 0, 0f);
										}
									}
								}
								GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, "", "");
								bVar11 = false;
								iVar0 = 0;
								while (iVar0 < 12)
								{
									if (Global_78200[iVar0] != -1)
									{
										if (iVar0 == 10 && iParam7 != -1)
										{
											iVar10 = __LIB_0__::func_206(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
											if (__LIB_3__::func_342(iVar1, 10, iVar10, -1))
											{
												if (iParam7 == 0)
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
												else if (iParam7 == 1)
												{
													if (*uParam0 == PLAYER::PLAYER_PED_ID() && !__LIB_1__::func_526())
													{
														PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
													}
													else
													{
														PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
														PED::SET_PED_ENABLE_CREW_EMBLEM(*uParam0, true);
													}
												}
												else if (iParam7 == 2)
												{
													GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), false);
													GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_6__::func_626(PLAYER::PLAYER_ID(), 2));
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
												}
												else
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
											}
											else
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
											}
										}
										else
										{
											if (iVar0 == 1)
											{
											}
											else if (iVar0 == 2)
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, Global_78200[1], Global_78200.f_13[1], 0);
												bVar11 = true;
											}
											else if (Global_78200[iVar0] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(*uParam0, iVar0) || Global_78200.f_13[iVar0] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(*uParam0, iVar0, Global_78200[iVar0]))
											{
											}
											else
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
											}
											if (iVar0 == 10)
											{
												iVar10 = __LIB_0__::func_206(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
												if (__LIB_3__::func_342(iVar1, 10, iVar10, -1))
												{
													PED::SET_PED_ENABLE_CREW_EMBLEM(*uParam0, true);
												}
											}
										}
									}
									iVar0++;
								}
								if (!bVar11 && Global_78200[1] != -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, Global_78200[1], Global_78200.f_13[1], 0);
								}
								iVar0 = 0;
								while (iVar0 < Global_78200.f_26)
								{
									if (Global_78200.f_26[iVar0] != -1 && Global_78200.f_26[iVar0] != 255)
									{
										__LIB_0__::func_454(*uParam0, iVar0, Global_78200.f_26[iVar0], Global_78200.f_36[iVar0]);
									}
									iVar0++;
								}
								if (*uParam0 == PLAYER::PLAYER_PED_ID())
								{
									if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(*uParam0, 8, joaat("SCUBA_GEAR")))
									{
										if (iVar1 == joaat("MP_M_Freemode_01"))
										{
											PLAYER::SET_PLAYER_PREVIOUS_VARIATION_DATA(PLAYER::PLAYER_ID(), 8, 15, 0, 0, 0);
										}
										else if (iVar1 == joaat("MP_F_Freemode_01"))
										{
											PLAYER::SET_PLAYER_PREVIOUS_VARIATION_DATA(PLAYER::PLAYER_ID(), 8, 3, 0, 0, 0);
										}
									}
								}
								if ((iVar6 && !bParam5) && *uParam0 == PLAYER::PLAYER_PED_ID())
								{
									__LIB_6__::func_724(PLAYER::PLAYER_ID(), -1, -1);
								}
								if (!func_1350(*uParam0))
								{
									if (uParam0->f_2 >= 52 && uParam0->f_2 <= 59)
									{
										PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Global_78200.f_26[0], true);
										PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Global_78200.f_36[0]);
										__LIB_3__::func_335(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 1);
									}
									else
									{
										Var12 = { __LIB_3__::func_310(iVar1, 14, __LIB_1__::func_360(589, -1, 0), -1) };
										if (Var12.f_3 != -1 && Var12.f_4 != -1)
										{
											if (__LIB_0__::func_348(iVar1, 14, __LIB_1__::func_360(589, -1, 0), -1))
											{
												PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Var12.f_3, true);
												PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Var12.f_4);
												__LIB_3__::func_335(*uParam0, Var12.f_3, Var12.f_4, 1);
											}
										}
										PED::SET_PED_CONFIG_FLAG(*uParam0, 34, false);
										PED::SET_PED_CONFIG_FLAG(*uParam0, 36, false);
									}
								}
								else if (Global_78200.f_26[0] != -1 && Global_78200.f_26[0] != 255)
								{
									__LIB_3__::func_335(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 0);
								}
								if (!__LIB_0__::func_157(0))
								{
									if (uParam0->f_3 != -1)
									{
										func_2483(*uParam0, uParam0->f_3, uParam0->f_8);
									}
									if ((uParam0->f_4 != -1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										func_2483(*uParam0, uParam0->f_4, uParam0->f_8);
									}
									if ((*uParam0 == PLAYER::PLAYER_PED_ID() && uParam0->f_1 != 0) && uParam0->f_1 != -1)
									{
										__LIB_1__::func_354(2065, 1, -1, 1, 0);
									}
									if ((((((((((((((((__LIB_1__::func_102(*uParam0, 7) && uParam0->f_1 != 1147) && uParam0->f_1 != 1148) && uParam0->f_1 != 1149) && uParam0->f_1 != 1150) && uParam0->f_1 != 1155) && uParam0->f_1 != 1156) && uParam0->f_1 != 1157) && uParam0->f_1 != 1158) && uParam0->f_1 != 1265) && uParam0->f_1 != 1266) && uParam0->f_1 != 1267) && uParam0->f_1 != 1268) && uParam0->f_1 != 1261) && uParam0->f_1 != 1262) && uParam0->f_1 != 1263) && uParam0->f_1 != 1264)
									{
										if (!bParam1 || uParam0->f_2 == -1)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
											PED::CLEAR_PED_PROP(*uParam0, 0);
										}
									}
									else if (__LIB_3__::func_334(*uParam0))
									{
										iVar13 = __LIB_3__::func_333(*uParam0, 1);
										iVar14 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar13, iVar14, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									else if (!__LIB_3__::func_334(*uParam0) && __LIB_3__::func_332(*uParam0))
									{
										iVar15 = __LIB_3__::func_333(*uParam0, 0);
										iVar16 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar15, iVar16, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									if (!bParam9)
									{
										func_2473(*uParam0);
									}
									if (uParam0->f_3 != 4 && uParam0->f_1 == 0)
									{
										if (iVar1 == joaat("MP_M_Freemode_01"))
										{
											FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_HAIR_0_0"), &Var17);
										}
										else if (iVar1 == joaat("MP_F_Freemode_01"))
										{
											FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_HAIR_0_0"), &Var17);
										}
										if (Global_78200[2] == Var17.f_3)
										{
											Global_78200[2] = -1;
										}
									}
									if (__LIB_3__::func_331(uParam0->f_1))
									{
										if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_20 == 0)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 0, 0, 0);
											__LIB_0__::func_454(*uParam0, 0, -1, 0);
											__LIB_0__::func_454(*uParam0, 1, -1, 0);
											__LIB_0__::func_454(*uParam0, 2, -1, 0);
											func_2404(*uParam0, 14, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
											PED::SET_PED_CONFIG_FLAG(*uParam0, 380, true);
										}
									}
									if (Global_78200[2] == -1)
									{
										if ((uParam0->f_8 != -1 && PLAYER::INT_TO_PLAYERINDEX(uParam0->f_8) != PLAYER::PLAYER_ID()) && !*uParam0 == PLAYER::PLAYER_PED_ID())
										{
											iVar18 = Global_2689235[uParam0->f_8 /*453*/].f_249;
											iVar19 = Global_2689235[uParam0->f_8 /*453*/].f_250;
											iVar20 = 1;
											func_2404(*uParam0, 2, Global_2689235[uParam0->f_8 /*453*/].f_248, 0, -1, 0, 0, iVar20, iVar18, iVar19, uParam0->f_8, 1, 0, 0);
										}
										else
										{
											iVar18 = __LIB_1__::func_360(2153, -1, 0);
											iVar19 = __LIB_1__::func_360(2160, -1, 0);
											if (__LIB_1__::func_342(161, -1))
											{
												iVar21 = __LIB_1__::func_360(2053, -1, 0);
												if (iVar21 != -99)
												{
													iVar22 = -99;
													if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_M_Freemode_01"))
													{
														iVar22 = __LIB_0__::func_463(iVar21);
													}
													else if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
													{
														iVar22 = __LIB_0__::func_462(iVar21);
													}
													if (iVar22 != -99 && iVar21 != iVar22)
													{
														iVar21 = iVar22;
													}
												}
												if (MISC::IS_PC_VERSION())
												{
													if (iVar1 == joaat("MP_M_Freemode_01"))
													{
														iVar21 = __LIB_0__::func_463(iVar21);
													}
													else if (iVar1 == joaat("MP_F_Freemode_01"))
													{
														iVar21 = __LIB_0__::func_462(iVar21);
														if (iVar21 == __LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4) || iVar21 == __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4)))
														{
															iVar21 = __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4));
														}
														else if (iVar21 == __LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4) || iVar21 == __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4)))
														{
															iVar21 = __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4));
														}
													}
												}
												func_2404(*uParam0, 2, iVar21, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
											else
											{
												iVar23 = __LIB_1__::func_360(753, -1, 0);
												func_2404(*uParam0, 2, iVar23, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
										}
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 1), 0);
									}
								}
							}
							if (!__LIB_0__::func_157(0))
							{
								iVar25 = -1;
								if (uParam0->f_1 == 0)
								{
									bVar24 = false;
								}
								else
								{
									bVar24 = true;
									if (uParam0->f_1 == 1642)
									{
										iVar25 = Global_78200.f_46[0];
									}
								}
								if (uParam0->f_8 != -1)
								{
									func_2399(*uParam0, &(Global_1886249[uParam0->f_8 /*51*/]), bVar24, iVar25);
								}
								else
								{
									func_2373(*uParam0, bVar24, 0, iVar25);
								}
								if (iParam8 != -1)
								{
									iVar28 = FILES::GET_HASH_NAME_FOR_COMPONENT(*uParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 11), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 11));
									if (__LIB_3__::func_330(iVar28, iParam8, &uVar26, &uVar27))
									{
										Global_78200.f_46[0] = uVar27;
									}
								}
								iVar29 = 0;
								while (iVar29 < Global_78200.f_46)
								{
									if (Global_78200.f_46[iVar29] != -1)
									{
										bVar30 = true;
									}
									iVar29++;
								}
								if (bVar30)
								{
									iVar37 = __LIB_0__::func_276(*uParam0);
									iVar33 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar37);
									iVar31 = 0;
									while (iVar31 < 127)
									{
										if (__LIB_0__::func_445(&Var36, iVar31, iVar37, *uParam0, -1))
										{
											iVar29 = 0;
											while (iVar29 < Global_78200.f_46)
											{
												if (Global_78200.f_46[iVar29] == Var36.f_5 && Global_78200.f_46[iVar29] != -1)
												{
													bVar34 = false;
													if (Var36.f_8 == joaat("crewLogo"))
													{
														if (iParam7 == 0)
														{
															bVar34 = true;
														}
														else if (iParam7 == 1)
														{
														}
														else if (iParam7 == 2)
														{
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_6__::func_626(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var36.f_4, Var36.f_5);
														__LIB_0__::func_260(*uParam0, Var36.f_4, Var36.f_5);
													}
												}
												iVar29++;
											}
										}
										iVar31++;
									}
									iVar32 = 0;
									while (iVar32 < iVar33)
									{
										if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar37, iVar32, &Var35))
										{
											iVar29 = 0;
											while (iVar29 < Global_78200.f_46)
											{
												if (Global_78200.f_46[iVar29] == Var35.f_3 && Global_78200.f_46[iVar29] != -1)
												{
													bVar34 = false;
													if (Var35.f_6 == joaat("crewLogo"))
													{
														if (iParam7 == 0)
														{
															bVar34 = true;
														}
														else if (iParam7 == 1)
														{
														}
														else if (iParam7 == 2)
														{
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_6__::func_626(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var35.f_2, Var35.f_3);
														__LIB_0__::func_260(*uParam0, Var35.f_2, Var35.f_3);
													}
												}
												iVar29++;
											}
										}
										iVar32++;
									}
								}
							}
							PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*uParam0, false, 0);
							__LIB_3__::func_329(*uParam0);
							uParam0->f_6 = 2;
							break;
						case 2:
							if (!__LIB_0__::func_157(0))
							{
								if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0) || !PED::HAS_PED_HEAD_BLEND_FINISHED(*uParam0))
								{
									return 0;
								}
								else
								{
									PED::FINALIZE_HEAD_BLEND(*uParam0);
									__LIB_3__::func_329(*uParam0);
									uParam0->f_7 = 1;
									uParam0->f_6 = 0;
									uParam0->f_5 = 0;
									return 1;
								}
							}
							else
							{
								__LIB_3__::func_329(*uParam0);
								uParam0->f_7 = 1;
								uParam0->f_6 = 0;
								uParam0->f_5 = 0;
								return 1;
							}
							break;
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
		else
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

void func_2373(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xB482B
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
		bVar3 = func_2397(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_2390(iParam0, iParam3);
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
			if (__LIB_2__::func_761(iVar6, iVar0))
			{
				if (__LIB_0__::func_445(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_2__::func_998(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_2__::func_761(123, iVar0))
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
					if (__LIB_2__::func_761(iVar10, iVar0))
					{
						if (__LIB_2__::func_998(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_3__::func_228(Var9.f_2, Var9.f_3, iVar10))
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

int func_2390(int iParam0, int iParam1)//Position - 0xBED41
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
			iVar2 = __LIB_1__::func_360(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_1352(iParam0, 11, -1);
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
			iVar2 = __LIB_1__::func_360(1759, -1, 0);
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
				iVar5 = func_1352(iParam0, 11, -1);
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

int func_2397(int iParam0, bool bParam1)//Position - 0xBF14F
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
							iVar2 = __LIB_2__::func_999(joaat("MP_M_Freemode_01"), 11, func_1352(iParam0, 11, -1), 0);
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
						if (__LIB_2__::func_761(13, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(14, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(15, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(16, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(71, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(72, -1))
						{
						}
						else if (__LIB_6__::func_371(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_1352(iParam0, 11, -1);
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
						iVar5 = func_1352(iParam0, 8, -1);
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
							iVar7 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_1352(iParam0, 11, -1), 0);
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
						iVar8 = func_1352(iParam0, 11, -1);
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
							iVar10 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_1352(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_1352(iParam0, 11, -1), 0);
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
						iVar12 = func_1352(iParam0, 8, -1);
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

void func_2399(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0xC01AE
{
	struct<9> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<8> Var8;
	int iVar9;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar1 = __LIB_0__::func_276(iParam0);
		bVar2 = func_2397(iParam0, 0);
		bVar3 = __LIB_1__::func_37(iParam0);
		bVar4 = func_2390(iParam0, iParam3);
		if (bParam2)
		{
			bVar3 = true;
		}
		iVar5 = 0;
		while (iVar5 < 127)
		{
			if (BitTest((*uParam1)[(iVar5 / 32)], (iVar5 % 32)))
			{
				if (__LIB_0__::func_445(&Var0, iVar5, iVar1, iParam0, -1))
				{
					if (__LIB_2__::func_998(iParam0, &Var0, iVar5, Var0.f_4, Var0.f_8, bVar2, bVar3, bParam2, bVar4))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var0.f_4, Var0.f_5);
					}
				}
			}
			iVar5++;
		}
		if (BitTest((*uParam1)[(123 / 32)], (123 % 32)))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar7 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar1);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar1, iVar6, &Var8))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var8.f_0))
				{
					iVar9 = (129 + iVar6);
					if ((iVar9 / 32) >= *uParam1)
					{
					}
					else if (BitTest((*uParam1)[(iVar9 / 32)], (iVar9 % 32)))
					{
						if (__LIB_2__::func_998(iParam0, &(Var8.f_7), iVar9, Var8.f_2, Var8.f_6, bVar2, bVar3, bParam2, bVar4))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var8.f_2, Var8.f_3);
							__LIB_0__::func_260(iParam0, Var8.f_2, Var8.f_3);
						}
					}
				}
			}
			iVar6++;
		}
	}
}

int func_2404(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0xC1209
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
		Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
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
			func_2468(iVar5, iParam1, iParam2, 1);
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
					Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 10, 0, -1) };
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
						func_2468(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_2468(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_2404(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_2468(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iVar0, func_1352(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_2404(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_2__::func_979();
			if (iVar17 != -1)
			{
				__LIB_2__::func_978(iVar17, 0, iParam10);
			}
			func_2462(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_0__::func_466(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_2468(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_5__::func_129(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_2404(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_2468(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_2404(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_2473(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_2404(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_2404(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_2459(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_5__::func_129(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_2404(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_3__::func_408(iParam0, iParam2);
							iVar31 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_2404(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_2404(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar32, -1) };
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
								func_2404(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_3__::func_408(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
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
								func_2404(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_2404(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_2404(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_3__::func_303(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_2462(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_2459(iVar5, func_1352(iParam0, 8, -1), iParam2, func_1352(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_1__::func_360(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_1__::func_360(2160, iParam10, 0);
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
				func_2445(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_2459(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_5__::func_129(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_2462(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_303(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_2459(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
				iVar52 = __LIB_1__::func_360(2100, iParam10, 0);
				iVar53 = __LIB_1__::func_360(2101, iParam10, 0);
				iVar54 = __LIB_1__::func_360(2102, iParam10, 0);
				fVar55 = __LIB_1__::func_680(135, iParam10);
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
				__LIB_2__::func_996(iParam0, iParam10);
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
						func_2404(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_2404(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_2459(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_2459(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_5__::func_129(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_2404(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_2459(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_2404(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_1353(iParam0, 9, iVar63))
						{
							func_2404(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_2404(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_2404(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_1__::func_360(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_0__::func_533(iParam0, iVar64), __LIB_0__::func_242(iParam0, iVar64), __LIB_0__::func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_0__::func_533(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__::func_242(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_6__::func_275(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_2404(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_1352(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_1352(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_2404(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_2404(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_2404(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_2404(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_2404(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_2404(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_2404(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_2404(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_2404(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_2404(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_2473(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_2404(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_2404(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_2405(iParam0, &uVar4))
		{
			func_2404(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_2404(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_2404(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_2404(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_1352(iParam0, 3, -1), iVar10);
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
				func_2404(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_2405(int iParam0, var uParam1)//Position - 0xC30B3
{
	int iVar0;
	int iVar1;
	*uParam1 = func_1352(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_1__::func_360(754, Global_78127, 0) != -99 && __LIB_0__::func_438())
	{
		if (__LIB_0__::func_236() == 4)
		{
			return 1;
		}
		if (__LIB_1__::func_360(754, Global_78127, 0) == 0 && __LIB_1__::func_360(755, Global_78127, 0) == 0)
		{
			if (__LIB_1__::func_342(161, Global_78127))
			{
				if (__LIB_1__::func_360(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_1__::func_360(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_1__::func_360(754, Global_78127, 0);
		iVar1 = __LIB_1__::func_360(755, Global_78127, 0);
		if (!func_1353(iParam0, iVar1, iVar0))
		{
			if (__LIB_1__::func_342(161, Global_78127))
			{
				*uParam1 = __LIB_1__::func_360(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_1__::func_360(753, Global_78127, 0);
			}
			__LIB_1__::func_354(754, -99, Global_78127, 1, 0);
			__LIB_1__::func_354(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

void func_2445(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xCDAC5
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_3__::func_222(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_0__::func_450(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_2__::func_978(iVar1, 1, iParam2);
	}
	func_2373(iParam0, bParam3, 0, -1);
}

int func_2459(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD56BD
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
					iVar0 = func_2459(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_2459(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_2462(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xD8C6A
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_2464(iParam0))
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
			__LIB_3__::func_222(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_3__::func_223(iVar0, iParam2, 13) && !__LIB_3__::func_223(iVar0, iParam2, 14)) && !__LIB_3__::func_223(iVar0, iParam2, 15)) && !__LIB_3__::func_223(iVar0, iParam2, 16)) && !__LIB_3__::func_223(iVar0, iParam2, 71)) && !__LIB_3__::func_223(iVar0, iParam2, 72))
				{
					__LIB_3__::func_222(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_2__::func_999(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_2__::func_977(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_2__::func_978(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_2464(int iParam0)//Position - 0xD8DFB
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_5__::func_799(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_1352(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_5__::func_799(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_1352(iParam0, 11, -1);
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

void func_2468(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xD9254
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
		if (Global_78127 != __LIB_0__::func_5() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_3__::func_310(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
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
							__LIB_2__::func_411(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_2468(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_2468(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_2468(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_1__::func_360(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_1__::func_354(iVar6, iVar7, Global_78127, 1, 0);
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
							func_2468(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_2468(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_2468(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_2468(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_2468(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_2468(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_2468(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_2468(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_2468(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_2468(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_2468(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_2468(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_2468(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_2468(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_310(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_2468(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_2468(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_2468(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

void func_2473(int iParam0)//Position - 0xDA956
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
		if (!func_2478(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_2478(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_2478(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xDB320
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_1352(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_2483(int iParam0, int iParam1, int iParam2)//Position - 0xDBAAD
{
	struct<37> Var0;
	int iVar1;
	int iVar2;
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 9;
	Var0.f_36 = 9;
	Var0.f_46 = 3;
	iVar1 = -1;
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	}
	iVar2 = 0;
	while (iVar2 < 12)
	{
		Var0[iVar2] = -1;
		Var0.f_13[iVar2] = -1;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Var0.f_26)
	{
		Var0.f_26[iVar2] = -1;
		Var0.f_36[iVar2] = -1;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Var0.f_46)
	{
		Var0.f_46[iVar2] = -1;
		iVar2++;
	}
	if (__LIB_3__::func_376(iParam0, &Var0, iParam1, &iVar1))
	{
		if ((iParam1 == 1 || iParam1 == 4) || iParam1 == 3)
		{
			func_2484(iParam0);
			__LIB_4__::func_984(iParam0, &Var0, iParam2);
		}
		if (iParam1 == 11)
		{
			if (iVar1 != -1)
			{
				if (__LIB_3__::func_336(iVar1) == 22)
				{
					Var0.f_26[2] = -1;
				}
				else if (__LIB_3__::func_336(iVar1) == 8)
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
				}
				else
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
					Var0.f_26[0] = -1;
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
				{
					if (__LIB_3__::func_343(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_1352(iParam0, 7, -1), -1))
					{
						Var0[7] = 0;
						Var0.f_13[7] = 0;
					}
				}
			}
			__LIB_4__::func_984(iParam0, &Var0, iParam2);
		}
		else if (iParam1 == 3)
		{
			PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0), 100f);
		}
		iVar2 = 0;
		while (iVar2 < 12)
		{
			if (Var0[iVar2] != -1)
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar2, Var0[iVar2], Var0.f_13[iVar2], 0);
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < Var0.f_26)
		{
			if (Var0.f_26[iVar2] != -1 && Var0.f_26[iVar2] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar2, Var0.f_26[iVar2], Var0.f_36[iVar2], true);
			}
			iVar2++;
		}
	}
}

void func_2484(int iParam0)//Position - 0xDBCB9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_3__::func_521(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_2485(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_2485(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xDBD4E
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		Global_78200[iVar1] = -1;
		Global_78200.f_13[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_78200.f_26)
	{
		Global_78200.f_26[iVar1] = -1;
		Global_78200.f_36[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_78200.f_46)
	{
		Global_78200.f_46[iVar1] = -1;
		iVar1++;
	}
	bVar2 = false;
	if (__LIB_3__::func_376(iParam0, &Global_78200, iParam1, &iParam3))
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_78200[iVar1] != -1)
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar1) == Global_78200[iVar1] && PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar1) == Global_78200.f_13[iVar1])
				{
					if (iVar1 == 2)
					{
						bVar0 = true;
					}
					if (iVar1 == 1)
					{
						bVar2 = true;
					}
					PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar1, 0, 0, 0);
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < Global_78200.f_26)
		{
			if (Global_78200.f_26[iVar1] != -1 && Global_78200.f_26[iVar1] != 255)
			{
				if (PED::GET_PED_PROP_INDEX(iParam0, iVar1) == Global_78200.f_26[iVar1] && PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iVar1) == Global_78200.f_36[iVar1])
				{
					PED::CLEAR_PED_PROP(iParam0, iVar1);
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			if (!__LIB_0__::func_157(0))
			{
				if (__LIB_1__::func_342(161, -1))
				{
					func_2404(iParam0, 2, __LIB_1__::func_360(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_2404(iParam0, 2, __LIB_1__::func_360(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
		if (iParam1 == 4)
		{
			if (bVar2)
			{
				if (iParam2 != -1 && iParam2 != PLAYER::PLAYER_ID())
				{
					if (NETWORK::NETWORK_HAS_CACHED_PLAYER_HEAD_BLEND_DATA(PLAYER::INT_TO_PLAYERINDEX(iParam2)))
					{
						NETWORK::NETWORK_APPLY_CACHED_PLAYER_HEAD_BLEND_DATA(iParam0, PLAYER::INT_TO_PLAYERINDEX(iParam2));
					}
				}
				else
				{
					__LIB_2__::func_996(iParam0, -1);
				}
			}
			__LIB_1__::func_207(0);
			__LIB_2__::func_467(1, 2);
		}
	}
}

int func_2543(var uParam0, var uParam1)//Position - 0xE7798
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_3__::func_616();
	iVar2 = 0;
	iVar3 = -1;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar2);
	}
	else
	{
		iVar1 = __LIB_3__::func_915();
	}
	__LIB_3__::func_914(&iVar1);
	switch (iVar0)
	{
		case 4:
			switch (iVar1)
			{
				case joaat("avisa"):
					iVar3 = 1;
					if (!__LIB_5__::func_863(uParam1, iVar3))
					{
						return 0;
					}
					break;
				default:
					iVar3 = 2;
					if (!__LIB_5__::func_863(uParam1, iVar3))
					{
						return 0;
					}
					break;
			}
			break;
		case 3:
			switch (iVar1)
			{
				case joaat("seasparrow3"):
					iVar3 = 0;
					if (!__LIB_5__::func_863(uParam1, iVar3))
					{
						return 0;
					}
					break;
				default:
					return 1;
					break;
			}
			break;
		default:
			return 1;
			break;
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && iVar2 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1370(&iVar2, &(uParam1->f_109), 4);
			__LIB_3__::func_633(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
			__LIB_5__::func_489(uParam1->f_109);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar2, false);
			}
			if (iVar1 == joaat("stromberg") || iVar1 == joaat("toreador"))
			{
				VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam1->f_109, false);
				VEHICLE::TRANSFORM_TO_SUBMARINE(uParam1->f_109, true);
			}
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		uParam1->f_109 = VEHICLE::CREATE_VEHICLE(iVar1, uParam1->f_28, 0f, false, false, true);
		__LIB_3__::func_633(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
		VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
		__LIB_5__::func_489(uParam1->f_109);
		return 0;
	}
	if (iVar2 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
		{
			func_2358(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
			return 0;
		}
		if (__LIB_0__::func_121(uParam1->f_2) && __LIB_0__::func_121(uParam1->f_109))
		{
			if (__LIB_2__::func_899())
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, __LIB_3__::func_890());
			}
			else
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, -1);
			}
		}
	}
	__LIB_5__::func_862(iVar3);
	__LIB_3__::func_900(&(Global_1946250.f_4073), 6000, "Submarine INT enter", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	return 1;
}

int func_2561(int iParam0, var uParam1)//Position - 0xE82D7
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	if (__LIB_5__::func_236())
	{
		return 1;
	}
	if (__LIB_8__::func_52())
	{
		return 1;
	}
	iVar0 = __LIB_3__::func_616();
	iVar1 = __LIB_6__::func_300();
	Var2 = { __LIB_7__::func_406(iParam0, iVar0) };
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
	{
		if (func_2358(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_2, __LIB_3__::func_921(iParam0, iVar0, iVar1), false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam1->f_2, __LIB_7__::func_299(iParam0, iVar0));
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		func_1370(&iVar1, &(uParam1->f_109), 32);
		__LIB_3__::func_633(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var2, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, __LIB_7__::func_405(iParam0, iVar0));
		VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
		ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && __LIB_0__::func_121(uParam1->f_109))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_109, true) };
		Var4 = { ENTITY::GET_ENTITY_ROTATION(uParam1->f_109, 2) };
		iVar5 = __LIB_3__::func_920(iParam0, iVar0);
		__LIB_3__::func_900(&(Global_1946250.f_3638), iVar5, "Submarine enter", Var3, Var4, uParam1->f_3, uParam1->f_8, 1, 0, 0, 0, 2);
		return 1;
	}
	return 0;
}

void func_2647(int iParam0, int iParam1)//Position - 0xECE58
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_7__::func_411(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14))
						{
							bVar1 = true;
						}
						if (!bVar1 && __LIB_3__::func_234(bVar7, PLAYER::PLAYER_ID()))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						__LIB_7__::func_493(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_493(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_6__::func_632(1);
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_2648(iParam0, 0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_6__::func_632(1);
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_2648(iParam0, 0);
					}
					Jump @652; //curOff = 633
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_2648(int iParam0, bool bParam1)//Position - 0xED0E7
{
	__LIB_7__::func_493(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
	if (bParam1)
	{
		__LIB_5__::func_457(2);
	}
}

char* func_2655(var uParam0, var uParam1, var uParam2)//Position - 0xED3AD
{
	int iVar0;
	bool bVar1;
	if (__LIB_1__::func_717())
	{
		return "";
	}
	if (__LIB_5__::func_434())
	{
		return "SI_ENTR_BLCK18A" /* GXT: You cannot enter the Kosatka while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	if (BitTest(Global_1946250.f_4523, 3))
	{
		if (__LIB_6__::func_90(PLAYER::PLAYER_ID(), 240))
		{
			return "CAS_BLOCK_SUB" /* GXT: You cannot enter the Kosatka while holding the security case. */;
		}
	}
	if (__LIB_2__::func_606())
	{
		if (__LIB_6__::func_90(PLAYER::PLAYER_ID(), 242))
		{
			return "BAN_BLOCK_SUB" /* GXT: You cannot enter the Kosatka while holding the gold. */;
		}
		else if (__LIB_6__::func_90(PLAYER::PLAYER_ID(), 241))
		{
			return "JEW_BLOCK_SUB" /* GXT: You cannot enter the Kosatka while holding the diamonds. */;
		}
		else if (__LIB_6__::func_90(PLAYER::PLAYER_ID(), 240))
		{
			return "CAS_BLOCK_SUB" /* GXT: You cannot enter the Kosatka while holding the security case. */;
		}
		else if (__LIB_6__::func_90(PLAYER::PLAYER_ID(), 239))
		{
			return "VAN_BLOCK_SUB" /* GXT: You cannot enter the Kosatka while holding the antiques. */;
		}
	}
	iVar0 = __LIB_6__::func_726(0, 1);
	if (BitTest(Global_1946250.f_506, 0))
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			bVar1 = __LIB_0__::func_797();
			if (__LIB_6__::func_371(PLAYER::PLAYER_ID(), 0))
			{
				return "H4_SUB_KICKd" /* GXT: You no longer have access to the Kosatka as you became a Prospect. */;
			}
			else if (bVar1 != __LIB_0__::func_162() && __LIB_3__::func_673(bVar1))
			{
				return "H4_SUB_KICKa" /* GXT: You no longer have access to the Kosatka as you became an Associate. */;
			}
			else
			{
				return "H4_SUB_KICKb" /* GXT: You no longer have access to the Kosatka as you became a Bodyguard. */;
			}
		}
	}
	if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()) && (PLAYER::PLAYER_ID() == iVar0 || __LIB_0__::func_797() == iVar0))
	{
		return "SUB_BLOCK_BALIS" /* GXT: You cannot enter the Kosatka whilst wearing the Ballistic Equipment. */;
	}
	if (__LIB_2__::func_906())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor2")))
		{
		}
		else
		{
			return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
		}
	}
	if (__LIB_3__::func_693() && !__LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor2")))
		{
		}
		else
		{
			return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
		}
	}
	if (__LIB_3__::func_695())
	{
		return "SUB_BLOCK_PROS" /* GXT: You cannot enter the Kosatka with a prostitute. */;
	}
	if (__LIB_1__::func_613(PLAYER::PLAYER_ID()) == 3)
	{
		return "SUP_BLOCK_SUB" /* GXT: You cannot enter the Kosatka whilst carrying Supplies. */;
	}
	if (__LIB_1__::func_17(PLAYER::PLAYER_ID()) || __LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor2")))
		{
		}
		else
		{
			return "SUB_MC_BLOCK_E" /* GXT: You cannot enter the Kosatka while active in a mission. */;
		}
	}
	if (Global_1835493 != 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("kosatka")) && !__LIB_0__::func_872(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
			{
				return "SUB_MC_BLOCK_V" /* GXT: You cannot enter the Kosatka while in a mission vehicle. */;
			}
		}
	}
	if (BitTest(Global_1946250.f_7, 9))
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!__LIB_3__::func_684(PLAYER::PLAYER_PED_ID(), 1) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				return "H4_SUB_SUTAR" /* GXT: You cannot enter the Kosatka in this area. Move the Kosatka to a suitable area. */;
			}
		}
	}
	return "";
}

int func_2658(var uParam0, var uParam1, var uParam2)//Position - 0xED690
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	*uParam2 = 1;
	if ((!__LIB_0__::func_893() || __LIB_3__::func_558()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_6__::func_796(uParam1, 1);
	}
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_3__::func_122(&(uParam1->f_22.f_94));
			}
			__LIB_6__::func_796(uParam1, 1);
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_7__::func_494(uParam1);
				return 0;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || PED::IS_PED_INJURED(iVar3))
			{
				__LIB_7__::func_494(uParam1);
				return 0;
			}
			bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
			if ((__LIB_2__::func_734() && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1)) && !__LIB_3__::func_644(PLAYER::PLAYER_ID()))
			{
				__LIB_7__::func_494(uParam1);
				return 0;
			}
			if (((__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1)) && !__LIB_1__::func_461(iVar2, 1)) && !__LIB_3__::func_960(iVar2, 1))
			{
				__LIB_7__::func_494(uParam1);
				return 0;
			}
			if (__LIB_3__::func_919(iVar2, 1) && __LIB_6__::func_301(iVar2, 1, 0, 1) != bVar4)
			{
				__LIB_7__::func_494(uParam1);
				return 0;
			}
			if (__LIB_2__::func_116(iVar2, 1))
			{
				__LIB_7__::func_494(uParam1);
				return 0;
			}
			if (__LIB_0__::func_871(iVar2, 1))
			{
				__LIB_7__::func_494(uParam1);
				return 0;
			}
			if (__LIB_5__::func_497())
			{
				__LIB_7__::func_494(uParam1);
				return 0;
			}
			iVar5 = __LIB_7__::func_576(*uParam0);
			if (!__LIB_3__::func_959(*uParam0, ENTITY::GET_ENTITY_MODEL(iVar2), iVar5))
			{
				__LIB_7__::func_494(uParam1);
				if (__LIB_5__::func_964(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
					{
						switch (iVar5)
						{
							case 0:
							case 1:
							case 2:
							case 4:
								__LIB_0__::func_151("MP_SUB_ENTR0" /* GXT: You cannot enter the Kosatka in this vehicle. */, -1);
								break;
							case 3:
								__LIB_0__::func_151("MP_SUB_ENTR1" /* GXT: Only the Sparrow can use this entrance. */, -1);
								break;
							}
						}
				}
				return 0;
			}
			if (__LIB_1__::func_693(bVar4, 1, 1) && __LIB_6__::func_88(bVar4))
			{
				if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
				{
					if ((!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373)) && !__LIB_2__::func_159(0))
					{
						if (__LIB_5__::func_964(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)))
						{
							if (__LIB_5__::func_496(uParam1, iVar2))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_627(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_864(&(uParam1->f_397)) && !__LIB_0__::func_937(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && !__LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 20))
								{
									if (__LIB_6__::func_293() || (__LIB_3__::func_644(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 20))
									{
										if (__LIB_5__::func_964(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)))
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_6__::func_796(uParam1, 1);
											return 1;
										}
									}
								}
							}
							else
							{
								if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
								{
									HUD::CLEAR_HELP(true);
									__LIB_3__::func_122(&(uParam1->f_22.f_94));
								}
								__LIB_6__::func_796(uParam1, 1);
							}
						}
					}
				}
				else
				{
					__LIB_42__::func_153(*uParam0);
					if (__LIB_3__::func_643(PLAYER::PLAYER_ID()))
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_3__::func_642();
						return 1;
					}
					return 1;
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_3__::func_122(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_5__::func_435(0, -1);
				}
				__LIB_6__::func_796(uParam1, 1);
				return 0;
			}
		}
		else if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
		{
			HUD::CLEAR_HELP(true);
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	else if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
	{
		HUD::CLEAR_HELP(true);
		__LIB_3__::func_122(&(uParam1->f_22.f_94));
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (!bVar0)
		{
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_5__::func_435(0, -1);
	}
	__LIB_6__::func_796(uParam1, 1);
	return 0;
}

void func_2709(var uParam0, int iParam1)//Position - 0xEF652
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1001169/*func_2826*/;
			break;
		case 111:
			uParam0->f_35 = 1001160/*func_2825*/;
			break;
		case 1:
			uParam0->f_30 = 1001092/*func_2823*/;
			break;
		case 2:
			uParam0->f_31 = 1000768/*func_2820*/;
			break;
		case 3:
			uParam0->f_34 = 1000607/*func_2819*/;
			break;
		case 4:
			uParam0->f_12 = 1000594/*func_2818*/;
			break;
		case 6:
			uParam0->f_32 = 1000530/*func_2817*/;
			break;
		case 11:
			uParam0->f_11 = 1000521/*func_2816*/;
			break;
		case 12:
			uParam0->f_33 = 1000185/*func_2812*/;
			break;
		case 14:
			uParam0->f_11 = 1000176/*func_2811*/;
			break;
		case 109:
			uParam0->f_56 = 999445/*func_2809*/;
			break;
		case 8:
			uParam0->f_37 = 999437/*func_2808*/;
			break;
		case 7:
			uParam0->f_36 = 999428/*func_2807*/;
			break;
		case 79:
			*uParam0 = 999418/*func_2806*/;
			break;
		case 72:
			uParam0->f_12 = 999405/*func_2805*/;
			break;
		case 13:
			uParam0->f_2 = 999396/*func_2804*/;
			break;
		case 15:
			uParam0->f_2 = 999317/*func_2803*/;
			break;
		case 16:
			uParam0->f_5 = 998973/*func_2802*/;
			break;
		case 108:
			uParam0->f_55 = 998964/*func_2801*/;
			break;
		case 17:
			uParam0->f_17 = 998437/*func_2799*/;
			break;
		case 19:
			uParam0->f_17 = 998383/*func_2798*/;
			break;
		case 18:
			uParam0->f_8 = 998295/*func_2796*/;
			break;
		case 20:
			uParam0->f_3 = 998275/*func_2795*/;
			break;
		case 21:
			uParam0->f_3 = 998248/*func_2794*/;
			break;
		case 74:
			uParam0->f_53 = 998226/*func_2793*/;
			break;
		case 75:
			uParam0->f_4 = 998217/*func_2792*/;
			break;
		case 22:
			uParam0->f_24 = 998110/*func_2791*/;
			break;
		case 23:
			uParam0->f_26 = 998102/*func_2790*/;
			break;
		case 26:
			uParam0->f_38 = 998094/*func_2789*/;
			break;
		case 25:
			uParam0->f_23 = 997333/*func_2785*/;
			break;
		case 27:
			uParam0->f_25 = 997325/*func_2784*/;
			break;
		case 28:
			uParam0->f_24 = 997317/*func_2783*/;
			break;
		case 30:
			uParam0->f_8 = 997206/*func_2782*/;
			break;
		case 31:
			uParam0->f_39 = 997160/*func_2781*/;
			break;
		case 33:
			uParam0->f_40 = 997091/*func_2780*/;
			break;
		case 76:
			uParam0->f_13 = 997068/*func_2779*/;
			break;
		case 34:
			uParam0->f_41 = 992995/*func_2776*/;
			break;
		case 36:
			uParam0->f_58 = 992938/*func_2775*/;
			break;
		case 35:
			uParam0->f_42 = 986720/*func_2766*/;
			break;
		case 45:
			uParam0->f_14 = 986711/*func_2765*/;
			break;
		case 46:
			uParam0->f_14 = 986702/*func_2764*/;
			break;
		case 110:
			uParam0->f_57 = 986694/*func_2763*/;
			break;
		case 77:
			uParam0->f_13 = 986683/*func_2762*/;
			break;
		case 47:
			uParam0->f_43 = 986570/*func_2761*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 985597/*func_2756*/;
			break;
		case 49:
			uParam0->f_8 = 985588/*func_2755*/;
			break;
		case 50:
			*uParam0 = 985251/*func_2750*/;
			break;
		case 51:
			*uParam0 = 985242/*func_2749*/;
			break;
		case 52:
			uParam0->f_15 = 985232/*func_2748*/;
			break;
		case 53:
			uParam0->f_13 = 985209/*func_2747*/;
			break;
		case 54:
			uParam0->f_45 = 985103/*func_2746*/;
			break;
		case 56:
			uParam0->f_46 = 985094/*func_2745*/;
			break;
		case 57:
			uParam0->f_11 = 985085/*func_2744*/;
			break;
		case 58:
			uParam0->f_13 = 985043/*func_2743*/;
			break;
		case 59:
			*uParam0 = 985034/*func_2742*/;
			break;
		case 60:
			*uParam0 = 985025/*func_2741*/;
			break;
		case 61:
			uParam0->f_15 = 985014/*func_2740*/;
			break;
		case 62:
			uParam0->f_13 = 985003/*func_2739*/;
			break;
		case 63:
			uParam0->f_11 = 984994/*func_2738*/;
			break;
		case 64:
			uParam0->f_47 = 984986/*func_2737*/;
			break;
		case 65:
			uParam0->f_21 = 984978/*func_2736*/;
			break;
		case 66:
			uParam0->f_21 = 984668/*func_2735*/;
			break;
		case 67:
			uParam0->f_21 = 984598/*func_2734*/;
			break;
		case 68:
			*uParam0 = 983909/*func_2733*/;
			break;
		case 69:
			*uParam0 = 983900/*func_2732*/;
			break;
		case 70:
			uParam0->f_48 = 983888/*func_2731*/;
			break;
		case 71:
			uParam0->f_49 = 983879/*func_2730*/;
			break;
		case 107:
			uParam0->f_50 = 983867/*func_2729*/;
			break;
		case 80:
			uParam0->f_7 = 983858/*func_2728*/;
			break;
		case 84:
			uParam0->f_1 = 983849/*func_2727*/;
			break;
		case 85:
			uParam0->f_1 = 983840/*func_2726*/;
			break;
		case 87:
			uParam0->f_1 = 983831/*func_2725*/;
			break;
		case 88:
			uParam0->f_1 = 983822/*func_2724*/;
			break;
		case 89:
			uParam0->f_54 = 983814/*func_2723*/;
			break;
		case 96:
			uParam0->f_1 = 983789/*func_2722*/;
			break;
		case 97:
			uParam0->f_1 = 983679/*func_2721*/;
			break;
		case 98:
			uParam0->f_1 = 982961/*func_2720*/;
			break;
		case 100:
			uParam0->f_22 = 982261/*func_2718*/;
			break;
		case 101:
			uParam0->f_22 = 982133/*func_2717*/;
			break;
		case 112:
			uParam0->f_13 = 982121/*func_2716*/;
			break;
		case 113:
			uParam0->f_3 = 982112/*func_2715*/;
			break;
		case 114:
			uParam0->f_16 = 595599/*func_1796*/;
			break;
		case 115:
			uParam0->f_3 = 982103/*func_2714*/;
			break;
		case 116:
			*uParam0 = 982094/*func_2713*/;
			break;
		case 117:
			uParam0->f_16 = 649054/*func_1999*/;
			break;
		case 78:
			uParam0->f_59 = 982086/*func_2712*/;
			break;
		case 124:
			uParam0->f_1 = 982077/*func_2711*/;
			break;
		case 125:
			uParam0->f_19 = 982069/*func_2710*/;
			break;
	}
}

int func_2720(var uParam0, var uParam1)//Position - 0xEFFB1
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	Var0 = { 1569.249f, 248.978f, -46.378f };
	Var1 = { 0f, 0f, 146.98f };
	sVar2 = "mini@strip_club@throwout_d@";
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
	{
		uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_ClubBar_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
	{
		uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_M_Bouncer_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[1]);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 11, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 8, 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
	{
		func_2358(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
			{
				return 0;
			}
		}
		iVar3++;
	}
	MISC::SET_BIT(&(Global_1946250.f_2), 20);
	Var0 = { Var0 + Vector(0f, 4f, 0f) };
	__LIB_3__::func_900(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 262144, 0);
	uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	if (__LIB_0__::func_121(uParam1->f_140[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[2]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 0, 0, 1000f, 0);
	}
	return 1;
}

void func_2785(int iParam0, int iParam1)//Position - 0xF37D5
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_5__::func_251(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_3__::func_995(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_1562(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_1562(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_303(iParam0, -1);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						__LIB_7__::func_617(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						__LIB_7__::func_617(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if ((!bVar1 && !bVar0) && !func_2786())
					{
						MISC::SET_BIT(&(iParam1->f_2), 5);
						MISC::SET_BIT(&(iParam1->f_2), 6);
					}
					Jump @651; //curOff = 632
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
bool func_2786()//Position - 0xF3A63
{
	return BitTest(Global_1946250.f_3, 2);
}

void func_2827(var uParam0, int iParam1)//Position - 0xF46DA
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1009470/*func_2920*/;
			break;
		case 111:
			uParam0->f_35 = 1009461/*func_2919*/;
			break;
		case 1:
			uParam0->f_30 = 1009389/*func_2917*/;
			break;
		case 2:
			uParam0->f_31 = 1009154/*func_2914*/;
			break;
		case 3:
			uParam0->f_34 = 1009103/*func_2913*/;
			break;
		case 4:
			uParam0->f_12 = 1009090/*func_2912*/;
			break;
		case 6:
			uParam0->f_32 = 1009026/*func_2911*/;
			break;
		case 11:
			uParam0->f_11 = 1009017/*func_2910*/;
			break;
		case 12:
			uParam0->f_33 = 1008577/*func_2906*/;
			break;
		case 14:
			uParam0->f_11 = 1008568/*func_2905*/;
			break;
		case 109:
			uParam0->f_56 = 1007899/*func_2903*/;
			break;
		case 8:
			uParam0->f_37 = 1007891/*func_2902*/;
			break;
		case 7:
			uParam0->f_36 = 1007882/*func_2901*/;
			break;
		case 79:
			*uParam0 = 1007873/*func_2900*/;
			break;
		case 13:
			uParam0->f_2 = 1007811/*func_2899*/;
			break;
		case 15:
			uParam0->f_2 = 1007731/*func_2898*/;
			break;
		case 16:
			uParam0->f_5 = 1007362/*func_2896*/;
			break;
		case 108:
			uParam0->f_55 = 1007353/*func_2895*/;
			break;
		case 17:
			uParam0->f_17 = 1007343/*func_2894*/;
			break;
		case 19:
			uParam0->f_17 = 1007333/*func_2893*/;
			break;
		case 20:
			uParam0->f_3 = 1007324/*func_2892*/;
			break;
		case 21:
			uParam0->f_3 = 1007315/*func_2891*/;
			break;
		case 74:
			uParam0->f_53 = 1007293/*func_2890*/;
			break;
		case 75:
			uParam0->f_4 = 1007284/*func_2889*/;
			break;
		case 22:
			uParam0->f_24 = 1007272/*func_2888*/;
			break;
		case 23:
			uParam0->f_26 = 1007264/*func_2887*/;
			break;
		case 26:
			uParam0->f_38 = 1007256/*func_2886*/;
			break;
		case 25:
			uParam0->f_23 = 1007248/*func_2885*/;
			break;
		case 27:
			uParam0->f_25 = 1007240/*func_2884*/;
			break;
		case 28:
			uParam0->f_24 = 1007232/*func_2883*/;
			break;
		case 30:
			uParam0->f_8 = 1007197/*func_2882*/;
			break;
		case 31:
			uParam0->f_39 = 1007171/*func_2881*/;
			break;
		case 33:
			uParam0->f_40 = 1007101/*func_2880*/;
			break;
		case 76:
			uParam0->f_13 = 1007078/*func_2879*/;
			break;
		case 34:
			uParam0->f_41 = 1006982/*func_2878*/;
			break;
		case 36:
			uParam0->f_58 = 1006937/*func_2877*/;
			break;
		case 35:
			uParam0->f_42 = 1004424/*func_2875*/;
			break;
		case 45:
			uParam0->f_14 = 1004415/*func_2874*/;
			break;
		case 46:
			uParam0->f_14 = 1004406/*func_2873*/;
			break;
		case 110:
			uParam0->f_57 = 1004398/*func_2872*/;
			break;
		case 77:
			uParam0->f_13 = 1004387/*func_2871*/;
			break;
		case 47:
			uParam0->f_43 = 1004345/*func_2870*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1004237/*func_2869*/;
			break;
		case 49:
			uParam0->f_8 = 1004228/*func_2868*/;
			break;
		case 50:
			*uParam0 = 1004025/*func_2867*/;
			break;
		case 51:
			*uParam0 = 1004016/*func_2866*/;
			break;
		case 52:
			uParam0->f_15 = 1004005/*func_2865*/;
			break;
		case 53:
			uParam0->f_13 = 1003982/*func_2864*/;
			break;
		case 54:
			uParam0->f_45 = 1003974/*func_2863*/;
			break;
		case 56:
			uParam0->f_46 = 1003965/*func_2862*/;
			break;
		case 57:
			uParam0->f_11 = 1003952/*func_2861*/;
			break;
		case 58:
			uParam0->f_13 = 1003910/*func_2860*/;
			break;
		case 59:
			*uParam0 = 1003901/*func_2859*/;
			break;
		case 60:
			*uParam0 = 1003892/*func_2858*/;
			break;
		case 61:
			uParam0->f_15 = 1003881/*func_2857*/;
			break;
		case 62:
			uParam0->f_13 = 1003870/*func_2856*/;
			break;
		case 63:
			uParam0->f_11 = 1003861/*func_2855*/;
			break;
		case 64:
			uParam0->f_47 = 1003853/*func_2854*/;
			break;
		case 65:
			uParam0->f_21 = 1003845/*func_2853*/;
			break;
		case 66:
			uParam0->f_21 = 1003612/*func_2852*/;
			break;
		case 67:
			uParam0->f_21 = 1003542/*func_2851*/;
			break;
		case 68:
			*uParam0 = 1002853/*func_2850*/;
			break;
		case 69:
			*uParam0 = 1002844/*func_2849*/;
			break;
		case 70:
			uParam0->f_48 = 1002832/*func_2848*/;
			break;
		case 71:
			uParam0->f_49 = 1002823/*func_2847*/;
			break;
		case 107:
			uParam0->f_50 = 1002811/*func_2846*/;
			break;
		case 80:
			uParam0->f_7 = 1002802/*func_2845*/;
			break;
		case 84:
			uParam0->f_1 = 1002793/*func_2844*/;
			break;
		case 85:
			uParam0->f_1 = 1002784/*func_2843*/;
			break;
		case 87:
			uParam0->f_1 = 1002775/*func_2842*/;
			break;
		case 88:
			uParam0->f_1 = 1002766/*func_2841*/;
			break;
		case 89:
			uParam0->f_54 = 1002758/*func_2840*/;
			break;
		case 96:
			uParam0->f_1 = 1002749/*func_2839*/;
			break;
		case 97:
			uParam0->f_1 = 1002740/*func_2838*/;
			break;
		case 98:
			uParam0->f_1 = 1002731/*func_2837*/;
			break;
		case 100:
			uParam0->f_22 = 1002723/*func_2836*/;
			break;
		case 101:
			uParam0->f_22 = 1002715/*func_2835*/;
			break;
		case 112:
			uParam0->f_13 = 1002703/*func_2834*/;
			break;
		case 113:
			uParam0->f_3 = 1002694/*func_2833*/;
			break;
		case 114:
			uParam0->f_16 = 595599/*func_1796*/;
			break;
		case 115:
			uParam0->f_3 = 1002685/*func_2832*/;
			break;
		case 116:
			*uParam0 = 1002676/*func_2831*/;
			break;
		case 117:
			uParam0->f_16 = 649054/*func_1999*/;
			break;
		case 78:
			uParam0->f_59 = 1002668/*func_2830*/;
			break;
		case 124:
			uParam0->f_1 = 1002659/*func_2829*/;
			break;
		case 125:
			uParam0->f_19 = 1002651/*func_2828*/;
			break;
	}
}

void func_2921(var uParam0, int iParam1)//Position - 0xF6747
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1088263/*func_3166*/;
			break;
		case 111:
			uParam0->f_35 = 1088249/*func_3165*/;
			break;
		case 1:
			uParam0->f_30 = 1088093/*func_3163*/;
			break;
		case 2:
			uParam0->f_31 = 1087623/*func_3159*/;
			break;
		case 3:
			uParam0->f_34 = 1087424/*func_3158*/;
			break;
		case 4:
			uParam0->f_12 = 1087302/*func_3157*/;
			break;
		case 5:
			uParam0->f_11 = 1087292/*func_3156*/;
			break;
		case 37:
			uParam0->f_18 = 1087156/*func_3155*/;
			break;
		case 38:
			uParam0->f_9 = 1087113/*func_3154*/;
			break;
		case 42:
			uParam0->f_10 = 1087029/*func_3152*/;
			break;
		case 6:
			uParam0->f_32 = 1086935/*func_3151*/;
			break;
		case 11:
			uParam0->f_11 = 1086926/*func_3150*/;
			break;
		case 12:
			uParam0->f_33 = 1085748/*func_3146*/;
			break;
		case 14:
			uParam0->f_11 = 1085739/*func_3145*/;
			break;
		case 109:
			uParam0->f_56 = 1079270/*func_3143*/;
			break;
		case 8:
			uParam0->f_37 = 1078970/*func_3142*/;
			break;
		case 7:
			uParam0->f_36 = 1078913/*func_3141*/;
			break;
		case 79:
			*uParam0 = 1078669/*func_3139*/;
			break;
		case 13:
			uParam0->f_2 = 1078607/*func_3138*/;
			break;
		case 15:
			uParam0->f_2 = 1078527/*func_3137*/;
			break;
		case 16:
			uParam0->f_5 = 1077807/*func_3135*/;
			break;
		case 108:
			uParam0->f_55 = 1074615/*func_3123*/;
			break;
		case 17:
			uParam0->f_17 = 1072355/*func_3121*/;
			break;
		case 19:
			uParam0->f_17 = 1072330/*func_3120*/;
			break;
		case 20:
			uParam0->f_3 = 1072154/*func_3119*/;
			break;
		case 21:
			uParam0->f_3 = 1072090/*func_3118*/;
			break;
		case 74:
			uParam0->f_53 = 1071986/*func_3117*/;
			break;
		case 75:
			uParam0->f_4 = 1071970/*func_3116*/;
			break;
		case 22:
			uParam0->f_24 = 1071863/*func_3115*/;
			break;
		case 23:
			uParam0->f_26 = 1071816/*func_3114*/;
			break;
		case 24:
			uParam0->f_26 = 1071779/*func_3113*/;
			break;
		case 26:
			uParam0->f_38 = 1069734/*func_3101*/;
			break;
		case 25:
			uParam0->f_23 = 1069412/*func_3099*/;
			break;
		case 30:
			uParam0->f_8 = 1068555/*func_3097*/;
			break;
		case 31:
			uParam0->f_39 = 1068425/*func_3096*/;
			break;
		case 33:
			uParam0->f_40 = 1067853/*func_3095*/;
			break;
		case 32:
			*uParam0 = 1067568/*func_3090*/;
			break;
		case 34:
			uParam0->f_41 = 1065082/*func_3088*/;
			break;
		case 36:
			uParam0->f_58 = 1065025/*func_3087*/;
			break;
		case 35:
			uParam0->f_42 = 1038056/*func_3084*/;
			break;
		case 45:
			uParam0->f_14 = 1038047/*func_3083*/;
			break;
		case 46:
			uParam0->f_14 = 1038038/*func_3082*/;
			break;
		case 110:
			uParam0->f_57 = 1038030/*func_3081*/;
			break;
		case 77:
			uParam0->f_13 = 1038007/*func_3080*/;
			break;
		case 47:
			uParam0->f_43 = 1037935/*func_3078*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1037807/*func_3077*/;
			break;
		case 49:
			uParam0->f_8 = 1037781/*func_3076*/;
			break;
		case 50:
			*uParam0 = 1037094/*func_3072*/;
			break;
		case 51:
			*uParam0 = 1036932/*func_3071*/;
			break;
		case 52:
			uParam0->f_15 = 1036921/*func_3070*/;
			break;
		case 53:
			uParam0->f_13 = 1036759/*func_3069*/;
			break;
		case 54:
			uParam0->f_45 = 1036235/*func_3062*/;
			break;
		case 56:
			uParam0->f_46 = 1036217/*func_3061*/;
			break;
		case 57:
			uParam0->f_11 = 1035965/*func_3060*/;
			break;
		case 58:
			uParam0->f_13 = 1035803/*func_3059*/;
			break;
		case 59:
			*uParam0 = 1035307/*func_3052*/;
			break;
		case 60:
			*uParam0 = 1035292/*func_3051*/;
			break;
		case 61:
			uParam0->f_15 = 1035281/*func_3050*/;
			break;
		case 62:
			uParam0->f_13 = 1035119/*func_3049*/;
			break;
		case 55:
			uParam0->f_45 = 1034940/*func_3048*/;
			break;
		case 63:
			uParam0->f_11 = 1034913/*func_3047*/;
			break;
		case 64:
			uParam0->f_47 = 1033480/*func_3040*/;
			break;
		case 65:
			uParam0->f_21 = 1032092/*func_3037*/;
			break;
		case 66:
			uParam0->f_21 = 1031733/*func_3036*/;
			break;
		case 67:
			uParam0->f_21 = 1031619/*func_3035*/;
			break;
		case 68:
			*uParam0 = 1030659/*func_3032*/;
			break;
		case 69:
			*uParam0 = 1030650/*func_3031*/;
			break;
		case 70:
			uParam0->f_48 = 1030638/*func_3030*/;
			break;
		case 71:
			uParam0->f_49 = 1030094/*func_3029*/;
			break;
		case 107:
			uParam0->f_50 = 1030082/*func_3028*/;
			break;
		case 80:
			uParam0->f_7 = 1029894/*func_3027*/;
			break;
		case 84:
			uParam0->f_1 = 1029885/*func_3026*/;
			break;
		case 85:
			uParam0->f_1 = 1028299/*func_3023*/;
			break;
		case 87:
			uParam0->f_1 = 1026783/*func_3016*/;
			break;
		case 88:
			uParam0->f_1 = 1026774/*func_3015*/;
			break;
		case 89:
			uParam0->f_54 = 1026766/*func_3014*/;
			break;
		case 96:
			uParam0->f_1 = 1026736/*func_3013*/;
			break;
		case 97:
			uParam0->f_1 = 1026291/*func_3012*/;
			break;
		case 98:
			uParam0->f_1 = 1020649/*func_2959*/;
			break;
		case 100:
			uParam0->f_22 = 1012086/*func_2934*/;
			break;
		case 101:
			uParam0->f_22 = 1011202/*func_2929*/;
			break;
		case 112:
			uParam0->f_13 = 1011191/*func_2928*/;
			break;
		case 113:
			uParam0->f_3 = 1011182/*func_2927*/;
			break;
		case 114:
			uParam0->f_16 = 1011173/*func_2926*/;
			break;
		case 117:
			uParam0->f_16 = 1011164/*func_2925*/;
			break;
		case 78:
			uParam0->f_59 = 1010992/*func_2923*/;
			break;
		case 76:
			uParam0->f_13 = 1010969/*func_2922*/;
			break;
	}
}

int func_3023(int iParam0, var uParam1)//Position - 0xFB0CB
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1370(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1339(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_4__::func_61(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_4__::func_61(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_4__::func_60(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_4__::func_60(iParam0, &Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[0 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 1);
		}
		__LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_3062(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0xFCFCB
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	bVar0 = false;
	if (!__LIB_6__::func_94(PLAYER::PLAYER_ID(), __LIB_4__::func_71(iParam0)) && !__LIB_6__::func_94(__LIB_0__::func_797(), __LIB_4__::func_71(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_693(bVar1, 1, 1) && bVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_6__::func_94(bVar1, __LIB_4__::func_71(iParam0)) && __LIB_6__::func_387(bVar1))
				{
					Var3 = { __LIB_1__::func_696(bVar1) };
					if (__LIB_0__::func_800(Var3))
					{
						if (NETWORK::NETWORK_IS_FRIEND(&Var3))
						{
							iVar4 = joaat("ARC_FRIEND");
							if (iVar4 != *uParam4)
							{
								*uParam4 = iVar4;
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "ARC_FRIEND" /* GXT: Friend's Arcade */);
							}
							bVar0 = true;
						}
						else
						{
							iVar2++;
						}
						if (!bVar0 && *uParam4 == joaat("ARC_FRIEND"))
						{
							*uParam4 = joaat("BLIP_740");
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_740" /* GXT: Arcade */);
						}
						if (HUD::DOES_BLIP_EXIST(*uParam1) && __LIB_5__::func_781(iParam0))
						{
							if (!HUD::DOES_BLIP_EXIST(*iParam2))
							{
								Var5 = { __LIB_4__::func_75(iParam0) };
								iVar6 = __LIB_4__::func_74(iParam0);
								*iParam2 = __LIB_0__::func_488(Var5, 0);
								HUD::SET_BLIP_SPRITE(*iParam2, iVar6);
								HUD::SET_BLIP_SCALE(*iParam2, 1f);
								HUD::SET_BLIP_PRIORITY(*iParam2, 7);
								func_3063(iParam2, 18);
								HUD::SET_BLIP_AS_SHORT_RANGE(*iParam2, false);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam2, "BASE_HEIST_BLIP" /* GXT: The Doomsday Heist */);
								HUD::SET_BLIP_HIDDEN_ON_LEGEND(*iParam2, true);
							}
						}
						else if (HUD::DOES_BLIP_EXIST(*iParam2))
						{
							HUD::REMOVE_BLIP(iParam2);
						}
					}
void func_3063(var uParam0, int iParam1)//Position - 0xFD144
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = __LIB_1__::func_389(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

void func_3099(int iParam0, int iParam1)//Position - 0x105164
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_67(iParam0, 0) };
	if (__LIB_6__::func_643(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_1561(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_7__::func_307(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_307(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_618(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_618(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_3101(var uParam0, var uParam1)//Position - 0x1052A6
{
	if (__LIB_3__::func_616() == 3)
	{
		func_3105(uParam0, uParam1);
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_6__::func_94(__LIB_2__::func_39(PLAYER::PLAYER_ID()), __LIB_4__::func_71(*uParam0)))
	{
		__LIB_6__::func_462(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 2)
	{
		func_3103(uParam0, uParam1);
	}
	else
	{
		__LIB_4__::func_87(uParam1);
	}
}

void func_3103(var uParam0, var uParam1)//Position - 0x10532F
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_1561(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_1 = 1;
		uParam1->f_6 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		uParam1->f_4 = 1;
		__LIB_5__::func_462();
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
		}
		else if (uParam0->f_2)
		{
			uParam1->f_1 = 1;
			uParam1->f_5 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_7__::func_307(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_3105(var uParam0, var uParam1)//Position - 0x10544D
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_15__::func_655(uParam0, uParam1);
			break;
		case 1:
			func_3110(uParam0, uParam1);
			break;
		case 2:
			__LIB_31__::func_586(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3110(var uParam0, var uParam1)//Position - 0x1057D0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_1561(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_5__::func_462();
		if (__LIB_7__::func_992(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_3__::func_616() == 3)
			{
				__LIB_1__::func_767("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_767("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_7__::func_307(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

char* func_3121(int iParam0, var uParam1, int iParam2)//Position - 0x105CE3
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return "";
	}
	if (__LIB_5__::func_434())
	{
		return "SI_ENTR_BLCK1A" /* GXT: You cannot enter the Arcade while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = __LIB_5__::func_185(PLAYER::PLAYER_ID());
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
		{
			switch (iVar0)
			{
				case 192:
					return "ARC_P_BLCK_A" /* GXT: You can't enter the Arcade while resupplying another business. */;
				case 190:
					return "ARC_P_BLCK_B" /* GXT: You can't enter the Arcade while selling goods from another business. */;
				case 167:
					return "ARC_P_BLCK_C" /* GXT: You can't enter the Arcade while acquiring goods for a Warehouse. */;
				case 168:
					return "ARC_P_BLCK_D" /* GXT: You can't enter the Arcade while selling goods from a Warehouse. */;
				case 178:
					return "ARC_P_BLCK_E" /* GXT: You can't enter the Arcade while acquiring a vehicle for a Warehouse. */;
				case 188:
					return "ARC_P_BLCK_F" /* GXT: You can't enter the Arcade while selling vehicles from a Warehouse. */;
				case 225:
					return "ARC_P_BLCK_G" /* GXT: You can't enter the Arcade while acquiring goods for a Bunker. */;
				case 226:
					return "ARC_P_BLCK_H" /* GXT: You can't enter the Arcade while selling goods from a Bunker. */;
				case 229:
					return "ARC_P_BLCK_I" /* GXT: You can't enter the Arcade while acquiring goods for a Hangar. */;
				case 230:
					return "ARC_P_BLCK_J" /* GXT: You can't enter the Arcade while selling goods from a Hangar. */;
				case 237:
					return "ARC_P_BLCK_O" /* GXT: You can't enter the Arcade while taking part in Nightclub business. */;
				case 243:
					return "ARC_P_BLCK_P" /* GXT: You can't enter the Arcade while working for Ms. Baker. */;
				case 158:
					if (__LIB_2__::func_106(PLAYER::PLAYER_ID()))
					{
						return "";
					}
					break;
				}
			}
	}
	if (iParam2 == 1 || iParam2 == 2)
	{
		if (__LIB_6__::func_94(PLAYER::PLAYER_ID(), __LIB_4__::func_71(iParam0)))
		{
			__LIB_5__::func_260(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, iParam2);
			if ((!__LIB_6__::func_387(PLAYER::PLAYER_ID()) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID())) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var2, Var3, fVar4, false, false, 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
				{
					return "ARC_P_BLCK_SU" /* GXT: The Garage will become accessible once the Arcade is setup. */;
				}
			}
		}
	}
	if (__LIB_3__::func_695())
	{
		return "ARC_P_BLCK_K" /* GXT: You can't enter the Arcade with a prostitute. */;
	}
	if (__LIB_2__::func_906())
	{
		return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
	}
	if (__LIB_3__::func_694(PLAYER::PLAYER_ID()))
	{
		return "ARC_P_BLCK_L" /* GXT: You can't access the Arcade as the Beast. */;
	}
	if (__LIB_3__::func_693() && !__LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
		{
			return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
		}
	}
	if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()) && __LIB_6__::func_92(PLAYER::PLAYER_ID()))
	{
		return "ARC_P_BLCK_M" /* GXT: You can't access the Arcade whilst wearing the Ballistic Equipment. */;
	}
	if ((__LIB_6__::func_92(PLAYER::PLAYER_ID()) && __LIB_1__::func_17(PLAYER::PLAYER_ID())) && __LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
			{
				return "ARC_P_BLCK_N" /* GXT: You can't enter the Arcade while taking part in a Business Battle. */;
			}
		}
		else
		{
			return "ARC_P_BLCK_N" /* GXT: You can't enter the Arcade while taking part in a Business Battle. */;
		}
	}
	if (__LIB_6__::func_92(PLAYER::PLAYER_ID()) && !__LIB_5__::func_873(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar8 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar9 = __LIB_3__::func_392(iVar8, &uVar7, &uVar6);
			iVar10 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar8, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar10))
			{
				iVar11 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar10);
				if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
				{
					if (!__LIB_6__::func_279(PLAYER::PLAYER_ID()))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar8))
						{
							iVar12 = ENTITY::GET_ENTITY_ATTACHED_TO(iVar8);
							if ((__LIB_0__::func_121(iVar12) && !__LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar8))) && !__LIB_3__::func_690(iVar8))
							{
								return "PROP_BLOCK_TRAIL" /* GXT: Unable to enter garage. Please detach trailer. */;
							}
							else
							{
								return "ARC_P_BLCK_Q" /* GXT: You can't enter the Arcade with this vehicle. */;
							}
						}
						else if (__LIB_3__::func_690(iVar8))
						{
							return "ARC_P_BLCK_R" /* GXT: You can't enter the Arcade with the Mobile Operations Center. */;
						}
						else if ((((((__LIB_1__::func_589(iVar8) || __LIB_1__::func_819(ENTITY::GET_ENTITY_MODEL(iVar8))) || !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar8), 22)) || __LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar8))) || __LIB_1__::func_588(iVar8)) || __LIB_3__::func_689(iVar8)) || (__LIB_0__::func_872(iVar8, 1) && iVar9 != iVar11))
						{
							if (__LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar8)) && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar8))
							{
								return "";
							}
							else
							{
								return "ARC_P_BLCK_Q" /* GXT: You can't enter the Arcade with this vehicle. */;
							}
						}
						else if (__LIB_0__::func_121(iVar8) && ENTITY::GET_ENTITY_MODEL(iVar8) == joaat("rcbandito"))
						{
							return "ARC_P_BLCK_T" /* GXT: You can't enter the Arcade with the RC Bandito. */;
						}
					}
				}
			}
		}
	}
	return "";
}

int func_3123(var uParam0, var uParam1, var uParam2)//Position - 0x1065B7
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	*uParam2 = 0;
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_588(iVar2))
			{
				__LIB_7__::func_499(uParam1);
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
			{
				__LIB_7__::func_499(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_7__::func_499(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 22))
			{
				__LIB_7__::func_499(uParam1);
				return 0;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || PED::IS_PED_INJURED(iVar3))
			{
				__LIB_7__::func_499(uParam1);
				return 0;
			}
			bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
			if ((__LIB_0__::func_872(iVar2, 1) && __LIB_3__::func_251(iVar2) != bVar4) && !Global_1852994.f_171)
			{
				__LIB_7__::func_499(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_872(iVar2, 1) && __LIB_3__::func_251(iVar2) == bVar4) && __LIB_2__::func_734()) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1)) && !__LIB_3__::func_644(PLAYER::PLAYER_ID()))
			{
				__LIB_7__::func_499(uParam1);
				return 0;
			}
			if (__LIB_3__::func_689(iVar2))
			{
				__LIB_7__::func_499(uParam1);
				return 0;
			}
			if (__LIB_0__::func_870(iVar2, 1) && __LIB_3__::func_249(iVar2, 1, 0) != bVar4)
			{
				__LIB_7__::func_499(uParam1);
				return 0;
			}
			if (__LIB_2__::func_116(iVar2, 1))
			{
				__LIB_7__::func_499(uParam1);
				return 0;
			}
			if (__LIB_0__::func_871(iVar2, 1))
			{
				__LIB_7__::func_499(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_693(bVar4, 1, 1) && __LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 22)) && __LIB_6__::func_92(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3)))
			{
				if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_872(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_463() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if (!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
					{
						if (__LIB_5__::func_949(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1.5f)))
						{
							if (func_3130(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_627(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_864(&(uParam1->f_397)) && !__LIB_0__::func_937(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 17))
								{
									if (__LIB_6__::func_293() || (__LIB_3__::func_644(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 17))
									{
										if ((__LIB_5__::func_949(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2))
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_5__::func_435(1, *uParam0);
											__LIB_6__::func_789(uParam1, 0);
											__LIB_7__::func_395(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 17)
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_7__::func_395(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_701(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
										{
											__LIB_5__::func_435(1, *uParam0);
											__LIB_6__::func_789(uParam1, 0);
											__LIB_7__::func_395(iVar2);
											return 1;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					__LIB_30__::func_743(*uParam0);
					bVar5 = __LIB_6__::func_73(bVar4) == uParam0->f_1;
					if (bVar5)
					{
						if (!__LIB_3__::func_833(uParam0->f_1))
						{
							bVar5 = false;
						}
					}
					else if (BitTest(Global_1946250.f_4523, 30))
					{
						bVar5 = true;
					}
					if (__LIB_3__::func_643(PLAYER::PLAYER_ID()) && bVar5)
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_3__::func_642();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_3__::func_122(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_5__::func_435(0, -1);
				}
				__LIB_6__::func_789(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (!bVar0)
		{
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_5__::func_435(0, -1);
	}
	__LIB_6__::func_789(uParam1, 1);
	return 0;
}

int func_3130(var uParam0, int iParam1, bool bParam2)//Position - 0x106E75
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "ARC_GARAGE_T"))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1))
		{
			if (!__LIB_32__::func_599(iParam1, 126, &Var0, 0, 1, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_3167(var uParam0, int iParam1)//Position - 0x109B10
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1104445/*func_3275*/;
			break;
		case 111:
			uParam0->f_35 = 1104436/*func_3274*/;
			break;
		case 1:
			uParam0->f_30 = 1104368/*func_3272*/;
			break;
		case 2:
			uParam0->f_31 = 1103924/*func_3269*/;
			break;
		case 3:
			uParam0->f_34 = 1103819/*func_3268*/;
			break;
		case 4:
			uParam0->f_12 = 1103806/*func_3267*/;
			break;
		case 6:
			uParam0->f_32 = 1103742/*func_3266*/;
			break;
		case 11:
			uParam0->f_11 = 1103733/*func_3265*/;
			break;
		case 12:
			uParam0->f_33 = 1103272/*func_3260*/;
			break;
		case 14:
			uParam0->f_11 = 1103263/*func_3259*/;
			break;
		case 109:
			uParam0->f_56 = 1102878/*func_3257*/;
			break;
		case 8:
			uParam0->f_37 = 1102870/*func_3256*/;
			break;
		case 7:
			uParam0->f_36 = 1102861/*func_3255*/;
			break;
		case 79:
			*uParam0 = 1102837/*func_3254*/;
			break;
		case 13:
			uParam0->f_2 = 1102775/*func_3253*/;
			break;
		case 15:
			uParam0->f_2 = 1102696/*func_3252*/;
			break;
		case 16:
			uParam0->f_5 = 1102399/*func_3251*/;
			break;
		case 108:
			uParam0->f_55 = 1102390/*func_3250*/;
			break;
		case 17:
			uParam0->f_17 = 1102380/*func_3249*/;
			break;
		case 19:
			uParam0->f_17 = 1102355/*func_3248*/;
			break;
		case 20:
			uParam0->f_3 = 1102346/*func_3247*/;
			break;
		case 21:
			uParam0->f_3 = 1102337/*func_3246*/;
			break;
		case 74:
			uParam0->f_53 = 1102315/*func_3245*/;
			break;
		case 75:
			uParam0->f_4 = 1102306/*func_3244*/;
			break;
		case 22:
			uParam0->f_24 = 1102298/*func_3243*/;
			break;
		case 23:
			uParam0->f_26 = 1102290/*func_3242*/;
			break;
		case 26:
			uParam0->f_38 = 1102282/*func_3241*/;
			break;
		case 25:
			uParam0->f_23 = 1101950/*func_3238*/;
			break;
		case 27:
			uParam0->f_25 = 1101942/*func_3237*/;
			break;
		case 28:
			uParam0->f_24 = 1101934/*func_3236*/;
			break;
		case 30:
			uParam0->f_8 = 1101642/*func_3234*/;
			break;
		case 31:
			uParam0->f_39 = 1101616/*func_3233*/;
			break;
		case 33:
			uParam0->f_40 = 1101547/*func_3232*/;
			break;
		case 34:
			uParam0->f_41 = 1097815/*func_3231*/;
			break;
		case 36:
			uParam0->f_58 = 1097770/*func_3230*/;
			break;
		case 35:
			uParam0->f_42 = 1094602/*func_3227*/;
			break;
		case 45:
			uParam0->f_14 = 1094593/*func_3226*/;
			break;
		case 46:
			uParam0->f_14 = 1094584/*func_3225*/;
			break;
		case 110:
			uParam0->f_57 = 1094576/*func_3224*/;
			break;
		case 77:
			uParam0->f_13 = 1094565/*func_3223*/;
			break;
		case 47:
			uParam0->f_43 = 1094452/*func_3222*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1093329/*func_3219*/;
			break;
		case 49:
			uParam0->f_8 = 1093320/*func_3218*/;
			break;
		case 50:
			*uParam0 = 1093311/*func_3217*/;
			break;
		case 51:
			*uParam0 = 1093302/*func_3216*/;
			break;
		case 52:
			uParam0->f_15 = 1093291/*func_3215*/;
			break;
		case 53:
			uParam0->f_13 = 1093280/*func_3214*/;
			break;
		case 54:
			uParam0->f_45 = 1093272/*func_3213*/;
			break;
		case 56:
			uParam0->f_46 = 1093263/*func_3212*/;
			break;
		case 57:
			uParam0->f_11 = 1093254/*func_3211*/;
			break;
		case 58:
			uParam0->f_13 = 1093212/*func_3210*/;
			break;
		case 59:
			*uParam0 = 1093203/*func_3209*/;
			break;
		case 60:
			*uParam0 = 1093194/*func_3208*/;
			break;
		case 61:
			uParam0->f_15 = 1093183/*func_3207*/;
			break;
		case 62:
			uParam0->f_13 = 1093172/*func_3206*/;
			break;
		case 63:
			uParam0->f_11 = 1093163/*func_3205*/;
			break;
		case 64:
			uParam0->f_47 = 1093155/*func_3204*/;
			break;
		case 65:
			uParam0->f_21 = 1093147/*func_3203*/;
			break;
		case 66:
			uParam0->f_21 = 1092844/*func_3202*/;
			break;
		case 67:
			uParam0->f_21 = 1092774/*func_3201*/;
			break;
		case 68:
			*uParam0 = 1092125/*func_3200*/;
			break;
		case 69:
			*uParam0 = 1092116/*func_3199*/;
			break;
		case 70:
			uParam0->f_48 = 1092108/*func_3198*/;
			break;
		case 71:
			uParam0->f_49 = 1092099/*func_3197*/;
			break;
		case 107:
			uParam0->f_50 = 1092087/*func_3196*/;
			break;
		case 80:
			uParam0->f_7 = 1091653/*func_3195*/;
			break;
		case 18:
			uParam0->f_8 = 1091628/*func_3194*/;
			break;
		case 84:
			uParam0->f_1 = 1091611/*func_3193*/;
			break;
		case 85:
			uParam0->f_1 = 1091069/*func_3189*/;
			break;
		case 87:
			uParam0->f_1 = 1090028/*func_3180*/;
			break;
		case 88:
			uParam0->f_1 = 1090019/*func_3179*/;
			break;
		case 89:
			uParam0->f_54 = 1090011/*func_3178*/;
			break;
		case 96:
			uParam0->f_1 = 1090002/*func_3177*/;
			break;
		case 97:
			uParam0->f_1 = 1089993/*func_3176*/;
			break;
		case 98:
			uParam0->f_1 = 1089984/*func_3175*/;
			break;
		case 100:
			uParam0->f_22 = 1089976/*func_3174*/;
			break;
		case 101:
			uParam0->f_22 = 1089968/*func_3173*/;
			break;
		case 112:
			uParam0->f_13 = 1089956/*func_3172*/;
			break;
		case 113:
			uParam0->f_3 = 1089947/*func_3171*/;
			break;
		case 78:
			uParam0->f_59 = 1089644/*func_3168*/;
			break;
	}
}

int func_3189(var uParam0, var uParam1)//Position - 0x10A5FD
{
	return func_3190(uParam1);
}

int func_3190(var uParam0)//Position - 0x10A60B
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_109))
		{
			func_1370(&iVar0, &(uParam0->f_109), 60);
			__LIB_3__::func_633(&(uParam0->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
			return 0;
		}
		else if (func_1339(&iVar0, &(uParam0->f_109), &(uParam0->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0->f_109), &(uParam0->f_189[1 /*3*/]), &(uParam0->f_189[0 /*3*/]));
		__LIB_4__::func_109(&Var1, &Var3, &uVar9, 1);
		__LIB_4__::func_109(&Var2, &Var4, &uVar10, 0);
		__LIB_4__::func_108(&Var5, &Var7, &uVar11, 1);
		__LIB_4__::func_108(&Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam0->f_189[0 /*3*/].f_1 - uParam0->f_189[1 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam0->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_188), 1);
		}
		__LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_3238(int iParam0, int iParam1)//Position - 0x10D07E
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_554(iParam0) };
	if (__LIB_0__::func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_1561(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_7__::func_303(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_303(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_617(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_617(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_3276(var uParam0, int iParam1)//Position - 0x10DA46
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1139584/*func_3454*/;
			break;
		case 111:
			uParam0->f_35 = 1139561/*func_3453*/;
			break;
		case 1:
			uParam0->f_30 = 1139431/*func_3451*/;
			break;
		case 2:
			uParam0->f_31 = 1138768/*func_3447*/;
			break;
		case 3:
			uParam0->f_34 = 1138505/*func_3446*/;
			break;
		case 4:
			uParam0->f_12 = 1138492/*func_3445*/;
			break;
		case 5:
			uParam0->f_11 = 1138482/*func_3444*/;
			break;
		case 37:
			uParam0->f_18 = 1138285/*func_3443*/;
			break;
		case 38:
			uParam0->f_9 = 1138237/*func_3442*/;
			break;
		case 42:
			uParam0->f_10 = 1138201/*func_3441*/;
			break;
		case 6:
			uParam0->f_32 = 1138086/*func_3440*/;
			break;
		case 11:
			uParam0->f_11 = 1138077/*func_3439*/;
			break;
		case 12:
			uParam0->f_33 = 1137147/*func_3433*/;
			break;
		case 14:
			uParam0->f_11 = 1137138/*func_3432*/;
			break;
		case 109:
			uParam0->f_56 = 1135994/*func_3430*/;
			break;
		case 8:
			uParam0->f_37 = 1135950/*func_3429*/;
			break;
		case 7:
			uParam0->f_36 = 1135927/*func_3428*/;
			break;
		case 79:
			*uParam0 = 1135903/*func_3427*/;
			break;
		case 13:
			uParam0->f_2 = 1135841/*func_3426*/;
			break;
		case 15:
			uParam0->f_2 = 1135762/*func_3425*/;
			break;
		case 16:
			uParam0->f_5 = 1135088/*func_3420*/;
			break;
		case 108:
			uParam0->f_55 = 1131806/*func_3407*/;
			break;
		case 17:
			uParam0->f_17 = 1130872/*func_3406*/;
			break;
		case 19:
			uParam0->f_17 = 1130828/*func_3405*/;
			break;
		case 20:
			uParam0->f_3 = 1130655/*func_3404*/;
			break;
		case 21:
			uParam0->f_3 = 1130570/*func_3403*/;
			break;
		case 74:
			uParam0->f_53 = 1130429/*func_3402*/;
			break;
		case 75:
			uParam0->f_4 = 1130413/*func_3401*/;
			break;
		case 22:
			uParam0->f_24 = 1130306/*func_3400*/;
			break;
		case 23:
			uParam0->f_26 = 1130259/*func_3399*/;
			break;
		case 24:
			uParam0->f_26 = 1130222/*func_3398*/;
			break;
		case 26:
			uParam0->f_38 = 1128811/*func_3385*/;
			break;
		case 25:
			uParam0->f_23 = 1128445/*func_3382*/;
			break;
		case 27:
			uParam0->f_25 = 1127631/*func_3378*/;
			break;
		case 28:
			uParam0->f_24 = 1127590/*func_3377*/;
			break;
		case 29:
			uParam0->f_28 = 1127355/*func_3373*/;
			break;
		case 30:
			uParam0->f_8 = 1127030/*func_3369*/;
			break;
		case 31:
			uParam0->f_39 = 1126836/*func_3368*/;
			break;
		case 43:
			uParam0->f_8 = 1126730/*func_3367*/;
			break;
		case 33:
			uParam0->f_40 = 1126414/*func_3366*/;
			break;
		case 34:
			uParam0->f_41 = 1121422/*func_3363*/;
			break;
		case 36:
			uParam0->f_58 = 1121365/*func_3362*/;
			break;
		case 35:
			uParam0->f_42 = 1115161/*func_3358*/;
			break;
		case 45:
			uParam0->f_14 = 1115152/*func_3357*/;
			break;
		case 46:
			uParam0->f_14 = 1115143/*func_3356*/;
			break;
		case 110:
			uParam0->f_57 = 1115135/*func_3355*/;
			break;
		case 77:
			uParam0->f_13 = 1115112/*func_3354*/;
			break;
		case 82:
			uParam0->f_19 = 1115099/*func_3353*/;
			break;
		case 47:
			uParam0->f_43 = 1114796/*func_3350*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1112561/*func_3344*/;
			break;
		case 49:
			uParam0->f_8 = 1112513/*func_3343*/;
			break;
		case 50:
			*uParam0 = 1112321/*func_3341*/;
			break;
		case 51:
			*uParam0 = 1112312/*func_3340*/;
			break;
		case 52:
			uParam0->f_15 = 1112301/*func_3339*/;
			break;
		case 53:
			uParam0->f_13 = 1112259/*func_3338*/;
			break;
		case 54:
			uParam0->f_45 = 1112251/*func_3337*/;
			break;
		case 56:
			uParam0->f_46 = 1112242/*func_3336*/;
			break;
		case 57:
			uParam0->f_11 = 1112233/*func_3335*/;
			break;
		case 58:
			uParam0->f_13 = 1112191/*func_3334*/;
			break;
		case 59:
			*uParam0 = 1112182/*func_3333*/;
			break;
		case 60:
			*uParam0 = 1112173/*func_3332*/;
			break;
		case 61:
			uParam0->f_15 = 1112162/*func_3331*/;
			break;
		case 62:
			uParam0->f_13 = 1112132/*func_3330*/;
			break;
		case 63:
			uParam0->f_11 = 1112123/*func_3329*/;
			break;
		case 64:
			uParam0->f_47 = 1112115/*func_3328*/;
			break;
		case 65:
			uParam0->f_21 = 1111029/*func_3325*/;
			break;
		case 66:
			uParam0->f_21 = 1110688/*func_3324*/;
			break;
		case 67:
			uParam0->f_21 = 1110574/*func_3323*/;
			break;
		case 68:
			*uParam0 = 1109746/*func_3322*/;
			break;
		case 69:
			*uParam0 = 1109737/*func_3321*/;
			break;
		case 70:
			uParam0->f_48 = 1109725/*func_3320*/;
			break;
		case 71:
			uParam0->f_49 = 1109633/*func_3319*/;
			break;
		case 107:
			uParam0->f_50 = 1109621/*func_3318*/;
			break;
		case 80:
			uParam0->f_7 = 1109433/*func_3317*/;
			break;
		case 84:
			uParam0->f_1 = 1109424/*func_3316*/;
			break;
		case 85:
			uParam0->f_1 = 1109410/*func_3315*/;
			break;
		case 87:
			uParam0->f_1 = 1109394/*func_3314*/;
			break;
		case 88:
			uParam0->f_1 = 1109385/*func_3313*/;
			break;
		case 89:
			uParam0->f_54 = 1109377/*func_3312*/;
			break;
		case 96:
			uParam0->f_1 = 1109368/*func_3311*/;
			break;
		case 97:
			uParam0->f_1 = 1108925/*func_3307*/;
			break;
		case 98:
			uParam0->f_1 = 1107463/*func_3297*/;
			break;
		case 100:
			uParam0->f_22 = 1106584/*func_3292*/;
			break;
		case 101:
			uParam0->f_22 = 1106407/*func_3289*/;
			break;
		case 112:
			uParam0->f_13 = 1106395/*func_3288*/;
			break;
		case 113:
			uParam0->f_3 = 1106381/*func_3287*/;
			break;
		case 114:
			uParam0->f_16 = 595599/*func_1796*/;
			break;
		case 117:
			uParam0->f_16 = 649054/*func_1999*/;
			break;
		case 118:
			uParam0->f_11 = 1106372/*func_3286*/;
			break;
		case 119:
			uParam0->f_27 = 1106271/*func_3282*/;
			break;
		case 120:
			uParam0->f_19 = 1106246/*func_3280*/;
			break;
		case 78:
			uParam0->f_59 = 1106074/*func_3278*/;
			break;
		case 125:
			uParam0->f_19 = 1106047/*func_3277*/;
			break;
	}
}

int func_3297(int iParam0, var uParam1)//Position - 0x10E607
{
	if (__LIB_4__::func_128(iParam0))
	{
		return func_3298(iParam0, uParam1);
	}
	return 1;
}

int func_3298(int iParam0, var uParam1)//Position - 0x10E624
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	char* sVar6;
	int iVar7;
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_1946250.f_4716.f_7, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_1946250.f_4716.f_7, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
		if (func_1340(&(uParam1->f_109.f_1[0]), iVar1, 1, 1) && __LIB_0__::func_121(uParam1->f_109.f_1[0]))
		{
			if (__LIB_0__::func_121(uParam1->f_109))
			{
				VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			}
			if (PED::IS_PED_MALE(uParam1->f_109.f_1[0]))
			{
				MISC::SET_BIT(&(uParam1->f_188), 4);
			}
		}
		else
		{
			return 0;
		}
		if (!__LIB_5__::func_539(&(uParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		uParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_4__::func_134(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_134());
		if (__LIB_0__::func_121(uParam1->f_176[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_176[0], true);
		}
		else
		{
			return 0;
		}
		iVar2 = __LIB_4__::func_133(-395939522);
		iVar3 = __LIB_4__::func_133(-401740561);
		if (!BitTest(uParam1->f_188, 5))
		{
			__LIB_4__::func_131(__LIB_4__::func_132(-395939522), iVar2);
			__LIB_4__::func_131(__LIB_4__::func_132(-401740561), iVar3);
			MISC::SET_BIT(&(uParam1->f_188), 5);
		}
		if (!__LIB_4__::func_130(&(uParam1->f_50), __LIB_4__::func_132(-395939522), -48f, iVar2))
		{
			return 0;
		}
		if (!__LIB_4__::func_130(&(uParam1->f_58), __LIB_4__::func_132(-401740561), 157f, iVar3))
		{
			return 0;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
		Var4 = { 925.9088f, 51.242f, 80.095f };
		Var5 = { 0f, 0f, 58f };
		sVar6 = __LIB_5__::func_266(uParam1, 6);
		iVar7 = 3500;
		__LIB_3__::func_900(&(Global_1946250.f_4073), iVar7, "valet exit", Var4, Var5, uParam1->f_3, sVar6, 1, 0, 0, 0, 2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_3315(var uParam0, var uParam1)//Position - 0x10EDA2
{
	return func_3190(uParam1);
}

void func_3382(int iParam0, int iParam1)//Position - 0x1137FD
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_154(iParam0) };
	if (__LIB_6__::func_649(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_1561(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_7__::func_317(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_317(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_624(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_624(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_3385(var uParam0, var uParam1)//Position - 0x11396B
{
	if (__LIB_6__::func_91(PLAYER::PLAYER_ID()) || __LIB_6__::func_99(PLAYER::PLAYER_ID()))
	{
		func_3386(uParam0, uParam1);
	}
}

void func_3386(var uParam0, var uParam1)//Position - 0x113997
{
	int iVar0;
	if (__LIB_3__::func_616() == 2 && __LIB_3__::func_785() != 1)
	{
		uParam1->f_1 = 1;
		if (func_3397(*uParam0, 0, 0))
		{
			__LIB_3__::func_664(0);
			__LIB_3__::func_784(1);
		}
		else
		{
			__LIB_5__::func_878(uParam1, 0);
			return;
		}
	}
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			func_3392(uParam0, uParam1);
			break;
		case 1:
			func_3388(uParam0, uParam1);
			break;
		case 2:
			__LIB_5__::func_877(*uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3388(var uParam0, var uParam1)//Position - 0x113A56
{
	bool bVar0;
	int iVar1[3];
	var uVar2[3];
	char* sVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	sVar3 = __LIB_4__::func_155();
	func_1561(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar6, &bVar7, 1, 0);
	iVar5 = 0;
	while (iVar5 < 3)
	{
		uVar2[iVar4] = __LIB_6__::func_455(iVar5);
		if (__LIB_3__::func_782(iVar5, bVar6, bVar7))
		{
			iVar1[iVar4] = iVar5;
			if (!bVar0 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar4 /*6*/]), uVar2[iVar4]))
			{
				bVar0 = true;
			}
			iVar4++;
		}
		else if (!bVar0)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar4 /*6*/]), uVar2[iVar4]))
			{
				bVar0 = true;
			}
		}
		iVar5++;
	}
	if (uParam0->f_5 || bVar0)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar3, sVar3);
		__LIB_5__::func_270();
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			__LIB_10__::func_18(iVar5, uVar2[iVar5], 0, 1, 0, 0, 0);
			iVar5++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 1;
		uParam1->f_11 = 10;
		__LIB_5__::func_457(5);
		__LIB_5__::func_462();
		if (iVar1[uParam0->f_4] != 0)
		{
			__LIB_8__::func_26(iVar1[uParam0->f_4]);
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_5__::func_462();
		if (__LIB_3__::func_616() == 2)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_3392(var uParam0, var uParam1)//Position - 0x113C57
{
	bool bVar0;
	var uVar1[2];
	var uVar2[2];
	var uVar3[2];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar4 = __LIB_4__::func_155();
	iVar6 = 0;
	while (iVar6 < 2)
	{
		uVar3[iVar6] = __LIB_4__::func_158(iVar6);
		uVar1[iVar6] = __LIB_4__::func_157(iVar6);
		uVar2[iVar6] = uVar1[iVar6];
		if (!bVar0 && (Global_23150.f_1616[iVar6] != uVar2[iVar6] || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar6 /*6*/]), uVar3[iVar6])))
		{
			bVar0 = true;
		}
		iVar5++;
		iVar6++;
	}
	if (!__LIB_6__::func_91(PLAYER::PLAYER_ID()) && __LIB_6__::func_99(PLAYER::PLAYER_ID()))
	{
		__LIB_5__::func_877(*uParam0, uParam1);
	}
	else if (uParam0->f_5 || bVar0)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar4, sVar4);
		__LIB_5__::func_270();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_10__::func_18(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		__LIB_1__::func_789(__LIB_4__::func_156(uVar1[iVar7], iVar7), 0, 0);
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (iVar7 == 0)
			{
				*uParam1 = 1;
				__LIB_3__::func_784(2);
			}
			else if (func_3397(*uParam0, 0, 0))
			{
				*uParam1 = 1;
				__LIB_3__::func_664(1);
				__LIB_3__::func_784(1);
			}
			else
			{
				__LIB_5__::func_878(uParam1, 1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

int func_3397(int iParam0, bool bParam1, bool bParam2)//Position - 0x113EBC
{
	int iVar0;
	int iVar1;
	func_1561(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, bParam2);
	if (bParam1)
	{
		return iVar1;
	}
	return (iVar0 || iVar1);
}

char* func_3406(var uParam0, var uParam1, var uParam2)//Position - 0x114178
{
	struct<3> Var0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (__LIB_5__::func_434())
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		if (Var0.f_2 < 105f)
		{
			if (__LIB_6__::func_91(PLAYER::PLAYER_ID()))
			{
				return "SI_ENTR_BLCK21A" /* GXT: You cannot enter the Penthouse Garage or Casino Parking Lot while on call. You can cancel this via the Quick Join app on the phone. */;
			}
			else
			{
				return "SI_ENTR_BLCK19A" /* GXT: You cannot enter the Parking Lot while on call. You can cancel this via the Quick Join app on the phone. */;
			}
		}
		else
		{
			return "SI_ENTR_BLCK20A" /* GXT: You cannot enter the Penthouse while on call. You can cancel this via the Quick Join app on the phone. */;
		}
	}
	if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
	{
		iVar1 = __LIB_5__::func_185(PLAYER::PLAYER_ID());
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
		{
			switch (iVar1)
			{
				case 192:
					return "CAS_APT_BLCK_A" /* GXT: You can't enter The Diamond Casino & Resort while resupplying another business. */;
				case 190:
					return "CAS_APT_BLCK_B" /* GXT: You can't enter The Diamond Casino & Resort while selling goods from another business. */;
				case 167:
					return "CAS_APT_BLCK_C" /* GXT: You can't enter The Diamond Casino & Resort while acquiring goods for a Warehouse. */;
				case 168:
					return "CAS_APT_BLCK_D" /* GXT: You can't enter The Diamond Casino & Resort while selling goods from a Warehouse. */;
				case 178:
					return "CAS_APT_BLCK_E" /* GXT: You can't enter The Diamond Casino & Resort while acquiring a vehicle for a Warehouse. */;
				case 188:
					return "CAS_APT_BLCK_F" /* GXT: You can't enter The Diamond Casino & Resort while selling vehicles from a Warehouse. */;
				case 225:
					return "CAS_APT_BLCK_G" /* GXT: You can't enter The Diamond Casino & Resort while acquiring goods for a Bunker. */;
				case 226:
					return "CAS_APT_BLCK_H" /* GXT: You can't enter The Diamond Casino & Resort while selling goods from a Bunker. */;
				case 229:
					return "CAS_APT_BLCK_I" /* GXT: You can't enter The Diamond Casino & Resort while acquiring goods for a Hangar. */;
				case 230:
					return "CAS_APT_BLCK_J" /* GXT: You can't enter The Diamond Casino & Resort while selling goods from a Hangar. */;
				case 237:
					return "CAS_APT_BLCK_O" /* GXT: You can't enter The Diamond Casino & Resort while selling goods from a Nightclub. */;
				case 243:
					if (__LIB_2__::func_106(PLAYER::PLAYER_ID()))
					{
						return "";
					}
					break;
				}
			}
	}
	if (__LIB_3__::func_695())
	{
		return "CAS_APT_BLCK_K" /* GXT: You can't enter The Diamond Casino & Resort with a prostitute. */;
	}
	if (__LIB_2__::func_906())
	{
		return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
	}
	if (__LIB_3__::func_694(PLAYER::PLAYER_ID()))
	{
		return "CAS_APT_BLCK_L" /* GXT: You can't access The Diamond Casino & Resort as the Beast. */;
	}
	if (__LIB_3__::func_693() && !__LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
		{
			return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
		}
	}
	if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()) && __LIB_6__::func_91(PLAYER::PLAYER_ID()))
	{
		return "CAS_APT_BLCK_M" /* GXT: You can't access The Diamond Casino & Resort whilst wearing the Ballistic Equipment. */;
	}
	if ((__LIB_6__::func_91(PLAYER::PLAYER_ID()) && __LIB_1__::func_17(PLAYER::PLAYER_ID())) && __LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
			{
				return "CAS_APT_BLCK_N" /* GXT: You can't enter The Diamond Casino & Resort while taking part in a Business Battle. */;
			}
		}
		else
		{
			return "CAS_APT_BLCK_N" /* GXT: You can't enter The Diamond Casino & Resort while taking part in a Business Battle. */;
		}
	}
	if (__LIB_6__::func_91(PLAYER::PLAYER_ID()) && !__LIB_5__::func_873(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar5 = __LIB_3__::func_392(iVar4, &uVar3, &uVar2);
			iVar6 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar4, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar6))
			{
				iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar6);
				if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
				{
					if (!__LIB_6__::func_279(PLAYER::PLAYER_ID()))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar4))
						{
							iVar8 = ENTITY::GET_ENTITY_ATTACHED_TO(iVar4);
							if ((__LIB_0__::func_121(iVar8) && !__LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar4))) && !__LIB_3__::func_690(iVar4))
							{
								return "PROP_BLOCK_TRAIL" /* GXT: Unable to enter garage. Please detach trailer. */;
							}
							else
							{
								return "CAS_APT_BLCK_Q" /* GXT: You can't enter The Diamond Casino & Resort with this vehicle. */;
							}
						}
						else if (__LIB_3__::func_690(iVar4))
						{
							return "CAS_APT_BLCK_R" /* GXT: You can't enter The Diamond Casino & Resort with the Mobile Operations Center. */;
						}
						else if ((((((__LIB_1__::func_589(iVar4) || __LIB_1__::func_819(ENTITY::GET_ENTITY_MODEL(iVar4))) || !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar4), 21)) || __LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar4))) || __LIB_1__::func_588(iVar4)) || __LIB_3__::func_689(iVar4)) || (__LIB_0__::func_872(iVar4, 1) && iVar5 != iVar7))
						{
							if (__LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar4)) && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar4))
							{
								return "";
							}
							else
							{
								return "CAS_APT_BLCK_Q" /* GXT: You can't enter The Diamond Casino & Resort with this vehicle. */;
							}
						}
						else if (__LIB_0__::func_121(iVar4) && ENTITY::GET_ENTITY_MODEL(iVar4) == joaat("rcbandito"))
						{
							return "CAS_APT_BLCK_T" /* GXT: You can't enter The Diamond Casino & Resort with the RC Bandito. */;
						}
					}
				}
			}
		}
	}
	return "";
}

int func_3407(var uParam0, var uParam1, var uParam2)//Position - 0x11451E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	*uParam2 = 0;
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_588(iVar2))
			{
				__LIB_7__::func_500(uParam1);
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
			{
				__LIB_7__::func_500(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_7__::func_500(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 21))
			{
				__LIB_7__::func_500(uParam1);
				return 0;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || PED::IS_PED_INJURED(iVar3))
			{
				__LIB_7__::func_500(uParam1);
				return 0;
			}
			bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
			if ((__LIB_0__::func_872(iVar2, 1) && __LIB_3__::func_251(iVar2) != bVar4) && !Global_1852994.f_171)
			{
				__LIB_7__::func_500(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_872(iVar2, 1) && __LIB_3__::func_251(iVar2) == bVar4) && __LIB_2__::func_734()) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1)) && !__LIB_3__::func_644(PLAYER::PLAYER_ID()))
			{
				__LIB_7__::func_500(uParam1);
				return 0;
			}
			if (__LIB_3__::func_689(iVar2))
			{
				__LIB_7__::func_500(uParam1);
				return 0;
			}
			if (__LIB_0__::func_870(iVar2, 1) && __LIB_3__::func_249(iVar2, 1, 0) != bVar4)
			{
				__LIB_7__::func_500(uParam1);
				return 0;
			}
			if (__LIB_2__::func_116(iVar2, 1))
			{
				__LIB_7__::func_500(uParam1);
				return 0;
			}
			if (__LIB_0__::func_871(iVar2, 1))
			{
				__LIB_7__::func_500(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_693(bVar4, 1, 1) && __LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 21)) && (__LIB_6__::func_91(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3)) || __LIB_6__::func_99(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3))))
			{
				if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_872(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_463() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if (!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
					{
						if (__LIB_5__::func_949(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1.5f)))
						{
							if (func_3415(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_627(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_864(&(uParam1->f_397)) && !__LIB_0__::func_937(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || (((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_5__::func_196(PLAYER::PLAYER_ID()) != -1) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 15))
								{
									if (__LIB_6__::func_293() || ((__LIB_3__::func_644(PLAYER::PLAYER_ID()) && __LIB_5__::func_196(PLAYER::PLAYER_ID()) != -1) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 15))
									{
										if ((__LIB_5__::func_949(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2))
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_5__::func_435(1, *uParam0);
											__LIB_6__::func_800(uParam1, 0);
											__LIB_7__::func_422(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 15)
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_7__::func_422(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_701(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
										{
											__LIB_5__::func_435(1, *uParam0);
											__LIB_6__::func_800(uParam1, 0);
											__LIB_7__::func_422(iVar2);
											return 1;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					__LIB_30__::func_744(*uParam0);
					bVar5 = __LIB_6__::func_73(bVar4) == uParam0->f_1;
					if (bVar5)
					{
						if (!__LIB_4__::func_160(uParam0->f_1))
						{
							bVar5 = false;
						}
					}
					else if (BitTest(Global_1946250.f_4523, 30))
					{
						bVar5 = true;
					}
					if (__LIB_3__::func_643(PLAYER::PLAYER_ID()) && bVar5)
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_3__::func_642();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_3__::func_122(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_5__::func_435(0, -1);
				}
				__LIB_6__::func_800(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (!bVar0)
		{
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_5__::func_435(0, -1);
	}
	__LIB_6__::func_800(uParam1, 1);
	return 0;
}

int func_3415(var uParam0, int iParam1, bool bParam2)//Position - 0x114E36
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1))
		{
			if (!__LIB_32__::func_599(iParam1, 125, &Var0, 0, 1, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_3455(var uParam0, int iParam1)//Position - 0x116389
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1168987/*func_3612*/;
			break;
		case 111:
			uParam0->f_35 = 1168978/*func_3611*/;
			break;
		case 1:
			uParam0->f_30 = 1168910/*func_3609*/;
			break;
		case 2:
			uParam0->f_31 = 1168561/*func_3606*/;
			break;
		case 3:
			uParam0->f_34 = 1168328/*func_3605*/;
			break;
		case 4:
			uParam0->f_12 = 1168315/*func_3604*/;
			break;
		case 6:
			uParam0->f_32 = 1168251/*func_3603*/;
			break;
		case 11:
			uParam0->f_11 = 1168242/*func_3602*/;
			break;
		case 12:
			uParam0->f_33 = 1167517/*func_3598*/;
			break;
		case 14:
			uParam0->f_11 = 1167508/*func_3597*/;
			break;
		case 109:
			uParam0->f_56 = 1166404/*func_3596*/;
			break;
		case 8:
			uParam0->f_37 = 1166396/*func_3595*/;
			break;
		case 7:
			uParam0->f_36 = 1166387/*func_3594*/;
			break;
		case 79:
			*uParam0 = 1166363/*func_3593*/;
			break;
		case 13:
			uParam0->f_2 = 1166291/*func_3592*/;
			break;
		case 15:
			uParam0->f_2 = 1166202/*func_3591*/;
			break;
		case 16:
			uParam0->f_5 = 1165842/*func_3590*/;
			break;
		case 108:
			uParam0->f_55 = 1165703/*func_3588*/;
			break;
		case 17:
			uParam0->f_17 = 1165030/*func_3587*/;
			break;
		case 19:
			uParam0->f_17 = 1165005/*func_3586*/;
			break;
		case 20:
			uParam0->f_3 = 1164996/*func_3585*/;
			break;
		case 21:
			uParam0->f_3 = 1164948/*func_3584*/;
			break;
		case 74:
			uParam0->f_53 = 1164893/*func_3583*/;
			break;
		case 75:
			uParam0->f_4 = 1164780/*func_3582*/;
			break;
		case 22:
			uParam0->f_24 = 1164772/*func_3581*/;
			break;
		case 23:
			uParam0->f_26 = 1164764/*func_3580*/;
			break;
		case 26:
			uParam0->f_38 = 1162204/*func_3564*/;
			break;
		case 25:
			uParam0->f_23 = 1162196/*func_3563*/;
			break;
		case 27:
			uParam0->f_25 = 1162188/*func_3562*/;
			break;
		case 28:
			uParam0->f_24 = 1162180/*func_3561*/;
			break;
		case 30:
			uParam0->f_8 = 1161899/*func_3560*/;
			break;
		case 31:
			uParam0->f_39 = 1161873/*func_3559*/;
			break;
		case 33:
			uParam0->f_40 = 1161804/*func_3558*/;
			break;
		case 76:
			uParam0->f_13 = 1161781/*func_3557*/;
			break;
		case 34:
			uParam0->f_41 = 1159227/*func_3554*/;
			break;
		case 36:
			uParam0->f_58 = 1159182/*func_3553*/;
			break;
		case 35:
			uParam0->f_42 = 1159086/*func_3552*/;
			break;
		case 45:
			uParam0->f_14 = 1159077/*func_3551*/;
			break;
		case 46:
			uParam0->f_14 = 1159068/*func_3550*/;
			break;
		case 110:
			uParam0->f_57 = 1159060/*func_3549*/;
			break;
		case 77:
			uParam0->f_13 = 1159049/*func_3548*/;
			break;
		case 47:
			uParam0->f_43 = 1158936/*func_3547*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1158089/*func_3546*/;
			break;
		case 49:
			uParam0->f_8 = 1158080/*func_3545*/;
			break;
		case 50:
			*uParam0 = 1157867/*func_3544*/;
			break;
		case 51:
			*uParam0 = 1157858/*func_3543*/;
			break;
		case 52:
			uParam0->f_15 = 1157847/*func_3542*/;
			break;
		case 53:
			uParam0->f_13 = 1157805/*func_3541*/;
			break;
		case 54:
			uParam0->f_45 = 1157766/*func_3540*/;
			break;
		case 56:
			uParam0->f_46 = 1157757/*func_3539*/;
			break;
		case 57:
			uParam0->f_11 = 1157715/*func_3537*/;
			break;
		case 58:
			uParam0->f_13 = 1157673/*func_3536*/;
			break;
		case 59:
			*uParam0 = 1157664/*func_3535*/;
			break;
		case 60:
			*uParam0 = 1157655/*func_3534*/;
			break;
		case 61:
			uParam0->f_15 = 1157644/*func_3533*/;
			break;
		case 62:
			uParam0->f_13 = 1157633/*func_3532*/;
			break;
		case 63:
			uParam0->f_11 = 1157624/*func_3531*/;
			break;
		case 64:
			uParam0->f_47 = 1157538/*func_3529*/;
			break;
		case 65:
			uParam0->f_21 = 1157530/*func_3528*/;
			break;
		case 66:
			uParam0->f_21 = 1157189/*func_3527*/;
			break;
		case 67:
			uParam0->f_21 = 1157119/*func_3526*/;
			break;
		case 68:
			*uParam0 = 1156422/*func_3525*/;
			break;
		case 69:
			*uParam0 = 1156413/*func_3524*/;
			break;
		case 70:
			uParam0->f_48 = 1156340/*func_3523*/;
			break;
		case 71:
			uParam0->f_49 = 1156331/*func_3522*/;
			break;
		case 107:
			uParam0->f_50 = 1156319/*func_3521*/;
			break;
		case 80:
			uParam0->f_7 = 1156310/*func_3520*/;
			break;
		case 84:
			uParam0->f_1 = 1155783/*func_3517*/;
			break;
		case 85:
			uParam0->f_1 = 1154227/*func_3514*/;
			break;
		case 87:
			uParam0->f_1 = 1150995/*func_3501*/;
			break;
		case 88:
			uParam0->f_1 = 1150980/*func_3500*/;
			break;
		case 89:
			uParam0->f_54 = 1150618/*func_3498*/;
			break;
		case 96:
			uParam0->f_1 = 1150256/*func_3494*/;
			break;
		case 97:
			uParam0->f_1 = 1149749/*func_3492*/;
			break;
		case 98:
			uParam0->f_1 = 1148115/*func_3490*/;
			break;
		case 100:
			uParam0->f_22 = 1147838/*func_3489*/;
			break;
		case 101:
			uParam0->f_22 = 1147363/*func_3487*/;
			break;
		case 112:
			uParam0->f_13 = 1147351/*func_3486*/;
			break;
		case 113:
			uParam0->f_3 = 1147342/*func_3485*/;
			break;
		case 114:
			uParam0->f_16 = 595599/*func_1796*/;
			break;
		case 115:
			uParam0->f_3 = 1147231/*func_3483*/;
			break;
		case 116:
			*uParam0 = 1147183/*func_3482*/;
			break;
		case 117:
			uParam0->f_16 = 649054/*func_1999*/;
			break;
		case 118:
			uParam0->f_11 = 1106372/*func_3286*/;
			break;
		case 119:
			uParam0->f_27 = 1106271/*func_3282*/;
			break;
		case 120:
			uParam0->f_19 = 1106246/*func_3280*/;
			break;
		case 78:
			uParam0->f_59 = 1147175/*func_3481*/;
			break;
		case 124:
			uParam0->f_1 = 1141173/*func_3457*/;
			break;
		case 125:
			uParam0->f_19 = 1141117/*func_3456*/;
			break;
	}
}

int func_3457(int iParam0, int* iParam1)//Position - 0x1169B5
{
	float fVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	var uVar5;
	if (!Global_2814119 || Global_2815059.f_6757)
	{
		if (iParam1->f_258 > 0)
		{
			__LIB_31__::func_57(iParam1);
		}
		return 0;
	}
	switch (iParam1->f_258)
	{
		case 0:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_6__::func_470(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 0, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, false, true))
				{
					__LIB_5__::func_457(0);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_6__::func_470(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 3, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_5__::func_457(3);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_6__::func_470(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 4, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_5__::func_457(4);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_6__::func_470(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 1, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_5__::func_457(1);
					__LIB_4__::func_181(iParam1, 1);
				}
			}
			break;
		case 1:
			if (__LIB_3__::func_616() == 0)
			{
				if (__LIB_6__::func_745(iParam0, iParam1))
				{
					__LIB_4__::func_180();
					__LIB_4__::func_181(iParam1, 2);
				}
			}
			else
			{
				__LIB_5__::func_548(iParam0, iParam1, __LIB_3__::func_616());
				__LIB_4__::func_181(iParam1, 2);
			}
			break;
		case 2:
			if (__LIB_3__::func_616() == 0)
			{
				if (func_3514(iParam0, iParam1))
				{
					__LIB_4__::func_178(&(Global_1946250.f_3638), 60);
					__LIB_4__::func_181(iParam1, 3);
				}
			}
			else if (func_3469(iParam1))
			{
				__LIB_4__::func_181(iParam1, 3);
			}
			break;
		case 3:
			if (__LIB_3__::func_616() == 0)
			{
				__LIB_10__::func_558(&(Global_1946250.f_3638), 0, 1);
				__LIB_7__::func_843(iParam0, iParam1);
				if (__LIB_3__::func_630(&(Global_1946250.f_3638), 0))
				{
					__LIB_32__::func_299(&iParam0);
					MISC::SET_BIT(&(Global_1946250.f_6), 26);
					__LIB_4__::func_181(iParam1, 4);
				}
			}
			else
			{
				__LIB_6__::func_741(iParam1);
				__LIB_32__::func_299(&iParam0);
				MISC::SET_BIT(&(Global_1946250.f_6), 26);
				__LIB_4__::func_181(iParam1, 4);
			}
			break;
		case 4:
			if (__LIB_3__::func_616() == 0)
			{
				if (!BitTest(*iParam1, 16))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam1->f_27) && __LIB_0__::func_121(iParam1->f_50))
					{
						fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam1->f_27);
						if (fVar0 > 0.55f)
						{
							CAM::DO_SCREEN_FADE_OUT(500);
							MISC::SET_BIT(iParam1, 16);
						}
					}
				}
				__LIB_10__::func_558(&(Global_1946250.f_3638), 0, 1);
				if (__LIB_7__::func_843(iParam0, iParam1) && BitTest(Global_1946250.f_6, 27))
				{
					__LIB_31__::func_57(iParam1);
				}
			}
			else if (__LIB_6__::func_741(iParam1) && BitTest(Global_1946250.f_6, 27))
			{
				__LIB_31__::func_57(iParam1);
			}
			break;
	}
	return 1;
}

int func_3469(int* iParam0)//Position - 0x1177E1
{
	STREAMING::REQUEST_ANIM_DICT(iParam0->f_3);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_3))
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_4))
	{
		STREAMING::REQUEST_ANIM_DICT(iParam0->f_4);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_4))
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_2))
	{
		func_2358(&(iParam0->f_2), PLAYER::PLAYER_ID(), 1, 1);
		return 0;
	}
	if ((__LIB_0__::func_121(iParam0->f_2) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam0->f_2)) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0->f_2))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_2, true, false);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_3490(int iParam0, var uParam1)//Position - 0x1184D3
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	if (__LIB_4__::func_128(iParam0))
	{
		return func_3298(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		if (Global_1946250.f_4539 == __LIB_0__::func_162())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_1", 0, 0, 64);
			}
		}
		else if (!PED::IS_PED_INJURED(uParam1->f_2))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam1->f_2, "MP_1", 0, 0, 64);
		}
		__LIB_5__::func_943(1, 1, 1, 0, 0, 0, 0);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true);
		CUTSCENE::START_CUTSCENE(0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, false);
		}
		MISC::SET_BIT(&(Global_1946250.f_6), 19);
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		return 1;
	}
	else
	{
		Var0 = { 1082.001f, 187.749f, -49.349f };
		Var1 = { 0f, 0f, -110.19f };
		sVar2 = "mini@strip_club@throwout_d@";
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
		{
			uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_Casino_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
			PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[0], 6, 0, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
		{
			uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_Y_Casino_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
			__LIB_4__::func_185(MISC::GET_RANDOM_INT_IN_RANGE(0, 6), &(uParam1->f_140[1]));
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
		{
			func_2358(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
			return 0;
		}
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
			{
				if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
				{
					return 0;
				}
			}
			iVar3++;
		}
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		Var0 = { Var0 + Vector(0f, 0.5f, 3f) };
		__LIB_3__::func_900(&(Global_1946250.f_4073), 5000, "Casino Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
		__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 262144, 0);
		uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
		if (__LIB_0__::func_121(uParam1->f_140[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 4, 0, 1000f, 0);
		}
		if (__LIB_0__::func_121(uParam1->f_140[1]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 4, 0, 1000f, 0);
		}
		if (__LIB_0__::func_121(uParam1->f_140[2]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 4, 0, 1000f, 0);
		}
	}
	return 1;
}

int func_3492(int iParam0, var uParam1)//Position - 0x118B35
{
	char* sVar0;
	bool bVar1;
	if (__LIB_4__::func_128(iParam0))
	{
		return __LIB_5__::func_974(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_2), 21);
		STREAMING::REQUEST_IPL("ch_cutscene_casino");
		if (Global_1946250.f_4539 != __LIB_0__::func_162())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
			{
				if (!func_3493(&(uParam1->f_2), Global_1946250.f_4539))
				{
					return 0;
				}
			}
		}
		if (!BitTest(uParam1->f_188, 1))
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_1", 0, 1);
				MISC::SET_BIT(&(uParam1->f_188), 1);
			}
		}
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			ENTITY::CREATE_MODEL_HIDE(959.0179f, 40.0682f, 116.2767f, 1f, joaat("hei_ch3_12_casinonew_penthouse"), false);
			return 1;
		}
		return 0;
	}
	else
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 27);
		sVar0 = "mini@strip_club@throwout_d@";
		bVar1 = true;
		STREAMING::REQUEST_ANIM_DICT(sVar0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			bVar1 = false;
		}
		STREAMING::REQUEST_MODEL(joaat("S_M_Y_Casino_01"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Casino_01")))
		{
			bVar1 = false;
		}
		if (!bVar1)
		{
			return 0;
		}
	}
	return 1;
}

int func_3493(var uParam0, int iParam1)//Position - 0x118C44
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iParam1)))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam1));
				iVar1 = 4;
				if (__LIB_0__::func_338(iParam1))
				{
					iVar1 = 5;
				}
				*uParam0 = PED::CREATE_PED(iVar1, iVar0, 962.5547f, 59.6398f, 111.553f, 180f, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
				PED::CLONE_PED_TO_TARGET(PLAYER::GET_PLAYER_PED(iParam1), *uParam0);
				if (__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_1352(*uParam0, 14, 0), -1))
				{
					PED::CLEAR_PED_PROP(*uParam0, 0);
				}
				if (__LIB_1__::func_102(*uParam0, 7))
				{
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_3514(int iParam0, int* iParam1)//Position - 0x119CB3
{
	var uVar0[25];
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	struct<3> Var10;
	char* sVar11;
	int iVar12;
	if (BitTest(iParam1->f_188, 12))
	{
		if (!func_1340(&(iParam1->f_140[0]), PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 0;
		}
		if (!__LIB_5__::func_539(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		if (!BitTest(iParam1->f_188, 5))
		{
			__LIB_4__::func_131(__LIB_4__::func_132(-1805228339), __LIB_4__::func_133(-1805228339));
			MISC::SET_BIT(&(iParam1->f_188), 5);
		}
		if (!__LIB_4__::func_130(&(iParam1->f_50), __LIB_4__::func_132(-1805228339), __LIB_4__::func_193(-1805228339), __LIB_4__::func_133(-1805228339)))
		{
			return 0;
		}
		iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar2]) && __LIB_0__::func_121(uVar0[iVar2])) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uVar0[iVar2])) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar2]) == __LIB_4__::func_136())
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uVar0[iVar2], false, false);
			}
			else
			{
				iVar2++;
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_133(-1805228339));
		Var3 = { __LIB_4__::func_132(-1805228339) };
		Var4 = { 0f, 0f, -122f };
		sVar5 = __LIB_4__::func_191(6);
		__LIB_3__::func_900(&(Global_1946250.f_3638), 12000, "valet intro", Var3, Var4, iParam1->f_3, sVar5, 1, 0, 0, 0, 2);
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (((__LIB_0__::func_121(iVar6) && __LIB_0__::func_872(iVar6, 0)) && __LIB_3__::func_251(iVar6) == PLAYER::PLAYER_ID()) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				MISC::SET_BIT(&(iParam1->f_188), 13);
				iParam1->f_135[0] = iVar6;
			}
			MISC::SET_BIT(&(iParam1->f_188), 14);
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar7 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			func_1370(&iVar7, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else
		{
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar7, -1, false);
			if (func_1340(&(iParam1->f_109.f_1[0]), iVar8, 1, 1) && __LIB_0__::func_121(iParam1->f_109.f_1[0]))
			{
				if (__LIB_0__::func_121(iParam1->f_109))
				{
					VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
				}
				if (PED::IS_PED_MALE(iParam1->f_109.f_1[0]))
				{
					MISC::SET_BIT(&(iParam1->f_188), 4);
				}
				if (iVar8 == PLAYER::PLAYER_PED_ID())
				{
					MISC::SET_BIT(&(iParam1->f_188), 11);
				}
			}
			else
			{
				return 0;
			}
		}
		if (!__LIB_5__::func_539(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		iParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_4__::func_134(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_134());
		if (__LIB_0__::func_121(iParam1->f_176[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_176[0], true);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam1->f_109), &(iParam1->f_189[0 /*3*/]), &(iParam1->f_189[1 /*3*/]));
		Var9 = { 925.9088f, 51.242f, 80.095f };
		Var10 = { 0f, 0f, 58f };
		sVar11 = __LIB_5__::func_550(iParam1, 6);
		iVar12 = __LIB_4__::func_192(__LIB_4__::func_189(iParam1));
		__LIB_3__::func_900(&(Global_1946250.f_3638), iVar12, "valet", Var9, Var10, iParam1->f_3, sVar11, 1, 0, 0, 0, 2);
	}
	else if (__LIB_3__::func_616() == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_2))
		{
			func_2358(&(iParam1->f_2), PLAYER::PLAYER_ID(), 1, 1);
			return 0;
		}
		if ((__LIB_0__::func_121(iParam1->f_2) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_2)) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_2))
		{
			ENTITY::CREATE_MODEL_HIDE(__LIB_4__::func_132(-1805228339), 0.1f, __LIB_4__::func_133(-1805228339), false);
			iParam1->f_50 = OBJECT::CREATE_OBJECT(__LIB_4__::func_133(-1805228339), __LIB_4__::func_132(-1805228339), false, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_50))
			{
				return 0;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_50, __LIB_4__::func_132(-1805228339), false, false, false);
				ENTITY::SET_ENTITY_ROTATION(iParam1->f_50, 0f, 0f, -122f, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_50, true);
				ENTITY::SET_ENTITY_COLLISION(iParam1->f_50, false, false);
			}
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_2, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_133(-1805228339));
			__LIB_6__::func_27(&(Global_1946250.f_3638), 4000, "Enter_Casino", 916.7877f, 63.0506f, 81.6854f, 0.3236f, 0f, -151.6214f, 35.7535f, 916.9896f, 62.7016f, 81.6876f, 0.3236f, 0f, -149.9406f, 34.8284f, 0.1f, 0, 0, 0, 0, 0);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_3564(var uParam0, var uParam1)//Position - 0x11BBDC
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	if (__LIB_3__::func_616() == 0 || __LIB_3__::func_616() == 2)
	{
		if (!__LIB_6__::func_93(PLAYER::PLAYER_ID()) || __LIB_3__::func_597())
		{
			if (!__LIB_3__::func_597())
			{
				if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
				{
					__LIB_8__::func_27(1, *uParam0);
				}
			}
			if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
			{
				__LIB_8__::func_27(1, *uParam0);
			}
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_5__::func_462();
			if (__LIB_3__::func_597())
			{
				uParam1->f_1 = 1;
			}
			return;
		}
	}
	if (__LIB_3__::func_597())
	{
		if ((__LIB_3__::func_616() == 3 || __LIB_3__::func_616() == 4) || __LIB_3__::func_616() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_1 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_5__::func_462();
			return;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_3568(uParam0, uParam1);
			break;
		case 4:
			__LIB_5__::func_882(*uParam0, uParam1);
			break;
		case 2:
		case 3:
		case 1:
		case 5:
			func_3565(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3565(var uParam0, var uParam1)//Position - 0x11BD1A
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5[3];
	var uVar6[3];
	char* sVar7;
	int iVar8;
	int iVar9;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	bVar0 = true;
	iVar1 = __LIB_3__::func_785();
	bVar0 = iVar1 != 5;
	func_1561(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar2, &bVar3, bVar0, 0);
	sVar7 = __LIB_4__::func_155();
	iVar9 = 0;
	while (iVar9 < 3)
	{
		uVar6[iVar8] = __LIB_6__::func_455(iVar9);
		if (__LIB_3__::func_782(iVar9, bVar2, bVar3))
		{
			iVar5[iVar8] = iVar9;
			if (!bVar4 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar8 /*6*/]), uVar6[iVar8]))
			{
				bVar4 = true;
			}
			iVar8++;
		}
		else if (!bVar4)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar8 /*6*/]), uVar6[iVar8]))
			{
				bVar4 = true;
			}
		}
		iVar9++;
	}
	if (uParam0->f_5 || bVar4)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar7, sVar7);
		__LIB_5__::func_270();
		iVar9 = 0;
		while (iVar9 < iVar8)
		{
			__LIB_10__::func_18(iVar9, uVar6[iVar9], 0, 1, 0, 0, 0);
			iVar9++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_3__::func_785() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			__LIB_5__::func_462();
			if ((__LIB_3__::func_616() == 1 || __LIB_3__::func_616() == 3) || __LIB_3__::func_616() == 4)
			{
				__LIB_4__::func_143();
			}
			else
			{
				uParam1->f_10 = 1;
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_8__::func_27(iVar5[uParam0->f_4], 123);
			}
		}
		else if (__LIB_3__::func_785() == 5)
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_5__::func_462();
			__LIB_4__::func_151(*uParam0, 146);
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_8__::func_27(iVar5[uParam0->f_4], 146);
			}
		}
		else
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_5__::func_462();
			__LIB_4__::func_151(*uParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
			if (__LIB_3__::func_785() == 3)
			{
				__LIB_4__::func_143();
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_8__::func_27(iVar5[uParam0->f_4], 124);
			}
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_5__::func_462();
	}
}

void func_3568(var uParam0, var uParam1)//Position - 0x11BFA6
{
	var uVar0;
	var uVar1[5];
	var uVar2[5];
	var uVar3[5];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar4 = __LIB_4__::func_155();
	if (__LIB_3__::func_616() == 0)
	{
		uVar0 = __LIB_7__::func_323(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	else
	{
		uVar0 = __LIB_7__::func_627(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	if (uParam0->f_5 || uVar0)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar4, sVar4);
		__LIB_5__::func_270();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_10__::func_18(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		if (__LIB_3__::func_616() == 0)
		{
			__LIB_1__::func_789(__LIB_4__::func_205(uVar1[iVar7], iVar7), 0, 0);
		}
		else
		{
			__LIB_1__::func_789(__LIB_5__::func_883(uVar1[iVar7], iVar7), 0, 0);
		}
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (__LIB_3__::func_616() == 0)
			{
				func_3570(*uParam0, iVar7, uParam1, uParam1);
			}
			else
			{
				func_3569(*uParam0, iVar7, uParam1, uParam1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_3569(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x11C0C7
{
	if (iParam1 == 0)
	{
		if (func_3397(iParam0, 0, 0))
		{
			__LIB_3__::func_784(1);
		}
		else
		{
			uParam3->f_8 = 1;
			uParam3->f_6 = 1;
			uParam3->f_11 = 10;
			uParam3->f_1 = 1;
			__LIB_4__::func_143();
		}
	}
	else if (iParam1 == 1)
	{
		__LIB_3__::func_664(0);
		if (func_3397(iParam0, 0, 0))
		{
			__LIB_3__::func_784(2);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
		}
	}
	else if (iParam1 == 4)
	{
		if (func_3397(iParam0, 1, 0))
		{
			__LIB_3__::func_784(5);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 146);
		}
	}
	else if (iParam1 == 3)
	{
		__LIB_3__::func_784(4);
		__LIB_4__::func_143();
	}
	else
	{
		__LIB_3__::func_664(1);
		if (func_3397(iParam0, 0, 0))
		{
			__LIB_3__::func_784(3);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
			__LIB_4__::func_143();
		}
	}
	*uParam2 = 1;
}

void func_3570(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x11C1CF
{
	if (iParam1 == 0)
	{
		if (func_3397(iParam0, 0, 0))
		{
			__LIB_3__::func_784(1);
			*uParam2 = 1;
		}
		else
		{
			uParam3->f_8 = 1;
			uParam3->f_6 = 1;
			uParam3->f_10 = 1;
			uParam3->f_1 = 1;
			uParam3->f_11 = 10;
		}
	}
	else if (iParam1 == 1)
	{
		__LIB_3__::func_664(0);
		if (func_3397(iParam0, 0, 0))
		{
			__LIB_3__::func_784(2);
			*uParam2 = 1;
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
		}
	}
}

char* func_3587(var uParam0, var uParam1, int iParam2)//Position - 0x11C6E6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	if (__LIB_5__::func_434())
	{
		return "SI_ENTR_BLCK22A" /* GXT: You cannot enter the Casino while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = __LIB_5__::func_185(PLAYER::PLAYER_ID());
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
		{
			switch (iVar0)
			{
				case 192:
					return "CAS_APT_BLCK_A" /* GXT: You can't enter The Diamond Casino & Resort while resupplying another business. */;
				case 190:
					return "CAS_APT_BLCK_B" /* GXT: You can't enter The Diamond Casino & Resort while selling goods from another business. */;
				case 167:
					return "CAS_APT_BLCK_C" /* GXT: You can't enter The Diamond Casino & Resort while acquiring goods for a Warehouse. */;
				case 168:
					return "CAS_APT_BLCK_D" /* GXT: You can't enter The Diamond Casino & Resort while selling goods from a Warehouse. */;
				case 178:
					return "CAS_APT_BLCK_E" /* GXT: You can't enter The Diamond Casino & Resort while acquiring a vehicle for a Warehouse. */;
				case 188:
					return "CAS_APT_BLCK_F" /* GXT: You can't enter The Diamond Casino & Resort while selling vehicles from a Warehouse. */;
				case 225:
					return "CAS_APT_BLCK_G" /* GXT: You can't enter The Diamond Casino & Resort while acquiring goods for a Bunker. */;
				case 226:
					return "CAS_APT_BLCK_H" /* GXT: You can't enter The Diamond Casino & Resort while selling goods from a Bunker. */;
				case 229:
					return "CAS_APT_BLCK_I" /* GXT: You can't enter The Diamond Casino & Resort while acquiring goods for a Hangar. */;
				case 230:
					return "CAS_APT_BLCK_J" /* GXT: You can't enter The Diamond Casino & Resort while selling goods from a Hangar. */;
				case 237:
					return "CAS_APT_BLCK_O" /* GXT: You can't enter The Diamond Casino & Resort while selling goods from a Nightclub. */;
				case 243:
					if (__LIB_2__::func_106(PLAYER::PLAYER_ID()))
					{
						return "";
					}
					break;
				}
			}
	}
	if (__LIB_3__::func_695())
	{
		return "CAS_APT_BLCK_K" /* GXT: You can't enter The Diamond Casino & Resort with a prostitute. */;
	}
	if (__LIB_2__::func_906())
	{
		return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
	}
	if (__LIB_3__::func_694(PLAYER::PLAYER_ID()))
	{
		return "CAS_APT_BLCK_L" /* GXT: You can't access The Diamond Casino & Resort as the Beast. */;
	}
	if (__LIB_3__::func_693() && !__LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
		{
			return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
		}
	}
	if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
	{
		return "CAS_APT_BLCK_M" /* GXT: You can't access The Diamond Casino & Resort whilst wearing the Ballistic Equipment. */;
	}
	if (__LIB_1__::func_17(PLAYER::PLAYER_ID()) && __LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
			{
				return "CAS_APT_BLCK_N" /* GXT: You can't enter The Diamond Casino & Resort while taking part in a Business Battle. */;
			}
		}
		else
		{
			return "CAS_APT_BLCK_N" /* GXT: You can't enter The Diamond Casino & Resort while taking part in a Business Battle. */;
		}
	}
	iVar1 = 1;
	if (((iParam2 == 0 || iParam2 == 1) || iParam2 == 3) || iParam2 == 4)
	{
		iVar1 = 0;
	}
	if (!__LIB_5__::func_873(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			bVar4 = false;
			if (__LIB_0__::func_121(iVar2))
			{
				bVar4 = ENTITY::GET_ENTITY_MODEL(iVar2) == joaat("rcbandito");
				if (bVar4)
				{
					iVar1 = 1;
				}
			}
			if (iVar1 && ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
				{
					if (!__LIB_6__::func_279(PLAYER::PLAYER_ID()))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
						{
							return "PROP_BLOCK_TRAIL" /* GXT: Unable to enter garage. Please detach trailer. */;
						}
						else if (__LIB_3__::func_690(iVar2))
						{
							return "CAS_APT_BLCK_R" /* GXT: You can't enter The Diamond Casino & Resort with the Mobile Operations Center. */;
						}
						else if (bVar4)
						{
							return "CAS_APT_BLCK_T" /* GXT: You can't enter The Diamond Casino & Resort with the RC Bandito. */;
						}
						else
						{
							return "CAS_APT_BLCK_Q" /* GXT: You can't enter The Diamond Casino & Resort with this vehicle. */;
						}
					}
				}
			}
		}
	}
	return "";
}

void func_3613(var uParam0, int iParam1)//Position - 0x11D664
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1204580/*func_3780*/;
			break;
		case 111:
			uParam0->f_35 = 1204566/*func_3779*/;
			break;
		case 1:
			uParam0->f_30 = 1204467/*func_3778*/;
			break;
		case 2:
			uParam0->f_31 = 1203407/*func_3774*/;
			break;
		case 3:
			uParam0->f_34 = 1203253/*func_3773*/;
			break;
		case 4:
			uParam0->f_12 = 1203201/*func_3771*/;
			break;
		case 5:
			uParam0->f_11 = 1203146/*func_3770*/;
			break;
		case 37:
			uParam0->f_18 = 1203030/*func_3769*/;
			break;
		case 38:
			uParam0->f_9 = 1202898/*func_3765*/;
			break;
		case 6:
			uParam0->f_32 = 1202783/*func_3764*/;
			break;
		case 11:
			uParam0->f_11 = 1202773/*func_3763*/;
			break;
		case 12:
			uParam0->f_33 = 1201604/*func_3758*/;
			break;
		case 14:
			uParam0->f_11 = 1201595/*func_3757*/;
			break;
		case 109:
			uParam0->f_56 = 1200283/*func_3756*/;
			break;
		case 8:
			uParam0->f_37 = 1200239/*func_3755*/;
			break;
		case 7:
			uParam0->f_36 = 1200216/*func_3754*/;
			break;
		case 79:
			*uParam0 = 1200192/*func_3753*/;
			break;
		case 13:
			uParam0->f_2 = 1200129/*func_3752*/;
			break;
		case 15:
			uParam0->f_2 = 1200049/*func_3751*/;
			break;
		case 16:
			uParam0->f_5 = 1199406/*func_3747*/;
			break;
		case 108:
			uParam0->f_55 = 1196266/*func_3734*/;
			break;
		case 17:
			uParam0->f_17 = 1195561/*func_3733*/;
			break;
		case 19:
			uParam0->f_17 = 1195536/*func_3732*/;
			break;
		case 20:
			uParam0->f_3 = 1195357/*func_3731*/;
			break;
		case 21:
			uParam0->f_3 = 1195293/*func_3730*/;
			break;
		case 74:
			uParam0->f_53 = 1195019/*func_3728*/;
			break;
		case 75:
			uParam0->f_4 = 1195003/*func_3727*/;
			break;
		case 22:
			uParam0->f_24 = 1194896/*func_3726*/;
			break;
		case 23:
			uParam0->f_26 = 1194849/*func_3725*/;
			break;
		case 24:
			uParam0->f_26 = 1194812/*func_3724*/;
			break;
		case 26:
			uParam0->f_38 = 1193982/*func_3717*/;
			break;
		case 25:
			uParam0->f_23 = 1193616/*func_3714*/;
			break;
		case 27:
			uParam0->f_25 = 1193234/*func_3712*/;
			break;
		case 28:
			uParam0->f_24 = 1193183/*func_3711*/;
			break;
		case 29:
			uParam0->f_28 = 1193175/*func_3710*/;
			break;
		case 30:
			uParam0->f_8 = 1192938/*func_3706*/;
			break;
		case 31:
			uParam0->f_39 = 1192820/*func_3705*/;
			break;
		case 33:
			uParam0->f_40 = 1192400/*func_3704*/;
			break;
		case 34:
			uParam0->f_41 = 1181107/*func_3690*/;
			break;
		case 36:
			uParam0->f_58 = 1181062/*func_3689*/;
			break;
		case 35:
			uParam0->f_42 = 1177974/*func_3686*/;
			break;
		case 45:
			uParam0->f_14 = 1177965/*func_3685*/;
			break;
		case 46:
			uParam0->f_14 = 1177956/*func_3684*/;
			break;
		case 110:
			uParam0->f_57 = 1177948/*func_3683*/;
			break;
		case 77:
			uParam0->f_13 = 1177899/*func_3682*/;
			break;
		case 47:
			uParam0->f_43 = 1177817/*func_3681*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1177053/*func_3674*/;
			break;
		case 49:
			uParam0->f_8 = 1177006/*func_3673*/;
			break;
		case 50:
			*uParam0 = 1176947/*func_3672*/;
			break;
		case 51:
			*uParam0 = 1176715/*func_3669*/;
			break;
		case 52:
			uParam0->f_15 = 1176704/*func_3668*/;
			break;
		case 53:
			uParam0->f_13 = 1176662/*func_3667*/;
			break;
		case 54:
			uParam0->f_45 = 1176654/*func_3666*/;
			break;
		case 56:
			uParam0->f_46 = 1176645/*func_3665*/;
			break;
		case 57:
			uParam0->f_11 = 1176636/*func_3664*/;
			break;
		case 58:
			uParam0->f_13 = 1176594/*func_3663*/;
			break;
		case 59:
			*uParam0 = 1176585/*func_3662*/;
			break;
		case 60:
			*uParam0 = 1176576/*func_3661*/;
			break;
		case 61:
			uParam0->f_15 = 1176565/*func_3660*/;
			break;
		case 62:
			uParam0->f_13 = 1176523/*func_3659*/;
			break;
		case 63:
			uParam0->f_11 = 1176514/*func_3658*/;
			break;
		case 64:
			uParam0->f_47 = 1176506/*func_3657*/;
			break;
		case 65:
			uParam0->f_21 = 1175444/*func_3654*/;
			break;
		case 66:
			uParam0->f_21 = 1175141/*func_3653*/;
			break;
		case 67:
			uParam0->f_21 = 1175027/*func_3652*/;
			break;
		case 68:
			*uParam0 = 1174184/*func_3651*/;
			break;
		case 69:
			*uParam0 = 1174175/*func_3650*/;
			break;
		case 70:
			uParam0->f_48 = 1174102/*func_3649*/;
			break;
		case 71:
			uParam0->f_49 = 1174093/*func_3648*/;
			break;
		case 107:
			uParam0->f_50 = 1174081/*func_3647*/;
			break;
		case 80:
			uParam0->f_7 = 1173879/*func_3646*/;
			break;
		case 84:
			uParam0->f_1 = 1173870/*func_3645*/;
			break;
		case 85:
			uParam0->f_1 = 1172137/*func_3632*/;
			break;
		case 87:
			uParam0->f_1 = 1170684/*func_3624*/;
			break;
		case 88:
			uParam0->f_1 = 1170675/*func_3623*/;
			break;
		case 89:
			uParam0->f_54 = 1170667/*func_3622*/;
			break;
		case 96:
			uParam0->f_1 = 1170658/*func_3621*/;
			break;
		case 97:
			uParam0->f_1 = 1170649/*func_3620*/;
			break;
		case 98:
			uParam0->f_1 = 1170640/*func_3619*/;
			break;
		case 100:
			uParam0->f_22 = 1170632/*func_3618*/;
			break;
		case 101:
			uParam0->f_22 = 1170624/*func_3617*/;
			break;
		case 78:
			uParam0->f_59 = 1170452/*func_3615*/;
			break;
		case 125:
			uParam0->f_19 = 1170419/*func_3614*/;
			break;
	}
}

int func_3632(int iParam0, var uParam1)//Position - 0x11E2A9
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (__LIB_4__::func_977())
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1370(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1339(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[2 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		Var1 = { __LIB_4__::func_229(iParam0, __LIB_3__::func_616()) };
		Var2 = { __LIB_4__::func_228(iParam0, __LIB_3__::func_616()) };
		uVar3 = __LIB_4__::func_225(iParam0, __LIB_3__::func_616());
		Var4 = { __LIB_4__::func_227(iParam0, __LIB_3__::func_616()) };
		Var5 = { __LIB_4__::func_226(iParam0, __LIB_3__::func_616()) };
		uVar6 = __LIB_4__::func_225(iParam0, __LIB_3__::func_616());
		Var7 = { __LIB_4__::func_224(iParam0, __LIB_3__::func_616()) };
		Var8 = { __LIB_4__::func_223(iParam0, __LIB_3__::func_616()) };
		uVar9 = __LIB_4__::func_220(iParam0, __LIB_3__::func_616());
		Var10 = { __LIB_4__::func_222(iParam0, __LIB_3__::func_616()) };
		Var11 = { __LIB_4__::func_221(iParam0, __LIB_3__::func_616()) };
		uVar12 = __LIB_4__::func_220(iParam0, __LIB_3__::func_616());
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[2 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 5);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 5);
		}
		return __LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var2, uVar3, Var4, Var5, uVar6, bVar13, Var7, Var8, uVar9, Var10, Var11, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_3714(int iParam0, int iParam1)//Position - 0x123690
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_252(iParam0) };
	if (__LIB_6__::func_658(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_1561(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_7__::func_325(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_325(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_628(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_628(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_3717(var uParam0, var uParam1)//Position - 0x1237FE
{
	if (__LIB_6__::func_87(PLAYER::PLAYER_ID()))
	{
		func_3718(uParam0, uParam1);
	}
}

void func_3718(var uParam0, var uParam1)//Position - 0x12381C
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_15__::func_656(uParam0, uParam1);
			break;
		case 1:
			func_3719(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3719(var uParam0, var uParam1)//Position - 0x123856
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_1561(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_251())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_251())
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			__LIB_1__::func_767("ARENA_ENT_T" /* GXT: ARENA WORKSHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_5__::func_462();
		}
	}
}

char* func_3733(int iParam0, var uParam1, var uParam2)//Position - 0x123E29
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (__LIB_5__::func_434())
	{
		return "SI_ENTR_BLCK2A" /* GXT: You cannot enter the Arena Workshop while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	iVar0 = __LIB_4__::func_236(iParam0);
	if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
	{
		iVar1 = __LIB_5__::func_185(PLAYER::PLAYER_ID());
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
		{
			switch (iVar1)
			{
				case 192:
					return "ARENA_WS_BLCK_A" /* GXT: You can't enter this Arena Workshop while resupplying another business. */;
				case 190:
					return "ARENA_WS_BLCK_B" /* GXT: You can't enter this Arena Workshop while selling goods from another business. */;
				case 167:
					return "ARENA_WS_BLCK_C" /* GXT: You can't enter this Arena Workshop while acquiring goods for a warehouse. */;
				case 168:
					return "ARENA_WS_BLCK_D" /* GXT: You can't enter this Arena Workshop while selling goods from a warehouse. */;
				case 178:
					return "ARENA_WS_BLCK_E" /* GXT: You can't enter this Arena Workshop while acquiring a vehicle for a warehouse. */;
				case 188:
					return "ARENA_WS_BLCK_F" /* GXT: You can't enter this Arena Workshop while selling vehicles from a warehouse. */;
				case 225:
					return "ARENA_WS_BLCK_G" /* GXT: You can't enter this Arena Workshop while acquiring goods for a bunker. */;
				case 226:
					return "ARENA_WS_BLCK_H" /* GXT: You can't enter this Arena Workshop while selling goods from a bunker. */;
				case 229:
					return "ARENA_WS_BLCK_I" /* GXT: You can't enter this Arena Workshop while acquiring goods for a hangar. */;
				case 230:
					return "ARENA_WS_BLCK_J" /* GXT: You can't enter this Arena Workshop while selling goods from a hangar. */;
				case 237:
					return "ARENA_WS_BLCK_O" /* GXT: You can't enter this Arena Workshop while selling goods from a Nightclub. */;
				case 243:
					return "ARENA_WS_BLCK_S" /* GXT: You can't enter the Arena Workshop while on a job for the Casino Manager. */;
				}
			}
		default:
	}
	if (__LIB_3__::func_695())
	{
		return "ARENA_WS_BLCK_K" /* GXT: You cannot enter your Arena Workshop with a prostitute. */;
	}
	if (__LIB_2__::func_906())
	{
		return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
	}
	if (__LIB_3__::func_694(PLAYER::PLAYER_ID()))
	{
		return "ARENA_WS_BLCK_L" /* GXT: You can't access your Arena Workshop as the Beast. */;
	}
	if (__LIB_3__::func_693() && !__LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
	}
	if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()) && __LIB_6__::func_100(PLAYER::PLAYER_ID(), iVar0))
	{
		return "ARENA_WS_BLCK_M" /* GXT: You can't access this Arena Workshop whilst wearing the Ballistic Equipment. */;
	}
	if ((__LIB_6__::func_100(PLAYER::PLAYER_ID(), iVar0) && __LIB_1__::func_17(PLAYER::PLAYER_ID())) && __LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
			{
				return "ARENA_WS_BLCK_N" /* GXT: You can't enter this Arena Workshop while taking part in a Business Battle. */;
			}
		}
		else
		{
			return "ARENA_WS_BLCK_N" /* GXT: You can't enter this Arena Workshop while taking part in a Business Battle. */;
		}
	}
	if (__LIB_6__::func_100(PLAYER::PLAYER_ID(), iVar0) && !__LIB_5__::func_873(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar5 = __LIB_3__::func_392(iVar4, &uVar3, &uVar2);
			iVar6 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar4, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar6))
			{
				iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar6);
				if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
				{
					if (!__LIB_6__::func_279(PLAYER::PLAYER_ID()))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar4))
						{
							return "PROP_BLOCK_TRAIL" /* GXT: Unable to enter garage. Please detach trailer. */;
						}
						else if (__LIB_3__::func_690(iVar4))
						{
							return "ARENA_WS_BLCK_R" /* GXT: You cannot enter the Arena Workshop with the Mobile Operations Center. */;
						}
						else if ((((((__LIB_1__::func_589(iVar4) || __LIB_1__::func_819(ENTITY::GET_ENTITY_MODEL(iVar4))) || !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar4), 18)) || __LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar4))) || __LIB_1__::func_588(iVar4)) || __LIB_3__::func_689(iVar4)) || (__LIB_0__::func_872(iVar4, 1) && iVar5 != iVar7))
						{
							return "ARENA_WS_BLCK_Q" /* GXT: You cannot enter the Arena Workshop with this vehicle. */;
						}
					}
				}
			}
		}
	}
	return "";
}

int func_3734(var uParam0, var uParam1, var uParam2)//Position - 0x1240EA
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	*uParam2 = 0;
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar3 = __LIB_4__::func_236(*uParam0);
			if (__LIB_1__::func_588(iVar2))
			{
				__LIB_7__::func_503(uParam1);
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
			{
				__LIB_7__::func_503(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_7__::func_503(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 18))
			{
				__LIB_7__::func_503(uParam1);
				return 0;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4) || PED::IS_PED_INJURED(iVar4))
			{
				__LIB_7__::func_503(uParam1);
				return 0;
			}
			bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
			if ((__LIB_0__::func_872(iVar2, 1) && __LIB_3__::func_251(iVar2) != bVar5) && !Global_1852994.f_171)
			{
				__LIB_7__::func_503(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_872(iVar2, 1) && __LIB_3__::func_251(iVar2) == bVar5) && __LIB_2__::func_734()) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1)) && !__LIB_3__::func_644(PLAYER::PLAYER_ID()))
			{
				__LIB_7__::func_503(uParam1);
				return 0;
			}
			if (__LIB_3__::func_689(iVar2))
			{
				__LIB_7__::func_503(uParam1);
				return 0;
			}
			if (__LIB_0__::func_870(iVar2, 1) && __LIB_3__::func_249(iVar2, 1, 0) != bVar5)
			{
				__LIB_7__::func_503(uParam1);
				return 0;
			}
			if (__LIB_2__::func_116(iVar2, 1))
			{
				__LIB_7__::func_503(uParam1);
				return 0;
			}
			if (__LIB_0__::func_871(iVar2, 1))
			{
				__LIB_7__::func_503(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_693(bVar5, 1, 1) && __LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 18)) && __LIB_6__::func_100(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4), iVar3))
			{
				if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_872(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_463() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if (!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
					{
						if (__LIB_5__::func_980(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1f)))
						{
							if (func_3742(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_627(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_864(&(uParam1->f_397)) && !__LIB_0__::func_937(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 13))
								{
									if (__LIB_6__::func_293() || (__LIB_3__::func_644(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 13))
									{
										if ((__LIB_5__::func_980(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2))
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_5__::func_435(1, *uParam0);
											__LIB_6__::func_802(uParam1, 0);
											__LIB_7__::func_422(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 13)
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_7__::func_422(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_701(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
										{
											__LIB_5__::func_435(1, *uParam0);
											__LIB_6__::func_802(uParam1, 0);
											__LIB_7__::func_422(iVar2);
											return 1;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					__LIB_30__::func_745(*uParam0);
					bVar6 = __LIB_6__::func_73(bVar5) == uParam0->f_1;
					if (bVar6)
					{
						if (!__LIB_4__::func_257(uParam0->f_1))
						{
							bVar6 = false;
						}
					}
					else if (BitTest(Global_1946250.f_4523, 30))
					{
						bVar6 = true;
					}
					if (__LIB_3__::func_643(PLAYER::PLAYER_ID()) && bVar6)
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_3__::func_642();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_3__::func_122(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_5__::func_435(0, -1);
				}
				__LIB_6__::func_802(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (!bVar0)
		{
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_5__::func_435(0, -1);
	}
	__LIB_6__::func_802(uParam1, 1);
	return 0;
}

int func_3742(var uParam0, int iParam1, bool bParam2)//Position - 0x124994
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "ARENA_ENT_T" /* GXT: ARENA WORKSHOP */))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1))
		{
			if (!__LIB_32__::func_599(iParam1, 122, &Var0, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_3781(var uParam0, int iParam1)//Position - 0x12616D
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1295785/*func_3918*/;
			break;
		case 1:
			uParam0->f_30 = 1295729/*func_3917*/;
			break;
		case 2:
			uParam0->f_31 = 1295385/*func_3916*/;
			break;
		case 3:
			uParam0->f_34 = 1295346/*func_3915*/;
			break;
		case 4:
			uParam0->f_12 = 1295312/*func_3914*/;
			break;
		case 5:
			uParam0->f_11 = 1295301/*func_3913*/;
			break;
		case 6:
			uParam0->f_32 = 1295237/*func_3912*/;
			break;
		case 111:
			uParam0->f_35 = 1295214/*func_3911*/;
			break;
		case 79:
			*uParam0 = 1295190/*func_3910*/;
			break;
		case 37:
			uParam0->f_18 = 1295074/*func_3909*/;
			break;
		case 38:
			uParam0->f_9 = 1294995/*func_3908*/;
			break;
		case 11:
			uParam0->f_11 = 1294986/*func_3907*/;
			break;
		case 12:
			uParam0->f_33 = 1294390/*func_3904*/;
			break;
		case 109:
			uParam0->f_56 = 1294382/*func_3903*/;
			break;
		case 15:
			uParam0->f_2 = 1289218/*func_3879*/;
			break;
		case 13:
			uParam0->f_2 = 1289209/*func_3878*/;
			break;
		case 75:
			uParam0->f_4 = 1289194/*func_3877*/;
			break;
		case 16:
			uParam0->f_5 = 1288719/*func_3873*/;
			break;
		case 108:
			uParam0->f_55 = 1284748/*func_3857*/;
			break;
		case 17:
			uParam0->f_17 = 1283971/*func_3856*/;
			break;
		case 19:
			uParam0->f_17 = 1283946/*func_3855*/;
			break;
		case 20:
			uParam0->f_3 = 1283735/*func_3854*/;
			break;
		case 21:
			uParam0->f_3 = 1283572/*func_3853*/;
			break;
		case 74:
			uParam0->f_53 = 1282963/*func_3850*/;
			break;
		case 22:
			uParam0->f_24 = 1282878/*func_3849*/;
			break;
		case 25:
			uParam0->f_23 = 1281962/*func_3846*/;
			break;
		case 30:
			uParam0->f_8 = 1280988/*func_3840*/;
			break;
		case 31:
			uParam0->f_39 = 1280315/*func_3836*/;
			break;
		case 33:
			uParam0->f_40 = 1279472/*func_3834*/;
			break;
		case 14:
			uParam0->f_11 = 1279463/*func_3833*/;
			break;
		case 34:
			uParam0->f_41 = 1278688/*func_3830*/;
			break;
		case 36:
			uParam0->f_58 = 1278635/*func_3829*/;
			break;
		case 35:
			uParam0->f_42 = 1210148/*func_3817*/;
			break;
		case 45:
			uParam0->f_14 = 1210139/*func_3816*/;
			break;
		case 46:
			uParam0->f_14 = 1210130/*func_3815*/;
			break;
		case 110:
			uParam0->f_57 = 1210122/*func_3814*/;
			break;
		case 77:
			uParam0->f_13 = 1210099/*func_3813*/;
			break;
		case 47:
			uParam0->f_43 = 1209959/*func_3812*/;
			break;
		case 49:
			uParam0->f_8 = 1209924/*func_3811*/;
			break;
		case 50:
			*uParam0 = 1209886/*func_3810*/;
			break;
		case 51:
			*uParam0 = 1209862/*func_3809*/;
			break;
		case 52:
			uParam0->f_15 = 1209851/*func_3808*/;
			break;
		case 53:
			uParam0->f_13 = 1209772/*func_3807*/;
			break;
		case 54:
			uParam0->f_45 = 1209764/*func_3806*/;
			break;
		case 56:
			uParam0->f_46 = 1209755/*func_3805*/;
			break;
		case 57:
			uParam0->f_11 = 1209745/*func_3804*/;
			break;
		case 58:
			uParam0->f_13 = 1209456/*func_3803*/;
			break;
		case 64:
			uParam0->f_47 = 1208056/*func_3797*/;
			break;
		case 65:
			uParam0->f_21 = 1207093/*func_3794*/;
			break;
		case 66:
			uParam0->f_21 = 1206898/*func_3793*/;
			break;
		case 67:
			uParam0->f_21 = 1206795/*func_3792*/;
			break;
		case 68:
			*uParam0 = 1206106/*func_3791*/;
			break;
		case 69:
			*uParam0 = 1206097/*func_3790*/;
			break;
		case 70:
			uParam0->f_48 = 1206085/*func_3789*/;
			break;
		case 71:
			uParam0->f_49 = 1206076/*func_3788*/;
			break;
		case 107:
			uParam0->f_50 = 1206064/*func_3787*/;
			break;
		case 80:
			uParam0->f_7 = 1205727/*func_3785*/;
			break;
		case 73:
			uParam0->f_51 = 1205718/*func_3784*/;
			break;
		case 78:
			uParam0->f_59 = 1205601/*func_3782*/;
			break;
	}
}

void func_3797(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x126EF8
{
	int iVar0;
	iVar0 = __LIB_31__::func_578();
	if (!__LIB_2__::func_732(PLAYER::PLAYER_ID(), 0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!__LIB_6__::func_58(__LIB_3__::func_249(iVar0, 1, 0)))
			{
				func_3798(uParam0, iVar0);
			}
		}
	}
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (__LIB_0__::func_1("BB_TRUCK_SUTAR" /* GXT: You are unable to access the Nerve Center in this area. Move the Terrorbyte to a suitable area. */))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_3__::func_684(PLAYER::PLAYER_PED_ID(), 1))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_363(uParam0->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_3__::func_122(&(uParam0->f_22.f_94));
			}
		}
	}
}

void func_3798(var uParam0, int iParam1)//Position - 0x126FC2
{
	struct<3> Var0;
	float* fVar1;
	float* fVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	if (__LIB_0__::func_864(&uLocal_103))
	{
		if (__LIB_0__::func_937(&uLocal_103, 1000, 0) && !__LIB_0__::func_937(&uLocal_103, 2000, 0))
		{
			return;
		}
		else if (__LIB_0__::func_937(&uLocal_103, 2000, 0))
		{
			__LIB_0__::func_794(&uLocal_103);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (ENTITY::GET_ENTITY_SPEED(iParam1) > 1f)
		{
			return;
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, false))
			{
				return;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!__LIB_0__::func_864(&uLocal_103))
			{
				__LIB_0__::func_795(&uLocal_103, 0, 0);
			}
			if (!BitTest(uParam0->f_22, 2))
			{
				Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_HEADING(iParam1), 2.4f, 1f, 0.4f) };
				Var3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_HEADING(iParam1), 2.4f, -1f, 0.4f) };
				__LIB_3__::func_937(iParam1, Var0, &fVar1);
				__LIB_3__::func_937(iParam1, Var3, &fVar2);
				iVar5 = __LIB_36__::func_250(iParam1);
				iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar6, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar6, false);
				}
				if ((ENTITY::DOES_ENTITY_EXIST(iVar4) && !ENTITY::IS_ENTITY_DEAD(iVar4, false)) && !VEHICLE::IS_VEHICLE_MODEL(iVar4, joaat("terbyte")))
				{
					uParam0->f_22.f_107 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var0, Var3, 1f, 81, iVar4, 4);
				}
				else
				{
					uParam0->f_22.f_107 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var0, Var3, 1f, 83, iParam1, 4);
				}
				if (uParam0->f_22.f_107 != 0)
				{
					MISC::SET_BIT(&(uParam0->f_22), 2);
				}
			}
			else
			{
				iVar11 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_22.f_107, &iVar7, &uVar8, &uVar9, &uVar10);
				if (iVar11 == 2)
				{
					if (iVar7 == 0)
					{
						MISC::CLEAR_BIT(&Global_1946250, 19);
						uParam0->f_22.f_107 = 0;
						MISC::CLEAR_BIT(&(uParam0->f_22), 2);
					}
					else
					{
						uParam0->f_22.f_107 = 0;
						MISC::SET_BIT(&Global_1946250, 19);
						MISC::CLEAR_BIT(&(uParam0->f_22), 2);
					}
				}
				else if (iVar11 == 0)
				{
					MISC::CLEAR_BIT(&(uParam0->f_22), 2);
					uParam0->f_22.f_107 = 0;
				}
			}
		}
	}
}

void func_3846(int iParam0, int iParam1)//Position - 0x138FAA
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_42__::func_156(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14))
						{
							bVar1 = true;
						}
						if ((!bVar1 && __LIB_6__::func_804(PLAYER::PLAYER_ID())) && __LIB_3__::func_234(bVar7, PLAYER::PLAYER_ID()))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						__LIB_42__::func_154(iParam0, -1);
					}
					bVar9 = __LIB_6__::func_58(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_42__::func_154(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_36__::func_253(1);
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_2__::func_752(PLAYER::PLAYER_ID()))
						{
							func_3847(iParam0);
						}
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_36__::func_253(1);
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_2__::func_752(PLAYER::PLAYER_ID()))
						{
							func_3847(iParam0);
						}
					}
					Jump @693; //curOff = 674
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3847(int iParam0)//Position - 0x139262
{
	__LIB_42__::func_154(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

char* func_3856(var uParam0, var uParam1, var uParam2)//Position - 0x139783
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_1__::func_717())
	{
		return "";
	}
	if (__LIB_5__::func_434())
	{
		return "SI_ENTR_BLCK13A" /* GXT: You cannot enter the Nerve Center while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	if (BitTest(Global_1946250.f_4523, 12))
	{
		if (__LIB_6__::func_90(PLAYER::PLAYER_ID(), 240))
		{
			return "CAS_BLOCK_HAC" /* GXT: You cannot enter the rear of the Terrorbyte while holding the security case. */;
		}
	}
	if (__LIB_2__::func_606())
	{
		if (__LIB_6__::func_90(PLAYER::PLAYER_ID(), 242))
		{
			return "BAN_BLOCK_HAC" /* GXT: You cannot enter the rear of the Terrorbyte while holding the gold. */;
		}
		else if (__LIB_6__::func_90(PLAYER::PLAYER_ID(), 241))
		{
			return "JEW_BLOCK_HAC" /* GXT: You cannot enter the rear of the Terrorbyte while holding the diamonds. */;
		}
		else if (__LIB_6__::func_90(PLAYER::PLAYER_ID(), 240))
		{
			return "CAS_BLOCK_HAC" /* GXT: You cannot enter the rear of the Terrorbyte while holding the security case. */;
		}
		else if (__LIB_6__::func_90(PLAYER::PLAYER_ID(), 239))
		{
			return "VAN_BLOCK_HAC" /* GXT: You cannot enter the rear of the Terrorbyte while holding the antiques. */;
		}
	}
	iVar0 = __LIB_36__::func_250(0);
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) && PLAYER::PLAYER_ID() == iVar0)
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if ((!__LIB_0__::func_870(iVar1, 1) && !VEHICLE::IS_VEHICLE_MODEL(iVar1, joaat("caddy2"))) && !VEHICLE::IS_VEHICLE_MODEL(iVar1, joaat("caddy3")))
		{
			if (__LIB_0__::func_872(iVar1, 1))
			{
			}
		}
	}
	if (BitTest(Global_1946250.f_506, 0))
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			bVar2 = __LIB_0__::func_797();
			if (__LIB_6__::func_371(PLAYER::PLAYER_ID(), 0))
			{
				return "BB_TRUCK_KICKd" /* GXT: You no longer have access to the Nerve Center as you became a Prospect. */;
			}
			else if (bVar2 != __LIB_0__::func_162() && __LIB_3__::func_673(bVar2))
			{
				return "BB_TRUCK_KICKa" /* GXT: You no longer have access to the Nerve Center as you became an Associate. */;
			}
			else
			{
				return "BB_TRUCK_KICKb" /* GXT: You no longer have access to the Nerve Center as you became a Bodyguard. */;
			}
		}
	}
	if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()) && (PLAYER::PLAYER_ID() == iVar0 || __LIB_0__::func_797() == iVar0))
	{
		return "HAC_BLOCK_MOC" /* GXT: You can't access this Nerve Center whilst wearing the Ballistic Equipment. */;
	}
	if (__LIB_2__::func_906())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor2")))
		{
		}
		else
		{
			return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
		}
	}
	if (__LIB_3__::func_693() && !__LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor2")))
		{
		}
		else
		{
			return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
		}
	}
	if (__LIB_3__::func_695())
	{
		return "HAC_MC_BLOCK_P" /* GXT: You cannot enter your Nerve Center with a prostitute. */;
	}
	if (__LIB_1__::func_613(PLAYER::PLAYER_ID()) == 3)
	{
		return "SUP_BLOCK_HAC" /* GXT: You can't access this Nerve Center whilst carrying Supplies. */;
	}
	if (__LIB_1__::func_17(PLAYER::PLAYER_ID()) || __LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor2")))
		{
		}
		else
		{
			return "HACK_MC_BLOCK_E" /* GXT: You cannot enter your Nerve Center while active in a mission. */;
		}
	}
	if (Global_1835493 != 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("terbyte")) && !__LIB_0__::func_872(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
			{
				return "HAC_MC_BLOCK_V" /* GXT: You cannot enter your Nerve Center while in a mission vehicle. */;
			}
		}
	}
	if (BitTest(Global_1946250.f_2, 30))
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!__LIB_3__::func_684(PLAYER::PLAYER_PED_ID(), 1) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				return "BB_TRUCK_SUTAR" /* GXT: You are unable to access the Nerve Center in this area. Move the Terrorbyte to a suitable area. */;
			}
		}
	}
	return "";
}

int func_3857(var uParam0, var uParam1, var uParam2)//Position - 0x139A8C
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	*uParam2 = 1;
	if ((!__LIB_0__::func_893() || __LIB_3__::func_558()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_6__::func_803(uParam1, 1);
	}
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_3__::func_122(&(uParam1->f_22.f_94));
			}
			__LIB_6__::func_803(uParam1, 1);
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_588(iVar2))
			{
				__LIB_7__::func_506(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_7__::func_506(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 15))
			{
				__LIB_7__::func_506(uParam1);
				return 0;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || PED::IS_PED_INJURED(iVar3))
			{
				__LIB_7__::func_506(uParam1);
				return 0;
			}
			bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
			if (!__LIB_0__::func_872(iVar2, 1))
			{
				__LIB_7__::func_506(uParam1);
				if (__LIB_5__::func_983(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
					{
						__LIB_0__::func_151("MP_TRU_PERSV" /* GXT: You can only drive your Oppressor Mk II into the Nerve Center. */, -1);
					}
				}
				return 0;
			}
			if ((__LIB_0__::func_872(iVar2, 1) && __LIB_3__::func_251(iVar2) != bVar4) && !Global_1852994.f_171)
			{
				__LIB_7__::func_506(uParam1);
				if (__LIB_5__::func_983(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
					{
						__LIB_0__::func_151("MP_TRU_PERSV" /* GXT: You can only drive your Oppressor Mk II into the Nerve Center. */, -1);
					}
				}
				return 0;
			}
			if ((((__LIB_0__::func_872(iVar2, 1) && __LIB_3__::func_251(iVar2) == bVar4) && __LIB_2__::func_734()) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1)) && !__LIB_3__::func_644(PLAYER::PLAYER_ID()))
			{
				__LIB_7__::func_506(uParam1);
				return 0;
			}
			if (__LIB_3__::func_689(iVar2))
			{
				__LIB_7__::func_506(uParam1);
				return 0;
			}
			if (__LIB_0__::func_870(iVar2, 1) && __LIB_3__::func_249(iVar2, 1, 0) != bVar4)
			{
				__LIB_7__::func_506(uParam1);
				return 0;
			}
			if (__LIB_2__::func_116(iVar2, 1))
			{
				__LIB_7__::func_506(uParam1);
				return 0;
			}
			if (__LIB_0__::func_871(iVar2, 1))
			{
				__LIB_7__::func_506(uParam1);
				return 0;
			}
			if (__LIB_5__::func_570())
			{
				__LIB_7__::func_506(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_693(bVar4, 1, 1) && __LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 15)) && __LIB_6__::func_102(bVar4))
			{
				if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_872(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_463() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if ((!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373)) && !__LIB_2__::func_159(0))
					{
						if (__LIB_5__::func_983(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)))
						{
							if (func_3866(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_627(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_864(&(uParam1->f_397)) && !__LIB_0__::func_937(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 12))
								{
									if (__LIB_6__::func_293() || (__LIB_3__::func_644(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 12))
									{
										if ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 12)
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_7__::func_422(iVar2);
											return 1;
										}
										else
										{
											if ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_4__::func_291(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0, 1075838976, 0)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
											{
												bVar0 = true;
												if (uParam1->f_22.f_94 == -1)
												{
													__LIB_5__::func_569(&(uParam1->f_22.f_94), 5, "HACKER_ENTER0" /* GXT: Press ~INPUT_CONTEXT~ to enter the Nerve Center with current vehicle. */, 0, 0, 0, 0);
												}
											}
											if ((__LIB_5__::func_983(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && (__LIB_3__::func_113(uParam1->f_22.f_94, 1) && !HUD::IS_WARNING_MESSAGE_ACTIVE())) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
											{
												__LIB_3__::func_122(&(uParam1->f_22.f_94));
												__LIB_5__::func_435(1, *uParam0);
												__LIB_6__::func_803(uParam1, 0);
												__LIB_7__::func_422(iVar2);
												return 1;
											}
										}
									}
								}
							}
							else
							{
								if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
								{
									HUD::CLEAR_HELP(true);
									__LIB_3__::func_122(&(uParam1->f_22.f_94));
								}
								__LIB_6__::func_803(uParam1, 1);
							}
						}
					}
				}
				else
				{
					func_3858(*uParam0);
					if (__LIB_3__::func_643(PLAYER::PLAYER_ID()))
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_3__::func_642();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_3__::func_122(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_5__::func_435(0, -1);
				}
				__LIB_6__::func_803(uParam1, 1);
				return 0;
			}
		}
		else if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
		{
			HUD::CLEAR_HELP(true);
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	else if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
	{
		HUD::CLEAR_HELP(true);
		__LIB_3__::func_122(&(uParam1->f_22.f_94));
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (!bVar0)
		{
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_5__::func_435(0, -1);
	}
	__LIB_6__::func_803(uParam1, 1);
	return 0;
}

void func_3858(int iParam0)//Position - 0x13A0AA
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_5__::func_195(PLAYER::PLAYER_ID()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_0__::func_695(iVar0))
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
				if (!PED::IS_PED_INJURED(iVar1))
				{
					if (PED::IS_PED_A_PLAYER(iVar1))
					{
						bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
						if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_693(bVar2, 1, 1))
						{
							if (BitTest(Global_2689235[bVar2 /*453*/].f_318, 5) && __LIB_0__::func_172(__LIB_5__::func_196(bVar2)) == 12)
							{
								if (func_3859(iParam0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									}
									if (__LIB_3__::func_643(PLAYER::PLAYER_ID()))
									{
										__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
								}
								else
								{
									if (!BitTest(Global_2689235[bVar2 /*453*/].f_318.f_1, 31) && !BitTest(Global_2689235[bVar2 /*453*/].f_318.f_3, 2))
									{
										__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 256, 0);
									}
									else
									{
										__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
									__LIB_3__::func_699();
									__LIB_3__::func_641(1);
									return;
								}
							}
						}
					}
				}
			}
		}
	}
	if (__LIB_3__::func_643(PLAYER::PLAYER_ID()))
	{
		__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
		__LIB_3__::func_642();
		__LIB_3__::func_641(0);
	}
}

int func_3859(int iParam0)//Position - 0x13A20F
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_3879(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_3866(var uParam0, int iParam1, bool bParam2)//Position - 0x13A668
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "HUB_VEH_TITLE" /* GXT: NIGHTCLUB GARAGE */))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (!__LIB_3__::func_958())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1))
		{
			if (!__LIB_32__::func_599(iParam1, 119, &Var0, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_3879(int iParam0)//Position - 0x13AC02
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<3> Var4;
	struct<3> Var5;
	if (__LIB_4__::func_279() || __LIB_4__::func_293(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!__LIB_11__::func_948(1))
	{
		return 1;
	}
	bVar0 = false;
	iVar1 = __LIB_31__::func_578();
	iVar2 = __LIB_3__::func_249(iVar1, 1, 0);
	bVar3 = false;
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_4__::func_279()) || __LIB_4__::func_278(PLAYER::PLAYER_ID()))
	{
		if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_0__::func_870(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1)) || __LIB_4__::func_279()) || __LIB_4__::func_278(PLAYER::PLAYER_ID()))
		{
			bVar3 = true;
		}
	}
	if (__LIB_15__::func_667(bVar0, 12))
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523, 12))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (ENTITY::IS_ENTITY_DEAD(iVar1, false) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if ((!ENTITY::IS_ENTITY_VISIBLE(iVar1) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		if ((ENTITY::GET_ENTITY_SPEED(iVar1) > 0.5f && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
		{
			__LIB_5__::func_498(0, iParam0, 0);
			return 1;
		}
	}
	if (__LIB_3__::func_695())
	{
		return 1;
	}
	if (__LIB_0__::func_983())
	{
		return 1;
	}
	if (((((BitTest(Global_1946250, 19) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !__LIB_6__::func_58(iVar2)) && (__LIB_0__::func_121(iVar1) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar1, true)))
	{
		if (!__LIB_6__::func_58(iVar2) && !__LIB_2__::func_752(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1946250.f_2, 30))
			{
				MISC::SET_BIT(&(Global_1946250.f_2), 30);
			}
		}
		return 1;
	}
	if (__LIB_4__::func_306(iVar2) || __LIB_4__::func_305(iVar2))
	{
		return 1;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false)) && !bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar1) || ENTITY::IS_ENTITY_UPSIDEDOWN(iVar1))
		{
			if (!BitTest(Global_1946250.f_2, 30))
			{
				MISC::SET_BIT(&(Global_1946250.f_2), 30);
			}
			return 1;
		}
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false)) && !bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar1))
		{
			if (!BitTest(Global_1946250.f_2, 30))
			{
				MISC::SET_BIT(&(Global_1946250.f_2), 30);
			}
			return 1;
		}
	}
	__LIB_36__::func_255(iParam0, &Var4);
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() == iVar2)
		{
			return 1;
		}
	}
	if (__LIB_4__::func_304(iVar2))
	{
		return 1;
	}
	if (__LIB_5__::func_574(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_5__::func_573(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_5__::func_572(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_4__::func_299(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_4__::func_298(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_4__::func_297(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_6__::func_664(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_6__::func_484(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_640()))
		{
			if (__LIB_0__::func_724(__LIB_1__::func_640(), Var4, 1) < 1.5f)
			{
				return 1;
			}
		}
	}
	if (__LIB_1__::func_510(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_5__::func_570())
	{
		return 1;
	}
	if (__LIB_4__::func_295(iVar2))
	{
		return 1;
	}
	if (__LIB_6__::func_58(iVar2) || __LIB_4__::func_287(iVar2))
	{
		if (!__LIB_4__::func_902(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		else if (__LIB_5__::func_434())
		{
			return 1;
		}
	}
	if (iVar2 != __LIB_0__::func_162() && iVar2 != PLAYER::PLAYER_ID())
	{
		if (__LIB_4__::func_282(iVar2))
		{
			return 1;
		}
	}
	if (iVar2 != __LIB_0__::func_162())
	{
		if (__LIB_4__::func_286(iVar2))
		{
			return 1;
		}
		if (BitTest(Global_2689235[iVar2 /*453*/].f_318.f_1, 23))
		{
			return 1;
		}
	}
	if ((NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_1__::func_17(PLAYER::PLAYER_ID()) || __LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 1;
	}
	if (Global_2815059.f_317 && !__LIB_2__::func_752(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_965())
	{
		return 1;
	}
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false)) && !__LIB_6__::func_58(iVar2)) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
	{
		Var5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, 0f, -8.1f, 0f) };
		if (MISC::ABSF((Var5.f_2 - Var4.f_2)) > 4f)
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
			return 1;
		}
	}
	if (__LIB_4__::func_294(Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_6__::func_322())
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_1__::func_848(iVar2))
	{
		return 1;
	}
	if (Global_2787784)
	{
		return 1;
	}
	if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 == 8 && __LIB_1__::func_736()) && !__LIB_0__::func_626())
	{
		return 1;
	}
	if (__LIB_1__::func_583(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_728(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (__LIB_36__::func_254(Var4))
	{
		if (!__LIB_6__::func_58(iVar2) && !__LIB_2__::func_752(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1946250.f_2, 30))
			{
				MISC::SET_BIT(&(Global_1946250.f_2), 30);
			}
		}
		return 1;
	}
	if (__LIB_1__::func_512())
	{
		return 1;
	}
	if (__LIB_3__::func_171(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_172(__LIB_3__::func_248(PLAYER::PLAYER_ID())) != 12)
		{
		}
	}
	if (__LIB_2__::func_906())
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_2, 13))
	{
		return 1;
	}
	if (__LIB_3__::func_963())
	{
		return 1;
	}
	if (__LIB_0__::func_77(0))
	{
		return 1;
	}
	if (Global_2815059.f_317 && !__LIB_2__::func_752(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_4__::func_283(iVar2))
	{
		return 1;
	}
	if (Global_1835491)
	{
		return 1;
	}
	if (__LIB_3__::func_962(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_0__::func_1("MBSOT_POST3" /* GXT: Press ~INPUT_CONTEXT~ to place the poster. */))
	{
		return 1;
	}
	if (Global_2789734)
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_2, 30))
	{
		if (__LIB_0__::func_1("BB_TRUCK_SUTAR" /* GXT: You are unable to access the Nerve Center in this area. Move the Terrorbyte to a suitable area. */))
		{
			HUD::CLEAR_HELP(true);
		}
		MISC::CLEAR_BIT(&(Global_1946250.f_2), 30);
	}
	return 0;
}

void func_3919(var uParam0, int iParam1)//Position - 0x13C5B2
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1358390/*func_4138*/;
			break;
		case 1:
			uParam0->f_30 = 1358150/*func_4136*/;
			break;
		case 2:
			uParam0->f_31 = 1355851/*func_4130*/;
			break;
		case 3:
			uParam0->f_34 = 1355642/*func_4129*/;
			break;
		case 4:
			uParam0->f_12 = 1355437/*func_4127*/;
			break;
		case 5:
			uParam0->f_11 = 1355359/*func_4126*/;
			break;
		case 37:
			uParam0->f_18 = 1355221/*func_4125*/;
			break;
		case 38:
			uParam0->f_9 = 1355165/*func_4124*/;
			break;
		case 42:
			uParam0->f_10 = 1355004/*func_4121*/;
			break;
		case 6:
			uParam0->f_32 = 1354768/*func_4120*/;
			break;
		case 111:
			uParam0->f_35 = 1354754/*func_4119*/;
			break;
		case 11:
			uParam0->f_11 = 1354745/*func_4118*/;
			break;
		case 12:
			uParam0->f_33 = 1351375/*func_4109*/;
			break;
		case 14:
			uParam0->f_11 = 1351366/*func_4108*/;
			break;
		case 109:
			uParam0->f_56 = 1337709/*func_4107*/;
			break;
		case 79:
			*uParam0 = 1337453/*func_4103*/;
			break;
		case 13:
			uParam0->f_2 = 1337404/*func_4102*/;
			break;
		case 15:
			uParam0->f_2 = 1337193/*func_4099*/;
			break;
		case 44:
			*uParam0 = 1337184/*func_4098*/;
			break;
		case 75:
			uParam0->f_4 = 1337155/*func_4097*/;
			break;
		case 16:
			uParam0->f_5 = 1336428/*func_4094*/;
			break;
		case 108:
			uParam0->f_55 = 1332573/*func_4081*/;
			break;
		case 17:
			uParam0->f_17 = 1331259/*func_4077*/;
			break;
		case 19:
			uParam0->f_17 = 1331215/*func_4076*/;
			break;
		case 20:
			uParam0->f_3 = 1331050/*func_4075*/;
			break;
		case 21:
			uParam0->f_3 = 1330986/*func_4074*/;
			break;
		case 74:
			uParam0->f_53 = 1330759/*func_4073*/;
			break;
		case 22:
			uParam0->f_24 = 1330632/*func_4072*/;
			break;
		case 26:
			uParam0->f_38 = 1327249/*func_4046*/;
			break;
		case 25:
			uParam0->f_23 = 1326926/*func_4044*/;
			break;
		case 27:
			uParam0->f_25 = 1325834/*func_4036*/;
			break;
		case 28:
			uParam0->f_24 = 1325721/*func_4035*/;
			break;
		case 29:
			uParam0->f_28 = 1325640/*func_4034*/;
			break;
		case 30:
			uParam0->f_8 = 1324750/*func_4032*/;
			break;
		case 31:
			uParam0->f_39 = 1324206/*func_4030*/;
			break;
		case 33:
			uParam0->f_40 = 1323524/*func_4028*/;
			break;
		case 32:
			*uParam0 = 1323431/*func_4026*/;
			break;
		case 34:
			uParam0->f_41 = 1314165/*func_4011*/;
			break;
		case 36:
			uParam0->f_58 = 1314107/*func_4010*/;
			break;
		case 35:
			uParam0->f_42 = 1211017/*func_3820*/;
			break;
		case 45:
			uParam0->f_14 = 1314098/*func_4009*/;
			break;
		case 46:
			uParam0->f_14 = 1314089/*func_4008*/;
			break;
		case 110:
			uParam0->f_57 = 1314081/*func_4007*/;
			break;
		case 77:
			uParam0->f_13 = 1314032/*func_4006*/;
			break;
		case 47:
			uParam0->f_43 = 1313740/*func_4005*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1311076/*func_3990*/;
			break;
		case 49:
			uParam0->f_8 = 1310972/*func_3989*/;
			break;
		case 50:
			*uParam0 = 1310688/*func_3988*/;
			break;
		case 51:
			*uParam0 = 1310526/*func_3987*/;
			break;
		case 52:
			uParam0->f_15 = 1310515/*func_3986*/;
			break;
		case 53:
			uParam0->f_13 = 1310257/*func_3985*/;
			break;
		case 54:
			uParam0->f_45 = 1309995/*func_3984*/;
			break;
		case 56:
			uParam0->f_46 = 1309986/*func_3983*/;
			break;
		case 57:
			uParam0->f_11 = 1308829/*func_3976*/;
			break;
		case 58:
			uParam0->f_13 = 1308571/*func_3975*/;
			break;
		case 59:
			*uParam0 = 1308292/*func_3972*/;
			break;
		case 60:
			*uParam0 = 1308283/*func_3971*/;
			break;
		case 61:
			uParam0->f_15 = 1308272/*func_3970*/;
			break;
		case 62:
			uParam0->f_13 = 1308014/*func_3969*/;
			break;
		case 55:
			uParam0->f_45 = 1308006/*func_3968*/;
			break;
		case 63:
			uParam0->f_11 = 1307948/*func_3967*/;
			break;
		case 64:
			uParam0->f_47 = 1307798/*func_3966*/;
			break;
		case 65:
			uParam0->f_21 = 1306093/*func_3959*/;
			break;
		case 66:
			uParam0->f_21 = 1305782/*func_3958*/;
			break;
		case 67:
			uParam0->f_21 = 1305630/*func_3957*/;
			break;
		case 68:
			*uParam0 = 1304670/*func_3955*/;
			break;
		case 69:
			*uParam0 = 1304661/*func_3954*/;
			break;
		case 70:
			uParam0->f_48 = 1304212/*func_3953*/;
			break;
		case 71:
			uParam0->f_49 = 1303933/*func_3952*/;
			break;
		case 107:
			uParam0->f_50 = 1303921/*func_3951*/;
			break;
		case 80:
			uParam0->f_7 = 1303688/*func_3950*/;
			break;
		case 84:
			uParam0->f_1 = 1303679/*func_3949*/;
			break;
		case 85:
			uParam0->f_1 = 1301584/*func_3940*/;
			break;
		case 87:
			uParam0->f_1 = 1298689/*func_3931*/;
			break;
		case 88:
			uParam0->f_1 = 1298680/*func_3930*/;
			break;
		case 89:
			uParam0->f_54 = 1298672/*func_3929*/;
			break;
		case 96:
			uParam0->f_1 = 1298646/*func_3928*/;
			break;
		case 97:
			uParam0->f_1 = 1298536/*func_3927*/;
			break;
		case 98:
			uParam0->f_1 = 1297819/*func_3926*/;
			break;
		case 100:
			uParam0->f_22 = 1297657/*func_3925*/;
			break;
		case 101:
			uParam0->f_22 = 1297529/*func_3924*/;
			break;
		case 78:
			uParam0->f_59 = 1297239/*func_3921*/;
			break;
		case 125:
			uParam0->f_19 = 1297215/*func_3920*/;
			break;
	}
}

int func_3926(var uParam0, var uParam1)//Position - 0x13CD9B
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	Var0 = { -1560.336f, -3019.0583f, -74.8061f };
	Var1 = { 0f, 0f, -30f };
	sVar2 = "mini@strip_club@throwout_d@";
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
	{
		uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_ClubBar_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
	{
		uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_M_Bouncer_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[1]);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 11, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 8, 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
	{
		func_2358(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
			{
				return 0;
			}
		}
		iVar3++;
	}
	MISC::SET_BIT(&(Global_1946250.f_2), 20);
	Var0 = { Var0 + Vector(0f, 4f, 0f) };
	__LIB_3__::func_900(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 262144, 0);
	uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	if (__LIB_0__::func_121(uParam1->f_140[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[2]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 0, 0, 1000f, 0);
	}
	return 1;
}

int func_3940(int iParam0, var uParam1)//Position - 0x13DC50
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	bool bVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	iVar0 = __LIB_4__::func_322(iParam0);
	if (__LIB_4__::func_980(iVar0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1370(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1339(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		Var2 = { __LIB_4__::func_329(iVar0) };
		Var3 = { __LIB_4__::func_328(iVar0) };
		fVar4 = __LIB_4__::func_327(iVar0);
		fVar5 = __LIB_4__::func_326(iVar0);
		bVar6 = false;
		Var7 = { __LIB_4__::func_325(iVar0) };
		Var8 = { __LIB_4__::func_324(iVar0) };
		fVar9 = __LIB_4__::func_323(iVar0);
		return __LIB_6__::func_423(&(Global_1946250.f_3638), Var2, Var3, fVar4, fVar5, bVar6, Var7, Var8, fVar9);
	}
	return 1;
}

void func_4044(int iParam0, int iParam1)//Position - 0x143F4E
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_301(iParam0) };
	if (__LIB_6__::func_669(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_1561(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_7__::func_509(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_509(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_8__::func_32(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_8__::func_32(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_4046(var uParam0, var uParam1)//Position - 0x144091
{
	if (__LIB_3__::func_616() == 2)
	{
		func_4060(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 0)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_8__::func_33(uParam0, uParam1);
		}
		else
		{
			func_4048(uParam0, uParam1);
		}
	}
	else if (__LIB_3__::func_616() == 3)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_8__::func_33(uParam0, uParam1);
		}
		else
		{
			__LIB_4__::func_376(uParam1);
		}
	}
}

void func_4048(var uParam0, var uParam1)//Position - 0x14411C
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_15__::func_657(uParam0, uParam1);
			break;
		case 1:
			func_4049(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_4049(var uParam0, var uParam1)//Position - 0x144156
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_1561(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, __LIB_6__::func_665(PLAYER::PLAYER_ID()), 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_375())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_375())
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_3__::func_616() == 2)
			{
				__LIB_1__::func_767("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_767("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_5__::func_462();
		}
	}
}

void func_4060(var uParam0, var uParam1)//Position - 0x144673
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_15__::func_658(uParam0, uParam1);
			break;
		case 1:
			func_4069(uParam0, uParam1);
			break;
		case 2:
			__LIB_31__::func_593(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_4069(var uParam0, var uParam1)//Position - 0x144B22
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_1561(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_5__::func_462();
		if (__LIB_7__::func_996(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_3__::func_616() == 2)
			{
				__LIB_1__::func_767("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_767("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_7__::func_509(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

char* func_4077(int iParam0, var uParam1, int iParam2)//Position - 0x14503B
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (__LIB_5__::func_434())
	{
		if (iParam2 == 0 || iParam2 == 1)
		{
			return "SI_ENTR_BLCK11A" /* GXT: You cannot enter the Nightclub Warehouse while on call. You can cancel this via the Quick Join app on the phone. */;
		}
		else
		{
			return "SI_ENTR_BLCK12A" /* GXT: You cannot enter the Nightclub while on call. You can cancel this via the Quick Join app on the phone. */;
		}
	}
	iVar0 = __LIB_4__::func_322(iParam0);
	bVar1 = __LIB_0__::func_797();
	if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
	{
		iVar2 = __LIB_5__::func_185(PLAYER::PLAYER_ID());
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
		{
			if (iParam2 == 2 || iParam2 == 3)
			{
				switch (iVar2)
				{
					case 192:
						return "CLUB_BLOCK_A" /* GXT: You can't enter this Nightclub while resupplying another business. */;
					case 190:
						return "CLUB_BLOCK_B" /* GXT: You can't enter this Nightclub while selling goods from another business. */;
					case 167:
						return "CLUB_BLOCK_C" /* GXT: You can't enter this Nightclub while acquiring goods for a warehouse. */;
					case 168:
						return "CLUB_BLOCK_D" /* GXT: You can't enter this Nightclub while selling goods from a warehouse. */;
					case 178:
						return "CLUB_BLOCK_E" /* GXT: You can't enter this Nightclub while acquiring a vehicle for a warehouse. */;
					case 188:
						return "CLUB_BLOCK_F" /* GXT: You can't enter this Nightclub while selling vehicles from a warehouse. */;
					case 225:
						return "CLUB_BLOCK_G" /* GXT: You can't enter this Nightclub while acquiring goods for a bunker. */;
					case 226:
						return "CLUB_BLOCK_H" /* GXT: You can't enter this Nightclub while selling goods from a bunker. */;
					case 229:
						return "CLUB_BLOCK_I" /* GXT: You can't enter this Nightclub while acquiring goods for a hangar. */;
					case 230:
						return "CLUB_BLOCK_J" /* GXT: You can't enter this Nightclub while selling goods from a hangar. */;
					default:
				}
			}
			else
			{
				switch (iVar2)
				{
					case 192:
						return "HUB_BLOCK_A" /* GXT: You can't enter this Nightclub Warehouse while resupplying another business. */;
					case 190:
						return "HUB_BLOCK_B" /* GXT: You can't enter this Nightclub Warehouse while selling goods from another business. */;
					case 167:
						return "HUB_BLOCK_C" /* GXT: You can't enter this Nightclub Warehouse while acquiring goods for a warehouse. */;
					case 168:
						return "HUB_BLOCK_D" /* GXT: You can't enter this Nightclub Warehouse while selling goods from a warehouse. */;
					case 178:
						return "HUB_BLOCK_E" /* GXT: You can't enter this Nightclub Warehouse while acquiring a vehicle for a warehouse. */;
					case 188:
						return "HUB_BLOCK_F" /* GXT: You can't enter this Nightclub Warehouse while selling vehicles from a warehouse. */;
					case 225:
						return "HUB_BLOCK_G" /* GXT: You can't enter this Nightclub Warehouse while acquiring goods for a bunker. */;
					case 226:
						return "HUB_BLOCK_H" /* GXT: You can't enter this Nightclub Warehouse while selling goods from a bunker. */;
					case 229:
						return "HUB_BLOCK_I" /* GXT: You can't enter this Nightclub Warehouse while acquiring goods for a hangar. */;
					case 230:
						return "HUB_BLOCK_J" /* GXT: You can't enter this Nightclub Warehouse while selling goods from a hangar. */;
					}
				}
			}
		default:
	}
	if (__LIB_3__::func_695())
	{
		if (iParam2 == 2 || iParam2 == 3)
		{
			return "CLUB_BLOCK_K" /* GXT: You cannot enter your Nightclub with a prostitute. */;
		}
		else
		{
			return "HUB_BLOCK_K" /* GXT: You cannot enter your Nightclub Warehouse with a prostitute. */;
		}
	}
	if (__LIB_2__::func_906())
	{
		return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
	}
	if (__LIB_3__::func_694(PLAYER::PLAYER_ID()))
	{
		if (iParam2 == 2 || iParam2 == 3)
		{
			return "CLUB_BLOCK_L" /* GXT: You can't access your Nightclub as the Beast. */;
		}
		else
		{
			return "HUB_BLOCK_L" /* GXT: You can't access your Nightclub Warehouse as the Beast. */;
		}
	}
	if ((__LIB_3__::func_693() && !__LIB_4__::func_381(__LIB_6__::func_283(PLAYER::PLAYER_ID()))) && !__LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
	}
	iVar3 = 0;
	if ((bVar1 != __LIB_0__::func_162() && bVar1 != PLAYER::PLAYER_ID()) && __LIB_6__::func_104(bVar1, iVar0))
	{
		iVar3 = 1;
	}
	if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()) && (__LIB_6__::func_104(PLAYER::PLAYER_ID(), iVar0) || iVar3))
	{
		if (iParam2 == 2 || iParam2 == 3)
		{
			return "CLUB_BLOCK_M" /* GXT: You can't access this Nightclub whilst wearing the Ballistic Equipment. */;
		}
		else
		{
			return "HUB_BLOCK_M" /* GXT: You can't access this Nightclub Warehouse whilst wearing the Ballistic Equipment. */;
		}
	}
	if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && iVar3) && !__LIB_4__::func_78(__LIB_5__::func_185(PLAYER::PLAYER_ID()))) && !__LIB_5__::func_192(PLAYER::PLAYER_ID()))
	{
		if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
		{
			if (iParam2 == 2 || iParam2 == 3)
			{
				return "CLUB_BLOCK_S" /* GXT: You cannot enter this Nightclub whilst in a vehicle. */;
			}
			else
			{
				return "HUB_BLOCK_S" /* GXT: You cannot enter this Nightclub Warehouse whilst in a vehicle. */;
			}
		}
	}
	if (__LIB_6__::func_104(PLAYER::PLAYER_ID(), iVar0) && !__LIB_5__::func_873(PLAYER::PLAYER_ID()))
	{
		if (__LIB_6__::func_371(PLAYER::PLAYER_ID(), 0))
		{
			if (!__LIB_1__::func_592(PLAYER::PLAYER_ID()) == 140)
			{
				if (iParam2 == 2 || iParam2 == 3)
				{
				}
				else
				{
					return "HUB_BLOCK_N" /* GXT: Your Nightclub Warehouse is unavailable whilst being a member of an MC. */;
				}
			}
		}
		else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			if (!__LIB_6__::func_104(bVar1, iVar0))
			{
				if (__LIB_3__::func_673(bVar1))
				{
					if (iParam2 == 2 || iParam2 == 3)
					{
					}
					else
					{
						return "HUB_BLOCK_O" /* GXT: Your Nightclub Warehouse is unavailable when working as an Associate for a CEO. */;
					}
				}
				else if (iParam2 == 2 || iParam2 == 3)
				{
				}
				else
				{
					return "HUB_BLOCK_P" /* GXT: Your Nightclub Warehouse is unavailable when working as a Bodyguard for a VIP. */;
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar7 = __LIB_3__::func_392(iVar6, &uVar5, &uVar4);
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar6, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar8))
			{
				iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar8);
				if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
				{
					if (!__LIB_6__::func_279(PLAYER::PLAYER_ID()))
					{
						if (__LIB_3__::func_690(iVar6))
						{
							return "CLUB_BLOCK_R" /* GXT: You cannot enter the Nightclub with the Mobile Operations Center. */;
						}
						else if ((((((__LIB_1__::func_589(iVar6) || __LIB_1__::func_819(ENTITY::GET_ENTITY_MODEL(iVar6))) || !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar6), 15)) || __LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar6))) || __LIB_1__::func_588(iVar6)) || __LIB_3__::func_689(iVar6)) || (__LIB_0__::func_872(iVar6, 1) && iVar7 != iVar9))
						{
							if (!__LIB_4__::func_379(__LIB_4__::func_380()))
							{
								return "CLUB_BLOCK_Q" /* GXT: You cannot enter the Nightclub with this vehicle. */;
							}
						}
					}
				}
			}
		}
	}
	return "";
}

int func_4081(var uParam0, var uParam1, var uParam2)//Position - 0x14555D
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	*uParam2 = 0;
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar3 = __LIB_4__::func_322(*uParam0);
			if (__LIB_1__::func_588(iVar2))
			{
				__LIB_10__::func_687(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_10__::func_687(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 15))
			{
				__LIB_10__::func_687(uParam1);
				return 0;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4) || PED::IS_PED_INJURED(iVar4))
			{
				__LIB_10__::func_687(uParam1);
				return 0;
			}
			bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
			if ((__LIB_0__::func_872(iVar2, 1) && __LIB_3__::func_251(iVar2) != bVar5) && !Global_1852994.f_171)
			{
				__LIB_10__::func_687(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_872(iVar2, 1) && __LIB_3__::func_251(iVar2) == bVar5) && __LIB_2__::func_734()) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1)) && !__LIB_3__::func_644(PLAYER::PLAYER_ID()))
			{
				__LIB_10__::func_687(uParam1);
				return 0;
			}
			if (__LIB_3__::func_689(iVar2))
			{
				__LIB_10__::func_687(uParam1);
				return 0;
			}
			if (__LIB_0__::func_870(iVar2, 1) && __LIB_3__::func_249(iVar2, 1, 0) != bVar5)
			{
				__LIB_10__::func_687(uParam1);
				return 0;
			}
			if (__LIB_2__::func_116(iVar2, 1))
			{
				__LIB_10__::func_687(uParam1);
				return 0;
			}
			if (__LIB_0__::func_871(iVar2, 1))
			{
				__LIB_10__::func_687(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_693(bVar5, 1, 1) && __LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 15)) && __LIB_6__::func_104(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4), iVar3))
			{
				if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_872(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_463() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if ((!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373)) && !__LIB_2__::func_159(0))
					{
						if (__LIB_5__::func_987(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1f)))
						{
							if (func_4089(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_627(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_864(&(uParam1->f_397)) && !__LIB_0__::func_937(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 11))
								{
									if (__LIB_6__::func_293() || (__LIB_3__::func_644(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 11))
									{
										if ((__LIB_5__::func_987(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2))
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_5__::func_435(1, *uParam0);
											__LIB_7__::func_507(uParam1, 0);
											__LIB_10__::func_553(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 11)
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_10__::func_553(iVar2);
											return 1;
										}
										else if (((__LIB_3__::func_701(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1)) && __LIB_5__::func_586(uParam0)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
										{
											__LIB_5__::func_435(1, *uParam0);
											__LIB_7__::func_507(uParam1, 0);
											__LIB_10__::func_553(iVar2);
											return 1;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					__LIB_30__::func_746(*uParam0);
					if (__LIB_3__::func_643(PLAYER::PLAYER_ID()))
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_3__::func_642();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_3__::func_122(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_5__::func_435(0, -1);
				}
				__LIB_7__::func_507(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (!bVar0)
		{
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_5__::func_435(0, -1);
	}
	__LIB_7__::func_507(uParam1, 1);
	return 0;
}

int func_4089(var uParam0, int iParam1, bool bParam2)//Position - 0x146127
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "HUB_VEH_TITLE" /* GXT: NIGHTCLUB GARAGE */))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1))
		{
			if (!__LIB_32__::func_599(iParam1, 119, &Var0, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_4139(var uParam0, int iParam1)//Position - 0x14BA3F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1365918/*func_4216*/;
			break;
		case 1:
			uParam0->f_30 = 1365862/*func_4215*/;
			break;
		case 2:
			uParam0->f_31 = 1365593/*func_4214*/;
			break;
		case 3:
			uParam0->f_34 = 1365532/*func_4213*/;
			break;
		case 4:
			uParam0->f_12 = 1365501/*func_4212*/;
			break;
		case 6:
			uParam0->f_32 = 1365437/*func_4211*/;
			break;
		case 111:
			uParam0->f_35 = 1365428/*func_4210*/;
			break;
		case 11:
			uParam0->f_11 = 1365419/*func_4209*/;
			break;
		case 14:
			uParam0->f_11 = 1365410/*func_4208*/;
			break;
		case 12:
			uParam0->f_33 = 1365199/*func_4206*/;
			break;
		case 109:
			uParam0->f_56 = 1365191/*func_4205*/;
			break;
		case 79:
			*uParam0 = 1365167/*func_4204*/;
			break;
		case 13:
			uParam0->f_2 = 1365158/*func_4203*/;
			break;
		case 15:
			uParam0->f_2 = 1364214/*func_4196*/;
			break;
		case 75:
			uParam0->f_4 = 1364205/*func_4195*/;
			break;
		case 16:
			uParam0->f_5 = 1364180/*func_4194*/;
			break;
		case 108:
			uParam0->f_55 = 1364171/*func_4193*/;
			break;
		case 17:
			uParam0->f_17 = 1364146/*func_4192*/;
			break;
		case 19:
			uParam0->f_17 = 1364136/*func_4191*/;
			break;
		case 20:
			uParam0->f_3 = 1364127/*func_4190*/;
			break;
		case 21:
			uParam0->f_3 = 1364118/*func_4189*/;
			break;
		case 74:
			uParam0->f_53 = 1363650/*func_4186*/;
			break;
		case 22:
			uParam0->f_24 = 1363527/*func_4185*/;
			break;
		case 25:
			uParam0->f_23 = 1362757/*func_4181*/;
			break;
		case 30:
			uParam0->f_8 = 1362611/*func_4179*/;
			break;
		case 31:
			uParam0->f_39 = 1362601/*func_4178*/;
			break;
		case 33:
			uParam0->f_40 = 1362394/*func_4176*/;
			break;
		case 34:
			uParam0->f_41 = 1362077/*func_4174*/;
			break;
		case 36:
			uParam0->f_58 = 1362024/*func_4173*/;
			break;
		case 35:
			uParam0->f_42 = 1361251/*func_4170*/;
			break;
		case 45:
			uParam0->f_14 = 1361242/*func_4169*/;
			break;
		case 46:
			uParam0->f_14 = 1361233/*func_4168*/;
			break;
		case 110:
			uParam0->f_57 = 1361225/*func_4167*/;
			break;
		case 77:
			uParam0->f_13 = 1361214/*func_4166*/;
			break;
		case 47:
			uParam0->f_43 = 1360975/*func_4164*/;
			break;
		case 49:
			uParam0->f_8 = 1360966/*func_4163*/;
			break;
		case 50:
			*uParam0 = 1360957/*func_4162*/;
			break;
		case 51:
			*uParam0 = 1360948/*func_4161*/;
			break;
		case 52:
			uParam0->f_15 = 1360937/*func_4160*/;
			break;
		case 53:
			uParam0->f_13 = 1360926/*func_4159*/;
			break;
		case 54:
			uParam0->f_45 = 1360918/*func_4158*/;
			break;
		case 56:
			uParam0->f_46 = 1360909/*func_4157*/;
			break;
		case 57:
			uParam0->f_11 = 1360900/*func_4156*/;
			break;
		case 58:
			uParam0->f_13 = 1360607/*func_4154*/;
			break;
		case 64:
			uParam0->f_47 = 1360063/*func_4151*/;
			break;
		case 65:
			uParam0->f_21 = 1360055/*func_4150*/;
			break;
		case 66:
			uParam0->f_21 = 1359987/*func_4149*/;
			break;
		case 67:
			uParam0->f_21 = 1359846/*func_4147*/;
			break;
		case 68:
			*uParam0 = 1359402/*func_4146*/;
			break;
		case 69:
			*uParam0 = 1359393/*func_4145*/;
			break;
		case 70:
			uParam0->f_48 = 1359381/*func_4144*/;
			break;
		case 71:
			uParam0->f_49 = 1359372/*func_4143*/;
			break;
		case 107:
			uParam0->f_50 = 1359360/*func_4142*/;
			break;
		case 80:
			uParam0->f_7 = 1359351/*func_4141*/;
			break;
		case 78:
			uParam0->f_59 = 1359343/*func_4140*/;
			break;
	}
}

void func_4181(int iParam0, int iParam1)//Position - 0x14CB45
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_0__::func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar1 = __LIB_3__::func_680();
		}
		Var4 = { __LIB_7__::func_635(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_907(bVar7, 1) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
								{
									bVar2 = true;
								}
							}
						}
						if ((((!bVar3 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_3__::func_779())
					{
						__LIB_7__::func_634(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_634(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4182(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4182(iParam0);
					}
					Jump @551; //curOff = 532
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4182(int iParam0)//Position - 0x14CD6F
{
	__LIB_7__::func_634(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4217(var uParam0, int iParam1)//Position - 0x14D7A7
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1464435/*func_4455*/;
			break;
		case 1:
			uParam0->f_30 = 1464331/*func_4454*/;
			break;
		case 2:
			uParam0->f_31 = 1463596/*func_4452*/;
			break;
		case 3:
			uParam0->f_34 = 1463514/*func_4451*/;
			break;
		case 4:
			uParam0->f_12 = 1463371/*func_4450*/;
			break;
		case 5:
			uParam0->f_11 = 1463361/*func_4449*/;
			break;
		case 37:
			uParam0->f_18 = 1463228/*func_4448*/;
			break;
		case 42:
			uParam0->f_10 = 1463161/*func_4447*/;
			break;
		case 6:
			uParam0->f_32 = 1463049/*func_4446*/;
			break;
		case 111:
			uParam0->f_35 = 1462988/*func_4444*/;
			break;
		case 11:
			uParam0->f_11 = 1462979/*func_4443*/;
			break;
		case 12:
			uParam0->f_33 = 1462479/*func_4440*/;
			break;
		case 14:
			uParam0->f_11 = 1462470/*func_4439*/;
			break;
		case 109:
			uParam0->f_56 = 1462462/*func_4438*/;
			break;
		case 79:
			*uParam0 = 1462438/*func_4437*/;
			break;
		case 38:
			uParam0->f_9 = 1462358/*func_4436*/;
			break;
		case 13:
			uParam0->f_2 = 1462262/*func_4435*/;
			break;
		case 15:
			uParam0->f_2 = 1462057/*func_4434*/;
			break;
		case 75:
			uParam0->f_4 = 1462041/*func_4433*/;
			break;
		case 16:
			uParam0->f_5 = 1461232/*func_4430*/;
			break;
		case 108:
			uParam0->f_55 = 1456524/*func_4412*/;
			break;
		case 17:
			uParam0->f_17 = 1455706/*func_4411*/;
			break;
		case 19:
			uParam0->f_17 = 1455681/*func_4410*/;
			break;
		case 20:
			uParam0->f_3 = 1455597/*func_4409*/;
			break;
		case 21:
			uParam0->f_3 = 1455533/*func_4408*/;
			break;
		case 74:
			uParam0->f_53 = 1455381/*func_4407*/;
			break;
		case 22:
			uParam0->f_24 = 1455210/*func_4406*/;
			break;
		case 25:
			uParam0->f_23 = 1454160/*func_4401*/;
			break;
		case 30:
			uParam0->f_8 = 1453542/*func_4399*/;
			break;
		case 31:
			uParam0->f_39 = 1453233/*func_4398*/;
			break;
		case 33:
			uParam0->f_40 = 1452294/*func_4396*/;
			break;
		case 34:
			uParam0->f_41 = 1450934/*func_4395*/;
			break;
		case 36:
			uParam0->f_58 = 1450876/*func_4394*/;
			break;
		case 35:
			uParam0->f_42 = 1403172/*func_4391*/;
			break;
		case 45:
			uParam0->f_14 = 1403163/*func_4390*/;
			break;
		case 46:
			uParam0->f_14 = 1403154/*func_4389*/;
			break;
		case 110:
			uParam0->f_57 = 1403146/*func_4388*/;
			break;
		case 77:
			uParam0->f_13 = 1403123/*func_4387*/;
			break;
		case 47:
			uParam0->f_43 = 1402995/*func_4386*/;
			break;
		case 49:
			uParam0->f_8 = 1402954/*func_4385*/;
			break;
		case 50:
			*uParam0 = 1402821/*func_4383*/;
			break;
		case 51:
			*uParam0 = 1402752/*func_4382*/;
			break;
		case 52:
			uParam0->f_15 = 1402741/*func_4381*/;
			break;
		case 53:
			uParam0->f_13 = 1402507/*func_4380*/;
			break;
		case 54:
			uParam0->f_45 = 1402157/*func_4377*/;
			break;
		case 56:
			uParam0->f_46 = 1402148/*func_4376*/;
			break;
		case 57:
			uParam0->f_11 = 1402077/*func_4375*/;
			break;
		case 58:
			uParam0->f_13 = 1401843/*func_4374*/;
			break;
		case 64:
			uParam0->f_47 = 1401643/*func_4372*/;
			break;
		case 65:
			uParam0->f_21 = 1400745/*func_4370*/;
			break;
		case 66:
			uParam0->f_21 = 1400019/*func_4361*/;
			break;
		case 67:
			uParam0->f_21 = 1397720/*func_4341*/;
			break;
		case 68:
			*uParam0 = 1397087/*func_4337*/;
			break;
		case 69:
			*uParam0 = 1397078/*func_4336*/;
			break;
		case 70:
			uParam0->f_48 = 1397066/*func_4335*/;
			break;
		case 71:
			uParam0->f_49 = 1397057/*func_4334*/;
			break;
		case 107:
			uParam0->f_50 = 1397045/*func_4333*/;
			break;
		case 80:
			uParam0->f_7 = 1396352/*func_4327*/;
			break;
		case 84:
			uParam0->f_1 = 1395812/*func_4325*/;
			break;
		case 85:
			uParam0->f_1 = 1391709/*func_4317*/;
			break;
		case 87:
			uParam0->f_1 = 1387722/*func_4305*/;
			break;
		case 88:
			uParam0->f_1 = 1387208/*func_4301*/;
			break;
		case 89:
			uParam0->f_54 = 1387037/*func_4300*/;
			break;
		case 90:
			uParam0->f_1 = 1386848/*func_4296*/;
			break;
		case 91:
			uParam0->f_1 = 1386682/*func_4295*/;
			break;
		case 92:
			uParam0->f_1 = 1385230/*func_4291*/;
			break;
		case 94:
			uParam0->f_1 = 1381093/*func_4280*/;
			break;
		case 95:
			uParam0->f_22 = 1380797/*func_4277*/;
			break;
		case 96:
			uParam0->f_1 = 1380767/*func_4276*/;
			break;
		case 97:
			uParam0->f_1 = 1380101/*func_4273*/;
			break;
		case 98:
			uParam0->f_1 = 1377452/*func_4254*/;
			break;
		case 100:
			uParam0->f_22 = 1369384/*func_4230*/;
			break;
		case 101:
			uParam0->f_22 = 1367455/*func_4221*/;
			break;
		case 78:
			uParam0->f_59 = 1367235/*func_4219*/;
			break;
		case 125:
			uParam0->f_19 = 1367211/*func_4218*/;
			break;
	}
}

int func_4254(int iParam0, int* iParam1)//Position - 0x1504AC
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<4> Var4;
	struct<4> Var5;
	struct<3> Var6;
	struct<3> Var7;
	char* sVar8;
	struct<3> Var9;
	struct<3> Var10;
	if ((__LIB_0__::func_177() || __LIB_3__::func_719()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (Global_2824886)
		{
			if (!BitTest(*iParam1, 13))
			{
				if (__LIB_0__::func_893() || __LIB_4__::func_54())
				{
					if (!BitTest(Global_1946250.f_2, 21))
					{
						__LIB_0__::func_627(&(iParam1->f_101), 1, 0);
						STREAMING::SET_FOCUS_POS_AND_VEL(482.435f, 4812.798f, -59.383f, 0f, 0f, 0f);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(482.435f, 4812.798f, -59.383f, 20f, 1);
					}
				}
				__LIB_0__::func_627(&(iParam1->f_101), 1, 0);
				MISC::SET_BIT(iParam1, 13);
			}
		}
		if (((Global_2824886 && __LIB_0__::func_937(&(iParam1->f_101), 1000, 1)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
		{
			if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 0))
			{
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 0);
			}
		}
		else
		{
			return 0;
		}
		if (!BitTest(Global_1946250.f_2, 21))
		{
			bVar3 = false;
		}
		else
		{
			bVar3 = true;
			if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 1))
			{
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if ((__LIB_1__::func_693(bVar2, 1, 1) && !__LIB_2__::func_154(bVar2)) && !Global_2824892)
			{
				if (!BitTest(Global_2689235[bVar2 /*453*/].f_318.f_3, bVar3) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::GET_PLAYER_PED(bVar2)))
				{
					return 0;
				}
			}
			iVar0++;
		}
		if (!BitTest(*iParam1, 12))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
			{
				ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(482.435f, 4812.798f, -59.383f, 0.5f, __LIB_4__::func_417(0), false);
				Var4 = { __LIB_4__::func_426() };
				__LIB_5__::func_893(&(iParam1->f_176[0]), Var4, Var4.f_3, 1, 1);
			}
			Global_2824887 = -1;
			if (Global_1853191 != __LIB_0__::func_162())
			{
				if (__LIB_0__::func_121(PLAYER::GET_PLAYER_PED(Global_1853191)))
				{
					if (iVar1 < 4)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
						{
							func_2358(&(iParam1->f_140[0]), Global_1853191, 1, 0);
							if (Global_1853191 == PLAYER::PLAYER_ID())
							{
								Global_2824887 = iVar1;
							}
							iVar1++;
						}
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (Global_1853191 != bVar2)
				{
					if (__LIB_1__::func_693(bVar2, 0, 1) && !__LIB_2__::func_154(bVar2))
					{
						if (iVar1 < 4)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar1]))
							{
								func_2358(&(iParam1->f_140[iVar1]), bVar2, 1, 0);
								if (__LIB_0__::func_121(iParam1->f_140[iVar1]))
								{
									PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[iVar1]);
								}
								if (bVar2 == PLAYER::PLAYER_ID())
								{
									Global_2824887 = iVar1;
								}
								iVar1++;
							}
						}
					}
				}
				iVar0++;
			}
			__LIB_4__::func_442();
			MISC::SET_BIT(iParam1, 12);
			return 0;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar0]) && __LIB_0__::func_121(iParam1->f_140[iVar0]))
				{
					if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar0]))
					{
						return 0;
					}
				}
				iVar0++;
			}
		}
		if (__LIB_1__::func_614() || BitTest(Global_1574942, 4))
		{
			if (__LIB_0__::func_893() || __LIB_4__::func_54())
			{
			}
			else
			{
				__LIB_15__::func_662(0, 1, 0, 1, 0, 1, 0, 1, 1, 0);
				return 0;
			}
		}
		Var5 = { __LIB_6__::func_424(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[1]))
		{
			__LIB_5__::func_892(&(iParam1->f_176[1]), Var5, Var5.f_3);
		}
		Var5 = { __LIB_6__::func_424(iParam0, 3) };
		if (BitTest(Global_1946250.f_2, 21))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var5 + Vector(-2f, 0f, 0f), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam1->f_176[0], Var5.f_3, 2, true);
		}
		Var5 = { __LIB_6__::func_424(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
		{
			__LIB_5__::func_991(&(iParam1->f_176[3]), Var5, Var5.f_3);
		}
		iParam1->f_11 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), false);
		if (BitTest(Global_1946250.f_2, 21))
		{
		}
	}
	else
	{
		if (!BitTest(*iParam1, 12))
		{
			func_2358(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
			MISC::SET_BIT(iParam1, 12);
			return 0;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]) && __LIB_0__::func_121(iParam1->f_140[0]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[0]))
			{
				return 0;
			}
		}
		iParam1->f_176[1] = 0;
		if (__LIB_0__::func_121(iParam1->f_140[0]))
		{
			Var6 = { ENTITY::GET_ENTITY_COORDS(iParam1->f_140[0], false) };
			Var6.f_2 = (Var6.f_2 - 20f);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_140[0], Var6, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_140[0], true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
		{
			Var7 = { __LIB_4__::func_426() };
			__LIB_5__::func_893(&(iParam1->f_176[0]), Var7, Var7.f_3, 1, 0);
			Var7.f_2 = (Var7.f_2 - 10f);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var7, false, false, true);
			ENTITY::SET_ENTITY_COLLISION(iParam1->f_176[0], true, false);
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[0], true, false);
		}
		sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
		Var9 = { 481.253f, 4813.742f, -59.148f };
		Var10 = { 0f, 0f, -10f };
		if (__LIB_1__::func_394())
		{
			sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
		}
		__LIB_3__::func_900(&(Global_1946250.f_4073), 6500, "Base exit", Var9, Var10, sVar8, "control_operation_cam", 0, 0, 0, 0, 2);
		__LIB_4__::func_428(&(iParam1->f_176[1]), 1);
		MISC::SET_BIT(&(Global_1946250.f_5), 27);
	}
	__LIB_5__::func_514(iParam1, 0);
	__LIB_0__::func_627(&(iParam1->f_101), 1, 0);
	return 1;
}

int func_4291(int iParam0, int* iParam1)//Position - 0x15230E
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
	{
		Var0 = { __LIB_4__::func_427() };
		__LIB_5__::func_893(&(iParam1->f_176[0]), Var0, Var0.f_3, 1, 0);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("avenger"))
			{
				func_4294(&iVar1, &(iParam1->f_109), 48, 10f, 20f, 15f);
			}
			else
			{
				func_1370(&iVar1, &(iParam1->f_109), 40);
			}
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else if (func_4293(&iVar1, &(iParam1->f_109), &(iParam1->f_109.f_1), &(Global_1946250.f_4508), 1))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1->f_109, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar3 = 0;
		iVar2 = 0;
		while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar4 = iVar2;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
			{
				bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
				if (iVar2 < 30)
				{
					if ((__LIB_1__::func_693(bVar5, 1, 1) && __LIB_2__::func_717(bVar5) == iParam0) && __LIB_3__::func_171(bVar5))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar3]))
						{
							func_2358(&(iParam1->f_140[iVar3]), bVar5, 1, 0);
							if (__LIB_0__::func_121(iParam1->f_140[iVar3]))
							{
								PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[iVar3]);
								if (ENTITY::GET_ENTITY_MODEL(iParam1->f_140[iVar3]) == joaat("MP_M_Freemode_01"))
								{
									MISC::SET_BIT(&(iParam1->f_188), 27);
								}
								else
								{
									MISC::SET_BIT(&(iParam1->f_188), 28);
								}
								if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[iVar3]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar3]))
								{
									return 0;
								}
								else
								{
									PED::FINALIZE_HEAD_BLEND(iParam1->f_140[iVar3]);
								}
							}
							iVar3++;
						}
						else if (__LIB_0__::func_121(iParam1->f_140[iVar3]))
						{
							if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[iVar3]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar3]))
							{
								return 0;
							}
							else
							{
								PED::FINALIZE_HEAD_BLEND(iParam1->f_140[iVar3]);
							}
							iVar3++;
						}
					}
				}
			}
			iVar2++;
		}
	}
	__LIB_5__::func_514(iParam1, 0);
	iParam1->f_183[0] = 0.4f;
	__LIB_5__::func_602(&(iParam1->f_176[0]), iParam1->f_183[0], 0);
	__LIB_6__::func_425(iParam0, &(Global_1946250.f_4073));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_417(0));
	return 1;
}

int func_4293(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x152620
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	iVar0 = -1;
	while (iVar0 <= 8)
	{
		iVar1 = iVar0 + 1;
		iVar2 = iVar0;
		if ((*uParam3)[iVar1] != __LIB_0__::func_162() && __LIB_1__::func_693((*uParam3)[iVar1], 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED((*uParam3)[iVar1]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]))
				{
					func_1340(uParam2[iVar1], iVar3, 1, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]) && __LIB_0__::func_121((*uParam2)[iVar1]))
				{
					if (!PED::HAS_PED_HEAD_BLEND_FINISHED((*uParam2)[iVar1]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED((*uParam2)[iVar1]))
					{
						if (bParam4)
						{
							return 0;
						}
					}
					else
					{
						PED::FINALIZE_HEAD_BLEND((*uParam2)[iVar1]);
					}
					iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iVar2, false);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						if (__LIB_0__::func_121(*uParam1))
						{
							PED::SET_PED_INTO_VEHICLE((*uParam2)[iVar1], *uParam1, iVar2);
						}
					}
					if (iVar0 == 7 && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("insurgent3"))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(*uParam1, 5, 5, 1f);
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_4294(int iParam0, var uParam1, int iParam2, struct<3> Param3)//Position - 0x152758
{
	struct<101> Var0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0) || ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (__LIB_0__::func_703(iParam2, 1))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam1, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam1, ENTITY::GET_ENTITY_COORDS(*iParam0, true), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*uParam1, ENTITY::GET_ENTITY_ROTATION(*iParam0, 2), 2, true);
		}
		if (__LIB_0__::func_703(iParam2, 2))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam1, 5f);
		}
		return 1;
	}
	else
	{
		*uParam1 = VEHICLE::CREATE_VEHICLE(__LIB_4__::func_445(), Param3, ENTITY::GET_ENTITY_HEADING(*iParam0), false, false, false);
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			Var0.f_9 = 49;
			Var0.f_59 = 2;
			Var0.f_78 = -1;
			Var0.f_79 = -1;
			Var0.f_96 = -1;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_100 = -1;
			__LIB_6__::func_29(*iParam0, &Var0);
			__LIB_36__::func_246(*uParam1, &Var0, 1, 1, 0);
			ENTITY::SET_ENTITY_COLLISION(*uParam1, false, false);
			ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(*uParam1, true);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(*uParam1, false);
			ENTITY::SET_ENTITY_PROOFS(*uParam1, true, true, true, true, true, true, true, true);
			VEHICLE::SET_VEHICLE_CAN_BREAK(*uParam1, false);
			VEHICLE::GET_VEHICLE_LIGHTS_STATE(*iParam0, &iVar1, &iVar2);
			if (iVar1 != 0)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(*uParam1, 2);
			}
			if (iVar2 != 0)
			{
				VEHICLE::SET_VEHICLE_FULLBEAM(*uParam1, true);
			}
		}
	}
	return 0;
}

int func_4317(int iParam0, int* iParam1)//Position - 0x153C5D
{
	int iVar0;
	struct<4> Var1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			func_1370(&iVar0, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			if (__LIB_4__::func_453(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				MISC::SET_BIT(&(iParam1->f_188), 9);
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("avenger"))
				{
					if (VEHICLE::GET_LANDING_GEAR_STATE(iVar0) == 4 || VEHICLE::GET_LANDING_GEAR_STATE(iVar0) == 1)
					{
						MISC::SET_BIT(&(iParam1->f_188), 14);
					}
					MISC::SET_BIT(&(iParam1->f_188), 13);
				}
			}
			return 0;
		}
		else if (func_1339(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1->f_109, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
			__LIB_4__::func_465(iVar0);
		}
		else
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_2358(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
		if (__LIB_0__::func_121(iParam1->f_140[0]))
		{
			if (PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[0]) || PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[0]))
			{
				PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[0]);
				PED::FINALIZE_HEAD_BLEND(iParam1->f_140[0]);
			}
			else
			{
				return 0;
			}
		}
	}
	Var1 = { __LIB_6__::func_424(iParam0, 0) };
	__LIB_5__::func_892(&(iParam1->f_176[1]), Var1, Var1.f_3);
	Var1 = { 0f, 0f, 0f };
	Var1.f_3 = { 0f, 0f, 0f };
	Var1 = { __LIB_6__::func_424(iParam0, 3) };
	__LIB_5__::func_893(&(iParam1->f_176[0]), Var1, Var1.f_3, 1, 1);
	if (BitTest(iParam1->f_188, 1) && __LIB_5__::func_609(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		Var1 = { __LIB_6__::func_424(iParam0, 19) };
		Var1.f_2 = (Var1.f_2 - 1f);
		__LIB_5__::func_893(&(iParam1->f_176[4]), Var1, Var1.f_3, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[4], false, false);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iParam1->f_176[4]);
	}
	Var1 = { __LIB_6__::func_424(iParam0, 0) };
	__LIB_5__::func_991(&(iParam1->f_176[3]), Var1, Var1.f_3);
	__LIB_6__::func_805(iParam0, &(iParam1->f_176[0]), 0f, 1, 1f);
	__LIB_6__::func_426(iParam0, &(Global_1946250.f_3638), 0, -1);
	__LIB_5__::func_514(iParam1, 0);
	return 1;
}

int func_4325(int iParam0, var uParam1)//Position - 0x154C64
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	char* sVar3;
	bVar0 = true;
	if (!BitTest(uParam1->f_188, 17))
	{
		__LIB_5__::func_604(iParam0);
		MISC::SET_BIT(&(uParam1->f_188), 17);
	}
	STREAMING::REQUEST_MODEL(__LIB_4__::func_459(iParam0));
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_459(iParam0)))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_4__::func_441());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_441()))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_4__::func_440());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_440()))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_ANIM_DICT("anim@amb@facility@hanger_doors");
	if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@facility@hanger_doors"))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(joaat("xm_prop_out_hanger_lift"));
	if (!STREAMING::HAS_MODEL_LOADED(joaat("xm_prop_out_hanger_lift")))
	{
		bVar0 = false;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_CHRISTMAS2017/XM_FACILITY_ENTRY_EXIT", false, -1))
	{
		MISC::CLEAR_BIT(&(uParam1->f_188), 22);
		bVar0 = false;
	}
	else
	{
		MISC::SET_BIT(&(uParam1->f_188), 22);
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_0__::func_121(iVar1) && ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("avenger"))
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true) };
				Var2.f_2 = (Var2.f_2 - 10f);
				__LIB_0__::func_799(__LIB_4__::func_445());
				if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_445()))
				{
					bVar0 = false;
				}
				else if (!func_4294(&iVar1, &(uParam1->f_122), 16, Var2))
				{
					bVar0 = false;
				}
				else
				{
					func_1370(&iVar1, &(uParam1->f_122), 24);
					__LIB_4__::func_456(uParam1->f_122, 0);
					if (__LIB_0__::func_121(uParam1->f_122))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_122, true);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam1->f_122, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
					}
					__LIB_4__::func_466(uParam1->f_122, 1);
				}
			}
		}
		else
		{
			sVar3 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
			if (__LIB_1__::func_394())
			{
				sVar3 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
			}
			STREAMING::REQUEST_ANIM_DICT(sVar3);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar3))
			{
				bVar0 = false;
			}
		}
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_4377(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x15652D
{
	struct<3> Var0;
	int iVar1;
	if (__LIB_6__::func_601(iParam0))
	{
		if (*uParam3 != 1 && *uParam3 != 2)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			HUD::SET_BLIP_SCALE(*uParam1, 1.1f);
			HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 7000);
			*uParam3 = 1;
			return;
		}
		else if (*uParam3 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::SET_BLIP_ROUTE(*uParam1, false);
				*uParam3 = 2;
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			*uParam3 = 1;
		}
	}
	else if (*uParam3 == 1)
	{
		HUD::SET_BLIP_ROUTE(*uParam1, false);
		HUD::SET_BLIP_SCALE(*uParam1, 1f);
		HUD::SET_BLIP_PRIORITY(*uParam1, 5);
		*uParam3 = 0;
	}
	if (__LIB_0__::func_172(iParam0) == 9)
	{
		if (__LIB_0__::func_109(iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!HUD::DOES_BLIP_EXIST(*iParam2))
				{
					Var0 = { __LIB_4__::func_296(iParam0) };
					iVar1 = __LIB_4__::func_74(iParam0);
					*iParam2 = __LIB_0__::func_488(Var0, 0);
					HUD::SET_BLIP_SPRITE(*iParam2, iVar1);
					HUD::SET_BLIP_SCALE(*iParam2, 1f);
					HUD::SET_BLIP_PRIORITY(*iParam2, 5);
					func_3063(iParam2, 166);
					HUD::SET_BLIP_AS_SHORT_RANGE(*iParam2, false);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam2, "BASE_HEIST_BLIP" /* GXT: The Doomsday Heist */);
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(*iParam2, true);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(*iParam2))
			{
				HUD::REMOVE_BLIP(iParam2);
			}
		}
	}
}

void func_4401(int iParam0, int iParam1)//Position - 0x163050
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_6__::func_337(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar1 = __LIB_3__::func_680();
		}
		Var4 = { __LIB_4__::func_296(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_2__::func_154(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_5__::func_895(bVar7)) && !func_1562(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if ((((((((!bVar3 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_2__::func_154(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_5__::func_895(bVar7)) && !func_1562(bVar7))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_3__::func_779())
					{
						__LIB_7__::func_513(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_513(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4402(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4402(iParam0);
					}
					Jump @653; //curOff = 634
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4402(int iParam0)//Position - 0x1632E0
{
	__LIB_7__::func_513(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

char* func_4411(int iParam0, var uParam1, var uParam2)//Position - 0x16365A
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (__LIB_5__::func_434())
	{
		return "SI_ENTR_BLCK17A" /* GXT: You cannot enter the Facility while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	iVar0 = __LIB_0__::func_846(iParam0);
	bVar1 = __LIB_0__::func_797();
	if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
	{
		iVar2 = __LIB_5__::func_185(PLAYER::PLAYER_ID());
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
		{
			switch (iVar2)
			{
				case 192:
					return "BASE_BLOCK_A" /* GXT: You can't enter this Facility while resupplying another business. */;
				case 190:
					return "BASE_BLOCK_B" /* GXT: You can't enter this Facility while selling goods from another business. */;
				case 167:
					return "BASE_BLOCK_C" /* GXT: You can't enter this Facility while acquiring goods for a warehouse. */;
				case 168:
					return "BASE_BLOCK_D" /* GXT: You can't enter this Facility while selling goods from a warehouse. */;
				case 178:
					return "BASE_BLOCK_E" /* GXT: You can't enter this Facility while acquiring a vehicle for a warehouse. */;
				case 188:
					return "BASE_BLOCK_F" /* GXT: You can't enter this Facility while selling vehicles from a warehouse. */;
				case 225:
					return "BASE_BLOCK_G" /* GXT: You can't enter this Facility while acquiring goods for a bunker. */;
				case 226:
					return "BASE_BLOCK_H" /* GXT: You can't enter this Facility while selling goods from a bunker. */;
				case 229:
					return "BASE_BLOCK_I" /* GXT: You can't enter this Facility while acquiring goods for a hangar. */;
				case 230:
					return "BASE_BLOCK_J" /* GXT: You can't enter this Facility while selling goods from a hangar. */;
				}
			}
		default:
	}
	if (__LIB_3__::func_695())
	{
		return "BASE_BLOCK_K" /* GXT: You cannot enter your Facility with a prostitute. */;
	}
	if (__LIB_3__::func_694(PLAYER::PLAYER_ID()))
	{
		return "BASE_BLOCK_L" /* GXT: You can't access your Facility as the Beast. */;
	}
	if (__LIB_3__::func_693())
	{
		return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
	}
	iVar3 = 0;
	if ((bVar1 != __LIB_0__::func_162() && bVar1 != PLAYER::PLAYER_ID()) && __LIB_4__::func_493(bVar1, iVar0))
	{
		iVar3 = 1;
	}
	if (__LIB_4__::func_493(PLAYER::PLAYER_ID(), iVar0) || iVar3)
	{
		if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
		{
			return "BASE_BLOCK_M" /* GXT: You can't access this Facility whilst wearing the Ballistic Equipment. */;
		}
		if (__LIB_3__::func_439(PLAYER::PLAYER_ID()))
		{
			return "BASE_BLOCK_U" /* GXT: You can't enter this Facility whilst participating in a Business Battle. */;
		}
		if (__LIB_2__::func_906())
		{
			return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
		}
	}
	if (__LIB_4__::func_493(PLAYER::PLAYER_ID(), iVar0) && !__LIB_5__::func_873(PLAYER::PLAYER_ID()))
	{
		if (__LIB_6__::func_371(PLAYER::PLAYER_ID(), 0))
		{
			if (!__LIB_1__::func_592(PLAYER::PLAYER_ID()) == 140)
			{
				return "BASE_BLOCK_N" /* GXT: Your Facility is unavailable whilst being a member of an MC. */;
			}
		}
		else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			if (!__LIB_4__::func_493(bVar1, iVar0))
			{
				if (__LIB_3__::func_673(bVar1))
				{
					return "BASE_BLOCK_O" /* GXT: Your Facility is unavailable when working as an Associate for a CEO. */;
				}
				else
				{
					return "BASE_BLOCK_P" /* GXT: Your Facility is unavailable when working as a Bodyguard for a VIP. */;
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_952(PLAYER::PLAYER_ID()))
		{
			iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar7 = __LIB_3__::func_392(iVar6, &uVar5, &uVar4);
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar6, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar8))
			{
				iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar8);
				if ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_5__::func_185(PLAYER::PLAYER_ID()) != 233) && !__LIB_6__::func_601(iParam0))
				{
					if ((((((__LIB_1__::func_589(iVar6) || __LIB_1__::func_819(ENTITY::GET_ENTITY_MODEL(iVar6))) || !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar6), 13)) || __LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar6))) || __LIB_1__::func_588(iVar6)) || __LIB_3__::func_689(iVar6)) || (__LIB_0__::func_872(iVar6, 1) && iVar7 != iVar9))
					{
						return "BASE_BLOCK_R" /* GXT: You cannot enter the Facility with this vehicle. */;
					}
					if (__LIB_3__::func_690(iVar6))
					{
						return "BASE_BLOCK_T" /* GXT: You cannot enter the Facility with the Mobile Operations Center. */;
					}
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && iVar3)
	{
		if ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_5__::func_185(PLAYER::PLAYER_ID()) != 233) && !__LIB_6__::func_601(iParam0))
		{
			return "BASE_BLOCK_S" /* GXT: You cannot enter this Facility, only the Facility's Owner can drive a vehicle in. */;
		}
	}
	return "";
}

int func_4412(var uParam0, var uParam1, var uParam2)//Position - 0x16398C
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	*uParam2 = 0;
	if (__LIB_4__::func_505())
	{
		return 0;
	}
	if (__LIB_4__::func_504())
	{
		return 0;
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar3 = __LIB_0__::func_846(*uParam0);
			if (__LIB_1__::func_588(iVar2))
			{
				__LIB_7__::func_514(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_7__::func_514(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 13))
			{
				__LIB_7__::func_514(uParam1);
				return 0;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4) || PED::IS_PED_INJURED(iVar4))
			{
				__LIB_7__::func_514(uParam1);
				return 0;
			}
			bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
			if ((__LIB_0__::func_872(iVar2, 1) && __LIB_3__::func_251(iVar2) != bVar5) && !Global_1852994.f_171)
			{
				__LIB_7__::func_514(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_872(iVar2, 1) && __LIB_3__::func_251(iVar2) == bVar5) && __LIB_2__::func_734()) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1)) && !__LIB_3__::func_644(PLAYER::PLAYER_ID()))
			{
				__LIB_7__::func_514(uParam1);
				return 0;
			}
			if (__LIB_3__::func_693())
			{
				__LIB_7__::func_514(uParam1);
				return 0;
			}
			if (__LIB_3__::func_689(iVar2))
			{
				__LIB_7__::func_514(uParam1);
				return 0;
			}
			if (__LIB_2__::func_116(iVar2, 1) && __LIB_6__::func_338(iVar2, 1, 0) != bVar5)
			{
				__LIB_7__::func_514(uParam1);
				return 0;
			}
			if (__LIB_0__::func_871(iVar2, 1))
			{
				__LIB_7__::func_514(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_693(bVar5, 1, 1) && __LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 13)) && __LIB_4__::func_493(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4), iVar3))
			{
				if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_872(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_463() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if ((!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373)) && !__LIB_2__::func_159(0))
					{
						if (__LIB_5__::func_332(uParam0) || __LIB_4__::func_451())
						{
							if (func_4424(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_627(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_864(&(uParam1->f_397)) && !__LIB_0__::func_937(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 9))
								{
									if ((__LIB_5__::func_331() || (__LIB_3__::func_644(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 9)) || (__LIB_5__::func_331() && __LIB_4__::func_451()))
									{
										if ((__LIB_5__::func_995(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && __LIB_3__::func_701(PLAYER::PLAYER_PED_ID()))
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_5__::func_435(1, *uParam0);
											__LIB_6__::func_806(uParam1, 0);
											__LIB_7__::func_448(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 9)
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_7__::func_448(iVar2);
											return 1;
										}
										else
										{
											if ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && !__LIB_4__::func_451()) && (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())))
											{
												bVar0 = true;
												if (uParam1->f_22.f_94 == -1 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
												{
													__LIB_5__::func_569(&(uParam1->f_22.f_94), 5, "BASE_ENTER" /* GXT: Press ~INPUT_CONTEXT~ to enter the Facility with current vehicle. */, 0, 0, 0, 0);
													AUDIO::HINT_SCRIPT_AUDIO_BANK("DLC_CHRISTMAS2017/XM_FACILITY_ENTRY_EXIT", 0, -1);
												}
											}
											if (__LIB_3__::func_113(uParam1->f_22.f_94, 1) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
											{
												MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 30);
												__LIB_3__::func_122(&(uParam1->f_22.f_94));
												__LIB_6__::func_806(uParam1, 0);
												__LIB_5__::func_435(1, *uParam0);
												__LIB_7__::func_448(iVar2);
												return 1;
											}
											if (__LIB_4__::func_451())
											{
												__LIB_3__::func_122(&(uParam1->f_22.f_94));
												__LIB_5__::func_435(1, *uParam0);
												__LIB_6__::func_806(uParam1, 0);
												return 1;
											}
											if (((__LIB_3__::func_701(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1)) && __LIB_5__::func_617(uParam0)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
											{
												if (!Global_1963928)
												{
													__LIB_5__::func_435(1, *uParam0);
													__LIB_6__::func_806(uParam1, 0);
													__LIB_7__::func_448(iVar2);
													return 1;
												}
											}
											else if (Global_1963928)
											{
												Global_1963928 = 0;
											}
										}
									}
								}
							}
						}
						else if ((Global_1963928 && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_3__::func_171(PLAYER::PLAYER_ID()))
						{
							Global_1963928 = 0;
						}
					}
				}
				else
				{
					__LIB_30__::func_747(*uParam0);
					if (__LIB_3__::func_643(PLAYER::PLAYER_ID()))
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_3__::func_122(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_5__::func_435(0, -1);
				}
				__LIB_6__::func_806(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (!bVar0)
		{
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_5__::func_435(0, -1);
	}
	__LIB_6__::func_806(uParam1, 1);
	return 0;
}

int func_4424(var uParam0, int iParam1, bool bParam2)//Position - 0x164A18
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 16f && !BitTest(uParam0->f_22, 1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193())
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && !__LIB_2__::func_116(iParam1, 1))
		{
			if (!__LIB_32__::func_599(iParam1, 117, &Var0, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_4456(var uParam0, int iParam1)//Position - 0x16587C
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1491918/*func_4619*/;
			break;
		case 1:
			uParam0->f_30 = 1491862/*func_4618*/;
			break;
		case 2:
			uParam0->f_31 = 1491593/*func_4617*/;
			break;
		case 3:
			uParam0->f_34 = 1491534/*func_4616*/;
			break;
		case 4:
			uParam0->f_12 = 1491503/*func_4615*/;
			break;
		case 37:
			uParam0->f_18 = 1491387/*func_4614*/;
			break;
		case 38:
			uParam0->f_9 = 1491303/*func_4613*/;
			break;
		case 6:
			uParam0->f_32 = 1491239/*func_4612*/;
			break;
		case 111:
			uParam0->f_35 = 1491216/*func_4611*/;
			break;
		case 11:
			uParam0->f_11 = 1491207/*func_4610*/;
			break;
		case 12:
			uParam0->f_33 = 1490753/*func_4607*/;
			break;
		case 14:
			uParam0->f_11 = 1490744/*func_4606*/;
			break;
		case 109:
			uParam0->f_56 = 1490736/*func_4605*/;
			break;
		case 79:
			*uParam0 = 1490712/*func_4604*/;
			break;
		case 13:
			uParam0->f_2 = 1490703/*func_4603*/;
			break;
		case 15:
			uParam0->f_2 = 1486223/*func_4582*/;
			break;
		case 75:
			uParam0->f_4 = 1486214/*func_4581*/;
			break;
		case 16:
			uParam0->f_5 = 1486030/*func_4580*/;
			break;
		case 108:
			uParam0->f_55 = 1482966/*func_4567*/;
			break;
		case 17:
			uParam0->f_17 = 1482460/*func_4565*/;
			break;
		case 19:
			uParam0->f_17 = 1482435/*func_4564*/;
			break;
		case 20:
			uParam0->f_3 = 1482357/*func_4563*/;
			break;
		case 21:
			uParam0->f_3 = 1482294/*func_4562*/;
			break;
		case 74:
			uParam0->f_53 = 1482079/*func_4560*/;
			break;
		case 22:
			uParam0->f_24 = 1481956/*func_4559*/;
			break;
		case 25:
			uParam0->f_23 = 1481009/*func_4554*/;
			break;
		case 30:
			uParam0->f_8 = 1480445/*func_4552*/;
			break;
		case 31:
			uParam0->f_39 = 1480268/*func_4549*/;
			break;
		case 33:
			uParam0->f_40 = 1479156/*func_4544*/;
			break;
		case 34:
			uParam0->f_41 = 1478462/*func_4542*/;
			break;
		case 36:
			uParam0->f_58 = 1478409/*func_4541*/;
			break;
		case 35:
			uParam0->f_42 = 1477832/*func_4539*/;
			break;
		case 45:
			uParam0->f_14 = 1477823/*func_4538*/;
			break;
		case 46:
			uParam0->f_14 = 1477814/*func_4537*/;
			break;
		case 110:
			uParam0->f_57 = 1477637/*func_4536*/;
			break;
		case 77:
			uParam0->f_13 = 1477626/*func_4535*/;
			break;
		case 47:
			uParam0->f_43 = 1477128/*func_4532*/;
			break;
		case 49:
			uParam0->f_8 = 1477087/*func_4531*/;
			break;
		case 50:
			*uParam0 = 1477078/*func_4530*/;
			break;
		case 51:
			*uParam0 = 1477069/*func_4529*/;
			break;
		case 52:
			uParam0->f_15 = 1477058/*func_4528*/;
			break;
		case 53:
			uParam0->f_13 = 1477047/*func_4527*/;
			break;
		case 54:
			uParam0->f_45 = 1477039/*func_4526*/;
			break;
		case 56:
			uParam0->f_46 = 1477030/*func_4525*/;
			break;
		case 57:
			uParam0->f_11 = 1477021/*func_4524*/;
			break;
		case 58:
			uParam0->f_13 = 1476792/*func_4523*/;
			break;
		case 64:
			uParam0->f_47 = 1470869/*func_4492*/;
			break;
		case 65:
			uParam0->f_21 = 1469244/*func_4482*/;
			break;
		case 66:
			uParam0->f_21 = 1468933/*func_4480*/;
			break;
		case 67:
			uParam0->f_21 = 1468208/*func_4476*/;
			break;
		case 68:
			*uParam0 = 1467663/*func_4475*/;
			break;
		case 69:
			*uParam0 = 1467654/*func_4474*/;
			break;
		case 70:
			uParam0->f_48 = 1467642/*func_4473*/;
			break;
		case 71:
			uParam0->f_49 = 1467633/*func_4472*/;
			break;
		case 107:
			uParam0->f_50 = 1467621/*func_4471*/;
			break;
		case 80:
			uParam0->f_7 = 1465905/*func_4461*/;
			break;
		case 78:
			uParam0->f_59 = 1465455/*func_4458*/;
			break;
		case 125:
			uParam0->f_19 = 1465439/*func_4457*/;
			break;
	}
}

void func_4476(var uParam0, var uParam1)//Position - 0x166730
{
	if (PLAYER::PLAYER_ID() == Global_1853190)
	{
		__LIB_6__::func_413(0);
	}
	if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 19);
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_3__::func_363(uParam0->f_22.f_94, 0))
		{
			HUD::CLEAR_HELP(true);
			__LIB_3__::func_122(&(uParam0->f_22.f_94));
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == joaat("deluxo") || ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == joaat("oppressor2")))
	{
		if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("deluxo")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor2")))
			{
				VEHICLE::SET_DISABLE_HOVER_MODE_FLIGHT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_293))
	{
		Global_2815059.f_293 = 0;
	}
	if (__LIB_4__::func_524(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 1) == -1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
					__LIB_4__::func_523(0);
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_298))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_2815059.f_298, false))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Global_2815059.f_298, false);
				__LIB_4__::func_523(0);
			}
		}
	}
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
	}
	Global_2787785 = 0;
	MISC::CLEAR_BIT(&(Global_1946250.f_2), 11);
	__LIB_4__::func_522(0);
	__LIB_3__::func_638(0);
	Global_1946250.f_3636 = -1;
	__LIB_4__::func_400(0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
			VEHICLE::SET_DISABLE_WEAPON_BLADE_FORCES(false);
		}
	}
}

void func_4492(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x167195
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar0 = func_4520();
	if ((func_4582(iParam1) && !__LIB_4__::func_952(PLAYER::PLAYER_ID())) && PLAYER::PLAYER_ID() == __LIB_6__::func_338(iVar0, 1, 0))
	{
		__LIB_18__::func_502(uParam0, 1);
		__LIB_4__::func_525(0);
	}
	if (__LIB_5__::func_623(iVar0))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_31__::func_564(uParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !func_4582(iParam1))
		{
		}
		else if (!__LIB_3__::func_171(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == __LIB_6__::func_338(iVar0, 1, 0))
		{
			__LIB_18__::func_502(uParam0, 1);
			__LIB_4__::func_525(0);
		}
		if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
		{
			if (PLAYER::PLAYER_ID() == __LIB_6__::func_338(iVar0, 1, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false);
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("deluxo") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("oppressor2"))
				{
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(iVar1, 0f);
				}
			}
		}
	}
	if ((__LIB_4__::func_544(PLAYER::PLAYER_ID()) || __LIB_4__::func_543(PLAYER::PLAYER_ID())) && func_4510(iParam1))
	{
		if (!__LIB_4__::func_953())
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			__LIB_4__::func_542(0);
			__LIB_4__::func_541(0);
			__LIB_4__::func_527(0);
			__LIB_4__::func_540(0);
			CAM::DO_SCREEN_FADE_IN(500);
			if (__LIB_3__::func_779())
			{
				__LIB_4__::func_539(1);
			}
			__LIB_4__::func_538(0);
			__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
			__LIB_4__::func_537(0);
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
			}
			__LIB_4__::func_538(0);
		}
	}
	if (__LIB_0__::func_833())
	{
		if (Global_1946250.f_523)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
		}
	}
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (Global_1853190 != __LIB_0__::func_162())
		{
			if (PLAYER::PLAYER_ID() == Global_1853190)
			{
				if (__LIB_6__::func_62(PLAYER::PLAYER_ID()))
				{
					if (((__LIB_4__::func_502(PLAYER::PLAYER_ID()) || __LIB_4__::func_452()) || __LIB_4__::func_451()) || Global_1957730)
					{
						__LIB_1__::func_33(1);
					}
				}
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_363(uParam0->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_3__::func_122(&(uParam0->f_22.f_94));
			}
		}
		if (!__LIB_4__::func_952(PLAYER::PLAYER_ID()))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (!__LIB_6__::func_62(__LIB_6__::func_338(iVar0, 1, 0)))
				{
					func_4498(uParam0, iVar0);
				}
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) != -1 && __LIB_4__::func_543(PLAYER::PLAYER_ID()))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				bVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
				if (__LIB_1__::func_693(bVar3, 1, 1))
				{
					if (__LIB_4__::func_529(bVar3))
					{
						if (func_4582(iParam1) && !__LIB_4__::func_952(PLAYER::PLAYER_ID()))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							__LIB_4__::func_537(0);
							__LIB_4__::func_538(0);
							__LIB_4__::func_539(1);
						}
					}
				}
			}
		}
	}
	if (__LIB_4__::func_529(PLAYER::PLAYER_ID()))
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		HUD::DISABLE_FRONTEND_THIS_FRAME();
	}
	__LIB_5__::func_996();
	if (!__LIB_0__::func_893() || __LIB_0__::func_983())
	{
		__LIB_4__::func_491(0);
	}
}

void func_4498(var uParam0, int iParam1)//Position - 0x167683
{
	struct<3> Var0;
	float* fVar1;
	float* fVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!BitTest(uParam0->f_22, 2))
			{
				Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_HEADING(iParam1), 0f, -7f, 0f) };
				Var3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_HEADING(iParam1), 0f, -7.8f, 0f) };
				__LIB_4__::func_536(iParam1, Var0, &fVar1);
				__LIB_4__::func_536(iParam1, Var3, &fVar2);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(func_4499()), false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(func_4499()), false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar4) && !ENTITY::IS_ENTITY_DEAD(iVar4, false))
				{
					uParam0->f_22.f_107 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var0.f_0, Var0.f_1, fVar1, Var3.f_0, Var3.f_1, fVar2, 1f, 81, iVar4, 4);
				}
				else
				{
					uParam0->f_22.f_107 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var0.f_0, Var0.f_1, fVar1, Var3.f_0, Var3.f_1, fVar2, 2f, 83, iParam1, 4);
				}
				if (uParam0->f_22.f_107 != 0)
				{
					MISC::SET_BIT(&(uParam0->f_22), 2);
				}
			}
			else
			{
				iVar9 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_22.f_107, &iVar5, &uVar6, &uVar7, &uVar8);
				if (iVar9 == 2)
				{
					if (iVar5 == 0)
					{
						MISC::CLEAR_BIT(&Global_1946250, 19);
						uParam0->f_22.f_107 = 0;
						MISC::CLEAR_BIT(&(uParam0->f_22), 2);
					}
					else
					{
						uParam0->f_22.f_107 = 0;
						MISC::SET_BIT(&Global_1946250, 19);
						MISC::CLEAR_BIT(&(uParam0->f_22), 2);
					}
				}
				else if (iVar9 == 0)
				{
					MISC::CLEAR_BIT(&(uParam0->f_22), 2);
					uParam0->f_22.f_107 = 0;
				}
			}
		}
	}
}

int func_4499()//Position - 0x167808
{
	return __LIB_3__::func_250(func_4500(), 1, 0);
}

int func_4500()//Position - 0x16781A
{
	int iVar0;
	var uVar1;
	var uVar2[25];
	char* sVar3;
	int iVar4;
	int iVar5;
	var uVar6[25];
	int iVar7;
	int iVar8;
	var uVar9[25];
	int iVar10;
	if ((Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_16 != -1 && __LIB_5__::func_301(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_16) == 4)
	{
		return -1;
	}
	if (__LIB_4__::func_954(PLAYER::PLAYER_ID()) && !__LIB_4__::func_535(PLAYER::PLAYER_ID()))
	{
		iVar4 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar2);
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uVar2[iVar0]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar2[iVar0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar2[iVar0], false))
				{
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Truck", 3))
					{
						if (__LIB_0__::func_871(uVar2[iVar0], 1))
						{
							sVar3 = ENTITY::GET_ENTITY_SCRIPT(uVar2[iVar0], &uVar1);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
							{
								if (MISC::ARE_STRINGS_EQUAL(sVar3, "am_mp_bunker"))
								{
									if (__LIB_1__::func_693(Global_1853186, 1, 1))
									{
										if (__LIB_3__::func_250(uVar2[iVar0], 1, 0) == Global_1853186)
										{
											return uVar2[iVar0];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && !__LIB_4__::func_954(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_797())
		{
			iVar7 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar6);
			iVar5 = 0;
			while (iVar5 < iVar7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar6[iVar5]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar6[iVar5]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar6[iVar5], false))
					{
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Truck", 3))
						{
							if (__LIB_0__::func_871(uVar6[iVar5], 1))
							{
								if (__LIB_1__::func_693(__LIB_0__::func_797(), 1, 1))
								{
									if (__LIB_3__::func_250(uVar6[iVar5], 1, 0) == __LIB_0__::func_797())
									{
										return uVar6[iVar5];
									}
								}
							}
						}
					}
				}
				iVar5++;
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_4__::func_535(PLAYER::PLAYER_ID()))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_290))
			{
				iVar10 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar9);
				iVar8 = 0;
				while (iVar8 < iVar10)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar9[iVar8]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar9[iVar8]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uVar9[iVar8], false))
						{
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Truck", 3))
							{
								if (__LIB_0__::func_871(uVar9[iVar8], 1))
								{
									if (__LIB_1__::func_693(Global_1946250.f_3630, 1, 1))
									{
										if (__LIB_3__::func_250(uVar9[iVar8], 1, 0) == Global_1946250.f_3630)
										{
											Global_2815059.f_290 = uVar9[iVar8];
											return uVar9[iVar8];
										}
									}
								}
							}
						}
					}
					iVar8++;
				}
			}
			else
			{
				return Global_2815059.f_290;
			}
		}
	}
	else if (__LIB_4__::func_535(PLAYER::PLAYER_ID()))
	{
		__LIB_4__::func_534(0);
	}
	return Global_2815059.f_304[1];
}

int func_4510(int iParam0)//Position - 0x167DA3
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_4582(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (Global_1946250.f_3630 != __LIB_0__::func_162())
				{
					if (((!__LIB_3__::func_171(Global_1946250.f_3630) && !__LIB_4__::func_902(Global_1946250.f_3630)) && !BitTest(Global_2689235[Global_1946250.f_3630 /*453*/].f_318, 5)) && !__LIB_4__::func_529(Global_1946250.f_3630))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_4520()//Position - 0x168522
{
	int iVar0;
	var uVar1;
	var uVar2[25];
	char* sVar3;
	int iVar4;
	int iVar5;
	var uVar6[25];
	int iVar7;
	int iVar8;
	var uVar9[25];
	int iVar10;
	bool bVar11;
	if ((Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_16 != -1 && __LIB_5__::func_301(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_16) == 9)
	{
		return -1;
	}
	if (__LIB_4__::func_955(PLAYER::PLAYER_ID()) && !__LIB_4__::func_529(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_4__::func_543(PLAYER::PLAYER_ID()) && __LIB_6__::func_62(Global_1853191))
		{
			iVar4 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar2);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar2[iVar0]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar2[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar2[iVar0], false))
					{
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Avenger", 3))
						{
							if (__LIB_2__::func_116(uVar2[iVar0], 1))
							{
								sVar3 = ENTITY::GET_ENTITY_SCRIPT(uVar2[iVar0], &uVar1);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
								{
									if (MISC::ARE_STRINGS_EQUAL(sVar3, "am_mp_defunct_base"))
									{
										if (__LIB_1__::func_693(Global_1853191, 1, 1))
										{
											if (__LIB_6__::func_338(uVar2[iVar0], 1, 0) == Global_1853191)
											{
												return uVar2[iVar0];
											}
										}
									}
								}
							}
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_797())
		{
			iVar7 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar6);
			iVar5 = 0;
			while (iVar5 < iVar7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar6[iVar5]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar6[iVar5]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar6[iVar5], false))
					{
						if (VEHICLE::IS_VEHICLE_MODEL(uVar6[iVar5], __LIB_4__::func_546()))
						{
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Avenger", 3))
							{
								if (__LIB_2__::func_116(uVar6[iVar5], 1))
								{
									if (__LIB_1__::func_693(__LIB_0__::func_797(), 1, 1))
									{
										if (__LIB_6__::func_338(uVar6[iVar5], 1, 0) == __LIB_0__::func_797())
										{
											return uVar6[iVar5];
										}
									}
								}
							}
						}
					}
				}
				iVar5++;
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_4__::func_543(PLAYER::PLAYER_ID()))
		{
			if (__LIB_4__::func_955(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1640744))
				{
					Global_2815059.f_293 = Global_1640744;
					return Global_1640744;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_293))
			{
				iVar10 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar9);
				iVar8 = 0;
				while (iVar8 < iVar10)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar9[iVar8]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar9[iVar8]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uVar9[iVar8], false))
						{
							if (VEHICLE::IS_VEHICLE_MODEL(uVar9[iVar8], __LIB_4__::func_546()))
							{
								if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Avenger", 3))
								{
									if (__LIB_2__::func_116(uVar9[iVar8], 1))
									{
										if (__LIB_1__::func_693(Global_1946250.f_3630, 1, 1))
										{
											if (__LIB_6__::func_338(uVar9[iVar8], 1, 0) == Global_1946250.f_3630)
											{
												Global_2815059.f_293 = uVar9[iVar8];
												return uVar9[iVar8];
											}
										}
									}
								}
							}
						}
					}
					iVar8++;
				}
			}
			else
			{
				return Global_2815059.f_293;
			}
		}
	}
	else if (__LIB_4__::func_543(PLAYER::PLAYER_ID()))
	{
		__LIB_4__::func_540(0);
	}
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1))
	{
		bVar11 = __LIB_2__::func_39(PLAYER::PLAYER_ID());
		if (bVar11 != __LIB_0__::func_162() && __LIB_4__::func_548(bVar11))
		{
			return __LIB_6__::func_108(bVar11);
		}
	}
	return Global_2815059.f_308;
}

Vector3 func_4523(var uParam0)//Position - 0x1688B8
{
	int iVar0;
	iVar0 = func_4520();
	if (Global_1853190 != __LIB_0__::func_162())
	{
		if (__LIB_6__::func_62(Global_1853190))
		{
			return 487.6422f, 4792.5854f, -59.3939f;
		}
		else if (Global_1853190 != PLAYER::PLAYER_ID())
		{
			return Global_2689235[Global_1853190 /*453*/].f_318.f_18;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			return ENTITY::GET_ENTITY_COORDS(iVar0, true);
		}
		else
		{
			return Global_2689235[Global_1853190 /*453*/].f_318.f_18;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return ENTITY::GET_ENTITY_COORDS(iVar0, true);
	}
	else if (__LIB_6__::func_338(iVar0, 1, 0) != __LIB_0__::func_162())
	{
		return Global_2689235[__LIB_6__::func_338(iVar0, 1, 0) /*453*/].f_318.f_18;
	}
	return 0f, 0f, 0f;
}

void func_4544(int iParam0, int iParam1)//Position - 0x1691F4
{
	bool bVar0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = __LIB_0__::func_162();
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_8 = 0;
	Global_1946250.f_506 = 0;
	bVar0 = __LIB_2__::func_39(PLAYER::PLAYER_ID());
	if (((__LIB_4__::func_505() && Global_1853191 != __LIB_0__::func_162()) && Global_1853191 != PLAYER::PLAYER_ID()) && !__LIB_4__::func_405(PLAYER::PLAYER_ID()))
	{
		if (Global_1946250.f_3280 != PLAYER::PLAYER_ID())
		{
			if (Global_1946250.f_3280 != -1)
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 5);
				Global_1853190 = Global_1853191;
			}
			else
			{
				if (Global_1946250.f_3280 == -1)
				{
					__LIB_6__::func_69(Global_1853191);
				}
				Global_1853190 = Global_1853191;
			}
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853190;
		}
	}
	else if ((Global_1946250.f_3280 != -1 && Global_1946250.f_3280 != PLAYER::PLAYER_ID()) && !__LIB_4__::func_405(PLAYER::PLAYER_ID()))
	{
		__LIB_6__::func_762(bVar0, 1);
		MISC::SET_BIT(&(Global_1946250.f_506), 5);
		Global_1853190 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853190;
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && !__LIB_4__::func_405(PLAYER::PLAYER_ID()))
	{
		__LIB_6__::func_762(bVar0, 0);
		if (bVar0 != __LIB_0__::func_162())
		{
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = bVar0;
		}
	}
	else if (__LIB_4__::func_405(PLAYER::PLAYER_ID()))
	{
		__LIB_6__::func_762(bVar0, 1);
		MISC::SET_BIT(&(Global_1946250.f_506), 5);
		Global_1853190 = Global_1946250.f_3630;
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1946250.f_3630;
	}
	else if (__LIB_4__::func_548(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == __LIB_6__::func_338(func_4520(), 1, 0))
	{
		Global_1853190 = PLAYER::PLAYER_ID();
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_0__::func_541(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
			{
				__LIB_4__::func_553(PLAYER::PLAYER_ID(), 88, 3);
			}
			else if (__LIB_0__::func_872(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
			{
				__LIB_4__::func_956(PLAYER::PLAYER_ID(), 88, 3);
			}
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
		MISC::SET_BIT(&(Global_1946250.f_506), 31);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853190;
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__::func_162())
	{
		Global_1946250.f_3636 = __LIB_1__::func_651(__LIB_1__::func_652(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9));
	}
	__LIB_6__::func_604();
}

void func_4554(int iParam0, int iParam1)//Position - 0x169931
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_5__::func_628(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_1562(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_1562(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						func_4544(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_557(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						func_4544(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							func_4556(1);
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4555(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							func_4556(1);
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4555(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4555(int iParam0)//Position - 0x169BC4
{
	func_4544(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4556(int iParam0)//Position - 0x169BF2
{
	int iVar0;
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || iParam0)
	{
		iVar0 = func_4520();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if ((__LIB_6__::func_338(iVar0, 1, 0) == PLAYER::PLAYER_ID() && !__LIB_6__::func_62(PLAYER::PLAYER_ID())) && !__LIB_5__::func_335())
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_18 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 2f, -17f, 0f) };
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_24 = ENTITY::GET_ENTITY_HEADING(iVar0);
			}
		}
	}
}

int func_4567(var uParam0, var uParam1, var uParam2)//Position - 0x16A0D6
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	*uParam2 = 1;
	if (Global_262145.f_23133 /* Tunable: 200197103 */)
	{
		return 0;
	}
	iVar0 = func_4520();
	if (__LIB_4__::func_452() || __LIB_4__::func_451())
	{
		return 0;
	}
	if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
	{
		if (__LIB_0__::func_1("HELP_APC_TUR" /* GXT: Hold ~INPUT_VEH_SHUFFLE~ to move between the passenger turret and the driver seat while stationary. */))
		{
			return 0;
		}
		if (__LIB_6__::func_338(iVar0, 1, 0) != PLAYER::PLAYER_ID())
		{
			return 0;
		}
	}
	if ((!__LIB_0__::func_893() || __LIB_3__::func_558()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_18__::func_502(uParam1, 1);
		__LIB_4__::func_525(0);
	}
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_3__::func_122(&(uParam1->f_22.f_94));
			}
			__LIB_18__::func_502(uParam1, 1);
			__LIB_4__::func_525(0);
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (((__LIB_5__::func_623(iVar0) && __LIB_4__::func_680(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -1f, 0f))) || __LIB_4__::func_955(PLAYER::PLAYER_ID())) || __LIB_4__::func_504())
					{
						if (!func_4582(*uParam0) && __LIB_31__::func_564(uParam1, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 0))
						{
							if (MISC::IS_PC_VERSION())
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("voltic2")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor")))
									{
										if ((__LIB_3__::func_363(uParam1->f_22.f_94, 0) || __LIB_3__::func_56("GR_ENTERAOC" /* GXT: Press ~a~ to enter your Avenger with this vehicle. */, "STRING")) || __LIB_3__::func_56("BASE_MOD_ENTER" /* GXT: ~a~ Access the Facility Vehicle Workshop. ~n~ ~INPUT_CONTEXT_SECONDARY~ Enter your Avenger with this vehicle. */, "STRING"))
										{
											PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
										}
									}
								}
							}
							__LIB_4__::func_563(1);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
							if (!__LIB_4__::func_529(PLAYER::PLAYER_ID()))
							{
								if (__LIB_1__::func_587(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										__LIB_0__::func_151("GAN_ETFE_AIR" /* GXT: You cannot modify this aircraft in your Avenger. */, -1);
									}
									return 0;
								}
								if (__LIB_4__::func_955(PLAYER::PLAYER_ID()))
								{
									bVar1 = true;
								}
								if (!bVar1)
								{
									sVar2 = "GR_ENTERAOC" /* GXT: Press ~a~ to enter your Avenger with this vehicle. */;
								}
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
								if (!bVar1)
								{
									if (uParam1->f_22.f_94 == -1 && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
									{
										__LIB_5__::func_569(&(uParam1->f_22.f_94), 5, sVar2, 0, 0, 0, 0);
									}
									if (__LIB_0__::func_77(0))
									{
										__LIB_3__::func_122(&(uParam1->f_22.f_94));
									}
								}
								if (((!bVar1 && __LIB_3__::func_113(uParam1->f_22.f_94, 1)) || ((bVar1 && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 52 /*INPUT_CONTEXT_SECONDARY*/)) && !HUD::IS_WARNING_MESSAGE_ACTIVE())) || BitTest(uParam1->f_22, 1))
								{
									__LIB_18__::func_502(uParam1, 0);
									__LIB_4__::func_562(__LIB_1__::func_694(PLAYER::PLAYER_ID()), 25f, 0);
									__LIB_3__::func_122(&(uParam1->f_22.f_94));
									if (BitTest(uParam1->f_22, 1))
									{
										MISC::CLEAR_BIT(&(uParam1->f_22), 1);
									}
									if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
									{
										__LIB_6__::func_494(1, 1);
										MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 19);
									}
									if (!__LIB_4__::func_955(PLAYER::PLAYER_ID()))
									{
										__LIB_4__::func_561(1);
									}
									__LIB_5__::func_435(1, 88);
									__LIB_4__::func_525(1);
								}
							}
							else
							{
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, true);
								__LIB_1__::func_33(0);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
								PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
								PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
								PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
								HUD::DISABLE_FRONTEND_THIS_FRAME();
								HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
								VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1f, 1, false);
								if (__LIB_5__::func_338() && __LIB_5__::func_629())
								{
									if (__LIB_4__::func_955(PLAYER::PLAYER_ID()))
									{
										__LIB_4__::func_526(1);
									}
									if (__LIB_0__::func_541(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
									{
										__LIB_4__::func_553(PLAYER::PLAYER_ID(), 88, 3);
									}
									else if (__LIB_0__::func_872(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
									{
										__LIB_4__::func_956(PLAYER::PLAYER_ID(), 88, 3);
									}
									if (!__LIB_4__::func_504())
									{
										__LIB_5__::func_457(1);
										__LIB_5__::func_341(88, uParam1, 0, 0);
										__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 0, 0);
										__LIB_6__::func_413(1);
										__LIB_4__::func_562(__LIB_1__::func_694(PLAYER::PLAYER_ID()), 25f, 0);
										__LIB_4__::func_563(0);
										__LIB_5__::func_435(1, 88);
										return 1;
									}
									else if (!__LIB_3__::func_779())
									{
										__LIB_4__::func_542(1);
										__LIB_4__::func_541(1);
										__LIB_6__::func_413(1);
										__LIB_5__::func_435(1, 88);
										return 1;
									}
								}
								else
								{
									if (!__LIB_5__::func_338())
									{
									}
									if (!__LIB_5__::func_629())
									{
									}
								}
							}
						}
						else if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_3__::func_122(&(uParam1->f_22.f_94));
						}
					}
					else
					{
						__LIB_4__::func_563(0);
						if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_3__::func_122(&(uParam1->f_22.f_94));
						}
						__LIB_18__::func_502(uParam1, 1);
						__LIB_4__::func_525(0);
					}
				}
				else
				{
					if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
					{
						if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_3__::func_122(&(uParam1->f_22.f_94));
						}
					}
					__LIB_18__::func_502(uParam1, 1);
					__LIB_4__::func_525(0);
				}
			}
			else
			{
				func_4568(*uParam0);
				if (__LIB_4__::func_405(PLAYER::PLAYER_ID()))
				{
					if (!__LIB_0__::func_864(&(uParam1->f_22.f_101)))
					{
						__LIB_0__::func_795(&(uParam1->f_22.f_101), 0, 0);
					}
					if (__LIB_1__::func_693(Global_1946250.f_3630, 1, 1))
					{
					}
					if (!__LIB_5__::func_301(Global_1946250.f_3630) && __LIB_4__::func_952(Global_1946250.f_3630))
					{
						if (__LIB_0__::func_864(&(uParam1->f_22.f_101)))
						{
							if (__LIB_0__::func_937(&(uParam1->f_22.f_101), 15000, 0) && CAM::IS_SCREEN_FADING_OUT())
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
								}
								if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
								{
									NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
								}
								CAM::DO_SCREEN_FADE_IN(500);
								__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
								__LIB_4__::func_538(0);
								__LIB_4__::func_540(0);
								__LIB_4__::func_537(0);
								__LIB_0__::func_794(&(uParam1->f_22.f_101));
							}
						}
					}
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
					__LIB_1__::func_33(0);
					__LIB_6__::func_69(Global_1946250.f_3630);
					MISC::SET_BIT(&(Global_1946250.f_506), 5);
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
					__LIB_4__::func_561(1);
					__LIB_5__::func_435(1, 88);
					__LIB_4__::func_525(1);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
					Global_1853190 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
					__LIB_0__::func_794(&(uParam1->f_22.f_101));
					return 1;
				}
			}
		}
		else
		{
			if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_3__::func_122(&(uParam1->f_22.f_94));
			}
			__LIB_18__::func_502(uParam1, 1);
			__LIB_4__::func_525(0);
		}
	}
	else if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
	{
		HUD::CLEAR_HELP(true);
		__LIB_3__::func_122(&(uParam1->f_22.f_94));
	}
	if (((__LIB_0__::func_1("GR_ETFE_NOTV" /* GXT: You cannot modify this vehicle in your Mobile Operations Center. */) || __LIB_0__::func_1("GR_ETFE_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFS_TRAIL" /* GXT: You cannot store this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFA_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. The Anti-Aircraft Trailer can only be modified in the Bunker. */))
	{
		HUD::CLEAR_HELP(true);
	}
	return 0;
}

void func_4568(int iParam0)//Position - 0x16A7FD
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_4__::func_543(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_5__::func_195(PLAYER::PLAYER_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_0__::func_695(iVar0))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
							if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_693(bVar2, 1, 1))
							{
								if ((__LIB_4__::func_529(bVar2) && __LIB_0__::func_172(__LIB_5__::func_196(bVar2)) == 8) || __LIB_4__::func_529(bVar2))
								{
									if (func_4510(iParam0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
										if (__LIB_4__::func_544(PLAYER::PLAYER_ID()))
										{
											if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
											{
												CAM::DO_SCREEN_FADE_IN(500);
											}
											__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
											__LIB_4__::func_538(0);
											__LIB_4__::func_540(0);
										}
									}
									else if (__LIB_5__::func_337())
									{
										if (CAM::IS_SCREEN_FADED_IN())
										{
											__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 0, 0);
											CAM::DO_SCREEN_FADE_OUT(500);
											__LIB_4__::func_538(1);
										}
										if (CAM::IS_SCREEN_FADED_OUT())
										{
											if (__LIB_4__::func_955(PLAYER::PLAYER_ID()))
											{
												__LIB_4__::func_527(1);
												__LIB_4__::func_542(1);
												__LIB_4__::func_526(1);
												__LIB_4__::func_541(1);
											}
											if (VEHICLE::IS_TURRET_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0)) || (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("hakuchou2")) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) != -1))
											{
												TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
											}
											PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
											__LIB_4__::func_537(1);
											__LIB_4__::func_538(0);
										}
									}
									else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("halftrack")))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
										}
										else
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
										if (BitTest(Global_1946250.f_1, 17))
										{
											MISC::CLEAR_BIT(&(Global_1946250.f_1), 17);
										}
										__LIB_4__::func_540(0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_4582(int iParam0)//Position - 0x16AD8F
{
	int iVar0;
	bool bVar1;
	if (__LIB_4__::func_384() || __LIB_4__::func_383(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	bVar1 = false;
	iVar0 = func_4520();
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_4__::func_384()) || __LIB_4__::func_552())
	{
		if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_2__::func_116(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1)) || __LIB_4__::func_384()) || __LIB_4__::func_552())
		{
			bVar1 = true;
		}
	}
	if (BitTest(Global_1946250.f_4523, 4) && !__LIB_4__::func_529(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (((__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && !bVar1)
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if ((((ENTITY::GET_ENTITY_SPEED(iVar0) > 0.5f && !bVar1) && !__LIB_4__::func_405(PLAYER::PLAYER_ID())) && !__LIB_4__::func_529(PLAYER::PLAYER_ID())) && !__LIB_4__::func_544(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!ENTITY::IS_ENTITY_UPRIGHT(iVar0, 25f) && !bVar1)
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (ENTITY::IS_ENTITY_UPSIDEDOWN(iVar0) && !bVar1)
		{
			return 1;
		}
	}
	if (__LIB_3__::func_695())
	{
		return 1;
	}
	if (__LIB_0__::func_983())
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!__LIB_6__::func_62(__LIB_6__::func_338(iVar0, 1, 0)))
		{
			if ((((ENTITY::IS_ENTITY_IN_AIR(iVar0) && !bVar1) && !__LIB_4__::func_405(PLAYER::PLAYER_ID())) && !__LIB_4__::func_529(PLAYER::PLAYER_ID())) && !__LIB_4__::func_544(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() == __LIB_6__::func_338(iVar0, 1, 0))
		{
			return 1;
		}
	}
	if (func_4602(iParam0, iVar0))
	{
		return 1;
	}
	if (func_4601(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_6__::func_110(__LIB_6__::func_338(iVar0, 1, 0))))
		{
			__LIB_4__::func_564(1);
		}
		return 1;
	}
	if (func_4598(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_6__::func_110(__LIB_6__::func_338(iVar0, 1, 0))))
		{
			__LIB_4__::func_564(1);
		}
		return 1;
	}
	if (func_4597(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_6__::func_110(__LIB_6__::func_338(iVar0, 1, 0))))
		{
			__LIB_4__::func_564(1);
		}
		return 1;
	}
	if (func_4592(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_6__::func_110(__LIB_6__::func_338(iVar0, 1, 0))))
		{
			__LIB_4__::func_564(1);
		}
		return 1;
	}
	if (func_4591(iParam0, iVar0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
		{
			if (!__LIB_6__::func_110(__LIB_6__::func_338(iVar0, 1, 0)))
			{
			}
			else
			{
				__LIB_4__::func_564(1);
			}
		}
		else
		{
			__LIB_4__::func_564(1);
		}
		return 1;
	}
	if (func_4588(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_6__::func_110(__LIB_6__::func_338(iVar0, 1, 0))))
		{
			__LIB_4__::func_564(1);
		}
		return 1;
	}
	if (func_4587(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_6__::func_110(__LIB_6__::func_338(iVar0, 1, 0))))
		{
			__LIB_4__::func_564(1);
		}
		return 1;
	}
	if (__LIB_1__::func_510(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if ((NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_4__::func_405(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_1__::func_17(PLAYER::PLAYER_ID()) || __LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 1;
	}
	if (func_4586(iParam0))
	{
		return 1;
	}
	if (__LIB_1__::func_583(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_4__::func_452())
	{
		return 1;
	}
	if (__LIB_3__::func_728(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 == 8 && __LIB_1__::func_736()) && !__LIB_0__::func_626())
	{
		return 1;
	}
	if (__LIB_6__::func_106(__LIB_6__::func_338(iVar0, 1, 0)))
	{
		return 1;
	}
	if (__LIB_6__::func_109(__LIB_6__::func_338(iVar0, 1, 0)))
	{
		return 1;
	}
	if (__LIB_3__::func_964())
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_6__::func_110(__LIB_6__::func_338(iVar0, 1, 0))))
		{
			__LIB_4__::func_564(1);
		}
		return 1;
	}
	if (__LIB_5__::func_335())
	{
		return 1;
	}
	if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 21))
	{
		return 1;
	}
	if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 25))
	{
		return 1;
	}
	if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false)) && func_4584())
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_6__::func_110(__LIB_6__::func_338(iVar0, 1, 0))))
		{
			__LIB_4__::func_564(1);
		}
		return 1;
	}
	if (((((((((BitTest(Global_1946250, 19) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !__LIB_4__::func_405(PLAYER::PLAYER_ID())) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false)) && !__LIB_4__::func_955(PLAYER::PLAYER_ID())) && !__LIB_4__::func_529(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_6__::func_62(__LIB_6__::func_338(iVar0, 1, 0)) && !__LIB_4__::func_955(PLAYER::PLAYER_ID()))
		{
			__LIB_4__::func_564(1);
		}
		return 1;
	}
	if (((__LIB_4__::func_955(PLAYER::PLAYER_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(iVar0) || NETWORK::NETWORK_IS_ENTITY_FADING(iVar0))
		{
			return 1;
		}
	}
	if (__LIB_3__::func_56("BASE_ENTER" /* GXT: Press ~INPUT_CONTEXT~ to enter the Facility with current vehicle. */, "STRING"))
	{
		return 1;
	}
	if (Global_2787784)
	{
		return 1;
	}
	if (!__LIB_4__::func_955(PLAYER::PLAYER_ID()) && __LIB_2__::func_826(iVar0, 0))
	{
		return 1;
	}
	if (__LIB_3__::func_171(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_172(__LIB_3__::func_248(PLAYER::PLAYER_ID())) != 8)
		{
		}
	}
	if (__LIB_1__::func_613(PLAYER::PLAYER_ID()) == 5)
	{
		return 1;
	}
	if (__LIB_3__::func_728(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (__LIB_2__::func_606())
	{
		return 1;
	}
	if (__LIB_1__::func_731(23))
	{
		return 1;
	}
	if (__LIB_2__::func_906())
	{
		return 1;
	}
	__LIB_4__::func_564(0);
	return 0;
}

int func_4584()//Position - 0x16B4C0
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	iVar2 = func_4520();
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, false))
	{
		func_4585(88, &Var0);
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar2, 0f, -8f, -0.6f) };
		if (MISC::ABSF((Var0.f_2 - Var1.f_2)) > 5f)
		{
			return 1;
		}
	}
	return 0;
}

void func_4585(int iParam0, var uParam1)//Position - 0x16B518
{
	int iVar0;
	var uVar1;
	switch (iParam0)
	{
		case 88:
			iVar0 = func_4520();
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				*uParam1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -8f, -0.6f) };
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, &uVar1, false, false) && !ENTITY::IS_ENTITY_IN_AIR(iVar0))
				{
					*uParam1 = { *uParam1, uParam1->f_1, uVar1 };
				}
				else
				{
					*uParam1 = { *uParam1, uParam1->f_1, (uParam1->f_2 - 1.5f) };
				}
			}
			break;
	}
}

int func_4586(int iParam0)//Position - 0x16B5A1
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	iVar0 = func_4520();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		func_4585(iParam0, &Var1);
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if (!__LIB_0__::func_78(Global_1310720.f_1445[iVar2 /*3*/], 0f, 0f, 0f, 0))
			{
				if (SYSTEM::VDIST2(Global_1310720.f_1445[iVar2 /*3*/], Var1) <= 225f)
				{
					return 1;
				}
			}
			iVar2++;
		}
	}
	return 0;
}

int func_4587(int iParam0, int iParam1)//Position - 0x16B61C
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4585(iParam0, &Var0);
		if (!__LIB_6__::func_87(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(-376.2393f, -1878.2488f, 19.5278f, Var0) <= 1600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_4588(int iParam0, int iParam1)//Position - 0x16B677
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4585(iParam0, &Var0);
		if (SYSTEM::VDIST2(__LIB_4__::func_301(__LIB_6__::func_662(__LIB_6__::func_338(iParam1, 1, 0))), Var0) <= 3600f || SYSTEM::VDIST2(__LIB_4__::func_300(__LIB_6__::func_662(__LIB_6__::func_338(iParam1, 1, 0))), Var0) <= 3600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_4591(int iParam0, int iParam1)//Position - 0x16B909
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4585(iParam0, &Var0);
		if (!__LIB_6__::func_63(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(__LIB_4__::func_296(__LIB_1__::func_754(__LIB_6__::func_338(iParam1, 1, 0))), Var0) <= 3600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_4592(int iParam0, int iParam1)//Position - 0x16B965
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4585(iParam0, &Var0);
		if (!__LIB_1__::func_655(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Var0, __LIB_4__::func_302(__LIB_5__::func_630(__LIB_6__::func_338(iParam1, 1, 0)))) <= 1600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_4597(int iParam0, int iParam1)//Position - 0x16BAF4
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4585(iParam0, &Var0);
		if ((((SYSTEM::VDIST2(759.36f, -675.13f, 27.86f, Var0) <= 900f || SYSTEM::VDIST2(-144.58f, -1341.37f, 28.87f, Var0) <= 900f) || SYSTEM::VDIST2(-171f, -31.4f, 51.27f, Var0) <= 900f) || SYSTEM::VDIST2(231.54f, -1875.7f, 25.41f, Var0) <= 900f) || SYSTEM::VDIST2(488.98f, -897.41f, 24.79f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_4598(int iParam0, int iParam1)//Position - 0x16BBCB
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4585(iParam0, &Var0);
		if (((((SYSTEM::VDIST2(-237.12f, 6228.7554f, 30.5005f, Var0) <= 900f || SYSTEM::VDIST2(1710.83f, 4760.13f, 41.0504f, Var0) <= 900f) || SYSTEM::VDIST2(-105.19f, -1778.3f, 28.51f, Var0) <= 900f) || SYSTEM::VDIST2(-617.7421f, 285.8363f, 80.6871f, Var0) <= 900f) || SYSTEM::VDIST2(-1287.1135f, -278.0045f, 37.5935f, Var0) <= 900f) || SYSTEM::VDIST2(726.7626f, -822.4685f, 23.8603f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_4601(int iParam0, int iParam1)//Position - 0x16BD2D
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4585(iParam0, &Var0);
		if (((((((((SYSTEM::VDIST2(931.99f, 43.83f, 80.1f, Var0) <= 900f || SYSTEM::VDIST2(930.45f, 41.36f, 80.1f, Var0) <= 900f) || SYSTEM::VDIST2(964.4556f, 57.9093f, 112.1931f, Var0) <= 900f) || SYSTEM::VDIST2(926.4164f, 45.5401f, 59.9018f, Var0) <= 900f) || SYSTEM::VDIST2(936.3319f, 1.1849f, 77.7649f, Var0) <= 900f) || SYSTEM::VDIST2(968.591f, 63.923855f, 111.55298f, Var0) <= 900f) || SYSTEM::VDIST2(967.22f, 62.69f, 111.5531f, Var0) <= 900f) || SYSTEM::VDIST2(936.5542f, 1.1273f, 77.7649f, Var0) <= 900f) || SYSTEM::VDIST2(925.04f, 46.48f, 80.096f, Var0) <= 900f) || SYSTEM::VDIST2(924.507f, 60.3318f, 79.89629f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_4602(int iParam0, int iParam1)//Position - 0x16BEB3
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4585(iParam0, &Var0);
		if (!__LIB_5__::func_339(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Var0, __LIB_4__::func_303(__LIB_5__::func_631(__LIB_6__::func_338(iParam1, 1, 0)))) <= 1600f)
		{
			return 1;
		}
	}
	return 0;
}

void func_4607(int iParam0, int iParam1, var uParam2)//Position - 0x16BF41
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = func_4520();
	switch (iParam1)
	{
		case 0:
			func_4585(iParam0, &(uParam2->f_4));
			uParam2->f_7 = { 1f, 1f, 2f };
			MISC::SET_BIT(&(uParam2->f_3), 4);
			MISC::SET_BIT(&(uParam2->f_3), 1);
			MISC::SET_BIT(&(uParam2->f_3), 5);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(iVar1) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar1, true))
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				__LIB_3__::func_968(iParam0, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
				uParam2->f_18 = 0;
			}
			else
			{
				__LIB_3__::func_968(iParam0, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
			}
			break;
		case 1:
			func_4608(iParam0, &(uParam2->f_4), &(uParam2->f_7), &(uParam2->f_10), &(uParam2->f_13), &(uParam2->f_14));
			uParam2->f_2 = 1;
			MISC::SET_BIT(&(uParam2->f_3), 0);
			MISC::SET_BIT(&(uParam2->f_3), 2);
			MISC::SET_BIT(&(uParam2->f_3), 5);
			break;
	}
}

void func_4608(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x16C040
{
	int iVar0;
	var uVar1;
	iVar0 = func_4520();
	switch (iParam0)
	{
		case 88:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == __LIB_4__::func_546())
				{
					*uParam1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -5f, 0f) };
					*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, ENTITY::GET_ENTITY_HEADING(iVar0), 0f, 6f, -1.5f) };
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam2, &uVar1, false, false))
					{
						*uParam2 = { *uParam2, uParam2->f_1, uVar1 };
					}
					*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -6f, 2.5f) };
					*uParam4 = 1f;
					*uParam5 = ENTITY::GET_ENTITY_HEADING(iVar0);
				}
			}
			break;
	}
}

void func_4620(var uParam0, int iParam1)//Position - 0x16C3D7
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1543880/*func_4782*/;
			break;
		case 1:
			uParam0->f_30 = 1543800/*func_4781*/;
			break;
		case 2:
			uParam0->f_31 = 1543301/*func_4780*/;
			break;
		case 3:
			uParam0->f_34 = 1543251/*func_4779*/;
			break;
		case 4:
			uParam0->f_12 = 1543164/*func_4778*/;
			break;
		case 5:
			uParam0->f_11 = 1543154/*func_4777*/;
			break;
		case 37:
			uParam0->f_18 = 1543038/*func_4776*/;
			break;
		case 38:
			uParam0->f_9 = 1542916/*func_4775*/;
			break;
		case 6:
			uParam0->f_32 = 1542828/*func_4774*/;
			break;
		case 111:
			uParam0->f_35 = 1542814/*func_4773*/;
			break;
		case 11:
			uParam0->f_11 = 1542805/*func_4772*/;
			break;
		case 12:
			uParam0->f_33 = 1542426/*func_4769*/;
			break;
		case 14:
			uParam0->f_11 = 1542417/*func_4768*/;
			break;
		case 109:
			uParam0->f_56 = 1542409/*func_4767*/;
			break;
		case 79:
			*uParam0 = 1542385/*func_4766*/;
			break;
		case 13:
			uParam0->f_2 = 1542253/*func_4765*/;
			break;
		case 15:
			uParam0->f_2 = 1541971/*func_4763*/;
			break;
		case 75:
			uParam0->f_4 = 1541957/*func_4762*/;
			break;
		case 16:
			uParam0->f_5 = 1541439/*func_4760*/;
			break;
		case 108:
			uParam0->f_55 = 1537812/*func_4748*/;
			break;
		case 17:
			uParam0->f_17 = 1537275/*func_4746*/;
			break;
		case 19:
			uParam0->f_17 = 1537250/*func_4745*/;
			break;
		case 20:
			uParam0->f_3 = 1537166/*func_4744*/;
			break;
		case 21:
			uParam0->f_3 = 1537102/*func_4743*/;
			break;
		case 74:
			uParam0->f_53 = 1536922/*func_4742*/;
			break;
		case 22:
			uParam0->f_24 = 1536775/*func_4741*/;
			break;
		case 25:
			uParam0->f_23 = 1536151/*func_4739*/;
			break;
		case 30:
			uParam0->f_8 = 1535636/*func_4737*/;
			break;
		case 31:
			uParam0->f_39 = 1535353/*func_4736*/;
			break;
		case 33:
			uParam0->f_40 = 1534682/*func_4734*/;
			break;
		case 34:
			uParam0->f_41 = 1533418/*func_4733*/;
			break;
		case 36:
			uParam0->f_58 = 1533373/*func_4732*/;
			break;
		case 35:
			uParam0->f_42 = 1507658/*func_4726*/;
			break;
		case 45:
			uParam0->f_14 = 1507649/*func_4725*/;
			break;
		case 46:
			uParam0->f_14 = 1507640/*func_4724*/;
			break;
		case 110:
			uParam0->f_57 = 1507632/*func_4723*/;
			break;
		case 77:
			uParam0->f_13 = 1507609/*func_4722*/;
			break;
		case 47:
			uParam0->f_43 = 1507505/*func_4721*/;
			break;
		case 49:
			uParam0->f_8 = 1507464/*func_4720*/;
			break;
		case 50:
			*uParam0 = 1507331/*func_4718*/;
			break;
		case 51:
			*uParam0 = 1507261/*func_4717*/;
			break;
		case 52:
			uParam0->f_15 = 1507250/*func_4716*/;
			break;
		case 53:
			uParam0->f_13 = 1507112/*func_4715*/;
			break;
		case 54:
			uParam0->f_45 = 1506924/*func_4714*/;
			break;
		case 56:
			uParam0->f_46 = 1506915/*func_4713*/;
			break;
		case 57:
			uParam0->f_11 = 1506738/*func_4711*/;
			break;
		case 58:
			uParam0->f_13 = 1506600/*func_4710*/;
			break;
		case 64:
			uParam0->f_47 = 1506592/*func_4709*/;
			break;
		case 65:
			uParam0->f_21 = 1505756/*func_4707*/;
			break;
		case 66:
			uParam0->f_21 = 1505649/*func_4706*/;
			break;
		case 67:
			uParam0->f_21 = 1505585/*func_4705*/;
			break;
		case 68:
			*uParam0 = 1505097/*func_4704*/;
			break;
		case 69:
			*uParam0 = 1505088/*func_4703*/;
			break;
		case 70:
			uParam0->f_48 = 1505076/*func_4702*/;
			break;
		case 71:
			uParam0->f_49 = 1505067/*func_4701*/;
			break;
		case 107:
			uParam0->f_50 = 1505055/*func_4700*/;
			break;
		case 80:
			uParam0->f_7 = 1504352/*func_4696*/;
			break;
		case 84:
			uParam0->f_1 = 1504252/*func_4694*/;
			break;
		case 85:
			uParam0->f_1 = 1502268/*func_4691*/;
			break;
		case 87:
			uParam0->f_1 = 1499845/*func_4679*/;
			break;
		case 88:
			uParam0->f_1 = 1499836/*func_4678*/;
			break;
		case 96:
			uParam0->f_1 = 1499773/*func_4677*/;
			break;
		case 97:
			uParam0->f_1 = 1499453/*func_4674*/;
			break;
		case 98:
			uParam0->f_1 = 1495446/*func_4640*/;
			break;
		case 100:
			uParam0->f_22 = 1493295/*func_4624*/;
			break;
		case 78:
			uParam0->f_59 = 1493091/*func_4622*/;
			break;
		case 125:
			uParam0->f_19 = 1493075/*func_4621*/;
			break;
	}
}

int func_4640(int iParam0, int* iParam1)//Position - 0x16D196
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	__LIB_6__::func_427(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		func_1370(&iVar0, &(iParam1->f_109), 12);
		__LIB_5__::func_638(iParam0, &(iParam1->f_109));
	}
	__LIB_7__::func_63(iParam0, Global_1853189, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
	{
		OBJECT::DELETE_OBJECT(&(iParam1->f_176[3]));
	}
	Var1 = { __LIB_5__::func_343(iParam0) };
	STREAMING::SET_FOCUS_POS_AND_VEL(Var1, 0f, 0f, 0f);
	fVar2 = 2f;
	__LIB_5__::func_899(iParam0, &(iParam1->f_176[1]), &(iParam1->f_176[2]), &fVar2);
	__LIB_5__::func_514(iParam1, 0);
	iParam1->f_188 = 0;
	return 1;
}

int func_4691(int iParam0, int* iParam1)//Position - 0x16EC3C
{
	int iVar0;
	bool bVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			func_1370(&iVar0, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			return 0;
		}
		else
		{
			func_1339(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 0, 0, 0, 0, 1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_2358(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
	}
	bVar1 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
	{
		bVar1 = __LIB_4__::func_607(iParam0, &(iParam1->f_109));
	}
	__LIB_6__::func_429(iParam0, &(Global_1946250.f_3638), 0, bVar1);
	__LIB_7__::func_63(iParam0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	__LIB_5__::func_514(iParam1, 0);
	return 1;
}

void func_4739(int iParam0, int iParam1)//Position - 0x177097
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_5__::func_643(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar1 = __LIB_3__::func_680();
		}
		Var4 = { __LIB_4__::func_302(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_1562(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if (((((!bVar3 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_1562(bVar7))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_3__::func_779())
					{
						__LIB_7__::func_521(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_521(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4740(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4740(iParam0);
					}
					Jump @575; //curOff = 556
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4740(int iParam0)//Position - 0x1772D9
{
	__LIB_7__::func_521(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

int func_4748(var uParam0, var uParam1, var uParam2)//Position - 0x177714
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	*uParam2 = 0;
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar3 = __LIB_0__::func_840(*uParam0);
			if (__LIB_0__::func_872(iVar2, 1) && Global_1958624)
			{
				__LIB_10__::func_689(uParam1);
				return 0;
			}
			if (__LIB_1__::func_588(iVar2) && (Global_1958625 || Global_262145.f_21914 /* Tunable: -481896422 */))
			{
				__LIB_10__::func_689(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_10__::func_689(uParam1);
				return 0;
			}
			if (((VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("cargobob")) || VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("cargobob2"))) || VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("cargobob3"))) || VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("cargobob4")))
			{
				iVar4 = VEHICLE::GET_ENTITY_ATTACHED_TO_CARGOBOB(iVar2);
				iVar5 = VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(iVar2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4) || ENTITY::DOES_ENTITY_EXIST(iVar5))
				{
					__LIB_10__::func_689(uParam1);
					return 0;
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_1__::func_587(ENTITY::GET_ENTITY_MODEL(iVar2)))
			{
				if (__LIB_5__::func_644(uParam0))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar2) == joaat("thruster"))
					{
						if (!__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
						{
							if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									HUD::DISPLAY_HELP_TEXT_THIS_FRAME("HANGAR_ENTER2" /* GXT: This vehicle cannot be stored in the Hangar. */, false);
								}
							}
						}
					}
				}
				__LIB_10__::func_689(uParam1);
				return 0;
			}
			iVar6 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar6) || PED::IS_PED_INJURED(iVar6))
			{
				__LIB_10__::func_689(uParam1);
				return 0;
			}
			bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar6);
			if (__LIB_0__::func_872(iVar2, 1) && __LIB_3__::func_251(iVar2) != bVar7)
			{
				__LIB_10__::func_689(uParam1);
				return 0;
			}
			if (__LIB_1__::func_588(iVar2) && __LIB_0__::func_298(iVar2) != bVar7)
			{
				__LIB_10__::func_689(uParam1);
				return 0;
			}
			if (__LIB_3__::func_689(iVar2))
			{
				__LIB_10__::func_689(uParam1);
				return 0;
			}
			if (!__LIB_0__::func_872(iVar2, 1) && !__LIB_1__::func_588(iVar2))
			{
				if (__LIB_5__::func_644(uParam0))
				{
					if (!__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
					{
						if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								HUD::DISPLAY_HELP_TEXT_THIS_FRAME("HANGAR_ENTER1" /* GXT: Only Pegasus or Personal aircraft can be stored in the Hangar. */, false);
							}
						}
					}
					__LIB_10__::func_689(uParam1);
					return 0;
				}
			}
			if ((__LIB_1__::func_693(bVar7, 1, 1) && __LIB_1__::func_587(ENTITY::GET_ENTITY_MODEL(iVar2))) && __LIB_4__::func_614(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar6), iVar3))
			{
				if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_872(iVar2, 1))
					{
						if (__LIB_1__::func_463() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if ((!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373)) && !__LIB_2__::func_159(0))
					{
						if (__LIB_5__::func_644(uParam0))
						{
							if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
							{
								__LIB_0__::func_627(&(uParam1->f_397), 1, 0);
							}
							if (__LIB_0__::func_864(&(uParam1->f_397)) && !__LIB_0__::func_937(&(uParam1->f_397), 750, 1))
							{
								iVar1 = 1;
							}
							if (iVar1 || (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())))
							{
								if (__LIB_5__::func_331() || __LIB_3__::func_644(PLAYER::PLAYER_ID()))
								{
									if (__LIB_6__::func_4(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
									{
										__LIB_3__::func_122(&(uParam1->f_22.f_94));
										__LIB_5__::func_435(1, *uParam0);
										__LIB_7__::func_520(uParam1, 0);
										__LIB_7__::func_453(iVar2);
										return 1;
									}
									else if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID()))
									{
										__LIB_3__::func_122(&(uParam1->f_22.f_94));
										__LIB_7__::func_453(iVar2);
										return 1;
									}
									else
									{
										if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_4__::func_291(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0, 1075838976, 0))
										{
											bVar0 = true;
											if (uParam1->f_22.f_94 == -1)
											{
												__LIB_5__::func_569(&(uParam1->f_22.f_94), 5, "HANGAR_ENTER0" /* GXT: Press ~INPUT_CONTEXT~ to enter the Hangar with current vehicle. */, 0, 0, 0, 0);
											}
										}
										if (__LIB_3__::func_113(uParam1->f_22.f_94, 1) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
										{
											MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 30);
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_7__::func_520(uParam1, 0);
											__LIB_5__::func_435(1, *uParam0);
											__LIB_7__::func_453(iVar2);
											return 1;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					__LIB_30__::func_748(*uParam0);
					if (__LIB_3__::func_643(PLAYER::PLAYER_ID()))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_3__::func_122(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_5__::func_435(0, -1);
				}
				__LIB_7__::func_520(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (!bVar0)
		{
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_5__::func_435(0, -1);
	}
	__LIB_7__::func_520(uParam1, 1);
	return 0;
}

void func_4783(var uParam0, int iParam1)//Position - 0x178ED1
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1552409/*func_4844*/;
			break;
		case 1:
			uParam0->f_30 = 1552353/*func_4843*/;
			break;
		case 2:
			uParam0->f_31 = 1552134/*func_4842*/;
			break;
		case 3:
			uParam0->f_34 = 1552083/*func_4841*/;
			break;
		case 4:
			uParam0->f_12 = 1552049/*func_4840*/;
			break;
		case 6:
			uParam0->f_32 = 1551985/*func_4839*/;
			break;
		case 111:
			uParam0->f_35 = 1551976/*func_4838*/;
			break;
		case 79:
			*uParam0 = 1551952/*func_4837*/;
			break;
		case 11:
			uParam0->f_11 = 1551943/*func_4836*/;
			break;
		case 12:
			uParam0->f_33 = 1551851/*func_4835*/;
			break;
		case 14:
			uParam0->f_11 = 1551842/*func_4834*/;
			break;
		case 109:
			uParam0->f_56 = 1551834/*func_4833*/;
			break;
		case 15:
			uParam0->f_2 = 1551582/*func_4832*/;
			break;
		case 13:
			uParam0->f_2 = 1551573/*func_4831*/;
			break;
		case 75:
			uParam0->f_4 = 1551564/*func_4830*/;
			break;
		case 16:
			uParam0->f_5 = 1551555/*func_4829*/;
			break;
		case 108:
			uParam0->f_55 = 1551546/*func_4828*/;
			break;
		case 17:
			uParam0->f_17 = 1551502/*func_4827*/;
			break;
		case 19:
			uParam0->f_17 = 1551492/*func_4826*/;
			break;
		case 20:
			uParam0->f_3 = 1551445/*func_4825*/;
			break;
		case 21:
			uParam0->f_3 = 1551393/*func_4824*/;
			break;
		case 74:
			uParam0->f_53 = 1551337/*func_4823*/;
			break;
		case 22:
			uParam0->f_24 = 1551252/*func_4822*/;
			break;
		case 25:
			uParam0->f_23 = 1550285/*func_4817*/;
			break;
		case 30:
			uParam0->f_8 = 1550075/*func_4816*/;
			break;
		case 31:
			uParam0->f_39 = 1550045/*func_4815*/;
			break;
		case 33:
			uParam0->f_40 = 1549855/*func_4814*/;
			break;
		case 34:
			uParam0->f_41 = 1546741/*func_4813*/;
			break;
		case 36:
			uParam0->f_58 = 1546688/*func_4812*/;
			break;
		case 35:
			uParam0->f_42 = 1545497/*func_4810*/;
			break;
		case 45:
			uParam0->f_14 = 1545488/*func_4809*/;
			break;
		case 46:
			uParam0->f_14 = 1545479/*func_4808*/;
			break;
		case 110:
			uParam0->f_57 = 1545471/*func_4807*/;
			break;
		case 77:
			uParam0->f_13 = 1545460/*func_4806*/;
			break;
		case 47:
			uParam0->f_43 = 1545357/*func_4805*/;
			break;
		case 49:
			uParam0->f_8 = 1545332/*func_4804*/;
			break;
		case 50:
			*uParam0 = 1545294/*func_4803*/;
			break;
		case 51:
			*uParam0 = 1545285/*func_4802*/;
			break;
		case 52:
			uParam0->f_15 = 1545274/*func_4801*/;
			break;
		case 53:
			uParam0->f_13 = 1545193/*func_4800*/;
			break;
		case 54:
			uParam0->f_45 = 1545185/*func_4799*/;
			break;
		case 56:
			uParam0->f_46 = 1545176/*func_4798*/;
			break;
		case 57:
			uParam0->f_11 = 1545166/*func_4797*/;
			break;
		case 58:
			uParam0->f_13 = 1544959/*func_4796*/;
			break;
		case 64:
			uParam0->f_47 = 1544951/*func_4795*/;
			break;
		case 65:
			uParam0->f_21 = 1544943/*func_4794*/;
			break;
		case 66:
			uParam0->f_21 = 1544935/*func_4793*/;
			break;
		case 67:
			uParam0->f_21 = 1544927/*func_4792*/;
			break;
		case 68:
			*uParam0 = 1544918/*func_4791*/;
			break;
		case 69:
			*uParam0 = 1544909/*func_4790*/;
			break;
		case 70:
			uParam0->f_48 = 1544897/*func_4789*/;
			break;
		case 71:
			uParam0->f_49 = 1544888/*func_4788*/;
			break;
		case 107:
			uParam0->f_50 = 1544876/*func_4787*/;
			break;
		case 80:
			uParam0->f_7 = 1544867/*func_4786*/;
			break;
		case 73:
			uParam0->f_51 = 1544858/*func_4785*/;
			break;
		case 78:
			uParam0->f_59 = 1544850/*func_4784*/;
			break;
	}
}

void func_4817(int iParam0, int iParam1)//Position - 0x17A7CD
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_7__::func_598(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		__LIB_7__::func_343(iParam0, &Var6);
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((!bVar1 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_3__::func_779())
					{
						__LIB_7__::func_597(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_636(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_597(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_342(1);
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_6__::func_673(), true), ENTITY::GET_ENTITY_HEADING(__LIB_6__::func_673()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4818(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_342(1);
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_6__::func_673(), true), ENTITY::GET_ENTITY_HEADING(__LIB_6__::func_673()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4818(iParam0);
					}
					Jump @634; //curOff = 615
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4818(int iParam0)//Position - 0x17AA4A
{
	__LIB_7__::func_597(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4845(var uParam0, int iParam1)//Position - 0x17B022
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1630017/*func_4997*/;
			break;
		case 1:
			uParam0->f_30 = 1629961/*func_4996*/;
			break;
		case 2:
			uParam0->f_31 = 1628416/*func_4995*/;
			break;
		case 3:
			uParam0->f_34 = 1628367/*func_4994*/;
			break;
		case 4:
			uParam0->f_12 = 1628333/*func_4993*/;
			break;
		case 6:
			uParam0->f_32 = 1628269/*func_4992*/;
			break;
		case 111:
			uParam0->f_35 = 1628246/*func_4991*/;
			break;
		case 79:
			*uParam0 = 1628222/*func_4990*/;
			break;
		case 37:
			uParam0->f_18 = 1628106/*func_4989*/;
			break;
		case 38:
			uParam0->f_9 = 1628039/*func_4988*/;
			break;
		case 11:
			uParam0->f_11 = 1628030/*func_4987*/;
			break;
		case 12:
			uParam0->f_33 = 1627685/*func_4985*/;
			break;
		case 14:
			uParam0->f_11 = 1627676/*func_4984*/;
			break;
		case 109:
			uParam0->f_56 = 1627668/*func_4983*/;
			break;
		case 15:
			uParam0->f_2 = 1622342/*func_4961*/;
			break;
		case 13:
			uParam0->f_2 = 1622333/*func_4960*/;
			break;
		case 75:
			uParam0->f_4 = 1622324/*func_4959*/;
			break;
		case 16:
			uParam0->f_5 = 1622299/*func_4958*/;
			break;
		case 108:
			uParam0->f_55 = 1615772/*func_4943*/;
			break;
		case 17:
			uParam0->f_17 = 1615190/*func_4942*/;
			break;
		case 19:
			uParam0->f_17 = 1615165/*func_4941*/;
			break;
		case 20:
			uParam0->f_3 = 1615104/*func_4940*/;
			break;
		case 21:
			uParam0->f_3 = 1614984/*func_4939*/;
			break;
		case 74:
			uParam0->f_53 = 1614928/*func_4938*/;
			break;
		case 22:
			uParam0->f_24 = 1614843/*func_4937*/;
			break;
		case 25:
			uParam0->f_23 = 1613871/*func_4932*/;
			break;
		case 30:
			uParam0->f_8 = 1613131/*func_4931*/;
			break;
		case 31:
			uParam0->f_39 = 1612862/*func_4930*/;
			break;
		case 33:
			uParam0->f_40 = 1611951/*func_4928*/;
			break;
		case 34:
			uParam0->f_41 = 1608607/*func_4927*/;
			break;
		case 36:
			uParam0->f_58 = 1608554/*func_4926*/;
			break;
		case 35:
			uParam0->f_42 = 1607871/*func_4924*/;
			break;
		case 45:
			uParam0->f_14 = 1607862/*func_4923*/;
			break;
		case 46:
			uParam0->f_14 = 1607853/*func_4922*/;
			break;
		case 110:
			uParam0->f_57 = 1607410/*func_4921*/;
			break;
		case 77:
			uParam0->f_13 = 1607399/*func_4920*/;
			break;
		case 47:
			uParam0->f_43 = 1607296/*func_4919*/;
			break;
		case 49:
			uParam0->f_8 = 1607271/*func_4918*/;
			break;
		case 50:
			*uParam0 = 1607233/*func_4917*/;
			break;
		case 51:
			*uParam0 = 1607209/*func_4916*/;
			break;
		case 52:
			uParam0->f_15 = 1607198/*func_4915*/;
			break;
		case 53:
			uParam0->f_13 = 1607119/*func_4914*/;
			break;
		case 54:
			uParam0->f_45 = 1607111/*func_4913*/;
			break;
		case 56:
			uParam0->f_46 = 1607102/*func_4912*/;
			break;
		case 57:
			uParam0->f_11 = 1607092/*func_4911*/;
			break;
		case 58:
			uParam0->f_13 = 1606863/*func_4910*/;
			break;
		case 64:
			uParam0->f_47 = 1560465/*func_4880*/;
			break;
		case 65:
			uParam0->f_21 = 1559327/*func_4877*/;
			break;
		case 66:
			uParam0->f_21 = 1559104/*func_4875*/;
			break;
		case 67:
			uParam0->f_21 = 1558209/*func_4871*/;
			break;
		case 68:
			*uParam0 = 1557664/*func_4870*/;
			break;
		case 69:
			*uParam0 = 1557655/*func_4869*/;
			break;
		case 70:
			uParam0->f_48 = 1557643/*func_4868*/;
			break;
		case 71:
			uParam0->f_49 = 1557634/*func_4867*/;
			break;
		case 107:
			uParam0->f_50 = 1557622/*func_4866*/;
			break;
		case 80:
			uParam0->f_7 = 1555562/*func_4858*/;
			break;
		case 73:
			uParam0->f_51 = 1553794/*func_4850*/;
			break;
		case 78:
			uParam0->f_59 = 1553413/*func_4846*/;
			break;
	}
}

int func_4850(int iParam0, var uParam1)//Position - 0x17B582
{
	int iVar0;
	int iVar1;
	struct<101> Var2;
	int iVar3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	if (!__LIB_0__::func_799(joaat("trailerlarge")))
	{
		return 0;
	}
	if (!__LIB_0__::func_799(__LIB_4__::func_650(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	if (!__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
	{
		return 0;
	}
	iVar0 = Global_2815059.f_304[1];
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !__LIB_0__::func_86(uParam1->f_22.f_250))
	{
		STREAMING::SET_FOCUS_POS_AND_VEL(uParam1->f_22.f_250, 0f, 0f, 0f);
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((uParam1->f_22.f_250 - 100f), (uParam1->f_22.f_250.f_1 - 100f), (uParam1->f_22.f_250 + 100f), (uParam1->f_22.f_250.f_1 + 100f));
	if ((__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				Var2.f_9 = 49;
				Var2.f_59 = 2;
				Var2.f_78 = -1;
				Var2.f_79 = -1;
				Var2.f_96 = -1;
				Var2.f_97 = 1;
				Var2.f_99 = 132;
				Var2.f_100 = -1;
				iVar3 = PLAYER::PLAYER_PED_ID();
				__LIB_4__::func_562(uParam1->f_22.f_250, 25f, 0);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_22.f_105) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_22.f_105, false))
				{
					VEHICLE::SET_TRAILER_LEGS_LOWERED(uParam1->f_22.f_105);
				}
				switch (uParam1->f_22.f_217)
				{
					case 0:
						if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_22.f_105))
						{
							if (__LIB_4__::func_649())
							{
								uParam1->f_22.f_250 = { 842.616f, -3239.21f, -96.8731f };
								uParam1->f_22.f_253 = 62.260525f;
								uParam1->f_22.f_189[0 /*3*/] = { 1.47961f, 0.00453185f, 62.2534f };
							}
							else if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
							{
								uParam1->f_22.f_250 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
								uParam1->f_22.f_253 = ENTITY::GET_ENTITY_HEADING(iVar0);
								uParam1->f_22.f_189[0 /*3*/] = { ENTITY::GET_ENTITY_ROTATION(iVar0, 2) };
							}
							uParam1->f_22.f_105 = VEHICLE::CREATE_VEHICLE(joaat("trailerlarge"), uParam1->f_22.f_250, uParam1->f_22.f_250.f_1, (uParam1->f_22.f_250.f_2 - 70f), uParam1->f_22.f_253, false, false, false);
							ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_22.f_105, true);
							ENTITY::SET_ENTITY_COLLISION(uParam1->f_22.f_105, false, false);
							__LIB_6__::func_29(iVar0, &Var2);
							__LIB_36__::func_246(uParam1->f_22.f_105, &Var2, 1, 1, 0);
						}
						else
						{
							uParam1->f_22.f_217 = 1;
						}
						break;
					case 1:
						if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_22.f_105))
						{
							if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, true, false);
								NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(true, false);
								NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, false);
								if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_GR_MOC_Drive_Up_Ramp_Scene"))
								{
									AUDIO::START_AUDIO_SCENE("DLC_GR_MOC_Drive_Up_Ramp_Scene");
								}
							}
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_22.f_105, false))
								{
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_22.f_105, uParam1->f_22.f_250, false, false, true);
									ENTITY::SET_ENTITY_HEADING(uParam1->f_22.f_105, uParam1->f_22.f_253);
									ENTITY::SET_ENTITY_ROTATION(uParam1->f_22.f_105, uParam1->f_22.f_189[0 /*3*/], 2, true);
									ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_22.f_105, false);
									ENTITY::SET_ENTITY_COLLISION(uParam1->f_22.f_105, true, false);
									ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_22.f_105, true);
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Enter_Car_Ramp_Deploy", uParam1->f_22.f_105, "DLC_GR_MOC_Enter_Exit_Sounds", false, 0);
									VEHICLE::SET_VEHICLE_DOOR_OPEN(uParam1->f_22.f_105, 5, false, false);
									VEHICLE::SET_TRAILER_LEGS_LOWERED(uParam1->f_22.f_105);
									ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uParam1->f_22.f_105);
									func_4995(iParam0, uParam1, 0, 0);
									uParam1->f_22.f_11 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
									CAM::SET_CAM_PARAMS(uParam1->f_22.f_11, uParam1->f_22.f_13, uParam1->f_22.f_16, uParam1->f_22.f_19, 0, 1, 1, 2);
									CAM::SET_CAM_FAR_CLIP(uParam1->f_22.f_11, 1000f);
									CAM::SHAKE_CAM(uParam1->f_22.f_11, "HAND_SHAKE", uParam1->f_22.f_40);
									CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
									Var4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_22.f_250, uParam1->f_22.f_253, 0f, -16.5f, 0f) };
									MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &fVar5, false, false);
									MISC::CLEAR_AREA(Var4.f_0, Var4.f_1, fVar5, 5f, false, false, false, false);
									GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Var4.f_0, Var4.f_1, fVar5, 5f);
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_22.f_105, uParam1->f_22.f_250, false, false, true);
									if (__LIB_4__::func_649())
									{
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, Var4, false, false, true);
									}
									else
									{
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, Var4.f_0, Var4.f_1, fVar5, false, false, true);
									}
									ENTITY::SET_ENTITY_HEADING(iVar1, uParam1->f_22.f_253);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar1, 0f);
									__LIB_4__::func_648();
									ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iVar1);
									uParam1->f_22.f_217 = 2;
								}
							}
						}
						break;
					case 2:
						if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_22.f_105, false) && NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
						{
							VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iVar1, 0f);
							VEHICLE::SET_VEHICLE_MAX_SPEED(iVar1, -1f);
							VEHICLE::STOP_BRINGING_VEHICLE_TO_HALT(iVar1);
							__LIB_5__::func_648(iVar1, &fVar6);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Enter_Car_Ramp_Hits_Ground", uParam1->f_22.f_105, "DLC_GR_MOC_Enter_Exit_Sounds", false, 0);
							__LIB_4__::func_647(&iVar3, &iVar1, 3000, fVar6, 32);
							uParam1->f_22.f_217 = 0;
							__LIB_4__::func_646(0);
							__LIB_4__::func_645(0);
							return 1;
						}
						break;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
			}
		}
	}
	return 0;
}

int func_4858(var uParam0, int iParam1, var uParam2)//Position - 0x17BC6A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_1__::func_583(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
	{
		if (__LIB_3__::func_100() || __LIB_0__::func_877())
		{
			return 0;
		}
		if (__LIB_4__::func_655(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1957730)
	{
		if (Global_1574632.f_18 != 0 || __LIB_5__::func_333())
		{
			Global_1957730 = 0;
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 576);
				}
			}
			return 0;
		}
	}
	if (__LIB_2__::func_77())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 576);
			}
		}
		return 0;
	}
	if (__LIB_2__::func_715())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 576);
			}
		}
		return 0;
	}
	if (Global_1853185 != __LIB_0__::func_162())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 5))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (iParam1 == PLAYER::PLAYER_ID())
			{
				if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar0))
				{
					return 0;
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					return 0;
				}
				if (((((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 0) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 0) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 0)
				{
					return 0;
				}
				if (PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
				{
					return 0;
				}
				if (TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					return 0;
				}
				if (__LIB_5__::func_621())
				{
					return 0;
				}
				if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar0) && Global_1957730 == 1)
				{
					if (((((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) != 0f || PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/) != 0f) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/))
					{
						__LIB_1__::func_33(1);
						__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 0, 0);
						__LIB_3__::func_738(0);
						__LIB_4__::func_654(0);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, false);
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, true);
						VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar0, true);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iVar0, PLAYER::PLAYER_ID(), false);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
						__LIB_4__::func_519(iVar0, 0);
						if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && __LIB_0__::func_389(PLAYER::PLAYER_ID()))
						{
							if (__LIB_0__::func_541(iVar0, 0))
							{
								__LIB_4__::func_642(1);
							}
							else
							{
								if (__LIB_4__::func_633(PLAYER::PLAYER_ID()))
								{
									if (__LIB_0__::func_155() != -1)
									{
										if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2 != -1 && Global_2703735.f_61.f_49)
										{
											__LIB_1__::func_891(1, 0, 1, 0, 0, 0, 0);
										}
									}
									iVar1 = -1;
									__LIB_1__::func_775(156, &iVar1, 1);
									if (iVar1 >= 0)
									{
										__LIB_1__::func_821(iVar1);
									}
								}
								__LIB_5__::func_352(750);
								__LIB_6__::func_413(1);
							}
						}
						if (!__LIB_1__::func_659(Global_1853185))
						{
							if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_541(iVar0, 0))
							{
								if (__LIB_4__::func_633(PLAYER::PLAYER_ID()))
								{
									if (__LIB_0__::func_155() != -1)
									{
										if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2 != -1 && Global_2703735.f_61.f_49)
										{
											__LIB_1__::func_891(1, 0, 1, 0, 0, 0, 0);
										}
									}
									iVar2 = -1;
									__LIB_1__::func_775(156, &iVar2, 1);
									if (iVar2 >= 0)
									{
										__LIB_1__::func_821(iVar2);
									}
								}
								__LIB_5__::func_352(750);
								__LIB_6__::func_413(1);
							}
							__LIB_2__::func_976();
							return 1;
						}
						else if (__LIB_4__::func_653(PLAYER::PLAYER_ID()) && __LIB_1__::func_659(Global_1853185))
						{
							__LIB_2__::func_976();
							return 1;
						}
						else if (!__LIB_0__::func_389(PLAYER::PLAYER_ID()))
						{
							bLocal_102 = true;
						}
						else
						{
							__LIB_4__::func_652(0);
							__LIB_4__::func_651(1);
						}
					}
				}
				if (bLocal_102)
				{
					__LIB_1__::func_33(1);
					if (__LIB_0__::func_541(iVar0, 0))
					{
						__LIB_4__::func_553(PLAYER::PLAYER_ID(), __LIB_4__::func_566(PLAYER::PLAYER_ID()), 1);
						__LIB_4__::func_642(1);
					}
					else
					{
						if (__LIB_0__::func_155() != -1)
						{
							if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2 != -1 && Global_2703735.f_61.f_49)
							{
								__LIB_1__::func_891(1, 0, 1, 0, 0, 0, 0);
							}
						}
						iVar3 = -1;
						__LIB_1__::func_775(156, &iVar3, 1);
						__LIB_4__::func_519(iVar0, 0);
						if (iVar3 >= 0)
						{
							MISC::SET_BIT(&(Global_1585857[iVar3 /*142*/].f_103), 0);
							__LIB_1__::func_821(iVar3);
							if (__LIB_1__::func_659(PLAYER::PLAYER_ID()))
							{
								__LIB_3__::func_602(0);
								__LIB_5__::func_411(1);
							}
							else
							{
								__LIB_5__::func_352(750);
							}
							__LIB_4__::func_956(PLAYER::PLAYER_ID(), __LIB_4__::func_566(PLAYER::PLAYER_ID()), 1);
							__LIB_6__::func_413(1);
						}
					}
					__LIB_4__::func_651(1);
					__LIB_4__::func_652(0);
				}
			}
			else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::GET_PLAYER_PED(iParam1) && uParam2)
			{
				__LIB_2__::func_976();
				return 1;
			}
		}
	}
	return 0;
}

void func_4880(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x17CF91
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = func_4500();
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (__LIB_4__::func_671())
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_4__::func_670(0);
			}
		}
		if (__LIB_2__::func_730(PLAYER::PLAYER_ID()))
		{
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == joaat("GtaMloRoom001") && CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22.f_105))
				{
					VEHICLE::DELETE_VEHICLE(&(uParam0->f_22.f_105));
				}
			}
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			func_4907(uParam0);
		}
		if (__LIB_4__::func_535(PLAYER::PLAYER_ID()))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_5__::func_195(PLAYER::PLAYER_ID())) || BitTest(Global_1946250.f_506, 11))
			{
				if ((HUD::IS_WARNING_MESSAGE_ACTIVE() && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) != -1) || BitTest(Global_1946250.f_506, 11))
				{
					if (!__LIB_4__::func_649() && !__LIB_1__::func_659(Global_1853185))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						__LIB_4__::func_534(0);
						Global_1946250.f_3630 = 0;
						__LIB_4__::func_669(0);
						CAM::DO_SCREEN_FADE_IN(500);
						__LIB_4__::func_660(iParam1);
						__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
						__LIB_4__::func_539(1);
						__LIB_4__::func_668(0);
						__LIB_4__::func_527(0);
					}
					else
					{
						__LIB_11__::func_915(iParam1);
					}
				}
			}
		}
		if (__LIB_4__::func_649() || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 5))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, false);
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_363(uParam0->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_3__::func_122(&(uParam0->f_22.f_94));
			}
		}
		if (Global_1853185 != __LIB_0__::func_162())
		{
			if (PLAYER::PLAYER_ID() == Global_1853185)
			{
				if (__LIB_1__::func_659(PLAYER::PLAYER_ID()))
				{
					if ((((__LIB_4__::func_665(PLAYER::PLAYER_ID()) || __LIB_4__::func_295(PLAYER::PLAYER_ID())) || __LIB_3__::func_965()) || __LIB_4__::func_671()) || Global_1957730)
					{
						__LIB_1__::func_33(1);
					}
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) != -1 && __LIB_4__::func_535(PLAYER::PLAYER_ID()))
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
					if (__LIB_1__::func_693(bVar2, 1, 1))
					{
						if (__LIB_3__::func_644(bVar2))
						{
							if (__LIB_5__::func_196(bVar2) == 81)
							{
								if (func_4961(iParam1) && !__LIB_2__::func_730(PLAYER::PLAYER_ID()))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									__LIB_4__::func_534(0);
									__LIB_4__::func_664(0);
									CAM::DO_SCREEN_FADE_IN(500);
									__LIB_4__::func_660(iParam1);
									__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
									if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
									{
										NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
									}
									__LIB_4__::func_539(1);
								}
							}
						}
					}
				}
			}
		}
		if (__LIB_4__::func_665(PLAYER::PLAYER_ID()))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				HUD::SET_FRONTEND_ACTIVE(false);
			}
			else
			{
				HUD::DISABLE_FRONTEND_THIS_FRAME();
			}
		}
	}
	if (__LIB_0__::func_833())
	{
		if (Global_1946250.f_523)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
		}
	}
	if ((((func_4961(iParam1) && !__LIB_2__::func_730(PLAYER::PLAYER_ID())) && PLAYER::PLAYER_ID() == func_4499()) && !__LIB_1__::func_659(PLAYER::PLAYER_ID())) || !__LIB_0__::func_893())
	{
		if (!__LIB_0__::func_833())
		{
			__LIB_18__::func_503(uParam0, 1);
		}
	}
	if ((((BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 7) || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 25)) && func_4890(iParam1)) && !__LIB_1__::func_659(func_4499())) || BitTest(Global_1946250.f_506, 11))
	{
		if (!__LIB_4__::func_649() && !__LIB_1__::func_659(Global_1853185))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("am_mp_smpl_interior_int")) > 0)
			{
				__LIB_3__::func_514(0);
				__LIB_4__::func_539(1);
			}
			__LIB_5__::func_435(0, -1);
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
			}
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			__LIB_4__::func_527(0);
			__LIB_4__::func_669(0);
			__LIB_4__::func_663(0);
			CAM::DO_SCREEN_FADE_IN(500);
			__LIB_4__::func_660(iParam1);
			__LIB_4__::func_664(0);
			__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
			__LIB_4__::func_668(0);
		}
		else
		{
			__LIB_11__::func_915(iParam1);
		}
	}
	if (__LIB_5__::func_757(iVar0))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_4882(uParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !func_4961(iParam1))
		{
		}
		else if (!__LIB_3__::func_171(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == func_4499())
		{
			__LIB_18__::func_503(uParam0, 1);
		}
		if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
		{
			if (PLAYER::PLAYER_ID() == __LIB_3__::func_250(iVar0, 1, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
			}
		}
	}
	if (__LIB_4__::func_661())
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		HUD::DISABLE_FRONTEND_THIS_FRAME();
	}
	if (__LIB_3__::func_950(PLAYER::PLAYER_ID()) || __LIB_4__::func_535(PLAYER::PLAYER_ID()))
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	}
}

int func_4882(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x17D4DA
{
	struct<2> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (((!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1) && !BitTest(uParam0->f_22, 1)) && ENTITY::GET_ENTITY_MODEL(iParam1) != joaat("oppressor2")) && !__LIB_5__::func_808(PLAYER::PLAYER_ID(), 81))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 1f && !BitTest(uParam0->f_22, 1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_4__::func_954(PLAYER::PLAYER_ID()))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam1);
		if (((iVar1 == joaat("caddy2") || iVar1 == joaat("caddy3")) || iVar1 == joaat("hauler2")) || iVar1 == joaat("phantom3"))
		{
			return 0;
		}
	}
	if (!__LIB_4__::func_545())
	{
		return 0;
	}
	if (__LIB_0__::func_193())
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (!__LIB_3__::func_958())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!__LIB_5__::func_353())
		{
			return 0;
		}
		bVar2 = __LIB_4__::func_633(PLAYER::PLAYER_ID());
		bVar3 = __LIB_0__::func_389(PLAYER::PLAYER_ID());
		if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
		{
			if (!__LIB_32__::func_599(iParam1, 1234, &Var0, 0, 0, bVar2, bVar3, iParam2))
			{
				return 0;
			}
		}
	}
	if (__LIB_4__::func_662(ENTITY::GET_ENTITY_MODEL(iParam1)))
	{
		return 0;
	}
	if (__LIB_4__::func_306(PLAYER::PLAYER_ID()) || __LIB_4__::func_305(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_4499() != PLAYER::PLAYER_ID())
	{
		return 0;
	}
	if ((!__LIB_1__::func_461(iParam1, 1) && !__LIB_0__::func_541(iParam1, 0)) && __LIB_0__::func_389(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_2815059.f_303 != iParam1 && __LIB_0__::func_541(iParam1, 0)) && __LIB_0__::func_389(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__::func_541(iParam1, 0) && Global_2703735.f_501[PLAYER::PLAYER_ID()] == iParam1)
	{
		return 0;
	}
	if (Global_262145.f_21127 /* Tunable: -210511076 */ && __LIB_0__::func_389(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_262145.f_21126 /* Tunable: DISABLE_STORE_PV */ && __LIB_0__::func_872(iParam1, 1))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			__LIB_1__::func_707("PROP_NO_PVTUN" /* GXT: Unable to enter the Mobile Operations Center in this vehicle at this time.  Please enter on foot. */, -1);
		}
		return 0;
	}
	if ((Global_262145.f_21127 /* Tunable: -210511076 */ && __LIB_4__::func_633(PLAYER::PLAYER_ID())) && __LIB_5__::func_440(iParam1))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			__LIB_1__::func_707("PROP_NO_PVTUN" /* GXT: Unable to enter the Mobile Operations Center in this vehicle at this time.  Please enter on foot. */, -1);
		}
		return 0;
	}
	if (Global_262145.f_21137 /* Tunable: -1117138206 */)
	{
		__LIB_1__::func_775(156, &iVar4, 1);
		__LIB_1__::func_660(__LIB_1__::func_463(), &iVar5);
		if (iVar5 == 156 && __LIB_1__::func_461(iParam1, 1))
		{
		}
		else if (iVar4 > 0)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				__LIB_1__::func_707("PROP_NO_PVTUN" /* GXT: Unable to enter the Mobile Operations Center in this vehicle at this time.  Please enter on foot. */, -1);
			}
			return 0;
		}
	}
	if (__LIB_3__::func_531(iParam1, 0) || __LIB_3__::func_531(iParam1, 1))
	{
		return 0;
	}
	return 1;
}

int func_4890(int iParam0)//Position - 0x17DB49
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_4961(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
		{
			if (!__LIB_0__::func_893())
			{
				return 1;
			}
			if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				return 1;
			}
			if (NETWORK::IS_COMMERCE_STORE_OPEN())
			{
				return 1;
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (Global_1946250.f_3630 != __LIB_0__::func_162())
				{
					if ((!__LIB_3__::func_171(Global_1946250.f_3630) && !__LIB_4__::func_902(Global_1946250.f_3630)) && !BitTest(Global_2689235[Global_1946250.f_3630 /*453*/].f_318, 5))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_4907(var uParam0)//Position - 0x1882C6
{
	int iVar0;
	struct<3> Var1;
	float* fVar2;
	float* fVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	iVar0 = func_4500();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!BitTest(uParam0->f_22, 2))
			{
				Var1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -7.9f, 0f) };
				Var4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -8.5f, 0f) };
				__LIB_4__::func_536(iVar0, Var1, &fVar2);
				__LIB_4__::func_536(iVar0, Var4, &fVar3);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(func_4499()), false))
				{
					iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(func_4499()), false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar5) && !ENTITY::IS_ENTITY_DEAD(iVar5, false))
				{
					uParam0->f_22.f_107 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1.f_0, Var1.f_1, fVar2, Var4.f_0, Var4.f_1, fVar3, 1f, 81, iVar5, 4);
				}
				else
				{
					uParam0->f_22.f_107 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1.f_0, Var1.f_1, fVar2, Var4.f_0, Var4.f_1, fVar3, 2f, 83, iVar0, 4);
				}
				if (uParam0->f_22.f_107 != 0)
				{
					MISC::SET_BIT(&(uParam0->f_22), 2);
				}
			}
			else
			{
				iVar10 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_22.f_107, &iVar6, &uVar7, &uVar8, &uVar9);
				if (iVar10 == 2)
				{
					if (iVar6 == 0)
					{
						MISC::CLEAR_BIT(&Global_1946250, 19);
						uParam0->f_22.f_107 = 0;
						MISC::CLEAR_BIT(&(uParam0->f_22), 2);
					}
					else
					{
						uParam0->f_22.f_107 = 0;
						MISC::SET_BIT(&Global_1946250, 19);
						MISC::CLEAR_BIT(&(uParam0->f_22), 2);
					}
				}
				else if (iVar10 == 0)
				{
					MISC::CLEAR_BIT(&(uParam0->f_22), 2);
					uParam0->f_22.f_107 = 0;
				}
			}
		}
	}
}

Vector3 func_4910(var uParam0)//Position - 0x1884CF
{
	int iVar0;
	iVar0 = func_4500();
	if (Global_1853185 != __LIB_0__::func_162())
	{
		if (__LIB_1__::func_659(Global_1853185))
		{
			return 848.7985f, -3236.5745f, -100.0893f;
		}
		else if (Global_1853185 != PLAYER::PLAYER_ID())
		{
			return Global_2689235[Global_1853185 /*453*/].f_318.f_11;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			return ENTITY::GET_ENTITY_COORDS(iVar0, true);
		}
		else
		{
			return Global_2689235[Global_1853185 /*453*/].f_318.f_11;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return ENTITY::GET_ENTITY_COORDS(iVar0, true);
	}
	else if (__LIB_3__::func_250(iVar0, 1, 0) != __LIB_0__::func_162())
	{
		return Global_2689235[__LIB_3__::func_250(iVar0, 1, 0) /*453*/].f_318.f_11;
	}
	return 0f, 0f, 0f;
}

Vector3 func_4914(int iParam0)//Position - 0x1885CF
{
	int iVar0;
	iVar0 = func_4500();
	switch (iParam0)
	{
		case 81:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("trailerlarge"))
				{
					return ENTITY::GET_ENTITY_COORDS(iVar0, true);
				}
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_4921(var uParam0)//Position - 0x1886F2
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (BitTest(uParam0->f_22, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22.f_256) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_22.f_256, true))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_22.f_256))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(uParam0->f_22.f_256, false);
				if (uParam0->f_22.f_255 != 0 && uParam0->f_22.f_255 != VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(uParam0->f_22.f_256))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_22.f_256, uParam0->f_22.f_255);
				}
				__LIB_18__::func_503(uParam0, 1);
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_22.f_256);
			}
		}
		else
		{
			__LIB_18__::func_503(uParam0, 1);
		}
		__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
	}
	else if (Global_2787905)
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_5__::func_195(PLAYER::PLAYER_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_0__::func_695(iVar0))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
							if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_693(bVar2, 1, 1))
							{
								if (BitTest(Global_2689235[bVar2 /*453*/].f_318, 5) && __LIB_0__::func_172(__LIB_5__::func_196(bVar2)) == 5)
								{
									if ((((func_4890(__LIB_5__::func_196(bVar2)) || !__LIB_5__::func_337()) || !__LIB_0__::func_893()) || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) || NETWORK::IS_COMMERCE_STORE_OPEN())
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_4928(int iParam0, int iParam1)//Position - 0x1898AF
{
	bool bVar0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = __LIB_0__::func_162();
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_8 = 0;
	Global_1946250.f_506 = 0;
	bVar0 = __LIB_2__::func_39(PLAYER::PLAYER_ID());
	if (((__LIB_4__::func_649() && Global_1853186 != __LIB_0__::func_162()) && Global_1853186 != PLAYER::PLAYER_ID()) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
	{
		if (Global_1946250.f_3280 != PLAYER::PLAYER_ID())
		{
			if (Global_1946250.f_3280 != -1)
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 1);
				Global_1853185 = Global_1853186;
			}
			else
			{
				if (Global_1946250.f_3280 == -1)
				{
					__LIB_6__::func_69(Global_1853186);
				}
				Global_1853185 = Global_1853186;
			}
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853185;
		}
	}
	else if ((Global_1946250.f_3280 != -1 && Global_1946250.f_3280 != PLAYER::PLAYER_ID()) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
	{
		__LIB_6__::func_765(bVar0, 1);
		MISC::SET_BIT(&(Global_1946250.f_506), 1);
		Global_1853185 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853185;
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
	{
		__LIB_6__::func_765(bVar0, 0);
		if (bVar0 != __LIB_0__::func_162())
		{
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = bVar0;
		}
	}
	else if (__LIB_3__::func_950(PLAYER::PLAYER_ID()))
	{
		__LIB_6__::func_765(bVar0, 1);
		MISC::SET_BIT(&(Global_1946250.f_506), 1);
		Global_1853185 = Global_1946250.f_3630;
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1946250.f_3630;
	}
	else if ((__LIB_4__::func_673(PLAYER::PLAYER_ID()) && (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))) && PLAYER::PLAYER_ID() == func_4499())
	{
		Global_1853185 = PLAYER::PLAYER_ID();
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_0__::func_541(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
			{
				__LIB_4__::func_553(PLAYER::PLAYER_ID(), 81, 2);
			}
			else if (__LIB_0__::func_872(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
			{
				__LIB_4__::func_956(PLAYER::PLAYER_ID(), 81, 2);
			}
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
		MISC::SET_BIT(&(Global_1946250.f_506), 0);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853185;
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__::func_162())
	{
		if (__LIB_1__::func_659(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
		{
			Global_1946250.f_3635 = __LIB_4__::func_566(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9);
		}
	}
	__LIB_6__::func_604();
}

void func_4932(int iParam0, int iParam1)//Position - 0x18A02F
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (func_4940(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_1562(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_1562(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						func_4928(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_636(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						func_4928(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							func_4934(1);
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4933(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							func_4934(1);
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4933(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4933(int iParam0)//Position - 0x18A2C2
{
	func_4928(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4934(int iParam0)//Position - 0x18A2F0
{
	int iVar0;
	if ((MISC::GET_FRAME_COUNT() % 60) == 0 || iParam0)
	{
		iVar0 = func_4500();
		if ((((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && !__LIB_4__::func_675(PLAYER::PLAYER_ID())) && !__LIB_4__::func_305(PLAYER::PLAYER_ID())) && !__LIB_4__::func_306(PLAYER::PLAYER_ID()))
		{
			if (__LIB_3__::func_250(iVar0, 1, 0) == PLAYER::PLAYER_ID() && !__LIB_4__::func_674(PLAYER::PLAYER_ID()))
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_11 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 2f, -17f, 0f) };
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_14 = ENTITY::GET_ENTITY_HEADING(iVar0);
			}
		}
	}
}

int func_4940(int iParam0, var uParam1)//Position - 0x18A500
{
	if (PLAYER::PLAYER_ID() == func_4499())
	{
		if (Global_1946250.f_3280 == -1)
		{
			if (__LIB_4__::func_673(PLAYER::PLAYER_ID()) || BitTest(Global_1946250.f_506, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

char* func_4942(var uParam0, var uParam1, var uParam2)//Position - 0x18A556
{
	int iVar0;
	bool bVar1;
	if (__LIB_5__::func_434())
	{
		return "SI_ENTR_BLCK4A" /* GXT: You cannot enter the Mobile Operations Center while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	if (__LIB_1__::func_717())
	{
		return "";
	}
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) && PLAYER::PLAYER_ID() == func_4499())
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if ((!__LIB_0__::func_871(iVar0, 1) && !VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("caddy2"))) && !VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("caddy3")))
		{
			if (!__LIB_4__::func_633(PLAYER::PLAYER_ID()) && !__LIB_0__::func_389(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__::func_872(iVar0, 1))
				{
					return "GR_TRUCK_STOR_P" /* GXT: You do not currently own the Mobile Operations Center Personal Vehicle Storage bay. Purchase one at www.warstock-cache-and-carry.com. */;
				}
				else if (__LIB_7__::func_483(iVar0))
				{
					return "GR_TRUCK_MOD_P" /* GXT: You do not currently own the Mobile Operations Center Weapon & Vehicle Workshop bay. Purchase one at www.warstock-cache-and-carry.com. */;
				}
				else
				{
					return "GR_TRUCK_BUY_A" /* GXT: You do not currently own the Mobile Operations Center Personal Vehicle Storage bay or the Mobile Operations Center Weapon & Vehicle Workshop bay. Purchase one at www.warstock-cache-and-carry.com. */;
				}
			}
		}
	}
	if (BitTest(Global_1946250.f_506, 0))
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			bVar1 = __LIB_0__::func_797();
			if (__LIB_6__::func_371(PLAYER::PLAYER_ID(), 0))
			{
				return "MP_TRUCK_KICKd" /* GXT: You no longer have access to the Mobile Operations Center as you became a Prospect. */;
			}
			else if (bVar1 != __LIB_0__::func_162() && __LIB_3__::func_673(bVar1))
			{
				return "MP_TRUCK_KICKa" /* GXT: You no longer have access to the Mobile Operations Center as you became an Associate. */;
			}
			else
			{
				return "MP_TRUCK_KICKb" /* GXT: You no longer have access to the Mobile Operations Center as you became a Bodyguard. */;
			}
		}
	}
	if (PLAYER::PLAYER_ID() == func_4499() || __LIB_0__::func_797() == func_4499())
	{
		if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
		{
			return "JUG_BLOCK_MOC" /* GXT: You can't access this Mobile Operations Center whilst wearing the Ballistic Equipment. */;
		}
		if (__LIB_2__::func_906())
		{
			return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
		}
	}
	if (__LIB_3__::func_695())
	{
		return "TRUC_MC_BLOCK_P" /* GXT: You cannot enter your Mobile Operations Center with a prostitute. */;
	}
	if (__LIB_3__::func_693())
	{
		return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
	}
	if (__LIB_1__::func_17(PLAYER::PLAYER_ID()) || __LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
	{
		return "TRUC_MC_BLOCK_E" /* GXT: You cannot enter your Mobile Operations Center while active in a mission. */;
	}
	if (__LIB_1__::func_613(PLAYER::PLAYER_ID()) == 3)
	{
		return "SUP_BLOCK_MOC" /* GXT: You can't access this Mobile Operations Center whilst carrying Supplies. */;
	}
	if (Global_1835493 != 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!__LIB_0__::func_872(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
			{
				return "TRUC_MC_BLOCK_V" /* GXT: You cannot enter your Mobile Operations Center while in a mission vehicle. */;
			}
		}
	}
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (BitTest(Global_1946250.f_1, 3))
		{
			if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1) || PED::GET_SEAT_PED_IS_TRYING_TO_ENTER(PLAYER::PLAYER_PED_ID()) == -1)
			{
				if (PLAYER::PLAYER_ID() != func_4499())
				{
					MISC::CLEAR_BIT(&(Global_1946250.f_1), 3);
				}
			}
		}
	}
	if (BitTest(Global_1946250.f_1, 3))
	{
		return "GR_TRUCK_SUTAR" /* GXT: You are unable to access the Mobile Operations Center in this area. Move the Mobile Operations Center to a suitable area. */;
	}
	return "";
}

int func_4943(var uParam0, var uParam1, var uParam2)//Position - 0x18A79C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	var uVar4;
	*uParam2 = 1;
	if (__LIB_3__::func_965() || __LIB_4__::func_671())
	{
		return 0;
	}
	if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
	{
		if (__LIB_0__::func_1("HELP_APC_TUR" /* GXT: Hold ~INPUT_VEH_SHUFFLE~ to move between the passenger turret and the driver seat while stationary. */))
		{
			return 0;
		}
		if (func_4499() != PLAYER::PLAYER_ID())
		{
			return 0;
		}
	}
	if (Global_262145.f_21612 /* Tunable: 311722703 */ && __LIB_0__::func_389(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = func_4500();
	if ((!__LIB_0__::func_893() || __LIB_3__::func_558()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_18__::func_503(uParam1, 1);
	}
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_3__::func_122(&(uParam1->f_22.f_94));
			}
			__LIB_18__::func_503(uParam1, 1);
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (__LIB_4__::func_306(PLAYER::PLAYER_ID()))
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
					}
					if (((((__LIB_5__::func_757(iVar0) && __LIB_4__::func_680(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -1f, 0f))) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373)) && func_4882(uParam1, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !func_4961(*uParam0)) || ((__LIB_4__::func_661() && !func_4961(*uParam0)) && __LIB_1__::func_659(PLAYER::PLAYER_ID())))
					{
						if (MISC::IS_PC_VERSION())
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("voltic2")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor")))
								{
									if ((__LIB_3__::func_363(uParam1->f_22.f_94, 0) || __LIB_3__::func_56("GR_ENTERTRUCK" /* GXT: Press ~a~ to modify this vehicle in your Mobile Operations Center. */, "STRING")) || __LIB_3__::func_56("GR_STORETRUCK" /* GXT: Press ~a~ to store this vehicle in your Mobile Operations Center. */, "STRING"))
									{
										PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
									}
								}
								if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("scramjet")))
								{
									if ((__LIB_3__::func_363(uParam1->f_22.f_94, 0) || __LIB_3__::func_56("GR_ENTERTRUCK" /* GXT: Press ~a~ to modify this vehicle in your Mobile Operations Center. */, "STRING")) || __LIB_3__::func_56("GR_STORETRUCK" /* GXT: Press ~a~ to store this vehicle in your Mobile Operations Center. */, "STRING"))
									{
										PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 350 /*INPUT_VEH_CAR_JUMP*/, true);
									}
								}
							}
						}
						__LIB_4__::func_563(1);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
						if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 5))
						{
							if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									if (__LIB_0__::func_389(PLAYER::PLAYER_ID()))
									{
										bVar2 = false;
										if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), &iVar1))
										{
											if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("trailersmall2"))
											{
												bVar2 = true;
												HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFA_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. The Anti-Aircraft Trailer can only be modified in the Bunker. */, false);
											}
										}
										if (!bVar2)
										{
											HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. */, false);
										}
									}
									else if (__LIB_4__::func_633(PLAYER::PLAYER_ID()))
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFS_TRAIL" /* GXT: You cannot store this vehicle while a trailer is attached. */, false);
									}
								}
								return 0;
							}
							if (__LIB_1__::func_587(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									if (__LIB_0__::func_389(PLAYER::PLAYER_ID()))
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_AIR" /* GXT: You cannot modify this aircraft in your Mobile Operations Center. */, false);
									}
									else if (__LIB_4__::func_633(PLAYER::PLAYER_ID()))
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFS_AIR" /* GXT: You cannot store this aircraft in your Mobile Operations Center. */, false);
									}
								}
								return 0;
							}
							if (__LIB_4__::func_633(PLAYER::PLAYER_ID()) && __LIB_0__::func_541(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									HUD::DISPLAY_HELP_TEXT_THIS_FRAME("MP_TRUCK_PEG" /* GXT: You cannot store a Pegasus vehicle in your Mobile Operations Center. */, false);
								}
								return 0;
							}
							if (__LIB_0__::func_389(PLAYER::PLAYER_ID()) && !__LIB_7__::func_483(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_NOTV" /* GXT: You cannot modify this vehicle in your Mobile Operations Center. */, false);
								}
								return 0;
							}
							if (__LIB_0__::func_389(PLAYER::PLAYER_ID()) && (__LIB_4__::func_679(PLAYER::PLAYER_ID()) || __LIB_4__::func_678(PLAYER::PLAYER_ID())))
							{
								if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_VEHIN" /* GXT: You must remove the vehicle currently inside your Mobile Operations Center to modify this vehicle. */, false);
									}
								}
								return 0;
							}
							if (__LIB_0__::func_389(PLAYER::PLAYER_ID()))
							{
								sVar3 = "GR_ENTERTRUCK" /* GXT: Press ~a~ to modify this vehicle in your Mobile Operations Center. */;
							}
							else if (__LIB_4__::func_633(PLAYER::PLAYER_ID()))
							{
								sVar3 = "GR_STORETRUCK" /* GXT: Press ~a~ to store this vehicle in your Mobile Operations Center. */;
							}
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 350 /*INPUT_VEH_CAR_JUMP*/, true);
							if (uParam1->f_22.f_94 == -1 && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
							{
								__LIB_5__::func_569(&(uParam1->f_22.f_94), 5, sVar3, 0, 0, 0, 0);
								if (__LIB_4__::func_954(PLAYER::PLAYER_ID()))
								{
									__LIB_4__::func_530(0);
								}
							}
							if (__LIB_0__::func_77(0))
							{
								__LIB_3__::func_122(&(uParam1->f_22.f_94));
							}
							if ((__LIB_3__::func_113(uParam1->f_22.f_94, 1) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) || BitTest(uParam1->f_22, 1))
							{
								__LIB_18__::func_503(uParam1, 0);
								if (!__LIB_4__::func_633(PLAYER::PLAYER_ID()) || __LIB_31__::func_594(uParam1, uParam0))
								{
									if (func_4948(&(uParam1->f_22), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
									{
										__LIB_3__::func_122(&(uParam1->f_22.f_94));
										if (BitTest(uParam1->f_22, 1))
										{
											MISC::CLEAR_BIT(&(uParam1->f_22), 1);
										}
										if (__LIB_5__::func_651(3, &uVar4))
										{
											MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 16);
										}
										else if (__LIB_5__::func_651(7, &uVar4))
										{
											MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 17);
										}
										if (__LIB_4__::func_954(PLAYER::PLAYER_ID()))
										{
											__LIB_4__::func_527(1);
											VEHICLE::MODIFY_VEHICLE_TOP_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0f);
											VEHICLE::SET_VEHICLE_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1f);
											VEHICLE::STOP_BRINGING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
										}
										if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
										{
											__LIB_6__::func_494(1, 0);
											MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 19);
										}
										__LIB_5__::func_435(1, 81);
										__LIB_4__::func_528(1);
									}
								}
							}
						}
						else
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, true);
							__LIB_1__::func_33(0);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
							PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
							PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
							PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
							HUD::DISABLE_FRONTEND_THIS_FRAME();
							HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
							VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1f, 1, false);
							if (__LIB_5__::func_356() && __LIB_5__::func_629())
							{
								if (__LIB_4__::func_954(PLAYER::PLAYER_ID()))
								{
									__LIB_4__::func_669(1);
									__LIB_4__::func_663(1);
								}
								__LIB_5__::func_457(1);
								func_4995(81, uParam1, 0, 0);
								__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 0, 0);
								if (__LIB_0__::func_541(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
								{
									__LIB_4__::func_553(PLAYER::PLAYER_ID(), 81, 2);
								}
								else if (__LIB_0__::func_872(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
								{
									__LIB_4__::func_956(PLAYER::PLAYER_ID(), 81, 2);
								}
								__LIB_4__::func_562(__LIB_1__::func_694(PLAYER::PLAYER_ID()), 25f, 0);
								__LIB_4__::func_563(0);
								return 1;
							}
						}
					}
					else
					{
						__LIB_4__::func_563(0);
						if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_3__::func_122(&(uParam1->f_22.f_94));
						}
						__LIB_18__::func_503(uParam1, 1);
					}
				}
				else
				{
					if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
					{
						if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_3__::func_122(&(uParam1->f_22.f_94));
						}
					}
					__LIB_18__::func_503(uParam1, 1);
				}
			}
			else
			{
				func_4944(*uParam0);
				if (__LIB_3__::func_950(PLAYER::PLAYER_ID()))
				{
					if (!__LIB_0__::func_864(&(uParam1->f_22.f_101)))
					{
						__LIB_0__::func_795(&(uParam1->f_22.f_101), 0, 0);
					}
					else if (__LIB_0__::func_937(&(uParam1->f_22.f_101), 10000, 0))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
							}
							CAM::DO_SCREEN_FADE_IN(500);
							__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
							__LIB_4__::func_664(0);
							__LIB_4__::func_534(0);
							__LIB_4__::func_668(0);
							__LIB_0__::func_794(&(uParam1->f_22.f_101));
						}
					}
					if (__LIB_1__::func_693(Global_1946250.f_3630, 1, 1))
					{
					}
					if (!__LIB_5__::func_301(Global_1946250.f_3630) && __LIB_2__::func_730(Global_1946250.f_3630))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						__LIB_6__::func_69(Global_1946250.f_3630);
						MISC::SET_BIT(&(Global_1946250.f_506), 1);
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
						__LIB_4__::func_561(1);
						__LIB_5__::func_435(1, 81);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						Global_1853185 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
						__LIB_0__::func_794(&(uParam1->f_22.f_101));
					}
					if (__LIB_5__::func_301(Global_1946250.f_3630) || __LIB_2__::func_730(Global_1946250.f_3630))
					{
						if (__LIB_4__::func_954(PLAYER::PLAYER_ID()))
						{
							__LIB_4__::func_527(1);
							__LIB_4__::func_669(1);
							__LIB_4__::func_663(1);
						}
						return 1;
					}
				}
				else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 7))
				{
					if (__LIB_5__::func_196(Global_1946250.f_3630) != 81 && !__LIB_2__::func_730(PLAYER::PLAYER_ID()))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
							}
							CAM::DO_SCREEN_FADE_IN(500);
							__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
							__LIB_4__::func_664(0);
							__LIB_4__::func_534(0);
							__LIB_4__::func_668(0);
							MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 7);
							__LIB_0__::func_794(&(uParam1->f_22.f_101));
						}
					}
				}
			}
		}
		else
		{
			if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_3__::func_122(&(uParam1->f_22.f_94));
			}
			__LIB_18__::func_503(uParam1, 1);
		}
	}
	else if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
	{
		HUD::CLEAR_HELP(true);
		__LIB_3__::func_122(&(uParam1->f_22.f_94));
	}
	if (((__LIB_0__::func_1("GR_ETFE_NOTV" /* GXT: You cannot modify this vehicle in your Mobile Operations Center. */) || __LIB_0__::func_1("GR_ETFE_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFS_TRAIL" /* GXT: You cannot store this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFA_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. The Anti-Aircraft Trailer can only be modified in the Bunker. */))
	{
		HUD::CLEAR_HELP(true);
	}
	return 0;
}

void func_4944(int iParam0)//Position - 0x18B1B8
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_4__::func_535(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_5__::func_195(PLAYER::PLAYER_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_0__::func_695(iVar0))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
							if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_693(bVar2, 1, 1))
							{
								if (BitTest(Global_2689235[bVar2 /*453*/].f_318, 5) && __LIB_0__::func_172(__LIB_5__::func_196(bVar2)) == 5)
								{
									if (func_4890(iParam0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
											__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
										}
										if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 7))
										{
											if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
											{
												CAM::DO_SCREEN_FADE_IN(500);
											}
											__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
											__LIB_4__::func_664(0);
											__LIB_4__::func_534(0);
										}
									}
									else if (__LIB_5__::func_337())
									{
										if (CAM::IS_SCREEN_FADED_IN())
										{
											__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 0, 0);
											CAM::DO_SCREEN_FADE_OUT(500);
											__LIB_4__::func_664(1);
										}
										if (CAM::IS_SCREEN_FADED_OUT())
										{
											if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
											{
												NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true, false);
												NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false), true, false);
												NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(true, false);
												NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, false);
											}
											PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
											__LIB_4__::func_668(1);
											__LIB_4__::func_664(0);
										}
									}
									else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("halftrack")))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
										}
										else
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
										if (__LIB_3__::func_950(PLAYER::PLAYER_ID()))
										{
											if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
											{
												NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
											}
											__LIB_4__::func_668(0);
										}
										if (BitTest(Global_1946250.f_1, 17))
										{
											MISC::CLEAR_BIT(&(Global_1946250.f_1), 17);
										}
										__LIB_4__::func_534(0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (Global_2787905)
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_5__::func_195(PLAYER::PLAYER_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_0__::func_695(iVar0))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
							if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_693(bVar2, 1, 1))
							{
								if (BitTest(Global_2689235[bVar2 /*453*/].f_318, 5) && __LIB_0__::func_172(__LIB_5__::func_196(bVar2)) == 5)
								{
									if ((((func_4890(iParam0) || !__LIB_5__::func_337()) || !__LIB_0__::func_893()) || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) || NETWORK::IS_COMMERCE_STORE_OPEN())
									{
										if (__LIB_3__::func_950(PLAYER::PLAYER_ID()))
										{
											if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
											{
												NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
											}
										}
										__LIB_4__::func_664(0);
										__LIB_4__::func_534(0);
										__LIB_4__::func_668(0);
										if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_4948(var uParam0, int iParam1)//Position - 0x18B6AD
{
	if (func_4949(iParam1))
	{
		MISC::CLEAR_BIT(&Global_1946250, 25);
		MISC::CLEAR_BIT(&Global_1946250, 23);
		MISC::CLEAR_BIT(&Global_1946250, 24);
		__LIB_4__::func_561(1);
		return 1;
	}
	else if (!__LIB_0__::func_864(&(uParam0->f_101)))
	{
		__LIB_0__::func_795(&(uParam0->f_101), 0, 0);
	}
	else if (__LIB_0__::func_937(&(uParam0->f_101), 1500, 0))
	{
		__LIB_0__::func_794(&(uParam0->f_101));
		MISC::CLEAR_BIT(&Global_1946250, 25);
		MISC::CLEAR_BIT(&Global_1946250, 23);
		MISC::CLEAR_BIT(&Global_1946250, 24);
		__LIB_4__::func_561(1);
		return 1;
	}
	else if (Global_1946250.f_3621[0] == 1 && Global_1946250.f_3621[3] == 1)
	{
		__LIB_0__::func_794(&(uParam0->f_101));
		MISC::SET_BIT(&Global_1946250, 24);
		return 1;
	}
	else if ((Global_1946250.f_3621[1] == 1 && Global_1946250.f_3621[3] == 1) || __LIB_4__::func_954(PLAYER::PLAYER_ID()))
	{
		__LIB_0__::func_794(&(uParam0->f_101));
		MISC::SET_BIT(&Global_1946250, 23);
		return 1;
	}
	else if (Global_1946250.f_3621[2] == 1 && Global_1946250.f_3621[3] == 1)
	{
		__LIB_0__::func_794(&(uParam0->f_101));
		MISC::SET_BIT(&Global_1946250, 25);
		return 1;
	}
	return 0;
}

int func_4949(int iParam0)//Position - 0x18B7FC
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	float fVar5;
	var uVar6;
	var uVar7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("apc"):
			case joaat("insurgent"):
			case joaat("insurgent2"):
			case joaat("insurgent3"):
			case joaat("caracara"):
			case joaat("caracara2"):
				return 1;
				break;
			case joaat("voodoo"):
			case joaat("voodoo2"):
			case joaat("vigilante"):
			case joaat("visione"):
			case joaat("deluxo"):
			case joaat("oppressor2"):
			case joaat("menacer"):
				return 1;
				break;
		}
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, iVar0, false))
			{
				return 1;
			}
			iVar0++;
		}
		fVar1 = (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) / 1000f);
		if (fVar1 < 0.4f)
		{
			return 1;
		}
		fVar1 = (SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iParam0)) / 1000f);
		if (fVar1 < 0.4f)
		{
			return 1;
		}
	}
	iVar2 = func_4500();
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!__LIB_1__::func_659(PLAYER::PLAYER_ID()) && !ENTITY::IS_ENTITY_DEAD(iVar2, false))
		{
			Var9 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Var9, iVar3, &Var8, 1, 3f, 0f))
			{
				if (SYSTEM::VDIST2(Var9, Var8) > 2500f)
				{
					return 1;
				}
			}
			ENTITY::GET_ENTITY_QUATERNION(iVar2, &uVar4, &fVar5, &uVar6, &uVar7);
			if (fVar5 < -0.03f || fVar5 > 0.03f)
			{
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, false))
			{
				Var10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar2, 0f, -10f, 0f) };
				Var11 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar2, 0f, -15.5f, 0f) };
				if (MISC::ABSF((Var10.f_2 - Var11.f_2)) > 0.8f)
				{
					MISC::SET_BIT(&(Global_1946250.f_1), 3);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_4961(int iParam0)//Position - 0x18C146
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	if (!__LIB_11__::func_948(1))
	{
		return 1;
	}
	bVar0 = false;
	iVar1 = func_4500();
	iVar2 = __LIB_3__::func_250(iVar1, 1, 0);
	if (__LIB_15__::func_667(bVar0, 7))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (ENTITY::IS_ENTITY_DEAD(iVar1, false) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar1) && !__LIB_5__::func_808(PLAYER::PLAYER_ID(), 81))
		{
			if (!BitTest(Global_1946250.f_1, 3) && __LIB_12__::func_424(iVar2))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if ((!ENTITY::IS_ENTITY_VISIBLE(iVar1) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		if ((ENTITY::GET_ENTITY_SPEED(iVar1) > 0.5f && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
		{
			__LIB_5__::func_498(0, iParam0, 0);
			return 1;
		}
	}
	if (__LIB_3__::func_695())
	{
		return 1;
	}
	if (__LIB_0__::func_983())
	{
		return 1;
	}
	if ((((BitTest(Global_1946250, 19) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_1__::func_659(iVar2) && !__LIB_4__::func_954(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1946250.f_1, 3) && __LIB_12__::func_424(iVar2))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
		}
		return 1;
	}
	if (__LIB_4__::func_306(iVar2) || __LIB_4__::func_305(iVar2))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar1))
		{
			if (!BitTest(Global_1946250.f_1, 3) && __LIB_12__::func_424(iVar2))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar1))
		{
			if (!BitTest(Global_1946250.f_1, 3) && __LIB_12__::func_424(iVar2))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
			return 1;
		}
	}
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() == func_4499())
		{
			return 1;
		}
	}
	if (__LIB_4__::func_304(iVar2))
	{
		return 1;
	}
	func_4981(iParam0, &Var3);
	if (__LIB_5__::func_359(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_12__::func_424(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_5__::func_358(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_12__::func_424(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_5__::func_654(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_12__::func_424(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (func_4974(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_12__::func_424(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_6__::func_497(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_12__::func_424(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_4__::func_299(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_12__::func_424(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_4__::func_298(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_12__::func_424(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_4__::func_297(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_12__::func_424(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_4__::func_682(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_12__::func_424(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_4__::func_681(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_12__::func_424(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_640()))
		{
			func_4981(iParam0, &Var4);
			if (__LIB_0__::func_724(__LIB_1__::func_640(), Var4, 1) < 1.5f)
			{
				return 1;
			}
		}
	}
	if (__LIB_1__::func_510(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_5__::func_653())
	{
		return 1;
	}
	if (__LIB_4__::func_295(iVar2))
	{
		return 1;
	}
	if (iVar2 != __LIB_0__::func_162() && iVar2 != PLAYER::PLAYER_ID())
	{
		if (BitTest(Global_2689235[iVar2 /*453*/].f_318, 12))
		{
			return 1;
		}
	}
	if (iVar2 != __LIB_0__::func_162())
	{
		if (BitTest(Global_2689235[iVar2 /*453*/].f_318.f_1, 20))
		{
			return 1;
		}
		if (BitTest(Global_2689235[iVar2 /*453*/].f_318.f_1, 23))
		{
			return 1;
		}
	}
	if ((NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_1__::func_17(PLAYER::PLAYER_ID()) || __LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 1;
	}
	if (Global_2815059.f_310 && !__LIB_4__::func_954(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_965())
	{
		return 1;
	}
	func_4981(iParam0, &Var5);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false)) && !__LIB_1__::func_659(iVar2)) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
	{
		Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, 0f, -8.1f, 0f) };
		if (MISC::ABSF((Var6.f_2 - Var5.f_2)) > 4f)
		{
			if (__LIB_12__::func_424(iVar2))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
			return 1;
		}
	}
	if (__LIB_4__::func_294(Var5))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_12__::func_424(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_6__::func_915())
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_12__::func_424(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_1__::func_844(iVar2))
	{
		return 1;
	}
	if (Global_2787784)
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523, 3))
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_9, 5))
	{
		return 1;
	}
	if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 == 8 && __LIB_1__::func_736()) && !__LIB_0__::func_626())
	{
		return 1;
	}
	if (__LIB_1__::func_583(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_728(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (func_4962(iVar1) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
	{
		if ((!__LIB_1__::func_659(iVar2) && !__LIB_4__::func_954(PLAYER::PLAYER_ID())) && __LIB_12__::func_424(iVar2))
		{
			if (!BitTest(Global_1946250.f_1, 3))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
		}
		return 1;
	}
	if (__LIB_3__::func_171(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_172(__LIB_3__::func_248(PLAYER::PLAYER_ID())) != 5)
		{
		}
	}
	if (__LIB_2__::func_906())
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_1, 3))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_1), 3);
	}
	return 0;
}

int func_4962(int iParam0)//Position - 0x18C91F
{
	int iVar0;
	var uVar1[25];
	int iVar2;
	struct<3> Var3;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		func_4981(81, &Var3);
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar1[iVar0]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar1[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar1[iVar0], false) && !__LIB_0__::func_871(uVar1[iVar0], 1))
					{
						if (__LIB_0__::func_724(uVar1[iVar0], Var3, 1) < 8f)
						{
							return 1;
						}
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_4974(int iParam0, int iParam1, struct<3> Param2)//Position - 0x18D097
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (!__LIB_6__::func_63(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(__LIB_4__::func_296(__LIB_1__::func_754(func_4499())), Param2) <= 3600f)
		{
			return 1;
		}
	}
	return 0;
}

void func_4981(int iParam0, var uParam1)//Position - 0x18D4F1
{
	int iVar0;
	var uVar1;
	iVar0 = func_4500();
	switch (iParam0)
	{
		case 81:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("trailerlarge"))
				{
					*uParam1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -8.9f, -2f) };
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, &uVar1, false, false))
					{
						*uParam1 = { *uParam1, uParam1->f_1, uVar1 };
					}
					else
					{
						*uParam1 = { *uParam1, uParam1->f_1, (uParam1->f_2 - 1.5f) };
					}
				}
			}
			break;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_4__::func_535(PLAYER::PLAYER_ID()))
		{
			if (__LIB_0__::func_86(*uParam1))
			{
				if (Global_1946250.f_3630 != __LIB_0__::func_162())
				{
					if (!__LIB_0__::func_86(Global_2689235[Global_1946250.f_3630 /*453*/].f_318.f_11))
					{
						*uParam1 = { Global_2689235[Global_1946250.f_3630 /*453*/].f_318.f_11 };
					}
				}
			}
		}
	}
}

void func_4985(int iParam0, int iParam1, var uParam2)//Position - 0x18D625
{
	switch (iParam1)
	{
		case 0:
			func_4981(iParam0, &(uParam2->f_4));
			uParam2->f_7 = { 1f, 1f, 2f };
			MISC::SET_BIT(&(uParam2->f_3), 4);
			MISC::SET_BIT(&(uParam2->f_3), 1);
			MISC::SET_BIT(&(uParam2->f_3), 5);
			HUD::GET_HUD_COLOUR(9, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
			break;
		case 1:
			func_4986(iParam0, &(uParam2->f_4), &(uParam2->f_7), &(uParam2->f_10), &(uParam2->f_13), &(uParam2->f_14));
			uParam2->f_2 = 1;
			MISC::SET_BIT(&(uParam2->f_3), 0);
			MISC::SET_BIT(&(uParam2->f_3), 2);
			MISC::SET_BIT(&(uParam2->f_3), 5);
			break;
	}
}

void func_4986(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x18D6C4
{
	int iVar0;
	var uVar1;
	iVar0 = func_4500();
	switch (iParam0)
	{
		case 81:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("trailerlarge"))
				{
					*uParam1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -5f, 0f) };
					*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, ENTITY::GET_ENTITY_HEADING(iVar0), 0f, 6f, -1.5f) };
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam2, &uVar1, false, false))
					{
						*uParam2 = { *uParam2, uParam2->f_1, uVar1 };
					}
					*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -6f, 2.5f) };
					*uParam4 = __LIB_4__::func_979(joaat("trailerlarge"));
					*uParam5 = ENTITY::GET_ENTITY_HEADING(iVar0);
				}
			}
			break;
	}
}

void func_4995(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x18D900
{
	int iVar0;
	uParam1->f_405 = { __LIB_4__::func_686(iParam0) };
	uParam1->f_21 = "AM_MP_ARMORY_TRUCK";
	uParam1->f_22.f_69[0] = "PUSH";
	uParam1->f_22.f_69[1] = "LIMIT";
	uParam1->f_22.f_72[0] = 0.271f;
	uParam1->f_22.f_72[1] = 0.411f;
	uParam1->f_22.f_75 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
	uParam1->f_3 = 0;
	uParam1->f_285[0 /*3*/] = { -2.3f, 9.69f, 0.06f };
	uParam1->f_285.f_28[0 /*3*/] = { 2.3f, 9.69f, 2.305f };
	uParam1->f_285.f_56[0] = 1f;
	uParam1->f_285.f_94[0] = 349.3822f;
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_22.f_105))
	{
		iVar0 = uParam1->f_22.f_105;
	}
	else
	{
		iVar0 = func_4500();
	}
	switch (iParam0)
	{
		case 81:
			if (__LIB_3__::func_616() == 0 || __LIB_4__::func_954(PLAYER::PLAYER_ID()))
			{
			}
			else if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (BitTest(Global_1946250, 24))
					{
						if (BitTest(Global_1946250, 8) && !BitTest(Global_1946250, 10))
						{
							__LIB_4__::func_561(0);
						}
						uParam1->f_22.f_13 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), -7.0529f, -0.4481f, 0.6091f) };
						uParam1->f_22.f_16 = { -9.156f, -0.1534f, (ENTITY::GET_ENTITY_HEADING(iVar0) - 150.2327f) };
						uParam1->f_22.f_19 = 25.35f;
						uParam1->f_22.f_28 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), -7.0529f, -0.4481f, 0.6091f) };
						uParam1->f_22.f_31 = { -9.156f, -0.1534f, (ENTITY::GET_ENTITY_HEADING(iVar0) - 150.2327f) };
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.46f;
						uParam1->f_22.f_59 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), -6.8478f, -0.6934f, 0.6801f) };
						uParam1->f_22.f_62 = { -9.156f, -0.1534f, (ENTITY::GET_ENTITY_HEADING(iVar0) - 148.652f) };
						uParam1->f_22.f_65 = 25.35f;
						uParam1->f_22.f_95 = 5f;
						uParam1->f_22.f_66 = 0.7f;
					}
					else if (BitTest(Global_1946250, 23))
					{
						if (BitTest(Global_1946250, 8) && !BitTest(Global_1946250, 10))
						{
							__LIB_4__::func_561(0);
						}
						if (!__LIB_4__::func_649())
						{
							uParam1->f_22.f_13 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 7.1157f, 0.6104f, -1.3546f) };
							uParam1->f_22.f_16 = { -3.0776f, -0.1478f, (ENTITY::GET_ENTITY_HEADING(iVar0) - 208.6628f) };
							uParam1->f_22.f_19 = 17.6665f;
							uParam1->f_22.f_28 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 7.1157f, 0.6104f, -1.3546f) };
							uParam1->f_22.f_31 = { -3.0776f, -0.1478f, (ENTITY::GET_ENTITY_HEADING(iVar0) + 208.6628f) };
							uParam1->f_22.f_34 = 0.2f;
							uParam1->f_22.f_35 = 0.46f;
							uParam1->f_22.f_59 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 6.484f, -0.2448f, -0.9f) };
							uParam1->f_22.f_62 = { -3.0776f, -0.1478f, (ENTITY::GET_ENTITY_HEADING(iVar0) - 213.1267f) };
							uParam1->f_22.f_65 = 17.6665f;
							uParam1->f_22.f_95 = 5f;
							uParam1->f_22.f_66 = 0.7f;
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							uParam1->f_22.f_13 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 10.3856f, -2.1387f, -2.2365f) };
							uParam1->f_22.f_16 = { 6.5787f, -0.0233f, (ENTITY::GET_ENTITY_HEADING(iVar0) - 231.4331f) };
							uParam1->f_22.f_19 = 26.4029f;
							uParam1->f_22.f_28 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 10.3856f, -2.1387f, -2.2365f) };
							uParam1->f_22.f_31 = { 6.5787f, -0.0233f, (ENTITY::GET_ENTITY_HEADING(iVar0) - 231.4331f) };
							uParam1->f_22.f_34 = 0.2f;
							uParam1->f_22.f_35 = 0.46f;
							uParam1->f_22.f_59 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 9.9211f, -2.3221f, -2.1676f) };
							uParam1->f_22.f_62 = { 7.8365f, -0.0233f, (ENTITY::GET_ENTITY_HEADING(iVar0) + 110.5488f) };
							uParam1->f_22.f_65 = 26.4029f;
							uParam1->f_22.f_95 = 9f;
							uParam1->f_22.f_66 = 0.4f;
						}
					}
					else if (BitTest(Global_1946250, 25))
					{
						if (BitTest(Global_1946250, 8) && !BitTest(Global_1946250, 10))
						{
							__LIB_4__::func_561(0);
						}
						uParam1->f_22.f_13 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), -1.0858f, -3.2694f, 6.2579f) };
						uParam1->f_22.f_16 = { -37.5675f, -0.1538f, (ENTITY::GET_ENTITY_HEADING(iVar0) + 171.9186f) };
						uParam1->f_22.f_19 = 29.0636f;
						uParam1->f_22.f_28 = { 1831.551f, -1182.593f, 90.599f };
						uParam1->f_22.f_31 = { 0f, 0f, 98.5f };
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.46f;
						uParam1->f_22.f_59 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), -0.8503f, -3.3972f, 5.8824f) };
						uParam1->f_22.f_62 = { -43.3133f, -0.1538f, (ENTITY::GET_ENTITY_HEADING(iVar0) + 187.9544f) };
						uParam1->f_22.f_65 = 29.0636f;
						uParam1->f_22.f_95 = 5f;
						uParam1->f_22.f_66 = 0.7f;
					}
					else
					{
						if ((!BitTest(Global_1946250, 8) && !BitTest(Global_1946250, 10)) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
						{
							__LIB_4__::func_561(1);
						}
						uParam1->f_22.f_13 = { 0f, 0f, 0f };
					}
				}
			}
			break;
	}
}

void func_4998(var uParam0, int iParam1)//Position - 0x18DF4A
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1665588/*func_5163*/;
			break;
		case 1:
			uParam0->f_30 = 1665472/*func_5162*/;
			break;
		case 2:
			uParam0->f_31 = 1664242/*func_5159*/;
			break;
		case 3:
			uParam0->f_34 = 1664172/*func_5158*/;
			break;
		case 4:
			uParam0->f_12 = 1663998/*func_5157*/;
			break;
		case 6:
			uParam0->f_32 = 1663874/*func_5156*/;
			break;
		case 106:
			uParam0->f_52 = 1663707/*func_5155*/;
			break;
		case 111:
			uParam0->f_35 = 1663693/*func_5154*/;
			break;
		case 79:
			*uParam0 = 1663669/*func_5153*/;
			break;
		case 37:
			uParam0->f_18 = 1663553/*func_5152*/;
			break;
		case 38:
			uParam0->f_9 = 1663353/*func_5150*/;
			break;
		case 11:
			uParam0->f_11 = 1663344/*func_5149*/;
			break;
		case 12:
			uParam0->f_33 = 1661640/*func_5147*/;
			break;
		case 14:
			uParam0->f_11 = 1661631/*func_5146*/;
			break;
		case 109:
			uParam0->f_56 = 1661623/*func_5145*/;
			break;
		case 15:
			uParam0->f_2 = 1661117/*func_5141*/;
			break;
		case 13:
			uParam0->f_2 = 1661078/*func_5140*/;
			break;
		case 44:
			*uParam0 = 1661069/*func_5139*/;
			break;
		case 75:
			uParam0->f_4 = 1661060/*func_5138*/;
			break;
		case 16:
			uParam0->f_5 = 1660637/*func_5134*/;
			break;
		case 108:
			uParam0->f_55 = 1658598/*func_5130*/;
			break;
		case 17:
			uParam0->f_17 = 1656464/*func_5122*/;
			break;
		case 19:
			uParam0->f_17 = 1656439/*func_5121*/;
			break;
		case 20:
			uParam0->f_3 = 1656355/*func_5120*/;
			break;
		case 21:
			uParam0->f_3 = 1656255/*func_5119*/;
			break;
		case 74:
			uParam0->f_53 = 1656088/*func_5118*/;
			break;
		case 22:
			uParam0->f_24 = 1655981/*func_5117*/;
			break;
		case 25:
			uParam0->f_23 = 1655329/*func_5115*/;
			break;
		case 30:
			uParam0->f_8 = 1654829/*func_5112*/;
			break;
		case 31:
			uParam0->f_39 = 1654537/*func_5111*/;
			break;
		case 33:
			uParam0->f_40 = 1653615/*func_5108*/;
			break;
		case 32:
			*uParam0 = 1653511/*func_5107*/;
			break;
		case 34:
			uParam0->f_41 = 1651366/*func_5106*/;
			break;
		case 35:
			uParam0->f_42 = 1565850/*func_4902*/;
			break;
		case 36:
			uParam0->f_58 = 1651306/*func_5105*/;
			break;
		case 45:
			uParam0->f_14 = 1651297/*func_5104*/;
			break;
		case 46:
			uParam0->f_14 = 1651288/*func_5103*/;
			break;
		case 110:
			uParam0->f_57 = 1651022/*func_5102*/;
			break;
		case 77:
			uParam0->f_13 = 1651011/*func_5101*/;
			break;
		case 47:
			uParam0->f_43 = 1650871/*func_5100*/;
			break;
		case 49:
			uParam0->f_8 = 1650830/*func_5099*/;
			break;
		case 50:
			*uParam0 = 1650739/*func_5098*/;
			break;
		case 51:
			*uParam0 = 1650655/*func_5097*/;
			break;
		case 52:
			uParam0->f_15 = 1650644/*func_5096*/;
			break;
		case 53:
			uParam0->f_13 = 1650362/*func_5095*/;
			break;
		case 54:
			uParam0->f_45 = 1650354/*func_5094*/;
			break;
		case 56:
			uParam0->f_46 = 1650345/*func_5093*/;
			break;
		case 57:
			uParam0->f_11 = 1650284/*func_5092*/;
			break;
		case 58:
			uParam0->f_13 = 1650002/*func_5091*/;
			break;
		case 64:
			uParam0->f_47 = 1648122/*func_5083*/;
			break;
		case 65:
			uParam0->f_21 = 1648079/*func_5082*/;
			break;
		case 66:
			uParam0->f_21 = 1647376/*func_5079*/;
			break;
		case 67:
			uParam0->f_21 = 1646292/*func_5071*/;
			break;
		case 68:
			*uParam0 = 1645740/*func_5070*/;
			break;
		case 69:
			*uParam0 = 1645731/*func_5069*/;
			break;
		case 70:
			uParam0->f_48 = 1645719/*func_5068*/;
			break;
		case 71:
			uParam0->f_49 = 1645710/*func_5067*/;
			break;
		case 107:
			uParam0->f_50 = 1645698/*func_5066*/;
			break;
		case 80:
			uParam0->f_7 = 1643024/*func_5054*/;
			break;
		case 84:
			uParam0->f_1 = 1641178/*func_5043*/;
			break;
		case 85:
			uParam0->f_1 = 1638844/*func_5037*/;
			break;
		case 87:
			uParam0->f_1 = 1634620/*func_5016*/;
			break;
		case 88:
			uParam0->f_1 = 1634611/*func_5015*/;
			break;
		case 90:
			uParam0->f_1 = 1634568/*func_5014*/;
			break;
		case 91:
			uParam0->f_1 = 1634267/*func_5012*/;
			break;
		case 92:
			uParam0->f_1 = 1633504/*func_5010*/;
			break;
		case 94:
			uParam0->f_1 = 1632004/*func_5009*/;
			break;
		case 102:
			uParam0->f_1 = 1631438/*func_5003*/;
			break;
		case 103:
			uParam0->f_22 = 1631430/*func_5002*/;
			break;
		case 104:
			uParam0->f_1 = 1631355/*func_5001*/;
			break;
		case 78:
			uParam0->f_59 = 1631281/*func_5000*/;
			break;
		case 125:
			uParam0->f_19 = 1631257/*func_4999*/;
			break;
	}
}

int func_5010(var uParam0, var uParam1)//Position - 0x18ECE0
{
	__LIB_6__::func_27(&(Global_1946250.f_4073), 7500, "TruckTunel1", 919.1599f, -3242.047f, -97.191f, -4.6979f, 0.1417f, -118.0924f, 36.2643f, 920.1234f, -3242.478f, -97.1018f, 7.9062f, 0.1417f, -113.0609f, 36.2643f, 1f, 50, 0, 0, 0, 0);
	__LIB_6__::func_27(&(Global_1946250.f_4073), 6000, "TruckPark", 826.3912f, -3231.1902f, -98.5252f, 1.494f, -0.1848f, -114.9899f, 38.3697f, 826.9343f, -3231.013f, -97.8158f, -0.7301f, -0.1848f, -118.0463f, 38.3697f, 1f, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
	{
		func_1370(&(uParam1->f_248), &(uParam1->f_109), 14);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		uParam1->f_109 = VEHICLE::CREATE_VEHICLE(joaat("phantom3"), 0f, 10f, 0f, 0f, false, false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
	{
		uParam1->f_109.f_12 = VEHICLE::CREATE_VEHICLE(joaat("trailerlarge"), 0f, 10f, 10f, 0f, false, false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
	{
		uParam1->f_109.f_1[0] = PED::CREATE_PED(26, joaat("MP_M_WeapExp_01"), 832.953f, -3243.084f, -98.716f, -18f, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED_XY(uParam1->f_109, 8f);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_109, 942.387f, -3245.778f, -94.91f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, 87.91f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam1->f_109, 5f);
		uParam1->f_140[1] = PED::CREATE_PED(26, joaat("MP_M_WeapExp_01"), 832.953f, -3243.084f, -98.716f, -18f, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		__LIB_4__::func_37(&(uParam1->f_109), 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, true, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(uParam1->f_109, 3);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
		{
			VEHICLE::ATTACH_VEHICLE_TO_TRAILER(uParam1->f_109, uParam1->f_109.f_12, 1f);
			VEHICLE::VEHICLE_SET_OVERRIDE_EXTENABLE_SIDE_RATIO(uParam1->f_109.f_12, 1);
			VEHICLE::VEHICLE_SET_EXTENABLE_SIDE_TARGET_RATIO(uParam1->f_109.f_12, 0f);
			VEHICLE::VEHICLE_SET_OVERRIDE_SIDE_RATIO(uParam1->f_109.f_12, 0f);
		}
	}
	__LIB_4__::func_693(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_109.f_1[0], PLAYER::PLAYER_PED_ID(), false);
	}
	return 1;
}

int func_5043(int iParam0, var uParam1)//Position - 0x190ADA
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	__LIB_4__::func_694(uParam1);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_3__::func_616() == 1)
		{
			__LIB_5__::func_457(0);
		}
	}
	switch (__LIB_3__::func_616())
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				func_2358(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				iVar0 = 1;
				__LIB_5__::func_911(iParam0, &(uParam1->f_140[0]));
				ENTITY::SET_ENTITY_VISIBLE(uParam1->f_140[0], false, false);
				ENTITY::SET_ENTITY_COLLISION(uParam1->f_140[0], false, false);
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_248) == joaat("trailersmall2"))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_248))
					{
						iVar1 = ENTITY::GET_ENTITY_ATTACHED_TO(uParam1->f_248);
						if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2))
							{
								func_1370(&iVar2, &(uParam1->f_109), 14);
								func_1339(&(uParam1->f_248), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
							}
						}
						else
						{
							func_1370(&(uParam1->f_248), &(uParam1->f_109), 10);
						}
					}
					else
					{
						func_1370(&(uParam1->f_248), &(uParam1->f_109), 10);
					}
				}
				else
				{
					func_1370(&(uParam1->f_248), &(uParam1->f_109), 14);
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_249))
					{
						if (ENTITY::GET_ENTITY_MODEL(uParam1->f_249) == joaat("trailersmall2"))
						{
							func_1339(&(uParam1->f_249), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, 0f, 50f, 10f, false, false, true);
					__LIB_5__::func_911(iParam0, &(uParam1->f_109));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_109.f_12))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109.f_12, 50f, 50f, 50f, false, false, true);
					}
					__LIB_5__::func_911(iParam0, &(uParam1->f_109.f_12));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					iVar0 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_109, uParam1->f_248, false);
			}
			__LIB_4__::func_693(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
			break;
	}
	if (!__LIB_5__::func_914(iParam0, uParam1))
	{
		return 0;
	}
	if (__LIB_6__::func_769(iParam0, &(uParam1->f_176[0]), &(uParam1->f_176[1]), 1101004800))
	{
		uParam1->f_183[0] = 0f;
		uParam1->f_183[1] = 0f;
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[0], false, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[1], false, false);
		uParam1->f_189[8 /*3*/] = { ENTITY::GET_ENTITY_ROTATION(uParam1->f_176[0], 2) };
	}
	if ((ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[0]) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[1])) && iVar0)
	{
		if (__LIB_3__::func_616() == 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
			{
				func_2358(&(uParam1->f_109.f_1[0]), PLAYER::PLAYER_ID(), 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					PED::SET_PED_INTO_VEHICLE(uParam1->f_109.f_1[0], uParam1->f_109, -1);
				}
			}
		}
		__LIB_4__::func_709(&(uParam1->f_109.f_1), 5f);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			VEHICLE::SET_VEHICLE_STEER_FOR_BUILDINGS(uParam1->f_109, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_140[0], false))
		{
			PED::SET_PED_LOD_MULTIPLIER(uParam1->f_140[0], 5f);
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[0]))
			{
				return 0;
			}
		}
		if (!__LIB_5__::func_658(&(uParam1->f_109)))
		{
			return 0;
		}
		if (!__LIB_4__::func_707(&(uParam1->f_188), 15))
		{
			return 0;
		}
		STREAMING::SET_FOCUS_POS_AND_VEL(uParam1->f_189[6 /*3*/], 0f, 0f, 0f);
		return 1;
	}
	return 0;
}

void func_5083(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x1925FA
{
	int iVar0;
	int iVar1;
	if (CAM::DOES_CAM_EXIST(uParam0->f_22.f_11))
	{
		if (CAM::IS_CAM_ACTIVE(uParam0->f_22.f_11))
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	if (((__LIB_2__::func_159(1) && __LIB_1__::func_907(PLAYER::PLAYER_ID(), 0)) && __LIB_2__::func_106(PLAYER::PLAYER_ID())) && __LIB_5__::func_185(PLAYER::PLAYER_ID()) == 271)
	{
		iVar1 = BitTest(Global_1946250.f_9, 13);
	}
	if ((((Global_1946250.f_3638.f_386 && BitTest(uParam0->f_22, 8)) || iVar0) || iVar1) || Global_1952191.f_5314)
	{
		__LIB_5__::func_917(1, 0);
	}
	else
	{
		__LIB_5__::func_917(0, 0);
		func_5085();
	}
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (__LIB_4__::func_671())
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_4__::func_670(0);
			}
		}
		if (__LIB_4__::func_954(PLAYER::PLAYER_ID()))
		{
			if (CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				__LIB_4__::func_727(&(uParam0->f_22));
				__LIB_4__::func_183(&(Global_1946250.f_3638));
			}
		}
		if (!__LIB_4__::func_954(PLAYER::PLAYER_ID()) && !Global_1952191.f_5310)
		{
			__LIB_5__::func_914(iParam1, &(uParam0->f_22));
		}
		if (__LIB_4__::func_665(PLAYER::PLAYER_ID()))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				HUD::SET_FRONTEND_ACTIVE(false);
			}
			else
			{
				HUD::DISABLE_FRONTEND_THIS_FRAME();
			}
		}
		switch (iParam1)
		{
			case 73:
				if (!BitTest(uParam0->f_396, 1))
				{
					MISC::SET_BIT(&(uParam0->f_396), 1);
				}
				break;
			case 74:
				if (!BitTest(uParam0->f_396, 2))
				{
					MISC::SET_BIT(&(uParam0->f_396), 2);
				}
				break;
			case 80:
				if (!BitTest(uParam0->f_396, 3))
				{
					MISC::SET_BIT(&(uParam0->f_396), 3);
				}
				break;
			}
	}
}

void func_5085()//Position - 0x19288F
{
	bool bVar0;
	char cVar1[24];
	if ((MISC::GET_FRAME_COUNT() % 2) == 0)
	{
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			bVar0 = false;
			while (bVar0 < 12)
			{
				if (bVar0 != 8)
				{
					StringCopy(&cVar1, "GR_case", 24);
					StringIntConCat(&cVar1, bVar0, 24);
					StringConCat(&cVar1, "_BunkerClosed", 24);
					if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
					{
						if (Global_1836148 && BitTest(Global_4718592.f_162495, 20))
						{
						}
						else if (STREAMING::IS_IPL_ACTIVE(&cVar1))
						{
							STREAMING::REMOVE_IPL(&cVar1);
						}
						else if (BitTest(Global_2703735.f_3703, bVar0))
						{
							MISC::CLEAR_BIT(&(Global_2703735.f_3703), bVar0);
						}
					}
					else if (!STREAMING::IS_IPL_ACTIVE(&cVar1))
					{
						STREAMING::REQUEST_IPL(&cVar1);
					}
					else if (!BitTest(Global_2703735.f_3703, bVar0))
					{
						MISC::SET_BIT(&(Global_2703735.f_3703), bVar0);
					}
				}
				bVar0++;
			}
		}
	}
	func_5088();
	__LIB_5__::func_660();
}

void func_5088()//Position - 0x192B1F
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar3;
	char* sVar4;
	iVar1 = 70;
	while (iVar1 <= 80)
	{
		iVar0 = __LIB_4__::func_705(iVar1);
		if (BitTest(Global_2703735.f_3703, iVar0) && func_5089())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_3703.f_1[iVar0]))
			{
				if (__LIB_0__::func_799(joaat("gr_prop_gr_bunkeddoor_col")))
				{
					Var2 = { 0f, 0f, 0f };
					Var2.f_3 = { 0f, 0f, 0f };
					Var2 = { __LIB_4__::func_696(iVar1) };
					Global_2703735.f_3703.f_1[iVar0] = OBJECT::CREATE_OBJECT(joaat("gr_prop_gr_bunkeddoor_col"), Var2, false, true, false);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Global_2703735.f_3703.f_1[iVar0], Var2, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(Global_2703735.f_3703.f_1[iVar0], Var2.f_3, 2, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("gr_prop_gr_bunkeddoor_col"));
				}
			}
		}
		else
		{
			iVar3 = 0;
			if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_3703.f_1[iVar0]))
			{
				sVar4 = ENTITY::GET_ENTITY_SCRIPT(Global_2703735.f_3703.f_1[iVar0], &iVar3);
				if (MISC::GET_HASH_KEY(sVar4) == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					ENTITY::DELETE_ENTITY(&(Global_2703735.f_3703.f_1[iVar0]));
				}
			}
		}
		iVar1++;
	}
}

int func_5089()//Position - 0x192C3F
{
	if (Global_1958740 && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || __LIB_0__::func_157(0)))
	{
		return 0;
	}
	if (__LIB_5__::func_301(PLAYER::PLAYER_ID()))
	{
		if ((__LIB_3__::func_248(PLAYER::PLAYER_ID()) == 124 || __LIB_3__::func_592(__LIB_3__::func_248(PLAYER::PLAYER_ID()), 17)) || __LIB_3__::func_592(__LIB_3__::func_248(PLAYER::PLAYER_ID()), 23))
		{
			return 0;
		}
	}
	if ((__LIB_2__::func_746(PLAYER::PLAYER_ID()) || __LIB_6__::func_273(PLAYER::PLAYER_ID())) || __LIB_6__::func_289(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_5__::func_241(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_668(PLAYER::PLAYER_ID()) == 124 || __LIB_3__::func_592(__LIB_1__::func_668(PLAYER::PLAYER_ID()), 23))
		{
			return 0;
		}
	}
	return 1;
}

void func_5115(int iParam0, int iParam1)//Position - 0x194221
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_5__::func_919(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_4__::func_303(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_1562(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_1562(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_3__::func_779())
					{
						__LIB_31__::func_558(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_31__::func_558(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_5116(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_5116(iParam0);
					}
					Jump @603; //curOff = 584
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_5116(int iParam0)//Position - 0x19447F
{
	__LIB_31__::func_558(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

int func_5141(var uParam0)//Position - 0x1958BD
{
	bool bVar0;
	bool bVar1;
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	bVar0 = false;
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1))
	{
		if (__LIB_5__::func_815(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			return 1;
		}
		else if (__LIB_6__::func_695())
		{
			return 1;
		}
	}
	if (!__LIB_11__::func_948(1) && !bVar0)
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523, 7))
	{
		return 1;
	}
	bVar1 = false;
	if (__LIB_15__::func_667(bVar1, 6) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_728(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (__LIB_4__::func_384() || __LIB_4__::func_383(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_5164(var uParam0, int iParam1)//Position - 0x196A3D
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1707582/*func_5238*/;
			break;
		case 1:
			uParam0->f_30 = 1705265/*func_5233*/;
			break;
		case 2:
			uParam0->f_31 = 1705202/*func_5231*/;
			break;
		case 3:
			uParam0->f_34 = 1705146/*func_5230*/;
			break;
		case 4:
			uParam0->f_12 = 1704432/*func_5229*/;
			break;
		case 6:
			uParam0->f_32 = 1704424/*func_5228*/;
			break;
		case 111:
			uParam0->f_35 = 1704415/*func_5227*/;
			break;
		case 79:
			*uParam0 = 1704391/*func_5226*/;
			break;
		case 11:
			uParam0->f_11 = 1704382/*func_5225*/;
			break;
		case 12:
			uParam0->f_33 = 1702552/*func_5222*/;
			break;
		case 14:
			uParam0->f_11 = 1702543/*func_5221*/;
			break;
		case 109:
			uParam0->f_56 = 1702535/*func_5220*/;
			break;
		case 13:
			uParam0->f_2 = 1702526/*func_5219*/;
			break;
		case 15:
			uParam0->f_2 = 1702517/*func_5218*/;
			break;
		case 75:
			uParam0->f_4 = 1702508/*func_5217*/;
			break;
		case 16:
			uParam0->f_5 = 1702499/*func_5216*/;
			break;
		case 108:
			uParam0->f_55 = 1702490/*func_5215*/;
			break;
		case 17:
			uParam0->f_17 = 1702465/*func_5214*/;
			break;
		case 19:
			uParam0->f_17 = 1702455/*func_5213*/;
			break;
		case 20:
			uParam0->f_3 = 1702446/*func_5212*/;
			break;
		case 21:
			uParam0->f_3 = 1702437/*func_5211*/;
			break;
		case 74:
			uParam0->f_53 = 1702428/*func_5210*/;
			break;
		case 22:
			uParam0->f_24 = 1702420/*func_5209*/;
			break;
		case 25:
			uParam0->f_23 = 1702412/*func_5208*/;
			break;
		case 30:
			uParam0->f_8 = 1701251/*func_5206*/;
			break;
		case 31:
			uParam0->f_39 = 1701241/*func_5205*/;
			break;
		case 33:
			uParam0->f_40 = 1701213/*func_5204*/;
			break;
		case 34:
			uParam0->f_41 = 1701204/*func_5203*/;
			break;
		case 36:
			uParam0->f_58 = 1701159/*func_5202*/;
			break;
		case 35:
			uParam0->f_42 = 1667428/*func_5199*/;
			break;
		case 45:
			uParam0->f_14 = 1667419/*func_5198*/;
			break;
		case 46:
			uParam0->f_14 = 1667410/*func_5197*/;
			break;
		case 110:
			uParam0->f_57 = 1667402/*func_5196*/;
			break;
		case 77:
			uParam0->f_13 = 1667391/*func_5195*/;
			break;
		case 47:
			uParam0->f_43 = 1667383/*func_5194*/;
			break;
		case 49:
			uParam0->f_8 = 1667374/*func_5193*/;
			break;
		case 50:
			*uParam0 = 1667054/*func_5186*/;
			break;
		case 51:
			*uParam0 = 1667025/*func_5185*/;
			break;
		case 52:
			uParam0->f_15 = 1666994/*func_5184*/;
			break;
		case 53:
			uParam0->f_13 = 1666960/*func_5183*/;
			break;
		case 54:
			uParam0->f_45 = 1666916/*func_5182*/;
			break;
		case 56:
			uParam0->f_46 = 1666887/*func_5181*/;
			break;
		case 57:
			uParam0->f_11 = 1666878/*func_5180*/;
			break;
		case 58:
			uParam0->f_13 = 1666821/*func_5178*/;
			break;
		case 64:
			uParam0->f_47 = 1666813/*func_5177*/;
			break;
		case 65:
			uParam0->f_21 = 1666805/*func_5176*/;
			break;
		case 66:
			uParam0->f_21 = 1666797/*func_5175*/;
			break;
		case 67:
			uParam0->f_21 = 1666789/*func_5174*/;
			break;
		case 68:
			*uParam0 = 1666763/*func_5173*/;
			break;
		case 69:
			*uParam0 = 1666737/*func_5172*/;
			break;
		case 70:
			uParam0->f_48 = 1666725/*func_5171*/;
			break;
		case 71:
			uParam0->f_49 = 1666716/*func_5170*/;
			break;
		case 107:
			uParam0->f_50 = 1666704/*func_5169*/;
			break;
		case 80:
			uParam0->f_7 = 1666695/*func_5168*/;
			break;
		case 78:
			uParam0->f_59 = 1666687/*func_5167*/;
			break;
		case 126:
			*uParam0 = 1666557/*func_5165*/;
			break;
	}
}

void func_5240(var uParam0, int iParam1)//Position - 0x1A132F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1751111/*func_5314*/;
			break;
		case 1:
			uParam0->f_30 = 1750801/*func_5313*/;
			break;
		case 2:
			uParam0->f_31 = 1745829/*func_5307*/;
			break;
		case 3:
			uParam0->f_34 = 1745800/*func_5306*/;
			break;
		case 4:
			uParam0->f_12 = 1745605/*func_5305*/;
			break;
		case 6:
			uParam0->f_32 = 1745255/*func_5304*/;
			break;
		case 111:
			uParam0->f_35 = 1745113/*func_5302*/;
			break;
		case 79:
			*uParam0 = 1745089/*func_5301*/;
			break;
		case 37:
			uParam0->f_18 = 1744881/*func_5300*/;
			break;
		case 38:
			uParam0->f_9 = 1744776/*func_5299*/;
			break;
		case 11:
			uParam0->f_11 = 1744767/*func_5298*/;
			break;
		case 12:
			uParam0->f_33 = 1744662/*func_5296*/;
			break;
		case 14:
			uParam0->f_11 = 1744653/*func_5295*/;
			break;
		case 109:
			uParam0->f_56 = 1744645/*func_5294*/;
			break;
		case 13:
			uParam0->f_2 = 1744636/*func_5293*/;
			break;
		case 44:
			*uParam0 = 1744627/*func_5292*/;
			break;
		case 15:
			uParam0->f_2 = 1744338/*func_5291*/;
			break;
		case 75:
			uParam0->f_4 = 1744329/*func_5290*/;
			break;
		case 16:
			uParam0->f_5 = 1744245/*func_5289*/;
			break;
		case 108:
			uParam0->f_55 = 1744236/*func_5288*/;
			break;
		case 17:
			uParam0->f_17 = 1743615/*func_5286*/;
			break;
		case 19:
			uParam0->f_17 = 1743416/*func_5285*/;
			break;
		case 20:
			uParam0->f_3 = 1743352/*func_5284*/;
			break;
		case 21:
			uParam0->f_3 = 1743292/*func_5283*/;
			break;
		case 74:
			uParam0->f_53 = 1743283/*func_5282*/;
			break;
		case 22:
			uParam0->f_24 = 1743040/*func_5281*/;
			break;
		case 25:
			uParam0->f_23 = 1742705/*func_5279*/;
			break;
		case 30:
			uParam0->f_8 = 1742567/*func_5278*/;
			break;
		case 31:
			uParam0->f_39 = 1742129/*func_5276*/;
			break;
		case 33:
			uParam0->f_40 = 1741464/*func_5271*/;
			break;
		case 34:
			uParam0->f_41 = 1738886/*func_5270*/;
			break;
		case 36:
			uParam0->f_58 = 1738841/*func_5269*/;
			break;
		case 35:
			uParam0->f_42 = 1712998/*func_5268*/;
			break;
		case 45:
			uParam0->f_14 = 1712770/*func_5267*/;
			break;
		case 46:
			uParam0->f_14 = 1712594/*func_5266*/;
			break;
		case 110:
			uParam0->f_57 = 1712586/*func_5265*/;
			break;
		case 77:
			uParam0->f_13 = 1712575/*func_5264*/;
			break;
		case 47:
			uParam0->f_43 = 1712333/*func_5263*/;
			break;
		case 49:
			uParam0->f_8 = 1712301/*func_5262*/;
			break;
		case 50:
			*uParam0 = 1712235/*func_5261*/;
			break;
		case 51:
			*uParam0 = 1712211/*func_5260*/;
			break;
		case 52:
			uParam0->f_15 = 1712028/*func_5259*/;
			break;
		case 53:
			uParam0->f_13 = 1711433/*func_5257*/;
			break;
		case 54:
			uParam0->f_45 = 1711196/*func_5256*/;
			break;
		case 56:
			uParam0->f_46 = 1711187/*func_5255*/;
			break;
		case 57:
			uParam0->f_11 = 1711122/*func_5254*/;
			break;
		case 58:
			uParam0->f_13 = 1710700/*func_5253*/;
			break;
		case 64:
			uParam0->f_47 = 1710692/*func_5252*/;
			break;
		case 65:
			uParam0->f_21 = 1710684/*func_5251*/;
			break;
		case 66:
			uParam0->f_21 = 1710624/*func_5250*/;
			break;
		case 67:
			uParam0->f_21 = 1710606/*func_5249*/;
			break;
		case 68:
			*uParam0 = 1710597/*func_5248*/;
			break;
		case 69:
			*uParam0 = 1710588/*func_5247*/;
			break;
		case 70:
			uParam0->f_48 = 1710084/*func_5246*/;
			break;
		case 71:
			uParam0->f_49 = 1709936/*func_5245*/;
			break;
		case 107:
			uParam0->f_50 = 1709891/*func_5244*/;
			break;
		case 80:
			uParam0->f_7 = 1709882/*func_5243*/;
			break;
		case 78:
			uParam0->f_59 = 1709874/*func_5242*/;
			break;
		case 125:
			uParam0->f_19 = 1709858/*func_5241*/;
			break;
	}
}

void func_5279(int iParam0, int iParam1)//Position - 0x1A9771
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_6__::func_71(PLAYER::PLAYER_ID()) && __LIB_7__::func_352(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_4__::func_769(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_5__::func_928())
		{
			bVar2 = __LIB_3__::func_594(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::func_162() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_1562(bVar2))
			{
				Var1 = { __LIB_1__::func_694(bVar2) };
				Var1.f_2 = 0f;
				if (SYSTEM::VDIST(Var1, Var0) <= IntToFloat(__LIB_3__::func_679(iParam0)))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 == 0)
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		if (__LIB_3__::func_661(1, iParam1))
		{
			if (iVar3 > 0)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
			}
			Global_1946250.f_504 = -1;
			__LIB_5__::func_947(1, iParam0);
			Global_1946250.f_3607 = 0;
			Global_1946250.f_3612 = 1;
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
	}
}

void func_5315(var uParam0, int iParam1)//Position - 0x1AB850
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1785894/*func_5441*/;
			break;
		case 1:
			uParam0->f_30 = 1785781/*func_5440*/;
			break;
		case 2:
			uParam0->f_31 = 1783304/*func_5435*/;
			break;
		case 3:
			uParam0->f_34 = 1783275/*func_5434*/;
			break;
		case 4:
			uParam0->f_12 = 1783115/*func_5433*/;
			break;
		case 6:
			uParam0->f_32 = 1782997/*func_5432*/;
			break;
		case 111:
			uParam0->f_35 = 1782780/*func_5429*/;
			break;
		case 79:
			*uParam0 = 1782756/*func_5428*/;
			break;
		case 37:
			uParam0->f_18 = 1782640/*func_5427*/;
			break;
		case 38:
			uParam0->f_9 = 1782489/*func_5424*/;
			break;
		case 11:
			uParam0->f_11 = 1782480/*func_5423*/;
			break;
		case 12:
			uParam0->f_33 = 1781477/*func_5420*/;
			break;
		case 14:
			uParam0->f_11 = 1781468/*func_5419*/;
			break;
		case 109:
			uParam0->f_56 = 1781460/*func_5418*/;
			break;
		case 13:
			uParam0->f_2 = 1781451/*func_5417*/;
			break;
		case 15:
			uParam0->f_2 = 1781297/*func_5416*/;
			break;
		case 75:
			uParam0->f_4 = 1781288/*func_5415*/;
			break;
		case 16:
			uParam0->f_5 = 1781200/*func_5414*/;
			break;
		case 108:
			uParam0->f_55 = 1780413/*func_5408*/;
			break;
		case 17:
			uParam0->f_17 = 1779784/*func_5404*/;
			break;
		case 19:
			uParam0->f_17 = 1779759/*func_5403*/;
			break;
		case 20:
			uParam0->f_3 = 1779720/*func_5402*/;
			break;
		case 21:
			uParam0->f_3 = 1779660/*func_5401*/;
			break;
		case 74:
			uParam0->f_53 = 1779651/*func_5400*/;
			break;
		case 22:
			uParam0->f_24 = 1779597/*func_5399*/;
			break;
		case 25:
			uParam0->f_23 = 1779293/*func_5398*/;
			break;
		case 30:
			uParam0->f_8 = 1779170/*func_5397*/;
			break;
		case 31:
			uParam0->f_39 = 1778951/*func_5396*/;
			break;
		case 33:
			uParam0->f_40 = 1778666/*func_5395*/;
			break;
		case 34:
			uParam0->f_41 = 1778260/*func_5394*/;
			break;
		case 36:
			uParam0->f_58 = 1778215/*func_5393*/;
			break;
		case 35:
			uParam0->f_42 = 1760686/*func_5392*/;
			break;
		case 45:
			uParam0->f_14 = 1760677/*func_5391*/;
			break;
		case 46:
			uParam0->f_14 = 1760593/*func_5390*/;
			break;
		case 110:
			uParam0->f_57 = 1760585/*func_5389*/;
			break;
		case 77:
			uParam0->f_13 = 1760562/*func_5388*/;
			break;
		case 47:
			uParam0->f_43 = 1760510/*func_5387*/;
			break;
		case 49:
			uParam0->f_8 = 1760478/*func_5386*/;
			break;
		case 50:
			*uParam0 = 1760300/*func_5385*/;
			break;
		case 51:
			*uParam0 = 1760203/*func_5384*/;
			break;
		case 52:
			uParam0->f_15 = 1760192/*func_5383*/;
			break;
		case 53:
			uParam0->f_13 = 1759877/*func_5381*/;
			break;
		case 54:
			uParam0->f_45 = 1759244/*func_5378*/;
			break;
		case 56:
			uParam0->f_46 = 1759235/*func_5377*/;
			break;
		case 57:
			uParam0->f_11 = 1754479/*func_5342*/;
			break;
		case 58:
			uParam0->f_13 = 1754465/*func_5341*/;
			break;
		case 64:
			uParam0->f_47 = 1752953/*func_5327*/;
			break;
		case 65:
			uParam0->f_21 = 1752945/*func_5326*/;
			break;
		case 66:
			uParam0->f_21 = 1752894/*func_5325*/;
			break;
		case 67:
			uParam0->f_21 = 1752866/*func_5324*/;
			break;
		case 68:
			*uParam0 = 1752857/*func_5323*/;
			break;
		case 69:
			*uParam0 = 1752848/*func_5322*/;
			break;
		case 70:
			uParam0->f_48 = 1752564/*func_5321*/;
			break;
		case 71:
			uParam0->f_49 = 1752468/*func_5320*/;
			break;
		case 107:
			uParam0->f_50 = 1752456/*func_5319*/;
			break;
		case 80:
			uParam0->f_7 = 1752270/*func_5318*/;
			break;
		case 78:
			uParam0->f_59 = 1752098/*func_5316*/;
			break;
	}
}

void func_5398(int iParam0, int iParam1)//Position - 0x1B265D
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_1__::func_744(PLAYER::PLAYER_ID()) && __LIB_5__::func_820(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_4__::func_816(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_5__::func_928())
		{
			bVar2 = __LIB_3__::func_594(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::func_162() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_1562(bVar2))
			{
				Var1 = { __LIB_1__::func_694(bVar2) };
				Var1.f_2 = 0f;
				if (SYSTEM::VDIST(Var1, Var0) <= IntToFloat(__LIB_3__::func_679(iParam0)))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 == 0)
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		if (__LIB_3__::func_661(1, iParam1))
		{
			if (iVar3 > 0)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
			}
			Global_1946250.f_504 = -1;
			__LIB_5__::func_947(1, iParam0);
			Global_1946250.f_3607 = 0;
			Global_1946250.f_3612 = 1;
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
	}
}

void func_5442(var uParam0, int iParam1)//Position - 0x1B402F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1813164/*func_5510*/;
			break;
		case 1:
			uParam0->f_30 = 1813018/*func_5509*/;
			break;
		case 2:
			uParam0->f_31 = 1807792/*func_5503*/;
			break;
		case 3:
			uParam0->f_34 = 1807763/*func_5502*/;
			break;
		case 4:
			uParam0->f_12 = 1807354/*func_5500*/;
			break;
		case 6:
			uParam0->f_32 = 1807184/*func_5499*/;
			break;
		case 111:
			uParam0->f_35 = 1807105/*func_5497*/;
			break;
		case 79:
			*uParam0 = 1807081/*func_5496*/;
			break;
		case 11:
			uParam0->f_11 = 1807072/*func_5495*/;
			break;
		case 12:
			uParam0->f_33 = 1806977/*func_5493*/;
			break;
		case 14:
			uParam0->f_11 = 1806968/*func_5492*/;
			break;
		case 109:
			uParam0->f_56 = 1806960/*func_5491*/;
			break;
		case 13:
			uParam0->f_2 = 1806951/*func_5490*/;
			break;
		case 15:
			uParam0->f_2 = 1806704/*func_5488*/;
			break;
		case 75:
			uParam0->f_4 = 1806695/*func_5487*/;
			break;
		case 16:
			uParam0->f_5 = 1806607/*func_5486*/;
			break;
		case 108:
			uParam0->f_55 = 1806598/*func_5485*/;
			break;
		case 17:
			uParam0->f_17 = 1806344/*func_5484*/;
			break;
		case 19:
			uParam0->f_17 = 1806319/*func_5483*/;
			break;
		case 20:
			uParam0->f_3 = 1806310/*func_5482*/;
			break;
		case 21:
			uParam0->f_3 = 1806301/*func_5481*/;
			break;
		case 74:
			uParam0->f_53 = 1806292/*func_5480*/;
			break;
		case 22:
			uParam0->f_24 = 1806284/*func_5479*/;
			break;
		case 25:
			uParam0->f_23 = 1806276/*func_5478*/;
			break;
		case 30:
			uParam0->f_8 = 1806153/*func_5477*/;
			break;
		case 31:
			uParam0->f_39 = 1805908/*func_5476*/;
			break;
		case 33:
			uParam0->f_40 = 1805652/*func_5475*/;
			break;
		case 34:
			uParam0->f_41 = 1803668/*func_5474*/;
			break;
		case 36:
			uParam0->f_58 = 1803623/*func_5473*/;
			break;
		case 35:
			uParam0->f_42 = 1789174/*func_5472*/;
			break;
		case 45:
			uParam0->f_14 = 1789165/*func_5471*/;
			break;
		case 46:
			uParam0->f_14 = 1789156/*func_5470*/;
			break;
		case 110:
			uParam0->f_57 = 1789148/*func_5469*/;
			break;
		case 77:
			uParam0->f_13 = 1789137/*func_5468*/;
			break;
		case 47:
			uParam0->f_43 = 1789085/*func_5467*/;
			break;
		case 49:
			uParam0->f_8 = 1789053/*func_5466*/;
			break;
		case 50:
			*uParam0 = 1788924/*func_5465*/;
			break;
		case 51:
			*uParam0 = 1788900/*func_5464*/;
			break;
		case 52:
			uParam0->f_15 = 1788889/*func_5463*/;
			break;
		case 53:
			uParam0->f_13 = 1788238/*func_5461*/;
			break;
		case 54:
			uParam0->f_45 = 1787633/*func_5458*/;
			break;
		case 56:
			uParam0->f_46 = 1787624/*func_5457*/;
			break;
		case 57:
			uParam0->f_11 = 1787557/*func_5456*/;
			break;
		case 58:
			uParam0->f_13 = 1787543/*func_5455*/;
			break;
		case 64:
			uParam0->f_47 = 1787164/*func_5454*/;
			break;
		case 65:
			uParam0->f_21 = 1787089/*func_5452*/;
			break;
		case 66:
			uParam0->f_21 = 1787038/*func_5451*/;
			break;
		case 67:
			uParam0->f_21 = 1787020/*func_5450*/;
			break;
		case 68:
			*uParam0 = 1787011/*func_5449*/;
			break;
		case 69:
			*uParam0 = 1787002/*func_5448*/;
			break;
		case 70:
			uParam0->f_48 = 1786885/*func_5447*/;
			break;
		case 71:
			uParam0->f_49 = 1786876/*func_5446*/;
			break;
		case 107:
			uParam0->f_50 = 1786864/*func_5445*/;
			break;
		case 80:
			uParam0->f_7 = 1786855/*func_5444*/;
			break;
		case 78:
			uParam0->f_59 = 1786847/*func_5443*/;
			break;
	}
}

void func_5511(var uParam0, int iParam1)//Position - 0x1BAAB5
{
	switch (iParam1)
	{
		case 96:
			uParam0->f_1 = 1813631/*func_5518*/;
			break;
		case 97:
			uParam0->f_1 = 1813622/*func_5517*/;
			break;
		case 98:
			uParam0->f_1 = 1813613/*func_5516*/;
			break;
		case 99:
			uParam0->f_1 = 1813453/*func_5515*/;
			break;
		case 100:
			uParam0->f_22 = 1813445/*func_5514*/;
			break;
		case 101:
			uParam0->f_22 = 1813290/*func_5512*/;
			break;
	}
}

void func_5519(var uParam0, int iParam1)//Position - 0x1BAC88
{
	switch (iParam1)
	{
		case 90:
			uParam0->f_1 = 1813848/*func_5524*/;
			break;
		case 91:
			uParam0->f_1 = 1813839/*func_5523*/;
			break;
		case 92:
			uParam0->f_1 = 1813830/*func_5522*/;
			break;
		case 93:
			uParam0->f_1 = 1813453/*func_5515*/;
			break;
		case 94:
			uParam0->f_1 = 1813821/*func_5521*/;
			break;
		case 95:
			uParam0->f_22 = 1813757/*func_5520*/;
			break;
	}
}

void func_5525(var uParam0, int iParam1)//Position - 0x1BAD61
{
	switch (iParam1)
	{
		case 84:
			uParam0->f_1 = 1814075/*func_5529*/;
			break;
		case 85:
			uParam0->f_1 = 1814066/*func_5528*/;
			break;
		case 86:
			uParam0->f_1 = 1813453/*func_5515*/;
			break;
		case 87:
			uParam0->f_1 = 1814057/*func_5527*/;
			break;
		case 89:
			uParam0->f_54 = 1813957/*func_5526*/;
			break;
	}
}

int func_5540()//Position - 0x1BB289
{
	if (BitTest(uLocal_111, 13))
	{
		return 1;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), __LIB_13__::func_512(Local_109.f_197 + 1), true) > 100f)
	{
		return 0;
	}
	return 1;
}

void func_5542()//Position - 0x1BB562
{
	func_5564();
	func_1019();
	func_5563();
	func_5562();
	func_1004();
	func_5559();
	func_5546();
	func_5544();
	func_995();
	__LIB_0__::func_467();
}

void func_5544()//Position - 0x1BB59A
{
	struct<3> Var0;
	float fVar1;
	if (func_443())
	{
		return;
	}
	if (func_28())
	{
		return;
	}
	Var0 = { __LIB_13__::func_512(Local_109.f_197 + 1) };
	fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0);
	if (fVar1 < 62500f)
	{
		if (!BitTest(uLocal_111, 14))
		{
			__LIB_12__::func_846(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
			func_5545();
			MISC::SET_BIT(&uLocal_111, 14);
		}
	}
	else if (fVar1 > 250000f)
	{
		func_491();
	}
}

void func_5545()//Position - 0x1BB63A
{
	int iVar0;
	if (func_443())
	{
		return;
	}
	iVar0 = Local_109.f_197 + 1;
	switch (iVar0)
	{
		case 1:
			__LIB_30__::func_902(93.9801f, -2532.1775f, 5.0778f, 124.1404f, 1065353216);
			__LIB_30__::func_902(96.7817f, -2536.936f, 5f, 121.982f, 1065353216);
			__LIB_30__::func_902(106.1278f, -2539.7168f, 5.0003f, 111.4201f, 1065353216);
			__LIB_30__::func_902(7.7245f, -2598.0417f, 5.0075f, 283.2584f, 1065353216);
			__LIB_30__::func_902(13.7512f, -2602.2341f, 5.0069f, 290.8908f, 1065353216);
			__LIB_30__::func_902(113.3588f, -2586.1123f, 5.0121f, 88.5573f, 1065353216);
			__LIB_30__::func_902(111.6119f, -2592.4563f, 5.0229f, 78.4188f, 1065353216);
			__LIB_30__::func_902(8.5363f, -2518.2036f, 5.0163f, 213.3867f, 1065353216);
			break;
		case 2:
			__LIB_30__::func_902(-1150.7592f, -1273.248f, 5.7478f, 282.4241f, 1065353216);
			__LIB_30__::func_902(-1019.6957f, -1323.5243f, 4.9009f, 45.7692f, 1065353216);
			__LIB_30__::func_902(-1012.7559f, -1319.5432f, 4.9001f, 43.138f, 1065353216);
			__LIB_30__::func_902(-1005.0328f, -1315.2365f, 4.941f, 58.4519f, 1065353216);
			__LIB_30__::func_902(-1014.173f, -1307.5161f, 5.2364f, 52.7034f, 1065353216);
			__LIB_30__::func_902(-1022.8014f, -1245.6417f, 5.014f, 106.8874f, 1065353216);
			__LIB_30__::func_902(-1112.947f, -1296.5685f, 4.258f, 298.12f, 1065353216);
			__LIB_30__::func_902(-1118.2638f, -1218.1298f, 1.5169f, 188.9163f, 1065353216);
			break;
		case 3:
			__LIB_30__::func_902(856.3708f, -1013.0075f, 28.4203f, 271.5768f, 1065353216);
			__LIB_30__::func_902(863.5153f, -993.5998f, 29.2774f, 239.646f, 1065353216);
			__LIB_30__::func_902(933.4873f, -990.8866f, 37.0241f, 127.1206f, 1065353216);
			__LIB_30__::func_902(932.2711f, -1007.077f, 36.7075f, 90.5105f, 1065353216);
			__LIB_30__::func_902(867.5297f, -1076.1879f, 27.7798f, 268.1065f, 1065353216);
			__LIB_30__::func_902(868.5233f, -1092.5907f, 27.7269f, 302.3375f, 1065353216);
			__LIB_30__::func_902(927.5185f, -1092.7412f, 33.1574f, 50.444f, 1065353216);
			__LIB_30__::func_902(936.7908f, -1078.3823f, 34.7149f, 77.3112f, 1065353216);
			break;
		case 4:
			__LIB_30__::func_902(243.2832f, -1999.028f, 18.8177f, 341.0091f, 1065353216);
			__LIB_30__::func_902(273.1573f, -2010.138f, 18.6668f, 29.2809f, 1065353216);
			__LIB_30__::func_902(171.7093f, -1951.9865f, 18.7677f, 286.1576f, 1065353216);
			__LIB_30__::func_902(186.7918f, -1911.8179f, 21.7781f, 235.4626f, 1065353216);
			__LIB_30__::func_902(201.1726f, -1898.231f, 23.2412f, 220.1641f, 1065353216);
			__LIB_30__::func_902(223.3617f, -1889.2734f, 24.4098f, 178.0541f, 1065353216);
			__LIB_30__::func_902(260.1144f, -1909.9835f, 24.8323f, 142.8378f, 1065353216);
			__LIB_30__::func_902(289.037f, -1933.3265f, 24.3999f, 148.1186f, 1065353216);
			break;
		case 5:
			__LIB_30__::func_902(-444.3442f, 229.0294f, 82.0416f, 232.9779f, 1065353216);
			__LIB_30__::func_902(-446.8376f, 224.1595f, 82.0175f, 236.8468f, 1065353216);
			__LIB_30__::func_902(-398.6772f, 227.0964f, 82.593f, 160.9651f, 1065353216);
			__LIB_30__::func_902(-412.1818f, 224.1092f, 82.5148f, 207.9725f, 1065353216);
			__LIB_30__::func_902(-368.4009f, 193.0408f, 82.6566f, 97.3058f, 1065353216);
			__LIB_30__::func_902(-471.0459f, 153.4937f, 77.0803f, 301.4885f, 1065353216);
			__LIB_30__::func_902(-492.4609f, 191.0608f, 69.9316f, 260.3055f, 1065353216);
			__LIB_30__::func_902(-492.152f, 185.6411f, 69.9316f, 267.4302f, 1065353216);
			break;
		case 6:
			__LIB_30__::func_902(-1119.8601f, -2022.4106f, 12.2297f, 292.6461f, 1065353216);
			__LIB_30__::func_902(-1102.0494f, -1983.8839f, 12.1406f, 223.9062f, 1065353216);
			__LIB_30__::func_902(-1084.2433f, -1968.4232f, 12.1514f, 204.0761f, 1065353216);
			__LIB_30__::func_902(-1033.4194f, -2068.4497f, 12.4615f, 33.9101f, 1065353216);
			__LIB_30__::func_902(-1037.0245f, -2088.5857f, 12.6459f, 21.4939f, 1065353216);
			__LIB_30__::func_902(-1056.9147f, -2088.1875f, 12.2919f, 8.2791f, 1065353216);
			__LIB_30__::func_902(-1020.2125f, -2077.7488f, 12.7601f, 40.6275f, 1065353216);
			__LIB_30__::func_902(-1032.6003f, -2101.7097f, 12.6309f, 20.9321f, 1065353216);
			break;
		case 7:
			__LIB_30__::func_902(-1323.5612f, -801.4799f, 16.5991f, 309.0983f, 1065353216);
			__LIB_30__::func_902(-1334.5367f, -788.2323f, 18.9061f, 263.1596f, 1065353216);
			__LIB_30__::func_902(-1333.0804f, -758.4105f, 19.367f, 226.0109f, 1065353216);
			__LIB_30__::func_902(-1326.3137f, -754.1177f, 19.367f, 215.8053f, 1065353216);
			__LIB_30__::func_902(-1252.46f, -880.908f, 11.1188f, 6.1107f, 1065353216);
			__LIB_30__::func_902(-1234.162f, -868.6242f, 11.821f, 83.8965f, 1065353216);
			__LIB_30__::func_902(-1234.7145f, -903.713f, 11.0757f, 22.5172f, 1065353216);
			__LIB_30__::func_902(-1274.1414f, -860.0457f, 11.2177f, 313.1372f, 1065353216);
			break;
		case 8:
			__LIB_30__::func_902(-954.9498f, -2765.8538f, 12.9446f, 300.864f, 1065353216);
			__LIB_30__::func_902(-967.7481f, -2758.0928f, 12.8166f, 282.6459f, 1065353216);
			__LIB_30__::func_902(-974.1952f, -2721.6328f, 12.7566f, 258.5829f, 1065353216);
			__LIB_30__::func_902(-956.0557f, -2704.2922f, 12.831f, 242.288f, 1065353216);
			__LIB_30__::func_902(-900.7191f, -2652.2378f, 12.7618f, 177.695f, 1065353216);
			__LIB_30__::func_902(-870.0709f, -2643.078f, 12.9495f, 171.6949f, 1065353216);
			__LIB_30__::func_902(-837.4813f, -2697.6697f, 12.8121f, 98.2582f, 1065353216);
			__LIB_30__::func_902(-830.3173f, -2716.6804f, 12.9445f, 57.01767f, 1065353216);
			break;
		case 9:
			__LIB_30__::func_902(246.686f, -2954.6077f, 4.8465f, 201.0552f, 1065353216);
			__LIB_30__::func_902(237.4989f, -2960.046f, 4.8401f, 219.4444f, 1065353216);
			__LIB_30__::func_902(278.0732f, -2933.8484f, 4.6858f, 173.7103f, 1065353216);
			__LIB_30__::func_902(305.2663f, -2953.1238f, 4.9916f, 152.1779f, 1065353216);
			__LIB_30__::func_902(306.9686f, -3051.7197f, 4.8569f, 73.9139f, 1065353216);
			__LIB_30__::func_902(290.1032f, -3067.0222f, 4.9168f, 22.2414f, 1065353216);
			__LIB_30__::func_902(248.4644f, -3081.7327f, 4.8082f, 5.7888f, 1065353216);
			__LIB_30__::func_902(213.5583f, -3006.3347f, 4.8585f, 281.97037f, 1065353216);
			break;
		case 10:
			__LIB_30__::func_902(1533.4225f, -2207.7156f, 76.5674f, 341.3423f, 1065353216);
			__LIB_30__::func_902(1518.6831f, -2197.1648f, 76.0905f, 323.85f, 1065353216);
			__LIB_30__::func_902(1505.8298f, -2149.169f, 76.2134f, 287.7332f, 1065353216);
			__LIB_30__::func_902(1517.6677f, -2071.0693f, 76.2881f, 218.4776f, 1065353216);
			__LIB_30__::func_902(1513.9712f, -2047.4719f, 76.3438f, 229.7462f, 1065353216);
			__LIB_30__::func_902(1562.5463f, -2050.7373f, 76.4175f, 158.5163f, 1065353216);
			__LIB_30__::func_902(1571.8231f, -2065.5188f, 76.0999f, 139.3434f, 1065353216);
			__LIB_30__::func_902(1559.6681f, -2212.9688f, 77.2272f, 30.3786f, 1065353216);
			break;
		case 11:
			__LIB_30__::func_902(-244.4574f, -2679.464f, 5.0003f, 115.7166f, 1065353216);
			__LIB_30__::func_902(-247.8431f, -2669.5378f, 5.0003f, 137.3239f, 1065353216);
			__LIB_30__::func_902(-273.936f, -2646.5842f, 5.1595f, 138.4986f, 1065353216);
			__LIB_30__::func_902(-283.7866f, -2643.4646f, 5.1536f, 145.8487f, 1065353216);
			__LIB_30__::func_902(-338.5266f, -2716.2915f, 5.0016f, 353.4592f, 1065353216);
			__LIB_30__::func_902(-340.0283f, -2721.088f, 5.0015f, 349.123f, 1065353216);
			__LIB_30__::func_902(-284.5308f, -2623.3013f, 5.0382f, 150.473f, 1065353216);
			__LIB_30__::func_902(-257.3565f, -2632.5056f, 5.0221f, 131.679f, 1065353216);
			break;
		case 12:
			__LIB_30__::func_902(515.9905f, -720.5799f, 23.8387f, 5.6255f, 1065353216);
			__LIB_30__::func_902(497.1281f, -728.9662f, 23.8776f, 343.3149f, 1065353216);
			__LIB_30__::func_902(447.638f, -685.7243f, 27.4277f, 285.8884f, 1065353216);
			__LIB_30__::func_902(449.3201f, -668.7817f, 27.3296f, 271.4846f, 1065353216);
			__LIB_30__::func_902(498.4707f, -568.4258f, 23.747f, 193.0118f, 1065353216);
			__LIB_30__::func_902(514.7365f, -562.4415f, 23.7507f, 158.6247f, 1065353216);
			__LIB_30__::func_902(527.8929f, -562.6914f, 23.7997f, 164.4089f, 1065353216);
			__LIB_30__::func_902(544.1755f, -594.525f, 23.7432f, 152.6498f, 1065353216);
			break;
		case 13:
			__LIB_30__::func_902(-518.2458f, -1828.4696f, 21.5839f, 6.9263f, 1065353216);
			__LIB_30__::func_902(-493.7525f, -1823.6257f, 21.8486f, 29.4302f, 1065353216);
			__LIB_30__::func_902(-450.3873f, -1794.8179f, 20.7743f, 85.0772f, 1065353216);
			__LIB_30__::func_902(-597.9962f, -1729.7974f, 22.139f, 232.3263f, 1065353216);
			__LIB_30__::func_902(-581.0703f, -1718.0138f, 21.9858f, 214.5117f, 1065353216);
			__LIB_30__::func_902(-449.3808f, -1766.1145f, 19.5349f, 112.1522f, 1065353216);
			__LIB_30__::func_902(-541.6173f, -1821.7346f, 21.9225f, 317.0811f, 1065353216);
			__LIB_30__::func_902(-618.6395f, -1711.9738f, 23.0683f, 235.603f, 1065353216);
			break;
		case 14:
			__LIB_30__::func_902(-291.3686f, -1274.7908f, 29.4583f, 184.0252f, 1065353216);
			__LIB_30__::func_902(-260.6114f, -1286.9575f, 30.0291f, 148.6145f, 1065353216);
			__LIB_30__::func_902(-245.4854f, -1358.2043f, 30.606f, 97.9413f, 1065353216);
			__LIB_30__::func_902(-258.2249f, -1408.0802f, 30.2904f, 46.1851f, 1065353216);
			__LIB_30__::func_902(-293.8492f, -1408.819f, 30.2952f, 0.4148f, 1065353216);
			__LIB_30__::func_902(-335.4179f, -1371.2859f, 30.2957f, 304.5049f, 1065353216);
			__LIB_30__::func_902(-337.6552f, -1333.5239f, 30.3008f, 289.5995f, 1065353216);
			__LIB_30__::func_902(-339.4502f, -1311.1847f, 30.2086f, 224.0032f, 1065353216);
			break;
		case 15:
			__LIB_30__::func_902(296.9105f, 339.6927f, 104.52f, 250.3169f, 1065353216);
			__LIB_30__::func_902(286.231f, 324.1514f, 104.6652f, 267.2802f, 1065353216);
			__LIB_30__::func_902(314.8456f, 295.4021f, 104.543f, 341.0804f, 1065353216);
			__LIB_30__::func_902(356.8475f, 275.1253f, 102.1478f, 349.9545f, 1065353216);
			__LIB_30__::func_902(403.6933f, 290.7596f, 101.9871f, 47.5594f, 1065353216);
			__LIB_30__::func_902(416.5997f, 309.7407f, 101.987f, 69.7807f, 1065353216);
			__LIB_30__::func_902(388.4496f, 357.7741f, 101.479f, 81.7557f, 1065353216);
			__LIB_30__::func_902(323.6804f, 367.7533f, 104.3807f, 251.082f, 1065353216);
			break;
		case 16:
			__LIB_30__::func_902(983.1635f, -1507.1158f, 30.4318f, 115.3138f, 1065353216);
			__LIB_30__::func_902(976.6813f, -1462.7924f, 30.4421f, 170.1272f, 1065353216);
			__LIB_30__::func_902(965.1019f, -1457.1803f, 30.1302f, 187.7104f, 1065353216);
			__LIB_30__::func_902(954.3276f, -1500.2892f, 29.9441f, 234.0993f, 1065353216);
			__LIB_30__::func_902(967.4816f, -1632.3331f, 29.1107f, 353.4453f, 1065353216);
			__LIB_30__::func_902(890.0863f, -1572.7229f, 29.84f, 281.6886f, 1065353216);
			__LIB_30__::func_902(905.2548f, -1543.5121f, 29.5311f, 219.2688f, 1065353216);
			__LIB_30__::func_902(922.9328f, -1544.217f, 29.8062f, 181.6137f, 1065353216);
			break;
		case 17:
			__LIB_30__::func_902(754.465f, -835.6287f, 24.8675f, 202.5404f, 1065353216);
			__LIB_30__::func_902(760.689f, -821.2197f, 25.2721f, 185.6987f, 1065353216);
			__LIB_30__::func_902(799.4153f, -825.4905f, 25.19f, 155.4635f, 1065353216);
			__LIB_30__::func_902(833.3179f, -912.5907f, 24.5379f, 96.2594f, 1065353216);
			__LIB_30__::func_902(836.246f, -921.1563f, 25.0122f, 86.3203f, 1065353216);
			__LIB_30__::func_902(798.7469f, -975.9729f, 25.1518f, 41.5425f, 1065353216);
			__LIB_30__::func_902(753.8427f, -972.2688f, 23.9505f, 340.2511f, 1065353216);
			__LIB_30__::func_902(737.0633f, -940.94f, 23.8394f, 264.3263f, 1065353216);
			break;
		case 18:
			__LIB_30__::func_902(1021.7275f, -2096.9216f, 29.9949f, 131.5094f, 1065353216);
			__LIB_30__::func_902(1004.2199f, -2097.619f, 30.1617f, 218.0245f, 1065353216);
			__LIB_30__::func_902(1048.3054f, -2162.876f, 31.0285f, 17.1583f, 1065353216);
			__LIB_30__::func_902(1053.1648f, -2138.9788f, 31.6269f, 138.5871f, 1065353216);
			__LIB_30__::func_902(992.7523f, -2239.5977f, 29.5519f, 335.4291f, 1065353216);
			__LIB_30__::func_902(975.8146f, -2201.1233f, 29.5516f, 290.5504f, 1065353216);
			__LIB_30__::func_902(1035.3707f, -2203.133f, 30.8934f, 77.8725f, 1065353216);
			__LIB_30__::func_902(1040.114f, -2203.8752f, 30.8934f, 62.6027f, 1065353216);
			break;
		case 19:
			__LIB_30__::func_902(957.4448f, -2452.676f, 27.553f, 231.7168f, 1065353216);
			__LIB_30__::func_902(957.0999f, -2474.014f, 27.4957f, 267.1929f, 1065353216);
			__LIB_30__::func_902(945.7234f, -2497.0315f, 27.453f, 256.6793f, 1065353216);
			__LIB_30__::func_902(946.9409f, -2478.7058f, 27.3433f, 233.4717f, 1065353216);
			__LIB_30__::func_902(932.4327f, -2534.0063f, 27.3027f, 231.8695f, 1065353216);
			__LIB_30__::func_902(900.2678f, -2552.2126f, 27.4211f, 283.9405f, 1065353216);
			__LIB_30__::func_902(1028.4071f, -2477.0042f, 27.5034f, 91.0284f, 1065353216);
			__LIB_30__::func_902(1021.0659f, -2459.5205f, 27.5462f, 131.3309f, 1065353216);
			break;
		case 20:
			__LIB_30__::func_902(-237.7643f, 248.6469f, 91.0445f, 196.7769f, 1065353216);
			__LIB_30__::func_902(-202.8588f, 245.9139f, 91.0419f, 127.8667f, 1065353216);
			__LIB_30__::func_902(-199.1134f, 179.474f, 76.6409f, 79.199f, 1065353216);
			__LIB_30__::func_902(-217.1594f, 141.0364f, 68.6993f, 21.5726f, 1065353216);
			__LIB_30__::func_902(-240.5069f, 139.3272f, 68.6369f, 352.6409f, 1065353216);
			__LIB_30__::func_902(-280.1349f, 153.3907f, 74.2578f, 344.9672f, 1065353216);
			__LIB_30__::func_902(-177.5456f, 215.1789f, 87.8734f, 101.2481f, 1065353216);
			__LIB_30__::func_902(-174.6252f, 206.0641f, 87.426f, 84.7397f, 1065353216);
			break;
		case 21:
			__LIB_30__::func_902(578.9037f, -1883.8176f, 24.4357f, 190.9878f, 1065353216);
			__LIB_30__::func_902(601.1657f, -1872.2864f, 23.7783f, 136.6622f, 1065353216);
			__LIB_30__::func_902(573.7683f, -1869.3746f, 24.1791f, 138.5911f, 1065353216);
			__LIB_30__::func_902(531.532f, -1858.3407f, 24.332f, 211.7805f, 1065353216);
			__LIB_30__::func_902(542.208f, -1844.0197f, 24.332f, 187.9743f, 1065353216);
			__LIB_30__::func_902(502.1498f, -1917.5164f, 24.3684f, 289.8235f, 1065353216);
			__LIB_30__::func_902(512.4601f, -1985.8962f, 23.9851f, 299.9174f, 1065353216);
			__LIB_30__::func_902(479.1975f, -1908.4225f, 24.2436f, 282.8994f, 1065353216);
			break;
		case 22:
			__LIB_30__::func_902(172.8245f, -2183.0525f, 5.0294f, 116.2516f, 1065353216);
			__LIB_30__::func_902(173.7597f, -2198.9172f, 5.171f, 72.2949f, 1065353216);
			__LIB_30__::func_902(173.7982f, -2224.8486f, 5.171f, 126.6793f, 1065353216);
			__LIB_30__::func_902(181.6316f, -2238.5383f, 5.0035f, 61.6889f, 1065353216);
			__LIB_30__::func_902(147.6168f, -2252.8826f, 5.0856f, 63.8371f, 1065353216);
			__LIB_30__::func_902(147.2348f, -2244.3389f, 5.0856f, 70.1362f, 1065353216);
			__LIB_30__::func_902(178.0549f, -2206.2732f, 5.0238f, 38.9746f, 1065353216);
			__LIB_30__::func_902(176.9219f, -2223.3008f, 5.0329f, 133.7211f, 1065353216);
			break;
	}
}

void func_5546()//Position - 0x1BCB0E
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	if (!func_443())
	{
		return;
	}
	if (!BitTest(uLocal_111, 19))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_2))
		{
			if (__LIB_0__::func_939(Local_109.f_2[0 /*10*/].f_2))
			{
				VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2), false, false);
				MISC::SET_BIT(&uLocal_111, 19);
			}
		}
	}
	if (!BitTest(Local_109.f_1, 8))
	{
		if (!BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 9))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_2))
			{
				if (!__LIB_0__::func_939(Local_109.f_2[0 /*10*/].f_2))
				{
					MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 9);
				}
			}
		}
	}
	if (!BitTest(Local_109.f_1, 6))
	{
		if (!BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 7))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_2))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2), false) };
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var1) < 90000f)
				{
					MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 7);
				}
			}
		}
	}
	if (iLocal_114 == -2)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_2))
		{
			if (__LIB_0__::func_939(Local_109.f_2[0 /*10*/].f_2))
			{
				if (!BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 8))
				{
					if (func_5558(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2)))
					{
						MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 8);
					}
				}
				else if (!func_5558(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2)))
				{
					MISC::CLEAR_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 8);
				}
			}
		}
	}
	if (!BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 2) && !BitTest(Local_109.f_1, 4))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_2))
		{
			iVar0 = NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == iVar0)
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
							{
								if (!BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 3))
								{
									MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 3);
								}
							}
							else if (BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 3))
							{
								MISC::CLEAR_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 3);
							}
						}
						else if (BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 3))
						{
							MISC::CLEAR_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 3);
						}
					}
					else if (BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 3))
					{
						MISC::CLEAR_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 3);
					}
				}
				else if (BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 3))
				{
					MISC::CLEAR_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 3);
				}
			}
		}
	}
	bVar2 = __LIB_0__::func_162();
	iVar3 = __LIB_0__::func_162();
	if (iLocal_114 != Local_109.f_215)
	{
		if (!func_28())
		{
			if (!func_1017())
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_134))
				{
					HUD::REMOVE_BLIP(&iLocal_134);
				}
				if (Local_109.f_215 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					func_5557(1);
				}
				else if (Local_109.f_215 > -1)
				{
					bVar2 = func_5556();
					if (bVar2 != __LIB_0__::func_162())
					{
						if (__LIB_2__::func_159(1))
						{
							iVar3 = __LIB_0__::func_797();
							if (iVar3 != __LIB_0__::func_162())
							{
								if (__LIB_2__::func_759(bVar2, iVar3, 1))
								{
									__LIB_12__::func_535(bVar2, 478, 1, 0);
									__LIB_12__::func_554(bVar2, __LIB_1__::func_389(iLocal_135), 1, 0);
									func_5557(1);
								}
							}
						}
						__LIB_30__::func_923("DCONTRA_TCKV" /* GXT: ~a~ took the Special Cargo vehicle. */, bVar2, 0, 0, 0, 1, 0);
					}
				}
				else if (Local_109.f_215 == -1)
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_132))
					{
						HUD::REMOVE_BLIP(&iLocal_132);
					}
					bVar2 = func_5553();
					if (bVar2 != __LIB_0__::func_162())
					{
						__LIB_12__::func_535(bVar2, 478, 0, 0);
						__LIB_12__::func_554(bVar2, __LIB_1__::func_389(iLocal_135), 0, 0);
					}
					func_5552(3, 1);
				}
				iLocal_114 = Local_109.f_215;
			}
			else
			{
				func_5552(1, 0);
			}
		}
	}
	func_5551();
	func_5549(0);
	func_5547();
}

void func_5547()//Position - 0x1BCEED
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	iVar0 = func_5556();
	Var1 = { func_40() };
	if (HUD::DOES_BLIP_EXIST(iLocal_132))
	{
		HUD::GET_HUD_COLOUR(12, &iVar2, &iVar3, &iVar4, &uVar5);
		GRAPHICS::DRAW_MARKER(1, Var1, 0f, 0f, 0f, 0f, 0f, 0f, 0.6f, 0.6f, 1f, iVar2, iVar3, iVar4, 100, false, false, 2, false, 0, 0, false);
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_2))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_2[0 /*10*/].f_2))
		{
			if (!BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 2))
			{
				if (iVar0 == PLAYER::PLAYER_ID())
				{
					if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0)))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYER_PED(iVar0), Var1, 6f, 6f, 2f, false, true, 0))
						{
							__LIB_30__::func_417(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2), &uLocal_304, 0, 1);
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2)))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2), true);
							}
							MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 2);
						}
					}
				}
			}
		}
	}
}

void func_5549(int iParam0)//Position - 0x1BD0AA
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	if (func_2())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[iParam0 /*10*/].f_2))
	{
		if (__LIB_0__::func_939(Local_109.f_2[iParam0 /*10*/].f_2))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_134))
			{
				if (Local_109.f_216 > -1)
				{
					HUD::GET_HUD_COLOUR(9, &iVar0, &iVar1, &iVar2, &uVar3);
				}
				else if (iLocal_114 == -2)
				{
					HUD::GET_HUD_COLOUR(6, &iVar0, &iVar1, &iVar2, &uVar3);
				}
				else
				{
					HUD::GET_HUD_COLOUR(9, &iVar0, &iVar1, &iVar2, &uVar3);
				}
				__LIB_3__::func_236(NETWORK::NET_TO_VEH(Local_109.f_2[iParam0 /*10*/].f_2), iVar0, iVar1, iVar2, 0);
			}
		}
	}
}

void func_5551()//Position - 0x1BD1D8
{
	if (iLocal_114 == -2)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_134))
		{
			if (iLocal_115 != Local_109.f_222)
			{
				iLocal_115 = Local_109.f_222;
				HUD::SET_BLIP_ALPHA(iLocal_134, iLocal_115);
			}
		}
	}
	else if (iLocal_115 != 255)
	{
		iLocal_115 = 255;
	}
}

void func_5552(int iParam0, bool bParam1)//Position - 0x1BD21E
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_134))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[0 /*10*/].f_2))
		{
			if (__LIB_0__::func_939(Local_109.f_2[0 /*10*/].f_2))
			{
				iLocal_134 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_109.f_2[0 /*10*/].f_2));
				HUD::SET_BLIP_PRIORITY(iLocal_134, 12);
				HUD::SET_BLIP_SPRITE(iLocal_134, 478);
				HUD::SET_BLIP_COLOUR(iLocal_134, iParam0);
				if (bParam1)
				{
					HUD::SET_BLIP_ROUTE(iLocal_134, true);
				}
			}
		}
	}
}

int func_5553()//Position - 0x1BD28E
{
	int iVar0;
	iVar0 = __LIB_0__::func_162();
	if (iLocal_114 < 0)
	{
		return iVar0;
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iLocal_114)))
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iLocal_114);
	}
	return iVar0;
}

int func_5556()//Position - 0x1BD4AE
{
	int iVar0;
	iVar0 = __LIB_0__::func_162();
	if (Local_109.f_216 > -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_109.f_216)))
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_109.f_216);
		}
	}
	return iVar0;
}

void func_5557(bool bParam0)//Position - 0x1BD4DF
{
	struct<3> Var0;
	if (!HUD::DOES_BLIP_EXIST(iLocal_132))
	{
		Var0 = { func_40() };
		iLocal_132 = HUD::ADD_BLIP_FOR_COORD(Var0);
		if (bParam0)
		{
			HUD::SET_BLIP_ROUTE(iLocal_132, true);
		}
	}
}

int func_5558(int iParam0)//Position - 0x1BD512
{
	struct<3> Var0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0, false) < 50f)
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
	{
		if (CAM::IS_SPHERE_VISIBLE(Var0, 1f))
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_5559()//Position - 0x1BD57C
{
	int iVar0;
	if (!func_551())
	{
		if (__LIB_0__::func_1("DCONTRA_HLP1" /* GXT: Kill the enemies before they steal the Special Cargo from your Warehouse. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (__LIB_0__::func_1("DCONTRA_HLP2" /* GXT: Kill the enemies before they steal the Special Cargo from your CEO's Warehouse. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (__LIB_0__::func_1("DCONTRA_HLPCR" /* GXT: Your CEO will lose Special Cargo while there are still enemies attacking your Warehouse. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (__LIB_0__::func_1("DCONTRA_HLPVCR" /* GXT: You will lose Special Cargo while there are still enemies attacking your Warehouse. */))
		{
			HUD::CLEAR_HELP(true);
		}
		return;
	}
	iVar0 = __LIB_30__::func_715(PLAYER::PLAYER_ID());
	if (iVar0 < 2)
	{
		if (__LIB_0__::func_1("DCONTRA_HLP1" /* GXT: Kill the enemies before they steal the Special Cargo from your Warehouse. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (__LIB_0__::func_1("DCONTRA_HLP2" /* GXT: Kill the enemies before they steal the Special Cargo from your CEO's Warehouse. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (__LIB_0__::func_1("DCONTRA_HLPVCR" /* GXT: You will lose Special Cargo while there are still enemies attacking your Warehouse. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (__LIB_0__::func_1("DCONTRA_HLPCR" /* GXT: Your CEO will lose Special Cargo while there are still enemies attacking your Warehouse. */))
		{
			HUD::CLEAR_HELP(true);
		}
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!BitTest(uLocal_111, 1))
	{
		return;
	}
	if (!BitTest(uLocal_111, 2))
	{
		if (!__LIB_1__::func_962(86))
		{
			if (__LIB_3__::func_446(0, 1, 1, 1))
			{
				if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_109.f_218)
				{
					if (func_443())
					{
						__LIB_1__::func_707("DCONTRA_HLP3" /* GXT: Enemies have stolen Special Cargo from your Warehouse. Retrieve it before they escape. */, -1);
					}
					else
					{
						__LIB_1__::func_707("DCONTRA_HLP1" /* GXT: Kill the enemies before they steal the Special Cargo from your Warehouse. */, -1);
					}
					__LIB_24__::func_323(1);
					MISC::SET_BIT(&uLocal_111, 2);
				}
				else if (func_5602() == Local_109.f_218)
				{
					if (func_443())
					{
						__LIB_1__::func_707("DCONTRA_HLP4" /* GXT: Enemies have stolen Special Cargo from your CEO's Warehouse. Retrieve it before they escape. */, -1);
					}
					else
					{
						__LIB_1__::func_707("DCONTRA_HLP2" /* GXT: Kill the enemies before they steal the Special Cargo from your CEO's Warehouse. */, -1);
					}
					__LIB_24__::func_323(1);
					MISC::SET_BIT(&uLocal_111, 2);
				}
			}
		}
	}
	else if (!BitTest(uLocal_111, 8))
	{
		if (!func_443())
		{
			if (__LIB_3__::func_446(0, 1, 1, 1))
			{
				if (__LIB_2__::func_50())
				{
					__LIB_1__::func_707("DCONTRA_HLPVCR" /* GXT: You will lose Special Cargo while there are still enemies attacking your Warehouse. */, -1);
				}
				else
				{
					__LIB_1__::func_707("DCONTRA_HLPCR" /* GXT: Your CEO will lose Special Cargo while there are still enemies attacking your Warehouse. */, -1);
				}
				__LIB_24__::func_323(1);
				MISC::SET_BIT(&uLocal_111, 8);
			}
		}
	}
	if (func_443())
	{
		if (BitTest(uLocal_111, 2))
		{
			if (!BitTest(uLocal_111, 4))
			{
				if (__LIB_3__::func_446(0, 1, 1, 1))
				{
					__LIB_3__::func_235("DCONTRA_HLPLS" /* GXT: You will slowly lose track of the Special Cargo vehicle ~HUD_COLOUR_RED~~a~~s~ if none of your organization can see it. */, "DCONTRA_VBLP" /* GXT: ~BLIP_CONTRABAND~ */, -1);
					__LIB_24__::func_323(1);
					MISC::SET_BIT(&uLocal_111, 4);
					MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 10);
				}
			}
		}
	}
}

void func_5562()//Position - 0x1BD791
{
	struct<3> Var0;
	if (!BitTest(uLocal_111, 12))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var0 = { __LIB_5__::func_689(__LIB_3__::func_38(Local_109.f_197 + 1)) };
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0, true) <= 200f)
			{
				iLocal_119 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_COORD(iLocal_119, "Bell_02", Var0, "ALARMS_SOUNDSET", false, 0, false);
				MISC::SET_BIT(&uLocal_111, 12);
			}
		}
	}
}

void func_5563()//Position - 0x1BD804
{
	struct<3> Var0;
	if (func_443())
	{
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!BitTest(uLocal_111, 1))
	{
		return;
	}
	if (!BitTest(Local_109.f_1, 13))
	{
		if (!BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 11))
		{
			Var0 = { func_40() };
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0) < 22500f)
			{
				MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 11);
			}
		}
		if (func_551())
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_133))
			{
				iLocal_133 = HUD::ADD_BLIP_FOR_COORD(func_40());
				HUD::SET_BLIP_ROUTE(iLocal_133, true);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(iLocal_133))
		{
			HUD::REMOVE_BLIP(&iLocal_133);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_133))
	{
		HUD::REMOVE_BLIP(&iLocal_133);
	}
}

void func_5564()//Position - 0x1BD8C9
{
	if (!BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 1))
	{
		if (!func_5601())
		{
			if (BitTest(Local_109.f_1, 6))
			{
				__LIB_2__::func_135(1);
				MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 1);
			}
		}
	}
}

void func_5565()//Position - 0x1BD908
{
	struct<3> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	if (func_28())
	{
		return;
	}
	bVar1 = false;
	while (bVar1 < 10)
	{
		if (func_443())
		{
			if (!BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_2, bVar1))
			{
				if (!BitTest(Local_109.f_206, bVar1))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[bVar1 /*10*/].f_1))
					{
						if (!__LIB_0__::func_951(Local_109.f_2[bVar1 /*10*/].f_1))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (func_5602() == Local_109.f_218)
								{
									if (__LIB_15__::func_449(NETWORK::NET_TO_PED(Local_109.f_2[bVar1 /*10*/].f_1)))
									{
										MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_2), bVar1);
									}
								}
							}
						}
					}
				}
			}
			if (!BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_3, bVar1))
			{
				if (!BitTest(Local_109.f_208, bVar1))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[bVar1 /*10*/].f_2))
					{
						if (func_5570(bVar1))
						{
							MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_3), bVar1);
						}
					}
				}
			}
			if (!BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_4, bVar1))
			{
				if (!BitTest(Local_109.f_207, bVar1))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[bVar1 /*10*/].f_1))
					{
						if (!__LIB_0__::func_951(Local_109.f_2[bVar1 /*10*/].f_1))
						{
							if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_109.f_2[bVar1 /*10*/].f_1), true), 10f, true))
							{
								MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_4), bVar1);
							}
						}
					}
				}
			}
		}
		if (func_551())
		{
			if (!func_443())
			{
				if (BitTest(Local_109.f_1, 13))
				{
					__LIB_2__::func_848(Local_109.f_2[bVar1 /*10*/].f_1, &(Local_130[bVar1 /*8*/]), -1082130432, 0, 1, 0, 0, -1, -1, 1, 0);
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[bVar1 /*10*/].f_1))
			{
				if (!__LIB_0__::func_951(Local_109.f_2[bVar1 /*10*/].f_1))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_109.f_2[bVar1 /*10*/].f_1), false))
					{
						__LIB_2__::func_848(Local_109.f_2[bVar1 /*10*/].f_1, &(Local_130[bVar1 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1, 0);
					}
				}
				else
				{
					__LIB_2__::func_848(Local_109.f_2[bVar1 /*10*/].f_1, &(Local_130[bVar1 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1, 0);
				}
			}
		}
		switch (Local_109.f_2[bVar1 /*10*/].f_9)
		{
			case 1:
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[bVar1 /*10*/].f_2))
					{
						if (__LIB_0__::func_939(Local_109.f_2[bVar1 /*10*/].f_2))
						{
							if (!__LIB_0__::func_951(Local_109.f_2[bVar1 /*10*/].f_1))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_109.f_2[bVar1 /*10*/].f_1), NETWORK::NET_TO_VEH(Local_109.f_2[bVar1 /*10*/].f_2)))
								{
									iVar3 = NETWORK::NET_TO_PED(Local_109.f_2[bVar1 /*10*/].f_1);
									if (__LIB_12__::func_748(&iVar3))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_109.f_2[bVar1 /*10*/].f_1), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_109.f_2[bVar1 /*10*/].f_1), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 0)
										{
											TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_109.f_2[bVar1 /*10*/].f_1), NETWORK::NET_TO_VEH(Local_109.f_2[bVar1 /*10*/].f_2), 25f, 786603);
										}
									}
								}
							}
						}
					}
				}
				break;
			case 2:
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[bVar1 /*10*/].f_2))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[bVar1 /*10*/].f_1))
						{
							if (__LIB_0__::func_939(Local_109.f_2[bVar1 /*10*/].f_2))
							{
								if (!__LIB_0__::func_951(Local_109.f_2[bVar1 /*10*/].f_1))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_109.f_2[bVar1 /*10*/].f_1), NETWORK::NET_TO_VEH(Local_109.f_2[bVar1 /*10*/].f_2)))
									{
										if ((TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_109.f_2[bVar1 /*10*/].f_1), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_109.f_2[bVar1 /*10*/].f_1), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 0) || BitTest(Local_109.f_204, bVar1))
										{
											TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_109.f_2[bVar1 /*10*/].f_1), NETWORK::NET_TO_VEH(Local_109.f_2[bVar1 /*10*/].f_2), 30f, 786469);
											if (BitTest(Local_109.f_204, bVar1))
											{
												MISC::CLEAR_BIT(&(Local_109.f_204), bVar1);
											}
										}
									}
								}
							}
						}
					}
				}
				break;
			case 3:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[bVar1 /*10*/].f_1))
				{
					if (!__LIB_0__::func_951(Local_109.f_2[bVar1 /*10*/].f_1))
					{
						iVar2 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_109.f_2[bVar1 /*10*/].f_1), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE"));
						if (iVar2 != 1 && iVar2 != 0)
						{
							if (__LIB_15__::func_446(Local_109.f_2[bVar1 /*10*/].f_1))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_109.f_2[bVar1 /*10*/].f_1), true);
								TASK::TASK_LEAVE_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_109.f_2[bVar1 /*10*/].f_1), 0, 0);
							}
						}
					}
				}
				break;
			case 5:
				break;
			case 4:
				break;
			case 7:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[bVar1 /*10*/].f_1))
				{
					if (!__LIB_0__::func_951(Local_109.f_2[bVar1 /*10*/].f_1))
					{
						iVar2 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_109.f_2[bVar1 /*10*/].f_1), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED"));
						if (iVar2 != 1 && iVar2 != 0)
						{
							if (__LIB_15__::func_446(Local_109.f_2[bVar1 /*10*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_2[bVar1 /*10*/].f_1))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_109.f_2[bVar1 /*10*/].f_1), false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_109.f_2[bVar1 /*10*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			case 6:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[bVar1 /*10*/].f_1))
				{
					if (!__LIB_0__::func_951(Local_109.f_2[bVar1 /*10*/].f_1))
					{
						iVar2 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_109.f_2[bVar1 /*10*/].f_1), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA"));
						if (iVar2 != 1 && iVar2 != 0)
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_109.f_2[bVar1 /*10*/].f_1), false);
							Var0 = { func_208() };
							TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(NETWORK::NET_TO_PED(Local_109.f_2[bVar1 /*10*/].f_1), Var0, 250f, 0);
						}
					}
				}
				break;
		}
		bVar1++;
	}
	func_5566();
}

void func_5566()//Position - 0x1BDEE8
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[iLocal_306 /*10*/].f_1))
	{
		if (!__LIB_0__::func_951(Local_109.f_2[iLocal_306 /*10*/].f_1))
		{
			if (!BitTest(uLocal_305, iLocal_306))
			{
				NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_109.f_2[iLocal_306 /*10*/].f_1, true);
				MISC::SET_BIT(&uLocal_305, iLocal_306);
			}
		}
	}
	iLocal_306++;
	if (iLocal_306 == 10)
	{
		iLocal_306 = 0;
	}
}

int func_5570(bool bParam0)//Position - 0x1BE22C
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_2[bParam0 /*10*/].f_2))
	{
		if (__LIB_0__::func_939(Local_109.f_2[bParam0 /*10*/].f_2))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_109.f_2[bParam0 /*10*/].f_2), 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_109.f_2[bParam0 /*10*/].f_2), 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_5583()//Position - 0x1BE5EF
{
	int iVar0;
	iVar0 = __LIB_4__::func_909(PLAYER::PLAYER_ID());
	iLocal_135 = __LIB_1__::func_357(iVar0);
}

int func_5599()//Position - 0x1BEB9B
{
	struct<4> Var0;
	int iVar1;
	if (Local_109.f_196 != -1)
	{
		return Local_109.f_196;
	}
	Var0 = { __LIB_31__::func_518() };
	Local_109.f_198 = __LIB_13__::func_137(Var0.f_0);
	Local_109.f_197 = (Var0.f_0 - 1);
	if (Local_109.f_197 < 0)
	{
		Local_109.f_197 = 0;
	}
	if (Local_109.f_196 == -1)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		if (iVar1 > 7)
		{
			Local_109.f_196 = 99;
		}
		else
		{
			Local_109.f_196 = 0;
		}
		if (Global_262145.f_15733 /* Tunable: EXEC_DISABLE_DEFEND_UNDER_ATTACK */ && Local_109.f_196 == 0)
		{
			Local_109.f_196 = 99;
		}
		else if (Global_262145.f_15732 /* Tunable: EXEC_DISABLE_DEFEND_FLEEING */ && Local_109.f_196 == 99)
		{
			Local_109.f_196 = 0;
		}
	}
	return Local_109.f_196;
}

int func_5601()//Position - 0x1BEC54
{
	int iVar0;
	iVar0 = func_5602();
	if (iVar0 > -1)
	{
		if (Local_109.f_218 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_5602()//Position - 0x1BEC76
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar1 = PLAYER::PLAYER_ID();
	if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = __LIB_32__::func_190();
		iVar1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775;
	}
	if (Local_110[iVar0 /*11*/].f_10 != -1)
	{
		return Local_110[iVar0 /*11*/].f_10;
	}
	if (__LIB_1__::func_744(iVar1))
	{
		Local_110[iVar0 /*11*/].f_10 = iVar0;
		if (iVar0 == Local_109.f_218)
		{
			__LIB_30__::func_944(1);
		}
	}
	else if (__LIB_2__::func_72(iVar1, 1))
	{
		iVar2 = __LIB_0__::func_797();
		if (iVar2 != __LIB_0__::func_162())
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
			{
				Local_110[iVar0 /*11*/].f_10 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
			}
		}
	}
	return Local_110[iVar0 /*11*/].f_10;
}

int func_5603()//Position - 0x1BED24
{
	if (func_443())
	{
		if (!func_65())
		{
			return 0;
		}
	}
	return 1;
}

int func_5604()//Position - 0x1BED40
{
	return Local_109.f_0;
}

int func_5605(int iParam0)//Position - 0x1BED4A
{
	return Local_110[iParam0 /*11*/];
}

void func_5611()//Position - 0x1BEE1C
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (!__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
	{
		if (BitTest(uLocal_111, 18))
		{
			if (!BitTest(uLocal_111, 6))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (func_5601() || func_441())
					{
						__LIB_30__::func_946(0, 4, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
						MISC::SET_BIT(&uLocal_111, 6);
					}
				}
			}
			uVar0 = Local_109.f_196;
			iVar1 = -1;
			iVar2 = -1;
			iVar3 = Local_109.f_197 + 1;
			iVar4 = Local_109.f_198;
			iVar5 = -1;
			bVar6 = !func_443();
			iVar7 = -1;
			iVar8 = 0;
			iVar9 = 0;
			iVar5 = Local_109.f_213;
			if (BitTest(Local_109.f_1, 1) || BitTest(Local_109.f_1, 4))
			{
				iVar7 = 2;
			}
			else if (BitTest(Local_109.f_1, 8))
			{
				iVar7 = 1;
			}
			else if (((BitTest(Local_109.f_1, 3) || BitTest(Local_109.f_1, 9)) || BitTest(Local_109.f_1, 15)) || BitTest(Local_109.f_1, 5))
			{
				iVar7 = 0;
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1943929.f_2 = Local_109.f_267;
				Global_1943929.f_3 = Local_109.f_268;
				func_5659(uVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar7, iVar8, iVar9, bVar6);
			}
		}
	}
	func_491();
	if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_116)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_118);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_109.f_261, true);
		}
		func_488();
	}
	func_5658();
	if (Local_109.f_219 != -1)
	{
		if (BitTest(uLocal_111, 5))
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_109.f_219)))
			{
				__LIB_12__::func_535(PLAYER::INT_TO_PLAYERINDEX(Local_109.f_219), 432, 0, 0);
				__LIB_12__::func_554(PLAYER::INT_TO_PLAYERINDEX(Local_109.f_219), 1, 0, 0);
				__LIB_15__::func_359(PLAYER::INT_TO_PLAYERINDEX(Local_109.f_219), 0, 0, 0);
				__LIB_3__::func_459(PLAYER::INT_TO_PLAYERINDEX(Local_109.f_219), 0);
				__LIB_22__::func_360(PLAYER::INT_TO_PLAYERINDEX(Local_109.f_219), Global_262145.f_12827 /* Tunable: GANGBOSS_JOB_BLIP_SCALE */, 0, 0);
			}
		}
	}
	if (__LIB_1__::func_731(0))
	{
		__LIB_11__::func_662(0);
	}
	if (BitTest(uLocal_112, 0))
	{
		if (!BitTest(uLocal_112, 2))
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
		}
	}
	MISC::SET_BIT(&uLocal_112, 8);
	func_218();
	OBJECT::SET_LOCAL_PLAYER_CAN_COLLECT_PORTABLE_PICKUPS(true);
	__LIB_30__::func_944(0);
	__LIB_15__::func_417(&(Local_109.f_269), 1);
	__LIB_31__::func_600(1, 0);
	if (!__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	__LIB_0__::func_202();
}

void func_5658()//Position - 0x1C1163
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_117);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_116);
}

void func_5659(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x1C1179
{
	char* sVar0;
	struct<27> Var1;
	int iVar2;
	struct<28> Var3;
	struct<28> Var4;
	struct<29> Var5;
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	iVar2 = __LIB_2__::func_39(PLAYER::PLAYER_ID());
	Var1.f_0 = Global_1943929;
	Var1.f_1 = Global_1943929.f_1;
	Var1.f_4 = Global_1943929.f_4;
	Var1.f_5 = Global_1943929.f_5;
	Var1.f_6 = Global_1943929.f_6;
	Var1.f_7 = Global_1943929.f_7;
	Var1.f_8 = Global_1943929.f_8;
	Var1.f_9 = Global_1943929.f_9;
	Var1.f_10 = Global_1943929.f_10;
	Var1.f_2 = Global_1943929.f_2;
	Var1.f_3 = Global_1943929.f_3;
	Var1.f_11 = iParam3;
	Var1.f_12 = iParam2;
	Var1.f_13 = uParam0;
	Var1.f_14 = __LIB_31__::func_570();
	Var1.f_16 = iParam1;
	Var1.f_17 = __LIB_5__::func_185(PLAYER::PLAYER_ID());
	Var1.f_22 = iParam7;
	Var1.f_23 = iParam8;
	Var1.f_25 = __LIB_15__::func_647(1);
	Var1.f_26 = __LIB_15__::func_647(0);
	if (__LIB_2__::func_50())
	{
		Var1.f_24 = __LIB_1__::func_137(BitTest(Global_1946250.f_4, 4));
	}
	else
	{
		Var1.f_24 = 0;
	}
	if (iVar2 != __LIB_0__::func_162() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
	{
		Var1.f_18 = iParam4;
		if (iParam3 != -1)
		{
			Var1.f_19 = __LIB_19__::func_937(iVar2, iParam3);
			Var1.f_20 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iParam4) / SYSTEM::TO_FLOAT(__LIB_19__::func_948(iParam3))) * 100f));
			Var1.f_21 = (100 - SYSTEM::ROUND(((SYSTEM::TO_FLOAT(__LIB_31__::func_573(iParam3, iVar2)) / SYSTEM::TO_FLOAT(__LIB_19__::func_948(iParam3))) * 100f)));
		}
		Var1.f_15 = __LIB_20__::func_459(iVar2);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_SELL"))
		{
			Var3 = { Var1 };
			Var3.f_27 = iParam5;
			STATS::PLAYSTATS_SELL_CONTRABAND_MISSION(&Var3);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_BUY") || MISC::ARE_STRINGS_EQUAL(sVar0, "fm_content_cargo"))
		{
			STATS::PLAYSTATS_BUY_CONTRABAND_MISSION(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_DEFEND"))
		{
			if (bParam9 == 1)
			{
				Var4 = { Var1 };
				Var4.f_27 = iParam5;
				STATS::PLAYSTATS_DEFEND_CONTRABAND_MISSION(&Var4);
			}
			else
			{
				Var5 = { Var1 };
				Var5.f_27 = iParam5;
				Var5.f_28 = iParam6;
				STATS::PLAYSTATS_RECOVER_CONTRABAND_MISSION(&Var5);
			}
		}
	}
	__LIB_15__::func_588();
}

void func_5666(struct<21> Param0)//Position - 0x1C1523
{
	__LIB_0__::func_935(__LIB_1__::func_32(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(10);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(3);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_109, 270, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_110, 353, 0);
	if (!__LIB_0__::func_934())
	{
		func_5611();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
		}
		func_5710();
		__LIB_30__::func_649(0, 0, 0);
		Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/] = 0;
	}
	else
	{
		func_5611();
	}
}

void func_5710()//Position - 0x1C230B
{
	int iVar0;
	PED::ADD_RELATIONSHIP_GROUP("relDefendPlayer", &iLocal_116);
	PED::ADD_RELATIONSHIP_GROUP("relDefendAI", &iLocal_117);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837161[iVar0], iLocal_116);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_116, Global_1837161[iVar0]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837161[iVar0], iLocal_117);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_117, Global_1837161[iVar0]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_116, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_116);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_116, Global_1837209[5]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837209[5], iLocal_116);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_116, Global_1837194);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837194, iLocal_116);
		iVar0++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_116, iLocal_117);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_117, iLocal_116);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_CULT"), iLocal_117);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("AMBIENT_GANG_CULT"), iLocal_116);
	__LIB_12__::func_526(1, &iLocal_117);
	__LIB_12__::func_525(&iLocal_117);
	__LIB_12__::func_525(&iLocal_116);
}

