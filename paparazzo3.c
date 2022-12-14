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
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<61> Local_43 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47[2] = { 0, 0 };
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	char* sLocal_52 = NULL;
	char* sLocal_53 = NULL;
	char* sLocal_54 = NULL;
	char* sLocal_55 = NULL;
	char* sLocal_56 = NULL;
	char* sLocal_57 = NULL;
	char* sLocal_58 = NULL;
	var uLocal_59 = 16;
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
	bool bLocal_224 = 0;
	bool bLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	struct<3> Local_229 = { 0, 0, 0 } ;
	struct<3> Local_230 = { 0, 0, 0 } ;
	int iLocal_231 = 0;
	struct<3> Local_232 = { 0, 0, 0 } ;
	char* sLocal_233 = NULL;
	char* sLocal_234 = NULL;
	int iLocal_235 = 0;
	char* sLocal_236 = NULL;
	struct<61> Local_237 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	uLocal_38 = __LIB_2__::func_910(50);
	iLocal_39 = joaat("pcj");
	iLocal_41 = -2;
	iLocal_48 = joaat("prop_cs_dumpster_lidl");
	iLocal_49 = joaat("prop_cs_dumpster_lidr");
	iLocal_50 = joaat("prop_cs_dumpster_01a");
	iLocal_51 = joaat("prop_dumpster_02a");
	sLocal_52 = "Dumpster_Lid_L";
	sLocal_53 = "Dumpster_Lid_R";
	sLocal_54 = "PAP_Dumpster";
	sLocal_55 = "PAP_Dumpster_blue";
	sLocal_56 = "Franklin";
	sLocal_57 = "rcmpaparazzo_3leadinoutpap_3_rcm";
	sLocal_58 = "Beverley";
	Local_229 = { -260.614f, 292.106f, 91.127f };
	Local_230 = { 7.2E-05f, -2.500116f, 89.63998f };
	Local_232 = { 0.07f, -0.13f, 0.07f };
	sLocal_233 = "Distant_Camera_Flash";
	sLocal_234 = "PAPARAZZO_01_SOUNDSET";
	sLocal_236 = "DEFAULT" /* GXT: _ */;
	Local_43 = { ScriptParam_237 };
	__LIB_14__::func_801(&Local_43);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_14__::func_872(1);
		func_457();
	}
	if (__LIB_0__::func_323())
	{
		iLocal_37 = 0;
		Global_78564 = 1;
		while (!func_450(&Local_43))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_14__::func_865(&iVar0, -257.08f, 285.27f, 90.43f, 12.52f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
		__LIB_14__::func_800(&Local_43, 0, 1);
		Global_78564 = 0;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_PTP", 0);
		__LIB_14__::func_863(Local_43.f_9, 0, 0, 0, 0, 0);
		if (iLocal_41 == 2)
		{
			func_319();
		}
		else if (!func_317())
		{
			switch (iLocal_41)
			{
				case -2:
					func_307();
					break;
				case -1:
					func_296();
					break;
				case 0:
					func_254();
					break;
				case 1:
					func_1();
					break;
				}
		}
	}
}

void func_1()//Position - 0x1FA
{
	func_253();
	if (!__LIB_17__::func_123(Local_43.f_28[0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
	{
		switch (iLocal_42)
		{
			case 0:
				if (__LIB_0__::func_692(Local_43.f_28[0]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_43.f_28[0], true);
				}
				iLocal_42 = 1;
				break;
			case 1:
				if (!bLocal_225)
				{
					bLocal_225 = __LIB_0__::func_787(&uLocal_59, "PAP3AU", "PAP3_RCM_LO", 8, 0, 0, 0);
				}
				else if (!__LIB_0__::func_75())
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_228))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_228) >= 1f)
						{
							iLocal_42 = 2;
						}
					}
					else
					{
						iLocal_42 = 2;
					}
				}
				break;
			case 2:
				func_2();
				break;
		}
	}
	else
	{
		iLocal_41 = 2;
		iLocal_42 = 0;
		sLocal_236 = "P3BEVSCARED";
	}
}

void func_2()//Position - 0x2BB
{
	__LIB_0__::func_712(50, 1, 0);
	__LIB_0__::func_0(&(Local_43.f_28[0]));
	func_3(322, 1);
	func_457();
}

