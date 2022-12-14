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
	var uLocal_35 = 10;
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
	int iLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	struct<3> Local_80 = { 0, 0, 0 } ;
	float fLocal_81 = 0f;
	struct<61> Local_82 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_83 = { 0, 0, 0, 0 } ;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int* iLocal_89 = NULL;
	int* iLocal_90 = NULL;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	char* sLocal_97 = NULL;
	var uLocal_98 = 16;
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
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	float fLocal_267 = 0f;
	char* sLocal_268[5] = { NULL, NULL, NULL, NULL, NULL };
	char* sLocal_269[31] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_270[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_271[32] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_272[3] = { NULL, NULL, NULL };
	char* sLocal_273[4] = { NULL, NULL, NULL, NULL };
	char* sLocal_274 = NULL;
	int iLocal_275[5] = { 0, 0, 0, 0, 0 };
	int iLocal_276[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_277[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_278[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_279[3] = { 0, 0, 0 };
	bool bLocal_280 = 0;
	bool bLocal_281 = 0;
	int iLocal_282[4] = { 0, 0, 0, 0 };
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	struct<3> Local_295[3];
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	int iLocal_299 = 0;
	struct<3> Local_300 = { 0, 0, 0 } ;
	float fLocal_301 = 0f;
	struct<3> Local_302 = { 0, 0, 0 } ;
	float fLocal_303 = 0f;
	int iLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = -1;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 1000;
	var uLocal_315 = 1000;
	var uLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	struct<61> Local_322 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	uLocal_78 = __LIB_2__::func_910(68);
	iLocal_79 = joaat("landstalker");
	Local_80 = { -1473.3762f, 517.8441f, 116.8854f };
	fLocal_81 = 97.3011f;
	iLocal_95 = joaat("dominator");
	iLocal_96 = joaat("landstalker");
	sLocal_97 = "Dreyfuss";
	iLocal_264 = 1;
	fLocal_267 = 25f;
	sLocal_274 = "DREY1_WRECK";
	Local_300 = { -1473.063f, 524.9622f, 117.0789f };
	fLocal_301 = 105.5732f;
	Local_302 = { -1433.9927f, 528.9166f, 118.1719f };
	fLocal_303 = 179.8441f;
	Local_82 = { ScriptParam_322 };
	__LIB_14__::func_801(&Local_82);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_14__::func_872(1);
		func_451();
	}
	if (__LIB_0__::func_323())
	{
		Global_78564 = 1;
		iLocal_77 = 0;
		while (!func_443(&Local_82))
		{
			SYSTEM::WAIT(0);
		}
		Global_78564 = 0;
	}
	iLocal_317 = __LIB_37__::func_617();
	__LIB_37__::func_618(0);
	if (__LIB_0__::func_121(Local_82.f_28[0]))
	{
		iLocal_89 = Local_82.f_28[0];
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_89, true, true);
	}
	func_439();
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
				__LIB_0__::func_427(-1462.1774f, 485.6856f, 115.2016f, 97.1913f, 1, 0);
				func_422(1);
				break;
			}
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_Dreyfuss", 0);
		__LIB_14__::func_863(Local_82.f_9, 0, 0, 0, 0, 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			switch (iLocal_87)
			{
				case 0:
					func_319();
					break;
				case 1:
					func_309();
					break;
				case 2:
					func_301();
					break;
				case 3:
					func_249();
					break;
				case 4:
					func_9();
					break;
				case 5:
					func_1();
					break;
				default:
					break;
				}
		}
	}
}

void func_1()//Position - 0x23C
{
	switch (iLocal_88)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			__LIB_0__::func_345(&uLocal_305, 0, 0);
			__LIB_0__::func_714(&iLocal_90);
			__LIB_14__::func_872(1);
			iLocal_88 = 1;
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				__LIB_0__::func_0(&iLocal_89);
				__LIB_8__::func_397(&(Local_82.f_35[0]));
				func_451();
			}
			break;
	}
}

void func_9()//Position - 0x4D3
{
	switch (iLocal_88)
	{
		case 0:
			__LIB_0__::func_714(&iLocal_90);
			__LIB_0__::func_325();
			__LIB_0__::func_429();
			iLocal_88 = 1;
			break;
		case 1:
			if (!bLocal_281)
			{
				if (__LIB_0__::func_121(iLocal_89))
				{
					if (!__LIB_0__::func_75())
					{
						bLocal_281 = __LIB_14__::func_535(&uLocal_98, "DREY1AU", "DREY1_END", "DREY1_END_2", 7, 0, 0);
					}
				}
				else if (!__LIB_0__::func_75())
				{
					bLocal_281 = __LIB_14__::func_535(&uLocal_98, "DREY1AU", "DREY1_END", "DREY1_END_1", 7, 0, 0);
				}
			}
			else if (!__LIB_0__::func_75())
			{
				iLocal_88 = 2;
			}
			break;
		case 2:
			func_10();
			break;
	}
}

void func_10()//Position - 0x56D
{
	__LIB_0__::func_325();
	__LIB_0__::func_429();
	__LIB_16__::func_871(19, 0);
	func_11(68, 1);
	func_451();
}

