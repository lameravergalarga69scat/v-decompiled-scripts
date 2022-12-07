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
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	struct<61> Local_39 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_40 = NULL;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	char* sLocal_43 = NULL;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int* iLocal_46 = NULL;
	int iLocal_47[2] = { 0, 0 };
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	bool bLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59[4] = { 0, 0, 0, 0 };
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	bool bLocal_63 = 0;
	int iLocal_64 = 0;
	char* sLocal_65[4] = { NULL, NULL, NULL, NULL };
	int iLocal_66 = 0;
	var uLocal_67 = 16;
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
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	int iLocal_232[3] = { 0, 0, 0 };
	struct<3> Local_233 = { 0, 0, 0 } ;
	struct<3> Local_234 = { 0, 0, 0 } ;
	struct<3> Local_235 = { 0, 0, 0 } ;
	struct<3> Local_236 = { 0, 0, 0 } ;
	struct<3> Local_237 = { 0, 0, 0 } ;
	float fLocal_238 = 0f;
	float fLocal_239 = 0f;
	float fLocal_240 = 0f;
	float fLocal_241 = 0f;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	char* sLocal_244 = NULL;
	char* sLocal_245 = NULL;
	int iLocal_246 = 0;
	struct<3> Local_247 = { 0, 0, 0 } ;
	struct<3> Local_248 = { 0, 0, 0 } ;
	struct<61> Local_249 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	uLocal_38 = __LIB_2__::func_108(49);
	sLocal_40 = "DEFAULT" /* GXT: _ */;
	sLocal_43 = "rcm_barry3";
	iLocal_49 = joaat("police");
	iLocal_50 = joaat("S_F_Y_Cop_01");
	iLocal_51 = joaat("prop_sh_joint_01");
	iLocal_56 = 1;
	Local_233 = { 415.6973f, -767.4496f, 28.3675f };
	Local_234 = { 417.77f, -765.71f, 29.42f };
	Local_235 = { 442.4225f, -674.2079f, 27.6901f };
	Local_236 = { 446.563f, -821.9631f, 27.1615f };
	Local_237 = { 408.4366f, -763.0913f, 28.2794f };
	fLocal_238 = 311.6763f;
	fLocal_239 = 87.3f;
	fLocal_240 = 92.7329f;
	fLocal_241 = 99.709f;
	sLocal_244 = "FRANKLIN";
	sLocal_245 = "BARRY";
	Local_247 = { 417.533f, -765.23f, 28.41f };
	Local_248 = { 0f, 0f, 12.96f };
	Local_39 = { ScriptParam_249 };
	__LIB_20__::func_264(&Local_39);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_38__::func_39(1);
		func_475();
	}
	if (__LIB_0__::func_294() == 1)
	{
		Global_78564 = 1;
		iLocal_37 = 0;
		while (!func_464(&Local_39))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_41__::func_639(&iVar0, 410.74f, -778.37f, 28.87f, 359.2f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
		Global_78564 = 0;
	}
	if (__LIB_0__::func_121(Local_39.f_28[0]))
	{
		__LIB_10__::func_734(&iLocal_45, &(Local_39.f_28[0]));
	}
	func_351(1);
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_GRF", 0);
		__LIB_35__::func_898(Local_39.f_9, 0, 0, 0, 0, 0);
		if (iLocal_41 == 5)
		{
			func_329();
		}
		else if (!func_310())
		{
			PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(392.7562f, -842.7891f, 511.9787f, -669.2035f);
			switch (iLocal_41)
			{
				case 0:
					func_301();
					break;
				case -1:
					func_290();
					break;
				case 1:
					func_253();
					break;
				case -2:
					func_251();
					break;
				case 2:
					func_242();
					break;
				case 3:
					func_214();
					break;
				case 4:
					func_1();
					break;
				}
		}
	}
}

void func_1()//Position - 0x28C
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
	}
	__LIB_24__::func_951(49, 1, 1);
	func_2(322, 1);
	func_475();
}

