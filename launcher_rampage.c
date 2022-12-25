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
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
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
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71[3] = { 0, 0, 0 };
	var uLocal_72 = 16;
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
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	var uLocal_245 = 3;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	struct<3> Local_249 = { 0, 0, 0 } ;
	int iLocal_250 = 0;
	struct<2> Local_251 = { 0, 5 } ;
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
	var uLocal_267 = 5;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<42> Var0;
	struct<3> Var1;
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
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	iLocal_49 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_50 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_66 = { 1180.969f, -402.381f, 67.2f };
	Local_67 = { 5f, 0f, 57.33f };
	iLocal_69 = -1;
	iLocal_239 = 77;
	iLocal_240 = -1;
	iLocal_241 = -1;
	iLocal_242 = 1;
	iLocal_243 = 1;
	iLocal_244 = 1;
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	__LIB_37__::func_256();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var1 = { ScriptParam_251.f_1[0 /*3*/] };
	Global_97713 = 1;
	__LIB_37__::func_255(&Var0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		__LIB_0__::func_135(" Force cleanup [TERMINATING]");
		func_360(&Var0, 1);
	}
	if (!__LIB_0__::func_425(108))
	{
		func_230(&Var0, Var1);
	}
	else
	{
		func_1(&Var0, Var1);
	}
}

void func_1(var* uParam0, struct<3> Param1)//Position - 0x12B
{
	while (true)
	{
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			__LIB_0__::func_135("  Ambient - Player isn't within World Point Range");
			func_360(uParam0, 1);
		}
		if (__LIB_14__::func_466() != 2)
		{
			__LIB_0__::func_135("  Ambient - Player is not Trevor");
			func_360(uParam0, 1);
		}
		iLocal_241 = func_228(5f);
		if (iLocal_241 != -1)
		{
			if (!func_222())
			{
				*uParam0 = func_221(iLocal_241);
				StringCopy(&(uParam0->f_1), func_220(iLocal_241), 32);
				uParam0->f_16 = 3;
				uParam0->f_15 = 5f;
				if (*uParam0 == -1)
				{
					__LIB_0__::func_135("  -  Ambient Rampage Mission ID is invalid");
					func_360(uParam0, 1);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)))
				{
					__LIB_0__::func_135("  -  Ambient Rampage Mission ID is invalid");
					func_360(uParam0, 1);
				}
				MISC::SET_BIT(&(Global_113386.f_18574[*uParam0 /*6*/]), 0);
				MISC::SET_BIT(&(Global_113386.f_18574[*uParam0 /*6*/]), 2);
				MISC::CLEAR_BIT(&(Global_113386.f_18574[*uParam0 /*6*/]), 3);
				Global_112473[*uParam0 /*10*/].f_1 = 0;
				if (!__LIB_0__::func_2(0))
				{
					Global_112473[*uParam0 /*10*/].f_3 = 0;
				}
				if (!func_211(*uParam0))
				{
					__LIB_0__::func_135(" RC Ambient Can't Launch - Can_RC_Launch Faled");
					func_360(uParam0, 1);
				}
				else if (!func_5(uParam0))
				{
					__LIB_0__::func_135(" RC Ambient Can't Launch - Launch_RC_Mission Failed");
					func_360(uParam0, 1);
				}
				else
				{
					__LIB_14__::func_806(500, 1);
					MISC::CLEAR_AREA(Param1, uParam0->f_15, true, false, false, false);
					__LIB_0__::func_135(" RC Ambient Launcher Waiting To Terminate");
					Global_112473[*uParam0 /*10*/].f_1 = 0;
					if (func_3(uParam0))
					{
						__LIB_0__::func_135(" Ambient - Ready To Terminate");
						func_360(uParam0, 0);
					}
				}
			}
		}
		else
		{
			if (__LIB_0__::func_1("RAMP_HELP_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to start this Rampage. */))
			{
				HUD::CLEAR_HELP(true);
			}
			iLocal_244 = 0;
		}
		SYSTEM::WAIT(0);
	}
}

int func_3(var* uParam0)//Position - 0x2CA
{
	while (!Global_112473[*uParam0 /*10*/])
	{
		SYSTEM::WAIT(0);
	}
	return 1;
}

int func_5(var* uParam0)//Position - 0x31A
{
	struct<4> Var0;
	char* sVar1;
	if (!__LIB_0__::func_323())
	{
		while (!__LIB_30__::func_872(*uParam0))
		{
			if (__LIB_37__::func_239(*uParam0))
			{
				__LIB_14__::func_862();
			}
			if (!__LIB_37__::func_318(uParam0, *uParam0 != 2))
			{
				__LIB_0__::func_135("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			SYSTEM::WAIT(0);
		}
	}
	if (__LIB_0__::func_75())
	{
		__LIB_0__::func_325();
	}
	if (!__LIB_37__::func_308(uParam0))
	{
		__LIB_0__::func_135("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	__LIB_0__::func_432(*uParam0, &Var0);
	MemCopy(&sVar1, {__LIB_0__::func_45(*uParam0)}, 4);
	__LIB_0__::func_772(&sVar1, Var0.f_3, 0);
	__LIB_0__::func_771(*uParam0);
	if (!__LIB_0__::func_323())
	{
		if (uParam0->f_16 == 2)
		{
			func_25(&(uParam0->f_1), 0);
		}
		else
		{
			func_25(&(uParam0->f_1), 1);
		}
	}
	__LIB_37__::func_271(*uParam0, Var0.f_0);
	return 1;
}

void func_25(char[4] cParam0, int iParam1)//Position - 0xD69
{
	MISC::CLEAR_BIT(&(Global_100441.f_20), 17);
	func_26(cParam0, iParam1, 0);
}

void func_26(char[4] cParam0, int iParam1, int iParam2)//Position - 0xD86
{
	if (Global_100441 != 10 && Global_100441 != 9)
	{
		StringCopy(&Global_103942, cParam0, 32);
		func_28(&Global_103950, cParam0, 0, "Start", iParam1, iParam2);
		__LIB_0__::func_757();
		Global_94619 = 0;
	}
}

void func_28(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1A5F
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_14__::func_466();
	uParam0->f_1 = __LIB_11__::func_762();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_37__::func_272(&(uParam0->f_2884), 0);
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
		__LIB_37__::func_300(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__::func_384(&(uParam0->f_2980));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_211(int iParam0)//Position - 0xD144
{
	char* sVar0;
	if (Global_78319)
	{
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_113386.f_9085 && !__LIB_0__::func_2(1))
	{
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_212(iParam0))
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_100441.f_11 == 6)
	{
		if (Global_100441 < 9)
		{
			__LIB_0__::func_432(iParam0, &sVar0);
			if (MISC::ARE_STRINGS_EQUAL(&(Global_100441.f_3), sVar0))
			{
				__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("candidate_controller")) == 0)
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_212(int iParam0)//Position - 0xD1FD
{
	var uVar0;
	__LIB_0__::func_432(iParam0, &uVar0);
	if (!__LIB_0__::func_215(4))
	{
		if (__LIB_0__::func_781(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_0__::func_767() && !__LIB_0__::func_766())
	{
		return 0;
	}
	if (__LIB_37__::func_254(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = __LIB_0__::func_775();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!__LIB_0__::func_774(iParam0))
	{
		if (!__LIB_37__::func_253(iParam0))
		{
			return 0;
		}
		if (!__LIB_37__::func_252(iParam0))
		{
			return 0;
		}
		if (__LIB_0__::func_720(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_213(5))
		{
			Global_112473[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_112473[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_213(int iParam0)//Position - 0xD2BE
{
	int iVar0;
	char* sVar1;
	int iVar2;
	if (Global_100493.f_373 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_213(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_14__::func_623(iParam0, &sVar1);
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95479[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_100493.f_373 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

char* func_220(int iParam0)//Position - 0xD503
{
	switch (iParam0)
	{
		case 0:
			return "Rampage1";
		case 1:
			return "Rampage3";
		case 2:
			return "Rampage4";
		case 3:
			return "Rampage5";
		case 4:
			return "Rampage2";
		default:
	}
	return "";
}

int func_221(int iParam0)//Position - 0xD557
{
	switch (iParam0)
	{
		case 0:
			return 52;
		case 1:
			return 54;
		case 2:
			return 55;
		case 3:
			return 56;
		case 4:
			return 53;
		default:
	}
	return -1;
}

bool func_222()//Position - 0xD59E
{
	bool bVar0;
	bVar0 = false;
	if (!__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
	{
		return bVar0;
	}
	if (Global_112473[56 /*10*/].f_3)
	{
		return bVar0;
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (iLocal_243)
		{
			HUD::CLEAR_HELP(true);
			__LIB_0__::func_151("RAMP_HELP_CRIM" /* GXT: Rampages can't be triggered while wanted. Lose your wanted rating! */, -1);
			iLocal_243 = 0;
		}
		bVar0 = true;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (iLocal_242)
		{
			HUD::CLEAR_HELP(true);
			__LIB_0__::func_151("RAMP_HELP_FOOT" /* GXT: This rampage has to be triggered on-foot. */, -1);
			iLocal_242 = 0;
		}
		bVar0 = true;
	}
	else if ((__LIB_0__::func_104(0) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || __LIB_0__::func_201())
	{
		if (__LIB_0__::func_1("RAMP_HELP_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to start this Rampage. */))
		{
			if (__LIB_0__::func_104(0))
			{
			}
			else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
			}
			else if (__LIB_0__::func_201())
			{
			}
			HUD::CLEAR_HELP(true);
			iLocal_244 = 0;
		}
		bVar0 = true;
	}
	else if (__LIB_0__::func_425(108))
	{
		if (!iLocal_244)
		{
			if (!__LIB_0__::func_1("RAMP_HELP_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to start this Rampage. */))
			{
				HUD::CLEAR_HELP(true);
				__LIB_0__::func_190("RAMP_HELP_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to start this Rampage. */);
			}
			iLocal_244 = 1;
		}
		bVar0 = !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/);
	}
	return bVar0;
}

int func_228(float fParam0)//Position - 0xD73B
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	if (!__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
	{
		return -1;
	}
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Var1 = { Global_32338[(iLocal_239 + iVar0) /*23*/][0 /*3*/] };
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Var1, true) <= fParam0 && MISC::ABSF((Var2.f_2 - Var1.f_2)) < 1.5f)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_230(var* uParam0, struct<3> Param1)//Position - 0xD7D0
{
	int iVar0;
	int iVar1[5];
	int iVar2;
	iVar0 = 0;
	iVar1[0] = 52;
	iVar1[1] = 53;
	iVar1[2] = 54;
	iVar1[3] = 55;
	iVar1[4] = 56;
	if (!func_356(&iVar1, uParam0, Param1, 5f))
	{
		__LIB_0__::func_135(" Didn't know which RC To Launch");
		func_360(uParam0, 1);
	}
	if (!func_211(*uParam0))
	{
		__LIB_0__::func_135(" RC Can't Launch");
		func_360(uParam0, 1);
	}
	if (__LIB_37__::func_268(*uParam0))
	{
		while (true)
		{
			SYSTEM::WAIT(0);
			if (func_354(*uParam0))
			{
				func_360(uParam0, 1);
			}
		}
	}
	func_276(uParam0);
	MISC::CLEAR_AREA(Param1, uParam0->f_15, true, false, false, false);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (*uParam0 == 52 || *uParam0 == 53)
		{
			if (__LIB_0__::func_121(uParam0->f_28[0]))
			{
				if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], true), 5.1f))
				{
					if (*uParam0 == 52)
					{
						iVar2 = 0;
						while (iVar2 < uParam0->f_41)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[iVar2]))
							{
								if ((__LIB_0__::func_121(uParam0->f_28[0]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar2], uParam0->f_28[0])) || (__LIB_0__::func_121(uParam0->f_28[1]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar2], uParam0->f_28[1])))
								{
									OBJECT::DELETE_OBJECT(&(uParam0->f_41[iVar2]));
								}
							}
							iVar2++;
						}
					}
					PED::SET_PED_TO_RAGDOLL(uParam0->f_28[0], 100, 500, 0, true, true, false);
					PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[0], 1000, true, 0);
					if (__LIB_0__::func_121(uParam0->f_28[1]))
					{
						PED::SET_PED_TO_RAGDOLL(uParam0->f_28[1], 100, 500, 0, true, true, false);
						PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[1], 1000, true, 0);
					}
					__LIB_0__::func_135("Sitting Rampage attacked with explosives, cleaning up");
					func_360(uParam0, 1);
				}
			}
			if (__LIB_0__::func_121(uParam0->f_28[1]))
			{
				if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[1], true), 5.1f))
				{
					if (*uParam0 == 52)
					{
						iVar2 = 0;
						while (iVar2 < uParam0->f_41)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[iVar2]))
							{
								if ((__LIB_0__::func_121(uParam0->f_28[0]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar2], uParam0->f_28[0])) || (__LIB_0__::func_121(uParam0->f_28[1]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar2], uParam0->f_28[1])))
								{
									OBJECT::DELETE_OBJECT(&(uParam0->f_41[iVar2]));
								}
							}
							iVar2++;
						}
					}
					PED::SET_PED_TO_RAGDOLL(uParam0->f_28[1], 100, 500, 0, true, true, false);
					PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[1], 1000, true, 0);
					if (__LIB_0__::func_121(uParam0->f_28[0]))
					{
						PED::SET_PED_TO_RAGDOLL(uParam0->f_28[0], 100, 500, 0, true, true, false);
						PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[0], 1000, true, 0);
					}
					__LIB_0__::func_135("Sitting Rampage attacked with explosives, cleaning up");
					func_360(uParam0, 1);
				}
			}
		}
		if (func_275(uParam0))
		{
			func_274(uParam0);
			__LIB_0__::func_135(" RC combat happening in area, tell peds to flee");
			__LIB_37__::func_295(uParam0);
			func_360(uParam0, 1);
		}
		if (!__LIB_37__::func_318(uParam0, 1))
		{
			__LIB_0__::func_135(" RC Is Not Fine And In Range");
			func_360(uParam0, 1);
		}
		if (__LIB_37__::func_286(52))
		{
			if (TASK::IS_SCENARIO_GROUP_ENABLED("Rampage1"))
			{
				__LIB_0__::func_135(" Turning Off Scenario Group For Rampage 1");
				TASK::SET_SCENARIO_GROUP_ENABLED("Rampage1", false);
			}
		}
		__LIB_37__::func_266(*uParam0);
		__LIB_37__::func_297(&iLocal_240, &(uParam0->f_9), Param1);
		if (iVar0 == 0 && iLocal_240 != -1)
		{
			__LIB_38__::func_796(uParam0, &uLocal_245);
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				__LIB_0__::func_135(" Cutscene Loaded");
				iVar0 = 1;
			}
		}
		Local_249 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if ((!(*uParam0 == 52 && Local_249.f_2 > 34f) && !(*uParam0 == 53 && Local_249.f_2 > 71f)) && !(*uParam0 == 54 && Local_249.f_2 > 30f))
		{
			if (__LIB_37__::func_311(uParam0, 0))
			{
				if (*uParam0 == 53)
				{
					if (func_248(uParam0))
					{
						__LIB_0__::func_135(" Trigger Conditions Met");
						__LIB_14__::func_862();
						if (!func_5(uParam0))
						{
							__LIB_0__::func_135(" RC Can't Launch");
							func_360(uParam0, 1);
						}
						__LIB_0__::func_135(" RC Launcher Waiting To Terminate");
						if (func_3(uParam0))
						{
							__LIB_0__::func_135(" Ready To Terminate");
							func_360(uParam0, 0);
						}
					}
				}
				else if (func_247(uParam0))
				{
					__LIB_0__::func_135(" Trigger Conditions Met");
					__LIB_14__::func_862();
					if (!func_5(uParam0))
					{
						__LIB_0__::func_135(" RC Can't Launch");
						func_360(uParam0, 1);
					}
					__LIB_0__::func_135(" RC Launcher Waiting To Terminate");
					if (func_3(uParam0))
					{
						__LIB_0__::func_135(" Ready To Terminate");
						func_360(uParam0, 0);
					}
				}
			}
			else
			{
				if (*uParam0 == 53)
				{
					func_231(uParam0);
				}
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					iLocal_69 = -1;
					CAM::STOP_GAMEPLAY_HINT(false);
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				}
			}
		}
	}
}

