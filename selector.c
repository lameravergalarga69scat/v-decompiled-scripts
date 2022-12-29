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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
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
	int iLocal_64 = 0;
	struct<40> Local_65 = { 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0 } ;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	float fLocal_70 = 0f;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
	float fLocal_80 = 0f;
	float fLocal_81 = 0f;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	bool bLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88[4] = { 0, 0, 0, 0 };
	var uLocal_89[4] = { 0, 0, 0, 0 };
	var uLocal_90[4] = { 0, 0, 0, 0 };
	var uLocal_91[4] = { 0, 0, 0, 0 };
	var uLocal_92[4] = { 0, 0, 0, 0 };
	var uLocal_93[4] = { 0, 0, 0, 0 };
	var uLocal_94[4] = { 0, 0, 0, 0 };
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102[4] = { 0, 0, 0, 0 };
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int* iLocal_106 = NULL;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 16;
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
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132[3] = { 0, 0, 0 };
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	var uLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	float fLocal_141 = 0f;
	bool bLocal_142 = 0;
	bool bLocal_143 = 0;
	float fLocal_144 = 0f;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	char* sLocal_149 = NULL;
	int iLocal_150 = 0;
	bool bLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	var uLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159[2] = { 0, 0 };
	int iLocal_160 = 0;
	var uLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	bool bLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	struct<3> Local_171 = { 0, 0, 0 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_70 = 0.056f;
	fLocal_71 = 0.006f;
	fLocal_72 = 0.140625f;
	fLocal_73 = 0.3875f;
	fLocal_74 = 1f;
	fLocal_75 = 1f;
	fLocal_76 = 0.087f;
	fLocal_77 = 0.098f;
	fLocal_78 = 0.175f;
	fLocal_79 = 1f;
	fLocal_80 = 1f;
	fLocal_81 = 1.3333f;
	fLocal_82 = -0.106f;
	fLocal_83 = 0.635f;
	iLocal_101 = -1;
	iLocal_133 = -1;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_898(&iLocal_106);
	__LIB_37__::func_481();
	while (true)
	{
		func_881(&iLocal_106);
		switch (iLocal_64)
		{
			case 0:
				func_880();
				break;
			case 1:
				func_16();
				break;
			case 2:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x12A
{
	func_15();
	func_14();
	func_2(&iLocal_106);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_2(int* iParam0)//Position - 0x144
{
	struct<16> Var0;
	if (BitTest(*iParam0, 3))
	{
		func_13(0, iParam0);
	}
	if (BitTest(*iParam0, 12))
	{
		func_10(iParam0);
	}
	if (iParam0->f_3)
	{
		Var0 = { func_8() };
		__LIB_13__::func_311(&Var0, 1);
		iParam0->f_3 = 0;
	}
}

struct<16> func_8()//Position - 0x505
{
	return __LIB_38__::func_686("N_", "GE", "AP", "SW");
}

void func_10(int* iParam0)//Position - 0x541
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_39__::func_251());
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_38__::func_688());
	MISC::CLEAR_BIT(iParam0, 12);
}

void func_13(bool bParam0, int* iParam1)//Position - 0x57B
{
	if (bParam0)
	{
		MISC::SET_BIT(iParam1, 3);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 3);
	}
	MISC::CLEAR_BIT(iParam1, 29);
	MISC::CLEAR_BIT(iParam1, 6);
	MISC::CLEAR_BIT(iParam1, 30);
	MISC::CLEAR_BIT(iParam1, 16);
	iParam1->f_1 = MISC::GET_GAME_TIMER() + 1000;
}

void func_14()//Position - 0x5C3
{
	if (iLocal_101 != -1)
	{
		NETWORK::TEXTURE_DOWNLOAD_RELEASE(iLocal_101);
	}
	iLocal_101 = -1;
	sLocal_149 = "";
	iLocal_146 = 0;
	iLocal_147 = 0;
	iLocal_148 = 0;
}

void func_15()//Position - 0x5E7
{
	if (Global_23011)
	{
		iLocal_164 = 1;
		if (Global_23011.f_105 != -1 && Global_23011.f_106 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_23011.f_105);
			AUDIO::RELEASE_SOUND_ID(Global_23011.f_105);
			Global_23011.f_105 = -1;
			Global_23011.f_106 = 0;
			AUDIO::SET_AUDIO_FLAG("ActivateSwitchWheelAudio", false);
		}
	}
	if (iLocal_158)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_127))
		{
			HUD::REMOVE_BLIP(&iLocal_127);
		}
		HUD::SET_HEALTH_HUD_DISPLAY_VALUES(-1, -1, true);
		HUD::SET_ABILITY_BAR_VALUE(-1f, -1f);
		HUD::SET_MAX_HEALTH_HUD_DISPLAY(0);
		HUD::SET_MAX_ARMOUR_HUD_DISPLAY(0);
		HUD::UNLOCK_MINIMAP_POSITION();
	}
	iLocal_158 = 0;
	iLocal_97 = 0;
	iLocal_140 = 0;
	iLocal_96 = -1;
	iLocal_103 = -1;
	iLocal_160 = 0;
	Global_23011.f_11 = 0;
	Global_23011.f_69 = -1;
	Global_23011.f_1 = 0;
	Global_23011.f_4 = 0;
	Global_23011.f_121 = 1;
	Global_23011.f_104 = 0;
}

void func_16()//Position - 0x6A0
{
	func_132();
	func_18();
	func_17();
}

void func_17()//Position - 0x6B4
{
	Global_23011.f_3 = 0;
	Global_23011.f_2 = 0;
	Global_23011.f_70 = 0;
	Global_23011.f_11 = 0;
	Global_23011.f_12 = 0;
	Global_23011.f_121 = 1;
	Global_23011.f_122 = 1;
	Global_23011.f_123 = 0;
	Global_23011.f_9 = 0;
	Global_23011.f_10 = 0;
	Global_23011.f_7 = 0;
	Global_23011.f_8 = 0;
	Global_23011.f_125 = 0;
	if (uLocal_161 && !Global_23011.f_6)
	{
	}
	uLocal_161 = Global_23011.f_6;
	Global_23011.f_6 = 0;
	if (uLocal_136 && !Global_23011.f_134)
	{
	}
	uLocal_136 = Global_23011.f_134;
	Global_23011.f_134 = 0;
	if (Global_23011.f_17)
	{
		if ((MISC::GET_GAME_TIMER() - Global_23011.f_18) > 5000 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			Global_23011.f_17 = 0;
		}
	}
	bLocal_168 = Global_1836356;
	if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/) && !PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/))
	{
		Global_23011.f_130 = 0;
	}
	if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) && !PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
	{
		Global_23011.f_131 = 0;
	}
	if (((!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) && !PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)) && !PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 144 /*INPUT_PARACHUTE_DEPLOY*/)) && !PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 144 /*INPUT_PARACHUTE_DEPLOY*/))
	{
		Global_23011.f_132 = 0;
	}
	if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/) && !PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/))
	{
		Global_23011.f_133 = 0;
	}
}

