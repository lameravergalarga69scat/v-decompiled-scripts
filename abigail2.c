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
	struct<3> Local_38 = { 0, 0, 0 } ;
	struct<3> Local_39 = { 0, 0, 0 } ;
	var uLocal_40 = 0;
	char* sLocal_41 = NULL;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = -1;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 1000;
	var uLocal_52 = 1000;
	var uLocal_53 = 0;
	struct<61> Local_54 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_55 = 0;
	int* iLocal_56 = NULL;
	struct<3> Local_57 = { 0, 0, 0 } ;
	float fLocal_58 = 0f;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int* iLocal_61 = NULL;
	int* iLocal_62 = NULL;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 16;
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
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	struct<3> Local_239 = { 0, 0, 0 } ;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	struct<61> Local_244 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	Local_38 = { -1593.813f, 5221.2354f, 1.94482f };
	Local_39 = { -1603.9861f, 5243.6235f, 4.940323f };
	uLocal_40 = __LIB_2__::func_910(16);
	sLocal_41 = "rcmabigail";
	iLocal_55 = joaat("asea");
	Local_57 = { -1573.7334f, 5164.508f, 18.5576f };
	fLocal_58 = 175.9451f;
	Local_239 = { -1014.0543f, -2474.0132f, 19.1091f };
	Local_54 = { ScriptParam_244 };
	__LIB_14__::func_801(&Local_54);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_14__::func_872(1);
		func_469(1);
	}
	if (__LIB_0__::func_121(Local_54.f_28[0]))
	{
		iLocal_61 = Local_54.f_28[0];
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_61, true, true);
	}
	func_467();
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
				__LIB_0__::func_427(-1595.201f, 5217.4946f, 3.0009f, 208.2675f, 1, 0);
				func_385(1);
				break;
			}
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_WLB", 0);
		__LIB_14__::func_863(Local_54.f_9, 0, 0, 0, 0, 0);
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			switch (iLocal_59)
			{
				case 0:
					func_361();
					break;
				case 1:
					func_301();
					break;
				case 2:
					func_272();
					break;
				case 3:
					func_270();
					break;
				case 4:
					func_9();
					break;
				case 5:
					func_1();
					break;
				}
		}
	}
}

void func_1()//Position - 0x1E9
{
	switch (iLocal_60)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			__LIB_0__::func_345(&uLocal_42, 0, 0);
			__LIB_0__::func_714(&iLocal_62);
			__LIB_14__::func_872(1);
			iLocal_60 = 1;
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				__LIB_0__::func_0(&iLocal_61);
				__LIB_8__::func_397(&iLocal_56);
				func_469(1);
			}
			break;
	}
}

void func_9()//Position - 0x47B
{
	switch (iLocal_60)
	{
		case 0:
			func_268();
			if (__LIB_0__::func_121(iLocal_56))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_56, 1);
			}
			iLocal_60 = 1;
			break;
		case 1:
			func_238();
			if (!__LIB_0__::func_121(iLocal_61))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) == 0)
				{
					iLocal_60 = 2;
				}
				else
				{
					func_237(3);
				}
			}
			else if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_61) > 250f)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) == 0)
				{
					iLocal_60 = 2;
				}
				else
				{
					func_237(3);
				}
			}
			else
			{
				if (!__LIB_6__::func_572(iLocal_61, joaat("SCRIPT_TASK_SMART_FLEE_PED")))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
				}
				if (iLocal_230 == 0)
				{
					if (((!__LIB_0__::func_75() && __LIB_0__::func_687(iLocal_61, PLAYER::PLAYER_PED_ID(), 20f, 1)) && !PED::IS_PED_RAGDOLL(iLocal_61)) && __LIB_0__::func_787(&uLocal_65, "SONARAU", "SONAR_SHOOTS", 7, 0, 0, 0))
					{
						iLocal_230 = 1;
					}
				}
				else if (((((iLocal_238 < 15 && !__LIB_0__::func_75()) && (MISC::GET_GAME_TIMER() - iLocal_235) > 10000) && __LIB_0__::func_687(iLocal_61, PLAYER::PLAYER_PED_ID(), 20f, 1)) && !PED::IS_PED_RAGDOLL(iLocal_61)) && __LIB_0__::func_787(&uLocal_65, "SONARAU", "SONAR_CHASE", 7, 0, 0, 0))
				{
					iLocal_235 = MISC::GET_GAME_TIMER();
					iLocal_238++;
				}
			}
			break;
		case 2:
			func_10();
			break;
	}
}