void func_3(int iParam0, bool bParam1)//Position - 0x2E2
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
	func_31();
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

void func_31()//Position - 0x1494
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
				if (func_149(iVar1, 14, iVar2))
				{
					func_32(iVar1, 14, iVar2);
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

int func_32(int iParam0, int iParam1, int iParam2)//Position - 0x1555
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
	if (!func_149(iParam0, iParam1, iParam2))
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
				func_32(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_32(iParam0, 14, uVar5[iVar3]))
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
	if (func_75(iParam0, iVar0, &iVar7, 0))
	{
		func_35(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_33(iParam0, iVar0, &iVar7))
	{
		func_35(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_33(int iParam0, int iParam1, int iParam2)//Position - 0x1711
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_149(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x17D8
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
										func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_41(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_75(iParam0, iVar10, &iVar4, 1))
							{
								func_35(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_35(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_35(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_35(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_35(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_35(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_35(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_75(iParam0, iVar10, &iVar4, 0))
		{
			func_35(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_33(iParam0, iVar10, &iVar4))
		{
			func_35(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_41(int iParam0, int iParam1, int iParam2)//Position - 0x2815
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
				if (func_149(iParam0, iParam1, iVar0))
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
				if (func_149(iParam0, iParam1, iVar1))
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

int func_75(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8EF2
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_149(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_149(int iParam0, int iParam1, int iParam2)//Position - 0x1F5E4
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
				if (!func_149(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_149(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_149(iParam0, 14, iVar4))
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
			if (!func_149(iParam0, 14, uVar8[iVar7]))
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

void func_253()//Position - 0x27FA2
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && __LIB_0__::func_121(Local_43.f_28[0]))
	{
		PED::SET_IK_TARGET(Local_43.f_28[0], 1, PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f, 0, -1, -1);
		PED::SET_IK_TARGET(PLAYER::PLAYER_PED_ID(), 1, Local_43.f_28[0], 31086, 0f, 0f, 0f, 0, -1, -1);
	}
}

void func_254()//Position - 0x27FF7
{
	switch (iLocal_42)
	{
		case 0:
			func_295();
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					__LIB_17__::func_161(sLocal_56, PLAYER::PLAYER_PED_ID(), 0, 2);
				}
			}
			if (__LIB_14__::func_740(1, 1093140480, 0))
			{
				if (__LIB_0__::func_121(Local_43.f_28[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_43.f_28[0], sLocal_58, 0, 0, 0);
				}
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_56, 0, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_47[0], sLocal_52, 0, iLocal_48, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_47[0], sLocal_52, 2, iLocal_48, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[1]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_47[1], sLocal_53, 0, iLocal_49, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_47[1], sLocal_53, 2, iLocal_49, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_45))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_45, sLocal_55, 0, iLocal_51, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_45, sLocal_55, 2, iLocal_51, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_46, sLocal_54, 0, iLocal_50, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_46, sLocal_54, 2, iLocal_50, 0);
				}
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 0f, 0);
				RECORDING::REPLAY_START_EVENT(1);
				__LIB_14__::func_841();
				CUTSCENE::START_CUTSCENE(0);
				SYSTEM::WAIT(0);
				if (__LIB_39__::func_366())
				{
					__LIB_14__::func_592(-262.08163f, 292.33f, 90f, -254.652f, 292.335f, 93.5f, 5f, -257.08f, 285.27f, 90.43f, 12.52f, 1, 1, 1, 0, 0);
				}
				else
				{
					__LIB_14__::func_592(-254.8715f, 316.4631f, 88.6055f, -255.2926f, 270.6087f, 103.2327f, 30f, -239.7607f, 267.4757f, 91.0999f, 86.5f, 1, 1, 1, 0, 0);
				}
				func_267(-259.3334f, 291.8268f, 90.5229f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				__LIB_0__::func_123(&(Local_43.f_41[3]));
				iLocal_42 = 1;
			}
			break;
		case 1:
			if (__LIB_7__::func_691())
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(true);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_58, 0))
			{
				iLocal_228 = PED::CREATE_SYNCHRONIZED_SCENE(Local_229, Local_230, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_43.f_28[0], iLocal_228, sLocal_57, "leadout_pap_3_rcm_beverly", 1000f, -8f, 4, 32, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_43.f_28[0], false, false);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_56, 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -258.8661f, 292.7882f, 90.5764f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 153.0417f);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_46))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_54, iLocal_50)))
				{
					iLocal_46 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_54, iLocal_50));
				}
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_228) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_54, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_46, Local_229, false, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_46, Local_230, 2, false);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_46, iLocal_228, "leadout_pap_3_rcm_dumpster", sLocal_57, 1000f, -8f, 0, 1000f);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_46);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_52, 0)))
				{
					iLocal_47[0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_52, iLocal_48));
				}
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_228) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_52, 0))
			{
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_47[0], iLocal_228, "leadout_pap_3_rcm_lid_l", sLocal_57, 1000f, -8f, 1, 1000f);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_47[0]);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_47[1]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_53, 0)))
				{
					iLocal_47[1] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_53, iLocal_49));
				}
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_228) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_53, 0))
			{
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_47[1], iLocal_228, "leadout_pap_3_rcm_lid_r", sLocal_57, 1000f, -8f, 1, 1000f);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_47[1]);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_45))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_55, 0)))
				{
					iLocal_45 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_55, iLocal_51));
				}
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_228) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_55, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_45, -261.11316f, 294.19556f, 90.68612f, false, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_45, -0.604164f, -2.332095f, 89.8831f, 2, false);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_45);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				RECORDING::REPLAY_STOP_EVENT();
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 5f, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				HUD::DISPLAY_RADAR(true);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				iLocal_42 = 2;
			}
			break;
	}
	if (iLocal_42 == 2)
	{
		__LIB_14__::func_870(1, 1, 1, 1);
		__LIB_14__::func_800(&Local_43, 0, 1);
		__LIB_38__::func_813(1);
	}
}

