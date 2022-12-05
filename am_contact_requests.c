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
		__LIB_0__.func_671();
		if (__LIB_6__.func_949())
		{
			func_1444();
		}
		if (__LIB_6__.func_948(PLAYER::PLAYER_ID()))
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
		switch (__LIB_9__.func_500())
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
					if (!__LIB_0__.func_649(&uLocal_173))
					{
						__LIB_0__.func_580(&uLocal_173, 0, 0);
					}
					if (!__LIB_2__.func_47(&uLocal_173, 500, 0))
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
				__LIB_9__.func_621();
				break;
			case 4:
				if (bLocal_125)
				{
					if (!__LIB_2__.func_47(&uLocal_173, 500, 0))
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
					if (!__LIB_0__.func_75())
					{
						Global_2703735.f_833.f_11 = 1;
						func_1444();
					}
				}
				else if (!__LIB_0__.func_75())
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_166.f_0) && !MISC::IS_STRING_NULL_OR_EMPTY(Local_166.f_1))
					{
						func_1(Local_122.f_1, Local_166.f_0, Local_166.f_1, &Local_166, BitTest(Local_122.f_359, 19));
					}
					Local_166.f_2 = 0;
				}
				else if (__LIB_2__.func_47(&(Local_166.f_4), 8000, 0))
				{
					Local_166.f_2 = 0;
				}
				break;
		}
	}
}

int func_1(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, char[4] cParam165, char* sParam166, var uParam167, bool bParam168)//Position - 0x2C3
{
	if (!__LIB_0__.func_75())
	{
		*uParam167 = "";
		uParam167->f_1 = "";
		uParam167->f_2 = 0;
		if (!bParam168)
		{
			return __LIB_35__.func_552(&uParam0, cParam165, sParam166, 12, 0, 0, 0);
		}
		else
		{
			return __LIB_35__.func_536(&uParam0, cParam165, sParam166, 12, 0, 0, 0);
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
			if (__LIB_6__.func_925())
			{
				func_1(Param0, "CT_AUD", "MPCT_VhangF", uParam2, 0);
			}
			else
			{
				func_1(Param0, "CT_AUD", "MPCT_VhangM", uParam2, 0);
			}
			break;
		case 70:
			if (__LIB_6__.func_925())
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

void func_31()//Position - 0xF8A
{
	int iVar0;
	int iVar1;
	if (BitTest(uLocal_196, 3))
	{
		if (__LIB_2__.func_47(&uLocal_197, 10000, 0))
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
			else if (func_34(172, "TUN_CBL_FEED" /* GXT: Here's the list of Exotic Exports vehicles you're looking for: */, 1, "NULL", iVar0, "", 12, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0))
			{
			}
			__LIB_0__.func_579(&uLocal_197);
			MISC::CLEAR_BIT(&uLocal_196, 3);
			func_32(4);
		}
	}
}

void func_32(int iParam0)//Position - 0xFFF
{
	iLocal_123 = iParam0;
}

int func_34(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x1019
{
	int iVar0;
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		case 1:
			sParam16 = "NULL";
			break;
		case 2:
			break;
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_8136, 10);
	iVar0 = 3;
	if (__LIB_7__.func_113(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8843 = iParam10;
			Global_8746[3 /*6*/] = { __LIB_0__.func_165(iParam0) };
			Global_8823 = iParam0;
			StringCopy(&Global_8824, sParam5, 64);
			MISC::SET_BIT(&Global_8136, 1);
			MISC::SET_BIT(&Global_8136, 7);
		}
		return 1;
	}
	return 0;
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
		iVar1 = __LIB_4__.func_616(iVar0);
		if (iVar1 != 0)
		{
			if (__LIB_18__.func_779(iParam0, iVar1))
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

void func_59()//Position - 0x22C5
{
	int iVar0;
	struct<16> Var1;
	if (__LIB_0__.func_154(Local_122.f_358, 0, 1))
	{
		__LIB_1__.func_193(0, 0);
		__LIB_1__.func_319("STRING");
		StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(Local_122.f_358), 64);
		func_79(Var1);
		__LIB_1__.func_318(1, 1, 0, 0, 0);
		__LIB_1__.func_317(1, 2, 1, 1, 1);
		__LIB_9__.func_341(0, 1, 0, 0, 0);
		Local_122.f_181.f_2 = 1;
		Local_122.f_181.f_69 = 1;
		__LIB_18__.func_477(iVar0, "GC_MENU8" /* GXT: Sending request... */, 0, 1, 0, 0, 0);
		__LIB_4__.func_222(-1);
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
	if (__LIB_7__.func_161(0, -1, 0))
	{
		if (!BitTest(Local_122.f_359, 4))
		{
			func_95();
			MISC::SET_BIT(&(Local_122.f_359), 4);
		}
	}
	if (func_91(0))
	{
		if (__LIB_2__.func_318(0))
		{
			iLocal_128 = func_86(2);
			func_1(Local_122.f_1, "CT_AUD", "MPCT_mugTar", &Local_166, 0);
			func_32(4);
		}
	}
}

int func_86(int iParam0)//Position - 0x3D09
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_19__.func_759(iParam0) >= 0)
	{
		iVar0 = __LIB_19__.func_759(iParam0);
	}
	else
	{
		iVar0 = __LIB_9__.func_506(iParam0);
	}
	return iVar0;
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
					if (__LIB_9__.func_500() != 2)
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
					if (__LIB_9__.func_500() != 2)
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
		Local_144 = { __LIB_6__.func_93(iParam1, 0, 0) };
	}
	__LIB_0__.func_495(&uLocal_145, 0, 0);
	MISC::SET_BIT(&iLocal_142, iParam0);
}

void func_95()//Position - 0x4690
{
	int iVar0;
	struct<16> Var1;
	if (__LIB_0__.func_154(Local_122.f_358, 0, 1))
	{
		__LIB_1__.func_193(0, 0);
		__LIB_1__.func_319("STRING");
		StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(Local_122.f_358), 64);
		func_79(Var1);
		__LIB_1__.func_318(1, 1, 0, 0, 0);
		__LIB_1__.func_317(1, 2, 1, 1, 1);
		__LIB_9__.func_341(0, 1, 0, 0, 0);
		Local_122.f_181.f_2 = 1;
		Local_122.f_181.f_69 = 1;
		__LIB_18__.func_477(iVar0, "GC_MENU8" /* GXT: Sending request... */, 0, 1, 0, 0, 0);
		__LIB_4__.func_222(-1);
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
	if (__LIB_7__.func_161(0, -1, 0))
	{
		if (!BitTest(Local_122.f_359, 4))
		{
			func_116();
			MISC::SET_BIT(&(Local_122.f_359), 4);
		}
	}
	if (Global_2689235[iVar0 /*453*/].f_212 != -1 && __LIB_0__.func_154(PLAYER::INT_TO_PLAYERINDEX(Global_2689235[iVar0 /*453*/].f_212), 0, 1))
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
			__LIB_1__.func_226(Var3, __LIB_6__.func_900(1, 1));
			if (!__LIB_1__.func_563(91, -1))
			{
				__LIB_9__.func_267(91, 1, -1, 1);
			}
			Var4 = { __LIB_0__.func_604(Var3.f_10) };
			if (__LIB_0__.func_112())
			{
				func_99(joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"), iLocal_128, &iVar1, 0, 0, 0);
				Global_4534105[iVar1 /*85*/].f_14 = { Var4 };
			}
			else
			{
				MONEY::NETWORK_SPENT_BUY_WANTEDLEVEL(iLocal_128, &Var4, false, false, joaat("char_lester"));
				__LIB_1__.func_611(-iLocal_128, 1, 1, 0f);
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
	if (!__LIB_0__.func_112())
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
	if (!__LIB_0__.func_112())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(__LIB_0__.func_5()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
			*iParam0 = __LIB_18__.func_241(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			__LIB_0__.func_677(1, iParam4);
			Global_4535606 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			__LIB_24__.func_952(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_116()//Position - 0x5862
{
	int iVar0;
	struct<16> Var1;
	if (__LIB_0__.func_154(Local_122.f_358, 0, 1))
	{
		__LIB_1__.func_193(0, 0);
		__LIB_1__.func_319("STRING");
		StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(Local_122.f_358), 64);
		func_79(Var1);
		__LIB_1__.func_318(1, 1, 0, 0, 0);
		__LIB_1__.func_317(1, 2, 1, 1, 1);
		__LIB_9__.func_341(0, 1, 0, 0, 0);
		Local_122.f_181.f_2 = 1;
		Local_122.f_181.f_69 = 1;
		__LIB_18__.func_477(iVar0, "GC_MENU8" /* GXT: Sending request... */, 0, 1, 0, 0, 0);
		__LIB_4__.func_222(-1);
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
	__LIB_1__.func_304();
	__LIB_0__.func_186();
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
		__LIB_0__.func_660(1);
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
			__LIB_19__.func_159(0, 31, 4);
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
	if (__LIB_9__.func_500() == 1)
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
				__LIB_7__.func_32();
				break;
			case 86:
				__LIB_7__.func_31();
				break;
			case 20:
				__LIB_7__.func_30();
				break;
			case 104:
			case 105:
			case 106:
			case 107:
			case 108:
			case 109:
			case 110:
			case 111:
				__LIB_7__.func_29();
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
				__LIB_8__.func_144();
				break;
			case 169:
				__LIB_2__.func_353();
				break;
			case 172:
				func_506();
				break;
			case 176:
				__LIB_2__.func_46();
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
	if (__LIB_7__.func_161(0, -1, 1))
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
	if (__LIB_7__.func_305(Local_122.f_181.f_69))
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				__LIB_1__.func_342("YOHN_OP1_D" /* GXT: Request Nightclub Goods.~n~Current Stock Level: ~1~%~n~Current Stock Value: $~1~ */, 0, 0);
				__LIB_4__.func_999(func_359());
				__LIB_4__.func_999(func_352(PLAYER::PLAYER_ID()));
				break;
		}
	}
	else
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				if (!__LIB_8__.func_996())
				{
					__LIB_1__.func_342("YOHN_OP1_D1" /* GXT: Unavailable. Complete the Nightclub setup to start Nightclub Goods. */, 0, 0);
				}
				else if (func_359() >= 100)
				{
					__LIB_1__.func_342("YOHN_OP1_D2" /* GXT: Unavailable. Your Nightclub Basement is already full. */, 0, 0);
				}
				else if (func_347())
				{
					Local_144 = { __LIB_6__.func_93(func_345(), 0, 0) };
					__LIB_1__.func_342("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
					__LIB_5__.func_724(&Local_144);
				}
				else
				{
					__LIB_1__.func_342("YOHN_NA" /* GXT: This request is not currently available. */, 100, 0);
				}
				break;
			default:
				__LIB_1__.func_342("YOHN_NA" /* GXT: This request is not currently available. */, 100, 0);
				break;
			}
	}
	func_123();
}

void func_123()//Position - 0x5DC5
{
	func_148();
	__LIB_25__.func_745(1, -1, 1, BitTest(bLocal_169, 2), 1, -1082130432, 0, 0, -1);
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
						if (__LIB_25__.func_218(29, 0, 0))
						{
							if (!func_309(1))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(1))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_DES_BNTY" /* GXT: Choose a player to place a Bounty on or view their current Bounty value. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
							__LIB_4__.func_999(func_275(29));
						}
						if (__LIB_4__.func_679(1))
						{
							__LIB_9__.func_27("MPCT_LESTDIS" /* GXT: Lester is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 1:
						if (__LIB_25__.func_218(65, 0, 0))
						{
							if (!func_309(20))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(20))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_LOSE_WANT" /* GXT: Clear your Wanted Level. Get out of sight of the Cops first. */, 100, 0);
							}
						}
						else
						{
							iVar1 = __LIB_0__.func_846(PLAYER::PLAYER_ID());
							if (iVar1 < func_275(65))
							{
								__LIB_1__.func_342("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
								__LIB_4__.func_999(func_275(65));
							}
							else
							{
								__LIB_1__.func_342("MPCT_WLEST" /* GXT: Wait for Lester to contact you. */, 100, 0);
							}
						}
						if (__LIB_4__.func_679(20))
						{
							__LIB_9__.func_27("MPCT_LESTDIS" /* GXT: Lester is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 2:
						if (__LIB_25__.func_218(75, 0, 0))
						{
							if (!func_309(6))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(6))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_OTR" /* GXT: Hide yourself from other players on the Radar for 1 minute. */, 100, 0);
							}
						}
						else
						{
							iVar1 = __LIB_0__.func_846(PLAYER::PLAYER_ID());
							if (iVar1 < func_275(75))
							{
								__LIB_1__.func_342("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
								__LIB_4__.func_999(func_275(75));
							}
							else
							{
								__LIB_1__.func_342("MPCT_WLEST" /* GXT: Wait for Lester to contact you. */, 100, 0);
							}
						}
						if (__LIB_4__.func_679(6))
						{
							__LIB_9__.func_27("MPCT_LESTDIS" /* GXT: Lester is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 3:
						if (__LIB_25__.func_218(95, 0, 0))
						{
							if (!func_309(14))
							{
								__LIB_1__.func_342("MPCT_RVLPL" /* GXT: Available on Jobs where player blips are off by default. */, 100, 0);
							}
							else if (!func_279(14))
							{
								__LIB_1__.func_342("MPCT_RVLPL" /* GXT: Available on Jobs where player blips are off by default. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_RE" /* GXT: Reveal other players on the Radar for 1 minute. */, 100, 0);
							}
						}
						else
						{
							iVar1 = __LIB_0__.func_846(PLAYER::PLAYER_ID());
							if (iVar1 < func_275(95))
							{
								__LIB_1__.func_342("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
								__LIB_4__.func_999(func_275(95));
							}
							else
							{
								__LIB_1__.func_342("MPCT_WLEST" /* GXT: Wait for Lester to contact you. */, 100, 0);
							}
						}
						if (__LIB_4__.func_679(14))
						{
							__LIB_9__.func_27("MPCT_LESTDIS" /* GXT: Lester is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 4:
						if (__LIB_25__.func_218(88, 0, 0))
						{
							if (!func_309(15))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(15))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_LJOB" /* GXT: Request an invite to a previously completed Job. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("MPCT_RQJL" /* GXT: This item unlocks when Lester has a Job available. */, 100, 0);
						}
						break;
					case 10:
						if (__LIB_25__.func_218(121, 0, 0))
						{
							if (!func_309(36))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(36))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else if (__LIB_2__.func_324())
							{
								__LIB_1__.func_342("MPCT_RQHU" /* GXT: Unavailable: a Heist is currently active. */, 100, 0);
							}
							else if (__LIB_1__.func_155(PLAYER::PLAYER_ID(), 0, 0) && func_255())
							{
								__LIB_1__.func_342("MPCT_RQAPT" /* GXT: Unavailable: Access the Planning Board to replay a Heist when in an Apartment. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_HJOB" /* GXT: Request a replay of a Heist. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("MPCT_RQHL" /* GXT: This item unlocks when Lester has a Heist available for replay. */, 100, 0);
						}
						break;
					case 11:
						if (__LIB_25__.func_218(96, 0, 0))
						{
							if (__LIB_2__.func_324())
							{
								if (!func_309(37))
								{
									__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
								}
								else if (!func_279(37))
								{
									__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
								}
								else
								{
									__LIB_1__.func_342("MPCT_CNCL" /* GXT: Cancel the currently active Heist. */, 100, 0);
								}
							}
							else
							{
								__LIB_1__.func_342("MPCT_CNCLH" /* GXT: This item is available when there is a currently active Heist. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("MPCT_RQHL" /* GXT: This item unlocks when Lester has a Heist available for replay. */, 100, 0);
						}
						break;
					case 12:
						if (__LIB_6__.func_143(PLAYER::PLAYER_ID()))
						{
							if (__LIB_8__.func_678(PLAYER::PLAYER_ID(), 0) == -1)
							{
								__LIB_1__.func_342("HPPHONE_REPLAYH", 100, 0);
							}
							else
							{
								__LIB_1__.func_342("HPPHONE_UNAV2", 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("HPPHONE_UNAV1" /* GXT: This item unlocks when Lester has an act of The Doomsday Heist available for replay. */, 100, 0);
						}
						break;
					case 13:
						if (__LIB_6__.func_143(PLAYER::PLAYER_ID()))
						{
							if (__LIB_8__.func_678(PLAYER::PLAYER_ID(), 0) != -1)
							{
								__LIB_1__.func_342("HPPHONE_CANCELH" /* GXT: Cancel the currently active act of The Doomsday Heist. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("HPPHONE_UNAV3" /* GXT: Unavailable: The Doomsday Heist is not currently active. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("HPPHONE_UNAV1" /* GXT: This item unlocks when Lester has an act of The Doomsday Heist available for replay. */, 100, 0);
						}
						break;
					case 15:
						if ((__LIB_3__.func_684(PLAYER::PLAYER_ID(), 1) && __LIB_3__.func_684(PLAYER::PLAYER_ID(), 2)) && __LIB_3__.func_684(PLAYER::PLAYER_ID(), 3))
						{
							if (!__LIB_2__.func_179(PLAYER::PLAYER_ID()))
							{
								__LIB_1__.func_342("CSH_LPHONE_UNAV2" /* GXT: Unavailable: The Diamond Casino Heist is not currently active. */, 100, 0);
							}
							else if (__LIB_2__.func_331(PLAYER::PLAYER_ID()))
							{
								__LIB_1__.func_342("CSH_LPHONE_UNAV3" /* GXT: Unavailable: Can't cancel The Diamond Casino Heist while in the Arcade. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("CSH_LPHONE_TIP1" /* GXT: Cancel your current progress on The Diamond Casino Heist. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("CSH_LPHONE_UNAV1" /* GXT: This item unlocks when you have completed the main approaches to The Diamond Casino Heist. */, 100, 0);
						}
						break;
					case 5:
						if (__LIB_25__.func_218(104, 0, 0))
						{
							if (!func_309(23))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(23))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_LCBT" /* GXT: Locate a boat and display it on the Map. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
							__LIB_4__.func_999(func_275(104));
						}
						if (__LIB_4__.func_679(23))
						{
							__LIB_9__.func_27("MPCT_LESTDIS" /* GXT: Lester is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 6:
						if (__LIB_25__.func_218(98, 0, 0))
						{
							if (!func_309(24))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(24))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_LCHL" /* GXT: Locate a helicopter and display it on the Map. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
							__LIB_4__.func_999(func_275(98));
						}
						if (__LIB_4__.func_679(24))
						{
							__LIB_9__.func_27("MPCT_LESTDIS" /* GXT: Lester is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 7:
						if (__LIB_25__.func_218(103, 0, 0))
						{
							if (!func_309(25))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(25))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_LCCR" /* GXT: Locate a car and display it on the Map. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
							__LIB_4__.func_999(func_275(103));
						}
						if (__LIB_4__.func_679(25))
						{
							__LIB_9__.func_27("MPCT_LESTDIS" /* GXT: Lester is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 8:
						if (__LIB_25__.func_218(105, 0, 0))
						{
							if (!func_309(26))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(26))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_LCPL" /* GXT: Locate a plane and display it on the Map. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
							__LIB_4__.func_999(func_275(105));
						}
						if (__LIB_4__.func_679(26))
						{
							__LIB_9__.func_27("MPCT_LESTDIS" /* GXT: Lester is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 14:
						if (__LIB_25__.func_218(98, 0, 0))
						{
							if (!func_309(57))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(57))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_LCHL" /* GXT: Locate a helicopter and display it on the Map. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
							__LIB_4__.func_999(func_275(98));
						}
						if (__LIB_4__.func_679(57))
						{
							__LIB_9__.func_27("MPCT_LESTDIS" /* GXT: Lester is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 9:
						if (__LIB_25__.func_218(119, 0, 0))
						{
							if (!func_309(35))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(35))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else if (__LIB_9__.func_30())
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (__LIB_6__.func_959())
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_NCPS" /* GXT: Cops will ignore any crimes you commit for a short period of time. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
							__LIB_4__.func_999(func_275(119));
						}
						if (__LIB_4__.func_679(35))
						{
							__LIB_9__.func_27("MPCT_LESTDIS" /* GXT: Lester is currently offering a discount on this service. */, 100, 0);
						}
						break;
				}
				break;
			case 5:
				if (__LIB_9__.func_500() == 1)
				{
					switch (Local_122.f_181.f_70[Local_122.f_181.f_69])
					{
						case 0:
							if (__LIB_25__.func_218(67, 0, 0))
							{
								if (!func_309(2))
								{
									__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
								}
								else if (!func_279(2))
								{
									__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
								}
								else
								{
									__LIB_1__.func_342("MPCT_THIEF" /* GXT: Choose a player to be targeted by a Mugger who will steal a portion of their cash. */, 100, 0);
								}
							}
							else
							{
								iVar1 = __LIB_0__.func_846(PLAYER::PLAYER_ID());
								if (iVar1 < func_275(67))
								{
									__LIB_1__.func_342("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
									__LIB_4__.func_999(func_275(67));
								}
								else
								{
									__LIB_1__.func_342("MPCT_WLAM" /* GXT: Wait for Lamar to contact you. */, 100, 0);
								}
							}
							if (__LIB_4__.func_679(2))
							{
								__LIB_9__.func_27("MPCT_LAMADIS" /* GXT: Lamar is currently offering a discount on this service. */, 100, 0);
							}
							break;
						case 1:
							if (!func_309(38))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(38))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("FM_LAMC_FRD" /* GXT: Restart Lamar's missions from the beginning. */, 100, 0);
							}
							break;
						case 2:
							__LIB_1__.func_342("MPCT_EXIT" /* GXT: Close down the menu. */, 100, 0);
							break;
						}
				}
				break;
			case 4:
				switch (Local_122.f_181.f_70[Local_122.f_181.f_69])
				{
					case 5:
						if (__LIB_25__.func_218(64, 0, 0))
						{
							if (!func_309(11) || BitTest(Global_44241, 10))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(11))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_AIRSTRIKE" /* GXT: Request an Airstrike at a selected position. */, 100, 0);
							}
						}
						else
						{
							iVar1 = __LIB_0__.func_846(PLAYER::PLAYER_ID());
							if (iVar1 < func_275(64))
							{
								__LIB_1__.func_342("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
								__LIB_4__.func_999(func_275(64));
							}
							else
							{
								__LIB_1__.func_342("MPCT_WMERRY" /* GXT: Wait for Merryweather to contact you. */, 100, 0);
							}
						}
						if (__LIB_4__.func_679(11))
						{
							__LIB_9__.func_27("MPCT_MERRYDIS" /* GXT: Merryweather are currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 0:
						if (__LIB_25__.func_218(61, 0, 0))
						{
							if (!func_309(8))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(8))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_AMMO" /* GXT: Request an ammo crate to be dropped at your GPS location. Be sure you are in a secluded location to stop other players stealing it. */, 100, 0);
							}
						}
						else
						{
							iVar1 = __LIB_0__.func_846(PLAYER::PLAYER_ID());
							if (iVar1 < func_275(61))
							{
								__LIB_1__.func_342("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
								__LIB_4__.func_999(func_275(61));
							}
							else
							{
								__LIB_1__.func_342("MPCT_WMERRY" /* GXT: Wait for Merryweather to contact you. */, 100, 0);
							}
						}
						if (__LIB_4__.func_679(8))
						{
							__LIB_9__.func_27("MPCT_MERRYDIS" /* GXT: Merryweather are currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 1:
						if (__LIB_25__.func_218(62, 0, 0))
						{
							if (!func_309(10))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(10))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_BACK_HELI" /* GXT: Request a helicopter to provide covering fire. */, 100, 0);
							}
						}
						else
						{
							iVar1 = __LIB_0__.func_846(PLAYER::PLAYER_ID());
							if (iVar1 < func_275(62))
							{
								__LIB_1__.func_342("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
								__LIB_4__.func_999(func_275(62));
							}
							else
							{
								__LIB_1__.func_342("MPCT_WMERRY" /* GXT: Wait for Merryweather to contact you. */, 100, 0);
							}
						}
						if (__LIB_4__.func_679(10))
						{
							__LIB_9__.func_27("MPCT_MERRYDIS" /* GXT: Merryweather are currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 2:
						if (__LIB_25__.func_218(63, 0, 0))
						{
							if (!func_309(9))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(9))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_BOAT" /* GXT: Request a boat to bring you to land. */, 100, 0);
							}
						}
						else
						{
							iVar1 = __LIB_0__.func_846(PLAYER::PLAYER_ID());
							if (iVar1 < func_275(63))
							{
								__LIB_1__.func_342("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
								__LIB_4__.func_999(func_275(63));
							}
							else
							{
								__LIB_1__.func_342("MPCT_WMERRY" /* GXT: Wait for Merryweather to contact you. */, 100, 0);
							}
						}
						if (__LIB_4__.func_679(9))
						{
							__LIB_9__.func_27("MPCT_MERRYDIS" /* GXT: Merryweather are currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 4:
						if (__LIB_25__.func_218(81, 0, 0))
						{
							if (!func_309(12))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(12))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_ARMY" /* GXT: Choose a player to be attacked by Mercenaries. */, 100, 0);
							}
						}
						else
						{
							iVar1 = __LIB_0__.func_846(PLAYER::PLAYER_ID());
							if (iVar1 < func_275(81))
							{
								__LIB_1__.func_342("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
								__LIB_4__.func_999(func_275(81));
							}
							else
							{
								__LIB_1__.func_342("MPCT_WMERRY" /* GXT: Wait for Merryweather to contact you. */, 100, 0);
							}
						}
						if (__LIB_4__.func_679(12))
						{
							__LIB_9__.func_27("MPCT_MERRYDIS" /* GXT: Merryweather are currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 3:
						if (__LIB_25__.func_218(77, 0, 0))
						{
							iVar8 = func_244();
							if (iVar8 != 0)
							{
								if (iVar8 == 2)
								{
									__LIB_1__.func_342("MPCT_UNAVAIL2" /* GXT: Unavailable at current location. */, 100, 0);
								}
								else
								{
									__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
								}
							}
							else if (!func_309(13))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(13))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_HELI" /* GXT: Request a helicopter to pick you up. */, 100, 0);
							}
						}
						else
						{
							iVar1 = __LIB_0__.func_846(PLAYER::PLAYER_ID());
							if (iVar1 < func_275(77))
							{
								__LIB_1__.func_342("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
								__LIB_4__.func_999(func_275(77));
							}
							else
							{
								__LIB_1__.func_342("MPCT_WMERRY" /* GXT: Wait for Merryweather to contact you. */, 100, 0);
							}
						}
						if (__LIB_4__.func_679(13))
						{
							__LIB_9__.func_27("MPCT_MERRYDIS" /* GXT: Merryweather are currently offering a discount on this service. */, 100, 0);
						}
						break;
				}
				break;
			case 10:
				if (iLocal_160 == -1 && iLocal_161)
				{
				}
				else if (__LIB_4__.func_679(22) && Local_122.f_181.f_69 <= Local_122.f_181.f_2)
				{
					__LIB_1__.func_342("MPCT_PEGADIS" /* GXT: Pegasus are currently offering a discount on this service. */, 100, 0);
				}
				break;
			case 7:
				switch (Local_122.f_181.f_69)
				{
					case 0:
						if (__LIB_25__.func_218(74, 0, 0))
						{
							if (!func_309(0))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(0))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_BRUC_BOX" /* GXT: Request a package of Bull Shark Testosterone. Doubles damage inflicted and halves damage received. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
							__LIB_4__.func_999(func_275(74));
						}
						if (__LIB_4__.func_679(0))
						{
							__LIB_9__.func_27("MPCT_BRUCEDIS" /* GXT: Brucie is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 1:
						__LIB_1__.func_342("MPCT_EXIT" /* GXT: Close down the menu. */, 100, 0);
						break;
				}
				break;
			case 18:
				switch (Local_122.f_181.f_69)
				{
					case 0:
						if (__LIB_25__.func_218(130, 0, 0))
						{
							if (!func_309(39))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(39))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_GB_LIMO" /* GXT: Request your Organization's Turreted Limo to be delivered. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("MPCT_LOCKED" /* GXT: This item unlocks at Rank ~1~. */, 100, 0);
							__LIB_4__.func_999(func_275(74));
						}
						break;
					case 1:
						__LIB_1__.func_342("MPCT_EXIT" /* GXT: Close down the menu. */, 100, 0);
						break;
				}
				break;
			case 19:
				switch (Local_122.f_181.f_69)
				{
					case 0:
						if (__LIB_1__.func_333(PLAYER::PLAYER_ID()))
						{
							iVar9 = __LIB_1__.func_332(PLAYER::PLAYER_ID());
							if (!func_279(42) || !func_309(42))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (__LIB_1__.func_331(0, 1024))
							{
								__LIB_1__.func_342("MPCT_YC_HNONE" /* GXT: Your Yacht is not equipped with a helicopter. */, 100, 0);
							}
							else if (func_240(0))
							{
								__LIB_1__.func_342("MPCT_YC_HSPN" /* GXT: Your helicopter is already on the way. */, 100, 0);
							}
							else if (func_239(PLAYER::PLAYER_ID(), 0))
							{
								__LIB_1__.func_342("MPCT_YC_HIN" /* GXT: You are already using the helicopter. */, 100, 0);
							}
							else if (__LIB_18__.func_324(PLAYER::PLAYER_ID(), iVar9, 100f))
							{
								__LIB_1__.func_342("MPCT_YC_CLOSE" /* GXT: You are too close to your Yacht. */, 100, 0);
							}
							else if (func_231(0))
							{
								__LIB_1__.func_342("MPCT_YC_HSPWND" /* GXT: A helicopter is already on the shore. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_YC_YAH" /* GXT: Tell the Captain to deliver a Helicopter to the coastline nearest your Yacht. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("MPCT_YC_NOY" /* GXT: You do not own a Yacht. */, 100, 0);
						}
						if (__LIB_4__.func_679(40))
						{
							__LIB_9__.func_27("MPCT_YACHTDIS" /* GXT: The captain is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 1:
						if (__LIB_1__.func_333(PLAYER::PLAYER_ID()))
						{
							iVar10 = __LIB_1__.func_332(PLAYER::PLAYER_ID());
							if (!func_279(42) || !func_309(42))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (func_239(PLAYER::PLAYER_ID(), 1))
							{
								__LIB_1__.func_342("MPCT_YC_BIN" /* GXT: You are already using the boat. */, 100, 0);
							}
							else if (func_240(1))
							{
								__LIB_1__.func_342("MPCT_YC_BSPN" /* GXT: Your boat is already on the way. */, 100, 0);
							}
							else if (__LIB_18__.func_324(PLAYER::PLAYER_ID(), iVar10, 100f))
							{
								__LIB_1__.func_342("MPCT_YC_CLOSE" /* GXT: You are too close to your Yacht. */, 100, 0);
							}
							else if (func_231(1))
							{
								__LIB_1__.func_342("MPCT_YC_BSPWND" /* GXT: A boat is already on the shore. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_YC_YAB" /* GXT: Tell the Captain to deliver a Boat to the coastline nearest your Yacht. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("MPCT_YC_NOY" /* GXT: You do not own a Yacht. */, 100, 0);
						}
						if (__LIB_4__.func_679(41))
						{
							__LIB_9__.func_27("MPCT_YACHTDIS" /* GXT: The captain is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 2:
						if (__LIB_1__.func_333(PLAYER::PLAYER_ID()))
						{
							iVar13 = __LIB_1__.func_332(PLAYER::PLAYER_ID());
							func_187(&bVar12, &bVar11);
							if (!func_279(42) || !func_309(42))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (func_186(PLAYER::PLAYER_ID()))
							{
								__LIB_1__.func_342("MPCT_YC_PIN" /* GXT: You are already using your Personal Vehicle. */, 100, 0);
							}
							else if (func_177(1133903872))
							{
								__LIB_1__.func_342("MPCT_YC_PSPWND" /* GXT: You are too close to your current Personal Vehicle. */, 100, 0);
							}
							else if (!bVar12)
							{
								__LIB_1__.func_342("MPCT_YC_GAR" /* GXT: There are no available garages. */, 100, 0);
							}
							else if (!bVar11)
							{
								__LIB_1__.func_342("MPCT_YC_VEH" /* GXT: There are no available vehicles. */, 100, 0);
							}
							else if (!__LIB_18__.func_324(PLAYER::PLAYER_ID(), iVar13, 100f))
							{
								__LIB_1__.func_342("MPCT_YC_FAR" /* GXT: You are too far away from your Yacht. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_YC_YAP" /* GXT: Tell the Captain to deliver your Personal Vehicle to the coastline nearest your Yacht. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("MPCT_YC_NOY" /* GXT: You do not own a Yacht. */, 100, 0);
						}
						if (__LIB_4__.func_679(42))
						{
							__LIB_9__.func_27("MPCT_YACHTDIS" /* GXT: The captain is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 3:
						if (__LIB_1__.func_333(PLAYER::PLAYER_ID()))
						{
							if ((!func_279(64) || !func_309(64)) || Global_262145.f_29259 /* Tunable: -2046990177 */)
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("YACHT_REQDESC" /* GXT: Request a job from your Galaxy Super Yacht Captain. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("MPCT_YC_NOY" /* GXT: You do not own a Yacht. */, 100, 0);
						}
						break;
				}
				break;
			case 20:
				switch (Local_122.f_181.f_69)
				{
					case 0:
						if (__LIB_2__.func_144(PLAYER::PLAYER_ID()))
						{
							if (!func_309(43))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(43))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else if (func_171(__LIB_1__.func_165()))
							{
								if (func_170())
								{
									__LIB_1__.func_342("MPCT_PA_IMP" /* GXT: Tell the Executive Assistant to recover your impounded vehicle. */, 100, 0);
								}
								else
								{
									__LIB_1__.func_342("MPCT_PA_IMP_F" /* GXT: Tell the Executive Assistant to recover your impounded vehicle. */, 100, 0);
								}
							}
							else
							{
								__LIB_1__.func_342("MPCT_PA_IMPF" /* GXT: None of your vehicles are currently impounded. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("MPCT_PA_NOY" /* GXT: You do not own an Office. */, 100, 0);
						}
						if (__LIB_4__.func_679(43))
						{
							__LIB_9__.func_27("MPCT_YACHTDIS" /* GXT: The captain is currently offering a discount on this service. */, 100, 0);
						}
						break;
					case 1:
						if (__LIB_2__.func_144(PLAYER::PLAYER_ID()))
						{
							iVar8 = func_168();
							if (iVar8 != 0)
							{
								if (iVar8 == 3)
								{
									__LIB_1__.func_342("MPCT_PA_YAH0A" /* GXT: The Luxury Helicopter pickup has already been requested. */, 100, 0);
								}
								else if (iVar8 == 2)
								{
									__LIB_1__.func_342("MPCT_UNAVAIL2" /* GXT: Unavailable at current location. */, 100, 0);
								}
								else
								{
									__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
								}
							}
							else if (!func_309(44))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(44))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else if (__LIB_23__.func_189())
							{
								if (func_170())
								{
									__LIB_1__.func_342("MPCT_PA_HP" /* GXT: Tell the Executive Assistant to send a Helicopter to your location. */, 100, 0);
								}
								else
								{
									__LIB_1__.func_342("MPCT_PA_HPF" /* GXT: Tell the Executive Assistant to send a Helicopter to your location. */, 100, 0);
								}
							}
							else if (!BitTest(Local_122.f_359, 10))
							{
								__LIB_1__.func_342("MPCT_PA_YAH0U" /* GXT: Unavailable. This helicopter is already in use by another player. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("MPCT_PA_NOY" /* GXT: You do not own an Office. */, 100, 0);
						}
						if (__LIB_4__.func_679(44))
						{
							__LIB_9__.func_27("MPCT_YACHTDIS" /* GXT: The captain is currently offering a discount on this service. */, 100, 0);
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
						if (__LIB_25__.func_218(99, 0, 0))
						{
							if (!func_309(18))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(18))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_LJOB" /* GXT: Request an invite to a previously completed Job. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("MPCT_RQJS" /* GXT: This item unlocks when Simeon has a Job available. */, 100, 0);
						}
						break;
					case 1:
						__LIB_1__.func_342("MPCT_EXIT" /* GXT: Close down the menu. */, 100, 0);
						break;
				}
				break;
			case 13:
				switch (Local_122.f_181.f_69)
				{
					case 0:
						if (__LIB_25__.func_218(100, 0, 0))
						{
							if (!func_309(19))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(19))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_LJOB" /* GXT: Request an invite to a previously completed Job. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("MPCT_RQJM" /* GXT: This item unlocks when Martin has a Job available. */, 100, 0);
						}
						break;
					case 1:
						__LIB_1__.func_342("MPCT_EXIT" /* GXT: Close down the menu. */, 100, 0);
						break;
				}
				break;
			case 15:
				switch (Local_122.f_181.f_69)
				{
					case 0:
						if (__LIB_25__.func_218(106, 0, 0))
						{
							if (!func_309(21))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
							else if (!func_279(21))
							{
								__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_LJOB" /* GXT: Request an invite to a previously completed Job. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("MPCT_RQJR" /* GXT: This item unlocks when Ron has a Job available. */, 100, 0);
						}
						break;
					case 1:
						__LIB_1__.func_342("MPCT_EXIT" /* GXT: Close down the menu. */, 100, 0);
						break;
				}
				break;
			case 14:
				switch (Local_122.f_181.f_69)
				{
					case 0:
						if (__LIB_25__.func_218(97, 0, 0))
						{
							if (func_309(17))
							{
								if (func_279(17))
								{
									__LIB_1__.func_342("MPCT_LJOB" /* GXT: Request an invite to a previously completed Job. */, 100, 0);
								}
								else
								{
									__LIB_1__.func_342("MPCT_UNAVAIL1" /* GXT: Unavailable during your current Job. */, 100, 0);
								}
							}
							else
							{
								__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("MPCT_RQJG" /* GXT: This item unlocks when Gerald has a Job available. */, 100, 0);
						}
						break;
					case 1:
						__LIB_1__.func_342("MPCT_EXIT" /* GXT: Close down the menu. */, 100, 0);
						break;
				}
				break;
			case 2:
				switch (Local_122.f_181.f_69)
				{
					case 0:
						bVar0 = __LIB_2__.func_280(Local_122.f_358);
						if (bVar0)
						{
							__LIB_1__.func_342("BB_DES_CUR" /* GXT: Current value of the Bounty on the selected player. */, 100, 0);
						}
						else if (func_165(&iVar4))
						{
							__LIB_1__.func_342("BB_DELAY1" /* GXT: You have hit your daily limit of bounties. You can set another in ~a~. */, 100, 0);
							Local_144 = { __LIB_6__.func_93(iVar4, 0, 0) };
							__LIB_5__.func_724(&Local_144);
						}
						else
						{
							Var3 = { __LIB_0__.func_604(Local_122.f_358) };
							if (func_162(&Var3, &iVar4))
							{
								__LIB_1__.func_342("BB_DELAY" /* GXT: You can set a bounty on this player again in ~a~. */, 100, 0);
								Local_144 = { __LIB_6__.func_93(iVar4, 0, 0) };
								__LIB_5__.func_724(&Local_144);
							}
							else if (Global_2815059.f_1856.f_1 != 0 && !BitTest(Local_122.f_359, 8))
							{
								__LIB_1__.func_342("BB_ABOUNTYSET" /* GXT: You have already set a Bounty.~n~Another can be placed when that Bounty is over. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("BB_DES_SET" /* GXT: Set a new Bounty on the selected player. Lester takes a $~1~ cut. */, 100, 0);
								__LIB_4__.func_999(Global_262145.f_7104 /* Tunable: LESTER_BOUNTY_CUT */);
							}
						}
						break;
				}
				break;
			case 6:
				if (BitTest(bLocal_169, 2) && Local_122.f_181.f_69 == 1)
				{
					__LIB_1__.func_342("MPCT_EXIT" /* GXT: Close down the menu. */, 100, 0);
				}
				else if (!BitTest(Global_1585857[uLocal_159[Local_122.f_181.f_69] /*142*/].f_103, 1))
				{
					if (STREAMING::IS_MODEL_A_VEHICLE(__LIB_5__.func_725(uLocal_159[Local_122.f_181.f_69])))
					{
						if (!func_171(uLocal_159[Local_122.f_181.f_69]))
						{
							if (__LIB_1__.func_165() != -1)
							{
								if (__LIB_5__.func_725(uLocal_159[Local_122.f_181.f_69]) == joaat("oppressor2") && __LIB_28__.func_43())
								{
									Var2 = { __LIB_6__.func_93((Global_262145.f_28396 /* Tunable: 247954694 */ - __LIB_5__.func_572(&Global_2789823, 1)), 0, 0) };
									__LIB_1__.func_342("PI_BIK_TIMER" /* GXT: This vehicle can be requested again in ~a~. */, 0, 0);
									__LIB_5__.func_724(&Var2);
								}
								else if (!BitTest(Global_1585857[__LIB_1__.func_165() /*142*/].f_103, 6))
								{
									__LIB_1__.func_342("MPCT_PERVEHc" /* GXT: Request Delivery? */, 100, 0);
								}
								else
								{
									__LIB_1__.func_342("MPCT_PERVEHi" /* GXT: Request Delivery? Your impounded vehicle will be lost if you have a new vehicle delivered. */, 100, 0);
								}
							}
							else
							{
								__LIB_1__.func_342("MPCT_PERVEHc" /* GXT: Request Delivery? */, 100, 0);
							}
						}
						else
						{
							__LIB_1__.func_342("BB_PVUNA8" /* GXT: Your Personal Vehicle is impounded. */, 100, 0);
						}
					}
					else
					{
						__LIB_1__.func_342("BB_PVUNA1" /* GXT: You have no Personal Vehicle in this space. */, 100, 0);
					}
				}
				else if (BitTest(Global_1585857[Local_122.f_181.f_69 /*142*/].f_103, 2))
				{
					__LIB_1__.func_342("BB_PVUNA12" /* GXT: Your Personal Vehicle is destroyed. You can call Mors Mutual Insurance to make a claim. */, 100, 0);
				}
				else
				{
					__LIB_1__.func_342("BB_PVUNA13" /* GXT: Your Personal Vehicle is destroyed. To protect your vehicles in the future you can purchase Car Insurance. */, 100, 0);
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
									__LIB_1__.func_342("MPCT_INSD3" /* GXT: ~a~ has paid $~1~ towards the premium. Pay the remaining premium to make a claim on your insured vehicle and have it returned to you. */, 100, 0);
								}
								else
								{
									__LIB_1__.func_342("MPCT_INSD2" /* GXT: ~a~ has paid the full $~1~ of the premium. Make a claim on your insured vehicle and have it returned to you. */, 100, 0);
								}
								__LIB_5__.func_724(&(Global_1585857[iLocal_151[Local_122.f_181.f_69] /*142*/].f_106));
								__LIB_4__.func_999(iLocal_133);
							}
							else if ((iLocal_132 - iLocal_133) > 0)
							{
								__LIB_1__.func_342("MPCT_INSD" /* GXT: Pay a premium to make a claim on your insured vehicle and have it returned to you. */, 100, 0);
							}
						}
						else if (iLocal_132 > 0)
						{
							__LIB_1__.func_342("MPCT_INSD" /* GXT: Pay a premium to make a claim on your insured vehicle and have it returned to you. */, 100, 0);
						}
					}
				}
				break;
			case 16:
				switch (Local_122.f_181.f_69)
				{
					case 0:
						__LIB_1__.func_342("MP_STRIP_IN1" /* GXT: Invite ~a~ to your Apartment for a lapdance. */, 100, 0);
						StringCopy(&Var2, "SCLUB_NM_", 16);
						StringIntConCat(&Var2, iLocal_168, 16);
						__LIB_2__.func_353(&Var2);
						break;
					case 1:
						__LIB_1__.func_342("MPCT_EXIT" /* GXT: Close down the menu. */, 100, 0);
						break;
				}
				break;
			case 17:
				uVar5 = __LIB_15__.func_447(PLAYER::PLAYER_ID());
				iVar6 = __LIB_24__.func_107(12, uVar5, &uLocal_182, &iLocal_183);
				bVar7 = false;
				if (BitTest(bLocal_169, 2) && Local_122.f_181.f_69 == 1)
				{
					__LIB_1__.func_342("MPCT_EXIT" /* GXT: Close down the menu. */, 100, 0);
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
								__LIB_1__.func_342("MPCT_RPHS" /* GXT: Replay this Heist. */, 100, 0);
							}
							else
							{
								__LIB_1__.func_342("MPCT_RQRE" /* GXT: Unavailable: This Heist has recently been completed. */, 100, 0);
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
					__LIB_1__.func_342("MPCT_EXIT" /* GXT: Close down the menu. */, 100, 0);
				}
				else
				{
					bVar7 = false;
					while (bVar7 < 3)
					{
						if (Local_122.f_181.f_70[Local_122.f_181.f_69] == bVar7)
						{
							__LIB_1__.func_342("MPCT_RPHS" /* GXT: Replay this Heist. */, 100, 0);
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
			__LIB_1__.func_342("BB_NOMONEY" /* GXT: You don't have enough cash. */, 100, 0);
		}
		if (BitTest(iLocal_142, 1))
		{
			__LIB_1__.func_342("MPCT_UNAVAIL0" /* GXT: Unavailable. */, 100, 0);
		}
		if (BitTest(iLocal_142, 2))
		{
			__LIB_1__.func_342("GC_MENU6" /* GXT: The Mugger is already working for someone else. */, 100, 0);
		}
		if (BitTest(iLocal_142, 3))
		{
			__LIB_1__.func_342("GC_MENU12" /* GXT: This gang is already working for someone else. */, 100, 0);
		}
		if (BitTest(iLocal_142, 4))
		{
			__LIB_1__.func_342("GC_MENU14" /* GXT: You are already working with another gang. */, 100, 0);
		}
		if (BitTest(iLocal_142, 6))
		{
			__LIB_1__.func_342("GC_MENU19" /* GXT: This gang is already working with you. */, 100, 0);
		}
		if (BitTest(iLocal_142, 5))
		{
			__LIB_1__.func_342("GC_MENU15" /* GXT: The gang is unable to reach your current position. */, 100, 0);
		}
		if (BitTest(iLocal_142, 7))
		{
			__LIB_1__.func_342("GC_MENU20" /* GXT: There are no players to mug. */, 100, 0);
		}
		if (BitTest(iLocal_142, 8))
		{
			__LIB_1__.func_342("GC_MENU21" /* GXT: The Mercenaries are already working for someone else. */, 100, 0);
		}
		if (BitTest(iLocal_142, 9))
		{
			__LIB_1__.func_342("GC_MENU22" /* GXT: There are no players to attack. */, 100, 0);
		}
		if (BitTest(iLocal_142, 10))
		{
			__LIB_1__.func_342("GC_MENU35" /* GXT: There are no players to give a Wanted Level to. */, 100, 0);
		}
		if (BitTest(iLocal_142, 11))
		{
			__LIB_1__.func_342("GC_MENU39" /* GXT: The Mugger is already working with you. */, 100, 0);
		}
		if (BitTest(iLocal_142, 12))
		{
			__LIB_1__.func_342("GC_MENU40" /* GXT: The Mercenaries are already working with you. */, 100, 0);
		}
		if (BitTest(iLocal_142, 31))
		{
			__LIB_1__.func_342("BB_NOBANK" /* GXT: You don't have enough cash in your bank account. */, 100, 0);
		}
		if (Local_122.f_178 == 6)
		{
			if (BitTest(iLocal_142, 14) || !STREAMING::IS_MODEL_A_VEHICLE(__LIB_5__.func_725(uLocal_159[Local_122.f_181.f_69])))
			{
				__LIB_1__.func_342("BB_PVUNA1" /* GXT: You have no Personal Vehicle in this space. */, 100, 0);
			}
			else if (BitTest(iLocal_142, 13))
			{
				__LIB_1__.func_342("BB_PVUNA2" /* GXT: You are too close to your current Personal Vehicle. */, 100, 0);
			}
			else if (BitTest(iLocal_142, 15))
			{
				__LIB_1__.func_342("BB_PVUNA3" /* GXT: Your Personal Vehicle is not empty. */, 100, 0);
			}
			else if (BitTest(iLocal_142, 16))
			{
				__LIB_1__.func_342("BB_PVUNA4" /* GXT: You are too far from a suitable road. */, 100, 0);
			}
			else if (BitTest(iLocal_142, 17))
			{
				__LIB_1__.func_342("BB_PVUNA5" /* GXT: Unlocks when you have a Garage. */, 100, 0);
			}
			else if (BitTest(iLocal_142, 18))
			{
				__LIB_1__.func_342("BB_PVUNA6" /* GXT: Unavailable. */, 100, 0);
			}
			else if (BitTest(iLocal_142, 21))
			{
				__LIB_1__.func_342("BB_PVUNA7" /* GXT: A delivery is in progress. */, 100, 0);
			}
			else if (BitTest(iLocal_142, 22))
			{
				__LIB_1__.func_342("BB_PVUNA8" /* GXT: Your Personal Vehicle is impounded. */, 100, 0);
			}
			else if (BitTest(iLocal_143, 2))
			{
				__LIB_1__.func_342("BB_PVUNA9" /* GXT: You are already using your Personal Vehicle. */, 100, 0);
			}
			else if (BitTest(iLocal_143, 13))
			{
				__LIB_1__.func_342("BB_PVUNA11" /* GXT: You are too close to your Garage. */, 100, 0);
			}
			else if (BitTest(iLocal_143, 16))
			{
				__LIB_1__.func_342("BB_PVUNA12" /* GXT: Your Personal Vehicle is destroyed. You can call Mors Mutual Insurance to make a claim. */, 100, 0);
			}
			else if (BitTest(iLocal_143, 18))
			{
				__LIB_1__.func_342("BB_PVUNA13" /* GXT: Your Personal Vehicle is destroyed. To protect your vehicles in the future you can purchase Car Insurance. */, 100, 0);
			}
			else if (BitTest(iLocal_143, 23))
			{
				__LIB_1__.func_342("PIM_HRPV14" /* GXT: You already have an active Special/Personal Vehicle. */, 100, 0);
			}
			else if (BitTest(iLocal_143, 24))
			{
				__LIB_1__.func_342("BB_PVUNA98" /* GXT: Your Personal Vehicle is already in the LS Car Meet. Return it to Storage via the Vehicles section of the Interaction Menu if you wish to request another vehicle. */, 100, 0);
			}
			else if (BitTest(iLocal_143, 25))
			{
				__LIB_1__.func_342("PIM_HRPV99" /* GXT: This vehicle is not allowed inside the LS Car Meet. */, 100, 0);
			}
			else if (__LIB_5__.func_725(uLocal_159[Local_122.f_181.f_69]) == joaat("oppressor2") && __LIB_28__.func_43())
			{
			}
		}
		else if (Local_122.f_178 == 9)
		{
			if (BitTest(iLocal_143, 17))
			{
				__LIB_1__.func_342("BB_PVEMPTY" /* GXT: This Garage is empty. */, 100, 0);
			}
		}
		if (BitTest(iLocal_142, 19))
		{
			__LIB_1__.func_342("BB_NONE0" /* GXT: There are no players available. */, 100, 0);
		}
		if (BitTest(iLocal_142, 20))
		{
			__LIB_1__.func_342("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 100, 0);
			__LIB_5__.func_724(&Local_144);
		}
		if (BitTest(iLocal_142, 20))
		{
			__LIB_1__.func_342("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 100, 0);
			__LIB_5__.func_724(&Local_144);
		}
		if (BitTest(iLocal_142, 23))
		{
			__LIB_1__.func_342("BB_ADRUNN" /* GXT: The cargo plane is already out making a delivery. */, 100, 0);
		}
		if (BitTest(iLocal_142, 30))
		{
			__LIB_1__.func_342("BB_BHRUNN" /* GXT: There are no free helicopters to back you up. */, 100, 0);
		}
		if (BitTest(iLocal_142, 24))
		{
			__LIB_1__.func_342("BB_HPRUNN" /* GXT: There are no free helicopters to make a pick up. */, 100, 0);
		}
		if (BitTest(iLocal_142, 25))
		{
			__LIB_1__.func_342("BB_HPWANT" /* GXT: The helicopter won't pick up a Wanted crook. */, 100, 0);
		}
		if (BitTest(iLocal_142, 26))
		{
			__LIB_1__.func_342("BB_HPUNSF" /* GXT: Current location is unsafe for the helicopter to land. */, 100, 0);
		}
		if (BitTest(iLocal_142, 28))
		{
			__LIB_1__.func_342("BB_HPLOCK" /* GXT: Helicopter pickup unlocks at Rank ~1~. */, 100, 0);
			__LIB_4__.func_999(func_275(77));
		}
		if (BitTest(iLocal_142, 27))
		{
			__LIB_1__.func_342("BB_BRURUN" /* GXT: There are no more stashes in the area. */, 100, 0);
		}
		if (BitTest(iLocal_143, 1))
		{
			__LIB_1__.func_342("BB_BHAMMO" /* GXT: Unavailable - you are using Ammo Drop. */, 100, 0);
		}
		if (BitTest(iLocal_143, 0))
		{
			__LIB_1__.func_342("BB_BHTAXI" /* GXT: Unavailable - you are using Helicopter Pickup. */, 100, 0);
		}
		if (BitTest(iLocal_143, 3))
		{
			__LIB_1__.func_342("BB_BHONBHELI" /* GXT: You are already using a Backup Helicopter. */, 100, 0);
		}
		if (BitTest(iLocal_143, 5))
		{
			__LIB_1__.func_342("BB_BPBUSY" /* GXT: The boat is currently busy. */, 100, 0);
		}
		if (BitTest(iLocal_143, 6))
		{
			__LIB_1__.func_342("BB_BPMOVI" /* GXT: The boat can't get to you while you are moving. */, 100, 0);
		}
		if (BitTest(iLocal_143, 7))
		{
			__LIB_1__.func_342("BB_BPWANT" /* GXT: The boat won't pick up a Wanted crook. */, 100, 0);
		}
		if (BitTest(iLocal_143, 8))
		{
			__LIB_1__.func_342("BB_BPARDR" /* GXT: You are already at a boat drop location. */, 100, 0);
		}
		if (BitTest(iLocal_143, 9))
		{
			__LIB_1__.func_342("BB_BPLAKE" /* GXT: The boat can't access this body of water. */, 100, 0);
		}
		if (BitTest(iLocal_143, 10))
		{
			__LIB_1__.func_342("BB_BPLAND" /* GXT: The boat is for picking up players stranded in the ocean. */, 100, 0);
		}
		if (BitTest(iLocal_143, 11))
		{
			__LIB_1__.func_342("BB_DES_PASS" /* GXT: You can't add a bounty while Passive Mode is active. */, 100, 0);
		}
		if (BitTest(iLocal_143, 12))
		{
			__LIB_1__.func_342("MPCT_UNVLPASS" /* GXT: Unavailable in Passive Mode. */, 100, 0);
		}
		if (BitTest(iLocal_143, 21))
		{
			__LIB_1__.func_342("MPCT_PA_YAH0U" /* GXT: Unavailable. This helicopter is already in use by another player. */, 100, 0);
		}
		if (BitTest(iLocal_143, 22))
		{
			__LIB_1__.func_342("MPCT_PA_IMPF" /* GXT: None of your vehicles are currently impounded. */, 100, 0);
		}
		if (__LIB_2__.func_47(&uLocal_145, 2000, 0))
		{
			__LIB_0__.func_579(&uLocal_145);
			if (BitTest(iLocal_143, 19))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_181, "SET_TEXT");
				__LIB_0__.func_478("");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iLocal_142 = 0;
			iLocal_143 = 0;
		}
		else if (BitTest(iLocal_143, 19))
		{
			Var14 = { __LIB_6__.func_93(func_149(2, Local_122.f_358), 0, 0) };
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
	if (__LIB_0__.func_649(&(Global_2779939[iParam1 /*233*/][iParam0 /*2*/])))
	{
		if (!__LIB_2__.func_47(&(Global_2779939[iParam1 /*233*/][iParam0 /*2*/]), func_151(iParam0, iParam1), 0))
		{
			iVar1 = __LIB_1__.func_295(&(Global_2779939[iParam1 /*233*/][iParam0 /*2*/]), 0, 0);
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
		if (__LIB_0__.func_585(Global_2359296[__LIB_0__.func_153() /*5567*/].f_5149.f_15[iVar0 /*13*/]))
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, &(Global_2359296[__LIB_0__.func_153() /*5567*/].f_5149.f_15[iVar0 /*13*/])))
			{
				*iParam1 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2359296[__LIB_0__.func_153() /*5567*/].f_5149.f_224[iVar0]);
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
		if (__LIB_0__.func_585(Global_2359296[__LIB_0__.func_153() /*5567*/].f_5149.f_15[iVar0 /*13*/]))
		{
			iVar1 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2359296[__LIB_0__.func_153() /*5567*/].f_5149.f_224[iVar0]);
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
	if (__LIB_1__.func_321() == 144)
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

int func_171(int iParam0)//Position - 0xBCED
{
	if (__LIB_2__.func_341(iParam0))
	{
		return BitTest(Global_1585857[iParam0 /*142*/].f_103, 6);
	}
	return 0;
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
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == __LIB_6__.func_871())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(__LIB_4__.func_838(0)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__.func_64(), false))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(__LIB_2__.func_64(), true), __LIB_0__.func_85(PLAYER::PLAYER_ID())) < fParam0)
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
	if (__LIB_0__.func_154(iParam0, 1, 1))
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
		if ((__LIB_8__.func_48(iVar1, -1) > 0 && !__LIB_25__.func_472(iVar1)) && !iVar1 == 12)
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
				iVar4 = __LIB_18__.func_591(iVar1, -1, 1);
			}
			if (!*uParam1)
			{
				iVar0 = 0;
				while (iVar0 < iVar4)
				{
					iVar2 = (__LIB_18__.func_704(iVar1) + iVar0);
					__LIB_1__.func_327(iVar2, &iVar3, 0);
					if (iVar3 >= 0)
					{
						if ((__LIB_5__.func_725(iVar3) != 0 && STREAMING::IS_MODEL_A_VEHICLE(__LIB_5__.func_725(iVar3))) && __LIB_8__.func_477(__LIB_5__.func_725(iVar3)))
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
		while (iVar0 < __LIB_4__.func_573(iVar5))
		{
			iVar2 = (__LIB_1__.func_325(iVar5) + iVar0);
			__LIB_1__.func_327(iVar2, &iVar3, 1);
			if (iVar3 >= 0 && !__LIB_1__.func_322(iVar2))
			{
				if ((((STREAMING::IS_MODEL_A_VEHICLE(__LIB_5__.func_725(iVar3)) && !__LIB_7__.func_88(__LIB_5__.func_725(iVar3), 1)) && !__LIB_1__.func_177(__LIB_5__.func_725(iVar3))) && __LIB_8__.func_477(__LIB_5__.func_725(iVar3))) && !__LIB_19__.func_305(iVar3))
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
	return __LIB_1__.func_331(iParam0, 512);
}

int func_239(int iParam0, int iParam1)//Position - 0xD75A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__.func_154(iParam0, 1, 1))
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
	if (((__LIB_1__.func_331(iParam0, 256) && !__LIB_1__.func_331(iParam0, 512)) && !__LIB_1__.func_331(iParam0, 1024)) && !__LIB_1__.func_331(iParam0, 2048))
	{
		return 1;
	}
	return 0;
}

int func_244()//Position - 0xD88A
{
	if (!__LIB_25__.func_218(77, 0, 0))
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
	if (!__LIB_26__.func_726())
	{
		return 0;
	}
	if (__LIB_2__.func_324())
	{
		return 0;
	}
	if (!__LIB_33__.func_494())
	{
		return 0;
	}
	return 1;
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

int func_275(int iParam0)//Position - 0xE945
{
	if (__LIB_0__.func_189())
	{
		return 1;
	}
	if (__LIB_0__.func_188())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
		case 156:
		case 121:
		case 96:
		case 128:
			return 1;
		case 21:
			return 2;
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!__LIB_4__.func_680(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		case 23:
		case 102:
		case 110:
			return 5;
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		case 97:
		case 107:
			return 7;
		case 4:
			return 8;
		case 19:
			return 8;
		case 29:
			return 10;
		case 8:
			return 11;
		case 61:
		case 119:
			return 12;
		case 89:
			return 13;
		case 31:
			return 14;
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
		case 78:
			return 15;
		case 109:
		case 88:
			return 16;
		case 74:
		case 100:
			return 17;
		case 6:
			return 18;
		case 20:
			return 19;
		case 62:
		case 108:
		case 130:
			return 20;
		case 65:
		case 93:
			return 21;
		case 63:
		case 104:
			return 25;
		case 77:
		case 106:
			return 30;
		case 81:
		case 98:
			return 35;
		case 75:
		case 95:
			return 40;
		case 105:
			return 45;
			break;
		case 67:
		case 64:
			return 50;
	}
	return -1;
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
		if (((BitTest(Global_4718592.f_11, 30) && Global_4718592.f_110280[iVar0] != 0) || (BitTest(Global_4718592.f_162934, 10) && Global_1659902 != 0)) && __LIB_9__.func_363(iVar0))
		{
			return 0;
		}
		if (__LIB_9__.func_362())
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
			if (__LIB_1__.func_224())
			{
				return 1;
			}
			else if (__LIB_4__.func_761(PLAYER::PLAYER_ID()) || __LIB_2__.func_373())
			{
				return 0;
			}
			if (__LIB_4__.func_760(PLAYER::PLAYER_ID()))
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
			if (__LIB_6__.func_936(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__.func_905(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_0__.func_904(PLAYER::PLAYER_ID()))
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
			if (__LIB_1__.func_224())
			{
				return 1;
			}
			else if (__LIB_4__.func_761(PLAYER::PLAYER_ID()) || __LIB_2__.func_373())
			{
				return 0;
			}
			if (__LIB_4__.func_760(PLAYER::PLAYER_ID()))
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
			if (__LIB_6__.func_936(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__.func_905(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_0__.func_904(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else if (__LIB_1__.func_299(PLAYER::PLAYER_ID()))
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
			if (__LIB_2__.func_373())
			{
				return 0;
			}
			if (__LIB_4__.func_761(PLAYER::PLAYER_ID()) || __LIB_1__.func_224())
			{
				if (__LIB_0__.func_860() || __LIB_0__.func_859())
				{
					iVar1 = __LIB_19__.func_808(-1);
					if ((((iVar1 == joaat("WEAPON_UNARMED") || iVar1 == joaat("WEAPON_RPG")) || iVar1 == joaat("WEAPON_GRENADELAUNCHER")) || __LIB_2__.func_178(iVar1)) || __LIB_2__.func_179(iVar1))
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
			if (__LIB_4__.func_760(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_6__.func_936(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__.func_905(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else if (__LIB_0__.func_904(PLAYER::PLAYER_ID()))
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
			if ((__LIB_4__.func_761(PLAYER::PLAYER_ID()) || __LIB_1__.func_224()) || __LIB_2__.func_373())
			{
				return 0;
			}
			if (__LIB_4__.func_760(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (Global_1888323 > 0)
			{
				return 0;
			}
			if (__LIB_6__.func_936(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__.func_905(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else if (__LIB_0__.func_904(PLAYER::PLAYER_ID()))
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
			if (((((Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3 || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 32) || __LIB_4__.func_761(PLAYER::PLAYER_ID())) || __LIB_1__.func_224()) || __LIB_2__.func_373()) || __LIB_4__.func_760(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_6__.func_936(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__.func_905(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_0__.func_904(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_0__.func_693(PLAYER::PLAYER_ID()) || __LIB_0__.func_694(PLAYER::PLAYER_ID()))
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
			if (((((__LIB_4__.func_761(PLAYER::PLAYER_ID()) || __LIB_1__.func_224()) || __LIB_2__.func_373()) || __LIB_4__.func_760(PLAYER::PLAYER_ID())) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 32)
			{
				return 0;
			}
			if (__LIB_4__.func_760(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_6__.func_936(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__.func_905(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_0__.func_904(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_0__.func_693(PLAYER::PLAYER_ID()) || __LIB_0__.func_694(PLAYER::PLAYER_ID()))
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
			if ((((((__LIB_1__.func_224() || __LIB_2__.func_373()) || __LIB_4__.func_761(PLAYER::PLAYER_ID())) || __LIB_4__.func_760(PLAYER::PLAYER_ID())) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3) || __LIB_9__.func_359(Global_4718592.f_168757)) || __LIB_9__.func_71())
			{
				return 0;
			}
			if (__LIB_9__.func_625())
			{
				return 0;
			}
			if (__LIB_6__.func_936(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__.func_905(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_0__.func_904(PLAYER::PLAYER_ID()))
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
			if ((((__LIB_1__.func_224() || __LIB_2__.func_373()) || __LIB_4__.func_761(PLAYER::PLAYER_ID())) || __LIB_4__.func_760(PLAYER::PLAYER_ID())) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3)
			{
				return 0;
			}
			if (__LIB_9__.func_625())
			{
				return 0;
			}
			if (__LIB_6__.func_936(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__.func_905(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_0__.func_904(PLAYER::PLAYER_ID()))
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
			if ((((__LIB_1__.func_224() || __LIB_2__.func_373()) || __LIB_4__.func_761(PLAYER::PLAYER_ID())) || __LIB_4__.func_760(PLAYER::PLAYER_ID())) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3)
			{
				return 0;
			}
			if (__LIB_9__.func_625())
			{
				return 0;
			}
			if (__LIB_6__.func_936(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__.func_905(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_0__.func_904(PLAYER::PLAYER_ID()))
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
			if ((((__LIB_1__.func_224() || __LIB_2__.func_373()) || __LIB_4__.func_761(PLAYER::PLAYER_ID())) || __LIB_4__.func_760(PLAYER::PLAYER_ID())) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3)
			{
				return 0;
			}
			if (__LIB_9__.func_625())
			{
				return 0;
			}
			if (__LIB_6__.func_936(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			break;
		case 49:
			if ((((__LIB_1__.func_224() || __LIB_2__.func_373()) || __LIB_4__.func_761(PLAYER::PLAYER_ID())) || __LIB_4__.func_760(PLAYER::PLAYER_ID())) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3)
			{
				return 0;
			}
			if (__LIB_9__.func_625())
			{
				return 0;
			}
			if (__LIB_6__.func_936(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			break;
		case 52:
		case 65:
		case 66:
		case 67:
			if ((((__LIB_1__.func_224() || __LIB_2__.func_373()) || __LIB_4__.func_761(PLAYER::PLAYER_ID())) || __LIB_4__.func_760(PLAYER::PLAYER_ID())) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3)
			{
				return 0;
			}
			if (__LIB_9__.func_625())
			{
				return 0;
			}
			if (__LIB_6__.func_936(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			break;
		case 22:
			if ((((__LIB_4__.func_760(PLAYER::PLAYER_ID()) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3) || __LIB_4__.func_761(PLAYER::PLAYER_ID())) || __LIB_1__.func_224()) || __LIB_2__.func_373())
			{
				return 0;
			}
			if (__LIB_6__.func_936(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__.func_905(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_0__.func_904(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_0__.func_693(PLAYER::PLAYER_ID()) || __LIB_0__.func_694(PLAYER::PLAYER_ID()))
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
			if ((((__LIB_4__.func_760(PLAYER::PLAYER_ID()) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3) || __LIB_4__.func_761(PLAYER::PLAYER_ID())) || __LIB_1__.func_224()) || __LIB_2__.func_373())
			{
				return 0;
			}
			if (__LIB_6__.func_936(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__.func_905(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_0__.func_904(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_0__.func_693(PLAYER::PLAYER_ID()) || __LIB_0__.func_694(PLAYER::PLAYER_ID()))
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
			if (__LIB_4__.func_761(PLAYER::PLAYER_ID()))
			{
				if ((__LIB_1__.func_224() || __LIB_2__.func_373()) || __LIB_0__.func_860())
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
			if (__LIB_4__.func_760(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 148)
			{
				return 0;
			}
			if (__LIB_6__.func_936(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__.func_905(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_0__.func_904(PLAYER::PLAYER_ID()))
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
			if (((__LIB_4__.func_760(PLAYER::PLAYER_ID()) || __LIB_4__.func_761(PLAYER::PLAYER_ID())) || __LIB_1__.func_224()) || __LIB_2__.func_373())
			{
				return 0;
			}
			if (__LIB_6__.func_936(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			break;
		case 1:
			if ((((((Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 0 || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 4) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3) || __LIB_4__.func_761(PLAYER::PLAYER_ID())) || __LIB_1__.func_224()) || __LIB_2__.func_373()) || __LIB_4__.func_760(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_6__.func_936(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__.func_905(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_0__.func_904(PLAYER::PLAYER_ID()))
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
			if (__LIB_1__.func_224() || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 32)
			{
				return 0;
			}
			if (__LIB_4__.func_761(PLAYER::PLAYER_ID()))
			{
				if (!__LIB_6__.func_935())
				{
					return 0;
				}
				if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 5 && !__LIB_2__.func_373()) && Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 148)
				{
					return 1;
				}
			}
			if (__LIB_6__.func_936(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__.func_905(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_0__.func_904(PLAYER::PLAYER_ID()))
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
			if (__LIB_1__.func_224())
			{
				return 1;
			}
			if (__LIB_4__.func_761(PLAYER::PLAYER_ID()))
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
			if (__LIB_4__.func_760(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3)
			{
				return 0;
			}
			if (__LIB_6__.func_936(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__.func_905(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else if (__LIB_0__.func_904(PLAYER::PLAYER_ID()))
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
			if (__LIB_1__.func_224())
			{
				return 1;
			}
			if (__LIB_4__.func_761(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_4__.func_760(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3)
			{
				return 0;
			}
			if (__LIB_6__.func_936(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__.func_905(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_0__.func_904(PLAYER::PLAYER_ID()))
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
			if (__LIB_7__.func_268(PLAYER::PLAYER_ID(), 1, 0))
			{
				return 0;
			}
			if (__LIB_0__.func_286(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			break;
		case 35:
			if (__LIB_7__.func_268(PLAYER::PLAYER_ID(), 1, 0))
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
			if (__LIB_0__.func_674())
			{
				return 0;
			}
			if (__LIB_1__.func_155(PLAYER::PLAYER_ID(), 1, 1))
			{
				return 0;
			}
			if (__LIB_6__.func_736(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_7__.func_269(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__.func_339(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if ((__LIB_0__.func_702(PLAYER::PLAYER_ID(), 7) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_244 != -1) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_245 != -1)
			{
				return 0;
			}
			if (__LIB_2__.func_303(PLAYER::PLAYER_ID(), 146))
			{
				return 0;
			}
			if ((__LIB_2__.func_303(PLAYER::PLAYER_ID(), 136) || __LIB_1__.func_182(PLAYER::PLAYER_ID()) == 136) || (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 24) && __LIB_1__.func_338(PLAYER::PLAYER_ID())))
			{
				return 0;
			}
			break;
		case 11:
			if (__LIB_1__.func_155(PLAYER::PLAYER_ID(), 1, 1))
			{
				return 0;
			}
			if (__LIB_6__.func_736(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_7__.func_269(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__.func_339(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if ((__LIB_0__.func_702(PLAYER::PLAYER_ID(), 7) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_244 != -1) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_245 != -1)
			{
				return 0;
			}
			if (Global_32227)
			{
				return 0;
			}
			if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 24))
			{
				if (__LIB_1__.func_338(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
			}
			if (__LIB_1__.func_182(PLAYER::PLAYER_ID()) == 136)
			{
				return 0;
			}
			if (__LIB_9__.func_293(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_2__.func_303(PLAYER::PLAYER_ID(), 138))
			{
				if (__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1))
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
			if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 21))
			{
				return 0;
			}
			if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 25))
			{
				return 0;
			}
			if (func_326(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_9__.func_375(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__.func_337(PLAYER::PLAYER_ID()) == 3)
			{
				return 0;
			}
			break;
		case 8:
			if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 21))
			{
				return 0;
			}
			if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 25))
			{
				return 0;
			}
			if (__LIB_1__.func_155(PLAYER::PLAYER_ID(), 1, 1))
			{
				return 0;
			}
			if (__LIB_6__.func_736(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_7__.func_269(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__.func_339(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if ((__LIB_0__.func_702(PLAYER::PLAYER_ID(), 7) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_244 != -1) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_245 != -1)
			{
				return 0;
			}
			break;
		case 0:
			if (__LIB_1__.func_155(PLAYER::PLAYER_ID(), 1, 1))
			{
				return 0;
			}
			if (__LIB_6__.func_736(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_7__.func_269(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__.func_339(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if ((__LIB_0__.func_702(PLAYER::PLAYER_ID(), 7) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_244 != -1) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_245 != -1)
			{
				return 0;
			}
			if (__LIB_2__.func_303(PLAYER::PLAYER_ID(), 146))
			{
				return 0;
			}
			break;
		case 9:
			if (__LIB_1__.func_155(PLAYER::PLAYER_ID(), 1, 1))
			{
				return 0;
			}
			if (__LIB_6__.func_736(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_7__.func_269(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__.func_339(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if ((__LIB_0__.func_702(PLAYER::PLAYER_ID(), 7) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_244 != -1) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_245 != -1)
			{
				return 0;
			}
			break;
		case 13:
			if (__LIB_1__.func_155(PLAYER::PLAYER_ID(), 1, 1))
			{
				return 0;
			}
			if (__LIB_6__.func_736(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_7__.func_269(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__.func_339(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if ((__LIB_0__.func_702(PLAYER::PLAYER_ID(), 7) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_244 != -1) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_245 != -1)
			{
				return 0;
			}
			if (__LIB_1__.func_336(PLAYER::PLAYER_ID(), 0))
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
			if (__LIB_2__.func_303(PLAYER::PLAYER_ID(), 136))
			{
				return 0;
			}
			if (__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 153)
			{
				return 0;
			}
			break;
		case 2:
			if (__LIB_2__.func_303(PLAYER::PLAYER_ID(), 129))
			{
				return 0;
			}
			break;
		case 1:
			break;
		case 14:
			if (__LIB_1__.func_155(PLAYER::PLAYER_ID(), 1, 0))
			{
				return 0;
			}
			if (__LIB_6__.func_736(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_7__.func_269(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__.func_339(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__.func_278(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__.func_280(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__.func_279(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__.func_105(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__.func_105(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__.func_335(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if (__LIB_1__.func_334(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if ((__LIB_0__.func_702(PLAYER::PLAYER_ID(), 7) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_244 != -1) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_245 != -1)
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (__LIB_0__.func_154(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
				{
					if (PLAYER::INT_TO_PLAYERINDEX(iVar0) != PLAYER::PLAYER_ID())
					{
						if (!__LIB_6__.func_768(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0))
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
			if (__LIB_1__.func_155(PLAYER::PLAYER_ID(), 1, 0))
			{
				return 0;
			}
			if (__LIB_6__.func_736(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_7__.func_269(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__.func_339(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if (Global_2689235[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*453*/].f_210 == 1)
			{
				return 0;
			}
			if (__LIB_1__.func_182(PLAYER::PLAYER_ID()) == 136)
			{
				return 0;
			}
			if (__LIB_1__.func_182(PLAYER::PLAYER_ID()) == 141)
			{
				return 0;
			}
			if (__LIB_1__.func_182(PLAYER::PLAYER_ID()) == 139)
			{
				return 0;
			}
			if (__LIB_1__.func_182(PLAYER::PLAYER_ID()) == 140 && __LIB_2__.func_303(PLAYER::PLAYER_ID(), 140))
			{
				return 0;
			}
			if (__LIB_1__.func_182(PLAYER::PLAYER_ID()) == 131 && __LIB_2__.func_303(PLAYER::PLAYER_ID(), 131))
			{
				return 0;
			}
			if (__LIB_2__.func_303(PLAYER::PLAYER_ID(), 138))
			{
				return 0;
			}
			if (__LIB_2__.func_303(PLAYER::PLAYER_ID(), 146))
			{
				return 0;
			}
			if (__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 148 || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 197)
			{
				return 0;
			}
			if (__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 183)
			{
				if (__LIB_0__.func_431(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (__LIB_0__.func_154(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
				{
					if (PLAYER::INT_TO_PLAYERINDEX(iVar0) != PLAYER::PLAYER_ID())
					{
						if (!__LIB_6__.func_768(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0))
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
			if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 0) || __LIB_0__.func_702(PLAYER::PLAYER_ID(), 16))
			{
				return 0;
			}
			if (__LIB_2__.func_303(PLAYER::PLAYER_ID(), 146))
			{
				return 0;
			}
			if (__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 192)
			{
				iVar1 = Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_182;
			}
			if (((((((__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 159 || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 157) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 153) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 154) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 155) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 170) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 197) || (__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 192 && iVar1 == 9))
			{
				return 0;
			}
			if (__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 225 || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 226)
			{
				if (__LIB_9__.func_374(__LIB_1__.func_337(PLAYER::PLAYER_ID())))
				{
					return 0;
				}
			}
			if (__LIB_0__.func_278(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__.func_560(PLAYER::PLAYER_ID()) == 17)
			{
				return 0;
			}
			if (__LIB_0__.func_633())
			{
				return 0;
			}
			if (__LIB_0__.func_279(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_1__.func_335(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if (__LIB_1__.func_302(19))
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
								if (iVar11 != __LIB_0__.func_160() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar11))
								{
									if (__LIB_0__.func_396(iVar11) == 157 || __LIB_0__.func_396(iVar11) == 153)
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
			if (__LIB_1__.func_182(PLAYER::PLAYER_ID()) == 146)
			{
				return 0;
			}
			if ((((__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 159 || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 153) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 157) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 154) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 155)
			{
				return 0;
			}
			if (__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 183)
			{
				if (__LIB_0__.func_431(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
			}
			if (__LIB_1__.func_302(21))
			{
				return 0;
			}
			break;
		case 39:
			break;
		case 43:
			if ((((__LIB_1__.func_224() || __LIB_2__.func_373()) || __LIB_4__.func_761(PLAYER::PLAYER_ID())) || __LIB_4__.func_760(PLAYER::PLAYER_ID())) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3)
			{
				return 0;
			}
			if (__LIB_9__.func_625())
			{
				return 0;
			}
			if (__LIB_1__.func_190(13))
			{
				return 0;
			}
			if (__LIB_6__.func_936(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__.func_905(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (__LIB_0__.func_904(PLAYER::PLAYER_ID()))
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
			if (__LIB_1__.func_155(PLAYER::PLAYER_ID(), 1, 0))
			{
				return 0;
			}
			if (__LIB_6__.func_736(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 7))
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
			if (__LIB_1__.func_336(PLAYER::PLAYER_ID(), 0))
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
	if (__LIB_0__.func_154(iParam0, 0, 1))
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
	return __LIB_1__.func_556(10391, -1, 0);
}

bool func_347()//Position - 0x11BF2
{
	return NETWORK::GET_CLOUD_TIME_AS_INT() < func_346();
}

int func_352(int iParam0)//Position - 0x11C59
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_1__.func_235(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar2 = iVar0;
		iVar3 = func_355(iParam0, iVar2);
		iVar1 = (iVar1 + __LIB_19__.func_28(iVar2, iVar3));
		iVar0++;
	}
	return iVar1;
}

int func_355(int iParam0, int iParam1)//Position - 0x11D2F
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		switch (iParam1)
		{
			case 2:
				return Global_4718592.f_162510.f_13;
				break;
			case 4:
				return Global_4718592.f_162510.f_12;
				break;
			case 3:
				return Global_4718592.f_162510.f_11;
				break;
			case 5:
				return Global_4718592.f_162510.f_10;
				break;
			case 6:
				return Global_4718592.f_162510.f_9;
				break;
		}
		return 0;
	}
	if (iParam0 == __LIB_0__.func_160() || !__LIB_2__.func_324(iParam1))
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_295.f_8[iParam1];
}

int func_359()//Position - 0x11E8C
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar0 = SYSTEM::TO_FLOAT(func_367(PLAYER::PLAYER_ID()));
	fVar1 = SYSTEM::TO_FLOAT(func_360());
	fVar2 = (fVar0 / fVar1);
	iVar3 = SYSTEM::ROUND((fVar2 * 100f));
	if (iVar3 > 100)
	{
		iVar3 = 100;
	}
	return iVar3;
}

int func_360()//Position - 0x11ECE
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_2__.func_183())
	{
		iVar0 += 72;
	}
	if (__LIB_8__.func_203())
	{
		iVar0 += 72;
	}
	if (__LIB_8__.func_202())
	{
		iVar0 += 72;
	}
	if (__LIB_8__.func_201())
	{
		iVar0 += 72;
	}
	if (__LIB_8__.func_200())
	{
		iVar0 += 72;
	}
	return iVar0;
}

int func_367(int iParam0)//Position - 0x11FF1
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = (iVar1 + func_355(iParam0, iVar0));
		iVar0++;
	}
	return iVar1;
}

void func_371()//Position - 0x1210C
{
	bool bVar0;
	int iVar1;
	__LIB_1__.func_193(0, 0);
	__LIB_1__.func_319("YOHAN_TITLE" /* GXT: YOHAN */);
	bVar0 = true;
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, 1, 0, 0, 0);
	if (((((__LIB_6__.func_401(0) || __LIB_0__.func_286(PLAYER::PLAYER_ID())) || __LIB_9__.func_281(PLAYER::PLAYER_ID())) || func_347()) || !__LIB_8__.func_996()) || func_359() >= 100)
	{
		bVar0 = false;
	}
	__LIB_18__.func_477(iVar1, "YOHN_OP1_T" /* GXT: Request Nightclub Goods */, 0, bVar0, 0, 0, 0);
	__LIB_4__.func_222(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	Local_122.f_181.f_2 = iVar1 + 1;
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
	MISC::SET_BIT(&(Local_122.f_359), 4);
	func_123();
}

void func_379()//Position - 0x12553
{
	if (__LIB_7__.func_161(0, -1, 1))
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
	if (__LIB_7__.func_305(Local_122.f_181.f_69))
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				__LIB_1__.func_342("AG14_OP1_D" /* GXT: Request Bunker Research.~n~Current research progress: ~1~% */, 0, 0);
				__LIB_4__.func_999(__LIB_2__.func_146(PLAYER::PLAYER_ID(), __LIB_4__.func_680(PLAYER::PLAYER_ID(), 5)));
				break;
			case 1:
				__LIB_1__.func_342("AG14_OP2_D" /* GXT: Request a vehicle to be delivered nearby. */, 100, 0);
				break;
		}
	}
	else
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				if (!func_386(PLAYER::PLAYER_ID(), __LIB_4__.func_680(PLAYER::PLAYER_ID(), 5)))
				{
					__LIB_1__.func_342("AG14_OP1_D1" /* GXT: Unavailable. Complete the Bunker setup to start Bunker Research. */, 0, 0);
				}
				else if (func_385())
				{
					Local_144 = { __LIB_6__.func_93(func_383(), 0, 0) };
					__LIB_1__.func_342("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
					__LIB_5__.func_724(&Local_144);
				}
				else
				{
					__LIB_1__.func_342("AG14_NA" /* GXT: This request is not currently available. */, 100, 0);
				}
				break;
			case 1:
				if (Global_1978980.f_2 != 0)
				{
					__LIB_1__.func_342("AG14_OP2_D1" /* GXT: Unavailable. Vehicle already in use. */, 100, 0);
				}
				else if (__LIB_2__.func_325())
				{
					Local_144 = { __LIB_6__.func_93(__LIB_18__.func_461(), 0, 0) };
					__LIB_1__.func_342("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
					__LIB_5__.func_724(&Local_144);
				}
				else
				{
					__LIB_1__.func_342("AG14_NA" /* GXT: This request is not currently available. */, 100, 0);
				}
				break;
			default:
				__LIB_1__.func_342("AG14_NA" /* GXT: This request is not currently available. */, 100, 0);
				break;
			}
	}
	func_123();
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
	return __LIB_1__.func_556(10390, -1, 0);
}

bool func_385()//Position - 0x12744
{
	return NETWORK::GET_CLOUD_TIME_AS_INT() < func_384();
}

int func_386(int iParam0, int iParam1)//Position - 0x12755
{
	int iVar0;
	if (__LIB_9__.func_506(iParam0, iParam1))
	{
		iVar0 = __LIB_2__.func_185(iParam0, iParam1);
		if (Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_4 > 0 && Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_396()//Position - 0x12B11
{
	bool bVar0;
	int iVar1;
	__LIB_1__.func_193(0, 0);
	__LIB_1__.func_319("AG14_TITLE" /* GXT: AGENT 14 */);
	bVar0 = true;
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, Global_1978980.f_2 == 0, 0, 0, 0);
	if (((((__LIB_6__.func_401(0) || __LIB_0__.func_286(PLAYER::PLAYER_ID())) || __LIB_9__.func_281(PLAYER::PLAYER_ID())) || func_385()) || !func_386(PLAYER::PLAYER_ID(), __LIB_4__.func_680(PLAYER::PLAYER_ID(), 5))) || __LIB_2__.func_152(5))
	{
		bVar0 = false;
	}
	__LIB_18__.func_477(iVar1, "AG14_OP1_T" /* GXT: Request Bunker Research */, 0, bVar0, 0, 0, 0);
	bVar0 = true;
	iVar1++;
	if ((Global_1978980.f_2 != 0 || __LIB_2__.func_325()) || __LIB_1__.func_155(PLAYER::PLAYER_ID(), 1, 1))
	{
		bVar0 = false;
	}
	__LIB_18__.func_477(iVar1, "STRING", 1, bVar0, 0, 0, 0);
	func_399("AG14_OP2_T" /* GXT: Request Transportation */, 0);
	__LIB_18__.func_477(iVar1, "STRING", 1, bVar0, 0, 0, 0);
	func_399(func_397(), 0);
	__LIB_4__.func_222(-1);
	Local_122.f_181.f_3[0] = 0;
	Local_122.f_181.f_36[1] = (6 - 1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	Local_122.f_181.f_2 = iVar1 + 1;
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
	MISC::SET_BIT(&(Local_122.f_359), 4);
	func_123();
}

char* func_397()//Position - 0x12C9C
{
	return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(__LIB_7__.func_158(Local_122.f_181.f_103[1]));
}

void func_399(char* sParam0, bool bParam1)//Position - 0x12D29
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	if (Global_23150.f_5611 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 >= 4)
	{
		return;
	}
	if (Global_23150.f_6135 != 1)
	{
		return;
	}
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		return;
	}
	StringCopy(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]), sParam0, 24);
	Global_23150.f_5611++;
	Global_23150.f_2387[Global_23150.f_6133 /*5*/][Global_23150.f_6134] = 1;
	Global_23150.f_6134++;
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		fVar0 = __LIB_2__.func_151();
		if (Global_23150.f_5466[Global_23150.f_5610] && Global_23150.f_6134 == Global_23150.f_6132)
		{
			__LIB_7__.func_172(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23150.f_5459[(Global_23150.f_5610 - 1)])
		{
			Global_23150.f_5459[(Global_23150.f_5610 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23150.f_6134 >= Global_23150.f_6132)
		{
			fVar3 = __LIB_2__.func_150();
			if (fVar3 > Global_23150.f_6136[Global_23150.f_5609])
			{
				Global_23150.f_6136[Global_23150.f_5609] = fVar3;
			}
		}
	}
}

void func_403()//Position - 0x13377
{
	if (__LIB_7__.func_161(0, -1, 1))
	{
		if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			func_412();
		}
		else
		{
			__LIB_2__.func_153();
		}
	}
}

float func_410()//Position - 0x135A5
{
	int iVar0;
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return (IntToFloat(Global_4718592.f_162510.f_5) + 0f);
	}
	iVar0 = __LIB_1__.func_556(7213, -1, 0);
	return __LIB_2__.func_42(iVar0);
}

void func_412()//Position - 0x135F5
{
	bool bVar0;
	int iVar1;
	__LIB_1__.func_193(0, 0);
	__LIB_1__.func_319("TONY_TITLE" /* GXT: TONY */);
	bVar0 = true;
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, (Global_1978966.f_2 == 0 && !func_416()), 0, 0, 0);
	if ((((((!__LIB_1__.func_145() || __LIB_0__.func_286(PLAYER::PLAYER_ID())) || __LIB_9__.func_281(PLAYER::PLAYER_ID())) || !__LIB_4__.func_952()) || !__LIB_4__.func_951()) || !__LIB_1__.func_340()) || __LIB_2__.func_41())
	{
		bVar0 = false;
	}
	__LIB_18__.func_477(iVar1, "TONY_OP1_T" /* GXT: Request Club Management */, 0, bVar0, 0, 0, 0);
	bVar0 = true;
	iVar1++;
	if (((Global_1978966.f_2 != 0 || __LIB_1__.func_566()) || func_416()) || __LIB_1__.func_155(PLAYER::PLAYER_ID(), 1, 1))
	{
		bVar0 = false;
	}
	__LIB_18__.func_477(iVar1, "STRING", 1, bVar0, 0, 0, 0);
	func_399("TONY_OP2_T" /* GXT: Request Limo */, 0);
	__LIB_18__.func_477(iVar1, "STRING", 1, bVar0, 0, 0, 0);
	func_399(__LIB_7__.func_160(), 0);
	__LIB_4__.func_222(-1);
	Local_122.f_181.f_3[1] = 0;
	Local_122.f_181.f_36[1] = (2 - 1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	Local_122.f_181.f_2 = iVar1 + 1;
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
	MISC::SET_BIT(&(Local_122.f_359), 4);
	func_123();
}

int func_416()//Position - 0x137F7
{
	switch (__LIB_19__.func_800(PLAYER::PLAYER_ID()))
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
	switch (__LIB_19__.func_772(PLAYER::PLAYER_ID()))
	{
		case 0:
			return 1;
		default:
	}
	return 0;
}

void func_419()//Position - 0x1389D
{
	if (__LIB_7__.func_161(0, -1, 1))
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
	if (__LIB_7__.func_305(Local_122.f_181.f_69))
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				__LIB_1__.func_342("FRANK_OP1_D" /* GXT: Request Security Contract. */, 100, 0);
				break;
			case 1:
				__LIB_1__.func_342("FRANK_OP2_D" /* GXT: Request Payphone Hit. */, 100, 0);
				break;
			case 2:
				__LIB_1__.func_342("FRANK_OP3_D" /* GXT: Request that the Company SUV be delivered nearby. */, 100, 0);
				break;
			case 3:
				__LIB_1__.func_342("FRANK_OP4_D" /* GXT: Request the Company SUV to return you to your Agency. */, 100, 0);
				break;
			case 4:
				__LIB_1__.func_342("FRANK_OP5_D" /* GXT: Request a Supply Stash containing ammo, health and armor. */, 100, 0);
				break;
		}
	}
	else
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				if (!__LIB_0__.func_581(PLAYER::PLAYER_ID()))
				{
					__LIB_1__.func_342("FRANK_OP2_D3" /* GXT: You must be a VIP, CEO or MC President to make this request. */, 0, 0);
				}
				else if (__LIB_9__.func_621())
				{
					iVar0 = (Global_262145.f_31689 /* Tunable: FIXER_SECURITY_CONTRACT_COOLDOWN_TIME */ - __LIB_1__.func_295(&(Global_1977048.f_14), 0, 0));
					Local_144 = { __LIB_6__.func_93(iVar0, 0, 0) };
					__LIB_1__.func_342("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
					__LIB_5__.func_724(&Local_144);
				}
				else
				{
					__LIB_1__.func_342("FRANK_NA" /* GXT: This request is not currently available. */, 100, 0);
				}
				break;
			case 1:
				if (!func_431())
				{
					Local_144 = { __LIB_6__.func_93(__LIB_2__.func_44(), 0, 0) };
					__LIB_1__.func_342("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
					__LIB_5__.func_724(&Local_144);
				}
				else if (!func_428() || !func_426(1))
				{
					__LIB_1__.func_342("FRANK_OP2_D2" /* GXT: Unavailable. Become a leader and complete a hit for Franklin to unlock. */, 100, 0);
				}
				else
				{
					__LIB_1__.func_342("FRANK_NA" /* GXT: This request is not currently available. */, 100, 0);
				}
				break;
			case 2:
				if (((Global_1964720 != 0 || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5, 21)) || __LIB_6__.func_938(PLAYER::PLAYER_ID())) || __LIB_6__.func_937(PLAYER::PLAYER_ID()))
				{
					__LIB_1__.func_342("FRANK_NA_2" /* GXT: The Company SUV is already in use. */, 100, 0);
				}
				else
				{
					__LIB_1__.func_342("FRANK_NA" /* GXT: This request is not currently available. */, 100, 0);
				}
				break;
			case 3:
				if (__LIB_19__.func_1(76) > 0)
				{
					Local_144 = { __LIB_6__.func_93(__LIB_19__.func_1(76), 0, 0) };
					__LIB_1__.func_342("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
					__LIB_5__.func_724(&Local_144);
				}
				else if (((Global_1964720 != 0 || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5, 21)) || __LIB_6__.func_938(PLAYER::PLAYER_ID())) || __LIB_6__.func_937(PLAYER::PLAYER_ID()))
				{
					__LIB_1__.func_342("FRANK_NA_2" /* GXT: The Company SUV is already in use. */, 100, 0);
				}
				else
				{
					__LIB_1__.func_342("FRANK_NA" /* GXT: This request is not currently available. */, 100, 0);
				}
				break;
			case 4:
				if (__LIB_19__.func_1(72) > 0)
				{
					Local_144 = { __LIB_6__.func_93(__LIB_19__.func_1(72), 0, 0) };
					__LIB_1__.func_342("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
					__LIB_5__.func_724(&Local_144);
				}
				else
				{
					__LIB_1__.func_342("FRANK_NA" /* GXT: This request is not currently available. */, 100, 0);
				}
				break;
			default:
				__LIB_1__.func_342("FRANK_NA" /* GXT: This request is not currently available. */, 100, 0);
				break;
			}
	}
	func_123();
}

bool func_426(bool bParam0)//Position - 0x13C22
{
	if (bParam0)
	{
		return BitTest(__LIB_1__.func_556(9905, -1, 0), 28);
	}
	return __LIB_14__.func_603(PLAYER::PLAYER_ID());
}

bool func_428()//Position - 0x13C65
{
	return BitTest(__LIB_1__.func_556(9905, -1, 0), 19);
}

bool func_431()//Position - 0x13CA6
{
	return NETWORK::GET_CLOUD_TIME_AS_INT() >= __LIB_1__.func_579();
}

void func_433()//Position - 0x13CC8
{
	bool bVar0;
	int iVar1;
	int iVar2;
	__LIB_1__.func_193(0, 0);
	__LIB_1__.func_319("FRANK_TITLE" /* GXT: FRANKLIN */);
	bVar0 = true;
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, 0, 0, 0, 0);
	if (((((!__LIB_1__.func_145() || __LIB_0__.func_286(PLAYER::PLAYER_ID())) || __LIB_9__.func_281(PLAYER::PLAYER_ID())) || __LIB_9__.func_621()) || BitTest(Global_1964716, 2)) || !__LIB_9__.func_625(PLAYER::PLAYER_ID()))
	{
		bVar0 = false;
	}
	__LIB_18__.func_477(iVar1, "FRANK_OP1_T" /* GXT: Request Security Contract */, 0, bVar0, 0, 0, 0);
	bVar0 = true;
	if ((((!func_431() || !func_473()) || !func_428()) || !func_426(1)) || BitTest(Global_1964716, 3))
	{
		bVar0 = false;
	}
	iVar1++;
	__LIB_18__.func_477(iVar1, "FRANK_OP2_T" /* GXT: Request Payphone Hit */, 0, bVar0, 0, 0, 0);
	bVar0 = true;
	iVar1++;
	if ((((Global_1964720 != 0 || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5, 21)) || __LIB_6__.func_938(PLAYER::PLAYER_ID())) || __LIB_6__.func_937(PLAYER::PLAYER_ID())) || BitTest(Global_1964716, 4))
	{
		bVar0 = false;
	}
	__LIB_18__.func_477(iVar1, "FRANK_OP3_T" /* GXT: Company SUV */, 0, bVar0, 0, 0, 0);
	bVar0 = true;
	iVar1++;
	if (((((!func_436() || Global_1964720 != 0) || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5, 21)) || __LIB_6__.func_938(PLAYER::PLAYER_ID())) || __LIB_6__.func_937(PLAYER::PLAYER_ID())) || BitTest(Global_1964716, 5))
	{
		bVar0 = false;
	}
	__LIB_18__.func_477(iVar1, "FRANK_OP4_T" /* GXT: SUV Service */, 0, bVar0, 0, 0, 0);
	bVar0 = true;
	iVar1++;
	iVar2 = __LIB_19__.func_1(72);
	if (((iVar2 > 0 || !func_279(72)) || !func_309(72)) || BitTest(Global_1964716, 6))
	{
		bVar0 = false;
	}
	if (__LIB_7__.func_161(PLAYER::PLAYER_ID()))
	{
		bVar0 = false;
	}
	__LIB_18__.func_477(iVar1, "FRANK_OP5_T" /* GXT: Supply Stash */, 0, bVar0, 0, 0, 0);
	__LIB_18__.func_477(iVar1, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar0, 0, 0, 0);
	func_434(func_86(72), 0);
	__LIB_4__.func_222(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	Local_122.f_181.f_2 = iVar1 + 1;
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
	MISC::SET_BIT(&(Local_122.f_359), 4);
	func_123();
}

void func_434(int iParam0, bool bParam1)//Position - 0x13F6E
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	if (Global_23150.f_5613 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 >= 4)
	{
		return;
	}
	if (Global_23150.f_6135 != 1)
	{
		return;
	}
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		return;
	}
	Global_23150.f_4309[Global_23150.f_5613] = iParam0;
	Global_23150.f_5613++;
	Global_23150.f_2387[Global_23150.f_6133 /*5*/][Global_23150.f_6134] = 2;
	Global_23150.f_6134++;
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		fVar0 = __LIB_2__.func_151();
		if (Global_23150.f_5466[Global_23150.f_5610] && Global_23150.f_6134 == Global_23150.f_6132)
		{
			__LIB_7__.func_172(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23150.f_5459[(Global_23150.f_5610 - 1)])
		{
			Global_23150.f_5459[(Global_23150.f_5610 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23150.f_6134 >= Global_23150.f_6132)
		{
			fVar3 = __LIB_2__.func_150();
			if (fVar3 > Global_23150.f_6136[Global_23150.f_5609])
			{
				Global_23150.f_6136[Global_23150.f_5609] = fVar3;
			}
		}
	}
}

int func_436()//Position - 0x140C7
{
	if (__LIB_19__.func_1(76) > 0)
	{
		return 0;
	}
	if (__LIB_1__.func_113(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	if (!func_438())
	{
		return 0;
	}
	if (__LIB_6__.func_938(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_6__.func_939(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_438()//Position - 0x14125
{
	if (__LIB_18__.func_303(PLAYER::PLAYER_ID(), 0, -1))
	{
		return 0;
	}
	if (__LIB_40__.func_758(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	if (func_439(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0))
	{
		return 0;
	}
	if (__LIB_0__.func_278(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__.func_279(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_1__.func_335(PLAYER::PLAYER_ID(), 0))
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
	if (__LIB_4__.func_850(Param0) || bParam1)
	{
		return 0;
	}
	if (SYSTEM::VDIST2(Param0, -1144.4973f, 43.01712f, 51.94447f) <= (325f * 325f))
	{
		if (__LIB_0__.func_659(Param0, 1, 0, 0))
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
	if (__LIB_4__.func_846(2, Param0))
	{
		if (__LIB_0__.func_659(Param0, 2, 0, 0))
		{
			return 1;
		}
	}
	if (__LIB_4__.func_846(3, Param0) && !__LIB_18__.func_255(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__.func_659(Param0, 3, 0, 0))
		{
			return 1;
		}
	}
	if (__LIB_4__.func_846(4, Param0))
	{
		if (__LIB_0__.func_659(Param0, 4, 0, 0))
		{
			return 1;
		}
	}
	if (__LIB_4__.func_846(5, Param0))
	{
		if (__LIB_0__.func_659(Param0, 5, 0, 0))
		{
			return 1;
		}
	}
	if (__LIB_4__.func_846(6, Param0))
	{
		if (__LIB_0__.func_659(Param0, 6, 0, 0))
		{
			return 1;
		}
	}
	if (__LIB_4__.func_846(7, Param0))
	{
		if (__LIB_0__.func_659(Param0, 7, 0, 0))
		{
			return 1;
		}
	}
	if (__LIB_4__.func_846(8, Param0))
	{
		if (__LIB_0__.func_659(Param0, 8, 0, 0))
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

int func_461(struct<3> Param0)//Position - 0x15E05
{
	var uVar0;
	if (Global_2815059.f_924 && func_462(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_462(struct<3> Param0, var uParam1)//Position - 0x15E2B
{
	int iVar0;
	int iVar1;
	int iVar2;
	*uParam1 = -1;
	iVar2 = __LIB_7__.func_135(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (__LIB_4__.func_854(iVar1))
			{
				if (__LIB_7__.func_135(Global_1946250.f_533[iVar0 /*3*/], 0) == iVar2)
				{
					*uParam1 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_473()//Position - 0x163CD
{
	return ((func_489() && func_476()) && !func_474());
}

bool func_474()//Position - 0x163EC
{
	return __LIB_24__.func_142() >= 2;
}

int func_476()//Position - 0x16406
{
	if (__LIB_1__.func_113(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (__LIB_1__.func_41())
	{
		return 0;
	}
	if (__LIB_0__.func_698())
	{
		return 0;
	}
	if (__LIB_0__.func_706())
	{
		return 0;
	}
	if ((__LIB_0__.func_702(PLAYER::PLAYER_ID(), 0) || __LIB_0__.func_702(PLAYER::PLAYER_ID(), 21)) || __LIB_0__.func_702(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (__LIB_18__.func_303(PLAYER::PLAYER_ID(), 0, -1))
	{
		return 0;
	}
	if (__LIB_2__.func_4(PLAYER::PLAYER_ID()) || __LIB_18__.func_461())
	{
		return 0;
	}
	if (__LIB_7__.func_150(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_7__.func_115(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_489()//Position - 0x165DC
{
	if (!__LIB_23__.func_547(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!__LIB_4__.func_715())
	{
		return 0;
	}
	if (!__LIB_0__.func_154(PLAYER::PLAYER_ID(), 0, 1))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (!__LIB_1__.func_353(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_7__.func_427(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__.func_497())
	{
		return 0;
	}
	if (__LIB_7__.func_276(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_499()//Position - 0x167A4
{
	if (__LIB_7__.func_305(Local_122.f_181.f_69))
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				if (__LIB_6__.func_401(1) && !__LIB_2__.func_48(1))
				{
					__LIB_1__.func_342("IMANI_OOS_D_2" /* GXT: Activate a ~1~m area where you and members of your Organization will be hidden from the radar of other players. */, 100, 0);
					__LIB_4__.func_999(Global_262145.f_31768 /* Tunable: 106922655 */);
				}
				else if (__LIB_6__.func_401(1) && __LIB_2__.func_48(1))
				{
					__LIB_1__.func_342("IMANI_OOS_D_3" /* GXT: Activate a ~1~m area where you and members of your Motorcycle Club will be hidden from the radar of other players. */, 100, 0);
					__LIB_4__.func_999(Global_262145.f_31768 /* Tunable: 106922655 */);
				}
				else
				{
					__LIB_1__.func_342("IMANI_OOS_D_1" /* GXT: Activate a ~1~m area where you will be hidden from the radar of other players. */, 100, 0);
					__LIB_4__.func_999(Global_262145.f_31768 /* Tunable: 106922655 */);
				}
				break;
			case 1:
				__LIB_1__.func_342("IMANI_SMC_D" /* GXT: Source a nearby motorcycle equipped with bulletproof tires. */, 100, 0);
				break;
		}
	}
	else
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				if (__LIB_19__.func_1(74) > 0)
				{
					Local_144 = { __LIB_6__.func_93(__LIB_19__.func_1(74), 0, 0) };
					__LIB_1__.func_342("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
					__LIB_5__.func_724(&Local_144);
				}
				else if (__LIB_6__.func_401(0))
				{
					__LIB_1__.func_342("PIM_HTTV17" /* GXT: Unavailable while working for another player. */, 100, 0);
				}
				else
				{
					__LIB_1__.func_342("IMANI_NA" /* GXT: This request is not currently available. */, 100, 0);
				}
				break;
			case 1:
				if (__LIB_19__.func_1(73) > 0)
				{
					Local_144 = { __LIB_6__.func_93(__LIB_19__.func_1(73), 0, 0) };
					__LIB_1__.func_342("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
					__LIB_5__.func_724(&Local_144);
				}
				else if (__LIB_9__.func_293())
				{
					__LIB_1__.func_342("IMANI_IN_USE" /* GXT: You already have an active motorcycle. */, 100, 0);
				}
				else
				{
					__LIB_1__.func_342("IMANI_NA" /* GXT: This request is not currently available. */, 100, 0);
				}
				break;
			default:
				__LIB_1__.func_342("IMANI_NA" /* GXT: This request is not currently available. */, 100, 0);
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
	__LIB_1__.func_193(0, 0);
	__LIB_1__.func_319("IMANI_TITLE" /* GXT: IMANI */);
	bVar0 = true;
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, 0, 0, 0, 0);
	iVar2 = __LIB_19__.func_1(74);
	if (((iVar2 > 0 || __LIB_6__.func_401(0)) || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_448, 0)) || BitTest(Global_1964716, 0))
	{
		bVar0 = false;
	}
	__LIB_18__.func_477(iVar1, "IMANI_OOS_T" /* GXT: Out of Sight */, 0, bVar0, 0, 0, 0);
	__LIB_18__.func_477(iVar1, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar0, 0, 0, 0);
	func_434(func_86(74), 0);
	bVar0 = true;
	iVar1++;
	iVar2 = __LIB_19__.func_1(73);
	if ((iVar2 > 0 || __LIB_9__.func_293()) || BitTest(Global_1964716, 1))
	{
		bVar0 = false;
	}
	__LIB_18__.func_477(iVar1, "IMANI_SMC_T" /* GXT: Source Motorcycle */, 0, bVar0, 0, 0, 0);
	__LIB_18__.func_477(iVar1, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar0, 0, 0, 0);
	func_434(func_86(73), 0);
	__LIB_4__.func_222(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	Local_122.f_181.f_2 = iVar1 + 1;
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
	MISC::SET_BIT(&(Local_122.f_359), 4);
	func_123();
}

void func_506()//Position - 0x16B6A
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	__LIB_4__.func_858();
	func_519();
	if (__LIB_7__.func_161(0, -1, 1))
	{
		if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__.func_193(0, 0);
			__LIB_1__.func_319("SES_FIRST_0" /* GXT: SESSANTA */);
			MISC::CLEAR_BIT(&bLocal_169, 2);
			__LIB_1__.func_318(1, 1, 0, 0, 0);
			__LIB_1__.func_317(1, 2, 1, 1, 1);
			__LIB_9__.func_341(0, 0, 0, 0, 0);
			if (__LIB_8__.func_278(PLAYER::PLAYER_ID()))
			{
				bVar1 = true;
				bVar2 = func_515(0);
				if (!bVar2 || __LIB_8__.func_882(PLAYER::PLAYER_ID()))
				{
					bVar1 = false;
				}
				func_512(69, iVar0, "TUN_SPHONE_CANCEL" /* GXT: Cancel Contract Job */, bVar1);
				if (func_86(69) > 0)
				{
					__LIB_18__.func_477(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
					func_434(func_86(69), 0);
				}
				if (bVar2)
				{
					__LIB_1__.func_342("TUN_SPHONE_H3" /* GXT: Cancel your current Contract Job */, 100, 0);
				}
				else
				{
					__LIB_1__.func_342("TUN_SPHONE_H2" /* GXT: Unavailable: No Contract Job currently active. */, 100, 0);
				}
			}
			else
			{
				__LIB_18__.func_477(iVar0, "TUN_SPHONE_CANCEL" /* GXT: Cancel Contract Job */, 0, 1, 0, 0, 0);
				__LIB_18__.func_477(iVar0, "", 1, 1, 0, 0, 0);
				__LIB_4__.func_857(15, 0);
				__LIB_1__.func_342("TUN_SPHONE_H1" /* GXT: This will unlock when you have completed any Contract Job. */, 100, 0);
			}
			iVar0++;
			if (func_510(PLAYER::PLAYER_ID()))
			{
				if (__LIB_4__.func_856(PLAYER::PLAYER_ID()))
				{
					bVar1 = ((!BitTest(uLocal_196, 0) && !BitTest(uLocal_196, 1)) && !BitTest(uLocal_196, 2));
					func_512(70, iVar0, "TUN_SPHONE_EL" /* GXT: Request Exotic Exports List */, bVar1);
					__LIB_1__.func_342("TUN_SPHONE_H4" /* GXT: Request the list of Exotic Exports vehicles you need to acquire. */, 100, 0);
				}
				else
				{
					__LIB_18__.func_477(iVar0, "TUN_SPHONE_EL" /* GXT: Request Exotic Exports List */, 0, 0, 0, 0, 0);
					__LIB_18__.func_477(iVar0, "", 1, 0, 0, 0, 0);
					__LIB_1__.func_342("TUN_SPHONE_H5" /* GXT: All Exotic Exports vehicles already delivered. */, 100, 0);
				}
				iVar0++;
			}
			Local_122.f_181.f_2 = iVar0;
			__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
			__LIB_4__.func_222(-1);
			if (func_1120())
			{
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
					__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
				}
				else
				{
					__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
					__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
				}
				MISC::SET_BIT(&(Local_122.f_359), 6);
			}
			MISC::SET_BIT(&(Local_122.f_359), 4);
			func_123();
		}
		else
		{
			if (__LIB_8__.func_278(PLAYER::PLAYER_ID()))
			{
				if (func_515(0))
				{
					__LIB_1__.func_342("TUN_SPHONE_H3" /* GXT: Cancel your current Contract Job */, 100, 0);
				}
				else
				{
					__LIB_1__.func_342("TUN_SPHONE_H2" /* GXT: Unavailable: No Contract Job currently active. */, 100, 0);
				}
			}
			else
			{
				__LIB_1__.func_342("TUN_SPHONE_H1" /* GXT: This will unlock when you have completed any Contract Job. */, 100, 0);
			}
			func_123();
		}
	}
}

bool func_510(int iParam0)//Position - 0x16E0D
{
	return (__LIB_1__.func_354(iParam0) && __LIB_8__.func_278(iParam0));
}

void func_512(int iParam0, int iParam1, char* sParam2, bool bParam3)//Position - 0x16F61
{
	if (__LIB_4__.func_679(iParam0))
	{
		__LIB_18__.func_477(iParam1, sParam2, 1, bParam3, 0, 0, 0);
		__LIB_4__.func_857(51, 0);
	}
	else
	{
		__LIB_18__.func_477(iParam1, sParam2, 0, bParam3, 0, 0, 0);
	}
}

bool func_515(bool bParam0)//Position - 0x17014
{
	if (bParam0)
	{
		return BitTest(__LIB_1__.func_556(9618, -1, 0), 1);
	}
	return __LIB_23__.func_551(PLAYER::PLAYER_ID());
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
		__LIB_0__.func_203(&(Local_122.f_1), Local_122.f_180, 0, &(Local_122.f_166), 0, 1);
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
		if (__LIB_4__.func_856(PLAYER::PLAYER_ID()) && !__LIB_0__.func_649(&uLocal_197))
		{
			__LIB_0__.func_580(&uLocal_197, 0, 0);
			MISC::SET_BIT(&uLocal_196, 3);
		}
	}
}

void func_533(bool bParam0)//Position - 0x17617
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bVar3 = false;
	if (__LIB_17__.func_534(&iVar0))
	{
		__LIB_4__.func_863(iVar0, 0);
		iVar1 = iVar0;
	}
	else
	{
		return;
	}
	while (!bVar3)
	{
		if (__LIB_17__.func_534(&iVar0))
		{
			if (iVar0 != iVar1)
			{
				__LIB_4__.func_863(iVar0, 1);
				iVar2 = iVar0;
				bVar3 = true;
			}
			else
			{
				iVar4++;
				if (iVar4 > 100)
				{
					bVar3 = true;
					iVar4 = 0;
					__LIB_4__.func_863(iVar0, 1);
					iVar2 = iVar0;
				}
			}
		}
		else
		{
			return;
		}
	}
	bVar3 = false;
	while (!bVar3)
	{
		if (__LIB_17__.func_534(&iVar0))
		{
			if (iVar0 != iVar1 && iVar0 != iVar2)
			{
				__LIB_4__.func_863(iVar0, 2);
				bVar3 = true;
			}
			else
			{
				iVar4++;
				if (iVar4 > 100)
				{
					bVar3 = true;
					iVar4 = 0;
					__LIB_4__.func_863(iVar0, 2);
				}
			}
		}
		else
		{
			return;
		}
	}
	if (bParam0)
	{
		__LIB_1__.func_597(9839, (NETWORK::GET_CLOUD_TIME_AS_INT() + Global_262145.f_31048 /* Tunable: TUNER_DAILY_REFRESH_TIME */), -1, 1, 0);
	}
}

int func_538(int iParam0)//Position - 0x17885
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = iParam0;
	iVar1 = __LIB_0__.func_159(iVar0);
	bVar2 = __LIB_0__.func_158(iVar0);
	if ((PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, iParam0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, iParam0)) || __LIB_2__.func_352(iParam0, &(Global_1648034.f_1060), 1))
	{
		if (!BitTest(Global_1648034.f_1049[iVar1], bVar2))
		{
			MISC::SET_BIT(&(Global_1648034.f_1049[iVar1]), bVar2);
			return 1;
		}
	}
	else if (BitTest(Global_1648034.f_1049[iVar1], bVar2))
	{
		MISC::CLEAR_BIT(&(Global_1648034.f_1049[iVar1]), bVar2);
	}
	return 0;
}

bool func_544(int iParam0)//Position - 0x17CAE
{
	return __LIB_2__.func_28(__LIB_4__.func_865(iParam0));
}

int func_547(int iParam0)//Position - 0x17D10
{
	if (__LIB_2__.func_103(iParam0))
	{
		return __LIB_6__.func_940(iParam0) == iParam0;
	}
	return 0;
}

void func_552(bool bParam0)//Position - 0x17ED4
{
	struct<46> Var0;
	__LIB_4__.func_879(9526, -1);
	__LIB_4__.func_879(9484, -1);
	__LIB_4__.func_879(9490, -1);
	__LIB_4__.func_879(9491, -1);
	__LIB_4__.func_879(9492, -1);
	__LIB_4__.func_879(9485, -1);
	__LIB_4__.func_879(9486, -1);
	__LIB_4__.func_879(9487, -1);
	__LIB_4__.func_879(9488, -1);
	__LIB_4__.func_879(9489, -1);
	__LIB_4__.func_879(9493, -1);
	__LIB_4__.func_879(9495, -1);
	__LIB_4__.func_879(9518, -1);
	__LIB_4__.func_879(9496, -1);
	__LIB_4__.func_879(9519, -1);
	__LIB_4__.func_879(9497, -1);
	__LIB_4__.func_879(9498, -1);
	__LIB_4__.func_879(9520, -1);
	__LIB_4__.func_879(9499, -1);
	__LIB_4__.func_879(9521, -1);
	__LIB_4__.func_879(9500, -1);
	__LIB_4__.func_879(9501, -1);
	__LIB_4__.func_879(9522, -1);
	__LIB_4__.func_879(9502, -1);
	__LIB_4__.func_879(9523, -1);
	__LIB_4__.func_879(9503, -1);
	__LIB_4__.func_879(9504, -1);
	__LIB_4__.func_879(9524, -1);
	__LIB_4__.func_879(9505, -1);
	__LIB_4__.func_879(9525, -1);
	__LIB_4__.func_879(9506, -1);
	__LIB_4__.func_879(9507, -1);
	__LIB_4__.func_879(9543, -1);
	__LIB_4__.func_879(9508, -1);
	__LIB_4__.func_878(0);
	__LIB_4__.func_877(0);
	__LIB_6__.func_961(0);
	__LIB_4__.func_876(0);
	__LIB_17__.func_542(0);
	__LIB_4__.func_875(0);
	__LIB_17__.func_541(0);
	__LIB_4__.func_874(0);
	__LIB_4__.func_873(0);
	__LIB_17__.func_540(0);
	__LIB_17__.func_539(0);
	__LIB_17__.func_538(0);
	__LIB_2__.func_362(0);
	__LIB_7__.func_88(0);
	__LIB_2__.func_361(0);
	__LIB_2__.func_360(0);
	__LIB_2__.func_359(0);
	__LIB_22__.func_600(0, 0);
	__LIB_14__.func_373(-1);
	__LIB_0__.func_521(30324, 0, -1);
	__LIB_0__.func_521(30325, 0, -1);
	__LIB_0__.func_521(30326, 0, -1);
	__LIB_0__.func_521(30327, 0, -1);
	__LIB_0__.func_521(30328, 0, -1);
	__LIB_0__.func_521(30329, 0, -1);
	__LIB_0__.func_521(30330, 0, -1);
	__LIB_0__.func_521(30331, 0, -1);
	__LIB_0__.func_521(30332, 0, -1);
	__LIB_0__.func_521(30333, 0, -1);
	__LIB_0__.func_521(30334, 0, -1);
	__LIB_0__.func_521(30335, 0, -1);
	__LIB_0__.func_521(30336, 0, -1);
	__LIB_0__.func_521(30337, 0, -1);
	__LIB_0__.func_521(30338, 0, -1);
	__LIB_0__.func_521(30339, 0, -1);
	__LIB_0__.func_521(30340, 0, -1);
	__LIB_0__.func_521(30341, 0, -1);
	__LIB_0__.func_521(30342, 0, -1);
	__LIB_0__.func_521(30343, 0, -1);
	__LIB_0__.func_521(30344, 0, -1);
	__LIB_0__.func_521(30345, 0, -1);
	__LIB_0__.func_521(30346, 0, -1);
	__LIB_0__.func_521(30347, 0, -1);
	__LIB_0__.func_521(30348, 0, -1);
	__LIB_0__.func_521(30349, 0, -1);
	__LIB_0__.func_521(30350, 0, -1);
	__LIB_0__.func_521(30351, 0, -1);
	__LIB_0__.func_521(30352, 0, -1);
	if (bParam0)
	{
		Var0.f_40 = -1;
		Var0.f_41 = -1;
		Var0.f_42 = -1;
		Var0.f_44 = 1;
		Global_1973206 = { Var0 };
	}
	func_553();
	__LIB_6__.func_881(-1713398555, 18, 0);
}

void func_553()//Position - 0x1818F
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__.func_5();
	iVar2 = __LIB_2__.func_357(iVar0);
	iVar3 = MISC::GET_PROFILE_SETTING(iVar2);
	if (BitTest(iVar3, 4))
	{
		MISC::CLEAR_BIT(&iVar3, 4);
		bVar1 = true;
	}
	if (BitTest(iVar3, 5))
	{
		MISC::CLEAR_BIT(&iVar3, 5);
		bVar1 = true;
	}
	if (BitTest(iVar3, 6))
	{
		MISC::CLEAR_BIT(&iVar3, 6);
		bVar1 = true;
	}
	if (bVar1)
	{
		STATS::SET_FREEMODE_STRAND_PROGRESSION_STATUS(iVar2, iVar3);
	}
}

void func_584()//Position - 0x19A1A
{
	switch (Local_122.f_181.f_69)
	{
		case 0:
			if (Global_262145.f_27106 /* Tunable: -1284248636 */)
			{
				__LIB_1__.func_342("MPCT_CASINO_RD3" /* GXT: Ms. Baker is not currently offering any jobs. */, 0, 0);
			}
			else if (func_753())
			{
				__LIB_1__.func_342("MPCT_CASINO_RD0" /* GXT: Request a job from Ms. Baker. */, 0, 0);
			}
			else if (bLocal_207)
			{
				__LIB_1__.func_342("MPCT_CASINO_RD2" /* GXT: There is a short wait before you can request more work from Ms. Baker. */, 0, 0);
			}
			else if (!__LIB_1__.func_145())
			{
				__LIB_1__.func_342("MPCT_CASINO_RD1" /* GXT: You must be a VIP, CEO or MC President in order to access Casino Work. */, 0, 0);
			}
			else if (__LIB_4__.func_884(PLAYER::PLAYER_ID(), 243, 0) == 16)
			{
				__LIB_1__.func_342("MPCT_CASINO_RD4" /* GXT: Mission unavailable. A member of your gang is currently playing a casino game. */, 0, 0);
			}
			else if (__LIB_4__.func_884(PLAYER::PLAYER_ID(), 243, 0) == 15)
			{
				__LIB_1__.func_342("MPCT_CASINO_RD5" /* GXT: Mission unavailable. A member of your gang is currently at one with the animals. */, 0, 0);
			}
			else
			{
				__LIB_1__.func_342("MPCT_CASINO_RD3" /* GXT: Ms. Baker is not currently offering any jobs. */, 0, 0);
			}
			break;
		case 1:
			if (!Global_262145.f_27107 /* Tunable: 1858935833 */ && BitTest(uLocal_186, 1))
			{
				__LIB_1__.func_342("MPCT_CASINO_LD0" /* GXT: Request a limousine to be sent to your location. */, 0, 0);
			}
			else if (__LIB_19__.func_1(59) > 0)
			{
				Local_144 = { __LIB_6__.func_93(__LIB_19__.func_1(59), 0, 0) };
				__LIB_1__.func_342("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
				__LIB_5__.func_724(&Local_144);
			}
			else
			{
				switch (__LIB_1__.func_356())
				{
					case 1:
						__LIB_1__.func_342("MPCT_CASINO_LD2" /* GXT: A limousine has already been sent to your location. */, 0, 0);
						break;
					default:
						__LIB_1__.func_342("MPCT_CASINO_LD1" /* GXT: You cannot request a limousine at this time. */, 0, 0);
						break;
					}
			}
			break;
		case 2:
			if (!Global_262145.f_27108 /* Tunable: 1013621859 */ && BitTest(uLocal_186, 2))
			{
				__LIB_1__.func_342("MPCT_CASINO_VD0" /* GXT: Request a luxury car to be sent to your location. */, 0, 0);
			}
			else if (__LIB_19__.func_1(60) > 0)
			{
				Local_144 = { __LIB_6__.func_93(__LIB_19__.func_1(60), 0, 0) };
				__LIB_1__.func_342("CONT_REQ_CD" /* GXT: Next request available in ~a~. */, 0, 0);
				__LIB_5__.func_724(&Local_144);
			}
			else
			{
				switch (__LIB_1__.func_355())
				{
					case 1:
						__LIB_1__.func_342("MPCT_CASINO_VD2" /* GXT: A luxury car has already been sent to your location. */, 0, 0);
						break;
					default:
						__LIB_1__.func_342("MPCT_CASINO_VD1" /* GXT: You cannot request a luxury car at this time. */, 0, 0);
						break;
					}
			}
			break;
		default:
			__LIB_1__.func_342("", 0, 0);
			break;
	}
}

int func_616(int iParam0)//Position - 0x1A870
{
	return Global_1920255.f_11.f_147[__LIB_4__.func_902(iParam0)];
}

int func_619(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1AC93
{
	if ((__LIB_8__.func_151(iParam0, bParam3, bParam4) || __LIB_4__.func_906(iParam1, bParam3, bParam4)) || __LIB_4__.func_903(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_629(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1B1FF
{
	int iVar0;
	iVar0 = __LIB_4__.func_908(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + __LIB_4__.func_864(iParam0, iParam2));
	return iVar0;
}

int func_636(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1B65B
{
	int iVar0;
	iVar0 = __LIB_4__.func_866(iParam0, iParam1, iParam3);
	if (!__LIB_0__.func_114(iParam0))
	{
		iVar0 = (iVar0 + func_637(iParam0, iParam2));
	}
	return iVar0;
}

int func_637(int iParam0, int iParam1)//Position - 0x1B688
{
	switch (iParam0)
	{
		case 14:
		case 5:
		case 0:
		case 3:
		case 2:
			return 0;
		case 6:
			if (__LIB_4__.func_890(iParam1) + 1 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_649()//Position - 0x1BC37
{
	if (__LIB_0__.func_582() == __LIB_0__.func_160())
	{
		return 0;
	}
	return __LIB_4__.func_890(__LIB_0__.func_582());
}

int func_660(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1C195
{
	int iVar0;
	iVar0 = __LIB_4__.func_882(iParam0, iParam1, iParam2, iParam4);
	if (!__LIB_8__.func_144(iParam0))
	{
		if (iParam3 != __LIB_0__.func_160())
		{
			iVar0 = (iVar0 + __LIB_25__.func_972(iParam0, __LIB_4__.func_890(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (__LIB_4__.func_919(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_672(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1C636
{
	int iVar0;
	iVar0 = __LIB_4__.func_885(iParam0, iParam1, iParam2, iParam3);
	if (!__LIB_4__.func_884(iParam0))
	{
		iVar0 = (iVar0 + __LIB_11__.func_62(iParam0, func_649() + 1, -1, iParam2));
	}
	if (__LIB_4__.func_883(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_681(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1CE3C
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		case 157:
			return 4;
		case 167:
			return __LIB_4__.func_910(iParam1);
		case 170:
			return 2;
		case 171:
			return 0;
		case 172:
			return 5;
		case 173:
			return 14;
		case 168:
			return 8;
		case 178:
		case 188:
			return func_719(iParam1, iParam3, iParam4);
		case 225:
		case 226:
			return func_715(iParam1, iParam3, iParam4, 0, 0);
		case 227:
			return 0;
		case 229:
		case 230:
			return func_709(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
		case 233:
			return func_703(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
			return 6;
		case 190:
			return 18;
		case 191:
			return 0;
		case 192:
			return func_702(iParam1, iParam3);
		case 179:
			return 0;
		case 183:
			return 5;
		case 182:
			return 14;
		case 185:
			return 24;
		case 186:
			return 13;
		case 180:
			return 6;
		case 193:
			return 6;
		case 194:
			return 0;
		case 197:
			return 4;
		case 199:
			return 0;
		case 195:
			return 20;
		case 201:
			return 0;
		case 198:
			return 8;
		case 205:
			return 1;
		case 207:
			return 8;
		case 208:
			return 2;
		case 209:
			return 6;
		case 210:
			return 0;
		case 214:
			return 5;
		case 215:
			return 11;
		case 216:
			return 8;
		case 217:
			return 24;
		case 218:
			return 23;
		case 219:
			return 1;
		case 220:
			return 4;
		case 221:
			return 4;
		case 237:
		case 250:
			return __LIB_4__.func_900(iParam1, iParam3, iParam4);
		case 238:
		case 249:
			return __LIB_4__.func_899(iParam1);
		case 239:
			return 4;
		case 240:
			return 11;
		case 241:
			return 3;
		case 242:
			return 5;
		case 244:
			return 4;
		case 248:
			return 1;
		case 243:
			return func_694(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		case 158:
			return func_688(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		case 181:
			return func_682(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		default:
	}
	return 0;
}

int func_682(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1D12B
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + __LIB_4__.func_891(iParam0, -1));
	}
	if (!bParam6)
	{
		if (__LIB_4__.func_890(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + __LIB_4__.func_889(__LIB_4__.func_890(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (__LIB_14__.func_589(iParam0, iParam1))
		{
			iVar0 = (iVar0 + __LIB_4__.func_888(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_688(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1D235
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0++;
			break;
		case 24:
			iVar0++;
			break;
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 4;
					break;
				case 31:
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		case 33:
			switch (iParam1)
			{
				case 89:
					iVar0++;
					break;
				case 90:
					iVar0 += 2;
					break;
			}
			break;
		case 36:
			iVar0 += 2;
			break;
		case 37:
			iVar0 += 2;
			break;
		case 38:
			iVar0++;
			break;
		case 8:
			iVar0 += 7;
			break;
		case 13:
			switch (iParam1)
			{
				case 38:
					iVar0 += 3;
					break;
				case 39:
					iVar0 += 3;
					break;
				case 40:
					iVar0 += 4;
					break;
			}
			break;
		case 16:
			iVar0 += 12;
			break;
		case 35:
			iVar0 += 4;
			break;
		case 4:
			iVar0 += 16;
			break;
		case 46:
			iVar0++;
			break;
		case 9:
			iVar0 += 7;
			break;
		case 14:
			iVar0 += 7;
			break;
		case 17:
			iVar0 += 7;
			break;
		case 47:
			iVar0 += 2;
			break;
		case 11:
			iVar0 += 3;
			break;
		case 18:
			iVar0 += 4;
			break;
		case 6:
			iVar0 += 11;
			break;
		case 48:
			iVar0 += 2;
			break;
		case 44:
			iVar0 += 2;
			break;
		case 21:
			iVar0 += 8;
			break;
		case 22:
			iVar0 += 3;
			break;
		case 7:
			iVar0 += 7;
			break;
		case 15:
			iVar0++;
			break;
		case 2:
			iVar0++;
			break;
		case 34:
			iVar0 += 5;
			break;
		case 27:
			iVar0 += 9;
			break;
		case 26:
			iVar0 += 3;
			break;
		case 31:
			iVar0++;
			break;
		case 3:
			iVar0 += 21;
			break;
		case 12:
			iVar0 += 20;
			break;
		case 41:
			iVar0 += 11;
			break;
		case 49:
			iVar0 += 3;
			break;
		case 29:
			iVar0++;
			break;
		case 5:
			iVar0 += 3;
			break;
		case 50:
			iVar0 += 4;
			break;
		case 23:
			iVar0 += 4;
			break;
		case 20:
			iVar0 += 3;
			break;
		case 32:
			iVar0 = iVar0;
			break;
		case 51:
			iVar0 += 4;
			break;
		case 52:
			iVar0 += 6;
			break;
		case 39:
			iVar0 += 2;
			break;
		case 40:
			iVar0++;
			break;
		case 25:
			iVar0 += 3;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + __LIB_4__.func_894(iParam0, -1));
	}
	if (!bParam6)
	{
		if (__LIB_4__.func_893(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + __LIB_9__.func_628(__LIB_4__.func_890(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (__LIB_8__.func_146(iParam0, iParam1))
		{
			iVar0 = (iVar0 + __LIB_4__.func_892(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_694(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1D9E9
{
	int iVar0;
	switch (iParam0)
	{
		case 13:
			iVar0 += 4;
			break;
		case 1:
			iVar0 += 10;
			break;
		case 15:
			iVar0 += 21;
			break;
		case 14:
			iVar0 += 2;
			break;
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 4;
					break;
				case 36:
					iVar0 += 5;
					break;
				case 37:
					iVar0 += 5;
					break;
			}
			break;
		case 5:
			iVar0 += 3;
			break;
		case 6:
			iVar0 += 2;
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 += 5;
					break;
				case 1:
					iVar0 += 5;
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0 += 2;
					break;
				case 32:
					iVar0++;
					break;
				case 33:
					iVar0 += 2;
					break;
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		case 12:
			iVar0 += 3;
			break;
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						case 1:
							iVar0 += 4;
							break;
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				case 29:
					switch (iParam4)
					{
						case 0:
							iVar0 += 4;
							break;
						case 1:
							iVar0 += 3;
							break;
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				case 30:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						case 1:
							iVar0 += 3;
							break;
						case 2:
							iVar0 += 3;
							break;
					}
					break;
			}
			break;
		case 3:
			iVar0 += 6;
			break;
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 7;
					break;
				case 13:
					iVar0 += 10;
					break;
				case 14:
					iVar0 += 8;
					break;
			}
			break;
		case 2:
			iVar0 += 3;
			break;
		case 8:
			iVar0 = iVar0;
			break;
		case 7:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (__LIB_0__.func_114(iParam0))
		{
			iVar0 = (iVar0 + func_637(iParam0, iParam2));
		}
		iVar0 = (iVar0 + __LIB_4__.func_898(iParam0, -1));
	}
	if (!bParam6)
	{
		if (__LIB_4__.func_897(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + __LIB_4__.func_896(__LIB_4__.func_890(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (__LIB_8__.func_147(iParam0, iParam1))
		{
			iVar0 = (iVar0 + __LIB_4__.func_895(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_702(int iParam0, int iParam1)//Position - 0x1E070
{
	int iVar0;
	switch (iParam0)
	{
		case 20:
			iVar0 = iVar0;
			break;
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 7;
					break;
				case 2:
					iVar0 += 6;
					break;
				case 3:
					iVar0 += 4;
					break;
				case 4:
					iVar0 += 2;
					break;
				case 5:
					iVar0 += 3;
					break;
				case 6:
					iVar0 += 2;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 4;
					break;
				case 8:
					iVar0 += 4;
					break;
				case 9:
					iVar0 += 2;
					break;
				case 10:
					iVar0 += 2;
					break;
				case 11:
					iVar0 += 2;
					break;
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 2;
					break;
				case 14:
					iVar0 += 4;
					break;
				case 15:
					iVar0 += 6;
					break;
				case 16:
					iVar0 += 3;
					break;
				case 17:
					iVar0 += 3;
					break;
				case 18:
					iVar0 += 2;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				case 20:
					iVar0 += 4;
					break;
				case 21:
					iVar0 += 6;
					break;
				case 22:
					iVar0 += 2;
					break;
				case 23:
					iVar0 += 4;
					break;
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				case 20:
					iVar0 += 4;
					break;
				case 21:
					iVar0 += 6;
					break;
				case 22:
					iVar0 += 2;
					break;
				case 23:
					iVar0 += 4;
					break;
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 5;
					break;
				case 32:
					iVar0 += 2;
					break;
				case 33:
					iVar0 += 3;
					break;
				case 34:
					iVar0 += 5;
					break;
				case 35:
					iVar0 += 5;
					break;
				case 36:
					iVar0 += 5;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				case 69:
					iVar0 = iVar0;
					break;
				case 70:
					iVar0 = iVar0;
					break;
				case 71:
					iVar0 = iVar0;
					break;
				case 72:
					iVar0 = iVar0;
					break;
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0++;
					break;
				case 75:
					iVar0++;
					break;
				case 76:
					iVar0++;
					break;
				case 77:
					iVar0++;
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 = iVar0;
					break;
				case 79:
					iVar0 = iVar0;
					break;
				case 80:
					iVar0 = iVar0;
					break;
				case 81:
					iVar0 = iVar0;
					break;
				case 82:
					iVar0 = iVar0;
					break;
				case 83:
					iVar0 = iVar0;
					break;
				case 84:
					iVar0 = iVar0;
					break;
			}
			break;
		case 7:
			iVar0 += 4;
			break;
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 6;
					break;
				case 63:
					iVar0 += 6;
					break;
				case 64:
					iVar0 += 6;
					break;
				case 65:
					iVar0 += 6;
					break;
				case 66:
					iVar0 += 6;
					break;
				case 67:
					iVar0 += 6;
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 = iVar0;
					break;
				case 86:
					iVar0 = iVar0;
					break;
				case 87:
					iVar0 = iVar0;
					break;
				case 88:
					iVar0 = iVar0;
					break;
				case 89:
					iVar0 = iVar0;
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				case 91:
					iVar0 += 2;
					break;
				case 92:
					iVar0 += 2;
					break;
				case 93:
					iVar0 += 2;
					break;
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 3;
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 4;
					break;
				case 39:
					iVar0 += 4;
					break;
				case 40:
					iVar0 += 4;
					break;
				case 41:
					iVar0 += 4;
					break;
			}
			break;
		case 15:
			iVar0 = iVar0;
			break;
		case 16:
			iVar0 = iVar0;
			break;
		case 17:
			iVar0 = iVar0;
			break;
		case 18:
			iVar0 = iVar0;
			break;
		case 19:
			iVar0 = iVar0;
			break;
		default:
			iVar0 = iVar0;
			break;
	}
	if ((__LIB_4__.func_916(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + __LIB_4__.func_913(iParam0, func_649() + 1));
	}
	return iVar0;
}

int func_703(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1E657
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		case 1:
			iVar0 += 5;
			break;
		case 2:
			iVar0 += 2;
			break;
		case 3:
			iVar0++;
			break;
		case 4:
			iVar0 += 3;
			break;
		case 5:
			iVar0 += 2;
			break;
		case 8:
			iVar0 += 3;
			break;
		case 6:
			iVar0++;
			break;
		case 12:
			iVar0 += 2;
			break;
		case 7:
			iVar0 += 6;
			break;
		case 9:
			iVar0 = iVar0;
			break;
		case 11:
			iVar0 = iVar0;
			break;
		case 13:
			iVar0 += 2;
			break;
		case 10:
			iVar0 += 4;
			break;
	}
	if (!bParam5)
	{
		if (__LIB_4__.func_873(iParam0))
		{
			if (iParam3 != __LIB_0__.func_160())
			{
				iVar0 = (iVar0 + __LIB_19__.func_8(iParam0, __LIB_4__.func_890(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != __LIB_0__.func_160())
		{
			iVar0 = (iVar0 + __LIB_8__.func_148(iParam0, __LIB_4__.func_890(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (__LIB_4__.func_902(0, iParam1) != -1)
		{
			if (iParam3 != __LIB_0__.func_160())
			{
				iVar0 = (iVar0 + __LIB_1__.func_363(__LIB_4__.func_890(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_705(iParam0))
		{
			iVar0 = (iVar0 + __LIB_1__.func_939(iParam0));
		}
	}
	return iVar0;
}

bool func_705(int iParam0)//Position - 0x1E811
{
	return __LIB_1__.func_939(iParam0) > 0;
}

int func_709(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1E8D2
{
	int iVar0;
	switch (iParam0)
	{
		case 11:
			iVar0 += 9;
			break;
		case 1:
			iVar0 = iVar0;
			break;
		case 7:
			iVar0 += 10;
			break;
		case 2:
			iVar0 += 12;
			break;
		case 4:
			iVar0 += 10;
			break;
		case 8:
			iVar0++;
			break;
		case 5:
			iVar0 += 2;
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0++;
					break;
				case 1:
					iVar0++;
					break;
				case 2:
					iVar0 = iVar0;
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 3:
					iVar0 += 4;
					break;
				case 4:
					iVar0 += 2;
					break;
				case 5:
					iVar0 += 5;
					break;
			}
			break;
		case 3:
			if (iParam2 >= 4)
			{
				iVar0 += 10;
			}
			else if (iParam2 == 3)
			{
				iVar0 += 8;
			}
			else if (iParam2 == 2)
			{
				iVar0 += 7;
			}
			else if (iParam2 == 1)
			{
				iVar0 += 6;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 34:
					iVar0++;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 6:
					iVar0++;
					break;
				case 7:
					iVar0 += 4;
					break;
				case 8:
					iVar0 += 2;
					break;
			}
			break;
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		case 20:
			iVar0 += 5;
			break;
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		case 16:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		case 17:
			iVar0 += 5;
			break;
		case 26:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (__LIB_8__.func_144(iParam0))
		{
			if (iParam3 != __LIB_0__.func_160())
			{
				iVar0 = (iVar0 + __LIB_25__.func_972(iParam0, __LIB_4__.func_890(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != __LIB_0__.func_160())
		{
			iVar0 = (iVar0 + __LIB_4__.func_905(iParam0, __LIB_4__.func_890(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (__LIB_4__.func_904(0, iParam1) != -1)
		{
			if (iParam3 != __LIB_0__.func_160())
			{
				iVar0 = (iVar0 + __LIB_8__.func_150(__LIB_4__.func_890(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (__LIB_8__.func_149(iParam0))
		{
			iVar0 = (iVar0 + __LIB_4__.func_903(iParam0));
		}
	}
	return iVar0;
}

int func_715(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1F1AB
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 3;
					break;
				case 1:
					iVar0 += 3;
					break;
				case 2:
					iVar0 += 3;
					break;
			}
			break;
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 3;
					break;
				case 10:
					iVar0 += 3;
					break;
				case 11:
					iVar0 += 2;
					break;
				case 12:
					iVar0 += 2;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 14:
					iVar0 += 2;
					break;
				case 15:
					iVar0 += 4;
					break;
				case 13:
					iVar0 += 2;
					break;
			}
			break;
		case 5:
			iVar0 += 4;
			break;
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				case 20:
					iVar0 += 5;
					break;
				case 21:
					iVar0 += 5;
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 4;
					break;
				case 23:
					iVar0 += 3;
					break;
				case 24:
					iVar0 += 3;
					break;
			}
			if (__LIB_11__.func_62(iParam0, func_649() + 1, -1, iParam2) == 1)
			{
				iVar0++;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 5;
					break;
				case 26:
					iVar0 += 5;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 2;
					break;
				case 28:
					iVar0 += 2;
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 4;
					break;
				case 30:
					iVar0 += 4;
					break;
				case 31:
					iVar0 += 4;
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 2;
					break;
				case 33:
					iVar0 += 2;
					break;
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		case 12:
			iVar0 = iVar0;
			break;
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 3;
					break;
				case 36:
					iVar0 += 3;
					break;
				case 37:
					iVar0 += 2;
					break;
			}
			break;
		case 14:
			iVar0 += 8;
			break;
		case 15:
			iVar0 = iVar0;
			break;
		case 16:
			iVar0 = iVar0;
			break;
		case 17:
			iVar0 = iVar0;
			break;
		case 19:
			iVar0 = iVar0;
			break;
		case 18:
			iVar0 = (iVar0 + iParam2);
			break;
		case 20:
			iVar0 += 5;
			break;
	}
	if (!bParam4)
	{
		if (__LIB_4__.func_884(iParam0))
		{
			iVar0 = (iVar0 + __LIB_11__.func_62(iParam0, func_649() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + __LIB_4__.func_907(iParam0, func_649() + 1));
	}
	if (!bParam3)
	{
		if (__LIB_8__.func_151(iParam0))
		{
			iVar0 = (iVar0 + __LIB_4__.func_906(iParam0));
		}
	}
	return iVar0;
}

int func_719(int iParam0, int iParam1, int iParam2)//Position - 0x1F5FE
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		case 1:
			iVar0 = iVar0;
			break;
		case 7:
			iVar0 = iVar0;
			break;
		case 8:
			iVar0 = iVar0;
			break;
		case 5:
			iVar0 = iVar0;
			break;
		case 11:
			iVar0 += 3;
			break;
		case 13:
			iVar0 = iVar0;
			break;
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 2;
					break;
				case 2:
					iVar0 += 2;
					break;
				case 3:
					iVar0 += 2;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 2;
					break;
				case 19:
					iVar0 += 2;
					break;
				case 20:
					iVar0 += 2;
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 7;
					break;
				case 22:
					iVar0 += 7;
					break;
				case 23:
					iVar0 += 7;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 = iVar0;
					break;
				case 28:
					iVar0 = iVar0;
					break;
				case 29:
					iVar0 = iVar0;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 2;
					break;
				case 31:
					iVar0 += 2;
					break;
				case 32:
					iVar0 += 2;
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 7;
					break;
				case 37:
					iVar0 += 7;
					break;
				case 38:
					iVar0 += 7;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 39:
					iVar0 += 4;
					break;
				case 40:
					iVar0 += 4;
					break;
				case 41:
					iVar0 += 6;
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 2;
					break;
				case 43:
					iVar0 += 2;
					break;
				case 44:
					iVar0 += 2;
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 6;
					break;
				case 46:
					iVar0 += 6;
					break;
				case 47:
					iVar0 += 6;
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 2;
					break;
				case 49:
					iVar0 += 2;
					break;
				case 50:
					iVar0 += 2;
					break;
			}
			break;
		case 12:
			iVar0 += 11;
			break;
	}
	iVar0 = (iVar0 + __LIB_4__.func_909(iParam0, func_649() + 1, iParam2));
	iVar0 = (iVar0 + __LIB_19__.func_10(iParam0));
	return iVar0;
}

int func_724(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1FA6A
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		case 167:
			return __LIB_4__.func_919(iParam1);
		case 168:
			return 12;
		case 170:
			return 4;
		case 171:
			return 0;
		case 172:
			return 0;
		case 173:
			return 4;
		case 178:
		case 188:
			return __LIB_25__.func_346(iParam1, iParam2, iParam3);
		case 225:
		case 226:
			return __LIB_25__.func_779(iParam1, iParam2, iParam3, 0);
		case 227:
			return 0;
		case 229:
		case 230:
			return __LIB_25__.func_778(iParam1, iParam2, iParam3, 0);
		case 233:
			return func_739(iParam1, iParam2, iParam3, 0);
		case 190:
			return 20;
		case 191:
			return 4;
		case 192:
			return func_738(iParam1, iParam2);
		case 179:
			return 0;
		case 183:
			return 15;
		case 182:
			return 20;
		case 185:
			return 21;
		case 186:
			return 36;
		case 180:
			return 10;
		case 193:
			return 10;
		case 194:
			return 0;
		case 197:
			return 12;
		case 199:
			return 6;
		case 195:
			return 15;
		case 201:
			return 0;
		case 198:
			return 18;
		case 205:
			return 1;
		case 207:
			return 24;
		case 208:
			return 14;
		case 209:
			return 11;
		case 210:
			return 0;
		case 214:
			return 12;
		case 215:
			return 20;
		case 216:
			return 20;
		case 217:
			return __LIB_4__.func_915();
		case 218:
			return __LIB_4__.func_914();
		case 219:
			return 0;
		case 220:
			return 0;
		case 221:
			return 0;
		case 237:
		case 250:
			return __LIB_4__.func_913(iParam1, iParam2, iParam3);
		case 238:
		case 249:
			return __LIB_4__.func_912(iParam1, iParam2);
		case 239:
			return 6;
		case 240:
			return 11;
		case 241:
			return 14;
		case 242:
			return 14;
		case 244:
			return 9;
		case 248:
			return 10;
		case 243:
			return __LIB_25__.func_777(iParam1, iParam2, 0, -1);
		case 158:
			return __LIB_25__.func_776(iParam1, iParam2, 0, -1);
		case 181:
			return func_725(iParam1, iParam2, 0, -1);
		default:
	}
	return 0;
}

int func_725(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1FD32
{
	int iVar0;
	switch (iParam0)
	{
		case 2:
			iVar0 += 6;
			break;
	}
	if (!bParam2)
	{
		if (__LIB_14__.func_589(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_726(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_726(int iParam0, var uParam1)//Position - 0x1FD70
{
	if (__LIB_14__.func_589(iParam0, uParam1))
	{
		return (__LIB_4__.func_888(iParam0, uParam1) + __LIB_4__.func_888(iParam0, uParam1));
	}
	return 0;
}

int func_738(int iParam0, int iParam1)//Position - 0x206BF
{
	int iVar0;
	switch (iParam0)
	{
		case 20:
			iVar0 += 2;
			break;
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 16;
					break;
				case 2:
					iVar0 += 14;
					break;
				case 3:
					iVar0 += 13;
					break;
				case 4:
					iVar0 += 12;
					break;
				case 5:
					iVar0 += 12;
					break;
				case 6:
					iVar0 += 12;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 12;
					break;
				case 8:
					iVar0 += 12;
					break;
				case 9:
					iVar0 += 12;
					break;
				case 10:
					iVar0 += 12;
					break;
				case 11:
					iVar0 += 12;
					break;
				case 12:
					iVar0 += 12;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 17;
					break;
				case 14:
					iVar0 += 12;
					break;
				case 15:
					iVar0 += 13;
					break;
				case 16:
					iVar0 += 14;
					break;
				case 17:
					iVar0 += 12;
					break;
				case 18:
					iVar0 += 14;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 14;
					break;
				case 20:
					iVar0 += 14;
					break;
				case 21:
					iVar0 += 14;
					break;
				case 22:
					iVar0 += 14;
					break;
				case 23:
					iVar0 += 14;
					break;
				case 24:
					iVar0 += 14;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 25:
					iVar0 += 4;
					break;
				case 26:
					iVar0 += 4;
					break;
				case 27:
					iVar0 += 4;
					break;
				case 28:
					iVar0 += 4;
					break;
				case 29:
					iVar0 += 4;
					break;
				case 30:
					iVar0 += 4;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 13;
					break;
				case 32:
					iVar0 += 13;
					break;
				case 33:
					iVar0 += 13;
					break;
				case 34:
					iVar0 += 13;
					break;
				case 35:
					iVar0 += 13;
					break;
				case 36:
					iVar0 += 13;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				case 69:
					iVar0 = iVar0;
					break;
				case 70:
					iVar0 = iVar0;
					break;
				case 71:
					iVar0 = iVar0;
					break;
				case 72:
					iVar0 = iVar0;
					break;
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0 += 10;
					break;
				case 75:
					iVar0 += 10;
					break;
				case 76:
					iVar0 += 10;
					break;
				case 77:
					iVar0 += 10;
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 += 3;
					break;
				case 79:
					iVar0 += 3;
					break;
				case 80:
					iVar0 += 3;
					break;
				case 81:
					iVar0 += 3;
					break;
				case 82:
					iVar0 += 5;
					break;
				case 83:
					iVar0 += 3;
					break;
				case 84:
					iVar0 += 3;
					break;
			}
			break;
		case 7:
			iVar0 += 8;
			break;
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 8;
					break;
				case 63:
					iVar0 += 8;
					break;
				case 64:
					iVar0 += 8;
					break;
				case 65:
					iVar0 += 8;
					break;
				case 66:
					iVar0 += 8;
					break;
				case 67:
					iVar0 += 8;
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 += 3;
					break;
				case 86:
					iVar0 += 3;
					break;
				case 87:
					iVar0 += 3;
					break;
				case 88:
					iVar0 += 3;
					break;
				case 89:
					iVar0 += 3;
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				case 91:
					iVar0 += 2;
					break;
				case 92:
					iVar0 += 2;
					break;
				case 93:
					iVar0 += 2;
					break;
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 18;
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 8;
					break;
				case 39:
					iVar0 += 8;
					break;
				case 40:
					iVar0 += 8;
					break;
				case 41:
					iVar0 += 8;
					break;
			}
			break;
		case 15:
			iVar0 = iVar0;
			break;
		case 16:
			iVar0 = iVar0;
			break;
		case 17:
			iVar0 = iVar0;
			break;
		case 18:
			iVar0 = iVar0;
			break;
		case 19:
			iVar0 = iVar0;
			break;
		default:
			iVar0 = iVar0;
			break;
	}
	if (iParam0 == 12 || iParam0 == 9)
	{
		iVar0 = (iVar0 + __LIB_4__.func_913(iParam0, func_649() + 1));
	}
	return iVar0;
}

int func_739(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x20C9C
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		case 1:
			iVar0 += 14;
			break;
		case 2:
			iVar0 += 12;
			break;
		case 3:
			iVar0 += 23;
			break;
		case 4:
			iVar0 += 20;
			break;
		case 5:
			iVar0 += 5;
			break;
		case 8:
			iVar0 += 11;
			break;
		case 6:
			iVar0 += 7;
			break;
		case 12:
			iVar0 += 8;
			break;
		case 7:
			iVar0 += 18;
			break;
		case 9:
			iVar0 = iVar0;
			break;
		case 11:
			iVar0 += 12;
			break;
		case 13:
			iVar0++;
			break;
		case 10:
			iVar0 += 16;
			break;
	}
	if (!bParam3)
	{
		if (func_705(iParam0))
		{
			iVar0 = (iVar0 + func_740(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_740(int iParam0, var uParam1)//Position - 0x20D9B
{
	if (func_705(iParam0))
	{
		return (__LIB_1__.func_939(iParam0) + __LIB_4__.func_916(iParam0, uParam1));
	}
	return 0;
}

void func_752()//Position - 0x21807
{
	bool bVar0;
	__LIB_1__.func_193(0, 0);
	__LIB_1__.func_319("MPCT_CASINO_M" /* GXT: MS. BAKER */);
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, 0, 0, 0, 0);
	bVar0 = true;
	if (Global_262145.f_27106 /* Tunable: -1284248636 */ || !func_753())
	{
		bVar0 = false;
	}
	__LIB_18__.func_477(0, "MPCT_CASINO_M_R" /* GXT: Request Work */, 0, bVar0, 0, 0, 0);
	bVar0 = true;
	if (Global_262145.f_27107 /* Tunable: 1858935833 */ || !BitTest(uLocal_186, 1))
	{
		bVar0 = false;
	}
	__LIB_18__.func_477(1, "MPCT_CASINO_M_L" /* GXT: Limousine Service */, 0, bVar0, 0, 0, 0);
	bVar0 = true;
	if (Global_262145.f_27108 /* Tunable: 1013621859 */ || !BitTest(uLocal_186, 2))
	{
		bVar0 = false;
	}
	__LIB_18__.func_477(2, "MPCT_CASINO_M_V" /* GXT: Car Service */, 0, bVar0, 0, 0, 0);
	__LIB_4__.func_222(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
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
	if (__LIB_1__.func_155(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (!__LIB_1__.func_145())
	{
		return 0;
	}
	if (__LIB_0__.func_286(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = __LIB_4__.func_884(PLAYER::PLAYER_ID(), 243, 0);
	if (iVar0 != -1)
	{
		return 0;
	}
	if (__LIB_12__.func_725())
	{
		return 0;
	}
	return 1;
}

int func_755()//Position - 0x21999
{
	if (__LIB_0__.func_649(&Global_1966143) && !__LIB_2__.func_47(&Global_1966143, Global_262145.f_27242 /* Tunable: VC_WORK_REQUEST_COOLDOWN */, 0))
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
		if (__LIB_4__.func_829() != -1)
		{
			Local_184.f_0 = __LIB_4__.func_829();
		}
	}
	if (Local_184.f_1 == -1)
	{
		if (__LIB_4__.func_829() != -1)
		{
			Local_184.f_1 = __LIB_4__.func_828();
		}
	}
	if (Local_184.f_3)
	{
		if (!__LIB_0__.func_75())
		{
			return 1;
		}
	}
	else if (!__LIB_0__.func_75())
	{
		if (!Local_184.f_2)
		{
			if ((__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 243 && __LIB_0__.func_286(PLAYER::PLAYER_ID())) && Local_184.f_0 != -1)
			{
				sVar0 = func_759(243, Local_184.f_0, Local_184.f_1);
				func_1(Local_122.f_1, "CAGTAU", sVar0, &Local_166, 0);
				Local_184.f_2 = 1;
				__LIB_0__.func_495(&(Local_184.f_4), 0, 0);
			}
			else if (__LIB_2__.func_47(&(Local_184.f_4), 10000, 0))
			{
				func_758();
				return 1;
			}
		}
		else if (__LIB_2__.func_47(&(Local_184.f_4), 3000, 0))
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
	iVar0 = __LIB_8__.func_125(PLAYER::PLAYER_ID());
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
							if (func_649() == 0)
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
							if (func_649() == 0)
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
				if (__LIB_19__.func_1(59) < 0 && func_768())
				{
					MISC::SET_BIT(&uLocal_186, 1);
					MISC::SET_BIT(&uLocal_186, 0);
				}
			}
			else if (__LIB_19__.func_1(59) > 0 || !func_768())
			{
				MISC::CLEAR_BIT(&uLocal_186, 1);
				MISC::SET_BIT(&uLocal_186, 0);
			}
		}
		if (Local_122.f_178 == 23 || Local_122.f_178 == 24)
		{
			if (!BitTest(uLocal_186, 2))
			{
				if (__LIB_19__.func_1(60) < 0 && func_765())
				{
					MISC::SET_BIT(&uLocal_186, 2);
					MISC::SET_BIT(&uLocal_186, 0);
				}
			}
			else if (__LIB_19__.func_1(60) > 0 || !func_765())
			{
				MISC::CLEAR_BIT(&uLocal_186, 2);
				MISC::SET_BIT(&uLocal_186, 0);
			}
		}
	}
}

int func_765()//Position - 0x2209B
{
	if (__LIB_1__.func_113(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	if (!func_438())
	{
		return 0;
	}
	if (__LIB_1__.func_365(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_1__.func_364(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_768()//Position - 0x220FB
{
	if (__LIB_19__.func_1(59) > 0)
	{
		return 0;
	}
	if (__LIB_1__.func_113(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	if (!func_438())
	{
		return 0;
	}
	if (__LIB_1__.func_220(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_1__.func_366(PLAYER::PLAYER_ID()))
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
			if (__LIB_7__.func_161(0, -1, 1))
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
			if (__LIB_7__.func_161(0, -1, 0))
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
	__LIB_4__.func_222(-1);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
		__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
	}
	else
	{
		__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
		__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
	}
	MISC::SET_BIT(&(Local_122.f_359), 6);
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = 4;
	return 1;
}

void func_773()//Position - 0x22277
{
	int iVar0;
	__LIB_1__.func_193(0, 0);
	__LIB_1__.func_319("MPCT_PA_HEL" /* GXT: CHOOSE HELICOPTER */);
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, 0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_18__.func_477(iVar0, __LIB_5__.func_849(func_839(iVar0)), 0, func_774(iVar0), 0, 0, 0);
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
				iVar0 = __LIB_38__.func_229(iParam0, iVar1);
				if (iVar0 > -1)
				{
					if (BitTest(Global_2359296[__LIB_0__.func_153() /*5567*/].f_1[(iVar0 / 32)], (iVar0 % 32)))
					{
						return 1;
					}
				}
				iVar1++;
			}
		}
		else
		{
			iVar0 = __LIB_38__.func_229(iParam0, iParam1);
			if (iVar0 > -1)
			{
				return BitTest(Global_2359296[__LIB_0__.func_153() /*5567*/].f_1[(iVar0 / 32)], (iVar0 % 32));
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
		if (Global_2359296[__LIB_0__.func_153() /*5567*/].f_1[iVar0] != 0)
		{
			iVar1 = Global_2359296[__LIB_0__.func_153() /*5567*/].f_1[iVar0];
			iVar2 = __LIB_38__.func_229(245, 0);
			if (iVar0 == (iVar2 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar2 % 32));
			}
			iVar3 = __LIB_38__.func_229(323, 0);
			if (iVar0 == (iVar3 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar3 % 32));
			}
			iVar4 = __LIB_38__.func_229(324, 0);
			if (iVar0 == (iVar4 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar4 % 32));
			}
			iVar5 = __LIB_38__.func_229(357, 0);
			if (iVar0 == (iVar5 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar5 % 32));
			}
			iVar6 = __LIB_38__.func_229(402, 0);
			if (iVar0 == (iVar6 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar6 % 32));
			}
			iVar7 = __LIB_38__.func_229(518, 0);
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
	__LIB_1__.func_193(0, 0);
	if (func_170())
	{
		__LIB_1__.func_319("MPCT_PA_AGH" /* GXT: EXECUTIVE ASSISTANT */);
	}
	else
	{
		__LIB_1__.func_319("MPCT_PA_AGHF" /* GXT: EXECUTIVE ASSISTANT */);
	}
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, 0, 0, 0, 0);
	bVar2 = true;
	if (__LIB_2__.func_144(PLAYER::PLAYER_ID()))
	{
		iVar1 = __LIB_19__.func_1(43);
		if ((iVar1 > 0 || !func_279(43)) || !func_309(43))
		{
			bVar2 = false;
		}
		if (!func_171(__LIB_1__.func_165()))
		{
			bVar2 = false;
		}
		func_512(43, iVar0, "MPCT_PA_IMP0" /* GXT: Recover vehicle from impound */, bVar2);
		__LIB_18__.func_477(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		func_434(func_86(43), 0);
	}
	else
	{
		__LIB_18__.func_477(iVar0, "MPCT_PA_IMP0" /* GXT: Recover vehicle from impound */, 0, 0, 0, 0, 0);
		__LIB_18__.func_477(iVar0, "", 1, 0, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	iVar0++;
	bVar2 = true;
	if (__LIB_2__.func_144(PLAYER::PLAYER_ID()))
	{
		iVar1 = __LIB_19__.func_1(44);
		if ((iVar1 > 0 || !func_279(44)) || !func_309(44))
		{
			bVar2 = false;
		}
		if (!__LIB_23__.func_189())
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
		__LIB_18__.func_477(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		func_434(func_86(44), 0);
	}
	else
	{
		__LIB_18__.func_477(iVar0, "MPCT_PA_YAH0" /* GXT: Request Luxury Helicopter */, 0, 0, 0, 0, 0);
		__LIB_18__.func_477(iVar0, "", 1, 0, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	iVar0++;
	__LIB_4__.func_222(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = iVar0;
}

int func_841()//Position - 0x2894C
{
	if (__LIB_23__.func_189())
	{
		if (!iLocal_158)
		{
			iLocal_158 = 1;
			return 1;
		}
	}
	else if (!__LIB_23__.func_189())
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
			if (__LIB_7__.func_161(0, -1, 1))
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
			if (__LIB_7__.func_161(0, -1, 0))
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
			if (__LIB_7__.func_161(0, -1, 0))
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
	__LIB_4__.func_222(-1);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
		__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
	}
	else
	{
		__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
		__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
	}
	MISC::SET_BIT(&(Local_122.f_359), 6);
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
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
	__LIB_1__.func_193(0, 0);
	__LIB_1__.func_319("MPCT_PERVEH1" /* GXT: SELECT VEHICLE FOR DELIVERY */);
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, 0, 0, 0, 0);
	*uParam2 = 0;
	*uParam1 = 0;
	if (*uParam3 < 29)
	{
		if (__LIB_8__.func_48(*uParam3, -1) > 0 && !__LIB_25__.func_472(*uParam3))
		{
			iVar3 = __LIB_18__.func_591(*uParam3, -1, 1);
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
				iVar1 = (__LIB_18__.func_704(*uParam3) + iVar0);
				__LIB_1__.func_327(iVar1, &iVar2, 1);
				func_845(uParam0, iVar0, iVar1, iVar2, *uParam3, uParam1, uParam2);
				iVar0++;
			}
		}
	}
	else
	{
		iVar4 = __LIB_1__.func_187(*uParam3);
		iVar0 = 0;
		while (iVar0 < __LIB_4__.func_573(iVar4))
		{
			iVar1 = (__LIB_1__.func_325(iVar4) + iVar0);
			__LIB_1__.func_327(iVar1, &iVar2, 1);
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
	if ((iParam3 >= 0 && STREAMING::IS_MODEL_A_VEHICLE(__LIB_5__.func_725(iParam3))) && !__LIB_1__.func_322(iParam2))
	{
		func_873(iParam3);
		iVar0 = __LIB_5__.func_725(iParam3);
		if (__LIB_1__.func_371(iVar0) && __LIB_0__.func_113(iVar0))
		{
			if (!__LIB_7__.func_88(iVar0, 1) && !__LIB_1__.func_177(iVar0))
			{
				if (__LIB_8__.func_477(iVar0) && !__LIB_19__.func_305(iParam3))
				{
					if (!BitTest(Global_1585857[iParam3 /*142*/].f_103, 10))
					{
						iVar1 = 1;
						if (__LIB_2__.func_356(&(Global_1585857[iParam3 /*142*/])))
						{
							iVar1++;
						}
						if (__LIB_2__.func_355(__LIB_5__.func_725(iParam3), Global_1585857[iParam3 /*142*/].f_77, Global_1585857[iParam3 /*142*/].f_9[10]) && __LIB_2__.func_354(__LIB_5__.func_725(iParam3)))
						{
							iVar1++;
						}
						Var3 = { __LIB_9__.func_296(-1, iParam2, 1) };
						if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 1))
						{
							if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 2))
							{
								StringCopy(&Var2, "MPCT_PVNAMEDES" /* GXT: ~a~ ~a~ (Destroyed) */, 24);
								StringIntConCat(&Var2, iVar1, 24);
								__LIB_18__.func_477(*uParam6, &Var2, iVar1, 1, 0, 0, 0);
							}
							else
							{
								StringCopy(&Var2, "MPCT_PVNAMESCR", 24);
								StringIntConCat(&Var2, iVar1, 24);
								__LIB_18__.func_477(*uParam6, &Var2, iVar1, 1, 0, 0, 0);
							}
						}
						else if (func_171(iParam3))
						{
							StringCopy(&Var2, "MPCT_PVNAMEIMP" /* GXT: ~a~ ~a~ (Impounded) */, 24);
							StringIntConCat(&Var2, iVar1, 24);
							__LIB_18__.func_477(*uParam6, &Var2, iVar1, 1, 0, 0, 0);
						}
						else if (((((((((((((iParam4 < 29 && iParam1 >= Global_1312193[__LIB_8__.func_48(iParam4, -1) /*1951*/].f_33) && iParam4 != 13) && iParam4 != 14) && iParam4 != 15) && iParam4 != 16) && iParam4 != 17) && iParam4 != 18) && iParam4 != 19) && iParam4 != 20) && iParam4 != 21) && iParam4 != 22) && iParam4 != 25) && iParam4 != 26)
						{
							StringCopy(&Var2, "MPCT_PVNAMESTO" /* GXT: ~a~ ~a~ (Storage) */, 24);
							StringIntConCat(&Var2, iVar1, 24);
							__LIB_18__.func_477(*uParam6, &Var2, iVar1, 1, 0, 0, 0);
						}
						else
						{
							StringCopy(&Var2, "MPCT_PVNAME" /* GXT: ~a~ ~a~ */, 24);
							StringIntConCat(&Var2, iVar1, 24);
							__LIB_18__.func_477(*uParam6, &Var2, iVar1, 1, 0, 0, 0);
						}
						sVar4 = VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(__LIB_5__.func_725(iParam3));
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var3))
						{
							__LIB_9__.func_295(&Var3, 0, 0, 0);
						}
						else
						{
							func_399(sVar4, 0);
						}
						if (__LIB_2__.func_356(&(Global_1585857[iParam3 /*142*/])))
						{
							func_399("VEH_LIVERY" /* GXT: (Livery) */, 0);
						}
						if (__LIB_2__.func_355(__LIB_5__.func_725(iParam3), Global_1585857[iParam3 /*142*/].f_77, Global_1585857[iParam3 /*142*/].f_9[10]) && __LIB_2__.func_354(__LIB_5__.func_725(iParam3)))
						{
							func_399("VEH_TOPL" /* GXT: Topless */, 0);
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
			func_846(iParam3, -1);
		}
	}
}

void func_846(int iParam0, int iParam1)//Position - 0x28EFE
{
	int iVar0;
	__LIB_1__.func_252(iParam0, &iVar0);
	if (iVar0 >= 0)
	{
		__LIB_18__.func_327(iVar0, -1, -1);
	}
	__LIB_4__.func_819(&(Global_1585857[iParam0 /*142*/]));
	Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
	func_847(iParam0, &(Global_1585857[iParam0 /*142*/]), 0, iParam1, 0, 0);
}

int func_847(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x28F51
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	if (!bParam4)
	{
	}
	iVar1 = __LIB_25__.func_339(1411, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_138, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = __LIB_25__.func_339(1412, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_139, iParam3);
	if (!bParam4)
	{
	}
	if (__LIB_1__.func_322(iParam0))
	{
	}
	else
	{
		iVar1 = __LIB_25__.func_339(1413, iParam0);
		__LIB_1__.func_39(iVar1, *uParam1, iParam3);
		if (!bParam4)
		{
		}
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (__LIB_25__.func_339(1414, iParam0) + iVar0);
				__LIB_1__.func_39(iVar1, uParam1->f_9[iVar0], iParam3);
			}
			else
			{
				iVar1 = (__LIB_25__.func_338(iParam0) + (iVar0 - 25));
				__LIB_1__.func_39(iVar1, uParam1->f_9[iVar0], iParam3);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (__LIB_25__.func_339(1439, iParam0) + iVar0);
			__LIB_1__.func_39(iVar1, uParam1->f_59[iVar0], iParam3);
			iVar0++;
		}
	}
	iVar1 = __LIB_25__.func_339(1441, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_62, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = __LIB_25__.func_339(1442, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_63, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = __LIB_25__.func_339(1443, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_64, iParam3);
	if (!bParam4)
	{
	}
	if (__LIB_1__.func_322(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = __LIB_25__.func_339(1444, iParam0);
		__LIB_1__.func_39(iVar1, uParam1->f_65, iParam3);
		if (!bParam4)
		{
		}
	}
	iVar1 = __LIB_25__.func_339(1445, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_67, iParam3);
	if (__LIB_1__.func_322(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = __LIB_25__.func_339(1446, iParam0);
		__LIB_1__.func_39(iVar1, uParam1->f_68, iParam3);
	}
	iVar1 = __LIB_25__.func_339(1447, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_69, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = __LIB_25__.func_339(1448, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_70, -1);
	iVar1 = __LIB_25__.func_339(1449, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_71, iParam3);
	iVar1 = __LIB_25__.func_339(1450, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_72, iParam3);
	iVar1 = __LIB_25__.func_339(1451, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_73, iParam3);
	iVar1 = __LIB_25__.func_339(1452, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_5, iParam3);
	iVar1 = __LIB_25__.func_339(1453, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_6, iParam3);
	iVar1 = __LIB_25__.func_339(1454, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_7, iParam3);
	iVar1 = __LIB_25__.func_339(1455, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_8, iParam3);
	if (__LIB_1__.func_322(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = __LIB_25__.func_339(3880, iParam0);
		__LIB_1__.func_39(iVar1, uParam1->f_74, iParam3);
		iVar1 = __LIB_25__.func_339(3881, iParam0);
		__LIB_1__.func_39(iVar1, uParam1->f_75, iParam3);
		iVar1 = __LIB_25__.func_339(3882, iParam0);
		__LIB_1__.func_39(iVar1, uParam1->f_76, iParam3);
		iVar1 = __LIB_25__.func_337(iParam0);
		__LIB_1__.func_39(iVar1, uParam1->f_97, iParam3);
		iVar1 = __LIB_21__.func_897(iParam0);
		__LIB_1__.func_39(iVar1, uParam1->f_99, iParam3);
		iVar1 = __LIB_25__.func_335(iParam0);
		__LIB_1__.func_39(iVar1, uParam1->f_98, iParam3);
		iVar1 = __LIB_25__.func_465(iParam0, 0);
		__LIB_1__.func_39(iVar1, uParam1->f_102, iParam3);
	}
	iVar2 = Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_1275;
	if (bParam5)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	__LIB_1__.func_597(1629, iVar2, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	__LIB_1__.func_597(__LIB_1__.func_368(1, iParam0), uParam1->f_103, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	__LIB_1__.func_597(__LIB_1__.func_368(2, iParam0), uParam1->f_104, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	__LIB_1__.func_597(__LIB_1__.func_368(3, iParam0), uParam1->f_105, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	__LIB_1__.func_597(__LIB_1__.func_368(4, iParam0), uParam1->f_66, iParam3, 1, 0);
	__LIB_1__.func_597(__LIB_1__.func_368(5, iParam0), uParam1->f_77, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	__LIB_1__.func_597(__LIB_1__.func_368(7, iParam0), uParam1->f_140, iParam3, 1, 0);
	if (!__LIB_1__.func_322(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1)))
		{
			__LIB_2__.func_205(__LIB_1__.func_368(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

void func_873(int iParam0)//Position - 0x3736D
{
	if (__LIB_1__.func_373(&(Global_1585857[iParam0 /*142*/].f_66)))
	{
		func_874(iParam0);
	}
}

void func_874(int iParam0)//Position - 0x3738C
{
	__LIB_1__.func_372(&(Global_1585857[iParam0 /*142*/].f_66));
	func_847(iParam0, &(Global_1585857[iParam0 /*142*/]), 0, -1, 0, 0);
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
	__LIB_4__.func_222(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
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
	__LIB_1__.func_193(0, 0);
	__LIB_1__.func_319(sParam2);
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, 0, 0, 0, 0);
	*uParam0 = 0;
	iVar2 = 0;
	while (iVar2 < 29)
	{
		if ((((__LIB_8__.func_48(iVar2, -1) > 0 && __LIB_25__.func_410(iVar2)) && !__LIB_25__.func_472(iVar2)) && iVar2 != 11) && iVar2 != 12)
		{
			iVar5 = __LIB_18__.func_591(iVar2, -1, 1);
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
				iVar3 = (__LIB_18__.func_704(iVar2) + iVar1);
				__LIB_1__.func_327(iVar3, &iVar4, 1);
				if (iVar4 >= 0 && !__LIB_1__.func_322(iVar3))
				{
					if ((((STREAMING::IS_MODEL_A_VEHICLE(__LIB_5__.func_725(iVar4)) && !__LIB_7__.func_88(__LIB_5__.func_725(iVar4), 1)) && !__LIB_1__.func_177(__LIB_5__.func_725(iVar4))) && __LIB_8__.func_477(__LIB_5__.func_725(iVar4))) && !__LIB_19__.func_305(iVar4))
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
			MemCopy(&Var6, {Global_1312193[__LIB_8__.func_48(iVar2, -1) /*1951*/].f_16}, 6);
			if (iVar2 == 13)
			{
				StringCopy(&Var6, __LIB_2__.func_361(__LIB_1__.func_374(PLAYER::PLAYER_ID())), 24);
			}
			if (iVar2 == 14)
			{
				StringCopy(&Var6, "MP_BHUB_CLUBG" /* GXT: Nightclub Service Entrance */, 24);
			}
			else if (iVar2 == 15)
			{
				StringCopy(&Var6, __LIB_2__.func_360(1), 24);
			}
			else if (iVar2 == 16)
			{
				StringCopy(&Var6, __LIB_2__.func_360(2), 24);
			}
			else if (iVar2 == 17)
			{
				StringCopy(&Var6, __LIB_2__.func_360(3), 24);
			}
			if (iVar2 == 18)
			{
				StringCopy(&Var6, __LIB_2__.func_359(1), 24);
			}
			else if (iVar2 == 19)
			{
				StringCopy(&Var6, __LIB_2__.func_359(2), 24);
			}
			else if (iVar2 == 20)
			{
				StringCopy(&Var6, __LIB_2__.func_359(3), 24);
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
			__LIB_18__.func_477(*uParam0, &Var6, 0, iVar0[iVar2], 0, 0, 0);
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
		while (iVar1 < __LIB_4__.func_573(iVar8))
		{
			iVar3 = (__LIB_1__.func_325(iVar8) + iVar1);
			__LIB_1__.func_327(iVar3, &iVar4, 1);
			if (iVar4 >= 0 && !__LIB_1__.func_322(iVar3))
			{
				if ((((STREAMING::IS_MODEL_A_VEHICLE(__LIB_5__.func_725(iVar4)) && !__LIB_7__.func_88(__LIB_5__.func_725(iVar4), 1)) && !__LIB_1__.func_177(__LIB_5__.func_725(iVar4))) && __LIB_8__.func_477(__LIB_5__.func_725(iVar4))) && !__LIB_19__.func_305(iVar4))
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
			__LIB_18__.func_477(*uParam0, __LIB_2__.func_358(iVar8), 0, 1, 0, 0, 0);
			(*uParam1)[*uParam0] = __LIB_2__.func_357(iVar8);
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
	__LIB_1__.func_193(0, 0);
	__LIB_1__.func_319("MPCT_YC_AGH" /* GXT: YACHT CAPTAIN */);
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, 0, 0, 0, 0);
	bVar2 = true;
	if (__LIB_1__.func_333(PLAYER::PLAYER_ID()))
	{
		iVar3 = __LIB_1__.func_332(PLAYER::PLAYER_ID());
		iVar1 = __LIB_19__.func_1(40);
		if ((((((((iVar1 > 0 || !func_279(40)) || !func_309(40)) || func_231(0)) || __LIB_1__.func_331(0, 1024)) || func_240(0)) || func_239(PLAYER::PLAYER_ID(), 0)) || __LIB_18__.func_324(PLAYER::PLAYER_ID(), iVar3, 100f)) || Global_262145.f_13115 /* Tunable: YACHT_DISABLE_PHONE_HELI_DELIVERY */)
		{
			bVar2 = false;
		}
		func_512(40, iVar0, "MPCT_YC_YAH0" /* GXT: Request Helicopter */, bVar2);
		__LIB_18__.func_477(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		func_434(func_86(40), 0);
	}
	else
	{
		__LIB_18__.func_477(iVar0, "MPCT_YC_YAH0" /* GXT: Request Helicopter */, 0, 0, 0, 0, 0);
		__LIB_18__.func_477(iVar0, "", 1, 0, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	iVar0++;
	if (__LIB_1__.func_333(PLAYER::PLAYER_ID()))
	{
		bVar2 = true;
		iVar4 = __LIB_1__.func_332(PLAYER::PLAYER_ID());
		iVar1 = __LIB_19__.func_1(41);
		if ((((((((iVar1 > 0 || !func_279(41)) || !func_309(41)) || func_231(1)) || __LIB_1__.func_331(1, 1024)) || func_240(1)) || func_239(PLAYER::PLAYER_ID(), 1)) || __LIB_18__.func_324(PLAYER::PLAYER_ID(), iVar4, 100f)) || Global_262145.f_13114 /* Tunable: YACHT_DISABLE_PHONE_BOAT_SHORE_DELIVERY */)
		{
			bVar2 = false;
		}
		func_512(41, iVar0, "MPCT_YC_YAB0" /* GXT: Request Boat */, bVar2);
		__LIB_18__.func_477(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		func_434(func_86(41), 0);
	}
	else
	{
		__LIB_18__.func_477(iVar0, "MPCT_YC_YAB0" /* GXT: Request Boat */, 0, 0, 0, 0, 0);
		__LIB_18__.func_477(iVar0, "", 1, 0, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	iVar0++;
	if (__LIB_1__.func_333(PLAYER::PLAYER_ID()))
	{
		iVar1 = __LIB_19__.func_1(42);
		func_187(&bVar6, &bVar5);
		iVar7 = __LIB_1__.func_332(PLAYER::PLAYER_ID());
		bVar2 = true;
		if ((((((((iVar1 > 0 || !func_279(42)) || !func_309(42)) || func_186(PLAYER::PLAYER_ID())) || func_177(1133903872)) || !bVar6) || !bVar5) || !__LIB_18__.func_324(PLAYER::PLAYER_ID(), iVar7, 100f)) || Global_262145.f_13113 /* Tunable: YACHT_DISABLE_PHONE_PV_SHORE_DELIVERY */)
		{
			bVar2 = false;
		}
		func_512(42, iVar0, "MPCT_YC_YAP0" /* GXT: Request Personal Vehicle */, bVar2);
		iVar8 = func_86(42);
		if (iVar8 <= 0)
		{
			__LIB_18__.func_477(iVar0, "PEG_FREE" /* GXT: FREE */, 0, bVar2, 0, 0, 0);
		}
		else
		{
			__LIB_18__.func_477(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
			func_434(iVar8, 0);
		}
	}
	else
	{
		__LIB_18__.func_477(iVar0, "MPCT_YC_YAP0" /* GXT: Request Personal Vehicle */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(iVar0, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	iVar0++;
	if (Global_262145.f_29251 /* Tunable: 444734026 */)
	{
		if (__LIB_1__.func_333(PLAYER::PLAYER_ID()))
		{
			iVar1 = __LIB_19__.func_1(64);
			bVar2 = true;
			if (((iVar1 > 0 || !func_279(64)) || !func_309(64)) || Global_262145.f_29259 /* Tunable: -2046990177 */)
			{
				bVar2 = false;
			}
			func_512(64, iVar0, "YACHT_REQUEST" /* GXT: Request Job */, bVar2);
			if (func_86(64) > 0)
			{
				__LIB_18__.func_477(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
				func_434(func_86(64), 0);
			}
		}
		else
		{
			__LIB_18__.func_477(iVar0, "YACHT_REQUEST" /* GXT: Request Job */, 0, 0, 0, 0, 0);
			__LIB_18__.func_477(iVar0, "", 1, 0, 0, 0, 0);
			__LIB_4__.func_857(15, 0);
		}
		iVar0++;
	}
	__LIB_4__.func_222(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = iVar0;
}

void func_887()//Position - 0x37E48
{
	int iVar0;
	switch (Local_122.f_178)
	{
		case 18:
			if (__LIB_7__.func_161(0, -1, 0))
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
						if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(39), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
						{
							iVar0 = func_892(joaat("SERVICE_SPEND_PEGASUS_DELIVERY"), func_86(39), 0, 0);
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
								if (__LIB_0__.func_112())
								{
									func_889(func_86(39), 5, 2, 1);
								}
								func_1(Local_122.f_1, "BACALAU", "BACAL_UNABLE", &Local_166, 1);
								func_92(1, 0);
							}
							__LIB_9__.func_425();
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
	StringCopy(&Var0, __LIB_1__.func_52(iParam1), 16);
	StringCopy(&Var1, __LIB_1__.func_51(iParam2), 32);
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
	if (__LIB_0__.func_112())
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
	if (__LIB_0__.func_112())
	{
		if (func_897(iParam0, iParam1))
		{
			if (__LIB_2__.func_46(iLocal_140) == 2)
			{
				if (iParam0 != joaat("SERVICE_SPEND_LOCATE_VEHICLE"))
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__.func_375(iLocal_140));
					func_894(iParam0, iParam1, iParam3);
					__LIB_18__.func_226(iLocal_140);
				}
				return 1;
			}
			else
			{
				if (bParam2)
				{
					__LIB_0__.func_683(__LIB_6__.func_900(1, 1), Local_122.f_360, Local_122.f_358);
				}
				if (iParam0 != joaat("SERVICE_SPEND_LOCATE_VEHICLE"))
				{
					__LIB_18__.func_226(iLocal_140);
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
			Var0 = { __LIB_0__.func_604(PLAYER::PLAYER_ID()) };
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
	else if (__LIB_2__.func_48(iLocal_140))
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
	__LIB_1__.func_193(0, 0);
	__LIB_1__.func_319("MPCT_GB_AGH" /* GXT: SECUROSERV */);
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, 0, 0, 0, 0);
	if (__LIB_25__.func_218(74, 0, 0))
	{
		bVar2 = true;
		iVar1 = __LIB_19__.func_1(39);
		if ((iVar1 > 0 || !func_279(39)) || !func_309(39))
		{
			bVar2 = false;
		}
		func_512(39, iVar0, "MPCT_GB_AG0" /* GXT: Request Turreted Limo */, bVar2);
		__LIB_18__.func_477(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		func_434(func_86(39), 0);
	}
	else
	{
		__LIB_18__.func_477(iVar0, "MPCT_GB_AG0" /* GXT: Request Turreted Limo */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(iVar0, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	iVar0++;
	__LIB_4__.func_222(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = iVar0 + 1;
}

void func_901()//Position - 0x3884C
{
	int iVar0;
	struct<2> Var1;
	__LIB_1__.func_193(0, 0);
	StringCopy(&Var1, "SCLUB_NM_", 16);
	StringIntConCat(&Var1, iLocal_168, 16);
	__LIB_1__.func_319(&Var1);
	__LIB_1__.func_318(1, 0, 0, 0, 0);
	__LIB_1__.func_317(1, 1, 1, 1, 1);
	__LIB_9__.func_341(0, 0, 0, 0, 0);
	__LIB_18__.func_477(iVar0, "MP_STRIP_IN" /* GXT: Invite to Your Apartment */, 0, 1, 0, 0, 0);
	iVar0++;
	__LIB_18__.func_477(iVar0, "BB_LC_EXIT" /* GXT: Exit */, 0, 1, 0, 0, 0);
	iVar0++;
	Local_122.f_181.f_2 = iVar0;
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 0);
	Local_122.f_181.f_3[1] = 0;
	Local_122.f_181.f_36[1] = 0;
	__LIB_4__.func_222(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
}

void func_903()//Position - 0x3897E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	__LIB_1__.func_193(0, 0);
	__LIB_1__.func_319("MPCT_RON" /* GXT: RON */);
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, 0, 0, 0, 0);
	if (__LIB_25__.func_218(106, 0, 0))
	{
		iVar1 = __LIB_19__.func_1(21);
		bVar2 = true;
		if (iVar1 > 0)
		{
			bVar2 = false;
		}
		func_512(21, iVar0, "GC_MENU48" /* GXT: Request Job */, bVar2);
		if (func_86(21) > 0)
		{
			__LIB_18__.func_477(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
			func_434(func_86(21), 0);
		}
	}
	else
	{
		__LIB_18__.func_477(iVar0, "GC_MENU48" /* GXT: Request Job */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(iVar0, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	iVar0++;
	__LIB_4__.func_222(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = iVar0 + 1;
}

void func_905()//Position - 0x38AE5
{
	int iVar0;
	int iVar1;
	bool bVar2;
	__LIB_1__.func_193(0, 0);
	__LIB_1__.func_319("MPCT_GERALD" /* GXT: GERALD */);
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, 0, 0, 0, 0);
	if (__LIB_25__.func_218(97, 0, 0))
	{
		iVar1 = __LIB_19__.func_1(17);
		bVar2 = true;
		if (iVar1 > 0)
		{
			bVar2 = false;
		}
		func_512(17, iVar0, "GC_MENU48" /* GXT: Request Job */, bVar2);
		if (func_86(17) > 0)
		{
			__LIB_18__.func_477(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
			func_434(func_86(17), 0);
		}
	}
	else
	{
		__LIB_18__.func_477(iVar0, "GC_MENU48" /* GXT: Request Job */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(iVar0, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	iVar0++;
	__LIB_4__.func_222(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = iVar0 + 1;
}

void func_907()//Position - 0x38C4C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	__LIB_1__.func_193(0, 0);
	__LIB_1__.func_319("MPCT_MARTIN" /* GXT: MARTIN */);
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, 0, 0, 0, 0);
	if (__LIB_25__.func_218(100, 0, 0))
	{
		iVar1 = __LIB_19__.func_1(19);
		bVar2 = true;
		if (iVar1 > 0)
		{
			bVar2 = false;
		}
		func_512(19, iVar0, "GC_MENU48" /* GXT: Request Job */, bVar2);
		if (func_86(19) > 0)
		{
			__LIB_18__.func_477(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
			func_434(func_86(19), 0);
		}
	}
	else
	{
		__LIB_18__.func_477(iVar0, "GC_MENU48" /* GXT: Request Job */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(iVar0, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	iVar0++;
	__LIB_4__.func_222(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = iVar0 + 1;
}

void func_908()//Position - 0x38D60
{
	switch (Local_122.f_178)
	{
		case 12:
			if (__LIB_7__.func_161(0, -1, 0))
			{
				if (!BitTest(Local_122.f_359, 4) || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					__LIB_7__.func_33();
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

void func_910()//Position - 0x38EC7
{
	if (iLocal_137 == -2)
	{
		if (__LIB_7__.func_161(0, -1, 0))
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
		if (__LIB_0__.func_167(91, 3) == 1)
		{
			if (__LIB_7__.func_161(0, -1, 0))
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
		__LIB_7__.func_37();
		if (iLocal_205 == 0)
		{
			if (Global_1585094)
			{
				if (iLocal_152 == 0)
				{
					if (__LIB_9__.func_70(&iLocal_152, __LIB_1__.func_165()))
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
					if (__LIB_0__.func_112())
					{
						iLocal_205++;
					}
					else
					{
						__LIB_7__.func_36(1);
					}
				}
			}
			else if (__LIB_0__.func_167(91, 3) == 1)
			{
				if (__LIB_7__.func_161(0, -1, 0))
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
	__LIB_1__.func_193(0, 0);
	__LIB_1__.func_319("MPCT_INSH" /* GXT: MAKE A CLAIM */);
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, 0, 0, 0, 0);
	iLocal_134 = 0;
	iLocal_135 = 0;
	if (func_924(0) && (!__LIB_38__.func_702(0, 0, 0, -1, 1) || Global_1641029))
	{
		func_914(0, &iVar0);
		bVar5 = true;
	}
	if (iLocal_137 != -1)
	{
		if (iLocal_137 < 29)
		{
			if (__LIB_8__.func_48(iLocal_137, -1) > 0 && !__LIB_25__.func_472(iLocal_137))
			{
				iVar4 = __LIB_18__.func_591(iLocal_137, -1, 1);
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
					iVar2 = (__LIB_18__.func_704(iLocal_137) + iVar1);
					__LIB_1__.func_327(iVar2, &iVar3, 1);
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
			iVar6 = __LIB_1__.func_187(iLocal_137);
			iVar1 = 0;
			while (iVar1 < __LIB_4__.func_573(iVar6))
			{
				iVar2 = (__LIB_1__.func_325(iVar6) + iVar1);
				__LIB_1__.func_327(iVar2, &iVar3, 1);
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
		__LIB_7__.func_34(&iVar0);
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
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 0);
	Local_122.f_181.f_3[1] = 0;
	Local_122.f_181.f_36[1] = 0;
	__LIB_4__.func_222(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	bLocal_136 = false;
}

int func_912(int iParam0)//Position - 0x3928A
{
	return Global_1585857[iParam0 /*142*/].f_105;
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
		__LIB_1__.func_252(iParam0, &iVar2);
		iVar3 = 1;
		if (__LIB_2__.func_356(&(Global_1585857[iParam0 /*142*/])))
		{
			iVar3++;
		}
		if (__LIB_2__.func_355(__LIB_5__.func_725(iParam0), Global_1585857[iParam0 /*142*/].f_77, Global_1585857[iParam0 /*142*/].f_9[10]) && __LIB_2__.func_354(__LIB_5__.func_725(iParam0)))
		{
			iVar3++;
		}
		Var5 = { __LIB_9__.func_296(-1, iVar2, 1) };
		StringCopy(&Var4, "MPCT_INSVEH" /* GXT: ~a~ ~a~ */, 24);
		StringIntConCat(&Var4, iVar3, 24);
		__LIB_18__.func_477(*uParam1, &Var4, iVar3, 1, 0, 0, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var5))
		{
			__LIB_9__.func_295(&Var5, 0, 0, 0);
		}
		else
		{
			func_399(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(__LIB_5__.func_725(iParam0)), 0);
		}
		if (__LIB_2__.func_356(&(Global_1585857[iParam0 /*142*/])))
		{
			func_399("VEH_LIVERY" /* GXT: (Livery) */, 0);
		}
		if (__LIB_2__.func_355(__LIB_5__.func_725(iParam0), Global_1585857[iParam0 /*142*/].f_77, Global_1585857[iParam0 /*142*/].f_9[10]) && __LIB_2__.func_354(__LIB_5__.func_725(iParam0)))
		{
			func_399("VEH_TOPL" /* GXT: Topless */, 0);
		}
		__LIB_7__.func_973(&Var1, Global_1585857[iParam0 /*142*/].f_66, 0, -1);
		if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 16))
		{
			iVar0 = Var1.f_4;
			iLocal_132 = iVar0;
			iLocal_133 = func_912(iParam0);
			if (__LIB_1__.func_177(Global_1585857[iParam0 /*142*/].f_66))
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
			__LIB_18__.func_477(*uParam1, "MPCT_INSCOST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
			func_434(iVar0, 0);
			iLocal_134 = (iLocal_134 + iVar0);
		}
		else
		{
			__LIB_18__.func_477(*uParam1, "MPCT_NOCOST" /* GXT: NO CHARGE */, 0, 1, 0, 0, 0);
		}
		iLocal_135++;
		iLocal_151[*uParam1] = iParam0;
		*uParam1++;
	}
}

int func_924(int iParam0)//Position - 0x41D3E
{
	if (STREAMING::IS_MODEL_A_VEHICLE(__LIB_5__.func_725(iParam0)))
	{
		func_873(iParam0);
		if (__LIB_1__.func_371(__LIB_5__.func_725(iParam0)))
		{
			if (__LIB_23__.func_558(iParam0))
			{
				return 1;
			}
		}
		else
		{
			func_846(iParam0, -1);
		}
	}
	return 0;
}

void func_930(int iParam0, int iParam1, bool bParam2)//Position - 0x422AF
{
	int iVar0;
	if (Global_1585094.f_2 > 0 && !Global_262145.f_141 /* Tunable: DISABLE_INSURANCE_PAYOUT */)
	{
		if (bParam2)
		{
			if (__LIB_0__.func_112())
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
	__LIB_0__.func_151("CUST_GAR_VEH_L8" /* GXT: Your replacement vehicle can be found at the Mors Mutual depot. */, -1);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FREEMODE_SOUNDSET", true);
	Global_1585094.f_1 = 1;
	func_1(Local_122.f_1, "CT_AUD", "MPCT_MoGen1", &Local_166, 0);
	__LIB_3__.func_437(1, 0, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 1);
	MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 6);
	MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 16);
	MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 0);
	MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 11);
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	__LIB_7__.func_92();
	func_32(4);
	func_847(iParam1, &(Global_1585857[iParam1 /*142*/]), 1, -1, 0, 0);
	__LIB_6__.func_881(-205702236, 3, 0);
}

void func_937(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x4260E
{
	int iVar0;
	if (iParam0 > 0 && !Global_262145.f_141 /* Tunable: DISABLE_INSURANCE_PAYOUT */)
	{
		if (bParam4)
		{
			if (__LIB_0__.func_112())
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
		if (__LIB_8__.func_48(iLocal_137, -1) == 116)
		{
			__LIB_0__.func_151("HANGAR_CLAIM" /* GXT: Your Personal Aircraft has been returned to the Hangar ~BLIP_SM_HANGAR~. You can also Request Personal Aircraft via the Vehicles section of the Interaction Menu. */, -1);
		}
		else if (__LIB_8__.func_48(iLocal_137, -1) == 117)
		{
			__LIB_0__.func_151("DBASE_CLAIM" /* GXT: Your Personal Vehicle has been returned to the Facility ~BLIP_NHP_BASE~. You can also Request Personal Vehicle via the Vehicles section of the Interaction Menu. */, -1);
		}
		else if (iLocal_137 >= 1000 && __LIB_1__.func_187(iLocal_137) == 0)
		{
			__LIB_0__.func_151("PER_VEH_MRS_GR" /* GXT: Your replacement vehicle has been returned to storage. You can request it from the Services section in the Interaction Menu to recover it. */, -1);
		}
		else
		{
			__LIB_0__.func_151("PER_VEH_MORS_STO" /* GXT: Your replacement vehicle has been returned to storage. You can call the mechanic to recover it. */, -1);
		}
	}
	else if (bParam3)
	{
		__LIB_0__.func_151("CUST_GAR_VEH_L8" /* GXT: Your replacement vehicle can be found at the Mors Mutual depot. */, -1);
		MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 0);
		MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 11);
		__LIB_2__.func_341(iParam1);
	}
	else
	{
		__LIB_0__.func_151("CUST_GAR_VEH_L7" /* GXT: Your replacement vehicle can be found in your Garage. */, -1);
	}
	__LIB_7__.func_92();
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	func_32(4);
	func_847(iParam1, &(Global_1585857[iParam1 /*142*/]), 1, -1, 0, 0);
	__LIB_6__.func_881(-205702236, 3, 0);
}

int func_940(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x42854
{
	if (((((((((((((__LIB_8__.func_48(0, -1) > 0 || __LIB_8__.func_48(6, -1) > 0) || (__LIB_8__.func_48(11, -1) > 0 && iParam0)) || __LIB_8__.func_48(8, -1) > 0) || ((iParam1 && __LIB_1__.func_556(5396, -1, 0) != 0) && __LIB_0__.func_228(15270, -1) == 7)) || (__LIB_8__.func_48(12, -1) > 0 && iParam2)) || (__LIB_8__.func_48(13, -1) > 0 && iParam3)) || (__LIB_8__.func_48(14, -1) > 0 && iParam4)) || (__LIB_8__.func_48(18, -1) > 0 && iParam5)) || (__LIB_8__.func_48(21, -1) > 0 && iParam6)) || ((__LIB_8__.func_48(22, -1) > 0 && iParam7) && __LIB_19__.func_124())) || (__LIB_2__.func_275(-1) && iParam8)) || ((__LIB_8__.func_48(25, -1) > 0 && iParam9) && __LIB_8__.func_254(1))) || (__LIB_8__.func_48(26, -1) > 0 && iParam10))
	{
		return 1;
	}
	return 0;
}

void func_941(bool bParam0)//Position - 0x4299B
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	int iVar3;
	int iVar4;
	if (__LIB_8__.func_48(iLocal_137, -1) == 116)
	{
		__LIB_0__.func_151("HANGAR_CLAIM2" /* GXT: Your replacement aircraft can be found in your Hangar ~BLIP_SM_HANGAR~. */, -1);
	}
	else if (__LIB_8__.func_48(iLocal_137, -1) == 117)
	{
		__LIB_0__.func_151("DBASE_CLAIM2" /* GXT: Your replacement vehicle can be found in your Facility ~BLIP_NHP_BASE~. */, -1);
	}
	else
	{
		__LIB_0__.func_151("CUST_GAR_ALL" /* GXT: Your replacement vehicles can be found in your Garage. */, -1);
	}
	func_1(Local_122.f_1, "CT_AUD", "MPCT_MoGen1", &Local_166, 0);
	iVar4 = 0;
	while (iVar4 < iLocal_135)
	{
		iVar1 = iLocal_151[iVar4];
		__LIB_7__.func_973(&Var2, Global_1585857[iVar1 /*142*/].f_66, 0, -1);
		if (BitTest(Global_1585857[iVar1 /*142*/].f_103, 16))
		{
			iVar3 = Var2.f_4;
			if (func_912(iVar1) > 0)
			{
				iVar3 = (iVar3 - func_912(iVar1));
			}
			if (__LIB_1__.func_177(Global_1585857[iVar1 /*142*/].f_66))
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
				if (__LIB_0__.func_112())
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
				if (__LIB_0__.func_112())
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__.func_375(iLocal_202));
				}
				MONEY::NETWORK_BUY_ITEM(iVar3, Global_1585857[iVar1 /*142*/].f_66, 9, 1, true, 0, 0, 0, 0, true);
			}
		}
		MISC::CLEAR_BIT(&(Global_1585857[iVar1 /*142*/].f_103), 1);
		MISC::CLEAR_BIT(&(Global_1585857[iVar1 /*142*/].f_103), 0);
		MISC::CLEAR_BIT(&(Global_1585857[iVar1 /*142*/].f_103), 6);
		MISC::CLEAR_BIT(&(Global_1585857[iVar1 /*142*/].f_103), 11);
		MISC::CLEAR_BIT(&(Global_1585857[iVar1 /*142*/].f_103), 16);
		func_847(iVar1, &(Global_1585857[iVar1 /*142*/]), 1, -1, 0, 0);
		Global_1585857[iVar1 /*142*/].f_105 = 0;
		iVar4++;
	}
	__LIB_7__.func_92();
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
	func_32(4);
	__LIB_6__.func_881(-205702236, 3, 0);
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
	if (!func_940(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1))
	{
		iLocal_137 = -1;
		func_911();
	}
	else
	{
		__LIB_1__.func_193(0, 0);
		__LIB_1__.func_319("MPCT_INSH" /* GXT: MAKE A CLAIM */);
		__LIB_1__.func_318(1, 1, 0, 0, 0);
		__LIB_1__.func_317(1, 2, 1, 1, 1);
		__LIB_9__.func_341(0, 0, 0, 0, 0);
		iVar0 = 0;
		iVar3 = 0;
		while (iVar3 < 29)
		{
			if (__LIB_8__.func_48(iVar3, -1) > 0 && !__LIB_25__.func_472(iVar3))
			{
				iVar6 = __LIB_18__.func_591(iVar3, -1, 1);
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
					iVar4 = (__LIB_18__.func_704(iVar3) + iVar2);
					__LIB_1__.func_327(iVar4, &iVar5, 1);
					if (iVar5 >= 0 && func_924(iVar5))
					{
						iVar1[iVar3] = 1;
						iVar2 = 999;
					}
					iVar2++;
				}
				if (iVar1[iVar3])
				{
					MemCopy(&Var7, {Global_1312193[__LIB_8__.func_48(iVar3, -1) /*1951*/].f_16}, 6);
					StringConCat(&Var7, "S", 24);
					if (iVar3 == 12)
					{
						StringCopy(&Var7, __LIB_2__.func_362(__LIB_1__.func_40(PLAYER::PLAYER_ID())), 24);
					}
					if (iVar3 == 13)
					{
						StringCopy(&Var7, __LIB_2__.func_361(__LIB_1__.func_374(PLAYER::PLAYER_ID())), 24);
					}
					if (iVar3 == 14)
					{
						StringCopy(&Var7, __LIB_4__.func_855(__LIB_1__.func_234(PLAYER::PLAYER_ID())), 24);
					}
					else if (iVar3 == 15)
					{
						StringCopy(&Var7, __LIB_2__.func_360(1), 24);
					}
					else if (iVar3 == 16)
					{
						StringCopy(&Var7, __LIB_2__.func_360(2), 24);
					}
					else if (iVar3 == 17)
					{
						StringCopy(&Var7, __LIB_2__.func_360(3), 24);
					}
					if (iVar3 == 18)
					{
						StringCopy(&Var7, __LIB_2__.func_359(1), 24);
					}
					else if (iVar3 == 19)
					{
						StringCopy(&Var7, __LIB_2__.func_359(2), 24);
					}
					else if (iVar3 == 20)
					{
						StringCopy(&Var7, __LIB_2__.func_359(3), 24);
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
					__LIB_18__.func_477(iVar0, &Var7, 0, iVar1[iVar3], 0, 0, 0);
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
			while (iVar2 < __LIB_4__.func_573(iVar9))
			{
				__LIB_1__.func_327((__LIB_1__.func_325(iVar9) + iVar2), &iVar5, 1);
				if (iVar5 >= 0 && func_924(iVar5))
				{
					iVar8[iVar3] = 1;
					iVar2 = 999;
				}
				iVar2++;
			}
			if (iVar8[iVar3])
			{
				__LIB_18__.func_477(iVar0, __LIB_2__.func_358(iVar9), 0, 1, 0, 0, 0);
				iLocal_139[iVar0] = __LIB_2__.func_357(iVar9);
				iVar0++;
			}
			iVar3++;
		}
		Local_122.f_181.f_2 = iVar0;
		if (Local_122.f_181.f_69 >= Local_122.f_181.f_2 || Local_122.f_181.f_69 < 0)
		{
			Local_122.f_181.f_69 = 0;
		}
		__LIB_2__.func_183(Local_122.f_181.f_69, 1, 0);
		Local_122.f_181.f_3[1] = 0;
		Local_122.f_181.f_36[1] = 0;
		bLocal_136 = true;
		__LIB_4__.func_222(-1);
		if (func_1120())
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
				__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
			}
			else
			{
				__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
				__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
			}
			MISC::SET_BIT(&(Local_122.f_359), 6);
		}
	}
}

void func_947()//Position - 0x43038
{
	if (!__LIB_25__.func_218(90, 0, 0))
	{
		func_32(4);
		return;
	}
	if (!__LIB_7__.func_161(0, -1, 1))
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
	__LIB_9__.func_425();
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
	if (__LIB_6__.func_925())
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
	if (__LIB_0__.func_112())
	{
		func_889(func_86(22), 5, 2, 1);
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
	bVar1 = __LIB_6__.func_925();
	switch (iVar0)
	{
		case 14:
			return __LIB_1__.func_6(bVar1, "MPCT_13", "MPCT_14");
		case 16:
		case 15:
			return __LIB_1__.func_6(bVar1, "MPCT_15", "MPCT_16");
		default:
	}
	return __LIB_1__.func_6(bVar1, "MPCT_17", "MPCT_18");
	return __LIB_1__.func_6(bVar1, "MPCT_17", "MPCT_18");
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
	iVar0 = func_892(joaat("SERVICE_SPEND_PEGASUS_DELIVERY"), func_86(22), 0, 0);
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
	return ((func_86(22) == 0 || MONEY::NETWORK_CAN_SPEND_MONEY(func_86(22), false, true, false, -1, 0)) || BitTest(Local_122.f_359, 17));
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
	__LIB_4__.func_222(-1);
	if (!func_1120())
	{
		return;
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
		__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
	}
	else
	{
		__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
		__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
	}
	MISC::SET_BIT(&(Local_122.f_359), 6);
}

void func_972()//Position - 0x43411
{
	if (Local_122.f_181.f_69 < 0)
	{
		Local_122.f_181.f_69 = 0;
	}
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 0);
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
	__LIB_18__.func_477(iParam1, sVar0, 0, 1, 0, 0, 0);
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
	return (((FILES::GET_DLC_VEHICLE_DATA(iParam0, &iVar0) && !FILES::IS_CONTENT_ITEM_LOCKED(iVar0)) && !__LIB_1__.func_378(iParam0)) && func_981(iParam1, iParam2));
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
	if (__LIB_0__.func_268(iParam0))
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
		iVar3 = __LIB_4__.func_65(iVar2, -1);
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
	return (((__LIB_39__.func_967(iParam0) && func_994(iParam0)) && func_981(iParam1, iParam2)) && __LIB_0__.func_113(iParam1));
}

int func_994(int iParam0)//Position - 0x4396C
{
	if (__LIB_38__.func_229(245, 0) == iParam0)
	{
		return 0;
	}
	if (__LIB_38__.func_229(323, 0) == iParam0)
	{
		return 0;
	}
	if (__LIB_38__.func_229(324, 0) == iParam0)
	{
		return 0;
	}
	if (__LIB_38__.func_229(357, 0) == iParam0)
	{
		return 0;
	}
	if (__LIB_38__.func_229(402, 0) == iParam0)
	{
		return 0;
	}
	if (__LIB_38__.func_229(518, 0) == iParam0)
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
	__LIB_1__.func_193(0, 0);
	__LIB_1__.func_319("PEG_TITLE" /* GXT: ~s~PEGASUS CONCIERGE */);
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, 0, 0, 0, 0);
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
		Local_122.f_181.f_69 = __LIB_11__.func_333(Local_122.f_181.f_69, 0, Local_122.f_181.f_2);
	}
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 0);
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
		if (__LIB_4__.func_679(22))
		{
			__LIB_18__.func_477(iParam4, "TWOSTRINGS" /* GXT: ~a~ ~a~ */, 3, bParam3, 0, 0, 0);
		}
		else
		{
			__LIB_18__.func_477(iParam4, "TWOSTRINGS" /* GXT: ~a~ ~a~ */, 2, bParam3, 0, 0, 0);
		}
		func_399(sParam1, 0);
		func_399(sParam2, 0);
	}
	else
	{
		if (__LIB_4__.func_679(22))
		{
			__LIB_18__.func_477(iParam4, "STRING", 2, bParam3, 0, 0, 0);
		}
		else
		{
			__LIB_18__.func_477(iParam4, "STRING", 1, bParam3, 0, 0, 0);
		}
		func_399(sParam1, 0);
	}
	if (__LIB_4__.func_679(22))
	{
		__LIB_4__.func_857(51, 0);
	}
	iVar1 = func_86(22);
	__LIB_18__.func_477(iParam4, "MPCT_CASH" /* GXT: $~1~ */, 1, bParam3, 0, 0, 0);
	func_434(iVar1, 0);
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
					StringIntConCat(&cVar0, __LIB_26__.func_36(__LIB_1__.func_556(7215, -1, 0)) + 1, 16);
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
		iVar4 = __LIB_4__.func_65(iVar3, -1);
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
		sParam1 = __LIB_5__.func_849(iParam2);
	}
	return sParam1;
}

bool func_1014()//Position - 0x447E2
{
	int iVar0;
	iVar0 = __LIB_19__.func_1(22);
	return (iVar0 > 0 && (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(__LIB_18__.func_502(46), -1, false, 0) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 194));
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
			if (__LIB_7__.func_161(0, -1, 0))
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
			if (__LIB_7__.func_161(0, -1, 0))
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
			if (__LIB_7__.func_161(0, -1, 1))
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
	__LIB_1__.func_193(0, 0);
	__LIB_1__.func_319("MPCT_BRUCIEH" /* GXT: BRUCIE */);
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, 0, 0, 0, 0);
	if (__LIB_25__.func_218(74, 0, 0))
	{
		bVar2 = true;
		iVar1 = __LIB_19__.func_1(0);
		if ((iVar1 > 0 || !func_279(0)) || !func_309(0))
		{
			bVar2 = false;
		}
		func_512(0, iVar0, "MPCT_BRUCIE0" /* GXT: Bull Shark Testosterone */, bVar2);
		__LIB_18__.func_477(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		func_434(func_86(0), 0);
	}
	else
	{
		__LIB_18__.func_477(iVar0, "MPCT_BRUCIE0" /* GXT: Bull Shark Testosterone */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(iVar0, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	iVar0++;
	__LIB_4__.func_222(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = iVar0 + 1;
}

void func_1024()//Position - 0x45535
{
	switch (Local_122.f_178)
	{
		case 4:
			if (__LIB_7__.func_161(0, -1, 1))
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
				if (__LIB_7__.func_161(0, -1, 0))
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
							if (__LIB_0__.func_154(Local_122.f_358, 0, 1))
							{
								__LIB_1__.func_342("GC_MENU42" /* GXT: Set Mercenaries to attack ~a~?~n~ Cost: $~1~ */, 100, 0);
								__LIB_5__.func_724(PLAYER::GET_PLAYER_NAME(Local_122.f_358));
								__LIB_4__.func_999(func_86(12));
							}
						}
						func_123();
					}
				}
			}
			break;
		case 1:
			if (__LIB_7__.func_161(0, -1, 0))
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
	if (__LIB_4__.func_762(0, &iLocal_147, 0))
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
							uLocal_148[iVar4] = __LIB_31__.func_929(Local_122.f_181.f_136[iVar4]);
							iVar4++;
						}
					}
					__LIB_12__.func_747(&iLocal_147, 0, 0);
					switch (Local_122.f_179)
					{
						case 0:
							__LIB_8__.func_103(&iLocal_147, "BB_HEAD" /* GXT: Bounty */, "", 0, -1, -1, 0);
							break;
						case 1:
							__LIB_8__.func_103(&iLocal_147, "GC_MENU5" /* GXT: Mugger */, "", 0, -1, -1, 0);
							break;
						case 2:
							__LIB_8__.func_103(&iLocal_147, "GC_MENU24" /* GXT: Give Wanted Level */, "", 0, -1, -1, 0);
							break;
						case 3:
							__LIB_8__.func_103(&iLocal_147, "GC_MENU23" /* GXT: Mercenaries */, "", 0, -1, -1, 0);
							break;
					}
					bVar2 = false;
					iVar4 = 0;
					while (iVar4 < Local_122.f_181.f_2)
					{
						iVar6 = Local_122.f_181.f_136[iVar4];
						iVar7 = 9;
						__LIB_18__.func_471(iVar6, &sVar8);
						iVar10 = uLocal_148[iVar4];
						if (iVar10 != 0)
						{
							cVar9 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar10);
						}
						func_1029(iLocal_147, bVar2, iVar4, __LIB_21__.func_599(iVar6), iVar7, PLAYER::GET_PLAYER_NAME(iVar6), &sVar8, cVar9, 0, -1, 1);
						iVar4++;
					}
					__LIB_1__.func_379(&iLocal_147, 1, 1);
				}
				func_1027(&iLocal_147, Local_122.f_181.f_69);
			}
			func_1026(&iLocal_147, 76);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar11, &uVar12);
			__LIB_18__.func_365(iVar11, -1, 0, 1, 0, 0, 1, 1, 0);
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
			__LIB_8__.func_611(0);
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
	__LIB_0__.func_514(sParam5);
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
		__LIB_0__.func_478("");
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
	__LIB_0__.func_514(sParam6);
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
					if (!__LIB_0__.func_154(iParam0, 0, 1))
					{
						return 0;
					}
					if (iParam0 == Global_2815059.f_5120)
					{
						return 0;
					}
					if (__LIB_6__.func_768(iParam0, 0))
					{
						return 0;
					}
					if (!__LIB_17__.func_363(iParam0))
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
					if (__LIB_6__.func_401(1))
					{
						if (__LIB_6__.func_941(iParam0, __LIB_0__.func_582(), 1))
						{
							return 0;
						}
					}
					if (__LIB_0__.func_665(iParam0))
					{
						return 0;
					}
					break;
				case 2:
					if (!__LIB_0__.func_154(iParam0, 1, 1))
					{
						return 0;
					}
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) >= 5)
					{
						return 0;
					}
					if (__LIB_6__.func_768(iParam0, 0))
					{
						return 0;
					}
					if (iParam0 == PLAYER::PLAYER_ID())
					{
						return 0;
					}
					if (__LIB_0__.func_743(iParam0))
					{
						return 0;
					}
					if (__LIB_1__.func_155(iParam0, 1, 0))
					{
						return 0;
					}
					if (__LIB_7__.func_115(iParam0))
					{
						return 0;
					}
					if (!__LIB_1__.func_386(iParam0))
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
					if (__LIB_0__.func_665(iParam0))
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
					if (!__LIB_0__.func_154(iParam0, 0, 1))
					{
						return 0;
					}
					if (__LIB_6__.func_768(iParam0, 0))
					{
						return 0;
					}
					if (iParam0 == PLAYER::PLAYER_ID())
					{
						return 0;
					}
					if (__LIB_0__.func_743(iParam0))
					{
						return 0;
					}
					if (__LIB_1__.func_155(iParam0, 1, 0))
					{
						return 0;
					}
					if (__LIB_7__.func_115(iParam0))
					{
						return 0;
					}
					if (!__LIB_1__.func_386(iParam0))
					{
						return 0;
					}
					if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 2))
					{
						return 0;
					}
					if (__LIB_12__.func_846())
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
					if (__LIB_2__.func_303(iParam0, 146))
					{
						return 0;
					}
					if (__LIB_2__.func_303(iParam0, 136))
					{
						return 0;
					}
					if (__LIB_2__.func_303(iParam0, 129))
					{
						return 0;
					}
					if (__LIB_2__.func_303(iParam0, 131))
					{
						return 0;
					}
					if (__LIB_0__.func_702(iParam0, 24))
					{
						if (__LIB_1__.func_338(iParam0))
						{
							return 0;
						}
					}
					if (func_326(iParam0))
					{
						return 0;
					}
					if (__LIB_6__.func_401(1))
					{
						if (__LIB_6__.func_941(iParam0, __LIB_0__.func_582(), 1))
						{
							return 0;
						}
					}
					if (__LIB_7__.func_114(iParam0) && ((__LIB_0__.func_396(iParam0) == 148 || __LIB_0__.func_396(iParam0) == 142) || __LIB_0__.func_396(iParam0) == 164))
					{
						return 0;
					}
					if (__LIB_0__.func_396(iParam0) == 153)
					{
						return 0;
					}
					if (__LIB_0__.func_396(iParam0) == 167)
					{
						return 0;
					}
					if (__LIB_0__.func_396(iParam0) == 168)
					{
						return 0;
					}
					if (__LIB_0__.func_396(iParam0) == 190)
					{
						return 0;
					}
					if (__LIB_0__.func_396(iParam0) == 179)
					{
						return 0;
					}
					if (__LIB_0__.func_286(iParam0) && (((((__LIB_0__.func_396(iParam0) == 185 || __LIB_0__.func_396(iParam0) == 182) || __LIB_0__.func_396(iParam0) == 197) || __LIB_0__.func_396(iParam0) == 183) || __LIB_0__.func_396(iParam0) == 195) || __LIB_0__.func_396(iParam0) == 198))
					{
						return 0;
					}
					if (__LIB_0__.func_286(iParam0) && (__LIB_0__.func_396(iParam0) == 216 || __LIB_0__.func_396(iParam0) == 219))
					{
						return 0;
					}
					if (__LIB_0__.func_665(iParam0))
					{
						return 0;
					}
					if (__LIB_2__.func_4(iParam0))
					{
						return 0;
					}
					if (__LIB_0__.func_396(iParam0) == 276)
					{
						if (__LIB_1__.func_337(iParam0) == 3)
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
					if (!__LIB_0__.func_154(iParam0, 0, 1))
					{
						return 0;
					}
					if (__LIB_6__.func_768(iParam0, 0))
					{
						return 0;
					}
					if (iParam0 == PLAYER::PLAYER_ID())
					{
						return 0;
					}
					if (__LIB_0__.func_743(iParam0))
					{
						return 0;
					}
					if (__LIB_1__.func_155(iParam0, 1, 1))
					{
						return 0;
					}
					if (__LIB_7__.func_115(iParam0))
					{
						return 0;
					}
					if (!__LIB_1__.func_386(iParam0))
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
					if (((__LIB_2__.func_303(iParam0, 129) || __LIB_2__.func_303(iParam0, 146)) || __LIB_2__.func_303(iParam0, 131)) || __LIB_2__.func_303(iParam0, 136))
					{
						return 0;
					}
					if (__LIB_0__.func_702(iParam0, 24))
					{
						if (__LIB_1__.func_338(iParam0))
						{
							return 0;
						}
					}
					if (BitTest(Global_1892703[iParam0 /*599*/].f_1, 14))
					{
						return 0;
					}
					if (__LIB_6__.func_401(1) && __LIB_0__.func_582() == __LIB_0__.func_603(iParam0))
					{
						return 0;
					}
					if (__LIB_7__.func_114(iParam0) && __LIB_0__.func_396(iParam0) == 164)
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
					if (__LIB_0__.func_278(iParam0))
					{
						return 0;
					}
					if (__LIB_1__.func_339(iParam0))
					{
						return 0;
					}
					if (__LIB_0__.func_286(iParam0) && __LIB_0__.func_396(iParam0) == 170)
					{
						return 0;
					}
					if (__LIB_0__.func_396(iParam0) == 168)
					{
						return 0;
					}
					if (__LIB_0__.func_396(iParam0) == 190)
					{
						return 0;
					}
					if (__LIB_0__.func_396(iParam0) == 167)
					{
						return 0;
					}
					if (__LIB_0__.func_286(iParam0) && (((((__LIB_0__.func_396(iParam0) == 185 || __LIB_0__.func_396(iParam0) == 182) || __LIB_0__.func_396(iParam0) == 197) || __LIB_0__.func_396(iParam0) == 183) || __LIB_0__.func_396(iParam0) == 195) || __LIB_0__.func_396(iParam0) == 198))
					{
						return 0;
					}
					if (__LIB_0__.func_286(iParam0) && (__LIB_0__.func_396(iParam0) == 238 || __LIB_0__.func_396(iParam0) == 249))
					{
						return 0;
					}
					if (Global_1835502.f_533[iParam0])
					{
						return 0;
					}
					switch (__LIB_7__.func_113(iParam0))
					{
						case 6:
						case 7:
							if (__LIB_0__.func_286(iParam0))
							{
								return 0;
							}
							break;
					}
					if (__LIB_0__.func_665(iParam0))
					{
						return 0;
						return 0;
					}
					if (__LIB_1__.func_385(iParam0))
					{
						return 0;
					}
					if (__LIB_0__.func_396(iParam0) == 276)
					{
						if (__LIB_1__.func_337(iParam0) == 3)
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
	__LIB_1__.func_193(0, 0);
	__LIB_4__.func_222(-1);
	sVar0 = __LIB_4__.func_756();
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
		__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
		__LIB_1__.func_345(37, sVar0, -1, 0);
	}
	else
	{
		__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
		__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
		__LIB_1__.func_344(236, sVar0, -1);
	}
	MISC::SET_BIT(&(Local_122.f_359), 6);
}

void func_1062()//Position - 0x468F4
{
	int iVar0;
	struct<16> Var1;
	if (__LIB_0__.func_154(Local_122.f_358, 0, 1))
	{
		__LIB_1__.func_193(0, 0);
		__LIB_1__.func_319("STRING");
		StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(Local_122.f_358), 64);
		func_79(Var1);
		__LIB_1__.func_318(1, 1, 0, 0, 0);
		__LIB_1__.func_317(1, 2, 1, 1, 1);
		__LIB_9__.func_341(0, 0, 0, 0, 0);
		if (__LIB_25__.func_218(81, 0, 0))
		{
			__LIB_18__.func_477(iVar0, "GC_MENU41" /* GXT: Call Mercenaries */, 0, 1, 0, 0, 0);
			__LIB_18__.func_477(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
			func_434(func_86(12), 0);
		}
		else
		{
			__LIB_18__.func_477(iVar0, "GC_MENU41" /* GXT: Call Mercenaries */, 0, 1, 0, 0, 0);
			__LIB_18__.func_477(iVar0, "", 1, 1, 0, 0, 0);
			__LIB_4__.func_857(15, 0);
		}
		iVar0++;
		__LIB_4__.func_222(-1);
		if (func_1120())
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
				__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
			}
			else
			{
				__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
				__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
			}
			MISC::SET_BIT(&(Local_122.f_359), 6);
		}
		__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
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
					if (!__LIB_2__.func_280(Local_122.f_358))
					{
						iLocal_124 = 0;
						MISC::CLEAR_BIT(&(Local_122.f_359), 4);
					}
				}
				else if (__LIB_2__.func_280(Local_122.f_358))
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
	__LIB_1__.func_193(0, 0);
	__LIB_1__.func_319("MPCT_MERRYH" /* GXT: MERRYWEATHER */);
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, 0, 0, 0, 0);
	if (__LIB_25__.func_218(61, 0, 0))
	{
		iVar1 = __LIB_19__.func_1(8);
		bVar2 = true;
		if ((iVar1 > 0 || !func_309(8)) || !func_279(8))
		{
			bVar2 = false;
		}
		func_512(8, 0, "MPCT_MERRY0" /* GXT: Ammo Drop */, bVar2);
		__LIB_18__.func_477(0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		func_434(func_86(8), 0);
	}
	else
	{
		__LIB_18__.func_477(0, "MPCT_MERRY0" /* GXT: Ammo Drop */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(0, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	Local_122.f_181.f_70[iVar0] = 0;
	iVar0++;
	if (__LIB_25__.func_218(62, 0, 0))
	{
		iVar1 = __LIB_19__.func_1(10);
		bVar2 = true;
		if ((iVar1 > 0 || !func_309(10)) || !func_279(10))
		{
			bVar2 = false;
		}
		func_512(10, 1, "MPCT_MERRY3" /* GXT: Backup Helicopter */, bVar2);
		__LIB_18__.func_477(1, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		func_434(func_86(10), 0);
	}
	else
	{
		__LIB_18__.func_477(1, "MPCT_MERRY3" /* GXT: Backup Helicopter */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(1, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	Local_122.f_181.f_70[iVar0] = 1;
	iVar0++;
	if (__LIB_25__.func_218(63, 0, 0))
	{
		iVar1 = __LIB_19__.func_1(9);
		bVar2 = true;
		if (((iVar1 > 0 || !func_309(9)) || !func_279(9)) || __LIB_6__.func_945(PLAYER::PLAYER_ID()))
		{
			bVar2 = false;
		}
		func_512(9, 2, "MPCT_MERRY1" /* GXT: Boat Pickup */, bVar2);
		__LIB_18__.func_477(2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		func_434(func_86(9), 0);
	}
	else
	{
		__LIB_18__.func_477(2, "MPCT_MERRY1" /* GXT: Boat Pickup */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(2, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	Local_122.f_181.f_70[iVar0] = 2;
	iVar0++;
	if (__LIB_25__.func_218(77, 0, 0))
	{
		iVar1 = __LIB_19__.func_1(13);
		bVar2 = true;
		if ((((iVar1 > 0 || !func_309(13)) || !func_279(13)) || __LIB_6__.func_945(PLAYER::PLAYER_ID())) || __LIB_2__.func_4(PLAYER::PLAYER_ID()))
		{
			bVar2 = false;
		}
		func_512(13, 3, "MPCT_MERRY5" /* GXT: Helicopter Pickup */, bVar2);
		__LIB_18__.func_477(3, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		func_434(func_86(13), 0);
	}
	else
	{
		__LIB_18__.func_477(3, "MPCT_MERRY5" /* GXT: Helicopter Pickup */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(3, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	Local_122.f_181.f_70[iVar0] = 3;
	iVar0++;
	if (__LIB_25__.func_218(81, 0, 0))
	{
		iVar1 = __LIB_19__.func_1(12);
		bVar2 = true;
		if (((iVar1 > 0 || !func_309(12)) || !func_279(12)) || __LIB_7__.func_115(PLAYER::PLAYER_ID()))
		{
			bVar2 = false;
		}
		func_512(12, 4, "GC_MENU41" /* GXT: Call Mercenaries */, bVar2);
		__LIB_18__.func_477(4, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		func_434(func_86(12), 0);
	}
	else
	{
		__LIB_18__.func_477(4, "GC_MENU41" /* GXT: Call Mercenaries */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(4, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	Local_122.f_181.f_70[iVar0] = 4;
	iVar0++;
	if (__LIB_25__.func_218(64, 0, 0))
	{
		iVar1 = __LIB_19__.func_1(11);
		bVar2 = true;
		if (((iVar1 > 0 || !func_309(11)) || !func_279(11)) || BitTest(Global_44241, 10))
		{
			bVar2 = false;
		}
		func_512(11, 5, "MPCT_MERRY4" /* GXT: Airstrike */, bVar2);
		__LIB_18__.func_477(5, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar2, 0, 0, 0);
		func_434(func_86(11), 0);
	}
	else
	{
		__LIB_18__.func_477(5, "MPCT_MERRY4" /* GXT: Airstrike */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(5, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	Local_122.f_181.f_70[iVar0] = 5;
	iVar0++;
	__LIB_4__.func_222(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = iVar0;
}

void func_1066()//Position - 0x46FC6
{
	switch (Local_122.f_178)
	{
		case 5:
			if (__LIB_7__.func_161(0, -1, 1))
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
			if (__LIB_7__.func_161(0, -1, 0))
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
	__LIB_1__.func_193(0, 0);
	__LIB_1__.func_319("MPCT_LAMAR" /* GXT: LAMAR */);
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, 0, 0, 0, 0);
	if (__LIB_25__.func_218(67, 0, 0))
	{
		iVar2 = __LIB_19__.func_1(2);
		bVar1 = true;
		if ((iVar2 > 0 || !func_309(2)) || !func_279(2))
		{
			bVar1 = false;
		}
		func_512(2, iVar0, "GC_MENU7" /* GXT: Call Mugger */, bVar1);
		__LIB_18__.func_477(iVar0, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
		func_434(func_86(2), 0);
	}
	else
	{
		__LIB_18__.func_477(iVar0, "GC_MENU7" /* GXT: Call Mugger */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(iVar0, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
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
		__LIB_18__.func_477(iVar0, "FM_LAMC_FR" /* GXT: Restart Lamar Missions */, 0, bVar1, 0, 0, 0);
		Local_122.f_181.f_70[iVar0] = 1;
		iVar0++;
	}
	else
	{
		Local_122.f_181.f_70[iVar0] = 2;
		iVar0++;
	}
	__LIB_4__.func_222(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
	Local_122.f_181.f_2 = iVar0;
}

bool func_1068(int iParam0)//Position - 0x471EF
{
	return (__LIB_18__.func_323(iParam0) > Global_794709.f_203824[iParam0 /*11*/].f_9 && __LIB_27__.func_604(iParam0) > 8);
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
			if (__LIB_7__.func_161(0, -1, 1))
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
						if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(iLocal_141), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
						{
							iVar1 = func_892(joaat("SERVICE_SPEND_LOCATE_VEHICLE"), func_86(iLocal_141), 0, 0);
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
									iVar0 = func_86(23);
									if (__LIB_0__.func_112())
									{
										NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__.func_375(iLocal_140));
									}
									MONEY::NETWORK_BUY_ITEM(iVar0, Global_2703735.f_3674, 10, -1, false, "LESTER", 0, 0, 0, true);
									__LIB_18__.func_226(iLocal_140);
									func_1(Local_122.f_1, "CT_AUD", "MPCT_LoBoat", &Local_166, 0);
								}
								else if (BitTest(Global_2703735.f_3673, 4))
								{
									iVar0 = func_86(24);
									if (__LIB_0__.func_112())
									{
										NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__.func_375(iLocal_140));
									}
									MONEY::NETWORK_BUY_ITEM(iVar0, Global_2703735.f_3674, 10, -1, false, "LESTER", 0, 0, 0, true);
									__LIB_18__.func_226(iLocal_140);
									func_1(Local_122.f_1, "CT_AUD", "MPCT_LoHeli", &Local_166, 0);
								}
								else if (BitTest(Global_2703735.f_3673, 5))
								{
									iVar0 = func_86(25);
									if (__LIB_0__.func_112())
									{
										NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__.func_375(iLocal_140));
									}
									MONEY::NETWORK_BUY_ITEM(iVar0, Global_2703735.f_3674, 10, -1, false, "LESTER", 0, 0, 0, true);
									__LIB_18__.func_226(iLocal_140);
									func_1(Local_122.f_1, "CT_AUD", "MPCT_LoCar", &Local_166, 0);
								}
								else if (BitTest(Global_2703735.f_3673, 6))
								{
									iVar0 = func_86(26);
									if (__LIB_0__.func_112())
									{
										NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__.func_375(iLocal_140));
									}
									MONEY::NETWORK_BUY_ITEM(iVar0, Global_2703735.f_3674, 10, -1, false, "LESTER", 0, 0, 0, true);
									__LIB_18__.func_226(iLocal_140);
									func_1(Local_122.f_1, "CT_AUD", "MPCT_LoPlane", &Local_166, 0);
								}
								else if (BitTest(Global_2703735.f_3673, 15))
								{
									iVar0 = func_86(57);
									if (__LIB_0__.func_112())
									{
										NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__.func_375(iLocal_140));
									}
									MONEY::NETWORK_BUY_ITEM(iVar0, Global_2703735.f_3674, 10, -1, false, "LESTER", 0, 0, 0, true);
									__LIB_18__.func_226(iLocal_140);
									func_1(Local_122.f_1, "CT_AUD", "MPCT_LoHeli", &Local_166, 0);
								}
								func_32(4);
							}
							else
							{
								func_889(func_86(iLocal_141), 5, 2, 1);
								func_92(1, 0);
							}
							__LIB_9__.func_425();
						}
					}
					if (BitTest(Global_2815059.f_4624, 3))
					{
						iVar2 = func_86(35);
						if ((__LIB_1__.func_387(1) >= iVar2 || MONEY::NETWORK_CAN_SPEND_MONEY(iVar2, false, true, false, -1, 0)) || BitTest(Local_122.f_359, 17))
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
								__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[35 /*2*/]), 1, 0);
								__LIB_41__.func_612(35, -1, -1);
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
			if (__LIB_7__.func_161(0, -1, 0))
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
				if (__LIB_7__.func_161(0, -1, 0))
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
				if (__LIB_7__.func_161(0, -1, 0))
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
							if (__LIB_0__.func_154(Local_122.f_358, 0, 1))
							{
								iVar0 = Local_122.f_181.f_103[0] * 500;
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(Local_122.f_358) == 0)
								{
									__LIB_1__.func_342("GC_MENU54" /* GXT: Currently has no Wanted Level.~n~Give this player a Wanted Level of ~1~?~n~Cost: $~1~ */, 100, 0);
									__LIB_4__.func_999(Local_122.f_181.f_103[0]);
									__LIB_4__.func_999(iVar0);
								}
								else
								{
									__LIB_1__.func_342("GC_MENU32" /* GXT: Current Wanted Level ~1~~n~Give this player a Wanted Level of ~1~?~n~Cost: $~1~ */, 100, 0);
									__LIB_4__.func_999(PLAYER::GET_PLAYER_WANTED_LEVEL(Local_122.f_358));
									__LIB_4__.func_999(Local_122.f_181.f_103[0]);
									__LIB_4__.func_999(iVar0);
								}
							}
						}
						func_123();
					}
				}
			}
			break;
		case 17:
			if (__LIB_7__.func_161(0, -1, 0))
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
			if (__LIB_7__.func_161(0, -1, 0))
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
	__LIB_1__.func_193(0, 0);
	__LIB_1__.func_319("HPPHONE_REPLAY");
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, 0, 0, 0, 0);
	iVar2 = 0;
	while (iVar2 < 3)
	{
		bVar1 = true;
		Var3 = { func_1077(iVar2) };
		__LIB_18__.func_477(iVar2, "STRING", 1, bVar1, 0, 0, 0);
		__LIB_9__.func_295(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Var3), 0, 0, 0);
		iVar0++;
		iVar2++;
	}
	MISC::SET_BIT(&bLocal_169, 2);
	iVar0++;
	__LIB_4__.func_222(-1);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
		__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
	}
	else
	{
		__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
		__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
	}
	MISC::SET_BIT(&(Local_122.f_359), 6);
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
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
	uVar2 = __LIB_15__.func_447(PLAYER::PLAYER_ID());
	iVar3 = __LIB_24__.func_107(12, uVar2, &uLocal_182, &iLocal_183);
	bVar4 = false;
	iVar5 = 0;
	Var7.f_1 = -1;
	Var7.f_2 = -1;
	Var7.f_9 = -1;
	__LIB_1__.func_193(0, 0);
	__LIB_1__.func_319("GC_MENURH" /* GXT: Replay Heist */);
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, 0, 0, 0, 0);
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
			__LIB_18__.func_477(iVar0, "STRING", 1, bVar1, 0, 0, 0);
			__LIB_9__.func_295(&Var6, 0, 0, 0);
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
	__LIB_4__.func_222(-1);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
		__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
	}
	else
	{
		__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
		__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
	}
	MISC::SET_BIT(&(Local_122.f_359), 6);
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
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
		if (__LIB_9__.func_267(uParam0))
		{
			if (BitTest(Global_1573916.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2660383[uParam0->f_9 /*16*/];
			}
			return Global_2657492.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}
	if (__LIB_2__.func_12(uParam0->f_1))
	{
		if (__LIB_2__.func_11(uParam0))
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
	if (__LIB_2__.func_12(uParam0->f_1))
	{
		if (__LIB_2__.func_11(uParam0))
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
	if (__LIB_0__.func_154(Local_122.f_358, 0, 1))
	{
		iLocal_127 = PLAYER::GET_PLAYER_WANTED_LEVEL(Local_122.f_358);
		__LIB_1__.func_193(0, 0);
		StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(Local_122.f_358), 64);
		__LIB_1__.func_319("GC_MENU27" /* GXT: ~s~SET WANTED LEVEL */);
		__LIB_1__.func_318(1, 1, 0, 0, 0);
		__LIB_1__.func_317(1, 2, 1, 1, 1);
		__LIB_9__.func_341(0, 1, 0, 0, 0);
		Local_122.f_181.f_2 = 1;
		Local_122.f_181.f_69 = 0;
		__LIB_18__.func_477(iVar0, "STRING", 1, 1, 0, 0, 0);
		func_1086(&Var1, 0, 1, 1);
		__LIB_18__.func_477(iVar0, "GC_MENU3" /* GXT: ~1~~n~ Cost: $~1~ */, 1, 1, 0, 0, 0);
		func_434(Local_122.f_181.f_103[0], 0);
		__LIB_4__.func_222(-1);
		Local_122.f_181.f_3[0] = iLocal_127 + 1;
		Local_122.f_181.f_36[0] = 5;
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			if (Local_122.f_181.f_69 == 0)
			{
				__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			}
			__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			if (Local_122.f_181.f_69 == 0)
			{
				__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
			}
			__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
		__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
		Local_122.f_178 = 1;
	}
}

void func_1086(char* sParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x481E0
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (Global_23150.f_5612 >= 40)
	{
		return;
	}
	if (Global_23150.f_6134 >= 4)
	{
		return;
	}
	if (Global_23150.f_6135 != 1)
	{
		return;
	}
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		return;
	}
	StringCopy(&(Global_2725950[Global_23150.f_5612 /*16*/]), sParam0, 64);
	Global_23150.f_5612++;
	Global_23150.f_2387[Global_23150.f_6133 /*5*/][Global_23150.f_6134] = 5;
	Global_23150.f_6134++;
	fVar0 = 0f;
	if (bParam3)
	{
		fVar0 = __LIB_2__.func_151();
	}
	if (bParam2)
	{
	}
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		fVar0 = __LIB_2__.func_151();
		if (Global_23150.f_5466[Global_23150.f_5610] && Global_23150.f_6134 == Global_23150.f_6132)
		{
			__LIB_7__.func_172(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23150.f_5459[(Global_23150.f_5610 - 1)])
		{
			Global_23150.f_5459[(Global_23150.f_5610 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23150.f_6134 >= Global_23150.f_6132)
		{
			fVar3 = __LIB_2__.func_150();
			if (fVar3 > Global_23150.f_6136[Global_23150.f_5609])
			{
				Global_23150.f_6136[Global_23150.f_5609] = fVar3;
			}
		}
	}
}

void func_1087()//Position - 0x4832D
{
	int iVar0;
	bool bVar1;
	struct<8> Var2;
	if (__LIB_0__.func_154(Local_122.f_358, 0, 1))
	{
		bVar1 = __LIB_2__.func_280(Local_122.f_358);
		__LIB_1__.func_193(0, 0);
		__LIB_1__.func_319("STRING");
		if (bVar1)
		{
			__LIB_1__.func_319("BB_CUR_TITLE" /* GXT: CURRENT BOUNTY */);
		}
		else
		{
			__LIB_1__.func_319("BB_SET_TITLE" /* GXT: SET NEW BOUNTY */);
		}
		__LIB_1__.func_318(1, 1, 0, 0, 0);
		__LIB_1__.func_317(1, 2, 1, 1, 1);
		__LIB_9__.func_341(0, 1, 0, 0, 0);
		Local_122.f_181.f_2 = 2;
		StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(Local_122.f_358), 64);
		if (bVar1)
		{
			__LIB_18__.func_477(iVar0, "STRING", 1, 1, 0, 0, 0);
			func_1086(&Var2, 0, 1, 1);
			__LIB_18__.func_477(iVar0, "BB_CASHAMT" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
			func_434(func_1089(Local_122.f_358), 0);
			Local_122.f_181.f_3[1] = 0;
			Local_122.f_181.f_36[1] = 0;
			__LIB_4__.func_222(-1);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
				__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
			}
			else
			{
				__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
				__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
			}
			MISC::SET_BIT(&(Local_122.f_359), 6);
		}
		else
		{
			__LIB_18__.func_477(iVar0, "STRING", 1, 1, 0, 0, 0);
			func_1086(&Var2, 0, 1, 1);
			__LIB_18__.func_477(iVar0, "BB_CASHAMT" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
			func_434(__LIB_23__.func_667(Local_122.f_181.f_103[0]), 0);
			__LIB_4__.func_222(-1);
			Local_122.f_181.f_3[0] = 0;
			Local_122.f_181.f_36[0] = 4;
			Local_122.f_181.f_3[1] = 0;
			Local_122.f_181.f_3[1] = 0;
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
				__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
			}
			else
			{
				__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
				__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
			}
			MISC::SET_BIT(&(Local_122.f_359), 6);
		}
		iVar0++;
		__LIB_18__.func_477(iVar0, "BB_LC_EXIT" /* GXT: Exit */, 0, 1, 0, 0, 0);
		iVar0++;
		if (Local_122.f_181.f_69 == 0)
		{
			if (!bVar1)
			{
				__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
			}
			else
			{
				__LIB_2__.func_183(Local_122.f_181.f_69, 1, 0);
			}
		}
		else
		{
			__LIB_2__.func_183(Local_122.f_181.f_69, 1, 0);
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
		iVar0 = __LIB_19__.func_1(20);
		if ((iVar0 <= 0 && func_309(20)) && func_279(20))
		{
			MISC::CLEAR_BIT(&uLocal_172, 1);
			bVar1 = true;
		}
	}
	if (BitTest(uLocal_172, 2))
	{
		iVar0 = __LIB_19__.func_1(6);
		if ((iVar0 <= 0 && func_309(6)) && func_279(6))
		{
			MISC::CLEAR_BIT(&uLocal_172, 2);
			bVar1 = true;
		}
	}
	if (BitTest(uLocal_172, 3))
	{
		iVar0 = __LIB_19__.func_1(6);
		if ((iVar0 <= 0 && func_309(14)) && func_279(14))
		{
			MISC::CLEAR_BIT(&uLocal_172, 3);
			bVar1 = true;
		}
	}
	if (BitTest(uLocal_172, 4))
	{
		iVar0 = __LIB_19__.func_1(15);
		if ((iVar0 <= 0 && func_309(15)) && func_279(15))
		{
			MISC::CLEAR_BIT(&uLocal_172, 4);
			bVar1 = true;
		}
	}
	if (BitTest(uLocal_172, 0))
	{
		iVar0 = __LIB_19__.func_1(35);
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
	__LIB_1__.func_193(0, 0);
	__LIB_1__.func_319("BB_FIRST_0" /* GXT: LESTER */);
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_9__.func_341(0, 0, 0, 0, 0);
	if (__LIB_25__.func_218(29, 0, 0))
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
		__LIB_18__.func_477(iVar2, "BB_FIRST_1" /* GXT: Set Bounty */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 0;
	iVar2++;
	if (__LIB_25__.func_218(65, 0, 0))
	{
		iVar0 = __LIB_19__.func_1(20);
		bVar1 = true;
		if ((iVar0 > 0 || !func_309(20)) || !func_279(20))
		{
			MISC::SET_BIT(&uLocal_172, 1);
			bVar1 = false;
			bVar1 = false;
		}
		func_512(20, iVar2, "GC_MENU26" /* GXT: Remove Wanted Level */, bVar1);
		iVar3 = func_86(20);
		if (iVar3 <= 0)
		{
			__LIB_18__.func_477(iVar2, "PEG_FREE" /* GXT: FREE */, 0, bVar1, 0, 0, 0);
		}
		else
		{
			__LIB_18__.func_477(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
			func_434(iVar3, 0);
		}
	}
	else
	{
		__LIB_18__.func_477(iVar2, "GC_MENU26" /* GXT: Remove Wanted Level */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 1;
	iVar2++;
	if (__LIB_25__.func_218(75, 0, 0))
	{
		iVar0 = __LIB_19__.func_1(6);
		bVar1 = true;
		if (((iVar0 > 0 || !func_309(6)) || !func_279(6)) || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_208)
		{
			MISC::SET_BIT(&uLocal_172, 2);
			bVar1 = false;
		}
		func_512(6, iVar2, "GC_MENU25" /* GXT: Off the Radar */, bVar1);
		__LIB_18__.func_477(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
		func_434(func_86(6), 0);
	}
	else
	{
		__LIB_18__.func_477(iVar2, "GC_MENU25" /* GXT: Off the Radar */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 2;
	iVar2++;
	if (__LIB_25__.func_218(95, 0, 0))
	{
		iVar0 = __LIB_19__.func_1(14);
		bVar1 = true;
		if ((iVar0 > 0 || !func_309(14)) || !func_279(14))
		{
			MISC::SET_BIT(&uLocal_172, 3);
			bVar1 = false;
		}
		func_512(14, iVar2, "GC_MENU47" /* GXT: Reveal Players */, bVar1);
		__LIB_18__.func_477(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
		func_434(func_86(14), 0);
	}
	else
	{
		__LIB_18__.func_477(iVar2, "GC_MENU47" /* GXT: Reveal Players */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 3;
	iVar2++;
	if (__LIB_25__.func_218(88, 0, 0))
	{
		iVar0 = __LIB_19__.func_1(15);
		bVar1 = true;
		if ((iVar0 > 0 || !func_309(15)) || !func_279(15))
		{
			MISC::SET_BIT(&uLocal_172, 4);
			bVar1 = false;
		}
		func_512(15, iVar2, "GC_MENU48" /* GXT: Request Job */, bVar1);
		if (func_86(15) > 0)
		{
			__LIB_18__.func_477(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
			func_434(func_86(15), 0);
		}
	}
	else
	{
		__LIB_18__.func_477(iVar2, "GC_MENU48" /* GXT: Request Job */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 4;
	iVar2++;
	if (__LIB_25__.func_218(121, 0, 0))
	{
		iVar0 = __LIB_19__.func_1(36);
		bVar1 = true;
		if ((((iVar0 > 0 || !func_309(36)) || !func_279(36)) || __LIB_2__.func_324()) || (__LIB_1__.func_155(PLAYER::PLAYER_ID(), 0, 0) && func_255()))
		{
			MISC::SET_BIT(&uLocal_172, 5);
			bVar1 = false;
		}
		func_512(36, iVar2, "GC_MENURH" /* GXT: Replay Heist */, bVar1);
		if (func_86(36) > 0)
		{
			__LIB_18__.func_477(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
			func_434(func_86(36), 0);
		}
	}
	else
	{
		__LIB_18__.func_477(iVar2, "GC_MENURH" /* GXT: Replay Heist */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 10;
	iVar2++;
	if (__LIB_25__.func_218(96, 0, 0))
	{
		iVar0 = __LIB_19__.func_1(37);
		bVar1 = true;
		if (((iVar0 > 0 || !func_309(37)) || !func_279(37)) || !__LIB_2__.func_324())
		{
			bVar1 = false;
		}
		func_512(37, iVar2, "GC_MENUCH" /* GXT: Cancel Heist */, bVar1);
		if (func_86(37) > 0)
		{
			__LIB_18__.func_477(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
			func_434(func_86(15), 0);
		}
	}
	else
	{
		__LIB_18__.func_477(iVar2, "GC_MENUCH" /* GXT: Cancel Heist */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 11;
	iVar2++;
	if (__LIB_6__.func_143(PLAYER::PLAYER_ID()))
	{
		bVar1 = true;
		if (__LIB_8__.func_678(PLAYER::PLAYER_ID(), 0) == -1)
		{
			bVar1 = false;
		}
		func_512(51, iVar2, "HPPHONE_CANCEL" /* GXT: Cancel The Doomsday Heist */, bVar1);
		if (func_86(51) > 0)
		{
			__LIB_18__.func_477(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
			func_434(func_86(51), 0);
		}
	}
	else
	{
		__LIB_18__.func_477(iVar2, "HPPHONE_CANCEL" /* GXT: Cancel The Doomsday Heist */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 13;
	iVar2++;
	if ((__LIB_3__.func_684(PLAYER::PLAYER_ID(), 1) && __LIB_3__.func_684(PLAYER::PLAYER_ID(), 2)) && __LIB_3__.func_684(PLAYER::PLAYER_ID(), 3))
	{
		bVar1 = true;
		if (!__LIB_2__.func_179(PLAYER::PLAYER_ID()) || __LIB_2__.func_331(PLAYER::PLAYER_ID()))
		{
			bVar1 = false;
		}
		func_512(61, iVar2, "CSH_LPHONE_CANCEL" /* GXT: Cancel The Diamond Casino Heist */, bVar1);
		if (func_86(61) > 0)
		{
			__LIB_18__.func_477(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
			func_434(func_86(61), 0);
		}
	}
	else
	{
		__LIB_18__.func_477(iVar2, "CSH_LPHONE_CANCEL" /* GXT: Cancel The Diamond Casino Heist */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 15;
	iVar2++;
	if (__LIB_25__.func_218(104, 0, 0))
	{
		iVar0 = __LIB_19__.func_1(25);
		bVar1 = true;
		if (((BitTest(Global_2703735.f_3673, 10) || !func_309(23)) || !func_279(23)) || (iVar0 > 0 && (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(__LIB_18__.func_502(46), -1, false, 0) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 194)))
		{
			bVar1 = false;
		}
		func_512(23, iVar2, "GC_MENU49" /* GXT: Locate a Boat */, bVar1);
		__LIB_18__.func_477(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
		func_434(func_86(23), 0);
	}
	else
	{
		__LIB_18__.func_477(iVar2, "GC_MENU49" /* GXT: Locate a Boat */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 5;
	iVar2++;
	if (__LIB_25__.func_218(98, 0, 0))
	{
		iVar0 = __LIB_19__.func_1(25);
		bVar1 = true;
		if (((BitTest(Global_2703735.f_3673, 10) || !func_309(24)) || !func_279(24)) || (iVar0 > 0 && (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(__LIB_18__.func_502(46), -1, false, 0) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 194)))
		{
			bVar1 = false;
		}
		func_512(24, iVar2, "GC_MENU50" /* GXT: Locate a Helicopter */, bVar1);
		__LIB_18__.func_477(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
		func_434(func_86(24), 0);
	}
	else
	{
		__LIB_18__.func_477(iVar2, "GC_MENU50" /* GXT: Locate a Helicopter */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 6;
	iVar2++;
	if (__LIB_25__.func_218(103, 0, 0))
	{
		iVar0 = __LIB_19__.func_1(25);
		bVar1 = true;
		if (((BitTest(Global_2703735.f_3673, 10) || !func_309(25)) || !func_279(25)) || (iVar0 > 0 && (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(__LIB_18__.func_502(46), -1, false, 0) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 194)))
		{
			bVar1 = false;
		}
		func_512(25, iVar2, "GC_MENU51" /* GXT: Locate a Car */, bVar1);
		__LIB_18__.func_477(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
		func_434(func_86(25), 0);
	}
	else
	{
		__LIB_18__.func_477(iVar2, "GC_MENU51" /* GXT: Locate a Car */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 7;
	iVar2++;
	if (__LIB_25__.func_218(105, 0, 0))
	{
		iVar0 = __LIB_19__.func_1(25);
		bVar1 = true;
		if (((BitTest(Global_2703735.f_3673, 10) || !func_309(26)) || !func_279(26)) || (iVar0 > 0 && (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(__LIB_18__.func_502(46), -1, false, 0) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 194)))
		{
			bVar1 = false;
		}
		func_512(26, iVar2, "GC_MENU52" /* GXT: Locate a Plane */, bVar1);
		__LIB_18__.func_477(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
		func_434(func_86(26), 0);
	}
	else
	{
		__LIB_18__.func_477(iVar2, "GC_MENU52" /* GXT: Locate a Plane */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 8;
	iVar2++;
	if (__LIB_25__.func_218(119, 0, 0))
	{
		iVar0 = __LIB_19__.func_1(35);
		bVar1 = true;
		if (iVar0 > 0)
		{
			bVar1 = false;
			MISC::SET_BIT(&uLocal_172, 0);
		}
		if ((!func_309(35) || !func_279(35)) || __LIB_9__.func_30())
		{
			bVar1 = false;
		}
		func_512(35, iVar2, "GC_MENU55" /* GXT: Cops Turn Blind Eye */, bVar1);
		__LIB_18__.func_477(iVar2, "MPCT_CASH" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
		func_434(func_86(35), 0);
	}
	else
	{
		__LIB_18__.func_477(iVar2, "GC_MENU55" /* GXT: Cops Turn Blind Eye */, 0, 1, 0, 0, 0);
		__LIB_18__.func_477(iVar2, "", 1, 1, 0, 0, 0);
		__LIB_4__.func_857(15, 0);
	}
	Local_122.f_181.f_70[iVar2] = 9;
	iVar2++;
	__LIB_4__.func_222(-1);
	if (func_1120())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__.func_345(237, "BB_SELECT" /* GXT: Select */, -1, 0);
			__LIB_1__.func_345(238, "BB_BACK" /* GXT: Back */, -1, 0);
		}
		else
		{
			__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
			__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 6);
	}
	__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
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
		__LIB_0__.func_203(&(Local_122.f_1), Local_122.f_180, 0, &(Local_122.f_166), 0, 1);
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
		if (__LIB_2__.func_47(&uLocal_176, 1000, 0))
		{
			if (func_538(201))
			{
				func_1098(1);
				MISC::SET_BIT(&uLocal_187, 3);
			}
			else if (func_538(202))
			{
				func_1(Local_122.f_1, "CT_AUD", "MPCT_LGEN4", &Local_166, 0);
				MISC::CLEAR_BIT(&iLocal_178, 0);
				func_32(4);
			}
		}
	}
}

void func_1098(bool bParam0)//Position - 0x496F1
{
	int iVar0;
	if (__LIB_2__.func_331(PLAYER::PLAYER_ID()) && !bParam0)
	{
		return;
	}
	__LIB_4__.func_879(8520, -1);
	__LIB_4__.func_879(8521, -1);
	__LIB_4__.func_879(8522, -1);
	__LIB_4__.func_879(8523, -1);
	__LIB_4__.func_879(8524, -1);
	__LIB_4__.func_879(8525, -1);
	__LIB_4__.func_879(8526, -1);
	__LIB_4__.func_879(8527, -1);
	__LIB_4__.func_879(8528, -1);
	__LIB_4__.func_879(8529, -1);
	__LIB_4__.func_879(8530, -1);
	__LIB_4__.func_879(8531, -1);
	__LIB_4__.func_879(8533, -1);
	__LIB_4__.func_879(8535, -1);
	__LIB_4__.func_879(12880, -1);
	__LIB_4__.func_879(8805, -1);
	__LIB_1__.func_39(28081, 0, -1);
	__LIB_1__.func_39(28082, 0, -1);
	__LIB_27__.func_511();
	__LIB_27__.func_510(0, -1);
	__LIB_27__.func_509();
	iVar0 = __LIB_1__.func_556(8726, -1, 0);
	MISC::CLEAR_BIT(&iVar0, 29);
	MISC::CLEAR_BIT(&iVar0, 30);
	__LIB_1__.func_597(8726, iVar0, -1, 1, 0);
	__LIB_6__.func_881(-1713398555, 18, 0);
	func_1099();
}

void func_1099()//Position - 0x497E6
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__.func_5();
	iVar2 = __LIB_2__.func_357(iVar0);
	iVar3 = MISC::GET_PROFILE_SETTING(iVar2);
	if (BitTest(iVar3, 1))
	{
		MISC::CLEAR_BIT(&iVar3, 1);
		bVar1 = true;
	}
	if (BitTest(iVar3, 2))
	{
		MISC::CLEAR_BIT(&iVar3, 2);
		bVar1 = true;
	}
	if (BitTest(iVar3, 3))
	{
		MISC::CLEAR_BIT(&iVar3, 3);
		bVar1 = true;
	}
	if (bVar1)
	{
		STATS::SET_FREEMODE_STRAND_PROGRESSION_STATUS(iVar2, iVar3);
	}
}

void func_1104()//Position - 0x499FD
{
	if (BitTest(iLocal_178, 0))
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("HUD_CONNPROB" /* GXT: alert */, "MPCT_CNCW" /* GXT: Are you sure you want to cancel this Heist? If you have paid a setup cost it won't be refunded. */, 36, 0, false, -1, 0, 0, true, 0);
		if (__LIB_2__.func_47(&uLocal_176, 1000, 0))
		{
			if (func_538(201))
			{
				func_1106(1, -1);
				func_1105();
				MISC::SET_BIT(&(Global_1888862[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*120*/].f_38.f_27), 6);
				func_1(Local_122.f_1, "CT_AUD", "MPCT_Lconf", &Local_166, 0);
				MISC::CLEAR_BIT(&iLocal_178, 0);
				func_32(4);
			}
			else if (func_538(202))
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
	iVar1 = __LIB_6__.func_900(0, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_1106(bool bParam0, int iParam1)//Position - 0x49ADE
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_8__.func_678(PLAYER::PLAYER_ID(), 0);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (iVar0 != -1)
	{
		iVar1 = __LIB_1__.func_556(6427, -1, 0);
		switch (iVar0)
		{
			case 0:
				MISC::CLEAR_BIT(&iVar1, 0);
				__LIB_27__.func_515(16, 0, 0, 0, 1);
				__LIB_27__.func_515(17, 0, 0, 0, 1);
				__LIB_27__.func_515(18, 0, 0, 0, 1);
				__LIB_27__.func_515(0, 0, 0, 0, 1);
				__LIB_27__.func_515(1, 0, 0, 0, 1);
				__LIB_27__.func_515(2, 0, 0, 0, 1);
				__LIB_27__.func_515(3, 0, 0, 0, 1);
				__LIB_17__.func_158();
				if (bParam0)
				{
					__LIB_27__.func_513(iVar0, -1);
				}
				break;
			case 1:
				MISC::CLEAR_BIT(&iVar1, 1);
				__LIB_27__.func_515(19, 0, 0, 0, 1);
				__LIB_27__.func_515(20, 0, 0, 0, 1);
				__LIB_27__.func_515(21, 0, 0, 0, 1);
				__LIB_27__.func_515(22, 0, 0, 0, 1);
				__LIB_27__.func_515(23, 0, 0, 0, 1);
				__LIB_27__.func_515(4, 0, 0, 0, 1);
				__LIB_27__.func_515(5, 0, 0, 0, 1);
				__LIB_27__.func_515(6, 0, 0, 0, 1);
				__LIB_27__.func_515(7, 0, 0, 0, 1);
				__LIB_27__.func_515(8, 0, 0, 0, 1);
				__LIB_17__.func_158();
				if (bParam0)
				{
					__LIB_27__.func_513(iVar0, -1);
				}
				break;
			case 2:
				MISC::CLEAR_BIT(&iVar1, 2);
				__LIB_27__.func_515(24, 0, 0, 0, 1);
				__LIB_27__.func_515(25, 0, 0, 0, 1);
				__LIB_27__.func_515(26, 0, 0, 0, 1);
				__LIB_27__.func_515(27, 0, 0, 0, 1);
				__LIB_27__.func_515(28, 0, 0, 0, 1);
				__LIB_27__.func_515(29, 0, 0, 0, 1);
				__LIB_27__.func_515(9, 0, 0, 0, 1);
				__LIB_27__.func_515(10, 0, 0, 0, 1);
				__LIB_27__.func_515(11, 0, 0, 0, 1);
				__LIB_27__.func_515(12, 0, 0, 0, 1);
				__LIB_27__.func_515(13, 0, 0, 0, 1);
				__LIB_27__.func_515(14, 0, 0, 0, 1);
				__LIB_27__.func_515(15, 0, 0, 0, 1);
				__LIB_17__.func_158();
				if (bParam0)
				{
					__LIB_27__.func_513(iVar0, -1);
				}
				break;
		}
		__LIB_1__.func_597(6427, iVar1, -1, 1, 0);
		__LIB_27__.func_514();
		__LIB_22__.func_505();
	}
}

void func_1118()//Position - 0x4A5E0
{
	if (BitTest(uLocal_175, 0))
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("HUD_CONNPROB" /* GXT: alert */, "MPCT_CNCW" /* GXT: Are you sure you want to cancel this Heist? If you have paid a setup cost it won't be refunded. */, 36, 0, false, -1, 0, 0, true, 0);
		if (__LIB_2__.func_47(&uLocal_176, 1000, 0))
		{
			if (func_538(201))
			{
				func_1119();
				func_1(Local_122.f_1, "CT_AUD", "MPCT_Lconf", &Local_166, 0);
				MISC::CLEAR_BIT(&uLocal_175, 0);
				func_32(4);
			}
			else if (func_538(202))
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
	if (!__LIB_2__.func_324())
	{
		return;
	}
	Global_2667209 = 1;
}

int func_1120()//Position - 0x4A68A
{
	if (__LIB_7__.func_158())
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
	else if (((!HUD::IS_PAUSE_MENU_ACTIVE() && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !__LIB_0__.func_191(8, -1))
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
			__LIB_27__.func_772(0, &uLocal_208);
			switch (Local_122.f_178)
			{
				case 1:
					func_1348(&fVar6, &fVar8, &fVar7, &fVar9, 76);
					fVar6 = (fVar6 - (fVar7 / 2f));
					fVar8 = (fVar8 - (fVar9 / 2f));
					fVar8 = (fVar8 + 0.034722f);
					Global_4539961 = __LIB_35__.func_69(fVar6, fVar8, 0.222f, 0.034722f, 0.034722f, __LIB_0__.func_310(Local_122.f_181.f_2, 0, 16), 255, 0, 0);
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
					__LIB_7__.func_287(0, 0, BitTest(bLocal_169, 2), 1);
					break;
				case 10:
					if (iLocal_160 == -1 && iLocal_161)
					{
						__LIB_7__.func_287(0, 0, 0, 1);
					}
					else
					{
						__LIB_7__.func_287(0, 1, 0, 1);
					}
					break;
				default:
					__LIB_7__.func_287(0, 0, 0, 1);
					break;
			}
			if (__LIB_2__.func_157())
			{
				if (Local_122.f_181.f_69 == iVar5)
				{
					if (Local_122.f_178 == 2 && Local_122.f_181.f_69 == 0)
					{
						iVar4 = __LIB_3__.func_632(0.15f);
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
					__LIB_2__.func_183(Local_122.f_181.f_69, 1, 1);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
				}
				iLocal_156 = 1;
			}
		}
		if (Local_122.f_181.f_2 > 0)
		{
			if (!BitTest(Local_122.f_181, 0))
			{
				if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/) || (__LIB_0__.func_77(0) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/))) || func_1340())
				{
					func_1339();
					MISC::SET_BIT(&(Local_122.f_181), 0);
					__LIB_0__.func_579(&uLocal_149);
				}
				else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
				{
					func_1339();
					MISC::SET_BIT(&(Local_122.f_181), 0);
					__LIB_0__.func_579(&uLocal_149);
				}
			}
			else if (func_1338(172) && func_1338(181))
			{
				MISC::CLEAR_BIT(&(Local_122.f_181), 0);
			}
			if (!BitTest(Local_122.f_181, 1))
			{
				if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/) || (__LIB_0__.func_77(0) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/))) || func_1337())
				{
					func_1335();
					MISC::SET_BIT(&(Local_122.f_181), 1);
					__LIB_0__.func_579(&uLocal_149);
				}
				else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
				{
					func_1335();
					MISC::SET_BIT(&(Local_122.f_181), 1);
					__LIB_0__.func_579(&uLocal_149);
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
				if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/) || (__LIB_0__.func_77(0) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/))) || iVar4 == -1)
				{
					func_1334();
					MISC::SET_BIT(&(Local_122.f_181), 2);
					__LIB_0__.func_579(&uLocal_149);
				}
			}
			else if (func_1338(174))
			{
				MISC::CLEAR_BIT(&(Local_122.f_181), 2);
			}
			if (!BitTest(Local_122.f_181, 3))
			{
				if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/) || (__LIB_0__.func_77(0) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/))) || iVar4 == 1)
				{
					func_1333();
					MISC::SET_BIT(&(Local_122.f_181), 3);
					__LIB_0__.func_579(&uLocal_149);
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
			if (__LIB_2__.func_351() || iVar3)
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
				if (__LIB_2__.func_350() || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/))
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
					if (__LIB_9__.func_500() == 1 && Local_122.f_178 == 1)
					{
						if (__LIB_0__.func_154(Local_122.f_181.f_136[Local_122.f_181.f_69], 0, 1))
						{
							Var2 = { __LIB_0__.func_604(Local_122.f_181.f_136[Local_122.f_181.f_69]) };
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
	if (!__LIB_1__.func_112(PLAYER::PLAYER_ID(), 6))
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
		Local_122.f_181.f_69 = __LIB_9__.func_341(iParam0);
		return;
	}
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
			__LIB_9__.func_361();
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
			__LIB_2__.func_8();
			break;
		case 10:
			func_1221();
			break;
		case 11:
			func_1220();
			break;
		case 12:
			__LIB_19__.func_772();
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
	if (__LIB_7__.func_305(Local_122.f_181.f_69))
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
		__LIB_0__.func_580(&(Global_1979021.f_5), 0, 0);
	}
}

void func_1162()//Position - 0x4B727
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_7__.func_305(Local_122.f_181.f_69))
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
				iVar2 = __LIB_7__.func_158(iVar0);
				if (__LIB_0__.func_112())
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
	__LIB_0__.func_579(&(Global_1978980.f_6));
	__LIB_0__.func_495(&(Global_1978980.f_8), 0, 0);
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
	if (__LIB_7__.func_305(Local_122.f_181.f_69))
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
				iVar3 = __LIB_2__.func_43(iVar0);
				if (__LIB_0__.func_112())
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
	__LIB_0__.func_579(&(Global_1978966.f_6));
	__LIB_0__.func_495(&(Global_1978966.f_8), 0, 0);
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
	if (__LIB_7__.func_305(Local_122.f_181.f_69))
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
					func_92(20, __LIB_2__.func_44());
				}
				else
				{
					__LIB_2__.func_102(1);
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
				__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[76 /*2*/]), 1, 0);
				__LIB_41__.func_612(76, -1, -1);
				__LIB_18__.func_481();
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
				iVar1 = __LIB_19__.func_1(72);
				if (iVar1 > 0)
				{
					func_92(20, iVar1);
				}
				else if (__LIB_7__.func_161(PLAYER::PLAYER_ID()))
				{
					func_92(1, 0);
				}
				else if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_86(72), false, true, false, -1, 0))
				{
					MISC::SET_BIT(&bLocal_169, 0);
					func_92(0, 0);
				}
				else
				{
					MISC::SET_BIT(&(Local_122.f_359), 10);
					Local_122.f_360 = 72;
					Local_122.f_358 = __LIB_0__.func_160();
					__LIB_21__.func_897(__LIB_6__.func_900(1, 1), Local_122.f_360, __LIB_0__.func_160(), 0);
				}
				break;
		}
	}
	else
	{
		func_1(Local_122.f_1, "FXFRAUD", "FXFR_PM_9", &Local_166, 0);
	}
}

bool func_1174(int iParam0)//Position - 0x4BD33
{
	return __LIB_0__.func_287(&(Global_2789194.f_1), iParam0);
}

void func_1175()//Position - 0x4BD47
{
	int iVar0;
	if (__LIB_7__.func_305(Local_122.f_181.f_69))
	{
		switch (Local_122.f_181.f_69)
		{
			case 0:
				iVar0 = __LIB_19__.func_1(74);
				if (iVar0 > 0)
				{
					func_92(20, iVar0);
				}
				else if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_86(74), false, true, false, -1, 0))
				{
					MISC::SET_BIT(&bLocal_169, 0);
					func_92(0, 0);
				}
				else
				{
					MISC::SET_BIT(&(Local_122.f_359), 10);
					Local_122.f_360 = 74;
					Local_122.f_358 = __LIB_0__.func_160();
					__LIB_21__.func_897(__LIB_6__.func_900(1, 1), Local_122.f_360, __LIB_0__.func_160(), 0);
				}
				break;
			case 1:
				iVar0 = __LIB_19__.func_1(73);
				if (iVar0 > 0)
				{
					func_92(20, iVar0);
				}
				else if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_86(73), false, true, false, -1, 0))
				{
					MISC::SET_BIT(&bLocal_169, 0);
					func_92(0, 0);
				}
				else if (!__LIB_9__.func_293())
				{
					MISC::SET_BIT(&(Local_122.f_359), 10);
					Local_122.f_360 = 73;
					Local_122.f_358 = __LIB_0__.func_160();
					__LIB_21__.func_897(__LIB_6__.func_900(1, 1), Local_122.f_360, __LIB_0__.func_160(), 0);
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
		if ((__LIB_8__.func_278(PLAYER::PLAYER_ID()) && func_515(0)) && !__LIB_8__.func_882(PLAYER::PLAYER_ID()))
		{
			if (func_86(69) == 0 || MONEY::NETWORK_CAN_SPEND_MONEY(func_86(69), false, true, false, -1, 0))
			{
				if (!BitTest(iLocal_193, 0))
				{
					MISC::SET_BIT(&iLocal_193, 0);
					__LIB_0__.func_580(&uLocal_194, 0, 0);
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
		if (__LIB_4__.func_856(PLAYER::PLAYER_ID()))
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
	if ((((__LIB_0__.func_877(PLAYER::PLAYER_ID()) && __LIB_2__.func_354(1)) && !func_547(PLAYER::PLAYER_ID())) && !func_544(PLAYER::PLAYER_ID())) && !__LIB_35__.func_62(PLAYER::PLAYER_ID()))
	{
		if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(68), false, true, false, -1, 0))
		{
			if (!BitTest(uLocal_190, 0))
			{
				MISC::SET_BIT(&uLocal_190, 0);
				__LIB_0__.func_580(&uLocal_191, 0, 0);
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
	if (__LIB_0__.func_502())
	{
		func_1183();
	}
	else
	{
		func_1182();
	}
	__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[60 /*2*/]), 1, 0);
	__LIB_41__.func_612(60, -1, -1);
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
	if (__LIB_0__.func_112())
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
	if (!__LIB_1__.func_365(PLAYER::PLAYER_ID()))
	{
		__LIB_1__.func_123(9);
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_304 = uParam0;
	}
	else
	{
		__LIB_1__.func_123(12);
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
	if (__LIB_1__.func_112(PLAYER::PLAYER_ID(), 6))
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
			func_1188(-1);
			__LIB_0__.func_495(&(Local_184.f_4), 0, 0);
			__LIB_1__.func_123(6);
			if (func_757())
			{
				__LIB_1__.func_125(6);
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
			if (__LIB_0__.func_502())
			{
				func_1187();
			}
			else
			{
				func_1182();
			}
			__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[59 /*2*/]), 1, 0);
			__LIB_41__.func_612(59, -1, -1);
			__LIB_2__.func_106();
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

void func_1188(int iParam0)//Position - 0x4C3CA
{
	if (!__LIB_24__.func_125(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (iParam0 != -1)
	{
		__LIB_4__.func_831(iParam0);
	}
	__LIB_2__.func_107(243, -1);
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
	if (!__LIB_23__.func_189())
	{
		bVar3 = true;
	}
	if (!bVar3)
	{
		if (iVar1 == 0)
		{
			if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(44), false, true, false, -1, 0))
			{
				iVar4 = func_1198(2);
				if (iVar4 == 0)
				{
					iVar5 = __LIB_19__.func_1(44);
					if (iVar5 > 0)
					{
						func_92(20, iVar5);
						iVar2 = 1;
					}
					else
					{
						MISC::SET_BIT(&(Local_122.f_359), 10);
						Local_122.f_360 = 44;
						Local_122.f_358 = __LIB_0__.func_160();
						Global_2815059.f_883 = 1;
						__LIB_21__.func_897(__LIB_6__.func_900(1, 1), Local_122.f_360, __LIB_0__.func_160(), 0);
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
		Local_144 = { __LIB_6__.func_93(iParam1, 0, 0) };
	}
	__LIB_0__.func_495(&uLocal_145, 0, 0);
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
			if (__LIB_1__.func_390(PLAYER::PLAYER_ID(), 2) || __LIB_1__.func_389())
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
	if (func_171(__LIB_1__.func_165()))
	{
		bVar1 = true;
	}
	if (Local_122.f_181.f_69 == 0)
	{
		if (bVar1)
		{
			if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(43), false, true, false, -1, 0))
			{
				iVar3 = func_1198(5);
				if (iVar3 == 0)
				{
					iVar4 = __LIB_19__.func_1(43);
					if (iVar4 > 0)
					{
						func_92(20, iVar4);
						func_1(Local_122.f_1, "CT_AUD", "MPCT_HPno", &Local_166, 0);
					}
					else
					{
						MISC::SET_BIT(&(Local_122.f_359), 10);
						Local_122.f_360 = 43;
						Local_122.f_358 = __LIB_0__.func_160();
						__LIB_21__.func_897(__LIB_6__.func_900(1, 1), Local_122.f_360, __LIB_0__.func_160(), 0);
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
				if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(64), false, true, false, -1, 0) || func_86(64) == 0)
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
			if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(40), false, true, false, -1, 0))
			{
				iVar2 = __LIB_1__.func_332(PLAYER::PLAYER_ID());
				if (((((!__LIB_18__.func_324(PLAYER::PLAYER_ID(), iVar2, 100f) && !func_231(0)) && !func_240(0)) && !func_239(PLAYER::PLAYER_ID(), 0)) && !__LIB_1__.func_331(0, 1024)) && !Global_262145.f_13115 /* Tunable: YACHT_DISABLE_PHONE_HELI_DELIVERY */)
				{
					func_1206(0, 1);
					if (func_1205(0))
					{
						if (__LIB_0__.func_112())
						{
							func_99(joaat("SERVICE_SPEND_HELI_PICKUP"), func_86(40), &iVar3, 1, 1, 0);
						}
						else
						{
							MONEY::NETWORK_SPENT_HELI_PICKUP(func_86(40), false, true, -1266520414);
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
			if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(41), false, true, false, -1, 0))
			{
				iVar2 = __LIB_1__.func_332(PLAYER::PLAYER_ID());
				if (((((!__LIB_18__.func_324(PLAYER::PLAYER_ID(), iVar2, 100f) && !func_231(1)) && !func_240(1)) && !__LIB_1__.func_331(1, 1024)) && !func_239(PLAYER::PLAYER_ID(), 1)) && !Global_262145.f_13114 /* Tunable: YACHT_DISABLE_PHONE_BOAT_SHORE_DELIVERY */)
				{
					func_1206(1, 1);
					if (func_1205(1))
					{
						if (__LIB_0__.func_112())
						{
							func_99(joaat("SERVICE_SPEND_BOAT_PICKUP"), func_86(41), &iVar3, 1, 1, 0);
						}
						else
						{
							MONEY::NETWORK_SPENT_BOAT_PICKUP(func_86(41), false, true, -1266520414);
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
			if (((((uVar4 && uVar5) && __LIB_18__.func_324(PLAYER::PLAYER_ID(), __LIB_1__.func_332(PLAYER::PLAYER_ID()), 100f)) && !func_177(1133903872)) && !func_186(PLAYER::PLAYER_ID())) && !Global_262145.f_13113 /* Tunable: YACHT_DISABLE_PHONE_PV_SHORE_DELIVERY */)
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
	return __LIB_1__.func_331(iParam0, 256);
}

void func_1206(int iParam0, bool bParam1)//Position - 0x4CFD6
{
	__LIB_23__.func_251(iParam0, 256, bParam1);
}

void func_1208()//Position - 0x4D044
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (Local_122.f_181.f_69 == 0)
	{
		if (__LIB_25__.func_218(74, 0, 0))
		{
			if (func_309(39))
			{
				if (func_279(39))
				{
					if (__LIB_1__.func_387(1) >= func_86(39))
					{
						if (!BitTest(Global_2703735.f_3673, 0))
						{
							iVar2 = __LIB_19__.func_1(39);
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
	iVar0 = __LIB_24__.func_23(Local_122.f_181.f_70[Local_122.f_181.f_69]);
	iVar1 = __LIB_28__.func_847(iVar0);
	if (__LIB_0__.func_112())
	{
		func_99(joaat("SERVICE_SPEND_REQUEST_HEIST"), iVar1, &iVar2, 1, 1, 0);
	}
	else
	{
		MONEY::NETWORK_SPENT_REQUEST_HEIST(iVar1, false, false, joaat("char_lester"));
	}
	__LIB_7__.func_45(iVar0);
	__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[50 /*2*/]), 1, 0);
	__LIB_41__.func_612(50, -1, -1);
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
	uVar0 = __LIB_15__.func_447(PLAYER::PLAYER_ID());
	iVar1 = __LIB_24__.func_107(12, uVar0, &uLocal_182, &iLocal_183);
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
	iVar3 = func_86(36);
	__LIB_1__.func_611(-iVar3, 1, 1, 0f);
	if (iVar3 > 0)
	{
		MONEY::NETWORK_SPENT_REQUEST_HEIST(iVar3, false, true, joaat("char_lester"));
	}
	MISC::SET_BIT(&(Global_2815059.f_1777), 6);
	iVar4 = Local_122.f_181.f_70[Local_122.f_181.f_69];
	Global_2815059.f_1779 = uLocal_182[iVar4];
	__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[36 /*2*/]), 1, 0);
	__LIB_41__.func_612(36, -1, -1);
	func_32(4);
	MISC::CLEAR_BIT(&(Local_122.f_359), 4);
}

void func_1214()//Position - 0x4D4ED
{
	switch (Local_122.f_181.f_69)
	{
		case 0:
			MISC::SET_BIT(&(Local_122.f_359), 10);
			Local_122.f_360 = __LIB_23__.func_557(Local_122.f_0);
			Local_122.f_358 = __LIB_0__.func_160();
			__LIB_21__.func_897(__LIB_6__.func_900(1, 1), Local_122.f_360, __LIB_0__.func_160(), 0);
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
		if (__LIB_25__.func_218(106, 0, 0))
		{
			if (func_309(21))
			{
				if (func_279(21))
				{
					iVar2 = __LIB_19__.func_1(21);
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
					else if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(21), false, true, false, -1, 0))
					{
						MISC::SET_BIT(&(Global_2815059.f_1777), 5);
						__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[21 /*2*/]), 1, 0);
						__LIB_41__.func_612(21, -1, -1);
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
		if (__LIB_25__.func_218(97, 0, 0))
		{
			if (func_309(17))
			{
				if (func_279(17))
				{
					iVar2 = __LIB_19__.func_1(17);
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
					else if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(17), false, true, false, -1, 0))
					{
						MISC::SET_BIT(&(Global_2815059.f_1777), 2);
						__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[17 /*2*/]), 1, 0);
						__LIB_41__.func_612(17, -1, -1);
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
		if (__LIB_25__.func_218(100, 0, 0))
		{
			if (func_309(19))
			{
				if (func_279(19))
				{
					iVar2 = __LIB_19__.func_1(19);
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
					else if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(15), false, true, false, -1, 0))
					{
						MISC::SET_BIT(&(Global_2815059.f_1777), 4);
						__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[19 /*2*/]), 1, 0);
						__LIB_41__.func_612(19, -1, -1);
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
		if (__LIB_1__.func_190(0) || Global_1922044)
		{
			if (func_940(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1))
			{
				bVar0 = false;
			}
		}
		if (__LIB_8__.func_48(iLocal_137, -1) == 116)
		{
			bVar1 = true;
			bVar0 = false;
		}
		if (iLocal_137 >= 1000 && __LIB_1__.func_187(iLocal_137) == 1)
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
					if (__LIB_0__.func_167(91, 3) == 1)
					{
						if (__LIB_0__.func_112())
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
				if (__LIB_23__.func_558(iVar2))
				{
					if (!Global_1585094)
					{
						if (__LIB_0__.func_167(91, 3) == 1)
						{
							__LIB_7__.func_973(&Var3, Global_1585857[iVar2 /*142*/].f_66, 0, -1);
							if (BitTest(Global_1585857[iVar2 /*142*/].f_103, 16))
							{
								iVar4 = Var3.f_4;
								if (func_912(iVar2) > 0)
								{
									iVar4 = (iVar4 - func_912(iVar2));
								}
								if (__LIB_1__.func_177(Global_1585857[iVar2 /*142*/].f_66))
								{
									iVar4 = Global_262145.f_21982 /* Tunable: 843919183 */;
								}
							}
							else
							{
								iVar4 = 0;
							}
							if (!__LIB_38__.func_702(iVar2, 0, 0, -1, 0))
							{
								bVar1 = true;
							}
							if (__LIB_0__.func_304(PLAYER::PLAYER_ID()))
							{
								bVar1 = true;
								bVar0 = false;
							}
							if (Global_1585857[iVar2 /*142*/].f_66 == joaat("oppressor2") && __LIB_28__.func_43())
							{
								bVar1 = true;
								bVar0 = false;
							}
							if (iVar4 == 0 || ((MONEY::NETWORK_GET_VC_BANK_BALANCE() + MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1)) >= iVar4 || MONEY::NETWORK_CAN_SPEND_MONEY(iVar4, false, true, false, -1, 0)))
							{
								Global_1585094.f_2 = iVar4;
								Global_1585094.f_3 = iVar2;
								if (__LIB_0__.func_112())
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
							if (__LIB_0__.func_112())
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
	if (!__LIB_7__.func_48())
	{
		return;
	}
	iVar0 = Local_122.f_181.f_69;
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = uLocal_164[iVar0];
	if (__LIB_9__.func_347(iVar0))
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
	if (!__LIB_23__.func_127(iParam0))
	{
		func_92(1, 0);
		return;
	}
	if (!__LIB_39__.func_967(iParam0))
	{
		func_92(1, 0);
		return;
	}
	if (!func_1243(__LIB_4__.func_65(func_996(iParam0), -1)))
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
	Global_2703735.f_3674 = __LIB_4__.func_65(iVar0, -1);
	if (__LIB_5__.func_108(iVar0))
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
	Global_2689235[iVar0 /*453*/].f_46 = __LIB_19__.func_209(iParam0);
	__LIB_5__.func_110(iParam0, &(uVar1[0]), &(uVar1[1]));
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
		if (__LIB_0__.func_846(PLAYER::PLAYER_ID()) < func_1244(iVar0, &uVar1))
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
	if (__LIB_1__.func_378(iParam0))
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
	return (__LIB_23__.func_127(iParam0) && iLocal_162 > 0);
}

int func_1252()//Position - 0x4EFB3
{
	return __LIB_19__.func_1(22);
}

int func_1254(int iParam0)//Position - 0x4F018
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (iParam0 < 29)
	{
		if (__LIB_8__.func_48(iParam0, -1) > 0 && !__LIB_25__.func_472(iParam0))
		{
			iVar0 = 0;
			iVar3 = __LIB_18__.func_591(iParam0, -1, 1);
			if (iParam0 == 13)
			{
				iVar3 = 11;
			}
			else if (iParam0 == 18)
			{
				iVar3 = 10;
			}
			iVar0 = 0;
			while (iVar0 < iVar3)
			{
				iVar1 = (__LIB_18__.func_704(iParam0) + iVar0);
				__LIB_1__.func_327(iVar1, &iVar2, 1);
				if (iVar2 >= 0 && !__LIB_1__.func_322(iVar1))
				{
					if (STREAMING::IS_MODEL_A_VEHICLE(__LIB_5__.func_725(iVar2)))
					{
						if (!BitTest(Global_1585857[iVar2 /*142*/].f_103, 10))
						{
							return 1;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		iVar4 = __LIB_1__.func_187(iParam0);
		iVar0 = 0;
		while (iVar0 < __LIB_4__.func_573(iVar4))
		{
			iVar1 = (__LIB_1__.func_325(iVar4) + iVar0);
			__LIB_1__.func_327(iVar1, &iVar2, 1);
			if (iVar2 >= 0 && !__LIB_1__.func_322(iVar1))
			{
				if (STREAMING::IS_MODEL_A_VEHICLE(__LIB_5__.func_725(iVar2)))
				{
					if (!BitTest(Global_1585857[iVar2 /*142*/].f_103, 10))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_1255()//Position - 0x4F12D
{
	bool bVar0;
	int iVar1;
	int iVar2;
	iVar1 = func_86(12);
	if (func_91(1))
	{
		if (__LIB_0__.func_154(Local_122.f_358, 0, 1))
		{
			if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar1, false, true, false, -1, 0))
			{
				iVar2 = __LIB_19__.func_1(12);
				if (iVar2 > 0)
				{
					func_92(20, iVar2);
				}
				else
				{
					MISC::SET_BIT(&(Local_122.f_359), 10);
					Local_122.f_360 = 12;
					__LIB_21__.func_897(__LIB_6__.func_900(1, 1), 12, Local_122.f_358, 0);
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
		iVar2 = __LIB_19__.func_1(7);
		if (__LIB_5__.func_725(uLocal_159[Local_122.f_181.f_69]) == joaat("oppressor2") && __LIB_28__.func_43())
		{
			iVar2 = (Global_262145.f_28396 /* Tunable: 247954694 */ - __LIB_5__.func_572(&Global_2789823, 1));
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
			Local_122.f_358 = __LIB_0__.func_160();
			__LIB_21__.func_897(__LIB_6__.func_900(1, 1), Local_122.f_360, __LIB_0__.func_160(), 0);
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
			__LIB_1__.func_342("BB_PVUNA1" /* GXT: You have no Personal Vehicle in this space. */, 100, 0);
			func_92(14, 0);
		}
		else if (iVar1 == 2)
		{
			__LIB_1__.func_342("BB_PVUNA2" /* GXT: You are too close to your current Personal Vehicle. */, 100, 0);
			func_92(13, 0);
		}
		else if (iVar1 == 3)
		{
			__LIB_1__.func_342("BB_PVUNA3" /* GXT: Your Personal Vehicle is not empty. */, 100, 0);
			func_92(15, 0);
		}
		else if (iVar1 == 4)
		{
			__LIB_1__.func_342("BB_PVUNA4" /* GXT: You are too far from a suitable road. */, 100, 0);
			func_92(16, 0);
		}
		else if (iVar1 == 5)
		{
			__LIB_1__.func_342("BB_PVUNA5" /* GXT: Unlocks when you have a Garage. */, 100, 0);
			func_92(17, 0);
		}
		else if (iVar1 == 6)
		{
			__LIB_1__.func_342("BB_PVUNA6" /* GXT: Unavailable. */, 100, 0);
			func_92(18, 0);
		}
		else if (iVar1 == 7)
		{
			__LIB_1__.func_342("BB_PVUNA7" /* GXT: A delivery is in progress. */, 100, 0);
			func_92(21, 0);
		}
		else if (iVar1 == 8)
		{
			__LIB_1__.func_342("BB_PVUNA8" /* GXT: Your Personal Vehicle is impounded. */, 100, 0);
			func_92(22, 0);
			func_1(Local_122.f_1, "CT_AUD", "MPCT_MCGEN2", &Local_166, 0);
		}
		else if (iVar1 == 9)
		{
			__LIB_1__.func_342("BB_PVUNA9" /* GXT: You are already using your Personal Vehicle. */, 100, 0);
			func_1197(2, 0);
		}
		else if (iVar1 == 11)
		{
			__LIB_1__.func_342("BB_PVUNA11" /* GXT: You are too close to your Garage. */, 100, 0);
			func_1197(13, 0);
		}
		else if (iVar1 == 12)
		{
			__LIB_1__.func_342("BB_PVUNA12" /* GXT: Your Personal Vehicle is destroyed. You can call Mors Mutual Insurance to make a claim. */, 100, 0);
			func_1197(16, 0);
		}
		else if (iVar1 == 13)
		{
			__LIB_1__.func_342("BB_PVUNA13" /* GXT: Your Personal Vehicle is destroyed. To protect your vehicles in the future you can purchase Car Insurance. */, 100, 0);
			func_1197(18, 0);
		}
		else if (iVar1 == 14)
		{
			__LIB_1__.func_342("PIM_HRPV14" /* GXT: You already have an active Special/Personal Vehicle. */, 100, 0);
			func_1197(23, 0);
		}
		else if (iVar1 == 98)
		{
			__LIB_1__.func_342("BB_PVUNA98" /* GXT: Your Personal Vehicle is already in the LS Car Meet. Return it to Storage via the Vehicles section of the Interaction Menu if you wish to request another vehicle. */, 100, 0);
			func_1197(24, 0);
		}
		else if (iVar1 == 99)
		{
			__LIB_1__.func_342("PIM_HRPV99" /* GXT: This vehicle is not allowed inside the LS Car Meet. */, 100, 0);
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
	if (__LIB_1__.func_279(PLAYER::PLAYER_ID()) && Global_1964839 == PLAYER::PLAYER_ID())
	{
		return 98;
	}
	if ((((!bVar0 && !bVar1) && !bVar2) && !bVar3) && !bVar4)
	{
		if (iParam0 == -1)
		{
			if (__LIB_1__.func_165() > -1)
			{
				iParam0 = __LIB_1__.func_165();
				if (__LIB_7__.func_88(Global_1585857[iParam0 /*142*/].f_66, 0) && iParam4 == 0)
				{
					return 1;
				}
				else if (__LIB_1__.func_177(Global_1585857[iParam0 /*142*/].f_66) && iParam4 == 0)
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
		if ((__LIB_0__.func_693(PLAYER::PLAYER_ID()) || __LIB_0__.func_694(PLAYER::PLAYER_ID())) || __LIB_6__.func_931())
		{
			if (!__LIB_25__.func_948(1, iParam0, -1, 0, 0))
			{
				return 6;
			}
		}
		if (BitTest(Global_4718592.f_38, 20))
		{
			if (!__LIB_32__.func_426(Global_1585857[iParam0 /*142*/].f_66))
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
		if (!__LIB_2__.func_63(__LIB_4__.func_838(0)))
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
	if (((((BitTest(Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_1274, 0) && !bVar1) && !bVar0) && !bVar2) && !bVar3) && !bVar4)
	{
		return 10;
	}
	if ((((!bVar0 && !bVar1) && !bVar2) && !bVar3) && !bVar4)
	{
		if (func_171(iParam0))
		{
			return 8;
		}
	}
	if ((((!bVar0 && !bVar1) && !bVar2) && !bVar3) && !bVar4)
	{
		if (__LIB_7__.func_88(Global_1585857[iParam0 /*142*/].f_66, 0))
		{
			if (((ENTITY::DOES_ENTITY_EXIST(__LIB_2__.func_64()) && !ENTITY::IS_ENTITY_DEAD(__LIB_2__.func_64(), false)) && __LIB_7__.func_88(ENTITY::GET_ENTITY_MODEL(__LIB_2__.func_64()), 0)) && ENTITY::GET_ENTITY_MODEL(__LIB_2__.func_64()) != joaat("trailersmall2"))
			{
				return 14;
			}
		}
	}
	if (bVar0)
	{
		if (__LIB_1__.func_402(13))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_1__.func_401(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
				{
					return 9;
				}
			}
			return 2;
		}
		if (__LIB_6__.func_93(PLAYER::PLAYER_ID()) || __LIB_9__.func_351(PLAYER::PLAYER_ID()))
		{
			return 20;
		}
		if (__LIB_1__.func_400(PLAYER::PLAYER_ID()) || __LIB_1__.func_399(PLAYER::PLAYER_ID()))
		{
			return 21;
		}
		if (__LIB_1__.func_398(PLAYER::PLAYER_ID()) || __LIB_9__.func_344(PLAYER::PLAYER_ID()))
		{
			return 22;
		}
	}
	else if (bVar1)
	{
		if (__LIB_1__.func_397(13))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_9__.func_296(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
				{
					return 9;
				}
			}
			return 2;
		}
		if (__LIB_1__.func_396(PLAYER::PLAYER_ID()) || __LIB_9__.func_350(PLAYER::PLAYER_ID()))
		{
			return 19;
		}
		if (__LIB_1__.func_400(PLAYER::PLAYER_ID()) || __LIB_1__.func_399(PLAYER::PLAYER_ID()))
		{
			return 21;
		}
		if (__LIB_1__.func_398(PLAYER::PLAYER_ID()) || __LIB_9__.func_344(PLAYER::PLAYER_ID()))
		{
			return 22;
		}
	}
	else if (bVar2)
	{
		if (__LIB_1__.func_395(13))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_9__.func_295(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
				{
					return 9;
				}
			}
			return 2;
		}
		if (__LIB_1__.func_396(PLAYER::PLAYER_ID()) || __LIB_9__.func_350(PLAYER::PLAYER_ID()))
		{
			return 19;
		}
		if (__LIB_6__.func_93(PLAYER::PLAYER_ID()) || __LIB_9__.func_351(PLAYER::PLAYER_ID()))
		{
			return 20;
		}
		if (__LIB_1__.func_398(PLAYER::PLAYER_ID()) || __LIB_9__.func_344(PLAYER::PLAYER_ID()))
		{
			return 22;
		}
	}
	else if (bVar3)
	{
		if (__LIB_1__.func_394(13))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_9__.func_349(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
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
		if (__LIB_0__.func_121(__LIB_9__.func_230(PLAYER::PLAYER_ID())) && __LIB_9__.func_344(PLAYER::PLAYER_ID()))
		{
			return 14;
		}
		if (__LIB_1__.func_396(PLAYER::PLAYER_ID()) || __LIB_9__.func_350(PLAYER::PLAYER_ID()))
		{
			return 19;
		}
		if (__LIB_6__.func_93(PLAYER::PLAYER_ID()) || __LIB_9__.func_351(PLAYER::PLAYER_ID()))
		{
			return 20;
		}
		if (__LIB_1__.func_400(PLAYER::PLAYER_ID()) || __LIB_1__.func_399(PLAYER::PLAYER_ID()))
		{
			return 21;
		}
	}
	else if (bVar4)
	{
		if (__LIB_9__.func_345(13))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_9__.func_348(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
				{
					return 9;
				}
			}
			return 2;
		}
	}
	else
	{
		if (__LIB_1__.func_190(13))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_1__.func_104(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1))
				{
					return 9;
				}
			}
			if (!bParam7)
			{
				if (__LIB_2__.func_102(PLAYER::PLAYER_ID()))
				{
					return 98;
				}
				return 2;
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_9__.func_347(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1))
			{
				return 9;
			}
		}
	}
	if (bParam7)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(__LIB_2__.func_64()) && !ENTITY::IS_ENTITY_DEAD(__LIB_2__.func_64(), false)) && __LIB_1__.func_177(ENTITY::GET_ENTITY_MODEL(__LIB_2__.func_64())))
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
			if (!func_940(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1))
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
		if (__LIB_1__.func_402(14))
		{
			return 3;
		}
	}
	else if (bVar1)
	{
		if (__LIB_1__.func_397(14))
		{
			return 3;
		}
	}
	else if (bVar2)
	{
		if (__LIB_1__.func_395(14))
		{
			return 3;
		}
	}
	else if (bVar3)
	{
		if (__LIB_1__.func_394(14))
		{
			return 3;
		}
	}
	else if (bVar4)
	{
		if (__LIB_9__.func_345(14))
		{
			return 3;
		}
	}
	else if (!bParam7)
	{
		if (__LIB_1__.func_190(14))
		{
			return 3;
		}
	}
	Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (__LIB_1__.func_155(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 4;
	}
	if (bVar1)
	{
		if (__LIB_1__.func_339(PLAYER::PLAYER_ID()))
		{
			return 4;
		}
		if (__LIB_9__.func_649(PLAYER::PLAYER_ID()))
		{
			return 4;
		}
	}
	if (((((((!func_1263(Var6) && !bParam6) && !bParam7) && !bVar1) && !bVar3) && !bVar4) && !__LIB_1__.func_221()) && !__LIB_2__.func_102(PLAYER::PLAYER_ID()))
	{
		return 4;
	}
	if (__LIB_2__.func_102(PLAYER::PLAYER_ID()))
	{
		if (iParam0 >= 0)
		{
			if (!__LIB_1__.func_393(Global_1585857[iParam0 /*142*/].f_66) || !__LIB_9__.func_349(Global_1585857[iParam0 /*142*/].f_66, 21))
			{
				return 99;
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(__LIB_2__.func_64()) && !ENTITY::IS_ENTITY_DEAD(__LIB_2__.func_64(), false))
		{
			if (!__LIB_1__.func_393(ENTITY::GET_ENTITY_MODEL(__LIB_2__.func_64())) || !__LIB_9__.func_349(ENTITY::GET_ENTITY_MODEL(__LIB_2__.func_64()), 21))
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
	iVar1 = __LIB_4__.func_319();
	if (!iVar1 == -1)
	{
		if (__LIB_18__.func_324(PLAYER::PLAYER_ID(), iVar1, 500f))
		{
			Global_2667225.f_2911 = 1;
			return 1;
		}
	}
	if (__LIB_4__.func_850(Param0))
	{
		Global_2667225.f_2911 = 1;
		return 1;
	}
	iVar2 = 5;
	if (!__LIB_1__.func_153(Param0))
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
		if (__LIB_25__.func_218(74, 0, 0))
		{
			if (func_309(0))
			{
				if (func_279(0))
				{
					if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(0), false, true, false, -1, 0))
					{
						if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_BRU_BOX", PLAYER::PLAYER_ID(), true, 0) && Global_2815059.f_882 == 0)
						{
							iVar2 = __LIB_19__.func_1(0);
							if (iVar2 > 0)
							{
								func_92(20, iVar2);
							}
							else
							{
								MISC::SET_BIT(&(Local_122.f_359), 10);
								Local_122.f_360 = 0;
								Local_122.f_358 = __LIB_0__.func_160();
								__LIB_21__.func_897(__LIB_6__.func_900(1, 1), Local_122.f_360, __LIB_0__.func_160(), 0);
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
				if (!__LIB_7__.func_115(PLAYER::PLAYER_ID()))
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
				__LIB_9__.func_359();
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
				if (!__LIB_7__.func_115(PLAYER::PLAYER_ID()))
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
		if (func_309(9) && !__LIB_6__.func_945(PLAYER::PLAYER_ID()))
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
		if (__LIB_25__.func_218(81, 0, 0))
		{
			if (!__LIB_0__.func_674())
			{
				if (func_309(12))
				{
					if (func_279(12))
					{
						iVar2 = __LIB_19__.func_1(12);
						if (iVar2 > 0)
						{
							func_92(20, iVar2);
						}
						else
						{
							__LIB_6__.func_898(81, 1);
							if (((func_91(1) && func_279(12)) && func_309(12)) && !__LIB_7__.func_115(PLAYER::PLAYER_ID()))
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
		if ((func_309(13) && !__LIB_6__.func_945(PLAYER::PLAYER_ID())) && !__LIB_2__.func_4(PLAYER::PLAYER_ID()))
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
			if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(13), false, true, false, -1, 0))
			{
				iVar2 = func_1198(2);
				if (iVar2 == 0)
				{
					iVar3 = __LIB_19__.func_1(13);
					if (iVar3 > 0)
					{
						func_92(20, iVar3);
						func_1(Local_122.f_1, "CT_AUD", "MPCT_HPno", &Local_166, 0);
					}
					else
					{
						MISC::SET_BIT(&(Local_122.f_359), 10);
						Local_122.f_360 = 13;
						Local_122.f_358 = __LIB_0__.func_160();
						__LIB_21__.func_897(__LIB_6__.func_900(1, 1), Local_122.f_360, __LIB_0__.func_160(), 0);
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
				if (__LIB_0__.func_154(iVar1, 0, 1))
				{
					if (iVar1 != PLAYER::PLAYER_ID())
					{
						if (__LIB_17__.func_363(iVar1))
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
		if (__LIB_25__.func_218(63, 0, 0))
		{
			iVar2 = __LIB_19__.func_1(9);
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
					if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(9), false, true, false, -1, 0))
					{
						MISC::SET_BIT(&(Local_122.f_359), 10);
						Local_122.f_360 = 9;
						Local_122.f_358 = __LIB_0__.func_160();
						__LIB_21__.func_897(__LIB_6__.func_900(1, 1), Local_122.f_360, __LIB_0__.func_160(), 0);
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
		if (__LIB_18__.func_256())
		{
			return 4;
		}
		if (__LIB_1__.func_404())
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
	if (__LIB_7__.func_305(func_86(10)) && MONEY::NETWORK_CAN_SPEND_MONEY(func_86(10), false, true, false, -1, 0))
	{
		bVar1 = true;
	}
	if (Local_122.f_181.f_69 == 1)
	{
		if (__LIB_25__.func_218(62, 0, 0))
		{
			if (SCRIPT::DOES_SCRIPT_EXIST("AM_backup_heli"))
			{
				iVar0 = func_1198(1);
				if (iVar0 == 0)
				{
					if (bVar1)
					{
						iVar2 = __LIB_19__.func_1(10);
						if (iVar2 > 0)
						{
							func_92(20, iVar2);
							func_1(Local_122.f_1, "CT_AUD", "MPCT_HBno", &Local_166, 0);
						}
						else
						{
							MISC::SET_BIT(&(Local_122.f_359), 10);
							Local_122.f_360 = 10;
							Local_122.f_358 = __LIB_0__.func_160();
							__LIB_21__.func_897(__LIB_6__.func_900(1, 1), Local_122.f_360, __LIB_0__.func_160(), 0);
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

void func_1314()//Position - 0x550B0
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	if ((__LIB_7__.func_305(func_86(11)) && MONEY::NETWORK_CAN_SPEND_MONEY(func_86(11), false, true, false, -1, 0)) || BitTest(Local_122.f_359, 17))
	{
		bVar0 = true;
	}
	if (Local_122.f_181.f_69 == 5)
	{
		if (__LIB_25__.func_218(64, 0, 0))
		{
			if (SCRIPT::DOES_SCRIPT_EXIST("AM_airstrike"))
			{
				iVar2 = func_1198(4);
				if (((((!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_airstrike", -1, true, 0) && Global_2815059.f_4455 == 0) && !(__LIB_1__.func_390(PLAYER::PLAYER_ID(), 2) && !__LIB_1__.func_389())) && !__LIB_9__.func_360()) && !PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) && iVar2 == 0)
				{
					if (bVar0)
					{
						iVar3 = __LIB_19__.func_1(11);
						if (iVar3 > 0)
						{
							func_92(20, iVar3);
							func_1(Local_122.f_1, "CT_AUD", "MPCT_ASno", &Local_166, 0);
						}
						else
						{
							MISC::SET_BIT(&(Local_122.f_359), 10);
							Local_122.f_360 = 11;
							Local_122.f_358 = __LIB_0__.func_160();
							__LIB_21__.func_897(__LIB_6__.func_900(1, 1), Local_122.f_360, __LIB_0__.func_160(), 0);
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

void func_1319()//Position - 0x55350
{
	bool bVar0;
	var uVar1;
	struct<13> Var2;
	Var2 = { __LIB_0__.func_604(Local_122.f_358) };
	if (Local_122.f_181.f_69 == 1)
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
		func_32(4);
	}
	else if ((((Local_122.f_181.f_69 == 0 && Global_2815059.f_1856.f_1 == 0) && !__LIB_2__.func_280(Local_122.f_358)) && !func_165(&uVar1)) && !func_162(&Var2, &uVar1))
	{
		if (__LIB_0__.func_674())
		{
			func_1197(11, 0);
		}
		else if (__LIB_0__.func_154(Local_122.f_358, 0, 1))
		{
			if (__LIB_1__.func_387(1) >= __LIB_23__.func_667(Local_122.f_181.f_103[0]) || MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_23__.func_667(Local_122.f_181.f_103[0]), false, true, false, -1, 0))
			{
				MISC::SET_BIT(&(Local_122.f_359), 10);
				Local_122.f_360 = 1;
				__LIB_21__.func_897(__LIB_6__.func_900(1, 1), 1, Local_122.f_358, 0);
				if (!__LIB_0__.func_112())
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
	if (__LIB_0__.func_154(Local_122.f_181.f_136[Local_122.f_181.f_69], 0, 1))
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 4);
		Local_122.f_358 = Local_122.f_181.f_136[Local_122.f_181.f_69];
		switch (Local_122.f_179)
		{
			case 0:
				iLocal_124 = __LIB_2__.func_280(Local_122.f_358);
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
	iVar1 = func_86(2);
	if (func_91(0))
	{
		if (Local_122.f_358 != Global_2815059.f_5120)
		{
			if (__LIB_0__.func_154(Local_122.f_358, 0, 1))
			{
				if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar1, false, true, false, -1, 0))
				{
					iVar2 = __LIB_19__.func_1(2);
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
						__LIB_21__.func_897(__LIB_6__.func_900(1, 1), 2, Local_122.f_358, 0);
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
			if (__LIB_25__.func_218(67, 0, 0))
			{
				if (!__LIB_0__.func_674())
				{
					iVar1 = __LIB_19__.func_1(2);
					if (iVar1 > 0)
					{
						func_92(20, iVar1);
					}
					else if (func_91(0))
					{
						if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(2), false, true, false, -1, 0))
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
						__LIB_24__.func_129(0, 1);
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
		if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_86(2), false, true, false, -1, 0))
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
			if (__LIB_25__.func_218(29, 0, 0))
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
			if (__LIB_25__.func_218(65, 0, 0))
			{
				if (__LIB_25__.func_218(65, 0, 0))
				{
					__LIB_6__.func_898(65, 1);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						if (!__LIB_0__.func_659(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3, 0, 0) || __LIB_24__.func_961())
						{
							if (func_309(20))
							{
								if (func_279(20))
								{
									if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(20), false, true, false, -1, 0))
									{
										iVar2 = __LIB_19__.func_1(20);
										if (iVar2 > 0)
										{
											func_92(20, iVar2);
										}
										else
										{
											MISC::SET_BIT(&(Local_122.f_359), 10);
											Local_122.f_360 = 20;
											Local_122.f_358 = __LIB_0__.func_160();
											__LIB_21__.func_897(__LIB_6__.func_900(1, 1), Local_122.f_360, __LIB_0__.func_160(), 0);
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
			if (__LIB_25__.func_218(75, 0, 0))
			{
				__LIB_6__.func_898(75, 1);
				if (func_309(6))
				{
					if (func_279(6))
					{
						iVar3 = __LIB_19__.func_1(6);
						if (iVar3 > 0 || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_208)
						{
							func_1(Local_122.f_1, "CT_AUD", "MPCT_RDRno", &Local_166, 0);
							func_92(20, iVar3);
						}
						else if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(6), false, true, false, -1, 0))
						{
							MISC::SET_BIT(&(Local_122.f_359), 10);
							Local_122.f_360 = 6;
							Local_122.f_358 = __LIB_0__.func_160();
							__LIB_21__.func_897(__LIB_6__.func_900(1, 1), Local_122.f_360, __LIB_0__.func_160(), 0);
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
			if (__LIB_25__.func_218(95, 0, 0))
			{
				if (func_309(14))
				{
					if (func_279(14))
					{
						__LIB_6__.func_898(95, 1);
						if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(14), false, true, false, -1, 0))
						{
							if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 0 || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 1) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 5)
							{
								if (PLAYER::GET_NUMBER_OF_PLAYERS() > 0)
								{
									iVar4 = __LIB_19__.func_1(14);
									if (iVar4 > 0)
									{
										func_92(20, iVar4);
									}
									else
									{
										MISC::SET_BIT(&(Local_122.f_359), 10);
										Local_122.f_360 = 14;
										Local_122.f_358 = __LIB_0__.func_160();
										__LIB_21__.func_897(__LIB_6__.func_900(1, 1), Local_122.f_360, __LIB_0__.func_160(), 0);
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
			if (__LIB_25__.func_218(88, 0, 0))
			{
				if (func_309(15))
				{
					if (func_279(15))
					{
						iVar5 = __LIB_19__.func_1(15);
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
						else if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(15), false, true, false, -1, 0))
						{
							MISC::SET_BIT(&(Global_2815059.f_1777), 0);
							__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[15 /*2*/]), 1, 0);
							__LIB_41__.func_612(15, -1, -1);
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
			if (__LIB_25__.func_218(121, 0, 0))
			{
				if (!__LIB_2__.func_324())
				{
					if (!(__LIB_1__.func_155(PLAYER::PLAYER_ID(), 0, 0) && func_255()))
					{
						if (func_309(36))
						{
							if (func_279(36))
							{
								iVar6 = __LIB_19__.func_1(36);
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
									iVar7 = func_86(36);
									if (__LIB_1__.func_387(1) >= func_86(36) || MONEY::NETWORK_CAN_SPEND_MONEY(iVar7, false, true, false, -1, 0))
									{
										uVar8 = __LIB_15__.func_447(PLAYER::PLAYER_ID());
										iVar9 = __LIB_24__.func_107(12, uVar8, &uVar0, &iVar1);
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
			if (__LIB_25__.func_218(125, 0, 0))
			{
				if (__LIB_2__.func_324())
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
							else if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(37), false, true, false, -1, 0))
							{
								if (!BitTest(uLocal_175, 0))
								{
									MISC::SET_BIT(&uLocal_175, 0);
									__LIB_0__.func_580(&uLocal_176, 0, 0);
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
			if (__LIB_6__.func_143(PLAYER::PLAYER_ID()))
			{
				if (__LIB_8__.func_678(PLAYER::PLAYER_ID(), 0) == -1)
				{
					iVar11 = __LIB_19__.func_1(50);
					if (iVar11 > 0)
					{
						func_92(20, iVar11);
						func_1(Local_122.f_1, "CT_AUD", "MPCT_Jobcool", &Local_166, 0);
						func_32(4);
					}
					else
					{
						iVar12 = __LIB_28__.func_847(0);
						if (__LIB_1__.func_387(1) >= iVar12 || MONEY::NETWORK_CAN_SPEND_MONEY(iVar12, false, true, false, -1, 0))
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
			if (__LIB_6__.func_143(PLAYER::PLAYER_ID()))
			{
				if (__LIB_8__.func_678(PLAYER::PLAYER_ID(), 0) != -1)
				{
					iVar13 = 0;
					if (iVar13 > 0)
					{
						func_92(20, iVar13);
						func_1(Local_122.f_1, "CT_AUD", "MPCT_Jobcool", &Local_166, 0);
						func_32(4);
					}
					else if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(51), false, true, false, -1, 0))
					{
						if (!BitTest(iLocal_178, 0))
						{
							MISC::SET_BIT(&iLocal_178, 0);
							__LIB_0__.func_580(&uLocal_179, 0, 0);
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
			if ((__LIB_3__.func_684(PLAYER::PLAYER_ID(), 1) && __LIB_3__.func_684(PLAYER::PLAYER_ID(), 2)) && __LIB_3__.func_684(PLAYER::PLAYER_ID(), 3))
			{
				if (__LIB_2__.func_179(PLAYER::PLAYER_ID()) && !__LIB_2__.func_331(PLAYER::PLAYER_ID()))
				{
					if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(61), false, true, false, -1, 0))
					{
						if (!BitTest(uLocal_187, 0))
						{
							MISC::SET_BIT(&uLocal_187, 0);
							__LIB_0__.func_580(&uLocal_188, 0, 0);
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
			if (__LIB_25__.func_218(104, 0, 0))
			{
				if (func_309(23))
				{
					if (func_279(23))
					{
						if (!func_1325())
						{
							__LIB_6__.func_898(104, 1);
							if (!BitTest(Global_2703735.f_3673, 10))
							{
								if (!BitTest(Global_2703735.f_3673, 0))
								{
									if (!BitTest(Local_122.f_359, 18))
									{
										if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(23), false, true, false, -1, 0))
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
			if (__LIB_25__.func_218(98, 0, 0))
			{
				if (func_309(24))
				{
					if (func_279(24))
					{
						if (!func_1325())
						{
							__LIB_6__.func_898(98, 1);
							if (!BitTest(Global_2703735.f_3673, 10))
							{
								if (!BitTest(Global_2703735.f_3673, 0))
								{
									if (!BitTest(Local_122.f_359, 18))
									{
										if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(24), false, true, false, -1, 0))
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
			if (__LIB_25__.func_218(103, 0, 0))
			{
				if (func_309(25))
				{
					if (func_279(25))
					{
						if (!func_1325())
						{
							__LIB_6__.func_898(103, 1);
							if (!BitTest(Global_2703735.f_3673, 10))
							{
								if (!BitTest(Global_2703735.f_3673, 0))
								{
									if (!BitTest(Local_122.f_359, 18))
									{
										if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(25), false, true, false, -1, 0))
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
			if (__LIB_25__.func_218(105, 0, 0))
			{
				if (func_309(26))
				{
					if (func_279(26))
					{
						if (!func_1325())
						{
							__LIB_6__.func_898(105, 1);
							if (!BitTest(Global_2703735.f_3673, 10))
							{
								if (!BitTest(Global_2703735.f_3673, 0))
								{
									if (!BitTest(Local_122.f_359, 18))
									{
										if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(26), false, true, false, -1, 0))
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
			if (__LIB_25__.func_218(98, 0, 0))
			{
				if (func_309(57))
				{
					if (func_279(57))
					{
						if (!func_1325())
						{
							__LIB_6__.func_898(98, 1);
							if (!BitTest(Global_2703735.f_3673, 10))
							{
								if (!BitTest(Global_2703735.f_3673, 0))
								{
									if (!BitTest(Local_122.f_359, 18))
									{
										if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(57), false, true, false, -1, 0))
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
			if (__LIB_25__.func_218(119, 0, 0))
			{
				if (!__LIB_9__.func_30())
				{
					if (!__LIB_6__.func_959())
					{
						if (func_309(35))
						{
							if (func_279(35))
							{
								iVar14 = __LIB_19__.func_1(35);
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
	iVar0 = __LIB_19__.func_1(25);
	if (iVar0 > 0 && (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(__LIB_18__.func_502(46), -1, false, 0) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 194))
	{
		func_92(20, iVar0);
		return 1;
	}
	return 0;
}

int func_1330()//Position - 0x568F8
{
	if (func_1331() && !__LIB_7__.func_305(Local_122.f_181.f_69))
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
	iVar0 = __LIB_11__.func_333(iVar0, 0, Local_122.f_181.f_2);
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
	if ((!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iParam0) && !(__LIB_0__.func_77(0) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iParam0))) || __LIB_2__.func_47(&uLocal_149, 250, 1))
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
	if (__LIB_0__.func_649(&(Global_2715699.f_4316.f_78[iParam0 /*2*/])))
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
			if (Global_2715699.f_4316.f_466 == __LIB_0__.func_160() || Global_2715699.f_4316.f_466 != NETWORK::NETWORK_GET_HOST_OF_SCRIPT(__LIB_1__.func_388(), -1, 0))
			{
				__LIB_21__.func_897(__LIB_6__.func_900(1, 1), Local_122.f_360, Local_122.f_358, 0);
				__LIB_0__.func_495(&(Global_2715699.f_4316.f_78[iParam0 /*2*/]), 1, 0);
			}
			if (__LIB_2__.func_47(&(Global_2715699.f_4316.f_78[iParam0 /*2*/]), 8000, 1))
			{
				if (!BitTest(Local_122.f_359, 12))
				{
					__LIB_21__.func_897(__LIB_6__.func_900(1, 1), Local_122.f_360, Local_122.f_358, 0);
					__LIB_0__.func_495(&(Global_2715699.f_4316.f_78[iParam0 /*2*/]), 1, 0);
					MISC::SET_BIT(&(Local_122.f_359), 12);
				}
				else
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 12);
					MISC::CLEAR_BIT(&(Local_122.f_359), 10);
					func_92(1, 0);
					Global_2715699.f_4316[iParam0] = 0;
					func_1352(__LIB_6__.func_900(1, 1), Local_122.f_360, Local_122.f_358, 0);
				}
			}
		}
	}
	else
	{
		__LIB_0__.func_580(&(Global_2715699.f_4316.f_78[iParam0 /*2*/]), 1, 0);
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
	__LIB_0__.func_495(&(Global_2715699.f_4316.f_469[iParam1 /*4*/].f_1), 1, 0);
	if (!iParam0 == 0)
	{
		if (iParam3 == 0)
		{
			__LIB_0__.func_579(&(Global_2715699.f_4316.f_78[iParam1 /*2*/]));
		}
		else
		{
			__LIB_0__.func_579(&(Global_2815059.f_4534.f_2));
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
	if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(74), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
	{
		if (BitTest(iParam0, 2))
		{
			iVar1 = func_892(joaat("SERVICE_SPEND_REQUEST_OUT_OF_SIGHT"), func_86(74), 1, -149294787);
			if (iVar1 == 1)
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 17);
				Var2.f_2 = -1619652234;
				__LIB_1__.func_226(Var2, __LIB_6__.func_900(1, 1));
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
		func_1352(__LIB_6__.func_900(1, 1), Local_122.f_360, __LIB_0__.func_160(), 0);
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
	if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(73), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
	{
		if (BitTest(iParam0, 2))
		{
			iVar1 = func_892(joaat("SERVICE_SPEND_REQUEST_SOURCE_MOTORCYCLE"), func_86(73), 1, -149294787);
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
				__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
				__LIB_41__.func_612(Local_122.f_360, -1, -1);
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
		func_1352(__LIB_6__.func_900(1, 1), Local_122.f_360, __LIB_0__.func_160(), 0);
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
	if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(72), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
	{
		if (BitTest(iParam0, 2))
		{
			iVar1 = func_892(joaat("SERVICE_SPEND_REQUEST_SUPPLY"), func_86(72), 1, -333798998);
			if (iVar1 == 1)
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 17);
				__LIB_24__.func_13(PLAYER::PLAYER_ID(), 1);
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 25)
				{
					func_1(Local_122.f_1, "FXFRAUD", "FXFR_PM_8", &Local_166, 0);
				}
				else
				{
					func_1(Local_122.f_1, "FXFRAUD", "FXFR_PM_7", &Local_166, 0);
				}
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
				__LIB_41__.func_612(Local_122.f_360, -1, -1);
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
		func_1352(__LIB_6__.func_900(1, 1), Local_122.f_360, __LIB_0__.func_160(), 0);
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
	if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(44), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
	{
		if (func_619(1, 1, 0, 1, 0))
		{
			if (BitTest(iParam0, 2) && (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(44), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17)))
			{
				iVar2 = joaat("supervolito");
				iVar3 = func_892(joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"), func_86(44), 1, iVar2);
				if (iVar3 == 1)
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 17);
					Global_2815059.f_876 = 1;
					MISC::CLEAR_BIT(&(Local_122.f_359), 4);
					__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
					__LIB_41__.func_612(Local_122.f_360, -1, -1);
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
			func_1352(__LIB_6__.func_900(1, 1), Local_122.f_360, Local_122.f_358, 0);
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
	if (func_619(1, 1, 0, 0, 0))
	{
		if (BitTest(iParam0, 2) && (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(43), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17)))
		{
			iVar0 = func_892(joaat("SERVICE_SPEND_PA_SERVICE_IMPOUND"), func_86(43), 1, 0);
			if (iVar0 == 1)
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 17);
				Global_2815059.f_911 = 1;
				func_1359(__LIB_1__.func_165());
				__LIB_1__.func_245(29);
				__LIB_1__.func_245(30);
				func_847(__LIB_1__.func_165(), &(Global_1585857[__LIB_1__.func_165() /*142*/]), 1, -1, 0, 0);
				__LIB_6__.func_881(-205702236, 3, 0);
				Global_2815059.f_961 = 1;
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
				__LIB_41__.func_612(Local_122.f_360, -1, -1);
				func_32(4);
				if (func_170())
				{
					func_1(Local_122.f_1, "EXCALAU", "EXCAL_IMPOSM", &Local_166, 0);
				}
				else
				{
					func_1(Local_122.f_1, "EXCALAU", "EXCAL_IMPOSF", &Local_166, 0);
				}
				Global_2815059.f_958 = __LIB_1__.func_165();
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
		func_1352(__LIB_6__.func_900(1, 1), Local_122.f_360, Local_122.f_358, 0);
	}
	else
	{
		func_92(1, 0);
	}
}

void func_1359(int iParam0)//Position - 0x58484
{
	__LIB_1__.func_939();
	if (__LIB_2__.func_341(iParam0))
	{
		MISC::CLEAR_BIT(&(Global_1585857[iParam0 /*142*/].f_103), 6);
		Global_1585857[iParam0 /*142*/].f_104 = 0;
		__LIB_7__.func_92();
	}
}

void func_1361(int iParam0, int iParam1)//Position - 0x584D7
{
	if (__LIB_0__.func_154(PLAYER::PLAYER_ID(), 0, 1))
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
		func_1352(__LIB_6__.func_900(1, 1), iParam1, PLAYER::PLAYER_ID(), 0);
	}
}

void func_1362(int iParam0, bool bParam1, int iParam2)//Position - 0x5851C
{
	struct<2> Var0;
	int iVar1;
	if (Global_2815059.f_4546.f_18 < 1)
	{
		iVar1 = Global_2815059.f_4546.f_18;
		__LIB_0__.func_495(&(Global_2815059.f_4546[iVar1 /*2*/]), 1, 0);
		__LIB_0__.func_579(&(Global_2815059.f_4546.f_3[iVar1 /*2*/]));
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
			__LIB_4__.func_936("MP_STRIP_IN4" /* GXT: ~a~ will arrive at your Apartment shortly. */, &Var0, -1);
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
	iVar1 = func_86(20);
	if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar1, false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
	{
		if (BitTest(iParam0, 2) && (MONEY::NETWORK_CAN_SPEND_MONEY(iVar1, false, true, false, -1, 0) || BitTest(Local_122.f_359, 17)))
		{
			iVar2 = func_892(joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"), iVar1, 1, 0);
			if (iVar2 == 1)
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 17);
				if (__LIB_30__.func_612(PLAYER::PLAYER_ID(), 1))
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
				__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
				__LIB_41__.func_612(Local_122.f_360, -1, -1);
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
		func_1352(__LIB_6__.func_900(1, 1), 20, Local_122.f_358, 0);
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
		if (__LIB_0__.func_154(iVar1, 1, 1))
		{
			if (__LIB_0__.func_278(iVar1) && __LIB_1__.func_236(iVar1) == __LIB_6__.func_947(Global_1640740, 1, 0))
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
	if (__LIB_0__.func_278(PLAYER::PLAYER_ID()))
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
	Var0.f_2 = __LIB_1__.func_560(iParam0);
	iVar1 = __LIB_0__.func_679(iParam0);
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
	iVar1 = func_86(14);
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
				__LIB_1__.func_226(Var3, __LIB_6__.func_900(1, 1));
				Global_2703735.f_57 = NETWORK::GET_NETWORK_TIME();
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_211 = 1;
				func_1(Local_122.f_1, "CT_AUD", "MPCT_RVL", &Local_166, 0);
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
				__LIB_41__.func_612(Local_122.f_360, -1, -1);
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
		func_1352(__LIB_6__.func_900(1, 1), 14, Local_122.f_358, 0);
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
	if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(13), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
	{
		if (func_619(1, 1, 0, 1, 0))
		{
			if (BitTest(iParam0, 2) && (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(13), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17)))
			{
				iVar2 = func_892(joaat("SERVICE_SPEND_HELI_PICKUP"), func_86(13), 1, 0);
				if (iVar2 == 1)
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 17);
					Global_2815059.f_876 = 1;
					Global_2815059.f_883 = -1;
					MISC::CLEAR_BIT(&(Local_122.f_359), 4);
					__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
					__LIB_41__.func_612(Local_122.f_360, -1, -1);
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
			func_1352(__LIB_6__.func_900(1, 1), Local_122.f_360, Local_122.f_358, 0);
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
	if ((__LIB_7__.func_305(func_86(11)) && MONEY::NETWORK_CAN_SPEND_MONEY(func_86(11), false, true, false, -1, 0)) || BitTest(Local_122.f_359, 17))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_619(1, 1, 0, 1, 0))
		{
			if (BitTest(iParam0, 2))
			{
				iVar1 = func_892(joaat("SERVICE_SPEND_AIRSTRIKE"), func_86(11), 1, 0);
				if (iVar1 == 1)
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 17);
					__LIB_0__.func_521(8, 1, -1);
					Global_2815059.f_4455 = 1;
					MISC::CLEAR_BIT(&(Local_122.f_359), 4);
					__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
					__LIB_41__.func_612(Local_122.f_360, -1, -1);
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
		func_1352(__LIB_6__.func_900(1, 1), Local_122.f_360, Local_122.f_358, 0);
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
	if ((__LIB_7__.func_305(func_86(10)) && MONEY::NETWORK_CAN_SPEND_MONEY(func_86(10), false, true, false, -1, 0)) || BitTest(Local_122.f_359, 17))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_619(1, 3, 0, 1, 0) && !func_1392())
		{
			if (BitTest(iParam0, 2))
			{
				iVar1 = func_892(joaat("SERVICE_SPEND_BACKUP_HELI"), func_86(10), 1, 0);
				if (iVar1 == 1)
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 17);
					__LIB_0__.func_521(11, 1, -1);
					Global_2815059.f_4454 = 1;
					MISC::CLEAR_BIT(&(Local_122.f_359), 4);
					__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
					__LIB_41__.func_612(Local_122.f_360, -1, -1);
					func_1(Local_122.f_1, "CT_AUD", "MPCT_HB", &Local_166, 0);
					func_32(4);
					__LIB_35__.func_525(48, 1);
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
			func_1352(__LIB_6__.func_900(1, 1), Local_122.f_360, Local_122.f_358, 0);
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
	if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(9), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
	{
		if (func_619(1, 1, 0, 0, 0))
		{
			if (BitTest(iParam0, 2) && (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(9), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17)))
			{
				iVar1 = func_892(joaat("SERVICE_SPEND_BOAT_PICKUP"), func_86(9), 1, 0);
				if (iVar1 == 1)
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 17);
					Global_2815059.f_875 = 1;
					MISC::CLEAR_BIT(&(Local_122.f_359), 4);
					__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
					__LIB_41__.func_612(Local_122.f_360, -1, -1);
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
			func_1352(__LIB_6__.func_900(1, 1), Local_122.f_360, Local_122.f_358, 0);
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
	if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(8), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
	{
		if (func_619(1, 1, 2, 1, 0))
		{
			if (BitTest(iParam0, 2) && (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(8), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17)))
			{
				iVar1 = func_892(joaat("SERVICE_SPEND_AMMO_DROP"), func_86(8), 1, 0);
				if (iVar1 == 1)
				{
					MISC::CLEAR_BIT(&(Local_122.f_359), 17);
					Global_2815059.f_874 = 1;
					MISC::CLEAR_BIT(&(Local_122.f_359), 4);
					__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
					__LIB_41__.func_612(Local_122.f_360, -1, -1);
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
				__LIB_9__.func_281(Local_122.f_1);
			}
			iParam0 = 0;
			func_1352(__LIB_6__.func_900(1, 1), Local_122.f_360, Local_122.f_358, 0);
		}
		else
		{
			func_92(23, 0);
			__LIB_9__.func_281(Local_122.f_1);
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
		if (func_619(1, 1, 0, 0, 0))
		{
			if (BitTest(iParam0, 2))
			{
				if (__LIB_2__.func_102(PLAYER::PLAYER_ID()))
				{
					if (__LIB_25__.func_748())
					{
						__LIB_1__.func_409(0);
					}
					else
					{
						__LIB_5__.func_76(0);
					}
				}
				Global_2815059.f_911 = 1;
				Global_2815059.f_961 = 0;
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
				__LIB_41__.func_612(Local_122.f_360, -1, -1);
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
			func_1352(__LIB_6__.func_900(1, 1), Local_122.f_360, Local_122.f_358, 0);
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
			__LIB_1__.func_342("BB_PVUNA1" /* GXT: You have no Personal Vehicle in this space. */, 100, 0);
			func_92(14, 0);
		}
		else if (iVar1 == 2)
		{
			__LIB_1__.func_342("BB_PVUNA2" /* GXT: You are too close to your current Personal Vehicle. */, 100, 0);
			func_92(13, 0);
		}
		else if (iVar1 == 3)
		{
			__LIB_1__.func_342("BB_PVUNA3" /* GXT: Your Personal Vehicle is not empty. */, 100, 0);
			func_92(15, 0);
		}
		else if (iVar1 == 4)
		{
			__LIB_1__.func_342("BB_PVUNA4" /* GXT: You are too far from a suitable road. */, 100, 0);
			func_92(16, 0);
		}
		else if (iVar1 == 5)
		{
			__LIB_1__.func_342("BB_PVUNA5" /* GXT: Unlocks when you have a Garage. */, 100, 0);
			func_92(17, 0);
		}
		else if (iVar1 == 6)
		{
			__LIB_1__.func_342("BB_PVUNA6" /* GXT: Unavailable. */, 100, 0);
			func_92(18, 0);
		}
		else if (iVar1 == 7)
		{
			__LIB_1__.func_342("BB_PVUNA7" /* GXT: A delivery is in progress. */, 100, 0);
			func_92(21, 0);
		}
		else if (iVar1 == 8)
		{
			__LIB_1__.func_342("BB_PVUNA8" /* GXT: Your Personal Vehicle is impounded. */, 100, 0);
			func_92(22, 0);
		}
		else if (iVar1 == 9)
		{
			__LIB_1__.func_342("BB_PVUNA9" /* GXT: You are already using your Personal Vehicle. */, 100, 0);
			func_1197(2, 0);
		}
		else if (iVar1 == 11)
		{
			__LIB_1__.func_342("BB_PVUNA11" /* GXT: You are too close to your Garage. */, 100, 0);
			func_1197(13, 0);
		}
		else if (iVar1 == 12)
		{
			__LIB_1__.func_342("BB_PVUNA12" /* GXT: Your Personal Vehicle is destroyed. You can call Mors Mutual Insurance to make a claim. */, 100, 0);
			func_1197(16, 0);
		}
		else if (iVar1 == 13)
		{
			__LIB_1__.func_342("BB_PVUNA13" /* GXT: Your Personal Vehicle is destroyed. To protect your vehicles in the future you can purchase Car Insurance. */, 100, 0);
			func_1197(18, 0);
		}
		else if (iVar1 == 14)
		{
			__LIB_1__.func_342("PIM_HRPV14" /* GXT: You already have an active Special/Personal Vehicle. */, 100, 0);
			func_1197(23, 0);
		}
		else if (iVar1 == 98)
		{
			__LIB_1__.func_342("BB_PVUNA98" /* GXT: Your Personal Vehicle is already in the LS Car Meet. Return it to Storage via the Vehicles section of the Interaction Menu if you wish to request another vehicle. */, 100, 0);
			func_1197(24, 0);
		}
		else if (iVar1 == 99)
		{
			__LIB_1__.func_342("PIM_HRPV99" /* GXT: This vehicle is not allowed inside the LS Car Meet. */, 100, 0);
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
	iVar1 = func_86(6);
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
				Var3.f_4 = __LIB_23__.func_638();
				__LIB_1__.func_226(Var3, __LIB_6__.func_900(1, 1));
				Global_2703735.f_56 = NETWORK::GET_NETWORK_TIME();
				MISC::SET_BIT(&(Global_2815059.f_4630), 1);
				MISC::CLEAR_BIT(&(Global_2815059.f_4630), 0);
				MISC::CLEAR_BIT(&(Global_2815059.f_4630), 2);
				MISC::CLEAR_BIT(&(Global_2815059.f_4630), 3);
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_208 = 1;
				if (!__LIB_1__.func_563(97, -1))
				{
					__LIB_9__.func_267(97, 1, -1, 1);
				}
				func_1(Local_122.f_1, "CT_AUD", "MPCT_RDR", &Local_166, 0);
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
				__LIB_41__.func_612(Local_122.f_360, -1, -1);
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
		func_1352(__LIB_6__.func_900(1, 1), 6, Local_122.f_358, 0);
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
	if (__LIB_0__.func_154(Local_122.f_358, 0, 1))
	{
		if (__LIB_7__.func_120(PLAYER::PLAYER_ID()) >= iVar1)
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
				__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
				__LIB_41__.func_612(Local_122.f_360, -1, -1);
				func_32(4);
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 10);
				func_92(1, 0);
			}
			iParam0 = 0;
			func_1352(__LIB_6__.func_900(1, 1), 5, Local_122.f_358, 0);
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
	if (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(0), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17))
	{
		if (BitTest(iParam0, 2) && (MONEY::NETWORK_CAN_SPEND_MONEY(func_86(0), false, true, false, -1, 0) || BitTest(Local_122.f_359, 17)))
		{
			iVar1 = func_892(joaat("SERVICE_SPEND_BULL_SHARK"), func_86(0), 1, 0);
			if (iVar1 == 1)
			{
				MISC::CLEAR_BIT(&(Local_122.f_359), 17);
				__LIB_6__.func_898(74, 1);
				Global_2815059.f_882 = 1;
				MISC::CLEAR_BIT(&(Local_122.f_359), 4);
				func_32(4);
				__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
				__LIB_41__.func_612(Local_122.f_360, -1, -1);
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
		func_1352(__LIB_6__.func_900(1, 1), Local_122.f_360, __LIB_0__.func_160(), 0);
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
	iVar1 = func_86(2);
	iVar2 = PLAYER::PLAYER_ID();
	if (__LIB_0__.func_154(Local_122.f_358, 0, 1))
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
					__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
					__LIB_41__.func_612(Local_122.f_360, -1, -1);
					func_1407(__LIB_0__.func_679(Local_122.f_358), Local_122.f_360);
					__LIB_2__.func_8(34);
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
				func_1352(__LIB_6__.func_900(1, 1), 4, Local_122.f_358, 0);
			}
			else if (Local_122.f_181.f_103[1] == 2)
			{
				func_1352(__LIB_6__.func_900(1, 1), 3, Local_122.f_358, 0);
			}
			else
			{
				func_1352(__LIB_6__.func_900(1, 1), 2, Local_122.f_358, 0);
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
		func_1352(__LIB_6__.func_900(1, 1), iParam1, Local_122.f_358, 0);
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
	iVar1 = func_86(12);
	iVar2 = PLAYER::PLAYER_ID();
	if (__LIB_0__.func_154(Local_122.f_358, 0, 1))
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
					__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
					__LIB_41__.func_612(Local_122.f_360, -1, -1);
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
			func_1352(__LIB_6__.func_900(1, 1), 12, Local_122.f_358, 0);
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
		func_1352(__LIB_6__.func_900(1, 1), 12, Local_122.f_358, 0);
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
	if (__LIB_0__.func_154(Local_122.f_358, 0, 1))
	{
		if (MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_23__.func_667(Local_122.f_181.f_103[0]), false, true, false, -1, 0) && (BitTest(iLocal_200, 0) || MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_23__.func_667(Local_122.f_181.f_103[0]), false, true, false, -1, 0)))
		{
			if (BitTest(iParam0, 2))
			{
				if (__LIB_0__.func_112())
				{
					if (!BitTest(iLocal_200, 0))
					{
						func_100(&iLocal_199, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), joaat("SERVICE_SPEND_BOUNTY"), __LIB_23__.func_667(Local_122.f_181.f_103[0]), 4, 3);
						MISC::SET_BIT(&iLocal_200, 0);
					}
				}
				if (!BitTest(iLocal_200, 0))
				{
					__LIB_1__.func_611(-__LIB_23__.func_667(Local_122.f_181.f_103[0]), 1, 1, 0f);
					__LIB_0__.func_521(10, 1, -1);
					MONEY::NETWORK_BUY_BOUNTY(__LIB_23__.func_667(Local_122.f_181.f_103[0]), Local_122.f_358, false, true, joaat("char_lester"));
					func_1411(__LIB_6__.func_900(1, 1), Local_122.f_358, (__LIB_23__.func_667(Local_122.f_181.f_103[0]) - Global_262145.f_7104 /* Tunable: LESTER_BOUNTY_CUT */), 0, 1);
					__LIB_6__.func_898(29, 1);
					MISC::SET_BIT(&(Global_2815059.f_1856.f_1), Local_122.f_358);
					Global_2815059.f_1856.f_19[Local_122.f_358] = (__LIB_23__.func_667(Local_122.f_181.f_103[0]) - Global_262145.f_7104 /* Tunable: LESTER_BOUNTY_CUT */);
					MISC::CLEAR_BIT(&(Local_122.f_359), 4);
					MISC::SET_BIT(&(Local_122.f_359), 8);
					Var1 = { __LIB_0__.func_604(Local_122.f_358) };
					func_1410(&Var1);
					Local_122.f_181.f_103[0] = (Local_122.f_181.f_103[0] - 1);
					if (Local_122.f_181.f_103[0] < Local_122.f_181.f_3[0])
					{
						Local_122.f_181.f_103[0] = Local_122.f_181.f_3[0];
					}
					__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
					__LIB_41__.func_612(Local_122.f_360, -1, -1);
					func_32(4);
					iParam0 = 0;
					func_1352(__LIB_6__.func_900(1, 1), 1, Local_122.f_358, 0);
				}
				else if (BitTest(iLocal_200, 0))
				{
					if (__LIB_2__.func_48(iLocal_199))
					{
						if (__LIB_2__.func_46(iLocal_199) == 2)
						{
							if (__LIB_0__.func_112())
							{
								NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__.func_375(iLocal_199));
							}
							__LIB_0__.func_521(10, 1, -1);
							MONEY::NETWORK_BUY_BOUNTY(__LIB_23__.func_667(Local_122.f_181.f_103[0]), Local_122.f_358, false, true, joaat("char_lester"));
							func_1411(__LIB_6__.func_900(1, 1), Local_122.f_358, (__LIB_23__.func_667(Local_122.f_181.f_103[0]) - Global_262145.f_7104 /* Tunable: LESTER_BOUNTY_CUT */), 0, 1);
							__LIB_6__.func_898(29, 1);
							MISC::SET_BIT(&(Global_2815059.f_1856.f_1), Local_122.f_358);
							Global_2815059.f_1856.f_19[Local_122.f_358] = (__LIB_23__.func_667(Local_122.f_181.f_103[0]) - Global_262145.f_7104 /* Tunable: LESTER_BOUNTY_CUT */);
							MISC::CLEAR_BIT(&(Local_122.f_359), 4);
							MISC::SET_BIT(&(Local_122.f_359), 8);
							Var1 = { __LIB_0__.func_604(Local_122.f_358) };
							func_1410(&Var1);
							Local_122.f_181.f_103[0] = (Local_122.f_181.f_103[0] - 1);
							if (Local_122.f_181.f_103[0] < Local_122.f_181.f_3[0])
							{
								Local_122.f_181.f_103[0] = Local_122.f_181.f_3[0];
							}
							__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[Local_122.f_360 /*2*/]), 1, 0);
							__LIB_41__.func_612(Local_122.f_360, -1, -1);
							func_32(4);
							iParam0 = 0;
							func_1352(__LIB_6__.func_900(1, 1), 1, Local_122.f_358, 0);
							iLocal_200 = 0;
							__LIB_18__.func_226(iLocal_199);
							if (__LIB_0__.func_112())
							{
								func_1(Local_122.f_1, "CT_AUD", "MPCT_BNTcon", &Local_166, 0);
							}
						}
						else
						{
							bVar2 = true;
							iLocal_200 = 0;
							__LIB_18__.func_226(iLocal_199);
							__LIB_0__.func_683(__LIB_6__.func_900(1, 1), 1, Local_122.f_358);
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
			func_1352(__LIB_6__.func_900(1, 1), 1, Local_122.f_358, 0);
			bVar0 = true;
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_122.f_359), 10);
		func_92(1, 0);
		iParam0 = 0;
		func_1352(__LIB_6__.func_900(1, 1), 1, Local_122.f_358, 0);
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
			__LIB_18__.func_226(iLocal_199);
		}
		iLocal_200 = 0;
		func_1352(__LIB_6__.func_900(1, 1), 1, Local_122.f_358, 0);
	}
}

int func_1410(var* uParam0)//Position - 0x5A74F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (__LIB_0__.func_585(Global_2359296[__LIB_0__.func_153() /*5567*/].f_5149.f_15[iVar0 /*13*/]))
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, &(Global_2359296[__LIB_0__.func_153() /*5567*/].f_5149.f_15[iVar0 /*13*/])))
			{
				Global_2359296[__LIB_0__.func_153() /*5567*/].f_5149.f_15[iVar0 /*13*/] = { *uParam0 };
				Global_2359296[__LIB_0__.func_153() /*5567*/].f_5149.f_224[iVar0] = NETWORK::GET_CLOUD_TIME_AS_INT();
				return 1;
			}
		}
		else
		{
			Global_2359296[__LIB_0__.func_153() /*5567*/].f_5149.f_15[iVar0 /*13*/] = { *uParam0 };
			Global_2359296[__LIB_0__.func_153() /*5567*/].f_5149.f_224[iVar0] = NETWORK::GET_CLOUD_TIME_AS_INT();
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
	__LIB_1__.func_277(&(Var0.f_20), &(Var0.f_21));
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
	if (!__LIB_0__.func_649(uParam3))
	{
		__LIB_0__.func_580(uParam3, 1, 0);
	}
	else if (*uParam2)
	{
		__LIB_0__.func_579(uParam3);
		*uParam2 = 0;
	}
	else if (__LIB_2__.func_47(uParam3, iParam4, 1))
	{
		if (!__LIB_0__.func_75())
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
		__LIB_0__.func_579(uParam3);
	}
}

int func_1422()//Position - 0x5ACC4
{
	if (__LIB_0__.func_706())
	{
		return 0;
	}
	if (BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_14, 0))
	{
		return 0;
	}
	if (!__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (Global_2715699.f_4316.f_779)
	{
		return 0;
	}
	if (__LIB_0__.func_497())
	{
		return 0;
	}
	if (__LIB_0__.func_517(Global_112411, 256))
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
	if (__LIB_1__.func_352(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_8__.func_872())
	{
		return 0;
	}
	if (__LIB_26__.func_966())
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
		__LIB_0__.func_203(&(Local_122.f_1), Local_122.f_180, 0, &(Local_122.f_166), 0, 1);
		MISC::SET_BIT(&(Local_122.f_359), 0);
	}
	else if (!BitTest(Local_122.f_359, 1))
	{
		if (__LIB_0__.func_571(Local_122.f_0))
		{
			if (__LIB_7__.func_161(0, -1, 0))
			{
				bVar0 = false;
				if (Local_122.f_0 == 82 && func_1436(&(Local_122.f_1), Local_122.f_0, &(Local_122.f_170), &(Local_122.f_174), 12, 1, 0, 0, 0))
				{
					bVar0 = true;
				}
				if (!bVar0)
				{
					if (Local_122.f_0 == 79 && func_1436(&(Local_122.f_1), Local_122.f_0, &(Local_122.f_170), &(Local_122.f_174), 12, 1, 0, 0, 0))
					{
						bVar0 = true;
					}
				}
				if (!bVar0)
				{
					if ((Local_122.f_0 == 75 || Local_122.f_0 == 74) && func_1436(&(Local_122.f_1), Local_122.f_0, &(Local_122.f_170), &(Local_122.f_174), 12, 1, 0, 0, 0))
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
					__LIB_16__.func_770(1);
					MISC::SET_BIT(&(Local_122.f_359), 1);
				}
			}
		}
		else
		{
			func_32(4);
		}
	}
	else if (__LIB_0__.func_77(0) && !BitTest(Local_122.f_359, 2))
	{
		if (!BitTest(Local_122.f_359, 2))
		{
			if (__LIB_1__.func_413(Local_122.f_0))
			{
				if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				{
					if (Global_21605 >= 4)
					{
						MISC::SET_BIT(&(Local_122.f_359), 2);
					}
				}
			}
			else if (!__LIB_0__.func_571(Local_122.f_0) && __LIB_1__.func_412())
			{
				if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				{
				}
				if (__LIB_1__.func_412())
				{
				}
				if (__LIB_4__.func_616())
				{
				}
				if (__LIB_10__.func_863())
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
			__LIB_2__.func_185();
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
	__LIB_0__.func_391(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
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
	return __LIB_31__.func_878(sParam3, iParam4, bParam8);
}

int func_1436(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x5B0F3
{
	__LIB_0__.func_391(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
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
	Global_2883585 = 0;
	return __LIB_31__.func_878(sParam3, iParam4, bParam8);
}

int func_1438()//Position - 0x5B1B6
{
	if (__LIB_0__.func_190())
	{
		return 0;
	}
	if (__LIB_1__.func_414())
	{
		return 0;
	}
	if (BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_14, 0))
	{
		return 0;
	}
	if (!__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (!__LIB_0__.func_77(0))
	{
		return 0;
	}
	return 1;
}

void func_1444()//Position - 0x5B28F
{
	if (__LIB_0__.func_649(&(Global_2715699.f_4316.f_78[Local_122.f_360 /*2*/])))
	{
		Global_2715699.f_4316[Local_122.f_360] = 0;
		func_1352(__LIB_6__.func_900(1, 1), Local_122.f_360, Local_122.f_358, 0);
		__LIB_0__.func_683(__LIB_6__.func_900(1, 1), Local_122.f_360, Local_122.f_358);
	}
	__LIB_7__.func_49(1, -1);
	__LIB_1__.func_416(0);
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
		__LIB_18__.func_226(iLocal_199);
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
			__LIB_1__.func_415(1);
		}
		MISC::SET_BIT(&(Local_122.f_359), 19);
	}
	else
	{
		if (Global_1835497)
		{
			__LIB_1__.func_415(0);
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
			if (__LIB_0__.func_693(PLAYER::PLAYER_ID()) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 256)
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
			if (__LIB_16__.func_380(0) || Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_773 == 0)
			{
				StringCopy(&(Local_122.f_174), "MPCT_6", 16);
				MISC::SET_BIT(&(Local_122.f_359), 9);
			}
			else
			{
				if (__LIB_6__.func_925())
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
			if (__LIB_16__.func_380(1) || Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_773 == 1)
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
			if (__LIB_7__.func_268(PLAYER::PLAYER_ID(), 1, 0) || iVar1)
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
			if (((__LIB_7__.func_268(PLAYER::PLAYER_ID(), 1, 0) || __LIB_2__.func_246(PLAYER::PLAYER_ID())) || __LIB_6__.func_401(0)) || (__LIB_20__.func_503(PLAYER::PLAYER_ID()) != 0 && __LIB_20__.func_503(PLAYER::PLAYER_ID()) != -1))
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
			if (__LIB_9__.func_71())
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
			else if ((!func_1263(Var4) || func_439(Var4, 0)) && !__LIB_2__.func_102(PLAYER::PLAYER_ID()))
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
			if (__LIB_1__.func_299(PLAYER::PLAYER_ID()))
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
			__LIB_6__.func_898(93, 1);
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
			StringCopy(&(Local_122.f_166), __LIB_10__.func_864(iLocal_168), 16);
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
			__LIB_0__.func_579(&(Global_2715699.f_4316.f_233[iVar0 /*2*/]));
			__LIB_0__.func_579(&(Global_2779939[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*233*/][iVar0 /*2*/]));
			iVar0++;
		}
		Global_2715699.f_4316.f_781 = 0;
	}
}