void func_10()//Position - 0x5F6
{
	func_11(322, 1);
	func_469(1);
}

void func_11(int iParam0, bool bParam1)//Position - 0x60B
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

void func_39()//Position - 0x17BD
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

int func_40(int iParam0, int iParam1, int iParam2)//Position - 0x187E
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

int func_41(int iParam0, int iParam1, int iParam2)//Position - 0x1A3A
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

int func_43(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x1B01
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

int func_49(int iParam0, int iParam1, int iParam2)//Position - 0x2B3E
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

int func_83(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x92C2
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

int func_157(int iParam0, int iParam1, int iParam2)//Position - 0x1F6B3
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

void func_237(int iParam0)//Position - 0x2747E
{
	iLocal_59 = iParam0;
	iLocal_60 = 0;
}

void func_238()//Position - 0x2748D
{
	if (__LIB_0__::func_121(iLocal_61))
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_242) > 1000)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			__LIB_17__::func_118(&uLocal_42, iLocal_61, "ABGAIL2_HINT", 0, 1, 1, 1);
		}
	}
	else
	{
		__LIB_0__::func_345(&uLocal_42, 0, 0);
	}
}

void func_268()//Position - 0x285BA
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_62) && __LIB_0__::func_121(iLocal_61))
	{
		iLocal_62 = __LIB_14__::func_661(iLocal_61, 1, 0, 5);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_62) && HUD::GET_BLIP_COLOUR(iLocal_62) != 1)
	{
		HUD::SET_BLIP_AS_FRIENDLY(iLocal_62, false);
		HUD::SET_BLIP_COLOUR(iLocal_62, 1);
	}
}

void func_270()//Position - 0x28658
{
	switch (iLocal_60)
	{
		case 0:
			iLocal_60 = 1;
			break;
		case 1:
			func_238();
			if (!__LIB_0__::func_121(iLocal_61))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
				iLocal_232 = 1;
				__LIB_0__::func_714(&iLocal_62);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) == 0)
				{
					iLocal_60 = 2;
				}
			}
			else
			{
				if (((iLocal_232 == 0 && !__LIB_0__::func_75()) && __LIB_0__::func_687(iLocal_61, PLAYER::PLAYER_PED_ID(), 20f, 1)) && __LIB_0__::func_787(&uLocal_65, "SONARAU", "SONAR_ARRIVE", 7, 0, 0, 0))
				{
					iLocal_232 = 1;
					func_268();
				}
				if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_61) > 250f)
				{
					iLocal_60 = 2;
				}
			}
			if ((iLocal_233 == 0 && iLocal_232 == 1) && !__LIB_0__::func_75())
			{
				if (__LIB_0__::func_121(iLocal_61))
				{
					PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				__LIB_0__::func_229("ABGAIL2_WANTED", 7500, 1);
				iLocal_233 = 1;
			}
			break;
		case 2:
			func_10();
			break;
	}
}