void func_2(int iParam0, bool bParam1)//Position - 0x2BB
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_18__::func_205();
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
	__LIB_39__::func_904(iVar0, 0);
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
	__LIB_32__::func_577(iVar0, 1, 0, 0);
	__LIB_0__::func_46(0, 0);
	MemCopy(&sVar1, {__LIB_0__::func_339(iVar0)}, 4);
	__LIB_0__::func_44(&sVar1, __LIB_26__::func_250());
	func_30();
	if (BitTest(Global_113386.f_10016.f_25, 3))
	{
		__LIB_0__::func_18();
	}
	__LIB_35__::func_897();
	if (iParam0 == 210 || iParam0 == 211)
	{
		__LIB_24__::func_943(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		__LIB_24__::func_943(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		__LIB_24__::func_943(iParam0, 0, 0);
	}
	__LIB_0__::func_533();
}

void func_30()//Position - 0x146D
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
			iVar3 = __LIB_18__::func_168(iVar1);
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

int func_31(int iParam0, int iParam1, int iParam2)//Position - 0x152E
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
	Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar0, iParam1, iParam2, -1) };
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
		uVar2 = { __LIB_18__::func_180(iVar0, iParam2) };
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
		uVar5 = { __LIB_18__::func_247(iVar0, iParam2) };
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
		uVar6 = { __LIB_18__::func_180(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar0, iParam1, uVar6[iParam1], -1) };
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

int func_32(int iParam0, int iParam1, int iParam2)//Position - 0x16EA
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

