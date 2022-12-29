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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	struct<6> Local_91 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_92 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100[3] = { 0, 0, 0 };
	int iLocal_101[3] = { 0, 0, 0 };
	int iLocal_102[3] = { 0, 0, 0 };
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117[3] = { 0, 0, 0 };
	int iLocal_118 = 0;
	int iLocal_119[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_120[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = -1;
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
	var uLocal_213 = 1;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = -1;
	var uLocal_218 = -1;
	var uLocal_219 = 2;
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
	var uLocal_232 = 2;
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
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	var uLocal_303[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_68 = -1;
	iLocal_69 = -1;
	iLocal_70 = 21;
	iLocal_72 = 2;
	iLocal_78 = 1;
	iLocal_79 = 1;
	iLocal_82 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	iLocal_99 = MISC::GET_GAME_TIMER();
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (__LIB_25__::func_147())
		{
		}
		else
		{
			func_548();
			func_507();
			func_506();
			switch (iLocal_71)
			{
				case 0:
					func_504();
					break;
				case 1:
					func_194();
					func_189();
					func_25(&uLocal_124);
					func_22();
					func_10();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						func_2();
					}
					break;
				case 2:
					__LIB_0__::func_202();
					break;
				}
		}
	}
}

void func_2()//Position - 0x134
{
	if (!__LIB_0__::func_864(&uLocal_294))
	{
		__LIB_0__::func_795(&uLocal_294, 0, 0);
	}
	else if (__LIB_0__::func_937(&uLocal_294, 7200000, 0))
	{
		if (__LIB_27__::func_323(0))
		{
			if (__LIB_1__::func_831(PLAYER::PLAYER_ID()))
			{
				if (!__LIB_0__::func_629())
				{
					__LIB_0__::func_794(&uLocal_294);
					HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("SC_PLAY_REM" /* GXT: Enter a Rockstar Tournament for a chance to win numerous in-game prizes! Launch the Qualification Playlist from the Online Menu for a chance to compete. */);
					HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
				}
			}
		}
	}
}

void func_10()//Position - 0x282
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	struct<8> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	char* sVar9;
	struct<8> Var10;
	switch (iLocal_298)
	{
		case 0:
			if ((Global_110083 && !iLocal_296) && !Global_262145.f_10591 /* Tunable: DISABLE_SC_NUMBER_PLATE_ADD */)
			{
				iLocal_299 = -1;
				iVar0 = 0;
				while (iVar0 < Global_110071)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_110071[iVar0 /*4*/])))
					{
						iLocal_299 = iVar0;
					}
					iVar0++;
				}
				if (iLocal_299 != -1)
				{
					iLocal_298++;
				}
				else
				{
					Global_110083 = 0;
				}
			}
			if (((!Global_110083 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && __LIB_0__::func_137(3763, -1)) && (!iLocal_301 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_302)) > 25000))
			{
				uLocal_303[0] = __LIB_0__::func_253(1362, -1);
				uLocal_303[1] = __LIB_0__::func_253(1363, -1);
				uLocal_303[2] = __LIB_0__::func_253(1364, -1);
				uLocal_303[3] = __LIB_0__::func_253(1365, -1);
				uLocal_303[4] = __LIB_0__::func_253(1366, -1);
				uLocal_303[5] = __LIB_0__::func_253(1367, -1);
				uLocal_303[6] = __LIB_0__::func_253(1368, -1);
				uLocal_303[7] = __LIB_0__::func_253(1369, -1);
				func_19(&sVar1, &uLocal_303, -1);
				__LIB_15__::func_7(&sVar1);
				iLocal_301 = 0;
			}
			break;
		case 1:
			if (iLocal_300 == 0)
			{
				SOCIALCLUB::SC_LICENSEPLATE_ISVALID(&(Global_110071[iLocal_299 /*4*/]), &iLocal_300);
			}
			else if (!SOCIALCLUB::SC_LICENSEPLATE_GET_ISVALID_IS_PENDING(iLocal_300))
			{
				switch (SOCIALCLUB::SC_LICENSEPLATE_GET_ISVALID_STATUS(iLocal_300))
				{
					case 0:
						bVar4 = false;
						iVar2 = Global_109919;
						iVar3 = 0;
						while (iVar3 < iVar2)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_109919[iVar3 /*4*/])))
							{
								if (MISC::GET_HASH_KEY(&(Global_109919[iVar3 /*4*/])) == MISC::GET_HASH_KEY(&(Global_110071[iLocal_299 /*4*/])))
								{
									bVar4 = true;
									iVar3 = iVar2 + 1;
								}
							}
							iVar3++;
						}
						if (bVar4)
						{
							iLocal_298 = 3;
						}
						else
						{
							iLocal_298 = 2;
						}
						break;
					default:
						StringCopy(&(Global_110071[iLocal_299 /*4*/]), "", 16);
						if (SOCIALCLUB::SC_LICENSEPLATE_GET_ISVALID_STATUS(iLocal_300) == 2)
						{
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								__LIB_0__::func_186(3763, 0, -1);
							}
						}
						iLocal_298 = 0;
						break;
				}
				iLocal_300 = 0;
			}
			break;
		case 2:
			if (iLocal_300 == 0)
			{
				StringCopy(&Var5, "", 64);
				if (Global_110080[iLocal_299])
				{
					func_13(&Var5, "SPPlate", 0);
					func_13(&Var5, "MPPlate", 1);
				}
				else
				{
					func_13(&Var5, "SPPlate", 1);
				}
				SOCIALCLUB::SC_LICENSEPLATE_ADD(&(Global_110071[iLocal_299 /*4*/]), &Var5, &iLocal_300);
			}
			else if (!SOCIALCLUB::SC_LICENSEPLATE_GET_ADD_IS_PENDING(iLocal_300))
			{
				switch (SOCIALCLUB::SC_LICENSEPLATE_GET_ADD_STATUS(iLocal_300))
				{
					case 0:
						iLocal_296 = 1;
						iLocal_298 = 0;
						StringCopy(&(Global_110071[iLocal_299 /*4*/]), "", 16);
						iLocal_300 = 0;
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							__LIB_0__::func_186(3763, 0, -1);
						}
						break;
					default:
						iLocal_300 = 0;
						iLocal_298 = 0;
						StringCopy(&(Global_110071[iLocal_299 /*4*/]), "", 16);
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							iLocal_301 = 1;
							iLocal_302 = NETWORK::GET_NETWORK_TIME();
						}
						break;
				}
				iLocal_300 = 0;
			}
			break;
		case 3:
			if (SOCIALCLUB::SC_LICENSEPLATE_GET_CHECK_IS_VALID(iLocal_300))
			{
				if (!SOCIALCLUB::SC_LICENSEPLATE_GET_CHECK_IS_PENDING(iLocal_300))
				{
					iVar6 = -1;
					iVar7 = SOCIALCLUB::SC_LICENSEPLATE_GET_COUNT(iLocal_300);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						sVar9 = SOCIALCLUB::SC_LICENSEPLATE_GET_PLATE(iLocal_300, iVar8);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar9) && MISC::GET_HASH_KEY(sVar9) == MISC::GET_HASH_KEY(&(Global_110071[iLocal_299 /*4*/])))
						{
							iVar6 = iVar8;
							iVar8 = iVar7 + 1;
						}
						iVar8++;
					}
					if (iVar6 != -1)
					{
						StringCopy(&Var10, SOCIALCLUB::SC_LICENSEPLATE_GET_PLATE_DATA(iLocal_300, iVar6), 64);
						if (Global_110080[iLocal_299])
						{
							func_13(&Var10, "SPPlate", 0);
							func_13(&Var10, "MPPlate", 1);
						}
						else if (!func_11(&Var10, "MPPlate"))
						{
							func_13(&Var10, "SPPlate", 1);
						}
						SOCIALCLUB::SC_LICENSEPLATE_SET_PLATE_DATA(sVar9, sVar9, &Var10);
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							__LIB_0__::func_186(3763, 0, -1);
						}
					}
					else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_301 = 1;
						iLocal_302 = NETWORK::GET_NETWORK_TIME();
					}
					iLocal_296 = 1;
					iLocal_298 = 0;
					StringCopy(&(Global_110071[iLocal_299 /*4*/]), "", 16);
					iLocal_300 = 0;
				}
			}
			else
			{
				SOCIALCLUB::SC_LICENSEPLATE_CHECK_STRING("TEST", &iLocal_300);
			}
			break;
	}
}

int func_11(char* sParam0, char* sParam1)//Position - 0x68B
{
	struct<8> Var0[10];
	int iVar1;
	int iVar2;
	func_12(sParam0, &Var0);
	iVar2 = MISC::GET_HASH_KEY(sParam1);
	iVar1 = 0;
	while (iVar1 < Var0.f_0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var0[iVar1 /*8*/])))
		{
			if (MISC::GET_HASH_KEY(&(Var0[iVar1 /*8*/])) == iVar2)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_12(char* sParam0, var uParam1)//Position - 0x6DE
{
	int iVar0;
	int iVar1;
	char cVar2[32];
	bool bVar3;
	int iVar4;
	int iVar5;
	iVar0 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	}
	StringCopy(&cVar4, "", 32);
	bVar3 = iVar0 != false;
	iVar5 = 0;
	while (iVar5 < *uParam1)
	{
		StringCopy(uParam1[iVar5 /*8*/], "", 32);
		iVar5++;
	}
	while (bVar3)
	{
		StringCopy(&cVar2, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, iVar1, iVar1 + 1), 8);
		iVar1++;
		if (MISC::GET_HASH_KEY(&cVar2) == joaat(",") || iVar1 >= iVar0)
		{
			if (MISC::GET_HASH_KEY(&cVar2) != joaat(","))
			{
				StringConCat(&cVar4, &cVar2, 32);
			}
			if (iVar4 < *uParam1)
			{
				*(uParam1[iVar4 /*8*/]) = { cVar4 };
				iVar4++;
			}
			StringCopy(&cVar4, "", 32);
		}
		else
		{
			StringConCat(&cVar4, &cVar2, 32);
		}
		if (iVar1 >= iVar0)
		{
			bVar3 = false;
		}
	}
}

void func_13(char* sParam0, char* sParam1, bool bParam2)//Position - 0x7A9
{
	struct<8> Var0[10];
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	if (bParam2)
	{
	}
	func_12(sParam0, &Var0);
	StringCopy(sParam0, "", 64);
	iVar2 = MISC::GET_HASH_KEY(sParam1);
	iVar1 = 0;
	while (iVar1 < Var0.f_0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var0[iVar1 /*8*/])))
		{
			iVar3 = MISC::GET_HASH_KEY(&(Var0[iVar1 /*8*/]));
			if (iVar3 != iVar2)
			{
				if (bVar4)
				{
					StringConCat(sParam0, ",", 64);
					bVar4 = false;
				}
				StringConCat(sParam0, &(Var0[iVar1 /*8*/]), 64);
				bVar4 = true;
			}
		}
		iVar1++;
	}
	if (bParam2)
	{
		if (bVar4)
		{
			StringConCat(sParam0, ",", 64);
			bVar4 = false;
		}
		StringConCat(sParam0, sParam1, 64);
		bVar4 = true;
	}
}

void func_19(char* sParam0, var uParam1, int iParam2)//Position - 0xD48
{
	int iVar0;
	StringCopy(sParam0, "", 16);
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (iVar0 == iParam2 && SYSTEM::SIN(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER())) > 0f)
		{
			StringConCat(sParam0, " ", 16);
		}
		else
		{
			switch ((*uParam1)[iVar0])
			{
				case 0:
					StringConCat(sParam0, "A", 16);
					break;
				case 1:
					StringConCat(sParam0, "B", 16);
					break;
				case 2:
					StringConCat(sParam0, "C", 16);
					break;
				case 3:
					StringConCat(sParam0, "D", 16);
					break;
				case 4:
					StringConCat(sParam0, "E", 16);
					break;
				case 5:
					StringConCat(sParam0, "F", 16);
					break;
				case 6:
					StringConCat(sParam0, "G", 16);
					break;
				case 7:
					StringConCat(sParam0, "H", 16);
					break;
				case 8:
					StringConCat(sParam0, "I", 16);
					break;
				case 9:
					StringConCat(sParam0, "J", 16);
					break;
				case 10:
					StringConCat(sParam0, "K", 16);
					break;
				case 11:
					StringConCat(sParam0, "L", 16);
					break;
				case 12:
					StringConCat(sParam0, "M", 16);
					break;
				case 13:
					StringConCat(sParam0, "N", 16);
					break;
				case 14:
					StringConCat(sParam0, "O", 16);
					break;
				case 15:
					StringConCat(sParam0, "P", 16);
					break;
				case 16:
					StringConCat(sParam0, "Q", 16);
					break;
				case 17:
					StringConCat(sParam0, "R", 16);
					break;
				case 18:
					StringConCat(sParam0, "S", 16);
					break;
				case 19:
					StringConCat(sParam0, "T", 16);
					break;
				case 20:
					StringConCat(sParam0, "U", 16);
					break;
				case 21:
					StringConCat(sParam0, "V", 16);
					break;
				case 22:
					StringConCat(sParam0, "W", 16);
					break;
				case 23:
					StringConCat(sParam0, "X", 16);
					break;
				case 24:
					StringConCat(sParam0, "Y", 16);
					break;
				case 25:
					StringConCat(sParam0, "Z", 16);
					break;
				case 26:
					StringConCat(sParam0, "0", 16);
					break;
				case 27:
					StringConCat(sParam0, "1", 16);
					break;
				case 28:
					StringConCat(sParam0, "2", 16);
					break;
				case 29:
					StringConCat(sParam0, "3", 16);
					break;
				case 30:
					StringConCat(sParam0, "4", 16);
					break;
				case 31:
					StringConCat(sParam0, "5", 16);
					break;
				case 32:
					StringConCat(sParam0, "6", 16);
					break;
				case 33:
					StringConCat(sParam0, "7", 16);
					break;
				case 34:
					StringConCat(sParam0, "8", 16);
					break;
				case 35:
					StringConCat(sParam0, "9", 16);
					break;
				case 36:
					StringConCat(sParam0, " ", 16);
					break;
				default:
					StringConCat(sParam0, "", 16);
					break;
				}
		}
		iVar0++;
	}
}

void func_22()//Position - 0x102B
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	if (Global_110084 && !iLocal_296)
	{
		iLocal_296 = 1;
		Global_110084 = 0;
	}
	if ((((iLocal_296 && iLocal_298 == 0) && !bLocal_88) && !Global_262145.f_10590 /* Tunable: DISABLE_SC_NUMBER_PLATE_GET */) && iLocal_71 != 0)
	{
		iVar0 = 0;
		APP::APP_SET_APP("car");
		APP::APP_SET_BLOCK("appdata");
		iVar0 = (iVar0 + func_23("orderCount_sp0"));
		iVar0 = (iVar0 + func_23("orderCount_sp1"));
		iVar0 = (iVar0 + func_23("orderCount_sp2"));
		iVar0 = (iVar0 + func_23("orderCount_mp0"));
		iVar0 = (iVar0 + func_23("orderCount_mp1"));
		iVar0 = (iVar0 + func_23("orderCount_mp2"));
		iVar0 = (iVar0 + func_23("orderCount_mp3"));
		iVar0 = (iVar0 + func_23("orderCount_mp4"));
		APP::APP_CLOSE_BLOCK();
		APP::APP_CLOSE_APP();
		iVar0 = iVar0;
		if (SOCIALCLUB::SC_LICENSEPLATE_GET_CHECK_IS_VALID(iLocal_300))
		{
			if (!SOCIALCLUB::SC_LICENSEPLATE_GET_CHECK_IS_PENDING(iLocal_300))
			{
				iVar2 = Global_109919;
				iVar1 = 0;
				while (iVar1 < iVar2)
				{
					StringCopy(&(Global_109919[iVar1 /*4*/]), "", 16);
					Global_110040[iVar1] = 0;
					iVar1++;
				}
				iVar2 = SOCIALCLUB::SC_LICENSEPLATE_GET_COUNT(iLocal_300);
				Global_110085 = iVar2 >= Global_109919;
				iVar1 = 0;
				while (iVar1 < iVar2)
				{
					if (iVar1 < Global_109919)
					{
						StringCopy(&(Global_109919[iVar1 /*4*/]), SOCIALCLUB::SC_LICENSEPLATE_GET_PLATE(iLocal_300, iVar1), 16);
						StringCopy(&Var3, SOCIALCLUB::SC_LICENSEPLATE_GET_PLATE_DATA(iLocal_300, iVar1), 64);
						if ((func_11(&Var3, "MPPlate") || func_11(&Var3, "NoDelete")) || iVar1 == 0)
						{
							Global_110040[iVar1] = 1;
						}
					}
					iVar1++;
				}
				iLocal_300 = 0;
				iLocal_296 = 0;
				Global_110086 = 1;
			}
		}
		else
		{
			SOCIALCLUB::SC_LICENSEPLATE_CHECK_STRING("TEST", &iLocal_300);
		}
	}
}

int func_23(char* sParam0)//Position - 0x11D7
{
	return APP::APP_GET_INT(func_24(sParam0));
}

char* func_24(char* sParam0)//Position - 0x11E9
{
	int iVar0;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (MISC::GET_HASH_KEY("uid") == iVar0)
	{
		return "0";
	}
	if (MISC::GET_HASH_KEY("carModel") == iVar0)
	{
		return "1";
	}
	if (MISC::GET_HASH_KEY("playerSlot") == iVar0)
	{
		return "2";
	}
	if (MISC::GET_HASH_KEY("playerRank") == iVar0)
	{
		return "3";
	}
	if (MISC::GET_HASH_KEY("playerGangR") == iVar0)
	{
		return "4";
	}
	if (MISC::GET_HASH_KEY("playerGangG") == iVar0)
	{
		return "5";
	}
	if (MISC::GET_HASH_KEY("playerGangB") == iVar0)
	{
		return "6";
	}
	if (MISC::GET_HASH_KEY("carColour1") == iVar0)
	{
		return "7";
	}
	if (MISC::GET_HASH_KEY("carColour2") == iVar0)
	{
		return "8";
	}
	if (MISC::GET_HASH_KEY("carPlateBack") == iVar0)
	{
		return "9";
	}
	if (MISC::GET_HASH_KEY("windowTint") == iVar0)
	{
		return "10";
	}
	if (MISC::GET_HASH_KEY("bulletProofTyres") == iVar0)
	{
		return "11";
	}
	if (MISC::GET_HASH_KEY("carEngine") == iVar0)
	{
		return "12";
	}
	if (MISC::GET_HASH_KEY("carBrakes") == iVar0)
	{
		return "13";
	}
	if (MISC::GET_HASH_KEY("carExhaust") == iVar0)
	{
		return "14";
	}
	if (MISC::GET_HASH_KEY("carWheel") == iVar0)
	{
		return "15";
	}
	if (MISC::GET_HASH_KEY("carHorn1") == iVar0)
	{
		return "16";
	}
	if (MISC::GET_HASH_KEY("carHorn2") == iVar0)
	{
		return "17";
	}
	if (MISC::GET_HASH_KEY("carHorn3") == iVar0)
	{
		return "18";
	}
	if (MISC::GET_HASH_KEY("carHorn4") == iVar0)
	{
		return "19";
	}
	if (MISC::GET_HASH_KEY("carHorn5") == iVar0)
	{
		return "20";
	}
	if (MISC::GET_HASH_KEY("carHorn6") == iVar0)
	{
		return "21";
	}
	if (MISC::GET_HASH_KEY("carHorn7") == iVar0)
	{
		return "22";
	}
	if (MISC::GET_HASH_KEY("carHorn8") == iVar0)
	{
		return "23";
	}
	if (MISC::GET_HASH_KEY("carHorn9") == iVar0)
	{
		return "24";
	}
	if (MISC::GET_HASH_KEY("tyreSmoke") == iVar0)
	{
		return "25";
	}
	if (MISC::GET_HASH_KEY("tyreSmokeColourRed") == iVar0)
	{
		return "26";
	}
	if (MISC::GET_HASH_KEY("tyreSmokeColourGreen") == iVar0)
	{
		return "27";
	}
	if (MISC::GET_HASH_KEY("tyreSmokeColourBlue") == iVar0)
	{
		return "28";
	}
	if (MISC::GET_HASH_KEY("carHorn") == iVar0)
	{
		return "29";
	}
	if (MISC::GET_HASH_KEY("carArmour") == iVar0)
	{
		return "30";
	}
	if (MISC::GET_HASH_KEY("carTurbo") == iVar0)
	{
		return "31";
	}
	if (MISC::GET_HASH_KEY("carSuspension") == iVar0)
	{
		return "32";
	}
	if (MISC::GET_HASH_KEY("carXenonLights") == iVar0)
	{
		return "33";
	}
	if (MISC::GET_HASH_KEY("carWheelType") == iVar0)
	{
		return "34";
	}
	if (MISC::GET_HASH_KEY("carUnlocked") == iVar0)
	{
		return "35";
	}
	if (MISC::GET_HASH_KEY("carColour1Unlocked") == iVar0)
	{
		return "36";
	}
	if (MISC::GET_HASH_KEY("carColour2Unlocked") == iVar0)
	{
		return "37";
	}
	if (MISC::GET_HASH_KEY("tyreSmokeColourEnabled") == iVar0)
	{
		return "38";
	}
	if (MISC::GET_HASH_KEY("carEngineCount") == iVar0)
	{
		return "39";
	}
	if (MISC::GET_HASH_KEY("carBrakesCount") == iVar0)
	{
		return "40";
	}
	if (MISC::GET_HASH_KEY("carExhaustCount") == iVar0)
	{
		return "41";
	}
	if (MISC::GET_HASH_KEY("carWheelCount") == iVar0)
	{
		return "42";
	}
	if (MISC::GET_HASH_KEY("carHornCount") == iVar0)
	{
		return "43";
	}
	if (MISC::GET_HASH_KEY("carArmourCount") == iVar0)
	{
		return "44";
	}
	if (MISC::GET_HASH_KEY("carSuspensionCount") == iVar0)
	{
		return "45";
	}
	if (MISC::GET_HASH_KEY("carColoursUnlocked0") == iVar0)
	{
		return "46";
	}
	if (MISC::GET_HASH_KEY("carColoursUnlocked1") == iVar0)
	{
		return "47";
	}
	if (MISC::GET_HASH_KEY("carColoursUnlocked2") == iVar0)
	{
		return "48";
	}
	if (MISC::GET_HASH_KEY("carColoursUnlocked3") == iVar0)
	{
		return "49";
	}
	if (MISC::GET_HASH_KEY("carColoursUnlocked4") == iVar0)
	{
		return "50";
	}
	if (MISC::GET_HASH_KEY("carColoursUnlocked5") == iVar0)
	{
		return "51";
	}
	if (MISC::GET_HASH_KEY("carPriceModifier") == iVar0)
	{
		return "52";
	}
	if (MISC::GET_HASH_KEY("carType") == iVar0)
	{
		return "53";
	}
	if (MISC::GET_HASH_KEY("playerGang") == iVar0)
	{
		return "54";
	}
	if (MISC::GET_HASH_KEY("unlockBitset1") == iVar0)
	{
		return "55";
	}
	if (MISC::GET_HASH_KEY("unlockBitset2") == iVar0)
	{
		return "56";
	}
	if (MISC::GET_HASH_KEY("orderCount_sp0") == iVar0)
	{
		return "57";
	}
	if (MISC::GET_HASH_KEY("orderCount_sp1") == iVar0)
	{
		return "58";
	}
	if (MISC::GET_HASH_KEY("orderCount_sp2") == iVar0)
	{
		return "59";
	}
	if (MISC::GET_HASH_KEY("orderCount_mp0") == iVar0)
	{
		return "60";
	}
	if (MISC::GET_HASH_KEY("orderCount_mp1") == iVar0)
	{
		return "61";
	}
	if (MISC::GET_HASH_KEY("orderCount_mp2") == iVar0)
	{
		return "62";
	}
	if (MISC::GET_HASH_KEY("orderCount_mp3") == iVar0)
	{
		return "63";
	}
	if (MISC::GET_HASH_KEY("orderCount_mp4") == iVar0)
	{
		return "64";
	}
	if (MISC::GET_HASH_KEY("spDiscount") == iVar0)
	{
		return "65";
	}
	if (MISC::GET_HASH_KEY("mpDiscount") == iVar0)
	{
		return "66";
	}
	if (MISC::GET_HASH_KEY("carColour1Group") == iVar0)
	{
		return "67";
	}
	if (MISC::GET_HASH_KEY("carColour2Group") == iVar0)
	{
		return "68";
	}
	if (MISC::GET_HASH_KEY("unlockBitset3") == iVar0)
	{
		return "69";
	}
	if (MISC::GET_HASH_KEY("playerName") == iVar0)
	{
		return "70";
	}
	if (MISC::GET_HASH_KEY("newItemUnlocks") == iVar0)
	{
		return "72";
	}
	if (MISC::GET_HASH_KEY("playerNameSP") == iVar0)
	{
		return "73";
	}
	if (MISC::GET_HASH_KEY("playerNameMP") == iVar0)
	{
		return "74";
	}
	return sParam0;
}

void func_25(var uParam0)//Position - 0x17B1
{
	bool bVar0;
	bVar0 = false;
	if (!__LIB_0__::func_864(&(uParam0->f_10)))
	{
		__LIB_0__::func_795(&(uParam0->f_10), 0, 0);
	}
	else if (__LIB_0__::func_937(&(uParam0->f_10), func_188(), 0))
	{
		if (!uParam0->f_168)
		{
			bVar0 = true;
		}
	}
	func_52(uParam0, bVar0);
	if (__LIB_1__::func_85() && __LIB_1__::func_338())
	{
		func_26(uParam0);
	}
	if (bVar0)
	{
		if (uParam0->f_168)
		{
			__LIB_0__::func_794(&(uParam0->f_10));
			uParam0->f_168 = 0;
		}
	}
}

