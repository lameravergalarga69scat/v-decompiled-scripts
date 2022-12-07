#region Local Var
	int* iLocal_0 = NULL;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	float fLocal_17 = 0f;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	struct<4> Local_40[10];
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	struct<6> Local_43 = { 10, 0, -1, 1000, -1, 0 } ;
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	struct<3> Local_59 = { 0, 0, 0 } ;
	float fLocal_60 = 0f;
	int iLocal_61 = 0;
	struct<3> Local_62 = { 0, 0, 0 } ;
	float fLocal_63 = 0f;
	struct<3> Local_64[3];
	float fLocal_65[3] = { 0f, 0f, 0f };
	struct<3> Local_66[7];
	float fLocal_67[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_68[3] = { 0, 0, 0 };
	int iLocal_69[3] = { 0, 0, 0 };
	int iLocal_70[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	char[] cLocal_73[8] = 0;
	char* sLocal_74[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int* iLocal_80 = NULL;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<3> Local_85 = { 0, 0, 0 } ;
	struct<3> Local_86 = { 0, 0, 0 } ;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 8;
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
	var uLocal_237 = 1;
	struct<2> Local_238 = { 0, 5 } ;
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
	var uLocal_254 = 5;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	iLocal_5 = 1;
	iLocal_6 = 134;
	iLocal_7 = 134;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 1;
	iLocal_11 = 134;
	iLocal_12 = 1;
	iLocal_13 = 12;
	iLocal_14 = 12;
	fLocal_17 = 0.001f;
	iLocal_20 = -1;
	sLocal_23 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_46 = 1;
	bLocal_55 = true;
	iLocal_72 = joaat("feltzer2");
	iLocal_75 = 1;
	Local_83 = { 0f, 0f, 0f };
	Local_84 = { 1f, 1f, 1f };
	Local_85 = { 0f, 0f, 0f };
	Local_86 = { 0f, 0f, 0f };
	fLocal_87 = 0f;
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	Local_44 = { ScriptParam_238.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_217(0);
	}
	func_214();
	switch (Local_43.f_1)
	{
		case 1:
		case 2:
			if (!__LIB_0__::func_573(0, 8))
			{
				func_217(0);
			}
			if (!func_212(Local_43.f_0))
			{
				func_217(0);
			}
			break;
		case 3:
			if (!__LIB_0__::func_573(0, 7))
			{
				func_217(0);
			}
			break;
		case 0:
			func_217(0);
			break;
	}
	func_206();
	if (!func_182())
	{
		func_217(0);
	}
	func_176();
	while (true)
	{
		__LIB_37__::func_546(&uLocal_90);
		if (func_182())
		{
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_42)
				{
					case 0:
						iLocal_42 = 1;
						break;
					case 1:
						func_164();
						func_133();
						break;
					case 2:
						func_66();
						break;
					case 3:
						func_1();
						break;
				}
			}
			else
			{
				func_217(0);
			}
		}
		else
		{
			func_217(0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x19F
{
	if (!bLocal_53)
	{
		func_11();
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x1B8
{
	__LIB_29__::func_718(-1);
	__LIB_6__::func_251(0);
	__LIB_29__::func_809(Local_44);
	__LIB_6__::func_252();
	Global_1574510 = 1;
	Global_1574510.f_1 = Local_43.f_0;
	StringCopy(&(Global_1574510.f_2), func_6(), 24);
	StringCopy(&(Global_1574510.f_8), func_3(Local_43.f_0), 32);
	Global_1574510.f_16 = { Local_44 };
	Global_1575061 = 1;
	func_217(1);
}

char* func_3(int iParam0)//Position - 0x213
{
	char* sVar0;
	if (MISC::IS_PS3_VERSION())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (MISC::IS_XBOX360_VERSION())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			case 1:
				sVar0 = "dm_test_18";
				break;
			case 2:
				sVar0 = "dm_test_2";
				break;
			case 3:
				sVar0 = "dm_test_4";
				break;
			case 4:
				sVar0 = "dm_test_5";
				break;
			case 5:
				sVar0 = "dm_test_16";
				break;
			case 6:
				sVar0 = "dm_test_13";
				break;
			case 7:
				sVar0 = "dm_test_15";
				break;
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (__LIB_0__::func_52())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (__LIB_0__::func_53())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			case 1:
				sVar0 = "dm_test_18";
				break;
			case 2:
				sVar0 = "dm_test_2";
				break;
			case 3:
				sVar0 = "dm_test_4";
				break;
			case 4:
				sVar0 = "dm_test_5";
				break;
			case 5:
				sVar0 = "dm_test_16";
				break;
			case 6:
				sVar0 = "dm_test_13";
				break;
			case 7:
				sVar0 = "dm_test_15";
				break;
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			case 1:
				sVar0 = "dm_test_18";
				break;
			case 2:
				sVar0 = "dm_test_2";
				break;
			case 3:
				sVar0 = "dm_test_4";
				break;
			case 4:
				sVar0 = "dm_test_5";
				break;
			case 5:
				sVar0 = "dm_test_16";
				break;
			case 6:
				sVar0 = "dm_test_13";
				break;
			case 7:
				sVar0 = "dm_test_15";
				break;
			case 8:
				sVar0 = "dm_test_24";
				break;
			}
	}
	return sVar0;
}

char* func_6()//Position - 0x51B
{
	char* sVar0;
	if (MISC::IS_PS3_VERSION())
	{
		sVar0 = "SPRACE";
	}
	else if (MISC::IS_XBOX360_VERSION())
	{
		sVar0 = "2535285330962926";
	}
	else if (__LIB_0__::func_52())
	{
		sVar0 = "SPRACE";
	}
	else if (__LIB_0__::func_53())
	{
		sVar0 = "2535285330962926";
	}
	else if (MISC::IS_PC_VERSION())
	{
		sVar0 = "SPRACE";
	}
	else
	{
		sVar0 = "SPRACE";
	}
	return sVar0;
}

void func_11()//Position - 0x5C0
{
	int iVar0;
	int iVar1;
	int iVar2;
	Local_43.f_2 = -1;
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	while (!func_59())
	{
		SYSTEM::WAIT(0);
	}
	if (Local_43.f_1 != 3)
	{
		__LIB_40__::func_982(__LIB_18__::func_173(), 1, Local_43.f_3);
		iVar0 = MISC::GET_GAME_TIMER() + 1500;
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (__LIB_1__::func_183(iVar1))
		{
			while (!__LIB_6__::func_762(iVar1, 3f, 2, 1056964608, 0, 1, 0) || MISC::GET_GAME_TIMER() < iVar0)
			{
				SYSTEM::WAIT(0);
			}
		}
		iVar2 = PLAYER::GET_PLAYER_INDEX();
		if (PLAYER::IS_PLAYER_PLAYING(iVar2))
		{
			PLAYER::SET_PLAYER_CONTROL(iVar2, false, 0);
		}
	}
	func_12();
}

void func_12()//Position - 0x66F
{
	if (!__LIB_0__::func_2(0))
	{
		SCRIPT::REQUEST_SCRIPT("mission_Race");
		while (!SCRIPT::HAS_SCRIPT_LOADED("mission_Race"))
		{
			SCRIPT::REQUEST_SCRIPT("mission_Race");
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT_WITH_ARGS("mission_Race", &Local_43, 6, 51000);
	}
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mission_Race");
	func_217(1);
}

int func_59()//Position - 0x1DF5
{
	int iVar0;
	iVar0 = __LIB_18__::func_219(&(Local_43.f_2), 0, 9, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

void func_66()//Position - 0x21D3
{
	int iVar0;
	switch (iLocal_49)
	{
		case 0:
			if (__LIB_7__::func_161(0, -1, 0))
			{
				HUD::CLEAR_HELP(true);
				func_123();
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				iLocal_54 = 1;
				bLocal_52 = false;
				bLocal_53 = false;
				iLocal_49 = 1;
			}
			break;
		case 1:
			if (func_79())
			{
				iLocal_49 = 2;
			}
			break;
		case 2:
			iVar0 = PLAYER::GET_PLAYER_INDEX();
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, false);
			PLAYER::SET_PLAYER_CONTROL(iVar0, true, 0);
			__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
			__LIB_7__::func_49(1, -1);
			iLocal_49 = 0;
			if (bLocal_52)
			{
				iLocal_42 = 3;
			}
			else
			{
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
				iLocal_42 = 1;
			}
			break;
	}
}

int func_79()//Position - 0x26A1
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	__LIB_0__::func_471(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
	if (iLocal_51 != 0)
	{
		if (SYSTEM::TIMERA() > 800 || (((iVar1 > -64 && iVar1 < 64) && iVar0 > -64) && iVar0 < 64))
		{
			iLocal_51 = 0;
		}
		else
		{
			iVar0 = 0;
			iVar1 = 0;
		}
	}
	bVar4 = (iVar1 < -64 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/));
	bVar5 = (iVar1 > 64 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/));
	bVar6 = PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
	bVar7 = PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
	bVar8 = (iVar1 < -64 || iVar1 > 64);
	if (bVar6)
	{
		if (iLocal_50 == 1)
		{
			bLocal_53 = true;
		}
		else
		{
			bLocal_53 = false;
		}
		bLocal_52 = true;
		return 1;
	}
	else if (bVar7)
	{
		iLocal_76 = 0;
		bLocal_52 = false;
		return 1;
	}
	else
	{
		if (bVar5)
		{
			if (iLocal_50 == 0)
			{
				iLocal_50 = 1;
			}
			else if (iLocal_50 == 0)
			{
			}
		}
		else if (bVar4)
		{
			if (iLocal_50 == 1)
			{
				iLocal_50 = 0;
			}
			else if (iLocal_50 == 1)
			{
			}
		}
		if (bVar5 || bVar4)
		{
			if (bVar8)
			{
				SYSTEM::SETTIMERA(0);
				iLocal_51 = 1;
			}
			__LIB_2__::func_562(iLocal_50, 1, 1);
		}
	}
	__LIB_25__::func_745(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
	return 0;
}

void func_123()//Position - 0x72CF
{
	__LIB_1__::func_193(0, 0);
	__LIB_1__::func_318(1, 0, 0, 0, 0);
	__LIB_1__::func_317(1, 1, 1, 1, 1);
	if (Local_43.f_1 == 3)
	{
		__LIB_1__::func_319("SEA_MENU" /* GXT: Sea Races */);
	}
	else
	{
		__LIB_1__::func_319("STREET_MENU" /* GXT: Street Races */);
	}
	__LIB_18__::func_477(0, "RACES_OPT_SP" /* GXT: Standard Race */, 0, 1, 0, 0, 0);
	__LIB_18__::func_477(1, "RACES_OPT_MP" /* GXT: Play Online */, 0, 1, 0, 0, 0);
	__LIB_1__::func_344(201, "ITEM_SELECT" /* GXT: Select */, -1);
	__LIB_1__::func_344(202, "ITEM_EXIT" /* GXT: Exit */, -1);
	__LIB_4__::func_221(11, "ITEM_SCROLL" /* GXT: Scroll */, -1);
	__LIB_4__::func_192(0);
	__LIB_2__::func_562(0, 1, 1);
	iLocal_50 = 0;
}

void func_133()//Position - 0x7C84
{
	int iVar0;
	if (func_163())
	{
		if (func_146())
		{
			iVar0 = 6;
			if (Local_43.f_1 == 1)
			{
				iVar0 = 4;
			}
			func_144(iVar0);
			if (__LIB_1__::func_197(iLocal_56[iVar0]))
			{
				if (bLocal_55)
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], 3))
					{
						TASK::STOP_ANIM_TASK(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], -8f);
					}
					func_135(iVar0);
				}
			}
			PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/);
			if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
			{
				iLocal_76 = 1;
				HUD::CLEAR_HELP(true);
				iLocal_42 = 3;
			}
		}
		else if (!iLocal_46)
		{
			CAM::STOP_GAMEPLAY_HINT(false);
			iLocal_46 = 1;
		}
	}
	else
	{
		func_134();
		if (!iLocal_46)
		{
			CAM::STOP_GAMEPLAY_HINT(false);
			iLocal_46 = 1;
		}
	}
}