void func_231(var* uParam0)//Position - 0xDCA3
{
	char* sVar0;
	sVar0 = "misstrvram_2";
	switch (iLocal_70)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT(sVar0);
			if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
			{
				iLocal_70++;
			}
			break;
		case 1:
			if (__LIB_0__::func_121(uParam0->f_28[0]))
			{
				if (__LIB_0__::func_76(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), 1) < 30f && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_28[0]))
				{
					__LIB_0__::func_222(&uLocal_72, 0, uParam0->f_28[0], "RAMPAGEHIPSTER", 0, 1);
					iLocal_70++;
				}
			}
			break;
		case 2:
			iLocal_71[0] = PED::CREATE_SYNCHRONIZED_SCENE(Local_66, Local_67, 2);
			if (__LIB_0__::func_121(uParam0->f_28[0]))
			{
				__LIB_16__::func_9(&uLocal_72, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_1", 7, 0, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], iLocal_71[0], sVar0, "hipster_post_post_irony", 8f, -8f, 513, 0, 1000f, 0);
			}
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_71[0], false);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_71[0], true);
			iLocal_70++;
			break;
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_71[0]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_71[0]) >= 0.95f)
				{
					iLocal_70++;
				}
			}
			break;
		case 4:
			iLocal_71[1] = PED::CREATE_SYNCHRONIZED_SCENE(Local_66, Local_67, 2);
			if (__LIB_0__::func_121(uParam0->f_28[0]))
			{
				__LIB_16__::func_9(&uLocal_72, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_2", 7, 0, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], iLocal_71[1], sVar0, "hipster_self_hating_hipster", 8f, -8f, 513, 0, 1000f, 0);
			}
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_71[1], false);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_71[1], true);
			iLocal_70++;
			break;
		case 5:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_71[1]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_71[1]) >= 0.95f)
				{
					iLocal_70++;
				}
			}
			break;
		case 6:
			iLocal_71[2] = PED::CREATE_SYNCHRONIZED_SCENE(Local_66, Local_67, 2);
			if (__LIB_0__::func_121(uParam0->f_28[0]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], iLocal_71[2], sVar0, "hipster_idle", 8f, -8f, 513, 0, 1000f, 0);
			}
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_71[2], true);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_71[2], false);
			iLocal_70++;
			break;
		case 7:
			break;
	}
}

int func_247(var* uParam0)//Position - 0xE6CB
{
	__LIB_14__::func_862();
	if (iLocal_69 < 0)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[1], true)) < 25f)
		{
			return 1;
		}
		switch (*uParam0)
		{
			case 52:
				CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[0], 0.1f, 0f, 0.9f, true, -1, 2500, 2000, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[0], -1, 0, 2);
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-5f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(0.1f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0f);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.3f);
				CAM::SET_GAMEPLAY_HINT_FOV(40f);
				break;
			case 54:
				CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[0], 0f, -0.1f, 0.9f, true, -1, 2500, 2000, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[0], -1, 0, 2);
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-10f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.9f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0f);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
				CAM::SET_GAMEPLAY_HINT_FOV(40f);
				break;
			case 55:
				CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[1], 0f, 0f, 0.9f, true, -1, 2500, 2000, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[1], -1, 0, 2);
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-8f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.9f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0.1f);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
				CAM::SET_GAMEPLAY_HINT_FOV(40f);
				break;
			case 56:
				CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[1], 0f, 0f, 0f, true, -1, 2500, 2000, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[1], -1, 0, 2);
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-5f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(0.15f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0f);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.3f);
				CAM::SET_GAMEPLAY_HINT_FOV(40f);
				break;
		}
		iLocal_69 = MISC::GET_GAME_TIMER() + 2500;
	}
	else if (MISC::GET_GAME_TIMER() > iLocal_69)
	{
		iLocal_69 = -1;
		return 1;
	}
	return 0;
}

int func_248(var uParam0)//Position - 0xE8C0
{
	__LIB_14__::func_862();
	switch (iLocal_237)
	{
		case 0:
			if (__LIB_0__::func_121(uParam0->f_28[0]))
			{
				__LIB_0__::func_429();
				iLocal_237++;
			}
			break;
		case 1:
			if (__LIB_0__::func_121(uParam0->f_28[0]))
			{
				if (!__LIB_0__::func_75())
				{
					if (__LIB_16__::func_9(&uLocal_72, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_3", 8, 0, 0))
					{
						iLocal_238 = PED::CREATE_SYNCHRONIZED_SCENE(Local_66, Local_67, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], iLocal_238, "misstrvram_2", "hipster_cunts_in_america", 8f, -8f, 513, 0, 1000f, 0);
						CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[0], 0f, 0f, 0.5f, true, -1, 2500, 2000, 0);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[0], -1, 0, 2);
						CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
						CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
						CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(0.1f);
						CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0f);
						CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
						CAM::SET_GAMEPLAY_HINT_FOV(40f);
						iLocal_237++;
					}
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_121(uParam0->f_28[0]))
			{
				if (!__LIB_0__::func_75())
				{
					iLocal_237++;
				}
			}
			break;
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_274(var uParam0)//Position - 0x100DD
{
	if (*uParam0 == 52)
	{
		__LIB_0__::func_135(" RAMPAGE 1 - FORCE FREEZE CHAIRS AND PRE-RELEASE FOR B*2124538");
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[3], true);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_41[3]));
			uParam0->f_41[3] = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[4]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[4], true);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_41[4]));
			uParam0->f_41[4] = 0;
		}
	}
}

int func_275(var uParam0)//Position - 0x1014F
{
	if ((*uParam0 == 54 || *uParam0 == 55) || *uParam0 == 56)
	{
		if (PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(PLAYER::PLAYER_PED_ID()) > 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_276(var uParam0)//Position - 0x10189
{
	switch (*uParam0)
	{
		case 52:
			func_353(uParam0);
			iLocal_250 = func_352();
			break;
		case 53:
			func_346(uParam0);
			iLocal_250 = func_344();
			break;
		case 54:
			func_343(uParam0);
			break;
		case 55:
			func_342(uParam0);
			iLocal_250 = func_341();
			break;
		case 56:
			func_277(uParam0);
			break;
		default:
			break;
	}
	if (iLocal_250 != 0)
	{
	}
	uParam0->f_16 = 0;
	if (*uParam0 == 53)
	{
		uParam0->f_15 = 15f;
	}
	else
	{
		uParam0->f_15 = 12f;
	}
	uParam0->f_25 = 1;
}

void func_277(var uParam0)//Position - 0x1022A
{
	char* sVar0;
	int iVar1;
	int iVar2;
	sVar0 = "misstvrram_5";
	iVar1 = joaat("S_M_Y_Marine_03");
	iVar2 = joaat("crusader");
	STREAMING::REQUEST_MODEL(iVar1);
	STREAMING::REQUEST_MODEL(iVar2);
	STREAMING::REQUEST_ANIM_DICT(sVar0);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_GRENADELAUNCHER"), 31, 0);
	while ((!STREAMING::HAS_MODEL_LOADED(iVar1) || !STREAMING::HAS_MODEL_LOADED(iVar2)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_339(&(uParam0->f_28[0]), iVar1, -1299.4f, 2506.24f, 21.07f, -122.79f, 0))
	{
		SYSTEM::WAIT(0);
	}
	func_338(&(uParam0->f_28[0]));
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[0], "RAMP:PED 0");
	TASK::TASK_PLAY_ANIM(uParam0->f_28[0], sVar0, "marines_idle_a", 8f, -8f, -1, 1, 0f, false, false, false);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 0, 0, 0);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 0);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 1);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 2);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 3);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 4);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 5);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 6);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 7);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 8);
	while (!func_339(&(uParam0->f_28[1]), iVar1, -1299.49f, 2505.53f, 21.05f, -101.94f, 0))
	{
		SYSTEM::WAIT(0);
	}
	func_338(&(uParam0->f_28[1]));
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 0);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 1);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 2);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 3);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 4);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 5);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 6);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 7);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 8);
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "RAMP:PED 1");
	TASK::TASK_PLAY_ANIM(uParam0->f_28[1], sVar0, "marines_idle_b", 8f, -8f, -1, 1, 0f, false, false, false);
	while (!func_337(&(uParam0->f_35[0]), iVar2, -1298.1597f, 2504.1533f, 21.062f, 165.48f))
	{
		SYSTEM::WAIT(0);
	}
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[0], 5f);
	func_336(&(uParam0->f_35[0]));
	VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_35[0], 1, false);
	VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_35[0], 1, true);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_35[0], true);
	if (!func_278(&(uParam0->f_41[0]), joaat("WEAPON_GRENADELAUNCHER"), -1297.84f, 2505.91f, 19.34f, __LIB_0__::func_503(-0.5f)))
	{
	}
	else
	{
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], false, false);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_41[0], -1297.84f, 2505.91f, 19.34f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_41[0], __LIB_0__::func_503(-0.5f));
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], true);
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_5_CON", 24);
	uParam0->f_27 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
}

