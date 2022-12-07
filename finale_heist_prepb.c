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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_36[2] = { 0, 0 };
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
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
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80[2] = { 0, 0 };
	int iLocal_81[2] = { 0, 0 };
	int iLocal_82[2] = { 0, 0 };
	int iLocal_83[2] = { 0, 0 };
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	struct<3> Local_92 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<3> Local_94 = { 0, 0, 0 } ;
	struct<3> Local_95[2];
	struct<3> Local_96 = { 0, 0, 0 } ;
	float fLocal_97 = 0f;
	char* sLocal_98 = NULL;
	var uLocal_99 = 16;
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
	var uLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_278[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_279 = 0;
	int iLocal_280[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_281[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_282[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_283[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_284[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_285[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
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
	int iLocal_303[2] = { 0, 0 };
	int iLocal_304[2] = { 0, 0 };
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328[2] = { 0, 0 };
	int iLocal_329[2] = { 0, 0 };
	int iLocal_330[2] = { 0, 0 };
	int iLocal_331[2] = { 0, 0 };
	int iLocal_332[2] = { 0, 0 };
	int iLocal_333[2] = { 0, 0 };
	int iLocal_334[2] = { 0, 0 };
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340[2] = { 0, 0 };
	int iLocal_341[2] = { 0, 0 };
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361[2] = { 0, 0 };
	int iLocal_362 = 0;
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
	Local_92 = { 27.7189f, -608.7927f, 30.6293f };
	Local_96 = { 903.1f, -1548.8f, 29.8f };
	fLocal_97 = 0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_STOP");
		func_221();
		func_220();
	}
	if (__LIB_0__::func_2(0))
	{
		HUD::REQUEST_ADDITIONAL_TEXT("FINPRB", 0);
	}
	PED::ADD_RELATIONSHIP_GROUP("WorkerPedMainGroup", &iLocal_264);
	PED::ADD_RELATIONSHIP_GROUP("GuardMainGroup", &iLocal_265);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("packer"), true);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_265, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_264, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_265, iLocal_264);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_264, iLocal_265);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_265, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_265);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_264, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_264);
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_FINPRB", 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 230, false);
		}
		func_217();
		if (iLocal_272 == 0)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				__LIB_0__::func_503(27, 1);
				iLocal_272 = 1;
			}
		}
		if (iLocal_295 == 1)
		{
			func_212();
		}
		func_209();
		func_202();
		func_194();
		func_189();
		func_186();
		switch (iLocal_28)
		{
			case 0:
				func_185();
				break;
			case 1:
				func_182();
				break;
			case 2:
				func_158();
				break;
			case 3:
				func_156();
				break;
			case 4:
				func_128();
				break;
			case 5:
				func_21();
				break;
			case 6:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1EC
{
	switch (iLocal_53)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			AUDIO::TRIGGER_MUSIC_EVENT("FHPRA_FAIL");
			switch (iLocal_30)
			{
				case 0:
					break;
				case 4:
					sLocal_98 = "FPB_FAIL1";
					break;
				case 3:
					sLocal_98 = "FPB_FAIL2";
					break;
				case 1:
					sLocal_98 = "FPB_FAIL3";
					break;
				case 2:
					sLocal_98 = "FPB_FAIL10";
					break;
				case 5:
					if (__LIB_18__::func_173() == 0)
					{
						sLocal_98 = "FPB_FAIL7";
					}
					if (__LIB_18__::func_173() == 2)
					{
						sLocal_98 = "FPB_FAIL8";
					}
					if (__LIB_18__::func_173() == 1)
					{
						sLocal_98 = "FPB_FAIL9";
					}
					break;
				case 6:
					sLocal_98 = "FPB_FAIL11";
					break;
			}
			if (iLocal_30 == 0)
			{
				func_6(0);
			}
			else
			{
				func_4(sLocal_98);
			}
			iLocal_53 = 1;
			break;
		case 1:
			if (__LIB_0__::func_204())
			{
				if (__LIB_11__::func_719())
				{
				}
				func_220();
			}
			break;
	}
}

void func_4(char* sParam0)//Position - 0x30F
{
	__LIB_0__::func_324(sParam0);
	func_6(0);
}

void func_6(int iParam0)//Position - 0x361
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_323();
		if (!func_7(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_7(int iParam0)//Position - 0x3A6
{
	int iVar0;
	int iVar1;
	__LIB_26__::func_260();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_322(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_8(&(Global_113386.f_2363.f_539), iVar1);
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

void func_8(var uParam0, int iParam1)//Position - 0x4B6
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
			if (!func_10(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_10(int iParam0, var uParam1, float fParam2)//Position - 0x68A
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
			return func_10(8, uParam1, fParam2);
			break;
		case 10:
			return func_10(8, uParam1, fParam2);
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

void func_21()//Position - 0x12F1
{
	func_186();
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_35();
			iLocal_266 = 0;
		}
		iLocal_273 = 0;
		iLocal_274 = 0;
		iLocal_275 = 0;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		if (__LIB_36__::func_107(iLocal_37, 0))
		{
			if (!__LIB_36__::func_78(iLocal_37))
			{
				while (!__LIB_36__::func_79(iLocal_37, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (__LIB_36__::func_107(iLocal_39, 0))
		{
			if (!__LIB_36__::func_78(iLocal_39))
			{
				while (!__LIB_36__::func_79(iLocal_39, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (__LIB_36__::func_107(iLocal_38, 0))
		{
			if (!__LIB_36__::func_78(iLocal_38))
			{
				while (!__LIB_36__::func_79(iLocal_38, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!__LIB_0__::func_295())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			__LIB_6__::func_775(iLocal_33, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, false))
			{
				if (__LIB_18__::func_173() == 0)
				{
					if (__LIB_36__::func_107(iLocal_39, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_39, iLocal_33, false))
						{
							TASK::CLEAR_PED_TASKS(iLocal_39);
							PED::REMOVE_PED_FROM_GROUP(iLocal_39);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_39, true);
							TASK::TASK_LEAVE_VEHICLE(iLocal_39, iLocal_33, 0);
						}
					}
					if (__LIB_36__::func_107(iLocal_38, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_38, iLocal_33, false))
						{
							TASK::CLEAR_PED_TASKS(iLocal_38);
							PED::REMOVE_PED_FROM_GROUP(iLocal_38);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_38, true);
							TASK::TASK_LEAVE_VEHICLE(iLocal_38, iLocal_33, 0);
						}
					}
				}
				if (__LIB_18__::func_173() == 2)
				{
					if (__LIB_36__::func_107(iLocal_37, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_37, iLocal_33, false))
						{
							TASK::CLEAR_PED_TASKS(iLocal_37);
							PED::REMOVE_PED_FROM_GROUP(iLocal_37);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_37, true);
							TASK::TASK_LEAVE_VEHICLE(iLocal_37, iLocal_33, 0);
						}
					}
					if (__LIB_36__::func_107(iLocal_38, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_38, iLocal_33, false))
						{
							TASK::CLEAR_PED_TASKS(iLocal_38);
							PED::REMOVE_PED_FROM_GROUP(iLocal_38);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_38, true);
							TASK::TASK_LEAVE_VEHICLE(iLocal_38, iLocal_33, 0);
						}
					}
				}
				if (__LIB_18__::func_173() == 1)
				{
					if (__LIB_36__::func_107(iLocal_37, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_37, iLocal_33, false))
						{
							TASK::CLEAR_PED_TASKS(iLocal_37);
							PED::REMOVE_PED_FROM_GROUP(iLocal_37);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_37, true);
							TASK::TASK_LEAVE_VEHICLE(iLocal_37, iLocal_33, 0);
						}
					}
					if (__LIB_36__::func_107(iLocal_39, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_39, iLocal_33, false))
						{
							TASK::CLEAR_PED_TASKS(iLocal_39);
							PED::REMOVE_PED_FROM_GROUP(iLocal_39);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_39, true);
							TASK::TASK_LEAVE_VEHICLE(iLocal_39, iLocal_33, 0);
						}
					}
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, false))
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, 0);
				}
			}
		}
		SYSTEM::SETTIMERB(0);
		iLocal_53 = 2;
	}
	if (iLocal_53 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, false))
			{
				if (iLocal_275 == 0)
				{
					if (__LIB_18__::func_173() == 0)
					{
						if (__LIB_36__::func_107(iLocal_39, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_39, iLocal_33, false))
							{
								if (__LIB_36__::func_78(iLocal_39))
								{
									if (__LIB_36__::func_77(iLocal_39))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (__LIB_36__::func_107(iLocal_38, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_38, iLocal_33, false))
							{
								if (__LIB_36__::func_78(iLocal_38))
								{
									if (__LIB_36__::func_77(iLocal_38))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (__LIB_18__::func_173() == 2)
					{
						if (__LIB_36__::func_107(iLocal_37, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_37, iLocal_33, false))
							{
								if (__LIB_36__::func_78(iLocal_37))
								{
									if (__LIB_36__::func_77(iLocal_37))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (__LIB_36__::func_107(iLocal_38, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_38, iLocal_33, false))
							{
								if (__LIB_36__::func_78(iLocal_38))
								{
									if (__LIB_36__::func_77(iLocal_38))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (__LIB_18__::func_173() == 1)
					{
						if (__LIB_36__::func_107(iLocal_37, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_37, iLocal_33, false))
							{
								if (__LIB_36__::func_78(iLocal_37))
								{
									if (__LIB_36__::func_77(iLocal_37))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (__LIB_36__::func_107(iLocal_39, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_39, iLocal_33, false))
							{
								if (__LIB_36__::func_78(iLocal_39))
								{
									if (__LIB_36__::func_77(iLocal_39))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (iLocal_273 == 1 && iLocal_274 == 1)
					{
						iLocal_275 = 1;
					}
				}
				else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, true))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					SYSTEM::SETTIMERB(0);
					iLocal_53 = 3;
				}
			}
		}
	}
	if (iLocal_53 == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, false))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_33, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_33, 2);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_33, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_32, true);
			}
		}
		iLocal_53 = 4;
	}
	if (iLocal_53 == 4)
	{
		func_22();
	}
}

void func_22()//Position - 0x177E
{
	__LIB_6__::func_823(0, 0);
	func_220();
}

void func_35()//Position - 0x1BA1
{
	iLocal_295 = 0;
	iLocal_337 = 0;
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_0__::func_296();
	HUD::CLEAR_PRINTS();
	func_125();
	func_124();
	func_37();
	if (!__LIB_0__::func_295())
	{
		func_36();
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}

void func_36()//Position - 0x1BF6
{
	switch (iLocal_28)
	{
		case 2:
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 856.9501f, -1573.1766f, 29.4751f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 288.3586f);
			break;
		case 3:
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 856.9501f, -1573.1766f, 29.4751f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 288.3586f);
			break;
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, -1);
					}
				}
			}
			break;
		case 5:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, -1);
					}
				}
			}
			break;
	}
}

void func_37()//Position - 0x1CD3
{
	switch (iLocal_28)
	{
		case 3:
			iLocal_313 = 0;
			iLocal_314 = 0;
			iLocal_315 = 0;
			func_120();
			if (__LIB_26__::func_465() && __LIB_20__::func_739(7f, 7f, 7f, 1))
			{
				__LIB_32__::func_733();
				while (!__LIB_32__::func_732())
				{
					SYSTEM::WAIT(0);
				}
				iLocal_34 = func_38(818.8139f, -1610.4055f, 30.7951f, 264.412f);
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.01f);
			break;
		case 4:
			iLocal_313 = 0;
			iLocal_314 = 0;
			iLocal_315 = 0;
			func_120();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, false))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_33, 89.2131f, -596.9456f, 30.6224f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_33, 161.1163f);
				}
			}
			MISC::CLEAR_AREA(41f, -615f, 30f, 50f, true, true, false, false);
			break;
		case 5:
			iLocal_313 = 1;
			iLocal_314 = 1;
			iLocal_315 = 1;
			func_120();
			MISC::CLEAR_AREA(41f, -615f, 30f, 50f, true, true, false, false);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, false))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_33, 28.4065f, -608.9371f, 30.6293f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_33, 70.7778f);
				}
			}
			STREAMING::REQUEST_MODEL(joaat("S_M_M_Security_01"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Security_01")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_40))
			{
				iLocal_40 = PED::CREATE_PED(26, joaat("S_M_M_Security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, true, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Security_01"));
				PED::SET_PED_CONFIG_FLAG(iLocal_40, 324, true);
			}
			break;
	}
}

int func_38(struct<3> Param0, float fParam1)//Position - 0x1E7C
{
	return func_39(&(Global_103950.f_2890), Param0, fParam1, 0);
}