void func_134()//Position - 0x7D35
{
	if (iLocal_45 && MISC::GET_GAME_TIMER() > iLocal_48)
	{
		HUD::CLEAR_HELP(true);
		iLocal_45 = 0;
	}
}

void func_135(int iParam0)//Position - 0x7D56
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_56[iParam0], false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		switch (iLocal_77)
		{
			case 0:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_56[iParam0], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 64f)
				{
					iLocal_78 = 0;
					iLocal_79 = 0;
					iLocal_77 = 1;
				}
				break;
			case 1:
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_56[iParam0], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				iLocal_77 = 2;
				break;
			case 2:
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_56[iParam0], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 || PED::IS_PED_FACING_PED(iLocal_56[iParam0], PLAYER::PLAYER_PED_ID(), 20f))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_56[iParam0], PLAYER::PLAYER_PED_ID(), -1);
					if (!iLocal_79)
					{
						__LIB_5__::func_759(iLocal_56[iParam0], "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						__LIB_5__::func_759(iLocal_56[iParam0], "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_77 = 3;
				}
				break;
			case 3:
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_56[iParam0]))
				{
					__LIB_6__::func_892(&iLocal_80);
					TASK::TASK_PLAY_ANIM(iLocal_56[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0f, false, false, false);
					iLocal_77 = 4;
				}
				break;
			case 4:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_56[iParam0], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 225f)
				{
					iLocal_77 = 0;
				}
				if (__LIB_31__::func_353(&iLocal_80) >= 5f && !iLocal_78)
				{
					iLocal_78 = 1;
					iLocal_77 = 1;
				}
				else if (__LIB_31__::func_353(&iLocal_80) >= 10f && !iLocal_79)
				{
					iLocal_79 = 1;
					iLocal_77 = 1;
				}
				break;
			case 5:
				break;
			}
	}
}

void func_144(int iParam0)//Position - 0x8215
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !__LIB_4__::func_739())
	{
		if (__LIB_1__::func_197(iLocal_56[iParam0]))
		{
			if (iLocal_46 && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 20f)
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_56[iParam0], 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
				iLocal_46 = 0;
			}
		}
	}
}

int func_146()//Position - 0x828B
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_162())
		{
			return 0;
		}
		if (__LIB_9__::func_231(__LIB_18__::func_173()) < Local_43.f_3)
		{
			if (Local_43.f_1 == 3)
			{
				func_158("SEA_NA_CASH" /* GXT: Can't afford to enter this sea race. $~1~ needed to race. */, Local_43.f_3);
			}
			else
			{
				func_158("STREET_NA_CASH" /* GXT: Can't afford to enter this street race. $~1~ needed to race. */, Local_43.f_3);
			}
			iLocal_45 = 1;
			iLocal_48 = MISC::GET_GAME_TIMER() + 1000;
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			__LIB_0__::func_106(&iLocal_0);
			iLocal_0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (!func_152())
			{
				iLocal_45 = 1;
				iLocal_48 = MISC::GET_GAME_TIMER() + 1000;
				return 0;
			}
			else if ((ENTITY::GET_ENTITY_HEALTH(iLocal_0) <= 200 || FIRE::IS_ENTITY_ON_FIRE(iLocal_0)) || func_151())
			{
				func_150("RACE_VehDmg" /* GXT: This vehicle is too damaged to race. Get it fixed, or find a vehicle in better repair to race. */);
				iLocal_45 = 1;
				iLocal_48 = MISC::GET_GAME_TIMER() + 1000;
				return 0;
			}
			else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_0, -1, false) != PLAYER::PLAYER_PED_ID())
			{
				func_147();
				return 0;
			}
			else
			{
				if (__LIB_0__::func_77(0) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
				{
					func_134();
					return 0;
				}
				switch (Local_43.f_1)
				{
					case 1:
						func_158("STREET_PLAY_B" /* GXT: Press ~INPUT_CONTEXT~ to enter a motorcycle street race. The entry fee is $~1~. */, Local_43.f_3);
						break;
					case 2:
						func_158("STREET_PLAY_C" /* GXT: Press ~INPUT_CONTEXT~ to enter a street race. The entry fee is $~1~. */, Local_43.f_3);
						break;
					case 3:
						func_150("SEA_PLAY" /* GXT: Press ~INPUT_CONTEXT~ to enter a sea race. */);
						break;
				}
				iLocal_45 = 1;
				iLocal_48 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		else
		{
			__LIB_0__::func_106(&iLocal_0);
			func_147();
			return 0;
		}
	}
	return 0;
}