void func_267(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x2883A
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
					if (func_149(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_149(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_149(PLAYER::PLAYER_PED_ID(), 8, 1) || func_149(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_149(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

void func_295()//Position - 0x2A4B3
{
	if (__LIB_7__::func_691())
	{
		CAM::SET_GAMEPLAY_ENTITY_HINT(Local_43.f_28[0], 0f, 0f, 0f, true, -1, 1500, 2000, 0);
	}
}

void func_296()//Position - 0x2A4D9
{
	__LIB_14__::func_862();
	func_253();
	switch (iLocal_42)
	{
		case 0:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_03_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("PAPARAZZO_03_SCENE");
			}
			iLocal_235 = 0;
			__LIB_14__::func_851("PAP_3_RCM", 0);
			if (__LIB_0__::func_692(Local_43.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_46))
			{
				iLocal_226 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(iLocal_46, true), ENTITY::GET_ENTITY_ROTATION(iLocal_46, 2), 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_43.f_28[0], iLocal_226, sLocal_57, "leadin_pap_3_rcm_beverly", 8f, -8f, 0, 0, 1000f, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_46, iLocal_226, "leadin_pap_3_rcm_dumpster", sLocal_57, 1000f, -8f, 0, 1000f);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_47[0], iLocal_226, "leadin_pap_3_rcm_lid_l", sLocal_57, 1000f, -8f, 0, 1000f);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[1]))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_47[1], iLocal_226, "leadin_pap_3_rcm_lid_r", sLocal_57, 1000f, -8f, 0, 1000f);
				}
				__LIB_14__::func_870(1, 1, 1, 1);
				iLocal_42 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_692(Local_43.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_46))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_226))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_226) > 0.99f)
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_227))
						{
							iLocal_227 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(iLocal_46, true), ENTITY::GET_ENTITY_ROTATION(iLocal_46, 2), 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_43.f_28[0], iLocal_227, sLocal_57, "idle_01_pap_3_rcm_beverly", 8f, -8f, 0, 0, 1000f, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_43.f_28[0], false, false);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
							{
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_46, iLocal_227, "idle_01_pap_3_rcm_dumpster", sLocal_57, 1000f, -8f, 0, 1000f);
								ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_46);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
							{
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_47[0], iLocal_227, "idle_01_pap_3_rcm_lid_l", sLocal_57, 1000f, -8f, 0, 1000f);
								ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_47[0]);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[1]))
							{
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_47[1], iLocal_227, "idle_01_pap_3_rcm_lid_r", sLocal_57, 1000f, -8f, 0, 1000f);
								ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_47[1]);
							}
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_226) > 0.3f)
					{
						if (!bLocal_224)
						{
							bLocal_224 = __LIB_0__::func_787(&uLocal_59, "PAP3AU", "PAP3_RCM_LI", 8, 0, 0, 0);
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_226) > 0.3f)
					{
						func_297();
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_226) > 0.05f)
					{
						func_295();
					}
				}
				else
				{
					func_295();
					iLocal_42 = 2;
				}
				if (bLocal_224)
				{
					if (!__LIB_0__::func_75())
					{
						iLocal_42 = 2;
					}
				}
			}
			break;
		case 2:
			func_295();
			__LIB_38__::func_813(0);
			break;
	}
}

