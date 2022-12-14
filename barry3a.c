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
	struct<4> Local_35[10];
	bool bLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	struct<61> Local_39 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int* iLocal_42 = NULL;
	struct<5> Local_43 = { 0, 0, 0, 0, 0 } ;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	bool bLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int* iLocal_49 = NULL;
	struct<3> Local_50 = { 0, 0, 0 } ;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	struct<3> Local_53 = { 0, 0, 0 } ;
	int iLocal_54[2] = { 0, 0 };
	struct<3> Local_55[6];
	struct<29> Local_56[2];
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	var uLocal_63 = 16;
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
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	struct<2> Local_228[4];
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	char* sLocal_253 = NULL;
	var uLocal_254 = 0;
	char* sLocal_255 = NULL;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	char[] cLocal_261[8] = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	struct<61> Local_267 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	uLocal_38 = __LIB_2__::func_910(49);
	Local_50 = { 0f, -1f, 0.64f };
	iLocal_51 = joaat("prop_weed_tub_01b");
	Local_53 = { -1138.9767f, -1252.5486f, 6.05f };
	iLocal_58 = joaat("police4");
	iLocal_59 = joaat("A_M_Y_Business_01");
	Local_39 = { ScriptParam_267 };
	__LIB_14__::func_801(&Local_39);
	__LIB_14__::func_841();
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_14__::func_872(1);
		func_466();
	}
	func_454();
	if (ENTITY::DOES_ENTITY_EXIST(Local_39.f_35[0]))
	{
		Local_43.f_4 = Local_39.f_35[0];
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_39.f_41[0]))
	{
		iLocal_49 = Local_39.f_41[0];
	}
	if (__LIB_0__::func_323())
	{
		iVar0 = __LIB_0__::func_344();
		if (Global_94618)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				__LIB_0__::func_427(Local_43, Local_43.f_3, 1, 0);
				func_449(1);
				break;
			case 1:
				__LIB_0__::func_427(Local_53, 298.7f, 1, 0);
				func_448(1);
				break;
			case 2:
				__LIB_0__::func_427(-1243.3162f, -1041.6366f, 7.5121f, 28.2f, 1, 0);
				func_440(1);
				break;
			default:
				break;
		}
		__LIB_14__::func_879(1, 1, 1);
	}
	else if (__LIB_0__::func_2(0))
	{
		__LIB_14__::func_879(1, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_39.f_35[1]))
	{
		__LIB_14__::func_868(&(Local_56[0 /*29*/]), &(Local_39.f_35[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_39.f_28[0]))
	{
		__LIB_14__::func_868(&(Local_56[0 /*29*/].f_1), &(Local_39.f_28[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_39.f_28[1]))
	{
		__LIB_14__::func_868(&(Local_56[0 /*29*/].f_2), &(Local_39.f_28[1]));
	}
	func_423();
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_GRTP", 0);
		__LIB_14__::func_863(Local_39.f_9, 0, 0, 1, 0, 0);
		func_402();
		if (iLocal_40 == 9)
		{
			func_395();
		}
		else if (!func_391())
		{
			__LIB_0__::func_467();
			func_369();
			switch (iLocal_40)
			{
				case 0:
					func_368();
					break;
				case 1:
					func_367();
					break;
				case 2:
					func_366();
					break;
				case 3:
					func_260();
					break;
				case 4:
					func_257();
					break;
				case 5:
					func_245();
					break;
				case 6:
					func_240();
					break;
				case 7:
					func_218();
					break;
				case 8:
					func_1();
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x2C4
{
	switch (iLocal_41)
	{
		case 0:
			__LIB_0__::func_714(&iLocal_42);
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_43.f_4, false))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
				{
					iLocal_241 = 1;
					iLocal_242 = 0;
					iLocal_42 = __LIB_14__::func_704(Local_53, 5, 1);
				}
				else
				{
					iLocal_241 = 1;
					iLocal_242 = 1;
					if (MISC::GET_PROFILE_SETTING(203) == 0 || !__LIB_0__::func_75())
					{
						func_213(2);
						iLocal_240 = 0;
					}
					else
					{
						iLocal_240 = 1;
					}
				}
			}
			else
			{
				iLocal_241 = 0;
				if (func_212(3))
				{
					if (MISC::GET_PROFILE_SETTING(203) == 0 || !__LIB_0__::func_75())
					{
						func_213(3);
						iLocal_240 = 0;
					}
					else
					{
						iLocal_240 = 1;
					}
				}
				else
				{
					iLocal_240 = 0;
				}
				iLocal_42 = __LIB_14__::func_866(Local_43.f_4, 1, 5);
			}
			iLocal_41 = 1;
			break;
		case 1:
			if (!__LIB_0__::func_725(Local_43.f_4, Local_53, 125f, 1))
			{
				sLocal_253 = "B3ANOTDELV";
				iLocal_41 = 0;
				iLocal_40 = 9;
			}
			else if (!iLocal_241)
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_43.f_4, false))
				{
					iLocal_241 = 1;
					HUD::CLEAR_PRINTS();
					__LIB_0__::func_714(&iLocal_42);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						iLocal_242 = 1;
						iLocal_240 = 1;
					}
					else
					{
						iLocal_242 = 0;
						if (ENTITY::IS_ENTITY_AT_COORD(Local_43.f_4, Local_53, 6f, 6f, 2f, true, true, 0))
						{
							__LIB_0__::func_714(&iLocal_42);
							iLocal_41 = 0;
							iLocal_40 = 6;
						}
						else
						{
							iLocal_42 = __LIB_14__::func_704(Local_53, 5, 1);
						}
					}
				}
				else if (iLocal_240 && !__LIB_0__::func_75())
				{
					func_213(3);
					iLocal_240 = 0;
				}
			}
			else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_43.f_4, false))
			{
				HUD::CLEAR_PRINTS();
				iLocal_241 = 0;
				iLocal_240 = 1;
				__LIB_0__::func_714(&iLocal_42);
				iLocal_42 = __LIB_14__::func_866(Local_43.f_4, 1, 5);
			}
			else if (iLocal_242)
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_43.f_4, false))
				{
					HUD::CLEAR_PRINTS();
					iLocal_241 = 0;
					iLocal_42 = __LIB_14__::func_866(Local_43.f_4, 1, 5);
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
				{
					HUD::CLEAR_PRINTS();
					iLocal_242 = 0;
					iLocal_240 = 0;
					__LIB_0__::func_714(&iLocal_42);
					iLocal_42 = __LIB_14__::func_704(Local_53, 5, 1);
				}
				else if (iLocal_240 && !__LIB_0__::func_75())
				{
					func_213(2);
					iLocal_240 = 0;
				}
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::CLEAR_PRINTS();
				iLocal_242 = 1;
				iLocal_240 = 1;
				__LIB_0__::func_714(&iLocal_42);
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(Local_43.f_4, Local_53, 6f, 6f, 2f, true, true, 0))
			{
				__LIB_0__::func_714(&iLocal_42);
				iLocal_41 = 0;
				iLocal_40 = 6;
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			__LIB_0__::func_123(&iLocal_49);
			__LIB_8__::func_397(&(Local_43.f_4));
			if (iLocal_233 || iLocal_234)
			{
				__LIB_0__::func_630(746);
			}
			func_2();
			break;
	}
}