int func_278(int* iParam0, int iParam1, struct<3> Param2, float fParam3)//Position - 0x106B3
{
	int iVar0;
	var uVar1;
	int iVar2;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
		*iParam0 = 0;
	}
	iVar0 = WEAPON::GET_WEAPONTYPE_MODEL(iParam1);
	STREAMING::REQUEST_MODEL(iVar0);
	iVar2 = MISC::GET_GAME_TIMER() + 10000;
	while (MISC::GET_GAME_TIMER() < iVar2)
	{
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			*iParam0 = WEAPON::CREATE_WEAPON_OBJECT(iParam1, -1, Param2, true, 1f, 0, 0, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			if (func_334(&uVar1, iParam1, joaat("gun_root")))
			{
				if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(*iParam0, func_279(&uVar1, iParam1, joaat("gun_root"), 0)))
				{
					WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(*iParam0, func_279(&uVar1, iParam1, joaat("gun_root"), 0));
				}
				else if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(*iParam0, func_279(&uVar1, iParam1, joaat("gun_root"), 1)))
				{
					WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(*iParam0, func_279(&uVar1, iParam1, joaat("gun_root"), 1));
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				ENTITY::SET_ENTITY_COORDS(*iParam0, Param2, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(*iParam0, fParam3);
				return 1;
			}
		}
		SYSTEM::WAIT(0);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	return 0;
}