void func_18()//Position - 0x805
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	int iVar8;
	char* sVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	int iVar13;
	float fVar14;
	struct<3> Var15;
	float fVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	float fVar22;
	float fVar23;
	int iVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bVar0 = false;
	bVar1 = false;
	bVar2 = true;
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	iVar6 = 0;
	if (__LIB_2__::func_65(Global_23011.f_121) || __LIB_13__::func_749(Global_23011.f_121))
	{
		Global_23011.f_124 = func_117(1);
		if (Global_23011.f_124)
		{
			if (Global_23011.f_104 == 4)
			{
				iVar6 = 4;
			}
			else if (Global_23011.f_104 == 0)
			{
				iVar6 = 1;
			}
			else if (Global_23011.f_104 == 1)
			{
				if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(Global_23011.f_115, 300)) || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_23011.f_115)) > 1300)) || ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !Global_23011.f_12) && (MISC::GET_GAME_TIMER() - Global_23011.f_114) > 200)) || ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_23011.f_12) && (MISC::GET_GAME_TIMER() - Global_23011.f_114) > 300))
				{
					iVar6 = 4;
				}
				else
				{
					iVar6 = 1;
				}
			}
			else if (Global_23011.f_104 == 2)
			{
				iVar6 = 3;
			}
			else if (Global_23011.f_104 == 3)
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(Global_23011.f_115, 300)) || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_23011.f_115)) > 1300)) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - Global_23011.f_114) > 300))
				{
					iVar6 = 4;
				}
				else
				{
					iVar6 = 3;
				}
			}
		}
	}
	else if (Global_23011.f_12 && Global_23011.f_70)
	{
		Global_23011.f_124 = func_117(0);
		if (Global_23011.f_124)
		{
			iVar6 = 2;
		}
	}
	else if (Global_23011.f_126)
	{
		Global_23011.f_124 = 1;
		iVar6 = 5;
		iLocal_102[__LIB_0__::func_476(0)] = 0;
		iLocal_102[__LIB_0__::func_476(2)] = 1;
		iLocal_102[__LIB_0__::func_476(1)] = 2;
		iLocal_102[__LIB_0__::func_476(3)] = 3;
		if (iLocal_103 != Global_23011.f_127)
		{
			Global_23011.f_3 = 1;
			Global_23011.f_129 = MISC::GET_GAME_TIMER();
			iLocal_105 = 0;
		}
		if (Global_23011.f_4)
		{
			if (!iLocal_105)
			{
				iLocal_104 = MISC::GET_GAME_TIMER();
				iLocal_105 = 1;
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_104) > 500)
			{
				Global_23011.f_126 = 0;
			}
		}
		else
		{
			if ((MISC::GET_GAME_TIMER() - Global_23011.f_129) > 2000)
			{
				Global_23011.f_126 = 0;
			}
			iLocal_105 = 0;
		}
	}
	else
	{
		Global_23011.f_124 = 0;
	}
	if (Global_23011.f_124)
	{
		iLocal_164 = 0;
	}
	if ((iVar6 == 0 && Global_23011.f_7) || Global_23011.f_9)
	{
		iVar6 = 1;
	}
	if (Global_23011.f_104 != iVar6)
	{
		if (((iLocal_97 != Global_23011.f_11 && Global_23011.f_69 != 2) && Global_23011.f_12) && !Global_78319)
		{
			Global_23011.f_13 = 1;
		}
		Global_23011.f_14 = 0;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			Global_23011.f_115 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			Global_23011.f_114 = MISC::GET_GAME_TIMER();
		}
		if (iVar6 != 5)
		{
			Global_23011.f_126 = 0;
		}
		Global_23011.f_3 = 1;
	}
	if ((Global_23011.f_124 || (iLocal_87 && !iLocal_164)) || Global_23011.f_7)
	{
		if (!Global_23011.f_9)
		{
			if (!HUD::IS_HUD_COMPONENT_ACTIVE(7))
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			}
			if (!HUD::IS_HUD_COMPONENT_ACTIVE(6))
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			}
			if (!HUD::IS_HUD_COMPONENT_ACTIVE(8))
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			}
			if (!HUD::IS_HUD_COMPONENT_ACTIVE(9))
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			}
		}
		func_115();
		func_102();
		func_99(&sVar7, 0);
	}
	if (Global_23011)
	{
		if ((!Global_23011.f_1 && iVar6 != 1) && iVar6 != 0)
		{
			func_70();
			iVar8 = 0;
			while (iVar8 <= 3)
			{
				uLocal_88[iVar8] = Global_23011.f_19[iVar8];
				uLocal_89[iVar8] = Global_23011.f_24[iVar8];
				uLocal_90[iVar8] = Global_23011.f_29[iVar8];
				uLocal_93[iVar8] = Global_23011.f_54[iVar8];
				uLocal_94[iVar8] = Global_23011.f_59[iVar8];
				iVar8++;
			}
			uLocal_91[0] = Global_23011.f_34[0];
			uLocal_91[1] = Global_23011.f_34[1];
			uLocal_91[2] = Global_23011.f_34[2];
			uLocal_91[3] = Global_23011.f_34[3];
			uLocal_92[0] = Global_23011.f_49[0];
			uLocal_92[1] = Global_23011.f_49[1];
			uLocal_92[2] = Global_23011.f_49[2];
			uLocal_92[3] = Global_23011.f_49[3];
			iLocal_98 = 0;
			iLocal_95 = -1;
			iLocal_140 = 0;
			Global_23011.f_1 = 1;
			Global_23011.f_15 = 1;
			Global_23011.f_3 = 1;
		}
		if (Global_23011.f_1 || iVar6 == 0)
		{
			if (iVar6 == 2 || iVar6 == 3)
			{
				iVar8 = 0;
				while (iVar8 <= 3)
				{
					if (((uLocal_88[iVar8] != Global_23011.f_19[iVar8] || uLocal_89[iVar8] != Global_23011.f_24[iVar8]) || uLocal_90[iVar8] != Global_23011.f_29[iVar8]) || Global_23011.f_3)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_SWITCH_SLOT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
						if (Global_23011.f_19[iVar8] == 1 && Global_23011.f_29[iVar8] != 1)
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
						}
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23011.f_24[iVar8]);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						uLocal_88[iVar8] = Global_23011.f_19[iVar8];
						uLocal_89[iVar8] = Global_23011.f_24[iVar8];
						uLocal_90[iVar8] = Global_23011.f_29[iVar8];
						bVar3 = true;
					}
					if ((uLocal_93[iVar8] != Global_23011.f_54[iVar8] || uLocal_94[iVar8] != Global_23011.f_59[iVar8]) || Global_23011.f_3)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_PLAYER_DAMAGE");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(__LIB_0__::func_476(iVar8));
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Global_23011.f_54[iVar8]);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Global_23011.f_59[iVar8]);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						uLocal_93[iVar8] = Global_23011.f_54[iVar8];
						uLocal_94[iVar8] = Global_23011.f_59[iVar8];
					}
					if (uLocal_92[iVar8] != Global_23011.f_49[iVar8] || Global_23011.f_3)
					{
						bVar4 = true;
					}
					if (uLocal_91[iVar8] != Global_23011.f_34[iVar8] || Global_23011.f_3)
					{
						bVar3 = true;
					}
					iVar8++;
				}
				if (bVar4)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_SWITCH_HINTED_ALL");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Global_23011.f_49[func_69(0)]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Global_23011.f_49[func_69(1)]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Global_23011.f_49[func_69(2)]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Global_23011.f_49[func_69(3)]);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uLocal_92[0] = Global_23011.f_49[0];
					uLocal_92[1] = Global_23011.f_49[1];
					uLocal_92[2] = Global_23011.f_49[2];
					uLocal_92[3] = Global_23011.f_49[3];
					bVar4 = false;
				}
				if (bVar3)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_SWITCH_COUNTER_ALL");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23011.f_34[func_69(0)]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23011.f_34[func_69(1)]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23011.f_34[func_69(2)]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23011.f_34[func_69(3)]);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uLocal_91[0] = Global_23011.f_34[0];
					uLocal_91[1] = Global_23011.f_34[1];
					uLocal_91[2] = Global_23011.f_34[2];
					uLocal_91[3] = Global_23011.f_34[3];
					bVar3 = false;
				}
				if (iLocal_98 != Global_23011.f_124 || Global_23011.f_3)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_SWITCH_VISIBLE");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_PLAYER_SELECTED");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_95 = -1;
					iLocal_140 = 0;
					iLocal_98 = Global_23011.f_124;
				}
			}
			else if (iVar6 == 4)
			{
				iVar8 = 0;
				while (iVar8 <= 3)
				{
					if (((uLocal_88[iVar8] != Global_23011.f_19[iVar8] || uLocal_89[iVar8] != Global_23011.f_24[iVar8]) || uLocal_90[iVar8] != Global_23011.f_29[iVar8]) || Global_23011.f_3)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_SWITCH_SLOT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23011.f_19[iVar8]);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23011.f_24[iVar8]);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Global_23011.f_29[iVar8] == 1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						uLocal_88[iVar8] = Global_23011.f_19[iVar8];
						uLocal_89[iVar8] = Global_23011.f_24[iVar8];
						uLocal_90[iVar8] = Global_23011.f_29[iVar8];
					}
					if ((uLocal_93[iVar8] != Global_23011.f_54[iVar8] || uLocal_94[iVar8] != Global_23011.f_59[iVar8]) || Global_23011.f_3)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_PLAYER_DAMAGE");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(__LIB_0__::func_476(iVar8));
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Global_23011.f_54[iVar8]);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Global_23011.f_59[iVar8]);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						uLocal_93[iVar8] = Global_23011.f_54[iVar8];
						uLocal_94[iVar8] = Global_23011.f_59[iVar8];
					}
					if (uLocal_92[iVar8] != Global_23011.f_49[iVar8] || Global_23011.f_3)
					{
						bVar4 = true;
					}
					if (uLocal_91[iVar8] != Global_23011.f_34[iVar8] || Global_23011.f_3)
					{
						bVar3 = true;
					}
					iVar8++;
				}
				if (bVar4)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_SWITCH_HINTED_ALL");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Global_23011.f_49[func_69(0)]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Global_23011.f_49[func_69(1)]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Global_23011.f_49[func_69(2)]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Global_23011.f_49[func_69(3)]);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uLocal_92[0] = Global_23011.f_49[0];
					uLocal_92[1] = Global_23011.f_49[1];
					uLocal_92[2] = Global_23011.f_49[2];
					uLocal_92[3] = Global_23011.f_49[3];
					bVar4 = false;
				}
				if (bVar3)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_SWITCH_COUNTER_ALL");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23011.f_34[func_69(0)]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23011.f_34[func_69(1)]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23011.f_34[func_69(2)]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23011.f_34[func_69(3)]);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uLocal_91[0] = Global_23011.f_34[0];
					uLocal_91[1] = Global_23011.f_34[1];
					uLocal_91[2] = Global_23011.f_34[2];
					uLocal_91[3] = Global_23011.f_34[3];
					bVar3 = false;
				}
				if (iLocal_146 && !iLocal_147)
				{
					if (__LIB_0__::func_39(14))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_MULTIPLAYER_HEAD");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("director");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					else if ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)) && !__LIB_0__::func_2(0))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_MULTIPLAYER_HEAD");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sLocal_149);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					iLocal_147 = 1;
				}
				if (iLocal_98 != Global_23011.f_124 || Global_23011.f_3)
				{
					if (Global_23011.f_124)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_SWITCH_VISIBLE");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						if (iLocal_95 == -1)
						{
							iLocal_140 = 0;
						}
						else
						{
							iLocal_140 = 1;
						}
					}
					else
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_SWITCH_VISIBLE");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_PLAYER_SELECTED");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_95 = -1;
						iLocal_140 = 0;
					}
					iLocal_98 = Global_23011.f_124;
				}
				if ((iLocal_154 || uLocal_155) || Global_23011.f_3)
				{
					func_99(&sVar9, 1);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_MP_LABEL");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(&sVar9);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_154 = 0;
					iLocal_156 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_157 = NETWORK::GET_NETWORK_TIME();
					}
				}
				else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_157, 1000))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_156) > 1000))
				{
					iLocal_154 = 1;
				}
				PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 12 /*INPUT_WEAPON_WHEEL_UD*/);
				PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 13 /*INPUT_WEAPON_WHEEL_LR*/);
				fVar10 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 12 /*INPUT_WEAPON_WHEEL_UD*/);
				fVar11 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 13 /*INPUT_WEAPON_WHEEL_LR*/);
				bVar12 = true;
				iVar13 = -1;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/))
					{
						fVar10 = 0f;
						fVar11 = -1f;
						Global_23011.f_69 = 3;
						Global_23011.f_14 = 1;
					}
					else if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/))
					{
						fVar10 = -1f;
						fVar11 = 0f;
						Global_23011.f_69 = 0;
						Global_23011.f_14 = 1;
					}
					else if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/))
					{
						fVar10 = 0f;
						fVar11 = 1f;
						Global_23011.f_69 = 1;
						Global_23011.f_14 = 1;
					}
					else if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/))
					{
						fVar10 = 1f;
						fVar11 = 0f;
						Global_23011.f_69 = 2;
						Global_23011.f_14 = 1;
					}
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(0f, 0f, 0f, fVar11, fVar10, 0f, true) <= 0.3f)
				{
					bVar12 = false;
					Global_23011.f_15 = 0;
				}
				if (bVar12)
				{
					fVar14 = 90f;
					Var15 = { __LIB_0__::func_79(fVar11, fVar10, 0f) };
					fVar16 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(0f, -1f, Var15.f_0, Var15.f_1);
					if (fVar11 < 0f)
					{
						fVar16 = (360f - fVar16);
					}
					if ((fVar16 >= 0f && fVar16 <= (0f + (fVar14 / 2f))) || (fVar16 >= (360f - (fVar14 / 2f)) && fVar16 <= 360f))
					{
						iVar13 = 0;
					}
					else if (fVar16 >= (90f - (fVar14 / 2f)) && fVar16 <= (90f + (fVar14 / 2f)))
					{
						iVar13 = 1;
					}
					else if (fVar16 >= (180f - (fVar14 / 2f)) && fVar16 <= (180f + (fVar14 / 2f)))
					{
						iVar13 = 2;
					}
					else if (fVar16 >= (270f - (fVar14 / 2f)) && fVar16 <= (270f + (fVar14 / 2f)))
					{
						iVar13 = 3;
					}
				}
				if (((bVar12 && Global_23011.f_15) && iLocal_96 == -1) && Global_23011.f_69 != -1)
				{
					iLocal_96 = iVar13;
				}
				if (iLocal_96 != -1 && iVar13 != iLocal_96)
				{
					Global_23011.f_15 = 0;
				}
				if (bVar12 && !Global_23011.f_15)
				{
					Global_23011.f_69 = iVar13;
					Global_23011.f_14 = 1;
				}
				if (iLocal_95 != Global_23011.f_69)
				{
					if (!Global_23011.f_111)
					{
						if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || iLocal_95 != -1)
						{
							AUDIO::PLAY_SOUND(-1, "CHARACTER_CHANGE_CHARACTER_01_MASTER", 0, false, 0, false);
						}
					}
				}
				if (iLocal_95 != Global_23011.f_69 || Global_23011.f_3)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_PLAYER_SELECTED");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23011.f_69);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_95 = Global_23011.f_69;
					func_70();
					iLocal_140 = 0;
					if ((((iLocal_95 != -1 && (Global_23011.f_19[iLocal_95] != 3 || iLocal_95 == 2)) && Global_23011.f_24[iLocal_95] != 4) && Global_23011.f_24[iLocal_95] != 5) && Global_23011.f_24[iLocal_95] != 6)
					{
						if (iLocal_95 == 0)
						{
							iLocal_140 = 1;
						}
						else if (iLocal_95 == 1)
						{
							iLocal_140 = 1;
						}
						else if (iLocal_95 == 2)
						{
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !__LIB_0__::func_39(14))
							{
								iLocal_140 = 1;
							}
						}
						else if (iLocal_95 == 3)
						{
							iLocal_140 = 1;
						}
					}
				}
				if (iLocal_97 != Global_23011.f_11)
				{
					iLocal_97 = Global_23011.f_11;
					if (Global_23011.f_105 != -1 && Global_23011.f_106 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
					{
						AUDIO::STOP_SOUND(Global_23011.f_105);
						AUDIO::RELEASE_SOUND_ID(Global_23011.f_105);
						Global_23011.f_105 = -1;
						Global_23011.f_106 = 0;
					}
					if (Global_23011.f_112)
					{
						GRAPHICS::ANIMPOSTFX_STOP("SwitchHUDMichaelIn");
						GRAPHICS::ANIMPOSTFX_STOP("SwitchHUDFranklinIn");
						GRAPHICS::ANIMPOSTFX_STOP("SwitchHUDTrevorIn");
						GRAPHICS::ANIMPOSTFX_STOP("SwitchHUDIn");
						switch (__LIB_14__::func_466())
						{
							case 0:
								if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("SwitchOpenMichaelIn") && !GRAPHICS::ANIMPOSTFX_IS_RUNNING("SwitchShortMichaelIn"))
								{
									GRAPHICS::ANIMPOSTFX_PLAY("SwitchHUDMichaelOut", 0, false);
								}
								break;
							case 1:
								if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("SwitchOpenFranklinIn") && !GRAPHICS::ANIMPOSTFX_IS_RUNNING("SwitchShortFranklinIn"))
								{
									GRAPHICS::ANIMPOSTFX_PLAY("SwitchHUDFranklinOut", 0, false);
								}
								break;
							case 2:
								if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("SwitchOpenTrevorIn") && !GRAPHICS::ANIMPOSTFX_IS_RUNNING("SwitchShortTrevorIn"))
								{
									GRAPHICS::ANIMPOSTFX_PLAY("SwitchHUDTrevorOut", 0, false);
								}
								break;
							default:
								GRAPHICS::ANIMPOSTFX_PLAY("SwitchHUDOut", 0, false);
								break;
						}
						AUDIO::SET_AUDIO_FLAG("ActivateSwitchWheelAudio", false);
						Global_23011.f_112 = 0;
					}
				}
			}
			else if (iVar6 == 5)
			{
				iVar8 = 0;
				while (iVar8 <= 3)
				{
					if (Global_23011.f_3)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_SWITCH_SLOT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
						if (Global_23011.f_127 == iVar8)
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_102[iVar8]);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_102[iVar8]);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						}
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_PLAYER_DAMAGE");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(__LIB_0__::func_476(iVar8));
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					iVar8++;
				}
				if (Global_23011.f_3)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_SWITCH_HINTED_ALL");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_SWITCH_COUNTER_ALL");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_SWITCH_VISIBLE");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_PLAYER_SELECTED");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23011.f_127);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_103 = Global_23011.f_127;
					iLocal_95 = -1;
					iLocal_140 = 0;
					iLocal_98 = Global_23011.f_124;
				}
			}
			else if (iVar6 == 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_SWITCH_VISIBLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_84, "SET_PLAYER_SELECTED");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iLocal_95 = -1;
				iLocal_140 = 0;
				if (((((((!MISC::IS_PC_VERSION() && __LIB_0__::func_3() != 0) && __LIB_0__::func_3() != 2) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !__LIB_0__::func_201()) && !__LIB_0__::func_477()) && !__LIB_1__::func_732(PLAYER::PLAYER_PED_ID())) && Global_23011.f_104 != 5)
				{
					HUD::SHOW_HUD_COMPONENT_THIS_FRAME(6);
					HUD::SHOW_HUD_COMPONENT_THIS_FRAME(7);
					HUD::SHOW_HUD_COMPONENT_THIS_FRAME(8);
					HUD::SHOW_HUD_COMPONENT_THIS_FRAME(9);
				}
				func_15();
				func_14();
			}
			else if (iVar6 == 1)
			{
			}
		}
		Global_23011.f_104 = iVar6;
	}
	if (Global_23011 && Global_23011.f_1)
	{
		if (Global_23011.f_104 == 4)
		{
			if (Global_23011.f_4)
			{
				if (!Global_23011.f_111)
				{
					if (Global_23011.f_105 == -1)
					{
						Global_23011.f_105 = AUDIO::GET_SOUND_ID();
						Global_23011.f_106 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							AUDIO::PLAY_SOUND(Global_23011.f_105, "CHARACTER_CHANGE_DPAD_DOWN_MP_MASTER", 0, false, 0, false);
						}
						else
						{
							AUDIO::PLAY_SOUND(Global_23011.f_105, "CHARACTER_CHANGE_DPAD_DOWN_MASTER", 0, false, 0, false);
						}
					}
				}
				if (!Global_23011.f_112)
				{
					switch (__LIB_14__::func_466())
					{
						case 0:
							GRAPHICS::ANIMPOSTFX_PLAY("SwitchHUDMichaelIn", 0, false);
							break;
						case 1:
							GRAPHICS::ANIMPOSTFX_PLAY("SwitchHUDFranklinIn", 0, false);
							break;
						case 2:
							GRAPHICS::ANIMPOSTFX_PLAY("SwitchHUDTrevorIn", 0, false);
							break;
						default:
							GRAPHICS::ANIMPOSTFX_PLAY("SwitchHUDIn", 0, false);
							break;
					}
					AUDIO::SET_AUDIO_FLAG("ActivateSwitchWheelAudio", true);
					Global_23011.f_112 = 1;
				}
			}
		}
		else if (Global_23011.f_104 == 2)
		{
			iVar5 = 1;
		}
		if (Global_23011.f_124)
		{
			if (Global_23011.f_104 == 4)
			{
				bLocal_143 = true;
				bVar0 = true;
				if (iLocal_140 && !bLocal_86)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						bVar1 = true;
					}
					else if (Global_23011.f_69 == 0)
					{
						if (BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[27 /*3*/], 2) || !BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[27 /*3*/], 1))
						{
							bVar1 = true;
						}
					}
					else if (Global_23011.f_69 == 1)
					{
						if (BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[27 /*3*/], 2) || !BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[27 /*3*/], 1))
						{
							bVar1 = true;
						}
					}
					else if (Global_23011.f_69 == 2)
					{
						if ((((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)) && !__LIB_0__::func_2(0)) && __LIB_0__::func_438()) && __LIB_27__::func_322(__LIB_0__::func_5()))
						{
							bVar1 = true;
						}
					}
					else if (Global_23011.f_69 == 3)
					{
						if (BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[27 /*3*/], 2) || !BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[27 /*3*/], 1))
						{
							bVar1 = true;
						}
					}
					if (__LIB_0__::func_39(14))
					{
						bVar1 = false;
					}
					if (bVar1)
					{
						if (GRAPHICS::GET_IS_WIDESCREEN())
						{
							HUD::SET_WIDESCREEN_FORMAT(3);
						}
						GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
						GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
						func_49(&fLocal_70);
						if (!bLocal_151)
						{
							GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_85, (fLocal_70 + (((fLocal_72 * fLocal_74) * fLocal_81) * 0.5f)), fLocal_71, ((fLocal_72 * fLocal_74) * fLocal_81), (fLocal_73 * fLocal_75), 255, 255, 255, 255, 0);
						}
						GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
						if (Global_23011.f_69 == 0)
						{
							iVar17 = 1;
						}
						else if (Global_23011.f_69 == 1)
						{
							iVar17 = 2;
						}
						else if (Global_23011.f_69 == 2)
						{
							iVar17 = 3;
						}
						else if (Global_23011.f_69 == 3)
						{
							iVar17 = 0;
						}
						if (!__LIB_0__::func_78(Global_23011.f_81[iVar17 /*3*/], 0f, 0f, 0f, 0) && !Global_23011.f_8)
						{
							if (!HUD::DOES_BLIP_EXIST(iLocal_127))
							{
								iLocal_127 = HUD::ADD_BLIP_FOR_COORD(Global_23011.f_81[iVar17 /*3*/]);
								HUD::SET_BLIP_COLOUR(iLocal_127, 3);
							}
							HUD::SET_BLIP_COORDS(iLocal_127, Global_23011.f_81[iVar17 /*3*/]);
							if (Global_23011.f_71[iVar17] == -1)
							{
								HUD::SET_HEALTH_HUD_DISPLAY_VALUES(-1, -1, true);
								HUD::SET_ABILITY_BAR_VALUE(-1f, -1f);
								HUD::SET_MAX_HEALTH_HUD_DISPLAY(0);
								HUD::SET_MAX_ARMOUR_HUD_DISPLAY(0);
							}
							else
							{
								HUD::SET_MAX_HEALTH_HUD_DISPLAY(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()));
								HUD::SET_MAX_ARMOUR_HUD_DISPLAY(100);
								HUD::SET_HEALTH_HUD_DISPLAY_VALUES(SYSTEM::FLOOR((SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) * (SYSTEM::TO_FLOAT(Global_23011.f_71[iVar17]) / 100f))), Global_23011.f_76[iVar17], true);
								HUD::SET_ABILITY_BAR_VALUE(SYSTEM::TO_FLOAT(Global_23011.f_94[iVar17]), SYSTEM::TO_FLOAT(Global_23011.f_99[iVar17]));
							}
							HUD::LOCK_MINIMAP_POSITION(Global_23011.f_81[iVar17 /*3*/], Global_23011.f_81[iVar17 /*3*/].f_1);
							iLocal_158 = 1;
							bVar2 = false;
						}
					}
				}
				func_47();
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (__LIB_0__::func_374(__LIB_14__::func_466()))
					{
						if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						{
							PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
						}
					}
				}
				if (Global_23011.f_4)
				{
					if (!__LIB_0__::func_39(14))
					{
						if (__LIB_13__::func_102() != 53)
						{
							HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
						}
						HUD::SHOW_HUD_COMPONENT_THIS_FRAME(2);
					}
				}
				if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !MISC::IS_STRING_NULL_OR_EMPTY(&Global_63169)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (((__LIB_0__::func_39(0) || __LIB_0__::func_39(2)) || __LIB_0__::func_39(3)) || __LIB_0__::func_39(4))
					{
						if (Global_23011.f_4)
						{
							GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
							GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_82, 0f, 0f, 0f);
							HUD::SET_TEXT_SCALE(0.67f, 0.67f);
							HUD::SET_TEXT_FONT(1);
							HUD::SET_TEXT_JUSTIFICATION(2);
							switch (__LIB_14__::func_466())
							{
								case 0:
									HUD::GET_HUD_COLOUR(143, &iVar18, &iVar19, &iVar20, &iVar21);
									break;
								case 1:
									HUD::GET_HUD_COLOUR(144, &iVar18, &iVar19, &iVar20, &iVar21);
									break;
								case 2:
									HUD::GET_HUD_COLOUR(145, &iVar18, &iVar19, &iVar20, &iVar21);
									break;
								default:
									iVar18 = 240;
									iVar19 = 200;
									iVar20 = 80;
									break;
							}
							HUD::SET_TEXT_COLOUR(iVar18, iVar19, iVar20, iVar21);
							HUD::SET_TEXT_DROP_SHADOW();
							HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Global_63169);
							HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fLocal_82, fLocal_83, 0);
							GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
						}
					}
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
				HUD::SET_WIDESCREEN_FORMAT(3);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
				if (!bLocal_151)
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_84, (((fLocal_77 * fLocal_79) * fLocal_81) * 0.5f), fLocal_76, ((fLocal_77 * fLocal_79) * fLocal_81), (fLocal_78 * fLocal_80), 255, 255, 255, 255, 0);
				}
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				Global_23011.f_4 = 1;
			}
			else if ((Global_23011.f_104 == 2 || Global_23011.f_104 == 3) || Global_23011.f_104 == 5)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::SET_WIDESCREEN_FORMAT(3);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
				if (!bLocal_151)
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_84, (((fLocal_77 * fLocal_79) * fLocal_81) * 0.5f), fLocal_76, ((fLocal_77 * fLocal_79) * fLocal_81), (fLocal_78 * fLocal_80), 255, 255, 255, 255, 0);
				}
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				Global_23011.f_4 = 1;
			}
		}
	}
	if (Global_23011.f_104 != 4)
	{
		if (Global_23011.f_105 != -1 && Global_23011.f_106 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_23011.f_105);
			AUDIO::RELEASE_SOUND_ID(Global_23011.f_105);
			Global_23011.f_105 = -1;
			Global_23011.f_106 = 0;
		}
	}
	if (Global_23011.f_4 && Global_23011.f_104 == 4)
	{
		HUD::HUD_SHOWING_CHARACTER_SWITCH_SELECTION(true);
	}
	else
	{
		HUD::HUD_SHOWING_CHARACTER_SWITCH_SELECTION(false);
	}
	if (!bVar0)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			bVar0 = true;
			bLocal_143 = false;
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
			{
				bVar0 = false;
			}
			else if (STREAMING::GET_PLAYER_SWITCH_STATE() > 3)
			{
				bVar0 = false;
			}
		}
	}
	if (!bVar0)
	{
		if (Global_23011.f_112)
		{
			GRAPHICS::ANIMPOSTFX_STOP("SwitchHUDMichaelIn");
			GRAPHICS::ANIMPOSTFX_STOP("SwitchHUDFranklinIn");
			GRAPHICS::ANIMPOSTFX_STOP("SwitchHUDTrevorIn");
			GRAPHICS::ANIMPOSTFX_STOP("SwitchHUDIn");
			AUDIO::SET_AUDIO_FLAG("ActivateSwitchWheelAudio", false);
			if (Global_23011.f_113)
			{
			}
			else if (bLocal_143)
			{
				switch (__LIB_14__::func_466())
				{
					case 0:
						if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("SwitchOpenMichaelIn") && !GRAPHICS::ANIMPOSTFX_IS_RUNNING("SwitchShortMichaelIn"))
						{
							GRAPHICS::ANIMPOSTFX_PLAY("SwitchHUDMichaelOut", 0, false);
						}
						break;
					case 1:
						if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("SwitchOpenFranklinIn") && !GRAPHICS::ANIMPOSTFX_IS_RUNNING("SwitchShortFranklinIn"))
						{
							GRAPHICS::ANIMPOSTFX_PLAY("SwitchHUDFranklinOut", 0, false);
						}
						break;
					case 2:
						if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("SwitchOpenTrevorIn") && !GRAPHICS::ANIMPOSTFX_IS_RUNNING("SwitchShortTrevorIn"))
						{
							GRAPHICS::ANIMPOSTFX_PLAY("SwitchHUDTrevorOut", 0, false);
						}
						break;
					default:
						if (__LIB_0__::func_3() == 0)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("SwitchHUDOut", 0, false);
						}
						break;
				}
			}
			Global_23011.f_112 = 0;
		}
	}
	if (bVar0 != bLocal_142)
	{
		if (fLocal_144 == fLocal_141)
		{
			iLocal_145 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_145 = ((MISC::GET_GAME_TIMER() - 250) + (MISC::GET_GAME_TIMER() - iLocal_145));
		}
		if (bVar0)
		{
			fLocal_144 = 0.1f;
			bLocal_142 = true;
		}
		else
		{
			fLocal_144 = 1f;
			bLocal_142 = false;
		}
	}
	if (fLocal_144 != fLocal_141)
	{
		fVar23 = (SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_145)) / (250f * fLocal_141));
		if (bLocal_142)
		{
			fVar22 = (1f - (fVar23 * 0.9f));
			if (fVar22 <= 0.111111f)
			{
				fVar22 = 0.1f;
			}
		}
		else
		{
			fVar22 = (0.1f + (fVar23 * 0.9f));
			if (fVar22 >= 0.999999f)
			{
				fVar22 = 1f;
			}
		}
		iVar24 = 0;
		if (__LIB_0__::func_39(14))
		{
			iVar24 = 1;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			fVar22 = 1f;
		}
		else if (__LIB_0__::func_629())
		{
			fVar22 = 1f;
		}
		else if (!__LIB_0__::func_374(__LIB_14__::func_466()))
		{
		}
		else if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
		{
		}
		else
		{
			iVar24 = 1;
		}
		if (iVar24 || fVar22 > fLocal_141)
		{
			MISC::SET_TIME_SCALE(fVar22);
		}
		fLocal_141 = fVar22;
	}
	bVar25 = false;
	bVar26 = false;
	if (NETWORK::NETWORK_IS_SIGNED_IN() || MISC::IS_PC_VERSION())
	{
		if (__LIB_0__::func_67(66) && __LIB_0__::func_67(67))
		{
			if (!__LIB_0__::func_67(72))
			{
				switch (__LIB_13__::func_121("AM_H_EDIT_3" /* GXT: Once you've recorded your clip, hold ~INPUT_CHARACTER_WHEEL~ and press ~INPUT_REPLAY_START_STOP_RECORDING~ to save the recording, or ~INPUT_SAVE_REPLAY_CLIP~ to discard it.~n~Clips will continue to be saved until you stop recording. */))
				{
					case 2:
						if (RECORDING::IS_REPLAY_RECORDING() && iLocal_131 == 1)
						{
							__LIB_0__::func_697("AM_H_EDIT_3" /* GXT: Once you've recorded your clip, hold ~INPUT_CHARACTER_WHEEL~ and press ~INPUT_REPLAY_START_STOP_RECORDING~ to save the recording, or ~INPUT_SAVE_REPLAY_CLIP~ to discard it.~n~Clips will continue to be saved until you stop recording. */, 1, 0, -1, 10000, 7, 0, 0, 0);
						}
						break;
					case 1:
						__LIB_0__::func_592(72);
						break;
					}
			}
			if (!__LIB_0__::func_67(73))
			{
				switch (__LIB_13__::func_121("AM_H_EDIT_4" /* GXT: Save an Action Replay after it happens, by holding ~INPUT_CHARACTER_WHEEL~ and pressing ~INPUT_REPLAY_START_STOP_RECORDING~.~n~Turn off Action Replay mode by holding ~INPUT_CHARACTER_WHEEL~ and pressing ~INPUT_SAVE_REPLAY_CLIP~.~n~Action Replay clips may vary in length depending on how much is going on. */))
				{
					case 2:
						if (RECORDING::IS_REPLAY_RECORDING() && iLocal_131 == 0)
						{
							__LIB_0__::func_697("AM_H_EDIT_4" /* GXT: Save an Action Replay after it happens, by holding ~INPUT_CHARACTER_WHEEL~ and pressing ~INPUT_REPLAY_START_STOP_RECORDING~.~n~Turn off Action Replay mode by holding ~INPUT_CHARACTER_WHEEL~ and pressing ~INPUT_SAVE_REPLAY_CLIP~.~n~Action Replay clips may vary in length depending on how much is going on. */, 1, 0, -1, 10000, 7, 0, 0, 0);
						}
						break;
					case 1:
						__LIB_0__::func_592(73);
						break;
					}
				}
		}
		if (__LIB_2__::func_65(0) || (MISC::IS_PC_VERSION() && PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/)))
		{
			bVar25 = func_22();
			iLocal_137 = MISC::GET_GAME_TIMER() + 250;
			if (bVar25)
			{
				if (Global_23011.f_124)
				{
					if (((Global_23011.f_4 && Global_23011) && Global_23011.f_1) && Global_23011.f_104 == 4)
					{
						bVar26 = true;
					}
				}
				else if (__LIB_2__::func_65(0))
				{
					bVar26 = true;
				}
			}
		}
		if (__LIB_2__::func_65(0))
		{
			if (bVar25)
			{
				Global_116 = MISC::GET_GAME_TIMER() + 500;
			}
		}
		func_21(&bVar26);
		if (bVar26)
		{
			if (!Global_23011.f_135)
			{
				iVar27 = 0;
				while (iVar27 < iLocal_132)
				{
					iLocal_132[iVar27] = -1;
					iVar27++;
				}
				HUD::THEFEED_FLUSH_QUEUE();
				HUD::THEFEED_SET_SNAP_FEED_ITEM_POSITIONS(true);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4 && !PLAYER::GET_IS_USING_HOOD_CAMERA())
				{
					HUD::THEFEED_FREEZE_NEXT_POST();
					HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("REC_FEED_WAR" /* GXT: When recording in First Person you will not be able to make changes to the cameras within the Rockstar Editor. */);
					iLocal_132[0] = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
				}
				if (RECORDING::IS_REPLAY_RECORDING())
				{
					if (iLocal_131 == 1)
					{
						HUD::THEFEED_FREEZE_NEXT_POST();
						HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("REC_FEED_5" /* GXT: Save Recording */);
						iLocal_132[1] = HUD::END_TEXT_COMMAND_THEFEED_POST_REPLAY_INPUT(1, "~INPUT_REPLAY_START_STOP_RECORDING~", "");
						HUD::THEFEED_FREEZE_NEXT_POST();
						HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("REC_FEED_4" /* GXT: Cancel Recording */);
						iLocal_132[2] = HUD::END_TEXT_COMMAND_THEFEED_POST_REPLAY_INPUT(1, "~INPUT_SAVE_REPLAY_CLIP~", "");
					}
					else if (iLocal_131 == 0)
					{
						HUD::THEFEED_FREEZE_NEXT_POST();
						HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("REC_FEED_3" /* GXT: Save Action Replay */);
						iLocal_132[1] = HUD::END_TEXT_COMMAND_THEFEED_POST_REPLAY_INPUT(1, "~INPUT_REPLAY_START_STOP_RECORDING~", "");
						HUD::THEFEED_FREEZE_NEXT_POST();
						HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("REC_FEED_2" /* GXT: Turn Off<br>Action Replay */);
						iLocal_132[2] = HUD::END_TEXT_COMMAND_THEFEED_POST_REPLAY_INPUT(1, "~INPUT_SAVE_REPLAY_CLIP~", "");
					}
				}
				else
				{
					HUD::THEFEED_FREEZE_NEXT_POST();
					HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("REC_FEED_1" /* GXT: Start Recording */);
					iLocal_132[1] = HUD::END_TEXT_COMMAND_THEFEED_POST_REPLAY_INPUT(1, "~INPUT_REPLAY_START_STOP_RECORDING~", "");
					HUD::THEFEED_FREEZE_NEXT_POST();
					HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("REC_FEED_0" /* GXT: Turn On<br>Action Replay */);
					iLocal_132[2] = HUD::END_TEXT_COMMAND_THEFEED_POST_REPLAY_INPUT(1, "~INPUT_REPLAY_START_STOP_RECORDING_SECONDARY~", "");
				}
				HUD::THEFEED_PAUSE();
				Global_23011.f_135 = 1;
			}
		}
		else
		{
			func_20();
		}
		if (iLocal_133 != -1)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_134) > 4000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_135)) > 4000))
			{
				HUD::THEFEED_REMOVE_ITEM(iLocal_133);
				iLocal_133 = -1;
			}
		}
		if (bVar25)
		{
			bVar28 = false;
			bVar29 = false;
			bVar30 = false;
			bVar31 = false;
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				bVar28 = PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 288 /*INPUT_REPLAY_START_STOP_RECORDING*/);
				bVar29 = PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 170 /*INPUT_SAVE_REPLAY_CLIP*/);
				bVar30 = PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 289 /*INPUT_REPLAY_START_STOP_RECORDING_SECONDARY*/);
			}
			else if (__LIB_2__::func_65(0))
			{
				bVar28 = (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 288 /*INPUT_REPLAY_START_STOP_RECORDING*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 288 /*INPUT_REPLAY_START_STOP_RECORDING*/));
				bVar29 = (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 170 /*INPUT_SAVE_REPLAY_CLIP*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 170 /*INPUT_SAVE_REPLAY_CLIP*/));
				bVar30 = (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 289 /*INPUT_REPLAY_START_STOP_RECORDING_SECONDARY*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 289 /*INPUT_REPLAY_START_STOP_RECORDING_SECONDARY*/));
			}
			if (RECORDING::IS_REPLAY_RECORDING())
			{
				if (bVar28)
				{
					if (iLocal_131 == 0)
					{
						RECORDING::SAVE_REPLAY_RECORDING();
					}
					else
					{
						RECORDING::STOP_REPLAY_RECORDING();
					}
					bVar31 = true;
				}
				else if (bVar29)
				{
					RECORDING::CANCEL_REPLAY_RECORDING();
					if (iLocal_131 == 0)
					{
						iLocal_130 = 1;
					}
					bVar31 = true;
				}
			}
			else if (bVar28)
			{
				RECORDING::START_REPLAY_RECORDING(1);
				if (RECORDING::IS_REPLAY_RECORD_SPACE_AVAILABLE(false))
				{
					iLocal_131 = 1;
				}
				bVar31 = true;
			}
			else if (bVar30)
			{
				RECORDING::START_REPLAY_RECORDING(0);
				if (RECORDING::IS_REPLAY_RECORD_SPACE_AVAILABLE(false))
				{
					iLocal_131 = 0;
					iLocal_129 = 1;
				}
				bVar31 = true;
			}
			if (bVar31)
			{
				Global_23011.f_130 = 1;
				Global_23011.f_131 = bVar29;
				Global_23011.f_132 = bVar28;
				Global_23011.f_133 = bVar30;
			}
		}
	}
	else
	{
		func_20();
	}
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("creator")) == 0)
		{
			if ((Global_23011.f_131 || bVar25) || iLocal_137 > MISC::GET_GAME_TIMER())
			{
				PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
				if (HUD::GET_PAUSE_MENU_STATE() == 0)
				{
					PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true);
				}
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
			}
			if ((Global_23011.f_132 || bVar25) || iLocal_137 > MISC::GET_GAME_TIMER())
			{
				PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
				if (HUD::GET_PAUSE_MENU_STATE() == 0)
				{
					PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true);
				}
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 144 /*INPUT_PARACHUTE_DEPLOY*/, true);
			}
			if ((Global_23011.f_133 || bVar25) || iLocal_137 > MISC::GET_GAME_TIMER())
			{
				PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/);
				if (HUD::GET_PAUSE_MENU_STATE() == 0)
				{
					PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/, true);
				}
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			}
		}
	}
	bVar32 = false;
	while (bVar32 < 3)
	{
		if (BitTest(Global_23010, bVar32))
		{
			if (!Local_65.f_8[bVar32])
			{
				func_19(&Local_65, bVar32, 1);
			}
		}
		else if (Local_65.f_8[bVar32])
		{
			func_19(&Local_65, bVar32, 0);
		}
		bVar32++;
	}
	if (bVar2)
	{
		if (iLocal_158)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_127))
			{
				HUD::REMOVE_BLIP(&iLocal_127);
			}
			HUD::SET_HEALTH_HUD_DISPLAY_VALUES(-1, -1, true);
			HUD::SET_ABILITY_BAR_VALUE(-1f, -1f);
			HUD::SET_MAX_HEALTH_HUD_DISPLAY(0);
			HUD::SET_MAX_ARMOUR_HUD_DISPLAY(0);
			HUD::UNLOCK_MINIMAP_POSITION();
			iLocal_158 = 0;
		}
	}
	bVar33 = false;
	bVar34 = false;
	if (Global_23011.f_104 == 2 || Global_23011.f_104 == 3)
	{
		if ((((Global_23011.f_54[0] && Global_23011.f_59[0]) || (Global_23011.f_54[1] && Global_23011.f_59[1])) || (Global_23011.f_54[2] && Global_23011.f_59[2])) || (Global_23011.f_54[3] && Global_23011.f_59[3]))
		{
			bVar33 = true;
		}
		else if (((Global_23011.f_49[0] || Global_23011.f_49[1]) || Global_23011.f_49[2]) || Global_23011.f_49[3])
		{
			bVar34 = true;
		}
	}
	if (((!Global_23011.f_49[0] && !Global_23011.f_49[1]) && !Global_23011.f_49[2]) && !Global_23011.f_49[3])
	{
		iLocal_160 = 0;
	}
	if (bVar33)
	{
		if (iLocal_159[0] == -1)
		{
			iLocal_159[0] = AUDIO::GET_SOUND_ID();
			AUDIO::START_AUDIO_SCENE("PLAYER_SWITCH_RED_ALERT_SCENE");
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_159[0], "SwitchRedWarning", "SPECIAL_ABILITY_SOUNDSET", false);
		}
	}
	else if (iLocal_159[0] != -1)
	{
		AUDIO::STOP_SOUND(iLocal_159[0]);
		AUDIO::RELEASE_SOUND_ID(iLocal_159[0]);
		if (!bVar34)
		{
			AUDIO::STOP_AUDIO_SCENE("PLAYER_SWITCH_RED_ALERT_SCENE");
		}
		iLocal_159[0] = -1;
	}
	if (bVar34)
	{
		if (iLocal_159[1] == -1 && !iLocal_160)
		{
			iLocal_159[1] = AUDIO::GET_SOUND_ID();
			iLocal_160 = 1;
			AUDIO::START_AUDIO_SCENE("PLAYER_SWITCH_WHITE_ALERT_SCENE");
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_159[1], "SwitchWhiteWarning", "SPECIAL_ABILITY_SOUNDSET", false);
		}
	}
	else if (iLocal_159[1] != -1)
	{
		AUDIO::STOP_SOUND(iLocal_159[1]);
		AUDIO::RELEASE_SOUND_ID(iLocal_159[1]);
		if (!bVar33)
		{
			AUDIO::STOP_AUDIO_SCENE("PLAYER_SWITCH_WHITE_ALERT_SCENE");
		}
		iLocal_159[1] = -1;
	}
	if ((iVar5 && !bVar33) && !bVar34)
	{
		if (!iLocal_138)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_169) > 12500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CHARACTER_SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
			}
		}
		iLocal_138 = 1;
	}
	if (((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || __LIB_0__::func_201()) || __LIB_0__::func_477()) || Global_23011.f_125)
	{
		iLocal_162 = MISC::GET_GAME_TIMER();
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_162) < 1000)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
		iLocal_163 = 1;
	}
	else if (iLocal_163)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
			}
		}
		iLocal_163 = 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
	{
		bLocal_151 = true;
		iLocal_152 = MISC::GET_GAME_TIMER();
	}
	if (bLocal_151)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			iLocal_153 = 0;
		}
		else
		{
			iLocal_153++;
		}
		if (((MISC::GET_GAME_TIMER() - iLocal_152) > 5000 || Global_23011.f_4) || ((!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !Global_23011.f_12) && iLocal_153 > 5))
		{
			bLocal_151 = false;
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
	}
	if (iLocal_164)
	{
		if (((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_165) > 2000) && !bLocal_151) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iLocal_87)
			{
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_84);
				if (!bLocal_86)
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_85);
				}
			}
			iLocal_166 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_167 = NETWORK::GET_NETWORK_TIME();
			}
			Global_2726719 = 0;
			iLocal_139 = 0;
			iLocal_87 = 0;
			iLocal_84 = 0;
			iLocal_85 = 0;
			iLocal_164 = 0;
			Global_23011 = 0;
		}
	}
	if (Global_23011.f_4)
	{
		iLocal_169 = MISC::GET_GAME_TIMER();
	}
}