void func_2()//Position - 0x56C
{
	func_3(71, 0);
	func_466();
}

void func_3(int iParam0, bool bParam1)//Position - 0x57F
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
	func_30();
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

void func_30()//Position - 0x1709
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
				if (func_148(iVar1, 14, iVar2))
				{
					func_31(iVar1, 14, iVar2);
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

int func_31(int iParam0, int iParam1, int iParam2)//Position - 0x17CA
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
	if (!func_148(iParam0, iParam1, iParam2))
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
				func_31(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_31(iParam0, 14, uVar5[iVar3]))
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
	if (func_74(iParam0, iVar0, &iVar7, 0))
	{
		func_34(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_32(iParam0, iVar0, &iVar7))
	{
		func_34(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_32(int iParam0, int iParam1, int iParam2)//Position - 0x1986
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_148(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_34(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x1A4D
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
										func_34(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_34(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_40(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_74(iParam0, iVar10, &iVar4, 1))
							{
								func_34(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_34(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_34(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_34(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_34(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_34(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_34(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_34(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_34(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_34(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_74(iParam0, iVar10, &iVar4, 0))
		{
			func_34(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_32(iParam0, iVar10, &iVar4))
		{
			func_34(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_40(int iParam0, int iParam1, int iParam2)//Position - 0x2A8A
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
				if (func_148(iParam0, iParam1, iVar0))
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
				if (func_148(iParam0, iParam1, iVar1))
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

int func_74(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9167
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_148(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_148(int iParam0, int iParam1, int iParam2)//Position - 0x1F5E4
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
				if (!func_148(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_148(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_148(iParam0, 14, iVar4))
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
			if (!func_148(iParam0, 14, uVar8[iVar7]))
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

int func_212(int iParam0)//Position - 0x26D1B
{
	if (Local_55[iParam0 /*3*/].f_1 < Local_55[iParam0 /*3*/] || Local_55[iParam0 /*3*/] == -1)
	{
		return 1;
	}
	return 0;
}

void func_213(int iParam0)//Position - 0x26D4B
{
	if (func_212(iParam0))
	{
		__LIB_0__::func_229(Local_55[iParam0 /*3*/].f_2, 7500, 1);
		Local_55[iParam0 /*3*/].f_1++;
	}
}

void func_218()//Position - 0x26E07
{
	switch (iLocal_41)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(Local_43.f_4, Local_53, 10f, 10f, 2f, false, true, 0))
			{
				__LIB_0__::func_714(&iLocal_42);
				MISC::SET_INSTANCE_PRIORITY_HINT(0);
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_43.f_4, false))
				{
					iLocal_241 = 1;
				}
				else
				{
					if (func_238())
					{
						HUD::CLEAR_PRINTS();
					}
					iLocal_241 = 0;
				}
				iLocal_41 = 1;
			}
			else
			{
				iLocal_40 = 8;
				iLocal_41 = 0;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_AT_COORD(Local_43.f_4, Local_53, 10f, 10f, 2f, false, true, 0))
			{
				if (iLocal_241)
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_43.f_4, false))
					{
						HUD::CLEAR_PRINTS();
						iLocal_241 = 0;
					}
					else
					{
						iLocal_241 = 1;
					}
				}
				else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_43.f_4, false))
				{
					HUD::CLEAR_PRINTS();
					iLocal_241 = 1;
				}
				else
				{
					func_220();
					if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_43.f_4, 55f, 1) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_43.f_4))
					{
						iLocal_41 = 2;
					}
					else if ((iLocal_237 && func_212(5)) && (MISC::GET_PROFILE_SETTING(203) == 0 || !__LIB_0__::func_75()))
					{
						func_213(5);
					}
				}
			}
			else
			{
				HUD::CLEAR_PRINTS();
				iLocal_40 = 8;
				iLocal_41 = 0;
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			__LIB_0__::func_123(&iLocal_49);
			__LIB_8__::func_397(&(Local_43.f_4));
			if (iLocal_233 || iLocal_234)
			{
				__LIB_0__::func_630(746);
			}
			func_2();
			break;
	}
}

void func_220()//Position - 0x26FA4
{
	if (!iLocal_238)
	{
		iLocal_239 = MISC::GET_GAME_TIMER() + 3500;
		iLocal_238 = 1;
	}
	else if (!iLocal_237)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_239)
		{
			if (iLocal_233 == 1)
			{
				if (__LIB_14__::func_569(&uLocal_63, 49, "BAR3AAU", "BAR3A_P1", 9, 1, 0, 0, 0))
				{
					iLocal_41 = 1;
					iLocal_237 = 1;
				}
			}
			else if (__LIB_14__::func_569(&uLocal_63, 49, "BAR3AAU", "BAR3A_P1b", 9, 1, 0, 0, 0))
			{
				iLocal_41 = 1;
				iLocal_237 = 1;
			}
		}
	}
}

int func_238()//Position - 0x27794
{
	int iVar0;
	iVar0 = 0;
	iLocal_62 = 0;
	while (iLocal_62 <= 5)
	{
		if (__LIB_0__::func_501(Local_55[iLocal_62 /*3*/].f_2, 0, 0))
		{
			iVar0 = 1;
		}
		iLocal_62++;
	}
	return iVar0;
}

void func_240()//Position - 0x277E5
{
	switch (iLocal_41)
	{
		case 0:
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_43.f_4) < 1f)
			{
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_43.f_4, 10f);
			}
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_43.f_4) < 1f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_43.f_4, 10f);
			}
			if (__LIB_0__::func_213(Local_43.f_4, 1093140480, 1, 1056964608, 0, 1, 0))
			{
				__LIB_0__::func_498(0, -1);
				iLocal_246 = 0;
				iLocal_243 = 0;
				iLocal_41 = 1;
			}
			break;
		case 1:
			func_213(4);
			iLocal_41 = 2;
			break;
		case 2:
			__LIB_0__::func_222(&uLocal_63, 3, 0, "BARRY", 0, 1);
			iLocal_41 = 0;
			iLocal_40 = 7;
			break;
	}
}

void func_245()//Position - 0x27B82
{
	switch (iLocal_41)
	{
		case 0:
			__LIB_0__::func_714(&iLocal_42);
			if (!__LIB_0__::func_75() || MISC::GET_PROFILE_SETTING(203) == 0)
			{
				func_213(2);
				__LIB_14__::func_875(&uLocal_254);
				iLocal_235 = 0;
			}
			else
			{
				iLocal_235 = 1;
			}
			if (iLocal_243 == 0)
			{
				iLocal_243 = 2;
				iLocal_246 = 1;
			}
			iLocal_233 = 1;
			iLocal_61 = MISC::GET_GAME_TIMER() + 2500;
			iLocal_41 = 1;
			break;
		case 1:
			__LIB_14__::func_881(&uLocal_254, &uLocal_63, "BAR3AAU", &sLocal_255, &cLocal_261);
			if (!iLocal_60 && MISC::GET_GAME_TIMER() > iLocal_61)
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_BARRY_3A_01", 0f);
				iLocal_60 = 1;
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_43.f_4, false))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
				{
					iLocal_41 = 2;
				}
				else
				{
					if (iLocal_235 && !__LIB_0__::func_75())
					{
						func_213(2);
						__LIB_14__::func_875(&uLocal_254);
						iLocal_235 = 0;
					}
					func_248();
				}
			}
			else
			{
				iLocal_41 = 2;
			}
			break;
		case 2:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				if (__LIB_0__::func_75())
				{
					__LIB_0__::func_638();
				}
			}
			iLocal_41 = 0;
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_43.f_4, false))
			{
				iLocal_40 = 3;
			}
			else
			{
				iLocal_40 = 4;
			}
			break;
	}
}