void func_147()//Position - 0x83FD
{
	char* sVar0;
	if (Local_43.f_1 == 3)
	{
		if (__LIB_1__::func_183(iLocal_57))
		{
			sVar0 = "SEA_NA_VEH" /* GXT: Climb aboard the Seashark at the start line to enter this race. */;
		}
		else
		{
			sVar0 = "SEA_NA_VEH2" /* GXT: You need a Seashark to enter this race. */;
		}
		if (!__LIB_0__::func_1(sVar0))
		{
			__LIB_0__::func_187(sVar0);
			iLocal_45 = 1;
			iLocal_48 = MISC::GET_GAME_TIMER() + 1000;
		}
	}
	else if (Local_43.f_1 == 1)
	{
		if (!__LIB_0__::func_1("STREET_NA_BIKE" /* GXT: A motorcycle is needed to enter this street race. */))
		{
			__LIB_0__::func_187("STREET_NA_BIKE" /* GXT: A motorcycle is needed to enter this street race. */);
			iLocal_45 = 1;
			iLocal_48 = MISC::GET_GAME_TIMER() + 1000;
		}
	}
	else if (!__LIB_0__::func_1("STREET_NA_CAR" /* GXT: A car is needed to enter this street race. */))
	{
		__LIB_0__::func_187("STREET_NA_CAR" /* GXT: A car is needed to enter this street race. */);
		iLocal_45 = 1;
		iLocal_48 = MISC::GET_GAME_TIMER() + 1000;
	}
}

void func_150(char* sParam0)//Position - 0x84B8
{
	if (!__LIB_0__::func_1(sParam0))
	{
		__LIB_0__::func_187(sParam0);
	}
}

