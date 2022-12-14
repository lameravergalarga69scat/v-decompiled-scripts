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
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	int iLocal_115[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_116[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_117 = NULL;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
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
	var uLocal_297[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_298[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<16> Local_299[31];
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
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
	iLocal_111 = -1;
	sLocal_117 = "";
	iLocal_121 = 8;
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("appSmuggler")) > 1)
	{
		func_392(0, 1);
	}
	func_382();
	while (__LIB_0__::func_877())
	{
		func_380();
		if (!BitTest(uLocal_109, 5) && __LIB_13__::func_151())
		{
			func_377();
			func_354();
		}
		if (!BitTest(uLocal_109, 8) && BitTest(uLocal_109, 5))
		{
			func_348();
		}
		func_342();
		func_325();
		func_320();
		func_312();
		func_310();
		func_272();
		if (!BitTest(uLocal_109, 2))
		{
			func_6();
		}
		else if (!__LIB_0__::func_864(&uLocal_122))
		{
			__LIB_0__::func_795(&uLocal_122, 0, 0);
		}
		else if (__LIB_0__::func_937(&uLocal_122, 200, 0))
		{
			if (!Global_1946250.f_3364 && CAM::IS_SCREEN_FADED_OUT())
			{
				__LIB_4__::func_796(1);
				Global_1946108 = 1;
				func_392(0, 1);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_6()//Position - 0x234
{
	int iVar0;
	func_270();
	if (BitTest(uLocal_109, 0))
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_301))
		{
			iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_301);
			switch (iVar0)
			{
				case 0:
					__LIB_13__::func_30();
					func_268();
					break;
				case 1:
					func_221();
					break;
				case 35:
					if (iLocal_119 != 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
					}
					iLocal_119 = 0;
					break;
				case 36:
					if (iLocal_119 != 1)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Source_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
					}
					iLocal_119 = 1;
					break;
				case 37:
					if (iLocal_119 != 2)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Sell_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
					}
					iLocal_119 = 2;
					break;
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
					func_203(func_220(iVar0), 0);
					break;
				case 22:
				case 23:
				case 24:
				case 25:
				case 26:
				case 27:
				case 28:
				case 29:
					if (__LIB_0__::func_137(15964, -1))
					{
						func_203(func_220(iVar0), 0);
					}
					else
					{
						iLocal_119 = 2;
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SHOW_SCREEN", 2f, -1f, -1f, -1f, -1f);
					}
					break;
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
					func_7(func_220(iVar0));
					break;
			}
			MISC::CLEAR_BIT(&uLocal_109, 0);
		}
	}
}

void func_7(int iParam0)//Position - 0x3D5
{
	struct<2> Var0;
	struct<4> Var1;
	if (__LIB_13__::func_536(PLAYER::PLAYER_ID()))
	{
		func_198("HAPP_STEAL_T" /* GXT: SOURCE CARGO */, "HAPP_STEAL_D" /* GXT: Your Cargo storage area is full. */, "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 0, -1, 0);
	}
	else if (iParam0 != 8 && __LIB_13__::func_544(iParam0))
	{
		func_198("HAPP_STEAL_T" /* GXT: SOURCE CARGO */, "HAPP_STEAL_D1" /* GXT: There is a short waiting period while Ron sources additional Cargo for you to steal. */, "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 0, -1, 0);
	}
	else if (!func_12(229))
	{
		func_198("HAPP_STEAL_T" /* GXT: SOURCE CARGO */, func_11(), "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 0, -1, 0);
	}
	else
	{
		func_10(iParam0);
		StringCopy(&Var0, "HAPP_STEAL_C1" /* GXT: Are you sure you'd like to source Cargo for your Hangar? */, 16);
		StringCopy(&Var1, "", 16);
		if (iParam0 != 8)
		{
			StringCopy(&Var0, "HAPP_STEAL_C0" /* GXT: Are you sure you'd like to source ~a~? */, 16);
			Var1 = { __LIB_13__::func_535(iParam0) };
		}
		func_198("HAPP_STEAL_T" /* GXT: SOURCE CARGO */, &Var0, "WHOUSE_CONF" /* GXT: Confirm */, "WHOUSE_CANC" /* GXT: Cancel */, 0, 1, -1, 2, -1, &Var1);
	}
	func_8();
}

void func_8()//Position - 0x493
{
	sLocal_117 = "";
}

void func_10(int iParam0)//Position - 0x54F
{
	iLocal_121 = iParam0;
}

char* func_11()//Position - 0x55B
{
	return sLocal_117;
}

int func_12(int iParam0)//Position - 0x565
{
	int iVar0;
	if (!__LIB_41__::func_258(PLAYER::PLAYER_ID(), iParam0, 0))
	{
		iVar0 = __LIB_33__::func_253(PLAYER::PLAYER_ID(), iParam0, 0);
		if (iVar0 == 7)
		{
			if (__LIB_1__::func_802(PLAYER::PLAYER_ID()))
			{
				func_18("UA_ML_F_GOON1" /* GXT: Can't launch this mission whilst one of your Club Members is active in a Freemode Event. */);
			}
			else if (__LIB_3__::func_39(PLAYER::PLAYER_ID()))
			{
				func_18("UA_ML_F_GOON2" /* GXT: Can't launch this mission whilst one of your Associates is active in a Freemode Event. */);
			}
			else
			{
				func_18("UA_ML_F_GOON3" /* GXT: Can't launch this mission whilst one of your Bodyguards is active in a Freemode Event. */);
			}
		}
		else if (iVar0 == 15)
		{
			if (__LIB_1__::func_802(PLAYER::PLAYER_ID()))
			{
				func_18("GENERAL_MLF_G1" /* GXT: Can't launch this mission whilst one of your Club Members is currently at one with the animals. */);
			}
			else if (__LIB_3__::func_39(PLAYER::PLAYER_ID()))
			{
				func_18("GENERAL_MLF_G2" /* GXT: Can't launch this mission whilst one of your Associates is currently at one with the animals. */);
			}
			else
			{
				func_18("GENERAL_MLF_G3" /* GXT: Can't launch this mission whilst one of your Bodyguards is currently at one with the animals. */);
			}
		}
		else if (iVar0 == 16)
		{
			if (__LIB_1__::func_802(PLAYER::PLAYER_ID()))
			{
				func_18("GENERAL_MLF_G4" /* GXT: Can't launch this mission whilst one of your Club Members is playing a casino game. */);
			}
			else if (__LIB_3__::func_39(PLAYER::PLAYER_ID()))
			{
				func_18("GENERAL_MLF_G5" /* GXT: Can't launch this mission whilst one of your Associates is playing a casino game. */);
			}
			else
			{
				func_18("GENERAL_MLF_G6" /* GXT: Can't launch this mission whilst one of your Bodyguards is playing a casino game. */);
			}
		}
		else
		{
			func_18("BKR_TF_R6" /* GXT: Unable to launch the mission. */);
		}
		return 0;
	}
	if (!__LIB_0__::func_796(PLAYER::PLAYER_ID()))
	{
		func_18("DBG_BUN_NB" /* GXT: You can only launch this mission as the boss of a gang. */);
		return 0;
	}
	if (__LIB_0__::func_315(PLAYER::PLAYER_ID()))
	{
		func_18("BKR_TF_R3" /* GXT: Unable to launch a mission whilst you're on another job. */);
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		func_18("BKR_TF_R3" /* GXT: Unable to launch a mission whilst you're on another job. */);
		return 0;
	}
	return 1;
}

void func_18(char* sParam0)//Position - 0x728
{
	sLocal_117 = sParam0;
}

void func_198(char* sParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, char* sParam9)//Position - 0x8AB1
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "SHOW_OVERLAY");
	__LIB_0__::func_610(sParam0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		if (iParam6 != -1)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam6);
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
		if (iParam8 != -1)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam8);
		}
	}
	else if (iParam6 != -1)
	{
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam6);
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	__LIB_0__::func_610(sParam2);
	__LIB_0__::func_610(sParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam5)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Link", "GTAO_SMG_Hangar_Computer_Sounds", true);
	}
	else if (bParam4)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "GTAO_SMG_Hangar_Computer_Sounds", true);
	}
	MISC::SET_BIT(&uLocal_109, 1);
	func_199(iParam7);
}