void func_297()//Position - 0x2A7B2
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_43.f_41[3]) && !iLocal_235)
	{
		GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_rcpap1_camera", PED::GET_PED_BONE_COORDS(Local_43.f_28[0], 28422, Local_232), ENTITY::GET_ENTITY_ROTATION(Local_43.f_41[3], 2), 1f, false, false, false);
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_231))
		{
			AUDIO::STOP_SOUND(iLocal_231);
		}
		if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sLocal_233, false, -1))
		{
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_231, "CAMERA", PED::GET_PED_BONE_COORDS(Local_43.f_28[0], 28422, Local_232), sLocal_234, false, 0, false);
			iLocal_235 = 1;
		}
	}
}

void func_307()//Position - 0x2AA6F
{
	bLocal_224 = false;
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_44 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
	}
	if (__LIB_0__::func_692(Local_43.f_28[0]))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_43.f_28[0], iLocal_44);
		PED::SET_PED_CONFIG_FLAG(Local_43.f_28[0], 132, true);
		PED::SET_PED_KEEP_TASK(Local_43.f_28[0], true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_43.f_28[0], true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_45))
	{
		iLocal_45 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-261.19f, 292.22f, 90.79f, 10f, iLocal_51, true, false, true);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_45, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_46))
	{
		__LIB_14__::func_878(&iLocal_46, &(Local_43.f_41[0]));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
	{
		__LIB_14__::func_878(&(iLocal_47[0]), &(Local_43.f_41[1]));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_47[1]))
	{
		__LIB_14__::func_878(&(iLocal_47[1]), &(Local_43.f_41[2]));
	}
	__LIB_0__::func_222(&uLocal_59, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	__LIB_0__::func_222(&uLocal_59, 3, Local_43.f_28[0], "BEVERLY", 0, 1);
	HUD::REQUEST_ADDITIONAL_TEXT("PAP3", 0);
	STREAMING::REQUEST_ANIM_DICT(sLocal_57);
	STREAMING::REQUEST_PTFX_ASSET();
	while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_57) || !STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		__LIB_14__::func_862();
		SYSTEM::WAIT(0);
	}
	iLocal_231 = AUDIO::GET_SOUND_ID();
	if (__LIB_0__::func_323())
	{
		switch (__LIB_0__::func_344())
		{
			case 0:
				func_308();
				break;
			default:
				break;
		}
	}
	else
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_17__::func_161(sLocal_56, PLAYER::PLAYER_PED_ID(), 0, 2);
			}
		}
		__LIB_38__::func_813(-1);
	}
}

void func_308()//Position - 0x2ABF8
{
	func_312(1, 1);
	func_311();
	__LIB_38__::func_813(1);
	__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), -258.8661f, 292.7882f, 90.5764f, 153.0393f, 0, 1);
	__LIB_14__::func_879(1, 1, 1);
}