void func_11(int iParam0, bool bParam1)//Position - 0x590
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
	func_39();
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

void func_39()//Position - 0x1742
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
				if (func_157(iVar1, 14, iVar2))
				{
					func_40(iVar1, 14, iVar2);
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

int func_40(int iParam0, int iParam1, int iParam2)//Position - 0x1803
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
	if (!func_157(iParam0, iParam1, iParam2))
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
				func_40(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_40(iParam0, 14, uVar5[iVar3]))
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
	if (func_83(iParam0, iVar0, &iVar7, 0))
	{
		func_43(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_41(iParam0, iVar0, &iVar7))
	{
		func_43(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_41(int iParam0, int iParam1, int iParam2)//Position - 0x19BF
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_157(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_43(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x1A86
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
										func_43(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_43(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_49(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_83(iParam0, iVar10, &iVar4, 1))
							{
								func_43(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_43(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_43(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_43(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_43(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_43(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_43(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_43(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_43(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_43(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_83(iParam0, iVar10, &iVar4, 0))
		{
			func_43(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_41(iParam0, iVar10, &iVar4))
		{
			func_43(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_49(int iParam0, int iParam1, int iParam2)//Position - 0x2AC3
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
				if (func_157(iParam0, iParam1, iVar0))
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
				if (func_157(iParam0, iParam1, iVar1))
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

int func_83(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x919D
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_157(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_157(int iParam0, int iParam1, int iParam2)//Position - 0x1F5E4
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
				if (!func_157(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_157(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_157(iParam0, 14, iVar4))
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
			if (!func_157(iParam0, 14, uVar8[iVar7]))
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

void func_249()//Position - 0x27631
{
	switch (iLocal_88)
	{
		case 0:
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			if (HUD::DOES_BLIP_EXIST(iLocal_90))
			{
				HUD::SET_BLIP_SCALE(iLocal_90, 0.7f);
			}
			if (__LIB_0__::func_121(iLocal_89))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_93);
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_89, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				}
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_93);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_89, iLocal_93);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_93);
			}
			__LIB_0__::func_429();
			iLocal_297 = 0;
			iLocal_88 = 1;
			break;
		case 1:
			func_300();
			if (!__LIB_0__::func_121(iLocal_89))
			{
				__LIB_0__::func_630(749);
				if (!BitTest(Global_113386.f_18574.f_382, 0))
				{
					MISC::SET_BIT(&(Global_113386.f_18574.f_382), 0);
				}
				func_298(4);
			}
			else if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_89) > 250f)
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 2f, 4);
				func_298(4);
			}
			else
			{
				__LIB_14__::func_615(&uLocal_305, iLocal_89, 0, 0, 1, 1, 1);
				__LIB_38__::func_209(&iLocal_90, "", "", &uLocal_298, iLocal_299, 0);
				func_250();
				TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_89, 1.8f);
			}
			break;
		case 2:
			break;
		default:
			break;
	}
}

void func_250()//Position - 0x27755
{
	if (!bLocal_280)
	{
		if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_89, fLocal_267, 1))
		{
			if (PED::IS_PED_BEING_JACKED(iLocal_89))
			{
				bLocal_280 = __LIB_2__::func_859(&uLocal_98, "DREY1AU", "DREY1_HURT", 7, 0, 0, 0);
			}
			else
			{
				bLocal_280 = __LIB_2__::func_859(&uLocal_98, "DREY1AU", sLocal_274, 7, 0, 0, 0);
			}
		}
	}
	else if (!__LIB_0__::func_75())
	{
		if (func_253(1) == 0)
		{
			func_251(&iLocal_289, &iLocal_284, 32, &(iLocal_278[iLocal_284]), "DREY1_CHASE2", sLocal_271[iLocal_284], 0);
		}
	}
}

void func_251(int iParam0, int iParam1, int iParam2, var uParam3, char* sParam4, char* sParam5, bool bParam6)//Position - 0x277DD
{
	if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_89, fLocal_267, 1))
	{
		iLocal_297 = 1;
	}
	else
	{
		iLocal_297 = 0;
	}
	if (!*uParam3)
	{
		if (!iLocal_297)
		{
			if (!*iParam0)
			{
				if ((__LIB_0__::func_692(iLocal_89) && !PED::IS_PED_RAGDOLL(iLocal_89)) && !TASK::IS_PED_IN_WRITHE(iLocal_89))
				{
					if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_89, fLocal_267, 1))
					{
						if (!__LIB_0__::func_75())
						{
							if (bParam6 || (!bParam6 && iLocal_304 == 0))
							{
								*uParam3 = __LIB_14__::func_535(&uLocal_98, "DREY1AU", sParam4, sParam5, 7, 0, 0);
							}
							if (*uParam3 && !bParam6)
							{
								if (*iParam1 < (iParam2 - 1))
								{
									*iParam1++;
								}
								else
								{
									*iParam0 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	else if ((bParam6 && !iLocal_304 == 0) && !__LIB_0__::func_75())
	{
		if (*iParam1 < (iParam2 - 1))
		{
			*iParam1++;
		}
		else
		{
			*iParam0 = 1;
		}
		if (iLocal_304 == 1 && ENTITY::DOES_ENTITY_EXIST(iLocal_89))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_89);
		}
		iLocal_304 = 0;
	}
}

int func_253(bool bParam0)//Position - 0x27916
{
	if (iLocal_304 == 0)
	{
		if (__LIB_14__::func_858(iLocal_89, 1, 0, 0, 0) && iLocal_287 < 3)
		{
			__LIB_0__::func_429();
			iLocal_304 = 2;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_89, PLAYER::PLAYER_PED_ID(), bParam0) && iLocal_288 < 4)
		{
			__LIB_0__::func_429();
			iLocal_304 = 1;
		}
	}
	if (iLocal_304 == 1)
	{
		func_251(&iLocal_290, &iLocal_288, 4, &(iLocal_282[iLocal_288]), "DREY1_HURT", sLocal_273[iLocal_288], 1);
	}
	else if (iLocal_304 == 2)
	{
		func_251(&iLocal_291, &iLocal_287, 3, &(iLocal_279[iLocal_287]), "DREY1_SHOOT", sLocal_272[iLocal_287], 1);
	}
	return iLocal_304;
}

void func_298(int iParam0)//Position - 0x290A4
{
	iLocal_87 = iParam0;
	iLocal_88 = 0;
}

void func_300()//Position - 0x29124
{
	if (__LIB_0__::func_121(iLocal_89))
	{
		if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iLocal_89, joaat("WEAPON_STUNGUN"), 0))
		{
			if (__LIB_0__::func_121(iLocal_89))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_89, 99, 0);
			}
		}
	}
}

void func_301()//Position - 0x29156
{
	int iVar0;
	iVar0 = 0;
	switch (iLocal_88)
	{
		case 0:
			PATHFIND::SET_ROADS_IN_AREA(Local_83, Local_83.f_3, true, true);
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			if (__LIB_0__::func_121(Local_82.f_35[0]))
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					Local_295[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Local_82.f_35[0], true) };
					iVar0++;
				}
			}
			iLocal_296 = MISC::GET_GAME_TIMER();
			iLocal_266 = 0;
			iLocal_297 = 0;
			iLocal_88 = 1;
			break;
		case 1:
			func_300();
			if (!__LIB_0__::func_121(iLocal_89))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
				__LIB_0__::func_630(749);
				if (!BitTest(Global_113386.f_18574.f_382, 0))
				{
					MISC::SET_BIT(&(Global_113386.f_18574.f_382), 0);
				}
				func_298(4);
			}
			else if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_89) > 250f)
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 2f, 4);
				func_298(4);
			}
			else
			{
				if (__LIB_0__::func_121(Local_82.f_35[0]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_82.f_35[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						func_251(&iLocal_292, &iLocal_285, 7, &(iLocal_277[iLocal_285]), "DREY1_BUMP", sLocal_270[iLocal_285], 0);
					}
					func_251(&iLocal_293, &iLocal_286, 31, &(iLocal_276[iLocal_286]), "DREY1_CHASE1", sLocal_269[iLocal_286], 0);
					if (((!iLocal_265 && !iLocal_266) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_89)) && !ENTITY::IS_ENTITY_AT_COORD(Local_82.f_35[0], -1474.4446f, 519.4703f, 117.0069f, 15f, 15f, 15f, false, true, 0))
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_89, Local_82.f_35[0], PLAYER::PLAYER_PED_ID(), 8, 90f, 786469, 100f, 1f, true);
						iLocal_266 = 1;
					}
				}
				func_253(0);
				__LIB_14__::func_615(&uLocal_305, iLocal_89, 0, 0, 1, 1, 1);
				if (((!iLocal_265 && __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_89, 10f, 1)) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_89))
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_89, Local_82.f_35[0], PLAYER::PLAYER_PED_ID(), 8, 90f, 786468, 100f, 1f, true);
					iLocal_265 = 1;
				}
				if (!func_307())
				{
					func_302();
				}
			}
			__LIB_38__::func_209(&iLocal_90, "", "", &uLocal_298, iLocal_299, 0);
			break;
		case 2:
			break;
		default:
			break;
	}
}