void func_199(int iParam0)//Position - 0x8B50
{
	if (iLocal_120 != iParam0)
	{
		iLocal_120 = iParam0;
	}
}

void func_203(int iParam0, bool bParam1)//Position - 0x8BA1
{
	int iVar0;
	struct<2> Var1;
	struct<4> Var2;
	struct<2> Var3;
	struct<4> Var4;
	int iVar5;
	int iVar6;
	float fVar7;
	iVar0 = __LIB_13__::func_545(PLAYER::PLAYER_ID());
	if (iParam0 != 8)
	{
		iVar0 = uLocal_297[func_217(iParam0)];
	}
	if (!func_215(iParam0))
	{
		StringCopy(&Var1, "HAPP_SELL_D1" /* GXT: You have no Cargo to sell. */, 16);
		StringCopy(&Var2, "", 16);
		if (iParam0 != 8)
		{
			StringCopy(&Var1, "HAPP_SELL_D0" /* GXT: You have no ~a~ to sell. */, 16);
			Var2 = { __LIB_13__::func_535(iParam0) };
		}
		func_198("HAPP_SELL_T" /* GXT: SELL CARGO */, &Var1, "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 0, -1, &Var2);
	}
	else if (__LIB_36__::func_534())
	{
		func_198("HAPP_SELL_T" /* GXT: SELL CARGO */, "HAPP_SELL_C3" /* GXT: There is a short waiting period while Ron searches for Buyers before you can sell additional Cargo from the Hangar. */, "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 0, -1, 0);
	}
	else if (!func_12(230))
	{
		func_198("HAPP_SELL_T" /* GXT: SELL CARGO */, func_11(), "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 0, -1, 0);
	}
	else if (__LIB_8__::func_108(iVar0) != 1 && !bParam1)
	{
		func_10(iParam0);
		func_198("HAPP_SELL_T" /* GXT: SELL CARGO */, "HAPP_SELL_GDB" /* GXT: Larger sales may require multiple aircraft. Ensure you have additional Members prior to starting this mission. */, "OR_OVRLY_OK" /* GXT: Ok */, "", 0, 1, -1, 4, -1, 0);
	}
	else
	{
		StringCopy(&Var3, "HAPP_SELL_C2" /* GXT: You will forfeit any bonuses for individual Cargo type collections when selling a mix of Cargo types. Are you sure you would like to sell all of your Cargo? */, 16);
		StringCopy(&Var4, "", 16);
		iVar5 = -1;
		iVar6 = -1;
		if ((func_213() && func_211() != -1) || iParam0 != 8)
		{
			if (func_213())
			{
				iParam0 = func_211();
				iVar0 = uLocal_297[func_217(iParam0)];
			}
			iVar6 = __LIB_15__::func_442(iParam0, iVar0);
			StringCopy(&Var3, "HAPP_SELL_C0" /* GXT: Are you sure you'd like to sell your stock of ~a~ for $~1~? */, 16);
			fVar7 = (__LIB_13__::func_537(iParam0, iVar0) * 100f);
			if (fVar7 > 0f)
			{
				iVar5 = __LIB_15__::func_642(iParam0, iVar0);
				iVar6 = (iVar6 + iVar5);
				StringCopy(&Var3, "HAPP_SELL_C1" /* GXT: The Buyer has offered an additional bonus of ~1~% for your collection of ~a~. Are you sure you would like to sell your stock for $~1~? */, 16);
				iVar5 = SYSTEM::ROUND(fVar7);
			}
			Var4 = { __LIB_13__::func_535(iParam0) };
		}
		else if (iParam0 == 8)
		{
			MISC::SET_BIT(&uLocal_109, 11);
		}
		func_10(iParam0);
		if (__LIB_2__::func_444())
		{
			if (!__LIB_0__::func_137(34710, -1))
			{
				if (!__LIB_0__::func_501("APP_SG_HELP" /* GXT: You are currently in a private session. Sales made in populated public sessions with rival players will earn an additional "High Demand" cash bonus on your sale value. */, 0, 0))
				{
					__LIB_0__::func_151("APP_SG_HELP" /* GXT: You are currently in a private session. Sales made in populated public sessions with rival players will earn an additional "High Demand" cash bonus on your sale value. */, -1);
				}
				__LIB_0__::func_186(34710, 1, -1);
			}
		}
		if (iVar5 > 0)
		{
			MISC::SET_BIT(&uLocal_109, 12);
			func_198("HAPP_SELL_T" /* GXT: SELL CARGO */, &Var3, "WHOUSE_CONF" /* GXT: Confirm */, "WHOUSE_CANC" /* GXT: Cancel */, 0, 1, iVar5, 1, iVar6, &Var4);
		}
		else
		{
			func_198("HAPP_SELL_T" /* GXT: SELL CARGO */, &Var3, "WHOUSE_CONF" /* GXT: Confirm */, "WHOUSE_CANC" /* GXT: Cancel */, 0, 1, iVar6, 1, iVar5, &Var4);
		}
	}
	func_8();
}

int func_211()//Position - 0x9001
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uLocal_297[iVar0] > 0 && iVar0 != 0)
		{
			return func_212(iVar0);
		}
		iVar0++;
	}
	return -1;
}