int func_279(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x107B7
{
	struct<5> Var0;
	int iVar1;
	int iVar2;
	__LIB_36__::func_769(&Var0, *uParam0, uParam0->f_4, uParam0->f_6, uParam0->f_1);
	iVar2 = 0;
	while (func_280(&Var0, iParam1, iVar1, 0))
	{
		if (Var0.f_4 == iParam2)
		{
			if (iParam3 == iVar2)
			{
				return Var0.f_0;
			}
			iVar2++;
		}
		iVar1++;
	}
	return 0;
}

bool func_280(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1080A
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
	var* uVar15;
	struct<4> Var16;
	__LIB_36__::func_769(uParam0, 0, joaat("WAPInvalid"), 0, 0);
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL"):
			if (__LIB_12__::func_582(iLocal_65))
			{
				if (!func_323(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_PISTOL"), -1))
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						case 4:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
						case 5:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
						case 4:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					case 1:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					case 2:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					case 3:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
					case 4:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				case 3:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
				case 4:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_APPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					case 1:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_APPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					case 2:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					case 3:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					case 4:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					case 5:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_APPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					case 1:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_APPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					case 2:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					case 3:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					case 4:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_MICROSMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					case 1:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_MICROSMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					case 2:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					case 3:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
						break;
					case 4:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
					case 5:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					case 6:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_MICROSMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					case 1:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_MICROSMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					case 2:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					case 3:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
						break;
					case 4:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
					case 5:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		case joaat("WEAPON_SMG"):
			if (__LIB_12__::func_582(iLocal_65))
			{
				if (!func_323(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SMG"), -1))
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						case 4:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						case 5:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPScop"), 1, 0);
							break;
						case 6:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						case 7:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						case 4:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPScop"), 1, 0);
							break;
						case 5:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						case 6:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					case 1:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					case 2:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
					case 3:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					case 4:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPScop"), 1, 0);
						break;
					case 5:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					case 6:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			if (__LIB_12__::func_582(iLocal_65))
			{
				if (!func_323(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_ASSAULTRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						case 4:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						case 5:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						case 6:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
							break;
						case 7:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
						case 8:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						case 4:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						case 5:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
							break;
						case 6:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
						case 7:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					case 1:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					case 2:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
					case 3:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					case 4:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					case 5:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
						break;
					case 6:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
					case 7:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			if (__LIB_12__::func_582(iLocal_65))
			{
				if (!func_323(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_CARBINERIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						case 4:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						case 5:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						case 6:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
						case 7:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						case 8:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						case 4:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						case 5:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
						case 6:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						case 7:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					case 1:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					case 2:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
					case 3:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					case 4:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					case 5:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
						break;
					case 6:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					case 7:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				case 3:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
					break;
				case 4:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
				case 5:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_MG"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_MG_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_MG_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_02"), joaat("WAPScop"), 1, 0);
					break;
				case 3:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_MG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			if (__LIB_12__::func_582(iLocal_65))
			{
				if (!func_323(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_COMBATMG"), -1))
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						case 4:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
						case 5:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
						case 4:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					case 1:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					case 2:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					case 3:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
						break;
					case 4:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
				case 3:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				case 4:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNIPERRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
					break;
				case 3:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
					break;
				case 4:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			if (__LIB_12__::func_582(iLocal_65))
			{
				if (!func_323(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_HEAVYSNIPER"), -1))
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					case 1:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
						break;
					case 2:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
						break;
					}
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_MINIGUN_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTSMG_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTSMG_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				case 3:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
					break;
				case 4:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
				case 5:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL50_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL50_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				case 3:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
				case 4:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL50_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				case 3:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				case 4:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				case 5:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				case 6:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				case 7:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip"), 2, 0);
					break;
				case 8:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				case 9:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				case 10:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				case 11:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
				case 12:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
				case 13:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop_2"), 4, 0);
					break;
				case 14:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				case 15:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				case 16:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				case 17:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				case 18:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				case 19:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				case 20:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				case 21:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				case 22:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				case 23:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				case 24:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
				case 25:
					__LIB_36__::func_769(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				case 26:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				case 27:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				case 28:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				case 29:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				case 30:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				case 31:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				case 32:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				case 33:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				case 34:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				case 35:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				case 36:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				case 3:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				case 4:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				case 5:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				case 6:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				case 7:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				case 8:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				case 9:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
				case 10:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				case 11:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
				case 12:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop"), 3, 0);
					break;
				case 13:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop"), 4, 0);
					break;
				case 14:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				case 15:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp_2"), 2, 0);
					break;
				case 16:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				case 17:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				case 18:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				case 19:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				case 20:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				case 21:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				case 22:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				case 23:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_CR_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				case 24:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_CR_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
				case 25:
					__LIB_36__::func_769(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				case 26:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				case 27:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				case 28:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				case 29:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				case 30:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				case 31:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				case 32:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				case 33:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				case 34:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				case 35:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				case 36:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				case 3:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				case 4:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				case 5:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				case 6:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				case 7:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				case 8:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				case 9:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
				case 10:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPScop"), 3, 0);
					break;
				case 11:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop"), 4, 0);
					break;
				case 12:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				case 13:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp"), 2, 0);
					break;
				case 14:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp"), 3, 0);
					break;
				case 15:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp"), 4, 0);
					break;
				case 16:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp"), 5, 0);
					break;
				case 17:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp"), 6, 0);
					break;
				case 18:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp"), 7, 0);
					break;
				case 19:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp"), 8, 0);
					break;
				case 20:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MG_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				case 21:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MG_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
				case 22:
					__LIB_36__::func_769(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				case 23:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				case 24:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				case 25:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				case 26:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				case 27:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				case 28:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				case 29:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				case 30:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				case 31:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				case 32:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				case 33:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 3, 0);
					break;
				case 3:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 4, 0);
					break;
				case 4:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"), joaat("WAPClip"), 5, 0);
					break;
				case 5:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"), joaat("WAPClip"), 6, 0);
					break;
				case 6:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_MK2"), joaat("WAPScop"), 1, 0);
					break;
				case 7:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 1);
					break;
				case 8:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_NV"), joaat("WAPScop"), 3, 0);
					break;
				case 9:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_THERMAL"), joaat("WAPScop"), 4, 0);
					break;
				case 10:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				case 11:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SR_SUPP_03"), joaat("WAPSupp"), 2, 0);
					break;
				case 12:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_08"), joaat("WAPSupp"), 3, 0);
					break;
				case 13:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_09"), joaat("WAPSupp"), 4, 0);
					break;
				case 14:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SR_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				case 15:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SR_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
				case 16:
					__LIB_36__::func_769(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				case 17:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				case 18:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				case 19:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				case 20:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				case 21:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				case 22:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				case 23:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				case 24:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				case 25:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				case 26:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				case 27:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				case 3:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				case 4:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 5, 0);
					break;
				case 5:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				case 6:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				case 7:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_RAIL"), joaat("WAPScop"), 2, 0);
					break;
				case 8:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				case 9:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_FLSH_02"), joaat("WAPFlshLasr"), 2, 0);
					break;
				case 10:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				case 11:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 2, 0);
					break;
				case 12:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_COMP"), joaat("WAPSupp"), 3, 0);
					break;
				case 13:
					__LIB_36__::func_769(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				case 14:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				case 15:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				case 16:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				case 17:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				case 18:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				case 19:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				case 20:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				case 21:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				case 22:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				case 23:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				case 24:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				case 3:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				case 4:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 5, 0);
					break;
				case 5:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				case 6:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				case 7:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				case 8:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				case 9:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SIGHTS_SMG"), joaat("WAPScop"), 2, 0);
					break;
				case 10:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"), joaat("WAPScop"), 3, 0);
					break;
				case 11:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"), joaat("WAPScop"), 4, 0);
					break;
				case 12:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				case 13:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp_2"), 1, 0);
					break;
				case 14:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 2, 0);
					break;
				case 15:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 3, 0);
					break;
				case 16:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 4, 0);
					break;
				case 17:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 5, 0);
					break;
				case 18:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 6, 0);
					break;
				case 19:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 7, 0);
					break;
				case 20:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 8, 0);
					break;
				case 21:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SB_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				case 22:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SB_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
				case 23:
					__LIB_36__::func_769(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				case 24:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				case 25:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				case 26:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				case 27:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				case 28:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				case 29:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				case 30:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				case 31:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				case 32:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				case 33:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				case 34:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			if (__LIB_12__::func_582(iLocal_65))
			{
				if (!func_323(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_PUMPSHOTGUN"), -1))
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
						case 4:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					case 1:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					case 2:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
					case 3:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					case 1:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					case 2:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			if (__LIB_12__::func_582(iLocal_65))
			{
				if (!func_323(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SPECIALCARBINE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						case 4:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
						case 5:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
						case 6:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
						case 7:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						case 8:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
						case 4:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
						case 5:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
						case 6:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						case 7:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
						case 8:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					case 1:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					case 2:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
					case 3:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
						break;
					case 4:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
						break;
					case 5:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
					case 6:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					case 7:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			if (__LIB_12__::func_582(iLocal_65))
			{
				if (!func_323(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SNSPISTOL"), -1))
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					case 1:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					case 2:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			if (__LIB_12__::func_582(iLocal_65))
			{
				if (!func_323(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_MARKSMANRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPScop"), 1, 1);
							break;
						case 4:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
						case 5:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						case 6:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						case 7:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPScop"), 1, 1);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
						case 4:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						case 5:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						case 6:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
						case 7:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					case 1:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					case 2:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPScop"), 1, 1);
						break;
					case 3:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
						break;
					case 4:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					case 5:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					case 6:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			if (__LIB_12__::func_582(iLocal_65))
			{
				if (!func_323(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_REVOLVER"), -1))
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("gun_root"), 1, 0);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("gun_root"), 1, 0);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("gun_root"), 2, 0);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					case 1:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("gun_root"), 1, 0);
						break;
					case 2:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("gun_root"), 2, 0);
						break;
					}
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			if (__LIB_12__::func_582(iLocal_65))
			{
				if (!func_323(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_BULLPUPRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
						case 4:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
							break;
						case 5:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						case 6:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						case 7:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						case 1:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						case 2:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
						case 3:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
							break;
						case 4:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						case 5:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						case 6:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("gun_root"), 1, 0);
							break;
						case 7:
							__LIB_36__::func_769(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					case 1:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					case 2:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
						break;
					case 3:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
						break;
					case 4:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					case 5:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					case 6:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 2, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 3, 0);
					break;
				case 3:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 4, 0);
					break;
				case 4:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"), joaat("WAPClip"), 5, 0);
					break;
				case 5:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				case 6:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				case 7:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				case 8:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
				case 9:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop"), 3, 0);
					break;
				case 10:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPScop"), 4, 0);
					break;
				case 11:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				case 12:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SR_SUPP_03"), joaat("WAPSupp"), 2, 0);
					break;
				case 13:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_08"), joaat("WAPSupp"), 3, 0);
					break;
				case 14:
					__LIB_36__::func_769(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				case 15:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				case 16:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				case 17:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				case 18:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				case 19:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				case 20:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				case 21:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				case 22:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				case 23:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				case 24:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				case 25:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				case 3:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				case 4:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				case 5:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				case 6:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				case 7:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
				case 8:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				case 9:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
				case 10:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
				case 11:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop_2"), 4, 0);
					break;
				case 12:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				case 13:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 2, 0);
					break;
				case 14:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp"), 3, 0);
					break;
				case 15:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp"), 4, 0);
					break;
				case 16:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp"), 5, 0);
					break;
				case 17:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp"), 6, 0);
					break;
				case 18:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp"), 7, 0);
					break;
				case 19:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp"), 8, 0);
					break;
				case 20:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp"), 9, 0);
					break;
				case 21:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				case 22:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip"), 2, 0);
					break;
				case 23:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SC_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				case 24:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SC_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
				case 25:
					__LIB_36__::func_769(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				case 26:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				case 27:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				case 28:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				case 29:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				case 30:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				case 31:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				case 32:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				case 33:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				case 34:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				case 35:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				case 36:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				case 3:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				case 4:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 5, 0);
					break;
				case 5:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				case 6:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				case 7:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_FLSH_03"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				case 8:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				case 9:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_RAIL_02"), joaat("WAPScop"), 2, 0);
					break;
				case 10:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				case 11:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				case 12:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_COMP_02"), joaat("WAPSupp_2"), 3, 0);
					break;
				case 13:
					__LIB_36__::func_769(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				case 14:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				case 15:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				case 16:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				case 17:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				case 18:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				case 19:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				case 20:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				case 21:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				case 22:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				case 23:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				case 24:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				case 3:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				case 4:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				case 5:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				case 6:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				case 7:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
				case 8:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
				case 9:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
				case 10:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"), joaat("WAPScop_2"), 4, 1);
					break;
				case 11:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				case 12:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp_2"), 2, 0);
					break;
				case 13:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				case 14:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				case 15:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				case 16:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				case 17:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				case 18:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				case 19:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				case 20:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				case 21:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				case 22:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MRFL_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				case 23:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MRFL_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
				case 24:
					__LIB_36__::func_769(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				case 25:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				case 26:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				case 27:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				case 28:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				case 29:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				case 30:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				case 31:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				case 32:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				case 33:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				case 34:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				case 35:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"), joaat("WAPClip"), 2, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 3, 0);
					break;
				case 3:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 4, 0);
					break;
				case 4:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"), joaat("WAPClip"), 5, 0);
					break;
				case 5:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				case 6:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
				case 7:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop"), 3, 0);
					break;
				case 8:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				case 9:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
				case 10:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				case 11:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_PI_COMP_03"), joaat("WAPSupp"), 2, 0);
					break;
				case 12:
					__LIB_36__::func_769(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				case 13:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				case 14:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				case 15:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				case 16:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				case 17:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				case 18:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				case 19:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				case 20:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				case 21:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				case 22:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				case 23:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				case 3:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				case 4:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				case 5:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				case 6:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				case 7:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
				case 8:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				case 9:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
				case 10:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
				case 11:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPScop_2"), 4, 0);
					break;
				case 12:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_BP_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				case 13:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_BP_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
				case 14:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				case 15:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 2, 0);
					break;
				case 16:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp"), 3, 0);
					break;
				case 17:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp"), 4, 0);
					break;
				case 18:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp"), 5, 0);
					break;
				case 19:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp"), 6, 0);
					break;
				case 20:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp"), 7, 0);
					break;
				case 21:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp"), 8, 0);
					break;
				case 22:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp"), 9, 0);
					break;
				case 23:
					__LIB_36__::func_769(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				case 24:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip"), 2, 0);
					break;
				case 25:
					__LIB_36__::func_769(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				case 26:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				case 27:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				case 28:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				case 29:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				case 30:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				case 31:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				case 32:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				case 33:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				case 34:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				case 35:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				case 36:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_CERAMICPISTOL"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_CERAMICPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_CERAMICPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_CERAMICPISTOL_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_HEAVYRIFLE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					case 1:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					case 2:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"), joaat("WAPScop"), 1, 0);
						break;
					case 3:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 2, 0);
						break;
					case 4:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					case 5:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					case 6:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					case 7:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYRIFLE_CAMO1"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					case 1:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					case 2:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"), joaat("WAPScop"), 1, 0);
						break;
					case 3:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 2, 0);
						break;
					case 4:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					case 5:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					case 6:
						__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					}
			}
			break;
		case joaat("WEAPON_TACTICALRIFLE"):
			switch (iParam2)
			{
				case 0:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_TACTICALRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				case 1:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_TACTICALRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				case 2:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_FLSH_REH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				case 3:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
				case 4:
					__LIB_36__::func_769(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
			}
			break;
		default:
			iVar12 = __LIB_0__::func_289(iParam1, &uVar15);
			if (iVar12 != -1)
			{
				iVar13 = 0;
				while (iVar13 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar12))
				{
					if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar12, iVar13, &Var16))
					{
						if (!__LIB_0__::func_288(Var16.f_3))
						{
							if (Var16.f_0 == joaat("WAPClip") || Var16.f_0 == joaat("WAPClip_2"))
							{
								iVar1++;
							}
							else if (Var16.f_0 == joaat("WAPFlshLasr") || Var16.f_0 == joaat("WAPFlshLasr_2"))
							{
								iVar2++;
							}
							else if (Var16.f_0 == joaat("WAPScop") || Var16.f_0 == joaat("WAPScop_2"))
							{
								iVar3++;
							}
							else if (Var16.f_0 == joaat("WAPRail") || Var16.f_0 == joaat("WAPRail_2"))
							{
								iVar4++;
							}
							else if (Var16.f_0 == joaat("WAPGrip") || Var16.f_0 == joaat("WAPGrip_2"))
							{
								iVar5++;
							}
							else if (Var16.f_0 == joaat("WAPSupp") || Var16.f_0 == joaat("WAPSupp_2"))
							{
								iVar6++;
							}
							else if (Var16.f_0 == 1731751835)
							{
								iVar7++;
							}
							else if (Var16.f_0 == joaat("gun_root"))
							{
								iVar8++;
							}
							else if (Var16.f_0 == joaat("Gun_GripR"))
							{
								iVar9++;
							}
							else if (Var16.f_0 == joaat("WAPBarrel"))
							{
								iVar10++;
							}
							else
							{
								iVar11++;
							}
							if (iVar14 == iParam2)
							{
								if (Var16.f_0 == joaat("WAPClip") || Var16.f_0 == joaat("WAPClip_2"))
								{
									iVar0 = iVar1;
								}
								else if (Var16.f_0 == joaat("WAPFlshLasr") || Var16.f_0 == joaat("WAPFlshLasr_2"))
								{
									iVar0 = iVar2;
								}
								else if (Var16.f_0 == joaat("WAPScop") || Var16.f_0 == joaat("WAPScop_2"))
								{
									iVar0 = iVar3;
								}
								else if (Var16.f_0 == joaat("WAPRail") || Var16.f_0 == joaat("WAPRail_2"))
								{
									iVar0 = iVar4;
								}
								else if (Var16.f_0 == joaat("WAPGrip") || Var16.f_0 == joaat("WAPGrip_2"))
								{
									iVar0 = iVar5;
								}
								else if (Var16.f_0 == joaat("WAPSupp") || Var16.f_0 == joaat("WAPSupp_2"))
								{
									iVar0 = iVar6;
								}
								else if (Var16.f_0 == 1731751835)
								{
									iVar0 = iVar7;
								}
								else if (Var16.f_0 == joaat("gun_root"))
								{
									iVar0 = iVar8;
								}
								else if (Var16.f_0 == joaat("Gun_GripR"))
								{
									iVar0 = iVar9;
								}
								else if (Var16.f_0 == joaat("WAPBarrel"))
								{
									iVar0 = iVar10;
								}
								else
								{
									iVar0 = iVar11;
								}
								__LIB_36__::func_769(uParam0, Var16.f_3, Var16.f_0, iVar0, Var16.f_1);
							}
							iVar14++;
						}
					}
					iVar13++;
				}
			}
			break;
	}
	if (bParam3)
	{
		uParam0->f_2 = func_281(iParam1, *uParam0);
	}
	return uParam0->f_4 != joaat("WAPInvalid");
}

int func_281(int iParam0, int iParam1)//Position - 0x158FB
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var* uVar4;
	struct<6> Var5;
	int iVar6;
	int iVar7;
	var* uVar8;
	struct<6> Var9;
	char* sVar10;
	struct<4> Var11;
	float fVar12;
	iVar0 = 0;
	fVar1 = 2.5f;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						iVar0 = 155;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 189;
						break;
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = 729;
						break;
					case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
						iVar0 = 18600;
						break;
				}
				break;
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						iVar0 = 136;
						break;
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						iVar0 = 159;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 189;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 735;
						break;
					case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
						iVar0 = 14500;
						break;
				}
				break;
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						iVar0 = 145;
						break;
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						iVar0 = 165;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 185;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 730;
						break;
					case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
						iVar0 = 15800;
						break;
				}
				break;
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						iVar0 = 137;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 190;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 549;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 775;
						break;
					case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
						iVar0 = 15100;
						break;
				}
				break;
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_CLIP_01"):
						iVar0 = 119;
						break;
					case joaat("COMPONENT_SMG_CLIP_02"):
						iVar0 = 134;
						break;
					case joaat("COMPONENT_SMG_CLIP_03"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 210;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
						iVar0 = 549;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 815;
						break;
					case joaat("COMPONENT_SMG_VARMOD_LUXE"):
						iVar0 = 19300;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						iVar0 = 129;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 159;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 189;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 565;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 810;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
						iVar0 = 14400;
						break;
				}
				break;
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						iVar0 = 99;
						break;
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						iVar0 = 105;
						break;
					case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 132;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 150;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 450;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 815;
						break;
					case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
						iVar0 = 17900;
						break;
				}
				break;
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						iVar0 = 110;
						break;
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						iVar0 = 124;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 159;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 450;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 812;
						break;
					case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
						iVar0 = 16500;
						break;
				}
				break;
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MG_CLIP_01"):
						iVar0 = 135;
						break;
					case joaat("COMPONENT_MG_CLIP_02"):
						iVar0 = 145;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						iVar0 = 450;
						break;
					case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
						iVar0 = 15600;
						break;
				}
				break;
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						iVar0 = 119;
						break;
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						iVar0 = 126;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 129;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 559;
						break;
					case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
						iVar0 = 14000;
						break;
				}
				break;
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 189;
						break;
					case joaat("COMPONENT_AT_SR_SUPP"):
						iVar0 = 975;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
						iVar0 = 16900;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						iVar0 = 129;
						break;
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						iVar0 = 139;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 150;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 225;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 899;
						break;
				}
				break;
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 559;
						break;
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 975;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 920;
						break;
					case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
						iVar0 = 13000;
						break;
				}
				break;
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 575;
						break;
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 999;
						break;
				}
				break;
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 128;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 185;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 525;
						break;
				}
				break;
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						iVar0 = -1;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
						iVar0 = 110;
						break;
					case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
						iVar0 = 9700;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2275;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10875;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12400;
						break;
					case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
						iVar0 = 17600;
						break;
				}
				if (__LIB_0__::func_116() && (__LIB_0__::func_163() || __LIB_0__::func_164()))
				{
					iVar0 = 0;
				}
				break;
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4100;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2300;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12450;
						break;
				}
				if (__LIB_0__::func_116() && (__LIB_0__::func_163() || __LIB_0__::func_164()))
				{
					iVar0 = 0;
				}
				break;
			case joaat("WEAPON_PISTOL50"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL50_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_PISTOL50_CLIP_02"):
						iVar0 = 9500;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 2000;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12250;
						break;
					case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
						iVar0 = 20000;
						break;
				}
				if (__LIB_0__::func_116() && (__LIB_0__::func_163() || __LIB_0__::func_164()))
				{
					iVar0 = 0;
				}
				break;
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
						iVar0 = 13700;
						break;
				}
				break;
			case joaat("WEAPON_MARKSMANRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
						iVar0 = 3612;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 1020;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 5000;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 1760;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
						iVar0 = 17200;
						break;
				}
				break;
			case joaat("WEAPON_HEAVYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
						iVar0 = 3680;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 710;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 4800;
						break;
					case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
						iVar0 = 12000;
						break;
				}
				break;
			case joaat("WEAPON_KNUCKLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
						iVar0 = 4900;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
						iVar0 = 5600;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
						iVar0 = 5500;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
						iVar0 = 5200;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
						iVar0 = 4600;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
						iVar0 = 4700;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
						iVar0 = 4800;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
						iVar0 = 4300;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
						iVar0 = 4000;
						break;
				}
				break;
			case joaat("WEAPON_BULLPUPRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
						iVar0 = 108;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
						iVar0 = 9950;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2575;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 11350;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12500;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4275;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
						iVar0 = 16600;
						break;
				}
				break;
			case joaat("WEAPON_SNSPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
						iVar0 = 29;
						break;
					case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
						iVar0 = 9150;
						break;
					case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
						iVar0 = 13900;
						break;
				}
				break;
			case joaat("WEAPON_SPECIALCARBINE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
						iVar0 = 108;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
						iVar0 = 9975;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2525;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 11550;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12500;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
						iVar0 = 18000;
						break;
				}
				break;
			case joaat("WEAPON_MACHINEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
						iVar0 = 3680;
						break;
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 4840;
						break;
				}
				break;
			default:
				iVar2 = __LIB_0__::func_289(iParam0, &uVar4);
				if (iVar2 != -1)
				{
					iVar3 = 0;
					while (iVar3 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar2))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar2, iVar3, &Var5))
						{
							if (!__LIB_0__::func_288(Var5.f_3))
							{
								if (Var5.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (!__LIB_37__::func_212(iParam1))
									{
										Var5.f_5 = -1;
									}
									if (Var5.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var5.f_5;
									}
									if (iParam0 == joaat("WEAPON_HAMMER"))
									{
										if (__LIB_0__::func_116() && (__LIB_0__::func_163() || __LIB_0__::func_164()))
										{
											iVar0 = 0;
										}
									}
								}
							}
						}
						iVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						iVar0 = 9175;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2894 /* Tunable: WEAPONADDON_PISTOL_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1675;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4346 /* Tunable: WEAPONADDON_PISTOL_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4347 /* Tunable: WEAPONADDON_PISTOL_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11039 /* Tunable: LUXE1_ADDONSPISTOL_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4424));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21237 /* Tunable: 1045219855 */;
						break;
				}
				break;
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						iVar0 = 136;
						break;
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_21124 /* Tunable: -1714511790 */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2895 /* Tunable: WEAPONADDON_COMBATPISTOL_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4348 /* Tunable: WEAPONADDON_COMBATPISTOL_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_21125 /* Tunable: -83416429 */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4349 /* Tunable: WEAPONADDON_COMBATPISTOL_SUPP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12428 /* Tunable: WEAPONADDONCOMBAT_PISTOL_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4419 /* Tunable: WEAPONADDON_COMBATPISTOL_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						iVar0 = 145;
						break;
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						iVar0 = 9400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2897 /* Tunable: WEAPONADDON_APPISTOL_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4350 /* Tunable: WEAPONADDON_APPISTOL_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 12200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4351 /* Tunable: WEAPONADDON_APPISTOL_SUPP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11038 /* Tunable: LUXE1_ADDONSAP_PISTOL_GILDED_GUN_METAL_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4413 /* Tunable: WEAPONADDON_APPPISTOL_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
						iVar0 = Global_262145.f_31993 /* Tunable: FIXER_THE_STUDIO_FINISH */;
						break;
				}
				break;
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						iVar0 = 9325;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2898 /* Tunable: WEAPONADDON_MICROSMG_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4354 /* Tunable: WEAPONADDON_MICROSMG_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10800;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4356 /* Tunable: WEAPONADDON_MICROSMG_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12150;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4355 /* Tunable: WEAPONADDON_MICROSMG_SUPP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11042 /* Tunable: LUXE1_ADDONSMICRO_SMG_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4423 /* Tunable: WEAPONADDON_MICROSMG_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
						iVar0 = Global_262145.f_31992 /* Tunable: FIXER_THE_WEED_FINISH */;
						break;
				}
				break;
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_CLIP_01"):
						iVar0 = 119;
						break;
					case joaat("COMPONENT_SMG_CLIP_02"):
						iVar0 = 9475;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2899 /* Tunable: WEAPONADDON_SMG_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_SMG_CLIP_03"):
						iVar0 = Global_262145.f_16642 /* Tunable: ADDONS_SMG_DRUM_MAGAZINE */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4357 /* Tunable: WEAPONADDON_SMG_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
						iVar0 = 10825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4359 /* Tunable: WEAPONADDON_SMG_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4358 /* Tunable: WEAPONADDON_SMG_SUPP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_SMG_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11041 /* Tunable: LUXE1_ADDONSSMG_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4428 /* Tunable: WEAPONADDON_SMG_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21238 /* Tunable: -1113441963 */;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						iVar0 = 9550;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2901 /* Tunable: WEAPONADDON_ASSAULTRIFLE_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
						iVar0 = Global_262145.f_16637 /* Tunable: ADDONS_ASSAULT_RIFLE_DRUM_MAGAZINE */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4367 /* Tunable: WEAPONADDON_ASSRIFLE_GRIP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2125;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4364 /* Tunable: WEAPONADDON_ASSRIFLE_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4366 /* Tunable: WEAPONADDON_ASSRIFLE_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4365 /* Tunable: WEAPONADDON_ASSRIFLE_SUPP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11035 /* Tunable: LUXE1_KIT_ASSAULT_RIFLE_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4414 /* Tunable: WEAPONADDON_ASSAULTRIFLE_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21240 /* Tunable: 2090566072 */;
						break;
				}
				break;
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						iVar0 = 99;
						break;
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						iVar0 = 9775;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2902 /* Tunable: WEAPONADDON_CARBINERIFLE_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
						iVar0 = Global_262145.f_16636 /* Tunable: ADDONS_CARBINE_RIFLE_BOX_MAGAZINE */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4375 /* Tunable: WEAPONADDON_CARBINERRIFLE_GRIP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4372 /* Tunable: WEAPONADDON_CARBINERRIFLE_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 10900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4374 /* Tunable: WEAPONADDON_CARBINERRIFLE_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4373 /* Tunable: WEAPONADDON_CARBINERRIFLE_SUPP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11037 /* Tunable: LUXE1_ADDONSCARBINE_RIFLE_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4417 /* Tunable: WEAPONADDON_CARBINERILE_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21241 /* Tunable: 199705908 */;
						break;
				}
				break;
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						iVar0 = 110;
						break;
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						iVar0 = 9925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2904 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4377 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 10950;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4379 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4378 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_SUPP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11036 /* Tunable: LUXE1_ADDONSADVANCED_RIFLE_GILDED_GUN_METAL_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4412 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MG_CLIP_01"):
						iVar0 = 135;
						break;
					case joaat("COMPONENT_MG_CLIP_02"):
						iVar0 = 9850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2905 /* Tunable: WEAPONADDON_MG_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						iVar0 = 10925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4380 /* Tunable: WEAPONADDON_MACHINEGUN_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12429 /* Tunable: WEAPONADDONMG_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4422 /* Tunable: WEAPONADDON_MG_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						iVar0 = 119;
						break;
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						iVar0 = 10000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2906 /* Tunable: WEAPONADDON_COMBATMG_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4402 /* Tunable: WEAPONADDON_COMBATMG_GRIP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 10975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4403 /* Tunable: WEAPONADDON_COMBATMG_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12430 /* Tunable: WEAPONADDONCOMBAT_MG_ETCHED_GUN_METAL_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4418 /* Tunable: WEAPONADDON_COMBATMG_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21239 /* Tunable: -31847919 */;
						break;
				}
				break;
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 1750;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4384 /* Tunable: WEAPONADDON_PUMPSHOTGUN_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SR_SUPP"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4385 /* Tunable: WEAPONADDON_PUMPSHOTGUN_SUPP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12425 /* Tunable: WEAPONADDONPUMP_SHOTGUN_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4426 /* Tunable: WEAPONADDON_PUMPSHOTGUN_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22961 /* Tunable: -1541473904 */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
						iVar0 = Global_262145.f_31990 /* Tunable: FIXER_THE_BONE_FINISH */;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						iVar0 = 129;
						break;
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						iVar0 = 9625;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2908 /* Tunable: WEAPONADDON_ASSAULTSHOTGUN_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4388 /* Tunable: WEAPONADDON_ASSHOTGUN_GRIP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4389 /* Tunable: WEAPONADDON_ASSHOTGUN_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4390 /* Tunable: WEAPONADDON_ASSHOTGUN_SUPP_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4391 /* Tunable: WEAPONADDON_SNIPER_SCOPE1_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4392 /* Tunable: WEAPONADDON_SNIPER_SCOPE2_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4393 /* Tunable: WEAPONADDON_SNIPER_SUPP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11044 /* Tunable: LUXE1_ADDONSSNIPER_RIFLE_ETCHED_WOOD_GRIP_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4429 /* Tunable: WEAPONADDON_SNIPERRIFLE_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 99;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4394 /* Tunable: WEAPONADDON_HEAVYSNIPER_SCOPE1_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4395 /* Tunable: WEAPONADDON_HEAVYSNIPER_SCOPE2_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21242 /* Tunable: 1329981068 */;
						break;
				}
				break;
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4404 /* Tunable: WEAPONADDON_GRENADELAUNCHER_GRIP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4400 /* Tunable: WEAPONADDON_GRENADELAUNCHER_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 11000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4401 /* Tunable: WEAPONADDON_GRENADELAUNCHER_SCOPE_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						iVar0 = -1;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
						iVar0 = 110;
						break;
					case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
						iVar0 = 9700;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2900 /* Tunable: WEAPONADDON_ASSAULTSMG_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4360 /* Tunable: WEAPONADDON_ASSSMG_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10875;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4363 /* Tunable: WEAPONADDON_ASSSMG_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4361 /* Tunable: WEAPONADDON_ASSSMG_SUPP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12426 /* Tunable: WEAPONADDONASSAULT_SMG_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4362));
						break;
				}
				break;
			case joaat("WEAPON_GUSENBERG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_GUSENBERG_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_GUSENBERG_CLIP_02"):
						iVar0 = Global_262145.f_7060 /* Tunable: VALENTINE_GUSENBERG_WEAPONMOD_EXTENDED_CLIP */;
						break;
				}
				break;
			case joaat("WEAPON_SNSPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_7639 /* Tunable: DLC_WEAPON_ADDON_SNS_PISTOL_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12427 /* Tunable: WEAPONADDONSNS_PISTOL_ETCHED_WOOD_GRIP_FINISH */;
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22966 /* Tunable: 770433911 */;
						break;
				}
				break;
			case joaat("WEAPON_SPECIALCARBINE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
						iVar0 = Global_262145.f_7644 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
						iVar0 = Global_262145.f_16639 /* Tunable: ADDONS_SPECIAL_CARBINE_DRUM_MAGAZINE */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_7647 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_FLASHLIGHT */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = Global_262145.f_7643 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_SCOPE */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_7641 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_SUPPRESSOR */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_7646 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_GRIP */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12431 /* Tunable: WEAPONADDONSPECIAL_CARBINE_ETCHED_GUN_METAL_FINISH */;
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22962 /* Tunable: -2069986193 */;
						break;
				}
				break;
			case joaat("WEAPON_HEAVYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_7645 /* Tunable: DLC_WEAPON_ADDON_HEAVY_PISTOL_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = Global_262145.f_7649 /* Tunable: DLC_WEAPON_ADDON_HEAVY_PISTOL_FLASHLIGHT */;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_7642 /* Tunable: DLC_WEAPON_ADDON_HEAVY_PISTOL_SUPPRESSOR */;
						break;
					case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
						iVar0 = Global_262145.f_7669 /* Tunable: LUXE1_ADDONSHEAVY_PISTOL_ETCHED_WOOD_GRIP_FINISH */;
						break;
				}
				break;
			case joaat("WEAPON_BULLPUPRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_7652 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_7655 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_FLASHLIGHT */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_7650 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_SUPPRESSOR */;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = Global_262145.f_7651 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_SCOPE */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_7653 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_GRIP */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
						iVar0 = Global_262145.f_12432 /* Tunable: WEAPONADDONBULLPUP_RIFLE_GILDED_GUN_METAL_FINISH */;
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22965 /* Tunable: -1864587586 */;
						break;
				}
				break;
			case joaat("WEAPON_VINTAGEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_8127 /* Tunable: DLC_HIPSTER_WEAPON_MOD_VINTAGE_PISTOL_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_8128 /* Tunable: DLC_HIPSTER_WEAPON_MOD_VINTAGE_PISTOL_SUPPRESSOR */;
						break;
				}
				break;
			case joaat("WEAPON_HEAVYSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
						iVar0 = Global_262145.f_8856 /* Tunable: LTS_HEAVY_SHOTGUN_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
						iVar0 = Global_262145.f_16643 /* Tunable: ADDONS_HEAVY_SHOTGUN_DRUM_MAGAZINE */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_8857 /* Tunable: LTS_HEAVY_SHOTGUN_FLASHLIGHT */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_8858 /* Tunable: LTS_HEAVY_SHOTGUN_SUPPRESSOR */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_8859 /* Tunable: LTS_HEAVY_SHOTGUN_GRIP */;
						break;
				}
				break;
			case joaat("WEAPON_MARKSMANRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_8862 /* Tunable: LTS_MARKSMAN_RIFLE_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_8863 /* Tunable: LTS_MARKSMAN_RIFLE_FLASHLIGHT */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_8865 /* Tunable: LTS_MARKSMAN_RIFLE_SUPPRESSOR */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_8866 /* Tunable: LTS_MARKSMAN_RIFLE_GRIP */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_8867 /* Tunable: LUXE1_ADDONSMARKSMAN_RIFLE_YUSUF_AMIR_LUXURY_FINISH */;
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22963 /* Tunable: -2073299738 */;
						break;
				}
				break;
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4100;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_15134 /* Tunable: WEAPONADDON_BULLPUPSHOTGUN_GRIP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4386 /* Tunable: WEAPONADDON_BULLPUPSHOTGUN_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4387 /* Tunable: WEAPONADDON_BULLPUPSHOTGUN_SUPP_EXPENDITURE_TUNABLE */));
						break;
				}
				if (__LIB_0__::func_116() && (__LIB_0__::func_163() || __LIB_0__::func_164()))
				{
					iVar0 = 0;
				}
				break;
			case joaat("WEAPON_PISTOL50"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL50_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_PISTOL50_CLIP_02"):
						iVar0 = 9500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2896 /* Tunable: WEAPONADDON_PISTOL50_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 2000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4352 /* Tunable: WEAPONADDON_DLCPISTOL50_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4353 /* Tunable: WEAPONADDON_DLCPISTOL50_SUPP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11040 /* Tunable: LUXE1_ADDONSPISTOL_50_PLATINUM_PEARL_DELUXE_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4425 /* Tunable: WEAPONADDON_PISTOL50_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				if (__LIB_0__::func_116() && (__LIB_0__::func_163() || __LIB_0__::func_164()))
				{
					iVar0 = 0;
				}
				break;
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11043 /* Tunable: LUXE1_ADDONSSAWED_OFF_SHOTGUN_GILDED_GUN_METAL_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4427 /* Tunable: WEAPONADDON_SAWNOFFSHOTGUN_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			case joaat("WEAPON_KNUCKLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
						iVar0 = Global_262145.f_11365 /* Tunable: LUXE2_THE_PIMP_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4432 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_PIMP_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
						iVar0 = Global_262145.f_11366 /* Tunable: LUXE2_THE_BALLAS_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4433 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_BALLAS_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
						iVar0 = Global_262145.f_11367 /* Tunable: LUXE2_THE_HUSTLER_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4434 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_HUSTLER_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
						iVar0 = Global_262145.f_11368 /* Tunable: LUXE2_THE_ROCK_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4435 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_ROCK_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
						iVar0 = Global_262145.f_11369 /* Tunable: LUXE2_THE_HATER_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4436 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_HATER_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
						iVar0 = Global_262145.f_11370 /* Tunable: LUXE2_THE_LOVER_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4437 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_LOVER_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
						iVar0 = Global_262145.f_11371 /* Tunable: LUXE2_THE_PLAYER_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4438 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_PLAYER_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
						iVar0 = Global_262145.f_11372 /* Tunable: LUXE2_THE_KING_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4439 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_KING_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
						iVar0 = Global_262145.f_11373 /* Tunable: LUXE2_THE_VAGOS_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4440 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_VAGOS_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			case joaat("WEAPON_MACHINEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_11390 /* Tunable: LOWRIDER_MACHINEPISTOL_CLIP02 */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4442));
						break;
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
						iVar0 = Global_262145.f_16641 /* Tunable: ADDONS_MACHINE_PISTOL_DRUM_MAGAZINE */;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_11391 /* Tunable: LOWRIDER_MACHINEPISTOL_SUPP */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4443));
						break;
				}
				break;
			case joaat("WEAPON_SWITCHBLADE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
						iVar0 = Global_262145.f_13273 /* Tunable: APARTMENT_ADDONS_SWITCHBLADE_ENGRAVED_BOSS_VARIANT */;
						break;
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
						iVar0 = Global_262145.f_13274 /* Tunable: APARTMENT_ADDONS_SWITCHBLADE_ENGRAVED_GOON_VARIANT */;
						break;
				}
				break;
			case joaat("WEAPON_REVOLVER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_REVOLVER_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
						iVar0 = Global_262145.f_13331 /* Tunable: APARTMENT_ADDONS_HEAVY_REVOLVER_ENGRAVED_BOSS_VARIANT */;
						break;
					case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
						iVar0 = Global_262145.f_13272 /* Tunable: APARTMENT_ADDONS_HEAVY_REVOLVER_ENGRAVED_GOON_VARIANT */;
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22964 /* Tunable: 458535408 */;
						break;
				}
				break;
			case joaat("WEAPON_COMPACTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_15064 /* Tunable: ADDONS_COMPACT_RIFLE_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
						iVar0 = Global_262145.f_16638 /* Tunable: ADDONS_COMPACT_RIFLE_DRUM_MAGAZINE */;
						break;
				}
				break;
			case joaat("WEAPON_DBSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_DBSHOTGUN_CLIP_01"):
						iVar0 = 0;
						break;
				}
				break;
			case joaat("WEAPON_MINISMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINISMG_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MINISMG_CLIP_02"):
						iVar0 = Global_262145.f_19087 /* Tunable: 1482389140 */;
						break;
				}
				break;
			case joaat("WEAPON_COMBATPDW"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPDW_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_COMBATPDW_CLIP_02"):
						iVar0 = Global_262145.f_21120 /* Tunable: LUXE1_COMBATPDW_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_COMBATPDW_CLIP_03"):
						iVar0 = Global_262145.f_16640 /* Tunable: ADDONS_PDW_DRUM_MAGAZINE */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_21121 /* Tunable: LUXE1_COMBATPDW_FLASHLIGHT */;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = Global_262145.f_21123 /* Tunable: LUXE1_COMBATPDW_SCOPE */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_21122 /* Tunable: LUXE1_COMBATPDW_GRIP */;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21243 /* Tunable: -1550181012 */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_21244 /* Tunable: 599186436 */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21245 /* Tunable: 1538620212 */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21246 /* Tunable: -170097190 */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21247 /* Tunable: -1387455740 */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_21248 /* Tunable: -325408568 */;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_21249 /* Tunable: -82364995 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_21250 /* Tunable: -229542830 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_21251 /* Tunable: 1327976003 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_21252 /* Tunable: -618034935 */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_21253 /* Tunable: -1721486303 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_21254 /* Tunable: -240242887 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_21255 /* Tunable: 1111019601 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_21256 /* Tunable: 1417573596 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_21257 /* Tunable: 648354090 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_21258 /* Tunable: -1500342013 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_21259 /* Tunable: -80395705 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_21260 /* Tunable: 225896138 */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_21261 /* Tunable: -946948419 */;
						break;
					case joaat("COMPONENT_AT_AR_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_AR_BARREL_02"):
						iVar0 = Global_262145.f_21262 /* Tunable: 628289383 */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_CARBINERIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21263 /* Tunable: 1286553594 */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_21264 /* Tunable: -1398112727 */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21265 /* Tunable: 1311192953 */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21266 /* Tunable: -577265450 */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21267 /* Tunable: 441926214 */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_21268 /* Tunable: -1137873158 */;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_21269 /* Tunable: 757231685 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_21270 /* Tunable: 1743852487 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_21271 /* Tunable: 1889225718 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_21272 /* Tunable: 1808408105 */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_21273 /* Tunable: 998096574 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_21274 /* Tunable: 42291623 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_21275 /* Tunable: 918075921 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_21276 /* Tunable: -253841830 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_21277 /* Tunable: -554038639 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_21278 /* Tunable: -851712235 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_21279 /* Tunable: -1149353062 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_21280 /* Tunable: -1211679700 */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_21281 /* Tunable: -1770903800 */;
						break;
					case joaat("COMPONENT_AT_CR_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_CR_BARREL_02"):
						iVar0 = Global_262145.f_21282 /* Tunable: 120043539 */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_COMBATMG_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21283 /* Tunable: 1898572754 */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_21284 /* Tunable: -980014447 */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21285 /* Tunable: 954938707 */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21286 /* Tunable: 1734159338 */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21287 /* Tunable: 994554097 */;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_21288 /* Tunable: 320273484 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_21289 /* Tunable: -300742141 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_21290 /* Tunable: -1429921876 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_21291 /* Tunable: 1509305655 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_21292 /* Tunable: -49677055 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_21293 /* Tunable: 2089647114 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_21294 /* Tunable: 1816386423 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_21295 /* Tunable: -1717619155 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_21296 /* Tunable: -2014801216 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_21297 /* Tunable: 902950516 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_21298 /* Tunable: 562283992 */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_21299 /* Tunable: 1292930355 */;
						break;
					case joaat("COMPONENT_AT_MG_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_MG_BARREL_02"):
						iVar0 = Global_262145.f_21300 /* Tunable: 1947193436 */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_HEAVYSNIPER_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21301 /* Tunable: 330899918 */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_21302 /* Tunable: 917018525 */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21304 /* Tunable: 884234768 */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21305 /* Tunable: 1088190767 */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
						iVar0 = Global_262145.f_21303 /* Tunable: -1206093715 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
						iVar0 = Global_262145.f_21306 /* Tunable: 579562015 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_SCOPE_NV"):
						iVar0 = Global_262145.f_21307 /* Tunable: 544428193 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_THERMAL"):
						iVar0 = Global_262145.f_21308 /* Tunable: -707213005 */;
						break;
					case joaat("COMPONENT_AT_SR_SUPP_03"):
						iVar0 = Global_262145.f_21309 /* Tunable: 1674324405 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_08"):
						iVar0 = Global_262145.f_21310 /* Tunable: 291821001 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_09"):
						iVar0 = Global_262145.f_21311 /* Tunable: 1067332155 */;
						break;
					case joaat("COMPONENT_AT_SR_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_SR_BARREL_02"):
						iVar0 = Global_262145.f_21312 /* Tunable: 2037426926 */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_PISTOL_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21313 /* Tunable: 1430566154 */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_21315 /* Tunable: -1046185578 */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21314 /* Tunable: -506102803 */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21316 /* Tunable: 1296166421 */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21317 /* Tunable: 1866512725 */;
						break;
					case joaat("COMPONENT_AT_PI_FLSH_02"):
						iVar0 = Global_262145.f_21318 /* Tunable: -1999312528 */;
						break;
					case joaat("COMPONENT_AT_PI_RAIL"):
						iVar0 = Global_262145.f_21319 /* Tunable: 1055846757 */;
						break;
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = Global_262145.f_21320 /* Tunable: 1378860015 */;
						break;
					case joaat("COMPONENT_AT_PI_COMP"):
						iVar0 = Global_262145.f_21321 /* Tunable: 1792089868 */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_SMG_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SMG_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21322 /* Tunable: -220053906 */;
						break;
					case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_21324 /* Tunable: -952131423 */;
						break;
					case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21323 /* Tunable: -1897517534 */;
						break;
					case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21325 /* Tunable: -977321503 */;
						break;
					case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21326 /* Tunable: -1188309354 */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_21327 /* Tunable: -2017541960 */;
						break;
					case joaat("COMPONENT_AT_SIGHTS_SMG"):
						iVar0 = Global_262145.f_21328 /* Tunable: 1261888316 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
						iVar0 = Global_262145.f_21329 /* Tunable: 735171511 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
						iVar0 = Global_262145.f_21330 /* Tunable: -1290434805 */;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_21331 /* Tunable: 662271695 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_21332 /* Tunable: 1781046189 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_21333 /* Tunable: -1288131124 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_21334 /* Tunable: -1129922392 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_21335 /* Tunable: 129226433 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_21336 /* Tunable: -1594095277 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_21337 /* Tunable: -444427681 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_21338 /* Tunable: -137611534 */;
						break;
					case joaat("COMPONENT_AT_SB_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_SB_BARREL_02"):
						iVar0 = Global_262145.f_21339 /* Tunable: 946764522 */;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_PUMPSHOTGUN_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_22993 /* Tunable: 1652287555 */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
						iVar0 = Global_262145.f_22994 /* Tunable: -535703975 */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_22992 /* Tunable: 95511928 */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22991 /* Tunable: -665155806 */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_23020 /* Tunable: 307884450 */;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_23021 /* Tunable: 1712943577 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_23022 /* Tunable: -1605498735 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_23023 /* Tunable: -1766164400 */;
						break;
					case joaat("COMPONENT_AT_SR_SUPP_03"):
						iVar0 = Global_262145.f_23024 /* Tunable: 1535840470 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_08"):
						iVar0 = Global_262145.f_23025 /* Tunable: 179346571 */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_SPECIALCARBINE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_22995 /* Tunable: -1133159623 */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_22999 /* Tunable: 884315323 */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22997 /* Tunable: 117177146 */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22998 /* Tunable: 1711440619 */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22996 /* Tunable: 1515067404 */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_23026 /* Tunable: -675401976 */;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_23027 /* Tunable: 1348404810 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_23028 /* Tunable: 1661135184 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_23029 /* Tunable: -622756256 */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_23030 /* Tunable: 1005673153 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_23031 /* Tunable: -2043761976 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_23032 /* Tunable: 1467944449 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_23033 /* Tunable: 2104462570 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_23034 /* Tunable: -686370155 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_23035 /* Tunable: 1322082777 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_23036 /* Tunable: -189707864 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_23037 /* Tunable: 1794058860 */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_23038 /* Tunable: -77140556 */;
						break;
					case joaat("COMPONENT_AT_SC_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_SC_BARREL_02"):
						iVar0 = Global_262145.f_23039 /* Tunable: 1028863717 */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_SNSPISTOL_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
						iVar0 = Global_262145.f_23910 /* Tunable: -1086352658 */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_23015 /* Tunable: -1789606801 */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_23017 /* Tunable: -843751922 */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_23016 /* Tunable: 839487066 */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_23014 /* Tunable: -1383425686 */;
						break;
					case joaat("COMPONENT_AT_PI_FLSH_03"):
						iVar0 = Global_262145.f_23071 /* Tunable: -291501777 */;
						break;
					case joaat("COMPONENT_AT_PI_RAIL_02"):
						iVar0 = Global_262145.f_23072 /* Tunable: -1122806840 */;
						break;
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = Global_262145.f_23073 /* Tunable: -353555220 */;
						break;
					case joaat("COMPONENT_AT_PI_COMP_02"):
						iVar0 = Global_262145.f_23074 /* Tunable: -537982964 */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_MARKSMANRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_23000 /* Tunable: -1378447114 */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_23004 /* Tunable: -402362564 */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_23002 /* Tunable: -901067049 */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_23003 /* Tunable: 148273883 */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_23001 /* Tunable: -1383428803 */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_23040 /* Tunable: -852920589 */;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_23041 /* Tunable: -235285662 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_23042 /* Tunable: 947508682 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_23043 /* Tunable: -829621681 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_23044 /* Tunable: -1449227090 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_23045 /* Tunable: -1300374254 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_23046 /* Tunable: 989071156 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_23047 /* Tunable: 1338637515 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_23048 /* Tunable: -1766547494 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_23049 /* Tunable: -1090214635 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_23050 /* Tunable: 532703720 */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_23051 /* Tunable: -2106260249 */;
						break;
					case joaat("COMPONENT_AT_MRFL_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_MRFL_BARREL_02"):
						iVar0 = Global_262145.f_23052 /* Tunable: -249998032 */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_REVOLVER_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_23005 /* Tunable: 1955558754 */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_23006 /* Tunable: 38016460 */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_23008 /* Tunable: 784593552 */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_23007 /* Tunable: 1408548101 */;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_23053 /* Tunable: 1857338618 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_23054 /* Tunable: 1760541515 */;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = Global_262145.f_23055 /* Tunable: 141245052 */;
						break;
					case joaat("COMPONENT_AT_PI_COMP_03"):
						iVar0 = Global_262145.f_23056 /* Tunable: -1827907706 */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_BULLPUPRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_23009 /* Tunable: -316590252 */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_23013 /* Tunable: -2001892987 */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_23011 /* Tunable: 545820391 */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_23012 /* Tunable: 794018680 */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_23010 /* Tunable: -493624257 */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_23057 /* Tunable: 1592341943 */;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_23058 /* Tunable: 2078892836 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
						iVar0 = Global_262145.f_23059 /* Tunable: 1554127006 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_23060 /* Tunable: -1314225140 */;
						break;
					case joaat("COMPONENT_AT_BP_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_BP_BARREL_02"):
						iVar0 = Global_262145.f_23070 /* Tunable: -2119010024 */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_23061 /* Tunable: -1948594273 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_23062 /* Tunable: 21146921 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_23063 /* Tunable: 1358418183 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_23064 /* Tunable: 1464361534 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_23065 /* Tunable: -268389376 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_23066 /* Tunable: -1823864223 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_23067 /* Tunable: -574324148 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_23068 /* Tunable: 999664111 */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_23069 /* Tunable: -1915566950 */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_RAYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
						iVar0 = 0;
						break;
				}
				break;
			case joaat("WEAPON_CERAMICPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_28685 /* Tunable: 453457679 */;
						break;
					case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
						iVar0 = Global_262145.f_28686 /* Tunable: 143602352 */;
						break;
				}
				break;
			case joaat("WEAPON_COMBATSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATSHOTGUN_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_30824 /* Tunable: IH_COMBAT_SHOTGUN_FLASHLIGHT */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_30825 /* Tunable: IH_COMBAT_SHOTGUN_SUPPRESSOR */;
						break;
				}
				break;
			case joaat("WEAPON_GADGETPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_GADGETPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
				}
				break;
			case joaat("WEAPON_MILITARYRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MILITARYRIFLE_CLIP_01"):
						iVar0 = Global_262145.f_30810 /* Tunable: IH_MILITARY_RIFLE_DEFAULT_CLIP */;
						break;
					case joaat("COMPONENT_MILITARYRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_30811 /* Tunable: IH_MILITARY_RIFLE_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_MILITARYRIFLE_SIGHT_01"):
						iVar0 = Global_262145.f_30812 /* Tunable: IH_MILITARY_RIFLE_IRON_SIGHTS */;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = Global_262145.f_30813 /* Tunable: IH_MILITARY_RIFLE_SCOPE */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_30814 /* Tunable: IH_MILITARY_RIFLE_FLASHLIGHT */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_30815 /* Tunable: IH_MILITARY_RIFLE_SUPPRESSOR */;
						break;
				}
				break;
			case joaat("WEAPON_HEAVYRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYRIFLE_CLIP_01"):
						iVar0 = Global_262145.f_31958 /* Tunable: FIXER_HEAVY_RIFLE_DEFAULT_CLIP */;
						break;
					case joaat("COMPONENT_HEAVYRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_31959 /* Tunable: FIXER_HEAVY_RIFLE_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
						iVar0 = Global_262145.f_31991 /* Tunable: FIXER_THE_FAMILIES_FINISH */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_31964 /* Tunable: FIXER_HEAVY_RIFLE_GRIP */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_31962 /* Tunable: FIXER_HEAVY_RIFLE_FLASHLIGHT */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = Global_262145.f_31961 /* Tunable: FIXER_HEAVY_RIFLE_SCOPE */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_31963 /* Tunable: FIXER_HEAVY_RIFLE_SUPPRESSOR */;
						break;
					case joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"):
						iVar0 = Global_262145.f_31960 /* Tunable: FIXER_HEAVY_RIFLE_IRON_SIGHTS */;
						break;
				}
				break;
			case joaat("WEAPON_TACTICALRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_33124 /* Tunable: SU22_SERVICE_CARBINE_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH_REH"):
						iVar0 = Global_262145.f_33126 /* Tunable: SU22_SERVICE_CARBINE_FLASHLIGHT */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_33127 /* Tunable: SU22_SERVICE_CARBINE_SUPPRESSOR */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_33125 /* Tunable: SU22_SERVICE_CARBINE_GRIP */;
						break;
				}
				break;
			default:
				iVar6 = __LIB_0__::func_289(iParam0, &uVar8);
				if (iVar6 != -1)
				{
					iVar7 = 0;
					while (iVar7 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar6))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar6, iVar7, &Var9))
						{
							if (!__LIB_0__::func_288(Var9.f_3))
							{
								if (Var9.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (Var9.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var9.f_5;
									}
								}
							}
						}
						iVar7++;
					}
				}
				break;
			}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538())
	{
		StringCopy(&Var11, __LIB_19__::func_181(iParam1, iParam0), 16);
		__LIB_4__::func_886(&sVar10, Var11, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 1, __LIB_3__::func_371(iParam0), __LIB_12__::func_581(iParam0), -1, 0, 0);
		if (NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&sVar10))
		{
			iVar0 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar10), joaat("CATEGORY_WEAPON_MOD"), true);
		}
	}
	if (iVar0 > 0)
	{
		fVar12 = func_282(iParam0, &iVar0, fVar1);
		if (fVar12 != 1f)
		{
		}
	}
	return iVar0;
}