int func_39(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x1E96
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	var uVar3;
	int iVar4;
	if (__LIB_18__::func_189(uParam0))
	{
		if (__LIB_0__::func_78(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.87164f, 185.62384f, 71.40275f, -807.48944f, 189.3762f, 75.27323f, 6.5f, false, true))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (__LIB_26__::func_518(uParam0))
		{
			MISC::CLEAR_AREA(Param1, 5f, true, false, false, false);
			__LIB_32__::func_562(Param1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_66, Param1, fParam2, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, false, false, true);
				}
				__LIB_36__::func_106(iVar0, &(uParam0->f_12), 0, 1);
				bVar2 = true;
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_66))
				{
					if (!WATER::TEST_PROBE_AGAINST_WATER(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							__LIB_20__::func_166(uParam0->f_11, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							__LIB_20__::func_166(uParam0->f_11, 2);
						}
					}
					VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar0, false);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, false);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, true);
					__LIB_10__::func_569(iVar0, uParam0->f_11);
				}
				else if ((!__LIB_32__::func_561(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar4 = __LIB_0__::func_393(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						__LIB_32__::func_558(iVar4);
					}
				}
				if (((Global_100441 != 13 && Global_100441 != 10) && Global_100441 != 11) && Global_100441 != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_100441.f_3)) == Global_78125)
					{
						if (uParam0->f_12.f_66 == Global_113386.f_32749.f_69[21 /*78*/].f_66)
						{
							__LIB_6__::func_770(24, 0);
							__LIB_32__::func_558(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_40(iVar0, uParam0->f_11);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_66);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_40(int iParam0, int iParam1)//Position - 0x2147
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_26__::func_605(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_One"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113386.f_2363.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113386.f_32749.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113386.f_32749.f_5590 = iParam1;
	Global_78042 = iParam0;
	Global_113386.f_32749.f_5588 = 1;
	__LIB_6__::func_760(iParam0, &(Global_113386.f_32749.f_5510));
}

void func_120()//Position - 0x9CBB
{
	STREAMING::REQUEST_MODEL(joaat("armytrailer2"));
	STREAMING::REQUEST_MODEL(joaat("packer"));
	STREAMING::REQUEST_MODEL(joaat("S_M_Y_Construct_01"));
	STREAMING::REQUEST_MODEL(joaat("S_M_M_Security_01"));
	STREAMING::REQUEST_MODEL(joaat("bison2"));
	while ((((!STREAMING::HAS_MODEL_LOADED(joaat("armytrailer2")) || !STREAMING::HAS_MODEL_LOADED(joaat("packer"))) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Construct_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Security_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bison2")))
	{
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_32))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[1], true, true);
			iLocal_32 = Global_96938[1];
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_32);
		}
		else
		{
			iLocal_32 = VEHICLE::CREATE_VEHICLE(joaat("armytrailer2"), 919.303f, -1553.8795f, 29.7789f, 167.1917f, true, true, false);
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_32);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_33))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[2], true, true);
			iLocal_33 = Global_96938[2];
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_33, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_33, 7);
			__LIB_0__::func_320(iLocal_33, -1);
			__LIB_0__::func_409(iLocal_33, -1);
		}
		else
		{
			iLocal_33 = VEHICLE::CREATE_VEHICLE(joaat("packer"), 919.303f, -1553.8795f, 29.7789f, 167.1917f, true, true, false);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_33, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_33, 7);
			__LIB_0__::func_320(iLocal_33, -1);
			__LIB_0__::func_409(iLocal_33, -1);
		}
	}
	VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_33, iLocal_32, 0.5f);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("armytrailer2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("packer"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison2"));
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[0], true, true);
			iLocal_35[0] = Global_96938.f_9[0];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[0], iLocal_264);
			__LIB_11__::func_168(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[0], true);
		}
		else
		{
			iLocal_35[0] = PED::CREATE_PED(26, joaat("S_M_Y_Construct_01"), 912.34f, -1543.2975f, 29.6469f, 16.169f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[0], iLocal_264);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.3f, -1542.6f, 30.4f, 3f, false))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_35[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[0], true);
			__LIB_11__::func_168(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[1], true, true);
			iLocal_35[1] = Global_96938.f_9[1];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[1], iLocal_264);
			__LIB_11__::func_168(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[1], true);
		}
		else
		{
			iLocal_35[1] = PED::CREATE_PED(26, joaat("S_M_Y_Construct_01"), 917.5028f, -1517.4009f, 29.9673f, 158.5738f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[1], iLocal_264);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.5028f, -1517.4009f, 29.9673f, 3f, false))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_35[1], 917.5028f, -1517.4009f, 29.9673f, 5f, 0);
			}
			__LIB_11__::func_168(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[1], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[2]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[2], true, true);
			iLocal_35[2] = Global_96938.f_9[2];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[2], iLocal_264);
			__LIB_11__::func_168(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[2], true);
		}
		else
		{
			iLocal_35[2] = PED::CREATE_PED(26, joaat("S_M_Y_Construct_01"), 869.6423f, -1541.4226f, 29.2516f, 346.9848f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[2], iLocal_264);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.6423f, -1541.4226f, 29.2516f, 3f, false))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_35[2], 869.6423f, -1541.4226f, 29.2516f, 5f, 0);
			}
			__LIB_11__::func_168(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[2], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[3]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[3]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[3], true, true);
			iLocal_35[3] = Global_96938.f_9[3];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[3], iLocal_264);
			__LIB_11__::func_168(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[3], true);
		}
		else
		{
			iLocal_35[3] = PED::CREATE_PED(26, joaat("S_M_Y_Construct_01"), 884.3046f, -1573.1875f, 29.8247f, 182.9722f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[3], iLocal_264);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.3046f, -1573.1875f, 29.8247f, 3f, false))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_35[3], 884.3046f, -1573.1875f, 29.8247f, 5f, 0);
			}
			__LIB_11__::func_168(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[3], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[4]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[4]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[4], true, true);
			iLocal_35[4] = Global_96938.f_9[4];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[4], iLocal_264);
			__LIB_11__::func_168(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[4], true);
		}
		else
		{
			iLocal_35[4] = PED::CREATE_PED(26, joaat("S_M_Y_Construct_01"), 903.8805f, -1575.0199f, 29.8327f, 308.1952f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[4], iLocal_264);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(903.8805f, -1575.0199f, 29.8327f, 3f, false))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_35[4], 903.8805f, -1575.0199f, 29.8327f, 5f, 0);
			}
			__LIB_11__::func_168(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[4], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[5]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[5]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[5], true, true);
			iLocal_35[5] = Global_96938.f_9[5];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[5], iLocal_264);
			__LIB_11__::func_168(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[5], true);
		}
		else
		{
			iLocal_35[5] = PED::CREATE_PED(26, joaat("S_M_Y_Construct_01"), 906.2186f, -1575.1078f, 29.8125f, 55.9906f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[5], iLocal_264);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(906.2186f, -1575.1078f, 29.8125f, 3f, false))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_35[5], 906.2186f, -1575.1078f, 29.8125f, 5f, 0);
			}
			__LIB_11__::func_168(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[5], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[6]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[8]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[8], true, true);
			iLocal_35[6] = Global_96938.f_9[8];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[6], iLocal_264);
			__LIB_11__::func_168(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[6], true);
		}
		else
		{
			iLocal_35[6] = PED::CREATE_PED(26, joaat("S_M_Y_Construct_01"), 889.285f, -1561.4847f, 29.6539f, 22.2456f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[6], iLocal_264);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.285f, -1561.4847f, 29.6539f, 3f, false))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_35[6], 889.285f, -1561.4847f, 29.6539f, 5f, 0);
			}
			__LIB_11__::func_168(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[6], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[6]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[6], true, true);
			iLocal_36[0] = Global_96938.f_9[6];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_36[0], iLocal_265);
			__LIB_11__::func_168(iLocal_36[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_36[0], true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_36[0], joaat("WEAPON_PISTOL"), 100, false, false);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_36[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			iLocal_36[0] = PED::CREATE_PED(26, joaat("S_M_M_Security_01"), 863.1551f, -1564.5721f, 29.3231f, 130.7946f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_36[0], iLocal_265);
			__LIB_11__::func_168(iLocal_36[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_36[0], true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_36[0], joaat("WEAPON_PISTOL"), 100, false, false);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_36[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[7]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[7], true, true);
			iLocal_36[1] = Global_96938.f_9[7];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_36[1], iLocal_265);
			__LIB_11__::func_168(iLocal_36[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_36[1], true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_36[1], joaat("WEAPON_PISTOL"), 100, false, false);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_36[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			iLocal_36[1] = PED::CREATE_PED(26, joaat("S_M_M_Security_01"), 940.2881f, -1573.8774f, 29.3866f, 269.1856f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_36[1], iLocal_265);
			__LIB_11__::func_168(iLocal_36[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_36[1], true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_36[1], joaat("WEAPON_PISTOL"), 100, false, false);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_36[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Construct_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Security_01"));
}

void func_124()//Position - 0xA862
{
	iLocal_54 = 0;
	while (iLocal_54 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_54]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_35[iLocal_54], true))
		{
			PED::DELETE_PED(&(iLocal_35[iLocal_54]));
		}
		iLocal_54++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_36[0], true))
	{
		PED::DELETE_PED(&(iLocal_36[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_36[1], true))
	{
		PED::DELETE_PED(&(iLocal_36[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_37) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_37, true))
	{
		PED::DELETE_PED(&iLocal_37);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_38) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_38, true))
	{
		PED::DELETE_PED(&iLocal_38);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_39) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_39, true))
	{
		PED::DELETE_PED(&iLocal_39);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_40) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_40, true))
	{
		PED::DELETE_PED(&iLocal_40);
	}
	if (!__LIB_0__::func_295())
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 519.1906f, -2980.9941f, 5.0443f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 270.1911f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_32) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_32, true))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_32);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938[3]))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[3], true, false);
		VEHICLE::DELETE_VEHICLE(&(Global_96938[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_33) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_33, true))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_33);
	}
	STREAMING::REMOVE_ANIM_DICT("cellphone@str");
	STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_START");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_TRUCK");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_LOST");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_STOP");
	MISC::CLEAR_AREA(889.5f, -1553.8f, 30f, 150f, true, false, false, false);
}

void func_125()//Position - 0xAA3A
{
	if (HUD::DOES_BLIP_EXIST(iLocal_49))
	{
		HUD::REMOVE_BLIP(&iLocal_49);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_50))
	{
		HUD::REMOVE_BLIP(&iLocal_50);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_51))
	{
		HUD::REMOVE_BLIP(&iLocal_51);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_52))
	{
		HUD::REMOVE_BLIP(&iLocal_52);
	}
}

void func_128()//Position - 0xAAE5
{
	func_150();
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_35();
			iLocal_266 = 0;
		}
		iLocal_267 = 0;
		iLocal_269 = 0;
		iLocal_346 = 0;
		iLocal_85 = 0;
		iLocal_86 = 0;
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		STREAMING::REMOVE_ANIM_DICT("cellphone@str");
		STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			CAM::DO_SCREEN_FADE_IN(800);
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		__LIB_0__::func_203(&uLocal_99, 3, 0, "LESTER", 0, 1);
		if (__LIB_18__::func_173() == 0)
		{
			__LIB_0__::func_203(&uLocal_99, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		if (__LIB_18__::func_173() == 1)
		{
			__LIB_0__::func_203(&uLocal_99, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		if (__LIB_18__::func_173() == 2)
		{
			__LIB_0__::func_203(&uLocal_99, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		iLocal_53 = 2;
	}
	if (iLocal_53 == 2)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (__LIB_18__::func_173() == 0)
			{
				if (__LIB_38__::func_30(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_53 = 3;
				}
			}
			if (__LIB_18__::func_173() == 1)
			{
				if (__LIB_38__::func_30(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_53 = 3;
				}
			}
			if (__LIB_18__::func_173() == 2)
			{
				if (__LIB_38__::func_30(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_53 = 3;
				}
			}
		}
	}
	if (iLocal_53 == 3)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_50))
		{
			if (!__LIB_10__::func_564())
			{
				if (SYSTEM::TIMERA() > 10500)
				{
					iLocal_50 = __LIB_0__::func_392(Local_92, 1);
				}
			}
		}
		if (__LIB_10__::func_564())
		{
			iLocal_53 = 4;
		}
	}
	if (iLocal_53 == 4)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, false))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_33))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_92, 4f, 4f, 2f, true, true, 2))
						{
							if (__LIB_6__::func_762(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 4f, 3, 0.5f, 0, 1, 0))
							{
								AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_STOP");
								if (HUD::DOES_BLIP_EXIST(iLocal_50))
								{
									HUD::REMOVE_BLIP(&iLocal_50);
								}
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
								__LIB_0__::func_402(0, -1);
								iLocal_53 = 0;
								iLocal_28 = 5;
							}
						}
					}
				}
			}
		}
	}
}

