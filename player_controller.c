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
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	struct<18> Local_71 = { 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4 } ;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 4;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 4;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 4;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 4;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 4;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 4;
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
	var uLocal_116 = 8;
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
	var uLocal_157 = 21;
	var uLocal_158 = 6;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	int* iLocal_163 = NULL;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = -1;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	int iLocal_178[3] = { 0, 0, 0 };
	int iLocal_179[3] = { 0, 0, 0 };
	int iLocal_180[3] = { 0, 0, 0 };
	struct<3> Local_181[9];
	float fLocal_182[9] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_183[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	bool bLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	bool bLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	char cLocal_195[32] = "";
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
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
	Local_61 = { 0f, 0f, 0f };
	Local_62 = { 0f, 0f, 0f };
	iLocal_63 = -1;
	iLocal_202 = 0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_698();
	}
	func_697();
	func_692(&iLocal_163);
	while (true)
	{
		switch (iLocal_65)
		{
			case 0:
				func_676();
				break;
			case 1:
				func_666();
				if (!Global_3)
				{
					func_384();
					func_267();
					func_241();
					func_240();
				}
				break;
		}
		func_168(&iLocal_163);
		func_167();
		func_154();
		func_92();
		func_90();
		if (Global_113386.f_2363.f_539.f_2353 == 0)
		{
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x10B
{
	int iVar0;
	SYSTEM::WAIT(0);
	iVar0 = __LIB_0__::func_42(0);
	func_2(iVar0, 13, 31, 1, 1, 0, 1);
	func_2(iVar0, 14, 0, 1, 1, 0, 1);
	func_2(iVar0, 14, 1, 1, 1, 0, 1);
	func_2(iVar0, 14, 2, 1, 1, 0, 1);
	func_2(iVar0, 14, 3, 1, 1, 0, 1);
	func_2(iVar0, 14, 4, 1, 1, 0, 1);
	func_2(iVar0, 14, 5, 1, 1, 0, 1);
	func_2(iVar0, 14, 6, 1, 1, 0, 1);
	func_2(iVar0, 14, 7, 1, 1, 0, 1);
	func_2(iVar0, 14, 8, 1, 1, 0, 1);
	func_2(iVar0, 0, 0, 1, 1, 0, 0);
	func_2(iVar0, 0, 1, 1, 1, 0, 0);
	func_2(iVar0, 0, 2, 1, 1, 0, 0);
	func_2(iVar0, 0, 3, 1, 1, 0, 0);
	func_2(iVar0, 0, 4, 1, 1, 0, 0);
	func_2(iVar0, 0, 5, 1, 1, 0, 0);
	func_2(iVar0, 0, 6, 1, 1, 0, 0);
	func_2(iVar0, 2, 0, 1, 1, 0, 0);
	func_2(iVar0, 2, 2, 1, 1, 0, 0);
	func_2(iVar0, 2, 3, 1, 1, 0, 0);
	func_2(iVar0, 2, 4, 1, 1, 0, 0);
	func_2(iVar0, 2, 5, 1, 1, 0, 0);
	func_2(iVar0, 3, 0, 1, 1, 0, 1);
	func_2(iVar0, 3, 1, 1, 1, 0, 1);
	func_2(iVar0, 3, 2, 1, 0, 0, 0);
	func_2(iVar0, 3, 4, 1, 1, 0, 1);
	func_2(iVar0, 3, 5, 1, 0, 0, 0);
	func_2(iVar0, 3, 6, 1, 0, 0, 0);
	func_2(iVar0, 3, 7, 1, 0, 0, 0);
	func_2(iVar0, 3, 8, 1, 0, 0, 0);
	func_2(iVar0, 3, 9, 1, 0, 0, 0);
	func_2(iVar0, 3, 10, 1, 0, 0, 0);
	func_2(iVar0, 3, 11, 1, 0, 0, 0);
	func_2(iVar0, 3, 12, 1, 0, 0, 0);
	func_2(iVar0, 3, 13, 1, 0, 0, 0);
	func_2(iVar0, 3, 14, 1, 0, 0, 0);
	func_2(iVar0, 3, 15, 1, 0, 0, 0);
	func_2(iVar0, 3, 16, 1, 0, 0, 0);
	func_2(iVar0, 3, 17, 1, 0, 0, 0);
	func_2(iVar0, 3, 18, 1, 0, 0, 0);
	func_2(iVar0, 3, 19, 1, 0, 0, 0);
	func_2(iVar0, 3, 20, 1, 0, 0, 0);
	func_2(iVar0, 3, 21, 1, 0, 0, 0);
	func_2(iVar0, 3, 22, 1, 0, 0, 0);
	func_2(iVar0, 3, 23, 1, 0, 0, 0);
	func_2(iVar0, 3, 24, 1, 0, 0, 0);
	func_2(iVar0, 3, 25, 1, 0, 0, 0);
	func_2(iVar0, 3, 26, 1, 0, 0, 0);
	func_2(iVar0, 3, 27, 1, 0, 0, 0);
	func_2(iVar0, 3, 28, 1, 0, 0, 0);
	func_2(iVar0, 3, 29, 1, 0, 0, 0);
	func_2(iVar0, 3, 30, 1, 0, 0, 0);
	func_2(iVar0, 3, 31, 1, 0, 0, 0);
	func_2(iVar0, 3, 32, 1, 0, 0, 0);
	func_2(iVar0, 3, 33, 1, 0, 0, 0);
	func_2(iVar0, 3, 34, 1, 0, 0, 0);
	func_2(iVar0, 3, 35, 1, 0, 0, 0);
	func_2(iVar0, 3, 36, 1, 0, 0, 0);
	func_2(iVar0, 3, 37, 1, 0, 0, 0);
	func_2(iVar0, 3, 38, 1, 0, 0, 0);
	func_2(iVar0, 3, 39, 1, 0, 0, 0);
	func_2(iVar0, 3, 40, 1, 0, 0, 0);
	func_2(iVar0, 3, 41, 1, 0, 0, 0);
	func_2(iVar0, 3, 42, 1, 0, 0, 0);
	func_2(iVar0, 3, 43, 1, 0, 0, 0);
	func_2(iVar0, 3, 44, 1, 1, 0, 1);
	func_2(iVar0, 3, 45, 1, 0, 0, 0);
	func_2(iVar0, 3, 46, 1, 0, 0, 0);
	func_2(iVar0, 3, 47, 1, 0, 0, 0);
	func_2(iVar0, 3, 48, 1, 0, 0, 0);
	func_2(iVar0, 3, 49, 1, 0, 0, 0);
	func_2(iVar0, 3, 50, 1, 0, 0, 0);
	func_2(iVar0, 3, 51, 1, 0, 0, 0);
	func_2(iVar0, 3, 52, 1, 0, 0, 0);
	func_2(iVar0, 3, 53, 1, 0, 0, 0);
	func_2(iVar0, 3, 54, 1, 0, 0, 0);
	func_2(iVar0, 3, 55, 1, 0, 0, 0);
	func_2(iVar0, 3, 56, 1, 0, 0, 0);
	func_2(iVar0, 3, 57, 1, 0, 0, 0);
	func_2(iVar0, 3, 58, 1, 0, 0, 0);
	func_2(iVar0, 3, 59, 1, 0, 0, 0);
	func_2(iVar0, 3, 60, 1, 0, 0, 0);
	func_2(iVar0, 3, 61, 1, 0, 0, 0);
	func_2(iVar0, 3, 62, 1, 0, 0, 0);
	func_2(iVar0, 3, 63, 1, 0, 0, 0);
	func_2(iVar0, 3, 64, 1, 0, 0, 0);
	func_2(iVar0, 3, 65, 1, 0, 0, 0);
	func_2(iVar0, 3, 66, 1, 0, 0, 0);
	func_2(iVar0, 3, 67, 1, 0, 0, 0);
	func_2(iVar0, 3, 68, 1, 0, 0, 0);
	func_2(iVar0, 3, 69, 1, 0, 0, 0);
	func_2(iVar0, 3, 70, 1, 0, 0, 0);
	func_2(iVar0, 3, 71, 1, 0, 0, 0);
	func_2(iVar0, 3, 72, 1, 0, 0, 0);
	func_2(iVar0, 3, 73, 1, 0, 0, 0);
	func_2(iVar0, 3, 74, 1, 0, 0, 0);
	func_2(iVar0, 3, 75, 1, 0, 0, 0);
	func_2(iVar0, 3, 76, 1, 0, 0, 0);
	func_2(iVar0, 3, 77, 1, 0, 0, 0);
	func_2(iVar0, 3, 78, 1, 0, 0, 0);
	func_2(iVar0, 3, 79, 1, 0, 0, 0);
	func_2(iVar0, 3, 80, 1, 0, 0, 0);
	func_2(iVar0, 3, 81, 1, 0, 0, 0);
	func_2(iVar0, 3, 82, 1, 0, 0, 0);
	func_2(iVar0, 3, 83, 1, 0, 0, 0);
	func_2(iVar0, 3, 84, 1, 0, 0, 0);
	func_2(iVar0, 3, 85, 1, 1, 0, 1);
	func_2(iVar0, 3, 86, 1, 1, 0, 1);
	func_2(iVar0, 3, 87, 1, 1, 0, 1);
	func_2(iVar0, 3, 88, 1, 0, 0, 0);
	func_2(iVar0, 3, 89, 1, 0, 0, 0);
	func_2(iVar0, 3, 90, 1, 0, 0, 0);
	func_2(iVar0, 3, 91, 1, 0, 0, 0);
	func_2(iVar0, 3, 92, 1, 1, 0, 1);
	func_2(iVar0, 3, 93, 1, 0, 0, 0);
	func_2(iVar0, 3, 94, 1, 0, 0, 0);
	func_2(iVar0, 3, 95, 1, 0, 0, 0);
	func_2(iVar0, 3, 96, 1, 0, 0, 0);
	func_2(iVar0, 3, 97, 1, 1, 0, 1);
	func_2(iVar0, 3, 98, 1, 0, 0, 0);
	func_2(iVar0, 3, 99, 1, 0, 0, 0);
	func_2(iVar0, 3, 100, 1, 0, 0, 0);
	func_2(iVar0, 3, 101, 1, 0, 0, 0);
	func_2(iVar0, 3, 102, 1, 0, 0, 0);
	func_2(iVar0, 3, 103, 1, 0, 0, 0);
	func_2(iVar0, 3, 104, 1, 0, 0, 0);
	func_2(iVar0, 3, 105, 1, 0, 0, 0);
	func_2(iVar0, 3, 106, 1, 0, 0, 0);
	func_2(iVar0, 3, 107, 1, 0, 0, 0);
	func_2(iVar0, 3, 108, 1, 0, 0, 0);
	func_2(iVar0, 3, 109, 1, 0, 0, 0);
	func_2(iVar0, 3, 110, 1, 0, 0, 0);
	func_2(iVar0, 3, 111, 1, 0, 0, 0);
	func_2(iVar0, 3, 112, 1, 0, 0, 0);
	func_2(iVar0, 3, 113, 1, 0, 0, 0);
	func_2(iVar0, 3, 114, 1, 0, 0, 0);
	func_2(iVar0, 3, 115, 1, 0, 0, 0);
	func_2(iVar0, 3, 116, 1, 0, 0, 0);
	func_2(iVar0, 3, 117, 1, 0, 0, 0);
	func_2(iVar0, 3, 118, 1, 0, 0, 0);
	func_2(iVar0, 3, 119, 1, 0, 0, 0);
	func_2(iVar0, 3, 120, 1, 0, 0, 0);
	func_2(iVar0, 3, 121, 1, 0, 0, 0);
	func_2(iVar0, 3, 122, 1, 0, 0, 0);
	func_2(iVar0, 3, 123, 1, 0, 0, 0);
	func_2(iVar0, 3, 124, 1, 0, 0, 0);
	func_2(iVar0, 3, 125, 1, 0, 0, 0);
	func_2(iVar0, 3, 126, 1, 0, 0, 0);
	func_2(iVar0, 3, 127, 1, 0, 0, 0);
	func_2(iVar0, 3, 128, 1, 0, 0, 0);
	func_2(iVar0, 3, 129, 1, 1, 0, 1);
	func_2(iVar0, 3, 130, 1, 0, 0, 0);
	func_2(iVar0, 3, 131, 1, 0, 0, 0);
	func_2(iVar0, 3, 132, 1, 0, 0, 0);
	func_2(iVar0, 3, 133, 1, 0, 0, 0);
	func_2(iVar0, 3, 134, 1, 0, 0, 0);
	func_2(iVar0, 3, 135, 1, 0, 0, 0);
	func_2(iVar0, 3, 136, 1, 0, 0, 0);
	func_2(iVar0, 3, 137, 1, 0, 0, 0);
	func_2(iVar0, 3, 138, 1, 0, 0, 0);
	func_2(iVar0, 3, 139, 1, 0, 0, 0);
	func_2(iVar0, 3, 140, 1, 0, 0, 0);
	func_2(iVar0, 3, 141, 1, 0, 0, 0);
	func_2(iVar0, 3, 142, 1, 0, 0, 0);
	func_2(iVar0, 3, 143, 1, 0, 0, 0);
	func_2(iVar0, 3, 144, 1, 0, 0, 0);
	func_2(iVar0, 3, 145, 1, 0, 0, 0);
	func_2(iVar0, 3, 146, 1, 0, 0, 0);
	func_2(iVar0, 3, 147, 1, 0, 0, 0);
	func_2(iVar0, 3, 148, 1, 0, 0, 0);
	func_2(iVar0, 3, 149, 1, 0, 0, 0);
	func_2(iVar0, 3, 150, 1, 0, 0, 0);
	func_2(iVar0, 3, 151, 1, 0, 0, 0);
	func_2(iVar0, 3, 152, 1, 0, 0, 0);
	func_2(iVar0, 3, 153, 1, 0, 0, 0);
	func_2(iVar0, 3, 154, 1, 0, 0, 0);
	func_2(iVar0, 3, 155, 1, 0, 0, 0);
	func_2(iVar0, 3, 156, 1, 0, 0, 0);
	func_2(iVar0, 3, 157, 1, 0, 0, 0);
	func_2(iVar0, 3, 158, 1, 0, 0, 0);
	func_2(iVar0, 3, 159, 1, 0, 0, 0);
	func_2(iVar0, 3, 160, 1, 0, 0, 0);
	func_2(iVar0, 3, 161, 1, 0, 0, 0);
	func_2(iVar0, 3, 162, 1, 0, 0, 0);
	func_2(iVar0, 3, 163, 1, 0, 0, 0);
	func_2(iVar0, 3, 164, 1, 0, 0, 0);
	func_2(iVar0, 3, 165, 1, 0, 0, 0);
	func_2(iVar0, 3, 166, 1, 0, 0, 0);
	func_2(iVar0, 3, 167, 1, 0, 0, 0);
	func_2(iVar0, 3, 168, 1, 0, 0, 0);
	func_2(iVar0, 3, 169, 1, 1, 0, 1);
	func_2(iVar0, 3, 170, 1, 0, 0, 0);
	func_2(iVar0, 3, 171, 1, 0, 0, 0);
	func_2(iVar0, 3, 172, 1, 0, 0, 0);
	func_2(iVar0, 3, 173, 1, 0, 0, 0);
	func_2(iVar0, 3, 174, 1, 0, 0, 0);
	func_2(iVar0, 3, 176, 1, 0, 0, 0);
	func_2(iVar0, 3, 177, 1, 0, 0, 0);
	func_2(iVar0, 3, 178, 1, 0, 0, 0);
	func_2(iVar0, 3, 179, 1, 0, 0, 0);
	func_2(iVar0, 3, 180, 1, 0, 0, 0);
	func_2(iVar0, 4, 0, 1, 1, 0, 1);
	func_2(iVar0, 4, 1, 1, 1, 0, 1);
	func_2(iVar0, 4, 2, 1, 0, 0, 0);
	func_2(iVar0, 4, 4, 1, 1, 0, 1);
	func_2(iVar0, 4, 5, 1, 0, 0, 0);
	func_2(iVar0, 4, 6, 1, 0, 0, 0);
	func_2(iVar0, 4, 7, 1, 0, 0, 0);
	func_2(iVar0, 4, 8, 1, 0, 0, 0);
	func_2(iVar0, 4, 9, 1, 0, 0, 0);
	func_2(iVar0, 4, 10, 1, 0, 0, 0);
	func_2(iVar0, 4, 11, 1, 0, 0, 0);
	func_2(iVar0, 4, 12, 1, 0, 0, 0);
	func_2(iVar0, 4, 13, 1, 0, 0, 0);
	func_2(iVar0, 4, 14, 1, 0, 0, 0);
	func_2(iVar0, 4, 15, 1, 0, 0, 0);
	func_2(iVar0, 4, 16, 1, 0, 0, 0);
	func_2(iVar0, 4, 17, 1, 0, 0, 0);
	func_2(iVar0, 4, 18, 1, 0, 0, 0);
	func_2(iVar0, 4, 19, 1, 0, 0, 0);
	func_2(iVar0, 4, 20, 1, 0, 0, 0);
	func_2(iVar0, 4, 21, 1, 0, 0, 0);
	func_2(iVar0, 4, 22, 1, 0, 0, 0);
	func_2(iVar0, 4, 23, 1, 0, 0, 0);
	func_2(iVar0, 4, 24, 1, 0, 0, 0);
	func_2(iVar0, 4, 25, 1, 0, 0, 0);
	func_2(iVar0, 4, 26, 1, 0, 0, 0);
	func_2(iVar0, 4, 27, 1, 0, 0, 0);
	func_2(iVar0, 4, 28, 1, 0, 0, 0);
	func_2(iVar0, 4, 29, 1, 0, 0, 0);
	func_2(iVar0, 4, 30, 1, 0, 0, 0);
	func_2(iVar0, 4, 31, 1, 0, 0, 0);
	func_2(iVar0, 4, 32, 1, 0, 0, 0);
	func_2(iVar0, 4, 33, 1, 0, 0, 0);
	func_2(iVar0, 4, 34, 1, 0, 0, 0);
	func_2(iVar0, 4, 35, 1, 0, 0, 0);
	func_2(iVar0, 4, 36, 1, 0, 0, 0);
	func_2(iVar0, 4, 37, 1, 0, 0, 0);
	func_2(iVar0, 4, 38, 1, 0, 0, 0);
	func_2(iVar0, 4, 39, 1, 0, 0, 0);
	func_2(iVar0, 4, 40, 1, 0, 0, 0);
	func_2(iVar0, 4, 41, 1, 0, 0, 0);
	func_2(iVar0, 4, 42, 1, 0, 0, 0);
	func_2(iVar0, 4, 43, 1, 0, 0, 0);
	func_2(iVar0, 4, 44, 1, 0, 0, 0);
	func_2(iVar0, 4, 45, 1, 0, 0, 0);
	func_2(iVar0, 4, 46, 1, 0, 0, 0);
	func_2(iVar0, 4, 47, 1, 0, 0, 0);
	func_2(iVar0, 4, 48, 1, 0, 0, 0);
	func_2(iVar0, 4, 49, 1, 0, 0, 0);
	func_2(iVar0, 4, 50, 1, 0, 0, 0);
	func_2(iVar0, 4, 51, 1, 0, 0, 0);
	func_2(iVar0, 4, 52, 1, 0, 0, 0);
	func_2(iVar0, 4, 53, 1, 0, 0, 0);
	func_2(iVar0, 4, 54, 1, 0, 0, 0);
	func_2(iVar0, 4, 55, 1, 1, 0, 1);
	func_2(iVar0, 4, 56, 1, 0, 0, 0);
	func_2(iVar0, 4, 57, 1, 0, 0, 0);
	func_2(iVar0, 4, 58, 1, 0, 0, 0);
	func_2(iVar0, 4, 59, 1, 0, 0, 0);
	func_2(iVar0, 4, 60, 1, 0, 0, 0);
	func_2(iVar0, 4, 61, 1, 0, 0, 0);
	func_2(iVar0, 4, 62, 1, 0, 0, 0);
	func_2(iVar0, 4, 63, 1, 0, 0, 0);
	func_2(iVar0, 4, 64, 1, 0, 0, 0);
	func_2(iVar0, 4, 65, 1, 0, 0, 0);
	func_2(iVar0, 4, 66, 1, 0, 0, 0);
	func_2(iVar0, 4, 67, 1, 0, 0, 0);
	func_2(iVar0, 4, 68, 1, 0, 0, 0);
	func_2(iVar0, 4, 69, 1, 0, 0, 0);
	func_2(iVar0, 4, 70, 1, 0, 0, 0);
	func_2(iVar0, 4, 71, 1, 0, 0, 0);
	func_2(iVar0, 4, 72, 1, 1, 0, 1);
	func_2(iVar0, 4, 73, 1, 0, 0, 0);
	func_2(iVar0, 4, 74, 1, 0, 0, 0);
	func_2(iVar0, 4, 75, 1, 0, 0, 0);
	func_2(iVar0, 4, 76, 1, 0, 0, 0);
	func_2(iVar0, 4, 77, 1, 0, 0, 0);
	func_2(iVar0, 4, 78, 1, 0, 0, 0);
	func_2(iVar0, 4, 79, 1, 0, 0, 0);
	func_2(iVar0, 4, 80, 1, 0, 0, 0);
	func_2(iVar0, 4, 81, 1, 1, 0, 1);
	func_2(iVar0, 4, 82, 1, 0, 0, 0);
	func_2(iVar0, 4, 83, 1, 0, 0, 0);
	func_2(iVar0, 4, 84, 1, 1, 0, 1);
	func_2(iVar0, 4, 85, 1, 0, 0, 0);
	func_2(iVar0, 4, 86, 1, 0, 0, 0);
	func_2(iVar0, 4, 87, 1, 0, 0, 0);
	func_2(iVar0, 4, 88, 1, 0, 0, 0);
	func_2(iVar0, 4, 89, 1, 0, 0, 0);
	func_2(iVar0, 4, 90, 1, 0, 0, 0);
	func_2(iVar0, 4, 91, 1, 0, 0, 0);
	func_2(iVar0, 4, 92, 1, 0, 0, 0);
	func_2(iVar0, 4, 93, 1, 0, 0, 0);
	func_2(iVar0, 4, 94, 1, 0, 0, 0);
	func_2(iVar0, 4, 95, 1, 1, 0, 1);
	func_2(iVar0, 4, 96, 1, 0, 0, 0);
	func_2(iVar0, 4, 97, 1, 1, 0, 1);
	func_2(iVar0, 4, 98, 1, 0, 0, 0);
	func_2(iVar0, 4, 99, 1, 0, 0, 0);
	func_2(iVar0, 4, 100, 1, 0, 0, 0);
	func_2(iVar0, 4, 101, 1, 0, 0, 0);
	func_2(iVar0, 4, 102, 1, 0, 0, 0);
	func_2(iVar0, 4, 103, 1, 0, 0, 0);
	func_2(iVar0, 4, 104, 1, 0, 0, 0);
	func_2(iVar0, 4, 105, 1, 0, 0, 0);
	func_2(iVar0, 4, 106, 1, 0, 0, 0);
	func_2(iVar0, 4, 107, 1, 0, 0, 0);
	func_2(iVar0, 4, 108, 1, 0, 0, 0);
	func_2(iVar0, 4, 109, 1, 0, 0, 0);
	func_2(iVar0, 4, 110, 1, 0, 0, 0);
	func_2(iVar0, 4, 111, 1, 0, 0, 0);
	func_2(iVar0, 4, 112, 1, 1, 0, 1);
	func_2(iVar0, 6, 0, 1, 1, 0, 1);
	func_2(iVar0, 6, 1, 1, 0, 0, 0);
	func_2(iVar0, 6, 2, 1, 0, 0, 0);
	func_2(iVar0, 6, 3, 1, 0, 0, 0);
	func_2(iVar0, 6, 4, 1, 0, 0, 0);
	func_2(iVar0, 6, 5, 1, 0, 0, 0);
	func_2(iVar0, 6, 6, 1, 1, 0, 1);
	func_2(iVar0, 6, 7, 1, 1, 0, 1);
	func_2(iVar0, 6, 8, 1, 0, 0, 0);
	func_2(iVar0, 6, 9, 1, 0, 0, 0);
	func_2(iVar0, 6, 10, 1, 0, 0, 0);
	func_2(iVar0, 6, 11, 1, 0, 0, 0);
	func_2(iVar0, 6, 12, 1, 1, 0, 1);
	func_2(iVar0, 6, 13, 1, 0, 0, 0);
	func_2(iVar0, 6, 14, 1, 0, 0, 0);
	func_2(iVar0, 6, 15, 1, 0, 0, 0);
	func_2(iVar0, 6, 16, 1, 0, 0, 0);
	func_2(iVar0, 6, 17, 1, 0, 0, 0);
	func_2(iVar0, 6, 18, 1, 0, 0, 0);
	func_2(iVar0, 6, 19, 1, 0, 0, 0);
	func_2(iVar0, 6, 20, 1, 1, 0, 1);
	func_2(iVar0, 6, 21, 1, 0, 0, 0);
	func_2(iVar0, 6, 22, 1, 0, 0, 0);
	func_2(iVar0, 6, 23, 1, 0, 0, 0);
	func_2(iVar0, 6, 24, 1, 0, 0, 0);
	func_2(iVar0, 6, 25, 1, 0, 0, 0);
	func_2(iVar0, 6, 26, 1, 0, 0, 0);
	func_2(iVar0, 6, 27, 1, 0, 0, 0);
	func_2(iVar0, 6, 28, 1, 0, 0, 0);
	func_2(iVar0, 6, 29, 1, 0, 0, 0);
	func_2(iVar0, 6, 30, 1, 0, 0, 0);
	func_2(iVar0, 6, 31, 1, 0, 0, 0);
	func_2(iVar0, 6, 32, 1, 0, 0, 0);
	func_2(iVar0, 6, 33, 1, 0, 0, 0);
	func_2(iVar0, 6, 34, 1, 0, 0, 0);
	func_2(iVar0, 6, 35, 1, 0, 0, 0);
	func_2(iVar0, 6, 36, 1, 0, 0, 0);
	func_2(iVar0, 6, 37, 1, 0, 0, 0);
	func_2(iVar0, 6, 38, 1, 0, 0, 0);
	func_2(iVar0, 6, 39, 1, 0, 0, 0);
	func_2(iVar0, 6, 40, 1, 0, 0, 0);
	func_2(iVar0, 6, 41, 1, 0, 0, 0);
	func_2(iVar0, 6, 42, 1, 0, 0, 0);
	func_2(iVar0, 6, 43, 1, 0, 0, 0);
	func_2(iVar0, 6, 44, 1, 0, 0, 0);
	func_2(iVar0, 6, 45, 1, 0, 0, 0);
	func_2(iVar0, 6, 46, 1, 0, 0, 0);
	func_2(iVar0, 6, 47, 1, 0, 0, 0);
	func_2(iVar0, 6, 48, 1, 0, 0, 0);
	func_2(iVar0, 6, 49, 1, 0, 0, 0);
	func_2(iVar0, 6, 50, 1, 0, 0, 0);
	func_2(iVar0, 6, 51, 1, 0, 0, 0);
	func_2(iVar0, 6, 52, 1, 0, 0, 0);
	func_2(iVar0, 6, 53, 1, 0, 0, 0);
	func_2(iVar0, 6, 54, 1, 0, 0, 0);
	func_2(iVar0, 6, 55, 1, 0, 0, 0);
	func_2(iVar0, 6, 56, 1, 0, 0, 0);
	func_2(iVar0, 6, 57, 1, 0, 0, 0);
	func_2(iVar0, 6, 58, 1, 0, 0, 0);
	func_2(iVar0, 6, 59, 1, 0, 0, 0);
	func_2(iVar0, 6, 60, 1, 0, 0, 0);
	func_2(iVar0, 6, 61, 1, 0, 0, 0);
	func_2(iVar0, 6, 62, 1, 0, 0, 0);
	func_2(iVar0, 6, 63, 1, 0, 0, 0);
	func_2(iVar0, 6, 64, 1, 0, 0, 0);
	func_2(iVar0, 6, 65, 1, 0, 0, 0);
	func_2(iVar0, 6, 66, 1, 0, 0, 0);
	func_2(iVar0, 6, 67, 1, 0, 0, 0);
	func_2(iVar0, 6, 68, 1, 0, 0, 0);
	func_2(iVar0, 6, 69, 1, 0, 0, 0);
	func_2(iVar0, 6, 70, 1, 0, 0, 0);
	func_2(iVar0, 6, 71, 1, 0, 0, 0);
	func_2(iVar0, 6, 72, 1, 0, 0, 0);
	func_2(iVar0, 6, 73, 1, 0, 0, 0);
	func_2(iVar0, 6, 74, 1, 0, 0, 0);
	func_2(iVar0, 6, 75, 1, 0, 0, 0);
	func_2(iVar0, 6, 76, 1, 0, 0, 0);
	func_2(iVar0, 6, 77, 1, 0, 0, 0);
	func_2(iVar0, 6, 78, 1, 0, 0, 0);
	func_2(iVar0, 6, 79, 1, 0, 0, 0);
	func_2(iVar0, 6, 80, 1, 0, 0, 0);
	func_2(iVar0, 6, 81, 1, 0, 0, 0);
	func_2(iVar0, 6, 82, 1, 0, 0, 0);
	func_2(iVar0, 6, 83, 1, 0, 0, 0);
	func_2(iVar0, 6, 84, 1, 0, 0, 0);
	func_2(iVar0, 6, 85, 1, 0, 0, 0);
	func_2(iVar0, 6, 86, 1, 0, 0, 0);
	func_2(iVar0, 6, 87, 1, 0, 0, 0);
	func_2(iVar0, 6, 88, 1, 0, 0, 0);
	func_2(iVar0, 6, 89, 1, 0, 0, 0);
	func_2(iVar0, 6, 90, 1, 0, 0, 0);
	func_2(iVar0, 6, 91, 1, 0, 0, 0);
	func_2(iVar0, 6, 92, 1, 0, 0, 0);
	func_2(iVar0, 6, 93, 1, 0, 0, 0);
	func_2(iVar0, 6, 94, 1, 0, 0, 0);
	func_2(iVar0, 6, 95, 1, 0, 0, 0);
	func_2(iVar0, 6, 96, 1, 0, 0, 0);
	func_2(iVar0, 6, 97, 1, 0, 0, 0);
	func_2(iVar0, 6, 98, 1, 0, 0, 0);
	SYSTEM::WAIT(0);
	func_2(iVar0, 5, 0, 1, 1, 0, 1);
	func_2(iVar0, 5, 1, 1, 0, 0, 0);
	func_2(iVar0, 5, 2, 1, 0, 0, 0);
	func_2(iVar0, 5, 3, 1, 0, 0, 0);
	func_2(iVar0, 5, 4, 1, 0, 0, 0);
	func_2(iVar0, 5, 5, 1, 0, 0, 0);
	func_2(iVar0, 5, 6, 1, 0, 0, 0);
	func_2(iVar0, 5, 7, 1, 0, 0, 0);
	func_2(iVar0, 5, 8, 1, 0, 0, 0);
	func_2(iVar0, 5, 9, 1, 0, 0, 0);
	func_2(iVar0, 5, 10, 1, 0, 0, 0);
	func_2(iVar0, 5, 11, 1, 0, 0, 0);
	func_2(iVar0, 5, 12, 1, 0, 0, 0);
	func_2(iVar0, 5, 13, 1, 0, 0, 0);
	func_2(iVar0, 8, 0, 1, 1, 0, 1);
	func_2(iVar0, 8, 1, 1, 0, 0, 0);
	func_2(iVar0, 8, 2, 1, 0, 0, 0);
	func_2(iVar0, 8, 3, 1, 0, 0, 0);
	func_2(iVar0, 8, 4, 1, 0, 0, 0);
	func_2(iVar0, 8, 5, 1, 0, 0, 0);
	func_2(iVar0, 8, 6, 1, 0, 0, 0);
	func_2(iVar0, 8, 7, 1, 0, 0, 0);
	func_2(iVar0, 8, 8, 1, 0, 0, 0);
	func_2(iVar0, 8, 9, 1, 0, 0, 0);
	func_2(iVar0, 8, 10, 1, 1, 0, 1);
	func_2(iVar0, 8, 11, 1, 0, 0, 0);
	func_2(iVar0, 8, 12, 1, 0, 0, 0);
	func_2(iVar0, 8, 13, 1, 0, 0, 0);
	func_2(iVar0, 8, 14, 1, 0, 0, 0);
	func_2(iVar0, 8, 15, 1, 0, 0, 0);
	func_2(iVar0, 8, 16, 1, 1, 0, 0);
	func_2(iVar0, 8, 17, 1, 0, 0, 0);
	func_2(iVar0, 8, 18, 1, 0, 0, 0);
	func_2(iVar0, 8, 19, 1, 0, 0, 0);
	func_2(iVar0, 8, 20, 1, 0, 0, 0);
	func_2(iVar0, 8, 21, 1, 0, 0, 0);
	func_2(iVar0, 8, 22, 1, 0, 0, 0);
	func_2(iVar0, 8, 23, 1, 0, 0, 0);
	func_2(iVar0, 9, 0, 1, 1, 0, 1);
	func_2(iVar0, 9, 1, 1, 0, 0, 0);
	func_2(iVar0, 9, 2, 1, 0, 0, 0);
	func_2(iVar0, 9, 3, 1, 0, 0, 0);
	func_2(iVar0, 9, 4, 1, 0, 0, 0);
	func_2(iVar0, 9, 5, 1, 0, 0, 0);
	func_2(iVar0, 9, 6, 1, 0, 0, 0);
	func_2(iVar0, 9, 7, 1, 0, 0, 0);
	func_2(iVar0, 9, 8, 1, 0, 0, 0);
	func_2(iVar0, 9, 9, 1, 0, 0, 0);
	func_2(iVar0, 9, 10, 1, 0, 0, 0);
	func_2(iVar0, 9, 11, 1, 0, 0, 0);
	func_2(iVar0, 9, 12, 1, 0, 0, 0);
	func_2(iVar0, 9, 13, 1, 0, 0, 0);
	func_2(iVar0, 9, 14, 1, 0, 0, 0);
	func_2(iVar0, 9, 15, 1, 0, 0, 0);
	func_2(iVar0, 9, 16, 1, 0, 0, 0);
	func_2(iVar0, 9, 17, 1, 0, 0, 0);
	func_2(iVar0, 9, 18, 1, 0, 0, 0);
	func_2(iVar0, 9, 19, 1, 0, 0, 0);
	func_2(iVar0, 10, 0, 1, 1, 0, 1);
	func_2(iVar0, 10, 1, 1, 0, 0, 0);
	func_2(iVar0, 10, 2, 1, 0, 0, 0);
	func_2(iVar0, 10, 3, 1, 0, 0, 0);
	func_2(iVar0, 10, 4, 1, 1, 0, 1);
	func_2(iVar0, 10, 5, 1, 0, 0, 0);
	func_2(iVar0, 10, 6, 1, 0, 0, 0);
	func_2(iVar0, 10, 7, 1, 0, 0, 0);
	func_2(iVar0, 10, 8, 1, 0, 0, 0);
	func_2(iVar0, 10, 9, 1, 0, 0, 0);
	func_2(iVar0, 10, 10, 1, 0, 0, 0);
	func_2(iVar0, 10, 11, 1, 0, 0, 0);
	func_2(iVar0, 10, 12, 1, 0, 0, 0);
	func_2(iVar0, 10, 13, 1, 0, 0, 0);
	func_2(iVar0, 10, 14, 1, 0, 0, 0);
	func_2(iVar0, 10, 15, 1, 0, 0, 0);
	func_2(iVar0, 10, 16, 1, 0, 0, 0);
	func_2(iVar0, 10, 17, 1, 0, 0, 0);
	func_2(iVar0, 10, 18, 1, 0, 0, 0);
	func_2(iVar0, 10, 19, 1, 0, 0, 0);
	func_2(iVar0, 10, 20, 1, 0, 0, 0);
	func_2(iVar0, 10, 21, 1, 0, 0, 0);
	func_2(iVar0, 10, 22, 1, 0, 0, 0);
	func_2(iVar0, 10, 23, 1, 0, 0, 0);
	func_2(iVar0, 10, 24, 1, 0, 0, 0);
	func_2(iVar0, 10, 25, 1, 0, 0, 0);
	func_2(iVar0, 10, 26, 1, 0, 0, 0);
	func_2(iVar0, 10, 27, 1, 0, 0, 0);
	func_2(iVar0, 10, 28, 1, 0, 0, 0);
	func_2(iVar0, 10, 29, 1, 0, 0, 0);
	func_2(iVar0, 10, 30, 1, 0, 0, 0);
	func_2(iVar0, 10, 31, 1, 0, 0, 0);
	func_2(iVar0, 10, 32, 1, 0, 0, 0);
	func_2(iVar0, 10, 33, 1, 0, 0, 0);
	func_2(iVar0, 10, 34, 1, 0, 0, 0);
	func_2(iVar0, 10, 35, 1, 0, 0, 0);
	func_2(iVar0, 10, 36, 1, 0, 0, 0);
	func_2(iVar0, 10, 37, 1, 0, 0, 0);
	func_2(iVar0, 10, 38, 1, 0, 0, 0);
	func_2(iVar0, 10, 39, 1, 0, 0, 0);
	func_2(iVar0, 10, 40, 1, 0, 0, 0);
	func_2(iVar0, 10, 41, 1, 0, 0, 0);
	func_2(iVar0, 10, 42, 1, 0, 0, 0);
	func_2(iVar0, 10, 43, 1, 0, 0, 0);
	func_2(iVar0, 10, 44, 1, 0, 0, 0);
	func_2(iVar0, 10, 45, 1, 0, 0, 0);
	func_2(iVar0, 10, 46, 1, 0, 0, 0);
	func_2(iVar0, 10, 47, 1, 0, 0, 0);
	func_2(iVar0, 1, 0, 1, 1, 0, 0);
	func_2(iVar0, 1, 1, 1, 1, 0, 0);
	func_2(iVar0, 1, 2, 1, 1, 0, 0);
	func_2(iVar0, 1, 3, 1, 1, 0, 0);
	func_2(iVar0, 7, 0, 1, 1, 0, 0);
	func_2(iVar0, 11, 0, 1, 1, 0, 1);
	func_2(iVar0, 11, 1, 1, 1, 0, 1);
	func_2(iVar0, 11, 2, 1, 1, 0, 1);
	func_2(iVar0, 11, 3, 1, 1, 0, 1);
	func_2(iVar0, 11, 4, 1, 1, 0, 1);
	func_2(iVar0, 11, 5, 1, 1, 0, 1);
	func_2(iVar0, 11, 6, 1, 1, 0, 1);
	func_2(iVar0, 11, 7, 1, 1, 0, 1);
	func_2(iVar0, 11, 8, 1, 0, 0, 0);
	func_2(iVar0, 11, 9, 1, 0, 0, 0);
	func_2(iVar0, 11, 10, 1, 0, 0, 0);
	func_2(iVar0, 11, 11, 1, 0, 0, 0);
	func_2(iVar0, 11, 12, 1, 0, 0, 0);
	func_2(iVar0, 11, 13, 1, 0, 0, 0);
	func_2(iVar0, 11, 14, 1, 0, 0, 0);
	func_2(iVar0, 11, 15, 1, 0, 0, 0);
	func_2(iVar0, 11, 16, 1, 0, 0, 0);
	func_2(iVar0, 11, 17, 1, 0, 0, 0);
	func_2(iVar0, 11, 18, 1, 0, 0, 0);
	func_2(iVar0, 11, 19, 1, 0, 0, 0);
	func_2(iVar0, 11, 20, 1, 0, 0, 0);
	func_2(iVar0, 11, 21, 1, 0, 0, 0);
	func_2(iVar0, 11, 22, 1, 0, 0, 0);
	func_2(iVar0, 11, 23, 1, 0, 0, 0);
	func_2(iVar0, 11, 24, 1, 0, 0, 0);
	func_2(iVar0, 11, 25, 1, 0, 0, 0);
	func_2(iVar0, 11, 26, 1, 0, 0, 0);
	func_2(iVar0, 11, 27, 1, 0, 0, 0);
	func_2(iVar0, 11, 28, 1, 1, 0, 1);
	func_2(iVar0, 11, 29, 1, 0, 0, 0);
	func_2(iVar0, 11, 30, 1, 0, 0, 0);
	func_2(iVar0, 11, 31, 1, 0, 0, 0);
	func_2(iVar0, 11, 32, 1, 0, 0, 0);
	func_2(iVar0, 11, 33, 1, 0, 0, 0);
	func_2(iVar0, 11, 34, 1, 0, 0, 0);
	func_2(iVar0, 11, 35, 1, 0, 0, 0);
	func_2(iVar0, 11, 36, 1, 0, 0, 0);
	func_2(iVar0, 11, 37, 1, 0, 0, 0);
	func_2(iVar0, 11, 38, 1, 0, 0, 0);
	func_2(iVar0, 11, 39, 1, 0, 0, 0);
	func_2(iVar0, 11, 40, 1, 0, 0, 0);
	func_2(iVar0, 11, 41, 1, 0, 0, 0);
	func_2(iVar0, 11, 42, 1, 0, 0, 0);
	func_2(iVar0, 11, 43, 1, 0, 0, 0);
	func_2(iVar0, 11, 44, 1, 1, 0, 1);
	func_2(iVar0, 12, 0, 1, 1, 0, 1);
	func_2(iVar0, 12, 1, 1, 0, 0, 0);
	func_2(iVar0, 12, 2, 1, 0, 0, 0);
	func_2(iVar0, 12, 3, 1, 0, 0, 0);
	func_2(iVar0, 12, 4, 1, 0, 0, 0);
	func_2(iVar0, 12, 5, 1, 0, 0, 0);
	func_2(iVar0, 12, 6, 1, 1, 0, 1);
	func_2(iVar0, 12, 7, 1, 1, 0, 0);
	func_2(iVar0, 12, 8, 1, 0, 0, 0);
	func_2(iVar0, 12, 9, 1, 0, 0, 0);
	func_2(iVar0, 12, 11, 1, 0, 0, 0);
	func_2(iVar0, 12, 10, 1, 0, 0, 0);
	func_2(iVar0, 12, 12, 1, 0, 0, 0);
	func_2(iVar0, 12, 13, 1, 0, 0, 0);
	func_2(iVar0, 12, 14, 1, 0, 0, 0);
	func_2(iVar0, 12, 15, 1, 0, 0, 0);
	func_2(iVar0, 12, 16, 0, 0, 0, 0);
	func_2(iVar0, 12, 17, 1, 0, 0, 0);
	func_2(iVar0, 12, 18, 1, 0, 0, 0);
	func_2(iVar0, 12, 19, 1, 0, 0, 0);
	func_2(iVar0, 12, 20, 0, 0, 0, 0);
	func_2(iVar0, 12, 21, 0, 0, 0, 0);
	func_2(iVar0, 12, 22, 0, 0, 0, 0);
	func_2(iVar0, 12, 23, 1, 0, 0, 0);
	func_2(iVar0, 12, 24, 1, 0, 0, 0);
	func_2(iVar0, 12, 25, 1, 1, 0, 1);
	func_2(iVar0, 12, 27, 1, 1, 0, 1);
	func_2(iVar0, 12, 28, 1, 0, 0, 0);
	func_2(iVar0, 12, 29, 1, 0, 0, 0);
	func_2(iVar0, 12, 30, 1, 0, 0, 0);
	func_2(iVar0, 12, 31, 1, 0, 0, 0);
	func_2(iVar0, 12, 32, 1, 1, 0, 1);
	func_2(iVar0, 12, 33, 1, 1, 0, 1);
	func_2(iVar0, 12, 34, 1, 1, 0, 1);
	func_2(iVar0, 12, 35, 1, 1, 0, 1);
	func_2(iVar0, 12, 36, 1, 1, 0, 1);
	func_2(iVar0, 12, 37, 1, 0, 0, 0);
	func_2(iVar0, 12, 38, 1, 0, 0, 0);
	func_2(iVar0, 12, 39, 1, 0, 0, 0);
	func_2(iVar0, 12, 40, 1, 0, 0, 0);
	func_2(iVar0, 12, 41, 1, 0, 0, 0);
	func_2(iVar0, 12, 42, 1, 0, 0, 0);
	func_2(iVar0, 12, 43, 1, 0, 0, 0);
	func_2(iVar0, 12, 44, 1, 0, 0, 0);
	func_2(iVar0, 12, 45, 1, 0, 0, 0);
	func_2(iVar0, 12, 46, 1, 0, 0, 0);
	func_2(iVar0, 12, 47, 1, 0, 0, 0);
	func_2(iVar0, 12, 48, 1, 0, 0, 0);
	func_2(iVar0, 12, 49, 1, 0, 0, 0);
	func_2(iVar0, 12, 50, 1, 0, 0, 0);
	func_2(iVar0, 12, 51, 1, 0, 0, 0);
	func_2(iVar0, 12, 52, 1, 1, 0, 1);
	func_2(iVar0, 13, 0, 1, 0, 0, 0);
	func_2(iVar0, 13, 1, 1, 0, 0, 0);
	func_2(iVar0, 13, 2, 1, 0, 0, 0);
	func_2(iVar0, 13, 3, 1, 0, 0, 0);
	func_2(iVar0, 13, 4, 1, 0, 0, 0);
	func_2(iVar0, 13, 5, 1, 0, 0, 0);
	func_2(iVar0, 13, 6, 1, 0, 0, 0);
	func_2(iVar0, 13, 7, 1, 0, 0, 0);
	func_2(iVar0, 13, 8, 1, 0, 0, 0);
	func_2(iVar0, 13, 9, 1, 0, 0, 0);
	func_2(iVar0, 14, 10, 1, 0, 0, 0);
	func_2(iVar0, 14, 11, 1, 0, 0, 0);
	func_2(iVar0, 14, 58, 1, 0, 0, 0);
	func_2(iVar0, 14, 14, 1, 0, 0, 0);
	func_2(iVar0, 14, 62, 1, 0, 0, 0);
	func_2(iVar0, 14, 63, 1, 0, 0, 0);
	func_2(iVar0, 14, 64, 1, 0, 0, 0);
	func_2(iVar0, 14, 65, 1, 0, 0, 0);
	func_2(iVar0, 14, 66, 1, 0, 0, 0);
	func_2(iVar0, 14, 67, 1, 0, 0, 0);
	func_2(iVar0, 14, 68, 1, 0, 0, 0);
	func_2(iVar0, 14, 69, 1, 0, 0, 0);
	func_2(iVar0, 14, 18, 1, 0, 0, 0);
	func_2(iVar0, 14, 112, 1, 1, 0, 1);
	func_2(iVar0, 14, 59, 1, 0, 0, 0);
	func_2(iVar0, 14, 20, 1, 0, 0, 0);
	func_2(iVar0, 14, 21, 1, 0, 0, 0);
	func_2(iVar0, 14, 22, 1, 0, 0, 0);
	func_2(iVar0, 14, 23, 1, 0, 0, 0);
	func_2(iVar0, 14, 24, 1, 0, 0, 0);
	func_2(iVar0, 14, 25, 1, 0, 0, 0);
	func_2(iVar0, 14, 26, 1, 0, 0, 0);
	func_2(iVar0, 14, 27, 1, 0, 0, 0);
	func_2(iVar0, 14, 28, 1, 0, 0, 0);
	func_2(iVar0, 14, 15, 1, 0, 0, 0);
	func_2(iVar0, 14, 60, 1, 0, 0, 0);
	func_2(iVar0, 14, 61, 1, 0, 0, 0);
	func_2(iVar0, 14, 70, 1, 0, 0, 0);
	func_2(iVar0, 14, 71, 1, 0, 0, 0);
	func_2(iVar0, 14, 72, 1, 0, 0, 0);
	func_2(iVar0, 14, 73, 1, 0, 0, 0);
	func_2(iVar0, 14, 74, 1, 0, 0, 0);
	func_2(iVar0, 14, 75, 1, 0, 0, 0);
	func_2(iVar0, 14, 76, 1, 0, 0, 0);
	func_2(iVar0, 14, 77, 1, 0, 0, 0);
	func_2(iVar0, 14, 78, 1, 0, 0, 0);
	func_2(iVar0, 14, 79, 1, 1, 0, 1);
	func_2(iVar0, 14, 80, 1, 0, 0, 0);
	func_2(iVar0, 14, 81, 1, 0, 0, 0);
	func_2(iVar0, 14, 82, 1, 0, 0, 0);
	func_2(iVar0, 14, 83, 1, 0, 0, 0);
	func_2(iVar0, 14, 84, 1, 0, 0, 0);
	func_2(iVar0, 14, 85, 1, 0, 0, 0);
	func_2(iVar0, 14, 86, 1, 0, 0, 0);
	func_2(iVar0, 14, 87, 1, 0, 0, 0);
	func_2(iVar0, 14, 88, 1, 0, 0, 0);
	func_2(iVar0, 14, 89, 1, 0, 0, 0);
	func_2(iVar0, 14, 90, 1, 0, 0, 0);
	func_2(iVar0, 14, 91, 1, 0, 0, 0);
	func_2(iVar0, 14, 92, 1, 0, 0, 0);
	func_2(iVar0, 14, 93, 1, 0, 0, 0);
	func_2(iVar0, 14, 94, 1, 0, 0, 0);
	func_2(iVar0, 14, 95, 1, 0, 0, 0);
	func_2(iVar0, 14, 96, 1, 0, 0, 0);
	func_2(iVar0, 14, 97, 1, 0, 0, 0);
	func_2(iVar0, 14, 98, 1, 0, 0, 0);
	func_2(iVar0, 14, 99, 1, 0, 0, 0);
	func_2(iVar0, 14, 100, 1, 0, 0, 0);
	func_2(iVar0, 14, 101, 1, 0, 0, 0);
	func_2(iVar0, 14, 102, 1, 0, 0, 0);
	func_2(iVar0, 14, 103, 1, 0, 0, 0);
	func_2(iVar0, 14, 104, 1, 0, 0, 0);
	func_2(iVar0, 14, 105, 1, 0, 0, 0);
	func_2(iVar0, 14, 106, 1, 0, 0, 0);
	func_2(iVar0, 14, 107, 1, 0, 0, 0);
	func_2(iVar0, 14, 108, 1, 0, 0, 0);
	func_2(iVar0, 14, 109, 1, 0, 0, 0);
	func_2(iVar0, 14, 110, 1, 0, 0, 0);
	func_2(iVar0, 14, 13, 1, 0, 0, 0);
	func_2(iVar0, 14, 16, 1, 0, 0, 0);
	func_2(iVar0, 14, 17, 1, 0, 0, 0);
	func_2(iVar0, 14, 19, 1, 0, 0, 0);
	func_2(iVar0, 14, 29, 1, 0, 0, 0);
	func_2(iVar0, 14, 30, 1, 0, 0, 0);
	func_2(iVar0, 14, 31, 0, 0, 0, 0);
	func_2(iVar0, 14, 32, 0, 0, 0, 0);
	func_2(iVar0, 14, 33, 0, 0, 0, 0);
	func_2(iVar0, 14, 34, 0, 0, 0, 0);
	func_2(iVar0, 14, 35, 0, 0, 0, 0);
	func_2(iVar0, 14, 36, 0, 0, 0, 0);
	func_2(iVar0, 14, 37, 0, 0, 0, 0);
	func_2(iVar0, 14, 38, 0, 0, 0, 0);
	func_2(iVar0, 14, 39, 0, 0, 0, 0);
	func_2(iVar0, 14, 40, 0, 0, 0, 0);
	func_2(iVar0, 14, 41, 0, 0, 0, 0);
	func_2(iVar0, 14, 42, 0, 0, 0, 0);
	func_2(iVar0, 14, 43, 0, 0, 0, 0);
	func_2(iVar0, 14, 44, 0, 0, 0, 0);
	func_2(iVar0, 14, 45, 1, 0, 0, 0);
	func_2(iVar0, 14, 46, 1, 0, 0, 0);
	func_2(iVar0, 14, 47, 1, 0, 0, 0);
	func_2(iVar0, 14, 48, 1, 0, 0, 0);
	func_2(iVar0, 14, 49, 1, 0, 0, 0);
	func_2(iVar0, 14, 50, 1, 0, 0, 0);
	func_2(iVar0, 14, 51, 1, 0, 0, 0);
	func_2(iVar0, 14, 52, 1, 0, 0, 0);
	func_2(iVar0, 14, 53, 1, 0, 0, 0);
	func_2(iVar0, 14, 54, 1, 0, 0, 0);
	func_2(iVar0, 14, 55, 1, 0, 0, 0);
	func_2(iVar0, 14, 56, 1, 0, 0, 0);
	func_2(iVar0, 14, 57, 1, 0, 0, 0);
	SYSTEM::WAIT(0);
	iVar0 = __LIB_0__::func_42(2);
	func_2(iVar0, 13, 31, 1, 1, 0, 1);
	func_2(iVar0, 14, 0, 1, 1, 0, 1);
	func_2(iVar0, 14, 1, 1, 1, 0, 1);
	func_2(iVar0, 14, 2, 1, 1, 0, 1);
	func_2(iVar0, 14, 3, 1, 1, 0, 1);
	func_2(iVar0, 14, 4, 1, 1, 0, 1);
	func_2(iVar0, 14, 5, 1, 1, 0, 1);
	func_2(iVar0, 14, 6, 1, 1, 0, 1);
	func_2(iVar0, 14, 7, 1, 1, 0, 1);
	func_2(iVar0, 14, 8, 1, 1, 0, 1);
	func_2(iVar0, 0, 0, 1, 1, 0, 0);
	func_2(iVar0, 0, 1, 1, 1, 0, 0);
	func_2(iVar0, 0, 2, 1, 1, 0, 0);
	func_2(iVar0, 0, 3, 1, 1, 0, 0);
	func_2(iVar0, 0, 4, 1, 1, 0, 0);
	func_2(iVar0, 0, 5, 1, 1, 0, 0);
	func_2(iVar0, 0, 6, 1, 1, 0, 0);
	func_2(iVar0, 2, 0, 1, 1, 0, 0);
	func_2(iVar0, 2, 1, 1, 1, 0, 0);
	func_2(iVar0, 2, 2, 1, 1, 0, 0);
	func_2(iVar0, 2, 4, 0, 0, 0, 0);
	func_2(iVar0, 2, 5, 1, 1, 0, 0);
	func_2(iVar0, 2, 6, 1, 1, 0, 0);
	func_2(iVar0, 2, 7, 1, 1, 0, 0);
	func_2(iVar0, 2, 8, 1, 1, 0, 0);
	func_2(iVar0, 3, 0, 1, 1, 0, 1);
	func_2(iVar0, 3, 1, 1, 0, 0, 0);
	func_2(iVar0, 3, 2, 1, 1, 0, 1);
	func_2(iVar0, 3, 3, 1, 0, 0, 0);
	func_2(iVar0, 3, 4, 1, 0, 0, 0);
	func_2(iVar0, 3, 5, 1, 0, 0, 0);
	func_2(iVar0, 3, 6, 1, 0, 0, 0);
	func_2(iVar0, 3, 7, 1, 0, 0, 0);
	func_2(iVar0, 3, 8, 1, 0, 0, 0);
	func_2(iVar0, 3, 9, 1, 0, 0, 0);
	func_2(iVar0, 3, 10, 1, 0, 0, 0);
	func_2(iVar0, 3, 11, 1, 0, 0, 0);
	func_2(iVar0, 3, 12, 1, 0, 0, 0);
	func_2(iVar0, 3, 13, 1, 0, 0, 0);
	func_2(iVar0, 3, 14, 1, 0, 0, 0);
	func_2(iVar0, 3, 15, 1, 0, 0, 0);
	func_2(iVar0, 3, 16, 1, 0, 0, 0);
	func_2(iVar0, 3, 17, 1, 0, 0, 0);
	func_2(iVar0, 3, 18, 1, 0, 0, 0);
	func_2(iVar0, 3, 19, 1, 0, 0, 0);
	func_2(iVar0, 3, 20, 1, 0, 0, 0);
	func_2(iVar0, 3, 21, 1, 0, 0, 0);
	func_2(iVar0, 3, 27, 1, 0, 0, 0);
	func_2(iVar0, 3, 28, 1, 0, 0, 0);
	func_2(iVar0, 3, 29, 1, 0, 0, 0);
	func_2(iVar0, 3, 30, 1, 0, 0, 0);
	func_2(iVar0, 3, 31, 1, 0, 0, 0);
	func_2(iVar0, 3, 32, 1, 0, 0, 0);
	func_2(iVar0, 3, 33, 1, 0, 0, 0);
	func_2(iVar0, 3, 34, 1, 0, 0, 0);
	func_2(iVar0, 3, 35, 1, 0, 0, 0);
	func_2(iVar0, 3, 36, 1, 0, 0, 0);
	func_2(iVar0, 3, 37, 1, 0, 0, 0);
	func_2(iVar0, 3, 38, 1, 0, 0, 0);
	func_2(iVar0, 3, 39, 1, 0, 0, 0);
	func_2(iVar0, 3, 40, 1, 0, 0, 0);
	func_2(iVar0, 3, 41, 1, 0, 0, 0);
	func_2(iVar0, 3, 42, 1, 0, 0, 0);
	func_2(iVar0, 3, 43, 1, 0, 0, 0);
	func_2(iVar0, 3, 44, 1, 0, 0, 0);
	func_2(iVar0, 3, 45, 1, 0, 0, 0);
	func_2(iVar0, 3, 46, 1, 0, 0, 0);
	func_2(iVar0, 3, 47, 1, 0, 0, 0);
	func_2(iVar0, 3, 48, 1, 0, 0, 0);
	func_2(iVar0, 3, 49, 1, 0, 0, 0);
	func_2(iVar0, 3, 50, 1, 0, 0, 0);
	func_2(iVar0, 3, 51, 1, 0, 0, 0);
	func_2(iVar0, 3, 52, 1, 0, 0, 0);
	func_2(iVar0, 3, 53, 1, 0, 0, 0);
	func_2(iVar0, 3, 54, 1, 0, 0, 0);
	func_2(iVar0, 3, 55, 1, 1, 0, 1);
	func_2(iVar0, 3, 56, 1, 0, 0, 0);
	func_2(iVar0, 3, 57, 1, 0, 0, 0);
	func_2(iVar0, 3, 58, 1, 0, 0, 0);
	func_2(iVar0, 3, 59, 1, 0, 0, 0);
	func_2(iVar0, 3, 60, 1, 0, 0, 0);
	func_2(iVar0, 3, 61, 1, 0, 0, 0);
	func_2(iVar0, 3, 62, 1, 0, 0, 0);
	func_2(iVar0, 3, 63, 1, 0, 0, 0);
	func_2(iVar0, 3, 64, 1, 0, 0, 0);
	func_2(iVar0, 3, 65, 1, 1, 0, 1);
	func_2(iVar0, 3, 66, 1, 0, 0, 0);
	func_2(iVar0, 3, 67, 1, 0, 0, 0);
	func_2(iVar0, 3, 68, 1, 0, 0, 0);
	func_2(iVar0, 3, 69, 1, 0, 0, 0);
	func_2(iVar0, 3, 70, 1, 0, 0, 0);
	func_2(iVar0, 3, 71, 1, 0, 0, 0);
	func_2(iVar0, 3, 72, 1, 0, 0, 0);
	func_2(iVar0, 3, 73, 1, 0, 0, 0);
	func_2(iVar0, 3, 74, 1, 0, 0, 0);
	func_2(iVar0, 3, 75, 1, 0, 0, 0);
	func_2(iVar0, 3, 79, 1, 0, 0, 0);
	func_2(iVar0, 3, 80, 1, 0, 0, 0);
	func_2(iVar0, 3, 81, 1, 0, 0, 0);
	func_2(iVar0, 3, 82, 1, 0, 0, 0);
	func_2(iVar0, 3, 83, 1, 0, 0, 0);
	func_2(iVar0, 3, 84, 1, 0, 0, 0);
	func_2(iVar0, 3, 85, 1, 0, 0, 0);
	func_2(iVar0, 3, 86, 1, 0, 0, 0);
	func_2(iVar0, 3, 87, 1, 0, 0, 0);
	func_2(iVar0, 3, 88, 1, 0, 0, 0);
	func_2(iVar0, 3, 89, 1, 0, 0, 0);
	func_2(iVar0, 3, 90, 1, 0, 0, 0);
	func_2(iVar0, 3, 91, 1, 0, 0, 0);
	func_2(iVar0, 3, 92, 1, 0, 0, 0);
	func_2(iVar0, 3, 93, 1, 0, 0, 0);
	func_2(iVar0, 3, 94, 1, 0, 0, 0);
	func_2(iVar0, 3, 95, 1, 0, 0, 0);
	func_2(iVar0, 3, 96, 1, 1, 0, 1);
	func_2(iVar0, 3, 97, 1, 0, 0, 0);
	func_2(iVar0, 3, 99, 1, 0, 0, 0);
	func_2(iVar0, 3, 100, 1, 0, 0, 0);
	func_2(iVar0, 3, 101, 1, 0, 0, 0);
	func_2(iVar0, 3, 102, 1, 0, 0, 0);
	func_2(iVar0, 3, 103, 1, 0, 0, 0);
	func_2(iVar0, 3, 104, 1, 0, 0, 0);
	func_2(iVar0, 3, 105, 1, 0, 0, 0);
	func_2(iVar0, 3, 106, 1, 0, 0, 0);
	func_2(iVar0, 3, 107, 1, 0, 0, 0);
	func_2(iVar0, 3, 108, 1, 0, 0, 0);
	func_2(iVar0, 3, 109, 1, 0, 0, 0);
	func_2(iVar0, 3, 110, 1, 0, 0, 0);
	func_2(iVar0, 3, 111, 1, 0, 0, 0);
	func_2(iVar0, 3, 112, 1, 0, 0, 0);
	func_2(iVar0, 3, 113, 1, 0, 0, 0);
	func_2(iVar0, 3, 114, 1, 0, 0, 0);
	func_2(iVar0, 3, 115, 1, 0, 0, 0);
	func_2(iVar0, 3, 116, 1, 0, 0, 0);
	func_2(iVar0, 3, 117, 1, 0, 0, 0);
	func_2(iVar0, 3, 118, 1, 0, 0, 0);
	func_2(iVar0, 3, 119, 1, 0, 0, 0);
	func_2(iVar0, 3, 120, 1, 0, 0, 0);
	func_2(iVar0, 3, 121, 1, 0, 0, 0);
	func_2(iVar0, 3, 122, 1, 0, 0, 0);
	func_2(iVar0, 3, 123, 1, 0, 0, 0);
	func_2(iVar0, 3, 125, 1, 0, 0, 0);
	func_2(iVar0, 3, 126, 1, 0, 0, 0);
	func_2(iVar0, 3, 127, 1, 0, 0, 0);
	func_2(iVar0, 3, 128, 1, 0, 0, 0);
	func_2(iVar0, 3, 129, 1, 0, 0, 0);
	func_2(iVar0, 3, 130, 1, 0, 0, 0);
	func_2(iVar0, 3, 131, 1, 0, 0, 0);
	func_2(iVar0, 3, 132, 1, 0, 0, 0);
	func_2(iVar0, 3, 133, 1, 0, 0, 0);
	func_2(iVar0, 3, 134, 1, 0, 0, 0);
	func_2(iVar0, 3, 135, 1, 0, 0, 0);
	func_2(iVar0, 3, 136, 1, 0, 0, 0);
	func_2(iVar0, 3, 137, 1, 0, 0, 0);
	func_2(iVar0, 3, 138, 1, 0, 0, 0);
	func_2(iVar0, 3, 139, 1, 0, 0, 0);
	func_2(iVar0, 3, 140, 1, 0, 0, 0);
	func_2(iVar0, 3, 141, 1, 0, 0, 0);
	func_2(iVar0, 3, 142, 1, 0, 0, 0);
	func_2(iVar0, 3, 143, 1, 0, 0, 0);
	func_2(iVar0, 3, 144, 1, 0, 0, 0);
	func_2(iVar0, 3, 145, 1, 0, 0, 0);
	func_2(iVar0, 3, 146, 1, 0, 0, 0);
	func_2(iVar0, 3, 147, 1, 0, 0, 0);
	func_2(iVar0, 3, 148, 1, 0, 0, 0);
	func_2(iVar0, 3, 149, 1, 0, 0, 0);
	func_2(iVar0, 3, 150, 1, 0, 0, 0);
	func_2(iVar0, 3, 151, 1, 0, 0, 0);
	func_2(iVar0, 3, 152, 1, 0, 0, 0);
	func_2(iVar0, 3, 153, 1, 0, 0, 0);
	func_2(iVar0, 3, 154, 1, 0, 0, 0);
	func_2(iVar0, 3, 155, 1, 0, 0, 0);
	func_2(iVar0, 3, 156, 1, 0, 0, 0);
	func_2(iVar0, 3, 157, 1, 1, 0, 1);
	func_2(iVar0, 3, 158, 1, 0, 0, 0);
	func_2(iVar0, 3, 159, 1, 0, 0, 0);
	func_2(iVar0, 3, 160, 1, 0, 0, 0);
	func_2(iVar0, 3, 161, 1, 0, 0, 0);
	func_2(iVar0, 3, 162, 1, 0, 0, 0);
	func_2(iVar0, 3, 163, 1, 0, 0, 0);
	func_2(iVar0, 3, 164, 1, 0, 0, 0);
	func_2(iVar0, 3, 165, 1, 0, 0, 0);
	func_2(iVar0, 3, 166, 1, 0, 0, 0);
	func_2(iVar0, 3, 167, 1, 0, 0, 0);
	func_2(iVar0, 3, 168, 1, 0, 0, 0);
	func_2(iVar0, 3, 169, 1, 0, 0, 0);
	func_2(iVar0, 3, 170, 1, 0, 0, 0);
	func_2(iVar0, 3, 171, 1, 0, 0, 0);
	func_2(iVar0, 3, 172, 1, 0, 0, 0);
	func_2(iVar0, 3, 173, 1, 0, 0, 0);
	func_2(iVar0, 3, 174, 1, 0, 0, 0);
	func_2(iVar0, 3, 175, 1, 0, 0, 0);
	func_2(iVar0, 3, 176, 1, 0, 0, 0);
	func_2(iVar0, 3, 177, 1, 0, 0, 0);
	func_2(iVar0, 3, 178, 1, 0, 0, 0);
	func_2(iVar0, 3, 179, 1, 0, 0, 0);
	func_2(iVar0, 3, 180, 1, 0, 0, 0);
	func_2(iVar0, 3, 181, 1, 0, 0, 0);
	func_2(iVar0, 3, 182, 1, 0, 0, 0);
	func_2(iVar0, 3, 183, 1, 0, 0, 0);
	func_2(iVar0, 3, 184, 1, 0, 0, 0);
	func_2(iVar0, 3, 185, 1, 0, 0, 0);
	func_2(iVar0, 3, 186, 1, 0, 0, 0);
	func_2(iVar0, 3, 187, 1, 0, 0, 0);
	func_2(iVar0, 3, 188, 1, 0, 0, 0);
	func_2(iVar0, 3, 189, 1, 0, 0, 0);
	func_2(iVar0, 3, 190, 1, 0, 0, 0);
	func_2(iVar0, 3, 191, 1, 0, 0, 0);
	func_2(iVar0, 3, 192, 1, 0, 0, 0);
	func_2(iVar0, 3, 193, 1, 0, 0, 0);
	func_2(iVar0, 3, 194, 1, 0, 0, 0);
	func_2(iVar0, 3, 195, 1, 0, 0, 0);
	func_2(iVar0, 3, 196, 1, 0, 0, 0);
	func_2(iVar0, 3, 197, 1, 0, 0, 0);
	func_2(iVar0, 3, 198, 1, 0, 0, 0);
	func_2(iVar0, 3, 199, 1, 0, 0, 0);
	func_2(iVar0, 3, 200, 1, 0, 0, 0);
	func_2(iVar0, 3, 201, 1, 0, 0, 0);
	func_2(iVar0, 3, 202, 1, 0, 0, 0);
	func_2(iVar0, 3, 203, 1, 0, 0, 0);
	func_2(iVar0, 3, 204, 1, 0, 0, 0);
	func_2(iVar0, 3, 205, 1, 0, 0, 0);
	func_2(iVar0, 3, 206, 1, 0, 0, 0);
	func_2(iVar0, 3, 207, 1, 0, 0, 0);
	func_2(iVar0, 3, 208, 1, 0, 0, 0);
	func_2(iVar0, 3, 209, 1, 0, 0, 0);
	func_2(iVar0, 3, 210, 1, 0, 0, 0);
	func_2(iVar0, 3, 211, 1, 0, 0, 0);
	func_2(iVar0, 3, 212, 1, 0, 0, 0);
	func_2(iVar0, 3, 213, 1, 0, 0, 0);
	func_2(iVar0, 3, 214, 1, 0, 0, 0);
	func_2(iVar0, 3, 215, 1, 0, 0, 0);
	func_2(iVar0, 3, 216, 1, 0, 0, 0);
	func_2(iVar0, 3, 217, 1, 0, 0, 0);
	func_2(iVar0, 3, 218, 1, 0, 0, 0);
	func_2(iVar0, 3, 219, 1, 0, 0, 0);
	func_2(iVar0, 3, 220, 1, 0, 0, 0);
	func_2(iVar0, 3, 221, 1, 0, 0, 0);
	func_2(iVar0, 3, 222, 1, 0, 0, 0);
	func_2(iVar0, 3, 223, 1, 0, 0, 0);
	func_2(iVar0, 3, 224, 1, 0, 0, 0);
	func_2(iVar0, 3, 225, 1, 0, 0, 0);
	func_2(iVar0, 3, 226, 1, 0, 0, 0);
	func_2(iVar0, 3, 227, 1, 0, 0, 0);
	func_2(iVar0, 3, 228, 1, 0, 0, 0);
	func_2(iVar0, 3, 229, 1, 0, 0, 0);
	func_2(iVar0, 3, 230, 1, 0, 0, 0);
	func_2(iVar0, 3, 231, 1, 0, 0, 0);
	func_2(iVar0, 3, 232, 1, 0, 0, 0);
	func_2(iVar0, 3, 233, 1, 0, 0, 0);
	func_2(iVar0, 3, 234, 1, 0, 0, 0);
	func_2(iVar0, 3, 235, 1, 0, 0, 0);
	func_2(iVar0, 3, 236, 1, 0, 0, 0);
	func_2(iVar0, 3, 237, 1, 0, 0, 0);
	func_2(iVar0, 3, 238, 1, 0, 0, 0);
	func_2(iVar0, 3, 239, 1, 0, 0, 0);
	func_2(iVar0, 3, 240, 1, 0, 0, 0);
	func_2(iVar0, 3, 241, 1, 0, 0, 0);
	func_2(iVar0, 4, 0, 1, 1, 0, 1);
	func_2(iVar0, 4, 1, 1, 0, 0, 0);
	func_2(iVar0, 4, 2, 1, 0, 0, 0);
	func_2(iVar0, 4, 3, 1, 0, 0, 0);
	func_2(iVar0, 4, 4, 1, 0, 0, 0);
	func_2(iVar0, 4, 5, 1, 0, 0, 0);
	func_2(iVar0, 4, 6, 1, 0, 0, 0);
	func_2(iVar0, 4, 7, 1, 0, 0, 0);
	func_2(iVar0, 4, 8, 1, 0, 0, 0);
	func_2(iVar0, 4, 9, 1, 0, 0, 0);
	func_2(iVar0, 4, 10, 1, 0, 0, 0);
	func_2(iVar0, 4, 11, 1, 0, 0, 0);
	func_2(iVar0, 4, 12, 1, 0, 0, 0);
	func_2(iVar0, 4, 13, 1, 0, 0, 0);
	func_2(iVar0, 4, 14, 1, 0, 0, 0);
	func_2(iVar0, 4, 15, 1, 0, 0, 0);
	func_2(iVar0, 4, 16, 1, 0, 0, 0);
	func_2(iVar0, 4, 17, 1, 0, 0, 0);
	func_2(iVar0, 4, 18, 1, 0, 0, 0);
	func_2(iVar0, 4, 19, 1, 0, 0, 0);
	func_2(iVar0, 4, 20, 1, 0, 0, 0);
	func_2(iVar0, 4, 21, 1, 0, 0, 0);
	func_2(iVar0, 4, 22, 1, 0, 0, 0);
	func_2(iVar0, 4, 23, 1, 0, 0, 0);
	func_2(iVar0, 4, 24, 1, 0, 0, 0);
	func_2(iVar0, 4, 25, 1, 0, 0, 0);
	func_2(iVar0, 4, 26, 1, 0, 0, 0);
	func_2(iVar0, 4, 27, 1, 0, 0, 0);
	func_2(iVar0, 4, 28, 1, 0, 0, 0);
	func_2(iVar0, 4, 29, 1, 0, 0, 0);
	func_2(iVar0, 4, 30, 1, 0, 0, 0);
	func_2(iVar0, 4, 31, 1, 0, 0, 0);
	func_2(iVar0, 4, 32, 1, 0, 0, 0);
	func_2(iVar0, 4, 33, 1, 0, 0, 0);
	func_2(iVar0, 4, 34, 1, 0, 0, 0);
	func_2(iVar0, 4, 35, 1, 0, 0, 0);
	func_2(iVar0, 4, 36, 1, 0, 0, 0);
	func_2(iVar0, 4, 37, 1, 0, 0, 0);
	func_2(iVar0, 4, 38, 1, 0, 0, 0);
	func_2(iVar0, 4, 39, 1, 0, 0, 0);
	func_2(iVar0, 4, 40, 1, 0, 0, 0);
	func_2(iVar0, 4, 41, 1, 0, 0, 0);
	func_2(iVar0, 4, 42, 1, 0, 0, 0);
	func_2(iVar0, 4, 43, 1, 1, 0, 1);
	func_2(iVar0, 4, 44, 1, 1, 0, 1);
	func_2(iVar0, 4, 45, 1, 0, 0, 0);
	func_2(iVar0, 4, 46, 1, 0, 0, 0);
	func_2(iVar0, 4, 47, 1, 0, 0, 0);
	func_2(iVar0, 4, 48, 1, 0, 0, 0);
	func_2(iVar0, 4, 49, 1, 0, 0, 0);
	func_2(iVar0, 4, 50, 1, 0, 0, 0);
	func_2(iVar0, 4, 51, 1, 0, 0, 0);
	func_2(iVar0, 4, 52, 1, 1, 0, 1);
	func_2(iVar0, 4, 53, 1, 0, 0, 0);
	func_2(iVar0, 4, 54, 1, 0, 0, 0);
	func_2(iVar0, 4, 55, 1, 0, 0, 0);
	func_2(iVar0, 4, 56, 1, 0, 0, 0);
	func_2(iVar0, 4, 57, 1, 0, 0, 0);
	func_2(iVar0, 4, 58, 1, 0, 0, 0);
	func_2(iVar0, 4, 59, 1, 0, 0, 0);
	func_2(iVar0, 4, 60, 1, 0, 0, 0);
	func_2(iVar0, 4, 61, 1, 0, 0, 0);
	func_2(iVar0, 4, 62, 1, 0, 0, 0);
	func_2(iVar0, 4, 63, 1, 0, 0, 0);
	func_2(iVar0, 4, 64, 1, 0, 0, 0);
	func_2(iVar0, 4, 65, 1, 0, 0, 0);
	func_2(iVar0, 4, 66, 1, 0, 0, 0);
	func_2(iVar0, 4, 67, 1, 0, 0, 0);
	func_2(iVar0, 4, 68, 1, 0, 0, 0);
	func_2(iVar0, 4, 69, 1, 0, 0, 0);
	func_2(iVar0, 4, 70, 1, 0, 0, 0);
	func_2(iVar0, 4, 71, 1, 0, 0, 0);
	func_2(iVar0, 4, 72, 1, 0, 0, 0);
	func_2(iVar0, 4, 73, 1, 0, 0, 0);
	func_2(iVar0, 4, 74, 1, 0, 0, 0);
	func_2(iVar0, 4, 75, 1, 0, 0, 0);
	func_2(iVar0, 4, 76, 1, 0, 0, 0);
	func_2(iVar0, 4, 77, 1, 0, 0, 0);
	func_2(iVar0, 4, 78, 1, 0, 0, 0);
	func_2(iVar0, 4, 79, 1, 0, 0, 0);
	func_2(iVar0, 4, 80, 1, 0, 0, 0);
	func_2(iVar0, 4, 81, 1, 1, 0, 1);
	func_2(iVar0, 4, 82, 1, 0, 0, 0);
	func_2(iVar0, 4, 83, 1, 0, 0, 0);
	func_2(iVar0, 4, 84, 1, 0, 0, 0);
	func_2(iVar0, 4, 85, 1, 0, 0, 0);
	func_2(iVar0, 4, 86, 1, 0, 0, 0);
	func_2(iVar0, 4, 91, 1, 1, 0, 1);
	func_2(iVar0, 4, 92, 1, 0, 0, 0);
	func_2(iVar0, 4, 93, 1, 0, 0, 0);
	func_2(iVar0, 4, 94, 1, 1, 0, 1);
	func_2(iVar0, 4, 95, 1, 0, 0, 0);
	func_2(iVar0, 4, 96, 1, 0, 0, 0);
	func_2(iVar0, 6, 0, 1, 1, 0, 1);
	func_2(iVar0, 6, 1, 1, 0, 0, 0);
	func_2(iVar0, 6, 2, 1, 0, 0, 0);
	func_2(iVar0, 6, 3, 1, 0, 0, 0);
	func_2(iVar0, 6, 4, 1, 0, 0, 0);
	func_2(iVar0, 6, 5, 1, 0, 0, 0);
	func_2(iVar0, 6, 6, 1, 0, 0, 0);
	func_2(iVar0, 6, 7, 1, 0, 0, 0);
	func_2(iVar0, 6, 8, 1, 1, 0, 1);
	func_2(iVar0, 6, 9, 1, 0, 0, 0);
	func_2(iVar0, 6, 10, 1, 0, 0, 0);
	func_2(iVar0, 6, 11, 1, 0, 0, 0);
	func_2(iVar0, 6, 12, 1, 1, 0, 1);
	func_2(iVar0, 6, 13, 1, 0, 0, 0);
	func_2(iVar0, 6, 14, 1, 0, 0, 0);
	func_2(iVar0, 6, 15, 0, 0, 0, 0);
	func_2(iVar0, 6, 16, 1, 0, 0, 0);
	func_2(iVar0, 6, 17, 1, 0, 0, 0);
	func_2(iVar0, 6, 18, 1, 0, 0, 0);
	func_2(iVar0, 6, 19, 1, 0, 0, 0);
	func_2(iVar0, 6, 20, 1, 0, 0, 0);
	func_2(iVar0, 6, 21, 1, 0, 0, 0);
	func_2(iVar0, 6, 22, 1, 0, 0, 0);
	func_2(iVar0, 6, 23, 1, 0, 0, 0);
	func_2(iVar0, 6, 24, 1, 0, 0, 0);
	func_2(iVar0, 6, 25, 1, 0, 0, 0);
	func_2(iVar0, 6, 26, 1, 0, 0, 0);
	func_2(iVar0, 6, 27, 1, 0, 0, 0);
	func_2(iVar0, 6, 28, 1, 1, 0, 1);
	func_2(iVar0, 6, 29, 1, 0, 0, 0);
	func_2(iVar0, 6, 30, 1, 0, 0, 0);
	func_2(iVar0, 6, 31, 1, 0, 0, 0);
	func_2(iVar0, 6, 32, 1, 0, 0, 0);
	func_2(iVar0, 6, 33, 1, 0, 0, 0);
	func_2(iVar0, 6, 34, 1, 1, 0, 1);
	func_2(iVar0, 6, 35, 1, 1, 0, 1);
	func_2(iVar0, 6, 36, 1, 0, 0, 0);
	func_2(iVar0, 6, 37, 1, 0, 0, 0);
	func_2(iVar0, 6, 38, 1, 0, 0, 0);
	func_2(iVar0, 6, 39, 1, 0, 0, 0);
	func_2(iVar0, 6, 40, 1, 0, 0, 0);
	func_2(iVar0, 6, 41, 1, 0, 0, 0);
	func_2(iVar0, 6, 42, 1, 0, 0, 0);
	func_2(iVar0, 6, 43, 1, 0, 0, 0);
	func_2(iVar0, 6, 44, 1, 0, 0, 0);
	func_2(iVar0, 6, 45, 1, 0, 0, 0);
	func_2(iVar0, 6, 46, 1, 0, 0, 0);
	func_2(iVar0, 6, 47, 1, 0, 0, 0);
	func_2(iVar0, 6, 48, 1, 0, 0, 0);
	func_2(iVar0, 6, 49, 1, 0, 0, 0);
	func_2(iVar0, 6, 50, 1, 0, 0, 0);
	func_2(iVar0, 6, 51, 1, 0, 0, 0);
	func_2(iVar0, 6, 52, 1, 0, 0, 0);
	func_2(iVar0, 6, 53, 1, 0, 0, 0);
	func_2(iVar0, 6, 54, 1, 0, 0, 0);
	func_2(iVar0, 6, 55, 1, 0, 0, 0);
	func_2(iVar0, 6, 56, 1, 0, 0, 0);
	func_2(iVar0, 6, 57, 1, 0, 0, 0);
	func_2(iVar0, 6, 58, 1, 0, 0, 0);
	func_2(iVar0, 6, 59, 1, 0, 0, 0);
	func_2(iVar0, 6, 60, 1, 0, 0, 0);
	func_2(iVar0, 6, 61, 1, 0, 0, 0);
	func_2(iVar0, 6, 62, 1, 0, 0, 0);
	func_2(iVar0, 6, 63, 1, 0, 0, 0);
	func_2(iVar0, 6, 64, 1, 0, 0, 0);
	func_2(iVar0, 6, 65, 1, 0, 0, 0);
	func_2(iVar0, 6, 66, 1, 0, 0, 0);
	func_2(iVar0, 6, 67, 1, 0, 0, 0);
	func_2(iVar0, 6, 68, 1, 0, 0, 0);
	func_2(iVar0, 6, 69, 1, 0, 0, 0);
	func_2(iVar0, 6, 70, 1, 0, 0, 0);
	func_2(iVar0, 6, 71, 1, 0, 0, 0);
	func_2(iVar0, 6, 72, 1, 0, 0, 0);
	func_2(iVar0, 6, 73, 1, 0, 0, 0);
	func_2(iVar0, 6, 74, 1, 0, 0, 0);
	func_2(iVar0, 6, 75, 1, 0, 0, 0);
	func_2(iVar0, 6, 76, 1, 0, 0, 0);
	func_2(iVar0, 6, 77, 1, 0, 0, 0);
	func_2(iVar0, 6, 78, 1, 0, 0, 0);
	func_2(iVar0, 6, 79, 1, 0, 0, 0);
	func_2(iVar0, 6, 80, 1, 0, 0, 0);
	func_2(iVar0, 6, 81, 1, 0, 0, 0);
	func_2(iVar0, 6, 82, 1, 0, 0, 0);
	func_2(iVar0, 6, 83, 1, 0, 0, 0);
	SYSTEM::WAIT(0);
	func_2(iVar0, 5, 0, 1, 1, 0, 1);
	func_2(iVar0, 5, 1, 1, 0, 0, 0);
	func_2(iVar0, 5, 2, 1, 0, 0, 0);
	func_2(iVar0, 5, 3, 1, 0, 0, 0);
	func_2(iVar0, 5, 4, 1, 0, 0, 0);
	func_2(iVar0, 5, 5, 1, 0, 0, 0);
	func_2(iVar0, 5, 6, 1, 0, 0, 0);
	func_2(iVar0, 8, 0, 1, 1, 0, 1);
	func_2(iVar0, 8, 1, 1, 0, 0, 0);
	func_2(iVar0, 8, 2, 1, 0, 0, 0);
	func_2(iVar0, 8, 3, 1, 0, 0, 0);
	func_2(iVar0, 8, 4, 1, 0, 0, 0);
	func_2(iVar0, 8, 5, 1, 0, 0, 0);
	func_2(iVar0, 8, 6, 1, 0, 0, 0);
	func_2(iVar0, 8, 7, 1, 0, 0, 0);
	func_2(iVar0, 8, 8, 1, 0, 0, 0);
	func_2(iVar0, 8, 9, 1, 0, 0, 0);
	func_2(iVar0, 8, 10, 1, 0, 0, 0);
	func_2(iVar0, 8, 11, 1, 0, 0, 0);
	func_2(iVar0, 8, 12, 1, 0, 0, 0);
	func_2(iVar0, 8, 13, 1, 0, 0, 0);
	func_2(iVar0, 8, 14, 1, 0, 0, 0);
	func_2(iVar0, 8, 15, 1, 1, 0, 1);
	func_2(iVar0, 8, 16, 1, 0, 0, 0);
	func_2(iVar0, 8, 17, 1, 0, 0, 0);
	func_2(iVar0, 9, 0, 1, 1, 0, 1);
	func_2(iVar0, 9, 1, 1, 0, 0, 0);
	func_2(iVar0, 9, 2, 1, 0, 0, 0);
	func_2(iVar0, 9, 3, 1, 0, 0, 0);
	func_2(iVar0, 9, 4, 1, 0, 0, 0);
	func_2(iVar0, 9, 5, 1, 0, 0, 0);
	func_2(iVar0, 9, 6, 1, 0, 0, 0);
	func_2(iVar0, 9, 7, 1, 1, 0, 1);
	func_2(iVar0, 9, 8, 1, 0, 0, 0);
	func_2(iVar0, 9, 9, 1, 0, 0, 0);
	func_2(iVar0, 9, 10, 1, 0, 0, 0);
	func_2(iVar0, 9, 11, 1, 0, 0, 0);
	func_2(iVar0, 9, 12, 1, 0, 0, 0);
	func_2(iVar0, 9, 13, 1, 0, 0, 0);
	func_2(iVar0, 9, 14, 1, 0, 0, 0);
	func_2(iVar0, 9, 15, 1, 0, 0, 0);
	func_2(iVar0, 9, 16, 1, 0, 0, 0);
	func_2(iVar0, 10, 0, 1, 1, 0, 1);
	func_2(iVar0, 10, 1, 1, 0, 0, 0);
	func_2(iVar0, 10, 2, 1, 0, 0, 0);
	func_2(iVar0, 10, 3, 1, 0, 0, 0);
	func_2(iVar0, 10, 4, 1, 0, 0, 0);
	func_2(iVar0, 10, 5, 1, 0, 0, 0);
	func_2(iVar0, 10, 6, 1, 0, 0, 0);
	func_2(iVar0, 10, 7, 1, 0, 0, 0);
	func_2(iVar0, 10, 8, 1, 0, 0, 0);
	func_2(iVar0, 10, 9, 1, 0, 0, 0);
	func_2(iVar0, 10, 10, 1, 0, 0, 0);
	func_2(iVar0, 10, 11, 1, 0, 0, 0);
	func_2(iVar0, 10, 12, 1, 0, 0, 0);
	func_2(iVar0, 10, 13, 1, 0, 0, 0);
	func_2(iVar0, 10, 14, 1, 0, 0, 0);
	func_2(iVar0, 10, 15, 1, 0, 0, 0);
	func_2(iVar0, 10, 16, 1, 0, 0, 0);
	func_2(iVar0, 10, 17, 1, 0, 0, 0);
	func_2(iVar0, 10, 18, 1, 0, 0, 0);
	func_2(iVar0, 10, 19, 1, 0, 0, 0);
	func_2(iVar0, 10, 20, 1, 0, 0, 0);
	func_2(iVar0, 10, 21, 1, 0, 0, 0);
	func_2(iVar0, 10, 22, 1, 0, 0, 0);
	func_2(iVar0, 10, 23, 1, 0, 0, 0);
	func_2(iVar0, 10, 24, 1, 0, 0, 0);
	func_2(iVar0, 10, 25, 1, 0, 0, 0);
	func_2(iVar0, 10, 26, 1, 0, 0, 0);
	func_2(iVar0, 10, 27, 1, 0, 0, 0);
	func_2(iVar0, 10, 28, 1, 0, 0, 0);
	func_2(iVar0, 10, 29, 1, 0, 0, 0);
	func_2(iVar0, 10, 30, 1, 0, 0, 0);
	func_2(iVar0, 10, 31, 1, 0, 0, 0);
	func_2(iVar0, 10, 32, 1, 0, 0, 0);
	func_2(iVar0, 1, 0, 1, 1, 0, 0);
	func_2(iVar0, 1, 1, 1, 1, 0, 0);
	func_2(iVar0, 1, 2, 1, 1, 0, 0);
	func_2(iVar0, 1, 3, 1, 1, 0, 0);
	func_2(iVar0, 1, 5, 1, 1, 0, 0);
	func_2(iVar0, 7, 0, 1, 1, 0, 0);
	func_2(iVar0, 11, 0, 1, 1, 0, 1);
	func_2(iVar0, 12, 0, 1, 1, 0, 1);
	func_2(iVar0, 12, 1, 1, 0, 0, 0);
	func_2(iVar0, 12, 2, 1, 0, 0, 0);
	func_2(iVar0, 12, 3, 1, 0, 0, 0);
	func_2(iVar0, 12, 4, 1, 0, 0, 0);
	func_2(iVar0, 12, 5, 1, 0, 0, 0);
	func_2(iVar0, 12, 6, 1, 0, 0, 0);
	func_2(iVar0, 12, 7, 1, 0, 0, 0);
	func_2(iVar0, 12, 8, 1, 0, 0, 0);
	func_2(iVar0, 12, 9, 1, 0, 0, 0);
	func_2(iVar0, 12, 10, 1, 1, 0, 1);
	func_2(iVar0, 12, 11, 1, 0, 0, 0);
	func_2(iVar0, 12, 12, 1, 0, 0, 0);
	func_2(iVar0, 12, 13, 1, 0, 0, 0);
	func_2(iVar0, 12, 14, 1, 0, 0, 0);
	func_2(iVar0, 12, 15, 1, 0, 0, 0);
	func_2(iVar0, 12, 16, 1, 0, 0, 0);
	func_2(iVar0, 12, 17, 0, 0, 0, 0);
	func_2(iVar0, 12, 18, 0, 0, 0, 0);
	func_2(iVar0, 12, 19, 0, 0, 0, 0);
	func_2(iVar0, 12, 20, 1, 0, 0, 0);
	func_2(iVar0, 12, 21, 1, 1, 0, 1);
	func_2(iVar0, 12, 23, 1, 0, 0, 0);
	func_2(iVar0, 12, 24, 1, 0, 0, 0);
	func_2(iVar0, 12, 25, 1, 0, 0, 0);
	func_2(iVar0, 12, 26, 1, 0, 0, 0);
	func_2(iVar0, 12, 27, 1, 0, 0, 0);
	func_2(iVar0, 12, 28, 1, 0, 0, 0);
	func_2(iVar0, 12, 29, 1, 0, 0, 0);
	func_2(iVar0, 12, 30, 1, 0, 0, 0);
	func_2(iVar0, 12, 31, 1, 0, 0, 0);
	func_2(iVar0, 12, 32, 1, 0, 0, 0);
	func_2(iVar0, 12, 33, 1, 0, 0, 0);
	func_2(iVar0, 12, 34, 1, 0, 0, 0);
	func_2(iVar0, 12, 35, 1, 0, 0, 0);
	func_2(iVar0, 12, 36, 1, 0, 0, 0);
	func_2(iVar0, 12, 37, 1, 0, 0, 0);
	func_2(iVar0, 12, 38, 1, 0, 0, 0);
	func_2(iVar0, 12, 39, 1, 0, 0, 0);
	func_2(iVar0, 12, 40, 1, 0, 0, 0);
	func_2(iVar0, 12, 41, 1, 1, 0, 1);
	func_2(iVar0, 12, 42, 1, 1, 0, 1);
	func_2(iVar0, 12, 43, 1, 1, 0, 1);
	func_2(iVar0, 12, 44, 1, 0, 0, 0);
	func_2(iVar0, 12, 45, 1, 0, 0, 0);
	func_2(iVar0, 12, 46, 1, 1, 0, 1);
	func_2(iVar0, 12, 47, 1, 1, 0, 1);
	func_2(iVar0, 13, 0, 1, 0, 0, 0);
	func_2(iVar0, 13, 1, 1, 0, 0, 0);
	func_2(iVar0, 13, 2, 1, 0, 0, 0);
	func_2(iVar0, 13, 3, 1, 0, 0, 0);
	func_2(iVar0, 13, 4, 1, 0, 0, 0);
	func_2(iVar0, 13, 5, 1, 0, 0, 0);
	func_2(iVar0, 13, 6, 1, 0, 0, 0);
	func_2(iVar0, 13, 7, 1, 1, 0, 1);
	func_2(iVar0, 13, 8, 1, 0, 0, 0);
	func_2(iVar0, 14, 10, 1, 0, 0, 0);
	func_2(iVar0, 14, 11, 1, 0, 0, 0);
	func_2(iVar0, 14, 12, 1, 0, 0, 0);
	func_2(iVar0, 14, 13, 1, 0, 0, 0);
	func_2(iVar0, 14, 14, 1, 0, 0, 0);
	func_2(iVar0, 14, 15, 1, 0, 0, 0);
	func_2(iVar0, 14, 16, 1, 0, 0, 0);
	func_2(iVar0, 14, 17, 1, 0, 0, 0);
	func_2(iVar0, 14, 18, 1, 0, 0, 0);
	func_2(iVar0, 14, 19, 1, 0, 0, 0);
	func_2(iVar0, 14, 20, 1, 0, 0, 0);
	func_2(iVar0, 14, 21, 1, 0, 0, 0);
	func_2(iVar0, 14, 22, 1, 0, 0, 0);
	func_2(iVar0, 14, 23, 1, 0, 0, 0);
	func_2(iVar0, 14, 24, 1, 0, 0, 0);
	func_2(iVar0, 14, 25, 1, 0, 0, 0);
	func_2(iVar0, 14, 26, 1, 0, 0, 0);
	func_2(iVar0, 14, 27, 1, 0, 0, 0);
	func_2(iVar0, 14, 28, 1, 0, 0, 0);
	func_2(iVar0, 14, 29, 1, 0, 0, 0);
	func_2(iVar0, 14, 30, 1, 0, 0, 0);
	func_2(iVar0, 14, 31, 1, 0, 0, 0);
	func_2(iVar0, 14, 32, 1, 0, 0, 0);
	func_2(iVar0, 14, 33, 1, 0, 0, 0);
	func_2(iVar0, 14, 34, 1, 0, 0, 0);
	func_2(iVar0, 14, 35, 1, 0, 0, 0);
	func_2(iVar0, 14, 36, 1, 0, 0, 0);
	func_2(iVar0, 14, 37, 1, 0, 0, 0);
	func_2(iVar0, 14, 38, 1, 0, 0, 0);
	func_2(iVar0, 14, 39, 1, 0, 0, 0);
	func_2(iVar0, 14, 40, 1, 0, 0, 0);
	func_2(iVar0, 14, 41, 1, 0, 0, 0);
	func_2(iVar0, 14, 42, 1, 0, 0, 0);
	func_2(iVar0, 14, 43, 1, 0, 0, 0);
	func_2(iVar0, 14, 44, 1, 0, 0, 0);
	func_2(iVar0, 14, 45, 1, 0, 0, 0);
	func_2(iVar0, 14, 46, 1, 0, 0, 0);
	func_2(iVar0, 14, 47, 0, 0, 0, 0);
	func_2(iVar0, 14, 48, 0, 0, 0, 0);
	func_2(iVar0, 14, 49, 0, 0, 0, 0);
	func_2(iVar0, 14, 50, 0, 0, 0, 0);
	func_2(iVar0, 14, 51, 0, 0, 0, 0);
	func_2(iVar0, 14, 52, 0, 0, 0, 0);
	func_2(iVar0, 14, 53, 0, 0, 0, 0);
	func_2(iVar0, 14, 54, 0, 0, 0, 0);
	func_2(iVar0, 14, 55, 0, 0, 0, 0);
	func_2(iVar0, 14, 56, 0, 0, 0, 0);
	func_2(iVar0, 14, 57, 0, 0, 0, 0);
	func_2(iVar0, 14, 58, 0, 0, 0, 0);
	func_2(iVar0, 14, 59, 0, 0, 0, 0);
	func_2(iVar0, 14, 60, 0, 0, 0, 0);
	func_2(iVar0, 14, 61, 1, 0, 0, 0);
	func_2(iVar0, 14, 62, 1, 0, 0, 0);
	func_2(iVar0, 14, 63, 1, 0, 0, 0);
	func_2(iVar0, 14, 64, 1, 0, 0, 0);
	func_2(iVar0, 14, 65, 1, 0, 0, 0);
	func_2(iVar0, 14, 66, 1, 0, 0, 0);
	func_2(iVar0, 14, 67, 1, 0, 0, 0);
	func_2(iVar0, 14, 68, 1, 0, 0, 0);
	func_2(iVar0, 14, 69, 1, 0, 0, 0);
	func_2(iVar0, 14, 70, 1, 0, 0, 0);
	func_2(iVar0, 14, 71, 1, 0, 0, 0);
	func_2(iVar0, 14, 72, 1, 0, 0, 0);
	func_2(iVar0, 14, 73, 1, 0, 0, 0);
	func_2(iVar0, 14, 74, 1, 0, 0, 0);
	func_2(iVar0, 14, 75, 1, 0, 0, 0);
	func_2(iVar0, 14, 76, 1, 0, 0, 0);
	func_2(iVar0, 14, 77, 1, 0, 0, 0);
	func_2(iVar0, 14, 78, 1, 0, 0, 0);
	func_2(iVar0, 14, 79, 1, 0, 0, 0);
	func_2(iVar0, 14, 80, 1, 0, 0, 0);
	func_2(iVar0, 14, 81, 1, 0, 0, 0);
	func_2(iVar0, 14, 82, 1, 0, 0, 0);
	func_2(iVar0, 14, 83, 1, 0, 0, 0);
	func_2(iVar0, 14, 84, 1, 0, 0, 0);
	func_2(iVar0, 14, 85, 1, 0, 0, 0);
	func_2(iVar0, 14, 86, 1, 0, 0, 0);
	func_2(iVar0, 14, 87, 1, 0, 0, 0);
	func_2(iVar0, 14, 88, 1, 0, 0, 0);
	func_2(iVar0, 14, 89, 1, 0, 0, 0);
	func_2(iVar0, 14, 90, 1, 0, 0, 0);
	func_2(iVar0, 14, 91, 1, 0, 0, 0);
	func_2(iVar0, 14, 92, 1, 0, 0, 0);
	func_2(iVar0, 14, 93, 1, 0, 0, 0);
	func_2(iVar0, 14, 94, 1, 0, 0, 0);
	func_2(iVar0, 14, 95, 1, 0, 0, 0);
	func_2(iVar0, 14, 96, 1, 0, 0, 0);
	func_2(iVar0, 14, 97, 1, 0, 0, 0);
	func_2(iVar0, 14, 98, 1, 0, 0, 0);
	func_2(iVar0, 14, 99, 1, 0, 0, 0);
	func_2(iVar0, 14, 100, 1, 0, 0, 0);
	func_2(iVar0, 14, 101, 1, 0, 0, 0);
	func_2(iVar0, 14, 102, 1, 0, 0, 0);
	func_2(iVar0, 14, 103, 1, 0, 0, 0);
	func_2(iVar0, 14, 104, 1, 0, 0, 0);
	func_2(iVar0, 14, 105, 1, 0, 0, 0);
	func_2(iVar0, 14, 106, 1, 0, 0, 0);
	func_2(iVar0, 14, 107, 1, 0, 0, 0);
	func_2(iVar0, 14, 108, 1, 0, 0, 0);
	func_2(iVar0, 14, 109, 1, 0, 0, 0);
	func_2(iVar0, 14, 113, 1, 0, 0, 0);
	func_2(iVar0, 14, 114, 1, 0, 0, 0);
	func_2(iVar0, 14, 115, 1, 0, 0, 0);
	func_2(iVar0, 14, 116, 1, 0, 0, 0);
	func_2(iVar0, 14, 117, 1, 0, 0, 0);
	func_2(iVar0, 14, 118, 1, 0, 0, 0);
	func_2(iVar0, 14, 119, 1, 0, 0, 0);
	func_2(iVar0, 14, 120, 1, 0, 0, 0);
	func_2(iVar0, 14, 121, 1, 0, 0, 0);
	func_2(iVar0, 14, 122, 1, 0, 0, 0);
	func_2(iVar0, 14, 123, 1, 1, 0, 1);
	func_2(iVar0, 14, 124, 1, 0, 0, 0);
	func_2(iVar0, 14, 125, 1, 0, 0, 0);
	func_2(iVar0, 14, 126, 1, 0, 0, 0);
	func_2(iVar0, 14, 127, 1, 0, 0, 0);
	func_2(iVar0, 14, 128, 1, 0, 0, 0);
	func_2(iVar0, 14, 129, 1, 0, 0, 0);
	func_2(iVar0, 14, 130, 1, 0, 0, 0);
	func_2(iVar0, 14, 131, 1, 0, 0, 0);
	func_2(iVar0, 14, 132, 1, 0, 0, 0);
	func_2(iVar0, 14, 133, 1, 0, 0, 0);
	func_2(iVar0, 14, 134, 1, 0, 0, 0);
	func_2(iVar0, 14, 135, 1, 0, 0, 0);
	func_2(iVar0, 14, 136, 1, 0, 0, 0);
	func_2(iVar0, 14, 137, 1, 0, 0, 0);
	func_2(iVar0, 14, 138, 1, 0, 0, 0);
	func_2(iVar0, 14, 139, 1, 0, 0, 0);
	func_2(iVar0, 14, 140, 1, 0, 0, 0);
	func_2(iVar0, 14, 141, 1, 0, 0, 0);
	func_2(iVar0, 14, 142, 1, 0, 0, 0);
	func_2(iVar0, 14, 143, 1, 0, 0, 0);
	func_2(iVar0, 14, 144, 1, 0, 0, 0);
	func_2(iVar0, 14, 145, 1, 0, 0, 0);
	func_2(iVar0, 14, 146, 1, 0, 0, 0);
	func_2(iVar0, 14, 147, 1, 0, 0, 0);
	func_2(iVar0, 14, 148, 1, 0, 0, 0);
	func_2(iVar0, 14, 149, 1, 0, 0, 0);
	func_2(iVar0, 14, 150, 1, 0, 0, 0);
	func_2(iVar0, 14, 151, 1, 0, 0, 0);
	func_2(iVar0, 14, 152, 1, 0, 0, 0);
	func_2(iVar0, 14, 154, 1, 1, 0, 1);
	SYSTEM::WAIT(0);
	iVar0 = __LIB_0__::func_42(1);
	func_2(iVar0, 13, 31, 1, 1, 0, 1);
	func_2(iVar0, 14, 0, 1, 1, 0, 1);
	func_2(iVar0, 14, 1, 1, 1, 0, 1);
	func_2(iVar0, 14, 2, 1, 1, 0, 1);
	func_2(iVar0, 14, 3, 1, 1, 0, 1);
	func_2(iVar0, 14, 4, 1, 1, 0, 1);
	func_2(iVar0, 14, 5, 1, 1, 0, 1);
	func_2(iVar0, 14, 6, 1, 1, 0, 1);
	func_2(iVar0, 14, 7, 1, 1, 0, 1);
	func_2(iVar0, 14, 8, 1, 1, 0, 1);
	func_2(iVar0, 0, 0, 1, 1, 0, 0);
	func_2(iVar0, 0, 1, 1, 1, 0, 0);
	func_2(iVar0, 0, 2, 1, 1, 0, 0);
	func_2(iVar0, 0, 3, 1, 1, 0, 0);
	func_2(iVar0, 0, 4, 1, 1, 0, 0);
	func_2(iVar0, 0, 5, 1, 1, 0, 0);
	func_2(iVar0, 0, 6, 1, 1, 0, 0);
	func_2(iVar0, 0, 7, 1, 1, 0, 0);
	func_2(iVar0, 0, 8, 1, 1, 0, 0);
	func_2(iVar0, 0, 9, 1, 1, 0, 0);
	func_2(iVar0, 2, 0, 1, 1, 0, 0);
	func_2(iVar0, 2, 1, 1, 1, 0, 0);
	func_2(iVar0, 2, 2, 1, 1, 0, 0);
	func_2(iVar0, 2, 3, 1, 1, 0, 0);
	func_2(iVar0, 2, 4, 1, 1, 0, 0);
	func_2(iVar0, 2, 5, 1, 1, 0, 0);
	func_2(iVar0, 2, 6, 1, 1, 0, 0);
	func_2(iVar0, 2, 7, 1, 1, 0, 0);
	func_2(iVar0, 2, 8, 1, 1, 0, 0);
	func_2(iVar0, 2, 9, 1, 1, 0, 0);
	func_2(iVar0, 2, 10, 1, 1, 0, 0);
	func_2(iVar0, 2, 11, 1, 1, 0, 0);
	func_2(iVar0, 2, 12, 1, 1, 0, 0);
	func_2(iVar0, 2, 13, 1, 1, 0, 0);
	func_2(iVar0, 2, 14, 1, 1, 0, 0);
	func_2(iVar0, 2, 15, 1, 1, 0, 0);
	func_2(iVar0, 2, 16, 1, 1, 0, 0);
	func_2(iVar0, 2, 18, 1, 1, 0, 0);
	func_2(iVar0, 2, 19, 1, 1, 0, 0);
	func_2(iVar0, 2, 20, 1, 1, 0, 0);
	func_2(iVar0, 3, 0, 1, 1, 0, 1);
	func_2(iVar0, 3, 1, 1, 1, 0, 1);
	func_2(iVar0, 3, 2, 1, 0, 0, 0);
	func_2(iVar0, 3, 3, 1, 0, 0, 0);
	func_2(iVar0, 3, 4, 1, 0, 0, 0);
	func_2(iVar0, 3, 5, 1, 0, 0, 0);
	func_2(iVar0, 3, 6, 1, 0, 0, 0);
	func_2(iVar0, 3, 7, 1, 0, 0, 0);
	func_2(iVar0, 3, 8, 1, 0, 0, 0);
	func_2(iVar0, 3, 9, 1, 0, 0, 0);
	func_2(iVar0, 3, 10, 1, 0, 0, 0);
	func_2(iVar0, 3, 11, 1, 0, 0, 0);
	func_2(iVar0, 3, 12, 1, 0, 0, 0);
	func_2(iVar0, 3, 13, 1, 0, 0, 0);
	func_2(iVar0, 3, 14, 1, 0, 0, 0);
	func_2(iVar0, 3, 15, 1, 0, 0, 0);
	func_2(iVar0, 3, 16, 1, 0, 0, 0);
	func_2(iVar0, 3, 17, 1, 0, 0, 0);
	func_2(iVar0, 3, 18, 1, 0, 0, 0);
	func_2(iVar0, 3, 19, 1, 0, 0, 0);
	func_2(iVar0, 3, 20, 1, 0, 0, 0);
	func_2(iVar0, 3, 21, 1, 0, 0, 0);
	func_2(iVar0, 3, 22, 1, 0, 0, 0);
	func_2(iVar0, 3, 23, 1, 0, 0, 0);
	func_2(iVar0, 3, 24, 1, 1, 0, 1);
	func_2(iVar0, 3, 25, 1, 1, 0, 1);
	func_2(iVar0, 3, 26, 1, 0, 0, 0);
	func_2(iVar0, 3, 27, 1, 0, 0, 0);
	func_2(iVar0, 3, 28, 1, 0, 0, 0);
	func_2(iVar0, 3, 29, 1, 0, 0, 0);
	func_2(iVar0, 3, 30, 1, 0, 0, 0);
	func_2(iVar0, 3, 31, 1, 0, 0, 0);
	func_2(iVar0, 3, 32, 1, 0, 0, 0);
	func_2(iVar0, 3, 33, 1, 0, 0, 0);
	func_2(iVar0, 3, 34, 1, 0, 0, 0);
	func_2(iVar0, 3, 35, 1, 0, 0, 0);
	func_2(iVar0, 3, 36, 1, 0, 0, 0);
	func_2(iVar0, 3, 37, 1, 0, 0, 0);
	func_2(iVar0, 3, 38, 1, 0, 0, 0);
	func_2(iVar0, 3, 39, 1, 0, 0, 0);
	func_2(iVar0, 3, 40, 1, 0, 0, 0);
	func_2(iVar0, 3, 41, 1, 0, 0, 0);
	func_2(iVar0, 3, 42, 1, 0, 0, 0);
	func_2(iVar0, 3, 43, 1, 0, 0, 0);
	func_2(iVar0, 3, 44, 1, 0, 0, 0);
	func_2(iVar0, 3, 45, 1, 0, 0, 0);
	func_2(iVar0, 3, 46, 1, 0, 0, 0);
	func_2(iVar0, 3, 47, 1, 0, 0, 0);
	func_2(iVar0, 3, 48, 1, 0, 0, 0);
	func_2(iVar0, 3, 49, 1, 0, 0, 0);
	func_2(iVar0, 3, 50, 1, 0, 0, 0);
	func_2(iVar0, 3, 51, 1, 0, 0, 0);
	func_2(iVar0, 3, 52, 1, 0, 0, 0);
	func_2(iVar0, 3, 53, 1, 0, 0, 0);
	func_2(iVar0, 3, 54, 1, 0, 0, 0);
	func_2(iVar0, 3, 55, 1, 0, 0, 0);
	func_2(iVar0, 3, 56, 1, 0, 0, 0);
	func_2(iVar0, 3, 57, 1, 0, 0, 0);
	func_2(iVar0, 3, 58, 1, 0, 0, 0);
	func_2(iVar0, 3, 59, 1, 0, 0, 0);
	func_2(iVar0, 3, 60, 1, 0, 0, 0);
	func_2(iVar0, 3, 61, 1, 0, 0, 0);
	func_2(iVar0, 3, 62, 1, 0, 0, 0);
	func_2(iVar0, 3, 63, 1, 0, 0, 0);
	func_2(iVar0, 3, 64, 1, 0, 0, 0);
	func_2(iVar0, 3, 65, 1, 0, 0, 0);
	func_2(iVar0, 3, 66, 1, 0, 0, 0);
	func_2(iVar0, 3, 67, 1, 0, 0, 0);
	func_2(iVar0, 3, 68, 1, 0, 0, 0);
	func_2(iVar0, 3, 69, 1, 0, 0, 0);
	func_2(iVar0, 3, 70, 1, 0, 0, 0);
	func_2(iVar0, 3, 71, 1, 0, 0, 0);
	func_2(iVar0, 3, 72, 1, 0, 0, 0);
	func_2(iVar0, 3, 73, 1, 1, 0, 1);
	func_2(iVar0, 3, 74, 1, 1, 0, 1);
	func_2(iVar0, 3, 75, 1, 1, 0, 1);
	func_2(iVar0, 3, 76, 1, 1, 0, 1);
	func_2(iVar0, 3, 77, 1, 0, 0, 0);
	func_2(iVar0, 3, 78, 1, 0, 0, 0);
	func_2(iVar0, 3, 79, 1, 0, 0, 0);
	func_2(iVar0, 3, 80, 1, 0, 0, 0);
	func_2(iVar0, 3, 81, 1, 0, 0, 0);
	func_2(iVar0, 3, 82, 1, 0, 0, 0);
	func_2(iVar0, 3, 83, 1, 0, 0, 0);
	func_2(iVar0, 3, 84, 1, 0, 0, 0);
	func_2(iVar0, 3, 85, 1, 0, 0, 0);
	func_2(iVar0, 3, 86, 1, 0, 0, 0);
	func_2(iVar0, 3, 87, 1, 0, 0, 0);
	func_2(iVar0, 3, 88, 1, 0, 0, 0);
	func_2(iVar0, 3, 89, 1, 0, 0, 0);
	func_2(iVar0, 3, 90, 1, 0, 0, 0);
	func_2(iVar0, 3, 91, 1, 1, 0, 1);
	func_2(iVar0, 3, 92, 1, 0, 0, 0);
	func_2(iVar0, 3, 93, 1, 1, 0, 1);
	func_2(iVar0, 3, 94, 1, 0, 0, 0);
	func_2(iVar0, 3, 95, 1, 0, 0, 0);
	func_2(iVar0, 3, 96, 1, 0, 0, 0);
	func_2(iVar0, 3, 97, 1, 0, 0, 0);
	func_2(iVar0, 3, 98, 1, 0, 0, 0);
	func_2(iVar0, 3, 99, 1, 0, 0, 0);
	func_2(iVar0, 3, 100, 1, 0, 0, 0);
	func_2(iVar0, 3, 101, 1, 0, 0, 0);
	func_2(iVar0, 3, 102, 1, 0, 0, 0);
	func_2(iVar0, 3, 103, 1, 0, 0, 0);
	func_2(iVar0, 3, 104, 1, 0, 0, 0);
	func_2(iVar0, 3, 105, 1, 0, 0, 0);
	func_2(iVar0, 3, 106, 1, 0, 0, 0);
	func_2(iVar0, 3, 107, 1, 0, 0, 0);
	func_2(iVar0, 3, 108, 1, 0, 0, 0);
	func_2(iVar0, 3, 109, 1, 0, 0, 0);
	func_2(iVar0, 3, 110, 1, 0, 0, 0);
	func_2(iVar0, 3, 111, 1, 0, 0, 0);
	func_2(iVar0, 3, 112, 1, 0, 0, 0);
	func_2(iVar0, 3, 113, 1, 0, 0, 0);
	func_2(iVar0, 3, 114, 1, 0, 0, 0);
	func_2(iVar0, 3, 115, 1, 0, 0, 0);
	func_2(iVar0, 3, 116, 1, 0, 0, 0);
	func_2(iVar0, 3, 117, 1, 0, 0, 0);
	func_2(iVar0, 3, 118, 1, 0, 0, 0);
	func_2(iVar0, 3, 119, 1, 0, 0, 0);
	func_2(iVar0, 3, 120, 1, 0, 0, 0);
	func_2(iVar0, 3, 121, 1, 0, 0, 0);
	func_2(iVar0, 3, 122, 1, 0, 0, 0);
	func_2(iVar0, 3, 123, 1, 1, 0, 1);
	func_2(iVar0, 3, 124, 1, 1, 0, 1);
	func_2(iVar0, 3, 125, 1, 1, 0, 1);
	func_2(iVar0, 3, 126, 1, 0, 0, 0);
	func_2(iVar0, 3, 127, 1, 0, 0, 0);
	func_2(iVar0, 3, 128, 1, 0, 0, 0);
	func_2(iVar0, 3, 129, 1, 0, 0, 0);
	func_2(iVar0, 3, 130, 1, 0, 0, 0);
	func_2(iVar0, 3, 131, 1, 0, 0, 0);
	func_2(iVar0, 3, 132, 1, 0, 0, 0);
	func_2(iVar0, 3, 134, 1, 0, 0, 0);
	func_2(iVar0, 3, 136, 1, 0, 0, 0);
	func_2(iVar0, 3, 137, 1, 0, 0, 0);
	func_2(iVar0, 3, 138, 1, 0, 0, 0);
	func_2(iVar0, 3, 139, 1, 0, 0, 0);
	func_2(iVar0, 3, 140, 1, 0, 0, 0);
	func_2(iVar0, 3, 141, 1, 0, 0, 0);
	func_2(iVar0, 3, 142, 1, 0, 0, 0);
	func_2(iVar0, 3, 143, 1, 0, 0, 0);
	func_2(iVar0, 3, 144, 1, 0, 0, 0);
	func_2(iVar0, 3, 145, 1, 0, 0, 0);
	func_2(iVar0, 3, 146, 1, 0, 0, 0);
	func_2(iVar0, 3, 147, 1, 0, 0, 0);
	func_2(iVar0, 3, 148, 1, 0, 0, 0);
	func_2(iVar0, 3, 149, 1, 0, 0, 0);
	func_2(iVar0, 3, 150, 1, 0, 0, 0);
	func_2(iVar0, 3, 151, 1, 0, 0, 0);
	func_2(iVar0, 3, 152, 1, 0, 0, 0);
	func_2(iVar0, 3, 153, 1, 0, 0, 0);
	func_2(iVar0, 3, 154, 1, 0, 0, 0);
	func_2(iVar0, 3, 155, 1, 0, 0, 0);
	func_2(iVar0, 3, 156, 1, 0, 0, 0);
	func_2(iVar0, 3, 157, 1, 0, 0, 0);
	func_2(iVar0, 3, 158, 1, 0, 0, 0);
	func_2(iVar0, 3, 159, 1, 0, 0, 0);
	func_2(iVar0, 3, 160, 1, 0, 0, 0);
	func_2(iVar0, 3, 161, 1, 0, 0, 0);
	func_2(iVar0, 3, 162, 1, 1, 0, 1);
	func_2(iVar0, 3, 163, 1, 0, 0, 0);
	func_2(iVar0, 3, 164, 1, 0, 0, 0);
	func_2(iVar0, 3, 165, 1, 0, 0, 0);
	func_2(iVar0, 3, 166, 1, 0, 0, 0);
	func_2(iVar0, 3, 167, 1, 0, 0, 0);
	func_2(iVar0, 3, 168, 1, 0, 0, 0);
	func_2(iVar0, 3, 169, 1, 0, 0, 0);
	func_2(iVar0, 3, 170, 1, 0, 0, 0);
	func_2(iVar0, 3, 171, 1, 0, 0, 0);
	func_2(iVar0, 3, 172, 1, 0, 0, 0);
	func_2(iVar0, 3, 173, 1, 0, 0, 0);
	func_2(iVar0, 3, 174, 1, 0, 0, 0);
	func_2(iVar0, 3, 175, 1, 0, 0, 0);
	func_2(iVar0, 3, 176, 1, 0, 0, 0);
	func_2(iVar0, 3, 177, 1, 0, 0, 0);
	func_2(iVar0, 3, 178, 1, 0, 0, 0);
	func_2(iVar0, 3, 179, 1, 0, 0, 0);
	func_2(iVar0, 3, 180, 1, 0, 0, 0);
	func_2(iVar0, 3, 181, 1, 0, 0, 0);
	func_2(iVar0, 3, 182, 1, 0, 0, 0);
	func_2(iVar0, 3, 183, 1, 0, 0, 0);
	func_2(iVar0, 3, 184, 1, 0, 0, 0);
	func_2(iVar0, 3, 185, 1, 0, 0, 0);
	func_2(iVar0, 3, 186, 1, 0, 0, 0);
	func_2(iVar0, 3, 187, 1, 0, 0, 0);
	func_2(iVar0, 3, 188, 1, 0, 0, 0);
	func_2(iVar0, 3, 189, 1, 0, 0, 0);
	func_2(iVar0, 3, 190, 1, 0, 0, 0);
	func_2(iVar0, 3, 191, 1, 0, 0, 0);
	func_2(iVar0, 3, 192, 1, 0, 0, 0);
	func_2(iVar0, 3, 193, 1, 0, 0, 0);
	func_2(iVar0, 3, 194, 1, 0, 0, 0);
	func_2(iVar0, 3, 195, 1, 0, 0, 0);
	func_2(iVar0, 3, 196, 1, 0, 0, 0);
	func_2(iVar0, 3, 197, 1, 0, 0, 0);
	func_2(iVar0, 3, 198, 1, 0, 0, 0);
	func_2(iVar0, 3, 199, 1, 0, 0, 0);
	func_2(iVar0, 3, 200, 1, 0, 0, 0);
	func_2(iVar0, 3, 201, 1, 0, 0, 0);
	func_2(iVar0, 3, 202, 1, 0, 0, 0);
	func_2(iVar0, 3, 203, 1, 0, 0, 0);
	func_2(iVar0, 3, 204, 1, 0, 0, 0);
	func_2(iVar0, 3, 205, 1, 0, 0, 0);
	func_2(iVar0, 3, 206, 1, 0, 0, 0);
	func_2(iVar0, 3, 207, 1, 0, 0, 0);
	func_2(iVar0, 3, 208, 1, 0, 0, 0);
	func_2(iVar0, 3, 209, 1, 0, 0, 0);
	func_2(iVar0, 3, 210, 1, 0, 0, 0);
	func_2(iVar0, 3, 211, 1, 0, 0, 0);
	func_2(iVar0, 3, 212, 1, 0, 0, 0);
	func_2(iVar0, 3, 213, 1, 0, 0, 0);
	func_2(iVar0, 3, 214, 1, 0, 0, 0);
	func_2(iVar0, 3, 215, 1, 0, 0, 0);
	func_2(iVar0, 3, 216, 1, 0, 0, 0);
	func_2(iVar0, 3, 217, 1, 0, 0, 0);
	func_2(iVar0, 3, 218, 1, 0, 0, 0);
	func_2(iVar0, 3, 219, 1, 0, 0, 0);
	func_2(iVar0, 3, 220, 1, 0, 0, 0);
	func_2(iVar0, 3, 221, 1, 0, 0, 0);
	func_2(iVar0, 3, 222, 1, 0, 0, 0);
	func_2(iVar0, 3, 223, 1, 0, 0, 0);
	func_2(iVar0, 3, 224, 1, 0, 0, 0);
	func_2(iVar0, 3, 225, 1, 0, 0, 0);
	func_2(iVar0, 3, 226, 1, 0, 0, 0);
	func_2(iVar0, 3, 227, 1, 0, 0, 0);
	func_2(iVar0, 3, 228, 1, 0, 0, 0);
	func_2(iVar0, 3, 229, 1, 0, 0, 0);
	func_2(iVar0, 3, 230, 1, 0, 0, 0);
	func_2(iVar0, 3, 231, 1, 0, 0, 0);
	func_2(iVar0, 3, 232, 1, 0, 0, 0);
	func_2(iVar0, 3, 233, 1, 0, 0, 0);
	func_2(iVar0, 3, 234, 1, 0, 0, 0);
	func_2(iVar0, 3, 235, 1, 0, 0, 0);
	func_2(iVar0, 3, 236, 1, 0, 0, 0);
	func_2(iVar0, 3, 237, 1, 0, 0, 0);
	func_2(iVar0, 3, 238, 1, 0, 0, 0);
	func_2(iVar0, 3, 239, 1, 0, 0, 0);
	func_2(iVar0, 3, 240, 1, 0, 0, 0);
	func_2(iVar0, 3, 241, 1, 0, 0, 0);
	func_2(iVar0, 3, 242, 1, 0, 0, 0);
	func_2(iVar0, 3, 243, 1, 0, 0, 0);
	func_2(iVar0, 3, 244, 1, 0, 0, 0);
	func_2(iVar0, 3, 245, 1, 0, 0, 0);
	func_2(iVar0, 3, 246, 1, 0, 0, 0);
	func_2(iVar0, 3, 247, 1, 0, 0, 0);
	func_2(iVar0, 3, 248, 1, 0, 0, 0);
	func_2(iVar0, 3, 249, 1, 0, 0, 0);
	func_2(iVar0, 3, 250, 1, 0, 0, 0);
	func_2(iVar0, 3, 251, 1, 0, 0, 0);
	func_2(iVar0, 3, 252, 1, 0, 0, 0);
	func_2(iVar0, 3, 253, 1, 0, 0, 0);
	func_2(iVar0, 3, 254, 1, 0, 0, 0);
	func_2(iVar0, 3, 255, 1, 0, 0, 0);
	func_2(iVar0, 3, 256, 1, 0, 0, 0);
	func_2(iVar0, 3, 257, 1, 0, 0, 0);
	func_2(iVar0, 3, 258, 1, 0, 0, 0);
	func_2(iVar0, 3, 259, 1, 0, 0, 0);
	func_2(iVar0, 3, 260, 1, 1, 0, 1);
	func_2(iVar0, 3, 261, 1, 0, 0, 0);
	func_2(iVar0, 3, 262, 1, 0, 0, 0);
	func_2(iVar0, 3, 263, 1, 0, 0, 0);
	func_2(iVar0, 3, 264, 1, 0, 0, 0);
	func_2(iVar0, 3, 265, 1, 0, 0, 0);
	func_2(iVar0, 3, 266, 1, 0, 0, 0);
	func_2(iVar0, 3, 267, 1, 0, 0, 0);
	func_2(iVar0, 3, 268, 1, 0, 0, 0);
	func_2(iVar0, 3, 269, 1, 0, 0, 0);
	func_2(iVar0, 3, 270, 1, 0, 0, 0);
	func_2(iVar0, 3, 271, 1, 0, 0, 0);
	func_2(iVar0, 3, 272, 1, 0, 0, 0);
	func_2(iVar0, 3, 273, 1, 0, 0, 0);
	func_2(iVar0, 3, 274, 1, 0, 0, 0);
	func_2(iVar0, 3, 275, 1, 0, 0, 0);
	func_2(iVar0, 3, 276, 1, 0, 0, 0);
	func_2(iVar0, 3, 277, 1, 0, 0, 0);
	func_2(iVar0, 3, 278, 1, 0, 0, 0);
	func_2(iVar0, 3, 279, 1, 0, 0, 0);
	func_2(iVar0, 3, 280, 1, 0, 0, 0);
	func_2(iVar0, 3, 281, 1, 0, 0, 0);
	func_2(iVar0, 3, 282, 1, 0, 0, 0);
	func_2(iVar0, 3, 283, 1, 0, 0, 0);
	func_2(iVar0, 3, 284, 1, 0, 0, 0);
	func_2(iVar0, 3, 285, 1, 0, 0, 0);
	func_2(iVar0, 3, 286, 1, 0, 0, 0);
	func_2(iVar0, 3, 287, 1, 0, 0, 0);
	func_2(iVar0, 3, 288, 1, 0, 0, 0);
	func_2(iVar0, 3, 289, 1, 0, 0, 0);
	func_2(iVar0, 3, 290, 1, 0, 0, 0);
	func_2(iVar0, 3, 291, 1, 0, 0, 0);
	func_2(iVar0, 3, 292, 1, 0, 0, 0);
	func_2(iVar0, 3, 293, 1, 0, 0, 0);
	func_2(iVar0, 3, 294, 1, 0, 0, 0);
	func_2(iVar0, 3, 295, 1, 0, 0, 0);
	func_2(iVar0, 3, 296, 1, 0, 0, 0);
	func_2(iVar0, 3, 297, 1, 0, 0, 0);
	func_2(iVar0, 3, 298, 1, 0, 0, 0);
	func_2(iVar0, 3, 299, 1, 0, 0, 0);
	func_2(iVar0, 3, 300, 1, 0, 0, 0);
	func_2(iVar0, 3, 301, 1, 0, 0, 0);
	func_2(iVar0, 3, 302, 1, 0, 0, 0);
	func_2(iVar0, 3, 303, 1, 0, 0, 0);
	func_2(iVar0, 3, 304, 1, 0, 0, 0);
	func_2(iVar0, 3, 305, 1, 0, 0, 0);
	func_2(iVar0, 3, 306, 1, 0, 0, 0);
	func_2(iVar0, 3, 307, 1, 0, 0, 0);
	func_2(iVar0, 3, 308, 1, 0, 0, 0);
	func_2(iVar0, 3, 309, 1, 0, 0, 0);
	func_2(iVar0, 3, 310, 1, 0, 0, 0);
	func_2(iVar0, 3, 311, 1, 0, 0, 0);
	func_2(iVar0, 3, 312, 1, 0, 0, 0);
	func_2(iVar0, 3, 313, 1, 0, 0, 0);
	func_2(iVar0, 3, 314, 1, 1, 0, 1);
	func_2(iVar0, 3, 315, 1, 1, 0, 1);
	func_2(iVar0, 3, 316, 1, 0, 0, 0);
	func_2(iVar0, 3, 317, 1, 0, 0, 0);
	func_2(iVar0, 4, 0, 1, 1, 0, 1);
	func_2(iVar0, 4, 1, 1, 0, 0, 0);
	func_2(iVar0, 4, 2, 1, 0, 0, 0);
	func_2(iVar0, 4, 3, 1, 0, 0, 0);
	func_2(iVar0, 4, 4, 1, 0, 0, 0);
	func_2(iVar0, 4, 5, 1, 0, 0, 0);
	func_2(iVar0, 4, 6, 1, 0, 0, 0);
	func_2(iVar0, 4, 7, 1, 0, 0, 0);
	func_2(iVar0, 4, 8, 1, 0, 0, 0);
	func_2(iVar0, 4, 9, 1, 0, 0, 0);
	func_2(iVar0, 4, 10, 1, 0, 0, 0);
	func_2(iVar0, 4, 11, 1, 0, 0, 0);
	func_2(iVar0, 4, 12, 1, 0, 0, 0);
	func_2(iVar0, 4, 13, 1, 0, 0, 0);
	func_2(iVar0, 4, 14, 1, 0, 0, 0);
	func_2(iVar0, 4, 15, 1, 0, 0, 0);
	func_2(iVar0, 4, 16, 1, 0, 0, 0);
	func_2(iVar0, 4, 17, 1, 0, 0, 0);
	func_2(iVar0, 4, 18, 1, 0, 0, 0);
	func_2(iVar0, 4, 19, 1, 0, 0, 0);
	func_2(iVar0, 4, 20, 1, 0, 0, 0);
	func_2(iVar0, 4, 21, 1, 0, 0, 0);
	func_2(iVar0, 4, 22, 1, 0, 0, 0);
	func_2(iVar0, 4, 23, 1, 0, 0, 0);
	func_2(iVar0, 4, 24, 1, 1, 0, 1);
	func_2(iVar0, 4, 25, 1, 0, 0, 0);
	func_2(iVar0, 4, 26, 1, 0, 0, 0);
	func_2(iVar0, 4, 27, 1, 0, 0, 0);
	func_2(iVar0, 4, 28, 1, 0, 0, 0);
	func_2(iVar0, 4, 29, 1, 0, 0, 0);
	func_2(iVar0, 4, 30, 1, 0, 0, 0);
	func_2(iVar0, 4, 31, 0, 0, 0, 0);
	func_2(iVar0, 4, 32, 1, 0, 0, 0);
	func_2(iVar0, 4, 33, 1, 0, 0, 0);
	func_2(iVar0, 4, 34, 1, 0, 0, 0);
	func_2(iVar0, 4, 35, 1, 0, 0, 0);
	func_2(iVar0, 4, 36, 1, 0, 0, 0);
	func_2(iVar0, 4, 37, 1, 0, 0, 0);
	func_2(iVar0, 4, 38, 1, 0, 0, 0);
	func_2(iVar0, 4, 39, 0, 0, 0, 0);
	func_2(iVar0, 4, 40, 1, 1, 0, 1);
	func_2(iVar0, 4, 41, 1, 0, 0, 0);
	func_2(iVar0, 4, 42, 1, 0, 0, 0);
	func_2(iVar0, 4, 43, 1, 0, 0, 0);
	func_2(iVar0, 4, 44, 1, 0, 0, 0);
	func_2(iVar0, 4, 45, 1, 0, 0, 0);
	func_2(iVar0, 4, 46, 1, 0, 0, 0);
	func_2(iVar0, 4, 47, 1, 0, 0, 0);
	func_2(iVar0, 4, 48, 1, 0, 0, 0);
	func_2(iVar0, 4, 49, 1, 0, 0, 0);
	func_2(iVar0, 4, 50, 1, 0, 0, 0);
	func_2(iVar0, 4, 51, 1, 0, 0, 0);
	func_2(iVar0, 4, 52, 1, 0, 0, 0);
	func_2(iVar0, 4, 54, 1, 0, 0, 0);
	func_2(iVar0, 4, 55, 1, 0, 0, 0);
	func_2(iVar0, 4, 56, 1, 0, 0, 0);
	func_2(iVar0, 4, 57, 1, 0, 0, 0);
	func_2(iVar0, 4, 58, 1, 0, 0, 0);
	func_2(iVar0, 4, 59, 1, 0, 0, 0);
	func_2(iVar0, 4, 60, 1, 0, 0, 0);
	func_2(iVar0, 4, 61, 1, 0, 0, 0);
	func_2(iVar0, 4, 62, 1, 0, 0, 0);
	func_2(iVar0, 4, 63, 1, 0, 0, 0);
	func_2(iVar0, 4, 64, 1, 0, 0, 0);
	func_2(iVar0, 4, 65, 1, 0, 0, 0);
	func_2(iVar0, 4, 66, 1, 0, 0, 0);
	func_2(iVar0, 4, 67, 1, 0, 0, 0);
	func_2(iVar0, 4, 68, 1, 0, 0, 0);
	func_2(iVar0, 4, 69, 1, 0, 0, 0);
	func_2(iVar0, 4, 70, 1, 0, 0, 0);
	func_2(iVar0, 4, 71, 1, 0, 0, 0);
	func_2(iVar0, 4, 72, 1, 1, 0, 1);
	func_2(iVar0, 4, 73, 1, 0, 0, 0);
	func_2(iVar0, 4, 74, 1, 0, 0, 0);
	func_2(iVar0, 4, 75, 1, 0, 0, 0);
	func_2(iVar0, 4, 76, 1, 0, 0, 0);
	func_2(iVar0, 4, 77, 1, 0, 0, 0);
	func_2(iVar0, 4, 78, 0, 0, 0, 0);
	func_2(iVar0, 4, 79, 1, 0, 0, 0);
	func_2(iVar0, 4, 80, 1, 0, 0, 0);
	func_2(iVar0, 4, 81, 1, 0, 0, 0);
	func_2(iVar0, 4, 82, 1, 0, 0, 0);
	func_2(iVar0, 4, 83, 1, 0, 0, 0);
	func_2(iVar0, 4, 84, 1, 0, 0, 0);
	func_2(iVar0, 4, 85, 1, 0, 0, 0);
	func_2(iVar0, 4, 86, 1, 0, 0, 0);
	func_2(iVar0, 4, 87, 1, 0, 0, 0);
	func_2(iVar0, 4, 88, 1, 0, 0, 0);
	func_2(iVar0, 4, 89, 1, 0, 0, 0);
	func_2(iVar0, 4, 90, 1, 0, 0, 0);
	func_2(iVar0, 4, 91, 1, 0, 0, 0);
	func_2(iVar0, 4, 92, 1, 0, 0, 0);
	func_2(iVar0, 4, 93, 1, 0, 0, 0);
	func_2(iVar0, 4, 94, 1, 0, 0, 0);
	func_2(iVar0, 4, 95, 1, 0, 0, 0);
	func_2(iVar0, 4, 96, 1, 0, 0, 0);
	func_2(iVar0, 4, 97, 1, 0, 0, 0);
	func_2(iVar0, 4, 98, 1, 0, 0, 0);
	func_2(iVar0, 4, 99, 1, 0, 0, 0);
	func_2(iVar0, 4, 100, 1, 0, 0, 0);
	func_2(iVar0, 4, 101, 1, 0, 0, 0);
	func_2(iVar0, 4, 102, 1, 1, 0, 1);
	func_2(iVar0, 4, 103, 1, 1, 0, 1);
	func_2(iVar0, 4, 104, 1, 0, 0, 0);
	func_2(iVar0, 4, 105, 1, 0, 0, 0);
	func_2(iVar0, 4, 106, 1, 0, 0, 0);
	func_2(iVar0, 4, 107, 1, 0, 0, 0);
	func_2(iVar0, 4, 108, 1, 0, 0, 0);
	func_2(iVar0, 4, 109, 1, 0, 0, 0);
	func_2(iVar0, 4, 110, 1, 0, 0, 0);
	func_2(iVar0, 4, 111, 1, 1, 0, 1);
	func_2(iVar0, 4, 112, 1, 1, 0, 1);
	func_2(iVar0, 4, 113, 1, 0, 0, 0);
	func_2(iVar0, 4, 114, 1, 0, 0, 0);
	func_2(iVar0, 4, 115, 1, 0, 0, 0);
	func_2(iVar0, 4, 116, 1, 0, 0, 0);
	func_2(iVar0, 6, 0, 1, 1, 0, 1);
	func_2(iVar0, 6, 1, 1, 0, 0, 0);
	func_2(iVar0, 6, 2, 1, 0, 0, 0);
	func_2(iVar0, 6, 3, 1, 0, 0, 0);
	func_2(iVar0, 6, 4, 1, 0, 0, 0);
	func_2(iVar0, 6, 5, 1, 0, 0, 0);
	func_2(iVar0, 6, 6, 1, 0, 0, 0);
	func_2(iVar0, 6, 7, 1, 0, 0, 0);
	func_2(iVar0, 6, 8, 1, 0, 0, 0);
	func_2(iVar0, 6, 9, 1, 0, 0, 0);
	func_2(iVar0, 6, 10, 1, 0, 0, 0);
	func_2(iVar0, 6, 11, 1, 0, 0, 0);
	func_2(iVar0, 6, 12, 1, 0, 0, 0);
	func_2(iVar0, 6, 13, 1, 0, 0, 0);
	func_2(iVar0, 6, 14, 1, 0, 0, 0);
	func_2(iVar0, 6, 15, 1, 0, 0, 0);
	func_2(iVar0, 6, 16, 1, 0, 0, 0);
	func_2(iVar0, 6, 17, 1, 1, 0, 1);
	func_2(iVar0, 6, 18, 1, 1, 0, 1);
	func_2(iVar0, 6, 19, 1, 0, 0, 0);
	func_2(iVar0, 6, 20, 1, 0, 0, 0);
	func_2(iVar0, 6, 21, 1, 0, 0, 0);
	func_2(iVar0, 6, 22, 1, 0, 0, 0);
	func_2(iVar0, 6, 23, 1, 0, 0, 0);
	func_2(iVar0, 6, 24, 1, 0, 0, 0);
	func_2(iVar0, 6, 25, 1, 0, 0, 0);
	func_2(iVar0, 6, 26, 1, 0, 0, 0);
	func_2(iVar0, 6, 27, 1, 0, 0, 0);
	func_2(iVar0, 6, 28, 1, 0, 0, 0);
	func_2(iVar0, 6, 29, 1, 0, 0, 0);
	func_2(iVar0, 6, 30, 1, 0, 0, 0);
	func_2(iVar0, 6, 31, 1, 0, 0, 0);
	func_2(iVar0, 6, 32, 1, 0, 0, 0);
	func_2(iVar0, 6, 33, 1, 0, 0, 0);
	func_2(iVar0, 6, 34, 1, 0, 0, 0);
	func_2(iVar0, 6, 35, 1, 0, 0, 0);
	func_2(iVar0, 6, 36, 1, 1, 0, 1);
	func_2(iVar0, 6, 37, 1, 0, 0, 0);
	func_2(iVar0, 6, 38, 1, 0, 0, 0);
	func_2(iVar0, 6, 39, 1, 0, 0, 0);
	func_2(iVar0, 6, 40, 1, 0, 0, 0);
	func_2(iVar0, 6, 41, 1, 0, 0, 0);
	func_2(iVar0, 6, 42, 1, 0, 0, 0);
	func_2(iVar0, 6, 43, 1, 0, 0, 0);
	func_2(iVar0, 6, 44, 1, 0, 0, 0);
	func_2(iVar0, 6, 45, 1, 0, 0, 0);
	func_2(iVar0, 6, 46, 1, 0, 0, 0);
	func_2(iVar0, 6, 47, 1, 0, 0, 0);
	func_2(iVar0, 6, 48, 1, 0, 0, 0);
	func_2(iVar0, 6, 49, 1, 0, 0, 0);
	func_2(iVar0, 6, 50, 1, 0, 0, 0);
	func_2(iVar0, 6, 51, 1, 0, 0, 0);
	func_2(iVar0, 6, 52, 1, 1, 0, 1);
	func_2(iVar0, 6, 53, 1, 0, 0, 0);
	func_2(iVar0, 6, 54, 1, 0, 0, 0);
	func_2(iVar0, 6, 55, 1, 0, 0, 0);
	func_2(iVar0, 6, 56, 1, 0, 0, 0);
	func_2(iVar0, 6, 57, 1, 0, 0, 0);
	func_2(iVar0, 6, 58, 1, 0, 0, 0);
	func_2(iVar0, 6, 59, 1, 0, 0, 0);
	func_2(iVar0, 6, 60, 1, 0, 0, 0);
	func_2(iVar0, 6, 61, 1, 0, 0, 0);
	func_2(iVar0, 6, 62, 1, 0, 0, 0);
	func_2(iVar0, 6, 63, 1, 0, 0, 0);
	func_2(iVar0, 6, 64, 1, 0, 0, 0);
	func_2(iVar0, 6, 65, 1, 0, 0, 0);
	func_2(iVar0, 6, 66, 1, 0, 0, 0);
	func_2(iVar0, 6, 67, 1, 0, 0, 0);
	func_2(iVar0, 6, 68, 1, 0, 0, 0);
	func_2(iVar0, 6, 69, 1, 0, 0, 0);
	func_2(iVar0, 6, 70, 1, 0, 0, 0);
	func_2(iVar0, 6, 71, 1, 0, 0, 0);
	func_2(iVar0, 6, 72, 1, 0, 0, 0);
	func_2(iVar0, 6, 73, 1, 1, 0, 1);
	func_2(iVar0, 6, 74, 1, 0, 0, 0);
	func_2(iVar0, 6, 75, 1, 0, 0, 0);
	func_2(iVar0, 6, 76, 1, 0, 0, 0);
	func_2(iVar0, 6, 77, 1, 0, 0, 0);
	func_2(iVar0, 6, 78, 1, 0, 0, 0);
	func_2(iVar0, 6, 79, 1, 0, 0, 0);
	func_2(iVar0, 6, 80, 1, 0, 0, 0);
	func_2(iVar0, 6, 81, 1, 0, 0, 0);
	func_2(iVar0, 6, 82, 1, 0, 0, 0);
	func_2(iVar0, 6, 83, 1, 0, 0, 0);
	func_2(iVar0, 6, 84, 1, 0, 0, 0);
	func_2(iVar0, 6, 85, 1, 0, 0, 0);
	func_2(iVar0, 6, 86, 1, 0, 0, 0);
	func_2(iVar0, 6, 87, 1, 0, 0, 0);
	func_2(iVar0, 6, 88, 1, 0, 0, 0);
	func_2(iVar0, 6, 89, 1, 0, 0, 0);
	func_2(iVar0, 6, 90, 1, 0, 0, 0);
	func_2(iVar0, 6, 91, 1, 0, 0, 0);
	func_2(iVar0, 6, 92, 1, 0, 0, 0);
	func_2(iVar0, 6, 93, 1, 0, 0, 0);
	func_2(iVar0, 6, 94, 1, 0, 0, 0);
	func_2(iVar0, 6, 95, 1, 0, 0, 0);
	func_2(iVar0, 6, 96, 1, 0, 0, 0);
	func_2(iVar0, 6, 97, 1, 0, 0, 0);
	func_2(iVar0, 6, 98, 1, 0, 0, 0);
	func_2(iVar0, 6, 99, 1, 0, 0, 0);
	func_2(iVar0, 6, 100, 1, 0, 0, 0);
	func_2(iVar0, 6, 101, 1, 0, 0, 0);
	func_2(iVar0, 6, 102, 1, 0, 0, 0);
	func_2(iVar0, 6, 103, 1, 0, 0, 0);
	func_2(iVar0, 6, 104, 1, 0, 0, 0);
	func_2(iVar0, 6, 105, 1, 0, 0, 0);
	func_2(iVar0, 6, 106, 1, 0, 0, 0);
	func_2(iVar0, 6, 107, 1, 0, 0, 0);
	func_2(iVar0, 6, 108, 1, 0, 0, 0);
	func_2(iVar0, 6, 109, 1, 0, 0, 0);
	func_2(iVar0, 6, 110, 1, 0, 0, 0);
	func_2(iVar0, 6, 111, 1, 0, 0, 0);
	func_2(iVar0, 6, 112, 1, 0, 0, 0);
	func_2(iVar0, 6, 113, 1, 0, 0, 0);
	func_2(iVar0, 6, 114, 1, 0, 0, 0);
	func_2(iVar0, 6, 115, 1, 0, 0, 0);
	func_2(iVar0, 6, 116, 1, 0, 0, 0);
	func_2(iVar0, 6, 117, 1, 0, 0, 0);
	func_2(iVar0, 6, 118, 1, 0, 0, 0);
	func_2(iVar0, 6, 119, 1, 0, 0, 0);
	func_2(iVar0, 6, 120, 1, 0, 0, 0);
	func_2(iVar0, 6, 121, 1, 0, 0, 0);
	func_2(iVar0, 6, 122, 1, 0, 0, 0);
	func_2(iVar0, 6, 123, 1, 0, 0, 0);
	func_2(iVar0, 6, 124, 1, 0, 0, 0);
	func_2(iVar0, 6, 125, 1, 0, 0, 0);
	func_2(iVar0, 6, 126, 1, 0, 0, 0);
	func_2(iVar0, 6, 127, 1, 0, 0, 0);
	func_2(iVar0, 6, 128, 1, 0, 0, 0);
	func_2(iVar0, 6, 129, 1, 0, 0, 0);
	func_2(iVar0, 6, 130, 1, 0, 0, 0);
	func_2(iVar0, 6, 131, 1, 0, 0, 0);
	func_2(iVar0, 6, 132, 1, 0, 0, 0);
	func_2(iVar0, 6, 133, 1, 0, 0, 0);
	SYSTEM::WAIT(0);
	func_2(iVar0, 5, 0, 1, 1, 0, 1);
	func_2(iVar0, 5, 1, 1, 0, 0, 0);
	func_2(iVar0, 5, 2, 1, 0, 0, 0);
	func_2(iVar0, 5, 3, 1, 1, 0, 1);
	func_2(iVar0, 5, 4, 1, 0, 0, 0);
	func_2(iVar0, 5, 5, 1, 0, 0, 0);
	func_2(iVar0, 5, 6, 1, 0, 0, 0);
	func_2(iVar0, 8, 0, 1, 1, 0, 1);
	func_2(iVar0, 8, 1, 1, 1, 0, 1);
	func_2(iVar0, 8, 2, 1, 0, 0, 0);
	func_2(iVar0, 8, 3, 1, 0, 0, 0);
	func_2(iVar0, 8, 4, 1, 0, 0, 0);
	func_2(iVar0, 8, 5, 1, 0, 0, 0);
	func_2(iVar0, 8, 7, 1, 0, 0, 0);
	func_2(iVar0, 8, 8, 1, 0, 0, 0);
	func_2(iVar0, 8, 9, 1, 0, 0, 0);
	func_2(iVar0, 8, 10, 1, 0, 0, 0);
	func_2(iVar0, 8, 11, 1, 0, 0, 0);
	func_2(iVar0, 8, 12, 1, 0, 0, 0);
	func_2(iVar0, 8, 13, 1, 0, 0, 0);
	func_2(iVar0, 8, 14, 1, 0, 0, 0);
	func_2(iVar0, 8, 15, 1, 0, 0, 0);
	func_2(iVar0, 8, 16, 1, 0, 0, 0);
	func_2(iVar0, 8, 17, 1, 0, 0, 0);
	func_2(iVar0, 8, 18, 1, 0, 0, 0);
	func_2(iVar0, 8, 19, 1, 0, 0, 0);
	func_2(iVar0, 8, 20, 1, 0, 0, 0);
	func_2(iVar0, 8, 21, 1, 0, 0, 0);
	func_2(iVar0, 8, 22, 1, 0, 0, 0);
	func_2(iVar0, 8, 23, 1, 0, 0, 0);
	func_2(iVar0, 8, 24, 1, 0, 0, 0);
	func_2(iVar0, 8, 25, 1, 0, 0, 0);
	func_2(iVar0, 8, 26, 1, 1, 0, 1);
	func_2(iVar0, 8, 27, 1, 0, 0, 0);
	func_2(iVar0, 8, 28, 1, 0, 0, 0);
	func_2(iVar0, 8, 29, 1, 0, 0, 0);
	func_2(iVar0, 8, 30, 1, 0, 0, 0);
	func_2(iVar0, 8, 31, 1, 0, 0, 0);
	func_2(iVar0, 8, 32, 1, 0, 0, 0);
	func_2(iVar0, 8, 33, 1, 0, 0, 0);
	func_2(iVar0, 8, 34, 1, 0, 0, 0);
	func_2(iVar0, 8, 35, 1, 0, 0, 0);
	func_2(iVar0, 8, 36, 1, 0, 0, 0);
	func_2(iVar0, 8, 37, 1, 0, 0, 0);
	func_2(iVar0, 8, 38, 1, 0, 0, 0);
	func_2(iVar0, 8, 39, 1, 0, 0, 0);
	func_2(iVar0, 8, 40, 1, 0, 0, 0);
	func_2(iVar0, 8, 41, 1, 0, 0, 0);
	func_2(iVar0, 8, 42, 1, 0, 0, 0);
	func_2(iVar0, 8, 43, 1, 0, 0, 0);
	func_2(iVar0, 8, 44, 1, 0, 0, 0);
	func_2(iVar0, 8, 45, 1, 0, 0, 0);
	func_2(iVar0, 8, 46, 1, 0, 0, 0);
	func_2(iVar0, 8, 47, 1, 0, 0, 0);
	func_2(iVar0, 8, 48, 1, 0, 0, 0);
	func_2(iVar0, 8, 49, 1, 0, 0, 0);
	func_2(iVar0, 8, 50, 1, 0, 0, 0);
	func_2(iVar0, 8, 51, 1, 0, 0, 0);
	func_2(iVar0, 8, 52, 1, 0, 0, 0);
	func_2(iVar0, 8, 53, 1, 0, 0, 0);
	func_2(iVar0, 8, 54, 1, 0, 0, 0);
	func_2(iVar0, 8, 55, 1, 0, 0, 0);
	func_2(iVar0, 8, 56, 1, 0, 0, 0);
	func_2(iVar0, 8, 57, 1, 0, 0, 0);
	func_2(iVar0, 8, 58, 1, 0, 0, 0);
	func_2(iVar0, 8, 59, 1, 0, 0, 0);
	func_2(iVar0, 8, 60, 1, 0, 0, 0);
	func_2(iVar0, 8, 61, 1, 0, 0, 0);
	func_2(iVar0, 8, 62, 1, 0, 0, 0);
	func_2(iVar0, 8, 63, 1, 0, 0, 0);
	func_2(iVar0, 8, 64, 1, 0, 0, 0);
	func_2(iVar0, 8, 65, 1, 0, 0, 0);
	func_2(iVar0, 8, 66, 1, 0, 0, 0);
	func_2(iVar0, 8, 67, 1, 0, 0, 0);
	func_2(iVar0, 8, 68, 1, 0, 0, 0);
	func_2(iVar0, 8, 69, 1, 0, 0, 0);
	func_2(iVar0, 8, 70, 1, 0, 0, 0);
	func_2(iVar0, 8, 71, 1, 0, 0, 0);
	func_2(iVar0, 8, 72, 1, 0, 0, 0);
	func_2(iVar0, 8, 73, 1, 0, 0, 0);
	func_2(iVar0, 8, 74, 1, 0, 0, 0);
	func_2(iVar0, 8, 75, 1, 0, 0, 0);
	func_2(iVar0, 8, 76, 1, 0, 0, 0);
	func_2(iVar0, 9, 0, 1, 1, 0, 1);
	func_2(iVar0, 9, 1, 1, 0, 0, 0);
	func_2(iVar0, 9, 2, 1, 0, 0, 0);
	func_2(iVar0, 9, 3, 1, 0, 0, 0);
	func_2(iVar0, 9, 4, 1, 0, 0, 0);
	func_2(iVar0, 9, 5, 1, 0, 0, 0);
	func_2(iVar0, 9, 6, 1, 0, 0, 0);
	func_2(iVar0, 9, 7, 1, 0, 0, 0);
	func_2(iVar0, 9, 8, 1, 0, 0, 0);
	func_2(iVar0, 9, 9, 1, 0, 0, 0);
	func_2(iVar0, 9, 10, 1, 0, 0, 0);
	func_2(iVar0, 9, 11, 1, 0, 0, 0);
	func_2(iVar0, 10, 0, 1, 1, 0, 1);
	func_2(iVar0, 10, 1, 1, 0, 0, 0);
	func_2(iVar0, 10, 2, 1, 0, 0, 0);
	func_2(iVar0, 10, 3, 1, 0, 0, 0);
	func_2(iVar0, 10, 4, 1, 0, 0, 0);
	func_2(iVar0, 10, 5, 1, 0, 0, 0);
	func_2(iVar0, 10, 6, 1, 0, 0, 0);
	func_2(iVar0, 10, 7, 1, 0, 0, 0);
	func_2(iVar0, 10, 8, 1, 0, 0, 0);
	func_2(iVar0, 10, 9, 1, 0, 0, 0);
	func_2(iVar0, 10, 10, 1, 0, 0, 0);
	func_2(iVar0, 10, 11, 1, 0, 0, 0);
	func_2(iVar0, 10, 12, 1, 0, 0, 0);
	func_2(iVar0, 10, 13, 1, 0, 0, 0);
	func_2(iVar0, 10, 14, 1, 0, 0, 0);
	func_2(iVar0, 10, 15, 1, 0, 0, 0);
	func_2(iVar0, 10, 16, 1, 0, 0, 0);
	func_2(iVar0, 10, 17, 1, 0, 0, 0);
	func_2(iVar0, 10, 18, 1, 0, 0, 0);
	func_2(iVar0, 10, 19, 1, 0, 0, 0);
	func_2(iVar0, 10, 20, 1, 0, 0, 0);
	func_2(iVar0, 10, 21, 1, 0, 0, 0);
	func_2(iVar0, 10, 22, 1, 0, 0, 0);
	func_2(iVar0, 10, 23, 1, 0, 0, 0);
	func_2(iVar0, 10, 24, 1, 0, 0, 0);
	func_2(iVar0, 10, 25, 1, 0, 0, 0);
	func_2(iVar0, 10, 26, 1, 0, 0, 0);
	func_2(iVar0, 10, 27, 1, 0, 0, 0);
	func_2(iVar0, 10, 28, 1, 0, 0, 0);
	func_2(iVar0, 10, 29, 1, 0, 0, 0);
	func_2(iVar0, 10, 30, 1, 0, 0, 0);
	func_2(iVar0, 10, 31, 1, 0, 0, 0);
	func_2(iVar0, 10, 32, 1, 0, 0, 0);
	func_2(iVar0, 10, 33, 1, 0, 0, 0);
	func_2(iVar0, 10, 34, 1, 0, 0, 0);
	func_2(iVar0, 10, 35, 1, 0, 0, 0);
	func_2(iVar0, 10, 36, 1, 0, 0, 0);
	func_2(iVar0, 10, 37, 1, 0, 0, 0);
	func_2(iVar0, 10, 38, 1, 0, 0, 0);
	func_2(iVar0, 10, 39, 1, 0, 0, 0);
	func_2(iVar0, 10, 40, 1, 0, 0, 0);
	func_2(iVar0, 10, 41, 1, 0, 0, 0);
	func_2(iVar0, 10, 42, 1, 0, 0, 0);
	func_2(iVar0, 10, 43, 1, 0, 0, 0);
	func_2(iVar0, 10, 44, 1, 0, 0, 0);
	func_2(iVar0, 10, 45, 1, 0, 0, 0);
	func_2(iVar0, 10, 46, 1, 0, 0, 0);
	func_2(iVar0, 10, 47, 1, 0, 0, 0);
	func_2(iVar0, 10, 48, 1, 0, 0, 0);
	func_2(iVar0, 10, 49, 1, 0, 0, 0);
	func_2(iVar0, 10, 50, 1, 0, 0, 0);
	func_2(iVar0, 10, 51, 1, 0, 0, 0);
	func_2(iVar0, 10, 52, 1, 0, 0, 0);
	func_2(iVar0, 1, 0, 1, 1, 0, 0);
	func_2(iVar0, 1, 2, 1, 1, 0, 0);
	func_2(iVar0, 1, 3, 1, 1, 0, 0);
	func_2(iVar0, 1, 4, 1, 1, 0, 0);
	func_2(iVar0, 7, 0, 1, 1, 0, 0);
	func_2(iVar0, 11, 0, 1, 1, 0, 1);
	func_2(iVar0, 11, 1, 1, 1, 0, 1);
	func_2(iVar0, 11, 2, 1, 1, 0, 1);
	func_2(iVar0, 11, 3, 1, 1, 0, 1);
	func_2(iVar0, 11, 4, 1, 1, 0, 1);
	func_2(iVar0, 11, 5, 1, 1, 0, 1);
	func_2(iVar0, 11, 6, 1, 1, 0, 1);
	func_2(iVar0, 11, 7, 1, 1, 0, 1);
	func_2(iVar0, 11, 8, 1, 1, 0, 1);
	func_2(iVar0, 11, 9, 1, 0, 0, 0);
	func_2(iVar0, 11, 10, 1, 0, 0, 0);
	func_2(iVar0, 11, 11, 1, 0, 0, 0);
	func_2(iVar0, 11, 12, 1, 0, 0, 0);
	func_2(iVar0, 11, 13, 1, 0, 0, 0);
	func_2(iVar0, 11, 14, 1, 0, 0, 0);
	func_2(iVar0, 11, 15, 1, 0, 0, 0);
	func_2(iVar0, 11, 16, 1, 0, 0, 0);
	func_2(iVar0, 11, 17, 1, 0, 0, 0);
	func_2(iVar0, 11, 18, 1, 0, 0, 0);
	func_2(iVar0, 11, 19, 1, 0, 0, 0);
	func_2(iVar0, 11, 20, 1, 0, 0, 0);
	func_2(iVar0, 11, 21, 1, 0, 0, 0);
	func_2(iVar0, 11, 22, 1, 0, 0, 0);
	func_2(iVar0, 11, 23, 1, 0, 0, 0);
	func_2(iVar0, 11, 24, 1, 0, 0, 0);
	func_2(iVar0, 11, 25, 1, 0, 0, 0);
	func_2(iVar0, 11, 26, 1, 0, 0, 0);
	func_2(iVar0, 11, 27, 1, 0, 0, 0);
	func_2(iVar0, 11, 28, 1, 0, 0, 0);
	func_2(iVar0, 11, 29, 1, 0, 0, 0);
	func_2(iVar0, 11, 30, 1, 0, 0, 0);
	func_2(iVar0, 11, 31, 1, 0, 0, 0);
	func_2(iVar0, 11, 32, 1, 0, 0, 0);
	func_2(iVar0, 11, 33, 1, 0, 0, 0);
	func_2(iVar0, 11, 34, 1, 0, 0, 0);
	func_2(iVar0, 11, 35, 1, 0, 0, 0);
	func_2(iVar0, 11, 36, 1, 0, 0, 0);
	func_2(iVar0, 11, 37, 1, 0, 0, 0);
	func_2(iVar0, 11, 38, 1, 0, 0, 0);
	func_2(iVar0, 11, 39, 1, 0, 0, 0);
	func_2(iVar0, 11, 40, 1, 0, 0, 0);
	func_2(iVar0, 11, 41, 1, 1, 0, 1);
	func_2(iVar0, 11, 42, 1, 1, 0, 1);
	func_2(iVar0, 11, 43, 1, 1, 0, 1);
	func_2(iVar0, 11, 44, 1, 1, 0, 1);
	func_2(iVar0, 11, 45, 1, 1, 0, 1);
	func_2(iVar0, 11, 46, 1, 1, 0, 1);
	func_2(iVar0, 11, 47, 1, 1, 0, 1);
	func_2(iVar0, 11, 48, 1, 0, 0, 0);
	func_2(iVar0, 11, 49, 1, 0, 0, 0);
	func_2(iVar0, 11, 50, 1, 0, 0, 0);
	func_2(iVar0, 11, 51, 1, 0, 0, 0);
	func_2(iVar0, 11, 52, 1, 0, 0, 0);
	func_2(iVar0, 11, 53, 1, 0, 0, 0);
	func_2(iVar0, 11, 54, 1, 0, 0, 0);
	func_2(iVar0, 11, 55, 1, 0, 0, 0);
	func_2(iVar0, 11, 56, 1, 0, 0, 0);
	func_2(iVar0, 11, 57, 1, 0, 0, 0);
	func_2(iVar0, 11, 58, 1, 0, 0, 0);
	func_2(iVar0, 11, 59, 1, 0, 0, 0);
	func_2(iVar0, 11, 60, 1, 0, 0, 0);
	func_2(iVar0, 11, 61, 1, 0, 0, 0);
	func_2(iVar0, 11, 62, 1, 0, 0, 0);
	func_2(iVar0, 12, 0, 1, 1, 0, 1);
	func_2(iVar0, 12, 1, 1, 0, 0, 0);
	func_2(iVar0, 12, 2, 1, 0, 0, 0);
	func_2(iVar0, 12, 3, 1, 0, 0, 0);
	func_2(iVar0, 12, 4, 1, 0, 0, 0);
	func_2(iVar0, 12, 5, 1, 0, 0, 0);
	func_2(iVar0, 12, 6, 1, 0, 0, 0);
	func_2(iVar0, 12, 7, 1, 0, 0, 0);
	func_2(iVar0, 12, 8, 1, 0, 0, 0);
	func_2(iVar0, 12, 9, 1, 0, 0, 0);
	func_2(iVar0, 12, 10, 1, 0, 0, 0);
	func_2(iVar0, 12, 11, 0, 0, 0, 0);
	func_2(iVar0, 12, 12, 1, 0, 0, 0);
	func_2(iVar0, 12, 13, 0, 0, 0, 0);
	func_2(iVar0, 12, 14, 0, 0, 0, 0);
	func_2(iVar0, 12, 15, 0, 0, 0, 0);
	func_2(iVar0, 12, 17, 1, 1, 0, 1);
	func_2(iVar0, 12, 18, 1, 0, 0, 0);
	func_2(iVar0, 12, 19, 1, 1, 0, 1);
	func_2(iVar0, 12, 20, 1, 1, 0, 1);
	func_2(iVar0, 12, 21, 1, 1, 0, 1);
	func_2(iVar0, 12, 22, 1, 0, 0, 0);
	func_2(iVar0, 12, 23, 1, 0, 0, 0);
	func_2(iVar0, 12, 24, 1, 0, 0, 0);
	func_2(iVar0, 12, 25, 1, 0, 0, 0);
	func_2(iVar0, 12, 26, 1, 0, 0, 0);
	func_2(iVar0, 12, 27, 1, 0, 0, 0);
	func_2(iVar0, 12, 28, 1, 0, 0, 0);
	func_2(iVar0, 12, 29, 1, 0, 0, 0);
	func_2(iVar0, 12, 30, 1, 0, 0, 0);
	func_2(iVar0, 12, 31, 1, 0, 0, 0);
	func_2(iVar0, 12, 32, 1, 0, 0, 0);
	func_2(iVar0, 12, 33, 1, 0, 0, 0);
	func_2(iVar0, 12, 34, 1, 0, 0, 0);
	func_2(iVar0, 12, 35, 1, 0, 0, 0);
	func_2(iVar0, 12, 36, 1, 0, 0, 0);
	func_2(iVar0, 12, 37, 1, 0, 0, 0);
	func_2(iVar0, 12, 38, 1, 1, 0, 1);
	func_2(iVar0, 12, 39, 1, 1, 0, 1);
	func_2(iVar0, 12, 40, 1, 1, 0, 1);
	func_2(iVar0, 12, 41, 1, 0, 0, 0);
	func_2(iVar0, 12, 42, 1, 0, 0, 0);
	func_2(iVar0, 12, 43, 1, 0, 0, 0);
	func_2(iVar0, 12, 44, 1, 0, 0, 0);
	func_2(iVar0, 12, 45, 1, 0, 0, 0);
	func_2(iVar0, 12, 46, 1, 0, 0, 0);
	func_2(iVar0, 13, 0, 1, 0, 0, 0);
	func_2(iVar0, 13, 1, 1, 0, 0, 0);
	func_2(iVar0, 13, 2, 1, 0, 0, 0);
	func_2(iVar0, 13, 3, 1, 0, 0, 0);
	func_2(iVar0, 13, 4, 1, 0, 0, 0);
	func_2(iVar0, 13, 5, 1, 0, 0, 0);
	func_2(iVar0, 13, 6, 1, 0, 0, 0);
	func_2(iVar0, 13, 7, 1, 0, 0, 0);
	func_2(iVar0, 13, 8, 1, 0, 0, 0);
	func_2(iVar0, 14, 10, 1, 0, 0, 0);
	func_2(iVar0, 14, 158, 1, 1, 0, 1);
	func_2(iVar0, 14, 159, 1, 0, 0, 0);
	func_2(iVar0, 14, 160, 1, 0, 0, 0);
	func_2(iVar0, 14, 161, 1, 0, 0, 0);
	func_2(iVar0, 14, 162, 1, 0, 0, 0);
	func_2(iVar0, 14, 163, 1, 0, 0, 0);
	func_2(iVar0, 14, 164, 1, 0, 0, 0);
	func_2(iVar0, 14, 165, 1, 0, 0, 0);
	func_2(iVar0, 14, 166, 1, 0, 0, 0);
	func_2(iVar0, 14, 167, 1, 0, 0, 0);
	func_2(iVar0, 14, 168, 1, 0, 0, 0);
	func_2(iVar0, 14, 169, 1, 0, 0, 0);
	func_2(iVar0, 14, 170, 1, 0, 0, 0);
	func_2(iVar0, 14, 171, 1, 0, 0, 0);
	func_2(iVar0, 14, 172, 1, 0, 0, 0);
	func_2(iVar0, 14, 173, 1, 0, 0, 0);
	func_2(iVar0, 14, 174, 1, 0, 0, 0);
	func_2(iVar0, 14, 14, 1, 0, 0, 0);
	func_2(iVar0, 14, 13, 1, 0, 0, 0);
	func_2(iVar0, 14, 16, 1, 0, 0, 0);
	func_2(iVar0, 14, 17, 1, 0, 0, 0);
	func_2(iVar0, 14, 18, 1, 0, 0, 0);
	func_2(iVar0, 14, 19, 1, 0, 0, 0);
	func_2(iVar0, 14, 20, 1, 0, 0, 0);
	func_2(iVar0, 14, 21, 1, 0, 0, 0);
	func_2(iVar0, 14, 22, 1, 0, 0, 0);
	func_2(iVar0, 14, 23, 1, 0, 0, 0);
	func_2(iVar0, 14, 24, 1, 0, 0, 0);
	func_2(iVar0, 14, 15, 1, 0, 0, 0);
	func_2(iVar0, 14, 82, 1, 0, 0, 0);
	func_2(iVar0, 14, 83, 1, 0, 0, 0);
	func_2(iVar0, 14, 84, 1, 0, 0, 0);
	func_2(iVar0, 14, 85, 1, 0, 0, 0);
	func_2(iVar0, 14, 86, 1, 0, 0, 0);
	func_2(iVar0, 14, 87, 1, 0, 0, 0);
	func_2(iVar0, 14, 88, 1, 0, 0, 0);
	func_2(iVar0, 14, 89, 1, 0, 0, 0);
	func_2(iVar0, 14, 90, 1, 0, 0, 0);
	func_2(iVar0, 14, 91, 1, 0, 0, 0);
	func_2(iVar0, 14, 92, 1, 0, 0, 0);
	func_2(iVar0, 14, 93, 1, 0, 0, 0);
	func_2(iVar0, 14, 94, 1, 0, 0, 0);
	func_2(iVar0, 14, 95, 1, 1, 0, 1);
	func_2(iVar0, 14, 96, 1, 0, 0, 0);
	func_2(iVar0, 14, 97, 1, 0, 0, 0);
	func_2(iVar0, 14, 98, 1, 0, 0, 0);
	func_2(iVar0, 14, 99, 1, 0, 0, 0);
	func_2(iVar0, 14, 100, 1, 0, 0, 0);
	func_2(iVar0, 14, 101, 1, 0, 0, 0);
	func_2(iVar0, 14, 102, 1, 0, 0, 0);
	func_2(iVar0, 14, 103, 1, 0, 0, 0);
	func_2(iVar0, 14, 104, 1, 0, 0, 0);
	func_2(iVar0, 14, 105, 1, 0, 0, 0);
	func_2(iVar0, 14, 106, 1, 0, 0, 0);
	func_2(iVar0, 14, 107, 1, 0, 0, 0);
	func_2(iVar0, 14, 108, 1, 0, 0, 0);
	func_2(iVar0, 14, 109, 1, 0, 0, 0);
	func_2(iVar0, 14, 110, 1, 0, 0, 0);
	func_2(iVar0, 14, 111, 1, 0, 0, 0);
	func_2(iVar0, 14, 112, 1, 0, 0, 0);
	func_2(iVar0, 14, 113, 1, 0, 0, 0);
	func_2(iVar0, 14, 114, 1, 0, 0, 0);
	func_2(iVar0, 14, 115, 1, 0, 0, 0);
	func_2(iVar0, 14, 116, 1, 0, 0, 0);
	func_2(iVar0, 14, 117, 1, 0, 0, 0);
	func_2(iVar0, 14, 118, 1, 0, 0, 0);
	func_2(iVar0, 14, 119, 1, 0, 0, 0);
	func_2(iVar0, 14, 120, 1, 0, 0, 0);
	func_2(iVar0, 14, 121, 1, 0, 0, 0);
	func_2(iVar0, 14, 122, 1, 0, 0, 0);
	func_2(iVar0, 14, 123, 1, 0, 0, 0);
	func_2(iVar0, 14, 124, 1, 0, 0, 0);
	func_2(iVar0, 14, 125, 1, 0, 0, 0);
	func_2(iVar0, 14, 126, 1, 0, 0, 0);
	func_2(iVar0, 14, 127, 1, 0, 0, 0);
	func_2(iVar0, 14, 128, 1, 0, 0, 0);
	func_2(iVar0, 14, 129, 1, 0, 0, 0);
	func_2(iVar0, 14, 130, 1, 0, 0, 0);
	func_2(iVar0, 14, 131, 1, 0, 0, 0);
	func_2(iVar0, 14, 132, 1, 0, 0, 0);
	func_2(iVar0, 14, 133, 1, 0, 0, 0);
	func_2(iVar0, 14, 134, 1, 0, 0, 0);
	func_2(iVar0, 14, 135, 1, 0, 0, 0);
	func_2(iVar0, 14, 136, 1, 0, 0, 0);
	func_2(iVar0, 14, 137, 1, 0, 0, 0);
	func_2(iVar0, 14, 138, 1, 0, 0, 0);
	func_2(iVar0, 14, 139, 1, 0, 0, 0);
	func_2(iVar0, 14, 140, 1, 0, 0, 0);
	func_2(iVar0, 14, 141, 1, 0, 0, 0);
	func_2(iVar0, 14, 142, 1, 0, 0, 0);
	func_2(iVar0, 14, 143, 1, 0, 0, 0);
	func_2(iVar0, 14, 144, 1, 0, 0, 0);
	func_2(iVar0, 14, 145, 1, 0, 0, 0);
	func_2(iVar0, 14, 146, 1, 0, 0, 0);
	func_2(iVar0, 14, 147, 1, 0, 0, 0);
	func_2(iVar0, 14, 148, 1, 0, 0, 0);
	func_2(iVar0, 14, 149, 1, 0, 0, 0);
	func_2(iVar0, 14, 150, 1, 0, 0, 0);
	func_2(iVar0, 14, 151, 1, 0, 0, 0);
	func_2(iVar0, 14, 152, 1, 0, 0, 0);
	func_2(iVar0, 14, 153, 1, 0, 0, 0);
	func_2(iVar0, 14, 154, 1, 0, 0, 0);
	func_2(iVar0, 14, 155, 1, 0, 0, 0);
	func_2(iVar0, 14, 156, 1, 0, 0, 0);
	func_2(iVar0, 14, 11, 1, 0, 0, 0);
	func_2(iVar0, 14, 12, 1, 0, 0, 0);
	func_2(iVar0, 14, 25, 1, 0, 0, 0);
	func_2(iVar0, 14, 26, 0, 0, 0, 0);
	func_2(iVar0, 14, 27, 0, 0, 0, 0);
	func_2(iVar0, 14, 28, 0, 0, 0, 0);
	func_2(iVar0, 14, 29, 0, 0, 0, 0);
	func_2(iVar0, 14, 30, 0, 0, 0, 0);
	func_2(iVar0, 14, 31, 0, 0, 0, 0);
	func_2(iVar0, 14, 32, 0, 0, 0, 0);
	func_2(iVar0, 14, 33, 0, 0, 0, 0);
	func_2(iVar0, 14, 34, 0, 0, 0, 0);
	func_2(iVar0, 14, 35, 0, 0, 0, 0);
	func_2(iVar0, 14, 36, 0, 0, 0, 0);
	func_2(iVar0, 14, 37, 0, 0, 0, 0);
	func_2(iVar0, 14, 38, 0, 0, 0, 0);
	func_2(iVar0, 14, 39, 0, 0, 0, 0);
	func_2(iVar0, 14, 40, 1, 0, 0, 0);
	func_2(iVar0, 14, 41, 1, 1, 0, 1);
	func_2(iVar0, 14, 42, 1, 0, 0, 0);
	func_2(iVar0, 14, 43, 1, 0, 0, 0);
	func_2(iVar0, 14, 44, 1, 0, 0, 0);
	func_2(iVar0, 14, 45, 1, 0, 0, 0);
	func_2(iVar0, 14, 46, 1, 0, 0, 0);
	func_2(iVar0, 14, 47, 1, 0, 0, 0);
	func_2(iVar0, 14, 48, 1, 0, 0, 0);
	func_2(iVar0, 14, 49, 1, 0, 0, 0);
	func_2(iVar0, 14, 50, 1, 0, 0, 0);
	func_2(iVar0, 14, 51, 1, 0, 0, 0);
	func_2(iVar0, 14, 52, 1, 0, 0, 0);
	func_2(iVar0, 14, 53, 1, 0, 0, 0);
	func_2(iVar0, 14, 54, 1, 0, 0, 0);
	func_2(iVar0, 14, 55, 1, 0, 0, 0);
	func_2(iVar0, 14, 56, 1, 0, 0, 0);
	func_2(iVar0, 14, 57, 1, 0, 0, 0);
	func_2(iVar0, 14, 58, 1, 0, 0, 0);
	func_2(iVar0, 14, 59, 1, 0, 0, 0);
	func_2(iVar0, 14, 60, 1, 0, 0, 0);
	func_2(iVar0, 14, 61, 1, 0, 0, 0);
	func_2(iVar0, 14, 63, 1, 0, 0, 0);
	func_2(iVar0, 14, 64, 1, 1, 0, 1);
	func_2(iVar0, 14, 65, 1, 0, 0, 0);
	func_2(iVar0, 14, 66, 1, 0, 0, 0);
	func_2(iVar0, 14, 67, 1, 0, 0, 0);
	func_2(iVar0, 14, 68, 1, 0, 0, 0);
	func_2(iVar0, 14, 69, 1, 0, 0, 0);
	func_2(iVar0, 14, 70, 1, 0, 0, 0);
	func_2(iVar0, 14, 71, 1, 0, 0, 0);
	func_2(iVar0, 14, 72, 1, 0, 0, 0);
	func_2(iVar0, 14, 73, 1, 0, 0, 0);
	func_2(iVar0, 14, 74, 1, 0, 0, 0);
	func_2(iVar0, 14, 75, 1, 0, 0, 0);
	func_2(iVar0, 14, 76, 1, 0, 0, 0);
	func_2(iVar0, 14, 77, 1, 0, 0, 0);
	func_2(iVar0, 14, 78, 1, 0, 0, 0);
	func_2(iVar0, 14, 79, 1, 0, 0, 0);
	func_2(iVar0, 14, 80, 1, 0, 0, 0);
	func_2(iVar0, 14, 81, 1, 0, 0, 0);
	Global_113386.f_2363.f_539.f_2353 = 1;
}

void func_2(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x7F22
{
	__LIB_38__::func_82(iParam0, iParam1, iParam2, bParam3);
	func_76(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_364(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_38__::func_81(iParam0, iParam1, iParam2, 0);
	}
}

int func_76(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x1EE8A
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_35__::func_896(iParam0, iParam1, iParam2, -1) };
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
					uVar3 = { __LIB_18__::func_180(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_76(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_38__::func_82(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__::func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_76(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_38__::func_82(iParam0, 14, uVar4[iVar2], 1);
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
								func_76(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_76(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_76(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_76(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_76(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_76(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_76(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_76(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_76(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_76(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_76(iParam0, 14, iVar5, 1, 0);
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
								func_76(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_76(iParam0, 14, 17, 1, 0);
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

void func_90()//Position - 0x22469
{
	if (!__LIB_30__::func_691())
	{
		iLocal_65 = 0;
		return;
	}
}

void func_92()//Position - 0x22494
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	int iVar10;
	struct<222> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<2> Var17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	char* sVar22;
	char* sVar23;
	char* sVar24;
	if (iLocal_194)
	{
		if (MISC::IS_PS3_VERSION() || __LIB_0__::func_52())
		{
			HUD::SET_WARNING_MESSAGE("CONT_REM_PS" /* GXT: Downloadable content has been uninstalled since this save was made. Game features tied to the removed content will no longer be present. */, 16384, 0, false, -1, 0, 0, true, 0);
		}
		else if (MISC::IS_XBOX360_VERSION() || __LIB_0__::func_53())
		{
			HUD::SET_WARNING_MESSAGE("CONT_REM_XB" /* GXT: Downloadable content has been uninstalled since this save was made. Game features tied to the removed content will no longer be present. */, 16384, 0, false, -1, 0, 0, true, 0);
		}
		else
		{
			HUD::SET_WARNING_MESSAGE("CONT_REM_PC" /* GXT: Downloadable content has been uninstalled since this save was made. Game features tied to the removed content will no longer be present. */, 16384, 0, false, -1, 0, 0, true, 0);
		}
		if (__LIB_0__::func_526())
		{
			__LIB_12__::func_254();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			iLocal_194 = 0;
		}
	}
	if (((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_192) > 10000) && !__LIB_32__::func_769(1)) && !__LIB_0__::func_39(13))
	{
		if (!func_143())
		{
			iLocal_191 = 11;
			iLocal_192 = MISC::GET_GAME_TIMER();
			iLocal_207 = 0;
		}
		else
		{
			switch (iLocal_191)
			{
				case 0:
					if (!BitTest(Global_113386.f_668.f_1317, 0))
					{
						if (__LIB_0__::func_109())
						{
							MISC::SET_BIT(&(Global_113386.f_668.f_1317), 0);
							func_139(1);
							func_138(1);
						}
					}
					break;
				case 1:
					if (!BitTest(Global_113386.f_668.f_1317, 1))
					{
						if (__LIB_0__::func_109())
						{
							MISC::SET_BIT(&(Global_113386.f_668.f_1317), 1);
							func_139(1);
							func_138(1);
						}
					}
					break;
				case 2:
					if (!BitTest(Global_113386.f_668.f_1317, 2))
					{
						if (__LIB_6__::func_790(0, 1) || (((NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT() && NETWORK::NETWORK_IS_SIGNED_ONLINE()) && !MISC::IS_PS3_VERSION()) && !__LIB_0__::func_52()))
						{
							func_134(&(Global_113386.f_668.f_1317), 2, "CONTENT_NEW_SC" /* GXT: Social Club content added. */);
							func_2(__LIB_6__::func_757(0), 2, 1, 1, 1, 0, 0);
							func_2(__LIB_6__::func_757(1), 2, 17, 1, 1, 0, 0);
							func_2(__LIB_6__::func_757(2), 2, 3, 1, 1, 0, 0);
							func_2(__LIB_6__::func_757(0), 1, 4, 1, 1, 0, 0);
							func_2(__LIB_6__::func_757(1), 1, 1, 1, 1, 0, 0);
							func_2(__LIB_6__::func_757(2), 1, 4, 1, 1, 0, 0);
						}
					}
					break;
				case 3:
					if (!BitTest(Global_113386.f_668.f_1317, 3))
					{
						if ((((__LIB_0__::func_115() || __LIB_0__::func_109()) || __LIB_0__::func_109()) || __LIB_0__::func_114()) || __LIB_0__::func_116())
						{
							if (!TASK::IS_SCENARIO_GROUP_ENABLED("BLIMP" /* GXT: Atomic Blimp */))
							{
								TASK::SET_SCENARIO_GROUP_ENABLED("BLIMP" /* GXT: Atomic Blimp */, true);
							}
							MISC::SET_BIT(&(Global_113386.f_668.f_1317), 3);
						}
					}
					break;
				case 4:
					if (!BitTest(iLocal_207, 1))
					{
						iVar6 = 0;
						iVar7 = FILES::GET_NUM_DLC_WEAPONS();
						iVar8 = 0;
						while (iVar8 < iVar7)
						{
							if (FILES::GET_DLC_WEAPON_DATA(iVar8, &Var9))
							{
								if (!FILES::IS_CONTENT_ITEM_LOCKED(Var9.f_0) && !__LIB_0__::func_261(Var9.f_1))
								{
									iVar10 = Var9.f_1;
									if (((iVar10 != joaat("WEAPON_HAMMER") && iVar10 != joaat("WEAPON_PISTOL50")) && iVar10 != joaat("WEAPON_BULLPUPSHOTGUN")) && iVar10 != joaat("WEAPON_ASSAULTSMG"))
									{
										iVar6++;
									}
								}
							}
							iVar8++;
						}
						if (iVar6 != Global_113386.f_668.f_1313)
						{
							Var11 = 44;
							Var11.f_221 = 51;
							func_113(&Var11, &Var9);
							if (iVar6 > Global_113386.f_668.f_1313)
							{
								if ((iVar6 - Global_113386.f_668.f_1313) == 1)
								{
									if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
									{
										StringCopy(&cLocal_195, "CONTENT_NEW_W0" /* GXT: A new weapon is available to purchase at Ammu-Nation. */, 32);
									}
									else
									{
										StringCopy(&cLocal_195, "CONTENT_NEW_WM0" /* GXT: A new weapon is available to purchase at Ammu-Nation. */, 32);
									}
								}
								else if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									StringCopy(&cLocal_195, "CONTENT_NEW_W1" /* GXT: New weapons are available to purchase at Ammu-Nation. */, 32);
								}
								else
								{
									StringCopy(&cLocal_195, "CONTENT_NEW_WM1" /* GXT: New weapons are available to purchase at Ammu-Nation. */, 32);
								}
							}
							Global_113386.f_668.f_1313 = iVar6;
							iLocal_193 = 1;
							if (MISC::IS_PC_VERSION())
							{
								iLocal_193 = 0;
							}
						}
						else if (iVar6 < Global_113386.f_668.f_1313)
						{
							Global_113386.f_668.f_1313 = iVar6;
							iLocal_194 = 1;
						}
						MISC::SET_BIT(&iLocal_207, 1);
					}
					break;
				case 5:
					if (!BitTest(iLocal_207, 0))
					{
						iVar12 = 0;
						iVar13 = 0;
						iVar14 = 0;
						iVar15 = 0;
						iVar16 = 0;
						while (iVar16 < FILES::GET_NUM_DLC_VEHICLES())
						{
							if (FILES::GET_DLC_VEHICLE_DATA(iVar16, &Var17))
							{
								if ((Var17.f_1 != joaat("hotknife") && Var17.f_1 != joaat("carbonrs")) && Var17.f_1 != joaat("elegy2"))
								{
									if (!FILES::IS_CONTENT_ITEM_LOCKED(Var17.f_0) && !func_112(Var17.f_1))
									{
										iVar18 = __LIB_12__::func_262(__LIB_0__::func_896(Var17.f_1));
										switch (iVar18)
										{
											case 0:
												iVar12++;
												break;
											case 1:
												iVar13++;
												break;
											case 2:
												iVar14++;
												break;
											case 3:
												iVar15++;
												break;
											}
										}
									}
							}
							iVar16++;
						}
						STATS::STAT_GET_INT(joaat("CONTENT_HANGER_VEH"), &iVar19, -1);
						STATS::STAT_GET_INT(joaat("CONTENT_MARINA_VEH"), &iVar20, -1);
						STATS::STAT_GET_INT(joaat("CONTENT_HELI_VEH"), &iVar21, -1);
						if ((iVar19 < 0 || iVar20 < 0) || iVar21 < 0)
						{
							STATS::STAT_SET_INT(joaat("CONTENT_HANGER_VEH"), iVar13, true);
							iVar19 = iVar13;
							STATS::STAT_SET_INT(joaat("CONTENT_MARINA_VEH"), iVar14, true);
							iVar20 = iVar14;
							STATS::STAT_SET_INT(joaat("CONTENT_HELI_VEH"), iVar15, true);
							iVar21 = iVar15;
							Global_113386.f_668.f_1312 = (iVar12 - ((iVar13 + iVar14) + iVar15));
							__LIB_0__::func_533();
						}
						if (((iVar12 + iVar13) + iVar14) + iVar15) > (((Global_113386.f_668.f_1312 + iVar19) + iVar20) + iVar21)
						{
							if ((((((((iVar12 + iVar13) + iVar14) + iVar15) - Global_113386.f_668.f_1312) + iVar19) + iVar20) + iVar21) == 1)
							{
								if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									if (iVar12 == 1)
									{
										StringCopy(&cLocal_195, "CONT_NEW_V", 32);
									}
									else if (iVar13 == 1)
									{
										StringCopy(&cLocal_195, "CONT_NEW_VH" /* GXT: A new vehicle is available to purchase for your Hangar property. */, 32);
									}
									else if (iVar14 == 1)
									{
										StringCopy(&cLocal_195, "CONT_NEW_VM" /* GXT: A new vehicle is available to purchase for your Marina property. */, 32);
									}
									else if (iVar15 == 1)
									{
										StringCopy(&cLocal_195, "CONT_NEW_VC" /* GXT: A new vehicle is available to purchase for your Helipad property. */, 32);
									}
									else
									{
										StringCopy(&cLocal_195, "CONT_NEW_V", 32);
									}
								}
								else
								{
									StringCopy(&cLocal_195, "CONTENT_NEW_VW1" /* GXT: A new vehicle has been added for purchase from the Travel and Transport websites. */, 32);
								}
							}
							else if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								StringCopy(&cLocal_195, "CONT_NEW_V", 32);
								if (iVar12 > Global_113386.f_668.f_1312)
								{
									StringConCat(&cLocal_195, "G", 32);
								}
								if (iVar13 > iVar19)
								{
									StringConCat(&cLocal_195, "H", 32);
								}
								if (iVar14 > iVar20)
								{
									StringConCat(&cLocal_195, "M", 32);
								}
								if (iVar15 > iVar21)
								{
									StringConCat(&cLocal_195, "C", 32);
								}
								StringConCat(&cLocal_195, "1", 32);
							}
							else
							{
								StringCopy(&cLocal_195, "CONTENT_NEW_VW2" /* GXT: New vehicles have been added for purchase from the Travel and Transport websites. */, 32);
							}
							Global_113386.f_668.f_1312 = iVar12;
							STATS::STAT_SET_INT(joaat("CONTENT_HANGER_VEH"), iVar13, true);
							STATS::STAT_SET_INT(joaat("CONTENT_MARINA_VEH"), iVar14, true);
							STATS::STAT_SET_INT(joaat("CONTENT_HELI_VEH"), iVar15, true);
							iLocal_193 = 0;
							__LIB_0__::func_533();
						}
						else if (((iVar12 + iVar13) + iVar14) + iVar15) < (((Global_113386.f_668.f_1312 + iVar19) + iVar20) + iVar21)
						{
							Global_113386.f_668.f_1312 = iVar12;
							STATS::STAT_SET_INT(joaat("CONTENT_HANGER_VEH"), iVar13, true);
							STATS::STAT_SET_INT(joaat("CONTENT_MARINA_VEH"), iVar14, true);
							STATS::STAT_SET_INT(joaat("CONTENT_HELI_VEH"), iVar15, true);
							__LIB_0__::func_533();
						}
						MISC::SET_BIT(&iLocal_207, 0);
					}
					break;
				case 6:
					if (!BitTest(iLocal_207, 2))
					{
						FILES::INIT_SHOP_PED_COMPONENT(&Var5);
						iVar2 = 0;
						iVar1 = 0;
						iVar4 = __LIB_18__::func_173();
						iVar0 = FILES::SETUP_SHOP_PED_APPAREL_QUERY(iVar4, 0, 11, 0);
						iVar1 = 0;
						while (iVar1 < iVar0)
						{
							FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar1, &Var5);
							if (!FILES::IS_CONTENT_ITEM_LOCKED(Var5.f_0))
							{
								if (Var5.f_6 == 3)
								{
									iVar2++;
								}
							}
							iVar1++;
						}
						if (iVar2 > Global_113386.f_668.f_1314)
						{
							Global_113386.f_668.f_1314 = iVar2;
							StringCopy(&cLocal_195, "CONTENT_NEW_C" /* GXT: A new outfit is available in Trevor's wardrobe. */, 32);
							iLocal_193 = 1;
						}
						MISC::SET_BIT(&iLocal_207, 2);
					}
					break;
				case 7:
					if (!BitTest(iLocal_207, 4))
					{
						FILES::INIT_SHOP_PED_COMPONENT(&Var5);
						iVar3 = 0;
						iVar1 = 0;
						iVar4 = __LIB_18__::func_173();
						iVar0 = FILES::SETUP_SHOP_PED_APPAREL_QUERY(iVar4, 0, 11, 0);
						iVar1 = 0;
						while (iVar1 < iVar0)
						{
							FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar1, &Var5);
							if (!FILES::IS_CONTENT_ITEM_LOCKED(Var5.f_0))
							{
								if (Var5.f_6 == 2)
								{
									iVar3++;
								}
							}
							iVar1++;
						}
						if (iVar3 > Global_113386.f_668.f_1315)
						{
							Global_113386.f_668.f_1315 = iVar3;
							StringCopy(&cLocal_195, "CONTENT_NEW_H" /* GXT: A new hairstyle is available in various barber shops. */, 32);
							iLocal_193 = 1;
						}
						MISC::SET_BIT(&iLocal_207, 4);
					}
					break;
				case 8:
					if (!BitTest(iLocal_207, 3))
					{
						switch (__LIB_18__::func_173())
						{
							case 0:
								if (!BitTest(Global_113386.f_668.f_1316, 0))
								{
									if (__LIB_6__::func_785(&sVar22, 21, 0, PLAYER::PLAYER_PED_ID(), -1))
									{
										func_134(&(Global_113386.f_668.f_1316), 0, "CONTENT_NEW_T" /* GXT: A new tattoo is available in various tattoo studios. */);
									}
								}
								break;
							case 1:
								if (!BitTest(Global_113386.f_668.f_1316, 1))
								{
									if (__LIB_6__::func_785(&sVar23, 40, 1, PLAYER::PLAYER_PED_ID(), -1))
									{
										func_134(&(Global_113386.f_668.f_1316), 1, "CONTENT_NEW_T" /* GXT: A new tattoo is available in various tattoo studios. */);
									}
								}
								break;
							case 2:
								if (!BitTest(Global_113386.f_668.f_1316, 2))
								{
									if (__LIB_6__::func_785(&sVar24, 34, 2, PLAYER::PLAYER_PED_ID(), -1))
									{
										func_134(&(Global_113386.f_668.f_1316), 2, "CONTENT_NEW_T" /* GXT: A new tattoo is available in various tattoo studios. */);
									}
								}
								break;
						}
						MISC::SET_BIT(&iLocal_207, 3);
					}
					break;
				case 9:
					if (!__LIB_0__::func_573(0, 10))
					{
						if ((__LIB_0__::func_109() || __LIB_0__::func_109()) || __LIB_0__::func_114())
						{
							if (__LIB_0__::func_176(0))
							{
								__LIB_0__::func_71(16, 0);
							}
						}
					}
					break;
				case 10:
					break;
				case 11:
					if (!BitTest(Global_113386.f_668.f_1317, 6))
					{
						if (__LIB_30__::func_692())
						{
							func_134(&(Global_113386.f_668.f_1317), 6, "CONT_NG_PREOR" /* GXT: Your bonus cash has been awarded for Story Mode and Grand Theft Auto Online. */);
							__LIB_0__::func_71(157, 0);
							iLocal_192 = MISC::GET_GAME_TIMER();
						}
					}
					break;
				case 12:
					if (!BitTest(Global_113386.f_668.f_1317, 7))
					{
						if (__LIB_0__::func_116())
						{
						}
					}
					break;
				case 13:
					if (!BitTest(Global_113386.f_668.f_1317, 8))
					{
						if (__LIB_10__::func_291())
						{
							func_134(&(Global_113386.f_668.f_1317), 8, "CONT_HEISTS" /* GXT: Heists are now available in Grand Theft Auto Online. */);
						}
					}
					break;
				case 14:
					if (Global_2726835 > 0)
					{
						break;
					}
					if (Global_2726832 == 0)
					{
						if (Global_2726833 == 0)
						{
							if (Global_2726798 == 99)
							{
								StringCopy(&cLocal_195, "HUD_1_CASHGIFT" /* GXT: Rockstar Game Services have corrected your GTA Dollars by $~1~. */, 32);
								iLocal_191 = 2;
								iLocal_200 = Global_2726797;
								iLocal_193 = 1;
								Global_2726832 = 0;
								Global_2726833 = 1;
							}
							else if (Global_2726798 == -99)
							{
								StringCopy(&cLocal_195, "HUD_2_CASHGIFT" /* GXT: Rockstar Game Services have corrected your GTA Dollars. */, 32);
								iLocal_191 = 2;
								iLocal_193 = 1;
								Global_2726832 = 0;
								Global_2726833 = 1;
							}
							else if (Global_2726798 > 0)
							{
								StringCopy(&cLocal_195, "HUD_1_CASHGIFT" /* GXT: Rockstar Game Services have corrected your GTA Dollars by $~1~. */, 32);
								iLocal_191 = 2;
								iLocal_200 = Global_2726797;
								iLocal_193 = 1;
								Global_2726832 = 0;
								Global_2726833 = 1;
							}
							else if (Global_2726798 < 0)
							{
								StringCopy(&cLocal_195, "HUD_1_CASHGIFTN" /* GXT: Rockstar Game Services have corrected your GTA Dollars by -$~1~. */, 32);
								iLocal_191 = 2;
								iLocal_200 = Global_2726797;
								if (iLocal_200 < 0)
								{
									iLocal_200 = (iLocal_200 * -1);
								}
								iLocal_193 = 1;
								Global_2726832 = 0;
								Global_2726833 = 1;
							}
						}
					}
					else
					{
						Global_2726832 = 0;
						Global_2726798 = 0;
						Global_2726797 = 0;
					}
					break;
				case 15:
					iLocal_191 = 0;
					return;
					break;
			}
			if (iLocal_193)
			{
				if (iLocal_191 == 2)
				{
					if (iLocal_200 == 0)
					{
						HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&cLocal_195);
						HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, "CONTENT_TICK" /* GXT: ~HUD_COLOUR_SOCIAL_CLUB~Social Club */, 0);
					}
					else
					{
						HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&cLocal_195);
						HUD::ADD_TEXT_COMPONENT_INTEGER(iLocal_200);
						HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, "CONTENT_TICK" /* GXT: ~HUD_COLOUR_SOCIAL_CLUB~Social Club */, 0);
					}
				}
				else
				{
					HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&cLocal_195);
					HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
				}
				iLocal_193 = 0;
			}
			iLocal_191++;
		}
	}
}

int func_112(int iParam0)//Position - 0x28F36
{
	int iVar0;
	switch (iParam0)
	{
		case joaat("casco"):
		case joaat("enduro"):
		case joaat("gburrito2"):
		case joaat("guardian"):
		case joaat("hydra"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kuruma"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("savage"):
		case joaat("technical"):
		case joaat("valkyrie"):
		case joaat("velum2"):
			return 1;
			break;
	}
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("dodo"):
		case joaat("dukes"):
		case joaat("dukes2"):
		case joaat("dominator2"):
		case joaat("buffalo3"):
		case joaat("gauntlet2"):
		case 1079210360:
		case joaat("blimp2"):
		case joaat("stalion"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("buffalo3"):
		case joaat("dominator2"):
		case joaat("gauntlet2"):
		case joaat("stalion2"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("buffalo3"):
		case joaat("dominator2"):
		case joaat("gauntlet2"):
		case joaat("stalion2"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 538225385:
		case joaat("slamvan2"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
		case joaat("faction"):
		case joaat("moonbeam"):
			return 1;
			break;
		case joaat("btype2"):
		case joaat("lurcher"):
			return 1;
			break;
		case joaat("banshee2"):
		case joaat("sultanrs"):
			return 1;
			break;
		case joaat("btype3"):
			return 1;
			break;
		case joaat("faction3"):
		case joaat("minivan2"):
		case joaat("sabregt2"):
		case joaat("slamvan3"):
		case joaat("tornado5"):
		case joaat("virgo2"):
		case joaat("virgo3"):
			return 1;
			break;
	}
	return 0;
}

void func_113(var uParam0, var* uParam1)//Position - 0x290F1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = FILES::GET_NUM_DLC_WEAPONS();
	iVar2 = 0;
	while (iVar2 < 3)
	{
		*uParam0 = { Global_113386.f_2363.f_539.f_298[iVar2 /*477*/] };
		iVar4 = 0;
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (((iVar4 < iVar0 && FILES::GET_DLC_WEAPON_DATA(iVar1, uParam1)) && !FILES::IS_CONTENT_ITEM_LOCKED(*uParam1)) && !__LIB_0__::func_261(uParam1->f_1))
			{
				iVar5 = 1;
				iVar3 = 0;
				while (iVar5 && iVar3 < uParam0->f_221)
				{
					if (uParam0->f_221[iVar3 /*5*/] == uParam1->f_1)
					{
						Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar4 /*5*/] = { uParam0->f_221[iVar3 /*5*/] };
						iVar4++;
						iVar5 = 0;
					}
					iVar3++;
				}
				if (iVar5 && (MISC::IS_XBOX360_VERSION() || MISC::IS_PS3_VERSION()))
				{
					Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar4 /*5*/].f_1 = uParam1->f_6 * 2;
					Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar4 /*5*/] = uParam1->f_1;
					Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar4 /*5*/].f_2 = 0;
					Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar4 /*5*/].f_3 = 0;
					Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar4 /*5*/].f_4 = 0;
					iVar4++;
				}
			}
			iVar1++;
		}
		iVar1 = iVar4;
		while (iVar1 <= 50)
		{
			Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar1 /*5*/] = 0;
			Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar1 /*5*/].f_2 = 0;
			Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar1 /*5*/].f_3 = 0;
			Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar1 /*5*/].f_4 = 0;
			iVar1++;
		}
		if (__LIB_18__::func_173() == iVar2)
		{
			__LIB_32__::func_750(PLAYER::PLAYER_PED_ID(), 1, 0);
		}
		iVar2++;
	}
}

void func_134(int* iParam0, int iParam1, char* sParam2)//Position - 0x2B33E
{
	MISC::SET_BIT(iParam0, iParam1);
	StringCopy(&cLocal_195, __LIB_1__::func_192(sParam2), 32);
	iLocal_193 = 1;
}

void func_138(bool bParam0)//Position - 0x2B3D9
{
	func_2(__LIB_6__::func_757(0), 3, 175, bParam0, bParam0, bParam0, 0);
	func_2(__LIB_6__::func_757(0), 3, 3, bParam0, bParam0, bParam0, 0);
	func_2(__LIB_6__::func_757(0), 4, 3, bParam0, bParam0, bParam0, 0);
	func_2(__LIB_6__::func_757(0), 12, 26, bParam0, bParam0, bParam0, 0);
	func_2(__LIB_6__::func_757(2), 3, 98, bParam0, bParam0, bParam0, 0);
	func_2(__LIB_6__::func_757(2), 3, 124, bParam0, bParam0, bParam0, 0);
	func_2(__LIB_6__::func_757(2), 12, 22, bParam0, bParam0, bParam0, 0);
	func_2(__LIB_6__::func_757(1), 3, 133, bParam0, bParam0, bParam0, 0);
	func_2(__LIB_6__::func_757(1), 3, 135, bParam0, bParam0, bParam0, 0);
	func_2(__LIB_6__::func_757(1), 12, 16, bParam0, bParam0, bParam0, 0);
}

void func_139(bool bParam0)//Position - 0x2B49D
{
	func_140(0, 9, bParam0);
	func_140(2, 5, bParam0);
	func_140(1, 0, bParam0);
}

void func_140(int iParam0, int iParam1, bool bParam2)//Position - 0x2B4BE
{
	struct<11> Var0;
	if (__LIB_0__::func_43(iParam0))
	{
		if (__LIB_6__::func_785(&Var0, iParam1, __LIB_10__::func_4(iParam0), 0, -1))
		{
			if (bParam2)
			{
				MISC::SET_BIT(&(Global_113386.f_2363.f_493[iParam0 /*15*/][Var0.f_9]), Var0.f_10);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363.f_493[iParam0 /*15*/][Var0.f_9]), Var0.f_10);
			}
		}
	}
}

int func_143()//Position - 0x2B562
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (__LIB_0__::func_198())
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_78317)
	{
		return 0;
	}
	if (iLocal_191 > 15)
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (__LIB_0__::func_39(0))
	{
		return 0;
	}
	if (__LIB_0__::func_39(3))
	{
		return 0;
	}
	if (__LIB_0__::func_39(4))
	{
		return 0;
	}
	if (__LIB_0__::func_2(0))
	{
		return 0;
	}
	if (INTERIOR::IS_INTERIOR_SCENE())
	{
		return 0;
	}
	if (__LIB_0__::func_661())
	{
		return 0;
	}
	if (!__LIB_4__::func_715())
	{
		return 0;
	}
	return 1;
}

void func_154()//Position - 0x2B713
{
	int iVar0;
	iVar0 = 3;
	if (SYSTEM::TIMERB() > 250)
	{
		if (__LIB_18__::func_173() == 2)
		{
			if (Global_32196)
			{
				iVar0 = 1;
			}
			if (MISC::GET_MISSION_FLAG())
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("docks_setup")) > 0)
				{
					iVar0 = 1;
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (SYSTEM::VDIST2(Global_41748[iLocal_208 /*31*/].f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < Global_41748[iLocal_208 /*31*/].f_6)
				{
					if (__LIB_0__::func_382(iLocal_208, PLAYER::PLAYER_PED_ID()))
					{
						if (!func_157(PLAYER::PLAYER_PED_ID(), 12, 2))
						{
							__LIB_0__::func_387(iLocal_208, PLAYER::PLAYER_PED_ID(), 0);
						}
					}
					else if (func_157(PLAYER::PLAYER_PED_ID(), 12, 2))
					{
						__LIB_11__::func_952(iLocal_208, PLAYER::PLAYER_PED_ID());
					}
				}
				iLocal_208++;
				if (iLocal_208 > iVar0)
				{
					iLocal_208 = 0;
				}
			}
		}
		SYSTEM::SETTIMERB(0);
	}
}

int func_157(int iParam0, int iParam1, int iParam2)//Position - 0x2B94E
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
				if (!func_157(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_157(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_157(iParam0, 14, iVar4))
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

void func_167()//Position - 0x2CDE3
{
	if (iLocal_188 > 0)
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !Global_97726)
		{
			iLocal_188 = 99;
		}
	}
	switch (iLocal_188)
	{
		case 0:
			if (Global_97726)
			{
				iLocal_188++;
			}
			break;
		case 1:
			VEHICLE::REQUEST_VEHICLE_RECORDING(0, "END_MARTIN_1");
			bLocal_189 = true;
			if (!CUTSCENE::IS_CUTSCENE_PLAYING() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("martin1")) == 0)
			{
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(0, "END_MARTIN_1"))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_190 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_190) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_190, false))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_190, 0, "END_MARTIN_1", true);
						iLocal_188++;
					}
					else
					{
						iLocal_188 = 99;
					}
				}
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_190))
			{
				iLocal_188++;
			}
			else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_190, false))
			{
				iLocal_188++;
			}
			else if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_190))
			{
				iLocal_188++;
			}
			break;
		case 3:
			if (bLocal_189)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(0, "END_MARTIN_1");
			}
			iLocal_190 = 0;
			iLocal_188 = 0;
			Global_97726 = 0;
			break;
		case 99:
			if (bLocal_189)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(0, "END_MARTIN_1");
			}
			iLocal_190 = 0;
			iLocal_188 = 0;
			Global_97726 = 0;
			break;
	}
}

void func_168(int* iParam0)//Position - 0x2CF4C
{
	bool bVar0;
	struct<8> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (__LIB_30__::func_696())
	{
		if (!__LIB_0__::func_517(Global_110133, 1024))
		{
			func_234(iParam0);
			__LIB_0__::func_712(&Global_110133, 1024);
		}
	}
	else
	{
		return;
	}
	bVar0 = func_231(iParam0);
	if (!bVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_14) || ENTITY::DOES_ENTITY_EXIST(iParam0->f_13))
		{
			if (!__LIB_0__::func_39(13) || !__LIB_1__::func_558() == __LIB_30__::func_695())
			{
				func_228(iParam0, 1);
			}
		}
		if (iParam0->f_3)
		{
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!iParam0->f_3)
		{
			if (__LIB_31__::func_825(0) || !iParam0->f_4)
			{
				__LIB_31__::func_828(255, 0);
				iParam0->f_2 = 2000;
			}
			Var1 = { __LIB_30__::func_180("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(&Var1))
			{
				AUDIO::START_AUDIO_SCENE(&Var1);
			}
		}
		iVar3 = func_224();
		iVar4 = func_222();
		iVar5 = func_221(*iParam0);
		if (iParam0->f_2 > 0)
		{
			iParam0->f_2 = (iParam0->f_2 - SYSTEM::FLOOR((MISC::GET_FRAME_TIME() * 1000f)));
			if (iParam0->f_2 <= 0)
			{
				__LIB_31__::func_828(0, 800);
			}
		}
		__LIB_31__::func_827();
		func_195(iParam0);
		__LIB_6__::func_842();
		if (func_192(iParam0, iVar5))
		{
			fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Global_110138[iVar4 /*3*/]);
			if (fVar2 < (35f * 35f) && BitTest(*iParam0, 4))
			{
				func_188(iParam0);
				func_187(iParam0);
				func_186(iParam0, 4000);
				MISC::CLEAR_BIT(iParam0, 4);
				if (iVar4 == 10)
				{
					MISC::SET_BIT(&(Global_113386.f_10016.f_25), 8);
					MISC::SET_BIT(iParam0, 5);
					func_187(iParam0);
					func_185(iParam0, 1108082688, 0);
					__LIB_31__::func_820(1);
					return;
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_113386.f_10016.f_25), 9);
				}
			}
			else if (fVar2 > iParam0->f_5)
			{
				func_187(iParam0);
				func_185(iParam0, 1108082688, 0);
			}
			func_174(iParam0, Global_110138[iVar4 /*3*/], 1);
		}
		else if (func_172(iParam0, iVar5))
		{
			fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_171(iParam0, iVar5));
			if (fVar2 < (35f * 35f) && BitTest(*iParam0, 4))
			{
				func_169(iParam0, func_170(iParam0, iVar5));
				func_186(iParam0, 4000);
				func_185(iParam0, 1108082688, 0);
				MISC::CLEAR_BIT(iParam0, 4);
			}
			else if (fVar2 > iParam0->f_5)
			{
				func_185(iParam0, 1108082688, 0);
			}
			func_174(iParam0, Global_110138[iVar3 /*3*/], 1);
		}
		else
		{
			fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_171(iParam0, iVar5));
			if (fVar2 < (17f * 17f))
			{
				func_169(iParam0, func_170(iParam0, iVar5));
				func_186(iParam0, 0);
				func_185(iParam0, 1108082688, 0);
			}
			else if (fVar2 > iParam0->f_5 && !func_172(iParam0, iVar5))
			{
				func_187(iParam0);
				func_185(iParam0, 1108082688, 0);
			}
			func_174(iParam0, func_171(iParam0, iVar5), 0);
		}
	}
	iParam0->f_3 = bVar0;
	iParam0->f_4 = __LIB_1__::func_558() == __LIB_30__::func_695();
}

void func_169(int* iParam0, int iParam1)//Position - 0x2D288
{
	*iParam0 = (*iParam0 - *iParam0 & 33423360);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 17));
}

int func_170(int* iParam0, int iParam1)//Position - 0x2D2AF
{
	int iVar0;
	int iVar1;
	var uVar2;
	iVar0 = func_224();
	iVar1 = func_222();
	uVar2 = Global_110601[iVar0 /*12*/][iVar1];
	uVar2 = uVar2;
	if (func_192(iParam0, iParam1))
	{
		return iParam1;
	}
	if (Global_110734[iVar0 /*12*/][iVar1])
	{
		return (iParam1 - 1);
	}
	return iParam1 + 1;
}

Vector3 func_171(int* iParam0, int iParam1)//Position - 0x2D305
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	iVar0 = func_224();
	iVar1 = func_222();
	iVar2 = Global_110601[iVar0 /*12*/][iVar1];
	if (func_192(iParam0, iParam1))
	{
		Var3 = { Global_110138[iVar1 /*3*/] };
	}
	else if (func_172(iParam0, iParam1))
	{
		Var3 = { Global_110138[iVar0 /*3*/] };
	}
	else
	{
		Var3 = { Global_110867[iVar2 /*14*/].f_1[(iParam1 - 1) /*3*/] };
	}
	return Var3;
}

bool func_172(int* iParam0, int iParam1)//Position - 0x2D379
{
	int iVar0;
	int iVar1;
	int iVar2;
	*iParam0 = *iParam0;
	iVar2 = func_173(iParam0, &iVar0, &iVar1);
	if (!Global_110734[iVar0 /*12*/][iVar1])
	{
		return iParam1 == 0;
	}
	return iParam1 == Global_110867[iVar2 /*14*/] + 1;
}

var func_173(var uParam0, var uParam1, var uParam2)//Position - 0x2D3BA
{
	if (func_224() == func_222())
	{
		func_188(uParam0);
	}
	*uParam1 = func_224();
	*uParam2 = func_222();
	return Global_110601[*uParam1 /*12*/][*uParam2];
}

void func_174(int* iParam0, struct<3> Param1, bool bParam2)//Position - 0x2D3EF
{
	float fVar0;
	struct<16> Var1;
	struct<6> Var2;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_35__::func_495())
		{
			iParam0->f_8 = __LIB_1__::func_294(iParam0->f_8, (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000)));
		}
		fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param1);
		if ((fVar0 < iParam0->f_5 && (fVar0 > (35f * 35f) || !bParam2)) && fVar0 < 9000000f)
		{
			if (MISC::GET_GAME_TIMER() > iParam0->f_8)
			{
				if (func_180(iParam0))
				{
					iParam0->f_8 = (MISC::GET_GAME_TIMER() + 4000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 4000));
					Var1 = { __LIB_30__::func_693("C_SF", "DL", "AST", "X1/BE") };
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(&Var1, false, -1))
					{
						__LIB_31__::func_820(0);
						iParam0->f_12 = __LIB_2__::func_320(30f, __LIB_1__::func_283(60f, SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param1)));
						iParam0->f_9 = { __LIB_0__::func_681(Param1 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), iParam0->f_12) };
						iParam0->f_7 = AUDIO::GET_SOUND_ID();
						Var2 = { __LIB_14__::func_718("st_C", "Bea", "ls", "al") };
						Var1 = { __LIB_30__::func_693("nts_S", "FM_Eve", "atch_Sounds", "asqu") };
						AUDIO::PLAY_SOUND_FROM_COORD(iParam0->f_7, &Var2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + iParam0->f_9, &Var1, false, 0, false);
						MISC::SET_BIT(iParam0, 1);
						func_185(iParam0, 35f, 1);
					}
				}
			}
		}
		if (BitTest(*iParam0, 1) && iParam0->f_7 != -1)
		{
			if (AUDIO::HAS_SOUND_FINISHED(iParam0->f_7))
			{
				AUDIO::RELEASE_SOUND_ID(iParam0->f_7);
				MISC::CLEAR_BIT(iParam0, 1);
				iParam0->f_7 = -1;
			}
			else
			{
				AUDIO::UPDATE_SOUND_COORD(iParam0->f_7, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + iParam0->f_9);
			}
		}
	}
}

int func_180(var uParam0)//Position - 0x2D666
{
	if (BitTest(*uParam0, 1) || !__LIB_31__::func_821(0, 0))
	{
		return 0;
	}
	return 1;
}

void func_185(int* iParam0, float fParam1, bool bParam2)//Position - 0x2D740
{
	float fVar0;
	fVar0 = iParam0->f_5;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		iParam0->f_5 = (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_171(iParam0, func_221(*iParam0))) + (fParam1 * 2f));
		iParam0->f_5 = __LIB_2__::func_320(iParam0->f_5, (35f * 3f));
		iParam0->f_5 = (iParam0->f_5 * iParam0->f_5);
	}
	if (bParam2)
	{
		iParam0->f_5 = __LIB_1__::func_283(iParam0->f_5, fVar0);
	}
}

void func_186(int* iParam0, int iParam1)//Position - 0x2D7B1
{
	iParam0->f_8 = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_187(int* iParam0)//Position - 0x2D7C4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = func_224();
	iVar1 = func_222();
	iVar2 = Global_110601[iVar0 /*12*/][iVar1];
	iVar3 = 0;
	if (BitTest(*iParam0, 5))
	{
		iVar3 = 1;
		MISC::CLEAR_BIT(iParam0, 5);
	}
	if (Global_110734[iVar0 /*12*/][iVar1])
	{
		iVar3 = (Global_110867[iVar2 /*14*/] + 1 - iVar3);
	}
	func_169(iParam0, iVar3);
}

void func_188(int* iParam0)//Position - 0x2D821
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = func_224();
	iVar1 = func_222();
	iVar2 = iVar0;
	iVar3 = 50;
	while ((iVar2 == iVar0 || iVar2 == iVar1) || Global_110601[iVar1 /*12*/][iVar2] == -1)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
		iVar3 = (iVar3 - 1);
	}
	func_191(iVar1);
	func_189(iVar2);
}

void func_189(int iParam0)//Position - 0x2D878
{
	__LIB_31__::func_829(&(Global_113386.f_10016.f_25), iParam0, 3932160, 18);
}

void func_191(int iParam0)//Position - 0x2D8B9
{
	__LIB_31__::func_829(&(Global_113386.f_10016.f_25), iParam0, 245760, 14);
}

bool func_192(int* iParam0, int iParam1)//Position - 0x2D8D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	*iParam0 = *iParam0;
	iVar2 = func_173(iParam0, &iVar0, &iVar1);
	if (Global_110734[iVar0 /*12*/][iVar1])
	{
		return iParam1 == 0;
	}
	return iParam1 == Global_110867[iVar2 /*14*/] + 1;
}

void func_195(int* iParam0)//Position - 0x2D934
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	func_173(iParam0, &iVar0, &iVar1);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		fVar3 = SYSTEM::VDIST(Var2, Global_110138[iVar0 /*3*/]);
		fVar4 = SYSTEM::VDIST(Var2, Global_110138[iVar1 /*3*/]);
		if (fVar3 < 200f && fVar3 < fVar4)
		{
			func_196(iParam0, Global_110138[iVar0 /*3*/], Global_110589[iVar0], 1);
		}
		if (fVar4 < 200f)
		{
			func_196(iParam0, Global_110138[iVar1 /*3*/], Global_110589[iVar1], 1);
		}
		if (fVar3 > (200f + 10f) && fVar4 > (200f + 10f))
		{
			func_228(iParam0, 0);
		}
	}
}

void func_196(int* iParam0, struct<3> Param1, int iParam2, bool bParam3)//Position - 0x2DA06
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar3;
	if (iParam2 == 49)
	{
		if (BitTest(*iParam0, 3))
		{
			iParam2 = 25;
		}
	}
	iVar0 = __LIB_30__::func_694(iParam2);
	iVar1 = __LIB_31__::func_824(iParam2);
	Var2 = { 0f, 0f, 0f };
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_13) && !ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
	{
		if (!BitTest(*iParam0, 2))
		{
			if (iVar0 != 0)
			{
				STREAMING::REQUEST_MODEL(iVar0);
			}
			if (iVar1 != 0)
			{
				STREAMING::REQUEST_MODEL(iVar1);
			}
			MISC::SET_BIT(iParam0, 2);
		}
		else
		{
			bVar3 = true;
			if (iVar0 != 0)
			{
				if (!STREAMING::HAS_MODEL_LOADED(iVar0))
				{
					bVar3 = false;
				}
			}
			if (iVar1 != 0)
			{
				if (!STREAMING::HAS_MODEL_LOADED(iVar1))
				{
					bVar3 = false;
				}
			}
			if (bVar3)
			{
				__LIB_40__::func_828(iParam2, &(iParam0->f_13), &(iParam0->f_14), Param1, 0, 0);
				MISC::CLEAR_BIT(iParam0, 4);
				if (iParam0->f_1 != 0)
				{
					GRAPHICS::DESTROY_TRACKED_POINT(iParam0->f_1);
					iParam0->f_1 = 0;
				}
				iParam0->f_1 = GRAPHICS::CREATE_TRACKED_POINT();
				GRAPHICS::SET_TRACKED_POINT_INFO(iParam0->f_1, Param1, __LIB_18__::func_492(iVar0));
			}
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_13))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_13, false) };
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_14, false) };
		}
		if (bParam3)
		{
			if (!__LIB_0__::func_394(Var2, Param1, 10f, 1) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var2) > 200f)
			{
				func_228(iParam0, 0);
			}
		}
	}
	if (!BitTest(*iParam0, 4))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !__LIB_31__::func_825(0))
		{
			if (iParam0->f_1 != 0)
			{
				if (SYSTEM::VDIST(Param1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 5f)
				{
					GRAPHICS::SET_TRACKED_POINT_INFO(iParam0->f_1, Var2, __LIB_18__::func_492(iVar0));
					if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(iParam0->f_1))
					{
						CAM::SET_GAMEPLAY_COORD_HINT(Var2, 2000, 2000, 2000, 0);
						MISC::SET_BIT(iParam0, 4);
						if (iParam2 == 49)
						{
							MISC::SET_BIT(iParam0, 3);
						}
						__LIB_31__::func_820(1);
					}
				}
			}
		}
	}
}

int func_221(var uParam0)//Position - 0x2FBF4
{
	int iVar0;
	iVar0 = SYSTEM::SHIFT_RIGHT(uParam0 & 33423360, 17);
	return iVar0;
}

int func_222()//Position - 0x2FC0E
{
	var uVar0;
	uVar0 = __LIB_31__::func_822(Global_113386.f_10016.f_25, 3932160, 18);
	return uVar0;
}

int func_224()//Position - 0x2FC40
{
	var uVar0;
	uVar0 = __LIB_31__::func_822(Global_113386.f_10016.f_25, 245760, 14);
	return uVar0;
}

void func_228(int* iParam0, bool bParam1)//Position - 0x2FD0C
{
	struct<8> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
	{
		if (bParam1)
		{
			VEHICLE::DELETE_VEHICLE(&(iParam0->f_14));
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iParam0->f_14));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_13))
	{
		if (bParam1)
		{
			PED::DELETE_PED(&(iParam0->f_13));
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_13));
		}
	}
	if (BitTest(*iParam0, 2))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_30__::func_694(49));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_31__::func_824(49));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_30__::func_694(25));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_30__::func_694(14));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_30__::func_694(86));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_30__::func_694(43));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_30__::func_694(28));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_30__::func_694(109));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_30__::func_694(35));
		MISC::CLEAR_BIT(iParam0, 2);
	}
	if (iParam0->f_1 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(iParam0->f_1);
		iParam0->f_1 = 0;
	}
	Var0 = { __LIB_30__::func_180("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Var0))
	{
		AUDIO::STOP_AUDIO_SCENE(&Var0);
	}
}

bool func_231(var uParam0)//Position - 0x2FE1D
{
	var uVar0;
	*uParam0 = *uParam0;
	return ((((BitTest(Global_113386.f_10016.f_25, 7) && !BitTest(Global_113386.f_10016.f_25, 8)) && __LIB_0__::func_39(13)) && __LIB_1__::func_558() == __LIB_30__::func_695()) && !func_232(&uVar0));
}

int func_232(var uParam0)//Position - 0x2FE6D
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					iVar2 = ENTITY::GET_ENTITY_MODEL(iVar0);
					if (!(((VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar2) || iVar2 == joaat("voltic")) || iVar2 == joaat("dilettante")) || iVar2 == joaat("dilettante2")))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	*uParam0 = iVar0;
	return iVar1;
}

void func_234(var uParam0)//Position - 0x2FF0A
{
	func_237(uParam0, 0, 1, 1, Global_110172[0 /*13*/][0 /*3*/], Global_110172[0 /*13*/][1 /*3*/], Global_110172[0 /*13*/][2 /*3*/], Global_110172[0 /*13*/][3 /*3*/]);
	func_235(uParam0, 0, 3, 1, Global_110172[1 /*13*/][0 /*3*/], Global_110172[1 /*13*/][1 /*3*/], Global_110172[1 /*13*/][2 /*3*/]);
	func_235(uParam0, 0, 4, 1, Global_110172[2 /*13*/][0 /*3*/], Global_110172[2 /*13*/][1 /*3*/], Global_110172[2 /*13*/][2 /*3*/]);
	func_235(uParam0, 1, 2, 1, Global_110172[3 /*13*/][0 /*3*/], Global_110172[3 /*13*/][1 /*3*/], Global_110172[3 /*13*/][2 /*3*/]);
	func_235(uParam0, 1, 5, 1, Global_110172[4 /*13*/][0 /*3*/], Global_110172[4 /*13*/][1 /*3*/], Global_110172[4 /*13*/][2 /*3*/]);
	func_235(uParam0, 2, 3, 1, Global_110172[5 /*13*/][0 /*3*/], Global_110172[5 /*13*/][1 /*3*/], Global_110172[5 /*13*/][2 /*3*/]);
	func_235(uParam0, 3, 5, 1, Global_110172[6 /*13*/][0 /*3*/], Global_110172[6 /*13*/][1 /*3*/], Global_110172[6 /*13*/][2 /*3*/]);
	func_235(uParam0, 3, 6, 1, Global_110172[7 /*13*/][0 /*3*/], Global_110172[7 /*13*/][1 /*3*/], Global_110172[7 /*13*/][2 /*3*/]);
	func_235(uParam0, 4, 5, 1, Global_110172[8 /*13*/][0 /*3*/], Global_110172[8 /*13*/][1 /*3*/], Global_110172[8 /*13*/][2 /*3*/]);
	func_235(uParam0, 4, 6, 1, Global_110172[9 /*13*/][0 /*3*/], Global_110172[9 /*13*/][1 /*3*/], Global_110172[9 /*13*/][2 /*3*/]);
	func_235(uParam0, 5, 6, 1, Global_110172[10 /*13*/][0 /*3*/], Global_110172[10 /*13*/][1 /*3*/], Global_110172[10 /*13*/][2 /*3*/]);
	func_237(uParam0, 5, 8, 1, Global_110172[11 /*13*/][0 /*3*/], Global_110172[11 /*13*/][1 /*3*/], Global_110172[11 /*13*/][2 /*3*/], Global_110172[11 /*13*/][3 /*3*/]);
	func_235(uParam0, 6, 7, 1, Global_110172[12 /*13*/][0 /*3*/], Global_110172[12 /*13*/][1 /*3*/], Global_110172[12 /*13*/][2 /*3*/]);
	func_235(uParam0, 6, 8, 1, Global_110172[13 /*13*/][0 /*3*/], Global_110172[13 /*13*/][1 /*3*/], Global_110172[13 /*13*/][2 /*3*/]);
	func_235(uParam0, 7, 8, 1, Global_110172[14 /*13*/][0 /*3*/], Global_110172[14 /*13*/][1 /*3*/], Global_110172[14 /*13*/][2 /*3*/]);
	func_237(uParam0, 7, 9, 1, Global_110172[15 /*13*/][0 /*3*/], Global_110172[15 /*13*/][1 /*3*/], Global_110172[15 /*13*/][2 /*3*/], Global_110172[15 /*13*/][3 /*3*/]);
	func_235(uParam0, 7, 10, 1, Global_110172[16 /*13*/][0 /*3*/], Global_110172[16 /*13*/][1 /*3*/], Global_110172[16 /*13*/][2 /*3*/]);
	func_235(uParam0, 8, 9, 1, Global_110172[17 /*13*/][0 /*3*/], Global_110172[17 /*13*/][1 /*3*/], Global_110172[17 /*13*/][2 /*3*/]);
	func_235(uParam0, 8, 10, 1, Global_110172[18 /*13*/][0 /*3*/], Global_110172[18 /*13*/][1 /*3*/], Global_110172[18 /*13*/][2 /*3*/]);
	func_235(uParam0, 9, 10, 1, Global_110172[19 /*13*/][0 /*3*/], Global_110172[19 /*13*/][1 /*3*/], Global_110172[19 /*13*/][2 /*3*/]);
	if (func_224() == func_222())
	{
		func_188(uParam0);
	}
	func_169(uParam0, 0);
}

void func_235(var uParam0, int iParam1, int iParam2, bool bParam3, struct<3> Param4, struct<3> Param5, struct<3> Param6)//Position - 0x30301
{
	func_236(uParam0, iParam1, iParam2, bParam3, Param4.f_0, Param4.f_1, Param4.f_2, Param5.f_0, Param5.f_1, Param5.f_2, Param6.f_0, Param6.f_1, Param6.f_2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

void func_236(var uParam0, int iParam1, int iParam2, bool bParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, float fParam14, float fParam15, float fParam16, float fParam17, float fParam18, float fParam19, float fParam20, float fParam21, float fParam22, float fParam23, float fParam24, float fParam25, float fParam26, float fParam27)//Position - 0x30342
{
	int iVar0;
	if (uParam0->f_6 >= 64)
	{
		return;
	}
	if (((iParam1 >= 11 || iParam2 >= 11) || iParam1 < 0) || iParam2 < 0)
	{
		return;
	}
	Global_110601[iParam1 /*12*/][iParam2] = uParam0->f_6;
	Global_110734[iParam1 /*12*/][iParam2] = 0;
	if (bParam3)
	{
		Global_110734[iParam2 /*12*/][iParam1] = 1;
		Global_110601[iParam2 /*12*/][iParam1] = uParam0->f_6;
	}
	else
	{
		Global_110734[iParam2 /*12*/][iParam1] = 0;
		Global_110601[iParam2 /*12*/][iParam1] = -1;
	}
	iVar0 = 0;
	if ((fParam4 != 0f && fParam5 != 0f) && fParam6 != 0f)
	{
		Global_110867[uParam0->f_6 /*14*/].f_1[iVar0 /*3*/] = { fParam4, fParam5, fParam6 };
		iVar0++;
	}
	if ((fParam7 != 0f && fParam8 != 0f) && fParam9 != 0f)
	{
		Global_110867[uParam0->f_6 /*14*/].f_1[iVar0 /*3*/] = { fParam7, fParam8, fParam9 };
		iVar0++;
	}
	if ((fParam10 != 0f && fParam11 != 0f) && fParam12 != 0f)
	{
		Global_110867[uParam0->f_6 /*14*/].f_1[iVar0 /*3*/] = { fParam10, fParam11, fParam12 };
		iVar0++;
	}
	if ((fParam13 != 0f && fParam14 != 0f) && fParam15 != 0f)
	{
		Global_110867[uParam0->f_6 /*14*/].f_1[iVar0 /*3*/] = { fParam13, fParam14, fParam15 };
		iVar0++;
	}
	if ((fParam16 != 0f && fParam17 != 0f) && fParam18 != 0f)
	{
		Global_110867[uParam0->f_6 /*14*/].f_1[iVar0 /*3*/] = { fParam16, fParam17, fParam18 };
		iVar0++;
	}
	if ((fParam19 != 0f && fParam20 != 0f) && fParam21 != 0f)
	{
		Global_110867[uParam0->f_6 /*14*/].f_1[iVar0 /*3*/] = { fParam19, fParam20, fParam21 };
		iVar0++;
	}
	if ((fParam22 != 0f && fParam23 != 0f) && fParam24 != 0f)
	{
		Global_110867[uParam0->f_6 /*14*/].f_1[iVar0 /*3*/] = { fParam22, fParam23, fParam24 };
		iVar0++;
	}
	if ((fParam25 != 0f && fParam26 != 0f) && fParam27 != 0f)
	{
		Global_110867[uParam0->f_6 /*14*/].f_1[iVar0 /*3*/] = { fParam25, fParam26, fParam27 };
		iVar0++;
	}
	Global_110867[uParam0->f_6 /*14*/] = iVar0;
	uParam0->f_6++;
}

void func_237(var uParam0, int iParam1, int iParam2, bool bParam3, struct<3> Param4, struct<3> Param5, struct<3> Param6, struct<3> Param7)//Position - 0x305AD
{
	func_236(uParam0, iParam1, iParam2, bParam3, Param4.f_0, Param4.f_1, Param4.f_2, Param5.f_0, Param5.f_1, Param5.f_2, Param6.f_0, Param6.f_1, Param6.f_2, Param7.f_0, Param7.f_1, Param7.f_2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

void func_240()//Position - 0x30618
{
	switch (__LIB_18__::func_173())
	{
		case 1:
			if (!iLocal_70)
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("AMBIENT_GANG_FAMILY"), joaat("COP"));
					iLocal_70 = 1;
				}
			}
			else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("AMBIENT_GANG_FAMILY"), joaat("COP"));
				iLocal_70 = 0;
			}
			break;
	}
}

void func_241()//Position - 0x30679
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	struct<27> Var7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	if (MISC::GET_GAME_TIMER() > iLocal_66)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = Global_97754[iLocal_68];
		Global_97754[iLocal_68] = 0;
		Global_97762[iLocal_68] = 0;
		Global_97766[iLocal_68] = 0;
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar1 = Global_91193[iVar0 /*5*/];
			iVar2 = Global_91193[iVar0 /*5*/].f_2;
			if (!iVar1 == -1)
			{
				if (!iVar2 == -1)
				{
					if (!Global_97374[iVar2 /*17*/].f_2)
					{
						iVar4 = Global_78588.f_109[iVar1 /*4*/];
						if (!BitTest(Global_91229[iVar4 /*34*/].f_15, 12))
						{
							uVar5 = func_266(iVar4);
							if (__LIB_11__::func_510(uVar5, iLocal_68))
							{
								if (iVar2 != -1)
								{
									Global_97758[iLocal_68] = iVar4;
									Global_97754[iLocal_68]++;
									__LIB_0__::func_371(iLocal_68, __LIB_0__::func_103(iVar4), 0, 0, 0);
								}
								else
								{
									Global_97758[iLocal_68] = iVar4;
									Global_97754[iLocal_68]++;
									__LIB_0__::func_371(iLocal_68, __LIB_0__::func_103(iVar4), 1, 0, 0);
								}
							}
							else if (iLocal_68 == 1)
							{
								if (iVar4 == 15)
								{
									Global_97758[iLocal_68] = iVar4;
									Global_97754[iLocal_68]++;
									__LIB_0__::func_371(iLocal_68, __LIB_0__::func_103(iVar4), 0, 0, 0);
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Global_113386.f_7688.f_136)
		{
			if (BitTest(Global_113386.f_7688[iVar0 /*15*/].f_1, 2) || BitTest(Global_113386.f_7688[iVar0 /*15*/].f_1, 3))
			{
				if (BitTest(Global_113386.f_7688[iVar0 /*15*/].f_2, iLocal_68))
				{
					Global_97762[iLocal_68]++;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Global_113386.f_7688.f_764)
		{
			if (BitTest(Global_113386.f_7688.f_651[iVar0 /*14*/].f_1, 2) || BitTest(Global_113386.f_7688.f_651[iVar0 /*14*/].f_1, 3))
			{
				if (BitTest(Global_113386.f_7688.f_651[iVar0 /*14*/].f_2, iLocal_68))
				{
					Global_97766[iLocal_68]++;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Global_113386.f_7688.f_866)
		{
			if (BitTest(Global_113386.f_7688.f_765[iVar0 /*10*/].f_1, 2) || BitTest(Global_113386.f_7688.f_765[iVar0 /*10*/].f_1, 3))
			{
				if (BitTest(Global_113386.f_7688.f_765[iVar0 /*10*/].f_2, iLocal_68))
				{
					Global_97766[iLocal_68]++;
				}
			}
			iVar0++;
		}
		if (!__LIB_0__::func_368(45))
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fbi4_prep3amb")) > 0)
			{
				Global_97754[iLocal_68]++;
				__LIB_0__::func_371(iLocal_68, __LIB_0__::func_103(35), 0, 0, 1);
			}
		}
		if (!__LIB_0__::func_368(12))
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("agency_prep2amb")) > 0)
			{
				if (iLocal_68 != 2)
				{
					Global_97754[iLocal_68]++;
					__LIB_0__::func_371(iLocal_68, __LIB_0__::func_103(67), 0, 0, 1);
				}
			}
		}
		if (!__LIB_0__::func_368(34))
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_heist_prepeamb")) > 0)
			{
				Global_97754[iLocal_68]++;
				__LIB_0__::func_371(iLocal_68, __LIB_0__::func_103(83), 0, 0, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < 63)
		{
			iVar6 = iVar0;
			if (((BitTest(Global_113386.f_18574[iVar0 /*6*/], 0) && BitTest(Global_113386.f_18574[iVar0 /*6*/], 1)) && BitTest(Global_113386.f_18574[iVar0 /*6*/], 2)) && !BitTest(Global_113386.f_18574[iVar0 /*6*/], 3))
			{
				bVar8 = iVar0;
				iVar9 = 0;
				while (bVar8 > 31)
				{
					bVar8 = (bVar8 - 32);
					iVar9++;
				}
				if (BitTest(Global_113386.f_18574.f_390[iVar9], bVar8))
				{
					__LIB_6__::func_773(iVar6, &Var7);
					if (BitTest(Var7.f_26, iLocal_68))
					{
						__LIB_0__::func_371(iLocal_68, __LIB_0__::func_339(iVar6), 0, 1, 0);
						Global_97754[iLocal_68]++;
					}
				}
			}
			iVar0++;
		}
		if (iVar3 != Global_97754[iLocal_68])
		{
		}
		iLocal_68++;
		if (iLocal_68 >= 3)
		{
			iLocal_68 = 0;
			iLocal_66 = MISC::GET_GAME_TIMER() + 2000;
		}
	}
	bVar10 = __LIB_9__::func_603();
	if ((!__LIB_0__::func_67(9) || !__LIB_0__::func_67(10)) || !__LIB_0__::func_67(11))
	{
		if (!bVar10)
		{
			if (__LIB_0__::func_176(62))
			{
				if (__LIB_0__::func_176(64))
				{
					__LIB_0__::func_460(9);
					__LIB_0__::func_460(10);
					__LIB_0__::func_460(11);
				}
				else if (__LIB_0__::func_104(1))
				{
					if (iLocal_67 != -1)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_67)
						{
							switch (__LIB_11__::func_512("AM_H_SWTCH4" /* GXT: Michael and Franklin are lying low after the jewelry heist, SWITCH unavailable. */))
							{
								case 2:
									__LIB_18__::func_203("AM_H_SWTCH4" /* GXT: Michael and Franklin are lying low after the jewelry heist, SWITCH unavailable. */, 1, 0, 1000, 10000, 7, 0, 0, 0);
									break;
								case 1:
									if (!__LIB_0__::func_67(9))
									{
										__LIB_0__::func_460(9);
										iLocal_67 = -1;
										StringCopy(&Global_112029, "", 16);
									}
									else if (!__LIB_0__::func_67(10))
									{
										__LIB_0__::func_460(10);
										iLocal_67 = -1;
										StringCopy(&Global_112029, "", 16);
									}
									else if (!__LIB_0__::func_67(11))
									{
										__LIB_0__::func_460(11);
										iLocal_67 = -1;
										StringCopy(&Global_112029, "", 16);
									}
									break;
								}
							}
					}
				}
				else if (iLocal_67 == -1)
				{
					iLocal_67 = MISC::GET_GAME_TIMER() + 15000;
				}
			}
		}
	}
	if (!__LIB_0__::func_67(12))
	{
		if (!bVar10)
		{
			if (__LIB_0__::func_176(45))
			{
				if (__LIB_0__::func_176(14))
				{
					__LIB_0__::func_460(12);
				}
				else if (__LIB_0__::func_104(1))
				{
					if (iLocal_67 != -1)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_67)
						{
							switch (__LIB_11__::func_512("AM_H_SWTCH8" /* GXT: Michael and Trevor are lying low in the country, SWITCH unavailable. */))
							{
								case 2:
									__LIB_18__::func_203("AM_H_SWTCH8" /* GXT: Michael and Trevor are lying low in the country, SWITCH unavailable. */, 1, 0, 1000, 10000, 7, 0, 0, 0);
									break;
								case 1:
									if (!__LIB_0__::func_67(12))
									{
										__LIB_0__::func_460(12);
										iLocal_67 = -1;
										StringCopy(&Global_112029, "", 16);
									}
									break;
								}
							}
					}
				}
				else if (iLocal_67 == -1)
				{
					iLocal_67 = MISC::GET_GAME_TIMER() + 15000;
				}
			}
		}
	}
	if (!bVar10)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				if (!__LIB_0__::func_67(13))
				{
					if (__LIB_0__::func_43(__LIB_18__::func_173()))
					{
						if (__LIB_0__::func_176(2))
						{
							switch (__LIB_11__::func_512("AM_H_SWTCH7" /* GXT: SWITCH unavailable while wanted. */))
							{
								case 2:
									if (__LIB_0__::func_104(1))
									{
										__LIB_18__::func_203("AM_H_SWTCH7" /* GXT: SWITCH unavailable while wanted. */, 1, 0, 1000, 10000, __LIB_26__::func_250(), 0, 0, 0);
									}
									break;
								case 1:
									__LIB_0__::func_460(13);
									break;
								}
							}
						}
				}
			}
			else if (!__LIB_0__::func_67(7))
			{
				if (__LIB_0__::func_176(2))
				{
					bVar11 = false;
					iVar12 = 0;
					while (iVar12 < 3)
					{
						if (Global_97754[iVar12] > 0)
						{
							bVar11 = true;
						}
						iVar12++;
					}
					if (bVar11)
					{
						if (__LIB_0__::func_104(1))
						{
							__LIB_19__::func_856("AM_H_SWTCH0" /* GXT: SWITCH between Michael and Franklin now available. Hold ~INPUT_CHARACTER_WHEEL~ to view the SWITCH menu. */, 1);
							switch (__LIB_11__::func_512("AM_H_SWTCH1" /* GXT: The number displayed on each character SWITCH selection represents how many missions that character has available. */))
							{
								case 2:
									__LIB_18__::func_203("AM_H_SWTCH1" /* GXT: The number displayed on each character SWITCH selection represents how many missions that character has available. */, 1, 0, 1000, 4000, 7, 0, 0, 0);
									func_242();
									break;
								case 1:
									__LIB_0__::func_460(7);
									break;
								}
							}
						}
				}
			}
			else if (!__LIB_0__::func_67(8))
			{
				if (__LIB_0__::func_176(2))
				{
					bVar13 = false;
					iVar14 = 0;
					while (iVar14 < 3)
					{
						if (Global_97754[iVar14] > 0)
						{
							bVar13 = true;
						}
						iVar14++;
					}
					if (bVar13)
					{
						switch (__LIB_11__::func_512("AM_H_SWTCH9" /* GXT: Some missions can only be started by specific characters. Michael missions will be represented by blue letters and Franklin by green letters. */))
						{
							case 2:
								__LIB_18__::func_203("AM_H_SWTCH9" /* GXT: Some missions can only be started by specific characters. Michael missions will be represented by blue letters and Franklin by green letters. */, 1, 0, 1000, 10000, 7, 0, 0, 0);
								break;
							case 1:
								__LIB_0__::func_460(8);
								break;
							}
						}
					}
				}
			}
	}
}

void func_242()//Position - 0x30DD7
{
	Global_112028 = MISC::GET_GAME_TIMER();
}

int func_266(int iParam0)//Position - 0x33033
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_91229[iParam0 /*34*/].f_11;
}

void func_267()//Position - 0x3305B
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	var uVar4[5];
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	struct<2> Var19;
	iVar7 = __LIB_18__::func_173();
	if (!__LIB_0__::func_43(iVar7))
	{
		return;
	}
	if (((Global_113386.f_20118.f_130[iVar7 /*41*/].f_36 && Global_113386.f_20118.f_130[iVar7 /*41*/].f_35) && !Global_113386.f_20118.f_130[iVar7 /*41*/].f_34) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		iVar6 = Global_113386.f_2363.f_539.f_4317[iVar7];
		while (__LIB_10__::func_603(iVar7, iVar0, &sVar3, &iVar5))
		{
			if (iVar5 == iVar6)
			{
				iVar1 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar4);
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					if (((((ENTITY::DOES_ENTITY_EXIST(uVar4[iVar2]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uVar4[iVar2], false)) && VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar3, uVar4[iVar2])) && !__LIB_0__::func_117(uVar4[iVar2])) && !__LIB_0__::func_108(uVar4[iVar2])) && Global_113386.f_20118.f_130[iVar7 /*41*/] == ENTITY::GET_ENTITY_MODEL(uVar4[iVar2]))
					{
						if (!Global_113386.f_20118.f_130[iVar7 /*41*/].f_40)
						{
							iLocal_184 = Global_113386.f_20118.f_130[iVar7 /*41*/];
							iLocal_185 = 1;
							bLocal_186 = (!Global_113386.f_20118.f_281[iVar7] && iVar7 == 1);
							if (!bLocal_186)
							{
								__LIB_40__::func_982(iVar7, 80, Global_113386.f_20118.f_130[iVar7 /*41*/].f_27);
							}
							Global_113386.f_20118.f_130[iVar7 /*41*/].f_40 = 1;
						}
						func_349(uVar4[iVar2], &(Global_113386.f_20118.f_130[iVar7 /*41*/]));
						__LIB_10__::func_367(&(Global_113386.f_20118.f_130[iVar7 /*41*/]), iVar7);
						__LIB_20__::func_96(&(Global_113386.f_20118.f_130[iVar7 /*41*/].f_28));
						iVar11 = -1;
						iVar12 = -1;
						VEHICLE::GET_VEHICLE_COLOURS(uVar4[iVar2], &iLocal_203, &iLocal_204);
						VEHICLE::GET_VEHICLE_EXTRA_COLOURS(uVar4[iVar2], &iLocal_205, &iLocal_206);
						switch (Global_113386.f_20118.f_130[iVar7 /*41*/].f_3)
						{
							case 0:
								iVar11 = 0;
								break;
							case 1:
								iVar11 = 1;
								break;
							case 2:
								iVar11 = 3;
								break;
							case 3:
								iVar11 = 4;
								break;
							case 4:
								iVar11 = 5;
								break;
						}
						switch (Global_113386.f_20118.f_130[iVar7 /*41*/].f_4)
						{
							case 0:
								iVar12 = 0;
								break;
							case 1:
								iVar12 = 1;
								break;
							case 2:
								iVar12 = 3;
								break;
							case 3:
								iVar12 = 4;
								break;
							case 4:
								iVar12 = 5;
								break;
						}
						if (iVar11 != 7 && iVar11 != 2)
						{
							VEHICLE::SET_VEHICLE_MOD_COLOR_1(uVar4[iVar2], iVar11, 0, 0);
						}
						if (iVar12 != 7 && iVar12 != 2)
						{
							VEHICLE::SET_VEHICLE_MOD_COLOR_2(uVar4[iVar2], iVar12, 0);
						}
						VEHICLE::SET_VEHICLE_COLOURS(uVar4[iVar2], iLocal_203, iLocal_204);
						VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uVar4[iVar2], iLocal_205, iLocal_206);
						if (__LIB_0__::func_117(uVar4[iVar2]))
						{
							iVar13 = 0;
							if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(uVar4[iVar2])))
							{
								iVar13 = 1;
							}
							func_309(iVar7, &(uVar4[iVar2]), iVar13, 1);
						}
						else
						{
							func_309(iVar7, &(uVar4[iVar2]), 3, 1);
						}
						iVar2 = 100;
					}
					iVar2++;
				}
				iVar0 = 100;
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_97782[iVar0] != 145 && Global_97792[iVar0] != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97772[iVar0], false))
			{
				Local_181[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_97772[iVar0], true) };
				fLocal_182[iVar0] = ENTITY::GET_ENTITY_HEADING(Global_97772[iVar0]);
				bVar9 = false;
				while (!bVar9 && __LIB_10__::func_603(Global_97782[iVar0], iVar10, &sVar3, &iVar5))
				{
					if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar3, Global_97772[iVar0]))
					{
						bVar9 = true;
						__LIB_10__::func_826(Global_97782[iVar0], iVar10, &(Local_181[iVar0 /*3*/]));
					}
					iVar10++;
				}
				iLocal_183[iVar0] = bVar9;
				if ((Global_113386.f_20118.f_130[iVar7 /*41*/].f_36 && Global_113386.f_20118.f_130[iVar7 /*41*/].f_35) && Global_113386.f_20118.f_130[iVar7 /*41*/] == Global_97792[iVar0])
				{
					if (!Global_113386.f_20118.f_130[iVar7 /*41*/].f_40)
					{
						iLocal_184 = Global_113386.f_20118.f_130[iVar7 /*41*/];
						iLocal_185 = 1;
						bLocal_186 = (!Global_113386.f_20118.f_281[iVar7] && iVar7 == 1);
						if (!bLocal_186)
						{
							__LIB_40__::func_982(iVar7, 80, Global_113386.f_20118.f_130[iVar7 /*41*/].f_27);
						}
						Global_113386.f_20118.f_130[iVar7 /*41*/].f_40 = 1;
					}
					func_349(Global_97772[iVar0], &(Global_113386.f_20118.f_130[iVar7 /*41*/]));
					__LIB_10__::func_367(&(Global_113386.f_20118.f_130[iVar7 /*41*/]), iVar7);
					__LIB_20__::func_96(&(Global_113386.f_20118.f_130[iVar7 /*41*/].f_28));
					iVar14 = -1;
					iVar15 = -1;
					VEHICLE::GET_VEHICLE_COLOURS(Global_97772[iVar0], &iLocal_203, &iLocal_204);
					VEHICLE::GET_VEHICLE_EXTRA_COLOURS(Global_97772[iVar0], &iLocal_205, &iLocal_206);
					switch (Global_113386.f_20118.f_130[iVar7 /*41*/].f_3)
					{
						case 0:
							iVar14 = 0;
							break;
						case 1:
							iVar14 = 1;
							break;
						case 2:
							iVar14 = 3;
							break;
						case 3:
							iVar14 = 4;
							break;
						case 4:
							iVar14 = 5;
							break;
					}
					switch (Global_113386.f_20118.f_130[iVar7 /*41*/].f_4)
					{
						case 0:
							iVar15 = 0;
							break;
						case 1:
							iVar15 = 1;
							break;
						case 2:
							iVar15 = 3;
							break;
						case 3:
							iVar15 = 4;
							break;
						case 4:
							iVar15 = 5;
							break;
					}
					if (iVar14 != 7 && iVar14 != 2)
					{
						VEHICLE::SET_VEHICLE_MOD_COLOR_1(Global_97772[iVar0], iVar14, 0, 0);
					}
					if (iVar15 != 7 && iVar15 != 2)
					{
						VEHICLE::SET_VEHICLE_MOD_COLOR_2(Global_97772[iVar0], iVar15, 0);
					}
					VEHICLE::SET_VEHICLE_COLOURS(Global_97772[iVar0], iLocal_203, iLocal_204);
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_97772[iVar0], iLocal_205, iLocal_206);
					iVar16 = 0;
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Global_97772[iVar0])))
					{
						iVar16 = 1;
					}
					func_309(iVar7, &(Global_97772[iVar0]), iVar16, 1);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97772[iVar0], false))
			{
				bVar8 = false;
				iVar6 = __LIB_6__::func_815(Local_181[iVar0 /*3*/], Global_97782[iVar0], 1);
				if (iVar6 != 10 && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_181[iVar0 /*3*/], Global_95479[iVar6 /*10*/].f_3, true) > 200f)
				{
					bVar8 = true;
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(Global_97792[iVar0]))
					{
						Global_97820[Global_97782[iVar0] /*3*/][1] = MISC::GET_GAME_TIMER();
					}
					else
					{
						Global_97820[Global_97782[iVar0] /*3*/][0] = MISC::GET_GAME_TIMER();
					}
				}
				if (iVar6 == 3 || iVar6 == 4)
				{
					bVar8 = true;
				}
				if (!iLocal_183[iVar0])
				{
					bVar8 = true;
				}
				if (bVar8)
				{
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(Global_97792[iVar0]))
					{
						Global_113386.f_2363.f_539.f_3588[1 /*10*/][Global_97782[iVar0] /*3*/] = { 0f, 0f, 0f };
					}
					else
					{
						Global_113386.f_2363.f_539.f_3588[0 /*10*/][Global_97782[iVar0] /*3*/] = { 0f, 0f, 0f };
					}
					if (Global_97782[iVar0] == __LIB_18__::func_173())
					{
						Global_77137.f_584 = { 0f, 0f, 0f };
						Global_77137.f_587 = { 0f, 0f, 0f };
					}
				}
				else
				{
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(Global_97792[iVar0]))
					{
						Global_113386.f_2363.f_539.f_3588[1 /*10*/][Global_97782[iVar0] /*3*/] = { Local_181[iVar0 /*3*/] };
						Global_113386.f_2363.f_539.f_3609[1 /*4*/][Global_97782[iVar0]] = fLocal_182[iVar0];
					}
					else
					{
						Global_113386.f_2363.f_539.f_3588[0 /*10*/][Global_97782[iVar0] /*3*/] = { Local_181[iVar0 /*3*/] };
						Global_113386.f_2363.f_539.f_3609[0 /*4*/][Global_97782[iVar0]] = fLocal_182[iVar0];
					}
					if (Global_97782[iVar0] == __LIB_18__::func_173())
					{
						Global_77137.f_584 = { 0f, 0f, 0f };
						Global_77137.f_587 = { 0f, 0f, 0f };
					}
				}
				Local_181[iVar0 /*3*/] = { 0f, 0f, 0f };
				iLocal_183[iVar0] = 0;
				Global_97772[iVar0] = 0;
				Global_97782[iVar0] = 145;
				Global_97792[iVar0] = 0;
			}
		}
		iVar0++;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			Global_100144[iVar7] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		else
		{
			iLocal_187 = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_100144[iVar7]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_100144[iVar7], false))
		{
			if (!Global_113386.f_32749.f_5588 && MISC::GET_GAME_TIMER() > iLocal_69)
			{
				if (__LIB_20__::func_323(Global_100144[iVar7], iVar7, 1))
				{
					iLocal_187 = 1;
				}
				else
				{
					if (iLocal_187)
					{
						func_291(Global_100144[iVar7], iVar7);
					}
					iLocal_187 = 0;
				}
				iLocal_69 = MISC::GET_GAME_TIMER() + 1000;
			}
			if (Global_100144[iVar7] != Global_97806[iVar7])
			{
				if (!Global_113386.f_20118[iVar7 /*43*/].f_40)
				{
					if (Global_113386.f_20118[iVar7 /*43*/] != ENTITY::GET_ENTITY_MODEL(Global_100144[iVar7]) || !MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_20118[iVar7 /*43*/].f_19), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(Global_100144[iVar7])))
					{
						if (__LIB_0__::func_117(Global_100144[iVar7]))
						{
							bVar17 = true;
							if (iVar7 != __LIB_0__::func_119(Global_100144[iVar7]))
							{
								bVar17 = false;
							}
							else if ((iVar7 == 1 && ENTITY::GET_ENTITY_MODEL(Global_100144[iVar7]) == joaat("bagger")) && !Global_113386.f_9085.f_99.f_58[118])
							{
								bVar17 = false;
							}
							else if (!Global_113386.f_20118.f_277[iVar7] && ENTITY::GET_ENTITY_MODEL(Global_100144[iVar7]) == __LIB_6__::func_853(iVar7, 1))
							{
								bVar17 = false;
							}
							if (bVar17)
							{
								iVar18 = 0;
								if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Global_100144[iVar7])))
								{
									iVar18 = 1;
								}
								func_309(iVar7, &(Global_100144[iVar7]), iVar18, 1);
								Global_97806[iVar7] = Global_100144[iVar7];
							}
						}
						else if (__LIB_20__::func_323(Global_100144[iVar7], iVar7, 1))
						{
							func_309(iVar7, &(Global_100144[iVar7]), 2, 1);
							Global_97806[iVar7] = Global_100144[iVar7];
							Global_113386.f_2363.f_539.f_4317[iVar7] = __LIB_6__::func_815(ENTITY::GET_ENTITY_COORDS(Global_97806[iVar7], true), iVar7, 1);
						}
					}
				}
			}
		}
	}
	if (((((Global_113386.f_20118.f_130[iVar7 /*41*/].f_36 && Global_113386.f_20118.f_130[iVar7 /*41*/].f_35) && !Global_113386.f_20118.f_130[iVar7 /*41*/].f_40) && !__LIB_0__::func_39(0)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(2))
	{
		iLocal_184 = Global_113386.f_20118.f_130[iVar7 /*41*/];
		iLocal_185 = 1;
		bLocal_186 = (!Global_113386.f_20118.f_281[iVar7] && iVar7 == 1);
		if (!bLocal_186)
		{
			__LIB_40__::func_982(iVar7, 80, Global_113386.f_20118.f_130[iVar7 /*41*/].f_27);
		}
		Global_113386.f_20118.f_130[iVar7 /*41*/].f_40 = 1;
	}
	else if (iLocal_185)
	{
		if ((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(2))
		{
			StringCopy(&Var19, "SOCIAL_CARAPP1" /* GXT: Your Los Santos Customs order has been processed for your ~a~. */, 16);
			if (bLocal_186)
			{
				StringCopy(&Var19, "SOCIAL_FREE1" /* GXT: Your Los Santos Customs order has been processed for your ~a~. This one's on the house, come back soon. */, 16);
			}
			if (__LIB_42__::func_10(96, &Var19, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iLocal_184)), -99, "NULL", 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0))
			{
				iLocal_185 = 0;
			}
		}
	}
}

void func_291(int iParam0, int iParam1)//Position - 0x3510A
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_39__::func_525(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_One"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113386.f_2363.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113386.f_32749.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113386.f_32749.f_5590 = iParam1;
	Global_78042 = iParam0;
	Global_113386.f_32749.f_5588 = 1;
	__LIB_6__::func_760(iParam0, &(Global_113386.f_32749.f_5510));
}

void func_309(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x393C5
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	if ((__LIB_0__::func_43(iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
	{
		if (iParam2 > Global_113386.f_2363.f_539.f_2407)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_291(*iParam1, iParam0);
		}
		if (VEHICLE::GET_NUM_MOD_KITS(*iParam1) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(*iParam1, 0);
		}
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/] = ENTITY::GET_ENTITY_MODEL(*iParam1);
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam1, &iVar1))
		{
			Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1 = ENTITY::GET_ENTITY_MODEL(iVar1);
		}
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3 = ENTITY::GET_ENTITY_HEALTH(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 2);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 3);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 4);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 5);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 6);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 7);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 8);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 9);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 10);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 11);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 12);
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam1, false))
		{
			iVar2 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		StringCopy(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam1), 16);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam1);
		VEHICLE::GET_VEHICLE_COLOURS(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87 = VEHICLE::GET_VEHICLE_WINDOW_TINT(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89 = VEHICLE::GET_VEHICLE_LIVERY(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(*iParam1);
		VEHICLE::GET_VEHICLE_NEON_COLOUR(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 2))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 3))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 0))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 1))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_113386.f_2363.f_539.f_4317[iParam0] = 10;
		if (VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) >= 0 && __LIB_37__::func_797(*iParam1, 0, &uVar0))
		{
			__LIB_0__::func_107(iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_113386.f_20118[iParam0 /*43*/].f_40 = 1;
				Global_113386.f_20118[iParam0 /*43*/] = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
				Global_113386.f_20118[iParam0 /*43*/].f_3 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_113386.f_20118[iParam0 /*43*/].f_4 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_113386.f_20118[iParam0 /*43*/].f_5 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_113386.f_20118[iParam0 /*43*/].f_6 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_113386.f_20118[iParam0 /*43*/].f_10 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_113386.f_20118[iParam0 /*43*/].f_16 = !Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_113386.f_20118[iParam0 /*43*/].f_19 = { Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_113386.f_20118[iParam0 /*43*/].f_23 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_113386.f_20118[iParam0 /*43*/].f_7 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_113386.f_20118[iParam0 /*43*/].f_8 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_113386.f_20118[iParam0 /*43*/].f_9 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_113386.f_20118[iParam0 /*43*/].f_11 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_113386.f_20118[iParam0 /*43*/].f_12 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_113386.f_20118[iParam0 /*43*/].f_13 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_113386.f_20118[iParam0 /*43*/].f_14 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_113386.f_20118[iParam0 /*43*/].f_15 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_113386.f_20118[iParam0 /*43*/].f_18 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_113386.f_20118[iParam0 /*43*/].f_17 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_113386.f_20118[iParam0 /*43*/].f_24 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 11) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_25 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 12) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_26 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 4) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_27 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 23) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_28 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 14) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_29 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 16) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_30 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 15) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_32 = VEHICLE::GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(*iParam1);
				Global_113386.f_20118[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1);
				Global_113386.f_20118[iParam0 /*43*/].f_33[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 0);
				Global_113386.f_20118[iParam0 /*43*/].f_33[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 1);
				Global_113386.f_20118[iParam0 /*43*/].f_33[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 2);
				Global_113386.f_20118[iParam0 /*43*/].f_33[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 3);
				Global_113386.f_20118[iParam0 /*43*/].f_39 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*iParam1);
				Global_113386.f_20118[iParam0 /*43*/].f_31 = __LIB_0__::func_265(*iParam1);
				Global_113386.f_20118[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(*iParam1);
				VEHICLE::GET_VEHICLE_MOD_COLOR_1(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_310(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_113386.f_20118[iParam0 /*43*/].f_1));
				VEHICLE::GET_VEHICLE_MOD_COLOR_2(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_310(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_113386.f_20118[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_310(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)//Position - 0x39FD9
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	while (func_311(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
	{
		if ((iParam0 == iVar3 && (!bParam3 || iParam1 == iVar4)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_311(int iParam0, char* sParam1, int iParam2, var uParam3, var uParam4)//Position - 0x3A04C
{
	*iParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL" /* GXT: Brushed Black Steel */, 16);
			*iParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE" /* GXT: Carbon Black */, 16);
			*iParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN" /* GXT: Chocolate Brown */, 16);
			*iParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		case 3:
			StringCopy(sParam1, "PURPLE" /* GXT: Schafter Purple */, 16);
			*iParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		case 4:
			StringCopy(sParam1, "HOT PINK" /* GXT: Hot Pink */, 16);
			*iParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		case 5:
			StringCopy(sParam1, "FORMULA_RED" /* GXT: Formula Red */, 16);
			*iParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		case 6:
			StringCopy(sParam1, "BLUE" /* GXT: Blue */, 16);
			*iParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE" /* GXT: Ultra Blue */, 16);
			*iParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		case 8:
			StringCopy(sParam1, "RACING_GREEN" /* GXT: Racing Green */, 16);
			*iParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		case 9:
			StringCopy(sParam1, "LIME_GREEN" /* GXT: Lime Green */, 16);
			*iParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		case 10:
			StringCopy(sParam1, "RACE_YELLOW" /* GXT: Race Yellow */, 16);
			*iParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		case 11:
			StringCopy(sParam1, "ORANGE" /* GXT: Orange */, 16);
			*iParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		case 12:
			StringCopy(sParam1, "GOLD" /* GXT: Gold */, 16);
			*iParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		case 13:
			StringCopy(sParam1, "SILVER" /* GXT: Silver */, 16);
			*iParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		case 14:
			StringCopy(sParam1, "CHROME" /* GXT: Chrome */, 16);
			*iParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		case 15:
			StringCopy(sParam1, "WHITE" /* GXT: Ice White */, 16);
			*iParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		case 16:
			StringCopy(sParam1, "BLACK" /* GXT: Black */, 16);
			*iParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		case 17:
			StringCopy(sParam1, "GRAPHITE" /* GXT: Graphite */, 16);
			*iParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK" /* GXT: Anthracite Black */, 16);
			*iParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		case 19:
			StringCopy(sParam1, "BLACK_STEEL" /* GXT: Black Steel */, 16);
			*iParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		case 20:
			StringCopy(sParam1, "DARK_SILVER" /* GXT: Dark Steel */, 16);
			*iParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		case 21:
			StringCopy(sParam1, "BLUE_SILVER" /* GXT: Bluish Silver */, 16);
			*iParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL" /* GXT: Rolled Steel */, 16);
			*iParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER" /* GXT: Shadow Silver */, 16);
			*iParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		case 24:
			StringCopy(sParam1, "STONE_SILVER" /* GXT: Stone Silver */, 16);
			*iParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER" /* GXT: Midnight Silver */, 16);
			*iParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL" /* GXT: Cast Iron Silver */, 16);
			*iParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		case 27:
			StringCopy(sParam1, "RED" /* GXT: Red */, 16);
			*iParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		case 28:
			StringCopy(sParam1, "TORINO_RED" /* GXT: Torino Red */, 16);
			*iParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		case 29:
			StringCopy(sParam1, "LAVA_RED" /* GXT: Lava Red */, 16);
			*iParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		case 30:
			StringCopy(sParam1, "BLAZE_RED" /* GXT: Blaze Red */, 16);
			*iParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		case 31:
			StringCopy(sParam1, "GRACE_RED" /* GXT: Grace Red */, 16);
			*iParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		case 32:
			StringCopy(sParam1, "GARNET_RED" /* GXT: Garnet Red */, 16);
			*iParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		case 33:
			StringCopy(sParam1, "SUNSET_RED" /* GXT: Sunset Red */, 16);
			*iParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		case 34:
			StringCopy(sParam1, "CABERNET_RED" /* GXT: Cabernet Red */, 16);
			*iParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		case 35:
			StringCopy(sParam1, "WINE_RED" /* GXT: Wine Red */, 16);
			*iParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		case 36:
			StringCopy(sParam1, "CANDY_RED" /* GXT: Candy Red */, 16);
			*iParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		case 37:
			StringCopy(sParam1, "PINK" /* GXT: Pfister Pink */, 16);
			*iParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		case 38:
			StringCopy(sParam1, "SALMON_PINK" /* GXT: Salmon Pink */, 16);
			*iParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE" /* GXT: Sunrise Orange */, 16);
			*iParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		case 40:
			StringCopy(sParam1, "ORANGE" /* GXT: Orange */, 16);
			*iParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE" /* GXT: Bright Orange */, 16);
			*iParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		case 42:
			StringCopy(sParam1, "BRONZE" /* GXT: Bronze */, 16);
			*iParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		case 43:
			StringCopy(sParam1, "YELLOW" /* GXT: Yellow */, 16);
			*iParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		case 44:
			StringCopy(sParam1, "RACE_YELLOW" /* GXT: Race Yellow */, 16);
			*iParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW" /* GXT: Dew Yellow */, 16);
			*iParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		case 46:
			StringCopy(sParam1, "DARK_GREEN" /* GXT: Dark Green */, 16);
			*iParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		case 47:
			StringCopy(sParam1, "RACING_GREEN" /* GXT: Racing Green */, 16);
			*iParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		case 48:
			StringCopy(sParam1, "SEA_GREEN" /* GXT: Sea Green */, 16);
			*iParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN" /* GXT: Olive Green */, 16);
			*iParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN" /* GXT: Bright Green */, 16);
			*iParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		case 51:
			StringCopy(sParam1, "PETROL_GREEN" /* GXT: Gasoline Green */, 16);
			*iParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		case 52:
			StringCopy(sParam1, "LIME_GREEN" /* GXT: Lime Green */, 16);
			*iParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE" /* GXT: Midnight Blue */, 16);
			*iParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE" /* GXT: Galaxy Blue */, 16);
			*iParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		case 55:
			StringCopy(sParam1, "DARK_BLUE" /* GXT: Dark Blue */, 16);
			*iParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		case 56:
			StringCopy(sParam1, "SAXON_BLUE" /* GXT: Saxon Blue */, 16);
			*iParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		case 57:
			StringCopy(sParam1, "MARINER_BLUE" /* GXT: Mariner Blue */, 16);
			*iParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE" /* GXT: Harbor Blue */, 16);
			*iParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE" /* GXT: Diamond Blue */, 16);
			*iParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		case 60:
			StringCopy(sParam1, "SURF_BLUE" /* GXT: Surf Blue */, 16);
			*iParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE" /* GXT: Nautical Blue */, 16);
			*iParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		case 62:
			StringCopy(sParam1, "RACING_BLUE" /* GXT: Racing Blue */, 16);
			*iParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE" /* GXT: Ultra Blue */, 16);
			*iParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE" /* GXT: Light Blue */, 16);
			*iParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN" /* GXT: Chocolate Brown */, 16);
			*iParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		case 66:
			StringCopy(sParam1, "BISON_BROWN" /* GXT: Bison Brown */, 16);
			*iParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		case 67:
			StringCopy(sParam1, "CREEK_BROWN" /* GXT: Creek Brown */, 16);
			*iParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		case 68:
			StringCopy(sParam1, "UMBER_BROWN" /* GXT: Feltzer Brown */, 16);
			*iParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN" /* GXT: Maple Brown */, 16);
			*iParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN" /* GXT: Beechwood Brown */, 16);
			*iParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN" /* GXT: Sienna Brown */, 16);
			*iParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN" /* GXT: Saddle Brown */, 16);
			*iParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		case 73:
			StringCopy(sParam1, "MOSS_BROWN" /* GXT: Moss Brown */, 16);
			*iParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN" /* GXT: Woodbeech Brown */, 16);
			*iParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		case 75:
			StringCopy(sParam1, "STRAW_BROWN" /* GXT: Straw Brown */, 16);
			*iParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		case 76:
			StringCopy(sParam1, "SANDY_BROWN" /* GXT: Sandy Brown */, 16);
			*iParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN" /* GXT: Bleached Brown */, 16);
			*iParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE" /* GXT: Spinnaker Purple */, 16);
			*iParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE" /* GXT: Midnight Purple */, 16);
			*iParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE" /* GXT: Bright Purple */, 16);
			*iParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		case 81:
			StringCopy(sParam1, "CREAM" /* GXT: Cream */, 16);
			*iParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		case 82:
			StringCopy(sParam1, "WHITE" /* GXT: Ice White */, 16);
			*iParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		case 83:
			StringCopy(sParam1, "FROST_WHITE" /* GXT: Frost White */, 16);
			*iParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		case 84:
			StringCopy(sParam1, "BLACK" /* GXT: Black */, 16);
			*iParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE" /* GXT: Carbon Black */, 16);
			*iParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		case 86:
			StringCopy(sParam1, "GRAPHITE" /* GXT: Graphite */, 16);
			*iParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK" /* GXT: Anthracite Black */, 16);
			*iParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		case 88:
			StringCopy(sParam1, "BLACK_STEEL" /* GXT: Black Steel */, 16);
			*iParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 89:
			StringCopy(sParam1, "DARK_SILVER" /* GXT: Dark Steel */, 16);
			*iParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		case 90:
			StringCopy(sParam1, "SILVER" /* GXT: Silver */, 16);
			*iParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		case 91:
			StringCopy(sParam1, "BLUE_SILVER" /* GXT: Bluish Silver */, 16);
			*iParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL" /* GXT: Rolled Steel */, 16);
			*iParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER" /* GXT: Shadow Silver */, 16);
			*iParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		case 94:
			StringCopy(sParam1, "STONE_SILVER" /* GXT: Stone Silver */, 16);
			*iParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER" /* GXT: Midnight Silver */, 16);
			*iParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL" /* GXT: Cast Iron Silver */, 16);
			*iParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		case 97:
			StringCopy(sParam1, "RED" /* GXT: Red */, 16);
			*iParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		case 98:
			StringCopy(sParam1, "TORINO_RED" /* GXT: Torino Red */, 16);
			*iParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		case 99:
			StringCopy(sParam1, "FORMULA_RED" /* GXT: Formula Red */, 16);
			*iParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		case 100:
			StringCopy(sParam1, "LAVA_RED" /* GXT: Lava Red */, 16);
			*iParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		case 101:
			StringCopy(sParam1, "BLAZE_RED" /* GXT: Blaze Red */, 16);
			*iParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		case 102:
			StringCopy(sParam1, "GRACE_RED" /* GXT: Grace Red */, 16);
			*iParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		case 103:
			StringCopy(sParam1, "GARNET_RED" /* GXT: Garnet Red */, 16);
			*iParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		case 104:
			StringCopy(sParam1, "SUNSET_RED" /* GXT: Sunset Red */, 16);
			*iParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		case 105:
			StringCopy(sParam1, "CABERNET_RED" /* GXT: Cabernet Red */, 16);
			*iParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		case 106:
			StringCopy(sParam1, "WINE_RED" /* GXT: Wine Red */, 16);
			*iParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		case 107:
			StringCopy(sParam1, "CANDY_RED" /* GXT: Candy Red */, 16);
			*iParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		case 108:
			StringCopy(sParam1, "HOT PINK" /* GXT: Hot Pink */, 16);
			*iParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		case 109:
			StringCopy(sParam1, "PINK" /* GXT: Pfister Pink */, 16);
			*iParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		case 110:
			StringCopy(sParam1, "SALMON_PINK" /* GXT: Salmon Pink */, 16);
			*iParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE" /* GXT: Sunrise Orange */, 16);
			*iParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE" /* GXT: Bright Orange */, 16);
			*iParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		case 113:
			StringCopy(sParam1, "GOLD" /* GXT: Gold */, 16);
			*iParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		case 114:
			StringCopy(sParam1, "BRONZE" /* GXT: Bronze */, 16);
			*iParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		case 115:
			StringCopy(sParam1, "YELLOW" /* GXT: Yellow */, 16);
			*iParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW" /* GXT: Dew Yellow */, 16);
			*iParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		case 117:
			StringCopy(sParam1, "DARK_GREEN" /* GXT: Dark Green */, 16);
			*iParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		case 118:
			StringCopy(sParam1, "SEA_GREEN" /* GXT: Sea Green */, 16);
			*iParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN" /* GXT: Olive Green */, 16);
			*iParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN" /* GXT: Bright Green */, 16);
			*iParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		case 121:
			StringCopy(sParam1, "PETROL_GREEN" /* GXT: Gasoline Green */, 16);
			*iParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		case 122:
			StringCopy(sParam1, "LIME_GREEN" /* GXT: Lime Green */, 16);
			*iParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE" /* GXT: Midnight Blue */, 16);
			*iParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE" /* GXT: Galaxy Blue */, 16);
			*iParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		case 125:
			StringCopy(sParam1, "DARK_BLUE" /* GXT: Dark Blue */, 16);
			*iParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		case 126:
			StringCopy(sParam1, "SAXON_BLUE" /* GXT: Saxon Blue */, 16);
			*iParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		case 127:
			StringCopy(sParam1, "BLUE" /* GXT: Blue */, 16);
			*iParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		case 128:
			StringCopy(sParam1, "MARINER_BLUE" /* GXT: Mariner Blue */, 16);
			*iParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE" /* GXT: Harbor Blue */, 16);
			*iParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE" /* GXT: Diamond Blue */, 16);
			*iParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		case 131:
			StringCopy(sParam1, "SURF_BLUE" /* GXT: Surf Blue */, 16);
			*iParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE" /* GXT: Nautical Blue */, 16);
			*iParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		case 133:
			StringCopy(sParam1, "RACING_BLUE" /* GXT: Racing Blue */, 16);
			*iParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE" /* GXT: Light Blue */, 16);
			*iParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		case 135:
			StringCopy(sParam1, "BISON_BROWN" /* GXT: Bison Brown */, 16);
			*iParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		case 136:
			StringCopy(sParam1, "CREEK_BROWN" /* GXT: Creek Brown */, 16);
			*iParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		case 137:
			StringCopy(sParam1, "UMBER_BROWN" /* GXT: Feltzer Brown */, 16);
			*iParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN" /* GXT: Maple Brown */, 16);
			*iParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN" /* GXT: Beechwood Brown */, 16);
			*iParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN" /* GXT: Sienna Brown */, 16);
			*iParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN" /* GXT: Saddle Brown */, 16);
			*iParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		case 142:
			StringCopy(sParam1, "MOSS_BROWN" /* GXT: Moss Brown */, 16);
			*iParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN" /* GXT: Woodbeech Brown */, 16);
			*iParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		case 144:
			StringCopy(sParam1, "STRAW_BROWN" /* GXT: Straw Brown */, 16);
			*iParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		case 145:
			StringCopy(sParam1, "SANDY_BROWN" /* GXT: Sandy Brown */, 16);
			*iParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN" /* GXT: Bleached Brown */, 16);
			*iParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		case 147:
			StringCopy(sParam1, "PURPLE" /* GXT: Schafter Purple */, 16);
			*iParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE" /* GXT: Spinnaker Purple */, 16);
			*iParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE" /* GXT: Midnight Purple */, 16);
			*iParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE" /* GXT: Bright Purple */, 16);
			*iParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		case 151:
			StringCopy(sParam1, "CREAM" /* GXT: Cream */, 16);
			*iParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		case 152:
			StringCopy(sParam1, "FROST_WHITE" /* GXT: Frost White */, 16);
			*iParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		case 153:
			StringCopy(sParam1, "BLACK" /* GXT: Black */, 16);
			*iParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		case 154:
			StringCopy(sParam1, "GREY" /* GXT: Gray */, 16);
			*iParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		case 155:
			StringCopy(sParam1, "LIGHT_GREY" /* GXT: Light Gray */, 16);
			*iParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		case 156:
			StringCopy(sParam1, "WHITE" /* GXT: Ice White */, 16);
			*iParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		case 157:
			StringCopy(sParam1, "BLUE" /* GXT: Blue */, 16);
			*iParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		case 158:
			StringCopy(sParam1, "DARK_BLUE" /* GXT: Dark Blue */, 16);
			*iParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE" /* GXT: Midnight Blue */, 16);
			*iParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE" /* GXT: Midnight Purple */, 16);
			*iParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		case 161:
			StringCopy(sParam1, "Purple" /* GXT: Schafter Purple */, 16);
			*iParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		case 162:
			StringCopy(sParam1, "RED" /* GXT: Red */, 16);
			*iParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		case 163:
			StringCopy(sParam1, "DARK_RED" /* GXT: Dark Red */, 16);
			*iParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		case 164:
			StringCopy(sParam1, "ORANGE" /* GXT: Orange */, 16);
			*iParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		case 165:
			StringCopy(sParam1, "YELLOW" /* GXT: Yellow */, 16);
			*iParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		case 166:
			StringCopy(sParam1, "GREEN" /* GXT: Green */, 16);
			*iParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		case 167:
			StringCopy(sParam1, "MATTE_FOR" /* GXT: Forest Green */, 16);
			*iParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		case 168:
			StringCopy(sParam1, "MATTE_FOIL" /* GXT: Foliage Green */, 16);
			*iParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		case 169:
			StringCopy(sParam1, "MATTE_OD" /* GXT: Olive Drab */, 16);
			*iParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		case 170:
			StringCopy(sParam1, "MATTE_DIRT" /* GXT: Dark Earth */, 16);
			*iParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		case 171:
			StringCopy(sParam1, "MATTE_DESERT" /* GXT: Desert Tan */, 16);
			*iParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		case 172:
			StringCopy(sParam1, "BR_STEEL" /* GXT: Brushed Steel */, 16);
			*iParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM" /* GXT: Brushed Aluminum */, 16);
			*iParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		case 174:
			StringCopy(sParam1, "GOLD_P" /* GXT: Pure Gold */, 16);
			*iParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		case 175:
			StringCopy(sParam1, "GOLD_S" /* GXT: Brushed Gold */, 16);
			*iParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *iParam2 != -1;
}

int func_349(int iParam0, var uParam1)//Position - 0x3D4BA
{
	int iVar0;
	char* sVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false) && *uParam1 == ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (*uParam1 == joaat("patriot"))
			{
				uParam1->f_13 = -1;
			}
			if (*uParam1 == joaat("prairie"))
			{
				if (uParam1->f_13 > 1)
				{
					uParam1->f_13 = 1;
				}
			}
		}
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_28));
		if (uParam1->f_32 >= 0 && uParam1->f_32 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, uParam1->f_32);
		}
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar4, &iVar5);
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &iVar6, &iVar7);
		if (func_311(uParam1->f_1, &sVar1, &iVar0, &uVar2, &uVar3) && *uParam1 != joaat("sovereign"))
		{
			iVar4 = uVar2;
			iVar6 = uVar3;
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
			iVar8 = 7;
			if (iVar0 == 0)
			{
				iVar8 = 0;
			}
			else if (iVar0 == 1)
			{
				iVar8 = 1;
			}
			else if (iVar0 == 2)
			{
				iVar8 = 3;
			}
			else if (iVar0 == 3)
			{
				iVar8 = 4;
			}
			else if (iVar0 == 4)
			{
				iVar8 = 5;
			}
			VEHICLE::SET_VEHICLE_MOD_COLOR_1(iParam0, iVar8, 0, 0);
		}
		if (func_311(uParam1->f_2, &sVar1, &iVar0, &uVar2, &uVar3) && *uParam1 != joaat("sovereign"))
		{
			iVar5 = uVar2;
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
			iVar9 = 7;
			if (iVar0 == 0)
			{
				iVar9 = 0;
			}
			else if (iVar0 == 1)
			{
				iVar9 = 1;
			}
			else if (iVar0 == 2)
			{
				iVar9 = 3;
			}
			else if (iVar0 == 3)
			{
				iVar9 = 4;
			}
			else if (iVar0 == 4)
			{
				iVar9 = 5;
			}
			VEHICLE::SET_VEHICLE_MOD_COLOR_2(iParam0, iVar9, 0);
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam0, iVar4, iVar5);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, iVar6, iVar7);
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(iParam0, 0f);
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_6, uParam1->f_7, uParam1->f_8);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, !uParam1->f_18);
		if (uParam1->f_5 == -1 && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("granger"))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_5);
		}
		if (uParam1->f_13 != -1 && uParam1->f_13 != VEHICLE::GET_VEHICLE_MOD(iParam0, 4) + 1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 4);
			if (uParam1->f_13 > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(iParam0, 4, (uParam1->f_13 - 1), false);
			}
		}
		if (uParam1->f_9 != -1 && uParam1->f_9 != VEHICLE::GET_VEHICLE_MOD(iParam0, 11) + 1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 11);
			if (uParam1->f_9 > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(iParam0, 11, (uParam1->f_9 - 1), false);
			}
		}
		if (uParam1->f_10 != -1 && uParam1->f_10 != VEHICLE::GET_VEHICLE_MOD(iParam0, 12) + 1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 12);
			if (uParam1->f_10 > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(iParam0, 12, (uParam1->f_10 - 1), false);
			}
		}
		if ((uParam1->f_16 != -1 && uParam1->f_16 != VEHICLE::GET_VEHICLE_MOD(iParam0, 14) + 1) && uParam1->f_16 < 9)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 14);
			if (uParam1->f_16 > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(iParam0, 14, (uParam1->f_16 - 1), false);
			}
		}
		if (uParam1->f_14 != -1 && uParam1->f_14 != VEHICLE::GET_VEHICLE_MOD(iParam0, 15) + 1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 15);
			if (uParam1->f_14 > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(iParam0, 15, (uParam1->f_14 - 1), false);
			}
		}
		if (uParam1->f_15 != -1 && uParam1->f_15 != VEHICLE::GET_VEHICLE_MOD(iParam0, 16) + 1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
			if (uParam1->f_15 > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(iParam0, 16, (uParam1->f_15 - 1), false);
			}
		}
		if ((uParam1->f_11 != -1 && uParam1->f_11 != VEHICLE::GET_VEHICLE_MOD(iParam0, 23) + 1) && __LIB_10__::func_368(uParam1->f_12))
		{
			iVar10 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 23);
			if (uParam1->f_11 > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(iParam0, 23, (uParam1->f_11 - 1), iVar10 > 0);
			}
			else
			{
				__LIB_0__::func_288(iParam0, -1);
				__LIB_0__::func_288(iParam0, VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0));
				VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 23);
			}
		}
		if (uParam1->f_19 != -1)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(iParam0, 18, uParam1->f_19 > 0);
		}
		if (uParam1->f_17 != -1)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(iParam0, 22, uParam1->f_17 > 0);
		}
		if (uParam1->f_20 != -1)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(iParam0, 20, uParam1->f_20 > 0);
		}
		return 1;
	}
	return 0;
}

void func_384()//Position - 0x3EDB9
{
	func_665();
	if (__LIB_0__::func_198() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return;
	}
	if (__LIB_6__::func_854(0) || __LIB_6__::func_854(14))
	{
		func_661();
		return;
	}
	if (Global_78319)
	{
		func_661();
		return;
	}
	func_385();
}

void func_385()//Position - 0x3EE06
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int* iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	bVar0 = __LIB_0__::func_388(iLocal_202);
	if (!__LIB_32__::func_759(bVar0))
	{
		if (Local_71.f_17[iLocal_202] != Global_97919[iLocal_202])
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_71.f_17[iLocal_202]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Global_97919[iLocal_202]))
				{
					Global_97919[iLocal_202] = Local_71.f_17[iLocal_202];
				}
			}
			Local_71.f_17[iLocal_202] = Global_97919[iLocal_202];
			if (!ENTITY::IS_ENTITY_DEAD(Local_71.f_17[iLocal_202], false))
			{
				func_649(Local_71.f_17[iLocal_202]);
				Global_113386.f_2363.f_539.f_2296[bVar0] = __LIB_13__::func_95();
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_71.f_17[iLocal_202], false))
				{
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_71.f_17[iLocal_202], false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
						func_639(Local_71.f_17[iLocal_202], &(Global_99845[bVar0 /*98*/]), &(Global_100148[bVar0 /*3*/]), &(Global_100158[bVar0]), &(Global_100140[bVar0]), &(Global_4541522[bVar0]));
						func_638(bVar0);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
					}
				}
			}
			__LIB_35__::func_88(bVar0);
			if (Global_99845[bVar0 /*98*/] != 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_99845[bVar0 /*98*/]);
			}
			return;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_71.f_17[iLocal_202]))
		{
			iVar2 = 26;
			if (!func_620(bVar0, &iVar2))
			{
				if (Global_97919[iLocal_202] != 0)
				{
					Global_97919[iLocal_202] = 0;
				}
			}
			else
			{
				iVar3 = 0;
				if (func_389(&iVar3, bVar0, Global_99845[bVar0 /*98*/], 1))
				{
					Global_97919[iLocal_202] = iVar3;
					__LIB_12__::func_115(&Global_97919);
				}
			}
		}
		else
		{
			iVar4 = MISC::GET_GAME_TIMER();
			if (Global_43604[bVar0] < iVar4 + 1000)
			{
				func_387(bVar0);
			}
			if (ENTITY::IS_ENTITY_A_PED(Local_71.f_17[iLocal_202]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_71.f_17[iLocal_202], false))
				{
					iVar5 = 26;
					if (func_386(Local_71.f_17[iLocal_202], bVar0, iLocal_202, &iVar5))
					{
						if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_71.f_17[iLocal_202], true))
						{
							func_649(Local_71.f_17[iLocal_202]);
							Global_113386.f_2363.f_539.f_2296[bVar0] = __LIB_13__::func_95();
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_71.f_17[iLocal_202], false))
							{
								iVar6 = PED::GET_VEHICLE_PED_IS_IN(Local_71.f_17[iLocal_202], false);
							}
							else if (ENTITY::DOES_ENTITY_EXIST(Global_100144[bVar0]))
							{
								if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_100144[bVar0], false))
								{
									iVar6 = Global_100144[bVar0];
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iVar6))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar6, true, true);
								func_639(Local_71.f_17[iLocal_202], &(Global_99845[bVar0 /*98*/]), &(Global_100148[bVar0 /*3*/]), &(Global_100158[bVar0]), &(Global_100140[bVar0]), &(Global_4541522[bVar0]));
								func_638(bVar0);
								ENTITY::SET_ENTITY_COORDS(Local_71.f_17[iLocal_202], ENTITY::GET_ENTITY_COORDS(Local_71.f_17[iLocal_202], true), true, false, false, true);
								VEHICLE::DELETE_VEHICLE(&iVar6);
							}
							PED::DELETE_PED(&(Local_71.f_17[iLocal_202]));
							if (ENTITY::DOES_ENTITY_EXIST(Global_97919[iLocal_202]))
							{
								PED::DELETE_PED(&(Global_97919[iLocal_202]));
							}
						}
						else
						{
							sVar7 = "";
							iVar8 = 0;
							sVar7 = ENTITY::GET_ENTITY_SCRIPT(Local_71.f_17[iLocal_202], &iVar8);
							if (MISC::IS_STRING_NULL_OR_EMPTY(sVar7))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_71.f_17[iLocal_202], true, true);
								return;
							}
							if (MISC::ARE_STRINGS_EQUAL(sVar7, "player_controller_b"))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_71.f_17[iLocal_202], true, true);
								return;
							}
							if (MISC::ARE_STRINGS_EQUAL(sVar7, "friends_controller"))
							{
								return;
							}
							if (MISC::ARE_STRINGS_EQUAL(sVar7, "FriendActivity") || MISC::ARE_STRINGS_EQUAL(sVar7, "family_scene_t0"))
							{
								return;
							}
							if (((MISC::ARE_STRINGS_EQUAL(sVar7, "mission_triggerer_a") || MISC::ARE_STRINGS_EQUAL(sVar7, "mission_triggerer_b")) || MISC::ARE_STRINGS_EQUAL(sVar7, "mission_triggerer_c")) || MISC::ARE_STRINGS_EQUAL(sVar7, "mission_triggerer_d"))
							{
								return;
							}
							if (MISC::ARE_STRINGS_EQUAL(sVar7, "selector_example"))
							{
								return;
							}
						}
					}
					else
					{
						if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							func_639(Local_71.f_17[iLocal_202], &(Global_99845[bVar0 /*98*/]), &(Global_100148[bVar0 /*3*/]), &(Global_100158[bVar0]), &(Global_100140[bVar0]), &(Global_4541522[bVar0]));
							func_638(bVar0);
						}
						if (Local_71.f_17[iLocal_202] != PLAYER::PLAYER_PED_ID())
						{
							if ((PED::IS_PED_FALLING(Local_71.f_17[iLocal_202]) && iVar5 != 22) && iVar5 != 21)
							{
								ENTITY::SET_ENTITY_COORDS(Local_71.f_17[iLocal_202], Global_113386.f_2363.f_539.f_2300[iLocal_202 /*3*/], true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(Local_71.f_17[iLocal_202], Global_113386.f_2363.f_539.f_2310[iLocal_202]);
								ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_71.f_17[iLocal_202], true);
							}
						}
					}
				}
				else if (Global_113386.f_18533[bVar0] != 0)
				{
					Global_113386.f_18533[bVar0] = 0;
					func_649(Local_71.f_17[iLocal_202]);
					Global_113386.f_2363.f_539.f_2296[bVar0] = __LIB_13__::func_95();
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_71.f_17[iLocal_202], true, true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_71.f_17[iLocal_202]));
					Local_71.f_17[iLocal_202] = 0;
				}
			}
		}
	}
	else if (Global_97919[iLocal_202] != 0)
	{
		Global_97919[iLocal_202] = 0;
	}
	iVar9 = iLocal_202;
	iVar9++;
	if (iVar9 >= 3)
	{
		iVar9 = 0;
	}
	iLocal_202 = iVar9;
}

int func_386(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x3F365
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	bool bVar4;
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		*iParam3 = 16;
		return 0;
	}
	if (Global_113386.f_18533[bParam1] == 0)
	{
		*iParam3 = 17;
		return 0;
	}
	if (Global_97919.f_7 == iParam2)
	{
		*iParam3 = 19;
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		*iParam3 = 20;
		return 0;
	}
	if (Global_97919.f_44 == 1)
	{
		*iParam3 = 23;
		return 0;
	}
	if (__LIB_6__::func_854(14))
	{
		*iParam3 = 25;
		return 1;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	fVar2 = SYSTEM::VDIST2(Var0, Var1);
	if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iParam0))
	{
		if (fVar2 < (200f * 200f))
		{
			*iParam3 = 21;
			return 0;
		}
	}
	if (CAM::IS_SPHERE_VISIBLE(Var0, 5f))
	{
		if (fVar2 < (40f * 40f))
		{
			*iParam3 = 22;
			return 0;
		}
	}
	iVar3 = Global_97362;
	if (iVar3 != -1)
	{
		bVar4 = 4;
		if (bParam1 == 0)
		{
			bVar4 = false;
		}
		else if (bParam1 == 2)
		{
			bVar4 = 2;
		}
		else if (bParam1 == 1)
		{
			bVar4 = true;
		}
		else if (bParam1 == 145)
		{
			bVar4 = 3;
			return 0;
		}
		if (BitTest(Global_97919.f_47, bVar4))
		{
			*iParam3 = 24;
			return 0;
		}
	}
	*iParam3 = 15;
	return 1;
}

void func_387(bool bParam0)//Position - 0x3F4B1
{
	if (((((bParam0 == 144 || bParam0 == 145) || bParam0 == 161) || bParam0 == 187) || bParam0 == 162) || bParam0 == 188)
	{
		return;
	}
	Global_43604[bParam0] = MISC::GET_GAME_TIMER() + 20000;
}

int func_389(int* iParam0, bool bParam1, struct<98> Param2, bool bParam3)//Position - 0x3F53F
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	var uVar5;
	int iVar6;
	int iVar7;
	iVar0 = Global_100140[bParam1];
	if (Param2.f_0 != 0 && iVar0 != 0)
	{
		STREAMING::REQUEST_MODEL(Param2.f_0);
		__LIB_35__::func_86(bParam1);
		if (Param2.f_1 != 0)
		{
			STREAMING::REQUEST_MODEL(Param2.f_1);
			if (!STREAMING::HAS_MODEL_LOADED(Param2.f_1))
			{
				return 0;
			}
		}
		if (!STREAMING::HAS_MODEL_LOADED(Param2.f_0) || !__LIB_35__::func_85(bParam1))
		{
			return 0;
		}
		Var1 = { Global_113386.f_2363.f_539.f_2300[bParam1 /*3*/] };
		fVar2 = Global_113386.f_2363.f_539.f_2310[bParam1];
		if (iVar0 == 1)
		{
			Var1 = { Global_100148[bParam1 /*3*/] };
			fVar2 = Global_100158[bParam1];
		}
		Var3 = { 2f, 2f, 2f };
		if (MISC::IS_AREA_OCCUPIED(Var1 - Var3, Var1 + Var3, false, true, true, false, false, 0, false))
		{
			if (__LIB_26__::func_595(Var1, fVar2, 0f, 0, &Var4, &uVar5))
			{
				if (iVar0 == 1)
				{
					Global_100148[bParam1 /*3*/] = { Var4 };
					Global_100158[bParam1] = uVar5;
				}
				else
				{
					Global_113386.f_2363.f_539.f_2300[bParam1 /*3*/] = { Var4 };
					Global_113386.f_2363.f_539.f_2310[bParam1] = uVar5;
				}
				return 0;
			}
		}
		iVar6 = VEHICLE::CREATE_VEHICLE(Param2.f_0, Var1, fVar2, true, true, false);
		VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar6, false);
		VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar6, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar6, true);
		__LIB_39__::func_513(&iVar6, Param2);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar6, true);
		if (Param2.f_97)
		{
			__LIB_10__::func_569(iVar6, bParam1);
		}
		if (Param2.f_1 != 0)
		{
			iVar7 = VEHICLE::CREATE_VEHICLE(Param2.f_1, Var1 + Vector(5f, 0f, 0f), fVar2, true, true, false);
			VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iVar6, iVar7, 1f);
		}
		if (bParam3)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param2.f_0);
			if (Param2.f_1 != 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param2.f_1);
			}
		}
		if (iVar0 == 2)
		{
			if (func_606(iParam0, bParam1, iVar6, -1, bParam3, 0, 0))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar6);
				return 1;
			}
		}
		else if (iVar0 == 1)
		{
			if (func_390(iParam0, bParam1, bParam3))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar6);
				return 1;
			}
		}
		else
		{
			return 0;
		}
		return 0;
	}
	return func_390(iParam0, bParam1, bParam3);
}

int func_390(int* iParam0, int iParam1, bool bParam2)//Position - 0x3F761
{
	int iVar0;
	if (__LIB_0__::func_43(iParam1))
	{
		iVar0 = __LIB_6__::func_757(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Global_113386.f_2363.f_539.f_2300[iParam1 /*3*/], Global_113386.f_2363.f_539.f_2310[iParam1], false, false);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*iParam0, Global_113386.f_2363.f_539.f_2300[iParam1 /*3*/], false, false, true);
			__LIB_26__::func_464(*iParam0, iParam1, 0);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_595(*iParam0);
			func_392(*iParam0, 0);
			__LIB_0__::func_349(*iParam0);
			if (bParam2)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_392(int iParam0, bool bParam1)//Position - 0x3F89B
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_18__::func_168(iParam0);
	if (__LIB_11__::func_843(iVar0))
	{
		__LIB_12__::func_96(iVar0, 0);
		func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_396(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_6__::func_843(iParam0))
		{
			__LIB_12__::func_96(iVar0, 0);
			func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_396(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[120] && !Global_113386.f_9085.f_99.f_58[122])
			{
				func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085.f_99.f_58[123])
			{
				Global_113386.f_9085.f_99.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_157(iParam0, 3, 169))
					{
						func_579(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_157(iParam0, 12, 6))
			{
				func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_157(iParam0, 12, 17))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_157(iParam0, 12, 20))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_157(iParam0, 12, 21))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_157(iParam0, 12, 22))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_157(iParam0, 12, 11))
			{
				func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_157(iParam0, 12, 10))
			{
				func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_157(iParam0, 12, 50))
			{
				func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_157(iParam0, 14, 59))
			{
				func_579(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_157(iParam0, 8, 22))
			{
				func_579(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_157(iParam0, 12, 14))
			{
				func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_157(iParam0, 12, 13))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_157(iParam0, 12, 14))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_157(iParam0, 12, 15))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_157(iParam0, 12, 4))
			{
				func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_157(iParam0, 12, 3))
			{
				func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_157(iParam0, 14, 82))
			{
				func_579(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_157(iParam0, 8, 76))
			{
				func_579(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_157(iParam0, 12, 1))
			{
				func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_157(iParam0, 12, 12))
			{
				func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_157(iParam0, 12, 15))
			{
				func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_157(iParam0, 3, 71))
				{
					func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_157(iParam0, 12, 17))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_157(iParam0, 12, 18))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_157(iParam0, 12, 19))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_157(iParam0, 12, 7))
			{
				func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_157(iParam0, 12, 6))
			{
				func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_157(iParam0, 14, 88))
			{
				func_579(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_157(iParam0, 8, 17))
			{
				func_579(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_157(iParam0, 12, 11))
			{
				func_579(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_396(int iParam0, int iParam1)//Position - 0x4002D
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_18__::func_168(iParam0);
		if (__LIB_0__::func_43(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_578(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_10__::func_1(iVar0);
					func_406(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_24__::func_948(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_32__::func_816();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
				{
					Global_113386.f_2363.f_539[iVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_352(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__::func_795(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__::func_795(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					if (iVar0 == 0)
					{
						if (Global_113386.f_9085.f_99.f_58[121])
						{
							Global_113386.f_9085.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

void func_406(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x40FE3
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
		iVar0 = __LIB_18__::func_168(iParam0);
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
		if (__LIB_0__::func_43(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_576(iParam0, iVar1, &iVar2, 0))
			{
				func_579(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_574(iParam0, iVar1, &iVar2))
			{
				func_579(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_572(iParam0);
			__LIB_0__::func_427(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_0__::func_427(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__::func_350(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_18__::func_181(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_18__::func_186(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_412(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_412(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__::func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_412(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_18__::func_181(iVar9);
			}
			else
			{
				iVar9 = __LIB_18__::func_186(iVar9);
			}
			__LIB_0__::func_427(753, iVar9, Global_78127, 1, 0);
			__LIB_0__::func_427(2053, iVar9, Global_78127, 1, 0);
			__LIB_6__::func_796(161, 1, -1, 1);
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

int func_412(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x4177F
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
		Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
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
			func_531(iVar5, iParam1, iParam2, 1);
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
			uVar14 = { __LIB_18__::func_180(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 10, 0, -1) };
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
						func_531(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iVar0, uVar14[iVar0], -1) };
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
								uVar15 = { __LIB_18__::func_247(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_531(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_412(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_531(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iVar0, func_528(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__::func_180(iVar5, 0) };
					func_412(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__::func_468();
			if (iVar17 != -1)
			{
				__LIB_25__::func_43(iVar17, 0, iParam10);
			}
			func_522(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__::func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_531(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_40__::func_849(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_412(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_531(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_412(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_513(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_412(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_412(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar23 = __LIB_6__::func_795(iParam0, 11);
				iVar24 = __LIB_6__::func_795(iParam0, 8);
				iVar25 = __LIB_6__::func_795(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_6__::func_795(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_512(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_40__::func_849(iParam0, iVar5, 11, iVar23, 3, 0);
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
							iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
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
							if (__LIB_0__::func_254(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_6__::func_795(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_412(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_6__::func_808(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_6__::func_808(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_37__::func_821(iParam0, iParam2);
							iVar31 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_412(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_412(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_6__::func_809(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_412(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__::func_821(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_6__::func_807(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__::func_252(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_420(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_420(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__::func_806(iVar5, __LIB_6__::func_795(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__::func_806(iVar5, __LIB_6__::func_795(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_412(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_412(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_412(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_31__::func_927(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_522(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_512(iVar5, func_528(iParam0, 8, -1), iParam2, func_528(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__::func_534(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__::func_534(2160, iParam10, 0);
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
						iVar42 = __LIB_18__::func_181(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_18__::func_186(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_455(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__::func_795(iParam0, 11);
				iVar45 = __LIB_6__::func_795(iParam0, 4);
				iVar46 = func_512(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_40__::func_849(iParam0, iVar5, 11, iVar44, 3, 0);
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
						iVar47 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__::func_254(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_522(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__::func_795(iParam0, 11);
			if (__LIB_6__::func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__::func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__::func_927(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_512(iVar5, iParam2, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_6__::func_795(iParam0, 7);
				if (!__LIB_24__::func_966(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_0__::func_534(2100, iParam10, 0);
				iVar53 = __LIB_0__::func_534(2101, iParam10, 0);
				iVar54 = __LIB_0__::func_534(2102, iParam10, 0);
				fVar55 = __LIB_0__::func_424(135, iParam10);
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
				__LIB_31__::func_910(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_6__::func_795(iParam0, 11);
			iVar58 = __LIB_6__::func_795(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_412(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_412(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_512(iVar5, __LIB_6__::func_795(iParam0, 8), __LIB_6__::func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_512(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_40__::func_849(iParam0, iVar5, 11, iVar57, 3, 0);
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
						iVar61 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__::func_254(iVar5, iVar60, iVar62) == iVar59)
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
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_412(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_512(iVar5, iVar3, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_412(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__::func_223(iParam0))
				{
					iVar63 = __LIB_6__::func_803(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_432(iParam0, 9, iVar63))
						{
							func_412(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_412(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_412(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__::func_534(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_18__::func_183(iParam0, iVar64), __LIB_0__::func_217(iParam0, iVar64), __LIB_0__::func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_18__::func_183(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__::func_217(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_6__::func_782(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_412(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_528(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_528(iParam0, 11, -1);
				}
				if (__LIB_6__::func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__::func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__::func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_412(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__::func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__::func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_412(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar74 = __LIB_6__::func_795(iParam0, 4);
				iVar75 = __LIB_6__::func_795(iParam0, 6);
				if (__LIB_0__::func_215(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__::func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_412(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_412(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__::func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_412(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_412(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__::func_215(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__::func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_412(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_412(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__::func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_412(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_412(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_513(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_412(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_412(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_413(iParam0, &uVar4))
		{
			func_412(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_412(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_412(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_412(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_254(iVar5, func_528(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_6__::func_758(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_6__::func_758(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_412(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_413(int iParam0, var uParam1)//Position - 0x43629
{
	int iVar0;
	int iVar1;
	*uParam1 = func_528(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_0__::func_534(754, Global_78127, 0) != -99 && __LIB_6__::func_781())
	{
		if (__LIB_0__::func_214() == 4)
		{
			return 1;
		}
		if (__LIB_0__::func_534(754, Global_78127, 0) == 0 && __LIB_0__::func_534(755, Global_78127, 0) == 0)
		{
			if (__LIB_0__::func_421(161, Global_78127))
			{
				if (__LIB_0__::func_534(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_0__::func_534(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_0__::func_534(754, Global_78127, 0);
		iVar1 = __LIB_0__::func_534(755, Global_78127, 0);
		if (!func_432(iParam0, iVar1, iVar0))
		{
			if (__LIB_0__::func_421(161, Global_78127))
			{
				*uParam1 = __LIB_0__::func_534(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_0__::func_534(753, Global_78127, 0);
			}
			__LIB_0__::func_427(754, -99, Global_78127, 1, 0);
			__LIB_0__::func_427(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_432(int iParam0, int iParam1, int iParam2)//Position - 0x478E6
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
	Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_18__::func_180(iVar0, iParam2) };
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
				if (!func_432(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_18__::func_247(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_432(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_544(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_432(iParam0, 14, iVar6))
										{
											if (!__LIB_24__::func_955(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__::func_795(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_35__::func_544(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_24__::func_955(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
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
			if (__LIB_0__::func_534(1759, Global_78127, 0) != uVar8[10])
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
		uVar11 = { __LIB_18__::func_247(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_432(iParam0, 14, uVar11[iVar10]))
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
				if (__LIB_6__::func_802(iVar0, 11, __LIB_6__::func_795(iParam0, 11), -1))
				{
					if (__LIB_6__::func_800(iVar0, 4, iParam2, &uVar18))
					{
						return func_432(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__::func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_432(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_455(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4E5FE
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_31__::func_926(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__::func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_25__::func_43(iVar1, 1, iParam2);
	}
	func_456(iParam0, bParam3, 0, -1);
}

void func_456(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x4E64B
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
		iVar2 = __LIB_0__::func_250(iParam0);
		bVar3 = func_492(iParam0, 0);
		bVar4 = __LIB_31__::func_887(iParam0);
		bVar5 = func_483(iParam0, iParam3);
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
			if (__LIB_18__::func_432(iVar6, iVar0))
			{
				if (__LIB_6__::func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__::func_69(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__::func_432(123, iVar0))
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
					if (__LIB_18__::func_432(iVar10, iVar0))
					{
						if (__LIB_25__::func_69(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__::func_925(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__::func_235(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_483(int iParam0, int iParam1)//Position - 0x5A17E
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
			iVar2 = __LIB_0__::func_534(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_528(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
			iVar2 = __LIB_0__::func_534(1759, -1, 0);
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
				iVar5 = func_528(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
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

int func_492(int iParam0, bool bParam1)//Position - 0x5A5DC
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
							iVar2 = __LIB_18__::func_431(joaat("MP_M_Freemode_01"), 11, func_528(iParam0, 11, -1), 0);
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
						if (__LIB_18__::func_432(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(72, -1))
						{
						}
						else if (__LIB_18__::func_185(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_528(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
						iVar5 = func_528(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
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
							iVar7 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_528(iParam0, 11, -1), 0);
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
						iVar8 = func_528(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
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
							iVar10 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_528(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_528(iParam0, 11, -1), 0);
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
						iVar12 = func_528(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
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

int func_512(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6346A
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
				iVar2 = __LIB_0__::func_420(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__::func_252(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__::func_420(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__::func_252(iVar4);
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
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_512(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
									iVar0 = __LIB_6__::func_758(iParam0, iVar7, 3, 3);
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
				iVar2 = __LIB_0__::func_420(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__::func_252(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__::func_420(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__::func_252(iVar4);
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
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_512(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_6__::func_808(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
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
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
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
									iVar0 = __LIB_6__::func_758(iParam0, iVar12, 3, 4);
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

void func_513(int iParam0)//Position - 0x647A9
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
		if (!func_518(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_0__::func_258(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_257(iVar13, 11, -1))
				{
					if (__LIB_0__::func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_256(iVar13, 10, &iVar17, -1))
					{
						if (__LIB_0__::func_257(iVar17, 11, Var15.f_1))
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
			if (__LIB_0__::func_258(iVar9, 1, 0, &iVar19))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar19, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_257(iVar13, 11, -1))
				{
					if (__LIB_0__::func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_256(iVar13, 10, &iVar20, -1))
					{
						if (__LIB_0__::func_257(iVar20, 11, Var15.f_1))
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
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("HAZ_HOOD"), 0) || __LIB_0__::func_255(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_518(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_518(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x65173
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_709(iVar0, 14, func_528(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_522(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x67B5B
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_572(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_6__::func_808(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_6__::func_795(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_6__::func_795(iParam0, 11);
				if (!__LIB_6__::func_808(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_31__::func_926(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__::func_42(iVar0, iParam2, 13) && !__LIB_25__::func_42(iVar0, iParam2, 14)) && !__LIB_25__::func_42(iVar0, iParam2, 15)) && !__LIB_25__::func_42(iVar0, iParam2, 16)) && !__LIB_25__::func_42(iVar0, iParam2, 71)) && !__LIB_25__::func_42(iVar0, iParam2, 72))
				{
					__LIB_31__::func_926(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_18__::func_431(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__::func_467(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_25__::func_43(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_528(int iParam0, int iParam1, int iParam2)//Position - 0x67E0A
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
				if (func_432(iParam0, iParam1, iVar0))
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
				if (func_432(iParam0, iParam1, iVar1))
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

void func_531(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x67F89
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
		Global_78130[2 /*14*/] = { __LIB_35__::func_544(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__::func_238(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__::func_238(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__::func_238(Global_2883588, 2, 1, 1, -1);
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
							__LIB_7__::func_238(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_531(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_531(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_531(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_0__::func_534(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__::func_427(iVar6, iVar7, Global_78127, 1, 0);
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
							func_531(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_531(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_531(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_531(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_531(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_531(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_531(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_531(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_531(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_531(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_531(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_531(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_531(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_531(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__::func_544(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__::func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_531(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_531(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__::func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_531(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_572(int iParam0)//Position - 0x80D8E
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_0__::func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_528(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_0__::func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_528(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
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

int func_574(int iParam0, int iParam1, int iParam2)//Position - 0x810E8
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

int func_576(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x811AF
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

int func_578(int iParam0, int iParam1, int iParam2)//Position - 0x8146F
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

int func_579(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x81510
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
										func_579(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_579(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, func_578(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_576(iParam0, iVar10, &iVar4, 1))
							{
								func_579(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_579(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_579(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_579(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_579(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_579(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_579(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_579(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_579(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_579(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_576(iParam0, iVar10, &iVar4, 0))
		{
			func_579(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_574(iParam0, iVar10, &iVar4))
		{
			func_579(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

void func_595(int iParam0)//Position - 0x83B1B
{
	func_603(iParam0);
	__LIB_32__::func_750(iParam0, 1, 0);
	func_602(iParam0);
	__LIB_26__::func_579(iParam0);
	func_599(iParam0);
	func_598(iParam0);
	__LIB_26__::func_512(iParam0);
}

void func_598(int iParam0)//Position - 0x83C13
{
	int iVar0;
	iVar0 = __LIB_18__::func_168(iParam0);
	if (__LIB_0__::func_43(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		ENTITY::SET_ENTITY_VELOCITY(iParam0, Global_113386.f_2363.f_539.f_2318[iVar0 /*3*/]);
	}
}

void func_599(int iParam0)//Position - 0x83C51
{
	int iVar0;
	iVar0 = __LIB_18__::func_168(iParam0);
	if (__LIB_0__::func_43(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (Global_113386.f_2363.f_539.f_2310[iVar0] == 0f && __LIB_0__::func_78(Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			return;
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/], false, false, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, Global_113386.f_2363.f_539.f_2310[iVar0]);
	}
}

void func_602(int iParam0)//Position - 0x83D6C
{
	int iVar0;
	iVar0 = __LIB_18__::func_168(iParam0);
	if (__LIB_0__::func_43(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID() && PED::GET_PED_MAX_HEALTH(iParam0) == 200)
		{
			PED::SET_PED_MAX_HEALTH(iParam0, SYSTEM::ROUND((IntToFloat(PED::GET_PED_MAX_HEALTH(iParam0)) * Global_262145.f_106 /* Tunable: MAX_HEALTH_MULTIPLIER */)));
		}
		if (Global_113386.f_2363.f_539.f_290[iVar0] <= 0f)
		{
			Global_113386.f_2363.f_539.f_290[iVar0] = 100f;
		}
		else if (Global_113386.f_2363.f_539.f_290[iVar0] <= 10f)
		{
			Global_113386.f_2363.f_539.f_290[iVar0] = 10f;
		}
		ENTITY::SET_ENTITY_HEALTH(iParam0, SYSTEM::ROUND((((Global_113386.f_2363.f_539.f_290[iVar0] / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) + 100f)), 0);
	}
}

void func_603(int iParam0)//Position - 0x83E59
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_18__::func_168(iParam0);
	if (__LIB_0__::func_43(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__::func_352(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_10__::func_1(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_352(iParam0);
				}
			}
		}
		func_406(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::func_365(49))
				{
					iVar1 = func_578(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_2(__LIB_6__::func_757(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::func_365(44))
				{
					iVar1 = func_578(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_578(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_2(__LIB_6__::func_757(0), 3, 70, 1, 0, 0, 0);
					func_2(__LIB_6__::func_757(0), 3, 71, 1, 0, 0, 0);
					func_2(__LIB_6__::func_757(0), 3, 72, 1, 0, 0, 0);
					func_2(__LIB_6__::func_757(0), 3, 73, 1, 0, 0, 0);
					func_2(__LIB_6__::func_757(0), 3, 74, 1, 0, 0, 0);
					func_2(__LIB_6__::func_757(0), 3, 75, 1, 0, 0, 0);
					func_2(__LIB_6__::func_757(0), 4, 41, 1, 0, 0, 0);
					func_2(__LIB_6__::func_757(0), 4, 42, 1, 0, 0, 0);
					func_2(__LIB_6__::func_757(0), 4, 43, 1, 0, 0, 0);
					func_2(__LIB_6__::func_757(0), 4, 44, 1, 0, 0, 0);
					func_2(__LIB_6__::func_757(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_578(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_10__::func_1(iVar0);
				func_406(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

int func_606(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x84224
{
	int iVar0;
	if (__LIB_0__::func_43(iParam1))
	{
		iVar0 = __LIB_6__::func_757(iParam1);
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
				__LIB_26__::func_464(*iParam0, iParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_603(*iParam0);
				__LIB_32__::func_750(*iParam0, 1, 0);
				__LIB_26__::func_579(*iParam0);
				__LIB_26__::func_512(*iParam0);
				func_392(*iParam0, bParam6);
				__LIB_0__::func_349(*iParam0);
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

int func_620(bool bParam0, int iParam1)//Position - 0x84AC4
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	struct<3> Var7;
	int iVar8;
	int iVar9;
	struct<3> Var10;
	int iVar11;
	int iVar12;
	float fVar13;
	var uVar14;
	struct<3> Var15;
	float fVar16;
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		*iParam1 = 1;
		return 0;
	}
	if (Global_113386.f_18533[bParam0] == 0)
	{
		*iParam1 = 2;
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
		{
			*iParam1 = 3;
			return 0;
		}
		if (STREAMING::GET_PLAYER_SWITCH_STATE() != 8)
		{
			*iParam1 = 3;
			return 0;
		}
	}
	iVar0 = Global_113386.f_2363.f_539.f_2296[bParam0];
	if (!__LIB_9__::func_51(iVar0))
	{
		*iParam1 = 4;
		return 0;
	}
	if (__LIB_38__::func_146(iVar0, 3))
	{
		*iParam1 = 5;
		return 0;
	}
	if (__LIB_6__::func_854(14))
	{
		*iParam1 = 14;
		return 0;
	}
	Var1 = { Global_113386.f_2363.f_539.f_2300[bParam0 /*3*/] };
	if (__LIB_0__::func_78(Var1, 0f, 0f, 0f, 0) && Global_113386.f_2363.f_539.f_2310[bParam0] == 0f)
	{
		*iParam1 = 6;
		return 0;
	}
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	fVar3 = SYSTEM::VDIST2(Var1, Var2);
	if (fVar3 > (150f * 150f))
	{
		*iParam1 = 7;
		return 0;
	}
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (fVar3 < (15f * 15f))
		{
			*iParam1 = 8;
			return 0;
		}
		if (fVar3 < (100f * 100f))
		{
			if (fVar3 < (30f * 30f))
			{
				if (CAM::IS_SPHERE_VISIBLE(Var1, 3f))
				{
					*iParam1 = 9;
					return 0;
				}
			}
			else if (CAM::IS_SPHERE_VISIBLE(Var1, 0.5f) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(__LIB_6__::func_757(bParam0), Var1, false))
			{
				*iParam1 = 9;
				return 0;
			}
		}
	}
	if (func_622(Global_113386.f_18533[bParam0], &uVar4, &uVar5))
	{
		*iParam1 = 10;
		return 0;
	}
	if (Global_97751)
	{
		*iParam1 = 11;
		return 0;
	}
	iVar6 = 0;
	while (iVar6 < 263)
	{
		if (BitTest(Global_32338[iVar6 /*23*/].f_11, 0))
		{
			Var7 = { Global_32338[iVar6 /*23*/][0 /*3*/] };
			if (SYSTEM::VDIST2(Var1, Var7) < (10f * 10f))
			{
				*iParam1 = 12;
				return 0;
			}
			if (BitTest(Global_32338[iVar6 /*23*/].f_11, 19))
			{
				iVar9 = 3;
				iVar8 = 0;
				while (iVar8 < iVar9)
				{
					Var10 = { Global_32338[iVar6 /*23*/][iVar8 /*3*/] };
					if (!__LIB_0__::func_86(Var10))
					{
						if (SYSTEM::VDIST2(Var1, Var10) < (10f * 10f))
						{
							*iParam1 = 12;
							return 0;
						}
					}
					iVar8++;
				}
			}
		}
		iVar6++;
	}
	iVar11 = 0;
	while (iVar11 < 8)
	{
		if (Global_97374[iVar11 /*17*/])
		{
			iVar12 = Global_97374[iVar11 /*17*/].f_5;
			fVar13 = Global_97374[iVar11 /*17*/].f_10.f_4;
			fVar13 = (fVar13 * 1.5f);
			uVar14 = Global_97374[iVar11 /*17*/].f_10.f_6;
			iVar6 = Global_91229[iVar12 /*34*/].f_10;
			Var15 = { Global_32338[iVar6 /*23*/][0 /*3*/] };
			fVar16 = SYSTEM::VDIST2(Var1, Var15);
			if (!BitTest(uVar14, bParam0))
			{
				if (fVar16 < (fVar13 * fVar13))
				{
					*iParam1 = 13;
					return 0;
				}
			}
		}
		iVar11++;
	}
	*iParam1 = 0;
	return 1;
}

int func_622(int iParam0, var uParam1, var uParam2)//Position - 0x84E1C
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*uParam2 = 111f;
			return 1;
			break;
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*uParam2 = 194.1887f;
			return 1;
			break;
		case 9:
			return func_622(8, uParam1, uParam2);
			break;
		case 10:
			return func_622(8, uParam1, uParam2);
			break;
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*uParam2 = 201.6328f;
			return 1;
			break;
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*uParam2 = 350.0509f;
			return 1;
			break;
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*uParam2 = 0.7896f;
			return 1;
			break;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*uParam2 = 42f;
			return 1;
			break;
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*uParam2 = -129f;
			return 1;
			break;
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*uParam2 = 267.1409f;
			return 1;
			break;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*uParam2 = 340.0526f;
			return 1;
			break;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*uParam2 = 22.9566f;
			return 1;
			break;
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*uParam2 = 152.8118f;
			return 1;
			break;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*uParam2 = (250.4535f - 360f);
			return 1;
			break;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*uParam2 = 119.603f;
			return 1;
			break;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*uParam2 = 168f;
			return 1;
			break;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*uParam2 = 51.7279f;
			return 1;
			break;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*uParam2 = 151.2504f;
			return 1;
			break;
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*uParam2 = 156.8827f;
			return 1;
			break;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*uParam2 = 7.2736f;
			return 1;
			break;
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*uParam2 = 97.2736f;
			return 1;
			break;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*uParam2 = 4f;
			return 1;
			break;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*uParam2 = 162.693f;
			return 1;
			break;
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*uParam2 = 128.9946f;
			return 1;
			break;
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*uParam2 = 32.2721f;
			return 1;
			break;
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*uParam2 = 192.8091f;
			return 1;
			break;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return 1;
			break;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return 1;
			break;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*uParam2 = -3.7534f;
			return 1;
			break;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.3408f, 798.4536f) + Vector(1f, 0f, 0f) };
			*uParam2 = 90f;
			return 1;
			break;
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*uParam2 = 355.326f;
			return 1;
			break;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*uParam2 = 334.1068f;
			return 1;
			break;
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*uParam2 = 46.8853f;
			return 1;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*uParam2 = 165.9421f;
			return 1;
			break;
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*uParam2 = 221.228f;
			return 1;
			break;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*uParam2 = (42f + 180f);
			return 1;
			break;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*uParam2 = 98.9764f;
			return 1;
			break;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*uParam2 = 220.9554f;
			return 1;
			break;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*uParam2 = 83.9922f;
			return 1;
			break;
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*uParam2 = -64.1366f;
			return 1;
			break;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*uParam2 = 127.7547f;
			return 1;
			break;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*uParam2 = -63f;
			return 1;
			break;
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*uParam2 = 90.0339f;
			return 1;
			break;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*uParam2 = 84.6231f;
			return 1;
			break;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*uParam2 = 99.6049f;
			return 1;
			break;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*uParam2 = 120f;
			return 1;
			break;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*uParam2 = 211.8223f;
			return 1;
			break;
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*uParam2 = 136.0867f;
			return 1;
			break;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*uParam2 = 27.0648f;
			return 1;
			break;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*uParam2 = 27.0648f;
			return 1;
			break;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		default:
			break;
	}
	return 0;
}

int func_638(bool bParam0)//Position - 0x85D7F
{
	if (Global_99845[bParam0 /*98*/] == 0)
	{
		return 0;
	}
	if (Global_99845[bParam0 /*98*/].f_3 > 0)
	{
		return 0;
	}
	if (Global_113386.f_18533[bParam0] == 0)
	{
		return 0;
	}
	Global_113386.f_18533[bParam0] = 0;
	Global_113386.f_2363.f_539.f_2296[bParam0] = __LIB_13__::func_95();
	Global_99845[bParam0 /*98*/] = 0;
	Global_100144[bParam0] = 0;
	return 1;
}

void func_639(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x85DF0
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	iVar0 = 0;
	iVar1 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
				*uParam4 = 2;
			}
			else
			{
				iVar2 = __LIB_18__::func_168(iParam0);
				if (!ENTITY::IS_ENTITY_DEAD(Global_100144[iVar2], false))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_100144[iVar2], -1, false))
					{
						Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
						Var4 = { ENTITY::GET_ENTITY_COORDS(Global_100144[iVar2], true) };
						if (ENTITY::GET_ENTITY_MODEL(Global_100144[iVar2]) == joaat("luxor2"))
						{
							if (SYSTEM::VDIST(Var3, Var4) < 10f)
							{
								*uParam4 = 2;
								iVar1 = Global_100144[iVar2];
								iVar0 = 1;
							}
						}
					}
				}
			}
		}
	}
	func_640(iParam0, iVar1, uParam1, uParam2, uParam3, uParam4, uParam5, iVar0);
}

void func_640(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)//Position - 0x85EC3
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	uParam2->f_97 = 0;
	iVar0 = 145;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		iVar0 = __LIB_18__::func_168(iParam0);
		if (iVar0 > 3)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
			}
			return;
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam1, "GetawayVehicleValid"))
		{
			if (DECORATOR::DECOR_GET_BOOL(iParam1, "GetawayVehicleValid"))
			{
				if ((Global_113386.f_9085.f_99.f_58[45] || Global_113386.f_9085.f_99.f_58[12]) || Global_113386.f_9085.f_99.f_58[34])
				{
					*uParam5 = 0;
					Global_100144[iVar0] = 0;
					return;
				}
			}
		}
		if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false) || iParam7)
		{
			*uParam5 = 2;
			Global_100144[iVar0] = iParam1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			iParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
			*uParam5 = 2;
			Global_100144[iVar0] = iParam1;
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 68)
			{
				if (iParam1 == Global_77137.f_139[iVar1])
				{
					*uParam5 = 0;
					Global_100144[iVar0] = 0;
					return;
				}
				iVar1++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_100144[iVar0], false))
			{
				if (!__LIB_20__::func_323(Global_100144[iVar0], iVar0, 0) || PED::IS_PED_IN_VEHICLE(iParam0, Global_100144[iVar0], false))
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
					Var3 = { ENTITY::GET_ENTITY_COORDS(Global_100144[iVar0], true) };
					if (__LIB_10__::func_265(iParam0, Global_100144[iVar0], 0))
					{
						if (SYSTEM::VDIST2(Var2, Var3) < 22500f)
						{
							*uParam3 = { Var3 };
							*uParam4 = ENTITY::GET_ENTITY_HEADING(Global_100144[iVar0]);
							*uParam5 = 1;
							Global_100144[iVar0] = iParam1;
							if (SYSTEM::VDIST2(Var2, Var3) < (1.5f * 1.5f))
							{
							}
						}
					}
				}
				else
				{
					*uParam5 = 0;
					Global_100144[iVar0] = 0;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*uParam2 = ENTITY::GET_ENTITY_MODEL(iParam1);
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam1, &iVar5))
		{
			uParam2->f_1 = ENTITY::GET_ENTITY_MODEL(iVar5);
		}
		uParam2->f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iParam1);
		uParam2->f_3 = ENTITY::GET_ENTITY_HEALTH(iParam1);
		uParam2->f_4 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iParam1);
		if (uParam2->f_4 > -1)
		{
			uParam2->f_9 = 1;
			uParam2->f_5 = -1;
			uParam2->f_6 = -1;
		}
		else
		{
			uParam2->f_9 = 0;
			VEHICLE::GET_VEHICLE_COLOURS(iParam1, &(uParam2->f_5), &(uParam2->f_6));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_BOAT(*uParam2))
		{
			uParam2->f_10 = 1;
			VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam1, &(uParam2->f_7), &(uParam2->f_8));
		}
		else
		{
			uParam2->f_10 = 0;
			uParam2->f_7 = -1;
			uParam2->f_8 = -1;
		}
		StringCopy(&(uParam2->f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam1), 16);
		uParam2->f_26 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam1);
		uParam2->f_88 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam1);
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam1, &(uParam2->f_84), &(uParam2->f_85), &(uParam2->f_86));
		uParam2->f_87 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam1);
		VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam1, &(uParam2->f_93), &(uParam2->f_94), &(uParam2->f_95));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 2))
		{
			MISC::SET_BIT(&(uParam2->f_92), 28);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_92), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 3))
		{
			MISC::SET_BIT(&(uParam2->f_92), 29);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_92), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 0))
		{
			MISC::SET_BIT(&(uParam2->f_92), 30);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_92), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 1))
		{
			MISC::SET_BIT(&(uParam2->f_92), 31);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_92), 31);
		}
		uParam2->f_89 = VEHICLE::GET_VEHICLE_LIVERY(iParam1);
		uParam2->f_90 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam1);
		iVar4 = 0;
		while (iVar4 < 12)
		{
			uParam2->f_11[iVar4] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam1, iVar4 + 1);
			iVar4++;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam1, false))
		{
			iVar6 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam1);
			if (iVar6 == 0 || iVar6 == 5)
			{
				uParam2->f_24 = 1;
			}
			else
			{
				uParam2->f_24 = 0;
			}
		}
		else
		{
			uParam2->f_24 = 0;
		}
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			uParam2->f_25 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		}
		__LIB_0__::func_107(&iParam1, &(uParam2->f_31), &(uParam2->f_81));
		uParam2->f_96 = VEHICLE::GET_VEHICLE_ENVEFF_SCALE(iParam1);
		uParam2->f_97 = __LIB_0__::func_117(iParam1);
		*uParam6 = -1;
		switch (iVar0)
		{
			case 0:
				if (Global_113386.f_32749.f_69[0 /*78*/].f_66 == ENTITY::GET_ENTITY_MODEL(iParam1))
				{
					*uParam6 = 12;
				}
				break;
			case 1:
				if (Global_113386.f_32749.f_69[1 /*78*/].f_66 == ENTITY::GET_ENTITY_MODEL(iParam1))
				{
					*uParam6 = 13;
				}
				break;
			case 2:
				if (Global_113386.f_32749.f_69[2 /*78*/].f_66 == ENTITY::GET_ENTITY_MODEL(iParam1))
				{
					*uParam6 = 14;
				}
				break;
		}
	}
	else
	{
		*uParam5 = 0;
		*uParam3 = { 0f, 0f, 0f };
		*uParam4 = 0f;
		*uParam2 = 0;
		uParam2->f_1 = 0;
		uParam2->f_2 = 0f;
		uParam2->f_3 = 0;
		uParam2->f_4 = 0;
		uParam2->f_5 = 0;
		uParam2->f_6 = 0;
		uParam2->f_7 = 0;
		uParam2->f_8 = 0;
		uParam2->f_9 = 0;
		uParam2->f_10 = 0;
		iVar4 = 0;
		while (iVar4 < uParam2->f_11)
		{
			uParam2->f_11[iVar4] = 0;
			iVar4++;
		}
		uParam2->f_24 = 0;
		uParam2->f_25 = 0;
		*uParam5 = 0;
		*uParam6 = -1;
		uParam2->f_96 = 0f;
	}
}

void func_649(int iParam0)//Position - 0x86659
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	iVar0 = __LIB_18__::func_168(iParam0);
	Var1 = { Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/] };
	uVar2 = Global_113386.f_2363.f_539.f_2310[iVar0];
	uVar3 = Global_113386.f_2363.f_539.f_2314[iVar0];
	Var4 = { Global_113386.f_2363.f_539.f_2318[iVar0 /*3*/] };
	func_650(iParam0, 0);
	if (!__LIB_0__::func_78(Var1, 0f, 0f, 0f, 0))
	{
		fVar5 = MISC::ABSF((Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/].f_2 - Var1.f_2));
		fVar6 = SYSTEM::VDIST2(Var1, Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/]);
		fVar7 = SYSTEM::VMAG(Global_113386.f_2363.f_539.f_2318[iVar0 /*3*/]);
		bVar8 = false;
		if (fVar7 > 25f)
		{
			if (fVar5 > 25f)
			{
				bVar8 = true;
			}
			if (fVar6 > (25f * 25f))
			{
				bVar8 = true;
			}
		}
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
			{
				bVar8 = true;
			}
			if (!ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iParam0))
			{
				bVar8 = true;
			}
		}
		if (bVar8)
		{
			Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/] = { Var1 };
			Global_113386.f_2363.f_539.f_2310[iVar0] = uVar2;
			Global_113386.f_2363.f_539.f_2314[iVar0] = uVar3;
			Global_113386.f_2363.f_539.f_2318[iVar0 /*3*/] = { Var4 };
		}
	}
}

void func_650(int iParam0, bool bParam1)//Position - 0x867D8
{
	func_658(iParam0);
	__LIB_32__::func_749(iParam0, bParam1);
	__LIB_34__::func_233(iParam0);
	__LIB_18__::func_218(iParam0);
	__LIB_34__::func_232(iParam0);
	__LIB_34__::func_231(iParam0);
	__LIB_34__::func_230(iParam0);
}

void func_658(int iParam0)//Position - 0x86E32
{
	int iVar0;
	iVar0 = __LIB_18__::func_168(iParam0);
	if (__LIB_0__::func_43(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_113386.f_2363.f_539.f_2296[iVar0] = __LIB_13__::func_95();
	}
}

void func_661()//Position - 0x86EB6
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__::func_388(iLocal_202);
	if (!ENTITY::IS_ENTITY_DEAD(Local_71.f_17[iLocal_202], false))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_71.f_17[iLocal_202], true))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(Local_71.f_17[iLocal_202]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_71.f_17[iLocal_202], joaat("SCRIPT_TASK_WANDER_STANDARD")) != 1)
				{
					TASK::TASK_WANDER_STANDARD(Local_71.f_17[iLocal_202], 40000f, 0);
				}
			}
			else
			{
				func_649(Local_71.f_17[iLocal_202]);
				Global_113386.f_2363.f_539.f_2296[iVar0] = __LIB_13__::func_95();
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_71.f_17[iLocal_202], false))
				{
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_71.f_17[iLocal_202], false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
						func_639(Local_71.f_17[iLocal_202], &(Global_99845[iVar0 /*98*/]), &(Global_100148[iVar0 /*3*/]), &(Global_100158[iVar0]), &(Global_100140[iVar0]), &(Global_4541522[iVar0]));
						ENTITY::SET_ENTITY_COORDS(Local_71.f_17[iLocal_202], ENTITY::GET_ENTITY_COORDS(Local_71.f_17[iLocal_202], true), true, false, false, true);
						VEHICLE::DELETE_VEHICLE(&iVar1);
					}
				}
				PED::DELETE_PED(&(Local_71.f_17[iLocal_202]));
				if (ENTITY::DOES_ENTITY_EXIST(Global_97919[iLocal_202]))
				{
					PED::DELETE_PED(&(Global_97919[iLocal_202]));
				}
			}
		}
	}
	iVar2 = iLocal_202;
	iVar2++;
	if (iVar2 >= 3)
	{
		iVar2 = 0;
	}
	iLocal_202 = iVar2;
}

void func_665()//Position - 0x8722B
{
	char* sVar0;
	int iVar1;
	if (Global_100366[iLocal_201] == PLAYER::PLAYER_PED_ID())
	{
		Global_100366[iLocal_201] = 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_100366[iLocal_201], false))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_100366[iLocal_201], true))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(Global_100366[iLocal_201]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_100366[iLocal_201], false))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Global_100366[iLocal_201], joaat("SCRIPT_TASK_WANDER_STANDARD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_100366[iLocal_201], -251125078) != 1)
					{
						TASK::TASK_WANDER_STANDARD(Global_100366[iLocal_201], 40000f, 0);
					}
				}
			}
			else
			{
				PED::DELETE_PED(&(Global_100366[iLocal_201]));
			}
		}
		else
		{
			sVar0 = "";
			iVar1 = 0;
			sVar0 = ENTITY::GET_ENTITY_SCRIPT(Global_100366[iLocal_201], &iVar1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				if (MISC::ARE_STRINGS_EQUAL(sVar0, "spy_vehicle_system"))
				{
					return;
				}
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_100366[iLocal_201], true, true);
				return;
			}
			if (MISC::ARE_STRINGS_EQUAL(sVar0, "player_controller_b"))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_100366[iLocal_201], true, true);
				return;
			}
			if (MISC::ARE_STRINGS_EQUAL(sVar0, "friends_controller"))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_100366[iLocal_201], true, true);
				return;
			}
		}
	}
	iLocal_201++;
	if (iLocal_201 >= Global_100366)
	{
		iLocal_201 = 0;
	}
}

void func_666()//Position - 0x8738C
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6[3];
	int iVar7;
	int iVar8;
	var uVar9;
	int iVar10[3];
	struct<98> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	Var11.f_11 = 12;
	Var11.f_31 = 49;
	Var11.f_81 = 2;
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYBACK_FLAG_SET(1) && Global_97748)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				iVar1 = iVar0;
				if (!iLocal_178[iVar0])
				{
					iVar4 = 0;
					while (iVar4 < 2 && !iLocal_178[iVar0])
					{
						if (func_675(iVar1, 0, iVar4, &sVar3))
						{
							func_671(iVar1, &sVar3, 2);
							iLocal_178[iVar0] = 1;
						}
						iVar4++;
					}
					iLocal_178[iVar0] = 1;
				}
				iVar0++;
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iLocal_178[iVar0] = 0;
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iVar1 = iVar0;
			iVar5 = 0;
			iVar2 = 0;
			iVar4 = 0;
			while (iVar4 < 2 && !ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (func_675(iVar1, 0, iVar4, &sVar3))
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST(&sVar3, __LIB_6__::func_757(iVar1)))
					{
						iVar2 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(&sVar3, __LIB_6__::func_757(iVar1));
					}
				}
				iVar4++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar2))
				{
					iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
					if (!PED::IS_PED_INJURED(iVar5))
					{
						if (!iLocal_179[iVar0])
						{
							if (!func_670(iVar5) && iVar5 != PLAYER::PLAYER_PED_ID())
							{
								if (Global_97749)
								{
									__LIB_32__::func_750(iVar5, 1, 0);
								}
								__LIB_26__::func_579(iVar5);
								__LIB_26__::func_512(iVar5);
								__LIB_0__::func_349(iVar5);
							}
							iLocal_179[iVar0] = 1;
						}
						iVar6[iVar0] = 1;
					}
				}
			}
			iVar7 = 0;
			iVar2 = 0;
			iVar13 = -1;
			iVar14 = 0;
			if (func_669(iVar1, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iVar1 /*98*/], &iVar2))
			{
				iVar13 = 0;
			}
			else if (func_669(iVar1, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iVar1 /*98*/], &iVar2))
			{
				iVar13 = 1;
			}
			else if (func_669(iVar1, __LIB_6__::func_853(iVar1, 1), &iVar2))
			{
				iVar14 = 1;
			}
			else if (func_669(iVar1, __LIB_6__::func_853(iVar1, 2), &iVar2))
			{
				iVar14 = 2;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(iVar2))
				{
					iVar7 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar7) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar7, false))
			{
				if (!iLocal_180[iVar0])
				{
					if (!__LIB_0__::func_117(iVar7))
					{
						if (iVar13 == -1)
						{
							__LIB_0__::func_120(iVar1, &Var11, iVar14);
							if (Var11.f_0 == ENTITY::GET_ENTITY_MODEL(iVar7))
							{
								__LIB_39__::func_513(&iVar7, Var11);
								VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar7, false);
								VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar7, false);
								VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar7, true);
								if (iVar1 == 2)
								{
									if (ENTITY::GET_ENTITY_MODEL(iVar7) == joaat("bodhi2"))
									{
										__LIB_6__::func_819(&iVar7);
									}
								}
								__LIB_10__::func_569(iVar7, iVar1);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar7, false);
							VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar7, false);
							VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar7, true);
							VEHICLE::SET_VEHICLE_COLOURS(iVar7, Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_6);
							VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar7, Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_7, Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_8);
							iVar12 = 0;
							while (iVar12 < 12)
							{
								VEHICLE::SET_VEHICLE_EXTRA(iVar7, iVar12 + 1, !Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_11[iVar12]);
								iVar12++;
							}
							if (__LIB_11__::func_903(&uVar9, &iVar8))
							{
								VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar7, &uVar9);
								VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iVar7, iVar8);
							}
							else
							{
								VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar7, &(Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_27));
								if (Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
								{
									VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iVar7, Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_26);
								}
							}
							VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iVar7, Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_84, Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_85, Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_86);
							VEHICLE::SET_VEHICLE_WINDOW_TINT(iVar7, Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_87);
							VEHICLE::SET_VEHICLE_NEON_COLOUR(iVar7, Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_93, Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_94, Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_95);
							VEHICLE::SET_VEHICLE_NEON_ENABLED(iVar7, 2, BitTest(Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_92, 28));
							VEHICLE::SET_VEHICLE_NEON_ENABLED(iVar7, 3, BitTest(Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_92, 29));
							VEHICLE::SET_VEHICLE_NEON_ENABLED(iVar7, 0, BitTest(Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_92, 30));
							VEHICLE::SET_VEHICLE_NEON_ENABLED(iVar7, 1, BitTest(Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_92, 31));
							if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iVar7) > 1 && Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_89 >= 0)
							{
								VEHICLE::SET_VEHICLE_LIVERY(iVar7, Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_89);
							}
							if (Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_90 > -1)
							{
								if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar7)))
								{
									if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar7)))
									{
										if (Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_90 == 6)
										{
											VEHICLE::SET_VEHICLE_WHEEL_TYPE(iVar7, Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_90);
										}
									}
									else
									{
										VEHICLE::SET_VEHICLE_WHEEL_TYPE(iVar7, Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_90);
									}
								}
							}
							__LIB_18__::func_176(&iVar7, &(Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[iVar13 /*295*/][iVar1 /*98*/].f_81));
							if (iVar1 == 2)
							{
								if (ENTITY::GET_ENTITY_MODEL(iVar7) == joaat("bodhi2"))
								{
									__LIB_6__::func_819(&iVar7);
								}
							}
							__LIB_10__::func_569(iVar7, iVar1);
						}
					}
					iLocal_180[iVar0] = 1;
				}
				iVar10[iVar0] = 1;
			}
		}
		if (!iVar6[iVar0])
		{
			iLocal_179[iVar0] = 0;
		}
		if (!iVar10[iVar0])
		{
			iLocal_180[iVar0] = 0;
		}
		iVar0++;
	}
}

int func_669(int iParam0, int iParam1, int iParam2)//Position - 0x87A89
{
	char* sVar0;
	int iVar1;
	if (iParam1 != 0)
	{
		while (func_675(iParam0, 1, iVar1, &sVar0))
		{
			if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST(&sVar0, iParam1) && ENTITY::GET_ENTITY_MODEL(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(&sVar0, iParam1)) == iParam1)
			{
				*iParam2 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(&sVar0, iParam1);
				return 1;
			}
			iVar1++;
		}
	}
	return 0;
}

int func_670(int iParam0)//Position - 0x87ADD
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_97810[iVar0]) && !PED::IS_PED_INJURED(Global_97810[iVar0]))
			{
				if (Global_97810[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_97810[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_671(int iParam0, char* sParam1, int iParam2)//Position - 0x87B59
{
	bool bVar0;
	struct<50> Var1;
	int iVar2;
	bool bVar3;
	if (!__LIB_0__::func_43(iParam0) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var1 = 12;
	Var1.f_13 = 12;
	Var1.f_26 = 12;
	Var1.f_39 = 9;
	Var1.f_49 = 9;
	if (iParam0 == __LIB_18__::func_173())
	{
		if (Global_78339[iParam0] == 0)
		{
			__LIB_39__::func_905(sParam1, PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 2);
		}
		else
		{
			__LIB_36__::func_41(PLAYER::PLAYER_PED_ID(), &Var1, iParam2);
			bVar0 = false;
			while (bVar0 < 12)
			{
				if (!BitTest(Global_78339[iParam0], bVar0))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam1, bVar0, Var1.f_13[bVar0], Var1[bVar0], __LIB_6__::func_757(iParam0));
				}
				bVar0++;
			}
			bVar0 = false;
			while (bVar0 < 9)
			{
				if (!BitTest(Global_78339[iParam0], (12 + bVar0)))
				{
					if (Var1.f_39[bVar0] == -1 || Var1.f_39[bVar0] == 255)
					{
						CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam1, bVar0, -1, 0, __LIB_6__::func_757(iParam0));
					}
					else
					{
						CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam1, bVar0, Var1.f_39[bVar0], Var1.f_49[bVar0], __LIB_6__::func_757(iParam0));
					}
				}
				bVar0++;
			}
		}
	}
	else
	{
		iVar2 = 0;
		bVar3 = false;
		while (iVar2 < 9 && bVar3 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_97810[iVar2]))
			{
				if (!PED::IS_PED_INJURED(Global_97810[iVar2]) && ENTITY::GET_ENTITY_MODEL(Global_97810[iVar2]) == __LIB_6__::func_757(iParam0))
				{
					if (Global_78339[iParam0] == 0)
					{
						__LIB_39__::func_905(sParam1, Global_97810[iVar2], ENTITY::GET_ENTITY_MODEL(Global_97810[iVar2]), 2);
					}
					else
					{
						__LIB_36__::func_41(Global_97810[iVar2], &Var1, iParam2);
						bVar0 = false;
						while (bVar0 < 12)
						{
							if (!BitTest(Global_78339[iParam0], bVar0))
							{
								CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam1, bVar0, Var1.f_13[bVar0], Var1[bVar0], __LIB_6__::func_757(iParam0));
							}
							bVar0++;
						}
						bVar0 = false;
						while (bVar0 < 9)
						{
							if (!BitTest(Global_78339[iParam0], (12 + bVar0)))
							{
								if (Var1.f_39[bVar0] == -1 || Var1.f_39[bVar0] == 255)
								{
									CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam1, bVar0, -1, 0, __LIB_6__::func_757(iParam0));
								}
								else
								{
									CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam1, bVar0, Var1.f_39[bVar0], Var1.f_49[bVar0], __LIB_6__::func_757(iParam0));
								}
							}
							bVar0++;
						}
					}
					bVar3 = true;
				}
			}
			iVar2++;
		}
		if (!bVar3)
		{
			bVar0 = false;
			while (bVar0 < 12)
			{
				if (!BitTest(Global_78339[iParam0], bVar0))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam1, bVar0, Global_100166[iParam0 /*65*/].f_13[bVar0], Global_100166[iParam0 /*65*/][bVar0], __LIB_6__::func_757(iParam0));
				}
				bVar0++;
			}
			bVar0 = false;
			while (bVar0 < 9)
			{
				if (Global_100166[iParam0 /*65*/].f_39[bVar0] == -1 || Global_100166[iParam0 /*65*/].f_39[bVar0] == 255)
				{
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam1, bVar0, -1, 0, __LIB_6__::func_757(iParam0));
				}
				else if (!BitTest(Global_78339[iParam0], (12 + bVar0)))
				{
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam1, bVar0, Global_100166[iParam0 /*65*/].f_39[bVar0], Global_100166[iParam0 /*65*/].f_49[bVar0], __LIB_6__::func_757(iParam0));
				}
				bVar0++;
			}
			__LIB_40__::func_995(sParam1, iParam0);
		}
	}
}

bool func_675(int iParam0, bool bParam1, int iParam2, char* sParam3)//Position - 0x8858D
{
	StringCopy(sParam3, "", 32);
	if (!bParam1)
	{
		switch (iParam2)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						StringCopy(sParam3, "Michael", 32);
						break;
					case 1:
						StringCopy(sParam3, "Franklin", 32);
						break;
					case 2:
						StringCopy(sParam3, "Trevor", 32);
						break;
				}
				break;
			case 1:
				switch (iParam0)
				{
					case 0:
						StringCopy(sParam3, "player_zero", 32);
						break;
					case 1:
						StringCopy(sParam3, "player_one", 32);
						break;
					case 2:
						StringCopy(sParam3, "player_two", 32);
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						StringCopy(sParam3, "tailgater" /* GXT: Tailgater */, 32);
						break;
					case 1:
						StringCopy(sParam3, "buffalo" /* GXT: Buffalo */, 32);
						break;
					case 2:
						StringCopy(sParam3, "bodhi2" /* GXT: Bodhi */, 32);
						break;
				}
				break;
			case 1:
				switch (iParam0)
				{
					case 0:
						StringCopy(sParam3, "michaels_car", 32);
						break;
					case 1:
						StringCopy(sParam3, "franklins_car", 32);
						break;
					case 2:
						StringCopy(sParam3, "trevors_car", 32);
						break;
				}
				break;
			case 2:
				switch (iParam0)
				{
					case 0:
						StringCopy(sParam3, "EXL_3_Michaels_car", 32);
						break;
					case 1:
						StringCopy(sParam3, "Franklin_Bike", 32);
						break;
				}
				break;
			}
	}
	return MISC::GET_HASH_KEY(sParam3) != 0;
}

void func_676()//Position - 0x88708
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_30__::func_691())
	{
		__LIB_42__::func_715();
		func_688();
		__LIB_0__::func_54(1, 1);
	}
	if (__LIB_0__::func_198() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		iLocal_65 = 1;
	}
	else
	{
		if (!__LIB_0__::func_43(__LIB_18__::func_173()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			iVar0 = __LIB_0__::func_430();
			if (__LIB_0__::func_43(iVar0))
			{
				func_685(iVar0, 1);
			}
			else if (func_683(0) && __LIB_11__::func_690(0))
			{
				func_685(0, 1);
			}
			else if (func_683(1) && __LIB_11__::func_690(1))
			{
				func_685(1, 1);
			}
			else if (func_683(2) && __LIB_11__::func_690(2))
			{
				func_685(2, 1);
			}
			else
			{
				func_685(0, 1);
			}
		}
		else
		{
			if (Global_97727 == 0)
			{
				iVar1 = PLAYER::PLAYER_PED_ID();
				__LIB_32__::func_750(iVar1, 1, 0);
				__LIB_26__::func_579(iVar1);
				__LIB_26__::func_512(iVar1);
				func_603(iVar1);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(iVar1, false, 0);
			}
			Global_97727 = 0;
		}
		iLocal_65 = 1;
	}
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (Global_113386.f_2363.f_539.f_2383[iVar2])
		{
			PLAYER::SPECIAL_ABILITY_UNLOCK(__LIB_6__::func_757(iVar2), 0);
		}
		else
		{
			PLAYER::SPECIAL_ABILITY_LOCK(__LIB_6__::func_757(iVar2), 0);
		}
		iVar2++;
	}
	Global_100166[0 /*65*/] = { Global_113386.f_2363.f_539[0 /*65*/] };
	Global_100166[1 /*65*/] = { Global_113386.f_2363.f_539[1 /*65*/] };
	Global_100166[2 /*65*/] = { Global_113386.f_2363.f_539[2 /*65*/] };
	func_680();
	__LIB_18__::func_172();
	__LIB_32__::func_816();
	iVar3 = PLAYER::PLAYER_PED_ID();
	__LIB_20__::func_676(__LIB_18__::func_173(), &iVar3);
}

void func_680()//Position - 0x889BE
{
	int iVar0;
	int iVar1;
	__LIB_18__::func_169();
	iVar0 = HUD::GET_MAIN_PLAYER_BLIP_ID();
	if (HUD::DOES_BLIP_EXIST(iVar0))
	{
		iVar1 = Global_113386.f_2363.f_539.f_4321;
		if (__LIB_0__::func_39(14))
		{
			iVar1 = __LIB_18__::func_168(PLAYER::PLAYER_PED_ID());
		}
		if (iVar1 == 0)
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, "BLIP_MICHAEL" /* GXT: Michael */);
		}
		else if (iVar1 == 1)
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, "BLIP_FRANKLIN" /* GXT: Franklin */);
		}
		else if (iVar1 == 2)
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, "BLIP_TREV" /* GXT: Trevor */);
		}
		else
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, "BLIP_PLAYER" /* GXT: Player */);
		}
	}
}

int func_683(int iParam0)//Position - 0x88B0C
{
	if (Global_113386.f_9085 || Global_3)
	{
		if (!Global_78319 || (Global_78319 && iParam0 != __LIB_0__::func_504(__LIB_0__::func_430())))
		{
			if (!__LIB_29__::func_691(__LIB_0__::func_388(iParam0)))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_685(int iParam0, bool bParam1)//Position - 0x88BAA
{
	if (!__LIB_0__::func_198() && __LIB_0__::func_43(iParam0))
	{
		if (!__LIB_32__::func_759(iParam0) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
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

void func_688()//Position - 0x88C46
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("ARMY"), joaat("PLAYER"));
}

void func_692(var uParam0)//Position - 0x89ED6
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_711(&Global_110133, 1024);
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_110601[iVar0 /*12*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	*uParam0 = 0;
	uParam0->f_6 = 0;
	uParam0->f_5 = -1f;
	Global_110589[0] = 49;
	Global_110589[1] = 43;
	Global_110589[2] = 109;
	Global_110589[3] = 25;
	Global_110589[4] = 25;
	Global_110589[5] = 35;
	Global_110589[6] = 28;
	Global_110589[7] = 43;
	Global_110589[8] = 14;
	Global_110589[9] = 86;
	Global_110589[10] = 86;
	func_695();
	func_694();
	func_693();
}

void func_693()//Position - 0x89F99
{
	Global_111764.f_2 = 47.1526f;
	Global_111767.f_2 = 47.15f;
	Global_111770.f_2 = 58.0271f;
	Global_111773.f_2 = 15.875f;
	Global_111776[0 /*3*/].f_2 = 47.1662f;
	Global_111776[1 /*3*/].f_2 = 47.2119f;
	Global_111776[2 /*3*/].f_2 = 47.153f;
	Global_111776[3 /*3*/].f_2 = 47.1531f;
	Global_111776[4 /*3*/].f_2 = 47.1523f;
	Global_111776[5 /*3*/].f_2 = 47.1531f;
	Global_111776[6 /*3*/].f_2 = 47.1529f;
	Global_111806.f_2 = 53.42f;
	Global_111809.f_2 = 48.2f;
	__LIB_0__::func_712(&Global_110133, 256);
}

void func_694()//Position - 0x8A050
{
	Global_110138[0 /*3*/].f_2 = 149.05f;
	Global_110138[1 /*3*/].f_2 = 44.4f;
	Global_110138[2 /*3*/].f_2 = 161.66f;
	Global_110138[3 /*3*/].f_2 = 17.5f;
	Global_110138[4 /*3*/].f_2 = 30.69f;
	Global_110138[5 /*3*/].f_2 = 33.12f;
	Global_110138[6 /*3*/].f_2 = 49.3f;
	Global_110138[7 /*3*/].f_2 = 70.38f;
	Global_110138[8 /*3*/].f_2 = 51.87f;
	Global_110138[9 /*3*/].f_2 = 31.3737f;
	Global_110138[10 /*3*/].f_2 = 47.1529f;
	Global_110172[0 /*13*/][0 /*3*/].f_2 = 58.42f;
	Global_110172[0 /*13*/][1 /*3*/].f_2 = 76.64f;
	Global_110172[0 /*13*/][2 /*3*/].f_2 = 44.19f;
	Global_110172[0 /*13*/][3 /*3*/].f_2 = 46.37f;
	Global_110172[1 /*13*/][0 /*3*/].f_2 = 46.86f;
	Global_110172[1 /*13*/][1 /*3*/].f_2 = 43.71f;
	Global_110172[1 /*13*/][2 /*3*/].f_2 = 17.7f;
	Global_110172[2 /*13*/][0 /*3*/].f_2 = 107.71f;
	Global_110172[2 /*13*/][1 /*3*/].f_2 = 43.23f;
	Global_110172[2 /*13*/][2 /*3*/].f_2 = 32.98f;
	Global_110172[3 /*13*/][0 /*3*/].f_2 = 100.3f;
	Global_110172[3 /*13*/][1 /*3*/].f_2 = 132.91f;
	Global_110172[3 /*13*/][2 /*3*/].f_2 = 178.98f;
	Global_110172[4 /*13*/][0 /*3*/].f_2 = 51.39f;
	Global_110172[4 /*13*/][1 /*3*/].f_2 = 51.14f;
	Global_110172[4 /*13*/][2 /*3*/].f_2 = 44.52f;
	Global_110172[5 /*13*/][0 /*3*/].f_2 = 117.41f;
	Global_110172[5 /*13*/][1 /*3*/].f_2 = 120.29f;
	Global_110172[5 /*13*/][2 /*3*/].f_2 = 87.93f;
	Global_110172[6 /*13*/][0 /*3*/].f_2 = 4.14f;
	Global_110172[6 /*13*/][1 /*3*/].f_2 = 27.65f;
	Global_110172[6 /*13*/][2 /*3*/].f_2 = 29.15f;
	Global_110172[7 /*13*/][0 /*3*/].f_2 = 43.77f;
	Global_110172[7 /*13*/][1 /*3*/].f_2 = 153.94f;
	Global_110172[7 /*13*/][2 /*3*/].f_2 = 51.37f;
	Global_110172[8 /*13*/][0 /*3*/].f_2 = 39.95f;
	Global_110172[8 /*13*/][1 /*3*/].f_2 = 28.11f;
	Global_110172[8 /*13*/][2 /*3*/].f_2 = 28.92f;
	Global_110172[9 /*13*/][0 /*3*/].f_2 = 28.51f;
	Global_110172[9 /*13*/][1 /*3*/].f_2 = 40.56f;
	Global_110172[9 /*13*/][2 /*3*/].f_2 = 46.99f;
	Global_110172[10 /*13*/][0 /*3*/].f_2 = 47.73f;
	Global_110172[10 /*13*/][1 /*3*/].f_2 = 44.34f;
	Global_110172[10 /*13*/][2 /*3*/].f_2 = 47.8f;
	Global_110172[11 /*13*/][0 /*3*/].f_2 = 47.38f;
	Global_110172[11 /*13*/][1 /*3*/].f_2 = 37.63f;
	Global_110172[11 /*13*/][2 /*3*/].f_2 = 41.22f;
	Global_110172[11 /*13*/][3 /*3*/].f_2 = 39.2f;
	Global_110172[12 /*13*/][0 /*3*/].f_2 = 65.44f;
	Global_110172[12 /*13*/][1 /*3*/].f_2 = 47.92f;
	Global_110172[12 /*13*/][2 /*3*/].f_2 = 44.36f;
	Global_110172[13 /*13*/][0 /*3*/].f_2 = 44.2f;
	Global_110172[13 /*13*/][1 /*3*/].f_2 = 40.62f;
	Global_110172[13 /*13*/][2 /*3*/].f_2 = 39.2f;
	Global_110172[14 /*13*/][0 /*3*/].f_2 = 54.24f;
	Global_110172[14 /*13*/][1 /*3*/].f_2 = 48.99f;
	Global_110172[14 /*13*/][2 /*3*/].f_2 = 56.11f;
	Global_110172[15 /*13*/][0 /*3*/].f_2 = 43.32f;
	Global_110172[15 /*13*/][1 /*3*/].f_2 = 43.41f;
	Global_110172[15 /*13*/][2 /*3*/].f_2 = 37.95f;
	Global_110172[15 /*13*/][3 /*3*/].f_2 = 37.52f;
	Global_110172[16 /*13*/][0 /*3*/].f_2 = 51.39f;
	Global_110172[16 /*13*/][1 /*3*/].f_2 = 46.46f;
	Global_110172[16 /*13*/][2 /*3*/].f_2 = 49.66f;
	Global_110172[17 /*13*/][0 /*3*/].f_2 = 33.41f;
	Global_110172[17 /*13*/][1 /*3*/].f_2 = 30.81f;
	Global_110172[17 /*13*/][2 /*3*/].f_2 = 31.73f;
	Global_110172[18 /*13*/][0 /*3*/].f_2 = 42.25f;
	Global_110172[18 /*13*/][1 /*3*/].f_2 = 45.23f;
	Global_110172[18 /*13*/][2 /*3*/].f_2 = 46.6f;
	Global_110172[19 /*13*/][0 /*3*/].f_2 = 32.58f;
	Global_110172[19 /*13*/][1 /*3*/].f_2 = 45.15f;
	Global_110172[19 /*13*/][2 /*3*/].f_2 = 44.17f;
	__LIB_0__::func_712(&Global_110133, 32);
}

void func_695()//Position - 0x8A554
{
	Global_110089[0 /*3*/].f_1 = 4464.305f;
	Global_110089[1 /*3*/].f_1 = 4428.8013f;
	Global_110089[2 /*3*/].f_1 = 4328.0522f;
	Global_110089[3 /*3*/].f_1 = 4276.504f;
	Global_110089[4 /*3*/].f_1 = 4506.765f;
	Global_110089[5 /*3*/].f_1 = 5139.87f;
	Global_110111[0 /*3*/].f_1 = 4592.2207f;
	Global_110111[1 /*3*/].f_1 = 4459.3745f;
	Global_110111[2 /*3*/].f_1 = 4473.0684f;
	Global_110111[3 /*3*/].f_1 = 4317.946f;
	Global_110111[4 /*3*/].f_1 = 4285.799f;
	Global_110111[5 /*3*/].f_1 = 4500.759f;
	__LIB_0__::func_712(&Global_110133, 2);
}

void func_697()//Position - 0x8A622
{
	if (BitTest(Global_113386.f_668.f_1317, 0) || BitTest(Global_113386.f_668.f_1317, 1))
	{
		if (!__LIB_0__::func_109() && !__LIB_0__::func_109())
		{
			MISC::CLEAR_BIT(&(Global_113386.f_668.f_1317), 0);
			MISC::CLEAR_BIT(&(Global_113386.f_668.f_1317), 1);
			func_139(0);
			func_138(0);
		}
	}
}

void func_698()//Position - 0x8A685
{
	int iVar0;
	int iVar1;
	iVar0 = PLAYER::PLAYER_PED_ID();
	__LIB_11__::func_858(__LIB_18__::func_173(), &iVar0);
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar1]))
		{
		}
		Local_181[iVar1 /*3*/] = { 0f, 0f, 0f };
		iLocal_183[iVar1] = 0;
		Global_97772[iVar1] = 0;
		Global_97782[iVar1] = 145;
		Global_97792[iVar1] = 0;
		iVar1++;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