int func_34(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x17B1
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
		Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_20__::func_322(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_6__::func_795(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_6__::func_795(iParam0, 9);
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
			iVar7 = __LIB_6__::func_788(iParam0, 1);
			if (!__LIB_6__::func_780(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_6__::func_788(iParam0, 0);
			if (!__LIB_6__::func_779(iVar10, 14, iVar8, -1) && !__LIB_6__::func_827(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_6__::func_788(iParam0, 2);
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
			uVar11 = { __LIB_18__::func_180(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, uVar11[iVar0], -1) };
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
							uVar12 = { __LIB_18__::func_247(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_20__::func_322(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_40__::func_943(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
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
							__LIB_0__::func_211(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_20__::func_322(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_40__::func_943(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
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
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, func_40(iParam0, iVar0, -1), -1) };
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
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_34(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_35__::func_896(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_34(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_34(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_34(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_34(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_34(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_18__::func_247(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_20__::func_322(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__::func_943(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
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
		__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_20__::func_322(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__::func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
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
				iVar3 = __LIB_40__::func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_34(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_39__::func_857(iVar10, iParam1, iParam2);
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

int func_40(int iParam0, int iParam1, int iParam2)//Position - 0x27EE
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
				return __LIB_6__::func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__::func_795(iParam0, iParam1);
		}
	}
	return -99;
}

int func_74(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8EC9
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
	Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_18__::func_180(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_148(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_148(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_148(iParam0, 14, iVar4))
										{
											if (!__LIB_24__::func_955(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__::func_795(iParam0, iVar2);
						Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_24__::func_955(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
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
		uVar8 = { __LIB_18__::func_247(iVar0, iParam2) };
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

void func_214()//Position - 0x26EE4
{
	switch (iLocal_42)
	{
		case 0:
			if (func_240())
			{
				iLocal_53 = 1;
				func_239(0);
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				PED::SET_CREATE_RANDOM_COPS(true);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), false);
				__LIB_0__::func_210("LOSE_WANTED_LVL", 7500, 1);
				if (!bLocal_59[3] && __LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_45, 15f, 1))
				{
					bLocal_59[3] = __LIB_35__::func_536(&uLocal_67, "BARR3AU", sLocal_65[3], 7, 1, 0, 0);
				}
				if (!bLocal_55)
				{
					func_221(1);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_45, iLocal_44);
					if (PED::IS_PED_HEADTRACKING_PED(iLocal_45, PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_45);
					}
				}
				if (PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), iLocal_45))
				{
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				}
				iLocal_42 = 1;
			}
			break;
		case 1:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) == 0)
			{
				iLocal_42 = 2;
			}
			if (__LIB_0__::func_121(iLocal_47[0]) && __LIB_0__::func_121(iLocal_47[1]))
			{
				if ((__LIB_0__::func_530(iLocal_47[0], Local_237, 30f, 1) || __LIB_11__::func_747(iLocal_47[0], PLAYER::PLAYER_PED_ID(), 1126825984, 0)) || __LIB_11__::func_747(iLocal_47[1], PLAYER::PLAYER_PED_ID(), 1126825984, 0))
				{
					__LIB_0__::func_124(&(iLocal_47[0]), 1, 0, 1);
					__LIB_0__::func_124(&(iLocal_47[1]), 1, 0, 1);
					__LIB_0__::func_106(&iLocal_46);
				}
			}
			break;
		case 2:
			iLocal_41 = 4;
			iLocal_42 = 0;
			break;
	}
}

void func_221(bool bParam0)//Position - 0x271E8
{
	if (bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_44);
			TASK::TASK_PLAY_ANIM(0, sLocal_43, "barry_get_up", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_46, false), 200f, -1, false, false);
			TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_44);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_44);
			TASK::TASK_PLAY_ANIM(0, sLocal_43, "barry_get_up", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_44);
		}
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_44);
		TASK::TASK_PLAY_ANIM(0, sLocal_43, "barry_get_up", 8f, -8f, -1, 0, 0f, false, false, false);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_44);
	}
}

void func_239(bool bParam0)//Position - 0x279A4
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_39.f_41[0]))
	{
		if (bParam0)
		{
			if (!ENTITY::IS_ENTITY_ATTACHED(Local_39.f_41[0]))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_39.f_41[0], iLocal_45, PED::GET_PED_BONE_INDEX(iLocal_45, 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			}
		}
		else if (ENTITY::IS_ENTITY_ATTACHED(Local_39.f_41[0]))
		{
			ENTITY::DETACH_ENTITY(Local_39.f_41[0], true, true);
			ENTITY::SET_ENTITY_HAS_GRAVITY(Local_39.f_41[0], true);
		}
	}
}

int func_240()//Position - 0x27A1C
{
	struct<3> Var0;
	float fVar1;
	if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_46) && STREAMING::HAS_MODEL_LOADED(iLocal_49)) && STREAMING::HAS_MODEL_LOADED(iLocal_50))
	{
		Var0 = { Local_235 };
		fVar1 = fLocal_240;
		if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), Local_235, 1) < __LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), Local_236, 1))
		{
			Var0 = { Local_236 };
			fVar1 = fLocal_241;
		}
		iLocal_46 = VEHICLE::CREATE_VEHICLE(iLocal_49, Var0, fVar1, true, true, false);
		iLocal_47[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_46, 6, iLocal_50, -1, true, true);
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(iLocal_47[0], joaat("WEAPON_PISTOL"), -1, true);
		WEAPON::SET_PED_INFINITE_AMMO(iLocal_47[0], true, joaat("WEAPON_PISTOL"));
		iLocal_47[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_46, 6, iLocal_50, 0, true, true);
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(iLocal_47[1], joaat("WEAPON_PISTOL"), -1, true);
		WEAPON::SET_PED_INFINITE_AMMO(iLocal_47[1], true, joaat("WEAPON_PISTOL"));
		VEHICLE::SET_VEHICLE_SIREN(iLocal_46, true);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_46, 20f);
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_47[0], iLocal_46, Local_237, 20f, 1, iLocal_49, 786603, 5f, 5f);
		return 1;
	}
	return 0;
}