float func_282(int iParam0, int iParam1, float fParam2)//Position - 0x19218
{
	float fVar0;
	float fVar1;
	int iVar2;
	fVar0 = 0f;
	fVar1 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538())
	{
		fVar1 = (fVar1 + __LIB_12__::func_580());
		fVar0 = (1f - fVar1);
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar0));
		return fVar0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fParam2));
	}
	if (!Global_78319)
	{
		if (*iParam1 != 0)
		{
			iVar2 = func_305(iParam0);
			if (iVar2 == 3)
			{
				fVar1 = 0.1f;
			}
			else if (iVar2 == 2)
			{
				fVar1 = 0.15f;
			}
			else if (iVar2 == 1)
			{
				fVar1 = 0.25f;
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iLocal_64 == 1)
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_77 /* Tunable: WEAPONS_SHOP_MULTIPLIER */));
			fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_132 /* Tunable: SHOP_GOODBOY_DISCOUNT_PERCENT */) / 100f));
		}
		if (iLocal_64 == 0)
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_77 /* Tunable: WEAPONS_SHOP_MULTIPLIER */));
			if (__LIB_15__::func_885())
			{
				fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_132 /* Tunable: SHOP_GOODBOY_DISCOUNT_PERCENT */) / 100f));
				iLocal_64 = 1;
			}
			else
			{
				iLocal_64 = -1;
			}
		}
		fVar1 = (fVar1 + __LIB_12__::func_580());
	}
	fVar0 = (1f - fVar1);
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar0));
	return fVar0;
}