int func_151()//Position - 0x84D0
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 6, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 7, false))
		{
			return 1;
		}
	}
	else if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar0))
	{
		if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 0, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 1, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 4, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 5, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_152()//Position - 0x854C
{
	int iVar0;
	char* sVar1;
	switch (Local_43.f_1)
	{
		case 1:
			iVar0 = func_156();
			if (iVar0 == 1)
			{
				func_150("STREET_NA_COP" /* GXT: Can't enter a street race in an emergency vehicle. */);
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_150("STREET_NA_BIKE" /* GXT: A motorcycle is needed to enter this street race. */);
				return 0;
			}
			break;
		case 2:
			iVar0 = func_154();
			if (iVar0 == 1)
			{
				func_150("STREET_NA_COP" /* GXT: Can't enter a street race in an emergency vehicle. */);
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_150("STREET_NA_CAR" /* GXT: A car is needed to enter this street race. */);
				return 0;
			}
			break;
		case 3:
			if (!func_153())
			{
				if (__LIB_1__::func_183(iLocal_57))
				{
					sVar1 = "SEA_NA_VEH" /* GXT: Climb aboard the Seashark at the start line to enter this race. */;
				}
				else
				{
					sVar1 = "SEA_NA_VEH2" /* GXT: You need a Seashark to enter this race. */;
				}
				func_150(sVar1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_153()//Position - 0x85FD
{
	int iVar0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
			if (iVar0 == joaat("seashark") || iVar0 == joaat("seashark2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_154()//Position - 0x863F
{
	int iVar0;
	int iVar1;
	int iVar2[83];
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
			if (__LIB_9__::func_238(iVar0))
			{
				return 1;
			}
			if ((((((((((iVar0 == joaat("police4") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("lguard")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2")) || iVar0 == joaat("pranger")) || iVar0 == joaat("ambulance")) || iVar0 == joaat("firetruk"))
			{
				return 1;
			}
			if (((VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) || VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0)) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
			{
				return 2;
			}
			iVar2[0] = joaat("ambulance");
			iVar2[1] = joaat("benson");
			iVar2[2] = joaat("biff");
			iVar2[3] = joaat("bus");
			iVar2[4] = joaat("firetruk");
			iVar2[5] = joaat("forklift");
			iVar2[6] = joaat("mule");
			iVar2[7] = joaat("mule2");
			iVar2[8] = joaat("packer");
			iVar2[9] = joaat("phantom");
			iVar2[10] = joaat("mower");
			iVar2[11] = joaat("stockade");
			iVar2[12] = joaat("squalo");
			iVar2[13] = joaat("maverick");
			iVar2[14] = joaat("polmav");
			iVar2[15] = joaat("airtug");
			iVar2[16] = joaat("boxville3");
			iVar2[17] = joaat("annihilator");
			iVar2[18] = joaat("dinghy");
			iVar2[19] = 0;
			iVar2[20] = joaat("ripley");
			iVar2[21] = joaat("trash");
			iVar2[22] = joaat("burrito");
			iVar2[23] = joaat("pony");
			iVar2[24] = joaat("speedo");
			iVar2[25] = joaat("marquis");
			iVar2[26] = joaat("sanchez");
			iVar2[27] = joaat("airtug");
			iVar2[28] = joaat("taco");
			iVar2[29] = joaat("barracks");
			iVar2[30] = joaat("romero");
			iVar2[31] = joaat("blazer");
			iVar2[32] = joaat("blazer2");
			iVar2[33] = joaat("bodhi2");
			iVar2[34] = joaat("boxville2");
			iVar2[35] = joaat("bulldozer");
			iVar2[36] = joaat("caddy");
			iVar2[37] = joaat("caddy2");
			iVar2[38] = joaat("camper");
			iVar2[39] = joaat("tiptruck");
			iVar2[40] = joaat("tourbus");
			iVar2[41] = joaat("towtruck");
			iVar2[42] = joaat("towtruck2");
			iVar2[43] = joaat("tractor");
			iVar2[44] = joaat("tractor2");
			iVar2[45] = joaat("utillitruck");
			iVar2[46] = joaat("utillitruck2");
			iVar2[47] = joaat("utillitruck3");
			iVar2[48] = joaat("ratloader");
			iVar2[49] = joaat("dloader");
			iVar2[50] = joaat("docktug");
			iVar2[51] = joaat("dump");
			iVar2[52] = joaat("gburrito");
			iVar2[53] = joaat("handler");
			iVar2[54] = joaat("hauler");
			iVar2[55] = joaat("journey");
			iVar2[56] = joaat("rentalbus");
			iVar2[57] = joaat("mixer");
			iVar2[58] = joaat("rhino");
			iVar2[59] = joaat("cutter");
			iVar2[60] = joaat("pounder");
			iVar2[61] = joaat("tiptruck2");
			iVar2[62] = joaat("mixer2");
			iVar2[63] = joaat("rubble");
			iVar2[64] = joaat("scrap");
			iVar2[65] = joaat("armytanker");
			iVar2[66] = joaat("barracks2");
			iVar2[67] = joaat("airbus");
			iVar2[68] = joaat("coach");
			iVar2[69] = joaat("pbus");
			iVar2[70] = joaat("riot");
			iVar2[71] = 0;
			iVar2[72] = joaat("stockade3");
			iVar2[73] = joaat("flatbed");
			iVar2[74] = joaat("boxville");
			iVar2[75] = joaat("burrito2");
			iVar2[76] = joaat("burrito3");
			iVar2[77] = joaat("burrito4");
			iVar2[78] = joaat("rumpo");
			iVar2[79] = joaat("speedo2");
			iVar2[80] = 0;
			iVar2[81] = joaat("blimp");
			iVar2[82] = joaat("blimp2");
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (iVar0 == iVar2[iVar1])
				{
					return 2;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_156()//Position - 0x8B3B
{
	int iVar0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
			if (iVar0 == joaat("policeb"))
			{
				return 1;
			}
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar0))
			{
				return 0;
			}
		}
	}
	return 2;
}

void func_158(char* sParam0, int iParam1)//Position - 0x8BBF
{
	if (!__LIB_4__::func_66(sParam0, iParam1))
	{
		__LIB_5__::func_952(sParam0, iParam1);
	}
}

int func_162()//Position - 0x8C68
{
	int iVar0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (__LIB_0__::func_121(iVar0))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(iVar0))
				{
					if (Local_43.f_1 == 3 && ENTITY::IS_ENTITY_IN_WATER(iVar0))
					{
						return 0;
					}
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 0;
}

int func_163()//Position - 0x8CC7
{
	int iVar0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iVar0 = 20;
		if (Local_43.f_1 == 3)
		{
			iVar0 = 40;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_44, true) < IntToFloat(iVar0) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_164()//Position - 0x8D17
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_37__::func_436(&uLocal_90))
	{
		if (Local_43.f_1 == 2)
		{
			if (func_166())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_57))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_71) && STREAMING::HAS_MODEL_LOADED(iLocal_71))
					{
						iLocal_57 = VEHICLE::CREATE_VEHICLE(iLocal_71, Local_59, fLocal_60, true, true, false);
						if (PED::CAN_CREATE_RANDOM_PED(true) && PED::CAN_CREATE_RANDOM_DRIVER())
						{
							iLocal_58 = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_57, true);
							TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_58, iLocal_57, 1, 99999999);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_58, true);
							PED::SET_PED_KEEP_TASK(iLocal_58, true);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_57, 5f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_57, true, true, false);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_57, true);
						AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_57, true);
						AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), true);
						AUDIO::SET_VEH_RADIO_STATION(iLocal_57, AUDIO::GET_RADIO_STATION_NAME(10));
						VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iLocal_57, false);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_71);
						SYSTEM::WAIT(0);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_61))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_72))
					{
						iLocal_61 = VEHICLE::CREATE_VEHICLE(iLocal_72, Local_62, fLocal_63, true, true, false);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_61, false, true, false);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_61, true);
						AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_61, true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_61, 5f);
						AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), true);
						AUDIO::SET_VEH_RADIO_STATION(iLocal_61, AUDIO::GET_RADIO_STATION_NAME(10));
						VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iLocal_61, false);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_72);
						SYSTEM::WAIT(0);
					}
				}
				if (STREAMING::HAS_ANIM_DICT_LOADED(cLocal_73))
				{
					if (iLocal_75)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_70 - 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_56[iVar0]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_56[iVar0], false) && !__LIB_4__::func_465(iLocal_56[iVar0], joaat("SCRIPT_TASK_PLAY_ANIM")))
								{
									TASK::TASK_PLAY_ANIM(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], 1000f, -1000f, -1, 1, 0f, false, false, false);
									PED::SET_PED_KEEP_TASK(iLocal_56[iVar0], true);
								}
							}
							else if (STREAMING::HAS_MODEL_LOADED(iLocal_70[iVar0]))
							{
								iLocal_56[iVar0] = PED::CREATE_PED(25, iLocal_70[iVar0], Local_66[iVar0 /*3*/], fLocal_67[iVar0], true, true);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_56[iVar0], Local_66[iVar0 /*3*/], false, false, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56[iVar0], true);
								TASK::TASK_PLAY_ANIM(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], 1000f, -1000f, -1, 1, 0f, false, false, false);
								PED::SET_PED_KEEP_TASK(iLocal_56[iVar0], true);
							}
							iVar0++;
						}
						if ((((((((__LIB_1__::func_197(iLocal_56[0]) && __LIB_1__::func_197(iLocal_56[1])) && __LIB_1__::func_197(iLocal_56[2])) && __LIB_1__::func_197(iLocal_56[3])) && __LIB_1__::func_197(iLocal_56[4])) && __LIB_1__::func_197(iLocal_56[5])) && __LIB_1__::func_197(iLocal_56[6])) && __LIB_1__::func_183(iLocal_57)) && __LIB_1__::func_183(iLocal_61))
						{
							bLocal_55 = true;
							iVar0 = 0;
							while (iVar0 <= (iLocal_70 - 1))
							{
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_70[iVar0]);
								iVar0++;
							}
							iLocal_75 = 0;
						}
					}
				}
			}
		}
		else if (Local_43.f_1 == 1)
		{
			if (func_166())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_57))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_71))
					{
						iLocal_57 = VEHICLE::CREATE_VEHICLE(iLocal_71, Local_59, fLocal_60, true, true, false);
						if (PED::CAN_CREATE_RANDOM_PED(false) && PED::CAN_CREATE_RANDOM_BIKE_RIDER())
						{
							iLocal_58 = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_57, true);
							TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_58, iLocal_57, 1, 99999999);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_58, true);
							PED::SET_PED_KEEP_TASK(iLocal_58, true);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_57, true, true, false);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_57, true);
						AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_57, true);
						AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), true);
						AUDIO::SET_VEH_RADIO_STATION(iLocal_57, AUDIO::GET_RADIO_STATION_NAME(10));
						VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iLocal_57, false);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_71);
					}
				}
				if (STREAMING::HAS_ANIM_DICT_LOADED(cLocal_73))
				{
					if (iLocal_75)
					{
						iVar1 = 0;
						while (iVar1 <= (iLocal_70 - 3))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_56[iVar1]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_56[iVar1], false) && !__LIB_4__::func_465(iLocal_56[iVar1], joaat("SCRIPT_TASK_PLAY_ANIM")))
								{
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_56[iVar1], Local_66[iVar1 /*3*/], false, false, true);
									if (iVar1 != 2 && iVar1 != 3)
									{
										TASK::TASK_PLAY_ANIM(iLocal_56[iVar1], cLocal_73, sLocal_74[iVar1], 1000f, -1000f, -1, 1, 0f, false, false, false);
									}
									else
									{
										TASK::TASK_PLAY_ANIM(iLocal_56[iVar1], cLocal_73, sLocal_74[iVar1], 1000f, -1000f, -1, 1, 0.5f, false, false, false);
									}
									PED::SET_PED_KEEP_TASK(iLocal_56[iVar1], true);
								}
							}
							else if (STREAMING::HAS_MODEL_LOADED(iLocal_70[iVar1]))
							{
								iLocal_56[iVar1] = PED::CREATE_PED(25, iLocal_70[iVar1], Local_66[iVar1 /*3*/], fLocal_67[iVar1], true, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56[iVar1], true);
							}
							iVar1++;
						}
						if ((((__LIB_1__::func_197(iLocal_56[0]) && __LIB_1__::func_197(iLocal_56[1])) && __LIB_1__::func_197(iLocal_56[2])) && __LIB_1__::func_197(iLocal_56[3])) && __LIB_1__::func_197(iLocal_56[4]))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_56[4], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
							iVar1 = 0;
							while (iVar1 <= (iLocal_70 - 1))
							{
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_70[iVar1]);
								iVar1++;
							}
							iLocal_75 = 0;
						}
					}
				}
			}
		}
		else if (Local_43.f_1 == 3)
		{
			if (func_166())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_57))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_71))
					{
						iLocal_57 = VEHICLE::CREATE_VEHICLE(iLocal_71, Local_59, fLocal_60, true, true, false);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_57, 5f);
						VEHICLE::SET_BOAT_LOW_LOD_ANCHOR_DISTANCE(iLocal_57, 0f);
						VEHICLE::SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(iLocal_57, false);
						VEHICLE::SET_FORCE_LOW_LOD_ANCHOR_MODE(iLocal_57, false);
						if (VEHICLE::CAN_ANCHOR_BOAT_HERE(iLocal_57))
						{
							VEHICLE::SET_BOAT_ANCHOR(iLocal_57, true);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_57, false, true, false);
					}
				}
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_68[iVar2]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_69[iVar2]))
						{
							if (!PED::IS_PED_INJURED(iLocal_69[iVar2]) && __LIB_1__::func_183(iLocal_68[iVar2]))
							{
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_68[iVar2], -1, false))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_69[iVar2], iLocal_68[iVar2], -1);
								}
							}
						}
						else if (__LIB_1__::func_183(iLocal_68[iVar2]) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_Jetski_01")))
						{
							iLocal_69[iVar2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_68[iVar2], 25, joaat("A_M_Y_Jetski_01"), -1, true, true);
							PED::SET_PED_DIES_IN_WATER(iLocal_69[iVar2], false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_69[iVar2], true);
						}
					}
					else if (STREAMING::HAS_MODEL_LOADED(iLocal_71))
					{
						iLocal_68[iVar2] = VEHICLE::CREATE_VEHICLE(iLocal_71, Local_64[iVar2 /*3*/], fLocal_65[iVar2], true, true, false);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_68[iVar2], 5f);
						VEHICLE::SET_BOAT_LOW_LOD_ANCHOR_DISTANCE(iLocal_68[iVar2], 0f);
						VEHICLE::SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(iLocal_68[iVar2], true);
						VEHICLE::SET_FORCE_LOW_LOD_ANCHOR_MODE(iLocal_68[iVar2], true);
						if (VEHICLE::CAN_ANCHOR_BOAT_HERE(iLocal_68[iVar2]))
						{
							VEHICLE::SET_BOAT_ANCHOR(iLocal_68[iVar2], true);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_68[iVar2], false, true, false);
					}
					iVar2++;
				}
				if (((ENTITY::DOES_ENTITY_EXIST(iLocal_57) && ENTITY::DOES_ENTITY_EXIST(iLocal_68[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_68[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_68[2]))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_71);
				}
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_69[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_69[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_69[2]))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_Jetski_01"));
				}
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, true);
			}
		}
	}
}