void func_26(var uParam0)//Position - 0x1827
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam0 = 0;
		return;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (uParam0->f_1 != __LIB_0__::getGlobal_1574918())
	{
		*uParam0 = 0;
	}
	switch (*uParam0)
	{
		case 0:
			if (uParam0->f_1 != __LIB_0__::getGlobal_1574918())
			{
				uParam0->f_2 = __LIB_1__::func_360(1080, -1, 0);
				uParam0->f_3 = __LIB_1__::func_360(150, -1, 0);
				uParam0->f_4 = __LIB_1__::func_360(151, -1, 0);
				uParam0->f_5 = __LIB_1__::func_360(113, -1, 0);
				uParam0->f_6 = __LIB_1__::func_677(11, -1);
				uParam0->f_7 = __LIB_1__::func_680(32, -1);
				uParam0->f_8 = __LIB_1__::func_680(0, -1);
				if (__LIB_12__::func_698(10))
				{
					MISC::SET_BIT(&(uParam0->f_9), 0);
				}
				if (__LIB_12__::func_699(10))
				{
					MISC::SET_BIT(&(uParam0->f_9), 1);
				}
				if (__LIB_12__::func_700(10))
				{
					MISC::SET_BIT(&(uParam0->f_9), 2);
				}
				if (__LIB_3__::func_575(10))
				{
					MISC::SET_BIT(&(uParam0->f_9), 3);
				}
				if (__LIB_12__::func_698(11))
				{
					MISC::SET_BIT(&(uParam0->f_9), 4);
				}
				if (__LIB_12__::func_699(11))
				{
					MISC::SET_BIT(&(uParam0->f_9), 5);
				}
				if (__LIB_12__::func_700(11))
				{
					MISC::SET_BIT(&(uParam0->f_9), 6);
				}
				if (__LIB_3__::func_575(11))
				{
					MISC::SET_BIT(&(uParam0->f_9), 7);
				}
				if (__LIB_12__::func_698(60))
				{
					MISC::SET_BIT(&(uParam0->f_9), 8);
				}
				if (__LIB_12__::func_699(60))
				{
					MISC::SET_BIT(&(uParam0->f_9), 9);
				}
				if (__LIB_12__::func_700(60))
				{
					MISC::SET_BIT(&(uParam0->f_9), 10);
				}
				if (__LIB_3__::func_575(60))
				{
					MISC::SET_BIT(&(uParam0->f_9), 11);
				}
				if (__LIB_37__::func_702(23))
				{
					MISC::SET_BIT(&(uParam0->f_9), 15);
				}
				if (__LIB_12__::func_698(61))
				{
					MISC::SET_BIT(&(uParam0->f_9), 16);
				}
				if (__LIB_12__::func_699(61))
				{
					MISC::SET_BIT(&(uParam0->f_9), 17);
				}
				if (__LIB_12__::func_700(61))
				{
					MISC::SET_BIT(&(uParam0->f_9), 18);
				}
				if (__LIB_3__::func_575(61))
				{
					MISC::SET_BIT(&(uParam0->f_9), 19);
				}
				if (__LIB_12__::func_698(62))
				{
					MISC::SET_BIT(&(uParam0->f_9), 20);
				}
				if (__LIB_12__::func_699(62))
				{
					MISC::SET_BIT(&(uParam0->f_9), 21);
				}
				if (__LIB_12__::func_700(62))
				{
					MISC::SET_BIT(&(uParam0->f_9), 22);
				}
				if (__LIB_3__::func_575(62))
				{
					MISC::SET_BIT(&(uParam0->f_9), 23);
				}
				if (__LIB_12__::func_698(63))
				{
					MISC::SET_BIT(&(uParam0->f_9), 24);
				}
				if (__LIB_12__::func_699(63))
				{
					MISC::SET_BIT(&(uParam0->f_9), 25);
				}
				if (__LIB_12__::func_700(63))
				{
					MISC::SET_BIT(&(uParam0->f_9), 26);
				}
				if (__LIB_3__::func_575(63))
				{
					MISC::SET_BIT(&(uParam0->f_9), 27);
				}
				uParam0->f_1 = __LIB_0__::getGlobal_1574918();
			}
			*uParam0++;
			break;
		case 1:
			if (!BitTest(uParam0->f_9, 0))
			{
				if (__LIB_12__::func_698(10))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_50_VEHICLES_BLOWNUP"), __LIB_1__::func_677(10, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 0);
				}
			}
			else if (!BitTest(uParam0->f_9, 1))
			{
				if (__LIB_12__::func_699(10))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_50_VEHICLES_BLOWNUP"), __LIB_1__::func_677(10, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 1);
				}
			}
			else if (!BitTest(uParam0->f_9, 2))
			{
				if (__LIB_12__::func_700(10))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_50_VEHICLES_BLOWNUP"), __LIB_1__::func_677(10, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 2);
				}
			}
			else if (!BitTest(uParam0->f_9, 3))
			{
				if (__LIB_3__::func_575(10))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_50_VEHICLES_BLOWNUP"), __LIB_1__::func_677(10, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 3);
				}
			}
			*uParam0++;
			break;
		case 2:
			if (!BitTest(uParam0->f_9, 4))
			{
				if (__LIB_12__::func_698(11))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_VEHICLES_JACKEDR"), __LIB_1__::func_677(11, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 4);
				}
			}
			else if (!BitTest(uParam0->f_9, 5))
			{
				if (__LIB_12__::func_699(11))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_VEHICLES_JACKEDR"), __LIB_1__::func_677(11, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 5);
				}
			}
			else if (!BitTest(uParam0->f_9, 6))
			{
				if (__LIB_12__::func_700(11))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_VEHICLES_JACKEDR"), __LIB_1__::func_677(11, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 6);
				}
			}
			else if (!BitTest(uParam0->f_9, 7))
			{
				if (__LIB_3__::func_575(11))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_VEHICLES_JACKEDR"), __LIB_1__::func_677(11, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 7);
				}
			}
			*uParam0++;
			break;
		case 3:
			if (!BitTest(uParam0->f_9, 8))
			{
				if (__LIB_12__::func_698(60))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMTIME5STARWANTED"), __LIB_1__::func_677(60, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 8);
				}
			}
			else if (!BitTest(uParam0->f_9, 9))
			{
				if (__LIB_12__::func_699(60))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMTIME5STARWANTED"), __LIB_1__::func_677(60, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 9);
				}
			}
			else if (!BitTest(uParam0->f_9, 10))
			{
				if (__LIB_12__::func_700(60))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMTIME5STARWANTED"), __LIB_1__::func_677(60, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 10);
				}
			}
			else if (!BitTest(uParam0->f_9, 11))
			{
				if (__LIB_3__::func_575(60))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMTIME5STARWANTED"), __LIB_1__::func_677(60, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 11);
				}
			}
			*uParam0++;
			break;
		case 4:
			if (!BitTest(uParam0->f_9, 15))
			{
				if (__LIB_37__::func_702(23))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_FLOAT(joaat("MP0_AWD_FMFURTHESTWHEELIE"), __LIB_1__::func_680(32, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 15);
				}
			}
			if (!BitTest(uParam0->f_9, 16))
			{
				if (__LIB_12__::func_698(61))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMDRIVEWITHOUTCRASH"), __LIB_1__::func_677(61, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 16);
				}
			}
			else if (!BitTest(uParam0->f_9, 17))
			{
				if (__LIB_12__::func_699(61))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMDRIVEWITHOUTCRASH"), __LIB_1__::func_677(61, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 17);
				}
			}
			else if (!BitTest(uParam0->f_9, 18))
			{
				if (__LIB_12__::func_700(61))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMDRIVEWITHOUTCRASH"), __LIB_1__::func_677(61, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 18);
				}
			}
			else if (!BitTest(uParam0->f_9, 19))
			{
				if (__LIB_3__::func_575(61))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMDRIVEWITHOUTCRASH"), __LIB_1__::func_677(61, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 19);
				}
			}
			*uParam0++;
			break;
		case 5:
			if (!BitTest(uParam0->f_9, 20))
			{
				if (__LIB_12__::func_698(62))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTFLIPSINONEVEHICLE"), __LIB_1__::func_677(62, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 20);
				}
			}
			else if (!BitTest(uParam0->f_9, 21))
			{
				if (__LIB_12__::func_699(62))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTFLIPSINONEVEHICLE"), __LIB_1__::func_677(62, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 21);
				}
			}
			else if (!BitTest(uParam0->f_9, 22))
			{
				if (__LIB_12__::func_700(62))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTFLIPSINONEVEHICLE"), __LIB_1__::func_677(62, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 22);
				}
			}
			else if (!BitTest(uParam0->f_9, 23))
			{
				if (__LIB_3__::func_575(62))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTFLIPSINONEVEHICLE"), __LIB_1__::func_677(62, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 23);
				}
			}
			*uParam0++;
			break;
		case 6:
			if (!BitTest(uParam0->f_9, 24))
			{
				if (__LIB_12__::func_698(63))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTSPINSINONEVEHICLE"), __LIB_1__::func_677(63, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 24);
				}
			}
			else if (!BitTest(uParam0->f_9, 25))
			{
				if (__LIB_12__::func_699(63))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTSPINSINONEVEHICLE"), __LIB_1__::func_677(63, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 25);
				}
			}
			else if (!BitTest(uParam0->f_9, 26))
			{
				if (__LIB_12__::func_700(63))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTSPINSINONEVEHICLE"), __LIB_1__::func_677(63, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 26);
				}
			}
			else if (!BitTest(uParam0->f_9, 27))
			{
				if (__LIB_3__::func_575(63))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTSPINSINONEVEHICLE"), __LIB_1__::func_677(63, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 27);
				}
			}
			*uParam0 = 0;
			break;
	}
}

void func_52(var uParam0, bool bParam1)//Position - 0x2684
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 201:
				func_187(iVar0);
				func_181(iVar0, uParam0, bParam1);
				break;
			case 219:
				func_179(iVar0, uParam0, bParam1);
				break;
			case 203:
				Global_2815059.f_5027 = 1;
				break;
			case 190:
				break;
			case 191:
				func_178(iVar0, uParam0, bParam1);
				break;
			case 192:
				break;
			case 212:
				func_177(iVar0, uParam0, bParam1);
				break;
			case 222:
				func_176(uParam0, bParam1);
				break;
		}
		iVar0++;
	}
	if (!Global_78319)
	{
		if (Global_113329 > 0)
		{
			func_166();
		}
	}
	func_53(uParam0, bParam1);
}

void func_53(var uParam0, bool bParam1)//Position - 0x2754
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	char* sVar4;
	char[] cVar5[8];
	struct<18> Var6;
	struct<37> Var7;
	struct<68> Var8;
	int iVar9;
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (__LIB_0__::func_629())
	{
		return;
	}
	iVar0 = SOCIALCLUB::SC_INBOX_GET_TOTAL_NUM_MESSAGES();
	iVar1 = 0;
	Var7.f_17 = 1;
	Var7.f_21 = -1;
	Var7.f_22 = -1;
	Var7.f_23 = 2;
	Var7.f_36 = 2;
	Var8.f_65 = -1;
	Var8.f_66 = -1;
	Var8.f_67 = 2;
	iVar9 = 0;
	switch (uParam0->f_169)
	{
		case 0:
			if (bParam1)
			{
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (!SOCIALCLUB::SC_INBOX_GET_MESSAGE_IS_READ_AT_INDEX(iVar1))
					{
						if (__LIB_1__::func_85() && __LIB_1__::func_338())
						{
							iVar2 = SOCIALCLUB::SC_INBOX_GET_MESSAGE_TYPE_AT_INDEX(iVar1);
							if (func_165(iVar2))
							{
								switch (iVar2)
								{
									case -877581966:
										if (MISC::GET_PROFILE_SETTING(802) == 1)
										{
											SOCIALCLUB::SC_INBOX_MESSAGE_DO_APPLY(iVar1);
											if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "msg", &uVar3))
											{
											}
											SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
										}
										break;
									case 1988401830:
										__LIB_39__::func_388(iVar1, 0);
										break;
									}
							}
						}
						else
						{
							SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
						}
					}
					iVar1++;
				}
			}
			uParam0->f_169++;
			break;
		case 1:
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				if (!SOCIALCLUB::SC_INBOX_GET_MESSAGE_IS_READ_AT_INDEX(iVar1))
				{
					iVar2 = SOCIALCLUB::SC_INBOX_GET_MESSAGE_TYPE_AT_INDEX(iVar1);
					switch (iVar2)
					{
						case -877581966:
							if (bParam1)
							{
								if (__LIB_1__::func_85() && __LIB_1__::func_338())
								{
									if (MISC::GET_PROFILE_SETTING(802) == 1)
									{
										SOCIALCLUB::SC_INBOX_MESSAGE_DO_APPLY(iVar1);
										if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "msg", &uVar3))
										{
										}
										SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
									}
								}
								else
								{
									SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
								}
							}
							break;
						case -302691102:
							break;
						case -1940449706:
							if (bParam1)
							{
								if (!uParam0->f_168)
								{
									if (__LIB_0__::func_438())
									{
										if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
										{
											if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 0, 1))
											{
												if (__LIB_1__::func_85() && __LIB_1__::func_338())
												{
													SOCIALCLUB::SC_INBOX_MESSAGE_DO_APPLY(iVar1);
													__LIB_2__::func_858(0, "XPT_MISSVER" /* GXT: RP for verified mission: ~1~. */, joaat("XPTYPE_SOCIALCLUB"), 475954354, 5000, 1, -1, 0);
													if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "msg", &uVar3))
													{
													}
													SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
												}
												else
												{
													SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
												}
												uParam0->f_168 = 1;
											}
										}
									}
								}
							}
							break;
						case 1894043873:
							if ((__LIB_1__::func_85() && __LIB_1__::func_338()) && Global_262145.f_25334 /* Tunable: 1042335322 */)
							{
								SOCIALCLUB::SC_INBOX_MESSAGE_DO_APPLY(iVar1);
								if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "msg", &uVar3))
								{
								}
								SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
							}
							else
							{
								SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
							}
							break;
						case 563149281:
							if (bParam1)
							{
								if (!uParam0->f_168)
								{
									if (__LIB_1__::func_85() && __LIB_1__::func_338())
									{
										if (((((((((((((((((__LIB_1__::func_19() == 0 && !__LIB_1__::func_16()) && !__LIB_39__::func_387()) && !__LIB_25__::func_143()) && !__LIB_18__::func_363()) && !__LIB_2__::func_250()) && !__LIB_39__::func_386()) && !__LIB_25__::func_142()) && !__LIB_19__::func_208()) && (__LIB_0__::func_438() && __LIB_1__::func_692())) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 != 8) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 != 9) && !__LIB_0__::func_936(PLAYER::PLAYER_ID())) && !__LIB_2__::func_290()) && !__LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 0)) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !__LIB_0__::func_626()) && !Global_1922025)
										{
											if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_UGCDATA(iVar1, &(uParam0->f_13)))
											{
												if (func_79(&Var7, &(uParam0->f_13), &Var8, &iVar9))
												{
													if (Var7.f_0)
													{
														if (uParam0->f_13.f_58)
														{
														}
														func_76(&(uParam0->f_13.f_10), uParam0->f_13.f_8, uParam0->f_13.f_55, uParam0->f_13.f_56, &(Var8.f_22));
														SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
														uParam0->f_168 = 1;
													}
													else
													{
														SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
													}
												}
											}
										}
									}
									else
									{
										SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
									}
								}
								else
								{
									SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
								}
							}
							break;
						case -89752472:
							if (bParam1)
							{
								if (!uParam0->f_168)
								{
									if (__LIB_1__::func_85() && __LIB_1__::func_338())
									{
										if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "mn", &cVar5))
										{
											if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "gtag", &sVar4))
											{
												func_75("SC_PUBLISH" /* GXT: ~a~ published the Job "~a~". */, &sVar4, &cVar5, 0, 0);
												SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
												uParam0->f_168 = 1;
											}
										}
									}
									else
									{
										SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
									}
								}
								else
								{
									SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
								}
							}
							break;
						case 1662919852:
							SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
							break;
						case joaat("bounty"):
							if (bParam1)
							{
								if (!uParam0->f_168)
								{
									SOCIALCLUB::SC_INBOX_GET_BOUNTY_DATA_AT_INDEX(iVar1, &Var6);
									if (BitTest(Var6.f_16, 2))
									{
										if (__LIB_1__::func_85() && __LIB_1__::func_338())
										{
											func_73("FM_TXT_BNTY7" /* GXT: ~a~ survived the $~1~ Bounty you placed on them. */, &Var6, Var6.f_17, 0, 0);
										}
										__LIB_43__::func_910("LESTER", "3", 12, "CT_AUD", "MPCT_BNTFL");
									}
									else if (BitTest(Var6.f_16, 0))
									{
										__LIB_43__::func_910("LESTER", "3", 12, "CT_AUD", "MPCT_BNTSuc");
										if (__LIB_1__::func_85() && __LIB_1__::func_338())
										{
											func_63("FM_TXT_BNTY5" /* GXT: The $~1~ Bounty on ~a~ has been claimed by ~a~. */, &Var6, &(Var6.f_8), Var6.f_17, 0);
										}
									}
									SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
									uParam0->f_168 = 1;
								}
								else
								{
									SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
								}
							}
							break;
						case -775483672:
							if (__LIB_1__::func_85() && __LIB_1__::func_338())
							{
								if (bParam1)
								{
									if (!uParam0->f_168)
									{
										__LIB_3__::func_452("SC_WON_TOURN" /* GXT: Congratulations! Your Tournament Winners T-shirt can be purchased in any Clothes Shop. */, 0);
									}
								}
							}
							__LIB_1__::func_348(151, 1, -1, 1);
							SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
							break;
						case 1988401830:
							__LIB_39__::func_388(iVar1, 0);
							break;
						default:
							if (bParam1)
							{
								if (MISC::GET_HASH_KEY(SOCIALCLUB::SC_INBOX_MESSAGE_GET_RAW_TYPE_AT_INDEX(iVar1)) != joaat("COUPON"))
								{
									SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
								}
							}
							break;
						}
				}
				iVar1++;
			}
			if (uParam0->f_168)
			{
				uParam0->f_169 = 0;
			}
			break;
	}
}

int func_63(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x2FCD
{
	int iVar0;
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_2__::func_49(sParam1));
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_2__::func_49(sParam2));
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	__LIB_2__::func_794(42, sParam0, 1, sParam1, iParam3, 0, 0, 0f, 1, sParam2, 0, 0);
	return iVar0;
}

int func_73(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x328D
{
	int iVar0;
	struct<16> Var1;
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_2__::func_49(sParam1));
	if (!iParam3 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	}
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	if (bParam4)
	{
		Var1 = { __LIB_2__::func_828(sParam1) };
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &Var1, 0);
	}
	else
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}
	__LIB_2__::func_794(29, sParam0, 1, sParam1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_75(char* sParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)//Position - 0x332B
{
	int iVar0;
	struct<16> Var1;
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_2__::func_49(sParam1));
	if (!iParam3 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam2);
	if (bParam4)
	{
		Var1 = { __LIB_2__::func_828(sParam1) };
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &Var1, 0);
	}
	else
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}
	__LIB_2__::func_794(31, sParam0, 1, sParam2, 0, 0, 0, 0f, 0, sParam1, 0, 0);
	return iVar0;
}

void func_76(char* sParam0, int iParam1, int iParam2, int iParam3, char* sParam4)//Position - 0x339E
{
	switch (iParam2)
	{
		case 3:
			func_78("SC_BTRSCR_SUR" /* GXT: ~a~ beat your best score in the Survival ~a~ with a score of ~1~. */, sParam0, sParam4, iParam1, 0, 0);
			break;
		case 1:
			switch (iParam3)
			{
				case 0:
				case 3:
					func_78("SC_BTRSCR_DMN" /* GXT: ~a~ beat your best score in the standard Deathmatch ~a~ with a score of ~1~. */, sParam0, sParam4, iParam1, 0, 0);
					break;
				case 1:
				case 4:
					func_78("SC_BTRSCR_DMT" /* GXT: ~a~ beat your best score in the Team Deathmatch ~a~ with a score of ~1~. */, sParam0, sParam4, iParam1, 0, 0);
					break;
				case 2:
					func_78("SC_BTRSCR_DMV" /* GXT: ~a~ beat your best score in the Vehicle Deathmatch ~a~ with a score of ~1~. */, sParam0, sParam4, iParam1, 0, 0);
					break;
			}
			break;
		case 2:
			switch (iParam3)
			{
				case 0:
					func_77("SC_BTRSCR_RACN" /* GXT: ~a~ beat your best lap time in the Non-Contact Race ~a~ with a time of ~a~. */, sParam0, iParam1, sParam4, 0);
					break;
				case 1:
					func_77("SC_BTRSCR_RACG" /* GXT: ~a~ beat your best lap time in the GTA Race ~a~ with a time of ~a~. */, sParam0, iParam1, sParam4, 0);
					break;
				case 2:
					func_77("SC_BTRSCR_RACR" /* GXT: ~a~ beat your best lap time in the Rally Race ~a~ with a time of ~a~. */, sParam0, iParam1, sParam4, 0);
					break;
				case 3:
					func_77("SC_BTRSCR_RACN" /* GXT: ~a~ beat your best lap time in the Non-Contact Race ~a~ with a time of ~a~. */, sParam0, iParam1, sParam4, 0);
					break;
			}
			break;
		case 8:
			func_77("SC_BTRSCR_BJP" /* GXT: ~a~ beat your best time in the Parachute Jump ~a~ with a time of ~a~. */, sParam0, iParam1, sParam4, 0);
			break;
		case 0:
			func_78("SC_BTRSCR_SUR" /* GXT: ~a~ beat your best score in the Survival ~a~ with a score of ~1~. */, sParam0, sParam4, iParam1, 0, 0);
			break;
	}
}

int func_77(char* sParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4)//Position - 0x34D8
{
	int iVar0;
	struct<16> Var1;
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_2__::func_49(sParam1));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 7);
	if (bParam4)
	{
		Var1 = { __LIB_2__::func_828(sParam1) };
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &Var1, 0);
	}
	else
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}
	__LIB_2__::func_794(18, sParam0, 1, sParam1, iParam2, 0, 0, 0f, 0, sParam3, 0, 0);
	return iVar0;
}

int func_78(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x3545
{
	int iVar0;
	struct<16> Var1;
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_2__::func_49(sParam1));
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	if (bParam5)
	{
		Var1 = { __LIB_2__::func_828(sParam1) };
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &Var1, 0);
	}
	else
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}
	__LIB_2__::func_794(30, sParam0, 1, sParam1, iParam3, 0, 0, 0f, 0, sParam2, 0, 0);
	return iVar0;
}