int func_305(int iParam0)//Position - 0x19B48
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	bool bVar4;
	iVar0 = __LIB_14__::func_466();
	if (iParam0 == 0 || !__LIB_0__::func_374(iVar0))
	{
		return -1;
	}
	iVar1 = 7;
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			break;
		case joaat("GADGET_PARACHUTE"):
			break;
		case joaat("WEAPON_MICROSMG"):
			iVar1 = 1;
			break;
		case joaat("WEAPON_SMG"):
			iVar1 = 1;
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			iVar1 = 3;
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			iVar1 = 3;
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			iVar1 = 3;
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			iVar1 = 2;
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			iVar1 = 2;
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			iVar1 = 2;
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			break;
		case joaat("WEAPON_MG"):
			iVar1 = 4;
			break;
		case joaat("WEAPON_COMBATMG"):
			iVar1 = 4;
			break;
		case joaat("WEAPON_RPG"):
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			break;
		case joaat("WEAPON_MINIGUN"):
			iVar1 = 5;
			break;
		case joaat("WEAPON_KNIFE"):
			break;
		case joaat("WEAPON_NIGHTSTICK"):
			break;
		case joaat("WEAPON_PETROLCAN"):
			break;
		case joaat("WEAPON_STUNGUN"):
			break;
		case joaat("WEAPON_APPISTOL"):
			iVar1 = 0;
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			iVar1 = 0;
			break;
		case joaat("WEAPON_PISTOL"):
			iVar1 = 0;
			break;
		case joaat("WEAPON_SMOKEGRENADE"):
			break;
		case joaat("WEAPON_GRENADE"):
			break;
		case joaat("WEAPON_STICKYBOMB"):
			break;
	}
	if (iVar1 != 7)
	{
		switch (__LIB_18__::func_231(iVar1, iVar0))
		{
			case 1:
				return 3;
				break;
			case 2:
				return 2;
				break;
			case 3:
				return 1;
				break;
		}
	}
	else
	{
		iVar3[0] = __LIB_18__::func_231(1, iVar0);
		iVar3[1] = __LIB_18__::func_231(3, iVar0);
		iVar3[2] = __LIB_18__::func_231(2, iVar0);
		iVar3[3] = __LIB_18__::func_231(4, iVar0);
		iVar3[4] = __LIB_18__::func_231(5, iVar0);
		iVar3[5] = __LIB_18__::func_231(0, iVar0);
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 3)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 1;
		}
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 2)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 2;
		}
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 1)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 3;
		}
	}
	return -1;
}