int func_212(int iParam0)//Position - 0x903B
{
	switch (iParam0)
	{
		case 0:
			return 8;
		case 1:
			return 6;
		case 2:
			return 2;
		case 3:
			return 5;
		case 4:
			return 0;
		case 5:
			return 1;
		case 6:
			return 4;
		case 7:
			return 7;
		case 8:
			return 3;
		default:
	}
	return -1;
}

bool func_213()//Position - 0x90A6
{
	return BitTest(uLocal_109, 10);
}

int func_215(int iParam0)//Position - 0x90F6
{
	switch (iParam0)
	{
		case 8:
			return !__LIB_33__::func_250(PLAYER::PLAYER_ID());
		default:
	}
	return uLocal_297[func_217(iParam0)] > 0;
	return 0;
}

int func_217(int iParam0)//Position - 0x9138
{
	switch (iParam0)
	{
		case 8:
			return 0;
		case 6:
			return 1;
		case 2:
			return 2;
		case 5:
			return 3;
		case 0:
			return 4;
		case 1:
			return 5;
		case 4:
			return 6;
		case 7:
			return 7;
		case 3:
			return 8;
		default:
	}
	return 0;
}

int func_220(int iParam0)//Position - 0x91FB
{
	switch (iParam0)
	{
		case 2:
		case 13:
			return 8;
			break;
		case 3:
		case 14:
		case 22:
			return 6;
			break;
		case 4:
		case 15:
		case 23:
			return 2;
			break;
		case 5:
		case 16:
		case 24:
			return 5;
			break;
		case 6:
		case 17:
		case 25:
			return 0;
			break;
		case 7:
		case 18:
		case 26:
			return 1;
			break;
		case 8:
		case 19:
		case 27:
			return 4;
			break;
		case 9:
		case 20:
		case 28:
			return 7;
			break;
		case 10:
		case 21:
		case 29:
			return 3;
			break;
	}
	return -1;
}

void func_221()//Position - 0x92E7
{
	switch (func_267())
	{
		case 2:
			if (func_246(0))
			{
				func_245();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", true);
				func_226(229, 0);
			}
			else
			{
				func_198("", "BKR_TF_R6" /* GXT: Unable to launch the mission. */, "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 0, -1, 0);
			}
			break;
		case 1:
			if (func_246(1))
			{
				func_223();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", true);
				func_226(230, 0);
			}
			else
			{
				func_198("", "BKR_TF_R6" /* GXT: Unable to launch the mission. */, "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 0, -1, 0);
			}
			break;
		case 3:
			break;
		case 4:
			func_268();
			func_203(func_222(), 1);
			return;
		case 5:
			if (!func_12(229))
			{
				func_198("HAPP_T1" /* GXT: ACCESS DENIED */, func_11(), "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 0, -1, 0);
			}
			else if (func_246(0))
			{
				func_245();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", true);
				func_226(229, 1);
				return;
			}
			else
			{
				func_198("HAPP_T1" /* GXT: ACCESS DENIED */, "BKR_TF_R6" /* GXT: Unable to launch the mission. */, "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 0, -1, 0);
			}
			break;
		default:
			__LIB_13__::func_30();
			break;
	}
	func_268();
}

int func_222()//Position - 0x940E
{
	return iLocal_121;
}

void func_223()//Position - 0x9418
{
	__LIB_13__::func_546(1, 6117);
}

void func_226(int iParam0, bool bParam1)//Position - 0x9481
{
	int iVar0;
	iVar0 = func_222();
	if (iVar0 == 8 && iParam0 == 229)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		__LIB_11__::func_670(18);
	}
	else
	{
		__LIB_11__::func_662(18);
	}
	if (bParam1)
	{
		__LIB_7__::func_946(26);
	}
	if ((iParam0 == 230 && func_213()) && iVar0 == 8)
	{
		iVar0 = func_211();
	}
	Global_1944113.f_53 = 0;
	__LIB_33__::func_251(iParam0, 0, iVar0);
	__LIB_4__::func_796(1);
	Global_1946108 = 1;
	MISC::SET_BIT(&uLocal_109, 2);
}

void func_245()//Position - 0x9829
{
	__LIB_13__::func_546(1, 6115);
}

bool func_246(bool bParam0)//Position - 0x9839
{
	int iVar0;
	if (!__LIB_0__::func_112())
	{
		return 1;
	}
	while (!__LIB_33__::func_252(&iVar0, bParam0))
	{
		func_325();
		SYSTEM::WAIT(0);
	}
	func_325();
	return iVar0 == 2;
}

int func_267()//Position - 0xA7EF
{
	return iLocal_120;
}

void func_268()//Position - 0xA7F9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "HIDE_OVERLAY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_199(0);
	MISC::CLEAR_BIT(&uLocal_109, 1);
}

void func_270()//Position - 0xA832
{
	if (__LIB_12__::func_931())
	{
		if (!BitTest(uLocal_109, 0))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "GET_CURRENT_SELECTION");
			iLocal_301 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			MISC::SET_BIT(&uLocal_109, 0);
		}
	}
}