int func_79(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x35BF
{
	switch (uParam0->f_4)
	{
		case 0:
			*uParam0 = 0;
			if (__LIB_2__::func_290())
			{
				return 0;
			}
			__LIB_16__::func_731();
			__LIB_2__::func_289();
			if (__LIB_11__::func_730())
			{
				*uParam0 = 0;
				return 1;
			}
			else
			{
				NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(false);
			}
			__LIB_16__::func_657(uParam0, 1);
			break;
		case 1:
			if (NETWORK::UGC_GET_GET_BY_CONTENT_ID(sParam1, __LIB_2__::func_288(0)))
			{
				__LIB_16__::func_657(uParam0, 3);
			}
			break;
		case 3:
			if (NETWORK::UGC_HAS_GET_FINISHED())
			{
				uParam0->f_41 = NETWORK::UGC_GET_QUERY_RESULT();
				if (NETWORK::UGC_DID_GET_SUCCEED())
				{
				}
				else
				{
					__LIB_18__::func_603(uParam0, 1, 1);
					uParam0->f_41 = NETWORK::UGC_GET_QUERY_RESULT();
					*uParam0 = 0;
					return 1;
				}
				if (NETWORK::UGC_GET_CONTENT_NUM() > 0)
				{
					if (DATAFILE::DATAFILE_SELECT_UGC_DATA(0, 0))
					{
						__LIB_39__::func_390(sParam2, 0, iParam3);
						__LIB_18__::func_603(uParam0, 1, 1);
						*uParam0 = 1;
						return 1;
					}
				}
				else
				{
					__LIB_18__::func_603(uParam0, 1, 1);
					*uParam0 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_165(int iParam0)//Position - 0x5D8D
{
	if (iParam0 == -877581966)
	{
		return 1;
	}
	if (iParam0 == 1988401830)
	{
		return 1;
	}
	return 0;
}

void func_166()//Position - 0x5DB2
{
	int iVar0;
	Global_113327 = MISC::GET_GAME_TIMER();
	if ((Global_113327 - Global_113328) > Global_113133)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_113321[iVar0] == 1)
			{
				Global_113329 = (Global_113329 - 1);
				if (Global_113329 < 0)
				{
					Global_113329 = 0;
				}
				Global_113321[iVar0] = 0;
				func_167(Global_113134[iVar0 /*36*/], Global_113315[iVar0]);
				iVar0 = 5;
				Global_113328 = MISC::GET_GAME_TIMER();
			}
			iVar0++;
		}
	}
}

void func_167(struct<36> Param0, int iParam1)//Position - 0x5E32
{
	char cVar0[64];
	char cVar1[64];
	char cVar2[64];
	iParam1 = func_174(Param0.f_0);
	if (iParam1 != -1)
	{
		if (MISC::GET_PROFILE_SETTING(803) == 1)
		{
			if (__LIB_1__::func_85())
			{
				func_170(Param0, iParam1);
			}
		}
	}
	else
	{
		switch (Param0.f_0)
		{
			case joaat("TOTAL_PROGRESS_MADE"):
				if (MISC::GET_PROFILE_SETTING(803) == 1)
				{
					if (__LIB_1__::func_85())
					{
						HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_FEED_F100PC_COMP" /* GXT: ...completed GTAV~n~100 percent. */);
						StringCopy(&cVar0, "<C>", 64);
						StringConCat(&cVar0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
						StringConCat(&cVar0, &(Param0.f_1), 64);
						StringConCat(&cVar0, "...", 64);
						StringConCat(&cVar0, "</C>", 64);
						HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &cVar0, 0);
						Global_113328 = MISC::GET_GAME_TIMER();
					}
				}
				break;
			case joaat("SP_VEHICLE_MODELS_DRIVEN"):
				if (Param0.f_17 == 200)
				{
					Global_113327 = MISC::GET_GAME_TIMER();
					if ((Global_113327 - Global_113328) > Global_113133)
					{
						if (MISC::GET_PROFILE_SETTING(803) == 1)
						{
							if (__LIB_1__::func_85())
							{
								HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_FEED_DRIVEN_ALL_VEH" /* GXT: ...has driven all vehicles in San Andreas. */);
								StringCopy(&cVar1, "<C>", 64);
								StringConCat(&cVar1, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
								StringConCat(&cVar1, &(Param0.f_1), 64);
								StringConCat(&cVar1, "...", 64);
								StringConCat(&cVar1, "</C>", 64);
								HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &cVar1, 0);
								Global_113328 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else
					{
						func_169(Param0, -1);
					}
				}
				break;
			case joaat("NUM_RNDEVENTS_COMPLETED"):
				Global_113327 = MISC::GET_GAME_TIMER();
				if ((Global_113327 - Global_113328) > Global_113133)
				{
					if (MISC::GET_PROFILE_SETTING(803) == 1)
					{
						if (__LIB_1__::func_85())
						{
							HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_FEED_RNDEV_COMP" /* GXT: ...has completed all Random Events in San Andreas. */);
							StringCopy(&cVar2, "<C>", 64);
							StringConCat(&cVar2, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
							StringConCat(&cVar2, &(Param0.f_1), 64);
							StringConCat(&cVar2, "...", 64);
							StringConCat(&cVar2, "</C>", 64);
							HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &cVar2, 0);
							Global_113328 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else
				{
					func_169(Param0, -1);
				}
				break;
			case joaat("NUM_HIDDEN_PACKAGES_0"):
				if (Param0.f_17 == 50)
				{
					func_168(Param0, "CELL_FEED_LETTER_SCRAPS" /* GXT: ...has collected all Letter Scraps. */);
				}
				break;
			case joaat("NUM_HIDDEN_PACKAGES_1"):
				if (Param0.f_17 == 50)
				{
					func_168(Param0, "CELL_FEED_SPACESHIP_PARTS" /* GXT: ...has collected all Spaceship Parts. */);
				}
				break;
			case joaat("NUM_HIDDEN_PACKAGES_3"):
				if (Param0.f_17 == 50)
				{
					func_168(Param0, "CELL_FEED_SONAR_COLL" /* GXT: ...has found all Sonar Collectibles. */);
				}
				break;
			case joaat("SP0_DIST_DRIVING_CAR"):
				if (Param0.f_18 == 500f)
				{
					func_168(Param0, "CELL_FEED_DRIVEN_500" /* GXT: ...has driven more than 500 miles in San Andreas. */);
				}
				if (Param0.f_18 == 5000f)
				{
					func_168(Param0, "CELL_FEED_DRIVEN_5000" /* GXT: ...has driven more than 5000 miles in San Andreas. */);
				}
				if (Param0.f_18 == 50000f)
				{
					func_168(Param0, "CELL_FEED_DRIVEN_50000" /* GXT: ...has driven more than 50000 miles in San Andreas. */);
				}
				break;
			case joaat("SP0_DIST_DRIVING_PLANE"):
				if (Param0.f_18 == 500f)
				{
					func_168(Param0, "CELL_FEED_FLOWN_500" /* GXT: ...has flown more than 500 miles in San Andreas. */);
				}
				if (Param0.f_18 == 5000f)
				{
					func_168(Param0, "CELL_FEED_FLOWN_5000" /* GXT: ...has flown more than 5000 miles in San Andreas. */);
				}
				if (Param0.f_18 == 50000f)
				{
					func_168(Param0, "CELL_FEED_FLOWN_50000" /* GXT: ...has flown more than 50000 miles in San Andreas. */);
				}
				break;
			case joaat("SP0_DIST_RUNNING"):
				if (Param0.f_18 == 50f)
				{
					func_168(Param0, "CELL_FEED_RAN_50" /* GXT: ...has run more than 50 miles in San Andreas. */);
				}
				if (Param0.f_18 == 100f)
				{
					func_168(Param0, "CELL_FEED_RAN_100" /* GXT: ...has run more than 100 miles in San Andreas. */);
				}
				if (Param0.f_18 == 1000f)
				{
					func_168(Param0, "CELL_FEED_RAN_1000" /* GXT: ...has run more than 1000 miles in San Andreas. */);
				}
				break;
			case joaat("SP0_DIST_SWIMMING"):
				if (Param0.f_18 == 50f)
				{
					func_168(Param0, "CELL_FEED_SWAM_50" /* GXT: ...has swum more than 50 miles in San Andreas. */);
				}
				if (Param0.f_18 == 100f)
				{
					func_168(Param0, "CELL_FEED_SWAM_100" /* GXT: ...has swum more than 100 miles in San Andreas. */);
				}
				if (Param0.f_18 == 1000f)
				{
					func_168(Param0, "CELL_FEED_SWAM_1000" /* GXT: ...has swum more than 1000 miles in San Andreas. */);
				}
				break;
			case joaat("SP0_BUSTED"):
				if (Param0.f_17 == 10)
				{
					func_168(Param0, "CELL_FEED_BUSTED_10" /* GXT: ...has been busted 10 times. */);
				}
				if (Param0.f_17 == 25)
				{
					func_168(Param0, "CELL_FEED_BUSTED_25" /* GXT: ...has been busted 25 times. */);
				}
				if (Param0.f_17 == 50)
				{
					func_168(Param0, "CELL_FEED_BUSTED_50" /* GXT: ...has been busted 50 times. */);
				}
				if (Param0.f_17 == 100)
				{
					func_168(Param0, "CELL_FEED_BUSTED_100" /* GXT: ...has been busted 100 times. */);
				}
				if (Param0.f_17 == 250)
				{
					func_168(Param0, "CELL_FEED_BUSTED_250" /* GXT: ...has been busted 250 times. */);
				}
				break;
			case joaat("SP0_DEATHS"):
				if (Param0.f_17 == 10)
				{
					func_168(Param0, "CELL_FEED_WASTED_10" /* GXT: ...has been wasted 10 times. */);
				}
				if (Param0.f_17 == 25)
				{
					func_168(Param0, "CELL_FEED_WASTED_25" /* GXT: ...has been wasted 25 times. */);
				}
				if (Param0.f_17 == 50)
				{
					func_168(Param0, "CELL_FEED_WASTED_50" /* GXT: ...has been wasted 50 times. */);
				}
				if (Param0.f_17 == 100)
				{
					func_168(Param0, "CELL_FEED_WASTED_100" /* GXT: ...has been wasted 100 times. */);
				}
				if (Param0.f_17 == 250)
				{
					func_168(Param0, "CELL_FEED_WASTED_250" /* GXT: ...has been wasted 250 times. */);
				}
				break;
			case joaat("SP0_SHOTS"):
				if (Param0.f_17 == 1000000)
				{
					func_168(Param0, "CELL_FEED_SHOTS_1ML" /* GXT: ...has fired their 1 millionth round of ammunition. */);
				}
				if (Param0.f_17 == 2000000)
				{
					func_168(Param0, "CELL_FEED_SHOTS_2ML" /* GXT: ...has fired their 2 millionth round of ammunition. */);
				}
				if (Param0.f_17 == 3000000)
				{
					func_168(Param0, "CELL_FEED_SHOTS_3ML" /* GXT: ...has fired their 3 millionth round of ammunition. */);
				}
				if (Param0.f_17 == 4000000)
				{
					func_168(Param0, "CELL_FEED_SHOTS_4ML" /* GXT: ...has fired their 4 millionth round of ammunition. */);
				}
				if (Param0.f_17 == 5000000)
				{
					func_168(Param0, "CELL_FEED_SHOTS_5ML" /* GXT: ...has fired their 5 millionth round of ammunition. */);
				}
				break;
			case joaat("SP0_STARS_EVADED"):
				if (Param0.f_17 == 5)
				{
					func_168(Param0, "CELL_FEED_5STARS_WL" /* GXT: ...has just evaded a 5 star Wanted Level. */);
				}
				break;
			case joaat("SP0_CROUCHED"):
				if (Param0.f_17 == 10)
				{
					if (!BitTest(Global_113386.f_10194.f_3856, 0))
					{
						func_168(Param0, "CELL_FEED_WEB_CAR" /* GXT: ...has just purchased a car online. */);
						MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 0);
					}
				}
				if (Param0.f_17 == 20)
				{
					if (!BitTest(Global_113386.f_10194.f_3856, 1))
					{
						func_168(Param0, "CELL_FEED_WEB_RHINO" /* GXT: ...has just purchased a Rhino online. */);
						MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 1);
					}
				}
				if (Param0.f_17 == 30)
				{
					if (!BitTest(Global_113386.f_10194.f_3856, 2))
					{
						func_168(Param0, "CELL_FEED_WEB_BUZZARD" /* GXT: ...has just purchased a Buzzard online. */);
						MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 2);
					}
				}
				break;
			case joaat("SP0_CROUCHED_AND_SHOT"):
				if (Param0.f_17 == 10)
				{
					if (!BitTest(Global_113386.f_10194.f_3856, 3))
					{
						func_168(Param0, "CELL_FEED_STOCK_INV" /* GXT: ...has invested a large sum in the stock market. */);
						MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 3);
					}
				}
				if (Param0.f_17 == 20)
				{
					if (!BitTest(Global_113386.f_10194.f_3856, 4))
					{
						func_168(Param0, "CELL_FEED_STOCK_WIN" /* GXT: ...has had a big win playing the stock market. */);
						MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 4);
					}
				}
				if (Param0.f_17 == 30)
				{
					if (!BitTest(Global_113386.f_10194.f_3856, 5))
					{
						func_168(Param0, "CELL_FEED_STOCK_LOSS" /* GXT: ...has suffered a major loss playing the stock market. */);
						MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 5);
					}
				}
				break;
			case joaat("SP0_WATER_CANNON_KILLS"):
				if (Param0.f_17 == 25)
				{
					if (!BitTest(Global_113386.f_10194.f_3856, 10))
					{
						func_168(Param0, "CELL_FEED_STNJ_25" /* GXT: ...has completed 25 percent of the stunt jumps in San Andreas. */);
						MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 10);
					}
				}
				if (Param0.f_17 == 50)
				{
					if (!BitTest(Global_113386.f_10194.f_3856, 11))
					{
						func_168(Param0, "CELL_FEED_STNJ_50" /* GXT: ...has completed 50 percent of the stunt jumps in San Andreas. */);
						MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 11);
					}
				}
				if (Param0.f_17 == 75)
				{
					if (!BitTest(Global_113386.f_10194.f_3856, 12))
					{
						func_168(Param0, "CELL_FEED_STNJ_75" /* GXT: ...has completed 75 percent of the stunt jumps in San Andreas. */);
						MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 12);
					}
				}
				if (Param0.f_17 == 100)
				{
					if (!BitTest(Global_113386.f_10194.f_3856, 13))
					{
						func_168(Param0, "CELL_FEED_STNJ_100" /* GXT: ...has completed 100 percent of the stunt jumps in San Andreas. */);
						MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 13);
					}
				}
				break;
			case joaat("SP0_WATER_CANNON_DEATHS"):
				if (Param0.f_17 == 25)
				{
					if (!BitTest(Global_113386.f_10194.f_3856, 6))
					{
						func_168(Param0, "CELL_FEED_UTB_25" /* GXT: ...has completed 25 percent of Under The Bridges in San Andreas. */);
						MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 6);
					}
				}
				if (Param0.f_17 == 50)
				{
					if (!BitTest(Global_113386.f_10194.f_3856, 7))
					{
						func_168(Param0, "CELL_FEED_UTB_50" /* GXT: ...has completed 50 percent of Under The Bridges in San Andreas. */);
						MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 7);
					}
				}
				if (Param0.f_17 == 75)
				{
					if (!BitTest(Global_113386.f_10194.f_3856, 8))
					{
						func_168(Param0, "CELL_FEED_UTB_75" /* GXT: ...has completed 75 percent of Under The Bridges in San Andreas. */);
						MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 8);
					}
				}
				if (Param0.f_17 == 100)
				{
					if (!BitTest(Global_113386.f_10194.f_3856, 9))
					{
						func_168(Param0, "CELL_FEED_UTB_100" /* GXT: ...has completed 100 percent of Under The Bridges in San Andreas. */);
						MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 9);
					}
				}
				break;
			}
	}
}

void func_168(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, char* sParam35)//Position - 0x664D
{
	char cVar0[64];
	if (MISC::GET_PROFILE_SETTING(803) == 1)
	{
		if (__LIB_1__::func_85())
		{
			Global_113327 = MISC::GET_GAME_TIMER();
			if ((Global_113327 - Global_113328) > Global_113133)
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam35);
				StringCopy(&cVar0, "<C>", 64);
				StringConCat(&cVar0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar0, &(Param0.f_1), 64);
				StringConCat(&cVar0, "...", 64);
				StringConCat(&cVar0, "</C>", 64);
				HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &cVar0, 0);
				Global_113328 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_169(struct<36> Param0, int iParam1)//Position - 0x66C7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_113321[iVar0] == 0)
		{
			Global_113134[iVar0 /*36*/] = { Param0 };
			Global_113315[iVar0] = iParam1;
			Global_113321[iVar0] = 1;
			Global_113329++;
			if (Global_113329 > 5)
			{
				Global_113329 = 5;
			}
			iVar0 = 5;
		}
		iVar0++;
	}
}

void func_170(struct<36> Param0, int iParam1)//Position - 0x672A
{
	int iVar0;
	var uVar1;
	char cVar2[24];
	char cVar3[64];
	char cVar4[64];
	if (__LIB_1__::func_85())
	{
		MemCopy(&uVar1, {__LIB_0__::func_103(iParam1)}, 16);
		StringCopy(&cVar2, "NO_BLURB_REQ", 24);
		switch (iParam1)
		{
			case 53:
				StringCopy(&cVar2, "CELL_F_PROLOGUE" /* GXT: ...has fumbled a heist. */, 24);
				break;
			case 44:
				StringCopy(&cVar2, "CELL_F_LESTER1" /* GXT: ...has discovered social networking is dangerous. */, 24);
				break;
			case 20:
				StringCopy(&cVar2, "CELL_F_FAMILY4" /* GXT: ...has reunited with an old friend. */, 24);
				break;
			case 75:
				StringCopy(&cVar2, "CELL_F_DOCKH2B" /* GXT: ...has explored the depths and discovered a great treasure. */, 24);
				break;
			case 38:
				StringCopy(&cVar2, "CELL_F_FIB4" /* GXT: ...has performed a classic blitz play. */, 24);
				break;
			case 93:
				StringCopy(&cVar2, "CELL_F_RURALH2" /* GXT: ...was a big hit at Paleto Bay's Chicken Festival. */, 24);
				break;
			case 69:
				StringCopy(&cVar2, "CELL_F_AGENCYH3A" /* GXT: ...has just responded to a 911. */, 24);
				break;
			case 70:
				StringCopy(&cVar2, "CELL_F_AGENCYH3B" /* GXT: ...has dropped in on the Bureau. */, 24);
				break;
			case 47:
				StringCopy(&cVar2, "CELL_F_MICHAEL2" /* GXT: ...has discovered an abattoir where the meat certainly ain't fresh. */, 24);
				break;
			case 42:
				StringCopy(&cVar2, "CELL_F_FRANKLIN2" /* GXT: ...has saved a homeboy with a little help from his friends. */, 24);
				break;
			case 84:
				StringCopy(&cVar2, "CELL_F_FINALEH2A" /* GXT: ...has brought traffic to a standstill. */, 24);
				break;
			case 85:
				StringCopy(&cVar2, "CELL_F_FINALEH2B" /* GXT: ...has tunneled to victory. */, 24);
				break;
			case 24:
				StringCopy(&cVar2, "CELL_F_ENDCHOICE" /* GXT: ...has made an extreme choice and faced the consequences. */, 24);
				break;
			case 25:
				StringCopy(&cVar2, "CELL_F_ENDCHOICE" /* GXT: ...has made an extreme choice and faced the consequences. */, 24);
				break;
			case 27:
				StringCopy(&cVar2, "CELL_F_ENDCHOICE" /* GXT: ...has made an extreme choice and faced the consequences. */, 24);
				break;
		}
		Global_113327 = MISC::GET_GAME_TIMER();
		if ((Global_113327 - Global_113328) > Global_113133)
		{
			if (!MISC::ARE_STRINGS_EQUAL(&cVar2, "NO_BLURB_REQ"))
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&cVar2);
				StringCopy(&cVar3, "<C>", 64);
				StringConCat(&cVar3, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar3, &(Param0.f_1), 64);
				StringConCat(&cVar3, "...", 64);
				StringConCat(&cVar3, "</C>", 64);
				HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &cVar3, 0);
			}
			else if (__LIB_0__::func_178(iParam1))
			{
				iVar0 = func_171(iParam1);
				if (Param0.f_17 > iVar0)
				{
					HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_FEED_BEAT_MIS_SCORE" /* GXT: ...beat your high score in the Story mission "~a~". */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&uVar1);
					StringCopy(&cVar4, "<C>", 64);
					StringConCat(&cVar4, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
					StringConCat(&cVar4, &(Param0.f_1), 64);
					StringConCat(&cVar4, "...", 64);
					StringConCat(&cVar4, "</C>", 64);
					HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &cVar4, 0);
				}
			}
			Global_113328 = MISC::GET_GAME_TIMER();
		}
		else
		{
			func_169(Param0, iParam1);
		}
	}
}

var func_171(int iParam0)//Position - 0x6934
{
	return Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iParam0 /*6*/].f_4;
}

int func_174(int iParam0)//Position - 0x69DE
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 94)
	{
		iVar1 = iVar0;
		if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 6))
		{
			if (__LIB_37__::func_376(iVar1) == iParam0)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_176(var uParam0, bool bParam1)//Position - 0x6A84
{
	if (!__LIB_1__::func_85())
	{
		return;
	}
	if (!bParam1)
	{
		return;
	}
	if (MISC::GET_PROFILE_SETTING(803) == 1 && uParam0->f_168 == 0)
	{
		uParam0->f_168 = 1;
	}
	else
	{
		if (MISC::GET_PROFILE_SETTING(803) != 1)
		{
		}
		if (uParam0->f_168 == 1)
		{
		}
	}
}

void func_177(int iParam0, var uParam1, bool bParam2)//Position - 0x6AD2
{
	struct<2> Var0;
	if (!__LIB_1__::func_85() || !__LIB_1__::func_338())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		if (!bParam2)
		{
			return;
		}
		if (MISC::GET_PROFILE_SETTING(803) == 1 && uParam1->f_168 == 0)
		{
			if (Var0.f_1)
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CREWKICK_TA" /* GXT: You have been kicked from your active Crew. */);
				HUD::END_TEXT_COMMAND_THEFEED_POST_MPTICKER(false, true);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CREWKICK_TI" /* GXT: You have been kicked from an inactive Crew. */);
				HUD::END_TEXT_COMMAND_THEFEED_POST_MPTICKER(false, true);
			}
		}
	}
}

void func_178(int iParam0, var uParam1, bool bParam2)//Position - 0x6B48
{
	struct<2> Var0;
	if (!__LIB_1__::func_85() || !__LIB_1__::func_338())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		if (!bParam2)
		{
			return;
		}
		if (MISC::GET_PROFILE_SETTING(803) == 1 && uParam1->f_168 == 0)
		{
			if (Var0.f_1)
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CREWLEFT_TA" /* GXT: You have left your Crew. */);
				HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CREWLEFT_TA" /* GXT: You have left your Crew. */);
				HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
	}
}

void func_179(int iParam0, var uParam1, bool bParam2)//Position - 0x6BBE
{
	struct<2> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	if (!__LIB_1__::func_85() || !__LIB_1__::func_338())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var1, 11))
	{
		if (!bParam2)
		{
			return;
		}
		if (MISC::GET_PROFILE_SETTING(803) == 1 && uParam1->f_168 == 0)
		{
			iVar2 = NETWORK::NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT();
			iVar3 = 0;
			while (iVar3 < iVar2)
			{
				NETWORK::NETWORK_CLAN_GET_MEMBERSHIP_DESC(&Var0, iVar3);
				if (Var0.f_0 == Var1.f_0)
				{
					if (Var1.f_2)
					{
						StringCopy(&Var4, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HIGHER_RANK" /* GXT: a higher rank */), 32);
					}
					else
					{
						StringCopy(&Var4, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("LOWER_RANK" /* GXT: a lower rank */), 32);
					}
					if (MISC::ARE_STRINGS_EQUAL(&(Var1.f_3), "Rank4"))
					{
						StringCopy(&Var4, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CREW_RANK4" /* GXT: Muscle */), 32);
					}
					if (MISC::ARE_STRINGS_EQUAL(&(Var1.f_3), "Rank3"))
					{
						StringCopy(&Var4, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CREW_RANK3" /* GXT: Representative */), 32);
					}
					if (MISC::ARE_STRINGS_EQUAL(&(Var1.f_3), "Rank2"))
					{
						StringCopy(&Var4, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CREW_RANK2" /* GXT: Lieutenant */), 32);
					}
					if (MISC::ARE_STRINGS_EQUAL(&(Var1.f_3), "Rank1"))
					{
						StringCopy(&Var4, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CREW_RANK1" /* GXT: Commissioner */), 32);
					}
					if (Var1.f_2)
					{
						func_180("CREWPROM" /* GXT: You have been promoted to ~a~ status in the hierarchy of Crew ~a~. */, &Var4, &(Var0.f_1));
					}
					else
					{
						func_180("CREWDEMO" /* GXT: You have been demoted to ~a~ status in the hierarchy of Crew ~a~. */, &Var4, &(Var0.f_1));
					}
					uParam1->f_168 = 1;
				}
				iVar3++;
			}
		}
	}
}

int func_180(char* sParam0, char* sParam1, char* sParam2)//Position - 0x6CF1
{
	int iVar0;
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	__LIB_2__::func_794(33, sParam0, 1, sParam1, 0, 0, 0, 0f, 0, sParam2, 0, 0);
	return iVar0;
}

void func_181(int iParam0, var uParam1, bool bParam2)//Position - 0x6D2C
{
	int iVar0;
	struct<21> Var1;
	struct<37> Var2;
	struct<68> Var3;
	var uVar4;
	if (!__LIB_1__::func_85())
	{
		return;
	}
	if (!__LIB_0__::func_438())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var1, 36))
	{
		if (!bParam2)
		{
			return;
		}
		if (MISC::GET_PROFILE_SETTING(803) == 1 && uParam1->f_168 == 0)
		{
			switch (Var1.f_0)
			{
				case joaat("MP0_AWD_50_VEHICLES_BLOWNUP"):
				case joaat("MP1_AWD_50_VEHICLES_BLOWNUP"):
					iVar0 = __LIB_1__::func_677(10, -1);
					if (Var1.f_17 > iVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_186("SCFEED_13" /* GXT: ~a~ has blown up ~1~ vehicles in GTA Online. You've blown up ~1~. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						else
						{
							func_186("SCFEED_13b" /* GXT: ~a~ has blown up ~1~ vehicle in GTA Online. You've blown up ~1~. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						uParam1->f_168 = 1;
					}
					break;
				case joaat("MP0_AWD_VEHICLES_JACKEDR"):
				case joaat("MP1_AWD_VEHICLES_JACKEDR"):
					iVar0 = __LIB_1__::func_677(11, -1);
					if (Var1.f_17 > iVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_186("SCFEED_10" /* GXT: ~a~ has stolen ~1~ vehicles in GTA Online. You've stolen ~1~. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						else
						{
							func_186("SCFEED_10b" /* GXT: ~a~ has stolen ~1~ vehicle in GTA Online. You've stolen ~1~. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						uParam1->f_168 = 1;
					}
					break;
				case joaat("MP0_AWD_FMTIME5STARWANTED"):
				case joaat("MP1_AWD_FMTIME5STARWANTED"):
					iVar0 = __LIB_1__::func_677(60, -1);
					if (Var1.f_17 > iVar0)
					{
						func_186("SCFEED_4" /* GXT: ~a~ survived a 5 star Wanted Level for ~1~ minutes in GTA Online. Your best time is ~1~ minutes. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						uParam1->f_168 = 1;
					}
					break;
				case joaat("MP0_AWD_FMFURTHESTWHEELIE"):
				case joaat("MP1_AWD_FMFURTHESTWHEELIE"):
					iVar0 = SYSTEM::ROUND(__LIB_1__::func_680(32, -1));
					if (Var1.f_17 > iVar0)
					{
						if (__LIB_1__::func_592(PLAYER::PLAYER_ID()) == 133 && __LIB_39__::func_391(PLAYER::PLAYER_ID()) == 4)
						{
						}
						else
						{
							if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
							{
								func_186("SCFEED_5" /* GXT: ~a~ did a wheelie for ~1~m in GTA Online. Your furthest distance is ~1~m. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
							}
							else
							{
								func_186("SCFEED_5b" /* GXT: ~a~ did a wheelie for ~1~ft in GTA Online. Your furthest distance is ~1~ft. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
							}
							uParam1->f_168 = 1;
						}
					}
					break;
				case joaat("MP0_AWD_FMDRIVEWITHOUTCRASH"):
				case joaat("MP1_AWD_FMDRIVEWITHOUTCRASH"):
					iVar0 = __LIB_1__::func_677(61, -1);
					if (Var1.f_17 > iVar0)
					{
						func_186("SCFEED_6" /* GXT: ~a~ drove without crashing for ~1~ minutes in GTA Online. Your best time is ~1~ minutes. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						uParam1->f_168 = 1;
					}
					break;
				case joaat("MP0_AWD_FMMOSTFLIPSINONEVEHICLE"):
				case joaat("MP1_AWD_FMMOSTFLIPSINONEVEHICLE"):
					iVar0 = __LIB_1__::func_677(62, -1);
					if (Var1.f_17 > iVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_186("SCFEED_7" /* GXT: ~a~ did ~1~ flips in 1 jump in GTA Online. Your highest amount is ~1~. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						else
						{
							func_186("SCFEED_7b" /* GXT: ~a~ did ~1~ flip in 1 jump in GTA Online. Your highest amount is ~1~. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						uParam1->f_168 = 1;
					}
					break;
				case joaat("MP0_AWD_FMMOSTSPINSINONEVEHICLE"):
				case joaat("MP1_AWD_FMMOSTSPINSINONEVEHICLE"):
					iVar0 = __LIB_1__::func_677(63, -1);
					if (Var1.f_17 > iVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_186("SCFEED_8" /* GXT: ~a~ did ~1~ spins in 1 jump in GTA Online. Your highest amount is ~1~. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						else
						{
							func_186("SCFEED_8b" /* GXT: ~a~ did ~1~ spin in 1 jump in GTA Online. Your highest amount is ~1~. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						uParam1->f_168 = 1;
					}
					break;
				case joaat("MP0_CHAR_FM_RACE_RECORD_TIMES"):
				case joaat("MP1_CHAR_FM_RACE_RECORD_TIMES"):
					if (((((((((((((((__LIB_1__::func_19() == 0 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !__LIB_1__::func_16()) && !__LIB_39__::func_387()) && !__LIB_25__::func_143()) && !__LIB_18__::func_363()) && !__LIB_2__::func_250()) && !__LIB_39__::func_386()) && !__LIB_25__::func_142()) && !__LIB_19__::func_208()) && (__LIB_0__::func_438() && __LIB_1__::func_692())) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 != 8) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 != 9) && !__LIB_0__::func_936(PLAYER::PLAYER_ID())) && !__LIB_2__::func_290()) && !__LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 0))
					{
						Var2.f_17 = 1;
						Var2.f_21 = -1;
						Var2.f_22 = -1;
						Var2.f_23 = 2;
						Var2.f_36 = 2;
						Var3.f_65 = -1;
						Var3.f_66 = -1;
						Var3.f_67 = 2;
						if (func_79(&Var2, &(Var1.f_20), &Var3, &uVar4))
						{
							if (Var2.f_0)
							{
								func_183("SCFEED_11" /* GXT: ~a~ set a Race World Record on ~a~ with the time: ~a~. */, &(Var1.f_1), Var1.f_17, &(Var3.f_22), 1, 2f);
								if (!__LIB_0__::func_157(0))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "OTHER_TEXT", "HUD_AWARDS", true);
								}
								uParam1->f_168 = 1;
							}
						}
					}
					break;
				}
		}
	}
}