void func_19(var uParam0, bool bParam1, int iParam2)//Position - 0x2B37
{
	if (bParam1 != 4)
	{
		uParam0->f_8[bParam1] = iParam2;
	}
}

void func_20()//Position - 0x2B4F
{
	int iVar0;
	if (Global_23011.f_135)
	{
		iVar0 = 0;
		while (iVar0 < iLocal_132)
		{
			if (iLocal_132[iVar0] != -1)
			{
				HUD::THEFEED_REMOVE_ITEM(iLocal_132[iVar0]);
				iLocal_132[iVar0] = -1;
			}
			iVar0++;
		}
		if (iLocal_133 != -1)
		{
			HUD::THEFEED_REMOVE_ITEM(iLocal_133);
			iLocal_133 = -1;
		}
		HUD::THEFEED_SET_SNAP_FEED_ITEM_POSITIONS(false);
		HUD::THEFEED_RESUME();
		Global_2726719 = 0;
		Global_23011.f_135 = 0;
	}
	if (iLocal_129)
	{
		if (iLocal_133 != -1)
		{
			HUD::THEFEED_REMOVE_ITEM(iLocal_133);
			iLocal_133 = -1;
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("REC_FEED_6" /* GXT: Action Replay On */);
		iLocal_133 = HUD::END_TEXT_COMMAND_THEFEED_POST_REPLAY(2, 0, "");
		iLocal_129 = 0;
		iLocal_134 = MISC::GET_GAME_TIMER();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_135 = NETWORK::GET_NETWORK_TIME();
		}
	}
	if (iLocal_130)
	{
		if (iLocal_133 != -1)
		{
			HUD::THEFEED_REMOVE_ITEM(iLocal_133);
			iLocal_133 = -1;
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("REC_FEED_7" /* GXT: Action Replay Off */);
		iLocal_133 = HUD::END_TEXT_COMMAND_THEFEED_POST_REPLAY(2, 0, "");
		iLocal_130 = 0;
		iLocal_134 = MISC::GET_GAME_TIMER();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_135 = NETWORK::GET_NETWORK_TIME();
		}
	}
}

void func_21(int iParam0)//Position - 0x2C28
{
	if (*iParam0)
	{
		if (!Local_171.f_2)
		{
			Local_171.f_0 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Local_171.f_1 = NETWORK::GET_NETWORK_TIME();
			}
			Local_171.f_2 = 1;
		}
		if (!Global_23011.f_124)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - Local_171.f_0) < 200) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_171.f_1)) < 300))
			{
				*iParam0 = 0;
			}
		}
	}
	else
	{
		Local_171.f_2 = 0;
	}
}

int func_22()//Position - 0x2CA7
{
	if (((((((((((((((((((((((((((((Global_23011.f_134 || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || __LIB_0__::func_201()) || __LIB_0__::func_194(8, -1)) || CUTSCENE::IS_CUTSCENE_PLAYING()) || __LIB_3__::func_63()) || (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("golf")) == 0)) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || __LIB_0__::func_134()) || __LIB_0__::func_629()) || __LIB_0__::func_879()) || __LIB_0__::func_691()) || __LIB_0__::func_629()) || __LIB_0__::func_719()) || __LIB_0__::func_193()) || !__LIB_0__::func_893()) || __LIB_0__::func_77(0)) || HUD::IS_PAUSE_MENU_ACTIVE()) || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("creator")) > 0) || __LIB_0__::func_877()) || Global_63145) || __LIB_6__::func_181()) || !RECORDING::IS_REPLAY_INITIALIZED()) || !RECORDING::IS_REPLAY_AVAILABLE()) || __LIB_0__::func_703(Global_112411, 256)) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_1__::func_968(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

void func_47()//Position - 0x3355
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/, true);
	if (!Global_75485)
	{
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/);
	}
	PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 12 /*INPUT_WEAPON_WHEEL_UD*/);
	PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 13 /*INPUT_WEAPON_WHEEL_LR*/);
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
}

void func_49(float fParam0)//Position - 0x3416
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	fVar3 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (fVar2 > (3f / 2f) && fVar2 < 3.5f)
	{
		if ((fVar3 == (16f / 9f) || fVar3 == (17f / 9f)) || (fVar3 == (21f / 9f) && fVar2 >= (17f / 9f)))
		{
			*fParam0 = 0.042f;
		}
		else if (fVar3 == (5f / 3f))
		{
			*fParam0 = 0.045f;
		}
		else if (fVar3 == (16f / 10f))
		{
			*fParam0 = 0.047f;
		}
		else if ((fVar2 % fVar3) == 0f)
		{
			*fParam0 = 0.047f;
		}
		else
		{
			*fParam0 = 0.056f;
		}
	}
	else
	{
		*fParam0 = 0.056f;
	}
}

int func_69(int iParam0)//Position - 0x3854
{
	if (iParam0 == 3)
	{
		return 0;
	}
	else if (iParam0 == 0)
	{
		return 1;
	}
	else if (iParam0 == 1)
	{
		return 2;
	}
	else if (iParam0 == 2)
	{
		return 3;
	}
	return 0;
}

void func_70()//Position - 0x388E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (bLocal_86)
	{
		return;
	}
	iVar0 = 145;
	if (Global_23011.f_69 == 0)
	{
		iVar0 = 1;
		iVar1 = 144;
	}
	else if (Global_23011.f_69 == 1)
	{
		iVar0 = 2;
		iVar1 = 145;
	}
	else if (Global_23011.f_69 == 2)
	{
		iVar0 = 3;
		iVar1 = 116;
	}
	else if (Global_23011.f_69 == 3)
	{
		iVar0 = 0;
		iVar1 = 143;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_85, "SET_STATS_LABELS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iVar0 == 3);
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (iVar2 != 0 || Global_23011.f_69 != 2)
		{
			if (iVar0 == 145 || (iVar0 == 3 && !__LIB_0__::func_438()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			else if (iVar0 == 3)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(__LIB_42__::func_606(iVar0, func_98(iVar2), 0, __LIB_0__::func_5()));
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(__LIB_42__::func_606(iVar0, func_98(iVar2), 0, -1));
			}
			__LIB_0__::func_610(func_76(func_98(iVar2)));
		}
		else if (iVar2 == 0 && Global_23011.f_69 == 2)
		{
			if (__LIB_0__::func_438())
			{
				iVar3 = Global_1659759[__LIB_1__::func_27(-1)];
				iVar4 = __LIB_0__::func_966(iVar3, 1);
				iVar5 = __LIB_39__::func_293(iVar4, 0);
				iVar6 = __LIB_39__::func_293(iVar4 + 1, 0);
				iVar7 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT((iVar3 - iVar5)) / SYSTEM::TO_FLOAT((iVar6 - iVar5))) * 100f));
				if (Global_295824[8000] == iVar3 && iVar7 == 0)
				{
					iVar7 = 100;
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TR_RANKNUM" /* GXT: Rank ~1~ */);
				HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				__LIB_0__::func_610("TR_RANK" /* GXT: Rank */);
			}
		}
		iVar2++;
	}
	if (iVar0 == 3 && __LIB_0__::func_438())
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(__LIB_1__::func_680(133, -1)));
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PCARD_MENTAL_STATE" /* GXT: Mental State */);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_76(int iParam0)//Position - 0x3B9C
{
	switch (iParam0)
	{
		case 0:
			return "PS_SPEC_AB" /* GXT: Special */;
			break;
		case 1:
			return "PS_STAMINA" /* GXT: Stamina */;
			break;
		case 3:
			return "PS_LUNG" /* GXT: Lung Capacity */;
			break;
		case 2:
			return "PS_STRENGTH" /* GXT: Strength */;
			break;
		case 4:
			return "PS_DRIVING" /* GXT: Driving */;
			break;
		case 5:
			return "PS_FLYING" /* GXT: Flying */;
			break;
		case 6:
			return "PS_SHOOTING" /* GXT: Shooting */;
			break;
		case 7:
			return "PS_STEALTH" /* GXT: Stealth */;
			break;
	}
	return "ERROR";
}

int func_98(int iParam0)//Position - 0x5150
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 1:
			return 1;
			break;
		case 2:
			return 6;
			break;
		case 3:
			return 2;
			break;
		case 4:
			return 7;
			break;
		case 5:
			return 5;
			break;
		case 6:
			return 4;
			break;
		case 7:
			return 3;
			break;
	}
	return 0;
}

bool func_99(char* sParam0, bool bParam1)//Position - 0x51C8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	StringCopy(sParam0, "", 32);
	return 0;
	if ((__LIB_0__::func_109() || __LIB_0__::func_109()) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		StringCopy(sParam0, "GTA Online", 32);
		return 0;
	}
	if (bParam1)
	{
		MemCopy(sParam0, {Global_23011.f_117}, 8);
	}
	else
	{
		StringCopy(sParam0, "GTA Online", 32);
		if (PLAYER::IS_PLAYER_ONLINE())
		{
			iVar0 = Global_262145.f_15 /* Tunable: MP_COUNTDOWN */;
			iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
			iVar2 = (iVar0 - iVar1);
			if (iVar2 > 0)
			{
				if ((iVar2 / 86400) > 0)
				{
					iVar3 = (iVar2 / 86400);
					iVar2 = (iVar2 - (iVar3 * 86400));
				}
				if ((iVar2 / 3600) > 0)
				{
					iVar4 = (iVar2 / 3600);
					iVar2 = (iVar2 - iVar4 * 3600);
				}
				if ((iVar2 / 60) > 0)
				{
					iVar5 = (iVar2 / 60);
					iVar2 = (iVar2 - iVar5 * 60);
				}
				StringCopy(sParam0, "", 32);
				StringIntConCat(sParam0, iVar3, 32);
				StringConCat(sParam0, " days", 32);
			}
		}
		MemCopy(&(Global_23011.f_117), {*sParam0}, 4);
	}
	return !MISC::ARE_STRINGS_EQUAL(sParam0, "GTA Online");
}

void func_102()//Position - 0x52D4
{
	struct<13> Var0;
	struct<16> Var1;
	switch (iLocal_148)
	{
		case 0:
			if (__LIB_0__::func_39(14))
			{
				iLocal_146 = 1;
				return;
			}
			if ((((PLAYER::IS_PLAYER_ONLINE() && NETWORK::NETWORK_IS_SIGNED_ONLINE()) && NETWORK::NETWORK_IS_CLOUD_AVAILABLE()) && __LIB_15__::func_970(0)) && !Global_1661002)
			{
				if (!NETWORK::HAS_NETWORK_TIME_STARTED() || NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), Global_1660992))
				{
					if (__LIB_0__::func_438() && __LIB_27__::func_322(__LIB_0__::func_5()))
					{
						func_105();
					}
					Var0 = { __LIB_0__::func_819(PLAYER::PLAYER_ID()) };
					iLocal_150 = __LIB_0__::func_5();
					Var1 = { __LIB_37__::func_520(iLocal_150) };
					if (iLocal_150 != -1)
					{
						iLocal_101 = NETWORK::TEXTURE_DOWNLOAD_REQUEST(&Var0, &Var1, "selector_ui_headshot", Global_1660995[iLocal_150]);
					}
					else
					{
						iLocal_101 = NETWORK::TEXTURE_DOWNLOAD_REQUEST(&Var0, &Var1, "selector_ui_headshot", false);
					}
					iLocal_148++;
				}
			}
			break;
		case 1:
			if (NETWORK::TEXTURE_DOWNLOAD_HAS_FAILED(iLocal_101))
			{
				Global_1661002 = 1;
				iLocal_148 = 99;
			}
			else
			{
				sLocal_149 = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iLocal_101);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_149))
				{
					if (iLocal_150 != -1)
					{
						Global_1660995[iLocal_150] = 1;
					}
					iLocal_146 = 1;
					iLocal_148++;
				}
			}
			break;
	}
}

void func_105()//Position - 0x547D
{
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER() != Global_1577875)
	{
		__LIB_30__::func_358();
	}
	Global_1577875 = NETWORK::NETWORK_PLAYER_IS_CHEATER();
	if (NETWORK::NETWORK_PLAYER_IS_BADSPORT() != Global_1577876)
	{
		__LIB_30__::func_358();
	}
	Global_1577876 = NETWORK::NETWORK_PLAYER_IS_BADSPORT();
}

void func_115()//Position - 0x5651
{
	if (!Global_23011)
	{
		if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_166) > 300) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_167, 300)) || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_167)) > 1000)))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !bLocal_168)
			{
				if (!iLocal_87)
				{
					if (__LIB_13__::func_102() == 53)
					{
						iLocal_84 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("PLAYER_SWITCH_PROLOGUE");
						bLocal_86 = true;
					}
					else
					{
						iLocal_84 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("PLAYER_SWITCH");
						iLocal_85 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("PLAYER_SWITCH_STATS_PANEL");
						bLocal_86 = false;
					}
					iLocal_87 = 1;
				}
				iLocal_138 = 0;
				Global_23011.f_3 = 1;
				Global_23011 = 0;
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_84) && (bLocal_86 || GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_85)))
				{
					if (!iLocal_139)
					{
						GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(iLocal_84, true);
						iLocal_139 = 1;
					}
					Global_23011 = 1;
				}
			}
		}
	}
	iLocal_165 = MISC::GET_GAME_TIMER();
}