void func_272()//Position - 0x28783
{
	switch (iLocal_60)
	{
		case 0:
			iLocal_243 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(2.99f, 5194.44f, -1578.62f) - Vector(10f, 10f, 10f), Vector(2.99f, 5194.44f, -1578.62f) + Vector(10f, 10f, 10f), false, true, true, true);
			func_300();
			if (__LIB_0__::func_121(iLocal_61))
			{
				func_298();
				if (__LIB_0__::func_695(iLocal_56))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_62))
					{
						iLocal_62 = __LIB_14__::func_661(iLocal_61, 1, 0, 5);
					}
					func_297(&iLocal_62, "", "", &iLocal_63, &iLocal_64, 1, 0);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_236);
					if (!PED::IS_PED_IN_VEHICLE(iLocal_61, iLocal_56, false))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1579.27f, 5194.96f, 2.99f, 1f, 20000, 0.25f, 1, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1567.85f, 5178.12f, 14.78f, 1f, 20000, 0.25f, 1, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1571.85f, 5181.21f, 16.88f, 1f, 20000, 0.25f, 1, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1579.01f, 5174.08f, 18.57f, 1f, 20000, 0.25f, 1, 40000f);
						TASK::TASK_ENTER_VEHICLE(0, iLocal_56, 20000, -1, 1f, 1, 0);
					}
					TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, iLocal_56, Local_239, 20f, 786469, 10f);
					TASK::TASK_VEHICLE_PARK(0, iLocal_56, Local_239, 49.567f, 3, 10f, false);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_56, 256);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_236);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_61, iLocal_236);
				}
				else
				{
					TASK::TASK_WANDER_STANDARD(iLocal_61, 40000f, 0);
				}
			}
			iLocal_234 = MISC::GET_GAME_TIMER();
			iLocal_60 = 1;
			break;
		case 1:
			func_238();
			if (!__LIB_0__::func_121(iLocal_61))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) == 0)
				{
					iLocal_60 = 2;
				}
				else
				{
					func_237(3);
				}
			}
			else if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_61) > 250f)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) == 0)
				{
					iLocal_60 = 2;
				}
				else
				{
					func_237(3);
				}
			}
			else if (func_277())
			{
				__LIB_0__::func_429();
				func_237(4);
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_61, Local_239, 5f, 5f, 5f, false, true, 0))
			{
				func_237(3);
			}
			else
			{
				func_273(&iLocal_62, "", "", &iLocal_63, iLocal_64, 0);
				if (iLocal_231 == 0)
				{
					if (((__LIB_0__::func_121(iLocal_56) && PED::IS_PED_IN_VEHICLE(iLocal_61, iLocal_56, true)) && __LIB_0__::func_687(iLocal_61, PLAYER::PLAYER_PED_ID(), 20f, 1)) && __LIB_0__::func_787(&uLocal_65, "SONARAU", "SONAR_INCAR", 7, 0, 0, 0))
					{
						iLocal_231 = 1;
					}
					if (((((iLocal_237 < 7 && !__LIB_0__::func_75()) && (MISC::GET_GAME_TIMER() - iLocal_234) > 10000) && __LIB_0__::func_687(iLocal_61, PLAYER::PLAYER_PED_ID(), 20f, 1)) && !PED::IS_PED_RAGDOLL(iLocal_61)) && __LIB_0__::func_787(&uLocal_65, "SONARAU", "SONAR_FOLLOW", 7, 0, 0, 0))
					{
						iLocal_234 = MISC::GET_GAME_TIMER();
						iLocal_237++;
					}
				}
			}
			break;
		case 2:
			func_10();
			break;
	}
}

void func_273(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x28AB5
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		if ((MISC::GET_GAME_TIMER() - *iParam3) > 500)
		{
			if (HUD::GET_BLIP_COLOUR(*iParam0) == 1)
			{
				HUD::SET_BLIP_COLOUR(*iParam0, 3);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "BLIP_FRIEND" /* GXT: Friend */);
				if ((MISC::GET_GAME_TIMER() - iParam4) < 7500 && iParam5)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || __LIB_0__::func_501(sParam1, 0, 0))
					{
						__LIB_0__::func_229(sParam2, 7500, 0);
					}
				}
				*iParam3 = MISC::GET_GAME_TIMER();
			}
			else
			{
				HUD::SET_BLIP_COLOUR(*iParam0, 1);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "BLIP_ENEMY" /* GXT: Enemy */);
				if ((MISC::GET_GAME_TIMER() - iParam4) < 7500 && iParam5)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || __LIB_0__::func_501(sParam2, 0, 0))
					{
						__LIB_0__::func_229(sParam1, 7500, 0);
					}
				}
				*iParam3 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if ((MISC::GET_GAME_TIMER() - iParam4) > 7500)
	{
		if (__LIB_0__::func_501(sParam1, 0, 0))
		{
			HUD::CLEAR_THIS_PRINT(sParam1);
		}
		if (__LIB_0__::func_501(sParam2, 0, 0))
		{
			HUD::CLEAR_THIS_PRINT(sParam2);
		}
	}
}