void func_272()//Position - 0xA887
{
	if (iLocal_113 != __LIB_36__::func_538())
	{
		if (!__LIB_0__::func_864(&uLocal_130))
		{
			__LIB_0__::func_795(&uLocal_130, 0, 0);
		}
		else if (__LIB_0__::func_937(&uLocal_130, 750, 0))
		{
			__LIB_0__::func_794(&uLocal_130);
			func_273();
		}
	}
}

void func_273()//Position - 0xA8C4
{
	int iVar0;
	func_301();
	if (func_300())
	{
		MISC::SET_BIT(&uLocal_109, 10);
	}
	func_279();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_278(iVar0);
		iVar0++;
	}
	func_277();
	func_274();
	__LIB_0__::func_795(&uLocal_126, 0, 0);
}

void func_274()//Position - 0xA90F
{
	if (__LIB_36__::func_534())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "UPDATE_SELL_COOLDOWN");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_276(Global_2789376.f_26, Global_2789376.f_28));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_275(Global_2789376.f_28));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "UPDATE_SELL_COOLDOWN");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_275(int iParam0)//Position - 0xA96F
{
	return (iParam0 / 1000);
}

int func_276(int iParam0, var uParam1, int iParam2)//Position - 0xA97D
{
	int iVar0;
	iVar0 = (iParam2 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)));
	iVar0 = (iVar0 / 1000);
	return iVar0;
}

void func_277()//Position - 0xA9A2
{
	int iVar0;
	int iVar1;
	int iVar2;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "UPDATE_STEAL_COOLDOWN");
	iVar0 = 1;
	while (iVar0 <= 8)
	{
		iVar1 = func_212(iVar0);
		iVar2 = iVar1;
		if (__LIB_13__::func_544(iVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_276(Global_2789376[iVar2 /*2*/], Global_2789376.f_17[iVar2]));
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		}
		iVar0++;
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_278(int iParam0)//Position - 0xAA06
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = uLocal_297[iParam0];
	iVar1 = 50;
	iVar2 = __LIB_15__::func_442(func_212(iParam0), iVar0);
	iVar3 = SYSTEM::ROUND((__LIB_13__::func_537(func_212(iParam0), iVar0) * 100f));
	if (IntToFloat(iVar3) > 0f)
	{
		iVar4 = __LIB_15__::func_642(func_212(iParam0), iVar0);
		iVar2 = (iVar2 + iVar4);
		MISC::SET_BIT(&uLocal_109, 14);
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "ADD_CARGO");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(iVar3));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_279()//Position - 0xAA98
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	sVar0 = __LIB_13__::func_422(PLAYER::PLAYER_ID());
	iVar1 = 0;
	iVar2 = func_289();
	iVar3 = func_288();
	iVar4 = func_287();
	iVar5 = func_286();
	iVar6 = func_285();
	iLocal_113 = __LIB_36__::func_538();
	iVar7 = 50;
	iVar8 = (iLocal_113 * __LIB_13__::func_538(8));
	fVar9 = func_283(iVar2, func_284());
	fVar10 = func_283(iVar3, func_282());
	fVar9 = __LIB_0__::func_331(fVar9, 0f, 100f);
	fVar10 = __LIB_0__::func_331(fVar10, 0f, 100f);
	if (func_280(iLocal_118))
	{
		iVar1 = 1;
	}
	if (func_213())
	{
		iVar11 = func_211();
		iVar8 = (iLocal_113 * __LIB_13__::func_538(iVar11));
		fVar12 = (__LIB_13__::func_537(iVar11, iLocal_113) * 100f);
		if (fVar12 > 0f)
		{
			iVar13 = __LIB_15__::func_642(iVar11, iLocal_113);
			iVar8 = (iVar8 + iVar13);
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "SET_STATS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(sVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_113);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_280(int iParam0)//Position - 0xABB8
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 3:
			return 1;
		default:
	}
	return 0;
}

int func_282()//Position - 0xAC05
{
	return __LIB_0__::func_369(6117, -1, 0);
}

float func_283(int iParam0, int iParam1)//Position - 0xAC16
{
	return ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f);
}

int func_284()//Position - 0xAC31
{
	return __LIB_0__::func_369(6115, -1, 0);
}

int func_285()//Position - 0xAC42
{
	return __LIB_0__::func_369(6120, -1, 0);
}

int func_286()//Position - 0xAC53
{
	return __LIB_0__::func_369(6119, -1, 0);
}

int func_287()//Position - 0xAC64
{
	return __LIB_0__::func_369(6121, -1, 0);
}

int func_288()//Position - 0xAC75
{
	return __LIB_0__::func_369(6118, -1, 0);
}

int func_289()//Position - 0xAC86
{
	return __LIB_0__::func_369(6116, -1, 0);
}

bool func_300()//Position - 0xAF24
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uLocal_297[iVar0] > 0)
		{
			iVar1++;
			if (iVar1 > 2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return iVar1 <= 2;
}

void func_301()//Position - 0xAF61
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = func_212(iVar0);
		uLocal_297[iVar0] = __LIB_36__::func_545(iVar1);
		iVar0++;
	}
}

