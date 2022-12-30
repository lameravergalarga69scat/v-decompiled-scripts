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
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
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
	float fLocal_62 = 0f;
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
	var uLocal_93 = -1;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115 = 0;
	float fLocal_116 = 0f;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	struct<361> Local_122 = { 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	bool bLocal_125 = 0;
	var uLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	bool bLocal_136 = 0;
	int iLocal_137 = 0;
	var uLocal_138 = 0;
	int iLocal_139[33] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	struct<4> Local_144 = { 0, 0, 0, 0 } ;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	int iLocal_147 = 0;
	var uLocal_148[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	int iLocal_151[363] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	var uLocal_159[363] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	var uLocal_164[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_165[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<5> Local_166 = { 0, 0, 0, 0, 0 } ;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	bool bLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	int iLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	int iLocal_181 = 0;
	var uLocal_182[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int* iLocal_183 = NULL;
	struct<5> Local_184 = { -1, -1, 0, 0, 0 } ;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	int iLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	bool bLocal_207 = 0;
	var uLocal_208 = 0;
	struct<21> Local_209 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_101 = 3f;
	fLocal_102 = 0f;
	fLocal_103 = 2f;
	fLocal_104 = 100f;
	iLocal_114 = -1;
	fLocal_116 = 0.5f;
	iLocal_137 = -2;
	iLocal_158 = 1;
	iLocal_160 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	}
	func_1463();
	func_1456(ScriptParam_209);
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_1444();
		}
		if (__LIB_0__::func_457(PLAYER::PLAYER_ID()))
		{
			func_1444();
		}
		if (Global_1946249)
		{
			func_1444();
		}
		iVar0 = 45000;
		if ((((Local_122.f_0 == 176 || Local_122.f_0 == 175) || Local_122.f_0 == 151) || Local_122.f_0 == 76) || Local_122.f_0 == 181)
		{
			iVar0 = 30000;
		}
		switch (__LIB_12__::func_912())
		{
			case 0:
				if (func_1438())
				{
					func_1428();
				}
				else
				{
					func_1444();
				}
				break;
			case 1:
				if (func_1422())
				{
					func_1421(Local_122.f_1, Local_122.f_0, &iLocal_156, &uLocal_154, iVar0, &Local_166);
					func_120();
				}
				else
				{
					func_1444();
				}
				break;
			case 2:
				if (bLocal_125)
				{
					if (!__LIB_0__::func_864(&uLocal_173))
					{
						__LIB_0__::func_795(&uLocal_173, 0, 0);
					}
					if (!__LIB_0__::func_937(&uLocal_173, 500, 0))
					{
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
						{
							PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/);
							PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/);
							PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/);
							PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/);
						}
					}
				}
				func_30();
				break;
			case 4:
				if (bLocal_125)
				{
					if (!__LIB_0__::func_937(&uLocal_173, 500, 0))
					{
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
						{
							PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/);
							PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/);
							PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/);
							PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/);
						}
					}
				}
				if (iLocal_157)
				{
					func_27(Local_122.f_1, Local_122.f_0, &Local_166);
					iLocal_157 = 0;
				}
				if (Local_166.f_2 == 0)
				{
					if (!__LIB_0__::func_75())
					{
						Global_2703735.f_833.f_11 = 1;
						func_1444();
					}
				}
				else if (!__LIB_0__::func_75())
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_166.f_0) && !MISC::IS_STRING_NULL_OR_EMPTY(Local_166.f_1))
					{
						func_1(Local_122.f_1, Local_166.f_0, Local_166.f_1, &Local_166, BitTest(Local_122.f_359, 19));
					}
					Local_166.f_2 = 0;
				}
				else if (__LIB_0__::func_937(&(Local_166.f_4), 8000, 0))
				{
					Local_166.f_2 = 0;
				}
				break;
		}
	}
}

int func_1(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, char[4] cParam165, char* sParam166, var uParam167, bool bParam168)//Position - 0x2C3
{
	if (!__LIB_0__::func_75())
	{
		*uParam167 = "";
		uParam167->f_1 = "";
		uParam167->f_2 = 0;
		if (!bParam168)
		{
			return __LIB_3__::func_76(&uParam0, cParam165, sParam166, 12, 0, 0, 0);
		}
		else
		{
			return __LIB_2__::func_859(&uParam0, cParam165, sParam166, 12, 0, 0, 0);
		}
	}
	else
	{
		*uParam167 = cParam165;
		uParam167->f_1 = sParam166;
		uParam167->f_2 = 1;
	}
	return 0;
}

void func_27(struct<165> Param0, int iParam1, var uParam2)//Position - 0xC7E
{
	switch (iParam1)
	{
		case 12:
			func_1(Param0, "CT_AUD", "MPCT_LShang", uParam2, 0);
			break;
		case 19:
			func_1(Param0, "CT_AUD", "MPCT_LMhang", uParam2, 0);
			break;
		case 84:
			func_1(Param0, "CT_AUD", "MPCT_Bhang", uParam2, 0);
			break;
		case 72:
			if (__LIB_1__::func_394())
			{
				func_1(Param0, "CT_AUD", "MPCT_VhangF", uParam2, 0);
			}
			else
			{
				func_1(Param0, "CT_AUD", "MPCT_VhangM", uParam2, 0);
			}
			break;
		case 70:
			if (__LIB_1__::func_394())
			{
				func_1(Param0, "CT_AUD", "MPCT_LhangF", uParam2, 0);
			}
			else
			{
				func_1(Param0, "CT_AUD", "MPCT_LhangM", uParam2, 0);
			}
			break;
		case 89:
			func_1(Param0, "CT_AUD", "MPCT_MChang", uParam2, 0);
			break;
		case 85:
			func_1(Param0, "CT_AUD", "MPCT_MWhang", uParam2, 0);
			break;
		case 18:
			func_1(Param0, "CT_AUD", "MPCT_Shang", uParam2, 0);
			break;
		case 86:
			func_1(Param0, "CT_AUD", "MPCT_Ghang", uParam2, 0);
			break;
		case 31:
			func_1(Param0, "CT_AUD", "MPCT_Mhang", uParam2, 0);
			break;
		case 20:
			func_1(Param0, "CT_AUD", "MPCT_Rhang", uParam2, 0);
			break;
		case 91:
			func_1(Param0, "CT_AUD", "MPCT_INhang", uParam2, 0);
			break;
		case 41:
			func_1(Param0, "CT_AUD", "MPCT_PGhang", uParam2, 0);
			break;
		case 82:
			func_1(Param0, "BACALAU", "BACAL_HANG", uParam2, 1);
			break;
		case 176:
			func_1(Param0, "FXIMAUD", "FXIM_PM_8A", uParam2, 1);
			break;
		case 175:
			func_1(Param0, "FXFRAUD", "FXFR_PM_10", uParam2, 1);
			break;
		case 151:
			func_1(Param0, "SM2TOAU", "SM2TO_PC_7A", uParam2, 0);
			break;
		case 76:
			func_1(Param0, "SM2AGAU", "SM2AG_PC_7A", uParam2, 0);
			break;
		case 181:
			func_1(Param0, "SM2YOAU", "SM2YO_PC_6A", uParam2, 0);
			break;
	}
}

void func_30()//Position - 0xEFF
{
	switch (Local_122.f_0)
	{
		case 12:
			switch (Local_122.f_178)
			{
				case 3:
					func_96();
					break;
			}
			break;
		case 19:
			switch (Local_122.f_178)
			{
				case 1:
					func_85();
					break;
			}
			break;
		case 85:
			switch (Local_122.f_178)
			{
				case 1:
					func_52();
					break;
			}
			break;
		case 172:
			switch (Local_122.f_178)
			{
				case 26:
					func_31();
					break;
			}
			break;
	}
}

void func_31()//Position - 0xF8A
{
	int iVar0;
	int iVar1;
	if (BitTest(uLocal_196, 3))
	{
		if (__LIB_0__::func_937(&uLocal_197, 10000, 0))
		{
			iVar1 = 0;
			func_49(PLAYER::PLAYER_ID(), &iVar0, &iVar1);
			if (iVar0 > 10)
			{
				iVar0 = 10;
			}
			if (iVar0 == 0)
			{
			}
			else if (__LIB_38__::func_693(172, "TUN_CBL_FEED" /* GXT: Here's the list of Exotic Exports vehicles you're looking for: */, 1, "NULL", iVar0, "", 12, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0))
			{
			}
			__LIB_0__::clearF_1Prop(&uLocal_197);
			MISC::CLEAR_BIT(&uLocal_196, 3);
			func_32(4);
		}
	}
}

void func_32(int iParam0)//Position - 0xFFF
{
	iLocal_123 = iParam0;
}

void func_49(int iParam0, var uParam1, int iParam2)//Position - 0x2098
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = __LIB_7__::func_177(iVar0);
		if (iVar1 != 0)
		{
			if (__LIB_27__::func_653(iParam0, iVar1))
			{
				StringCopy(&(Global_1931569[(9 - *iParam2) /*4*/]), VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iVar1), 16);
				*iParam2++;
			}
			else
			{
				StringCopy(&(Global_1931569[*uParam1 /*4*/]), VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iVar1), 16);
				*uParam1++;
			}
		}
		iVar0++;
	}
}

void func_52()//Position - 0x215C
{
	if (__LIB_3__::func_67(0, -1, 0))
	{
		if (!BitTest(Local_122.f_359, 4))
		{
			func_59();
			MISC::SET_BIT(&(Local_122.f_359), 4);
		}
	}
	if (func_58(1))
	{
		if (!__LIB_1__::func_342(95, -1))
		{
			__LIB_1__::func_348(95, 1, -1, 1);
		}
		func_1(Local_122.f_1, "CT_AUD", "MPCT_MERtar", &Local_166, 0);
		func_32(4);
	}
}

int func_58(bool bParam0)//Position - 0x2269
{
	if (Global_1835502.f_106[bParam0] != -1 && Global_1835502.f_106[bParam0] == PLAYER::PLAYER_ID())
	{
		if (bParam0 == 0 || bParam0 == 1)
		{
			return 1;
		}
		else if (BitTest(Global_1922953, bParam0))
		{
			Global_1922953 = 0;
			Global_1922952 = 0;
			return 1;
		}
	}
	return 0;
}

void func_59()//Position - 0x22C5
{
	int iVar0;
	struct<16> Var1;
	if (__LIB_0__::func_156(Local_122.f_358, 0, 1))
	{
		__LIB_1__::func_602(0, 0);
		__LIB_1__::func_767("STRING");
		StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(Local_122.f_358), 64);
		func_79(Var1);
		__LIB_1__::func_766(1, 1, 0, 0, 0);
		__LIB_1__::func_765(1, 2, 1, 1, 1);
		__LIB_12__::func_593(0, 1, 0, 0, 0);
		Local_122.f_181.f_2 = 1;
		Local_122.f_181.f_69 = 1;
		__LIB_3__::func_572(iVar0, "GC_MENU8" /* GXT: Sending request... */, 0, 1, 0, 0, 0);
		__LIB_3__::func_564(-1);
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
		Local_122.f_178 = 1;
	}
}

void func_79(char[64] cParam0)//Position - 0x352C
{
	if (Global_23150.f_78 >= 2 || Global_23150.f_74 >= 4)
	{
		return;
	}
	Global_23150.f_5[Global_23150.f_74] = 5;
	Global_23150.f_74++;
	Global_23150.f_41[Global_23150.f_78 /*16*/] = { cParam0 };
	Global_23150.f_78++;
}

void func_85()//Position - 0x3CAB
{
	if (__LIB_3__::func_67(0, -1, 0))
	{
		if (!BitTest(Local_122.f_359, 4))
		{
			func_95();
			MISC::SET_BIT(&(Local_122.f_359), 4);
		}
	}
	if (func_91(0))
	{
		if (func_58(0))
		{
			iLocal_128 = __LIB_12__::func_845(2);
			func_1(Local_122.f_1, "CT_AUD", "MPCT_mugTar", &Local_166, 0);
			func_32(4);
		}
	}
}

int func_91(bool bParam0)//Position - 0x4363
{
	int iVar0;
	bool bVar1;
	iVar0 = PLAYER::PLAYER_ID();
	bVar1 = false;
	switch (bParam0)
	{
		case 0:
			if (Global_1835502.f_106[bParam0] != -1)
			{
				if (Global_1835502.f_106[bParam0] == iVar0)
				{
					if (__LIB_12__::func_912() != 2)
					{
						MISC::SET_BIT(&uLocal_126, 10);
						func_92(11, 0);
						bVar1 = true;
					}
				}
				else
				{
					MISC::SET_BIT(&uLocal_126, 0);
					func_92(2, 0);
					bVar1 = true;
				}
			}
			else if (BitTest(Global_1853348[iVar0 /*834*/].f_142, bParam0))
			{
				MISC::SET_BIT(&uLocal_126, 0);
				func_92(2, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				Local_122.f_178 = 5;
			}
			break;
		case 1:
			if (Global_1835502.f_106[bParam0] != -1)
			{
				if (Global_1835502.f_106[bParam0] == iVar0)
				{
					if (__LIB_12__::func_912() != 2)
					{
						MISC::SET_BIT(&uLocal_126, 11);
						func_92(12, 0);
						bVar1 = true;
					}
				}
				else
				{
					MISC::SET_BIT(&uLocal_126, 6);
					func_92(8, 0);
					bVar1 = true;
				}
			}
			else if (BitTest(Global_1853348[iVar0 /*834*/].f_142, bParam0))
			{
				MISC::SET_BIT(&uLocal_126, 6);
				func_92(8, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				Local_122.f_178 = 4;
			}
			break;
	}
	if (bVar1)
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
		Global_1922952 = 0;
		Global_1922953 = 0;
		MISC::CLEAR_BIT(&(Local_122.f_359), 10);
		func_32(1);
		return 0;
	}
	return 1;
}

void func_92(int iParam0, int iParam1)//Position - 0x44B3
{
	if (iParam1 != 0)
	{
		Local_144 = { __LIB_5__::func_405(iParam1, 0, 0) };
	}
	__LIB_0__::func_627(&uLocal_145, 0, 0);
	MISC::SET_BIT(&iLocal_142, iParam0);
}

void func_95()//Position - 0x4690
{
	int iVar0;
	struct<16> Var1;
	if (__LIB_0__::func_156(Local_122.f_358, 0, 1))
	{
		__LIB_1__::func_602(0, 0);
		__LIB_1__::func_767("STRING");
		StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(Local_122.f_358), 64);
		func_79(Var1);
		__LIB_1__::func_766(1, 1, 0, 0, 0);
		__LIB_1__::func_765(1, 2, 1, 1, 1);
		__LIB_12__::func_593(0, 1, 0, 0, 0);
		Local_122.f_181.f_2 = 1;
		Local_122.f_181.f_69 = 1;
		__LIB_3__::func_572(iVar0, "GC_MENU8" /* GXT: Sending request... */, 0, 1, 0, 0, 0);
		__LIB_3__::func_564(-1);
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
		Local_122.f_178 = 1;
	}
}

void func_96()//Position - 0x4723
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<13> Var4;
	iVar0 = PLAYER::PLAYER_ID();
	if (__LIB_3__::func_67(0, -1, 0))
	{
		if (!BitTest(Local_122.f_359, 4))
		{
			func_116();
			MISC::SET_BIT(&(Local_122.f_359), 4);
		}
	}
	if (Global_2689235[iVar0 /*453*/].f_212 != -1 && __LIB_0__::func_156(PLAYER::INT_TO_PLAYERINDEX(Global_2689235[iVar0 /*453*/].f_212), 0, 1))
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(Global_2689235[iVar0 /*453*/].f_212);
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(iVar2) >= iLocal_129 || Global_2689235[Global_2689235[iVar0 /*453*/].f_212 /*453*/].f_214 == iVar0)
		{
			Var3.f_2 = -230148856;
			Var3.f_10 = PLAYER::INT_TO_PLAYERINDEX(Global_2689235[iVar0 /*453*/].f_212);
			if (bLocal_130)
			{
				Var3.f_3 = 1;
			}
			else
			{
				Var3.f_3 = 0;
			}
			__LIB_1__::func_634(Var3, __LIB_0__::func_943(1, 1));
			if (!__LIB_1__::func_342(91, -1))
			{
				__LIB_1__::func_348(91, 1, -1, 1);
			}
			Var4 = { __LIB_0__::func_819(Var3.f_10) };
			if (__LIB_0__::func_112())
			{
				func_99(joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"), iLocal_128, &iVar1, 0, 0, 0);
				Global_4534105[iVar1 /*85*/].f_14 = { Var4 };
			}
			else
			{
				MONEY::NETWORK_SPENT_BUY_WANTEDLEVEL(iLocal_128, &Var4, false, false, joaat("char_lester"));
				__LIB_1__::func_865(-iLocal_128, 1, 1, 0f);
			}
			Global_2689235[iVar0 /*453*/].f_212 = -1;
			Global_2689235[iVar0 /*453*/].f_213 = -1;
			func_1(Local_122.f_1, "CT_AUD", "MPCT_WNTcon", &Local_166, 0);
			func_32(4);
		}
	}
	else
	{
		Global_2689235[iVar0 /*453*/].f_212 = -1;
		Global_2689235[iVar0 /*453*/].f_213 = -1;
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
		Local_122.f_181.f_69 = 0;
		Local_122.f_178 = 1;
		func_32(1);
	}
}

void func_99(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x495D
{
	int iVar0;
	if (!__LIB_0__::func_112())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_MECHANIC_WAGE"):
		case joaat("SERVICE_SPEND_UTILITY_BILLS"):
		case joaat("SERVICE_SPEND_PROSTITUTES"):
		case joaat("SERVICE_SPEND_STRIP_CLUB"):
		case joaat("SERVICE_SPEND_CINEMA"):
		case joaat("SERVICE_SPEND_FAIRGROUND"):
		case joaat("SERVICE_SPEND_LOTTERY"):
		case joaat("SERVICE_SPEND_TELESCOPE"):
		case joaat("SERVICE_SPEND_CALL_PLAYER"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
		case joaat("SERVICE_SPEND_CAR_REPAIR"):
		case joaat("SERVICE_SPEND_PERSONAL_VEHICLE_DROPOFF"):
		case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
		case joaat("SERVICE_SPEND_CAR_IMPOUND"):
		case joaat("SERVICE_SPEND_CARWASH"):
		case joaat("SERVICE_SPEND_HEALTHCARE"):
		case joaat("SERVICE_SPEND_OTHER_PLAYER_HEALTHCARE"):
		case joaat("SERVICE_SPEND_ARREST_BAIL"):
		case joaat("SERVICE_SPEND_CASH_DROP"):
		case joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"):
		case joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"):
		case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"):
		case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
		case joaat("SERVICE_SPEND_BETTING"):
		case joaat("SERVICE_SPEND_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_AMMO_DROP"):
		case joaat("SERVICE_SPEND_BACKUP_GANG"):
		case joaat("SERVICE_SPEND_BACKUP_HELI"):
		case joaat("SERVICE_SPEND_BOAT_PICKUP"):
		case joaat("SERVICE_SPEND_BOUNTY"):
		case joaat("SERVICE_SPEND_BULL_SHARK"):
		case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
		case joaat("SERVICE_SPEND_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
		case joaat("SERVICE_SPEND_HIRE_MUGGER"):
		case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
		case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
		case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
		case joaat("SERVICE_SPEND_PASSIVE"):
		case joaat("SERVICE_SPEND_REQUEST_HEIST"):
		case joaat("SERVICE_SPEND_REQUEST_JOB"):
		case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
		case joaat("SERVICE_SPEND_TAXI"):
		case joaat("SERVICE_SPEND_BANK_INTEREST"):
		case joaat("SERVICE_SPEND_CASH_GIFT"):
		case joaat("SERVICE_SPEND_CASH_SHARED"):
		case joaat("SERVICE_SPEND_IMPROMPTU_RACE_FEE"):
		case joaat("SERVICE_SPEND_BOUNTY_DM"):
		case joaat("SERVICE_SPEND_WAGER"):
		case joaat("SERVICE_SPEND_PAY_BOSS"):
		case joaat("SERVICE_SPEND_PAY_GOON"):
		case joaat("SERVICE_SPEND_RENAME_ORGANIZATION"):
		case joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_ORDER_BODYGUARD_VEHICLE"):
		case joaat("SERVICE_SPEND_ORDER_WAREHOUSE_VEHICLE"):
		case joaat("SERVICE_SPEND_JUKEBOX"):
		case joaat("SERVICE_SPEND_BUSINESS"):
		case joaat("SERVICE_SPEND_BA_VP_BOUNTY"):
		case joaat("SERVICE_SPEND_BA_VP_BULLSHARK"):
		case joaat("SERVICE_SPEND_BA_SARGE_AMMO"):
		case joaat("SERVICE_SPEND_BA_SARGE_MOLOTOV"):
		case joaat("SERVICE_SPEND_BA_ENFORCER_ARMOUR"):
		case joaat("SERVICE_SPEND_VEHICLE_EXPORT_MODS"):
		case joaat("SERVICE_SPEND_IMPORT_EXPORT_REPAIR"):
		case joaat("SERVICE_SPEND_EMPLOY_ASSASSINS"):
		case joaat("SERVICE_SPEND_GANGOPS_CANNON"):
		case joaat("SERVICE_SPEND_GANGOPS_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_GANGOPS_START_STRAND"):
		case joaat("SERVICE_SPEND_GANGOPS_TRIP_SKIP"):
		case joaat("SERVICE_SPEND_GANGOPS_REPAIR_COST"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_BAR_DRINK"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_DJ_REHIRE"):
		case joaat("SERVICE_SPEND_ARENA_JOIN_SPECTATOR"):
		case joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"):
		case joaat("SERVICE_SPEND_MAKE_IT_RAIN"):
			if (iParam1 > 0 || Global_262145.f_28363 /* Tunable: 1103207774 */)
			{
				func_100(iParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		case joaat("SERVICE_EARN_PICKUP"):
		case joaat("SERVICE_EARN_JOBS"):
		case joaat("SERVICE_EARN_BETTING"):
		case joaat("SERVICE_EARN_LOTTERY"):
		case joaat("SERVICE_EARN_CHALLENGE_WIN"):
		case joaat("SERVICE_EARN_PROPERTY_SALES"):
		case joaat("SERVICE_EARN_VEHICLE_SALES"):
		case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
		case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
		case joaat("SERVICE_EARN_CRATE_DROP"):
		case joaat("SERVICE_EARN_HOLDUPS"):
		case joaat("SERVICE_EARN_IMPORT_EXPORT"):
		case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
		case joaat("SERVICE_EARN_JOBSHARE_CASH"):
		case joaat("SERVICE_EARN_NOT_BADSPORT"):
		case joaat("SERVICE_EARN_BANK_INTEREST"):
		case joaat("SERVICE_EARN_ROCKSTAR"):
		case joaat("SERVICE_EARN_DEBUG"):
		case joaat("SERVICE_EARN_CNCW"):
		case joaat("SERVICE_EARN_CNCB"):
		case joaat("SERVICE_EARN_JOB_BONUS"):
		case joaat("SERVICE_EARN_BEND_JOB"):
		case joaat("SERVICE_EARN_PERSONAL_VEHICLE"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
		case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
		case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
		case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
		case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
		case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
		case joaat("SERVICE_EARN_REFUND_LOTTERY"):
		case joaat("SERVICE_EARN_REFUNDAPPEARANCE"):
		case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
		case joaat("SERVICE_EARN_BOSS"):
		case joaat("SERVICE_EARN_GOON"):
		case joaat("SERVICE_EARN_BOSS_AGENCY"):
		case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
		case joaat("SERVICE_EARN_PREMIUM_JOB"):
		case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
		case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT"):
		case joaat("SERVICE_EARN_REFUNDAMMODROP"):
		case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
		case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
		case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
		case joaat("SERVICE_EARN_CASHING_OUT"):
		case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
		case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
		case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
		case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
		case joaat("SERVICE_EARN_GANGOPS_FINALE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
		case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
		case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
		case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
		case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
		case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
		case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
		case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
		case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			func_100(iParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_SPIN_THE_WHEEL_PAYMENT"):
		case joaat("SERVICE_SPEND_CASINO_GENERIC"):
		case joaat("SERVICE_SPEND_ARCADE_GAME"):
		case joaat("SERVICE_SPEND_ARCADE_GENERIC"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SETUP_HEIST"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_CASINO_MODEL"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_VAULT_DOOR"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_DOOR_SECURITY"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"):
		case joaat("SERVICE_SPEND_BEACH_PARTY_GENERIC"):
		case joaat("SERVICE_SPEND_SUBMARINE_UTILITY_FEE"):
		case joaat("SERVICE_SPEND_SUBMARINE_BOAT"):
		case joaat("SERVICE_SPEND_SUBMARINE_RELOCATION"):
		case joaat("SERVICE_SPEND_CASINO_CLUB_GENERIC"):
		case joaat("SERVICE_SPEND_BUSINESS_EXPENSES"):
		case joaat("SERVICE_SPEND_FIXER_HQ_CONCIERGE"):
		case joaat("SERVICE_SPEND_REQUEST_COMPANY_SUV"):
		case joaat("SERVICE_SPEND_INTERACTION_MENU_ABILITY"):
		case joaat("SERVICE_SPEND_AGENT_14_VEHICLE_REQUEST"):
		case joaat("SERVICE_SPEND_TONY_LIMO"):
			if (iParam1 > 0 || Global_262145.f_28363 /* Tunable: 1103207774 */)
			{
				func_100(iParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
		case joaat("SERVICE_EARN_ARENA_WAR"):
		case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
		case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
		case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
		case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
		case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
		case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
		case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
		case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
		case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
		case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
		case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
		case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
		case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
		case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
		case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
		case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FROM_CONTRABAND"):
		case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
		case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
		case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
			func_100(iParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_100(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x516E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bVar0 = false;
	if (!__LIB_0__::func_112())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(__LIB_0__::getGlobal_1574918()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam3 == joaat("CATEGORY_WEAPON_AMMO") || iParam3 == joaat("CATEGORY_MART"))
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4534105[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*iParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*iParam0 = __LIB_1__::func_367(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*iParam0 != -1)
				{
					Global_4534105[*iParam0 /*85*/].f_66.f_8 = 1;
					Global_4534105[*iParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4535606 = 1;
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			__LIB_0__::func_948(1, iParam4);
			Global_4535606 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			__LIB_1__::func_374(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_116()//Position - 0x5862
{
	int iVar0;
	struct<16> Var1;
	if (__LIB_0__::func_156(Local_122.f_358, 0, 1))
	{
		__LIB_1__::func_602(0, 0);
		__LIB_1__::func_767("STRING");
		StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(Local_122.f_358), 64);
		func_79(Var1);
		__LIB_1__::func_766(1, 1, 0, 0, 0);
		__LIB_1__::func_765(1, 2, 1, 1, 1);
		__LIB_12__::func_593(0, 1, 0, 0, 0);
		Local_122.f_181.f_2 = 1;
		Local_122.f_181.f_69 = 1;
		__LIB_3__::func_572(iVar0, "GC_MENU8" /* GXT: Sending request... */, 0, 1, 0, 0, 0);
		__LIB_3__::func_564(-1);
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
		Local_122.f_178 = 1;
	}
}

void func_120()//Position - 0x59A4
{
	bLocal_125 = true;
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	__LIB_1__::func_733();
	__LIB_0__::func_189();
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 16 /*INPUT_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 17 /*INPUT_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 14 /*INPUT_WEAPON_WHEEL_NEXT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 15 /*INPUT_WEAPON_WHEEL_PREV*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 12 /*INPUT_WEAPON_WHEEL_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 13 /*INPUT_WEAPON_WHEEL_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/);
		__LIB_0__::func_876(1);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/);
	}
	if (!BitTest(Local_122.f_359, 15))
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
		MISC::SET_BIT(&(Local_122.f_359), 15);
	}
	if (!BitTest(Local_122.f_359, 11))
	{
		HUD::CLEAR_HELP(true);
		MISC::SET_BIT(&(Local_122.f_359), 11);
	}
	if (!Global_1922954)
	{
		Global_1922954 = 1;
	}
	if (BitTest(bLocal_169, 0))
	{
		if (!BitTest(bLocal_169, 1))
		{
			__LIB_2__::func_820(0, 31, 4);
			MISC::SET_BIT(&bLocal_169, 1);
		}
		else if (!Global_100493.f_1458)
		{
			MISC::CLEAR_BIT(&bLocal_169, 0);
			MISC::CLEAR_BIT(&bLocal_169, 1);
		}
		return;
	}
	func_1121();
	if (__LIB_12__::func_912() == 1)
	{
		if (!BitTest(Local_122.f_359, 13))
		{
			if (func_1120())
			{
				if (!BitTest(Local_122.f_359, 6))
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				}
				Global_23150.f_8773 = 0;
				MISC::SET_BIT(&(Local_122.f_359), 13);
			}
			else
			{
				Global_23150.f_8773 = 1;
			}
		}
		switch (Local_122.f_0)
		{
			case 12:
				func_1075();
				break;
			case 19:
				func_1066();
				break;
			case 85:
				func_1024();
				break;
			case 84:
				func_1022();
				break;
			case 89:
				func_1021();
				break;
			case 41:
				func_947();
				break;
			case 91:
				func_910();
				break;
			case 18:
				func_908();
				break;
			case 31:
				func_906();
				break;
			case 86:
				func_904();
				break;
			case 20:
				func_902();
				break;
			case 104:
			case 105:
			case 106:
			case 107:
			case 108:
			case 109:
			case 110:
			case 111:
				func_900();
				break;
			case 82:
				func_887();
				break;
			case 79:
				func_842();
				break;
			case 75:
			case 74:
				func_771();
				break;
			case 157:
				func_580();
				break;
			case 169:
				func_540();
				break;
			case 172:
				func_506();
				break;
			case 176:
				func_498();
				break;
			case 175:
				func_419();
				break;
			case 151:
				func_403();
				break;
			case 76:
				func_379();
				break;
			case 181:
				func_121();
				break;
			}
	}
}

void func_121()//Position - 0x5CC2
{
	if (__LIB_3__::func_67(0, -1, 1))
	{
		if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			func_371();
		}
		else
		{
			func_122();
		}
	}
}

void func_122()//Position - 0x5CF5
{
	if (__LIB_4__::func_922(Local_122.f_181.f_69))
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				__LIB_1__::func_789("YOHN_OP1_D" /* GXT: Request Nightclub Goods.~n~Current Stock Level: ~1~%~n~Current Stock Value: $~1~ */, 0, 0);
				__LIB_8__::func_283(func_359());
				__LIB_8__::func_283(__LIB_19__::func_934(PLAYER::PLAYER_ID()));
				break;
		}
	}
	else
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				if (!__LIB_11__::func_439())
				{
					__LIB_1__::func_789("YOHN_OP1_D1" /* GXT: Unavailable. Complete the Nightclub setup to start Nightclub Goods. */, 0, 0);
				}
				else if (func_359() >= 100)
				{
					__LIB_1__::func_789("YOHN_OP1_D2" /* GXT: Unavailable. Your Nightclub Basement is already full. */, 0, 0);
				}
				else if (func_347())
				{
					Local_144 = { __LIB_5__::func_405(func_345(), 0, 0) };
					__LIB_1__::func_789("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
					__LIB_9__::func_336(&Local_144);
				}
				else
				{
					__LIB_1__::func_789("YOHN_NA" /* GXT: This request is not currently available. */, 100, 0);
				}
				break;
			default:
				__LIB_1__::func_789("YOHN_NA" /* GXT: This request is not currently available. */, 100, 0);
				break;
			}
	}
	func_123();
}

void func_123()//Position - 0x5DC5
{
	func_148();
	__LIB_11__::func_266(1, -1, 1, BitTest(bLocal_169, 2), 1, -1082130432, 0, 0, -1);
}

void func_148()//Position - 0x96D1
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	struct<13> Var3;
	int iVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	struct<4> Var14;
	iVar4 = 0;
	bVar7 = false;
	if (iLocal_142 == 0 && iLocal_143 == 0)
	{
		switch (Local_122.f_178)
		{
			case 0:
				switch (Local_122.f_181.f_70[Local_122.f_181.f_69])
				{
					case 0:
						if (__LIB_2__::func_104(29, 0, 0))
						{
							if (!func_309(1))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(1))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_DES_BNTY" /* GXT: Choose a player to place a Bounty on or view their current Bounty value. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
							__LIB_8__::func_283(__LIB_2__::func_915(29));
						}
						if (func_273(1))
						{
							__LIB_11__::func_617("MPCT_LESTDIS" /* GXT: Lester is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 1:
						if (__LIB_2__::func_104(65, 0, 0))
						{
							if (!func_309(20))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(20))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_LOSE_WANT" /* GXT: Clear your Wanted Level. Get out of sight of the Cops first. */, 100, 0);
							}
						}
						else
						{
							iVar1 = __LIB_1__::func_136(PLAYER::PLAYER_ID());
							if (iVar1 < __LIB_2__::func_915(65))
							{
								__LIB_1__::func_789("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
								__LIB_8__::func_283(__LIB_2__::func_915(65));
							}
							else
							{
								__LIB_1__::func_789("MPCT_WLEST" /* GXT: Wait for Lester to contact you. */, 100, 0);
							}
						}
						if (func_273(20))
						{
							__LIB_11__::func_617("MPCT_LESTDIS" /* GXT: Lester is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 2:
						if (__LIB_2__::func_104(75, 0, 0))
						{
							if (!func_309(6))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(6))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_OTR" /* GXT: Hide yourself from other players on the Radar for 1 minute. */, 100, 0);
							}
						}
						else
						{
							iVar1 = __LIB_1__::func_136(PLAYER::PLAYER_ID());
							if (iVar1 < __LIB_2__::func_915(75))
							{
								__LIB_1__::func_789("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
								__LIB_8__::func_283(__LIB_2__::func_915(75));
							}
							else
							{
								__LIB_1__::func_789("MPCT_WLEST" /* GXT: Wait for Lester to contact you. */, 100, 0);
							}
						}
						if (func_273(6))
						{
							__LIB_11__::func_617("MPCT_LESTDIS" /* GXT: Lester is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 3:
						if (__LIB_2__::func_104(95, 0, 0))
						{
							if (!func_309(14))
							{
								__LIB_1__::func_789("MPCT_RVLPL" /* GXT: Available on Jobs where player blips are off by default. */, 100, 0);
							}
							else if (!func_279(14))
							{
								__LIB_1__::func_789("MPCT_RVLPL" /* GXT: Available on Jobs where player blips are off by default. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_RE" /* GXT: Reveal other players on the Radar for 1 minute. */, 100, 0);
							}
						}
						else
						{
							iVar1 = __LIB_1__::func_136(PLAYER::PLAYER_ID());
							if (iVar1 < __LIB_2__::func_915(95))
							{
								__LIB_1__::func_789("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
								__LIB_8__::func_283(__LIB_2__::func_915(95));
							}
							else
							{
								__LIB_1__::func_789("MPCT_WLEST" /* GXT: Wait for Lester to contact you. */, 100, 0);
							}
						}
						if (func_273(14))
						{
							__LIB_11__::func_617("MPCT_LESTDIS" /* GXT: Lester is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 4:
						if (__LIB_2__::func_104(88, 0, 0))
						{
							if (!func_309(15))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(15))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_LJOB" /* GXT: Request an invite to a previously completed Job. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("MPCT_RQJL" /* GXT: This item unlocks when Lester has a Job available. */, 100, 0);
						}
						break;
					case 10:
						if (__LIB_2__::func_104(121, 0, 0))
						{
							if (!func_309(36))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(36))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else if (__LIB_3__::func_484())
							{
								__LIB_1__::func_789("MPCT_RQHU" /* GXT: Unavailable: a Heist is currently active. */, 100, 0);
							}
							else if (__LIB_1__::func_511(PLAYER::PLAYER_ID(), 0, 0) && func_255())
							{
								__LIB_1__::func_789("MPCT_RQAPT" /* GXT: Unavailable: Access the Planning Board to replay a Heist when in an Apartment. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_HJOB" /* GXT: Request a replay of a Heist. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("MPCT_RQHL" /* GXT: This item unlocks when Lester has a Heist available for replay. */, 100, 0);
						}
						break;
					case 11:
						if (__LIB_2__::func_104(96, 0, 0))
						{
							if (__LIB_3__::func_484())
							{
								if (!func_309(37))
								{
									__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
								}
								else if (!func_279(37))
								{
									__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
								}
								else
								{
									__LIB_1__::func_789("MPCT_CNCL" /* GXT: Cancel the currently active Heist. */, 100, 0);
								}
							}
							else
							{
								__LIB_1__::func_789("MPCT_CNCLH" /* GXT: This item is available when there is a currently active Heist. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("MPCT_RQHL" /* GXT: This item unlocks when Lester has a Heist available for replay. */, 100, 0);
						}
						break;
					case 12:
						if (__LIB_10__::func_196(PLAYER::PLAYER_ID()))
						{
							if (__LIB_10__::func_435(PLAYER::PLAYER_ID(), 0) == -1)
							{
								__LIB_1__::func_789("HPPHONE_REPLAYH", 100, 0);
							}
							else
							{
								__LIB_1__::func_789("HPPHONE_UNAV2", 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("HPPHONE_UNAV1" /* GXT: This item unlocks when Lester has an act of The Doomsday Heist available for replay. */, 100, 0);
						}
						break;
					case 13:
						if (__LIB_10__::func_196(PLAYER::PLAYER_ID()))
						{
							if (__LIB_10__::func_435(PLAYER::PLAYER_ID(), 0) != -1)
							{
								__LIB_1__::func_789("HPPHONE_CANCELH" /* GXT: Cancel the currently active act of The Doomsday Heist. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("HPPHONE_UNAV3" /* GXT: Unavailable: The Doomsday Heist is not currently active. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("HPPHONE_UNAV1" /* GXT: This item unlocks when Lester has an act of The Doomsday Heist available for replay. */, 100, 0);
						}
						break;
					case 15:
						if ((__LIB_4__::func_895(PLAYER::PLAYER_ID(), 1) && __LIB_4__::func_895(PLAYER::PLAYER_ID(), 2)) && __LIB_4__::func_895(PLAYER::PLAYER_ID(), 3))
						{
							if (!__LIB_9__::func_639(PLAYER::PLAYER_ID()))
							{
								__LIB_1__::func_789("CSH_LPHONE_UNAV2" /* GXT: Unavailable: The Diamond Casino Heist is not currently active. */, 100, 0);
							}
							else if (__LIB_2__::func_573(PLAYER::PLAYER_ID()))
							{
								__LIB_1__::func_789("CSH_LPHONE_UNAV3" /* GXT: Unavailable: Can't cancel The Diamond Casino Heist while in the Arcade. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("CSH_LPHONE_TIP1" /* GXT: Cancel your current progress on The Diamond Casino Heist. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("CSH_LPHONE_UNAV1" /* GXT: This item unlocks when you have completed the main approaches to The Diamond Casino Heist. */, 100, 0);
						}
						break;
					case 5:
						if (__LIB_2__::func_104(104, 0, 0))
						{
							if (!func_309(23))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(23))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_LCBT" /* GXT: Locate a boat and display it on the Map. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
							__LIB_8__::func_283(__LIB_2__::func_915(104));
						}
						if (func_273(23))
						{
							__LIB_11__::func_617("MPCT_LESTDIS" /* GXT: Lester is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 6:
						if (__LIB_2__::func_104(98, 0, 0))
						{
							if (!func_309(24))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(24))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_LCHL" /* GXT: Locate a helicopter and display it on the Map. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
							__LIB_8__::func_283(__LIB_2__::func_915(98));
						}
						if (func_273(24))
						{
							__LIB_11__::func_617("MPCT_LESTDIS" /* GXT: Lester is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 7:
						if (__LIB_2__::func_104(103, 0, 0))
						{
							if (!func_309(25))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(25))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_LCCR" /* GXT: Locate a car and display it on the Map. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
							__LIB_8__::func_283(__LIB_2__::func_915(103));
						}
						if (func_273(25))
						{
							__LIB_11__::func_617("MPCT_LESTDIS" /* GXT: Lester is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 8:
						if (__LIB_2__::func_104(105, 0, 0))
						{
							if (!func_309(26))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(26))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_LCPL" /* GXT: Locate a plane and display it on the Map. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
							__LIB_8__::func_283(__LIB_2__::func_915(105));
						}
						if (func_273(26))
						{
							__LIB_11__::func_617("MPCT_LESTDIS" /* GXT: Lester is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 14:
						if (__LIB_2__::func_104(98, 0, 0))
						{
							if (!func_309(57))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(57))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_LCHL" /* GXT: Locate a helicopter and display it on the Map. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
							__LIB_8__::func_283(__LIB_2__::func_915(98));
						}
						if (func_273(57))
						{
							__LIB_11__::func_617("MPCT_LESTDIS" /* GXT: Lester is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 9:
						if (__LIB_2__::func_104(119, 0, 0))
						{
							if (!func_309(35))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(35))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else if (__LIB_28__::func_753())
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (__LIB_2__::func_56())
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_NCPS" /* GXT: Cops will ignore any crimes you commit for a short period of time. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
							__LIB_8__::func_283(__LIB_2__::func_915(119));
						}
						if (func_273(35))
						{
							__LIB_11__::func_617("MPCT_LESTDIS" /* GXT: Lester is currently offering a discount on this service. */, 100, 0);
						}
						break;
				}
				break;
			case 5:
				if (__LIB_12__::func_912() == 1)
				{
					switch (Local_122.f_181.f_70[Local_122.f_181.f_69])
					{
						case 0:
							if (__LIB_2__::func_104(67, 0, 0))
							{
								if (!func_309(2))
								{
									__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
								}
								else if (!func_279(2))
								{
									__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
								}
								else
								{
									__LIB_1__::func_789("MPCT_THIEF" /* GXT: Choose a player to be targeted by a Mugger who will steal a portion of their cash. */, 100, 0);
								}
							}
							else
							{
								iVar1 = __LIB_1__::func_136(PLAYER::PLAYER_ID());
								if (iVar1 < __LIB_2__::func_915(67))
								{
									__LIB_1__::func_789("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
									__LIB_8__::func_283(__LIB_2__::func_915(67));
								}
								else
								{
									__LIB_1__::func_789("MPCT_WLAM" /* GXT: Wait for Lamar to contact you. */, 100, 0);
								}
							}
							if (func_273(2))
							{
								__LIB_11__::func_617("MPCT_LAMADIS" /* GXT: Lamar is currently offering a discount on this service. */, 100, 0);
							}
							break;
						case 1:
							if (!func_309(38))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(38))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("FM_LAMC_FRD" /* GXT: Restart Lamar's missions from the beginning. */, 100, 0);
							}
							break;
						case 2:
							__LIB_1__::func_789("MPCT_EXIT" /* GXT: Close down the menu. */, 100, 0);
							break;
						}
				}
				break;
			case 4:
				switch (Local_122.f_181.f_70[Local_122.f_181.f_69])
				{
					case 5:
						if (__LIB_2__::func_104(64, 0, 0))
						{
							if (!func_309(11) || BitTest(Global_44241, 10))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(11))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_AIRSTRIKE" /* GXT: Request an Airstrike at a selected position. */, 100, 0);
							}
						}
						else
						{
							iVar1 = __LIB_1__::func_136(PLAYER::PLAYER_ID());
							if (iVar1 < __LIB_2__::func_915(64))
							{
								__LIB_1__::func_789("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
								__LIB_8__::func_283(__LIB_2__::func_915(64));
							}
							else
							{
								__LIB_1__::func_789("MPCT_WMERRY" /* GXT: Wait for Merryweather to contact you. */, 100, 0);
							}
						}
						if (func_273(11))
						{
							__LIB_11__::func_617("MPCT_MERRYDIS" /* GXT: Merryweather are currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 0:
						if (__LIB_2__::func_104(61, 0, 0))
						{
							if (!func_309(8))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(8))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_AMMO" /* GXT: Request an ammo crate to be dropped at your GPS location. Be sure you are in a secluded location to stop other players stealing it. */, 100, 0);
							}
						}
						else
						{
							iVar1 = __LIB_1__::func_136(PLAYER::PLAYER_ID());
							if (iVar1 < __LIB_2__::func_915(61))
							{
								__LIB_1__::func_789("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
								__LIB_8__::func_283(__LIB_2__::func_915(61));
							}
							else
							{
								__LIB_1__::func_789("MPCT_WMERRY" /* GXT: Wait for Merryweather to contact you. */, 100, 0);
							}
						}
						if (func_273(8))
						{
							__LIB_11__::func_617("MPCT_MERRYDIS" /* GXT: Merryweather are currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 1:
						if (__LIB_2__::func_104(62, 0, 0))
						{
							if (!func_309(10))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(10))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_BACK_HELI" /* GXT: Request a helicopter to provide covering fire. */, 100, 0);
							}
						}
						else
						{
							iVar1 = __LIB_1__::func_136(PLAYER::PLAYER_ID());
							if (iVar1 < __LIB_2__::func_915(62))
							{
								__LIB_1__::func_789("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
								__LIB_8__::func_283(__LIB_2__::func_915(62));
							}
							else
							{
								__LIB_1__::func_789("MPCT_WMERRY" /* GXT: Wait for Merryweather to contact you. */, 100, 0);
							}
						}
						if (func_273(10))
						{
							__LIB_11__::func_617("MPCT_MERRYDIS" /* GXT: Merryweather are currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 2:
						if (__LIB_2__::func_104(63, 0, 0))
						{
							if (!func_309(9))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(9))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_BOAT" /* GXT: Request a boat to bring you to land. */, 100, 0);
							}
						}
						else
						{
							iVar1 = __LIB_1__::func_136(PLAYER::PLAYER_ID());
							if (iVar1 < __LIB_2__::func_915(63))
							{
								__LIB_1__::func_789("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
								__LIB_8__::func_283(__LIB_2__::func_915(63));
							}
							else
							{
								__LIB_1__::func_789("MPCT_WMERRY" /* GXT: Wait for Merryweather to contact you. */, 100, 0);
							}
						}
						if (func_273(9))
						{
							__LIB_11__::func_617("MPCT_MERRYDIS" /* GXT: Merryweather are currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 4:
						if (__LIB_2__::func_104(81, 0, 0))
						{
							if (!func_309(12))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(12))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_ARMY" /* GXT: Choose a player to be attacked by Mercenaries. */, 100, 0);
							}
						}
						else
						{
							iVar1 = __LIB_1__::func_136(PLAYER::PLAYER_ID());
							if (iVar1 < __LIB_2__::func_915(81))
							{
								__LIB_1__::func_789("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
								__LIB_8__::func_283(__LIB_2__::func_915(81));
							}
							else
							{
								__LIB_1__::func_789("MPCT_WMERRY" /* GXT: Wait for Merryweather to contact you. */, 100, 0);
							}
						}
						if (func_273(12))
						{
							__LIB_11__::func_617("MPCT_MERRYDIS" /* GXT: Merryweather are currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 3:
						if (__LIB_2__::func_104(77, 0, 0))
						{
							iVar8 = func_244();
							if (iVar8 != 0)
							{
								if (iVar8 == 2)
								{
									__LIB_1__::func_789("MPCT_UNAVAIL2" /* GXT: Unavailable at current location. */, 100, 0);
								}
								else
								{
									__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
								}
							}
							else if (!func_309(13))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(13))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_HELI" /* GXT: Request a helicopter to pick you up. */, 100, 0);
							}
						}
						else
						{
							iVar1 = __LIB_1__::func_136(PLAYER::PLAYER_ID());
							if (iVar1 < __LIB_2__::func_915(77))
							{
								__LIB_1__::func_789("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
								__LIB_8__::func_283(__LIB_2__::func_915(77));
							}
							else
							{
								__LIB_1__::func_789("MPCT_WMERRY" /* GXT: Wait for Merryweather to contact you. */, 100, 0);
							}
						}
						if (func_273(13))
						{
							__LIB_11__::func_617("MPCT_MERRYDIS" /* GXT: Merryweather are currently offering a discount on this service. */, 100, 0);
						}
						break;
				}
				break;
			case 10:
				if (iLocal_160 == -1 && iLocal_161)
				{
				}
				else if (func_273(22) && Local_122.f_181.f_69 <= Local_122.f_181.f_2)
				{
					__LIB_1__::func_789("MPCT_PEGADIS" /* GXT: Pegasus are currently offering a discount on this service. */, 100, 0);
				}
				break;
			case 7:
				switch (Local_122.f_181.f_69)
				{
					case 0:
						if (__LIB_2__::func_104(74, 0, 0))
						{
							if (!func_309(0))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(0))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_BRUC_BOX" /* GXT: Request a package of Bull Shark Testosterone. Doubles damage inflicted and halves damage received. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
							__LIB_8__::func_283(__LIB_2__::func_915(74));
						}
						if (func_273(0))
						{
							__LIB_11__::func_617("MPCT_BRUCEDIS" /* GXT: Brucie is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 1:
						__LIB_1__::func_789("MPCT_EXIT" /* GXT: Close down the menu. */, 100, 0);
						break;
				}
				break;
			case 18:
				switch (Local_122.f_181.f_69)
				{
					case 0:
						if (__LIB_2__::func_104(130, 0, 0))
						{
							if (!func_309(39))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(39))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_GB_LIMO" /* GXT: Request your Organization's Turreted Limo to be delivered. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
							__LIB_8__::func_283(__LIB_2__::func_915(74));
						}
						break;
					case 1:
						__LIB_1__::func_789("MPCT_EXIT" /* GXT: Close down the menu. */, 100, 0);
						break;
				}
				break;
			case 19:
				switch (Local_122.f_181.f_69)
				{
					case 0:
						if (__LIB_1__::func_781(PLAYER::PLAYER_ID()))
						{
							iVar9 = __LIB_1__::func_780(PLAYER::PLAYER_ID());
							if (!func_279(42) || !func_309(42))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (__LIB_1__::func_779(0, 1024))
							{
								__LIB_1__::func_789("MPCT_YC_HNONE" /* GXT: Your Yacht is not equipped with a helicopter. */, 100, 0);
							}
							else if (func_240(0))
							{
								__LIB_1__::func_789("MPCT_YC_HSPN" /* GXT: Your helicopter is already on the way. */, 100, 0);
							}
							else if (func_239(PLAYER::PLAYER_ID(), 0))
							{
								__LIB_1__::func_789("MPCT_YC_HIN" /* GXT: You are already using the helicopter. */, 100, 0);
							}
							else if (__LIB_10__::func_724(PLAYER::PLAYER_ID(), iVar9, 100f))
							{
								__LIB_1__::func_789("MPCT_YC_CLOSE" /* GXT: You are too close to your Yacht. */, 100, 0);
							}
							else if (func_231(0))
							{
								__LIB_1__::func_789("MPCT_YC_HSPWND" /* GXT: A helicopter is already on the shore. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_YC_YAH" /* GXT: Tell the Captain to deliver a Helicopter to the coastline nearest your Yacht. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("MPCT_YC_NOY" /* GXT: You do not own a Yacht. */, 100, 0);
						}
						if (func_273(40))
						{
							__LIB_11__::func_617("MPCT_YACHTDIS" /* GXT: The captain is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 1:
						if (__LIB_1__::func_781(PLAYER::PLAYER_ID()))
						{
							iVar10 = __LIB_1__::func_780(PLAYER::PLAYER_ID());
							if (!func_279(42) || !func_309(42))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (func_239(PLAYER::PLAYER_ID(), 1))
							{
								__LIB_1__::func_789("MPCT_YC_BIN" /* GXT: You are already using the boat. */, 100, 0);
							}
							else if (func_240(1))
							{
								__LIB_1__::func_789("MPCT_YC_BSPN" /* GXT: Your boat is already on the way. */, 100, 0);
							}
							else if (__LIB_10__::func_724(PLAYER::PLAYER_ID(), iVar10, 100f))
							{
								__LIB_1__::func_789("MPCT_YC_CLOSE" /* GXT: You are too close to your Yacht. */, 100, 0);
							}
							else if (func_231(1))
							{
								__LIB_1__::func_789("MPCT_YC_BSPWND" /* GXT: A boat is already on the shore. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_YC_YAB" /* GXT: Tell the Captain to deliver a Boat to the coastline nearest your Yacht. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("MPCT_YC_NOY" /* GXT: You do not own a Yacht. */, 100, 0);
						}
						if (func_273(41))
						{
							__LIB_11__::func_617("MPCT_YACHTDIS" /* GXT: The captain is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 2:
						if (__LIB_1__::func_781(PLAYER::PLAYER_ID()))
						{
							iVar13 = __LIB_1__::func_780(PLAYER::PLAYER_ID());
							func_187(&bVar12, &bVar11);
							if (!func_279(42) || !func_309(42))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (func_186(PLAYER::PLAYER_ID()))
							{
								__LIB_1__::func_789("MPCT_YC_PIN" /* GXT: You are already using your Personal Vehicle. */, 100, 0);
							}
							else if (func_177(1133903872))
							{
								__LIB_1__::func_789("MPCT_YC_PSPWND" /* GXT: You are too close to your current Personal Vehicle. */, 100, 0);
							}
							else if (!bVar12)
							{
								__LIB_1__::func_789("MPCT_YC_GAR" /* GXT: There are no available garages. */, 100, 0);
							}
							else if (!bVar11)
							{
								__LIB_1__::func_789("MPCT_YC_VEH" /* GXT: There are no available vehicles. */, 100, 0);
							}
							else if (!__LIB_10__::func_724(PLAYER::PLAYER_ID(), iVar13, 100f))
							{
								__LIB_1__::func_789("MPCT_YC_FAR" /* GXT: You are too far away from your Yacht. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_YC_YAP" /* GXT: Tell the Captain to deliver your Personal Vehicle to the coastline nearest your Yacht. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("MPCT_YC_NOY" /* GXT: You do not own a Yacht. */, 100, 0);
						}
						if (func_273(42))
						{
							__LIB_11__::func_617("MPCT_YACHTDIS" /* GXT: The captain is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 3:
						if (__LIB_1__::func_781(PLAYER::PLAYER_ID()))
						{
							if ((!func_279(64) || !func_309(64)) || Global_262145.f_29259 /* Tunable: -2046990177 */)
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("YACHT_REQDESC" /* GXT: Request a job from your Galaxy Super Yacht Captain. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("MPCT_YC_NOY" /* GXT: You do not own a Yacht. */, 100, 0);
						}
						break;
				}
				break;
			case 20:
				switch (Local_122.f_181.f_69)
				{
					case 0:
						if (__LIB_3__::func_39(PLAYER::PLAYER_ID()))
						{
							if (!func_309(43))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(43))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else if (__LIB_8__::func_889(__LIB_1__::func_463()))
							{
								if (func_170())
								{
									__LIB_1__::func_789("MPCT_PA_IMP" /* GXT: Tell the Executive Assistant to recover your impounded vehicle. */, 100, 0);
								}
								else
								{
									__LIB_1__::func_789("MPCT_PA_IMP_F" /* GXT: Tell the Executive Assistant to recover your impounded vehicle. */, 100, 0);
								}
							}
							else
							{
								__LIB_1__::func_789("MPCT_PA_IMPF" /* GXT: None of your vehicles are currently impounded. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("MPCT_PA_NOY" /* GXT: You do not own an Office. */, 100, 0);
						}
						if (func_273(43))
						{
							__LIB_11__::func_617("MPCT_YACHTDIS" /* GXT: The captain is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 1:
						if (__LIB_3__::func_39(PLAYER::PLAYER_ID()))
						{
							iVar8 = func_168();
							if (iVar8 != 0)
							{
								if (iVar8 == 3)
								{
									__LIB_1__::func_789("MPCT_PA_YAH0A" /* GXT: The Luxury Helicopter pickup has already been requested. */, 100, 0);
								}
								else if (iVar8 == 2)
								{
									__LIB_1__::func_789("MPCT_UNAVAIL2" /* GXT: Unavailable at current location. */, 100, 0);
								}
								else
								{
									__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
								}
							}
							else if (!func_309(44))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(44))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else if (__LIB_28__::func_259())
							{
								if (func_170())
								{
									__LIB_1__::func_789("MPCT_PA_HP" /* GXT: Tell the Executive Assistant to send a Helicopter to your location. */, 100, 0);
								}
								else
								{
									__LIB_1__::func_789("MPCT_PA_HPF" /* GXT: Tell the Executive Assistant to send a Helicopter to your location. */, 100, 0);
								}
							}
							else if (!BitTest(Local_122.f_359, 10))
							{
								__LIB_1__::func_789("MPCT_PA_YAH0U" /* GXT: Unavailable. This helicopter is already in use by another player. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("MPCT_PA_NOY" /* GXT: You do not own an Office. */, 100, 0);
						}
						if (func_273(44))
						{
							__LIB_11__::func_617("MPCT_YACHTDIS" /* GXT: The captain is currently offering a discount on this service. */, 100, 0);
						}
						break;
				}
				break;
			case 21:
				break;
			case 12:
				switch (Local_122.f_181.f_69)
				{
					case 0:
						if (__LIB_2__::func_104(99, 0, 0))
						{
							if (!func_309(18))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(18))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_LJOB" /* GXT: Request an invite to a previously completed Job. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("MPCT_RQJS" /* GXT: This item unlocks when Simeon has a Job available. */, 100, 0);
						}
						break;
					case 1:
						__LIB_1__::func_789("MPCT_EXIT" /* GXT: Close down the menu. */, 100, 0);
						break;
				}
				break;
			case 13:
				switch (Local_122.f_181.f_69)
				{
					case 0:
						if (__LIB_2__::func_104(100, 0, 0))
						{
							if (!func_309(19))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(19))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_LJOB" /* GXT: Request an invite to a previously completed Job. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("MPCT_RQJM" /* GXT: This item unlocks when Martin has a Job available. */, 100, 0);
						}
						break;
					case 1:
						__LIB_1__::func_789("MPCT_EXIT" /* GXT: Close down the menu. */, 100, 0);
						break;
				}
				break;
			case 15:
				switch (Local_122.f_181.f_69)
				{
					case 0:
						if (__LIB_2__::func_104(106, 0, 0))
						{
							if (!func_309(21))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(21))
							{
								__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_LJOB" /* GXT: Request an invite to a previously completed Job. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("MPCT_RQJR" /* GXT: This item unlocks when Ron has a Job available. */, 100, 0);
						}
						break;
					case 1:
						__LIB_1__::func_789("MPCT_EXIT" /* GXT: Close down the menu. */, 100, 0);
						break;
				}
				break;
			case 14:
				switch (Local_122.f_181.f_69)
				{
					case 0:
						if (__LIB_2__::func_104(97, 0, 0))
						{
							if (func_309(17))
							{
								if (func_279(17))
								{
									__LIB_1__::func_789("MPCT_LJOB" /* GXT: Request an invite to a previously completed Job. */, 100, 0);
								}
								else
								{
									__LIB_1__::func_789("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
								}
							}
							else
							{
								__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("MPCT_RQJG" /* GXT: This item unlocks when Gerald has a Job available. */, 100, 0);
						}
						break;
					case 1:
						__LIB_1__::func_789("MPCT_EXIT" /* GXT: Close down the menu. */, 100, 0);
						break;
				}
				break;
			case 2:
				switch (Local_122.f_181.f_69)
				{
					case 0:
						bVar0 = __LIB_3__::func_365(Local_122.f_358);
						if (bVar0)
						{
							__LIB_1__::func_789("BB_DES_CUR" /* GXT: Current value of the Bounty on the selected player. */, 100, 0);
						}
						else if (func_165(&iVar4))
						{
							__LIB_1__::func_789("BB_DELAY1" /* GXT: You have hit your daily limit of bounties. You can set another in ~a~. */, 100, 0);
							Local_144 = { __LIB_5__::func_405(iVar4, 0, 0) };
							__LIB_9__::func_336(&Local_144);
						}
						else
						{
							Var3 = { __LIB_0__::func_819(Local_122.f_358) };
							if (func_162(&Var3, &iVar4))
							{
								__LIB_1__::func_789("BB_DELAY" /* GXT: You can set a bounty on this player again in ~a~. */, 100, 0);
								Local_144 = { __LIB_5__::func_405(iVar4, 0, 0) };
								__LIB_9__::func_336(&Local_144);
							}
							else if (Global_2815059.f_1856.f_1 != 0 && !BitTest(Local_122.f_359, 8))
							{
								__LIB_1__::func_789("BB_ABOUNTYSET" /* GXT: You have already set a Bounty.~n~Another can be placed when that Bounty is over. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("BB_DES_SET" /* GXT: Set a new Bounty on the selected player. Lester takes a $~1~ cut. */, 100, 0);
								__LIB_8__::func_283(Global_262145.f_7104 /* Tunable: LESTER_BOUNTY_CUT */);
							}
						}
						break;
				}
				break;
			case 6:
				if (BitTest(bLocal_169, 2) && Local_122.f_181.f_69 == 1)
				{
					__LIB_1__::func_789("MPCT_EXIT" /* GXT: Close down the menu. */, 100, 0);
				}
				else if (!BitTest(Global_1585857[uLocal_159[Local_122.f_181.f_69] /*142*/].f_103, 1))
				{
					if (STREAMING::IS_MODEL_A_VEHICLE(__LIB_9__::func_337(uLocal_159[Local_122.f_181.f_69])))
					{
						if (!__LIB_8__::func_889(uLocal_159[Local_122.f_181.f_69]))
						{
							if (__LIB_1__::func_463() != -1)
							{
								if (__LIB_9__::func_337(uLocal_159[Local_122.f_181.f_69]) == joaat("oppressor2") && __LIB_12__::func_673())
								{
									Var2 = { __LIB_5__::func_405((Global_262145.f_28396 /* Tunable: 247954694 */ - __LIB_9__::func_22(&Global_2789823, 1)), 0, 0) };
									__LIB_1__::func_789("PI_BIK_TIMER" /* GXT: This vehicle can be requested again in ~a~. */, 0, 0);
									__LIB_9__::func_336(&Var2);
								}
								else if (!BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 6))
								{
									__LIB_1__::func_789("MPCT_PERVEHc" /* GXT: Request Delivery? */, 100, 0);
								}
								else
								{
									__LIB_1__::func_789("MPCT_PERVEHi" /* GXT: Request Delivery? Your impounded vehicle will be lost if you have a new vehicle delivered. */, 100, 0);
								}
							}
							else
							{
								__LIB_1__::func_789("MPCT_PERVEHc" /* GXT: Request Delivery? */, 100, 0);
							}
						}
						else
						{
							__LIB_1__::func_789("BB_PVUNA8" /* GXT: Your Personal Vehicle is impounded. */, 100, 0);
						}
					}
					else
					{
						__LIB_1__::func_789("BB_PVUNA1" /* GXT: You have no Personal Vehicle in this space. */, 100, 0);
					}
				}
				else if (BitTest(Global_1585857[Local_122.f_181.f_69 /*142*/].f_103, 2))
				{
					__LIB_1__::func_789("BB_PVUNA12" /* GXT: Your Personal Vehicle is destroyed. You can call Mors Mutual Insurance to make a claim. */, 100, 0);
				}
				else
				{
					__LIB_1__::func_789("BB_PVUNA13" /* GXT: Your Personal Vehicle is destroyed. To protect your vehicles in the future you can purchase Car Insurance. */, 100, 0);
				}
				break;
			case 11:
				if (!bLocal_136)
				{
					if (!iLocal_135 == Local_122.f_181.f_69)
					{
						if (iLocal_133 > 0)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1585857[iLocal_151[Local_122.f_181.f_69] /*142*/].f_106)))
							{
								if ((iLocal_132 - iLocal_133) > 0)
								{
									__LIB_1__::func_789("MPCT_INSD3" /* GXT: ~a~ has paid $~1~ towards the premium. Pay the remaining premium to make a claim on your insured vehicle and have it returned to you. */, 100, 0);
								}
								else
								{
									__LIB_1__::func_789("MPCT_INSD2" /* GXT: ~a~ has paid the full $~1~ of the premium. Make a claim on your insured vehicle and have it returned to you. */, 100, 0);
								}
								__LIB_9__::func_336(&(Global_1585857[iLocal_151[Local_122.f_181.f_69] /*142*/].f_106));
								__LIB_8__::func_283(iLocal_133);
							}
							else if ((iLocal_132 - iLocal_133) > 0)
							{
								__LIB_1__::func_789("MPCT_INSD" /* GXT: Pay a premium to make a claim on your insured vehicle and have it returned to you. */, 100, 0);
							}
						}
						else if (iLocal_132 > 0)
						{
							__LIB_1__::func_789("MPCT_INSD" /* GXT: Pay a premium to make a claim on your insured vehicle and have it returned to you. */, 100, 0);
						}
					}
				}
				break;
			case 16:
				switch (Local_122.f_181.f_69)
				{
					case 0:
						__LIB_1__::func_789("MP_STRIP_IN1" /* GXT: Invite ~a~ to your Apartment for a lapdance. */, 100, 0);
						StringCopy(&Var2, "SCLUB_NM_", 16);
						StringIntConCat(&Var2, iLocal_168, 16);
						__LIB_3__::func_542(&Var2);
						break;
					case 1:
						__LIB_1__::func_789("MPCT_EXIT" /* GXT: Close down the menu. */, 100, 0);
						break;
				}
				break;
			case 17:
				uVar5 = __LIB_12__::func_841(PLAYER::PLAYER_ID());
				iVar6 = __LIB_29__::func_189(12, uVar5, &uLocal_182, &iLocal_183);
				bVar7 = false;
				if (BitTest(bLocal_169, 2) && Local_122.f_181.f_69 == 1)
				{
					__LIB_1__::func_789("MPCT_EXIT" /* GXT: Close down the menu. */, 100, 0);
				}
				else if (iVar6 > 0)
				{
					bVar7 = false;
					while (bVar7 < iVar6)
					{
						if (Local_122.f_181.f_70[Local_122.f_181.f_69] == bVar7)
						{
							if (BitTest(iLocal_183, bVar7))
							{
								__LIB_1__::func_789("MPCT_RPHS" /* GXT: Replay this Heist. */, 100, 0);
							}
							else
							{
								__LIB_1__::func_789("MPCT_RQRE" /* GXT: Unavailable: This Heist has recently been completed. */, 100, 0);
							}
						}
						bVar7++;
					}
				}
				break;
			case 22:
				bVar7 = false;
				if (BitTest(bLocal_169, 2) && Local_122.f_181.f_69 == 1)
				{
					__LIB_1__::func_789("MPCT_EXIT" /* GXT: Close down the menu. */, 100, 0);
				}
				else
				{
					bVar7 = false;
					while (bVar7 < 3)
					{
						if (Local_122.f_181.f_70[Local_122.f_181.f_69] == bVar7)
						{
							__LIB_1__::func_789("MPCT_RPHS" /* GXT: Replay this Heist. */, 100, 0);
						}
						bVar7++;
					}
				}
				break;
		}
	}
	else
	{
		if (BitTest(iLocal_142, 0))
		{
			__LIB_1__::func_789("BB_NOMONEY" /* GXT: You don't have enough cash. */, 100, 0);
		}
		if (BitTest(iLocal_142, 1))
		{
			__LIB_1__::func_789("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
		}
		if (BitTest(iLocal_142, 2))
		{
			__LIB_1__::func_789("GC_MENU6" /* GXT: The Mugger is already working for someone else. */, 100, 0);
		}
		if (BitTest(iLocal_142, 3))
		{
			__LIB_1__::func_789("GC_MENU12" /* GXT: This gang is already working for someone else. */, 100, 0);
		}
		if (BitTest(iLocal_142, 4))
		{
			__LIB_1__::func_789("GC_MENU14" /* GXT: You are already working with another gang. */, 100, 0);
		}
		if (BitTest(iLocal_142, 6))
		{
			__LIB_1__::func_789("GC_MENU19" /* GXT: This gang is already working with you. */, 100, 0);
		}
		if (BitTest(iLocal_142, 5))
		{
			__LIB_1__::func_789("GC_MENU15" /* GXT: The gang is unable to reach your current position. */, 100, 0);
		}
		if (BitTest(iLocal_142, 7))
		{
			__LIB_1__::func_789("GC_MENU20" /* GXT: There are no players to mug. */, 100, 0);
		}
		if (BitTest(iLocal_142, 8))
		{
			__LIB_1__::func_789("GC_MENU21" /* GXT: The Mercenaries are already working for someone else. */, 100, 0);
		}
		if (BitTest(iLocal_142, 9))
		{
			__LIB_1__::func_789("GC_MENU22" /* GXT: There are no players to attack. */, 100, 0);
		}
		if (BitTest(iLocal_142, 10))
		{
			__LIB_1__::func_789("GC_MENU35" /* GXT: There are no players to give a Wanted Level to. */, 100, 0);
		}
		if (BitTest(iLocal_142, 11))
		{
			__LIB_1__::func_789("GC_MENU39" /* GXT: The Mugger is already working with you. */, 100, 0);
		}
		if (BitTest(iLocal_142, 12))
		{
			__LIB_1__::func_789("GC_MENU40" /* GXT: The Mercenaries are already working with you. */, 100, 0);
		}
		if (BitTest(iLocal_142, 31))
		{
			__LIB_1__::func_789("BB_NOBANK" /* GXT: You don't have enough cash in your bank account. */, 100, 0);
		}
		if (Local_122.f_178 == 6)
		{
			if (BitTest(iLocal_142, 14) || !STREAMING::IS_MODEL_A_VEHICLE(__LIB_9__::func_337(uLocal_159[Local_122.f_181.f_69])))
			{
				__LIB_1__::func_789("BB_PVUNA1" /* GXT: You have no Personal Vehicle in this space. */, 100, 0);
			}
			else if (BitTest(iLocal_142, 13))
			{
				__LIB_1__::func_789("BB_PVUNA2" /* GXT: You are too close to your current Personal Vehicle. */, 100, 0);
			}
			else if (BitTest(iLocal_142, 15))
			{
				__LIB_1__::func_789("BB_PVUNA3" /* GXT: Your Personal Vehicle is not empty. */, 100, 0);
			}
			else if (BitTest(iLocal_142, 16))
			{
				__LIB_1__::func_789("BB_PVUNA4" /* GXT: You are too far from a suitable road. */, 100, 0);
			}
			else if (BitTest(iLocal_142, 17))
			{
				__LIB_1__::func_789("BB_PVUNA5" /* GXT: Unlocks when you have a Garage. */, 100, 0);
			}
			else if (BitTest(iLocal_142, 18))
			{
				__LIB_1__::func_789("BB_PVUNA6" /* GXT: Unavailable. */, 100, 0);
			}
			else if (BitTest(iLocal_142, 21))
			{
				__LIB_1__::func_789("BB_PVUNA7" /* GXT: A delivery is in progress. */, 100, 0);
			}
			else if (BitTest(iLocal_142, 22))
			{
				__LIB_1__::func_789("BB_PVUNA8" /* GXT: Your Personal Vehicle is impounded. */, 100, 0);
			}
			else if (BitTest(iLocal_143, 2))
			{
				__LIB_1__::func_789("BB_PVUNA9" /* GXT: You are already using your Personal Vehicle. */, 100, 0);
			}
			else if (BitTest(iLocal_143, 13))
			{
				__LIB_1__::func_789("BB_PVUNA11" /* GXT: You are too close to your Garage. */, 100, 0);
			}
			else if (BitTest(iLocal_143, 16))
			{
				__LIB_1__::func_789("BB_PVUNA12" /* GXT: Your Personal Vehicle is destroyed. You can call Mors Mutual Insurance to make a claim. */, 100, 0);
			}
			else if (BitTest(iLocal_143, 18))
			{
				__LIB_1__::func_789("BB_PVUNA13" /* GXT: Your Personal Vehicle is destroyed. To protect your vehicles in the future you can purchase Car Insurance. */, 100, 0);
			}
			else if (BitTest(iLocal_143, 23))
			{
				__LIB_1__::func_789("PIM_HRPV14" /* GXT: You already have an active Special/Personal Vehicle. */, 100, 0);
			}
			else if (BitTest(iLocal_143, 24))
			{
				__LIB_1__::func_789("BB_PVUNA98" /* GXT: Your Personal Vehicle is already in the LS Car Meet. Return it to Storage via the Vehicles section of the Interaction Menu if you wish to request another vehicle. */, 100, 0);
			}
			else if (BitTest(iLocal_143, 25))
			{
				__LIB_1__::func_789("PIM_HRPV99" /* GXT: This vehicle is not allowed inside the LS Car Meet. */, 100, 0);
			}
			else if (__LIB_9__::func_337(uLocal_159[Local_122.f_181.f_69]) == joaat("oppressor2") && __LIB_12__::func_673())
			{
			}
		}
		else if (Local_122.f_178 == 9)
		{
			if (BitTest(iLocal_143, 17))
			{
				__LIB_1__::func_789("BB_PVEMPTY" /* GXT: This Garage is empty. */, 100, 0);
			}
		}
		if (BitTest(iLocal_142, 19))
		{
			__LIB_1__::func_789("BB_NONE0" /* GXT: There are no players available. */, 100, 0);
		}
		if (BitTest(iLocal_142, 20))
		{
			__LIB_1__::func_789("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 100, 0);
			__LIB_9__::func_336(&Local_144);
		}
		if (BitTest(iLocal_142, 20))
		{
			__LIB_1__::func_789("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 100, 0);
			__LIB_9__::func_336(&Local_144);
		}
		if (BitTest(iLocal_142, 23))
		{
			__LIB_1__::func_789("BB_ADRUNN" /* GXT: The cargo plane is already out making a delivery. */, 100, 0);
		}
		if (BitTest(iLocal_142, 30))
		{
			__LIB_1__::func_789("BB_BHRUNN" /* GXT: There are no free helicopters to back you up. */, 100, 0);
		}
		if (BitTest(iLocal_142, 24))
		{
			__LIB_1__::func_789("BB_HPRUNN" /* GXT: There are no free helicopters to make a pick up. */, 100, 0);
		}
		if (BitTest(iLocal_142, 25))
		{
			__LIB_1__::func_789("BB_HPWANT" /* GXT: The helicopter won't pick up a Wanted crook. */, 100, 0);
		}
		if (BitTest(iLocal_142, 26))
		{
			__LIB_1__::func_789("BB_HPUNSF" /* GXT: Current location is unsafe for the helicopter to land. */, 100, 0);
		}
		if (BitTest(iLocal_142, 28))
		{
			__LIB_1__::func_789("BB_HPLOCK" /* GXT: Helicopter pickup unlocks at Rank ~1~. */, 100, 0);
			__LIB_8__::func_283(__LIB_2__::func_915(77));
		}
		if (BitTest(iLocal_142, 27))
		{
			__LIB_1__::func_789("BB_BRURUN" /* GXT: There are no more stashes in the area. */, 100, 0);
		}
		if (BitTest(iLocal_143, 1))
		{
			__LIB_1__::func_789("BB_BHAMMO" /* GXT: Unavailable - you are using Ammo Drop. */, 100, 0);
		}
		if (BitTest(iLocal_143, 0))
		{
			__LIB_1__::func_789("BB_BHTAXI" /* GXT: Unavailable - you are using Helicopter Pickup. */, 100, 0);
		}
		if (BitTest(iLocal_143, 3))
		{
			__LIB_1__::func_789("BB_BHONBHELI" /* GXT: You are already using a Backup Helicopter. */, 100, 0);
		}
		if (BitTest(iLocal_143, 5))
		{
			__LIB_1__::func_789("BB_BPBUSY" /* GXT: The boat is currently busy. */, 100, 0);
		}
		if (BitTest(iLocal_143, 6))
		{
			__LIB_1__::func_789("BB_BPMOVI" /* GXT: The boat can't get to you while you are moving. */, 100, 0);
		}
		if (BitTest(iLocal_143, 7))
		{
			__LIB_1__::func_789("BB_BPWANT" /* GXT: The boat won't pick up a Wanted crook. */, 100, 0);
		}
		if (BitTest(iLocal_143, 8))
		{
			__LIB_1__::func_789("BB_BPARDR" /* GXT: You are already at a boat drop location. */, 100, 0);
		}
		if (BitTest(iLocal_143, 9))
		{
			__LIB_1__::func_789("BB_BPLAKE" /* GXT: The boat can't access this body of water. */, 100, 0);
		}
		if (BitTest(iLocal_143, 10))
		{
			__LIB_1__::func_789("BB_BPLAND" /* GXT: The boat is for picking up players stranded in the ocean. */, 100, 0);
		}
		if (BitTest(iLocal_143, 11))
		{
			__LIB_1__::func_789("BB_DES_PASS" /* GXT: You can't add a bounty while Passive Mode is active. */, 100, 0);
		}
		if (BitTest(iLocal_143, 12))
		{
			__LIB_1__::func_789("MPCT_UNVLPASS" /* GXT: Unavailable in Passive Mode. */, 100, 0);
		}
		if (BitTest(iLocal_143, 21))
		{
			__LIB_1__::func_789("MPCT_PA_YAH0U" /* GXT: Unavailable. This helicopter is already in use by another player. */, 100, 0);
		}
		if (BitTest(iLocal_143, 22))
		{
			__LIB_1__::func_789("MPCT_PA_IMPF" /* GXT: None of your vehicles are currently impounded. */, 100, 0);
		}
		if (__LIB_0__::func_937(&uLocal_145, 2000, 0))
		{
			__LIB_0__::clearF_1Prop(&uLocal_145);
			if (BitTest(iLocal_143, 19))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_181, "SET_TEXT");
				__LIB_0__::func_610("");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iLocal_142 = 0;
			iLocal_143 = 0;
		}
		else if (BitTest(iLocal_143, 19))
		{
			Var14 = { __LIB_5__::func_405(func_149(2, Local_122.f_358), 0, 0) };
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_181, "SET_TEXT");
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CONT_REQ_CD2" /* GXT: Mugging target cooldown ~a~. */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var14);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_149(int iParam0, int iParam1)//Position - 0xB5A3
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	if (__LIB_0__::func_864(&(Global_2779939[iParam1 /*233*/][iParam0 /*2*/])))
	{
		if (!__LIB_0__::func_937(&(Global_2779939[iParam1 /*233*/][iParam0 /*2*/]), func_151(iParam0, iParam1), 0))
		{
			iVar1 = __LIB_1__::func_724(&(Global_2779939[iParam1 /*233*/][iParam0 /*2*/]), 0, 0);
			iVar1 = (func_151(iParam0, iParam1) - iVar1);
			return iVar1;
		}
	}
	return iVar0;
}

int func_151(int iParam0, int iParam1)//Position - 0xB64D
{
	return Global_2779939[iParam1 /*233*/].f_155[iParam0];
}

int func_162(var* uParam0, int iParam1)//Position - 0xBB08
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (__LIB_0__::func_800(Global_2359296[__LIB_0__::func_155() /*5567*/].f_5149.f_15[iVar0 /*13*/]))
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, &(Global_2359296[__LIB_0__::func_155() /*5567*/].f_5149.f_15[iVar0 /*13*/])))
			{
				*iParam1 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2359296[__LIB_0__::func_155() /*5567*/].f_5149.f_224[iVar0]);
				*iParam1 *= 1000;
				*iParam1 = (2880000 - *iParam1);
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_165(int iParam0)//Position - 0xBBB0
{
	int iVar0;
	int iVar1;
	*iParam0 = 2880000;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (__LIB_0__::func_800(Global_2359296[__LIB_0__::func_155() /*5567*/].f_5149.f_15[iVar0 /*13*/]))
		{
			iVar1 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2359296[__LIB_0__::func_155() /*5567*/].f_5149.f_224[iVar0]);
			iVar1 *= 1000;
			iVar1 = (2880000 - iVar1);
			if (iVar1 < *iParam0)
			{
				*iParam0 = iVar1;
			}
		}
		else
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_168()//Position - 0xBC79
{
	int iVar0;
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_heli_taxi")) > 0)
	{
		return 3;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		return 2;
	}
	if (__LIB_1__::func_769() == 144)
	{
		return 1;
	}
	iVar0 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2815059.f_6008));
	if (iVar0 < Global_262145.f_16785 /* Tunable: IPA_PILOT_KILL_COOLDOWN */)
	{
		return 1;
	}
	return 0;
}

bool func_170()//Position - 0xBCE0
{
	return Local_122.f_0 == 75;
}

int func_177(float fParam0)//Position - 0xBEB2
{
	if (BitTest(Global_2703735.f_61.f_52, 3))
	{
		return 0;
	}
	if (BitTest(Global_2703735.f_61.f_56, 3))
	{
		return 0;
	}
	if (BitTest(Global_2703735.f_61.f_60, 3))
	{
		return 0;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == __LIB_0__::func_942())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(__LIB_2__::func_733(0)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_638(), false))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(__LIB_2__::func_638(), true), __LIB_0__::func_85(PLAYER::PLAYER_ID())) < fParam0)
				{
					return 1;
				}
			}
		}
		return 0;
	}
	return Global_2703735.f_61.f_92;
}

int func_186(int iParam0)//Position - 0xC0B7
{
	int iVar0;
	if (__LIB_0__::func_156(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iVar0, "Player_Vehicle"))
					{
						if (DECORATOR::DECOR_GET_INT(iVar0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_187(var uParam0, var uParam1)//Position - 0xC120
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar1 = 0;
	while (iVar1 < 29)
	{
		if ((__LIB_2__::func_771(iVar1, -1) > 0 && !__LIB_8__::func_949(iVar1)) && !iVar1 == 12)
		{
			*uParam0 = 1;
			if (iVar1 == 13)
			{
				iVar4 = 11;
			}
			else if (iVar1 == 18)
			{
				iVar4 = 10;
			}
			else
			{
				iVar4 = __LIB_3__::func_2(iVar1, -1, 1);
			}
			if (!*uParam1)
			{
				iVar0 = 0;
				while (iVar0 < iVar4)
				{
					iVar2 = (__LIB_4__::func_982(iVar1) + iVar0);
					__LIB_1__::func_775(iVar2, &iVar3, 0);
					if (iVar3 >= 0)
					{
						if ((__LIB_9__::func_337(iVar3) != 0 && STREAMING::IS_MODEL_A_VEHICLE(__LIB_9__::func_337(iVar3))) && __LIB_9__::func_438(__LIB_9__::func_337(iVar3)))
						{
							*uParam1 = 1;
							iVar0 = 9999;
							return;
						}
					}
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar5 = iVar1;
		iVar0 = 0;
		while (iVar0 < __LIB_3__::func_546(iVar5))
		{
			iVar2 = (__LIB_1__::func_773(iVar5) + iVar0);
			__LIB_1__::func_775(iVar2, &iVar3, 1);
			if (iVar3 >= 0 && !__LIB_1__::func_770(iVar2))
			{
				if ((((STREAMING::IS_MODEL_A_VEHICLE(__LIB_9__::func_337(iVar3)) && !__LIB_2__::func_721(__LIB_9__::func_337(iVar3), 1)) && !__LIB_1__::func_587(__LIB_9__::func_337(iVar3))) && __LIB_9__::func_438(__LIB_9__::func_337(iVar3))) && !__LIB_10__::func_459(iVar3))
				{
					*uParam1 = 1;
					return;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
}

bool func_231(int iParam0)//Position - 0xD622
{
	return __LIB_1__::func_779(iParam0, 512);
}

int func_239(int iParam0, int iParam1)//Position - 0xD75A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_156(iParam0, 1, 1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_USING(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
				{
					if (DECORATOR::DECOR_EXIST_ON(iVar1, "PYV_Owner") && DECORATOR::DECOR_EXIST_ON(iVar1, "PYV_Vehicle"))
					{
						iVar2 = DECORATOR::DECOR_GET_INT(iVar1, "PYV_Owner");
						iVar3 = DECORATOR::DECOR_GET_INT(iVar1, "PYV_Vehicle");
						if (iVar2 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam0) && iParam1 == iVar3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_240(int iParam0)//Position - 0xD802
{
	if (((__LIB_1__::func_779(iParam0, 256) && !__LIB_1__::func_779(iParam0, 512)) && !__LIB_1__::func_779(iParam0, 1024)) && !__LIB_1__::func_779(iParam0, 2048))
	{
		return 1;
	}
	return 0;
}

int func_244()//Position - 0xD88A
{
	if (!__LIB_2__::func_104(77, 0, 0))
	{
		return 3;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		return 2;
	}
	return 0;
}

int func_255()//Position - 0xDF50
{
	if (!__LIB_31__::func_511())
	{
		return 0;
	}
	if (__LIB_3__::func_484())
	{
		return 0;
	}
	if (!__LIB_33__::func_614())
	{
		return 0;
	}
	return 1;
}

int func_273(int iParam0)//Position - 0xE74F
{
	if ((__LIB_12__::func_477(iParam0) >= 0 && __LIB_12__::func_477(iParam0) < __LIB_12__::func_480(iParam0)) && !func_274(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_274(int iParam0)//Position - 0xE785
{
	if (Global_262145.f_14702 /* Tunable: DISABLE_SALE_UI */)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_14708 /* Tunable: DISABLE_SALE_UI_BOUNTY */;
			break;
		case 20:
			return Global_262145.f_14709 /* Tunable: DISABLE_SALE_UI_WANTED */;
			break;
		case 6:
			return Global_262145.f_14710 /* Tunable: DISABLE_SALE_UI_RADAR */;
			break;
		case 14:
			return Global_262145.f_14711 /* Tunable: DISABLE_SALE_UI_REVEAL */;
			break;
		case 23:
			return Global_262145.f_14712 /* Tunable: DISABLE_SALE_UI_BOAT */;
			break;
		case 24:
			return Global_262145.f_14713 /* Tunable: DISABLE_SALE_UI_HELI */;
			break;
		case 25:
			return Global_262145.f_14714 /* Tunable: DISABLE_SALE_UI_CAR */;
			break;
		case 26:
			return Global_262145.f_14715 /* Tunable: DISABLE_SALE_UI_PLANE */;
			break;
		case 8:
			return Global_262145.f_14717 /* Tunable: DISABLE_SALE_UI_AMMO */;
			break;
		case 10:
			return Global_262145.f_14718 /* Tunable: DISABLE_SALE_UI_BACKUP_HELI */;
			break;
		case 9:
			return Global_262145.f_14719 /* Tunable: DISABLE_SALE_UI_BOAT_PICKUP */;
			break;
		case 13:
			return Global_262145.f_14720 /* Tunable: DISABLE_SALE_UI_HELI_PICKUP */;
			break;
		case 12:
			return Global_262145.f_14721 /* Tunable: DISABLE_SALE_UI_MERCENARIES */;
			break;
		case 11:
			return Global_262145.f_14722 /* Tunable: DISABLE_SALE_UI_AIRSTRIKE */;
			break;
		case 22:
			return Global_262145.f_14723 /* Tunable: DISABLE_SALE_UI_VEHICLE_DELIVERY */;
			break;
		case 0:
			return Global_262145.f_14703 /* Tunable: DISABLE_SALE_UI_BULLSHARK */;
			break;
		case 2:
			return Global_262145.f_14707 /* Tunable: DISABLE_SALE_UI_MUGGER */;
			break;
		case 35:
			return Global_262145.f_14716 /* Tunable: DISABLE_SALE_UI_BLIND_EYE */;
			break;
		case 40:
			return Global_262145.f_14704 /* Tunable: DISABLE_SALE_UI_CAPTAIN_HELI */;
			break;
		case 41:
			return Global_262145.f_14705 /* Tunable: DISABLE_SALE_UI_CAPTAIN_BOAT */;
			break;
		case 42:
			return Global_262145.f_14706 /* Tunable: DISABLE_SALE_UI_CAPTAIN_PV */;
			break;
		case 57:
			return Global_262145.f_14713 /* Tunable: DISABLE_SALE_UI_HELI */;
			break;
	}
	return 0;
}

int func_279(int iParam0)//Position - 0xEC35
{
	int iVar0;
	int iVar1;
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 122)
	{
		return 0;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar0 >= 0 && iVar0 <= 3)
	{
		if (((BitTest(Global_4718592.f_11, 30) && Global_4718592.f_110280[iVar0] != 0) || (BitTest(Global_4718592.f_162934, 10) && Global_1659902 != 0)) && __LIB_12__::func_615(iVar0))
		{
			return 0;
		}
		if (__LIB_12__::func_614())
		{
			return 0;
		}
	}
	switch (iParam0)
	{
		case 10:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_162934, 20))
			{
				return 0;
			}
			if (__LIB_1__::func_632())
			{
				return 1;
			}
			else if (__LIB_7__::func_714(PLAYER::PLAYER_ID()) || __LIB_3__::func_581())
			{
				return 0;
			}
			if (__LIB_1__::func_782(PLAYER::PLAYER_ID()))
			{
				if (Global_4456449.f_34 == 1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (__LIB_1__::func_872(PLAYER::PLAYER_ID()))
			{
				if (__LIB_1__::func_195(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			break;
		case 11:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_162934, 21))
			{
				return 0;
			}
			if (__LIB_1__::func_632())
			{
				return 1;
			}
			else if (__LIB_7__::func_714(PLAYER::PLAYER_ID()) || __LIB_3__::func_581())
			{
				return 0;
			}
			if (__LIB_1__::func_782(PLAYER::PLAYER_ID()))
			{
				if (Global_4456449.f_34 == 1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (__LIB_1__::func_872(PLAYER::PLAYER_ID()))
			{
				if (__LIB_1__::func_195(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else if (__LIB_1__::func_728(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		case 8:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_162934, 16))
			{
				return 0;
			}
			if (__LIB_3__::func_581())
			{
				return 0;
			}
			if (__LIB_7__::func_714(PLAYER::PLAYER_ID()) || __LIB_1__::func_632())
			{
				if (__LIB_1__::func_150() || __LIB_1__::func_149())
				{
					iVar1 = __LIB_12__::func_842(-1);
					if ((((iVar1 == joaat("WEAPON_UNARMED") || iVar1 == joaat("WEAPON_RPG")) || iVar1 == joaat("WEAPON_GRENADELAUNCHER")) || __LIB_3__::func_104(iVar1)) || __LIB_3__::func_105(iVar1))
					{
						return 0;
					}
					return 1;
				}
				else
				{
					return 1;
				}
			}
			if (__LIB_1__::func_782(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__::func_872(PLAYER::PLAYER_ID()))
			{
				if (__LIB_1__::func_195(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			break;
		case 0:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_162934, 29))
			{
				return 0;
			}
			if ((__LIB_7__::func_714(PLAYER::PLAYER_ID()) || __LIB_1__::func_632()) || __LIB_3__::func_581())
			{
				return 0;
			}
			if (__LIB_1__::func_782(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (Global_1888323 > 0)
			{
				return 0;
			}
			if (__LIB_1__::func_872(PLAYER::PLAYER_ID()))
			{
				if (__LIB_1__::func_195(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			break;
		case 9:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_162934, 30))
			{
				return 0;
			}
			if (((((Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3 || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 32) || __LIB_7__::func_714(PLAYER::PLAYER_ID())) || __LIB_1__::func_632()) || __LIB_3__::func_581()) || __LIB_1__::func_782(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__::func_872(PLAYER::PLAYER_ID()))
			{
				if (__LIB_1__::func_195(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_0__::func_970(PLAYER::PLAYER_ID()) || __LIB_0__::func_971(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		case 13:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_162934, 19))
			{
				return 0;
			}
			if (((((__LIB_7__::func_714(PLAYER::PLAYER_ID()) || __LIB_1__::func_632()) || __LIB_3__::func_581()) || __LIB_1__::func_782(PLAYER::PLAYER_ID())) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 32)
			{
				return 0;
			}
			if (__LIB_1__::func_782(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__::func_872(PLAYER::PLAYER_ID()))
			{
				if (__LIB_1__::func_195(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_0__::func_970(PLAYER::PLAYER_ID()) || __LIB_0__::func_971(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		case 7:
			if ((((((__LIB_1__::func_632() || __LIB_3__::func_581()) || __LIB_7__::func_714(PLAYER::PLAYER_ID())) || __LIB_1__::func_782(PLAYER::PLAYER_ID())) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3) || __LIB_12__::func_611(Global_4718592.f_168757)) || __LIB_11__::func_705())
			{
				return 0;
			}
			if (__LIB_12__::func_610())
			{
				return 0;
			}
			if (__LIB_1__::func_872(PLAYER::PLAYER_ID()))
			{
				if (__LIB_1__::func_195(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		case 45:
			if ((((__LIB_1__::func_632() || __LIB_3__::func_581()) || __LIB_7__::func_714(PLAYER::PLAYER_ID())) || __LIB_1__::func_782(PLAYER::PLAYER_ID())) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3)
			{
				return 0;
			}
			if (__LIB_12__::func_610())
			{
				return 0;
			}
			if (__LIB_1__::func_872(PLAYER::PLAYER_ID()))
			{
				if (__LIB_1__::func_195(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		case 53:
		case 54:
		case 55:
		case 56:
			if ((((__LIB_1__::func_632() || __LIB_3__::func_581()) || __LIB_7__::func_714(PLAYER::PLAYER_ID())) || __LIB_1__::func_782(PLAYER::PLAYER_ID())) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3)
			{
				return 0;
			}
			if (__LIB_12__::func_610())
			{
				return 0;
			}
			if (__LIB_1__::func_872(PLAYER::PLAYER_ID()))
			{
				if (__LIB_1__::func_195(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		case 46:
			if ((((__LIB_1__::func_632() || __LIB_3__::func_581()) || __LIB_7__::func_714(PLAYER::PLAYER_ID())) || __LIB_1__::func_782(PLAYER::PLAYER_ID())) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3)
			{
				return 0;
			}
			if (__LIB_12__::func_610())
			{
				return 0;
			}
			if (__LIB_1__::func_872(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			break;
		case 49:
			if ((((__LIB_1__::func_632() || __LIB_3__::func_581()) || __LIB_7__::func_714(PLAYER::PLAYER_ID())) || __LIB_1__::func_782(PLAYER::PLAYER_ID())) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3)
			{
				return 0;
			}
			if (__LIB_12__::func_610())
			{
				return 0;
			}
			if (__LIB_1__::func_872(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			break;
		case 52:
		case 65:
		case 66:
		case 67:
			if ((((__LIB_1__::func_632() || __LIB_3__::func_581()) || __LIB_7__::func_714(PLAYER::PLAYER_ID())) || __LIB_1__::func_782(PLAYER::PLAYER_ID())) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3)
			{
				return 0;
			}
			if (__LIB_12__::func_610())
			{
				return 0;
			}
			if (__LIB_1__::func_872(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			break;
		case 22:
			if ((((__LIB_1__::func_782(PLAYER::PLAYER_ID()) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3) || __LIB_7__::func_714(PLAYER::PLAYER_ID())) || __LIB_1__::func_632()) || __LIB_3__::func_581())
			{
				return 0;
			}
			if (__LIB_1__::func_872(PLAYER::PLAYER_ID()))
			{
				if (__LIB_1__::func_195(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_0__::func_970(PLAYER::PLAYER_ID()) || __LIB_0__::func_971(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (BitTest(Global_4718592.f_162934, 31))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		case 23:
		case 24:
		case 25:
		case 26:
		case 57:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_162934, 18))
			{
				return 0;
			}
			if ((((__LIB_1__::func_782(PLAYER::PLAYER_ID()) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3) || __LIB_7__::func_714(PLAYER::PLAYER_ID())) || __LIB_1__::func_632()) || __LIB_3__::func_581())
			{
				return 0;
			}
			if (__LIB_1__::func_872(PLAYER::PLAYER_ID()))
			{
				if (__LIB_1__::func_195(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_0__::func_970(PLAYER::PLAYER_ID()) || __LIB_0__::func_971(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		case 12:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_162934, 15))
			{
				return 0;
			}
			if (__LIB_7__::func_714(PLAYER::PLAYER_ID()))
			{
				if ((__LIB_1__::func_632() || __LIB_3__::func_581()) || __LIB_1__::func_150())
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 0 || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 4)
			{
				return 0;
			}
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3)
			{
				return 0;
			}
			if (__LIB_1__::func_782(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 148)
			{
				return 0;
			}
			if (__LIB_1__::func_872(PLAYER::PLAYER_ID()))
			{
				if (__LIB_1__::func_195(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			break;
		case 2:
			if (((__LIB_1__::func_782(PLAYER::PLAYER_ID()) || __LIB_7__::func_714(PLAYER::PLAYER_ID())) || __LIB_1__::func_632()) || __LIB_3__::func_581())
			{
				return 0;
			}
			if (__LIB_1__::func_872(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			break;
		case 1:
			if ((((((Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 0 || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 4) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3) || __LIB_7__::func_714(PLAYER::PLAYER_ID())) || __LIB_1__::func_632()) || __LIB_3__::func_581()) || __LIB_1__::func_782(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__::func_872(PLAYER::PLAYER_ID()))
			{
				if (__LIB_1__::func_195(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			break;
		case 14:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_162934, 17))
			{
				return 0;
			}
			if (__LIB_1__::func_632() || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 32)
			{
				return 0;
			}
			if (__LIB_7__::func_714(PLAYER::PLAYER_ID()))
			{
				if (!__LIB_1__::func_871())
				{
					return 0;
				}
				if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 5 && !__LIB_3__::func_581()) && Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 148)
				{
					return 1;
				}
			}
			if (__LIB_1__::func_872(PLAYER::PLAYER_ID()))
			{
				if (__LIB_1__::func_195(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 0 && Global_4718592.f_592 > 1)
			{
				return 1;
			}
			return 0;
			break;
		case 6:
			if (__LIB_1__::func_632())
			{
				return 1;
			}
			if (__LIB_7__::func_714(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 0)
			{
				if (Global_4718592.f_592 <= 1)
				{
					return 0;
				}
			}
			if (__LIB_1__::func_782(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3)
			{
				return 0;
			}
			if (__LIB_1__::func_872(PLAYER::PLAYER_ID()))
			{
				if (__LIB_1__::func_195(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else
				{
					return 0;
				}
			}
			break;
		case 20:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_162934, 27))
			{
				return 0;
			}
			if (__LIB_1__::func_632())
			{
				return 1;
			}
			if (__LIB_7__::func_714(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__::func_782(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3)
			{
				return 0;
			}
			if (__LIB_1__::func_872(PLAYER::PLAYER_ID()))
			{
				if (__LIB_1__::func_195(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				return 0;
			}
			break;
		case 15:
		case 17:
		case 18:
		case 19:
		case 21:
		case 36:
		case 37:
		case 38:
		case 64:
			if (__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
			{
				return 0;
			}
			if (__LIB_0__::func_315(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			break;
		case 35:
			if (__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_309(int iParam0)//Position - 0x104CD
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
	switch (iParam0)
	{
		case 10:
			if (__LIB_0__::func_945())
			{
				return 0;
			}
			if (__LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 1))
			{
				return 0;
			}
			if (__LIB_11__::func_212(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_3__::func_448(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__::func_786(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if ((__LIB_0__::func_979(PLAYER::PLAYER_ID(), 7) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_244 != -1) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_245 != -1)
			{
				return 0;
			}
			if (__LIB_1__::func_386(PLAYER::PLAYER_ID(), 146))
			{
				return 0;
			}
			if ((__LIB_1__::func_386(PLAYER::PLAYER_ID(), 136) || __LIB_1__::func_592(PLAYER::PLAYER_ID()) == 136) || (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 24) && __LIB_1__::func_785(PLAYER::PLAYER_ID())))
			{
				return 0;
			}
			break;
		case 11:
			if (__LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 1))
			{
				return 0;
			}
			if (__LIB_11__::func_212(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_3__::func_448(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__::func_786(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if ((__LIB_0__::func_979(PLAYER::PLAYER_ID(), 7) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_244 != -1) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_245 != -1)
			{
				return 0;
			}
			if (Global_32227)
			{
				return 0;
			}
			if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 24))
			{
				if (__LIB_1__::func_785(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
			}
			if (__LIB_1__::func_592(PLAYER::PLAYER_ID()) == 136)
			{
				return 0;
			}
			if (__LIB_12__::func_506(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__::func_386(PLAYER::PLAYER_ID(), 138))
			{
				if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
						if ((iVar3 == joaat("tractor") || iVar3 == joaat("tractor2")) || iVar3 == joaat("tractor3"))
						{
							return 0;
						}
					}
				}
			}
			if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 21))
			{
				return 0;
			}
			if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 25))
			{
				return 0;
			}
			if (func_326(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_12__::func_628(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__::func_525(PLAYER::PLAYER_ID()) == 3)
			{
				return 0;
			}
			break;
		case 8:
			if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 21))
			{
				return 0;
			}
			if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 25))
			{
				return 0;
			}
			if (__LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 1))
			{
				return 0;
			}
			if (__LIB_11__::func_212(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_3__::func_448(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__::func_786(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if ((__LIB_0__::func_979(PLAYER::PLAYER_ID(), 7) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_244 != -1) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_245 != -1)
			{
				return 0;
			}
			break;
		case 0:
			if (__LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 1))
			{
				return 0;
			}
			if (__LIB_11__::func_212(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_3__::func_448(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__::func_786(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if ((__LIB_0__::func_979(PLAYER::PLAYER_ID(), 7) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_244 != -1) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_245 != -1)
			{
				return 0;
			}
			if (__LIB_1__::func_386(PLAYER::PLAYER_ID(), 146))
			{
				return 0;
			}
			break;
		case 9:
			if (__LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 1))
			{
				return 0;
			}
			if (__LIB_11__::func_212(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_3__::func_448(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__::func_786(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if ((__LIB_0__::func_979(PLAYER::PLAYER_ID(), 7) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_244 != -1) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_245 != -1)
			{
				return 0;
			}
			break;
		case 13:
			if (__LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 1))
			{
				return 0;
			}
			if (__LIB_11__::func_212(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_3__::func_448(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__::func_786(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if ((__LIB_0__::func_979(PLAYER::PLAYER_ID(), 7) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_244 != -1) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_245 != -1)
			{
				return 0;
			}
			if (__LIB_1__::func_784(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			break;
		case 7:
			break;
		case 22:
			break;
		case 46:
		case 49:
		case 52:
		case 65:
		case 66:
		case 67:
			break;
		case 23:
		case 24:
		case 25:
		case 26:
		case 57:
			break;
		case 12:
			if (__LIB_1__::func_386(PLAYER::PLAYER_ID(), 136))
			{
				return 0;
			}
			if (__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 153)
			{
				return 0;
			}
			break;
		case 2:
			if (__LIB_1__::func_386(PLAYER::PLAYER_ID(), 129))
			{
				return 0;
			}
			break;
		case 1:
			break;
		case 14:
			if (__LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 0))
			{
				return 0;
			}
			if (__LIB_11__::func_212(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_3__::func_448(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__::func_786(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__::func_307(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__::func_309(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__::func_362(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__::func_362(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__::func_891(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if (__LIB_1__::func_783(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if ((__LIB_0__::func_979(PLAYER::PLAYER_ID(), 7) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_244 != -1) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_245 != -1)
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (__LIB_0__::func_156(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
				{
					if (PLAYER::INT_TO_PLAYERINDEX(iVar0) != PLAYER::PLAYER_ID())
					{
						if (!__LIB_0__::func_361(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0))
						{
							return 1;
						}
					}
				}
				iVar0++;
			}
			return 0;
			break;
		case 6:
			if (__LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 0))
			{
				return 0;
			}
			if (__LIB_11__::func_212(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_3__::func_448(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__::func_786(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if (Global_2689235[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*453*/].f_210 == 1)
			{
				return 0;
			}
			if (__LIB_1__::func_592(PLAYER::PLAYER_ID()) == 136)
			{
				return 0;
			}
			if (__LIB_1__::func_592(PLAYER::PLAYER_ID()) == 141)
			{
				return 0;
			}
			if (__LIB_1__::func_592(PLAYER::PLAYER_ID()) == 139)
			{
				return 0;
			}
			if (__LIB_1__::func_592(PLAYER::PLAYER_ID()) == 140 && __LIB_1__::func_386(PLAYER::PLAYER_ID(), 140))
			{
				return 0;
			}
			if (__LIB_1__::func_592(PLAYER::PLAYER_ID()) == 131 && __LIB_1__::func_386(PLAYER::PLAYER_ID(), 131))
			{
				return 0;
			}
			if (__LIB_1__::func_386(PLAYER::PLAYER_ID(), 138))
			{
				return 0;
			}
			if (__LIB_1__::func_386(PLAYER::PLAYER_ID(), 146))
			{
				return 0;
			}
			if (__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 148 || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 197)
			{
				return 0;
			}
			if (__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 183)
			{
				if (__LIB_0__::func_428(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (__LIB_0__::func_156(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
				{
					if (PLAYER::INT_TO_PLAYERINDEX(iVar0) != PLAYER::PLAYER_ID())
					{
						if (!__LIB_0__::func_361(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0))
						{
							return 1;
						}
					}
				}
				iVar0++;
			}
			return 0;
			break;
		case 20:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				return 0;
			}
			if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 0) || __LIB_0__::func_979(PLAYER::PLAYER_ID(), 16))
			{
				return 0;
			}
			if (__LIB_1__::func_386(PLAYER::PLAYER_ID(), 146))
			{
				return 0;
			}
			if (__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 192)
			{
				iVar1 = Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_182;
			}
			if (((((((__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 159 || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 157) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 153) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 154) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 155) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 170) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 197) || (__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 192 && iVar1 == 9))
			{
				return 0;
			}
			if (__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 225 || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 226)
			{
				if (__LIB_12__::func_627(__LIB_0__::func_525(PLAYER::PLAYER_ID())))
				{
					return 0;
				}
			}
			if (__LIB_0__::func_307(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_2__::func_929(PLAYER::PLAYER_ID()) == 17)
			{
				return 0;
			}
			if (__LIB_0__::func_848())
			{
				return 0;
			}
			if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__::func_891(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if (__LIB_1__::func_731(19))
			{
				return 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					iVar5 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
					iVar6 = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar5, false, true);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar5, -1, false))
					{
						iVar6++;
					}
					if (iVar6 == 1)
					{
						bVar4 = true;
					}
					if (!bVar4)
					{
						iVar7 = -1;
						iVar8 = iVar7;
						iVar9 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar5) + 1;
						while (iVar6 > 0)
						{
							iVar7 = iVar8;
							if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar5, iVar7, false))
							{
								iVar10 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar5, iVar7, false);
								iVar11 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar10);
								if (iVar11 != __LIB_0__::getMinusOneOrNull() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar11))
								{
									if (__LIB_0__::func_492(iVar11) == 157 || __LIB_0__::func_492(iVar11) == 153)
									{
										return 0;
									}
								}
								iVar6 = (iVar6 - 1);
							}
							iVar8++;
							if (iVar8 >= iVar9 && iVar6 > 0)
							{
								iVar6 = 0;
							}
						}
					}
				}
			}
			break;
		case 15:
		case 17:
		case 18:
		case 19:
		case 21:
		case 36:
		case 37:
		case 38:
		case 64:
			break;
		case 35:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				return 0;
			}
			if (__LIB_1__::func_592(PLAYER::PLAYER_ID()) == 146)
			{
				return 0;
			}
			if ((((__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 159 || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 153) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 157) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 154) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 155)
			{
				return 0;
			}
			if (__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 183)
			{
				if (__LIB_0__::func_428(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
			}
			if (__LIB_1__::func_731(21))
			{
				return 0;
			}
			break;
		case 39:
			break;
		case 43:
			if ((((__LIB_1__::func_632() || __LIB_3__::func_581()) || __LIB_7__::func_714(PLAYER::PLAYER_ID())) || __LIB_1__::func_782(PLAYER::PLAYER_ID())) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3)
			{
				return 0;
			}
			if (__LIB_12__::func_610())
			{
				return 0;
			}
			if (__LIB_1__::func_599(13))
			{
				return 0;
			}
			if (__LIB_1__::func_872(PLAYER::PLAYER_ID()))
			{
				if (__LIB_1__::func_195(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		case 44:
			if (__LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 0))
			{
				return 0;
			}
			if (__LIB_11__::func_212(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_244 != -1)
			{
				return 0;
			}
			if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_245 != -1)
			{
				return 0;
			}
			if (__LIB_1__::func_784(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_326(int iParam0)//Position - 0x11569
{
	int iVar0;
	if (__LIB_0__::func_156(iParam0, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!Global_2689235[iParam0 /*453*/].f_269.f_17[iVar0] == 0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_345()//Position - 0x11BC5
{
	int iVar0;
	int iVar1;
	iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar1 = func_346();
	return (iVar1 - iVar0) * 1000;
}

int func_346()//Position - 0x11BE1
{
	return __LIB_1__::func_360(10391, -1, 0);
}

bool func_347()//Position - 0x11BF2
{
	return NETWORK::GET_CLOUD_TIME_AS_INT() < func_346();
}

int func_359()//Position - 0x11E8C
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar0 = SYSTEM::TO_FLOAT(__LIB_13__::func_58(PLAYER::PLAYER_ID()));
	fVar1 = SYSTEM::TO_FLOAT(__LIB_31__::func_58());
	fVar2 = (fVar0 / fVar1);
	iVar3 = SYSTEM::ROUND((fVar2 * 100f));
	if (iVar3 > 100)
	{
		iVar3 = 100;
	}
	return iVar3;
}

void func_371()//Position - 0x1210C
{
	bool bVar0;
	int iVar1;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("YOHAN_TITLE" /* GXT: YOHAN */);
	bVar0 = true;
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	if (((((__LIB_1__::func_520(0) || __LIB_0__::func_315(PLAYER::PLAYER_ID())) || __LIB_3__::func_126(PLAYER::PLAYER_ID())) || func_347()) || !__LIB_11__::func_439()) || func_359() >= 100)
	{
		bVar0 = false;
	}
	__LIB_3__::func_572(iVar1, "YOHN_OP1_T" /* GXT: Request Nightclub Goods */, 0, bVar0, 0, 0, 0);
	__LIB_3__::func_564(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	Local_122.f_181.f_2 = iVar1 + 1;
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	MISC::SET_BIT(&(Local_122.f_359), 4);
	func_123();
}

void func_379()//Position - 0x12553
{
	if (__LIB_3__::func_67(0, -1, 1))
	{
		if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			func_396();
		}
		else
		{
			func_380();
		}
	}
}

void func_380()//Position - 0x12586
{
	if (__LIB_4__::func_922(Local_122.f_181.f_69))
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				__LIB_1__::func_789("AG14_OP1_D" /* GXT: Request Bunker Research.~n~Current research progress: ~1~% */, 0, 0);
				__LIB_8__::func_283(__LIB_31__::func_652(PLAYER::PLAYER_ID(), __LIB_7__::func_555(PLAYER::PLAYER_ID(), 5)));
				break;
			case 1:
				__LIB_1__::func_789("AG14_OP2_D" /* GXT: Request a vehicle to be delivered nearby. */, 100, 0);
				break;
		}
	}
	else
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				if (!__LIB_13__::func_3(PLAYER::PLAYER_ID(), __LIB_7__::func_555(PLAYER::PLAYER_ID(), 5)))
				{
					__LIB_1__::func_789("AG14_OP1_D1" /* GXT: Unavailable. Complete the Bunker setup to start Bunker Research. */, 0, 0);
				}
				else if (func_385())
				{
					Local_144 = { __LIB_5__::func_405(func_383(), 0, 0) };
					__LIB_1__::func_789("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
					__LIB_9__::func_336(&Local_144);
				}
				else
				{
					__LIB_1__::func_789("AG14_NA" /* GXT: This request is not currently available. */, 100, 0);
				}
				break;
			case 1:
				if (Global_1978980.f_2 != 0)
				{
					__LIB_1__::func_789("AG14_OP2_D1" /* GXT: Unavailable. Vehicle already in use. */, 100, 0);
				}
				else if (func_382())
				{
					Local_144 = { __LIB_5__::func_405(func_381(), 0, 0) };
					__LIB_1__::func_789("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
					__LIB_9__::func_336(&Local_144);
				}
				else
				{
					__LIB_1__::func_789("AG14_NA" /* GXT: This request is not currently available. */, 100, 0);
				}
				break;
			default:
				__LIB_1__::func_789("AG14_NA" /* GXT: This request is not currently available. */, 100, 0);
				break;
			}
	}
	func_123();
}

int func_381()//Position - 0x126B8
{
	int iVar0;
	iVar0 = (Global_262145.f_33152 /* Tunable: BUNKER_VEHICLE_COOLDOWN_TIME */ - __LIB_1__::func_724(&(Global_1978980.f_8), 0, 0));
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_382()//Position - 0x126E4
{
	if (__LIB_0__::func_864(&(Global_1978980.f_8)))
	{
		if (!__LIB_0__::func_937(&(Global_1978980.f_8), Global_262145.f_33152 /* Tunable: BUNKER_VEHICLE_COOLDOWN_TIME */, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_383()//Position - 0x12717
{
	int iVar0;
	int iVar1;
	iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar1 = func_384();
	return (iVar1 - iVar0) * 1000;
}

int func_384()//Position - 0x12733
{
	return __LIB_1__::func_360(10390, -1, 0);
}

bool func_385()//Position - 0x12744
{
	return NETWORK::GET_CLOUD_TIME_AS_INT() < func_384();
}

void func_396()//Position - 0x12B11
{
	bool bVar0;
	int iVar1;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("AG14_TITLE" /* GXT: AGENT 14 */);
	bVar0 = true;
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, Global_1978980.f_2 == 0, 0, 0, 0);
	if (((((__LIB_1__::func_520(0) || __LIB_0__::func_315(PLAYER::PLAYER_ID())) || __LIB_3__::func_126(PLAYER::PLAYER_ID())) || func_385()) || !__LIB_13__::func_3(PLAYER::PLAYER_ID(), __LIB_7__::func_555(PLAYER::PLAYER_ID(), 5))) || __LIB_7__::func_982(5))
	{
		bVar0 = false;
	}
	__LIB_3__::func_572(iVar1, "AG14_OP1_T" /* GXT: Request Bunker Research */, 0, bVar0, 0, 0, 0);
	bVar0 = true;
	iVar1++;
	if ((Global_1978980.f_2 != 0 || func_382()) || __LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 1))
	{
		bVar0 = false;
	}
	__LIB_3__::func_572(iVar1, "STRING", 1, bVar0, 0, 0, 0);
	__LIB_13__::func_399("AG14_OP2_T" /* GXT: Request Transportation */, 0);
	__LIB_3__::func_572(iVar1, "STRING", 1, bVar0, 0, 0, 0);
	__LIB_13__::func_399(func_397(), 0);
	__LIB_3__::func_564(-1);
	Local_122.f_181.f_3[0] = 0;
	Local_122.f_181.f_36[1] = (6 - 1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	Local_122.f_181.f_2 = iVar1 + 1;
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	MISC::SET_BIT(&(Local_122.f_359), 4);
	func_123();
}

char* func_397()//Position - 0x12C9C
{
	return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(__LIB_29__::func_182(Local_122.f_181.f_103[1]));
}

void func_403()//Position - 0x13377
{
	if (__LIB_3__::func_67(0, -1, 1))
	{
		if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			func_412();
		}
		else
		{
			func_404();
		}
	}
}

void func_404()//Position - 0x133AA
{
	if (__LIB_4__::func_922(Local_122.f_181.f_69))
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				__LIB_1__::func_789("TONY_OP1_D" /* GXT: Request Club Management.~n~Current Nightclub popularity: ~1~% */, 0, 0);
				__LIB_8__::func_283(SYSTEM::ROUND(__LIB_13__::func_64()));
				break;
			case 1:
				__LIB_1__::func_789("TONY_OP2_D" /* GXT: Request a Nightclub Limo to be delivered nearby. */, 100, 0);
				break;
		}
	}
	else
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				if (!__LIB_0__::func_796(PLAYER::PLAYER_ID()))
				{
					__LIB_1__::func_789("TONY_OP1_D1" /* GXT: You must be a VIP, CEO or MC President to make this request. */, 0, 0);
				}
				else if (func_409())
				{
					Local_144 = { __LIB_5__::func_405(__LIB_5__::func_842(Global_1958659.f_30, __LIB_13__::func_24(), 0), 0, 0) };
					__LIB_1__::func_789("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
					__LIB_9__::func_336(&Local_144);
				}
				else
				{
					__LIB_1__::func_789("TONY_NA" /* GXT: This request is not currently available. */, 100, 0);
				}
				break;
			case 1:
				if (Global_1978966.f_2 != 0)
				{
					__LIB_1__::func_789("TONY_OP2_D1" /* GXT: Unavailable. The Nightclub Limo is already in use. */, 100, 0);
				}
				else if (func_406())
				{
					Local_144 = { __LIB_5__::func_405(func_405(), 0, 0) };
					__LIB_1__::func_789("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
					__LIB_9__::func_336(&Local_144);
				}
				else
				{
					__LIB_1__::func_789("TONY_NA" /* GXT: This request is not currently available. */, 100, 0);
				}
				break;
			default:
				__LIB_1__::func_789("TONY_NA" /* GXT: This request is not currently available. */, 100, 0);
				break;
			}
	}
	func_123();
}

int func_405()//Position - 0x134D7
{
	int iVar0;
	iVar0 = (Global_262145.f_33151 /* Tunable: TONY_LIMO_COOLDOWN_TIME */ - __LIB_1__::func_724(&(Global_1978966.f_8), 0, 0));
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_406()//Position - 0x13503
{
	if (__LIB_0__::func_864(&(Global_1978966.f_8)))
	{
		if (!__LIB_0__::func_937(&(Global_1978966.f_8), Global_262145.f_33151 /* Tunable: TONY_LIMO_COOLDOWN_TIME */, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_409()//Position - 0x13575
{
	if (__LIB_0__::func_864(&(Global_1958659.f_30)))
	{
		if (!__LIB_0__::func_937(&(Global_1958659.f_30), Global_262145.f_24475 /* Tunable: 1763921019 */, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_412()//Position - 0x135F5
{
	bool bVar0;
	int iVar1;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("TONY_TITLE" /* GXT: TONY */);
	bVar0 = true;
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, (Global_1978966.f_2 == 0 && !func_416()), 0, 0, 0);
	if ((((((!__LIB_1__::func_501() || __LIB_0__::func_315(PLAYER::PLAYER_ID())) || __LIB_3__::func_126(PLAYER::PLAYER_ID())) || !__LIB_8__::func_166()) || !__LIB_8__::func_165()) || !__LIB_1__::func_787()) || func_409())
	{
		bVar0 = false;
	}
	__LIB_3__::func_572(iVar1, "TONY_OP1_T" /* GXT: Request Club Management */, 0, bVar0, 0, 0, 0);
	bVar0 = true;
	iVar1++;
	if (((Global_1978966.f_2 != 0 || func_406()) || func_416()) || __LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 1))
	{
		bVar0 = false;
	}
	__LIB_3__::func_572(iVar1, "STRING", 1, bVar0, 0, 0, 0);
	__LIB_13__::func_399("TONY_OP2_T" /* GXT: Request Limo */, 0);
	__LIB_3__::func_572(iVar1, "STRING", 1, bVar0, 0, 0, 0);
	__LIB_13__::func_399(func_413(), 0);
	__LIB_3__::func_564(-1);
	Local_122.f_181.f_3[1] = 0;
	Local_122.f_181.f_36[1] = (2 - 1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	Local_122.f_181.f_2 = iVar1 + 1;
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	MISC::SET_BIT(&(Local_122.f_359), 4);
	func_123();
}

char* func_413()//Position - 0x13792
{
	return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(__LIB_29__::func_183(Local_122.f_181.f_103[1]));
}

int func_416()//Position - 0x137F7
{
	switch (__LIB_12__::func_547(PLAYER::PLAYER_ID()))
	{
		case 19:
		case 20:
		case 0:
		case 3:
		case 4:
		case 5:
		case 2:
			return 1;
		default:
	}
	switch (__LIB_12__::func_541(PLAYER::PLAYER_ID()))
	{
		case 0:
			return 1;
		default:
	}
	return 0;
}

void func_419()//Position - 0x1389D
{
	if (__LIB_3__::func_67(0, -1, 1))
	{
		if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			func_433();
		}
		else
		{
			func_420();
		}
	}
}

void func_420()//Position - 0x138D0
{
	int iVar0;
	if (__LIB_4__::func_922(Local_122.f_181.f_69))
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				__LIB_1__::func_789("FRANK_OP1_D" /* GXT: Request Security Contract. */, 100, 0);
				break;
			case 1:
				__LIB_1__::func_789("FRANK_OP2_D" /* GXT: Request Payphone Hit. */, 100, 0);
				break;
			case 2:
				__LIB_1__::func_789("FRANK_OP3_D" /* GXT: Request that the Company SUV be delivered nearby. */, 100, 0);
				break;
			case 3:
				__LIB_1__::func_789("FRANK_OP4_D" /* GXT: Request the Company SUV to return you to your Agency. */, 100, 0);
				break;
			case 4:
				__LIB_1__::func_789("FRANK_OP5_D" /* GXT: Request a Supply Stash containing ammo, health and armor. */, 100, 0);
				break;
		}
	}
	else
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				if (!__LIB_0__::func_796(PLAYER::PLAYER_ID()))
				{
					__LIB_1__::func_789("FRANK_OP2_D3" /* GXT: You must be a VIP, CEO or MC President to make this request. */, 0, 0);
				}
				else if (__LIB_13__::func_123())
				{
					iVar0 = (Global_262145.f_31689 /* Tunable: FIXER_SECURITY_CONTRACT_COOLDOWN_TIME */ - __LIB_1__::func_724(&(Global_1977048.f_14), 0, 0));
					Local_144 = { __LIB_5__::func_405(iVar0, 0, 0) };
					__LIB_1__::func_789("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
					__LIB_9__::func_336(&Local_144);
				}
				else
				{
					__LIB_1__::func_789("FRANK_NA" /* GXT: This request is not currently available. */, 100, 0);
				}
				break;
			case 1:
				if (!func_431())
				{
					Local_144 = { __LIB_5__::func_405(func_429(), 0, 0) };
					__LIB_1__::func_789("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
					__LIB_9__::func_336(&Local_144);
				}
				else if (!func_428() || !func_426(1))
				{
					__LIB_1__::func_789("FRANK_OP2_D2" /* GXT: Unavailable. Become a leader and complete a hit for Franklin to unlock. */, 100, 0);
				}
				else
				{
					__LIB_1__::func_789("FRANK_NA" /* GXT: This request is not currently available. */, 100, 0);
				}
				break;
			case 2:
				if (((Global_1964720 != 0 || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5, 21)) || __LIB_1__::func_795(PLAYER::PLAYER_ID())) || __LIB_30__::func_912(PLAYER::PLAYER_ID()))
				{
					__LIB_1__::func_789("FRANK_NA_2" /* GXT: The Company SUV is already in use. */, 100, 0);
				}
				else
				{
					__LIB_1__::func_789("FRANK_NA" /* GXT: This request is not currently available. */, 100, 0);
				}
				break;
			case 3:
				if (__LIB_12__::func_672(76) > 0)
				{
					Local_144 = { __LIB_5__::func_405(__LIB_12__::func_672(76), 0, 0) };
					__LIB_1__::func_789("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
					__LIB_9__::func_336(&Local_144);
				}
				else if (((Global_1964720 != 0 || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5, 21)) || __LIB_1__::func_795(PLAYER::PLAYER_ID())) || __LIB_30__::func_912(PLAYER::PLAYER_ID()))
				{
					__LIB_1__::func_789("FRANK_NA_2" /* GXT: The Company SUV is already in use. */, 100, 0);
				}
				else
				{
					__LIB_1__::func_789("FRANK_NA" /* GXT: This request is not currently available. */, 100, 0);
				}
				break;
			case 4:
				if (__LIB_12__::func_672(72) > 0)
				{
					Local_144 = { __LIB_5__::func_405(__LIB_12__::func_672(72), 0, 0) };
					__LIB_1__::func_789("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
					__LIB_9__::func_336(&Local_144);
				}
				else
				{
					__LIB_1__::func_789("FRANK_NA" /* GXT: This request is not currently available. */, 100, 0);
				}
				break;
			default:
				__LIB_1__::func_789("FRANK_NA" /* GXT: This request is not currently available. */, 100, 0);
				break;
			}
	}
	func_123();
}

bool func_426(bool bParam0)//Position - 0x13C22
{
	if (bParam0)
	{
		return BitTest(__LIB_1__::func_360(9905, -1, 0), 28);
	}
	return __LIB_21__::func_124(PLAYER::PLAYER_ID());
}

bool func_428()//Position - 0x13C65
{
	return BitTest(__LIB_1__::func_360(9905, -1, 0), 19);
}

int func_429()//Position - 0x13C79
{
	int iVar0;
	int iVar1;
	iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar1 = func_430();
	return (iVar1 - iVar0) * 1000;
}

int func_430()//Position - 0x13C95
{
	return __LIB_1__::func_360(10352, -1, 0);
}

bool func_431()//Position - 0x13CA6
{
	return NETWORK::GET_CLOUD_TIME_AS_INT() >= func_430();
}

void func_433()//Position - 0x13CC8
{
	bool bVar0;
	int iVar1;
	int iVar2;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("FRANK_TITLE" /* GXT: FRANKLIN */);
	bVar0 = true;
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	if (((((!__LIB_1__::func_501() || __LIB_0__::func_315(PLAYER::PLAYER_ID())) || __LIB_3__::func_126(PLAYER::PLAYER_ID())) || __LIB_13__::func_123()) || BitTest(Global_1964716, 2)) || !__LIB_13__::func_127(PLAYER::PLAYER_ID()))
	{
		bVar0 = false;
	}
	__LIB_3__::func_572(iVar1, "FRANK_OP1_T" /* GXT: Request Security Contract */, 0, bVar0, 0, 0, 0);
	bVar0 = true;
	if ((((!func_431() || !func_473()) || !func_428()) || !func_426(1)) || BitTest(Global_1964716, 3))
	{
		bVar0 = false;
	}
	iVar1++;
	__LIB_3__::func_572(iVar1, "FRANK_OP2_T" /* GXT: Request Payphone Hit */, 0, bVar0, 0, 0, 0);
	bVar0 = true;
	iVar1++;
	if ((((Global_1964720 != 0 || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5, 21)) || __LIB_1__::func_795(PLAYER::PLAYER_ID())) || __LIB_30__::func_912(PLAYER::PLAYER_ID())) || BitTest(Global_1964716, 4))
	{
		bVar0 = false;
	}
	__LIB_3__::func_572(iVar1, "FRANK_OP3_T" /* GXT: Company SUV */, 0, bVar0, 0, 0, 0);
	bVar0 = true;
	iVar1++;
	if (((((!func_436() || Global_1964720 != 0) || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5, 21)) || __LIB_1__::func_795(PLAYER::PLAYER_ID())) || __LIB_30__::func_912(PLAYER::PLAYER_ID())) || BitTest(Global_1964716, 5))
	{
		bVar0 = false;
	}
	__LIB_3__::func_572(iVar1, "FRANK_OP4_T" /* GXT: SUV Service */, 0, bVar0, 0, 0, 0);
	bVar0 = true;
	iVar1++;
	iVar2 = __LIB_12__::func_672(72);
	if (((iVar2 > 0 || !func_279(72)) || !func_309(72)) || BitTest(Global_1964716, 6))
	{
		bVar0 = false;
	}
	if (__LIB_29__::func_94(PLAYER::PLAYER_ID()))
	{
		bVar0 = false;
	}
	__LIB_3__::func_572(iVar1, "FRANK_OP5_T" /* GXT: Supply Stash */, 0, bVar0, 0, 0, 0);
	__LIB_3__::func_572(iVar1, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar0, 0, 0, 0);
	__LIB_13__::func_722(__LIB_12__::func_845(72), 0);
	__LIB_3__::func_564(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	Local_122.f_181.f_2 = iVar1 + 1;
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	MISC::SET_BIT(&(Local_122.f_359), 4);
	func_123();
}

int func_436()//Position - 0x140C7
{
	if (__LIB_12__::func_672(76) > 0)
	{
		return 0;
	}
	if (__LIB_1__::func_30(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	if (!func_438())
	{
		return 0;
	}
	if (__LIB_1__::func_795(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_30__::func_913(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_438()//Position - 0x14125
{
	if (__LIB_2__::func_588(PLAYER::PLAYER_ID(), 0, -1))
	{
		return 0;
	}
	if (__LIB_39__::func_392(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	if (func_439(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0))
	{
		return 0;
	}
	if (__LIB_0__::func_307(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__::func_891(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("YachtRm_Bridge"))
	{
		return 0;
	}
	return 1;
}

int func_439(struct<3> Param0, bool bParam1)//Position - 0x141B4
{
	if (func_447(Param0) || bParam1)
	{
		return 0;
	}
	if (SYSTEM::VDIST2(Param0, -1144.4973f, 43.01712f, 51.94447f) <= (325f * 325f))
	{
		if (__LIB_0__::func_875(Param0, 1, 0, 0))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1319.7686f, 29.526155f, 49.56616f, -1336.5266f, 121.03514f, 75.61888f, 18f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1360.0197f, 110.13066f, 52.634132f, -1365.276f, 172.06244f, 72.01312f, 52f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1363.0066f, 170.53304f, 50.00813f, -1296.9033f, 178.81332f, 73.37104f, 35f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1197.5212f, 199.86429f, 57.04471f, -1298.0396f, 176.13841f, 73.33252f, 34f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1103.7449f, 221.13667f, 55.34814f, -1208.3938f, 191.09093f, 79.137085f, 45f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -989.03284f, -89.39376f, 32.48801f, -1086.2109f, -115.70765f, 50.650505f, 70f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -958.5481f, -111.54555f, 30.764324f, -1132.6853f, 190.78412f, 73.903656f, 70f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1077.0282f, -139.7337f, 38.733883f, -1299.5559f, -15.168939f, 63.437103f, 20f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1319.7686f, 29.526155f, 47.56616f, -1287.6193f, -24.88864f, 67.5273f, 20f, false, true))
		{
			return 1;
		}
	}
	if (__LIB_1__::func_873(2, Param0))
	{
		if (__LIB_0__::func_875(Param0, 2, 0, 0))
		{
			return 1;
		}
	}
	if (__LIB_1__::func_873(3, Param0) && !__LIB_17__::func_135(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_875(Param0, 3, 0, 0))
		{
			return 1;
		}
	}
	if (__LIB_1__::func_873(4, Param0))
	{
		if (__LIB_0__::func_875(Param0, 4, 0, 0))
		{
			return 1;
		}
	}
	if (__LIB_1__::func_873(5, Param0))
	{
		if (__LIB_0__::func_875(Param0, 5, 0, 0))
		{
			return 1;
		}
	}
	if (__LIB_1__::func_873(6, Param0))
	{
		if (__LIB_0__::func_875(Param0, 6, 0, 0))
		{
			return 1;
		}
	}
	if (__LIB_1__::func_873(7, Param0))
	{
		if (__LIB_0__::func_875(Param0, 7, 0, 0))
		{
			return 1;
		}
	}
	if (__LIB_1__::func_873(8, Param0))
	{
		if (__LIB_0__::func_875(Param0, 8, 0, 0))
		{
			return 1;
		}
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 2591.6265f, -268.89395f, 111.88586f, 2591.331f, -614.43555f, 55.369205f, 70f, false, true))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -804.05005f, 4216.4116f, 204.4872f, -509.06787f, 4135.1904f, 123.25017f, 250f, false, true))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -148.87766f, 4862.2036f, 305.6442f, 454.62744f, 5573.104f, 804.097f, 250f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -482.89307f, 4990.2554f, 155.16011f, 7.830751f, 5009.3706f, 430.76038f, 250f, false, true))
	{
		return 1;
	}
	if (((OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.26465f, 250f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 954.1139f, 5641.051f, 646.50543f, 2140.375f, 5377.7534f, 149.12209f, 250f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 2117.3477f, 5377.2593f, 173.32973f, 2439.9338f, 5297.445f, 62.686623f, 100f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 2393.3474f, 5321.5796f, 107.06242f, 2523.9456f, 5124.7456f, 41.68384f, 70f, false, true))
	{
		return 1;
	}
	if (SYSTEM::VDIST2(Param0, -99.68751f, -2448.891f, 5.01731f) <= (230f * 230f))
	{
		if ((((OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 85.05448f, -2511.8838f, -2.996267f, -57.599766f, -2412.7163f, 15.000947f, 75f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 7.516524f, -2546.741f, 1.331557f, -177.32684f, -2417.0466f, 19.160444f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -260.03537f, -2419.9783f, 1.399635f, -27.26375f, -2423.8484f, 25.00064f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -187.4256f, -2516.0857f, -6.849975f, -186.7518f, -2438.1487f, 25.001602f, 40f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -73.60813f, -2538.5637f, -6.989857f, -183.25558f, -2465.145f, 25.020298f, 70f, false, true))
		{
			return 1;
		}
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1579.8218f, 2785.3892f, 9.915375f, -1685.9047f, 2918.0242f, 76.24912f, 45.875f, false, true))
	{
		return 1;
	}
	return 0;
}

int func_447(struct<3> Param0)//Position - 0x1572E
{
	int iVar0;
	var uVar1;
	var uVar2;
	if (SYSTEM::VDIST(Global_2667225.f_2900, Param0) < Global_2667225.f_2912)
	{
		return Global_2667225.f_2903;
	}
	Global_2667225.f_2900 = { Param0 };
	if (__LIB_12__::func_389(Param0))
	{
		Global_2667225.f_2903 = 1;
		return 1;
	}
	iVar0 = __LIB_1__::func_478(Param0);
	if (iVar0 != -1)
	{
		Global_2667225.f_2903 = 1;
		return 1;
	}
	else
	{
		uVar1 = 3;
		uVar2 = 3;
		if (__LIB_1__::func_897(Param0, &uVar1, &uVar2))
		{
			Global_2667225.f_2903 = 1;
			return 1;
		}
	}
	Global_2667225.f_2903 = 0;
	return 0;
}

bool func_473()//Position - 0x163CD
{
	return ((func_489() && func_476()) && !func_474());
}

bool func_474()//Position - 0x163EC
{
	return __LIB_29__::func_224() >= 2;
}

int func_476()//Position - 0x16406
{
	if (__LIB_1__::func_30(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (__LIB_1__::func_381())
	{
		return 0;
	}
	if (__LIB_0__::func_975())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if ((__LIB_0__::func_979(PLAYER::PLAYER_ID(), 0) || __LIB_0__::func_979(PLAYER::PLAYER_ID(), 21)) || __LIB_0__::func_979(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (__LIB_2__::func_588(PLAYER::PLAYER_ID(), 0, -1))
	{
		return 0;
	}
	if (__LIB_0__::func_938(PLAYER::PLAYER_ID()) || __LIB_12__::func_542())
	{
		return 0;
	}
	if (__LIB_2__::func_100(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_2__::func_841(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_489()//Position - 0x165DC
{
	if (!__LIB_28__::func_623(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (!__LIB_0__::func_156(PLAYER::PLAYER_ID(), 0, 1))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (!__LIB_1__::func_796(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_1__::func_456(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__::func_629())
	{
		return 0;
	}
	if (__LIB_3__::func_492(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_498()//Position - 0x16771
{
	if (__LIB_3__::func_67(0, -1, 1))
	{
		if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			func_505();
		}
		else
		{
			func_499();
		}
	}
}

void func_499()//Position - 0x167A4
{
	if (__LIB_4__::func_922(Local_122.f_181.f_69))
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				if (__LIB_1__::func_520(1) && !__LIB_1__::func_375(1))
				{
					__LIB_1__::func_789("IMANI_OOS_D_2" /* GXT: Activate a ~1~m area where you and members of your Organization will be hidden from the radar of other players. */, 100, 0);
					__LIB_8__::func_283(Global_262145.f_31768 /* Tunable: 106922655 */);
				}
				else if (__LIB_1__::func_520(1) && __LIB_1__::func_375(1))
				{
					__LIB_1__::func_789("IMANI_OOS_D_3" /* GXT: Activate a ~1~m area where you and members of your Motorcycle Club will be hidden from the radar of other players. */, 100, 0);
					__LIB_8__::func_283(Global_262145.f_31768 /* Tunable: 106922655 */);
				}
				else
				{
					__LIB_1__::func_789("IMANI_OOS_D_1" /* GXT: Activate a ~1~m area where you will be hidden from the radar of other players. */, 100, 0);
					__LIB_8__::func_283(Global_262145.f_31768 /* Tunable: 106922655 */);
				}
				break;
			case 1:
				__LIB_1__::func_789("IMANI_SMC_D" /* GXT: Source a nearby motorcycle equipped with bulletproof tires. */, 100, 0);
				break;
		}
	}
	else
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				if (__LIB_12__::func_672(74) > 0)
				{
					Local_144 = { __LIB_5__::func_405(__LIB_12__::func_672(74), 0, 0) };
					__LIB_1__::func_789("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
					__LIB_9__::func_336(&Local_144);
				}
				else if (__LIB_1__::func_520(0))
				{
					__LIB_1__::func_789("PIM_HTTV17" /* GXT: Unavailable while working for another player. */, 100, 0);
				}
				else
				{
					__LIB_1__::func_789("IMANI_NA" /* GXT: This request is not currently available. */, 100, 0);
				}
				break;
			case 1:
				if (__LIB_12__::func_672(73) > 0)
				{
					Local_144 = { __LIB_5__::func_405(__LIB_12__::func_672(73), 0, 0) };
					__LIB_1__::func_789("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
					__LIB_9__::func_336(&Local_144);
				}
				else if (__LIB_29__::func_91())
				{
					__LIB_1__::func_789("IMANI_IN_USE" /* GXT: You already have an active motorcycle. */, 100, 0);
				}
				else
				{
					__LIB_1__::func_789("IMANI_NA" /* GXT: This request is not currently available. */, 100, 0);
				}
				break;
			default:
				__LIB_1__::func_789("IMANI_NA" /* GXT: This request is not currently available. */, 100, 0);
				break;
			}
	}
	func_123();
}

void func_505()//Position - 0x169FD
{
	bool bVar0;
	int iVar1;
	int iVar2;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("IMANI_TITLE" /* GXT: IMANI */);
	bVar0 = true;
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	iVar2 = __LIB_12__::func_672(74);
	if (((iVar2 > 0 || __LIB_1__::func_520(0)) || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_448, 0)) || BitTest(Global_1964716, 0))
	{
		bVar0 = false;
	}
	__LIB_3__::func_572(iVar1, "IMANI_OOS_T" /* GXT: Out of Sight */, 0, bVar0, 0, 0, 0);
	__LIB_3__::func_572(iVar1, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar0, 0, 0, 0);
	__LIB_13__::func_722(__LIB_12__::func_845(74), 0);
	bVar0 = true;
	iVar1++;
	iVar2 = __LIB_12__::func_672(73);
	if ((iVar2 > 0 || __LIB_29__::func_91()) || BitTest(Global_1964716, 1))
	{
		bVar0 = false;
	}
	__LIB_3__::func_572(iVar1, "IMANI_SMC_T" /* GXT: Source Motorcycle */, 0, bVar0, 0, 0, 0);
	__LIB_3__::func_572(iVar1, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar0, 0, 0, 0);
	__LIB_13__::func_722(__LIB_12__::func_845(73), 0);
	__LIB_3__::func_564(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	Local_122.f_181.f_2 = iVar1 + 1;
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	MISC::SET_BIT(&(Local_122.f_359), 4);
	func_123();
}

void func_506()//Position - 0x16B6A
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	func_521();
	func_519();
	if (__LIB_3__::func_67(0, -1, 1))
	{
		if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_602(0, 0);
			__LIB_1__::func_767("SES_FIRST_0" /* GXT: SESSANTA */);
			MISC::CLEAR_BIT(&bLocal_169, 2);
			__LIB_1__::func_766(1, 1, 0, 0, 0);
			__LIB_1__::func_765(1, 2, 1, 1, 1);
			__LIB_12__::func_593(0, 0, 0, 0, 0);
			if (__LIB_8__::func_906(PLAYER::PLAYER_ID()))
			{
				bVar1 = true;
				bVar2 = func_515(0);
				if (!bVar2 || __LIB_1__::func_543(PLAYER::PLAYER_ID()))
				{
					bVar1 = false;
				}
				func_512(69, iVar0, "TUN_SPHONE_CANCEL" /* GXT: Cancel Contract Job */, bVar1);
				if (__LIB_12__::func_845(69) > 0)
				{
					__LIB_3__::func_572(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
					__LIB_13__::func_722(__LIB_12__::func_845(69), 0);
				}
				if (bVar2)
				{
					__LIB_1__::func_789("TUN_SPHONE_H3" /* GXT: Cancel your current Contract Job */, 100, 0);
				}
				else
				{
					__LIB_1__::func_789("TUN_SPHONE_H2" /* GXT: Unavailable: No Contract Job currently active. */, 100, 0);
				}
			}
			else
			{
				__LIB_3__::func_572(iVar0, "TUN_SPHONE_CANCEL" /* GXT: Cancel Contract Job */, 0, 1, 0, 0, 0);
				__LIB_3__::func_572(iVar0, "", 1, 1, 0, 0, 0);
				__LIB_14__::func_431(15, 0);
				__LIB_1__::func_789("TUN_SPHONE_H1" /* GXT: This will unlock when you have completed any Contract Job. */, 100, 0);
			}
			iVar0++;
			if (func_510(PLAYER::PLAYER_ID()))
			{
				if (func_507(PLAYER::PLAYER_ID()))
				{
					bVar1 = ((!BitTest(uLocal_196, 0) && !BitTest(uLocal_196, 1)) && !BitTest(uLocal_196, 2));
					func_512(70, iVar0, "TUN_SPHONE_EL" /* GXT: Request Exotic Exports List */, bVar1);
					__LIB_1__::func_789("TUN_SPHONE_H4" /* GXT: Request the list of Exotic Exports vehicles you need to acquire. */, 100, 0);
				}
				else
				{
					__LIB_3__::func_572(iVar0, "TUN_SPHONE_EL" /* GXT: Request Exotic Exports List */, 0, 0, 0, 0, 0);
					__LIB_3__::func_572(iVar0, "", 1, 0, 0, 0, 0);
					__LIB_1__::func_789("TUN_SPHONE_H5" /* GXT: All Exotic Exports vehicles already delivered. */, 100, 0);
				}
				iVar0++;
			}
			Local_122.f_181.f_2 = iVar0;
			__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
			__LIB_3__::func_564(-1);
			if (func_1120())
			{
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
					__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
				}
				else
				{
					__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
					__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
				}
				MISC::SET_BIT(&(Local_122.f_359), 6);
			}
			MISC::SET_BIT(&(Local_122.f_359), 4);
			func_123();
		}
		else
		{
			if (__LIB_8__::func_906(PLAYER::PLAYER_ID()))
			{
				if (func_515(0))
				{
					__LIB_1__::func_789("TUN_SPHONE_H3" /* GXT: Cancel your current Contract Job */, 100, 0);
				}
				else
				{
					__LIB_1__::func_789("TUN_SPHONE_H2" /* GXT: Unavailable: No Contract Job currently active. */, 100, 0);
				}
			}
			else
			{
				__LIB_1__::func_789("TUN_SPHONE_H1" /* GXT: This will unlock when you have completed any Contract Job. */, 100, 0);
			}
			func_123();
		}
	}
}

bool func_507(int iParam0)//Position - 0x16DAE
{
	return ((__LIB_1__::func_797(iParam0) && __LIB_8__::func_906(iParam0)) && !__LIB_27__::func_521(iParam0));
}

bool func_510(int iParam0)//Position - 0x16E0D
{
	return (__LIB_1__::func_797(iParam0) && __LIB_8__::func_906(iParam0));
}

void func_512(int iParam0, int iParam1, char* sParam2, bool bParam3)//Position - 0x16F61
{
	if (func_273(iParam0))
	{
		__LIB_3__::func_572(iParam1, sParam2, 1, bParam3, 0, 0, 0);
		__LIB_14__::func_431(51, 0);
	}
	else
	{
		__LIB_3__::func_572(iParam1, sParam2, 0, bParam3, 0, 0, 0);
	}
}

bool func_515(bool bParam0)//Position - 0x17014
{
	if (bParam0)
	{
		return BitTest(__LIB_1__::func_360(9618, -1, 0), 1);
	}
	return __LIB_28__::func_628(PLAYER::PLAYER_ID());
}

void func_519()//Position - 0x1709F
{
	if (BitTest(uLocal_196, 1))
	{
		Local_122.f_0 = 172;
		StringCopy(&(Local_122.f_166), "TUN_SESSANTA", 16);
		Local_122.f_178 = 26;
		Local_122.f_180 = 2;
		StringCopy(&(Local_122.f_170), "TNSSAUD", 16);
		StringCopy(&(Local_122.f_174), "TNSS_PC_GP1", 16);
		__LIB_0__::func_222(&(Local_122.f_1), Local_122.f_180, 0, &(Local_122.f_166), 0, 1);
		MISC::CLEAR_BIT(&uLocal_196, 1);
		MISC::SET_BIT(&uLocal_196, 2);
	}
	else if (BitTest(uLocal_196, 2))
	{
		func_1(Local_122.f_1, "TNSSAUD", "TNSS_PC_GP1", &Local_166, 1);
		MISC::CLEAR_BIT(&uLocal_196, 2);
		if (BitTest(uLocal_196, 3))
		{
			func_32(2);
		}
		else
		{
			func_32(4);
		}
	}
	else if (BitTest(uLocal_196, 0))
	{
		MISC::CLEAR_BIT(&uLocal_196, 0);
		MISC::SET_BIT(&uLocal_196, 1);
		if (func_507(PLAYER::PLAYER_ID()) && !__LIB_0__::func_864(&uLocal_197))
		{
			__LIB_0__::func_795(&uLocal_197, 0, 0);
			MISC::SET_BIT(&uLocal_196, 3);
		}
	}
}

void func_521()//Position - 0x1721E
{
	if (BitTest(iLocal_193, 3))
	{
		Local_122.f_0 = 172;
		StringCopy(&(Local_122.f_166), "TUN_SESSANTA", 16);
		Local_122.f_178 = 26;
		Local_122.f_180 = 2;
		StringCopy(&(Local_122.f_170), "TNSSAUD", 16);
		StringCopy(&(Local_122.f_174), "TNSS_PC_GP1", 16);
		__LIB_0__::func_222(&(Local_122.f_1), Local_122.f_180, 0, &(Local_122.f_166), 0, 1);
		MISC::CLEAR_BIT(&iLocal_193, 3);
		MISC::SET_BIT(&iLocal_193, 4);
	}
	else if (BitTest(iLocal_193, 4))
	{
		func_1(Local_122.f_1, "TNSSAUD", "TNSS_PC_GP1", &Local_166, 1);
		iLocal_193 = 0;
		func_32(4);
	}
	else if (BitTest(iLocal_193, 0))
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("HUD_CONNPROB" /* GXT: alert */, "TUN_SPHONE_CC" /* GXT: Are you sure you want to cancel your Contract Job? */, 36, 0, false, -1, 0, 0, true, 0);
		if (__LIB_0__::func_937(&uLocal_194, 1000, 0))
		{
			if (__LIB_10__::func_437(201))
			{
				func_522(1);
				MISC::SET_BIT(&iLocal_193, 3);
				func_32(4);
			}
			else if (__LIB_10__::func_437(202))
			{
				func_1(Local_122.f_1, "TNSSAUD", "TNSS_PC_BY1", &Local_166, 0);
				MISC::CLEAR_BIT(&iLocal_193, 0);
				func_32(4);
			}
		}
	}
}

void func_522(bool bParam0)//Position - 0x17324
{
	__LIB_33__::func_649();
	if (bParam0)
	{
		__LIB_33__::func_648(1);
	}
	__LIB_32__::func_441(0, 0, 1, 1);
	__LIB_32__::func_440(0, 0, 1, 1);
}

void func_540()//Position - 0x17A7C
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	func_551();
	if (__LIB_3__::func_67(0, -1, 1))
	{
		if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_602(0, 0);
			__LIB_1__::func_767("P_FIRST_0" /* GXT: PAVEL */);
			MISC::CLEAR_BIT(&bLocal_169, 2);
			__LIB_1__::func_766(1, 1, 0, 0, 0);
			__LIB_1__::func_765(1, 2, 1, 1, 1);
			__LIB_12__::func_593(0, 0, 0, 0, 0);
			bVar1 = true;
			bVar2 = func_549(1);
			if (((!bVar2 || func_547(PLAYER::PLAYER_ID())) || __LIB_11__::func_254(PLAYER::PLAYER_ID())) || __LIB_38__::func_550(PLAYER::PLAYER_ID()))
			{
				bVar1 = false;
			}
			if (__LIB_1__::func_167(PLAYER::PLAYER_ID()))
			{
				func_512(68, iVar0, "CSH_PPHONE_CANCEL" /* GXT: Cancel The Cayo Perico Heist */, bVar1);
				if (__LIB_12__::func_845(68) > 0)
				{
					__LIB_3__::func_572(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
					__LIB_13__::func_722(__LIB_12__::func_845(68), 0);
				}
				if (bVar1)
				{
					__LIB_1__::func_789("CSH_PPHONE_H3" /* GXT: Cancel your current progress on The Cayo Perico Heist. */, 100, 0);
				}
				else if (!bVar2)
				{
					__LIB_1__::func_789("CSH_PPHONE_H2" /* GXT: Unavailable: The Cayo Perico Heist is not currently active. */, 100, 0);
				}
				else
				{
					__LIB_1__::func_789("CSH_PPHONE_H4", 100, 0);
				}
			}
			else
			{
				__LIB_3__::func_572(iVar0, "CSH_PPHONE_CANCEL" /* GXT: Cancel The Cayo Perico Heist */, 0, bVar1, 0, 0, 0);
				__LIB_3__::func_572(iVar0, "", 1, 1, 0, 0, 0);
				__LIB_14__::func_431(15, 0);
				__LIB_1__::func_789("CSH_PPHONE_H1" /* GXT: This will unlock when you have completed The Cayo Perico Heist. */, 100, 0);
			}
			iVar0++;
			__LIB_3__::func_564(-1);
			if (func_1120())
			{
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
					__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
				}
				else
				{
					__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
					__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
				}
				MISC::SET_BIT(&(Local_122.f_359), 6);
			}
			MISC::SET_BIT(&(Local_122.f_359), 4);
			func_123();
		}
		else
		{
			if (__LIB_1__::func_167(PLAYER::PLAYER_ID()))
			{
				if (func_549(1))
				{
					__LIB_1__::func_789("CSH_PPHONE_H3" /* GXT: Cancel your current progress on The Cayo Perico Heist. */, 100, 0);
				}
				else
				{
					__LIB_1__::func_789("CSH_PPHONE_H2" /* GXT: Unavailable: The Cayo Perico Heist is not currently active. */, 100, 0);
				}
			}
			else
			{
				__LIB_1__::func_789("CSH_PPHONE_H1" /* GXT: This will unlock when you have completed The Cayo Perico Heist. */, 100, 0);
			}
			func_123();
		}
	}
}

int func_547(int iParam0)//Position - 0x17D10
{
	if (__LIB_2__::func_905(iParam0))
	{
		return __LIB_1__::func_874(iParam0) == iParam0;
	}
	return 0;
}

bool func_549(bool bParam0)//Position - 0x17D8E
{
	if (bParam0)
	{
		return BitTest(__LIB_1__::func_360(9511, -1, 0), 0);
	}
	return __LIB_7__::func_245(PLAYER::PLAYER_ID());
}

void func_551()//Position - 0x17DCF
{
	if (BitTest(uLocal_190, 3))
	{
		Local_122.f_0 = 169;
		StringCopy(&(Local_122.f_166), "HS4_PAVEL", 16);
		Local_122.f_178 = 0;
		Local_122.f_180 = 2;
		StringCopy(&(Local_122.f_170), "HS4PAAU", 16);
		StringCopy(&(Local_122.f_174), "HS4PA_PCR_2", 16);
		__LIB_0__::func_222(&(Local_122.f_1), Local_122.f_180, 0, &(Local_122.f_166), 0, 1);
		MISC::CLEAR_BIT(&uLocal_190, 3);
		MISC::SET_BIT(&uLocal_190, 4);
	}
	else if (BitTest(uLocal_190, 4))
	{
		func_1(Local_122.f_1, "HS4PAAU", "HS4PA_PCR_2", &Local_166, 1);
		iLocal_178 = 0;
		func_32(4);
	}
	else if (BitTest(uLocal_190, 0))
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("HUD_CONNPROB" /* GXT: alert */, "MPCT_CNCW" /* GXT: Are you sure you want to cancel this Heist? If you have paid a setup cost it won't be refunded. */, 36, 0, false, -1, 0, 0, true, 0);
		if (__LIB_0__::func_937(&uLocal_176, 1000, 0))
		{
			if (__LIB_10__::func_437(201))
			{
				__LIB_33__::func_798(1);
				MISC::SET_BIT(&uLocal_190, 3);
				func_32(4);
			}
			else if (__LIB_10__::func_437(202))
			{
				func_1(Local_122.f_1, "HS4PAAU", "HS4PA_PCR_5", &Local_166, 0);
				MISC::CLEAR_BIT(&iLocal_178, 0);
				func_32(4);
			}
		}
	}
}

void func_580()//Position - 0x196FA
{
	func_764();
	if (BitTest(Local_122.f_359, 4) && BitTest(uLocal_186, 0))
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
		MISC::CLEAR_BIT(&uLocal_186, 0);
	}
	switch (Local_122.f_178)
	{
		case 23:
			if (__LIB_1__::func_472(PLAYER::PLAYER_ID(), 6))
			{
				if (func_757())
				{
					__LIB_1__::func_482(6);
					func_32(4);
				}
				return;
			}
			if (__LIB_3__::func_67(0, -1, 1))
			{
				if (bLocal_207 && func_753())
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 4);
					bLocal_207 = false;
				}
				if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					func_752();
					MISC::SET_BIT(&(Local_122.f_359), 4);
					func_123();
				}
				else
				{
					func_123();
					func_584();
				}
			}
			break;
		case 24:
			if (__LIB_3__::func_67(0, -1, 0))
			{
				if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					if (func_583())
					{
						MISC::SET_BIT(&(Local_122.f_359), 4);
						func_123();
					}
					else
					{
						return;
					}
				}
				else
				{
					func_123();
					func_581();
				}
			}
			break;
	}
}

void func_581()//Position - 0x19807
{
	if (Local_122.f_181.f_69 == 6)
	{
		__LIB_1__::func_789("MPCT_EXIT" /* GXT: Close down the menu. */, 0, 0);
	}
	else if (!BitTest(uLocal_186, 2))
	{
		if (__LIB_12__::func_672(60) > 0)
		{
			Local_144 = { __LIB_5__::func_405(__LIB_12__::func_672(60), 0, 0) };
			__LIB_1__::func_789("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
			__LIB_9__::func_336(&Local_144);
		}
		else
		{
			switch (__LIB_1__::func_798())
			{
				case 1:
					__LIB_1__::func_789("MPCT_CASINO_VD2" /* GXT: A luxury car has already been sent to your location. */, 0, 0);
					break;
				default:
					__LIB_1__::func_789("MPCT_CASINO_VD1" /* GXT: You cannot request a luxury car at this time. */, 0, 0);
					break;
				}
		}
	}
	else
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				__LIB_1__::func_789("MPCT_REQCOGH" /* GXT: Request a Cognoscenti Cabrio. */, 0, 0);
				break;
			case 1:
				__LIB_1__::func_789("MPCT_REQWINH" /* GXT: Request a Enus Windsor. */, 0, 0);
				break;
			case 2:
				__LIB_1__::func_789("MPCT_REQFUGH" /* GXT: Request a Fugitive. */, 0, 0);
				break;
			case 3:
				__LIB_1__::func_789("MPCT_REQSUPH" /* GXT: Request a Super Diamond. */, 0, 0);
				break;
			case 4:
				__LIB_1__::func_789("MPCT_REQDUBH" /* GXT: Request a Dubsta. */, 0, 0);
				break;
			case 5:
				__LIB_1__::func_789("MPCT_REQFELH" /* GXT: Request a Feltzer. */, 0, 0);
				break;
			default:
				__LIB_1__::func_789("MPCT_PERVEHc" /* GXT: Request Delivery? */, 0, 0);
				break;
			}
	}
}

int func_583()//Position - 0x1992C
{
	bool bVar0;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("MPCT_CASINO_V" /* GXT: REQUEST VEHICLE */);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	bVar0 = BitTest(uLocal_186, 2);
	__LIB_3__::func_572(0, "COGCABRI" /* GXT: Cognoscenti Cabrio */, 0, bVar0, 0, 0, 0);
	__LIB_3__::func_572(1, "WINDSOR" /* GXT: Windsor */, 0, bVar0, 0, 0, 0);
	__LIB_3__::func_572(2, "FUGITIVE" /* GXT: Fugitive */, 0, bVar0, 0, 0, 0);
	__LIB_3__::func_572(3, "SUPERD" /* GXT: Super Diamond */, 0, bVar0, 0, 0, 0);
	__LIB_3__::func_572(4, "DUBSTA" /* GXT: Dubsta */, 0, bVar0, 0, 0, 0);
	__LIB_3__::func_572(5, "FELTZER" /* GXT: Feltzer */, 0, bVar0, 0, 0, 0);
	__LIB_3__::func_564(-1);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
		__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
	}
	else
	{
		__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
		__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
	}
	MISC::SET_BIT(&(Local_122.f_359), 6);
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = 6;
	return 1;
}

void func_584()//Position - 0x19A1A
{
	switch (Local_122.f_181.f_69)
	{
		case 0:
			if (Global_262145.f_27106 /* Tunable: -1284248636 */)
			{
				__LIB_1__::func_789("MPCT_CASINO_RD3" /* GXT: Ms. Baker is not currently offering any jobs. */, 0, 0);
			}
			else if (func_753())
			{
				__LIB_1__::func_789("MPCT_CASINO_RD0" /* GXT: Request a job from Ms. Baker. */, 0, 0);
			}
			else if (bLocal_207)
			{
				__LIB_1__::func_789("MPCT_CASINO_RD2" /* GXT: There is a short wait before you can request more work from Ms. Baker. */, 0, 0);
			}
			else if (!__LIB_1__::func_501())
			{
				__LIB_1__::func_789("MPCT_CASINO_RD1" /* GXT: You must be a VIP, CEO or MC President in order to access Casino Work. */, 0, 0);
			}
			else if (__LIB_42__::func_939(PLAYER::PLAYER_ID(), 243, 0) == 16)
			{
				__LIB_1__::func_789("MPCT_CASINO_RD4" /* GXT: Mission unavailable. A member of your gang is currently playing a casino game. */, 0, 0);
			}
			else if (__LIB_42__::func_939(PLAYER::PLAYER_ID(), 243, 0) == 15)
			{
				__LIB_1__::func_789("MPCT_CASINO_RD5" /* GXT: Mission unavailable. A member of your gang is currently at one with the animals. */, 0, 0);
			}
			else
			{
				__LIB_1__::func_789("MPCT_CASINO_RD3" /* GXT: Ms. Baker is not currently offering any jobs. */, 0, 0);
			}
			break;
		case 1:
			if (!Global_262145.f_27107 /* Tunable: 1858935833 */ && BitTest(uLocal_186, 1))
			{
				__LIB_1__::func_789("MPCT_CASINO_LD0" /* GXT: Request a limousine to be sent to your location. */, 0, 0);
			}
			else if (__LIB_12__::func_672(59) > 0)
			{
				Local_144 = { __LIB_5__::func_405(__LIB_12__::func_672(59), 0, 0) };
				__LIB_1__::func_789("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
				__LIB_9__::func_336(&Local_144);
			}
			else
			{
				switch (__LIB_1__::func_799())
				{
					case 1:
						__LIB_1__::func_789("MPCT_CASINO_LD2" /* GXT: A limousine has already been sent to your location. */, 0, 0);
						break;
					default:
						__LIB_1__::func_789("MPCT_CASINO_LD1" /* GXT: You cannot request a limousine at this time. */, 0, 0);
						break;
					}
			}
			break;
		case 2:
			if (!Global_262145.f_27108 /* Tunable: 1013621859 */ && BitTest(uLocal_186, 2))
			{
				__LIB_1__::func_789("MPCT_CASINO_VD0" /* GXT: Request a luxury car to be sent to your location. */, 0, 0);
			}
			else if (__LIB_12__::func_672(60) > 0)
			{
				Local_144 = { __LIB_5__::func_405(__LIB_12__::func_672(60), 0, 0) };
				__LIB_1__::func_789("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
				__LIB_9__::func_336(&Local_144);
			}
			else
			{
				switch (__LIB_1__::func_798())
				{
					case 1:
						__LIB_1__::func_789("MPCT_CASINO_VD2" /* GXT: A luxury car has already been sent to your location. */, 0, 0);
						break;
					default:
						__LIB_1__::func_789("MPCT_CASINO_VD1" /* GXT: You cannot request a luxury car at this time. */, 0, 0);
						break;
					}
			}
			break;
		default:
			__LIB_1__::func_789("", 0, 0);
			break;
	}
}

void func_752()//Position - 0x21807
{
	bool bVar0;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("MPCT_CASINO_M" /* GXT: MS. BAKER */);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	bVar0 = true;
	if (Global_262145.f_27106 /* Tunable: -1284248636 */ || !func_753())
	{
		bVar0 = false;
	}
	__LIB_3__::func_572(0, "MPCT_CASINO_M_R" /* GXT: Request Work */, 0, bVar0, 0, 0, 0);
	bVar0 = true;
	if (Global_262145.f_27107 /* Tunable: 1858935833 */ || !BitTest(uLocal_186, 1))
	{
		bVar0 = false;
	}
	__LIB_3__::func_572(1, "MPCT_CASINO_M_L" /* GXT: Limousine Service */, 0, bVar0, 0, 0, 0);
	bVar0 = true;
	if (Global_262145.f_27108 /* Tunable: 1013621859 */ || !BitTest(uLocal_186, 2))
	{
		bVar0 = false;
	}
	__LIB_3__::func_572(2, "MPCT_CASINO_M_V" /* GXT: Car Service */, 0, bVar0, 0, 0, 0);
	__LIB_3__::func_564(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = 3;
}

int func_753()//Position - 0x2191A
{
	int iVar0;
	if (func_755())
	{
		bLocal_207 = true;
		return 0;
	}
	else
	{
		bLocal_207 = false;
	}
	if (__LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (!__LIB_1__::func_501())
	{
		return 0;
	}
	if (__LIB_0__::func_315(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = __LIB_42__::func_939(PLAYER::PLAYER_ID(), 243, 0);
	if (iVar0 != -1)
	{
		return 0;
	}
	if (__LIB_18__::func_360())
	{
		return 0;
	}
	return 1;
}

int func_755()//Position - 0x21999
{
	if (__LIB_0__::func_864(&Global_1966143) && !__LIB_0__::func_937(&Global_1966143, Global_262145.f_27242 /* Tunable: VC_WORK_REQUEST_COOLDOWN */, 0))
	{
		return 1;
	}
	return 0;
}

int func_757()//Position - 0x219E4
{
	char* sVar0;
	if (Local_184.f_0 == -1)
	{
		if (__LIB_7__::func_944() != -1)
		{
			Local_184.f_0 = __LIB_7__::func_944();
		}
	}
	if (Local_184.f_1 == -1)
	{
		if (__LIB_7__::func_944() != -1)
		{
			Local_184.f_1 = __LIB_7__::func_943();
		}
	}
	if (Local_184.f_3)
	{
		if (!__LIB_0__::func_75())
		{
			return 1;
		}
	}
	else if (!__LIB_0__::func_75())
	{
		if (!Local_184.f_2)
		{
			if ((__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 243 && __LIB_0__::func_315(PLAYER::PLAYER_ID())) && Local_184.f_0 != -1)
			{
				sVar0 = func_759(243, Local_184.f_0, Local_184.f_1);
				func_1(Local_122.f_1, "CAGTAU", sVar0, &Local_166, 0);
				Local_184.f_2 = 1;
				__LIB_0__::func_627(&(Local_184.f_4), 0, 0);
			}
			else if (__LIB_0__::func_937(&(Local_184.f_4), 10000, 0))
			{
				func_758();
				return 1;
			}
		}
		else if (__LIB_0__::func_937(&(Local_184.f_4), 3000, 0))
		{
			return 1;
		}
	}
	else if (Local_184.f_2)
	{
		Local_184.f_3 = 1;
	}
	return 0;
}

void func_758()//Position - 0x21AE4
{
	func_1(Local_122.f_1, "CAGTAU", "CAGT_PM_4", &Local_166, 0);
}

char* func_759(int iParam0, int iParam1, int iParam2)//Position - 0x21B04
{
	int iVar0;
	iVar0 = __LIB_7__::func_974(PLAYER::PLAYER_ID());
	switch (iParam0)
	{
		case 249:
			switch (iParam1)
			{
				case 2:
					switch (iVar0)
					{
						case 0:
							return "BATFM_SMSA1";
						case 1:
							return "BATFM_SMDA1";
						case 2:
							return "BATFM_SMTA1";
						case 3:
							return "BATFM_SMBA1";
						default:
					}
					break;
				case 3:
					switch (iVar0)
					{
						case 0:
							return "BATFM_CFSA1";
						case 1:
							return "BATFM_CFDA1";
						case 2:
							return "BATFM_CFTA1";
						case 3:
							return "BATFM_CFBA1";
						default:
					}
					break;
				case 4:
					switch (iVar0)
					{
						case 0:
							return "BATFM_MESA1";
						case 1:
							return "BATFM_MEDA1";
						case 2:
							return "BATFM_META1";
						case 3:
							return "BATFM_MEBA1";
						default:
					}
					break;
				case 5:
					switch (iVar0)
					{
						case 0:
							return "BATFM_HUSA1";
						case 1:
							return "BATFM_HUDA1";
						case 2:
							return "BATFM_HUTA1";
						case 3:
							return "BATFM_HUBA1";
						default:
					}
					break;
			}
			break;
		case 237:
			switch (iParam1)
			{
				case 2:
					return "BATFM_SBOA";
				case 3:
					return "BATFM_CLOA";
				case 5:
					return "BATFM_HKOA";
				default:
			}
			break;
		case 243:
			if (Global_2815059.f_5195.f_341 == -1)
			{
				Global_2815059.f_5195.f_341 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			}
			switch (Global_2815059.f_5195.f_341)
			{
				case 0:
					switch (iParam1)
					{
						case 6:
							if (__LIB_12__::func_999() == 0)
							{
								return "CAGT_HR_OC1";
							}
							else
							{
								return "CAGT_HR_OCM1";
							}
							break;
						case 7:
							return "CAGT_HT_OC1";
						case 11:
							switch (iParam2)
							{
								case 35:
								case 36:
									return "CAGT_RL_OPS1";
								case 37:
									return "CAGT_RL_OVG1";
								default:
							}
							break;
						case 15:
							return "CAGT_UI_OC1";
						case 9:
							return "CAGT_MD_OC1";
						case 13:
							return "CAGT_SP_OC1";
						case 4:
							return "CAGT_ED_OC1";
						case 14:
							return "CAGT_TC_OC1";
						case 8:
							return "CAGT_IJ_OC1";
						case 5:
							return "CAGT_HE_OC1";
						case 3:
							return "CAGT_DC_OC1";
						case 0:
							return "CAGT_BP_OC1";
						case 12:
							return "CAGT_SM_OC1";
						case 2:
							return "CAGT_CC_OC1";
						case 1:
							return "CAGT_BD_OC1";
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 6:
							if (__LIB_12__::func_999() == 0)
							{
								return "CAGT_HR_OC2";
							}
							else
							{
								return "CAGT_HR_OCM2";
							}
							break;
						case 7:
							return "CAGT_HT_OC2";
						case 11:
							switch (iParam2)
							{
								case 35:
								case 36:
									return "CAGT_RL_OPS2";
								case 37:
									return "CAGT_RL_OVG1";
								default:
							}
							break;
						case 15:
							return "CAGT_UI_OC2";
						case 9:
							return "CAGT_MD_OC2";
						case 13:
							return "CAGT_SP_OC2";
						case 4:
							return "CAGT_ED_OC2";
						case 14:
							return "CAGT_TC_OC2";
						case 8:
							return "CAGT_IJ_OC2";
						case 5:
							return "CAGT_HE_OC2";
						case 3:
							return "CAGT_DC_OC2";
						case 0:
							return "CAGT_BP_OC2";
						case 12:
							return "CAGT_SM_OC2";
						case 2:
							return "CAGT_CC_OC2";
						case 1:
							return "CAGT_BD_OC2";
					}
					break;
			}
			break;
		case 258:
			switch (iParam1)
			{
				case 0:
					return "HS4ED_SCAM1";
				case 1:
					return "HS4ED_PAM1";
				case 2:
					return "HS4ED_CSAM1";
				default:
			}
			break;
	}
	return "BATFM_SMSA1";
}

void func_764()//Position - 0x21FBE
{
	if (!BitTest(uLocal_186, 0))
	{
		if (Local_122.f_178 == 23)
		{
			if (!BitTest(uLocal_186, 1))
			{
				if (__LIB_12__::func_672(59) < 0 && func_768())
				{
					MISC::SET_BIT(&uLocal_186, 1);
					MISC::SET_BIT(&uLocal_186, 0);
				}
			}
			else if (__LIB_12__::func_672(59) > 0 || !func_768())
			{
				MISC::CLEAR_BIT(&uLocal_186, 1);
				MISC::SET_BIT(&uLocal_186, 0);
			}
		}
		if (Local_122.f_178 == 23 || Local_122.f_178 == 24)
		{
			if (!BitTest(uLocal_186, 2))
			{
				if (__LIB_12__::func_672(60) < 0 && func_765())
				{
					MISC::SET_BIT(&uLocal_186, 2);
					MISC::SET_BIT(&uLocal_186, 0);
				}
			}
			else if (__LIB_12__::func_672(60) > 0 || !func_765())
			{
				MISC::CLEAR_BIT(&uLocal_186, 2);
				MISC::SET_BIT(&uLocal_186, 0);
			}
		}
	}
}

int func_765()//Position - 0x2209B
{
	if (__LIB_1__::func_30(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	if (!func_438())
	{
		return 0;
	}
	if (__LIB_1__::func_808(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_1__::func_807(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_768()//Position - 0x220FB
{
	if (__LIB_12__::func_672(59) > 0)
	{
		return 0;
	}
	if (__LIB_1__::func_30(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	if (!func_438())
	{
		return 0;
	}
	if (__LIB_1__::func_628(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_1__::func_809(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

void func_771()//Position - 0x22167
{
	switch (Local_122.f_178)
	{
		case 20:
			if (__LIB_3__::func_67(0, -1, 1))
			{
				if ((!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/)) || func_841())
				{
					func_840();
					MISC::SET_BIT(&(Local_122.f_359), 4);
					func_123();
				}
				else
				{
					func_123();
				}
			}
			break;
		case 21:
			if (__LIB_3__::func_67(0, -1, 0))
			{
				if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					if (func_772())
					{
						MISC::SET_BIT(&(Local_122.f_359), 4);
						func_123();
					}
					else
					{
						return;
					}
				}
				else
				{
					func_123();
				}
			}
			break;
	}
}

int func_772()//Position - 0x2220F
{
	func_773();
	__LIB_3__::func_564(-1);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
		__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
	}
	else
	{
		__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
		__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
	}
	MISC::SET_BIT(&(Local_122.f_359), 6);
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = 4;
	return 1;
}

void func_773()//Position - 0x22277
{
	int iVar0;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("MPCT_PA_HEL" /* GXT: CHOOSE HELICOPTER */);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_3__::func_572(iVar0, __LIB_3__::func_562(func_839(iVar0)), 0, func_774(iVar0), 0, 0, 0);
		iVar0++;
	}
}

bool func_774(int iParam0)//Position - 0x222D4
{
	return func_775(func_839(iParam0), 0);
}

int func_775(int iParam0, int iParam1)//Position - 0x222E7
{
	int iVar0;
	int iVar1;
	if (func_837())
	{
		if (iParam0 == 200)
		{
			iVar1 = 0;
			while (iVar1 < 47)
			{
				iVar0 = __LIB_15__::func_135(iParam0, iVar1);
				if (iVar0 > -1)
				{
					if (BitTest(Global_2359296[__LIB_0__::func_155() /*5567*/].f_1[(iVar0 / 32)], (iVar0 % 32)))
					{
						return 1;
					}
				}
				iVar1++;
			}
		}
		else
		{
			iVar0 = __LIB_15__::func_135(iParam0, iParam1);
			if (iVar0 > -1)
			{
				return BitTest(Global_2359296[__LIB_0__::func_155() /*5567*/].f_1[(iVar0 / 32)], (iVar0 % 32));
			}
		}
	}
	return 0;
}

int func_837()//Position - 0x2844B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_1[iVar0] != 0)
		{
			iVar1 = Global_2359296[__LIB_0__::func_155() /*5567*/].f_1[iVar0];
			iVar2 = __LIB_15__::func_135(245, 0);
			if (iVar0 == (iVar2 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar2 % 32));
			}
			iVar3 = __LIB_15__::func_135(323, 0);
			if (iVar0 == (iVar3 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar3 % 32));
			}
			iVar4 = __LIB_15__::func_135(324, 0);
			if (iVar0 == (iVar4 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar4 % 32));
			}
			iVar5 = __LIB_15__::func_135(357, 0);
			if (iVar0 == (iVar5 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar5 % 32));
			}
			iVar6 = __LIB_15__::func_135(402, 0);
			if (iVar0 == (iVar6 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar6 % 32));
			}
			iVar7 = __LIB_15__::func_135(518, 0);
			if (iVar0 == (iVar7 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar7 % 32));
			}
			if (iVar1 != 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_839(int iParam0)//Position - 0x2870A
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (iParam0 >= 4)
	{
		iParam0 = 3;
	}
	switch (iParam0)
	{
		case 0:
			return 243;
		case 1:
			return 244;
		case 2:
			return 217;
		case 3:
			return 253;
		default:
	}
	return 243;
}

void func_840()//Position - 0x28759
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	__LIB_1__::func_602(0, 0);
	if (func_170())
	{
		__LIB_1__::func_767("MPCT_PA_AGH" /* GXT: EXECUTIVE ASSISTANT */);
	}
	else
	{
		__LIB_1__::func_767("MPCT_PA_AGHF" /* GXT: EXECUTIVE ASSISTANT */);
	}
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	bVar2 = true;
	if (__LIB_3__::func_39(PLAYER::PLAYER_ID()))
	{
		iVar1 = __LIB_12__::func_672(43);
		if ((iVar1 > 0 || !func_279(43)) || !func_309(43))
		{
			bVar2 = false;
		}
		if (!__LIB_8__::func_889(__LIB_1__::func_463()))
		{
			bVar2 = false;
		}
		func_512(43, iVar0, "MPCT_PA_IMP0" /* GXT: Recover vehicle from impound */, bVar2);
		__LIB_3__::func_572(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		__LIB_13__::func_722(__LIB_12__::func_845(43), 0);
	}
	else
	{
		__LIB_3__::func_572(iVar0, "MPCT_PA_IMP0" /* GXT: Recover vehicle from impound */, 0, 0, 0, 0, 0);
		__LIB_3__::func_572(iVar0, "", 1, 0, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	iVar0++;
	bVar2 = true;
	if (__LIB_3__::func_39(PLAYER::PLAYER_ID()))
	{
		iVar1 = __LIB_12__::func_672(44);
		if ((iVar1 > 0 || !func_279(44)) || !func_309(44))
		{
			bVar2 = false;
		}
		if (!__LIB_28__::func_259())
		{
			bVar2 = false;
		}
		iVar3 = func_168();
		if (iVar3 != 0)
		{
			if (iVar3 == 3)
			{
				bVar2 = false;
			}
		}
		func_512(44, iVar0, "MPCT_PA_YAH0" /* GXT: Request Luxury Helicopter */, bVar2);
		__LIB_3__::func_572(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		__LIB_13__::func_722(__LIB_12__::func_845(44), 0);
	}
	else
	{
		__LIB_3__::func_572(iVar0, "MPCT_PA_YAH0" /* GXT: Request Luxury Helicopter */, 0, 0, 0, 0, 0);
		__LIB_3__::func_572(iVar0, "", 1, 0, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	iVar0++;
	__LIB_3__::func_564(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = iVar0;
}

int func_841()//Position - 0x2894C
{
	if (__LIB_28__::func_259())
	{
		if (!iLocal_158)
		{
			iLocal_158 = 1;
			return 1;
		}
	}
	else if (!__LIB_28__::func_259())
	{
		if (iLocal_158)
		{
			iLocal_158 = 0;
			return 1;
		}
	}
	return 0;
}

void func_842()//Position - 0x28984
{
	switch (Local_122.f_178)
	{
		case 19:
			if (__LIB_3__::func_67(0, -1, 1))
			{
				if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					func_886();
					MISC::SET_BIT(&(Local_122.f_359), 4);
					func_123();
				}
				else
				{
					func_123();
				}
			}
			break;
		case 9:
			if (__LIB_3__::func_67(0, -1, 0))
			{
				if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					func_877();
					MISC::SET_BIT(&(Local_122.f_359), 4);
					func_123();
				}
				else
				{
					func_123();
				}
			}
			break;
		case 6:
			if (__LIB_3__::func_67(0, -1, 0))
			{
				if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					if (func_843())
					{
						MISC::SET_BIT(&(Local_122.f_359), 4);
						func_123();
					}
					else
					{
						return;
					}
				}
				else
				{
					func_123();
				}
			}
			break;
	}
}

int func_843()//Position - 0x28A64
{
	int iVar0;
	int iVar1;
	func_844(&uLocal_159, &iVar1, &iVar0, &uLocal_170);
	__LIB_3__::func_564(-1);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
		__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
	}
	else
	{
		__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
		__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
	}
	MISC::SET_BIT(&(Local_122.f_359), 6);
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	if (iVar1 <= 0)
	{
		func_32(4);
		return 0;
	}
	else if (iVar1 == 1)
	{
		MISC::SET_BIT(&bLocal_169, 2);
		iVar0++;
	}
	Local_122.f_181.f_2 = iVar0;
	return 1;
}

void func_844(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x28AFD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("MPCT_PERVEH1" /* GXT: SELECT VEHICLE FOR DELIVERY */);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	*uParam2 = 0;
	*uParam1 = 0;
	if (*uParam3 < 29)
	{
		if (__LIB_2__::func_771(*uParam3, -1) > 0 && !__LIB_8__::func_949(*uParam3))
		{
			iVar3 = __LIB_3__::func_2(*uParam3, -1, 1);
			if (*uParam3 == 13)
			{
				iVar3 = 11;
			}
			else if (*uParam3 == 18)
			{
				iVar3 = 10;
			}
			iVar0 = 0;
			while (iVar0 < iVar3)
			{
				(*uParam0)[iVar0] = -1;
				iVar1 = (__LIB_4__::func_982(*uParam3) + iVar0);
				__LIB_1__::func_775(iVar1, &iVar2, 1);
				func_845(uParam0, iVar0, iVar1, iVar2, *uParam3, uParam1, uParam2);
				iVar0++;
			}
		}
	}
	else
	{
		iVar4 = __LIB_1__::func_596(*uParam3);
		iVar0 = 0;
		while (iVar0 < __LIB_3__::func_546(iVar4))
		{
			iVar1 = (__LIB_1__::func_773(iVar4) + iVar0);
			__LIB_1__::func_775(iVar1, &iVar2, 1);
			if (iVar2 >= 0)
			{
				func_845(uParam0, iVar0, iVar1, iVar2, *uParam3, uParam1, uParam2);
			}
			iVar0++;
		}
	}
}

void func_845(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6)//Position - 0x28C10
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<16> Var3;
	char* sVar4;
	if ((iParam3 >= 0 && STREAMING::IS_MODEL_A_VEHICLE(__LIB_9__::func_337(iParam3))) && !__LIB_1__::func_770(iParam2))
	{
		__LIB_7__::func_73(iParam3);
		iVar0 = __LIB_9__::func_337(iParam3);
		if (__LIB_1__::func_814(iVar0) && __LIB_0__::func_113(iVar0))
		{
			if (!__LIB_2__::func_721(iVar0, 1) && !__LIB_1__::func_587(iVar0))
			{
				if (__LIB_9__::func_438(iVar0) && !__LIB_10__::func_459(iParam3))
				{
					if (!BitTest(Global_1585857[iParam3 /*142*/].f_103, 10))
					{
						iVar1 = 1;
						if (__LIB_3__::func_545(&(Global_1585857[iParam3 /*142*/])))
						{
							iVar1++;
						}
						if (__LIB_3__::func_544(__LIB_9__::func_337(iParam3), Global_1585857[iParam3 /*142*/].f_77, Global_1585857[iParam3 /*142*/].f_9[10]) && __LIB_3__::func_543(__LIB_9__::func_337(iParam3)))
						{
							iVar1++;
						}
						Var3 = { __LIB_8__::func_890(-1, iParam2, 1) };
						if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 1))
						{
							if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 2))
							{
								StringCopy(&Var2, "MPCT_PVNAMEDES" /* GXT: ~a~ ~a~ (Destroyed) */, 24);
								StringIntConCat(&Var2, iVar1, 24);
								__LIB_3__::func_572(*uParam6, &Var2, iVar1, 1, 0, 0, 0);
							}
							else
							{
								StringCopy(&Var2, "MPCT_PVNAMESCR", 24);
								StringIntConCat(&Var2, iVar1, 24);
								__LIB_3__::func_572(*uParam6, &Var2, iVar1, 1, 0, 0, 0);
							}
						}
						else if (__LIB_8__::func_889(iParam3))
						{
							StringCopy(&Var2, "MPCT_PVNAMEIMP" /* GXT: ~a~ ~a~ (Impounded) */, 24);
							StringIntConCat(&Var2, iVar1, 24);
							__LIB_3__::func_572(*uParam6, &Var2, iVar1, 1, 0, 0, 0);
						}
						else if (((((((((((((iParam4 < 29 && iParam1 >= Global_1312193[__LIB_2__::func_771(iParam4, -1) /*1951*/].f_33) && iParam4 != 13) && iParam4 != 14) && iParam4 != 15) && iParam4 != 16) && iParam4 != 17) && iParam4 != 18) && iParam4 != 19) && iParam4 != 20) && iParam4 != 21) && iParam4 != 22) && iParam4 != 25) && iParam4 != 26)
						{
							StringCopy(&Var2, "MPCT_PVNAMESTO" /* GXT: ~a~ ~a~ (Storage) */, 24);
							StringIntConCat(&Var2, iVar1, 24);
							__LIB_3__::func_572(*uParam6, &Var2, iVar1, 1, 0, 0, 0);
						}
						else
						{
							StringCopy(&Var2, "MPCT_PVNAME" /* GXT: ~a~ ~a~ */, 24);
							StringIntConCat(&Var2, iVar1, 24);
							__LIB_3__::func_572(*uParam6, &Var2, iVar1, 1, 0, 0, 0);
						}
						sVar4 = VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(__LIB_9__::func_337(iParam3));
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var3))
						{
							__LIB_13__::func_396(&Var3, 0, 0, 0);
						}
						else
						{
							__LIB_13__::func_399(sVar4, 0);
						}
						if (__LIB_3__::func_545(&(Global_1585857[iParam3 /*142*/])))
						{
							__LIB_13__::func_399("VEH_LIVERY" /* GXT: (Livery) */, 0);
						}
						if (__LIB_3__::func_544(__LIB_9__::func_337(iParam3), Global_1585857[iParam3 /*142*/].f_77, Global_1585857[iParam3 /*142*/].f_9[10]) && __LIB_3__::func_543(__LIB_9__::func_337(iParam3)))
						{
							__LIB_13__::func_399("VEH_TOPL" /* GXT: Topless */, 0);
						}
						(*uParam0)[*uParam5] = iParam3;
						*uParam5++;
						*uParam6++;
					}
				}
			}
		}
		else
		{
			__LIB_9__::func_527(iParam3, -1);
		}
	}
}

void func_877()//Position - 0x3744C
{
	var uVar0;
	if (Global_2815059.f_5977)
	{
		func_878(&uVar0, &(Local_122.f_181.f_70), "MPCT_YC_AGH" /* GXT: YACHT CAPTAIN */);
	}
	else
	{
		func_878(&uVar0, &(Local_122.f_181.f_70), "MPCT_MECHH" /* GXT: MECHANIC */);
	}
	__LIB_3__::func_564(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = uVar0;
}

void func_878(var uParam0, var uParam1, char* sParam2)//Position - 0x374E4
{
	int iVar0[29];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	int iVar7[4];
	int iVar8;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767(sParam2);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	*uParam0 = 0;
	iVar2 = 0;
	while (iVar2 < 29)
	{
		if ((((__LIB_2__::func_771(iVar2, -1) > 0 && __LIB_9__::func_293(iVar2)) && !__LIB_8__::func_949(iVar2)) && iVar2 != 11) && iVar2 != 12)
		{
			iVar5 = __LIB_3__::func_2(iVar2, -1, 1);
			if (iVar2 == 13)
			{
				iVar5 = 11;
			}
			else if (iVar2 == 18)
			{
				iVar5 = 10;
			}
			iVar1 = 0;
			while (iVar1 < iVar5)
			{
				iVar3 = (__LIB_4__::func_982(iVar2) + iVar1);
				__LIB_1__::func_775(iVar3, &iVar4, 1);
				if (iVar4 >= 0 && !__LIB_1__::func_770(iVar3))
				{
					if ((((STREAMING::IS_MODEL_A_VEHICLE(__LIB_9__::func_337(iVar4)) && !__LIB_2__::func_721(__LIB_9__::func_337(iVar4), 1)) && !__LIB_1__::func_587(__LIB_9__::func_337(iVar4))) && __LIB_9__::func_438(__LIB_9__::func_337(iVar4))) && !__LIB_10__::func_459(iVar4))
					{
						if (!BitTest(Global_1585857[iVar4 /*142*/].f_103, 10))
						{
							iVar0[iVar2] = 1;
							iVar1 = 9999;
						}
					}
				}
				iVar1++;
			}
			MemCopy(&Var6, {Global_1312193[__LIB_2__::func_771(iVar2, -1) /*1951*/].f_16}, 6);
			if (iVar2 == 13)
			{
				StringCopy(&Var6, __LIB_3__::func_551(__LIB_1__::func_817(PLAYER::PLAYER_ID())), 24);
			}
			if (iVar2 == 14)
			{
				StringCopy(&Var6, "MP_BHUB_CLUBG" /* GXT: Nightclub Service Entrance */, 24);
			}
			else if (iVar2 == 15)
			{
				StringCopy(&Var6, __LIB_3__::func_550(1), 24);
			}
			else if (iVar2 == 16)
			{
				StringCopy(&Var6, __LIB_3__::func_550(2), 24);
			}
			else if (iVar2 == 17)
			{
				StringCopy(&Var6, __LIB_3__::func_550(3), 24);
			}
			if (iVar2 == 18)
			{
				StringCopy(&Var6, __LIB_3__::func_549(1), 24);
			}
			else if (iVar2 == 19)
			{
				StringCopy(&Var6, __LIB_3__::func_549(2), 24);
			}
			else if (iVar2 == 20)
			{
				StringCopy(&Var6, __LIB_3__::func_549(3), 24);
			}
			else if (iVar2 == 21)
			{
				StringCopy(&Var6, "CASINO_GARNAME" /* GXT: Casino Penthouse Garage */, 24);
			}
			else if (iVar2 == 22)
			{
				StringCopy(&Var6, "ARCADE_GARNAME" /* GXT: Arcade Garage */, 24);
			}
			else if (iVar2 == 25)
			{
				StringCopy(&Var6, "AUT_SHP_GAR" /* GXT: Auto Shop Storage */, 24);
			}
			else if (iVar2 == 26)
			{
				StringCopy(&Var6, "FIXER_GARNAME" /* GXT: Agency Garage */, 24);
			}
			StringConCat(&Var6, "S", 24);
			__LIB_3__::func_572(*uParam0, &Var6, 0, iVar0[iVar2], 0, 0, 0);
			(*uParam1)[*uParam0] = iVar2;
			*uParam0++;
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar8 = iVar2;
		iVar1 = 0;
		while (iVar1 < __LIB_3__::func_546(iVar8))
		{
			iVar3 = (__LIB_1__::func_773(iVar8) + iVar1);
			__LIB_1__::func_775(iVar3, &iVar4, 1);
			if (iVar4 >= 0 && !__LIB_1__::func_770(iVar3))
			{
				if ((((STREAMING::IS_MODEL_A_VEHICLE(__LIB_9__::func_337(iVar4)) && !__LIB_2__::func_721(__LIB_9__::func_337(iVar4), 1)) && !__LIB_1__::func_587(__LIB_9__::func_337(iVar4))) && __LIB_9__::func_438(__LIB_9__::func_337(iVar4))) && !__LIB_10__::func_459(iVar4))
				{
					if (!BitTest(Global_1585857[iVar4 /*142*/].f_103, 10))
					{
						iVar7[iVar2] = 1;
						iVar1 = 9999;
					}
				}
			}
			iVar1++;
		}
		if ((iVar7[iVar2] && iVar8 != 0) && iVar8 != 1)
		{
			__LIB_3__::func_572(*uParam0, __LIB_3__::func_548(iVar8), 0, 1, 0, 0, 0);
			(*uParam1)[*uParam0] = __LIB_3__::func_547(iVar8);
			*uParam0++;
		}
		iVar2++;
	}
}

void func_886()//Position - 0x37A18
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("MPCT_YC_AGH" /* GXT: YACHT CAPTAIN */);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	bVar2 = true;
	if (__LIB_1__::func_781(PLAYER::PLAYER_ID()))
	{
		iVar3 = __LIB_1__::func_780(PLAYER::PLAYER_ID());
		iVar1 = __LIB_12__::func_672(40);
		if ((((((((iVar1 > 0 || !func_279(40)) || !func_309(40)) || func_231(0)) || __LIB_1__::func_779(0, 1024)) || func_240(0)) || func_239(PLAYER::PLAYER_ID(), 0)) || __LIB_10__::func_724(PLAYER::PLAYER_ID(), iVar3, 100f)) || Global_262145.f_13115 /* Tunable: YACHT_DISABLE_PHONE_HELI_DELIVERY */)
		{
			bVar2 = false;
		}
		func_512(40, iVar0, "MPCT_YC_YAH0" /* GXT: Request Helicopter */, bVar2);
		__LIB_3__::func_572(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		__LIB_13__::func_722(__LIB_12__::func_845(40), 0);
	}
	else
	{
		__LIB_3__::func_572(iVar0, "MPCT_YC_YAH0" /* GXT: Request Helicopter */, 0, 0, 0, 0, 0);
		__LIB_3__::func_572(iVar0, "", 1, 0, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	iVar0++;
	if (__LIB_1__::func_781(PLAYER::PLAYER_ID()))
	{
		bVar2 = true;
		iVar4 = __LIB_1__::func_780(PLAYER::PLAYER_ID());
		iVar1 = __LIB_12__::func_672(41);
		if ((((((((iVar1 > 0 || !func_279(41)) || !func_309(41)) || func_231(1)) || __LIB_1__::func_779(1, 1024)) || func_240(1)) || func_239(PLAYER::PLAYER_ID(), 1)) || __LIB_10__::func_724(PLAYER::PLAYER_ID(), iVar4, 100f)) || Global_262145.f_13114 /* Tunable: YACHT_DISABLE_PHONE_BOAT_SHORE_DELIVERY */)
		{
			bVar2 = false;
		}
		func_512(41, iVar0, "MPCT_YC_YAB0" /* GXT: Request Boat */, bVar2);
		__LIB_3__::func_572(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		__LIB_13__::func_722(__LIB_12__::func_845(41), 0);
	}
	else
	{
		__LIB_3__::func_572(iVar0, "MPCT_YC_YAB0" /* GXT: Request Boat */, 0, 0, 0, 0, 0);
		__LIB_3__::func_572(iVar0, "", 1, 0, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	iVar0++;
	if (__LIB_1__::func_781(PLAYER::PLAYER_ID()))
	{
		iVar1 = __LIB_12__::func_672(42);
		func_187(&bVar6, &bVar5);
		iVar7 = __LIB_1__::func_780(PLAYER::PLAYER_ID());
		bVar2 = true;
		if ((((((((iVar1 > 0 || !func_279(42)) || !func_309(42)) || func_186(PLAYER::PLAYER_ID())) || func_177(1133903872)) || !bVar6) || !bVar5) || !__LIB_10__::func_724(PLAYER::PLAYER_ID(), iVar7, 100f)) || Global_262145.f_13113 /* Tunable: YACHT_DISABLE_PHONE_PV_SHORE_DELIVERY */)
		{
			bVar2 = false;
		}
		func_512(42, iVar0, "MPCT_YC_YAP0" /* GXT: Request Personal Vehicle */, bVar2);
		iVar8 = __LIB_12__::func_845(42);
		if (iVar8 <= 0)
		{
			__LIB_3__::func_572(iVar0, "PEG_FREE" /* GXT: FREE */, 0, bVar2, 0, 0, 0);
		}
		else
		{
			__LIB_3__::func_572(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
			__LIB_13__::func_722(iVar8, 0);
		}
	}
	else
	{
		__LIB_3__::func_572(iVar0, "MPCT_YC_YAP0" /* GXT: Request Personal Vehicle */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(iVar0, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	iVar0++;
	if (Global_262145.f_29251 /* Tunable: 444734026 */)
	{
		if (__LIB_1__::func_781(PLAYER::PLAYER_ID()))
		{
			iVar1 = __LIB_12__::func_672(64);
			bVar2 = true;
			if (((iVar1 > 0 || !func_279(64)) || !func_309(64)) || Global_262145.f_29259 /* Tunable: -2046990177 */)
			{
				bVar2 = false;
			}
			func_512(64, iVar0, "YACHT_REQUEST" /* GXT: Request Job */, bVar2);
			if (__LIB_12__::func_845(64) > 0)
			{
				__LIB_3__::func_572(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
				__LIB_13__::func_722(__LIB_12__::func_845(64), 0);
			}
		}
		else
		{
			__LIB_3__::func_572(iVar0, "YACHT_REQUEST" /* GXT: Request Job */, 0, 0, 0, 0, 0);
			__LIB_3__::func_572(iVar0, "", 1, 0, 0, 0, 0);
			__LIB_14__::func_431(15, 0);
		}
		iVar0++;
	}
	__LIB_3__::func_564(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = iVar0;
}

void func_887()//Position - 0x37E48
{
	int iVar0;
	switch (Local_122.f_178)
	{
		case 18:
			if (__LIB_3__::func_67(0, -1, 0))
			{
				if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					func_899();
					MISC::SET_BIT(&(Local_122.f_359), 4);
					func_123();
				}
				else
				{
					func_123();
					if (BitTest(Local_122.f_359, 18))
					{
						if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(39), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
						{
							iVar0 = func_892(joaat("SERVICE_SPEND_PEGASUS_DELIVERY"), __LIB_12__::func_845(39), 0, 0);
							if (iVar0 == 1)
							{
								MISC::CLEAR_BIT(&(Local_122.f_359), 17);
								MISC::CLEAR_BIT(&(Local_122.f_359), 18);
								MISC::SET_BIT(&(Global_2703735.f_3673), 7);
								MISC::SET_BIT(&(Global_2703735.f_3673), 0);
								MISC::SET_BIT(&(Global_2703735.f_3673), 12);
							}
							else if (iVar0 == 0)
							{
								MISC::CLEAR_BIT(&(Local_122.f_359), 17);
								MISC::CLEAR_BIT(&(Local_122.f_359), 18);
								func_92(1, 0);
							}
							else
							{
								return;
							}
						}
						else
						{
							func_1(Local_122.f_1, "BACALAU", "BACAL_UNABLE", &Local_166, 1);
							func_92(1, 0);
						}
					}
					if (BitTest(Global_2703735.f_3673, 0))
					{
						if (BitTest(Global_2703735.f_3673, 1))
						{
							if (BitTest(Global_2703735.f_3673, 2))
							{
								func_1(Local_122.f_1, "BACALAU", "BACAL_ACCEPT", &Local_166, 1);
								func_32(4);
							}
							else
							{
								if (__LIB_0__::func_112())
								{
									func_889(__LIB_12__::func_845(39), 5, 2, 1);
								}
								func_1(Local_122.f_1, "BACALAU", "BACAL_UNABLE", &Local_166, 1);
								func_92(1, 0);
							}
							__LIB_12__::func_773();
						}
					}
				}
			}
			break;
	}
}

void func_889(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3806E
{
	struct<4> Var0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	StringCopy(&Var0, __LIB_1__::func_397(iParam1), 16);
	StringCopy(&Var1, __LIB_1__::func_396(iParam2), 32);
	switch (iParam1)
	{
		case 0:
			iVar2 = joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS");
			break;
		case 1:
			iVar2 = joaat("SERVICE_EARN_REFUND_BACKUP_LOST");
			break;
		case 2:
			iVar2 = joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES");
			break;
		case 3:
			iVar2 = joaat("SERVICE_EARN_REFUND_HIRE_MUGGER");
			break;
		case 4:
			iVar2 = joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY");
			break;
		case 5:
			iVar2 = joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF");
			break;
		case 6:
			iVar2 = joaat("SERVICE_EARN_REFUND_HELI_PICKUP");
			break;
		case 7:
			iVar2 = joaat("SERVICE_EARN_REFUND_BOAT_PICKUP");
			break;
		case 8:
			iVar2 = joaat("SERVICE_EARN_REFUND_CLEAR_WANTED");
			break;
		case 9:
			iVar2 = joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD");
			break;
		case 10:
			iVar2 = joaat("SERVICE_EARN_REFUND_CHALLENGE");
			break;
		case 11:
			iVar2 = joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB");
			break;
		case 12:
			iVar2 = joaat("SERVICE_EARN_REFUND_LOTTERY");
			break;
		case 13:
			iVar2 = joaat("SERVICE_EARN_REFUNDAPPEARANCE");
			break;
		case 14:
			iVar2 = joaat("SERVICE_EARN_REFUNDAMMODROP");
			break;
		case 15:
			iVar2 = joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL");
			break;
		case 16:
			iVar2 = joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO");
			break;
		case 17:
			iVar2 = joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY");
			break;
	}
	if (__LIB_0__::func_112())
	{
		func_99(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4534105[iVar3 /*85*/].f_14.f_40 = { Var0 };
		Global_4534105[iVar3 /*85*/].f_14.f_44 = { Var1 };
	}
	else
	{
		MONEY::NETWORK_REFUND_CASH(iParam0, &Var0, &Var1, bParam3);
	}
}

int func_892(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x3837F
{
	if (iParam1 < 0)
	{
		return 1;
	}
	if (__LIB_0__::func_112())
	{
		if (func_897(iParam0, iParam1))
		{
			if (__LIB_2__::func_834(iLocal_140) == 2)
			{
				if (iParam0 != joaat("SERVICE_SPEND_LOCATE_VEHICLE"))
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(iLocal_140));
					func_894(iParam0, iParam1, iParam3);
					__LIB_1__::func_34(iLocal_140);
				}
				return 1;
			}
			else
			{
				if (bParam2)
				{
					__LIB_0__::func_954(__LIB_0__::func_943(1, 1), Local_122.f_360, Local_122.f_358);
				}
				if (iParam0 != joaat("SERVICE_SPEND_LOCATE_VEHICLE"))
				{
					__LIB_1__::func_34(iLocal_140);
				}
				return 0;
			}
		}
	}
	else
	{
		func_894(iParam0, iParam1, iParam3);
		return 1;
	}
	return -1;
}

void func_894(int iParam0, int iParam1, int iParam2)//Position - 0x38454
{
	struct<13> Var0;
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
			MONEY::NETWORK_SPENT_NO_COPS(iParam1, false, true, joaat("char_lester"));
			break;
		case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
			MONEY::NETWORK_SPENT_HIRE_MERCENARY(iParam1, false, true, joaat("char_mp_merryweather"));
			break;
		case joaat("SERVICE_SPEND_BULL_SHARK"):
			MONEY::NETWORK_SPENT_BULL_SHARK(iParam1, false, true, joaat("char_mp_brucie"));
			break;
		case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
			MONEY::NETWORK_SPENT_BUY_OFFTHERADAR(iParam1, false, true, joaat("char_lester"));
			break;
		case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
			Var0 = { __LIB_0__::func_819(PLAYER::PLAYER_ID()) };
			MONEY::NETWORK_SPENT_BUY_WANTEDLEVEL(iParam1, &Var0, false, true, joaat("char_lester"));
			break;
		case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
			MONEY::NETWORK_SPENT_BUY_REVEAL_PLAYERS(iParam1, false, true, joaat("char_lester"));
			break;
		case joaat("SERVICE_SPEND_AMMO_DROP"):
			MONEY::NETWORK_SPENT_AMMO_DROP(iParam1, false, true, joaat("char_mp_merryweather"));
			break;
		case joaat("SERVICE_SPEND_BOAT_PICKUP"):
			MONEY::NETWORK_SPENT_BOAT_PICKUP(iParam1, false, true, joaat("char_mp_merryweather"));
			break;
		case joaat("SERVICE_SPEND_BACKUP_HELI"):
			MONEY::NETWORK_BUY_HELI_STRIKE(iParam1, false, true, joaat("char_mp_merryweather"));
			break;
		case joaat("SERVICE_SPEND_AIRSTRIKE"):
			MONEY::NETWORK_BUY_AIRSTRIKE(iParam1, false, true, joaat("char_mp_merryweather"));
			break;
		case joaat("SERVICE_SPEND_HELI_PICKUP"):
			MONEY::NETWORK_SPENT_HELI_PICKUP(iParam1, false, true, joaat("char_mp_merryweather"));
			break;
		case joaat("SERVICE_SPEND_HIRE_MUGGER"):
			MONEY::NETWORK_SPENT_HIRE_MUGGER(iParam1, false, true, joaat("char_lamar"));
			break;
		case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
			MONEY::NETWORK_BUY_ITEM(iParam1, Global_2703735.f_3674, 10, -1, false, "PEGASUS", 0, 0, 0, true);
			break;
		case joaat("SERVICE_SPEND_YACHT_HELI"):
			MONEY::NETWORK_SPENT_HELI_PICKUP(iParam1, false, true, 0);
			break;
		case joaat("SERVICE_SPEND_YACHT_BOAT"):
			MONEY::NETWORK_SPENT_BOAT_PICKUP(iParam1, false, true, 0);
			break;
		case joaat("SERVICE_SPEND_PA_SERVICE_IMPOUND"):
			MONEY::NETWORK_SPENT_PA_SERVICE_IMPOUND(iParam1, 0, 1);
			break;
		case joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"):
			MONEY::NETWORK_SPENT_PA_HELI_PICKUP(iParam1, iParam2, 0, 1);
			break;
		case joaat("SERVICE_SPEND_REQUEST_SUPPLY"):
			MONEY::NETWORK_SPEND_SUPPLY(iParam1, 0, 1, iParam2);
			break;
		case joaat("SERVICE_SPEND_REQUEST_SOURCE_MOTORCYCLE"):
			MONEY::NETWORK_SPEND_SOURCE_BIKE(iParam1, 0, 1, iParam2);
			break;
		case joaat("SERVICE_SPEND_REQUEST_OUT_OF_SIGHT"):
			MONEY::NETWORK_SPEND_HIDDEN(iParam1, 0, 1, iParam2);
			break;
	}
}

int func_897(int iParam0, int iParam1)//Position - 0x3866D
{
	if (!BitTest(Local_122.f_359, 17))
	{
		func_100(&iLocal_140, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, 4, 3);
		MISC::SET_BIT(&(Local_122.f_359), 17);
	}
	else if (__LIB_2__::func_835(iLocal_140))
	{
		return 1;
	}
	return 0;
}

void func_899()//Position - 0x386E6
{
	int iVar0;
	int iVar1;
	bool bVar2;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("MPCT_GB_AGH" /* GXT: SECUROSERV */);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	if (__LIB_2__::func_104(74, 0, 0))
	{
		bVar2 = true;
		iVar1 = __LIB_12__::func_672(39);
		if ((iVar1 > 0 || !func_279(39)) || !func_309(39))
		{
			bVar2 = false;
		}
		func_512(39, iVar0, "MPCT_GB_AG0" /* GXT: Request Turreted Limo */, bVar2);
		__LIB_3__::func_572(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		__LIB_13__::func_722(__LIB_12__::func_845(39), 0);
	}
	else
	{
		__LIB_3__::func_572(iVar0, "MPCT_GB_AG0" /* GXT: Request Turreted Limo */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(iVar0, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	iVar0++;
	__LIB_3__::func_564(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = iVar0 + 1;
}

void func_900()//Position - 0x3880B
{
	if (__LIB_3__::func_67(0, -1, 0))
	{
		if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			func_901();
			MISC::SET_BIT(&(Local_122.f_359), 4);
			func_123();
		}
		else
		{
			func_123();
		}
	}
}

void func_901()//Position - 0x3884C
{
	int iVar0;
	struct<2> Var1;
	__LIB_1__::func_602(0, 0);
	StringCopy(&Var1, "SCLUB_NM_", 16);
	StringIntConCat(&Var1, iLocal_168, 16);
	__LIB_1__::func_767(&Var1);
	__LIB_1__::func_766(1, 0, 0, 0, 0);
	__LIB_1__::func_765(1, 1, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	__LIB_3__::func_572(iVar0, "MP_STRIP_IN" /* GXT: Invite to Your Apartment */, 0, 1, 0, 0, 0);
	iVar0++;
	__LIB_3__::func_572(iVar0, "BB_LC_EXIT" /* GXT: Exit */, 0, 1, 0, 0, 0);
	iVar0++;
	Local_122.f_181.f_2 = iVar0;
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 0);
	Local_122.f_181.f_3[1] = 0;
	Local_122.f_181.f_36[1] = 0;
	__LIB_3__::func_564(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
}

void func_902()//Position - 0x3892B
{
	switch (Local_122.f_178)
	{
		case 15:
			if (__LIB_3__::func_67(0, -1, 0))
			{
				if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					func_903();
					MISC::SET_BIT(&(Local_122.f_359), 4);
					func_123();
				}
				else
				{
					func_123();
				}
			}
			break;
	}
}

void func_903()//Position - 0x3897E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("MPCT_RON" /* GXT: RON */);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	if (__LIB_2__::func_104(106, 0, 0))
	{
		iVar1 = __LIB_12__::func_672(21);
		bVar2 = true;
		if (iVar1 > 0)
		{
			bVar2 = false;
		}
		func_512(21, iVar0, "GC_MENU48" /* GXT: Request Job */, bVar2);
		if (__LIB_12__::func_845(21) > 0)
		{
			__LIB_3__::func_572(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
			__LIB_13__::func_722(__LIB_12__::func_845(21), 0);
		}
	}
	else
	{
		__LIB_3__::func_572(iVar0, "GC_MENU48" /* GXT: Request Job */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(iVar0, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	iVar0++;
	__LIB_3__::func_564(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = iVar0 + 1;
}

void func_904()//Position - 0x38A92
{
	switch (Local_122.f_178)
	{
		case 14:
			if (__LIB_3__::func_67(0, -1, 0))
			{
				if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					func_905();
					MISC::SET_BIT(&(Local_122.f_359), 4);
					func_123();
				}
				else
				{
					func_123();
				}
			}
			break;
	}
}

void func_905()//Position - 0x38AE5
{
	int iVar0;
	int iVar1;
	bool bVar2;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("MPCT_GERALD" /* GXT: GERALD */);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	if (__LIB_2__::func_104(97, 0, 0))
	{
		iVar1 = __LIB_12__::func_672(17);
		bVar2 = true;
		if (iVar1 > 0)
		{
			bVar2 = false;
		}
		func_512(17, iVar0, "GC_MENU48" /* GXT: Request Job */, bVar2);
		if (__LIB_12__::func_845(17) > 0)
		{
			__LIB_3__::func_572(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
			__LIB_13__::func_722(__LIB_12__::func_845(17), 0);
		}
	}
	else
	{
		__LIB_3__::func_572(iVar0, "GC_MENU48" /* GXT: Request Job */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(iVar0, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	iVar0++;
	__LIB_3__::func_564(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = iVar0 + 1;
}

void func_906()//Position - 0x38BF9
{
	switch (Local_122.f_178)
	{
		case 13:
			if (__LIB_3__::func_67(0, -1, 0))
			{
				if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					func_907();
					MISC::SET_BIT(&(Local_122.f_359), 4);
					func_123();
				}
				else
				{
					func_123();
				}
			}
			break;
	}
}

void func_907()//Position - 0x38C4C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("MPCT_MARTIN" /* GXT: MARTIN */);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	if (__LIB_2__::func_104(100, 0, 0))
	{
		iVar1 = __LIB_12__::func_672(19);
		bVar2 = true;
		if (iVar1 > 0)
		{
			bVar2 = false;
		}
		func_512(19, iVar0, "GC_MENU48" /* GXT: Request Job */, bVar2);
		if (__LIB_12__::func_845(19) > 0)
		{
			__LIB_3__::func_572(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
			__LIB_13__::func_722(__LIB_12__::func_845(19), 0);
		}
	}
	else
	{
		__LIB_3__::func_572(iVar0, "GC_MENU48" /* GXT: Request Job */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(iVar0, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	iVar0++;
	__LIB_3__::func_564(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = iVar0 + 1;
}

void func_908()//Position - 0x38D60
{
	switch (Local_122.f_178)
	{
		case 12:
			if (__LIB_3__::func_67(0, -1, 0))
			{
				if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					func_909();
					MISC::SET_BIT(&(Local_122.f_359), 4);
					func_123();
				}
				else
				{
					func_123();
				}
			}
			break;
	}
}

void func_909()//Position - 0x38DB3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("MPCT_SIMEON" /* GXT: SIMEON */);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	if (__LIB_2__::func_104(99, 0, 0))
	{
		iVar1 = __LIB_12__::func_672(18);
		bVar2 = true;
		if (iVar1 > 0)
		{
			bVar2 = false;
		}
		func_512(18, iVar0, "GC_MENU48" /* GXT: Request Job */, bVar2);
		if (__LIB_12__::func_845(18) > 0)
		{
			__LIB_3__::func_572(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
			__LIB_13__::func_722(__LIB_12__::func_845(18), 0);
		}
	}
	else
	{
		__LIB_3__::func_572(iVar0, "GC_MENU48" /* GXT: Request Job */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(iVar0, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	iVar0++;
	__LIB_3__::func_564(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = iVar0 + 1;
}

void func_910()//Position - 0x38EC7
{
	if (iLocal_137 == -2)
	{
		if (__LIB_3__::func_67(0, -1, 0))
		{
			if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
			{
				func_943();
				MISC::SET_BIT(&(Local_122.f_359), 4);
				func_123();
			}
			else
			{
				func_123();
			}
		}
	}
	else if (bLocal_136)
	{
		if (__LIB_0__::func_169(91, 3) == 1)
		{
			if (__LIB_3__::func_67(0, -1, 0))
			{
				if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					func_943();
					MISC::SET_BIT(&(Local_122.f_359), 4);
					func_123();
				}
				else
				{
					func_123();
				}
			}
		}
		else
		{
			func_32(4);
		}
	}
	else
	{
		func_929();
		if (iLocal_205 == 0)
		{
			if (Global_1585094)
			{
				if (iLocal_152 == 0)
				{
					if (__LIB_11__::func_704(&iLocal_152, __LIB_1__::func_463()))
					{
					}
				}
				else if (iLocal_152 == 4 || iLocal_152 == 2)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("GAR_REP_WARNH" /* GXT: Confirm */, "PERV_INS_REP1" /* GXT: Make Insurance claim? */, iLocal_153, "PERV_INS_REP2" /* GXT: Making a claim on this vehicle will cause your current Personal Vehicle (and any purchased upgrades) to be lost. */, false, -1, 0, 0, true, 0);
					iLocal_153 = 18;
				}
				else if ((Global_1585094.f_2 > 0 && MONEY::NETWORK_CAN_SPEND_MONEY(Global_1585094.f_2, false, true, false, -1, 0)) || Global_1585094.f_2 <= 0)
				{
					if (__LIB_0__::func_112())
					{
						iLocal_205++;
					}
					else
					{
						func_926(1);
					}
				}
			}
			else if (__LIB_0__::func_169(91, 3) == 1)
			{
				if (__LIB_3__::func_67(0, -1, 0))
				{
					if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
					{
						func_911();
						MISC::SET_BIT(&(Local_122.f_359), 4);
						func_123();
					}
					else
					{
						func_123();
					}
				}
			}
			else
			{
				func_32(4);
			}
		}
	}
}

void func_911()//Position - 0x3905A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("MPCT_INSH" /* GXT: MAKE A CLAIM */);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	iLocal_134 = 0;
	iLocal_135 = 0;
	if (func_924(0) && (!__LIB_26__::func_657(0, 0, 0, -1, 1) || Global_1641029))
	{
		func_914(0, &iVar0);
		bVar5 = true;
	}
	if (iLocal_137 != -1)
	{
		if (iLocal_137 < 29)
		{
			if (__LIB_2__::func_771(iLocal_137, -1) > 0 && !__LIB_8__::func_949(iLocal_137))
			{
				iVar4 = __LIB_3__::func_2(iLocal_137, -1, 1);
				if (iLocal_137 == 13)
				{
					iVar4 = 11;
				}
				else if (iLocal_137 == 18)
				{
					iVar4 = 10;
				}
				iVar1 = 0;
				while (iVar1 < iVar4)
				{
					iVar2 = (__LIB_4__::func_982(iLocal_137) + iVar1);
					__LIB_1__::func_775(iVar2, &iVar3, 1);
					if (iVar3 > 0 || (!bVar5 && iVar3 == 0))
					{
						func_914(iVar3, &iVar0);
					}
					iVar1++;
				}
			}
		}
		else
		{
			iVar6 = __LIB_1__::func_596(iLocal_137);
			iVar1 = 0;
			while (iVar1 < __LIB_3__::func_546(iVar6))
			{
				iVar2 = (__LIB_1__::func_773(iVar6) + iVar1);
				__LIB_1__::func_775(iVar2, &iVar3, 1);
				if (iVar3 > 0 || (!bVar5 && iVar3 == 0))
				{
					func_914(iVar3, &iVar0);
				}
				iVar1++;
			}
		}
	}
	if (iLocal_135 > 1)
	{
		func_913(&iVar0);
	}
	if (iVar0 <= 0)
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
		func_32(4);
		return;
	}
	Local_122.f_181.f_2 = iVar0;
	if (Local_122.f_181.f_69 >= Local_122.f_181.f_2)
	{
		Local_122.f_181.f_69 = 1;
	}
	else if (Local_122.f_181.f_69 < 0)
	{
		Local_122.f_181.f_69 = 0;
	}
	iLocal_133 = func_912(iLocal_151[Local_122.f_181.f_69]);
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 0);
	Local_122.f_181.f_3[1] = 0;
	Local_122.f_181.f_36[1] = 0;
	__LIB_3__::func_564(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	bLocal_136 = false;
}

int func_912(int iParam0)//Position - 0x3928A
{
	return Global_1585857[iParam0 /*142*/].f_105;
}

void func_913(var uParam0)//Position - 0x3929C
{
	__LIB_3__::func_572(*uParam0, "MPCT_INSALL" /* GXT: Claim All */, 0, 1, 0, 0, 0);
	if (iLocal_134 > 0)
	{
		__LIB_3__::func_572(*uParam0, "MPCT_INSCOST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
		__LIB_13__::func_722(iLocal_134, 0);
	}
	else
	{
		__LIB_3__::func_572(*uParam0, "MPCT_NOCOST" /* GXT: NO CHARGE */, 0, 1, 0, 0, 0);
	}
	*uParam0++;
}

void func_914(int iParam0, var uParam1)//Position - 0x392EE
{
	int iVar0;
	struct<5> Var1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<16> Var5;
	if (func_924(iParam0))
	{
		__LIB_1__::func_660(iParam0, &iVar2);
		iVar3 = 1;
		if (__LIB_3__::func_545(&(Global_1585857[iParam0 /*142*/])))
		{
			iVar3++;
		}
		if (__LIB_3__::func_544(__LIB_9__::func_337(iParam0), Global_1585857[iParam0 /*142*/].f_77, Global_1585857[iParam0 /*142*/].f_9[10]) && __LIB_3__::func_543(__LIB_9__::func_337(iParam0)))
		{
			iVar3++;
		}
		Var5 = { __LIB_8__::func_890(-1, iVar2, 1) };
		StringCopy(&Var4, "MPCT_INSVEH" /* GXT: ~a~ ~a~ */, 24);
		StringIntConCat(&Var4, iVar3, 24);
		__LIB_3__::func_572(*uParam1, &Var4, iVar3, 1, 0, 0, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var5))
		{
			__LIB_13__::func_396(&Var5, 0, 0, 0);
		}
		else
		{
			__LIB_13__::func_399(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(__LIB_9__::func_337(iParam0)), 0);
		}
		if (__LIB_3__::func_545(&(Global_1585857[iParam0 /*142*/])))
		{
			__LIB_13__::func_399("VEH_LIVERY" /* GXT: (Livery) */, 0);
		}
		if (__LIB_3__::func_544(__LIB_9__::func_337(iParam0), Global_1585857[iParam0 /*142*/].f_77, Global_1585857[iParam0 /*142*/].f_9[10]) && __LIB_3__::func_543(__LIB_9__::func_337(iParam0)))
		{
			__LIB_13__::func_399("VEH_TOPL" /* GXT: Topless */, 0);
		}
		__LIB_3__::func_563(&Var1, Global_1585857[iParam0 /*142*/].f_66, 0, -1);
		if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 16))
		{
			iVar0 = Var1.f_4;
			iLocal_132 = iVar0;
			iLocal_133 = func_912(iParam0);
			if (__LIB_1__::func_587(Global_1585857[iParam0 /*142*/].f_66))
			{
				iVar0 = Global_262145.f_21982 /* Tunable: 843919183 */;
			}
		}
		else
		{
			iLocal_132 = 0;
			iLocal_133 = 0;
		}
		if (func_912(iParam0) > 0)
		{
			iVar0 = (iVar0 - func_912(iParam0));
		}
		if (iVar0 > 0)
		{
			__LIB_3__::func_572(*uParam1, "MPCT_INSCOST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
			__LIB_13__::func_722(iVar0, 0);
			iLocal_134 = (iLocal_134 + iVar0);
		}
		else
		{
			__LIB_3__::func_572(*uParam1, "MPCT_NOCOST" /* GXT: NO CHARGE */, 0, 1, 0, 0, 0);
		}
		iLocal_135++;
		iLocal_151[*uParam1] = iParam0;
		*uParam1++;
	}
}

int func_924(int iParam0)//Position - 0x41D3E
{
	if (STREAMING::IS_MODEL_A_VEHICLE(__LIB_9__::func_337(iParam0)))
	{
		__LIB_7__::func_73(iParam0);
		if (__LIB_1__::func_814(__LIB_9__::func_337(iParam0)))
		{
			if (__LIB_28__::func_635(iParam0))
			{
				return 1;
			}
		}
		else
		{
			__LIB_9__::func_527(iParam0, -1);
		}
	}
	return 0;
}

void func_926(bool bParam0)//Position - 0x41DBD
{
	int iVar0;
	__LIB_0__::func_151("CUST_GAR_VEH_L8" /* GXT: Your replacement vehicle can be found at the Mors Mutual depot. */, -1);
	if (Global_1585094.f_2 > 0 && !Global_262145.f_141 /* Tunable: DISABLE_INSURANCE_PAYOUT */)
	{
		if (bParam0)
		{
			if (__LIB_0__::func_112())
			{
				func_99(joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"), Global_1585094.f_2, &iVar0, 1, 1, 0);
				Global_4534105[iVar0 /*85*/] = Global_1585857[Global_1585094.f_3 /*142*/].f_66;
			}
			else
			{
				MONEY::NETWORK_BUY_ITEM(Global_1585094.f_2, Global_1585857[Global_1585094.f_3 /*142*/].f_66, 9, 1, true, 0, 0, 0, 0, true);
			}
		}
		else
		{
			MONEY::NETWORK_BUY_ITEM(Global_1585094.f_2, Global_1585857[Global_1585094.f_3 /*142*/].f_66, 9, 1, true, 0, 0, 0, 0, true);
		}
	}
	func_1(Local_122.f_1, "CT_AUD", "MPCT_MoGen1", &Local_166, 0);
	Global_1585094.f_1 = 1;
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	func_32(4);
	__LIB_1__::func_333(-205702236, 3, 0);
}

void func_929()//Position - 0x41EFA
{
	bool bVar0;
	bool bVar1;
	switch (iLocal_201)
	{
		case 1:
			if (iLocal_134 > 0)
			{
				if (func_100(&iLocal_202, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"), iLocal_134, 4, 3))
				{
					iLocal_201++;
				}
				else
				{
					__LIB_1__::func_34(iLocal_202);
					iLocal_201 = 0;
				}
			}
			else
			{
				func_941(0);
				iLocal_201 = 0;
			}
			break;
		case 2:
			if (__LIB_2__::func_835(iLocal_202))
			{
				if (__LIB_2__::func_834(iLocal_202) == 2)
				{
					func_941(0);
					__LIB_1__::func_34(iLocal_202);
					iLocal_201 = 0;
				}
				else
				{
					__LIB_1__::func_34(iLocal_202);
					iLocal_201 = 0;
				}
			}
			break;
	}
	bVar0 = false;
	bVar1 = true;
	if (__LIB_1__::func_599(0) || Global_1922044)
	{
		if (__LIB_14__::func_504(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1))
		{
			bVar1 = false;
		}
	}
	if (__LIB_2__::func_771(iLocal_137, -1) == 116)
	{
		bVar0 = true;
		bVar1 = false;
	}
	if (iLocal_137 >= 1000 && __LIB_1__::func_596(iLocal_137) == 1)
	{
		bVar0 = true;
		bVar1 = false;
	}
	if (Global_1585094.f_3 >= 0 && Global_1585094.f_3 < 363)
	{
		if (Global_1585857[Global_1585094.f_3 /*142*/].f_66 == joaat("oppressor2") && __LIB_12__::func_673())
		{
			bVar0 = true;
			bVar1 = false;
		}
	}
	switch (iLocal_203)
	{
		case 1:
			if (Global_1585094.f_2 > 0)
			{
				if (func_100(&iLocal_204, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"), Global_1585094.f_2, 4, 3))
				{
					iLocal_203++;
				}
				else
				{
					__LIB_1__::func_34(iLocal_204);
					iLocal_203 = 0;
				}
			}
			else
			{
				if (__LIB_0__::func_334(PLAYER::PLAYER_ID()))
				{
					bVar0 = true;
					bVar1 = false;
				}
				func_937(Global_1585094.f_2, Global_1585094.f_3, bVar0, bVar1, 0);
				iLocal_203 = 0;
			}
			break;
		case 2:
			if (__LIB_2__::func_835(iLocal_204))
			{
				if (__LIB_2__::func_834(iLocal_204) == 2)
				{
					if (!__LIB_26__::func_657(Global_1585094.f_3, 0, 0, -1, 0))
					{
						bVar0 = true;
					}
					if (__LIB_0__::func_112())
					{
						NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(iLocal_204));
					}
					if (__LIB_0__::func_334(PLAYER::PLAYER_ID()))
					{
						bVar0 = true;
						bVar1 = false;
					}
					func_937(Global_1585094.f_2, Global_1585094.f_3, bVar0, bVar1, 0);
					__LIB_1__::func_34(iLocal_204);
					iLocal_203 = 0;
				}
				else
				{
					__LIB_1__::func_34(iLocal_204);
					iLocal_203 = 0;
				}
			}
			break;
		case 11:
			if (Global_1585094.f_2 > 0)
			{
				if (func_100(&iLocal_204, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"), Global_1585094.f_2, 4, 3))
				{
					iLocal_203++;
				}
				else
				{
					__LIB_1__::func_34(iLocal_204);
					iLocal_203 = 0;
				}
			}
			else
			{
				func_930(Global_1585094.f_2, Global_1585094.f_3, 0);
				iLocal_203 = 0;
			}
			break;
		case 12:
			if (__LIB_2__::func_835(iLocal_204))
			{
				if (__LIB_2__::func_834(iLocal_204) == 2)
				{
					if (__LIB_0__::func_112())
					{
						NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(iLocal_204));
					}
					func_930(Global_1585094.f_2, Global_1585094.f_3, 0);
					__LIB_1__::func_34(iLocal_204);
					iLocal_203 = 0;
				}
				else
				{
					__LIB_1__::func_34(iLocal_204);
					iLocal_203 = 0;
				}
			}
			break;
	}
	switch (iLocal_205)
	{
		case 1:
			if (Global_1585094.f_2 > 0)
			{
				if (func_100(&iLocal_206, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"), Global_1585094.f_2, 4, 3))
				{
					iLocal_205++;
				}
				else
				{
					__LIB_1__::func_34(iLocal_206);
					iLocal_205 = 0;
				}
			}
			else
			{
				func_926(0);
				iLocal_205 = 0;
			}
			break;
		case 2:
			if (__LIB_2__::func_835(iLocal_206))
			{
				if (__LIB_2__::func_834(iLocal_206) == 2)
				{
					func_926(0);
					__LIB_1__::func_34(iLocal_206);
					iLocal_205 = 0;
				}
				else
				{
					__LIB_1__::func_34(iLocal_206);
					iLocal_205 = 0;
				}
			}
			break;
	}
}

void func_930(int iParam0, int iParam1, bool bParam2)//Position - 0x422AF
{
	int iVar0;
	if (Global_1585094.f_2 > 0 && !Global_262145.f_141 /* Tunable: DISABLE_INSURANCE_PAYOUT */)
	{
		if (bParam2)
		{
			if (__LIB_0__::func_112())
			{
				func_99(joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"), iParam0, &iVar0, 1, 1, 0);
				Global_4534105[iVar0 /*85*/] = Global_1585857[iParam1 /*142*/].f_66;
			}
			else
			{
				MONEY::NETWORK_BUY_ITEM(Global_1585094.f_2, Global_1585857[iParam1 /*142*/].f_66, 9, 1, true, 0, 0, 0, 0, true);
			}
		}
		else
		{
			MONEY::NETWORK_BUY_ITEM(Global_1585094.f_2, Global_1585857[iParam1 /*142*/].f_66, 9, 1, true, 0, 0, 0, 0, true);
		}
	}
	__LIB_0__::func_151("CUST_GAR_VEH_L8" /* GXT: Your replacement vehicle can be found at the Mors Mutual depot. */, -1);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FREEMODE_SOUNDSET", true);
	Global_1585094.f_1 = 1;
	func_1(Local_122.f_1, "CT_AUD", "MPCT_MoGen1", &Local_166, 0);
	__LIB_1__::func_891(1, 0, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 1);
	MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 6);
	MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 16);
	MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 0);
	MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 11);
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	__LIB_2__::func_725();
	func_32(4);
	__LIB_3__::func_578(iParam1, &(Global_1585857[iParam1 /*142*/]), 1, -1, 0, 0);
	__LIB_1__::func_333(-205702236, 3, 0);
}

void func_937(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x4260E
{
	int iVar0;
	if (iParam0 > 0 && !Global_262145.f_141 /* Tunable: DISABLE_INSURANCE_PAYOUT */)
	{
		if (bParam4)
		{
			if (__LIB_0__::func_112())
			{
				func_99(joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"), iParam0, &iVar0, 1, 1, 0);
				Global_4534105[iVar0 /*85*/] = Global_1585857[iParam1 /*142*/].f_66;
			}
			else
			{
				MONEY::NETWORK_BUY_ITEM(iParam0, Global_1585857[iParam1 /*142*/].f_66, 9, 1, true, 0, 0, 0, 0, true);
			}
		}
		else
		{
			MONEY::NETWORK_BUY_ITEM(iParam0, Global_1585857[iParam1 /*142*/].f_66, 9, 1, true, 0, 0, 0, 0, true);
		}
	}
	func_1(Local_122.f_1, "CT_AUD", "MPCT_MoGen1", &Local_166, 0);
	Global_1585857[iParam1 /*142*/].f_105 = 0;
	MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 1);
	MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 6);
	MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 16);
	MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 0);
	MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 11);
	if (bParam2)
	{
		if (__LIB_2__::func_771(iLocal_137, -1) == 116)
		{
			__LIB_0__::func_151("HANGAR_CLAIM" /* GXT: Your Personal Aircraft has been returned to the Hangar ~BLIP_SM_HANGAR~. You can also Request Personal Aircraft via the Vehicles section of the Interaction Menu. */, -1);
		}
		else if (__LIB_2__::func_771(iLocal_137, -1) == 117)
		{
			__LIB_0__::func_151("DBASE_CLAIM" /* GXT: Your Personal Vehicle has been returned to the Facility ~BLIP_NHP_BASE~. You can also Request Personal Vehicle via the Vehicles section of the Interaction Menu. */, -1);
		}
		else if (iLocal_137 >= 1000 && __LIB_1__::func_596(iLocal_137) == 0)
		{
			__LIB_0__::func_151("PER_VEH_MRS_GR" /* GXT: Your replacement vehicle has been returned to storage. You can request it from the Services section in the Interaction Menu to recover it. */, -1);
		}
		else
		{
			__LIB_0__::func_151("PER_VEH_MORS_STO" /* GXT: Your replacement vehicle has been returned to storage. You can call the mechanic to recover it. */, -1);
		}
	}
	else if (bParam3)
	{
		__LIB_0__::func_151("CUST_GAR_VEH_L8" /* GXT: Your replacement vehicle can be found at the Mors Mutual depot. */, -1);
		MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 0);
		MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 11);
		__LIB_1__::func_821(iParam1);
	}
	else
	{
		__LIB_0__::func_151("CUST_GAR_VEH_L7" /* GXT: Your replacement vehicle can be found in your Garage. */, -1);
	}
	__LIB_2__::func_725();
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	func_32(4);
	__LIB_3__::func_578(iParam1, &(Global_1585857[iParam1 /*142*/]), 1, -1, 0, 0);
	__LIB_1__::func_333(-205702236, 3, 0);
}

void func_941(bool bParam0)//Position - 0x4299B
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	int iVar3;
	int iVar4;
	if (__LIB_2__::func_771(iLocal_137, -1) == 116)
	{
		__LIB_0__::func_151("HANGAR_CLAIM2" /* GXT: Your replacement aircraft can be found in your Hangar ~BLIP_SM_HANGAR~. */, -1);
	}
	else if (__LIB_2__::func_771(iLocal_137, -1) == 117)
	{
		__LIB_0__::func_151("DBASE_CLAIM2" /* GXT: Your replacement vehicle can be found in your Facility ~BLIP_NHP_BASE~. */, -1);
	}
	else
	{
		__LIB_0__::func_151("CUST_GAR_ALL" /* GXT: Your replacement vehicles can be found in your Garage. */, -1);
	}
	func_1(Local_122.f_1, "CT_AUD", "MPCT_MoGen1", &Local_166, 0);
	iVar4 = 0;
	while (iVar4 < iLocal_135)
	{
		iVar1 = iLocal_151[iVar4];
		__LIB_3__::func_563(&Var2, Global_1585857[iVar1 /*142*/].f_66, 0, -1);
		if (BitTest(Global_1585857[iVar1 /*142*/].f_103, 16))
		{
			iVar3 = Var2.f_4;
			if (func_912(iVar1) > 0)
			{
				iVar3 = (iVar3 - func_912(iVar1));
			}
			if (__LIB_1__::func_587(Global_1585857[iVar1 /*142*/].f_66))
			{
				iVar3 = Global_262145.f_21982 /* Tunable: 843919183 */;
			}
		}
		else
		{
			iVar3 = 0;
		}
		if (!Global_262145.f_141 /* Tunable: DISABLE_INSURANCE_PAYOUT */)
		{
			if (bParam0)
			{
				if (__LIB_0__::func_112())
				{
					func_99(joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"), iVar3, &iVar0, 1, 1, 0);
					Global_4534105[iVar0 /*85*/] = Global_1585857[iVar1 /*142*/].f_66;
				}
				else
				{
					MONEY::NETWORK_BUY_ITEM(iVar3, Global_1585857[iVar1 /*142*/].f_66, 9, 1, true, 0, 0, 0, 0, true);
				}
			}
			else
			{
				if (__LIB_0__::func_112())
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(iLocal_202));
				}
				MONEY::NETWORK_BUY_ITEM(iVar3, Global_1585857[iVar1 /*142*/].f_66, 9, 1, true, 0, 0, 0, 0, true);
			}
		}
		MISC::CLEAR_BIT(&(Global_1585857[iVar1 /*142*/].f_103), 1);
		MISC::CLEAR_BIT(&(Global_1585857[iVar1 /*142*/].f_103), 0);
		MISC::CLEAR_BIT(&(Global_1585857[iVar1 /*142*/].f_103), 6);
		MISC::CLEAR_BIT(&(Global_1585857[iVar1 /*142*/].f_103), 11);
		MISC::CLEAR_BIT(&(Global_1585857[iVar1 /*142*/].f_103), 16);
		__LIB_3__::func_578(iVar1, &(Global_1585857[iVar1 /*142*/]), 1, -1, 0, 0);
		Global_1585857[iVar1 /*142*/].f_105 = 0;
		iVar4++;
	}
	__LIB_2__::func_725();
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	func_32(4);
	__LIB_1__::func_333(-205702236, 3, 0);
}

void func_943()//Position - 0x42BA5
{
	int iVar0;
	int iVar1[29];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	int iVar8[4];
	int iVar9;
	if (!__LIB_14__::func_504(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1))
	{
		iLocal_137 = -1;
		func_911();
	}
	else
	{
		__LIB_1__::func_602(0, 0);
		__LIB_1__::func_767("MPCT_INSH" /* GXT: MAKE A CLAIM */);
		__LIB_1__::func_766(1, 1, 0, 0, 0);
		__LIB_1__::func_765(1, 2, 1, 1, 1);
		__LIB_12__::func_593(0, 0, 0, 0, 0);
		iVar0 = 0;
		iVar3 = 0;
		while (iVar3 < 29)
		{
			if (__LIB_2__::func_771(iVar3, -1) > 0 && !__LIB_8__::func_949(iVar3))
			{
				iVar6 = __LIB_3__::func_2(iVar3, -1, 1);
				if (iVar3 == 13)
				{
					iVar6 = 11;
				}
				else if (iVar3 == 18)
				{
					iVar6 = 10;
				}
				iVar2 = 0;
				while (iVar2 < iVar6)
				{
					iVar4 = (__LIB_4__::func_982(iVar3) + iVar2);
					__LIB_1__::func_775(iVar4, &iVar5, 1);
					if (iVar5 >= 0 && func_924(iVar5))
					{
						iVar1[iVar3] = 1;
						iVar2 = 999;
					}
					iVar2++;
				}
				if (iVar1[iVar3])
				{
					MemCopy(&Var7, {Global_1312193[__LIB_2__::func_771(iVar3, -1) /*1951*/].f_16}, 6);
					StringConCat(&Var7, "S", 24);
					if (iVar3 == 12)
					{
						StringCopy(&Var7, __LIB_3__::func_552(__LIB_1__::func_380(PLAYER::PLAYER_ID())), 24);
					}
					if (iVar3 == 13)
					{
						StringCopy(&Var7, __LIB_3__::func_551(__LIB_1__::func_817(PLAYER::PLAYER_ID())), 24);
					}
					if (iVar3 == 14)
					{
						StringCopy(&Var7, __LIB_8__::func_83(__LIB_1__::func_642(PLAYER::PLAYER_ID())), 24);
					}
					else if (iVar3 == 15)
					{
						StringCopy(&Var7, __LIB_3__::func_550(1), 24);
					}
					else if (iVar3 == 16)
					{
						StringCopy(&Var7, __LIB_3__::func_550(2), 24);
					}
					else if (iVar3 == 17)
					{
						StringCopy(&Var7, __LIB_3__::func_550(3), 24);
					}
					if (iVar3 == 18)
					{
						StringCopy(&Var7, __LIB_3__::func_549(1), 24);
					}
					else if (iVar3 == 19)
					{
						StringCopy(&Var7, __LIB_3__::func_549(2), 24);
					}
					else if (iVar3 == 20)
					{
						StringCopy(&Var7, __LIB_3__::func_549(3), 24);
					}
					else if (iVar3 == 21)
					{
						StringCopy(&Var7, "CASINO_GARNAME" /* GXT: Casino Penthouse Garage */, 24);
					}
					else if (iVar3 == 22)
					{
						StringCopy(&Var7, "ARCADE_GARNAME" /* GXT: Arcade Garage */, 24);
					}
					else if (iVar3 == 25)
					{
						StringCopy(&Var7, "AUT_SHP_GAR" /* GXT: Auto Shop Storage */, 24);
					}
					else if (iVar3 == 26)
					{
						StringCopy(&Var7, "FIXER_GARNAME" /* GXT: Agency Garage */, 24);
					}
					__LIB_3__::func_572(iVar0, &Var7, 0, iVar1[iVar3], 0, 0, 0);
					iLocal_139[iVar0] = iVar3;
					iVar0++;
				}
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 4)
		{
			iVar9 = iVar3;
			iVar2 = 0;
			while (iVar2 < __LIB_3__::func_546(iVar9))
			{
				__LIB_1__::func_775((__LIB_1__::func_773(iVar9) + iVar2), &iVar5, 1);
				if (iVar5 >= 0 && func_924(iVar5))
				{
					iVar8[iVar3] = 1;
					iVar2 = 999;
				}
				iVar2++;
			}
			if (iVar8[iVar3])
			{
				__LIB_3__::func_572(iVar0, __LIB_3__::func_548(iVar9), 0, 1, 0, 0, 0);
				iLocal_139[iVar0] = __LIB_3__::func_547(iVar9);
				iVar0++;
			}
			iVar3++;
		}
		Local_122.f_181.f_2 = iVar0;
		if (Local_122.f_181.f_69 >= Local_122.f_181.f_2 || Local_122.f_181.f_69 < 0)
		{
			Local_122.f_181.f_69 = 0;
		}
		__LIB_3__::func_110(Local_122.f_181.f_69, 1, 0);
		Local_122.f_181.f_3[1] = 0;
		Local_122.f_181.f_36[1] = 0;
		bLocal_136 = true;
		__LIB_3__::func_564(-1);
		if (func_1120())
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
				__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
			}
			else
			{
				__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
				__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
			}
			MISC::SET_BIT(&(Local_122.f_359), 6);
		}
	}
}

void func_947()//Position - 0x43038
{
	if (!__LIB_2__::func_104(90, 0, 0))
	{
		func_32(4);
		return;
	}
	if (!__LIB_3__::func_67(0, -1, 1))
	{
		return;
	}
	if (func_1020())
	{
		func_969();
		func_123();
	}
	else
	{
		func_123();
		if (func_968())
		{
			func_948();
		}
	}
}

void func_948()//Position - 0x43083
{
	if (func_967())
	{
		if (func_961())
		{
			func_960(0);
		}
	}
	if (!func_959())
	{
		return;
	}
	if (func_958())
	{
		func_954();
	}
	else
	{
		func_949();
	}
	__LIB_12__::func_773();
}

void func_949()//Position - 0x430BF
{
	func_953();
	func_950();
	func_92(1, 0);
}

void func_950()//Position - 0x430D5
{
	func_1(Local_122.f_1, "CT_AUD", func_951(), &Local_166, 0);
}

char* func_951()//Position - 0x430F3
{
	if (__LIB_1__::func_394())
	{
		return func_952("MPCT_19", "MPCT_19c", 50);
	}
	return func_952("MPCT_20", "MPCT_20c", 50);
}

char* func_952(char* sParam0, char* sParam1, int iParam2)//Position - 0x43121
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < iParam2)
	{
		return sParam0;
	}
	return sParam1;
}

void func_953()//Position - 0x43140
{
	if (__LIB_0__::func_112())
	{
		func_889(__LIB_12__::func_845(22), 5, 2, 1);
		return;
	}
}

void func_954()//Position - 0x4315F
{
	func_955();
	func_32(4);
}

void func_955()//Position - 0x43170
{
	func_1(Local_122.f_1, "CT_AUD", func_956(Global_2703735.f_3674), &Local_166, 0);
}

char* func_956(int iParam0)//Position - 0x43195
{
	int iVar0;
	bool bVar1;
	iVar0 = VEHICLE::GET_VEHICLE_CLASS_FROM_NAME(iParam0);
	bVar1 = __LIB_1__::func_394();
	switch (iVar0)
	{
		case 14:
			return __LIB_1__::func_295(bVar1, "MPCT_13", "MPCT_14");
		case 16:
		case 15:
			return __LIB_1__::func_295(bVar1, "MPCT_15", "MPCT_16");
		default:
	}
	return __LIB_1__::func_295(bVar1, "MPCT_17", "MPCT_18");
	return __LIB_1__::func_295(bVar1, "MPCT_17", "MPCT_18");
}

bool func_958()//Position - 0x43219
{
	return BitTest(Global_2703735.f_3673, 2);
}

bool func_959()//Position - 0x4322A
{
	return BitTest(Global_2703735.f_3673, 1);
}

void func_960(bool bParam0)//Position - 0x4323B
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Local_122.f_359), 18);
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 18);
	}
}

bool func_961()//Position - 0x43261
{
	return func_962();
}

int func_962()//Position - 0x4326D
{
	int iVar0;
	if (!func_966())
	{
		return 0;
	}
	iVar0 = func_892(joaat("SERVICE_SPEND_PEGASUS_DELIVERY"), __LIB_12__::func_845(22), 0, 0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (iVar0 == 1)
	{
		func_964();
		return 1;
	}
	if (iVar0 == 0)
	{
		func_963();
		return 1;
	}
	return 0;
}

void func_963()//Position - 0x432BB
{
	MISC::CLEAR_BIT(&(Local_122.f_359), 17);
	func_92(1, 0);
}

void func_964()//Position - 0x432D4
{
	MISC::CLEAR_BIT(&(Local_122.f_359), 17);
	func_965();
}

void func_965()//Position - 0x432EB
{
	MISC::SET_BIT(&(Global_2703735.f_3673), 7);
	MISC::SET_BIT(&(Global_2703735.f_3673), 0);
}

bool func_966()//Position - 0x4330B
{
	return ((__LIB_12__::func_845(22) == 0 || MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(22), false, true, false, -1, 0)) || BitTest(Local_122.f_359, 17));
}

bool func_967()//Position - 0x4333E
{
	return BitTest(Local_122.f_359, 18);
}

bool func_968()//Position - 0x4334E
{
	return (iLocal_160 != -1 && iLocal_161);
}

void func_969()//Position - 0x43363
{
	if (func_1019() && iLocal_161)
	{
		func_1000(iLocal_160);
	}
	else
	{
		func_970();
	}
	MISC::SET_BIT(&(Local_122.f_359), 4);
}

void func_970()//Position - 0x43392
{
	var uVar0;
	func_999();
	uVar0 = func_974();
	func_973(uVar0);
	func_972();
	func_971();
	iLocal_161 = 1;
}

void func_971()//Position - 0x433B6
{
	__LIB_3__::func_564(-1);
	if (!func_1120())
	{
		return;
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
		__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
	}
	else
	{
		__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
		__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
	}
	MISC::SET_BIT(&(Local_122.f_359), 6);
}

void func_972()//Position - 0x43411
{
	if (Local_122.f_181.f_69 < 0)
	{
		Local_122.f_181.f_69 = 0;
	}
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 0);
	iLocal_160 = -1;
}

void func_973(var uParam0)//Position - 0x4343A
{
	Local_122.f_181.f_2 = uParam0;
	Local_122.f_181.f_3[1] = 0;
	Local_122.f_181.f_36[1] = 0;
}

int func_974()//Position - 0x4345E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 12;
	func_998(&iLocal_165);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar3 = iVar0;
		if (func_977(iVar3))
		{
			func_975(iVar3, iVar1);
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_975(int iParam0, int iParam1)//Position - 0x434A7
{
	char* sVar0;
	sVar0 = func_976(iParam0);
	__LIB_3__::func_572(iParam1, sVar0, 0, 1, 0, 0, 0);
	iLocal_165[iParam1] = iParam0;
}

char* func_976(int iParam0)//Position - 0x434CD
{
	switch (iParam0)
	{
		case 10:
			return "PEG_CAT_BLIMP" /* GXT: Blimp */;
		case 4:
			return "PEG_CAT_BOAT" /* GXT: Boat */;
		case 2:
			return "PEG_CAT_HELI" /* GXT: Helicopter */;
		case 1:
			return "PEG_CAT_MILITARY" /* GXT: Military */;
		case 5:
			return "PEG_CAT_MONSTER" /* GXT: Monster Truck */;
		case 3:
			return "PEG_CAT_PLANE" /* GXT: Plane */;
		case 8:
			return "PEG_CAT_SERVICES" /* GXT: Services */;
		case 11:
			return "PEG_CAT_SPECIAL" /* GXT: Special */;
		case 9:
			return "PEG_CAT_SUBMARINE" /* GXT: Submarine */;
		case 7:
			return "PEG_CAT_TRANSPORT" /* GXT: Transport */;
		case 6:
			return "PEG_CAT_TRUCK" /* GXT: Truck */;
		case 0:
			return "PEG_CAT_WEAPONIZED" /* GXT: Weaponized */;
		default:
	}
	return "";
}

bool func_977(int iParam0)//Position - 0x4357A
{
	return func_978(iParam0) > 0;
}

int func_978(int iParam0)//Position - 0x4358A
{
	int iVar0;
	int iVar1;
	iVar0 = func_992(iParam0);
	iVar1 = func_979(iParam0);
	return (iVar0 + iVar1);
}

int func_979(int iParam0)//Position - 0x435A7
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
	{
		iVar2 = FILES::GET_DLC_VEHICLE_MODEL(iVar0);
		if (func_980(iVar0, iVar2, iParam0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_980(int iParam0, int iParam1, int iParam2)//Position - 0x435E4
{
	int iVar0;
	return (((FILES::GET_DLC_VEHICLE_DATA(iParam0, &iVar0) && !FILES::IS_CONTENT_ITEM_LOCKED(iVar0)) && !__LIB_1__::func_822(iParam0)) && func_981(iParam1, iParam2));
}

bool func_981(int iParam0, int iParam1)//Position - 0x43619
{
	return iParam1 == func_982(iParam0);
}

int func_982(int iParam0)//Position - 0x4362A
{
	int iVar0;
	iVar0 = VEHICLE::GET_VEHICLE_CLASS_FROM_NAME(iParam0);
	if (func_990(iParam0))
	{
		return 5;
	}
	if (func_989(iParam0))
	{
		return 0;
	}
	if (func_988(iParam0))
	{
		return 9;
	}
	if (__LIB_0__::func_297(iParam0))
	{
		return 6;
	}
	if (func_986(iParam0))
	{
		return 7;
	}
	if (func_985(iParam0))
	{
		return 10;
	}
	if (func_984(iParam0))
	{
		return 8;
	}
	if (func_983(iParam0))
	{
		return 11;
	}
	switch (iVar0)
	{
		case 14:
			return 4;
		case 15:
			return 2;
		case 19:
			return 1;
		case 16:
			return 3;
		case 17:
			return 8;
		default:
	}
	return 11;
}

int func_983(int iParam0)//Position - 0x436E2
{
	switch (iParam0)
	{
		case joaat("pbus"):
		case joaat("pbus2"):
		case joaat("dune2"):
		case joaat("taxi"):
		case joaat("bulldozer"):
		case joaat("speedo2"):
		case joaat("trash2"):
		case joaat("barracks2"):
		case joaat("mixer"):
		case joaat("tractor"):
			return 1;
		default:
	}
	return 0;
}

int func_984(int iParam0)//Position - 0x43732
{
	switch (iParam0)
	{
		case joaat("mixer2"):
		case joaat("dump"):
			return 1;
		default:
	}
	return 0;
}

int func_985(int iParam0)//Position - 0x43752
{
	switch (iParam0)
	{
		case joaat("blimp"):
		case joaat("blimp2"):
		case joaat("blimp3"):
			return 1;
		default:
	}
	return 0;
}

int func_986(int iParam0)//Position - 0x43778
{
	switch (iParam0)
	{
		case joaat("airbus"):
		case joaat("bus"):
		case joaat("journey"):
		case joaat("rentalbus"):
		case joaat("stretch"):
		case joaat("pbus"):
		case joaat("coach"):
			return 1;
		default:
	}
	return 0;
}

int func_988(int iParam0)//Position - 0x43806
{
	switch (iParam0)
	{
		case joaat("submersible"):
		case joaat("submersible2"):
			return 1;
		default:
	}
	return 0;
}

int func_989(int iParam0)//Position - 0x43826
{
	switch (iParam0)
	{
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("halftrack"):
		case joaat("oppressor"):
		case joaat("tampa3"):
		case joaat("technical3"):
		case joaat("insurgent3"):
		case joaat("vigilante"):
		case joaat("barrage"):
		case joaat("menacer"):
		case joaat("scramjet"):
		case joaat("limo2"):
		case joaat("technical"):
		case joaat("insurgent"):
			return 1;
		default:
	}
	return 0;
}

int func_990(int iParam0)//Position - 0x4388E
{
	switch (iParam0)
	{
		case joaat("monster"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("marshall"):
			return 1;
		default:
	}
	return 0;
}

int func_992(int iParam0)//Position - 0x438F2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < func_997())
	{
		iVar2 = func_996(iVar0);
		iVar3 = __LIB_1__::func_344(iVar2, -1);
		if (func_993(iVar0, iVar3, iParam0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_993(int iParam0, int iParam1, int iParam2)//Position - 0x4393B
{
	return (((__LIB_20__::func_123(iParam0) && func_994(iParam0)) && func_981(iParam1, iParam2)) && __LIB_0__::func_113(iParam1));
}

int func_994(int iParam0)//Position - 0x4396C
{
	if (__LIB_15__::func_135(245, 0) == iParam0)
	{
		return 0;
	}
	if (__LIB_15__::func_135(323, 0) == iParam0)
	{
		return 0;
	}
	if (__LIB_15__::func_135(324, 0) == iParam0)
	{
		return 0;
	}
	if (__LIB_15__::func_135(357, 0) == iParam0)
	{
		return 0;
	}
	if (__LIB_15__::func_135(402, 0) == iParam0)
	{
		return 0;
	}
	if (__LIB_15__::func_135(518, 0) == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_996(int iParam0)//Position - 0x43B81
{
	if (iParam0 < 0)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 17;
		case 1:
			return 9;
		case 2:
			return 10;
		case 3:
			return 11;
		case 4:
			return 12;
		case 5:
			return 13;
		case 6:
			return 14;
		case 7:
			return 15;
		case 8:
			return 16;
		case 9:
			return 19;
		case 10:
			return 22;
		case 11:
			return 23;
		case 12:
			return 24;
		case 13:
			return 25;
		case 14:
			return 27;
		case 15:
			return 28;
		case 16:
			return 29;
		case 17:
			return 30;
		case 18:
			return 31;
		case 19:
			return 20;
		case 20:
			return 32;
		case 21:
			return 21;
		case 22:
			return 78;
		case 23:
			return 79;
		case 24:
			return 80;
		case 25:
			return 18;
		case 26:
			return 81;
		case 27:
			return 82;
		case 28:
			return 83;
		case 29:
			return 84;
		case 30:
			return 85;
		case 31:
			return 86;
		case 32:
			return 87;
		case 33:
			return 88;
		case 34:
			return 102;
		case 35:
			return 113;
		case 36:
			return 160;
		case 37:
			return 163;
		case 38:
			return 162;
		case 39:
		case 40:
			return 164;
		case 41:
			return 199;
		case 42:
			return 201;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 200;
		case 68:
			return 171;
		case 69:
			return 187;
		case 70:
			return 177;
		case 71:
			return 183;
		case 72:
			return 185;
		case 73:
			return 184;
		case 74:
			return 188;
		case 75:
			return 173;
		case 76:
			return 178;
		case 77:
			return 186;
		case 78:
			return 215;
		case 79:
			return 217;
		case 80:
			return 224;
		case 81:
			return 237;
		case 82:
			return 243;
		case 83:
			return 244;
		case 84:
			return 245;
		case 85:
			return 253;
		case 86:
			return 254;
		case 87:
			return 256;
		case 88:
			return 257;
		case 89:
			return 258;
		case 90:
		case 91:
			return 276;
		case 92:
			return 323;
		case 93:
			return 324;
		case 94:
			return 337;
		case 95:
			return 357;
		case 96:
			return 402;
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			return 413;
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
			return 414;
		case 115:
			return 450;
		case 116:
			return 451;
		case 117:
			return 452;
		case 118:
			return 453;
		case 119:
			return 454;
		case 120:
			return 455;
		case 121:
			return 456;
		case 122:
			return 457;
		case 123:
			return 480;
		case 124:
			return 482;
		case 125:
			return 483;
		case 126:
			return 518;
			break;
		case 127:
			return 531;
			break;
		case 128:
			return 533;
			break;
		case 129:
			return 527;
			break;
		case 130:
			return 525;
	}
	return -1;
}

int func_997()//Position - 0x44094
{
	return 160;
}

void func_998(var uParam0)//Position - 0x4409E
{
	int iVar0;
	int iVar1;
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		(*uParam0)[iVar0] = -1;
		iVar0++;
	}
}

void func_999()//Position - 0x440C5
{
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("PEG_TITLE" /* GXT: ~s~PEGASUS CONCIERGE */);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
}

void func_1000(int iParam0)//Position - 0x440F6
{
	var uVar0;
	func_999();
	uVar0 = func_1003(iParam0);
	func_973(uVar0);
	func_1001();
	func_971();
}

void func_1001()//Position - 0x44118
{
	if (!BitTest(Local_122.f_359, 14))
	{
		Local_122.f_181.f_69 = 0;
		MISC::SET_BIT(&(Local_122.f_359), 14);
	}
	else
	{
		Local_122.f_181.f_69 = __LIB_16__::func_336(Local_122.f_181.f_69, 0, Local_122.f_181.f_2);
	}
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 0);
}

int func_1003(int iParam0)//Position - 0x44206
{
	int iVar0;
	iVar0 = 0;
	func_1004(iParam0, !func_1014(), &iVar0);
	return iVar0;
}

int func_1004(int iParam0, bool bParam1, int iParam2)//Position - 0x44221
{
	func_998(&uLocal_164);
	iLocal_163 = func_1010(iParam0, bParam1, iParam2);
	iLocal_162 = func_1005(iParam0, bParam1, iParam2);
	return (iLocal_163 + iLocal_162);
}

int func_1005(int iParam0, bool bParam1, var uParam2)//Position - 0x44251
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	iVar2 = FILES::GET_NUM_DLC_VEHICLES();
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar3 = FILES::GET_DLC_VEHICLE_MODEL(iVar0);
		if (func_980(iVar0, iVar3, iParam0))
		{
			sVar4 = VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iVar3);
			sVar5 = func_1007(iVar3, iVar0);
			func_1006(iVar0, sVar4, sVar5, bParam1, *uParam2);
			*uParam2++;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_1006(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)//Position - 0x442B8
{
	bool bVar0;
	int iVar1;
	bVar0 = !MISC::IS_STRING_NULL_OR_EMPTY(sParam2);
	if (bVar0)
	{
		if (func_273(22))
		{
			__LIB_3__::func_572(iParam4, "TWOSTRINGS" /* GXT: ~a~ ~a~ */, 3, bParam3, 0, 0, 0);
		}
		else
		{
			__LIB_3__::func_572(iParam4, "TWOSTRINGS" /* GXT: ~a~ ~a~ */, 2, bParam3, 0, 0, 0);
		}
		__LIB_13__::func_399(sParam1, 0);
		__LIB_13__::func_399(sParam2, 0);
	}
	else
	{
		if (func_273(22))
		{
			__LIB_3__::func_572(iParam4, "STRING", 2, bParam3, 0, 0, 0);
		}
		else
		{
			__LIB_3__::func_572(iParam4, "STRING", 1, bParam3, 0, 0, 0);
		}
		__LIB_13__::func_399(sParam1, 0);
	}
	if (func_273(22))
	{
		__LIB_14__::func_431(51, 0);
	}
	iVar1 = __LIB_12__::func_845(22);
	__LIB_3__::func_572(iParam4, "MPCT_CASH" /* GXT: $~1~ */, 1, bParam3, 0, 0, 0);
	__LIB_13__::func_722(iVar1, 0);
	uLocal_164[iParam4] = iParam0;
}

char* func_1007(int iParam0, int iParam1)//Position - 0x44376
{
	char cVar0[16];
	switch (iParam0)
	{
		case joaat("swift"):
			if (iParam1 == 39)
			{
				return "VNX_SWFTC" /* GXT: Classic */;
			}
			else
			{
				return "VNX_SWFTB" /* GXT: Flying Bravo */;
			}
			break;
		case joaat("marshall"):
			switch (iParam1)
			{
				case 43:
					return "WEB_VEH_FLAG_0" /* GXT: America */;
				case 44:
					return "WEB_VEH_FLAG_1" /* GXT: Australia */;
				case 45:
					return "WEB_VEH_FLAG_2" /* GXT: Brazil */;
				case 46:
					return "WEB_VEH_FLAG_3" /* GXT: Spain */;
				case 47:
					return "WEB_VEH_FLAG_4" /* GXT: Canada */;
				case 48:
					return "WEB_VEH_FLAG_5" /* GXT: France */;
				case 49:
					return "WEB_VEH_FLAG_6" /* GXT: Germany */;
				case 50:
					return "WEB_VEH_FLAG_7" /* GXT: Japan */;
				case 51:
					return "WEB_VEH_FLAG_8" /* GXT: Scotland */;
				case 52:
					return "WEB_VEH_FLAG_9" /* GXT: Great Britain */;
				case 53:
					return "WEB_VEH_FLAG_10" /* GXT: Italy */;
				case 54:
					return "WEB_VEH_FLAG_11" /* GXT: Switzerland */;
				case 55:
					return "WEB_VEH_FLAG_12" /* GXT: Jamaica */;
				case 56:
					return "WEB_VEH_FLAG_13" /* GXT: Colombia */;
				case 57:
					return "WEB_VEH_FLAG_14" /* GXT: Norway */;
				case 58:
					return "WEB_VEH_FLAG_15" /* GXT: Sweden */;
				case 59:
					return "WEB_VEH_FLAG_16" /* GXT: Belgium */;
				case 60:
					return "WEB_VEH_FLAG_17" /* GXT: Mexico */;
				case 61:
					return "WEB_VEH_FLAG_18" /* GXT: Austria */;
				case 62:
					return "WEB_VEH_FLAG_19" /* GXT: Russia */;
				case 63:
					return "WEB_VEH_FLAG_20" /* GXT: Argentina */;
				case 64:
					return "WEB_VEH_FLAG_21" /* GXT: Turkey */;
				case 65:
					return "WEB_VEH_FLAG_22" /* GXT: Ireland */;
				case 66:
					return "WEB_VEH_FLAG_23" /* GXT: Wales */;
				case 67:
					return "WEB_VEH_FLAG_24" /* GXT: England */;
				default:
			}
			break;
		case joaat("rallytruck"):
			if (iParam1 == 90)
			{
				return "SSS_DUNE_LIVERY_1" /* GXT: Globe Oil */;
			}
			else
			{
				return "SSS_DUNE_LIVERY_2" /* GXT: Fukaru Rally */;
			}
			break;
		case joaat("blimp3"):
			switch (iParam1)
			{
				case 97:
					return "BLIMP3_ELT_1" /* GXT: Chepalle */;
				case 98:
					return "BLIMP3_ELT_2" /* GXT: eCola */;
				case 99:
					return "BLIMP3_ELT_3" /* GXT: Burger Shot */;
				case 100:
					return "BLIMP3_ELT_4" /* GXT: Redwood */;
				case 101:
					return "BLIMP3_ELT_5" /* GXT: Sprunk Xtreme */;
				case 102:
					return "BLIMP3_ELT_6" /* GXT: Pisswasser */;
				case 103:
					return "BLIMP3_ELT_7" /* GXT: Jackal Racing */;
				case 104:
					StringCopy(&cVar0, "FCCLUB_NAME_", 16);
					StringIntConCat(&cVar0, __LIB_31__::func_693(__LIB_1__::func_360(7215, -1, 0)) + 1, 16);
					return HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cVar0, 0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
					break;
			}
			break;
		case joaat("pbus2"):
			switch (iParam1)
			{
				case 105:
					return "PBUS2_SSA_1" /* GXT: Crusty Cruiser */;
				case 106:
					return "PBUS2_SSA_2" /* GXT: Geometric Camo */;
				case 107:
					return "PBUS2_SSA_3" /* GXT: Daddy's Back */;
				case 108:
					return "PBUS2_SSA_4" /* GXT: Cosmic Trip */;
				case 109:
					return "PBUS2_SSA_5" /* GXT: Urban Arrows */;
				case 110:
					return "PBUS2_SSA_6" /* GXT: 90s Flava */;
				case 111:
					return "PBUS2_SSA_7" /* GXT: Purple Swirlz */;
				case 112:
					return "PBUS2_SSA_8" /* GXT: Alien Invasion */;
				case 113:
					return "PBUS2_SSA_9" /* GXT: Be Cool Man */;
				case 114:
					return "PBUS2_SSA_10" /* GXT: Party In My Bus */;
				default:
			}
			break;
	}
	return "";
}

int func_1010(int iParam0, bool bParam1, var uParam2)//Position - 0x4470C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	iVar0 = 0;
	iVar2 = func_997();
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar3 = func_996(iVar0);
		iVar4 = __LIB_1__::func_344(iVar3, -1);
		if (func_993(iVar0, iVar4, iParam0))
		{
			sVar5 = func_1011(iVar4, iVar3);
			sVar6 = func_1007(iVar4, iVar0);
			func_1006(iVar0, sVar5, sVar6, bParam1, *uParam2);
			*uParam2++;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

char* func_1011(int iParam0, int iParam1)//Position - 0x44781
{
	char* sVar0;
	sVar0 = VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam0);
	sVar0 = func_1012(iParam0, sVar0, iParam1);
	return sVar0;
}

char* func_1012(int iParam0, char* sParam1, int iParam2)//Position - 0x4479F
{
	if (iParam0 == joaat("cargobob2"))
	{
		sParam1 = __LIB_3__::func_562(iParam2);
	}
	return sParam1;
}

bool func_1014()//Position - 0x447E2
{
	int iVar0;
	iVar0 = __LIB_12__::func_672(22);
	return (iVar0 > 0 && (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(__LIB_5__::func_23(46), -1, false, 0) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 194));
}

bool func_1019()//Position - 0x452FC
{
	return iLocal_160 != -1;
}

bool func_1020()//Position - 0x45309
{
	return (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/));
}

void func_1021()//Position - 0x45324
{
	switch (Local_122.f_178)
	{
		case 9:
			if (__LIB_3__::func_67(0, -1, 0))
			{
				if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					func_877();
					MISC::SET_BIT(&(Local_122.f_359), 4);
					func_123();
				}
				else
				{
					func_123();
				}
			}
			break;
		case 6:
			if (__LIB_3__::func_67(0, -1, 0))
			{
				if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					if (func_843())
					{
						MISC::SET_BIT(&(Local_122.f_359), 4);
						func_123();
					}
					else
					{
						return;
					}
				}
				else
				{
					func_123();
				}
			}
			break;
	}
}

void func_1022()//Position - 0x453C2
{
	switch (Local_122.f_178)
	{
		case 7:
			if (__LIB_3__::func_67(0, -1, 1))
			{
				if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					func_1023();
					MISC::SET_BIT(&(Local_122.f_359), 4);
					func_123();
				}
				else
				{
					func_123();
				}
			}
			break;
	}
}

void func_1023()//Position - 0x45415
{
	int iVar0;
	int iVar1;
	bool bVar2;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("MPCT_BRUCIEH" /* GXT: BRUCIE */);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	if (__LIB_2__::func_104(74, 0, 0))
	{
		bVar2 = true;
		iVar1 = __LIB_12__::func_672(0);
		if ((iVar1 > 0 || !func_279(0)) || !func_309(0))
		{
			bVar2 = false;
		}
		func_512(0, iVar0, "MPCT_BRUCIE0" /* GXT: Bull Shark Testosterone */, bVar2);
		__LIB_3__::func_572(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		__LIB_13__::func_722(__LIB_12__::func_845(0), 0);
	}
	else
	{
		__LIB_3__::func_572(iVar0, "MPCT_BRUCIE0" /* GXT: Bull Shark Testosterone */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(iVar0, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	iVar0++;
	__LIB_3__::func_564(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = iVar0 + 1;
}

void func_1024()//Position - 0x45535
{
	switch (Local_122.f_178)
	{
		case 4:
			if (__LIB_3__::func_67(0, -1, 1))
			{
				if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					func_1064();
					MISC::SET_BIT(&(Local_122.f_359), 4);
					func_123();
				}
				else
				{
					func_123();
				}
			}
			break;
		case 8:
			if (func_1063())
			{
				if (__LIB_3__::func_67(0, -1, 0))
				{
					if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
					{
						func_1062();
						MISC::SET_BIT(&(Local_122.f_359), 4);
						func_123();
					}
					else
					{
						if (iLocal_142 == 0)
						{
							if (__LIB_0__::func_156(Local_122.f_358, 0, 1))
							{
								__LIB_1__::func_789("GC_MENU42" /* GXT: Set Mercenaries to attack ~a~?~n~ Cost: $~1~ */, 100, 0);
								__LIB_9__::func_336(PLAYER::GET_PLAYER_NAME(Local_122.f_358));
								__LIB_8__::func_283(__LIB_12__::func_845(12));
							}
						}
						func_123();
					}
				}
			}
			break;
		case 1:
			if (__LIB_3__::func_67(0, -1, 0))
			{
				if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					func_1060();
					MISC::SET_BIT(&(Local_122.f_359), 4);
					MISC::SET_BIT(&iLocal_143, 20);
					func_1025();
				}
				else
				{
					func_1025();
				}
			}
			break;
	}
}

void func_1025()//Position - 0x45653
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	char[] cVar9[8];
	int iVar10;
	int* iVar11;
	var uVar12;
	int iVar13;
	if (__LIB_7__::func_715(0, &iLocal_147, 0))
	{
		iLocal_181 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("TEXTFIELD");
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_181))
		{
			bVar0 = false;
			iVar1 = 0;
			bVar2 = false;
			iVar3 = 0;
			iVar4 = 0;
			while (iVar4 < 32)
			{
				iVar5 = Local_122.f_181.f_136[iVar3];
				iVar6 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
				if (func_1052(iVar6))
				{
					if (iVar3 < 32)
					{
						if (func_1051(iVar6))
						{
							Local_122.f_181.f_69 = iVar3;
						}
						if (Local_122.f_181.f_69 == iVar3)
						{
							if (Local_122.f_181.f_69 != Local_122.f_181.f_169)
							{
								Local_122.f_181.f_169 = Local_122.f_181.f_69;
								iVar1 = 1;
							}
						}
						Local_122.f_181.f_136[iVar3] = iVar6;
						if (iVar6 != iVar5)
						{
							bVar0 = true;
						}
						iVar3++;
					}
				}
				iVar4++;
			}
			if (iVar3 != Local_122.f_181.f_2 || iLocal_131)
			{
				iLocal_131 = 0;
				bVar0 = true;
			}
			Local_122.f_181.f_2 = iVar3;
			if (Local_122.f_181.f_69 > (Local_122.f_181.f_2 - 1))
			{
				Local_122.f_181.f_69 = 0;
			}
			if (iVar3 <= 0)
			{
				func_1050();
			}
			if (bVar0 || iVar1)
			{
				bVar2 = true;
				if (bVar0)
				{
					if (BitTest(iLocal_143, 20))
					{
						MISC::CLEAR_BIT(&iLocal_143, 20);
						iVar4 = 0;
						while (iVar4 < Local_122.f_181.f_2)
						{
							uLocal_148[iVar4] = __LIB_3__::func_586(Local_122.f_181.f_136[iVar4]);
							iVar4++;
						}
					}
					__LIB_18__::func_524(&iLocal_147, 0, 0);
					switch (Local_122.f_179)
					{
						case 0:
							__LIB_7__::func_770(&iLocal_147, "BB_HEAD" /* GXT: Bounty */, "", 0, -1, -1, 0);
							break;
						case 1:
							__LIB_7__::func_770(&iLocal_147, "GC_MENU5" /* GXT: Mugger */, "", 0, -1, -1, 0);
							break;
						case 2:
							__LIB_7__::func_770(&iLocal_147, "GC_MENU24" /* GXT: Give Wanted Level */, "", 0, -1, -1, 0);
							break;
						case 3:
							__LIB_7__::func_770(&iLocal_147, "GC_MENU23" /* GXT: Mercenaries */, "", 0, -1, -1, 0);
							break;
					}
					bVar2 = false;
					iVar4 = 0;
					while (iVar4 < Local_122.f_181.f_2)
					{
						iVar6 = Local_122.f_181.f_136[iVar4];
						iVar7 = 9;
						__LIB_3__::func_571(iVar6, &sVar8);
						iVar10 = uLocal_148[iVar4];
						if (iVar10 != 0)
						{
							cVar9 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar10);
						}
						func_1029(iLocal_147, bVar2, iVar4, __LIB_19__::func_2(iVar6), iVar7, PLAYER::GET_PLAYER_NAME(iVar6), &sVar8, cVar9, 0, -1, 1);
						iVar4++;
					}
					__LIB_1__::func_824(&iLocal_147, 1, 1);
				}
				func_1027(&iLocal_147, Local_122.f_181.f_69);
			}
			func_1026(&iLocal_147, 76);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar11, &uVar12);
			__LIB_3__::func_129(iVar11, -1, 0, 1, 0, 0, 1, 1, 0);
			if (Local_122.f_181.f_2 > 16)
			{
				iVar13 = 15;
			}
			else
			{
				iVar13 = (Local_122.f_181.f_2 - 1);
			}
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_181, 0.119f, (0.575f + (0.034722f * IntToFloat(iVar13))), 0.235f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			Global_23150.f_6269 = MISC::GET_GAME_TIMER();
			__LIB_1__::func_33(0);
		}
	}
}

void func_1026(int iParam0, int iParam1)//Position - 0x4593F
{
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(iParam1, 84);
	if (iParam1 == 82)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam0, 0.14f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
	}
	else if (iParam1 == 76)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam0, 0.14f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_1027(int iParam0, int iParam1)//Position - 0x459A8
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_HIGHLIGHT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_1029(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x459FE
{
	char* sVar0;
	sVar0 = "SET_DATA_SLOT";
	if (bParam1)
	{
		sVar0 = "UPDATE_SLOT";
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	__LIB_0__::func_700(sParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	if (bParam8)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(66);
	}
	else if (bParam10)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(118);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
	if (iParam9 > -1)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
		__LIB_0__::func_610("");
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("char_default");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("char_default");
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam7);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam7);
	}
	__LIB_0__::func_700(sParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_1050()//Position - 0x45F62
{
	switch (Local_122.f_179)
	{
		case 0:
			func_92(19, 0);
			Local_122.f_178 = 0;
			MISC::CLEAR_BIT(&(Local_122.f_359), 4);
			if (iLocal_123 != 1)
			{
			}
			func_32(1);
			break;
		case 2:
			MISC::SET_BIT(&uLocal_126, 8);
			func_92(10, 0);
			Local_122.f_178 = 0;
			MISC::CLEAR_BIT(&(Local_122.f_359), 4);
			Global_1922952 = 0;
			Global_1922953 = 0;
			if (iLocal_123 != 1)
			{
			}
			func_32(1);
			break;
		case 1:
			MISC::SET_BIT(&uLocal_126, 5);
			func_92(7, 0);
			Local_122.f_178 = 5;
			MISC::CLEAR_BIT(&(Local_122.f_359), 4);
			Global_1922952 = 0;
			Global_1922953 = 0;
			if (iLocal_123 != 1)
			{
			}
			func_32(1);
			break;
		case 3:
			MISC::SET_BIT(&uLocal_126, 7);
			func_92(9, 0);
			Local_122.f_178 = 4;
			MISC::CLEAR_BIT(&(Local_122.f_359), 4);
			Global_1922952 = 0;
			Global_1922953 = 0;
			if (iLocal_123 != 1)
			{
			}
			func_32(1);
			break;
	}
}

int func_1051(int iParam0)//Position - 0x46055
{
	switch (Local_122.f_179)
	{
		case 0:
			if (Global_2815059.f_1919.f_1 == iParam0 && !BitTest(Local_122.f_359, 7))
			{
				MISC::SET_BIT(&(Local_122.f_359), 7);
				return 1;
			}
			break;
	}
	return 0;
}

int func_1052(int iParam0)//Position - 0x4609A
{
	int iVar0;
	switch (Local_122.f_0)
	{
		case 12:
			switch (Local_122.f_179)
			{
				case 0:
					if (!__LIB_0__::func_156(iParam0, 0, 1))
					{
						return 0;
					}
					if (iParam0 == Global_2815059.f_5120)
					{
						return 0;
					}
					if (__LIB_0__::func_361(iParam0, 0))
					{
						return 0;
					}
					if (!__LIB_25__::func_514(iParam0))
					{
						return 0;
					}
					if (iParam0 == PLAYER::PLAYER_ID())
					{
						return 0;
					}
					if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 2))
					{
						return 0;
					}
					if (__LIB_1__::func_520(1))
					{
						if (__LIB_1__::func_876(iParam0, __LIB_0__::func_797(), 1))
						{
							return 0;
						}
					}
					if (__LIB_0__::func_927(iParam0))
					{
						return 0;
					}
					break;
				case 2:
					if (!__LIB_0__::func_156(iParam0, 1, 1))
					{
						return 0;
					}
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) >= 5)
					{
						return 0;
					}
					if (__LIB_0__::func_361(iParam0, 0))
					{
						return 0;
					}
					if (iParam0 == PLAYER::PLAYER_ID())
					{
						return 0;
					}
					if (__LIB_1__::func_20(iParam0))
					{
						return 0;
					}
					if (__LIB_1__::func_511(iParam0, 1, 0))
					{
						return 0;
					}
					if (__LIB_2__::func_841(iParam0))
					{
						return 0;
					}
					if (!__LIB_1__::func_831(iParam0))
					{
						return 0;
					}
					if (INTERIOR::IS_VALID_INTERIOR(Global_2689235[iParam0 /*453*/].f_243))
					{
						iVar0 = INTERIOR::GET_INTERIOR_GROUP_ID(Global_2689235[iParam0 /*453*/].f_243);
						if (((iVar0 == 1 || iVar0 == 11) || iVar0 == 10) || iVar0 == 3)
						{
							return 0;
						}
					}
					if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 2))
					{
						return 0;
					}
					if (__LIB_0__::func_927(iParam0))
					{
						return 0;
					}
					break;
			}
			break;
		case 85:
			switch (Local_122.f_179)
			{
				case 3:
					if (!__LIB_0__::func_156(iParam0, 0, 1))
					{
						return 0;
					}
					if (__LIB_0__::func_361(iParam0, 0))
					{
						return 0;
					}
					if (iParam0 == PLAYER::PLAYER_ID())
					{
						return 0;
					}
					if (__LIB_1__::func_20(iParam0))
					{
						return 0;
					}
					if (__LIB_1__::func_511(iParam0, 1, 0))
					{
						return 0;
					}
					if (__LIB_2__::func_841(iParam0))
					{
						return 0;
					}
					if (!__LIB_1__::func_831(iParam0))
					{
						return 0;
					}
					if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 2))
					{
						return 0;
					}
					if (__LIB_18__::func_712())
					{
						if (Global_1836576)
						{
							if (PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
							{
								return 0;
							}
						}
					}
					if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam0))
					{
						return 0;
					}
					if (__LIB_1__::func_386(iParam0, 146))
					{
						return 0;
					}
					if (__LIB_1__::func_386(iParam0, 136))
					{
						return 0;
					}
					if (__LIB_1__::func_386(iParam0, 129))
					{
						return 0;
					}
					if (__LIB_1__::func_386(iParam0, 131))
					{
						return 0;
					}
					if (__LIB_0__::func_979(iParam0, 24))
					{
						if (__LIB_1__::func_785(iParam0))
						{
							return 0;
						}
					}
					if (func_326(iParam0))
					{
						return 0;
					}
					if (__LIB_1__::func_520(1))
					{
						if (__LIB_1__::func_876(iParam0, __LIB_0__::func_797(), 1))
						{
							return 0;
						}
					}
					if (__LIB_2__::func_840(iParam0) && ((__LIB_0__::func_492(iParam0) == 148 || __LIB_0__::func_492(iParam0) == 142) || __LIB_0__::func_492(iParam0) == 164))
					{
						return 0;
					}
					if (__LIB_0__::func_492(iParam0) == 153)
					{
						return 0;
					}
					if (__LIB_0__::func_492(iParam0) == 167)
					{
						return 0;
					}
					if (__LIB_0__::func_492(iParam0) == 168)
					{
						return 0;
					}
					if (__LIB_0__::func_492(iParam0) == 190)
					{
						return 0;
					}
					if (__LIB_0__::func_492(iParam0) == 179)
					{
						return 0;
					}
					if (__LIB_0__::func_315(iParam0) && (((((__LIB_0__::func_492(iParam0) == 185 || __LIB_0__::func_492(iParam0) == 182) || __LIB_0__::func_492(iParam0) == 197) || __LIB_0__::func_492(iParam0) == 183) || __LIB_0__::func_492(iParam0) == 195) || __LIB_0__::func_492(iParam0) == 198))
					{
						return 0;
					}
					if (__LIB_0__::func_315(iParam0) && (__LIB_0__::func_492(iParam0) == 216 || __LIB_0__::func_492(iParam0) == 219))
					{
						return 0;
					}
					if (__LIB_0__::func_927(iParam0))
					{
						return 0;
					}
					if (__LIB_0__::func_938(iParam0))
					{
						return 0;
					}
					if (__LIB_0__::func_492(iParam0) == 276)
					{
						if (__LIB_0__::func_525(iParam0) == 3)
						{
							return 0;
						}
					}
					break;
			}
			break;
		case 19:
			switch (Local_122.f_179)
			{
				case 1:
					if (!__LIB_0__::func_156(iParam0, 0, 1))
					{
						return 0;
					}
					if (__LIB_0__::func_361(iParam0, 0))
					{
						return 0;
					}
					if (iParam0 == PLAYER::PLAYER_ID())
					{
						return 0;
					}
					if (__LIB_1__::func_20(iParam0))
					{
						return 0;
					}
					if (__LIB_1__::func_511(iParam0, 1, 1))
					{
						return 0;
					}
					if (__LIB_2__::func_841(iParam0))
					{
						return 0;
					}
					if (!__LIB_1__::func_831(iParam0))
					{
						return 0;
					}
					if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 2))
					{
						return 0;
					}
					if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam0))
					{
						return 0;
					}
					if (((__LIB_1__::func_386(iParam0, 129) || __LIB_1__::func_386(iParam0, 146)) || __LIB_1__::func_386(iParam0, 131)) || __LIB_1__::func_386(iParam0, 136))
					{
						return 0;
					}
					if (__LIB_0__::func_979(iParam0, 24))
					{
						if (__LIB_1__::func_785(iParam0))
						{
							return 0;
						}
					}
					if (BitTest(Global_1892703[iParam0 /*599*/].f_1, 14))
					{
						return 0;
					}
					if (__LIB_1__::func_520(1) && __LIB_0__::func_797() == __LIB_0__::func_818(iParam0))
					{
						return 0;
					}
					if (__LIB_2__::func_840(iParam0) && __LIB_0__::func_492(iParam0) == 164)
					{
						return 0;
					}
					if (Global_1853348[iParam0 /*834*/] == 148)
					{
						return 0;
					}
					if (func_326(iParam0))
					{
						return 0;
					}
					if (__LIB_0__::func_307(iParam0))
					{
						return 0;
					}
					if (__LIB_1__::func_786(iParam0))
					{
						return 0;
					}
					if (__LIB_0__::func_315(iParam0) && __LIB_0__::func_492(iParam0) == 170)
					{
						return 0;
					}
					if (__LIB_0__::func_492(iParam0) == 168)
					{
						return 0;
					}
					if (__LIB_0__::func_492(iParam0) == 190)
					{
						return 0;
					}
					if (__LIB_0__::func_492(iParam0) == 167)
					{
						return 0;
					}
					if (__LIB_0__::func_315(iParam0) && (((((__LIB_0__::func_492(iParam0) == 185 || __LIB_0__::func_492(iParam0) == 182) || __LIB_0__::func_492(iParam0) == 197) || __LIB_0__::func_492(iParam0) == 183) || __LIB_0__::func_492(iParam0) == 195) || __LIB_0__::func_492(iParam0) == 198))
					{
						return 0;
					}
					if (__LIB_0__::func_315(iParam0) && (__LIB_0__::func_492(iParam0) == 238 || __LIB_0__::func_492(iParam0) == 249))
					{
						return 0;
					}
					if (Global_1835502.f_533[iParam0])
					{
						return 0;
					}
					switch (__LIB_2__::func_839(iParam0))
					{
						case 6:
						case 7:
							if (__LIB_0__::func_315(iParam0))
							{
								return 0;
							}
							break;
					}
					if (__LIB_0__::func_927(iParam0))
					{
						return 0;
						return 0;
					}
					if (__LIB_1__::func_830(iParam0))
					{
						return 0;
					}
					if (__LIB_0__::func_492(iParam0) == 276)
					{
						if (__LIB_0__::func_525(iParam0) == 3)
						{
							return 0;
						}
					}
					break;
			}
			break;
	}
	return 1;
}

void func_1060()//Position - 0x4685B
{
	char* sVar0;
	__LIB_1__::func_602(0, 0);
	__LIB_3__::func_564(-1);
	sVar0 = __LIB_7__::func_710();
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
		__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
		__LIB_1__::func_792(37, sVar0, -1, 0);
	}
	else
	{
		__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
		__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
		__LIB_1__::func_791(236, sVar0, -1);
	}
	MISC::SET_BIT(&(Local_122.f_359), 6);
}

void func_1062()//Position - 0x468F4
{
	int iVar0;
	struct<16> Var1;
	if (__LIB_0__::func_156(Local_122.f_358, 0, 1))
	{
		__LIB_1__::func_602(0, 0);
		__LIB_1__::func_767("STRING");
		StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(Local_122.f_358), 64);
		func_79(Var1);
		__LIB_1__::func_766(1, 1, 0, 0, 0);
		__LIB_1__::func_765(1, 2, 1, 1, 1);
		__LIB_12__::func_593(0, 0, 0, 0, 0);
		if (__LIB_2__::func_104(81, 0, 0))
		{
			__LIB_3__::func_572(iVar0, "GC_MENU41" /* GXT: Call Mercenaries */, 0, 1, 0, 0, 0);
			__LIB_3__::func_572(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
			__LIB_13__::func_722(__LIB_12__::func_845(12), 0);
		}
		else
		{
			__LIB_3__::func_572(iVar0, "GC_MENU41" /* GXT: Call Mercenaries */, 0, 1, 0, 0, 0);
			__LIB_3__::func_572(iVar0, "", 1, 1, 0, 0, 0);
			__LIB_14__::func_431(15, 0);
		}
		iVar0++;
		__LIB_3__::func_564(-1);
		if (func_1120())
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
				__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
			}
			else
			{
				__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
				__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
			}
			MISC::SET_BIT(&(Local_122.f_359), 6);
		}
		__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
		Local_122.f_181.f_2 = 1;
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
		Local_122.f_178 = 1;
	}
}

int func_1063()//Position - 0x46A1D
{
	switch (Local_122.f_178)
	{
		case 2:
			if (func_1052(Local_122.f_358))
			{
				if (iLocal_124)
				{
					if (!__LIB_3__::func_365(Local_122.f_358))
					{
						iLocal_124 = 0;
						MISC::CLEAR_BIT(&(Local_122.f_359), 4);
					}
				}
				else if (__LIB_3__::func_365(Local_122.f_358))
				{
					iLocal_124 = 1;
					MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				Local_122.f_178 = 1;
				return 0;
			}
			break;
		case 3:
			if (func_1052(Local_122.f_358))
			{
				if (iLocal_127 != PLAYER::GET_PLAYER_WANTED_LEVEL(Local_122.f_358))
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				Local_122.f_178 = 1;
				return 0;
			}
			break;
		case 8:
			if (!func_1052(Local_122.f_358))
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				Local_122.f_178 = 1;
				return 0;
			}
			break;
		case 0:
		case 1:
		case 4:
		case 7:
		case 5:
		case 9:
		case 6:
		case 18:
		case 19:
		case 20:
		case 24:
		case 25:
		case 26:
			break;
	}
	return 1;
}

void func_1064()//Position - 0x46B56
{
	int iVar0;
	int iVar1;
	bool bVar2;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("MPCT_MERRYH" /* GXT: MERRYWEATHER */);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	if (__LIB_2__::func_104(61, 0, 0))
	{
		iVar1 = __LIB_12__::func_672(8);
		bVar2 = true;
		if ((iVar1 > 0 || !func_309(8)) || !func_279(8))
		{
			bVar2 = false;
		}
		func_512(8, 0, "MPCT_MERRY0" /* GXT: Ammo Drop */, bVar2);
		__LIB_3__::func_572(0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		__LIB_13__::func_722(__LIB_12__::func_845(8), 0);
	}
	else
	{
		__LIB_3__::func_572(0, "MPCT_MERRY0" /* GXT: Ammo Drop */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(0, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	Local_122.f_181.f_70[iVar0] = 0;
	iVar0++;
	if (__LIB_2__::func_104(62, 0, 0))
	{
		iVar1 = __LIB_12__::func_672(10);
		bVar2 = true;
		if ((iVar1 > 0 || !func_309(10)) || !func_279(10))
		{
			bVar2 = false;
		}
		func_512(10, 1, "MPCT_MERRY3" /* GXT: Backup Helicopter */, bVar2);
		__LIB_3__::func_572(1, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		__LIB_13__::func_722(__LIB_12__::func_845(10), 0);
	}
	else
	{
		__LIB_3__::func_572(1, "MPCT_MERRY3" /* GXT: Backup Helicopter */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(1, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	Local_122.f_181.f_70[iVar0] = 1;
	iVar0++;
	if (__LIB_2__::func_104(63, 0, 0))
	{
		iVar1 = __LIB_12__::func_672(9);
		bVar2 = true;
		if (((iVar1 > 0 || !func_309(9)) || !func_279(9)) || __LIB_1__::func_832(PLAYER::PLAYER_ID()))
		{
			bVar2 = false;
		}
		func_512(9, 2, "MPCT_MERRY1" /* GXT: Boat Pickup */, bVar2);
		__LIB_3__::func_572(2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		__LIB_13__::func_722(__LIB_12__::func_845(9), 0);
	}
	else
	{
		__LIB_3__::func_572(2, "MPCT_MERRY1" /* GXT: Boat Pickup */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(2, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	Local_122.f_181.f_70[iVar0] = 2;
	iVar0++;
	if (__LIB_2__::func_104(77, 0, 0))
	{
		iVar1 = __LIB_12__::func_672(13);
		bVar2 = true;
		if ((((iVar1 > 0 || !func_309(13)) || !func_279(13)) || __LIB_1__::func_832(PLAYER::PLAYER_ID())) || __LIB_0__::func_938(PLAYER::PLAYER_ID()))
		{
			bVar2 = false;
		}
		func_512(13, 3, "MPCT_MERRY5" /* GXT: Helicopter Pickup */, bVar2);
		__LIB_3__::func_572(3, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		__LIB_13__::func_722(__LIB_12__::func_845(13), 0);
	}
	else
	{
		__LIB_3__::func_572(3, "MPCT_MERRY5" /* GXT: Helicopter Pickup */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(3, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	Local_122.f_181.f_70[iVar0] = 3;
	iVar0++;
	if (__LIB_2__::func_104(81, 0, 0))
	{
		iVar1 = __LIB_12__::func_672(12);
		bVar2 = true;
		if (((iVar1 > 0 || !func_309(12)) || !func_279(12)) || __LIB_2__::func_841(PLAYER::PLAYER_ID()))
		{
			bVar2 = false;
		}
		func_512(12, 4, "GC_MENU41" /* GXT: Call Mercenaries */, bVar2);
		__LIB_3__::func_572(4, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		__LIB_13__::func_722(__LIB_12__::func_845(12), 0);
	}
	else
	{
		__LIB_3__::func_572(4, "GC_MENU41" /* GXT: Call Mercenaries */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(4, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	Local_122.f_181.f_70[iVar0] = 4;
	iVar0++;
	if (__LIB_2__::func_104(64, 0, 0))
	{
		iVar1 = __LIB_12__::func_672(11);
		bVar2 = true;
		if (((iVar1 > 0 || !func_309(11)) || !func_279(11)) || BitTest(Global_44241, 10))
		{
			bVar2 = false;
		}
		func_512(11, 5, "MPCT_MERRY4" /* GXT: Airstrike */, bVar2);
		__LIB_3__::func_572(5, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		__LIB_13__::func_722(__LIB_12__::func_845(11), 0);
	}
	else
	{
		__LIB_3__::func_572(5, "MPCT_MERRY4" /* GXT: Airstrike */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(5, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	Local_122.f_181.f_70[iVar0] = 5;
	iVar0++;
	__LIB_3__::func_564(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = iVar0;
}

void func_1066()//Position - 0x46FC6
{
	switch (Local_122.f_178)
	{
		case 5:
			if (__LIB_3__::func_67(0, -1, 1))
			{
				if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					func_1067();
					MISC::SET_BIT(&(Local_122.f_359), 4);
					func_123();
				}
				else
				{
					func_123();
				}
			}
			break;
		case 1:
			if (__LIB_3__::func_67(0, -1, 0))
			{
				if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					func_1060();
					MISC::SET_BIT(&(Local_122.f_359), 4);
					func_148();
					MISC::SET_BIT(&iLocal_143, 20);
					func_1025();
				}
				else
				{
					func_148();
					func_1025();
				}
			}
			break;
	}
}

void func_1067()//Position - 0x4706C
{
	int iVar0;
	bool bVar1;
	int iVar2;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("MPCT_LAMAR" /* GXT: LAMAR */);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	if (__LIB_2__::func_104(67, 0, 0))
	{
		iVar2 = __LIB_12__::func_672(2);
		bVar1 = true;
		if ((iVar2 > 0 || !func_309(2)) || !func_279(2))
		{
			bVar1 = false;
		}
		func_512(2, iVar0, "GC_MENU7" /* GXT: Call Mugger */, bVar1);
		__LIB_3__::func_572(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
		__LIB_13__::func_722(__LIB_12__::func_845(2), 0);
	}
	else
	{
		__LIB_3__::func_572(iVar0, "GC_MENU7" /* GXT: Call Mugger */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(iVar0, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	Local_122.f_181.f_70[iVar0] = 0;
	iVar0++;
	if (func_1068(0))
	{
		bVar1 = true;
		if (!func_309(38) || !func_279(38))
		{
			bVar1 = false;
		}
		__LIB_3__::func_572(iVar0, "FM_LAMC_FR" /* GXT: Restart Lamar Missions */, 0, bVar1, 0, 0, 0);
		Local_122.f_181.f_70[iVar0] = 1;
		iVar0++;
	}
	else
	{
		Local_122.f_181.f_70[iVar0] = 2;
		iVar0++;
	}
	__LIB_3__::func_564(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = iVar0;
}

bool func_1068(int iParam0)//Position - 0x471EF
{
	return (__LIB_2__::func_464(iParam0) > Global_794709.f_203824[iParam0 /*11*/].f_9 && __LIB_26__::func_435(iParam0) > 8);
}

void func_1075()//Position - 0x47334
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	func_1118();
	func_1104();
	func_1097();
	iVar0 = 0;
	switch (Local_122.f_178)
	{
		case 0:
			if (__LIB_3__::func_67(0, -1, 1))
			{
				if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					func_1096();
					MISC::SET_BIT(&(Local_122.f_359), 4);
					func_123();
				}
				else
				{
					func_1095();
					func_123();
					if (BitTest(Local_122.f_359, 18))
					{
						if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(iLocal_141), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
						{
							iVar1 = func_892(joaat("SERVICE_SPEND_LOCATE_VEHICLE"), __LIB_12__::func_845(iLocal_141), 0, 0);
							if (iVar1 == 1)
							{
								MISC::CLEAR_BIT(&(Local_122.f_359), 17);
								MISC::CLEAR_BIT(&(Local_122.f_359), 18);
								switch (iLocal_141)
								{
									case 23:
										MISC::SET_BIT(&(Global_2703735.f_3673), 3);
										break;
									case 24:
										MISC::SET_BIT(&(Global_2703735.f_3673), 4);
										break;
									case 25:
										MISC::SET_BIT(&(Global_2703735.f_3673), 5);
										break;
									case 26:
										MISC::SET_BIT(&(Global_2703735.f_3673), 6);
										break;
									case 57:
										MISC::SET_BIT(&(Global_2703735.f_3673), 15);
										break;
								}
								MISC::SET_BIT(&(Global_2703735.f_3673), 0);
							}
							else if (iVar1 == 0)
							{
								MISC::CLEAR_BIT(&(Local_122.f_359), 17);
								MISC::CLEAR_BIT(&(Local_122.f_359), 18);
								func_92(1, 0);
							}
							else
							{
								return;
							}
						}
						else
						{
							func_92(1, 0);
						}
					}
					if (BitTest(Global_2703735.f_3673, 0))
					{
						if (BitTest(Global_2703735.f_3673, 1))
						{
							if (BitTest(Global_2703735.f_3673, 2))
							{
								if (BitTest(Global_2703735.f_3673, 3))
								{
									iVar0 = __LIB_12__::func_845(23);
									if (__LIB_0__::func_112())
									{
										NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(iLocal_140));
									}
									MONEY::NETWORK_BUY_ITEM(iVar0, Global_2703735.f_3674, 10, -1, false, "LESTER", 0, 0, 0, true);
									__LIB_1__::func_34(iLocal_140);
									func_1(Local_122.f_1, "CT_AUD", "MPCT_LoBoat", &Local_166, 0);
								}
								else if (BitTest(Global_2703735.f_3673, 4))
								{
									iVar0 = __LIB_12__::func_845(24);
									if (__LIB_0__::func_112())
									{
										NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(iLocal_140));
									}
									MONEY::NETWORK_BUY_ITEM(iVar0, Global_2703735.f_3674, 10, -1, false, "LESTER", 0, 0, 0, true);
									__LIB_1__::func_34(iLocal_140);
									func_1(Local_122.f_1, "CT_AUD", "MPCT_LoHeli", &Local_166, 0);
								}
								else if (BitTest(Global_2703735.f_3673, 5))
								{
									iVar0 = __LIB_12__::func_845(25);
									if (__LIB_0__::func_112())
									{
										NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(iLocal_140));
									}
									MONEY::NETWORK_BUY_ITEM(iVar0, Global_2703735.f_3674, 10, -1, false, "LESTER", 0, 0, 0, true);
									__LIB_1__::func_34(iLocal_140);
									func_1(Local_122.f_1, "CT_AUD", "MPCT_LoCar", &Local_166, 0);
								}
								else if (BitTest(Global_2703735.f_3673, 6))
								{
									iVar0 = __LIB_12__::func_845(26);
									if (__LIB_0__::func_112())
									{
										NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(iLocal_140));
									}
									MONEY::NETWORK_BUY_ITEM(iVar0, Global_2703735.f_3674, 10, -1, false, "LESTER", 0, 0, 0, true);
									__LIB_1__::func_34(iLocal_140);
									func_1(Local_122.f_1, "CT_AUD", "MPCT_LoPlane", &Local_166, 0);
								}
								else if (BitTest(Global_2703735.f_3673, 15))
								{
									iVar0 = __LIB_12__::func_845(57);
									if (__LIB_0__::func_112())
									{
										NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(iLocal_140));
									}
									MONEY::NETWORK_BUY_ITEM(iVar0, Global_2703735.f_3674, 10, -1, false, "LESTER", 0, 0, 0, true);
									__LIB_1__::func_34(iLocal_140);
									func_1(Local_122.f_1, "CT_AUD", "MPCT_LoHeli", &Local_166, 0);
								}
								func_32(4);
							}
							else
							{
								func_889(__LIB_12__::func_845(iLocal_141), 5, 2, 1);
								func_92(1, 0);
							}
							__LIB_12__::func_773();
						}
					}
					if (BitTest(Global_2815059.f_4624, 3))
					{
						iVar2 = __LIB_12__::func_845(35);
						if ((__LIB_1__::func_833(1) >= iVar2 || MONEY::NETWORK_CAN_SPEND_MONEY(iVar2, false, true, false, -1, 0)) || BitTest(Local_122.f_359, 17))
						{
							iVar3 = func_892(joaat("SERVICE_SPEND_COPS_TURN_EYE"), iVar2, 0, 0);
							if (iVar3 == 1)
							{
								MISC::CLEAR_BIT(&(Local_122.f_359), 17);
								MISC::SET_BIT(&(Global_2815059.f_4624), 0);
								MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 17);
								MISC::SET_BIT(&(Global_2815059.f_4624), 2);
								MISC::CLEAR_BIT(&(Global_2815059.f_4624), 1);
								func_1(Local_122.f_1, "CT_AUD", "MPCT_Lconf", &Local_166, 0);
								__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[35 /*2*/]), 1, 0);
								__LIB_42__::func_920(35, -1, -1);
								MISC::CLEAR_BIT(&(Global_2815059.f_4624), 3);
								func_32(4);
							}
							else if (iVar3 == 0)
							{
								MISC::CLEAR_BIT(&(Global_2815059.f_4624), 3);
								MISC::CLEAR_BIT(&(Local_122.f_359), 17);
								func_92(1, 0);
							}
							else
							{
								return;
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Global_2815059.f_4624), 3);
							MISC::SET_BIT(&bLocal_169, 0);
							func_1(Local_122.f_1, "CT_AUD", "MPCT_LSmon", &Local_166, 0);
							func_92(0, 0);
						}
					}
				}
			}
			break;
		case 1:
			if (__LIB_3__::func_67(0, -1, 0))
			{
				if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					func_1060();
					MISC::SET_BIT(&(Local_122.f_359), 4);
					func_148();
					MISC::SET_BIT(&iLocal_143, 20);
					func_1025();
				}
				else
				{
					func_148();
					func_1025();
				}
			}
			break;
		case 2:
			if (func_1063())
			{
				if (__LIB_3__::func_67(0, -1, 0))
				{
					if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
					{
						func_1087();
						MISC::SET_BIT(&(Local_122.f_359), 4);
						func_123();
					}
					else
					{
						func_123();
					}
				}
			}
			break;
		case 3:
			if (func_1063())
			{
				if (__LIB_3__::func_67(0, -1, 0))
				{
					if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
					{
						func_1085();
						MISC::SET_BIT(&(Local_122.f_359), 4);
					}
					if (BitTest(Local_122.f_359, 4))
					{
						if (iLocal_142 == 0)
						{
							if (__LIB_0__::func_156(Local_122.f_358, 0, 1))
							{
								iVar0 = Local_122.f_181.f_103[0] * 500;
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(Local_122.f_358) == 0)
								{
									__LIB_1__::func_789("GC_MENU54" /* GXT: Currently has no Wanted Level.~n~Give this player a Wanted Level of ~1~?~n~Cost: $~1~ */, 100, 0);
									__LIB_8__::func_283(Local_122.f_181.f_103[0]);
									__LIB_8__::func_283(iVar0);
								}
								else
								{
									__LIB_1__::func_789("GC_MENU32" /* GXT: Current Wanted Level ~1~~n~Give this player a Wanted Level of ~1~?~n~Cost: $~1~ */, 100, 0);
									__LIB_8__::func_283(PLAYER::GET_PLAYER_WANTED_LEVEL(Local_122.f_358));
									__LIB_8__::func_283(Local_122.f_181.f_103[0]);
									__LIB_8__::func_283(iVar0);
								}
							}
						}
						func_123();
					}
				}
			}
			break;
		case 17:
			if (__LIB_3__::func_67(0, -1, 0))
			{
				if (!BitTest(Local_122.f_359, 4))
				{
					if (func_1078() || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
					{
						MISC::SET_BIT(&(Local_122.f_359), 4);
						func_123();
					}
					else
					{
						return;
					}
				}
				else
				{
					func_123();
				}
			}
			break;
		case 22:
			if (__LIB_3__::func_67(0, -1, 0))
			{
				if (!BitTest(Local_122.f_359, 4))
				{
					if (func_1076() || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
					{
						MISC::SET_BIT(&(Local_122.f_359), 4);
						func_123();
					}
					else
					{
						return;
					}
				}
				else
				{
					func_123();
				}
			}
			break;
	}
}

int func_1076()//Position - 0x479FB
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<16> Var3;
	iVar2 = 0;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("HPPHONE_REPLAY");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	iVar2 = 0;
	while (iVar2 < 3)
	{
		bVar1 = true;
		Var3 = { func_1077(iVar2) };
		__LIB_3__::func_572(iVar2, "STRING", 1, bVar1, 0, 0, 0);
		__LIB_13__::func_396(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Var3), 0, 0, 0);
		iVar0++;
		iVar2++;
	}
	MISC::SET_BIT(&bLocal_169, 2);
	iVar0++;
	__LIB_3__::func_564(-1);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
		__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
	}
	else
	{
		__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
		__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
	}
	MISC::SET_BIT(&(Local_122.f_359), 6);
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = iVar0;
	return 1;
}

struct<16> func_1077(int iParam0)//Position - 0x47ADD
{
	struct<16> Var0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "HPSTRAND_IAAb" /* GXT: The Data Breaches */, 64);
			break;
		case 1:
			StringCopy(&Var0, "HPSTRAND_SUBb" /* GXT: The Bogdan Problem */, 64);
			break;
		case 2:
			StringCopy(&Var0, "HPSTRAND_MSILb" /* GXT: The Doomsday Scenario */, 64);
			break;
	}
	return Var0;
}

int func_1078()//Position - 0x47B24
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	struct<16> Var6;
	struct<10> Var7;
	uVar2 = __LIB_12__::func_841(PLAYER::PLAYER_ID());
	iVar3 = __LIB_29__::func_189(12, uVar2, &uLocal_182, &iLocal_183);
	bVar4 = false;
	iVar5 = 0;
	Var7.f_1 = -1;
	Var7.f_2 = -1;
	Var7.f_9 = -1;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("GC_MENURH" /* GXT: Replay Heist */);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	if (iVar3 > 0)
	{
		bVar4 = false;
		while (bVar4 < iVar3)
		{
			iVar5 = uLocal_182[bVar4];
			Var7 = { Global_2666436[iVar5 /*14*/].f_2 };
			Var6 = { func_1080(&Var7, 0) };
			if (!BitTest(iLocal_183, bVar4))
			{
				bVar1 = false;
			}
			else
			{
				bVar1 = true;
			}
			__LIB_3__::func_572(iVar0, "STRING", 1, bVar1, 0, 0, 0);
			__LIB_13__::func_396(&Var6, 0, 0, 0);
			iVar0++;
			bVar4++;
		}
	}
	else
	{
		func_1079();
	}
	if (iVar3 == 1)
	{
		MISC::SET_BIT(&bLocal_169, 2);
		iVar0++;
	}
	else
	{
		MISC::CLEAR_BIT(&bLocal_169, 2);
	}
	__LIB_3__::func_564(-1);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
		__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
	}
	else
	{
		__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
		__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
	}
	MISC::SET_BIT(&(Local_122.f_359), 6);
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = iVar0;
	return 1;
}

void func_1079()//Position - 0x47C7F
{
	Local_122.f_178 = 0;
	MISC::CLEAR_BIT(&bLocal_169, 2);
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	Local_122.f_181.f_69 = uLocal_171;
}

struct<16> func_1080(var uParam0, bool bParam1)//Position - 0x47CA7
{
	struct<16> Var0;
	int iVar1;
	StringCopy(&Var0, "UNKNOWN", 64);
	if (bParam1)
	{
		StringCopy(&Var0, "", 64);
	}
	if (!bParam1)
	{
		if (__LIB_12__::func_466(uParam0))
		{
			if (BitTest(Global_1573916.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2660383[uParam0->f_9 /*16*/];
			}
			return Global_2657492.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}
	if (__LIB_2__::func_707(uParam0->f_1))
	{
		if (__LIB_2__::func_706(uParam0))
		{
			return Global_2660249.f_1.f_12;
		}
		return Var0;
	}
	iVar1 = func_1081(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_22;
		case 62:
			return Global_998606.f_604[iVar1 /*88*/].f_22;
		case 40:
			return Var0;
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return Global_1020252.f_5[iVar1 /*88*/].f_22;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_1081(var uParam0)//Position - 0x47DCA
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (__LIB_2__::func_707(uParam0->f_1))
	{
		if (__LIB_2__::func_706(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (BitTest(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 2018)
			{
				if (BitTest(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		case 62:
			if (BitTest(Global_998606.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_998606.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_998606.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (BitTest(Global_998606.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_998606.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		case 40:
			return uParam0->f_1;
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (BitTest(Global_1020252.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_1020252.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (BitTest(Global_1020252.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1573131.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (BitTest(Global_1020252.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_1020252.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0 = (iVar0 + 1);
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

void func_1085()//Position - 0x480B3
{
	int iVar0;
	struct<8> Var1;
	if (__LIB_0__::func_156(Local_122.f_358, 0, 1))
	{
		iLocal_127 = PLAYER::GET_PLAYER_WANTED_LEVEL(Local_122.f_358);
		__LIB_1__::func_602(0, 0);
		StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(Local_122.f_358), 64);
		__LIB_1__::func_767("GC_MENU27" /* GXT: ~s~SET WANTED LEVEL */);
		__LIB_1__::func_766(1, 1, 0, 0, 0);
		__LIB_1__::func_765(1, 2, 1, 1, 1);
		__LIB_12__::func_593(0, 1, 0, 0, 0);
		Local_122.f_181.f_2 = 1;
		Local_122.f_181.f_69 = 0;
		__LIB_3__::func_572(iVar0, "STRING", 1, 1, 0, 0, 0);
		__LIB_14__::func_433(&Var1, 0, 1, 1);
		__LIB_3__::func_572(iVar0, "GC_MENU3" /* GXT: ~1~~n~ Cost: $~1~ */, 1, 1, 0, 0, 0);
		__LIB_13__::func_722(Local_122.f_181.f_103[0], 0);
		__LIB_3__::func_564(-1);
		Local_122.f_181.f_3[0] = iLocal_127 + 1;
		Local_122.f_181.f_36[0] = 5;
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			if (Local_122.f_181.f_69 == 0)
			{
				__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			}
			__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			if (Local_122.f_181.f_69 == 0)
			{
				__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
			}
			__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
		__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
		Local_122.f_178 = 1;
	}
}

void func_1087()//Position - 0x4832D
{
	int iVar0;
	bool bVar1;
	struct<8> Var2;
	if (__LIB_0__::func_156(Local_122.f_358, 0, 1))
	{
		bVar1 = __LIB_3__::func_365(Local_122.f_358);
		__LIB_1__::func_602(0, 0);
		__LIB_1__::func_767("STRING");
		if (bVar1)
		{
			__LIB_1__::func_767("BB_CUR_TITLE" /* GXT: CURRENT BOUNTY */);
		}
		else
		{
			__LIB_1__::func_767("BB_SET_TITLE" /* GXT: SET NEW BOUNTY */);
		}
		__LIB_1__::func_766(1, 1, 0, 0, 0);
		__LIB_1__::func_765(1, 2, 1, 1, 1);
		__LIB_12__::func_593(0, 1, 0, 0, 0);
		Local_122.f_181.f_2 = 2;
		StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(Local_122.f_358), 64);
		if (bVar1)
		{
			__LIB_3__::func_572(iVar0, "STRING", 1, 1, 0, 0, 0);
			__LIB_14__::func_433(&Var2, 0, 1, 1);
			__LIB_3__::func_572(iVar0, "BB_CASHAMT" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
			__LIB_13__::func_722(func_1089(Local_122.f_358), 0);
			Local_122.f_181.f_3[1] = 0;
			Local_122.f_181.f_36[1] = 0;
			__LIB_3__::func_564(-1);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
				__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
			}
			else
			{
				__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
				__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
			}
			MISC::SET_BIT(&(Local_122.f_359), 6);
		}
		else
		{
			__LIB_3__::func_572(iVar0, "STRING", 1, 1, 0, 0, 0);
			__LIB_14__::func_433(&Var2, 0, 1, 1);
			__LIB_3__::func_572(iVar0, "BB_CASHAMT" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
			__LIB_13__::func_722(__LIB_28__::func_745(Local_122.f_181.f_103[0]), 0);
			__LIB_3__::func_564(-1);
			Local_122.f_181.f_3[0] = 0;
			Local_122.f_181.f_36[0] = 4;
			Local_122.f_181.f_3[1] = 0;
			Local_122.f_181.f_3[1] = 0;
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
				__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
			}
			else
			{
				__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
				__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
			}
			MISC::SET_BIT(&(Local_122.f_359), 6);
		}
		iVar0++;
		__LIB_3__::func_572(iVar0, "BB_LC_EXIT" /* GXT: Exit */, 0, 1, 0, 0, 0);
		iVar0++;
		if (Local_122.f_181.f_69 == 0)
		{
			if (!bVar1)
			{
				__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
			}
			else
			{
				__LIB_3__::func_110(Local_122.f_181.f_69, 1, 0);
			}
		}
		else
		{
			__LIB_3__::func_110(Local_122.f_181.f_69, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
		Local_122.f_178 = 1;
	}
}

int func_1089(int iParam0)//Position - 0x485BB
{
	if (Global_2815059.f_1856.f_19[iParam0] != 0)
	{
		return Global_2815059.f_1856.f_19[iParam0];
	}
	return Global_1835502.f_4[iParam0 /*3*/].f_1;
}

void func_1095()//Position - 0x48A84
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	bVar1 = false;
	if (BitTest(uLocal_172, 1))
	{
		iVar0 = __LIB_12__::func_672(20);
		if ((iVar0 <= 0 && func_309(20)) && func_279(20))
		{
			MISC::CLEAR_BIT(&uLocal_172, 1);
			bVar1 = true;
		}
	}
	if (BitTest(uLocal_172, 2))
	{
		iVar0 = __LIB_12__::func_672(6);
		if ((iVar0 <= 0 && func_309(6)) && func_279(6))
		{
			MISC::CLEAR_BIT(&uLocal_172, 2);
			bVar1 = true;
		}
	}
	if (BitTest(uLocal_172, 3))
	{
		iVar0 = __LIB_12__::func_672(6);
		if ((iVar0 <= 0 && func_309(14)) && func_279(14))
		{
			MISC::CLEAR_BIT(&uLocal_172, 3);
			bVar1 = true;
		}
	}
	if (BitTest(uLocal_172, 4))
	{
		iVar0 = __LIB_12__::func_672(15);
		if ((iVar0 <= 0 && func_309(15)) && func_279(15))
		{
			MISC::CLEAR_BIT(&uLocal_172, 4);
			bVar1 = true;
		}
	}
	if (BitTest(uLocal_172, 0))
	{
		iVar0 = __LIB_12__::func_672(35);
		if (iVar0 <= 0)
		{
			MISC::CLEAR_BIT(&uLocal_172, 0);
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		func_1096();
	}
}

void func_1096()//Position - 0x48B98
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("BB_FIRST_0" /* GXT: LESTER */);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	if (__LIB_2__::func_104(29, 0, 0))
	{
		bVar1 = true;
		if (!func_309(1) || !func_279(1))
		{
			bVar1 = false;
		}
		func_512(1, iVar2, "BB_FIRST_1" /* GXT: Set Bounty */, bVar1);
	}
	else
	{
		__LIB_3__::func_572(iVar2, "BB_FIRST_1" /* GXT: Set Bounty */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 0;
	iVar2++;
	if (__LIB_2__::func_104(65, 0, 0))
	{
		iVar0 = __LIB_12__::func_672(20);
		bVar1 = true;
		if ((iVar0 > 0 || !func_309(20)) || !func_279(20))
		{
			MISC::SET_BIT(&uLocal_172, 1);
			bVar1 = false;
			bVar1 = false;
		}
		func_512(20, iVar2, "GC_MENU26" /* GXT: Remove Wanted Level */, bVar1);
		iVar3 = __LIB_12__::func_845(20);
		if (iVar3 <= 0)
		{
			__LIB_3__::func_572(iVar2, "PEG_FREE" /* GXT: FREE */, 0, bVar1, 0, 0, 0);
		}
		else
		{
			__LIB_3__::func_572(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
			__LIB_13__::func_722(iVar3, 0);
		}
	}
	else
	{
		__LIB_3__::func_572(iVar2, "GC_MENU26" /* GXT: Remove Wanted Level */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 1;
	iVar2++;
	if (__LIB_2__::func_104(75, 0, 0))
	{
		iVar0 = __LIB_12__::func_672(6);
		bVar1 = true;
		if (((iVar0 > 0 || !func_309(6)) || !func_279(6)) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_208)
		{
			MISC::SET_BIT(&uLocal_172, 2);
			bVar1 = false;
		}
		func_512(6, iVar2, "GC_MENU25" /* GXT: Off the Radar */, bVar1);
		__LIB_3__::func_572(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
		__LIB_13__::func_722(__LIB_12__::func_845(6), 0);
	}
	else
	{
		__LIB_3__::func_572(iVar2, "GC_MENU25" /* GXT: Off the Radar */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 2;
	iVar2++;
	if (__LIB_2__::func_104(95, 0, 0))
	{
		iVar0 = __LIB_12__::func_672(14);
		bVar1 = true;
		if ((iVar0 > 0 || !func_309(14)) || !func_279(14))
		{
			MISC::SET_BIT(&uLocal_172, 3);
			bVar1 = false;
		}
		func_512(14, iVar2, "GC_MENU47" /* GXT: Reveal Players */, bVar1);
		__LIB_3__::func_572(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
		__LIB_13__::func_722(__LIB_12__::func_845(14), 0);
	}
	else
	{
		__LIB_3__::func_572(iVar2, "GC_MENU47" /* GXT: Reveal Players */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 3;
	iVar2++;
	if (__LIB_2__::func_104(88, 0, 0))
	{
		iVar0 = __LIB_12__::func_672(15);
		bVar1 = true;
		if ((iVar0 > 0 || !func_309(15)) || !func_279(15))
		{
			MISC::SET_BIT(&uLocal_172, 4);
			bVar1 = false;
		}
		func_512(15, iVar2, "GC_MENU48" /* GXT: Request Job */, bVar1);
		if (__LIB_12__::func_845(15) > 0)
		{
			__LIB_3__::func_572(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
			__LIB_13__::func_722(__LIB_12__::func_845(15), 0);
		}
	}
	else
	{
		__LIB_3__::func_572(iVar2, "GC_MENU48" /* GXT: Request Job */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 4;
	iVar2++;
	if (__LIB_2__::func_104(121, 0, 0))
	{
		iVar0 = __LIB_12__::func_672(36);
		bVar1 = true;
		if ((((iVar0 > 0 || !func_309(36)) || !func_279(36)) || __LIB_3__::func_484()) || (__LIB_1__::func_511(PLAYER::PLAYER_ID(), 0, 0) && func_255()))
		{
			MISC::SET_BIT(&uLocal_172, 5);
			bVar1 = false;
		}
		func_512(36, iVar2, "GC_MENURH" /* GXT: Replay Heist */, bVar1);
		if (__LIB_12__::func_845(36) > 0)
		{
			__LIB_3__::func_572(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
			__LIB_13__::func_722(__LIB_12__::func_845(36), 0);
		}
	}
	else
	{
		__LIB_3__::func_572(iVar2, "GC_MENURH" /* GXT: Replay Heist */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 10;
	iVar2++;
	if (__LIB_2__::func_104(96, 0, 0))
	{
		iVar0 = __LIB_12__::func_672(37);
		bVar1 = true;
		if (((iVar0 > 0 || !func_309(37)) || !func_279(37)) || !__LIB_3__::func_484())
		{
			bVar1 = false;
		}
		func_512(37, iVar2, "GC_MENUCH" /* GXT: Cancel Heist */, bVar1);
		if (__LIB_12__::func_845(37) > 0)
		{
			__LIB_3__::func_572(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
			__LIB_13__::func_722(__LIB_12__::func_845(15), 0);
		}
	}
	else
	{
		__LIB_3__::func_572(iVar2, "GC_MENUCH" /* GXT: Cancel Heist */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 11;
	iVar2++;
	if (__LIB_10__::func_196(PLAYER::PLAYER_ID()))
	{
		bVar1 = true;
		if (__LIB_10__::func_435(PLAYER::PLAYER_ID(), 0) == -1)
		{
			bVar1 = false;
		}
		func_512(51, iVar2, "HPPHONE_CANCEL" /* GXT: Cancel The Doomsday Heist */, bVar1);
		if (__LIB_12__::func_845(51) > 0)
		{
			__LIB_3__::func_572(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
			__LIB_13__::func_722(__LIB_12__::func_845(51), 0);
		}
	}
	else
	{
		__LIB_3__::func_572(iVar2, "HPPHONE_CANCEL" /* GXT: Cancel The Doomsday Heist */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 13;
	iVar2++;
	if ((__LIB_4__::func_895(PLAYER::PLAYER_ID(), 1) && __LIB_4__::func_895(PLAYER::PLAYER_ID(), 2)) && __LIB_4__::func_895(PLAYER::PLAYER_ID(), 3))
	{
		bVar1 = true;
		if (!__LIB_9__::func_639(PLAYER::PLAYER_ID()) || __LIB_2__::func_573(PLAYER::PLAYER_ID()))
		{
			bVar1 = false;
		}
		func_512(61, iVar2, "CSH_LPHONE_CANCEL" /* GXT: Cancel The Diamond Casino Heist */, bVar1);
		if (__LIB_12__::func_845(61) > 0)
		{
			__LIB_3__::func_572(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
			__LIB_13__::func_722(__LIB_12__::func_845(61), 0);
		}
	}
	else
	{
		__LIB_3__::func_572(iVar2, "CSH_LPHONE_CANCEL" /* GXT: Cancel The Diamond Casino Heist */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 15;
	iVar2++;
	if (__LIB_2__::func_104(104, 0, 0))
	{
		iVar0 = __LIB_12__::func_672(25);
		bVar1 = true;
		if (((BitTest(Global_2703735.f_3673, 10) || !func_309(23)) || !func_279(23)) || (iVar0 > 0 && (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(__LIB_5__::func_23(46), -1, false, 0) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 194)))
		{
			bVar1 = false;
		}
		func_512(23, iVar2, "GC_MENU49" /* GXT: Locate a Boat */, bVar1);
		__LIB_3__::func_572(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
		__LIB_13__::func_722(__LIB_12__::func_845(23), 0);
	}
	else
	{
		__LIB_3__::func_572(iVar2, "GC_MENU49" /* GXT: Locate a Boat */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 5;
	iVar2++;
	if (__LIB_2__::func_104(98, 0, 0))
	{
		iVar0 = __LIB_12__::func_672(25);
		bVar1 = true;
		if (((BitTest(Global_2703735.f_3673, 10) || !func_309(24)) || !func_279(24)) || (iVar0 > 0 && (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(__LIB_5__::func_23(46), -1, false, 0) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 194)))
		{
			bVar1 = false;
		}
		func_512(24, iVar2, "GC_MENU50" /* GXT: Locate a Helicopter */, bVar1);
		__LIB_3__::func_572(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
		__LIB_13__::func_722(__LIB_12__::func_845(24), 0);
	}
	else
	{
		__LIB_3__::func_572(iVar2, "GC_MENU50" /* GXT: Locate a Helicopter */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 6;
	iVar2++;
	if (__LIB_2__::func_104(103, 0, 0))
	{
		iVar0 = __LIB_12__::func_672(25);
		bVar1 = true;
		if (((BitTest(Global_2703735.f_3673, 10) || !func_309(25)) || !func_279(25)) || (iVar0 > 0 && (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(__LIB_5__::func_23(46), -1, false, 0) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 194)))
		{
			bVar1 = false;
		}
		func_512(25, iVar2, "GC_MENU51" /* GXT: Locate a Car */, bVar1);
		__LIB_3__::func_572(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
		__LIB_13__::func_722(__LIB_12__::func_845(25), 0);
	}
	else
	{
		__LIB_3__::func_572(iVar2, "GC_MENU51" /* GXT: Locate a Car */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 7;
	iVar2++;
	if (__LIB_2__::func_104(105, 0, 0))
	{
		iVar0 = __LIB_12__::func_672(25);
		bVar1 = true;
		if (((BitTest(Global_2703735.f_3673, 10) || !func_309(26)) || !func_279(26)) || (iVar0 > 0 && (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(__LIB_5__::func_23(46), -1, false, 0) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 194)))
		{
			bVar1 = false;
		}
		func_512(26, iVar2, "GC_MENU52" /* GXT: Locate a Plane */, bVar1);
		__LIB_3__::func_572(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
		__LIB_13__::func_722(__LIB_12__::func_845(26), 0);
	}
	else
	{
		__LIB_3__::func_572(iVar2, "GC_MENU52" /* GXT: Locate a Plane */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 8;
	iVar2++;
	if (__LIB_2__::func_104(119, 0, 0))
	{
		iVar0 = __LIB_12__::func_672(35);
		bVar1 = true;
		if (iVar0 > 0)
		{
			bVar1 = false;
			MISC::SET_BIT(&uLocal_172, 0);
		}
		if ((!func_309(35) || !func_279(35)) || __LIB_28__::func_753())
		{
			bVar1 = false;
		}
		func_512(35, iVar2, "GC_MENU55" /* GXT: Cops Turn Blind Eye */, bVar1);
		__LIB_3__::func_572(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
		__LIB_13__::func_722(__LIB_12__::func_845(35), 0);
	}
	else
	{
		__LIB_3__::func_572(iVar2, "GC_MENU55" /* GXT: Cops Turn Blind Eye */, 0, 1, 0, 0, 0);
		__LIB_3__::func_572(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_14__::func_431(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 9;
	iVar2++;
	__LIB_3__::func_564(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_792(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__::func_792(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = iVar2;
}

void func_1097()//Position - 0x495F3
{
	if (BitTest(uLocal_187, 3))
	{
		Local_122.f_0 = 12;
		StringCopy(&(Local_122.f_166), "LESTER", 16);
		Local_122.f_178 = 0;
		Local_122.f_180 = 2;
		StringCopy(&(Local_122.f_170), "HS3LEAU", 16);
		StringCopy(&(Local_122.f_174), "HS3LE_PM_2", 16);
		__LIB_0__::func_222(&(Local_122.f_1), Local_122.f_180, 0, &(Local_122.f_166), 0, 1);
		MISC::CLEAR_BIT(&uLocal_187, 3);
		MISC::SET_BIT(&uLocal_187, 4);
	}
	else if (BitTest(uLocal_187, 4))
	{
		func_1(Local_122.f_1, "HS3LEAU", "HS3LE_PM_2", &Local_166, 1);
		iLocal_178 = 0;
		func_32(4);
	}
	else if (BitTest(uLocal_187, 0))
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("HUD_CONNPROB" /* GXT: alert */, "MPCT_CNCW" /* GXT: Are you sure you want to cancel this Heist? If you have paid a setup cost it won't be refunded. */, 36, 0, false, -1, 0, 0, true, 0);
		if (__LIB_0__::func_937(&uLocal_176, 1000, 0))
		{
			if (__LIB_10__::func_437(201))
			{
				__LIB_42__::func_354(1);
				MISC::SET_BIT(&uLocal_187, 3);
			}
			else if (__LIB_10__::func_437(202))
			{
				func_1(Local_122.f_1, "CT_AUD", "MPCT_LGEN4", &Local_166, 0);
				MISC::CLEAR_BIT(&iLocal_178, 0);
				func_32(4);
			}
		}
	}
}

void func_1104()//Position - 0x499FD
{
	if (BitTest(iLocal_178, 0))
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("HUD_CONNPROB" /* GXT: alert */, "MPCT_CNCW" /* GXT: Are you sure you want to cancel this Heist? If you have paid a setup cost it won't be refunded. */, 36, 0, false, -1, 0, 0, true, 0);
		if (__LIB_0__::func_937(&uLocal_176, 1000, 0))
		{
			if (__LIB_10__::func_437(201))
			{
				func_1106(1, -1);
				func_1105();
				MISC::SET_BIT(&(Global_1888862[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*120*/].f_38.f_27), 6);
				func_1(Local_122.f_1, "CT_AUD", "MPCT_Lconf", &Local_166, 0);
				MISC::CLEAR_BIT(&iLocal_178, 0);
				func_32(4);
			}
			else if (__LIB_10__::func_437(202))
			{
				func_1(Local_122.f_1, "CT_AUD", "MPCT_LGEN4", &Local_166, 0);
				MISC::CLEAR_BIT(&iLocal_178, 0);
				func_32(4);
			}
		}
	}
}

void func_1105()//Position - 0x49AA8
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 1144241229;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = 1;
	iVar1 = __LIB_0__::func_943(0, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_1106(bool bParam0, int iParam1)//Position - 0x49ADE
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_10__::func_435(PLAYER::PLAYER_ID(), 0);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (iVar0 != -1)
	{
		iVar1 = __LIB_1__::func_360(6427, -1, 0);
		switch (iVar0)
		{
			case 0:
				MISC::CLEAR_BIT(&iVar1, 0);
				__LIB_33__::func_582(16, 0, 0, 0, 1);
				__LIB_33__::func_582(17, 0, 0, 0, 1);
				__LIB_33__::func_582(18, 0, 0, 0, 1);
				__LIB_33__::func_582(0, 0, 0, 0, 1);
				__LIB_33__::func_582(1, 0, 0, 0, 1);
				__LIB_33__::func_582(2, 0, 0, 0, 1);
				__LIB_33__::func_582(3, 0, 0, 0, 1);
				__LIB_25__::func_316();
				if (bParam0)
				{
					__LIB_33__::func_580(iVar0, -1);
				}
				break;
			case 1:
				MISC::CLEAR_BIT(&iVar1, 1);
				__LIB_33__::func_582(19, 0, 0, 0, 1);
				__LIB_33__::func_582(20, 0, 0, 0, 1);
				__LIB_33__::func_582(21, 0, 0, 0, 1);
				__LIB_33__::func_582(22, 0, 0, 0, 1);
				__LIB_33__::func_582(23, 0, 0, 0, 1);
				__LIB_33__::func_582(4, 0, 0, 0, 1);
				__LIB_33__::func_582(5, 0, 0, 0, 1);
				__LIB_33__::func_582(6, 0, 0, 0, 1);
				__LIB_33__::func_582(7, 0, 0, 0, 1);
				__LIB_33__::func_582(8, 0, 0, 0, 1);
				__LIB_25__::func_316();
				if (bParam0)
				{
					__LIB_33__::func_580(iVar0, -1);
				}
				break;
			case 2:
				MISC::CLEAR_BIT(&iVar1, 2);
				__LIB_33__::func_582(24, 0, 0, 0, 1);
				__LIB_33__::func_582(25, 0, 0, 0, 1);
				__LIB_33__::func_582(26, 0, 0, 0, 1);
				__LIB_33__::func_582(27, 0, 0, 0, 1);
				__LIB_33__::func_582(28, 0, 0, 0, 1);
				__LIB_33__::func_582(29, 0, 0, 0, 1);
				__LIB_33__::func_582(9, 0, 0, 0, 1);
				__LIB_33__::func_582(10, 0, 0, 0, 1);
				__LIB_33__::func_582(11, 0, 0, 0, 1);
				__LIB_33__::func_582(12, 0, 0, 0, 1);
				__LIB_33__::func_582(13, 0, 0, 0, 1);
				__LIB_33__::func_582(14, 0, 0, 0, 1);
				__LIB_33__::func_582(15, 0, 0, 0, 1);
				__LIB_25__::func_316();
				if (bParam0)
				{
					__LIB_33__::func_580(iVar0, -1);
				}
				break;
		}
		__LIB_1__::func_354(6427, iVar1, -1, 1, 0);
		__LIB_25__::func_670();
		__LIB_25__::func_612();
	}
}

void func_1118()//Position - 0x4A5E0
{
	if (BitTest(uLocal_175, 0))
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("HUD_CONNPROB" /* GXT: alert */, "MPCT_CNCW" /* GXT: Are you sure you want to cancel this Heist? If you have paid a setup cost it won't be refunded. */, 36, 0, false, -1, 0, 0, true, 0);
		if (__LIB_0__::func_937(&uLocal_176, 1000, 0))
		{
			if (__LIB_10__::func_437(201))
			{
				func_1119();
				func_1(Local_122.f_1, "CT_AUD", "MPCT_Lconf", &Local_166, 0);
				MISC::CLEAR_BIT(&uLocal_175, 0);
				func_32(4);
			}
			else if (__LIB_10__::func_437(202))
			{
				func_1(Local_122.f_1, "CT_AUD", "MPCT_LGEN4", &Local_166, 0);
				MISC::CLEAR_BIT(&uLocal_175, 0);
				func_32(4);
			}
		}
	}
}

void func_1119()//Position - 0x4A672
{
	if (!__LIB_3__::func_484())
	{
		return;
	}
	Global_2667209 = 1;
}

int func_1120()//Position - 0x4A68A
{
	if (__LIB_3__::func_63())
	{
		return 0;
	}
	return 1;
}

void func_1121()//Position - 0x4A69E
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	if (func_1413())
	{
		func_1351(Local_122.f_360);
	}
	else if (((!HUD::IS_PAUSE_MENU_ACTIVE() && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !__LIB_0__::func_194(8, -1))
	{
		iVar0 = Local_122.f_181.f_69;
		iVar3 = 0;
		iVar4 = 0;
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			iVar5 = Global_4539961;
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/);
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/);
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/);
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/);
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
			__LIB_27__::func_123(0, &uLocal_208);
			switch (Local_122.f_178)
			{
				case 1:
					func_1348(&fVar6, &fVar8, &fVar7, &fVar9, 76);
					fVar6 = (fVar6 - (fVar7 / 2f));
					fVar8 = (fVar8 - (fVar9 / 2f));
					fVar8 = (fVar8 + 0.034722f);
					Global_4539961 = __LIB_38__::func_617(fVar6, fVar8, 0.222f, 0.034722f, 0.034722f, __LIB_0__::func_340(Local_122.f_181.f_2, 0, 16), 255, 0, 0);
					if (Global_4539961 < 0 || Global_4539961 > 15)
					{
						Global_4539961 = -1;
						iVar5 = -1;
					}
					else
					{
						iVar10 = (Local_122.f_181.f_69 - 16) + 1;
						if (iVar10 < 0)
						{
							iVar10 = 0;
						}
						iVar5 = (Global_4539961 + iVar10);
					}
					break;
				case 5:
				case 7:
				case 12:
				case 13:
				case 14:
				case 15:
				case 6:
				case 17:
				case 18:
				case 22:
				case 24:
				case 25:
				case 26:
				case 27:
				case 28:
				case 29:
				case 30:
				case 31:
					__LIB_3__::func_567(0, 0, BitTest(bLocal_169, 2), 1);
					break;
				case 10:
					if (iLocal_160 == -1 && iLocal_161)
					{
						__LIB_3__::func_567(0, 0, 0, 1);
					}
					else
					{
						__LIB_3__::func_567(0, 1, 0, 1);
					}
					break;
				default:
					__LIB_3__::func_567(0, 0, 0, 1);
					break;
			}
			if (__LIB_3__::func_51())
			{
				if (Local_122.f_181.f_69 == iVar5)
				{
					if (Local_122.f_178 == 2 && Local_122.f_181.f_69 == 0)
					{
						iVar4 = __LIB_4__::func_848(0.15f);
						if (iVar4 == -999)
						{
							iVar3 = 1;
						}
					}
					else
					{
						iVar3 = 1;
					}
				}
				else
				{
					Local_122.f_181.f_69 = iVar5;
					__LIB_3__::func_110(Local_122.f_181.f_69, 1, 1);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
				}
				iLocal_156 = 1;
			}
		}
		if (Local_122.f_181.f_2 > 0)
		{
			if (!BitTest(Local_122.f_181, 0))
			{
				if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/) || (__LIB_0__::func_77(0) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/))) || func_1340())
				{
					func_1339();
					MISC::SET_BIT(&(Local_122.f_181), 0);
					__LIB_0__::clearF_1Prop(&uLocal_149);
				}
				else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
				{
					func_1339();
					MISC::SET_BIT(&(Local_122.f_181), 0);
					__LIB_0__::clearF_1Prop(&uLocal_149);
				}
			}
			else if (func_1338(172) && func_1338(181))
			{
				MISC::CLEAR_BIT(&(Local_122.f_181), 0);
			}
			if (!BitTest(Local_122.f_181, 1))
			{
				if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/) || (__LIB_0__::func_77(0) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/))) || func_1337())
				{
					func_1335();
					MISC::SET_BIT(&(Local_122.f_181), 1);
					__LIB_0__::clearF_1Prop(&uLocal_149);
				}
				else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
				{
					func_1335();
					MISC::SET_BIT(&(Local_122.f_181), 1);
					__LIB_0__::clearF_1Prop(&uLocal_149);
				}
			}
			else if (func_1338(173) && func_1338(180))
			{
				MISC::CLEAR_BIT(&(Local_122.f_181), 1);
			}
			if (Local_122.f_181.f_69 < 0)
			{
				Local_122.f_181.f_69 = (Local_122.f_181.f_2 - 1);
			}
			if (Local_122.f_181.f_69 > (Local_122.f_181.f_2 - 1))
			{
				Local_122.f_181.f_69 = 0;
			}
			if (Local_122.f_181.f_69 != iVar0)
			{
				iLocal_142 = 0;
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
			}
		}
		if (Local_122.f_181.f_69 < 32)
		{
			iVar1 = Local_122.f_181.f_103[Local_122.f_181.f_69];
			if (!BitTest(Local_122.f_181, 2))
			{
				if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/) || (__LIB_0__::func_77(0) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/))) || iVar4 == -1)
				{
					func_1334();
					MISC::SET_BIT(&(Local_122.f_181), 2);
					__LIB_0__::clearF_1Prop(&uLocal_149);
				}
			}
			else if (func_1338(174))
			{
				MISC::CLEAR_BIT(&(Local_122.f_181), 2);
			}
			if (!BitTest(Local_122.f_181, 3))
			{
				if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/) || (__LIB_0__::func_77(0) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/))) || iVar4 == 1)
				{
					func_1333();
					MISC::SET_BIT(&(Local_122.f_181), 3);
					__LIB_0__::clearF_1Prop(&uLocal_149);
				}
			}
			else if (func_1338(175))
			{
				MISC::CLEAR_BIT(&(Local_122.f_181), 3);
			}
			if (Local_122.f_181.f_103[Local_122.f_181.f_69] < Local_122.f_181.f_3[Local_122.f_181.f_69])
			{
				Local_122.f_181.f_103[Local_122.f_181.f_69] = Local_122.f_181.f_36[Local_122.f_181.f_69];
			}
			if (Local_122.f_181.f_103[Local_122.f_181.f_69] > Local_122.f_181.f_36[Local_122.f_181.f_69])
			{
				Local_122.f_181.f_103[Local_122.f_181.f_69] = Local_122.f_181.f_3[Local_122.f_181.f_69];
			}
			if (Local_122.f_181.f_103[Local_122.f_181.f_69] != iVar1)
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				iLocal_142 = 0;
			}
		}
		bVar11 = false;
		bVar12 = false;
		if (!BitTest(Local_122.f_181, 4))
		{
			if (__LIB_3__::func_540() || iVar3)
			{
				if (func_1330())
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FREEMODE_SOUNDSET", true);
					MISC::SET_BIT(&(Local_122.f_181), 4);
					bVar11 = true;
					func_1159();
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FREEMODE_SOUNDSET", true);
				}
			}
		}
		else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/))
		{
			MISC::CLEAR_BIT(&(Local_122.f_181), 4);
		}
		if (!BitTest(Local_122.f_181, 5))
		{
			if (!bVar11)
			{
				if (__LIB_3__::func_539() || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FREEMODE_SOUNDSET", true);
					MISC::SET_BIT(&(Local_122.f_181), 5);
					bVar12 = true;
					func_1122();
				}
			}
		}
		else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/))
		{
			MISC::CLEAR_BIT(&(Local_122.f_181), 5);
		}
		if (!BitTest(Local_122.f_181, 5))
		{
			if (!bVar11 && !bVar12)
			{
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					bVar13 = PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/);
				}
				else
				{
					bVar13 = PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 236 /*INPUT_SCRIPT_SELECT*/);
				}
				if (bVar13)
				{
					if (__LIB_12__::func_912() == 1 && Local_122.f_178 == 1)
					{
						if (__LIB_0__::func_156(Local_122.f_181.f_136[Local_122.f_181.f_69], 0, 1))
						{
							Var2 = { __LIB_0__::func_819(Local_122.f_181.f_136[Local_122.f_181.f_69]) };
							NETWORK::NETWORK_SHOW_PROFILE_UI(&Var2);
						}
					}
					MISC::SET_BIT(&(Local_122.f_181), 5);
				}
			}
		}
		else
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				bVar14 = PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/);
			}
			else
			{
				bVar14 = PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 236 /*INPUT_SCRIPT_SELECT*/);
			}
			if (!bVar14)
			{
				MISC::CLEAR_BIT(&(Local_122.f_181), 5);
			}
		}
	}
}

void func_1122()//Position - 0x4AD4C
{
	iLocal_156 = 1;
	switch (Local_122.f_178)
	{
		case 0:
			func_1157();
			iLocal_157 = 1;
			break;
		case 5:
			func_1156();
			iLocal_157 = 1;
			break;
		case 1:
			func_1155();
			break;
		case 2:
			func_1154();
			break;
		case 3:
			func_1153();
			break;
		case 4:
			func_1152();
			iLocal_157 = 1;
			break;
		case 7:
			func_1151();
			iLocal_157 = 1;
			break;
		case 6:
			func_1150();
			iLocal_157 = 1;
			break;
		case 8:
			func_1149();
			break;
		case 9:
			func_1148();
			if (!Global_2815059.f_911)
			{
				iLocal_157 = 1;
			}
			break;
		case 10:
			func_1143();
			iLocal_157 = 1;
			break;
		case 11:
			if ((iLocal_201 == 0 && iLocal_205 == 0) && iLocal_203 == 0)
			{
				func_1142();
				iLocal_157 = 1;
			}
			break;
		case 12:
			func_1141();
			iLocal_157 = 1;
			break;
		case 13:
			func_1140();
			iLocal_157 = 1;
			break;
		case 14:
			func_1139();
			iLocal_157 = 1;
			break;
		case 15:
			func_1138();
			iLocal_157 = 1;
			break;
		case 16:
			func_1137();
			break;
		case 17:
			func_1079();
			break;
		case 22:
			func_1079();
			break;
		case 18:
			func_1135();
			break;
		case 19:
			func_1134();
			break;
		case 20:
			func_1133();
			break;
		case 21:
			func_1132();
			break;
		case 23:
			func_1131();
			break;
		case 24:
			func_1130();
			iLocal_157 = 1;
			break;
		case 25:
			func_1129();
			break;
		case 26:
			func_1128();
			break;
		case 27:
			func_1127();
			iLocal_157 = 1;
			break;
		case 28:
			func_1126();
			iLocal_157 = 1;
			break;
		case 29:
			func_1125();
			iLocal_157 = 1;
			break;
		case 30:
			func_1124();
			iLocal_157 = 1;
			break;
		case 31:
			func_1123();
			iLocal_157 = 1;
			break;
	}
}

void func_1123()//Position - 0x4AF76
{
	func_32(4);
}

void func_1124()//Position - 0x4AF83
{
	func_32(4);
}

void func_1125()//Position - 0x4AF90
{
	func_32(4);
}

void func_1126()//Position - 0x4AF9D
{
	func_32(4);
}

void func_1127()//Position - 0x4AFAA
{
	func_32(4);
}

void func_1128()//Position - 0x4AFB7
{
	func_1(Local_122.f_1, "TNSSAUD", "TNSS_PC_BY1", &Local_166, 0);
	func_32(4);
}

void func_1129()//Position - 0x4AFDC
{
	func_1(Local_122.f_1, "HS4PAAU", "HS4PA_PCR_5", &Local_166, 0);
	func_32(4);
}

void func_1130()//Position - 0x4B001
{
	Local_122.f_178 = 23;
	MISC::CLEAR_BIT(&bLocal_169, 2);
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	Local_122.f_181.f_69 = uLocal_171;
}

void func_1131()//Position - 0x4B02A
{
	if (!__LIB_1__::func_472(PLAYER::PLAYER_ID(), 6))
	{
		func_1(Local_122.f_1, "CAGTAU", "CAGT_PM_3", &Local_166, 0);
		func_32(4);
	}
}

void func_1132()//Position - 0x4B05C
{
	Local_122.f_178 = 20;
	MISC::CLEAR_BIT(&bLocal_169, 2);
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	Local_122.f_181.f_69 = uLocal_171;
}

void func_1133()//Position - 0x4B085
{
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	func_32(4);
}

void func_1134()//Position - 0x4B09C
{
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	func_32(4);
}

void func_1135()//Position - 0x4B0B3
{
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	func_32(4);
}

void func_1137()//Position - 0x4B0F2
{
	struct<2> Var0;
	StringCopy(&Var0, "MPCT_REPOL_", 16);
	StringIntConCat(&Var0, iLocal_168, 16);
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	func_1(Local_122.f_1, "CT_AUD", &Var0, &Local_166, 0);
	func_32(4);
}

void func_1138()//Position - 0x4B12C
{
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	func_32(4);
}

void func_1139()//Position - 0x4B143
{
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	func_32(4);
}

void func_1140()//Position - 0x4B15A
{
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	func_32(4);
}

void func_1141()//Position - 0x4B171
{
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	func_32(4);
}

void func_1142()//Position - 0x4B188
{
	if (!bLocal_136 && iLocal_137 > -1)
	{
		Local_122.f_181.f_69 = uLocal_138;
		func_943();
	}
	else if (!Global_1585094)
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
		func_32(4);
	}
	else if (iLocal_152 != 0)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FREEMODE_SOUNDSET", true);
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	}
}

void func_1143()//Position - 0x4B1EA
{
	if (func_967())
	{
		return;
	}
	if (func_968())
	{
		func_1145();
	}
	else
	{
		func_1144();
	}
}

void func_1144()//Position - 0x4B20E
{
	iLocal_160 = -1;
	iLocal_161 = 0;
	if (BitTest(Local_122.f_359, 17))
	{
		return;
	}
	if (!BitTest(Global_2703735.f_3673, 7))
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
		func_32(4);
	}
}

void func_1145()//Position - 0x4B248
{
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	func_1146(iLocal_160);
	iLocal_160 = -1;
	iLocal_161 = 0;
}

void func_1146(int iParam0)//Position - 0x4B269
{
	if (iParam0 != -1)
	{
		Local_122.f_181.f_69 = func_1147(iParam0);
		return;
	}
}

int func_1147(int iParam0)//Position - 0x4B286
{
	int iVar0;
	int iVar1;
	iVar1 = iLocal_165;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (iLocal_165[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar0;
}

void func_1148()//Position - 0x4B2B9
{
	if (Global_2815059.f_5977)
	{
		Local_122.f_178 = 19;
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
		StringCopy(&(Local_122.f_174), "APCAL_GENOH", 16);
		func_1(Local_122.f_1, &(Local_122.f_170), &(Local_122.f_174), &Local_166, 1);
		Local_122.f_181.f_69 = 2;
		Global_2815059.f_5977 = 0;
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
		func_32(4);
	}
}

void func_1149()//Position - 0x4B31E
{
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	Local_122.f_181.f_69 = 4;
	Local_122.f_178 = 1;
}

void func_1150()//Position - 0x4B33C
{
	Local_122.f_178 = 9;
	MISC::CLEAR_BIT(&bLocal_169, 2);
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	Local_122.f_181.f_69 = uLocal_171;
}

void func_1151()//Position - 0x4B365
{
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	func_32(4);
}

void func_1152()//Position - 0x4B37C
{
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	func_32(4);
}

void func_1153()//Position - 0x4B393
{
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	Local_122.f_181.f_69 = 1;
	Local_122.f_178 = 1;
}

void func_1154()//Position - 0x4B3B1
{
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	Local_122.f_181.f_69 = 0;
	Local_122.f_178 = 1;
}

void func_1155()//Position - 0x4B3CF
{
	switch (Local_122.f_179)
	{
		case 0:
			Local_122.f_178 = 0;
			MISC::CLEAR_BIT(&(Local_122.f_359), 4);
			Local_122.f_181.f_69 = 0;
			iLocal_131 = 1;
			break;
		case 1:
			Local_122.f_178 = 5;
			MISC::CLEAR_BIT(&(Local_122.f_359), 4);
			Local_122.f_181.f_69 = 1;
			iLocal_131 = 1;
			break;
		case 3:
			Local_122.f_178 = 4;
			MISC::CLEAR_BIT(&(Local_122.f_359), 4);
			Local_122.f_181.f_69 = 4;
			iLocal_131 = 1;
			break;
	}
}

void func_1156()//Position - 0x4B449
{
	func_32(4);
}

void func_1157()//Position - 0x4B456
{
	func_32(4);
}

void func_1159()//Position - 0x4B4B7
{
	iLocal_156 = 1;
	switch (Local_122.f_178)
	{
		case 0:
			func_1324();
			break;
		case 5:
			func_1322();
			break;
		case 1:
			func_1320();
			break;
		case 2:
			func_1319();
			break;
		case 3:
			func_1316();
			break;
		case 4:
			func_1299();
			break;
		case 7:
			func_1298();
			break;
		case 6:
			func_1256();
			break;
		case 8:
			func_1255();
			break;
		case 9:
			func_1253();
			break;
		case 10:
			func_1221();
			break;
		case 11:
			func_1220();
			break;
		case 12:
			func_1219();
			break;
		case 13:
			func_1218();
			break;
		case 14:
			func_1217();
			break;
		case 15:
			func_1216();
			break;
		case 16:
			func_1214();
			break;
		case 17:
			func_1213();
			break;
		case 22:
			func_1209();
			break;
		case 18:
			func_1208();
			break;
		case 19:
			func_1204();
			break;
		case 20:
			func_1202();
			break;
		case 21:
			func_1196();
			break;
		case 23:
			func_1185();
			break;
		case 24:
			func_1178();
			break;
		case 25:
			func_1177();
			break;
		case 26:
			func_1176();
			break;
		case 27:
			func_1175();
			break;
		case 28:
			func_1166();
			break;
		case 29:
			func_1164();
			break;
		case 30:
			func_1162();
			break;
		case 31:
			func_1160();
			break;
	}
}

void func_1160()//Position - 0x4B66C
{
	if (__LIB_4__::func_922(Local_122.f_181.f_69))
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				func_1161(301, -1, -1, 10000, 0);
				func_1(Local_122.f_1, "SM2YOAU", "SM2YO_PC_2A", &Local_166, 0);
				func_32(4);
				break;
		}
	}
	else
	{
		func_1(Local_122.f_1, "SM2YOAU", "SM2YO_PC_4A", &Local_166, 0);
	}
}

void func_1161(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x4B6DA
{
	if (Global_1979021 == -1)
	{
		Global_1979021 = iParam0;
		Global_1979021.f_1 = iParam1;
		Global_1979021.f_2 = iParam2;
		Global_1979021.f_3 = iParam3;
		if (bParam4)
		{
			MISC::SET_BIT(&(Global_1979021.f_4), 0);
		}
		__LIB_0__::func_795(&(Global_1979021.f_5), 0, 0);
	}
}

void func_1162()//Position - 0x4B727
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_4__::func_922(Local_122.f_181.f_69))
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				func_1161(298, -1, -1, 10000, 0);
				func_1(Local_122.f_1, "SM2AGAU", "SM2AG_PC_2A", &Local_166, 0);
				func_32(4);
				break;
			case 1:
				iVar0 = Local_122.f_181.f_103[1];
				iVar2 = __LIB_29__::func_182(iVar0);
				if (__LIB_0__::func_112())
				{
					func_99(joaat("SERVICE_SPEND_AGENT_14_VEHICLE_REQUEST"), 0, &iVar1, 0, 1, 0);
					Global_4534105[iVar1 /*85*/] = iVar2;
				}
				else
				{
					MONEY::NETWORK_SPEND_GUNRUNNING(0, 0, 1, iVar2);
				}
				func_1163(iVar0, 0, 0);
				func_1(Local_122.f_1, "SM2AGAU", "SM2AG_PC_3A", &Local_166, 0);
				func_32(4);
				break;
		}
	}
	else
	{
		func_1(Local_122.f_1, "SM2AGAU", "SM2AG_PC_5A", &Local_166, 0);
	}
}

void func_1163(int iParam0, bool bParam1, bool bParam2)//Position - 0x4B802
{
	__LIB_0__::clearF_1Prop(&(Global_1978980.f_6));
	__LIB_0__::func_627(&(Global_1978980.f_8), 0, 0);
	Global_1978980.f_4 = iParam0;
	MISC::SET_BIT(&(Global_1978980.f_2), 1);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1978980.f_2), 5);
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_1978980.f_2), 6);
	}
}

void func_1164()//Position - 0x4B853
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_4__::func_922(Local_122.f_181.f_69))
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				func_1161(250, -1, -1, 10000, 1);
				func_1(Local_122.f_1, "SM2TOAU", "SM2TO_PC_2A", &Local_166, 0);
				func_32(4);
				break;
			case 1:
				iVar0 = Local_122.f_181.f_103[1];
				iVar2 = Local_122.f_0;
				iVar3 = __LIB_29__::func_183(iVar0);
				if (__LIB_0__::func_112())
				{
					func_99(joaat("SERVICE_SPEND_TONY_LIMO"), 0, &iVar1, 0, 1, 0);
					Global_4534105[iVar1 /*85*/] = iVar2;
					Global_4534105[iVar1 /*85*/].f_66.f_15 = iVar3;
				}
				else
				{
					MONEY::NETWORK_SPEND_VEHICLE_REQUESTED(0, 0, 1, iVar2, iVar3);
				}
				func_1165(iVar0, 0, 0);
				func_1(Local_122.f_1, "SM2TOAU", "SM2TO_PC_3A", &Local_166, 0);
				func_32(4);
				break;
		}
	}
	else
	{
		func_1(Local_122.f_1, "SM2TOAU", "SM2TO_PC_5A", &Local_166, 0);
	}
}

void func_1165(int iParam0, bool bParam1, bool bParam2)//Position - 0x4B93E
{
	__LIB_0__::clearF_1Prop(&(Global_1978966.f_6));
	__LIB_0__::func_627(&(Global_1978966.f_8), 0, 0);
	Global_1978966.f_4 = iParam0;
	MISC::SET_BIT(&(Global_1978966.f_2), 1);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1978966.f_2), 5);
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_1978966.f_2), 6);
	}
}

void func_1166()//Position - 0x4B98F
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (__LIB_4__::func_922(Local_122.f_181.f_69))
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				MISC::SET_BIT(&(Global_1977048.f_2), 3);
				MISC::SET_BIT(&(Global_1977048.f_1), 30);
				if (iVar0 < 25)
				{
					func_1(Local_122.f_1, "FXFRAUD", "FXFR_PM_8", &Local_166, 0);
				}
				else
				{
					func_1(Local_122.f_1, "FXFRAUD", "FXFR_PM_3", &Local_166, 0);
				}
				func_32(4);
				break;
			case 1:
				if (!func_431())
				{
					func_92(20, func_429());
				}
				else
				{
					func_1171(1);
					if (iVar0 < 25)
					{
						func_1(Local_122.f_1, "FXFRAUD", "FXFR_PM_8", &Local_166, 0);
					}
					else
					{
						func_1(Local_122.f_1, "FXFRAUD", "FXFR_PM_4", &Local_166, 0);
					}
					func_32(4);
				}
				break;
			case 2:
				MISC::SET_BIT(&Global_1964720, 1);
				func_99(joaat("SERVICE_SPEND_REQUEST_COMPANY_SUV"), 0, &iVar2, 0, 1, 0);
				if (iVar2 >= 0)
				{
					Global_4534105[iVar2 /*85*/] = -333798998;
				}
				func_1(Local_122.f_1, "FXFRAUD", "FXFR_PM_5", &Local_166, 0);
				func_32(4);
				break;
			case 3:
				__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[76 /*2*/]), 1, 0);
				__LIB_42__::func_920(76, -1, -1);
				__LIB_4__::func_975();
				if (iVar0 < 25)
				{
					func_1(Local_122.f_1, "FXFRAUD", "FXFR_PM_8", &Local_166, 0);
				}
				else
				{
					func_1(Local_122.f_1, "FXFRAUD", "FXFR_PM_6", &Local_166, 0);
				}
				func_32(4);
				break;
			case 4:
				iVar1 = __LIB_12__::func_672(72);
				if (iVar1 > 0)
				{
					func_92(20, iVar1);
				}
				else if (__LIB_29__::func_94(PLAYER::PLAYER_ID()))
				{
					func_92(1, 0);
				}
				else if (!MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(72), false, true, false, -1, 0))
				{
					MISC::SET_BIT(&bLocal_169, 0);
					func_92(0, 0);
				}
				else
				{
					MISC::SET_BIT(&(Local_122.f_359), 10);
					Local_122.f_360 = 72;
					Local_122.f_358 = __LIB_0__::getMinusOneOrNull();
					__LIB_23__::func_534(__LIB_0__::func_943(1, 1), Local_122.f_360, __LIB_0__::getMinusOneOrNull(), 0);
				}
				break;
		}
	}
	else
	{
		func_1(Local_122.f_1, "FXFRAUD", "FXFR_PM_9", &Local_166, 0);
	}
}

void func_1171(bool bParam0)//Position - 0x4BCC4
{
	if (!func_1174(0))
	{
		__LIB_21__::func_111(0);
		if (bParam0)
		{
			__LIB_21__::func_111(7);
		}
	}
}

bool func_1174(int iParam0)//Position - 0x4BD33
{
	return __LIB_0__::func_316(&(Global_2789194.f_1), iParam0);
}

void func_1175()//Position - 0x4BD47
{
	int iVar0;
	if (__LIB_4__::func_922(Local_122.f_181.f_69))
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				iVar0 = __LIB_12__::func_672(74);
				if (iVar0 > 0)
				{
					func_92(20, iVar0);
				}
				else if (!MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(74), false, true, false, -1, 0))
				{
					MISC::SET_BIT(&bLocal_169, 0);
					func_92(0, 0);
				}
				else
				{
					MISC::SET_BIT(&(Local_122.f_359), 10);
					Local_122.f_360 = 74;
					Local_122.f_358 = __LIB_0__::getMinusOneOrNull();
					__LIB_23__::func_534(__LIB_0__::func_943(1, 1), Local_122.f_360, __LIB_0__::getMinusOneOrNull(), 0);
				}
				break;
			case 1:
				iVar0 = __LIB_12__::func_672(73);
				if (iVar0 > 0)
				{
					func_92(20, iVar0);
				}
				else if (!MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(73), false, true, false, -1, 0))
				{
					MISC::SET_BIT(&bLocal_169, 0);
					func_92(0, 0);
				}
				else if (!__LIB_29__::func_91())
				{
					MISC::SET_BIT(&(Local_122.f_359), 10);
					Local_122.f_360 = 73;
					Local_122.f_358 = __LIB_0__::getMinusOneOrNull();
					__LIB_23__::func_534(__LIB_0__::func_943(1, 1), Local_122.f_360, __LIB_0__::getMinusOneOrNull(), 0);
				}
				break;
		}
	}
	else
	{
		func_1(Local_122.f_1, "FXIMAUD", "FXIM_PM_7A", &Local_166, 0);
	}
}

void func_1176()//Position - 0x4BE73
{
	bool bVar0;
	if (Local_122.f_181.f_69 == 0)
	{
		if ((__LIB_8__::func_906(PLAYER::PLAYER_ID()) && func_515(0)) && !__LIB_1__::func_543(PLAYER::PLAYER_ID()))
		{
			if (__LIB_12__::func_845(69) == 0 || MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(69), false, true, false, -1, 0))
			{
				if (!BitTest(iLocal_193, 0))
				{
					MISC::SET_BIT(&iLocal_193, 0);
					__LIB_0__::func_795(&uLocal_194, 0, 0);
				}
			}
			else
			{
				MISC::SET_BIT(&bLocal_169, 0);
				func_92(0, 0);
				bVar0 = true;
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	else if (Local_122.f_181.f_69 == 1)
	{
		if (func_507(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&uLocal_196, 0);
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_1(Local_122.f_1, "TNSSAUD", "TNSS_PC_GN1", &Local_166, 0);
		func_32(4);
	}
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
}

void func_1177()//Position - 0x4BF54
{
	bool bVar0;
	if ((((__LIB_1__::func_167(PLAYER::PLAYER_ID()) && func_549(1)) && !func_547(PLAYER::PLAYER_ID())) && !__LIB_11__::func_254(PLAYER::PLAYER_ID())) && !__LIB_38__::func_550(PLAYER::PLAYER_ID()))
	{
		if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(68), false, true, false, -1, 0))
		{
			if (!BitTest(uLocal_190, 0))
			{
				MISC::SET_BIT(&uLocal_190, 0);
				__LIB_0__::func_795(&uLocal_191, 0, 0);
			}
		}
		else
		{
			MISC::SET_BIT(&bLocal_169, 0);
			func_92(0, 0);
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_1(Local_122.f_1, "HS4PAAU", "HS4PA_PCR_3", &Local_166, 0);
		func_32(4);
	}
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
}

void func_1178()//Position - 0x4C00D
{
	if (BitTest(bLocal_169, 2) && Local_122.f_181.f_69 == 6)
	{
		func_1130();
	}
	if (Global_262145.f_27108 /* Tunable: 1013621859 */)
	{
		func_758();
		return;
	}
	if (!BitTest(uLocal_186, 2))
	{
		func_758();
		return;
	}
	if (__LIB_0__::func_680())
	{
		func_1183();
	}
	else
	{
		func_1182();
	}
	__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[60 /*2*/]), 1, 0);
	__LIB_42__::func_920(60, -1, -1);
	func_1180(func_1181(Local_122.f_181.f_69));
	func_1179(0, Local_122.f_181.f_69, "CM_VEH_REQUEST");
	if (!NETWORK::NETWORK_GET_PLAYER_OWNS_WAYPOINT(PLAYER::PLAYER_ID()))
	{
		func_1179(0, 0, "CM_CONTACT_LIMO");
	}
	else
	{
		func_1179(0, 1, "CM_CONTACT_LIMO");
	}
	func_32(4);
}

int func_1179(int iParam0, int iParam1, char* sParam2)//Position - 0x4C0C4
{
	int iVar0;
	if (__LIB_0__::func_112())
	{
		func_99(joaat("SERVICE_SPEND_CASINO_GENERIC"), iParam0, &iVar0, 0, 1, 0);
		StringCopy(&(Global_4534105[iVar0 /*85*/].f_14.f_26), sParam2, 32);
		Global_4534105[iVar0 /*85*/] = iParam1;
		return iVar0;
	}
	else
	{
		MONEY::NETWORK_SPEND_CASINO_GENERIC(iParam0, 0, 1, sParam2, iParam1);
	}
	return -1;
}

void func_1180(var uParam0)//Position - 0x4C112
{
	if (!__LIB_1__::func_808(PLAYER::PLAYER_ID()))
	{
		__LIB_1__::func_480(9);
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_304 = uParam0;
	}
	else
	{
		__LIB_1__::func_480(12);
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_304 = uParam0;
	}
}

int func_1181(int iParam0)//Position - 0x4C159
{
	switch (iParam0)
	{
		case 0:
			return joaat("cogcabrio");
		case 1:
			return joaat("windsor");
		case 2:
			return joaat("fugitive");
		case 3:
			return joaat("superd");
		case 4:
			return joaat("dubsta2");
		case 5:
			return joaat("feltzer2");
		default:
	}
	return 0;
}

void func_1182()//Position - 0x4C1BD
{
	func_1(Local_122.f_1, "CAGTAU", "CAGT_PM_5", &Local_166, 0);
}

void func_1183()//Position - 0x4C1DD
{
	func_1(Local_122.f_1, "CAGTAU", "CAGT_PM_9", &Local_166, 0);
}

void func_1185()//Position - 0x4C21B
{
	if (__LIB_1__::func_472(PLAYER::PLAYER_ID(), 6))
	{
		return;
	}
	switch (Local_122.f_181.f_69)
	{
		case 0:
			if (Global_262145.f_27106 /* Tunable: -1284248636 */)
			{
				func_758();
				return;
			}
			if (func_755())
			{
				func_758();
				return;
			}
			if (!func_753())
			{
				func_758();
				return;
			}
			__LIB_39__::func_414(-1);
			__LIB_0__::func_627(&(Local_184.f_4), 0, 0);
			__LIB_1__::func_480(6);
			if (func_757())
			{
				__LIB_1__::func_482(6);
				func_32(4);
			}
			break;
		case 1:
			if (Global_262145.f_27107 /* Tunable: 1858935833 */)
			{
				func_758();
				return;
			}
			if (!BitTest(uLocal_186, 1))
			{
				func_758();
				return;
			}
			if (__LIB_0__::func_680())
			{
				func_1187();
			}
			else
			{
				func_1182();
			}
			__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[59 /*2*/]), 1, 0);
			__LIB_42__::func_920(59, -1, -1);
			__LIB_1__::func_835();
			if (!NETWORK::NETWORK_GET_PLAYER_OWNS_WAYPOINT(PLAYER::PLAYER_ID()))
			{
				func_1179(0, 0, "CM_CONTACT_LIMO");
			}
			else
			{
				func_1179(0, 1, "CM_CONTACT_LIMO");
			}
			func_32(4);
			break;
		case 2:
			if (Global_262145.f_27108 /* Tunable: 1013621859 */)
			{
				func_758();
				return;
			}
			if (!BitTest(uLocal_186, 2))
			{
				func_758();
				return;
			}
			Local_122.f_178 = 24;
			uLocal_170 = Local_122.f_181.f_70[Local_122.f_181.f_69];
			MISC::CLEAR_BIT(&(Local_122.f_359), 4);
			uLocal_171 = Local_122.f_181.f_69;
			Local_122.f_181.f_69 = 0;
			break;
		case 3:
			func_32(4);
			break;
	}
}

void func_1187()//Position - 0x4C3AA
{
	func_1(Local_122.f_1, "CAGTAU", "CAGT_PM_8", &Local_166, 0);
}

void func_1196()//Position - 0x4C537
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	iVar2 = -1;
	bVar3 = false;
	iVar4 = 0;
	iVar1 = func_168();
	if (!__LIB_28__::func_259())
	{
		bVar3 = true;
	}
	if (!bVar3)
	{
		if (iVar1 == 0)
		{
			if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(44), false, true, false, -1, 0))
			{
				iVar4 = func_1198(2);
				if (iVar4 == 0)
				{
					iVar5 = __LIB_12__::func_672(44);
					if (iVar5 > 0)
					{
						func_92(20, iVar5);
						iVar2 = 1;
					}
					else
					{
						MISC::SET_BIT(&(Local_122.f_359), 10);
						Local_122.f_360 = 44;
						Local_122.f_358 = __LIB_0__::getMinusOneOrNull();
						Global_2815059.f_883 = 1;
						__LIB_23__::func_534(__LIB_0__::func_943(1, 1), Local_122.f_360, __LIB_0__::getMinusOneOrNull(), 0);
					}
				}
			}
			else
			{
				bVar0 = true;
			}
		}
	}
	if (iVar4 == 1)
	{
		func_92(24, 0);
		iVar2 = 1;
	}
	else if (iVar4 == 5)
	{
		func_92(1, 0);
		iVar2 = 1;
	}
	else if (iVar4 == 6)
	{
		func_92(29, 0);
		iVar2 = 1;
	}
	else if (iVar1 != 0)
	{
		if (iVar1 == 1)
		{
			func_92(1, 0);
			iVar2 = 2;
		}
		else if (iVar1 == 2)
		{
			func_92(26, 0);
			iVar2 = 2;
		}
	}
	else if (bVar0)
	{
		MISC::SET_BIT(&bLocal_169, 0);
		func_92(0, 0);
		iVar2 = 0;
	}
	else if (bVar3)
	{
		iVar2 = 1;
		func_1197(21, 0);
	}
	switch (iVar2)
	{
		case 0:
			break;
		case 1:
			if (func_170())
			{
				func_1(Local_122.f_1, "EXCALAU", "EXCAL_HENEGM", &Local_166, 0);
			}
			else
			{
				func_1(Local_122.f_1, "EXCALAU", "EXCAL_HENEGF", &Local_166, 0);
			}
			break;
		case 2:
			if (func_170())
			{
				func_1(Local_122.f_1, "EXCALAU", "EXCAL_HPROBM", &Local_166, 0);
			}
			else
			{
				func_1(Local_122.f_1, "EXCALAU", "EXCAL_HPROBF", &Local_166, 0);
			}
			break;
	}
}

void func_1197(int iParam0, int iParam1)//Position - 0x4C6FE
{
	if (iParam1 != 0)
	{
		Local_144 = { __LIB_5__::func_405(iParam1, 0, 0) };
	}
	__LIB_0__::func_627(&uLocal_145, 0, 0);
	MISC::SET_BIT(&iLocal_143, iParam0);
}

int func_1198(int iParam0)//Position - 0x4C72B
{
	switch (iParam0)
	{
		case 0:
			if (func_1201(0))
			{
				return 1;
			}
			if (func_1201(1) || func_1201(2))
			{
				return 5;
			}
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
			{
				return 7;
			}
			break;
		case 1:
			if (func_1201(1))
			{
				return 1;
			}
			if (func_1201(0))
			{
				return 2;
			}
			if (func_1201(2))
			{
				return 4;
			}
			if (__LIB_1__::func_838(PLAYER::PLAYER_ID(), 2) || __LIB_1__::func_837())
			{
				return 6;
			}
			break;
		case 2:
			if (func_1201(2))
			{
				return 1;
			}
			if (func_1201(0) || func_1201(1))
			{
				return 5;
			}
			if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 2 || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 1) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3)
			{
				return 6;
			}
			break;
		case 4:
			if (func_1201(2))
			{
				return 4;
			}
			break;
	}
	return 0;
}

int func_1201(int iParam0)//Position - 0x4C87E
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			if ((BitTest(Global_1835502.f_176[8], PLAYER::PLAYER_ID()) || Global_2815059.f_874 == 1) || Global_2815059.f_884 == 1)
			{
				return 1;
			}
			break;
		case 1:
			if (BitTest(Global_1835502.f_176[10], PLAYER::PLAYER_ID()) || Global_2815059.f_4454 == 1)
			{
				return 1;
			}
			break;
		case 2:
			if (Global_2815059.f_876 == 1 || BitTest(Global_1835502.f_176[13], PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
		case 3:
			iVar0 = PLAYER::PLAYER_ID();
			if (Global_2689235[iVar0 /*453*/].f_247)
			{
				return 1;
			}
			break;
		case 4:
			if (Global_2815059.f_4455 || BitTest(Global_1835502.f_176[11], PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_1202()//Position - 0x4C974
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bVar2 = false;
	switch (Local_122.f_181.f_69)
	{
		case 0:
			if (func_309(43))
			{
				if (func_279(43))
				{
					func_1203();
				}
				else
				{
					func_92(29, 0);
					bVar2 = true;
				}
			}
			else
			{
				func_92(1, 0);
				bVar2 = true;
			}
			break;
		case 1:
			if (func_168() != 0)
			{
				if (func_170())
				{
					func_1(Local_122.f_1, "EXCALAU", "EXCAL_HPROBM", &Local_166, 0);
				}
				else
				{
					func_1(Local_122.f_1, "EXCALAU", "EXCAL_HPROBF", &Local_166, 0);
				}
			}
			else if (func_309(44))
			{
				if (func_279(44))
				{
					func_1196();
				}
				else
				{
					bVar2 = true;
					func_92(29, 0);
				}
			}
			else
			{
				bVar2 = true;
				func_92(1, 0);
			}
			break;
	}
	if (bVar2)
	{
		if (func_170())
		{
			func_1(Local_122.f_1, "EXCALAU", "EXCAL_NEGM", &Local_166, 0);
		}
		else
		{
			func_1(Local_122.f_1, "EXCALAU", "EXCAL_NEGF", &Local_166, 0);
		}
	}
	if (bVar1)
	{
		func_92(1, 0);
	}
	else if (bVar0)
	{
		func_92(0, 0);
	}
}

void func_1203()//Position - 0x4CA97
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar2 = -1;
	iVar3 = 0;
	if (__LIB_8__::func_889(__LIB_1__::func_463()))
	{
		bVar1 = true;
	}
	if (Local_122.f_181.f_69 == 0)
	{
		if (bVar1)
		{
			if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(43), false, true, false, -1, 0))
			{
				iVar3 = func_1198(5);
				if (iVar3 == 0)
				{
					iVar4 = __LIB_12__::func_672(43);
					if (iVar4 > 0)
					{
						func_92(20, iVar4);
						func_1(Local_122.f_1, "CT_AUD", "MPCT_HPno", &Local_166, 0);
					}
					else
					{
						MISC::SET_BIT(&(Local_122.f_359), 10);
						Local_122.f_360 = 43;
						Local_122.f_358 = __LIB_0__::getMinusOneOrNull();
						__LIB_23__::func_534(__LIB_0__::func_943(1, 1), Local_122.f_360, __LIB_0__::getMinusOneOrNull(), 0);
					}
				}
			}
			else
			{
				bVar0 = true;
			}
		}
	}
	if (iVar3 == 1)
	{
		func_92(24, 0);
		iVar2 = 1;
	}
	else if (iVar3 == 5)
	{
		func_92(1, 0);
		iVar2 = 1;
	}
	else if (iVar3 == 6)
	{
		func_92(29, 0);
		iVar2 = 1;
	}
	else if (bVar1 == 0)
	{
		func_1197(22, 0);
		iVar2 = 1;
	}
	else if (bVar0)
	{
		MISC::SET_BIT(&bLocal_169, 0);
		func_92(0, 0);
		iVar2 = 0;
	}
	switch (iVar2)
	{
		case 0:
			break;
		case 1:
			if (func_170())
			{
				func_1(Local_122.f_1, "EXCALAU", "EXCAL_IMNEGM", &Local_166, 0);
			}
			else
			{
				func_1(Local_122.f_1, "EXCALAU", "EXCAL_IMNEGF", &Local_166, 0);
			}
			break;
	}
}

void func_1204()//Position - 0x4CBF9
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	switch (Local_122.f_181.f_69)
	{
		case 3:
			if ((func_279(64) && func_309(64)) && !Global_262145.f_29259 /* Tunable: -2046990177 */)
			{
				if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(64), false, true, false, -1, 0) || __LIB_12__::func_845(64) == 0)
				{
					MISC::SET_BIT(&(Global_2815059.f_1777), 7);
					StringCopy(&(Local_122.f_170), "CCYCAUD", 16);
					StringCopy(&(Local_122.f_174), "CCYC_FCREQ1", 16);
					func_1(Local_122.f_1, &(Local_122.f_170), &(Local_122.f_174), &Local_166, 1);
					func_32(4);
				}
			}
			break;
		case 0:
			if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(40), false, true, false, -1, 0))
			{
				iVar2 = __LIB_1__::func_780(PLAYER::PLAYER_ID());
				if (((((!__LIB_10__::func_724(PLAYER::PLAYER_ID(), iVar2, 100f) && !func_231(0)) && !func_240(0)) && !func_239(PLAYER::PLAYER_ID(), 0)) && !__LIB_1__::func_779(0, 1024)) && !Global_262145.f_13115 /* Tunable: YACHT_DISABLE_PHONE_HELI_DELIVERY */)
				{
					func_1206(0, 1);
					if (func_1205(0))
					{
						if (__LIB_0__::func_112())
						{
							func_99(joaat("SERVICE_SPEND_HELI_PICKUP"), __LIB_12__::func_845(40), &iVar3, 1, 1, 0);
						}
						else
						{
							MONEY::NETWORK_SPENT_HELI_PICKUP(__LIB_12__::func_845(40), false, true, -1266520414);
						}
						StringCopy(&(Local_122.f_174), "APCAL_HELIC", 16);
						func_1(Local_122.f_1, &(Local_122.f_170), &(Local_122.f_174), &Local_166, 1);
						func_32(4);
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar1 || bVar0)
			{
				StringCopy(&(Local_122.f_174), "APCAL_HELIR", 16);
				func_1(Local_122.f_1, &(Local_122.f_170), &(Local_122.f_174), &Local_166, 1);
			}
			break;
		case 1:
			if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(41), false, true, false, -1, 0))
			{
				iVar2 = __LIB_1__::func_780(PLAYER::PLAYER_ID());
				if (((((!__LIB_10__::func_724(PLAYER::PLAYER_ID(), iVar2, 100f) && !func_231(1)) && !func_240(1)) && !__LIB_1__::func_779(1, 1024)) && !func_239(PLAYER::PLAYER_ID(), 1)) && !Global_262145.f_13114 /* Tunable: YACHT_DISABLE_PHONE_BOAT_SHORE_DELIVERY */)
				{
					func_1206(1, 1);
					if (func_1205(1))
					{
						if (__LIB_0__::func_112())
						{
							func_99(joaat("SERVICE_SPEND_BOAT_PICKUP"), __LIB_12__::func_845(41), &iVar3, 1, 1, 0);
						}
						else
						{
							MONEY::NETWORK_SPENT_BOAT_PICKUP(__LIB_12__::func_845(41), false, true, -1266520414);
						}
						StringCopy(&(Local_122.f_174), "APCAL_BOATC", 16);
						func_1(Local_122.f_1, &(Local_122.f_170), &(Local_122.f_174), &Local_166, 1);
						func_32(4);
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar1 || bVar0)
			{
				StringCopy(&(Local_122.f_174), "APCAL_BOATR", 16);
				func_1(Local_122.f_1, &(Local_122.f_170), &(Local_122.f_174), &Local_166, 1);
			}
			break;
		case 2:
			func_187(&uVar5, &uVar4);
			if (((((uVar4 && uVar5) && __LIB_10__::func_724(PLAYER::PLAYER_ID(), __LIB_1__::func_780(PLAYER::PLAYER_ID()), 100f)) && !func_177(1133903872)) && !func_186(PLAYER::PLAYER_ID())) && !Global_262145.f_13113 /* Tunable: YACHT_DISABLE_PHONE_PV_SHORE_DELIVERY */)
			{
				Global_2815059.f_5977 = 1;
				Local_122.f_178 = 9;
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				Local_122.f_181.f_69 = 0;
				StringCopy(&(Local_122.f_174), "APCAL_GENOH", 16);
				func_1(Local_122.f_1, &(Local_122.f_170), &(Local_122.f_174), &Local_166, 1);
			}
			else
			{
				Global_2815059.f_5977 = 0;
				bVar1 = true;
			}
			if (bVar1 || bVar0)
			{
				StringCopy(&(Local_122.f_174), "APCAL_PVR", 16);
				func_1(Local_122.f_1, &(Local_122.f_170), &(Local_122.f_174), &Local_166, 1);
			}
			break;
	}
	if (bVar1)
	{
		func_92(1, 0);
	}
	else if (bVar0)
	{
		func_92(0, 0);
	}
}

bool func_1205(int iParam0)//Position - 0x4CFC5
{
	return __LIB_1__::func_779(iParam0, 256);
}

void func_1206(int iParam0, bool bParam1)//Position - 0x4CFD6
{
	__LIB_28__::func_322(iParam0, 256, bParam1);
}

void func_1208()//Position - 0x4D044
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (Local_122.f_181.f_69 == 0)
	{
		if (__LIB_2__::func_104(74, 0, 0))
		{
			if (func_309(39))
			{
				if (func_279(39))
				{
					if (__LIB_1__::func_833(1) >= __LIB_12__::func_845(39))
					{
						if (!BitTest(Global_2703735.f_3673, 0))
						{
							iVar2 = __LIB_12__::func_672(39);
							if (iVar2 > 0)
							{
								func_92(20, iVar2);
							}
							else if (!BitTest(Global_2703735.f_3673, 7) && !BitTest(Local_122.f_359, 18))
							{
								Global_2703735.f_3674 = joaat("stretch");
								MISC::SET_BIT(&(Local_122.f_359), 18);
							}
							else
							{
								func_1(Local_122.f_1, "BACALAU", "BACAL_UNABLE", &Local_166, 1);
								func_92(1, 0);
							}
						}
						else
						{
							bVar1 = true;
						}
					}
					else
					{
						MISC::SET_BIT(&bLocal_169, 0);
						bVar0 = true;
					}
				}
				else
				{
					func_92(29, 0);
				}
			}
			else
			{
				func_92(1, 0);
			}
		}
	}
	else
	{
		func_1135();
	}
	if (bVar1)
	{
		func_92(27, 0);
	}
	else if (bVar0)
	{
		func_92(0, 0);
		func_1(Local_122.f_1, "CT_AUD", "MPCT_Bmon", &Local_166, 0);
	}
}

void func_1209()//Position - 0x4D157
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (BitTest(bLocal_169, 2))
	{
		if (Local_122.f_181.f_70[Local_122.f_181.f_69] > 3)
		{
			func_1079();
			return;
		}
	}
	iVar0 = __LIB_29__::func_105(Local_122.f_181.f_70[Local_122.f_181.f_69]);
	iVar1 = __LIB_35__::func_814(iVar0);
	if (__LIB_0__::func_112())
	{
		func_99(joaat("SERVICE_SPEND_REQUEST_HEIST"), iVar1, &iVar2, 1, 1, 0);
	}
	else
	{
		MONEY::NETWORK_SPENT_REQUEST_HEIST(iVar1, false, false, joaat("char_lester"));
	}
	__LIB_33__::func_581(iVar0);
	__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[50 /*2*/]), 1, 0);
	__LIB_42__::func_920(50, -1, -1);
	func_32(4);
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
}

void func_1213()//Position - 0x4D3FB
{
	var uVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (BitTest(bLocal_169, 2))
	{
		if (Local_122.f_181.f_70[Local_122.f_181.f_69] > 0)
		{
			func_1079();
			return;
		}
	}
	uVar0 = __LIB_12__::func_841(PLAYER::PLAYER_ID());
	iVar1 = __LIB_29__::func_189(12, uVar0, &uLocal_182, &iLocal_183);
	bVar2 = false;
	bVar2 = false;
	while (bVar2 < iVar1)
	{
		if (Local_122.f_181.f_70[Local_122.f_181.f_69] == bVar2)
		{
			if (!BitTest(iLocal_183, bVar2))
			{
				return;
			}
		}
		bVar2++;
	}
	iVar3 = __LIB_12__::func_845(36);
	__LIB_1__::func_865(-iVar3, 1, 1, 0f);
	if (iVar3 > 0)
	{
		MONEY::NETWORK_SPENT_REQUEST_HEIST(iVar3, false, true, joaat("char_lester"));
	}
	MISC::SET_BIT(&(Global_2815059.f_1777), 6);
	iVar4 = Local_122.f_181.f_70[Local_122.f_181.f_69];
	Global_2815059.f_1779 = uLocal_182[iVar4];
	__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[36 /*2*/]), 1, 0);
	__LIB_42__::func_920(36, -1, -1);
	func_32(4);
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
}

void func_1214()//Position - 0x4D4ED
{
	switch (Local_122.f_181.f_69)
	{
		case 0:
			MISC::SET_BIT(&(Local_122.f_359), 10);
			Local_122.f_360 = __LIB_28__::func_634(Local_122.f_0);
			Local_122.f_358 = __LIB_0__::getMinusOneOrNull();
			__LIB_23__::func_534(__LIB_0__::func_943(1, 1), Local_122.f_360, __LIB_0__::getMinusOneOrNull(), 0);
			break;
		case 1:
			func_32(4);
			break;
	}
}

void func_1216()//Position - 0x4D5CB
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (Local_122.f_181.f_69 == 0)
	{
		if (__LIB_2__::func_104(106, 0, 0))
		{
			if (func_309(21))
			{
				if (func_279(21))
				{
					iVar2 = __LIB_12__::func_672(21);
					if (iVar2 > 0)
					{
						func_92(20, iVar2);
						if (!BitTest(Global_2815059.f_1794, 18))
						{
							func_1(Local_122.f_1, "CT_AUD", "MPCT_RJobcoo", &Local_166, 0);
						}
						else
						{
							func_1(Local_122.f_1, "CT_AUD", "MPCT_RJobno", &Local_166, 0);
						}
					}
					else if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(21), false, true, false, -1, 0))
					{
						MISC::SET_BIT(&(Global_2815059.f_1777), 5);
						__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[21 /*2*/]), 1, 0);
						__LIB_42__::func_920(21, -1, -1);
						func_32(4);
					}
					else
					{
						MISC::SET_BIT(&bLocal_169, 0);
						func_1(Local_122.f_1, "CT_AUD", "MPCT_Rmon", &Local_166, 0);
						func_92(0, 0);
					}
				}
				else
				{
					func_92(29, 0);
				}
			}
			else
			{
				func_92(1, 0);
			}
		}
	}
	else
	{
		func_1138();
	}
	if (bVar1)
	{
		func_92(27, 0);
	}
	else if (bVar0)
	{
		func_92(0, 0);
	}
}

void func_1217()//Position - 0x4D6E9
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (Local_122.f_181.f_69 == 0)
	{
		if (__LIB_2__::func_104(97, 0, 0))
		{
			if (func_309(17))
			{
				if (func_279(17))
				{
					iVar2 = __LIB_12__::func_672(17);
					if (iVar2 > 0)
					{
						func_92(20, iVar2);
						if (!BitTest(Global_2815059.f_1793, 2))
						{
							func_1(Local_122.f_1, "CT_AUD", "MPCT_GJobcoo", &Local_166, 0);
						}
						else
						{
							func_1(Local_122.f_1, "CT_AUD", "MPCT_GJobno", &Local_166, 0);
						}
					}
					else if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(17), false, true, false, -1, 0))
					{
						MISC::SET_BIT(&(Global_2815059.f_1777), 2);
						__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[17 /*2*/]), 1, 0);
						__LIB_42__::func_920(17, -1, -1);
						func_32(4);
					}
					else
					{
						MISC::SET_BIT(&bLocal_169, 0);
						func_1(Local_122.f_1, "CT_AUD", "MPCT_Gmon", &Local_166, 0);
						func_92(0, 0);
					}
				}
				else
				{
					func_92(29, 0);
				}
			}
			else
			{
				func_92(1, 0);
			}
		}
	}
	else
	{
		func_1139();
	}
	if (bVar1)
	{
		func_92(27, 0);
	}
	else if (bVar0)
	{
		func_92(0, 0);
	}
}

void func_1218()//Position - 0x4D806
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (Local_122.f_181.f_69 == 0)
	{
		if (__LIB_2__::func_104(100, 0, 0))
		{
			if (func_309(19))
			{
				if (func_279(19))
				{
					iVar2 = __LIB_12__::func_672(19);
					if (iVar2 > 0)
					{
						func_92(20, iVar2);
						if (!BitTest(Global_2815059.f_1793, 9))
						{
							func_1(Local_122.f_1, "CT_AUD", "MPCT_MJobcoo", &Local_166, 0);
						}
						else
						{
							func_1(Local_122.f_1, "CT_AUD", "MPCT_MJobno", &Local_166, 0);
						}
					}
					else if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(15), false, true, false, -1, 0))
					{
						MISC::SET_BIT(&(Global_2815059.f_1777), 4);
						__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[19 /*2*/]), 1, 0);
						__LIB_42__::func_920(19, -1, -1);
						func_32(4);
					}
					else
					{
						MISC::SET_BIT(&bLocal_169, 0);
						func_1(Local_122.f_1, "CT_AUD", "MPCT_Mmon", &Local_166, 0);
						func_92(0, 0);
					}
				}
				else
				{
					func_92(29, 0);
				}
			}
			else
			{
				func_92(1, 0);
			}
		}
	}
	else
	{
		func_1140();
	}
	if (bVar1)
	{
		func_92(27, 0);
	}
	else if (bVar0)
	{
		func_92(0, 0);
	}
}

void func_1219()//Position - 0x4D924
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (Local_122.f_181.f_69 == 0)
	{
		if (__LIB_2__::func_104(99, 0, 0))
		{
			if (func_309(18))
			{
				if (func_279(18))
				{
					iVar2 = __LIB_12__::func_672(18);
					if (iVar2 > 0)
					{
						func_92(20, iVar2);
						if (!BitTest(Global_2815059.f_1793, 8))
						{
							func_1(Local_122.f_1, "CT_AUD", "MPCT_SJobcoo", &Local_166, 0);
						}
						else
						{
							func_1(Local_122.f_1, "CT_AUD", "MPCT_SJobno", &Local_166, 0);
						}
					}
					else if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(18), false, true, false, -1, 0))
					{
						MISC::SET_BIT(&(Global_2815059.f_1777), 3);
						__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[18 /*2*/]), 1, 0);
						__LIB_42__::func_920(18, -1, -1);
						func_32(4);
					}
					else
					{
						MISC::SET_BIT(&bLocal_169, 0);
						func_1(Local_122.f_1, "CT_AUD", "MPCT_Smon", &Local_166, 0);
						func_92(0, 0);
					}
				}
				else
				{
					func_92(29, 0);
				}
			}
			else
			{
				func_92(1, 0);
			}
		}
	}
	else
	{
		func_1141();
	}
	if (bVar1)
	{
		func_92(27, 0);
	}
	else if (bVar0)
	{
		func_92(0, 0);
	}
}

void func_1220()//Position - 0x4DA42
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<5> Var3;
	int iVar4;
	if (bLocal_136)
	{
		uLocal_138 = Local_122.f_181.f_69;
		iLocal_137 = iLocal_139[Local_122.f_181.f_69];
		func_911();
	}
	else
	{
		bVar0 = true;
		bVar1 = false;
		if (__LIB_1__::func_599(0) || Global_1922044)
		{
			if (__LIB_14__::func_504(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1))
			{
				bVar0 = false;
			}
		}
		if (__LIB_2__::func_771(iLocal_137, -1) == 116)
		{
			bVar1 = true;
			bVar0 = false;
		}
		if (iLocal_137 >= 1000 && __LIB_1__::func_596(iLocal_137) == 1)
		{
			bVar1 = true;
			bVar0 = false;
		}
		if (iLocal_201 == 0)
		{
			if (iLocal_135 == Local_122.f_181.f_69)
			{
				if (iLocal_134 < 0)
				{
					iLocal_134 = 0;
				}
				if (iLocal_134 == 0 || ((iLocal_134 > 0 && (MONEY::NETWORK_GET_VC_BANK_BALANCE() + MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1)) >= iLocal_134) || MONEY::NETWORK_CAN_SPEND_MONEY(iLocal_134, false, true, false, -1, 0)))
				{
					if (__LIB_0__::func_169(91, 3) == 1)
					{
						if (__LIB_0__::func_112())
						{
							iLocal_201++;
						}
						else
						{
							func_941(1);
						}
					}
					else
					{
						func_32(4);
					}
				}
				else
				{
					func_1(Local_122.f_1, "CT_AUD", "MPCT_INSmon", &Local_166, 0);
					func_92(31, 0);
					MISC::SET_BIT(&bLocal_169, 0);
				}
			}
		}
		if (iLocal_203 == 0)
		{
			if (!iLocal_135 == Local_122.f_181.f_69)
			{
				iVar2 = iLocal_151[Local_122.f_181.f_69];
				if (__LIB_28__::func_635(iVar2))
				{
					if (!Global_1585094)
					{
						if (__LIB_0__::func_169(91, 3) == 1)
						{
							__LIB_3__::func_563(&Var3, Global_1585857[iVar2 /*142*/].f_66, 0, -1);
							if (BitTest(Global_1585857[iVar2 /*142*/].f_103, 16))
							{
								iVar4 = Var3.f_4;
								if (func_912(iVar2) > 0)
								{
									iVar4 = (iVar4 - func_912(iVar2));
								}
								if (__LIB_1__::func_587(Global_1585857[iVar2 /*142*/].f_66))
								{
									iVar4 = Global_262145.f_21982 /* Tunable: 843919183 */;
								}
							}
							else
							{
								iVar4 = 0;
							}
							if (!__LIB_26__::func_657(iVar2, 0, 0, -1, 0))
							{
								bVar1 = true;
							}
							if (__LIB_0__::func_334(PLAYER::PLAYER_ID()))
							{
								bVar1 = true;
								bVar0 = false;
							}
							if (Global_1585857[iVar2 /*142*/].f_66 == joaat("oppressor2") && __LIB_12__::func_673())
							{
								bVar1 = true;
								bVar0 = false;
							}
							if (iVar4 == 0 || ((MONEY::NETWORK_GET_VC_BANK_BALANCE() + MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1)) >= iVar4 || MONEY::NETWORK_CAN_SPEND_MONEY(iVar4, false, true, false, -1, 0)))
							{
								Global_1585094.f_2 = iVar4;
								Global_1585094.f_3 = iVar2;
								if (__LIB_0__::func_112())
								{
									iLocal_203++;
								}
								else
								{
									func_937(Global_1585094.f_2, Global_1585094.f_3, bVar1, bVar0, 1);
								}
							}
							else
							{
								func_1(Local_122.f_1, "CT_AUD", "MPCT_INSmon", &Local_166, 0);
								func_92(31, 0);
								MISC::SET_BIT(&bLocal_169, 0);
							}
						}
						else
						{
							func_32(4);
						}
					}
					else if (iLocal_152 != 0)
					{
						if ((Global_1585094.f_2 > 0 && MONEY::NETWORK_CAN_SPEND_MONEY(Global_1585094.f_2, false, true, false, -1, 0)) || Global_1585094.f_2 <= 0)
						{
							Global_1585094.f_3 = iVar2;
							if (__LIB_0__::func_112())
							{
								iLocal_203 = 11;
							}
							else
							{
								func_930(Global_1585094.f_2, Global_1585094.f_3, 1);
							}
						}
					}
				}
			}
		}
	}
}

void func_1221()//Position - 0x4DD45
{
	if (func_1019())
	{
		func_1223();
		return;
	}
	if (iLocal_161)
	{
		func_1222();
	}
}

void func_1222()//Position - 0x4DD65
{
	iLocal_160 = iLocal_165[Local_122.f_181.f_69];
	Local_122.f_181.f_69 = 0;
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
}

void func_1223()//Position - 0x4DD8C
{
	int iVar0;
	int iVar1;
	if (!func_1251())
	{
		return;
	}
	iVar0 = Local_122.f_181.f_69;
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = uLocal_164[iVar0];
	if (func_1250(iVar0))
	{
		func_1246(iVar1);
	}
	else
	{
		func_1224(iVar1);
	}
}

void func_1224(int iParam0)//Position - 0x4DDD1
{
	if (!__LIB_27__::func_835(iParam0))
	{
		func_92(1, 0);
		return;
	}
	if (!__LIB_20__::func_123(iParam0))
	{
		func_92(1, 0);
		return;
	}
	if (!func_1243(__LIB_1__::func_344(func_996(iParam0), -1)))
	{
		func_92(1, 0);
		return;
	}
	if (func_1242())
	{
		func_1241();
		return;
	}
	func_1225(iParam0);
}

void func_1225(int iParam0)//Position - 0x4DE2F
{
	int iVar0;
	iVar0 = func_996(iParam0);
	Global_2703735.f_3674 = __LIB_1__::func_344(iVar0, -1);
	if (__LIB_8__::func_392(iVar0))
	{
		func_1226(iParam0);
	}
	func_960(1);
	MISC::CLEAR_BIT(&(Global_2703735.f_3673), 11);
}

void func_1226(int iParam0)//Position - 0x4DE6E
{
	int iVar0;
	var uVar1[2];
	iVar0 = PLAYER::PLAYER_ID();
	Global_2689235[iVar0 /*453*/].f_46 = __LIB_9__::func_484(iParam0);
	__LIB_8__::func_394(iParam0, &(uVar1[0]), &(uVar1[1]));
	Global_2689235[iVar0 /*453*/].f_47 = uVar1[0];
	Global_2689235[iVar0 /*453*/].f_48 = uVar1[1];
}

void func_1241()//Position - 0x4E8B6
{
	func_1(Local_122.f_1, "CT_AUD", "MPCT_PGblip", &Local_166, 0);
	func_92(1, 0);
}

bool func_1242()//Position - 0x4E8DA
{
	return ((BitTest(Global_2703735.f_3673, 7) || BitTest(Local_122.f_359, 18)) || BitTest(Global_2703735.f_3673, 0));
}

int func_1243(int iParam0)//Position - 0x4E908
{
	int iVar0;
	var uVar1;
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("annihilator"):
			iVar0 = 78;
			break;
		case joaat("buzzard"):
			iVar0 = 20;
			break;
		case joaat("rhino"):
			iVar0 = 17;
			break;
	}
	if (iVar0 != -1)
	{
		if (__LIB_1__::func_136(PLAYER::PLAYER_ID()) < func_1244(iVar0, &uVar1))
		{
			return 0;
		}
	}
	return 1;
}

int func_1244(int iParam0, var uParam1)//Position - 0x4E95F
{
	*uParam1 = 0;
	if ((((iParam0 == 17 || iParam0 == 20) || iParam0 == 78) || iParam0 == 148) || iParam0 == 169)
	{
		*uParam1 = 1;
	}
	switch (iParam0)
	{
		case 0:
			return 31;
		case 1:
			return 43;
		case 2:
			return 45;
		case 3:
			return 27;
		case 4:
			return 47;
		case 5:
			return 49;
		case 6:
			return 36;
		case 7:
			return 26;
		case 46:
			return 29;
		case 70:
			return 24;
		case 71:
			return 21;
		case 72:
			return 35;
		case 56:
			return 44;
		case 50:
			return 46;
		case 44:
			return 25;
		case 47:
			return 28;
		case 73:
			return 28;
		case 74:
			return 33;
		case 75:
			return 33;
		case 76:
			return 43;
		case 55:
			return 22;
		case 77:
			return 23;
		case 48:
			return 20;
		case 45:
			return 19;
		case 49:
			return 16;
		case 95:
			return 1;
		case 96:
			return 1;
		case 97:
			return 1;
		case 98:
			return 1;
		case 9:
			return 1;
		case 13:
			return 9;
		case 10:
			return 39;
		case 12:
			return 16;
		case 14:
			return 50;
		case 11:
			return 40;
		case 15:
			return 30;
		case 16:
			return 7;
		case 78:
			if (!Global_262145.f_20185 /* Tunable: DISABLE_RANK_LOCK_ANNIHLATOR */)
			{
				*uParam1 = 1;
				return 37;
			}
			else
			{
				*uParam1 = 0;
				return 1;
			}
			break;
		case 79:
			return 12;
		case 80:
			return 20;
		case 17:
			if (!Global_262145.f_20183 /* Tunable: DISABLE_RANK_LOCK_RHINO */)
			{
				*uParam1 = 1;
				return 70;
			}
			else
			{
				*uParam1 = 0;
				return 1;
			}
			break;
		case 22:
			return 10;
		case 18:
			return 32;
		case 19:
			return 22;
		case 20:
			if (!Global_262145.f_20184 /* Tunable: DISABLE_RANK_LOCK_BUZZARD */)
			{
				*uParam1 = 1;
				return 42;
			}
			else
			{
				*uParam1 = 0;
				return 1;
			}
			break;
		case 21:
			return 8;
		case 81:
			return 19;
		case 82:
			return 41;
		case 83:
			return 41;
		case 84:
			return 23;
		case 85:
			return 11;
		case 86:
			return 13;
		case 87:
			return 17;
		case 148:
			if (Global_262145.f_16826 /* Tunable: DUBSTA_RANKLOCK */)
			{
				*uParam1 = 1;
				return 100;
			}
			else
			{
				*uParam1 = 0;
				return 1;
			}
			break;
		case 23:
			return 1;
		case 24:
			return 48;
		case 25:
			return 17;
		case 26:
			return 1;
		case 27:
			return 23;
		case 28:
			return 1;
		case 29:
			return 16;
		case 30:
			return 5;
		case 31:
			return 1;
		case 32:
			return 38;
		case 33:
			return 9;
		case 34:
			return 13;
		case 35:
			return 19;
		case 36:
			return 18;
		case 37:
			return 17;
		case 38:
			return 5;
		case 63:
			return 12;
		case 57:
			return 12;
		case 62:
			return 18;
		case 94:
			return 18;
		case 51:
			return 7;
		case 89:
			return 14;
		case 66:
			return 15;
		case 58:
			return 14;
		case 54:
			return 10;
		case 90:
			return 11;
		case 69:
			return 5;
		case 60:
			return 21;
		case 91:
			return 21;
		case 53:
			return 17;
		case 41:
			return 13;
		case 92:
			return 15;
		case 43:
			return 5;
		case 61:
			return 9;
		case 67:
			return 8;
		case 59:
			return 11;
		case 64:
			return 10;
		case 68:
			return 6;
		case 52:
			return 15;
		case 39:
			return 15;
		case 88:
			return 34;
		case 65:
			return 7;
		case 42:
			return 6;
		case 40:
			return 14;
		case 93:
			return 14;
	}
	return 1;
}

void func_1246(int iParam0)//Position - 0x4EE59
{
	int iVar0;
	if (!func_1248(iParam0))
	{
		func_92(1, 0);
		return;
	}
	if (!FILES::GET_DLC_VEHICLE_DATA(iParam0, &iVar0))
	{
		func_92(1, 0);
		return;
	}
	if (FILES::IS_CONTENT_ITEM_LOCKED(iVar0))
	{
		func_92(1, 0);
		return;
	}
	if (func_1242())
	{
		func_1241();
		return;
	}
	func_1247(FILES::GET_DLC_VEHICLE_MODEL(iParam0));
}

void func_1247(int iParam0)//Position - 0x4EEB3
{
	Global_2703735.f_3674 = iParam0;
	func_960(1);
	MISC::SET_BIT(&(Global_2703735.f_3673), 11);
}

int func_1248(int iParam0)//Position - 0x4EED6
{
	if (!func_1249(iParam0))
	{
		return 0;
	}
	if (__LIB_1__::func_822(iParam0))
	{
		return 0;
	}
	if (func_1243(FILES::GET_DLC_VEHICLE_MODEL(iParam0)))
	{
		return 0;
	}
	return 1;
}

bool func_1249(int iParam0)//Position - 0x4EF0B
{
	return (__LIB_27__::func_835(iParam0) && iLocal_162 > 0);
}

bool func_1250(int iParam0)//Position - 0x4EF23
{
	return iParam0 > iLocal_163;
}

int func_1251()//Position - 0x4EF31
{
	if (func_967())
	{
		return 0;
	}
	if (BitTest(Global_2703735.f_3673, 0))
	{
		return 0;
	}
	if (func_1014())
	{
		func_92(20, func_1252());
		return 0;
	}
	if (!__LIB_2__::func_104(90, 0, 0))
	{
		func_92(1, 0);
		return 0;
	}
	if (!MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(22), false, true, false, -1, 0))
	{
		func_1(Local_122.f_1, "CT_AUD", "MPCT_PGmon", &Local_166, 0);
		func_92(0, 0);
		return 0;
	}
	return 1;
}

int func_1252()//Position - 0x4EFB3
{
	return __LIB_12__::func_672(22);
}

void func_1253()//Position - 0x4EFC1
{
	if (__LIB_31__::func_91(Local_122.f_181.f_70[Local_122.f_181.f_69]))
	{
		Local_122.f_178 = 6;
		uLocal_170 = Local_122.f_181.f_70[Local_122.f_181.f_69];
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
		uLocal_171 = Local_122.f_181.f_69;
		Local_122.f_181.f_69 = 0;
	}
	else
	{
		func_1197(17, 0);
	}
}

void func_1255()//Position - 0x4F12D
{
	bool bVar0;
	int iVar1;
	int iVar2;
	iVar1 = __LIB_12__::func_845(12);
	if (func_91(1))
	{
		if (__LIB_0__::func_156(Local_122.f_358, 0, 1))
		{
			if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar1, false, true, false, -1, 0))
			{
				iVar2 = __LIB_12__::func_672(12);
				if (iVar2 > 0)
				{
					func_92(20, iVar2);
				}
				else
				{
					MISC::SET_BIT(&(Local_122.f_359), 10);
					Local_122.f_360 = 12;
					__LIB_23__::func_534(__LIB_0__::func_943(1, 1), 12, Local_122.f_358, 0);
				}
			}
			else
			{
				bVar0 = true;
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_122.f_359), 4);
			Local_122.f_178 = 4;
			Local_122.f_181.f_69 = 0;
		}
		if (bVar0)
		{
			MISC::SET_BIT(&bLocal_169, 0);
			MISC::CLEAR_BIT(&(Local_122.f_359), 4);
			Local_122.f_178 = 4;
			func_1(Local_122.f_1, "CT_AUD", "MPCT_MWmon", &Local_166, 0);
			func_92(0, 0);
		}
	}
}

void func_1256()//Position - 0x4F1F5
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (BitTest(bLocal_169, 2) && Local_122.f_181.f_69 == 1)
	{
		iVar1 = 80;
		func_1150();
	}
	else
	{
		iVar1 = func_1257(uLocal_159[Local_122.f_181.f_69], 0, 0, 0, 0, 0, 0, 0);
	}
	if (iVar1 == 0)
	{
		iVar2 = __LIB_12__::func_672(7);
		if (__LIB_9__::func_337(uLocal_159[Local_122.f_181.f_69]) == joaat("oppressor2") && __LIB_12__::func_673())
		{
			iVar2 = (Global_262145.f_28396 /* Tunable: 247954694 */ - __LIB_9__::func_22(&Global_2789823, 1));
		}
		if (iVar2 > 0)
		{
			func_92(20, iVar2);
		}
		else
		{
			Global_2815059.f_954 = 1;
			MISC::SET_BIT(&(Local_122.f_359), 10);
			Local_122.f_360 = 7;
			Local_122.f_358 = __LIB_0__::getMinusOneOrNull();
			__LIB_23__::func_534(__LIB_0__::func_943(1, 1), Local_122.f_360, __LIB_0__::getMinusOneOrNull(), 0);
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (iVar1 == 1)
		{
			__LIB_1__::func_789("BB_PVUNA1" /* GXT: You have no Personal Vehicle in this space. */, 100, 0);
			func_92(14, 0);
		}
		else if (iVar1 == 2)
		{
			__LIB_1__::func_789("BB_PVUNA2" /* GXT: You are too close to your current Personal Vehicle. */, 100, 0);
			func_92(13, 0);
		}
		else if (iVar1 == 3)
		{
			__LIB_1__::func_789("BB_PVUNA3" /* GXT: Your Personal Vehicle is not empty. */, 100, 0);
			func_92(15, 0);
		}
		else if (iVar1 == 4)
		{
			__LIB_1__::func_789("BB_PVUNA4" /* GXT: You are too far from a suitable road. */, 100, 0);
			func_92(16, 0);
		}
		else if (iVar1 == 5)
		{
			__LIB_1__::func_789("BB_PVUNA5" /* GXT: Unlocks when you have a Garage. */, 100, 0);
			func_92(17, 0);
		}
		else if (iVar1 == 6)
		{
			__LIB_1__::func_789("BB_PVUNA6" /* GXT: Unavailable. */, 100, 0);
			func_92(18, 0);
		}
		else if (iVar1 == 7)
		{
			__LIB_1__::func_789("BB_PVUNA7" /* GXT: A delivery is in progress. */, 100, 0);
			func_92(21, 0);
		}
		else if (iVar1 == 8)
		{
			__LIB_1__::func_789("BB_PVUNA8" /* GXT: Your Personal Vehicle is impounded. */, 100, 0);
			func_92(22, 0);
			func_1(Local_122.f_1, "CT_AUD", "MPCT_MCGEN2", &Local_166, 0);
		}
		else if (iVar1 == 9)
		{
			__LIB_1__::func_789("BB_PVUNA9" /* GXT: You are already using your Personal Vehicle. */, 100, 0);
			func_1197(2, 0);
		}
		else if (iVar1 == 11)
		{
			__LIB_1__::func_789("BB_PVUNA11" /* GXT: You are too close to your Garage. */, 100, 0);
			func_1197(13, 0);
		}
		else if (iVar1 == 12)
		{
			__LIB_1__::func_789("BB_PVUNA12" /* GXT: Your Personal Vehicle is destroyed. You can call Mors Mutual Insurance to make a claim. */, 100, 0);
			func_1197(16, 0);
		}
		else if (iVar1 == 13)
		{
			__LIB_1__::func_789("BB_PVUNA13" /* GXT: Your Personal Vehicle is destroyed. To protect your vehicles in the future you can purchase Car Insurance. */, 100, 0);
			func_1197(18, 0);
		}
		else if (iVar1 == 14)
		{
			__LIB_1__::func_789("PIM_HRPV14" /* GXT: You already have an active Special/Personal Vehicle. */, 100, 0);
			func_1197(23, 0);
		}
		else if (iVar1 == 98)
		{
			__LIB_1__::func_789("BB_PVUNA98" /* GXT: Your Personal Vehicle is already in the LS Car Meet. Return it to Storage via the Vehicles section of the Interaction Menu if you wish to request another vehicle. */, 100, 0);
			func_1197(24, 0);
		}
		else if (iVar1 == 99)
		{
			__LIB_1__::func_789("PIM_HRPV99" /* GXT: This vehicle is not allowed inside the LS Car Meet. */, 100, 0);
			func_1197(25, 0);
		}
	}
}

int func_1257(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0x4F477
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	struct<3> Var6;
	bVar0 = iParam5 == true;
	bVar1 = iParam5 == 2;
	bVar2 = iParam5 == 3;
	bVar3 = iParam5 == 4;
	bVar4 = iParam5 == 5;
	bVar5 = false;
	if (iParam0 == 157)
	{
		bVar5 = true;
	}
	if (__LIB_1__::func_708(PLAYER::PLAYER_ID()) && Global_1964839 == PLAYER::PLAYER_ID())
	{
		return 98;
	}
	if ((((!bVar0 && !bVar1) && !bVar2) && !bVar3) && !bVar4)
	{
		if (iParam0 == -1)
		{
			if (__LIB_1__::func_463() > -1)
			{
				iParam0 = __LIB_1__::func_463();
				if (__LIB_2__::func_721(Global_1585857[iParam0 /*142*/].f_66, 0) && iParam4 == 0)
				{
					return 1;
				}
				else if (__LIB_1__::func_587(Global_1585857[iParam0 /*142*/].f_66) && iParam4 == 0)
				{
					return 1;
				}
			}
			else if (iParam2 == 0)
			{
				iParam0 = 0;
			}
			else
			{
				return 1;
			}
		}
		if (iParam0 <= -1)
		{
			return 1;
		}
		if ((__LIB_0__::func_970(PLAYER::PLAYER_ID()) || __LIB_0__::func_971(PLAYER::PLAYER_ID())) || __LIB_1__::func_749())
		{
			if (!__LIB_29__::func_886(1, iParam0, -1, 0, 0))
			{
				return 6;
			}
		}
		if (BitTest(Global_4718592.f_38, 20))
		{
			if (!__LIB_31__::func_639(Global_1585857[iParam0 /*142*/].f_66))
			{
				return 25;
			}
		}
		if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 1))
		{
			if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 2))
			{
				return 12;
			}
			else
			{
				return 13;
			}
		}
	}
	if (iParam3 == 1)
	{
		if (!__LIB_0__::func_939(__LIB_2__::func_733(0)))
		{
			return 6;
		}
	}
	if (iParam1 == 0)
	{
		if (Global_2815059.f_911)
		{
			return 7;
		}
		if (Global_2815059.f_913)
		{
			return 7;
		}
		if (Global_2815059.f_924)
		{
			return 7;
		}
		if (Global_2815059.f_921)
		{
			return 7;
		}
		if (Global_2815059.f_925)
		{
			return 7;
		}
		if (Global_2815059.f_933)
		{
			return 7;
		}
		if (Global_2815059.f_945)
		{
			return 7;
		}
	}
	if (((((BitTest(Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1274, 0) && !bVar1) && !bVar0) && !bVar2) && !bVar3) && !bVar4)
	{
		return 10;
	}
	if ((((!bVar0 && !bVar1) && !bVar2) && !bVar3) && !bVar4)
	{
		if (__LIB_8__::func_889(iParam0))
		{
			return 8;
		}
	}
	if ((((!bVar0 && !bVar1) && !bVar2) && !bVar3) && !bVar4)
	{
		if (__LIB_2__::func_721(Global_1585857[iParam0 /*142*/].f_66, 0))
		{
			if (((ENTITY::DOES_ENTITY_EXIST(__LIB_2__::func_638()) && !ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_638(), false)) && __LIB_2__::func_721(ENTITY::GET_ENTITY_MODEL(__LIB_2__::func_638()), 0)) && ENTITY::GET_ENTITY_MODEL(__LIB_2__::func_638()) != joaat("trailersmall2"))
			{
				return 14;
			}
		}
	}
	if (bVar0)
	{
		if (__LIB_1__::func_850(13))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_1__::func_849(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
				{
					return 9;
				}
			}
			return 2;
		}
		if (__LIB_10__::func_155(PLAYER::PLAYER_ID()) || __LIB_12__::func_603(PLAYER::PLAYER_ID()))
		{
			return 20;
		}
		if (__LIB_1__::func_848(PLAYER::PLAYER_ID()) || __LIB_1__::func_847(PLAYER::PLAYER_ID()))
		{
			return 21;
		}
		if (__LIB_1__::func_846(PLAYER::PLAYER_ID()) || __LIB_12__::func_596(PLAYER::PLAYER_ID()))
		{
			return 22;
		}
	}
	else if (bVar1)
	{
		if (__LIB_1__::func_845(13))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_12__::func_508(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
				{
					return 9;
				}
			}
			return 2;
		}
		if (__LIB_1__::func_844(PLAYER::PLAYER_ID()) || __LIB_12__::func_602(PLAYER::PLAYER_ID()))
		{
			return 19;
		}
		if (__LIB_1__::func_848(PLAYER::PLAYER_ID()) || __LIB_1__::func_847(PLAYER::PLAYER_ID()))
		{
			return 21;
		}
		if (__LIB_1__::func_846(PLAYER::PLAYER_ID()) || __LIB_12__::func_596(PLAYER::PLAYER_ID()))
		{
			return 22;
		}
	}
	else if (bVar2)
	{
		if (__LIB_1__::func_843(13))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_12__::func_507(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
				{
					return 9;
				}
			}
			return 2;
		}
		if (__LIB_1__::func_844(PLAYER::PLAYER_ID()) || __LIB_12__::func_602(PLAYER::PLAYER_ID()))
		{
			return 19;
		}
		if (__LIB_10__::func_155(PLAYER::PLAYER_ID()) || __LIB_12__::func_603(PLAYER::PLAYER_ID()))
		{
			return 20;
		}
		if (__LIB_1__::func_846(PLAYER::PLAYER_ID()) || __LIB_12__::func_596(PLAYER::PLAYER_ID()))
		{
			return 22;
		}
	}
	else if (bVar3)
	{
		if (__LIB_1__::func_842(13))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_12__::func_601(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
				{
					return 9;
				}
			}
			return 2;
		}
		if (func_547(PLAYER::PLAYER_ID()))
		{
			return 2;
		}
		if (__LIB_0__::func_121(__LIB_12__::func_294(PLAYER::PLAYER_ID())) && __LIB_12__::func_596(PLAYER::PLAYER_ID()))
		{
			return 14;
		}
		if (__LIB_1__::func_844(PLAYER::PLAYER_ID()) || __LIB_12__::func_602(PLAYER::PLAYER_ID()))
		{
			return 19;
		}
		if (__LIB_10__::func_155(PLAYER::PLAYER_ID()) || __LIB_12__::func_603(PLAYER::PLAYER_ID()))
		{
			return 20;
		}
		if (__LIB_1__::func_848(PLAYER::PLAYER_ID()) || __LIB_1__::func_847(PLAYER::PLAYER_ID()))
		{
			return 21;
		}
	}
	else if (bVar4)
	{
		if (__LIB_12__::func_597(13))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_12__::func_600(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
				{
					return 9;
				}
			}
			return 2;
		}
	}
	else
	{
		if (__LIB_1__::func_599(13))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_1__::func_461(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1))
				{
					return 9;
				}
			}
			if (!bParam7)
			{
				if (__LIB_2__::func_904(PLAYER::PLAYER_ID()))
				{
					return 98;
				}
				return 2;
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_12__::func_599(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1))
			{
				return 9;
			}
		}
	}
	if (bParam7)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(__LIB_2__::func_638()) && !ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_638(), false)) && __LIB_1__::func_587(ENTITY::GET_ENTITY_MODEL(__LIB_2__::func_638())))
		{
			return 15;
		}
	}
	if ((((!bVar0 && !bVar1) && !bVar2) && !bVar3) && !bVar4)
	{
		if (Global_1585857[iParam0 /*142*/].f_66 == 0)
		{
			return 1;
		}
		if (!bVar5)
		{
			if (!__LIB_14__::func_504(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1))
			{
				if (Global_1585857[iParam0 /*142*/].f_66 != 0)
				{
					return 5;
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 6;
	}
	if (bVar0)
	{
		if (__LIB_1__::func_850(14))
		{
			return 3;
		}
	}
	else if (bVar1)
	{
		if (__LIB_1__::func_845(14))
		{
			return 3;
		}
	}
	else if (bVar2)
	{
		if (__LIB_1__::func_843(14))
		{
			return 3;
		}
	}
	else if (bVar3)
	{
		if (__LIB_1__::func_842(14))
		{
			return 3;
		}
	}
	else if (bVar4)
	{
		if (__LIB_12__::func_597(14))
		{
			return 3;
		}
	}
	else if (!bParam7)
	{
		if (__LIB_1__::func_599(14))
		{
			return 3;
		}
	}
	Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (__LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 4;
	}
	if (bVar1)
	{
		if (__LIB_1__::func_786(PLAYER::PLAYER_ID()))
		{
			return 4;
		}
		if (__LIB_13__::func_170(PLAYER::PLAYER_ID()))
		{
			return 4;
		}
	}
	if (((((((!func_1263(Var6) && !bParam6) && !bParam7) && !bVar1) && !bVar3) && !bVar4) && !__LIB_1__::func_629()) && !__LIB_2__::func_904(PLAYER::PLAYER_ID()))
	{
		return 4;
	}
	if (__LIB_2__::func_904(PLAYER::PLAYER_ID()))
	{
		if (iParam0 >= 0)
		{
			if (!__LIB_1__::func_841(Global_1585857[iParam0 /*142*/].f_66) || !__LIB_3__::func_561(Global_1585857[iParam0 /*142*/].f_66, 21))
			{
				return 99;
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(__LIB_2__::func_638()) && !ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_638(), false))
		{
			if (!__LIB_1__::func_841(ENTITY::GET_ENTITY_MODEL(__LIB_2__::func_638())) || !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(__LIB_2__::func_638()), 21))
			{
				return 99;
			}
		}
	}
	if (func_439(Var6, (((bParam7 || bVar1) || bVar3) || bVar4)) && !bParam7)
	{
		return 4;
	}
	return 0;
}

int func_1263(struct<3> Param0)//Position - 0x50104
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	if (SYSTEM::VDIST(Global_2667225.f_2908, Param0) < Global_2667225.f_2913)
	{
		return Global_2667225.f_2911;
	}
	Global_2667225.f_2908 = { Param0 };
	iVar1 = __LIB_2__::func_745();
	if (!iVar1 == -1)
	{
		if (__LIB_10__::func_724(PLAYER::PLAYER_ID(), iVar1, 500f))
		{
			Global_2667225.f_2911 = 1;
			return 1;
		}
	}
	if (func_447(Param0))
	{
		Global_2667225.f_2911 = 1;
		return 1;
	}
	iVar2 = 5;
	if (!__LIB_1__::func_509(Param0))
	{
		iVar2 = 13;
	}
	if (!PATHFIND::GET_CLOSEST_VEHICLE_NODE(Param0, &Var0, iVar2, 100f, 2.5f) && !Global_2815059.f_961)
	{
		Global_2667225.f_2911 = 0;
		return 0;
	}
	if (!SYSTEM::VDIST2(Param0, -237.3f, 196.9f, 81.6f) < (100f * 100f))
	{
		if (SYSTEM::VDIST2(Param0, Var0) > (50f * 50f) && !Global_2815059.f_961)
		{
			Global_2667225.f_2911 = 0;
			return 0;
		}
		fVar3 = (Param0.f_2 - Var0.f_2);
		if (MISC::ABSF(fVar3) > 20f)
		{
			Global_2667225.f_2911 = 0;
			return 0;
		}
	}
	Global_2667225.f_2911 = 1;
	return 1;
}

void func_1298()//Position - 0x53F50
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (Local_122.f_181.f_69 == 0)
	{
		if (__LIB_2__::func_104(74, 0, 0))
		{
			if (func_309(0))
			{
				if (func_279(0))
				{
					if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(0), false, true, false, -1, 0))
					{
						if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_BRU_BOX", PLAYER::PLAYER_ID(), true, 0) && Global_2815059.f_882 == 0)
						{
							iVar2 = __LIB_12__::func_672(0);
							if (iVar2 > 0)
							{
								func_92(20, iVar2);
							}
							else
							{
								MISC::SET_BIT(&(Local_122.f_359), 10);
								Local_122.f_360 = 0;
								Local_122.f_358 = __LIB_0__::getMinusOneOrNull();
								__LIB_23__::func_534(__LIB_0__::func_943(1, 1), Local_122.f_360, __LIB_0__::getMinusOneOrNull(), 0);
							}
						}
						else
						{
							bVar1 = true;
						}
					}
					else
					{
						MISC::SET_BIT(&bLocal_169, 0);
						bVar0 = true;
					}
				}
				else
				{
					func_92(29, 0);
				}
			}
			else
			{
				func_92(1, 0);
			}
		}
	}
	else
	{
		func_1151();
	}
	if (bVar1)
	{
		func_92(27, 0);
	}
	else if (bVar0)
	{
		func_92(0, 0);
		func_1(Local_122.f_1, "CT_AUD", "MPCT_Bmon", &Local_166, 0);
	}
}

void func_1299()//Position - 0x54054
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (Local_122.f_181.f_69 == 5)
	{
		if (func_309(11) && !BitTest(Global_44241, 10))
		{
			if (func_279(11))
			{
				if (!__LIB_2__::func_841(PLAYER::PLAYER_ID()))
				{
					func_1314();
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				func_92(29, 0);
			}
		}
		else
		{
			func_92(1, 0);
		}
	}
	if (Local_122.f_181.f_69 == 0)
	{
		if (func_309(8))
		{
			if (func_279(8))
			{
				func_1311();
			}
			else
			{
				func_92(29, 0);
			}
		}
		else
		{
			func_92(1, 0);
		}
	}
	if (Local_122.f_181.f_69 == 1)
	{
		if (func_309(10))
		{
			if (func_279(10))
			{
				if (!__LIB_2__::func_841(PLAYER::PLAYER_ID()))
				{
					func_1309();
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				func_92(29, 0);
			}
		}
		else
		{
			func_92(1, 0);
		}
	}
	if (Local_122.f_181.f_69 == 2)
	{
		if (func_309(9) && !__LIB_1__::func_832(PLAYER::PLAYER_ID()))
		{
			if (func_279(9))
			{
				func_1303();
			}
			else
			{
				func_92(29, 0);
			}
		}
		else
		{
			func_92(1, 0);
		}
	}
	if (Local_122.f_181.f_69 == 4)
	{
		if (__LIB_2__::func_104(81, 0, 0))
		{
			if (!__LIB_0__::func_945())
			{
				if (func_309(12))
				{
					if (func_279(12))
					{
						iVar2 = __LIB_12__::func_672(12);
						if (iVar2 > 0)
						{
							func_92(20, iVar2);
						}
						else
						{
							__LIB_1__::func_392(81, 1);
							if (((func_91(1) && func_279(12)) && func_309(12)) && !__LIB_2__::func_841(PLAYER::PLAYER_ID()))
							{
								Local_122.f_179 = 3;
								if (func_1301())
								{
									Local_122.f_181.f_69 = 0;
									iLocal_131 = 1;
									MISC::CLEAR_BIT(&(Local_122.f_359), 4);
									func_1(Local_122.f_1, "CT_AUD", "MPCT_MER", &Local_166, 0);
									Local_122.f_178 = 1;
								}
								else
								{
									func_1050();
								}
							}
							else
							{
								func_1(Local_122.f_1, "CT_AUD", "MPCT_MERno", &Local_166, 0);
								bVar1 = true;
							}
						}
					}
					else
					{
						func_92(29, 0);
					}
				}
				else
				{
					func_92(1, 0);
				}
			}
			else
			{
				func_1197(12, 0);
			}
		}
	}
	if (Local_122.f_181.f_69 == 3)
	{
		if ((func_309(13) && !__LIB_1__::func_832(PLAYER::PLAYER_ID())) && !__LIB_0__::func_938(PLAYER::PLAYER_ID()))
		{
			if (func_279(13))
			{
				func_1300();
			}
			else
			{
				func_92(29, 0);
			}
		}
		else
		{
			func_92(1, 0);
		}
	}
	if (bVar1)
	{
		func_92(1, 0);
	}
	else if (bVar0)
	{
		MISC::SET_BIT(&bLocal_169, 0);
		func_92(0, 0);
	}
}

void func_1300()//Position - 0x542CD
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar2 = 0;
	iVar1 = func_244();
	if (Local_122.f_181.f_69 == 3)
	{
		if (iVar1 == 0)
		{
			if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(13), false, true, false, -1, 0))
			{
				iVar2 = func_1198(2);
				if (iVar2 == 0)
				{
					iVar3 = __LIB_12__::func_672(13);
					if (iVar3 > 0)
					{
						func_92(20, iVar3);
						func_1(Local_122.f_1, "CT_AUD", "MPCT_HPno", &Local_166, 0);
					}
					else
					{
						MISC::SET_BIT(&(Local_122.f_359), 10);
						Local_122.f_360 = 13;
						Local_122.f_358 = __LIB_0__::getMinusOneOrNull();
						__LIB_23__::func_534(__LIB_0__::func_943(1, 1), Local_122.f_360, __LIB_0__::getMinusOneOrNull(), 0);
					}
				}
			}
			else
			{
				bVar0 = true;
			}
		}
	}
	if (iVar2 == 1)
	{
		func_92(24, 0);
		func_1(Local_122.f_1, "CT_AUD", "MPCT_HPno", &Local_166, 0);
	}
	else if (iVar2 == 5)
	{
		func_92(1, 0);
		func_1(Local_122.f_1, "CT_AUD", "MPCT_HPno", &Local_166, 0);
	}
	else if (iVar2 == 6)
	{
		func_92(29, 0);
		func_1(Local_122.f_1, "CT_AUD", "MPCT_HPno", &Local_166, 0);
	}
	else if (iVar1 != 0)
	{
		if (iVar1 == 1)
		{
			func_92(25, 0);
			func_1(Local_122.f_1, "CT_AUD", "MPCT_HPno", &Local_166, 0);
		}
		else if (iVar1 == 2)
		{
			func_92(26, 0);
			func_1(Local_122.f_1, "CT_AUD", "MPCT_HPpos", &Local_166, 0);
		}
		else if (iVar1 == 3)
		{
		}
		else
		{
			func_92(1, 0);
			func_1(Local_122.f_1, "CT_AUD", "MPCT_HPno", &Local_166, 0);
		}
	}
	else if (bVar0)
	{
		MISC::SET_BIT(&bLocal_169, 0);
		func_92(0, 0);
		func_1(Local_122.f_1, "CT_AUD", "MPCT_MWmon", &Local_166, 0);
	}
}

int func_1301()//Position - 0x54485
{
	int iVar0;
	int iVar1;
	switch (Local_122.f_179)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (__LIB_0__::func_156(iVar1, 0, 1))
				{
					if (iVar1 != PLAYER::PLAYER_ID())
					{
						if (__LIB_25__::func_514(iVar1))
						{
							return 1;
						}
					}
				}
				iVar0++;
			}
			break;
		case 1:
		case 2:
		case 3:
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (func_1052(iVar1))
				{
					return 1;
				}
				iVar0++;
			}
			break;
	}
	return 0;
}

void func_1303()//Position - 0x54758
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	var uVar4;
	iVar1 = 0;
	if (Local_122.f_181.f_69 == 2)
	{
		if (__LIB_2__::func_104(63, 0, 0))
		{
			iVar2 = __LIB_12__::func_672(9);
			if (iVar2 > 0)
			{
				func_92(20, iVar2);
				func_1(Local_122.f_1, "CT_AUD", "MPCT_BPno", &Local_166, 0);
			}
			else
			{
				iVar1 = func_1304();
				if (iVar1 == 0)
				{
					if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(9), false, true, false, -1, 0))
					{
						MISC::SET_BIT(&(Local_122.f_359), 10);
						Local_122.f_360 = 9;
						Local_122.f_358 = __LIB_0__::getMinusOneOrNull();
						__LIB_23__::func_534(__LIB_0__::func_943(1, 1), Local_122.f_360, __LIB_0__::getMinusOneOrNull(), 0);
					}
					else
					{
						bVar0 = true;
					}
				}
			}
		}
	}
	if (iVar1 != 0)
	{
		if (iVar1 == 2)
		{
			func_1197(6, 0);
		}
		else if (iVar1 == 3)
		{
			func_1197(7, 0);
		}
		else if (iVar1 == 4)
		{
			func_1197(8, 0);
		}
		else if (iVar1 == 5)
		{
			func_1197(9, 0);
		}
		else if (iVar1 == 6)
		{
			func_1197(10, 0);
		}
		else
		{
			func_1197(5, 0);
		}
		Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (WATER::GET_WATER_HEIGHT_NO_WAVES(Var3, &uVar4))
		{
			if (iVar1 == 1)
			{
				func_1(Local_122.f_1, "CT_AUD", "MPCT_BPno", &Local_166, 0);
			}
			else
			{
				func_1(Local_122.f_1, "CT_AUD", "MPCT_BPpos", &Local_166, 0);
			}
		}
		else
		{
			func_1(Local_122.f_1, "CT_AUD", "MPCT_BPpos", &Local_166, 0);
		}
	}
	else if (bVar0)
	{
		MISC::SET_BIT(&bLocal_169, 0);
		func_92(0, 0);
		func_1(Local_122.f_1, "CT_AUD", "MPCT_MWmon", &Local_166, 0);
	}
}

int func_1304()//Position - 0x548E8
{
	var uVar0;
	if (Global_2815059.f_875 == 1)
	{
		return 1;
	}
	if (WATER::GET_WATER_HEIGHT_NO_WAVES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0))
	{
		if (__LIB_30__::func_914())
		{
			return 4;
		}
		if (__LIB_1__::func_852())
		{
			return 5;
		}
		if (func_1305())
		{
			return 1;
		}
		return 0;
	}
	else
	{
		return 6;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_BOAT_TAXI", -1, true, 0))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 3f)
	{
		return 2;
	}
	return 1;
}

int func_1305()//Position - 0x54971
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1174.7385f, -842.7222f, -18.637989f, -739.4594f, -1564.822f, 32.166073f, 350f, false, true, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1160.7244f, -1904.8037f, -29.931797f, -594.2706f, -1475.0552f, 38.921455f, 250f, false, true, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 84.40686f, -2116.6729f, -27.58864f, -594.2706f, -1475.0552f, 38.921455f, 250f, false, true, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 82.74258f, -2315.2695f, -13.211993f, 700f, 350f, 32f, false, true, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 622.3684f, -2970.3167f, 5.044824f, 650f, 450f, 32f, false, true, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -395.5642f, -2662.755f, 5.001433f, 400f, 250f, 32f, false, true, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -2366.9182f, 2577.6448f, 14.733693f, 350f, 250f, 32f, false, true, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3104.5935f, 2184.267f, 22.314657f, 128f, 128f, 32f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_1309()//Position - 0x54DB2
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar0 = 0;
	if (func_1310(__LIB_12__::func_845(10)) && MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(10), false, true, false, -1, 0))
	{
		bVar1 = true;
	}
	if (Local_122.f_181.f_69 == 1)
	{
		if (__LIB_2__::func_104(62, 0, 0))
		{
			if (SCRIPT::DOES_SCRIPT_EXIST("AM_backup_heli"))
			{
				iVar0 = func_1198(1);
				if (iVar0 == 0)
				{
					if (bVar1)
					{
						iVar2 = __LIB_12__::func_672(10);
						if (iVar2 > 0)
						{
							func_92(20, iVar2);
							func_1(Local_122.f_1, "CT_AUD", "MPCT_HBno", &Local_166, 0);
						}
						else
						{
							MISC::SET_BIT(&(Local_122.f_359), 10);
							Local_122.f_360 = 10;
							Local_122.f_358 = __LIB_0__::getMinusOneOrNull();
							__LIB_23__::func_534(__LIB_0__::func_943(1, 1), Local_122.f_360, __LIB_0__::getMinusOneOrNull(), 0);
						}
					}
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		func_1197(3, 0);
		func_1(Local_122.f_1, "CT_AUD", "MPCT_HBact", &Local_166, 0);
	}
	else if (iVar0 == 5)
	{
		func_92(1, 0);
	}
	else if (iVar0 == 2)
	{
		func_1197(1, 0);
	}
	else if (iVar0 == 4)
	{
		func_1197(0, 0);
	}
	else if (iVar0 == 6)
	{
		func_92(29, 0);
	}
	else if (!bVar1)
	{
		MISC::SET_BIT(&bLocal_169, 0);
		func_92(0, 0);
		func_1(Local_122.f_1, "CT_AUD", "MPCT_MWmon", &Local_166, 0);
	}
}

bool func_1310(int iParam0)//Position - 0x54EFD
{
	return MONEY::NETWORK_CAN_SPEND_MONEY(iParam0, false, true, false, -1, 0);
}

void func_1311()//Position - 0x54F10
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar0 = 0;
	if (Local_122.f_181.f_69 == 0)
	{
		if (__LIB_2__::func_104(61, 0, 0))
		{
			if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(8), false, true, false, -1, 0))
			{
				iVar0 = func_1198(0);
				if (iVar0 == 0)
				{
					iVar2 = __LIB_12__::func_672(8);
					if (iVar2 > 0)
					{
						func_92(20, iVar2);
						func_1312(Local_122.f_1);
					}
					else
					{
						MISC::SET_BIT(&(Local_122.f_359), 10);
						Local_122.f_360 = 8;
						Local_122.f_358 = __LIB_0__::getMinusOneOrNull();
						__LIB_23__::func_534(__LIB_0__::func_943(1, 1), Local_122.f_360, __LIB_0__::getMinusOneOrNull(), 0);
					}
				}
			}
			else
			{
				bVar1 = true;
			}
		}
	}
	if (iVar0 == 1)
	{
		func_92(23, 0);
		func_1312(Local_122.f_1);
	}
	else if (iVar0 == 5)
	{
		func_92(1, 0);
		func_1312(Local_122.f_1);
	}
	else if (iVar0 == 7)
	{
		func_92(1, 0);
		func_1312(Local_122.f_1);
	}
	else if (bVar1)
	{
		MISC::SET_BIT(&bLocal_169, 0);
		func_92(0, 0);
		func_1(Local_122.f_1, "CT_AUD", "MPCT_MWmon", &Local_166, 0);
	}
}

int func_1312(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164)//Position - 0x55024
{
	struct<2> Var0;
	if (!__LIB_0__::func_75())
	{
		StringCopy(&Var0, "MPCT_AMOno_", 16);
		StringIntConCat(&Var0, MISC::GET_RANDOM_INT_IN_RANGE(1, 4), 16);
		return __LIB_3__::func_77(&uParam0, "CT_AUD", "MPCT_AMOno", &Var0, 12, 0, 0);
	}
	return 0;
}

void func_1314()//Position - 0x550B0
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	if ((func_1310(__LIB_12__::func_845(11)) && MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(11), false, true, false, -1, 0)) || BitTest(Local_122.f_359, 17))
	{
		bVar0 = true;
	}
	if (Local_122.f_181.f_69 == 5)
	{
		if (__LIB_2__::func_104(64, 0, 0))
		{
			if (SCRIPT::DOES_SCRIPT_EXIST("AM_airstrike"))
			{
				iVar2 = func_1198(4);
				if (((((!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_airstrike", -1, true, 0) && Global_2815059.f_4455 == 0) && !(__LIB_1__::func_838(PLAYER::PLAYER_ID(), 2) && !__LIB_1__::func_837())) && !func_1315()) && !PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) && iVar2 == 0)
				{
					if (bVar0)
					{
						iVar3 = __LIB_12__::func_672(11);
						if (iVar3 > 0)
						{
							func_92(20, iVar3);
							func_1(Local_122.f_1, "CT_AUD", "MPCT_ASno", &Local_166, 0);
						}
						else
						{
							MISC::SET_BIT(&(Local_122.f_359), 10);
							Local_122.f_360 = 11;
							Local_122.f_358 = __LIB_0__::getMinusOneOrNull();
							__LIB_23__::func_534(__LIB_0__::func_943(1, 1), Local_122.f_360, __LIB_0__::getMinusOneOrNull(), 0);
						}
					}
				}
				else
				{
					bVar1 = true;
				}
			}
		}
	}
	if (!bVar0)
	{
		MISC::SET_BIT(&bLocal_169, 0);
		func_92(0, 0);
		func_1(Local_122.f_1, "CT_AUD", "MPCT_MWmon", &Local_166, 0);
	}
	else if (iVar2 == 4)
	{
		func_1197(0, 0);
	}
	else if (bVar1)
	{
		func_92(1, 0);
	}
}

int func_1315()//Position - 0x55218
{
	if (SCRIPT::DOES_SCRIPT_EXIST("AM_backup_heli"))
	{
		if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_backup_heli", -1, true, 0))
		{
			return 1;
		}
	}
	if (SCRIPT::DOES_SCRIPT_EXIST("AM_HELI_TAXI"))
	{
		if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_HELI_TAXI", -1, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_1316()//Position - 0x5525B
{
	bool bVar0;
	int iVar1;
	int iVar2;
	iVar1 = Local_122.f_181.f_103[0] * 500;
	if (Local_122.f_181.f_69 == 0)
	{
		if (__LIB_0__::func_156(Local_122.f_358, 0, 1))
		{
			if (__LIB_2__::func_847(PLAYER::PLAYER_ID()) >= iVar1)
			{
				iVar2 = __LIB_12__::func_672(5);
				if (iVar2 > 0)
				{
					func_92(20, iVar2);
				}
				else
				{
					MISC::SET_BIT(&(Local_122.f_359), 10);
					Local_122.f_360 = 5;
					__LIB_23__::func_534(__LIB_0__::func_943(1, 1), Local_122.f_360, Local_122.f_358, 0);
				}
			}
			else
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		func_1(Local_122.f_1, "CT_AUD", "MPCT_LSmon", &Local_166, 0);
		func_92(0, 0);
	}
}

void func_1319()//Position - 0x55350
{
	bool bVar0;
	var uVar1;
	struct<13> Var2;
	Var2 = { __LIB_0__::func_819(Local_122.f_358) };
	if (Local_122.f_181.f_69 == 1)
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
		func_32(4);
	}
	else if ((((Local_122.f_181.f_69 == 0 && Global_2815059.f_1856.f_1 == 0) && !__LIB_3__::func_365(Local_122.f_358)) && !func_165(&uVar1)) && !func_162(&Var2, &uVar1))
	{
		if (__LIB_0__::func_945())
		{
			func_1197(11, 0);
		}
		else if (__LIB_0__::func_156(Local_122.f_358, 0, 1))
		{
			if (__LIB_1__::func_833(1) >= __LIB_28__::func_745(Local_122.f_181.f_103[0]) || MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_28__::func_745(Local_122.f_181.f_103[0]), false, true, false, -1, 0))
			{
				MISC::SET_BIT(&(Local_122.f_359), 10);
				Local_122.f_360 = 1;
				__LIB_23__::func_534(__LIB_0__::func_943(1, 1), 1, Local_122.f_358, 0);
				if (!__LIB_0__::func_112())
				{
					func_1(Local_122.f_1, "CT_AUD", "MPCT_BNTcon", &Local_166, 0);
				}
			}
			else
			{
				func_1(Local_122.f_1, "CT_AUD", "MPCT_LSmon", &Local_166, 0);
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		MISC::SET_BIT(&bLocal_169, 0);
		func_92(31, 0);
	}
}

void func_1320()//Position - 0x55487
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_0__::func_156(Local_122.f_181.f_136[Local_122.f_181.f_69], 0, 1))
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
		Local_122.f_358 = Local_122.f_181.f_136[Local_122.f_181.f_69];
		switch (Local_122.f_179)
		{
			case 0:
				iLocal_124 = __LIB_3__::func_365(Local_122.f_358);
				if (iLocal_124)
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 7);
					StringCopy(&Var1, "MPCT_BNTno", 24);
					StringIntConCat(&Var1, iVar0, 24);
					func_1(Local_122.f_1, "CT_AUD", &Var1, &Local_166, 0);
				}
				else
				{
					func_1(Local_122.f_1, "CT_AUD", "MPCT_BNTtar", &Local_166, 0);
				}
				Local_122.f_178 = 2;
				Local_122.f_181.f_69 = 0;
				break;
			case 1:
				func_1321();
				break;
			case 2:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(Local_122.f_181.f_136[Local_122.f_181.f_69]) > 0)
				{
					func_1(Local_122.f_1, "CT_AUD", "MPCT_WNTtarT", &Local_166, 0);
				}
				else
				{
					func_1(Local_122.f_1, "CT_AUD", "MPCT_WNTtar", &Local_166, 0);
				}
				Local_122.f_178 = 3;
				Local_122.f_181.f_69 = 0;
				break;
			case 3:
				func_1255();
				break;
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
		switch (Local_122.f_179)
		{
			case 0:
			case 2:
				Local_122.f_178 = 0;
				break;
			case 1:
				Local_122.f_178 = 5;
				break;
			case 3:
				Local_122.f_178 = 4;
				break;
		}
		Local_122.f_181.f_69 = 0;
	}
}

void func_1321()//Position - 0x555F7
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = __LIB_12__::func_845(2);
	if (func_91(0))
	{
		if (Local_122.f_358 != Global_2815059.f_5120)
		{
			if (__LIB_0__::func_156(Local_122.f_358, 0, 1))
			{
				if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar1, false, true, false, -1, 0))
				{
					iVar2 = __LIB_12__::func_672(2);
					iVar3 = func_149(2, Local_122.f_358);
					if (iVar2 > 0)
					{
						func_92(20, iVar2);
					}
					else if (iVar3 > 0)
					{
						func_1197(19, iVar3);
					}
					else
					{
						Local_122.f_360 = 2;
						__LIB_23__::func_534(__LIB_0__::func_943(1, 1), 2, Local_122.f_358, 0);
						MISC::SET_BIT(&(Local_122.f_359), 10);
					}
				}
				else
				{
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			MISC::SET_BIT(&bLocal_169, 0);
			MISC::CLEAR_BIT(&(Local_122.f_359), 4);
			Local_122.f_178 = 5;
			func_1(Local_122.f_1, "CT_AUD", "MPCT_LMmon", &Local_166, 0);
			func_92(0, 0);
		}
	}
}

void func_1322()//Position - 0x556CE
{
	bool bVar0;
	int iVar1;
	switch (Local_122.f_181.f_70[Local_122.f_181.f_69])
	{
		case 0:
			if (__LIB_2__::func_104(67, 0, 0))
			{
				if (!__LIB_0__::func_945())
				{
					iVar1 = __LIB_12__::func_672(2);
					if (iVar1 > 0)
					{
						func_92(20, iVar1);
					}
					else if (func_91(0))
					{
						if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(2), false, true, false, -1, 0))
						{
							Local_122.f_179 = 1;
							if (func_309(2))
							{
								if (func_279(2))
								{
									if (func_1301())
									{
										Local_122.f_181.f_69 = 0;
										iLocal_131 = 1;
										func_1(Local_122.f_1, "CT_AUD", "MPCT_LMmug", &Local_166, 0);
										Local_122.f_178 = 1;
									}
									else
									{
										func_1(Local_122.f_1, "CT_AUD", "MPCT_mugNo", &Local_166, 0);
										func_1050();
									}
								}
								else
								{
									func_1(Local_122.f_1, "CT_AUD", "MPCT_mugTim", &Local_166, 0);
									func_92(29, 0);
								}
							}
							else
							{
								func_1(Local_122.f_1, "CT_AUD", "MPCT_mugTim", &Local_166, 0);
								func_92(1, 0);
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_1(Local_122.f_1, "CT_AUD", "MPCT_mugTim", &Local_166, 0);
					}
				}
				else
				{
					func_1197(12, 0);
				}
			}
			break;
		case 1:
			if (func_1068(0))
			{
				if (func_309(38))
				{
					if (func_279(38))
					{
						__LIB_29__::func_212(0, 1);
						func_32(4);
					}
					else
					{
						func_92(29, 0);
					}
				}
				else
				{
					func_92(1, 0);
				}
			}
			break;
		case 2:
			func_1156();
			break;
	}
	if (bVar0)
	{
		if (!MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(2), false, true, false, -1, 0))
		{
			MISC::SET_BIT(&bLocal_169, 0);
		}
		func_1(Local_122.f_1, "CT_AUD", "MPCT_LMmon", &Local_166, 0);
		func_92(0, 0);
	}
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
}

void func_1324()//Position - 0x558A4
{
	var uVar0;
	int* iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	uVar0 = 25;
	iVar1 = 0;
	switch (Local_122.f_181.f_70[Local_122.f_181.f_69])
	{
		case 0:
			if (__LIB_2__::func_104(29, 0, 0))
			{
				if (func_309(1))
				{
					if (func_279(1))
					{
						Local_122.f_179 = 0;
						if (func_1301())
						{
							Local_122.f_181.f_69 = 0;
							iLocal_131 = 1;
							Local_122.f_178 = 1;
							func_1(Local_122.f_1, "CT_AUD", "MPCT_BNT", &Local_166, 0);
						}
						else
						{
							func_1050();
						}
					}
					else
					{
						func_92(29, 0);
					}
				}
				else
				{
					func_92(1, 0);
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_104(65, 0, 0))
			{
				if (__LIB_2__::func_104(65, 0, 0))
				{
					__LIB_1__::func_392(65, 1);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						if (!__LIB_0__::func_875(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3, 0, 0) || __LIB_30__::func_915())
						{
							if (func_309(20))
							{
								if (func_279(20))
								{
									if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(20), false, true, false, -1, 0))
									{
										iVar2 = __LIB_12__::func_672(20);
										if (iVar2 > 0)
										{
											func_92(20, iVar2);
										}
										else
										{
											MISC::SET_BIT(&(Local_122.f_359), 10);
											Local_122.f_360 = 20;
											Local_122.f_358 = __LIB_0__::getMinusOneOrNull();
											__LIB_23__::func_534(__LIB_0__::func_943(1, 1), Local_122.f_360, __LIB_0__::getMinusOneOrNull(), 0);
										}
									}
									else
									{
										MISC::SET_BIT(&bLocal_169, 0);
										func_92(0, 0);
									}
								}
								else
								{
									func_1(Local_122.f_1, "CT_AUD", "MPCT_LGEN2", &Local_166, 0);
									func_92(29, 0);
								}
							}
							else
							{
								func_1(Local_122.f_1, "CT_AUD", "MPCT_LGEN2", &Local_166, 0);
								func_92(1, 0);
							}
						}
						else
						{
							func_1(Local_122.f_1, "CT_AUD", "MPCT_LGEN2", &Local_166, 0);
							func_92(1, 0);
						}
					}
					else
					{
						func_1(Local_122.f_1, "CT_AUD", "MPCT_LGEN2", &Local_166, 0);
						func_92(1, 0);
					}
				}
				else
				{
					func_92(29, 0);
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_104(75, 0, 0))
			{
				__LIB_1__::func_392(75, 1);
				if (func_309(6))
				{
					if (func_279(6))
					{
						iVar3 = __LIB_12__::func_672(6);
						if (iVar3 > 0 || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_208)
						{
							func_1(Local_122.f_1, "CT_AUD", "MPCT_RDRno", &Local_166, 0);
							func_92(20, iVar3);
						}
						else if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(6), false, true, false, -1, 0))
						{
							MISC::SET_BIT(&(Local_122.f_359), 10);
							Local_122.f_360 = 6;
							Local_122.f_358 = __LIB_0__::getMinusOneOrNull();
							__LIB_23__::func_534(__LIB_0__::func_943(1, 1), Local_122.f_360, __LIB_0__::getMinusOneOrNull(), 0);
						}
						else
						{
							MISC::SET_BIT(&bLocal_169, 0);
							func_1(Local_122.f_1, "CT_AUD", "MPCT_LSmon", &Local_166, 0);
							func_92(0, 0);
						}
					}
					else
					{
						func_1(Local_122.f_1, "CT_AUD", "MPCT_LGEN2", &Local_166, 0);
						func_92(29, 0);
					}
				}
				else
				{
					func_1(Local_122.f_1, "CT_AUD", "MPCT_LGEN2", &Local_166, 0);
					func_92(1, 0);
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_104(95, 0, 0))
			{
				if (func_309(14))
				{
					if (func_279(14))
					{
						__LIB_1__::func_392(95, 1);
						if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(14), false, true, false, -1, 0))
						{
							if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 0 || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 1) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 5)
							{
								if (PLAYER::GET_NUMBER_OF_PLAYERS() > 0)
								{
									iVar4 = __LIB_12__::func_672(14);
									if (iVar4 > 0)
									{
										func_92(20, iVar4);
									}
									else
									{
										MISC::SET_BIT(&(Local_122.f_359), 10);
										Local_122.f_360 = 14;
										Local_122.f_358 = __LIB_0__::getMinusOneOrNull();
										__LIB_23__::func_534(__LIB_0__::func_943(1, 1), Local_122.f_360, __LIB_0__::getMinusOneOrNull(), 0);
									}
								}
								else
								{
									func_1(Local_122.f_1, "CT_AUD", "MPCT_RVLno", &Local_166, 0);
									func_92(1, 0);
								}
							}
							else
							{
								func_1(Local_122.f_1, "CT_AUD", "MPCT_LGEN2", &Local_166, 0);
								func_92(1, 0);
							}
						}
						else
						{
							MISC::SET_BIT(&bLocal_169, 0);
							func_1(Local_122.f_1, "CT_AUD", "MPCT_LSmon", &Local_166, 0);
							func_92(0, 0);
						}
					}
					else
					{
						func_92(29, 0);
					}
				}
				else
				{
					func_92(1, 0);
				}
			}
			break;
		case 4:
			if (__LIB_2__::func_104(88, 0, 0))
			{
				if (func_309(15))
				{
					if (func_279(15))
					{
						iVar5 = __LIB_12__::func_672(15);
						if (iVar5 > 0)
						{
							func_92(20, iVar5);
							if (!BitTest(Global_2815059.f_1792, 24))
							{
								func_1(Local_122.f_1, "CT_AUD", "MPCT_Jobcool", &Local_166, 0);
							}
							else
							{
								func_1(Local_122.f_1, "CT_AUD", "MPCT_Jobno", &Local_166, 0);
							}
							func_32(4);
						}
						else if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(15), false, true, false, -1, 0))
						{
							MISC::SET_BIT(&(Global_2815059.f_1777), 0);
							__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[15 /*2*/]), 1, 0);
							__LIB_42__::func_920(15, -1, -1);
							func_32(4);
						}
						else
						{
							MISC::SET_BIT(&bLocal_169, 0);
							func_1(Local_122.f_1, "CT_AUD", "MPCT_LSmon", &Local_166, 0);
							func_92(0, 0);
						}
					}
					else
					{
						func_92(29, 0);
					}
				}
				else
				{
					func_92(1, 0);
				}
			}
			break;
		case 10:
			if (__LIB_2__::func_104(121, 0, 0))
			{
				if (!__LIB_3__::func_484())
				{
					if (!(__LIB_1__::func_511(PLAYER::PLAYER_ID(), 0, 0) && func_255()))
					{
						if (func_309(36))
						{
							if (func_279(36))
							{
								iVar6 = __LIB_12__::func_672(36);
								if (iVar6 > 0)
								{
									func_92(20, iVar6);
									if (!BitTest(Global_1931610, 9))
									{
										func_1(Local_122.f_1, "CT_AUD", "MPCT_Jobcool", &Local_166, 0);
									}
									else
									{
										func_1(Local_122.f_1, "CT_AUD", "MPCT_Jobno", &Local_166, 0);
									}
									func_32(4);
								}
								else
								{
									iVar7 = __LIB_12__::func_845(36);
									if (__LIB_1__::func_833(1) >= __LIB_12__::func_845(36) || MONEY::NETWORK_CAN_SPEND_MONEY(iVar7, false, true, false, -1, 0))
									{
										uVar8 = __LIB_12__::func_841(PLAYER::PLAYER_ID());
										iVar9 = __LIB_29__::func_189(12, uVar8, &uVar0, &iVar1);
										if (iVar9 > 0)
										{
											Local_122.f_178 = 17;
											MISC::CLEAR_BIT(&(Local_122.f_359), 4);
											uLocal_171 = Local_122.f_181.f_69;
											Local_122.f_181.f_69 = 0;
										}
										else
										{
											func_1(Local_122.f_1, "CT_AUD", "MPCT_Jobno", &Local_166, 0);
											func_32(4);
										}
									}
									else
									{
										MISC::SET_BIT(&bLocal_169, 0);
										func_1(Local_122.f_1, "CT_AUD", "MPCT_LSmon", &Local_166, 0);
										func_92(0, 0);
									}
								}
							}
							else
							{
								func_92(29, 0);
							}
						}
						else
						{
							func_92(1, 0);
						}
					}
				}
			}
			break;
		case 11:
			if (__LIB_2__::func_104(125, 0, 0))
			{
				if (__LIB_3__::func_484())
				{
					if (func_309(37))
					{
						if (func_279(37))
						{
							iVar10 = 0;
							if (iVar10 > 0)
							{
								func_92(20, iVar10);
								func_1(Local_122.f_1, "CT_AUD", "MPCT_Jobcool", &Local_166, 0);
								func_32(4);
							}
							else if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(37), false, true, false, -1, 0))
							{
								if (!BitTest(uLocal_175, 0))
								{
									MISC::SET_BIT(&uLocal_175, 0);
									__LIB_0__::func_795(&uLocal_176, 0, 0);
								}
							}
							else
							{
								MISC::SET_BIT(&bLocal_169, 0);
								func_1(Local_122.f_1, "CT_AUD", "MPCT_LSmon", &Local_166, 0);
								func_92(0, 0);
							}
						}
						else
						{
							func_92(29, 0);
						}
					}
					else
					{
						func_92(1, 0);
					}
				}
			}
			break;
		case 12:
			if (__LIB_10__::func_196(PLAYER::PLAYER_ID()))
			{
				if (__LIB_10__::func_435(PLAYER::PLAYER_ID(), 0) == -1)
				{
					iVar11 = __LIB_12__::func_672(50);
					if (iVar11 > 0)
					{
						func_92(20, iVar11);
						func_1(Local_122.f_1, "CT_AUD", "MPCT_Jobcool", &Local_166, 0);
						func_32(4);
					}
					else
					{
						iVar12 = __LIB_35__::func_814(0);
						if (__LIB_1__::func_833(1) >= iVar12 || MONEY::NETWORK_CAN_SPEND_MONEY(iVar12, false, true, false, -1, 0))
						{
							Local_122.f_178 = 22;
							MISC::CLEAR_BIT(&(Local_122.f_359), 4);
							uLocal_171 = Local_122.f_181.f_69;
							Local_122.f_181.f_69 = 0;
						}
						else
						{
							MISC::SET_BIT(&bLocal_169, 0);
							func_1(Local_122.f_1, "CT_AUD", "MPCT_LSmon", &Local_166, 0);
							func_92(0, 0);
						}
					}
				}
				else
				{
					func_92(1, 0);
				}
			}
			break;
		case 13:
			if (__LIB_10__::func_196(PLAYER::PLAYER_ID()))
			{
				if (__LIB_10__::func_435(PLAYER::PLAYER_ID(), 0) != -1)
				{
					iVar13 = 0;
					if (iVar13 > 0)
					{
						func_92(20, iVar13);
						func_1(Local_122.f_1, "CT_AUD", "MPCT_Jobcool", &Local_166, 0);
						func_32(4);
					}
					else if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(51), false, true, false, -1, 0))
					{
						if (!BitTest(iLocal_178, 0))
						{
							MISC::SET_BIT(&iLocal_178, 0);
							__LIB_0__::func_795(&uLocal_179, 0, 0);
						}
					}
					else
					{
						MISC::SET_BIT(&bLocal_169, 0);
						func_1(Local_122.f_1, "CT_AUD", "MPCT_LSmon", &Local_166, 0);
						func_92(0, 0);
					}
				}
				else
				{
					func_92(1, 0);
				}
			}
			break;
		case 15:
			if ((__LIB_4__::func_895(PLAYER::PLAYER_ID(), 1) && __LIB_4__::func_895(PLAYER::PLAYER_ID(), 2)) && __LIB_4__::func_895(PLAYER::PLAYER_ID(), 3))
			{
				if (__LIB_9__::func_639(PLAYER::PLAYER_ID()) && !__LIB_2__::func_573(PLAYER::PLAYER_ID()))
				{
					if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(61), false, true, false, -1, 0))
					{
						if (!BitTest(uLocal_187, 0))
						{
							MISC::SET_BIT(&uLocal_187, 0);
							__LIB_0__::func_795(&uLocal_188, 0, 0);
						}
					}
					else
					{
						MISC::SET_BIT(&bLocal_169, 0);
						func_1(Local_122.f_1, "CT_AUD", "MPCT_LSmon", &Local_166, 0);
						func_92(0, 0);
					}
				}
			}
			break;
		case 5:
			if (__LIB_2__::func_104(104, 0, 0))
			{
				if (func_309(23))
				{
					if (func_279(23))
					{
						if (!func_1325())
						{
							__LIB_1__::func_392(104, 1);
							if (!BitTest(Global_2703735.f_3673, 10))
							{
								if (!BitTest(Global_2703735.f_3673, 0))
								{
									if (!BitTest(Local_122.f_359, 18))
									{
										if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(23), false, true, false, -1, 0))
										{
											MISC::SET_BIT(&(Local_122.f_359), 18);
											iLocal_141 = 23;
										}
										else
										{
											MISC::SET_BIT(&bLocal_169, 0);
											func_1(Local_122.f_1, "CT_AUD", "MPCT_LSmon", &Local_166, 0);
											func_92(0, 0);
										}
									}
								}
							}
							else
							{
								func_1(Local_122.f_1, "CT_AUD", "MPCT_LGEN2", &Local_166, 0);
								func_92(1, 0);
							}
						}
					}
					else
					{
						func_92(29, 0);
					}
				}
				else
				{
					func_92(1, 0);
				}
			}
			break;
		case 6:
			if (__LIB_2__::func_104(98, 0, 0))
			{
				if (func_309(24))
				{
					if (func_279(24))
					{
						if (!func_1325())
						{
							__LIB_1__::func_392(98, 1);
							if (!BitTest(Global_2703735.f_3673, 10))
							{
								if (!BitTest(Global_2703735.f_3673, 0))
								{
									if (!BitTest(Local_122.f_359, 18))
									{
										if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(24), false, true, false, -1, 0))
										{
											iLocal_141 = 24;
											MISC::SET_BIT(&(Local_122.f_359), 18);
										}
										else
										{
											MISC::SET_BIT(&bLocal_169, 0);
											func_1(Local_122.f_1, "CT_AUD", "MPCT_LSmon", &Local_166, 0);
											func_92(0, 0);
										}
									}
								}
							}
							else
							{
								func_1(Local_122.f_1, "CT_AUD", "MPCT_LGEN2", &Local_166, 0);
								func_92(1, 0);
							}
						}
					}
					else
					{
						func_92(29, 0);
					}
				}
				else
				{
					func_92(1, 0);
				}
			}
			break;
		case 7:
			if (__LIB_2__::func_104(103, 0, 0))
			{
				if (func_309(25))
				{
					if (func_279(25))
					{
						if (!func_1325())
						{
							__LIB_1__::func_392(103, 1);
							if (!BitTest(Global_2703735.f_3673, 10))
							{
								if (!BitTest(Global_2703735.f_3673, 0))
								{
									if (!BitTest(Local_122.f_359, 18))
									{
										if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(25), false, true, false, -1, 0))
										{
											iLocal_141 = 25;
											MISC::SET_BIT(&(Local_122.f_359), 18);
										}
										else
										{
											MISC::SET_BIT(&bLocal_169, 0);
											func_1(Local_122.f_1, "CT_AUD", "MPCT_LSmon", &Local_166, 0);
											func_92(0, 0);
										}
									}
								}
							}
							else
							{
								func_1(Local_122.f_1, "CT_AUD", "MPCT_LGEN2", &Local_166, 0);
								func_92(1, 0);
							}
						}
					}
					else
					{
						func_92(29, 0);
					}
				}
				else
				{
					func_92(1, 0);
				}
			}
			break;
		case 8:
			if (__LIB_2__::func_104(105, 0, 0))
			{
				if (func_309(26))
				{
					if (func_279(26))
					{
						if (!func_1325())
						{
							__LIB_1__::func_392(105, 1);
							if (!BitTest(Global_2703735.f_3673, 10))
							{
								if (!BitTest(Global_2703735.f_3673, 0))
								{
									if (!BitTest(Local_122.f_359, 18))
									{
										if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(26), false, true, false, -1, 0))
										{
											iLocal_141 = 26;
											MISC::SET_BIT(&(Local_122.f_359), 18);
										}
										else
										{
											MISC::SET_BIT(&bLocal_169, 0);
											func_1(Local_122.f_1, "CT_AUD", "MPCT_LSmon", &Local_166, 0);
											func_92(0, 0);
										}
									}
								}
							}
							else
							{
								func_1(Local_122.f_1, "CT_AUD", "MPCT_LGEN2", &Local_166, 0);
								func_92(1, 0);
							}
						}
					}
					else
					{
						func_92(29, 0);
					}
				}
				else
				{
					func_92(1, 0);
				}
			}
			break;
		case 14:
			if (__LIB_2__::func_104(98, 0, 0))
			{
				if (func_309(57))
				{
					if (func_279(57))
					{
						if (!func_1325())
						{
							__LIB_1__::func_392(98, 1);
							if (!BitTest(Global_2703735.f_3673, 10))
							{
								if (!BitTest(Global_2703735.f_3673, 0))
								{
									if (!BitTest(Local_122.f_359, 18))
									{
										if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(57), false, true, false, -1, 0))
										{
											iLocal_141 = 57;
											MISC::SET_BIT(&(Local_122.f_359), 18);
										}
										else
										{
											MISC::SET_BIT(&bLocal_169, 0);
											func_1(Local_122.f_1, "CT_AUD", "MPCT_LSmon", &Local_166, 0);
											func_92(0, 0);
										}
									}
								}
							}
							else
							{
								func_1(Local_122.f_1, "CT_AUD", "MPCT_LGEN2", &Local_166, 0);
								func_92(1, 0);
							}
						}
					}
					else
					{
						func_92(29, 0);
					}
				}
				else
				{
					func_92(1, 0);
				}
			}
			break;
		case 9:
			if (__LIB_2__::func_104(119, 0, 0))
			{
				if (!__LIB_28__::func_753())
				{
					if (!__LIB_2__::func_56())
					{
						if (func_309(35))
						{
							if (func_279(35))
							{
								iVar14 = __LIB_12__::func_672(35);
								if (iVar14 > 0)
								{
									func_92(20, iVar14);
									func_1(Local_122.f_1, "CT_AUD", "MPCT_LGEN2", &Local_166, 0);
								}
								else if (!BitTest(Global_2815059.f_4624, 0))
								{
									MISC::SET_BIT(&(Global_2815059.f_4624), 3);
								}
								else
								{
									func_92(1, 0);
								}
							}
							else
							{
								func_92(29, 0);
							}
						}
						else
						{
							func_92(1, 0);
						}
					}
					else
					{
						func_92(1, 0);
					}
				}
				else
				{
					func_92(1, 0);
				}
			}
			break;
	}
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
}

int func_1325()//Position - 0x56706
{
	int iVar0;
	iVar0 = __LIB_12__::func_672(25);
	if (iVar0 > 0 && (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(__LIB_5__::func_23(46), -1, false, 0) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 194))
	{
		func_92(20, iVar0);
		return 1;
	}
	return 0;
}

int func_1330()//Position - 0x568F8
{
	if (func_1331() && !__LIB_4__::func_922(Local_122.f_181.f_69))
	{
		return 0;
	}
	return 1;
}

int func_1331()//Position - 0x5691C
{
	switch (Local_122.f_178)
	{
		case 21:
			return 1;
			break;
		default:
			break;
	}
	return 0;
}

void func_1333()//Position - 0x56992
{
	iLocal_156 = 1;
	switch (Local_122.f_178)
	{
		case 2:
			if ((Local_122.f_181.f_36[0] - Local_122.f_181.f_3[0]) > 0)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FREEMODE_SOUNDSET", true);
				Local_122.f_181.f_103[Local_122.f_181.f_69]++;
			}
			break;
		case 3:
			if ((Local_122.f_181.f_36[Local_122.f_181.f_69] - Local_122.f_181.f_3[Local_122.f_181.f_69]) > 0)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FREEMODE_SOUNDSET", true);
				Local_122.f_181.f_103[Local_122.f_181.f_69]++;
			}
			break;
		case 29:
			if (Local_122.f_181.f_69 == 1)
			{
				if ((Local_122.f_181.f_36[Local_122.f_181.f_69] - Local_122.f_181.f_3[Local_122.f_181.f_69]) > 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FREEMODE_SOUNDSET", true);
					Local_122.f_181.f_103[Local_122.f_181.f_69]++;
				}
			}
			break;
		case 30:
			if (Local_122.f_181.f_69 == 1)
			{
				if ((Local_122.f_181.f_36[Local_122.f_181.f_69] - Local_122.f_181.f_3[Local_122.f_181.f_69]) > 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FREEMODE_SOUNDSET", true);
					Local_122.f_181.f_103[Local_122.f_181.f_69]++;
				}
			}
			break;
		case 0:
		case 1:
		case 4:
		case 7:
		case 8:
		case 9:
		case 6:
		case 5:
		case 10:
		case 18:
		case 19:
		case 20:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 31:
			break;
		default:
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FREEMODE_SOUNDSET", true);
			Local_122.f_181.f_103[Local_122.f_181.f_69]++;
			break;
	}
}

void func_1334()//Position - 0x56BA7
{
	iLocal_156 = 1;
	switch (Local_122.f_178)
	{
		case 2:
			if ((Local_122.f_181.f_36[0] - Local_122.f_181.f_3[0]) > 0)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FREEMODE_SOUNDSET", true);
				Local_122.f_181.f_103[Local_122.f_181.f_69] = (Local_122.f_181.f_103[Local_122.f_181.f_69] + -1);
			}
			break;
		case 3:
			if ((Local_122.f_181.f_36[Local_122.f_181.f_69] - Local_122.f_181.f_3[Local_122.f_181.f_69]) > 0)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FREEMODE_SOUNDSET", true);
				Local_122.f_181.f_103[Local_122.f_181.f_69] = (Local_122.f_181.f_103[Local_122.f_181.f_69] + -1);
			}
			break;
		case 29:
			if (Local_122.f_181.f_69 == 1)
			{
				if ((Local_122.f_181.f_36[Local_122.f_181.f_69] - Local_122.f_181.f_3[Local_122.f_181.f_69]) > 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FREEMODE_SOUNDSET", true);
					Local_122.f_181.f_103[Local_122.f_181.f_69] = (Local_122.f_181.f_103[Local_122.f_181.f_69] + -1);
				}
			}
			break;
		case 30:
			if (Local_122.f_181.f_69 == 1)
			{
				if ((Local_122.f_181.f_36[Local_122.f_181.f_69] - Local_122.f_181.f_3[Local_122.f_181.f_69]) > 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FREEMODE_SOUNDSET", true);
					Local_122.f_181.f_103[Local_122.f_181.f_69] = (Local_122.f_181.f_103[Local_122.f_181.f_69] + -1);
				}
			}
			break;
		case 0:
		case 1:
		case 4:
		case 7:
		case 8:
		case 9:
		case 6:
		case 5:
		case 10:
		case 18:
		case 19:
		case 20:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 31:
			break;
		default:
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FREEMODE_SOUNDSET", true);
			Local_122.f_181.f_103[Local_122.f_181.f_69] = (Local_122.f_181.f_103[Local_122.f_181.f_69] + -1);
			break;
	}
}

void func_1335()//Position - 0x56DBC
{
	iLocal_156 = 1;
	switch (Local_122.f_178)
	{
		case 0:
		case 1:
		case 4:
		case 7:
		case 2:
		case 9:
		case 5:
		case 10:
			func_1336(1);
			break;
		case 18:
		case 19:
		case 20:
			Local_122.f_181.f_69++;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
			break;
		case 3:
		case 8:
			break;
		default:
			Local_122.f_181.f_69++;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
			break;
	}
}

void func_1336(int iParam0)//Position - 0x56E68
{
	int iVar0;
	if (func_967())
	{
		return;
	}
	iVar0 = (Local_122.f_181.f_69 + iParam0);
	iVar0 = __LIB_16__::func_336(iVar0, 0, Local_122.f_181.f_2);
	Local_122.f_181.f_69 = iVar0;
	AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
}

int func_1337()//Position - 0x56EAA
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (Global_4539961 == -3)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1338(int iParam0)//Position - 0x56ED3
{
	if ((!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iParam0) && !(__LIB_0__::func_77(0) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iParam0))) || __LIB_0__::func_937(&uLocal_149, 250, 1))
	{
		return 1;
	}
	return 0;
}

void func_1339()//Position - 0x56F12
{
	iLocal_156 = 1;
	switch (Local_122.f_178)
	{
		case 0:
		case 1:
		case 4:
		case 7:
		case 2:
		case 9:
		case 5:
		case 18:
		case 19:
		case 20:
			Local_122.f_181.f_69 = (Local_122.f_181.f_69 + -1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
			break;
		case 10:
			func_1336(-1);
			break;
		case 3:
		case 8:
			break;
		default:
			Local_122.f_181.f_69 = (Local_122.f_181.f_69 + -1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
			break;
	}
}

int func_1340()//Position - 0x56FBE
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (Global_4539961 == -2)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1348(float* fParam0, float* fParam1, var uParam2, var uParam3, int iParam4)//Position - 0x575B9
{
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(iParam4, 84);
	if (iParam4 == 82)
	{
		*fParam0 = 0.14f;
		*fParam1 = 0.3f;
		*uParam2 = 0.28f;
		*uParam3 = 0.6f;
	}
	else if (iParam4 == 76)
	{
		*fParam0 = 0.14f;
		*fParam1 = 0.3f;
		*uParam2 = 0.28f;
		*uParam3 = 0.6f;
	}
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(*fParam0, *fParam1, fParam0, fParam1);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_1351(int iParam0)//Position - 0x5789D
{
	if (__LIB_0__::func_864(&(Global_2715699.f_4316.f_78[iParam0 /*2*/])))
	{
		if (Global_2715699.f_4316[iParam0] != 0)
		{
			MISC::CLEAR_BIT(&(Local_122.f_359), 12);
			switch (Local_122.f_360)
			{
				case 1:
					func_1409(Global_2715699.f_4316[iParam0]);
					break;
				case 12:
					func_1408(Global_2715699.f_4316[iParam0]);
					break;
				case 2:
				case 3:
				case 4:
					func_1405(Global_2715699.f_4316[iParam0], iParam0);
					break;
				case 0:
					func_1404(Global_2715699.f_4316[iParam0]);
					break;
				case 5:
					func_1403(Global_2715699.f_4316[iParam0]);
					break;
				case 6:
					func_1401(Global_2715699.f_4316[iParam0]);
					break;
				case 7:
					func_1395(Global_2715699.f_4316[iParam0]);
					break;
				case 45:
					func_1395(Global_2715699.f_4316[iParam0]);
					break;
				case 46:
					func_1395(Global_2715699.f_4316[iParam0]);
					break;
				case 49:
					func_1395(Global_2715699.f_4316[iParam0]);
					break;
				case 52:
				case 65:
				case 66:
					func_1395(Global_2715699.f_4316[iParam0]);
					break;
				case 53:
				case 54:
				case 55:
				case 56:
					func_1395(Global_2715699.f_4316[iParam0]);
					break;
				case 8:
					func_1394(Global_2715699.f_4316[iParam0]);
					break;
				case 9:
					func_1393(Global_2715699.f_4316[iParam0]);
					break;
				case 10:
					func_1378(Global_2715699.f_4316[iParam0]);
					break;
				case 11:
					func_1377(Global_2715699.f_4316[iParam0]);
					break;
				case 13:
					func_1376(Global_2715699.f_4316[iParam0]);
					break;
				case 14:
					func_1375(Global_2715699.f_4316[iParam0]);
					break;
				case 20:
					func_1364(Global_2715699.f_4316[iParam0]);
					break;
				case 27:
				case 28:
				case 29:
				case 30:
				case 31:
				case 32:
				case 33:
				case 34:
					func_1361(Global_2715699.f_4316[iParam0], iParam0);
					break;
				case 43:
					func_1358(Global_2715699.f_4316[iParam0]);
					break;
				case 44:
					func_1357(Global_2715699.f_4316[iParam0]);
					break;
				case 72:
					func_1355(Global_2715699.f_4316[iParam0]);
					break;
				case 73:
					func_1354(Global_2715699.f_4316[iParam0]);
					break;
				case 74:
					func_1353(Global_2715699.f_4316[iParam0]);
					break;
			}
		}
		else
		{
			if (Global_2715699.f_4316.f_466 == __LIB_0__::getMinusOneOrNull() || Global_2715699.f_4316.f_466 != NETWORK::NETWORK_GET_HOST_OF_SCRIPT(__LIB_1__::func_834(), -1, 0))
			{
				__LIB_23__::func_534(__LIB_0__::func_943(1, 1), Local_122.f_360, Local_122.f_358, 0);
				__LIB_0__::func_627(&(Global_2715699.f_4316.f_78[iParam0 /*2*/]), 1, 0);
			}
			if (__LIB_0__::func_937(&(Global_2715699.f_4316.f_78[iParam0 /*2*/]), 8000, 1))
			{
				if (!BitTest(Local_122.f_359, 12))
				{
					__LIB_23__::func_534(__LIB_0__::func_943(1, 1), Local_122.f_360, Local_122.f_358, 0);
					__LIB_0__::func_627(&(Global_2715699.f_4316.f_78[iParam0 /*2*/]), 1, 0);
					MISC::SET_BIT(&(Local_122.f_359), 12);
				}
				else
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 12);
					MISC::CLEAR_BIT(&(Local_122.f_359), 10);
					func_92(1, 0);
					Global_2715699.f_4316[iParam0] = 0;
					func_1352(__LIB_0__::func_943(1, 1), Local_122.f_360, Local_122.f_358, 0);
				}
			}
		}
	}
	else
	{
		__LIB_0__::func_795(&(Global_2715699.f_4316.f_78[iParam0 /*2*/]), 1, 0);
	}
}

void func_1352(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x57C92
{
	struct<4> Var0;
	Var0.f_0 = -1962078946;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	Var0.f_2 = iParam2;
	Global_2715699.f_4316.f_469[iParam1 /*4*/] = 1;
	__LIB_0__::func_627(&(Global_2715699.f_4316.f_469[iParam1 /*4*/].f_1), 1, 0);
	if (!iParam0 == 0)
	{
		if (iParam3 == 0)
		{
			__LIB_0__::clearF_1Prop(&(Global_2715699.f_4316.f_78[iParam1 /*2*/]));
		}
		else
		{
			__LIB_0__::clearF_1Prop(&(Global_2815059.f_4534.f_2));
		}
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 6, iParam0);
	}
}

void func_1353(int iParam0)//Position - 0x57D16
{
	bool bVar0;
	int iVar1;
	struct<14> Var2;
	int iVar3;
	if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(74), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
	{
		if (BitTest(iParam0, 2))
		{
			iVar1 = func_892(joaat("SERVICE_SPEND_REQUEST_OUT_OF_SIGHT"), __LIB_12__::func_845(74), 1, -149294787);
			if (iVar1 == 1)
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 17);
				Var2.f_2 = -1619652234;
				__LIB_1__::func_634(Var2, __LIB_0__::func_943(1, 1));
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_448), 0);
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_449 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
				iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (iVar3 < 50)
				{
					func_1(Local_122.f_1, "FXIMAUD", "FXIM_PM_3A", &Local_166, 0);
				}
				else
				{
					func_1(Local_122.f_1, "FXIMAUD", "FXIM_PM_6A", &Local_166, 0);
				}
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				func_32(4);
			}
			else if (iVar1 == 0)
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 17);
				MISC::CLEAR_BIT(&(Local_122.f_359), 10);
				func_92(1, 0);
			}
			else
			{
				return;
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_122.f_359), 10);
			func_92(1, 0);
		}
		iParam0 = 0;
		func_1352(__LIB_0__::func_943(1, 1), Local_122.f_360, __LIB_0__::getMinusOneOrNull(), 0);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_92(0, 0);
	}
}

void func_1354(int iParam0)//Position - 0x57E68
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(73), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
	{
		if (BitTest(iParam0, 2))
		{
			iVar1 = func_892(joaat("SERVICE_SPEND_REQUEST_SOURCE_MOTORCYCLE"), __LIB_12__::func_845(73), 1, -149294787);
			if (iVar1 == 1)
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 17);
				MISC::SET_BIT(&(Global_1977083.f_1), 0);
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (iVar2 < 50)
				{
					func_1(Local_122.f_1, "FXIMAUD", "FXIM_PM_4A", &Local_166, 0);
				}
				else
				{
					func_1(Local_122.f_1, "FXIMAUD", "FXIM_PM_6A", &Local_166, 0);
				}
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
				__LIB_42__::func_920(Local_122.f_360, -1, -1);
				func_32(4);
			}
			else if (iVar1 == 0)
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 17);
				MISC::CLEAR_BIT(&(Local_122.f_359), 10);
				func_92(1, 0);
			}
			else
			{
				return;
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_122.f_359), 10);
			func_92(1, 0);
		}
		iParam0 = 0;
		func_1352(__LIB_0__::func_943(1, 1), Local_122.f_360, __LIB_0__::getMinusOneOrNull(), 0);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_92(0, 0);
	}
}

void func_1355(int iParam0)//Position - 0x57FA2
{
	bool bVar0;
	int iVar1;
	if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(72), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
	{
		if (BitTest(iParam0, 2))
		{
			iVar1 = func_892(joaat("SERVICE_SPEND_REQUEST_SUPPLY"), __LIB_12__::func_845(72), 1, -333798998);
			if (iVar1 == 1)
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 17);
				__LIB_29__::func_95(PLAYER::PLAYER_ID(), 1);
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 25)
				{
					func_1(Local_122.f_1, "FXFRAUD", "FXFR_PM_8", &Local_166, 0);
				}
				else
				{
					func_1(Local_122.f_1, "FXFRAUD", "FXFR_PM_7", &Local_166, 0);
				}
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
				__LIB_42__::func_920(Local_122.f_360, -1, -1);
				func_32(4);
			}
			else if (iVar1 == 0)
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 17);
				MISC::CLEAR_BIT(&(Local_122.f_359), 10);
				func_92(1, 0);
			}
			else
			{
				return;
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_122.f_359), 10);
			func_92(1, 0);
		}
		iParam0 = 0;
		func_1352(__LIB_0__::func_943(1, 1), Local_122.f_360, __LIB_0__::getMinusOneOrNull(), 0);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_92(0, 0);
	}
}

void func_1357(int iParam0)//Position - 0x58108
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(44), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
	{
		if (__LIB_8__::func_215(1, 1, 0, 1, 0))
		{
			if (BitTest(iParam0, 2) && (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(44), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17)))
			{
				iVar2 = joaat("supervolito");
				iVar3 = func_892(joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"), __LIB_12__::func_845(44), 1, iVar2);
				if (iVar3 == 1)
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 17);
					Global_2815059.f_876 = 1;
					MISC::CLEAR_BIT(&(Local_122.f_359), 4);
					__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
					__LIB_42__::func_920(Local_122.f_360, -1, -1);
					func_32(4);
					if (func_170())
					{
						func_1(Local_122.f_1, "EXCALAU", "EXCAL_HEPOSM", &Local_166, 0);
					}
					else
					{
						func_1(Local_122.f_1, "EXCALAU", "EXCAL_HEPOSF", &Local_166, 0);
					}
				}
				else if (iVar3 == 0)
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 17);
					MISC::CLEAR_BIT(&(Local_122.f_359), 10);
					func_92(1, 0);
				}
				else
				{
					return;
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 10);
				func_1197(21, 0);
			}
			iParam0 = 0;
			func_1352(__LIB_0__::func_943(1, 1), Local_122.f_360, Local_122.f_358, 0);
		}
		else
		{
			func_1197(21, 0);
			func_1(Local_122.f_1, "CT_AUD", "MPCT_HPno", &Local_166, 0);
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar1)
	{
		func_92(1, 0);
		func_1(Local_122.f_1, "CT_AUD", "MPCT_HPno", &Local_166, 0);
	}
	else if (bVar0)
	{
		func_92(0, 0);
		func_1(Local_122.f_1, "CT_AUD", "MPCT_MWmon", &Local_166, 0);
	}
}

void func_1358(int iParam0)//Position - 0x582C6
{
	int iVar0;
	if (__LIB_8__::func_215(1, 1, 0, 0, 0))
	{
		if (BitTest(iParam0, 2) && (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(43), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17)))
		{
			iVar0 = func_892(joaat("SERVICE_SPEND_PA_SERVICE_IMPOUND"), __LIB_12__::func_845(43), 1, 0);
			if (iVar0 == 1)
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 17);
				Global_2815059.f_911 = 1;
				__LIB_2__::func_970(__LIB_1__::func_463());
				__LIB_1__::func_653(29);
				__LIB_1__::func_653(30);
				__LIB_3__::func_578(__LIB_1__::func_463(), &(Global_1585857[__LIB_1__::func_463() /*142*/]), 1, -1, 0, 0);
				__LIB_1__::func_333(-205702236, 3, 0);
				Global_2815059.f_961 = 1;
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
				__LIB_42__::func_920(Local_122.f_360, -1, -1);
				func_32(4);
				if (func_170())
				{
					func_1(Local_122.f_1, "EXCALAU", "EXCAL_IMPOSM", &Local_166, 0);
				}
				else
				{
					func_1(Local_122.f_1, "EXCALAU", "EXCAL_IMPOSF", &Local_166, 0);
				}
				Global_2815059.f_958 = __LIB_1__::func_463();
			}
			else if (iVar0 == 0)
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 17);
				MISC::CLEAR_BIT(&(Local_122.f_359), 10);
				func_92(1, 0);
			}
			else
			{
				return;
			}
		}
		else
		{
			if (func_170())
			{
				func_1(Local_122.f_1, "EXCALAU", "EXCAL_IMNEGM", &Local_166, 0);
			}
			else
			{
				func_1(Local_122.f_1, "EXCALAU", "EXCAL_IMNEGF", &Local_166, 0);
			}
			Global_2815059.f_954 = 0;
			MISC::CLEAR_BIT(&(Local_122.f_359), 10);
			func_92(1, 0);
		}
		iParam0 = 0;
		func_1352(__LIB_0__::func_943(1, 1), Local_122.f_360, Local_122.f_358, 0);
	}
	else
	{
		func_92(1, 0);
	}
}

void func_1361(int iParam0, int iParam1)//Position - 0x584D7
{
	if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 0, 1))
	{
		if (BitTest(iParam0, 2))
		{
			func_1362(iParam1, 1, -1);
			func_32(4);
		}
		else
		{
			func_32(4);
		}
		iParam0 = 0;
		func_1352(__LIB_0__::func_943(1, 1), iParam1, PLAYER::PLAYER_ID(), 0);
	}
}

void func_1362(int iParam0, bool bParam1, int iParam2)//Position - 0x5851C
{
	struct<2> Var0;
	int iVar1;
	if (Global_2815059.f_4546.f_18 < 1)
	{
		iVar1 = Global_2815059.f_4546.f_18;
		__LIB_0__::func_627(&(Global_2815059.f_4546[iVar1 /*2*/]), 1, 0);
		__LIB_0__::clearF_1Prop(&(Global_2815059.f_4546.f_3[iVar1 /*2*/]));
		Global_2815059.f_4546.f_6[iVar1] = iParam0;
		Global_2815059.f_4546.f_12[iVar1] = 0;
		if (iParam2 == -1)
		{
			Global_2815059.f_4546.f_16[iVar1] = 60000;
		}
		else
		{
			Global_2815059.f_4546.f_16[iVar1] = iParam2;
		}
		Global_2815059.f_4546.f_14[iVar1] = 1200000;
		switch (iParam0)
		{
			case 27:
				Global_2815059.f_4546.f_8[iVar1] = 104;
				Global_2815059.f_4546.f_10[iVar1] = 0;
				break;
			case 28:
				Global_2815059.f_4546.f_8[iVar1] = 105;
				Global_2815059.f_4546.f_10[iVar1] = 1;
				break;
			case 29:
				Global_2815059.f_4546.f_8[iVar1] = 106;
				Global_2815059.f_4546.f_10[iVar1] = 2;
				break;
			case 30:
				Global_2815059.f_4546.f_8[iVar1] = 107;
				Global_2815059.f_4546.f_10[iVar1] = 3;
				break;
			case 31:
				Global_2815059.f_4546.f_8[iVar1] = 108;
				Global_2815059.f_4546.f_10[iVar1] = 4;
				break;
			case 32:
				Global_2815059.f_4546.f_8[iVar1] = 109;
				Global_2815059.f_4546.f_10[iVar1] = 5;
				break;
			case 33:
				Global_2815059.f_4546.f_8[iVar1] = 110;
				Global_2815059.f_4546.f_10[iVar1] = 6;
				break;
			case 34:
				Global_2815059.f_4546.f_8[iVar1] = 111;
				Global_2815059.f_4546.f_10[iVar1] = 7;
				break;
		}
		if (bParam1)
		{
			StringCopy(&Var0, "SCLUB_NM_", 16);
			StringIntConCat(&Var0, Global_2815059.f_4546.f_10[iVar1], 16);
			__LIB_8__::func_159("MP_STRIP_IN4" /* GXT: ~a~ will arrive at your Apartment shortly. */, &Var0, -1);
		}
		Global_2815059.f_4546.f_18++;
	}
}

void func_1364(int iParam0)//Position - 0x58749
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar1 = __LIB_12__::func_845(20);
	if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar1, false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
	{
		if (BitTest(iParam0, 2) && (MONEY::NETWORK_CAN_SPEND_MONEY(iVar1, false, true, false, -1, 0) || BitTest(Local_122.f_359, 17)))
		{
			iVar2 = func_892(joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"), iVar1, 1, 0);
			if (iVar2 == 1)
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 17);
				if (__LIB_38__::func_573(PLAYER::PLAYER_ID(), 1))
				{
					iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					iVar4 = -1;
					while (iVar4 <= (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar3) - 1))
					{
						iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, iVar4, false);
						if (ENTITY::DOES_ENTITY_EXIST(iVar5))
						{
							if (PED::IS_PED_A_PLAYER(iVar5))
							{
								iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar5);
								func_1372(iVar6);
							}
						}
						iVar4++;
					}
				}
				else if (func_1370())
				{
					func_1365();
				}
				else
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				}
				Global_2815059.f_4617 = 1;
				Global_2826521.f_279 = 1;
				Global_2815059.f_6730 = 1;
				func_1(Local_122.f_1, "CT_AUD", "MPCT_LWNT", &Local_166, 0);
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
				__LIB_42__::func_920(Local_122.f_360, -1, -1);
				Local_122.f_178 = 0;
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				MISC::CLEAR_BIT(&(Local_122.f_359), 10);
				Local_122.f_181.f_69 = 1;
				func_32(4);
			}
			else if (iVar2 == 0)
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 17);
				MISC::CLEAR_BIT(&(Local_122.f_359), 10);
				func_92(1, 0);
			}
			else
			{
				return;
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_122.f_359), 10);
			func_92(1, 0);
		}
		iParam0 = 0;
		func_1352(__LIB_0__::func_943(1, 1), 20, Local_122.f_358, 0);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_92(0, 0);
	}
}

void func_1365()//Position - 0x58914
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (__LIB_0__::func_156(iVar1, 1, 1))
		{
			if (__LIB_0__::func_307(iVar1) && __LIB_1__::func_644(iVar1) == __LIB_1__::func_536(Global_1640740, 1, 0))
			{
				func_1372(iVar1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_1640740))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_1640740, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), Global_1640740, false))
					{
						func_1372(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

int func_1370()//Position - 0x58AC6
{
	if (__LIB_0__::func_307(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_1371())
	{
		return 1;
	}
	return 0;
}

int func_1371()//Position - 0x58AE9
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1640740))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_1640740, false))
		{
			return PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_1640740, false);
		}
	}
	return 0;
}

void func_1372(int iParam0)//Position - 0x58B1A
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 1449852136;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = __LIB_2__::func_84(iParam0);
	iVar1 = __LIB_0__::func_950(iParam0);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_1375(int iParam0)//Position - 0x58BE2
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	iVar1 = __LIB_12__::func_845(14);
	if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar1, false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
	{
		if (BitTest(iParam0, 2) && (MONEY::NETWORK_CAN_SPEND_MONEY(iVar1, false, true, false, -1, 0) || BitTest(Local_122.f_359, 17)))
		{
			iVar2 = func_892(joaat("SERVICE_SPEND_REVEAL_PLAYERS"), iVar1, 1, 0);
			if (iVar2 == 1)
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 17);
				Var3.f_2 = -1637241198;
				Var3.f_3 = iVar1;
				__LIB_1__::func_634(Var3, __LIB_0__::func_943(1, 1));
				Global_2703735.f_57 = NETWORK::GET_NETWORK_TIME();
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_211 = 1;
				func_1(Local_122.f_1, "CT_AUD", "MPCT_RVL", &Local_166, 0);
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
				__LIB_42__::func_920(Local_122.f_360, -1, -1);
				Local_122.f_178 = 0;
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				MISC::CLEAR_BIT(&(Local_122.f_359), 10);
				Local_122.f_181.f_69 = 3;
				func_32(4);
			}
			else if (iVar2 == 0)
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 17);
				MISC::CLEAR_BIT(&(Local_122.f_359), 10);
				func_92(1, 0);
			}
			else
			{
				return;
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_122.f_359), 10);
			func_92(1, 0);
		}
		iParam0 = 0;
		func_1352(__LIB_0__::func_943(1, 1), 14, Local_122.f_358, 0);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_92(0, 0);
	}
}

void func_1376(int iParam0)//Position - 0x58D55
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(13), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
	{
		if (__LIB_8__::func_215(1, 1, 0, 1, 0))
		{
			if (BitTest(iParam0, 2) && (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(13), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17)))
			{
				iVar2 = func_892(joaat("SERVICE_SPEND_HELI_PICKUP"), __LIB_12__::func_845(13), 1, 0);
				if (iVar2 == 1)
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 17);
					Global_2815059.f_876 = 1;
					Global_2815059.f_883 = -1;
					MISC::CLEAR_BIT(&(Local_122.f_359), 4);
					__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
					__LIB_42__::func_920(Local_122.f_360, -1, -1);
					func_32(4);
					func_1(Local_122.f_1, "CT_AUD", "MPCT_HP", &Local_166, 0);
				}
				else if (iVar2 == 0)
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 17);
					MISC::CLEAR_BIT(&(Local_122.f_359), 10);
					func_92(1, 0);
				}
				else
				{
					return;
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 10);
				func_92(1, 0);
			}
			iParam0 = 0;
			func_1352(__LIB_0__::func_943(1, 1), Local_122.f_360, Local_122.f_358, 0);
		}
		else
		{
			func_92(1, 0);
			func_1(Local_122.f_1, "CT_AUD", "MPCT_HPno", &Local_166, 0);
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar1)
	{
		func_92(1, 0);
		func_1(Local_122.f_1, "CT_AUD", "MPCT_HPno", &Local_166, 0);
	}
	else if (bVar0)
	{
		func_92(0, 0);
		func_1(Local_122.f_1, "CT_AUD", "MPCT_MWmon", &Local_166, 0);
	}
}

void func_1377(int iParam0)//Position - 0x58EED
{
	bool bVar0;
	int iVar1;
	if ((func_1310(__LIB_12__::func_845(11)) && MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(11), false, true, false, -1, 0)) || BitTest(Local_122.f_359, 17))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (__LIB_8__::func_215(1, 1, 0, 1, 0))
		{
			if (BitTest(iParam0, 2))
			{
				iVar1 = func_892(joaat("SERVICE_SPEND_AIRSTRIKE"), __LIB_12__::func_845(11), 1, 0);
				if (iVar1 == 1)
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 17);
					__LIB_0__::func_186(8, 1, -1);
					Global_2815059.f_4455 = 1;
					MISC::CLEAR_BIT(&(Local_122.f_359), 4);
					__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
					__LIB_42__::func_920(Local_122.f_360, -1, -1);
					func_1(Local_122.f_1, "CT_AUD", "MPCT_AS", &Local_166, 0);
					func_32(4);
				}
				else if (iVar1 == 0)
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 17);
					MISC::CLEAR_BIT(&(Local_122.f_359), 10);
					func_92(1, 0);
				}
				else
				{
					return;
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 10);
				func_92(1, 0);
			}
		}
		else
		{
			func_92(1, 0);
		}
		iParam0 = 0;
		func_1352(__LIB_0__::func_943(1, 1), Local_122.f_360, Local_122.f_358, 0);
	}
	else
	{
		func_92(0, 0);
	}
}

void func_1378(int iParam0)//Position - 0x59022
{
	bool bVar0;
	int iVar1;
	if ((func_1310(__LIB_12__::func_845(10)) && MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(10), false, true, false, -1, 0)) || BitTest(Local_122.f_359, 17))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (__LIB_8__::func_215(1, 3, 0, 1, 0) && !func_1392())
		{
			if (BitTest(iParam0, 2))
			{
				iVar1 = func_892(joaat("SERVICE_SPEND_BACKUP_HELI"), __LIB_12__::func_845(10), 1, 0);
				if (iVar1 == 1)
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 17);
					__LIB_0__::func_186(11, 1, -1);
					Global_2815059.f_4454 = 1;
					MISC::CLEAR_BIT(&(Local_122.f_359), 4);
					__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
					__LIB_42__::func_920(Local_122.f_360, -1, -1);
					func_1(Local_122.f_1, "CT_AUD", "MPCT_HB", &Local_166, 0);
					func_32(4);
					__LIB_0__::func_746(48, 1);
				}
				else if (iVar1 == 0)
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 17);
					MISC::CLEAR_BIT(&(Local_122.f_359), 10);
					func_92(1, 0);
				}
				else
				{
					return;
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 10);
				func_92(1, 0);
			}
			iParam0 = 0;
			func_1352(__LIB_0__::func_943(1, 1), Local_122.f_360, Local_122.f_358, 0);
		}
		else
		{
			func_92(1, 0);
		}
	}
	else
	{
		func_1(Local_122.f_1, "CT_AUD", "MPCT_MWmon", &Local_166, 0);
		func_92(0, 0);
	}
}

int func_1392()//Position - 0x5947E
{
	if (SCRIPT::DOES_SCRIPT_EXIST("AM_airstrike"))
	{
		if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_airstrike", -1, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_1393(int iParam0)//Position - 0x594A4
{
	bool bVar0;
	int iVar1;
	if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(9), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
	{
		if (__LIB_8__::func_215(1, 1, 0, 0, 0))
		{
			if (BitTest(iParam0, 2) && (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(9), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17)))
			{
				iVar1 = func_892(joaat("SERVICE_SPEND_BOAT_PICKUP"), __LIB_12__::func_845(9), 1, 0);
				if (iVar1 == 1)
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 17);
					Global_2815059.f_875 = 1;
					MISC::CLEAR_BIT(&(Local_122.f_359), 4);
					__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
					__LIB_42__::func_920(Local_122.f_360, -1, -1);
					func_32(4);
					func_1(Local_122.f_1, "CT_AUD", "MPCT_BP", &Local_166, 0);
				}
				else if (iVar1 == 0)
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 17);
					MISC::CLEAR_BIT(&(Local_122.f_359), 10);
					func_92(1, 0);
				}
				else
				{
					return;
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 10);
				func_1197(5, 0);
				func_1(Local_122.f_1, "CT_AUD", "MPCT_BPno", &Local_166, 0);
			}
			iParam0 = 0;
			func_1352(__LIB_0__::func_943(1, 1), Local_122.f_360, Local_122.f_358, 0);
		}
		else
		{
			func_1197(5, 0);
			func_1(Local_122.f_1, "CT_AUD", "MPCT_BPno", &Local_166, 0);
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_92(0, 0);
		func_1(Local_122.f_1, "CT_AUD", "MPCT_MWmon", &Local_166, 0);
	}
}

void func_1394(int iParam0)//Position - 0x59626
{
	bool bVar0;
	int iVar1;
	if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(8), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
	{
		if (__LIB_8__::func_215(1, 1, 2, 1, 0))
		{
			if (BitTest(iParam0, 2) && (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(8), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17)))
			{
				iVar1 = func_892(joaat("SERVICE_SPEND_AMMO_DROP"), __LIB_12__::func_845(8), 1, 0);
				if (iVar1 == 1)
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 17);
					Global_2815059.f_874 = 1;
					MISC::CLEAR_BIT(&(Local_122.f_359), 4);
					__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
					__LIB_42__::func_920(Local_122.f_360, -1, -1);
					func_32(4);
					func_1(Local_122.f_1, "CT_AUD", "MPCT_AMO", &Local_166, 0);
				}
				else if (iVar1 == 0)
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 17);
					MISC::CLEAR_BIT(&(Local_122.f_359), 10);
					func_92(1, 0);
				}
				else
				{
					return;
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 10);
				func_92(23, 0);
				func_1312(Local_122.f_1);
			}
			iParam0 = 0;
			func_1352(__LIB_0__::func_943(1, 1), Local_122.f_360, Local_122.f_358, 0);
		}
		else
		{
			func_92(23, 0);
			func_1312(Local_122.f_1);
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_92(0, 0);
		func_1(Local_122.f_1, "CT_AUD", "MPCT_MWmon", &Local_166, 0);
	}
}

void func_1395(int iParam0)//Position - 0x59796
{
	bool bVar0;
	int iVar1;
	iVar1 = func_1257(uLocal_159[Local_122.f_181.f_69], 0, 0, 0, 0, 0, 0, 0);
	if (iVar1 == 0)
	{
		if (__LIB_8__::func_215(1, 1, 0, 0, 0))
		{
			if (BitTest(iParam0, 2))
			{
				if (__LIB_2__::func_904(PLAYER::PLAYER_ID()))
				{
					if (__LIB_13__::func_721())
					{
						__LIB_1__::func_856(0);
					}
					else
					{
						__LIB_8__::func_361(0);
					}
				}
				Global_2815059.f_911 = 1;
				Global_2815059.f_961 = 0;
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
				__LIB_42__::func_920(Local_122.f_360, -1, -1);
				func_32(4);
				if (Global_2815059.f_5977)
				{
					StringCopy(&(Local_122.f_174), "APCAL_PVC", 16);
					func_1(Local_122.f_1, &(Local_122.f_170), &(Local_122.f_174), &Local_166, 1);
				}
				else
				{
					func_1(Local_122.f_1, "CT_AUD", "MPCT_MCcon", &Local_166, 0);
				}
				Global_2815059.f_958 = uLocal_159[Local_122.f_181.f_69];
			}
			else
			{
				Global_2815059.f_954 = 0;
				MISC::CLEAR_BIT(&(Local_122.f_359), 10);
				func_92(1, 0);
			}
			iParam0 = 0;
			func_1352(__LIB_0__::func_943(1, 1), Local_122.f_360, Local_122.f_358, 0);
		}
		else
		{
			func_92(1, 0);
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Global_2815059.f_954 = 0;
		MISC::CLEAR_BIT(&(Local_122.f_359), 10);
		if (iVar1 == 1)
		{
			__LIB_1__::func_789("BB_PVUNA1" /* GXT: You have no Personal Vehicle in this space. */, 100, 0);
			func_92(14, 0);
		}
		else if (iVar1 == 2)
		{
			__LIB_1__::func_789("BB_PVUNA2" /* GXT: You are too close to your current Personal Vehicle. */, 100, 0);
			func_92(13, 0);
		}
		else if (iVar1 == 3)
		{
			__LIB_1__::func_789("BB_PVUNA3" /* GXT: Your Personal Vehicle is not empty. */, 100, 0);
			func_92(15, 0);
		}
		else if (iVar1 == 4)
		{
			__LIB_1__::func_789("BB_PVUNA4" /* GXT: You are too far from a suitable road. */, 100, 0);
			func_92(16, 0);
		}
		else if (iVar1 == 5)
		{
			__LIB_1__::func_789("BB_PVUNA5" /* GXT: Unlocks when you have a Garage. */, 100, 0);
			func_92(17, 0);
		}
		else if (iVar1 == 6)
		{
			__LIB_1__::func_789("BB_PVUNA6" /* GXT: Unavailable. */, 100, 0);
			func_92(18, 0);
		}
		else if (iVar1 == 7)
		{
			__LIB_1__::func_789("BB_PVUNA7" /* GXT: A delivery is in progress. */, 100, 0);
			func_92(21, 0);
		}
		else if (iVar1 == 8)
		{
			__LIB_1__::func_789("BB_PVUNA8" /* GXT: Your Personal Vehicle is impounded. */, 100, 0);
			func_92(22, 0);
		}
		else if (iVar1 == 9)
		{
			__LIB_1__::func_789("BB_PVUNA9" /* GXT: You are already using your Personal Vehicle. */, 100, 0);
			func_1197(2, 0);
		}
		else if (iVar1 == 11)
		{
			__LIB_1__::func_789("BB_PVUNA11" /* GXT: You are too close to your Garage. */, 100, 0);
			func_1197(13, 0);
		}
		else if (iVar1 == 12)
		{
			__LIB_1__::func_789("BB_PVUNA12" /* GXT: Your Personal Vehicle is destroyed. You can call Mors Mutual Insurance to make a claim. */, 100, 0);
			func_1197(16, 0);
		}
		else if (iVar1 == 13)
		{
			__LIB_1__::func_789("BB_PVUNA13" /* GXT: Your Personal Vehicle is destroyed. To protect your vehicles in the future you can purchase Car Insurance. */, 100, 0);
			func_1197(18, 0);
		}
		else if (iVar1 == 14)
		{
			__LIB_1__::func_789("PIM_HRPV14" /* GXT: You already have an active Special/Personal Vehicle. */, 100, 0);
			func_1197(23, 0);
		}
		else if (iVar1 == 98)
		{
			__LIB_1__::func_789("BB_PVUNA98" /* GXT: Your Personal Vehicle is already in the LS Car Meet. Return it to Storage via the Vehicles section of the Interaction Menu if you wish to request another vehicle. */, 100, 0);
			func_1197(24, 0);
		}
		else if (iVar1 == 99)
		{
			__LIB_1__::func_789("PIM_HRPV99" /* GXT: This vehicle is not allowed inside the LS Car Meet. */, 100, 0);
			func_1197(25, 0);
		}
	}
}

void func_1401(int iParam0)//Position - 0x59B46
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	iVar1 = __LIB_12__::func_845(6);
	if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar1, false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
	{
		if (BitTest(iParam0, 2) && (MONEY::NETWORK_CAN_SPEND_MONEY(iVar1, false, true, false, -1, 0) || BitTest(Local_122.f_359, 17)))
		{
			iVar2 = func_892(joaat("SERVICE_SPEND_OFF_THE_RADAR"), iVar1, 1, 0);
			if (iVar2 == 1)
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 17);
				Var3.f_2 = 806692428;
				Var3.f_3 = iVar1;
				Var3.f_4 = __LIB_28__::func_711();
				__LIB_1__::func_634(Var3, __LIB_0__::func_943(1, 1));
				Global_2703735.f_56 = NETWORK::GET_NETWORK_TIME();
				MISC::SET_BIT(&(Global_2815059.f_4630), 1);
				MISC::CLEAR_BIT(&(Global_2815059.f_4630), 0);
				MISC::CLEAR_BIT(&(Global_2815059.f_4630), 2);
				MISC::CLEAR_BIT(&(Global_2815059.f_4630), 3);
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_208 = 1;
				if (!__LIB_1__::func_342(97, -1))
				{
					__LIB_1__::func_348(97, 1, -1, 1);
				}
				func_1(Local_122.f_1, "CT_AUD", "MPCT_RDR", &Local_166, 0);
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
				__LIB_42__::func_920(Local_122.f_360, -1, -1);
				MISC::CLEAR_BIT(&(Local_122.f_359), 10);
				Local_122.f_181.f_69 = 2;
				func_32(4);
			}
			else if (iVar2 == 0)
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 17);
				MISC::CLEAR_BIT(&(Local_122.f_359), 10);
				func_92(1, 0);
			}
			else
			{
				return;
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_122.f_359), 10);
			func_92(1, 0);
		}
		iParam0 = 0;
		func_1352(__LIB_0__::func_943(1, 1), 6, Local_122.f_358, 0);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_92(0, 0);
	}
}

void func_1403(int iParam0)//Position - 0x59D2E
{
	bool bVar0;
	int iVar1;
	iVar1 = Local_122.f_181.f_103[0] * 500;
	if (__LIB_0__::func_156(Local_122.f_358, 0, 1))
	{
		if (__LIB_2__::func_847(PLAYER::PLAYER_ID()) >= iVar1)
		{
			if (BitTest(iParam0, 2))
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				iLocal_128 = iVar1;
				iLocal_129 = Local_122.f_181.f_103[0];
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(Local_122.f_358) > 0)
				{
					bLocal_130 = true;
				}
				else
				{
					bLocal_130 = false;
				}
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_212 = Local_122.f_358;
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_213 = iLocal_129;
				__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
				__LIB_42__::func_920(Local_122.f_360, -1, -1);
				func_32(4);
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 10);
				func_92(1, 0);
			}
			iParam0 = 0;
			func_1352(__LIB_0__::func_943(1, 1), 5, Local_122.f_358, 0);
		}
		else
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		func_92(0, 0);
	}
}

void func_1404(int iParam0)//Position - 0x59E1A
{
	bool bVar0;
	int iVar1;
	if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(0), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
	{
		if (BitTest(iParam0, 2) && (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(0), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17)))
		{
			iVar1 = func_892(joaat("SERVICE_SPEND_BULL_SHARK"), __LIB_12__::func_845(0), 1, 0);
			if (iVar1 == 1)
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 17);
				__LIB_1__::func_392(74, 1);
				Global_2815059.f_882 = 1;
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				func_32(4);
				__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
				__LIB_42__::func_920(Local_122.f_360, -1, -1);
				func_1(Local_122.f_1, "CT_AUD", "MPCT_Bcon", &Local_166, 0);
			}
			else if (iVar1 == 0)
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 17);
				MISC::CLEAR_BIT(&(Local_122.f_359), 10);
				func_92(1, 0);
			}
			else
			{
				return;
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_122.f_359), 10);
			func_92(1, 0);
		}
		iParam0 = 0;
		func_1352(__LIB_0__::func_943(1, 1), Local_122.f_360, __LIB_0__::getMinusOneOrNull(), 0);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_92(0, 0);
		func_1(Local_122.f_1, "CT_AUD", "MPCT_Bmon", &Local_166, 0);
	}
}

void func_1405(int iParam0, int iParam1)//Position - 0x59F5E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = __LIB_12__::func_845(2);
	iVar2 = PLAYER::PLAYER_ID();
	if (__LIB_0__::func_156(Local_122.f_358, 0, 1))
	{
		if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar1, false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
		{
			if (BitTest(iParam0, 2) && (MONEY::NETWORK_CAN_SPEND_MONEY(iVar1, false, true, false, -1, 0) || BitTest(Local_122.f_359, 17)))
			{
				iVar3 = func_892(joaat("SERVICE_SPEND_HIRE_MUGGER"), iVar1, 1, 0);
				if (iVar3 == 1)
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 17);
					MISC::SET_BIT(&(Global_1853348[iVar2 /*834*/].f_140), 0);
					Global_1853348[iVar2 /*834*/].f_141 = Local_122.f_358;
					MISC::CLEAR_BIT(&(Local_122.f_359), 4);
					iLocal_128 = iVar1;
					__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
					__LIB_42__::func_920(Local_122.f_360, -1, -1);
					func_1407(__LIB_0__::func_950(Local_122.f_358), Local_122.f_360);
					__LIB_1__::func_28(34);
					func_32(2);
				}
				else if (iVar3 == 0)
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 17);
					MISC::CLEAR_BIT(&(Local_122.f_359), 10);
					func_92(1, 0);
				}
				else
				{
					return;
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 10);
				func_92(1, 0);
			}
			iParam0 = 0;
			if (Local_122.f_181.f_103[1] == 3)
			{
				func_1352(__LIB_0__::func_943(1, 1), 4, Local_122.f_358, 0);
			}
			else if (Local_122.f_181.f_103[1] == 2)
			{
				func_1352(__LIB_0__::func_943(1, 1), 3, Local_122.f_358, 0);
			}
			else
			{
				func_1352(__LIB_0__::func_943(1, 1), 2, Local_122.f_358, 0);
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 10);
		func_92(1, 0);
		iParam0 = 0;
		func_1352(__LIB_0__::func_943(1, 1), iParam1, Local_122.f_358, 0);
	}
	if (bVar0)
	{
		func_92(0, 0);
	}
}

void func_1407(int iParam0, var uParam1)//Position - 0x5A181
{
	struct<4> Var0;
	Var0.f_0 = 290989781;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = uParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 6, iParam0);
	}
}

void func_1408(int iParam0)//Position - 0x5A1B3
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = __LIB_12__::func_845(12);
	iVar2 = PLAYER::PLAYER_ID();
	if (__LIB_0__::func_156(Local_122.f_358, 0, 1))
	{
		if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar1, false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
		{
			if (BitTest(iParam0, 2) && (MONEY::NETWORK_CAN_SPEND_MONEY(iVar1, false, true, false, -1, 0) || BitTest(Local_122.f_359, 17)))
			{
				iVar3 = func_892(joaat("SERVICE_SPEND_HIRE_MERCENARY"), iVar1, 1, 0);
				if (iVar3 == 1)
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 17);
					MISC::SET_BIT(&(Global_1853348[iVar2 /*834*/].f_140), 1);
					Global_1853348[iVar2 /*834*/].f_141 = Local_122.f_358;
					MISC::CLEAR_BIT(&(Local_122.f_359), 4);
					iLocal_128 = iVar1;
					__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
					__LIB_42__::func_920(Local_122.f_360, -1, -1);
					func_32(2);
				}
				else if (iVar3 == 0)
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 17);
					MISC::CLEAR_BIT(&(Local_122.f_359), 10);
					func_92(1, 0);
				}
				else
				{
					return;
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 10);
				func_92(1, 0);
			}
			iParam0 = 0;
			func_1352(__LIB_0__::func_943(1, 1), 12, Local_122.f_358, 0);
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		func_32(1);
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
		MISC::CLEAR_BIT(&(Local_122.f_359), 10);
		func_92(1, 0);
		func_1352(__LIB_0__::func_943(1, 1), 12, Local_122.f_358, 0);
	}
	if (bVar0)
	{
		func_92(0, 0);
	}
}

void func_1409(int iParam0)//Position - 0x5A327
{
	bool bVar0;
	struct<13> Var1;
	bool bVar2;
	if (__LIB_0__::func_156(Local_122.f_358, 0, 1))
	{
		if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_28__::func_745(Local_122.f_181.f_103[0]), false, true, false, -1, 0) && (BitTest(iLocal_200, 0) || MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_28__::func_745(Local_122.f_181.f_103[0]), false, true, false, -1, 0)))
		{
			if (BitTest(iParam0, 2))
			{
				if (__LIB_0__::func_112())
				{
					if (!BitTest(iLocal_200, 0))
					{
						func_100(&iLocal_199, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), joaat("SERVICE_SPEND_BOUNTY"), __LIB_28__::func_745(Local_122.f_181.f_103[0]), 4, 3);
						MISC::SET_BIT(&iLocal_200, 0);
					}
				}
				if (!BitTest(iLocal_200, 0))
				{
					__LIB_1__::func_865(-__LIB_28__::func_745(Local_122.f_181.f_103[0]), 1, 1, 0f);
					__LIB_0__::func_186(10, 1, -1);
					MONEY::NETWORK_BUY_BOUNTY(__LIB_28__::func_745(Local_122.f_181.f_103[0]), Local_122.f_358, false, true, joaat("char_lester"));
					func_1411(__LIB_0__::func_943(1, 1), Local_122.f_358, (__LIB_28__::func_745(Local_122.f_181.f_103[0]) - Global_262145.f_7104 /* Tunable: LESTER_BOUNTY_CUT */), 0, 1);
					__LIB_1__::func_392(29, 1);
					MISC::SET_BIT(&(Global_2815059.f_1856.f_1), Local_122.f_358);
					Global_2815059.f_1856.f_19[Local_122.f_358] = (__LIB_28__::func_745(Local_122.f_181.f_103[0]) - Global_262145.f_7104 /* Tunable: LESTER_BOUNTY_CUT */);
					MISC::CLEAR_BIT(&(Local_122.f_359), 4);
					MISC::SET_BIT(&(Local_122.f_359), 8);
					Var1 = { __LIB_0__::func_819(Local_122.f_358) };
					func_1410(&Var1);
					Local_122.f_181.f_103[0] = (Local_122.f_181.f_103[0] - 1);
					if (Local_122.f_181.f_103[0] < Local_122.f_181.f_3[0])
					{
						Local_122.f_181.f_103[0] = Local_122.f_181.f_3[0];
					}
					__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
					__LIB_42__::func_920(Local_122.f_360, -1, -1);
					func_32(4);
					iParam0 = 0;
					func_1352(__LIB_0__::func_943(1, 1), 1, Local_122.f_358, 0);
				}
				else if (BitTest(iLocal_200, 0))
				{
					if (__LIB_2__::func_835(iLocal_199))
					{
						if (__LIB_2__::func_834(iLocal_199) == 2)
						{
							if (__LIB_0__::func_112())
							{
								NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(iLocal_199));
							}
							__LIB_0__::func_186(10, 1, -1);
							MONEY::NETWORK_BUY_BOUNTY(__LIB_28__::func_745(Local_122.f_181.f_103[0]), Local_122.f_358, false, true, joaat("char_lester"));
							func_1411(__LIB_0__::func_943(1, 1), Local_122.f_358, (__LIB_28__::func_745(Local_122.f_181.f_103[0]) - Global_262145.f_7104 /* Tunable: LESTER_BOUNTY_CUT */), 0, 1);
							__LIB_1__::func_392(29, 1);
							MISC::SET_BIT(&(Global_2815059.f_1856.f_1), Local_122.f_358);
							Global_2815059.f_1856.f_19[Local_122.f_358] = (__LIB_28__::func_745(Local_122.f_181.f_103[0]) - Global_262145.f_7104 /* Tunable: LESTER_BOUNTY_CUT */);
							MISC::CLEAR_BIT(&(Local_122.f_359), 4);
							MISC::SET_BIT(&(Local_122.f_359), 8);
							Var1 = { __LIB_0__::func_819(Local_122.f_358) };
							func_1410(&Var1);
							Local_122.f_181.f_103[0] = (Local_122.f_181.f_103[0] - 1);
							if (Local_122.f_181.f_103[0] < Local_122.f_181.f_3[0])
							{
								Local_122.f_181.f_103[0] = Local_122.f_181.f_3[0];
							}
							__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
							__LIB_42__::func_920(Local_122.f_360, -1, -1);
							func_32(4);
							iParam0 = 0;
							func_1352(__LIB_0__::func_943(1, 1), 1, Local_122.f_358, 0);
							iLocal_200 = 0;
							__LIB_1__::func_34(iLocal_199);
							if (__LIB_0__::func_112())
							{
								func_1(Local_122.f_1, "CT_AUD", "MPCT_BNTcon", &Local_166, 0);
							}
						}
						else
						{
							bVar2 = true;
							iLocal_200 = 0;
							__LIB_1__::func_34(iLocal_199);
							__LIB_0__::func_954(__LIB_0__::func_943(1, 1), 1, Local_122.f_358);
						}
					}
				}
			}
			else
			{
				bVar2 = true;
			}
		}
		else
		{
			iParam0 = 0;
			MISC::CLEAR_BIT(&(Local_122.f_359), 10);
			func_1352(__LIB_0__::func_943(1, 1), 1, Local_122.f_358, 0);
			bVar0 = true;
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 10);
		func_92(1, 0);
		iParam0 = 0;
		func_1352(__LIB_0__::func_943(1, 1), 1, Local_122.f_358, 0);
	}
	if (bVar0)
	{
		func_92(31, 0);
	}
	if (bVar2)
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 10);
		func_92(1, 0);
		iParam0 = 0;
		if (BitTest(iLocal_200, 0))
		{
			__LIB_1__::func_34(iLocal_199);
		}
		iLocal_200 = 0;
		func_1352(__LIB_0__::func_943(1, 1), 1, Local_122.f_358, 0);
	}
}

int func_1410(var* uParam0)//Position - 0x5A74F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (__LIB_0__::func_800(Global_2359296[__LIB_0__::func_155() /*5567*/].f_5149.f_15[iVar0 /*13*/]))
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, &(Global_2359296[__LIB_0__::func_155() /*5567*/].f_5149.f_15[iVar0 /*13*/])))
			{
				Global_2359296[__LIB_0__::func_155() /*5567*/].f_5149.f_15[iVar0 /*13*/] = { *uParam0 };
				Global_2359296[__LIB_0__::func_155() /*5567*/].f_5149.f_224[iVar0] = NETWORK::GET_CLOUD_TIME_AS_INT();
				return 1;
			}
		}
		else
		{
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_5149.f_15[iVar0 /*13*/] = { *uParam0 };
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_5149.f_224[iVar0] = NETWORK::GET_CLOUD_TIME_AS_INT();
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1411(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x5A819
{
	struct<22> Var0;
	Var0.f_0 = 1915499503;
	Var0.f_4 = iParam2;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_6 = iParam3;
	__LIB_1__::func_706(&(Var0.f_20), &(Var0.f_21));
	if (bParam4)
	{
		MISC::SET_BIT(&(Var0.f_3), 0);
	}
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 22, iParam0);
	}
}

bool func_1413()//Position - 0x5A88C
{
	return BitTest(Local_122.f_359, 10);
}

void func_1421(struct<165> Param0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5)//Position - 0x5A9DE
{
	if (!__LIB_0__::func_864(uParam3))
	{
		__LIB_0__::func_795(uParam3, 1, 0);
	}
	else if (*uParam2)
	{
		__LIB_0__::clearF_1Prop(uParam3);
		*uParam2 = 0;
	}
	else if (__LIB_0__::func_937(uParam3, iParam4, 1))
	{
		if (!__LIB_0__::func_75())
		{
			switch (iParam1)
			{
				case 12:
					func_1(Param0, "CT_AUD", "MPCT_LSidle", uParam5, 0);
					break;
				case 19:
					func_1(Param0, "CT_AUD", "MPCT_LMidle", uParam5, 0);
					break;
				case 85:
					func_1(Param0, "CT_AUD", "MPCT_MWidle", uParam5, 0);
					break;
				case 84:
					func_1(Param0, "CT_AUD", "MPCT_Bidle", uParam5, 0);
					break;
				case 72:
					func_1(Param0, "CT_AUD", "MPCT_Vidle", uParam5, 0);
					break;
				case 70:
					func_1(Param0, "CT_AUD", "MPCT_Lidle", uParam5, 0);
					break;
				case 89:
					func_1(Param0, "CT_AUD", "MPCT_MCidle", uParam5, 0);
					break;
				case 18:
					func_1(Param0, "CT_AUD", "MPCT_Sidle", uParam5, 0);
					break;
				case 31:
					func_1(Param0, "CT_AUD", "MPCT_Midle", uParam5, 0);
					break;
				case 86:
					func_1(Param0, "CT_AUD", "MPCT_Gidle", uParam5, 0);
					break;
				case 20:
					func_1(Param0, "CT_AUD", "MPCT_Ridle", uParam5, 0);
					break;
				case 91:
					func_1(Param0, "CT_AUD", "MPCT_INSidle", uParam5, 0);
					break;
				case 41:
					func_1(Param0, "CT_AUD", "MPCT_PGmen", uParam5, 0);
					break;
				case 74:
					func_1(Param0, "EXCALAU", "EXCAL_IDLEF", uParam5, 0);
					break;
				case 75:
					func_1(Param0, "EXCALAU", "EXCAL_IDLEM", uParam5, 0);
					break;
				case 157:
					func_1(Param0, "CAGTAU", "CAGT_PM_2", uParam5, 0);
					break;
				case 169:
					func_1(Param0, "HS4PAAU", "HS4PA_PCR_4", uParam5, 0);
					break;
				case 172:
					func_1(Param0, "TNSSAUD", "TNSS_PC_ID1", uParam5, 0);
					break;
				case 176:
					func_1(Param0, "FXIMAUD", "FXIM_PM_2A", uParam5, 0);
					break;
				case 175:
					func_1(Param0, "FXFRAUD", "FXFR_PM_2", uParam5, 0);
					break;
				case 151:
					func_1(Param0, "SM2TOAU", "SM2TO_PC_6A", uParam5, 0);
					break;
				case 76:
					func_1(Param0, "SM2AGAU", "SM2AG_PC_6A", uParam5, 0);
					break;
				case 181:
					func_1(Param0, "SM2YOAU", "SM2YO_PC_5A", uParam5, 0);
					break;
				}
		}
		__LIB_0__::clearF_1Prop(uParam3);
	}
}

int func_1422()//Position - 0x5ACC4
{
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_14, 0))
	{
		return 0;
	}
	if (!__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (Global_2715699.f_4316.f_779)
	{
		return 0;
	}
	if (__LIB_0__::func_629())
	{
		return 0;
	}
	if (__LIB_0__::func_703(Global_112411, 256))
	{
		return 0;
	}
	if (Global_1574964)
	{
		return 0;
	}
	if (Global_1836363)
	{
		return 0;
	}
	if (Global_1922044)
	{
		return 0;
	}
	if (Local_122.f_0 == 41)
	{
		if (Global_1958527 >= Global_262145.f_21905 /* Tunable: -1458568545 */)
		{
			return 0;
		}
	}
	if (__LIB_0__::func_890(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_11__::func_233())
	{
		return 0;
	}
	if (__LIB_27__::func_652())
	{
		return 0;
	}
	return 1;
}

void func_1428()//Position - 0x5ADE5
{
	bool bVar0;
	if (!BitTest(Local_122.f_359, 0))
	{
		__LIB_0__::func_222(&(Local_122.f_1), Local_122.f_180, 0, &(Local_122.f_166), 0, 1);
		MISC::SET_BIT(&(Local_122.f_359), 0);
	}
	else if (!BitTest(Local_122.f_359, 1))
	{
		if (__LIB_0__::func_769(Local_122.f_0))
		{
			if (__LIB_3__::func_67(0, -1, 0))
			{
				bVar0 = false;
				if (Local_122.f_0 == 82 && __LIB_16__::func_611(&(Local_122.f_1), Local_122.f_0, &(Local_122.f_170), &(Local_122.f_174), 12, 1, 0, 0, 0))
				{
					bVar0 = true;
				}
				if (!bVar0)
				{
					if (Local_122.f_0 == 79 && __LIB_16__::func_611(&(Local_122.f_1), Local_122.f_0, &(Local_122.f_170), &(Local_122.f_174), 12, 1, 0, 0, 0))
					{
						bVar0 = true;
					}
				}
				if (!bVar0)
				{
					if ((Local_122.f_0 == 75 || Local_122.f_0 == 74) && __LIB_16__::func_611(&(Local_122.f_1), Local_122.f_0, &(Local_122.f_170), &(Local_122.f_174), 12, 1, 0, 0, 0))
					{
						bVar0 = true;
					}
				}
				if (!bVar0)
				{
					if (func_1435(&(Local_122.f_1), Local_122.f_0, &(Local_122.f_170), &(Local_122.f_174), 12, 1, 0, 0, 0))
					{
						bVar0 = true;
					}
				}
				if (bVar0)
				{
					__LIB_24__::func_411(1);
					MISC::SET_BIT(&(Local_122.f_359), 1);
				}
			}
		}
		else
		{
			func_32(4);
		}
	}
	else if (__LIB_0__::func_77(0) && !BitTest(Local_122.f_359, 2))
	{
		if (!BitTest(Local_122.f_359, 2))
		{
			if (__LIB_1__::func_860(Local_122.f_0))
			{
				if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				{
					if (Global_21605 >= 4)
					{
						MISC::SET_BIT(&(Local_122.f_359), 2);
					}
				}
			}
			else if (!__LIB_0__::func_769(Local_122.f_0) && __LIB_1__::func_859())
			{
				if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				{
				}
				if (__LIB_1__::func_859())
				{
				}
				if (__LIB_3__::func_579())
				{
				}
				if (__LIB_15__::func_279())
				{
				}
				func_32(4);
			}
		}
	}
	else if (BitTest(Local_122.f_359, 2))
	{
		if (BitTest(Local_122.f_359, 9))
		{
			func_32(4);
		}
		else if (BitTest(Local_122.f_359, 16))
		{
			func_32(4);
		}
		else
		{
			__LIB_3__::func_112();
			func_32(1);
		}
	}
	else
	{
		func_32(4);
	}
}

bool func_1435(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x5B094
{
	__LIB_0__::func_487(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	if (iParam5 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	Global_2883585 = 1;
	return __LIB_0__::func_711(sParam3, iParam4, bParam8);
}

int func_1438()//Position - 0x5B1B6
{
	if (__LIB_0__::func_193())
	{
		return 0;
	}
	if (__LIB_1__::func_861())
	{
		return 0;
	}
	if (BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_14, 0))
	{
		return 0;
	}
	if (!__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (!__LIB_0__::func_77(0))
	{
		return 0;
	}
	return 1;
}

void func_1444()//Position - 0x5B28F
{
	if (__LIB_0__::func_864(&(Global_2715699.f_4316.f_78[Local_122.f_360 /*2*/])))
	{
		Global_2715699.f_4316[Local_122.f_360] = 0;
		func_1352(__LIB_0__::func_943(1, 1), Local_122.f_360, Local_122.f_358, 0);
		__LIB_0__::func_954(__LIB_0__::func_943(1, 1), Local_122.f_360, Local_122.f_358);
	}
	__LIB_1__::func_895(1, -1);
	__LIB_1__::func_863(0);
	Global_23150.f_8773 = 0;
	Global_1922952 = 0;
	Global_1922953 = 0;
	Global_1922954 = 0;
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_147);
	if (BitTest(Local_122.f_359, 15))
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		MISC::CLEAR_BIT(&(Local_122.f_359), 15);
	}
	func_1445(0);
	Global_2815059.f_954 = 0;
	if (BitTest(iLocal_200, 0))
	{
		__LIB_1__::func_34(iLocal_199);
	}
	iLocal_200 = 0;
	Global_1946249 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1445(bool bParam0)//Position - 0x5B352
{
	if (bParam0)
	{
		if (!Global_1835497)
		{
			__LIB_1__::func_862(1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 19);
	}
	else
	{
		if (Global_1835497)
		{
			__LIB_1__::func_862(0);
		}
		MISC::CLEAR_BIT(&(Local_122.f_359), 19);
	}
}

void func_1456(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19)//Position - 0x5B57C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	switch (Param0.f_1)
	{
		case 12:
			Local_122.f_0 = 12;
			StringCopy(&(Local_122.f_166), "LESTER", 16);
			Local_122.f_178 = 0;
			if (__LIB_0__::func_970(PLAYER::PLAYER_ID()) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 256)
			{
				Local_122.f_180 = 1;
				StringCopy(&(Local_122.f_170), "ANAUD", 16);
				StringCopy(&(Local_122.f_174), "LES_APH2", 16);
				MISC::SET_BIT(&(Local_122.f_359), 16);
			}
			else
			{
				Local_122.f_180 = 3;
				StringCopy(&(Local_122.f_170), "CT_AUD", 16);
				StringCopy(&(Local_122.f_174), "MPCT_0", 16);
				MISC::CLEAR_BIT(&(Local_122.f_359), 16);
			}
			break;
		case 19:
			Local_122.f_0 = 19;
			StringCopy(&(Local_122.f_166), "LAMAR", 16);
			Local_122.f_180 = 3;
			StringCopy(&(Local_122.f_170), "CT_AUD", 16);
			Local_122.f_178 = 5;
			if (!func_1068(0))
			{
				MISC::SET_BIT(&bLocal_169, 2);
			}
			if (__LIB_23__::func_529(0) || Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_773 == 0)
			{
				StringCopy(&(Local_122.f_174), "MPCT_6", 16);
				MISC::SET_BIT(&(Local_122.f_359), 9);
			}
			else
			{
				if (__LIB_1__::func_394())
				{
					StringCopy(&(Local_122.f_174), "MPCT_LMansF", 16);
				}
				else
				{
					StringCopy(&(Local_122.f_174), "MPCT_1", 16);
				}
				MISC::CLEAR_BIT(&(Local_122.f_359), 9);
			}
			break;
		case 85:
			Local_122.f_0 = 85;
			StringCopy(&(Local_122.f_166), "FM_MERRYWEATHER", 16);
			Local_122.f_180 = 3;
			StringCopy(&(Local_122.f_170), "CT_AUD", 16);
			Local_122.f_178 = 4;
			if (__LIB_23__::func_529(1) || Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_773 == 1)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				switch (iVar0)
				{
					case 0:
						StringCopy(&(Local_122.f_174), "MPCT_21", 16);
						break;
					case 1:
						StringCopy(&(Local_122.f_174), "MPCT_21b", 16);
						break;
					case 2:
						StringCopy(&(Local_122.f_174), "MPCT_21c", 16);
						break;
					case 3:
						StringCopy(&(Local_122.f_174), "MPCT_21d", 16);
						break;
					default:
						break;
				}
				MISC::SET_BIT(&(Local_122.f_359), 9);
			}
			else
			{
				StringCopy(&(Local_122.f_174), "MPCT_2", 16);
				MISC::CLEAR_BIT(&(Local_122.f_359), 9);
			}
			break;
		case 84:
			Local_122.f_0 = 84;
			StringCopy(&(Local_122.f_166), "BRUCIE", 16);
			Local_122.f_180 = 3;
			StringCopy(&(Local_122.f_170), "CT_AUD", 16);
			StringCopy(&(Local_122.f_174), "MPCT_3", 16);
			Local_122.f_178 = 7;
			func_1461(&(Local_122.f_351));
			MISC::SET_BIT(&bLocal_169, 2);
			break;
		case 82:
			Local_122.f_0 = 82;
			StringCopy(&(Local_122.f_166), "BOSSAGENCY", 16);
			Local_122.f_180 = 2;
			StringCopy(&(Local_122.f_170), "BACALAU", 16);
			func_1445(1);
			MISC::SET_BIT(&(Local_122.f_359), 16);
			StringCopy(&(Local_122.f_174), "BACAL_ANSWER", 16);
			if (!BitTest(Local_122.f_359, 9) && !BitTest(Local_122.f_359, 16))
			{
				StringCopy(&(Local_122.f_174), "BACAL_HELLO", 16);
				Local_122.f_178 = 18;
				func_1461(&(Local_122.f_351));
				MISC::SET_BIT(&bLocal_169, 2);
			}
			break;
		case 79:
			Local_122.f_0 = 79;
			StringCopy(&(Local_122.f_166), "YACHTCAPTAIN", 16);
			Local_122.f_180 = 2;
			StringCopy(&(Local_122.f_170), "APCALAU", 16);
			Local_122.f_178 = 19;
			if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true))
			{
				if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == joaat("YachtRm_Bridge"))
				{
					iVar1 = 1;
				}
			}
			if (__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0) || iVar1)
			{
				MISC::SET_BIT(&(Local_122.f_359), 16);
			}
			func_1445(1);
			if (!BitTest(Local_122.f_359, 9) && !BitTest(Local_122.f_359, 16))
			{
				StringCopy(&(Local_122.f_174), "APCAL_GENPG", 16);
			}
			else
			{
				StringCopy(&(Local_122.f_174), "APCAL_GEBUS", 16);
			}
			func_1461(&(Local_122.f_351));
			break;
		case 75:
		case 74:
			Local_122.f_0 = Param0.f_1;
			if (Local_122.f_0 == 75)
			{
				StringCopy(&(Local_122.f_166), "EXECPA_MALE", 16);
				Local_122.f_180 = 3;
			}
			else
			{
				StringCopy(&(Local_122.f_166), "EXECPA_FEMALE", 16);
				Local_122.f_180 = 2;
			}
			StringCopy(&(Local_122.f_170), "EXCALAU", 16);
			Local_122.f_178 = 20;
			if (((__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0) || __LIB_1__::func_864(PLAYER::PLAYER_ID())) || __LIB_1__::func_520(0)) || (__LIB_15__::func_273(PLAYER::PLAYER_ID()) != 0 && __LIB_15__::func_273(PLAYER::PLAYER_ID()) != -1))
			{
				MISC::SET_BIT(&(Local_122.f_359), 16);
			}
			if ((((Global_2815059.f_933 || Global_2815059.f_945) || Global_2815059.f_921) || Global_2815059.f_925) || Global_2815059.f_913)
			{
				MISC::SET_BIT(&(Local_122.f_359), 16);
			}
			func_1445(1);
			if (!BitTest(Local_122.f_359, 9) && !BitTest(Local_122.f_359, 16))
			{
				if (Local_122.f_0 == 75)
				{
					StringCopy(&(Local_122.f_174), "EXCAL_GREETM", 16);
				}
				else
				{
					StringCopy(&(Local_122.f_174), "EXCAL_GREETF", 16);
				}
			}
			else if (Local_122.f_0 == 75)
			{
				StringCopy(&(Local_122.f_174), "EXCAL_BUSYM", 16);
			}
			else
			{
				StringCopy(&(Local_122.f_174), "EXCAL_BUSYF", 16);
			}
			func_1461(&(Local_122.f_351));
			break;
		case 89:
			Local_122.f_0 = 89;
			StringCopy(&(Local_122.f_166), "MECHANIC", 16);
			StringCopy(&(Local_122.f_170), "CT_AUD", 16);
			Local_122.f_180 = 3;
			Local_122.f_178 = 9;
			func_187(&iVar3, &iVar2);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			}
			if (__LIB_11__::func_705())
			{
				StringCopy(&(Local_122.f_174), "MPCT_MCGEN2", 16);
			}
			else if (iVar3 == 0)
			{
				StringCopy(&(Local_122.f_174), "MPCT_MCGEN2", 16);
			}
			else if (iVar2 == 0)
			{
				StringCopy(&(Local_122.f_174), "MPCT_NoVeh", 16);
			}
			else if ((!func_1263(Var4) || func_439(Var4, 0)) && !__LIB_2__::func_904(PLAYER::PLAYER_ID()))
			{
				StringCopy(&(Local_122.f_174), "MPCT_11", 16);
			}
			else
			{
				StringCopy(&(Local_122.f_174), "MPCT_10", 16);
				iVar5 = 1;
			}
			func_1461(&(Local_122.f_351));
			if (iVar5 == 0)
			{
				MISC::SET_BIT(&(Local_122.f_359), 16);
			}
			break;
		case 41:
			Local_122.f_0 = 41;
			StringCopy(&(Local_122.f_166), "PEGASUS", 16);
			Local_122.f_178 = 10;
			iLocal_163 = 0;
			iLocal_160 = -1;
			iLocal_161 = 0;
			if (__LIB_1__::func_728(PLAYER::PLAYER_ID()))
			{
				StringCopy(&(Local_122.f_170), "ANAUD", 16);
				Local_122.f_180 = 1;
				StringCopy(&(Local_122.f_174), "ANS_PGbusy", 16);
				MISC::SET_BIT(&(Local_122.f_359), 16);
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 16);
			}
			if (!BitTest(Local_122.f_359, 16) && !BitTest(Local_122.f_359, 9))
			{
				StringCopy(&(Local_122.f_174), "MPCT_12", 16);
				StringCopy(&(Local_122.f_170), "CT_AUD", 16);
				Local_122.f_180 = 3;
			}
			__LIB_1__::func_392(93, 1);
			break;
		case 91:
			Local_122.f_0 = 91;
			StringCopy(&(Local_122.f_166), "MorsMutual", 16);
			StringCopy(&(Local_122.f_170), "CT_AUD", 16);
			Local_122.f_180 = 1;
			StringCopy(&(Local_122.f_174), "MPCT_INS0", 16);
			Local_122.f_178 = 11;
			break;
		case 18:
			Local_122.f_0 = 18;
			StringCopy(&(Local_122.f_166), "SIMEON", 16);
			Local_122.f_180 = 3;
			StringCopy(&(Local_122.f_170), "CT_AUD", 16);
			StringCopy(&(Local_122.f_174), "MPCT_SIME", 16);
			Local_122.f_178 = 12;
			MISC::SET_BIT(&bLocal_169, 2);
			break;
		case 31:
			Local_122.f_0 = 31;
			StringCopy(&(Local_122.f_166), "Martin", 16);
			Local_122.f_180 = 3;
			StringCopy(&(Local_122.f_170), "CT_AUD", 16);
			StringCopy(&(Local_122.f_174), "MPCT_MART", 16);
			Local_122.f_178 = 13;
			MISC::SET_BIT(&bLocal_169, 2);
			func_1461(&(Local_122.f_351));
			break;
		case 86:
			Local_122.f_0 = 86;
			StringCopy(&(Local_122.f_166), "GERALD", 16);
			Local_122.f_180 = 3;
			StringCopy(&(Local_122.f_170), "CT_AUD", 16);
			StringCopy(&(Local_122.f_174), "MPCT_GER", 16);
			Local_122.f_178 = 14;
			MISC::SET_BIT(&bLocal_169, 2);
			func_1461(&(Local_122.f_351));
			break;
		case 20:
			Local_122.f_0 = 20;
			StringCopy(&(Local_122.f_166), "NervousRon", 16);
			Local_122.f_180 = 2;
			StringCopy(&(Local_122.f_170), "CT_AUD", 16);
			StringCopy(&(Local_122.f_174), "MPCT_RON" /* GXT: RON */, 16);
			Local_122.f_178 = 15;
			MISC::SET_BIT(&bLocal_169, 2);
			func_1461(&(Local_122.f_351));
			break;
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			iLocal_168 = func_1458(Param0.f_1);
			Local_122.f_0 = Param0.f_1;
			StringCopy(&(Local_122.f_166), __LIB_15__::func_280(iLocal_168), 16);
			Local_122.f_180 = 1;
			StringCopy(&(Local_122.f_170), "CT_AUD", 16);
			StringCopy(&(Local_122.f_174), "MPCT_MORE_", 16);
			StringIntConCat(&(Local_122.f_174), iLocal_168, 16);
			Local_122.f_178 = 16;
			func_1461(&(Local_122.f_351));
			break;
		case 157:
			Local_122.f_0 = 157;
			StringCopy(&(Local_122.f_166), "CAS_AGATHA", 16);
			Local_122.f_180 = 2;
			StringCopy(&(Local_122.f_170), "CAGTAU", 16);
			Local_122.f_178 = 23;
			StringCopy(&(Local_122.f_174), "CAGT_PM_1", 16);
			MISC::SET_BIT(&bLocal_169, 2);
			func_1445(1);
			func_1461(&(Local_122.f_351));
			break;
		case 169:
			Local_122.f_0 = 169;
			StringCopy(&(Local_122.f_166), "HS4_PAVEL", 16);
			Local_122.f_180 = 2;
			StringCopy(&(Local_122.f_170), "HS4PAAU", 16);
			Local_122.f_178 = 25;
			StringCopy(&(Local_122.f_174), "HS4PA_PCR_1", 16);
			MISC::SET_BIT(&bLocal_169, 2);
			func_1445(1);
			func_1461(&(Local_122.f_351));
			break;
		case 172:
			Local_122.f_0 = 172;
			StringCopy(&(Local_122.f_166), "TUN_SESSANTA", 16);
			Local_122.f_180 = 2;
			StringCopy(&(Local_122.f_170), "TNSSAUD", 16);
			Local_122.f_178 = 26;
			StringCopy(&(Local_122.f_174), "TNSS_PC_AN1", 16);
			MISC::SET_BIT(&bLocal_169, 2);
			func_1445(1);
			func_1461(&(Local_122.f_351));
			break;
		case 175:
			Local_122.f_0 = 175;
			StringCopy(&(Local_122.f_166), "FIX_FRANKLIN", 16);
			Local_122.f_180 = 2;
			StringCopy(&(Local_122.f_170), "FXFRAUD", 16);
			Local_122.f_178 = 28;
			StringCopy(&(Local_122.f_174), "FXFR_PM_1", 16);
			func_1445(1);
			func_1461(&(Local_122.f_351));
			break;
		case 176:
			Local_122.f_0 = 176;
			StringCopy(&(Local_122.f_166), "FIX_IMANI", 16);
			Local_122.f_180 = 2;
			StringCopy(&(Local_122.f_170), "FXIMAUD", 16);
			Local_122.f_178 = 27;
			StringCopy(&(Local_122.f_174), "FXIM_PM_1A", 16);
			func_1445(1);
			func_1461(&(Local_122.f_351));
			break;
		case 151:
			Local_122.f_0 = 151;
			StringCopy(&(Local_122.f_166), "BTL_TONY", 16);
			Local_122.f_180 = 2;
			StringCopy(&(Local_122.f_170), "SM2TOAU", 16);
			Local_122.f_178 = 29;
			StringCopy(&(Local_122.f_174), "SM2TO_PC_1A", 16);
			func_1445(1);
			func_1461(&(Local_122.f_351));
			break;
		case 76:
			Local_122.f_0 = 76;
			StringCopy(&(Local_122.f_166), "AGENT14" /* GXT: Agent 14 */, 16);
			Local_122.f_180 = 2;
			StringCopy(&(Local_122.f_170), "SM2AGAU", 16);
			Local_122.f_178 = 30;
			StringCopy(&(Local_122.f_174), "SM2AG_PC_1A", 16);
			func_1445(1);
			func_1461(&(Local_122.f_351));
			break;
		case 181:
			Local_122.f_0 = 181;
			StringCopy(&(Local_122.f_166), "BTL_YOHAN", 16);
			Local_122.f_180 = 2;
			StringCopy(&(Local_122.f_170), "SM2YOAU", 16);
			Local_122.f_178 = 31;
			StringCopy(&(Local_122.f_174), "SM2YO_PC_1A", 16);
			func_1445(1);
			func_1461(&(Local_122.f_351));
			break;
	}
}

int func_1458(int iParam0)//Position - 0x5C04D
{
	switch (iParam0)
	{
		case 104:
			return 0;
			break;
		case 105:
			return 1;
			break;
		case 106:
			return 2;
			break;
		case 107:
			return 3;
			break;
		case 108:
			return 4;
			break;
		case 109:
			return 5;
			break;
		case 110:
			return 6;
			break;
		case 111:
			return 7;
			break;
		case 112:
			return 8;
			break;
		case 93:
			return 9;
			break;
	}
	return 0;
}

void func_1461(int* iParam0)//Position - 0x5C129
{
	if (!BitTest(*iParam0, 0))
	{
		MISC::SET_BIT(iParam0, 0);
	}
}

void func_1463()//Position - 0x5C15B
{
	int iVar0;
	Global_1922952 = 0;
	Global_1922953 = 0;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (Global_2715699.f_4316.f_781)
	{
		iVar0 = 0;
		while (iVar0 < 77)
		{
			__LIB_0__::clearF_1Prop(&(Global_2715699.f_4316.f_233[iVar0 /*2*/]));
			__LIB_0__::clearF_1Prop(&(Global_2779939[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*233*/][iVar0 /*2*/]));
			iVar0++;
		}
		Global_2715699.f_4316.f_781 = 0;
	}
}