int func_277()//Position - 0x28BFF
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		return 1;
	}
	if (__LIB_0__::func_121(iLocal_56))
	{
		if (__LIB_17__::func_126(iLocal_61, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return 1;
		}
		if (PED::IS_PED_BEING_JACKED(iLocal_61))
		{
			return 1;
		}
		if (__LIB_0__::func_121(iLocal_56))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_61, iLocal_56, false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
			if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_56, 0, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_56, 1, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_56, 4, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_56, 5, false))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_297(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x2962B
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		if (bParam5)
		{
			HUD::SET_BLIP_COLOUR(*iParam0, 1);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "BLIP_ENEMY" /* GXT: Enemy */);
			if (iParam6 && !__LIB_0__::func_75())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || __LIB_0__::func_501(sParam2, 0, 0))
				{
					__LIB_0__::func_229(sParam1, 7500, 0);
				}
			}
		}
		else
		{
			HUD::SET_BLIP_COLOUR(*iParam0, 3);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "BLIP_FRIEND" /* GXT: Friend */);
			if (iParam6 && !__LIB_0__::func_75())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || __LIB_0__::func_501(sParam1, 0, 0))
				{
					__LIB_0__::func_229(sParam2, 7500, 0);
				}
			}
		}
		*iParam3 = MISC::GET_GAME_TIMER();
		*iParam4 = MISC::GET_GAME_TIMER();
	}
}

void func_298()//Position - 0x296D7
{
	if (__LIB_0__::func_121(iLocal_61))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_61, true);
		__LIB_0__::func_222(&uLocal_65, 3, iLocal_61, "ABIGAIL", 0, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 128, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 4, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 1024, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_61, 281, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_61, 29, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_61, 116, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_61, 118, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_61, true);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(iLocal_61, false);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_61, false);
	}
}

void func_300()//Position - 0x297EE
{
	if (!__LIB_0__::func_121(iLocal_56))
	{
		iLocal_56 = VEHICLE::CREATE_VEHICLE(iLocal_55, Local_57, fLocal_58, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_55);
	}
	if (__LIB_0__::func_121(iLocal_56))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_56, 3);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_56, 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_55, true);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_56, true);
	}
}

void func_301()//Position - 0x2983C
{
	switch (iLocal_60)
	{
		case 0:
			__LIB_14__::func_851("ABIGAIL_MCS_2", 0);
			__LIB_0__::func_429();
			iLocal_240 = 0;
			iLocal_241 = 0;
			iLocal_60 = 1;
			break;
		case 1:
			switch (iLocal_241)
			{
				case 0:
					if (__LIB_14__::func_740(1, 1093140480, 0))
					{
						if (__LIB_0__::func_121(iLocal_61))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_61, "ABIGAIL", 0, 0, 0);
						}
						__LIB_14__::func_841();
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::REPLAY_START_EVENT(4);
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
						iLocal_241++;
					}
					break;
				case 1:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						__LIB_14__::func_592(-950.64136f, -1507.6007f, 4.17325f, -953.2579f, -1500.4388f, 4.17084f, 8f, -970.3301f, -1526.626f, 4.0877f, 306.1f, 1, 1, 1, 0, 0);
						func_342(-1592.84f, 5214.04f, 3.01f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, false, false, false, false, false, false, 0);
						__LIB_0__::func_84(500, 0);
						STREAMING::REMOVE_ANIM_DICT("rcmabigail");
						iLocal_241++;
					}
					break;
				case 2:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("ABIGAIL", __LIB_2__::func_910(16)) && __LIB_0__::func_121(iLocal_61))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_61, -1579.27f, 5194.96f, 2.99f, 1f, 20000, 0.25f, 1, 40000f);
						}
						if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
						{
							iLocal_240 = 1;
						}
					}
					else
					{
						RECORDING::REPLAY_STOP_EVENT();
						if (iLocal_240 == 1)
						{
							if (__LIB_0__::func_121(iLocal_61))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_61);
								__LIB_14__::func_659(iLocal_61, -1587.11f, 5204.18f, 3.02f, 210.9196f, 0, 1);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_61, -1579.27f, 5194.96f, 2.99f, 1f, 20000, 0.25f, 1, 40000f);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_61, false, false);
							}
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(500);
						}
						__LIB_0__::func_84(500, 1);
						__LIB_14__::func_870(1, 1, 1, 1);
						__LIB_14__::func_800(&Local_54, 0, 1);
						__LIB_14__::func_593(0, 1, 10, 0, 0);
						iLocal_242 = MISC::GET_GAME_TIMER();
						func_237(2);
					}
					break;
			}
			break;
	}
}