int func_183(char* sParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4, float fParam5)//Position - 0x715D
{
	int iVar0;
	struct<16> Var1;
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_2__::func_49(sParam1));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 2055);
	if (bParam4)
	{
		Var1 = { __LIB_2__::func_828(sParam1) };
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_TU("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &Var1, "", fParam5);
	}
	else
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}
	__LIB_2__::func_794(18, sParam0, 1, sParam1, iParam2, 0, 0, 0f, 0, sParam3, 0, 0);
	return iVar0;
}

int func_186(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x7210
{
	int iVar0;
	struct<16> Var1;
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_2__::func_49(sParam1));
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	if (bParam5)
	{
		Var1 = { __LIB_2__::func_828(sParam1) };
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &Var1, 0);
	}
	else
	{
		HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}
	__LIB_2__::func_794(40, sParam0, 1, sParam1, iParam2, iParam3, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_187(int iParam0)//Position - 0x7297
{
	struct<36> Var0;
	int iVar1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 36))
	{
		func_167(Var0, iVar1);
	}
}

int func_188()//Position - 0x72BB
{
	switch (MISC::GET_PROFILE_SETTING(807))
	{
		case 0:
			return 0;
		case 1:
			return 60000;
		case 2:
			return 120000;
		case 3:
			return 180000;
		case 4:
			return 240000;
		case 5:
			return 300000;
		case 6:
			return 600000;
		case 7:
			return 900000;
		case 8:
			return 1800000;
		case 9:
			return 3600000;
		default:
	}
	return 300000;
}

void func_189()//Position - 0x7352
{
	if (!iLocal_112)
	{
		if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(iLocal_110))
		{
			if (!SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(iLocal_110))
			{
				if (SOCIALCLUB::SC_PROFANITY_GET_STRING_PASSED(iLocal_110))
				{
					iLocal_110 = 0;
					iLocal_112 = 1;
				}
				else
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_56 = { __LIB_8__::func_895() };
					}
					else
					{
						Global_113386.f_20118.f_267 = { __LIB_8__::func_895() };
					}
					iLocal_110 = 0;
					iLocal_112 = 1;
				}
			}
		}
		else if (__LIB_17__::func_246(&uLocal_106, &uLocal_111))
		{
			SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&uLocal_106, &iLocal_110);
		}
		else
		{
			iLocal_110 = 0;
			iLocal_112 = 1;
		}
	}
}

void func_194()//Position - 0x7670
{
	bool bVar0;
	bool bVar1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_362(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (iLocal_89 == 0)
	{
		func_502();
		if (bLocal_85)
		{
			return;
		}
		func_501();
	}
	func_469();
	if (bLocal_88)
	{
		return;
	}
	func_461();
	func_458();
	bVar0 = iLocal_87;
	bVar1 = ((iLocal_73 == 0 && !bLocal_88) && !bLocal_85);
	if (iLocal_87)
	{
		iLocal_87 = 0;
	}
	else
	{
		iLocal_73 = (iLocal_73 + 1 % Global_262145.f_32526 /* Tunable: STAGGERED_MAX_FRAMES_APP_ORDERS */);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iLocal_73 < 20)
		{
			if (!bVar0)
			{
				iLocal_74++;
				if (iLocal_74 >= 10)
				{
					iLocal_74 = 0;
					bLocal_77 = !bLocal_77;
				}
			}
			iLocal_76 = (Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_63[iLocal_74] - 1);
			if (bLocal_77)
			{
				if (func_457(iLocal_76, &iLocal_75))
				{
					func_201(3);
				}
			}
			else if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_63[iLocal_74] == 0)
			{
				func_200(iLocal_74);
			}
		}
	}
	else
	{
		switch (iLocal_73)
		{
			case 0:
				func_201(0);
				break;
			case 1:
				func_201(1);
				break;
			case 2:
				func_201(2);
				break;
			case 3:
				func_195();
				break;
			}
	}
	if (bVar1)
	{
		if (iLocal_95)
		{
			if (SYSTEM::TIMERA() > 5000)
			{
				APP::APP_SET_APP("car");
				APP::APP_SAVE_DATA();
				APP::APP_CLOSE_APP();
				iLocal_95 = 0;
			}
		}
	}
}

void func_195()//Position - 0x77CA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (__LIB_13__::func_94())
	{
		return;
	}
	if (Global_32105)
	{
		if (!iLocal_93)
		{
			APP::APP_SET_APP("dog");
			APP::APP_SET_BLOCK("saveData");
			func_198("chopKilled", MISC::GET_RANDOM_INT_IN_RANGE(0, 65535));
			APP::APP_SAVE_DATA();
			APP::APP_CLOSE_BLOCK();
			APP::APP_CLOSE_APP();
			iLocal_93 = 1;
		}
	}
	else
	{
		iLocal_93 = 0;
	}
	APP::APP_SET_APP("dog");
	APP::APP_SET_BLOCK("saveData");
	if (APP::APP_DATA_VALID())
	{
		iVar0 = APP::APP_GET_INT("happinessTimer");
		if (iVar0 == 0)
		{
			iVar0 = 450;
		}
		iVar1 = APP::APP_GET_INT("happinessDecrement");
		if (iVar1 == 0)
		{
			iVar1 = 1;
		}
		iVar2 = APP::APP_GET_INT("time_stamp");
		iVar3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iVar3 == 0)
		{
			iVar3 = iVar2;
		}
		iVar4 = APP::APP_GET_INT("happiness");
		iVar5 = (iVar3 - iVar2);
		iVar6 = ((iVar5 / iVar0) * iVar1);
		iVar7 = __LIB_0__::func_340((iVar4 - iVar6), 0, 100);
		Global_113386.f_20118.f_254 = SYSTEM::TO_FLOAT(iVar7);
		Global_113386.f_20118.f_254.f_1 = APP::APP_GET_FLOAT("cleanliness");
		Global_113386.f_20118.f_254.f_2 = APP::APP_GET_FLOAT("hunger");
		Global_113386.f_20118.f_254.f_3 = func_23("trainingLevel");
		Global_113386.f_20118.f_254.f_4 = func_23("collar");
		Global_113386.f_20118.f_254.f_5 = 1;
		if (Global_113386.f_20118.f_254 > 50f)
		{
		}
		if (Global_113386.f_20118.f_254.f_2 > 50f)
		{
		}
		Global_113386.f_20118.f_263 = func_23("usedApp") != 0;
		if (STATS::STAT_GET_BOOL(joaat("CHOP_APP_USED"), &bVar8, -1))
		{
			if (!bVar8)
			{
				if (Global_113386.f_20118.f_263)
				{
					STATS::STAT_SET_BOOL(joaat("CHOP_APP_USED"), true, true);
				}
			}
		}
	}
	APP::APP_CLOSE_BLOCK();
	APP::APP_CLOSE_APP();
	if (Global_113386.f_20118.f_264)
	{
		APP::APP_SET_APP("dog");
		APP::APP_SET_BLOCK("saveData");
		if (__LIB_0__::func_426(6))
		{
			func_198("chopSafeHouse", 1);
		}
		else
		{
			func_198("chopSafeHouse", 0);
		}
		APP::APP_SAVE_DATA();
		APP::APP_CLOSE_BLOCK();
		APP::APP_CLOSE_APP();
		Global_113386.f_20118.f_264 = 0;
	}
}

void func_198(char* sParam0, int iParam1)//Position - 0x7A0C
{
	APP::APP_SET_INT(func_24(sParam0), iParam1);
}

void func_200(int iParam0)//Position - 0x7A35
{
	char cVar0[16];
	if (!Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_41[iParam0])
	{
		APP::APP_SET_APP("car");
		StringCopy(&cVar0, "multiplayer", 16);
		StringIntConCat(&cVar0, __LIB_0__::getGlobal_1574918(), 16);
		APP::APP_SET_BLOCK(&cVar0);
		StringCopy(&cVar0, "vehicle", 16);
		StringIntConCat(&cVar0, iParam0, 16);
		APP::APP_SET_BLOCK(&cVar0);
		func_198("carUnlocked", 0);
		APP::APP_CLOSE_BLOCK();
		iLocal_95 = 1;
		SYSTEM::SETTIMERA(0);
		APP::APP_CLOSE_BLOCK();
		APP::APP_CLOSE_APP();
		Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_41[iParam0] = 1;
	}
}