void func_248()//Position - 0x27CE3
{
	if (iLocal_232 && iLocal_230 < 4)
	{
		if (!__LIB_0__::func_75() && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_43.f_4, false))
		{
			if (!iLocal_229)
			{
				iLocal_229 = 1;
				iLocal_231 = MISC::GET_GAME_TIMER();
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_231) > Local_228[iLocal_230 /*2*/].f_1 && (func_250() || iLocal_230 == 0))
			{
				if (iLocal_230 != 2 || ENTITY::GET_ENTITY_SPEED(Local_43.f_4) > 10f)
				{
					if (func_238() || MISC::GET_PROFILE_SETTING(203) == 0)
					{
						if (__LIB_2__::func_859(&uLocal_63, "BAR3AAU", Local_228[iLocal_230 /*2*/], 7, 1, 0, 0))
						{
							iLocal_229 = 0;
							iLocal_230++;
						}
					}
					else if (__LIB_2__::func_859(&uLocal_63, "BAR3AAU", Local_228[iLocal_230 /*2*/], 7, 0, 0, 0))
					{
						iLocal_229 = 0;
						iLocal_230++;
					}
				}
			}
		}
	}
}

int func_250()//Position - 0x27E1D
{
	if (PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(70f, 70f, 70f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(70f, 70f, 70f)))
	{
		return 1;
	}
	return 0;
}

void func_257()//Position - 0x280D4
{
	switch (iLocal_41)
	{
		case 0:
			__LIB_0__::func_714(&iLocal_42);
			iLocal_42 = __LIB_14__::func_866(Local_43.f_4, 1, 5);
			HUD::SET_BLIP_ROUTE(iLocal_42, true);
			if (func_212(3) && (MISC::GET_PROFILE_SETTING(203) == 0 || !__LIB_0__::func_75()))
			{
				func_213(3);
				__LIB_14__::func_875(&uLocal_254);
			}
			iLocal_41 = 1;
			if (iLocal_243 == 2)
			{
				iLocal_246 = 1;
			}
			break;
		case 1:
			__LIB_14__::func_881(&uLocal_254, &uLocal_63, "BAR3AAU", &sLocal_255, &cLocal_261);
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_43.f_4, false))
			{
				iLocal_41 = 2;
			}
			else
			{
				if (func_212(3) && !__LIB_0__::func_75())
				{
					func_213(3);
					__LIB_14__::func_875(&uLocal_254);
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					if (__LIB_0__::func_75())
					{
						__LIB_0__::func_429();
					}
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_248();
				}
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			__LIB_0__::func_714(&iLocal_42);
			iLocal_41 = 0;
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_43.f_4, false))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
				{
					iLocal_40 = 3;
				}
				else
				{
					iLocal_40 = 5;
				}
			}
			else
			{
				iLocal_41 = 1;
			}
			break;
	}
}