int func_166()//Position - 0x946F
{
	if (!func_168())
	{
		return 0;
	}
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
	{
		if (!__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_59, 100f, 1) || CAM::IS_SCREEN_FADED_OUT())
		{
			return 1;
		}
	}
	return 0;
}

int func_168()//Position - 0x94D1
{
	if (Local_43.f_1 == 3)
	{
		return 1;
	}
	else if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		if (CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() < 5)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_176()//Position - 0x980B
{
	int iVar0;
	if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		switch (Local_43.f_0)
		{
			case 0:
				Local_59 = { -158.67f, -1555.16f, 34.63f };
				fLocal_60 = 187.71f;
				Local_62 = { -155.15f, -1550.83f, 34.53f };
				fLocal_63 = 213.13f;
				Local_83 = { -68.878784f, -1818.9027f, 24.553106f };
				Local_84 = { -56.0098f, -1807.0287f, 27.85417f };
				Local_66[0 /*3*/] = { -157.19f, -1555.36f, 35.07f };
				Local_66[1 /*3*/] = { -157.04f, -1557.57f, 35.11f };
				Local_66[2 /*3*/] = { -159.83f, -1557.39f, 34.96f };
				Local_66[3 /*3*/] = { -156.64f, -1551.96f, 34.92f };
				Local_66[4 /*3*/] = { -156.25f, -1552.58f, 34.93f };
				Local_66[5 /*3*/] = { -153.23f, -1553.05f, 34.93f };
				Local_66[6 /*3*/] = { -155.3f, -1556.41f, 35.13f };
				fLocal_67[0] = 101.91f;
				fLocal_67[1] = 38.48f;
				fLocal_67[2] = -36.7f;
				fLocal_67[3] = -52.93f;
				fLocal_67[4] = -75.07f;
				fLocal_67[5] = 33.13f;
				fLocal_67[6] = -170.02f;
				break;
			case 1:
				Local_59 = { 368.72f, 294.06f, 102.96f };
				fLocal_60 = 25.17f;
				Local_62 = { 373.71f, 290.72f, 102.89f };
				fLocal_63 = 33.24f;
				Local_83 = { -523.5497f, 262.29855f, 80.019905f };
				Local_84 = { -509.10135f, 272.47803f, 86.17713f };
				Local_66[0 /*3*/] = { 367.24f, 293.81f, 103.41f };
				Local_66[1 /*3*/] = { 368.73f, 296.89f, 103.41f };
				Local_66[2 /*3*/] = { 366.94f, 296.34f, 103.43f };
				Local_66[3 /*3*/] = { 375.21f, 291.85f, 103.25f };
				Local_66[4 /*3*/] = { 374.81f, 292.47f, 103.26f };
				Local_66[5 /*3*/] = { 371.51f, 291.85f, 103.31f };
				Local_66[6 /*3*/] = { 373.86f, 296.3f, 103.31f };
				fLocal_67[0] = -64.83f;
				fLocal_67[1] = -163.04f;
				fLocal_67[2] = -118.77f;
				fLocal_67[3] = 127.18f;
				fLocal_67[4] = 105.04f;
				fLocal_67[5] = -146.75f;
				fLocal_67[6] = 10.11f;
				break;
			case 2:
				Local_59 = { -807.98f, -2555.14f, 13.34f };
				fLocal_60 = 3.35f;
				Local_62 = { -810.1f, -2560.85f, 13.38f };
				fLocal_63 = 43.57f;
				Local_83 = { -1000.75854f, -2436.0918f, 17.169464f };
				Local_84 = { -986.7399f, -2424.8699f, 22.16946f };
				Local_66[0 /*3*/] = { -809.45f, -2554.82f, 13.76f };
				Local_66[1 /*3*/] = { -808.47f, -2552.43f, 13.76f };
				Local_66[2 /*3*/] = { -806.32f, -2552.87f, 13.76f };
				Local_66[3 /*3*/] = { -808.59f, -2559.5f, 13.76f };
				Local_66[4 /*3*/] = { -809.1f, -2558.97f, 13.76f };
				Local_66[5 /*3*/] = { -812.82f, -2559.48f, 13.76f };
				Local_66[6 /*3*/] = { -810.72f, -2555.37f, 13.76f };
				fLocal_67[0] = -86.65f;
				fLocal_67[1] = -130.05f;
				fLocal_67[2] = 150.04f;
				fLocal_67[3] = 137.51f;
				fLocal_67[4] = 115.37f;
				fLocal_67[5] = -136.43f;
				fLocal_67[6] = 20.43f;
				break;
			case 3:
				Local_59 = { 778.59f, -1160.2f, 28.35f };
				fLocal_60 = 302.47f;
				Local_62 = { 778.47f, -1164.01f, 28.25f };
				fLocal_63 = 287.97f;
				Local_83 = { -1000.75854f, -2436.0918f, 17.169464f };
				Local_84 = { -986.7399f, -2424.8699f, 22.16946f };
				Local_66[0 /*3*/] = { 778.16f, -1158.78f, 28.88f };
				Local_66[1 /*3*/] = { 780.82f, -1158.1f, 28.73f };
				Local_66[2 /*3*/] = { 781.52f, -1158.81f, 28.7f };
				Local_66[3 /*3*/] = { 779.16f, -1165.74f, 28.72f };
				Local_66[4 /*3*/] = { 779.86f, -1165.52f, 28.72f };
				Local_66[5 /*3*/] = { 780.75f, -1161.99f, 28.65f };
				Local_66[6 /*3*/] = { 783.8f, -1165.61f, 28.74f };
				fLocal_67[0] = -147.53f;
				fLocal_67[1] = 171.51f;
				fLocal_67[2] = 104.94f;
				fLocal_67[3] = 21.91f;
				fLocal_67[4] = -0.22f;
				fLocal_67[5] = 107.91f;
				fLocal_67[6] = -95.23f;
				break;
			case 4:
				Local_59 = { -1066.59f, -1151.04f, 1.71f };
				fLocal_60 = 258.32f;
				Local_66[0 /*3*/] = { -1065.07f, -1151.02f, 2.16f };
				Local_66[1 /*3*/] = { -1065.35f, -1149.36f, 2.16f };
				Local_66[2 /*3*/] = { -1067.13f, -1151.68f, 2.16f };
				Local_66[3 /*3*/] = { -1066.3f, -1149.38f, 2.16f };
				Local_66[4 /*3*/] = { -1066.01f, -1152.26f, 2.16f };
				fLocal_67[0] = 75.06f;
				fLocal_67[1] = 134.25f;
				fLocal_67[2] = -52.71f;
				fLocal_67[3] = -93.39f;
				fLocal_67[4] = -141.52f;
				Local_83 = { -1265.7444f, -1057.1992f, 5.410841f };
				Local_84 = { -1258.679f, -1049.9191f, 9.443882f };
				break;
		}
		__LIB_29__::func_811(Local_43.f_0, &Local_85, &Local_86, &fLocal_87);
		iLocal_70[0] = joaat("A_F_Y_Hipster_02");
		iLocal_70[1] = joaat("A_M_Y_Hipster_02");
		iLocal_70[2] = joaat("A_M_Y_Hipster_02");
		iLocal_70[3] = joaat("A_F_Y_Hipster_02");
		iLocal_70[4] = joaat("A_M_Y_Hipster_02");
		iLocal_70[5] = joaat("A_M_Y_Hipster_02");
		iLocal_70[6] = joaat("A_M_Y_Hipster_02");
		if (Local_43.f_1 == 1)
		{
			cLocal_73 = "random@street_race";
			sLocal_74[0] = "_car_b_chatting_female";
			sLocal_74[1] = "_car_b_chatting_male";
			sLocal_74[2] = "_car_b_chatting_male";
			sLocal_74[3] = "_car_b_chatting_female";
			sLocal_74[4] = "_car_b_lookout";
		}
		else
		{
			cLocal_73 = "random@street_race";
			sLocal_74[0] = "_car_a_flirt_girl";
			sLocal_74[1] = "_car_a_gawker_male_a";
			sLocal_74[2] = "_car_a_gawker_male_b";
			sLocal_74[3] = "_car_b_chatting_female";
			sLocal_74[4] = "_car_b_chatting_male";
			sLocal_74[5] = "_car_b_driver";
			sLocal_74[6] = "_car_b_lookout";
			__LIB_30__::func_336(&uLocal_90, iLocal_72);
		}
		iLocal_71 = __LIB_29__::func_810(Local_43.f_1);
		iVar0 = 0;
		while (iVar0 <= (iLocal_70 - 1))
		{
			__LIB_30__::func_336(&uLocal_90, iLocal_70[iVar0]);
			iVar0++;
		}
		__LIB_30__::func_336(&uLocal_90, iLocal_71);
		__LIB_34__::func_979(&uLocal_90, cLocal_73);
		PATHFIND::SET_PED_PATHS_IN_AREA(Local_83, Local_84, false, 0);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_85, Local_86, fLocal_87, false, false, true);
		iLocal_47 = 1;
	}
	else if (Local_43.f_1 == 3)
	{
		switch (Local_43.f_0)
		{
			case 5:
				Local_59 = { 3066.63f, 650.9f, 0.17f };
				fLocal_60 = 351.81f;
				Local_64[0 /*3*/] = { 3073.57f, 648.09f, 0.01f };
				fLocal_65[0] = 5.72f;
				Local_64[1 /*3*/] = { 3071.53f, 648.79f, -0.09f };
				fLocal_65[1] = 351.33f;
				Local_64[2 /*3*/] = { 3068.73f, 645.53f, -0.07f };
				fLocal_65[2] = 348.18f;
				break;
			case 6:
				Local_59 = { 3462.11f, 5192.15f, -0.04f };
				fLocal_60 = 222.9f;
				Local_64[0 /*3*/] = { 3456.64f, 5195.91f, 0.12f };
				fLocal_65[0] = 211.54f;
				Local_64[1 /*3*/] = { 3453.19f, 5192.84f, -0.17f };
				fLocal_65[1] = 201.55f;
				Local_64[2 /*3*/] = { 3451.06f, 5189.43f, -0.3f };
				fLocal_65[2] = 221.55f;
				break;
			case 7:
				Local_59 = { 194.64f, 3621.27f, 29.91f };
				fLocal_60 = 163.95f;
				Local_64[0 /*3*/] = { 198.62f, 3620.46f, 29.91f };
				fLocal_65[0] = 175.4f;
				Local_64[1 /*3*/] = { 202.78f, 3619.69f, 29.87f };
				fLocal_65[1] = 163.69f;
				Local_64[2 /*3*/] = { 210.14f, 3618.88f, 29.87f };
				fLocal_65[2] = 175.31f;
				break;
			case 8:
				Local_59 = { 627.58f, -2138.06f, -0.07f };
				fLocal_60 = 180.09f;
				Local_64[0 /*3*/] = { 643.09f, -2146.11f, -0.09f };
				fLocal_65[0] = 143.89f;
				Local_64[1 /*3*/] = { 638.21f, -2145.3f, -0.1f };
				fLocal_65[1] = 172.41f;
				Local_64[2 /*3*/] = { 633.56f, -2143.83f, -0.04f };
				fLocal_65[2] = 191.97f;
				break;
		}
		iLocal_71 = joaat("seashark");
		__LIB_30__::func_336(&uLocal_90, iLocal_71);
		__LIB_30__::func_336(&uLocal_90, joaat("A_M_Y_Jetski_01"));
	}
}