void func_201(int iParam0)//Position - 0x7AB8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	struct<6> Var8;
	char cVar9[24];
	struct<6> Var10;
	struct<43> Var11;
	struct<41> Var12;
	int iVar13;
	int iVar14;
	struct<82> Var15;
	int iVar16;
	int iVar17;
	int iVar18;
	char cVar19[16];
	int iVar20;
	bool bVar21;
	int iVar22;
	int iVar23;
	int iVar24[6];
	int iVar25;
	bool bVar26;
	bool bVar27;
	struct<2> Var28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	var uVar34;
	int iVar35;
	int iVar36;
	Var11.f_33 = 5;
	if (iParam0 == 0)
	{
		iVar2 = 0;
		StringCopy(&Var8, "singleplayer0", 24);
		StringCopy(&cVar9, "sp0_order", 24);
		Var11 = { Global_113386.f_20118[0 /*43*/] };
		Var12 = { Global_113386.f_20118.f_130[0 /*41*/] };
	}
	else if (iParam0 == 1)
	{
		iVar2 = 1;
		StringCopy(&Var8, "singleplayer1", 24);
		StringCopy(&cVar9, "sp1_order", 24);
		Var11 = { Global_113386.f_20118[1 /*43*/] };
		Var12 = { Global_113386.f_20118.f_130[1 /*41*/] };
	}
	else if (iParam0 == 2)
	{
		iVar2 = 2;
		StringCopy(&Var8, "singleplayer2", 24);
		StringCopy(&cVar9, "sp2_order", 24);
		Var11 = { Global_113386.f_20118[2 /*43*/] };
		Var12 = { Global_113386.f_20118.f_130[2 /*41*/] };
	}
	else if (iParam0 == 3)
	{
		iVar3 = __LIB_0__::getGlobal_1574918();
		iVar2 = (3 + iVar3);
		StringCopy(&Var8, "multiplayer", 24);
		StringIntConCat(&Var8, iVar3, 24);
		StringCopy(&cVar9, "mp", 24);
		StringIntConCat(&cVar9, iVar3, 24);
		StringConCat(&cVar9, "_order", 24);
		if (func_456(iLocal_75, &iVar13))
		{
			func_455(&Var11, iVar13);
		}
		else
		{
			func_455(&Var11, 0);
		}
		Var12 = { Global_2359296[__LIB_0__::func_155() /*5567*/].f_593 };
		StringCopy(&Var10, "vehicle", 24);
		StringIntConCat(&Var10, iLocal_74, 24);
	}
	else
	{
		return;
	}
	if (iLocal_94 || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iLocal_80))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_94 = 0;
		}
		else
		{
			APP::APP_SET_APP("car");
			APP::APP_SET_BLOCK("singleplayer0");
			func_198("carUnlocked", 0);
			APP::APP_CLOSE_BLOCK();
			APP::APP_SET_BLOCK("singleplayer2");
			func_198("carUnlocked", 0);
			APP::APP_CLOSE_BLOCK();
			APP::APP_CLOSE_APP();
			if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("appdata");
				func_198("playerName", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
			}
			iVar14 = 0;
			while (iVar14 < Global_113386.f_20118)
			{
				if (!Global_113386.f_20118[iVar14 /*43*/].f_41)
				{
					Global_113386.f_20118[iVar14 /*43*/].f_40 = 0;
					if (Global_113386.f_20118[iVar14 /*43*/] != 0 && Global_113386.f_20118[iVar14 /*43*/].f_29 != 0)
					{
						Global_113386.f_20118[iVar14 /*43*/].f_40 = 1;
					}
					else
					{
						Global_113386.f_20118.f_273[iVar14] = 0;
					}
				}
				iVar14++;
			}
			iLocal_94 = 0;
		}
		if (iParam0 >= 2)
		{
			iLocal_94 = 0;
			iLocal_80 = 0;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!Global_113386.f_20118.f_273[iParam0])
		{
			if (((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(2)) || !__LIB_0__::func_178(0))
			{
				if ((iParam0 == 1 || (((iParam0 == 0 && __LIB_0__::func_178(0)) && __LIB_37__::func_104(iParam0)) && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[135])) || (((iParam0 == 2 && __LIB_0__::func_178(0)) && __LIB_37__::func_104(iParam0)) && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[136]))
				{
					APP::APP_SET_APP("car");
					APP::APP_SET_BLOCK(&Var8);
					APP::APP_CLEAR_BLOCK();
					Var15.f_11 = 12;
					Var15.f_31 = 49;
					Var15.f_81 = 2;
					__LIB_0__::func_120(iParam0, &Var15, 1);
					__LIB_14__::func_908(Var15.f_5, Var15.f_7, -1, 1, &iVar16);
					__LIB_14__::func_908(Var15.f_6, -1, -1, 0, &iVar17);
					func_198("carUnlocked", 1);
					func_198("carModel", Var15.f_0);
					func_198("tyreSmokeColourEnabled", 1);
					func_198("tyreSmokeColourRed", 255);
					func_198("tyreSmokeColourGreen", 255);
					func_198("tyreSmokeColourBlue", 255);
					if (Var15.f_0 == joaat("buffalo2"))
					{
						func_450("carType", "sport");
						func_198("carEngineCount", 5);
						func_198("carBrakesCount", 4);
						func_198("carExhaustCount", 6);
						func_198("carWheelCount", 26);
						func_198("carHornCount", 5);
						func_198("carArmourCount", 6);
						func_198("carSuspensionCount", 5);
						func_198("carHorn1", 1748384362);
						func_198("carHorn2", 1766676233);
						func_198("carHorn3", -1390777827);
						func_198("carHorn4", -1751761149);
						func_198("carHorn5", 1732399718);
						func_449("carPriceModifier", 3.25f);
						func_198("carColour1", iVar16);
						func_198("carColour2", iVar17);
						func_198("carColour1Unlocked", 1);
						func_198("carColour2Unlocked", 1);
					}
					else if (Var15.f_0 == joaat("bodhi2"))
					{
						func_450("carType", "car");
						func_198("carEngineCount", 5);
						func_198("carBrakesCount", 4);
						func_198("carExhaustCount", 1);
						func_198("carWheelCount", 26);
						func_198("carHornCount", 5);
						func_198("carArmourCount", 6);
						func_198("carSuspensionCount", 1);
						func_198("carHorn1", -1512308941);
						func_198("carHorn2", 1766676233);
						func_198("carHorn3", -1390777827);
						func_198("carHorn4", -1751761149);
						func_198("carHorn5", 1732399718);
						func_449("carPriceModifier", 1f);
						func_198("carColour1", iVar16);
						func_198("carColour1Unlocked", 1);
					}
					else if (Var15.f_0 == joaat("tailgater"))
					{
						func_450("carType", "car");
						func_198("carEngineCount", 5);
						func_198("carBrakesCount", 5);
						func_198("carExhaustCount", 5);
						func_198("carWheelCount", 26);
						func_198("carHornCount", 5);
						func_198("carArmourCount", 6);
						func_198("carSuspensionCount", 5);
						func_198("carHorn1", 36213993);
						func_198("carHorn2", 1766676233);
						func_198("carHorn3", -1390777827);
						func_198("carHorn4", -1751761149);
						func_198("carHorn5", 1732399718);
						func_449("carPriceModifier", 1f);
						func_198("carColour1", iVar16);
						func_198("carColour2", iVar17);
						func_198("carColour1Unlocked", 1);
						func_198("carColour2Unlocked", 1);
					}
					APP::APP_CLOSE_BLOCK();
					Local_91 = { Var8 };
					Local_92 = { Var10 };
					iLocal_90 = Var15.f_0;
					bLocal_88 = true;
					iLocal_95 = 1;
					SYSTEM::SETTIMERA(0);
					APP::APP_CLOSE_APP();
					Global_113386.f_20118.f_273[iParam0] = 1;
				}
			}
		}
		else if ((iParam0 == 0 && Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[135]) || (iParam0 == 2 && Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[136]))
		{
			Global_113386.f_20118[iParam0 /*43*/].f_41 = 1;
			Global_113386.f_20118.f_273[iParam0] = 0;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar18 = 0;
		if (iLocal_114 == 0)
		{
			iVar18 = __LIB_13__::func_641(joaat("MPPLY_CARAPP_DATA_SENT_0"));
		}
		else if (iLocal_114 == 1)
		{
			iVar18 = __LIB_13__::func_641(joaat("MPPLY_CARAPP_DATA_SENT_1"));
		}
		else if (iLocal_114 == 2)
		{
			iVar18 = __LIB_13__::func_641(joaat("MPPLY_CARAPP_DATA_SENT_2"));
		}
		else if (iLocal_114 == 3)
		{
			iVar18 = __LIB_13__::func_641(joaat("MPPLY_CARAPP_DATA_SENT_3"));
		}
		else if (iLocal_114 == 4)
		{
			iVar18 = __LIB_13__::func_641(joaat("MPPLY_CARAPP_DATA_SENT_4"));
		}
		if (iVar18 && !__LIB_27__::func_322(iLocal_114))
		{
			APP::APP_SET_APP("car");
			StringCopy(&cVar19, "multiplayer", 16);
			StringIntConCat(&cVar19, iLocal_114, 16);
			APP::APP_SET_BLOCK(&cVar19);
			iVar20 = 0;
			while (iVar20 < 10)
			{
				StringCopy(&cVar19, "vehicle", 16);
				StringIntConCat(&cVar19, iVar20, 16);
				APP::APP_SET_BLOCK(&cVar19);
				func_198("carUnlocked", 0);
				APP::APP_CLOSE_BLOCK();
				iVar20++;
			}
			APP::APP_CLOSE_BLOCK();
			iLocal_95 = 1;
			SYSTEM::SETTIMERA(0);
			APP::APP_CLOSE_APP();
			if (iLocal_114 == 0)
			{
				__LIB_0__::func_860(joaat("MPPLY_CARAPP_DATA_SENT_0"), 0);
			}
			else if (iLocal_114 == 1)
			{
				__LIB_0__::func_860(joaat("MPPLY_CARAPP_DATA_SENT_1"), 0);
			}
			else if (iLocal_114 == 2)
			{
				__LIB_0__::func_860(joaat("MPPLY_CARAPP_DATA_SENT_2"), 0);
			}
			else if (iLocal_114 == 3)
			{
				__LIB_0__::func_860(joaat("MPPLY_CARAPP_DATA_SENT_3"), 0);
			}
			else if (iLocal_114 == 4)
			{
				__LIB_0__::func_860(joaat("MPPLY_CARAPP_DATA_SENT_4"), 0);
			}
		}
		iLocal_114++;
		if (iLocal_114 > 4)
		{
			iLocal_114 = 0;
		}
	}
	if (!bLocal_88)
	{
		if (Var11.f_42)
		{
			Local_91 = { Var8 };
			Local_92 = { Var10 };
			iLocal_90 = Var11.f_0;
			bLocal_88 = true;
			iLocal_95 = 1;
			SYSTEM::SETTIMERA(0);
			Var11.f_42 = 0;
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_52 = 0;
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (SYSTEM::TIMERB() > 5000)
			{
				bVar21 = false;
				if (iLocal_115 == 0)
				{
					func_445(&iVar22);
					bVar21 = iVar22 != iLocal_117[0];
					iLocal_115++;
					SYSTEM::SETTIMERB(0);
				}
				else if (iLocal_115 == 1)
				{
					func_414(&iVar23);
					bVar21 = iVar23 != iLocal_117[1];
					iLocal_115++;
					SYSTEM::SETTIMERB(0);
				}
				else if (iLocal_115 == 2)
				{
					if (func_405(&iVar24, iLocal_116) == -1)
					{
						iLocal_116 = 0;
						iLocal_115++;
						SYSTEM::SETTIMERB(0);
					}
					else
					{
						bVar21 = BitTest(iVar24[(iLocal_116 / 32)], (iLocal_116 % 32)) != BitTest(uLocal_120[(iLocal_116 / 32)], (iLocal_116 % 32));
						iLocal_116++;
						SYSTEM::SETTIMERB(4900);
					}
				}
				if (bVar21)
				{
					Local_91 = { Var8 };
					Local_92 = { Var10 };
					iLocal_90 = Var11.f_0;
					bLocal_88 = true;
					iLocal_95 = 1;
					SYSTEM::SETTIMERA(0);
				}
				if (iLocal_115 > 2)
				{
					iLocal_115 = 0;
				}
			}
		}
	}
	if (Var12.f_33)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (__LIB_0__::func_3() == 0)
			{
				iVar25 = Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_62;
				if (Global_1585857[iVar25 /*142*/].f_66 == Var12.f_0)
				{
					if (Var12.f_37)
					{
						Var12.f_38 = 0;
						if (iLocal_98 == 0)
						{
							if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(iLocal_96))
							{
								if (!SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(iLocal_96))
								{
									if (SOCIALCLUB::SC_PROFANITY_GET_STRING_PASSED(iLocal_96))
									{
										iLocal_96 = 0;
										Var12.f_37 = 0;
									}
									else
									{
										Var12.f_38 = 1;
										iLocal_96 = 0;
										Var12.f_37 = 0;
									}
								}
							}
							else
							{
								SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&(Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_28), &iLocal_96);
							}
						}
						else if (iLocal_98 == 1)
						{
							if (iLocal_97 == 0)
							{
								SOCIALCLUB::SC_LICENSEPLATE_ISVALID(&(Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_28), &iLocal_97);
							}
							else if (!SOCIALCLUB::SC_LICENSEPLATE_GET_ISVALID_IS_PENDING(iLocal_97))
							{
								switch (SOCIALCLUB::SC_LICENSEPLATE_GET_ISVALID_STATUS(iLocal_97))
								{
									case 0:
										iLocal_97 = 0;
										Var12.f_37 = 0;
										break;
									default:
										Var12.f_38 = 1;
										iLocal_97 = 0;
										Var12.f_37 = 0;
										break;
									}
								}
						}
					}
					else if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
					}
					else if (__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
					{
					}
					else if (!__LIB_0__::func_438())
					{
					}
					else if (Var12.f_38)
					{
						if (func_403(96, "SOCIAL_CARAPP2" /* GXT: The plate you ordered is inappropriate. Please choose another and try again. */, 0, 0))
						{
							Var12.f_33 = 0;
							Var12.f_36 = 0;
							Var12.f_35 = 0;
							Var12.f_34 = 0;
						}
					}
					else if (iLocal_103)
					{
						Var12.f_39 = 0;
						if (iLocal_105)
						{
							if (!func_389(&Var12, iVar25))
							{
								iLocal_103 = 0;
							}
							iLocal_105 = 0;
						}
						else if (Var12.f_27 > 0 && !MONEY::NETWORK_CAN_SPEND_MONEY(Var12.f_27, false, true, false, -1, 0))
						{
							Var12.f_39 = 1;
							iLocal_103 = 0;
						}
						else
						{
							if (!iLocal_104)
							{
								func_387(&Var12, 0);
								MISC::SET_BIT(&(Global_1585857[iVar25 /*142*/].f_103), 14);
								iLocal_104 = 1;
								__LIB_3__::func_578(iVar25, &(Global_1585857[iVar25 /*142*/]), 1, -1, 0, 0);
								__LIB_1__::func_333(407109726, 3, 0);
							}
							if (func_290(96, "SOCIAL_CARAPP1" /* GXT: Your Los Santos Customs order has been processed for your ~a~. */, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Var12.f_0), 0, -99, 0, 0, 0, 0))
							{
								bVar26 = MONEY::NETWORK_GET_VC_BANK_BALANCE() >= Var12.f_27;
								bVar27 = (!bVar26 && MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0);
								if (Var12.f_27 > 0)
								{
									MONEY::NETWORK_BUY_ITEM(Var12.f_27, Var12.f_0, 8, 1, bVar26, "CMOD_MAIN_0", MISC::GET_HASH_KEY(__LIB_12__::func_769(39, 0, 0)), MISC::GET_HASH_KEY("CMOD_MAIN_0"), 0, bVar27);
								}
								Var12.f_33 = 0;
								Var12.f_36 = 1;
								Var12.f_35 = 1;
								iLocal_103 = 0;
								func_387(&Var12, 1);
								__LIB_14__::func_174(&Var12, 3);
								MISC::SET_BIT(&(Global_1585857[iVar25 /*142*/].f_103), 14);
								__LIB_3__::func_578(iVar25, &(Global_1585857[iVar25 /*142*/]), 1, -1, 0, 0);
								__LIB_1__::func_333(407109726, 3, 0);
							}
						}
					}
					else if (Var12.f_39)
					{
						if (func_290(96, "SOCIAL_CARAPP3" /* GXT: We could not process your Los Santos Customs order due to lack of funds. Drop by one of our garages with your ~a~ when you have enough money. */, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Var12.f_0), 0, -99, 0, 0, 0, 0))
						{
							Var12.f_33 = 0;
							Var12.f_36 = 1;
							Var12.f_35 = 0;
							Var12.f_34 = 0;
						}
					}
					else if (func_290(96, "SOCIAL_CARAPP" /* GXT: Drop by Los Santos Customs to have your ~a~ order fulfilled. */, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Var12.f_0), 0, -99, 0, 0, 0, 0))
					{
						Var12.f_33 = 0;
						Var12.f_36 = 1;
						Var12.f_35 = 0;
					}
					iLocal_87 = 1;
				}
				else
				{
					Var12.f_33 = 0;
					Var12.f_36 = 0;
					Var12.f_35 = 0;
					Var12.f_34 = 0;
				}
			}
		}
		else if (iParam0 == __LIB_0__::func_683())
		{
			if ((((((Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam0 /*98*/] == Var12.f_0 || Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam0 /*98*/] == Var12.f_0) || Global_113386.f_2363.f_539.f_2407[2 /*295*/][iParam0 /*98*/] == Var12.f_0) || Global_113386.f_2363.f_539.f_2407[3 /*295*/][iParam0 /*98*/] == Var12.f_0) || ((iParam0 == 1 && Var12.f_0 == joaat("buffalo2")) && !Global_113386.f_20118.f_281[iParam0])) || ((iParam0 == 0 && Var12.f_0 == joaat("tailgater")) && !Global_113386.f_20118.f_281[iParam0])) || ((iParam0 == 2 && Var12.f_0 == joaat("bodhi2")) && !Global_113386.f_20118.f_281[iParam0]))
			{
				if (Var12.f_37)
				{
					Var12.f_38 = 0;
					if (iLocal_98 == 0)
					{
						if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(iLocal_96))
						{
							if (!SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(iLocal_96))
							{
								if (SOCIALCLUB::SC_PROFANITY_GET_STRING_PASSED(iLocal_96))
								{
									iLocal_96 = 0;
									Var12.f_37 = 0;
								}
								else
								{
									Var12.f_38 = 1;
									iLocal_96 = 0;
									Var12.f_37 = 0;
								}
							}
						}
						else
						{
							SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&(Global_113386.f_20118.f_130[iParam0 /*41*/].f_28), &iLocal_96);
						}
					}
					else if (iLocal_98 == 1)
					{
						if (iLocal_97 == 0)
						{
							SOCIALCLUB::SC_LICENSEPLATE_ISVALID(&(Global_113386.f_20118.f_130[iParam0 /*41*/].f_28), &iLocal_97);
						}
						else if (!SOCIALCLUB::SC_LICENSEPLATE_GET_ISVALID_IS_PENDING(iLocal_97))
						{
							switch (SOCIALCLUB::SC_LICENSEPLATE_GET_ISVALID_STATUS(iLocal_97))
							{
								case 0:
									iLocal_97 = 0;
									Var12.f_37 = 0;
									break;
								default:
									Var12.f_38 = 1;
									iLocal_97 = 0;
									Var12.f_37 = 0;
									break;
								}
							}
					}
				}
				else if (Var12.f_38)
				{
					if ((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(2))
					{
						if (__LIB_3__::func_589(96, "SOCIAL_CARAPP2" /* GXT: The plate you ordered is inappropriate. Please choose another and try again. */, 2, 0, 0, 0, 0, 1, 0, 1))
						{
							Var12.f_33 = 0;
							Var12.f_36 = 0;
							Var12.f_35 = 0;
							Var12.f_34 = 0;
						}
					}
				}
				else if (iLocal_100[iParam0])
				{
					iLocal_100[iParam0] = 0;
					Var12.f_39 = 0;
					Var12.f_34 = 0;
					if (!func_278(Var12.f_27) && (iParam0 != 1 || Global_113386.f_20118.f_281[iParam0]))
					{
						Var12.f_39 = 1;
					}
					else
					{
						Var12.f_33 = 0;
						Var12.f_36 = 1;
						Var12.f_35 = 1;
						Var12.f_34 = iLocal_101[iParam0];
					}
					iLocal_101[iParam0] = 0;
				}
				else if (Var12.f_39)
				{
					if ((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(2))
					{
						if (__LIB_35__::func_906(96, "SOCIAL_CARAPP3" /* GXT: We could not process your Los Santos Customs order due to lack of funds. Drop by one of our garages with your ~a~ when you have enough money. */, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_113386.f_20118.f_130[iParam0 /*41*/])), -99, "NULL", 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0))
						{
							Var12.f_33 = 0;
							Var12.f_36 = 1;
							Var12.f_35 = 0;
							Var12.f_34 = 0;
						}
					}
				}
				else if ((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(2))
				{
					StringCopy(&Var28, "SOCIAL_CARAPP" /* GXT: Drop by Los Santos Customs to have your ~a~ order fulfilled. */, 16);
					if (iParam0 == 1 && !Global_113386.f_20118.f_281[iParam0])
					{
						StringCopy(&Var28, "SOCIAL_FREE" /* GXT: Drop by Los Santos Customs to have your ~a~ order fulfilled. This one's on the house. */, 16);
					}
					if (__LIB_35__::func_906(96, &Var28, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_113386.f_20118.f_130[iParam0 /*41*/])), -99, "NULL", 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0))
					{
						Var12.f_33 = 0;
						Var12.f_36 = 1;
						Var12.f_35 = 0;
						Var12.f_34 = 0;
						__LIB_0__::func_210();
					}
				}
				iLocal_87 = 1;
			}
			else
			{
				Var12.f_33 = 0;
				Var12.f_36 = 0;
				Var12.f_35 = 0;
				Var12.f_34 = 0;
			}
		}
	}
	iVar29 = 1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (((iParam0 != 3 || !__LIB_3__::func_200(39)) || __LIB_0__::func_719()) || __LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 0))
		{
			iVar29 = 0;
		}
	}
	else if (!__LIB_0__::func_43(iParam0) || __LIB_0__::func_719())
	{
		iVar29 = 0;
	}
	if (iVar29 && !Var12.f_33)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (iVar1 == 0)
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK(&cVar9);
				if (APP::APP_DATA_VALID())
				{
					iVar30 = func_23("uid");
					if (((iVar30 != 0 && iVar30 != Var12.f_26) && func_23("character") == iVar2) && (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || func_23("vehicle") == iLocal_74))
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
						}
						Var12.f_26 = iVar30;
						Var12.f_0 = func_23("carModel");
						if (!STREAMING::IS_MODEL_A_VEHICLE(Var12.f_0))
						{
							if (iParam0 == 0)
							{
								Var12.f_0 = __LIB_0__::func_721(0, 1);
							}
							else if (iParam0 == 1)
							{
								Var12.f_0 = __LIB_0__::func_721(1, 1);
							}
							else if (iParam0 == 2)
							{
								Var12.f_0 = __LIB_0__::func_721(2, 1);
							}
							else
							{
								Var12.f_0 = joaat("buffalo2");
							}
						}
						Var12.f_27 = func_23("cost");
						Var12.f_1 = func_23("carColour1");
						Var12.f_2 = func_23("carColour2");
						Var12.f_3 = func_23("carColour1Group");
						Var12.f_4 = func_23("carColour2Group");
						Var12.f_5 = func_23("windowTint");
						Var12.f_18 = __LIB_11__::func_717(func_23("bulletProofTyres"));
						Var12.f_9 = func_23("carEngine");
						Var12.f_10 = func_23("carBrakes");
						Var12.f_13 = func_23("carExhaust");
						Var12.f_11 = func_23("carWheel");
						Var12.f_6 = func_23("tyreSmokeColourRed");
						Var12.f_7 = func_23("tyreSmokeColourGreen");
						Var12.f_8 = func_23("tyreSmokeColourBlue");
						Var12.f_16 = func_23("carHorn");
						Var12.f_15 = func_23("carArmour");
						Var12.f_19 = func_23("carTurbo");
						Var12.f_14 = func_23("carSuspension");
						Var12.f_17 = func_23("carXenonLights");
						Var12.f_20 = func_23("tyreSmoke");
						Var12.f_12 = Var11.f_10;
						iVar0 = 1;
						if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							if (!iLocal_102[iParam0] && (MISC::GET_GAME_TIMER() - iLocal_99) < 20000)
							{
								iLocal_100[iParam0] = 1;
							}
							else if (((!__LIB_0__::func_178(0) && __LIB_39__::func_389(1, 0) == 0) && (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))) && (BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[27 /*3*/], 1) || __LIB_0__::func_2(0)))
							{
								iLocal_100[iParam0] = 1;
								iLocal_101[iParam0] = 1;
							}
							else if ((((iParam0 == 0 && Var12.f_0 == joaat("tailgater")) || (iParam0 == 1 && Var12.f_0 == joaat("buffalo2"))) || (iParam0 == 1 && Var12.f_0 == joaat("bagger"))) || (iParam0 == 2 && Var12.f_0 == joaat("bodhi2")))
							{
								if (__LIB_39__::func_389(iParam0, Var12.f_0) == 0)
								{
									iLocal_100[iParam0] = 1;
									iLocal_101[iParam0] = 1;
								}
							}
							if (!iLocal_100[iParam0])
							{
							}
						}
					}
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_102[iParam0] = 1;
					}
				}
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
			}
			else if (iVar1 == 1 && iVar0)
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("plate");
				if (APP::APP_DATA_VALID())
				{
					Var12.f_32 = func_23("carPlateBack");
					if (Var12.f_32 > 4)
					{
						Var12.f_32 = 0;
						Var12.f_32 = func_23("carPlateBack");
					}
					StringCopy(&(Var12.f_28), func_249("carPlateText"), 16);
				}
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
				Var12.f_33 = 1;
				Var12.f_37 = 1;
				Var12.f_39 = 0;
				Var12.f_35 = 0;
				Var12.f_40 = 0;
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					STATS::STAT_SET_BOOL(joaat("CAR_MOD_APP_USED"), true, true);
					__LIB_0__::func_183(135, 1);
					Global_113386.f_20118.f_262 = 1;
				}
				else
				{
					Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_62 = iLocal_76;
					__LIB_1__::func_348(99, 1, -1, 1);
				}
				iLocal_296 = 1;
			}
			iVar1++;
		}
	}
	if ((!Var11.f_41 && iVar29) && Var11.f_40)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!func_246(&Var11))
			{
				iLocal_87 = 1;
				return;
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
		}
		APP::APP_SET_APP("car");
		APP::APP_SET_BLOCK("appdata");
		iVar31 = func_245();
		if (iVar31 == 0)
		{
			iVar31 = func_245();
		}
		func_198("appUID", iVar31);
		Global_113386.f_20118.f_272 = iVar31;
		iVar32 = 0;
		iVar33 = 0;
		if (__LIB_0__::func_438())
		{
			if (__LIB_15__::func_885())
			{
				iVar33 = (iVar33 + Global_262145.f_132 /* Tunable: SHOP_GOODBOY_DISCOUNT_PERCENT */);
			}
		}
		func_449("spDiscount", (1f - (SYSTEM::TO_FLOAT(iVar32) / 100f)));
		func_449("mpDiscount", (1f - (SYSTEM::TO_FLOAT(iVar33) / 100f)));
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_198("playerName", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_198("playerNameMP", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
			}
			else
			{
				func_198("playerNameSP", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
			}
		}
		APP::APP_CLOSE_BLOCK();
		APP::APP_SET_BLOCK(&Var8);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			APP::APP_SET_BLOCK(&Var10);
		}
		if (!func_216(Var11.f_0))
		{
			func_198("carUnlocked", 0);
		}
		else
		{
			func_198("carUnlocked", 1);
			if ((((Var11.f_0 == joaat("sanchez") || Var11.f_0 == joaat("faggio2")) || Var11.f_0 == joaat("dune")) || Var11.f_0 == joaat("bfinjection")) || !__LIB_14__::func_175(Var11.f_10))
			{
				Var11.f_27 = 0;
			}
			if (__LIB_0__::func_176(Var11.f_0, 1))
			{
				Var11.f_30 = 0;
			}
			if (Var11.f_0 == joaat("lectro") || Var11.f_0 == joaat("vindicator"))
			{
				Var11.f_28 = 0;
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (Var11.f_0 == joaat("patriot"))
				{
					Var11.f_26 = 0;
				}
				if (Var11.f_0 == joaat("prairie"))
				{
					if (Var11.f_26 > 1)
					{
						Var11.f_26 = 1;
					}
				}
			}
			if (Var11.f_15 > 1)
			{
				Var11.f_15 = 0;
			}
			uVar34 = func_211(&Var11);
			Var11.f_9 = uVar34;
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_198("playerSlot", iVar3);
				func_198("playerRank", __LIB_12__::func_841(PLAYER::PLAYER_ID()));
				switch (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
				{
					case joaat("MP_M_Freemode_01"):
					case joaat("MP_F_Freemode_01"):
						func_450("playerGang", "None" /* GXT: None */);
						HUD::GET_HUD_COLOUR(116, &iVar4, &iVar5, &iVar6, &uVar7);
						break;
				}
				func_198("playerGangR", iVar4);
				func_198("playerGangG", iVar5);
				func_198("playerGangB", iVar6);
			}
			if (!STREAMING::IS_MODEL_A_VEHICLE(Var11.f_0))
			{
				func_198("carModel", -1);
				func_198("carUnlocked", 0);
			}
			else
			{
				func_198("carModel", Var11.f_0);
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (Var11.f_39)
				{
					case 0:
						if (VEHICLE::IS_THIS_MODEL_A_CAR(Var11.f_0))
						{
							func_450("carType", "car");
						}
						else
						{
							func_450("carType", "bike");
						}
						break;
					case 1:
						func_450("carType", "sport");
						break;
					case 2:
						func_450("carType", "suv");
						break;
					case 3:
						func_450("carType", "special");
						break;
				}
			}
			else
			{
				iVar35 = __LIB_6__::func_363(Var11.f_0);
				switch (iVar35)
				{
					case 0:
						func_450("carType", "car");
						break;
					case 1:
						func_450("carType", "sport");
						break;
					case 2:
						func_450("carType", "suv");
						break;
					case 3:
						func_450("carType", "special");
						break;
					case 4:
						func_450("carType", "bike");
						break;
					case 5:
						func_450("carType", "special");
						break;
					case 6:
						func_450("carType", "car");
						break;
					case 7:
						func_450("carType", "special");
						break;
					case 10:
						func_450("carType", "special");
						break;
					case 11:
						func_450("carType", "car");
						break;
					case 28:
						func_450("carType", "car");
						break;
					case 26:
						func_450("carType", "special");
						break;
					case 27:
						func_450("carType", "special");
						break;
					case 29:
						func_450("carType", "special");
						break;
					case 30:
						func_450("carType", "special");
						break;
					case 31:
						func_450("carType", "special");
						break;
					case 32:
						func_450("carType", "special");
						break;
					default:
						func_450("carType", "special");
						break;
					}
			}
			func_198("carColour1", Var11.f_1);
			func_198("carColour2", Var11.f_2);
			func_198("windowTint", Var11.f_3);
			func_198("bulletProofTyres", __LIB_1__::func_137(Var11.f_16));
			func_198("carEngine", Var11.f_7);
			func_198("carBrakes", Var11.f_8);
			func_198("carExhaust", Var11.f_11);
			func_198("carWheel", Var11.f_9);
			func_198("tyreSmokeColourRed", Var11.f_4);
			func_198("tyreSmokeColourGreen", Var11.f_5);
			func_198("tyreSmokeColourBlue", Var11.f_6);
			func_198("carHorn", Var11.f_14);
			func_198("carArmour", Var11.f_13);
			func_198("carTurbo", Var11.f_17);
			func_198("carSuspension", Var11.f_12);
			func_198("carXenonLights", Var11.f_15);
			func_198("tyreSmoke", Var11.f_18);
			func_198("tyreSmoke", Var11.f_18);
			func_198("carWheelType", Var11.f_10);
			func_198("carEngineCount", Var11.f_24);
			func_198("carBrakesCount", Var11.f_25);
			func_198("carExhaustCount", Var11.f_26);
			func_198("carWheelCount", Var11.f_27);
			func_198("carHornCount", Var11.f_28);
			func_198("carArmourCount", Var11.f_29);
			func_198("carSuspensionCount", Var11.f_30);
			func_198("carHorn1", Var11.f_33[0]);
			func_198("carHorn2", Var11.f_33[1]);
			func_198("carHorn3", Var11.f_33[2]);
			func_198("carHorn4", Var11.f_33[3]);
			func_198("carHorn5", Var11.f_33[4]);
			func_449("carPriceModifier", Var11.f_31);
			if (!BitTest(Var11.f_32, 0) || Var11.f_0 == joaat("sovereign"))
			{
				func_198("carColour1Unlocked", 0);
			}
			else
			{
				func_198("carColour1Unlocked", 1);
			}
			if (!BitTest(Var11.f_32, 1) || Var11.f_0 == joaat("sovereign"))
			{
				func_198("carColour2Unlocked", 0);
			}
			else
			{
				func_198("carColour2Unlocked", 1);
			}
			iVar36 = 0;
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || BitTest(Global_1585857[iLocal_76 /*142*/].f_103, 17))
			{
				MISC::SET_BIT(&iVar36, 0);
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || BitTest(Global_1585857[iLocal_76 /*142*/].f_103, 18))
			{
				MISC::SET_BIT(&iVar36, 1);
			}
			func_198("newItemUnlocks", iVar36);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			APP::APP_CLOSE_BLOCK();
		}
		APP::APP_CLOSE_BLOCK();
		Local_91 = { Var8 };
		Local_92 = { Var10 };
		iLocal_90 = Var11.f_0;
		bLocal_88 = true;
		APP::APP_SET_BLOCK("plate");
		func_198("carPlateBack", Var11.f_23);
		APP::APP_CLOSE_BLOCK();
		APP::APP_CLOSE_APP();
		Var11.f_40 = 0;
		iLocal_95 = 1;
		SYSTEM::SETTIMERA(0);
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			Global_113386.f_20118.f_277[iParam0] = 1;
		}
		else
		{
			if (iVar3 == 0)
			{
				__LIB_0__::func_860(joaat("MPPLY_CARAPP_DATA_SENT_0"), 1);
			}
			else if (iVar3 == 1)
			{
				__LIB_0__::func_860(joaat("MPPLY_CARAPP_DATA_SENT_1"), 1);
			}
			else if (iVar3 == 2)
			{
				__LIB_0__::func_860(joaat("MPPLY_CARAPP_DATA_SENT_2"), 1);
			}
			else if (iVar3 == 3)
			{
				__LIB_0__::func_860(joaat("MPPLY_CARAPP_DATA_SENT_3"), 1);
			}
			else if (iVar3 == 4)
			{
				__LIB_0__::func_860(joaat("MPPLY_CARAPP_DATA_SENT_4"), 1);
			}
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_41[iLocal_74] = 0;
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113386.f_20118[iParam0 /*43*/] = { Var11 };
			Global_113386.f_20118.f_130[iParam0 /*41*/] = { Var12 };
			break;
		case 3:
			func_202(&Var11);
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_593 = { Var12 };
			break;
	}
}

void func_202(var uParam0)//Position - 0x9694
{
	if (uParam0->f_40)
	{
		MISC::SET_BIT(&(Global_1585857[iLocal_76 /*142*/].f_103), 25);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1585857[iLocal_76 /*142*/].f_103), 25);
	}
	if (uParam0->f_41)
	{
		MISC::SET_BIT(&(Global_1585857[iLocal_76 /*142*/].f_103), 26);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1585857[iLocal_76 /*142*/].f_103), 26);
	}
}

int func_211(var uParam0)//Position - 0xB57C
{
	int iVar0;
	iVar0 = func_212(uParam0);
	return ((uParam0->f_9 % iVar0) + (iLocal_121 * iVar0));
}

int func_212(var uParam0)//Position - 0xB599
{
	switch (uParam0->f_10)
	{
		case 8:
			return 31;
			break;
		case 9:
			return 31;
			break;
		case 10:
			if (__LIB_2__::func_622(*uParam0))
			{
				return 20;
			}
			break;
		case 11:
			return 30;
			break;
		case 12:
			return 30;
			break;
	}
	return (uParam0->f_27 - 1);
}

int func_216(int iParam0)//Position - 0xBA52
{
	if (iParam0 == 0)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("fbi"):
		case joaat("fbi2"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("riot"):
		case joaat("sheriff"):
		case joaat("pranger"):
		case joaat("ambulance"):
		case joaat("firetruk"):
		case joaat("taxi"):
		case joaat("lguard"):
		case joaat("ripley"):
		case joaat("dilettante2"):
		case joaat("airbus"):
		case joaat("airtug"):
		case joaat("burrito"):
		case joaat("rumpo2"):
		case joaat("speedo"):
		case joaat("speedo2"):
		case joaat("scorcher"):
		case joaat("bmx"):
		case joaat("cruiser"):
		case joaat("fixter"):
		case joaat("caddy"):
		case joaat("forklift"):
		case joaat("caddy2"):
		case joaat("crusader"):
		case joaat("tribike"):
		case joaat("tribike2"):
		case joaat("tribike3"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("mower"):
		case joaat("tornado4"):
		case joaat("docktug"):
		case joaat("stretch"):
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("benson"):
		case joaat("pounder"):
		case joaat("submersible"):
		case joaat("monster"):
		case joaat("technical"):
		case joaat("phantom2"):
		case joaat("wastelander"):
		case joaat("boxville5"):
		case joaat("terbyte"):
		case joaat("speedo4"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("kosatka"):
		case joaat("deluxo"):
			return 0;
			break;
		default:
			if (__LIB_1__::func_771(iParam0))
			{
				return 0;
			}
			break;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_245()//Position - 0xC63B
{
	var uVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
		{
			MISC::SET_BIT(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

int func_246(var uParam0)//Position - 0xC66A
{
	int iVar0;
	if (!func_216(*uParam0))
	{
		return 1;
	}
	if (iLocal_123)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_122)) < 1500)
		{
			return 0;
		}
	}
	iLocal_123 = 0;
	STREAMING::REQUEST_MODEL(*uParam0);
	if (!STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(*uParam0, (660.3092f + IntToFloat(PLAYER::PLAYER_ID() * 10)), 4977.6084f, 1222.0242f, 0f, false, false, false);
	}
	else
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(*uParam0, 660.3092f, 4977.6084f, 1222.0242f, 0f, false, false, false);
	}
	if (VEHICLE::GET_NUM_MOD_KITS(iVar0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iVar0, 0);
	}
	VEHICLE::SET_VEHICLE_WHEEL_TYPE(iVar0, Global_1585857[iLocal_76 /*142*/].f_69);
	uParam0->f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(iVar0);
	uParam0->f_33[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(iVar0, 14, 0);
	uParam0->f_33[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(iVar0, 14, 1);
	uParam0->f_33[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(iVar0, 14, 2);
	uParam0->f_33[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(iVar0, 14, 3);
	uParam0->f_24 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 11) + 1;
	uParam0->f_25 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 12) + 1;
	uParam0->f_26 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 4) + 1;
	uParam0->f_28 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 14) + 1;
	uParam0->f_29 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 16) + 1;
	uParam0->f_30 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 15) + 1;
	uParam0->f_31 = __LIB_0__::func_294(iVar0);
	uParam0->f_32 = VEHICLE::GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(iVar0);
	uParam0->f_39 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iVar0);
	uParam0->f_27 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 23) + 1;
	iLocal_121 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iVar0, 23);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (*uParam0 == joaat("patriot"))
		{
			uParam0->f_26 = 0;
		}
		if (*uParam0 == joaat("prairie"))
		{
			if (uParam0->f_26 > 1)
			{
				uParam0->f_26 = 1;
			}
		}
	}
	VEHICLE::DELETE_VEHICLE(&iVar0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam0);
	iLocal_123 = 1;
	iLocal_122 = NETWORK::GET_NETWORK_TIME();
	SYSTEM::SETTIMERA(0);
	return 1;
}

char* func_249(char* sParam0)//Position - 0xC951
{
	return APP::APP_GET_STRING(func_24(sParam0));
}