void func_260()//Position - 0x2822A
{
	switch (iLocal_41)
	{
		case 0:
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			if (!iLocal_52)
			{
				__LIB_14__::func_785(0f, 0f, 0f, 0f, 0, 145);
				iLocal_52 = 1;
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_43.f_4, false))
			{
				__LIB_0__::func_714(&iLocal_42);
				iLocal_42 = __LIB_14__::func_704(Local_53, 5, 1);
				if (func_212(0) && (MISC::GET_PROFILE_SETTING(203) == 0 || !__LIB_0__::func_75()))
				{
					func_213(0);
					__LIB_14__::func_875(&uLocal_254);
				}
				iLocal_231 = MISC::GET_GAME_TIMER();
				__LIB_0__::func_499(745, 0);
				iLocal_41 = 1;
			}
			else
			{
				iLocal_40 = 4;
			}
			if (iLocal_243 == 2)
			{
				iLocal_246 = 1;
			}
			break;
		case 1:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_43.f_4, false))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					iLocal_41 = 2;
				}
				else
				{
					if (func_212(0) && !__LIB_0__::func_75())
					{
						func_213(0);
						__LIB_14__::func_875(&uLocal_254);
					}
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_43.f_4) && ENTITY::IS_ENTITY_AT_COORD(Local_43.f_4, Local_53, 6f, 6f, 2f, true, true, 0))
					{
						iLocal_243 = 0;
						iLocal_41 = 2;
					}
					if (!iLocal_236)
					{
						if (((MISC::GET_GAME_TIMER() - iLocal_231) > 8000 && iLocal_230 >= 4) && !__LIB_0__::func_75())
						{
							if (__LIB_2__::func_859(&uLocal_63, "BAR3AAU", "BAR3A_LW", 7, 0, 0, 0))
							{
								iLocal_236 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_41 = 2;
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			__LIB_0__::func_714(&iLocal_42);
			iLocal_41 = 0;
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_43.f_4, false))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					iLocal_40 = 5;
				}
				else
				{
					__LIB_14__::func_874(1, "Deliver vehicle.", 1, 0, 0, 1);
					iLocal_40 = 6;
				}
			}
			else
			{
				iLocal_40 = 4;
			}
			break;
	}
}

void func_366()//Position - 0x34FAB
{
	switch (iLocal_41)
	{
		case 0:
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_43.f_4, false))
			{
				func_213(1);
				iLocal_41 = 1;
			}
			else
			{
				iLocal_40 = 3;
				iLocal_41 = 0;
			}
			iLocal_246 = 1;
			break;
		case 1:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_43.f_4, false))
			{
				HUD::CLEAR_PRINTS();
				iLocal_40 = 3;
				iLocal_41 = 0;
			}
			break;
	}
}

void func_367()//Position - 0x3500C
{
	switch (iLocal_41)
	{
		case 0:
			__LIB_0__::func_222(&uLocal_63, 3, 0, "BARRY", 0, 1);
			if (__LIB_14__::func_569(&uLocal_63, 49, "BAR3AAU", "BAR3A_PICK2", 7, 1, 0, 0, 0))
			{
				iLocal_41 = 1;
			}
			break;
		case 1:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_43.f_4, false))
			{
				iLocal_243 = 1;
				iLocal_40 = 3;
				iLocal_41 = 0;
			}
			else if (!__LIB_0__::func_75())
			{
				iLocal_243 = 1;
				iLocal_40 = 2;
				iLocal_41 = 0;
			}
			break;
	}
}

void func_368()//Position - 0x35085
{
	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1142.8287f, -1254.5848f, 0f, -1136.6863f, -1246.472f, 8f, false, true);
		iLocal_42 = __LIB_14__::func_866(Local_43.f_4, 1, 5);
		iLocal_40 = 1;
		iLocal_41 = 0;
	}
}

void func_369()//Position - 0x350C7
{
	iLocal_62 = 0;
	while (iLocal_62 <= 1)
	{
		func_370(iLocal_62);
		iLocal_62++;
	}
	if ((iLocal_57 && Local_56[0 /*29*/].f_24 == 1) && Local_56[1 /*29*/].f_24 == 1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_59);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_58);
		iLocal_57 = 0;
	}
}