void func_302()//Position - 0x293BD
{
	if (__LIB_0__::func_121(Local_82.f_35[0]))
	{
		if (func_306())
		{
			func_298(3);
		}
		else if (!func_303())
		{
			sLocal_274 = "DREY1_RUN";
			iLocal_265 = 1;
			func_298(3);
		}
		else if (PED::IS_PED_BEING_JACKED(iLocal_89) || !__LIB_0__::func_695(Local_82.f_35[0]))
		{
			iLocal_265 = 1;
			func_298(3);
		}
	}
	else
	{
		iLocal_265 = 1;
		sLocal_274 = "DREY1_CGONE";
		func_298(3);
	}
}

int func_303()//Position - 0x29434
{
	if (__LIB_0__::func_121(Local_82.f_35[0]))
	{
		if (PED::IS_PED_IN_VEHICLE(iLocal_89, Local_82.f_35[0], false))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_296) > 3000)
			{
				func_305();
				if (__LIB_1__::func_504(Local_295[0 /*3*/], Local_295[2 /*3*/], 2f))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
		}
		else
		{
			iLocal_296 = MISC::GET_GAME_TIMER();
		}
		return 1;
	}
	return 0;
}

void func_305()//Position - 0x294B9
{
	iLocal_296 = MISC::GET_GAME_TIMER();
	Local_295[0 /*3*/] = { Local_295[1 /*3*/] };
	Local_295[1 /*3*/] = { Local_295[2 /*3*/] };
	Local_295[2 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Local_82.f_35[0], true) };
}