int func_278(int iParam0)//Position - 0xE03D
{
	if (iParam0 == 0)
	{
		return 1;
	}
	if (__LIB_14__::func_404(1))
	{
		if (Global_78319)
		{
			if (MONEY::NETWORK_CAN_SPEND_MONEY(iParam0, false, true, false, -1, 0))
			{
				return 1;
			}
		}
		else if (__LIB_12__::func_295(__LIB_0__::func_683()) >= iParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_290(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0xE9DA
{
	var uVar0;
	int iVar1;
	uVar0 = 16;
	iVar1 = 2;
	if (bParam7)
	{
		iVar1 = 5;
	}
	return func_291(&uVar0, iParam0, __LIB_12__::func_822(), sParam1, iVar1, 3, iParam8, sParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_291(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0xEA13
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = __LIB_3__::func_32(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (__LIB_12__::func_772(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!__LIB_3__::func_421(uParam6))
	{
		return 0;
	}
	if (__LIB_3__::func_585(iVar0, iVar1, iVar2))
	{
		if (__LIB_3__::func_27())
		{
			return 0;
		}
		__LIB_3__::func_26();
		return func_298(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!__LIB_3__::func_7(iParam4))
	{
		return 0;
	}
	__LIB_3__::func_584(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

int func_298(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0xEBFE
{
	struct<2> Var0;
	__LIB_3__::func_25();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return __LIB_3__::func_431(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226" /* GXT: Accept? */, 16);
		return __LIB_3__::func_430(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return __LIB_3__::func_431(uParam0, sParam3, sParam4);
		}
		return __LIB_3__::func_433(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_327(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_324(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_323(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_299(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_299(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xECF8
{
	bool bVar0;
	__LIB_3__::func_15();
	bVar0 = true;
	if (func_301(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		__LIB_3__::func_8(120000);
		return 1;
	}
	return 0;
}

int func_301(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0xED52
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	iVar0 = __LIB_0__::func_162();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = __LIB_3__::func_586(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1641031.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_315(sParam5, bParam6, &iVar3);
	uVar5 = __LIB_3__::func_419(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = __LIB_3__::func_588(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = __LIB_3__::func_590(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		__LIB_3__::func_11();
	}
	__LIB_3__::func_15();
	__LIB_3__::func_10();
	__LIB_3__::func_9();
	return 1;
}

char* func_315(char* sParam0, bool bParam1, int iParam2)//Position - 0xF7F0
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_21;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_21))
	{
		return sLocal_21;
	}
	__LIB_3__::func_14(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam0);
}

int func_323(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xFA74
{
	bool bVar0;
	__LIB_3__::func_15();
	bVar0 = false;
	return func_301(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_324(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xFA9B
{
	bool bVar0;
	bVar0 = false;
	return func_325(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_325(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0xFABE
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	iVar0 = __LIB_0__::func_162();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = __LIB_3__::func_586(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1641031.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22666 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_315(sParam5, bParam6, &iVar3);
	uVar5 = __LIB_3__::func_419(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = __LIB_35__::func_906(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = __LIB_3__::func_589(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		__LIB_3__::func_11();
	}
	__LIB_3__::func_16();
	__LIB_3__::func_10();
	__LIB_3__::func_9();
	return 1;
}

int func_327(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xFC1C
{
	bool bVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	__LIB_3__::func_16();
	bVar0 = true;
	if (func_325(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		__LIB_3__::func_8(120000);
		return 1;
	}
	return 0;
}

int func_387(var uParam0, bool bParam1)//Position - 0x1AFC9
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_62;
	if ((*uParam0 == Global_1585857[iVar0 /*142*/].f_66 && uParam0->f_36) && uParam0->f_35)
	{
		Global_1585857[iVar0 /*142*/].f_1 = { uParam0->f_28 };
		Global_1585857[iVar0 /*142*/] = uParam0->f_32;
		if (__LIB_13__::func_895(uParam0->f_1, &sVar2, &iVar1, &iVar3, &iVar4) && *uParam0 != joaat("sovereign"))
		{
			MISC::CLEAR_BIT(&(Global_1585857[iVar0 /*142*/].f_77), 13);
			Global_1585857[iVar0 /*142*/].f_5 = iVar3;
			Global_1585857[iVar0 /*142*/].f_7 = iVar4;
			Global_1585857[iVar0 /*142*/].f_138 = iVar1;
		}
		if (__LIB_13__::func_895(uParam0->f_2, &sVar2, &iVar1, &iVar3, &iVar4) && *uParam0 != joaat("sovereign"))
		{
			MISC::CLEAR_BIT(&(Global_1585857[iVar0 /*142*/].f_77), 12);
			Global_1585857[iVar0 /*142*/].f_6 = iVar3;
			Global_1585857[iVar0 /*142*/].f_139 = iVar1;
		}
		if (uParam0->f_18)
		{
			MISC::SET_BIT(&(Global_1585857[iVar0 /*142*/].f_77), 9);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1585857[iVar0 /*142*/].f_77), 9);
		}
		Global_1585857[iVar0 /*142*/].f_62 = uParam0->f_6;
		Global_1585857[iVar0 /*142*/].f_63 = uParam0->f_7;
		Global_1585857[iVar0 /*142*/].f_64 = uParam0->f_8;
		if (uParam0->f_5 == -1)
		{
			Global_1585857[iVar0 /*142*/].f_65 = 0;
		}
		else
		{
			Global_1585857[iVar0 /*142*/].f_65 = uParam0->f_5;
		}
		if (uParam0->f_13 != -1)
		{
			Global_1585857[iVar0 /*142*/].f_9[4] = uParam0->f_13;
		}
		if (uParam0->f_9 != -1)
		{
			Global_1585857[iVar0 /*142*/].f_9[11] = uParam0->f_9;
		}
		if (uParam0->f_10 != -1)
		{
			Global_1585857[iVar0 /*142*/].f_9[12] = uParam0->f_10;
		}
		if (uParam0->f_16 != -1 && uParam0->f_16 < 9)
		{
			Global_1585857[iVar0 /*142*/].f_9[14] = uParam0->f_16;
		}
		if (uParam0->f_14 != -1)
		{
			Global_1585857[iVar0 /*142*/].f_9[15] = uParam0->f_14;
		}
		if (uParam0->f_15 != -1)
		{
			Global_1585857[iVar0 /*142*/].f_9[16] = uParam0->f_15;
		}
		if (uParam0->f_11 != -1 && __LIB_14__::func_175(uParam0->f_12))
		{
			Global_1585857[iVar0 /*142*/].f_9[23] = uParam0->f_11;
			Global_1585857[iVar0 /*142*/].f_69 = -1;
		}
		if (uParam0->f_19 != -1)
		{
			Global_1585857[iVar0 /*142*/].f_9[18] = uParam0->f_19;
		}
		if (uParam0->f_17 != -1)
		{
			Global_1585857[iVar0 /*142*/].f_9[22] = uParam0->f_17;
		}
		if (uParam0->f_20 != -1)
		{
			Global_1585857[iVar0 /*142*/].f_9[20] = uParam0->f_20;
		}
		if (func_457(iVar0, &iVar5))
		{
			if (bParam1)
			{
				MISC::SET_BIT(&(Global_1585857[iVar0 /*142*/].f_103), 25);
				MISC::CLEAR_BIT(&(Global_1585857[iVar0 /*142*/].f_103), 26);
			}
		}
		return 1;
	}
	return 0;
}

bool func_389(var uParam0, int iParam1)//Position - 0x1C78D
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
	var uVar9;
	int iVar10;
	char* sVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	iVar0 = 0;
	iVar2 = Global_1585857[iParam1 /*142*/].f_5;
	iVar3 = Global_1585857[iParam1 /*142*/].f_6;
	iVar4 = Global_1585857[iParam1 /*142*/].f_7;
	iVar5 = Global_1585857[iParam1 /*142*/].f_65;
	if (iVar5 == -1)
	{
		iVar5 = 0;
	}
	if (uParam0->f_5 == -1)
	{
		uParam0->f_5 = 0;
	}
	iVar13 = 0;
	if (__LIB_14__::func_917(uParam0->f_1, &iVar6, &iVar7))
	{
		if ((iVar6 != -1 && iVar7 != -1) && (iVar6 != iVar2 || iVar7 != iVar4))
		{
			__LIB_13__::func_895(uParam0->f_1, &sVar11, &iVar10, &iVar6, &iVar7);
			if (iVar10 == 0)
			{
				iVar12 = 0;
			}
			else if (iVar10 == 1)
			{
				iVar12 = 1;
			}
			else if (iVar10 == 2)
			{
				iVar12 = 3;
			}
			else if (iVar10 == 3)
			{
				iVar12 = 4;
			}
			else if (iVar10 == 4)
			{
				iVar12 = 5;
			}
			iVar13 = __LIB_14__::func_977(&sVar11, iVar12, 1, 1, 0, 0, 0);
			iVar0 = (iVar0 + iVar13);
		}
	}
	if (__LIB_14__::func_917(uParam0->f_2, &iVar8, &uVar9))
	{
		if (iVar8 != -1 && iVar8 != iVar3)
		{
			__LIB_13__::func_895(uParam0->f_2, &sVar11, &iVar10, &iVar6, &iVar7);
			if (iVar10 == 0)
			{
				iVar12 = 0;
			}
			else if (iVar10 == 1)
			{
				iVar12 = 1;
			}
			else if (iVar10 == 2)
			{
				iVar12 = 3;
			}
			else if (iVar10 == 3)
			{
				iVar12 = 4;
			}
			else if (iVar10 == 4)
			{
				iVar12 = 5;
			}
			iVar13 = __LIB_14__::func_977(&sVar11, iVar12, 0, 1, 0, 0, 0);
			iVar0 = (iVar0 + iVar13);
		}
	}
	if (uParam0->f_32 != Global_1585857[iParam1 /*142*/])
	{
		if (uParam0->f_32 == 3)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_32 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_32 == 4)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_32 == 2)
		{
			iVar0 += 300;
		}
		else if (uParam0->f_32 == 1)
		{
			iVar0 += 600;
		}
	}
	if (!BitTest(Global_1585857[iParam1 /*142*/].f_77, 9))
	{
		if (uParam0->f_18)
		{
			iVar0 += 25000;
		}
	}
	iVar14 = Global_1585857[iParam1 /*142*/].f_62;
	iVar15 = Global_1585857[iParam1 /*142*/].f_63;
	iVar16 = Global_1585857[iParam1 /*142*/].f_64;
	if ((uParam0->f_6 != iVar14 || uParam0->f_7 != iVar15) || uParam0->f_8 != iVar16)
	{
		switch (__LIB_6__::func_361(uParam0->f_6, uParam0->f_7, uParam0->f_8))
		{
			case 1:
				iVar0 += 1500;
				break;
			case 2:
				iVar0 += 5000;
				break;
			case 3:
				iVar0 += 10000;
				break;
			case 4:
				iVar0 += 12500;
				break;
			case 6:
				iVar0 += 15000;
				break;
			case 8:
				iVar0 += 20000;
				break;
			case 5:
				iVar0 += 14000;
				break;
			case 7:
				iVar0 += 17500;
				break;
			case 9:
				iVar0 = (iVar0 + Global_262145.f_8125 /* Tunable: DLC_HIPSTER_CAR_MOD_PINK_TIRE_SMOKE */);
				break;
			case 10:
				iVar0 = (iVar0 + Global_262145.f_8126 /* Tunable: DLC_HIPSTER_CAR_MOD_BROWN_TIRE_SMOKE */);
				break;
			case 11:
				iVar0 = (iVar0 + Global_262145.f_8279 /* Tunable: VEHICLEKIT_INDEPENDENCEDAY_PATRIOT_TIRE_SMOKE */);
				break;
			}
	}
	if (uParam0->f_5 != iVar5)
	{
		if (uParam0->f_5 == 0)
		{
			iVar0 += 500;
		}
		else if (uParam0->f_5 == 1)
		{
			iVar0 += 5000;
		}
		else if (uParam0->f_5 == 2)
		{
			iVar0 += 3500;
		}
		else if (uParam0->f_5 == 3)
		{
			iVar0 += 1500;
		}
		else if (uParam0->f_5 == 5)
		{
			iVar0 = (iVar0 + Global_262145.f_8120 /* Tunable: DLC_HIPSTER_CAR_MOD_PURE_BLACK */);
		}
	}
	iVar1 = Global_1585857[iParam1 /*142*/].f_9[11];
	if (uParam0->f_9 != iVar1 && uParam0->f_9 != -1)
	{
		if (uParam0->f_9 == 0)
		{
			iVar0 += 500;
		}
		else if (uParam0->f_9 == 1)
		{
			iVar0 += 1800;
		}
		else if (uParam0->f_9 == 2)
		{
			iVar0 += 2500;
		}
		else if (uParam0->f_9 == 3)
		{
			iVar0 += 3600;
		}
		else if (uParam0->f_9 == 4)
		{
			iVar0 += 6700;
		}
	}
	iVar1 = Global_1585857[iParam1 /*142*/].f_9[12];
	if (uParam0->f_10 != iVar1 && uParam0->f_10 != -1)
	{
		if (uParam0->f_10 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_10 == 1)
		{
			iVar0 += 4000;
		}
		else if (uParam0->f_10 == 2)
		{
			iVar0 += 5400;
		}
		else if (uParam0->f_10 == 3)
		{
			iVar0 += 7000;
		}
	}
	iVar1 = Global_1585857[iParam1 /*142*/].f_9[4];
	if (uParam0->f_13 != iVar1 && uParam0->f_13 != -1)
	{
		if (uParam0->f_13 == 0)
		{
			iVar0 += 260;
		}
		else if (uParam0->f_13 == 1)
		{
			iVar0 += 750;
		}
		else if (uParam0->f_13 == 2)
		{
			iVar0 += 1800;
		}
		else if (uParam0->f_13 == 3)
		{
			iVar0 += 3000;
		}
		else if (uParam0->f_13 == 4)
		{
			iVar0 += 9550;
		}
		else if (uParam0->f_13 == 5)
		{
			iVar0 += 9750;
		}
	}
	iVar1 = Global_1585857[iParam1 /*142*/].f_9[23];
	if (uParam0->f_11 != iVar1 && uParam0->f_11 != -1)
	{
	}
	iVar1 = Global_1585857[iParam1 /*142*/].f_9[14];
	if (uParam0->f_16 != iVar1 && uParam0->f_16 != -1)
	{
		if (uParam0->f_16 == 0)
		{
			iVar0 += 500;
		}
		else if (uParam0->f_16 == 1)
		{
			iVar0 += 2000;
		}
		else if (uParam0->f_16 == 2)
		{
			iVar0 += 3000;
		}
		else if (uParam0->f_16 == 3)
		{
			iVar0 += 5000;
		}
		else if (uParam0->f_16 == 4)
		{
			iVar0 += 10000;
		}
		else if (uParam0->f_16 == 5)
		{
			iVar0 += 12500;
		}
	}
	iVar1 = Global_1585857[iParam1 /*142*/].f_9[16];
	if (uParam0->f_15 != iVar1 && uParam0->f_15 != -1)
	{
		if (uParam0->f_15 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_15 == 1)
		{
			iVar0 += 3600;
		}
		else if (uParam0->f_15 == 2)
		{
			iVar0 += 6000;
		}
		else if (uParam0->f_15 == 3)
		{
			iVar0 += 9600;
		}
		else if (uParam0->f_15 == 4)
		{
			iVar0 += 16800;
		}
		else if (uParam0->f_15 == 5)
		{
			iVar0 += 24000;
		}
	}
	iVar1 = Global_1585857[iParam1 /*142*/].f_9[15];
	if (uParam0->f_14 != iVar1 && uParam0->f_14 != -1)
	{
		if (uParam0->f_14 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_14 == 1)
		{
			iVar0 += 1000;
		}
		else if (uParam0->f_14 == 2)
		{
			iVar0 += 2000;
		}
		else if (uParam0->f_14 == 3)
		{
			iVar0 += 3400;
		}
		else if (uParam0->f_14 == 4)
		{
			iVar0 += 4400;
		}
	}
	if (uParam0->f_17 != -1)
	{
		if (uParam0->f_17 != 1 && Global_1585857[iParam1 /*142*/].f_9[22] > 0)
		{
			iVar0 += 100;
		}
		else if (uParam0->f_17 == 1 && Global_1585857[iParam1 /*142*/].f_9[22] <= 0)
		{
			iVar0 += 2000;
		}
	}
	if (uParam0->f_19 != -1)
	{
		if (uParam0->f_19 != 1 && Global_1585857[iParam1 /*142*/].f_9[18] > 0)
		{
			iVar0 += 1000;
		}
		else if (uParam0->f_19 == 1 && Global_1585857[iParam1 /*142*/].f_9[18] <= 0)
		{
			iVar0 += 24000;
		}
	}
	return uParam0->f_27 >= iVar0;
}

bool func_403(int iParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x1E714
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_290(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_405(int iParam0, int iParam1)//Position - 0x1E76F
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* sVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	iVar0 = 0;
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	bVar1 = false;
	while ((iParam1 == -1 || iParam1 == iVar0) && __LIB_13__::func_895(iVar0, &sVar3, &iVar2, &uVar4, &uVar5))
	{
		bVar1 = true;
		iVar6 = __LIB_14__::func_27(&sVar3);
		if (iVar2 == 0)
		{
			if (__LIB_15__::func_754(0, iVar6, 1, 0))
			{
				MISC::SET_BIT(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 1)
		{
			if (__LIB_15__::func_754(1, iVar6, 1, 0))
			{
				MISC::SET_BIT(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 2)
		{
			if (__LIB_15__::func_754(3, iVar6, 1, 0))
			{
				MISC::SET_BIT(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 3)
		{
			if (__LIB_15__::func_754(4, iVar6, 1, 0))
			{
				MISC::SET_BIT(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 4)
		{
			if (__LIB_15__::func_754(5, iVar6, 1, 0))
			{
				MISC::SET_BIT(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		iVar0++;
	}
	if (!bVar1)
	{
		return -1;
	}
	return iParam1;
}

void func_414(int* iParam0)//Position - 0x1F904
{
	*iParam0 = 0;
	if (func_415(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 0);
	}
	if (func_415(5, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 1);
	}
	if (func_415(6, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 2);
	}
	if (func_415(7, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 3);
	}
	if (func_415(8, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 4);
	}
	if (func_415(29, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 5);
	}
	if (func_415(30, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 6);
	}
	if (func_415(31, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 7);
	}
	if (func_415(32, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 8);
	}
	if (func_415(33, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 9);
	}
	if (func_415(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 10);
	}
	if (func_415(81, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 11);
	}
	if (func_415(51, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 12);
	}
	if (func_415(61, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 13);
	}
	if (func_415(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 14);
	}
	if (func_415(34, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 15);
	}
	if (func_415(35, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 16);
	}
	if (func_415(36, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 17);
	}
	if (func_415(37, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 18);
	}
	if (__LIB_4__::func_874())
	{
		MISC::SET_BIT(iParam0, 19);
	}
}

int func_415(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1FA8D
{
	int iVar0;
	if (__LIB_3__::func_148(iParam1, iParam3))
	{
		return 1;
	}
	if (__LIB_7__::func_92())
	{
		return 1;
	}
	if (__LIB_13__::func_993(iParam1, iParam3) && __LIB_1__::func_543(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_113386.f_2363.f_539.f_2241[(iParam0 / 32)], (iParam0 % 32));
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !ENTITY::IS_ENTITY_DEAD(iParam2, false))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam2);
		}
		if (__LIB_13__::func_992(iParam1, iParam3))
		{
			if (iVar0 == joaat("phantom3") || iVar0 == joaat("hauler2"))
			{
				return 1;
			}
			else if (iVar0 == joaat("trailerlarge"))
			{
				if ((iParam0 == 85 || iParam0 == 86) || iParam0 == 87)
				{
					return 1;
				}
			}
		}
		if (__LIB_13__::func_991(iParam1, iParam3))
		{
			if (iVar0 == joaat("avenger"))
			{
				return 1;
			}
		}
		if (__LIB_13__::func_990(iParam1, iParam3))
		{
			if (iVar0 == joaat("oppressor2"))
			{
				return 1;
			}
		}
		if (__LIB_7__::func_90(iParam1, iParam3))
		{
			return 1;
		}
		if (__LIB_3__::func_146(iParam1, iParam3))
		{
			if (iVar0 == joaat("vigilante"))
			{
				if (iParam0 == 85 || iParam0 == 86)
				{
					return 1;
				}
			}
		}
		switch (iVar0)
		{
			case joaat("monster3"):
			case joaat("bruiser"):
			case joaat("bruiser2"):
			case joaat("bruiser3"):
			case joaat("impaler2"):
			case joaat("impaler3"):
			case joaat("impaler4"):
			case joaat("issi4"):
			case joaat("deathbike"):
			case joaat("deathbike2"):
			case joaat("deathbike3"):
			case joaat("dominator"):
			case joaat("dominator2"):
			case joaat("dominator4"):
			case joaat("dominator5"):
			case joaat("dominator6"):
			case joaat("slamvan4"):
			case joaat("imperator"):
			case joaat("zr380"):
			case joaat("cerberus"):
			case joaat("scarab"):
			case joaat("brutus"):
			case joaat("imperator2"):
			case joaat("imperator3"):
			case joaat("zr3802"):
			case joaat("zr3803"):
			case joaat("cerberus2"):
			case joaat("scarab2"):
			case joaat("brutus2"):
			case joaat("cerberus3"):
			case joaat("scarab3"):
			case joaat("brutus3"):
			case joaat("slamvan5"):
			case joaat("slamvan6"):
			case joaat("monster4"):
			case joaat("monster5"):
			case joaat("issi5"):
			case joaat("issi6"):
			case joaat("rcbandito"):
				return 1;
				break;
		}
		if (((iParam0 == 85 || iParam0 == 86) || iParam0 == 87) || iParam0 == 88)
		{
			if (__LIB_0__::func_678(iParam2) || __LIB_0__::func_295(iVar0))
			{
				return 1;
			}
		}
		if (iParam0 == 77 || iParam0 == 78)
		{
			if (iVar0 == joaat("thruster"))
			{
				return 1;
			}
		}
		if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
		{
			if (iVar0 == joaat("oppressor2"))
			{
				return 1;
			}
		}
		if (((iParam0 == 72 || iParam0 == 73) || iParam0 == 74) || iParam0 == 75)
		{
			if (iVar0 == joaat("barrage") || __LIB_0__::func_295(iVar0))
			{
				return 1;
			}
		}
		if ((iParam0 == 21 || iParam0 == 22) || iParam0 == 23)
		{
			if (__LIB_0__::func_295(iVar0))
			{
				return 1;
			}
		}
		else if (iParam0 == 95 || iParam0 == 96)
		{
			if (__LIB_0__::func_295(iVar0) || __LIB_0__::func_811(iVar0))
			{
				return 1;
			}
		}
		if ((((((iParam0 == 17 || iParam0 == 18) || iParam0 == 19) || iParam0 == 20) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64)
		{
			if (__LIB_0__::func_295(iVar0))
			{
				return 1;
			}
		}
	}
	if (__LIB_0__::func_3() == 0)
	{
		return func_416(iParam0, -1);
	}
	return 1;
}

var func_416(int iParam0, int iParam1)//Position - 0x1FE6B
{
	var uVar0;
	int iVar1;
	uVar0 = func_417(iParam0, iParam1);
	iVar1 = iParam0;
	return BitTest(uVar0, __LIB_0__::func_160(iVar1));
}

var func_417(var uParam0, int iParam1)//Position - 0x1FE8A
{
	var uVar0;
	uVar0 = __LIB_1__::func_360(__LIB_13__::func_989(uParam0), iParam1, 0);
	return uVar0;
}

void func_445(int* iParam0)//Position - 0x20853
{
	*iParam0 = 0;
	if (func_415(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 0);
	}
	if (func_415(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 1);
	}
	if (func_415(43, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 2);
	}
	if (func_415(44, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 3);
	}
	if (func_415(45, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 4);
	}
	if (func_415(55, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 5);
	}
	if (func_415(56, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 6);
	}
	if (func_415(57, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 7);
	}
	if (func_415(58, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 8);
	}
	if (func_415(59, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 9);
	}
	if (func_415(60, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 10);
	}
	if (func_415(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 11);
	}
	if (func_415(47, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 12);
	}
	if (func_415(48, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 13);
	}
	if (func_415(49, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 14);
	}
	if (func_415(50, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 15);
	}
	if (func_415(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 16);
	}
	if (func_415(13, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 17);
	}
	if (func_415(14, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 18);
	}
	if (func_415(15, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 19);
	}
	if (func_415(16, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 20);
	}
	if (func_415(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 21);
	}
	if (func_415(77, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 22);
	}
	if (func_415(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 23);
	}
	if (func_415(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 24);
	}
	if (func_415(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 25);
	}
	if (func_415(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 26);
	}
	if (func_415(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 27);
	}
	if (func_415(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 28);
	}
	if (func_415(46, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 29);
	}
}

void func_449(char* sParam0, float fParam1)//Position - 0x20AFA
{
	APP::APP_SET_FLOAT(func_24(sParam0), fParam1);
}

void func_450(char* sParam0, char* sParam1)//Position - 0x20B0E
{
	APP::APP_SET_STRING(func_24(sParam0), sParam1);
}

void func_455(var uParam0, int iParam1)//Position - 0x20E4D
{
	*uParam0 = Global_1585857[iParam1 /*142*/].f_66;
	uParam0->f_3 = Global_1585857[iParam1 /*142*/].f_65;
	uParam0->f_4 = Global_1585857[iParam1 /*142*/].f_62;
	uParam0->f_5 = Global_1585857[iParam1 /*142*/].f_63;
	uParam0->f_6 = Global_1585857[iParam1 /*142*/].f_64;
	uParam0->f_10 = Global_1585857[iParam1 /*142*/].f_69;
	uParam0->f_16 = BitTest(Global_1585857[iParam1 /*142*/].f_77, 9);
	uParam0->f_19 = { Global_1585857[iParam1 /*142*/].f_1 };
	uParam0->f_23 = Global_1585857[iParam1 /*142*/];
	uParam0->f_7 = Global_1585857[iParam1 /*142*/].f_9[11];
	uParam0->f_8 = Global_1585857[iParam1 /*142*/].f_9[12];
	uParam0->f_9 = Global_1585857[iParam1 /*142*/].f_9[23];
	uParam0->f_11 = Global_1585857[iParam1 /*142*/].f_9[4];
	uParam0->f_12 = Global_1585857[iParam1 /*142*/].f_9[15];
	uParam0->f_13 = Global_1585857[iParam1 /*142*/].f_9[16];
	uParam0->f_14 = Global_1585857[iParam1 /*142*/].f_9[14];
	uParam0->f_15 = Global_1585857[iParam1 /*142*/].f_9[22];
	uParam0->f_18 = Global_1585857[iParam1 /*142*/].f_9[20];
	uParam0->f_17 = Global_1585857[iParam1 /*142*/].f_9[18];
	uParam0->f_40 = BitTest(Global_1585857[iParam1 /*142*/].f_103, 25);
	uParam0->f_41 = BitTest(Global_1585857[iParam1 /*142*/].f_103, 26);
	__LIB_14__::func_908(Global_1585857[iParam1 /*142*/].f_5, Global_1585857[iParam1 /*142*/].f_7, Global_1585857[iParam1 /*142*/].f_138, 1, &(uParam0->f_1));
	__LIB_14__::func_908(Global_1585857[iParam1 /*142*/].f_6, -1, Global_1585857[iParam1 /*142*/].f_139, 0, &(uParam0->f_2));
	if (BitTest(Global_1585857[iParam1 /*142*/].f_77, 13))
	{
		uParam0->f_1 = -1;
	}
	if (BitTest(Global_1585857[iParam1 /*142*/].f_77, 12))
	{
		uParam0->f_2 = -1;
	}
	uParam0->f_42 = Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_52;
}

int func_456(int iParam0, var uParam1)//Position - 0x21031
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 363)
	{
		if (func_457(iVar0, &iVar1))
		{
			if (iVar1 == iParam0)
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_457(int iParam0, int iParam1)//Position - 0x21069
{
	int iVar0;
	*iParam1 = -1;
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 <= 9)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 13 && iParam0 <= 22)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 26 && iParam0 <= 35)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 39 && iParam0 <= 48)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 52 && iParam0 <= 61)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((iParam0 >= 65 && iParam0 <= 74) || (iParam0 >= 75 && iParam0 <= 84))
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((((iParam0 >= 88 && iParam0 <= 107) || (iParam0 >= 108 && iParam0 <= 127)) || (iParam0 >= 128 && iParam0 <= 147)) || (iParam0 >= 148 && iParam0 <= 155))
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0 += 20;
	if (iParam0 >= 179 && iParam0 <= 185)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 191 && iParam0 <= 221)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 227 && iParam0 <= 235)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 237 && iParam0 <= 245)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 247 && iParam0 <= 255)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	if (iParam0 >= 258 && iParam0 <= 267)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	if (*iParam1 >= 212 || *iParam1 == -1)
	{
		*iParam1 = 0;
		return 0;
	}
	return *iParam1 != -1;
}

void func_458()//Position - 0x212DC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
	{
		iVar0 = __LIB_0__::func_155();
		if (func_460(iVar0))
		{
			iVar1 = 0;
			while (iVar1 < 10)
			{
				iVar2 = (Global_2359296[iVar0 /*5567*/].f_593.f_74[iVar1] - 1);
				if (((iVar2 >= 0 && Global_1585857[iVar2 /*142*/].f_66 != 0) && (!BitTest(Global_1585857[iVar2 /*142*/].f_103, 1) || BitTest(Global_1585857[iVar2 /*142*/].f_103, 2))) && func_216(Global_1585857[iVar2 /*142*/].f_66))
				{
					if (func_457(iVar2, &iVar3))
					{
						if (!BitTest(Global_1585857[iVar2 /*142*/].f_103, 26))
						{
							MISC::SET_BIT(&(Global_1585857[iVar2 /*142*/].f_103), 25);
						}
					}
				}
				iVar1++;
			}
			Global_2359296[iVar0 /*5567*/].f_593.f_53 = 0;
			func_459(iVar0, 0);
		}
	}
}

void func_459(int iParam0, bool bParam1)//Position - 0x213C3
{
	switch (iParam0)
	{
		case 0:
			uLocal_83 = bParam1;
			__LIB_0__::func_186(2921, bParam1, -1);
			break;
		case 1:
			bLocal_84 = bParam1;
			__LIB_0__::func_186(2922, bParam1, -1);
			break;
	}
}

int func_460(int iParam0)//Position - 0x21400
{
	switch (iParam0)
	{
		case 0:
			return uLocal_83;
			break;
		case 1:
			return bLocal_84;
			break;
	}
	return 0;
}

void func_461()//Position - 0x2142C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7[10];
	bool bVar8;
	int iVar9;
	bool bVar10;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar7[iVar0] = Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_74[iVar0];
		iVar0++;
	}
	switch (iLocal_297)
	{
		case 0:
			bVar6 = false;
			if (!__LIB_39__::func_392(PLAYER::PLAYER_ID(), 1))
			{
				iVar0 = 0;
				while (iVar0 < 10)
				{
					iVar2 = (Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_74[iVar0] - 1);
					if (iVar2 >= 0 && (Global_1585857[iVar2 /*142*/].f_66 == 0 || (BitTest(Global_1585857[iVar2 /*142*/].f_103, 1) && !BitTest(Global_1585857[iVar2 /*142*/].f_103, 2))))
					{
						Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_74[iVar0] = 0;
						iVar7[iVar0] = 0;
						iVar1 = 0;
						while (iVar1 < 10)
						{
							if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_63[iVar1] == iVar2 + 1)
							{
								Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_63[iVar1] = 0;
							}
							iVar1++;
						}
						bVar6 = true;
					}
					iVar0++;
				}
			}
			if (bVar6)
			{
				iVar1 = 0;
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (iVar7[iVar0] != 0)
					{
						Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_74[iVar1] = iVar7[iVar0];
						iVar1++;
					}
					iVar0++;
				}
				iVar0 = iVar1;
				while (iVar0 <= 9)
				{
					Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_74[iVar0] = 0;
					iVar0++;
				}
			}
			iLocal_297++;
			break;
		case 1:
			iVar2 = -1;
			if (((Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2 != Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_85 && Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2 != -1) && Global_1585857[Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2 /*142*/].f_66 != 0) && (!BitTest(Global_1585857[Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2 /*142*/].f_103, 1) || BitTest(Global_1585857[Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2 /*142*/].f_103, 2)))
			{
				iVar2 = Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2;
				Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_85 = iVar2;
			}
			else if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_86 != 0)
			{
				iVar2 = (Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_86 - 1);
				Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_86 = 0;
			}
			if (iVar2 != -1)
			{
				bVar8 = false;
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_63[iVar0] == iVar2 + 1)
					{
						bVar8 = true;
					}
					iVar0++;
				}
				if (!bVar8)
				{
					iVar9 = -1;
					iVar0 = 0;
					while (iVar0 < 10)
					{
						if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_74[iVar0] > 0)
						{
							iVar9 = iVar0;
						}
						iVar0++;
					}
					if (iVar9 < 9)
					{
						iVar9++;
					}
					iVar0 = 0;
					while (iVar0 < 10)
					{
						if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_63[iVar0] == Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_74[iVar9])
						{
							Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_63[iVar0] = iVar2 + 1;
							iVar0 = 11;
						}
						iVar0++;
					}
				}
				Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_74[0] = iVar2 + 1;
				iVar1 = 1;
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if ((iVar7[iVar0] != 0 && iVar7[iVar0] != iVar2 + 1) && iVar1 < 10)
					{
						Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_74[iVar1] = iVar7[iVar0];
						iVar1++;
					}
					iVar0++;
				}
				iVar0 = iVar1;
				while (iVar0 <= 9)
				{
					Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_74[iVar0] = 0;
					iVar0++;
				}
			}
			else if (Global_110087)
			{
				iVar3 = 0;
				iVar5 = -1;
				iVar0 = 0;
				while (iVar0 <= 9)
				{
					if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_74[iVar0] == 0)
					{
						if (iVar5 == -1)
						{
							iVar5 = iVar0;
						}
						iVar3++;
					}
					iVar0++;
				}
				if (iVar3 > 0)
				{
					iVar4 = 0;
					iVar0 = 0;
					while (iVar0 <= 362)
					{
						if (((func_457(iVar0, &iVar1) && Global_1585857[iVar0 /*142*/].f_66 != 0) && (!BitTest(Global_1585857[iVar0 /*142*/].f_103, 1) || BitTest(Global_1585857[iVar0 /*142*/].f_103, 2))) && func_216(Global_1585857[iVar0 /*142*/].f_66))
						{
							iVar4++;
						}
						if (iVar4 > (10 - iVar3))
						{
						}
						else
						{
							iVar0++;
						}
					}
					if (iVar4 > (10 - iVar3))
					{
						iVar0 = 0;
						while (iVar0 <= 362)
						{
							if (((func_457(iVar0, &iVar1) && Global_1585857[iVar0 /*142*/].f_66 != 0) && (!BitTest(Global_1585857[iVar0 /*142*/].f_103, 1) || BitTest(Global_1585857[iVar0 /*142*/].f_103, 2))) && func_216(Global_1585857[iVar0 /*142*/].f_66))
							{
								bVar10 = false;
								iVar1 = 0;
								while (iVar1 < 10)
								{
									if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_63[iVar1] == iVar0 + 1)
									{
										bVar10 = true;
										iVar1 = 11;
									}
									iVar1++;
								}
								if (!bVar10)
								{
									iVar2 = iVar0;
									iVar0 = 364;
								}
							}
							iVar0++;
						}
						if (iVar2 != -1)
						{
							iVar0 = 0;
							while (iVar0 < 10)
							{
								if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_63[iVar0] == Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_74[iVar5])
								{
									Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_63[iVar0] = iVar2 + 1;
									iVar0 = 11;
								}
								iVar0++;
							}
							Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_74[iVar5] = iVar2 + 1;
						}
					}
				}
			}
			iLocal_297++;
			break;
		default:
			iLocal_297++;
			break;
	}
	if (iLocal_297 > Global_262145.f_32527 /* Tunable: STAGGERED_MAX_FRAMES_APP_VEHICLES */)
	{
		iLocal_297 = 0;
	}
}

void func_469()//Position - 0x21C97
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	switch (iLocal_89)
	{
		case 0:
			if (bLocal_88)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_485(0, 0);
				}
				func_445(&iVar0);
				APP::APP_SET_APP("car");
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					APP::APP_SET_BLOCK(&Local_91);
					APP::APP_SET_BLOCK("mpUnlocks");
				}
				else
				{
					APP::APP_SET_BLOCK("spUnlocks");
				}
				func_198("unlockBitset1", iVar0);
				iLocal_117[0] = iVar0;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					APP::APP_CLOSE_BLOCK();
					APP::APP_CLOSE_BLOCK();
				}
				else
				{
					APP::APP_CLOSE_BLOCK();
				}
				APP::APP_CLOSE_APP();
				iLocal_89++;
			}
			break;
		case 1:
			func_414(&iVar0);
			APP::APP_SET_APP("car");
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				APP::APP_SET_BLOCK(&Local_91);
				APP::APP_SET_BLOCK("mpUnlocks");
			}
			else
			{
				APP::APP_SET_BLOCK("spUnlocks");
			}
			func_198("unlockBitset2", iVar0);
			iLocal_117[1] = iVar0;
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_BLOCK();
			}
			else
			{
				APP::APP_CLOSE_BLOCK();
			}
			APP::APP_CLOSE_APP();
			iVar1 = 0;
			while (iVar1 < 6)
			{
				iLocal_119[iVar1] = 0;
				iVar1++;
			}
			iLocal_118 = 0;
			iLocal_89++;
			break;
		case 2:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				while (iVar2 < 25 && !bVar3)
				{
					if (func_405(&iLocal_119, iLocal_118) == -1)
					{
						bVar3 = true;
						iLocal_89++;
					}
					iLocal_118++;
					iVar2++;
				}
			}
			else
			{
				iLocal_89++;
			}
			break;
		case 3:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK(&Local_91);
				APP::APP_SET_BLOCK(&Local_92);
				func_198("carColoursUnlocked0", iLocal_119[0]);
				uLocal_120[0] = iLocal_119[0];
				func_198("carColoursUnlocked1", iLocal_119[1]);
				uLocal_120[1] = iLocal_119[1];
				func_198("carColoursUnlocked2", iLocal_119[2]);
				uLocal_120[2] = iLocal_119[2];
				func_198("carColoursUnlocked3", iLocal_119[3]);
				uLocal_120[3] = iLocal_119[3];
				func_198("carColoursUnlocked4", iLocal_119[4]);
				uLocal_120[4] = iLocal_119[4];
				func_198("carColoursUnlocked5", iLocal_119[5]);
				uLocal_120[5] = iLocal_119[5];
				func_470(&iVar0);
				func_198("unlockBitset3", iVar0);
				iLocal_117[2] = iVar0;
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
			}
			else
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("spUnlocks");
				func_405(&iLocal_119, -1);
				func_198("carColoursUnlocked0", iLocal_119[0]);
				uLocal_120[0] = iLocal_119[0];
				func_198("carColoursUnlocked1", iLocal_119[1]);
				uLocal_120[1] = iLocal_119[1];
				func_198("carColoursUnlocked2", iLocal_119[2]);
				uLocal_120[2] = iLocal_119[2];
				func_198("carColoursUnlocked3", iLocal_119[3]);
				uLocal_120[3] = iLocal_119[3];
				func_198("carColoursUnlocked4", iLocal_119[4]);
				uLocal_120[4] = iLocal_119[4];
				func_198("carColoursUnlocked5", iLocal_119[5]);
				uLocal_120[5] = iLocal_119[5];
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
			}
			iLocal_89++;
			break;
		case 4:
			bLocal_88 = false;
			iLocal_89 = 0;
			break;
	}
}

void func_470(int* iParam0)//Position - 0x21F81
{
	if (func_471(18, 1) || func_415(61, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 0);
	}
	if (func_471(11, 0))
	{
		MISC::SET_BIT(iParam0, 1);
	}
	if (func_471(11, 1) || func_415(47, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 2);
	}
	if (func_471(11, 2) || func_415(48, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 3);
	}
	if (func_471(11, 3) || func_415(49, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 4);
	}
	if (func_471(11, 4) || func_415(50, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 5);
	}
	if (func_471(12, 0))
	{
		MISC::SET_BIT(iParam0, 6);
	}
	if (func_471(12, 1) || func_415(13, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 7);
	}
	if (func_471(12, 2) || func_415(14, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 8);
	}
	if (func_471(12, 3) || func_415(15, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 9);
	}
	if (func_471(12, 4) || func_415(16, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 10);
	}
	if (func_471(4, 0))
	{
		MISC::SET_BIT(iParam0, 11);
	}
	if (func_471(4, 1) || func_415(77, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 12);
	}
}

int func_471(int iParam0, int iParam1)//Position - 0x220FF
{
	int iVar0;
	if (func_474(iLocal_90, iParam0, iParam1, &iVar0))
	{
		return __LIB_15__::func_65(iVar0);
	}
	return 1;
}

bool func_474(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x226FB
{
	var uVar0;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	uVar0 = __LIB_15__::func_850(iParam0);
	*uParam3 = 0;
	if (iParam1 == 11)
	{
		if (BitTest(uVar0, 0))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 1;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 25;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 61;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 73;
			}
		}
		else if (BitTest(uVar0, 1))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 2;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 26;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 62;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 74;
			}
		}
		else if (BitTest(uVar0, 2))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 3;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 33;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 63;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 75;
			}
		}
		else if (BitTest(uVar0, 3))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 4;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 27;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 64;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 76;
			}
		}
		else if (BitTest(uVar0, 4))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 5;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 28;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 65;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 77;
			}
		}
		else if (BitTest(uVar0, 5))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 6;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 29;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 66;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 78;
			}
		}
		else if (BitTest(uVar0, 6))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 7;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 30;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 67;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 79;
			}
		}
		else if (BitTest(uVar0, 7))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 8;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 31;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 68;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 80;
			}
		}
		else if (BitTest(uVar0, 8))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 9;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 32;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 69;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 81;
			}
		}
		else if (BitTest(uVar0, 9))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 10;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 34;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 70;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 82;
			}
		}
		else if (BitTest(uVar0, 11))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 11;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 35;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 71;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 83;
			}
		}
		else if (BitTest(uVar0, 12))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 12;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 36;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 72;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 84;
			}
		}
	}
	else if (iParam1 == 18)
	{
		if (BitTest(uVar0, 0))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 49;
			}
		}
		else if (BitTest(uVar0, 1))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 50;
			}
		}
		else if (BitTest(uVar0, 2))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 51;
			}
		}
		else if (BitTest(uVar0, 3))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 52;
			}
		}
		else if (BitTest(uVar0, 4))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 53;
			}
		}
		else if (BitTest(uVar0, 5))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 54;
			}
		}
		else if (BitTest(uVar0, 6))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 55;
			}
		}
		else if (BitTest(uVar0, 7))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 56;
			}
		}
		else if (BitTest(uVar0, 8))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 57;
			}
		}
		else if (BitTest(uVar0, 9))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 58;
			}
		}
		else if (BitTest(uVar0, 11))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 59;
			}
		}
		else if (BitTest(uVar0, 12))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 60;
			}
		}
	}
	else if (iParam1 == 13)
	{
		if (BitTest(uVar0, 0))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 37;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 87;
			}
			else if (iParam2 == 3 || iParam2 > 4)
			{
				*uParam3 = 111;
			}
		}
		else if (BitTest(uVar0, 1))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 38;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 86;
			}
			else if (iParam2 == 3 || iParam2 >= 4)
			{
				*uParam3 = 110;
			}
		}
		else if (BitTest(uVar0, 2))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 39;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 93;
			}
			else if (iParam2 == 3 || iParam2 >= 4)
			{
				*uParam3 = 117;
			}
		}
		else if (BitTest(uVar0, 3))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 40;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 85;
			}
			else if (iParam2 == 3 || iParam2 >= 4)
			{
				*uParam3 = 109;
			}
		}
		else if (BitTest(uVar0, 4))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 41;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 92;
			}
			else if (iParam2 == 3 || iParam2 >= 4)
			{
				*uParam3 = 116;
			}
		}
		else if (BitTest(uVar0, 5))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 42;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 94;
			}
			else if (iParam2 == 3 || iParam2 >= 4)
			{
				*uParam3 = 118;
			}
		}
		else if (BitTest(uVar0, 6))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 43;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 95;
			}
			else if (iParam2 == 3 || iParam2 >= 4)
			{
				*uParam3 = 119;
			}
		}
		else if (BitTest(uVar0, 7))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 44;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 96;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 120;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 120;
			}
		}
		else if (BitTest(uVar0, 8))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 45;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 88;
			}
			else if (iParam2 == 3 || iParam2 >= 4)
			{
				*uParam3 = 112;
			}
		}
		else if (BitTest(uVar0, 9))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 46;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 89;
			}
			else if (iParam2 == 3 || iParam2 >= 4)
			{
				*uParam3 = 113;
			}
		}
		else if (BitTest(uVar0, 11))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 47;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 90;
			}
			else if (iParam2 == 3 || iParam2 >= 4)
			{
				*uParam3 = 114;
			}
		}
		else if (BitTest(uVar0, 12))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 48;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 91;
			}
			else if (iParam2 == 3 || iParam2 >= 4)
			{
				*uParam3 = 115;
			}
		}
	}
	else if (iParam1 == 12)
	{
		if (BitTest(uVar0, 0))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 13;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 99;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 123;
			}
		}
		else if (BitTest(uVar0, 1))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 14;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 98;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 122;
			}
		}
		else if (BitTest(uVar0, 2))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 15;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 105;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 129;
			}
		}
		else if (BitTest(uVar0, 3))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 16;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 97;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 121;
			}
		}
		else if (BitTest(uVar0, 4))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 17;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 104;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 128;
			}
		}
		else if (BitTest(uVar0, 5))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 18;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 106;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 130;
			}
		}
		else if (BitTest(uVar0, 6))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 19;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 107;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 131;
			}
		}
		else if (BitTest(uVar0, 7))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 20;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 108;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 132;
			}
		}
		else if (BitTest(uVar0, 8))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 21;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 100;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 124;
			}
		}
		else if (BitTest(uVar0, 9))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 22;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 101;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 125;
			}
		}
		else if (BitTest(uVar0, 11))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 23;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 102;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 126;
			}
		}
		else if (BitTest(uVar0, 12))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 24;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 103;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 127;
			}
		}
	}
	return *uParam3 != 0;
}