void func_370(int iParam0)//Position - 0x35117
{
	switch (Local_56[iParam0 /*29*/].f_24)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_56[iParam0 /*29*/].f_1))
			{
				if (__LIB_0__::func_121(Local_56[iParam0 /*29*/]))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_59))
					{
						Local_56[iParam0 /*29*/].f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_56[iParam0 /*29*/], 6, iLocal_59, -1, true, true);
						Local_56[iParam0 /*29*/].f_2 = PED::CREATE_PED_INSIDE_VEHICLE(Local_56[iParam0 /*29*/], 6, iLocal_59, 0, true, true);
					}
				}
				else if (STREAMING::HAS_MODEL_LOADED(iLocal_58))
				{
					Local_56[iParam0 /*29*/] = VEHICLE::CREATE_VEHICLE(iLocal_58, Local_56[iParam0 /*29*/].f_3, Local_56[iParam0 /*29*/].f_6, true, true, false);
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(Local_56[iParam0 /*29*/].f_1, false))
			{
				PED::SET_PED_AS_COP(Local_56[iParam0 /*29*/].f_1, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_56[iParam0 /*29*/].f_1, true);
				WEAPON::GIVE_DELAYED_WEAPON_TO_PED(Local_56[iParam0 /*29*/].f_1, joaat("WEAPON_PISTOL"), 100, true);
				PED::SET_PED_ACCURACY(Local_56[iParam0 /*29*/].f_1, 10);
				if (__LIB_0__::func_121(Local_56[iParam0 /*29*/].f_2))
				{
					PED::SET_PED_AS_COP(Local_56[iParam0 /*29*/].f_2, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_56[iParam0 /*29*/].f_2, true);
					WEAPON::GIVE_DELAYED_WEAPON_TO_PED(Local_56[iParam0 /*29*/].f_2, joaat("WEAPON_PISTOL"), 100, true);
					PED::SET_PED_ACCURACY(Local_56[iParam0 /*29*/].f_2, 10);
				}
				Local_56[iParam0 /*29*/].f_24 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_56[iParam0 /*29*/].f_3, 275f, 1))
			{
				if (func_389(iParam0))
				{
					Local_56[iParam0 /*29*/].f_25 = MISC::GET_GAME_TIMER() + 1750;
					Local_56[iParam0 /*29*/].f_24 = 2;
				}
				else if ((func_388(Local_56[iParam0 /*29*/]) || func_375(Local_56[iParam0 /*29*/].f_1)) || func_375(Local_56[iParam0 /*29*/].f_2))
				{
					func_373(iParam0, 0);
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_373(iParam0, 0);
				}
			}
			else
			{
				if (!Local_56[iParam0 /*29*/].f_26 && ENTITY::DOES_ENTITY_EXIST(Local_56[iParam0 /*29*/].f_1))
				{
					__LIB_0__::func_0(&(Local_56[iParam0 /*29*/].f_1));
					Local_56[iParam0 /*29*/].f_26 = 1;
				}
				if (!Local_56[iParam0 /*29*/].f_27 && ENTITY::DOES_ENTITY_EXIST(Local_56[iParam0 /*29*/].f_2))
				{
					__LIB_0__::func_0(&(Local_56[iParam0 /*29*/].f_2));
					Local_56[iParam0 /*29*/].f_27 = 1;
				}
				if (!Local_56[iParam0 /*29*/].f_28 && ENTITY::DOES_ENTITY_EXIST(Local_56[iParam0 /*29*/]))
				{
					__LIB_8__::func_397(&(Local_56[iParam0 /*29*/]));
					Local_56[iParam0 /*29*/].f_28 = 1;
				}
				if ((Local_56[iParam0 /*29*/].f_26 && Local_56[iParam0 /*29*/].f_27) && Local_56[iParam0 /*29*/].f_28)
				{
					Local_56[iParam0 /*29*/].f_24 = 4;
				}
			}
			if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if ((func_375(Local_56[iParam0 /*29*/].f_1) || func_375(Local_56[iParam0 /*29*/].f_2)) || func_388(Local_56[iParam0 /*29*/]))
				{
					func_373(iParam0, 0);
				}
			}
			break;
		case 2:
			if (MISC::GET_GAME_TIMER() > Local_56[iParam0 /*29*/].f_25)
			{
				func_373(iParam0, 1);
			}
			else if ((func_375(Local_56[iParam0 /*29*/].f_1) || func_375(Local_56[iParam0 /*29*/].f_2)) || func_388(Local_56[iParam0 /*29*/]))
			{
				func_373(iParam0, 0);
			}
			break;
		case 3:
			if (!__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_56[iParam0 /*29*/].f_3, 275f, 1))
			{
				if (!Local_56[iParam0 /*29*/].f_26 && ENTITY::DOES_ENTITY_EXIST(Local_56[iParam0 /*29*/].f_1))
				{
					__LIB_0__::func_124(&(Local_56[iParam0 /*29*/].f_1), 1, 0, 1);
					Local_56[iParam0 /*29*/].f_26 = 1;
				}
				if (!Local_56[iParam0 /*29*/].f_27 && ENTITY::DOES_ENTITY_EXIST(Local_56[iParam0 /*29*/].f_2))
				{
					__LIB_0__::func_0(&(Local_56[iParam0 /*29*/].f_2));
					Local_56[iParam0 /*29*/].f_27 = 1;
				}
				if (!Local_56[iParam0 /*29*/].f_28 && ENTITY::DOES_ENTITY_EXIST(Local_56[iParam0 /*29*/]))
				{
					__LIB_8__::func_397(&(Local_56[iParam0 /*29*/]));
					Local_56[iParam0 /*29*/].f_28 = 1;
				}
				if ((Local_56[iParam0 /*29*/].f_26 && Local_56[iParam0 /*29*/].f_27) && Local_56[iParam0 /*29*/].f_28)
				{
					Local_56[iParam0 /*29*/].f_24 = 4;
				}
			}
			break;
		case 4:
			break;
	}
}

void func_373(int iParam0, int iParam1)//Position - 0x355D4
{
	if (!iLocal_232)
	{
		iLocal_232 = 1;
		iLocal_231 = MISC::GET_GAME_TIMER();
	}
	if (__LIB_0__::func_121(Local_56[iParam0 /*29*/].f_1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_56[iParam0 /*29*/].f_1, false);
		PED::SET_PED_HIGHLY_PERCEPTIVE(Local_56[iParam0 /*29*/].f_1, true);
		__LIB_0__::func_124(&(Local_56[iParam0 /*29*/].f_1), 1, 0, 1);
	}
	if (__LIB_0__::func_121(Local_56[iParam0 /*29*/].f_2))
	{
		PED::SET_PED_AS_COP(Local_56[iParam0 /*29*/].f_2, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_56[iParam0 /*29*/].f_2, false);
		PED::SET_PED_HIGHLY_PERCEPTIVE(Local_56[iParam0 /*29*/].f_2, true);
		__LIB_0__::func_124(&(Local_56[iParam0 /*29*/].f_2), 1, 0, 1);
	}
	if (iParam1 && __LIB_0__::func_121(Local_56[iParam0 /*29*/]))
	{
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_56[iParam0 /*29*/], true, true, false);
		__LIB_0__::func_106(&(Local_56[iParam0 /*29*/]));
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	}
	PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
	Local_56[iParam0 /*29*/].f_24 = 3;
}

int func_375(int iParam0)//Position - 0x356FE
{
	struct<3> Var0;
	if (__LIB_0__::func_121(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		if (PED::IS_PED_BEING_JACKED(iParam0) && __LIB_0__::func_687(iParam0, PLAYER::PLAYER_PED_ID(), 2f, 1))
		{
			return 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		else if (MISC::IS_PROJECTILE_IN_AREA(Var0 - Vector(3f, 3f, 3f), Var0 + Vector(3f, 3f, 3f), true))
		{
			return 1;
		}
		else if (__LIB_17__::func_114(iParam0, 1126825984))
		{
			return 1;
		}
	}
	return 0;
}

int func_388(int iParam0)//Position - 0x35C7F
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
			}
			return 1;
		}
		else if (MISC::IS_PROJECTILE_IN_AREA(Var0 - Vector(5f, 5f, 5f), Var0 + Vector(5f, 5f, 5f), true))
		{
			return 1;
		}
	}
	return 0;
}

