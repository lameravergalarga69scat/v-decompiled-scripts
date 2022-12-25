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
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	bool bLocal_43 = 0;
	bool bLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	var uLocal_49 = 16;
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
	char* sLocal_214 = NULL;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	struct<3> Local_218 = { 0, 0, 0 } ;
	struct<3> Local_219 = { 0, 0, 0 } ;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	struct<3> Local_225[2];
	float fLocal_226 = 0f;
	struct<61> Local_227 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	uLocal_38 = __LIB_2__::func_910(69);
	fLocal_47 = 100f;
	fLocal_48 = 20f;
	sLocal_214 = "Omega";
	iLocal_215 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_DIGISCANNER"));
	iLocal_216 = joaat("prop_cs_walkie_talkie");
	Local_218 = { 0.1f, 0.08f, 0f };
	Local_219 = { 162.72f, 5.4f, 1.8f };
	Local_39 = { ScriptParam_227 };
	__LIB_14__::func_801(&Local_39);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_14__::func_872(1);
		func_443();
	}
	func_442();
	if (__LIB_0__::func_323())
	{
		Global_78564 = 1;
		iLocal_37 = 0;
		__LIB_14__::func_865(&iVar0, 2455.886f, 3432.4453f, 49.2697f, 189.77f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
		func_328(iVar0);
		while (!func_320(&Local_39))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_14__::func_800(&Local_39, 0, 1);
		Global_78564 = 0;
	}
	__LIB_17__::func_115(1, 1, 1, 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_Omega1", 0);
		__LIB_14__::func_863(Local_39.f_9, 0, 0, 0, 0, 0);
		switch (iLocal_40)
		{
			case 0:
				func_300();
				break;
			case 1:
				func_290();
				break;
			case 2:
				func_258();
				break;
			case 3:
				func_255();
				break;
			case 4:
				func_5();
				break;
			case 5:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x1C4
{
	char* sVar0;
	switch (iLocal_41)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			switch (iLocal_42)
			{
				case 0:
					break;
				case 1:
					sVar0 = "O1_FAILKILL";
					break;
				case 2:
					sVar0 = "O1_FAILHURT";
					break;
				case 3:
					sVar0 = "O1_FAILSCARE";
					break;
			}
			if (iLocal_42 == 0)
			{
				__LIB_14__::func_872(1);
			}
			else
			{
				__LIB_14__::func_880(sVar0, 1);
			}
			iLocal_41 = 1;
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				func_443();
			}
			break;
	}
}

void func_5()//Position - 0x2C6
{
	if (func_232())
	{
		switch (iLocal_41)
		{
			case 0:
				bLocal_43 = false;
				bLocal_44 = false;
				iLocal_45 = 0;
				bLocal_46 = false;
				iLocal_41 = 1;
				break;
			case 1:
				if (__LIB_0__::func_121(Local_39.f_28[0]))
				{
					if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
					{
						if (!iLocal_45)
						{
							if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), Local_39.f_28[0]) > fLocal_48)
							{
								__LIB_0__::func_638();
								iLocal_45 = 1;
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_224) > 7500)
							{
								if (!bLocal_43)
								{
									bLocal_43 = __LIB_0__::func_787(&uLocal_49, "SCRAPAU", "SCRAP_1_AMB2", 7, 0, 0, 0);
								}
								else if (!bLocal_44)
								{
									bLocal_44 = __LIB_0__::func_787(&uLocal_49, "SCRAPAU", "SCRAP_1_HANG", 7, 0, 0, 0);
								}
							}
						}
						else if (!bLocal_46 && __LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), Local_39.f_28[0]) > 50f)
						{
							bLocal_46 = __LIB_0__::func_787(&uLocal_49, "SCRAPAU", "SCRAP_WALK", 7, 0, 0, 0);
						}
						if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), Local_39.f_28[0]) > fLocal_47)
						{
							iLocal_41 = 2;
						}
					}
				}
				break;
			case 2:
				func_6();
				break;
			}
	}
}

void func_6()//Position - 0x3D6
{
	__LIB_0__::func_697("SSHIP_HELP1" /* GXT: Spaceship parts are scattered throughout San Andreas. Find and collect them all for Omega. */, 1, 0, -1, 10000, 7, 0, 0, 0);
	func_7(66, 1);
	func_443();
}

void func_7(int iParam0, bool bParam1)//Position - 0x3FA
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
	func_35();
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