void func_485(int iParam0, bool bParam1)//Position - 0x24766
{
	int iVar0;
	if (bParam1)
	{
		__LIB_12__::func_761(39, 1, 0);
		__LIB_12__::func_761(40, 1, 0);
		__LIB_12__::func_761(41, 1, 0);
		__LIB_12__::func_761(42, 1, 0);
		__LIB_12__::func_761(43, 1, 0);
	}
	func_486(1, iParam0, 0);
	func_486(2, iParam0, 1);
	func_486(3, iParam0, 2);
	func_486(4, iParam0, 3);
	func_486(103, iParam0, 3);
	func_486(5, iParam0, 0);
	func_486(6, iParam0, 0);
	func_486(7, iParam0, 0);
	func_486(8, iParam0, 0);
	func_486(9, iParam0, 0);
	func_486(10, iParam0, 0);
	func_486(11, iParam0, 0);
	func_486(12, iParam0, 0);
	func_486(13, iParam0, 0);
	func_486(14, iParam0, 2);
	func_486(15, iParam0, 3);
	func_486(16, iParam0, 3);
	func_486(17, iParam0, 0);
	func_486(18, iParam0, 1);
	func_486(19, iParam0, 2);
	func_486(20, iParam0, 2);
	func_486(101, iParam0, 3);
	func_486(102, iParam0, 3);
	func_486(21, iParam0, 0);
	func_486(22, iParam0, 1);
	func_486(23, iParam0, 2);
	func_486(24, iParam0, 3);
	func_486(25, iParam0, 0);
	func_486(26, iParam0, 1);
	func_486(27, iParam0, 2);
	func_486(28, iParam0, 3);
	func_486(29, iParam0, 0);
	func_486(30, iParam0, 0);
	func_486(31, iParam0, 1);
	func_486(32, iParam0, 2);
	func_486(33, iParam0, 3);
	func_486(34, iParam0, 0);
	func_486(35, iParam0, 0);
	func_486(36, iParam0, 0);
	func_486(37, iParam0, 0);
	func_486(38, iParam0, 0);
	func_486(39, iParam0, 0);
	func_486(40, iParam0, 0);
	func_486(41, iParam0, 0);
	func_486(42, iParam0, 0);
	func_486(43, iParam0, 0);
	func_486(44, iParam0, 2);
	func_486(45, iParam0, 3);
	func_486(99, iParam0, 1);
	func_486(46, iParam0, 1);
	func_486(55, iParam0, 0);
	func_486(60, iParam0, 0);
	func_486(59, iParam0, 1);
	func_486(58, iParam0, 1);
	func_486(56, iParam0, 2);
	func_486(57, iParam0, 3);
	func_486(47, iParam0, 0);
	func_486(48, iParam0, 1);
	func_486(49, iParam0, 2);
	func_486(50, iParam0, 3);
	func_486(51, iParam0, 0);
	func_486(52, iParam0, 1);
	func_486(53, iParam0, 2);
	func_486(54, iParam0, 3);
	func_486(106, iParam0, 3);
	func_486(61, iParam0, 0);
	func_486(62, iParam0, 1);
	func_486(63, iParam0, 1);
	func_486(64, iParam0, 2);
	func_486(65, iParam0, 2);
	func_486(66, iParam0, 0);
	func_486(67, iParam0, 1);
	func_486(68, iParam0, 2);
	func_486(69, iParam0, 3);
	func_486(70, iParam0, 3);
	func_486(71, iParam0, 3);
	func_486(72, iParam0, 0);
	func_486(73, iParam0, 0);
	func_486(74, iParam0, 1);
	func_486(75, iParam0, 2);
	func_486(76, iParam0, 3);
	func_486(77, iParam0, 0);
	func_486(78, iParam0, 1);
	func_486(79, iParam0, 2);
	func_486(80, iParam0, 3);
	func_486(100, iParam0, 3);
	func_486(81, iParam0, 0);
	func_486(82, iParam0, 1);
	func_486(83, iParam0, 2);
	func_486(84, iParam0, 3);
	func_486(105, iParam0, 3);
	func_486(85, iParam0, 0);
	func_486(86, iParam0, 0);
	func_486(87, iParam0, 0);
	func_486(88, iParam0, 0);
	func_486(104, iParam0, 0);
	func_486(91, iParam0, 0);
	func_486(92, iParam0, 1);
	func_486(93, iParam0, 2);
	func_486(94, iParam0, 3);
	func_486(95, iParam0, 0);
	func_486(96, iParam0, 1);
	func_486(97, iParam0, 2);
	func_486(98, iParam0, 3);
	if (iParam0 >= 3)
	{
		iVar0 = 0;
		while (iVar0 < 90)
		{
			func_486(iVar0, iParam0, 3);
			iVar0++;
		}
	}
}

void func_486(int iParam0, int iParam1, int iParam2)//Position - 0x24B5E
{
	int iVar0;
	if (iParam1 >= iParam2)
	{
		if (!BitTest(Global_113386.f_2363.f_539.f_2241[(iParam0 / 32)], (iParam0 % 32)))
		{
			iVar0 = 0;
			while (iVar0 < Global_113386.f_20118)
			{
				Global_113386.f_20118[iVar0 /*43*/].f_42 = 1;
				iVar0++;
			}
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2241[(iParam0 / 32)]), (iParam0 % 32));
			if (iParam2 == 0)
			{
				func_487(0, iParam0, "", 0, 0, 2);
			}
		}
	}
}