void func_242()//Position - 0x27B60
{
	switch (iLocal_42)
	{
		case 0:
			func_351(0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_45))
			{
				MISC::CLEAR_AREA_OF_COPS(ENTITY::GET_ENTITY_COORDS(iLocal_45, true), 1000f, 0);
				iLocal_243 = PED::CREATE_SYNCHRONIZED_SCENE(Local_247, Local_248, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_243, true);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_45, iLocal_243, sLocal_43, "barry_3_sit_loop", 1000f, -8f, 1, 16, 1000f, 0);
			}
			PED::SET_CREATE_RANDOM_COPS(false);
			__LIB_10__::func_700(&Local_39, 0, 1);
			if (!__LIB_10__::func_722())
			{
				__LIB_0__::func_84(500, 1);
			}
			iLocal_52 = MISC::GET_GAME_TIMER();
			iLocal_66 = MISC::GET_GAME_TIMER();
			iLocal_42 = 1;
			break;
		case 1:
			if (!func_247())
			{
				func_246();
				if (iLocal_58 < 3)
				{
					if (__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_45, 15f, 1))
					{
						if (!bLocal_59[iLocal_58])
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_66) > iLocal_232[iLocal_58])
							{
								bLocal_59[iLocal_58] = __LIB_35__::func_536(&uLocal_67, "BARR3AU", sLocal_65[iLocal_58], 7, 0, 0, 0);
							}
						}
						else
						{
							iLocal_58++;
							iLocal_66 = MISC::GET_GAME_TIMER();
						}
					}
					else if (__LIB_0__::func_75())
					{
						__LIB_6__::func_833();
					}
				}
			}
			else if (__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_45, 15f, 1))
			{
				if (!bLocal_61)
				{
					bLocal_61 = __LIB_35__::func_536(&uLocal_67, "BARR3AU", "BARRY3_TRICK", 7, 0, 0, 0);
				}
			}
			if (!iLocal_53)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_52) > 40000 || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 0)
				{
					iLocal_53 = 1;
					iLocal_42 = 2;
				}
				else if (!__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_45, 100f, 1))
				{
					iLocal_42 = 2;
				}
			}
			break;
		case 2:
			if (!iLocal_53)
			{
				iLocal_41 = 4;
			}
			else
			{
				iLocal_41 = 3;
			}
			iLocal_42 = 0;
			break;
	}
}

void func_246()//Position - 0x27D65
{
	if (__LIB_0__::func_508(iLocal_45, PLAYER::PLAYER_PED_ID(), 7f, 1))
	{
		if (!PED::IS_PED_HEADTRACKING_PED(iLocal_45, PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_45, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
		}
	}
	else if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iLocal_45))
	{
		if (!PED::IS_PED_HEADTRACKING_PED(iLocal_45, PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_45, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
		}
	}
	else if (PED::IS_PED_HEADTRACKING_PED(iLocal_45, PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(iLocal_45);
	}
	if (__LIB_0__::func_508(iLocal_45, PLAYER::PLAYER_PED_ID(), 6f, 1))
	{
		if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), iLocal_45))
		{
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_45, -1, 0, 2);
		}
	}
	else if (PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), iLocal_45))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
}

bool func_247()//Position - 0x27E1A
{
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_56 && !bLocal_55)
		{
			if (__LIB_0__::func_508(iLocal_45, PLAYER::PLAYER_PED_ID(), 40f, 1))
			{
				bLocal_54 = true;
			}
			else
			{
				bLocal_54 = false;
			}
			iLocal_56 = 0;
		}
		if (!bLocal_55 && !bLocal_54)
		{
			if (__LIB_0__::func_508(iLocal_45, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 15f, 1))
			{
				bLocal_55 = true;
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				func_221(0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_45, iLocal_44);
				if (PED::IS_PED_HEADTRACKING_PED(iLocal_45, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_45);
				}
			}
		}
	}
	else
	{
		iLocal_56 = 1;
	}
	return bLocal_55;
}

void func_251()//Position - 0x27FF2
{
	switch (iLocal_42)
	{
		case 0:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_242))
			{
				if (__LIB_0__::func_121(iLocal_45))
				{
					iLocal_242 = PED::CREATE_SYNCHRONIZED_SCENE(417.533f, -765.23f, 28.41f, 0f, 0f, 12.96f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_45, iLocal_242, sLocal_43, "lead_out", 1000f, -8f, 1, 16, 1000f, 0);
				}
			}
			func_239(1);
			iLocal_64 = 0;
			iLocal_42 = 1;
			break;
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_242))
			{
				if (iLocal_64 == 0)
				{
					if (__LIB_35__::func_536(&uLocal_67, "BARR3AU", "BAR_3_INT_LO", 8, 0, 0, 0))
					{
						iLocal_64 = 1;
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_242) > 0.99f)
				{
					iLocal_42 = 2;
				}
			}
			else
			{
				iLocal_42 = 2;
			}
			break;
		case 2:
			func_239(0);
			__LIB_30__::func_552(2);
			break;
	}
}