int func_389(int iParam0)//Position - 0x35CDE
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_43.f_4, Local_56[iParam0 /*29*/].f_7[0 /*8*/][0 /*3*/], Local_56[iParam0 /*29*/].f_7[0 /*8*/][1 /*3*/], Local_56[iParam0 /*29*/].f_7[0 /*8*/].f_7, false, true, 0))
	{
		return 1;
	}
	else if (Local_56[iParam0 /*29*/].f_7[1 /*8*/].f_7 != 0f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_43.f_4, Local_56[iParam0 /*29*/].f_7[1 /*8*/][0 /*3*/], Local_56[iParam0 /*29*/].f_7[1 /*8*/][1 /*3*/], Local_56[iParam0 /*29*/].f_7[1 /*8*/].f_7, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_391()//Position - 0x35D84
{
	if (!__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (func_393())
	{
		sLocal_253 = "B3ATIMEOUT";
		iLocal_41 = 0;
		iLocal_40 = 9;
		return 1;
	}
	if (!__LIB_0__::func_121(Local_43.f_4))
	{
		sLocal_253 = "B3AVHDEST";
		iLocal_41 = 0;
		iLocal_40 = 9;
		return 1;
	}
	else if (func_392())
	{
		sLocal_253 = "B3AVHSTUCK";
		iLocal_41 = 0;
		iLocal_40 = 9;
		return 1;
	}
	return 0;
}

int func_392()//Position - 0x35DF0
{
	if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_43.f_4))
	{
		if (iLocal_47)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_48) > 7000)
			{
				return 1;
			}
		}
		else
		{
			iLocal_47 = 1;
			iLocal_48 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		if (iLocal_47)
		{
		}
		iLocal_47 = 0;
	}
	return 0;
}

int func_393()//Position - 0x35E31
{
	switch (iLocal_243)
	{
		case 0:
			return 0;
			break;
		case 1:
			iLocal_244 = CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 120;
			iLocal_244 = (iLocal_244 + MISC::GET_GAME_TIMER());
			iLocal_245 = (iLocal_244 - CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 30);
			iLocal_248 = (iLocal_244 - 11000);
			iLocal_249 = (iLocal_244 - 6000);
			iLocal_250 = (iLocal_244 - 1000);
			iLocal_252 = 0;
			iLocal_243 = 2;
			return 0;
			break;
		case 2:
			if (MISC::GET_GAME_TIMER() >= iLocal_244)
			{
				return 1;
			}
			else
			{
				if ((!iLocal_247 && MISC::GET_GAME_TIMER() >= iLocal_245) && !__LIB_0__::func_75())
				{
					if (__LIB_2__::func_859(&uLocal_63, "BAR3AAU", "BAR3A_HURRY", 7, 0, 0, 0))
					{
						iLocal_247 = 1;
					}
				}
				func_394();
				return 0;
			}
			break;
	}
	return 0;
}

void func_394()//Position - 0x35EFC
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 >= iLocal_250)
	{
		if ((iVar0 - iLocal_251) > 500)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_251 = MISC::GET_GAME_TIMER() + 1000;
		}
	}
	else if (iVar0 >= iLocal_249)
	{
		if ((iVar0 - iLocal_251) > 500)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_251 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 >= iLocal_248)
	{
		if (!iLocal_252)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_251 = MISC::GET_GAME_TIMER();
			iLocal_252 = 1;
		}
		else if ((iVar0 - iLocal_251) > 1000)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_251 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_395()//Position - 0x35FB1
{
	switch (iLocal_41)
	{
		case 0:
			if (!__LIB_0__::func_719())
			{
				__LIB_0__::func_714(&iLocal_42);
				iLocal_246 = 0;
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_253))
				{
					sLocal_253 = "DEFAULT" /* GXT: _ */;
				}
				if (MISC::ARE_STRINGS_EQUAL(sLocal_253, "DEFAULT" /* GXT: _ */))
				{
					__LIB_14__::func_872(1);
				}
				else
				{
					__LIB_14__::func_880(sLocal_253, 1);
				}
				iLocal_41 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				iLocal_246 = 0;
				func_396(1);
				func_466();
			}
			break;
	}
}

void func_396(bool bParam0)//Position - 0x36033
{
	if (bParam0)
	{
		__LIB_0__::func_123(&iLocal_49);
		__LIB_8__::func_397(&(Local_43.f_4));
		iLocal_62 = 0;
		while (iLocal_62 <= 1)
		{
			__LIB_0__::func_0(&(Local_56[iLocal_62 /*29*/].f_1));
			__LIB_0__::func_0(&(Local_56[iLocal_62 /*29*/].f_2));
			iLocal_62++;
		}
		iLocal_62 = 0;
		while (iLocal_62 <= 1)
		{
			__LIB_8__::func_397(&(Local_56[iLocal_62 /*29*/]));
			iLocal_62++;
		}
	}
	else
	{
		__LIB_0__::func_122(&iLocal_49, 0);
		__LIB_0__::func_106(&(Local_43.f_4));
		iLocal_62 = 0;
		while (iLocal_62 <= 1)
		{
			__LIB_0__::func_124(&(Local_56[iLocal_62 /*29*/].f_1), 1, 0, 1);
			__LIB_0__::func_124(&(Local_56[iLocal_62 /*29*/].f_2), 1, 0, 1);
			__LIB_0__::func_106(&(Local_56[iLocal_62 /*29*/]));
			iLocal_62++;
		}
	}
	if (iLocal_57)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_58);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_59);
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1142.8287f, -1254.5848f, 0f, -1136.6863f, -1246.472f, 8f, true, true);
}