void func_310()//Position - 0xB44B
{
	if (__LIB_0__::func_864(&uLocal_126))
	{
		if (__LIB_0__::func_937(&uLocal_126, 1000, 0))
		{
			func_277();
			func_274();
			__LIB_0__::func_627(&uLocal_126, 0, 0);
		}
	}
	else
	{
		__LIB_0__::func_795(&uLocal_126, 0, 0);
	}
}

void func_312()//Position - 0xB4C1
{
	int iVar0;
	bLocal_110++;
	if (bLocal_110 == 32)
	{
		bLocal_110 = false;
	}
	iVar0 = bLocal_110;
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		return;
	}
	if (((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && __LIB_1__::func_655(iVar0)) && !__LIB_1__::func_30(iVar0, 0)) && !func_319())
	{
		if (!func_318())
		{
			func_315(iVar0, bLocal_110);
		}
	}
	else if (func_318())
	{
		func_313();
	}
	if (BitTest(uLocal_114, bLocal_110))
	{
		if (!__LIB_0__::func_796(iVar0) && func_318())
		{
			func_313();
		}
	}
	else if (__LIB_0__::func_796(iVar0) && func_318())
	{
		func_313();
	}
}

void func_313()//Position - 0xB56A
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iLocal_298[iVar0] == bLocal_110)
		{
			iLocal_298[iVar0] = -1;
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar1 < 31)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "REMOVE_ACTIVE_ORGANISATION");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(&(Local_299[iVar1 /*16*/]));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		StringCopy(&(Local_299[iVar1 /*16*/]), "", 64);
		MISC::CLEAR_BIT(&uLocal_114, bLocal_110);
		func_314(PLAYER::INT_TO_PLAYERINDEX(bLocal_110));
	}
}

void func_314(int iParam0)//Position - 0xB5EF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_116[iVar0] == iParam0)
		{
			iLocal_115[iVar0] = 0;
			iLocal_116[iVar0] = -1;
			return;
		}
		iVar0++;
	}
}

void func_315(int iParam0, int iParam1)//Position - 0xB626
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	struct<16> Var4[7];
	int iVar5;
	int iVar6;
	iVar0 = 0;
	sVar1 = PLAYER::GET_PLAYER_NAME(iParam0);
	if (MISC::ARE_STRINGS_EQUAL(sVar1, "**Invalid**"))
	{
		return;
	}
	iVar3 = 7;
	if (__LIB_0__::func_796(iParam0))
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar5 = Global_1892703[iParam1 /*599*/].f_10.f_11[iVar2];
			if (iVar5 != __LIB_0__::func_162())
			{
				StringCopy(&(Var4[iVar2 /*16*/]), PLAYER::GET_PLAYER_NAME(iVar5), 64);
			}
			else
			{
				StringCopy(&(Var4[iVar2 /*16*/]), "", 64);
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var4[iVar2 /*16*/])))
			{
				if (iVar2 != iVar3)
				{
					iVar6 = iVar2;
					while (iVar6 <= (iVar3 - 1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var4[iVar6 /*16*/])))
						{
							Var4[iVar2 /*16*/] = { Var4[iVar6 /*16*/] };
							StringCopy(&(Var4[iVar6 /*16*/]), "", 64);
							iVar6 = (iVar3 - 1);
						}
						iVar6++;
					}
				}
			}
			iVar2++;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "ADD_ACTIVE_ORGANISATION");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(__LIB_13__::func_547(iParam0));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(sVar1);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(&(Var4[iVar2 /*16*/]));
			iVar2++;
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		sVar1 = __LIB_13__::func_547(iParam0);
		func_316(iParam0, __LIB_3__::func_490(iParam0));
		MISC::SET_BIT(&uLocal_114, iParam1);
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "ADD_ACTIVE_ORGANISATION");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(sVar1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iLocal_298[iVar0] == -1)
		{
			iLocal_298[iVar0] = iParam1;
			StringCopy(&(Local_299[iVar0 /*16*/]), sVar1, 64);
			return;
		}
		iVar0++;
	}
}

void func_316(int iParam0, int iParam1)//Position - 0xB7B8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_116[iVar0] == -1)
		{
			iLocal_115[iVar0] = iParam1;
			iLocal_116[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

int func_318()//Position - 0xB846
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iLocal_298[iVar0] == bLocal_110)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_319()//Position - 0xB875
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_116[iVar0] == bLocal_110)
		{
			if (!__LIB_0__::func_796(PLAYER::INT_TO_PLAYERINDEX(bLocal_110)))
			{
				return 1;
			}
			else
			{
				return iLocal_115[iVar0] != __LIB_3__::func_490(PLAYER::INT_TO_PLAYERINDEX(bLocal_110));
			}
		}
		iVar0++;
	}
	return 0;
}