int func_182()//Position - 0xA3FF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (__LIB_6__::func_854(9))
	{
		return 0;
	}
	if (__LIB_0__::func_39(6) || __LIB_0__::func_39(7))
	{
		return 0;
	}
	if (Global_63148)
	{
		return 0;
	}
	if (func_205())
	{
		return 0;
	}
	if (Local_43.f_1 != 3 && __LIB_18__::func_173() != 1)
	{
		return 0;
	}
	if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
	{
		return 0;
	}
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (((__LIB_1__::func_183(iVar0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0)) && !__LIB_1__::func_198(PLAYER::PLAYER_PED_ID(), iVar0, -1)) && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("taxi"))
		{
			return 0;
		}
	}
	switch (Local_43.f_0)
	{
		case 0:
			if (Global_113360[0])
			{
				return 0;
			}
			break;
		case 1:
			if (Global_113360[1])
			{
				return 0;
			}
			break;
		case 2:
			if (Global_113360[2])
			{
				return 0;
			}
			break;
		case 3:
			if (Global_113360[3])
			{
				return 0;
			}
			break;
		case 4:
			if (Global_113360[4])
			{
				return 0;
			}
			break;
		case 5:
			if (Global_113350[0])
			{
				return 0;
			}
			break;
		case 6:
			if (Global_113350[1])
			{
				return 0;
			}
			break;
		case 7:
			if (Global_113350[2])
			{
				return 0;
			}
			break;
		case 8:
			if (Global_113350[3])
			{
				return 0;
			}
			break;
	}
	if (!func_168())
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_70 - 1))
		{
			if (__LIB_1__::func_197(iLocal_56[iVar1]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_PAUSE(0, iVar1 * 100);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_56[iVar1], iVar2);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= (iLocal_69 - 1))
		{
			if (__LIB_1__::func_197(iLocal_69[iVar1]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_PAUSE(0, iVar1 * 110);
				if (__LIB_1__::func_183(iLocal_68[iVar1]) && PED::IS_PED_IN_VEHICLE(iLocal_69[iVar1], iLocal_68[iVar1], false))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_68[iVar1], 30f, 786597);
				}
				else
				{
					TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_69[iVar1], iVar2);
			}
			iVar1++;
		}
		if (__LIB_1__::func_197(iLocal_58))
		{
			if (__LIB_1__::func_183(iLocal_57) && PED::IS_PED_IN_VEHICLE(iLocal_58, iLocal_57, false))
			{
				TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_58, iLocal_57, 30f, 786597);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(iLocal_58, 40000f, 0);
			}
		}
		return 0;
	}
	if (func_184())
	{
		iVar4 = 0;
		while (iVar4 <= (iLocal_70 - 1))
		{
			if (__LIB_1__::func_197(iLocal_56[iVar4]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_PAUSE(0, iVar4 * 50);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				if ((iVar4 % 2) == 0)
				{
					__LIB_20__::func_243(iLocal_56[iVar4], 1);
				}
				TASK::TASK_PERFORM_SEQUENCE(iLocal_56[iVar4], iVar3);
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= (iLocal_69 - 1))
		{
			if (__LIB_1__::func_183(iLocal_68[iVar4]) && Local_43.f_1 == 3)
			{
				VEHICLE::SET_BOAT_ANCHOR(iLocal_68[iVar4], false);
			}
			if (__LIB_1__::func_197(iLocal_69[iVar4]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_PAUSE(0, iVar4 * 60);
				if (__LIB_1__::func_183(iLocal_68[iVar4]) && PED::IS_PED_IN_VEHICLE(iLocal_69[iVar4], iLocal_68[iVar4], false))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_68[iVar4], 50f, 786468);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				}
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_69[iVar4], iVar3);
				if ((iVar4 % 2) == 0)
				{
					__LIB_20__::func_243(iLocal_69[iVar4], 1);
				}
			}
			iVar4++;
		}
		if (__LIB_1__::func_183(iLocal_57) && Local_43.f_1 == 3)
		{
			VEHICLE::SET_BOAT_ANCHOR(iLocal_57, false);
		}
		if (__LIB_1__::func_197(iLocal_58))
		{
			if (__LIB_1__::func_183(iLocal_57) && PED::IS_PED_IN_VEHICLE(iLocal_58, iLocal_57, false))
			{
				TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_58, iLocal_57, 50f, 786468);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_58, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
			}
		}
		switch (Local_43.f_0)
		{
			case 0:
				Global_113360[0] = 1;
				Global_113366[0] = MISC::GET_GAME_TIMER();
				break;
			case 1:
				Global_113360[1] = 1;
				Global_113366[1] = MISC::GET_GAME_TIMER();
				break;
			case 2:
				Global_113360[2] = 1;
				Global_113366[2] = MISC::GET_GAME_TIMER();
				break;
			case 3:
				Global_113360[3] = 1;
				Global_113366[3] = MISC::GET_GAME_TIMER();
				break;
			case 4:
				Global_113360[4] = 1;
				Global_113366[4] = MISC::GET_GAME_TIMER();
				break;
			case 5:
				Global_113350[0] = 1;
				Global_113355[0] = MISC::GET_GAME_TIMER();
				break;
			case 6:
				Global_113350[1] = 1;
				Global_113355[1] = MISC::GET_GAME_TIMER();
				break;
			case 7:
				Global_113350[2] = 1;
				Global_113355[2] = MISC::GET_GAME_TIMER();
				break;
			case 8:
				Global_113350[3] = 1;
				Global_113355[3] = MISC::GET_GAME_TIMER();
				break;
		}
		return 0;
	}
	return 1;
}