int func_323(int iParam0, int iParam1, int iParam2)//Position - 0x1B6C5
{
	var uVar0;
	int iVar1;
	if (__LIB_0__::func_980())
	{
		return 0;
	}
	uVar0 = func_327(iParam0, iParam1, iParam2);
	iVar1 = __LIB_6__::func_350(iParam0, iParam1);
	return BitTest(uVar0, __LIB_0__::func_160(iVar1));
}

var func_327(int iParam0, int iParam1, var uParam2)//Position - 0x1DA20
{
	var uVar0;
	uVar0 = __LIB_0__::func_369(__LIB_6__::func_698(iParam0, iParam1), uParam2, 0);
	return uVar0;
}

int func_334(var uParam0, int iParam1, int iParam2)//Position - 0x1DC30
{
	struct<5> Var0;
	int iVar1;
	__LIB_36__::func_769(&Var0, *uParam0, uParam0->f_4, uParam0->f_6, uParam0->f_1);
	while (func_280(&Var0, iParam1, iVar1, 0))
	{
		if (Var0.f_4 == iParam2)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_336(var uParam0)//Position - 0x1DC82
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, true);
	return 1;
}

int func_337(int* iParam0, int iParam1, struct<3> Param2, float fParam3)//Position - 0x1DCA2
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		VEHICLE::DELETE_VEHICLE(iParam0);
		*iParam0 = 0;
	}
	*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, true, true, false);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	return 1;
}