void func_320()//Position - 0xB8C5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_13__::func_66(2, 205, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(205), -1f, -1f, -1f, -1f);
		if (iLocal_119 == 1)
		{
			iLocal_119 = 0;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
		}
		else if (iLocal_119 == 2)
		{
			iLocal_119 = 1;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Source_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
		}
	}
	__LIB_13__::func_66(2, 206, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(206), -1f, -1f, -1f, -1f);
		if (iLocal_119 == 0)
		{
			iLocal_119 = 1;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Source_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
		}
		else if (iLocal_119 == 1)
		{
			iLocal_119 = 2;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Sell_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
		}
	}
	if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
	{
		__LIB_13__::func_66(2, 188, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(301), -1f, -1f, -1f, -1f);
		}
		__LIB_13__::func_66(2, 187, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(300), -1f, -1f, -1f, -1f);
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_RELEASE_EVENT", SYSTEM::TO_FLOAT(300), -1f, -1f, -1f, -1f);
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_RELEASE_EVENT", SYSTEM::TO_FLOAT(301), -1f, -1f, -1f, -1f);
		}
	}
	else
	{
		__LIB_13__::func_66(2, 188, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(188), -1f, -1f, -1f, -1f);
		}
		__LIB_13__::func_66(2, 187, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(187), -1f, -1f, -1f, -1f);
		}
	}
	__LIB_13__::func_66(2, 189, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(189), -1f, -1f, -1f, -1f);
	}
	__LIB_13__::func_66(2, 190, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(190), -1f, -1f, -1f, -1f);
	}
	__LIB_13__::func_66(2, 201, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(201), -1f, -1f, -1f, -1f);
	}
	__LIB_13__::func_66(2, 202, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
	{
		func_321();
	}
	__LIB_13__::func_66(2, 203, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(203), -1f, -1f, -1f, -1f);
	}
	__LIB_13__::func_66(2, 204, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(204), -1f, -1f, -1f, -1f);
	}
	if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "SET_MOUSE_INPUT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		__LIB_13__::func_66(2, 237, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(201), -1f, -1f, -1f, -1f);
		}
		__LIB_13__::func_66(2, 238, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/))
		{
			func_321();
		}
	}
	else
	{
		__LIB_13__::func_66(2, 195, 1);
		__LIB_13__::func_66(2, 196, 1);
		iVar0 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/);
		iVar1 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/);
		if (((iVar0 != 127 || iLocal_302 != 127) || iVar1 != 127) || iLocal_303 != 127)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "SET_ANALOG_STICK_INPUT");
			iLocal_302 = iVar0;
			iLocal_303 = iVar1;
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_302);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_303);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	__LIB_13__::func_66(2, 197, 1);
	__LIB_13__::func_66(2, 198, 1);
	iVar2 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 197 /*INPUT_FRONTEND_RIGHT_AXIS_X*/);
	iVar3 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 198 /*INPUT_FRONTEND_RIGHT_AXIS_Y*/);
	if (((iVar2 != 127 || iLocal_304 != 127) || iVar3 != 127) || iLocal_305 != 127)
	{
		bVar4 = (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/));
		if (!bVar4)
		{
			bVar4 = (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/));
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "SET_ANALOG_STICK_INPUT");
		iLocal_304 = iVar2;
		iLocal_305 = iVar3;
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_304);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_305);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar4);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/)) && !PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		func_392(0, 1);
	}
}

void func_321()//Position - 0xBDD9
{
	if (!__LIB_13__::func_151())
	{
		func_392(0, 1);
	}
	if (iLocal_119 == 0)
	{
		if (!__LIB_13__::func_543())
		{
			func_392(0, 1);
		}
	}
	else if (!__LIB_13__::func_543())
	{
		iLocal_119 = 0;
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SHOW_SCREEN", 0f, -1f, -1f, -1f, -1f);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
		return;
	}
	if (__LIB_13__::func_543())
	{
		func_268();
	}
	else
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(202), -1f, -1f, -1f, -1f);
	}
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Back", "GTAO_SMG_Hangar_Computer_Sounds", true);
}

void func_325()//Position - 0xBEBE
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	__LIB_12__::func_942();
	if (Global_78319)
	{
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
	}
	HUD::THEFEED_HIDE_THIS_FRAME();
	__LIB_13__::func_66(2, 199, 1);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	__LIB_3__::func_48(0f, 0f, 1f, 1f, 0, 0, 0, 255);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_300, 255, 255, 255, 255, 0);
	__LIB_0__::func_646();
	__LIB_1__::func_33(0);
	__LIB_3__::func_93(1);
	Global_1964706.f_5 = MISC::GET_FRAME_COUNT();
}

void func_342()//Position - 0xC25C
{
	if (!BitTest(uLocal_109, 9))
	{
		if (!__LIB_13__::func_543())
		{
			if (!__LIB_13__::func_151())
			{
				MISC::SET_BIT(&uLocal_109, 13);
				func_198("HAPP_T1" /* GXT: ACCESS DENIED */, "HAPP_D1" /* GXT: Authentication must be granted by Ronald.Jakowski. Please progress with the Air-Freight Business setup. */, "HAPP_SU" /* GXT: Set Up */, "", 0, 0, -1, 5, -1, 0);
				if ((!func_346(2) && !BitTest(Global_1946102, 2)) && BitTest(uLocal_109, 13))
				{
					__LIB_0__::func_151("HAPP_HELP_3" /* GXT: Before you can gain access to the Free Trade Shipping app you must complete a job for Ron. Click the Set Up button to accept the job. */, 14000);
					MISC::SET_BIT(&Global_1946102, 2);
					func_343(2);
				}
			}
			else
			{
				MISC::SET_BIT(&uLocal_109, 9);
			}
		}
	}
}

void func_343(int iParam0)//Position - 0xC2E0
{
	switch (iParam0)
	{
		case 0:
			__LIB_13__::func_46(15967);
			break;
		case 1:
			__LIB_13__::func_46(15970);
			break;
		case 2:
			__LIB_13__::func_46(15973);
			break;
		case 3:
			__LIB_13__::func_46(15976);
			break;
		case 4:
			__LIB_13__::func_46(15979);
			break;
		case 5:
			__LIB_13__::func_46(15982);
			break;
		case 6:
			__LIB_13__::func_46(15985);
			break;
		case 7:
			__LIB_13__::func_46(15988);
			break;
		case 8:
			__LIB_13__::func_46(15991);
			break;
	}
}

int func_346(int iParam0)//Position - 0xC3CD
{
	switch (iParam0)
	{
		case 0:
			return __LIB_13__::func_45(15967);
		case 1:
			return __LIB_13__::func_45(15970);
		case 2:
			return __LIB_13__::func_45(15973);
		case 3:
			return __LIB_13__::func_45(15976);
		case 4:
			return __LIB_13__::func_45(15979);
		case 5:
			return __LIB_13__::func_45(15982);
		case 6:
			return __LIB_13__::func_45(15985);
		case 7:
			return __LIB_13__::func_45(15988);
		case 8:
			return __LIB_13__::func_45(15991);
		default:
	}
	return 0;
}