int func_306()//Position - 0x294FC
{
	int iVar0;
	if (__LIB_0__::func_121(Local_82.f_35[0]))
	{
		iVar0 = 0;
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_82.f_35[0], 0, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_82.f_35[0], 1, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_82.f_35[0], 4, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_82.f_35[0], 5, false))
		{
			iVar0++;
		}
		if (iVar0 > 1)
		{
			sLocal_274 = "DREY1_TYRE";
			iLocal_265 = 1;
			return 1;
		}
	}
	return 0;
}

int func_307()//Position - 0x29583
{
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_82.f_35[0]))
		{
			if (__LIB_0__::func_121(Local_82.f_35[0]))
			{
				if (__LIB_0__::func_687(iLocal_89, Local_82.f_35[0], 5f, 1))
				{
					if (func_308(joaat("towtruck")))
					{
						return 1;
					}
					else
					{
						return func_308(joaat("towtruck2"));
					}
				}
			}
		}
	}
	return 0;
}

int func_308(int iParam0)//Position - 0x295E7
{
	int iVar0;
	iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(Local_82.f_35[0], true), 20f, iParam0, 6);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, Local_82.f_35[0]))
		{
			sLocal_274 = "DREY1_TOW";
			func_298(3);
			return 1;
		}
	}
	return 0;
}

void func_309()//Position - 0x29633
{
	switch (iLocal_88)
	{
		case 0:
			__LIB_14__::func_800(&Local_82, 0, 1);
			iLocal_264 = 1;
			iLocal_297 = 0;
			func_317();
			if (__LIB_0__::func_695(Local_82.f_35[0]))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_82.f_35[0], 1);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_82.f_35[0], true, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_82.f_35[0], 0, false, false);
			}
			if (__LIB_0__::func_121(iLocal_89))
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_89, 3f);
				if (!HUD::DOES_BLIP_EXIST(iLocal_90))
				{
					iLocal_90 = __LIB_14__::func_661(iLocal_89, 1, 0, 5);
				}
				__LIB_38__::func_210(&iLocal_90, "", "", &uLocal_298, &iLocal_299, 1, 0);
				if (__LIB_0__::func_695(Local_82.f_35[0]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_92);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1472.2698f, 513.9628f, 116.898f, 3f, 20000, 0.25f, 1, 40000f);
					TASK::TASK_ENTER_VEHICLE(0, Local_82.f_35[0], 20000, -1, 3f, 1, 0);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_82.f_35[0], 15f, 262144);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_92);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_89, iLocal_92);
					iLocal_263 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(ENTITY::GET_ENTITY_COORDS(Local_82.f_35[0], true), 100f, 10f, false);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_89, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_94))
			{
				STREAMING::REQUEST_MODEL(iLocal_95);
				while (!STREAMING::HAS_MODEL_LOADED(iLocal_95))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_94 = VEHICLE::CREATE_VEHICLE(iLocal_95, -1482.3665f, 529.0344f, 117.2725f, 201.5764f, true, true, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_95);
			}
			__LIB_0__::func_84(500, 0);
			iLocal_91 = MISC::GET_GAME_TIMER();
			iLocal_319 = 0;
			iLocal_88 = 1;
			break;
		case 1:
			if (iLocal_319 == 0 && CAM::IS_SCREEN_FADED_IN())
			{
				__LIB_0__::func_151("DREY1_HELP", -1);
				iLocal_319 = 1;
			}
			func_300();
			if (!__LIB_0__::func_121(iLocal_89))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
				__LIB_0__::func_630(749);
				if (!BitTest(Global_113386.f_18574.f_382, 0))
				{
					MISC::SET_BIT(&(Global_113386.f_18574.f_382), 0);
				}
				func_298(4);
			}
			else if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_89) > 250f)
			{
				func_298(4);
			}
			else
			{
				__LIB_14__::func_615(&uLocal_305, iLocal_89, 0, 0, 1, 1, 1);
				func_313();
				if (func_253(1) == 0)
				{
					func_251(&iLocal_294, &iLocal_283, 5, &(iLocal_275[iLocal_283]), "DREY1_CHASE0", sLocal_268[iLocal_283], 0);
				}
				if (iLocal_264)
				{
					if (__LIB_0__::func_121(iLocal_89))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_91) > 3000)
						{
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_89, 3f);
						}
						else
						{
							iLocal_264 = 0;
						}
					}
				}
				__LIB_38__::func_209(&iLocal_90, "", "", &uLocal_298, iLocal_299, 0);
				if (!func_311())
				{
					if (!func_307() && !func_310(joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						func_302();
					}
				}
				if ((func_310(joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) && TASK::GET_SEQUENCE_PROGRESS(iLocal_89) > 0) && func_306())
				{
					func_298(3);
				}
			}
			break;
		case 2:
			func_298(2);
			break;
		default:
			break;
	}
}