void func_253()//Position - 0x280DD
{
	switch (iLocal_42)
	{
		case 0:
			MISC::CLEAR_AREA_OF_COPS(417.78f, -765.71f, 29.39f, 40f, 0);
			PED::SET_CREATE_RANDOM_COPS(false);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
				{
					func_284(sLocal_244, PLAYER::PLAYER_PED_ID(), 0, 2);
				}
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sLocal_245, 1, 0, 0, 0);
			}
			if (__LIB_18__::func_170(1, 1093140480, 0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_45, sLocal_245, 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_244, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_39.f_41[0]))
				{
					func_239(0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_39.f_41[0], "Barrys_Clipboard", 0, 0, 0);
				}
				__LIB_26__::func_252();
				CUTSCENE::START_CUTSCENE(0);
				SYSTEM::WAIT(0);
				__LIB_32__::func_742(416.8295f, -762.7533f, 27.396f, 416.6834f, -767.3608f, 34.4159f, 6f, 411.6f, -773.5004f, 27.9818f, 4.0678f, 1, 1, 1, 0, 0);
				func_265(417.78f, -765.71f, 29.39f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				iLocal_42 = 1;
			}
			break;
		case 1:
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(true);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_244, 0))
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), false, 1, false);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_245, 0))
			{
				if (__LIB_0__::func_121(iLocal_45))
				{
					iLocal_242 = PED::CREATE_SYNCHRONIZED_SCENE(417.533f, -765.23f, 28.41f, 0f, 0f, 12.96f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_45, iLocal_242, sLocal_43, "lead_out", 1000f, -8f, 1, 16, 1000f, 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_39.f_41[0]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Barrys_Clipboard", 0))
				{
					func_239(1);
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				func_264();
				__LIB_32__::func_576(1, 1, 1, 1);
				iLocal_42 = 2;
			}
			break;
		case 2:
			__LIB_30__::func_552(-2);
			break;
	}
}

void func_264()//Position - 0x2861C
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_48))
	{
		iLocal_48 = OBJECT::CREATE_OBJECT(iLocal_51, 416.3885f, -764.8415f, 28.3848f, true, true, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_48))
	{
		ENTITY::SET_ENTITY_ROTATION(iLocal_48, 0f, 0f, 20f, 2, true);
	}
}