void func_348()//Position - 0xC49E
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar2 = 8 + 1;
	if (!BitTest(uLocal_109, 7) && !__LIB_0__::func_75())
	{
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			iVar3 = iVar1;
			if (func_352(iVar3))
			{
				Var0 = { func_351(iVar3) };
				iLocal_112 = func_350(iVar3);
				MISC::SET_BIT(&Global_1946102, iVar1);
				func_343(iVar3);
			}
			else
			{
				iVar1++;
			}
		}
	}
	if (!BitTest(uLocal_109, 7) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		__LIB_0__::func_151(&Var0, iLocal_112);
		MISC::SET_BIT(&uLocal_109, 7);
	}
	else if (BitTest(uLocal_109, 7))
	{
		if (!__LIB_0__::func_864(&uLocal_128))
		{
			__LIB_0__::func_795(&uLocal_128, 0, 0);
		}
		else if (__LIB_0__::func_937(&uLocal_128, iLocal_112, 0))
		{
			MISC::CLEAR_BIT(&uLocal_109, 7);
			iLocal_112 = 0;
			__LIB_0__::func_794(&uLocal_128);
			if (func_349())
			{
				MISC::SET_BIT(&uLocal_109, 8);
			}
		}
	}
}

int func_349()//Position - 0xC570
{
	if (((((((func_346(0) && func_346(1)) && func_346(2)) && func_346(3)) && func_346(4)) && func_346(6)) && func_346(7)) && func_346(8))
	{
		return 1;
	}
	return 0;
}

int func_350(int iParam0)//Position - 0xC5CC
{
	switch (iParam0)
	{
		case 0:
			return 14000;
		case 1:
			return 15000;
		case 2:
			return 14000;
		case 3:
			return 14500;
		case 4:
			return 14000;
		case 5:
			return 14000;
		case 6:
			return 14000;
		case 7:
			return 15000;
		case 8:
			return 14500;
		default:
	}
	return 0;
}

struct<4> func_351(int iParam0)//Position - 0xC648
{
	struct<4> Var0;
	StringCopy(&Var0, "", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "HAPP_HELP_1" /* GXT: Bonuses applied to individual collections of Cargo types will be lost when selling all. Buyers only pay bonuses for collections of a specific type of Cargo. */, 16);
			break;
		case 1:
			StringCopy(&Var0, "HAPP_HELP_2" /* GXT: Interested Buyers will pay a bonus for collections of the same Cargo type. The more you have in stock of the same Cargo type the bigger the bonus will be. Buyers will also pay bigger Bonuses depending on the Cargo type. */, 16);
			break;
		case 2:
			StringCopy(&Var0, "HAPP_HELP_3" /* GXT: Before you can gain access to the Free Trade Shipping app you must complete a job for Ron. Click the Set Up button to accept the job. */, 16);
			break;
		case 3:
			StringCopy(&Var0, "HAPP_HELP_4" /* GXT: The Overview page tracks your stock levels, Cargo types and performance statistics for the Business. Rival Smugglers operating in your session are also listed for you to keep tabs on. */, 16);
			break;
		case 4:
			StringCopy(&Var0, "HAPP_HELP_5" /* GXT: The Source page allows you to view the various types of Cargo being smuggled in and out of the state. Choose a type and Ron will source its location for you. */, 16);
			break;
		case 5:
			StringCopy(&Var0, "HAPP_HELP_6" /* GXT: Mission difficulty scales depending on the type of Cargo you have chosen to steal. Hire additional members to recover more Cargo and help guarantee success. */, 16);
			break;
		case 6:
			StringCopy(&Var0, "HAPP_HELP_7" /* GXT: The Sell page allows you to view and sell the Cargo types you've stockpiled. The value of each type is shown along with Bonuses for the amount you have collected of a type. */, 16);
			break;
		case 7:
			StringCopy(&Var0, "HAPP_HELP_8" /* GXT: Mission difficulty scales depending on the type of Cargo you have chosen to sell. Larger sales may also require multiple delivery vehicles. Hire additional members to help move and protect your Cargo when choosing to sell big. */, 16);
			break;
		case 8:
			StringCopy(&Var0, "HAPP_HELP_9" /* GXT: A collection of your Cargo has attracted an interested buyer willing to pay a Bonus for it. Buyers will pay Bonuses depending on the amount and type of Cargo you have stockpiled. */, 16);
			break;
	}
	return Var0;
}