int func_310(int iParam0)//Position - 0x29927
{
	if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_89, iParam0) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_89, iParam0) == 0)
	{
		return 1;
	}
	return 0;
}

int func_311()//Position - 0x29951
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_82.f_35[0]))
	{
		if (func_310(joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
		{
			if (TASK::GET_SEQUENCE_PROGRESS(iLocal_89) > 0)
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_82.f_35[0], Local_80, 20f, 20f, 100f, false, true, 0))
				{
					sLocal_274 = "DREY1_CGONE";
					iLocal_265 = 1;
					func_298(3);
					return 1;
				}
				else if (!ENTITY::IS_ENTITY_AT_COORD(Local_82.f_35[0], Local_80, 5f, 5f, 100f, false, true, 0))
				{
					if (!__LIB_14__::func_736(iLocal_89, Local_82.f_35[0], 1126825984, 0))
					{
						sLocal_274 = "DREY1_CGONE";
						iLocal_265 = 1;
						func_298(3);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_313()//Position - 0x29A93
{
	if (__LIB_0__::func_692(iLocal_89) && __LIB_0__::func_695(Local_82.f_35[0]))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_89, Local_82.f_35[0]))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_90))
			{
				HUD::SET_BLIP_SCALE(iLocal_90, 1f);
			}
			iLocal_88 = 2;
		}
	}
}

int func_317()//Position - 0x29C11
{
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1482.9916f, 523.4556f, 117.998055f, 15f, joaat("prop_lrggate_01_l"), false) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1477.8646f, 525.6363f, 118.04558f, 15f, joaat("prop_lrggate_01_r"), false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01_l"), -1482.9916f, 523.4556f, 117.998055f, true, 0f, false);
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01_r"), -1477.8646f, 525.6363f, 118.04558f, true, 0f, false);
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01_l"), -1482.9916f, 523.4556f, 117.998055f, true, 1f, false);
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01_r"), -1477.8646f, 525.6363f, 118.04558f, true, -1f, false);
		return 1;
	}
	return 0;
}

void func_319()//Position - 0x29DC3
{
	switch (iLocal_88)
	{
		case 0:
			__LIB_14__::func_851("paper_1_RCM_alt1", 1);
			if (((CAM::IS_SCREEN_FADED_IN() && !__LIB_0__::func_323()) && __LIB_0__::func_121(iLocal_89)) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_82.f_28[0], 1) > 4f)
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_89, 0f, 0f, -0.5f, true, -1, 3000, 2000, 0);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.3f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.01f);
				CAM::SET_GAMEPLAY_HINT_FOV(35f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				__LIB_0__::func_325();
				iLocal_318 = 0;
			}
			else
			{
				iLocal_318 = 1;
			}
			__LIB_0__::func_122(&iLocal_321, 0);
			iLocal_321 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1459.57f, 485.16f, 115.2f, 10f, joaat("prop_yoga_mat_02"), true, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_321))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_321, true);
			}
			iLocal_88 = 1;
			iLocal_320 = 0;
			break;
		case 1:
			switch (iLocal_318)
			{
				case 0:
					if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
					{
						func_396();
						if ((!__LIB_0__::func_75() && __LIB_0__::func_121(iLocal_89)) && __LIB_2__::func_859(&uLocal_98, "DREY1AU", "DREY1_RCM_LI", 8, 0, 0, 0))
						{
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89, -1, 0, 2);
							iLocal_318++;
						}
					}
					break;
				case 1:
					if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
					{
						func_396();
						if (!__LIB_0__::func_75() && __LIB_14__::func_740(1, 1093140480, 0))
						{
							if (__LIB_0__::func_121(iLocal_89))
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_89, sLocal_97, 0, 0, 0);
							}
							__LIB_14__::func_841();
							CUTSCENE::START_CUTSCENE(0);
							RECORDING::REPLAY_START_EVENT(4);
							__LIB_0__::func_544(99, 1, 0, 1, 0);
							iLocal_318++;
						}
					}
					break;
				case 2:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							CAM::STOP_GAMEPLAY_HINT(false);
						}
						if (__LIB_14__::func_742(__LIB_13__::func_790(), 1))
						{
							__LIB_14__::func_592(-1457.8424f, 485.81952f, 114.201614f, -1474.2269f, 482.81104f, 117.20156f, 3f, Local_300, fLocal_301, 1, 1, 1, 0, 0);
							__LIB_14__::func_592(-1473.9836f, 510.04517f, 114.60344f, -1474.2269f, 482.81104f, 118.20156f, 4f, Local_300, fLocal_301, 1, 1, 1, 0, 0);
							__LIB_14__::func_592(-1472.3412f, 508.3621f, 114.61578f, -1475.9581f, 520.15894f, 120.044846f, 10f, Local_300, fLocal_301, 1, 1, 1, 0, 0);
							__LIB_14__::func_785(Local_300, fLocal_301, 0, 145);
						}
						else
						{
							__LIB_14__::func_592(-1457.8424f, 485.81952f, 114.201614f, -1474.2269f, 482.81104f, 117.20156f, 3f, Local_302, fLocal_303, 1, 1, 1, 0, 0);
							__LIB_14__::func_592(-1473.9836f, 510.04517f, 114.60344f, -1474.2269f, 482.81104f, 118.20156f, 4f, Local_302, fLocal_303, 1, 1, 1, 0, 0);
							__LIB_14__::func_592(-1472.3412f, 508.3621f, 114.61578f, -1475.9581f, 520.15894f, 120.044846f, 10f, Local_302, fLocal_303, 1, 1, 1, 0, 0);
							__LIB_14__::func_785(Local_302, fLocal_303, 0, 145);
						}
						func_329(-1477f, 496.8f, 117.4f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						FIRE::STOP_FIRE_IN_RANGE(-1477f, 496.8f, 117.4f, 30f);
						MISC::CLEAR_AREA_OF_VEHICLES(-1473.3762f, 517.8441f, 116.8854f, 30f, false, false, false, false, false, false, 0);
						__LIB_0__::func_84(500, 0);
						iLocal_318++;
					}
					break;
				case 3:
					if (!CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						iLocal_88 = 2;
					}
					else
					{
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
						{
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), false, 1, false);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0f, true, false);
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Dreyfuss", 0) && __LIB_0__::func_121(iLocal_89))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_89, -1475.3658f, 500.3797f, 116.6013f, 3f, 20000, 0.25f, 1, 40000f);
						}
					}
					break;
			}
			break;
		case 2:
			RECORDING::REPLAY_STOP_EVENT();
			__LIB_14__::func_870(1, 1, 1, 1);
			__LIB_14__::func_800(&Local_82, 0, 1);
			func_298(1);
			break;
		default:
			break;
	}
}