void func_265(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x28660
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_26__::func_258(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_18__::func_173())
			{
				case 0:
					if (func_148(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_34(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_148(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_34(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_148(PLAYER::PLAYER_PED_ID(), 8, 1) || func_148(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_34(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_148(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_34(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

void func_284(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2957D
{
	struct<50> Var0;
	int iVar1;
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_285(iParam1, &Var0, iParam3);
	iVar1 = 0;
	while (iVar1 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, iVar1, Var0.f_13[iVar1], Var0[iVar1], iParam2);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (Var0.f_39[iVar1] == -1 || Var0.f_39[iVar1] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar1, -1, 0, iParam2);
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar1, Var0.f_39[iVar1], Var0.f_49[iVar1], iParam2);
		}
		iVar1++;
	}
}

void func_285(int iParam0, var uParam1, int iParam2)//Position - 0x29638
{
	int iVar0;
	var uVar1;
	struct<50> Var2;
	struct<14> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	Var2 = 12;
	Var2.f_13 = 12;
	Var2.f_26 = 12;
	Var2.f_39 = 9;
	Var2.f_49 = 9;
	iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_32__::func_744(iParam0, &Var2, 0, -1);
	__LIB_32__::func_744(iParam0, uParam1, iParam2, -1);
	iVar5 = 0;
	iVar6 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (uParam1->f_13[iVar0] != Var2.f_13[iVar0] || (*uParam1)[iVar0] != Var2[iVar0])
		{
			if (__LIB_0__::func_211(iVar4, __LIB_0__::func_33(iVar0), __LIB_0__::func_350(iParam0, Var2.f_13[iVar0], Var2[iVar0], __LIB_0__::func_33(iVar0)), &uVar1))
			{
				Var3 = { __LIB_35__::func_896(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (__LIB_0__::func_212(iVar4, __LIB_0__::func_33(iVar0), __LIB_0__::func_350(iParam0, Var2.f_13[iVar0], Var2[iVar0], __LIB_0__::func_33(iVar0)), &uVar1))
			{
				Var3 = { __LIB_35__::func_896(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam1->f_39[iVar0] != Var2.f_39[iVar0] || uParam1->f_49[iVar0] != Var2.f_49[iVar0])
		{
			if (__LIB_0__::func_211(iVar4, 14, __LIB_6__::func_766(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &uVar1))
			{
				Var3 = { __LIB_35__::func_896(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (__LIB_0__::func_212(iVar4, 14, __LIB_6__::func_766(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &uVar1))
			{
				Var3 = { __LIB_35__::func_896(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	if (iVar6 || iVar5)
	{
		iVar7 = __LIB_0__::func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar8 = __LIB_0__::func_350(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar9 = __LIB_0__::func_24(iVar4, iVar8, iVar7);
		if (iVar9 != -99)
		{
			Var3 = { __LIB_35__::func_896(iVar4, 0, iVar9, -1) };
			uParam1->f_13[0] = Var3.f_3;
			(*uParam1)[0] = Var3.f_4;
		}
	}
}

void func_290()//Position - 0x2A202
{
	__LIB_24__::func_930();
	func_292();
	if (iLocal_42 == 0)
	{
		iLocal_62 = 0;
		bLocal_63 = false;
		func_239(1);
		__LIB_32__::func_576(1, 1, 1, 1);
		if (!__LIB_0__::func_294())
		{
			if (__LIB_0__::func_121(iLocal_45))
			{
				TASK::TASK_PLAY_ANIM(iLocal_45, sLocal_43, "lead_in", 8f, -8f, -1, 2, 0f, false, false, false);
				iLocal_42 = 1;
			}
		}
		else
		{
			__LIB_30__::func_552(1);
		}
	}
	else if (iLocal_42 == 1)
	{
		if (__LIB_1__::func_197(iLocal_45))
		{
			if (!bLocal_57 && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 415.47806f, -771.7041f, 27.855623f, 415.5606f, -759.9372f, 31.361616f, 7.25f, false, true, 0) || __LIB_4__::func_739()))
			{
				bLocal_57 = true;
				if (__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_45, 5f, 1))
				{
					bLocal_63 = true;
				}
			}
			if (bLocal_57)
			{
				if (!bLocal_63)
				{
					if (__LIB_4__::func_739())
					{
						CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_45, 0f, 0f, 0.5f, true, 5000, 2000, 2000, 0);
					}
					else
					{
						CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_45, 0.5f, 0f, 0.5f, true, 5000, 2000, 2000, 0);
						CAM::SET_GAMEPLAY_HINT_FOV(35f);
						CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
						CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
						CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(0.2f);
						CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0.01f);
						CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
					}
				}
				if (__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_45, 2.5f, 1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_45, 0);
				}
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_45, sLocal_43, "lead_in", 3))
			{
				if (iLocal_62 == 0)
				{
					if (__LIB_35__::func_536(&uLocal_67, "BARR3AU", "BAR_3_INT_LI", 8, 0, 0, 0))
					{
						iLocal_62 = 1;
					}
				}
				else if (!__LIB_0__::func_75())
				{
					iLocal_42 = 2;
				}
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_45, sLocal_43, "lead_in") > 0.9f)
				{
					iLocal_42 = 2;
				}
			}
			else
			{
				iLocal_42 = 2;
			}
		}
	}
	if (iLocal_42 == 2)
	{
		STREAMING::REQUEST_MODEL(iLocal_49);
		STREAMING::REQUEST_MODEL(iLocal_50);
		__LIB_30__::func_552(1);
	}
}

void func_292()//Position - 0x2A3F9
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && __LIB_0__::func_121(iLocal_45))
	{
		PED::SET_IK_TARGET(iLocal_45, 1, PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f, 0, -1, -1);
		PED::SET_IK_TARGET(PLAYER::PLAYER_PED_ID(), 1, iLocal_45, 31086, 0f, 0f, 0f, 0, -1, -1);
	}
}

void func_301()//Position - 0x2A651
{
	int iVar0;
	if (iLocal_42 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			bLocal_59[iVar0] = 0;
			iVar0++;
		}
		sLocal_65[0] = "BARRY3_C1";
		sLocal_65[1] = "BARRY3_C2";
		sLocal_65[2] = "BARRY3_C3";
		sLocal_65[3] = "BARRY3_COPS";
		iLocal_232[0] = 0;
		iLocal_232[1] = 20000;
		iLocal_232[2] = 7000;
		iLocal_246 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_45, iLocal_246);
		PED::SET_PED_CONFIG_FLAG(iLocal_45, 132, true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_45, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_45, 185, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_45, false);
		__LIB_0__::func_203(&uLocal_67, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		__LIB_0__::func_203(&uLocal_67, 3, iLocal_45, "BARRY", 0, 1);
		HUD::REQUEST_ADDITIONAL_TEXT("BARY3", 0);
		STREAMING::REQUEST_MODEL(iLocal_51);
		STREAMING::REQUEST_ANIM_DICT(sLocal_43);
		iLocal_42 = 1;
	}
	if (iLocal_42 == 1)
	{
		if ((HUD::HAS_ADDITIONAL_TEXT_LOADED(0) && STREAMING::HAS_MODEL_LOADED(iLocal_51)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_43))
		{
			if (__LIB_0__::func_294())
			{
				switch (__LIB_0__::func_315())
				{
					case 0:
						STREAMING::REQUEST_MODEL(iLocal_49);
						STREAMING::REQUEST_MODEL(iLocal_50);
						__LIB_10__::func_696(0, 0);
						__LIB_10__::func_701(iLocal_45, Local_234, fLocal_239, 1, 1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						if (__LIB_0__::func_121(iLocal_45))
						{
							iLocal_243 = PED::CREATE_SYNCHRONIZED_SCENE(Local_247, Local_248, 2);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_243, true);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_45, iLocal_243, sLocal_43, "barry_3_sit_loop", 1000f, -8f, 0, 0, 1000f, 0);
						}
						func_264();
						__LIB_0__::func_370(Local_233, fLocal_238, 1, 0);
						__LIB_6__::func_775(0, -1, 1);
						__LIB_30__::func_552(2);
						break;
					default:
						break;
				}
			}
			else
			{
				__LIB_26__::func_478("BAR_5_RCM_p2", 0);
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
					{
						func_284(sLocal_244, PLAYER::PLAYER_PED_ID(), 0, 2);
					}
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sLocal_245, 1, 0, 0, 0);
				}
				PED::SET_CREATE_RANDOM_COPS(false);
				__LIB_0__::func_84(500, 1);
				__LIB_30__::func_552(-1);
			}
		}
	}
}

int func_310()//Position - 0x2AB0E
{
	if (!__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_45))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_45, false))
		{
			func_239(0);
			func_328("B3BARRYDEAD");
			return 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_45, PLAYER::PLAYER_PED_ID(), true) || __LIB_20__::func_647(PLAYER::PLAYER_PED_ID(), iLocal_45, 1))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_45, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
			func_239(0);
			func_328("B3BARRYHURT");
			return 1;
		}
		else if (__LIB_38__::func_135(iLocal_45, 1, 1116471296, 1126825984, 0, 0, 0, 0) || __LIB_20__::func_647(PLAYER::PLAYER_PED_ID(), iLocal_45, 1))
		{
			if (!iLocal_53)
			{
				if ((iLocal_41 == -2 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_242)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_242) < 0.82f)
				{
				}
				else
				{
					func_221(0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_45, iLocal_44);
				}
				func_239(0);
				func_328("B3BARRYSCARE");
				return 1;
			}
		}
	}
	return 0;
}

void func_328(char* sParam0)//Position - 0x2B4D8
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	HUD::CLEAR_PRINTS();
	if (iLocal_41 != 5)
	{
		sLocal_40 = sParam0;
		__LIB_30__::func_552(5);
	}
}

void func_329()//Position - 0x2B4F9
{
	switch (iLocal_42)
	{
		case 0:
			if (MISC::ARE_STRINGS_EQUAL(sLocal_40, "DEFAULT" /* GXT: _ */))
			{
				__LIB_38__::func_39(1);
			}
			else
			{
				__LIB_39__::func_861(sLocal_40, 1);
			}
			iLocal_42 = 1;
			break;
		case 1:
			if (__LIB_0__::func_204())
			{
				func_475();
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_40))
			{
				if (__LIB_1__::func_197(iLocal_45))
				{
					if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_45, 15f, 1))
					{
						func_330();
					}
				}
			}
			break;
	}
}