void func_402()//Position - 0x361DD
{
	int iVar0;
	if (iLocal_246)
	{
		if ((!CUTSCENE::IS_CUTSCENE_PLAYING() && !__LIB_0__::func_77(0)) && !__LIB_0__::func_719())
		{
			iVar0 = (iLocal_244 - MISC::GET_GAME_TIMER());
			if (iVar0 < 0)
			{
				iVar0 = 0;
			}
			HUD::HIDE_STREET_AND_CAR_NAMES_THIS_FRAME();
			if (MISC::GET_GAME_TIMER() >= iLocal_245)
			{
				__LIB_1__::func_350(iVar0, "B3ATIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				__LIB_1__::func_350(iVar0, "B3ATIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
}

void func_423()//Position - 0x36E5E
{
	if (__LIB_0__::func_121(Local_43.f_4))
	{
		VEHICLE::SET_VEHICLE_STRONG(Local_43.f_4, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_43.f_4, true);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_43.f_4, false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_43.f_4, false);
		if (!bLocal_46)
		{
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_43.f_4);
		}
		__LIB_14__::func_867(Local_43.f_4, 0);
	}
}

void func_440(bool bParam0)//Position - 0x372D2
{
	__LIB_14__::func_876();
	iLocal_40 = 7;
	iLocal_41 = 0;
	func_445(Local_53, 298.7f, 0);
	func_444(0);
	if (iLocal_229 == 0)
	{
		if (__LIB_0__::func_75())
		{
			__LIB_0__::func_429();
		}
		iLocal_229 = 1;
	}
	iLocal_236 = 1;
	iLocal_237 = 1;
	iLocal_238 = 1;
	func_443(0);
	func_443(2);
	func_443(3);
	if (bParam0)
	{
		iLocal_234 = 1;
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_0__::func_433(0, -1, 0);
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1243.3162f, -1041.6366f, 7.5121f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 28.2f);
	}
	__LIB_0__::func_84(500, 1);
}

void func_443(int iParam0)//Position - 0x37451
{
	if (Local_55[iParam0 /*3*/] == -1)
	{
	}
	else
	{
		Local_55[iParam0 /*3*/].f_1 = Local_55[iParam0 /*3*/];
	}
}

void func_444(bool bParam0)//Position - 0x37474
{
	iLocal_62 = 0;
	while (iLocal_62 <= 1)
	{
		__LIB_0__::func_0(&(Local_56[iLocal_62 /*29*/].f_1));
		__LIB_0__::func_0(&(Local_56[iLocal_62 /*29*/].f_2));
		__LIB_8__::func_397(&(Local_56[iLocal_62 /*29*/]));
		if (bParam0)
		{
			Local_56[iLocal_62 /*29*/].f_26 = 0;
			Local_56[iLocal_62 /*29*/].f_27 = 0;
			Local_56[iLocal_62 /*29*/].f_28 = 0;
			Local_56[iLocal_62 /*29*/].f_24 = 0;
			if (!iLocal_57)
			{
				STREAMING::REQUEST_MODEL(iLocal_59);
				STREAMING::REQUEST_MODEL(iLocal_58);
			}
			iLocal_57 = 1;
		}
		else
		{
			Local_56[iLocal_62 /*29*/].f_26 = 1;
			Local_56[iLocal_62 /*29*/].f_27 = 1;
			Local_56[iLocal_62 /*29*/].f_28 = 1;
			Local_56[iLocal_62 /*29*/].f_24 = 4;
			if (iLocal_57)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_59);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_58);
			}
			iLocal_57 = 0;
		}
		iLocal_62++;
	}
}

void func_445(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x37529
{
	STREAMING::REQUEST_MODEL(Local_43.f_5);
	STREAMING::REQUEST_MODEL(iLocal_51);
	while (!STREAMING::HAS_MODEL_LOADED(Local_43.f_5) || !STREAMING::HAS_MODEL_LOADED(iLocal_51))
	{
		SYSTEM::WAIT(0);
	}
	if (__LIB_0__::func_121(Local_43.f_4))
	{
		if (bLocal_46)
		{
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Local_43.f_4);
			bLocal_46 = false;
		}
	}
	if (bParam2)
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, true, false, false, true);
		}
	}
	__LIB_0__::func_123(&iLocal_49);
	__LIB_8__::func_397(&(Local_43.f_4));
	Local_43.f_4 = VEHICLE::CREATE_VEHICLE(Local_43.f_5, Param0, fParam1, true, true, false);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_43.f_4, 1);
	if (bParam2)
	{
		__LIB_4__::func_925(PLAYER::PLAYER_PED_ID(), Local_43.f_4, -1, 0);
	}
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_43.f_4, false);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_43.f_4, false);
	VEHICLE::SET_VEHICLE_STRONG(Local_43.f_4, true);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_43.f_4, true);
	VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_43.f_4);
	VEHICLE::SET_VEHICLE_EXTRA(Local_43.f_4, 1, true);
	VEHICLE::SET_VEHICLE_EXTRA(Local_43.f_4, 2, true);
	VEHICLE::SET_VEHICLE_EXTRA(Local_43.f_4, 3, true);
	iLocal_49 = OBJECT::CREATE_OBJECT(iLocal_51, Param0, true, true, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_49, Local_43.f_4, 0, Local_50, 0f, 0f, 0f, false, false, true, false, 2, true, 0);
	ENTITY::SET_ENTITY_COLLISION(iLocal_49, true, false);
	bLocal_46 = true;
	__LIB_14__::func_867(Local_43.f_4, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_43.f_5);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_51);
}

void func_448(bool bParam0)//Position - 0x37702
{
	__LIB_14__::func_876();
	__LIB_0__::func_714(&iLocal_42);
	iLocal_40 = 6;
	iLocal_41 = 0;
	func_444(0);
	iLocal_236 = 1;
	iLocal_237 = 0;
	iLocal_238 = 0;
	func_443(0);
	func_443(2);
	func_443(3);
	if (bParam0)
	{
		iLocal_234 = 1;
		func_445(Local_53, 298.7f, 0);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_0__::func_433(Local_43.f_4, -1, 0);
	}
	else
	{
		if (iLocal_229 == 0)
		{
			__LIB_0__::func_429();
			iLocal_229 = 1;
		}
		func_445(Local_53, 298.7f, 1);
	}
	__LIB_14__::func_874(1, "Deliver vehicle.", 1, 0, 0, 1);
}