int func_184()//Position - 0xA9C4
{
	int iVar0;
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if (Local_43.f_1 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_69 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_69[iVar0]))
			{
				if (PED::IS_PED_INJURED(iLocal_69[iVar0]))
				{
					return 1;
				}
				else if (func_185(iLocal_69[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || PED::IS_PED_BEING_JACKED(iLocal_69[iVar0]))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_68[iVar0]))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_68[iVar0], false))
				{
					return 1;
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_68[iVar0], PLAYER::PLAYER_PED_ID(), true) && ENTITY::GET_ENTITY_HEALTH(iLocal_68[iVar0]) < 900)
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_57, false))
			{
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), true) && ENTITY::GET_ENTITY_HEALTH(iLocal_57) < 900)
			{
				return 1;
			}
		}
		return 0;
	}
	if (__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_44, 50f, 1) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
	{
		if (PED::IS_PED_INJURED(iLocal_58))
		{
			return 1;
		}
		else if (func_185(iLocal_58, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return 1;
		}
		else if (PED::IS_PED_BEING_JACKED(iLocal_58))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_58, false);
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_57, false))
		{
			return 1;
		}
		else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_57, true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_61, false))
		{
			return 1;
		}
		else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_61, true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_70 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_56[iVar0]))
		{
			if (PED::IS_PED_INJURED(iLocal_56[iVar0]))
			{
				return 1;
			}
			else if (func_185(iLocal_56[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_185(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0xAC17
{
	struct<3> Var0;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		if (__LIB_32__::func_572(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(iParam0, true) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return __LIB_10__::func_725(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_186(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_186(int iParam0, float fParam1)//Position - 0xACD2
{
	float fVar0;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(iParam0))
	{
		if (__LIB_10__::func_621(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, false, true, 0))
			{
				if (func_187(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_187(int iParam0, float fParam1)//Position - 0xAD48
{
	return func_188(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_188(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xAD60
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	iVar2 = func_196(iParam0, iParam1);
	if (!__LIB_0__::func_121(iParam0) || !__LIB_0__::func_121(iParam1))
	{
		if (iVar2 != -1)
		{
			__LIB_9__::func_801(&(Local_40[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!__LIB_11__::func_747(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_191();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_40[iVar2 /*4*/].f_1 = iParam0;
		Local_40[iVar2 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_189(&(Local_40[iVar2 /*4*/]), Var1, iParam1, &(Local_40[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_40[iVar2 /*4*/].f_3) < iParam4);
}

int func_189(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5)//Position - 0xAE21
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	iVar3 = 0;
	if (!__LIB_0__::func_121(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { __LIB_10__::func_616(iParam2, iParam5) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &Var1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (ENTITY::IS_ENTITY_A_PED(iVar3))
	{
		__LIB_0__::func_121(iVar3);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3) == iParam2)
		{
			if (bLocal_41)
			{
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = MISC::GET_GAME_TIMER();
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar3))
	{
		__LIB_0__::func_121(iVar3);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam2, false))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar3) == PED::GET_VEHICLE_PED_IS_IN(iParam2, false))
			{
				if (bLocal_41)
				{
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

int func_191()//Position - 0xB012
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_40.f_0)
	{
		if ((Local_40[iVar0 /*4*/] == 0 && Local_40[iVar0 /*4*/].f_1 == 0) && Local_40[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_196(int iParam0, int iParam1)//Position - 0xB168
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_40.f_0)
	{
		if (Local_40[iVar0 /*4*/].f_1 == iParam0 && Local_40[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_205()//Position - 0xB5C6
{
	switch (Local_43.f_0)
	{
		case 5:
			return BitTest(Global_113386.f_24976.f_2, 0);
			break;
		case 6:
			return BitTest(Global_113386.f_24976.f_2, 1);
			break;
		case 7:
			return BitTest(Global_113386.f_24976.f_2, 2);
			break;
		case 8:
			return BitTest(Global_113386.f_24976.f_2, 3);
			break;
		case 0:
			return BitTest(Global_113386.f_24979.f_3, 0);
			break;
		case 1:
			return BitTest(Global_113386.f_24979.f_3, 1);
			break;
		case 2:
			return BitTest(Global_113386.f_24979.f_3, 2);
			break;
		case 3:
			return BitTest(Global_113386.f_24979.f_3, 3);
			break;
		case 4:
			return BitTest(Global_113386.f_24979.f_3, 4);
			break;
	}
	return 0;
}

void func_206()//Position - 0xB6A5
{
	iLocal_42 = 0;
	iLocal_45 = 0;
	bLocal_52 = false;
	bLocal_53 = false;
	iLocal_49 = 0;
	iLocal_50 = 0;
	iLocal_51 = 0;
	func_208(1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", false);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PARALLEL", false);
	if (Local_43.f_0 == 1)
	{
		iLocal_89 = __LIB_11__::func_517(374.00833f, 279.59192f, 102.330574f, 40f);
		MISC::CLEAR_AREA_OF_VEHICLES(374.00833f, 279.59192f, 102.330574f, 25f, false, false, false, false, false, false, 0);
	}
	if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		iLocal_88 = __LIB_11__::func_517(Local_44, 60f);
	}
}

void func_208(bool bParam0)//Position - 0xB76E
{
	if (bParam0)
	{
		switch (Local_43.f_0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				__LIB_30__::func_336(&uLocal_90, joaat("banshee"));
				__LIB_30__::func_336(&uLocal_90, joaat("feltzer2"));
				__LIB_30__::func_336(&uLocal_90, joaat("sentinel"));
				break;
			case 4:
				__LIB_30__::func_336(&uLocal_90, joaat("bati"));
				__LIB_30__::func_336(&uLocal_90, joaat("ruffian"));
				break;
			case 5:
			case 6:
			case 7:
			case 8:
				__LIB_30__::func_336(&uLocal_90, joaat("seashark"));
				break;
		}
	}
	else
	{
		__LIB_37__::func_434(&uLocal_90);
	}
}

int func_212(int iParam0)//Position - 0xB913
{
	switch (iParam0)
	{
		case 0:
			return BitTest(Global_113386.f_24979.f_1, 0);
			break;
		case 1:
			return BitTest(Global_113386.f_24979.f_1, 1);
			break;
		case 2:
			return BitTest(Global_113386.f_24979.f_1, 2);
			break;
		case 3:
			return BitTest(Global_113386.f_24979.f_1, 3);
			break;
		case 4:
			return BitTest(Global_113386.f_24979.f_1, 4);
			break;
	}
	return 0;
}

void func_214()//Position - 0xB9E0
{
	if (__LIB_0__::func_394(__LIB_11__::func_156(86, 0), Local_44, 1f, 0))
	{
		Local_43.f_0 = 0;
		Local_43.f_1 = 2;
		Local_43.f_3 = 100;
		Local_43.f_4 = 20;
	}
	else if (__LIB_0__::func_394(__LIB_11__::func_156(87, 0), Local_44, 1f, 0))
	{
		Local_43.f_0 = 1;
		Local_43.f_1 = 2;
		Local_43.f_3 = 500;
		Local_43.f_4 = 18;
	}
	else if (__LIB_0__::func_394(__LIB_11__::func_156(88, 0), Local_44, 1f, 0))
	{
		Local_43.f_0 = 2;
		Local_43.f_1 = 2;
		Local_43.f_3 = 1000;
		Local_43.f_4 = 2;
	}
	else if (__LIB_0__::func_394(__LIB_11__::func_156(89, 0), Local_44, 1f, 0))
	{
		Local_43.f_0 = 3;
		Local_43.f_1 = 2;
		Local_43.f_3 = 1250;
		Local_43.f_4 = 4;
	}
	else if (__LIB_0__::func_394(__LIB_11__::func_156(90, 0), Local_44, 1f, 0))
	{
		Local_43.f_0 = 4;
		Local_43.f_1 = 1;
		Local_43.f_3 = 1500;
		Local_43.f_4 = 5;
	}
	else if (__LIB_0__::func_394(__LIB_11__::func_156(82, 0), Local_44, 1f, 0))
	{
		Local_43.f_0 = 5;
		Local_43.f_1 = 3;
		Local_43.f_3 = 0;
		Local_43.f_4 = 16;
	}
	else if (__LIB_0__::func_394(__LIB_11__::func_156(83, 0), Local_44, 1f, 0))
	{
		Local_43.f_0 = 6;
		Local_43.f_1 = 3;
		Local_43.f_3 = 0;
		Local_43.f_4 = 13;
	}
	else if (__LIB_0__::func_394(__LIB_11__::func_156(84, 0), Local_44, 1f, 0))
	{
		Local_43.f_0 = 7;
		Local_43.f_1 = 3;
		Local_43.f_3 = 0;
		Local_43.f_4 = 15;
		Local_43.f_5 = 1;
	}
	else if (__LIB_0__::func_394(__LIB_11__::func_156(85, 0), Local_44, 1f, 0))
	{
		Local_43.f_0 = 8;
		Local_43.f_1 = 3;
		Local_43.f_4 = 24;
		Local_43.f_3 = 0;
		Local_43.f_5 = 1;
	}
	else
	{
		func_217(0);
	}
}

void func_217(bool bParam0)//Position - 0xBC31
{
	int iVar0;
	int iVar1;
	if (!iLocal_46)
	{
		CAM::STOP_GAMEPLAY_HINT(false);
		iLocal_46 = 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (__LIB_0__::func_121(iLocal_56[iVar0]))
		{
			TASK::CLEAR_PED_TASKS(iLocal_56[iVar0]);
			TASK::TASK_WANDER_STANDARD(iLocal_56[iVar0], 40000f, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56[iVar0], false);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_56[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__::func_121(iLocal_69[iVar0]))
		{
			if (__LIB_0__::func_121(iLocal_68[iVar0]))
			{
				TASK::CLEAR_PED_TASKS(iLocal_69[iVar0]);
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_68[iVar0])))
				{
					VEHICLE::SET_BOAT_ANCHOR(iLocal_68[iVar0], false);
				}
				TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_69[iVar0], iLocal_68[iVar0], 20f, 786599);
				PED::SET_PED_KEEP_TASK(iLocal_69[iVar0], true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_69[iVar0], false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_69[iVar0]));
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_68[iVar0]));
			}
		}
		iVar0++;
	}
	if (__LIB_0__::func_121(iLocal_58))
	{
		if (__LIB_0__::func_121(iLocal_57))
		{
			TASK::CLEAR_PED_TASKS(iLocal_58);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_58, 1, true);
			TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_58, iLocal_57, 15f, 786599);
			PED::SET_PED_KEEP_TASK(iLocal_58, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_58, false);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_58);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_57);
		}
	}
	if (__LIB_0__::func_121(iLocal_61))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_61);
	}
	switch (Local_43.f_0)
	{
		case 5:
			__LIB_10__::func_604(82, 0, 0);
			MISC::SET_BIT(&(Global_113386.f_24976.f_2), 0);
			break;
		case 6:
			__LIB_10__::func_604(83, 0, 0);
			MISC::SET_BIT(&(Global_113386.f_24976.f_2), 1);
			break;
		case 7:
			__LIB_10__::func_604(84, 0, 0);
			MISC::SET_BIT(&(Global_113386.f_24976.f_2), 2);
			break;
		case 8:
			__LIB_10__::func_604(85, 0, 0);
			MISC::SET_BIT(&(Global_113386.f_24976.f_2), 3);
			break;
		case 0:
			__LIB_10__::func_604(86, 0, 0);
			MISC::SET_BIT(&(Global_113386.f_24979.f_3), 0);
			break;
		case 1:
			__LIB_10__::func_604(87, 0, 0);
			MISC::SET_BIT(&(Global_113386.f_24979.f_3), 1);
			break;
		case 2:
			__LIB_10__::func_604(88, 0, 0);
			MISC::SET_BIT(&(Global_113386.f_24979.f_3), 2);
			break;
		case 3:
			__LIB_10__::func_604(89, 0, 0);
			MISC::SET_BIT(&(Global_113386.f_24979.f_3), 3);
			break;
		case 4:
			__LIB_10__::func_604(90, 0, 0);
			MISC::SET_BIT(&(Global_113386.f_24979.f_3), 4);
			break;
	}
	if (iLocal_45)
	{
		HUD::CLEAR_HELP(true);
	}
	AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), false);
	if (iLocal_54)
	{
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
	}
	if (iLocal_76 && !bParam0)
	{
		iVar1 = PLAYER::GET_PLAYER_INDEX();
		if (PLAYER::IS_PLAYER_PLAYING(iVar1))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(iVar1))
			{
				PLAYER::SET_PLAYER_CONTROL(iVar1, true, 0);
			}
		}
	}
	if (!bParam0)
	{
		func_208(0);
	}
	if (iLocal_47)
	{
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Local_83, Local_84, 1);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_85, Local_86, fLocal_87, 1);
		iLocal_47 = 0;
	}
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PARALLEL", true);
	if (Local_43.f_0 == 1)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_89, false);
	}
	if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_88, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, false);
	}
	__LIB_39__::func_456(&uLocal_90, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