void func_329(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x2A518
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
					if (func_157(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_43(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_157(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_43(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_157(PLAYER::PLAYER_PED_ID(), 8, 1) || func_157(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_43(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_157(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_43(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

void func_396()//Position - 0x31A94
{
	__LIB_14__::func_862();
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	if (iLocal_320 == 0)
	{
		if (__LIB_0__::func_121(iLocal_89))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_89, 1) < 3f)
			{
				iLocal_320 = 1;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89, 0);
			}
		}
	}
}

void func_422(int iParam0)//Position - 0x32711
{
	func_436(1, 1);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	func_435();
	__LIB_0__::func_345(&uLocal_305, 0, 0);
	__LIB_0__::func_429();
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		__LIB_17__::func_25(1, 1, 1);
	}
	MISC::CLEAR_AREA(-1462.1774f, 485.6856f, 115.2016f, 200f, true, false, false, false);
	if (!__LIB_0__::func_324())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), -1462.1774f, 485.6856f, 115.2016f, 97.1913f, 0, 1);
	}
	__LIB_8__::func_397(&iLocal_94);
	__LIB_0__::func_0(&iLocal_89);
	__LIB_8__::func_397(&(Local_82.f_35[0]));
	func_317();
	func_428();
	func_427();
	if (!__LIB_0__::func_324())
	{
		__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, 12, 5000, 0, 0);
	}
	__LIB_0__::func_433(0, -1, 1);
	if (iParam0 == 1)
	{
		if (__LIB_0__::func_121(iLocal_89))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_89, -1475.3658f, 500.3797f, 116.6013f, 3f, 20000, 0.25f, 1, 40000f);
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0f, true, false);
		}
		SYSTEM::WAIT(500);
	}
	__LIB_14__::func_879(1, 0, 1);
	func_298(iParam0);
}

void func_427()//Position - 0x329B1
{
	if (!__LIB_0__::func_121(Local_82.f_35[0]))
	{
		STREAMING::REQUEST_MODEL(iLocal_96);
		while (!STREAMING::HAS_MODEL_LOADED(iLocal_96))
		{
			SYSTEM::WAIT(0);
		}
		Local_82.f_35[0] = VEHICLE::CREATE_VEHICLE(iLocal_96, Local_80, fLocal_81, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_96);
	}
	if (__LIB_0__::func_121(Local_82.f_35[0]))
	{
		VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(Local_82.f_35[0], false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_82.f_35[0], 1);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_82.f_35[0], "DR3YFU55");
	}
}

void func_428()//Position - 0x32A31
{
	if (!__LIB_0__::func_121(iLocal_89))
	{
		while (!__LIB_12__::func_754(&iLocal_89, 68, -1472.9f, 483.3f, 115.2f, 75f, 1))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (__LIB_0__::func_121(iLocal_89))
	{
		__LIB_0__::func_222(&uLocal_98, 3, iLocal_89, "DREYFUSS", 0, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_89, 177, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_89, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_89, true, 0f);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_89, true, 1);
		TASK::SET_PED_PATH_MAY_ENTER_WATER(iLocal_89, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_89, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_89, 281, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_89, 42, true);
	}
}