void func_150()//Position - 0xB763
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, false))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, false))
		{
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_33))
			{
				if (__LIB_0__::func_1("HELP_1"))
				{
					HUD::CLEAR_HELP(true);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_49))
				{
					HUD::REMOVE_BLIP(&iLocal_49);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_52))
				{
					if (iLocal_294 == 1)
					{
						if (MISC::GET_GAME_TIMER() < iLocal_85 + 7500)
						{
							HUD::CLEAR_PRINTS();
						}
					}
					HUD::REMOVE_BLIP(&iLocal_52);
				}
				if (iLocal_28 == 4)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (iLocal_346 == 0)
						{
							AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
							AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_LOST");
							iLocal_346 = 1;
						}
						if (iLocal_269 == 1)
						{
							if (MISC::GET_GAME_TIMER() < iLocal_86 + 7500)
							{
								HUD::CLEAR_PRINTS();
							}
							iLocal_269 = 0;
						}
						if (iLocal_53 > 3)
						{
							if (!HUD::DOES_BLIP_EXIST(iLocal_50))
							{
								iLocal_50 = __LIB_0__::func_392(Local_92, 1);
							}
							if (iLocal_267 == 0)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
								{
									__LIB_0__::func_210("GOD_2", 7500, 1);
									iLocal_267 = 1;
								}
							}
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_50))
						{
							HUD::REMOVE_BLIP(&iLocal_50);
						}
						if (iLocal_269 == 0)
						{
							HUD::CLEAR_PRINTS();
							__LIB_0__::func_210("GOD_4", 7500, -1);
							AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_COPS");
							iLocal_86 = MISC::GET_GAME_TIMER();
							iLocal_269 = 1;
							iLocal_346 = 0;
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_49))
				{
					HUD::REMOVE_BLIP(&iLocal_49);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_50))
				{
					HUD::REMOVE_BLIP(&iLocal_50);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, false))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_52))
					{
						iLocal_52 = __LIB_6__::func_825(iLocal_32, 0, 0);
						HUD::SET_BLIP_AS_FRIENDLY(iLocal_52, true);
						if (HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_PRINTS();
						}
						if (iLocal_294 == 0)
						{
							__LIB_0__::func_210("GOD_6", 7500, -1);
							iLocal_85 = MISC::GET_GAME_TIMER();
							iLocal_294 = 1;
						}
						if (!__LIB_0__::func_1("HELP_1"))
						{
							__LIB_0__::func_187("HELP_1");
						}
					}
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_52))
			{
				HUD::REMOVE_BLIP(&iLocal_52);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_50))
			{
				HUD::REMOVE_BLIP(&iLocal_50);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, false))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_49))
				{
					iLocal_49 = __LIB_6__::func_825(iLocal_33, 0, 0);
					HUD::SET_BLIP_AS_FRIENDLY(iLocal_49, true);
				}
			}
			if (iLocal_270 == 0)
			{
				HUD::CLEAR_PRINTS();
				__LIB_0__::func_210("GOD_5", 7500, -1);
				iLocal_270 = 1;
			}
		}
	}
}

void func_156()//Position - 0xBA71
{
	if (iLocal_53 > 1)
	{
		func_150();
	}
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_35();
			iLocal_266 = 0;
		}
		iLocal_296 = 0;
		iLocal_297 = 0;
		iLocal_298 = 0;
		iLocal_299 = 0;
		iLocal_300 = 0;
		iLocal_301 = 0;
		iLocal_302 = 0;
		iLocal_303[0] = 0;
		iLocal_303[1] = 0;
		iLocal_304[0] = 0;
		iLocal_304[1] = 0;
		iLocal_305 = 0;
		iLocal_306 = 0;
		iLocal_307 = 0;
		iLocal_308 = 0;
		iLocal_309 = 0;
		iLocal_310 = 0;
		iLocal_311 = 0;
		iLocal_318 = 0;
		iLocal_319 = 0;
		iLocal_320 = 0;
		iLocal_321 = 0;
		iLocal_322 = 0;
		iLocal_323 = 0;
		iLocal_324 = 0;
		iLocal_325 = 0;
		iLocal_326 = 0;
		iLocal_327 = 0;
		iLocal_328[0] = 0;
		iLocal_328[1] = 0;
		iLocal_329[0] = 0;
		iLocal_329[1] = 0;
		iLocal_330[0] = 0;
		iLocal_330[1] = 0;
		iLocal_331[0] = 0;
		iLocal_331[1] = 0;
		iLocal_332[0] = 0;
		iLocal_332[1] = 0;
		iLocal_333[0] = 0;
		iLocal_333[1] = 0;
		iLocal_334[0] = 0;
		iLocal_334[1] = 0;
		iLocal_336 = 0;
		iLocal_339 = 0;
		iLocal_340[0] = 0;
		iLocal_341[0] = 0;
		iLocal_340[1] = 0;
		iLocal_341[1] = 0;
		iLocal_343 = 0;
		iLocal_344 = 0;
		iLocal_345 = 0;
		iLocal_359 = 0;
		iLocal_270 = 0;
		iLocal_271 = 0;
		iLocal_276 = 0;
		iLocal_286 = 0;
		iLocal_287 = 0;
		iLocal_288 = 0;
		iLocal_289 = 0;
		iLocal_290 = 0;
		iLocal_291 = 0;
		iLocal_292 = 0;
		iLocal_293 = 0;
		iLocal_294 = 0;
		iLocal_312 = 0;
		iLocal_342 = 0;
		iLocal_360 = 0;
		iLocal_362 = 0;
		iLocal_335 = 0;
		iLocal_85 = 0;
		iLocal_86 = 0;
		iLocal_54 = 0;
		while (iLocal_54 <= 6)
		{
			iLocal_268[iLocal_54] = 0;
			iLocal_282[iLocal_54] = 0;
			iLocal_284[iLocal_54] = 0;
			iLocal_285[iLocal_54] = 0;
			iLocal_283[iLocal_54] = 0;
			iLocal_54++;
		}
		STREAMING::REQUEST_ANIM_DICT("cellphone@str");
		STREAMING::REQUEST_ANIM_DICT("misscarsteal4@director_grip");
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, false))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_49))
			{
				iLocal_49 = __LIB_6__::func_825(iLocal_33, 0, 0);
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_49, true);
			}
		}
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!__LIB_0__::func_295())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_34))
			{
				__LIB_6__::func_775(iLocal_34, -1, 1);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_34);
			}
			else
			{
				__LIB_6__::func_775(0, -1, 1);
			}
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_START");
		MISC::CLEAR_AREA(43.5f, -615.8f, 32.4f, 50f, true, false, false, false);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		if (iLocal_342 == 0)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
				__LIB_0__::func_210("GOD_1", 7500, 1);
				iLocal_342 = 1;
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, false))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_TRUCK");
				if (HUD::DOES_BLIP_EXIST(iLocal_49))
				{
					HUD::REMOVE_BLIP(&iLocal_49);
				}
				__LIB_0__::func_403(656, 0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				iLocal_53 = 2;
			}
		}
	}
	if (iLocal_53 == 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_33))
				{
					if (__LIB_0__::func_1("HELP_1"))
					{
						HUD::CLEAR_HELP(true);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_49))
					{
						HUD::REMOVE_BLIP(&iLocal_49);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_52))
					{
						HUD::REMOVE_BLIP(&iLocal_52);
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_93, Local_96, true) < 100f)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_271 == 1)
							{
								if (MISC::GET_GAME_TIMER() < iLocal_86 + 7500)
								{
									HUD::CLEAR_PRINTS();
									iLocal_271 = 0;
								}
							}
							if (iLocal_312 == 0)
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
								__LIB_0__::func_210("GOD_7", 7500, -1);
								iLocal_312 = 1;
							}
						}
						else if (iLocal_271 == 0)
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
							AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_86 = MISC::GET_GAME_TIMER();
							__LIB_0__::func_210("GOD_4", 7500, -1);
							iLocal_271 = 1;
						}
					}
					else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						iLocal_53 = 0;
						iLocal_28 = 4;
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_49))
					{
						HUD::REMOVE_BLIP(&iLocal_49);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, false))
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_52))
						{
							iLocal_52 = __LIB_6__::func_825(iLocal_32, 0, 0);
							HUD::SET_BLIP_AS_FRIENDLY(iLocal_52, true);
							if (HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								HUD::CLEAR_PRINTS();
							}
							if (iLocal_294 == 0)
							{
								__LIB_0__::func_210("GOD_6", 7500, -1);
								iLocal_294 = 1;
							}
							if (!__LIB_0__::func_1("HELP_1"))
							{
								__LIB_0__::func_187("HELP_1");
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_52))
				{
					HUD::REMOVE_BLIP(&iLocal_52);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, false))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_49))
					{
						iLocal_49 = __LIB_6__::func_825(iLocal_33, 0, 0);
						HUD::SET_BLIP_AS_FRIENDLY(iLocal_49, true);
					}
				}
				if (iLocal_270 == 0)
				{
					HUD::CLEAR_PRINTS();
					__LIB_0__::func_210("GOD_5", 7500, -1);
					iLocal_270 = 1;
				}
			}
		}
	}
}

void func_158()//Position - 0xBF57
{
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_35();
			iLocal_266 = 0;
		}
		__LIB_29__::func_735();
		func_120();
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			CAM::DO_SCREEN_FADE_IN(800);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[3]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[3], false))
			{
				if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Global_96938[3])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[3], true, true);
					func_160(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
				}
				if (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Global_96938[3])) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Global_96938[3]))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(Global_96938[3]))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(Global_96938[3])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[3], true, true);
					func_160(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
				}
			}
		}
		__LIB_0__::func_372(79);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		iLocal_53 = 0;
		iLocal_28 = 3;
	}
}