void func_35()//Position - 0x15AC
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
				if (func_153(iVar1, 14, iVar2))
				{
					func_36(iVar1, 14, iVar2);
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

int func_36(int iParam0, int iParam1, int iParam2)//Position - 0x166D
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
	if (!func_153(iParam0, iParam1, iParam2))
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
				func_36(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_36(iParam0, 14, uVar5[iVar3]))
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
	if (func_79(iParam0, iVar0, &iVar7, 0))
	{
		func_39(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_37(iParam0, iVar0, &iVar7))
	{
		func_39(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_37(int iParam0, int iParam1, int iParam2)//Position - 0x1829
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_153(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_39(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x18F0
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
										func_39(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_39(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_45(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_79(iParam0, iVar10, &iVar4, 1))
							{
								func_39(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_39(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_39(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_39(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_39(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_39(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_39(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_39(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_39(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_39(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_79(iParam0, iVar10, &iVar4, 0))
		{
			func_39(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_37(iParam0, iVar10, &iVar4))
		{
			func_39(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_45(int iParam0, int iParam1, int iParam2)//Position - 0x292D
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
				if (func_153(iParam0, iParam1, iVar0))
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
				if (func_153(iParam0, iParam1, iVar1))
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

int func_79(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9008
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_153(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_153(int iParam0, int iParam1, int iParam2)//Position - 0x1F5E4
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
				if (!func_153(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_153(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_153(iParam0, 14, iVar4))
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
			if (!func_153(iParam0, 14, uVar8[iVar7]))
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

int func_232()//Position - 0x2736D
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (!__LIB_0__::func_121(Local_39.f_28[0]))
		{
			iLocal_42 = 1;
			__LIB_38__::func_479(5);
			return 0;
		}
		else if (PED::IS_PED_INJURED(Local_39.f_28[0]))
		{
			iLocal_42 = 2;
			__LIB_38__::func_479(5);
			return 0;
		}
		else if (__LIB_17__::func_126(Local_39.f_28[0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			TASK::TASK_SMART_FLEE_PED(Local_39.f_28[0], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
			iLocal_42 = 3;
			__LIB_38__::func_479(5);
			return 0;
		}
		else if (__LIB_17__::func_36(PLAYER::PLAYER_PED_ID(), Local_39.f_28[0], 1))
		{
			TASK::TASK_SMART_FLEE_PED(Local_39.f_28[0], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
			iLocal_42 = 3;
			__LIB_38__::func_479(5);
			return 0;
		}
		else if (PED::IS_PED_RAGDOLL(Local_39.f_28[0]))
		{
			iLocal_42 = 3;
			__LIB_38__::func_479(5);
			return 0;
		}
	}
	return 1;
}

void func_255()//Position - 0x27E3D
{
	if (func_232())
	{
		switch (iLocal_41)
		{
			case 0:
				if (__LIB_0__::func_121(Local_39.f_28[0]))
				{
					TASK::TASK_PERFORM_SEQUENCE(Local_39.f_28[0], iLocal_220);
				}
				__LIB_0__::func_229("O1_LEAVEAREA", 7500, 1);
				iLocal_224 = MISC::GET_GAME_TIMER();
				iLocal_222 = MISC::GET_GAME_TIMER();
				iLocal_41 = 1;
				break;
			case 1:
				if (__LIB_0__::func_121(Local_39.f_28[0]))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_222) > 3000)
					{
						iLocal_41 = 2;
					}
				}
				break;
			case 2:
				__LIB_38__::func_479(4);
				break;
			}
	}
}

void func_258()//Position - 0x27EF3
{
	switch (iLocal_41)
	{
		case 0:
			__LIB_17__::func_417("SCRAP_1_RCM", 0);
			if (__LIB_14__::func_740(1, 1093140480, 0))
			{
				if (__LIB_0__::func_121(Local_39.f_28[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_39.f_28[0], sLocal_214, 0, 0, 0);
				}
				__LIB_14__::func_841();
				__LIB_0__::func_963(1, 0, 1, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(1);
				SYSTEM::WAIT(0);
				func_328(0);
				func_278();
				__LIB_14__::func_592(Local_225[0 /*3*/], Local_225[1 /*3*/], fLocal_226, 2455.886f, 3432.4453f, 49.2697f, 189.77f, 1, 1, 1, 0, 0);
				func_259(2468.51f, 3437.39f, 49.9f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				if (ENTITY::DOES_ENTITY_EXIST(Local_39.f_41[0]))
				{
					OBJECT::DELETE_OBJECT(&(Local_39.f_41[0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_39.f_41[1]))
				{
					OBJECT::DELETE_OBJECT(&(Local_39.f_41[1]));
				}
				iLocal_41 = 1;
			}
			break;
		case 1:
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(true);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				__LIB_17__::func_115(1, 1, 1, 1);
				__LIB_14__::func_800(&Local_39, 0, 1);
				if (!ENTITY::DOES_ENTITY_EXIST(Local_39.f_41[0]))
				{
					Local_39.f_41[0] = OBJECT::CREATE_OBJECT(iLocal_215, 2468.51f, 3437.39f, 55f, true, true, false);
				}
				iLocal_217 = OBJECT::CREATE_OBJECT(iLocal_216, 2472.3f, 3437.3f, 49.3f, true, true, false);
				if (__LIB_0__::func_121(Local_39.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(Local_39.f_41[0]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_39.f_41[0], Local_39.f_28[0], PED::GET_PED_BONE_INDEX(Local_39.f_28[0], 18905), 0.09f, 0.072f, -0.006f, 298f, 194f, 178f, false, false, false, false, 2, true, 0);
				}
				if (__LIB_0__::func_121(Local_39.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_217))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_217, Local_39.f_28[0], PED::GET_PED_BONE_INDEX(Local_39.f_28[0], 64729), Local_218, Local_219, false, false, false, false, 2, true, 0);
				}
				RECORDING::REPLAY_STOP_EVENT();
				iLocal_41 = 2;
			}
			break;
		case 2:
			__LIB_0__::func_963(0, 0, 1, 0);
			if (__LIB_0__::func_121(Local_39.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(Local_39.f_41[0]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_39.f_41[0], Local_39.f_28[0]))
				{
					__LIB_38__::func_479(3);
				}
			}
			break;
	}
}

void func_259(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x2815E
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_17__::func_114(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_0__::func_683())
			{
				case 0:
					if (func_153(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_39(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_153(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_39(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_153(PLAYER::PLAYER_PED_ID(), 8, 1) || func_153(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_39(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_153(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_39(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

void func_278()//Position - 0x28FA1
{
	int iVar0;
	var uVar1[16];
	PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (__LIB_0__::func_121(uVar1[iVar0]) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(uVar1[iVar0], Local_225[0 /*3*/], Local_225[1 /*3*/], fLocal_226, false, true, 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(uVar1[iVar0]) == joaat("taxi"))
			{
				if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar1[iVar0], -1, false)))
				{
					ENTITY::SET_ENTITY_HEADING(uVar1[iVar0], 217.679f);
					ENTITY::SET_ENTITY_COORDS(uVar1[iVar0], 2479.249f, 3401.2341f, 48.9551f, true, false, false, true);
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_290()//Position - 0x2942D
{
	__LIB_14__::func_862();
	if (func_232())
	{
		if (MISC::GET_GAME_TIMER() < iLocal_221 && !__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_39.f_28[0], 4f, 1))
		{
			CAM::SET_GAMEPLAY_ENTITY_HINT(Local_39.f_28[0], 0f, 0f, 0f, true, -1, 2500, 2000, 0);
			CAM::SET_GAMEPLAY_HINT_FOV(35f);
			CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
			CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.3f);
			CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(0.02f);
			CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0.05f);
			CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_39.f_28[0], 2000, 0, 2);
		}
		else
		{
			__LIB_38__::func_479(2);
		}
	}
}

void func_300()//Position - 0x296F7
{
	__LIB_14__::func_862();
	STREAMING::REQUEST_ANIM_DICT("rcmrc_omega_1leadinoutscrap_1_rcm");
	STREAMING::REQUEST_ANIM_DICT("rcmrc_omega_1");
	HUD::REQUEST_ADDITIONAL_TEXT("OMEGA1", 0);
	STREAMING::REQUEST_MODEL(iLocal_215);
	STREAMING::REQUEST_MODEL(iLocal_216);
	if (func_232())
	{
		if ((((STREAMING::HAS_ANIM_DICT_LOADED("rcmrc_omega_1leadinoutscrap_1_rcm") && STREAMING::HAS_ANIM_DICT_LOADED("rcmrc_omega_1")) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) && STREAMING::HAS_MODEL_LOADED(iLocal_215)) && STREAMING::HAS_MODEL_LOADED(iLocal_216))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_220);
			TASK::TASK_PLAY_ANIM(0, "rcmrc_omega_1leadinoutscrap_1_rcm", "leadout_scrap_1_rcm_omega", 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "rcmrc_omega_1", "omega_idle_geiger_counter", 8f, -8f, -1, 262145, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_220);
			if (__LIB_0__::func_121(Local_39.f_28[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_39.f_28[0], true);
				PED::SET_PED_KEEP_TASK(Local_39.f_28[0], true);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_39.f_28[0], false);
				PED::SET_PED_CONFIG_FLAG(Local_39.f_28[0], 185, true);
			}
			if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_692(Local_39.f_28[0]))
			{
				iLocal_223 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_39.f_28[0], iLocal_223);
				PED::SET_PED_CONFIG_FLAG(Local_39.f_28[0], 132, true);
				__LIB_0__::func_222(&uLocal_49, 3, Local_39.f_28[0], "OMEGA", 0, 1);
				__LIB_0__::func_222(&uLocal_49, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			}
			iLocal_221 = MISC::GET_GAME_TIMER() + 3500;
			__LIB_38__::func_479(1);
		}
	}
}

int func_320(var uParam0)//Position - 0x2A4C4
{
	int iVar0[3];
	int iVar1;
	bool bVar2;
	iVar0[0] = uLocal_38;
	iVar0[1] = WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_DIGISCANNER"));
	iVar0[2] = joaat("prop_cs_walkie_talkie");
	switch (iLocal_37)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 2463.2246f, 3444.113f, 48.59399f };
			uParam0->f_17[1 /*3*/] = { 2475.2202f, 3428.0977f, 50.990948f };
			uParam0->f_24 = 17f;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "SCRAP_1_RCM", 24);
			uParam0->f_25 = 1;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_17__::func_31(&(uParam0->f_48), "rcmrc_omega_1", "omega_idle_geiger_counter", 0);
			iLocal_37 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !__LIB_14__::func_856(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_37 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!__LIB_14__::func_842(&(uParam0->f_28[0]), 69, 2468.51f, 3437.39f, 49.9f, 180f, "OMEGA LAUNCHER RC", 1))
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				uParam0->f_41[0] = OBJECT::CREATE_OBJECT(iVar0[1], 2468.51f, 3437.39f, 55f, true, true, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				uParam0->f_41[1] = OBJECT::CREATE_OBJECT(iVar0[2], 2468.51f, 3437.39f, 57f, true, true, false);
			}
			if ((__LIB_0__::func_121(uParam0->f_28[0]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0])) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 18905), 0.09f, 0.072f, -0.006f, 298f, 194f, 178f, false, false, false, false, 2, true, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 64729), 0.1f, 0.08f, 0f, 162.72f, 5.4f, 1.8f, false, false, false, false, 2, true, 0);
			}
			else
			{
				bVar2 = false;
			}
			if (bVar2)
			{
				iLocal_37 = 3;
			}
			break;
		case 3:
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_328(int iParam0)//Position - 0x2A934
{
	struct<3> Var0[3];
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	if (!__LIB_0__::func_121(iParam0))
	{
		iParam0 = __LIB_14__::func_794();
	}
	bVar2 = false;
	if (__LIB_0__::func_121(iParam0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_225[0 /*3*/], Local_225[1 /*3*/], fLocal_226, false, true, 0))
		{
			iVar3 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (STREAMING::IS_MODEL_VALID(iVar3))
			{
				MISC::GET_MODEL_DIMENSIONS(iVar3, &(Var0[1 /*3*/]), &(Var0[2 /*3*/]));
				Var0[0 /*3*/] = { (Var0[2 /*3*/] - Var0[1 /*3*/]), (Var0[2 /*3*/].f_1 - Var0[1 /*3*/].f_1), (Var0[2 /*3*/].f_2 - Var0[1 /*3*/].f_2) };
				Var1 = { __LIB_13__::func_790() };
				if (((iVar3 == joaat("zentorno") || iVar3 == joaat("btype")) || iVar3 == joaat("dubsta3")) || iVar3 == joaat("monster"))
				{
					Var1 = { Var1 * Vector(1.1f, 1.1f, 1.1f) };
				}
				else if (iVar3 == joaat("t20") || iVar3 == joaat("virgo"))
				{
					Var1 = { Var1 * Vector(1.2f, 1.2f, 1.2f) };
				}
				if (Var0[0 /*3*/] > Var1.f_0)
				{
					bVar2 = true;
				}
				else if (Var0[0 /*3*/].f_1 > Var1.f_1)
				{
					bVar2 = true;
				}
				else if (Var0[0 /*3*/].f_2 > Var1.f_2)
				{
					bVar2 = true;
				}
				if (bVar2)
				{
					ENTITY::SET_ENTITY_HEADING(iParam0, 248.4908f);
					ENTITY::SET_ENTITY_COORDS(iParam0, 2531.0803f, 3357.171f, 50.9746f, true, false, false, true);
				}
			}
		}
	}
}

void func_442()//Position - 0x36DA5
{
	Local_225[0 /*3*/] = { 2453.5134f, 3424.6465f, 48.44232f };
	Local_225[1 /*3*/] = { 2490.0596f, 3434.1948f, 58.261032f };
	fLocal_226 = 32.75f;
}

void func_443()//Position - 0x36DE3
{
	__LIB_14__::func_841();
	if (__LIB_14__::func_843())
	{
	}
	__LIB_0__::func_620(0);
	__LIB_0__::func_221(&uLocal_49, 1);
	__LIB_0__::func_221(&uLocal_49, 3);
	__LIB_0__::func_124(&(Local_39.f_28[0]), 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_39.f_41[0]))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_39.f_41[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_39.f_41[1]))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_39.f_41[1]));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_215);
	__LIB_14__::func_871(&Local_39, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