void func_311()//Position - 0x2ACC5
{
	if (__LIB_0__::func_121(Local_43.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_46))
	{
		iLocal_228 = PED::CREATE_SYNCHRONIZED_SCENE(Local_229, Local_230, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Local_43.f_28[0], iLocal_228, sLocal_57, "leadout_pap_3_rcm_beverly", 1000f, -8f, 4, 32, 1000f, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
		{
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_46, iLocal_228, "leadout_pap_3_rcm_dumpster", sLocal_57, 1000f, -8f, 0, 1000f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
		{
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_47[0], iLocal_228, "leadout_pap_3_rcm_lid_l", sLocal_57, 1000f, -8f, 1, 1000f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[1]))
		{
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_47[1], iLocal_228, "leadout_pap_3_rcm_lid_r", sLocal_57, 1000f, -8f, 1, 1000f);
		}
		PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_228, 0.02f);
	}
	bLocal_225 = false;
}

void func_312(bool bParam0, bool bParam1)//Position - 0x2ADB6
{
	if (bParam0)
	{
		__LIB_17__::func_25(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_267(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

int func_317()//Position - 0x2AF1F
{
	if (!__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_43.f_28[0]))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_43.f_28[0], false))
		{
			func_318("P3BEVDEAD");
			return 1;
		}
		else if (PED::GET_PED_MAX_HEALTH(Local_43.f_28[0]) > ENTITY::GET_ENTITY_HEALTH(Local_43.f_28[0]))
		{
			func_318("P3BEVHURT");
			return 1;
		}
	}
	return 0;
}

void func_318(char* sParam0)//Position - 0x2AF8C
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	HUD::CLEAR_PRINTS();
	if (iLocal_41 != 2)
	{
		sLocal_236 = sParam0;
		__LIB_38__::func_813(2);
	}
}

void func_319()//Position - 0x2AFAE
{
	switch (iLocal_42)
	{
		case 0:
			if (MISC::ARE_STRINGS_EQUAL(sLocal_236, "DEFAULT" /* GXT: _ */))
			{
				__LIB_14__::func_872(1);
			}
			else
			{
				__LIB_14__::func_880(sLocal_236, 1);
			}
			iLocal_42 = 1;
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				func_457();
			}
			break;
	}
}