void func_160(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0xC0A8
{
	struct<3> Var0;
	var uVar1;
	if (ENTITY::DOES_ENTITY_EXIST(Global_103950.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_103950.f_4, false))
		{
			if (__LIB_0__::func_314(24) != Global_103950.f_4)
			{
				if (iParam2 == 1)
				{
					if (__LIB_19__::func_977(ENTITY::GET_ENTITY_COORDS(Global_103950.f_4, true), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				func_161(Global_103950.f_4, Param0, fParam1, 24, 0);
			}
		}
	}
}

void func_161(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)//Position - 0xC123
{
	struct<60> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[25], false))
			{
				if (Global_77137.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		__LIB_20__::func_278(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		__LIB_6__::func_760(iParam0, &Var0);
		if (__LIB_0__::func_78(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_78125 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		__LIB_26__::func_263(iParam3, &Var0, Param1, fParam2, __LIB_0__::func_119(iParam0));
		func_162(iParam3, iParam0, 0);
	}
}

void func_162(int iParam0, int iParam1, int iParam2)//Position - 0xC24C
{
	int iVar0;
	if (iParam0 == -1)
	{
		return;
	}
	if (!__LIB_12__::func_98(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_77137.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_77137.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_78044 != -1 && Global_78044 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, true, true);
			}
			if (iParam0 == 24)
			{
				Global_113386.f_32749.f_4801 = __LIB_18__::func_240();
			}
			if (iParam1 != Global_77137.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = __LIB_0__::func_314(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && iParam1 != iVar0)
					{
						func_40(iVar0, 145);
					}
				}
				Global_78043 = iParam1;
				Global_78044 = iParam0;
				Global_78045 = iParam2;
			}
		}
	}
}

void func_182()//Position - 0xC9C6
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.01f);
	iLocal_44 = PED::ADD_SCENARIO_BLOCKING_AREA(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, false, true, true, true);
	iLocal_45 = PED::ADD_SCENARIO_BLOCKING_AREA(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, false, true, true, true);
	iLocal_46 = PED::ADD_SCENARIO_BLOCKING_AREA(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, false, true, true, true);
	iLocal_47 = PED::ADD_SCENARIO_BLOCKING_AREA(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, false, true, true, true);
	iLocal_42 = PED::ADD_SCENARIO_BLOCKING_AREA(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, false, true, true, true);
	iLocal_43 = PED::ADD_SCENARIO_BLOCKING_AREA(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, false, true, true, true);
	if (__LIB_0__::func_294())
	{
		if (Global_94618 == 1)
		{
			__LIB_0__::func_370(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
			iLocal_360 = 1;
			iLocal_266 = 1;
			iLocal_53 = 0;
			iLocal_28 = 5;
		}
		else if (__LIB_0__::func_315() == 0)
		{
			if (__LIB_26__::func_465() && __LIB_20__::func_739(7f, 7f, 7f, 1))
			{
				__LIB_0__::func_370(818.8139f, -1610.4055f, 30.7951f, 264.412f, 1, 0);
			}
			else
			{
				__LIB_0__::func_370(825.5603f, -1605.8247f, 30.9548f, 312.5221f, 1, 0);
			}
			iLocal_266 = 1;
			iLocal_360 = 1;
			iLocal_53 = 0;
			iLocal_28 = 3;
		}
	}
	else if (__LIB_0__::func_2(0))
	{
		iLocal_266 = 1;
		iLocal_360 = 1;
		iLocal_53 = 0;
		iLocal_28 = 3;
	}
	else
	{
		iLocal_53 = 0;
		iLocal_28 = 2;
	}
}

void func_185()//Position - 0xCC4C
{
	if (!__LIB_0__::func_294())
	{
		iLocal_28 = 1;
	}
	else
	{
		iLocal_28 = 1;
	}
}

void func_186()//Position - 0xCC65
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_40))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 45f, -616.2f, 30.8f, true) < 150f)
		{
			STREAMING::REQUEST_MODEL(joaat("S_M_M_Security_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Security_01")))
			{
				iLocal_40 = PED::CREATE_PED(26, joaat("S_M_M_Security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, true, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_40, 324, true);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Security_01"));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_40))
	{
		if (!PED::IS_PED_INJURED(iLocal_40))
		{
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(65.2f, -617.2f, 30.8f, 5f, false))
			{
				if (iLocal_337 == 0)
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_40))
					{
						TASK::CLEAR_PED_TASKS(iLocal_40);
					}
					else
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_40);
					}
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_40, 65.2f, -617.2f, 31f, 2f, 0);
					PED::SET_PED_KEEP_TASK(iLocal_40, true);
					iLocal_89 = MISC::GET_GAME_TIMER();
					iLocal_337 = 1;
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_89 + 5000)
				{
					if (!PED::IS_PED_USING_ANY_SCENARIO(iLocal_40))
					{
						iLocal_337 = 0;
					}
				}
			}
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_40, 1) < 20f)
			{
				if (iLocal_316 == 0)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_40, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
					iLocal_316 = 1;
				}
			}
			else if (iLocal_316 == 1)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_40, PLAYER::PLAYER_PED_ID(), 1, 0, 2);
				iLocal_316 = 0;
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 45f, -616.2f, 30.8f, true) < 50f)
	{
		if (iLocal_338 == 0)
		{
			iLocal_90 = 498972213;
			iLocal_91 = -512924631;
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_90, joaat("prop_sec_barrier_ld_01a"), 61f, -633f, 32f, true, true, false);
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_91, joaat("prop_sec_barrier_ld_01a"), 66f, -618f, 32f, true, true, false);
			iLocal_338 = 1;
		}
		if (iLocal_338 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (Local_93.f_0 > 35f)
				{
					if (fLocal_97 < 1f)
					{
						fLocal_97 = (fLocal_97 + 0.02f);
					}
					else
					{
						fLocal_97 = 1f;
					}
					if (fLocal_97 <= 1f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_90, fLocal_97, false, true);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_91, fLocal_97, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_90, 4, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_91, 4, false, true);
						iLocal_317 = 0;
					}
				}
				if (Local_93.f_0 < 35f)
				{
					if (fLocal_97 > 0f)
					{
						fLocal_97 = (fLocal_97 - 0.02f);
					}
					else
					{
						fLocal_97 = 0f;
					}
					if (fLocal_97 >= 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_90, fLocal_97, false, true);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_91, fLocal_97, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_90, 4, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_91, 4, false, true);
						iLocal_317 = 0;
					}
				}
			}
			else if (iLocal_317 == 0)
			{
				if (Local_93.f_0 < 35f)
				{
					if (fLocal_97 > 0f)
					{
						fLocal_97 = (fLocal_97 - 0.02f);
					}
					else
					{
						fLocal_97 = 0f;
					}
					if (fLocal_97 >= 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_90, fLocal_97, false, true);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_91, fLocal_97, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_90, 4, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_91, 4, false, true);
						iLocal_317 = 1;
					}
				}
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 62.901512f, -638.6329f, 29.918798f, 70.78919f, -617.1338f, 36.917885f, 10.75f, false, true, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_40))
			{
				if (!PED::IS_PED_INJURED(iLocal_40))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (iLocal_314 == 0)
						{
							if (iLocal_313 == 0)
							{
								__LIB_0__::func_203(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
								if (__LIB_35__::func_536(&uLocal_99, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0))
								{
									iLocal_313 = 1;
								}
							}
						}
						else if (iLocal_315 == 0)
						{
							__LIB_0__::func_203(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
							if (__LIB_35__::func_536(&uLocal_99, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0))
							{
								iLocal_315 = 1;
							}
						}
					}
					else if (iLocal_314 == 0)
					{
						__LIB_0__::func_203(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
						if (__LIB_35__::func_536(&uLocal_99, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0))
						{
							iLocal_314 = 1;
						}
					}
				}
			}
		}
	}
}