void func_342(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x2B205
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

void func_361()//Position - 0x2C106
{
	HUD::REQUEST_ADDITIONAL_TEXT("ABGAIL2", 0);
	STREAMING::REQUEST_MODEL(iLocal_55);
	if ((!__LIB_0__::func_75() && HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) && STREAMING::HAS_MODEL_LOADED(iLocal_55))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_55, true);
		if (__LIB_0__::func_121(Local_54.f_35[0]))
		{
			iLocal_56 = Local_54.f_35[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_56, true, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_55);
		}
		iLocal_59 = 1;
	}
	else
	{
		__LIB_14__::func_862();
	}
}

void func_385(int iParam0)//Position - 0x2CD4F
{
	__LIB_17__::func_28(0, 0, 0);
	func_462(1, 1);
	__LIB_0__::func_0(&iLocal_61);
	__LIB_8__::func_397(&iLocal_56);
	func_469(0);
	func_467();
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, true, false, false, false);
	switch (iParam0)
	{
		case 0:
			func_391(-1590.9642f, 5211.717f, 3.0098f, 37.4745f, 0f, 0f, 0f, 0f, -1596.09f, 5218.102f, 3.045f, 125.5f, -1584.0127f, 5158.5386f, 18.6057f, 210.5309f);
			func_237(1);
			break;
		case 1:
			func_391(-1595.201f, 5217.4946f, 3.0009f, 208.2675f, -1580.2358f, 5169.5854f, 18.5846f, 189.4926f, -1587.11f, 5204.18f, 3.02f, -143.87f, Local_57, fLocal_58);
			func_237(2);
			break;
		case 2:
			func_391(0f, 0f, 0f, 0f, -1580.2358f, 5169.5854f, 18.5846f, 189.4926f, 0f, 0f, 0f, 0f, Local_57, fLocal_58);
			func_237(2);
			break;
		case 3:
			func_391(0f, 0f, 0f, 0f, -973.0429f, -2405.9248f, 19.1698f, 151.3282f, 0f, 0f, 0f, 0f, -982.942f, -2422.9114f, 19.1683f, 148.0451f);
			iLocal_231 = 1;
			iLocal_237 = 7;
			func_237(2);
			break;
	}
	if (!__LIB_0__::func_324())
	{
		__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1112014848, 12, 5000, 0, 0);
	}
	__LIB_0__::func_433(0, -1, 1);
	__LIB_14__::func_879(1, 1, 1);
}

void func_391(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3, struct<3> Param4, float fParam5, struct<3> Param6, float fParam7)//Position - 0x2D070
{
	int* iVar0;
	if (__LIB_0__::func_86(Param0))
	{
		while (!__LIB_17__::func_809(&iVar0, 0, Param2, fParam3, 1, 0))
		{
			SYSTEM::WAIT(0);
		}
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, -1);
		__LIB_0__::func_106(&iVar0);
	}
	else if (!__LIB_0__::func_323())
	{
		__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), Param0, fParam1, 0, 1);
	}
	STREAMING::REQUEST_MODEL(iLocal_55);
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_55))
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_14__::func_842(&iLocal_61, 16, Param4, fParam5, "RC ABIGAIL 2", 1))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_56 = VEHICLE::CREATE_VEHICLE(iLocal_55, Param6, fParam7, true, true, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_55, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_55);
	func_300();
	if (__LIB_0__::func_86(Param4))
	{
		PED::SET_PED_INTO_VEHICLE(iLocal_61, iLocal_56, -1);
	}
}

void func_462(bool bParam0, bool bParam1)//Position - 0x364E6
{
	if (bParam0)
	{
		__LIB_17__::func_28(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_342(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_467()//Position - 0x3665B
{
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_230 = 0;
	iLocal_231 = 0;
	iLocal_232 = 0;
	iLocal_233 = 0;
	iLocal_234 = 0;
	iLocal_235 = 0;
	iLocal_237 = 0;
	iLocal_238 = 0;
}

void func_469(int iParam0)//Position - 0x366AA
{
	__LIB_0__::func_345(&uLocal_42, 0, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_55, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_55);
	__LIB_0__::func_714(&iLocal_62);
	__LIB_0__::func_124(&iLocal_61, 1, 0, 1);
	if (__LIB_0__::func_121(iLocal_56))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_56, 1);
	}
	__LIB_0__::func_106(&iLocal_56);
	__LIB_14__::func_841();
	__LIB_0__::func_221(&uLocal_65, 3);
	__LIB_14__::func_871(&Local_54, 0, 0, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_243, false);
	if (iParam0 == 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