int func_117(int iParam0)//Position - 0x577A
{
	int iVar0;
	bool bVar1;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !(Global_78319 && __LIB_0__::func_81()))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && iParam0) && !__LIB_4__::func_962(PLAYER::PLAYER_PED_ID()))) || __LIB_0__::func_217()) || __LIB_38__::func_624(PLAYER::PLAYER_PED_ID())) || !STREAMING::IS_SAFE_TO_START_PLAYER_SWITCH()) || ((((((Global_78588.f_1 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !__LIB_0__::func_39(0)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_540(2)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10))) || Global_78579) || (PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("franklin0")) == 0))
		{
			return 0;
		}
	}
	if (Global_78319)
	{
		if (func_121())
		{
			return 0;
		}
		iVar0 = PLAYER::PLAYER_ID();
		if (iVar0 != -1 && BitTest(Global_1888862[iVar0 /*120*/].f_14, 0))
		{
			return 0;
		}
	}
	if (!Global_78319)
	{
		bVar1 = __LIB_14__::func_466();
		if (__LIB_0__::func_374(bVar1))
		{
			if (__LIB_39__::func_252(bVar1) == 5)
			{
				if (((!__LIB_0__::func_2(0) && !__LIB_0__::func_39(0)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(2))
				{
					return 0;
				}
			}
		}
		else if (!__LIB_0__::func_39(14))
		{
			return 0;
		}
		if (!Global_23011.f_12)
		{
			if ((PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()) && iParam0) || (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1 && iParam0))
			{
				return 0;
			}
			if (Global_23011.f_17)
			{
				return 0;
			}
		}
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (((((((((((((((((((((((Global_23011.f_11 || __LIB_19__::func_96()) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || __LIB_0__::func_201()) || __LIB_0__::func_194(8, -1)) || CUTSCENE::IS_CUTSCENE_PLAYING()) || __LIB_3__::func_63()) || HUD::IS_PAUSE_MENU_ACTIVE()) || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) || MISC::IS_STUNT_JUMP_IN_PROGRESS()) || __LIB_0__::func_193()) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0) || Global_112433) || Global_75485) || Global_63145) || (HUD::IS_HUD_COMPONENT_ACTIVE(19) && !Global_23011.f_4)) || (HUD::IS_HUD_COMPONENT_ACTIVE(16) && !Global_23011.f_4)) || __LIB_0__::func_719()) || __LIB_6__::func_181()) || Global_75485) || Global_78573 == 4) || Global_78573 == 5) || __LIB_3__::func_558()) || HUD::IS_STORE_PENDING_NETWORK_SHUTDOWN_TO_OPEN())
	{
		return 0;
	}
	return 1;
}

int func_121()//Position - 0x5AC2
{
	if (__LIB_0__::func_77(0))
	{
		return 1;
	}
	return 0;
}

void func_132()//Position - 0x60B5
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bVar0 = false;
	bVar1 = false;
	bVar2 = Global_23011.f_121;
	bVar3 = false;
	if (!Global_23011.f_12 && !Global_15)
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || Global_1574632)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_879())
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				bVar2 = false;
			}
			if ((__LIB_2__::func_65(bVar2) || __LIB_13__::func_749(bVar2)) && func_865(&Local_65, bVar2, 1))
			{
				MISC::SET_BIT(&Global_2725427, 3);
				if (func_864(&Local_65) || __LIB_0__::func_3() == 0)
				{
					iVar4 = PLAYER::PLAYER_ID();
					if (iVar4 > -1)
					{
						MISC::SET_BIT(&(Global_1853348[iVar4 /*834*/].f_833), 11);
					}
					if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_OUT())
					{
						AUDIO::SET_AUDIO_FLAG("AllowRadioOverScreenFade", true);
						SCRIPT::SET_NO_LOADING_SCREEN(true);
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					__LIB_0__::func_467();
				}
				Global_1577837 = 1;
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (__LIB_3__::func_188() || __LIB_3__::func_187()))
				{
					Global_2725406 = 1;
				}
				switch (__LIB_0__::func_3())
				{
					case 0:
						if (((((__LIB_26__::func_859() || __LIB_18__::func_712()) || __LIB_2__::func_660()) || __LIB_10__::func_290()) || Global_1836577) || __LIB_0__::func_979(PLAYER::PLAYER_ID(), 1))
						{
							Global_1577837 = 1;
						}
						break;
				}
				bVar3 = true;
			}
		}
	}
	if (__LIB_39__::func_290())
	{
		bVar3 = true;
	}
	if (__LIB_37__::func_830())
	{
		bVar3 = true;
	}
	if (__LIB_0__::func_629() == 0)
	{
		if (__LIB_2__::func_276())
		{
			MISC::SET_BIT(&Global_2725427, 4);
			bVar3 = true;
		}
	}
	if (LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_RANDOM_JOB())
	{
		MISC::SET_BIT(&Global_2725427, 8);
	}
	if (LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_EVENT())
	{
		if (func_848())
		{
			MISC::SET_BIT(&Global_2725427, 7);
		}
		else
		{
			MISC::SET_BIT(&Global_2725427, 6);
		}
	}
	if (__LIB_1__::func_649())
	{
		__LIB_18__::func_884(0);
		Local_65.f_39 = 1;
		Local_65.f_7 = 3;
		bVar3 = true;
		bVar0 = true;
		MISC::SET_BIT(&Global_2725427, 1);
	}
	if ((__LIB_39__::func_289() && ((__LIB_0__::func_438() && __LIB_37__::func_488() == 0) || __LIB_0__::func_438() == 0)) && func_843())
	{
		iVar5 = 1;
		if (__LIB_0__::func_438())
		{
			iVar5 = __LIB_42__::func_613();
		}
		if (iVar5 || __LIB_0__::func_3() == 0)
		{
			if (__LIB_0__::func_3() == 0)
			{
				__LIB_39__::func_287(1);
			}
			STATS::STAT_MIGRATE_CLEAR_FOR_RESTART();
			__LIB_18__::func_884(0);
			if (__LIB_0__::func_3() == -1 || __LIB_0__::func_3() == 999)
			{
				__LIB_4__::func_51(1);
			}
			Local_65.f_39 = 1;
			Local_65.f_7 = 3;
			bVar3 = true;
		}
	}
	if (((__LIB_39__::func_286() && !__LIB_0__::func_629()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_97919.f_44 != 1)
	{
		iVar6 = Global_2727820;
		iVar6 |= 1;
		Global_2727820 = iVar6;
	}
	if ((__LIB_29__::func_225() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_97919.f_44 != 1)
	{
		__LIB_18__::func_884(0);
		Local_65.f_39 = 1;
		if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
		{
		}
		Local_65.f_7 = 3;
		bVar3 = true;
		bVar0 = true;
	}
	if ((__LIB_37__::func_498() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_97919.f_44 != 1)
	{
		__LIB_18__::func_884(0);
		Local_65.f_39 = 1;
		if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
		{
		}
		Local_65.f_7 = 3;
		bVar3 = true;
		bVar0 = true;
	}
	if ((__LIB_37__::func_502() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_97919.f_44 != 1)
	{
		__LIB_18__::func_884(0);
		Local_65.f_39 = 1;
		if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
		{
		}
		Local_65.f_7 = 3;
		bVar3 = true;
		bVar0 = true;
	}
	if (!iLocal_128)
	{
		if (Global_2)
		{
			MISC::SET_BIT(&Global_2725427, 2);
			Global_2727085 = 1;
			Local_65.f_39 = 1;
			Local_65.f_7 = 3;
			bVar3 = true;
			iLocal_128 = 1;
		}
	}
	if (bVar3)
	{
		__LIB_0__::func_467();
		bVar7 = true;
		if (Global_1577837 == 0)
		{
			bVar7 = false;
		}
		if (__LIB_2__::func_276())
		{
			bVar7 = false;
		}
		if (Global_2727819 == 1)
		{
			if (__LIB_1__::func_649())
			{
				bVar7 = false;
			}
		}
		if (__LIB_29__::func_225())
		{
			if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
			{
				bVar7 = false;
			}
			else
			{
				bVar7 = true;
			}
			__LIB_37__::func_795(0);
		}
		if (__LIB_37__::func_498())
		{
			if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
			{
				bVar7 = false;
			}
			else
			{
				bVar7 = true;
			}
			__LIB_37__::func_795(0);
			__LIB_39__::func_285();
			__LIB_37__::func_627();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				__LIB_37__::func_797();
			}
			__LIB_37__::func_796();
		}
		if (__LIB_37__::func_502())
		{
			if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
			{
				bVar7 = false;
			}
			else
			{
				bVar7 = true;
			}
			__LIB_37__::func_795(0);
		}
		if (Global_2727819 == 0)
		{
			if (__LIB_1__::func_649())
			{
				bVar7 = false;
			}
		}
		if (__LIB_0__::func_39(14) && !bVar0)
		{
			AUDIO::SET_AUDIO_FLAG("AllowRadioOverScreenFade", false);
			if (__LIB_15__::func_893(&Local_65, 3))
			{
				Global_112334 = 1;
			}
			else if (__LIB_15__::func_893(&Local_65, __LIB_0__::func_682(Global_113386.f_2363.f_539.f_4323)))
			{
				Global_112333 = 1;
			}
			Local_65.f_7 = 4;
		}
		else if (__LIB_0__::func_39(14))
		{
		}
		if (func_822(&Local_65))
		{
			if (Global_14)
			{
				Global_15 = 1;
			}
			else
			{
				func_819(__LIB_0__::func_484(Local_65.f_7), !bVar7);
			}
		}
		if ((((((((func_864(&Local_65) || __LIB_39__::func_290()) || __LIB_2__::func_276()) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || __LIB_1__::func_649()) || __LIB_29__::func_225()) || __LIB_37__::func_498()) || __LIB_37__::func_502()) || __LIB_37__::func_830())
		{
			func_20();
			if (bVar7)
			{
				if (__LIB_0__::func_3() == 0)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
				}
				AUDIO::SET_AUDIO_FLAG("ActivateSwitchWheelAudio", false);
				__LIB_39__::func_284(1);
				iVar10 = 0;
				while (bVar7 == 1)
				{
					__LIB_0__::func_467();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
					func_817(0);
					__LIB_15__::func_934(&iVar9);
					if (!__LIB_15__::func_970(0))
					{
						if (!__LIB_15__::func_934(&iVar9) || __LIB_13__::func_746() == 0)
						{
							if (iVar9 == 3)
							{
								iVar10 = __LIB_42__::func_612();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (iVar9 == 6)
							{
								if (iVar8 == 0 && MISC::IS_SCARLETT_VERSION() == 0)
								{
									MISC::SET_TIME_SCALE(1f);
									PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(true);
									__LIB_0__::func_794(&Global_1577859);
									iVar8 = 1;
								}
								iVar10 = __LIB_39__::func_306(1, 1);
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (iVar9 == 7)
							{
								if (iVar8 == 0)
								{
									MISC::SET_TIME_SCALE(1f);
									PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(true);
									__LIB_0__::func_794(&Global_1577859);
									iVar8 = 1;
								}
								iVar10 = __LIB_39__::func_306(1, 1);
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (NETWORK::NETWORK_IS_CABLE_CONNECTED() == 0)
							{
								iVar10 = __LIB_42__::func_611();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (NETWORK::NETWORK_IS_REFRESHING_ROS_CREDENTIALS())
							{
							}
							else if (__LIB_0__::func_52() && NETWORK::NETWORK_IS_NP_PENDING())
							{
							}
							else if (__LIB_0__::func_53() && iVar9 == 8)
							{
								if (iLocal_170 == 0)
								{
									__LIB_37__::func_141(1);
									iLocal_170 = 1;
								}
								iVar10 = __LIB_39__::func_305();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if ((__LIB_0__::func_52() && NETWORK::NETWORK_IS_NP_AVAILABLE() == 0) && NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 4)
							{
								iVar10 = __LIB_39__::func_304();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if ((__LIB_0__::func_52() && NETWORK::NETWORK_IS_NP_AVAILABLE() == 0) && NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 2)
							{
								iVar10 = __LIB_39__::func_303();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if ((__LIB_0__::func_52() && NETWORK::NETWORK_IS_NP_AVAILABLE() == 0) && NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 1)
							{
								iVar10 = __LIB_39__::func_302();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if ((__LIB_0__::func_52() && NETWORK::NETWORK_IS_NP_AVAILABLE() == 0) && NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 5)
							{
								iVar10 = func_803();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (iVar9 == 10)
							{
								iVar10 = __LIB_42__::func_610();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
							{
								if (__LIB_0__::func_937(&Global_1577859, 3000, 0))
								{
									iVar10 = __LIB_39__::func_300();
									if (iVar10 == 1)
									{
										iVar10 = 2;
									}
								}
							}
							else if (NETWORK::NETWORK_IS_PLATFORM_SUBSCRIPTION_CHECK_PENDING() == 1)
							{
							}
							else if (__LIB_0__::func_52() && NETWORK::NETWORK_HAVE_PLATFORM_SUBSCRIPTION() == 0)
							{
								if (iLocal_170 == 0)
								{
									NETWORK::NETWORK_SHOW_ACCOUNT_UPGRADE_UI();
									iLocal_170 = 1;
								}
								iVar10 = __LIB_39__::func_299();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (__LIB_0__::func_53() && NETWORK::NETWORK_HAVE_PLATFORM_SUBSCRIPTION() == 0)
							{
								if (iLocal_170 == 0)
								{
									__LIB_37__::func_141(1);
									iLocal_170 = 1;
								}
								iVar10 = __LIB_39__::func_298();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (__LIB_37__::func_824())
							{
								iVar10 = __LIB_39__::func_297();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (iVar9 == 8)
							{
								if (__LIB_0__::func_52())
								{
									iVar10 = __LIB_39__::func_304();
								}
								else
								{
									iVar10 = __LIB_39__::func_296();
								}
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (iVar9 == 10)
							{
								iVar10 = __LIB_42__::func_610();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (iVar9 == 11 || NETWORK::NETWORK_IS_MULTIPLAYER_DISABLED())
							{
								iVar10 = __LIB_42__::func_609();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() == 0)
							{
								__LIB_0__::func_794(&Global_2727877);
							}
							else if (NETWORK::NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING())
							{
							}
							else if (iVar9 == 12)
							{
								iVar10 = func_787();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (NETWORK::NETWORK_IS_CLOUD_BACKGROUND_SCRIPT_REQUEST_PENDING())
							{
							}
							else if (iVar9 == 13)
							{
								if (__LIB_0__::func_937(&Global_2727877, 3000, 0))
								{
									iVar10 = func_764();
									if (iVar10 == 1)
									{
										iVar10 = 2;
									}
								}
								else if (HUD::BUSYSPINNER_IS_ON() == 0)
								{
									HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("MP_SPINLOADING" /* GXT: Initializing */);
									HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(5);
								}
							}
							else if (iVar9 == 4)
							{
							}
							else
							{
								iVar10 = func_762();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
						}
						else
						{
							iVar10 = func_762();
							if (iVar10 == 1)
							{
								iVar10 = 2;
							}
						}
					}
					else if (__LIB_37__::func_824())
					{
						iVar10 = __LIB_39__::func_297();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (iVar9 == 1)
					{
						iVar10 = __LIB_42__::func_612();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (iVar9 == 3)
					{
						iVar10 = __LIB_42__::func_612();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (iVar9 == 6)
					{
						if (iVar8 == 0 && MISC::IS_SCARLETT_VERSION() == 0)
						{
							MISC::SET_TIME_SCALE(1f);
							PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(true);
							__LIB_0__::func_794(&Global_1577859);
							iVar8 = 1;
						}
						iVar10 = __LIB_39__::func_306(1, 1);
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (iVar9 == 7)
					{
						if (iVar8 == 0)
						{
							MISC::SET_TIME_SCALE(1f);
							PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(true);
							__LIB_0__::func_794(&Global_1577859);
							iVar8 = 1;
						}
						iVar10 = __LIB_39__::func_306(1, 1);
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (__LIB_0__::func_53() && iVar9 == 8)
					{
						if (iLocal_170 == 0)
						{
							__LIB_37__::func_141(1);
							iLocal_170 = 1;
						}
						iVar10 = __LIB_39__::func_305();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (NETWORK::NETWORK_IS_CABLE_CONNECTED() == 0)
					{
						iVar10 = __LIB_42__::func_611();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (NETWORK::NETWORK_IS_REFRESHING_ROS_CREDENTIALS())
					{
					}
					else if (__LIB_0__::func_52() && NETWORK::NETWORK_IS_NP_PENDING())
					{
					}
					else if ((__LIB_0__::func_52() && NETWORK::NETWORK_IS_NP_AVAILABLE() == 0) && NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 0)
					{
						iVar10 = func_803();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if ((__LIB_0__::func_52() && NETWORK::NETWORK_IS_NP_AVAILABLE() == 0) && NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 5)
					{
						iVar10 = func_803();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (NETWORK::NETWORK_IS_SIGNED_ONLINE() == 0)
					{
						if (iVar8 == 0)
						{
							MISC::SET_TIME_SCALE(1f);
							PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(true);
							__LIB_0__::func_794(&Global_1577859);
							iVar8 = 1;
						}
						iVar10 = __LIB_39__::func_306(1, 0);
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if ((__LIB_0__::func_52() && NETWORK::NETWORK_HAVE_PLATFORM_SUBSCRIPTION() == 0) && __LIB_39__::func_283() == 0)
					{
						if (__LIB_0__::func_52())
						{
							if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() == 0 && iLocal_170 == 1)
							{
								iVar10 = __LIB_39__::func_299();
							}
							if (iLocal_170 == 0)
							{
								NETWORK::NETWORK_SHOW_ACCOUNT_UPGRADE_UI();
								iLocal_170 = 1;
							}
						}
						else
						{
							iVar10 = __LIB_39__::func_296();
						}
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if ((__LIB_0__::func_53() && NETWORK::NETWORK_HAVE_PLATFORM_SUBSCRIPTION() == 0) && __LIB_39__::func_283() == 0)
					{
						if (iLocal_170 == 0)
						{
							__LIB_37__::func_141(1);
							iLocal_170 = 1;
						}
						iVar10 = __LIB_39__::func_298();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (__LIB_39__::func_310() == 6)
					{
						iVar10 = __LIB_39__::func_296();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (PLAYER::IS_PLAYER_LOGGING_IN_NP() == 1)
					{
					}
					else if (iVar9 == 10)
					{
						iVar10 = __LIB_42__::func_610();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
					{
						iVar10 = __LIB_39__::func_300();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() == 0)
					{
						__LIB_0__::func_794(&Global_2727877);
					}
					else if (NETWORK::NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING())
					{
					}
					else if (iVar9 == 12 && __LIB_0__::func_3() != 0)
					{
						iVar10 = func_787();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (NETWORK::NETWORK_IS_CLOUD_BACKGROUND_SCRIPT_REQUEST_PENDING())
					{
						if (HUD::BUSYSPINNER_IS_ON() == 0)
						{
							HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("MP_SPINLOADING" /* GXT: Initializing */);
							HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(5);
						}
					}
					else if (iVar9 == 13)
					{
						if (__LIB_0__::func_937(&Global_2727877, 3000, 0))
						{
							iVar10 = func_764();
							if (iVar10 == 1)
							{
								iVar10 = 2;
							}
						}
					}
					else if (iVar9 == 11 || NETWORK::NETWORK_IS_MULTIPLAYER_DISABLED())
					{
						iVar10 = __LIB_42__::func_609();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (__LIB_27__::func_321() == 0)
					{
						iVar10 = func_762();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (__LIB_0__::func_3() == 0)
					{
						iVar10 = func_748();
						if (iVar10 == 1)
						{
							__LIB_11__::func_838(1, 0);
						}
					}
					else
					{
						iVar10 = func_700();
						if (iVar10 == 1)
						{
							__LIB_11__::func_838(1, 0);
						}
					}
					if ((__LIB_0__::func_983() && __LIB_0__::func_936(PLAYER::PLAYER_ID())) && !((__LIB_37__::func_502() || __LIB_37__::func_498()) || __LIB_29__::func_225()))
					{
						iVar10 = 2;
					}
					if (iVar10 == 1)
					{
						bVar7 = false;
						iLocal_170 = 0;
						if ((((__LIB_37__::func_502() || __LIB_37__::func_498()) || __LIB_29__::func_225()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_97919.f_44 != 1)
						{
							if (Global_78317 == 1 && CAM::IS_GAMEPLAY_CAM_RENDERING() == 0)
							{
								__LIB_4__::func_51(1);
							}
							else
							{
								__LIB_39__::func_281(1);
							}
						}
					}
					else if (iVar10 == 2)
					{
						bVar7 = false;
						iLocal_170 = 0;
						Global_1577854 = 0;
						__LIB_23__::func_487();
						func_817(1);
						__LIB_42__::func_608(0);
						__LIB_37__::func_500();
						__LIB_37__::func_501();
						Global_2726719 = 0;
						__LIB_37__::func_481();
						bVar3 = false;
					}
					if (__LIB_0__::func_980())
					{
						iLocal_170 = 0;
						bVar7 = false;
						Global_1577854 = 0;
						__LIB_23__::func_487();
						func_817(1);
					}
					SYSTEM::WAIT(0);
					if (NETWORK::NETWORK_IS_SIGNED_ONLINE() == 0)
					{
						MISC::SET_TIME_SCALE(1f);
					}
					if (__LIB_0__::func_3() != 0 || (NETWORK::NETWORK_IS_SIGNED_ONLINE() == 0 && (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() || HUD::IS_WARNING_MESSAGE_ACTIVE())))
					{
						if (CAM::IS_SCREEN_FADED_IN())
						{
							if (HUD::IS_WARNING_MESSAGE_ACTIVE() || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
							{
								if (__LIB_24__::func_677())
								{
									if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_OUT())
									{
										CAM::DO_SCREEN_FADE_IN(0);
									}
								}
								MISC::SET_GAME_PAUSED(true);
							}
						}
					}
				}
				MISC::SET_GAME_PAUSED(false);
				iVar8 = 0;
				iLocal_170 = 0;
				__LIB_39__::func_284(0);
			}
			if (bVar3 == 0)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					SCRIPT::SET_NO_LOADING_SCREEN(false);
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						CAM::DO_SCREEN_FADE_IN(0);
					}
					else if (__LIB_24__::func_677())
					{
						__LIB_7__::func_278(0);
					}
				}
				iVar11 = PLAYER::PLAYER_ID();
				if (iVar11 > -1)
				{
					MISC::CLEAR_BIT(&(Global_1853348[iVar11 /*834*/].f_833), 11);
				}
				func_15();
				func_14();
				AUDIO::SET_AUDIO_FLAG("AllowRadioOverScreenFade", false);
				iLocal_170 = 0;
				Global_1577837 = 0;
				__LIB_2__::func_448(1, 0, 1);
				return;
			}
			if (__LIB_0__::func_2(0))
			{
				iLocal_170 = 0;
				PLAYER::FORCE_CLEANUP(2);
				AUDIO::SET_AUDIO_FLAG("AllowRadioOverScreenFade", false);
				return;
			}
			AUDIO::SET_AUDIO_FLAG("AllowRadioOverScreenFade", false);
			__LIB_39__::func_308();
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			}
			if (func_864(&Local_65) && __LIB_2__::func_276() == 0)
			{
				Global_1577838 = 1;
			}
			else
			{
				Global_1577838 = 0;
			}
			if ((((Global_1577838 || Global_1577837) && !Global_2) && !LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE()) && !iLocal_128)
			{
				__LIB_39__::func_281(1);
			}
			if (iLocal_128)
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					iLocal_128 = 0;
				}
			}
			if ((((__LIB_2__::func_276() && Global_78581 == -1) && __LIB_37__::func_646() == 0) && __LIB_37__::func_128() == 0) && __LIB_37__::func_628() == 0)
			{
				if ((SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_property_int")) == 0 && __LIB_0__::func_3() != 2) && __LIB_37__::func_546() == 0)
				{
					__LIB_39__::func_254(1);
				}
				if (__LIB_0__::func_3() != 0)
				{
					__LIB_37__::func_833();
				}
			}
			if (((__LIB_2__::func_276() && Global_78581 != -1) && __LIB_37__::func_646() == 0) && __LIB_37__::func_546() == 0)
			{
				__LIB_2__::func_408(0);
				__LIB_37__::func_811(1);
				__LIB_37__::func_833();
			}
			Global_1577837 = 0;
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar15 = __LIB_14__::func_466();
				if (__LIB_0__::func_374(iVar15))
				{
					iVar12 = 0;
					while (iVar12 <= 43)
					{
						iVar13 = __LIB_0__::func_292(iVar12);
						if (iVar13 != 0 && iVar13 != joaat("SLOT_UNARMED"))
						{
							iVar14 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(PLAYER::PLAYER_PED_ID(), iVar13);
							if (iVar14 != 0 && iVar14 != joaat("WEAPON_UNARMED"))
							{
								if (!func_536(iVar15, iVar14))
								{
									WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), iVar14, 0, false);
									WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), iVar14);
								}
							}
						}
						iVar12++;
					}
				}
				__LIB_37__::func_912(PLAYER::PLAYER_PED_ID(), 0);
				func_526();
				PLAYER::FORCE_CLEANUP(8);
			}
			if (func_822(&Local_65))
			{
				__LIB_25__::func_187(1);
			}
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
			__LIB_0__::func_671(1);
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			__LIB_0__::func_429();
			__LIB_0__::func_325();
			__LIB_24__::func_489(8, 1, -1);
			__LIB_0__::func_794(&uLocal_99);
			if (HUD::BUSYSPINNER_IS_ON())
			{
				HUD::BUSYSPINNER_OFF();
			}
			SCRIPT::REQUEST_SCRIPT("MainTransition");
			while (!SCRIPT::HAS_SCRIPT_LOADED("MainTransition") && bVar3)
			{
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
				if (__LIB_0__::func_937(&uLocal_99, 20000, 0))
				{
					func_509();
					bVar3 = false;
					return;
				}
				func_20();
				SYSTEM::WAIT(0);
			}
			func_20();
			func_15();
			func_14();
			if (!__LIB_4__::func_52())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					SCRIPT::SET_NO_LOADING_SCREEN(false);
					AUDIO::SET_AUDIO_FLAG("AllowRadioOverScreenFade", false);
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						CAM::DO_SCREEN_FADE_IN(0);
					}
					else if (__LIB_24__::func_677())
					{
						__LIB_7__::func_278(0);
					}
				}
			}
			if (Global_262145.f_3776 /* Tunable: DISABLE_PV_DUPLICATE_FIX */ == 0 && __LIB_38__::func_684())
			{
				while (!__LIB_2__::func_179())
				{
					func_137();
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				__LIB_37__::setGlobal_151971(1);
			}
			while (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(8032) == 0)
			{
				SYSTEM::WAIT(0);
			}
			Global_1643875 = SYSTEM::START_NEW_SCRIPT("MainTransition", 8032);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("MainTransition");
			Global_2727085 = 0;
			iLocal_128 = 0;
			while (SCRIPT::IS_THREAD_ACTIVE(Global_1643875) && __LIB_0__::func_628() != 64)
			{
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
				__LIB_39__::func_308();
				SYSTEM::WAIT(0);
			}
			while (__LIB_3__::func_366())
			{
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
				SYSTEM::WAIT(0);
			}
			Global_1574628 = 0;
			__LIB_25__::func_187(0);
			__LIB_24__::func_489(8, 0, -1);
			__LIB_0__::func_671(0);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_133();
			}
		}
	}
}

void func_133()//Position - 0x72D4
{
	if (Global_97919.f_44 == 1 && Global_97919.f_46 == 0)
	{
		Global_97919.f_44 = 0;
	}
}

void func_137()//Position - 0x7337
{
	int iVar0;
	int iVar1;
	if (!Global_151971)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!__LIB_0__::func_629() || ((__LIB_0__::func_63() != -1 && __LIB_0__::func_63() != 999) && __LIB_0__::func_3() != 0))
			{
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning")) == 0)
				{
					iVar0 = __LIB_2__::func_82();
					if (!__LIB_37__::func_371(iVar0))
					{
						if (__LIB_37__::func_371(__LIB_12__::func_894(Global_113386.f_2363.f_539.f_4321)))
						{
							iVar1 = Global_113386.f_2363.f_539.f_4321;
						}
						else if (__LIB_37__::func_371(__LIB_12__::func_894(Global_113386.f_2363.f_539.f_4323)))
						{
							iVar1 = Global_113386.f_2363.f_539.f_4323;
						}
						else
						{
							iVar1 = 1;
						}
						if (!func_138(__LIB_0__::func_682(iVar1), 1))
						{
							__LIB_37__::setGlobal_151971(0);
							return;
						}
					}
					else
					{
						__LIB_37__::setGlobal_151971(1);
					}
				}
				else
				{
					__LIB_37__::setGlobal_151971(0);
				}
			}
			else
			{
				__LIB_37__::setGlobal_151971(0);
			}
		}
		else
		{
			__LIB_37__::setGlobal_151971(0);
		}
	}
}

int func_138(int iParam0, bool bParam1)//Position - 0x7434
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	Global_23011.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = __LIB_0__::func_484(iParam0);
	iVar1 = __LIB_12__::func_894(iVar0);
	if (iVar1 == 0)
	{
		return 1;
	}
	if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), iVar1))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar1);
	if (!STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false))
		{
			iVar3 = -1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 0, false))
		{
			iVar3 = 0;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 1, false))
		{
			iVar3 = 1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 2, false))
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = -1;
		}
	}
	else
	{
		iVar2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_502(&(Global_22965[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_187(&(Global_22965[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	func_140(&Global_22965, 0, 0, 0);
	__LIB_0__::func_649(iParam0);
	return 1;
}

int func_140(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x75B8
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar7;
	var uVar8;
	char* sVar9;
	if (!uParam0->f_39)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID()
	{
	}
	if ((!PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
		if (!bParam2)
		{
			if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if ((PED::IS_PED_RAGDOLL((*uParam0)[uParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*uParam0)[uParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*uParam0)[uParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[uParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = __LIB_14__::func_466();
		if (!uParam0->f_23)
		{
			__LIB_37__::func_912(iVar0, 0);
		}
		__LIB_13__::func_813(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, true);
		iVar2 = __LIB_0__::func_484(uParam0->f_7);
		__LIB_37__::func_912((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (__LIB_13__::func_716(PLAYER::PLAYER_PED_ID()))
		{
			case 0:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTime"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTime");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTimeOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTimeOut");
				}
				break;
			case 1:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocus"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocus");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocusOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocusOut");
				}
				break;
			case 2:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMIST"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMIST");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMISTOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMISTOut");
				}
				break;
		}
		if (__LIB_0__::func_374(__LIB_14__::func_466()))
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
			}
		}
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*uParam0)[uParam0->f_7], bParam2, false);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, false);
		}
		if (__LIB_0__::func_540(0) || __LIB_0__::func_540(3))
		{
			if (Global_23011.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (BitTest(Global_91193[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_91193[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_91229[Global_78588.f_109[iVar5 /*4*/] /*34*/]), 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_23011.f_13 = 0;
		uParam0->f_5 = __LIB_0__::func_682(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = __LIB_0__::func_682(iVar2);
		uParam0->f_7 = 4;
		iVar7 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		__LIB_15__::func_974(iVar7);
		PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(iVar7, false, 0);
		if (fVar3 < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((((25f / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) - 100f)) + 100f)), 0);
		}
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
				__LIB_15__::func_974(iVar0);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(iVar0, false, 0);
				PED::SET_PED_STEALTH_MOVEMENT(iVar0, false, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			sVar9 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar8);
			if (!MISC::IS_STRING_NULL(sVar9))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sVar9, SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, false, true);
				}
				PED::DELETE_PED(&iVar0);
			}
		}
		Global_97723 = 1;
		__LIB_0__::func_481(PLAYER::PLAYER_PED_ID());
		__LIB_15__::func_979();
		__LIB_13__::func_799(iVar2);
		__LIB_42__::func_607();
		__LIB_39__::func_307(iVar2);
		__LIB_16__::func_899(__LIB_0__::func_517(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), __LIB_0__::func_425(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), __LIB_0__::func_425(68));
		}
		__LIB_13__::func_818(iVar2, &iVar7);
		if (((__LIB_0__::func_39(0) || __LIB_0__::func_39(3)) || __LIB_0__::func_39(2)) || __LIB_0__::func_39(4))
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, false);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, false);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, true);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, true);
		}
		if (!__LIB_0__::func_477())
		{
			__LIB_16__::func_844();
		}
		Global_97360 = 0;
		return 1;
	}
	else
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}

int func_187(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xD6D3
{
	int iVar0;
	if (__LIB_0__::func_374(iParam1))
	{
		iVar0 = __LIB_12__::func_894(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_16__::func_895(*iParam0, iParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_494(*iParam0);
			__LIB_15__::func_980(*iParam0, 1, 0);
			__LIB_15__::func_977(*iParam0);
			__LIB_15__::func_976(*iParam0);
			func_189(*iParam0, bParam6);
			__LIB_0__::func_405(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_189(int iParam0, bool bParam1)//Position - 0xD7EB
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_13__::func_804(iVar0))
	{
		__LIB_13__::func_803(iVar0, 0);
		func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_280(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_13__::func_803(iVar0, 0);
			func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_280(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[120] && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122])
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_258(iParam0, 3, 169))
					{
						func_459(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_258(iParam0, 12, 6))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_258(iParam0, 12, 17))
			{
				if (!__LIB_16__::func_848(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_258(iParam0, 12, 20))
			{
				if (!__LIB_16__::func_848(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_258(iParam0, 12, 21))
			{
				if (!__LIB_16__::func_848(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_258(iParam0, 12, 22))
			{
				if (!__LIB_16__::func_848(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_258(iParam0, 12, 11))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_258(iParam0, 12, 10))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_258(iParam0, 12, 50))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_258(iParam0, 14, 59))
			{
				func_459(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_258(iParam0, 8, 22))
			{
				func_459(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_258(iParam0, 12, 14))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_258(iParam0, 12, 13))
			{
				if (!__LIB_16__::func_848(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_258(iParam0, 12, 14))
			{
				if (!__LIB_16__::func_848(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_258(iParam0, 12, 15))
			{
				if (!__LIB_16__::func_848(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_258(iParam0, 12, 4))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_258(iParam0, 12, 3))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_258(iParam0, 14, 82))
			{
				func_459(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_258(iParam0, 8, 76))
			{
				func_459(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_258(iParam0, 12, 1))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_258(iParam0, 12, 12))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_258(iParam0, 12, 15))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_258(iParam0, 3, 71))
				{
					func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_258(iParam0, 12, 17))
			{
				if (!__LIB_16__::func_848(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_258(iParam0, 12, 18))
			{
				if (!__LIB_16__::func_848(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_258(iParam0, 12, 19))
			{
				if (!__LIB_16__::func_848(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_258(iParam0, 12, 7))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_258(iParam0, 12, 6))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_258(iParam0, 14, 88))
			{
				func_459(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_258(iParam0, 8, 17))
			{
				func_459(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_258(iParam0, 12, 11))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_258(int iParam0, int iParam1, int iParam2)//Position - 0x24D90
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
	Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar0, iParam1, iParam2, -1) };
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
				if (!func_258(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_258(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_12__::func_14(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_258(iParam0, 14, iVar4))
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
						Global_78130[2 /*14*/] = { __LIB_12__::func_14(iVar0, iVar2, iVar1, -1) };
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
			if (!func_258(iParam0, 14, uVar8[iVar7]))
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

void func_280(int iParam0, int iParam1)//Position - 0x2940E
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_13__::func_716(iParam0);
		if (__LIB_0__::func_374(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_458(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_282(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_39__::func_311(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_42__::func_607();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
				{
					Global_113386.f_2363.f_539[iVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_407(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					if (iVar0 == 0)
					{
						if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121])
						{
							Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

void func_282(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x29689
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<5> Var12;
	if (!PED::IS_PED_INJURED(iParam0) || iParam5)
	{
		iVar0 = __LIB_13__::func_716(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
				{
					if (uParam1->f_39[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (__LIB_0__::func_374(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_456(iParam0, iVar1, &iVar2, 0))
			{
				func_459(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_454(iParam0, iVar1, &iVar2))
			{
				func_459(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_451(iParam0);
			__LIB_1__::func_354(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_1__::func_354(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__::func_206(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_0__::func_463(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_0__::func_462(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_286(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_286(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_286(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_0__::func_463(iVar9);
			}
			else
			{
				iVar9 = __LIB_0__::func_462(iVar9);
			}
			__LIB_1__::func_354(753, iVar9, Global_78127, 1, 0);
			__LIB_1__::func_354(2053, iVar9, Global_78127, 1, 0);
			__LIB_1__::func_348(161, 1, -1, 1);
		}
		if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
		{
			iVar10 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar11 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 1, PED::GET_PED_PROP_INDEX(iParam0, 1), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 1));
			if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0") || iVar10 == joaat("DLC_MP_ARENA_F_BERD_13_0"))
			{
				if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("ARENA_DRAW_0"), 1))
				{
					FILES::INIT_SHOP_PED_PROP(&Var12);
					if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0"))
					{
						FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_M_PEYES_0_0"), &Var12);
					}
					else
					{
						FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_F_PEYES_0_0"), &Var12);
					}
					PED::SET_PED_PROP_INDEX(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("ARENA_DRAW_0"), 1))
			{
				PED::CLEAR_PED_PROP(iParam0, 1);
			}
		}
	}
}

int func_286(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x29DE6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	int iVar17;
	var uVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	float fVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	var uVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	var uVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1574990 != 4 && Global_1574990 != 5) && Global_1574990 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_78127;
	}
	Global_78128++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = -1;
	iVar11 = -1;
	if (iParam5 == 0)
	{
		Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_78128 > 1)
		{
		}
		else
		{
			func_409(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar12 = Global_2883588;
		uVar13 = Global_2883589;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar14 = 15;
		if (iParam5 == 1)
		{
			uVar14 = { Global_78173 };
		}
		else
		{
			uVar14 = { __LIB_0__::func_459(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_78130[1 /*14*/].f_6, 1))
					{
						func_409(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iVar0, uVar14[iVar0], -1) };
					if (BitTest(Global_78130[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar15 = 9;
							if (iParam5 == 1)
							{
								uVar15 = { Global_78190 };
							}
							else
							{
								uVar15 = { __LIB_0__::func_466(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_409(iVar5, iVar0, uVar14[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_286(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_409(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iVar0, func_406(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_286(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_2__::func_979();
			if (iVar17 != -1)
			{
				__LIB_2__::func_978(iVar17, 0, iParam10);
			}
			func_400(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_0__::func_466(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_409(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_9__::func_528(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_286(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_409(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_286(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_391(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_286(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_286(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar19 = __LIB_0__::func_33(iParam1);
		if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar19) != Global_78130[1 /*14*/].f_3 || PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar19) != Global_78130[1 /*14*/].f_4)
		{
			iVar20 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
			iVar21 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 7, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 7), PED::GET_PED_TEXTURE_VARIATION(iParam0, 7));
			if (((iParam1 == 11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_JBIB"), 0)) || (iParam1 == 8 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_SPECIAL"), 0))) || (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_LEGS"), 0)))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 7));
			}
			if ((iParam1 == 11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("REMOVE_WITH_JBIB"), 0)) || (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("REMOVE_WITH_LEGS"), 0)))
			{
				if (iVar5 == joaat("MP_M_Freemode_01"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 15, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
				else if (iVar5 == joaat("MP_F_Freemode_01"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 2, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar22 = -1;
				if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("CREW_COL"), 11))
				{
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 0);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 1);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 2);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 3);
				}
				iVar23 = __LIB_0__::func_350(iParam0, 11);
				iVar24 = __LIB_0__::func_350(iParam0, 8);
				iVar25 = __LIB_0__::func_350(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_205(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_0__::func_350(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_390(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_9__::func_528(iParam0, iVar5, 11, iVar23, 3, 0);
					}
					switch (iVar26)
					{
						case joaat("DLC_MP_VAL_F_UPPR0_0"):
						case joaat("DLC_MP_VAL_F_UPPR0_1"):
						case joaat("DLC_MP_VAL_F_UPPR0_2"):
						case joaat("DLC_MP_VAL_F_UPPR0_3"):
						case joaat("DLC_MP_VAL_F_UPPR0_4"):
						case joaat("DLC_MP_VAL_F_UPPR0_5"):
							iVar27 = 11;
							iVar22 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
							if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("DRESS"), 0))
							{
								iVar27 = -99;
							}
							break;
					}
					if (iVar27 != -99)
					{
						iVar28 = 0;
						while (iVar28 < 18)
						{
							if (__LIB_0__::func_282(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_0__::func_350(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__::func_205(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_286(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_0__::func_280(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__::func_205(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__::func_205(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_0__::func_280(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_7__::func_884(iParam0, iParam2);
							iVar31 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_286(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_286(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_0__::func_452(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__::func_205(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_286(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_7__::func_884(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_0__::func_357(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__::func_205(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__::func_278(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_205(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_205(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_0__::func_451(iVar5, __LIB_0__::func_350(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_0__::func_451(iVar5, __LIB_0__::func_350(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_286(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_286(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_286(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_6__::func_37(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_400(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_390(iVar5, func_406(iParam0, 8, -1), iParam2, func_406(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_1__::func_360(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_1__::func_360(2160, iParam10, 0);
				}
				PED::SET_PED_HAIR_TINT(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar42 = -99;
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar42 = __LIB_0__::func_463(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_0__::func_462(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_328(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_390(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_9__::func_528(iParam0, iVar5, 11, iVar44, 3, 0);
				}
				switch (iVar43)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar46 = 11;
						iVar47 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar47, joaat("DRESS"), 0))
						{
							iVar46 = -99;
						}
						break;
				}
				if (iVar46 != -99)
				{
					iVar48 = 0;
					while (iVar48 < 18)
					{
						if (__LIB_0__::func_282(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_400(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_6__::func_37(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_390(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_0__::func_350(iParam0, 7);
				if (!__LIB_0__::func_547(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_1__::func_360(2100, iParam10, 0);
				iVar53 = __LIB_1__::func_360(2101, iParam10, 0);
				iVar54 = __LIB_1__::func_360(2102, iParam10, 0);
				fVar55 = __LIB_1__::func_680(135, iParam10);
				if (iVar5 == joaat("MP_M_Freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
				}
				else if (iVar5 == joaat("MP_F_Freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
				}
				iVar56 = 0;
				while (iVar56 < 20)
				{
					PED::SET_PED_MICRO_MORPH(iParam0, iVar56, 0f);
					iVar56++;
				}
			}
			else
			{
				__LIB_2__::func_996(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_0__::func_350(iParam0, 11);
			iVar58 = __LIB_0__::func_350(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_286(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_286(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_390(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_390(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_9__::func_528(iParam0, iVar5, 11, iVar57, 3, 0);
				}
				switch (iVar59)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar60 = 11;
						iVar61 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar61, joaat("DRESS"), 0))
						{
							iVar60 = -99;
						}
						break;
				}
				if (iVar60 != -99)
				{
					iVar62 = 0;
					while (iVar62 < 18)
					{
						if (__LIB_0__::func_282(iVar5, iVar60, iVar62) == iVar59)
						{
							iVar10 = iVar62;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar62++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_286(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2883588)
							{
								case joaat("DLC_MP_VAL_F_UPPR0_0"):
								case joaat("DLC_MP_VAL_F_UPPR0_1"):
								case joaat("DLC_MP_VAL_F_UPPR0_2"):
								case joaat("DLC_MP_VAL_F_UPPR0_3"):
								case joaat("DLC_MP_VAL_F_UPPR0_4"):
								case joaat("DLC_MP_VAL_F_UPPR0_5"):
									iVar10 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_390(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_286(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__::func_248(iParam0))
				{
					iVar63 = __LIB_0__::func_442(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_306(iParam0, 9, iVar63))
						{
							func_286(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_286(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_286(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_1__::func_360(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_0__::func_533(iParam0, iVar64), __LIB_0__::func_242(iParam0, iVar64), __LIB_0__::func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_0__::func_533(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__::func_242(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_0__::func_440(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_286(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_406(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_406(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_286(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_286(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar68 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 6);
				iVar69 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 6);
				iVar70 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 6, iVar68, iVar69);
				iVar71 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
				iVar72 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
				iVar73 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar71, iVar72);
				iVar74 = __LIB_0__::func_350(iParam0, 4);
				iVar75 = __LIB_0__::func_350(iParam0, 6);
				if (__LIB_0__::func_238(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_0__::func_439(iVar5, iVar74, iVar70))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_286(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_286(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_0__::func_237(iVar5, iVar75, iVar73))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_286(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_286(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__::func_238(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_0__::func_237(iVar5, iVar75, iVar73))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_286(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_286(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_0__::func_439(iVar5, iVar74, iVar70))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_286(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_286(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_391(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_286(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_286(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_287(iParam0, &uVar4))
		{
			func_286(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_286(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_286(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_286(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_406(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_0__::func_204(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_0__::func_204(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_286(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_287(int iParam0, var uParam1)//Position - 0x2BC90
{
	int iVar0;
	int iVar1;
	*uParam1 = func_406(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_1__::func_360(754, Global_78127, 0) != -99 && __LIB_0__::func_438())
	{
		if (__LIB_0__::func_236() == 4)
		{
			return 1;
		}
		if (__LIB_1__::func_360(754, Global_78127, 0) == 0 && __LIB_1__::func_360(755, Global_78127, 0) == 0)
		{
			if (__LIB_1__::func_342(161, Global_78127))
			{
				if (__LIB_1__::func_360(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_1__::func_360(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_1__::func_360(754, Global_78127, 0);
		iVar1 = __LIB_1__::func_360(755, Global_78127, 0);
		if (!func_306(iParam0, iVar1, iVar0))
		{
			if (__LIB_1__::func_342(161, Global_78127))
			{
				*uParam1 = __LIB_1__::func_360(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_1__::func_360(753, Global_78127, 0);
			}
			__LIB_1__::func_354(754, -99, Global_78127, 1, 0);
			__LIB_1__::func_354(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_306(int iParam0, int iParam1, int iParam2)//Position - 0x2FF4D
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	struct<5> Var17;
	var uVar18;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_0__::func_459(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				case 1:
					iVar4 = 4;
					break;
				case 2:
					iVar4 = 6;
					break;
				case 3:
					iVar4 = 7;
					break;
				case 4:
					iVar4 = 8;
					break;
				case 5:
					iVar4 = 11;
					break;
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_306(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_0__::func_466(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_306(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_6__::func_38(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_306(iParam0, 14, iVar6))
										{
											if (!__LIB_0__::func_551(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
											{
												Global_2883588 = uVar2;
												Global_2883589 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = __LIB_0__::func_350(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_6__::func_38(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_0__::func_551(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
						{
							Global_2883588 = uVar2;
							Global_2883589 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != joaat("0")) && uVar8.f_16)
		{
			if (__LIB_1__::func_360(1759, Global_78127, 0) != uVar8[10])
			{
				Global_2883588 = uVar2;
				Global_2883589 = uVar3;
				return 0;
			}
		}
		Global_2883588 = uVar2;
		Global_2883589 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { __LIB_0__::func_466(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_306(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_4 || Global_78130[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_78130[1 /*14*/].f_12 == 0 && BitTest(Global_78130[1 /*14*/].f_6, 6)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HELMET"), 1)) && FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588) > 0)
		{
			iVar16 = FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588);
			iVar12 = 0;
			while (iVar12 < iVar16)
			{
				FILES::GET_VARIANT_PROP(Global_2883588, iVar12, &iVar13, &uVar14, &uVar15);
				if (iVar13 != 0 && iVar13 != joaat("0"))
				{
					FILES::INIT_SHOP_PED_PROP(&Var17);
					FILES::GET_SHOP_PED_PROP(iVar13, &Var17);
					if (Var17.f_3 == PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) && Var17.f_4 == PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78129++;
			if (Global_78129 == 1)
			{
				if (__LIB_0__::func_240(iVar0, 11, __LIB_0__::func_350(iParam0, 11), -1))
				{
					if (__LIB_0__::func_353(iVar0, 4, iParam2, &uVar18))
					{
						return func_306(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_306(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_328(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x36C3A
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_3__::func_222(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_0__::func_450(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_2__::func_978(iVar1, 1, iParam2);
	}
	func_329(iParam0, bParam3, 0, -1);
}

void func_329(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x36C87
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<8> Var9;
	int iVar10;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_78127;
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar2 = __LIB_0__::func_276(iParam0);
		bVar3 = func_370(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_361(iParam0, iParam3);
		if (bParam1)
		{
			bVar4 = true;
		}
		if (bParam2)
		{
			bVar4 = false;
		}
		iVar6 = 0;
		while (iVar6 < 127)
		{
			if (__LIB_2__::func_761(iVar6, iVar0))
			{
				if (__LIB_0__::func_445(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_2__::func_998(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_2__::func_761(123, iVar0))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar8 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar2);
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar2, iVar7, &Var9))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var9.f_0))
				{
					iVar10 = (129 + iVar7);
					if (__LIB_2__::func_761(iVar10, iVar0))
					{
						if (__LIB_2__::func_998(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_5__::func_179(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__::func_260(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_361(int iParam0, int iParam1)//Position - 0x45CF2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar2 = __LIB_1__::func_360(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_406(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (iVar2)
						{
							case joaat("MP_Elite_M_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_M"):
							case joaat("MP_Heist4_Tee_039_M"):
							case joaat("MP_Heist4_Tee_041_M"):
							case joaat("MP_Heist4_Tee_043_M"):
							case joaat("MP_Heist4_Tee_049_M"):
							case joaat("MP_Heist4_Tee_051_M"):
							case joaat("MP_Heist4_Tee_055_M"):
							case joaat("MP_Heist4_Tee_057_M"):
							case joaat("MP_Heist4_Tee_059_M"):
							case joaat("MP_Heist4_Tee_061_M"):
							case joaat("MP_Heist4_Tee_063_M"):
							case joaat("MP_Heist4_Tee_065_M"):
							case joaat("MP_Tuner_Tee_000_M"):
							case joaat("MP_Tuner_Tee_002_M"):
							case joaat("MP_Tuner_Tee_003_M"):
							case joaat("MP_Tuner_Tee_005_M"):
							case joaat("MP_Tuner_Tee_006_M"):
							case joaat("MP_Tuner_Tee_008_M"):
							case joaat("MP_Tuner_Tee_010_M"):
								return 1;
								break;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			iVar2 = __LIB_1__::func_360(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 == 3)
			{
				if (iVar1 == 14)
				{
					return 1;
				}
			}
			else if (iVar0 > 15)
			{
				iVar5 = func_406(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (iVar2)
						{
							case joaat("MP_Elite_F_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_F"):
							case joaat("MP_Heist4_Tee_039_F"):
							case joaat("MP_Heist4_Tee_041_F"):
							case joaat("MP_Heist4_Tee_043_F"):
							case joaat("MP_Heist4_Tee_049_F"):
							case joaat("MP_Heist4_Tee_051_F"):
							case joaat("MP_Heist4_Tee_055_F"):
							case joaat("MP_Heist4_Tee_057_F"):
							case joaat("MP_Heist4_Tee_059_F"):
							case joaat("MP_Heist4_Tee_061_F"):
							case joaat("MP_Heist4_Tee_063_F"):
							case joaat("MP_Heist4_Tee_065_F"):
							case joaat("MP_Tuner_Tee_000_F"):
							case joaat("MP_Tuner_Tee_002_F"):
							case joaat("MP_Tuner_Tee_003_F"):
							case joaat("MP_Tuner_Tee_005_F"):
							case joaat("MP_Tuner_Tee_006_F"):
							case joaat("MP_Tuner_Tee_008_F"):
							case joaat("MP_Tuner_Tee_010_F"):
								return 1;
								break;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
	}
	return 0;
}

int func_370(int iParam0, bool bParam1)//Position - 0x46150
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
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
							return 1;
							break;
						case 1:
						case 7:
						case 12:
							iVar2 = __LIB_5__::func_29(joaat("MP_M_Freemode_01"), 11, func_406(iParam0, 11, -1), 0);
							if (((iVar1 == 1 && iVar2 == 88) || (iVar1 == 7 && iVar2 == 89)) || (iVar1 == 12 && iVar2 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				case 5:
					if (!bParam1)
					{
						if (__LIB_2__::func_761(13, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(14, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(15, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(16, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(71, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(72, -1))
						{
						}
						else if (__LIB_0__::func_536(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_406(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
							if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_12"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar5 = func_406(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
							if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("COMBAT_TOP"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar7 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_406(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar7 == 88) || (iVar1 == 4 && iVar7 == 89)) || (iVar1 == 9 && iVar7 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				case 3:
					switch (iVar1)
					{
						case 14:
							return 1;
							break;
					}
					break;
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_406(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
							if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HEIST_DRAW_13"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar10 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_406(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar10 == 88) || (iVar1 == 4 && iVar10 == 89)) || (iVar1 == 9 && iVar10 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar11 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_406(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar11 == 88) || (iVar1 == 4 && iVar11 == 89)) || (iVar1 == 9 && iVar11 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar12 = func_406(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
							if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("COMBAT_TOP"), 0))
							{
								return 1;
							}
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_390(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4F06B
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
	iVar0 = -99;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			if (iParam2 >= 237)
			{
				iVar2 = __LIB_0__::func_205(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__::func_278(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__::func_205(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__::func_278(iVar4);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				iVar0 = 14;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_PYJAMAS"), 0))
			{
				iVar0 = 6;
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
			{
				iVar0 = 1;
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_2"), 0))
			{
				iVar0 = 4;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
			{
				if (iParam1 == 240)
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_390(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 0;
					}
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 12;
			}
			else if (((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_15"), 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_24"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 4;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_7"), 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar3 == 12)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 11;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_9"), 0))
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_JACKET"), 0))
			{
				iVar0 = 12;
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_6"), 0))
			{
				iVar0 = 2;
			}
			else if (((iParam2 >= 0 && iParam2 <= 31) || iVar1 == 0) || iVar1 == 1)
			{
				iVar0 = 0;
			}
			else if ((((((((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 96 && iParam2 <= 107)) || (iParam2 >= 108 && iParam2 <= 123)) || (iParam2 >= 156 && iParam2 <= 171)) || iVar1 == 3) || iVar1 == 4) || iVar1 == 6) || iVar1 == 7) || iVar1 == 10)
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240 || iVar3 == 15)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 160 && iParam1 <= 175) || iVar3 == 10)
				{
					iVar0 = 4;
				}
				else if ((iParam1 >= 176 && iParam1 <= 191) || iVar3 == 11)
				{
					iVar0 = 12;
				}
				else if ((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 224 && iParam1 <= 239)) || iVar3 == 1) || iVar3 == 14)
				{
					iVar0 = 1;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 32 && iParam1 <= 47) || iVar3 == 2)
				{
					iVar0 = 4;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SHIRT_BRACES"), 0))
				{
					if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("CLOSED_COLLAR"), 0))
					{
						iVar0 = 4;
					}
					else
					{
						iVar0 = 1;
					}
				}
				else if ((iParam1 >= 144 && iParam1 <= 159) || iVar3 == 9)
				{
					iVar0 = 1;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0))
				{
					iVar0 = 4;
				}
				else if (iParam1 >= 241)
				{
					if (iVar4 != -1)
					{
						iVar5 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar4);
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar6, &iVar7, &iVar8, &iVar9);
							if (iVar9 == 3)
							{
								if (iVar7 != 0 && iVar7 != joaat("0"))
								{
									iVar0 = __LIB_0__::func_204(iParam0, iVar7, 3, 3);
								}
								else
								{
									iVar0 = iVar8;
								}
								iVar6 = iVar5 + 1;
							}
							iVar6++;
						}
					}
				}
			}
			else if ((iParam2 >= 172 && iParam2 <= 187) || iVar1 == 11)
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SWEAT_VEST"), 0))
				{
					iVar0 = 6;
				}
				else if ((((iParam1 >= 48 && iParam1 <= 63) || (iParam1 >= 112 && iParam1 <= 127)) || iVar3 == 3) || iVar3 == 7)
				{
					iVar0 = 11;
				}
				else if ((iParam1 >= 96 && iParam1 <= 111) || iVar3 == 6)
				{
					iVar0 = 11;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LONG_SLEEVE"), 0))
				{
					iVar0 = 12;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			else if ((iParam2 >= 140 && iParam2 <= 155) || iVar1 == 9)
			{
				iVar0 = 0;
			}
			else if (iParam2 == 236)
			{
				if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			break;
		case joaat("MP_F_Freemode_01"):
			if (iParam2 >= 256)
			{
				iVar2 = __LIB_0__::func_205(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__::func_278(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__::func_205(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__::func_278(iVar4);
				switch (iVar4)
				{
					case joaat("DLC_MP_BEACH_F_ACCS2_0"):
					case joaat("DLC_MP_BEACH_F_ACCS2_1"):
					case joaat("DLC_MP_BEACH_F_ACCS2_2"):
					case joaat("DLC_MP_BEACH_F_ACCS2_3"):
					case joaat("DLC_MP_BEACH_F_ACCS2_4"):
					case joaat("DLC_MP_BEACH_F_ACCS2_5"):
					case joaat("DLC_MP_BEACH_F_ACCS2_6"):
					case joaat("DLC_MP_BEACH_F_ACCS2_7"):
					case joaat("DLC_MP_BEACH_F_ACCS2_8"):
					case joaat("DLC_MP_BEACH_F_ACCS2_9"):
					case joaat("DLC_MP_BEACH_F_ACCS2_10"):
					case joaat("DLC_MP_BEACH_F_ACCS2_11"):
						iVar3 = 15;
						break;
					case joaat("DLC_MP_VAL_F_ACCS2_0"):
					case joaat("DLC_MP_VAL_F_ACCS2_1"):
					case joaat("DLC_MP_VAL_F_ACCS2_2"):
					case joaat("DLC_MP_VAL_F_ACCS2_3"):
					case joaat("DLC_MP_VAL_F_ACCS2_4"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_0"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_1"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_2"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_3"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_4"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_5"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_6"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_7"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_8"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_9"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_10"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_11"):
						iVar3 = 13;
						break;
					}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				iVar0 = 0;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
			{
				if ((((((((((((((((((((((((((((iParam1 >= 34 && iParam1 <= 49) || (iParam1 >= 50 && iParam1 <= 65)) || (iParam1 >= 71 && iParam1 <= 86)) || (iParam1 >= 87 && iParam1 <= 102)) || (iParam1 >= 103 && iParam1 <= 118)) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 4) || iVar3 == 5) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 15) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_0")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_1")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_2")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_3")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_4")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_5")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_6")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0))
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_390(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 14;
					}
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("OPEN_SHORT"), 0))
			{
				if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_5"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0)))
				{
					iVar0 = 9;
				}
				else
				{
					iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_0__::func_280(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LONG_SLEEVE"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_0"), 0))
			{
				iVar0 = 7;
			}
			else if ((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_2"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0)))
			{
				iVar0 = 3;
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW_DRAW_1"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = 15;
				}
			}
			else if ((((((((((((((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_0"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_6"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_7"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_8"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0)))
			{
				if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 96 && iParam2 <= 111)) || (iParam2 >= 128 && iParam2 <= 143)) || iVar1 == 1) || iVar1 == 6) || iVar1 == 8)
				{
					iVar0 = 1;
				}
				else if (((((((((((((((((((((((((((iParam2 >= 112 && iParam2 <= 127) || (iParam2 >= 160 && iParam2 <= 175)) || iVar1 == 7) || iVar1 == 10) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TAILS_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_33"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0))
				{
					iVar0 = 3;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_7"), 0))
				{
					iVar0 = 9;
				}
			}
			else if ((((((((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_0"), 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_33"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0)))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0))
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else if ((iParam2 >= 16 && iParam2 <= 31) || iVar1 == 1)
			{
				if ((((iParam1 >= 50 && iParam1 <= 65) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 5) || iVar3 == 15)
				{
					iVar0 = 5;
				}
				else if (iParam1 >= 136)
				{
					if (iVar4 != -1)
					{
						iVar10 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar4);
						iVar11 = 0;
						while (iVar11 < iVar10)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar11, &iVar12, &iVar13, &iVar14);
							if (iVar14 == 3)
							{
								if (iVar12 != 0 && iVar12 != joaat("0"))
								{
									iVar0 = __LIB_0__::func_204(iParam0, iVar12, 3, 4);
								}
								else
								{
									iVar0 = iVar13;
								}
								iVar11 = iVar10 + 1;
							}
							iVar11++;
						}
					}
				}
			}
			else if (((iParam2 >= 112 && iParam2 <= 127) || iVar1 == 7) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 6;
				}
			}
			break;
	}
	return iVar0;
}

void func_391(int iParam0)//Position - 0x503A7
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
	bool bVar14;
	struct<5> Var15;
	int* iVar16;
	int iVar17;
	struct<5> Var18;
	int* iVar19;
	int iVar20;
	struct<5> Var21;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
	iVar3 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	iVar4 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
	iVar5 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
	iVar6 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
	iVar7 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10);
	iVar8 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 10);
	iVar9 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, iVar2);
	iVar10 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar3, iVar4);
	iVar11 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar5, iVar6);
	iVar12 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	iVar13 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 10, iVar7, iVar8);
	bVar14 = false;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOODED_JACKET"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOOD_UP"), 0))
	{
		if (!func_396(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_0__::func_286(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_285(iVar13, 11, -1))
				{
					if (__LIB_0__::func_285(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_284(iVar13, 10, &iVar17, -1))
					{
						if (__LIB_0__::func_285(iVar17, 11, Var15.f_1))
						{
							FILES::GET_SHOP_PED_COMPONENT(iVar17, &Var18);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var18.f_3, Var18.f_4, 0);
						}
					}
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_16"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_19"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("GORKA_SUIT"), 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_M_DECL_10_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_2"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_0_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_0_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_3"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_16"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_19"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("GORKA_SUIT"), 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_F_DECL_10_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_7"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_1_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_1_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_8"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_2_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_2_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOODED_JACKET"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOOD_DOWN"), 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("FAKE_HAT"), 1))
		{
			if (__LIB_0__::func_286(iVar9, 1, 0, &iVar19))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar19, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_285(iVar13, 11, -1))
				{
					if (__LIB_0__::func_285(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_284(iVar13, 10, &iVar20, -1))
					{
						if (__LIB_0__::func_285(iVar20, 11, Var15.f_1))
						{
							FILES::GET_SHOP_PED_COMPONENT(iVar20, &Var21);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var21.f_3, Var21.f_4, 0);
						}
					}
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_16"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_19"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("GORKA_SUIT"), 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_M_DECL_10_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_2"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_0_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_0_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_3"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_16"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_19"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("GORKA_SUIT"), 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_F_DECL_10_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_7"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_1_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_1_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_8"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_2_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_2_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("HAZ_HOOD"), 0) || __LIB_0__::func_283(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_396(iParam0, &bVar14, iVar9, iVar10, iVar12))
		{
			if (bVar14)
			{
				if (iVar0 == joaat("MP_M_Freemode_01"))
				{
					iVar5 = 15;
					iVar6 = 0;
				}
				else
				{
					iVar5 = 14;
					iVar6 = 0;
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_6_0"), &Var15);
				iVar5 = Var15.f_3;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_10_0"), &Var15);
				iVar5 = Var15.f_3;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_7_0"), &Var15);
			iVar5 = Var15.f_3;
		}
		else
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_11_0"), &Var15);
			iVar5 = Var15.f_3;
		}
		if (iVar5 != PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8) || iVar6 != PED::GET_PED_TEXTURE_VARIATION(iParam0, 8))
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iVar5, iVar6, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
		}
	}
}

int func_396(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x50D71
{
	int iVar0;
	*iParam1 = 0;
	if (iParam2 == -1)
	{
		iParam2 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	}
	if (iParam3 == -1)
	{
		iParam3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
	}
	if (iParam4 == -1)
	{
		iParam4 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HOODED_JACKET"), 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("FITTED_HOOD"), 0))
		{
			if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam4, joaat("HOOD_HAT"), 1) && PED::GET_PED_PROP_INDEX(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HOOD_COMPAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam4, joaat("HOOD_HAT"), 1))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("SKI_MASK"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("BIKER_MASK"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("BIKER_MASK"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("NIGHT_VISION"), 0))
			{
				return 0;
			}
		}
		else
		{
			if (PED::GET_PED_PROP_INDEX(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HOOD_COMPAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				return 0;
			}
		}
		return 1;
	}
	if (iVar0 == joaat("MP_M_Freemode_01"))
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HEIST_DRAW_14"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case joaat("DLC_MP_HEIST_M_BERD_21_0"):
			case joaat("DLC_MP_HEIST_M_BERD_21_1"):
			case joaat("DLC_MP_HEIST_M_BERD_21_2"):
			case joaat("DLC_MP_HEIST_M_BERD_21_3"):
			case joaat("DLC_MP_HEIST_M_BERD_21_4"):
			case joaat("DLC_MP_HEIST_M_BERD_21_5"):
			case joaat("DLC_MP_HEIST_M_BERD_21_6"):
			case joaat("DLC_MP_HEIST_M_BERD_21_7"):
			case joaat("DLC_MP_HEIST_M_BERD_21_8"):
			case joaat("DLC_MP_HEIST_M_BERD_14_0"):
			case joaat("DLC_MP_HEIST_M_BERD_14_1"):
			case joaat("DLC_MP_HEIST_M_BERD_14_2"):
			case joaat("DLC_MP_HEIST_M_BERD_14_3"):
			case joaat("DLC_MP_HEIST_M_BERD_14_4"):
			case joaat("DLC_MP_HEIST_M_BERD_14_5"):
			case joaat("DLC_MP_HEIST_M_BERD_14_6"):
			case joaat("DLC_MP_HEIST_M_BERD_14_7"):
			case joaat("DLC_MP_HEIST_M_BERD_14_8"):
			case joaat("DLC_MP_HEIST_M_BERD_14_9"):
			case joaat("DLC_MP_HEIST_M_BERD_14_10"):
			case joaat("DLC_MP_HEIST_M_BERD_14_11"):
			case joaat("DLC_MP_HEIST_M_BERD_14_12"):
			case joaat("DLC_MP_HEIST_M_BERD_14_13"):
			case joaat("DLC_MP_HEIST_M_BERD_14_14"):
			case joaat("DLC_MP_HEIST_M_BERD_14_15"):
			case joaat("DLC_MP_HEIST_M_BERD_14_16"):
			case joaat("DLC_MP_HEIST_M_BERD_14_17"):
			case joaat("DLC_MP_HEIST_M_BERD_14_18"):
			case joaat("DLC_MP_HEIST_M_BERD_14_19"):
			case joaat("DLC_MP_HEIST_M_BERD_14_20"):
			case joaat("DLC_MP_HEIST_M_BERD_14_21"):
			case joaat("DLC_MP_HEIST_M_BERD_14_22"):
			case joaat("DLC_MP_HEIST_M_BERD_14_23"):
			case joaat("DLC_MP_HEIST_M_BERD_14_24"):
			case joaat("DLC_MP_HEIST_M_BERD_14_25"):
			case joaat("DLC_MP_IND_M_BERD_4_0"):
			case joaat("DLC_MP_IND_M_BERD_4_1"):
			case joaat("DLC_MP_IND_M_BERD_3_0"):
			case joaat("DLC_MP_IND_M_BERD_3_1"):
				*iParam1 = 1;
				return 0;
				break;
		}
	}
	else
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HEIST_DRAW_15"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("SCRUFFY_BALACLAVA"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case joaat("DLC_MP_SMUG_F_BERD_8_0"):
			case joaat("DLC_MP_SMUG_F_BERD_8_1"):
			case joaat("DLC_MP_SMUG_F_BERD_8_2"):
			case joaat("DLC_MP_SMUG_F_BERD_8_3"):
			case joaat("DLC_MP_SMUG_F_BERD_8_4"):
			case joaat("DLC_MP_SMUG_F_BERD_8_5"):
			case joaat("DLC_MP_SMUG_F_BERD_8_6"):
			case joaat("DLC_MP_SMUG_F_BERD_8_7"):
			case joaat("DLC_MP_SMUG_F_BERD_8_8"):
			case joaat("DLC_MP_SMUG_F_BERD_8_9"):
			case joaat("DLC_MP_SMUG_F_BERD_8_10"):
			case joaat("DLC_MP_SMUG_F_BERD_8_11"):
			case joaat("DLC_MP_SMUG_F_BERD_8_12"):
			case joaat("DLC_MP_SMUG_F_BERD_8_13"):
			case joaat("DLC_MP_SMUG_F_BERD_8_14"):
			case joaat("DLC_MP_SMUG_F_BERD_8_15"):
			case joaat("DLC_MP_SMUG_F_BERD_8_16"):
			case joaat("DLC_MP_SMUG_F_BERD_8_17"):
			case joaat("DLC_MP_SMUG_F_BERD_8_18"):
			case joaat("DLC_MP_SMUG_F_BERD_8_19"):
			case joaat("DLC_MP_SMUG_F_BERD_8_20"):
			case joaat("DLC_MP_SMUG_F_BERD_8_21"):
			case joaat("DLC_MP_SMUG_F_BERD_8_22"):
			case joaat("DLC_MP_SMUG_F_BERD_8_23"):
			case joaat("DLC_MP_SMUG_F_BERD_8_24"):
			case joaat("DLC_MP_SMUG_F_BERD_8_25"):
			case joaat("DLC_MP_HEIST_F_BERD_23_0"):
			case joaat("DLC_MP_HEIST_F_BERD_23_1"):
			case joaat("DLC_MP_HEIST_F_BERD_23_2"):
			case joaat("DLC_MP_HEIST_F_BERD_23_3"):
			case joaat("DLC_MP_HEIST_F_BERD_23_4"):
			case joaat("DLC_MP_HEIST_F_BERD_23_5"):
			case joaat("DLC_MP_HEIST_F_BERD_23_6"):
			case joaat("DLC_MP_HEIST_F_BERD_23_7"):
			case joaat("DLC_MP_HEIST_F_BERD_23_8"):
			case joaat("DLC_MP_HEIST_F_BERD_23_9"):
			case joaat("DLC_MP_HEIST_F_BERD_22_0"):
			case joaat("DLC_MP_HEIST_F_BERD_22_1"):
			case joaat("DLC_MP_HEIST_F_BERD_22_2"):
			case joaat("DLC_MP_HEIST_F_BERD_22_3"):
			case joaat("DLC_MP_HEIST_F_BERD_22_4"):
			case joaat("DLC_MP_HEIST_F_BERD_22_5"):
			case joaat("DLC_MP_HEIST_F_BERD_22_6"):
			case joaat("DLC_MP_HEIST_F_BERD_22_7"):
			case joaat("DLC_MP_HEIST_F_BERD_22_8"):
			case joaat("DLC_MP_HEIST_F_BERD_22_9"):
			case joaat("DLC_MP_HEIST_F_BERD_22_10"):
			case joaat("DLC_MP_HEIST_F_BERD_22_11"):
			case joaat("DLC_MP_HEIST_F_BERD_22_12"):
			case joaat("DLC_MP_HEIST_F_BERD_22_13"):
			case joaat("DLC_MP_HEIST_F_BERD_22_14"):
			case joaat("DLC_MP_HEIST_F_BERD_22_15"):
			case joaat("DLC_MP_HEIST_F_BERD_22_16"):
			case joaat("DLC_MP_HEIST_F_BERD_22_17"):
			case joaat("DLC_MP_HEIST_F_BERD_22_18"):
			case joaat("DLC_MP_HEIST_F_BERD_22_19"):
			case joaat("DLC_MP_HEIST_F_BERD_22_20"):
			case joaat("DLC_MP_HEIST_F_BERD_22_21"):
			case joaat("DLC_MP_HEIST_F_BERD_21_0"):
			case joaat("DLC_MP_HEIST_F_BERD_21_1"):
			case joaat("DLC_MP_HEIST_F_BERD_21_2"):
			case joaat("DLC_MP_HEIST_F_BERD_21_3"):
			case joaat("DLC_MP_HEIST_F_BERD_21_4"):
			case joaat("DLC_MP_HEIST_F_BERD_21_5"):
			case joaat("DLC_MP_HEIST_F_BERD_21_6"):
			case joaat("DLC_MP_HEIST_F_BERD_21_7"):
			case joaat("DLC_MP_HEIST_F_BERD_21_8"):
			case joaat("DLC_MP_HEIST_F_BERD_20_0"):
			case joaat("DLC_MP_HEIST_F_BERD_20_1"):
			case joaat("DLC_MP_HEIST_F_BERD_19_0"):
			case joaat("DLC_MP_HEIST_F_BERD_19_1"):
			case joaat("DLC_MP_HEIST_F_BERD_19_2"):
			case joaat("DLC_MP_HEIST_F_BERD_19_3"):
			case joaat("DLC_MP_HEIST_F_BERD_19_4"):
			case joaat("DLC_MP_HEIST_F_BERD_19_5"):
			case joaat("DLC_MP_HEIST_F_BERD_19_6"):
			case joaat("DLC_MP_HEIST_F_BERD_19_7"):
			case joaat("DLC_MP_HEIST_F_BERD_19_8"):
			case joaat("DLC_MP_HEIST_F_BERD_19_9"):
			case joaat("DLC_MP_HEIST_F_BERD_19_10"):
			case joaat("DLC_MP_HEIST_F_BERD_18_0"):
			case joaat("DLC_MP_HEIST_F_BERD_18_1"):
			case joaat("DLC_MP_HEIST_F_BERD_18_2"):
			case joaat("DLC_MP_HEIST_F_BERD_18_3"):
			case joaat("DLC_MP_HEIST_F_BERD_18_4"):
			case joaat("DLC_MP_HEIST_F_BERD_18_5"):
			case joaat("DLC_MP_HEIST_F_BERD_18_6"):
			case joaat("DLC_MP_HEIST_F_BERD_18_7"):
			case joaat("DLC_MP_HEIST_F_BERD_18_8"):
			case joaat("DLC_MP_HEIST_F_BERD_17_0"):
			case joaat("DLC_MP_HEIST_F_BERD_17_1"):
			case joaat("DLC_MP_HEIST_F_BERD_17_2"):
			case joaat("DLC_MP_HEIST_F_BERD_17_3"):
			case joaat("DLC_MP_HEIST_F_BERD_17_4"):
			case joaat("DLC_MP_HEIST_F_BERD_17_5"):
			case joaat("DLC_MP_HEIST_F_BERD_17_6"):
			case joaat("DLC_MP_HEIST_F_BERD_17_7"):
			case joaat("DLC_MP_HEIST_F_BERD_17_8"):
			case joaat("DLC_MP_HEIST_F_BERD_17_9"):
			case joaat("DLC_MP_HEIST_F_BERD_17_10"):
			case joaat("DLC_MP_HEIST_F_BERD_14_0"):
			case joaat("DLC_MP_HEIST_F_BERD_14_1"):
			case joaat("DLC_MP_HEIST_F_BERD_14_2"):
			case joaat("DLC_MP_HEIST_F_BERD_14_3"):
			case joaat("DLC_MP_HEIST_F_BERD_14_4"):
			case joaat("DLC_MP_HEIST_F_BERD_14_5"):
			case joaat("DLC_MP_HEIST_F_BERD_14_6"):
			case joaat("DLC_MP_HEIST_F_BERD_14_7"):
			case joaat("DLC_MP_HEIST_F_BERD_14_8"):
			case joaat("DLC_MP_HEIST_F_BERD_14_9"):
			case joaat("DLC_MP_HEIST_F_BERD_14_10"):
			case joaat("DLC_MP_HEIST_F_BERD_14_11"):
			case joaat("DLC_MP_HEIST_F_BERD_14_12"):
			case joaat("DLC_MP_HEIST_F_BERD_14_13"):
			case joaat("DLC_MP_HEIST_F_BERD_14_14"):
			case joaat("DLC_MP_HEIST_F_BERD_14_15"):
			case joaat("DLC_MP_HEIST_F_BERD_14_16"):
			case joaat("DLC_MP_HEIST_F_BERD_14_17"):
			case joaat("DLC_MP_HEIST_F_BERD_14_18"):
			case joaat("DLC_MP_HEIST_F_BERD_14_19"):
			case joaat("DLC_MP_HEIST_F_BERD_14_20"):
			case joaat("DLC_MP_HEIST_F_BERD_14_21"):
			case joaat("DLC_MP_HEIST_F_BERD_14_22"):
			case joaat("DLC_MP_HEIST_F_BERD_14_23"):
			case joaat("DLC_MP_HEIST_F_BERD_14_24"):
			case joaat("DLC_MP_HEIST_F_BERD_14_25"):
			case joaat("DLC_MP_HEIST_F_BERD_13_0"):
			case joaat("DLC_MP_HEIST_F_BERD_13_1"):
			case joaat("DLC_MP_HEIST_F_BERD_13_2"):
			case joaat("DLC_MP_HEIST_F_BERD_13_3"):
			case joaat("DLC_MP_HEIST_F_BERD_12_0"):
			case joaat("DLC_MP_HEIST_F_BERD_12_1"):
			case joaat("DLC_MP_HEIST_F_BERD_12_2"):
			case joaat("DLC_MP_HEIST_F_BERD_12_3"):
			case joaat("DLC_MP_HEIST_F_BERD_7_0"):
			case joaat("DLC_MP_HEIST_F_BERD_7_1"):
			case joaat("DLC_MP_HEIST_F_BERD_5_0"):
			case joaat("DLC_MP_HEIST_F_BERD_5_1"):
			case joaat("DLC_MP_HEIST_F_BERD_4_0"):
			case joaat("DLC_MP_HEIST_F_BERD_4_1"):
			case joaat("DLC_MP_HEIST_F_BERD_0_0"):
			case joaat("DLC_MP_XMAS2_F_BERD_1_0"):
			case joaat("DLC_MP_LTS_F_BERD_0_0"):
			case joaat("DLC_MP_LTS_F_BERD_0_1"):
			case joaat("DLC_MP_LTS_F_BERD_0_2"):
			case joaat("DLC_MP_LTS_F_BERD_0_3"):
			case joaat("DLC_MP_LTS_F_BERD_0_4"):
			case joaat("DLC_MP_IND_F_BERD_4_0"):
			case joaat("DLC_MP_IND_F_BERD_4_1"):
			case joaat("DLC_MP_IND_F_BERD_3_0"):
			case joaat("DLC_MP_IND_F_BERD_3_1"):
				*iParam1 = 1;
				return 0;
				break;
			}
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_406(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_400(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x53759
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_451(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_0__::func_280(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_0__::func_350(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_0__::func_350(iParam0, 11);
				if (!__LIB_0__::func_280(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_3__::func_222(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_5__::func_175(iVar0, iParam2, 13) && !__LIB_5__::func_175(iVar0, iParam2, 14)) && !__LIB_5__::func_175(iVar0, iParam2, 15)) && !__LIB_5__::func_175(iVar0, iParam2, 16)) && !__LIB_5__::func_175(iVar0, iParam2, 71)) && !__LIB_5__::func_175(iVar0, iParam2, 72))
				{
					__LIB_3__::func_222(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_5__::func_29(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_2__::func_977(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_2__::func_978(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_406(int iParam0, int iParam1, int iParam2)//Position - 0x53A08
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
				if (func_306(iParam0, iParam1, iVar0))
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
				if (func_306(iParam0, iParam1, iVar1))
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

void func_409(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x53B87
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_78127 != __LIB_0__::func_5() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			if (bParam3)
			{
				iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Global_2883588);
				iVar5 = 0;
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (iVar5 < Global_4538446)
					{
						Global_4538446[iVar5] = -1;
						Global_4538457[iVar5] = -1;
					}
					FILES::GET_VARIANT_COMPONENT(Global_2883588, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar4 != 10 && iVar4 != 9)
					{
						if (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("STOCKINGS"), 0))
						{
						}
						else if (iVar2 != 0 && iVar2 != joaat("0"))
						{
							__LIB_2__::func_411(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_409(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
						}
					}
					iVar1++;
				}
				Global_4538445++;
				if (Global_4538445 < 2)
				{
					iVar1 = 0;
					while (iVar1 < iVar5)
					{
						if (iVar1 < Global_4538446)
						{
							if (Global_4538446[iVar1] != -1)
							{
								if (iParam0 == joaat("MP_M_Freemode_01"))
								{
									func_409(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_409(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
								}
							}
						}
						iVar1++;
					}
				}
				Global_4538445 = (Global_4538445 - 1);
			}
			return;
		}
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && !BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (__LIB_0__::func_36(iParam1, Global_78130[1 /*14*/].f_2, &iVar6))
			{
				iVar7 = __LIB_1__::func_360(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_1__::func_354(iVar6, iVar7, Global_78127, 1, 0);
			}
			if (bParam3 == 1)
			{
				if (iParam0 == joaat("MP_M_Freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar8 = (75 + Global_78130[2 /*14*/].f_4);
							func_409(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_409(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_409(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_409(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_409(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_409(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_409(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_409(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_409(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_409(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_409(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_409(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_409(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
									break;
								}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == joaat("MP_F_Freemode_01"))
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_409(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_409(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_409(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_409(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_451(int iParam0)//Position - 0x6C8BC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_406(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_11"), 0))
					{
						return 1;
					}
					else if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_19"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_23"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_27"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_1"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						return 1;
					}
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_406(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
					{
						return 1;
					}
					else if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_22"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_23"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_26"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_28"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_6"), 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_454(int iParam0, int iParam1, int iParam2)//Position - 0x6CC2E
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_258(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_456(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6CCF5
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_258(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_458(int iParam0, int iParam1, int iParam2)//Position - 0x6CFB5
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
				if (func_258(iParam0, iParam1, iVar0))
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
				if (func_258(iParam0, iParam1, iVar1))
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

int func_459(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x6D056
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
		Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_3__::func_367(iParam1);
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
				Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, iVar0, uVar11[iVar0], -1) };
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
							Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_3__::func_367(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_16__::func_225(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_459(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						__LIB_3__::func_367(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_16__::func_225(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_459(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, iVar0, func_458(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_456(iParam0, iVar10, &iVar4, 1))
							{
								func_459(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_459(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_12__::func_14(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_459(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_459(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_459(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_459(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_459(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
			Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_3__::func_367(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_16__::func_225(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_459(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_3__::func_367(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_16__::func_225(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_459(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = __LIB_16__::func_225(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_459(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_13__::func_589(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_456(iParam0, iVar10, &iVar4, 0))
		{
			func_459(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_454(iParam0, iVar10, &iVar4))
		{
			func_459(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

void func_494(int iParam0)//Position - 0x714AF
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_0__::func_374(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__::func_407(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_13__::func_802(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_407(iParam0);
				}
			}
		}
		func_282(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_458(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_495(__LIB_12__::func_894(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_458(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_458(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_495(__LIB_12__::func_894(0), 3, 70, 1, 0, 0, 0);
					func_495(__LIB_12__::func_894(0), 3, 71, 1, 0, 0, 0);
					func_495(__LIB_12__::func_894(0), 3, 72, 1, 0, 0, 0);
					func_495(__LIB_12__::func_894(0), 3, 73, 1, 0, 0, 0);
					func_495(__LIB_12__::func_894(0), 3, 74, 1, 0, 0, 0);
					func_495(__LIB_12__::func_894(0), 3, 75, 1, 0, 0, 0);
					func_495(__LIB_12__::func_894(0), 4, 41, 1, 0, 0, 0);
					func_495(__LIB_12__::func_894(0), 4, 42, 1, 0, 0, 0);
					func_495(__LIB_12__::func_894(0), 4, 43, 1, 0, 0, 0);
					func_495(__LIB_12__::func_894(0), 4, 44, 1, 0, 0, 0);
					func_495(__LIB_12__::func_894(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_458(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_282(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_495(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x7170C
{
	__LIB_16__::func_846(iParam0, iParam1, iParam2, bParam3);
	func_498(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_17__::func_924(iParam0, iParam1, iParam2, 0);
	}
}

int func_498(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x718C7
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_12__::func_14(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
			if (iParam1 == 12)
			{
				iVar0 = 1;
				if (iParam0 == joaat("Player_Zero"))
				{
					if (iParam2 == 31)
					{
						iVar0 = 0;
					}
				}
				if (iVar0 == 1)
				{
					uVar3 = { __LIB_0__::func_459(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_498(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_16__::func_846(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_498(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_16__::func_846(iParam0, 14, uVar4[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
		}
		if (iParam4 == 1 && bParam3 == 1)
		{
			switch (iParam0)
			{
				case joaat("Player_Zero"):
					break;
				case joaat("Player_One"):
					switch (iParam1)
					{
						case 3:
							if (iParam2 >= 176 && iParam2 <= 191)
							{
								iVar5 = (227 + Global_78130[1 /*14*/].f_4);
								func_498(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_498(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_498(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_498(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_498(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_498(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_498(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_498(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_498(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_498(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_498(iParam0, 14, iVar5, 1, 0);
							}
							break;
					}
					break;
				case joaat("Player_Two"):
					switch (iParam1)
					{
						case 4:
							if (iParam2 >= 81 && iParam2 <= 90)
							{
								iVar5 = (94 + Global_78130[1 /*14*/].f_4);
								func_498(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_498(iParam0, 14, 17, 1, 0);
							}
							break;
					}
					break;
				}
		}
		return 1;
	}
	return 0;
}

int func_502(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x71EAC
{
	int iVar0;
	if (__LIB_0__::func_374(iParam1))
	{
		iVar0 = __LIB_12__::func_894(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
			{
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, true, true);
				__LIB_16__::func_895(*iParam0, iParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_494(*iParam0);
				__LIB_15__::func_980(*iParam0, 1, 0);
				__LIB_15__::func_977(*iParam0);
				__LIB_15__::func_976(*iParam0);
				func_189(*iParam0, bParam6);
				__LIB_0__::func_405(*iParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_509()//Position - 0x71FDA
{
	if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1) == 0)
	{
		__LIB_39__::func_253();
	}
	__LIB_10__::func_253(0);
	__LIB_25__::func_187(0);
	__LIB_24__::func_489(8, 0, -1);
	__LIB_0__::func_671(0);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("MainTransition");
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_133();
	}
}

int func_526()//Position - 0x72364
{
	Global_1574629 = __LIB_0__::func_464();
	return 0;
}

int func_536(int iParam0, int iParam1)//Position - 0x72A09
{
	var uVar0;
	int iVar1;
	var uVar2;
	if (__LIB_0__::func_374(iParam0))
	{
		if (__LIB_36__::func_768(iParam1))
		{
			return 1;
		}
		uVar0 = __LIB_17__::func_917(iParam0, iParam1);
		iVar1 = __LIB_3__::func_371(iParam1);
		uVar2 = __LIB_0__::func_160(iVar1);
		return BitTest(uVar0, uVar2);
	}
	return 0;
}

int func_700()//Position - 0x7505E
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (__LIB_10__::func_437(202))
	{
		MISC::SET_BIT(&Global_1574939, 1);
	}
	if (BitTest(Global_1574939, 0))
	{
		if (__LIB_10__::func_212(201))
		{
			MISC::CLEAR_BIT(&Global_1574939, 0);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
			}
			else
			{
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					}
				}
			}
			return 1;
		}
	}
	if (BitTest(Global_1574939, 1))
	{
		if (__LIB_10__::func_212(202))
		{
			MISC::CLEAR_BIT(&Global_1574939, 1);
			return 2;
		}
	}
	sVar0 = "PM_QUIT_WARN" /* GXT: Quit */;
	sVar1 = "PM_QUIT_WARN2" /* GXT: Are you sure you want to quit Grand Theft Auto V? */;
	sVar2 = "PM_QUIT_WARN5" /* GXT: All unsaved progress will be lost. */;
	__LIB_27__::func_971();
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 36, sVar2, false, -1, 0, 0, true, 0);
	return 0;
}

int func_748()//Position - 0x77116
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (__LIB_10__::func_437(202))
	{
		MISC::SET_BIT(&Global_1574939, 1);
	}
	if (BitTest(Global_1574939, 0))
	{
		if (__LIB_10__::func_212(201))
		{
			MISC::CLEAR_BIT(&Global_1574939, 0);
			if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_893()) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
			}
			else
			{
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					}
				}
			}
			return 1;
		}
	}
	if (BitTest(Global_1574939, 1))
	{
		if (__LIB_10__::func_212(202))
		{
			MISC::CLEAR_BIT(&Global_1574939, 1);
			return 2;
		}
	}
	if (Global_1574964)
	{
		return 2;
	}
	if (Global_1574968)
	{
		Global_1574968 = 0;
		return 2;
	}
	sVar0 = "PM_QUIT_WARN" /* GXT: Quit */;
	sVar1 = "PM_QUIT_WARN3" /* GXT: Are you sure you want to quit this session? */;
	sVar2 = "PM_QUIT_WARN11" /* GXT: Progress will be automatically saved. */;
	if (__LIB_39__::func_282())
	{
		sVar2 = "PM_QUIT_WARN5" /* GXT: All unsaved progress will be lost. */;
	}
	if (Global_2726699 || __LIB_1__::func_894() == 0)
	{
		sVar1 = "PM_QUIT_WARN3" /* GXT: Are you sure you want to quit this session? */;
		sVar2 = "PM_QUIT_WARN16" /* GXT: The Rockstar cloud servers are currently unavailable - if you quit now all unsaved progress will be lost. */;
	}
	if (__LIB_0__::func_971(PLAYER::PLAYER_ID()) || __LIB_0__::func_970(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			sVar1 = "HEIST_QUITWARNING" /* GXT: If you quit, the Heist will fail for the entire Crew. */;
			sVar2 = "CONT_SURE" /* GXT: Are you sure you would like to proceed? */;
		}
	}
	if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_3__::func_188())
		{
			sVar1 = "FMEVNT_SUREQUIT" /* GXT: Are you sure you want to quit during this event? */;
		}
		if (__LIB_3__::func_187())
		{
			sVar1 = "FMEVNT_SUREQUIT" /* GXT: Are you sure you want to quit during this event? */;
			sVar2 = "FMEVNT_QUITWARNING" /* GXT: If you quit now, the event will fail for everyone. */;
		}
	}
	__LIB_27__::func_971();
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 36, sVar2, false, -1, 0, 0, true, 0);
	return 0;
}

int func_762()//Position - 0x774FA
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (BitTest(Global_1574939, 0))
	{
		if (__LIB_10__::func_212(201))
		{
			MISC::CLEAR_BIT(&Global_1574939, 0);
			__LIB_1__::func_863(0);
			Global_1577854 = 0;
			__LIB_13__::func_744(15, 0, -1);
			return 1;
		}
	}
	sVar0 = "HUD_CONNPROB" /* GXT: alert */;
	sVar1 = "PM_DOPROB" /* GXT: GTA Online will be available once you have completed the Prologue. */;
	sVar2 = "HUD_RETURNSP" /* GXT: Return to Grand Theft Auto V */;
	__LIB_27__::func_971();
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 2, sVar2, false, -1, 0, 0, true, 0);
	return 0;
}

int func_764()//Position - 0x775BB
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (BitTest(Global_1574939, 0))
	{
		if (__LIB_10__::func_212(201))
		{
			MISC::CLEAR_BIT(&Global_1574939, 0);
			NETWORK::NETWORK_REQUEST_CLOUD_BACKGROUND_SCRIPTS();
			if (__LIB_0__::func_628() == 15)
			{
				__LIB_39__::func_313(63, __LIB_0__::func_3(), __LIB_0__::func_236(), 0);
			}
			__LIB_1__::func_863(0);
			Global_1577854 = 0;
			return 1;
		}
	}
	sVar0 = "HUD_CONNPROB" /* GXT: alert */;
	sVar1 = "HUD_NOBACKGRN" /* GXT: Could not download files from the Rockstar Games Service required to play GTA Online. */;
	sVar2 = "HUD_RETURNSP" /* GXT: Return to Grand Theft Auto V */;
	__LIB_27__::func_971();
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 2, sVar2, false, -1, 0, 0, true, 0);
	return 0;
}

int func_787()//Position - 0x77F6F
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (BitTest(Global_1574939, 0))
	{
		if (__LIB_10__::func_212(201))
		{
			MISC::CLEAR_BIT(&Global_1574939, 0);
			if (__LIB_0__::func_628() == 15)
			{
				__LIB_39__::func_313(63, __LIB_0__::func_3(), __LIB_0__::func_236(), 0);
			}
			__LIB_1__::func_863(0);
			Global_1577854 = 0;
			return 1;
		}
	}
	sVar0 = "HUD_CONNPROB" /* GXT: alert */;
	sVar1 = "HUD_NOTUNE" /* GXT: Files required to play GTA Online could not be downloaded from the Rockstar Games Service. */;
	sVar2 = "HUD_RETURNSP" /* GXT: Return to Grand Theft Auto V */;
	__LIB_27__::func_971();
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 2, sVar2, false, -1, 0, 0, true, 0);
	return 0;
}

int func_803()//Position - 0x789DF
{
	char* sVar0;
	char* sVar1;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (__LIB_10__::func_437(202))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (BitTest(Global_1574939, 0))
	{
		if (__LIB_10__::func_212(201))
		{
			MISC::CLEAR_BIT(&Global_1574939, 0);
			Global_1577854 = 0;
			__LIB_13__::func_744(27, 0, -1);
			return 1;
		}
	}
	sVar0 = "HUD_CONNPROB" /* GXT: alert */;
	sVar1 = "HUD_DISCON" /* GXT: The connection to Social Club has been lost. */;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_27__::func_971();
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 16384, 0, false, -1, 0, 0, true, 0);
	return 0;
}

void func_817(bool bParam0)//Position - 0x78F05
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (HUD::IS_MP_GAMER_TAG_ACTIVE(iVar0))
		{
			HUD::SET_ALL_MP_GAMER_TAGS_VISIBILITY(iVar0, bParam0);
		}
		iVar0++;
	}
}

int func_819(int iParam0, bool bParam1)//Position - 0x78F78
{
	if (!__LIB_0__::func_201() && __LIB_0__::func_374(iParam0))
	{
		if (!__LIB_38__::func_226(iParam0) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			Global_97919.f_45 = iParam0;
			Global_97919.f_46 = 0;
			Global_97919.f_44 = 1;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (bParam1)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
				}
				MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 5f, 0);
			}
			return 1;
		}
	}
	return 0;
}

int func_822(var uParam0)//Position - 0x79035
{
	if (uParam0->f_39)
	{
		if (uParam0->f_7 != 4 && uParam0->f_7 != 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_843()//Position - 0x79299
{
	if (!Global_1574538[0] && !STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((STATS::STAT_MIGRATE_CHECK_GET_PLATFORM_STATUS(2, &Global_2727222) == 0 || STATS::STAT_MIGRATE_CHECK_GET_PLATFORM_STATUS(0, &Global_2727344) == 0) || STATS::STAT_MIGRATE_CHECK_GET_PLATFORM_STATUS(1, &Global_2727588) == 0) || STATS::STAT_MIGRATE_CHECK_GET_PLATFORM_STATUS(3, &Global_2727466) == 0)
			{
				return 1;
			}
			if (STATS::STAT_MIGRATE_SAVEGAME_GET_STATUS() == 13)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_848()//Position - 0x793BF
{
	return SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EVENT_ID_FOR_TYPE(__LIB_18__::func_578(4)) > 0;
}

int func_864(var uParam0)//Position - 0x7964C
{
	if (uParam0->f_39)
	{
		if (uParam0->f_7 == 3)
		{
			return 1;
		}
	}
	return 0;
}

var func_865(var uParam0, bool bParam1, int iParam2)//Position - 0x79668
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bVar5 = false;
	bVar6 = PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
	bVar7 = ((bVar6 && Global_78319) && __LIB_0__::func_81());
	bVar8 = __LIB_13__::func_749(bParam1);
	uParam0->f_6 = __LIB_0__::func_682(__LIB_14__::func_466());
	Global_23011.f_12 = !uParam0->f_23;
	Global_23011.f_121 = bParam1;
	Global_23011.f_122 = iParam2;
	Global_23011.f_123 = bVar7;
	Global_23011.f_3 = Global_23011.f_2;
	Global_23011.f_70 = 0;
	bVar9 = ((Global_23011.f_104 == 4 || Global_23011.f_104 == 1) || Global_23011.f_104 == 3);
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		func_876(uParam0, iVar0, 1, &iVar1, &iVar2, &uVar3, &uVar4);
		Global_23011.f_71[iVar0] = -1;
		Global_23011.f_76[iVar0] = -1;
		Global_23011.f_94[iVar0] = -1;
		Global_23011.f_99[iVar0] = -1;
		Global_23011.f_54[iVar0] = 0;
		Global_23011.f_59[iVar0] = 0;
		Global_23011.f_81[iVar0 /*3*/] = { 0f, 0f, 0f };
		if (__LIB_0__::func_39(14))
		{
			iVar10 = iVar0;
			if (iVar10 == 3)
			{
				Global_23011.f_70 = 1;
			}
			else if ((__LIB_15__::func_971(iVar10) && func_872(iVar10)) && iVar10 == __LIB_0__::func_682(Global_113386.f_2363.f_539.f_4323))
			{
				Global_23011.f_70 = 1;
			}
			else
			{
				Global_23011.f_70 = 0;
			}
		}
		else if (Global_23011.f_12)
		{
			if (!Global_23011.f_70)
			{
				if ((((!PED::IS_PED_INJURED((*uParam0)[iVar0]) && !uParam0->f_18[iVar0]) && (*uParam0)[iVar0] != PLAYER::PLAYER_PED_ID()) || uParam0->f_34[iVar0] == 2) || uParam0->f_24[iVar0] != 0)
				{
					Global_23011.f_70 = 1;
				}
			}
			if (uParam0->f_34[iVar0] == 3)
			{
				bVar5 = true;
			}
			else if (uParam0->f_6 == iVar0)
			{
				if (uParam0->f_34[iVar0] == 1 || uParam0->f_34[iVar0] == 2)
				{
					bVar5 = true;
				}
			}
			if (uParam0->f_8[iVar0])
			{
				if (uParam0->f_39 && uParam0->f_7 == iVar0)
				{
					uParam0->f_8[iVar0] = 0;
				}
				else if ((uParam0->f_6 == iVar0 && !bVar5) || uParam0->f_34[iVar0] == 3)
				{
					uParam0->f_8[iVar0] = 0;
				}
				else if ((PED::IS_PED_INJURED((*uParam0)[iVar0]) && !uParam0->f_23) && !uParam0->f_34[iVar0] == 2)
				{
					uParam0->f_8[iVar0] = 0;
				}
			}
			Global_23011.f_49[iVar0] = uParam0->f_8[iVar0];
			Global_23011.f_64[iVar0] = uVar3;
			if ((ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]) && !PED::IS_PED_INJURED((*uParam0)[iVar0])) && (*uParam0)[iVar0] != PLAYER::PLAYER_PED_ID())
			{
				Global_23011.f_71[iVar0] = SYSTEM::FLOOR((((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[iVar0])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[iVar0])) - 100f)) * 100f));
			}
			if ((Global_23011.f_71[iVar0] != -1 && IntToFloat(Global_23011.f_71[iVar0]) < 25f) || uParam0->f_13[iVar0])
			{
				if (uParam0->f_6 != iVar0)
				{
					Global_23011.f_54[iVar0] = 1;
					Global_23011.f_59[iVar0] = uParam0->f_13[iVar0];
				}
			}
		}
		else
		{
			Global_23011.f_49[iVar0] = uParam0->f_8[iVar0];
			Global_23011.f_64[iVar0] = uVar3;
		}
		if (Global_23011.f_124)
		{
			Global_23011.f_19[iVar2] = iVar1;
			Global_23011.f_24[iVar2] = uVar3;
			Global_23011.f_29[iVar2] = uVar4;
			Global_23011.f_34[iVar0] = 0;
			Global_23011.f_44[iVar0] = 0;
			Global_23011.f_39[iVar0] = 0;
			if (bVar9)
			{
				if (Global_23011.f_12)
				{
					if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]) && !PED::IS_PED_INJURED((*uParam0)[iVar0]))
					{
						Global_23011.f_76[iVar0] = PED::GET_PED_ARMOUR((*uParam0)[iVar0]);
						if (iVar0 == 0)
						{
							STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &(Global_23011.f_94[iVar0]), -1);
							STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY_UNLOCKED"), &(Global_23011.f_99[iVar0]), -1);
						}
						else if (iVar0 == 1)
						{
							STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &(Global_23011.f_94[iVar0]), -1);
							STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY_UNLOCKED"), &(Global_23011.f_99[iVar0]), -1);
						}
						else if (iVar0 == 2)
						{
							STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &(Global_23011.f_94[iVar0]), -1);
							STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY_UNLOCKED"), &(Global_23011.f_99[iVar0]), -1);
						}
						Global_23011.f_81[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0], true) };
					}
				}
				else if ((iVar0 < 3 && iVar1 != 3) && (!__LIB_13__::func_94() || __LIB_0__::func_39(14)))
				{
					Global_23011.f_34[iVar0] = Global_97754[iVar0];
					Global_23011.f_44[iVar0] = 0;
					Global_23011.f_34[iVar0] = (Global_23011.f_34[iVar0] + Global_97766[iVar0]);
					Global_23011.f_39[iVar0] = 0;
					Global_23011.f_34[iVar0] = (Global_23011.f_34[iVar0] + Global_97762[iVar0]);
				}
			}
		}
		if (((Global_23011.f_69 == -1 || !Global_23011.f_14) && Global_23011.f_69 != iVar2) && !__LIB_0__::func_39(14))
		{
			if ((uParam0->f_6 == iVar0 && !bVar5) || uParam0->f_34[iVar0] == 3)
			{
				Global_23011.f_69 = iVar2;
				Global_23011.f_14 = 1;
			}
		}
		iVar0++;
	}
	if (bVar8)
	{
		if ((((((Global_23011.f_124 && (!Global_23011.f_9 || Global_23011.f_10)) && ((!__LIB_0__::func_540(0) || Global_23011.f_12) || __LIB_0__::func_39(14))) && ((!__LIB_0__::func_540(3) || Global_23011.f_12) || __LIB_0__::func_39(14))) && ((!__LIB_0__::func_540(2) || Global_23011.f_12) || __LIB_0__::func_39(14))) && ((!__LIB_0__::func_540(9) || Global_23011.f_12) || __LIB_0__::func_39(14))) && ((!__LIB_0__::func_540(10) || Global_23011.f_12) || __LIB_0__::func_39(14)))
		{
			if (Global_23011.f_104 == 4)
			{
				if (__LIB_0__::func_39(14))
				{
					if (Global_23011.f_69 == 0)
					{
						Global_23011.f_11 = __LIB_16__::func_14(uParam0, 1);
					}
					else if (Global_23011.f_69 == 1)
					{
						Global_23011.f_11 = __LIB_16__::func_14(uParam0, 2);
					}
					else if (Global_23011.f_69 == 2)
					{
						Global_23011.f_11 = __LIB_16__::func_14(uParam0, 3);
					}
					else if (Global_23011.f_69 == 3)
					{
						Global_23011.f_11 = __LIB_16__::func_14(uParam0, 0);
					}
				}
				else if (Global_23011.f_69 == 0)
				{
					Global_23011.f_11 = func_869(uParam0, 1);
				}
				else if (Global_23011.f_69 == 1)
				{
					Global_23011.f_11 = func_869(uParam0, 2);
				}
				else if (Global_23011.f_69 == 2)
				{
					Global_23011.f_11 = __LIB_16__::func_30(uParam0);
				}
				else if (Global_23011.f_69 == 3)
				{
					Global_23011.f_11 = func_869(uParam0, 0);
				}
			}
			else if (Global_23011.f_104 == 3 || (Global_23011.f_9 && Global_23011.f_10))
			{
				if ((((!Global_23011.f_11 && Global_23011.f_12) && Global_23011.f_70) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !(__LIB_1__::func_732(PLAYER::PLAYER_PED_ID()) && (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))))
				{
					if (uParam0->f_34[0] == 3)
					{
						iVar11 = 0;
					}
					else if (uParam0->f_34[1] == 3)
					{
						iVar11 = 1;
					}
					else if (uParam0->f_34[2] == 3)
					{
						iVar11 = 2;
					}
					else
					{
						iVar11 = __LIB_14__::func_466();
					}
					switch (iVar11)
					{
						case 0:
							if (uParam0->f_13[1] && !Global_23011.f_16)
							{
								bVar12 = true;
							}
							else if (uParam0->f_13[2] && !Global_23011.f_16)
							{
								bVar12 = 2;
							}
							else if (uParam0->f_43)
							{
								bVar12 = uParam0->f_40;
								bVar13 = uParam0->f_41;
								bVar14 = uParam0->f_42;
							}
							else
							{
								bVar12 = true;
								bVar13 = 2;
							}
							break;
						case 1:
							if (uParam0->f_13[2] && !Global_23011.f_16)
							{
								bVar12 = 2;
							}
							else if (uParam0->f_13[0] && !Global_23011.f_16)
							{
								bVar12 = false;
							}
							else if (uParam0->f_43)
							{
								bVar12 = uParam0->f_40;
								bVar13 = uParam0->f_41;
								bVar14 = uParam0->f_42;
							}
							else
							{
								bVar12 = 2;
								bVar13 = false;
							}
							break;
						case 2:
							if (uParam0->f_13[0] && !Global_23011.f_16)
							{
								bVar12 = false;
							}
							else if (uParam0->f_13[1] && !Global_23011.f_16)
							{
								bVar12 = true;
							}
							else if (uParam0->f_43)
							{
								bVar12 = uParam0->f_40;
								bVar13 = uParam0->f_41;
								bVar14 = uParam0->f_42;
							}
							else
							{
								bVar12 = false;
								bVar13 = true;
							}
							break;
					}
					bVar15 = true;
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
					{
						if (!PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/))
						{
							if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/))
							{
								bVar15 = false;
								if (iVar11 != 0)
								{
									if (func_869(uParam0, 0))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
							else if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/))
							{
								bVar15 = false;
								if (iVar11 != 1)
								{
									if (func_869(uParam0, 1))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
							else if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/))
							{
								bVar15 = false;
								if (iVar11 != 2)
								{
									if (func_869(uParam0, 2))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
						}
					}
					if (bVar15)
					{
						if (func_869(uParam0, bVar12))
						{
							Global_23011.f_11 = 1;
						}
						else if (func_869(uParam0, bVar13))
						{
							Global_23011.f_11 = 1;
						}
						else if (func_869(uParam0, bVar14))
						{
							Global_23011.f_11 = 1;
						}
					}
				}
			}
		}
	}
	if (Global_23011.f_11)
	{
		Global_23011.f_125 = 1;
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	}
	return Global_23011.f_11;
}

int func_869(var uParam0, bool bParam1)//Position - 0x7A21E
{
	bool bVar0;
	bool bVar1;
	if (!uParam0->f_39)
	{
		uParam0->f_7 = 4;
		uParam0->f_39 = 1;
	}
	if ((bParam1 != 0 && bParam1 != 2) && bParam1 != 1)
	{
	}
	else
	{
		bVar0 = uParam0->f_34[bParam1] == 2;
		if (__LIB_0__::func_682(__LIB_14__::func_466()) != bParam1 || bVar0)
		{
			bVar1 = false;
			if ((bVar0 || uParam0->f_24[bParam1] != 0) || ((__LIB_15__::func_971(bParam1) && func_872(bParam1)) && !uParam0->f_18[bParam1]))
			{
				if (!uParam0->f_23)
				{
					if (!PED::IS_PED_INJURED((*uParam0)[bParam1]) || bVar0)
					{
						if (uParam0->f_34[bParam1] != 1 && uParam0->f_34[bParam1] != 3)
						{
							bVar1 = true;
						}
					}
				}
				else if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)) && !BitTest(Global_97919.f_47, bParam1))
				{
					bVar1 = true;
				}
			}
			else if (!((BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[27 /*3*/], 1) && !Global_3) && !__LIB_0__::func_2(0)))
			{
				if (uParam0->f_23)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				uParam0->f_7 = bParam1;
				return 1;
			}
		}
	}
	uParam0->f_39 = 0;
	return 0;
}

int func_872(int iParam0)//Position - 0x7A3EA
{
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || Global_3)
	{
		if (!__LIB_16__::func_20(__LIB_0__::func_484(iParam0)))
		{
			return 0;
		}
	}
	return 1;
}

void func_876(var uParam0, int iParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x7A507
{
	int iVar0;
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iParam1 == 3)
		{
			iVar0 = 1;
		}
	}
	else if (__LIB_0__::func_563() == __LIB_0__::func_484(iParam1))
	{
		iVar0 = 1;
	}
	switch (iParam1)
	{
		case 0:
			*uParam4 = 3;
			*uParam6 = 0;
			if (!__LIB_15__::func_971(iParam1))
			{
				*uParam3 = 3;
			}
			else if (!func_872(iParam1))
			{
				*uParam3 = 2;
			}
			else
			{
				*uParam3 = 1;
			}
			if (uParam0->f_23 && *uParam3 == 1)
			{
				if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ((((__LIB_0__::func_540(0) || __LIB_0__::func_540(3)) || __LIB_0__::func_540(2)) || __LIB_0__::func_39(9)) || __LIB_0__::func_39(10))) || __LIB_0__::func_2(0)) || Global_43018)
				{
					*uParam3 = 2;
				}
			}
			break;
		case 1:
			*uParam4 = 0;
			*uParam6 = 0;
			if (!__LIB_15__::func_971(iParam1))
			{
				*uParam3 = 3;
			}
			else if (!func_872(iParam1))
			{
				*uParam3 = 2;
			}
			else
			{
				*uParam3 = 1;
			}
			if (uParam0->f_23 && *uParam3 == 1)
			{
				if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ((((__LIB_0__::func_540(0) || __LIB_0__::func_540(3)) || __LIB_0__::func_540(2)) || __LIB_0__::func_39(9)) || __LIB_0__::func_39(10))) || __LIB_0__::func_2(0)) || Global_43018)
				{
					*uParam3 = 2;
				}
			}
			break;
		case 2:
			*uParam4 = 1;
			*uParam6 = 0;
			if (!__LIB_15__::func_971(iParam1))
			{
				*uParam3 = 3;
			}
			else if (!func_872(iParam1))
			{
				*uParam3 = 2;
			}
			else
			{
				*uParam3 = 1;
			}
			if (uParam0->f_23 && *uParam3 == 1)
			{
				if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ((((__LIB_0__::func_540(0) || __LIB_0__::func_540(3)) || __LIB_0__::func_540(2)) || __LIB_0__::func_39(9)) || __LIB_0__::func_39(10))) || __LIB_0__::func_2(0)) || Global_43018)
				{
					*uParam3 = 2;
				}
			}
			break;
		case 3:
			*uParam4 = 2;
			*uParam6 = 0;
			if ((((((!uParam0->f_23 || Global_3) || (uParam0->f_23 && ((((__LIB_0__::func_540(0) || __LIB_0__::func_540(3)) || __LIB_0__::func_540(2)) || __LIB_0__::func_39(9)) || __LIB_0__::func_39(10)))) || (uParam0->f_23 && __LIB_0__::func_2(0))) || (uParam0->f_23 && Global_43018)) || !__LIB_13__::func_748()) || !__LIB_15__::func_970(0))
			{
				*uParam3 = 2;
			}
			else
			{
				*uParam3 = 1;
			}
			if (uParam0->f_23 && *uParam3 == 1)
			{
				if (((((__LIB_0__::func_540(0) || __LIB_0__::func_540(3)) || __LIB_0__::func_540(2)) || __LIB_0__::func_39(9)) || __LIB_0__::func_39(10)) || Global_43018)
				{
					*uParam3 = 2;
				}
			}
			break;
	}
	if (iParam1 != 3)
	{
		if (iVar0 || uParam0->f_34[iParam1] == 2)
		{
			*uParam3 = 1;
		}
		else if (((uParam0->f_34[iParam1] == 1 || uParam0->f_18[iParam1]) || ((!uParam0->f_23 && PED::IS_PED_INJURED((*uParam0)[iParam1])) && *uParam3 == 1)) || (uParam0->f_23 && BitTest(Global_97919.f_47, iParam1)))
		{
			if (*uParam3 == 1)
			{
				*uParam3 = 2;
			}
		}
		else if (uParam0->f_24[iParam1] != 0)
		{
			*uParam3 = 1;
		}
		else if (((uParam0->f_23 && !BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[27 /*3*/], 1)) && !Global_3) && !__LIB_0__::func_2(0))
		{
			if ((((__LIB_0__::func_540(0) || __LIB_0__::func_540(3)) || __LIB_0__::func_540(2)) || __LIB_0__::func_39(9)) || __LIB_0__::func_39(10))
			{
			}
			else
			{
				*uParam3 = 1;
			}
		}
	}
	else
	{
		*uParam3 = 3;
	}
	if ((iVar0 && uParam0->f_34[iParam1] == 0) || uParam0->f_34[iParam1] == 3)
	{
		if (!__LIB_0__::func_39(14))
		{
			*uParam6 = 1;
		}
	}
	if (bParam2)
	{
		__LIB_13__::func_766(uParam0, iParam1, uParam5);
	}
}

bool func_879()//Position - 0x7AAC5
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_139, 15);
}

void func_880()//Position - 0x7AADD
{
	Global_23011.f_105 = -1;
	Global_23011.f_107 = -1;
	Global_23011.f_109 = -1;
	iLocal_159[0] = -1;
	iLocal_159[1] = -1;
	fLocal_141 = 1f;
	fLocal_144 = 1f;
	bLocal_142 = false;
	Local_65.f_23 = 1;
	func_17();
	iLocal_64 = 1;
}

void func_881(int* iParam0)//Position - 0x7AB18
{
	if (BitTest(Global_113386.f_10016.f_25, 10))
	{
		if (__LIB_0__::func_39(14))
		{
			if (!BitTest(*iParam0, 12))
			{
				func_896(iParam0);
			}
			func_882(iParam0);
		}
		else
		{
			func_2(iParam0);
		}
	}
	else
	{
		func_2(iParam0);
	}
}

void func_882(int* iParam0)//Position - 0x7AB60
{
	struct<16> Var0;
	struct<16> Var1;
	int iVar2;
	bool bVar3;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -11.9823f, -14.7217f, 499.0583f) > 100f)
		{
			if (!BitTest(*iParam0, 3))
			{
				if (func_895() == __LIB_38__::func_688())
				{
					func_13(1, iParam0);
				}
			}
			else
			{
				if (!iParam0->f_3)
				{
					if (!HUD::IS_HELP_MESSAGE_ON_SCREEN() && CAM::IS_SCREEN_FADED_IN())
					{
						Var0 = { func_8() };
						__LIB_0__::func_151(&Var0, -1);
						iParam0->f_3 = 1;
					}
				}
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/) && PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/))
				{
					if (func_893(iParam0))
					{
						if (MISC::GET_GAME_TIMER() > iParam0->f_1 && MISC::GET_GAME_TIMER() > iParam0->f_2 + 5000)
						{
							if (BitTest(*iParam0, 29))
							{
								MISC::CLEAR_BIT(iParam0, 29);
							}
							else
							{
								MISC::SET_BIT(iParam0, 29);
							}
							iParam0->f_1 = MISC::GET_GAME_TIMER() + 1000;
						}
					}
					else if (!HUD::IS_HELP_MESSAGE_ON_SCREEN() && CAM::IS_SCREEN_FADED_IN())
					{
						Var1 = { func_892() };
						__LIB_0__::func_151(&Var1, -1);
					}
				}
				if (BitTest(*iParam0, 29))
				{
					if (BitTest(*iParam0, 6))
					{
						if (func_891())
						{
							func_889(iParam0);
						}
					}
				}
				else if (!BitTest(*iParam0, 6))
				{
					if (func_891())
					{
						func_886(iParam0);
					}
				}
				if (BitTest(*iParam0, 16))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
						{
							if (BitTest(*iParam0, 8) && MISC::GET_GAME_TIMER() > iParam0->f_2 + 5000)
							{
								CAM::DO_SCREEN_FADE_IN(800);
								MISC::CLEAR_BIT(iParam0, 8);
							}
							MISC::CLEAR_BIT(iParam0, 16);
						}
					}
				}
				if ((BitTest(*iParam0, 30) && BitTest(*iParam0, 6)) && !BitTest(*iParam0, 16))
				{
					func_883(iParam0);
				}
			}
		}
		else
		{
			iParam0->f_2 = MISC::GET_GAME_TIMER();
			if (BitTest(*iParam0, 6))
			{
				func_889(iParam0);
				MISC::CLEAR_BIT(iParam0, 8);
			}
			if (BitTest(*iParam0, 3))
			{
				func_13(0, iParam0);
			}
		}
	}
	iVar2 = func_895();
	if (iVar2 != __LIB_39__::func_251() && iVar2 != __LIB_38__::func_688())
	{
		if (BitTest(*iParam0, 30))
		{
			MISC::CLEAR_BIT(iParam0, 30);
		}
	}
	else if (!BitTest(*iParam0, 30))
	{
		bVar3 = iVar2 == __LIB_38__::func_688();
		MISC::SET_BIT(iParam0, 30);
		if (bVar3)
		{
			MISC::CLEAR_BIT(iParam0, 6);
		}
	}
}

void func_883(int* iParam0)//Position - 0x7ADA2
{
	int iVar0;
	func_885(iParam0);
	CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
	PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
	PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 1.75f);
	PED::SET_PED_MOVE_RATE_IN_WATER_OVERRIDE(PLAYER::PLAYER_PED_ID(), 1.75f);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 63, true);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 438, true);
	PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &(iParam0->f_4), -1);
	iVar0 = 0;
	while (iVar0 < iParam0->f_4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_4[iVar0]))
		{
			__LIB_39__::func_291(iParam0->f_4[iVar0], PLAYER::PLAYER_PED_ID(), 1, 1112014848, 0);
		}
		iVar0++;
	}
}

void func_885(int* iParam0)//Position - 0x7AF17
{
	struct<16> Var0;
	struct<16> Var1;
	MISC::SET_BEAST_JUMP_THIS_FRAME(PLAYER::PLAYER_ID());
	MISC::SET_SUPER_JUMP_THIS_FRAME(PLAYER::PLAYER_ID());
	if (PED::IS_PED_DOING_A_BEAST_JUMP(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 217, true);
		if (!(PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_LANDING(PLAYER::PLAYER_PED_ID())) && !BitTest(*iParam0, 18))
		{
			Var0 = { __LIB_38__::func_686("as", "Be", "t_j", "ump") };
			Var1 = { __LIB_38__::func_686("T_Bv", "AP", "dset", "S_Soun") };
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, &Var0, PLAYER::PLAYER_PED_ID(), &Var1, false, 0);
			MISC::SET_BIT(iParam0, 18);
		}
		if (PED::IS_PED_LANDING(PLAYER::PLAYER_PED_ID()))
		{
			if (!ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) && !BitTest(*iParam0, 19))
			{
				Var0 = { __LIB_38__::func_686("st_J", "Bea", "and", "ump_L") };
				Var1 = { __LIB_38__::func_686("T_Bv", "AP", "dset", "S_Soun") };
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, &Var0, PLAYER::PLAYER_PED_ID(), &Var1, false, 0);
				MISC::SET_BIT(iParam0, 19);
			}
		}
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 18);
		MISC::CLEAR_BIT(iParam0, 19);
	}
}

void func_886(int* iParam0)//Position - 0x7B03F
{
	if (!(CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT()))
	{
		MISC::SET_BIT(iParam0, 8);
		CAM::DO_SCREEN_FADE_OUT(250);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), __LIB_39__::func_251());
			__LIB_39__::func_292(PLAYER::PLAYER_PED_ID());
			func_887();
			MISC::SET_BIT(iParam0, 16);
			MISC::SET_BIT(iParam0, 30);
			MISC::SET_BIT(iParam0, 6);
		}
	}
}

void func_887()//Position - 0x7B0B7
{
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 189, true);
	PED::SET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), 15000);
	ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 15000, 0);
}

void func_889(int* iParam0)//Position - 0x7B17B
{
	if (!(CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT()))
	{
		MISC::SET_BIT(iParam0, 8);
		CAM::DO_SCREEN_FADE_OUT(250);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), __LIB_38__::func_688());
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			func_890();
			MISC::SET_BIT(iParam0, 16);
			MISC::SET_BIT(iParam0, 30);
			MISC::CLEAR_BIT(iParam0, 6);
		}
	}
}

void func_890()//Position - 0x7B1F3
{
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 189, true);
	PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 100f, true);
	PED::SET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), 5000);
	ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 5000, 0);
}

int func_891()//Position - 0x7B22B
{
	if (STREAMING::HAS_MODEL_LOADED(__LIB_39__::func_251()) && STREAMING::HAS_MODEL_LOADED(__LIB_38__::func_688()))
	{
		return 1;
	}
	return 0;
}

struct<16> func_892()//Position - 0x7B250
{
	return __LIB_38__::func_686("_S", "NO", "P", "WA");
}

int func_893(int* iParam0)//Position - 0x7B270
{
	*iParam0 = *iParam0;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		return 0;
	}
	else if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	else if (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	else if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	else if (PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	else if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		return 0;
	}
	else if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	else if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	return 1;
}

int func_895()//Position - 0x7B335
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	}
	return 0;
}

void func_896(int* iParam0)//Position - 0x7B356
{
	STREAMING::REQUEST_MODEL(__LIB_39__::func_251());
	STREAMING::REQUEST_MODEL(__LIB_38__::func_688());
	MISC::SET_BIT(iParam0, 12);
}

void func_898(var uParam0)//Position - 0x7B384
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
}