void func_189()//Position - 0xD0E5
{
	int iVar0;
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (!__LIB_0__::func_75() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (iLocal_28 == 3)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && iLocal_31 == 0)
				{
					if (__LIB_18__::func_173() == 0)
					{
						if (iLocal_29 == 1)
						{
							if (iLocal_291 == 0)
							{
								if (func_191() && func_190())
								{
									if (__LIB_35__::func_536(&uLocal_99, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0))
									{
										iLocal_88 = MISC::GET_GAME_TIMER();
										iLocal_291 = 1;
									}
								}
							}
						}
						if (iLocal_29 == 1)
						{
							if (iLocal_291 == 1 && MISC::GET_GAME_TIMER() > iLocal_88 + 7000)
							{
								if (func_191() && func_190())
								{
									if (__LIB_35__::func_536(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
									{
										iLocal_88 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_29 == 2)
					{
						if (iLocal_325 == 0)
						{
							if (func_191())
							{
								if (__LIB_35__::func_536(&uLocal_99, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_79 = MISC::GET_GAME_TIMER();
									iLocal_325 = 1;
								}
							}
						}
					}
				}
				else if (iLocal_31 == 2 && iLocal_29 == 1)
				{
					if (iLocal_336 == 0)
					{
						if (func_191() && func_190())
						{
							if (__LIB_35__::func_536(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_84 = MISC::GET_GAME_TIMER();
								iLocal_336 = 1;
							}
						}
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_84 + 8000)
					{
						if (func_191() && func_190())
						{
							if (__LIB_35__::func_536(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_84 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				if (iLocal_29 == 4)
				{
					if (iLocal_290 == 0)
					{
						__LIB_0__::func_296();
						if (func_191())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
							if (iVar0 != joaat("WEAPON_UNARMED") && iVar0 != 0)
							{
								if (__LIB_35__::func_536(&uLocal_99, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0))
								{
									iLocal_61 = MISC::GET_GAME_TIMER();
									iLocal_286 = 1;
									iLocal_290 = 1;
								}
							}
							else
							{
								iLocal_61 = MISC::GET_GAME_TIMER();
								iLocal_286 = 1;
								iLocal_290 = 1;
							}
						}
					}
					if (iLocal_290 == 1)
					{
						if (iLocal_286 == 0)
						{
							iLocal_61 = MISC::GET_GAME_TIMER();
							iLocal_286 = 1;
						}
						if (iLocal_286 == 1)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_61 + 9000)
							{
								if (func_191())
								{
									if (__LIB_35__::func_536(&uLocal_99, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0))
									{
										iLocal_286 = 0;
									}
								}
							}
						}
					}
				}
				if (iLocal_29 == 3)
				{
					if (iLocal_322 == 1)
					{
						if (iLocal_288 == 0)
						{
							if (iLocal_289 == 1)
							{
								if (func_191())
								{
									if (__LIB_35__::func_536(&uLocal_99, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0))
									{
										iLocal_288 = 1;
									}
								}
							}
						}
					}
					if (iLocal_287 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, false))
								{
									if (func_191())
									{
										if (__LIB_35__::func_536(&uLocal_99, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_62 = MISC::GET_GAME_TIMER();
											iLocal_288 = 1;
										}
									}
								}
							}
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_62 + 10000)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, false))
								{
									if (func_191())
									{
										if (__LIB_35__::func_536(&uLocal_99, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_62 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
					}
					if (iLocal_323 == 1)
					{
						if (iLocal_324 == 0)
						{
							if (func_191())
							{
								if (__LIB_35__::func_536(&uLocal_99, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_324 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_190()//Position - 0xD423
{
	if (__LIB_18__::func_173() == 0)
	{
		__LIB_0__::func_203(&uLocal_99, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		return 1;
	}
	if (__LIB_18__::func_173() == 1)
	{
		__LIB_0__::func_203(&uLocal_99, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		return 1;
	}
	if (__LIB_18__::func_173() == 2)
	{
		__LIB_0__::func_203(&uLocal_99, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		return 1;
	}
	return 0;
}

int func_191()//Position - 0xD483
{
	int iVar0;
	iLocal_57 = 0;
	while (iLocal_57 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_57]))
		{
			if (!PED::IS_PED_INJURED(iLocal_35[iLocal_57]))
			{
				iVar0 = __LIB_11__::func_868(PLAYER::PLAYER_PED_ID(), iLocal_264, 0, 0, -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
					}
				}
				if (iVar0 == iLocal_35[iLocal_57] && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 15f)
				{
					__LIB_0__::func_203(&uLocal_99, 5, iLocal_35[iLocal_57], "CONSTRUCTION3", 0, 1);
					return 1;
				}
			}
		}
		iLocal_57++;
	}
	return 0;
}

void func_194()//Position - 0xD63E
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		}
		else
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		}
	}
	func_201();
	if (iLocal_303[0])
	{
		if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_328[0] == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_36[0], PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
				iLocal_328[0] = 1;
			}
			if (iLocal_328[0] == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_36[0], joaat("SCRIPT_TASK_LOOK_AT_ENTITY")) != 0 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_36[0], joaat("SCRIPT_TASK_LOOK_AT_ENTITY")) != 1)
				{
					iLocal_328[0] = 0;
				}
			}
		}
		else if (iLocal_328[0] == 1)
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_36[0], PLAYER::PLAYER_PED_ID(), 1, 0, 2);
			iLocal_328[0] = 0;
		}
	}
	if (iLocal_303[1])
	{
		if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_328[1] == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_36[1], PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
				iLocal_328[1] = 1;
			}
			if (iLocal_328[1] == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_36[1], joaat("SCRIPT_TASK_LOOK_AT_ENTITY")) != 0 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_36[1], joaat("SCRIPT_TASK_LOOK_AT_ENTITY")) != 1)
				{
					iLocal_328[1] = 0;
				}
			}
		}
		else if (iLocal_328[1] == 1)
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_36[1], PLAYER::PLAYER_PED_ID(), 1, 0, 2);
			iLocal_328[1] = 0;
		}
	}
	if (iLocal_303[0] && iLocal_303[1])
	{
		if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1))
		{
			iLocal_298 = 1;
			iLocal_299 = 0;
		}
		else
		{
			iLocal_298 = 0;
			iLocal_299 = 1;
		}
	}
	else
	{
		if (iLocal_303[0] && !iLocal_303[1])
		{
			iLocal_298 = 1;
			iLocal_299 = 0;
		}
		if (iLocal_303[1] && !iLocal_303[0])
		{
			iLocal_298 = 0;
			iLocal_299 = 1;
		}
	}
	switch (iLocal_31)
	{
		case 0:
			if (TASK::DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY"))
			{
				if (!TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
				{
					TASK::SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", true);
				}
				if (TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_36[0]))
						{
							if (!PED::IS_PED_BEING_STEALTH_KILLED(iLocal_36[0]))
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(863.1551f, -1564.5721f, 29.3231f, 5f, true))
								{
									iLocal_83[0] = MISC::GET_GAME_TIMER();
									if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_36[0]))
									{
										if (iLocal_341[0] == 0)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_36[0], 863.1551f, -1564.5721f, 29.3231f, 5f, 0);
											iLocal_340[0] = 0;
											iLocal_341[0] = 1;
										}
									}
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_83[0] + 2000)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_36[0], true), 863.1551f, -1564.5721f, 29.3231f, true) > 3f)
									{
										if (iLocal_340[0] == 0)
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[0], 863.1551f, -1564.5721f, 29.3231f, 1f, -1, 0.25f, 0, 40000f);
											iLocal_341[0] = 0;
											iLocal_340[0] = 1;
										}
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_36[1]))
						{
							if (!PED::IS_PED_BEING_STEALTH_KILLED(iLocal_36[1]))
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(940.2881f, -1573.8774f, 29.3866f, 5f, true))
								{
									iLocal_83[1] = MISC::GET_GAME_TIMER();
									if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_36[1]))
									{
										if (iLocal_341[1] == 0)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_36[1], 940.2881f, -1573.8774f, 29.3866f, 5f, 0);
											iLocal_340[1] = 0;
											iLocal_341[1] = 1;
										}
									}
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_83[1] + 2000)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_36[1], true), 940.2881f, -1573.8774f, 29.3866f, true) > 3f)
									{
										if (iLocal_340[1] == 0)
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[1], 940.2881f, -1573.8774f, 29.3866f, 1f, -1, 0.25f, 0, 40000f);
											iLocal_341[1] = 0;
											iLocal_340[1] = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_36[0]))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 20f)
					{
						if ((__LIB_1__::func_562(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_UNARMED") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) || __LIB_0__::func_77(0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 100f) || PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 860.4606f, -1563.5804f, 28.817883f, 865.0807f, -1575.0884f, 30.933239f, 5.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.2284f, 28.277218f, 863.17645f, -1563.2878f, 33.313747f, 4.75f, false, true, 0))
								{
									if (iLocal_334[0] == 0)
									{
										if (!PED::IS_PED_FACING_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID(), 45f))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[0]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[0]);
											}
											else
											{
												TASK::CLEAR_PED_TASKS(iLocal_36[0]);
											}
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_36[0], PLAYER::PLAYER_PED_ID(), 5000);
											iLocal_82[0] = MISC::GET_GAME_TIMER();
											func_198(iLocal_36[0]);
											iLocal_334[0] = 1;
										}
									}
									if (iLocal_334[0] == 1)
									{
										if (MISC::GET_GAME_TIMER() > iLocal_82[0] + 5000)
										{
											iLocal_334[0] = 0;
										}
									}
									if (iLocal_304[0] == 0 && iLocal_304[1] == 0)
									{
										if (iLocal_302 == 0)
										{
											__LIB_5__::func_759(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6);
											iLocal_66 = MISC::GET_GAME_TIMER();
											iLocal_302 = 1;
										}
										else if (MISC::GET_GAME_TIMER() > iLocal_66 + 15000)
										{
											__LIB_5__::func_759(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
											iLocal_66 = MISC::GET_GAME_TIMER();
										}
									}
									else
									{
										if (iLocal_304[0] == 1)
										{
											if (iLocal_305 == 0)
											{
												__LIB_5__::func_759(iLocal_36[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_72 = MISC::GET_GAME_TIMER();
												iLocal_305 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_72 + 15000)
											{
												__LIB_5__::func_759(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_72 = MISC::GET_GAME_TIMER();
											}
										}
										if (iLocal_304[1] == 1)
										{
											if (iLocal_306 == 0)
											{
												__LIB_5__::func_759(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_73 = MISC::GET_GAME_TIMER();
												iLocal_306 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_73 + 15000)
											{
												__LIB_5__::func_759(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_73 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_36[1]))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 15f)
					{
						if ((__LIB_1__::func_562(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_UNARMED") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) || __LIB_0__::func_77(0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 100f))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 939.88617f, -1575.6354f, 28.597832f, 952.9254f, -1575.4835f, 33.194588f, 13.75f, false, true, 0))
								{
									if (iLocal_334[1] == 0)
									{
										if (!PED::IS_PED_FACING_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID(), 45f))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[1]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[1]);
											}
											else
											{
												TASK::CLEAR_PED_TASKS(iLocal_36[1]);
											}
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_36[1], PLAYER::PLAYER_PED_ID(), 5000);
											iLocal_82[1] = MISC::GET_GAME_TIMER();
											func_198(iLocal_36[1]);
											iLocal_334[1] = 1;
										}
									}
									if (iLocal_334[1] == 1)
									{
										if (MISC::GET_GAME_TIMER() > iLocal_82[1] + 5000)
										{
											iLocal_334[1] = 0;
										}
									}
									if (iLocal_304[0] == 0 && iLocal_304[1] == 0)
									{
										if (iLocal_302 == 0)
										{
											__LIB_5__::func_759(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
											iLocal_66 = MISC::GET_GAME_TIMER();
											iLocal_302 = 1;
										}
										else if (MISC::GET_GAME_TIMER() > iLocal_66 + 15000)
										{
											__LIB_5__::func_759(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
											iLocal_66 = MISC::GET_GAME_TIMER();
										}
									}
									else
									{
										if (iLocal_304[1] == 1)
										{
											if (iLocal_305 == 0)
											{
												__LIB_5__::func_759(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_72 = MISC::GET_GAME_TIMER();
												iLocal_305 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_72 + 15000)
											{
												__LIB_5__::func_759(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_72 = MISC::GET_GAME_TIMER();
											}
										}
										if (iLocal_304[0] == 1)
										{
											if (iLocal_306 == 0)
											{
												__LIB_5__::func_759(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_73 = MISC::GET_GAME_TIMER();
												iLocal_306 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_73 + 15000)
											{
												__LIB_5__::func_759(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_73 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		case 2:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (func_195() || iLocal_297 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_36[0]))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()))
						{
							iLocal_81[0] = MISC::GET_GAME_TIMER();
							iLocal_332[0] = 1;
							if (iLocal_331[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_36[0]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[0]);
								}
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_36[0], 50, true);
								TASK::TASK_COMBAT_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID(), 0, 16);
								func_198(iLocal_36[0]);
								iLocal_331[0] = 1;
							}
						}
						else if (iLocal_333[0] == 0)
						{
							if (iLocal_332[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_36[0]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[0]);
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3f, -1, 0.25f, 0, 40000f);
								func_198(iLocal_36[0]);
								iLocal_333[0] = 1;
							}
							if (iLocal_332[0] == 1)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_81[0] + 500)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[0]))
									{
										TASK::CLEAR_PED_TASKS(iLocal_36[0]);
									}
									else
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[0]);
									}
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3f, -1, 0.25f, 0, 40000f);
									func_198(iLocal_36[0]);
									iLocal_333[0] = 1;
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]))
				{
					if (!PED::IS_PED_INJURED(iLocal_36[1]))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()))
						{
							iLocal_81[1] = MISC::GET_GAME_TIMER();
							iLocal_332[1] = 1;
							if (iLocal_331[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[1]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_36[1]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[1]);
								}
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_36[1], 50, true);
								TASK::TASK_COMBAT_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID(), 0, 16);
								func_198(iLocal_36[1]);
								iLocal_331[1] = 1;
							}
						}
						else if (iLocal_333[1] == 0)
						{
							if (iLocal_332[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[1]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_36[1]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[1]);
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3f, -1, 0.25f, 0, 40000f);
								func_198(iLocal_36[1]);
								iLocal_333[1] = 1;
							}
							if (iLocal_332[1] == 1)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_81[1] + 500)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[1]))
									{
										TASK::CLEAR_PED_TASKS(iLocal_36[1]);
									}
									else
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[1]);
									}
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3f, -1, 0.25f, 0, 40000f);
									func_198(iLocal_36[1]);
									iLocal_333[1] = 1;
								}
							}
						}
					}
				}
				if (func_195())
				{
					if (iLocal_307 == 0)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
						{
							PLAYER::SET_MAX_WANTED_LEVEL(5);
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							iLocal_307 = 1;
						}
					}
					if (iLocal_298 == 1)
					{
						if (iLocal_300 == 0)
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[0]))
								{
									__LIB_5__::func_759(iLocal_36[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
									iLocal_71 = MISC::GET_GAME_TIMER();
									iLocal_300 = 1;
								}
							}
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_71 + 7000)
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[0]))
								{
									__LIB_5__::func_759(iLocal_36[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
									iLocal_71 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					if (iLocal_299 == 1)
					{
						if (iLocal_300 == 0)
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[1]))
								{
									__LIB_5__::func_759(iLocal_36[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_71 = MISC::GET_GAME_TIMER();
									iLocal_300 = 1;
								}
							}
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_71 + 7000)
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[1]))
								{
									__LIB_5__::func_759(iLocal_36[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_71 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_339 == 0)
					{
						iLocal_41 = __LIB_11__::func_868(PLAYER::PLAYER_PED_ID(), joaat("COP"), 0, 0, 28);
						if (iLocal_41 != 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_41))
							{
								if (!PED::IS_PED_INJURED(iLocal_41))
								{
									if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_41, 1) < 35f)
									{
										iLocal_339 = 1;
									}
								}
							}
						}
					}
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_339 == 0)
					{
						if (iLocal_298 == 1)
						{
							if (iLocal_301 == 0)
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[0]))
									{
										__LIB_5__::func_759(iLocal_36[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_70 = MISC::GET_GAME_TIMER();
										iLocal_301 = 1;
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_70 + 7000)
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[0]))
									{
										__LIB_5__::func_759(iLocal_36[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_70 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						if (iLocal_299 == 1)
						{
							if (iLocal_301 == 0)
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[1]))
									{
										__LIB_5__::func_759(iLocal_36[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_70 = MISC::GET_GAME_TIMER();
										iLocal_301 = 1;
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_70 + 7000)
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[1]))
									{
										__LIB_5__::func_759(iLocal_36[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_70 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
			}
			if (!func_195())
			{
				if (iLocal_309 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 893.2f, -1556.5f, 30f, true) < 18f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_36[0]))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_65 = MISC::GET_GAME_TIMER();
									iLocal_309 = 1;
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]))
						{
							if (!PED::IS_PED_INJURED(iLocal_36[1]))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_65 = MISC::GET_GAME_TIMER();
									iLocal_309 = 1;
								}
							}
						}
					}
				}
				if (iLocal_297 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_36[0]))
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) > 4f)
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_329[0] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[0]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_36[0]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[0]);
										}
										TASK::TASK_GO_TO_ENTITY(iLocal_36[0], PLAYER::PLAYER_PED_ID(), -1, 0.5f, 2f, 2f, 0);
										func_198(iLocal_36[0]);
										iLocal_329[0] = 1;
									}
									iLocal_80[0] = MISC::GET_GAME_TIMER();
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_80[0] + 500)
								{
									if (iLocal_330[0] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[0]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_36[0]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[0]);
										}
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2f, -1, 0.25f, 0, 40000f);
										func_198(iLocal_36[0]);
										iLocal_330[0] = 1;
									}
								}
							}
							else if (iLocal_361[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_36[0]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[0]);
								}
								TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_STAND_STILL(0, 2000);
								TASK::SET_SEQUENCE_TO_REPEAT(iLocal_48, true);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_36[0], iLocal_48);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
								func_198(iLocal_36[0]);
								iLocal_361[0] = 1;
							}
							if (iLocal_335 == 0)
							{
								if (iLocal_326 == 0 || iLocal_302 == 1)
								{
									if (iLocal_296 == 0)
									{
										if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[0]))
											{
												__LIB_5__::func_759(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1);
												iLocal_67 = MISC::GET_GAME_TIMER();
												iLocal_68 = MISC::GET_GAME_TIMER();
												iLocal_65 = MISC::GET_GAME_TIMER();
												iLocal_309 = 1;
												iLocal_296 = 1;
												iLocal_304[0] = 1;
											}
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_67 + 7000)
									{
										if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[0]))
											{
												__LIB_5__::func_759(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
												iLocal_67 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								else if (iLocal_302 == 0)
								{
									if (iLocal_327 == 0)
									{
										if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[0]))
											{
												__LIB_5__::func_759(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8);
												iLocal_296 = 1;
												iLocal_327 = 1;
											}
										}
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_68 + 7000)
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 15f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[0]))
									{
										__LIB_5__::func_759(iLocal_36[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
										iLocal_68 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_36[1]))
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) > 4f)
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_329[1] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[1]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_36[1]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[1]);
										}
										TASK::TASK_GO_TO_ENTITY(iLocal_36[1], PLAYER::PLAYER_PED_ID(), -1, 0.5f, 2f, 2f, 0);
										func_198(iLocal_36[1]);
										iLocal_329[1] = 1;
									}
									iLocal_80[1] = MISC::GET_GAME_TIMER();
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_80[1] + 500)
								{
									if (iLocal_330[1] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[1]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_36[1]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[1]);
										}
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2f, -1, 0.25f, 0, 40000f);
										func_198(iLocal_36[1]);
										iLocal_330[1] = 1;
									}
								}
							}
							else if (iLocal_361[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36[1]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_36[1]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[1]);
								}
								TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_STAND_STILL(0, 2000);
								TASK::SET_SEQUENCE_TO_REPEAT(iLocal_48, true);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_36[1], iLocal_48);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
								func_198(iLocal_36[1]);
								iLocal_361[1] = 1;
							}
							if (iLocal_335 == 0)
							{
								if (iLocal_326 == 0 || iLocal_302 == 1)
								{
									if (iLocal_296 == 0)
									{
										if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[1]))
											{
												__LIB_5__::func_759(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_67 = MISC::GET_GAME_TIMER();
												iLocal_69 = MISC::GET_GAME_TIMER();
												iLocal_65 = MISC::GET_GAME_TIMER();
												iLocal_309 = 1;
												iLocal_296 = 1;
												iLocal_304[1] = 1;
											}
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_67 + 7000)
									{
										if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[1]))
											{
												__LIB_5__::func_759(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
												iLocal_67 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								else if (iLocal_302 == 0)
								{
									if (iLocal_327 == 0)
									{
										if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[1]))
											{
												__LIB_5__::func_759(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8);
												iLocal_296 = 1;
												iLocal_327 = 1;
											}
										}
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_69 + 7000)
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 10f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_36[1]))
									{
										__LIB_5__::func_759(iLocal_36[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
										iLocal_69 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_309 == 1)
					{
						if (iLocal_335 == 0)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_65 + 22000)
							{
								iLocal_335 = 1;
							}
						}
					}
					if (iLocal_309 == 1)
					{
						if (iLocal_297 == 0)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_65 + 30000)
							{
								PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
								iLocal_297 = 1;
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, true))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_297 = 1;
								}
							}
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_33, 1) < 5f && PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_297 = 1;
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_36[0]))
						{
							if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()))
									{
										iLocal_297 = 1;
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_36[1]))
						{
							if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()))
									{
										iLocal_297 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_195()//Position - 0xED06
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iLocal_64 = 0;
		while (iLocal_64 <= 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_64]))
			{
				if (!PED::IS_PED_INJURED(iLocal_35[iLocal_64]))
				{
					if (__LIB_1__::func_562(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED") && !__LIB_0__::func_77(0))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_64], PLAYER::PLAYER_PED_ID()))
						{
							return 1;
						}
					}
				}
			}
			iLocal_64++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_36[0]))
			{
				if (__LIB_1__::func_562(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED") && !__LIB_0__::func_77(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_36[1]))
			{
				if (__LIB_1__::func_562(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED") && !__LIB_0__::func_77(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_198(int iParam0)//Position - 0xF01A
{
	if (iParam0 == iLocal_36[0])
	{
		iLocal_328[0] = 0;
		iLocal_340[0] = 0;
		iLocal_341[0] = 0;
		iLocal_334[0] = 0;
		iLocal_331[0] = 0;
		iLocal_333[0] = 0;
		iLocal_329[0] = 0;
		iLocal_330[0] = 0;
		iLocal_361[0] = 0;
	}
	if (iParam0 == iLocal_36[1])
	{
		iLocal_328[1] = 0;
		iLocal_340[1] = 0;
		iLocal_341[1] = 0;
		iLocal_334[1] = 0;
		iLocal_331[1] = 0;
		iLocal_333[1] = 0;
		iLocal_329[1] = 0;
		iLocal_330[1] = 0;
		iLocal_361[1] = 0;
	}
}

void func_201()//Position - 0xF11F
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Local_93 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_36[0]))
		{
			Local_95[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_36[0], true) };
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_36[1]))
		{
			Local_95[1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_36[1], true) };
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_36[0]))
		{
			iLocal_303[0] = 1;
		}
		else
		{
			iLocal_303[0] = 0;
		}
	}
	else
	{
		iLocal_303[0] = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_36[1]))
		{
			iLocal_303[1] = 1;
		}
		else
		{
			iLocal_303[1] = 0;
		}
	}
	else
	{
		iLocal_303[1] = 0;
	}
	if (iLocal_31 != 0)
	{
		if (iLocal_31 == 1)
		{
			if (iLocal_303[0] == 1)
			{
				if (iLocal_303[1] == 1)
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1))
					{
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 20f)
						{
							if (((Local_93.f_0 < Local_95[0 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.4764f, 33.304478f, 866.56354f, -1560.9844f, 28.904823f, 8.25f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.2284f, 28.277218f, 863.17645f, -1563.2878f, 33.313747f, 4.75f, false, true, 0))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = MISC::GET_GAME_TIMER();
								iLocal_83[1] = MISC::GET_GAME_TIMER();
							}
						}
						else if (Local_93.f_0 < Local_95[0 /*3*/])
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = MISC::GET_GAME_TIMER();
							iLocal_83[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 15f)
					{
						if ((Local_93.f_0 > Local_95[1 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.3374f, 31.496609f, 936.3553f, -1581.9734f, 27.778118f, 8.25f, false, true, 0))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = MISC::GET_GAME_TIMER();
							iLocal_83[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (Local_93.f_0 > Local_95[1 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = MISC::GET_GAME_TIMER();
						iLocal_83[1] = MISC::GET_GAME_TIMER();
					}
				}
				else if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 15f)
					{
						if ((Local_93.f_0 < Local_95[0 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.4764f, 33.304478f, 866.56354f, -1560.9844f, 28.904823f, 8.25f, false, true, 0))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = MISC::GET_GAME_TIMER();
							iLocal_83[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (Local_93.f_0 < Local_95[0 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = MISC::GET_GAME_TIMER();
						iLocal_83[1] = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (iLocal_303[1] == 1)
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 15f)
				{
					if ((Local_93.f_0 > Local_95[1 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.3374f, 31.496609f, 936.3553f, -1581.9734f, 27.778118f, 8.25f, false, true, 0))
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = MISC::GET_GAME_TIMER();
						iLocal_83[1] = MISC::GET_GAME_TIMER();
					}
				}
				else if (Local_93.f_0 > Local_95[1 /*3*/])
				{
					iLocal_31 = 0;
					iLocal_340[0] = 0;
					iLocal_341[0] = 0;
					iLocal_340[1] = 0;
					iLocal_341[1] = 0;
					iLocal_83[0] = MISC::GET_GAME_TIMER();
					iLocal_83[1] = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (iLocal_31 == 2)
		{
			if (iLocal_297 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.3374f, 31.496609f, 936.3553f, -1581.9734f, 27.778118f, 8.25f, false, true, 0) || Local_93.f_0 > 942f)
				{
					if (!PED::IS_PED_INJURED(iLocal_36[1]))
					{
						if (Local_93.f_0 > Local_95[1 /*3*/])
						{
							if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 90f))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = MISC::GET_GAME_TIMER();
								iLocal_83[1] = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (Local_93.f_0 > 942f)
					{
						if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 90f))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = MISC::GET_GAME_TIMER();
							iLocal_83[1] = MISC::GET_GAME_TIMER();
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.4764f, 33.304478f, 866.56354f, -1560.9844f, 28.904823f, 8.25f, false, true, 0) || Local_93.f_0 < 860f)
				{
					if (!PED::IS_PED_INJURED(iLocal_36[0]))
					{
						if (Local_93.f_0 < Local_95[0 /*3*/])
						{
							if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 90f))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = MISC::GET_GAME_TIMER();
								iLocal_83[1] = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (Local_93.f_0 < 860f)
					{
						if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 90f))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = MISC::GET_GAME_TIMER();
							iLocal_83[1] = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 1)
	{
		if (iLocal_31 != 2)
		{
			if (iLocal_303[0] == 1)
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 20f)
				{
					if ((__LIB_1__::func_562(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_UNARMED") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) || __LIB_0__::func_77(0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 860.4606f, -1563.5804f, 28.817883f, 865.0807f, -1575.0884f, 30.933239f, 5.75f, false, true, 0))
						{
							if (Local_93.f_0 > Local_95[0 /*3*/] || PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 90f))
							{
								iLocal_31 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.2284f, 28.277218f, 863.17645f, -1563.2878f, 33.313747f, 4.75f, false, true, 0))
						{
							iLocal_31 = 1;
						}
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 15f)
				{
					if ((__LIB_1__::func_562(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_UNARMED") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) || __LIB_0__::func_77(0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 939.88617f, -1575.6354f, 28.597832f, 952.9254f, -1575.4835f, 33.194588f, 13.75f, false, true, 0))
						{
							if (Local_93.f_0 < Local_95[1 /*3*/] || PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 90f))
							{
								iLocal_31 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 2)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, 892.9f, -1552.4f, 30f, 40f))
		{
			iLocal_31 = 2;
			iLocal_297 = 1;
		}
		if (iLocal_359 == 1)
		{
			iLocal_31 = 2;
			iLocal_297 = 1;
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_36[0]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_31 = 2;
						iLocal_297 = 1;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_36[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_36[1]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_31 = 2;
						iLocal_297 = 1;
					}
				}
			}
		}
		if (iLocal_326 == 0)
		{
			if (iLocal_325 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_79 + 4000)
				{
					iLocal_78 = 0;
					while (iLocal_78 <= 6)
					{
						if (__LIB_0__::func_75())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_78]))
							{
								if (!PED::IS_PED_INJURED(iLocal_35[iLocal_78]))
								{
									if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iLocal_35[iLocal_78]))
									{
										iLocal_31 = 2;
										iLocal_326 = 1;
									}
								}
							}
						}
						iLocal_78++;
					}
				}
			}
		}
		if ((iLocal_29 == 4 || iLocal_29 == 3) || iLocal_325 == 1)
		{
			iLocal_31 = 2;
			iLocal_322 = 1;
			iLocal_297 = 1;
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (iLocal_303[0] == 1)
			{
				if (__LIB_1__::func_562(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED") && !__LIB_0__::func_77(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (__LIB_1__::func_562(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED") && !__LIB_0__::func_77(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_93, Local_96, true) < 36f)
		{
			if (iLocal_303[0] == 1)
			{
				if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()))
				{
					iLocal_31 = 2;
				}
				if (__LIB_0__::func_76(iLocal_36[0], PLAYER::PLAYER_PED_ID(), 1) < 20f)
				{
					if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_36[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (Local_93.f_2 < 36f || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_31 = 2;
					}
					if (__LIB_0__::func_76(iLocal_36[1], PLAYER::PLAYER_PED_ID(), 1) < 20f)
					{
						if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_36[1]))
						{
							iLocal_31 = 2;
						}
					}
				}
			}
		}
		if (iLocal_303[0] == 1)
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[0], 1) < 20f)
			{
				if (Local_93.f_0 > Local_95[0 /*3*/] && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.4764f, 33.304478f, 866.56354f, -1560.9844f, 28.904823f, 8.25f, false, true, 0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[0], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_36[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (iLocal_303[1] == 1)
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_36[1], 1) < 20f)
			{
				if (Local_93.f_0 < Local_95[1 /*3*/] && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.3374f, 31.496609f, 936.3553f, -1581.9734f, 27.778118f, 8.25f, false, true, 0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_36[1], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_36[1]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
	}
}

void func_202()//Position - 0xFD14
{
	iLocal_55 = 0;
	while (iLocal_55 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_55]))
		{
			if (!PED::IS_PED_INJURED(iLocal_35[iLocal_55]))
			{
				if (iLocal_278[iLocal_55] == 0)
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_55], 1) > 20f)
					{
						iLocal_278[iLocal_55] = 1;
					}
				}
				if (iLocal_278[iLocal_55] == 1)
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_55], 1) < 20f)
					{
						iLocal_278[iLocal_55] = 0;
					}
				}
			}
			else if (iLocal_278[iLocal_55] == 0)
			{
				iLocal_278[iLocal_55] = 1;
			}
		}
		else if (iLocal_278[iLocal_55] == 0)
		{
			iLocal_278[iLocal_55] = 1;
		}
		iLocal_55++;
	}
	if (((((iLocal_278[0] == 1 && iLocal_278[1] == 1) && iLocal_278[2] == 1) && iLocal_278[3] == 1) && iLocal_278[4] == 1) && iLocal_278[5] == 1)
	{
		iLocal_279 = 1;
	}
	else
	{
		iLocal_279 = 0;
	}
	iLocal_54 = 0;
	while (iLocal_54 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_54]))
		{
			if (!PED::IS_PED_INJURED(iLocal_35[iLocal_54]))
			{
				func_207(iLocal_35[iLocal_54]);
				if (iLocal_28 == 3 || iLocal_28 == 4)
				{
					if (iLocal_31 == 2 && iLocal_29 == 0)
					{
						func_206(1);
						if (iLocal_311 == 1)
						{
							__LIB_0__::func_296();
						}
					}
					if (PED::HAS_PED_RECEIVED_EVENT(iLocal_35[iLocal_54], 18))
					{
						if (iLocal_29 != 4)
						{
							func_206(4);
							if (iLocal_311 == 1)
							{
								__LIB_6__::func_771();
							}
							iLocal_359 = 1;
						}
					}
					if (iLocal_29 != 4)
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, 892.9f, -1552.4f, 30f, 40f))
						{
							func_206(4);
							if (iLocal_311 == 1)
							{
								__LIB_6__::func_771();
							}
						}
					}
					if ((((((((func_203(iLocal_35[iLocal_54], iLocal_35[0]) || func_203(iLocal_35[iLocal_54], iLocal_35[1])) || func_203(iLocal_35[iLocal_54], iLocal_35[2])) || func_203(iLocal_35[iLocal_54], iLocal_35[3])) || func_203(iLocal_35[iLocal_54], iLocal_35[4])) || func_203(iLocal_35[iLocal_54], iLocal_35[5])) || func_203(iLocal_35[iLocal_54], iLocal_35[6])) || func_203(iLocal_35[iLocal_54], iLocal_36[0])) || func_203(iLocal_35[iLocal_54], iLocal_36[1]))
					{
						if (iLocal_29 != 4)
						{
							func_206(4);
							if (iLocal_311 == 1)
							{
								__LIB_6__::func_771();
							}
							iLocal_359 = 1;
						}
					}
					if ((__LIB_1__::func_562(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_UNARMED") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || __LIB_0__::func_77(0))
					{
						if (iLocal_297 == 0)
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_54], 1) > 20f)
							{
								if (iLocal_277[iLocal_54] == 1)
								{
									iLocal_277[iLocal_54] = 0;
								}
								if (((((iLocal_279 == 1 && iLocal_29 != 0) && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4) && iLocal_31 != 2)
								{
									func_206(0);
								}
							}
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_54], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], PLAYER::PLAYER_PED_ID()))
							{
								if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
								{
									if (iLocal_326 == 0 && iLocal_297 == 0)
									{
										func_206(1);
										if (iLocal_311 == 1)
										{
											__LIB_0__::func_296();
										}
									}
									else
									{
										func_206(3);
										if (iLocal_311 == 1)
										{
											__LIB_6__::func_771();
										}
									}
								}
							}
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_54], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], PLAYER::PLAYER_PED_ID()))
							{
								if (iLocal_277[iLocal_54] == 0)
								{
									iLocal_60[iLocal_54] = MISC::GET_GAME_TIMER();
									iLocal_277[iLocal_54] = 1;
								}
								if (iLocal_277[iLocal_54] == 1)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_60[iLocal_54] + 24000)
									{
										if ((iLocal_29 != 2 && iLocal_29 != 3) && iLocal_29 != 4)
										{
											func_206(2);
											if (iLocal_311 == 1)
											{
												__LIB_6__::func_771();
											}
										}
									}
								}
							}
						}
						if (iLocal_297 == 1)
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_54], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], PLAYER::PLAYER_PED_ID()))
							{
								if (iLocal_29 != 3 && iLocal_29 != 4)
								{
									func_206(3);
									if (iLocal_311 == 1)
									{
										__LIB_6__::func_771();
									}
								}
							}
						}
						if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_308 == 0)
							{
								iLocal_74 = MISC::GET_GAME_TIMER();
								iLocal_308 = 1;
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_74 + 3000)
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_54], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_29 != 3 && iLocal_29 != 4)
									{
										func_206(3);
										if (iLocal_311 == 1)
										{
											__LIB_6__::func_771();
										}
									}
								}
							}
						}
						else if (iLocal_308 == 1)
						{
							iLocal_308 = 0;
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, true))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_289 = 1;
											func_206(3);
											if (iLocal_311 == 1)
											{
												__LIB_6__::func_771();
											}
										}
									}
								}
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_33, 1) < 5f && PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_289 = 1;
											func_206(3);
											if (iLocal_311 == 1)
											{
												__LIB_6__::func_771();
											}
										}
									}
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 917.3436f, -1554.4198f, 29.266108f, 916.8774f, -1556.4407f, 33.006607f, 2.25f, false, true, 0))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
										{
											if (!PED::IS_PED_INJURED(iLocal_35[0]))
											{
												if (ENTITY::IS_ENTITY_AT_COORD(iLocal_35[0], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, false, true, 0))
												{
													if (iLocal_29 != 3 && iLocal_29 != 4)
													{
														iLocal_289 = 1;
														func_206(3);
														if (iLocal_311 == 1)
														{
															__LIB_6__::func_771();
														}
													}
												}
											}
										}
									}
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[6]))
						{
							if (!PED::IS_PED_INJURED(iLocal_35[6]))
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_35[6], 1) < 20f)
								{
									if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 928.7163f, -1546.671f, 27.346033f, 921.8971f, -1549.7517f, 34.04724f, 6.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 931.868f, -1545.185f, 27.365303f, 925.8857f, -1547.3031f, 34.072052f, 3.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 929.49084f, -1524.8286f, 32.84098f, 929.3696f, -1545.2885f, 37.342575f, 5f, false, true, 0))
									{
										if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[6], PLAYER::PLAYER_PED_ID()))
										{
											if (Local_93.f_2 > 31f)
											{
												if (iLocal_29 != 3 && iLocal_29 != 4)
												{
													iLocal_323 = 1;
													func_206(3);
													if (iLocal_311 == 1)
													{
														__LIB_6__::func_771();
													}
												}
											}
											else if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
											{
												func_206(1);
												if (iLocal_311 == 1)
												{
													__LIB_0__::func_296();
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if (iLocal_276 == 0)
						{
							iLocal_59 = MISC::GET_GAME_TIMER();
							iLocal_276 = 1;
						}
						if (iLocal_276 == 1)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_59 + 4000 || iLocal_29 == 3)
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_54], 1) < 20f)
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_29 != 4)
										{
											func_206(4);
											if (iLocal_311 == 1)
											{
												__LIB_6__::func_771();
											}
										}
									}
								}
							}
						}
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_54], 1) < 40f)
						{
							if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_35[iLocal_54]))
								{
									if (iLocal_29 != 4)
									{
										func_206(4);
										if (iLocal_311 == 1)
										{
											__LIB_6__::func_771();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_54++;
	}
}

int func_203(int iParam0, int iParam1)//Position - 0x10576
{
	if (((__LIB_0__::func_76(iParam0, iParam1, 1) < 20f && PED::IS_PED_FACING_PED(iParam0, iParam1, 90f)) && !PED::IS_PED_INJURED(iParam0)) && PED::IS_PED_INJURED(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_206(int iParam0)//Position - 0x105EF
{
	iLocal_29 = iParam0;
	iLocal_58 = 0;
}

void func_207(int iParam0)//Position - 0x105FE
{
	iLocal_56 = 0;
	while (iLocal_56 <= 6)
	{
		if (iParam0 == iLocal_35[iLocal_56])
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_280[iLocal_56] == 0)
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
					iLocal_280[iLocal_56] = 1;
				}
			}
			else if (iLocal_280[iLocal_56] == 1)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1, 1072, 3);
				iLocal_280[iLocal_56] = 0;
			}
		}
		iLocal_56++;
	}
	switch (iLocal_29)
	{
		case 0:
			if (iLocal_58 == 0)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
				if (iParam0 == iLocal_35[0])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[0], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[0], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[1])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[1], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[1], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[2])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[2], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[2], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[3])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[3], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[3], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[4])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[4], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[4], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[5])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[5], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[5], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[6], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[6], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
						}
					}
				}
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[4]))
				{
					if (!PED::IS_PED_INJURED(iLocal_35[4]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[5]))
						{
							if (!PED::IS_PED_INJURED(iLocal_35[5]))
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_35[4], 1) < 25f)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 926.455f, -1582.3844f, 29.327585f, 909.6322f, -1581.3743f, 31.589067f, 9.5f, false, true, 0) || Local_93.f_1 > -1573f)
									{
										if (iLocal_311 == 0)
										{
											__LIB_0__::func_203(&uLocal_99, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
											__LIB_0__::func_203(&uLocal_99, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_35[4], iLocal_35[5], -1, 0, 2);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_35[5], iLocal_35[4], -1, 0, 2);
											if (!__LIB_0__::func_75())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (__LIB_35__::func_536(&uLocal_99, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
													{
														iLocal_311 = 1;
													}
												}
											}
										}
									}
								}
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, false, true, 1))
								{
									if (iLocal_318 == 0)
									{
										iLocal_76 = MISC::GET_GAME_TIMER();
										iLocal_318 = 1;
									}
									if (iLocal_318 == 1)
									{
										if (MISC::GET_GAME_TIMER() > iLocal_76 + 4000)
										{
											if (iLocal_311 == 0)
											{
												__LIB_0__::func_203(&uLocal_99, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
												__LIB_0__::func_203(&uLocal_99, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
												TASK::TASK_LOOK_AT_ENTITY(iLocal_35[4], iLocal_35[5], -1, 0, 2);
												TASK::TASK_LOOK_AT_ENTITY(iLocal_35[5], iLocal_35[4], -1, 0, 2);
												if (!__LIB_0__::func_75())
												{
													if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
													{
														if (__LIB_35__::func_536(&uLocal_99, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
														{
															iLocal_311 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_311 == 1 && !__LIB_0__::func_75())
								{
									if (iLocal_310 == 0)
									{
										if (TASK::DOES_SCENARIO_EXIST_IN_AREA(865f, -1558.1f, 29.5f, 3f, false))
										{
											TASK::TASK_CLEAR_LOOK_AT(iLocal_35[4]);
											TASK::TASK_CLEAR_LOOK_AT(iLocal_35[5]);
											TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_35[4], 865f, -1558.1f, 29.5f, 3f, 0);
											iLocal_310 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (iLocal_319 == 0)
					{
						if (iLocal_320 == 0)
						{
							iLocal_77 = MISC::GET_GAME_TIMER();
							iLocal_320 = 1;
						}
						if (MISC::GET_GAME_TIMER() > iLocal_77 + 30000)
						{
							if (iLocal_319 == 0)
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(925f, -1561f, 30f, 3f, false))
								{
									TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_35[6], 925f, -1561f, 30f, 3f, 0);
									iLocal_319 = 1;
									iLocal_320 = 0;
								}
							}
						}
					}
					if (iLocal_319 == 1)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_35[6], 925f, -1561f, 30f, 3f, 3f, 3f, false, true, 0))
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_35[6], 1) < 15f && Local_93.f_2 < 40f)
							{
								if (iLocal_321 == 0)
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(909.5f, -1515.5f, 30f, 3f, false))
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[6], 909.5f, -1515.5f, 30f, 50f, 0);
										iLocal_321 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		case 1:
			if (iLocal_58 == 0)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_31 == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f)
							{
								if (iLocal_281[iLocal_56] == 0)
								{
									if (PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iParam0))
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
										}
										if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS(iParam0);
										}
										TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
										TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2f, 1f, 2f, 0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
										TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_48);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
										iLocal_280[iLocal_56] = 0;
										iLocal_281[iLocal_56] = 1;
									}
								}
								if (iLocal_281[iLocal_56] == 1)
								{
									if (!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 0);
										iLocal_281[iLocal_56] = 0;
									}
								}
							}
							else
							{
								if (iLocal_281[iLocal_56] == 1)
								{
									iLocal_281[iLocal_56] = 0;
								}
								if (iParam0 == iLocal_35[0])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[0], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[0], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[0], true);
										}
									}
								}
								if (iParam0 == iLocal_35[1])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[1], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[1], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[1], true);
										}
									}
								}
								if (iParam0 == iLocal_35[2])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[2], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[2], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[2], true);
										}
									}
								}
								if (iParam0 == iLocal_35[3])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[3], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[3], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[3], true);
										}
									}
								}
								if (iParam0 == iLocal_35[4])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[4], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[4], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[4], true);
										}
									}
								}
								if (iParam0 == iLocal_35[5])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[5], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[5], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[5], true);
										}
									}
								}
								if (iParam0 == iLocal_35[6])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[6], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[6], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[6], true);
										}
									}
								}
							}
						}
					}
					else if (iParam0 == iLocal_35[iLocal_56])
					{
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f)
						{
							if (iLocal_281[iLocal_56] == 0)
							{
								if (PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iParam0))
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
									TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_48);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
									iLocal_280[iLocal_56] = 0;
									iLocal_281[iLocal_56] = 1;
								}
							}
							if (iLocal_281[iLocal_56] == 1)
							{
								if (!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 0);
									iLocal_281[iLocal_56] = 0;
								}
							}
						}
						else
						{
							if (iLocal_281[iLocal_56] == 1)
							{
								iLocal_281[iLocal_56] = 0;
							}
							if (iParam0 == iLocal_35[0])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[0], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[0], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[0], true);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[1], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[1], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[1], true);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[2], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[2], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[2], true);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[3], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[3], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[3], true);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[4], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[4], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[4], true);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[5], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[5], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[5], true);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[6], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[6], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[6], true);
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		case 2:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_58 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_264, joaat("PLAYER"));
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iParam0 == iLocal_35[iLocal_56])
					{
						if (__LIB_0__::func_76(iParam0, PLAYER::PLAYER_PED_ID(), 1) < 15f)
						{
							if (__LIB_0__::func_76(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 3f)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
									TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1f, 1f, 2f, 0);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
									TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_48);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
									iLocal_280[iLocal_56] = 0;
								}
							}
						}
						else
						{
							if (iParam0 == iLocal_35[0])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[0], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[0], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[0], true);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[1], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[1], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[1], true);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[2], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[2], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[2], true);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[3], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[3], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[3], true);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[4], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[4], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[4], true);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[5], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[5], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[5], true);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[6], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[6], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[6], true);
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		case 3:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_292 == 0)
			{
				if (iLocal_293 == 0)
				{
					iLocal_63 = MISC::GET_GAME_TIMER();
					iLocal_293 = 1;
				}
				if (iLocal_293 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_63 + 9000)
					{
						PLAYER::SET_MAX_WANTED_LEVEL(5);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						iLocal_292 = 1;
					}
				}
			}
			if (iLocal_58 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_264, joaat("PLAYER"));
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				if (iLocal_28 == 3)
				{
					iLocal_56 = 0;
					while (iLocal_56 <= 6)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (__LIB_0__::func_76(iParam0, PLAYER::PLAYER_PED_ID(), 1) < 100f)
							{
								if (iLocal_282[iLocal_56] == 0)
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
									iLocal_282[iLocal_56] = 1;
								}
								if (iLocal_283[iLocal_56] == 0)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 100f, 0);
									iLocal_280[iLocal_56] = 0;
									iLocal_283[iLocal_56] = 1;
								}
							}
						}
						iLocal_56++;
					}
					if (iLocal_345 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_35[0]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, false))
									{
										if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_33, true) && ENTITY::IS_ENTITY_AT_COORD(iLocal_33, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, false, true, 0))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[0]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[0]);
											}
											if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[0]))
											{
												TASK::CLEAR_PED_TASKS(iLocal_35[0]);
											}
											TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 917.8f, -1561f, 29f, 3f, -1, 0.25f, 0, 40000f);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
											TASK::TASK_PLAY_ANIM(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0f, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_35[0], iLocal_48);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
											iLocal_345 = 1;
										}
									}
								}
							}
						}
					}
					if (iLocal_345 == 1 && iLocal_362 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_35[0]))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_35[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, false, true, 0))
								{
									__LIB_0__::func_203(&uLocal_99, 3, iLocal_35[0], "FHPrepBWorker", 0, 1);
									__LIB_5__::func_759(iLocal_35[0], "FHPB_BBAA", "FHPrepBWorker", 4);
									iLocal_362 = 1;
								}
							}
						}
					}
					if (iLocal_344 == 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_63 + 3000)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[5]))
							{
								if (!PED::IS_PED_INJURED(iLocal_35[5]))
								{
									TASK::TASK_PLAY_ANIM(iLocal_35[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0f, false, false, false);
									iLocal_87 = MISC::GET_GAME_TIMER();
									iLocal_344 = 1;
								}
							}
						}
					}
					else if (iLocal_343 == 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_87 + 5000)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[5]))
							{
								if (!PED::IS_PED_INJURED(iLocal_35[5]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_35[5]);
									TASK::TASK_COMBAT_PED(iLocal_35[5], PLAYER::PLAYER_PED_ID(), 0, 16);
									iLocal_343 = 1;
								}
							}
						}
					}
				}
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_268[iLocal_56] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (ENTITY::DOES_ENTITY_EXIST(iParam0))
							{
								if (!PED::IS_PED_INJURED(iParam0))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
									if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
									{
										if (__LIB_0__::func_76(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 200f)
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
											}
											if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
											{
												TASK::CLEAR_PED_TASKS(iParam0);
											}
											TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
											iLocal_268[iLocal_56] = 1;
										}
									}
									else if (__LIB_0__::func_76(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 100f)
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
										}
										if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS(iParam0);
										}
										TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
										iLocal_268[iLocal_56] = 1;
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			if (iLocal_28 == 4)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_268[iLocal_56] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (ENTITY::DOES_ENTITY_EXIST(iParam0))
							{
								if (!PED::IS_PED_INJURED(iParam0))
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
									TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
									PED::SET_PED_KEEP_TASK(iParam0, true);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
									iLocal_268[iLocal_56] = 1;
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		case 4:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_292 == 0)
			{
				if (iLocal_293 == 0)
				{
					iLocal_63 = MISC::GET_GAME_TIMER();
					iLocal_293 = 1;
				}
				if (iLocal_293 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_63 + 6000)
					{
						PLAYER::SET_MAX_WANTED_LEVEL(5);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						iLocal_292 = 1;
					}
				}
			}
			if (iLocal_58 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_264, joaat("PLAYER"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_56]))
					{
						if (!PED::IS_PED_INJURED(iLocal_35[iLocal_56]))
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_56], 1) < 15f)
							{
								if (__LIB_12__::func_170(iLocal_35[iLocal_56], 6))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_56], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_285[iLocal_56] == 0)
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[iLocal_56]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[iLocal_56]);
											}
											if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[iLocal_56]))
											{
												TASK::CLEAR_PED_TASKS(iLocal_35[iLocal_56]);
											}
											TASK::TASK_HANDS_UP(iLocal_35[iLocal_56], -1, PLAYER::PLAYER_PED_ID(), -1, 0);
											iLocal_285[iLocal_56] = 1;
											iLocal_284[iLocal_56] = 0;
											iLocal_280[iLocal_56] = 0;
											iLocal_75 = MISC::GET_GAME_TIMER();
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_75 + 300)
									{
										iLocal_284[iLocal_56] = 0;
									}
								}
								else if (iLocal_284[iLocal_56] == 0)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[iLocal_56]))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[iLocal_56]);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[iLocal_56]))
									{
										TASK::CLEAR_PED_TASKS(iLocal_35[iLocal_56]);
									}
									TASK::TASK_SMART_FLEE_PED(iLocal_35[iLocal_56], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
									iLocal_284[iLocal_56] = 1;
									iLocal_285[iLocal_56] = 0;
								}
							}
							else if (iLocal_284[iLocal_56] == 0)
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[iLocal_56]))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[iLocal_56]);
								}
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_35[iLocal_56]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_35[iLocal_56]);
								}
								TASK::TASK_SMART_FLEE_PED(iLocal_35[iLocal_56], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
								iLocal_284[iLocal_56] = 1;
								iLocal_285[iLocal_56] = 0;
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
	}
}