int func_352(int iParam0)//Position - 0xC6FA
{
	bool bVar0;
	bVar0 = iParam0;
	if (!BitTest(uLocal_109, 9) && iParam0 != 2)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if ((!func_346(iParam0) && !BitTest(Global_1946102, bVar0)) && BitTest(uLocal_109, 11))
			{
				return 1;
			}
			break;
		case 1:
			if ((!func_346(iParam0) && !BitTest(Global_1946102, bVar0)) && BitTest(uLocal_109, 12))
			{
				return 1;
			}
			break;
		case 2:
			if ((!func_346(iParam0) && !BitTest(Global_1946102, bVar0)) && BitTest(uLocal_109, 13))
			{
				return 1;
			}
			break;
		case 3:
			if (((!func_346(iParam0) && !BitTest(Global_1946102, bVar0)) && BitTest(uLocal_109, 9)) && iLocal_119 == 0)
			{
				return 1;
			}
			break;
		case 4:
			if ((!func_346(iParam0) && !BitTest(Global_1946102, bVar0)) && iLocal_119 == 1)
			{
				return 1;
			}
			break;
		case 5:
			if (((!func_346(iParam0) && !BitTest(Global_1946102, bVar0)) && iLocal_119 == 1) && (BitTest(Global_1946102, 4) || func_346(4)))
			{
				return 1;
			}
			break;
		case 6:
			if ((!func_346(iParam0) && !BitTest(Global_1946102, bVar0)) && iLocal_119 == 2)
			{
				return 1;
			}
			break;
		case 7:
			if (((!func_346(iParam0) && !BitTest(Global_1946102, bVar0)) && iLocal_119 == 2) && (BitTest(Global_1946102, 6) || func_346(6)))
			{
				return 1;
			}
			break;
		case 8:
			if (((((!func_346(iParam0) && !BitTest(Global_1946102, bVar0)) && BitTest(uLocal_109, 14)) && iLocal_119 == 2) && (BitTest(Global_1946102, 6) || func_346(6))) && (BitTest(Global_1946102, 7) || func_346(7)))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_354()//Position - 0xC94A
{
	if (iLocal_111 != -1)
	{
		func_355(iLocal_111);
	}
}

void func_355(int iParam0)//Position - 0xC95E
{
	if (__LIB_0__::func_787(&uLocal_132, "SMGCAUD", func_376(iParam0), 8, 0, 0, 0))
	{
		iLocal_111 = -1;
	}
}

char* func_376(int iParam0)//Position - 0xD223
{
	switch (iParam0)
	{
		case 0:
			return "SMGC_LAPTUT1";
		case 1:
			return "SMGC_LAPTUT2";
		case 2:
			return "SMGC_LAPTUT3";
		default:
	}
	return "SMGC_LAPTUT1";
}

void func_377()//Position - 0xD25D
{
	bool bVar0;
	if (!BitTest(uLocal_109, 4) && !__LIB_0__::func_75())
	{
		if (iLocal_119 == 0)
		{
			if (!__LIB_0__::func_137(15963, -1))
			{
				bVar0 = true;
				iLocal_112 = 9000;
				iLocal_111 = 0;
				__LIB_0__::func_186(15963, 1, -1);
			}
		}
		else if (iLocal_119 == 2)
		{
			if (!__LIB_0__::func_137(15964, -1))
			{
				bVar0 = true;
				iLocal_112 = 9000;
				iLocal_111 = 2;
				__LIB_0__::func_186(15964, 1, -1);
			}
		}
		else if (iLocal_119 == 1)
		{
			if (!__LIB_0__::func_137(15965, -1))
			{
				bVar0 = true;
				iLocal_112 = 9000;
				iLocal_111 = 1;
				__LIB_0__::func_186(15965, 1, -1);
			}
		}
	}
	if (bVar0)
	{
		MISC::SET_BIT(&uLocal_109, 4);
	}
	else if (BitTest(uLocal_109, 4))
	{
		if (!__LIB_0__::func_864(&uLocal_124))
		{
			__LIB_0__::func_795(&uLocal_124, 0, 0);
		}
		else if (__LIB_0__::func_937(&uLocal_124, iLocal_112, 0))
		{
			MISC::CLEAR_BIT(&uLocal_109, 4);
			iLocal_112 = 0;
			__LIB_0__::func_794(&uLocal_124);
			if (func_378())
			{
				MISC::SET_BIT(&uLocal_109, 5);
			}
		}
	}
}

int func_378()//Position - 0xD344
{
	if ((__LIB_0__::func_137(15963, -1) && __LIB_0__::func_137(15964, -1)) && __LIB_0__::func_137(15965, -1))
	{
		return 1;
	}
	return 0;
}

void func_380()//Position - 0xD386
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_392(0, 1);
	}
	else if (__LIB_3__::func_558())
	{
		func_392(0, 1);
	}
	else if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		func_392(0, 1);
	}
}

void func_382()//Position - 0xD3CD
{
	func_380();
	iLocal_300 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("HANGAR_CARGO");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_300))
	{
		SYSTEM::WAIT(0);
	}
	__LIB_0__::func_366(1);
	__LIB_0__::func_671(1);
	__LIB_0__::func_866();
	HUD::THEFEED_PAUSE();
	__LIB_12__::func_914(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3) || Global_2815059.f_1917)
	{
		if (Global_2815059.f_1917)
		{
		}
		func_392(0, 1);
	}
	__LIB_12__::func_914(1);
	iLocal_118 = __LIB_7__::func_143();
	func_273();
	func_385();
	if (func_349())
	{
		MISC::SET_BIT(&uLocal_109, 8);
	}
	func_384();
	if (__LIB_13__::func_151())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
	}
	if (MISC::IS_PC_VERSION())
	{
		__LIB_0__::func_963(1, 1, 1, 1);
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("GTAO_Computer_Screen_Active_Scene"))
	{
		AUDIO::START_AUDIO_SCENE("GTAO_Computer_Screen_Active_Scene");
	}
}

void func_384()//Position - 0xD4C7
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 31)
	{
		iLocal_298[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_116[iVar0] = -1;
		iLocal_115[iVar0] = 0;
		iVar0++;
	}
}

void func_385()//Position - 0xD511
{
	if (func_378())
	{
		MISC::SET_BIT(&uLocal_109, 5);
	}
	else
	{
		MISC::SET_BIT(&uLocal_109, 4);
		iLocal_112 = 800;
		__LIB_1__::func_862(1);
		__LIB_0__::func_222(&uLocal_132, 2, 0, "NERVOUSRON", 0, 1);
	}
}

void func_392(int iParam0, bool bParam1)//Position - 0xD6CD
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_300);
	__LIB_12__::func_914(iParam0);
	__LIB_0__::func_671(0);
	__LIB_1__::func_534();
	AUDIO::SET_AUDIO_SCRIPT_CLEANUP_TIME(1000);
	if (bParam1)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Exit", "GTAO_SMG_Hangar_Computer_Sounds", true);
	}
	if (MISC::IS_PC_VERSION())
	{
		__LIB_0__::func_963(0, 1, 1, 1);
	}
	HUD::THEFEED_RESUME();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("GTAO_Computer_Screen_Active_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("GTAO_Computer_Screen_Active_Scene");
	}
	Global_1964706.f_5 = -1;
	SCRIPT::TERMINATE_THIS_THREAD();
}