int func_330()//Position - 0x2B57D
{
	int iVar0;
	iVar0 = 0;
	if (!bLocal_60)
	{
		if (__LIB_0__::func_75())
		{
			__LIB_0__::func_296();
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (iVar0 == 0)
			{
				bLocal_60 = __LIB_35__::func_901(&uLocal_67, "BARR3AU", "BARRY3_EEP", "BARRY3_EEP_1", 9, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bLocal_60 = __LIB_35__::func_901(&uLocal_67, "BARR3AU", "BARRY3_EEP", "BARRY3_EEP_2", 9, 1, 0);
			}
			else
			{
				bLocal_60 = __LIB_35__::func_901(&uLocal_67, "BARR3AU", "BARRY3_EEP", "BARRY3_EEP_3", 9, 1, 0);
			}
		}
	}
	if (bLocal_60)
	{
		return 1;
	}
	return 0;
}

void func_351(bool bParam0)//Position - 0x2C107
{
	PATHFIND::DISABLE_NAVMESH_IN_AREA(437.6351f, -747.0594f, 28.4126f, 397.6351f, -787.0594f, 28.4126f, bParam0);
}

int func_464(var uParam0)//Position - 0x38466
{
	int iVar0[2];
	struct<3> Var1;
	float fVar2;
	int iVar3;
	bool bVar4;
	Var1 = { 417.78f, -765.71f, 29.39f };
	fVar2 = 87.3f;
	iVar0[0] = uLocal_38;
	iVar0[1] = joaat("p_cs_clipboard");
	switch (iLocal_37)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_27 = 0;
			uParam0->f_17[0 /*3*/] = { 415.45868f, -773.3615f, 27.854902f };
			uParam0->f_17[1 /*3*/] = { 415.52054f, -758.57153f, 31.344553f };
			uParam0->f_24 = 14.5f;
			StringCopy(&(uParam0->f_9), "BAR_5_RCM_P2", 24);
			uParam0->f_25 = 1;
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			__LIB_10__::func_717(&(uParam0->f_48), "rcm_barry3", "bar_3_rcm_barry_standing_on_street_base", "bar_3_rcm_barry_standing_on_street_fidget");
			iLocal_37 = 1;
			break;
		case 1:
			if (!__LIB_10__::func_716(&iVar0) || !__LIB_20__::func_273(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_37 = 2;
			break;
		case 2:
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_26__::func_256(&(uParam0->f_28[0]), 49, Var1, fVar2, "RC LAUNCHER: BARRY 3", 1))
				{
					PED::SET_PED_PROP_INDEX(uParam0->f_28[0], 1, 0, 0, false);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				__LIB_10__::func_697(&(uParam0->f_41[0]), iVar0[1], Var1 + Vector(0f, 0f, 5f), -115.18f);
				if (__LIB_0__::func_121(uParam0->f_41[0]) && __LIB_0__::func_121(uParam0->f_28[0]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (bVar4)
			{
				iLocal_37 = 3;
			}
			break;
		case 3:
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar3]);
				iVar3++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_475()//Position - 0x388BE
{
	__LIB_26__::func_252();
	if (__LIB_26__::func_257())
	{
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	__LIB_0__::func_202(&uLocal_67, 1);
	__LIB_0__::func_202(&uLocal_67, 3);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_ADDITIONAL_TEXT(6, true);
	HUD::CLEAR_ADDITIONAL_TEXT(0, true);
	PED::SET_CREATE_RANDOM_COPS(true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_49);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_50);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_51);
	__LIB_0__::func_124(&iLocal_45, 1, 0, 1);
	__LIB_0__::func_122(&iLocal_48, 0);
	func_486(1);
	func_351(0);
	PED::SET_CREATE_RANDOM_COPS(true);
	__LIB_32__::func_757(&Local_39, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_486(bool bParam0)//Position - 0x38B5E
{
	if (bParam0)
	{
		__LIB_0__::func_124(&(iLocal_47[0]), 1, 0, 1);
		__LIB_0__::func_124(&(iLocal_47[1]), 1, 0, 1);
		__LIB_0__::func_106(&iLocal_46);
	}
	else
	{
		__LIB_0__::func_0(&(iLocal_47[0]));
		__LIB_0__::func_0(&(iLocal_47[1]));
		__LIB_11__::func_32(&iLocal_46);
	}
}