void func_209()//Position - 0x1203A
{
	iLocal_37 = __LIB_36__::func_33(0);
	iLocal_38 = __LIB_36__::func_33(1);
	iLocal_39 = __LIB_36__::func_33(2);
	if (__LIB_36__::func_107(iLocal_37, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_37))
		{
			if (!__LIB_36__::func_78(iLocal_37))
			{
				if (!__LIB_0__::func_381())
				{
					if (func_210(iLocal_37))
					{
						if (__LIB_36__::func_79(iLocal_37, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_37, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_37, true);
							TASK::CLEAR_PED_TASKS(iLocal_37);
							iLocal_350 = 0;
							iLocal_353 = 0;
							iLocal_356 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_350 == 0)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_350 = 1;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_37, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_37, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							iLocal_350 = 1;
						}
					}
				}
				if (iLocal_350 == 0)
				{
					if (__LIB_0__::func_381())
					{
						iLocal_350 = 1;
					}
				}
				if (iLocal_347 == 1)
				{
					if ((func_210(iLocal_37) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_37, true)) && iLocal_350 == 0)
					{
						Local_94 = { ENTITY::GET_ENTITY_COORDS(iLocal_37, true) };
						PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1);
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_353 == 0)
							{
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_37, PED::GET_VEHICLE_PED_IS_IN(iLocal_37, false), Local_92, 4, 30f, 786468, 3f, 15f, false);
									iLocal_356 = 0;
									iLocal_353 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(Local_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_356 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(iLocal_37, PED::GET_VEHICLE_PED_IS_IN(iLocal_37, false), VEHICLE::GET_CLOSEST_VEHICLE(Local_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, true);
								iLocal_353 = 0;
								iLocal_356 = 1;
							}
						}
						else if (iLocal_353 == 0)
						{
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_37, PED::GET_VEHICLE_PED_IS_IN(iLocal_37, false), Local_92, 4, 30f, 786468, 3f, 15f, false);
								iLocal_356 = 0;
								iLocal_353 = 1;
							}
						}
					}
					else
					{
						iLocal_350 = 1;
					}
				}
				if (iLocal_350 == 1)
				{
					if (__LIB_36__::func_77(iLocal_37))
					{
						iLocal_350 = 0;
					}
				}
			}
		}
	}
	if (__LIB_36__::func_107(iLocal_39, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_39))
		{
			if (!__LIB_36__::func_78(iLocal_39))
			{
				if (!__LIB_0__::func_381())
				{
					if (func_210(iLocal_39))
					{
						if (__LIB_36__::func_79(iLocal_39, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_39, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_39, true);
							TASK::CLEAR_PED_TASKS(iLocal_39);
							iLocal_352 = 0;
							iLocal_354 = 0;
							iLocal_357 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_352 == 0)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_352 = 1;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_39, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_39, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							iLocal_352 = 1;
						}
					}
				}
				if (iLocal_352 == 0)
				{
					if (__LIB_0__::func_381())
					{
						iLocal_352 = 1;
					}
				}
				if (iLocal_348 == 1)
				{
					if ((func_210(iLocal_39) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_39, true)) && iLocal_352 == 0)
					{
						Local_94 = { ENTITY::GET_ENTITY_COORDS(iLocal_39, true) };
						PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1);
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_354 == 0)
							{
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_39, PED::GET_VEHICLE_PED_IS_IN(iLocal_39, false), Local_92, 4, 30f, 786468, 3f, 15f, false);
									iLocal_357 = 0;
									iLocal_354 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(Local_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_357 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(iLocal_39, PED::GET_VEHICLE_PED_IS_IN(iLocal_39, false), VEHICLE::GET_CLOSEST_VEHICLE(Local_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, true);
								iLocal_354 = 0;
								iLocal_357 = 1;
							}
						}
						else if (iLocal_354 == 0)
						{
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_39, PED::GET_VEHICLE_PED_IS_IN(iLocal_39, false), Local_92, 4, 30f, 786468, 3f, 15f, false);
								iLocal_357 = 0;
								iLocal_354 = 1;
							}
						}
					}
					else
					{
						iLocal_352 = 1;
					}
				}
				if (iLocal_352 == 1)
				{
					if (__LIB_36__::func_77(iLocal_39))
					{
						iLocal_352 = 0;
					}
				}
			}
		}
	}
	if (__LIB_36__::func_107(iLocal_38, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_38))
		{
			if (!__LIB_36__::func_78(iLocal_38))
			{
				if (!__LIB_0__::func_381())
				{
					if (func_210(iLocal_38))
					{
						if (__LIB_36__::func_79(iLocal_38, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_38, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_38, true);
							TASK::CLEAR_PED_TASKS(iLocal_38);
							iLocal_351 = 0;
							iLocal_355 = 0;
							iLocal_358 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_351 == 0)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_351 = 1;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_38, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_38, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							iLocal_351 = 1;
						}
					}
				}
				if (iLocal_351 == 0)
				{
					if (__LIB_0__::func_381())
					{
						iLocal_351 = 1;
					}
				}
				if (iLocal_349 == 1)
				{
					if ((func_210(iLocal_38) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_38, true)) && iLocal_351 == 0)
					{
						Local_94 = { ENTITY::GET_ENTITY_COORDS(iLocal_38, true) };
						PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1);
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_355 == 0)
							{
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_38, PED::GET_VEHICLE_PED_IS_IN(iLocal_38, false), Local_92, 4, 30f, 786468, 3f, 15f, false);
									iLocal_358 = 0;
									iLocal_355 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(Local_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_358 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(iLocal_38, PED::GET_VEHICLE_PED_IS_IN(iLocal_38, false), VEHICLE::GET_CLOSEST_VEHICLE(Local_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, true);
								iLocal_355 = 0;
								iLocal_358 = 1;
							}
						}
						else if (iLocal_355 == 0)
						{
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_38, PED::GET_VEHICLE_PED_IS_IN(iLocal_38, false), Local_92, 4, 30f, 786468, 3f, 15f, false);
								iLocal_358 = 0;
								iLocal_355 = 1;
							}
						}
					}
					else
					{
						iLocal_351 = 1;
					}
				}
				if (iLocal_351 == 1)
				{
					if (__LIB_36__::func_77(iLocal_38))
					{
						iLocal_351 = 0;
					}
				}
			}
		}
	}
}