int func_338(var uParam0)//Position - 0x1DCE0
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	PED::SET_PED_MONEY(*uParam0, 0);
	PED::SET_PED_NAME_DEBUG(*uParam0, "RAMP:SCENE PED");
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
	return 1;
}

int func_339(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x1DD1B
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		PED::DELETE_PED(iParam0);
		*iParam0 = 0;
	}
	*iParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam3, true, true);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (bParam4)
	{
		__LIB_14__::func_808(*iParam0, Param2);
		ENTITY::SET_ENTITY_HEADING(*iParam0, fParam3);
	}
	PED::SET_PED_MONEY(*iParam0, 0);
	PED::SET_PED_NAME_DEBUG(*iParam0, "RAMP:SCENE PED");
	PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
	return 1;
}

int func_341()//Position - 0x1DDDF
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(-177.0628f, -1679.7155f, 33.16263f, -157.0628f, -1659.7155f, 37.16263f, false, true, true, true);
}

void func_342(var uParam0)//Position - 0x1DE0D
{
	int iVar0;
	char* sVar1;
	iVar0 = joaat("IG_Ramp_Gang");
	sVar1 = "misstrvram_4";
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_ANIM_DICT(sVar1);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_ASSAULTRIFLE"), 31, 0);
	while (!STREAMING::HAS_MODEL_LOADED(iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_339(&(uParam0->f_28[0]), iVar0, -161.37f, -1669.63f, 33.1f, __LIB_0__::func_503(1.03f), 1))
	{
		SYSTEM::WAIT(0);
	}
	func_338(&(uParam0->f_28[0]));
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[0], "RP0_NOGUN");
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 10, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(uParam0->f_28[0], sVar1, "thugs_idle_b", 8f, -8f, -1, 1, 0f, false, false, false);
	while (!func_339(&(uParam0->f_28[1]), iVar0, -161.93f, -1670.39f, 33.14f, __LIB_0__::func_503(0.2f), 1))
	{
		SYSTEM::WAIT(0);
	}
	func_338(&(uParam0->f_28[1]));
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "RP1_GUN");
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[1]);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 10, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
	WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[1], joaat("WEAPON_ASSAULTRIFLE"), 100, true, true);
	TASK::TASK_PLAY_ANIM(uParam0->f_28[1], sVar1, "thugs_idle_a", 8f, -8f, -1, 1, 0f, false, false, false);
	StringCopy(&(uParam0->f_9), "TRVRAM_4", 24);
	uParam0->f_27 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
}

void func_343(var uParam0)//Position - 0x1E0E4
{
	int iVar0;
	char* sVar1;
	iVar0 = joaat("IG_Ramp_Mex");
	sVar1 = "misstrvram_3";
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_ANIM_DICT(sVar1);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_MICROSMG"), 31, 10);
	while ((!STREAMING::HAS_MODEL_LOADED(iVar0) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_MICROSMG"))) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_339(&(uParam0->f_28[0]), iVar0, 464.6125f, -1848.7673f, 27.816f, 177.39f, 1))
	{
		SYSTEM::WAIT(0);
	}
	func_338(&(uParam0->f_28[0]));
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 0, 0, 0);
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[0], "RAMP:PED 0");
	TASK::TASK_PLAY_ANIM(uParam0->f_28[0], sVar1, "mexicans_idle_a", 8f, -8f, -1, 1, 0f, false, false, false);
	while (!func_339(&(uParam0->f_28[1]), iVar0, 465.782f, -1849.073f, 27.817f, 129.92f, 1))
	{
		SYSTEM::WAIT(0);
	}
	func_338(&(uParam0->f_28[1]));
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "RAMP:PED 1");
	TASK::TASK_PLAY_ANIM(uParam0->f_28[1], sVar1, "mexicans_idle_b", 8f, -8f, -1, 1, 0f, false, false, false);
	if (func_278(&(uParam0->f_41[0]), joaat("WEAPON_MICROSMG"), 467f, -1855.4f, 32f, __LIB_0__::func_503(-0.85f)))
	{
		WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(uParam0->f_41[0], joaat("COMPONENT_AT_SCOPE_MACRO"));
		WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(uParam0->f_41[0], joaat("COMPONENT_MICROSMG_CLIP_02"));
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_3", 24);
	uParam0->f_27 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
}

int func_344()//Position - 0x1E3E4
{
	return __LIB_16__::func_622(1182.1375f, -400.4787f, 66.92414f, 8f);
}

void func_346(var uParam0)//Position - 0x1E436
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var6;
	iVar0 = joaat("IG_Ramp_Hipster");
	iVar1 = joaat("prop_chair_01a");
	iVar2 = joaat("prop_npc_phone");
	sVar3 = "misstrvram_2";
	iVar4 = 60309;
	Var5 = { 0f, 0f, 0f };
	Var6 = { 0f, 0f, 0f };
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_SAWNOFFSHOTGUN"), 31, 0);
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar1);
	STREAMING::REQUEST_MODEL(iVar2);
	STREAMING::REQUEST_ANIM_DICT(sVar3);
	__LIB_28__::func_224(&uLocal_68);
	while ((((!STREAMING::HAS_MODEL_LOADED(iVar0) || !STREAMING::HAS_MODEL_LOADED(iVar1)) || !STREAMING::HAS_MODEL_LOADED(iVar2)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar3)) || !__LIB_37__::func_339(&uLocal_68))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA_OF_OBJECTS(1180.0205f, -401.7374f, 66.8767f, 0.75f, 0);
	uParam0->f_41[2] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1179.778f, -401.7374f, 66.8697f, 1f, joaat("prop_chair_01a"), true, false, true);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[2]))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_41[2], 1180.05f, -401.83f, 66.88f, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[2], 0f, 0f, 50f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[2], true);
	}
	uParam0->f_41[3] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1181.2432f, -402.5309f, 67.2564f, 1f, joaat("prop_table_01"), true, false, true);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[3], true);
	}
	while (!func_339(&(uParam0->f_28[0]), iVar0, 1181.5474f, -400.0954f, 67.5757f, -124.292786f, 0))
	{
		SYSTEM::WAIT(0);
	}
	func_338(&(uParam0->f_28[0]));
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], true);
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
	__LIB_14__::func_807(&(uParam0->f_41[1]), iVar2, 1181.5474f, -400.0954f, 65.5757f, 0f);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], iVar4), Var6, Var5, true, false, false, false, 2, true, 0);
	__LIB_37__::func_338(&uLocal_68, 0, 3);
	if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_59))
	{
		uParam0->f_59 = PED::CREATE_SYNCHRONIZED_SCENE(Local_66, Local_67, 2);
		if (__LIB_0__::func_121(uParam0->f_28[0]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uParam0->f_59, sVar3, "hipster_idle", 8f, -8f, 513, 0, 1000f, 0);
		}
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_59, true);
	}
	if (!func_278(&(uParam0->f_41[0]), joaat("WEAPON_SAWNOFFSHOTGUN"), 1162.2f, -395.4f, 72.9f, __LIB_0__::func_503(-0.71f)))
	{
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_2_CONCAT", 24);
	uParam0->f_27 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
}

int func_352()//Position - 0x1E7DE
{
	return __LIB_16__::func_622(911.5349f, 3642.1108f, 31.647379f, 8f);
}

void func_353(var uParam0)//Position - 0x1E7FE
{
	struct<3> Var0;
	char* sVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar1 = "misstrvram_1";
	iVar2 = 28422;
	Var3 = { 0f, 0f, 0f };
	Var4 = { 0f, 0f, -0.1f };
	iVar5 = joaat("IG_Ramp_Hic");
	iVar6 = joaat("prop_table_03b_chr");
	iVar7 = joaat("prop_beer_bottle");
	STREAMING::REQUEST_MODEL(iVar5);
	STREAMING::REQUEST_MODEL(iVar6);
	STREAMING::REQUEST_MODEL(iVar7);
	STREAMING::REQUEST_ANIM_DICT(sVar1);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_ASSAULTRIFLE"), 31, 0);
	while ((((!STREAMING::HAS_MODEL_LOADED(iVar5) || !STREAMING::HAS_MODEL_LOADED(iVar6)) || !STREAMING::HAS_MODEL_LOADED(iVar7)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar1)) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_ASSAULTRIFLE")))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_339(&(uParam0->f_28[0]), iVar5, 907.998f, 3643.8264f, 32.292427f, -173.04526f, 0))
	{
		SYSTEM::WAIT(0);
	}
	if (__LIB_0__::func_121(uParam0->f_28[0]))
	{
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 0, 0, 0);
		Var0 = { PED::GET_PED_BONE_COORDS(uParam0->f_28[0], iVar2, 0f, 0f, 0f) };
		PED::SET_PED_NAME_DEBUG(uParam0->f_28[0], "RAMP:PED 0");
		__LIB_14__::func_807(&(uParam0->f_41[1]), iVar7, Var0, 0f);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], iVar2), Var4, Var3, true, true, false, false, 2, true, 0);
		OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uParam0->f_41[1], true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], true);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 208, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], joaat("PLAYER"));
	}
	while (!func_339(&(uParam0->f_28[1]), iVar5, 909.3126f, 3643.5066f, 32.2952f, 153.0127f, 0))
	{
		SYSTEM::WAIT(0);
	}
	if (__LIB_0__::func_121(uParam0->f_28[1]))
	{
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
		Var0 = { PED::GET_PED_BONE_COORDS(uParam0->f_28[1], iVar2, 0f, 0f, 0f) };
		PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "RAMP:PED 1");
		__LIB_14__::func_807(&(uParam0->f_41[2]), iVar7, Var0, 0f);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[2], uParam0->f_28[1], PED::GET_PED_BONE_INDEX(uParam0->f_28[1], iVar2), Var4, Var3, true, true, false, false, 2, true, 0);
		OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uParam0->f_41[2], true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[1], true);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_28[1], 208, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[1], joaat("PLAYER"));
	}
	uParam0->f_41[3] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(909.3884f, 3643.6523f, 31.699f, 1f, joaat("prop_table_03b_chr"), true, false, true);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[3], true);
	}
	uParam0->f_41[4] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(908.0437f, 3643.682f, 31.7073f, 1f, joaat("prop_table_03b_chr"), true, false, true);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[4]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[4], true);
	}
	if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_59))
	{
		uParam0->f_59 = PED::CREATE_SYNCHRONIZED_SCENE(910.13f, 3643.74f, 31.69f, 0f, 0f, __LIB_0__::func_503(-0.26f), 2);
		if (__LIB_0__::func_121(uParam0->f_28[0]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uParam0->f_59, sVar1, "redneck_idle_a", 8f, -8f, 513, 0, 1000f, 0);
		}
		if (__LIB_0__::func_121(uParam0->f_28[1]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[1], uParam0->f_59, sVar1, "redneck_idle_b", 8f, -8f, 513, 0, 1000f, 0);
		}
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_59, true);
	}
	if (!func_278(&(uParam0->f_41[0]), joaat("WEAPON_ASSAULTRIFLE"), 907.52f, 3644.32f, 31.86f, -164.89f))
	{
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar5);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar6);
	StringCopy(&(uParam0->f_9), "TRVRAM_1", 24);
	uParam0->f_27 = 0;
}

int func_354(int iParam0)//Position - 0x1ED25
{
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 1;
	}
	if (__LIB_30__::func_871(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_356(int iParam0, var uParam1, struct<3> Param2, float fParam3)//Position - 0x1EDA3
{
	int iVar0;
	if (*iParam0 == 1)
	{
		if (__LIB_37__::func_263((*iParam0)[0], Param2, fParam3, uParam1))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (__LIB_37__::func_263((*iParam0)[iVar0], Param2, fParam3, uParam1))
			{
				iVar0 = *iParam0;
				return 1;
			}
			iVar0++;
		}
	}
	__LIB_0__::func_135("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return 0;
}

void func_360(var* uParam0, bool bParam1)//Position - 0x1EF28
{
	func_274(uParam0);
	if (bParam1)
	{
		__LIB_0__::func_135(" SCRIPT TERMINATING: Cleaning up entities in Launcher");
		__LIB_14__::func_871(uParam0, 0, 0, 0);
	}
	__LIB_37__::func_293(&(uParam0->f_48));
	if (iLocal_240 != -1)
	{
		__LIB_0__::func_135("SCRIPT TERMINATING: Ending off-mission cutscene request");
		__LIB_37__::func_5(&iLocal_240);
	}
	if (iLocal_250 != 0)
	{
		if (*uParam0 == 55 || *uParam0 == 53)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_250, false);
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
	if (iLocal_244)
	{
		if (__LIB_0__::func_1("RAMP_HELP_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to start this Rampage. */))
		{
			HUD::CLEAR_HELP(true);
			iLocal_244 = 0;
		}
	}
	__LIB_37__::func_262();
	__LIB_0__::func_135("SCRIPT TERMINATED");
	Global_97713 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