void func_449(bool bParam0)//Position - 0x37799
{
	__LIB_14__::func_876();
	iLocal_40 = 3;
	iLocal_41 = 0;
	func_444(1);
	iLocal_232 = 0;
	__LIB_0__::func_429();
	iLocal_229 = 1;
	iLocal_236 = 0;
	iLocal_247 = 0;
	iLocal_237 = 0;
	iLocal_238 = 0;
	func_443(1);
	func_450(0, 0);
	func_450(2, 0);
	func_450(3, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1142.8287f, -1254.5848f, 0f, -1136.6863f, -1246.472f, 8f, false, true);
	if (bParam0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_43.f_4))
		{
			func_445(Local_43, Local_43.f_3, 0);
		}
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_0__::func_433(Local_43.f_4, -1, 0);
	}
	else
	{
		func_445(Local_43, Local_43.f_3, 1);
	}
	iLocal_243 = 1;
	iLocal_246 = 1;
}

void func_450(int iParam0, int iParam1)//Position - 0x37854
{
	Local_55[iParam0 /*3*/].f_1 = iParam1;
}

void func_454()//Position - 0x37949
{
	HUD::REQUEST_ADDITIONAL_TEXT("BARR3A", 0);
	Local_43.f_5 = joaat("dloader");
	Local_43 = { 1199.8f, -1259.22f, 34.23f };
	Local_43.f_3 = 174.7f;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_222(&uLocal_63, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	iLocal_236 = 0;
	iLocal_247 = 0;
	iLocal_230 = 0;
	func_465();
	iLocal_237 = 0;
	iLocal_238 = 0;
	iLocal_60 = 0;
	func_463();
	func_462();
	iLocal_232 = 0;
	STREAMING::REQUEST_MODEL(iLocal_58);
	STREAMING::REQUEST_MODEL(iLocal_59);
	iLocal_57 = 1;
	iLocal_243 = 0;
	iLocal_246 = 0;
	sLocal_253 = "DEFAULT" /* GXT: _ */;
	__LIB_0__::func_712(49, 1, 0);
	iLocal_54[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-1156.9f, -1274f, 0f, -1141.5f, -1239.6f, 8f, false, true, true, true);
	iLocal_54[1] = PED::ADD_SCENARIO_BLOCKING_AREA(-1177f, -1292f, 0f, -1160f, -1273.3f, 8f, false, true, true, true);
	PATHFIND::SET_GPS_DISABLED_ZONE(-1132.88f, -1262.01f, 0f, -1102.43f, -1196.58f, 15f);
	PED::SET_CREATE_RANDOM_COPS(false);
}

void func_462()//Position - 0x37D3D
{
	Local_56[0 /*29*/].f_3 = { 1195.3f, -1312.74f, 34.75f };
	Local_56[0 /*29*/].f_6 = 282.4f;
	Local_56[0 /*29*/].f_7[0 /*8*/][0 /*3*/] = { 1216.1443f, -1287.0039f, 33.976418f };
	Local_56[0 /*29*/].f_7[0 /*8*/][1 /*3*/] = { 1202.4556f, -1306.0538f, 39.47411f };
	Local_56[0 /*29*/].f_7[0 /*8*/].f_7 = 16.5f;
	Local_56[0 /*29*/].f_7[1 /*8*/][0 /*3*/] = { 1204.858f, -1296.1306f, 33.976418f };
	Local_56[0 /*29*/].f_7[1 /*8*/][1 /*3*/] = { 1198.8319f, -1365.9259f, 39.47705f };
	Local_56[0 /*29*/].f_7[1 /*8*/].f_7 = 37.5f;
	Local_56[0 /*29*/].f_24 = 0;
	Local_56[1 /*29*/].f_3 = { 1162.71f, -1357.86f, 33.73f };
	Local_56[1 /*29*/].f_6 = 266.7f;
	Local_56[1 /*29*/].f_7[0 /*8*/][0 /*3*/] = { 1164.4572f, -1363.8395f, 33.510624f };
	Local_56[1 /*29*/].f_7[0 /*8*/][1 /*3*/] = { 1180.6372f, -1359.837f, 39.113964f };
	Local_56[1 /*29*/].f_7[0 /*8*/].f_7 = 15.5f;
	Local_56[1 /*29*/].f_7[1 /*8*/][0 /*3*/] = { 0f, 0f, 0f };
	Local_56[1 /*29*/].f_7[1 /*8*/][1 /*3*/] = { 0f, 0f, 0f };
	Local_56[1 /*29*/].f_7[1 /*8*/].f_7 = 0f;
	Local_56[1 /*29*/].f_24 = 0;
}

void func_463()//Position - 0x37EB5
{
	Local_55[0 /*3*/] = { __LIB_14__::func_877("B3ADELV", 1) };
	Local_55[1 /*3*/] = { __LIB_14__::func_877("B3AGETIN", 1) };
	Local_55[2 /*3*/] = { __LIB_14__::func_877("B3AWAN1", -1) };
	Local_55[3 /*3*/] = { __LIB_14__::func_877("B3ARTV", 1) };
	Local_55[4 /*3*/] = { __LIB_14__::func_877("B3AEXIT", 1) };
	Local_55[5 /*3*/] = { __LIB_14__::func_877("B3ALEAVE", 1) };
}

void func_465()//Position - 0x37F38
{
	Local_228[0 /*2*/] = "BAR3A_C1";
	Local_228[0 /*2*/].f_1 = 1000;
	Local_228[1 /*2*/] = "BAR3A_W2";
	Local_228[1 /*2*/].f_1 = 19000;
	Local_228[2 /*2*/] = "BAR3A_W1";
	Local_228[2 /*2*/].f_1 = 20000;
	Local_228[3 /*2*/] = "BAR3A_W4";
	Local_228[3 /*2*/].f_1 = 22000;
}

void func_466()//Position - 0x37F94
{
	if (__LIB_14__::func_843())
	{
	}
	__LIB_14__::func_871(&Local_39, 1, 0, 0);
	func_396(0);
	PED::SET_CREATE_RANDOM_COPS(true);
	PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_54[0], false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_54[1], false);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