int func_210(int iParam0)//Position - 0x12663
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == iParam0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, false))
					{
						if ((PED::IS_PED_IN_VEHICLE(iParam0, iLocal_33, false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_33, -1, false) == iParam0) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_33, Local_92, 3f, 3f, 3f, false, true, 0))
						{
							if (iParam0 == iLocal_37)
							{
								iLocal_347 = 1;
							}
							if (iParam0 == iLocal_39)
							{
								iLocal_348 = 1;
							}
							if (iParam0 == iLocal_38)
							{
								iLocal_349 = 1;
							}
							return 1;
						}
					}
				}
			}
		}
	}
	if (iParam0 == iLocal_37)
	{
		iLocal_347 = 0;
	}
	if (iParam0 == iLocal_39)
	{
		iLocal_348 = 0;
	}
	if (iParam0 == iLocal_38)
	{
		iLocal_349 = 0;
	}
	return 0;
}

void func_212()//Position - 0x12750
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_33, false))
		{
			func_215(3);
			return;
		}
		else
		{
			if (__LIB_11__::func_142(&iLocal_33))
			{
				func_215(2);
				return;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, false))
				{
					func_215(1);
					return;
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, false))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_33))
					{
						if ((VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_32) || __LIB_2__::func_49(iLocal_32)) || __LIB_11__::func_142(&iLocal_32))
						{
							func_215(1);
							return;
						}
					}
				}
			}
		}
	}
	if (iLocal_28 == 3 || iLocal_28 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, false))
			{
				if (__LIB_0__::func_76(iLocal_32, PLAYER::PLAYER_PED_ID(), 1) > 600f)
				{
					func_215(5);
					return;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_40))
	{
		if (PED::IS_PED_INJURED(iLocal_40))
		{
			func_215(6);
			return;
		}
	}
}

void func_215(int iParam0)//Position - 0x128D8
{
	iLocal_30 = iParam0;
	if (iLocal_28 != 6)
	{
		iLocal_28 = 6;
		iLocal_53 = 0;
	}
}

void func_217()//Position - 0x12935
{
	if (iLocal_28 == 5)
	{
		if (iLocal_360 == 0)
		{
			__LIB_0__::func_498(657);
		}
	}
}

void func_220()//Position - 0x129EA
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("packer"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("phantom"), false);
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_START");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_TRUCK");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_LOST");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_STOP");
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_42, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_43, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_44, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_45, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_46, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_47, false);
	if (TASK::DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY"))
	{
		if (TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", false);
		}
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_90))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_90, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_91))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_91, 0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_221()//Position - 0x12AAC
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
			iVar0 = __LIB_0__::func_323();
			if (iVar0 != -1)
			{
				if (!func_7(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_26__::func_260();
		}
	}
}