void func_435()//Position - 0x32D00
{
	int iVar0;
	sLocal_270[0] = "DREY1_BUMP_1";
	sLocal_270[1] = "DREY1_BUMP_2";
	sLocal_270[2] = "DREY1_BUMP_3";
	sLocal_270[3] = "DREY1_BUMP_4";
	sLocal_270[4] = "DREY1_BUMP_5";
	sLocal_270[5] = "DREY1_BUMP_6";
	sLocal_270[6] = "DREY1_BUMP_7";
	sLocal_268[0] = "DREY1_CHASE0_1";
	sLocal_268[1] = "DREY1_CHASE0_2";
	sLocal_268[2] = "DREY1_CHASE0_3";
	sLocal_268[3] = "DREY1_CHASE0_4";
	sLocal_268[4] = "DREY1_CHASE0_5";
	sLocal_269[0] = "DREY1_CHASE1_1";
	sLocal_269[1] = "DREY1_CHASE1_2";
	sLocal_269[2] = "DREY1_CHASE1_3";
	sLocal_269[3] = "DREY1_CHASE1_4";
	sLocal_269[4] = "DREY1_CHASE1_5";
	sLocal_269[5] = "DREY1_CHASE1_6";
	sLocal_269[6] = "DREY1_CHASE1_7";
	sLocal_269[7] = "DREY1_CHASE1_8";
	sLocal_269[8] = "DREY1_CHASE1_9";
	sLocal_269[9] = "DREY1_CHASE1_10";
	sLocal_269[10] = "DREY1_CHASE1_11";
	sLocal_269[11] = "DREY1_CHASE1_12";
	sLocal_269[12] = "DREY1_CHASE1_13";
	sLocal_269[13] = "DREY1_CHASE1_14";
	sLocal_269[14] = "DREY1_CHASE1_15";
	sLocal_269[15] = "DREY1_CHASE1_16";
	sLocal_269[16] = "DREY1_CHASE1_17";
	sLocal_269[17] = "DREY1_CHASE1_18";
	sLocal_269[18] = "DREY1_CHASE1_19";
	sLocal_269[19] = "DREY1_CHASE1_20";
	sLocal_269[20] = "DREY1_CHASE1_21";
	sLocal_269[21] = "DREY1_CHASE1_22";
	sLocal_269[22] = "DREY1_CHASE1_23";
	sLocal_269[23] = "DREY1_CHASE1_24";
	sLocal_269[24] = "DREY1_CHASE1_25";
	sLocal_269[25] = "DREY1_CHASE1_26";
	sLocal_269[26] = "DREY1_CHASE1_27";
	sLocal_269[27] = "DREY1_CHASE1_28";
	sLocal_269[28] = "DREY1_CHASE1_29";
	sLocal_269[29] = "DREY1_CHASE1_30";
	sLocal_269[30] = "DREY1_CHASE1_31";
	sLocal_271[0] = "DREY1_CHASE2_1";
	sLocal_271[1] = "DREY1_CHASE2_2";
	sLocal_271[2] = "DREY1_CHASE2_3";
	sLocal_271[3] = "DREY1_CHASE2_4";
	sLocal_271[4] = "DREY1_CHASE2_5";
	sLocal_271[5] = "DREY1_CHASE2_6";
	sLocal_271[6] = "DREY1_CHASE2_7";
	sLocal_271[7] = "DREY1_CHASE2_8";
	sLocal_271[8] = "DREY1_CHASE2_9";
	sLocal_271[9] = "DREY1_CHASE2_10";
	sLocal_271[10] = "DREY1_CHASE2_11";
	sLocal_271[11] = "DREY1_CHASE2_12";
	sLocal_271[12] = "DREY1_CHASE2_13";
	sLocal_271[13] = "DREY1_CHASE2_14";
	sLocal_271[14] = "DREY1_CHASE2_15";
	sLocal_271[15] = "DREY1_CHASE2_16";
	sLocal_271[16] = "DREY1_CHASE2_17";
	sLocal_271[17] = "DREY1_CHASE2_18";
	sLocal_271[18] = "DREY1_CHASE2_19";
	sLocal_271[19] = "DREY1_CHASE2_20";
	sLocal_271[20] = "DREY1_CHASE2_21";
	sLocal_271[21] = "DREY1_CHASE2_22";
	sLocal_271[22] = "DREY1_CHASE2_23";
	sLocal_271[23] = "DREY1_CHASE2_24";
	sLocal_271[24] = "DREY1_CHASE2_25";
	sLocal_271[25] = "DREY1_CHASE2_26";
	sLocal_271[26] = "DREY1_CHASE2_27";
	sLocal_271[27] = "DREY1_CHASE2_28";
	sLocal_271[28] = "DREY1_CHASE2_29";
	sLocal_271[29] = "DREY1_CHASE2_30";
	sLocal_271[30] = "DREY1_CHASE2_31";
	sLocal_271[31] = "DREY1_CHASE2_32";
	sLocal_272[0] = "DREY1_SHOOT_1";
	sLocal_272[1] = "DREY1_SHOOT_2";
	sLocal_272[2] = "DREY1_SHOOT_3";
	sLocal_273[0] = "DREY1_HURT_1";
	sLocal_273[1] = "DREY1_HURT_2";
	sLocal_273[2] = "DREY1_HURT_3";
	sLocal_273[3] = "DREY1_HURT_4";
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_282[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_279[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iLocal_277[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 31)
	{
		iLocal_276[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_275[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iLocal_278[iVar0] = 0;
		iVar0++;
	}
	bLocal_280 = false;
	iLocal_265 = 0;
	bLocal_281 = false;
	iLocal_297 = 0;
	iLocal_289 = 0;
	iLocal_290 = 0;
	iLocal_291 = 0;
	iLocal_292 = 0;
	iLocal_293 = 0;
	iLocal_294 = 0;
	iLocal_285 = 0;
	iLocal_286 = 0;
	iLocal_283 = 0;
	iLocal_284 = 0;
	iLocal_91 = 0;
	iLocal_287 = 0;
	iLocal_288 = 0;
	iLocal_304 = 0;
	sLocal_274 = "DREY1_WRECK";
}

void func_436(bool bParam0, bool bParam1)//Position - 0x33168
{
	if (bParam0)
	{
		__LIB_17__::func_25(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_329(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_439()//Position - 0x3325A
{
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_79, true);
	func_435();
	MISC::CLEAR_BIT(&(Global_113386.f_18574.f_382), 0);
	HUD::REQUEST_ADDITIONAL_TEXT("DREY1", 0);
	__LIB_0__::func_222(&uLocal_98, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	func_428();
	func_427();
}

int func_443(var uParam0)//Position - 0x33348
{
	int iVar0[2];
	int iVar1;
	bool bVar2;
	iVar0[0] = uLocal_78;
	iVar0[1] = iLocal_79;
	switch (iLocal_77)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -1457.2512f, 475.82584f, 114.201454f };
			uParam0->f_17[1 /*3*/] = { -1460.4023f, 490.4705f, 118.60101f };
			uParam0->f_24 = 35f;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "paper_1_RCM_alt1", 24);
			uParam0->f_25 = 1;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_17__::func_28(&(uParam0->f_48), "rcmcollect_paperleadinout@", "meditiate_idle", 0);
			iLocal_77 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !__LIB_14__::func_856(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_77 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!__LIB_14__::func_842(&(uParam0->f_28[0]), 68, -1459.68f, 485.26f, 116.22f, -131.3f, "DREYFUSS LAUNCHER RC", 1))
				{
					bVar2 = false;
				}
			}
			if (__LIB_0__::func_121(uParam0->f_28[0]))
			{
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 2096, 2);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_17__::func_22(&(uParam0->f_35[0]), iVar0[1], Local_80, fLocal_81);
				if (__LIB_0__::func_121(uParam0->f_35[0]))
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_35[0], "DR3YFU55");
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_79, true);
				}
			}
			if (bVar2)
			{
				iLocal_77 = 3;
			}
			break;
		case 3:
			__LIB_0__::func_544(99, 1, 0, 1, 0);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			if (__LIB_0__::func_121(uParam0->f_28[0]))
			{
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], true), 50f, 0);
			}
			MISC::CLEAR_AREA_OF_VEHICLES(-1471.1663f, 510.6191f, 115.8419f, 4f, false, false, false, false, false, false, 0);
			__LIB_37__::func_618(0);
			return 1;
			break;
	}
	return 0;
}