void func_487(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x24BE1
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
	if (__LIB_13__::func_994(iParam0) && func_415(iParam1, -1, 0, -1))
	{
		if (iParam5 == 8 && iParam4 == 2)
		{
			iParam3 = (iParam3 - 20);
		}
		if ((iParam5 == 15 && iParam3 > 21) && !__LIB_13__::func_988(iParam0))
		{
			iParam3 = (iParam3 - 21);
		}
		if (iParam0 == joaat("oppressor2"))
		{
			if (iParam5 == 23)
			{
				if (iParam3 > 2)
				{
					iParam3 = (iParam3 - 26);
				}
			}
		}
		else if (iParam0 == joaat("strikeforce"))
		{
			if (iParam5 == 18)
			{
				if (iParam3 > 2)
				{
					iParam3 = (iParam3 - 26);
				}
			}
		}
		if (iParam5 == 58 && iParam4 == 2)
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam2, "CMOD_TYR_LG" /* GXT: Low Grip Tires */))
			{
				if (__LIB_2__::func_628(iParam0) && __LIB_2__::func_904(PLAYER::PLAYER_ID()))
				{
					if (!__LIB_0__::func_137(31778, -1))
					{
						__LIB_0__::func_186(31778, 1, -1);
					}
				}
			}
		}
	}
	if (iParam1 == -1)
	{
		if (!__LIB_13__::func_994(iParam0))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam0 == 0)
				{
					iVar0 = 0;
					while (iVar0 < 306)
					{
						iVar1 = iVar0 * 3;
						iVar2 = __LIB_13__::func_987(MISC::GET_HASH_KEY(sParam2));
						if (iVar2 != -1)
						{
							MISC::SET_BIT(&(Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2690[(iVar1 + (iVar2 / 32))]), (iVar2 % 32));
						}
						iVar0++;
					}
				}
				else
				{
					iVar3 = __LIB_13__::func_986(iParam0);
					if (iVar3 != -1)
					{
						iVar4 = iVar3 * 3;
						iVar5 = __LIB_13__::func_987(MISC::GET_HASH_KEY(sParam2));
						if (iVar5 != -1)
						{
							MISC::SET_BIT(&(Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2690[(iVar4 + (iVar5 / 32))]), (iVar5 % 32));
						}
					}
					iVar6 = __LIB_13__::func_985(iParam0, iParam3, iParam4, iParam5);
					if (iVar6 > 0)
					{
						MISC::SET_BIT(&(Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_3609[(iVar6 / 32)]), (iVar6 % 32));
					}
				}
			}
			return;
		}
		else if (func_415(iParam1, -1, 0, -1) || iParam1 == -1)
		{
			iVar7 = __LIB_13__::func_985(iParam0, iParam3, iParam4, iParam5);
			if (iVar7 > 0)
			{
				MISC::SET_BIT(&(Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_3609[(iVar7 / 32)]), (iVar7 % 32));
			}
		}
	}
	else if (__LIB_13__::func_994(iParam0) && func_415(iParam1, -1, 0, -1))
	{
		iVar8 = __LIB_13__::func_985(iParam0, iParam3, iParam4, iParam5);
		if (iVar8 > 0)
		{
			MISC::SET_BIT(&(Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_3609[(iVar8 / 32)]), (iVar8 % 32));
		}
	}
	if (iParam0 == 0)
	{
		iVar9 = 0;
		while (iVar9 < 306)
		{
			if (func_415(iParam1, -1, 0, -1))
			{
				iVar10 = (iVar9 * 4 + (iParam1 / 32));
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					MISC::SET_BIT(&(Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_47[iVar10]), (iParam1 % 32));
				}
				else
				{
					MISC::SET_BIT(&(Global_113386.f_668.f_87[iVar10]), (iParam1 % 32));
				}
			}
			iVar9++;
		}
	}
	else if (func_415(iParam1, -1, 0, -1))
	{
		iVar11 = __LIB_13__::func_986(iParam0);
		if (iVar11 != -1)
		{
			iVar12 = (iVar11 * 4 + (iParam1 / 32));
			iVar13 = (iParam1 % 32);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if ((((iParam0 == joaat("avarus") || iParam0 == joaat("chimera")) || iParam0 == joaat("esskey")) && iParam1 == 1) || ((iParam1 == 72 || iParam1 == 66) && iParam0 == joaat("esskey")))
				{
					iVar13 = (iVar13 - 1);
				}
				if (iParam0 == joaat("specter2") && (iParam1 == 21 || iParam1 == 72))
				{
					iVar13 = (iVar13 - 1);
				}
				if (iParam0 == joaat("trailerlarge") && iParam1 == 85)
				{
					iVar13++;
				}
				if (iParam0 == joaat("bombushka") && iParam1 == 21)
				{
					iVar13 = (iVar13 - 1);
				}
				if (iVar13 >= 0)
				{
					MISC::SET_BIT(&(Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_47[iVar12]), iVar13);
				}
			}
			else
			{
				MISC::SET_BIT(&(Global_113386.f_668.f_87[iVar12]), iVar13);
			}
		}
	}
}

void func_501()//Position - 0x3E112
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[16];
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	char cVar11[16];
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			bVar0 = false;
			iVar1 = 0;
			if (iLocal_79)
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("appdata");
				iVar2 = func_23("playerNameMP");
				if (iVar2 != 0 && iVar2 != MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())))
				{
					iVar1 = 1;
				}
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
				iLocal_79 = 0;
			}
			if (iVar1 || iLocal_81)
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("appdata");
				func_198("playerNameMP", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
				bVar0 = true;
				func_459(0, 1);
				func_459(1, 1);
				iLocal_81 = 0;
				APP::APP_CLOSE_BLOCK();
				if (bVar0)
				{
					iVar3 = 0;
					while (iVar3 < 5)
					{
						StringCopy(&cVar5, "multiplayer", 16);
						StringIntConCat(&cVar5, iVar3, 16);
						APP::APP_SET_BLOCK(&cVar5);
						iVar4 = 0;
						while (iVar4 < 10)
						{
							StringCopy(&cVar5, "vehicle", 16);
							StringIntConCat(&cVar5, iVar4, 16);
							APP::APP_SET_BLOCK(&cVar5);
							func_198("carUnlocked", 0);
							APP::APP_CLOSE_BLOCK();
							iVar4++;
						}
						APP::APP_CLOSE_BLOCK();
						iVar3++;
					}
				}
				APP::APP_CLOSE_APP();
			}
		}
		else
		{
			bVar6 = false;
			iVar7 = 0;
			if (iLocal_78)
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("appdata");
				iVar8 = func_23("playerNameSP");
				if (iVar8 != 0 && iVar8 != MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())))
				{
					iVar7 = 1;
				}
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
				iLocal_78 = 0;
			}
			if (iVar7 || iLocal_80)
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("appdata");
				func_198("playerNameSP", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
				iLocal_94 = 1;
				iLocal_80 = 0;
				bVar6 = true;
				APP::APP_CLOSE_BLOCK();
				if (bVar6)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						StringCopy(&cVar11, "multiplayer", 16);
						StringIntConCat(&cVar11, iVar9, 16);
						APP::APP_SET_BLOCK(&cVar11);
						iVar10 = 0;
						while (iVar10 < 10)
						{
							StringCopy(&cVar11, "vehicle", 16);
							StringIntConCat(&cVar11, iVar10, 16);
							APP::APP_SET_BLOCK(&cVar11);
							func_198("carUnlocked", 0);
							APP::APP_CLOSE_BLOCK();
							iVar10++;
						}
						APP::APP_CLOSE_BLOCK();
						iVar9++;
					}
				}
				APP::APP_CLOSE_APP();
			}
		}
	}
}

void func_502()//Position - 0x3E312
{
	int iVar0;
	char cVar1[16];
	char cVar2[16];
	int iVar3;
	struct<3> Var4;
	int iVar5;
	struct<3> Var6;
	int iVar7;
	iVar0 = __LIB_0__::func_155();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!Global_2359296[iVar0 /*5567*/].f_593.f_53)
		{
			APP::APP_SET_APP("car");
			StringCopy(&cVar1, "multiplayer", 16);
			StringIntConCat(&cVar1, __LIB_0__::getGlobal_1574918(), 16);
			APP::APP_SET_BLOCK(&cVar1);
			iVar3 = 0;
			while (iVar3 < 10)
			{
				StringCopy(&cVar1, "vehicle", 16);
				StringIntConCat(&cVar1, iVar3, 16);
				APP::APP_SET_BLOCK(&cVar1);
				func_198("carUnlocked", 0);
				APP::APP_CLOSE_BLOCK();
				iVar3++;
			}
			APP::APP_CLOSE_BLOCK();
			APP::APP_SET_BLOCK("appdata");
			StringCopy(&Var4, "orderCount_mp", 24);
			StringIntConCat(&Var4, __LIB_0__::getGlobal_1574918(), 24);
			func_198(&Var4, 0);
			APP::APP_CLOSE_BLOCK();
			iLocal_95 = 1;
			SYSTEM::SETTIMERA(0);
			APP::APP_CLOSE_APP();
			Global_2359296[iVar0 /*5567*/].f_593.f_53 = 1;
		}
		if (iLocal_76 >= 0 && BitTest(Global_1585857[iLocal_76 /*142*/].f_103, 26))
		{
			iVar5 = 0;
			while (iVar5 < 10)
			{
				if ((Global_2359296[iVar0 /*5567*/].f_593.f_63[iVar5] - 1) == iLocal_76)
				{
					APP::APP_SET_APP("car");
					StringCopy(&cVar1, "multiplayer", 16);
					StringIntConCat(&cVar1, __LIB_0__::getGlobal_1574918(), 16);
					APP::APP_SET_BLOCK(&cVar1);
					StringCopy(&cVar1, "vehicle", 16);
					StringIntConCat(&cVar1, iVar5, 16);
					APP::APP_SET_BLOCK(&cVar1);
					func_198("carUnlocked", 0);
					APP::APP_CLOSE_BLOCK();
					iLocal_95 = 1;
					SYSTEM::SETTIMERA(0);
					APP::APP_CLOSE_BLOCK();
					APP::APP_CLOSE_APP();
					MISC::CLEAR_BIT(&(Global_1585857[iLocal_76 /*142*/].f_103), 25);
					MISC::CLEAR_BIT(&(Global_1585857[iLocal_76 /*142*/].f_103), 26);
				}
				iVar5++;
			}
		}
		switch (iLocal_86)
		{
			case 0:
				if (Global_2359296[iVar0 /*5567*/].f_593.f_54)
				{
					APP::APP_DELETE_APP_DATA("car");
					bLocal_85 = true;
					iLocal_86++;
				}
				else
				{
					bLocal_85 = false;
				}
				break;
			case 1:
				if (APP::APP_GET_DELETED_FILE_STATUS() != 1)
				{
					if (APP::APP_GET_DELETED_FILE_STATUS() != 3)
					{
						Global_2359296[iVar0 /*5567*/].f_593.f_54 = 0;
					}
					APP::APP_SET_APP("car");
					StringCopy(&cVar2, "mp", 16);
					StringIntConCat(&cVar2, __LIB_0__::getGlobal_1574918(), 16);
					StringConCat(&cVar2, "_order", 16);
					APP::APP_SET_BLOCK(&cVar2);
					APP::APP_CLEAR_BLOCK();
					APP::APP_CLOSE_BLOCK();
					APP::APP_SET_BLOCK("appdata");
					StringCopy(&Var6, "orderCount_mp", 24);
					StringIntConCat(&Var6, __LIB_0__::getGlobal_1574918(), 24);
					func_198(&Var6, Global_2359296[iVar0 /*5567*/].f_593.f_61);
					APP::APP_CLOSE_BLOCK();
					APP::APP_CLOSE_APP();
					iLocal_86 = 0;
				}
				break;
		}
	}
	else
	{
		if (!Global_113386.f_20118.f_260)
		{
			APP::APP_SET_APP("car");
			APP::APP_SET_BLOCK("singleplayer0");
			func_198("carUnlocked", 0);
			APP::APP_CLOSE_BLOCK();
			APP::APP_SET_BLOCK("singleplayer2");
			func_198("carUnlocked", 0);
			APP::APP_CLOSE_BLOCK();
			APP::APP_SET_BLOCK("appdata");
			func_198("orderCount_sp0", 0);
			func_198("orderCount_sp1", 0);
			func_198("orderCount_sp2", 0);
			APP::APP_CLOSE_BLOCK();
			iLocal_95 = 1;
			SYSTEM::SETTIMERA(0);
			APP::APP_CLOSE_APP();
			APP::APP_SET_APP("dog");
			APP::APP_SET_BLOCK("saveData");
			func_198("chopSafeHouse", 0);
			APP::APP_SAVE_DATA();
			APP::APP_CLOSE_BLOCK();
			APP::APP_CLOSE_APP();
			Global_113386.f_20118.f_273[0] = 0;
			Global_113386.f_20118.f_273[1] = 0;
			Global_113386.f_20118.f_273[2] = 0;
			Global_113386.f_20118.f_260 = 1;
		}
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Global_113386.f_20118[iVar7 /*43*/].f_41)
			{
				APP::APP_SET_APP("car");
				StringCopy(&cVar1, "singleplayer", 16);
				StringIntConCat(&cVar1, iVar7, 16);
				APP::APP_SET_BLOCK(&cVar1);
				func_198("carUnlocked", 0);
				iLocal_95 = 1;
				SYSTEM::SETTIMERA(0);
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
				Global_113386.f_20118.f_273[iVar7] = 0;
				Global_113386.f_20118[iVar7 /*43*/].f_41 = 0;
				Global_113386.f_20118[iVar7 /*43*/].f_40 = 0;
				Global_113386.f_20118[iVar7 /*43*/] = 0;
				Global_113386.f_20118.f_273[iVar7] = 0;
			}
			iVar7++;
		}
		switch (iLocal_86)
		{
			case 0:
				if (Global_113386.f_20118.f_265)
				{
					APP::APP_DELETE_APP_DATA("car");
					bLocal_85 = true;
					iLocal_86++;
				}
				else
				{
					bLocal_85 = false;
				}
				break;
			case 1:
				if (APP::APP_GET_DELETED_FILE_STATUS() != 1)
				{
					if (APP::APP_GET_DELETED_FILE_STATUS() != 3)
					{
						Global_113386.f_20118.f_265 = 0;
					}
					APP::APP_SET_APP("car");
					StringCopy(&cVar2, "sp", 16);
					StringIntConCat(&cVar2, Global_113386.f_20118.f_266, 16);
					StringConCat(&cVar2, "_order", 16);
					APP::APP_SET_BLOCK(&cVar2);
					APP::APP_CLEAR_BLOCK();
					APP::APP_CLOSE_BLOCK();
					APP::APP_SET_BLOCK("appdata");
					func_198("orderCount_sp0", Global_113386.f_20118.f_285[0]);
					func_198("orderCount_sp1", Global_113386.f_20118.f_285[1]);
					func_198("orderCount_sp2", Global_113386.f_20118.f_285[2]);
					APP::APP_CLOSE_BLOCK();
					APP::APP_CLOSE_APP();
					iLocal_86 = 0;
				}
				break;
			}
	}
}

void func_504()//Position - 0x3E7C8
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!APP::APP_HAS_LINKED_SOCIAL_CLUB_ACCOUNT() || !APP::APP_HAS_SYNCED_DATA("car"))
	{
		iLocal_82 = 0;
		return;
	}
	else
	{
		if (!iLocal_82)
		{
			iLocal_80 = 1;
			iLocal_81 = 1;
			iLocal_78 = 1;
			iLocal_79 = 1;
			Global_110084 = 1;
		}
		iLocal_82 = 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__::func_3() != 0)
		{
			return;
		}
		if (!__LIB_0__::func_438())
		{
			return;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__::func_3() == 0)
		{
			iLocal_72 = 1;
		}
		if (!Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_87)
		{
			iVar0 = 9;
			while (iVar0 >= 0)
			{
				Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_63[iVar0] = iVar0 + 1;
				Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_74[iVar0] = iVar0 + 1;
				Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_41[iVar0] = 0;
				iVar0 = (iVar0 + -1);
			}
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_85 = -1;
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_87 = 1;
		}
		uLocal_83 = __LIB_0__::func_137(2921, -1);
		bLocal_84 = __LIB_0__::func_137(2922, -1);
		if (__LIB_0__::func_116())
		{
			if (!__LIB_0__::func_137(3612, -1))
			{
				func_459(0, 1);
				func_459(1, 1);
				__LIB_0__::func_186(3612, 1, -1);
			}
		}
		else if (__LIB_0__::func_137(3612, -1))
		{
			__LIB_0__::func_186(3612, 0, -1);
		}
	}
	else
	{
		iLocal_72 = 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_36)
		{
			iLocal_296 = 1;
		}
		if (__LIB_1__::func_342(187, -1))
		{
			iLocal_296 = 1;
			__LIB_1__::func_348(187, 0, -1, 1);
		}
		if (!Global_262145.f_10589 /* Tunable: DISABLE_SC_NUMBER_PLATE_INITIAL_GET */ && !Global_110086)
		{
			iLocal_296 = 1;
		}
	}
	else if ((Global_113386.f_20118.f_130[0 /*41*/].f_36 || Global_113386.f_20118.f_130[1 /*41*/].f_36) || Global_113386.f_20118.f_130[2 /*41*/].f_36)
	{
		iLocal_296 = 1;
	}
	iLocal_86 = 0;
	iLocal_74 = 0;
	iLocal_75 = 0;
	iLocal_76 = 0;
	iLocal_112 = 0;
	bLocal_88 = false;
	iLocal_89 = 0;
	if (!iLocal_113 || Global_109918)
	{
		Global_113386.f_20118.f_264 = 1;
		iLocal_94 = 0;
		APP::APP_SET_APP("car");
		APP::APP_SET_BLOCK("appdata");
		iVar1 = func_23("appUID");
		if (iVar1 != Global_113386.f_20118.f_272)
		{
			iLocal_94 = 1;
		}
		APP::APP_CLOSE_BLOCK();
		APP::APP_CLOSE_APP();
		iVar2 = 0;
		while (iVar2 < Global_113386.f_20118.f_130)
		{
			iLocal_100[iVar2] = 0;
			iLocal_101[iVar2] = 0;
			iLocal_102[iVar2] = 0;
			iVar2++;
		}
		iLocal_103 = 0;
	}
	Global_109918 = 0;
	iLocal_113 = 1;
	iLocal_71 = 1;
}

void func_506()//Position - 0x3EB07
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_110088)
	{
		NETWORK::NETWORK_BAIL(49, 0, 0);
	}
}

void func_507()//Position - 0x3EB27
{
	func_513();
	switch (iLocal_66)
	{
		case 0:
			func_512();
			break;
		case 1:
			func_510();
			break;
		case 2:
			func_508();
			break;
	}
}

void func_508()//Position - 0x3EB61
{
	func_509(0);
}

void func_509(int iParam0)//Position - 0x3EB6E
{
	iLocal_66 = iParam0;
}

void func_510()//Position - 0x3EB7A
{
	struct<3> Var0;
	switch (iLocal_67)
	{
		case 0:
			iLocal_69 = iLocal_68;
			SCRIPT::REQUEST_SCRIPT("tuneables_processing");
			if (SCRIPT::HAS_SCRIPT_LOADED("tuneables_processing") && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(1424) > 0)
			{
				Var0.f_0 = func_511(iLocal_68);
				Var0.f_1 = func_511(iLocal_70);
				Var0.f_2 = iLocal_68 == 1;
				SYSTEM::START_NEW_SCRIPT_WITH_ARGS("tuneables_processing", &Var0, 3, 1424);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("tuneables_processing");
				iLocal_67++;
			}
			break;
		case 1:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tuneables_processing")) == 0)
			{
				func_509(2);
				iLocal_67 = 0;
			}
			break;
	}
}

int func_511(int iParam0)//Position - 0x3EC0F
{
	if (iParam0 >= 22)
	{
		return (28 + (iParam0 - 22));
	}
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 15;
		case 4:
			return 16;
		case 5:
			return 9;
		case 6:
			return 10;
		case 7:
			return 11;
		case 8:
			return 12;
		case 9:
			return 13;
		case 10:
			return 14;
		case 11:
			return 17;
		case 12:
			return 18;
		case 13:
			return 19;
		case 18:
			return 26;
		case 14:
			return 20;
		case 15:
			return 21;
		case 16:
			return 22;
		case 19:
			return 23;
		case 17:
			return 24;
		case 20:
			return 25;
		case 21:
			return 27;
		default:
	}
	return 0;
}

void func_512()//Position - 0x3ED20
{
	if (iLocal_68 != iLocal_69 || Global_262144)
	{
		Global_262144 = 0;
		func_509(1);
	}
}

void func_513()//Position - 0x3ED44
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	if (((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !__LIB_1__::func_16()) && !__LIB_5__::func_133()) && __LIB_0__::func_3() == -1)
	{
		iLocal_68 = 0;
		iLocal_70 = 21;
	}
	else
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && __LIB_1__::func_623())
		{
			return;
		}
		if (Global_1945949)
		{
			return;
		}
		iLocal_68 = 1;
		iLocal_70 = 21;
		iVar0 = __LIB_1__::func_448(PLAYER::PLAYER_ID());
		if (iVar0 != -1)
		{
			iVar1 = -1;
			if (__LIB_0__::func_936(PLAYER::PLAYER_ID()))
			{
				iVar1 = NETWORK::NETWORK_GET_CONTENT_MODIFIER_LIST_ID(MISC::GET_HASH_KEY(&(Global_1048576.f_44)));
			}
			if (iVar1 == -1)
			{
				iVar1 = NETWORK::NETWORK_GET_CONTENT_MODIFIER_LIST_ID(MISC::GET_HASH_KEY(&(Global_4718592.f_116811)));
			}
			iLocal_70 = func_544(iVar1);
			if (iVar0 == 0)
			{
				if (__LIB_1__::func_29(PLAYER::PLAYER_ID(), 0, 0) && __LIB_12__::func_668(Global_4718592.f_116524, Global_4718592.f_168757))
				{
					iLocal_68 = 20;
				}
				else if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
				{
					iLocal_68 = 12;
				}
				else if (__LIB_1__::func_195(PLAYER::PLAYER_ID()))
				{
					iLocal_68 = 13;
				}
				else if (__LIB_2__::func_294(PLAYER::PLAYER_ID()))
				{
					iLocal_68 = 14;
				}
				else if (__LIB_1__::func_728(PLAYER::PLAYER_ID()))
				{
					iLocal_68 = 16;
				}
				else if (__LIB_18__::func_681(PLAYER::PLAYER_ID()))
				{
					iLocal_68 = 15;
				}
				else if (__LIB_1__::func_193(PLAYER::PLAYER_ID()))
				{
					iLocal_68 = 19;
				}
				else if (__LIB_0__::func_970(PLAYER::PLAYER_ID()) || __LIB_0__::func_971(PLAYER::PLAYER_ID()))
				{
					iLocal_68 = 18;
				}
				else
				{
					iLocal_68 = 3;
				}
			}
			if (iVar0 == 3)
			{
				iLocal_68 = 4;
			}
			if (iVar0 == 1 || Global_1836575)
			{
				iLocal_68 = 2;
			}
			if (iVar0 == 2)
			{
				iLocal_68 = 5;
				if (Global_4718592.f_107227 == 0 || Global_4718592.f_107227 == 1)
				{
					iLocal_68 = 5;
				}
				if (((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19)
				{
					iLocal_68 = 10;
				}
				if (Global_4718592.f_107227 == 2 || Global_4718592.f_107227 == 3)
				{
					iLocal_68 = 9;
				}
				if (Global_4718592.f_107227 == 4 || Global_4718592.f_107227 == 5)
				{
					iLocal_68 = 8;
				}
				if ((Global_4718592.f_107227 == 8 || Global_4718592.f_107227 == 9) || Global_1836601)
				{
					iLocal_68 = 11;
				}
				if (Global_4718592.f_107227 == 12 || Global_4718592.f_107227 == 13)
				{
					if (Global_4718592.f_107230 == 8)
					{
						iLocal_68 = 6;
					}
					else
					{
						iLocal_68 = 7;
					}
				}
			}
			if (iVar0 == 8)
			{
				iLocal_68 = 11;
			}
		}
		if (__LIB_0__::func_629())
		{
			iLocal_68 = 1;
			iLocal_70 = 21;
		}
		if ((((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !__LIB_1__::func_16()) && !__LIB_5__::func_133()) && !__LIB_0__::func_3() == -1) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (Global_2723628 > 10000)
			{
				CLOCK::GET_POSIX_TIME(&Var2, &(Var2.f_1), &(Var2.f_2), &(Var2.f_3), &(Var2.f_4), &(Var2.f_5));
				if ((Var2.f_0 > Global_2723621 || Var2.f_1 > Global_2723621.f_1) || Var2.f_2 > Global_2723621.f_2)
				{
					CLOCK::GET_POSIX_TIME(&Global_2723621, &(Global_2723621.f_1), &(Global_2723621.f_2), &(Global_2723621.f_3), &(Global_2723621.f_4), &(Global_2723621.f_5));
					func_509(1);
					Global_2723628 = 0;
				}
				Global_2723628 = 0;
			}
			else
			{
				Global_2723628++;
			}
		}
	}
}

int func_544(int iParam0)//Position - 0x3F8EE
{
	if (iParam0 >= 0)
	{
		return (22 + iParam0);
	}
	return 21;
}

void func_548()//Position - 0x3F938
{
	if (iLocal_71 != 0 && iLocal_72 != 2)
	{
		if (iLocal_72 == 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_72 = 2;
			}
		}
		else if (iLocal_72 == 1)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !__LIB_1__::func_16()) && !__LIB_34__::func_659())
			{
				iLocal_72 = 2;
			}
			if (__LIB_0__::func_3() != 0)
			{
				iLocal_72 = 2;
			}
		}
		if (!APP::APP_HAS_LINKED_SOCIAL_CLUB_ACCOUNT())
		{
			iLocal_72 = 2;
		}
		if (Global_109918)
		{
			iLocal_72 = 2;
		}
		if (iLocal_72 == 2)
		{
			iLocal_71 = 0;
		}
	}
}