int func_450(var uParam0)//Position - 0x37F74
{
	int iVar0[5];
	int iVar1[3];
	struct<3> Var2[3];
	struct<3> Var3[3];
	char* sVar4;
	int iVar5;
	bool bVar6;
	sVar4 = "rcmpaparazzo_3leadinoutpap_3_rcm";
	iVar0[0] = uLocal_38;
	iVar0[1] = joaat("prop_pap_camera_01");
	iVar0[2] = joaat("prop_cs_dumpster_01a");
	iVar0[3] = joaat("prop_cs_dumpster_lidl");
	iVar0[4] = joaat("prop_cs_dumpster_lidr");
	switch (iLocal_37)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -258.5052f, 287.5976f, 90.178276f };
			uParam0->f_17[1 /*3*/] = { -258.5263f, 298.09048f, 93.69456f };
			uParam0->f_24 = 7f;
			uParam0->f_27 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "PAP_3_RCM", 24);
			iVar5 = 0;
			while (iVar5 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar5]);
				iVar5++;
			}
			STREAMING::REQUEST_ANIM_DICT(sVar4);
			iLocal_37 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar4))
			{
				return 0;
			}
			iLocal_37 = 2;
			break;
		case 2:
			bVar6 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_14__::func_842(&(uParam0->f_28[0]), 50, -261f, 292.22f, 90.89f, 10.53f, "PAPARAZZO LAUNCHER RC", 1))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 1, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], true);
				}
				else
				{
					bVar6 = false;
				}
			}
			if (__LIB_0__::func_692(uParam0->f_28[0]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3]))
				{
					__LIB_14__::func_807(&(uParam0->f_41[3]), iVar0[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_28[0], 0f, 0f, 2.5f), 0f);
					if (__LIB_0__::func_121(uParam0->f_41[3]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[3], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[1]);
					}
					else
					{
						bVar6 = false;
					}
				}
				else
				{
					bVar6 = false;
				}
			}
			if (bVar6)
			{
				iVar1[0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-260.62f, 292.1391f, 90.604f, 10f, joaat("prop_cs_dumpster_01a"), true, false, true);
				Var2[0 /*3*/] = { -260.614f, 292.106f, 91.127f };
				Var3[0 /*3*/] = { 7.2E-05f, -2.500116f, 89.63998f };
				iVar1[1] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-261.58f, 291.66f, 92.06f, 10f, joaat("prop_cs_dumpster_lidl"), true, false, true);
				Var2[1 /*3*/] = { -261.10797f, 292.50616f, 92.03645f };
				Var3[1 /*3*/] = { -0.656039f, -2.50018f, 89.611404f };
				iVar1[2] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-261.5835f, 291.6671f, 92.066f, 10f, joaat("prop_cs_dumpster_lidr"), true, false, true);
				Var2[2 /*3*/] = { -261.11353f, 291.62494f, 91.99765f };
				Var3[2 /*3*/] = { -0.281056f, -2.500049f, 89.627686f };
				iVar5 = 0;
				while (iVar5 <= 2)
				{
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iVar1[iVar5]));
					iVar5++;
				}
				ENTITY::CREATE_MODEL_HIDE(-260.62f, 292.13f, 90.6f, 10f, joaat("prop_cs_dumpster_01a"), true);
				ENTITY::CREATE_MODEL_HIDE(-261.58f, 291.66f, 92.06f, 10f, joaat("prop_cs_dumpster_lidr"), true);
				ENTITY::CREATE_MODEL_HIDE(-261.54f, 292.54f, 92.1f, 10f, joaat("prop_cs_dumpster_lidl"), true);
				uParam0->f_41[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_dumpster_01a"), Var2[0 /*3*/], true, true, false);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[0], Var3[0 /*3*/], 2, true);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_41[0], false);
				uParam0->f_41[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_dumpster_lidl"), Var2[1 /*3*/], true, true, false);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[1], Var3[1 /*3*/], 2, true);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_41[1], false);
				uParam0->f_41[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_dumpster_lidr"), Var2[2 /*3*/], true, true, false);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[2], Var3[2 /*3*/], 2, true);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_41[2], false);
				iLocal_37 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_121(uParam0->f_41[0]))
			{
				iLocal_40 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_41[0], true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_41[0], 2), 2);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_41[0], iLocal_40, "idle_closed_pap_3_rcm_dumpster", sVar4, 8f, -8f, 0, 1000f);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_40, true);
				if (__LIB_0__::func_121(uParam0->f_28[0]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], iLocal_40, sVar4, "idle_closed_pap_3_rcm_beverly", 8f, -8f, 0, 0, 1000f, 0);
				}
				if (__LIB_0__::func_121(uParam0->f_41[1]))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_41[1], iLocal_40, "idle_closed_pap_3_rcm_lid_l", sVar4, 8f, -8f, 0, 1000f);
				}
				if (__LIB_0__::func_121(uParam0->f_41[2]))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_41[2], iLocal_40, "idle_closed_pap_3_rcm_lid_r", sVar4, 8f, -8f, 0, 1000f);
				}
			}
			iVar5 = 0;
			while (iVar5 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar5]);
				iVar5++;
			}
			STREAMING::REMOVE_ANIM_DICT(sVar4);
			return 1;
			break;
	}
	return 0;
}

void func_457()//Position - 0x38667
{
	__LIB_14__::func_841();
	if (__LIB_14__::func_843())
	{
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_03_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_03_SCENE");
	}
	AUDIO::RELEASE_SOUND_ID(iLocal_231);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_47[0], true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_47[1], true);
	}
	__LIB_0__::func_122(&(iLocal_47[0]), 0);
	__LIB_0__::func_122(&(iLocal_47[1]), 0);
	__LIB_0__::func_122(&iLocal_45, 0);
	__LIB_0__::func_122(&iLocal_46, 0);
	STREAMING::REMOVE_ANIM_DICT(sLocal_57);
	STREAMING::REMOVE_PTFX_ASSET();
	__LIB_0__::func_221(&uLocal_59, 1);
	__LIB_0__::func_221(&uLocal_59, 3);
	HUD::CLEAR_ADDITIONAL_TEXT(0, true);
	HUD::CLEAR_PRINTS();
	__LIB_0__::func_124(&(Local_43.f_28[0]), 1, 0, 1);
	__LIB_14__::func_871(&Local_43, 1, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