void func_451()//Position - 0x336E1
{
	__LIB_14__::func_841();
	if (__LIB_14__::func_843())
	{
		func_462();
	}
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	HUD::CLEAR_ADDITIONAL_TEXT(0, true);
	HUD::CLEAR_ADDITIONAL_TEXT(6, true);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_317, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_79, false);
	__LIB_0__::func_544(99, 0, 1, 1, 0);
	__LIB_0__::func_122(&iLocal_321, 0);
	__LIB_14__::func_871(&Local_82, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_462()//Position - 0x338FC
{
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	__LIB_0__::func_345(&uLocal_305, 0, 0);
	__LIB_37__::func_618(1);
	__LIB_0__::func_221(&uLocal_98, 1);
	__LIB_0__::func_221(&uLocal_98, 3);
	__LIB_0__::func_714(&iLocal_90);
	if (__LIB_0__::func_692(iLocal_89))
	{
		PED::SET_PED_KEEP_TASK(iLocal_89, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_89, false, 1);
	}
	__LIB_0__::func_124(&iLocal_89, 1, 0, 1);
	__LIB_0__::func_106(&iLocal_94);
	__LIB_0__::func_638();
	PATHFIND::SET_ROADS_IN_AREA(Local_83, Local_83.f_3, true, true);
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_263);
}

